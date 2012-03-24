#include "xstrndup.c.h"
char *xstrndup( char *string, size_t n )
{
  char *s = strndup( string, n );
  if ( s == 0 )
  {
    xalloc_die( );
  }
  return s;
}
