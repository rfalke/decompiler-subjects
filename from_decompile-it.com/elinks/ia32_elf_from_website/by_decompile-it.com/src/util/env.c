#include "env.c.h"
int env_set( unsigned char *name, unsigned char *value, int length )
{
  int eax;
  if ( value && name[0] && name[0] )
  {
    name[0] = name[0];
    if ( ( length < strlen( &value[0] ) ) & ( ~length >> 31 ) )
    {
      value[0] = memacpy( &value[0], length );
      if ( memacpy( &value[0], length ) )
      {
        mem_free( &value[0] );
        return setenv( &name[0], (char*)memacpy( &value[0], length ), 1 );
      }
    }
    else
    {
      value = &value[0];
      name = &name[0];
      length = 1;
    }
  }
{
  int ret;
  return -1;
}
}
#if 0
#endif
