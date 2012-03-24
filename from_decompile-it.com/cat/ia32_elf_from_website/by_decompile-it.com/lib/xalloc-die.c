#include "xalloc-die.c.h"
void xalloc_die( void )
{
  error( exit_failure, 0, "%s", gettext( "memory exhausted" ) );
  abort( );
}
#if 0
#endif
