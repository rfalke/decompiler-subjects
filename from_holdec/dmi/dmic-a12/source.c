#include <stdio.h>

int 
main(int argc, char *argv[])
{
	switch(argc) {
		case 0:
		case 1:
			puts("0 or 1");
			break;
		case 2:
			puts("2");
			break;
		case 3:
			puts("3");
			break;
		case 4:
			puts("4");
			break;
		case 5:
			puts("5");
			break;
		case 7:
			puts("7");
			break;
		case 6:
		default:
			puts("all other cases");
	}
	return 0;
}
