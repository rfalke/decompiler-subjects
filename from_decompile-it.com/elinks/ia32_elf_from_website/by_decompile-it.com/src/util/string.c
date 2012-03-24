#include "string.c.h"
static void *T/*.146*/ = 0;
unsigned char *memacpy( unsigned char *src, int len )
{
  int eax;
  unsigned char *m;
  if ( assert_failed == 0 )
  {
    assert_failed = len >> 31;
    if ( len >> 31 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 77;
      elinks_internal( "assertion len &gt;= 0 failed: [memacpy]" );
      if ( assert_failed )
      {
      }
    }
    len = len + 1;
    if ( mem_alloc( 1 ) )
    {
      if ( len && src[0] )
        memcpy( mem_alloc( 1 ), &src[0], len );
      return &m[0];
    }
    else
    {
      return &m[0];
    }
  }
  assert_failed = 0;
  len = 0;
}
unsigned char *stracpy( unsigned char *src )
{
  if ( assert_failed == 0 )
  {
    assert_failed = src[0] == 0;
    if ( !(_Bool)( src[0] != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 92;
      elinks_internal( "assertion src failed: [stracpy]" );
      if ( assert_failed )
        goto B2;
    }
    return memacpy( &src[0], strlen( &src[0] ) );
  }
B2:  assert_failed = 0;
  return 0;
}
void add_to_strn( unsigned char **dst, unsigned char *src )
{
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( src == 0 ) | ( dst[0] == 0 ) ) & 1;
    if ( ( ( src == 0 ) | ( dst[0] == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 108;
      elinks_internal( "assertion *dst && src failed: [add_to_strn]" );
      if ( assert_failed )
        goto B2;
    }
    if ( mem_realloc( (void*)dst[0], strlen( (char*)src ) + 1 + strlen( (char*)dst[0] ) ) )
    {
      memcpy( ebp_28 + esi, src, edi );
      dst[0] = &esi;
      return;
    }
    else
    {
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
unsigned char *insert_in_string( unsigned char **dst, int pos, unsigned char *seq, int seqlen )
{
  int edx;
  unsigned char *string;
  ebp_28 = strlen( (char*)dst[0] );
  if ( mem_realloc( (void*)dst[0], seqlen + strlen( (char*)dst[0] ) + 1 ) )
  {
    memmove( string[0] + seqlen + pos, pos + mem_realloc( (void*)dst[0], seqlen + strlen( (char*)dst[0] ) + 1 ), ( strlen( (char*)dst[0] ) - pos ) + 1 );
    memcpy( pos + mem_realloc( (void*)dst[0], seqlen + strlen( (char*)dst[0] ) + 1 ), seq, seqlen );
    dst[0] = &string[0];
  }
  return dst[0];
}
unsigned char *straconcat( unsigned char *str )
{
  va_list ap;
  unsigned char *a;
  unsigned char *s;
  unsigned int len;
  if ( assert_failed == 0 )
  {
    assert_failed = str[0] == 0;
    if ( !(_Bool)( str[0] != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 144;
      elinks_internal( "assertion str != NULL failed: [straconcat]" );
      if ( assert_failed )
        goto B2;
    }
    s = (unsigned char*)mem_alloc( strlen( &str[0] ) + 1 );
    if ( s )
    {
      if ( strlen( &str[0] ) )
        memcpy( s, &str[0], strlen( &str[0] ) );
      __builtin_va_start( ap, str );
      do
      {
        a[0] = ap[0];
        if ( ap[0] )
        {
          do
          {
            if ( strlen( &a[0] ) == 0 )
            {
              do
              {
                a[0] = ap[0];
              }
              while ( strlen( &a[0] ) );
              len = strlen( &a[0] ) + strlen( &str[0] );
              if ( mem_realloc( (void*)s, strlen( &str[0] ) + strlen( &a[0] ) + 1 ) )
              {
                memcpy( ebp_32 + edx, &a[0], edi );
                s = ebp_40;
                a[0] = ap[0];
              }
              else
              {
                mem_free( (void*)s );
                s = 0;
                break;
              }
            }
          }
          while ( ap[0] );
          break;
        }
      }
      while ( strlen( &a[0] ) );
    }
    else
    {
      return s;
    }
  }
B2:  assert_failed = 0;
  s = 0;
  return s;
}
int xstrcmp( unsigned char *s1, unsigned char *s2 )
{
  int eax;
  int ecx;
  if ( s1 == 0 )
  {
    return 0 - ( s2[0] != 0 );
  }
  if ( s2[0] )
  {
    s2 = &s2[0];
    s1 = &s1[0];
  }
}
unsigned char *safe_strncpy( unsigned char *dst, unsigned char *src, size_t dst_size )
{
  if ( assert_failed == 0 )
  {
    if ( src[0] && dst[0] && dst_size )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 188;
      elinks_internal( "assertion dst && src && dst_size &gt; 0 failed: [safe_strncpy]" );
      if ( assert_failed == 0 )
        goto B8;
    }
B8:    strncpy( &dst[0], &src[0], dst_size );
    *(char*)(dst[ dst_size ] - 1) = 0;
    return &dst[0];
  }
  assert_failed = 0;
  dst[0] = 0;
  return &dst[0];
}
int elinks_strlcmp( unsigned char *s1, size_t n1, unsigned char *s2, size_t n2 )
{
  int eax;
  int ecx;
{
  size_t p;
  int d;
  if ( s2 && s1[0] )
  {
    if ( n1 != -1 )
    {
      if ( n2 != -1 )
      {
        d = n1 - n2;
        assert_failed = 0;
        if ( n2 == n1 )
        {
          if ( n1 && s1[0] && s2[0] )
          {
            if ( s1[0] == s2[0] )
            {
              p = 0;
              do
              {
                p++;
                if ( n1 <= p + 1 || s1[ p ] == 0 || s2[ p ] == 0 )
                  goto B15;
                d = d/*.1_1of4*/ - s2[ p ];
              }
              while ( d/*.1_1of4*/ != s2[ p ] );
              return eax;
            }
B15:            return ebp_28;
          }
          else
          {
          }
        }
        else
        {
        }
      }
    }
    else
    {
      n1 = strlen( &s1[0] );
      if ( n2 != -1 )
      {
        d = n1 - n2;
        assert_failed = 0;
      }
    }
    assert_failed = 0;
    n2 = strlen( &s2[0] );
    if ( n1 == strlen( &s2[0] ) )
    {
    }
    else
    {
    }
  }
  else
  {
  }
}
}
int elinks_strlcasecmp( unsigned char *s1, size_t n1, unsigned char *s2, size_t n2, int locale_indep )
{
  int eax;
  int edx;
  if ( locale_indep )
  {
    size_t p;
    int d;
    if ( s2[0] && s1[0] )
    {
      if ( n1 == -1 )
      {
        n1 = strlen( &s1[0] );
      }
      if ( n2 == -1 )
      {
        n2 = strlen( &s2[0] );
      }
      assert_failed = 0;
      d = n1 - n2;
      if ( n2 == n1 && n1 && s1[0] && s2[0] )
      {
        p = 0;
        do
        {
          d -= c_toupper( s2[0] );
        }
        while ( d == c_toupper( s2[0] ) && p + 1 < n1 && *(char*)(s1[0] + p) && *(char*)(s2[0] + p) );
        return d;
      }
      else
      {
        return d;
      }
    }
  }
  else
{
  size_t p;
  int d;
  if ( s2[0] && s1[0] )
  {
    s2[0] = s2[0];
    if ( n1 == -1 )
    {
      n1 = strlen( &s1[0] );
    }
    if ( n2 == -1 )
    {
      n2 = strlen( &s2[0] );
    }
    assert_failed = 0;
    d = n1 - n2;
    if ( n2 == n1 )
    {
      if ( n1 && s1[0] && s2[0] )
      {
        p = 0;
        *(int*)(ebp_36) = s2[0];
        *(int*)(__ctype_toupper_loc(  )) = *(int*)(__ctype_toupper_loc(  ));
        do
        {
          d = *(int*)(*(int*)(__ctype_toupper_loc(  )) + ( d/*.1_1of4*/ << 2 )) - *(int*)(*(int*)(__ctype_toupper_loc(  )) + ( s2[ p ] << 2 ));
          if ( *(int*)(*(int*)(__ctype_toupper_loc(  )) + ( d/*.1_1of4*/ << 2 )) != *(int*)(*(int*)(__ctype_toupper_loc(  )) + ( s2[ p ] << 2 )) )
          {
            d = d;
            break;
          }
          p++;
        }
        while ( p + 1 < n1 && s1[ p ] && s2[ p ] );
      }
      return 0;
    }
    else
    {
      return d;
    }
  }
}
  return d;
}
int c_strcasecmp( char *s1, char *s2 )
{
  do
  {
    if ( c1 != c_tolower( s2[ 0 + 1 ] ) )
      break;
  {
    unsigned char c1;
  }
  }
  while ( c1 & 255 );
  return 0;
}
int c_strncasecmp( char *s1, char *s2, size_t n )
{
  if ( n )
  {
    do
    {
      if ( esi != eax )
        break;
    {
      unsigned char c1;
    }
    }
    while ( ( c1 & 255 ) && n != 0 + 1 + 1 );
  }
  return 0;
}
char *c_strcasestr( char *haystack, char *needle )
{
  int i;
  if ( strlen( needle ) <= strlen( haystack ) && i != strlen( needle ) )
  {
    for ( ; c_strncasecmp( &haystack[0], needle, strlen( needle ) ); haystack[0] = haystack[1] )
    {
      i--;
      if ( i == 1 )
      {
      }
      else
      {
        //haystack[0] = haystack[1];
      }
    }
    return &haystack[0];
  }
  *(int*)&haystack[0] = 0;
  return &haystack[0];
}
struct string *init_string( struct string *string )
{
  if ( assert_failed == 0 )
  {
    assert_failed = string[0].source == 0;
    if ( !(_Bool)( string[0].source != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 307;
      elinks_internal( "assertion string != NULL failed: [init_string]" );
      if ( assert_failed )
        goto B2;
    }
    string->length = 0;
    string = (struct string*)mem_alloc( 256 );
    if ( string[0].source == 0 )
    {
      string[0].source = 0;
      return &string[0];
    }
    string->source = 0;
    return &string[0];
  }
B2:  assert_failed = 0;
  string[0].source = 0;
  return &string[0];
}
void done_string( struct string *string )
{
  if ( assert_failed == 0 )
  {
    assert_failed = string[0].source == 0;
    if ( !(_Bool)( string[0].source != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 328;
      elinks_internal( "assertion string != NULL failed: [done_string]" );
      if ( assert_failed )
      {
      }
    }
    if ( string->source )
    {
      mem_free( (void*)string->source );
    }
    string = 0;
    string->length = 0;
    return;
  }
  assert_failed = 0;
  return;
}
struct string *add_to_string( struct string *string, unsigned char *source )
{
  int eax;
  int ecx;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( source[0] == 0 ) | ( string[0].source == 0 ) ) & 1;
    if ( ( ( source[0] == 0 ) | ( string[0].source == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 347;
      elinks_internal( "assertion string && source failed: [add_to_string]" );
      if ( assert_failed == 0 )
      {
        if ( source[0] == 0 )
        {
          return &string[0];
        }
      }
    }
    else
    if ( source[0] == 0 )
    {
      return &string[0];
    }
    if ( string[0] && strlen( &source[0] ) >= 0 )
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
    if ( strlen( &source[0] ) )
    {
      T/*.146*/(  );
      if ( string[0].source )
      {
        memcpy( string[ string->length >> 3 ].source, &source[0], strlen( &source[0] ) );
        string[ ( string->length + strlen( &source[0] ) ) >> 3 ].source = 0;
        string->length += strlen( &source[0] );
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
  source[0] = source[0];
  return &string[0];
}
struct string *add_crlf_to_string( struct string *string )
{
  if ( assert_failed == 0 )
  {
    assert_failed = string[0].source == 0;
    if ( !(_Bool)( string[0].source != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 361;
      elinks_internal( "assertion string != NULL failed: [add_crlf_to_string]" );
      if ( assert_failed )
        goto B2;
    }
    if ( ( ( string->length + 255 ) & -256 ) < ( ( string->length + 258 ) & -256 ) )
    {
      if ( mem_realloc( (void*)string->source, ( string->length + 258 ) & -256 ) )
      {
        string = (struct string*)mem_realloc( (void*)string->source, ( string->length + 258 ) & -256 );
        memset( string[0].source + ( ( string->length + 255 ) & -256 ), 0, ( ( string->length + 258 ) & -256 ) - ( ( string->length + 255 ) & -256 ) );
      }
      else
      {
        string[0].source = 0;
        return &string[0];
      }
    }
    if ( string->source )
    {
      string[ ( string->length + 1 ) >> 3 ].source = 10;
      string->length += 2;
      string[ ( string->length + 2 ) >> 3 ].source = 0;
      return &string[0];
    }
    string[0].source = 0;
    return &string[0];
  }
B2:  assert_failed = 0;
  string[0].source = 0;
  return &string[0];
}
struct string *add_string_to_string( struct string *string, struct string *from )
{
  int eax;
  int ecx;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( from[0].source == 0 ) | ( string[0].source == 0 ) ) & 1;
    if ( ( ( from[0].source == 0 ) | ( string[0].source == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 380;
      elinks_internal( "assertion string && from failed: [add_string_to_string]" );
      if ( assert_failed == 0 )
      {
        if ( from->length == 0 )
        {
          return &string[0];
        }
      }
    }
    else
    if ( from->length == 0 )
    {
      return &string[0];
    }
    if ( string[0] && (from) && from->length >= 0 )
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
    T/*.146*/(  );
    if ( string[0].source )
    {
      memcpy( string[ string->length >> 3 ].source, from->source, from->length );
      string->length += from->length;
      return &string[0];
    }
    string[0].source = 0;
    return &string[0];
  }
B2:  assert_failed = 0;
  string[0].source = 0;
  return &string[0];
}
struct string *add_file_to_string( struct string *string, unsigned char *filename )
{
  int ecx;
  int edx;
  FILE *file;
  int newlength;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( filename[0] == 0 ) | ( string[0].source == 0 ) ) & 1;
    if ( ( ( filename[0] == 0 ) | ( string[0].source == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 399;
      elinks_internal( "assertion string && filename failed: [add_file_to_string]" );
      if ( assert_failed )
        goto B2;
    }
    if ( fopen64( &filename[0], "rb" ) )
    {
      if ( !fseeko64( fopen64( &filename[0], "rb" ), (long long)0, 2 ) && ( ftello64( &file[0] ) & ftello64( &file[0] ) ) != -1 && fseeko64( &file[0], (long long)0, 0 ) == 0 )
      {
        string->length = string->length + 255;
        newlength = string->length + ftello64( &file[0] );
        if ( 0 < 0 )
        {
          *ebp_32 = 0;
          *ebp_36 = 0;
          if ( mem_realloc( (void*)string->source, 0 ) )
          {
            string = (struct string*)mem_realloc( (void*)string->source, 0 );
            memset( string->source, 0, 0 - 0 );
          }
        }
        if ( string->source )
        {
          string->length = ebp_32 + eax;
          fclose( &file[0] );
          if ( string->length == newlength )
          {
            return &string[0];
          }
        }
      }
      fclose( &file[0] );
    }
    string[0].source = 0;
    return &string[0];
  }
B2:  assert_failed = 0;
  string[0].source = 0;
  return &string[0];
}
struct string *string_concat( struct string *string )
{
  int eax;
  int ecx;
  va_list ap;
  unsigned char *source;
  if ( assert_failed == 0 )
  {
    assert_failed = string == 0;
    if ( !(_Bool)( string != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 438;
      elinks_internal( "assertion string != NULL failed: [string_concat]" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    __builtin_va_start( ap, string );
    while ( source[0] = ap[0], ap[0] )
    {
      ap[0] = ap[4];
      if ( source[0] )
      {
        if ( assert_failed == 0 )
        {
          assert_failed = string == 0;
          if ( assert_failed )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
            errline = 347;
            elinks_internal( "assertion string && source failed: [add_to_string]" );
            if ( assert_failed )
              goto B10;
          }
          if ( source[0] )
          {
            if ( string == 0 || strlen( &source[0] ) < 0 )
            {
              assert_failed = 1;
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
              errline = 255;
              elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
              if ( assert_failed == 0 )
              {
                if ( strlen( &source[0] ) == 0 )
                  continue;
              }
            }
            else
            {
              assert_failed = 0;
              if ( strlen( &source[0] ) == 0 )
                continue;
            }
            T/*.146*/(  );
            if ( string )
            {
              memcpy( string->length + string[0].source, &source[0], strlen( &source[0] ) );
              string->length += strlen( &source[0] );
            }
          }
        }
B10:        assert_failed = 0;
      }
    }
    return string;
  }
  assert_failed = 0;
  string = 0;
  ap[0] = ap;
  return string;
}
struct string *add_char_to_string( struct string *string, unsigned char character )
{
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( ( character & 255 ) == 0 ) | ( string[0].source == 0 ) ) & 1;
    if ( ( ( ( character & 255 ) == 0 ) | ( string[0].source == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 457;
      elinks_internal( "assertion string && character failed: [add_char_to_string]" );
      if ( assert_failed )
        goto B2;
    }
    if ( ( ( string->length + 255 ) & -256 ) < ( ( string->length + 257 ) & -256 ) )
    {
      *(int*)(ebp_28) = character;
      if ( mem_realloc( (void*)string->source, ( string->length + 257 ) & -256 ) )
      {
        string = (struct string*)mem_realloc( (void*)string->source, ( string->length + 257 ) & -256 );
        memset( string[0].source + ( ( string->length + 255 ) & -256 ), 0, ( ( string->length + 257 ) & -256 ) - ( ( string->length + 255 ) & -256 ) );
      }
      else
      {
        string[0].source = 0;
        return &string[0];
      }
    }
    if ( string->source )
    {
      string->length++;
      string[ ( string->length + 1 ) >> 3 ].source = 0;
      return &string[0];
    }
    string[0].source = 0;
    return &string[0];
  }
B2:  assert_failed = 0;
  string[0].source = 0;
  return &string[0];
}
struct string *add_xchar_to_string( struct string *string, unsigned char character, int times )
{
  int eax;
  int ecx;
  int newlength;
  if ( assert_failed == 0 )
  {
    if ( ( character & 255 ) && string[0] && times >= 0 )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 476;
      elinks_internal( "assertion string && character && times &gt;= 0 failed: [add_xchar_to_string]" );
      if ( assert_failed )
        goto B2;
    }
    if ( times )
    {
      newlength = string->length + times;
      T/*.146*/(  );
      if ( string[0].source )
      {
        character &= 255;
        memset( string[ string->length >> 3 ].source, character & 255, times );
        string->length = newlength;
        string[ newlength >> 3 ].source = 0;
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
struct string *add_format_to_string( struct string *string, unsigned char *format )
{
  int eax;
  int ecx;
  int newlength;
  int width;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( format[0] == 0 ) | ( string[0].source == 0 ) ) & 1;
    if ( ( ( format[0] == 0 ) | ( string[0].source == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 502;
      elinks_internal( "assertion string && format failed: [add_format_to_string]" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    if ( __vsnprintf_chk( 0, 0, 1, -1, &format[0], ebp_16 ) >= 1 )
    {
      newlength = string->length + __vsnprintf_chk( 0, 0, 1, -1, &format[0], ebp_16 );
      T/*.146*/(  );
      if ( string[0].source )
      {
        __vsnprintf_chk( (char*)string[ string->length >> 3 ].source, width + 1 + 1, 1, -1, &format[0], ebp_16 );
        string->length = newlength;
        string[ newlength >> 3 ].source = 0;
        return &string[0];
      }
    }
    string[0].source = 0;
    return &string[0];
  }
  assert_failed = 0;
  string[0].source = 0;
  return &string[0];
}
struct string *add_to_string_list( struct list_head_elinks *list, unsigned char *source, int length )
{
  int eax;
  int ecx;
  struct string_list_item *item;
  struct string *string;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( source == 0 ) | ( list[0].next == 0 ) ) & 1;
    if ( ( ( source == 0 ) | ( list[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 533;
      elinks_internal( "assertion list && source failed: [add_to_string_list]" );
      if ( assert_failed )
        goto B2;
    }
    string[0].source = 0;
    if ( mem_alloc( 16 ) )
    {
      string[0].source = mem_alloc( 16 ) + 8;
      if ( length < 0 )
      {
        length = strlen( (char*)source );
      }
      if ( assert_failed == 0 )
      {
        assert_failed = 0;
        item->string.length = 0;
        item->string.source = (unsigned char*)mem_alloc( 256 );
        if ( item->string.source )
        {
          item->string.source = 0;
          if ( assert_failed == 0 )
          {
            if ( source && length >= 0 )
              assert_failed = 0;
            else
            {
              assert_failed = 1;
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
              errline = 255;
              elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
              if ( assert_failed )
                goto B11;
            }
            if ( length )
            {
              T/*.146*/(  );
              if ( mem_alloc( 16 ) + 8 )
              {
                memcpy( &item->string.source[ item->string.length ], source, length );
                item->string.length += length;
              }
              else
              {
                string[0].source = 0;
                done_string( mem_alloc( 16 ) + 8 );
                mem_free( (void*)item[0].next );
                return &string[0];
              }
            }
            &item = *(int*)(list->prev);
            item->prev = &list->prev[0];
            *(int*)(list->prev) = item[0].next;
            item->prev = &item[0];
            return &string[0];
          }
        }
      }
B11:      assert_failed = 0;
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
void free_string_list( struct list_head_elinks *list )
{
  if ( assert_failed == 0 )
  {
    assert_failed = list[0].next == 0;
    if ( !(_Bool)( list[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.c";
      errline = 557;
      elinks_internal( "assertion list != NULL failed: [free_string_list]" );
      if ( assert_failed )
        goto B2;
    }
    while ( list->next != list[0].next )
    {
      list->next[1] = list->prev;
      list->prev[0] = list->next;
      if ( assert_failed == 0 )
      {
        assert_failed = 0;
        if ( *(int*)(ebx + 8) )
          mem_free( &list->list_head_elinks );
        list->list_head_elinks = 0;
        list->list_head_elinks = 0;
      }
      else
        assert_failed = 0;
      mem_free( &ebx );
    }
    return;
  }
B2:  assert_failed = 0;
  return;
}
#if 0
#endif
