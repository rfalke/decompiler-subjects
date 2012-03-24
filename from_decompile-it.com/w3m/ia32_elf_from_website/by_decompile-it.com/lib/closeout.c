#include "closeout.c.h"
static char *file_name;
void close_stdout_set_file_name( char *file )
{
  file_name = file;
  return;
}
void close_stdout( void )
{
  if ( close_stream( *(int*)(134590784) ) != 0 )
  {
    char *write_error = gettext( "write error" );
    if ( file_name != 0 )
    {
      error( 0, *(int*)(__errno_location( )), "%s: %s", quotearg_colon( file_name ), write_error );
    }
    error( 0, *(int*)(__errno_location( )), "%s", write_error );
    _exit( exit_failure );
  }
  if ( close_stream( *(int*)(134590756) ) != 0 )
  {
    _exit( exit_failure );
  }
  return;
}
