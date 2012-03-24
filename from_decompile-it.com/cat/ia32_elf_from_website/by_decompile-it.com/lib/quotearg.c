#include "quotearg.c.h"
char *quoting_style_args[8] = { "literal", "shell", "shell-always", "c", "escape", "locale", "clocale", 0 };
enum quoting_style  quoting_style_vals[7] = { 0, 1, 2, 3, 4, 5, 6 };
static struct quoting_options default_quoting_options;
static char slot0[256];
static unsigned int nslots = 1;
static struct slotvec slotvec0 = { 256, &slot0 };
static struct slotvec *slotvec = &slotvec0;
struct quoting_options *clone_quoting_options( struct quoting_options *o )
{
  int e = *(int*)(__errno_location( ));
  struct quoting_options *p = (struct quoting_options*)xmemdup( &default_quoting_options.style, 36 );
  *(int*)(__errno_location( )) = e;
  return p;
}
enum quoting_style  get_quoting_style( struct quoting_options *o )
{
  return default_quoting_options.style;
}
void set_quoting_style( struct quoting_options *o, enum quoting_style  s )
{
  default_quoting_options.style = s;
  return;
}
int set_char_quoting( struct quoting_options *o, char c, int i )
{
  unsigned char uc = c;
  unsigned int *p = default_quoting_options.quote_these_too[0] + ( ( uc >> 5 ) << 2 );
  int shift = uc & 31;
  int r = ( p[0] >> (unsigned char)( shift ) ) & 1;
  p[0] ^= ( r ^ ( i & 1 ) ) << shift;
  return r;
}
char *gettext_quote( char *msgid, enum quoting_style  s )
{
  char *translation = gettext( msgid );
  if ( translation == msgid && s == clocale_quoting_style )
  {
    translation = "\"";
  }
  return translation;
}
size_t quotearg_buffer_restyled( char *buffer, size_t buffersize, char *arg, size_t argsize, enum quoting_style  quoting_style, struct quoting_options *o )
{
  size_t i;
  size_t len = 0;
  char *quote_string = 0;
  size_t quote_string_len = 0;
  _Bool backslash_escapes = 0;
  _Bool unibyte_locale = __ctype_get_mb_cur_max( ) == 1;
  switch ( quoting_style )
  {
  case c_quoting_style:
    if ( len < buffersize )
      buffer[ len ] = '"';
    len++;
    backslash_escapes = 1;
    quote_string = "\"";
    quote_string_len = 1;
    i = 0;
    for ( ; argsize == -1 ? arg[ i ] != 0 : i != argsize;  )
    {
      unsigned char c;
      unsigned char esc;
      if ( backslash_escapes && quote_string_len && quote_string_len + i <= argsize && memcmp( &arg[ i ], quote_string, quote_string_len ) == 0 )
      {
        if ( len < buffersize )
          buffer[ len ] = '\\';
        len++;
      }
      c = arg[ i ];
      switch ( c )
      {
      case 0:
        if ( backslash_escapes )
        {
          if ( len < buffersize )
            buffer[ len ] = '\\';
          len++;
          if ( len < buffersize )
            buffer[ len ] = '0';
          len++;
          if ( len < buffersize )
            buffer[ len ] = '0';
          len++;
          c = 48;
          if ( !( ( backslash_escapes ^ 1 ) & 255 ) && ( o->quote_these_too[ c >> 5 ] & ( 1 << ( c & 31 ) ) ) )
          {
            if ( len < buffersize )
              buffer[ len ] = '\\';
            len++;
            if ( len < buffersize )
              buffer[ len ] = c;
            len++;
            i++;
          }
        }
        break;
      case 63:
        if ( quoting_style == shell_quoting_style )
        {
          break;
        }
        if ( quoting_style == c_quoting_style && i + 2 < argsize && arg[ i + 1 ] == '?' && arg[ i + 2 ] + -33 <= 29 && ( ( 1 << ( arg[ i + 2 ] + -33 ) ) & 0x380051c1 ) )
        {
          c = arg[ i + 2 ];
          i += 2;
          if ( len < buffersize )
            buffer[ len ] = '?';
          len++;
          if ( len < buffersize )
            buffer[ len ] = '\\';
          len++;
          if ( len < buffersize )
            buffer[ len ] = '?';
          len++;
        }
        break;
      case 7:
        esc = 97;
        break;
      case 8:
        esc = 98;
        break;
      case 12:
        esc = 102;
        break;
      case 10:
        esc = 110;
        if ( quoting_style == shell_quoting_style )
        {
          break;
        }
        break;
      case 13:
        esc = 114;
        break;
      case 9:
        esc = 116;
        break;
      case 11:
        esc = 118;
        break;
      case 92:
        esc = c;
        break;
      case 123:
      case 125:
        if ( ( argsize == -1 ? arg[1] != 0 : argsize != 1 ) == 0 )
      case 35:
      case 126:
        if ( i == 0 )
      case 32:
      case 33:
      case 34:
      case 36:
      case 38:
      case 40:
      case 41:
      case 42:
      case 59:
      case 60:
      case 61:
      case 62:
      case 91:
      case 94:
      case 96:
      case 124:
        if ( quoting_style == shell_quoting_style )
        {
          break;
        }
        break;
      case 39:
        if ( quoting_style == shell_quoting_style )
        {
          break;
        }
        if ( quoting_style == shell_always_quoting_style )
        {
          if ( len < buffersize )
            buffer[ len ] = '\'';
          len++;
          if ( len < buffersize )
            buffer[ len ] = '\\';
          len++;
          if ( len < buffersize )
            buffer[ len ] = '\'';
          len++;
        }
        break;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
      case 64:
      {
        size_t m;
        _Bool printable;
        if ( unibyte_locale )
        {
          m = 1;
          printable = ( *(short*)(*(int*)(__ctype_b_loc( )) + ( c * 2 )) & 16384 ) != 0;
        }
        else
        {
          mbstate_t mbstate;
          memset( &mbstate.__count, 0, 8 );
          m = 0;
          printable = 1;
          if ( argsize == -1 )
          {
            argsize = strlen( arg );
          {
            do
            {
              bytes = mbrtowc( &w, &arg[ m + i ], argsize - ( m + i ), &mbstate.__count );
              if ( bytes )
              {
                if ( bytes == -1 )
                  printable = 0;
                else
                if ( bytes == -2 )
                {
                  printable = 0;
                  for ( ; m + i < argsize && arg[ m + i ]; m++ )
                  {
                    // m++;
                  }
                }
                else
                {
                  if ( quoting_style == shell_quoting_style )
                  {
                    size_t j = 1;
                    for ( ; j < bytes; j++ )
                    {
                      switch ( arg[ j + m + i ] + -91 )
                      {
                      default:
                        // j++;
                        break;
                      case 0:
                      case 1:
                      case 3:
                      case 5:
                      case 33:
                        break;
                      }
                    }
                  }
                  if ( iswprint( w ) == 0 )
                    printable = 0;
                  m += bytes;
                }
              }
              else
              {
                if ( m > 1 || ( !( ( backslash_escapes ^ 1 ) & 255 ) && ( ( printable ^ 1 ) & 255 ) ) )
                {
                  size_t ilim = m + i;
                  while ( backslash_escapes == 0 || ( ( printable ^ 1 ) & 255 ) == 0 )
                  {
                    if ( i + 1 < ilim )
                    {
                      if ( len < buffersize )
                        buffer[ len ] = c;
                      len++;
                      i++;
                      c = arg[ i ];
                    }
                  }
                  if ( len < buffersize )
                    buffer[ len ] = '\\';
                  len++;
                  if ( len < buffersize )
                    buffer[ len ] = 48 + ( c >> 6 );
                  len++;
                  if ( len < buffersize )
                    buffer[ len ] = ( ( c >> 3 ) & 7 ) + 48;
                  len++;
                  c = ( c & 7 ) + 48;
                }
              }
            }
            while ( mbsinit( &mbstate.__count ) );
          }
          }
        }
      }
        break;
      default:
        break;
      }
      if ( backslash_escapes )
        c = esc;
    }
    if ( i || quoting_style != shell_quoting_style )
    {
      if ( quote_string )
      {
        for ( ; quote_string[0]; quote_string++ )
        {
          if ( len < buffersize )
            buffer[ len ] = quote_string[0];
          len++;
          // quote_string++;
        }
      }
      if ( len < buffersize )
        buffer[ len ] = 0;
      return len;
    }
    break;
  case escape_quoting_style:
    backslash_escapes = 1;
    break;
  case locale_quoting_style:
  case clocale_quoting_style:
  {
    char *left = gettext_quote( "`", quoting_style );
    char *right = gettext_quote( "'", quoting_style );
    quote_string = left;
    for ( ; quote_string[0]; quote_string++ )
    {
      if ( len < buffersize )
        buffer[ len ] = quote_string[0];
      len++;
      // quote_string++;
    }
    backslash_escapes = 1;
    quote_string = right;
    quote_string_len = strlen( quote_string );
  }
    break;
  case shell_always_quoting_style:
    if ( len < buffersize )
      buffer[ len ] = '\'';
    len++;
    quote_string = "'";
    quote_string_len = 1;
    break;
  case literal_quoting_style:
  case shell_quoting_style:
    break;
  }
}
size_t quotearg_buffer( char *buffer, size_t buffersize, char *arg, size_t argsize, struct quoting_options *o )
{
  struct quoting_options *p = &default_quoting_options;
  int e = *(int*)(__errno_location( ));
  size_t r = quotearg_buffer_restyled( buffer, buffersize, arg, argsize, p->style, p );
  *(int*)(__errno_location( )) = e;
  return r;
}
char *quotearg_alloc( char *arg, size_t argsize, struct quoting_options *o )
{
  int e = *(int*)(__errno_location( ));
  size_t bufsize = quotearg_buffer( 0, 0, arg, argsize, o ) + 1;
  char *buf = xcharalloc( bufsize );
  quotearg_buffer( buf, bufsize, arg, argsize, o );
  *(int*)(__errno_location( )) = e;
  return buf;
}
void quotearg_free( void )
{
  int eax;
  struct slotvec *sv = slotvec;
  unsigned int i = 1;
  for ( ; i < nslots; i++ )
  {
    free( sv[ i ].val );
    // i++;
  }
  if ( sv->val != slot0[0] )
  {
    free( &sv->val );
    slotvec0.size = 256;
    slotvec0.val = slot0;
  }
  if ( sv != slotvec0.size )
  {
    free( sv );
    slotvec = &slotvec0;
  }
  nslots = 1;
  return;
}
char *quotearg_n_options( int n, char *arg, size_t argsize, struct quoting_options *options )
{
  int e = *(int*)(__errno_location( ));
  unsigned int n0 = n;
  struct slotvec *sv = slotvec;
  if ( n < 0 )
  {
    abort( );
  }
  if ( nslots <= n0 )
  {
    size_t n1 = n0 + 1;
    _Bool preallocated = sv == slotvec0.size;
    if ( n1 > 0x1fffffff )
      xalloc_die( );
    slotvec = sv = (struct slotvec*)xrealloc( (void*)sv, n1 << 3 );
    if ( preallocated )
    {
      sv->size = slotvec0.size;
      sv->val = slotvec0.val;
    }
    memset( &sv[ nslots ].size, 0, ( n1 - nslots ) << 3 );
    nslots = n1;
  }
{
  size_t size = sv[ n ].size;
  char *val = sv[ n ].val;
  size_t qsize = quotearg_buffer( val, size, arg, argsize, options );
  if ( size <= qsize )
  {
    sv[ n ].size = size = qsize + 1;
    if ( val != slot0[0] )
      free( val );
    sv[ n + 0 ].val = val = xcharalloc( size );
    quotearg_buffer( val, size, arg, argsize, options );
  }
  *(int*)(__errno_location( )) = e;
  return val;
}
}
char *quotearg_n( int n, char *arg )
{
  return quotearg_n_options( n, arg, ebp_16, ebp_16 );
}
char *quotearg( char *arg )
{
  return quotearg_n( 0, arg );
}
struct quoting_options quoting_options_from_style( enum quoting_style  style )
{
  struct quoting_options o;
  o.style = style;
  memset( &o.quote_these_too[0], 0, 32 );
  o = o;
  return;
}
char *quotearg_n_style( int n, enum quoting_style  s, char *arg )
{
  struct quoting_options o = quoting_options_from_style( s );
  return quotearg_n_options( n, arg, -1, &o );
}
char *quotearg_n_style_mem( int n, enum quoting_style  s, char *arg, size_t argsize )
{
  struct quoting_options o = quoting_options_from_style( s );
  return quotearg_n_options( n, arg, argsize, &o );
}
char *quotearg_style( enum quoting_style  s, char *arg )
{
  return quotearg_n_style( 0, s, arg );
}
char *quotearg_char( char *arg, char ch )
{
  struct quoting_options options = default_quoting_options;
  options.quote_these_too[0] = default_quoting_options.quote_these_too[0];
  options.quote_these_too[1] = default_quoting_options.quote_these_too[1];
  options.quote_these_too[2] = default_quoting_options.quote_these_too[2];
  options.quote_these_too[3] = default_quoting_options.quote_these_too[3];
  options.quote_these_too[4] = default_quoting_options.quote_these_too[4];
  options.quote_these_too[5] = default_quoting_options.quote_these_too[5];
  options.quote_these_too[6] = default_quoting_options.quote_these_too[6];
  options.quote_these_too[7] = default_quoting_options.quote_these_too[7];
  set_char_quoting( &options, ch, 1 );
  return quotearg_n_options( 0, arg, -1, &options );
}
char *quotearg_colon( char *arg )
{
  return quotearg_char( arg, ebp_4 );
}
#if 0
#endif
