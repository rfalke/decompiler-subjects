#include "oaddn.c.h"
void test_sum( int compare, int width, quantum_reg *reg )
{
  int i;
  if ( compare & ( (long long)1 << ( width - 1 ) ) )
  {
    quantum_cnot( ( width * 2 ) - 1, width - 1, reg );
    quantum_sigma_x( ( width * 2 ) - 1, reg );
    quantum_cnot( ( width * 2 ) - 1, 0, reg );
  }
  quantum_sigma_x( ( width * 2 ) - 1, reg );
  quantum_cnot( ( width * 2 ) - 1, width - 1, reg );
  i = width - 2;
  for ( ; i >= 1; i-- )
  {
    if ( ( ( compare >> (unsigned char)( i ) ) & 1 ) != 0 )
    {
      quantum_toffoli( i + 1, width + i, i, reg );
      quantum_sigma_x( width + i, reg );
      quantum_toffoli( i + 1, width + i, 0, reg );
    }
    quantum_sigma_x( width + i, reg );
    quantum_toffoli( i + 1, width + i, i, reg );
    //i--;
  }
  if ( ( compare & 1 ) != 0 )
  {
    quantum_sigma_x( width, reg );
    quantum_toffoli( width, 1, 0, reg );
  }
  quantum_toffoli( ( width * 2 ) + 1, 0, width * 2, reg );
  if ( ( compare & 1 ) != 0 )
  {
    quantum_toffoli( width, 1, 0, reg );
    quantum_sigma_x( width, reg );
  }
  i = 1;
  for ( ; i <= width - 2; i++ )
  {
    if ( ( ( compare >> (unsigned char)( i ) ) & 1 ) != 0 )
    {
      quantum_toffoli( i + 1, width + i, 0, reg );
      quantum_sigma_x( width + i, reg );
      quantum_toffoli( i + 1, width + i, i, reg );
    }
    quantum_toffoli( i + 1, width + i, i, reg );
    quantum_sigma_x( width + i, reg );
    //i++;
  }
  if ( ( ( compare >> (unsigned char)( width - 1 ) ) & 1 ) != 0 )
  {
    quantum_cnot( ( width * 2 ) - 1, 0, reg );
    quantum_sigma_x( ( width * 2 ) - 1, reg );
    quantum_cnot( ( width * 2 ) - 1, width - 1, reg );
  }
  quantum_cnot( ( width * 2 ) - 1, width - 1, reg );
  quantum_sigma_x( ( width * 2 ) - 1, reg );
  return;
}
void muxfa( int a, int b_in, int c_in, int c_out, int xlt_l, int L, int total, quantum_reg *reg )
{
  if ( a == 0 )
  {
    quantum_toffoli( b_in, c_in, c_out, reg );
    quantum_cnot( b_in, c_in, reg );
  }
  if ( a == 3 )
  {
    quantum_toffoli( L, c_in, c_out, reg );
    quantum_cnot( L, c_in, reg );
    quantum_toffoli( b_in, c_in, c_out, reg );
    quantum_cnot( b_in, c_in, reg );
  }
  if ( a == 1 )
  {
    quantum_toffoli( L, xlt_l, b_in, reg );
    quantum_toffoli( b_in, c_in, c_out, reg );
    quantum_toffoli( L, xlt_l, b_in, reg );
    quantum_toffoli( b_in, c_in, c_out, reg );
    quantum_toffoli( L, xlt_l, c_in, reg );
    quantum_toffoli( b_in, c_in, c_out, reg );
    quantum_cnot( b_in, c_in, reg );
  }
  if ( a == 2 )
  {
    quantum_sigma_x( xlt_l, reg );
    quantum_toffoli( L, xlt_l, b_in, reg );
    quantum_toffoli( b_in, c_in, c_out, reg );
    quantum_toffoli( L, xlt_l, b_in, reg );
    quantum_toffoli( b_in, c_in, c_out, reg );
    quantum_toffoli( L, xlt_l, c_in, reg );
    quantum_toffoli( b_in, c_in, c_out, reg );
    quantum_cnot( b_in, c_in, reg );
    quantum_sigma_x( xlt_l, reg );
  }
  return;
}
void muxfa_inv( int a, int b_in, int c_in, int c_out, int xlt_l, int L, int total, quantum_reg *reg )
{
  if ( a == 0 )
  {
    quantum_cnot( b_in, c_in, reg );
    quantum_toffoli( b_in, c_in, c_out, reg );
  }
  if ( a == 3 )
  {
    quantum_cnot( b_in, c_in, reg );
    quantum_toffoli( b_in, c_in, c_out, reg );
    quantum_cnot( L, c_in, reg );
    quantum_toffoli( L, c_in, c_out, reg );
  }
  if ( a == 1 )
  {
    quantum_cnot( b_in, c_in, reg );
    quantum_toffoli( b_in, c_in, c_out, reg );
    quantum_toffoli( L, xlt_l, c_in, reg );
    quantum_toffoli( b_in, c_in, c_out, reg );
    quantum_toffoli( L, xlt_l, b_in, reg );
    quantum_toffoli( b_in, c_in, c_out, reg );
    quantum_toffoli( L, xlt_l, b_in, reg );
  }
  if ( a == 2 )
  {
    quantum_sigma_x( xlt_l, reg );
    quantum_cnot( b_in, c_in, reg );
    quantum_toffoli( b_in, c_in, c_out, reg );
    quantum_toffoli( L, xlt_l, c_in, reg );
    quantum_toffoli( b_in, c_in, c_out, reg );
    quantum_toffoli( L, xlt_l, b_in, reg );
    quantum_toffoli( b_in, c_in, c_out, reg );
    quantum_toffoli( L, xlt_l, b_in, reg );
    quantum_sigma_x( xlt_l, reg );
  }
  return;
}
void muxha( int a, int b_in, int c_in, int xlt_l, int L, int total, quantum_reg *reg )
{
  if ( a == 0 )
    quantum_cnot( b_in, c_in, reg );
  if ( a == 3 )
  {
    quantum_cnot( L, c_in, reg );
    quantum_cnot( b_in, c_in, reg );
  }
  if ( a == 1 )
  {
    quantum_toffoli( L, xlt_l, c_in, reg );
    quantum_cnot( b_in, c_in, reg );
  }
  if ( a == 2 )
  {
    quantum_sigma_x( xlt_l, reg );
    quantum_toffoli( L, xlt_l, c_in, reg );
    quantum_cnot( b_in, c_in, reg );
    quantum_sigma_x( xlt_l, reg );
  }
  return;
}
void muxha_inv( int a, int b_in, int c_in, int xlt_l, int L, int total, quantum_reg *reg )
{
  if ( a == 0 )
    quantum_cnot( b_in, c_in, reg );
  if ( a == 3 )
  {
    quantum_cnot( b_in, c_in, reg );
    quantum_cnot( L, c_in, reg );
  }
  if ( a == 1 )
  {
    quantum_cnot( b_in, c_in, reg );
    quantum_toffoli( L, xlt_l, c_in, reg );
  }
  if ( a == 2 )
  {
    quantum_sigma_x( xlt_l, reg );
    quantum_cnot( b_in, c_in, reg );
    quantum_toffoli( L, xlt_l, c_in, reg );
    quantum_sigma_x( xlt_l, reg );
  }
  return;
}
void madd( int a, int a_inv, int width, quantum_reg *reg )
{
  int i, j;
  int total = ( width << 2 ) + 2;
  i = 0;
  for ( ; i < width - 1; i++ )
  {
    if ( ( ( a >> (unsigned char)( i ) ) & 1 ) != 0 )
      j = 2;
    else
      j = 0;
    if ( ( ( a_inv >> (unsigned char)( i ) ) & 1 ) != 0 )
      j++;
    muxfa( j, width + i, i, i + 1, width * 2, ( width * 2 ) + 1, total, reg );
    //i++;
  }
  j = 0;
  if ( ( ( a >> (unsigned char)( width - 1 ) ) & 1 ) != 0 )
    j = 2;
  if ( ( ( a_inv >> (unsigned char)( width - 1 ) ) & 1 ) != 0 )
    j++;
  muxha( j, ( width * 2 ) - 1, width - 1, width * 2, ( width * 2 ) + 1, total, reg );
  return;
}
void madd_inv( int a, int a_inv, int width, quantum_reg *reg )
{
  int i, j;
  int total = ( width << 2 ) + 2;
  j = 0;
  if ( ( ( a >> (unsigned char)( width - 1 ) ) & 1 ) != 0 )
    j = 2;
  if ( ( ( a_inv >> (unsigned char)( width - 1 ) ) & 1 ) != 0 )
    j++;
  muxha_inv( j, width - 1, ( width * 2 ) - 1, width * 2, ( width * 2 ) + 1, total, reg );
  i = width - 2;
  for ( ; i >= 0; i-- )
  {
    if ( ( ( a >> (unsigned char)( i ) ) & 1 ) != 0 )
      j = 2;
    else
      j = 0;
    if ( ( ( a_inv >> (unsigned char)( i ) ) & 1 ) != 0 )
      j++;
    muxfa_inv( j, i, width + i, i + width + 1, width * 2, ( width * 2 ) + 1, total, reg );
    //i--;
  }
  return;
}
void addn( int N, int a, int width, quantum_reg *reg )
{
  test_sum( N - a, width, reg );
  madd( ( a + ( 1 << width ) ) - N, a, width, reg );
  return;
}
void addn_inv( int N, int a, int width, quantum_reg *reg )
{
  quantum_cnot( ( width * 2 ) + 1, width * 2, reg );
  madd_inv( ( 1 << width ) - a, N - a, width, reg );
  quantum_swaptheleads( width, reg );
  test_sum( a, width, reg );
  return;
}
void add_mod_n( int N, int a, int width, quantum_reg *reg )
{
  addn( N, a, width, reg );
  addn_inv( N, a, width, reg );
  return;
}
