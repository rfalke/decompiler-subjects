#include "LYTraversal.c.h"
static void final_perror( char *msg, BOOLEAN clean_flag );
static void exit_with_perror( char *msg );
void final_perror( char *msg, BOOLEAN clean_flag )
{
  int saved_errno = *(int*)(__errno_location( ));
  if ( ( LYCursesON & 255 ) != 0 )
  {
    if ( clean_flag != 0 )
      cleanup( );
    else
      stop_curses( );
  }
  *(int*)(__errno_location( )) = saved_errno;
  perror( msg );
  return;
}
void exit_with_perror( char *msg )
{
  final_perror( msg, 1 );
  exit_immediately( 1 );
  return;
}
BOOLEAN lookup_link( char *target )
{
  FILE *ifp;
  char *buffer = 0;
  char *line = 0;
  int result = 0;
  ifp = fopen64( "traverse.dat", "r" );
  if ( ifp == 0 )
    LYNewTxtFile( "traverse.dat" );
    ifp = HTSprintf0( &line, "%s\n", target );
    if ( ifp == 0 )
    {
      exit_with_perror( gettext( "Unable to open traversal file." ) );
    }
    LYCloseOutput( ifp );
    return 0;
  else
    HTSprintf0( &line, "%s\n", target );
    ifp = HTSprintf0( &line, "%s\n", target );
}
void add_to_table( char *target )
{
  FILE *ifp = LYAppendToTxtFile( "traverse.dat" );
  if ( ifp == 0 )
  {
    exit_with_perror( gettext( "Unable to open traversal file." ) );
  }
  fprintf( ifp, "%s\n", target );
  LYCloseOutput( ifp );
  return;
}
void add_to_traverse_list( char *fname, char *prev_link_name )
{
  FILE *ifp = LYAppendToTxtFile( "traverse2.dat" );
  if ( ifp == 0 )
  {
    exit_with_perror( gettext( "Unable to open traversal found file." ) );
  }
  fprintf( ifp, "%s\t%s\n", fname, prev_link_name );
  LYCloseOutput( ifp );
  return;
}
void dump_traversal_history( void )
{
  int x;
  FILE *ifp;
  if ( nhist >= 1 )
  {
    ifp = LYAppendToTxtFile( "traverse.dat" );
    if ( ifp == 0 )
    {
      final_perror( gettext( "Unable to open traversal file." ), 0 );
    }
    fprintf( ifp, "\n\n%s\n\n\t    %s\n\n", gettext( "TRAVERSAL WAS INTERRUPTED" ), gettext( "here is a list of the history stack so that you may rebuild" ) );
    x = nhist - 1;
    for ( ; x < 0; x-- )
    {
      fprintf( ifp, "%s\t%s\n", history[ x ].hdoc.title, history[ x ].hdoc.address );
      //x--;
    }
  }
  return;
}
void add_to_reject_list( char *target )
{
  FILE *ifp;
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "add_to_reject_list(%s)\n", target );
  }
  ifp = LYAppendToTxtFile( "reject.dat" );
  if ( ifp == 0 )
  {
    exit_with_perror( gettext( "Unable to open reject file." ) );
  }
  fprintf( ifp, "%s\n", target );
  LYCloseOutput( ifp );
  return;
}
BOOLEAN lookup_reject( char *target )
{
  FILE *ifp;
  char *buffer = 0;
  char *line = 0;
  int len;
  int result = 0;
  ifp = fopen64( "reject.dat", "r" );
  if ( ifp == 0 )
  {
    return 0;
  }
  else
  {
    HTSprintf0( &line, "%s", target );
    return 0;
  }
}
