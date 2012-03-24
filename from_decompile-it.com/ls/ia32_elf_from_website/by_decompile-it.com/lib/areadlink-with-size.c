#include "areadlink-with-size.c.h"
char *areadlink_with_size( char *file, size_t size )
{
  size_t symlink_max = 1024;
  size_t INITIAL_LIMIT_BOUND = 8192;
  size_t initial_limit = INITIAL_LIMIT_BOUND <= symlink_max ? symlink_max + 1 : INITIAL_LIMIT_BOUND;
  size_t buf_size = size < initial_limit ? size + 1 : initial_limit;
{
  while ( buffer == 0 )
  {
    link_length = r = readlink( file, buffer, buf_size );
    if ( r < 0 && *(int*)(__errno_location( )) != 34 )
    {
      int saved_errno = *(int*)(__errno_location( ));
      free( buffer );
      *(int*)(__errno_location( )) = saved_errno;
      return 0;
    }
    if ( link_length < buf_size )
    {
      buffer[ link_length ] = 0;
      return buffer;
    }
    free( buffer );
    if ( buf_size <= 0x3fffffff )
    {
      buf_size <<= 1;
    }
    else
    if ( buf_size > 0x7ffffffe )
    {
      *(int*)(__errno_location( )) = 12;
      return 0;
    }
    buf_size = 0x7fffffff;
  }
  return 0;
}
}
