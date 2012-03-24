#include "error.c.h"
void Message( char *Format, ... )
{
  /* phantom */ va_list args;
  gui->logv( Format, ebp_12 );
  return;
}
void OpenErrorMessage( char *Filename )
{
  /* phantom */ char *utf8;
  Message( "Can't open file\n   '%s'\nfopen() returned: '%s'\n", __strdup( Filename ), strerror( *(int*)(__errno_location( )) ) );
  Filename = __strdup( Filename );
}
void PopenErrorMessage( char *Filename )
{
  /* phantom */ char *utf8;
  Message( "Can't execute command\n   '%s'\npopen() returned: '%s'\n", __strdup( Filename ), strerror( *(int*)(__errno_location( )) ) );
  Filename = __strdup( Filename );
}
void OpendirErrorMessage( char *DirName )
{
  /* phantom */ char *utf8;
  Message( "Can't scan directory\n   '%s'\nopendir() returned: '%s'\n", __strdup( DirName ), strerror( *(int*)(__errno_location( )) ) );
  DirName = __strdup( DirName );
}
void ChdirErrorMessage( char *DirName )
{
  /* phantom */ char *utf8;
  Message( "Can't change working directory to\n   '%s'\nchdir() returned: '%s'\n", __strdup( DirName ), strerror( *(int*)(__errno_location( )) ) );
  DirName = __strdup( DirName );
}
void MyFatal( char *Format, ... )
{
  /* phantom */ va_list args;
  EmergencySave( );
  __fprintf_chk( stderr, 1, "%s (%i): fatal, ", Progname, getpid( ) );
  __vfprintf_chk( stderr, 1, Format, ebp_12 );
  fflush( stderr );
  exit( 1 );
}
void CatchSignal( int Signal )
{
  int eax;
  char *s;
  s[0] = "unknown";
  MyFatal( "aborted by %s signal\n", s );
  return;
}
#if 0
#endif
