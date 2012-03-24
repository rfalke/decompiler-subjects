#include "parse.c.h"
int point_flag;
void str_tolower( char *cp )
{
  if ( cp && cp[0] )
  {
    do
    {
      if ( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 ) + 1) & 1 ) & 255 )
      {
        /* phantom */ int __res;
        cp[0] = *(int*)(*(int*)(__ctype_tolower_loc( )) + ( cp[0] << 2 ));
      }
      cp[0] = cp + 1;
    }
    while ( cp[0] );
  }
  return;
}
void put_up_arrow( int cnt, char *cp )
{
  int i;
  if ( isatty( 0 ) && point_flag && html_flag == 0 )
  {
    if ( input_column + cnt > 0 )
    {
      i = 0;
      do
      {
        __printf_chk( 1, " " );
      }
      while ( input_column + cnt <= i + 1 );
    }
    __printf_chk( 1, "^ " );
  }
  error( cp );
  return;
}
int isvarchar( int ch )
{
  int eax;
  return 1;
}
void binary_parenthesize( token_type *p1, int n, int i )
{
  int eax;
  int edx;
  int j;
  int level;
  if ( n + -1 <= i || ( ( n/*.1_1of4*/ & 1 ) & 255 ) == 0 || ( ( i/*.1_1of4*/ & 1 ) & 255 ) == 0 )
    error_bug( "Internal error in arguments to binary_parenthesize()." );
  level = p1[ i ].level;
  p1[ i ].level++;
  p1[ i + -1 ].level++;
  if ( p1[ i ].level < p1[ i + -1 ].level && i + -2 >= 0 && level < p1[ i + -2 ].level )
  {
    j = i + -2;
    do
    {
      p1[ i + -3 + 0 ].level++;
      j += -1;
    }
    while ( j + -1 >= 0 && level < p1[ i + -3 + -1 + 0 ].level );
  }
  p1[ i + 1 ].level++;
  if ( level < p1[ i + 1 ].level && i + 2 < n && level < p1[ j ].level )
  {
    do
    {
      p1[ i + 3 + 0 ].level++;
      j++;
    }
    while ( j + 1 < n && level < p1[ i + 3 + 1 + 0 ].level );
  }
  return;
}
void handle_negate( token_type *equation, int *np )
{
  int i;
  if ( np[0] > 1 )
  {
    i = 1;
    do
    {
      if ( equation[1].token.variable == 8 )
      {
        equation[1].token.variable = 3;
        if ( negate_highest_precedence )
          binary_parenthesize( equation, np[0], i );
      }
      i += 2;
    }
    while ( i + 2 < np[0] );
  }
  return;
}
void give_priority( token_type *equation, int *np )
{
  int ebp_28;
  int i;
  if ( np[0] > 1 )
  {
    i = 1;
    do
    {
      if ( (equation->token.variable) == 7 )
        binary_parenthesize( equation, np[0], i );
      i += 2;
    }
    while ( i + 2 < np[0] );
  }
  if ( right_associative_power )
  {
    i = np[0] + -2;
    if ( np[0] + -2 > 0 )
    {
      ebp_28 = equation + ( i << 4 ) + 8;
      do
      {
        if ( *ebp_28 == 6 )
          binary_parenthesize( equation, np[0], i );
        i += -2;
        ebp_28 += -32;
      }
      while ( i + -2 > 0 );
    }
  }
  else
  {
    i = 1;
    if ( np[0] <= 1 )
    {
      return;
    }
    do
    {
      if ( (equation->token.variable) == 6 )
        binary_parenthesize( equation, np[0], i );
      i += 2;
    }
    while ( i + 2 < np[0] );
  }
  i = 1;
  if ( np[0] <= 1 )
  {
    return;
  }
  do
  {
    if ( (unsigned int)(equation->token.variable) <= 9 && ( ( 1 << (equation->token.variable) ) & 568 ) )
      binary_parenthesize( equation, np[0], i );
    i += 2;
  }
  while ( i + 2 < np[0] );
  return;
}
char *parse_section( token_type *equation, int *np, char *cp, int allow_space )
{
  int ecx;
  double fp7;
  int ebp_80;
  int n;
  int cur_level;
  int operand;
  /* phantom */ char *cp_start, *cp1;
  double d;
  int abs_count;
  int abs_array[10];
  if ( cp )
  {
    abs_count = 0;
    operand = 0;
    ebp_80 = 1;
    n = 0;
    while ( n <= n_tokens + -10 )
    {
      if ( cp[0] != ')' )
      {
        if ( cp[0] < ')' )
        {
          if ( cp[0] != '=' )
          {
            if ( '=' < cp[0] )
            {
              if ( cp[0] != '{' )
              {
                if ( cp[0] == '}' )
                {
                }
                else
                {
                  operand = operand == 0;
                  switch ( ( cp[0] + -33 ) )
                  {
                  case 91:
                    if ( operand )
                    {
                      if ( abs_count > 9 )
                      {
                        error( "Too many nested absolute values." );
                        break;
                      }
                      ebp_80 += 3;
                      abs_array[ abs_count ] = ebp_80;
                      abs_count++;
                    }
                    else
                    if ( abs_count <= 0 )
                    {
                      put_up_arrow( cp - cp, "Syntax error." );
                      break;
                    }
                    abs_count += -1;
                    if ( ebp_80 == abs_array[ abs_count ] )
                    {
                      equation[ n ].level = abs_array[ abs_count ] + -1;
                      equation[ n ].kind = OPERATOR;
                      equation[ n + 1 ].level = abs_array[ abs_count ] + -1;
                      equation[ n + 1 ].kind = CONSTANT;
                      equation[ n + 1 ].token.constant = 2.000000000000;
                      cur_level = abs_array[ abs_count ] + -2;
                      equation[ n + 2 ].level = abs_array[ abs_count ] + -2;
                      equation[ n + 2 ].kind = OPERATOR;
                      equation[ n + 3 ].level = abs_array[ abs_count ] + -2;
                      equation[ n + 3 ].kind = CONSTANT;
                      equation[ n + 3 ].token.constant = 0.500000000000;
                      n += 4;
                      ebp_80 = abs_array[ abs_count ] + -3;
                    }
                    operand = operand == 0;
                    cp++;
                    break;
                  case 0:
                    if ( operand == 0 )
                    {
                      if ( abs_array[ abs_count ]/*.1_1of4*/ == '!' && cp[2] != '!' )
                        warning( "Multifactorial not implemented, using x!! = (x!)!" );
                      equation[ n ].level = ebp_80;
                      equation[ n ].kind = OPERATOR;
                      equation[ n + 1 ].level = ebp_80;
                      equation[ n + 1 ].kind = CONSTANT;
                      equation[ n + 1 ].token.constant = 1.000000000000;
                      n += 2;
                      operand = 1;
                    }
                    break;
                  case 61:
                    if ( operand == 0 )
                    {
                      equation[ n ].level = ebp_80;
                      equation[ n ].kind = OPERATOR;
                      n++;
                    }
                    break;
                  case 9:
                    cp++;
                    if ( cp[0] == '*' )
                    {
                    }
                    else
                    {
                      if ( operand == 0 )
                      {
                        equation[ n ].level = ebp_80;
                        equation[ n ].kind = OPERATOR;
                        n++;
                      }
                    }
                    break;
                  case 14:
                    if ( operand == 0 )
                    {
                      cp++;
                      if ( cp[0] == '/' )
                      {
                        equation[ n ].level = ebp_80;
                        equation[ n ].kind = OPERATOR;
                      }
                      else
                      {
                        equation[ n ].level = ebp_80;
                        equation[ n ].kind = OPERATOR;
                      }
                      n++;
                    }
                    break;
                  case 4:
                    if ( operand == 0 )
                    {
                      equation[ n ].level = ebp_80;
                      equation[ n ].kind = OPERATOR;
                      n++;
                    }
                    break;
                  case 10:
                  case 12:
                    if ( operand == 0 )
                    {
                      equation[ n ].level = ebp_80;
                      equation[ n ].kind = OPERATOR;
                      n++;
                    }
                    strcmp( "+/-", cp );
                    if ( (unsigned char)( ccdep2 < ccdep1 ) == 0 )
                    {
                      equation[ n ].level = ebp_80;
                      equation[ n ].kind = VARIABLE;
                      next_sign( &equation[ n ].token.constant );
                      equation[ n + 1 ].level = ebp_80;
                      equation[ n + 1 ].kind = OPERATOR;
                      n += 2;
                      cp += 2;
                      operand = 0;
                    }
                    else
                    {
                      if ( operand )
                      {
                        if ( cp[0] == '-' && ( negate_highest_precedence == 0 || ( !( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( *(char*)(cp + 1) * 2 ) + 1) & 8 ) & 255 ) && cp[1] != '.' ) ) )
                        {
                          equation[ n ].kind = CONSTANT;
                          equation[ n ].token.constant = -1.000000000000;
                          equation[ n ].level = ebp_80;
                          equation[ n + 1 ].kind = OPERATOR;
                          equation[ n + 1 ].level = ebp_80;
                          n += 2;
                          operand = 0;
                        }
                        else
                        {
                          *(int*)(__errno_location( )) = 0;
                          strtod( cp, &cp );
                          if ( cp != cp )
                          {
                            if ( *(int*)(__errno_location( )) )
                            {
                              put_up_arrow( cp - cp, "Constant out of range." );
                              break;
                            }
                            equation[ n ].kind = CONSTANT;
                            equation[ n ].token.constant = strtod( cp, &cp );
                            equation[ n ].level = ebp_80;
                            n++;
                            cp = &cp[ -1 ];
                          }
                          else
                          {
                          }
                        }
                      }
                    }
                    break;
                  case 13:
                  case 15:
                  case 16:
                  case 17:
                  case 18:
                  case 19:
                  case 20:
                  case 21:
                  case 22:
                  case 23:
                  case 24:
                    if ( operand == 0 )
                    {
                      equation[ n ].level = ebp_80;
                      equation[ n ].kind = OPERATOR;
                      n++;
                      operand = 1;
                    }
                    break;
                  default:
                    if ( isvarchar( cp[0] ) == 0 )
                    {
                      put_up_arrow( cp - cp, "Unrecognized character." );
                      break;
                    }
                    if ( operand == 0 )
                    {
                      equation[ n ].level = ebp_80;
                      equation[ n ].kind = OPERATOR;
                      n++;
                      operand = 1;
                    }
                    cp1[0] = cp;
                    if ( strncasecmp( cp, "inf", 3 ) == 0 && isvarchar( cp1[3] ) == 0 )
                    {
                      equation[ n ].kind = CONSTANT;
                      equation[ n ].token.constant = 0.000000000000;
                      cp += 3;
                    }
                    else
                    {
                      equation[ n ].kind = VARIABLE;
                      cp = parse_var( &equation[ n ].token.constant, cp );
                      if ( parse_var( &equation[ n ].token.constant, cp ) == 0 )
                      {
                        break;
                      }
                    }
                    if ( cp[0] == '(' )
                    {
                      put_up_arrow( cp1 - cp - cp, "Named functions currently not implemented, except when using m4." );
                      break;
                    }
                    cp = &cp[0];
                    equation[ n ].level = ebp_80;
                    n++;
                    break;
                  }
                }
              }
              else
              {
                if ( operand )
                {
                  equation[ n ].level = ebp_80;
                  equation[ n ].kind = OPERATOR;
                  n++;
                  operand = 0;
                }
                ebp_80++;
              }
            }
            else
            {
              if ( cp[0] == ';' )
              {
              }
            }
          }
        }
        else
        {
          if ( cp[0] != ' ' )
          {
            if ( cp[0] < ' ' )
            {
              if ( cp[0] == '(' )
              {
              }
            }
            else
            if ( cp[0] != '\t' )
            {
              if ( cp[0] != '\n' && ( cp[0] & 255 ) )
              {
              }
            }
          }
          if ( allow_space == 0 )
          {
          }
        }
        if ( abs_count || ( n && operand == 0 ) )
        {
          put_up_arrow( cp - cp, "Syntax error." );
          break;
        }
        if ( ebp_80 != 1 )
        {
          put_up_arrow( cp - cp, "Unmatched parenthesis: missing )" );
          break;
        }
        if ( cp[0] != '=' )
        {
        }
        else
        {
          do
          {
            cp = cp[1] + 1;
          }
          while ( cp[2] == '=' );
        }
        np[0] = n;
        if ( ( ( n != 0 ) & 255 ) == 0 )
        {
          input_column += cp - cp;
          break;
        }
        handle_negate( equation, np );
        give_priority( equation, np );
        organize( equation, np );
        input_column += cp - cp;
        break;
      }
      ebp_80 += -1;
      if ( ebp_80 <= 0 || ( abs_count > 0 && ebp_80 < abs_array[ abs_count + 1 ] ) )
      {
        put_up_arrow( cp - cp, "Unmatched parenthesis: too many )" );
        break;
      }
      if ( operand == 0 )
      {
        put_up_arrow( cp - cp, "Syntax error." );
        break;
      }
    }
    error_huge( );
  }
  return cp;
}
char *parse_equation( int n, char *cp )
{
  int ebx;
  int esi;
  if ( cp )
  {
    if ( case_sensitive_flag == 0 )
      str_tolower( cp );
    cp = parse_section( lhs[ n ], &n_lhs[ n ], cp, 1 );
    if ( parse_section( lhs[ n ], &n_lhs[ n ], cp, 1 ) && parse_section( rhs[ n ], &n_rhs[ n ], cp, 1 ) )
    {
      cp[0] = extra_characters( cp ) != 0 ? cp : 0;
    }
  }
  return &cp[0];
}
char *parse_expr( token_type *equation, int *np, char *cp )
{
  int ebx;
  int edi;
  int i;
  char *cp1, *cp2;
  if ( cp )
  {
    if ( case_sensitive_flag == 0 )
      str_tolower( cp );
    if ( cp1[0] == '#' )
    {
      cp1[0] = skip_space( cp ) + 1;
      if ( cp2 == cp1 || cp2[0] )
      {
        error( "Error parsing equation space number." );
        cp = 0;
      }
      if ( i < 0 || n_equations <= i || n_lhs[ i ] <= 0 )
      {
        error( "No expression available in specified equation space." );
        cp = 0;
      }
      if ( n_rhs[ i ] )
      {
        memmove( equation, rhs[ i ], n_rhs[ i ] << 4 );
        np[0] = n_rhs[ i ];
      }
      else
      {
        memmove( equation, lhs[ i ], n_lhs[ i ] << 4 );
        np[0] = n_lhs[ i ];
      }
      list_proc( equation, np[0], 0 );
      __fprintf_chk( gfp, 1, "\n" );
      cp = cp2;
    }
    else
    {
      cp = parse_section( equation, np, cp, 1 );
      if ( parse_section( equation, np, cp, 1 ) )
      {
        cp = extra_characters( cp ) != 0 ? cp : 0;
      }
    }
  }
  return cp;
}
char *parse_var( long *vp, char *cp )
{
  int eax;
  int i, j;
  long vtmp;
  char buf[101];
  char *cp1;
  /* phantom */ int len;
  int (*strcmpfunc)( void ) = case_sensitive_flag == 0 ? &strcmp : &strcasecmp;
  if ( isvarchar( cp[0] ) == 0 )
  {
    error( "Invalid variable." );
  }
  else
  {
    cp1 = cp;
    i = 0;
    if ( cp[0] )
    {
      do
      {
        if ( isvarchar( cp1[1] ) )
        {
          if ( i == 100 )
          {
            error( "Variable name too long." );
          }
          else
          {
            buf[0] = cp1[0];
            cp1++;
            i++;
          }
        }
        else
          break;
      }
      while ( cp1[1] );
    }
    buf[ i ] = 0;
    if ( strcasecmp( buf, "inf" ) == 0 )
    {
      error( "Infinity cannot be used as a variable." );
    }
    else
    {
      if ( strcasecmp( buf, "nan" ) == 0 )
      {
        error( "NaN (Not a Number) cannot be directly entered." );
      }
      else
      {
        if ( strcmpfunc( ) )
        {
          if ( strncasecmp( cp, "i#", 2 ) == 0 )
            vp[0] = 3;
          else
          {
            if ( strncasecmp( cp, "e#", 2 ) == 0 )
              vp[0] = 1;
            else
            {
              if ( strncasecmp( cp, "pi#", 3 ) == 0 )
                vp[0] = 2;
              else
              {
                cp1 = cp;
                i = 0;
                if ( cp[0] )
                {
                  do
                  {
                    if ( isvarchar( cp1[1] ) || ( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( cp1[0] * 2 ) + 1) & 8 ) & 255 ) )
                    {
                      if ( i == 100 )
                      {
                        error( "Variable name too long." );
                      }
                      else
                      {
                        buf[0] = cp1[0];
                        cp1++;
                        i++;
                      }
                    }
                    else
                      break;
                  }
                  while ( cp1[1] );
                }
                buf[ i ] = 0;
                if ( strcmpfunc( ) == 0 )
                  vp[0] = 3;
                else
                {
                  if ( strcmpfunc( ) == 0 )
                    vp[0] = 1;
                  else
                  {
                    if ( strcmpfunc( ) == 0 )
                      vp[0] = 2;
                    else
                    {
                      if ( is_all( buf ) )
                      {
                        error( "\"all\" is a reserved word and may not be used as a variable name." );
                      }
                      else
                      {
                        i = 0;
                        if ( var_names[0] )
                        {
                          do
                          {
                            if ( strcmpfunc( ) == 0 )
                            {
                              vtmp = i + 65;
                              if ( vtmp == 0 )
                              {
                                break;
                              }
                              else
                                vp[0] = vtmp;
                            }
                            else
                            {
                              i++;
                            }
                          }
                          while ( var_names[0] );
                        }
                        else
                          i = 0;
                        if ( i > 7998 )
                        {
                          error( "Maximum number of variable names reached." );
                          __printf_chk( 1, "Please restart or use \"clear all\".\n" );
                        }
                        else
                        {
                          var_names[ i ] = malloc( ( ~strlen( buf ) ) * sizeof( char ) );
                          if ( var_names[ i ] )
                          {
                            memmove( var_names[ i ], buf, ~strlen( buf ) );
                            vtmp = i + 65;
                            var_names[ i + 1 ] = 0;
                            vp[0] = vtmp;
                          }
                          else
                          {
                            error( "Out of memory (can't malloc(3) variable name)." );
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          vtmp = 4;
          if ( ( vtmp/*.1_1of4*/ & 8 ) & 255 )
          {
            if ( j > 62 )
            {
              error( "Maximum subscript exceeded in special variable name." );
            }
            else
            {
              sign_array[ strtol( cp1, &cp1, 10 ) + 1 ] = 1;
              vtmp = ( ( vtmp + 1 ) << 14 ) + 4;
            }
          }
          vp[0] = vtmp;
        }
      }
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return cp1;
}
void remove_trailing_spaces( char *cp )
{
  int i = ~strlen( cp ) + -2;
  if ( ~strlen( cp ) + -2 >= 0 )
  {
    __ctype_b_loc( );
  }
  return;
}
void set_error_level( char *cp )
{
  char *cp1;
  point_flag = 1;
{
  /* phantom */ char __a0, __a1, __a2;
  if ( strpbrk( cp, ";\n\r" ) )
    cp[0] = 0;
  remove_trailing_spaces( cp );
  if ( cp[0] )
  {
    __ctype_b_loc( );
    do
    {
      if ( ( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 ) + 1) & 64 ) & 255 ) == 0 )
        point_flag = 0;
      cp1[0] = cp1 + 1;
    }
    while ( cp1[0] );
  }
  return;
}
}
int var_is_const( long v, double *dp )
{
  int ecx;
  if ( v == 1 )
  {
    if ( dp )
    {
      dp[0] = 2.718281828459;
      return 1;
    }
  }
  else
  if ( v == 2 )
  {
    if ( dp )
    {
      dp[0] = 3.141592653590;
      return 1;
    }
  }
  else
  {
    return 1;
  }
  return 1;
}
int subst_constants( token_type *equation, int *np )
{
  int i;
  int modified = 0;
  double d;
  if ( np[0] > 0 )
  {
    i = 0;
    do
    {
      if ( equation->kind == 1 && var_is_const( equation->token.variable, &d ) )
      {
        equation->kind = 0;
        equation->token.constant/*union*/ = d;
        modified = 1;
      }
      i += 2;
    }
    while ( i + 2 < np[0] );
  }
  return modified;
}
int my_strlcpy( char *dest, char *src, int n )
{
  int edi;
  /* phantom */ int len, len_src;
  memmove( dest, src, ~strlen( src ) + -1 <= n + -1 ? n + -1 : ~strlen( src ) + -1 );
  return ~strlen( src ) + -1;
}
#if 0
#endif
