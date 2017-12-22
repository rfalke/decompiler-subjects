#include <stdio.h>

void
f (int s, unsigned u)
{
  if (s >= 2 && s <= 7)
    {
      printf ("%d signed in range\n", s);
    }
  if (u >= 2 && u <= 7)
    {
      printf ("%d unsigned in range\n", u);
    }
}

int
main (int argc, char *argv[])
{
  for (int i = 0; i < 10; i++)
    {
      f (i, i);
    }
  return 0;
}
