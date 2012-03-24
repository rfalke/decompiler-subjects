#include "home.c.h"
unsigned char *elinks_home;
int first_use;
unsigned char *test_confdir( unsigned char *home, unsigned char *path, unsigned char *error_message )
{
  int eax;
  int ecx;
  int edx;
  struct stat st;
  unsigned char *confdir;
  if ( path[0] && path[0] )
  {
    if ( confdir[0] )
    {
      ebp_128 = path[0];
      *ebp_132 = error_message[0];
      if ( strlen( &confdir[0] ) - 1 >= 1 && confdir[ strlen( &confdir[0] ) - 1 ] == '/' )
      {
        do
        {
          if ( esi == 1 )
            confdir[0] = confdir[0];
          else
        }
        while ( *(char*)(eax - 2) != '/' );
        confdir[0] = confdir[0];
      }
      confdir[0] = 0;
      if ( __xstat64( 3, &confdir[0], &st.st_dev ) )
      {
        *ebp_132 = error_message[0];
        if ( mkdir( &confdir[0], 448 ) == 0 )
        {
          return &confdir[0];
        }
      }
      else
      if ( ( st.st_mode & 61440 ) == 16384 )
      {
        first_use = 0;
        return &confdir[0];
      }
      if ( error_message[0] )
      {
        usrerror( gettext( &error_message[0] ) );
        sleep( 3 );
      }
      confdir[0] = 0;
      mem_free( &confdir[0] );
      return &confdir[0];
    }
    else
    {
      return &confdir[0];
    }
  }
  else
  {
    confdir[0] = 0;
    return &confdir[0];
  }
}
void init_home( void )
{
  int eax;
  int edx;
  first_use = 1;
  if ( getenv( "HOME" ) == 0 || stracpy( (unsigned char*)getenv( "HOME" ) ) == 0 )
  {
    if ( program.path && stracpy( program.path ) )
    {
      if ( strlen( (char*)stracpy( program.path ) ) - 1 >= 0 && *(char*)(( stracpy( program.path ) + strlen( (char*)stracpy( program.path ) ) ) - 1) != '/' )
      {
        do
        {
          if ( edx - 1 == -1 )
          {
            break;
          }
          else
        }
        while ( *(char*)(eax - 2) != '/' );
      }
    }
    else
    {
      if ( eax || eax || eax || eax )
        add_to_strn( ebp_12, "/" );
      if ( ebx )
        mem_free( &ebx );
      elinks_home = ebp_12;
      if ( ebp_12 == 0 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/home.c";
        errline = 156;
        elinks_error( gettext( "Unable to find or create ELinks config directory. Please check if you have $HOME variable set correctly and if you have write permission to your home directory." ) );
        sleep( 3 );
        return;
      }
      return;
    }
  }
  if ( eax - 1 >= 1 && *(char*)(( ebx + strlen( &ebx ) ) - 1) == '/' )
  {
    do
    {
      edx--;
      if ( edx == 1 )
      {
      }
      else
    }
    while ( *(char*)(eax - 2) != '/' );
  }
  *(char*)(esi + ebx + 1) = 0;
}
void done_home( void )
{
{
  void *p = (void*)elinks_home;
  if ( elinks_home )
  {
    mem_free( &((int*)p)[0] );
  }
  return;
}
}
#if 0
#endif
