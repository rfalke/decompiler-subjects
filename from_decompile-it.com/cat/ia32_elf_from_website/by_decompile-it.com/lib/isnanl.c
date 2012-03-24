#include "isnanl.c.h"
int rpl_isnanl( double long x )
{
  memory_double m;
  unsigned int exponent;
  m.word[1] = x/*.5_8of16*/;
  m.word[2] = x/*.9_12of16*/;
  exponent = m.word[2] & 32767;
  if ( exponent == 0 )
  {
  }
  if ( exponent == 32767 )
  {
  }
  return ( m.word[1] >> 31 ) ^ 1;
}
#if 0
#endif
