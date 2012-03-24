#include "sysname.c.h"
unsigned char system_name[1024];
void get_system_name( void )
{
  struct utsname name;
  if ( uname( name.sysname ) )
  {
    if ( popen( "uname -srm", "r" ) )
    {
      if ( fread( system_name, 1, 1023, popen( "uname -srm", "r" ) ) == 0 )
        pclose( popen( "uname -srm", "r" ) );
      else
      {
        pclose( popen( "uname -srm", "r" ) );
        if ( system_name[0] < 31 )
        {
          do
          {
          }
          while ( system_name[1] < 31 );
        }
        system_name[1] = 0;
        if ( system_name[0] == 0 )
          goto B6;
      }
    }
B6:    safe_strncpy( system_name, "Unix", 1024 );
  }
  else
    __snprintf_chk( system_name, 1024, 1, 1024, "%s %s %s", name.sysname, &name.release[0], &name.machine[0] );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
#if 0
#endif
