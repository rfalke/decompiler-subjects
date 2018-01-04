#include <stdio.h>

int main(int argc, char **argv)
{
	if ((argv && argc == 2) || (argv && argc == 42)) {
		puts("Should be expressed as argv!=null && (argc==2 || argc==42)");
	}
	if ((argv && argc == 2) || (argc == 42 && argv)) {
		puts("Also if order is different");
	}
	return 0;
}
