#include "am.c.h"
void error( char *str )
{
  error_str = str;
  set_color( 2 );
  __printf_chk( 1, "%s\n", str );
  default_color( );
  return;
}
void warning( char *str )
{
  warning_str = str;
  if ( debug_level >= 0 )
  {
    set_color( 1 );
    __printf_chk( 1, "Warning: %s\n", str );
    default_color( );
  }
  return;
}
void error_huge( void )
{
  __longjmp_chk( &jmp_save[0].__jmpbuf[0], 14 );
}
void error_bug( char *str )
{
  error( str );
  __printf_chk( 1, "Please report this bug to the maintainers,\n" );
  __printf_chk( 1, "along with the entry sequence that caused it.\n" );
  __printf_chk( 1, "Type \"help bugs\" for info on how to report bugs found in this program.\n" );
  __longjmp_chk( &jmp_save[0].__jmpbuf[0], 13 );
}
void check_err( void )
{
  if ( *(int*)(__errno_location( )) == 33 )
  {
    *(int*)(__errno_location( )) = 0;
    if ( domain_check )
    {
      domain_check = 0;
      return;
    }
    else
    {
      error( "Domain error in constant." );
      __longjmp_chk( &jmp_save[0].__jmpbuf[0], 2 );
    }
  }
  else
  if ( *(int*)(__errno_location( )) == 34 )
    goto B6;
  else
  {
    return;
  }
B6:;
  *(int*)(__errno_location( )) = 0;
  error( "Overflow error in constant." );
  __longjmp_chk( &jmp_save[0].__jmpbuf[0], 2 );
  return;
}
void get_screen_size( void )
{
  struct winsize ws;
  ws.ws_col = 0;
  ws.ws_row = 0;
  if ( ioctl( 1, 21523, ws.ws_row ) >= 0 )
  {
    if ( ws.ws_col & 65535 )
      screen_columns = ws.ws_col;
    if ( ws.ws_row & 65535 )
    {
      screen_rows = ws.ws_row;
    }
  }
  return;
}
int init_mem( void )
{
  scratch = malloc( ( ( n_tokens * 3 ) / 2 ) * sizeof( token_type ) );
  if ( scratch )
  {
    tes = malloc( ( n_tokens ) * sizeof( token_type ) );
    if ( tes )
    {
      tlhs = malloc( ( n_tokens ) * sizeof( token_type ) );
      if ( tlhs )
      {
        trhs = malloc( ( n_tokens ) * sizeof( token_type ) );
        if ( trhs && alloc_next_espace( ) >= 0 )
        {
          clear_all( );
          return 0;
        }
      }
    }
  }
  return 0;
}
void init_gvars( void )
{
  domain_check = 0;
  high_prec = 0;
  partial_flag = 1;
  symb_flag = 0;
  sign_cmp_flag = 0;
  approximate_roots = 0;
  repeat_flag = 0;
  zero_token.level = 1;
  zero_token.kind = CONSTANT;
  zero_token.token.constant = 0.000000000000;
  one_token.level = 1;
  one_token.kind = CONSTANT;
  one_token.token.constant = 1.000000000000;
  return;
}
void clean_up( void )
{
  int i;
  init_gvars( );
  if ( gfp != default_out )
  {
    if ( stdout != gfp && stderr != gfp )
      fclose( gfp );
    gfp = default_out;
  }
  if ( n_equations > 0 )
  {
    i = 0;
    do
    {
      if ( n_lhs[0] <= 0 )
      {
        n_lhs[0] = 0;
        n_rhs[0] = 0;
      }
      i++;
    }
    while ( n_equations != i + 1 );
  }
  return;
}
void set_sign_array( void )
{
  int eax;
  int ecx;
  int edx;
  int i, j = 64;
  if ( !(_Bool)( 1 ) )
  {
    *(int*)&sign_array[0] = 0;
    j += -1;
  }
  if ( sign_array[1] & 2 )
  {
    sign_array[1] = sign_array[0];
    j += -2;
  }
  memset( *(int*)(0), 0, ( j >> 2 ) * 4 );
  if ( ( j/*.1_1of4*/ & 2 ) & 255 )
    sign_array[3] = sign_array[0];
  if ( ( j/*.1_1of4*/ & 1 ) & 255 )
    sign_array[3] = sign_array[0];
  if ( n_equations > 0 )
  {
    i = 0;
    do
    {
      if ( n_lhs[ i ] > 0 )
      {
        j = 0;
        do
        {
          if ( lhs[ i ]->kind == 1 && ( lhs[ i ]->token.variable & 16383 ) == 4 )
            sign_array[ ( lhs[ i ]->token.variable >> 14 ) & 63 ] = 1;
          j += 2;
          lhs[ i ]->kind = lhs[ i ] + 32;
        }
        while ( j + 2 < n_lhs[ i ] );
        if ( n_rhs[ i ] > 0 )
        {
          j = 0;
          do
          {
            if ( rhs[ i ]->kind == 1 && ( rhs[ i ]->token.variable & 16383 ) == 4 )
              sign_array[ ( esi >> 14 ) & 63 ] = 1;
            j += 2;
            rhs[ i ]->kind = rhs[ i ] + 32;
          }
          while ( j + 2 < n_rhs[ i ] );
        }
      }
      i++;
    }
    while ( n_equations != i + 1 );
  }
  return;
}
int next_sign( long *vp )
{
  int ecx;
  int i = 1;
  if ( sign_array[0] )
  {
    do
    {
      if ( sign_array[0] == 0 )
      {
        vp[0] = ( i << 14 ) + 4;
        sign_array[ i + 1 ] = 1;
        break;
      }
      i++;
    }
    while ( i + 1 != 64 );
    vp[0] = 4;
    return 1;
  }
  else
  {
  }
  vp[0] = ( i << 14 ) + 4;
  sign_array[ i + 1 ] = 1;
  return 1;
}
void clear_all( void )
{
  int ecx;
  int edx;
  int i;
  cur_equation = 0;
  memset( n_lhs, 0, 400 );
  memset( n_rhs, 0, 400 );
  if ( var_names[0] )
  {
    i = 0;
    do
    {
      free( var_names[0] );
    }
    while ( var_names[0] == 0 );
  }
  if ( !(_Bool)( 1 ) )
    *(int*)&sign_array[0] = 0;
  if ( sign_array[1] & 2 )
    sign_array[1] = sign_array[0];
  memset( *(int*)(0), 0, ( ( 64 + -1 + -2 ) >> 2 ) * 4 );
  if ( ( ( 64 + -1 + -2 ) & 2 ) & 255 )
    sign_array[3] = sign_array[0];
  if ( ( ( 64 + -1 + -2 ) & 1 ) & 255 )
    sign_array[3] = sign_array[0];
  init_gvars( );
  return;
}
int alloc_espace( int i )
{
  if ( i <= 99 )
  {
    if ( lhs[ i ] == 0 || rhs[ i ] == 0 )
    {
      lhs[ i ] = malloc( ( n_tokens ) * sizeof( token_type ) );
      if ( lhs[ i ] == 0 )
      {
        return 1;
      }
      rhs[ i ] = malloc( ( n_tokens ) * sizeof( token_type ) );
      if ( rhs[ i ] == 0 )
      {
        free( lhs[ i ] );
        lhs[0] = 0;
        return 1;
      }
    }
    return 1;
  }
  return 1;
}
int alloc_next_espace( void )
{
  int eax;
  int edx;
  int i, n = n_equations;
  if ( cur_equation < n_equations )
  {
    if ( n_lhs[ cur_equation ] )
    {
      n = __MOD(( n + 1 ),100);
      i = 1;
      for ( ; n < n;  )
      {
        if ( *(int*)(esi + ( n << 2 )) == 0 )
        {
          n_rhs[ n ] = 0;
          break;
        }
        i++;
        if ( i + 1 == 100 )
        {
          n = -1;
          break;
        }
        else
        {
          n = __MOD(( n + 1 ),100);
        }
      }
    }
    n_rhs[ n ] = 0;
    return n;
  }
  if ( alloc_espace( n ) == 0 )
  {
    warning( "Memory is exhausted." );
    if ( n_equations <= 0 )
    {
      n = -1;
      return n;
    }
    n = 0;
    if ( n_lhs[0] )
    {
      do
      {
        n++;
        if ( n + 1 < n_equations )
          continue;
      }
      while ( n_lhs[0] );
    }
    n_rhs[ n ] = 0;
    return n;
  }
  else
  {
    n_equations++;
    return n;
  }
}
int next_espace( void )
{
  int i;
  if ( i < 0 )
  {
    error( "Out of free equation spaces." );
    __printf_chk( 1, "Use the clear command on unnecessary equations and try again.\n" );
    __longjmp_chk( &jmp_save[0].__jmpbuf[0], 3 );
  }
  return __printf_chk( 1, "Use the clear command on unnecessary equations and try again.\n" );
}
void copy_espace( int src, int dest )
{
  if ( src != dest )
  {
    memmove( lhs[ dest ], lhs[ src ], n_lhs[ src ] << 4 );
    n_lhs[0] = n_lhs[0];
    memmove( rhs[ dest ], rhs[ src ], n_rhs[ src ] << 4 );
    n_rhs[0] = n_rhs[0];
  }
  return;
}
int solved_equation( int i )
{
  int eax;
  return 0;
}
int found_var( token_type *p1, int n, long v )
{
  int edx;
  int j;
  int count;
  if ( v && n > 0 )
  {
    count = 0;
    j = 0;
    do
    {
      if ( p1->kind == 1 )
        count += ( v == *(int*)(p1 + 8) ) & 255;
      j++;
      p1->kind = p1 + 16;
    }
    while ( n != j + 1 );
  }
  else
  {
    count = 0;
  }
  return count;
}
int var_in_equation( int i, long v )
{
  int eax;
  int esi;
  if ( n_lhs[ i ] > 0 )
  {
    if ( found_var( lhs[ i ], n_lhs[ i ], v ) == 0 )
    {
      if ( n_rhs[ i ] > 0 )
      {
        return 1 != 0;
      }
    }
    else
    {
      return 1 != 0;
    }
  }
  return 1 != 0;
}
void subst_var_with_exp( token_type *equation, int *np, token_type *expression, int len, long v )
{
  int eax;
  int ecx;
  int edx;
  int ebp_36;
  int ebp_32;
  int ebp_28;
  int j, k;
  int level;
  if ( v && len > 0 && np[0] + -1 >= 0 )
  {
    ebp_36 = 0 - np[0];
    ebp_32 = equation + ( ( len + j ) << 4 );
    ebp_28 = equation + ( np[0] << 4 );
    do
    {
      if ( equation == 1 && v == (equation->token.variable) )
      {
        if ( n_tokens < np[0] + len + -1 )
          error_huge( );
        memmove( ebp_32, ebp_28, ( ebp_36 + np[0] ) << 4 );
        np[0] = np[0] + len + -1;
        memmove( equation + ( j << 4 ) + -16, expression, len << 4 );
        if ( j < len + j )
        {
          k = j;
          level = equation->level;
          do
          {
            equation += level / 16;
            k++;
          }
          while ( k + 1 < edi );
        }
      }
      ebp_36++;
      ebp_32 += -16;
      ebp_28 += -16;
      j += -1;
    }
    while ( j + -1 >= 0 );
  }
  return;
}
int min_level( token_type *expression, int n )
{
  int eax;
  int edx;
  int min1;
  token_type *p1 = expression, *ep;
  if ( n <= 1 )
  {
    min1 = 1;
    if ( n > 0 )
    {
      min1 = expression->level;
    }
  }
  else
  {
    min1 = expression[1].level;
    ep = expression + ( ep << 4 );
    p1 = &expression[3].kind;
    if ( &p1[3].kind < p1 + ( ep << 4 ) )
    {
      do
      {
        min1 = p1->level < min1 ? min1 : p1->level;
        p1 += 2;
      }
      while ( &p1[2].kind < ep );
    }
  }
  return p1->level < min1 ? min1 : p1->level;
}
int get_default_en( char *cp )
{
  int i;
  return i;
}
int get_expr( token_type *equation, int *np )
{
  int eax;
  char buf[60000];
  char *cp;
  *(int*)&cp[0] = 0;
  while ( cp == 0 )
  {
    return np[0] > 0;
  }
  return np[0] > 0;
}
int prompt_var( long *vp )
{
  char buf[4096];
  char *cp = 0;
  do
  {
    my_strlcpy( prompt_str, "Enter variable: ", 80 );
    if ( cp && cp[0] )
    {
    }
    else
    {
    }
    if ( 0 ^ 0 )
      break;
    break;
  }
  while ( cp && extra_characters( cp ) == 0 );
}
int not_defined( int i )
{
  if ( i < 0 || n_equations <= i )
  {
    error( "Invalid equation number." );
  }
  else
  if ( n_lhs[ i ] <= 0 )
  {
    error( "Equation space is empty." );
  }
  return 1;
}
int current_not_defined( void )
{
  int i = cur_equation;
  if ( cur_equation < 0 || n_equations <= i || n_lhs[ i ] <= 0 )
  {
    error( "No current equation or expression." );
  }
  return 1;
}
char *get_string( char *string, int n )
{
  int ecx;
  /* phantom */ int i;
  char *cp;
  if ( quiet_mode )
    prompt_str[0] = 0;
  input_column = ~strlen( prompt_str ) + -1;
  if ( readline_enabled )
  {
    if ( echo_input == 0 )
    {
      cp[0] = readline( prompt_str );
      if ( readline( prompt_str ) == 0 )
      {
        if ( quiet_mode == 0 )
          __printf_chk( 1, "\nEnd of input.\n" );
        exit_program( 0 );
      }
      my_strlcpy( string, cp, n );
      if ( *(char*)(skip_space( cp )) && ( last_history_string == 0 || strcmp( last_history_string, cp ) ) )
      {
        add_history( cp );
        last_history_string = cp;
        string[0] = string;
        if ( ~strlen( string ) + -2 >= 0 && *(char*)(string + ~strlen( string ) + -2) == '\n' )
          *(char*)(~strlen( string ) + -2 + string) = 0;
        if ( ( stdout != gfp && stderr != gfp ) || echo_input )
          __fprintf_chk( gfp, 1, "%s%s\n", prompt_str, string );
        set_error_level( string );
        abort_flag = 0;
        return string;
      }
      else
        free( cp );
    }
  }
  else
  if ( echo_input == 0 )
    __printf_chk( 1, "%s", prompt_str );
  if ( fgets( string, n, stdin ) == 0 )
  {
    if ( quiet_mode == 0 )
      __printf_chk( 1, "\nEnd of input.\n" );
    exit_program( 0 );
  }
}
int get_yes_no( void )
{
  int eax;
  char *cp;
  char buf[4096];
  do
  {
    cp[0] = get_string( buf, 4096 );
    if ( get_string( buf, 4096 ) )
    {
      str_tolower( cp );
      if ( cp[0] != 'n' )
        continue;
    }
    if ( 0 ^ 0 )
      break;
    break;
  }
  while ( cp[0] != 'y' );
}
int return_result( int en )
{
  int eax;
  if ( n_lhs[ en ] > 0 )
  {
  }
  return list_sub( en ) != 0;
}
void free_result_str( void )
{
  if ( result_str )
  {
    free( result_str );
    result_str = 0;
  }
  result_en = -1;
  return;
}
int is_all( char *cp )
{
  return strcmp_tospace( cp, ebp_20 ) == 0;
}
int get_range( char **cpp, int *ip, int *jp )
{
  int eax;
  int ecx;
  int edx;
  int i;
  char *cp = skip_space( cpp[0] );
  if ( is_all( cp ) )
  {
    cp = skip_param( cp );
    ip[0] = 0;
    jp[0] = n_equations + -1;
    if ( n_equations + -1 > 0 && n_lhs[ n_equations + -1 ] == 0 )
    {
      do
      {
        jp[0] = n_equations + -2 + -1;
      }
      while ( jp > 0 && *(int*)(n_lhs[ n_equations + -2 + -2 ] + -4) == 0 );
    }
  }
  else
  {
    if ( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 ) + 1) & 8 ) & 255 )
    {
      ip[0] = strtol( cp, &cp, 10 ) + -1;
    }
    else
      ip[0] = cur_equation;
    if ( ip[0] < 0 || n_equations <= ip[0] )
    {
      error( "Invalid equation number." );
      return 1;
    }
    if ( cp[0] != '-' )
    {
      if ( not_defined( ip[0] ) == 0 )
      {
        jp[0] = ip[0];
        cpp[0] = skip_space( cp );
        return 1;
      }
      return 1;
    }
    else
    {
      cp[0] = cp + 1;
      cp++;
      if ( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 ) + 1) & 8 ) & 255 )
      {
        jp[0] = strtol( cp, &cp, 10 ) + -1;
      }
      else
        jp[0] = cur_equation;
      if ( jp[0] < 0 || n_equations <= jp[0] )
      {
        error( "Invalid equation number." );
        return 1;
      }
      if ( jp[0] < ip[0] )
      {
        jp[0] = ip[0] = jp[0];
      }
    }
  }
  cp = skip_space( cp );
  i = ip[0];
  if ( ip[0] <= jp[0] )
  {
    if ( n_lhs[ i ] <= 0 )
    {
      do
      {
        i++;
        if ( jp[0] < i + 1 )
        {
          error( "No equations defined in specified range." );
          break;
        }
      }
      while ( n_lhs[ i + 1 + 1 ] > 0 );
    }
    cpp[0] = cp;
    return 1;
  }
  error( "No equations defined in specified range." );
  return 1;
}
int extra_characters( char *cp )
{
  if ( cp && *(char*)(skip_space( cp )) )
  {
    error( "Extra characters or unrecognized argument." );
  }
  return 0;
}
int get_range_eol( char **cpp, int *ip, int *jp )
{
  int eax;
  if ( get_range( cpp, ip, jp ) )
  {
  }
  return extra_characters( cpp[0] ) == 0;
}
char *skip_space( char *cp )
{
  int eax;
  if ( cp && cp[0] )
  {
  }
  return cp;
}
long decstrtol( char *cp, char **cpp )
{
  int esi;
  long l = strtol( cp, cpp, 10 );
  if ( cpp && cpp[0] != cp )
  {
    cpp[0] = skip_space( cpp[0] );
  }
  return l;
}
int isdelimiter( int ch )
{
  return 1;
}
char *skip_param( char *cp )
{
  if ( cp )
  {
    if ( cp[0] )
    {
      do
      {
      }
      while ( ( (_Bool)( ( cp[0] >> 7 ) & 1 ) || !isdelimiter( cp[0] ) ) && cp[0] );
    }
    cp = skip_space( cp );
    if ( isdelimiter( cp[0] ) )
    {
      cp = skip_space( cp + 1 + 1 );
    }
  }
  return cp;
}
int strcmp_tospace( char *cp1, char *cp2 )
{
  char *cp1a, *cp2a;
  cp1a[0] = cp1;
  if ( cp1[0] )
  {
    do
    {
    }
    while ( !isdelimiter( cp1a[0] ) && cp1a[0] );
  }
  cp2a[0] = cp2;
  if ( cp2[0] )
  {
    do
    {
    }
    while ( !isdelimiter( cp2a[0] ) && cp2a[0] );
  }
  return strncasecmp( cp1, cp2, cp2a[0] - cp2 < cp1a - cp1 - cp1 ? cp2a[0] - cp2 : cp1a - cp1 - cp1 );
}
int level_plus_count( token_type *p1, int n1, int level )
{
  int eax;
  int edx;
  int i;
  int count = 0;
  if ( n1 > 1 )
  {
    i = 1;
    do
    {
      i += 2;
      p1 += 2;
    }
    while ( i + 2 < n1 );
  }
  return 0;
}
int level1_plus_count( token_type *p1, int n1 )
{
  return level_plus_count( p1, n1, min_level( p1, n1 ) );
}
int var_count( token_type *p1, int n1 )
{
  int eax;
  int ecx;
  int i;
  int count = 0;
  if ( n1 > 0 )
  {
    i = 0;
    do
    {
      count += *(int*)(p1) == 1;
      i += 2;
      p1->kind = p1 + 32;
    }
    while ( i + 2 < n1 );
  }
  return 0;
}
int no_vars( token_type *source, int n, long *vp )
{
  int eax;
  int ecx;
  int j;
  int found;
  if ( vp[0] )
  {
  }
  found = 0;
  if ( n > 0 )
  {
    found = 0;
    j = 0;
    do
    {
      if ( *(int*)(var_count( source, n )) == 1 && ( source->token.variable & 16383 ) > 4 )
      {
        if ( vp[0] )
        {
          if ( source->token.constant != vp[0] )
          {
            vp[0] = 0;
            break;
          }
        }
        else
        {
          vp[0] = source->token.variable;
          found = 1;
        }
      }
      j += 2;
      source += 2;
    }
    while ( j + 2 < n );
  }
  return found == 0;
}
int exp_contains_infinity( token_type *p1, int n1 )
{
  int i;
  if ( n1 > 0 )
  {
    i = 0;
    do
    {
      if ( p1->kind == 0 && __finite( *(double*)(p1 + 8) ) == 0 )
      {
        break;
      }
      i++;
    }
    while ( i + 1 < n1 );
  }
  return 0;
}
int exp_contains_nan( token_type *p1, int n1 )
{
  int i;
  return 0;
}
int exp_is_numeric( token_type *p1, int n1 )
{
  int eax;
  int i;
  return 1;
}
int check_divide_by_zero( double denominator )
{
  double fp7;
  if ( denominator == 0 )
  {
    warning( "Division by zero." );
  }
  return 1;
}
#if 0
#endif
