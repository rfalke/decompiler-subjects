#include "matrix.c.h"
unsigned long quantum_memman( long change )
{
  static long mem, max;
  mem += change;
  if ( max < mem )
  {
    max = mem;
  }
  return mem;
}
quantum_matrix quantum_new_matrix( int cols, int rows )
{
  quantum_matrix m;
  m.rows = rows;
  m.cols = cols;
  m.t = calloc( rows * cols, sizeof( float _Complex ) );
  if ( m.t == 0 )
    quantum_error( 2 );
  quantum_memman( ( rows * cols ) << 3 );
  return m;
}
void quantum_delete_matrix( quantum_matrix *m )
{
  free( m->t );
  quantum_memman( m->cols * m->rows * -8 );
  m->t = 0;
  return;
}
void quantum_print_matrix( quantum_matrix m )
{
  int i, j, z = 0;
  do
  {
    z++;
  }
  while ( ( ( ( 1 << z ) < m.rows ) & 255 ) != 0 );
  z--;
  i = 0;
  for ( ; i < m.rows; i++ )
  {
    j = 0;
    for ( ; j < m.cols; j++ )
    {
      printf( "%g %+gi ", quantum_real( m.t[ j + ( m.cols * i ) ] ), quantum_imag( m.t[ j + ( m.cols * i ) ] ) );
      //j++;
    }
    putchar( 10 );
    //i++;
  }
  putchar( 10 );
  return;
}
quantum_matrix quantum_mmult( quantum_matrix A, quantum_matrix B )
{
  int i, j, k;
  quantum_matrix C;
  if ( A.cols != B.rows )
    quantum_error( 4 );
  C = quantum_new_matrix( B.cols, A.rows );
  i = 0;
  for ( ; i < B.cols; i++ )
  {
    j = 0;
    for ( ; j < A.rows; j++ )
    {
      k = 0;
      for ( ; k < B.rows; k++ )
      {
        C.t[ i + ( C.cols * j ) ] += B.t[ i + ( B.cols * k ) ] * A.t[ k + ( A.cols * j ) ];
        //k++;
      }
      //j++;
    }
    //i++;
  }
  return C;
}
