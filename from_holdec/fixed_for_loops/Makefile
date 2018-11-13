CFLAGS=-Wall -Werror -m32 -O2 -fno-inline  -Wsuggest-attribute=noreturn -Wextra
all: source_asm.s
	gcc $(CFLAGS) -g -c source_asm.s
	gcc $(CFLAGS) -c source.c
	gcc $(CFLAGS) -S source.c
	gcc -m32 -o subject.exe source.o source_asm.o

source_asm.s: generator.py
	./generator.py >tmp.s
	mv tmp.s source_asm.s

copy:
	mkdir -p ia32_elf
	cp subject.exe ia32_elf
	chmod a-x ia32_elf/subject.exe

indent:
	indent -linux source.c

clean:
	rm -f *~ *.o source_asm.s source.s subject.exe
