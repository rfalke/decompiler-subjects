all:
	nasm -f elf source.s 
	ld -melf_i386 -s -o ia32_elf/subject.exe source.o
	-./ia32_elf/subject.exe
	chmod a-x ia32_elf/subject.exe
	rm source.o
