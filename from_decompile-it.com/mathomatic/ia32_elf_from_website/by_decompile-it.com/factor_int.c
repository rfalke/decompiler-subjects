#include "factor_int.c.h"
static double nn;
static double vv;
static double skip_multiples[48] = { 10.000000000000, 2.000000000000, 4.000000000000, 2.000000000000, 4.000000000000, 6.000000000000, 2.000000000000, 6.000000000000, 4.000000000000, 2.000000000000, 4.000000000000, 6.000000000000, 6.000000000000, 2.000000000000, 6.000000000000, 4.000000000000, 2.000000000000, 6.000000000000, 4.000000000000, 6.000000000000, 8.000000000000, 4.000000000000, 2.000000000000, 4.000000000000, 2.000000000000, 4.000000000000, 8.000000000000, 6.000000000000, 4.000000000000, 6.000000000000, 2.000000000000, 4.000000000000, 6.000000000000, 2.000000000000, 6.000000000000, 6.000000000000, 4.000000000000, 2.000000000000, 4.000000000000, 6.000000000000, 2.000000000000, 6.000000000000, 4.000000000000, 2.000000000000, 4.000000000000, 2.000000000000, 10.000000000000, 2.000000000000 };
int factor_one( double value )
{
  double fp6;
  double fp7;
  int i;
  double d;
  uno = 0;
  nn = value;
  if ( value || value )
  {
    if ( 1000000000000000.000000000000 < abs( value ) )
    {
      do
      {
        value = rem(value,1.000000000000);
      }
      while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(value,value) ),1.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
      if ( value == ( rem(value,1.000000000000) ) )
      {
        if ( fp6 != fp6 )
        {
        }
        else
        {
          if ( fmod( value, 1.000000000000 ) || value != 0.000000000000 )
          {
            return 0;
          }
          vv = sqrt( abs( nn ) ) + 1.000000000000;
          try_factor( 2.000000000000 );
          try_factor( 3.000000000000 );
          try_factor( 5.000000000000 );
          try_factor( 7.000000000000 );
          d = 1.000000000000;
          do
          {
            if ( vv <= d )
              i = 0;
              d += skip_multiples[0];
              try_factor( d + skip_multiples[0] );
              i++;
            else
            {
              if ( nn != 1.000000000000 || nn != 1.000000000000 )
              {
                try_factor( nn );
              }
              else
              {
              }
              if ( value != multiply_out_unique( ) || value != multiply_out_unique( ) )
              {
                error_bug( "Internal error factoring integers." );
                break;
              }
              break;
            }
          }
          while ( i + 1 != 48 );
          d += skip_multiples[0];
          try_factor( d + skip_multiples[0] );
          i++;
          if ( i + 1 != 48 )
          {
            d += skip_multiples[0];
            try_factor( d + skip_multiples[0] );
            i++;
          }
          else
          {
            do
            {
            }
            while ( i + 1 != 48 );
            d += skip_multiples[0];
            try_factor( d + skip_multiples[0] );
            i++;
          }
        }
      }
      else
      {
      }
      fmod( value, 1.000000000000 );
    }
  }
  else
  {
  }
}
void try_factor( double arg )
{
  double fp3;
  double fp4;
  double fp5;
  do
  {
    do
    {
      nn = rem(nn,arg);
    }
    while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(nn,arg) ),arg) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
    if ( nn == ( rem(nn,arg) ) )
    {
      if ( fp5 == 0.000000000000 && fp4 == 0.000000000000 )
      {
        if ( uno > 0 && unique[0] == arg )
          ucnt[ uno + -1 ]++;
        else
        {
          unique[0] = arg;
          ucnt[ uno ] = 1;
          uno++;
        }
        nn /= arg;
        vv = sqrt( abs( nn / arg ) ) + 1.000000000000;
        if ( nn / arg < 1.000000000000 )
        {
        }
        else
        {
        }
      }
    }
    else
    {
    }
    fmod( 0.000000000000, arg );
  }
  while ( -1.000000000000 < nn / arg );
  return;
}
double multiply_out_unique( void )
{
  double fp6;
  double fp7;
  int i, j;
  double d;
  if ( uno > 0 )
  {
    i = 0;
    do
    {
      if ( ucnt[0] > 0 )
      {
        j = 0;
        do
        {
          j++;
        }
        while ( j != edx );
      }
      i++;
    }
    while ( uno != i + 1 );
  }
  else
  {
  }
  return 0;
}
void display_unique( void )
{
  int i;
  double value;
  __fprintf_chk( gfp, 1, "%.0f = ", multiply_out_unique( ) );
  i = 0;
  while ( i < uno )
  {
    __fprintf_chk( gfp, 1, "%.0f", unique[0] );
    if ( ucnt[0] > 1 )
      __fprintf_chk( gfp, 1, "^%d", ucnt[0] );
    i++;
    if ( i + 1 < uno )
    {
      __fprintf_chk( gfp, 1, " * " );
    }
  }
  __fprintf_chk( gfp, 1, "\n" );
  return;
}
int is_prime( void )
{
  int eax;
  double fp7;
  double value;
  return 2.000000000000 <= multiply_out_unique( ) && uno == 1 ? ucnt[0] == 1 : 0;
}
int factor_int( token_type *equation, int *np )
{
  int edx;
  int i, j;
  int xsize;
  int level;
  int modified = 0;
  i = 0;
  if ( np[0] > 0 )
  {
    do
    {
      if ( !equation[ i ].kind && factor_one( *(double*)(equation[ i ].kind + 8) ) && uno > 0 )
      {
        if ( uno == 1 )
        {
          if ( ucnt[0] > 1 )
            level = equation[ i + 0 ].level;
        }
        else
        {
          level = equation[ i + 0 ].level;
          if ( uno > 1 )
            level += ( np[0] < 2 ) ^ 1;
        }
        xsize = -2;
        j = 0;
        do
        {
          xsize = (unsigned char)( ( ucnt[ j ] < 2 ) ^ 1 ) ? xsize + 2 : xsize + 4;
          j++;
        }
        while ( uno != j + 1 );
        if ( xsize + np[0] <= n_tokens )
          goto B17;
        else
        {
          error_huge( );
          if ( uno <= 0 )
            modified = 1;
        }
B17:;
        j = 0;
        do
        {
          modified = j;
          xsize = j == 0 ? ( ( ucnt[ j ] > 1 ) + 1 ) * 2 : ( ( ( ucnt[ j ] > 1 ) + 1 ) * 2 ) + -2;
          if ( ( j == 0 ? ( ( ucnt[ j ] > 1 ) + 1 ) * 2 : ( ( ( ucnt[ j ] > 1 ) + 1 ) * 2 ) + -2 ) > 0 )
          {
            memmove( &equation[ xsize + i ].kind, &equation[ i ].kind, ( np[0] - i ) << 4 );
            np[0] += xsize;
            if ( j > 0 )
            {
              equation[ i + 1 ].kind = OPERATOR;
              equation[ i + 1 ].level = level;
              i += 2;
            }
          }
          equation[ i ].kind = CONSTANT;
          equation[ i ].level = level;
          equation[ i ].token.constant = unique[ modified ];
          if ( ucnt[ modified ] > 1 )
          {
            equation[ i + 0 ].level = level + 1;
            equation[ i + 1 ].kind = OPERATOR;
            equation[ i + 1 ].level = level + 1;
            i += 2;
            equation[ i + 2 ].level = level + 1;
            equation[ i + 2 ].kind = CONSTANT;
            equation[ i + 2 ].token.constant = (double)( ucnt[ modified ] );
          }
          j++;
        }
        while ( j + 1 < uno );
        i = i;
        modified = 1;
      }
      i += 2;
    }
    while ( i + 2 < np[0] );
  }
  return modified;
}
void factor_int_sub( int n )
{
  if ( n_lhs[ n ] > 0 )
  {
    factor_int( lhs[ n ], &n_lhs[ n ] );
    factor_int( rhs[ n ], &n_rhs[ n ] );
  }
  return;
}
int list_factor( token_type *equation, int *np, int factor_flag )
{
  int ebx;
  int esi;
  if ( factor_flag || factor_int_flag )
    factor_int( equation, np );
  return list_proc( equation, np[0], 0 );
}
int factor_constants( token_type *equation, int *np, int level_code )
{
  int eax;
  int edx;
  if ( level_code != 3 )
  {
    return equation;
    fc_recurse( equation, np, 0, 1, level_code );
  }
}
int fc_recurse( token_type *equation, int *np, int loc, int level, int level_code )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  double fp7;
  int ebp_40;
  int i = loc, j, k;
  int op;
  double d, minimum, cogcd;
  int improve_readability, gcd_flag, first, neg_flag, modified;
  int op_count, const_count;
  return 0;
}
#if 0
#endif
