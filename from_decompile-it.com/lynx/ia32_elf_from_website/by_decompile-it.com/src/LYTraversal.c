#include "LYTraversal.c.h"
void final_perror( char *msg, BOOLEAN clean_flag )
{
  int saved_errno = *(int*)(__errno_location( ));
  if ( LYCursesON )
  {
    if ( clean_flag )
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
  final_perror( msg, ebp_4 );
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
  {
    ifp = LYNewTxtFile( "traverse.dat" );
    if ( ifp == 0 )
    {
      exit_with_perror( gettext( "Unable to open traversal file." ) );
    }
    else
    {
      LYCloseOutput( ifp );
      return (unsigned char)( result );
    }
  }
  HTSprintf0( &line, "%s\n", target );
  do
  {
    if ( LYSafeGets( &buffer, ifp ) )
    {
    }
    if ( line )
    {
      free( line );
      line = 0;
    }
    if ( buffer == 0 )
    {
      LYCloseInput( ifp );
      break;
    }
    free( buffer );
    buffer = 0;
    LYCloseInput( ifp );
    break;
  }
  while ( strcmp( line, buffer ) );
  result = 1;
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
  if ( nhist > 0 )
  {
    ifp = LYAppendToTxtFile( "traverse.dat" );
    if ( ifp == 0 )
    {
      final_perror( gettext( "Unable to open traversal file." ), 0 );
    }
    else
    {
      fprintf( ifp, "\n\n%s\n\n\t    %s\n\n", gettext( "TRAVERSAL WAS INTERRUPTED" ), gettext( "here is a list of the history stack so that you may rebuild" ) );
      x = nhist + -1;
      for ( ; x >= 0;  )
      {
        fprintf( ifp, "%s\t%s\n", history[ x ].hdoc.title, history[ x ].hdoc.address );
        x += -1;
      }
      LYCloseOutput( ifp );
    }
  }
  return;
}
void add_to_reject_list( char *target )
{
  FILE *ifp;
  if ( WWW_TraceFlag )
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
  }
  HTSprintf0( &line, "%s", target );
  while ( LYSafeGets( &buffer, ifp ) && result == 0 )
  {
    LYTrimTrailing( buffer );
    len = strlen( buffer );
    if ( len > 0 )
    {
      if ( buffer[ len + -1 ] == '*' )
      {
        if ( len != 1 && strncmp( line, buffer, len + -1 ) )
          continue;
        else
        {
          result = 1;
        }
      }
      else
      {
        if ( strcmp( line, buffer ) )
          continue;
        else
        {
          result = 1;
        }
      }
    }
  }
  if ( buffer )
  {
    free( buffer );
    buffer = 0;
  }
  if ( line )
  {
    free( line );
    line = 0;
  }
  LYCloseInput( ifp );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "lookup_reject(%s) -&gt; %d\n", target, result );
  }
  return (unsigned char)( result );
}
#if 0
#endif
