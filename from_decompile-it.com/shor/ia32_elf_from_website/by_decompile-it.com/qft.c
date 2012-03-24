#include "qft.c.h"
void quantum_qft( int width, quantum_reg *reg )
{
  int i = width - 1, j;
  for ( ; i >= 0; i-- )
  {
    j = width - 1;
    for ( ; i < j; j-- )
    {
      quantum_cond_phase( j, i, reg );
      //j--;
    }
    quantum_hadamard( i, reg );
    //i--;
  }
  return;
}
void quantum_qft_inv( int width, quantum_reg *reg )
{
  int i = 0, j;
  for ( ; i < width; i++ )
  {
    quantum_hadamard( i, reg );
    j = i + 1;
    for ( ; j < width; j++ )
    {
      quantum_cond_phase_inv( j, i, reg );
      //j++;
    }
    //i++;
  }
  return;
}
