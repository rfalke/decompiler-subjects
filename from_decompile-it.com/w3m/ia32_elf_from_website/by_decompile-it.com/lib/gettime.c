#include "gettime.c.h"
void gettime( struct timespec *ts )
{
  if ( clock_gettime( 0, ts ) != 0 )
  {
    struct timeval tv;
    gettimeofday( &tv.tv_sec, 0 );
    ts->tv_sec = tv.tv_sec;
    ts->tv_nsec = tv.tv_usec * 1000;
  }
  return;
}
