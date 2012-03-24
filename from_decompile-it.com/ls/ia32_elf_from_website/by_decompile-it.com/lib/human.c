#include "human.c.h"
static double long adjust_value( int inexact_style, double long value );
static char *group_number( char *number, size_t numberlen, char *grouping, char *thousands_sep );
static uintmax_t default_block_size( void );
static strtol_error humblock( char *spec, uintmax_t *block_size, int *options );
static char power_letter[9] = { 0, 'K', 'M', 'G', 'T', 'P', 'E', 'Z', 'Y',  };
static char *block_size_args[3] = { "human-readable", "si", 0,  };
static int block_size_opts[2] = { 176, 144,  };
double long adjust_value( int inexact_style, double long value )
{
  int ah;
  if ( inexact_style != 1 && ( 0 & 1 ) != 1 )
  {
    uintmax_t u;
    if ( !(_Bool)( 0 ) )
      (u & 0xFFFFFFFF) = (unsigned short)( ( ( fpround & 3 ) << 10 ) | 895 );
      (u << 32) = (unsigned int)(u << 32) ^ -2147483648;
      (u & 0xFFFFFFFF) = (unsigned short)( ( ( fpround & 3 ) << 10 ) | 895 );
      u = (long long)( value/*.1_8of16*/ - 0 );
    else
      (u << 32) = (unsigned int)(u << 32) ^ -2147483648;
      u = (long long)( value/*.1_8of16*/ );
    u = u;
    value/*.1_8of16*/ = (double)( ( inexact_style == 0 ? 1 : 0 ) + u );
  }
  return value/*.1_8of16*/;
}
char *group_number( char *number, size_t numberlen, char *grouping, char *thousands_sep )
{
  int eax;
  char *d;
  size_t grouplen = -1;
  size_t thousands_seplen = strlen( thousands_sep );
  size_t i = numberlen;
  char buf[41];
  memcpy( buf, number, numberlen );
  d = &number[ numberlen ];
{
  unsigned char g = grouping[0];
  if ( g != 0 )
  {
    grouplen = g >= 126 ? g : i;
    grouping++;
  }
  if ( i < grouplen )
    grouplen = i;
  d = &d[ grouplen * -1 ];
  i -= grouplen;
  memcpy( d, &buf[ i ], grouplen );
  if ( i == 0 )
  {
    if ( ( 0 ^ 0 ) == 0 )
    {
      return memcpy( d, thousands_sep, thousands_seplen );
    }
  }
  else
  {
    d = &d[ thousands_seplen * -1 ];
    memcpy( d, thousands_sep, thousands_seplen );
  }
  return memcpy( d, thousands_sep, thousands_seplen );
}
}
  (power & 0xFFFFFFFF) = (int)( (int)base * (int)(power & 0xFFFFFFFF) );
  (power << 32) = ( (unsigned int)(power << 32) * base ) + (/*HI*/int)( (int)base * (int)(power & 0xFFFFFFFF) );
  (power & 0xFFFFFFFF) = (int)( (int)base * (int)(power & 0xFFFFFFFF) );
char *human_readable( uintmax_t n, char *buf, int opts, uintmax_t from_block_size, uintmax_t to_block_size )
{
  int ecx;
  int edx;
  (power << 32) = ( (unsigned int)(power << 32) * base ) + (/*HI*/int)( (int)base * (int)(power & 0xFFFFFFFF) );
  int inexact_style = opts & 3;
  unsigned int base = ( opts & 32 ) == 0 ? 1000 : 1024;
  uintmax_t amt;
  int tenths;
  int exponent = -1;
  int exponent_max = 8;
  char *p;
  char *psuffix;
  char *integerlim;
  int rounding;
  char *decimal_point = ".";
  size_t decimal_pointlen = 1;
  char *grouping = "";
  char *thousands_sep = "";
  struct lconv *l = localeconv( base );
  size_t pointlen = strlen( l->decimal_point );
  if ( pointlen != 0 && pointlen <= 16 )
  {
    decimal_point = l->decimal_point;
    decimal_pointlen = pointlen;
  }
  grouping = l->grouping;
  if ( strlen( l->thousands_sep ) <= 16 )
    thousands_sep = l->thousands_sep;
  p = psuffix = &buf[648];
  if ( (unsigned int)(to_block_size << 32) <= (unsigned int)(from_block_size << 32) && ( (unsigned int)(to_block_size << 32) < (unsigned int)(from_block_size << 32) || (unsigned int)(to_block_size & 0xFFFFFFFF) <= (unsigned int)(from_block_size & 0xFFFFFFFF) ) )
  {
    if ( ( __umoddi3( from_block_size, to_block_size ) | __umoddi3( from_block_size, to_block_size ) ) == 0 )
    {
      (amt & 0xFFFFFFFF) = (int)( (int)(multiplier & 0xFFFFFFFF) * (int)(n & 0xFFFFFFFF) );
      (amt << 32) = ( (unsigned int)(n << 32) * (unsigned int)(multiplier & 0xFFFFFFFF) ) + ( (unsigned int)(multiplier << 32) * (unsigned int)(n & 0xFFFFFFFF) ) + (/*HI*/int)( (int)(multiplier & 0xFFFFFFFF) * (int)(n & 0xFFFFFFFF) );
      (amt & 0xFFFFFFFF) = (int)( (int)(multiplier & 0xFFFFFFFF) * (int)(n & 0xFFFFFFFF) );
      uintmax_t multiplier = __udivdi3( from_block_size, to_block_size );
      if ( ( ( (unsigned int)(n & 0xFFFFFFFF) ^ __udivdi3( amt, multiplier ) ) | ( (unsigned int)(n << 32) ^ __udivdi3( amt, multiplier ) ) ) == 0 )
        (amt << 32) = ( (unsigned int)(n << 32) * (unsigned int)(multiplier & 0xFFFFFFFF) ) + ( (unsigned int)(multiplier << 32) * (unsigned int)(n & 0xFFFFFFFF) ) + (/*HI*/int)( (int)(multiplier & 0xFFFFFFFF) * (int)(n & 0xFFFFFFFF) );
      {
        tenths = 0;
        rounding = 0;
      }
      else
      {
        double long dto_block_size;
        double long damt;
        size_t buflen;
        size_t nonintegerlen;
        dto_block_size/*.1_8of16*/ = (double)( to_block_size );
        damt/*.1_8of16*/ = ( ebp_296 / dto_block_size/*.1_8of16*/ ) * ebp_312;
        if ( ( opts & 16 ) == 0 )
        {
          ;
          sprintf( buf, "%.0Lf", 0.000000000000 );
          buflen = strlen( buf );
          nonintegerlen = 0;
        }
        else
        {
          e/*.1_4of16*/ = 0;
          double long e;
          e/*.5_8of16*/ = -2147483648;
          e/*.9_12of16*/ = 16383;
          exponent = 0;
          do
          {
            e/*.1_8of16*/ = (double)( (long long)( base ) ) * e/*.1_8of16*/;
            exponent++;
          }
          while ( ( ( 0 ^ 1 ) & 255 ) == 0 && exponent < exponent_max );
          damt/*.1_8of16*/ = damt/*.1_8of16*/ / e/*.1_8of16*/;
          ;
          sprintf( buf, "%.1Lf", 0.000000000000 );
          buflen = strlen( buf );
          nonintegerlen = decimal_pointlen + 1;
          if ( nonintegerlen + ( ( opts & 32 ) == 0 ) + 1 < buflen || ( ( opts & 8 ) != 0 && buf[ buflen - 1 ] == '0' ) )
          {
            ;
            sprintf( buf, "%.0Lf", 0.000000000000 / 0 );
            buflen = strlen( buf );
            nonintegerlen = 0;
          }
        }
        p = &psuffix[ buflen * -1 ];
        memmove( p, buf, buflen );
        integerlim = &p[ buflen - nonintegerlen ];
        if ( ( opts & 4 ) != 0 )
        {
          p = group_number( p, integerlim - p, grouping, thousands_sep );
        }
        if ( ( opts & 128 ) != 0 )
        {
          if ( exponent < 0 )
          {
            uintmax_t power;
            exponent = 0;
            power = 1;
            while ( (unsigned int)(power << 32) < (unsigned int)(to_block_size << 32) || ( (unsigned int)(power << 32) <= (unsigned int)(to_block_size << 32) && (unsigned int)(power & 0xFFFFFFFF) < (unsigned int)(to_block_size & 0xFFFFFFFF) ) )
            {
              exponent++;
              if ( exponent_max == exponent )
                break;
              else
              {
                (power & 0xFFFFFFFF) = (int)( (int)base * (int)(power & 0xFFFFFFFF) );
                (power << 32) = ( (unsigned int)(power << 32) * base ) + (/*HI*/int)( (int)base * (int)(power & 0xFFFFFFFF) );
                (power & 0xFFFFFFFF) = (int)( (int)base * (int)(power & 0xFFFFFFFF) );
              }
            }
          }
          if ( ( exponent | ( opts & 256 ) ) != 0 && ( opts & 64 ) != 0 )
            (power << 32) = ( (unsigned int)(power << 32) * base ) + (/*HI*/int)( (int)base * (int)(power & 0xFFFFFFFF) );
          {
            psuffix[0] = ' ';
            psuffix++;
          }
          if ( exponent != 0 )
          {
            psuffix[0] = ( opts & 32 ) == 0 && exponent == 1 ? 'k' : power_letter[ exponent ];
            psuffix++;
          }
          if ( ( opts & 256 ) != 0 )
          {
            if ( ( opts & 32 ) != 0 && exponent != 0 )
            {
              psuffix[0] = 'i';
              psuffix++;
            }
            psuffix[0] = 'B';
            psuffix++;
          }
        }
        psuffix[0] = 0;
        return p;
      }
    }
  }
  else
  if ( from_block_size != 0 && ( __umoddi3( to_block_size, from_block_size ) | __umoddi3( to_block_size, from_block_size ) ) == 0 )
  {
    (r10 & 0xFFFFFFFF) = (int)( __umoddi3( n, divisor ) * 10 );
    (r10 << 32) = ( __umoddi3( n, divisor ) * 10 ) + (/*HI*/int)( __umoddi3( n, divisor ) * 10 );
    (r10 & 0xFFFFFFFF) = (int)( __umoddi3( n, divisor ) * 10 );
    (r10 << 32) = ( __umoddi3( n, divisor ) * 10 ) + (/*HI*/int)( __umoddi3( n, divisor ) * 10 );
    (r2 & 0xFFFFFFFF) = __umoddi3( r10, divisor ) * 2;
    (r2 << 32) = (/*HI*/int)( __umoddi3( r10, divisor ) * 2 );
    uintmax_t divisor = __udivdi3( to_block_size, from_block_size );
    uintmax_t r10;
    uintmax_t r2;
    amt = __udivdi3( n, divisor );
    tenths = __udivdi3( r10, divisor );
    rounding = (unsigned int)(r2 << 32) <= (unsigned int)(divisor << 32) && ( (unsigned int)(r2 << 32) < (unsigned int)(divisor << 32) || (unsigned int)(r2 & 0xFFFFFFFF) < (unsigned int)(divisor & 0xFFFFFFFF) ) ? ( (unsigned int)(r2 << 32) | (unsigned int)(r2 & 0xFFFFFFFF) ) != 0 : (unsigned int)(divisor << 32) <= (unsigned int)(r2 << 32) && ( (unsigned int)(divisor << 32) < (unsigned int)(r2 << 32) || (unsigned int)(divisor & 0xFFFFFFFF) < (unsigned int)(r2 & 0xFFFFFFFF) ) ? 3 : 2;
  }
  if ( ( opts & 16 ) != 0 )
  {
    exponent = 0;
    if ( (unsigned int)(amt << 32) >= 0 && ( (unsigned int)(amt << 32) > 0 || base <= (unsigned int)(amt & 0xFFFFFFFF) ) )
    {
      do
      {
        r10 = tenths + (int)( __umoddi3( amt, (long long)( base ) ) * 10 );
        r2 = ( ( (long long)( r10 ) % base ) * 2 ) + ( rounding >> 1 );
        amt = __udivdi3( amt, (long long)( base ) );
        tenths = (long long)( r10 ) / base;
        rounding = r2 < base ? rounding + r2 != 0 : rounding + r2 <= base ? 2 : 3;
        exponent++;
      }
      while ( (unsigned int)(amt << 32) >= 0 && ( (unsigned int)(amt << 32) > 0 || base <= (unsigned int)(amt & 0xFFFFFFFF) ) && exponent < exponent_max );
      if ( (int)(amt << 32) < 1 && ( (unsigned int)(amt << 32) < 0 || (unsigned int)(amt & 0xFFFFFFFF) <= 9 ) )
      {
        if ( ( inexact_style == 1 ? rounding + ( tenths & 1 ) > 2 : inexact_style != 0 || rounding < 1 ? 0 : 1 ) != 0 )
        {
          tenths++;
          rounding = 0;
          if ( tenths == 10 )
          {
            amt++;
            tenths = 0;
          }
        }
        if ( (int)(amt << 32) < 1 && ( (unsigned int)(amt << 32) < 0 || (unsigned int)(amt & 0xFFFFFFFF) <= 9 ) && ( tenths != 0 || ( opts & 8 ) == 0 ) )
        {
          p = &p[ -1 ];
          p[0] = tenths + 48;
          p = &p[ decimal_pointlen * -1 ];
          memcpy( p, decimal_point, decimal_pointlen );
          tenths = rounding = 0;
        }
      }
    }
  }
  if ( ( inexact_style == 1 ? tenths + 0 > 5 : inexact_style != 0 || tenths + rounding < 1 ? 0 : 1 ) != 0 )
  {
    amt++;
    if ( ( opts & 16 ) != 0 && ( ( base ^ (unsigned int)(amt & 0xFFFFFFFF) ) | ( (unsigned int)(amt << 32) ^ 0 ) ) == 0 && exponent < exponent_max )
    {
      exponent++;
      if ( ( opts & 8 ) == 0 )
      {
        p = &p[ -1 ];
        p[0] = '0';
        p = &p[ decimal_pointlen * -1 ];
        memcpy( p, decimal_point, decimal_pointlen );
      }
      amt = 1;
    }
  }
  integerlim = p;
{
  do
  {
    digit = __umoddi3( amt, 10 );
    p = &p[ -1 ];
    p[0] = digit + 48;
    amt = __udivdi3( amt, 10 );
  }
  while ( amt == 0 );
}
}
uintmax_t default_block_size( void )
{
  return getenv( "POSIXLY_CORRECT" ) == 0 ? 1024 : 512;
}
strtol_error humblock( char *spec, uintmax_t *block_size, int *options )
{
  int i;
  int opts = 0;
  if ( spec == 0 )
  {
    spec = getenv( "BLOCK_SIZE" );
    if ( spec == 0 )
    {
      spec = getenv( "BLOCKSIZE" );
      if ( spec == 0 )
      {
        block_size[0] = default_block_size( );
        options[0] = opts;
        return 0;
      }
    }
  }
  if ( spec[0] == '\'' )
  {
    opts |= 4;
    spec++;
  }
  i = argmatch( spec, block_size_args, block_size_opts, 4 );
  if ( i >= 0 )
  {
    opts |= block_size_opts[ i ];
    block_size[0] = 1;
  }
  else
  {
    char *ptr;
    strtol_error e = xstrtoumax( spec, &ptr, 0, block_size, "eEgGkKmMpPtTyYzZ0" );
    if ( e != LONGINT_OK )
    {
      options[0] = 0;
      return e;
    }
    for ( ; spec[0] <= 47 || spec[0] > 57; spec++ )
    {
      if ( spec == ptr )
      {
        opts |= 128;
        if ( ptr[ -1 ] == 'B' )
          opts |= 256;
        if ( ptr[ -1 ] != 'B' || ptr[ -2 ] == 'i' )
        {
          opts |= 32;
        }
      }
      else
      {
        //spec++;
      }
    }
  }
}
enum strtol_error  human_options( char *spec, int *opts, uintmax_t *block_size )
{
  strtol_error e = humblock( spec, block_size, opts );
  if ( block_size[0] == 0 )
  {
    block_size[0] = default_block_size( );
    e = LONGINT_INVALID;
  }
  return e;
}
