#include "snprintf.c.h"
void dummy_snprintf( void )
{
  return;
}
unsigned char *asprintfa( char *fmt )
{
  unsigned char *str;
  str[0] = 0;
  if ( vasprintf( ebp_12, fmt, ebp_12 ) >= 0 )
  {
    str[0] = mem_alloc( strlen(  ) + 1 );
    if ( mem_alloc( strlen(  ) + 1 ) )
      memcpy( &str[0], ebp_12, esi );
    free(  );
  }
  return &str[0];
}
#if 0
#endif
