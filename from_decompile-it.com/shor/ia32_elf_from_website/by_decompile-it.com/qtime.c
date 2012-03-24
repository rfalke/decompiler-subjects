#include "qtime.c.h"
void quantum_rk4( quantum_reg *reg, double t, double dt, quantum_reg (*H)( unsigned long long , double  ) )
{
  quantum_reg k;
  quantum_reg out;
  quantum_reg tmp;
  double r = 0.000000000000;
  int i;
  void *hash = (void*)reg->hash;
  int hashw;
  reg->hash = 0;
  hashw = reg->hashw;
  reg->hashw = 0;
  k = quantum_matrix_qureg( H, t, reg );
  quantum_scalar_qureg( ( dt * -1.000000000000i ) / 2.000000000000, &k );
  tmp = quantum_vectoradd( reg, &k );
  quantum_scalar_qureg( 0.333333343267, &k );
  quantum_delete_qureg( &k );
  k = quantum_matrix_qureg( H, t + ( dt / 2.000000000000 ), &tmp );
  quantum_delete_qureg( &tmp );
  quantum_scalar_qureg( ( dt * -1.000000000000i ) / 2.000000000000, &k );
  tmp = quantum_vectoradd( reg, &k );
  quantum_scalar_qureg( 0.666666686535, &k );
  quantum_vectoradd_inplace( &out, &k );
  quantum_delete_qureg( &k );
  k = quantum_matrix_qureg( H, t + ( dt / 2.000000000000 ), &tmp );
  quantum_delete_qureg( &tmp );
  quantum_scalar_qureg( dt * -1.000000000000i, &k );
  tmp = quantum_vectoradd( reg, &k );
  quantum_scalar_qureg( 0.333333343267, &k );
  quantum_vectoradd_inplace( &out, &k );
  quantum_delete_qureg( &k );
  k = quantum_matrix_qureg( H, t + dt, &tmp );
  quantum_delete_qureg( &tmp );
  quantum_scalar_qureg( ( dt * -1.000000000000i ) / 6.000000000000, &k );
  quantum_vectoradd_inplace( &out, &k );
  quantum_delete_qureg( &k );
  quantum_delete_qureg( reg );
  i = 0;
  for ( ; i < out.size; i++ )
  {
    r += quantum_prob( out.node[ i ].amplitude );
    //i++;
  }
  out.hash = (int*)hash;
  out.hashw = hashw;
  reg->width = out.width;
  reg->size = out.size;
  reg->hashw = out.hashw;
  reg->node = out.node;
  reg->hash = out.hash;
  return;
}
double quantum_rk4a( quantum_reg *reg, double t, double *dt, double epsilon, quantum_reg (*H)( unsigned long long , double  ) )
{
  quantum_reg reg2;
  quantum_reg old;
  quantum_reg tmp;
  double delta, r, dtused;
  int i;
  void *hash = (void*)reg->hash;
  int hashw;
  reg->hash = 0;
  hashw = reg->hashw;
  reg->hashw = 0;
  quantum_copy_qureg( reg, &old );
  quantum_copy_qureg( reg, &reg2 );
  do
  {
    quantum_rk4( reg, t, dt[0], H );
    quantum_rk4( &reg2, t, dt[0] / 2.000000000000, H );
    quantum_rk4( &reg2, t, dt[0] / 2.000000000000, H );
    delta = 0.000000000000;
    i = 0;
    for ( ; i < reg->size; i++ )
    {
      if ( ( 0 & 1 ) != 1 )
      {
        r = (float)( quantum_real( reg->node[ i ].amplitude - reg2.node[ i ].amplitude ) * (double)( 2 ) ) / quantum_real( reg->node[ i ].amplitude + reg2.node[ i ].amplitude );
      }
      else
      {
        r = (float)( quantum_imag( reg->node[ i ].amplitude - reg2.node[ i ].amplitude ) * (double)( 2 ) ) / quantum_imag( reg->node[ i ].amplitude + reg2.node[ i ].amplitude );
      }
      if ( 0 != 1 )
        delta = r;
      //i++;
    }
    dtused = dt[0];
    pow( epsilon / delta, 0.200000000000, (int)( &(void*)dt[0] & 0xFFFFFFFF ) );
    dt[0] *= 0.000000000000;
    if ( 0 != 1 )
    {
      tmp.width = reg->width;
      tmp.size = reg->size;
      tmp.hashw = reg->hashw;
      tmp.node = reg->node;
      tmp.hash = reg->hash;
      reg->width = old.width;
      reg->size = old.size;
      reg->hashw = old.hashw;
      reg->node = old.node;
      reg->hash = old.hash;
      old.width = tmp.width;
      old.size = tmp.size;
      old.hashw = tmp.hashw;
      old.node = tmp.node;
      old.hash = tmp.hash;
      memcpy( reg2.node, reg->node, reg->size << 4 );
      memcpy( old.node, reg->node, reg->size << 4 );
    }
  }
  while ( 0 == 1 );
  reg->hash = (int*)hash;
  reg->hashw = hashw;
  return;
}
