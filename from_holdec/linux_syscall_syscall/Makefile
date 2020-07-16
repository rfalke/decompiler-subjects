all:
	nasm -f elf64  source.s 
	ld  -s -o x64_elf/subject.exe source.o
	-./x64_elf/subject.exe
	chmod a-x x64_elf/subject.exe
	rm source.o
