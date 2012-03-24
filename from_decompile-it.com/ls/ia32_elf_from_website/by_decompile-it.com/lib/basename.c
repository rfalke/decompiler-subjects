#include "basename.c.h"
char *last_component( char *name )
{
  char *base = name;
  char *p;
  _Bool saw_slash = 0;
  for ( ; base[0] == '/'; base++ )
  {
    //base++;
  }
  p = base;
  for ( ; ( p[0] & 255 ) != 0; p++ )
  {
    if ( p[0] == '/' )
      saw_slash = 1;
    else
    if ( saw_slash != 0 )
    {
      base = p;
      saw_slash = 0;
    }
    //p++;
  }
  return base;
}
char *base_name( char *name )
{
  char *base = last_component( name );
  size_t length;
  if ( ( base[0] & 255 ) == 0 )
  {
    return xstrndup( name, base_len( name ) );
  }
  length = base_len( base );
  if ( base[ length ] == '/' )
    length++;
  return xstrndup( base, length );
}
size_t base_len( char *name )
{
  size_t len;
  size_t prefix_len = 0;
  len = strlen( name );
  for ( ; len > 1 && name[ len - 1 ] == '/'; len-- )
  {
    //len--;
  }
  return len;
}
