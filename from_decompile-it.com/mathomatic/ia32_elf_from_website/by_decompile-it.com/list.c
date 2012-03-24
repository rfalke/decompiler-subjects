#include "list.c.h"
static int carray[6] = { 32, 33, 31, 35, 34, 36 };
static char *bright_html_carray[7] = { "#00FF00", "#FFFF00", "#FF0000", "#FF9000", "#FF00FF", "#00FFFF", "#0000FF" };
static char *html_carray[7] = { "green", "olive", "red", "maroon", "purple", "teal", "navy" };
static int cur_line;
static int cur_pos;
void reset_attr( void )
{
  if ( color_flag && cur_color >= 0 )
  {
    if ( html_flag )
      __printf_chk( 1, "&lt;/font&gt;" );
    else
      __printf_chk( 1, "\033[0m" );
  }
  cur_color = -1;
  if ( fflush( 0 ) )
  {
    perror( "fflush(3) call failed" );
  }
  return;
}
Missing divisor:  0x92492493(2)
Missing divisor:  0x92492493(2)
void set_color( int color )
{
  if ( stdout == gfp && cur_color != color && color_flag )
  {
    if ( html_flag )
    {
      if ( cur_color >= 0 )
        __printf_chk( 1, "&lt;/font&gt;" );
      if ( bold_colors )
Missing divisor:  0x92492493(2)
Missing divisor:  0x92492493(2)
        __printf_chk( 1, "&lt;font color=\"%s\"&gt;", bright_html_carray[ color - ( ( color / 0 ) * 7 ) ] );
      else
Missing divisor:  0x92492493(2)
Missing divisor:  0x92492493(2)
        __printf_chk( 1, "&lt;font color=\"%s\"&gt;", html_carray[ color - ( ( color / 0 ) * 7 ) ] );
    }
    else
      __printf_chk( 1, "\033[%d;%dm", bold_colors, carray[ __MOD(color,6) ] );
    cur_color = color;
  }
  return;
}
void default_color( void )
{
  set_color( 0 );
  return;
}
void trim_zeros( char *buf )
{
  int ecx;
  int edx;
  int j;
  buf[0] = buf;
  j = -1;
  j = ~j + -2;
  if ( ~j + -2 >= 0 )
  {
    buf[0] = ~j + -1 + buf;
    do
    {
      if ( *(char*)(buf + -1) != '0' )
      {
        if ( *(char*)(buf + -1) == '.' )
          buf[1] = 0;
        else
          break;
      }
      buf[0] = buf + -1;
      j += -1;
    }
    while ( j + -1 >= 0 );
  }
  return;
}
int list1_sub( int n, int export_flag )
{
  int esi;
  int edi;
  int len = 0;
  if ( n_lhs[ n ] > 0 )
  {
    if ( export_flag || high_prec )
      len = 0;
    else
    {
      len = __fprintf_chk( gfp, 1, "#%d: ", n + 1 );
    }
    len += list_proc( lhs[ n ], n_lhs[ n ], export_flag );
    if ( n_rhs[ n ] )
    {
      len += len + __fprintf_chk( gfp, 1, " = " );
    }
    if ( export_flag == 1 )
    {
      len += __fprintf_chk( gfp, 1, ";" );
    }
    __fprintf_chk( gfp, 1, "\n" );
  }
  return len;
}
int list_sub( int n )
{
  if ( n_lhs[ n ] > 0 )
  {
    make_fractions_and_group( n );
    if ( factor_int_flag )
      factor_int_sub( n );
    if ( display2d )
    {
      flist_equation( n );
    }
    list1_sub( n, 0 );
  }
  return list1_sub( n, 0 );
}
void list_debug( int level, token_type *p1, int n1, token_type *p2, int n2 )
{
  int ebx;
  int esi;
  if ( level <= debug_level )
  {
    __fprintf_chk( gfp, 1, "level %d: ", level );
    list_proc( p1, n1, 0 );
    if ( p2 && n2 > 0 )
    {
      __fprintf_chk( gfp, 1, " = " );
      list_proc( p2, n2, 0 );
    }
    __fprintf_chk( gfp, 1, "\n" );
  }
  return;
}
char *var_name( long v )
{
  int eax;
  char *cp;
  long l = ( v & 16383 ) + -65;
  cp = 0;
  return ( v & 16383 ) + -65 <= 7999 ? 0 : var_names[ l ];
}
int list_var( long v, int lang_code )
{
  int eax;
  int j;
  int from_memory;
  char *cp;
  var_str[0] = 0;
  switch ( v & 16383 )
  {
  case 4:
    from_memory = 0;
    cp = "sign";
    if ( cp )
    {
      j = ( j >> 14 ) & 63;
      if ( ( j >> 14 ) & 63 )
        __snprintf_chk( var_str, 180, 1, 180, "%s%d", cp, j + -1 + -1 );
        if ( from_memory && lang_code && var_str[0] )
        {
          j = 0;
          do
          {
            if ( var_str[0] != '_' && ( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( var_str[0] * 2 )) & 8 ) & 255 ) == 0 )
              var_str[0] = '_';
            j++;
          }
          while ( *(char*)(j + var_str[0] + 1) );
        }
        return ~strlen( var_str ) + -1;
      else
        my_strlcpy( var_str, cp, 180 );
    }
    else
      my_strlcpy( var_str, "bad_variable", 180 );
    break;
  case 5:
    cp = "all";
    break;
  case 0:
    return ~strlen( var_str ) + -1;
    break;
  case 3:
    switch ( lang_code + 3 )
    {
    case 3:
      cp = "i#";
      break;
    case 1:
      cp = "i";
      break;
    case 0:
      from_memory = 0;
      cp = "{0,1}";
      break;
    case 2:
      cp = "%i";
      break;
    case 6:
      cp = "1j";
      break;
    case 4:
    case 5:
      cp = "1.0i";
      break;
    }
    from_memory = 0;
    j = ( j >> 14 ) & 63;
    break;
  case 1:
    switch ( lang_code + 3 )
    {
    case 4:
      cp = "M_E";
      break;
    case 2:
      cp = "%e";
      break;
    case 0:
      from_memory = 0;
      cp = "exp(1.0)";
      break;
    case 3:
      cp = "e#";
      break;
    case 5:
      cp = "Math.E";
      break;
    case 6:
      cp = "math.e";
      break;
    case 1:
      cp = "e";
      break;
    }
    break;
  case 2:
    cp = "pi";
    switch ( lang_code + 1 )
    {
    case 3:
      cp = "Math.PI";
      break;
    case 1:
      cp = "pi#";
      break;
    case 0:
      from_memory = 0;
      cp = "%pi";
      break;
    case 4:
      cp = "math.pi";
      break;
    default:
      break;
    case 2:
      cp = "M_PI";
      break;
    }
    break;
  default:
    var_name( v );
    from_memory = 1;
    break;
  }
}
int list_proc( token_type *p1, int n, int export_flag )
{
  return list_string_sub( p1, n, 1, 0, export_flag );
}
char *list_equation( int n, int export_flag )
{
  int eax;
  int ecx;
  int esi;
  int edi;
  int len;
  char *cp = 0;
  if ( n_lhs[ n ] > 0 )
  {
    list_string( lhs[ n ], n_lhs[ n ], 0, export_flag );
    if ( n_rhs[ n ] )
    {
      len = cp + list_string( rhs[ n ], n_rhs[ n ], 0, export_flag );
    }
    len = len + 2;
    cp = malloc( ( len + 2 + 2 ) * sizeof( char ) );
    if ( malloc( len + 2 + 2 ) == 0 )
    {
      error( "Out of memory (can't malloc(3))." );
    }
    list_string( lhs[ n ], n_lhs[ n ], cp, export_flag );
    if ( n_rhs[ n ] )
    {
      *(int*)(cp + ~strlen( cp ) + -1) = 2112800;
      list_string( rhs[ n ], n_rhs[ n ], cp + ~strlen( cp ) + -1, export_flag );
    }
    if ( export_flag == 1 )
    {
      *(short*)(cp + ~strlen( cp ) + -1) = 59;
    }
  }
  return cp;
}
char *list_expression( token_type *p1, int n, int export_flag )
{
  int edi;
  int len;
  char *cp = 0;
  if ( n > 0 )
  {
    len = p1;
    len++;
    cp = &len;
    if ( len == 0 )
    {
      error( "Out of memory (can't malloc(3))." );
    }
    len = p1;
    list_string( p1, n, &len, export_flag );
  }
  len = cp[0];
  return &cp[0];
}
int list_string( token_type *p1, int n, char *string, int export_flag )
{
  return list_string_sub( p1, n, 0, string, export_flag );
}
int list_string_sub( token_type *p1, int n, int outflag, char *string, int export_flag )
{
  int eax;
  double fp7;
  int i, j, k, i1;
  int min1;
  int cur_level;
  char *cp;
  int len;
  char buf[500], buf2[500];
  int export_precision;
  int cflag = ( export_flag == 0 ) & ( outflag != 0 );
  if ( string )
    string[0] = 0;
  export_precision = ( ( 0 - ( ( high_prec < 1 ) & 1 ) ) & -5 ) + 20;
  min1 = min_level( p1, n );
  return 0;
}
int int_expr( token_type *p1, int n )
{
  double fp5;
  double fp6;
  double fp7;
  int i;
  if ( n > 0 )
  {
    i = 0;
    do
    {
      if ( p1->kind )
      {
        if ( p1[1].kind == 1 && p1->token.variable <= 2 )
        {
          break;
        }
        i++;
      }
      else
      {
        while ( 1 )
          break;
      }
      break;
    }
    while ( i + 1 < n );
  }
  return 1;
}
int list_c_equation( int en, enum language_list  language, int int_flag )
{
  int esi;
  int len = 0;
  if ( n_lhs[ en ] > 0 )
  {
    len = list_code( lhs[ en ], &n_lhs[ en ], language, int_flag );
    if ( n_rhs[ en ] )
    {
      len += len + __fprintf_chk( gfp, 1, " = " );
    }
    if ( language + -1 <= 1 )
    {
      len += __fprintf_chk( gfp, 1, ";" );
    }
    __fprintf_chk( gfp, 1, "\n" );
  }
  return len;
}
int list_code( token_type *equation, int *np, enum language_list  language, int int_flag )
{
  int eax;
  int edx;
  double fp7;
  int ebp_544;
  int i, j, k, i1, i2;
  int min1 = min_level( equation, np[0] );
  int cur_level;
  char *cp;
  char buf[500];
  int len;
  min1 -= ( *(int*)(np) < 2 ) ^ 1;
  return 0;
}
int flist_equation( int n )
{
  int eax;
  int edx;
  int sind;
  char buf[50];
  int len, len2, len3, width;
  int pos;
  int high = 0, low = 0;
  int max_line, min_line;
  int max2_line, min2_line;
  width = 0;
  if ( n_lhs[ n ] > 0 )
  {
    min2_line = 0;
    max2_line = 0;
    min_line = 0;
    max_line = 0;
    len = __snprintf_chk( buf, 50, 1, 50, "#%d: ", n + 1 );
    cur_line = 0;
    cur_pos = 0;
    sind = n_rhs[ n ];
    width = len + flist_sub( lhs[ n ], n_lhs[ n ], 0, 0, &max_line, &min_line );
    len3 = 0;
    len2 = 0;
    if ( n_rhs[ n ] )
    {
      width += 3;
      do
      {
        flist_sub( rhs[ n ], sind, 0, 0, &high, &low );
        if ( screen_columns && stdout == gfp && screen_columns <= width + flist_sub( rhs[ n ], sind, 0, 0, &high, &low ) && sind > 0 )
        {
          sind += -1;
          if ( sind + -1 > 0 )
          {
          }
        }
        else
        {
          len2 = flist_sub( rhs[ n ], sind, 0, 0, &high, &low );
          max_line = high;
          if ( max_line < high )
            max_line = max_line;
          min_line = low;
          if ( low < min_line )
            min_line = min_line;
          sind = rhs[ n ][ sind ].kind;
          flist_sub( &rhs[ n ][ sind ], n_rhs[ n ] - sind, 0, 0, &max2_line, &min2_line );
        }
      }
      while ( ( rhs[ n ][ sind ].level == 1 && *(int*)(rhs[ n ][ sind ].level + -4) == 2 && (unsigned int)(rhs[ n ][ sind ].token.variable) <= 5 && ( ( 1 << (rhs[ n ][ sind ].token.variable) ) & 38 ) ) || sind + -1 <= 0 );
      if ( ( rhs[ n ][ sind ].level != 1 || *(int*)(rhs[ n ][ sind ].level + -4) != 2 || (unsigned int)(rhs[ n ][ sind ].token.variable) > 5 || !( ( 1 << (rhs[ n ][ sind ].token.variable) ) & 38 ) ) && sind + -1 > 0 )
      {
      }
    }
    len2 += width;
    width = (unsigned char)( ( width + len2 < len3 ) ^ 1 ) ? len3 : width + len2;
    if ( screen_columns && stdout == gfp && screen_columns <= width )
    {
      width = list1_sub( n, 0 );
      __fprintf_chk( gfp, 1, "\n" );
    }
    else
    {
      __fprintf_chk( gfp, 1, "\n" );
      cur_line = max_line;
      if ( min_line <= max_line )
      {
        do
        {
          cur_pos = 0;
          if ( cur_line == 0 )
          {
            cur_pos += __fprintf_chk( gfp, 1, "%s", buf );
          }
          pos = ~strlen( buf ) + -1;
          if ( n_rhs[ n ] )
          {
            if ( cur_line == 0 )
            {
              cur_pos += __fprintf_chk( gfp, 1, "%s", " = " );
            }
            flist_sub( rhs[ n ], sind, 1, pos + flist_sub( lhs[ n ], n_lhs[ n ], 1, ~strlen( buf ) + -1, &high, &low ) + 3, &high, &low );
          }
          __fprintf_chk( gfp, 1, "\n" );
          cur_line += -1;
        }
        while ( cur_line + -1 < min_line );
        sind = sind;
      }
      if ( sind < n_rhs[ n ] )
      {
        __fprintf_chk( gfp, 1, "\n" );
        cur_line = max2_line;
        if ( min2_line <= max2_line )
        {
          do
          {
            cur_pos = 0;
            flist_sub( &rhs[ n ][ sind ], n_rhs[ n ] - sind, 1, 0, &high, &low );
            __fprintf_chk( gfp, 1, "\n" );
            cur_line += -1;
          }
          while ( min2_line <= cur_line + -1 );
        }
      }
      __fprintf_chk( gfp, 1, "\n" );
    }
  }
  len2 = 0;
  return width;
}
int flist_sub( token_type *p1, int n, int out_flag, int pos, int *highp, int *lowp )
{
  int i = flist_recurse( p1, n, out_flag, 0, pos, 1, highp, lowp );
  if ( out_flag )
  {
    default_color( );
  }
  return i;
}
int flist_recurse( token_type *p1, int n, int out_flag, int line, int pos, int cur_level, int *highp, int *lowp )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  int ebp_548;
  int i, j, k, i1;
  /* phantom */ int l1, l2;
  int ii;
  int stop_at;
  int div_loc;
  int len_div;
  int level;
  /* phantom */ int start_level;
  int oflag, html_out;
  int len, len1, len2;
  int high, low;
  char buf[500];
  char *cp;
  highp[0] = line;
  lowp[0] = line;
  return 0;
}
#if 0
#endif
