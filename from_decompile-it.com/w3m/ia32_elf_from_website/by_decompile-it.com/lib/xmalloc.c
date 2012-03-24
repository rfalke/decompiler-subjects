#include "xmalloc.c.h"
void *xmalloc( size_t n )
{
  void *p = malloc( n );
  if ( p == 0 && n != 0 )
  {
    xalloc_die( );
  }
  return p;
}
void *xrealloc( void *p, size_t n )
{
  p = realloc( p, n );
  if ( p == 0 && n != 0 )
  {
    xalloc_die( );
  }
  return p;
}
void *x2realloc( void *p, size_t *pn )
{
  return x2nrealloc( p, pn, 1 );
}
void *xzalloc( size_t s )
{
  return memset( xmalloc( s ), 0, s );
}
void *xcalloc( size_t n, size_t s )
{
  void *p = calloc( n, s );
  if ( p == 0 )
  {
    xalloc_die( );
  }
  return p;
}
void *xmemdup( void *p, size_t s )
{
  return memcpy( xmalloc( s ), p, s );
}
char *xstrdup( char *string )
{
  return xmemdup( (void*)string, strlen( string ) + 1 );
}
