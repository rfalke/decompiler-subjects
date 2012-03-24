#include "diff.c.h"
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
      if ( (unsigned int)(equation->token.variable) + -3 <= 1 )
        binary_parenthesize( equation, np[0], i );
      i += 2;
    }
    while ( i + 2 < np[0] );
  }
  return d_recurse( equation, np, 0, 1, v );
}
int d_recurse( token_type *equation, int *np, int loc, int level, long v )
{
  int eax;
  int ecx;
  int edx;
  int i, j;
  int n;
  int op;
  int oploc, endloc;
  complexs c;
  if ( equation->level < level )
  {
    if ( equation == 1 && ( ( v == 5 && ( (unsigned int)(equation->token.variable) & 16383 ) > 4 ) || v == (equation->token.variable) ) )
    {
      equation = 0;
      equation->token.constant/*union*/ = 1.000000000000;
    }
    equation = 0;
    equation->token.constant/*union*/ = 0.000000000000;
  }
  else
  {
    endloc = loc + 1;
    if ( loc + 1 < np && level <= equation->level )
    {
      oploc = endloc;
      op = 0;
      do
      {
        if ( level == equation->level )
        {
          if ( op > 2 )
          {
            error_bug( "Internal error in d_recurse(): differentiating with unparenthesized operators is not allowed." );
            break;
          }
          op = (equation->token.variable);
          oploc = endloc;
        }
        endloc += 2;
      }
      while ( np <= endloc + 2 || equation[5].level < level );
      switch ( op )
      {
      case 5:
        if ( loc < endloc )
        {
          i = loc;
          oploc = level;
          do
          {
            if ( equation == 1 && ( ( v == 5 && ( (unsigned int)(equation[2].token.variable) & 16383 ) > 4 ) || v == (equation->token.variable) ) )
            {
              break;
            }
            i += 2;
          }
          while ( endloc <= i + 2 );
          level = oploc;
        }
        memmove( equation + ( loc << 4 ) + 16, equation + ( endloc << 4 ), ( np - endloc ) << 4 );
        np = np + ( loc - endloc ) + 1;
        equation->level = level;
        equation = 0;
        equation->token.constant/*union*/ = 0.000000000000;
        break;
      case 0:
      case 1:
      case 2:
        break;
      case 3:
        op = endloc - loc;
        if ( n_tokens < np + ( endloc - loc ) + 1 )
          error_huge( );
        if ( loc < endloc )
        {
          i = loc;
          do
          {
            equation->level++;
            i++;
          }
          while ( i + 1 < endloc );
        }
        memmove( equation + ( endloc << 4 ) + 16, equation + ( loc << 4 ), ( np - loc ) << 4 );
        np = np[0] + 1;
        equation->level = level;
        equation = 2;
        level = level + 2;
        if ( d_recurse( equation, np, endloc + ( oploc - loc ) + 2, equation + ( endloc << 4 ) + 4 + 2, v ) )
        {
          return equation;
          d_recurse( equation, np, loc, level + 2, v );
        }
        break;
      case 4:
        op = endloc - loc;
        oploc = endloc - oploc;
        if ( n_tokens < np + ( endloc - loc ) + 3 + ( endloc - oploc ) )
          error_huge( );
        if ( loc < endloc )
        {
          i = loc;
          do
          {
            equation->level += 2;
            i++;
          }
          while ( i + 1 < endloc );
        }
        j = op + 1;
        memmove( equation + ( endloc << 4 ) + 16, equation + ( loc << 4 ), ( np - loc ) << 4 );
        np = &np[0];
        equation->level = level + 1;
        equation = 2;
        op = j + endloc;
        memmove( equation + ( ( oploc + op ) * 16 ) + 32, equation + ( ( j + endloc ) << 4 ), ( np - op ) << 4 );
        np = np[0] + 2;
        equation->level = level;
        equation = 2;
        memmove( equation + ( op << 4 ) + 16, equation + ( oploc << 4 ) + 16, ( endloc + ~oploc ) << 4 );
        equation->level = level + 1;
        equation = 2;
        equation[1].level = level + 1;
        equation[1].kind = CONSTANT;
        equation[1].token.constant/*union*/ = 2.000000000000;
        level = level + 3;
        if ( d_recurse( equation, np, endloc + ( oploc - loc ) + 2, level + 3 + 3, v ) )
        {
          return equation;
          d_recurse( equation, np, loc, level + 3, v );
        }
        break;
      case 6:
        if ( endloc <= oploc )
        {
        }
        else
        {
          i = oploc;
          op = oploc;
          do
          {
            if ( equation == 1 && ( ( v == 5 && ( (unsigned int)(equation[1].token.variable) & 16383 ) > 4 ) || v == (equation[1].token.variable) ) )
            {
              *ebp_136 = equation + ( loc << 4 );
              if ( parse_complex( equation + ( loc << 4 ), op - loc, &c ) == 0 )
              {
                break;
              }
              oploc = ( endloc + 6 ) - op;
              if ( n_tokens < np + ( ( endloc + 6 ) - op ) )
                error_huge( );
              op = equation + ( endloc << 4 );
              memmove( equation + ( ( oploc + endloc ) << 4 ), &op, ( np - endloc ) << 4 );
              np = &np[0];
              op = level;
              op = 2;
              op = 3;
              op = level + 1;
              equation[1].level = level + 1;
              equation[1].kind = CONSTANT;
              equation[1].token.constant/*union*/ = c.re;
              equation[2].level = level + 1;
              equation[2].kind = OPERATOR;
              equation[3].level = level + 2;
              equation[3].kind = CONSTANT;
              equation[3].token.constant/*union*/ = c.im;
              equation[4].level = level + 2;
              equation[4].kind = OPERATOR;
              equation[5].level = level + 2;
              equation[5].kind = VARIABLE;
              equation[6].level = level;
              equation[6].kind = OPERATOR;
              n = endloc + 7;
              memmove( equation + ( ( endloc + 7 ) << 4 ), equation + ( op << 4 ) + 16, ( endloc + ~op ) << 4 );
              if ( loc < endloc )
              {
                i = loc;
                do
                {
                  equation->level++;
                  i++;
                }
                while ( i + 1 < endloc );
              }
              return equation;
              d_recurse( equation, np, n, op, v );
              break;
            }
            else
            {
              i++;
            }
          }
          while ( i + 1 < endloc );
        }
        oploc = endloc + ~op;
        memmove( scratch, equation + ( op << 4 ) + 16, ( endloc + ~op ) << 4 );
        scratch->level = level;
        scratch->kind = 2;
        scratch->token.variable = 3;
        op = oploc + 1;
        if ( n_tokens < oploc + 1 + ( endloc - loc ) + 2 )
          error_huge( );
        memmove( &scratch[ op ].kind, equation + ( loc << 4 ), ( endloc - loc ) << 4 );
        n = op + ( op - loc ) + 1;
        i = op;
        if ( op < op + ( op - loc ) + 1 )
        {
          op = op << 4;
          do
          {
            scratch->level++;
            i++;
          }
          while ( i + 1 < n );
          i = op + ( n - ( endloc + ~op ) ) + -1;
        }
        n += oploc;
        if ( i < oploc + n )
        {
          do
          {
            scratch->level += 2;
            i++;
          }
          while ( i + 1 < n );
        }
        scratch[ n ].level = level + 2;
        scratch[ n ].kind = OPERATOR;
        scratch[ n + 1 ].level = level + 2;
        scratch[ n + 1 ].kind = CONSTANT;
        scratch[ n + 1 ].token.constant = 1.000000000000;
        n += 2;
        if ( n_tokens < n + 2 + ( op - loc ) + 1 )
          error_huge( );
        scratch[ n ].level = level;
        scratch[ n ].kind = OPERATOR;
        n = n + 1;
        op = n + 1;
        memmove( &scratch[ n + 1 ].kind, equation + ( loc << 4 ), ( op - loc ) << 4 );
        n = ( op - loc ) + op;
        if ( n_tokens < ( op - loc ) + op + ( np[0] - endloc ) )
          error_huge( );
        oploc = loc + n;
        memmove( equation + ( oploc << 4 ), equation + ( endloc << 4 ), ( np - endloc ) << 4 );
        np += ( oploc - endloc ) / 4;
        memmove( equation + ( loc << 4 ), scratch, ( n << 4 ) << 4 );
        level = level + 1;
        return equation;
        d_recurse( equation, np, loc + op, level + 1 + 1, v );
        break;
      }
    }
    i = loc;
    np[0] = np;
    while ( i < np[0] && level <= equation->level )
    {
      if ( equation[2].kind != 2 )
      {
        if ( d_recurse( equation, np, i, loc, v ) == 0 )
        {
          break;
        }
        i++;
        if ( endloc + 1 < np[0] && level < equation->level )
        {
          do
          {
            i += 2;
          }
          while ( i + 2 < np[0] && level < equation[5].level );
        }
      }
      else
        i++;
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
    if ( n_rhs[ cur_equation ] )
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
    if ( cp[0] )
    {
      if ( is_all( cp ) )
      {
        cp = skip_param( cp );
        v = 5;
      }
      else
      {
        if ( isvarchar( cp[0] ) )
        {
          cp = parse_var2( &v, cp );
          if ( parse_var2( &v, cp ) == 0 )
          {
            return return_result( i );
          }
        }
      }
      if ( cp[0] )
      {
        if ( cp[0] || decstrtol( cp, &cp ) <= 0 )
        {
          error( "The order must be a positive integer." );
          return return_result( i );
        }
        if ( no_vars( source, nps[0], &v ) )
        {
          error( "Current expression contains no variables; the derivative would be zero." );
          return return_result( i );
        }
        if ( v == 0 && prompt_var( &v ) == 0 )
        {
          return return_result( i );
        }
        if ( v != 5 && found_var( source, nps[0], v ) == 0 )
        {
          error( "Variable not found; the derivative would be zero." );
          return return_result( i );
        }
        if ( debug_level >= 0 )
        {
          list_var( v, 0 );
          if ( n_rhs[ cur_equation ] )
            __printf_chk( 1, "Differentiating the RHS with respect to (%s)", var_str );
          else
            __printf_chk( 1, "Differentiating with respect to (%s)", var_str );
          if ( 1 != 1 )
            __printf_chk( 1, " %ld times", 1 );
          if ( simplify_flag )
            __printf_chk( 1, " and simplifying...\n" );
          else
            __printf_chk( 1, "...\n" );
        }
        memmove( dest, source, nps[0] << 4 );
        n1 = nps[0];
        if ( 1 > 0 )
        {
          l1 = 0;
          do
          {
            if ( differentiate( dest, &n1, v ) == 0 )
            {
              error( "Differentiation failed." );
              break;
            }
            if ( simplify_flag )
              simpa_side( dest, &n1, 1, 0 );
            else
              elim_loop( dest, &n1 );
            l1++;
          }
          while ( l1 + 1 < 1 );
        }
        np[0] = n1;
        if ( n_rhs[ cur_equation ] )
        {
          memmove( lhs[ i ], lhs[ cur_equation ], n_lhs[ cur_equation ] << 4 );
          n_lhs[0] = n_lhs[0];
          if ( solved && isvarchar( 39 ) )
          {
            list_var( lhs[ i ]->token.variable, 0 );
            if ( 1 > 0 && len <= 98 )
            {
              l1 = 0;
              order = 1;
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
    if ( n_rhs[ cur_equation ] )
    {
      if ( solved_equation( cur_equation ) == 0 )
      {
        error( "The current equation is not solved for a variable." );
        return return_result( cur_equation );
      }
      source = rhs[ cur_equation ];
      n = n_rhs[ cur_equation ];
    }
    else
    {
      source = lhs[ solved_equation( next_espace( ) ) ];
      n = n_lhs[ solved_equation( next_espace( ) ) ];
    }
    if ( cp[0] )
    {
      if ( isvarchar( cp[0] ) )
      {
        cp = parse_var2( &v, cp );
        if ( parse_var2( &v, cp ) == 0 )
        {
          return return_result( cur_equation );
        }
      }
      if ( cp[0] )
      {
        order = decstrtol( cp, &cp );
        if ( cp[0] || order <= 0 )
        {
          error( "The order must be a positive integer." );
          return return_result( cur_equation );
        }
        if ( no_vars( source, n, &v ) )
        {
          error( "Current expression contains no variables." );
          return return_result( cur_equation );
        }
        if ( v == 0 && prompt_var( &v ) == 0 )
        {
          return return_result( cur_equation );
        }
        if ( found_var( source, n, v ) == 0 )
        {
          error( "Variable not found; the derivative would be zero." );
          return return_result( cur_equation );
        }
        memmove( rhs[ i ], source, n << 4 );
        if ( order > 0 )
        {
          l1 = 0;
          do
          {
            if ( differentiate( rhs[0], &n, v ) == 0 )
            {
              error( "Differentiation failed." );
              break;
            }
            simpa_side( rhs[0], &n, 1, 0 );
            l1++;
          }
          while ( l1 + 1 < order );
        }
        if ( found_var( rhs[ i ], n, v ) == 0 )
        {
          error( "There are no solutions." );
          return return_result( cur_equation );
        }
        n_rhs[ i ] = n;
        n_lhs[ i ] = 1;
        lhs[ i ]->kind = zero_token.kind;
        lhs[ i ]->level = zero_token.level;
        lhs[ i ]->token.variable = zero_token.token.constant;
        lhs[ i ]->token.variable = *(int*)(134715680);
        cur_equation = i;
        want.level = 1;
        want.kind = VARIABLE;
        if ( solve_sub( &want, 1, lhs[ i ], &n_lhs[ i ], rhs[ i ], &n_rhs[ i ] ) <= 0 )
        {
          error( "Solve failed." );
          return return_result( cur_equation );
        }
        simpa_side( rhs[ i ], &n_rhs[ i ], 0, 0 );
        return_result( cur_equation );
      }
    }
    order = 1;
  }
}
int taylor_cmd( char *cp )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  long v = 0;
  int i, j, k, i1;
  int level;
  long l1, n, order;
  double d;
  char *cp_start = cp, *cp1, buf[4096];
  int our;
  int our_nlhs, our_nrhs;
  token_type *ep, *source, *dest;
  int n1, *nps, *np;
  int simplify_flag;
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
    n_lhs[0] = n_lhs[0];
    n_rhs[ i ] = 0;
    our = alloc_next_espace( );
    n_lhs[0] = 0;
    if ( our < 0 )
    {
      error( "Out of free equation spaces." );
      if ( 0 ^ 0 )
      {
        return return_result( i );
      }
      return return_result( i );
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
            goto B25;
        }
B25:;
        if ( cp[0] )
        {
          order = decstrtol( cp, &cp1 );
          if ( cp1 != skip_param( cp ) || order < 0 )
          {
            error( "Positive integer required for order." );
          }
          else
            cp = skip_param( cp );
            no_vars( source, nps[0], &v );
            if ( v || prompt_var( &v ) )
            {
              if ( found_var( source, nps[0], v ) == 0 )
                warning( "Variable not found." );
              memmove( rhs[ our ], source, nps[0] << 4 );
              our_nrhs = nps[0];
              uf_simp( rhs[0], &our_nrhs );
              if ( differentiate( rhs[0], &our_nrhs, v ) == 0 )
              {
                error( "Differentiation failed." );
              }
              else
              {
                if ( cp[0] )
                {
                  input_column = cp[0] - cp_start;
                  cp = parse_expr( lhs[ our ], &our_nlhs, cp );
                  if ( cp && our_nlhs > 0 )
                    goto B54;
                }
                else
                {
                  list_var( v, 0 );
                  __printf_chk( 1, "Taylor series expansion around %s = point.\n", var_str );
                  my_strlcpy( prompt_str, "Enter point: ", 80 );
                  if ( get_expr( lhs[ our ], &our_nlhs ) )
                    goto B54;
                }
B54:;
                if ( order < 0 )
                {
                  my_strlcpy( prompt_str, "Enter order (number of derivatives to take): ", 80 );
                  cp1 = get_string( buf, 4096 );
                  if ( cp1 )
                  {
                    if ( cp1[0] )
                    {
                      order = decstrtol( cp1, &cp );
                      if ( cp[0] || order < 0 )
                      {
                        error( "Positive integer required for order." );
                      }
                    }
                    else
                    {
                      __printf_chk( 1, "Derivatives will be taken until they reach zero...\n" );
                      order = 0x7ffffffe;
                    }
                  }
                }
                __printf_chk( 1, "Computing the Taylor series" );
                if ( n_rhs[ cur_equation ] )
                  __printf_chk( 1, " of the RHS" );
                if ( simplify_flag )
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
                    k = i1;
                    do
                    {
                      dest[ i1 ].level++;
                      dest[ i1 ].level += 16;
                      k++;
                    }
                    while ( k + 1 < n1 );
                  }
                  dest[ ep ].level = 1;
                  dest[ ep ].kind = OPERATOR;
                  dest[ n1 + 1 ].level = 3;
                  dest[ n1 + 1 ].kind = VARIABLE;
                  dest[ &ep->kind ].level = 3;
                  dest[ &ep->kind ].kind = OPERATOR;
                  j = n1 + 3;
                  n1 += 3;
                  memmove( &dest[ n1 + 3 ].kind, lhs[ our ], our_nlhs << 4 );
                  n1 += our_nlhs;
                  if ( j < our_nlhs + n1 )
                  {
                    do
                    {
                      dest[ j ].level += 3;
                      dest[ j ].level += 16;
                      j++;
                    }
                    while ( j + 1 < n1 );
                  }
                  dest[ ep ].level = 2;
                  dest[ ep ].kind = OPERATOR;
                  dest[ n1 + 1 ].level = 2;
                  dest[ n1 + 1 ].kind = CONSTANT;
                  dest[ n1 + 1 ].token.constant = (double)( cp_start );
                  ep = &dest[ n1 + 2 ];
                  dest[ n1 + 2 ].level = 1;
                  dest[ n1 + 2 ].kind = OPERATOR;
                  ep = &dest[ &ep->kind ];
                  if ( cp_start > 1 )
                  {
                    l1 = 2;
                    n = cp_start;
                    do
                    {
                      l1++;
                    }
                    while ( l1 + 1 <= n );
                  }
                  else
                  {
                  }
                  ep->level = 1;
                  ep = 0;
                  ep->token.constant/*union*/ = 1.000000000000 * (double)( l1 );
                  n1 += 4;
                  n1 += 4;
                  if ( i1 < n1 + 4 )
                  {
                    do
                    {
                      dest[ i1 ].level++;
                      dest[ i1 ].level += 16;
                      i1++;
                    }
                    while ( i1 + 1 < n1 );
                  }
                  if ( simplify_flag )
                    uf_simp( dest, &n1 );
                  list_debug( 1, dest, n1, 0, 0 );
                  if ( exp_contains_infinity( dest, n1 ) )
                  {
                    error( "Result invalid because it contains infinity or NaN." );
                  }
                  else
                  {
                    if ( cp_start < order )
                    {
                      if ( cp_start > 0 && differentiate( rhs[ our ], &our_nrhs, v ) == 0 )
                      {
                        error( "Differentiation failed." );
                      }
                      else
                      {
                        symb_flag = symblify;
                        simpa_side( rhs[ our ], &our_nrhs, 1, 1 );
                        symb_flag = 0;
                        if ( our_nrhs != 1 || rhs[ our ]->kind || rhs[ our ]->token || *(double*)(edx + 8) )
                        {
                          i1 = n1;
                          i1 = n1 + 1;
                          if ( n_tokens < our_nrhs + n1 + 1 )
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
                            while ( j != i1 );
                          }
                          dest[ n1 ].level = 1;
                          dest[ n1 ].kind = OPERATOR;
                          memmove( &dest[ i1 ].kind, rhs[ our ], our_nrhs << 4 );
                          n1 = our_nrhs + i1;
                          cp_start++;
                        }
                      }
                    }
                    __printf_chk( 1, "%ld derivative%s applied.\n", cp_start, cp_start == 1 ? "s" : "" );
                    if ( n_rhs[ cur_equation ] )
                      n_lhs[ i ] = n_lhs[ cur_equation ];
                    np[0] = n1;
                    cur_equation = i;
                    return_result( i );
                  }
                }
                k = i1;
                do
                {
                  if ( dest[ k ].kind == 1 && v == (dest[ k + 0 ].token.variable) )
                  {
                    if ( n_tokens < our_nlhs + n1 + -1 )
                      error_huge( );
                    memmove( &dest[ our_nlhs + k ].kind, &dest[ k + 1 ].kind, ( n1 + ~k ) << 4 );
                    n1 = our_nlhs + n1 + -1;
                    memmove( &dest[ k ].kind, lhs[ our ], our_nlhs << 4 );
                    k += our_nlhs;
                    if ( k < k + our_nlhs )
                    {
                      level = dest[ k + 0 ].level;
                      do
                      {
                        dest[ k + 0 ].level += level;
                        j++;
                      }
                      while ( j + 1 < k );
                    }
                    k = our_nlhs + k + -1;
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
  int ebx;
  int esi;
  double fp7;
  int i;
  long v = 0;
  token_type solved_v;
  token_type want;
  /* phantom */ char *cp_start;
  if ( current_not_defined( ) == 0 )
  {
    i = next_espace( );
    if ( n_rhs[ cur_equation ] == 0 )
    {
      memmove( rhs[ cur_equation ], lhs[ cur_equation ], n_lhs[ cur_equation ] << 4 );
      n_rhs[ cur_equation ] = n_lhs[0];
      n_lhs[0] = 1;
      lhs[0]->level = 1;
      lhs[0]->kind = 1;
      parse_var( lhs[0] + 8, "answer" );
    }
    if ( solved_equation( cur_equation ) == 0 )
    {
      error( "The current equation is not solved for a variable." );
      return return_result( i );
    }
    solved_v.kind = lhs[ cur_equation ]->kind;
    solved_v.level = lhs[ cur_equation ]->level;
    *(int*)(ebp_2147483632 + -32) = lhs[ cur_equation ]->token.variable;
    if ( cp[0] && parse_var2( &v, cp ) == 0 )
    {
      return return_result( i );
    }
    if ( no_vars( rhs[ cur_equation ], n_rhs[ cur_equation ], &v ) )
    {
      error( "Current expression contains no variables." );
      return return_result( i );
    }
    if ( v == 0 && prompt_var( &v ) == 0 )
    {
      return return_result( i );
    }
    if ( found_var( rhs[ cur_equation ], n_rhs[ cur_equation ], v ) == 0 )
    {
      error( "Variable not found." );
      return return_result( i );
    }
    if ( cp[0] == '=' )
    {
      cp[0] = skip_space( cp + 1 + 1 );
    }
    if ( cp[0] )
    {
      input_column += cp - cp;
      if ( parse_expr( tes, &n_tes, cp ) == 0 )
      {
        return return_result( i );
      }
      if ( n_tes <= 0 )
      {
      }
    }
    else
    {
      list_var( v, 0 );
      __snprintf_chk( prompt_str, 80, 1, 80, "as (%s) goes to: ", var_str );
      if ( get_expr( tes, &n_tes ) == 0 )
      {
        return return_result( i );
      }
    }
    copy_espace( cur_equation, i );
    simpa_side( rhs[ i ], &n_rhs[ i ], 0, 0 );
    simp_loop( tes, &n_tes );
    if ( n_tes == 1 && tes->kind == 0 && 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 < tes->token.constant/*union*/ )
    {
      n_tes = 1;
      tes->kind = zero_token.kind;
      tes->level = zero_token.level;
      tes->token.variable = zero_token.token.constant;
      tes->token.variable = *(int*)(134715680);
      tlhs->kind = one_token.kind;
      tlhs->level = one_token.level;
      tlhs->token.variable = one_token.token.constant;
      tlhs->token.variable = *(int*)(134715056);
      tlhs[1].level = 1;
      tlhs[1].kind = 2;
      tlhs[1].token.variable = 4;
      tlhs[2].level = 1;
      tlhs[2].kind = 1;
      tlhs[2].token.variable = v;
      n_tlhs = 3;
      subst_var_with_exp( rhs[ i ], &n_rhs[ i ], tlhs, 3, v );
    }
    if ( debug_level >= 0 )
      __fprintf_chk( gfp, 1, "%s\n", "Solving..." );
    want.level = 1;
    want.kind = VARIABLE;
    if ( solve_sub( &want, 1, lhs[ i ], &n_lhs[ i ], rhs[ i ], &n_rhs[ i ] ) <= 0 )
    {
      error( "Can't take the limit because solve failed." );
      return return_result( i );
    }
    memmove( lhs[ i ], tes, n_tes << 4 );
    n_lhs[ i ] = n_tes;
    symb_flag = symblify;
    simpa_side( rhs[ i ], &n_rhs[ i ], 0, 0 );
    symb_flag = 0;
    if ( exp_contains_nan( rhs[0], n_rhs[ i ] ) )
    {
      error( "Unable to take limit; result contains NaN (Not a Number)." );
      return return_result( i );
    }
    if ( solve_sub( &solved_v, 1, lhs[ i ], &n_lhs[ rhs[0] >> 2 ], rhs[ i ], &n_rhs[ i ] ) <= 0 )
    {
      error( "Can't take the limit because solve failed." );
      return return_result( i );
    }
    simpa_side( rhs[ i ], &n_rhs[ i ], 0, 0 );
    if ( exp_contains_nan( rhs[0], n_rhs[ i ] ) )
    {
      error( "Unable to take limit; result contains NaN (Not a Number)." );
      return return_result( i );
    }
    return_result( i );
  }
}
#if 0
#endif
