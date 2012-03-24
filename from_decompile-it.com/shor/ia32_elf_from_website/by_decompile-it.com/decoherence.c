#include "decoherence.c.h"
int quantum_status;
float quantum_lambda;
float quantum_get_decoherence( void )
{
  return quantum_lambda;
}
void quantum_set_decoherence( float l )
{
  if ( 0 == 1 )
  {
    quantum_status = 1;
    quantum_lambda = l;
  }
  else
  {
    quantum_status = 0;
  }
  return;
}
void quantum_decohere( quantum_reg *reg )
{
  float u, v, s, x;
  float *nrands;
  float angle;
  int i, j;
  quantum_gate_counter( 1 );
  if ( quantum_status != 0 )
  {
    nrands = calloc( reg->width, sizeof( float ) );
    if ( nrands == 0 )
      quantum_error( 2 );
    quantum_memman( reg->width << 2 );
    i = 0;
    for ( ; i < reg->width; i++ )
    {
      do
      {
        u = ( quantum_frand( ) * (double)( 2 ) ) - 1.000000000000;
        v = ( quantum_frand( ) * (double)( 2 ) ) - 1.000000000000;
        s = ( u * u ) + ( v * v );
      }
      while ( (bit)( 0 ) );
      if ( (bit)( 0 ) )
      {
      }
      x = sqrt( ( log( s ) * -2.000000000000 ) / s ) * u;
      x *= sqrt( quantum_lambda + quantum_lambda );
      nrands[ i ] = x / 2.000000000000;
      //i++;
    }
    i = 0;
    for ( ; i < reg->size; i++ )
    {
      angle = 0.0;
      j = 0;
      for ( ; j < reg->width; j++ )
      {
        if ( reg->node[ i ].state & ( (long long)1 << j ) )
          angle += nrands[ j ];
        else
          angle -= nrands[ j ];
        //j++;
      }
      reg->node[ i ].amplitude *= quantum_cexp( angle );
      //i++;
    }
    free( nrands );
    quantum_memman( reg->width * -4 );
  }
  return;
}
