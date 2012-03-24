#include "netlist.c.h"
static char netlist_syntax[41] = { 'N', 'e', 't', '(', 'f', 'i', 'n', 'd', '|', 's', 'e', 'l', 'e', 'c', 't', '|', 'r', 'a', 't', 's', '|', 'n', 'o', 'r', 'a', 't', 's', '[', ',', 'n', 'e', 't', '[', ',', 'p', 'i', 'n', ']', ']', ')' };
static char netlist_help[37] = { 'P', 'e', 'r', 'f', 'o', 'r', 'm', ' ', 'v', 'a', 'r', 'i', 'o', 'u', 's', ' ', 'a', 'c', 't', 'i', 'o', 'n', 's', ' ', 'o', 'n', ' ', 'n', 'e', 't', 'l', 'i', 's', 't', 's', '.' };
HID_Action netlist_action_list[2] = { { "net", 0, &Netlist, &netlist_help, &netlist_syntax }
, { "netlist", 0, &Netlist, &netlist_help, &netlist_syntax }
 };
LibraryMenuTypePtr netnode_to_netname( char *nodename )
{
  int edx;
  int i, j;
  if ( !1 )
  {
    i = 0;
    do
    {
      return ebp_44 + ( eax * 28 );
    }
    while ( PCB->NetlistLib.MenuN <= i );
  }
  return 0;
}
LibraryMenuTypePtr netname_to_netname( char *netname )
{
  int i;
  if ( netname[0] == ' ' || netname[0] == '*' )
    netname[0] = netname[1] == ' ' ? netname : netname + 2;
  if ( PCB->NetlistLib.MenuN )
  {
    i = 0;
  {
    do
    {
      if ( strcmp( PCB->NetlistLib.Menu->Name[0] + 2, netname ) == 0 )
        break;
      i++;
    }
    while ( PCB->NetlistLib.MenuN <= i + 1 );
  }
  }
  return 0;
}
void netlist_find( LibraryMenuType *net, LibraryEntryType *pin )
{
  int eax;
  int edx;
  int x, y;
  if ( SeekPad( &net->Entry, ebp_36, 0 ) & 255 )
  {
    if ( ebp_28 == 256 )
    {
      x = *(int*)(ebp_20 + 52);
      y = *(int*)(ebp_20 + 56);
    }
    else
    if ( ebp_28 == 512 )
    {
      x = *(int*)(ebp_20 + 44);
      y = *(int*)(ebp_20 + 48);
    }
    LookupConnection( x, y, 1, 1, 4 );
    return;
  }
  return;
}
void netlist_select( LibraryMenuType *net, LibraryEntryType *pin )
{
  int eax;
  int edx;
  int x, y;
  if ( SeekPad( &net->Entry, ebp_36, 0 ) & 255 )
  {
    if ( ebp_28 == 256 )
    {
      x = *(int*)(ebp_20 + 52);
      y = *(int*)(ebp_20 + 56);
    }
    else
    if ( ebp_28 == 512 )
    {
      x = *(int*)(ebp_20 + 44);
      y = *(int*)(ebp_20 + 48);
    }
    LookupConnection( x, y, 1, 1, 64 );
    return;
  }
  return;
}
void netlist_rats( LibraryMenuType *net, LibraryEntryType *pin )
{
  net->Name = 32;
  net->flag = 1;
  net = "NetlistChanged";
}
void netlist_norats( LibraryMenuType *net, LibraryEntryType *pin )
{
  net->Name = 42;
  net->flag = 0;
  net = "NetlistChanged";
}
int Netlist( int argc, char **argv, int x, int y )
{
  int eax;
  int edx;
  int ebp_216;
  NFunc func;
  int i, j;
  LibraryMenuType *net;
  /* phantom */ LibraryEntryType *pin;
  int net_found;
  int pin_found;
  int use_re;
  regex_t elt_pattern;
  regmatch_t match;
  if ( PCB )
  {
    if ( argc )
    {
      func = &netlist_find;
      if ( strcasecmp( argv[0], "find" ) )
      {
        func = &netlist_select;
        if ( strcasecmp( argv[0], "select" ) )
        {
          func = &netlist_rats;
          if ( strcasecmp( argv[0], "rats" ) )
          {
            func = &netlist_norats;
            if ( strcasecmp( argv[0], "norats" ) )
              goto B4;
          }
        }
      }
      if ( argc > 1 )
      {
        int result;
        if ( PCB->NetlistLib.MenuN )
        {
          i = 0;
          use_re = 1;
          do
          {
            use_re = strcasecmp( argv[1], use_re + 2 ) == 0 ? use_re : 0;
            i++;
          }
          while ( ebp_204 != i + 1 );
          if ( use_re == 0 )
          {
            /* phantom */ int l;
            net_found = 0;
            pin_found = 0;
            ebp_216 = 0;
            do
            {
              net = PCB->NetlistLib.Menu + ( net * 28 );
              if ( argc > 1 )
              {
                if ( use_re )
                {
                  if ( regexec( &elt_pattern, net + 2, 1, &match.rm_so, 0 ) == 0 )
                    goto B39;
                  else
                  {
                  }
                }
                else
                {
                  if ( strcasecmp( net + 2, argv[1] ) )
                  {
                    ebp_216++;
                  }
                }
B39:;
                if ( argc != 2 )
                {
                  if ( net->EntryN )
                  {
                    j = 0;
                    while ( 1 )
                    {
                      if ( strcasecmp( &net->Entry->ListEntry[0], argv[2] ) && ( eax || *(char*)(ebp_208 + edi) != '-' ) )
                      {
                        j++;
                        if ( net->EntryN <= j + 1 )
                          goto B45;
                      }
                      else
                      {
                        func( net, &net->Entry->ListEntry[0] );
                        j++;
                        pin_found = 1;
                        if ( net->EntryN <= j )
                          goto B45;
                      }
                    }
                  }
B45:;
                  net_found = 1;
                }
              }
              net_found = 1;
              func( net, 0 );
            }
            while ( ebp_216 < PCB->NetlistLib.MenuN );
            if ( pin_found == 0 )
            {
              if ( argc > 2 )
              {
                gui->log( "Net %s has no pin %s\n", argv[1] );
              }
              else
              {
                if ( net_found == 0 )
                  gui->log( "No net named %s\n", argv[1] );
                if ( use_re )
                {
                  regfree( &elt_pattern );
                }
              }
            }
            else
            {
            }
          }
        }
        else
        {
        }
        if ( result == 0 )
        {
        }
        else
        {
          regerror( result, &elt_pattern, errorstring, 128 );
          Message( "regexp error: %s\n", i );
          regfree( &elt_pattern );
        }
      }
      else
      {
        char errorstring[128];
      }
      net_found = 0;
      if ( PCB->NetlistLib.MenuN )
      {
        /* phantom */ int l;
        net_found = 0;
        pin_found = 0;
        ebp_216 = 0;
        do
        {
          net = PCB->NetlistLib.Menu + ( net * 28 );
        }
        while ( ebp_216 < PCB->NetlistLib.MenuN );
      }
      else
      {
      }
    }
B4:;
    Message( netlist_syntax );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return eax;
}
void register_netlist_action_list( void )
{
  hid_register_actions( netlist_action_list, 2 );
  return;
}
#if 0
#endif
