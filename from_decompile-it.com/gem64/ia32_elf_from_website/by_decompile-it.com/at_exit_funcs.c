#include "at_exit_funcs.c.h"
void exit_env( void )
{
  return;
}
void exit_tmp( void )
{
  int eax;
  int error;
  char tmp[2048];
  DIR *dir;
  if ( TMPDIR[0] == 0 )
    TMPCLEAN = 1;
  else
  if ( TMPCLEAN == 0 )
  {
    chdir( CWD );
    sprintf( tmp, "rm -rf %s/*", TMPDIR );
    if ( VERBOSE )
      fwrite( "Removing temporary extension files...", 1, 37, stdout );
    error = system( tmp );
    sprintf( tmp, "rmdir %s", TMPDIR );
    error = system( tmp );
    dir = opendir( TMPDIR );
    if ( dir )
      print_warning( "could not remove temporary directory %s.\nPlease remove manually.\n", TMPDIR[0] );
    if ( VERBOSE )
      print_done( );
    TMPCLEAN = 1;
  }
  return;
}
void exit_db( void )
{
  int eax;
  int error;
  char tmp[2048];
  if ( TMPDBCLEAN == 0 )
  {
    chdir( CWD );
    if ( VERBOSE )
      fwrite( "Removing temporary registration files...", 1, 40, stdout );
    if ( TMPDB[0] )
    {
      sprintf( tmp, "rm -rf %s", TMPDB );
      error = system( tmp );
      if ( error )
        print_warning( "could not remove temporary file %s.\nPlease remove manually.\n", TMPDB[0] );
    }
    if ( TMP_GISMAN[0] )
    {
      sprintf( tmp, "rm -f %s", TMP_GISMAN );
      error = system( tmp );
      if ( error )
        print_warning( "could not remove temporary file %s.\nPlease remove manually.\n", TMP_GISMAN[0] );
    }
    if ( TMP_DESCR[0] )
    {
      sprintf( tmp, "rm -f %s", TMP_DESCR );
      error = system( tmp );
      if ( error )
        print_warning( "could not remove temporary file %s.\nPlease remove manually.\n", TMP_DESCR[0] );
    }
    if ( TMP_INFO[0] )
    {
      sprintf( tmp, "rm -f %s", TMP_INFO );
      error = system( tmp );
      if ( error )
        print_warning( "could not remove temporary file %s.\nPlease remove manually.\n", TMP_INFO[0] );
    }
    if ( TMP_DEPS[0] )
    {
      sprintf( tmp, "rm -f %s", TMP_DEPS );
      error = system( tmp );
      if ( error )
        print_warning( "could not remove temporary file %s.\nPlease remove manually.\n", TMP_INFO[0] );
    }
    if ( TMP_BUGS[0] )
    {
      sprintf( tmp, "rm -f %s", TMP_BUGS );
      error = system( tmp );
      if ( error )
        print_warning( "could not remove temporary file %s.\nPlease remove manually.\n", TMP_INFO[0] );
    }
    if ( TMP_AUTHORS[0] )
    {
      sprintf( tmp, "rm -f %s", TMP_AUTHORS );
      error = system( tmp );
      if ( error )
        print_warning( "could not remove temporary file %s.\nPlease remove manually.\n", TMP_INFO[0] );
    }
    if ( TMP_HTML[0] )
    {
      sprintf( tmp, "rm -f %s", TMP_HTML );
      error = system( tmp );
      if ( error )
        print_warning( "could not remove temporary file %s.\nPlease remove manually.\n", TMP_HTML[0] );
    }
    if ( VERBOSE == 0 && TMP_NULL[0] )
    {
      sprintf( tmp, "rm -f %s", TMP_NULL );
      error = system( tmp );
      if ( error )
        print_warning( "could not remove temporary file %s.\nPlease remove manually.\n", TMP_NULL[0] );
    }
    if ( VERBOSE )
      print_done( );
    TMPDBCLEAN = 1;
  }
  return;
}
void exit_msg( void )
{
  if ( ERROR < 0 )
  {
    fprintf( stdout, "Program exited with an error (code %i). Operation aborted.\n", ERROR );
  }
  else
  {
    if ( WARNINGS == 1 )
      fwrite( "Job done but there was one warning. Please check.\n", 1, 50, stdout );
    if ( WARNINGS > 1 )
    {
      fprintf( stdout, "Job done but there were %i warnings. Please check.\n", WARNINGS );
    }
  }
  return;
}
#if 0
#endif
