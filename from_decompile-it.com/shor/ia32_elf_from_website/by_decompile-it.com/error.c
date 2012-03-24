#include "error.c.h"
void *quantum_error_handler( void *(*f)( int  ) )
{
  static void *errfunc;
  if ( f != 0 )
  {
    errfunc = f;
  }
  return errfunc;
}
char *quantum_strerr( int errno )
{
  switch ( errno )
  {
    return "unknown error code";
    break;
  default:
    return "unknown error code";
    break;
  case 0:
    return "success";
    break;
  case 1:
    return "failure";
    break;
  case 2:
    return "malloc failed";
    break;
  case 3:
    return "matrix too large";
    break;
  case 4:
    return "wrong matrix size";
    break;
  case 5:
    return "hash table full";
    break;
  case 65536:
    return "single-column matrix expected";
    break;
  case 65537:
    return "unknown opcode";
    break;
  }
}
void quantum_error( int errno )
{
  void (*p)( int  ) = quantum_error_handler( 0 );
  if ( p != 0 )
  {
    p( errno );
    return;
  }
  fflush( *(int*)(134570176) );
  fprintf( *(int*)(134570144), "ERROR: %s\n", quantum_strerr( errno ) );
  fflush( *(int*)(134570144) );
  abort( );
}
