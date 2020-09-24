#!/bin/bash

set -e
#set -x

function foo {
	prefix="$1"
	size="$2"
	num="$3"
	groups="$4"
	perinst="$5"

	seed=$(date +"%s")

	echo "=== $prefix with $seed"

	rm -f output


	python generator.py input source_asm_${prefix}.s source_${prefix}.c $size $num $seed output "$groups" $perinst
	gcc -O2 -Wall source_${prefix}.c source_asm_${prefix}.s -o pass1
	./pass1 >output

	rm -rf x64_elf_${prefix}
	mkdir x64_elf_${prefix}

	python generator.py input source_asm_${prefix}.s source_${prefix}.c $size $num $seed output "$groups" $perinst
	gcc -O2 -Wall source_${prefix}.c source_asm_${prefix}.s -o pass2
	./pass2
	cp pass2 x64_elf_${prefix}/subject.exe
	chmod a-x x64_elf_${prefix}/subject.exe
}

foo "base_inst__1_var__no_complex" 1 0 "base" 1
foo "base_inst__10_vars__no_complex" 1 0 "base" 10

foo "extensions_inst__1_var__no_complex" 1 0 "bmi1,bmi2,adx,sse42,lzcnt" 1
foo "extensions_inst__10_vars__no_complex" 1 0 "bmi1,bmi2,adx,sse42,lzcnt" 10

foo "complex_with_base_100_funcs_of_size_16" 4 100 base 0
foo "complex_with_base_10_funcs_of_size_128" 7 10 base 0
foo "complex_with_base_10_funcs_of_size_1024" 10 10 base 0
