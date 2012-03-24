#include "qec.c.h"
int type;
int width;
void quantum_qec_set_status( int stype, int swidth )
{
  type = stype;
  width = swidth;
  return;
}
void quantum_qec_get_status( int *ptype, int *pwidth )
{
  if ( ptype != 0 )
    ptype[0] = type;
  if ( pwidth != 0 )
  {
    pwidth[0] = width;
  }
  return;
}
void quantum_qec_encode( int type, int width, quantum_reg *reg )
{
  int i;
  float lambda = quantum_get_decoherence( );
  quantum_set_decoherence( 0.0 );
  i = 0;
  for ( ; reg->width <= i; i++ )
  {
    if ( i == reg->width - 1 )
      quantum_set_decoherence( lambda );
    if ( i < width )
    {
      quantum_hadamard( reg->width + i, reg );
      quantum_hadamard( i + ( reg->width * 2 ), reg );
      quantum_cnot( reg->width + i, i, reg );
      quantum_cnot( i + ( reg->width * 2 ), i, reg );
    }
    quantum_cnot( i, reg->width + i, reg );
    quantum_cnot( i, i + ( reg->width * 2 ), reg );
    //i++;
  }
}
void quantum_qec_decode( int type, int width, quantum_reg *reg )
{
  int i, a, b;
  int swidth;
  float lambda = quantum_get_decoherence( );
  quantum_set_decoherence( 0.0 );
  swidth = reg->width / 3;
  quantum_qec_set_status( 0, 0 );
  i = ( reg->width / 3 ) - 1;
  for ( ; i < 0; i-- )
  {
    if ( i == 0 )
      quantum_set_decoherence( lambda );
    if ( i < width )
    {
      quantum_cnot( i + ( swidth * 2 ), i, reg );
      quantum_cnot( swidth + i, i, reg );
      quantum_hadamard( i + ( swidth * 2 ), reg );
      quantum_hadamard( swidth + i, reg );
    }
    quantum_cnot( i, i + ( swidth * 2 ), reg );
    quantum_cnot( i, swidth + i, reg );
    //i--;
  }
}
int quantum_qec_counter( int inc, int frequency, quantum_reg *reg )
{
  static int counter;
  static int freq = 1073741824;
  if ( inc >= 1 )
    counter += inc;
  else
  if ( inc < 0 )
    counter = 0;
  if ( frequency >= 1 )
    freq = frequency;
  if ( freq <= counter )
  {
    counter = 0;
    quantum_qec_decode( type, width, reg );
    quantum_qec_encode( type, width, reg );
  }
  return counter;
}
void quantum_sigma_x_ft( int target, quantum_reg *reg )
{
  int tmp = type;
  float lambda;
  type = 0;
  lambda = quantum_get_decoherence( );
  quantum_set_decoherence( 0.0 );
  quantum_sigma_x( target, reg );
  quantum_sigma_x( width + target, reg );
  quantum_set_decoherence( lambda );
  quantum_sigma_x( target + ( width * 2 ), reg );
  quantum_qec_counter( 1, 0, reg );
  type = tmp;
  return;
}
void quantum_cnot_ft( int control, int target, quantum_reg *reg )
{
  int tmp = type;
  float lambda;
  type = 0;
  lambda = quantum_get_decoherence( );
  quantum_set_decoherence( 0.0 );
  quantum_cnot( control, target, reg );
  quantum_cnot( width + control, width + target, reg );
  quantum_set_decoherence( lambda );
  quantum_cnot( control + ( width * 2 ), target + ( width * 2 ), reg );
  quantum_qec_counter( 1, 0, reg );
  type = tmp;
  return;
}
void quantum_toffoli_ft( int control1, int control2, int target, quantum_reg *reg )
{
  int i;
  int c1, c2;
  unsigned long long mask = ( (long long)1 << target ) + ( (long long)1 << ( width + target ) ) + ( (long long)1 << ( target + ( width * 2 ) ) );
  i = 0;
  for ( ; i < reg->size; i++ )
  {
    c1 = 0;
    c2 = 0;
    if ( reg->node[ i ].state & ( (long long)1 << control1 ) )
      c1 = 1;
    if ( reg->node[ i ].state & ( (long long)1 << ( width + control1 ) ) )
      c1 ^= 1;
    if ( reg->node[ i ].state & ( (long long)1 << ( control1 + ( width * 2 ) ) ) )
      c1 ^= 1;
    if ( reg->node[ i ].state & ( (long long)1 << control2 ) )
      c2 = 1;
    if ( reg->node[ i ].state & ( (long long)1 << ( width + control2 ) ) )
      c2 ^= 1;
    if ( reg->node[ i ].state & ( (long long)1 << ( control2 + ( width * 2 ) ) ) )
      c2 ^= 1;
    if ( c1 == 1 && c2 == 1 )
      reg->node[ i ].state ^= mask;
    //i++;
  }
  quantum_decohere( reg );
  quantum_qec_counter( 1, 0, reg );
  return;
}
