#include "xmalloc.c.h"
void *xmalloc( size_t n )
{
  void *p = malloc( n );
  if ( p == 0 && n )
  {
    xalloc_die( );
  }
  return p;
}
void *xrealloc( void *p, size_t n )
{
  p = realloc( p, n );
  if ( p == 0 && n )
  {
    xalloc_die( );
  }
  return p;
}
void *x2realloc( void *p, size_t *pn )
{
  return x2nrealloc( p, pn, ebp_16 );
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
void *xnmalloc( size_t n, size_t s )
{
  int edx;
  if ( (long long)0xffffffff / s < n )
    xalloc_die( );
  return xmalloc( s * n );
}
char *xstrdup( char *string )
{
  return xmemdup( (void*)string, strlen( string ) + 1 );
}
void *xnrealloc( void *p, size_t n, size_t s )
{
  int edx;
  if ( (long long)0xffffffff / s < n )
    xalloc_die( );
  return xrealloc( p, s * n );
}
void *x2nrealloc( void *p, size_t *pn, size_t s )
{
  int edx;
  size_t n = pn[0];
  if ( p == 0 )
  {
    if ( n == 0 )
    {
      n = (long long)64 / s;
      n += n == 0;
    }
  }
  else
  {
    if ( (long long)2863311530 / s <= n )
      xalloc_die( );
    n += ( n + 1 ) >> 1;
  }
  pn[0] = n;
  return xrealloc( p, s * n );
}
char *xcharalloc( size_t n )
{
  return xmalloc( n );
}
#if 0
#endif
