#include "fseterr.c.h"
void fseterr( FILE *fp )
{
  fp->_flags |= 32;
  return;
}
