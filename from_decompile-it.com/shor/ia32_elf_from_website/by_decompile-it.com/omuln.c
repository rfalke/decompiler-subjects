#include "omuln.c.h"
void emul( int a, int L, int width, quantum_reg *reg )
{
  int i = width - 1;
  for ( ; i >= 0; i-- )
  {
    if ( ( ( a >> (unsigned char)( i ) ) & 1 ) != 0 )
      quantum_toffoli( ( width * 2 ) + 2, L, width + i, reg );
    //i--;
  }
  return;
}
void muln( int N, int a, int ctl, int width, quantum_reg *reg )
{
  int i;
  int L = ( width * 2 ) + 1;
  quantum_toffoli( ctl, ( width * 2 ) + 2, L, reg );
  emul( a % N, L, width, reg );
  quantum_toffoli( ctl, ( width * 2 ) + 2, L, reg );
  i = 1;
  for ( ; i < width; i++ )
  {
    quantum_toffoli( ctl, i + ( width * 2 ) + 2, L, reg );
    add_mod_n( N, ( a << i ) % N, width, reg );
    quantum_toffoli( ctl, i + ( width * 2 ) + 2, L, reg );
    //i++;
  }
  return;
}
void muln_inv( int N, int a, int ctl, int width, quantum_reg *reg )
{
  int i;
  int L = ( width * 2 ) + 1;
  a = quantum_inverse_mod( N, a );
  i = width - 1;
  for ( ; i >= 1; i-- )
  {
    quantum_toffoli( ctl, i + ( width * 2 ) + 2, L, reg );
    add_mod_n( N, N - ( ( a << i ) % N ), width, reg );
    quantum_toffoli( ctl, i + ( width * 2 ) + 2, L, reg );
    //i--;
  }
  quantum_toffoli( ctl, ( width * 2 ) + 2, L, reg );
  emul( a % N, L, width, reg );
  quantum_toffoli( ctl, ( width * 2 ) + 2, L, reg );
  return;
}
void mul_mod_n( int N, int a, int ctl, int width, quantum_reg *reg )
{
  muln( N, a, ctl, width, reg );
  quantum_swaptheleads_omuln_controlled( ctl, width, reg );
  muln_inv( N, a, ctl, width, reg );
  return;
}
