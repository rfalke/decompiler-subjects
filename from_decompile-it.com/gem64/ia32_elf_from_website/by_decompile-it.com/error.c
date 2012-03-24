#include "error.c.h"
void print_error( int err_code, char *msg, ... )
{
  char buffer[2048];
  va_list ap;
  __builtin_va_start( ap, msg );
  vsprintf( buffer, msg, ap );
  fprintf( stderr, "\033[1;31m\nERROR:\033[0m %s", buffer );
  ERROR = err_code;
  exit( err_code );
}
void print_warning( char *msg, ... )
{
  char buffer[2048];
  va_list ap;
  __builtin_va_start( ap, msg );
  vsprintf( buffer, msg, ap );
  fprintf( stderr, "\033[0;33m\nWARNING:\033[0m %s", buffer );
  WARNINGS++;
  return;
}
void print_done( void )
{
  fwrite( "\033[0;32mDONE.\n\033[0m", 1, 17, stdout );
  return;
}
#if 0
#endif
