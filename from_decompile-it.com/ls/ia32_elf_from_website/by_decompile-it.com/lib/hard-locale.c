#include "hard-locale.c.h"
_Bool hard_locale( int category )
{
  _Bool hard = 1;
  char *p = setlocale( category, 0 );
  if ( p != 0 && ( strcmp( p, "C" ) == 0 || strcmp( p, "POSIX" ) == 0 ) )
  {
    hard = 0;
  }
  return hard;
}
