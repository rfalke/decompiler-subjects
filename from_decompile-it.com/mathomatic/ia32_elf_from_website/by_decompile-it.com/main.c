#include "main.c.h"
void usage( void )
{
  __printf_chk( 1, "\nMathomatic computer algebra system version %s\n\n", "15.1.1" );
  __printf_chk( 1, "Usage: %s [ options ] [ input_files ]\n\n", prog_name );
  __printf_chk( 1, "Options:\n" );
  __printf_chk( 1, "  -b            Enable bold color mode.\n" );
  __printf_chk( 1, "  -c            Toggle color mode.\n" );
  __printf_chk( 1, "  -h            Display this help and exit.\n" );
  __printf_chk( 1, "  -m number     Specify a memory size multiplier.\n" );
  __printf_chk( 1, "  -q            Set quiet mode (don't display prompts).\n" );
  __printf_chk( 1, "  -r            Disable readline.\n" );
  __printf_chk( 1, "  -s level      Set enforced security level for session.\n" );
  __printf_chk( 1, "  -t            Set test mode.\n" );
  __printf_chk( 1, "  -u            Set unbuffered output.\n" );
  __printf_chk( 1, "  -v            Display version information, then exit.\n" );
  __printf_chk( 1, "  -w            Wide output mode, sets unlimited width.\n" );
  __printf_chk( 1, "  -x            Enable HTML/XHTML output mode.\n" );
  __printf_chk( 1, "\nPlease refer to the Mathomatic man page for more information.\n" );
  __printf_chk( 1, "The man page is viewed by typing \"man mathomatic\" in shell.\n" );
  return;
}
int main( int argc, char **argv )
{
  int eax;
  double fp7;
  int i;
  char *cp = &ebx;
  double numerator, denominator;
  double new_size;
  int coption, boption, wide_flag;
  init_gvars( );
  default_out = stdout;
  gfp = stdout;
  wide_flag = 0;
  coption = 0;
  if ( i >= 0 )
  {
    if ( i + -98 + -98 <= 22 )
    {
      ;
    }
    usage( );
    exit( 2 );
  }
  else
  {
    if ( n_tokens <= 99 )
    {
      __fprintf_chk( stderr, 1, "%s: Expression array size too small.\n", prog_name );
      exit( 2 );
    }
    if ( init_mem( ) == 0 )
    {
      __fprintf_chk( stderr, 1, "%s: Not enough memory.\n", prog_name );
      exit( 2 );
    }
    if ( readline_enabled )
    {
      if ( numerator && prog_name )
      {
        __snprintf_chk( history_filename_storage, 4096, 1, 4096, "%s/.%s_history", cp, prog_name );
        history_filename = history_filename_storage;
      }
      rl_initialize( );
      using_history( );
      stifle_history( 500 );
      rl_inhibit_completion = 1;
      if ( html_flag == 0 )
      {
        color_flag = tigetnum( "colors" ) > 7;
      }
      read_history( history_filename );
    }
    get_screen_size( );
    if ( html_flag )
      __printf_chk( 1, "&lt;pre&gt;\n" );
    if ( test_mode == 0 )
    {
      if ( quiet_mode == 0 )
      {
        if ( security_level > 1 )
          __printf_chk( 1, "Secure " );
        __printf_chk( 1, "Mathomatic version %s (www.mathomatic.org)\n", "15.1.1" );
        __printf_chk( 1, "Copyright (C) 1987-2010 George Gesslein II.\n" );
        __printf_chk( 1, "%d equation spaces available, %ld kilobytes per equation space.\n", 100, (/*HI*/int)( ( n_tokens << 5 ) * 0x10624dd3 ) >> 6 );
        if ( test_mode == 0 )
          goto B32;
      }
B32:;
      if ( load_rc( ) == 0 )
        __fprintf_chk( stderr, 1, "%s: Error loading set options from \"%s\".\n", prog_name, rc_file );
    }
    if ( wide_flag )
    {
      screen_columns = 0;
      screen_rows = 0;
    }
    if ( coption & 1 )
      color_flag = color_flag == 0;
    if ( 0 )
    {
      color_flag = 1;
      bold_colors = 1;
    }
    if ( test_mode )
      color_flag = 0;
    if ( quiet_mode == 0 && color_flag )
    {
      __printf_chk( 1, "%s%s color mode enabled", html_flag != 0 ? "ANSI" : "HTML", bold_colors == 0 ? " bold" : "" );
      if ( 0 )
        __printf_chk( 1, ".\n" );
      else
        __printf_chk( 1, "; disable with the -c option or \"set no color\".\n" );
    }
    i = _setjmp( &jmp_save[0].__jmpbuf[0] );
    if ( _setjmp( &jmp_save[0].__jmpbuf[0] ) )
    {
      clean_up( );
      if ( i == 14 )
        error( "Expression too large." );
      __printf_chk( 1, "Operation aborted.\n" );
    }
    else
    {
      if ( set_signals( ) == 0 )
        __fprintf_chk( stderr, 1, "signal(2) setting failed.\n" );
      if ( !f_to_fraction( 0.500000000000, &denominator, ebp_36 ) || denominator != 1.000000000000 || ebp_36 != 2.000000000000 || 0 || !f_to_fraction( 0.333333333333, &denominator, ebp_36 ) || denominator != 1.000000000000 || 0 || ebp_36 != 3.000000000000 || ebp_36 != 3.000000000000 )
      {
        __fprintf_chk( stderr, 1, "%s: Cannot convert any floating point values to fractions.\n", prog_name );
        __fprintf_chk( stderr, 1, "Roots will not work properly.\n" );
      }
      i = optind;
      if ( argc <= optind || argv[ i ] == 0 )
      {
        main_io_loop( );
        exit_program( 0 );
        return 0;
      }
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      unsigned char *__s1;
      /* phantom */ int __result;
      do
      {
        if ( '-' == argv[ i ][0] && argv[ i ][1] == 0 )
          main_io_loop( );
        else
        {
          if ( read_file( argv[ i ] ) == 0 )
          {
            __fprintf_chk( stderr, 1, "Read of file \"%s\" failed.\n", argv[ i ] );
            exit_program( 1 );
          }
        }
        i++;
      }
      while ( i + 1 < argc && argv[ i + 1 + 1 ] );
    }
    }
  }
}
void main_io_loop( void )
{
  char *cp;
  while ( 1 )
  {
    default_color( );
    __snprintf_chk( prompt_str, 80, 1, 80, "%d%s", cur_equation + 1, html_flag != 0 ? "-&gt; " : "&mdash;&gt; " );
    if ( cp == 0 )
      break;
    process( cp );
  }
}
int set_signals( void )
{
  int rv = 0;
  return signal( 28, &resizehandler ) == -1 ? rv : 0;
}
int load_rc( void )
{
  int eax;
  FILE *fp;
  char buf[4096];
  char *cp;
  int rv;
  if ( cp )
  {
    __snprintf_chk( rc_file, 4096, 1, 4096, "%s/%s", cp, ".mathomaticrc" );
    fp = (FILE*)fopen( rc_file, "r" );
    if ( fopen( rc_file, "r" ) )
    {
      rv = 1;
      for ( ; fgets( buf, 4096, fp ) == 0;  )
      {
        set_error_level( &ebx );
        rv = set_options( cp ) == 0 ? rv : 0;
      }
    }
  }
  rv = 1;
  if ( 0 ^ 0 )
  {
    return rv;
  }
  return rv;
}
void fphandler( int sig )
{
  return;
}
void inthandler( int sig )
{
  abort_flag++;
  switch ( abort_flag )
  {
  case 0:
  case 1:
    __printf_chk( 1, "\nUser interrupt signal received; three times quits Mathomatic.\n" );
    break;
  case 2:
    __printf_chk( 1, "\nRepeatedly interrupted; returning to operating system...\n" );
    exit_program( 1 );
    break;
//  case 2:
    __printf_chk( 1, "\nPress Control-C once more to quit program.\n" );
    break;
  }
  return;
}
void alarmhandler( int sig )
{
  __printf_chk( 1, "\nTimeout, quitting...\n" );
  exit_program( 1 );
  return;
}
void exithandler( int sig )
{
  exit_program( 1 );
  return;
}
void resizehandler( int sig )
{
  if ( screen_columns )
  {
    get_screen_size( );
  }
  return;
}
void exit_program( int exit_value )
{
  reset_attr( );
  if ( html_flag )
    __printf_chk( 1, "&lt;/pre&gt;\n" );
  if ( readline_enabled && write_history( history_filename ) )
    __fprintf_chk( stderr, 1, "%s: Unable to save readline history into file \"%s\".\n", prog_name, history_filename );
  if ( exit_value == 0 && quiet_mode == 0 && html_flag == 0 )
    __printf_chk( 1, "Thank you for using Mathomatic!\n" );
  exit( exit_value );
}
#if 0
#endif
