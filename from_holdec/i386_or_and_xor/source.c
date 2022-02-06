#if 0
#include <stdio.h>

unsigned char gchar1, gchardummy, gchar2;
unsigned short gshort1, gshortdummy, gshort2;

// or al,bl
void
char_or1 ()
{
  if (gchar1 == 0 && gchar2 == 0)
    {
      printf (" yes");
    }
  else
    {
      printf ("  no");
    }
}

// or al,ah
void
char_or2 ()
{
  if (gshort1 == 0)
    {
      printf (" yes");
    }
  else
    {
      printf ("  no");
    }
}

// and al,bl; cmpb $-1, al
void
char_and1 ()
{
  if (gchar1 == 0xff && gchar2 == 0xff)
    {
      printf (" yes");
    }
  else
    {
      printf ("  no");
    }
}

// and al,ah; inc al
void
char_and2 ()
{
  if (gchar1 == 0xff && gchar2 == 0xff)
    {
      printf (" yes");
    }
  else
    {
      printf ("  no");
    }
}

// and al,ah
void
char_and3 ()
{
  if (gshort1 == 0xffff)
    {
      printf (" yes");
    }
  else
    {
      printf ("  no");
    }
}

// xor al,bl
void
char_xor1 ()
{
  if (gchar1 == gchar2)
    {
      printf (" yes");
    }
  else
    {
      printf ("  no");
    }
}

int
main ()
{
  {
    gchar1 = 1;
    gchar2 = 0;
    printf ("both (%d,%d) zero:", gchar1, gchar2);
    char_or1 ();
    puts ("");
  }
  {
    gshort1 = 0;
    printf ("short (%d) zero:", gshort1);
    char_or2 ();
    puts ("");
  }
  {
    gchar1 = 1;
    gchar2 = 0xff;
    printf ("both (%d,%d) 255:", gchar1, gchar2);
    char_and1 ();
    char_and2 ();
    puts ("");
  }
  {
    gshort1 = 0;
    printf ("short (%d) -1:", gshort1);
    char_and3 ();
    puts ("");
  }
  {
    gchar1 = 1;
    gchar2 = 2;
    printf ("both (%d,%d) equal:", gchar1, gchar2);
    char_xor1 ();
    puts ("");
  }

  return 0;
}
#endif
