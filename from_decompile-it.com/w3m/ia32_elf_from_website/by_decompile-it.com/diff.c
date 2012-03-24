#include "diff.c.h"
static int d_recurse( token_type *equation, int *np, int loc, int level, long v );
int differentiate( token_type *equation, int *np, long v )
{
  int eax;
  int edx;
  int i;
  organize( equation, np );
  if ( np[0] > 1 )
  {
    i = 1;
    do
    {
      if ( (unsigned int)(equation[ i ].token.variable) - 3 <= 1 )
        binary_parenthesize( equation, np[0], i );
      i += 2;
    }
    while ( i + 2 < np[0] );
  }
  return d_recurse( 1, &v );
}
int d_recurse( token_type *equation, int *np, int loc, int level, long v )
{
  int i, j;
  int n;
  int op;
  int oploc, endloc;
  complexs c;
  if ( equation[ loc ].level < level )
  {
    if ( equation[ loc ].kind == 1 && ( ( v == 5 && ( (unsigned int)(equation[ loc ].token.variable) & 16383 ) > 4 ) || v == (equation[ loc ].token.variable) ) )
    {
      equation[ loc ].kind = CONSTANT;
      equation[ loc ].token.constant/*union*/ = 1.000000000000;
      return 0;
    }
    else
    {
      equation[ loc ].kind = CONSTANT;
      equation[ loc ].token.constant/*union*/ = 0.000000000000;
      return 0;
    }
  }
  else
  {
    endloc = loc + 1;
    if ( loc + 1 < np[0] && level <= equation[ endloc ].level )
    {
      oploc = endloc;
      op = 0;
      do
      {
        if ( level == equation[ endloc ].level )
        {
          if ( op > 2 )
          {
            error_bug( "Internal error in d_recurse(): differentiating with unparenthesized operators is not allowed." );
            break;
          }
          else
          {
            op = (equation[ endloc ].token.variable);
            oploc = endloc;
          }
        }
        endloc += 2;
      }
      while ( np[0] <= endloc + 2 || equation[ loc ].(null) < level );
      switch ( op )
      {
      case 5:
        if ( loc < endloc )
        {
          i = loc;
          oploc = level;
          v = v;
          do
          {
            if ( equation[ loc ].kind == 1 && ( ( v == 5 && ( equation[ loc ].(null) & 16383 ) > 4 ) || v == (equation[ loc ].token.variable) ) )
            {
              break;
            }
            else
            {
              i += 2;
            }
          }
          while ( endloc <= i + 2 );
          level = oploc;
        }
        memmove( equation + ( loc << 4 ) + 16, equation + ( endloc << 4 ), ( np[0] - endloc ) << 4 );
        np[0] = np[0] + ( loc - endloc ) + 1;
        equation[ loc ].level = level;
        equation[ loc ].kind = CONSTANT;
        equation[ loc ].token.constant/*union*/ = 0.000000000000;
        return 0;
        break;
      case 0:
      case 1:
      case 2:
        break;
      case 3:
        op = endloc - loc;
        if ( n_tokens < np[0] + ( endloc - loc ) + 1 )
          error_huge( );
        if ( loc < endloc )
        {
          i = loc;
          do
          {
            equation[ loc ].level++;
            i++;
          }
          while ( i + 1 < endloc );
        }
        memmove( equation + ( endloc << 4 ) + 16, equation + ( loc << 4 ), ( np[0] - loc ) << 4 );
        np[0] = np[0] + op + 1;
        equation[ endloc ].level = level;
        equation[ endloc ].kind = OPERATOR;
        if ( d_recurse( equation + ( endloc << 4 ) + 4 + 2, &v ) != 0 )
          d_recurse( level + 2, &v );
          return 0;
        (equation[ endloc ].token.variable) = 1;
        break;
      case 4:
        op = endloc - loc;
        oploc = endloc - oploc;
        if ( n_tokens < np[0] + ( endloc - loc ) + 3 + ( endloc - oploc ) )
          error_huge( );
        if ( loc < endloc )
        {
          i = loc;
          do
          {
            equation[ loc ].level += 2;
            i++;
          }
          while ( i + 1 < endloc );
        }
        (equation[ oploc ].token.variable) = 3;
        (equation[ endloc ].token.variable) = 2;
        j = op + 1;
        memmove( equation + ( endloc << 4 ) + 16, equation + ( loc << 4 ), ( np[0] - loc ) << 4 );
        np[0] += j;
        equation[ endloc ].level = level + 1;
        equation[ endloc ].kind = OPERATOR;
        op = endloc + j;
        memmove( equation + ( op * 16 ) + ( oploc * 16 ) + 32, equation + ( j * 16 ) + ( endloc * 16 ), ( np[0] - op ) << 4 );
        np[0] = np[0] + oploc + 2;
        equation[ j ].kind/*error:''*/ = level;
        equation[ j ].kind/*error:''*/ = 4;
        memmove( equation + ( op << 4 ) + 16, equation + ( oploc << 4 ) + 16, ( endloc + ~oploc ) * 16 );
        equation[ op ].kind/*error:''*/ = level + 1;
        equation[ op ].kind/*error:''*/ = 6;
        equation[ op ].(null) = level + 1;
        equation[ op ].(null) = 0;
        equation[ op ].(null) = 2.000000000000;
        if ( d_recurse( level + 3 + 3, &v ) != 0 )
          d_recurse( level + 3, &v );
        break;
      case 6:
        if ( endloc <= oploc )
          level = level;
        else
        {
          i = oploc;
          op = oploc;
          v = v;
          do
          {
            if ( equation[ oploc ].kind == 1 && ( ( v == 5 && ( equation[ oploc ].(null) & 16383 ) > 4 ) || v == equation[ oploc ].(null) ) )
            {
              if ( parse_complex( equation + ( loc << 4 ), op - loc, &c ) != 0 )
              {
                (c.re & 0xFFFFFFFF) = complex_log( c );
                oploc = ( endloc + 6 ) - op;
                if ( n_tokens < np[0] + ( ( endloc + 6 ) - op ) )
                  error_huge( );
                op = equation + ( endloc << 4 );
                memmove( equation + ( oploc * 16 ) + ( endloc * 16 ), &op, ( np[0] - endloc ) << 4 );
                np[0] += oploc;
                op/*error:'i'*/ = level;
                op/*error:'i'*/ = 2;
                op/*error:'i'*/ = 3;
                op = level + 1;
                equation[ endloc ].(null) = level + 1;
                equation[ endloc ].(null) = 0;
                equation[ endloc ].(null) = c;
                equation[ endloc ].(null) = level + 1;
                equation[ endloc ].(null) = 2;
                equation[ endloc ].(null) = 1;
                equation[ endloc ].(null) = level + 2;
                equation[ endloc ].(null) = 0;
                equation[ endloc ].(null) = c.im;
                equation[ endloc ].(null) = level + 2;
                equation[ endloc ].(null) = 2;
                equation[ endloc ].(null) = 3;
                equation[ endloc ].(null) = level + 2;
                equation[ endloc ].(null) = 1;
                equation[ endloc ].(null) = 3;
                equation[ endloc ].(null) = level;
                equation[ endloc ].(null) = 2;
                equation[ endloc ].(null) = 3;
                n = endloc + 7;
                memmove( equation + ( endloc * 16 ) + 112, equation + ( op << 4 ) + 16, ( endloc + ~op ) * 16 );
                if ( loc < endloc )
                {
                  i = loc;
                  do
                  {
                    equation[ loc ].level++;
                    i++;
                  }
                  while ( i + 1 < endloc );
                }
                d_recurse( &op/*error:'i'*/, &v );
              }
            }
            else
            {
              i++;
            }
          }
          while ( i + 1 < endloc );
        }
        (scratch[ endloc + ~oploc ].token.variable) = 3;
        oploc = endloc + ~oploc;
        memmove( scratch, equation + ( oploc << 4 ) + 16, ( endloc + ~oploc ) * 16 );
        scratch[ endloc + ~oploc ].level = level;
        scratch[ endloc + ~oploc ].kind = OPERATOR;
        op = oploc + 1;
        if ( n_tokens < oploc + 1 + ( endloc - loc ) + 2 )
          error_huge( );
        memmove( &scratch[ op ].kind, equation + ( loc << 4 ), ( endloc - loc ) << 4 );
        n = op + ( oploc - loc ) + 1;
        i = op;
        if ( op < op + ( oploc - loc ) + 1 )
        {
          do
          {
            scratch[ op ].level++;
            i++;
          }
          while ( i + 1 < n );
          i = ( op + ( n - ( endloc + ~oploc ) ) ) - 1;
        }
        n += oploc;
        if ( i < oploc + n )
        {
          do
          {
            scratch[ i ].level += 2;
            i++;
          }
          while ( i + 1 < n );
        }
        (scratch[ n ].token.variable) = 2;
        scratch[ n ].level = level + 2;
        scratch[ n ].kind = OPERATOR;
        scratch[ n + 1 ].level = level + 2;
        scratch[ n + 1 ].kind = CONSTANT;
        scratch[ n + 1 ].token.constant/*union*/ = 1.000000000000;
        n += 2;
        if ( n_tokens < n + 2 + ( oploc - loc ) + 1 )
          error_huge( );
        (scratch[ n ].token.variable) = 3;
        scratch[ n ].level = level;
        scratch[ n ].kind = OPERATOR;
        op = n + 1;
        memmove( &scratch[ n + 1 ].kind, equation + ( loc << 4 ), ( oploc - loc ) << 4 );
        n = ( oploc - loc ) + op;
        if ( n_tokens < ( oploc - loc ) + op + ( ( *(int*)(np) + loc ) - endloc ) )
          error_huge( );
        oploc = loc + n;
        memmove( equation + ( oploc << 4 ), equation + ( endloc << 4 ), ( np[0] - endloc ) << 4 );
        np[0] += oploc - endloc;
        memmove( equation + ( loc << 4 ), scratch, ( n << 4 ) << 4 );
        d_recurse( level + 1 + 1, &v );
        break;
      }
    }
    i = loc;
    np[0] = np;
    while ( i < np[0] )
    {
      break;
    }
  }
}
int derivative_cmd( char *cp )
{
  int eax;
  int ecx;
  int i, len;
  long v = 0;
  long l1, order;
  token_type *source, *dest;
  int n1, *nps, *np;
  int simplify_flag, solved;
  if ( current_not_defined( ) == 0 )
  {
    solved = solved_equation( cur_equation );
    simplify_flag = 1;
    if ( strcmp_tospace( cp, "nosimplify" ) == 0 )
    {
      cp = skip_param( cp );
      simplify_flag = 0;
    }
    i = next_espace( );
    if ( n_rhs[ cur_equation ] != 0 )
    {
      if ( solved == 0 )
        warning( "Not a solved equation.  Only the RHS will be differentiated." );
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
    if ( cp[0] != 0 )
    {
      if ( is_all( cp ) != 0 )
      {
        cp = skip_param( cp );
        v = 5;
      }
      else
      {
        if ( isvarchar( cp[0] ) != 0 )
        {
          cp = parse_var2( &v, cp );
          if ( parse_var2( &v, cp ) == 0 )
          {
            return 0;
          }
        }
      }
      if ( cp[0] != 0 )
      {
        if ( cp[0] != 0 || decstrtol( cp, &cp ) < 1 )
        {
          error( "The order must be a positive integer." );
          return 0;
        }
        else
        {
          if ( no_vars( source, nps[0], &v ) != 0 )
          {
            error( "Current expression contains no variables; the derivative would be zero." );
            return 0;
          }
          else
          {
            if ( v != 0 || prompt_var( &v ) != 0 )
            {
              if ( v != 5 && found_var( source, nps[0], v ) == 0 )
              {
                error( "Variable not found; the derivative would be zero." );
                return 0;
              }
              else
              {
                if ( debug_level >= 0 )
                {
                  list_var( v, 0 );
                  if ( n_rhs[ cur_equation ] != 0 )
                    __printf_chk( 1, "Differentiating the RHS with respect to (%s)", var_str );
                  else
                    __printf_chk( 1, "Differentiating with respect to (%s)", var_str );
                  if ( decstrtol( cp, &cp ) != 1 )
                    __printf_chk( 1, " %ld times", decstrtol( cp, &cp ) );
                  if ( simplify_flag != 0 )
                    __printf_chk( 1, " and simplifying...\n" );
                  else
                    __printf_chk( 1, "...\n" );
                }
                memmove( dest, source, nps[0] << 4 );
                n1 = nps[0];
                if ( decstrtol( cp, &cp ) >= 1 )
                {
                  l1 = 0;
                  do
                  {
                    if ( differentiate( dest, &n1, v ) == 0 )
                    {
                      error( "Differentiation failed." );
                      break;
                    }
                    else
                    {
                      if ( simplify_flag != 0 )
                        simpa_side( dest, &n1, 1, 0 );
                      else
                        elim_loop( dest, &n1 );
                      l1++;
                    }
                  }
                  while ( l1 + 1 < decstrtol( cp, &cp ) );
                }
                np[0] = n1;
                if ( n_rhs[ cur_equation ] != 0 )
                {
                  memmove( lhs[ i ], lhs[ cur_equation ], n_lhs[ cur_equation ] << 4 );
                  n_lhs[ i ] = n_lhs[ cur_equation ];
                  if ( solved != 0 && isvarchar( 39 ) != 0 )
                  {
                    list_var( (int)( (long)(lhs[ i ]->token.variable) ), 0 );
                    if ( decstrtol( cp, &cp ) >= 1 && len <= 98 )
                    {
                      var_str[ len ] = var_str[ len ];
                      l1 = 0;
                      order = decstrtol( cp, &cp );
                      do
                      {
                        var_str[ len ] = '\'';
                        len++;
                        l1++;
                      }
                      while ( l1 + 1 < order && len <= 98 );
                    }
                    var_str[ len ] = 0;
                    parse_var( &lhs[ i ]->token.constant, var_str );
                  }
                }
                cur_equation = i;
                return_result( i );
              }
            }
          }
        }
      }
    }
  }
}
int extrema_cmd( char *cp )
{
  int i;
  long v = 0;
  long l1, order;
  token_type want;
  token_type *source;
  int n;
  if ( current_not_defined( ) == 0 )
  {
    i = next_espace( );
    if ( n_rhs[ cur_equation ] != 0 )
    {
      if ( solved_equation( cur_equation ) == 0 )
      {
        error( "The current equation is not solved for a variable." );
        return 0;
      }
      else
      {
        source = rhs[ cur_equation ];
        n = n_rhs[ cur_equation ];
      }
    }
    else
    {
      source = lhs[ cur_equation ];
      n = n_lhs[ cur_equation ];
    }
    if ( ( cp[0] & 255 ) != 0 )
    {
      if ( isvarchar( cp[0] ) != 0 )
      {
        cp = parse_var2( &v, cp );
        if ( parse_var2( &v, cp ) != 0 )
          goto B16;
      }
B16:      if ( cp[0] != 0 )
      {
        order = decstrtol( cp, &cp );
        if ( cp[0] != 0 || order < 1 )
        {
          error( "The order must be a positive integer." );
          return 0;
        }
        else
        {
          if ( no_vars( source, n, &v ) != 0 )
          {
            error( "Current expression contains no variables." );
            return 0;
          }
          else
          {
            if ( v != 0 || prompt_var( &v ) != 0 )
            {
              if ( found_var( source, n, v ) != 0 )
              {
                memmove( rhs[ i ], source, n << 4 );
                if ( order >= 1 )
                {
                  l1 = 0;
                  do
                  {
                    if ( differentiate( rhs[ i ], &n, v ) == 0 )
                    {
                      error( "Differentiation failed." );
                      break;
                    }
                    else
                    {
                      simpa_side( rhs[ i ], &n, 1, 0 );
                      l1++;
                    }
                  }
                  while ( l1 + 1 < order );
                }
                if ( found_var( rhs[ i ], n, v ) == 0 )
                {
                  error( "There are no solutions." );
                  return 0;
                }
                else
                {
                  (lhs[ i ]->token.variable) = (zero_token.token.variable);
                  (lhs[ i ]->token.variable/*error:'l'*/) = *(int*)(134715680);
                  n_rhs[ i ] = n;
                  n_lhs[ i ] = 1;
                  lhs[ i ]->kind = zero_token.kind;
                  lhs[ i ]->level = zero_token.level;
                  cur_equation = i;
                  want.level = 1;
                  want.kind = VARIABLE;
                  if ( solve_sub( &want, 1, lhs[ i ], &n_lhs[ i ], rhs[ i ], &n_rhs[ i ] ) < 1 )
                  {
                    error( "Solve failed." );
                    return 0;
                  }
                  else
                  {
                    simpa_side( rhs[ i ], &n_rhs[ i ], 0, 0 );
                    return_result( cur_equation );
                  }
                }
              }
              else
              {
                error( "Variable not found; the derivative would be zero." );
                return 0;
              }
            }
          }
        }
      }
    }
    (want.token.variable) = v;
    order = 1;
  }
  return 0;
}
int taylor_cmd( char *cp )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  long v;
  int i, j, k, i1;
  int level;
  long l1, n, order;
  double d;
  char *cp_start, *cp1, buf[4096];
  int our;
  int our_nlhs, our_nrhs;
  token_type *ep, *source, *dest;
  int n1, *nps, *np;
  int simplify_flag;
  cp = cp;
  v = 0;
  cp_start = cp;
  if ( current_not_defined( ) == 0 )
  {
    simplify_flag = 1;
    if ( strcmp_tospace( cp, "nosimplify" ) == 0 )
    {
      cp = skip_param( cp );
      simplify_flag = 0;
    }
    i = next_espace( );
    memmove( lhs[ i ], lhs[ cur_equation ], n_lhs[ cur_equation ] << 4 );
    n_lhs[ i ] = n_lhs[ cur_equation ];
    n_rhs[ i ] = 0;
    our = alloc_next_espace( );
    n_lhs[ i ] = 0;
    if ( our < 0 )
    {
      error( "Out of free equation spaces." );
      if ( ( 0 ^ 0 ) != 0 )
      {
        i1 = i1;
        __stack_chk_fail( );
      }
      return 0;
    }
    else
    {
      if ( n_rhs[ cur_equation ] != 0 )
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
      if ( ( cp[0] & 255 ) != 0 )
      {
        if ( isvarchar( cp[0] ) != 0 )
        {
          cp = parse_var2( &v, cp );
          if ( cp != 0 )
            goto B24;
        }
B24:        if ( cp[0] != 0 )
        {
          order = decstrtol( cp, &cp1 );
          if ( cp1 != skip_param( cp ) || order < 0 )
          {
            error( "Positive integer required for order." );
          }
          else
            cp = skip_param( cp );
            no_vars( source, nps[0], &v );
            if ( v != 0 || prompt_var( &v ) != 0 )
            {
              if ( found_var( source, nps[0], v ) == 0 )
                warning( "Variable not found." );
              memmove( rhs[ our ], source, nps[0] << 4 );
              our_nrhs = nps[0];
              uf_simp( rhs[ our ], &our_nrhs );
              if ( differentiate( rhs[ our ], &our_nrhs, v ) == 0 )
              {
                error( "Differentiation failed." );
              }
              else
              {
                if ( cp[0] != 0 )
                {
                  input_column = ( input_column + cp ) - cp_start;
                  cp = parse_expr( lhs[ our ], &our_nlhs, cp );
                  if ( cp != 0 )
                  {
                    if ( our_nlhs < 1 )
                    {
                    }
                  }
                }
                else
                {
                  list_var( v, 0 );
                  __printf_chk( 1, "Taylor series expansion around %s = point.\n", var_str );
                  my_strlcpy( prompt_str, "Enter point: ", 80 );
                  if ( get_expr( lhs[ our ], &our_nlhs ) != 0 )
                    goto B53;
                }
B53:                if ( order < 0 )
                {
                  my_strlcpy( prompt_str, "Enter order (number of derivatives to take): ", 80 );
                  cp1 = get_string( buf, 4096 );
                  if ( cp1 != 0 )
                  {
                    if ( cp1[0] == 0 )
                    {
                      __printf_chk( 1, "Derivatives will be taken until they reach zero...\n" );
                      order = 2147483646;
                    }
                    else
                    {
                      order = decstrtol( cp1, &cp );
                      if ( cp[0] != 0 || order < 0 )
                      {
                        error( "Positive integer required for order." );
                      }
                    }
                  }
                }
                __printf_chk( 1, "Computing the Taylor series" );
                if ( n_rhs[ cur_equation ] != 0 )
                  __printf_chk( 1, " of the RHS" );
                if ( simplify_flag != 0 )
                  __printf_chk( 1, " and simplifying" );
                __printf_chk( 1, "...\n" );
                memmove( dest, source, nps[0] << 4 );
                n1 = nps[0];
                cp_start = 0;
                i1 = 0;
                while ( n1 <= i1 )
                {
                  if ( n_tokens < our_nlhs + n1 + 7 )
                    error_huge( );
                  if ( i1 < n1 )
                  {
                    dest[ i1 ].level = dest[ i1 ].level;
                    k = i1;
                    do
                    {
                      dest[ i1 ].level++;
                      dest[ i1 ].level += 16;
                      k++;
                    }
                    while ( k + 1 < n1 );
                  }
                  (dest[ ep[0].kind ].token.variable) = 3;
                  (dest[ n1 + 1 ].token.variable) = v;
                  (dest[ ep[0].kind + 2 ].token.variable) = 2;
                  dest[ ep[0].kind ].level = 1;
                  dest[ ep[0].kind ].kind = OPERATOR;
                  dest[ n1 + 1 ].level = 3;
                  dest[ n1 + 1 ].kind = VARIABLE;
                  dest[ ep[0].kind + 2 ].level = 3;
                  dest[ ep[0].kind + 2 ].kind = OPERATOR;
                  j = n1 + 3;
                  n1 += 3;
                  memmove( &dest[ n1 + 3 ].kind, lhs[ our ], our_nlhs << 4 );
                  n1 += our_nlhs;
                  if ( j < our_nlhs + n1 )
                  {
                    dest[ j ].level = dest[ j ].level;
                    do
                    {
                      dest[ j ].level += 3;
                      dest[ j ].level += 16;
                      j++;
                    }
                    while ( j + 1 < n1 );
                  }
                  (dest[ ep[0].kind ].token.variable) = 6;
                  (dest[ ep[0].kind + 2 ].token.variable) = 4;
                  dest[ ep[0].kind ].level = 2;
                  dest[ ep[0].kind ].kind = OPERATOR;
                  dest[ n1 + 1 ].level = 2;
                  dest[ n1 + 1 ].kind = CONSTANT;
                  dest[ n1 + 1 ].token.constant/*union*/ = (double)( cp_start );
                  ep = &dest[ n1 + 2 ];
                  dest[ n1 + 2 ].level = 1;
                  dest[ n1 + 2 ].kind = OPERATOR;
                  ep = &dest[ ep[0].kind + 3 ];
                  if ( cp_start > 1 )
                  {
                    l1 = 2;
                    d = 1.000000000000;
                    n = cp_start;
                    do
                    {
                      d *= (double)( l1 );
                      l1++;
                    }
                    while ( l1 + 1 <= n );
                  }
                  else
                    d = 1.000000000000;
                  ep->level = 1;
                  ep = 0;
                  ep->token.constant/*union*/ = d;
                  n1 += 4;
                  n1 += 4;
                  if ( i1 < n1 + 4 )
                  {
                    dest[ i1 ].level = dest[ i1 ].level;
                    do
                    {
                      dest[ i1 ].level++;
                      dest[ i1 ].level += 16;
                      i1++;
                    }
                    while ( i1 + 1 < n1 );
                  }
                  if ( simplify_flag != 0 )
                    uf_simp( dest, &n1 );
                  list_debug( 1, dest, n1, 0, 0 );
                  if ( exp_contains_infinity( dest, n1 ) != 0 )
                  {
                    error( "Result invalid because it contains infinity or NaN." );
                  }
                  else
                  {
                    if ( cp_start < order )
                    {
                      if ( cp_start >= 1 && differentiate( rhs[ our ], &our_nrhs, v ) == 0 )
                      {
                        error( "Differentiation failed." );
                      }
                      else
                      {
                        symb_flag = symblify;
                        simpa_side( rhs[ our ], &our_nrhs, 1, 1 );
                        symb_flag = 0;
                        if ( our_nrhs != 1 || rhs[ our ]->kind != 0 || ( ( ( ( *(double*)(rhs[ our ] + 8) <> 0.000000000000 ) & 69 ) >> 2 ) & 1 ) == 1 )
                        {
                          n1/*error:'i'*/ = n1;
                          i1 = n1 + 1;
                          if ( n_tokens < our_nrhs + n1 + 1 )
                            error_huge( );
                          if ( i1 >= 1 )
                          {
                            dest->kind = dest->kind;
                            j = 0;
                            do
                            {
                              dest->level++;
                              dest->kind = dest + 16;
                              j++;
                            }
                            while ( j != i1 );
                          }
                          (dest[ i1 ].token.variable) = 1;
                          dest[ i1 ].level = 1;
                          dest[ i1 ].kind = OPERATOR;
                          memmove( &dest[ i1 ].kind, rhs[ our ], our_nrhs << 4 );
                          n1 = our_nrhs + i1;
                          cp_start++;
                        }
                      }
                    }
                    __printf_chk( 1, "%ld derivative%s applied.\n", cp_start, cp_start == 1 ? "s" : "" );
                    if ( n_rhs[ cur_equation ] != 0 )
                      n_lhs[ i ] = n_lhs[ cur_equation ];
                    np[0] = n1;
                    cur_equation = i;
                    return_result( i );
                  }
                }
                k = i1;
                do
                {
                  if ( dest[ k ].kind == 1 && v == (dest[ k ].token.variable) )
                  {
                    if ( n_tokens < ( our_nlhs + n1 ) - 1 )
                      error_huge( );
                    memmove( &dest[ our_nlhs + k ].kind, &dest[ k + 1 ].kind, ( n1 + ~k ) * 16 );
                    n1 = ( our_nlhs + n1 ) - 1;
                    memmove( &dest[ k ].kind, lhs[ our ], our_nlhs << 4 );
                    k = our_nlhs + k;
                    if ( k < our_nlhs + k )
                    {
                      level = dest[ k ].level;
                      do
                      {
                        dest[ k ].level += level;
                        j++;
                      }
                      while ( j + 1 < k );
                    }
                    k = ( our_nlhs + k ) - 1;
                  }
                  k += 2;
                }
                while ( k + 2 < n1 );
                i1 = i1;
              }
            }
        }
      }
      order = -1;
      no_vars( source, nps[0], &v );
    }
  }
}
int limit_cmd( char *cp )
{
  double fp7;
  int i;
  long v = 0;
  token_type solved_v;
  token_type want;
  char *cp_start;
  if ( current_not_defined( ) == 0 )
  {
    i = next_espace( );
    if ( n_rhs[ cur_equation ] == 0 )
    {
      memmove( rhs[ cur_equation ], lhs[ cur_equation ], n_lhs[ cur_equation ] << 4 );
      n_rhs[ cur_equation ] = n_lhs[ cur_equation ];
      n_lhs[ cur_equation ] = 1;
      lhs[ cur_equation ]->level = 1;
      lhs[ cur_equation ]->kind = VARIABLE;
      parse_var( lhs[ cur_equation ] + 8, "answer" );
    }
    if ( solved_equation( cur_equation ) == 0 )
    {
      error( "The current equation is not solved for a variable." );
      return 0;
    }
    else
    {
      (solved_v.token.variable) = (lhs[ cur_equation ]->token.variable);
      solved_v.kind = lhs[ cur_equation ]->kind;
      solved_v.level = lhs[ cur_equation ]->level;
      *(int*)(ebp_2147483632 - 32) = (int)(lhs[ cur_equation ]->token.variable/*error:'l'*/);
      if ( cp[0] == 0 || parse_var2( &v, cp ) != 0 )
      {
        if ( no_vars( rhs[ cur_equation ], n_rhs[ cur_equation ], &v ) != 0 )
        {
          error( "Current expression contains no variables." );
          return 0;
        }
        else
        {
          if ( v != 0 || prompt_var( &v ) != 0 )
          {
            if ( found_var( rhs[ cur_equation ], n_rhs[ cur_equation ], v ) == 0 )
            {
              error( "Variable not found." );
              return 0;
            }
            else
            {
              if ( cp[0] == '=' )
              {
                cp[0] = skip_space( cp[1] + 1 );
              }
              if ( cp[0] != 0 )
              {
                input_column += cp[0] - cp;
                if ( parse_expr( tes, &n_tes, cp ) != 0 )
                {
                  if ( n_tes < 1 )
                  {
                  }
                }
              }
              else
              {
                list_var( v, 0 );
                __snprintf_chk( prompt_str, 80, 1, 80, "as (%s) goes to: ", var_str );
                if ( get_expr( tes, &n_tes ) != 0 )
                  goto B36;
              }
B36:              copy_espace( cur_equation, i );
              simpa_side( rhs[ i ], &n_rhs[ i ], 0, 0 );
              simp_loop( tes, &n_tes );
              if ( n_tes == 1 && tes->kind == 0 && ( ( ( ( *(double*)(tes + 8) <> 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 ) & 69 ) | ( ( ( *(double*)(tes + 8) <> 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 ) & 69 ) >> 6 ) ) & 1 ) != 1 )
                (tes->token.variable) = (zero_token.token.variable);
                (tes->token.variable/*error:'l'*/) = *(int*)(134715680);
                (tlhs->token.variable) = (one_token.token.variable);
                (tlhs->token.variable/*error:'l'*/) = *(int*)(134715056);
                (tlhs[1].token.variable) = 4;
                (tlhs[2].token.variable) = v;
              {
                (tes->token.variable) = (zero_token.token.variable);
                (tes->token.variable/*error:'l'*/) = *(int*)(134715680);
                (tlhs->token.variable) = (one_token.token.variable);
                (tlhs->token.variable/*error:'l'*/) = *(int*)(134715056);
                (tlhs[1].token.variable) = 4;
                (tlhs[2].token.variable) = v;
                n_tes = 1;
                tes->kind = zero_token.kind;
                tes->level = zero_token.level;
                tlhs->kind = one_token.kind;
                tlhs->level = one_token.level;
                tlhs[1].level = 1;
                tlhs[1].kind = OPERATOR;
                tlhs[2].level = 1;
                tlhs[2].kind = VARIABLE;
                n_tlhs = 3;
                subst_var_with_exp( rhs[ i ], &n_rhs[ i ], tlhs, 3, v );
              }
              if ( debug_level >= 0 )
                __fprintf_chk( gfp, 1, "%s\n", "Solving..." );
              want.level = 1;
              want.kind = VARIABLE;
              if ( solve_sub( &want, 1, lhs[ i ], &n_lhs[ i ], rhs[ i ], &n_rhs[ i ] ) >= 1 )
              {
                (want.token.variable) = v;
                memmove( lhs[ i ], tes, n_tes << 4 );
                n_lhs[ i ] = n_tes;
                symb_flag = symblify;
                simpa_side( rhs[ i ], &n_rhs[ i ], 0, 0 );
                symb_flag = 0;
                if ( exp_contains_nan( rhs[ i ], n_rhs[ i ] ) != 0 )
                {
                  error( "Unable to take limit; result contains NaN (Not a Number)." );
                  return 0;
                }
                else
                {
                  if ( solve_sub( &solved_v, 1, lhs[ i ], &n_lhs[ rhs[0] >> 2 ], rhs[ i ], &n_rhs[ i ] ) < 1 )
                  {
                    error( "Can't take the limit because solve failed." );
                    return 0;
                  }
                  else
                  {
                    simpa_side( rhs[ i ], &n_rhs[ i ], 0, 0 );
                    if ( exp_contains_nan( rhs[ i ], n_rhs[ i ] ) != 0 )
                    {
                      error( "Unable to take limit; result contains NaN (Not a Number)." );
                      return 0;
                    }
                    else
                    {
                      return_result( i );
                    }
                  }
                }
              }
              else
              {
                error( "Can't take the limit because solve failed." );
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
