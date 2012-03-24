#include "safe-write.c.h"
size_t safe_write( int fd, void *buf, size_t count )
{
{
  while ( result < 0 )
  {
    if ( *(int*)(__errno_location( )) != 4 )
    {
      if ( *(int*)(__errno_location( )) != 22 || count <= 0x7fffe000 )
      {
        return result;
      }
      count = 0x7fffe000;
    }
  }
  return result;
}
}
#if 0
#endif
