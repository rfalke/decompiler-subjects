#include "time.c.h"
timeval_T *timeval_now( timeval_T *t )
{
  struct timeval tv;
  gettimeofday( &tv.tv_sec, 0 );
  t->sec = tv.tv_sec;
  t->usec = tv.tv_usec;
  return t;
}
timeval_T *timeval_sub_interval( timeval_T *t, timeval_T *interval )
{
  int ecx;
  int edx;
  t[0].sec -= interval[0].sec;
  if ( t[0].sec - interval[0].sec >= 0 )
  {
    t->usec -= interval->usec;
    if ( t->usec - interval->usec < 0 )
    {
      *(int*)(t[0].sec - interval[0].sec)--;
      do
      {
      }
      while ( ( t->usec - interval->usec ) + 0xf4240 < 0 );
      t->usec = ( t->usec - interval->usec ) + 0xf4240;
      t = &ebx;
      if ( t[0].sec < 0 )
        goto B1;
    }
    return t;
  }
B1:  t->sec = 0;
  t->usec = 0;
  return t;
}
timeval_T *timeval_sub( timeval_T *res, timeval_T *older, timeval_T *newer )
{
  int ecx;
  int edx;
  res[0].sec = newer[0].sec - older[0].sec;
  res->usec = newer->usec - older->usec;
  if ( newer->usec - older->usec < 0 )
  {
    do
    {
      *(int*)(newer[0].sec - older[0].sec)--;
    }
    while ( ( newer->usec - older->usec ) + 0xf4240 < 0 );
    res->usec = ( newer->usec - older->usec ) + 0xf4240;
    res->sec = ecx;
  }
  return res;
}
timeval_T *timeval_add( timeval_T *res, timeval_T *base, timeval_T *t )
{
  int ecx;
  res[0].sec = t[0].sec + base[0].sec;
  res->usec = t->usec + base->usec;
  if ( t->usec + base->usec > 0xf423f )
  {
    do
    {
    }
    while ( ( t->usec + base->usec ) - 0xf4240 - 0xf4240 > 0xf423f );
    res->usec = ( t->usec + base->usec ) - 0xf4240;
    res->sec = t[0].sec + base[0].sec + 1;
  }
  return res;
}
timeval_T *timeval_add_interval( timeval_T *t, timeval_T *interval )
{
  int ecx;
  t[0].sec += interval[0].sec;
  t->usec += interval->usec;
  if ( t->usec + interval->usec > 0xf423f )
  {
    t->sec = t->sec;
    do
    {
      interval->sec = interval->sec;
    }
    while ( ( t->usec + interval->usec ) - 0xf4240 - 0xf4240 > 0xf423f );
    t->usec = ( t->usec + interval->usec ) - 0xf4240;
    t->sec = interval->sec;
  }
  return t;
}
timeval_T *timeval_from_double( timeval_T *t, double x )
{
  return (int)( x );
  t[0].sec = ebp_8;
  return ebp_8;
  t->usec = (int)( ( x - (double)( ebp_8 ) ) * 1000000.000000000000 );
}
timeval_T *timeval_from_milliseconds( timeval_T *t, milliseconds_T milliseconds )
{
  t[0].sec = milliseconds / 1000;
  t->usec = ( milliseconds - ( ( milliseconds / 1000 ) * 1000 ) ) * 1000;
  return t;
}
timeval_T *timeval_from_seconds( timeval_T *t, long seconds )
{
  t->usec = 0;
  t[0].sec = seconds;
  return t;
}
milliseconds_T sec_to_ms( long sec )
{
  if ( assert_failed == 0 )
  {
    assert_failed = sec > 0x20c49a;
    if ( sec > 0x20c49a )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/time.c";
      errline = 160;
      elinks_internal( "assertion sec &gt;= 0 && sec &lt; LONG_MAX / 1000L failed!" );
      if ( assert_failed )
        goto B2;
    }
    return sec * 1000;
  }
B2:  assert_failed = 0;
  return 2147483;
}
milliseconds_T add_ms_to_ms( milliseconds_T a, milliseconds_T b )
{
  if ( assert_failed == 0 )
  {
    if ( b < 0 || a < 0 || 0x7fffffff - a <= b )
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/time.c";
      errline = 172;
      elinks_internal( "assertion la &gt;= 0 && lb &gt;= 0 && lb &lt; LONG_MAX - la failed!" );
      if ( assert_failed )
        goto B2;
    }
    else
    {
      assert_failed = 0;
    }
    return b + a;
  }
B2:  assert_failed = 0;
  return 2147483;
}
milliseconds_T mult_ms( milliseconds_T a, long lb )
{
  int edx;
  if ( assert_failed == 0 )
  {
    if ( lb < 0 || a < 0 || (long long)2147483647 / lb <= a )
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/time.c";
      errline = 183;
      elinks_internal( "assertion la &gt;= 0 && lb &gt;= 0 && la &lt; LONG_MAX / lb failed!" );
      if ( assert_failed )
        goto B2;
    }
    else
    {
      assert_failed = 0;
    }
    return lb * a;
  }
B2:  assert_failed = 0;
  return 2147483;
}
milliseconds_T timeval_to_milliseconds( timeval_T *t )
{
  int eax;
  milliseconds_T a = sec_to_ms( t[0].sec );
  return add_ms_to_ms( sec_to_ms( t[0].sec ), t->usec / 1000 );
}
long timeval_to_seconds( timeval_T *t )
{
  return t[0].sec + ( ( (/*HI*/int)( t->usec * 0x431bde83 ) >> 18 ) - ( t->usec >> 31 ) );
}
int timeval_is_positive( timeval_T *t )
{
  if ( t[0].sec < 1 )
  {
    if ( !1 )
    {
      return 0;
    }
    return (unsigned char)( t->usec > 0 );
  }
  else
  {
    return 1;
  }
}
void timeval_limit_to_zero_or_one( timeval_T *t )
{
  if ( t[0].sec < 0 )
    t = 0;
  if ( t->usec < 0 )
  {
    t->usec = 0;
    return;
  }
  return;
}
int timeval_cmp( timeval_T *t1, timeval_T *t2 )
{
  int eax;
  if ( t1[0].sec <= t2[0].sec )
  {
    if ( ccdep1 < ccdep2 )
    {
    }
    return t1->usec - t2->usec;
  }
}
int timeval_div_off_t( off_t n, timeval_T *t )
{
  int ecx;
  if ( ( (/*HI*/int)( t[0].sec * 1000 ) + ( ( t->usec / 1000 ) >> 31 ) + ( ( ( t->usec / 1000 ) + (int)( t[0].sec * 1000 ) + (int)( t[0].sec * 1000 ) < ( t->usec / 1000 ) + (int)( t[0].sec * 1000 ) ) & 1 ) ) | ( ( t->usec / 1000 ) + (int)( t[0].sec * 1000 ) ) )
  {
    __divdi3( (int)( (int)(n & 0xFFFFFFFF) * 1000 ), (/*HI*/int)( (int)(n & 0xFFFFFFFF) * 1000 ) + ( (unsigned int)(n << 32) * 1000 * 1000 ), ( t->usec / 1000 ) + (int)( t[0].sec * 1000 ), (/*HI*/int)( t[0].sec * 1000 ) + ( ( t->usec / 1000 ) >> 31 ) + ( ( ( t->usec / 1000 ) + (int)( t[0].sec * 1000 ) + (int)( t[0].sec * 1000 ) < ( t->usec / 1000 ) + (int)( t[0].sec * 1000 ) ) & 1 ) );
    return (int)( (int)(n & 0xFFFFFFFF) * 1000 );
  }
}
#if 0
#endif
