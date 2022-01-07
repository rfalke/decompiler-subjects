CFLAGS=-Wall -O2

run: subject.exe
	./subject.exe

subject.exe: source.o source_asm.o
	gcc source.o source_asm.o -o subject.exe

source.o: source.c

source_asm.o: source_asm.s

clean:
	rm -f subject.exe *.o *~

indent:
	clang-format -i source.c
