#include <stdio.h>

extern int call_all();

int main(int argc, char *argv[])
{
	return argc + argv[0][0] + call_all();
}
