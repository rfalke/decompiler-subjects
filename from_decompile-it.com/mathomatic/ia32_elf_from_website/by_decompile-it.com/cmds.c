#include "cmds.c.h"
static int opt_en[100];
static int last_temp_var;
int plot_cmd( char *cp )
{
  int edx;
  char cl[4096];
  int free_cp;
  if ( security_level )
  {
    error( "Command disabled." );
  }
  else
  {
    free_cp = 0;
    if ( cp[0] == 0 )
    {
      if ( current_not_defined( ) || cp == 0 )
      {
      }
      else
    {
      /* phantom */ char __a0, __a1, __a2;
      if ( cp[0] )
        free_cp = 1;
      else
        free_cp = 1;
        if ( strchr( cp[0], 'y' ) )
        {
          __printf_chk( 1, "Performing 3D surface plot...\n" );
          __snprintf_chk( cl, 4096, 1, 4096, "echo 'set grid; splot %s'|gnuplot -persist", cp );
        }
        else
        {
          __printf_chk( 1, "Performing 2D plot...\n" );
          __snprintf_chk( cl, 4096, 1, 4096, "echo 'set grid; plot %s'|gnuplot -persist", cp );
        }
        if ( free_cp )
          free( cp );
        if ( shell_out( cl ) )
        {
          error( "Error trying to run gnuplot." );
          __printf_chk( 1, "Command line = \"%s\".\n", cl );
        }
        else
        {
          if ( debug_level <= 0 )
            goto B16;
          else
          {
            __printf_chk( 1, "Command line = \"%s\".\n", cl );
          }
        }
    }
    }
    if ( cp[0] != '\'' && cp[0] != '\\' )
    {
      cp[0] = cp[0];
      do
      {
        cp[0] = cp + 1;
        if ( cp[0] == 0 )
          continue;
        else
      }
      while ( cp[0] != '\'' && cp[0] != '\\' );
    }
    else
      cp[0] = cp[0];
    if ( cp == 0 )
    {
    }
    else
    {
      error( "Invalid character in expression string." );
      if ( free_cp )
      {
        free( cp );
      }
      else
      {
      }
    }
  }
B16:;
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return 1;
}
int version_cmd( char *cp )
{
  int rv = version_report( );
  __fprintf_chk( gfp, 1, "\nMathomatic is GNU LGPL version 2.1 licensed software,\n" );
  __fprintf_chk( gfp, 1, "meaning it is free software that comes with no warranty.\n" );
  __fprintf_chk( gfp, 1, "Type \"help copyright\" for the copyright and license.\n" );
  __fprintf_chk( gfp, 1, "\nThe newest version of Mathomatic is always available at\n" );
  __fprintf_chk( gfp, 1, "the Mathomatic website: http://mathomatic.org\n" );
  __fprintf_chk( gfp, 1, "Feedback and contributions are welcomed.\n" );
  return rv;
}
int version_report( void )
{
  __fprintf_chk( gfp, 1, "Mathomatic version %s\n", "15.1.1" );
  __fprintf_chk( gfp, 1, "Compile-time defines used: " );
  __fprintf_chk( gfp, 1, "UNIX " );
  __fprintf_chk( gfp, 1, "READLINE " );
  __fprintf_chk( gfp, 1, "\n\nThe current expression array size is %d tokens,\n", n_tokens );
  __fprintf_chk( gfp, 1, "making the maximum memory usage %ld kilobytes.\n", (/*HI*/int)( ( n_tokens * 3296 ) * 0x10624dd3 ) >> 6 );
  __fprintf_chk( gfp, 1, "The current security level is %d.\n", security_level );
  return 1;
}
int solve_cmd( char *cp )
{
  int ecx;
  int ebp_4156;
  int i, j;
  char buf[4096];
  long v;
  token_type want;
  int diff_sign;
  int verify_flag, plural_flag, once_through, contains_infinity;
  char *cp1;
  if ( cur_equation < 0 || n_equations <= cur_equation || n_lhs[ cur_equation ] <= 0 || n_rhs[ cur_equation ] <= 0 )
  {
    error( "No current equation." );
  }
  else
  {
    i = next_espace( );
    verify_flag = 0;
    if ( strcmp_tospace( cp, "verify" ) == 0 )
    {
      cp[0] = skip_param( cp );
      verify_flag/*.1_2of4*/ = 1;
    }
    if ( !strcmp_tospace( cp, "for" ) && cp1[0] )
      cp[0] = cp1;
    else
    {
      cp[0] = cp;
      if ( cp[0] == 0 )
      {
        my_strlcpy( prompt_str, "Enter variable to solve for: ", 80 );
        cp[0] = get_string( buf, 4096 );
        if ( get_string( buf, 4096 ) == 0 )
        {
        }
      }
    }
    if ( verify_flag )
    {
      if ( parse_var2( &v, cp ) && extra_characters( cp ) == 0 )
      {
        copy_espace( cur_equation, i );
        want.level = 1;
        want.kind = VARIABLE;
        if ( solve_sub( &want, 1, lhs[ cur_equation ], &n_lhs[ cur_equation ], rhs[ cur_equation ], &n_rhs[ cur_equation ] ) > 0 )
        {
          return_result( cur_equation );
        }
        else
          __printf_chk( 1, "Solve failed.\n" );
      }
      else
      {
      }
    }
    else
    {
      if ( parse_equation( i, cp ) && solve_espace( i, cur_equation ) )
        return_result( cur_equation );
    }
    n_lhs[ i ] = 0;
    n_rhs[ i ] = 0;
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return 2;
}
int sum_cmd( char *cp )
{
  int eax;
  return sum_product( cp, edx );
}
int product_cmd( char *cp )
{
  int eax;
  return sum_product( cp, edx );
}
int sum_product( char *cp, int product_flag )
{
  int eax;
  double fp5;
  double fp6;
  double fp7;
  int i;
  long v = 0;
  double start, end, step;
  int result_equation;
  int n, ns;
  token_type *dest, *source;
  int count_down;
  char *cp1, buf[4096];
  if ( current_not_defined( ) == 0 )
  {
    result_equation = next_espace( );
    ns = n_rhs[ cur_equation ];
    if ( n_rhs[ cur_equation ] )
    {
      source = rhs[ cur_equation ];
      dest = rhs[ result_equation ];
    }
    else
    {
      ns = n_lhs[ cur_equation ];
      source = lhs[ cur_equation ];
      dest = lhs[ result_equation ];
    }
    if ( cp[0] )
    {
      cp = parse_var2( &v, cp );
      if ( cp )
        goto B11;
    }
B11:;
    if ( no_vars( source, ns, &v ) )
    {
      error( "Current expression contains no variables." );
      if ( 0 ^ 0 )
      {
        return return_result( result_equation );
      }
      return return_result( result_equation );
    }
    else
    {
      if ( v || prompt_var( &v ) )
      {
        if ( found_var( source, ns, v ) == 0 )
        {
          error( "Variable not found." );
        }
        else
        {
          if ( cp[0] )
          {
            if ( cp[0] == '=' )
              cp++;
            count_down = cp;
          }
          else
          {
            list_var( v, 0 );
            __snprintf_chk( prompt_str, 80, 1, 80, "%s = ", var_str );
            count_down = get_string( buf, 4096 );
            if ( count_down )
              goto B30;
          }
B30:;
          start = strtod( &count_down, &cp );
          if ( cp == count_down )
          {
            error( "Number expected." );
          }
          else
          {
            if ( abs( start ) <= 1000000000000000.000000000000 )
            {
              error( "Number too large." );
            }
            else
            {
              cp = skip_space( cp );
              if ( strcmp_tospace( cp, "to" ) == 0 )
              {
                cp = skip_param( cp );
              }
              count_down = cp;
              if ( cp[0] == 0 )
              {
                my_strlcpy( prompt_str, "To: ", 80 );
                count_down = get_string( buf, 4096 );
                if ( count_down )
                  goto B47;
              }
B47:;
              end = strtod( &count_down, &cp );
              if ( cp == count_down )
              {
                error( "Number expected." );
              }
              else
              {
                if ( abs( end ) <= 1000000000000000.000000000000 )
                {
                  error( "Number too large." );
                }
                else
                {
                  count_down = skip_space( cp );
                  cp = skip_space( cp );
                  if ( cp[0] )
                  {
                    strtod( &count_down, &cp );
                    if ( cp != count_down )
                    {
                      step = abs( strtod( &count_down, &cp ) );
                      if ( 0.000000000000 <= step )
                      {
                      }
                      else
                      if ( step <= 1000000000000000.000000000000 )
                        goto B67;
                    }
                    else
                    {
                    }
B67:;
                    error( "Invalid step." );
                  }
                  else
                    step = 1.000000000000;
                  if ( extra_characters( cp ) == 0 )
                  {
                    count_down = start < end;
                    do
                    {
                    }
                    while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(( abs( start - end ) / step ),1.000000000000) ),1.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
                    if ( ( rem(( abs( start - end ) / step ),1.000000000000) ) == ( rem(( abs( start - end ) / step ),1.000000000000) ) )
                    {
                      if ( ( rem(( abs( start - end ) / step ),1.000000000000) ) || ( rem(( abs( start - end ) / step ),1.000000000000) ) )
                        warning( "End value not reached." );
                      if ( product_flag )
                      {
                        dest = &one_token;
                        dest->level = one_token.level;
                      }
                      else
                      {
                        dest = &zero_token;
                        dest->level = zero_token.level;
                      }
                      n = 1;
                      while ( ( ( ( ( end <> start ) & 1 ) == 0 ) & 255 ) == 0 )
                      {
                        if ( n_tokens < ns + n + 1 )
                          error_huge( );
                        memmove( tlhs, source, ns << 4 );
                        n_tlhs = ns;
                        if ( ns > 0 )
                        {
                          i = 0;
                          do
                          {
                            if ( tlhs[ i ].kind == 1 && v == (tlhs[ i + 0 ].token.variable) )
                            {
                              tlhs[ i ].kind = CONSTANT;
                              tlhs->token.constant/*union*/ = start;
                            }
                            i += 2;
                          }
                          while ( i + 2 < n_tlhs );
                          if ( n_tlhs > 0 )
                          {
                            i = 0;
                            do
                            {
                              i++;
                              tlhs[ i ].level++;
                            }
                            while ( i + 1 < n_tlhs );
                          }
                        }
                        if ( n > 0 )
                        {
                          i = 0;
                          do
                          {
                            dest->level++;
                            dest++;
                            i++;
                          }
                          while ( i + 1 < n );
                        }
                        dest = 2;
                        dest->level = 1;
                        if ( product_flag )
                        {
                        }
                        else
                        {
                        }
                        n++;
                        memmove( dest + ( ( n + 1 ) << 4 ), tlhs, n_tlhs << 4 );
                        n += n_tlhs;
                        calc_simp( dest, &n );
                        if ( count_down == 0 )
                        {
                          start += step;
                        }
                        else
                        {
                          start -= step;
                        }
                      }
                      if ( n_rhs[ cur_equation ] )
                      {
                        n_rhs[ result_equation ] = n;
                        memmove( lhs[ result_equation ], lhs[ cur_equation ], n_lhs[ cur_equation ] << 4 );
                        n_lhs[0] = n_lhs[0];
                      }
                      else
                        n_lhs[ result_equation ] = n;
                      return_result( result_equation );
                    }
                    else
                    {
                    }
                    fmod( abs( start - end ) / step, 1.000000000000 );
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
int find_more( token_type *equation, int *np, int en )
{
  int eax;
  int i, j, k;
  int level;
  int diff_sign;
  int found_se;
  if ( np[0] > 0 && solved_equation( en ) )
  {
    for ( ; np > 1; level++ )
    {
      k = 0;
      i = 1;
      j = 1;
      for ( ; en <= j || equation->level < level;  )
      {
        if ( j != i )
        {
          k = i + -1;
          if ( se_compare( equation + ( ( i + -1 ) << 4 ), j - k, rhs[ en ], n_rhs[ en ], &diff_sign ) )
          {
            if ( diff_sign )
            {
              memmove( equation + ( i << 4 ) + 32, equation + ( j << 4 ), ( np - j ) << 4 );
              np = ( np[0] + 2 ) - j;
              level++;
              equation = level + 1;
              equation = 0;
              equation = -1.000000000000;
              equation->level = level + 1;
              equation = 2;
              *(int*)(ebp_44 + ( edi << 4 ) + 8) = 3;
              k = edi + 1;
            }
            else
            {
              memmove( equation + ( i << 4 ), equation + ( j << 4 ), ( np - j ) << 4 );
              i -= j;
              np += ( i - j ) / 4;
            }
            equation->level = level;
            equation = 1;
            break;
          }
          else
            k = 1;
        }
        i = j + 2;
        if ( np <= j + 2 )
        {
          if ( k == 0 )
          {
            return 0;
          }
          level++;
          break;
        }
        else
        {
          j = i;
        }
      }
      do
      {
        j += 2;
      }
      while ( j + 2 < en && level <= *(int*)solved_equation( en )/*.32*/ );
    }
  }
}
int opt_es( token_type *equation, int *np )
{
  int eax;
  int ecx;
  int edx;
  int ebp_176;
  int i, j, k, i1, i2, jj1, k1;
  int level, level1;
  int diff_sign;
  int found_se, found_se1;
  long v;
  char var_name_buf[100];
  if ( np[0] > 0 )
  {
    ebp_176 = 1;
    for ( ; np > 1; ebp_176++ )
    {
      found_se = 0;
      while ( ecx <= ebp_152 || *(int*)(ebp_140 + ( ebp_152 << 4 ) + 4) <= ebp_176 )
      {
        if ( ebp_172 != j )
        {
          k = np[0] + -1;
          if ( j - ( np[0] + -1 ) <= 6 )
            goto B11;
          else
          {
            level1 = 1;
            for ( ; np > 1; level1++ )
            {
              k1 = 0;
              i1 = 1;
              jj1 = 1;
              for ( ; ecx <= jj1 || equation->level <= level1;  )
              {
                if ( jj1 != i1 )
                {
                  if ( j < i1 )
                  {
                    k1 = i1 + -1;
                    if ( jj1 - k1 > 6 && se_compare( equation + ( ( np[0] + -1 ) << 4 ), j - ( np[0] + -1 ), equation + ( k1 << 4 ), jj1 - k1, &diff_sign ) )
                    {
                      __snprintf_chk( var_name_buf, 100, 1, 100, "temp%.0d", last_temp_var );
                      if ( parse_var( &v, var_name_buf ) )
                      {
                        last_temp_var = 0 ? 0 : last_temp_var + 1;
                        i2 = next_espace( );
                        lhs[ next_espace( ) ]->level = 1;
                        lhs[ next_espace( ) ]->kind = 1;
                        lhs[ next_espace( ) ]->token.variable = v;
                        n_lhs[ next_espace( ) ] = 1;
                        memmove( rhs[ i2 ], equation + ( ( np[0] + -1 ) << 4 ), ( j - ( np[0] + -1 ) ) << 4 );
                        n_rhs[ i2 ] = j - ( np[0] + -1 );
                        if ( diff_sign )
                        {
                          memmove( equation + ( i1 << 4 ) + 32, equation + ( jj1 << 4 ), ( np - jj1 ) << 4 );
                          np[0] = ( np[0] + 2 ) - jj1;
                          level1++;
                          equation->level = level1 + 1;
                          equation = 0;
                          equation->token.constant/*union*/ = -1.000000000000;
                          equation->level = level1 + 1;
                          equation = 2;
                          i1 = i1 + 1;
                          k1 = edi + 1;
                        }
                        else
                        {
                          memmove( equation + ( i1 << 4 ), equation + ( jj1 << 4 ), ( np - jj1 ) << 4 );
                          i1 -= jj1;
                          np += ( i1 - jj1 ) / 4;
                        }
                        equation->level = level1;
                        equation = 1;
                        memmove( equation + ( ebp_172 << 4 ), equation + ( j << 4 ), ( np - j ) << 4 );
                        np[0] = np + ( ebp_172 - j );
                        equation = ebp_176;
                        equation = 1;
                        equation = &v;
                        do
                        {
                        }
                        while ( find_more( equation, np, i2 ) );
                        simp_loop( rhs[ i2 ], &n_rhs[ i2 ] );
                        simp_loop( equation, np );
                        i = 0;
                        if ( opt_en[0] >= 0 )
                        {
                          do
                          {
                            i++;
                          }
                          while ( opt_en[0] >= 0 );
                        }
                        opt_en[ i ] = i2;
                        opt_en[ i + 1 + 1 ] = -1;
                        np = 0;
                        return 0 ^ 0;
                      }
                    }
                  }
                  k1 = 1;
                }
                i1 = jj1 + 2;
                if ( np <= jj1 + 2 )
                {
                  if ( k1 )
                  {
                    level1++;
                    break;
                  }
                }
                else
                {
                  jj1 = i1;
                }
              }
              do
              {
                jj1 += 2;
              }
              while ( jj1 + 2 < ecx && level1 < *(int*)(np[0] + -1 + 32) );
            }
          }
B11:;
          found_se = 1;
        }
        if ( np <= j + 2 )
        {
          if ( found_se )
          {
            ebp_176++;
            break;
          }
        }
        else
        {
        }
      }
      level = ebp_176;
      j = ebp_152;
      do
      {
        j += 2;
        if ( ecx <= j + 2 )
        {
        }
        else
      }
      while ( level < equation[2].kind );
    }
  }
  np = 0;
  return 0 ^ 0;
}
int optimize_cmd( char *cp )
{
  int eax;
  int ecx;
  int edx;
  int ebp_80;
  int ebp_72;
  int ebp_68;
  int ebp_64;
  int ebp_60;
  int ebp_48;
  int ebp_44;
  int i, j, k, i1;
  int start, stop;
  int rv = 0, flag;
  int start_en;
  if ( get_range_eol( &cp, &start, &stop ) )
  {
    opt_en[0] = -1;
    i = start;
    j = start;
    for ( ; i <= stop; i++ )
    {
      if ( n_lhs[ start ] )
      {
        simp_equation( i );
        j = i;
      }
      // i++;
    }
    stop = j;
    do
    {
      i = start;
      ebp_44 = n_rhs[ start ];
      flag = 0;
      for ( ; i <= stop; ebp_44 += 4 )
      {
        j = start;
        ebp_48 = ebp_44;
        for ( ; j <= stop; j++ )
        {
          if ( j != i )
          {
            while ( find_more( rhs[ start + 1 ], ebp_48, j ) == 0 )
            {
              flag = 1;
            }
          }
          // j++;
        }
        i++;
        // ebp_44 += 4;
      }
    }
    while ( flag == 0 );
    ebp_44 = start;
    ebp_72 = n_lhs[ start ];
    ebp_68 = rhs[ start ];
    ebp_64 = n_rhs[ start ];
    ebp_60 = lhs[ start ];
    ebp_80 = n_lhs[ start ];
    start_en = 0;
    for ( ; ebp_44 <= stop; ebp_80 += 4 )
    {
      if ( *ebp_72 )
      {
        do
        {
          simp_equation( ebp_44 );
          ebp_48 = flag;
          j = 0;
          for ( ; opt_en[ j ] >= 0; j++ )
          {
            simp_equation( find_more( rhs[ start + 1 ], ebp_48, j ) );
            if ( ebp_44 != opt_en[ i ] )
            {
              k = j;
              while ( find_more( *ebp_60, ebp_80, opt_en[ i ] ) == 0 )
              {
                ebp_48 = 1;
              }
              for ( ; find_more( *ebp_68, ebp_64, opt_en[ i ] );  )
              {
                ebp_48 = 1;
              }
              j = k;
            }
            // j++;
          }
        }
        while ( ebp_48 == 0 );
        rv = 1;
        while ( opt_es( *ebp_60, ebp_80 ) == 0 )
        {
        }
        rv = 1;
        while ( opt_es( *ebp_68, ebp_64 ) == 0 )
        {
        }
        if ( rv )
        {
          ebp_48 = opt_en[ start_en ];
          for ( ; *ebp_48 >= 0; ebp_48 += 4 )
          {
            j = start_en;
            for ( ; *(int*)(ebp_80 + 4) < 0;  )
            {
              j = j + 1;
              k = j + 1 + 1;
              if ( j >= 0 )
              {
                do
                {
                  find_more( rhs[0], &n_rhs[ *(int*)(opt_en[ j + 1 ] + 4) ], *(int*)(ebp_80 + 4) );
                  while ( 1 )
                  {
                  }
                }
                while ( *(int*)(opt_en[ j + 1 + 1 ] + j) < ( "huge", 0 ) );
                j = k;
              }
              else
              {
                j = k;
              }
            }
          }
          while ( rv >= 0 )
          {
            list_sub( opt_es( rhs[0], &n_rhs[ *ebp_48 ] ) );
            start_en++;
          }
          list_sub( ebp_44 );
        }
      }
      ebp_44++;
      ebp_72 += 4;
      ebp_68 += 4;
      ebp_64 += 4;
      ebp_60 += 4;
      // ebp_80 += 4;
    }
    rv = rv;
    if ( rv == 0 )
    {
      error( "Unable to find any repeated expressions." );
    }
  }
  return rv;
}
int push_cmd( char *cp )
{
  int i, j;
  if ( readline_enabled == 0 )
  {
    error( "Readline is currently turned off." );
  }
  if ( get_range_eol( &cp, &i, &j ) )
  {
    if ( i <= j )
    {
      do
      {
        if ( n_lhs && push_en( i ) == 0 )
        {
          error( "Push failed." );
          break;
        }
        i++;
      }
      while ( i + 1 <= j );
    }
    if ( debug_level >= 0 )
    {
      __fprintf_chk( gfp, 1, "%s\n", "Expression pushed.  Press the UP key to access." );
    }
  }
  return 1;
}
int push_en( int en )
{
  char *cp;
  if ( readline_enabled )
  {
    high_prec = 1;
    cp[0] = list_equation( en, 0 );
    high_prec = 0;
    if ( list_equation( en, 0 ) )
    {
      add_history( cp );
      last_history_string = cp;
      return 0;
    }
  }
  return 0;
}
int output_current_directory( FILE *ofp )
{
  char buf[4096];
  if ( security_level <= 2 && ofp && getcwd( buf, 4096 ) )
  {
    __fprintf_chk( ofp, 1, "directory = %s\n", buf );
  }
  else
  {
  }
  if ( 0 ^ 0 )
  {
    return 0;
  }
  return 0;
}
void output_options( FILE *ofp )
{
  if ( ofp )
  {
    __fprintf_chk( ofp, 1, "precision = %d digits\n", precision );
    if ( autosolve == 0 )
      __fprintf_chk( ofp, 1, "no " );
    __fprintf_chk( ofp, 1, "autosolve\n" );
    if ( autocalc == 0 )
      __fprintf_chk( ofp, 1, "no " );
    __fprintf_chk( ofp, 1, "autocalc\n" );
    if ( autoselect == 0 )
      __fprintf_chk( ofp, 1, "no " );
    __fprintf_chk( ofp, 1, "autoselect\n" );
    __fprintf_chk( ofp, 1, "debug_level = %d\n", debug_level );
    if ( case_sensitive_flag == 0 )
      __fprintf_chk( ofp, 1, "no " );
    __fprintf_chk( ofp, 1, "case_sensitive\n" );
    if ( color_flag == 0 )
      __fprintf_chk( ofp, 1, "no " );
    __fprintf_chk( ofp, 1, "color\n" );
    if ( bold_colors == 0 )
      __fprintf_chk( ofp, 1, "no " );
    __fprintf_chk( ofp, 1, "bold_colors\n" );
    if ( display2d == 0 )
      __fprintf_chk( ofp, 1, "no " );
    __fprintf_chk( ofp, 1, "display2d\n" );
    if ( preserve_surds == 0 )
      __fprintf_chk( ofp, 1, "no " );
    __fprintf_chk( ofp, 1, "preserve_surds\n" );
    if ( rationalize_denominators == 0 )
      __fprintf_chk( ofp, 1, "no " );
    __fprintf_chk( ofp, 1, "rationalize_denominators\n" );
    __fprintf_chk( ofp, 1, "modulus_mode = %d\n", modulus_mode );
    __fprintf_chk( ofp, 1, "finance = %d\n", finance_option );
    if ( factor_int_flag == 0 )
      __fprintf_chk( ofp, 1, "no " );
    __fprintf_chk( ofp, 1, "factor_integers\n" );
    if ( right_associative_power == 0 )
      __fprintf_chk( ofp, 1, "no " );
    __fprintf_chk( ofp, 1, "right_associative_power\n" );
    if ( negate_highest_precedence == 0 )
      __fprintf_chk( ofp, 1, "no " );
    __fprintf_chk( ofp, 1, "negate_highest_precedence\n" );
    __fprintf_chk( ofp, 1, "special_variable_characters = %s\n", special_variable_characters );
  }
  return;
}
int skip_no( char **cpp )
{
  if ( strcmp_tospace( cpp[0], "no" ) == 0 || strcmp_tospace( cpp[0], "not" ) == 0 || strcmp_tospace( cpp[0], "off" ) == 0 || strcmp_tospace( cpp[0], "false" ) == 0 )
  {
    cpp[0] = skip_param( cpp[0] );
  }
  if ( strcmp_tospace( cpp[0], "yes" ) == 0 || strcmp_tospace( cpp[0], "on" ) == 0 || strcmp_tospace( cpp[0], "true" ) == 0 )
  {
    cpp[0] = skip_param( cpp[0] );
  }
  return 0;
}
int save_set_options( void )
{
  FILE *fp;
  if ( rc_file[0] == 0 )
  {
    error( "Set options startup file name not set." );
  }
  fp = (FILE*)fopen( rc_file, "w" );
  if ( fopen( rc_file, "w" ) == 0 )
  {
    error( "Unable to write to set options startup file." );
  }
  __fprintf_chk( fp, 1, "; Mathomatic set options loaded at startup.\n" );
  __fprintf_chk( fp, 1, "; This file can be edited.\n\n" );
  output_options( fp );
  if ( fclose( fp ) )
  {
    error( "Error saving set options." );
  }
  __printf_chk( 1, "All options saved in startup file \"%s\".\n", rc_file );
  return 0;
}
int set_options( char *cp )
{
  int eax;
  int i;
  int negate;
  char *cp1, *option_string;
  while ( *(char*)(skip_space( cp )) == 0 )
  {
    if ( security_level <= 2 && strncasecmp( skip_space( cp ), "dir", 3 ) == 0 )
    {
      cp = skip_param( cp );
      if ( *(char*)(skip_param( cp )) == 0 )
      {
        cp1 = getenv( "HOME" );
        if ( cp1 )
          cp = cp1;
      }
      if ( chdir( cp ) )
      {
        error( "Error changing directory." );
        break;
      }
      output_current_directory( stdout );
      break;
    }
    else
    {
      negate = skip_no( &cp );
      option_string[0] = cp;
      cp = skip_param( cp );
      if ( strncasecmp( option_string, "debug", 5 ) == 0 )
      {
        if ( negate )
          debug_level = 0;
        else
        {
          decstrtol( cp, &cp1 );
          cp[0] = cp1;
          if ( cp1 == cp )
          {
            error( "Please specify the debug level number." );
            break;
          }
          debug_level = decstrtol( cp, &cp1 );
        }
      }
      else
      {
        if ( strncasecmp( option_string, "special", 7 ) == 0 )
        {
          if ( negate )
          {
            special_variable_characters[0] = 0;
            break;
          }
          my_strlcpy( special_variable_characters, cp, 256 );
          break;
        }
        else
        {
          if ( strncasecmp( option_string, "columns", 6 ) == 0 )
          {
            if ( negate )
              screen_columns = 0;
            else
            {
              if ( i < 0 || cp1 == cp )
              {
                error( "Please specify how wide the screen is; 0 = infinite columns." );
                break;
              }
              screen_columns = i;
            }
          }
          else
          {
            if ( strncasecmp( option_string, "wide", 4 ) == 0 )
            {
              if ( negate == 0 )
              {
                screen_columns = 0;
                screen_rows = 0;
              }
              else
              {
                get_screen_size( );
              }
            }
            else
            {
              if ( strncasecmp( option_string, "precision", 4 ) == 0 )
              {
                if ( i > 14 || cp1 == cp )
                {
                  error( "Please specify a display precision between 0 and 14 digits." );
                  break;
                }
                precision = i;
                break;
              }
              else
              {
                if ( strcmp_tospace( option_string, "auto" ) == 0 )
                {
                  autoselect = negate == 0;
                  autocalc = negate == 0;
                  autosolve = negate == 0;
                }
                else
                {
                  if ( strncasecmp( option_string, "autosolve", 9 ) == 0 )
                  {
                    autosolve = negate == 0;
                  }
                  else
                  {
                    if ( strncasecmp( option_string, "autocalc", 8 ) == 0 )
                    {
                      autocalc = negate == 0;
                    }
                    else
                    {
                      if ( strncasecmp( option_string, "autoselect", 10 ) == 0 )
                      {
                        autoselect = negate == 0;
                      }
                      else
                      {
                        if ( strncasecmp( option_string, "case", 4 ) == 0 )
                        {
                          case_sensitive_flag = negate == 0;
                        }
                        else
                        {
                          if ( strncasecmp( option_string, "display2d", 7 ) == 0 )
                          {
                            display2d = negate == 0;
                          }
                          else
                          {
                            if ( strncasecmp( option_string, "prompt", 6 ) == 0 )
                            {
                              quiet_mode = negate;
                            }
                            else
                            {
                              if ( strncasecmp( option_string, "preserve", 8 ) == 0 )
                              {
                                preserve_surds = negate == 0;
                              }
                              else
                              {
                                if ( strncasecmp( option_string, "rationalize", 11 ) == 0 )
                                {
                                  rationalize_denominators = negate == 0;
                                }
                                else
                                {
                                  if ( strncasecmp( option_string, "modulus_mode", 3 ) == 0 )
                                  {
                                    if ( negate )
                                      modulus_mode = 0;
                                    else
                                    {
                                      decstrtol( cp, &cp1 );
                                      cp[0] = cp1;
                                      if ( cp1 == cp || i < 0 || i > 2 )
                                      {
                                        error( "Please specify the modulus mode number (0, 1, or 2)." );
                                        __printf_chk( 1, "0 means modulus operator (%%) result has same sign as dividend,\n" );
                                        __printf_chk( 1, "1 means computed result always has same sign as the divisor,\n" );
                                        __printf_chk( 1, "2 means the result is always positive or zero.\n" );
                                        __printf_chk( 1, "Current value is %d.\n", modulus_mode );
                                        break;
                                      }
                                      modulus_mode = i;
                                    }
                                  }
                                  else
                                  {
                                    if ( strncasecmp( option_string, "color", 5 ) == 0 )
                                    {
                                      reset_attr( );
                                      color_flag = negate == 0;
                                    }
                                    else
                                    {
                                      if ( strncasecmp( option_string, "bold", 4 ) == 0 )
                                      {
                                        reset_attr( );
                                        bold_colors = negate == 0;
                                      }
                                      else
                                      {
                                        if ( strncasecmp( option_string, "finance", 7 ) == 0 )
                                        {
                                          if ( negate )
                                            finance_option = 0;
                                          else
                                          {
                                            decstrtol( cp, &cp1 );
                                            cp[0] = cp1;
                                            if ( cp1 != cp )
                                            {
                                              if ( i > 14 )
                                              {
                                                error( "Minimum is 0, maximum is 14." );
                                                break;
                                              }
                                            }
                                            else
                                            {
                                              i = 2;
                                              if ( cp[0] )
                                              {
                                                error( "Please specify the number of digits." );
                                                break;
                                              }
                                            }
                                            finance_option = i;
                                          }
                                        }
                                        else
                                        {
                                          if ( strncasecmp( option_string, "factor_integers", 6 ) == 0 )
                                          {
                                            factor_int_flag = negate == 0;
                                          }
                                          else
                                          {
                                            if ( strncasecmp( option_string, "right_associative_power", 5 ) == 0 )
                                            {
                                              right_associative_power = negate == 0;
                                            }
                                            else
                                            {
                                              if ( strncasecmp( option_string, "negate_highest_precedence", 6 ) == 0 )
                                              {
                                                negate_highest_precedence = negate == 0;
                                              }
                                              else
                                              {
                                                if ( security_level <= 1 && strcmp_tospace( option_string, "save" ) == 0 )
                                                {
                                                  if ( rc_file[0] == 0 )
                                                  {
                                                    error( "Set options startup file name not set." );
                                                    break;
                                                  }
                                                  if ( negate )
                                                  {
                                                    if ( unlink( rc_file ) == 0 )
                                                      __printf_chk( 1, "Set options startup file \"%s\" removed.\n", rc_file );
                                                  }
                                                  else
                                                  {
                                                    if ( save_set_options( ) )
                                                    {
                                                      break;
                                                    }
                                                  }
                                                }
                                                else
                                                {
                                                  error( "Unknown set option." );
                                                  break;
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
        }
      }
    }
  }
  return 0;
}
int set_cmd( char *cp )
{
  if ( cp[0] )
  {
    set_options( cp );
  }
  __fprintf_chk( gfp, 1, "Options are set as follows:\n\n" );
  output_options( gfp );
  __fprintf_chk( gfp, 1, "columns = %d\n", screen_columns );
  output_current_directory( gfp );
  return set_options( cp );
}
int echo_cmd( char *cp )
{
  __fprintf_chk( gfp, 1, "%s\n", cp );
  return 1;
}
int pause_cmd( char *cp )
{
  int eax;
  char *cp1;
  char buf[4096];
  if ( test_mode == 0 && isatty( 0 ) )
  {
    cp[0] = cp[0] == 0 ? cp : "Please press the Enter key";
    __snprintf_chk( prompt_str, 80, 1, 80, " ==== %s ==== ", cp[0] == 0 ? cp : "Please press the Enter key" );
    cp1[0] = get_string( buf, 4096 );
    if ( get_string( buf, 4096 ) && strncasecmp( cp1, "quit", 4 ) )
    {
    }
    else
    {
    }
  }
  else
  {
  }
  return 0;
}
int copy_cmd( char *cp )
{
  int eax;
  int ecx;
  int edx;
  int i, j, k;
  int i1;
  char exists[100];
  if ( get_range_eol( &cp, &i, &j ) )
  {
    i1 = 0;
    do
    {
      exists[0] = 0;
      i1++;
    }
    while ( i1 + 1 != 100 );
    i1 = i;
    if ( i <= j )
    {
      i1 = i1;
      do
      {
        if ( n_lhs[ i1 ] > 0 )
          exists[ i1 ] = 1;
        i1++;
      }
      while ( j < i1 + 1 );
      do
      {
        if ( exists[ i1 ] )
        {
          k = next_espace( );
          copy_espace( i1, next_espace( ) );
          if ( return_result( k ) == 0 )
            goto B3;
        }
        i1++;
      }
      while ( i1 + 1 <= j );
    }
    return 1;
  }
B3:;
  return 1;
}
int complex_func( char *cp, int imag_flag )
{
  int ecx;
  int i, j, k;
  int beg;
  int found_imag, has_imag, has_real;
  token_type *source, *dest;
  int n1, *nps, *np;
  long v = 3;
  if ( current_not_defined( ) == 0 )
  {
    i = cur_equation;
    j = next_espace( );
    if ( n_rhs[ i ] )
    {
      source = rhs[ i ];
      nps = &n_rhs[ i ];
      np = &n_rhs[ j ];
    }
    else
    {
      source = lhs[ i ];
      nps = &n_lhs[ i ];
      np = &n_lhs[ j ];
    }
    if ( cp[0] == 0 || ( parse_var2( &v, cp ) && extra_characters( cp ) == 0 ) )
    {
      simp_loop( source, nps );
      uf_simp( source, nps );
      factorv( source, nps, v );
      partial_flag = 0;
      uf_simp( source, nps );
      partial_flag = 1;
      n1 = 1;
      lhs[ j ]->kind = zero_token.kind;
      lhs[ j ]->level = zero_token.level;
      lhs[ j ]->token.variable = zero_token.token.constant;
      lhs[ j ]->token.variable = *(int*)(134715680);
      if ( nps[0] > 0 )
      {
        has_real = 0;
        has_imag = 0;
        beg = 0;
        k = 0;
        while ( 1 )
        {
          found_imag = 0;
          if ( k < nps[0] )
          {
            found_imag = 0;
            do
              break;
            while ( k + 1 < nps[0] );
            if ( found_imag )
              has_imag = 1;
              if ( imag_flag == found_imag )
              {
                if ( beg == 0 )
                  n1 = 0;
                memmove( lhs[ j ] + ( n1 << 4 ), &source[ beg ].kind, ( k - beg ) << 4 );
                n1 += k - beg;
              }
              if ( nps[0] <= k )
              {
                if ( has_imag == 0 || has_real == 0 )
                  goto B18;
                dest = lhs[ j ];
                do
                {
                  simp_loop( dest, &n1 );
                }
                while ( factor_plus( dest, &n1, v, 0.000000000000 ) == 0 );
                simp_divide( lhs[ j ], &n1 );
                if ( n_rhs[ i ] == 0 )
                {
                  np[0] = n1;
                  cur_equation = j;
                  return_result( j );
                }
                memmove( lhs[ j ], lhs[ i ], n_lhs[ i ] << 4 );
                n_lhs[0] = n_lhs[0];
                np[0] = n1;
                cur_equation = j;
                return_result( j );
              }
              else
              {
                beg = k;
                k++;
              }
          }
          has_real = 1;
        }
      }
B18:;
      warning( "Expression was not a mix." );
      dest = lhs[ j ];
      do
      {
        simp_loop( dest, &n1 );
      }
      while ( factor_plus( dest, &n1, v, 0.000000000000 ) == 0 );
    }
  }
  return 0;
}
int real_cmd( char *cp )
{
  int eax;
  return complex_func( cp, edx );
}
int imaginary_cmd( char *cp )
{
  int eax;
  return complex_func( cp, edx );
}
int tally_cmd( char *cp )
{
  int eax;
  double fp7;
  int i;
  double count;
  int arithmetic_mean = 0;
  if ( strncasecmp( cp, "average", 4 ) == 0 )
  {
    cp[0] = skip_param( cp );
    arithmetic_mean = 1;
  }
  if ( extra_characters( cp ) == 0 )
  {
    trhs->kind = zero_token.kind;
    trhs->level = zero_token.level;
    trhs->token.variable = zero_token.token.constant;
    trhs->token.variable = *(int*)(134715680);
    n_trhs = 1;
    __fprintf_chk( gfp, 1, "Running total = " );
    list_proc( trhs, n_trhs, 0 );
    __fprintf_chk( gfp, 1, "\n" );
    count = 0.000000000000;
    i = 0;
    while ( 1 )
    {
      __fprintf_chk( gfp, 1, "\n" );
      my_strlcpy( prompt_str, "Enter value: ", 80 );
      if ( get_expr( tlhs, &n_tlhs ) == 0 )
      {
        __fprintf_chk( gfp, 1, "End.\n" );
        break;
      }
      if ( n_tokens < n_trhs + n_tlhs + 1 )
        error_huge( );
      if ( n_tlhs > 0 )
      {
        do
        {
          i++;
          tlhs[ i ].level++;
        }
        while ( i + 1 < n_tlhs );
      }
      if ( n_trhs > 0 )
      {
        i = i;
        do
        {
          i++;
          trhs[ i ].level++;
        }
        while ( i + 1 < n_trhs );
      }
      trhs[ n_trhs ].kind = OPERATOR;
      trhs[ n_trhs ].level = 1;
      n_trhs++;
      memmove( &trhs[ n_trhs + 1 ].kind, tlhs, n_tlhs << 4 );
      n_trhs += n_tlhs;
      calc_simp( trhs, &n_trhs );
      count += 1.000000000000;
      __fprintf_chk( gfp, 1, "Running total = " );
      list_proc( trhs, n_trhs, i );
      __fprintf_chk( gfp, 1, "\n" );
      if ( 0.000000000000 < count && arithmetic_mean )
      {
        memmove( tlhs, trhs, n_trhs << 4 );
        n_tlhs = n_trhs;
        if ( n_tokens < n_trhs + 2 )
          error_huge( );
        if ( n_tlhs > 0 )
        {
          do
          {
            i++;
            tlhs[ i ].level++;
          }
          while ( i + 1 < n_tlhs );
        }
        tlhs[ n_tlhs ].kind = OPERATOR;
        tlhs[ n_tlhs ].level = 1;
        n_tlhs++;
        tlhs[ n_tlhs + 1 ].kind = CONSTANT;
        tlhs[ n_tlhs ].level = 1;
        tlhs[ n_tlhs ].token.constant = count;
        n_tlhs++;
        calc_simp( tlhs, &n_tlhs );
        __fprintf_chk( gfp, 1, "Average = " );
        list_proc( tlhs, n_tlhs, i );
        __fprintf_chk( gfp, 1, "\n" );
      }
    }
  }
  return 1;
}
int calculate_cmd( char *cp )
{
  int eax;
  int ecx;
  double fp7;
  int i, k1, k;
  long v, last_v, it_v = 0;
  long counter, counter_max;
  sign_array_type sa_mark;
  sign_array_type sa_value;
  long l, iterations;
  token_type *source;
  int n;
  int diff_sign;
  char buf[4096];
  int factor_flag, value_entered;
  if ( current_not_defined( ) == 0 )
  {
    factor_flag = 0;
    while ( 1 )
    {
      if ( strcmp_tospace( cp, "factor" ) == 0 )
        factor_flag = 1;
      else
      {
        if ( strcmp_tospace( cp, "repeat" ) == 0 )
          repeat_flag = 1;
        else
        {
          i = cur_equation;
          if ( n_rhs[ cur_equation ] )
            source = rhs[ cur_equation ];
          else
            source = lhs[ i ];
          if ( cp[0] )
          {
            cp = parse_var2( &it_v, cp );
            if ( cp )
            {
              if ( found_var( source, n_lhs[ i ], it_v ) == 0 )
              {
                error( "Specified iteration variable not found." );
                if ( ( 0 ^ 0 ) == 0 )
                  break;
                __stack_chk_fail( );
                break;
              }
              else
              {
                if ( cp[0] == 0 )
                {
                  my_strlcpy( prompt_str, "Enter number of iterations: ", 80 );
                  cp = get_string( buf, 4096 );
                  if ( cp )
                    goto B31;
                }
B31:;
                if ( cp[0] || decstrtol( cp, &cp ) < 0 )
                {
                  error( "Positive integer required." );
                }
                else
                {
                  if ( decstrtol( cp, &cp ) == 0 )
                  {
                    warning( "Infinite iterations." );
                  }
                }
              }
            }
          }
          do
          {
            n_trhs = n_lhs[ i ];
            memmove( trhs, source, n_lhs[ i ] << 4 );
            if ( n_lhs[ i ] > 0 )
            {
              value_entered = 0;
              counter = source;
              n = n_lhs[ i ];
              while ( 1 )
              {
                v = -1;
                k1 = 0;
                while ( 1 )
                {
                  if ( counter != 1 || counter <= v )
                    v = v;
                  else
                  if ( v != -1 )
                    v = v < v ? v : v;
                  k1 += 2;
                  if ( n <= k1 + 2 )
                  {
                    if ( v != -1 )
                    {
                      if ( ( v & 16383 ) > 4 && v != it_v )
                      {
                        list_var( v, 0 );
                        __snprintf_chk( prompt_str, 80, 1, 80, "Enter %s: ", var_str );
                        if ( get_expr( tlhs, &n_tlhs ) )
                        {
                          if ( n_tlhs > 0 )
                          {
                            k1 = 0;
                            do
                            {
                              if ( tlhs[ k1 ].kind == 1 )
                              {
                                tlhs[ k1 + 0 ].token.constant/*union*/ = 0 - tlhs[ k1 + 0 ].token.constant/*union*/;
                              }
                              k1 += 2;
                            }
                            while ( k1 + 2 < n_tlhs );
                          }
                          subst_var_with_exp( trhs, &n_trhs, tlhs, n_tlhs, v );
                          value_entered = 1;
                        }
                      }
                      break;
                      while ( 1 )
                      {
                        v = -1;
                        k1 = 0;
                        while ( 1 )
                        {
                        }
                      }
                    }
                  }
                  else
                  {
                  }
                }
              }
            }
            else
              value_entered = 0;
            k1 = 0;
            if ( n_trhs > 0 )
            {
              do
              {
                if ( trhs[ k1 ].kind == 1 && (int)(trhs[ k1 + 0 ].token.variable) < 0 )
                {
                  trhs[ k1 + 0 ].token.constant/*union*/ = 0 - trhs[ k1 + 0 ].token.constant/*union*/;
                }
                k1 += 2;
              }
              while ( k1 + 2 < n_trhs );
            }
            if ( it_v )
            {
              list_var( it_v, 0 );
              __snprintf_chk( prompt_str, 80, 1, 80, "Enter initial %s: ", var_str );
              if ( get_expr( tes, &n_tes ) == 0 )
              {
              }
              else
              {
                calc_simp( tes, &n_tes );
                memmove( tlhs, trhs, n_trhs << 4 );
                n_tlhs = n_trhs;
                if ( 0x7ffffffe > 0 )
                {
                  l = 0;
                  iterations = 0x7ffffffe;
                  do
                  {
                    memmove( trhs, tlhs, n_tlhs << 4 );
                    n_trhs = n_tlhs;
                    subst_var_with_exp( trhs, &n_trhs, tes, n_tes, it_v );
                    calc_simp( trhs, &n_trhs );
                    if ( !se_compare( trhs, n_trhs, tes, n_tes, &diff_sign ) || diff_sign )
                    {
                      memmove( tes, trhs, n_trhs << 4 );
                      n_tes = n_trhs;
                      l++;
                    }
                    else
                    {
                      l = l + 1;
                      __fprintf_chk( gfp, 1, "Convergence reached after %ld iterations.\n", l + 1 + 1 );
                      value_entered = 1;
                    }
                  }
                  while ( l + 1 < iterations );
                }
                value_entered = 1;
              }
            }
            calc_simp( trhs, &n_trhs );
            memset( sa_mark, 0, 64 );
            if ( n_trhs > 0 )
            {
              k1 = 0;
              do
              {
                if ( trhs->kind == 1 && ( trhs->token.variable & 16383 ) == 4 )
                  sa_mark[ ( l >> 14 ) & 63 ] = 1;
                k1 += 2;
                trhs->kind = trhs + 32;
              }
              while ( k1 + 2 < n_trhs );
            }
            k = 0;
            k1 = 0;
            do
            {
              k = ( k + 1 ) - ( ( *(char*)(k1 + sa_mark[0]) < ( 1 & 255 ) ) & 1 );
              k1++;
            }
            while ( k1 + 1 != 64 );
            counter_max = ( 1 << k ) + -1;
            if ( ( 1 << k ) != 1 )
            {
              __fprintf_chk( gfp, 1, "There are %ld solutions.\n", 1 << k );
              __fprintf_chk( gfp, 1, "\n" );
              if ( counter_max < 0 )
                continue;
            }
            else
              __fprintf_chk( gfp, 1, "\n" );
            counter = 0;
            do
            {
              memmove( tlhs, trhs, n_trhs << 4 );
              n_tlhs = n_trhs;
              k = 0;
              k1 = 0;
              do
              {
                if ( sa_mark[0] )
                {
                  sa_value[ k1 ] = ( counter >> ( k/*.1_1of4*/ & 31 ) ) & 1;
                  k++;
                }
                k1++;
              }
              while ( k1 + 1 != 64 );
              if ( n_trhs > 0 )
              {
                do
                {
                  if ( tlhs[ k1 ].kind == 1 && ( (unsigned int)(tlhs[ k1 + 0 ].token.variable) & 16383 ) == 4 )
                  {
                    if ( sa_value[ ( (unsigned int)(tlhs[ k1 + 0 ].token.variable) >> 14 ) & 63 ] )
                    {
                      tlhs[ k1 ].kind = CONSTANT;
                      tlhs->token.constant/*union*/ = -1.000000000000;
                    }
                    else
                    {
                      tlhs[ k1 ].kind = CONSTANT;
                      tlhs->token.constant/*union*/ = 1.000000000000;
                    }
                  }
                  k1 += 2;
                }
                while ( k1 + 2 < n_tlhs );
              }
              k = 0;
              k1 = 0;
              do
              {
                if ( sa_mark[0] == 0 )
                  goto B130;
                else
                {
                  if ( k )
                    __fprintf_chk( gfp, 1, ", " );
                  else
                    __fprintf_chk( gfp, 1, "Solution number %ld with ", counter + 1 );
                  list_var( ( k1 << 14 ) + 4, 0 );
                  __fprintf_chk( gfp, 1, "%s = ", var_str );
                  if ( sa_value[ k1 ] )
                  {
                    __fprintf_chk( gfp, 1, "-1" );
                    k = 1;
                  }
                  else
                  {
                    __fprintf_chk( gfp, 1, "1" );
                    k = 1;
                  }
                }
B130:;
                k1++;
              }
              while ( k1 + 1 != 64 );
              if ( k )
                __fprintf_chk( gfp, 1, ":\n" );
              calc_simp( tlhs, &n_tlhs );
              if ( factor_flag )
                simp_side( tlhs, &n_tlhs );
              __fprintf_chk( gfp, 1, " " );
              if ( n_rhs[ i ] )
              {
                list_proc( lhs[ i ], n_lhs[ i ], 0 );
                __fprintf_chk( gfp, 1, " = " );
              }
              list_factor( tlhs, &n_tlhs, factor_flag );
              if ( n_tlhs <= 9 && make_fractions( tlhs, &n_tlhs ) )
              {
                group_proc( tlhs, &n_tlhs );
                __fprintf_chk( gfp, 1, " = " );
                list_factor( tlhs, &n_tlhs, factor_flag );
              }
              __fprintf_chk( gfp, 1, "\n\n" );
              counter++;
            }
            while ( counter_max < counter );
          }
          while ( value_entered == 0 || repeat_flag == 0 );
        }
      }
      cp = skip_param( cp );
    }
  }
}
int clear_cmd( char *cp )
{
  int ecx;
  int edx;
  int i, j;
  char *cp1;
  do
  {
    if ( is_all( cp ) )
    {
      clear_all( );
      break;
    }
    if ( get_range( &cp, &i, &j ) == 0 )
      break;
    if ( cp[0] && cp == cp1 )
    {
      error( "Invalid argument." );
      break;
    }
    if ( i <= j )
    {
      do
      {
        n_lhs[ i ] = 0;
        n_rhs[ i ] = 0;
      }
      while ( i + 1 + 1 <= j );
      i++;
    }
  }
  while ( cp[0] );
  return 0;
}
int compare_rhs( int i, int j, int *diff_signp )
{
  int edi;
  int rv;
  if ( rv == 0 || diff_signp[0] )
  {
    error( "Error in compare function or too many terms to compare." );
    rv = 0;
  }
  sign_cmp_flag = 1;
  se_compare( rhs[ i ], n_rhs[ i ], rhs[ j ], n_rhs[ j ], diff_signp );
  sign_cmp_flag = 0;
  return se_compare( rhs[ i ], n_rhs[ i ], rhs[ j ], n_rhs[ j ], diff_signp );
}
int compare_es( int i, int j )
{
  int eax;
  int esi;
  int rv;
  int diff_sign;
  if ( n_lhs[ i ] && n_lhs[ j ] )
  {
    sign_cmp_flag = 1;
    sign_cmp_flag = 0;
    if ( rv && diff_sign == 0 )
    {
      if ( n_rhs[ i ] == 0 )
      {
        return n_rhs[ j ] == 0;
      }
      if ( n_rhs[ j ] )
      {
        sign_cmp_flag = 1;
        sign_cmp_flag = 0;
        if ( rv )
        {
          return diff_sign == 0;
        }
      }
    }
  }
  return 0;
}
int compare_cmd( char *cp )
{
  int eax;
  int ecx;
  int edx;
  int i, j;
  int diff_sign;
  int symb = 0;
  if ( strncasecmp( cp, "symbolic", 3 ) == 0 )
  {
    cp = skip_param( cp );
    symb = 1;
  }
  if ( strcmp_tospace( cp, "with" ) == 0 )
  {
    cp = skip_param( cp );
  }
  i = decstrtol( cp, &cp ) + -1;
  if ( not_defined( decstrtol( cp, &cp ) + -1 ) == 0 )
  {
    if ( strcmp_tospace( cp, "with" ) == 0 )
    {
      cp = skip_param( cp );
    }
    j = get_default_en( cp );
    if ( get_default_en( cp ) < 0 )
    {
      return 2;
    }
    if ( j == i )
    {
      error( "Cannot compare an equation with itself." );
      return 2;
    }
    __fprintf_chk( gfp, 1, "Comparing #%d with #%d...\n", decstrtol( cp, &cp ), get_default_en( cp ) + 1 );
    if ( n_rhs[ i ] )
    {
      if ( n_rhs[ j ] == 0 )
      {
        error( "Cannot compare an equation with a non-equation." );
        return 2;
      }
      if ( compare_es( i, j ) )
      {
        __fprintf_chk( gfp, 1, "Equations are identical.\n" );
        return 2;
      }
      if ( solved_equation( i ) && solved_equation( j ) )
      {
        simp_loop( rhs[ i ], &n_rhs[ i ] );
        simp_loop( rhs[0], &n_rhs[ j ] );
        if ( compare_rhs( i, j, &diff_sign ) == 0 )
        {
          if ( debug_level >= 0 )
            __fprintf_chk( gfp, 1, "%s\n", "Simplifying both equations..." );
          symb_flag = symb;
          simpa_side( rhs[ i ], &n_rhs[ i ], 0, 1 );
          simpa_side( rhs[0], &n_rhs[ j ], 0, 1 );
          symb_flag = 0;
          if ( debug_level >= 0 )
          {
            list_sub( i );
            list_sub( j );
          }
          if ( compare_rhs( i, j, &diff_sign ) == 0 )
          {
            uf_simp( rhs[ i ], &n_rhs[ i ] );
            uf_simp( rhs[0], &n_rhs[ j ] );
            if ( compare_rhs( i, j, &diff_sign ) == 0 )
              goto B61;
          }
        }
        if ( diff_sign == 0 && lhs[ i ]->token.variable == lhs[ j ]->token.variable )
        {
          __fprintf_chk( gfp, 1, "Equations are identical.\n" );
          return 2;
        }
        __fprintf_chk( gfp, 1, "Variable (" );
        list_proc( lhs[ i ], n_lhs[ i ], 0 );
        __fprintf_chk( gfp, 1, ") in the first equation is equal to (" );
        if ( diff_sign )
          __fprintf_chk( gfp, 1, "-" );
        list_proc( lhs[ j ], n_lhs[ j ], 0 );
        __fprintf_chk( gfp, 1, ") in the second equation.\n" );
        if ( diff_sign )
        {
        }
        return 2;
      }
B61:;
      if ( debug_level >= 0 )
        __fprintf_chk( gfp, 1, "%s\n", "Solving both equations for zero and unfactoring..." );
      if ( solve_sub( &zero_token, 1, lhs[ i ], &n_lhs[ i ], rhs[ i ], &n_rhs[ i ] ) <= 0 || solve_sub( &zero_token, 1, lhs[ j ], &n_lhs[ j ], rhs[ j ], &n_rhs[ j ] ) <= 0 )
      {
        return 2;
      }
      uf_simp( rhs[ i ], &n_rhs[ i ] );
      uf_simp( rhs[ j ], &n_rhs[ j ] );
      if ( compare_rhs( i, j, &diff_sign ) )
      {
        __fprintf_chk( gfp, 1, "Equations are identical.\n" );
        return 2;
      }
      if ( debug_level >= 0 )
        __fprintf_chk( gfp, 1, "%s\n", "Simplifying both equations..." );
      symb_flag = symb;
      simpa_side( rhs[ i ], &n_rhs[ i ], 0, 0 );
      simpa_side( rhs[ j ], &n_rhs[ j ], 0, 0 );
      symb_flag = 0;
      if ( compare_rhs( i, j, &diff_sign ) )
      {
        __fprintf_chk( gfp, 1, "Equations are identical.\n" );
        return 2;
      }
      if ( solve_sub( &zero_token, 1, lhs[ i ], &n_lhs[ i ], rhs[ i ], &n_rhs[ i ] ) <= 0 || solve_sub( &zero_token, 1, lhs[ j ], &n_lhs[ j ], rhs[ j ], &n_rhs[ j ] ) <= 0 )
      {
        return 2;
      }
      uf_simp( rhs[ i ], &n_rhs[ i ] );
      uf_simp( rhs[0], &n_rhs[ j ] );
      if ( compare_rhs( i, j, &diff_sign ) )
      {
        __fprintf_chk( gfp, 1, "Equations are identical.\n" );
        return 2;
      }
      __fprintf_chk( gfp, 1, "Equations differ.\n" );
      return 2;
    }
    else
    if ( n_rhs[ j ] == 0 )
    {
      simp_loop( lhs[ i ], &n_lhs[ i ] );
      simp_loop( lhs[0], &n_lhs[ j ] );
      if ( compare_es( i, j ) )
      {
        __fprintf_chk( gfp, 1, "Expressions are identical.\n" );
        return 2;
      }
      if ( debug_level >= 0 )
        __fprintf_chk( gfp, 1, "%s\n", "Simplifying both expressions..." );
      symb_flag = symb;
      simpa_side( lhs[ i ], &n_lhs[ i ], 0, 1 );
      simpa_side( lhs[0], &n_lhs[ j ], 0, 1 );
      symb_flag = 0;
      if ( debug_level >= 0 )
      {
        list_sub( i );
        list_sub( j );
      }
      if ( compare_es( i, j ) )
      {
        __fprintf_chk( gfp, 1, "Expressions are identical.\n" );
        return 2;
      }
      uf_simp( lhs[ i ], &n_lhs[ i ] );
      uf_simp( lhs[0], &n_lhs[ j ] );
      if ( compare_es( i, j ) )
      {
        __fprintf_chk( gfp, 1, "Expressions are identical.\n" );
        return 2;
      }
      __fprintf_chk( gfp, 1, "Expressions differ.\n" );
      return 2;
    }
    error( "Cannot compare an equation with a non-equation." );
    return 2;
  }
}
int display_fraction( double value )
{
  double fp7;
  double d4, d5;
  int rv;
  f_to_fraction( value, &d4, &d5 );
  __fprintf_chk( gfp, 1, "%.*g", precision, value );
  rv = 0;
  if ( d5 != 1.000000000000 || d5 != 1.000000000000 )
  {
    __fprintf_chk( gfp, 1, " = %.*g/%.*g", precision, d4, precision, d5 );
  }
  else
  {
  }
  __fprintf_chk( gfp, 1, "\n" );
  return rv;
}
int divide_cmd( char *cp )
{
  int eax;
  double fp7;
  long v = 0, v_tmp;
  int i, j;
  int nleft = 0, nright = 0;
  double lcm, d1, d2, d3, d4, d5;
  complexs c1;
  complexs c2;
  complexs c3;
  pull_number = -1;
  if ( cp[0] == 0 || ( parse_var2( &v, cp ) && extra_characters( cp ) == 0 ) )
  {
    i = next_espace( );
    do
    {
      my_strlcpy( prompt_str, "Enter dividend: ", 80 );
      if ( get_expr( rhs[ i ], &nright ) == 0 )
      {
        return repeat_flag;
      }
      my_strlcpy( prompt_str, "Enter divisor: ", 80 );
      if ( get_expr( lhs[ i ], &nleft ) == 0 )
      {
        return repeat_flag;
      }
      __fprintf_chk( gfp, 1, "\n" );
      calc_simp( rhs[ i ], &nright );
      calc_simp( lhs[ i ], &nleft );
      if ( get_constant( lhs[0], nleft, &d2 ) )
        check_divide_by_zero( d2 );
      if ( get_constant( rhs[ i ], nright, &d1 ) && get_constant( lhs[ i ], nleft, &d2 ) )
      {
        lcm = gcd_verified( d1, d2 );
        d4 = modf( d1 / d2, &d5 );
        __fprintf_chk( gfp, 1, "%.*g/%.*g = %.*g", precision, d1, precision, d2, precision, d1 / d2 );
        if ( lcm || lcm )
        {
          lcm = d2 / lcm;
          if ( d2 / lcm != 1.000000000000 || d2 / lcm != 1.000000000000 )
            __fprintf_chk( gfp, 1, " = %.*g/%.*g", precision, d1 / lcm, precision, d2 / lcm );
          else
          {
          }
        }
        else
        {
        }
        __fprintf_chk( gfp, 1, "\nQuotient: %.*g, Remainder: %.*g\n", precision, d5, precision, d4 * d2 );
        d1 = abs( d1 );
        d2 = abs( d2 );
        if ( lcm == 0 )
        {
          __fprintf_chk( gfp, 1, "No GCD found.\n" );
          if ( repeat_flag == 0 )
            break;
        }
        else
        {
          __fprintf_chk( gfp, 1, "GCD = " );
          if ( lcm <= 4.000000000000 )
          {
            if ( factor_one( lcm ) && is_prime( ) == 0 )
            {
              display_unique( );
              lcm = ( d2 * d1 ) / lcm;
              __fprintf_chk( gfp, 1, "LCM = " );
              if ( lcm <= 4.000000000000 )
              {
                if ( factor_one( lcm ) && is_prime( ) == 0 )
                  display_unique( );
              }
              else
              {
              }
              display_fraction( lcm );
            }
          }
          else
          {
          }
          display_fraction( lcm );
          lcm = ( d2 * d1 ) / lcm;
          __fprintf_chk( gfp, 1, "LCM = " );
        }
      }
      else
      {
        if ( parse_complex( rhs[ i ], nright, &c1 ) && parse_complex( lhs[ i ], nleft, &c2 ) )
        {
          c3 = complex_div( c1.re, c2.re );
          __fprintf_chk( gfp, 1, "Result of complex number division:\n" );
          __fprintf_chk( gfp, 1, "%.*g %+.*g*i\n\n", precision, c3.re, precision, c3.im );
          if ( repeat_flag == 0 )
            break;
        }
        else
        {
          v_tmp = v;
          if ( poly_div( rhs[ i ], nright, lhs[ i ], nleft, &v_tmp ) )
          {
            simp_divide( tlhs, &n_tlhs );
            simp_divide( trhs, &n_trhs );
            list_var( v_tmp, 0 );
            __fprintf_chk( gfp, 1, "Polynomial division successful using base variable (%s).\n", var_str );
            __fprintf_chk( gfp, 1, "The quotient is:\n" );
            fractions_and_group( tlhs, &n_tlhs );
            list_factor( tlhs, &n_tlhs, 0 );
            __fprintf_chk( gfp, 1, "\n\nThe remainder is:\n" );
            fractions_and_group( trhs, &n_trhs );
            list_factor( trhs, &n_trhs, 0 );
            __fprintf_chk( gfp, 1, "\n" );
          }
          else
            __fprintf_chk( gfp, 1, "Polynomial division failed.\n" );
          __fprintf_chk( gfp, 1, "\n" );
          j = poly_gcd( rhs[ i ], nright, lhs[ i ], nleft, v );
          if ( poly_gcd( rhs[ i ], nright, lhs[ i ], nleft, v ) || poly_gcd( lhs[ i ], nleft, rhs[ i ], nright, v ) )
          {
            simp_divide( trhs, &n_trhs );
            __fprintf_chk( gfp, 1, "Polynomial GCD (%d Euclidean algorithm iteration%s):\n", j, j == 1 ? "s" : "" );
            fractions_and_group( trhs, &n_trhs );
            list_factor( trhs, &n_trhs, 0 );
            __fprintf_chk( gfp, 1, "\n" );
          }
          else
            __fprintf_chk( gfp, 1, "No univariate polynomial GCD found.\n" );
          if ( repeat_flag == 0 )
            break;
        }
      }
    }
    while ( repeat_flag == 0 );
  }
  else
  {
  }
}
int eliminate_cmd( char *cp )
{
  int eax;
  int ecx;
  int edx;
  long v, last_v, v1, va[1000];
  int vc;
  int i, n;
  int success_flag, did_something, using_flag;
  char used[100] = { };
  char *cp_start;
  char buf[4096];
  if ( current_not_defined( ) == 0 )
  {
    if ( strcmp_tospace( cp, "repeat" ) == 0 )
    {
      repeat_flag = 1;
      cp = skip_param( cp );
    }
    if ( cp[0] == 0 )
    {
      my_strlcpy( prompt_str, "Enter variables to eliminate: ", 80 );
      cp = get_string( buf, 4096 );
      if ( cp && cp[0] )
        goto B13;
    }
B13:;
    cp_start = cp;
    did_something = 0;
    success_flag = 0;
    i = 0;
    vc = 0;
    while ( 1 )
    {
      if ( vc )
      {
        vc += -1;
        v = va[ vc ];
      }
      else
      if ( cp[0] )
      {
        if ( is_all( cp ) )
        {
          cp = skip_param( cp );
          while ( v1 = -1, n_lhs[ cur_equation ] <= 0 )
          {
            i = 0;
            if ( n_rhs[ cur_equation ] > 0 )
            {
              cur_equation = rhs[ cur_equation ];
              while ( 1 )
              {
                if ( rhs[ cur_equation ]->kind != 1 || rhs[ cur_equation ]->token.variable <= v1 )
                  v1 = v1;
                else
                if ( v1 != -1 )
                  v1 = v1 < v1 ? v1 : v1;
                i += 2;
                if ( n_rhs[ cur_equation ] <= i + 2 )
                {
                }
                else
                {
                }
              }
            }
            if ( v1 != -1 )
            {
              if ( ( v1 & 16383 ) > 4 )
              {
                if ( vc > 999 )
                  continue;
                else
                {
                  va[ vc ] = v1;
                  vc++;
                }
              }
            }
          }
          i = 0;
          last_v = v1 = -1;
          while ( 1 )
          {
            if ( lhs[ cur_equation ]->kind != 1 || lhs[ cur_equation ]->token.variable <= last_v )
              v1 = v1;
            else
            if ( v1 != -1 )
              v1 = v1 < v1 ? v1 : v1;
            i += 2;
            if ( i + 2 < n_lhs[ cur_equation ] )
              continue;
            else
            {
              i = 0;
            }
          }
        }
        else
        {
          cp = parse_var2( &v, cp );
          if ( cp )
            goto B17;
        }
      }
      else
      if ( repeat_flag && success_flag )
      {
        cp = cp_start;
        success_flag = 0;
      }
      else
      if ( did_something )
      {
        did_something = return_result( cur_equation );
        if ( 0 ^ 0 )
          break;
        break;
      }
      else
        error( "No substitutions made." );
B17:;
      using_flag = strcmp_tospace( cp, "using" ) == 0;
      if ( !(_Bool)( strcmp_tospace( cp, "using" ) != 0 ) )
      {
        cp = skip_param( cp );
        i = decstrtol( cp, &cp ) + -1;
        if ( not_defined( decstrtol( cp, &cp ) + -1 ) == 0 )
          goto B62;
      }
B62:;
      if ( var_in_equation( cur_equation, v ) == 0 )
      {
        if ( repeat_flag )
          continue;
        else
        {
          list_var( v, 0 );
          __printf_chk( 1, "Variable (%s) not found in current equation.\n", var_str );
        }
      }
      else
      {
        if ( using_flag )
        {
          if ( elim_sub( i, v ) == 0 )
            continue;
        }
        else
        {
          i = cur_equation;
          if ( n_equations > 1 )
          {
            n = 1;
            do
            {
              i = (unsigned char)( i > 0 ) ? n_equations + -1 : i + -1;
              if ( used[ (unsigned char)( i > 0 ) ? n_equations + -1 : i + -1 ] || n_lhs[0] == 0 || n_rhs[ i ] == 0 || var_in_equation( i, v ) == 0 || elim_sub( i, v ) == 0 )
              {
                n++;
              }
            }
            while ( n + 1 < n_equations );
          }
        }
        used[ i ] = 1;
        did_something = 1;
        success_flag = 1;
      }
    }
  }
  did_something = 0;
}
int elim_sub( int i, long v )
{
  token_type want;
  /* phantom */ int solved;
  if ( i == cur_equation )
  {
    error( "Error: source and destination are the same." );
  }
  if ( !solved_equation( i ) || lhs[ i ]->token.variable != v )
  {
    list_var( v, 0 );
    __printf_chk( 1, "Solving equation #%d for (%s) and substituting into the current equation...\n", i + 1, var_str );
    want.level = 1;
    want.kind = VARIABLE;
    if ( solve_sub( &want, 1, lhs[ i ], &n_lhs[ i ], rhs[ i ], &n_rhs[ i ] ) <= 0 )
    {
      error( "Solve failed." );
    }
  }
  else
  {
    list_var( lhs[ i ]->token.variable, 0 );
    __printf_chk( 1, "Substituting the RHS of equation #%d into the current equation for variable (%s)...\n", i + 1, var_str );
  }
  subst_var_with_exp( rhs[ cur_equation ], &n_rhs[ cur_equation ], rhs[ i ], n_rhs[ i ], v );
  subst_var_with_exp( lhs[ cur_equation ], &n_lhs[ cur_equation ], rhs[0], n_rhs[ i ], v );
  simp_equation( cur_equation );
  return 1;
want.token.constant = v; // XXX
}
int display_cmd( char *cp )
{
  int i, j;
  char *cp1;
  jmp_buf save_save;
  int factor_flag = strcmp_tospace( cp, ebp_212 ) == 0, displayed;
  if ( !(_Bool)( strcmp_tospace( cp, ebp_212 ) != 0 ) )
  {
    cp = skip_param( cp );
  }
  displayed = 0;
  do
  {
    if ( get_range( &cp, &i, &j ) == 0 )
    {
      displayed = 0;
      break;
    }
    if ( cp[0] && cp == cp1 )
    {
      error( "Invalid argument." );
      displayed = 0;
      break;
    }
    if ( j < i )
    {
    }
    else
    {
      do
      {
        if ( n_lhs[ i ] > 0 )
        {
          memmove( save_save[0].__jmpbuf, jmp_save[0].__jmpbuf, 156 );
          if ( _setjmp( &jmp_save[0].__jmpbuf[0] ) )
          {
            memmove( jmp_save[0].__jmpbuf, save_save[0].__jmpbuf, 156 );
            __printf_chk( 1, "Skipping equation number %d.\n", i + 1 );
          }
          else
          {
            make_fractions_and_group( i );
            if ( factor_flag || factor_int_flag )
              factor_int_sub( i );
            memmove( jmp_save[0].__jmpbuf, save_save[0].__jmpbuf, 156 );
            displayed = flist_equation( i ) <= 0 ? 1 : displayed;
          }
        }
        i++;
      }
      while ( i + 1 <= j );
    }
  }
  while ( cp[0] );
  return displayed;
}
int list_cmd( char *cp )
{
  int i, j;
  char *cp1;
  int export_flag;
  if ( strncasecmp( cp, "gnuplot", 4 ) == 0 )
  {
    cp = skip_param( cp );
    export_flag = 3;
  }
  else
  {
    if ( strncasecmp( cp, "export", 4 ) == 0 )
    {
      cp = skip_param( cp );
      export_flag = 2;
    }
    else
    {
      export_flag = 0;
      if ( strncasecmp( cp, "maxima", 4 ) == 0 )
      {
        cp = skip_param( cp );
        export_flag/*.1_2of4*/ = 1;
      }
    }
  }
  do
  {
    if ( get_range( &cp, &i, &j ) == 0 )
      break;
    if ( cp[0] && cp == cp1 )
    {
      error( "Invalid argument." );
      break;
    }
    if ( i <= j )
    {
      do
      {
        if ( n_lhs[0] > 0 )
          list1_sub( i, export_flag );
        i++;
      }
      while ( i + 1 <= j );
    }
  }
  while ( cp[0] );
  return 1;
}
int code_cmd( char *cp )
{
  int i, j;
  enum language_list  language;
  int int_flag = 0, displayed;
  char *cp1;
  language = C;
  while ( 1 )
  {
    if ( strcmp_tospace( cp, ebp_68 ) && strcmp_tospace( cp, "c++" ) )
    {
      if ( strcmp_tospace( cp, "java" ) == 0 )
        language = JAVA;
      else
      {
        if ( strcmp_tospace( cp, "python" ) == 0 )
          language = PYTHON;
        else
        {
          if ( strcmp_tospace( cp, "int" ) == 0 || strcmp_tospace( cp, "integer" ) == 0 )
            int_flag = language;
          else
          {
            displayed = 0;
            do
            {
              if ( get_range( &cp, &i, &j ) == 0 )
              {
                displayed = 0;
                break;
              }
              if ( cp[0] && cp == cp1 )
              {
                error( "Invalid argument." );
                displayed = 0;
                break;
              }
              if ( i <= j )
              {
                do
                {
                  if ( n_lhs[0] > 0 )
                  {
                    if ( n_rhs[0] == 0 || n_lhs[0] != 1 || lhs[ i + 1 ]->kind != 1 )
                      warning( "Can't make assignment statement because this is not an equation." );
                    approximate_roots = 1;
                    simp_i( lhs[ i ], &n_lhs[ i ] );
                    if ( int_flag )
                      uf_repeat_always( lhs[ i ], &n_lhs[ i ] );
                    if ( n_rhs[0] > 0 )
                    {
                      simp_i( rhs[ i ], &n_rhs[ i ] );
                      if ( int_flag )
                      {
                        uf_repeat_always( rhs[ i ], &n_rhs[ i ] );
                        approximate_roots = 0;
                        make_fractions_and_group( i );
                      }
                      else
                      {
                        approximate_roots = 0;
                        make_fractions_and_group( i );
                        displayed = list_c_equation( i, language, int_flag ) <= 0 ? 1 : displayed;
                      }
                    }
                    else
                    {
                      approximate_roots = 0;
                      make_fractions_and_group( i );
                      if ( int_flag == 0 )
                        continue;
                    }
                    if ( int_expr( lhs[ i ], n_lhs[0] ) == 0 || int_expr( rhs[ i ], n_rhs[0] ) == 0 )
                      warning( "Not an integer expression." );
                  }
                  i++;
                }
                while ( i + 1 <= j );
              }
            }
            while ( cp[0] );
            break;
          }
        }
      }
    }
    else
    {
    }
    cp = skip_param( cp );
  }
}
int vcmp( sort_type *p1, sort_type *p2 )
{
  return p2->count - p1->count;
}
int variables_cmd( char *cp )
{
  int eax;
  int ecx;
  int edx;
  int ebp_8048;
  int i, j, k;
  int i1;
  long v1, last_v;
  int vc, cnt;
  sort_type va[1000];
  token_type *p1;
  int n1;
  enum language_list  lang_code;
  int int_flag, imag_flag;
  if ( strcmp_tospace( cp, ebp_8100 ) == 0 || strcmp_tospace( cp, "c++" ) == 0 )
  {
    cp = skip_param( cp );
    int_flag = 0;
  }
  else
  {
    if ( strcmp_tospace( cp, "java" ) == 0 )
    {
      cp = skip_param( cp );
      int_flag = 0;
    }
    else
    {
      if ( strcmp_tospace( cp, "int" ) && strcmp_tospace( cp, "integer" ) )
        int_flag = 0;
      else
      {
        cp = skip_param( cp );
        int_flag = 1;
      }
    }
  }
  if ( get_range_eol( &cp, &i, &j ) )
  {
    imag_flag = 0;
    if ( i <= j )
    {
      last_v = rhs[ i ];
      ebp_8048 = lhs[ i ];
      k = i;
      do
      {
        n1 = n_lhs[ i + 1 ];
        if ( n_lhs[ i ] > 0 )
        {
          n1 = n_rhs[ i1 ];
          i1 = 0;
          do
          {
            if ( p1 == 1 && (p1->token.variable) == 3 )
            {
              imag_flag = 1;
              break;
            }
            else
            {
              i1 += 2;
              p1 += 2;
            }
          }
          while ( i1 + 2 < n1 );
        }
        k++;
        last_v += 4;
        ebp_8048 += 4;
      }
      while ( j < k + 1 );
    }
    vc = 0;
    if ( i <= j )
    {
      *ebp_8048 = i;
      ebp_8048 = i;
      last_v = 0;
      cnt = 0;
      v1 = -1;
      while ( *(int*)(n_lhs[0] + ebx + ( ebp_8064 << 2 )) <= 0 )
      {
        ebp_8048++;
        if ( j < ebp_8048 )
        {
          if ( v1 != -1 )
          {
            va[ vc ].v = v1;
            va[ vc ].count = cnt;
            vc++;
            if ( vc + 1 == 1000 )
            {
              error( "Too many variables to list." );
              break;
            }
            last_v = v1;
            ebp_8048 = i;
            cnt = 0;
            v1 = -1;
          }
        }
        else
        {
        }
      }
      i1 = 0;
      while ( 1 )
      {
        if ( edx == 1 && last_v < *(int*)(edx + 8) )
        {
          if ( esi != -1 && v1 <= eax )
          {
            if ( v1 == esi )
            {
              cnt++;
              v1 = esi;
              i1 += 2;
              if ( *(int*)(n_lhs[0] + 0 + ( i << 2 )) <= i1 + 2 )
              {
                p1 = *(int*)(rhs[0] + ebx + ( ebp_8052 << 2 ));
                n1 = *(int*)(n_rhs[0] + ebx + ( ebp_8052 << 2 ));
                if ( *(int*)(n_rhs[0] + ebx + ( ebp_8052 << 2 )) > 0 )
                {
                  i1 = 0;
                  while ( 1 )
                  {
                    if ( p1->kind == 1 && last_v < p1->token.variable )
                    {
                      if ( eax != -1 && v1 <= v1 )
                      {
                        if ( v1 == eax )
                        {
                          cnt++;
                          v1 = eax;
                          i1 += 2;
                          if ( n1 <= i1 + 2 )
                            v1 = v1;
                          else
                          {
                            v1 = v1;
                          }
                        }
                      }
                      else
                        cnt = 1;
                    }
                    v1 = eax;
                  }
                }
              }
              else
              {
                v1 = eax;
              }
            }
          }
          else
            cnt = 1;
        }
        v1 = v1;
      }
    }
    if ( vc > 0 )
    {
      qsort( &va[0].v, vc, 8, &vcmp );
      i1 = 0;
      lang_code = C;
      do
      {
        if ( lang_code )
        {
          if ( va[0].v > 3 )
          {
            list_var( va[0].v, lang_code );
            if ( imag_flag )
              __fprintf_chk( gfp, 1, "_Complex " );
            if ( int_flag )
              __fprintf_chk( gfp, 1, "int %s;\n", var_str );
            else
              __fprintf_chk( gfp, 1, "double %s;\n", var_str );
          }
        }
        else
        {
          list_var( va[0].v, 0 );
          __fprintf_chk( gfp, 1, "%s\n", var_str );
        }
        i1++;
      }
      while ( vc <= i1 + 1 );
    }
    return 1;
  }
}
int approximate_cmd( char *cp )
{
  int i, j;
  char *cp1;
  do
  {
    if ( get_range( &cp, &i, &j ) == 0 )
    {
      break;
    }
    if ( cp[0] && cp == cp1 )
    {
      error( "Invalid argument." );
      break;
    }
    if ( i <= j )
    {
      do
      {
        if ( n_lhs[0] )
        {
          subst_constants( lhs[0], &n_lhs[ i ] );
          subst_constants( rhs[ i ], &n_rhs[ i ] );
          approximate_roots = 1;
          simp_equation( i );
          factorv( lhs[0], &n_lhs[ i ], 3 );
          if ( n_rhs[ i ] )
            factorv( rhs[ i ], &n_rhs[ i ], 3 );
          approximate_roots = 0;
          if ( return_result( i ) == 0 )
          {
            break;
          }
        }
        i++;
      }
      while ( i + 1 <= j );
    }
    break;
  }
  while ( cp[0] );
  return 1;
}
int replace_cmd( char *cp )
{
  int eax;
  int ecx;
  int edx;
  int i, j;
  int n;
  long last_v, v;
  /* phantom */ char *cp_start;
  long va[1000];
  int vc;
  int found;
  char *cp1;
  if ( current_not_defined( ) == 0 )
  {
    i = cur_equation;
    if ( cp[0] )
    {
      vc = 0;
      do
      {
        if ( strcmp_tospace( cp, "with" ) == 0 )
        {
          if ( vc == 0 )
          {
            error( "No variables specified." );
            break;
          }
        }
        else
        if ( vc == 1000 )
        {
          error( "Too many variables specified." );
          break;
        }
        cp[0] = parse_var2( va, cp );
        if ( parse_var2( va, cp ) == 0 )
        {
          return 0;
        }
        if ( var_in_equation( i, va[0] ) == 0 )
        {
          error( "Variable not found." );
          break;
        }
        vc++;
      }
      while ( cp[0] );
    }
    else
      vc = 0;
    n_tlhs = n_lhs[ i ];
    memmove( tlhs, lhs[ i ], n_lhs[ i ] << 4 );
    n_trhs = n_rhs[ i ];
    memmove( trhs, rhs[ i ], n_rhs[ i ] << 4 );
    last_v = 0;
    while ( v = -1, n_lhs[ i ] <= 0 )
    {
      if ( n_rhs[ i ] > 0 )
      {
        i = rhs[ i ];
        j = 0;
        while ( 1 )
        {
          if ( rhs[ i ]->kind != 1 || rhs[ i ]->token.variable <= last_v )
            v = v;
          else
          if ( v != -1 )
            v = v < v ? v : v;
          j += 2;
          if ( n_rhs[ i ] <= j + 2 )
          {
            vc = vc;
            v = v;
          }
          else
          {
          }
        }
      }
      if ( v != -1 )
      {
        if ( vc )
        {
          if ( vc <= 0 )
          {
            last_v = v;
          }
          else
          {
            found = 0;
            j = 0;
            do
            {
              found = v == *(int*)(va[0] + ( j << 2 )) ? found : 1;
              j++;
            }
            while ( vc != j + 1 );
            if ( found )
            {
              if ( cp )
              {
                if ( strcmp_tospace( cp, "with" ) == 0 )
                {
                  input_column += cp1 - cp;
                  if ( cp1 == 0 )
                  {
                    return 0;
                  }
                  if ( n <= 0 )
                  {
                  }
                  else
                  {
                    j = 0;
                    do
                    {
                      if ( scratch[ j ].kind == 1 )
                      {
                        scratch[ j + 0 ].token.constant/*union*/ = 0 - scratch[ j + 0 ].token.constant/*union*/;
                      }
                      j += 2;
                    }
                    while ( j + 2 < n );
                    subst_var_with_exp( tlhs, &n_tlhs, scratch, n, v );
                    subst_var_with_exp( trhs, &n_trhs, scratch, n, v );
                  }
                }
              }
            }
          }
        }
        list_var( v, 0 );
        __snprintf_chk( prompt_str, 80, 1, 80, "Enter %s: ", var_str );
        if ( get_expr( scratch, &n ) )
        {
          if ( n > 0 )
          {
            j = 0;
            do
            {
            }
            while ( j + 2 < n );
            subst_var_with_exp( tlhs, &n_tlhs, scratch, n, v );
            subst_var_with_exp( trhs, &n_trhs, scratch, n, v );
          }
          else
          {
            subst_var_with_exp( tlhs, &n_tlhs, scratch, n, v );
            subst_var_with_exp( trhs, &n_trhs, scratch, n, v );
          }
        }
      }
      else
      {
        j = 0;
        if ( n_tlhs > 0 )
        {
          do
          {
            if ( tlhs[ j ].kind == 1 && (int)(tlhs[ j + 0 ].token.variable) < 0 )
            {
              tlhs[ j + 0 ].token.constant/*union*/ = 0 - tlhs[ j + 0 ].token.constant/*union*/;
            }
            j += 2;
          }
          while ( j + 2 < n_tlhs );
        }
        if ( n_trhs <= 0 )
        {
          n_lhs[ i ] = n_tlhs;
          memmove( lhs[ i ], tlhs, n_tlhs << 4 );
          n_rhs[ i ] = n_trhs;
          memmove( rhs[ i ], trhs, n_trhs << 4 );
          simp_equation( i );
          return_result( i );
        }
        j = 0;
        do
        {
          if ( trhs[ j ].kind == 1 && (int)(trhs[ j + 0 ].token.variable) < 0 )
          {
            trhs[ j + 0 ].token.constant/*union*/ = 0 - trhs[ j + 0 ].token.constant/*union*/;
          }
          j += 2;
        }
        while ( j + 2 < n_trhs );
        n_lhs[ i ] = n_tlhs;
        memmove( lhs[ i ], tlhs, n_tlhs << 4 );
        n_rhs[ i ] = n_trhs;
        memmove( rhs[ i ], trhs, n_trhs << 4 );
        simp_equation( i );
        return_result( i );
      }
    }
    v = -1;
    j = 0;
    while ( 1 )
    {
      if ( lhs[ i ]->kind != 1 || lhs[ i ]->token.variable <= last_v )
        v = v;
      else
      if ( v != -1 )
        v = v < v ? v : v;
      j += 2;
      if ( n_lhs[ i ] <= j + 2 )
        vc = vc;
      else
      {
      }
    }
  }
}
int simplify_cmd( char *cp )
{
  int ecx;
  int ebp_580;
  int i, i1, j;
  int k, k1;
  long counter, counter_max, previous_solution_number[100];
  sign_array_type sa_mark;
  sign_array_type sa_value;
  int sign_flag, quick_flag, quickest_flag, symb = 0, frac_flag;
  quickest_flag = 0;
  quick_flag = 0;
  frac_flag = 1;
  while ( 1 )
  {
    if ( strncasecmp( cp, "sign", 4 ) == 0 )
      sign_flag = frac_flag;
    else
    {
      if ( strncasecmp( cp, "symbolic", 4 ) == 0 )
      {
      }
      else
      {
        if ( strcmp_tospace( cp, "quickest" ) == 0 )
          quickest_flag = frac_flag;
        else
        {
          if ( strcmp_tospace( cp, "quick" ) == 0 )
            quick_flag = frac_flag;
          else
          {
            if ( strncasecmp( cp, "fraction", 4 ) == 0 )
            {
            }
            else
            {
              symb = frac_flag;
              if ( get_range_eol( &cp, &i, &j ) == 0 )
              {
                symb = 0;
                return 1;
              }
              symb_flag = symb;
              if ( i <= j )
              {
                do
                {
                  if ( n_lhs[ i ] )
                  {
                    if ( quickest_flag )
                      simp_equation( i );
                    else
                    {
                      simpa_repeat_side( lhs[ i ], &n_lhs[ i ], quick_flag, frac_flag );
                      simpa_repeat_side( rhs[ i ], &n_rhs[ i ], quick_flag, frac_flag );
                    }
                    if ( return_result( i ) == 0 )
                      symb_flag = 0;
                    else
                    {
                      if ( symb )
                      {
                        memset( previous_solution_number, 0, 400 );
                        memset( sa_mark, 0, 64 );
                        if ( n_lhs[ i ] > 0 )
                        {
                          do
                          {
                            if ( lhs[0]->kind == 1 && ( lhs[0]->token.variable & 16383 ) == 4 )
                              sa_mark[ ( ebp_580 >> 14 ) & 63 ] = 1;
                            k1 += 2;
                          }
                          while ( k1 + 2 < n_lhs[ i ] );
                        }
                        if ( n_rhs[ i ] > 0 )
                        {
                          k1 = 0;
                          do
                          {
                            if ( rhs[0]->kind == 1 && ( rhs[0]->token.variable & 16383 ) == 4 )
                              sa_mark[ ( ebp_580 >> 14 ) & 63 ] = 1;
                            k1 += 2;
                          }
                          while ( k1 + 2 < n_rhs[ i ] );
                        }
                        k1 = 0;
                        k = 0;
                        do
                        {
                          k = ( k + 1 ) - ( ( *(char*)(k1 + sa_mark[0]) < ( 1 & 255 ) ) & 1 );
                          k1++;
                        }
                        while ( k1 + 1 != 64 );
                        if ( k )
                        {
                          counter_max = ( 1 << k ) + -1;
                          if ( ( 1 << k ) + -1 >= 0 )
                          {
                            ebp_580 = 1;
                            counter = 0;
                            do
                            {
                              copy_espace( i, next_espace( ) );
                              k1 = 0;
                              k = 0;
                              do
                              {
                                if ( sa_mark[0] )
                                {
                                  sa_value[ k1 ] = ( counter >> ( k/*.1_1of4*/ & 31 ) ) & 1;
                                  k++;
                                }
                                k1++;
                              }
                              while ( k1 + 1 != 64 );
                              if ( n_lhs[ ebp_576 ] > 0 )
                              {
                                k1/*.1_1of4*/ = 0;
                                do
                                {
                                  if ( *(int*)(*(int*)(edi + ( ebp_576 << 2 )) + ( k1 << 4 )) == 1 && ( *(int*)(edx + 8) & 16383 ) == 4 )
                                  {
                                    if ( sa_value[ ( ebp_620 >> 14 ) & 63 ] )
                                    {
                                      edx = 0;
                                      *(double*)(ecx + *(int*)(edi + ( ebp_576 << 2 )) + 8) = -1.000000000000;
                                    }
                                    else
                                    {
                                      edx = 0;
                                      *(double*)(ecx + *(int*)(edi + ( ebp_576 << 2 )) + 8) = 1.000000000000;
                                    }
                                  }
                                  k1 += 2;
                                }
                                while ( k1 + 2 < n_lhs[ ebp_576 ] );
                              }
                              if ( n_rhs[ ebp_576 ] > 0 )
                              {
                                k1 = 0;
                                do
                                {
                                  if ( *(int*)(*(int*)(edi + ( ebp_576 << 2 )) + ( k1 << 4 )) == 1 && ( *(int*)(edx + 8) & 16383 ) == 4 )
                                  {
                                    if ( sa_value[ ( ebp_620 >> 14 ) & 63 ] )
                                    {
                                      edx = 0;
                                      *(double*)(ecx + *(int*)(edi + ( ebp_576 << 2 )) + 8) = -1.000000000000;
                                    }
                                    else
                                    {
                                      edx = 0;
                                      *(double*)(ecx + *(int*)(edi + ( ebp_576 << 2 )) + 8) = 1.000000000000;
                                    }
                                  }
                                  k1 += 2;
                                }
                                while ( k1 + 2 < n_rhs[ ebp_576 ] );
                              }
                              k1 = 0;
                              k = 0;
                              do
                              {
                                if ( sa_mark[0] == 0 )
                                  goto B79;
                                else
                                {
                                  if ( k )
                                    __fprintf_chk( gfp, 1, ", " );
                                  else
                                    __fprintf_chk( gfp, 1, "Solution number %ld with ", ebp_580 );
                                  list_var( ( k1 << 14 ) + 4, 0 );
                                  __fprintf_chk( gfp, 1, "%s = ", var_str );
                                  if ( sa_value[ k1 ] )
                                  {
                                    __fprintf_chk( gfp, 1, "-1" );
                                    k = 1;
                                  }
                                  else
                                  {
                                    __fprintf_chk( gfp, 1, "1" );
                                    k = 1;
                                  }
                                }
B79:;
                                k1++;
                              }
                              while ( k1 + 1 != 64 );
                              if ( k )
                                __fprintf_chk( gfp, 1, ":\n" );
                              if ( quickest_flag )
                                simp_equation( ebp_576 );
                              else
                              {
                                simpa_repeat_side( lhs[ ebp_576 ], &n_lhs[ ebp_576 ], quick_flag, ebp_600 );
                                simpa_repeat_side( rhs[ ebp_576 ], &n_rhs[ ebx >> 2 ], edi, ebp_600 );
                              }
                              k1 = 0;
                              i1 = ebp_576;
                              do
                              {
                                if ( previous_solution_number[ k1 ] && compare_es( k1, i1 ) )
                                {
                                  n_lhs[ ebp_576 ] = 0;
                                  n_rhs[ ebp_576 ] = 0;
                                  __fprintf_chk( gfp, 1, "is identical to solution number %ld.\n", previous_solution_number[ k1 ] );
                                  break;
                                }
                                else
                                {
                                  k1++;
                                }
                              }
                              while ( k1 + 1 != 100 );
                              if ( n_lhs[ ebp_576 ] )
                              {
                                list_sub( eax );
                                previous_solution_number[ ebp_576 ] = ebp_580;
                              }
                              counter++;
                              ebp_580++;
                            }
                            while ( counter_max < counter );
                          }
                        }
                      }
                    }
                  }
                  i++;
                }
                while ( i + 1 <= j );
              }
              symb_flag = 0;
            }
          }
        }
      }
    }
    cp = skip_param( cp );
  }
}
int factor_cmd( char *cp )
{
  int ebp_4168;
  int ebp_4164;
  int ebp_4160;
#error unstructured control flow
}
int unfactor_cmd( char *cp )
{
  int i, j;
  int quick_flag, fraction_flag, power_flag = 0;
  quick_flag = 0;
  fraction_flag = 1;
  while ( 1 )
  {
    if ( strncasecmp( cp, "quick", 4 ) == 0 )
      quick_flag = fraction_flag;
    else
    {
      if ( strncasecmp( cp, "fraction", 4 ) && strncasecmp( cp, "fully", 4 ) )
      {
        if ( strncasecmp( cp, "power", 4 ) == 0 )
          power_flag = fraction_flag;
        else
        {
          if ( get_range_eol( &cp, &i, &j ) == 0 )
            break;
          partial_flag = fraction_flag == 0;
          if ( power_flag )
          {
            if ( i <= j )
            {
              do
              {
                if ( n_lhs[0] )
                {
                  if ( quick_flag )
                    uf_power( lhs[0], &n_lhs[ i ] );
                  else
                    uf_allpower( lhs[0], &n_lhs[ i + 1 ] );
                  elim_loop( lhs[0], &n_lhs[ i ] );
                  if ( n_rhs[ i ] )
                  {
                    if ( quick_flag )
                      uf_power( rhs[ i ], &n_rhs[ i ] );
                    else
                      uf_allpower( rhs[ i ], &n_rhs[ i ] );
                    elim_loop( rhs[ i ], &n_rhs[ i ] );
                  }
                  if ( return_result( i ) == 0 )
                  {
                    partial_flag = 1;
                    break;
                  }
                }
                i++;
              }
              while ( i + 1 <= j );
            }
          }
          else
          if ( j < i )
          {
            partial_flag = 1;
            break;
          }
          do
          {
            if ( n_lhs[0] )
            {
              if ( quick_flag )
              {
                uf_tsimp( lhs[0], &n_lhs[ i ] );
                if ( n_rhs[ i ] )
                  uf_tsimp( rhs[ i ], &n_rhs[ i ] );
              }
              else
              {
                uf_simp( lhs[0], &n_lhs[ i ] );
                if ( n_rhs[ i ] )
                  uf_simp( rhs[ i ], &n_rhs[ i ] );
              }
              if ( return_result( i ) == 0 )
              {
                partial_flag = 1;
                break;
              }
            }
            i++;
          }
          while ( i + 1 <= j );
        }
      }
      else
      {
      }
    }
    cp = skip_param( cp );
  }
}
int fraction_cmd( char *cp )
{
  int i, j;
  if ( get_range_eol( &cp, &i, &j ) )
  {
    if ( i <= j )
    {
      do
      {
        if ( n_lhs[0] )
        {
          simple_frac_side( lhs[0], &n_lhs[ i ] );
          simple_frac_side( rhs[ i ], &n_rhs[ i ] );
          if ( return_result( i ) == 0 )
          {
            break;
          }
        }
        i++;
      }
      while ( i + 1 <= j );
    }
    return 1;
  }
  return 1;
}
int quit_cmd( char *cp )
{
  int ev = 0;
  if ( cp[0] == 0 || extra_characters( cp ) == 0 )
  {
    exit_program( ev );
  }
  return 0;
}
int read_cmd( char *cp )
{
  if ( security_level > 2 )
  {
    error( "Command disabled." );
  }
  read_file( cp );
  return read_file( cp );
}
int read_file( char *cp )
{
  int eax;
  int ebx;
  int rv;
  FILE *fp;
  char buf[4096];
  if ( cp[0] == 0 )
  {
    error( "No file name specified." );
  }
  else
  {
    __snprintf_chk( buf, 4096, 1, 4096, "%s.in", cp );
    fp = (FILE*)fopen( buf, "r" );
    if ( fopen( buf, "r" ) == 0 )
    {
      fp = (FILE*)fopen( cp, "r" );
      if ( fopen( cp, "r" ) == 0 )
      {
        error( "Can't open input file." );
      }
    }
    else
      cp[0] = buf[0];
    rv = read_sub( &fp->_flags );
    if ( read_sub( &fp->_flags ) )
      __printf_chk( 1, "Read operation aborted.\n" );
    else
    if ( quiet_mode == 0 )
      __printf_chk( 1, "Finished reading file \"%s\".\n", cp );
    fclose( fp );
  }
  return rv == 0;
}
int read_sub( FILE *fp )
{
  int rv;
  jmp_buf save_save;
  char *cp;
  memmove( save_save[0].__jmpbuf, ebp_180, ebp_176 );
  rv = _setjmp( &jmp_save[0].__jmpbuf[0] );
  if ( _setjmp( &jmp_save[0].__jmpbuf[0] ) )
  {
    clean_up( );
    if ( rv == 14 )
      error( "Expression too large." );
  }
  else
  {
    while ( cp == 0 )
    {
      if ( display_process( cp ) )
        continue;
      else
      {
        __longjmp_chk( &jmp_save[0].__jmpbuf[0], 3 );
      }
    }
  }
  memmove( jmp_save[0].__jmpbuf, save_save[0].__jmpbuf, 156 );
  return rv;
}
int edit_sub( char *cp )
{
  char cl[4096];
  char *cp1;
  *(int*)&cp[0] = 0;
  do
  {
    if ( cp1 )
    {
      __snprintf_chk( cl, 4096, 1, 4096, "%s %s", cp1, cp );
      if ( shell_out( cl ) )
      {
        error( "Error executing editor, check EDITOR environment variable." );
        __printf_chk( 1, "Command line = \"%s\".\n", cl );
      }
      else
      {
        clear_all( );
      }
    }
    else
    {
      error( "EDITOR environment variable not set." );
    }
    return 1;
  }
  while ( !read_cmd( cp ) && pause_cmd( "Prepare to rerun the editor" ) );
}
int edit_cmd( char *cp )
{
  int eax;
  FILE *fp;
  int fd;
  int rv;
  char tmp_file[4096];
  if ( security_level )
  {
    error( "Command disabled." );
    rv = 0;
  }
  else
  {
    clean_up( );
    if ( cp[0] == 0 )
    {
      my_strlcpy( tmp_file, "/tmp/mathomatic.XXXXXX", 4096 );
      if ( fd < 0 || fdopen( fd, "w+" ) == 0 )
      {
        error( "Can't create temporary file." );
        rv = 0;
      }
      else
      {
        gfp = fp;
        high_prec = 1;
        list_cmd( "all" );
        high_prec = 0;
        gfp = default_out;
        fclose( fp );
        rv = edit_sub( tmp_file );
        unlink( tmp_file );
      }
    }
    else
    {
      if ( access( cp, 6 ) )
      {
        error( "You can only edit existing/writable files or all equations." );
        rv = 0;
      }
      else
      {
        rv = edit_sub( cp );
      }
    }
  }
  return rv;
}
int save_cmd( char *cp )
{
  int ebx;
  int esi;
  FILE *fp;
  int rv;
  if ( security_level > 1 )
  {
    error( "Command disabled." );
    rv = 0;
  }
  clean_up( );
  if ( cp[0] == 0 )
  {
    error( "No file name specified." );
    rv = 0;
  }
  if ( access( cp, 0 ) == 0 )
  {
    if ( access( cp, 2 ) )
    {
      error( "Specified save file is not writable." );
      rv = 0;
    }
    __snprintf_chk( prompt_str, 80, 1, 80, "File \"%s\" exists, overwrite (y/n)? ", cp );
    if ( get_yes_no( ) == 0 )
    {
      __printf_chk( 1, "Command aborted.\n" );
      rv = 0;
    }
  }
  fp = (FILE*)fopen( cp, "w" );
  if ( fopen( cp, "w" ) == 0 )
  {
    error( "Can't create specified save file." );
    rv = 0;
  }
  gfp = fp;
  high_prec = 1;
  rv = list_cmd( "all" );
  high_prec = 0;
  gfp = default_out;
  if ( !fclose( fp ) && rv )
  {
    __printf_chk( 1, "All equations saved in file \"%s\".\n", cp );
  }
  error( "Error encountered while saving equations." );
  return 0;
}
#if 0
#endif
