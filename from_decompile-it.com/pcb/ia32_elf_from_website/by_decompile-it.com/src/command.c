#include "command.c.h"
static char h_syntax[2] = { 'h' };
static char h_help[35] = { 'P', 'r', 'i', 'n', 't', ' ', 'a', ' ', 'h', 'e', 'l', 'p', ' ', 'm', 'e', 's', 's', 'a', 'g', 'e', ' ', 'f', 'o', 'r', ' ', 'c', 'o', 'm', 'm', 'a', 'n', 'd', 's', '.' };
static char l_syntax[9] = { 'l', ' ', '[', 'n', 'a', 'm', 'e', ']' };
static char l_help[19] = { 'L', 'o', 'a', 'd', 's', ' ', 'l', 'a', 'y', 'o', 'u', 't', ' ', 'd', 'a', 't', 'a', '.' };
static char le_syntax[10] = { 'l', 'e', ' ', '[', 'n', 'a', 'm', 'e', ']' };
static char le_help[42] = { 'L', 'o', 'a', 'd', 's', ' ', 'a', 'n', ' ', 'e', 'l', 'e', 'm', 'e', 'n', 't', ' ', 'i', 'n', 't', 'o', ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'b', 'u', 'f', 'f', 'e', 'r', '.' };
static char m_syntax[9] = { 'm', ' ', '[', 'n', 'a', 'm', 'e', ']' };
static char m_help[40] = { 'L', 'o', 'a', 'd', 's', ' ', 'a', ' ', 'l', 'a', 'y', 'o', 'u', 't', ' ', 'i', 'n', 't', 'o', ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'b', 'u', 'f', 'f', 'e', 'r', '.' };
static char q_syntax[2] = { 'q' };
static char q_help[40] = { 'Q', 'u', 'i', 't', 's', ' ', 't', 'h', 'e', ' ', 'a', 'p', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', ' ', 'a', 'f', 't', 'e', 'r', ' ', 'c', 'o', 'n', 'f', 'i', 'r', 'm', 'i', 'n', 'g', '.' };
static char qreally_syntax[3] = { 'q', '!' };
static char qreally_help[42] = { 'Q', 'u', 'i', 't', 's', ' ', 't', 'h', 'e', ' ', 'a', 'p', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', ' ', 'w', 'i', 't', 'h', 'o', 'u', 't', ' ', 'c', 'o', 'n', 'f', 'i', 'r', 'm', 'i', 'n', 'g', '.' };
static char rn_syntax[10] = { 'r', 'n', ' ', '[', 'n', 'a', 'm', 'e', ']' };
static char rn_help[15] = { 'R', 'e', 'a', 'd', 's', ' ', 'n', 'e', 't', 'l', 'i', 's', 't', '.' };
static char s_syntax[9] = { 's', ' ', '[', 'n', 'a', 'm', 'e', ']' };
static char s_help[19] = { 'S', 'a', 'v', 'e', 's', ' ', 'l', 'a', 'y', 'o', 'u', 't', ' ', 'd', 'a', 't', 'a', '.' };
static char w_syntax[9] = { 'w', ' ', '[', 'n', 'a', 'm', 'e', ']' };
static char w_help[19] = { 'S', 'a', 'v', 'e', 's', ' ', 'l', 'a', 'y', 'o', 'u', 't', ' ', 'd', 'a', 't', 'a', '.' };
static char wq_syntax[3] = { 'w', 'q' };
static char wq_help[33] = { 'S', 'a', 'v', 'e', 's', ' ', 't', 'h', 'e', ' ', 'l', 'a', 'y', 'o', 'u', 't', ' ', 'd', 'a', 't', 'a', ' ', 'a', 'n', 'd', ' ', 'q', 'u', 'i', 't', 's', '.' };
HID_Action command_action_list[10] = { { "h", 0, &CommandHelp, &h_help, &h_syntax }
, { "l", 0, &CommandLoadLayout, &l_help, &l_syntax }
, { "le", 0, &CommandLoadElementToBuffer, &le_help, &le_syntax }
, { "m", 0, &CommandLoadLayoutToBuffer, &m_help, &m_syntax }
, { "q", 0, &CommandQuit, &q_help, &q_syntax }
, { "q!", 0, &CommandReallyQuit, &qreally_help, &qreally_syntax }
, { "rn", 0, &CommandLoadNetlist, &rn_help, &rn_syntax }
, { "s", 0, &CommandSaveLayout, &s_help, &s_syntax }
, { "w", 0, &CommandSaveLayout, &w_help, &w_syntax }
, { "wq", 0, &CommandSaveLayoutAndQuit, &wq_help, &wq_syntax }
 };
int CommandHelp( int argc, char **argv, int x, int y )
{
  Message( "following commands are supported:\n  Command()   execute an action command (too numerous to list)\n              see the manual for the list of action commands\n  h           display this help message\n  l  [file]   load layout\n  le [file]   load element to buffer\n  m  [file]   load layout to buffer (merge)\n  q           quits the application\n  q!          quits without save warning\n  rn [file]   read in a net-list file\n  s  [file]   save layout\n  w  [file]   save layout\n  wq [file]   save layout and quit\n" );
  return 0;
}
int CommandLoadLayout( int argc, char **argv, int x, int y )
{
  static char *filename, *name;
  if ( argc == 1 )
  {
    filename[0] = argv[0];
    if ( PCB->Changed )
    {
      gui->confirm_dialog( (long long)( "OK to override layout data?" ) );
      if ( gui == 0 )
      {
        free( 0 );
        return 0;
      }
    }
    LoadPCB( filename );
    free( 0 );
    return 0;
  }
  else
  {
    Message( "Usage: l [name]\n  loads layout data\n" );
    return 1;
  }
}
int CommandLoadElementToBuffer( int argc, char **argv, int x, int y )
{
  static char *filename;
  if ( argc == 1 )
  {
    filename = argv[0];
    if ( argv[0] && ( LoadElementToBuffer( &Buffers[ Settings.BufferNumber ], filename, 1 ) & 255 ) )
    {
      SetMode( 5 );
      return 0;
    }
    return 0;
  }
  else
  {
    Message( 0, "Usage: le [name]\n  loads element data to buffer\n" );
    return 1;
  }
}
int CommandLoadLayoutToBuffer( int argc, char **argv, int x, int y )
{
  static char *filename;
  if ( argc == 1 )
  {
    filename = argv[0];
    if ( argv[0] && ( LoadLayoutToBuffer( &Buffers[ Settings.BufferNumber ], filename ) & 255 ) )
    {
      SetMode( 5 );
      return 0;
    }
    return 0;
  }
  else
  {
    Message( "Usage: m [name]\n  loads layout data to buffer\n" );
    return 1;
  }
}
int CommandQuit( int argc, char **argv, int x, int y )
{
  if ( PCB->Changed )
  {
    gui->close_confirm_dialog( );
    if ( gui == 1 )
    {
      QuitApplication( );
      return 0;
    }
    return 0;
  }
  QuitApplication( );
  return 0;
}
int CommandReallyQuit( int argc, char **argv, int x, int y )
{
  QuitApplication( );
  return 0;
}
int CommandLoadNetlist( int argc, char **argv, int x, int y )
{
  int ebx;
  int esi;
  static char *filename, *name;
  if ( argc == 1 )
  {
    filename[0] = argv[0];
    if ( PCB->Netlistname )
    {
      SaveFree( &PCB->Netlistname );
    }
    PCB->Netlistname = StripWhiteSpaceAndDup( filename );
    free( 0 );
    return 0;
  }
  else
  {
    Message( "Usage: rn [name]\n  reads in a netlist file\n" );
    return 1;
  }
}
int CommandSaveLayout( int argc, char **argv, int x, int y )
{
  if ( argc == 0 )
  {
    if ( PCB->Filename == 0 )
    {
      Message( "No filename to save to yet\n" );
      return 0;
    }
    SavePCB( &PCB->Filename );
  }
  else
  if ( argc == 1 )
  {
    SavePCB( argv[0] );
  }
  Message( "Usage: s [name] | w [name]\n  saves layout data\n" );
  return 1;
  return 0;
}
int CommandSaveLayoutAndQuit( int argc, char **argv, int x, int y )
{
  if ( CommandSaveLayout( argc, argv, x, y ) == 0 )
  {
    y = 0;
    x = 0;
    argv = 0;
    argc = 0;
  }
  return 1;
}
void register_command_action_list( void )
{
  hid_register_actions( command_action_list, 10 );
  return;
}
#if 0
#endif
