#include "hardio.c.h"
ssize_t hard_write( int fd, unsigned char *data, size_t datalen )
{
  if ( assert_failed == 0 )
  {
    assert_failed = data[0] == 0;
    if ( !(_Bool)( data[0] != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/hardio.c";
      errline = 102;
      elinks_internal( "assertion data && datalen &gt;= 0 failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( datalen )
    {
      while ( written == -1 )
      {
        if ( __errno_location(  ) >= 1 )
        {
          datalen -= write( fd, &data[0], datalen );
          if ( datalen == write( fd, &data[0], datalen ) )
            break;
          data[0] = data[ write( fd, &data[0], datalen ) ];
        }
        else
        if ( !1 )
        {
          data[0] = data[0];
          fd = fd;
          break;
        }
      }
      if ( *(int*)(__errno_location(  )) == 4 )
        continue;
      return -1;
    }
    else
    {
      datalen = datalen;
    }
    return datalen - datalen;
  }
B2:  assert_failed = 0;
  return -1;
}
ssize_t hard_read( int fd, unsigned char *data, size_t datalen )
{
  if ( assert_failed == 0 )
  {
    assert_failed = data[0] == 0;
    if ( !(_Bool)( data[0] != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/hardio.c";
      errline = 132;
      elinks_internal( "assertion data && datalen &gt;= 0 failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( datalen )
    {
      while ( readlen == -1 )
      {
        if ( __errno_location(  ) >= 1 )
        {
          datalen -= read( fd, &data[0], datalen );
          if ( datalen == read( fd, &data[0], datalen ) )
            break;
          data[0] = data[ read( fd, &data[0], datalen ) ];
        }
        else
        if ( !1 )
        {
          data[0] = data[0];
          fd = fd;
          break;
        }
      }
      if ( *(int*)(__errno_location(  )) == 4 )
        continue;
      return -1;
    }
    else
    {
      datalen = datalen;
    }
    return datalen - datalen;
  }
B2:  assert_failed = 0;
  return -1;
}
#if 0
#endif
