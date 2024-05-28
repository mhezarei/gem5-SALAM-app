#!/bin/bash

set -e

FLAGS="HWACC,WindowManager"
BENCH="ts"
DEBUG="false"
PRINT_TO_FILE="false"
VALGRIND="false"
GDB="false"

while getopts ":f:vdpcg" opt; do
	case $opt in
		d )
			DEBUG="true"
			;;
		p )
			PRINT_TO_FILE="true"
			;;
		f )
			if [ -z "${FLAGS}" ]
			then
				FLAGS+="${OPTARG}"
			else
				FLAGS+=",${OPTARG}"
			fi
			;;
		v )
			VALGRIND="true"
			;;
		g )
			GDB="true"
			;;
		* )
			echo "Invalid argument: ${OPTARG}"
			echo "Usage: $0 (-f DEBUGFLAG) (-p) (-d) (-g)"
			exit 1
			;;
	esac
done

OUTDIR=$M5_APP_PATH/BM_ARM_OUT/$BENCH

if [ "${DEBUG}" == "true" ]; then
	BINARY="ddd --gdb --args ${M5_PATH}/build/ARM/gem5.debug"
elif [ "${VALGRIND}" == "true" ]; then
	BINARY="valgrind \
	--leak-check=yes \
	--suppressions=util/valgrind-suppressions \
	--suppressions=util/salam.supp \
	--track-origins=yes \
	--error-limit=no \
	--leak-check=full \
	--show-leak-kinds=definite,possible \
	--show-reachable=no \
	--log-file=${OUTDIR}/valgrind.log \
	${M5_PATH}/build/ARM/gem5.debug"
else
	if [ "${GDB}" == "true" ]; then
		BINARY="${M5_PATH}/build/ARM/gem5.debug"
	else
		BINARY="${M5_PATH}/build/ARM/gem5.opt"
	fi
fi

KERNEL=$M5_APP_PATH/$BENCH/sw/main.elf

SYS_OPTS="--mem-size=8GB \
		  --mem-type=DDR4_2400_8x8 \
		  --mem-channels=16 \
          --kernel=$KERNEL \
          --disk-image=$M5_PATH/benchmarks/common/fake.iso \
          --machine-type=VExpress_GEM5_V1 \
          --dtb-file=none \
		  --bare-metal \
          --cpu-type=DerivO3CPU"
CACHE_OPTS="--caches"

DEBUG_FLAGS=""

if [ "${FLAGS}" != "" ]; then
	DEBUG_FLAGS+="--debug-flags="
	DEBUG_FLAGS+=$FLAGS
fi

RUN_SCRIPT=""
if [ "${GDB}" == "true" ]; then
	RUN_SCRIPT="gdb --args $BINARY \
				$DEBUG_FLAGS \
				--outdir=$OUTDIR \
				$M5_PATH/configs/SALAM/fs_$BENCH.py $SYS_OPTS \
				--accpath=$M5_APP_PATH \
				--accbench=$BENCH \
				$CACHE_OPTS"
else
	RUN_SCRIPT="$BINARY \
				$DEBUG_FLAGS \
				--outdir=$OUTDIR \
				$M5_PATH/configs/SALAM/fs_$BENCH.py $SYS_OPTS \
				--accpath=$M5_APP_PATH \
				--accbench=$BENCH \
				$CACHE_OPTS"
fi

rm hw/pe* ; python3 generators/pe_generator.py
python3 generators/config_generator.py > config.yml
python3 generators/top_generator.py > hw/top.c
python3 generators/addr_generator.py
(clear ; cd $M5_APP_PATH/$BENCH && rm -f sw/main.elf sw/main.o ; make)
${M5_PATH}/tools/SALAM-Configurator/systembuilder.py --sys-name $BENCH --bench-path "$M5_APP_PATH/$BENCH"

# exit

if [ "${PRINT_TO_FILE}" == "true" ]; then
	mkdir -p $OUTDIR
	$RUN_SCRIPT > ${OUTDIR}/f64b64_nocache.txt
else
	$RUN_SCRIPT
fi
