CFLAGS=-Wall -O2

run: subject.exe
	./subject.exe

subject.exe: source.o source_asm.o
	gcc source.o source_asm.o -o subject.exe

source.o: source.c source_decl.inc source_main.inc

source_asm.o: source_asm.s

source_asm.s source_decl.inc source_main.inc: generate.py
	./generate.py

clean:
	rm -f subject.exe *.o source_asm.s source_decl.inc source_main.inc *~

indent:
	clang-format -i source.c
