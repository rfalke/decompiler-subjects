all:
	gcc -m32 -Wall -O2 -c source.c -o part1.o
	gcc -m32 -Wall -c source2_asm.s -o part2_asm.o
	gcc -m32 part1.o part2_asm.o -o a.out
	./a.out
	
c:
	gcc -m32 -Wall -O2 -c source.c -o part1.o
	gcc -m32 -Wall -O2 -c source2.c -o part2.o
	gcc -m32 part1.o part2.o -o a.out
	./a.out
	gcc -m32 -Wall -O2 -S -c source.c
	gcc -m32 -Wall -O2 -S -c source2.c
