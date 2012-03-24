#include "close-stream.c.h"
int close_stream( FILE *stream )
{
  _Bool some_pending = __fpending( stream ) != 0;
  _Bool prev_fail = ferror_unlocked( stream ) != 0;
  _Bool fclose_fail = fclose( stream ) != 0;
  if ( prev_fail == 0 && ( ( ( fclose_fail ^ 1 ) & 255 ) || ( some_pending == 0 && *(int*)(__errno_location( )) == 9 ) ) )
  {
    return 0;
  }
  if ( ( fclose_fail ^ 1 ) & 255 )
  {
    *(int*)(__errno_location( )) = 0;
  }
  return -1;
}
#if 0
#endif
