#include "expn.c.h"
void quantum_exp_mod_n( int N, int x, int width_input, int width, quantum_reg *reg )
{
  int i, j, f;
  quantum_sigma_x( ( width * 2 ) + 2, reg );
  i = 1;
  for ( ; i <= width_input; i++ )
  {
    f = x % N;
    j = 1;
    for ( ; j < i; j++ )
    {
      f *= f;
      f = f % N;
      //j++;
    }
    mul_mod_n( N, f, i + ( width * 3 ) + 1, width, reg );
    //i++;
  }
  return;
}
