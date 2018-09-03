#include <stdio.h>

int 
main(int argc, char *argv[])
{
	argc-=3;
//	argc+=argc==0;
	if(argc==0) {
		puts("hello");
	}
	return argc;
}
