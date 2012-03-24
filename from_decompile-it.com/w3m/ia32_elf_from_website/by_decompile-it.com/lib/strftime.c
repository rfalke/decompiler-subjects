#include "strftime.c.h"
static void fwrite_lowcase( FILE *fp, char *src, size_t len );
static void fwrite_uppcase( FILE *fp, char *src, size_t len );
static size_t strftime_case_( _Bool upcase, FILE *s, char *format, struct tm *tp, int ut, int ns );
static int iso_week_days( int yday, int wday );
void fwrite_lowcase( FILE *fp, char *src, size_t len )
{
  while ( len-- )
  {
    fputc( tolower( src[0] ), fp );
    src++;
  }
  return;
}
void fwrite_uppcase( FILE *fp, char *src, size_t len )
{
  while ( len-- )
  {
    fputc( toupper( src[0] ), fp );
    src++;
  }
  return;
}
int iso_week_days( int yday, int wday )
{
  int big_enough_multiple_of_7 = 378;
  return ( yday - ( ( big_enough_multiple_of_7 + ( yday - wday ) + 4 ) - ( ( ( ( big_enough_multiple_of_7 + ( yday - wday ) + 4 + (/*HI*/int)( -1840700269 * ( big_enough_multiple_of_7 + ( yday - wday ) + 4 ) ) ) >> 2 ) - ( ( big_enough_multiple_of_7 + ( yday - wday ) + 4 ) >> 31 ) ) * 7 ) ) ) + 3;
}
size_t strftime_case_( _Bool upcase, FILE *s, char *format, struct tm *tp, int ut, int ns )
{
  int eax;
  size_t maxsize = -1;
  int hour12 = tp->tm_hour;
  char *zone;
  size_t i = 0;
  FILE *p = s;
  char *f;
  char *format_end = 0;
  zone = 0;
  zone = tp->tm_zone;
  if ( hour12 > 12 )
    hour12 -= 12;
  else
  if ( hour12 == 0 )
    hour12 = 12;
  f = format;
  for ( ; ( f[0] & 255 ) == 0; f++ )
  {
    int pad = 0;
    int modifier;
    int digits = 0;
    int number_value;
    unsigned int u_number_value;
    _Bool negative_number;
    _Bool always_output_a_sign;
    int tz_colon_mask;
    char *subfmt;
    char sign_char;
    char *bufp;
    char buf[14];
    int width = -1;
    _Bool to_lowcase = 0;
    _Bool to_uppcase = upcase;
    size_t colons;
    _Bool change_case = 0;
    int format_char;
    switch ( f[0] )
    {
      if ( f[0] - 8 <= 5 )
      {
      {
        int _n = 1, _delta = width - _n, _incr = _n + ( _delta & ~( _delta >> 31 ) );
        if ( maxsize - i <= _incr )
        {
          if ( ( 0 ^ 0 ) != 0 )
          {
            __stack_chk_fail( );
            break;
          }
          else
            break;
        }
        else
        {
          if ( p != 0 )
          {
            if ( digits == 0 && _delta >= 1 )
            {
              if ( pad != 48 )
              {
                size_t _i = 0;
                for ( ; _i < _delta; _i++ )
                {
                  fputc( 32, p );
                  //_i++;
                }
              }
              else
              {
                size_t _i = 0;
                for ( ; _i < _delta; _i++ )
                {
                  fputc( 48, p );
                  //_i++;
                }
              }
            }
            fputc( f[0], p );
          }
          i += _incr;
          //f++;
        }
      }
      }
      break;
      break;
      if ( f[0] >= 65 && ( f[0] <= 95 || f[0] - 97 <= 29 ) )
        continue;
      break;
    default:
      break;
    case 37:
      f++;
      switch ( f[0] )
      {
        if ( f[0] - 48 <= 9 )
        {
          width = 0;
          do
          {
            if ( width > 214748364 || ( width == 214748364 && f[0] - 48 > 7 ) )
              width = 2147483647;
            else
            {
              width *= 10;
              width += f[0] - 48;
            }
            f++;
          }
          while ( f[0] - 48 > 9 );
        }
        if ( f[0] == 69 || f[0] == 79 )
        {
          modifier = f[0];
          f++;
        }
        else
          modifier = 0;
        format_char = f[0];
        switch ( format_char )
        {
        case 37:
          if ( modifier == 0 )
          {
            int _n = 1, _delta = width - _n, _incr = _n + ( _delta & ~( _delta >> 31 ) );
            if ( maxsize - i <= _incr )
            {
            }
            else
            {
              if ( p != 0 )
              {
                if ( digits == 0 && _delta >= 1 )
                {
                  if ( pad != 48 )
                  {
                    size_t _i = 0;
                    for ( ; _i < _delta; _i++ )
                    {
                      fputc( 32, p );
                      //_i++;
                    }
                  }
                  else
                  {
                    size_t _i = 0;
                    for ( ; _i < _delta; _i++ )
                    {
                      fputc( 48, p );
                      //_i++;
                    }
                  }
                }
                fputc( f[0], p );
              }
              i += _incr;
            }
          }
          else
          {
            int flen = 1;
            for ( ; f[ 1 - flen ] != '%'; flen++ )
            {
              //flen++;
            }
          {
            int _n = flen, _delta = width - _n, _incr = _n + ( _delta & ~( _delta >> 31 ) );
            if ( maxsize - i <= _incr )
            {
            }
            else
            {
              if ( p != 0 )
              {
                if ( digits == 0 && _delta >= 1 )
                {
                  if ( pad != 48 )
                  {
                    size_t _i = 0;
                    for ( ; _i < _delta; _i++ )
                    {
                      fputc( 32, p );
                      //_i++;
                    }
                  }
                  else
                  {
                    size_t _i = 0;
                    for ( ; _i < _delta; _i++ )
                    {
                      fputc( 48, p );
                      //_i++;
                    }
                  }
                }
                if ( to_lowcase != 0 )
                  fwrite_lowcase( p, &f[ 1 - flen ], _n );
                else
                if ( to_uppcase == 0 )
                  fwrite( &f[ 1 - flen ], _n, 1, p );
                fwrite_uppcase( p, &f[ 1 - flen ], _n );
              }
              i += _incr;
            }
          }
          }
          break;
        case 97:
          if ( modifier == 0 )
          {
            if ( change_case != 0 )
            {
              to_uppcase = 1;
              to_lowcase = 0;
            }
            char ufmt[5];
            char *u = ufmt;
            char ubuf[1024];
            size_t len;
            u[0] = ' ';
            u++;
            u[0] = '%';
            u++;
            if ( modifier != 0 )
            {
              u[0] = modifier;
              u++;
            }
            u[0] = format_char;
            u++;
            u[0] = 0;
            len = strftime( ubuf, 1024, ufmt, tp );
            if ( len != 0 )
            {
              int _n = len - 1, _delta = width - _n, _incr = _n + ( _delta & ~( _delta >> 31 ) );
              if ( maxsize - i <= _incr )
              {
              }
              else
              {
                if ( p != 0 )
                {
                  if ( digits == 0 && _delta >= 1 )
                  {
                    if ( pad != 48 )
                    {
                      size_t _i = 0;
                      for ( ; _i < _delta; _i++ )
                      {
                        fputc( 32, p );
                        //_i++;
                      }
                    }
                    else
                    {
                      size_t _i = 0;
                      for ( ; _i < _delta; _i++ )
                      {
                        fputc( 48, p );
                        //_i++;
                      }
                    }
                  }
                  if ( to_lowcase != 0 )
                    fwrite_lowcase( p, &ubuf[1], _n );
                  else
                  if ( to_uppcase == 0 )
                    fwrite( &ubuf[1], _n, 1, p );
                  fwrite_uppcase( p, &ubuf[1], _n );
                }
                i += _incr;
              }
            }
          }
          break;
        case 65:
          if ( modifier == 0 )
          {
            if ( change_case != 0 )
            {
              to_uppcase = 1;
              to_lowcase = 0;
            }
          }
          break;
        case 98:
        case 104:
          if ( change_case != 0 )
          {
            to_uppcase = 1;
            to_lowcase = 0;
          }
          if ( modifier == 0 )
          {
          }
          break;
        case 66:
          if ( modifier == 0 )
          {
            if ( change_case != 0 )
            {
              to_uppcase = 1;
              to_lowcase = 0;
            }
          }
          break;
        case 99:
          if ( modifier != 79 )
          {
          }
          break;
        case 114:
          break;
        case 67:
          if ( modifier != 79 )
          {
            if ( modifier == 69 )
              continue;
            else
            {
              int century = ( ( (/*HI*/int)( 1374389535 * tp->tm_year ) >> 5 ) - ( tp->tm_year >> 31 ) ) + 19;
              century -= tp->tm_year - ( ( ( (/*HI*/int)( 1374389535 * tp->tm_year ) >> 5 ) - ( tp->tm_year >> 31 ) ) * 100 ) >= 0 || century < 1 ? 0 : 1;
              digits = 2;
              negative_number = tp->tm_year < -1900;
              u_number_value = century;
              always_output_a_sign = 0;
              tz_colon_mask = 0;
              if ( modifier == 79 && ( ( negative_number ^ 1 ) & 255 ) != 0 )
                continue;
              else
              {
                bufp = ebp_12;
                if ( negative_number != 0 )
                {
                  u_number_value *= -1;
                }
                do
                {
                  if ( ( tz_colon_mask & 1 ) != 0 )
                  {
                    bufp = &bufp[ -1 ];
                    bufp[0] = ':';
                  }
                  tz_colon_mask = tz_colon_mask >> 1;
                  bufp = &bufp[ -1 ];
                  bufp[0] = ( u_number_value - ( ( (/*HI*/int)( -858993459 * (int)u_number_value ) >> 3 ) * 10 ) ) + 48;
                  u_number_value = (/*HI*/int)( -858993459 * (int)u_number_value ) >> 3;
                }
                while ( u_number_value != 0 || tz_colon_mask != 0 );
                if ( digits < width )
                  digits = width;
                sign_char = negative_number == 0 ? always_output_a_sign == 0 ? 0 : '+' : '-';
                if ( pad == 45 )
                {
                  if ( sign_char != 0 )
                  {
                    int _n = 1, _delta = width - _n, _incr = _n + ( _delta & ~( _delta >> 31 ) );
                    if ( maxsize - i <= _incr )
                    {
                    }
                    else
                    {
                      if ( p != 0 )
                      {
                        if ( digits == 0 && _delta >= 1 )
                        {
                          if ( pad != 48 )
                          {
                            size_t _i = 0;
                            for ( ; _i < _delta; _i++ )
                            {
                              fputc( 32, p );
                              //_i++;
                            }
                          }
                          else
                          {
                            size_t _i = 0;
                            for ( ; _i < _delta; _i++ )
                            {
                              fputc( 48, p );
                              //_i++;
                            }
                          }
                        }
                        fputc( sign_char, p );
                      }
                      i += _incr;
                    }
                  }
                }
                else
                {
                  int padding = ( digits + ( bufp - ebp_12 ) ) - ( sign_char != 0 );
                  if ( padding >= 1 )
                  {
                    if ( pad == 95 )
                    {
                      if ( maxsize - i <= padding )
                      {
                      }
                      else
                      {
                        if ( p != 0 )
                        {
                          size_t _i = 0;
                          for ( ; _i < padding; _i++ )
                          {
                            fputc( 32, p );
                            //_i++;
                          }
                        }
                        i += padding;
                        width = width <= padding ? 0 : width - padding;
                        if ( sign_char != 0 )
                        {
                          int _n = 1, _delta = width - _n, _incr = _n + ( _delta & ~( _delta >> 31 ) );
                          if ( maxsize - i <= _incr )
                          {
                          }
                          else
                          {
                            if ( p != 0 )
                            {
                              if ( digits == 0 && _delta >= 1 )
                              {
                                if ( pad != 48 )
                                {
                                  size_t _i = 0;
                                  for ( ; _i < _delta; _i++ )
                                  {
                                    fputc( 32, p );
                                    //_i++;
                                  }
                                }
                                else
                                {
                                  size_t _i = 0;
                                  for ( ; _i < _delta; _i++ )
                                  {
                                    fputc( 48, p );
                                    //_i++;
                                  }
                                }
                              }
                              fputc( sign_char, p );
                            }
                            i += _incr;
                          }
                        }
                      }
                    }
                    else
                    {
                      if ( maxsize - i <= digits )
                      {
                      }
                      else
                      {
                        if ( sign_char != 0 )
                        {
                          int _n = 1, _delta = width - _n, _incr = _n + ( _delta & ~( _delta >> 31 ) );
                          if ( maxsize - i <= _incr )
                          {
                          }
                          else
                          {
                            if ( p != 0 )
                            {
                              if ( digits == 0 && _delta >= 1 )
                              {
                                if ( pad != 48 )
                                {
                                  size_t _i = 0;
                                  for ( ; _i < _delta; _i++ )
                                  {
                                    fputc( 32, p );
                                    //_i++;
                                  }
                                }
                                else
                                {
                                  size_t _i = 0;
                                  for ( ; _i < _delta; _i++ )
                                  {
                                    fputc( 48, p );
                                    //_i++;
                                  }
                                }
                              }
                              fputc( sign_char, p );
                            }
                            i += _incr;
                          }
                        }
                        if ( p != 0 )
                        {
                          size_t _i = 0;
                          for ( ; _i < padding; _i++ )
                          {
                            fputc( 48, p );
                            //_i++;
                          }
                        }
                        i += padding;
                        width = 0;
                      }
                    }
                  }
                  else
                  {
                    if ( sign_char != 0 )
                    {
                      int _n = 1, _delta = width - _n, _incr = _n + ( _delta & ~( _delta >> 31 ) );
                      if ( maxsize - i <= _incr )
                      {
                      }
                      else
                      {
                        if ( p != 0 )
                        {
                          if ( digits == 0 && _delta >= 1 )
                          {
                            if ( pad != 48 )
                            {
                              size_t _i = 0;
                              for ( ; _i < _delta; _i++ )
                              {
                                fputc( 32, p );
                                //_i++;
                              }
                            }
                            else
                            {
                              size_t _i = 0;
                              for ( ; _i < _delta; _i++ )
                              {
                                fputc( 48, p );
                                //_i++;
                              }
                            }
                          }
                          fputc( sign_char, p );
                        }
                        i += _incr;
                      }
                    }
                  }
                }
                int _n = ebp_12 - bufp, _delta = width - _n, _incr = _n + ( _delta & ~( _delta >> 31 ) );
                if ( maxsize - i <= _incr )
                {
                }
                else
                {
                  if ( p != 0 )
                  {
                    if ( digits == 0 && _delta >= 1 )
                    {
                      if ( pad != 48 )
                      {
                        size_t _i = 0;
                        for ( ; _i < _delta; _i++ )
                        {
                          fputc( 32, p );
                          //_i++;
                        }
                      }
                      else
                      {
                        size_t _i = 0;
                        for ( ; _i < _delta; _i++ )
                        {
                          fputc( 48, p );
                          //_i++;
                        }
                      }
                    }
                    if ( to_lowcase != 0 )
                      fwrite_lowcase( p, bufp, _n );
                    else
                    if ( to_uppcase == 0 )
                      fwrite( bufp, _n, 1, p );
                    fwrite_uppcase( p, bufp, _n );
                  }
                  i += _incr;
                }
              }
            }
          }
          break;
        case 120:
          if ( modifier != 79 )
          {
          }
          break;
        case 68:
          if ( modifier == 0 )
            subfmt = "%m/%d/%y";
          {
            size_t len = strftime_case_( to_uppcase, 0, subfmt, tp, ut, ns );
          {
            int _n = len, _delta = width - _n, _incr = _n + ( _delta & ~( _delta >> 31 ) );
            if ( maxsize - i <= _incr )
            {
            }
            else
            {
              if ( p != 0 )
              {
                if ( digits == 0 && _delta >= 1 )
                {
                  if ( pad != 48 )
                  {
                    size_t _i = 0;
                    for ( ; _i < _delta; _i++ )
                    {
                      fputc( 32, p );
                      //_i++;
                    }
                  }
                  else
                  {
                    size_t _i = 0;
                    for ( ; _i < _delta; _i++ )
                    {
                      fputc( 48, p );
                      //_i++;
                    }
                  }
                }
                strftime_case_( to_uppcase, p, subfmt, tp, ut, ns );
              }
              i += _incr;
            }
          }
          }
          break;
        case 100:
          if ( modifier != 69 )
          {
            digits = 2;
            number_value = tp->tm_mday;
          }
          break;
        case 101:
          if ( modifier != 69 )
          {
            digits = 2;
            number_value = tp->tm_mday;
            if ( pad != 48 && pad != 45 )
              pad = 95;
          }
          break;
        case 70:
          if ( modifier == 0 )
            subfmt = "%Y-%m-%d";
          break;
        case 72:
          if ( modifier != 69 )
          {
            digits = 2;
            number_value = tp->tm_hour;
          }
          break;
        case 73:
          if ( modifier != 69 )
          {
            digits = 2;
            number_value = hour12;
          }
          break;
        case 107:
          if ( modifier != 69 )
          {
            digits = 2;
            number_value = tp->tm_hour;
          }
          break;
        case 108:
          if ( modifier != 69 )
          {
            digits = 2;
            number_value = hour12;
          }
          break;
        case 106:
          if ( modifier != 69 )
          {
            digits = 3;
            negative_number = tp->tm_yday < -1;
            u_number_value = tp->tm_yday + 1;
          }
          break;
        case 77:
          if ( modifier != 69 )
          {
            digits = 2;
            number_value = tp->tm_min;
          }
          break;
        case 109:
          if ( modifier != 69 )
          {
            digits = 2;
            negative_number = tp->tm_mon < -1;
            u_number_value = tp->tm_mon + 1;
          }
          break;
        case 78:
          if ( modifier != 69 )
          {
            number_value = ns;
            if ( width == -1 )
              width = 9;
            else
            {
              int j = width;
              for ( ; j <= 8; j++ )
              {
                number_value = ( (/*HI*/int)( 1717986919 * number_value ) >> 2 ) - ( number_value >> 31 );
                //j++;
              }
            }
            digits = width;
          }
          break;
        case 110:
        {
          int _n = 1, _delta = width - _n, _incr = _n + ( _delta & ~( _delta >> 31 ) );
          if ( maxsize - i <= _incr )
          {
          }
          else
          {
            if ( p != 0 )
            {
              if ( digits == 0 && _delta >= 1 )
              {
                if ( pad != 48 )
                {
                  size_t _i = 0;
                  for ( ; _i < _delta; _i++ )
                  {
                    fputc( 32, p );
                    //_i++;
                  }
                }
                else
                {
                  size_t _i = 0;
                  for ( ; _i < _delta; _i++ )
                  {
                    fputc( 48, p );
                    //_i++;
                  }
                }
              }
              fputc( 10, p );
            }
            i += _incr;
          }
        }
          break;
        case 80:
          to_lowcase = 1;
          format_char = 112;
        case 112:
          if ( change_case != 0 )
          {
            to_uppcase = 0;
            to_lowcase = 1;
          }
          break;
        case 82:
          subfmt = "%H:%M";
          break;
        case 83:
          if ( modifier != 69 )
          {
            digits = 2;
            number_value = tp->tm_sec;
          }
          break;
        case 115:
        {
          struct tm ltm;
          time_t t;
          ltm.tm_sec = tp->tm_sec;
          ltm.tm_min = tp->tm_min;
          ltm.tm_hour = tp->tm_hour;
          ltm.tm_mday = tp->tm_mday;
          ltm.tm_mon = tp->tm_mon;
          ltm.tm_year = tp->tm_year;
          ltm.tm_wday = tp->tm_wday;
          ltm.tm_yday = tp->tm_yday;
          ltm.tm_isdst = tp->tm_isdst;
          ltm.tm_gmtoff = tp->tm_gmtoff;
          ltm.tm_zone = tp->tm_zone;
          t = mktime( &ltm.tm_sec );
          bufp = ebp_12;
          negative_number = t >> 31;
        {
          do
          {
            bufp[0] = negative_number == 0 ? (unsigned char)( d + 48 ) : '0' - (unsigned char)( d );
          }
          while ( t != 0 );
          digits = 1;
          always_output_a_sign = 0;
        }
        }
          break;
        case 88:
          if ( modifier != 79 )
          {
          }
          break;
        case 84:
          subfmt = "%H:%M:%S";
          break;
        case 116:
        {
          int _n = 1, _delta = width - _n, _incr = _n + ( _delta & ~( _delta >> 31 ) );
          if ( maxsize - i <= _incr )
          {
          }
          else
          {
            if ( p != 0 )
            {
              if ( digits == 0 && _delta >= 1 )
              {
                if ( pad != 48 )
                {
                  size_t _i = 0;
                  for ( ; _i < _delta; _i++ )
                  {
                    fputc( 32, p );
                    //_i++;
                  }
                }
                else
                {
                  size_t _i = 0;
                  for ( ; _i < _delta; _i++ )
                  {
                    fputc( 48, p );
                    //_i++;
                  }
                }
              }
              fputc( 9, p );
            }
            i += _incr;
          }
        }
          break;
        case 117:
          digits = 1;
          number_value = ( ( tp->tm_wday + 6 ) - ( ( ( ( tp->tm_wday + 6 + (/*HI*/int)( -1840700269 * ( tp->tm_wday + 6 ) ) ) >> 2 ) - ( ( tp->tm_wday + 6 ) >> 31 ) ) * 7 ) ) + 1;
          break;
        case 85:
          if ( modifier != 69 )
          {
            digits = 2;
            number_value = ( ( ( tp->tm_yday - tp->tm_wday ) + 7 + (/*HI*/int)( -1840700269 * ( ( tp->tm_yday - tp->tm_wday ) + 7 ) ) ) >> 2 ) - ( ( ( tp->tm_yday - tp->tm_wday ) + 7 ) >> 31 );
          }
          break;
        case 71:
        case 86:
        case 103:
          if ( modifier != 69 )
          {
            int year = tp->tm_year + ( tp->tm_year < 0 ? 300 : -100 );
            int year_adjust = 0;
            int days = iso_week_days( tp->tm_yday, tp->tm_wday );
            if ( days < 0 )
            {
              year_adjust = -1;
              days = iso_week_days( tp->tm_yday + ( ( ( year - 1 ) & 3 ) == 0 && ( year - 1 - ( ( ( (/*HI*/int)( 1374389535 * ( year - 1 ) ) >> 5 ) - ( ( year - 1 ) >> 31 ) ) * 100 ) != 0 || year - 1 - ( ( ( (/*HI*/int)( 1374389535 * ( year - 1 ) ) >> 7 ) - ( ( year - 1 ) >> 31 ) ) * 400 ) == 0 ) ? 1 : 0 ) + 365, tp->tm_wday );
            }
            else
            {
              int d = iso_week_days( tp->tm_yday + ( ( ( ( year & 3 ) == 0 && ( year - ( ( ( (/*HI*/int)( 1374389535 * year ) >> 5 ) - ( year >> 31 ) ) * 100 ) != 0 || year - ( ( ( (/*HI*/int)( 1374389535 * year ) >> 7 ) - ( year >> 31 ) ) * 400 ) == 0 ) ? 1 : 0 ) * -1 ) - 365 ), tp->tm_wday );
              if ( d >= 0 )
              {
                year_adjust = 1;
                days = d;
              }
            }
            switch ( f[0] )
            {
            case 103:
            {
              int yy = ( (/*HI*/int)( 1374389535 * ( year_adjust + ( tp->tm_year - ( ( ( (/*HI*/int)( 1374389535 * tp->tm_year ) >> 5 ) - ( tp->tm_year >> 31 ) ) * 100 ) ) ) ) >> 5 ) - ( ( year_adjust + ( tp->tm_year - ( ( ( (/*HI*/int)( 1374389535 * tp->tm_year ) >> 5 ) - ( tp->tm_year >> 31 ) ) * 100 ) ) ) >> 31 );
              yy = ( year_adjust + ( tp->tm_year - ( ( ( (/*HI*/int)( 1374389535 * tp->tm_year ) >> 5 ) - ( tp->tm_year >> 31 ) ) * 100 ) ) ) - ( yy * 100 );
              digits = 2;
              number_value = yy < 0 ? tp->tm_year < ( year_adjust * -1 ) - 1900 ? yy * -1 : yy + 100 : yy;
              negative_number = number_value >> 31;
              u_number_value = number_value;
            }
              break;
            case 71:
              digits = 4;
              negative_number = tp->tm_year < ( year_adjust * -1 ) - 1900;
              u_number_value = tp->tm_year + year_adjust + 1900;
              break;
            default:
              digits = 2;
              number_value = ( ( ( days + (/*HI*/int)( -1840700269 * days ) ) >> 2 ) - ( days >> 31 ) ) + 1;
              break;
            }
          }
          break;
        case 87:
          if ( modifier != 69 )
          {
            digits = 2;
            number_value = ( ( ( tp->tm_yday - ( ( tp->tm_wday + 6 ) - ( ( ( ( tp->tm_wday + 6 + (/*HI*/int)( -1840700269 * ( tp->tm_wday + 6 ) ) ) >> 2 ) - ( ( tp->tm_wday + 6 ) >> 31 ) ) * 7 ) ) ) + 7 + (/*HI*/int)( -1840700269 * ( ( tp->tm_yday - ( ( tp->tm_wday + 6 ) - ( ( ( ( tp->tm_wday + 6 + (/*HI*/int)( -1840700269 * ( tp->tm_wday + 6 ) ) ) >> 2 ) - ( ( tp->tm_wday + 6 ) >> 31 ) ) * 7 ) ) ) + 7 ) ) ) >> 2 ) - ( ( ( tp->tm_yday - ( ( tp->tm_wday + 6 ) - ( ( ( ( tp->tm_wday + 6 + (/*HI*/int)( -1840700269 * ( tp->tm_wday + 6 ) ) ) >> 2 ) - ( ( tp->tm_wday + 6 ) >> 31 ) ) * 7 ) ) ) + 7 ) >> 31 );
          }
          break;
        case 119:
          if ( modifier != 69 )
          {
            digits = 1;
            number_value = tp->tm_wday;
          }
          break;
        case 89:
          if ( modifier == 69 )
            continue;
          else
          {
            if ( modifier != 79 )
            {
              digits = 4;
              negative_number = tp->tm_year < -1900;
              u_number_value = tp->tm_year + 1900;
            }
          }
          break;
        case 121:
          if ( modifier == 69 )
            continue;
          else
          {
            int yy = ( (/*HI*/int)( 1374389535 * tp->tm_year ) >> 5 ) - ( tp->tm_year >> 31 );
            yy = tp->tm_year - ( yy * 100 );
            if ( yy < 0 )
            {
              yy = tp->tm_year < -1900 ? yy * -1 : yy + 100;
            }
            digits = 2;
            number_value = yy;
          }
          break;
        case 90:
          if ( change_case != 0 )
          {
            to_uppcase = 0;
            to_lowcase = 1;
          }
          if ( zone == 0 )
            zone = "";
        {
          int _n = strlen( zone ), _delta = width - _n, _incr = _n + ( _delta & ~( _delta >> 31 ) );
          if ( maxsize - i <= _incr )
          {
          }
          else
          {
            if ( p != 0 )
            {
              if ( digits == 0 && _delta >= 1 )
              {
                if ( pad != 48 )
                {
                  size_t _i = 0;
                  for ( ; _i < _delta; _i++ )
                  {
                    fputc( 32, p );
                    //_i++;
                  }
                }
                else
                {
                  size_t _i = 0;
                  for ( ; _i < _delta; _i++ )
                  {
                    fputc( 48, p );
                    //_i++;
                  }
                }
              }
              if ( to_lowcase != 0 )
                fwrite_lowcase( p, zone, _n );
              else
              if ( to_uppcase == 0 )
                fwrite( zone, _n, 1, p );
              fwrite_uppcase( p, zone, _n );
            }
            i += _incr;
          }
        }
          break;
        case 58:
          colons = 1;
          for ( ; f[ colons ] == ':'; colons++ )
          {
            //colons++;
          }
          if ( f[ colons ] == 'z' )
            f = &f[ colons ];
            if ( tp->tm_isdst >= 0 )
            {
              int diff = tp->tm_gmtoff;
              int hour_diff = ( ( diff + (/*HI*/int)( -1851608123 * diff ) ) >> 11 ) - ( diff >> 31 );
              int min_diff = 0;
              int sec_diff;
              min_diff = ( ( diff + (/*HI*/int)( -2004318071 * diff ) ) >> 5 ) - ( diff >> 31 ) - ( min_diff * 60 );
              sec_diff = diff - ( ( ( ( diff + (/*HI*/int)( -2004318071 * diff ) ) >> 5 ) - ( diff >> 31 ) ) * 60 );
              switch ( colons )
              {
              default:
                break;
              case 0:
                digits = 5;
                negative_number = diff >> 31;
                tz_colon_mask = 0;
                u_number_value = min_diff + ( hour_diff * 100 );
                break;
              case 1:
                digits = 6;
                negative_number = diff >> 31;
                tz_colon_mask = 4;
                u_number_value = min_diff + ( hour_diff * 100 );
                break;
              case 2:
                digits = 9;
                negative_number = diff >> 31;
                tz_colon_mask = 20;
                u_number_value = sec_diff + ( hour_diff * 10000 ) + ( min_diff * 100 );
                break;
              case 3:
                if ( sec_diff != 0 )
                  continue;
                else
                {
                  if ( min_diff != 0 )
                    continue;
                  else
                  {
                    digits = 3;
                    negative_number = diff >> 31;
                    tz_colon_mask = 0;
                    u_number_value = hour_diff;
                  }
                }
                break;
              }
              always_output_a_sign = 1;
            }
          break;
        case 122:
          colons = 0;
          break;
        case 0:
          f = &f[ -1 ];
          break;
        default:
          break;
        }
        break;
      case 45:
      case 48:
      case 95:
        pad = f[0];
        break;
      case 94:
        to_uppcase = 1;
        break;
      case 35:
        change_case = 1;
        break;
      default:
        break;
      }
      mbstate_t mbstate;
      size_t len;
      size_t fsize;
      mbstate.__count = mbstate_zero.__count;
      mbstate.__value = mbstate_zero.__value;
      len = 0;
      if ( format_end == 0 )
      {
        format_end = f + strlen( f ) + 1;
      }
      fsize = format_end - f;
    {
      do
      {
        bytes = mbrlen( &f[ len ], fsize - len, &mbstate.__count );
        if ( bytes != 0 )
        {
          if ( bytes == -2 )
          {
            len += strlen( &f[ len ] );
          }
          else
          if ( bytes == -1 )
            len++;
          else
          {
            len += bytes;
          }
        }
        else
      {
        int _n = len, _delta = width - _n, _incr = _n + ( _delta & ~( _delta >> 31 ) );
        if ( maxsize - i <= _incr )
        {
        }
        else
        {
          if ( p != 0 )
          {
            if ( digits == 0 && _delta >= 1 )
            {
              if ( pad != 48 )
              {
                size_t _i = 0;
                for ( ; _i < _delta; _i++ )
                {
                  fputc( 32, p );
                  //_i++;
                }
              }
              else
              {
                size_t _i = 0;
                for ( ; _i < _delta; _i++ )
                {
                  fputc( 48, p );
                  //_i++;
                }
              }
            }
            if ( to_lowcase != 0 )
              fwrite_lowcase( p, f, _n );
              fwrite_uppcase( p, f, _n );
              i += _incr;
              f = &f[ len - 1 ];
            else
            {
              if ( to_uppcase != 0 )
                fwrite_uppcase( p, f, _n );
              else
                fwrite( f, _n, 1, p );
            }
          }
        }
      }
      }
      while ( mbsinit( &mbstate.__count ) != 0 );
    }
      break;
    }
  }
}
size_t fprintftime( FILE *s, char *format, struct tm *tp, int ut, int ns )
{
  return strftime_case_( 0, s, format, tp, ut, ns );
}
