#include "LYClean.c.h"
static void result;
void cleanup_sig( int sig )
{
  signal( 1, 1 );
  signal( 2, 1 );
  signal( 15, 1 );
  if ( traversal )
    dump_traversal_history( );
  if ( sig != 1 )
  {
    if ( dump_output_immediately == 0 )
      cleanup( );
    if ( sig )
    {
      printf( "\n\n%s %d\n\n", gettext( "Exiting via interrupt:" ), sig );
      fflush( stdout );
    }
  }
  else
    cleanup_files( );
  if ( sig )
  {
    exit_immediately( 0 );
  }
  else
  {
    reset_signals( );
  }
  return;
}
void cleanup_files( void )
{
  LYCleanupTemp( );
  if ( lynx_temp_space )
  {
    free( lynx_temp_space );
    lynx_temp_space = 0;
  }
  return;
}
void cleanup( void )
{
  signal( 1, 1 );
  signal( 15, 1 );
  signal( 2, 1 );
  if ( LYCursesON )
  {
    LYmove( LYlines + -1, 0 );
    LYclrtoeol( );
    lynx_stop_all_colors( );
    LYrefresh( );
    stop_curses( );
  }
  if ( persistent_cookies )
    LYStoreCookies( LYCookieSaveFile );
  cleanup_files( );
  LYCloseTracelog( );
  return;
}
#if 0
#endif
