#include "LYmktime.c.h"
time_t LYmktime( char *string, BOOLEAN absolute )
{
  time_t result;
  if ( string && string[0] )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYmktime: Parsing '%s'\n", string );
    }
    result = parsedate( string, 0 );
    if ( absolute == 0 && time( 0 ) - result >= 0 )
      result = 0;
    if ( result && WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYmktime: clock=%d, ctime=%s", result, ctime( &result ) );
    }
  }
  return result;
}
#if 0
#endif
