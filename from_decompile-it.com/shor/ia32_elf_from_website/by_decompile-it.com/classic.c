#include "classic.c.h"
int quantum_ipow( int a, int b )
{
  int i;
  int r = 1;
  i = 0;
  for ( ; i < b; i++ )
  {
    r *= a;
    //i++;
  }
  return r;
}
int quantum_gcd( int u, int v )
{
  int r;
  for ( ; v != 0; v = r )
  {
    r = u % v;
    u = v;
    //v = r;
  }
  return u;
}
void quantum_frac_approx( int *a, int *b, int width )
{
  int ah;
  float f = (double)( a[0] ) / (double)( b[0] );
  float g = f;
  int i, num2 = 0, den2 = 1, num1 = 1, den1 = 0, num = 0, den = 0;
  do
  {
    i = (int)( g + 0.000005000000 );
    g -= (double)( i ) - 0.000005000000;
    g = 1.000000000000 / g;
    if ( ( 1 << width ) < den2 + ( i * den1 ) )
      break;
    num = num2 + ( num1 * i );
    den = den2 + ( i * den1 );
    num2 = num1;
    den2 = den1;
    num1 = num;
    den1 = den;
  }
  while ( !(bit)( 0 ) );
  a[0] = num;
  b[0] = den;
  return;
}
int quantum_getwidth( int n )
{
  int i = 1;
  for ( ; ( 1 << i ) < n; i++ )
  {
    //i++;
  }
  return i;
}
int quantum_inverse_mod( int n, int c )
{
  int i = 1;
  for ( ; ( i * c ) % n != 1; i++ )
  {
    //i++;
  }
  return i;
}
