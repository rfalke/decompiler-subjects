#include "console.c.h"
Console_IO_t Console_IO;
int my_console_printing( FILE *fp, char *format, va_list ap )
{
  return 0;
}
int my_error_printing( FILE *fp, char *format, va_list ap )
{
  return 0;
}
int my_report_printing( FILE *fp, char *format, va_list ap )
{
  return 0;
}
void apply_termcap_settings( Console_IO_t *mfp )
{
  char *term_name = getenv( "TERM" );
  char term_buff[2048];
  char *tp;
  char tc[10];
  int val;
  if ( term_name == 0 )
  {
  }
  else
  {
    if ( tgetent( term_buff, term_name ) == 1 )
    {
      val = tgetnum( "co" );
      if ( val > 39 && val <= 512 )
        mfp->disp_width = val;
      val = tgetnum( "li" );
      if ( val > 15 && val <= 256 )
        mfp->disp_height = val;
      tp = tc;
      tp[0] = 0;
      tp = tgetstr( "up", &tp );
      if ( tp )
        strcpy( &mfp->str_up[0], tp );
      tp = tc;
      tp[0] = 0;
      tp = tgetstr( "ce", &tp );
      if ( tp )
        strcpy( &mfp->str_clreoln[0], tp );
      tp = tc;
      tp[0] = 0;
      tp = tgetstr( "md", &tp );
      if ( tp )
        strcpy( &mfp->str_emph[0], tp );
      tp = tc;
      tp[0] = 0;
      tp = tgetstr( "me", &tp );
      if ( tp )
        strcpy( &mfp->str_norm[0], tp );
    }
  }
  return;
}
int init_console( Console_IO_t *mfp )
{
  mfp->disp_width = 80;
  mfp->disp_height = 25;
  mfp->Console_fp = stderr;
  mfp->Error_fp = stderr;
  mfp->Report_fp = 0;
  setvbuf( &mfp->Console_fp, &mfp->Console_buff[0], 0, 2048 );
  memcpy( &mfp->str_up[0], "\033[A", 4 );
  apply_termcap_settings( mfp );
  mfp->ClassID = 1129270867;
  mfp->Console_file_type = 0;
  return 0;
}
void deinit_console( Console_IO_t *mfp )
{
  if ( mfp->Report_fp )
  {
    fclose( &mfp->Report_fp );
    mfp->Report_fp = 0;
  }
  fflush( &mfp->Console_fp );
  setvbuf( &mfp->Console_fp, 0, 2, 0 );
  memset( &mfp->Console_buff[0], 85, 1024 );
  return;
}
int frontend_open_console( void )
{
  return init_console( &Console_IO );
}
void frontend_close_console( void )
{
  deinit_console( &Console_IO );
  return;
}
void frontend_debugf( char *format, va_list ap )
{
  int eax;
  my_report_printing( Console_IO.Report_fp, format, ap );
  return;
}
void frontend_msgf( char *format, va_list ap )
{
  int eax;
  my_console_printing( Console_IO.Console_fp, format, ap );
  return;
}
void frontend_errorf( char *format, va_list ap )
{
  int eax;
  my_error_printing( Console_IO.Error_fp, format, ap );
  return;
}
int console_printf( char *format, ... )
{
  va_list args;
  int ret;
  __builtin_va_start( args, format );
  ret = my_console_printing( Console_IO.Console_fp, format, args );
  return ret;
}
int error_printf( char *format, ... )
{
  va_list args;
  int ret;
  __builtin_va_start( args, format );
  ret = my_console_printing( Console_IO.Error_fp, format, args );
  return ret;
}
int report_printf( char *format, ... )
{
  va_list args;
  int ret;
  __builtin_va_start( args, format );
  ret = my_console_printing( Console_IO.Report_fp, format, args );
  return ret;
}
void console_flush( void )
{
  fflush( Console_IO.Console_fp );
  return;
}
void error_flush( void )
{
  fflush( Console_IO.Error_fp );
  return;
}
void report_flush( void )
{
  fflush( Console_IO.Report_fp );
  return;
}
void console_up( int n_lines )
{
  while ( n_lines += -1, ( n_lines > 0 ) & 255 )
  {
    fputs( &Console_IO.str_up[0], Console_IO.Console_fp );
  }
  console_flush( );
  return;
}
void set_debug_file( char *fn )
{
  if ( Console_IO.Report_fp == 0 )
  {
    Console_IO.Report_fp = fopen64( fn, "a" );
    if ( Console_IO.Report_fp )
    {
      error_printf( "writing debug info into: %s\n", fn );
    }
    else
    {
      error_printf( "Error: can't open for debug info: %s\n", fn );
    }
  }
  return;
}
#if 0
#endif
