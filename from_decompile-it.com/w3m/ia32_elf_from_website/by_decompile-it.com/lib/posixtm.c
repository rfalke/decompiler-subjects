#include "posixtm.c.h"
static int year( struct tm *tm, int *digit_pair, size_t n, unsigned int syntax_bits );
static int posix_time_parse( struct tm *tm, char *s, unsigned int syntax_bits );
int year( struct tm *tm, int *digit_pair, size_t n, unsigned int syntax_bits )
{
  switch ( n )
  {
  default:
    abort( );
    break;
  case 1:
    tm->tm_year = digit_pair[0];
    if ( digit_pair[0] <= 68 )
    {
      if ( ( syntax_bits & 16 ) != 0 )
      {
        return 1;
      }
      tm->tm_year += 100;
    }
    break;
  case 2:
    if ( ( syntax_bits & 4 ) == 0 )
    {
      return 1;
    }
    tm->tm_year = ( digit_pair[1] + ( digit_pair[0] * 100 ) ) - 1900;
    break;
  case 0:
  {
    time_t now;
    struct tm *tmp;
    time( &now );
    tmp = localtime( &now );
    if ( tmp == 0 )
    {
      return 1;
    }
    tm->tm_year = tmp->tm_year;
  }
    break;
  }
  return 0;
}
int posix_time_parse( struct tm *tm, char *s, unsigned int syntax_bits )
{
  char *dot = 0;
  int pair[6];
  int *p;
  size_t i;
  size_t s_len = strlen( s );
  size_t len;
  if ( ( syntax_bits & 8 ) != 0 )
  {
    dot = strchr( s, 46 );
    len = dot == 0 ? s_len : dot - s;
    if ( len != 8 && len != 10 && len != 12 )
    {
      return 1;
    }
    if ( dot != 0 )
    {
      if ( ( syntax_bits & 8 ) == 0 )
      {
        return 1;
      }
      if ( s_len - len != 3 )
      {
        return 1;
      }
    }
    i = 0;
    for ( ; i < len; i++ )
    {
      if ( s[ i ] - 48 > 9 )
      {
        return 1;
      }
      //i++;
    }
    len >>= 1;
    i = 0;
    for ( ; i < len; i++ )
    {
      pair[ i ] = ( ( ( s[ i * 2 ] * 10 ) - 480 ) + s[ ( i * 2 ) + 1 ] ) - 48;
      //i++;
    }
    p = pair;
    if ( ( syntax_bits & 1 ) != 0 )
    {
      if ( year( tm, p, len - 4, syntax_bits ) != 0 )
      {
        return 1;
      }
      p = &p[ len - 4 ];
      len = 4;
    }
    tm->tm_mon = p[0] - 1;
    p++;
    tm->tm_mday = p[0];
    p++;
    tm->tm_hour = p[0];
    p++;
    tm->tm_min = p[0];
    p++;
    len -= 4;
    if ( ( syntax_bits & 2 ) != 0 && year( tm, p, len, syntax_bits ) != 0 )
    {
      return 1;
    }
    if ( dot == 0 )
      tm->tm_sec = 0;
    else
    {
      int seconds;
      dot++;
      if ( dot[0] - 48 > 9 || dot[1] - 48 > 9 )
      {
        return 1;
      }
      tm->tm_sec = seconds = ( ( ( dot[0] * 10 ) - 480 ) + dot[1] ) - 48;
    }
    return 0;
  }
  len = dot == 0 ? s_len : dot - s;
}
_Bool posixtime( time_t *p, char *s, unsigned int syntax_bits )
{
  struct tm tm0;
  struct tm tm1;
  struct tm *tm;
  time_t t;
  if ( posix_time_parse( &tm0, s, syntax_bits ) != 0 )
  {
  }
  else
  {
    tm1.tm_sec = tm0.tm_sec;
    tm1.tm_min = tm0.tm_min;
    tm1.tm_hour = tm0.tm_hour;
    tm1.tm_mday = tm0.tm_mday;
    tm1.tm_mon = tm0.tm_mon;
    tm1.tm_year = tm0.tm_year;
    tm1.tm_wday = tm0.tm_wday;
    tm1.tm_yday = tm0.tm_yday;
    tm1.tm_isdst = tm0.tm_isdst;
    tm1.tm_gmtoff = tm0.tm_gmtoff;
    tm1.tm_zone = tm0.tm_zone;
    tm1.tm_isdst = -1;
    t = mktime( &tm1.tm_sec );
    if ( t != -1 )
      tm = &tm1;
    else
    {
      tm = localtime( &t );
      if ( tm == 0 )
      {
      }
    }
    if ( ( ( tm->tm_sec ^ tm0.tm_sec ) | ( tm->tm_year ^ tm0.tm_year ) | ( tm->tm_mon ^ tm0.tm_mon ) | ( tm->tm_mday ^ tm0.tm_mday ) | ( tm->tm_hour ^ tm0.tm_hour ) | ( tm->tm_min ^ tm0.tm_min ) ) != 0 )
    {
    }
    else
    {
      p[0] = t;
    }
  }
  return 0;
}
