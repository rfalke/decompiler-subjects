#include "help.c.h"
char *license_string = "    Mathomatic computer algebra system\n    Copyright (C) 1987-2010 George Gesslein II\n\n    This library is free software; you can redistribute it and/or\n    modify it under the terms of the GNU Lesser General Public\n    License as published by the Free Software Foundation; either\n    version 2.1 of the License, or (at your option) any later version.\n\n    This library is distributed in the hope that it will be useful,\n    but WITHOUT ANY WARRANTY; without even the implied warranty of\n    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU\n    Lesser General Public License for more details.\n\n    You should have received a copy of the GNU Lesser General Public\n    License along with this library; if not, write to the Free Software\n    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA\n\nThe full text of this license with details is contained in the file \"COPYING\"\nin the Mathomatic source distribution obtained from http://mathomatic.org\nAll Mathomatic files are published under this license.\n\nChief author, maintainer, and copyright holder contact information:\n  email:\n    gesslein@linux.com\n  postal address:\n    George Gesslein II\n    P.O. Box 224\n    Lansing, New York  14882-0224\n    USA\n";
static com_type com_list[42] = { { "approximate", 0, &approximate_cmd, "[equation-number-ranges]", "Approximate all numerical values in equation spaces.", 0 }
, { "calculate", 0, &calculate_cmd, "[\"factor\"] [variable number-of-iterations]", "Temporarily plug in values for variables and approximate.", "This command may be preceded with \"repeat\"." }
, { "clear", 0, &clear_cmd, "[equation-number-ranges]", "Delete expressions stored in memory so equation spaces can be reused.", "Tip: Use \"clear all\" to quickly restart Mathomatic." }
, { "code", 0, &code_cmd, "[\"c\" or \"java\" or \"python\" or \"integer\"] [equation-number-ranges]", "Output C, Java, or Python code for the specified equations.", "Related commands: simplify, optimize, and variables" }
, { "compare", 0, &compare_cmd, "[\"symbolic\"] equation-number [\"with\" equation-number]", "Compare two equation spaces to see if they are mathematically the same.", 0 }
, { "copy", 0, &copy_cmd, "[equation-number-range]", "Duplicate the contents of the specified equation spaces.", 0 }
, { "derivative", "differentiate", &derivative_cmd, "[\"nosimplify\"] [variable or \"all\"] [order]", "Symbolically differentiate and simplify, order times.", 0 }
, { "display", 0, &display_cmd, "[\"factor\"] [equation-number-ranges]", "Display equation spaces in pretty multi-line (2D) fraction format.", 0 }
, { "divide", 0, &divide_cmd, "[variable]", "Prompt for 2 numbers or polynomials and divide. Give result and GCD.", "This command may be preceded with \"repeat\"." }
, { "echo", 0, &echo_cmd, "[text]", "Output a line of text, followed by a newline.", 0 }
, { "edit", 0, &edit_cmd, "[file-name]", "Edit all equation spaces or an input file, then read them in.", 0 }
, { "eliminate", 0, &eliminate_cmd, "variables or \"all\" [\"using\" equation-number]", "Substitute the specified variables with solved equations.", "This command may be preceded with \"repeat\"." }
, { "extrema", 0, &extrema_cmd, "[variable] [order]", "Show where the slope of the current equation equals zero.", 0 }
, { "factor", "collect", &factor_cmd, "[\"number\" [integers]] or [\"power\"] [equation-number-range] [variables]", "Factor variables in equation spaces or factor given integers.", 0 }
, { "fraction", "together", &fraction_cmd, "[equation-number-range]", "Convert expression to a single simple fraction, if any fractions are in it.", 0 }
, { "help", 0, &help_cmd, "[topic or command-names]", "Short, built-in help and reference.", 0 }
, { "imaginary", 0, &imaginary_cmd, "[variable]", "Copy the imaginary part of the current expression.", "Related command: real" }
, { "integrate", "integral", &integrate_cmd, "[\"constant\" or \"definite\"] variable [order]", "Symbolically integrate polynomials order times, then simplify.", 0 }
, { "laplace", 0, &laplace_cmd, "[\"inverse\"] variable", "Compute the Laplace or inverse Laplace transform of polynomials.", 0 }
, { "limit", 0, &limit_cmd, "variable expression", "Take the limit as variable goes to expression (experimental).", 0 }
, { "list", 0, &list_cmd, "[\"export\" or \"maxima\" or \"gnuplot\"] [equation-number-ranges]", "Display equation spaces in single-line format.", 0 }
, { "nintegrate", 0, &nintegrate_cmd, "[\"trapezoid\"] variable [partitions]", "Do numerical definite integration using Simpson's rule.", 0 }
, { "optimize", 0, &optimize_cmd, "[equation-number-range]", "Split up equations into smaller, more efficient equations.", "Related command: code" }
, { "pause", 0, &pause_cmd, "[text]", "Wait for user to press the Enter key. Optionally display a message.", 0 }
, { "plot", 0, &plot_cmd, "[expression]", "Automatically plot expression in 2D or 3D with Gnuplot.", 0 }
, { "product", 0, &product_cmd, "variable start end [step-size]", "Compute the product as variable goes from start to end.", "Related command: sum" }
, { "push", 0, &push_cmd, "[equation-number-range]", "Push the specified expressions into the readline history.", 0 }
, { "quit", "exit", &quit_cmd, "[exit-value]", "Terminate this program without saving.", 0 }
, { "read", 0, &read_cmd, "file-name", "Read in a text file as if it was typed in.", 0 }
, { "real", 0, &real_cmd, "[variable]", "Copy the real part of the current expression.", "Related command: imaginary" }
, { "replace", 0, &replace_cmd, "[variables [\"with\" expression]]", "Substitute variables in the current equation with expressions.", 0 }
, { "roots", 0, &roots_cmd, "root real-part imaginary-part", "Display all the roots of a complex number.", "This command may be preceded with \"repeat\"." }
, { "save", 0, &save_cmd, "file-name", "Save all equation spaces in a text file.", "Related command: read" }
, { "set", 0, &set_cmd, "[[\"no\"] option] ...", "Display, set, or save current session options.", "Tip: Type \"set\" by itself to show all current option settings." }
, { "simplify", 0, &simplify_cmd, "[\"sign\"] [\"symbolic\"] [\"quick\"] [\"quickest\"] [\"fraction\"] [equation-number-range]", "Completely simplify expressions.", "This command may be preceded with \"repeat\"." }
, { "solve", 0, &solve_cmd, "[\"verify\"] [\"for\"] variable or \"0\"", "Solve the current equation for a variable or for zero.", 0 }
, { "sum", 0, &sum_cmd, "variable start end [step-size]", "Compute the summation as variable goes from start to end.", "Related command: product" }
, { "tally", 0, &tally_cmd, "[\"average\"]", "Prompt for and add entries, show total and optionally the average.", 0 }
, { "taylor", 0, &taylor_cmd, "[\"nosimplify\"] variable order point", "Compute the Taylor series expansion of the current expression.", 0 }
, { "unfactor", "expand", &unfactor_cmd, "[\"fraction\"] [\"quick\"] [\"power\"] [equation-number-range]", "Algebraically expand (multiply out) expressions.", 0 }
, { "variables", 0, &variables_cmd, "[\"c\" or \"java\" or \"integer\"] [equation-number-range]", "Show all variable names used within the specified expressions.", "Related command: code" }
, { "version", 0, &version_cmd, "", "Display Mathomatic version and license information.", 0 }
 };
char *example_strings[18] = { "; The derivative of the absolute value function:\n", "|x|\n", "derivative\n", "pause\n", "\n", "; Enter a common temperature conversion formula:\n", "fahrenheit = (9*celsius/5) + 32\n", "repeat calculate ; plug in values until an empty line is entered\n", "; Solve for the other variable and simplify the result:\n", "solve for celsius\n", "simplify\n", "variables ; show all variables that occur in an expression\n", "pause\n", "\n", "; Expand the following exponentiated sum into polynomial form:\n", "(x+1)^5\n", "unfactor\n", 0 };
int parse( int n, char *cp )
{
  if ( parse_equation( n, cp ) == 0 )
  {
    n_lhs[ n ] = 0;
    n_rhs[ n ] = 0;
  }
  if ( n_lhs[ n ] == 0 )
  {
    if ( n_rhs[ n ] == 0 )
    {
      return return_result( n );
    }
    n_lhs[ n ] = 1;
    lhs[ n ]->kind = zero_token.kind;
    lhs[ n ]->level = zero_token.level;
    lhs[ n ]->token.variable = zero_token.token.constant;
    lhs[ n ]->token.variable = *(int*)(134715680);
  }
  cur_equation = n;
  return_result( n );
  return return_result( n );
}
int process_parse( int n, char *cp )
{
  double fp5;
  double fp6;
  double fp7;
  int i;
  char *cp1, *ep;
  int equals_flag;
  if ( ep == 0 )
  {
    n_lhs[ n ] = 0;
    n_rhs[ n ] = 0;
  }
  if ( cp < ep )
  {
    cp1[0] = cp;
    if ( cp1[0] != '=' )
    {
      do
      {
        cp1[0] = cp1 + 1;
        if ( ep <= cp1 + 1 )
          goto B6;
        else
      }
      while ( cp1[0] != '=' );
    }
    equals_flag = 1;
    if ( n_lhs[ n ] == 0 )
    {
      if ( n_rhs[ n ] == 0 )
      {
        /* phantom */ size_t __s1_len;
        /* phantom */ size_t __s2_len;
        unsigned char *__s1;
        /* phantom */ int __result;
        if ( __s1[0] != 61 || "" != __s1[1] || n_lhs[ cur_equation ] <= 0 || n_rhs[ cur_equation ] <= 0 )
        {
        }
        if ( debug_level >= 0 )
          __fprintf_chk( gfp, 1, "%s\n", "Swapping both sides of the current equation..." );
        n = cur_equation;
        memmove( tes, lhs[ cur_equation ], n_lhs[ cur_equation ] << 4 );
        n_lhs[0] = n_rhs[ n ];
        memmove( lhs[0], rhs[ n ], n_rhs[ n ] << 4 );
        n_rhs[ n ] = n_lhs[ cur_equation ];
        memmove( rhs[0], tes, n_lhs[ cur_equation ] << 4 );
        return_result( cur_equation );
      }
    }
    else
    {
      if ( n_rhs[ n ] == 0 )
        goto B16;
      else
      {
        cur_equation = n;
        return_result( n );
      }
    }
B16:;
    if ( equals_flag || autosolve )
    {
      if ( n_lhs[ n ] == 1 )
      {
        if ( lhs[ n ]->kind )
        {
          if ( lhs[ n ]->kind != 1 || ( ( lhs[ n ]->token.variable & 16383 ) <= 4 && equals_flag == 0 ) )
            goto B30;
          else
          {
            if ( solve_espace( n, cur_equation ) )
            {
              return_result( cur_equation );
            }
          }
        }
        else
        if ( lhs[ n ]->token.constant/*union*/ == 0.000000000000 )
        {
          if ( *(double*)(ecx + 8) )
          {
          }
        }
      }
B30:;
      if ( n_rhs[ n ] == 1 )
      {
        if ( rhs[ n ]->kind == 0 )
        {
          if ( rhs[ n ]->token.constant/*union*/ == 0.000000000000 && rhs[ n ]->token.constant/*union*/ == 0.000000000000 )
            continue;
          else
          {
            n_lhs[ n ] = 1;
            lhs[ n ]->kind = zero_token.kind;
            lhs[ n ]->level = zero_token.level;
            lhs[ n ]->token.variable = zero_token.token.constant;
            lhs[ n ]->token.variable = *(int*)(134715680);
          }
        }
        else
        {
          if ( rhs[ n ]->kind == 1 )
            continue;
        }
      }
    }
    if ( n_rhs[ n ] )
    {
      n_lhs[ n ] = 1;
      lhs[ n ]->kind = zero_token.kind;
      lhs[ n ]->level = zero_token.level;
      lhs[ n ]->token.variable = zero_token.token.constant;
      lhs[ n ]->token.variable = *(int*)(134715680);
    }
    else
    {
      if ( autoselect && n_lhs[ n ] == 1 && lhs[ n ]->kind == 0 )
      {
        do
        {
          lhs[ n ]->token.constant = rem(lhs[ n ]->token.constant/*union*/,1.000000000000);
        }
        while ( ( ( ( ( 0 & 2048 ) | ( ( ( ( ( ftop & 7 ) << 11 ) | ( ( Rem(( rem(lhs[ n ]->token.constant/*union*/,1.000000000000) ),1.000000000000) ) & 18176 ) ) >> 8 ) & 213 ) ) >> 2 ) & 1 ) == 1 );
        if ( lhs[ n ]->token.constant/*union*/ == ( rem(lhs[ n ]->token.constant/*union*/,1.000000000000) ) )
        {
          if ( 0.000000000000 == 0.000000000000 )
          {
            if ( !0 )
            {
              if ( 0.000000000000 < lhs[ n ]->token.constant/*union*/ )
              {
                if ( (double)( n_equations ) <= lhs[ n ]->token.constant/*union*/ )
                {
                  cur_equation = (int)( lhs[ n ]->token.constant/*union*/ - 1.000000000000 );
                  n_lhs[ n ] = 0;
                  return_result( (int)( lhs[ n ]->token.constant/*union*/ - 1.000000000000 ) );
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
        fmod( lhs[ n ]->token.constant/*union*/, 1.000000000000 );
      }
      if ( autocalc == 0 )
      {
        cur_equation = n;
        return_result( n );
      }
      if ( n_lhs[ n ] )
      {
        if ( exp_is_numeric( lhs[ n ], n_lhs[ n ] ) == 0 )
        {
          cur_equation = n;
          return_result( n );
        }
        memmove( rhs[ n ], lhs[ n ], n_lhs[ n ] << 4 );
        n_rhs[ n ] = n_lhs[0];
      }
      lhs[ n ]->level = 1;
      lhs[ n ]->kind = 1;
      parse_var( &lhs[ n ]->token.constant, "answer" );
      n_lhs[ n ] = 1;
      i = cur_equation;
      cur_equation = n;
      calculate_cmd( "" );
      cur_equation = i;
      n_lhs[0] = 0;
      n_rhs[ n ] = 0;
    }
  }
B6:;
  equals_flag = 0;
  return return_result( cur_equation );
}
int process( char *cp )
{
  int eax;
  int edx;
  int ebp_4144;
  char *cp1;
  /* phantom */ char *cp_start;
  int i;
  int len;
  int rv;
  char buf2[4096];
  int our_repeat_flag;
  FILE *fp;
  char *filename;
  int append_flag;
  int i1;
  init_gvars( );
  set_sign_array( );
  rv = 0;
  if ( cp )
  {
    if ( *(char*)(skip_space( cp )) == '#' )
    {
      cp[0] = skip_space( cp ) + 1;
      cp = cp1;
      rv = 1;
      if ( cp[0] != cp1 )
      {
        if ( i < 0 || n_equations <= i )
        {
          error( "Equation not defined." );
          rv = 0;
        }
        else
        {
          cp += cp[0] == ':';
          if ( cp[0] )
          {
            input_column += cp - cp;
            rv = parse( i, cp );
          }
          else
          {
            cur_equation = i;
            return_result( i );
            rv = 1;
          }
        }
      }
    }
    else
    if ( security_level == 0 && *(char*)(skip_space( cp )) == '!' )
    {
      cp1 = getenv( "SHELL" ) == 0 ? getenv( "SHELL" ) : "/bin/sh";
      if ( access( getenv( "SHELL" ) == 0 ? getenv( "SHELL" ) : "/bin/sh", 1 ) )
      {
        error( "Shell not found or not executable, check SHELL environment variable." );
        rv = 0;
      }
      else
      {
        cp = cp[0] == 0 ? cp : cp1;
        rv/*.1_1of4*/ = shell_out( cp[0] == 0 ? cp : cp1 ) == 0;
        rv = rv == 0;
      }
    }
    else
    {
      our_repeat_flag = 1;
      if ( shell_out( cp[0] == 0 ? cp : cp1 ) != '?' )
      {
        while ( 1 )
        {
          cp1 = skip_space( cp );
          cp[0] = skip_space( cp );
          if ( *(char*)(skip_space( cp )) )
          {
            __ctype_b_loc( );
          }
          len = cp - cp1;
          if ( cp - cp1 == 6 && strncasecmp( cp1, "repeat", 6 ) == 0 )
          {
          }
          else
            break;
        }
        ebp_4144 = 0;
        do
        {
          if ( ( ( ~strlen( com_list[1].name ) + -1 > 4 ? ~strlen( com_list[1].name ) + -1 : 4 ) <= len && strncasecmp( cp1, com_list[1].name, len ) == 0 ) || ( com_list->secondary_name && ( ~strlen( com_list->secondary_name ) + -1 > 4 ? ~strlen( com_list->secondary_name ) + -1 : 4 ) <= len && strncasecmp( cp1, com_list->secondary_name, len ) == 0 ) )
          {
            cp[0] = cp;
            cp1 = skip_space( cp );
            input_column += skip_space( cp ) - cp;
            if ( my_strlcpy( buf2, cp1, 4096 ) > 4095 )
            {
              error( "Command line too long." );
              rv = 0;
            }
            else
            {
              if ( security_level <= 1 && ~strlen( buf2 ) + -2 >= 0 )
              {
                if ( buf2[ i1 ] != '>' )
                {
                  do
                  {
                    i1 += -1;
                    if ( i1 + -1 < 0 )
                    {
                    }
                    else
                  }
                  while ( *(char*)(ebp_2147483632 + ~strlen( buf2 ) + -4128) != '>' );
                }
                skip_space( &buf2[ i1 + 1 ] );
                buf2[ i1 ] = 0;
                if ( filename )
                {
                  if ( fp == 0 )
                    error( "Can't open redirected output file for writing." );
                  else
                  {
                    if ( stdout != gfp && stderr != gfp && gfp != default_out )
                      fclose( gfp );
                    gfp = fp;
                    remove_trailing_spaces( buf2 );
                    pull_number = 1;
                    repeat_flag = our_repeat_flag;
                    rv = com_list[ ebp_4144 ].func( );
                    repeat_flag = 0;
                    if ( gfp != default_out )
                    {
                      if ( stdout != com_list[ ebp_4144 ].func( ) && stderr != gfp )
                        fclose( gfp );
                      gfp = default_out;
                      if ( rv || debug_level < 0 )
                      {
                        return fp;
                      }
                      __printf_chk( 1, "Command usage: %s %s\n", &esi, com_list[ ebp_4144 ].usage );
                    }
                  }
                }
              }
              remove_trailing_spaces( buf2 );
              pull_number = 1;
              repeat_flag = our_repeat_flag;
              rv = com_list[ ebp_4144 ].func( );
              repeat_flag = 0;
            }
          }
          else
          {
            ebp_4144++;
          }
        }
        while ( ebp_4144 != 42 );
        if ( our_repeat_flag )
        {
          error( "Expecting command to repeat." );
          rv = 0;
        }
        else
        {
          input_column += cp1 - cp;
          fp = process_parse( next_espace( ), cp1 );
        }
      }
      else
      {
        input_column += skip_space( skip_space( cp ) + 1 ) - cp;
        rv = eax;
      }
    }
  }
}
int display_process( char *cp )
{
  if ( cp )
  {
    default_color( );
    input_column = __printf_chk( 1, "%d%s", cur_equation + 1, html_flag != 0 ? "-&gt; " : "&mdash;&gt; " );
    if ( html_flag )
      __printf_chk( 1, "&lt;b&gt;%s&lt;/b&gt;", cp );
    else
      __printf_chk( 1, "%s", cp );
    if ( stdout != gfp && stderr != gfp )
      __fprintf_chk( gfp, 1, "%d%s%s", cur_equation + 1, "-&gt; ", cp );
    set_error_level( cp );
    process( cp );
  }
  return process( cp );
}
int shell_out( char *cp )
{
  int rv;
  if ( security_level )
    error_bug( "Shelling out disabled." );
  reset_attr( );
  *(int*)(__errno_location( )) = 0;
  rv = system( cp );
  __printf_chk( 1, "\n" );
  if ( rv < 0 )
    perror( "system(3) call failed" );
  default_color( );
  return rv;
}
char *parse_var2( long *vp, char *cp )
{
  cp[0] = parse_var( vp, skip_space( cp ) );
  if ( parse_var( vp, skip_space( cp ) ) )
  {
    skip_space( cp );
  }
  return skip_space( cp );
}
int display_command( int i )
{
  int rows;
  __fprintf_chk( gfp, 1, "%s - %s\n", com_list[ i ].name, com_list[ i ].info );
  __fprintf_chk( gfp, 1, "Usage: %s %s\n", com_list[ i ].name, com_list->usage );
  rows = 3;
  if ( rows )
  {
    __fprintf_chk( gfp, 1, "Alternate name for this command: %s\n", com_list->secondary_name );
    rows = 4;
  }
  if ( com_list[ i ].extra )
  {
    __fprintf_chk( gfp, 1, "%s\n", com_list[ i ].extra );
    rows++;
  }
  __fprintf_chk( gfp, 1, "\n" );
  return rows;
}
int read_examples( char **cpp )
{
  /* phantom */ int i;
  char *cp;
  if ( cpp[0] == 0 )
  {
    return 1;
  }
  do
  {
    if ( display_process( __strdup( cpp[1] ) ) == 0 )
      break;
    free( cp );
  }
  while ( cpp[2] );
  return 1;
}
int help_cmd( char *cp )
{
  int eax;
  int ecx;
  int edx;
  int i, j;
  char *cp1;
  int flag;
  int row;
  if ( cp[0] && cp1 != cp )
  {
    flag = 0;
    do
    {
      i = 0;
      do
      {
        if ( strncasecmp( cp, com_list[1].name, cp1 - cp ) == 0 || ( com_list->secondary_name && strncasecmp( cp, com_list->secondary_name, cp1 - cp ) == 0 ) )
        {
          display_command( i );
          flag = 1;
        }
        i++;
      }
      while ( i + 1 != 42 );
      if ( flag )
      {
        cp[0] = skip_space( cp1 );
        if ( ( cp & 255 ) == 0 )
        {
          break;
        }
        cp1[0] = cp;
      }
      else
      {
        if ( strncasecmp( cp, "examples", cp1 - cp ) == 0 )
        {
          read_examples( example_strings );
          break;
        }
        if ( strncasecmp( cp, "copyright", cp1 - cp ) == 0 || strncasecmp( cp, "license", cp1 - cp ) == 0 )
        {
          __fprintf_chk( gfp, 1, "%s\n", "Copyright and License for Mathomatic" );
          __fprintf_chk( gfp, 1, "%s\n", "------------------------------------\n" );
          __fprintf_chk( gfp, 1, "%s", license_string );
          break;
        }
        if ( strncasecmp( cp, "bugs", cp1 - cp ) == 0 )
        {
          __fprintf_chk( gfp, 1, "%s\n", "Report bugs on the Launchpad support website for Mathomatic:" );
          __fprintf_chk( gfp, 1, "%s\n", "http://launchpad.net/mathomatic\n" );
          __fprintf_chk( gfp, 1, "%s\n", "Please include the following information (from the version command):\n" );
          version_report( );
          break;
        }
        if ( strncasecmp( cp, "usage", cp1 - cp ) )
        {
          if ( eax == 0 )
          {
            __fprintf_chk( gfp, 1, "%s\n", "Commonly used standard (Euclidean) geometric formulas" );
            __fprintf_chk( gfp, 1, "%s\n", "-----------------------------------------------------" );
            __fprintf_chk( gfp, 1, "%s\n", "Triangle of base \"b\" and height \"h\":" );
            __fprintf_chk( gfp, 1, "%s\n", "    area = b*h/2\n" );
            __fprintf_chk( gfp, 1, "%s\n", "Rectangle of length \"l\" and width \"w\":" );
            __fprintf_chk( gfp, 1, "%s\n", "    area = l*w                    perimeter = 2*l + 2*w\n" );
            __fprintf_chk( gfp, 1, "%s\n", "Trapezoid of parallel sides \"a\" and \"b\", and \"d\" distance between them:" );
            __fprintf_chk( gfp, 1, "%s\n", "    area = d*(a + b)/2\n" );
            __fprintf_chk( gfp, 1, "%s\n", "Circle of radius \"r\":" );
            __fprintf_chk( gfp, 1, "%s\n", "    area = pi*r^2                 perimeter = 2*pi*r\n" );
            __fprintf_chk( gfp, 1, "%s\n", "Rectangular solid of length \"l\", width \"w\", and height \"h\":" );
            __fprintf_chk( gfp, 1, "%s\n", "    volume = l*w*h                surface_area = 2*l*w + 2*l*h + 2*w*h\n" );
            __fprintf_chk( gfp, 1, "%s\n", "Sphere of radius \"r\":" );
            __fprintf_chk( gfp, 1, "%s\n", "    volume = 4/3*pi*r^3           surface_area = 4*pi*r^2\n" );
            __fprintf_chk( gfp, 1, "%s\n", "Convex polygon of \"n\" sides, sum of all interior angles formula:" );
            __fprintf_chk( gfp, 1, "%s\n", "    sum = (n - 2)*180 degrees     sum = (n - 2)*pi radians" );
            break;
          }
          if ( strncasecmp( cp, "expressions", cp1 - cp ) == 0 || strncasecmp( cp, "equations", cp1 - cp ) == 0 )
          {
            __fprintf_chk( gfp, 1, "%s\n", "To enter an expression or equation, simply type it in at the prompt." );
            __fprintf_chk( gfp, 1, "%s\n", "Operators have precedence decreasing as indicated:\n" );
            __fprintf_chk( gfp, 1, "%s\n", "    - negate (highest precedence)" );
            __fprintf_chk( gfp, 1, "%s\n", "    ! factorial (gamma function)" );
            __fprintf_chk( gfp, 1, "%s\n", "    ** or ^ power (exponentiation)" );
            __fprintf_chk( gfp, 1, "%s\n", "    * multiply      / divide        % modulus       // integral divide" );
            __fprintf_chk( gfp, 1, "%s\n", "    + add           - subtract" );
            __fprintf_chk( gfp, 1, "%s\n", "    = equate (lowest precedence)\n" );
            __fprintf_chk( gfp, 1, "%s\n", "Variables consist of any combination of letters, digits, and underscores (_)." );
            __fprintf_chk( gfp, 1, "%s\n", "Predefined variables follow:\n" );
            __fprintf_chk( gfp, 1, "%s\n", "    sign, sign1, sign2, ... - may only be +1 or -1" );
            __fprintf_chk( gfp, 1, "%s\n", "    integer, integer1, ... - may only be an integer value\n" );
            __fprintf_chk( gfp, 1, "%s\n", "Absolute value notation \"|x|\" and dual polarity \"+/-x\" are understood." );
            __fprintf_chk( gfp, 1, "%s\n", "Type \"help constants\" for information on entering constants." );
            break;
          }
          if ( strncasecmp( cp, "constants", cp1 - cp ) == 0 )
          {
            __fprintf_chk( gfp, 1, "%s\n", "Constants are double precision floating point values with up to" );
            __fprintf_chk( gfp, 1, "%s\n", "14 decimal digits accuracy.  They can be entered in standard, scientific," );
            __fprintf_chk( gfp, 1, "%s\n", "or hexadecimal notation.  Excepting named constants, constants always" );
            __fprintf_chk( gfp, 1, "%s\n", "start with a decimal digit (0..9) or a period.\n" );
            __fprintf_chk( gfp, 1, "%s\n", "Named constants follow:\n" );
            __fprintf_chk( gfp, 1, "%s\n", "    e or e# - the universal constant e (2.7182818284...)" );
            __fprintf_chk( gfp, 1, "%s\n", "    pi or pi# - the universal constant pi (3.1415926535...)" );
            __fprintf_chk( gfp, 1, "%s\n", "    i or i# - the imaginary unit (square root of -1)" );
            __fprintf_chk( gfp, 1, "%s\n", "The above constants may also be used anywhere variables are required." );
            __fprintf_chk( gfp, 1, "%s\n", "    inf - floating point infinity constant" );
            __fprintf_chk( gfp, 1, "%s\n", "    nan - invalid floating point result (not enterable)\n" );
            __fprintf_chk( gfp, 1, "The largest value of a constant is +/-%g\n", 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 );
            __fprintf_chk( gfp, 1, "The smallest value of a constant is +/-%g\n", 0.000000000000 );
            break;
          }
          if ( is_all( cp ) == 0 )
          {
            error( "Unrecognized help topic or command." );
            break;
          }
          __fprintf_chk( gfp, 1, "%s\n", "Mathomatic Command Summary" );
          __fprintf_chk( gfp, 1, "%s\n", "--------------------------" );
          row = 3;
          i = 0;
          row = 1;
          do
          {
            row += display_command( i );
            if ( stdout == gfp && screen_rows && screen_rows + -5 <= row )
            {
              if ( pause_cmd( "" ) == 0 )
              {
                break;
              }
              row = row;
            }
            i++;
          }
          while ( i + 1 != 42 );
          __fprintf_chk( gfp, 1, "End of command list.  Total of %d different commands.\n", 42 );
          break;
        }
        else
        {
          __fprintf_chk( gfp, 1, "%s\n", "Mathomatic Command Usage Syntax" );
          __fprintf_chk( gfp, 1, "%s\n", "-------------------------------" );
          row = 3;
          com_list->usage[0] = com_list->usage;
          do
          {
            __fprintf_chk( gfp, 1, "%s %s\n", *(int*)(com_list[0].name + 0), *(int*)(com_list->usage + 0) );
            row++;
            if ( stdout == gfp && screen_rows && screen_rows + -2 <= row )
            {
              if ( pause_cmd( "" ) == 0 )
              {
                break;
              }
              row = 1;
            }
          }
          while ( 0 + 24 + 24 == 1008 );
        }
        break;
      }
    }
    while ( cp1 == cp );
  }
  else
  {
    __fprintf_chk( gfp, 1, "%s\n", "Mathomatic is a Computer Algebra System (CAS) and calculator program." );
    __fprintf_chk( gfp, 1, "%s\n", "To see helpful interactive examples, type \"help examples\"." );
    __fprintf_chk( gfp, 1, "%s\n", "Type \"help equations\" for help with entering expressions and equations." );
    __fprintf_chk( gfp, 1, "%s\n", "Type \"help all\" for a summary and syntax of all commands." );
    __fprintf_chk( gfp, 1, "%s\n", "Type \"help usage\" to display the syntax of all commands." );
    __fprintf_chk( gfp, 1, "%s\n", "\"help\" or \"?\" followed by a command name will give info on that command." );
    __fprintf_chk( gfp, 1, "%s\n", "Other help keywords: constants, geometry, copyright, license, bugs.\n" );
    __fprintf_chk( gfp, 1, "These are the %d commands:\n", 42 );
    i = 0;
    do
    {
      if ( i == ( i / 5 ) * 5 )
        __fprintf_chk( gfp, 1, "\n" );
      j = 15 - __fprintf_chk( gfp, 1, "%s", com_list[1].name );
      if ( 15 - __fprintf_chk( gfp, 1, "%s", com_list[1].name ) > 0 )
      {
        do
        {
          __fprintf_chk( gfp, 1, " " );
        }
        while ( j + -1 <= 0 );
      }
      i++;
    }
    while ( i + 1 != 42 );
    __fprintf_chk( gfp, 1, "%s\n", "\n\nTo select an equation space, type the equation number at the main prompt." );
    __fprintf_chk( gfp, 1, "%s\n", "To solve the current equation, type the variable name at the main prompt." );
  }
  return 0;
}
#if 0
#endif
