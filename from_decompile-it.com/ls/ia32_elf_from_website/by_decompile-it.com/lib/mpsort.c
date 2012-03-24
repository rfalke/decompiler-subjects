#include "mpsort.c.h"
static void mpsort_into_tmp( void **base, size_t n, void **tmp, comparison_function cmp );
static void mpsort_with_tmp( void **base, size_t n, void **tmp, comparison_function cmp );
void mpsort_into_tmp( void **base, size_t n, void **tmp, comparison_function cmp )
{
  size_t n1 = n >> 1;
  size_t n2 = n - n1;
  size_t a = 0;
  size_t alim = n1;
  size_t b = n1;
  size_t blim = n;
  void *ba;
  void *bb;
  mpsort_with_tmp( &base[ n1 ], n2, tmp, cmp );
  mpsort_with_tmp( base, n1, tmp, cmp );
  ba = base[ a ];
  bb = base[ b ];
  while ( 1 )
  {
    if ( cmp( ba, bb ) < 1 )
    {
      tmp[0] = ba;
      tmp++;
      a++;
      if ( alim == a )
      {
        a = b;
        alim = blim;
        break;
      }
      else
      {
        ba = base[ a ];
      }
    }
    else
    {
      tmp[0] = bb;
      tmp++;
      b++;
      if ( blim == b )
        break;
      bb = base[ b ];
    }
  }
  memcpy( tmp, base[ a ], ( alim - a ) << 2 );
  return;
}
void mpsort_with_tmp( void **base, size_t n, void **tmp, comparison_function cmp )
{
  if ( n <= 2 )
  {
    if ( n == 2 )
    {
      void *p0 = base[0];
      void *p1 = base[1];
      if ( cmp( p0, p1 ) >= 1 )
      {
        base[0] = p1;
        base[1] = p0;
      }
    }
  }
  else
  {
    size_t n1 = n >> 1;
    size_t n2 = n - n1;
    size_t i;
    size_t t = 0;
    size_t tlim = n1;
    size_t b = n1;
    size_t blim = n;
    void *bb;
    void *tt;
    mpsort_with_tmp( &base[ n1 ], n2, tmp, cmp );
    if ( n1 <= 1 )
      tmp[0] = base[0];
    else
      mpsort_into_tmp( base, n1, tmp, cmp );
    tt = tmp[ t ];
    bb = base[ b ];
    i = 0;
    while ( cmp( tt, bb ) < 1 )
    {
      base[ i ] = bb;
      i++;
      b++;
      if ( blim == b )
      {
        memcpy( base[ i ], tmp[ t ], ( tlim - t ) << 2 );
      }
      bb = base[ b ];
    }
  }
  return;
}
void mpsort( void **base, size_t n, comparison_function cmp )
{
  mpsort_with_tmp( base, n, &base[ n ], cmp );
  return;
}
