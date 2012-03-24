#include "density.c.h"
quantum_density_op quantum_new_density_op( int num, float *prob, quantum_reg *reg )
{
  int i;
  quantum_density_op rho;
  int *phash;
  int hashw;
  rho.num = num;
  rho.prob = calloc( num, sizeof( float ) );
  if ( rho.prob == 0 )
    quantum_error( 2 );
  rho.reg = calloc( num, sizeof( quantum_reg ) );
  if ( rho.reg == 0 )
    quantum_error( 2 );
  quantum_memman( num * 24 );
  rho.prob[0] = prob[0];
  phash = reg->hash;
  hashw = reg->hashw;
  rho.reg->width = reg->width;
  rho.reg->size = reg->size;
  rho.reg->hashw = reg->hashw;
  rho.reg->node = reg->node;
  rho.reg->hash = reg->hash;
  reg->size = 0;
  reg->width = 0;
  reg->node = 0;
  reg->hash = 0;
  i = 1;
  for ( ; i < num; i++ )
  {
    rho.prob[ i ] = prob[ i ];
    rho.reg[ i ].width = reg[ i ].width;
    rho.reg[ i ].size = reg[ i ].size;
    rho.reg[ i ].hashw = reg[ i ].hashw;
    rho.reg[ i ].node = reg[ i ].node;
    rho.reg[ i ].hash = reg[ i ].hash;
    rho.reg[ i ].hash = phash;
    rho.reg[ i ].hashw = hashw;
    reg[ i ].size = 0;
    reg[ i ].width = 0;
    reg[ i ].node = 0;
    reg[ i ].hash = 0;
    //i++;
  }
  return rho;
}
quantum_density_op quantum_qureg2density_op( quantum_reg *reg )
{
  float f = 1.000000000000;
  return quantum_new_density_op( 1, &f, reg );
  return;
}
void quantum_reduced_density_op( int pos, quantum_density_op *rho )
{
  int i, j;
  double p0 = 0.000000000000, ptmp;
  unsigned long long pos2;
  quantum_reg rtmp;
  rho->prob = realloc( rho->prob, rho->num << 3 );
  if ( rho->prob == 0 )
    quantum_error( 2 );
  rho->reg = realloc( rho->reg, rho->num * 40 );
  if ( rho->reg == 0 )
    quantum_error( 2 );
  quantum_memman( rho->num * 24 );
  pos2 = (long long)1 << pos;
  i = 0;
  for ( ; i < rho->num; i++ )
  {
    ptmp = rho->prob[ i ];
    rtmp.width = rho->reg[ i ].width;
    rtmp.size = rho->reg[ i ].size;
    rtmp.hashw = rho->reg[ i ].hashw;
    rtmp.node = rho->reg[ i ].node;
    rtmp.hash = rho->reg[ i ].hash;
    p0 = 0.000000000000;
    j = 0;
    for ( ; j < rho->reg[ i ].size; j++ )
    {
      if ( ( rho->reg[ i ].node[ j ].state & pos2 ) == 0 )
      {
        p0 += quantum_prob_inline( rho->reg[ i ].node[ j ].amplitude );
      }
      //j++;
    }
    rho->prob[ i ] = ptmp * p0;
    rho->prob[ rho->num + i ] = ptmp * ( 1.000000000000 - p0 );
    rho->reg[ i ] = quantum_state_collapse( pos, 0, rtmp );
    rho->reg[ rho->num + i ] = quantum_state_collapse( pos, 1, rtmp );
    quantum_delete_qureg_hashpreserve( &rtmp );
    //i++;
  }
  rho->num <<= 1;
  return;
}
quantum_matrix quantum_density_matrix( quantum_density_op *rho )
{
  int i, j, k, l1, l2, dim = 1 << rho->reg->width;
  quantum_matrix m;
  if ( dim < 0 )
    quantum_error( 3 );
  m = quantum_new_matrix( dim, dim );
  k = 0;
  for ( ; k < rho->num; k++ )
  {
    quantum_reconstruct_hash( &rho->reg[ k ] );
    i = 0;
    for ( ; i < dim; i++ )
    {
      j = 0;
      for ( ; j < dim; j++ )
      {
        l1 = quantum_get_state( i, rho->reg[ k ] );
        l2 = quantum_get_state( j, rho->reg[ k ] );
        if ( l1 >= 0 && l2 >= 0 )
        {
          m.t[ i + ( m.cols * j ) ] += rho->reg[ k ].node[ l2 ].amplitude * rho->prob[ k ] * quantum_conj( rho->reg[ k ].node[ l1 ].amplitude );
        }
        //j++;
      }
      //i++;
    }
    //k++;
  }
  return m;
}
void quantum_print_density_matrix( quantum_density_op *rho )
{
  quantum_matrix m = quantum_density_matrix( rho );
  quantum_print_matrix( m );
  quantum_delete_matrix( &m );
  return;
}
void quantum_delete_density_op( quantum_density_op *rho )
{
  int i;
  quantum_destroy_hash( rho->reg );
  i = 0;
  for ( ; i < rho->num; i++ )
  {
    quantum_delete_qureg_hashpreserve( &rho->reg[ i ] );
    //i++;
  }
  free( rho->prob );
  free( rho->reg );
  quantum_memman( rho->num * -24 );
  rho->prob = 0;
  rho->reg = 0;
  return;
}
float quantum_purity( quantum_density_op *rho )
{
  int i, j, k, l;
  float f = 0.0;
  float _Complex g, dp;
  i = 0;
  for ( ; i < rho->num; i++ )
  {
    f += rho->prob[ i ] * rho->prob[ i ];
    //i++;
  }
  i = 0;
  for ( ; i < rho->num; i++ )
  {
    j = 0;
    for ( ; j < i; j++ )
    {
      dp = quantum_dot_product( &rho->reg[ i ], &rho->reg[ j ] );
      k = 0;
      for ( ; k < rho->reg[ i ].size; k++ )
      {
        l = quantum_get_state( rho->reg[ i ].node[ k ].state, rho->reg[ j ] );
        if ( l >= 0 )
        {
          g = rho->reg[ i ].node[ k ].amplitude * dp * rho->prob[ i ] * rho->prob[ j ] * quantum_conj( rho->reg[ j ].node[ l ].amplitude );
        }
        else
          g = 0.0;
        f += quantum_real( g ) * (double)( 2 );
        //k++;
      }
      //j++;
    }
    //i++;
  }
  return f;
}
