all:
	gcc -m32 -c source/asm_part.s -o source/asm_part.o
	gcc -m32 -Wall -Werror -O2 -c source/main.c -o source/main.o
	gcc -m32 -lm -o ia32_elf/subject.exe source/asm_part.o source/main.o
	objdump -d ia32_elf/subject.exe >ia32_elf/subject.exe.objdump

clean:
	rm -f ia32_elf/subject.exe ia32_elf/subject.exe.objdump
	rm -f source/asm_part.o source/main.o
