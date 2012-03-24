#include "complex_lib.c.h"
int complex_fixup( complexs *ap )
{
  double fp5;
  double fp6;
  double fp7;
  if ( abs( ap->im ) < abs( ap->re * 0.000000000000 ) )
  {
    ap->im = 0.000000000000;
  }
  ap->re = abs( ap->re );
  if ( abs( ap->re ) < abs( ap->im * 0.000000000000 ) )
  {
    ap = 0.000000000000;
  }
  return 1;
}
complexs complex_add( complexs a, complexs b )
{
  result.im = b.im + a.im;
  result.re = b.re + a.re;
  return;
}
complexs complex_negate( complexs a )
{
  result.im = -( a.im );
  result.re = -( a.re );
  return;
}
complexs complex_mult( complexs a, complexs b )
{
  /* phantom */ complexs r;
  result.im = ( b.im * a.re ) + ( a.im * b.re );
  result.re = ( b.re * a.re ) - ( b.im * a.im );
  return;
}
complexs complex_div( complexs a, complexs b )
{
  /* phantom */ complexs r;
  complexs num;
  double denom;
  b.im = -( b.im );
  return complex_mult( a.re, b.re );
  num.im = num.im / ( ( b.re * b.re ) + ( -( b.im ) * -( b.im ) ) );
  num.re = num.re / ( ( b.re * b.re ) + ( -( b.im ) * -( b.im ) ) );
  return;
}
complexs complex_log( complexs a )
{
  /* phantom */ complexs r;
  result.im = atan2( a.im, a.re );
  result.re = log( ( a.re * a.re ) + ( a.im * a.im ) ) * 0.500000000000;
  return;
}
complexs complex_exp( complexs a )
{
  /* phantom */ complexs r;
  double m;
  ;
  result.im = sin( a.im ) * exp( a.re );
  result.re = cos( a.im ) * exp( a.re );
  return;
}
complexs complex_pow( complexs a, complexs b )
{
  complexs r;
  esi = complex_mult( r.re, b.re );
  esi = complex_exp( r.re );
  complex_fixup( &r );
  *(int*)(complex_exp( r.re )) = r;
  return;
}
#if 0
#endif
