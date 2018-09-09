#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <sys/stat.h>
#include <stdint.h>
#include <stdarg.h>

int __attribute__ ((optimize(0))) intermediate_1_cmp_with_are_constant(int arg)
{
	if (arg == 1 && arg == 2) {
		puts("not reached");
	}

	if (arg == 1 && arg > 2) {
		puts("not reached");
	}

	if (arg < 0 && arg > 0) {
		puts("not reached");
	}

	return 0;
}

int __attribute__ ((optimize(0))) intermediate_2_cmp_with_extra(int arg)
{
	if (arg > 10 && arg < 20 && arg != 30) {
		puts("!=30 is always true");
	}
	if (arg == 1 && arg != 2) {
		puts("!=2 is always true");
	}

	if (arg > 10 && arg > 9) {
		puts(">9 is always true");
	}

	return 0;
}

int intermediate_3_division_by_multiplication(int arg)
{
	putchar(arg / 7);
	return 0;
}


int __attribute__ ((optimize(0))) intermediate_4_swap_with_xor(int arg1, int arg2)
{
	register int x = arg1;
	register int y = arg2;
	x ^= y;
	y ^= x;
	x ^= y;
	putchar(x);
	putchar(y);
	return 0;
}

int __attribute__ ((optimize(0))) advanced_1_boolean_minization(int x, int y,
								int z)
{
	// from https://www.geeksforgeeks.org/digital-logic-minimization-boolean-functions/
	// input:          x'y'z + x'yz + xy'
	// expected outut: x'z + xy'
	return (!x && !y && z) || (!x && y && z) || (x && !y);
}


int main(int argc, char *argv[])
{
	int result = 0;
	result += intermediate_1_cmp_with_are_constant(argc);
	result += intermediate_2_cmp_with_extra(argc);
	result += intermediate_3_division_by_multiplication(argc);
	result += intermediate_4_swap_with_xor('0', 'a');
	
	result +=
	    advanced_1_boolean_minization(argc == 0, argc % 2 == 0,
					  argc % 3 == 0);



	exit(result + argv[0][0]);
	return 0;
}
