#include "newwin.c.h"
struct open_in_new open_in_new[4] = { { 2, "x-terminal-emulator -e", "~Xterm" }
, { 32, "twterm -e", "T~wterm" }
, { 4, "screen", "~Screen" }
, { 0, 0, 0 }
 };
int can_open_in_new( struct terminal *term )
{
  int eax;
  int ecx;
  int possibilities = 0;
  do
  {
    possibilities = ( possibilities + 1 ) - ( ( ( ' ' & term->environment ) < 1 ) & 1 );
    ' ' += 12;
  }
  while ( ' ' );
  return possibilities;
}
void open_new_window( struct terminal *term, unsigned char *exe_name, enum term_env_type  environment, unsigned char *param )
{
  int eax;
  int ecx;
  unsigned char *command;
  int i = 0;
  if ( ( environment & 2 ) == 0 )
  {
    do
    {
      if ( assert_failed == 0 )
      {
        assert_failed = command[0] == 0;
        if ( !(_Bool)( command[0] != 0 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/osdep/newwin.c";
          errline = 74;
          elinks_internal( "assertion command failed!" );
        }
      }
      if ( environment & 2 )
      {
        if ( getenv( "ELINKS_XTERM" ) == 0 )
        {
          command[0] = getenv( "LINKS_XTERM" ) != 0 ? command[0] : getenv( "LINKS_XTERM" );
          command[0] = straconcat( " " );
          if ( straconcat( " " ) )
          {
            exec_on_terminal( term, straconcat( " " ), "", TERM_EXEC_NEWWIN );
            term = &command[0];
          }
          break;
        }
      }
      else
      {
        environment &= ENV_TWIN;
        if ( environment & 32 )
        {
          if ( getenv( "ELINKS_TWTERM" ) == 0 )
          {
            command[0] = getenv( "LINKS_TWTERM" ) != 0 ? command[0] : getenv( "LINKS_TWTERM" );
          }
        }
      }
      command[0] = getenv( "ELINKS_XTERM" );
    }
    while ( environment & edx );
  }
  command[0] = 12;
}
#if 0
#endif
