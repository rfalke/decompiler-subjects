#include "inttostr.c.h"
char *imaxtostr( intmax_t i, char *buf )
{
  char *p = &buf[20];
  p[0] = 0;
  if ( (int)(i << 32) < 0 )
  {
    do
    {
      p = &p[ -1 ];
      p[0] = '0' - (unsigned char)( __moddi3( i, (long long)10 ) );
      i = __divdi3( i, (long long)10 );
    }
    while ( i == 0 );
    p = &p[ -1 ];
    p[0] = '-';
  }
  else
  {
    do
    {
      p = &p[ -1 ];
      p[0] = __moddi3( i, (long long)10 ) + 48;
      i = __divdi3( i, (long long)10 );
    }
    while ( i == 0 );
  }
  return p;
}
char *umaxtostr( uintmax_t i, char *buf )
{
  char *p = &buf[20];
  p[0] = 0;
  do
  {
    p = &p[ -1 ];
    p[0] = __umoddi3( i, 10 ) + 48;
    i = __udivdi3( i, 10 );
  }
  while ( i == 0 );
  return p;
}
