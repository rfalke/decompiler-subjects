#include "LYrcFile.c.h"
static Config_Enum tbl_DTD_recovery[7];
static Config_Enum tbl_dir_list_style[4];
static Config_Enum tbl_dir_list_order[8];
static Config_Enum tbl_file_sort[5];
Config_Enum tbl_keypad_mode[7];
Config_Enum tbl_multi_bookmarks[5];
Config_Enum tbl_preferred_encoding[7];
Config_Enum tbl_preferred_media[6];
static Config_Enum tbl_show_colors[8];
Config_Enum tbl_transfer_rate[8];
Config_Enum tbl_user_mode[4];
static Config_Enum tbl_visited_links[6];
Config_Enum tbl_force_prompt[4];
static Config_Type Config_Table[48];
BOOLEAN getBool( char *src )
{
  return ( strncasecomp( src, ebp_20, ebp_20 ) == 0 || strncasecomp( src, "true", 4 ) == 0 ? 1 : 0 );
}
char *LYputEnum( Config_Enum *table, int value )
{
  for ( ; table->name[0]; table++ )
  {
    if ( table->value == value )
    {
      return &table->name[0];
    }
    // table++;
  }
  return "?";
}
BOOLEAN LYgetEnum( Config_Enum *table, char *name, int *result )
{
  Config_Enum *found = 0;
  unsigned int len = strlen( name );
  int match = 0;
  if ( len )
  {
    for ( ; table->name[0]; table++ )
    {
      if ( strncasecomp( &table->name[0], name, (int)len ) == 0 )
      {
        found = table;
        if ( strcasecomp( &table->name[0], name ) == 0 )
        {
          match = 1;
          break;
        }
        else
          match++;
      }
      // table++;
    }
    if ( match == 1 )
    {
      result[0] = found->value;
      return 0;
    }
    table++;
  }
  return 0;
}
int get_assume_charset( char *value )
{
  int i = 0;
  for ( ; i < LYNumCharsets; i++ )
  {
    if ( strcasecomp( value, LYCharSet_UC[ i ].MIMEname ) == 0 )
    {
      UCLYhndl_for_unspec = i;
      break;
    }
    // i++;
  }
  return 0;
}
void put_assume_charset( FILE *fp, struct config_type *tbl )
{
  int i = 0;
  for ( ; i < LYNumCharsets; i++ )
  {
    fprintf( fp, "#    %s\n", LYCharSet_UC[ i ].MIMEname );
    // i++;
  }
  fprintf( fp, "%s=%s\n\n", &tbl->name[0], LYCharSet_UC[ UCLYhndl_for_unspec ].MIMEname );
  return;
}
int get_display_charset( char *value )
{
  int i = 0;
  i = UCGetLYhndl_byAnyName( value );
  if ( i >= 0 )
  {
    current_char_set = i;
  }
  return 0;
}
void put_display_charset( FILE *fp, struct config_type *tbl )
{
  int i = 0;
  for ( ; LYchar_set_names[ i ]; i++ )
  {
    fprintf( fp, "#    %s\n", LYchar_set_names[ i ] );
    // i++;
  }
  fprintf( fp, "%s=%s\n\n", &tbl->name[0], LYchar_set_names[ current_char_set ] );
  return;
}
int get_editor( char *value )
{
  if ( system_editor == 0 )
  {
    HTSACopy( &editor, value );
  }
  return 0;
}
void put_editor( FILE *fp, struct config_type *tbl )
{
  fprintf( fp, "%s=%s\n\n", &tbl->name[0], "" );
  return;
}
int get_tagsoup( char *value )
{
  int eax;
  int found = Old_DTD;
  if ( ( LYgetEnum( tbl_DTD_recovery, value, &found ) & 255 ) && found != Old_DTD )
  {
    Old_DTD = found;
    HTSwitchDTD( Old_DTD == 0 );
  }
  return 0;
}
void put_tagsoup( FILE *fp, struct config_type *tbl )
{
  fprintf( fp, "%s=%s\n\n", &tbl->name[0], LYputEnum( tbl_DTD_recovery, Old_DTD ) );
  return;
}
Config_Type *lookup_config( char *name )
{
  Config_Type *tbl = Config_Table;
  char ch = name[0];
  for ( ; tbl->name[0]; tbl++ )
  {
    if ( tbl->enabled )
    {
      char ch1 = tbl->name;
      if ( ch == ch1 && strcasecomp( name, &tbl->name[0] ) == 0 )
        break;
    }
    // tbl++;
  }
  return tbl;
}
int _f( char *c )
{
  return eax;
}
int _read_rc( int val )
{
  ParseUnion _q;
  ParseUnion *q;
  _q.add_value[0][0].next[0] = _f;
  q->add_value[0] = &_f;
  if ( val )
    _q( 0 );
  if ( val )
  {
    ;
  }
  return val;
}
void read_rc( FILE *fp )
{
  char *buffer = 0;
  char rcfile[256];
  char MBM_line[256];
  int n;
  if ( fp == 0 )
  {
    LYAddPathToHome( rcfile, 256, ".lynxrc" );
    fp = fopen64( rcfile, "r" );
    if ( fp )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "read_rc opened %s\n", rcfile );
        while ( LYSafeGets( &buffer, fp ) == 0 )
        {
          char *name, *value, *notes;
          Config_Type *tbl;
          ParseUnion *q;
          LYTrimTrailing( buffer );
          name = LYSkipBlanks( buffer );
          if ( !( *(short*)(*(int*)(__ctype_b_loc( )) + ( name[0] * 2 )) & 4 ) && name[0] )
          {
            value = strchr( name, '=' );
            if ( value == 0 )
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "LYrcFile: missing '=' %s\n", name );
              }
            }
            else
            {
              value[0] = 0;
              value++;
              LYTrimTrailing( name );
              value = LYSkipBlanks( value );
              if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
              {
                fprintf( TraceFP( ), "LYrcFile %s:%s\n", name, value );
              }
              tbl = lookup_config( name );
              if ( tbl->name[0] == 0 )
              {
                char *special = "multi_bookmark";
                if ( strncasecomp( name, special, strlen( special ) ) == 0 )
                {
                  tbl = lookup_config( special );
                }
                if ( tbl->name[0] == 0 )
                {
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "LYrcFile: ignored %s=%s\n", name, value );
                  }
                }
              }
              q = &tbl->value;
              switch ( tbl->type )
              {
              case 0:
                break;
              case 2:
                if ( q->add_value[0] )
                {
                  q->override_primary_action = getBool( value );
                }
                break;
              case 3:
                if ( q->add_value[0] )
                {
                  ;
                }
                break;
              case 1:
                n = 0;
                for ( ; tbl->strings[ n ]; n++ )
                {
                  if ( strcasecomp( value, &tbl->strings[ n ] ) == 0 )
                  {
                    q->add_value = &n;
                  }
                  else
                  {
                    // n++;
                  }
                }
                break;
              case 5:
                if ( tbl->table )
                {
                  LYgetEnum( &tbl->table, value, (int*)q->add_value[0] );
                }
                break;
              case 4:
                if ( q->add_value[0] && sscanf( value, value, "%d", ival ) == 1 )
                {
                  q->add_value = &ival;
                }
                break;
              case 6:
                if ( q->add_value[0] )
                {
                  if ( q->add_value )
                    HTSACat( (int)( &q->add_value[0]->next ), "," );
                  HTSACat( (int)( &q->add_value[0]->next ), value );
                }
                break;
              case 7:
                n = 1;
                for ( ; n <= 25; n++ )
                {
                  sprintf( MBM_line, "multi_bookmark%c", LYindex2MBM( n ) );
                  if ( strcasecomp( name, MBM_line ) == 0 )
                  {
                    notes = strchr( value, ',' );
                    if ( notes )
                    {
                      notes = 0;
                      notes++;
                      LYTrimTrailing( value );
                      notes = LYSkipBlanks( notes );
                    }
                    else
                    {
                      notes = value + strlen( value );
                    }
                    HTSACopy( &MBM_A_subbookmark[ n ], value );
                    HTSACopy( &MBM_A_subdescript[ n ], notes );
                  }
                  else
                  {
                    // n++;
                  }
                }
                break;
              case 8:
                if ( q->add_value[0] )
                {
                  HTSACopy( (int)( &q->add_value[0]->next ), value );
                }
                break;
              }
            }
          }
        }
      }
    }
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "read_rc used passed-in stream\n" );
  }
  return;
}
void write_list( FILE *fp, char *list )
{
  int first = 1;
  while ( list )
  {
    int ch = list;
    list++;
    if ( first )
    {
      fwrite( "# ", 1, 2, fp );
      first = 0;
    }
    if ( ch == 10 )
      first = 1;
    fputc( ch, fp );
  }
  return;
}
void explain_keypad_mode( FILE *fp )
{
  write_list( fp, gettext( "If keypad_mode is set to \"NUMBERS_AS_ARROWS\", then the numbers on\nyour keypad when the numlock is on will act as arrow keys:\n            8 = Up Arrow\n  4 = Left Arrow    6 = Right Arrow\n            2 = Down Arrow\nand the corresponding keyboard numbers will act as arrow keys,\nregardless of whether numlock is on.\n" ) );
  write_list( fp, gettext( "If keypad_mode is set to \"LINKS_ARE_NUMBERED\", then numbers will\nappear next to each link and numbers are used to select links.\n" ) );
  write_list( fp, gettext( "If keypad_mode is set to \"LINKS_AND_FORM_FIELDS_ARE_NUMBERED\", then\nnumbers will appear next to each link and visible form input field.\nNumbers are used to select links, or to move the \"current link\" to a\nform input field or button.  In addition, options in popup menus are\nindexed so that the user may type an option number to select an option in\na popup menu, even if the option isn't visible on the screen.  Reference\nlists and output from the list command also enumerate form inputs.\n" ) );
  write_list( fp, gettext( "NOTE: Some fixed format documents may look disfigured when\n\"LINKS_ARE_NUMBERED\" or \"LINKS_AND_FORM_FIELDS_ARE_NUMBERED\" are\nenabled.\n" ) );
  return;
}
int save_rc( FILE *fp )
{
  int eax;
  Config_Type *tbl = Config_Table;
  char rcfile[256];
  BOOLEAN is_tempfile = fp != 0;
  int n;
  if ( fp == 0 )
  {
    LYAddPathToHome( rcfile, 256, ".lynxrc" );
    fp = LYNewTxtFile( rcfile );
    if ( fp == 0 )
      return 0;
  }
  write_list( fp, gettext( "Lynx User Defaults File\n\n" ) );
  write_list( fp, gettext( "This file contains options saved from the Lynx Options Screen (normally\nwith the 'o' key).  To save options with that screen, you must select the\ncheckbox:\n" ) );
  fprintf( fp, "#\t%s\n", gettext( "Save options to disk" ) );
  fwrite( "#\n", 1, 2, fp );
  write_list( fp, gettext( "You must then save the settings using the link on the line above the\ncheckbox:\n" ) );
  fprintf( fp, "#\t%s\n", gettext( "Accept Changes" ) );
  fwrite( "#\n", 1, 2, fp );
  write_list( fp, gettext( "You may also use the command-line option \"-forms_options\", which displays\nthe simpler Options Menu instead.  Save options with that using the '&gt;' key.\n\n" ) );
  write_list( fp, gettext( "There is normally no need to edit this file manually, since the defaults\nhere can be controlled from the Options Screen, and the next time options\nare saved from the Options Screen this file will be completely rewritten.\nYou have been warned...\n\nIf you are looking for the general configuration file - it is normally\ncalled \"lynx.cfg\".  It has different content and a different format.\nIt is not this file.\n" ) );
  fputc( 10, fp );
  while ( tbl->name[0] == 0 )
  {
    ParseUnion *q = &tbl->value;
    if ( tbl->enabled == 0 )
    {
      tbl++;
    }
    else
    {
      if ( tbl->note )
      {
        write_list( fp, gettext( &tbl->note ) );
      }
      else
      if ( tbl->table == tbl_keypad_mode[0].name )
        explain_keypad_mode( fp );
      switch ( tbl->type )
      {
      case 2:
        fprintf( fp, "%s=%s\n\n", &tbl->name[0], "off" );
        tbl++;
        break;
      case 3:
        if ( tbl->write_it )
          tbl->write_it( fp, tbl );
        break;
      case 1:
        n = 0;
        for ( ; tbl->strings[ n ]; n++ )
        {
          fprintf( fp, "#    %s\n", &tbl->strings[ n ] );
          // n++;
        }
        fprintf( fp, "%s=%s\n\n", &tbl->name[0], &tbl->strings[ q->add_value ] );
        break;
      case 5:
        fprintf( fp, "%s=%s\n\n", &tbl->name[0], LYputEnum( &tbl->table, q->add_value ) );
        break;
      case 4:
        fprintf( fp, "%s=%d\n\n", &tbl->name[0], q->add_value );
        break;
      case 7:
        n = 1;
        for ( ; n <= 25; n++ )
        {
          fprintf( fp, "multi_bookmark%c=", LYindex2MBM( n ) );
          fputs( "", fp );
          if ( MBM_A_subdescript[ n ] && MBM_A_subdescript[ n ][0] )
            fprintf( fp, ",%s", MBM_A_subdescript[ n ] );
          fputc( 10, fp );
          // n++;
        }
        fputc( 10, fp );
        break;
      case 6:
      case 8:
        fprintf( fp, "%s=%s\n\n", &tbl->name[0], "" );
        break;
      case 0:
        break;
      }
    }
  }
}
BOOLEAN will_save_rc( char *name )
{
  Config_Type *tbl = lookup_config( name );
  return tbl->name[0] != 0;
}
int enable_lynxrc( char *value )
{
  Config_Type *tbl;
  char *colon = strchr( value, ebp_20 );
  if ( colon )
  {
    colon[0] = 0;
    colon++;
    LYTrimLeading( value );
    LYTrimTrailing( value );
    tbl = Config_Table;
    for ( ; tbl->name[0]; tbl++ )
    {
      if ( strcasecomp( value, &tbl->name[0] ) == 0 )
      {
        tbl->enabled = getBool( colon );
        break;
      }
      // tbl++;
    }
  }
  return 0;
}
#if 0
#endif
