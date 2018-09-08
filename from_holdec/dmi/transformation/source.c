#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <sys/stat.h>
#include <stdint.h>

int basic_1_ternary_simple(int arg)
{
	return arg == 42 ? 0 : 1;
}

int basic_2_ternary_other(int arg)
{
	return arg == 42 ? 100 : 201;
}

int intermediate_1_ternary_blocks(int arg);
/*
{
	if (arg == 42) {
		return 0;
	} else {
		return 1;
	}
}
*/

int intermediate_2_other_in_blocks(int arg);
/*
{
	if (arg == 42) {
		return 100;
	} else {
		return 201;
	}
}
*/

int intermediate_10_double_word_signed_math(int64_t x, int64_t y, int64_t z)
{
	if (x + y > z) {
		puts("add");
	}

	if (x - y > z) {
		puts("sub");
	}
	if (x * y > z) {
		puts("mult");
	}

	if (x / y > z) {
		puts("diff");
	}

	if (x % y == z) {
		puts("modulo");
	}
	return 0;
}

int intermediate_10_double_word_unsigned_math(uint64_t x, uint64_t y,
					      uint64_t z)
{
	if (x + y > z) {
		puts("add");
	}

	if (x - y > z) {
		puts("sub");
	}
	if (x * y > z) {
		puts("mult");
	}

	if (x / y > z) {
		puts("diff");
	}

	if (x % y == z) {
		puts("modulo");
	}
	return 0;
}

int advanced_1_unrolled_loop()
{
	puts("basic");
	for (int i = 0; i < 10; i++) {
		putchar('0' + i);
	}

	puts("partial unrolled");
	for (int i = 0; i < 10; i += 2) {
		putchar('0' + i);
		putchar('0' + i + 1);
	}

	puts("fully unrolled");
	putchar('0');
	putchar('1');
	putchar('2');
	putchar('3');
	putchar('4');
	putchar('5');
	putchar('6');
	putchar('7');
	putchar('8');
	putchar('9');

	return 0;
}

int main(int argc, char *argv[])
{
	int result = 0;
	result += basic_1_ternary_simple(argc);
	result += basic_2_ternary_other(argc);
	result += intermediate_1_ternary_blocks(argc);
	result += intermediate_2_other_in_blocks(argc);
	result += intermediate_10_double_word_signed_math(argc, argc, argc);
	result += intermediate_10_double_word_unsigned_math(argc, argc, argc);
	result += advanced_1_unrolled_loop();

	return result + argv[0][0];
}
