#include "gates.c.h"
void quantum_cnot( int control, int target, quantum_reg *reg )
{
  int i;
  int qec;
  quantum_qec_get_status( &qec, 0 );
  if ( qec != 0 )
    quantum_cnot_ft( control, target, reg );
  else
    quantum_objcode_put( 1, control, target );
  if ( control == 0 )
  {
    i = 0;
    for ( ; i < reg->size; i++ )
    {
      if ( reg->node[ i ].state & ( (long long)1 << control ) )
      {
        reg->node[ i ].state ^= (long long)1 << target;
      }
      //i++;
    }
    quantum_decohere( reg );
    return;
  }
  else
  {
    return;
  }
}
void quantum_toffoli( int control1, int control2, int target, quantum_reg *reg )
{
  int i;
  int qec;
  quantum_qec_get_status( &qec, 0 );
  if ( qec != 0 )
    quantum_toffoli_ft( control1, control2, target, reg );
  else
    quantum_objcode_put( 2, control1, control2, target );
  if ( control1 == 0 )
  {
    i = 0;
    for ( ; i < reg->size; i++ )
    {
      if ( ( reg->node[ i ].state & ( (long long)1 << control1 ) ) && ( reg->node[ i ].state & ( (long long)1 << control2 ) ) )
      {
        reg->node[ i ].state ^= (long long)1 << target;
      }
      //i++;
    }
    quantum_decohere( reg );
    return;
  }
  else
  {
    return;
  }
}
void quantum_unbounded_toffoli( int controlling, quantum_reg *reg, ... )
{
  va_list bits;
  int target;
  int *controls = malloc( ( controlling ) * sizeof( int ) );
  int i, j;
  if ( controls == 0 )
    quantum_error( 2 );
  quantum_memman( controlling << 2 );
  __builtin_va_start( bits, reg );
  i = 0;
  for ( ; i < controlling; i++ )
  {
    controls[ i ] = __builtin_va_arg( bits, int );
    //i++;
  }
  target = __builtin_va_arg( bits, int );
  i = 0;
  for ( ; i < reg->size; i++ )
  {
    j = 0;
    for ( ; j < controlling && ( reg->node[ i ].state & ( (long long)1 << controls[ j ] ) ); j++ )
    {
      //j++;
    }
    if ( j == controlling )
    {
      reg->node[ i ].state ^= (long long)1 << target;
    }
    //i++;
  }
  free( controls );
  quantum_memman( controlling * -4 );
  quantum_decohere( reg );
  return;
}
void quantum_sigma_x( int target, quantum_reg *reg )
{
  int i;
  int qec;
  quantum_qec_get_status( &qec, 0 );
  if ( qec != 0 )
    quantum_sigma_x_ft( target, reg );
  else
    quantum_objcode_put( 3, target );
  if ( target == 0 )
  {
    i = 0;
    for ( ; i < reg->size; i++ )
    {
      reg->node[ i ].state ^= (long long)1 << target;
      //i++;
    }
    quantum_decohere( reg );
    return;
  }
  else
  {
    return;
  }
}
void quantum_sigma_y( int target, quantum_reg *reg )
{
  int i;
  if ( quantum_objcode_put( 4, target ) == 0 )
  {
    i = 0;
    while ( i < reg->size )
    {
      reg->node[ i ].state ^= (long long)1 << target;
      if ( reg->node[ i ].state & ( (long long)1 << target ) )
      {
        reg->node[ i ].amplitude *= 1.000000000000i;
        i++;
      }
      else
      {
        reg->node[ i ].amplitude *= -1.000000000000i;
        i++;
      }
    }
    quantum_decohere( reg );
  }
  return;
}
void quantum_sigma_z( int target, quantum_reg *reg )
{
  int i;
  if ( quantum_objcode_put( 5, target ) == 0 )
  {
    i = 0;
    for ( ; i < reg->size; i++ )
    {
      if ( reg->node[ i ].state & ( (long long)1 << target ) )
        reg->node[ i ].amplitude = -( reg->node[ i ].amplitude );
      //i++;
    }
    quantum_decohere( reg );
  }
  return;
}
void quantum_swaptheleads( int width, quantum_reg *reg )
{
  int i, j;
  int pat1, pat2;
  int qec;
  unsigned long long l;
  quantum_qec_get_status( &qec, 0 );
  if ( qec != 0 )
  {
    i = 0;
    for ( ; i < width; i++ )
    {
      quantum_cnot( i, width + i, reg );
      quantum_cnot( width + i, i, reg );
      quantum_cnot( i, width + i, reg );
      //i++;
    }
  }
  else
  {
    i = 0;
    for ( ; i < reg->size && quantum_objcode_put( 14, width ) == 0; i++ )
    {
      pat1 = (unsigned int)(reg->node[ i ].state & 0xFFFFFFFF) & ( ( 1 << width ) - 1 );
      pat2 = 0;
      j = 0;
      for ( ; j < width; j++ )
      {
        pat2 += (unsigned int)(reg->node[ i ].state & 0xFFFFFFFF) & ( 1 << ( width + j ) );
        //j++;
      }
      l = reg->node[ i ].state - ( pat2 + pat1 );
      l += pat1 << width;
      l += pat2 >> (unsigned char)( width );
      reg->node[ i ].state = l;
      //i++;
    }
  }
  return;
}
void quantum_swaptheleads_omuln_controlled( int control, int width, quantum_reg *reg )
{
  int i = 0;
  for ( ; i < width; i++ )
  {
    quantum_toffoli( control, width + i, i + ( width * 2 ) + 2, reg );
    quantum_toffoli( control, i + ( width * 2 ) + 2, width + i, reg );
    quantum_toffoli( control, width + i, i + ( width * 2 ) + 2, reg );
    //i++;
  }
  return;
}
void quantum_gate1( int target, quantum_matrix m, quantum_reg *reg )
{
  int i, j, k, iset;
  int addsize = 0, decsize = 0, sorted = 1;
  float _Complex t, tnot = 0.0;
  float limit;
  char *done;
  if ( m.cols != 2 || m.rows != 2 )
    quantum_error( 4 );
  quantum_reconstruct_hash( reg );
  i = 0;
  for ( ; i < reg->size; i++ )
  {
    if ( sorted != 0 && ( ( (unsigned int)(reg->node[ i ].state & 0xFFFFFFFF) ^ i ) | ( (unsigned int)(reg->node[ i ].state << 32) ^ ( i >> 31 ) ) ) != 0 )
      sorted = 0;
    if ( quantum_get_state( reg->node[ i ].state ^ ( (long long)1 << target ), reg[0] ) == -1 )
      addsize++;
    //i++;
  }
  reg->node = realloc( reg->node, ( reg->size + addsize ) * sizeof( quantum_reg_node ) );
  if ( reg->node == 0 )
    quantum_error( 2 );
  quantum_memman( addsize << 4 );
  i = 0;
  for ( ; i < addsize; i++ )
  {
    reg->node[ reg->size + i ].state = 0;
    reg->node[ reg->size + i ].amplitude = 0.0;
    //i++;
  }
  done = calloc( reg->size + addsize, sizeof( char ) );
  if ( done == 0 )
    quantum_error( 2 );
  quantum_memman( reg->size + addsize );
  k = reg->size;
  limit = ( 1.000000000000 / (double)( (long long)1 << reg->width ) ) * 0.000001000000;
  i = 0;
  for ( ; i < reg->size; i++ )
  {
    if ( ( done[ i ] & 255 ) == 0 )
    {
      iset = (unsigned int)(reg->node[ i ].state & 0xFFFFFFFF) & ( 1 << target );
      tnot = 0.0;
      j = quantum_get_state( reg->node[ i ].state ^ ( (long long)1 << target ), reg[0] );
      t = reg->node[ i ].amplitude;
      if ( j >= 0 )
        tnot = reg->node[ j ].amplitude;
      if ( iset != 0 )
      {
        reg->node[ i ].amplitude = ( m.t[2] * tnot ) + ( m.t[3] * t );
      }
      else
      {
        reg->node[ i ].amplitude = ( m.t[0] * t ) + ( m.t[1] * tnot );
      }
      if ( j >= 0 )
      {
        if ( iset != 0 )
        {
          reg->node[ j ].amplitude = ( m.t[0] * tnot ) + ( m.t[1] * t );
        }
        else
        {
          reg->node[ j ].amplitude = ( m.t[2] * t ) + ( m.t[3] * tnot );
        }
      }
      else
      if ( ( ( ( 0 == 1 ) & ( 0 == 0 ) & 255 ) == 0 || iset == 0 ) && ( ( ( 0 == 1 ) & ( 0 == 0 ) & 255 ) == 0 || iset != 0 ) )
      {
        reg->node[ k ].state = reg->node[ i ].state ^ ( (long long)1 << target );
        if ( iset != 0 )
        {
          reg->node[ k ].amplitude = m.t[1] * t;
        }
        else
        {
          reg->node[ k ].amplitude = m.t[2] * t;
        }
        k++;
      }
      else
        break;
      if ( j >= 0 )
        done[ j ] = 1;
    }
    //i++;
  }
  reg->size += addsize;
  free( done );
  quantum_memman( reg->size * -1 );
  if ( sorted == 0 )
  {
    i = 0;
    j = 0;
    for ( ; i < reg->size; i++ )
    {
      if ( ( 0 & 1 ) != 1 )
      {
        j++;
        decsize++;
      }
      else
      if ( j != 0 )
      {
        reg->node[ i - j ].state = reg->node[ i ].state;
        reg->node[ i - j ].amplitude = reg->node[ i ].amplitude;
      }
      //i++;
    }
    if ( decsize != 0 )
    {
      reg->size -= decsize;
      reg->node = realloc( reg->node, ( reg->size ) * sizeof( quantum_reg_node ) );
      if ( reg->node == 0 )
        quantum_error( 2 );
      quantum_memman( decsize * -16 );
    }
  }
  quantum_decohere( reg );
  return;
}
void quantum_gate2( int target1, int target2, quantum_matrix m, quantum_reg *reg )
{
  int i, j, k, l;
  int addsize = 0, decsize = 0;
  float _Complex psi_sub[4];
  int base[4];
  int bits[2];
  float limit;
  char *done;
  if ( m.cols != 4 || m.rows != 4 )
    quantum_error( 4 );
  i = 0;
  for ( ; i < ( 1 << reg->hashw ); i++ )
  {
    reg->hash[ i ] = 0;
    //i++;
  }
  i = 0;
  for ( ; i < reg->size; i++ )
  {
    quantum_add_hash( reg->node[ i ].state, i, reg );
    //i++;
  }
  i = 0;
  for ( ; i < reg->size; i++ )
  {
    if ( quantum_get_state( reg->node[ i ].state ^ ( (long long)1 << target1 ), reg[0] ) == -1 )
      addsize++;
    if ( quantum_get_state( reg->node[ i ].state ^ ( (long long)1 << target2 ), reg[0] ) == -1 )
      addsize++;
    //i++;
  }
  reg->node = realloc( reg->node, ( reg->size + addsize ) * sizeof( quantum_reg_node ) );
  if ( reg->node == 0 )
    quantum_error( 4 );
  quantum_memman( addsize << 4 );
  i = 0;
  for ( ; i < addsize; i++ )
  {
    reg->node[ reg->size + i ].state = 0;
    reg->node[ reg->size + i ].amplitude = 0.0;
    //i++;
  }
  done = calloc( reg->size + addsize, sizeof( char ) );
  if ( done == 0 )
    quantum_error( 4 );
  quantum_memman( reg->size + addsize );
  l = reg->size;
  limit = ( 1.000000000000 / (double)( (long long)1 << reg->width ) ) / 1000000.000000000000;
  bits[0] = target1;
  bits[1] = target2;
  i = 0;
  for ( ; i < reg->size; i++ )
  {
    if ( ( done[ i ] & 255 ) == 0 )
    {
      j = quantum_bitmask( reg->node[ i ].state, 2, bits );
      base[ j ] = i;
      base[ j ^ 1 ] = quantum_get_state( reg->node[ i ].state ^ ( (long long)1 << target2 ), reg[0] );
      base[ j ^ 2 ] = quantum_get_state( reg->node[ i ].state ^ ( (long long)1 << target1 ), reg[0] );
      base[ j ^ 3 ] = quantum_get_state( ( (long long)1 << target2 ) ^ reg->node[ i ].state ^ ( (long long)1 << target1 ), reg[0] );
      j = 0;
      for ( ; j <= 3; j++ )
      {
        if ( base[ j ] == -1 )
        {
          base[ j ] = l;
          l++;
        }
        psi_sub[ j ] = reg->node[ base[ j ] ].amplitude;
        //j++;
      }
      j = 0;
      for ( ; j <= 3; j++ )
      {
        reg->node[ base[ j ] ].amplitude = 0.0;
        k = 0;
        for ( ; k <= 3; k++ )
        {
          reg->node[ base[ j ] ].amplitude += m.t[ k + ( m.cols * j ) ] * psi_sub[ k ];
          //k++;
        }
        done[ base[ j ] ] = 1;
        //j++;
      }
    }
    //i++;
  }
  reg->size += addsize;
  free( done );
  quantum_memman( reg->size * -1 );
  i = 0;
  j = 0;
  for ( ; i < reg->size; i++ )
  {
    if ( ( 0 & 1 ) != 1 )
    {
      j++;
      decsize++;
    }
    else
    if ( j != 0 )
    {
      reg->node[ i - j ].state = reg->node[ i ].state;
      reg->node[ i - j ].amplitude = reg->node[ i ].amplitude;
    }
    //i++;
  }
  if ( decsize != 0 )
  {
    reg->size -= decsize;
    reg->node = realloc( reg->node, ( reg->size ) * sizeof( quantum_reg_node ) );
    if ( reg->node == 0 )
      quantum_error( 2 );
    quantum_memman( decsize * -16 );
  }
  quantum_decohere( reg );
  return;
}
void quantum_hadamard( int target, quantum_reg *reg )
{
  quantum_matrix m;
  if ( quantum_objcode_put( 6, target ) == 0 )
  {
    m = quantum_new_matrix( 2, 2 );
    m.t[0] = 0.707106769085;
    m.t[1] = 0.707106769085;
    m.t[2] = 0.707106769085;
    m.t[3] = -0.707106769085;
    quantum_gate1( target, m, reg );
    quantum_delete_matrix( &m );
  }
  return;
}
void quantum_walsh( int width, quantum_reg *reg )
{
  int i = 0;
  for ( ; i < width; i++ )
  {
    quantum_hadamard( i, reg );
    //i++;
  }
  return;
}
void quantum_r_x( int target, float gamma, quantum_reg *reg )
{
  quantum_matrix m;
  if ( quantum_objcode_put( 7, target, gamma ) == 0 )
  {
    m = quantum_new_matrix( 2, 2 );
    m.t[0] = cos( gamma / 2.000000000000 );
    m.t[1] = sin( gamma / 2.000000000000 ) * -1.000000000000i;
    m.t[2] = sin( gamma / 2.000000000000 ) * -1.000000000000i;
    m.t[3] = cos( gamma / 2.000000000000 );
    quantum_gate1( target, m, reg );
    quantum_delete_matrix( &m );
  }
  return;
}
void quantum_r_y( int target, float gamma, quantum_reg *reg )
{
  quantum_matrix m;
  if ( quantum_objcode_put( 8, target, gamma ) == 0 )
  {
    m = quantum_new_matrix( 2, 2 );
    m.t[0] = cos( gamma / 2.000000000000 );
    m.t[1] = sin( gamma / -2.000000000000 );
    m.t[2] = sin( gamma / 2.000000000000 );
    m.t[3] = cos( gamma / 2.000000000000 );
    quantum_gate1( target, m, reg );
    quantum_delete_matrix( &m );
  }
  return;
}
void quantum_r_z( int target, float gamma, quantum_reg *reg )
{
  int i;
  float _Complex z;
  if ( quantum_objcode_put( 9, target, gamma ) == 0 )
  {
    z = quantum_cexp( (float)( gamma / 2.000000000000 ) );
    i = 0;
    while ( i < reg->size )
    {
      if ( reg->node[ i ].state & ( (long long)1 << target ) )
      {
        reg->node[ i ].amplitude *= z;
        i++;
      }
      else
      {
        reg->node[ i ].amplitude /= z;
        i++;
      }
    }
    quantum_decohere( reg );
  }
  return;
}
void quantum_phase_scale( int target, float gamma, quantum_reg *reg )
{
  int i;
  float _Complex z;
  if ( quantum_objcode_put( 11, target, gamma ) == 0 )
  {
    z = quantum_cexp( gamma );
    i = 0;
    for ( ; i < reg->size; i++ )
    {
      reg->node[ i ].amplitude *= z;
      //i++;
    }
    quantum_decohere( reg );
  }
  return;
}
void quantum_phase_kick( int target, float gamma, quantum_reg *reg )
{
  int i;
  float _Complex z;
  if ( quantum_objcode_put( 10, target, gamma ) == 0 )
  {
    z = quantum_cexp( gamma );
    i = 0;
    for ( ; i < reg->size; i++ )
    {
      if ( reg->node[ i ].state & ( (long long)1 << target ) )
      {
        reg->node[ i ].amplitude *= z;
      }
      //i++;
    }
    quantum_decohere( reg );
  }
  return;
}
void quantum_cond_phase( int control, int target, quantum_reg *reg )
{
  int i;
  float _Complex z;
  if ( quantum_objcode_put( 12, control, target ) == 0 )
  {
    z = quantum_cexp( (float)( 3.141592653590 / (double)( (long long)1 << ( control - target ) ) ) );
    i = 0;
    for ( ; i < reg->size; i++ )
    {
      if ( ( reg->node[ i ].state & ( (long long)1 << control ) ) && ( reg->node[ i ].state & ( (long long)1 << target ) ) )
      {
        reg->node[ i ].amplitude *= z;
      }
      //i++;
    }
    quantum_decohere( reg );
  }
  return;
}
void quantum_cond_phase_inv( int control, int target, quantum_reg *reg )
{
  int i;
  float _Complex z = quantum_cexp( (float)( -3.141592653590 / (double)( (long long)1 << ( control - target ) ) ) );
  i = 0;
  for ( ; i < reg->size; i++ )
  {
    if ( ( reg->node[ i ].state & ( (long long)1 << control ) ) && ( reg->node[ i ].state & ( (long long)1 << target ) ) )
    {
      reg->node[ i ].amplitude *= z;
    }
    //i++;
  }
  quantum_decohere( reg );
  return;
}
void quantum_cond_phase_kick( int control, int target, float gamma, quantum_reg *reg )
{
  int i;
  float _Complex z;
  if ( quantum_objcode_put( 12, control, target, gamma ) == 0 )
  {
    z = quantum_cexp( gamma );
    i = 0;
    for ( ; i < reg->size; i++ )
    {
      if ( ( reg->node[ i ].state & ( (long long)1 << control ) ) && ( reg->node[ i ].state & ( (long long)1 << target ) ) )
      {
        reg->node[ i ].amplitude *= z;
      }
      //i++;
    }
    quantum_decohere( reg );
  }
  return;
}
int quantum_gate_counter( int inc )
{
  static int counter;
  if ( inc >= 1 )
  {
    counter += inc;
  }
  else
  if ( inc < 0 )
  {
    counter = 0;
  }
  return counter;
}
