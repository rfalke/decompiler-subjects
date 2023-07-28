#include <stdio.h>

extern int mystrcpy(void *dest, void *src);

char buffer[100];
int
main ()
{
  mystrcpy(buffer, "hello world");
  puts(buffer);
  return 0;
}
