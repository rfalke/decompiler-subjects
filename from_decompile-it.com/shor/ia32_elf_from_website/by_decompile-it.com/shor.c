#include "shor.c.h"
int main( int argc, char **argv )
{
  quantum_reg qr;
  int i;
  int width, swidth;
  int x = 0;
  int N;
  int c, q, a, b, factor;
  srand( time( 0 ) );
  if ( argc == 1 )
  {
    puts( "Usage: shor [number]\n" );
    return 3;
  }
  N = atoi( argv[1] );
  if ( N <= 14 )
  {
    puts( "Invalid number\n" );
    return 3;
  }
  width = quantum_getwidth( N * N );
  swidth = quantum_getwidth( N );
  printf( "N = %i, %i qubits required\n", N, width + ( swidth * 3 ) + 2 );
  if ( argc > 2 )
  {
    x = atoi( argv[2] );
  }
  while ( quantum_gcd( N, x ) > 1 || x <= 1 )
  {
    x = rand( ) % N;
  }
  printf( "Random seed: %i\n", x );
  qr = quantum_new_qureg( 0, width );
  i = 0;
  for ( ; i < width; i++ )
  {
    quantum_hadamard( i, &qr );
    //i++;
  }
  quantum_addscratch( ( swidth * 3 ) + 2, &qr );
  quantum_exp_mod_n( N, x, width, swidth, &qr );
  i = 0;
  for ( ; i < ( swidth * 3 ) + 2; i++ )
  {
    quantum_bmeasure( 0, &qr );
    //i++;
  }
  quantum_qft( width, &qr );
  i = 0;
  for ( ; i < width / 2; i++ )
  {
    quantum_cnot( i, width - i - 1, &qr );
    quantum_cnot( width - i - 1, i, &qr );
    quantum_cnot( i, width - i - 1, &qr );
    //i++;
  }
  c = quantum_measure( qr );
  if ( c == -1 )
  {
    puts( "Impossible Measurement!" );
    return 1;
  }
  if ( c == 0 )
  {
    puts( "Measured zero, try again." );
    return 2;
  }
  q = 1 << width;
  printf( "Measured %i (%f), ", c, (double)( c ) / (double)( q ) );
  quantum_frac_approx( &c, &q, width );
  printf( "fractional approximation is %i/%i.\n", c, q );
  if ( ( q % 2 ) == 1 && ( q * 2 ) < ( 1 << width ) )
  {
    puts( "Odd denominator, trying to expand by 2." );
    q <<= 1;
  }
  if ( ( q % 2 ) == 1 )
  {
    puts( "Odd period, try again." );
    return 2;
  }
  printf( "Possible period is %i.\n", q );
  a = N + quantum_ipow( x, q / 2 );
  b = quantum_ipow( x, q / 2 ) - N;
  a = quantum_gcd( N, a );
  b = quantum_gcd( N, b );
  if ( b < a )
    factor = a;
  else
    factor = b;
  if ( factor < N && factor > 1 )
  {
    printf( "%i = %i * %i\n", N, factor, N / factor );
    quantum_delete_qureg( &qr );
    return 0;
  }
  puts( "Unable to determine factors, try again." );
  return 2;
}
