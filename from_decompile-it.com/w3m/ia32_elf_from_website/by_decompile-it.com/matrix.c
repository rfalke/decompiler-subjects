#include "matrix.c.h"
int LUfactor( Matrix A, int *indexarray )
{
  double fp7;
  int dim = A->dim, i, j, k, i_max, k_max;
  Vector scale = new_vector( dim );
  double mx, tmp;
  i = 0;
  for ( ; i < dim; i++ )
  {
    indexarray[ i ] = i;
    //i++;
  }
  i = 0;
  for ( ; i < dim; i++ )
  {
    mx = 0.000000000000;
    j = 0;
    for ( ; j < dim; j++ )
    {
      tmp = abs( A[0].me[ j + ( A->dim * i ) ] );
      mx = mx;
      if ( !(bit)( 0 ) )
        mx = tmp;
      //j++;
    }
    scale[0].ve[ i ] = mx;
    //i++;
  }
  k_max = dim - 1;
  k = 0;
  for ( ; k < k_max; k++ )
  {
    mx = 0.000000000000;
    i_max = -1;
    i = k;
    for ( ; i < dim; i++ )
    {
      if ( !0 )
      {
        tmp = abs( A[0].me[ k + ( A->dim * i ) ] ) / scale[0].ve[ i ];
        mx = mx;
        if ( !(bit)( 0 ) )
        {
          mx = tmp;
          i_max = i;
        }
      }
      //i++;
    }
    if ( i_max == -1 )
      A[0].me[ ( k * ( ( A->dim * 8 ) + 8 ) ) >> 3 ] = 0.000000000000;
    else
    {
      if ( k != i_max )
      {
        int tmp = indexarray[ i_max ];
        indexarray[ i_max ] = indexarray[ k ];
        indexarray[ k ] = tmp;
        j = 0;
        for ( ; j < dim; j++ )
        {
          double tmp = A[0].me[ j + ( A->dim * i_max ) ];
          A[0].me[ j + ( A->dim * i_max ) ] = A[0].me[ j + ( A->dim * k ) ];
          A[0].me[ j + ( A->dim * k ) ] = tmp;
          //j++;
        }
      }
      i = k + 1;
      for ( ; i < dim; i++ )
      {
        A[0].me[ k + ( A->dim * i ) ] /= A[0].me[ ( k * ( ( A->dim * 8 ) + 8 ) ) >> 3 ];
        tmp = A[0].me[ k + ( A->dim * i ) ];
        j = k + 1;
        for ( ; j < dim; j++ )
        {
          A[0].me[ j + ( A->dim * i ) ] -= A[0].me[ j + ( A->dim * k ) ] * tmp;
          //j++;
        }
        //i++;
      }
    }
    //k++;
  }
  return 0;
}
int LUsolve( Matrix A, int *indexarray, Vector b, Vector x )
{
  int i, dim = A->dim;
  i = 0;
  for ( ; i < dim; i++ )
  {
    x[0].ve[ i ] = b[0].ve[ indexarray[ i ] ];
    //i++;
  }
  return Lsolve( A, x, x, 1.000000000000 ) == -1 || Usolve( A, x, x, 0.000000000000 ) == -1 ? -1 : 0;
}
Matrix LUinverse( Matrix A, int *indexarray, Matrix out )
{
  int i, j, dim = A->dim;
  Vector tmp;
  Vector tmp2;
  if ( out == 0 )
  {
    out = new_matrix( dim );
  }
  tmp = new_vector( dim );
  tmp2 = new_vector( dim );
  i = 0;
  for ( ; i < dim; i++ )
  {
    j = 0;
    for ( ; j < dim; j++ )
    {
      tmp[0].ve[ j ] = 0.000000000000;
      //j++;
    }
    tmp[0].ve[ i ] = 1.000000000000;
    if ( LUsolve( A, indexarray, tmp, tmp2 ) == -1 )
    {
      break;
    }
    else
    {
      j = 0;
      for ( ; j < dim; j++ )
      {
        out[0].me[ i + ( out->dim * j ) ] = tmp2[0].ve[ j ];
        //j++;
      }
      //i++;
    }
  }
  return out;
}
int Usolve( Matrix mat, Vector b, Vector out, double diag )
{
  double fp7;
  int i, j, i_lim, dim = mat->dim;
  double sum;
  i = dim - 1;
  for ( ; i >= 0; i-- )
  {
    if ( ( ( ( ( b[0].ve[ i ] <> 0.000000000000 ) & 69 ) >> 6 ) & 1 ) != 1 )
    {
    }
    else
    {
      out[0].ve[ i ] = 0.000000000000;
      //i--;
    }
    i_lim = i;
    for ( ; i >= 0; i-- )
    {
      sum = b[0].ve[ i ];
      j = i + 1;
      for ( ; j <= i_lim; j++ )
      {
        sum -= out[0].ve[ j ] * mat[0].me[ j + ( mat->dim * i ) ];
        //j++;
      }
      if ( ( ( ( ( diag <> 0.000000000000 ) & 69 ) >> 6 ) & 1 ) == 1 )
      {
        if ( !0 )
        {
          break;
        }
        else
          out[0].ve[ i ] = sum / mat[0].me[ ( i * ( ( mat->dim * 8 ) + 8 ) ) >> 3 ];
      }
      else
        out[0].ve[ i ] = sum / diag;
      //i--;
    }
    break;
  }
  i_lim = i;
}
int Lsolve( Matrix mat, Vector b, Vector out, double diag )
{
  double fp7;
  int i, j, i_lim, dim = mat->dim;
  double sum;
  i = 0;
  for ( ; i < dim; i++ )
  {
    if ( ( ( ( ( b[0].ve[ i ] <> 0.000000000000 ) & 69 ) >> 6 ) & 1 ) != 1 )
    {
    }
    else
    {
      out[0].ve[ i ] = 0.000000000000;
      //i++;
    }
    i_lim = i;
    for ( ; i < dim; i++ )
    {
      sum = b[0].ve[ i ];
      j = i_lim;
      for ( ; j < i; j++ )
      {
        sum -= out[0].ve[ j ] * mat[0].me[ j + ( mat->dim * i ) ];
        //j++;
      }
      if ( ( ( ( ( diag <> 0.000000000000 ) & 69 ) >> 6 ) & 1 ) == 1 )
      {
        if ( !0 )
        {
          break;
        }
        else
          out[0].ve[ i ] = sum / mat[0].me[ ( i * ( ( mat->dim * 8 ) + 8 ) ) >> 3 ];
      }
      else
        out[0].ve[ i ] = sum / diag;
      //i++;
    }
    break;
  }
  i_lim = i;
}
Matrix new_matrix( int n )
{
  Matrix mat = GC_malloc( 8 );
  mat->dim = n;
  mat->me = GC_malloc_atomic( ( n * n ) << 3 );
  return mat;
}
Vector new_vector( int n )
{
  Vector vec = GC_malloc( 8 );
  vec->dim = n;
  vec->ve = GC_malloc_atomic( n << 3 );
  return vec;
}
