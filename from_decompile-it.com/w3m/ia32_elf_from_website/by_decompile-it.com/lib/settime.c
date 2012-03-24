#include "settime.c.h"
int settime( struct timespec *ts )
{
{
  int r = clock_settime( 0, ts );
  if ( r == 0 || *(int*)(__errno_location( )) == 1 )
  {
    return r;
  }
  struct timeval tv;
  tv.tv_sec = ts->tv_sec;
  tv.tv_usec = ( (/*HI*/int)( 274877907 * ts->tv_nsec ) >> 6 ) - ( ts->tv_nsec >> 31 );
  return settimeofday( &tv.tv_sec, 0 );
}
}
