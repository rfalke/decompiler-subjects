#include "filemode.c.h"
static char ftypelet( mode_t bits );
char ftypelet( mode_t bits )
{
  if ( ( bits & 61440 ) == 32768 )
  {
  }
  else
  if ( ( bits & 61440 ) == 16384 )
  {
  }
  else
  if ( ( bits & 61440 ) == 24576 )
  {
  }
  else
  if ( ( bits & 61440 ) == 8192 )
  {
  }
  else
  if ( ( bits & 61440 ) == 40960 )
  {
  }
  else
  if ( ( bits & 61440 ) == 4096 )
  {
  }
  else
  if ( ( bits & 61440 ) == 49152 )
  {
  }
  else
  {
  }
  return 63;
}
void strmode( mode_t mode, char *str )
{
  str[0] = ftypelet( mode );
  str[1] = ( mode & 256 ) == 0 ? '-' : 'r';
  str[2] = ( mode & 128 ) == 0 ? '-' : 'w';
  str[3] = ( mode & 2048 ) == 0 ? ( mode & 64 ) == 0 ? '-' : 'x' : ( mode & 64 ) == 0 ? 'S' : 's';
  str[4] = ( mode & 32 ) == 0 ? '-' : 'r';
  str[5] = ( mode & 16 ) == 0 ? '-' : 'w';
  str[6] = ( mode & 1024 ) == 0 ? ( mode & 8 ) == 0 ? '-' : 'x' : ( mode & 8 ) == 0 ? 'S' : 's';
  str[7] = ( mode & 4 ) == 0 ? '-' : 'r';
  str[8] = ( mode & 2 ) == 0 ? '-' : 'w';
  str[9] = ( mode & 512 ) == 0 ? ( mode & 1 ) == 0 ? '-' : 'x' : ( mode & 1 ) == 0 ? 'T' : 't';
  str[10] = ' ';
  str[11] = 0;
  return;
}
void filemodestring( struct stat *statp, char *str )
{
  strmode( statp->st_mode, str );
  return;
}
