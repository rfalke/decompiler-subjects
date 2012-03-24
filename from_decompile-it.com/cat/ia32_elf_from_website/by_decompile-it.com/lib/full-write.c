#include "full-write.c.h"
size_t full_write( int fd, void *buf, size_t count )
{
  size_t total = 0;
  char *ptr = (char*)buf;
  for ( ; count;  )
  {
    size_t n_rw = safe_write( fd, (void*)ptr, count );
    if ( n_rw == -1 )
      break;
    if ( n_rw == 0 )
    {
      *(int*)(__errno_location( )) = 28;
      break;
    }
    else
    {
      total += n_rw;
      ptr = &ptr[ n_rw ];
      count -= n_rw;
    }
  }
  return total;
}
#if 0
#endif
