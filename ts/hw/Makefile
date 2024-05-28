KERN=*.c
build: $(FILES)
	clang -O1 -S -Wall -fno-lax-vector-conversions -fno-slp-vectorize -fno-vectorize -fno-unroll-loops -fno-inline -fno-builtin -emit-llvm $(KERN) -target armv7-pc-none-eabi
	sed -i 's/.*HABIBI.*//g' calc.ll
	sed -i 's/trunc i64 %21 to i32/inttoptr i64 %21 to i64*/g' calc.ll
	sed -i 's/inttoptr i32 %24 to i64\*/inttoptr i64 %21 to i64\*/g' calc.ll

clean:
	rm -f *.ll
