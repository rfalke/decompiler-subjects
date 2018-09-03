#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sum5(int a,int b, int c, int d, int e) {
	return a+b+c+d+e;
}

int main(int argc, char *argv[])
{
	return sum5(1, 2, 3, 4, 5);
}
