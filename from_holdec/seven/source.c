#include <stdio.h>
#include <limits.h>

unsigned int test_1(unsigned int x)
{
	return x / 7;
}

// Reimplementation of test_1 with C
unsigned int test_2(unsigned int x)
{
	unsigned long long a = x;
	a = a * 0x24924925;
	a = a >> 32;
	unsigned int b = a;
	return ((x - b) / 2 + b) / 4;
}

unsigned int test_3(unsigned int x)
{
	unsigned long long a = x;
	a = a * 0x24924925;
	a = a >> 32;
	return a;
}

int main()
{
	unsigned int last = 0;
	for (unsigned int i = 0; i <= UINT_MAX; i += 1000000) {
		unsigned int a = test_1(i);
		unsigned int b = test_2(i);
		unsigned int c = test_3(i);
		if (a != b || a != c) {
			printf("%u %u %u (diff=%d) %u (diff=%d)\n", i, a, b,
			       b - a, c, c - a);
		}
		if (last > 0 && i < last) {
			break;
		}
		last = i;
	}
	return 0;
}
