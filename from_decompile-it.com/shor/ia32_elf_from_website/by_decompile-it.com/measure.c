#include "measure.c.h"
double quantum_frand( void )
{
  return (double)( rand( ) ) / 2147483647.000000000000;
}
unsigned long long quantum_measure( quantum_reg reg )
{
  double r;
  int i;
  if ( quantum_objcode_put( 128 ) != 0 )
  {
    return 0;
  }
  r = quantum_frand( );
  i = 0;
  for ( ; i < reg.size; i++ )
  {
    r -= quantum_prob_inline( reg.node[ i ].amplitude );
    if ( !(bit)( 0 ) )
    {
      return reg.node[ i ].state;
    }
    //i++;
  }
  return -1;
}
int quantum_bmeasure( int pos, quantum_reg *reg )
{
  int i;
  int result = 0;
  double pa = 0.000000000000, r;
  unsigned long long pos2;
  quantum_reg out;
  if ( quantum_objcode_put( 129, pos ) != 0 )
  {
    return 0;
  }
  pos2 = (long long)1 << pos;
  i = 0;
  for ( ; i < reg->size; i++ )
  {
    if ( ( reg->node[ i ].state & pos2 ) == 0 )
    {
      pa += quantum_prob_inline( reg->node[ i ].amplitude );
    }
    //i++;
  }
  r = quantum_frand( );
  if ( 0 != 1 )
    result = 1;
  out = quantum_state_collapse( pos, result, reg[0] );
  quantum_delete_qureg_hashpreserve( reg );
  reg->width = out.width;
  reg->size = out.size;
  reg->hashw = out.hashw;
  reg->node = out.node;
  reg->hash = out.hash;
  return result;
}
int quantum_bmeasure_bitpreserve( int pos, quantum_reg *reg )
{
  int i, j;
  int size = 0, result = 0;
  double d = 0.000000000000, pa = 0.000000000000, r;
  unsigned long long pos2;
  quantum_reg out;
  if ( quantum_objcode_put( 130, pos ) != 0 )
  {
    return 0;
  }
  pos2 = (long long)1 << pos;
  i = 0;
  for ( ; i < reg->size; i++ )
  {
    if ( ( reg->node[ i ].state & pos2 ) == 0 )
    {
      pa += quantum_prob_inline( reg->node[ i ].amplitude );
    }
    //i++;
  }
  r = quantum_frand( );
  if ( 0 != 1 )
    result = 1;
  i = 0;
  for ( ; i < reg->size; i++ )
  {
    if ( ( reg->node[ i ].state & pos2 ) != 0 )
    {
      if ( result == 0 )
        reg->node[ i ].amplitude = 0.0;
      else
      {
        d += quantum_prob_inline( reg->node[ i ].amplitude );
        size++;
      }
    }
    else
    if ( result != 0 )
      reg->node[ i ].amplitude = 0.0;
    else
    {
      d += quantum_prob_inline( reg->node[ i ].amplitude );
      size++;
    }
    //i++;
  }
  out.size = size;
  out.node = calloc( size, sizeof( quantum_reg_node ) );
  if ( out.node == 0 )
    quantum_error( 2 );
  quantum_memman( size << 4 );
  out.hashw = reg->hashw;
  out.hash = reg->hash;
  out.width = reg->width;
  i = 0;
  j = 0;
  for ( ; i < reg->size; i++ )
  {
    if ( 0 != 1 || 1 == 0 )
    {
      out.node[ j ].state = reg->node[ i ].state;
      if ( (bit)( 0 ) )
      {
      }
      out.node[ j ].amplitude = reg->node[ i ].amplitude / sqrt( d );
      j++;
    }
    //i++;
  }
  quantum_delete_qureg_hashpreserve( reg );
  reg->width = out.width;
  reg->size = out.size;
  reg->hashw = out.hashw;
  reg->node = out.node;
  reg->hash = out.hash;
  return result;
}
