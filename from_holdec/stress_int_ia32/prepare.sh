#!/bin/bash

set -e
#set -x

function foo {
	prefix="$1"
	size="$2"
	num="$3"
	groups="$4"
	perinst="$5"

	rm -f output

	seed=$(date +"%s")

	python generator.py input source_asm_${prefix}.s source_${prefix}.c $size $num $seed output "$groups" $perinst
	gcc -O2 -Wall -m32 source_${prefix}.c source_asm_${prefix}.s -o pass1
	./pass1 >output

	rm -rf ia32_elf_${prefix}
	mkdir ia32_elf_${prefix}

	python generator.py input source_asm_${prefix}.s source_${prefix}.c $size $num $seed output "$groups" $perinst
	gcc -O2 -Wall -m32 source_${prefix}.c source_asm_${prefix}.s -o ia32_elf_${prefix}/subject.exe
	./ia32_elf_${prefix}/subject.exe
	chmod a-x ia32_elf_${prefix}/subject.exe
}

foo "base_inst__1_var__no_complex" 1 0 "base" 1
foo "base_inst__10_vars__no_complex" 1 0 "base" 10

foo "base_and_packedbcd_inst__1_var__no_complex" 1 0 "base,packedBcd" 1
foo "base_and_packedbcd_inst__10_vars__no_complex" 1 0 "base,packedBcd" 10

foo "extensions_inst__1_var__no_complex" 1 0 "bmi1,bmi2,adx,sse42,lzcnt" 1
foo "extensions_inst__10_vars__no_complex" 1 0 "bmi1,bmi2,adx,sse42,lzcnt" 10

foo "complex_with_base_100_funcs_of_size_16" 4 100 base 0
foo "complex_with_base_10_funcs_of_size_128" 7 10 base 0
foo "complex_with_base_10_funcs_of_size_1024" 10 10 base 0
