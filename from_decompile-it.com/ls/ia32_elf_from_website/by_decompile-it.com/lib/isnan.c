#include "isnan.c.h"
int rpl_isnanl( double long x )
{
  memory_double m;
  unsigned int exponent;
  m.word[0] = x/*.1_8of16*/;
  m.word[2] = x/*.9_12of16*/;
  exponent = m.word[2] & 32767;
  if ( exponent == 0 )
  {
    return m.word[1] >> 31;
  }
  if ( exponent == 32767 )
  {
    return ( m.word[0] | ( m.word[1] ^ -2147483648 ) ) != 0;
  }
  return ( m.word[1] >> 31 ) ^ 1;
}
