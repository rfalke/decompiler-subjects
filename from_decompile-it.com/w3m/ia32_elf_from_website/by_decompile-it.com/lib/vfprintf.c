#include "vfprintf.c.h"
int rpl_vfprintf( FILE *fp, char *format, va_list args )
{
  int eax;
  char buf[2000];
  char *output;
  size_t len;
  size_t lenbuf = 2000;
  output = vasnprintf( buf, &lenbuf, format, args );
  len = lenbuf;
  if ( output == 0 )
  {
    fseterr( fp );
  }
  else
  {
    if ( fwrite( output, 1, len, fp ) < len )
    {
      if ( output != buf[0] )
      {
        int saved_errno = *(int*)(__errno_location( ));
        free( output );
        *(int*)(__errno_location( )) = saved_errno;
      }
    }
    else
    {
      if ( (int)len < 0 )
      {
        *(int*)(__errno_location( )) = 75;
        fseterr( fp );
      }
      else
      {
      }
    }
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return (int)len;
}
