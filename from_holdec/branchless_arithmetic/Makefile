CFLAGS=-Wall -O2

run: subject.exe
	./subject.exe

variants:
	mkdir -p ia32_elf_gcc ia32_elf_clang x64_elf_gcc x64_elf_clang
	gcc $(CFLAGS) source.c -o x64_elf_gcc/subject.exe
	clang $(CFLAGS) source.c -o x64_elf_clang/subject.exe
	gcc -m32 $(CFLAGS) source.c -o ia32_elf_gcc/subject.exe
	clang -m32 $(CFLAGS) source.c -o ia32_elf_clang/subject.exe
	chmod a-x */subject.exe

subject.exe: source.o
	gcc source.o -o subject.exe

source.o: source.c

clean:
	rm -f subject.exe *.o *~

indent:
	clang-format -i source.c
