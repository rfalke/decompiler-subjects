#include "lametime.c.h"
double GetCPUTime( void )
{
  clock_t t = clock( );
  return (double)( t ) / 1000000.000000000000;
}
double GetRealTime( void )
{
  struct timeval t;
  gettimeofday( &t.tv_sec, ebp_52 );
  return (double)( t.tv_sec ) + ( (double)( t.tv_usec ) * 0.000001000000 );
}
int lame_set_stream_binary_mode( FILE *fp )
{
  return 0;
}
off_t lame_get_file_size( char *filename )
{
  int eax;
  int edx;
  struct stat sb;
  return eax;
}
#if 0
#endif
