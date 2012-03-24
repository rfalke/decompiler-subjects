#include "gcd.c.h"
double gcd( double d1, double d2 )
{
  double fp5;
  double fp6;
  double fp7;
  int count;
  double larger;
  static token_type divisor[30000];
  double remainder1, lower_limit;
  divisor[0].kind = d1;
  lower_limit = d2;
  if ( __finite( d1 ) && __finite( lower_limit ) )
  {
    if ( abs( divisor[0].kind ) == 0.000000000000 )
    {
      if ( abs( divisor[0].kind ) )
        larger = 0.000000000000;
      else
      {
        larger = 0.000000000000;
      }
    }
    else
      larger = 0.000000000000;
    if ( larger == 0.000000000000 )
    {
    }
    else
    {
      divisor[0].kind = 0.000000000000 < larger ? 0.000000000000 : larger;
      lower_limit = epsilon * ( 0.000000000000 <= larger ? 0.000000000000 : larger );
      if ( 0.000000000000 < larger ? 0.000000000000 : larger < epsilon * ( 0.000000000000 <= larger ? 0.000000000000 : larger ) )
      {
        if ( 1000000000000000.000000000000 < 0.000000000000 <= larger ? 0.000000000000 : larger )
        {
          count = 1;
          while ( 1 )
          {
            larger = divisor[0].kind;
            do
            {
              larger = rem(larger,divisor[0].kind);
            }
            while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(larger,divisor[0].kind) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
            if ( larger == larger )
            {
              if ( lower_limit <= abs( larger == larger ? fmod( 0.000000000000 <= larger ? 0.000000000000 : larger, divisor[0].kind ) : larger ) )
              {
              }
              else
              if ( abs( divisor[0].kind - abs( larger == larger ? fmod( divisor[0].kind, divisor[0].kind ) : larger ) ) < lower_limit )
              {
                count++;
                if ( count + 1 == 50 )
                {
                  break;
                }
                else
                {
                  fp7 = divisor[0].kind;
                }
              }
              if ( 0.000000000000 )
              {
                if ( divisor[0].kind < lower_limit * 100.000000000000 )
                {
                }
              }
              else
              {
              }
              break;
            }
            else
            {
            }
            fmod( 0.000000000000 <= larger ? 0.000000000000 : larger, divisor[0].kind );
          }
        }
        else
        {
        }
      }
      else
      {
      }
    }
  }
  else
  {
  }
  return 0;
}
double gcd_verified( double d1, double d2 )
{
  double fp5;
  double fp6;
  double fp7;
  double divisor, d3 = d1, d4 = d2;
  divisor = gcd( d1, d2 );
  if ( divisor || divisor )
  {
    d3 /= divisor;
    do
    {
      if ( !fmod( d3, 1.000000000000 ) )
      {
        d4 /= divisor;
        do
        {
          d4 = rem(d4,1.000000000000);
        }
        while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(d4,fmod( d3, 1.000000000000 )) ),1.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
        if ( d4 == ( rem(d4,1.000000000000) ) )
        {
          if ( fp6 != fp6 )
          {
          }
          else
          {
            if ( !fmod( d4, 1.000000000000 ) )
            {
              if ( gcd( d3, d4 ) == 1.000000000000 && gcd( d3, d4 ) == 1.000000000000 )
                break;
              divisor = 0.000000000000;
              break;
            }
          }
        }
        else
        {
        }
        fmod( d4, 1.000000000000 );
      }
      divisor = 0.000000000000;
      break;
    }
    while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(1.000000000000,divisor) ),divisor) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
    if ( ( rem(1.000000000000,divisor) ) == ( rem(1.000000000000,divisor) ) )
    {
      if ( fp6 != fp6 )
      {
      }
      else
      {
      }
    }
    else
    {
    }
    fmod( d3, 1.000000000000 );
  }
  else
  {
  }
  return 0;
}
double my_round( double d1 )
{
  double fp7;
  return 0;
}
int f_to_fraction( double d, double *numeratorp, double *denominatorp )
{
  double fp6;
  double fp7;
  double divisor;
  double numerator, denominator;
  /* phantom */ double k3, k4;
  numeratorp[0] = d;
  denominatorp[0] = 1.000000000000;
  if ( __finite( d ) )
  {
    do
    {
      if ( fmod( d, 1.000000000000 ) == 0.000000000000 && fmod( d, 1.000000000000 ) == 0.000000000000 )
        break;
      divisor = small_epsilon;
      if ( my_round( d ) || my_round( d ) )
      {
        if ( divisor * abs( d ) <= abs( my_round( d ) - d ) )
        {
          numeratorp[0] = my_round( d );
          break;
        }
      }
      else
      {
      }
      divisor = gcd( 1.000000000000, d );
      if ( epsilon < divisor )
      {
        numerator = my_round( d / divisor );
        divisor = my_round( 1.000000000000 / divisor );
        if ( 1000000000000.000000000000 < abs( numerator ) )
        {
          if ( 1000000000000.000000000000 < divisor )
          {
            if ( 2.000000000000 <= divisor )
            {
              if ( 1.000000000000 < gcd( numerator, divisor ) )
              {
                numerator /= gcd( numerator, divisor );
                divisor /= gcd( numerator, divisor );
              }
              else
              {
              }
              if ( abs( ( numerator / divisor ) - d ) <= small_epsilon * abs( numerator / divisor ) )
              {
                numeratorp[0] = numerator;
                denominatorp[0] = divisor;
                break;
              }
            }
            else
            {
            }
          }
          else
          {
          }
        }
        else
        {
        }
      }
      else
      {
      }
    }
    while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(d,fp7) ),fp7) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
    if ( d == ( rem(d,1.000000000000) ) )
    {
      if ( fp6 != fp6 )
      {
      }
      else
      {
      }
    }
    else
    {
    }
    fmod( d, 1.000000000000 );
  }
  return 0;
(denominatorp[0] & 0xFFFFFFFF) = denominatorp; // XXX
}
int make_fractions( token_type *equation, int *np )
{
  int eax;
  int edx;
  double fp7;
  int i = 0, j, k;
  int level;
  double numerator, denominator;
  int inc_level, modified = 0;
  if ( np[0] > 0 )
  {
    do
    {
      if ( equation == 0 && ( i <= 0 || equation->level != equation || equation != 4 ) && f_to_fraction( *(double*)(equation + ( i << 4 ) + 8), &numerator, &denominator ) )
      {
        if ( denominator == 1.000000000000 )
          equation->token.constant/*union*/ = numerator;
        else
        {
          if ( n_tokens < np[0] + 2 )
            error_huge( );
          inc_level = np[0] > 1;
          modified = i + 1;
          if ( i + 1 < np[0] && equation->level == equation[1].level )
          {
            if ( (equation[1].token.variable) == 3 )
            {
              modified = i + 3;
              if ( i + 3 < np[0] )
              {
                inc_level = equation + ( ( i + 3 ) << 4 );
                if ( equation->level <= equation[3].level )
                {
                  j = modified;
                  level = equation->level;
                  do
                  {
                    if ( equation[3].level != level || i != 4 )
                    {
                      j += 2;
                      if ( np[0] <= j + 2 )
                      {
                        modified = j;
                        i = i;
                        equation = equation;
                      }
                      else
                    }
                    else
                    {
                      modified = j;
                      i = i;
                      equation = equation;
                    }
                  }
                  while ( equation[7].level < level );
                  modified = j;
                  i = i;
                  equation = equation;
                }
              }
              if ( numerator == 1.000000000000 )
              {
                memmove( equation + ( i << 4 ), equation + ( i << 4 ) + 32, ( ( modified - i ) + -2 ) << 4 );
                modified += -2;
              }
              else
              {
                equation->token.constant/*union*/ = numerator;
                memmove( equation + ( modified << 4 ) + 32, equation + ( modified << 4 ), ( np[0] - modified ) << 4 );
                np[0] += 2;
              }
              equation->level = equation[1].level;
              equation = 2;
              equation[1].level = equation[1].level;
              equation[1].kind = CONSTANT;
              equation[1].token.constant/*union*/ = denominator;
              if ( numerator == 1.000000000000 && numerator == 1.000000000000 )
              {
                i += -2;
                modified = 1;
              }
              else
                modified = 1;
            }
            else
              inc_level = (equation[1].token.variable) != 4 ? 0 : inc_level;
          }
          memmove( equation + ( i << 4 ) + 48, equation + ( i << 4 ) + 16, ( np[0] + ~i ) << 4 );
          np[0] += 2;
          equation->token.constant/*union*/ = numerator;
          equation->level = equation->level;
          equation = 2;
          j = modified + 1;
          equation[1].level = equation->level;
          equation = 0;
          equation[1].token.constant/*union*/ = denominator;
          if ( inc_level == 0 || j < i )
            continue;
          else
          {
            k = i;
            do
            {
              equation->level++;
              k++;
            }
            while ( k + 1 <= j );
          }
        }
      }
      i += 2;
    }
    while ( i + 2 < np[0] );
  }
  return modified;
}
#if 0
#endif
