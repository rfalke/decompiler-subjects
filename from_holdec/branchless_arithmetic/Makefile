CFLAGS=-Wall -O2

run: subject.exe
	./subject.exe

subject.exe: source.o
	gcc source.o -o subject.exe

source.o: source.c

clean:
	rm -f subject.exe *.o *~

indent:
	clang-format -i source.c
