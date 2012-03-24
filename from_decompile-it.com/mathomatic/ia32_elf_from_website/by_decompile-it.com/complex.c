#include "complex.c.h"
void rect_to_polar( double x, double y, double *radiusp, double *thetap )
{
  radiusp[0] = sqrt( ( x * x ) + ( y * y ) );
  thetap[0] = atan2( y, x );
  return;
}
int roots_cmd( char *cp )
{
  int eax;
  double fp0;
  double fp6;
  double fp7;
  /* phantom */ complexs c;
  complexs c2;
  complexs check;
  double d;
  double k, root, radius, theta, radius_root = 0.000000000000;
  char buf[4096];
  do
  {
    if ( cp[0] == 0 )
    {
      my_strlcpy( prompt_str, "Enter root (positive integer): ", 80 );
      cp = get_string( buf, 4096 );
      if ( cp == 0 )
      {
        if ( 0 ^ 0 )
          break;
        break;
      }
    }
    root = strtod( cp, &cp );
    if ( cp[0] )
    {
    }
    else
    if ( root < 0.000000000000 )
    {
    }
    else
    if ( root <= 10000.000000000000 )
    {
      do
      {
        root = rem(root,1.000000000000);
      }
      while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(root,root) ),1.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
      if ( root == ( rem(root,1.000000000000) ) )
      {
        if ( fp6 != fp6 )
        {
        }
        else
        {
          if ( fmod( root, 1.000000000000 ) == 0.000000000000 && fmod( root, 1.000000000000 ) == 0.000000000000 )
          {
            cp = skip_space( cp );
            if ( cp[0] == 0 )
            {
              my_strlcpy( prompt_str, "Enter real part (X): ", 80 );
              cp = get_string( buf, 4096 );
              if ( cp == 0 )
                continue;
            }
            d = strtod( cp, &cp );
            k/*.1_1of8*/ = cp[0];
            if ( cp[0] )
            {
            }
            cp = skip_space( cp );
            if ( cp[0] == 0 )
            {
              my_strlcpy( prompt_str, "Enter imaginary part (Y): ", 80 );
              cp = get_string( buf, 4096 );
              if ( cp == 0 )
                continue;
            }
            k = strtod( cp, &cp );
            if ( cp[0] )
            {
              error( "Number expected." );
            }
            else
            {
              if ( d == 0.000000000000 )
              {
                if ( !0 )
                {
                  if ( k == 0 )
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
              *(int*)(__errno_location( )) = 0;
              rect_to_polar( d, k, &radius, &theta );
              if ( root || root )
              {
                pow( (int)( &(void*)radius & 0xFFFFFFFF ), 1.000000000000 / root );
                radius_root = 0.000000000000;
                check_err( );
                __fprintf_chk( gfp, 1, "\nThe polar coordinates are:\n%.*g amplitude and %.*g radians (%.*g degrees).\n\n", precision, radius, precision, theta, precision, ( theta * 180.000000000000 ) / 3.141592653590 );
              }
              else
              {
                check_err( );
                __fprintf_chk( gfp, 1, "\nThe polar coordinates are:\n%.*g amplitude and %.*g radians (%.*g degrees).\n\n", precision, radius, precision, theta, precision, ( theta * 180.000000000000 ) / 3.141592653590 );
                if ( root == 0.000000000000 && root == 0.000000000000 )
                  continue;
              }
              if ( k == 0 )
                __fprintf_chk( gfp, 1, "The %.12g roots of (%.12g)^(1/%.12g) are:\n\n", root, d, root );
              else
                __fprintf_chk( gfp, 1, "The %.12g roots of (%.12g%+.12g*i)^(1/%.12g) are:\n\n", root, d, k, root );
              if ( 0.000000000000 < root )
              {
                k = 0.000000000000;
                do
                {
                  d = ( theta + ( k * 0.000000000000 * 3.141592653590 ) ) / root;
                  c2.re = radius_root * cos( ( theta + ( k * 0.000000000000 * 3.141592653590 ) ) / root );
                  c2.im = radius_root * sin( d );
                  complex_fixup( &c2 );
                  if ( c2.re )
                  {
                  }
                  else
                  if ( !0 )
                  {
                    if ( !1 )
                    {
                      if ( c2.im || c2.im )
                        __fprintf_chk( gfp, 1, "%+.12g*i", c2.im );
                      else
                      {
                      }
                      __fprintf_chk( gfp, 1, "\n" );
                      check.re = c2.re;
                      if ( 1.000000000000 < root )
                      {
                        d = 1.000000000000;
                        do
                        {
                          ebx = complex_mult( check.re, c2.re );
                        }
                        while ( root <= d + 1.000000000000 );
                      }
                      else
                      {
                      }
                      complex_fixup( &check );
                      __printf_chk( 1, "Inverse check:" );
                      if ( check.re )
                      {
                      }
                      else
                      if ( !0 )
                      {
                        if ( !1 )
                        {
                          if ( check.im || check.im )
                            __printf_chk( 1, " %+.10g*i", check.im );
                          else
                          {
                          }
                          __printf_chk( 1, "\n\n" );
                          k += 1.000000000000;
                        }
                        else
                        if ( 0 )
                        {
                        }
                      }
                      else
                      {
                      }
                      __printf_chk( 1, " %.10g", 0.000000000000 );
                    }
                    else
                    if ( 0 )
                    {
                    }
                  }
                  else
                  {
                  }
                  __fprintf_chk( gfp, 1, "%.12g ", 0.000000000000 );
                }
                while ( root <= k + 1.000000000000 );
              }
              else
              {
              }
            }
          }
        }
      }
      else
      {
      }
      fmod( root, 1.000000000000 );
    }
    __printf_chk( 1, "Root must be a positive integer less than or equal to %.0f.\n", 10000.000000000000 );
  }
  while ( repeat_flag );
}
int complex_root_simp( token_type *equation, int *np )
{
  int eax;
  int edx;
  double fp7;
  int ebp_76;
  int i, j;
  int level;
  int len;
  complexs c;
  complexs p;
  complexs r;
  int modified = 0;
  while ( np[0] > 1 )
  {
    ebp_76 = 1;
    do
    {
      if ( *(int*)(equation[2].kind + -8) == 6 )
      {
        level = *(int*)(equation[2].kind + -12);
        j = ebp_76 + 2;
        if ( ebp_76 + 2 < np[0] && level <= equation[3].level )
        {
          do
          {
            j += 2;
          }
          while ( j + 2 < np[0] && level <= equation[7].level );
        }
        len = j + ~ebp_76;
        if ( parse_complex( equation[2].kind + 32, len, &p ) )
        {
          j = ebp_76 + -1;
          if ( ebp_76 + -1 >= 0 && level <= *(int*)(equation[2].kind + -28) )
          {
            do
            {
              j += -1;
            }
            while ( j + -1 >= 0 && level <= *(int*)(equation[2].kind + -44 + -16) );
          }
          j++;
          if ( parse_complex( &equation[ j + 1 ], ebp_76 - ( j + 1 ), &c ) )
          {
            if ( c.im )
            {
            }
            else
            if ( !0 )
            {
              if ( p.im == 0.000000000000 )
              {
                if ( p.im != fp7 )
                {
                }
              }
            }
            else
            {
            }
            i = ebp_76 + len + 1;
            r = complex_pow( c.re, p.re );
            ebp_76 = j - i;
            if ( n_tokens < ebp_76 + np[0] + 5 )
              error_huge( );
            memmove( &equation[ j + 1 + 5 ].kind, &equation[ i ].kind, ( np[0] - i ) << 4 );
            np[0] = ebp_76 + np[0] + 5;
            equation[ j + 1 + 0 ].level = level;
            equation[ j + 1 ].kind = CONSTANT;
            equation[ j + 1 + 0 ].token.constant/*union*/ = r.re;
            equation[ j + 1 ].level = level;
            equation[ j + 1 ].kind = OPERATOR;
            level++;
            equation[ j + 2 ].level = level + 1;
            equation[ j + 2 ].kind = CONSTANT;
            equation[ j + 2 ].token.constant = r.im;
            equation[ j + 3 ].level = level + 1;
            equation[ j + 3 ].kind = OPERATOR;
            equation[ j + 4 ].level = level + 1;
            equation[ j + 4 ].kind = VARIABLE;
            modified = 1;
            break;
            while ( np[0] > 1 )
            {
              ebp_76 = 1;
              do
              {
              }
              while ( ebp_76 < np[0] );
              break;
            }
            break;
          }
        }
      }
      ebp_76 += 2;
    }
    while ( ebp_76 < np[0] );
    break;
  }
  if ( modified )
  {
    warning( "Complex number roots approximated." );
  }
  return modified;
}
void approximate_complex_roots( token_type *equation, int *np )
{
  do
  {
    elim_loop( equation, np );
  }
  while ( complex_root_simp( equation, np ) == 0 );
  return;
}
int get_constant( token_type *p1, int n, double *dp )
{
  int eax;
  int ecx;
  int i, j;
  int level;
  double d1, d2;
  int prev_approx_flag;
  if ( n <= 0 || ( n & 1 ) == 0 )
    error_bug( "Call to get_constant() has invalid expression length." );
  if ( n == 1 )
  {
    if ( p1->kind == 0 )
    {
      dp[0] = p1->token.constant/*union*/;
      return 1;
    }
    if ( p1->kind == 1 )
    {
      return 1;
    }
  }
  else
  if ( n > 2 && get_constant( p1, 1, &d1 ) )
  {
    if ( n <= 1 )
    {
    }
    else
    if ( p1[1].kind != 2 || level < p1[1].level )
    {
      return 1;
    }
    prev_approx_flag = 1;
    i = 1;
    while ( j = i + 2, n <= i + 2 || p1[ j ].level <= p1[ j + 0 ].level )
    {
      if ( get_constant( &p1[ prev_approx_flag + 1 ], j + ~i, &d2 ) == 0 )
      {
        break;
      }
      prev_approx_flag = approximate_roots;
      approximate_roots = 1;
      if ( calc( 0, &d1, (int)( (int)(p1[ j + 0 ].token.variable) ), d2 ) == 0 )
      {
        approximate_roots = prev_approx_flag;
        break;
      }
      approximate_roots = prev_approx_flag;
      if ( (p1[ j + 0 ].token.variable) == 6 && domain_check == 0 )
      {
        break;
      }
      domain_check = 0;
      if ( n <= j )
      {
        dp[0] = d1;
        break;
      }
      prev_approx_flag = j;
      if ( p1[ j ].kind == 2 && *(int*)(p1[ j ].kind + 4) <= edi )
      {
        i = j;
      }
    }
    do
    {
      j += 2;
    }
    while ( j + 2 < n && p1[ j + 0 ].level < p1[6].level );
    dp[0] = d1;
    return 1;
  }
}
int parse_complex( token_type *p1, int n, complexs *cp )
{
  int edx;
  int ebp_56;
  int ebp_52;
  int ebp_44;
  int j;
  int imag_cnt, plus_cnt, times_cnt;
  complexs c;
  int level, level2;
  if ( get_constant( p1, n, &c.re ) )
  {
    c.im = 0.000000000000;
    cp = &c;
    cp->re = c.re;
  }
  level = min_level( p1, n );
  c.re = 0.000000000000;
  c.im = 1.000000000000;
  j = n + -1;
  if ( n + -1 >= 0 )
  {
    ebp_52 = p1 + ( n << 4 );
    ebp_44 = p1 + ( n << 4 ) + -32;
    ebp_56 = 0;
    times_cnt = 0;
    plus_cnt = 0;
    imag_cnt = 0;
    do
    {
      switch ( p1 )
      {
      case 2:
        level2 = p1;
        switch ( p1 )
        {
        case 4:
          times_cnt++;
          if ( times_cnt > 1 || level2 != *(int*)(ebp_44 + 4) || *(int*)(ebp_44 + 4) != *(int*)(ebp_52 + 4) || *ebp_44 != 1 || *(int*)(ebp_44 + 8) != 3 || get_constant( ebp_52, 1, &c.im ) == 0 )
          {
            break;
          }
          c.im = 1.000000000000 / c.im;
          break;
        case 3:
          times_cnt++;
          if ( times_cnt <= 1 && level2 == *(int*)(ebp_44 + 4) && *(int*)(ebp_44 + 4) == *(int*)(ebp_52 + 4) )
          {
            if ( *ebp_44 == 1 && *(int*)(ebp_44 + 8) == 3 )
            {
              if ( get_constant( ebp_52, 1, &c.im ) == 0 )
              {
                break;
              }
            }
            else
            if ( *ebp_52 != 1 || *(int*)(ebp_52 + 8) != 3 || get_constant( ebp_44, 1, &c.im ) == 0 )
            {
              break;
            }
          }
          break;
        case 2:
          if ( imag_cnt )
          {
            c.im = -( c.im );
            plus_cnt++;
            if ( plus_cnt <= 1 && level2 == level )
            {
              if ( get_constant( p1, j, &c.re ) == 0 )
              {
                if ( get_constant( ebp_52, ebp_56, &c.re ) == 0 )
                {
                  break;
                }
                if ( p1 == 2 )
                  c.re = -( c.re );
              }
              else
              break;
            }
          }
          else
        case 1:
          plus_cnt++;
          break;
        }
        ebp_56++;
        ebp_52 += -16;
        ebp_44 += -16;
        j += -1;
        break;
      case 1:
        if ( var_is_const( p1, 0 ) == 0 )
        {
          if ( p1 == 3 )
            imag_cnt++;
        }
        break;
      }
    }
    while ( j + -1 < 0 );
    if ( imag_cnt == 1 )
    {
      cp = &c;
      cp->re = c.re;
    }
  }
  return 0;
(cp->im << 32) = (c.im << 32); // XXX
}
#if 0
#endif
