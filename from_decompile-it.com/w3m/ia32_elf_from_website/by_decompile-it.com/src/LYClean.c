#include "LYClean.c.h"
void cleanup_sig( int sig )
{
  signal( 1, 1 );
  signal( 2, 1 );
  signal( 15, 1 );
  if ( ( traversal & 255 ) != 0 )
    dump_traversal_history( );
  if ( sig != 1 )
  {
    if ( ( dump_output_immediately & 255 ) == 0 )
      cleanup( );
    if ( sig != 0 )
    {
      printf( "\n\n%s %d\n\n", gettext( "Exiting via interrupt:" ), sig );
      fflush( *(int*)(135965440) );
    }
  }
  else
    cleanup_files( );
  if ( sig != 0 )
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
  if ( lynx_temp_space != 0 )
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
  if ( ( LYCursesON & 255 ) != 0 )
  {
    LYmove( LYlines - 1, 0 );
    LYclrtoeol( );
    lynx_stop_all_colors( );
    LYrefresh( );
    stop_curses( );
  }
  if ( ( persistent_cookies & 255 ) != 0 )
    LYStoreCookies( LYCookieSaveFile );
  cleanup_files( );
  LYCloseTracelog( );
  return;
}
