KERN=*.c
build: $(FILES)
	clang -O1 -S -Wall -fno-lax-vector-conversions -fno-slp-vectorize -fno-vectorize -fno-unroll-loops -fno-inline -fno-builtin -emit-llvm $(KERN) -target armv7-pc-none-eabi
	sed -i 's/.*HASHEMI.*//g' *.ll

clean:
	rm -f *.ll
