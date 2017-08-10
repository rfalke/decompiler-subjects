/* gcc -nostdlib -o ../064_swap -O2 064_swap.c */

void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}
