#include "HTString.c.h"
BOOLEAN WWW_TraceFlag;
int WWW_TraceMask;
char *HTLibraryVersion;
int strcasecomp8( char *a, char *b )
{
  char *p = a;
  char *q = b;
  for ( ; p[0] && q[0];  )
  {
    int diff = UPPER8( p[0], q[0] );
    if ( diff )
    {
      return diff;
    }
    p++;
    q++;
  }
  if ( p[0] )
  {
    return 1;
  }
  if ( q[0] )
  {
    return -1;
  }
  return 0;
}
int strncasecomp8( char *a, char *b, int n )
{
  char *p = a;
  char *q = b;
{
  while ( a[ n ] != p )
  {
    if ( p[0] == 0 || q[0] == 0 )
    {
      return p[0] - q[0];
    }
    diff = UPPER8( p[0], q[0] );
    if ( diff )
    {
      return diff;
    }
    p++;
    q++;
  }
  return 0;
}
}
int strcasecomp( char *a, char *b )
{
  char *p = a;
  char *q = b;
  for ( ; p[0] && q[0];  )
  {
    int diff = p[0] - q[0];
    if ( diff )
    {
      return diff;
    }
    p++;
    q++;
  }
  if ( p[0] )
  {
    return 1;
  }
  if ( q[0] )
  {
    return -1;
  }
  return 0;
}
int strncasecomp( char *a, char *b, int n )
{
  char *p = a;
  char *q = b;
{
  while ( a[ n ] != p )
  {
    if ( p[0] == 0 || q[0] == 0 )
    {
      return p[0] - q[0];
    }
    diff = p[0] - q[0];
    if ( diff )
    {
      return diff;
    }
    p++;
    q++;
  }
  return 0;
}
}
int strcasecomp_asterisk( char *a, char *b )
{
  char *p;
  int result = 0;
  int done = 0;
  for ( ; result == 0 && done == 0; b++ )
  {
    if ( a[0] == '*' )
    {
      p = b;
      while ( p[0] != '.' && p[0] )
      {
        if ( strcasecomp_asterisk( &a[1], p ) == 0 )
        {
          b = &p[ -1 ];
          result = 0;
          done = 1;
        }
        else
        {
          p++;
          result = 1;
        }
      }
      if ( a[1] == '.' || a[1] == 0 )
      {
        b = &p[ -1 ];
        result = 0;
      }
      else
        result = 1;
    }
    else
    if ( b[0] == '*' )
    {
      result = strcasecomp_asterisk( b, a );
      done = result == 0;
    }
    else
    if ( a[0] == 0 || b[0] == 0 )
    {
      result = b[0] != a[0];
      break;
    }
    else
    {
      if ( b[0] != a[0] )
      {
        result = 1;
        break;
      }
    }
    a++;
    // b++;
  }
  return result;
}
char *HTSACopy( char **dest, char *src )
{
  if ( src )
  {
    if ( dest[0] != src )
    {
      size_t size = strlen( src ) + 1;
      if ( dest[0] )
      {
        free( dest[0] );
        dest[0] = 0;
      }
      dest[0] = malloc( ( size ) * sizeof( char ) );
      if ( dest[0] == 0 )
        outofmem( "../../../WWW/Library/Implementation/HTString.c", "HTSACopy" );
      memcpy( dest[0], src, size );
    }
  }
  else
  if ( dest[0] )
  {
    free( dest[0] );
    dest[0] = 0;
  }
  return dest[0];
}
char *HTSACat( char **dest, char *src )
{
  if ( src && src[0] && dest[0] != src )
  {
    if ( dest[0] )
    {
      size_t length = strlen( dest[0] );
      dest[0] = realloc( dest[0], ( length + strlen( src ) + 1 ) * sizeof( char ) );
      if ( dest[0] == 0 )
        outofmem( "../../../WWW/Library/Implementation/HTString.c", "HTSACat" );
      strcpy( dest[0], src );
    }
    else
    {
      dest[0] = malloc( ( strlen( src ) + 1 ) * sizeof( char ) );
      if ( dest[0] == 0 )
        outofmem( "../../../WWW/Library/Implementation/HTString.c", "HTSACat" );
      strcpy( dest[0], src );
    }
  }
  return dest[0];
}
void HTSAFree_extra( char *s )
{
  free( &s[ -4 ] );
  return;
}
char *HTSACopy_extra( char **dest, char *src )
{
  if ( src )
  {
    size_t srcsize = strlen( src ) + 1;
    size_t size = 0;
    if ( dest[0] )
      size = dest[0];
    if ( size < srcsize )
    {
      if ( dest[0] )
      {
        HTSAFree_extra( dest[0] );
        dest[0] = 0;
      }
      size = srcsize * 2;
      dest[0] = malloc( ( size + 4 ) * sizeof( char ) );
      if ( dest[0] == 0 )
        outofmem( "../../../WWW/Library/Implementation/HTString.c", "HTSACopy_extra" );
      dest[0] = &size;
      dest[0] += 4;
    }
    memcpy( dest[0], src, srcsize );
  }
  else
  if ( dest[0] )
  {
    dest[0] = 0;
  }
  return dest[0];
}
char *HTNextField( char **pstr )
{
  char *p = pstr[0];
  char *start;
  for ( ; p[0] && ' ' <= p[0]; p++ )
  {
    // p++;
  }
  if ( p[0] == 0 )
  {
    pstr[0] = p;
    return 0;
  }
  if ( p[0] == '"' )
  {
    p++;
    start = p;
    for ( ; p[0] && p[0] != '"'; p++ )
    {
      if ( p[0] == '\\' && p[1] )
        p++;
      // p++;
    }
  }
  else
  {
    start = p;
    for ( ; p[0] && p[0] < ' '; p++ )
    {
      // p++;
    }
  }
  if ( p[0] )
  {
    p[0] = 0;
    p++;
  }
  pstr[0] = p;
  return start;
}
char *HTNextTok( char **pstr, char *delims, char *bracks, char *found )
{
  char *p = pstr[0];
  char *start = 0;
  BOOLEAN get_blanks;
  BOOLEAN skip_comments;
  BOOLEAN get_comments;
  BOOLEAN get_closing_char_too = 0;
  char closer;
  if ( pstr == 0 || pstr[0] == 0 )
  {
    return 0;
  }
  if ( delims == 0 )
    delims = " ;,=";
  if ( bracks == 0 )
    bracks = "&lt;\"";
  get_blanks = strchr( delims, ' ' ) == 0 && strchr( bracks, ' ' ) == 0 ? 1 : 0;
  get_comments = strchr( bracks, '(' ) != 0;
  skip_comments = get_comments == 0 && strchr( delims, '(' ) == 0 && get_blanks == 0 ? 1 : 0;
  for ( ; p[0] && get_blanks == 0 && ' ' <= p[0]; p++ )
  {
    // p++;
  }
  if ( p[0] == 0 )
  {
    pstr[0] = p;
    if ( found )
      found[0] = 0;
    return 0;
  }
  else
  {
    while ( p[0] && ( ( get_blanks == 0 && ' ' <= p[0] ) || strchr( delims, p[0] ) ) )
    {
      p++;
    }
    if ( p[0] == 0 )
    {
      pstr[0] = p;
      if ( found )
        found[0] = p[ -1 ];
      return 0;
    }
    else
    {
      if ( p[0] == '(' && ( skip_comments || get_comments ) )
      {
        int comment_level = 0;
        if ( get_comments && start == 0 )
        {
          start = &p[1];
          while ( p[0] )
          {
            if ( p[0] == ')' )
            {
              comment_level += -1;
              if ( comment_level <= 0 )
                break;
            }
            if ( p[0] == '(' )
              comment_level++;
            else
            if ( p[0] == '"' )
            {
              p++;
              for ( ; p[0] && p[0] != '"'; p++ )
              {
                if ( p[0] == '\\' && p[1] )
                  p++;
                // p++;
              }
              if ( p[0] == 0 )
                break;
            }
            if ( p[0] == '\\' && p[1] )
              p++;
            p++;
          }
          if ( get_comments == 0 )
          {
            if ( p[0] )
              p++;
            if ( get_closing_char_too )
            {
              if ( p[0] && ( strchr( bracks, p[0] ) || strchr( delims, p[0] ) == 0 ) )
              {
                get_closing_char_too = strchr( bracks, p[0] ) != 0;
              }
            }
          }
        }
      }
      else
      {
        if ( strchr( bracks, p[0] ) )
        {
          switch ( p[0] )
          {
          case '<':
            closer = '>';
            break;
          case '[':
            closer = ']';
            break;
          case '{':
            closer = '}';
            break;
          case ':':
            closer = ';';
            break;
          default:
            closer = p[0];
            break;
          }
          if ( start == 0 )
          {
            p++;
            start = p;
          }
          while ( p[0] && p[0] != closer )
          {
            if ( p[0] == '\\' && p[1] )
              p++;
            p++;
          }
          if ( get_closing_char_too )
          {
            p++;
            if ( p[0] && ( strchr( bracks, p[0] ) || strchr( delims, p[0] ) == 0 ) )
            {
              get_closing_char_too = strchr( bracks, p[0] ) != 0;
            }
          }
        }
        else
        {
          if ( start == 0 )
          {
            start = p;
          }
          while ( p[0] && ( get_blanks || p[0] < ' ' ) && strchr( bracks, p[0] ) == 0 && strchr( delims, p[0] ) == 0 )
          {
            p++;
          }
          if ( p[0] && strchr( bracks, p[0] ) )
          {
            get_closing_char_too = 1;
          }
          else
          {
            if ( p[0] == '(' && skip_comments )
            {
              pstr[0] = p;
              HTNextTok( pstr, 0, "(", found );
              p[0] = 0;
              if ( pstr[0] && pstr[0] )
                pstr[0]++;
              return start;
            }
          }
        }
      }
      if ( found )
        found[0] = p[0];
      if ( p[0] )
      {
        p[0] = 0;
        p++;
      }
      pstr[0] = p;
      return start;
    }
  }
}
char *HTAlloc( char *ptr, size_t length )
{
  if ( ptr )
  {
    ptr = realloc( ptr, ( length ) * sizeof( char ) );
  }
  else
  {
    ptr = malloc( ( length ) * sizeof( char ) );
  }
  if ( ptr == 0 )
  {
    outofmem( "../../../WWW/Library/Implementation/HTString.c", "HTAlloc" );
  }
  return ptr;
}
char *StrAllocVsprintf( char **pstr, size_t dst_len, char *fmt, va_list *ap )
{
  char *result = 0;
  char *temp = 0;
  if ( pstr && dst_len == 0 && pstr[0] && pstr[0] )
  {
    free( pstr[0] );
    pstr[0] = 0;
  }
  if ( vasprintf( &temp, fmt, ap[0] ) >= 0 )
  {
    if ( dst_len )
    {
      int src_len = strlen( temp );
      int new_len = src_len + dst_len + 1;
      result = HTAlloc( 0, new_len );
      if ( result )
        strcpy( &result[ dst_len ], temp );
      free( temp );
    }
    else
      result = temp;
  }
  if ( pstr )
  {
    return result;
  }
}
char *HTSprintf( char **pstr, char *fmt, ... )
{
  char *result = 0;
  size_t inuse = 0;
  va_list ap;
  __builtin_va_start( ap, fmt );
  if ( pstr && pstr[0] )
  {
    inuse = strlen( pstr[0] );
  }
  result = StrAllocVsprintf( pstr, inuse, fmt, (va_list*)&ap );
  return result;
}
char *HTSprintf0( char **pstr, char *fmt, ... )
{
  char *result = 0;
  va_list ap;
  __builtin_va_start( ap, fmt );
  result = StrAllocVsprintf( pstr, 0, fmt, (va_list*)&ap );
  return result;
}
char *HTQuoteParameter( char *parameter )
{
  size_t i;
  size_t last;
  size_t n = 0;
  size_t quoted = 0;
  char *result;
  if ( parameter == 0 )
    parameter = "";
  last = strlen( parameter );
  i = 0;
  for ( ; i < last; i++ )
  {
    if ( strchr( "\\&#$^*?(){}&lt;&gt;\"';`|", parameter[ i ] ) || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( parameter[ i ] * 2 )) & 8192 ) )
      quoted++;
    // i++;
  }
  result = malloc( ( last + ( quoted * 5 ) + 3 ) * sizeof( char ) );
  if ( result == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTString.c", "HTQuoteParameter" );
  n = 0;
  if ( quoted )
  {
    result[ n ] = '\'';
    n++;
  }
  i = 0;
  for ( ; i < last; i++ )
  {
    if ( parameter[ i ] == '\'' )
    {
      result[ n ] = '\'';
      n++;
      result[ n ] = '"';
      n++;
      result[ n ] = parameter[ i ];
      n++;
      result[ n ] = '"';
      n++;
      result[ n ] = '\'';
      n++;
    }
    else
    {
      result[ n ] = parameter[ i ];
      n++;
    }
    // i++;
  }
  if ( quoted )
  {
    result[ n ] = '\'';
    n++;
  }
  result[ n ] = 0;
  return result;
}
int HTCountCommandArgs( char *command )
{
  int number = 0;
  for ( ; command[0]; command++ )
  {
    if ( command[0] == '%' && command[1] == 's' )
      number++;
    // command++;
  }
  return number;
}
char *HTAfterCommandArg( char *command, int number )
{
  for ( ; number > 0 && command[0]; command++ )
  {
    if ( command[0] == '%' && command[1] == 's' )
    {
      number += -1;
      command++;
    }
    // command++;
  }
  return command;
}
void HTAddXpand( char **result, char *command, int number, char *parameter )
{
  if ( number > 0 )
  {
    char *last = HTAfterCommandArg( command, number + -1 );
    char *next = last;
    if ( number <= 1 && result[0] )
    {
      free( result[0] );
      result[0] = 0;
      while ( next[0] )
      {
        if ( next[0] == '%' && next[1] == 's' )
        {
          if ( next != last )
          {
            size_t len = ( next - last ) + 0;
            HTSACat( result, last );
          }
          HTSACat( result, parameter );
          if ( WWW_TraceFlag == 0 )
            break;
          fprintf( TraceFP( ), "PARAM-EXP:%s\n", result[0] );
          break;
        }
        else
        {
          next++;
        }
      }
    }
  }
  return;
}
void HTAddToCmd( char **result, char *command, int number, char *string )
{
  if ( number > 0 )
  {
    char *last = HTAfterCommandArg( command, number + -1 );
    char *next = last;
    if ( number <= 1 && result[0] )
    {
      free( result[0] );
      result[0] = 0;
    }
    if ( string == 0 )
    {
      string = "";
    }
    while ( next[0] )
    {
      if ( next[0] == '%' && next[1] == 's' )
      {
        if ( next != last )
        {
          size_t len = ( next - last ) + 0;
          HTSACat( result, last );
        }
        HTSACat( result, string );
        if ( WWW_TraceFlag == 0 )
          break;
        fprintf( TraceFP( ), "PARAM-ADD:%s\n", result[0] );
        break;
      }
      else
      {
        next++;
      }
    }
  }
  return;
}
void HTAddParam( char **result, char *command, int number, char *parameter )
{
  if ( number > 0 )
  {
    char *quoted = HTQuoteParameter( parameter );
    HTAddToCmd( result, command, number, quoted );
    if ( quoted )
    {
      free( quoted );
    }
  }
  return;
}
void HTEndParam( char **result, char *command, int number )
{
  char *last;
  int count = HTCountCommandArgs( command );
  if ( count < number )
    number = count;
  last = HTAfterCommandArg( command, number );
  if ( last[0] )
    HTSACat( result, last );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "PARAM-END:%s\n", result[0] );
  }
  return;
}
void HTSABCopy( bstring **dest, char *src, int len )
{
  bstring *t;
  unsigned int need = len + 1;
  if ( WWW_TraceFlag && ( WWW_TraceMask & 16 ) )
  {
    fprintf( TraceFP( ), "HTSABCopy(%p, %p, %d)\n", dest, src, len );
  }
  HTSABFree( dest );
  if ( src )
  {
    if ( WWW_TraceFlag && ( WWW_TraceMask & 16 ) )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "===    %4d:", len );
      }
      trace_bstring2( src, len );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "\n" );
      }
    }
    t = malloc( ( 1 ) * sizeof( bstring ) );
    if ( t == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTString.c", "HTSABCopy" );
    t->str[0] = malloc( need );
    if ( t->str[0] == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTString.c", "HTSABCopy" );
    memcpy( &t->str[0], src, len );
    t->len = len;
    dest[0] = t;
  }
  if ( WWW_TraceFlag && ( WWW_TraceMask & 16 ) )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "=&gt;     %4d:", 0 );
    }
    trace_bstring( dest[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return;
    }
    fprintf( TraceFP( ), "\n" );
  }
  return;
}
void HTSABCopy0( bstring **dest, char *src )
{
  HTSABCopy( dest, src, strlen( src ) );
  return;
}
void HTSABCat( bstring **dest, char *src, int len )
{
  bstring *t = dest[0];
  if ( WWW_TraceFlag && ( WWW_TraceMask & 16 ) )
  {
    fprintf( TraceFP( ), "HTSABCat(%p, %p, %d)\n", dest, src, len );
  }
  if ( src )
  {
    unsigned int need = len + 1;
    if ( WWW_TraceFlag && ( WWW_TraceMask & 16 ) )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "===    %4d:", len );
      }
      trace_bstring2( src, len );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "\n" );
      }
    }
    if ( t )
    {
      unsigned int length = t->len + need;
      t->str[0] = realloc( &t->str[0], length );
      if ( t->str[0] == 0 )
        outofmem( "../../../WWW/Library/Implementation/HTString.c", "HTSACat" );
    }
    else
    {
      t = calloc( 1, sizeof( bstring ) );
      if ( t == 0 )
        outofmem( "../../../WWW/Library/Implementation/HTString.c", "HTSACat" );
      t->str[0] = malloc( need );
    }
    if ( t->str[0] == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTString.c", "HTSACat" );
    memcpy( t->len + t->str[0], src, len );
    t->len += len;
    dest[0] = t;
  }
  if ( WWW_TraceFlag && ( WWW_TraceMask & 16 ) )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "=&gt;     %4d:", 0 );
    }
    trace_bstring( dest[0] );
    if ( WWW_TraceFlag == 0 )
    {
      return;
    }
    fprintf( TraceFP( ), "\n" );
  }
  return;
}
void HTSABCat0( bstring **dest, char *src )
{
  HTSABCat( dest, src, strlen( src ) );
  return;
}
BOOLEAN HTSABEql( bstring *a, bstring *b )
{
  unsigned int len_a = 0;
  unsigned int len_b = 0;
  return ( len_b == len_a && ( len_a == 0 || memcmp( &a->str[0], &b->str[0], a->len ) == 0 ) ? 1 : 0 );
}
void HTSABFree( bstring **ptr )
{
  if ( ptr[0] )
  {
    if ( ptr[0] )
    {
      free( ptr[0] );
      ptr[0] = 0;
    }
    if ( ptr[0] )
    {
      free( ptr[0] );
      ptr[0] = 0;
    }
    ptr[0] = 0;
  }
  return;
}
bstring *HTBprintf( bstring **pstr, char *fmt, ... )
{
  bstring *result = 0;
  char *temp = 0;
  va_list ap;
  __builtin_va_start( ap, fmt );
  temp = StrAllocVsprintf( &temp, 0, fmt, (va_list*)&ap );
  if ( temp && temp[0] )
  {
    HTSABCat( pstr, temp, strlen( temp ) );
  }
  if ( temp )
  {
    free( temp );
    temp = 0;
  }
  result = pstr[0];
  return result;
}
void trace_bstring2( char *text, int size )
{
  int n;
  if ( text )
  {
    n = 0;
    for ( ; n < size;  )
    {
      int ch = text[ n ];
      switch ( ch )
      {
      case 92:
        fwrite( "\\\\", 1, 2, TraceFP( ) );
        break;
      case 13:
        fwrite( "\\r", 1, 2, TraceFP( ) );
        break;
      case 9:
        fwrite( "\\t", 1, 2, TraceFP( ) );
        break;
      case 12:
        fwrite( "\\f", 1, 2, TraceFP( ) );
        break;
      default:
        if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( ch * 2 )) & 16384 ) || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( ch * 2 )) & 8192 ) )
        {
          fputc( ch, TraceFP( ) );
        }
        else
        {
          fprintf( TraceFP( ), "\\%03o", ch );
        }
        break;
      }
      n++;
    }
  }
  return;
}
void trace_bstring( bstring *data )
{
  trace_bstring2( 0, 0 );
  return;
}
#if 0
#endif
