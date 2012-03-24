#include "LYexit.c.h"
BOOLEAN LYOutOfMemory;
static void (*callstack[50])( void );
static int topOfStack;
int LYatexit( void (*function)( void ) )
{
  if ( topOfStack == 50 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "(LY)atexit: Too many functions, ignoring one!\n" );
    }
    return -1;
  }
  else
  {
    callstack[ topOfStack ] = function;
    topOfStack++;
    return 0;
  }
}
void LYCompleteExit( void )
{
  while ( topOfStack += -1, topOfStack >= 0 )
  {
    callstack[ topOfStack ]( );
  }
  return;
}
void LYexit( int status )
{
  if ( LYOutOfMemory == 1 )
  {
    signal( 1, 1 );
    signal( 15, 1 );
    signal( 2, 1 );
    signal( 11, 1 );
    signal( 4, 1 );
    fflush( stderr );
    fflush( stdout );
    if ( LYCursesON )
      LYSleepAlert( );
    cleanup_sig( 0 );
    signal( 11, 0 );
    signal( 4, 0 );
  }
  LYCloselog( );
  LYCompleteExit( );
  LYCloseCmdLogfile( );
  cleanup_files( );
  fflush( stderr );
  if ( LYOutOfMemory == 1 )
  {
    LYOutOfMemory = 0;
    printf( "\r\n%s\r\n\r\n", gettext( "Memory exhausted!  Program aborted!" ) );
    fflush( stdout );
  }
  LYCloseTracelog( );
  exit( status );
}
void outofmem( char *fname, char *func )
{
  fprintf( stderr, "\n\n\n%s %s: %s\n", fname, func, gettext( "Memory exhausted!  Aborting..." ) );
  LYOutOfMemory = 1;
  LYexit( -1 );
  return;
}
#if 0
#endif
