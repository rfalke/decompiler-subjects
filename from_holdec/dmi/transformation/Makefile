CFLAGS=-Wall -Werror -m32 -O2 -fno-inline  -Wsuggest-attribute=noreturn -Wextra
all:
	gcc $(CFLAGS) -g -c source_asm.s
	gcc $(CFLAGS) -c source.c
	gcc $(CFLAGS) -S source.c
	gcc -m32 -o subject.exe source.o source_asm.o

copy:
	mkdir -p ia32_elf
	cp subject.exe ia32_elf
	chmod a-x ia32_elf/subject.exe

indent:
	indent -linux source.c

clean:
	rm -f *~ *.o source.s subject.exe
