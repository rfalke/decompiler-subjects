
#include <stdio.h>

void forever() {
    int i=0;
    while(1) {
	printf("i=%d\n",i++);
    }
}

int main() {
    forever();
    return 0;
}
