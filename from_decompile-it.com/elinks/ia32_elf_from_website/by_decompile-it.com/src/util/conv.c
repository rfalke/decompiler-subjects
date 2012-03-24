#include "conv.c.h"
int elinks_ulongcat( unsigned char *s, unsigned int *slen, unsigned long number, unsigned int width, unsigned char fillchar, unsigned int base, unsigned int upper )
{
  int eax;
  int ecx;
  int edx;
  unsigned int start = 0;
  unsigned long q;
  if ( width && s && base <= 16 && base > 1 )
  {
    if ( base - 1 < ebp_16 )
    {
      do
      {
        q = (long long)( q ) / base;
      }
      while ( base - 1 < (long long)( q ) / base );
      start = start;
    }
    if ( slen[0] )
      slen[0] = slen[ width >> 2 ];
    if ( fillchar && width != width )
    {
      if ( slen[0] )
        slen[0] += width - width;
      fillchar = fillchar;
      do
      {
      }
      while ( edx != 1 );
    }
    if ( width )
    {
      while ( *(char*)(start + s + ( width - 1 )) = *(char*)(ecx + ( __MOD((long long)( eax ),base) )), esi )
      {
      }
    }
  }
  else
  {
  }
  return ebp_16;
}
int elinks_longcat( unsigned char *s, unsigned int *slen, long number, unsigned int width, unsigned char fillchar, unsigned int base, unsigned int upper )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *p;
  if ( width && number < 0 )
  {
    if ( slen[0] )
      slen[0]++;
    else
    {
      p[0] = 45;
      p[0] = p[1];
    }
    width--;
    number = 0 - number;
  }
  if ( p[0] && width && base <= 16 && base > 1 )
  {
    if ( base - 1 < 0 - number )
    {
      width = 1;
      do
      {
        width++;
      }
      while ( base - 1 < (long long)( (long long)( 0 - number ) / base ) / base );
      p[0] = p[0];
    }
    if ( slen[0] )
      slen[0] = slen[ width >> 2 ];
    if ( fillchar && width != width )
    {
      if ( slen[0] )
        slen[0] += width - width;
      fillchar = fillchar;
      p[ ( ebp_20 + ebp_16 ) - 1 ] = p[ ( slen[0] + ( width - width ) ) - 1 ];
      do
      {
        p[ ( slen[0] + ( width - width ) ) - 1 ] = fillchar;
        p[ ( slen[0] + ( width - width ) ) - 1 ]--;
      }
      while ( edx != 1 );
    }
    *(char*)(p[0] + width + slen[0] + ( width - width )) = 0;
    if ( width )
    {
      width--;
      *ebp_32 = number;
      while ( edi = *(char*)(( upper != 0 ? lnum[0] : unum[0] ) + ( __MOD((long long)( (long long)( number ) / base ),base) )), width )
      {
        width--;
      }
    }
  }
  else
  {
  }
  return ebp_16;
}
struct string *add_long_to_string( struct string *string, long number )
{
  int eax;
  int ecx;
  int edx;
#error unstructured control flow
}
struct string *add_knum_to_string( struct string *string, long num )
{
  int eax;
  int ecx;
  int edx;
  int ebp_76;
#error unstructured control flow
}
struct string *add_xnum_to_string( struct string *string, off_t xnum )
{
  int eax;
  int edx;
  unsigned char suff[3];
  off_t d;
  suff[0] = 26880;
  suff[2] = 0;
  if ( (int)(xnum << 32) >= 0 && ( ccdep2 < ccdep1 || (unsigned int)(xnum & 0xFFFFFFFF) > 0xfffff ) )
  {
    (d & 0xFFFFFFFF) = (int)( 10 * (int)(xnum & 0xFFFFFFFF) );
    (d << 32) = ( (unsigned int)(xnum << 32) * 10 ) + (/*HI*/int)( 10 * (int)(xnum & 0xFFFFFFFF) );
    (xnum & 0xFFFFFFFF) = (int)( xnum >> 20 );
    (xnum << 32) = (unsigned int)(xnum << 32) >> 20;
    (d & 0xFFFFFFFF) = (int)( ( d + (long long)( ( ( ( ( (unsigned int)(xnum << 32) * 10 ) + (/*HI*/int)( 10 * (int)(xnum & 0xFFFFFFFF) ) ) >> 31 ) >> 31 ) & 0xfffff ) ) >> 20 );
    suff[0] = 77;
    __moddi3( (int)( ( d + (long long)( ( ( ( ( (unsigned int)(xnum << 32) * 10 ) + (/*HI*/int)( 10 * (int)(xnum & 0xFFFFFFFF) ) ) >> 31 ) >> 31 ) & 0xfffff ) ) >> 20 ), ( (unsigned int)(d << 32) + 0 + ( ( (unsigned int)(d & 0xFFFFFFFF) + ( ( ( ( ( (unsigned int)(xnum << 32) * 10 ) + (/*HI*/int)( 10 * (int)(xnum & 0xFFFFFFFF) ) ) >> 31 ) >> 31 ) & 0xfffff ) < ( ( ( ( ( (unsigned int)(xnum << 32) * 10 ) + (/*HI*/int)( 10 * (int)(xnum & 0xFFFFFFFF) ) ) >> 31 ) >> 31 ) & 0xfffff ) ) & 1 ) ) >> 20, 10, 0 );
  }
  else
  if ( (int)(xnum << 32) < 1 && ( ccdep1 < ccdep2 || (unsigned int)(xnum & 0xFFFFFFFF) <= 1023 ) )
    (d << 32) = ( (unsigned int)(d << 32) + 0 + ( ( (unsigned int)(d & 0xFFFFFFFF) + ( ( ( ( ( (unsigned int)(xnum << 32) * 10 ) + (/*HI*/int)( 10 * (int)(xnum & 0xFFFFFFFF) ) ) >> 31 ) >> 31 ) & 0xfffff ) < ( ( ( ( ( (unsigned int)(xnum << 32) * 10 ) + (/*HI*/int)( 10 * (int)(xnum & 0xFFFFFFFF) ) ) >> 31 ) >> 31 ) & 0xfffff ) ) & 1 ) ) >> 20;
    d = (long long)-1;
    if ( assert_failed )
      ebx = xnum;
    else
    {
      assert_failed = ( ( (unsigned int)(xnum << 32) ^ ( xnum >> 31 ) ) | ( xnum ^ xnum ) ) != 0;
      if ( ( (unsigned int)(xnum << 32) ^ ( xnum >> 31 ) ) | ( xnum ^ xnum ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/conv.c";
        errline = 194;
        elinks_internal( "assertion xnum == (long) xnum failed!" );
        *(int*)(ebp_64) = ( 0 & (int)( "( (unsigned int)(xnum << 32) * 10 ) + (/*HI*/int)( 10 * (int)(xnum & 0xFFFFFFFF) ) # (int)( 10 * (int)(xnum & 0xFFFFFFFF) )" >> 10 ) );
        *ebp_68 = (int)(xnum & 0xFFFFFFFF);
      }
    }
    add_long_to_string( &string[0], xnum );
    if ( ebp_64 )
    {
      add_char_to_string( &string[0], 46 );
      add_long_to_string( &string[0], (int)( (long)(d & 0xFFFFFFFF) ) );
    }
    add_char_to_string( &string[0], 32 );
    if ( suff[0] )
      add_to_string( &string[0], suff );
    add_char_to_string( &string[0], 66 );
    return &string[0];
  else
  {
    (d & 0xFFFFFFFF) = (int)( "( (unsigned int)(xnum << 32) * 10 ) + (/*HI*/int)( 10 * (int)(xnum & 0xFFFFFFFF) ) # (int)( 10 * (int)(xnum & 0xFFFFFFFF) )" >> 10 );
    xnum >>= 10;
    suff[0] = 75;
    __moddi3( (int)( "( (unsigned int)(xnum << 32) * 10 ) + (/*HI*/int)( 10 * (int)(xnum & 0xFFFFFFFF) ) # (int)( 10 * (int)(xnum & 0xFFFFFFFF) )" >> 10 ), ( ( (unsigned int)(xnum << 32) * 10 ) + (/*HI*/int)( 10 * (int)(xnum & 0xFFFFFFFF) ) ) >> 10, 10, 0 );
  }
  if ( (int)(xnum << 32) >= 0 )
  {
    if ( ccdep2 < ccdep1 )
    {
    }
    else
    if ( (unsigned int)(xnum & 0xFFFFFFFF) > 9 )
      (d << 32) = ( ( (unsigned int)(xnum << 32) * 10 ) + (/*HI*/int)( 10 * (int)(xnum & 0xFFFFFFFF) ) ) >> 10;
    {
      xnum = xnum;
    }
  }
}
struct string *add_duration_to_string( struct string *string, long seconds )
{
  int eax;
  int ecx;
  int edx;
#error unstructured control flow
}
struct string *add_timeval_to_string( struct string *string, timeval_T *timeval )
{
  string = string;
  timeval = timeval_to_seconds( timeval );
}
struct string *add_bytes_to_string__( struct string *string, unsigned char *bytes, int length )
{
  int ecx;
  int edx;
  if ( assert_failed == 0 )
  {
    if ( bytes[0] && string && length >= 0 )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
      errline = 255;
      elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
      if ( assert_failed )
        goto B2;
    }
    if ( length )
    {
      if ( ( ( string->length + 255 ) & -256 ) < ( ( string->length + length + 256 ) & -256 ) )
      {
        ebp_32 = bytes[0];
        *ebp_36 = length;
        if ( mem_realloc( (void*)string->source, length ) )
        {
          string = (struct string*)mem_realloc( (void*)string->source, length );
          memset( string[0].source + ( ( string->length + 255 ) & -256 ), 0, ( ( string->length + length + 256 ) & -256 ) - ( ( string->length + 255 ) & -256 ) );
        }
        else
        {
          string[0].source = 0;
          return &string[0];
        }
      }
      if ( string->source )
      {
        memcpy( string->length + string->source, &bytes[0], length );
        string->length += length;
        return &string[0];
      }
      string[0].source = 0;
      return &string[0];
    }
    else
    {
      return &string[0];
    }
  }
B2:  assert_failed = 0;
  string[0].source = 0;
  return &string[0];
}
struct string *add_date_to_string( struct string *string, unsigned char *fmt, time_t *date )
{
  int eax;
  unsigned char buffer[1024];
  time_t when_time = when_time;
  struct tm *when_local;
  if ( strftime( buffer, 1024, &fmt[0], localtime( &when_time ) ) )
    add_to_string( &string[0], buffer );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return add_to_string( &string[0], buffer );
}
struct string *add_string_replace( struct string *string, unsigned char *src, int len, unsigned char replaceable, unsigned char replacement )
{
  int eax;
  int ecx;
  int edx;
  int oldlength = string->length;
  if ( assert_failed == 0 )
  {
    if ( src && len >= 0 )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
      errline = 255;
      elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
      if ( assert_failed )
        goto B2;
    }
    if ( len )
    {
      string->length = string->length + len + 256;
      if ( 0 < 0 )
      {
        *(int*)(ebp_40) = ebp_40;
        if ( mem_realloc( (void*)string->source, 0 ) )
        {
          string = (struct string*)mem_realloc( (void*)string->source, 0 );
          memset( 0 + mem_realloc( (void*)string->source, 0 ), 0, 0 - 0 );
        }
        else
        {
          string[0].source = 0;
          return &string[0];
        }
      }
      if ( string->source )
      {
        memcpy( string->length + string->source, src, len );
        string[ ( string->length + len ) >> 3 ].source = 0;
        string->length += len;
        replaceable = replaceable;
        src[0] = src[ string->source ];
        do
        {
          if ( src[ 0 + 1 ] == replaceable )
            src[0] = ebp_40;
        }
        while ( len != 0 + 1 + 1 );
        return &string[0];
      }
      else
      {
        string[0].source = 0;
        return &string[0];
      }
    }
    else
    {
      return &string[0];
    }
  }
B2:  assert_failed = 0;
  string[0].source = 0;
  return &string[0];
}
struct string *add_html_to_string( struct string *string, unsigned char *src, int len )
{
  int eax;
  int ecx;
  int edx;
  if ( len )
  {
    int rollback_length;
    do
    {
      if ( src[1] == '<' || 31 <= src[1] || src[1] == '>' || src[1] == '&' || src[1] == '"' || src[1] == '\'' )
      {
        if ( assert_failed == 0 )
        {
          assert_failed = 0;
          string->length = string->length + 255;
          if ( 0 < 0 )
          {
            ebp_36 = 0;
            *ebp_40 = 0;
            if ( mem_realloc( (void*)string->source, 0 ) == 0 )
              string->source = string->source;
            else
            {
              string = (struct string*)mem_realloc( (void*)string->source, 0 );
              memset( string->source, 0, 0 - 0 );
            }
          }
          if ( string->source )
          {
            string->source[2] = 0;
            string->length += 2;
            if ( add_long_to_string( &string[0], src[0] ) == 0 || add_char_to_string( &string[0], 59 ) == 0 )
              string->source = string->source;
          }
        }
        else
        {
          assert_failed = 0;
          string->source = string->source;
        }
        string->length = string->length;
        string[0].source = 0;
        break;
      }
      else
      {
        if ( eax == 0 )
        {
          string[0].source = 0;
          break;
        }
      }
    }
    while ( len != 0 + 1 + 1 );
    return &string[0];
  }
  else
  {
    return &string[0];
  }
}
struct string *add_cp_html_to_string( struct string *string, int src_codepage, unsigned char *src, int len )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *end;
  unicode_val_T unicode;
  len = src[ len ];
  do
  {
    unicode = cp_to_unicode( src_codepage, &src, &len );
    if ( cp_to_unicode( src_codepage, &src, &len ) != -3 )
    {
      if ( cp_to_unicode( src_codepage, &src, &len ) - 32 > 94 || unicode == 60 || unicode == 38 || unicode == 62 || unicode == 39 || unicode == 34 )
      {
        if ( assert_failed == 0 )
        {
          int rollback_length;
          assert_failed = 0;
          string->length = string->length + 255;
          if ( 0 < 0 )
          {
            ebp_36 = 0;
            *ebp_40 = 0;
            if ( mem_realloc( (void*)string->source, 0 ) == 0 )
              break;
            else
            {
              string = (struct string*)mem_realloc( (void*)string->source, 0 );
              memset( string->source, 0, 0 - 0 );
            }
          }
          if ( string->source )
          {
            string->source[2] = 0;
            string->length += 2;
          }
        }
        else
        {
          assert_failed = 0;
          string->source = string->source;
        }
        string->length = string->length;
        string[0].source = 0;
        break;
      }
      else
      {
        unicode &= 255;
        if ( add_char_to_string( &string[0], unicode & 255 ) )
          continue;
        else
        {
          string[0].source = 0;
          break;
        }
      }
    }
    else
      break;
  }
  while ( add_long_to_string( &string[0], unicode ) && add_char_to_string( &string[0], 59 ) );
  string->source = string->source;
}
struct string *add_quoted_to_string( struct string *string, unsigned char *src, int len )
{
  int eax;
  if ( len )
  {
    do
    {
      if ( src[ 0 + 1 ] == '\'' || src[ 0 + 1 ] == '"' || src[ 0 + 1 ] == '\\' )
      {
        add_char_to_string( &string[0], 92 );
      }
      add_char_to_string( &string[0], eax );
    }
    while ( len != 0 + 1 );
  }
  return &string[0];
}
struct string *add_shell_quoted_to_string( struct string *string, unsigned char *src, int len )
{
  add_char_to_string( string, 39 );
  if ( len )
  {
    do
    {
      if ( src[0] != '\'' )
      {
        add_char_to_string( &string[0], eax );
      }
      else
      {
        add_to_string( &string[0], "'\\''" );
        if ( len != 0 + 1 )
          continue;
        else
          break;
      }
    }
    while ( len != 0 + 1 + 1 );
  }
  add_char_to_string( &string[0], 39 );
  return &string[0];
}
struct string *add_shell_safe_to_string( struct string *string, unsigned char *cmd, int cmdlen )
{
  int eax;
#error unstructured control flow
}
long strtolx( unsigned char *str, unsigned char **end )
{
  long num;
  unsigned char postfix;
  *(int*)(__errno_location(  )) = 0;
  num = strtol( (char*)str, (char**)end, 10 );
  if ( *(int*)(__errno_location(  )) )
  {
    num = 0;
  }
  if ( end[0] )
  {
    if ( postfix == 'K' )
    {
      end[0]++;
      if ( num >= -2097151 )
      {
        if ( num <= 0x1fffff )
        {
          num <<= 10;
        }
        num = 0x7fffffff;
        end[0] = end[0];
      }
    }
    else
    if ( postfix == 'M' )
    {
      end[0]++;
      if ( num >= -2047 )
      {
        if ( num > 2047 )
        {
          num = 0x7fffffff;
          end[0] = end[0];
        }
        num <<= 20;
      }
    }
    num = -2147483647;
  }
  return num;
}
int month2num( unsigned char *str )
{
  int eax;
  int ecx;
  switch ( ( ( str[0] | 32 ) - 97 ) )
  {
  case 9:
    if ( 'a' == 1 )
    {
      if ( ( str[2] | 32 ) != 'n' )
      {
      }
      return 0;
    }
    else
    {
      if ( ( str[1] | 32 ) == 'u' )
      {
        if ( ( str[2] | 32 ) != 'n' )
        {
          if ( ( str[2] | 32 ) != 'l' )
            continue;
          return 6;
        }
      }
    }
    break;
  case 12:
    if ( 'a' == 6 )
    {
      if ( ( str[2] | 32 ) != 'r' )
      {
        if ( ( str[2] | 32 ) != 'y' )
          continue;
        return 4;
      }
    }
    break;
  case 0:
    if ( 'p' == 8 )
    {
      if ( ( str[2] | 32 ) != 'r' )
        continue;
      return 3;
    }
    else
    {
      if ( ( str[1] | 32 ) != 'u' || ( str[2] | 32 ) != 'g' )
        continue;
      return 7;
    }
    break;
  case 18:
    if ( ( str[1] | 32 ) != 'e' || ( str[2] | 32 ) != 'p' )
      continue;
    return 8;
    break;
  case 14:
    if ( 'c' != 10 || ( str[2] | 32 ) != 't' )
      continue;
    return 9;
    break;
  case 13:
    if ( 'o' != 4 || ( str[2] | 32 ) != 'v' )
      continue;
    return 10;
    break;
  case 3:
    if ( 'e' != 7 || ( str[2] | 32 ) != 'c' )
      continue;
    return 11;
    break;
  case 5:
    if ( 'e' != 11 || ( str[2] | 32 ) != 'b' )
      continue;
    return 1;
    break;
  default:
    break;
  }
  return 2;
}
void clr_spaces( unsigned char *str )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *s;
  unsigned char *dest;
  if ( assert_failed == 0 )
  {
    assert_failed = str[0] == 0;
    if ( !(_Bool)( str[0] != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/conv.c";
      errline = 479;
      elinks_internal( "assertion str failed!" );
    }
  }
  if ( str[0] )
  {
    s[0] = str[0];
    do
    {
      if ( 31 <= str[0] )
        s[0] = 32;
      s[0] = s[1];
    }
    while ( s[0] );
    if ( str[0] )
    {
      dest[0] = str[0];
      while ( str[1] == ' ' )
      {
        dest[0] = *(char*)(s[0]);
        dest[0] = dest[1];
        if ( str[1] == 0 )
          break;
      }
    }
  }
  dest[0] = str[0];
  dest[0] = 0;
  return;
}
void sanitize_title( unsigned char *title )
{
  int eax;
  int edx;
  int len;
  if ( strlen( (char*)title ) )
  {
    len = strlen( (char*)title ) - 1;
    *(int*)(strlen( (char*)title )) = title[ strlen( (char*)title ) ];
    while ( 1 )
    {
      if ( 31 <= *(char*)(title[ strlen( (char*)title ) ] - 1) )
        *(char*)(title[ strlen( (char*)title ) ] - 1) = 32;
      if ( len == 0 )
        break;
      else
      {
        len--;
      }
    }
    strlen( &title[0] );
    if ( title[0] == ' ' )
    {
      do
      {
        title[0] = title[1];
        *(int*)(strlen( &title[0] ))--;
      }
      while ( title[0] == ' ' );
    }
    if ( eax )
    {
      if ( title[ eax - 1 ] == ' ' )
      {
        do
        {
          *(char*)(edx - 1) = 0;
          if ( eax == 1 )
            goto B13;
          else
        }
        while ( *(char*)(edx - 2) != ' ' );
      }
      eax++;
      memmove( title, &title[0], 1 + 1 );
    }
B13:    memmove( title, &title[0], 1 + 1 );
  }
  return;
}
int sanitize_url( unsigned char *url )
{
  int eax;
  int ecx;
  int edx;
  int len;
  if ( len )
  {
    len = strlen( (char*)url ) - 1;
    url[ eax ] = url[ strlen( (char*)url ) ];
    for ( ; *(char*)(edx - 1) < 31; len-- )
    {
      if ( len == 0 )
      {
        url[0] = url[0];
        if ( url[0] == ' ' )
        {
          do
          {
            url[0] = url[1];
            len--;
          }
          while ( url[0] == ' ' );
          if ( len == 0 )
          {
            memmove( url, &url[0], 1 );
            return 1;
          }
        }
        if ( url[ len - 1 ] == ' ' )
        {
          do
          {
            len--;
            return 0;
          }
          while ( *(char*)(edx - 2) != ' ' );
        }
        memmove( url, &url[0], 1 );
      }
      else
      {
        //len--;
      }
    }
  }
}
int c_tolower( int c )
{
  switch ( c )
  {
  case 'A':
    return 97;
    break;
  case 'C':
    return 99;
    break;
  case 'B':
    c = 98;
    return 98;
    break;
  case 'D':
    return 100;
    break;
  case 'E':
    return 101;
    break;
  case 'F':
    return 102;
    break;
  case 'G':
    return 103;
    break;
  case 'H':
    return 104;
    break;
  case 'I':
    return 105;
    break;
  case 'J':
    return 106;
    break;
  case 'K':
    return 107;
    break;
  case 'L':
    return 108;
    break;
  case 'M':
    return 109;
    break;
  case 'N':
    return 110;
    break;
  case 'O':
    return 111;
    break;
  case 'P':
    return 112;
    break;
  case 'Q':
    return 113;
    break;
  case 'R':
    return 114;
    break;
  case 'S':
    return 115;
    break;
  case 'T':
    return 116;
    break;
  case 'U':
    return 117;
    break;
  case 'V':
    return 118;
    break;
  case 'W':
    return 119;
    break;
  case 'X':
    return 120;
    break;
  case 'Y':
    return 121;
    break;
  case 'Z':
    break;
  default:
    return 98;
    break;
  }
  return 122;
}
int c_toupper( int c )
{
  switch ( c )
  {
  case 'a':
    return 65;
    break;
  case 'c':
    return 67;
    break;
  case 'b':
    c = 66;
    return 66;
    break;
  case 'd':
    return 68;
    break;
  case 'e':
    return 69;
    break;
  case 'f':
    return 70;
    break;
  case 'g':
    return 71;
    break;
  case 'h':
    return 72;
    break;
  case 'i':
    return 73;
    break;
  case 'j':
    return 74;
    break;
  case 'k':
    return 75;
    break;
  case 'l':
    return 76;
    break;
  case 'm':
    return 77;
    break;
  case 'n':
    return 78;
    break;
  case 'o':
    return 79;
    break;
  case 'p':
    return 80;
    break;
  case 'q':
    return 81;
    break;
  case 'r':
    return 82;
    break;
  case 's':
    return 83;
    break;
  case 't':
    return 84;
    break;
  case 'u':
    return 85;
    break;
  case 'v':
    return 86;
    break;
  case 'w':
    return 87;
    break;
  case 'x':
    return 88;
    break;
  case 'y':
    return 89;
    break;
  case 'z':
    break;
  default:
    return 66;
    break;
  }
  return 90;
}
int c_isupper( int c )
{
  return c - 65 <= 25;
}
int c_islower( int c )
{
  return c - 97 <= 25;
}
#if 0
#endif
