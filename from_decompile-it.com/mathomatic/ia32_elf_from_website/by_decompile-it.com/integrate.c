#include "integrate.c.h"
static int constant_var_number = 1;
void make_powers( token_type *equation, int *np, long v )
{
  int eax;
  int ecx;
  int i = 0;
  int level;
  while ( i < np[0] )
  {
    level = equation[ i ].level;
    if ( equation[ i ].kind == 2 && (equation[ i + 0 ].token.variable) == 6 )
    {
      i = 0 + 2;
      if ( 0 + 2 < edx && level <= equation[ i ].level )
      {
        do
        {
          i += 2;
        }
        while ( i + 2 < edx && level <= equation[6].level );
      }
    }
    else
    {
      if ( equation[ i ].kind == 1 && equation[ i + 0 ].token.constant == v && ( edx <= i + 1 || equation[ i + 1 ].token.constant != 6 ) )
      {
        if ( n_tokens < edx + 2 )
          error_huge( );
        level++;
        equation[ i + 0 ].level = level + 1;
        memmove( &equation[ i + 1 + 2 ].kind, &equation[ i + 1 ].kind, ( np[0] - ( i + 1 ) ) << 4 );
        np[0] += 2;
        equation[ i + 1 + 0 ].level = level;
        equation[ i + 1 ].kind = OPERATOR;
        i = i + 1 + 1;
        equation[ i + 1 + 1 ].level = level;
        equation[ i + 1 + 1 ].kind = CONSTANT;
        equation[ i + 1 + 1 ].token.constant = 1.000000000000;
      }
      i++;
    }
  }
  return;
}
int int_dispatch( token_type *equation, int *np, long v, int (*func)( void ) )
{
  int edx;
  int i, j;
  make_powers( equation, np, v );
  j = 0;
  i = 1;
  if ( np[0] <= 1 )
    goto B3;
  else
  {
    do
    {
      if ( equation->level == 1 && (unsigned int)(equation->token.variable) + -1 <= 1 )
      {
        if ( func( ) )
        {
          i = j + 1;
          if ( j + 1 < np[0] )
          {
            if ( equation->level == 1 )
              goto B18;
            else
            {
              do
              {
                i += 2;
                if ( i + 2 < np[0] )
                  continue;
              }
              while ( equation[5].level != 1 );
            }
B18:;
            j = i + 1;
          }
          break;
        }
        else
        {
          break;
        }
      }
      i += 2;
    }
    while ( i + 2 < np[0] );
  }
B3:;
  func( );
  return 1;
}
int integrate_sub( token_type *equation, int *np, int loc, int eloc, long v )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  int i, j, k;
  int len = equation[ loc ].kind;
  int level, vlevel, mlevel;
  int count;
  int div_flag;
  if ( loc < eloc )
  {
    mlevel = loc + 1;
    count = 0;
    do
    {
      if ( len == 1 && v == len )
      {
        count++;
        if ( count <= 1 )
        {
          vlevel = len;
          if ( len == min_level( &len, eloc - loc ) || len == min_level( &len, eloc - loc ) + 1 )
          {
            if ( mlevel < eloc )
            {
              k = loc + 1;
              level = min_level( &len, eloc - loc );
              do
              {
                if ( equation[ loc + 1 ].level == level && ( (int)(equation[ loc + 1 ].token.variable) < 3 || ( (int)(equation[ loc + 1 ].token.variable) > 4 && ( (equation[ loc + 1 ].token.variable) != 6 || k != loc + 1 + 2 ) ) ) )
                {
                  return 0;
                }
                k += 2;
              }
              while ( k + 2 < eloc );
            }
            if ( vlevel != min_level( &len, eloc - loc ) + 1 || ( loc + 1 < eloc && min_level( &len, eloc - loc ) + 1 == *(int*)(equation[ loc + 1 ].token.constant + -4) && (equation[ loc + 1 ].token.variable) == 6 ) )
              goto B6;
          }
        }
      }
B6:;
      len += 32;
    }
    while ( loc + 1 + 2 + 1 < eloc );
    mlevel = min_level( &len, eloc - loc ) + 1;
    j = loc;
    do
    {
      len += 2;
      j++;
    }
    while ( j + 1 < eloc );
    i = loc;
    do
    {
      if ( len == 1 && v == len )
      {
        div_flag = 0;
        i++;
        if ( i + 1 < eloc && equation[ i ].token.constant == 6 )
        {
          if ( div_flag )
          {
            len = equation[ i + 1 ].kind;
            if ( equation[ i + 1 ].level == equation[ i + 0 ].level && equation[ i + 1 ].kind == 0 && equation[ i + 1 + 0 ].token.constant/*union*/ == 1.000000000000 && *(double*)(equation[ i ].kind + 8) == 1.000000000000 )
            {
              return 0;
            }
            if ( n_tokens < np[0] + 2 )
              error_huge( );
            if ( i + 1 + 1 < eloc && equation[ i + 0 ].level <= len )
            {
              j = i + 1 + 1;
              do
              {
                equation[ i + 1 + 0 ].level++;
                j++;
              }
              while ( j + 1 < eloc && equation[ i + 0 ].level <= equation[ i + 3 + 1 + 0 ].level );
            }
            memmove( &equation[ i + 1 + 2 ].kind, &len, ( np[0] - ( i + 1 + 1 ) ) << 4 );
            np[0] += 2;
            eloc += 2;
            len = equation[ i + 0 ].level + 1;
            len = 0;
            len = -1.000000000000;
            equation[ i + 1 + 1 ].level = equation[ i + 0 ].level + 1;
            equation[ i + 1 + 1 ].kind = OPERATOR;
          }
          if ( eloc <= i + 1 + 1 || equation[ i + 1 + 1 ].level < equation[ i + 0 ].level )
            j = i + 1 + 1;
          else
          {
            j = i + 1 + 1;
            level = equation[ i + 0 ].level;
            do
            {
              equation[ i + 3 + 0 ].level++;
              j++;
            }
            while ( j + 1 < eloc && level <= equation[ i + 3 + 1 + 0 ].level );
          }
          len = j - ( i + 1 + 1 );
          if ( np[0] + len + 5 <= n_tokens )
          {
            memmove( &equation[ j + 2 ].kind, &equation[ j ].kind, ( np[0] - j ) << 4 );
            np[0] += 2;
            len += 2;
            equation[ j + 0 ].level = equation[ i + 0 ].level + 1;
            equation[ j ].kind = OPERATOR;
            equation[ j + 1 ].level = equation[ i + 0 ].level + 1;
            equation[ j + 1 ].kind = CONSTANT;
            equation[ j + 1 ].token.constant = 1.000000000000;
            memmove( &equation[ len + eloc + 3 ].kind, &equation[ eloc + 2 ].kind, ( np[0] - ( eloc + 2 ) ) << 4 );
            np[0] = np[0] + len + 1;
            equation[ eloc + 2 + 0 ].level = mlevel;
            equation[ eloc + 2 ].kind = OPERATOR;
            eloc <<= 4;
            memmove( &equation[ eloc + 3 ].kind, &equation[ i + 1 + 1 ].kind, len << 4 );
            break;
          }
          error_huge( );
          memmove( &equation[ j + 2 ].kind, &equation[ j ].kind, ( np[0] - j ) << 4 );
          np[0] += 2;
          len += 2;
          equation[ j + 0 ].level = equation[ i + 0 ].level + 1;
          equation[ j ].kind = OPERATOR;
          equation[ j + 1 ].level = equation[ i + 0 ].level + 1;
          equation[ j + 1 ].kind = CONSTANT;
          equation[ j + 1 ].token.constant = 1.000000000000;
          memmove( &equation[ len + eloc + 3 ].kind, &equation[ eloc + 2 ].kind, ( np[0] - ( eloc + 2 ) ) << 4 );
          np[0] = np[0] + len + 1;
          equation[ eloc + 2 + 0 ].level = mlevel;
          equation[ eloc + 2 ].kind = OPERATOR;
          eloc <<= 4;
          memmove( &equation[ eloc + 3 ].kind, &equation[ i + 1 + 1 ].kind, len << 4 );
          break;
        }
      }
      else
      {
        i += 2;
      }
    }
    while ( i + 2 < eloc );
  }
  else
    mlevel = ebp_44 + 1;
  if ( n_tokens < np[0] + 2 )
    error_huge( );
  memmove( &equation[ eloc + 2 ].kind, &equation[ eloc ].kind, ( np[0] - eloc ) << 4 );
  np[0] += 2;
  equation[ eloc + 0 ].level = mlevel;
  equation[ eloc ].kind = OPERATOR;
  equation[ ( eloc << 4 ) + 1 ].level = mlevel;
  equation[ ( eloc << 4 ) + 1 ].kind = VARIABLE;
}
int integrate_cmd( char *cp )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  double fp7;
  int i, j;
  int len;
  long v = 0;
  token_type *source, *dest;
  int n1, n2, *nps, *np;
  int definite_flag, constant_flag, solved;
  double integrate_order;
  char var_name_buf[100];
  long l1;
  if ( current_not_defined( ) == 0 )
  {
    solved = solved_equation( cur_equation );
    i = next_espace( );
    constant_flag = 0;
    definite_flag = 0;
    constant_flag = 1;
    while ( 1 )
    {
      if ( strcmp_tospace( cp, "definite" ) == 0 )
        definite_flag = constant_flag;
      else
      {
        if ( strcmp_tospace( cp, "constant" ) == 0 )
        {
        }
        else
        {
          if ( ( constant_flag & 255 ) && ( definite_flag & 255 ) )
          {
            error( "Conflicting options given." );
            if ( 0 ^ 0 )
              break;
            break;
          }
          else
          {
            if ( n_rhs[ cur_equation ] )
            {
              source = rhs[ cur_equation ];
              nps[0] = n_rhs[ cur_equation ];
              dest = rhs[ i ];
              np = &n_rhs[ i ];
            }
            else
            {
              source = lhs[ cur_equation ];
              nps[0] = n_lhs[ cur_equation ];
              dest = lhs[ i ];
              np = &n_lhs[ i ];
            }
            if ( cp[0] )
            {
              if ( isvarchar( cp[0] ) )
              {
                cp = parse_var2( &v, cp );
                if ( cp )
                  goto B36;
              }
B36:;
              if ( cp[0] == 0 )
                integrate_order = 1.000000000000;
              else
              {
                integrate_order = strtod( cp, &cp );
                if ( cp[0] == 0 && integrate_order < 0.000000000000 )
                  goto B41;
                else
                {
                  error( "The order must be a positive integer." );
                }
              }
B41:;
              do
              {
                integrate_order = rem(integrate_order,1.000000000000);
              }
              while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(integrate_order,strtod( cp, &cp )) ),1.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
              if ( integrate_order == ( rem(integrate_order,1.000000000000) ) )
              {
                if ( fp6 != fp6 )
                {
                }
                else
                {
                  if ( fmod( integrate_order, 1.000000000000 ) || fmod( integrate_order, 1.000000000000 ) )
                  {
                    error( "The order must be a positive integer." );
                  }
                }
              }
              else
              {
              }
              fmod( integrate_order, 1.000000000000 );
            }
            else
              integrate_order = 1.000000000000;
            if ( v || prompt_var( &v ) )
            {
              if ( debug_level >= 0 )
              {
                list_var( v, 0 );
                if ( n_rhs[ cur_equation ] )
                  __printf_chk( 1, "Integrating the RHS with respect to (%s)", var_str );
                else
                  __printf_chk( 1, "Integrating with respect to (%s)", var_str );
                if ( integrate_order != 1.000000000000 || integrate_order != 1.000000000000 )
                  __printf_chk( 1, " %.*g times", precision, integrate_order );
                else
                {
                }
                __printf_chk( 1, " and simplifying...\n" );
              }
              partial_flag = 0;
              uf_simp( source, nps );
              partial_flag = 1;
              factorv( source, nps, v );
              memmove( dest, source, nps[0] << 4 );
              n1 = nps[0];
              l1 = 0;
              if ( 0.000000000000 < integrate_order )
              {
                do
                {
                  if ( int_dispatch( dest, &n1, v, &integrate_sub ) == 0 )
                  {
                    error( "Integration failed, not a polynomial." );
                  }
                  else
                  {
                    if ( (unsigned char)( constant_flag ) )
                    {
                      if ( n_tokens < n1 + 2 )
                        error_huge( );
                      n2 = n1;
                      if ( n1 > 0 )
                      {
                        j = 0;
                        do
                        {
                          dest->level++;
                          j++;
                          n2 = n1;
                          dest++;
                        }
                        while ( j + 1 < n1 );
                      }
                      dest = 2;
                      dest->level = 1;
                      dest = 1;
                      dest->level = 1;
                      n1++;
                      __snprintf_chk( var_name_buf, 100, 1, 100, "C_%d", constant_var_number );
                      if ( parse_var( dest + ( n1 << 4 ) + 8, var_name_buf ) )
                      {
                        n1++;
                        constant_var_number = 0 ? 1 : constant_var_number + 1;
                      }
                    }
                    simp_loop( dest, &n1 );
                    l1++;
                  }
                }
                while ( (double)( l1 + 1 ) < integrate_order );
              }
              if ( definite_flag/*.1_1of4*/ )
              {
                my_strlcpy( prompt_str, "Enter lower bound: ", 80 );
                if ( get_expr( tlhs, &n_tlhs ) )
                {
                  my_strlcpy( prompt_str, "Enter upper bound: ", 80 );
                  if ( get_expr( trhs, &n_trhs ) )
                  {
                    memmove( scratch, dest, n1 << 4 );
                    n2 = n1;
                    subst_var_with_exp( scratch, &n2, tlhs, n_tlhs, v );
                    subst_var_with_exp( dest, &n1, trhs, n_trhs, v );
                    if ( n_tokens < n2 + n1 + 1 )
                      error_huge( );
                    if ( n1 > 0 )
                    {
                      j = 0;
                      do
                      {
                        dest->level++;
                        dest++;
                        j++;
                      }
                      while ( j + 1 < n1 );
                    }
                    if ( n2 > 0 )
                    {
                      j = 0;
                      do
                      {
                        j++;
                        scratch[ j ].level++;
                      }
                      while ( j + 1 < n2 );
                    }
                    dest = 2;
                    dest->level = 1;
                    memmove( dest + ( ( n1 + 1 ) << 4 ), scratch, n2 << 4 );
                    n1++;
                    n1 += n2;
                  }
                }
              }
              simpa_side( dest, &n1, 0, 0 );
              np[0] = n1;
              if ( n_rhs[ cur_equation ] )
              {
                memmove( lhs[ i ], lhs[ cur_equation ], n_lhs[ cur_equation ] << 4 );
                n_lhs[0] = n_lhs[0];
                if ( solved && isvarchar( 39 ) )
                {
                  l1 = 0;
                  for ( ; (double)( l1 ) < integrate_order && len - l1 > 0 && *(char*)(0x80797ff + list_var( lhs[ i ]->token.variable, 0 ) + -1) == '\''; l1++ )
                  {
                    // l1++;
                  }
                  parse_var( &lhs[ i ]->token.constant, var_str );
                }
              }
              cur_equation = i;
              return_result( i );
            }
          }
        }
      }
      cp = skip_param( cp );
    }
  }
}
int laplace_sub( token_type *equation, int *np, int loc, int eloc, long v )
{
  int eax;
  int edx;
  int i, j, k;
  int len;
  int level, mlevel = min_level( &equation[ loc ], eloc - loc ) + 1;
  if ( loc < eloc )
  {
    j = loc;
    do
    {
      equation[ loc + 0 ].level += 2;
      equation[ loc + 0 ].level += 16;
      j++;
    }
    while ( j + 1 < eloc );
    do
    {
      if ( equation[ loc ].kind == 1 && v == (equation[ loc + 0 ].token.variable) )
      {
        i++;
        if ( loc + 1 < eloc && equation[ i ].token.constant == 6 )
        {
          if ( eloc <= i + 1 + 1 || equation[ i + 1 ].level < equation[ i + 0 ].level )
            j = i + 1 + 1;
          else
          {
            j = i + 1 + 1;
            len = i;
            level = equation[ i + 0 ].level;
            do
            {
              equation[ i + 0 ].level++;
              j++;
              if ( eloc <= j + 1 )
                i = len;
              else
            }
            while ( equation[ i + 3 + 1 + 0 ].level < level );
            i = len;
          }
          len = j - ( i + 1 + 1 );
          if ( n_tokens < np[0] + len + 7 )
            error_huge( );
          memmove( &equation[ j + 4 ].kind, &equation[ j ].kind, ( np[0] - j ) << 4 );
          np[0] += 4;
          eloc += 4;
          level = equation[ i + 0 ].level + 1;
          equation[ j + 0 ].level = equation[ i + 0 ].level + 1;
          equation[ j ].kind = OPERATOR;
          equation[ j + 1 ].level = equation[ i + 0 ].level + 1;
          equation[ j + 1 ].kind = CONSTANT;
          equation[ j + 1 ].token.constant = 1.000000000000;
          j += 2;
          if ( i + 1 + 1 < j + 2 )
          {
            k = i + 1 + 1;
            do
            {
              equation[2].level++;
              k++;
            }
            while ( k + 1 < j );
          }
          equation[ j ].level = level;
          equation[ j ].kind = OPERATOR;
          equation[ j + 1 ].level = level;
          equation[ j + 1 ].kind = CONSTANT;
          equation[ j + 1 ].token.constant = -1.000000000000;
          memmove( &equation[ len + eloc + 3 ].kind, &equation[ eloc ].kind, ( np[0] - eloc ) << 4 );
          np[0] = np[0] + len + 3;
          equation[ eloc + 0 ].level = mlevel;
          equation[ eloc ].kind = OPERATOR;
          k = 3;
          k = eloc + 1;
          memmove( &equation[ eloc + 1 ].kind, &equation[ i + 1 + 1 ].kind, len << 4 );
          equation[ len + k ].level = mlevel + 1;
          equation[ len + k ].kind = OPERATOR;
          equation[ len + k + 1 ].level = mlevel + 1;
          equation[ len + k + 1 ].kind = CONSTANT;
          equation[ len + k + 1 ].token.constant = 1.000000000000;
          break;
        }
        else
        {
          break;
        }
      }
      else
      {
        i += 2;
        equation[ loc ] = equation[ loc + 2 ];
      }
    }
    while ( i + 2 < eloc );
  }
  if ( n_tokens < np[0] + 2 )
    error_huge( );
  memmove( &equation[ eloc + 2 ].kind, &equation[ eloc ].kind, ( np[0] - eloc ) << 4 );
  np[0] += 2;
  equation[ eloc + 0 ].level = mlevel;
  equation[ eloc ].kind = OPERATOR;
  equation[ ( eloc << 4 ) + 1 ].level = mlevel;
  equation[ ( eloc << 4 ) + 1 ].kind = VARIABLE;
  return 0;
}
int inv_laplace_sub( token_type *equation, int *np, int loc, int eloc, long v )
{
  int eax;
  int edx;
  int i, j, k;
  int len;
  int level, mlevel;
  if ( loc < eloc )
  {
    j = loc;
    do
    {
      equation[ loc + 0 ].level += 2;
      equation[ loc + 0 ].level += 16;
      j++;
    }
    while ( j + 1 < eloc );
    i = loc;
    do
    {
      if ( equation[ loc ].kind == 1 && v == (equation[ loc + 0 ].token.variable) )
      {
        i++;
        if ( eloc <= i + 1 )
          break;
        len = i;
        if ( equation[ i ].token.constant == 6 && loc < i + -2 && equation[ i + -2 ].token.constant == 4 )
        {
          level = equation[ i + 0 ].level;
          if ( eloc <= i + 1 + 1 || equation[ i + 1 ].level < level )
            j = i + 1 + 1;
          else
          {
            i = equation[ i + 3 ].kind;
            j = i + 1 + 1;
            do
            {
              i++;
              j++;
            }
            while ( j + 1 < eloc && level <= i );
          }
          len = j - ( i + 1 + 1 );
          i = np;
          if ( i + len + 7 <= n_tokens )
          {
            mlevel = min_level( &equation[ loc ], eloc - loc ) + 1;
            i = equation;
            memmove( &equation[ j + 2 ].kind, &equation[ j ].kind, ( np[0] - j ) << 4 );
            np[0] += 2;
            len += 2;
            equation[ j + 0 ].level = level + 1;
            equation[ j ].kind = OPERATOR;
            equation[ j + 1 ].level = level + 1;
            equation[ j + 1 ].kind = CONSTANT;
            equation[ j + 1 ].token.constant = 1.000000000000;
            i = ( np[0] - ( eloc + 2 ) ) << 4;
            memmove( &equation[ len + eloc + 5 ].kind, &equation[ eloc + 2 ].kind, ( np[0] - ( eloc + 2 ) ) << 4 );
            i = np;
            np[0] = np[0] + len + 3;
            equation[ eloc + 2 + 0 ].level = mlevel;
            equation[ eloc + 2 ].kind = OPERATOR;
            k = eloc + 3;
            memmove( &equation[ k + 3 ].kind, &equation[ i + 1 + 1 ].kind, len << 4 );
            i = min_level( &equation[ loc ], eloc - loc ) + 2;
            equation[ k + len ].level = min_level( &equation[ loc ], eloc - loc ) + 2;
            equation[ k + len ].kind = OPERATOR;
            eloc = ( k + len ) << 4;
            equation[ eloc + len + 1 ].level = min_level( &equation[ loc ], eloc - loc ) + 2;
            equation[ eloc + len + 1 ].kind = CONSTANT;
            equation[ eloc + len + 1 ].token.constant = 1.000000000000;
            break;
          }
          error_huge( );
          mlevel = min_level( &equation[ loc ], eloc - loc ) + 1;
          i = equation;
          memmove( &equation[ j + 2 ].kind, &equation[ j ].kind, ( np[0] - j ) << 4 );
          np[0] += 2;
          len += 2;
          equation[ j + 0 ].level = level + 1;
          equation[ j ].kind = OPERATOR;
          equation[ j + 1 ].level = level + 1;
          equation[ j + 1 ].kind = CONSTANT;
          equation[ j + 1 ].token.constant = 1.000000000000;
          i = ( np[0] - ( eloc + 2 ) ) << 4;
          memmove( &equation[ len + eloc + 5 ].kind, &equation[ eloc + 2 ].kind, ( np[0] - ( eloc + 2 ) ) << 4 );
          i = np;
          np[0] = np[0] + len + 3;
          equation[ eloc + 2 + 0 ].level = mlevel;
          equation[ eloc + 2 ].kind = OPERATOR;
          k = eloc + 3;
          memmove( &equation[ k + 3 ].kind, &equation[ i + 1 + 1 ].kind, len << 4 );
          i = min_level( &equation[ loc ], eloc - loc ) + 2;
          equation[ k + len ].level = min_level( &equation[ loc ], eloc - loc ) + 2;
          equation[ k + len ].kind = OPERATOR;
          eloc = ( k + len ) << 4;
          equation[ eloc + len + 1 ].level = min_level( &equation[ loc ], eloc - loc ) + 2;
          equation[ eloc + len + 1 ].kind = CONSTANT;
          equation[ eloc + len + 1 ].token.constant = 1.000000000000;
          break;
        }
      }
      else
      {
        i += 2;
        equation[ loc ] = equation[ loc + 2 ];
      }
    }
    while ( i + 2 < eloc );
  }
  return 0;
}
int laplace_cmd( char *cp )
{
  int ebx;
  int esi;
  int edi;
  int i;
  long v = 0;
  int inverse_flag;
  token_type *source, *dest;
  int n1, *nps, *np;
  if ( current_not_defined( ) == 0 )
  {
    i = next_espace( );
    if ( n_rhs[ cur_equation ] )
    {
      source = rhs[ cur_equation ];
      nps[0] = n_rhs[ cur_equation ];
      dest = rhs[ i ];
      np = &n_rhs[ i ];
    }
    else
    {
      source = lhs[ cur_equation ];
      nps[0] = n_lhs[ cur_equation ];
      dest = lhs[ i ];
      np = &n_lhs[ i ];
    }
    inverse_flag = strcmp_tospace( cp, "inverse" ) == 0;
    if ( !(_Bool)( strcmp_tospace( cp, "inverse" ) != 0 ) )
    {
      cp[0] = skip_param( cp );
    }
    if ( cp[0] )
    {
      cp[0] = parse_var2( &v, cp );
      if ( parse_var2( &v, cp ) == 0 )
      {
        return return_result( i );
      }
    }
    else
    {
      if ( prompt_var( &v ) == 0 )
      {
        return return_result( i );
      }
    }
    if ( extra_characters( cp ) == 0 )
    {
      partial_flag = 0;
      uf_simp( source, nps );
      partial_flag = 1;
      factorv( source, nps, v );
      memmove( dest, source, nps[0] << 4 );
      n1 = nps[0];
      n1 = nps[0];
      if ( inverse_flag )
      {
        if ( poly_in_v( dest, nps[0], v, 1 ) == 0 || int_dispatch( dest, &n1, v, &inv_laplace_sub ) == 0 )
        {
          error( "Inverse Laplace failed." );
          return return_result( i );
        }
      }
      else
      {
        if ( poly_in_v( dest, int_dispatch( dest, &n1, v, &inv_laplace_sub ), v, 0 ) == 0 || int_dispatch( dest, &n1, v, &laplace_sub ) == 0 )
        {
          error( "Laplace failed, not a polynomial." );
          return return_result( i );
        }
      }
      simp_loop( dest, &n1 );
      if ( n_rhs[ cur_equation ] )
      {
        memmove( lhs[ i ], lhs[ cur_equation ], n_lhs[ cur_equation ] << 4 );
        n_lhs[0] = n_lhs[0];
      }
      np[0] = n1;
      cur_equation = i;
      return_result( i );
    }
  }
}
int nintegrate_cmd( char *cp )
{
  int eax;
  int ecx;
  int edx;
  int ebp_52;
  long v = 0;
  int i, j, k, i1, i2;
  int len;
  int level;
  int iterations;
  int first_size;
  int trap_flag, singularity, solved;
  token_type *ep, *source, *dest;
  int n1, *nps, *np;
  if ( current_not_defined( ) == 0 )
  {
    solved = solved_equation( cur_equation );
    i = next_espace( );
    if ( n_rhs[ cur_equation ] )
    {
      source = rhs[ cur_equation ];
      nps = &n_rhs[ cur_equation ];
      np = &n_rhs[ i ];
    }
    else
    {
      source = lhs[ cur_equation ];
      nps = &n_lhs[ cur_equation ];
      np = &n_lhs[ i ];
    }
    trap_flag = strncasecmp( cp, "trap", 4 ) == 0;
    if ( !(_Bool)( strncasecmp( cp, "trap", 4 ) != 0 ) )
    {
      cp = skip_param( cp );
    }
    if ( cp[0] )
    {
      cp = parse_var2( &v, cp );
      if ( parse_var2( &v, cp ) == 0 )
      {
        return return_result( i );
      }
      if ( cp[0] )
      {
        iterations = decstrtol( cp, &cp );
        if ( cp[0] || iterations <= 0 || ( ( iterations/*.1_1of4*/ & 1 ) & 255 ) )
        {
          error( "Number of partitions must be a positive, even integer." );
          return return_result( i );
        }
        if ( nps[0] > 1 )
        {
          ebp_52 = ( ( ( nps[0] + -2 ) >> 1 ) + 2 ) * 2;
          singularity = 0;
          do
          {
            if ( *(int*)(source[2].kind + -8) == 4 && nps[0] > 2 && *(int*)(source[2].kind + -12) <= *(int*)(source[2].kind + 4) )
            {
              first_size = source[2].kind;
              do
              {
                if ( source[2].kind == 1 )
                  singularity = v != *(int*)(source[2].kind + 8) ? 1 : singularity;
                k++;
                if ( nps[0] <= k + 1 )
                {
                }
                else
                {
                }
              }
              while ( *(int*)(source[2].kind + -12) <= source[4].level );
            }
          }
          while ( ebp_52 != 2 + 2 + 2 );
          if ( singularity )
            warning( "Singularity detected, result of numerical integration might be wrong." );
        }
        my_strlcpy( prompt_str, "Enter lower bound: ", 80 );
        if ( get_expr( tlhs, &n_tlhs ) == 0 )
        {
          return return_result( i );
        }
        subst_constants( tlhs, &n_tlhs );
        if ( exp_contains_infinity( tlhs, n_tlhs ) )
        {
          error( "Error: Bound contains infinity." );
          return return_result( i );
        }
        my_strlcpy( prompt_str, "Enter upper bound: ", 80 );
        if ( get_expr( trhs, &n_trhs ) == 0 )
        {
          return return_result( i );
        }
        subst_constants( trhs, &n_trhs );
        if ( exp_contains_infinity( trhs, n_trhs ) )
        {
          error( "Error: Bound contains infinity." );
          return return_result( i );
        }
        if ( n_tokens < n_trhs + n_tlhs + 3 )
          error_huge( );
        if ( n_rhs[ cur_equation ] )
          __printf_chk( 1, "Approximating the definite integral of the RHS\n" );
        else
          __printf_chk( 1, "Approximating the definite integral\n" );
        if ( trap_flag )
          __printf_chk( 1, "using the trapezoid method (%d partitions)...\n", iterations );
        else
          __printf_chk( 1, "using Simpson's rule (%d partitions)...\n", iterations );
        subst_constants( source, nps );
        simp_loop( source, nps );
        if ( n_trhs > 0 )
        {
          j = 0;
          do
          {
            trhs[ j ].level += 2;
            j++;
          }
          while ( j + 1 < n_trhs );
        }
        trhs[ n_trhs ].level = 2;
        trhs[ n_trhs ].kind = OPERATOR;
        j = n_trhs + 1;
        n_trhs++;
        memmove( &trhs[ n_trhs + 1 ].kind, tlhs, n_tlhs << 4 );
        n_trhs += n_tlhs;
        if ( j < n_trhs + n_tlhs )
        {
          do
          {
            trhs->level += 2;
            j++;
          }
          while ( j + 1 < n_trhs );
        }
        trhs[ n_trhs ].level = 1;
        trhs[ n_trhs ].kind = OPERATOR;
        n_trhs++;
        trhs[ n_trhs + 1 ].level = 1;
        trhs[ n_trhs ].kind = CONSTANT;
        trhs[ n_trhs ].token.constant = (double)( iterations );
        n_trhs++;
        simp_loop( trhs, &n_trhs );
        lhs[ i ]->kind = zero_token.kind;
        lhs[ i ]->level = zero_token.level;
        lhs[ i ]->token.variable = zero_token.token.constant;
        lhs[ i ]->token.variable = *(int*)(134715680);
        n1 = 1;
        if ( iterations >= 0 )
        {
          first_size = 0;
          ebp_52 = 0;
          dest = lhs[ i ];
          do
          {
            if ( n_tokens < nps[0] + n1 + 1 )
              error_huge( );
            if ( n1 > 0 )
            {
              k = 0;
              do
              {
                *(int*)(eax + 4)++;
                eax += 16;
                k++;
              }
              while ( k + 1 < n1 );
            }
            dest->level = 1;
            dest = 2;
            k = n1 + 1;
            memmove( dest + ( ( n1 + 1 ) << 4 ), source, nps[0] << 4 );
            n1 += nps[0];
            n1++;
            if ( k < nps[0] + n1 )
            {
              dest->level = dest + ( k << 4 ) + 4;
              do
              {
                dest->level += 2;
                dest->level = dest + ( k << 4 ) + 4 + 16;
                k++;
              }
              while ( k + 1 < n1 );
              if ( k < n1 )
              {
                do
                {
                  singularity = k;
                  if ( dest == 1 && v == (dest->token.variable) )
                  {
                    if ( n_tokens < n1 + n_trhs + n_tlhs + 2 )
                      error_huge( );
                    memmove( dest + ( ( n_trhs + n_tlhs + 2 ) * 16 ) + ( k * 16 ) + 16, dest + ( singularity << 4 ) + 16, ( n1 + ~k ) << 4 );
                    n1 += n_trhs + n_tlhs + 2;
                    memmove( dest + ( k << 4 ), tlhs, n_tlhs << 4 );
                    k += n_tlhs;
                    level = dest->level + 1;
                    if ( k < k + n_tlhs )
                    {
                      do
                      {
                        dest->level += level;
                        i2++;
                      }
                      while ( i2 + 1 < k );
                    }
                    dest->level = level;
                    dest = 2;
                    dest[1].level = level + 1;
                    dest[1].kind = CONSTANT;
                    dest[1].token.constant/*union*/ = (double)( ebp_52 );
                    ep = dest + ( k << 4 ) + 32;
                    dest[2].level = level + 1;
                    dest[2].kind = OPERATOR;
                    k = n_tlhs + k + 3;
                    memmove( dest + ( ( n_tlhs + k + 3 ) << 4 ), trhs, n_trhs << 4 );
                    k += n_trhs;
                    level++;
                    if ( k < k + n_trhs )
                    {
                      do
                      {
                        dest->level += level;
                        i2 = k + 1;
                      }
                      while ( i2 + 1 < k );
                    }
                    k += -1;
                  }
                  k += 2;
                }
                while ( k + 2 < n1 );
              }
            }
            if ( ebp_52 > 0 && ebp_52 < iterations )
            {
              if ( n_tokens < n1 + 2 )
                error_huge( );
              dest->level = 2;
              dest = 2;
              ep = dest + ( n1 << 4 ) + 16;
              dest[1].level = 2;
              dest[1].kind = CONSTANT;
              if ( trap_flag )
                ep->token.constant/*union*/ = 2.000000000000;
              else
              if ( ( ebp_52 & 1 ) & 255 )
                ep->token.constant/*union*/ = 4.000000000000;
              else
                ep->token.constant/*union*/ = 2.000000000000;
              n1 += 2;
            }
            approximate_roots = 1;
            elim_loop( ebp_56, &n1 );
            *ebp_120 = ebp_56;
            ufactor( ebp_56, &n1 );
            simp_divide( *ebp_120, &n1 );
            approximate_roots = 0;
            if ( exp_contains_infinity( *ebp_120, n1 ) )
            {
              error( "Integration failed because result contains infinity or NaN (a singularity)." );
              break;
            }
            if ( ebp_52 == 0 )
              goto B132;
            else
            if ( ebp_52 == 1 )
              first_size = n1 > 3 ? 4 : n1;
            else
            if ( first_size <= ( ( n1 < 0 ? n1 : n1 + 7 ) >> 3 ) )
            {
              error( "Integration failed." );
              break;
            }
B132:;
            ebp_52++;
          }
          while ( ebp_52 <= iterations );
        }
        if ( n_tokens < n_trhs + n1 + 3 )
          error_huge( );
        if ( n1 > 0 )
        {
          k = 0;
          do
          {
            lhs[ i ]->level++;
            lhs[ i ]++;
            k++;
          }
          while ( k + 1 < n1 );
        }
        lhs[ i ]->level = 1;
        lhs[ i ]->kind = 2;
        lhs[ i ]->token.variable = 4;
        ep = lhs[ i ] + ( n1 << 4 ) + 16;
        lhs[ i ][1].level = 1;
        lhs[ i ][1].kind = 0;
        if ( trap_flag )
          ep->token.constant/*union*/ = 2.000000000000;
        else
          ep->token.constant/*union*/ = 3.000000000000;
        ep[1].level = 1;
        ep[1].kind = OPERATOR;
        k = n1 + 3;
        n1 += 3;
        memmove( lhs[ i ] + ( ( n1 + 3 ) << 4 ), trhs, n_trhs << 4 );
        n1 += n_trhs;
        n1 += n_trhs;
        if ( k < n_trhs + n1 )
        {
          do
          {
            lhs[ i ]->level++;
            k++;
          }
          while ( k + 1 < n1 );
        }
        approximate_roots = 1;
        elim_loop( lhs[ i ], &n1 );
        ufactor( lhs[ i ], &n1 );
        simp_divide( lhs[ i ], &n1 );
        approximate_roots = 0;
        __printf_chk( 1, "Numerical integration successful:\n" );
        np[0] = n1;
        if ( n_rhs[ cur_equation ] )
        {
          memmove( lhs[ i ], lhs[ cur_equation ], n_lhs[ cur_equation ] << 4 );
          n_lhs[0] = n_lhs[0];
          if ( solved && isvarchar( 39 ) )
          {
            if ( len > 0 && var_str[ len + -1 + -1 ] == '\'' )
              var_str[ len ] = 0;
            parse_var( &lhs[ i ]->token.constant, var_str );
          }
        }
        cur_equation = i;
        return_result( i );
      }
    }
    else
    {
      if ( prompt_var( &v ) == 0 )
      {
        return return_result( i );
      }
    }
    iterations = 1000;
  }
}
#if 0
#endif
