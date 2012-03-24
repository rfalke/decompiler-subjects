#include "qureg.c.h"
quantum_reg quantum_matrix2qureg( quantum_matrix *m, int width )
{
  quantum_reg reg;
  int i, j, size = 0;
  if ( m->cols != 1 )
    quantum_error( 65536 );
  reg.width = width;
  i = 0;
  for ( ; i < m->rows; i++ )
  {
    if ( 0 != 1 || 1 == 0 )
      size++;
    //i++;
  }
  reg.size = size;
  reg.hashw = width + 2;
  reg.node = calloc( size, sizeof( quantum_reg_node ) );
  if ( reg.node == 0 )
    quantum_error( 2 );
  quantum_memman( size << 4 );
  reg.hash = calloc( 1 << reg.hashw, sizeof( int ) );
  if ( reg.hash == 0 )
    quantum_error( 2 );
  quantum_memman( 4 << reg.hashw );
  i = 0;
  j = 0;
  for ( ; i < m->rows; i++ )
  {
    if ( 0 != 1 || 1 == 0 )
    {
      reg.node[ j ].state = i;
      reg.node[ j ].amplitude = m->t[ i ];
      j++;
    }
    //i++;
  }
  return reg;
}
quantum_reg quantum_new_qureg( unsigned long long initval, int width )
{
  quantum_reg reg;
  char *c;
  reg.width = width;
  reg.size = 1;
  reg.hashw = width + 2;
  reg.node = calloc( 1, sizeof( quantum_reg_node ) );
  if ( reg.node == 0 )
    quantum_error( 2 );
  quantum_memman( 16 );
  reg.hash = calloc( 1 << reg.hashw, sizeof( int ) );
  if ( reg.hash == 0 )
    quantum_error( 2 );
  quantum_memman( 4 << reg.hashw );
  reg.node->state = initval;
  reg.node->amplitude = 1.000000000000;
  c = getenv( "QUOBFILE" );
  if ( c != 0 )
  {
    quantum_objcode_start( );
    quantum_objcode_file( c );
    atexit( &quantum_objcode_exit );
  }
  quantum_objcode_put( 0, initval );
  return reg;
}
quantum_reg quantum_new_qureg_size( int n, int width )
{
  quantum_reg reg;
  reg.width = width;
  reg.size = n;
  reg.hashw = 0;
  reg.hash = 0;
  reg.node = calloc( n, sizeof( quantum_reg_node ) );
  if ( reg.node == 0 )
    quantum_error( 2 );
  quantum_memman( n << 4 );
  return reg;
}
quantum_matrix quantum_qureg2matrix( quantum_reg reg )
{
  quantum_matrix m = quantum_new_matrix( 1, 1 << reg.width );
  int i = 0;
  for ( ; i < reg.size; i++ )
  {
    m.t[ (reg.node[ i ].state & 0xFFFFFFFF) ] = reg.node[ i ].amplitude;
    //i++;
  }
  return m;
}
void quantum_destroy_hash( quantum_reg *reg )
{
  free( reg->hash );
  quantum_memman( -4 << reg->hashw );
  reg->hash = 0;
  return;
}
void quantum_delete_qureg( quantum_reg *reg )
{
  if ( reg->hashw != 0 && reg->hash != 0 )
    quantum_destroy_hash( reg );
  free( reg->node );
  quantum_memman( reg->size * -16 );
  reg->node = 0;
  return;
}
void quantum_delete_qureg_hashpreserve( quantum_reg *reg )
{
  free( reg->node );
  quantum_memman( reg->size * -16 );
  reg->node = 0;
  return;
}
void quantum_copy_qureg( quantum_reg *src, quantum_reg *dst )
{
  dst->width = src->width;
  dst->size = src->size;
  dst->hashw = src->hashw;
  dst->node = src->node;
  dst->hash = src->hash;
  dst->node = calloc( dst->size, sizeof( quantum_reg_node ) );
  if ( dst->node == 0 )
    quantum_error( 2 );
  quantum_memman( dst->size << 4 );
  if ( dst->hashw != 0 )
  {
    dst->hash = calloc( 1 << dst->hashw, sizeof( int ) );
    if ( dst->hash == 0 )
      quantum_error( 2 );
    quantum_memman( 4 << dst->hashw );
  }
  memcpy( dst->node, src->node, src->size << 4 );
  return;
}
void quantum_print_qureg( quantum_reg reg )
{
  int i = 0, j;
  for ( ; i < reg.size; i++ )
  {
    printf( "% f %+fi|%lli&gt; (%e) (|", quantum_real( reg.node[ i ].amplitude ), quantum_imag( reg.node[ i ].amplitude ), reg.node[ i ].state, quantum_prob_inline( reg.node[ i ].amplitude ) );
    j = reg.width - 1;
    for ( ; j >= 0; j-- )
    {
      if ( ( j % 4 ) == 3 )
        putchar( 32 );
      printf( "%i", (int)( reg.node[ i ].state >> (unsigned char)( j ) ) & 1 );
      //j--;
    }
    puts( "&gt;)" );
    //i++;
  }
  putchar( 10 );
  return;
}
void quantum_print_expn( quantum_reg reg )
{
  int i = 0;
  for ( ; i < reg.size; i++ )
  {
    printf( "%i: %lli\n", i, reg.node[ i ].state - ( i << ( reg.width / 2 ) ) );
    //i++;
  }
  return;
}
void quantum_addscratch( int bits, quantum_reg *reg )
{
  int i, oldwidth = reg->width;
  unsigned long long l;
  reg->width += bits;
  i = 0;
  for ( ; i < reg->size; i++ )
  {
    reg->node[ i ].state = l = reg->node[ i ].state << bits;
    //i++;
  }
  return;
}
void quantum_print_hash( quantum_reg reg )
{
  int i = 0;
  for ( ; i < ( 1 << reg.hashw ); i++ )
  {
    if ( i != 0 )
      printf( "%i: %i %llu\n", i, reg.hash[ i ] - 1, reg.node[ reg.hash[ i ] - 1 ].state );
    //i++;
  }
  return;
}
quantum_reg quantum_kronecker( quantum_reg *reg1, quantum_reg *reg2 )
{
  int i, j;
  quantum_reg reg;
  reg.width = reg2->width + reg1->width;
  reg.size = reg2->size * reg1->size;
  reg.hashw = ( reg2->size * reg1->size ) + 2;
  reg.node = calloc( reg.size, sizeof( quantum_reg_node ) );
  if ( reg.node == 0 )
    quantum_error( 2 );
  quantum_memman( reg.size << 4 );
  reg.hash = calloc( 1 << reg.hashw, sizeof( int ) );
  if ( reg.hash == 0 )
    quantum_error( 2 );
  quantum_memman( 4 << reg.hashw );
  i = 0;
  for ( ; i < reg1->size; i++ )
  {
    j = 0;
    for ( ; j < reg2->size; j++ )
    {
      reg.node[ j + ( reg2->size * i ) ].state = reg2->node[ j ].state | ( reg1->node[ i ].state << reg2->width );
      reg.node[ j + ( reg2->size * i ) ].amplitude = reg2->node[ j ].amplitude * reg1->node[ i ].amplitude;
      //j++;
    }
    //i++;
  }
  return reg;
}
quantum_reg quantum_state_collapse( int pos, int value, quantum_reg reg )
{
  int i, j, k;
  int size = 0;
  double d = 0.000000000000;
  unsigned long long lpat = 0, rpat = 0, pos2 = (long long)1 << pos;
  quantum_reg out;
  i = 0;
  for ( ; i < reg.size; i++ )
  {
    if ( ( ( reg.node[ i ].state & pos2 ) != 0 && value != 0 ) || ( ( reg.node[ i ].state & pos2 ) == 0 && value == 0 ) )
    {
      d += quantum_prob_inline( reg.node[ i ].amplitude );
      size++;
    }
    //i++;
  }
  out.width = reg.width - 1;
  out.size = size;
  out.node = calloc( size, sizeof( quantum_reg_node ) );
  if ( out.node == 0 )
    quantum_error( 2 );
  quantum_memman( size << 4 );
  out.hashw = reg.hashw;
  out.hash = reg.hash;
  i = 0;
  j = 0;
  for ( ; i < reg.size; i++ )
  {
    if ( ( ( reg.node[ i ].state & pos2 ) != 0 && value != 0 ) || ( ( reg.node[ i ].state & pos2 ) == 0 && value == 0 ) )
    {
      k = 0;
      rpat = 0;
      for ( ; k < pos; k++ )
      {
        rpat += (long long)1 << k;
        //k++;
      }
      rpat &= reg.node[ i ].state;
      k = 63;
      lpat = 0;
      for ( ; pos < k; k-- )
      {
        lpat += (long long)1 << k;
        //k--;
      }
      lpat &= reg.node[ i ].state;
      out.node[ j ].state = rpat | ( lpat >> 1 );
      if ( (bit)( 0 ) )
      {
      }
      out.node[ j ].amplitude = reg.node[ i ].amplitude / sqrt( d );
      j++;
    }
    //i++;
  }
  return out;
}
float _Complex quantum_dot_product( quantum_reg *reg1, quantum_reg *reg2 )
{
  int i, j;
  float _Complex f = 0.0;
  if ( reg2->hashw != 0 )
    quantum_reconstruct_hash( reg2 );
  i = 0;
  for ( ; i < reg1->size; i++ )
  {
    j = quantum_get_state( reg1->node[ i ].state, reg2[0] );
    if ( j >= 0 )
    {
      f += reg2->node[ j ].amplitude * quantum_conj( reg1->node[ i ].amplitude );
    }
    //i++;
  }
  return f;
}
float _Complex quantum_dot_product_noconj( quantum_reg *reg1, quantum_reg *reg2 )
{
  int i, j;
  float _Complex f = 0.0;
  if ( reg2->hashw != 0 )
    quantum_reconstruct_hash( reg2 );
  i = 0;
  for ( ; i < reg1->size; i++ )
  {
    j = quantum_get_state( reg1->node[ i ].state, reg2[0] );
    if ( j >= 0 )
    {
      f += reg2->node[ j ].amplitude * reg1->node[ i ].amplitude;
    }
    //i++;
  }
  return f;
}
quantum_reg quantum_vectoradd( quantum_reg *reg1, quantum_reg *reg2 )
{
  int i, j, k;
  int addsize = 0;
  quantum_reg reg;
  quantum_copy_qureg( reg1, &reg );
  if ( reg1->hashw != 0 || reg2->hashw != 0 )
  {
    quantum_reconstruct_hash( reg1 );
    quantum_copy_qureg( reg1, &reg );
    i = 0;
    for ( ; i < reg2->size; i++ )
    {
      if ( quantum_get_state( reg2->node[ i ].state, reg1[0] ) == -1 )
        addsize++;
      //i++;
    }
  }
  reg.size += addsize;
  reg.node = realloc( reg.node, ( reg.size ) * sizeof( quantum_reg_node ) );
  if ( reg.node == 0 )
    quantum_error( 2 );
  quantum_memman( addsize << 4 );
  k = reg1->size;
  i = 0;
  for ( ; i < reg2->size; i++ )
  {
    j = quantum_get_state( reg2->node[ i ].state, reg1[0] );
    if ( j >= 0 )
      reg.node[ j ].amplitude += reg2->node[ i ].amplitude;
    else
    {
      reg.node[ k ].state = reg2->node[ i ].state;
      reg.node[ k ].amplitude = reg2->node[ i ].amplitude;
      k++;
    }
    //i++;
  }
  return reg;
}
void quantum_vectoradd_inplace( quantum_reg *reg1, quantum_reg *reg2 )
{
  int i, j, k;
  int addsize = 0;
  if ( reg1->hashw != 0 || reg2->hashw != 0 )
  {
    quantum_reconstruct_hash( reg1 );
    i = 0;
    for ( ; i < reg2->size; i++ )
    {
      if ( quantum_get_state( reg2->node[ i ].state, reg1[0] ) == -1 )
        addsize++;
      //i++;
    }
  }
  reg1->node = realloc( reg1->node, ( reg1->size + addsize ) * sizeof( quantum_reg_node ) );
  if ( reg1->node == 0 )
    quantum_error( 2 );
  quantum_memman( addsize << 4 );
  k = reg1->size;
  i = 0;
  for ( ; i < reg2->size; i++ )
  {
    j = quantum_get_state( reg2->node[ i ].state, reg1[0] );
    if ( j >= 0 )
      reg1->node[ j ].amplitude += reg2->node[ i ].amplitude;
    else
    {
      reg1->node[ k ].state = reg2->node[ i ].state;
      reg1->node[ k ].amplitude = reg2->node[ i ].amplitude;
      k++;
    }
    //i++;
  }
  reg1->size += addsize;
  return;
}
quantum_reg quantum_matrix_qureg( quantum_reg (*A)( unsigned long long , double  ), double t, quantum_reg *reg )
{
  unsigned long long i;
  quantum_reg reg2;
  quantum_reg tmp;
  reg2.width = reg->width;
  reg2.size = 1 << reg2.width;
  reg2.hashw = 0;
  reg2.hash = 0;
  reg2.node = calloc( reg2.size, sizeof( quantum_reg_node ) );
  if ( reg2.node == 0 )
    quantum_error( 2 );
  quantum_memman( reg2.size << 4 );
  i = 0;
  for ( ; i < ( 1 << reg->width ); i++ )
  {
    reg2.node[ (i & 0xFFFFFFFF) ].state = i;
    tmp = A( i, t );
    reg2.node[ (i & 0xFFFFFFFF) ].amplitude = quantum_dot_product_noconj( &tmp, reg );
    quantum_delete_qureg( &tmp );
    //i++;
  }
  return reg2;
}
void quantum_scalar_qureg( float _Complex r, quantum_reg *reg )
{
  int i = 0;
  for ( ; i < reg->size; i++ )
  {
    reg->node[ i ].amplitude *= r;
    //i++;
  }
  return;
}
void quantum_print_timeop( int width, void (*f)( quantum_reg * ) )
{
  int i, j;
  quantum_reg tmp;
  quantum_matrix m = quantum_new_matrix( 1 << width, 1 << width );
  i = 0;
  for ( ; i < ( 1 << width ); i++ )
  {
    tmp = quantum_new_qureg( i, width );
    f( &tmp );
    j = 0;
    for ( ; j < tmp.size; j++ )
    {
      m.t[ (unsigned int)(tmp.node[ j ].state & 0xFFFFFFFF) + ( m.cols * i ) ] = tmp.node[ j ].amplitude;
      //j++;
    }
    quantum_delete_qureg( &tmp );
    //i++;
  }
  quantum_print_matrix( m );
  quantum_delete_matrix( &m );
  return;
}
