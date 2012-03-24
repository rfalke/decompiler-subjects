#include "gui-config.c.h"
static GList *config_color_list;
static GList *lib_newlib_list;
static gchar *lib_newlib_config;
static gchar *board_size_override;
static gchar *color_file;
static gchar *config_dir;
static gchar *color_dir;
static ConfigAttribute config_attributes[53] = { { "gui-compact-horizontal", 0, &_ghidgui.compact_horizontal }
, { "gui-compact-vertical", 0, &_ghidgui.compact_vertical }
, { "gui-title-window", 0, &_ghidgui.ghid_title_window }
, { "use-command-window", 0, &_ghidgui.use_command_window }
, { "save-in-tmp", 4, 0 }
, { "grid-units-mm", 4, 0 }
, { "history-size", 1, &_ghidgui.history_size }
, { "auto-pan-speed", 1, &_ghidgui.auto_pan_speed }
, { "top-window-width", 1, &_ghidgui.top_window_width }
, { "top-window-height", 1, &_ghidgui.top_window_height }
, { "log-window-width", 1, &_ghidgui.log_window_width }
, { "log-window-height", 1, &_ghidgui.log_window_height }
, { "drc-window-width", 1, &_ghidgui.drc_window_width }
, { "drc-window-height", 1, &_ghidgui.drc_window_height }
, { "library-window-width", 1, &_ghidgui.library_window_width }
, { "library-window-height", 1, &_ghidgui.library_window_height }
, { "netlist-window-height", 1, &_ghidgui.netlist_window_height }
, { "keyref-window-width", 1, &_ghidgui.keyref_window_width }
, { "keyref-window-height", 1, &_ghidgui.keyref_window_height }
, { "text-scale", 4, 0 }
, { "via-thickness", 4, 0 }
, { "via-drilling-hole", 4, 0 }
, { "backup-interval", 4, 0 }
, { "line-thickness", 4, 0 }
, { "rat-thickness", 4, 0 }
, { "bloat", 4, 0 }
, { "shrink", 4, 0 }
, { "min-width", 4, 0 }
, { "min-silk", 4, 0 }
, { "min-drill", 4, 0 }
, { "min-ring", 4, 0 }
, { "default-PCB-width", 4, 0 }
, { "default-PCB-height", 4, 0 }
, { "grid-increment-mil", 4, 0 }
, { "grid-increment-mm", 4, 0 }
, { "size-increment-mil", 4, 0 }
, { "size-increment-mm", 4, 0 }
, { "line-increment-mil", 4, 0 }
, { "line-increment-mm", 4, 0 }
, { "clear-increment-mil", 4, 0 }
, { "clear-increment-mm", 4, 0 }
, { "groups", 4, 0 }
, { "route-styles", 4, 0 }
, { "library-newlib", 3, &lib_newlib_config }
, { "color-file", 3, &color_file }
, { "layer-name-1", 4, 0 }
, { "layer-name-2", 4, 0 }
, { "layer-name-3", 4, 0 }
, { "layer-name-4", 4, 0 }
, { "layer-name-5", 4, 0 }
, { "layer-name-6", 4, 0 }
, { "layer-name-7", 4, 0 }
, { "layer-name-8", 4, 0 }
 };
static GtkWidget *config_window;
static GtkWidget *config_sizes_vbox;
static GtkWidget *config_sizes_tab_vbox;
static GtkWidget *config_text_spin_button;
static GtkWidget *use_board_size_default_button;
static GtkWidget *use_drc_sizes_default_button;
static gint new_board_width;
static gint new_board_height;
static GtkWidget *config_increments_vbox;
static GtkWidget *config_increments_tab_vbox;
static GtkWidget *library_newlib_entry;
static GtkWidget *config_groups_table;
static GtkWidget *config_groups_vbox;
static GtkWidget *config_groups_window;
static GtkWidget *layer_entry[16];
static GtkWidget *group_button[18][16];
static gint config_layer_group[18];
static LayerGroupType layer_groups;
static LayerGroupType *lg_monitor;
static gboolean groups_modified;
static gboolean groups_holdoff;
static gboolean layers_applying;
static gchar *layer_info_text[36] = { "&lt;h&gt;Layer Names\n", "You may enter layer names for the layers drawn on the screen.\nThe special 'component side' and 'solder side' are layers which\nwill be printed out, so they must have in their group at least one\nof the other layers that are drawn on the screen.\n", "\n", "&lt;h&gt;Layer Groups\n", "Each layer on the screen may be in its own group which allows the\nmaximum number of board layers.  However, for boards with fewer\nlayers, you may group layers together which will then print as a\nsingle layer on a printout.  This allows a visual color distinction\nto be displayed on the screen for signal groups which will print as\na single layer\n", "\n", "For example, for a 4 layer board a useful layer group arrangement\ncan be to have 3 screen displayed layers grouped into the same group\nas the 'component side' and 'solder side' printout layers.  Then\ngroups such as signals, ground, and supply traces can be color\ncoded on the screen while printing as a single layer.  For this\nyou would select buttons and enter names on the Setup page to\nstructure four layer groups similar to this:\n", "\n", "&lt;b&gt;Group 1:", "\n\t", "solder", "\n\t", "GND-solder", "\n\t", "Vcc-solder", "\n\t", "solder side", "\n", "&lt;b&gt;Group 2:", "\n\t", "component", "\n\t", "GND-component", "\n\t", "Vcc-component", "\n\t", "component side", "\n", "&lt;b&gt;Group 3:", "\n\t", "signal1", "\n", "&lt;b&gt;Group 4:", "\n\t", "signal2", "\n" };
static GtkWidget *config_colors_vbox;
static GtkWidget *config_colors_tab_vbox;
static GtkWidget *config_colors_save_button;
static GtkWidget *config_color_file_label;
static GtkWidget *config_color_warn_label;
static gboolean config_colors_modified;
static GtkNotebook *config_notebook;
FILE *config_file_open( gchar *mode )
{
  int edx;
  FILE *f;
  gchar *homedir, *fname;
  if ( homedir == 0 )
  {
    f = 0;
    g_log( 0, 32, "config_file_open: Can't get home directory!" );
  }
  if ( config_dir == 0 )
  {
    config_dir = g_build_path( "/", homedir, (long long)( ".pcb" ) );
    if ( g_file_test( config_dir, 4 ) == 0 && mkdir( config_dir, 493 ) < 0 )
    {
      f = 0;
      g_log( 0, 32, "config_file_open: Can't make \"%s\" directory!", config_dir );
      g_free( config_dir );
      config_dir = 0;
    }
  }
  if ( color_dir == 0 )
  {
    color_dir = g_build_path( "/", config_dir, (long long)( "colors" ) );
    if ( g_file_test( color_dir, 4 ) == 0 )
    {
      if ( mkdir( color_dir, 493 ) >= 0 )
      {
      }
      else
      {
        g_log( 0, 32, "config_file_open: Can't make \"%s\" directory!", color_dir );
        g_free( color_dir );
        color_dir = 0;
      }
      dup_string( &color_file, g_build_path( "/", color_dir, (long long)( "Default" ) ) );
      g_free( g_build_path( "/", color_dir, (long long)( "Default" ) ) );
    }
  }
  f = (FILE*)fopen( g_build_path( "/", config_dir, (long long)( "preferences" ) ), mode );
  g_free( *ebp_24 );
  return f;
}
void ghid_config_init( void )
{
  int edx;
  HID_AttrNode *ha;
  HID_Attribute *a;
  ConfigAttribute *ca;
  ConfigAttribute dummy_attribute;
  /* phantom */ ConfigColor *cc;
  /* phantom */ gint len;
  ghidgui->n_mode_button_columns = 3;
  ghidgui->small_label_markup = 1;
  ghidgui->auto_pan_on = 1;
  ghidgui->auto_pan_speed = 3;
  ghidgui->history_size = 5;
  dup_string( &color_file, "" );
  ha = hid_attr_nodes;
  if ( hid_attr_nodes )
  {
    do
    {
      a = &ha->attributes;
      if ( ha->attributes < ha->attributes[ ha->n ].name )
      {
        do
        {
          if ( a->value )
          {
            if ( config_attributes[0].name < y )
            {
              ca = config_attributes;
              do
              {
                if ( a && strcmp( (char*)a, (char*)ca ) == 0 )
                {
                  ca->type = CONFIG_Unused;
                  ca->value = a->value;
                  switch ( a->type )
                  {
                  case HID_Boolean:
                    *(char*)(a->value) = a->default_val.int_value;
                    ca->type = CONFIG_Boolean;
                    break;
                  case HID_Integer:
                    ca->type = CONFIG_Integer;
                    *(int*)(a->value) = a->default_val.int_value;
                    break;
                  case HID_Real:
                    ca->type = CONFIG_Real;
                    *(double*)(a->value) = a->default_val.real_value;
                    break;
                  case HID_String:
                    if ( a )
                    {
                      ca->type = CONFIG_String;
                      *(int*)(a->value) = g_strdup( a->default_val.str_value );
                      if ( strlen( (char*)a ) > 6 )
                      {
                        if ( strstr( (char*)a, "color" ) )
                        {
                          /* phantom */ gsize __n;
                          /* phantom */ gsize __s;
                          /* phantom */ gpointer __p;
                          *(int*)(g_malloc0( 24 )) = a[0].name[0];
                          strcmp( *(int*)(0), (char*)a );
                          if ( 1 )
                            *(int*)g_malloc0( 24 )/*.4*/ = 2;
                          else
                          {
                            strcmp( "layer-selected-color", (char*)a );
                            if ( 1 )
                              *(int*)g_malloc0( 24 )/*.4*/ = 3;
                            else
                            {
                              *(int*)g_malloc0( 24 )/*.4*/ = eax == 0;
                            }
                          }
                          config_color_list = g_list_append( config_color_list, g_malloc0( 24 ) );
                        }
                        else
                      }
                    }
                    else
                  case HID_Label:
                  case HID_Mixed:
                  case HID_Path:
                    break;
                  case HID_Enum:
                    *(int*)(a->value) = a->default_val.int_value;
                    break;
                  default:
                    abort( );
                    break;
                  }
                }
                else
                {
                  ca++;
                }
              }
              while ( y != &ca[1].name );
            }
            ca = &dummy_attribute;
            ca->type = CONFIG_Unused;
            ca->value = a->value;
            switch ( a->type )
            {
            case HID_Boolean:
              break;
            case HID_Integer:
              break;
            case HID_Real:
              break;
            case HID_String:
              break;
            case HID_Label:
            case HID_Mixed:
            case HID_Path:
              break;
            case HID_Enum:
              break;
            default:
              break;
            }
          }
          a++;
        }
        while ( &a[1].name < ha->attributes[ ha->n ].name );
      }
      ha = &ha->next;
    }
    while ( ha->next );
  }
  return;
}
gint parse_option_line( gchar *line, gchar **option_result, gchar **arg_result )
{
  gchar *s, *ss;
  gchar option[64];
  gchar arg[512];
  gint argc;
  option_result = 0;
  if ( option_result )
    option_result[0] = 0;
  if ( arg_result )
    arg_result[0] = 0;
  if ( line == ' ' || line == '\t' )
  {
    s = line;
    do
    {
      s = s + 1;
    }
    while ( s == '\t' || s == ' ' );
  }
  if ( s != '\n' && ( s & 255 ) && s != '#' && s != '[' )
  {
    if ( strchr( s, '\n' ) )
      *(char*)(strchr( s, '\n' )) = 0;
    s = arg;
    arg = 0;
    sscanf( &s, "%63s %511[^\n]", option, &arg );
    if ( option && option != ':' )
    {
      do
      {
      }
      while ( s != '=' && s != ':' && ( s & 255 ) );
    }
    else
      s = option;
    s = 0;
    for ( ; s == '\t' || s == ' ' || s == ':' || s == '=' || s == '"';  )
    {
      s = s + 1;
    }
    if ( strchr( s, '"' ) )
      *(char*)(strchr( s, '"' )) = 0;
    if ( option_result )
    {
      option_result[0] = g_strdup( option );
    }
    if ( arg_result && s )
    {
      s = s;
      arg_result[0] = g_strdup( s );
      argc = 2;
    }
    else
      argc = 1;
  }
  else
    argc = 0;
  if ( option_result ^ 0 )
  {
    __stack_chk_fail( );
  }
  return eax;
}
void config_file_read( void )
{
  int eax;
  int ecx;
  int edx;
  FILE *f = config_file_open( "r" );
  gchar buf[512];
  gchar *option, *arg;
  if ( f )
  {
    buf = 0;
    while ( fgets( buf, 512, f ) == 0 )
    {
      if ( parse_option_line( buf, &option, &arg ) > 0 )
      {
        if ( config_attributes->name < y )
        {
          do
          {
            if ( option && strcmp( option, config_attributes[1].name ) == 0 )
            {
              if ( config_attributes[1].name )
              {
                if ( config_attributes[1].type != CONFIG_Integer )
                {
                  if ( !0 )
                  {
                    if ( config_attributes[1].type == CONFIG_Real )
                    {
                      *(double*)(config_attributes[1].value) = strtod( arg, 0 );
                      break;
                    }
                    else
                    if ( config_attributes[1].type == CONFIG_String )
                    {
                      dup_string( (gchar**)&config_attributes[1].value, arg != 0 ? "" : arg );
                    }
                    else
                      break;
                  }
                  else
                  {
                    *(char*)(config_attributes[1].value) = strtol( arg, 0, 10 );
                    break;
                  }
                }
                else
                {
                  *(int*)(config_attributes[1].value) = strtol( arg, 0, 10 );
                  break;
                }
              }
              else
                break;
            }
            else
            {
            }
          }
          while ( y != config_attributes[2].name );
          g_free( option );
          g_free( arg );
        }
      }
    }
    fclose( f );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
gboolean config_colors_read( gchar *path )
{
  int edx;
  FILE *f;
  GList *list;
  ConfigColor *cc;
  HID_Attribute *ha;
  gchar *s;
  gchar buf[512];
  gchar option[64];
  gchar arg[512];
  if ( path && path[0] )
  {
    f = (FILE*)fopen( path, "r" );
    if ( f )
    {
      do
      {
        if ( fgets( buf, 512, f ) )
        {
          sscanf( buf, "%63s %511[^\n]", option, &arg );
          if ( option[0] != ':' && ( option[0] & 255 ) )
          {
            do
            {
            }
            while ( s[0] != '=' && s[0] != ':' && ( s[0] & 255 ) );
          }
          else
            s = option;
          s[0] = 0;
          s[0] = arg[0];
          for ( ; s[0] == '\t' || s[0] == ' ' || s[0] == ':' || s[0] == '=';  )
          {
            s[0] = s + 1;
          }
          list = config_color_list;
          if ( config_color_list )
          {
            ha = &list->data[0];
            cc = &list->data[0];
          {
            /* phantom */ size_t __s1_len;
            /* phantom */ size_t __s2_len;
            if ( strcmp( option, (char*)ha ) == 0 )
            {
              s[0] = s;
              *(int*)(ha->value) = g_strdup( s );
              *(int*)&cc->color_is_mapped = 0;
              ghid_set_special_colors( &s[0] );
            }
            else
            {
              list = list->next;
            }
          }
          }
        }
        else
        {
          fclose( f );
          ghid_layer_buttons_color_update( );
          if ( 0 ^ 0 )
          {
            __stack_chk_fail( );
          }
          break;
        }
      }
      while ( list->next );
      ha = &list->data[0];
      cc = &list->data[0];
    }
  }
}
gchar *expand_dir( gchar *dir )
{
  gchar *s;
  if ( dir[0] == '~' )
  {
    dir[1] = dir + 1;
    return g_build_filename( s, (long long)( dir + 1 + 1 ) );
  }
  return g_strdup( dir );
}
void parse_optionv( gint *argc, gchar ***argv, gboolean from_cmd_line )
{
  int eax;
  int edx;
  HID_AttrNode *ha;
  HID_Attribute *a;
  gchar *ep;
  gint e;
  /* phantom */ gint ok;
  gint offset = ~( 0 - ( 0 & 1 ) ) & 2;
  /* phantom */ gboolean matched;
  while ( argc )
  {
    if ( argv[0] != '-' || argv[0][0][1] != '-' )
    {
      if ( from_cmd_line )
      {
        break;
      }
    }
    else
      ep[0] = ep;
    ha = hid_attr_nodes;
    if ( hid_attr_nodes )
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      do
      {
        a = ha->attributes;
        if ( ha->attributes < ha->attributes->name[0] )
        {
          do
          {
            if ( a && strcmp( &argv[0], (char*)a ) == 0 )
            {
              switch ( a->type )
              {
              case HID_Integer:
                if ( a->value )
                {
                  *(int*)(a->value) = strtol( &argv[1], 0, 0 );
                }
                else
                {
                  a->default_val.int_value = strtol( &argv[1], 0, 0 );
                }
                break;
              case HID_Real:
                if ( a->value )
                {
                  *(double*)(a->value) = strtod( &argv[1], 0 );
                }
                else
                {
                  a->default_val.real_value = strtod( &argv[1], 0 );
                }
                break;
              case HID_String:
                if ( a->value )
                {
                  *(int*)(a->value) = g_strdup( &argv[1] );
                }
                else
                {
                  a->default_val.str_value = g_strdup( &argv[1] );
                }
                break;
              case HID_Boolean:
                if ( a->value )
                  *(char*)(a->value) = 1;
                  argc = &argc[0];
                  argv++;
                else
                  a->default_val.int_value = 1;
                break;
              case HID_Enum:
                if ( a->enumerations[0] == 0 )
                {
                  __fprintf_chk( stderr, 1, "ERROR:  \"%s\" is an unknown value for the --%s option\n", &argv[1], &ep[0] );
                  exit( 1 );
                }
                e = 0;
                ep[0] = argv[1];
              {
                do
                {
                  if ( strcmp( a->enumerations[0], ep ) == 0 )
                  {
                    a = a;
                    a->default_val.int_value = e;
                    argc = &argc[0];
                    a->default_val.str_value = &argv[1];
                    argv++;
                  }
                  else
                  {
                    e++;
                  }
                }
                while ( a->enumerations[0] );
              }
                __fprintf_chk( stderr, 1, "ERROR:  \"%s\" is an unknown value for the --%s option\n", &argv[1], &ep[0] );
                exit( 1 );
                break;
              case HID_Mixed:
              case HID_Path:
                abort( );
                break;
              case HID_Label:
                break;
              }
              argc = &argc[0];
              argv++;
            }
            else
            {
              a++;
            }
          }
          while ( &a[1].name < ha->attributes->name[0] );
          ha = ha;
        }
      }
      while ( ha );
    }
    if ( from_cmd_line )
    {
      __fprintf_chk( stderr, 1, "unrecognized option: %s\n", &argv[0] );
      exit( 1 );
    }
    __fprintf_chk( stderr, 1, "unrecognized option: %s\n", &argv[0] );
  }
  argc = &a->name[1];
  argv = &argv[0];
  return;
}
void load_rc_file( gchar *path )
{
  int ecx;
  int edx;
  FILE *f;
  gchar buf[1024];
  gchar *av[2], **argv;
  gint argc;
  *(int*)&path[0] = 0;
  if ( fopen( path, ebp_1092 ) )
  {
    if ( Settings.verbose )
      __printf_chk( 1, "Loading pcbrc file: %s\n", path );
    while ( fgets( buf, 1024, f ) == 0 )
    {
      argv = av;
      argc = parse_option_line( buf, argv, &av[1] );
      if ( argc > 0 )
        parse_optionv( &argc, &argv, 0 );
      g_free( av[0] );
      g_free( av[1] );
    }
    fclose( f );
  }
  if ( path ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void ghid_config_files_read( gint *argc, gchar ***argv )
{
  int eax;
  double fp6;
  GList *list;
  gchar *str, *dir;
  gint width;
  gint height;
  ghidgui = &_ghidgui;
  ghid_config_init( );
  load_rc_file( "/etc/pcbrc" );
  load_rc_file( "/usr/local/etc/pcbrc" );
  load_rc_file( g_build_filename( pcblibdir, (long long)( "pcbrc" ) ) );
  g_free( g_build_filename( pcblibdir, (long long)( "pcbrc" ) ) );
  load_rc_file( g_build_filename( g_get_home_dir( ), (long long)( ".pcb/pcbrc" ) ) );
  g_free( g_build_filename( g_get_home_dir( ), (long long)( ".pcb/pcbrc" ) ) );
  load_rc_file( "pcbrc" );
  config_file_read( );
  config_colors_read( color_file );
  argc[0] = argc + -1;
  argv[0] = argv[0] + 4;
  parse_optionv( argc, argv, 1 );
  if ( board_size_override && sscanf( board_size_override, "%dx%d", &width, &height ) == 2 )
  {
    Settings.MaxWidth = (int)( 0.500000000000 );
    Settings.MaxHeight = Settings.grid_units_mm ? (int)( ( (double)( height ) / 0.000254000000 ) + 0.500000000000 ) : (int)( ( (double)( height ) * 100.000000000000 ) + 0.500000000000 );
  }
  if ( lib_newlib_config && lib_newlib_config[0] )
  {
    *ebp_72 = g_strdup( lib_newlib_config );
    if ( strtok( g_strdup( lib_newlib_config ), ":" ) )
    {
      do
      {
        if ( *(char*)(strtok( 0, ":" )) )
        {
          lib_newlib_list = &eax[0];
        }
        else
          break;
      }
      while ( strtok( 0, ":" ) );
    }
    argv[0] = argv[0];
    g_free( *ebp_72 );
  }
  list = lib_newlib_list;
  if ( lib_newlib_list )
  {
    do
    {
      Settings.LibraryTree = g_strconcat( str, ":", (long long)( expand_dir( (gchar*)list ) ), ebp_48, ebp_48, ebp_44, ebp_42 );
      g_free( dir );
      g_free( str );
      list = list->next;
    }
    while ( list->next == 0 );
  }
  return;
}
void ghid_config_files_write( void )
{
  int eax;
  FILE *f;
  ConfigAttribute *ca;
  if ( ghidgui->config_modified == 0 || config_file_open( "w" ) == 0 )
  {
    return;
  }
  __fprintf_chk( config_file_open( "w" ), 1, "### PCB configuration file. ###\n" );
  if ( config_attributes[0].name < y )
  {
    ca = config_attributes;
    do
    {
      if ( ca->type != CONFIG_Integer )
      {
        if ( !0 )
        {
          if ( ca->type == CONFIG_Real )
            __fprintf_chk( f, 1, "%s = %f\n", (char*)ca, *(double*)(ca->value) );
          else
          {
            if ( ca->type == CONFIG_String )
            {
              if ( *(int*)(ca->value) )
              {
                __fprintf_chk( f, 1, "%s = %s\n", (char*)ca, *(int*)(ca->value) );
                ca++;
                if ( y == ca )
                {
                  break;
                }
              }
              else
                __fprintf_chk( f, 1, "# %s = NULL\n", (char*)ca );
            }
            else
            {
              ca++;
            }
          }
        }
        else
        {
        }
      }
      else
      {
      }
      __fprintf_chk( f, 1, "%s = %d\n", (char*)ca, *(char*)(ca->value) );
    }
    while ( y != &ca[1].name );
  }
  fclose( f );
  ghidgui->config_modified = 0;
  return;
}
void config_command_window_toggle_cb( GtkToggleButton *button, gpointer data )
{
  static gboolean holdoff;
  gboolean active;
  gtk_toggle_button_get_active( button );
  if ( holdoff == 0 )
  {
    if ( ghidgui->command_entry_status_line_active == 0 )
    {
      ghidgui->use_command_window = gtk_toggle_button_get_active( button );
    }
    holdoff = 1;
    gtk_toggle_button_set_active( button, 0 );
    holdoff = 0;
    return;
  }
  else
  {
    return;
  }
}
void config_compact_horizontal_toggle_cb( GtkToggleButton *button, gpointer data )
{
  gboolean active;
  ghidgui->compact_horizontal = active;
  if ( active )
  {
    gtk_container_remove( (GtkContainer*)g_type_check_instance_cast( &ghidgui->compact_hbox->object.parent_instance.g_type_instance, gtk_container_get_type( ) ), &ghidgui->position_hbox );
    gtk_box_pack_end( g_type_check_instance_cast( &ghidgui->compact_vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), &ghidgui->position_hbox, 1, 0, 0 );
  }
  else
  {
    gtk_container_remove( (GtkContainer*)g_type_check_instance_cast( &ghidgui->compact_vbox->object.parent_instance.g_type_instance, gtk_container_get_type( ) ), &ghidgui->position_hbox );
    gtk_box_pack_end( g_type_check_instance_cast( &ghidgui->compact_hbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), &ghidgui->position_hbox, 0, 0, 4 );
  }
  ghid_set_status_line_label( );
  ghidgui->config_modified = 1;
  return;
}
void config_compact_vertical_toggle_cb( GtkToggleButton *button, gpointer data )
{
  gboolean active;
  ghidgui->compact_vertical = gtk_toggle_button_get_active( button );
  ghid_pack_mode_buttons( );
  ghidgui->config_modified = 1;
  return;
}
void config_title_window_cb( GtkToggleButton *button, gpointer data )
{
  gboolean active;
  ghidgui->ghid_title_window = gtk_toggle_button_get_active( button );
  ghid_window_set_name_label( &ghidgui->name_label_string );
  ghidgui->config_modified = 1;
  return;
}
void config_general_toggle_cb( GtkToggleButton *button, gint *setting )
{
  setting[0] = gtk_toggle_button_get_active( button );
  ghidgui->config_modified = 1;
  return;
}
void config_backup_spin_button_cb( GtkSpinButton *spin_button, gpointer data )
{
  Settings.BackupInterval = gtk_spin_button_get_value_as_int( spin_button );
  EnableAutosave( );
  ghidgui->config_modified = 1;
  return;
}
void config_history_spin_button_cb( GtkSpinButton *spin_button, gpointer data )
{
  ghidgui->history_size = gtk_spin_button_get_value_as_int( spin_button );
  ghidgui->config_modified = 1;
  return;
}
void config_auto_pan_speed_spin_button_cb( GtkSpinButton *spin_button, gpointer data )
{
  ghidgui->auto_pan_speed = gtk_spin_button_get_value_as_int( spin_button );
  ghidgui->config_modified = 1;
  return;
}
void text_spin_button_cb( GtkSpinButton *spin, gint *dst )
{
  dst[0] = gtk_spin_button_get_value_as_int( spin );
  ghidgui->config_modified = 1;
}
void size_spin_button_cb( GtkSpinButton *spin, gint *dst )
{
  double fp0;
  gdouble value;
  gtk_spin_button_get_value( spin );
  dst[0] = (int)( ( Settings.grid_units_mm == 0 ? 0.000000000000 : 0.000000000000 / 0.000254000000 ) + 0.500000000000 );
  ghidgui->config_modified = 1;
  return;
}
void config_sizes_tab_create( GtkWidget *tab_vbox )
{
  int edx;
  double fp6;
  GtkWidget *table, *vbox, *hbox, *label;
  /* phantom */ gchar *str;
  if ( config_sizes_vbox )
  {
  }
  else
  {
    vbox = gtk_vbox_new( 0, 0 );
    gtk_box_pack_start( g_type_check_instance_cast( &tab_vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), vbox, 0, 0, 0 );
    gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), 6 );
    config_sizes_vbox = vbox;
    config_sizes_tab_vbox = tab_vbox;
  }
  label = gtk_label_new( "" );
  gtk_label_set_use_markup( g_type_check_instance_cast( &label[0].object.parent_instance.g_type_instance, gtk_label_get_type( ) ), 1 );
  gtk_label_set_markup( g_type_check_instance_cast( &label[0].object.parent_instance.g_type_instance, gtk_label_get_type( ) ), g_strdup_printf( dcgettext( "pcb", "&lt;b&gt;%s&lt;/b&gt; grid units are selected", 5 ), Settings.grid_units_mm != 0 ? "mil" : "mm" ) );
  g_free( g_strdup_printf( dcgettext( "pcb", "&lt;b&gt;%s&lt;/b&gt; grid units are selected", 5 ), Settings.grid_units_mm != 0 ? "mil" : "mm" ) );
  gtk_box_pack_start( g_type_check_instance_cast( &config_sizes_vbox->object.parent_instance.g_type_instance, ebx ), label, 0, 0, 4 );
  hbox = gtk_hbox_new( 0, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( (GTypeInstance*)ghid_category_vbox( config_sizes_vbox, dcgettext( "pcb", "Board Size", 5 ), 4, 2, 1, 1 ), ebx ), hbox, 0, 0, 0 );
  table = gtk_table_new( 2, 2, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, ebx ), table, 0, 0, 0 );
  gtk_table_set_col_spacings( g_type_check_instance_cast( &table[0].object.parent_instance.g_type_instance, gtk_table_get_type( ) ), 6 );
  gtk_table_set_row_spacings( g_type_check_instance_cast( &table[0].object.parent_instance.g_type_instance, gtk_table_get_type( ) ), 3 );
  new_board_width = PCB->MaxWidth;
  new_board_height = PCB->MaxHeight;
  dcgettext( "pcb", "Width", 5 );
  ghid_table_spin_button( table, 0, 0, 0, (float)( 0.000000000000 ), Settings.grid_units_mm == 0 ? 1092616192 : 1048710218, Settings.grid_units_mm == 0 ? 1203982336 : 1159643136, Settings.grid_units_mm == 0 ? 1120403456 : 1084227584, Settings.grid_units_mm == 0 ? 1148846080 : 1103626240, Settings.grid_units_mm == 0 ? 1 : 3, 0, &size_spin_button_cb, &new_board_width, 0, dcgettext( "pcb", "Width", 5 ) );
  dcgettext( "pcb", "Height", 5 );
  ghid_table_spin_button( table, 1, 0, 0, (float)( 0.000000000000 ), Settings.grid_units_mm == 0 ? 1092616192 : 1048710218, Settings.grid_units_mm == 0 ? 1203982336 : 1159643136, Settings.grid_units_mm == 0 ? 1120403456 : 1084227584, Settings.grid_units_mm == 0 ? 1148846080 : 1103626240, Settings.grid_units_mm == 0 ? 1 : 3, 0, &size_spin_button_cb, &new_board_height, 0, dcgettext( "pcb", "Height", 5 ) );
  ghid_check_button_connected( ghid_category_vbox( config_sizes_vbox, dcgettext( "pcb", "Board Size", 5 ), 4, 2, 1, 1 ), &use_board_size_default_button, 0, 1, 0, 0, 0, 0, 0, dcgettext( "pcb", "Use this board size as the default for new layouts", 5 ) );
  vbox = ghid_category_vbox( config_sizes_vbox, dcgettext( "pcb", "Text Scale", 5 ), 4, 2, 1, 1 );
  gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, ebx ), gtk_hbox_new( 0, 0 ), 0, 0, 0 );
  table = gtk_table_new( 4, 2, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( (GTypeInstance*)gtk_hbox_new( 0, 0 ), ebx ), table, 0, 0, 0 );
  gtk_table_set_col_spacings( g_type_check_instance_cast( &table[0].object.parent_instance.g_type_instance, gtk_table_get_type( ) ), 6 );
  gtk_table_set_row_spacings( g_type_check_instance_cast( &table[0].object.parent_instance.g_type_instance, gtk_table_get_type( ) ), 3 );
  ghid_table_spin_button( table, 0, 0, &config_text_spin_button, (float)( (double)( Settings.TextScale ) ), 1092616192, 1176256512, 1092616192, 1092616192, 0, 0, &text_spin_button_cb, &Settings.TextScale, 0, "%" );
  hbox = gtk_hbox_new( 0, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( (GTypeInstance*)ghid_category_vbox( config_sizes_vbox, dcgettext( "pcb", "Design Rule Checking", 5 ), 4, 2, 1, 1 ), ebx ), hbox, 0, 0, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, ebx ), gtk_table_new( 4, 2, 0 ), 0, 0, 0 );
  gtk_table_set_col_spacings( g_type_check_instance_cast( (GTypeInstance*)gtk_table_new( 4, 2, 0 ), gtk_table_get_type( ) ), 6 );
  gtk_table_set_row_spacings( g_type_check_instance_cast( (GTypeInstance*)gtk_table_new( 4, 2, 0 ), gtk_table_get_type( ) ), 3 );
  dcgettext( "pcb", "Minimum copper spacing", 5 );
  ghid_table_spin_button( gtk_table_new( 4, 2, 0 ), 0, 0, 0, (float)( 0.000000000000 ), Settings.grid_units_mm == 0 ? 1036831949 : 992376353, Settings.grid_units_mm == 0 ? 1140457472 : 1095447347, Settings.grid_units_mm == 0 ? 1036831949 : 1000593162, Settings.grid_units_mm == 0 ? 1065353216 : 1028443341, Settings.grid_units_mm == 0 ? 1 : 3, 0, &size_spin_button_cb, PCB + 112, 0, dcgettext( "pcb", "Minimum copper spacing", 5 ) );
  dcgettext( "pcb", "Minimum copper width", 5 );
  ghid_table_spin_button( gtk_table_new( 4, 2, 0 ), 1, 0, 0, (float)( 0.000000000000 ), Settings.grid_units_mm == 0 ? 1036831949 : 992376353, Settings.grid_units_mm == 0 ? 1140457472 : 1095447347, Settings.grid_units_mm == 0 ? 1036831949 : 1000593162, Settings.grid_units_mm == 0 ? 1065353216 : 1028443341, Settings.grid_units_mm == 0 ? 1 : 3, 0, &size_spin_button_cb, PCB + 120, 0, dcgettext( "pcb", "Minimum copper width", 5 ) );
  dcgettext( "pcb", "Minimum touching copper overlap", 5 );
  ghid_table_spin_button( gtk_table_new( 4, 2, 0 ), 2, 0, 0, (float)( 0.000000000000 ), Settings.grid_units_mm == 0 ? 1036831949 : 992376353, Settings.grid_units_mm == 0 ? 1140457472 : 1095447347, Settings.grid_units_mm == 0 ? 1036831949 : 1000593162, Settings.grid_units_mm == 0 ? 1065353216 : 1028443341, Settings.grid_units_mm == 0 ? 1 : 3, 0, &size_spin_button_cb, PCB + 116, 0, dcgettext( "pcb", "Minimum touching copper overlap", 5 ) );
  dcgettext( "pcb", "Minimum silk width", 5 );
  ghid_table_spin_button( gtk_table_new( 4, 2, 0 ), 3, 0, 0, (float)( 0.000000000000 ), Settings.grid_units_mm == 0 ? 1065353216 : 1020269481, Settings.grid_units_mm == 0 ? 1106247680 : 1061360239, Settings.grid_units_mm == 0 ? 1036831949 : 1000593162, Settings.grid_units_mm == 0 ? 1065353216 : 1028443341, Settings.grid_units_mm == 0 ? 1 : 3, 0, &size_spin_button_cb, PCB + 124, 0, dcgettext( "pcb", "Minimum silk width", 5 ) );
  dcgettext( "pcb", "Minimum drill diameter", 5 );
  ghid_table_spin_button( gtk_table_new( 4, 2, 0 ), 4, 0, 0, (float)( 0.000000000000 ), Settings.grid_units_mm == 0 ? 1065353216 : 1020269481, Settings.grid_units_mm == 0 ? 1112014848 : 1067618140, Settings.grid_units_mm == 0 ? 1036831949 : 1000593162, Settings.grid_units_mm == 0 ? 1065353216 : 1028443341, Settings.grid_units_mm == 0 ? 1 : 3, 0, &size_spin_button_cb, PCB + 128, 0, dcgettext( "pcb", "Minimum drill diameter", 5 ) );
  dcgettext( "pcb", "Minimum annular ring", 5 );
  ghid_table_spin_button( gtk_table_new( 4, 2, 0 ), 5, 0, 0, (float)( 0.000000000000 ), 0, Settings.grid_units_mm == 0 ? 1120403456 : 1076006748, Settings.grid_units_mm == 0 ? 1036831949 : 1000593162, Settings.grid_units_mm == 0 ? 1065353216 : 1028443341, Settings.grid_units_mm == 0 ? 1 : 3, 0, &size_spin_button_cb, PCB + 132, 0, dcgettext( "pcb", "Minimum annular ring", 5 ) );
  ghid_check_button_connected( ghid_category_vbox( config_sizes_vbox, dcgettext( "pcb", "Design Rule Checking", 5 ), 4, 2, 1, 1 ), &use_drc_sizes_default_button, 0, 1, 0, 0, 0, 0, 0, dcgettext( "pcb", "Use DRC values as the default for new layouts", 5 ) );
  gtk_widget_show_all( config_sizes_vbox );
  return;
}
void increment_spin_button_cb( GtkSpinButton *spin, gdouble *dst )
{
  gdouble value;
  gtk_spin_button_get_value( spin );
  dst[0] = 0.000000000000;
  ghidgui->config_modified = 1;
  return;
}
void config_increments_tab_create( GtkWidget *tab_vbox )
{
  double fp7;
  GtkWidget *vbox, *label;
  gdouble *target;
  /* phantom */ gchar *str;
  if ( config_increments_vbox )
  {
  }
  else
  {
    vbox = gtk_vbox_new( 0, 0 );
    gtk_box_pack_start( g_type_check_instance_cast( &tab_vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), vbox, 0, 0, 0 );
    gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), 6 );
    config_increments_vbox = vbox;
    config_increments_tab_vbox = tab_vbox;
  }
  label = gtk_label_new( "" );
  gtk_label_set_use_markup( g_type_check_instance_cast( &label[0].object.parent_instance.g_type_instance, gtk_label_get_type( ) ), 1 );
  gtk_label_set_markup( g_type_check_instance_cast( &label[0].object.parent_instance.g_type_instance, gtk_label_get_type( ) ), g_strdup_printf( dcgettext( "pcb", "Increment/Decrement values to use in &lt;b&gt;%s&lt;/b&gt; units mode.\n", 5 ), Settings.grid_units_mm != 0 ? "mil" : "mm" ) );
  gtk_box_pack_start( g_type_check_instance_cast( &config_increments_vbox->object.parent_instance.g_type_instance, edi ), label, 0, 0, 4 );
  g_free( g_strdup_printf( dcgettext( "pcb", "Increment/Decrement values to use in &lt;b&gt;%s&lt;/b&gt; units mode.\n", 5 ), Settings.grid_units_mm != 0 ? "mil" : "mm" ) );
  dcgettext( "pcb", "For 'g' and '&lt;shift&gt;g' grid change actions", 5 );
  ghid_spin_button( ghid_category_vbox( config_increments_vbox, dcgettext( "pcb", "Grid Increment/Decrement", 5 ), 4, 2, 1, 1 ), 0, (float)( Settings.grid_units_mm == 0 ? Settings.grid_increment_mil : Settings.grid_increment_mm ), Settings.grid_units_mm == 0 ? 1065353216 : 1008981770, Settings.grid_units_mm == 0 ? 1103626240 : 1065353216, Settings.grid_units_mm == 0 ? 1084227584 : 1028443341, Settings.grid_units_mm == 0 ? 1084227584 : 1028443341, Settings.grid_units_mm == 0 ? 0 : 2, 0, &increment_spin_button_cb, target, 0, dcgettext( "pcb", "For 'g' and '&lt;shift&gt;g' grid change actions", 5 ) );
  dcgettext( "pcb", "For 's' and '&lt;shift&gt;s' size change actions on lines,\npads, pins and text.\nUse '&lt;ctrl&gt;s' and '&lt;shift&gt;&lt;ctrl&gt;s' for drill holes.", 5 );
  ghid_spin_button( ghid_category_vbox( config_increments_vbox, dcgettext( "pcb", "Size Increment/Decrement", 5 ), 4, 2, 1, 1 ), 0, (float)( Settings.grid_units_mm == 0 ? Settings.size_increment_mil : Settings.size_increment_mm ), Settings.grid_units_mm == 0 ? 1065353216 : 1008981770, Settings.grid_units_mm == 0 ? 1092616192 : 1056964608, Settings.grid_units_mm == 0 ? 1065353216 : 1008981770, Settings.grid_units_mm == 0 ? 1084227584 : 1028443341, Settings.grid_units_mm == 0 ? 0 : 2, 0, &increment_spin_button_cb, target, 0, dcgettext( "pcb", "For 's' and '&lt;shift&gt;s' size change actions on lines,\npads, pins and text.\nUse '&lt;ctrl&gt;s' and '&lt;shift&gt;&lt;ctrl&gt;s' for drill holes.", 5 ) );
  dcgettext( "pcb", "For 'l' and '&lt;shift&gt;l' routing line width change actions", 5 );
  ghid_spin_button( ghid_category_vbox( config_increments_vbox, dcgettext( "pcb", "Line Increment/Decrement", 5 ), 4, 2, 1, 1 ), 0, (float)( Settings.grid_units_mm == 0 ? Settings.line_increment_mil : Settings.line_increment_mm ), Settings.grid_units_mm == 0 ? 1056964608 : 1000593162, Settings.grid_units_mm == 0 ? 1092616192 : 1056964608, Settings.grid_units_mm == 0 ? 1056964608 : 1000593162, Settings.grid_units_mm == 0 ? 1084227584 : 1028443341, Settings.grid_units_mm == 0 ? 1 : 3, 0, &increment_spin_button_cb, target, 0, dcgettext( "pcb", "For 'l' and '&lt;shift&gt;l' routing line width change actions", 5 ) );
  dcgettext( "pcb", "For 'k' and '&lt;shift&gt;k' line clearance inside polygon size\nchange actions", 5 );
  ghid_spin_button( ghid_category_vbox( config_increments_vbox, dcgettext( "pcb", "Clear Increment/Decrement", 5 ), 4, 2, 1, 1 ), 0, (float)( Settings.grid_units_mm == 0 ? Settings.clear_increment_mil : Settings.clear_increment_mm ), Settings.grid_units_mm == 0 ? 1056964608 : 1000593162, Settings.grid_units_mm == 0 ? 1092616192 : 1056964608, Settings.grid_units_mm == 0 ? 1056964608 : 1000593162, Settings.grid_units_mm == 0 ? 1084227584 : 1028443341, Settings.grid_units_mm == 0 ? 1 : 3, 0, &increment_spin_button_cb, target, 0, dcgettext( "pcb", "For 'k' and '&lt;shift&gt;k' line clearance inside polygon size\nchange actions", 5 ) );
  gtk_widget_show_all( config_increments_vbox );
  return;
(target[0] & 0xFFFFFFFF) = Settings.grid_units_mm != 0 ? target : Settings.clear_increment_mm; // XXX
}
void config_layer_groups_radio_button_cb( GtkToggleButton *button, gpointer data )
{
  /* phantom */ gint layer;
  /* phantom */ gint group;
  if ( gtk_toggle_button_get_active( button ) && groups_holdoff == 0 )
  {
    config_layer_group[ data >> 8 ] = data & 255;
    groups_modified = 1;
    ghidgui->config_modified = 1;
  }
  return;
}
void config_layer_group_button_state_update( void )
{
  int eax;
  gint g;
  gint i;
  groups_holdoff = 1;
  if ( PCB->Data->LayerN > 0 )
  {
    do
    {
      g = 1 + 1 + -1;
      if ( *(int*)(( 1 << 2 ) + 0x817df5c) )
      {
        i = 0;
        do
        {
          config_layer_group[ layer_groups.Entries[ g + 0 ][1] ] = 1 + 1;
          i++;
          gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &group_button[ ( g + ( layer_groups.Entries[ g + 0 ][1] << 4 ) ) >> 4 ][0][0].object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), 1 );
        }
        while ( *(int*)(( config_layer_group[ layer_groups.Entries[ g + 0 ][1] ] << 2 ) + 0x817df5c) <= i );
      }
    }
    while ( config_layer_group[ layer_groups.Entries[ g + 0 ][1] ] < PCB->Data->LayerN );
  }
  groups_holdoff = 0;
  return;
}
void layer_name_entry_cb( GtkWidget *entry, gpointer data )
{
  int ebx;
  int esi;
  /* phantom */ gint i;
  /* phantom */ LayerType *layer;
  gchar *name;
  if ( dup_string( PCB->Data + ( data * 92 ) + 76, ghid_entry_get_text( entry ) ) )
  {
  }
  return;
}
void ghid_config_groups_changed( void )
{
  int eax;
  int ecx;
  int edx;
  int ebp_84;
  int ebp_80;
  /* phantom */ GtkWidget *vbox, *table, *button, *label, *scrolled_window;
  GSList *group;
  gchar buf[32];
  gchar *name;
  /* phantom */ gint layer;
  gint i;
  if ( config_groups_vbox )
  {
    if ( config_groups_table )
      gtk_widget_destroy( config_groups_table );
    if ( config_groups_window )
      gtk_widget_destroy( config_groups_window );
    scrolled_window = gtk_scrolled_window_new( 0, 0 );
    config_groups_window = gtk_scrolled_window_new( 0, 0 );
    gtk_widget_set_size_request( config_groups_window, 34, 408 );
    gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &scrolled_window[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), 3 );
    gtk_scrolled_window_set_policy( g_type_check_instance_cast( &scrolled_window[0].object.parent_instance.g_type_instance, gtk_scrolled_window_get_type( ) ), 1, 0 );
    gtk_box_pack_start( g_type_check_instance_cast( &config_groups_vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), scrolled_window, 1, 1, 0 );
    gtk_widget_show( scrolled_window );
    table = gtk_table_new( PCB->Data->LayerN + 3, PCB->Data->LayerN + 1, 0 );
    config_groups_table = gtk_table_new( PCB->Data->LayerN + 3, PCB->Data->LayerN + 1, 0 );
    gtk_table_set_row_spacings( g_type_check_instance_cast( &table->object.parent_instance.g_type_instance, gtk_table_get_type( ) ), 3 );
    gtk_scrolled_window_add_with_viewport( g_type_check_instance_cast( &scrolled_window[0].object.parent_instance.g_type_instance, gtk_scrolled_window_get_type( ) ), table );
    gtk_widget_show( table );
    memcpy( *(int*)(0), &PCB->LayerGroups.Number, 1216 );
    lg_monitor = &PCB->LayerGroups;
    label = gtk_label_new( dcgettext( "pcb", "Group #", 5 ) );
    gtk_table_attach_defaults( g_type_check_instance_cast( &table->object.parent_instance.g_type_instance, gtk_table_get_type( ) ), label, 0, 1, 0, 1 );
    gtk_misc_set_alignment( g_type_check_instance_cast( &label[0].object.parent_instance.g_type_instance, gtk_misc_get_type( ) ), 1065353216, 1056964608 );
    if ( PCB->Data->LayerN > 0 )
    {
      i = 1;
      do
      {
        i++;
        __snprintf_chk( buf, 32, 1, 32, ebp_136, ebp_136, ebp_132, ebp_132 );
        label = gtk_label_new( buf );
        gtk_table_attach_defaults( g_type_check_instance_cast( &table->object.parent_instance.g_type_instance, gtk_table_get_type( ) ), label, i + -1, i, 0, 1 );
      }
      while ( PCB->Data->LayerN < i );
    }
    if ( PCB->Data->LayerN >= 0 )
    {
      ebp_84 = 2;
      ebp_80 = 1;
      do
      {
        if ( PCB->Data->LayerN + 1 == ebp_80 + -1 )
        {
          name[0] = dcgettext( "pcb", "component side", 5 );
        }
        else
        if ( PCB->Data->LayerN == ebp_80 + -1 )
        {
          name[0] = dcgettext( "pcb", "solder side", 5 );
        }
        else
        {
          name[0] = name[76];
          if ( name[76] == 0 || name[0] == 0 )
            name[0] = "(unknown)";
        }
        if ( *(int*)(*(int*)(ecx + 8716) + 24) <= ebp_80 + -1 )
        {
          label = gtk_label_new( name );
          gtk_misc_set_alignment( g_type_check_instance_cast( (GTypeInstance*)gtk_label_new( name ), gtk_misc_get_type( ) ), 0, 1056964608 );
          gtk_table_attach_defaults( g_type_check_instance_cast( &table->object.parent_instance.g_type_instance, gtk_table_get_type( ) ), label, 0, 1, ebp_80, ebp_84 );
        }
        else
        {
          gtk_entry_set_text( (GtkEntry*)g_type_check_instance_cast( 0x817da3c + ( ebp_80 << 2 ), gtk_entry_get_type( ) ), name );
          gtk_table_attach_defaults( g_type_check_instance_cast( &table->object.parent_instance.g_type_instance, gtk_table_get_type( ) ), *(int*)(0x817da3c + ( ebp_80 << 2 )), 0, 1, ebp_80, ebp_84 );
          g_signal_connect_data( g_type_check_instance_cast( *(int*)(0x817da3c + ( ebp_80 << 2 )), 80 ), "activate", &layer_name_entry_cb, ebp_80 + -1, 0, 0 );
        }
        if ( PCB->Data->LayerN > 0 )
        {
          group = 0;
          i = 1;
          do
          {
            __snprintf_chk( buf, 32, 1, 32, "%2.2d", i );
            i++;
            button = gtk_radio_button_new_with_label( group, buf );
            gtk_toggle_button_set_mode( (GtkToggleButton*)g_type_check_instance_cast( (GTypeInstance*)gtk_radio_button_new_with_label( group, buf ), gtk_toggle_button_get_type( ) ), 0 );
            group = gtk_radio_button_get_group( g_type_check_instance_cast( &button[0].object.parent_instance.g_type_instance, gtk_radio_button_get_type( ) ) );
            gtk_table_attach_defaults( g_type_check_instance_cast( &table->object.parent_instance.g_type_instance, gtk_table_get_type( ) ), button, i, i, ebp_84 );
            g_signal_connect_data( g_type_check_instance_cast( &button[0].object.parent_instance.g_type_instance, 80 ), "toggled", &config_layer_groups_radio_button_cb, i | ( i << 8 ), 0, 0 );
            *ebp_116 = button;
          }
          while ( PCB->Data->LayerN <= i );
        }
        ebp_80++;
        ebp_84++;
      }
      while ( ebp_80 <= PCB->Data->LayerN + 1 );
    }
    gtk_widget_show_all( config_groups_vbox );
    config_layer_group_button_state_update( );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void edit_layer_button_cb( GtkWidget *widget, gchar *data )
{
  int eax;
  int edx;
  /* phantom */ gchar **argv;
  if ( PCB->RatDraw == 0 && PCB->SilkActive == 0 )
  {
    MoveLayerAction( 2, (char**)g_strsplit( data, ",", -1 ), 0, 0 );
    widget = (GtkWidget*)g_strsplit( data, ",", -1 );
  }
  return;
}
void config_layers_tab_create( GtkWidget *tab_vbox )
{
  GtkWidget *tabs = gtk_notebook_new( ), *vbox, *vbox1, *button, *text, *sep;
  GtkWidget *hbox, *arrow;
  gint i;
  gtk_box_pack_start( g_type_check_instance_cast( &tab_vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), tabs, 1, 1, 0 );
  button = gtk_button_new( );
  gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &button[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), gtk_arrow_new( 0, 3 ) );
  g_signal_connect_data( g_type_check_instance_cast( &button[0].object.parent_instance.g_type_instance, 80 ), "clicked", &edit_layer_button_cb, "c,up", 0, 0 );
  hbox = gtk_hbox_new( 0, 0 );
  gtk_box_pack_start( eax, hbox, 1, 1, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( &hbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), button, 0, 0, 0 );
  button = gtk_button_new( );
  gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &button[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), gtk_arrow_new( 1, 3 ) );
  g_signal_connect_data( g_type_check_instance_cast( &button[0].object.parent_instance.g_type_instance, 80 ), "clicked", &edit_layer_button_cb, "c,down", 0, 0 );
  hbox = gtk_hbox_new( 0, 0 );
  gtk_box_pack_start( eax, hbox, 1, 1, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( &hbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), button, 0, 0, 0 );
  button = gtk_button_new_from_stock( "gtk-delete" );
  g_signal_connect_data( g_type_check_instance_cast( (GTypeInstance*)gtk_button_new_from_stock( "gtk-delete" ), 80 ), "clicked", &edit_layer_button_cb, "c,-1", 0, 0 );
  hbox = gtk_hbox_new( 0, 0 );
  gtk_box_pack_start( eax, hbox, 1, 1, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( &hbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), button, 0, 0, 0 );
  button = gtk_button_new_from_stock( "gtk-add" );
  g_signal_connect_data( g_type_check_instance_cast( (GTypeInstance*)gtk_button_new_from_stock( "gtk-add" ), 80 ), "clicked", &edit_layer_button_cb, "-1,c", 0, 0 );
  gtk_box_pack_start( eax, ebp_32, 1, 1, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( (GTypeInstance*)gtk_hbox_new( 0, 0 ), gtk_box_get_type( ) ), button, 0, 0, 0 );
  vbox = ghid_notebook_page( tabs, dcgettext( "pcb", "Groups", 5 ), 0, 6 );
  config_groups_vbox = gtk_vbox_new( 0, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), config_groups_vbox, 0, 0, 0 );
  ghid_config_groups_changed( );
  i = 0;
  gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), gtk_hseparator_new( ), 0, 0, 4 );
  text = ghid_scrolled_text_view( ghid_notebook_page( tabs, dcgettext( "pcb", "Info", 5 ), 0, 6 ), 0, 1, 1 );
  do
  {
    ghid_text_view_append( text, dcgettext( "pcb", layer_info_text[ i ], 5 ) );
  }
  while ( i == 36 );
  return;
}
void ghid_config_layer_name_update( gchar *name, gint layer )
{
  int esi;
  if ( config_window && name && layers_applying == 0 )
  {
    gtk_entry_set_text( (GtkEntry*)g_type_check_instance_cast( &layer_entry[ layer ]->object.parent_instance.g_type_instance, gtk_entry_get_type( ) ), name );
    if ( PCB->LayerGroups.Number[0] != lg_monitor )
    {
      memcpy( layer_groups.Number, &PCB->LayerGroups.Number, 1216 );
      lg_monitor = &PCB->LayerGroups;
      config_layer_group_button_state_update( );
      groups_modified = 0;
      return;
    }
  }
  return;
}
void config_color_file_set_label( void )
{
  /* phantom */ gchar *str, *name;
  gtk_label_set_markup( g_type_check_instance_cast( &config_color_file_label->object.parent_instance.g_type_instance, gtk_label_get_type( ) ), g_strdup_printf( "Current colors loaded: &lt;b&gt;%s&lt;/b&gt;", name ) );
  g_free( name );
  g_free( g_strdup_printf( "Current colors loaded: &lt;b&gt;%s&lt;/b&gt;", name ) );
  return;
}
void config_color_defaults_cb( gpointer data )
{
  int eax;
  GList *list = config_color_list;
  ConfigColor *cc;
  HID_Attribute *ha;
  if ( config_color_list )
  {
    do
    {
      cc = &list->data[0];
      ha = &list->data[0];
      dup_string( (gchar**)&ha->value, ha->default_val.str_value );
      cc->color_is_mapped = 0;
      ghid_set_special_colors( ha );
      list = list->next;
    }
    while ( list->next == 0 );
  }
  dup_string( &color_file, "" );
  ghidgui->config_modified = 1;
  gtk_widget_set_sensitive( config_colors_save_button, 0 );
  gtk_widget_set_sensitive( config_color_warn_label, 0 );
  config_color_file_set_label( );
  config_colors_modified = 0;
  ghid_layer_buttons_color_update( );
  gtk_widget_destroy( config_colors_vbox );
  config_colors_tab_create( config_colors_tab_vbox );
}
void config_color_load_cb( gpointer data )
{
  int eax;
  gchar *path, *dir = g_strdup( color_dir );
  if ( ghid_dialog_file_select_open( dcgettext( "pcb", "Load Color File", 5 ), &dir, 0 ) )
  {
    config_colors_read( &eax );
    dup_string( &color_file, path );
    ghidgui->config_modified = 1;
    gtk_widget_set_sensitive( config_colors_save_button, 0 );
    gtk_widget_set_sensitive( config_color_warn_label, 0 );
    config_color_file_set_label( );
    config_colors_modified = 0;
  }
  g_free( path );
  g_free( dir );
  gtk_widget_destroy( config_colors_vbox );
  config_colors_tab_create( config_colors_tab_vbox );
  ghid_invalidate_all( );
  return;
}
void config_color_save_cb( gpointer data )
{
  gchar *name, *path, *dir = g_strdup( color_dir );
  if ( ghid_dialog_file_select_save( dcgettext( "pcb", "Save Color File", 5 ), &dir, 0, 0 ) )
  {
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    name[0] = g_path_get_basename( ebp_88 );
    strcmp( *(int*)(0), g_path_get_basename( ebp_88 ) );
    if ( !1 )
    {
      if ( fopen( path, "w" ) )
      {
        if ( config_color_list )
        {
          do
          {
            __fprintf_chk( fopen( path, "w" ), 1, "%s =\t%s\n", &config_color_list->data[0], &config_color_list->data[10] );
          }
          while ( config_color_list->next == 0 );
        }
        fclose( fopen( path, "w" ) );
      }
      dup_string( &color_file, path );
      ghidgui->config_modified = 1;
      gtk_widget_set_sensitive( config_colors_save_button, 0 );
      gtk_widget_set_sensitive( config_color_warn_label, 0 );
      config_color_file_set_label( );
      config_colors_modified = 0;
      g_free( g_path_get_basename( ebp_88 ) );
    }
    else
    {
      ghid_dialog_message( dcgettext( "pcb", "Sorry, not overwriting the default color file!", 5 ) );
      g_free( g_path_get_basename( ebp_88 ) );
    }
  }
  }
  g_free( path );
  g_free( dir );
  return;
}
void config_color_set_cb( GtkWidget *button, ConfigColor *cc )
{
  int ebx;
  int esi;
  int edi;
  GdkColor new_color;
  HID_Attribute *ha = &cc->attributes->name[0];
  gchar *str;
  gtk_color_button_get_color( g_type_check_instance_cast( &button->object.parent_instance.g_type_instance, gtk_color_button_get_type( ) ), &new_color );
  str[0] = ghid_get_color_name( &new_color );
  ghid_map_color_string( ghid_get_color_name( &new_color ), cc + 8 );
  config_colors_modified = 1;
  *(int*)(ha->value) = str;
  gtk_widget_set_sensitive( config_colors_save_button, 1 );
  gtk_widget_set_sensitive( config_color_warn_label, 1 );
  ghid_set_special_colors( ha );
  ghid_layer_buttons_color_update( );
  ghid_invalidate_all( );
  return;
}
void config_color_button_create( GtkWidget *box, ConfigColor *cc )
{
  GtkWidget *button, *hbox, *label;
  HID_Attribute *ha = cc->attributes;
  /* phantom */ gchar *title;
  hbox = gtk_hbox_new( 0, 6 );
  gtk_box_pack_start( g_type_check_instance_cast( &box[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), hbox, 0, 0, 0 );
  button = &cc->color.pixel;
  if ( cc->color_is_mapped == 0 )
  {
    ghid_map_color_string( *(int*)(ha->value), &cc->color.pixel );
    ha = ha;
  }
  cc->color_is_mapped = 1;
  button = gtk_color_button_new_with_color( &button->object.parent_instance.g_type_instance._GTypeInstance );
  gtk_color_button_set_title( &eax, ebp_32 );
  g_free( ebp_32 );
  gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), button, 0, 0, 0 );
  ha = ha;
  gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), gtk_label_new( (gchar*)ha ), 0, 0, 0 );
  g_signal_connect_data( g_type_check_instance_cast( &button->object.parent_instance.g_type_instance, 80 ), "color-set", &config_color_set_cb, &cc, 0, 0 );
  return;
}
void config_colors_tab_create( GtkWidget *tab_vbox )
{
  int eax;
  GtkWidget *scrolled_vbox = tab_vbox, *vbox = gtk_vbox_new( 0, ebp_84 ), *hbox, *expander, *sep;
  GList *list;
  ConfigColor *cc;
  gtk_box_pack_start( g_type_check_instance_cast( &scrolled_vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), vbox, 1, 1, 0 );
  gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), 6 );
  config_colors_vbox = vbox;
  config_colors_tab_vbox = scrolled_vbox;
  scrolled_vbox = ghid_scrolled_vbox( vbox, 0, 2, 1 );
  gtk_box_pack_start( g_type_check_instance_cast( &scrolled_vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), gtk_expander_new( dcgettext( "pcb", "Main colors", 5 ) ), 0, 0, 2 );
  vbox = gtk_vbox_new( 0, 0 );
  gtk_container_add( (GtkContainer*)g_type_check_instance_cast( (GTypeInstance*)gtk_expander_new( dcgettext( "pcb", "Main colors", 5 ) ), gtk_container_get_type( ) ), vbox );
  list = config_color_list;
  if ( config_color_list )
  {
    do
    {
      cc = &list->data[0];
      if ( cc->type == MISC_COLOR )
      {
        config_color_button_create( ghid_category_vbox( vbox, 0, 0, 2, 1, 0 ), cc );
        list = list->next;
        if ( list->next )
          continue;
        else
          break;
      }
      else
      {
        list = list->next;
      }
    }
    while ( list->next );
  }
  gtk_box_pack_start( g_type_check_instance_cast( &scrolled_vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), gtk_expander_new( dcgettext( "pcb", "Layer colors", 5 ) ), 0, 0, 2 );
  vbox = gtk_vbox_new( 0, 0 );
  gtk_container_add( (GtkContainer*)g_type_check_instance_cast( (GTypeInstance*)gtk_expander_new( dcgettext( "pcb", "Layer colors", 5 ) ), gtk_container_get_type( ) ), vbox );
  list = config_color_list;
  if ( config_color_list )
  {
    do
    {
      cc = &list->data[0];
      if ( cc->type == LAYER_COLOR )
      {
        config_color_button_create( ghid_category_vbox( vbox, 0, 0, 2, 1, 0 ), cc );
        list = list->next;
        if ( list->next == 0 )
        {
          break;
        }
      }
      else
      {
        list = list->next;
      }
    }
    while ( list->next );
  }
  expander = gtk_expander_new( dcgettext( "pcb", "Selected colors", 5 ) );
  gtk_box_pack_start( g_type_check_instance_cast( &scrolled_vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), expander, 0, 0, 2 );
  scrolled_vbox = gtk_vbox_new( 0, 0 );
  gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &expander[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), scrolled_vbox );
  list = config_color_list;
  vbox = ghid_category_vbox( scrolled_vbox, 0, 0, 2, 1, 0 );
  if ( config_color_list )
  {
    do
    {
      cc = &list->data[0];
      if ( cc->type == MISC_SELECTED_COLOR )
      {
        config_color_button_create( vbox, cc );
        list = list->next;
        if ( list->next == 0 )
        {
          break;
        }
      }
      else
      {
        list = list->next;
      }
    }
    while ( list->next );
  }
  sep = gtk_hseparator_new( );
  gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), sep, 0, 0, 2 );
  list = config_color_list;
  if ( config_color_list )
  {
    do
    {
      cc = &list->data[0];
      if ( cc->type == LAYER_SELECTED_COLOR )
      {
        config_color_button_create( vbox, cc );
        list = list->next;
        if ( list->next == 0 )
          break;
      }
      else
      {
        list = list->next;
      }
    }
    while ( list->next );
  }
  config_color_warn_label = gtk_label_new( "" );
  config_color_warn_label = gtk_label_new( "" );
  gtk_label_set_use_markup( g_type_check_instance_cast( &config_color_warn_label[0].object.parent_instance.g_type_instance, gtk_label_get_type( ) ), 1 );
  gtk_label_set_markup( g_type_check_instance_cast( &config_color_warn_label->object.parent_instance.g_type_instance, gtk_label_get_type( ) ), dcgettext( "pcb", "&lt;b&gt;Warning:&lt;/b&gt; unsaved color changes will be lost at program exit.", 5 ) );
  gtk_box_pack_start( g_type_check_instance_cast( &config_colors_vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), config_color_warn_label, 0, 0, 4 );
  hbox = gtk_hbox_new( 0, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( &config_colors_vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), hbox, 0, 0, 6 );
  config_color_file_label = gtk_label_new( "" );
  gtk_label_set_use_markup( g_type_check_instance_cast( (GTypeInstance*)gtk_label_new( "" ), gtk_label_get_type( ) ), 1 );
  config_color_file_set_label( );
  gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), config_color_file_label, 0, 0, 0 );
  ghid_button_connected( hbox, 0, 0, 0, 0, 4, &config_color_load_cb, 0, dcgettext( "pcb", "Load", 5 ) );
  ghid_button_connected( hbox, &config_colors_save_button, 0, 0, 0, 4, &config_color_save_cb, 0, dcgettext( "pcb", "Save", 5 ) );
  ghid_button_connected( hbox, 0, 0, 0, 0, 4, &config_color_defaults_cb, 0, dcgettext( "pcb", "Defaults", 5 ) );
  gtk_widget_set_sensitive( config_colors_save_button, config_colors_modified );
  gtk_widget_set_sensitive( config_color_warn_label, config_colors_modified );
  gtk_widget_show_all( config_colors_vbox );
  return;
}
GtkWidget *config_page_create( GtkTreeStore *tree, GtkTreeIter *iter, GtkNotebook *notebook )
{
  int ebx;
  int esi;
  GtkWidget *vbox = gtk_vbox_new( 0, notebook );
  /* phantom */ gint page;
  gtk_notebook_append_page( notebook, gtk_vbox_new( 0, notebook ), 0 );
  notebook = notebook;
  gtk_tree_store_set( tree, iter, 1, g_list_length( notebook->children ) + -1, -1 );
  return vbox;
}
void ghid_config_handle_units_changed( void )
{
  int eax;
  ghid_set_cursor_position_labels( );
  gtk_label_set_markup( g_type_check_instance_cast( &ghidgui->grid_units_label->object.parent_instance.g_type_instance, gtk_label_get_type( ) ), Settings.grid_units_mm != 0 ? "&lt;b&gt;mil&lt;/b&gt; " : "&lt;b&gt;mm&lt;/b&gt; " );
  if ( config_sizes_vbox )
  {
    gtk_widget_destroy( config_sizes_vbox );
    config_sizes_vbox = 0;
    config_sizes_tab_create( config_sizes_tab_vbox );
  }
  if ( config_increments_vbox )
  {
    gtk_widget_destroy( config_increments_vbox );
    config_increments_vbox = 0;
    config_increments_tab_create( config_increments_tab_vbox );
  }
  ghidgui->config_modified = 1;
  return;
}
void ghid_config_text_scale_update( void )
{
  if ( config_window )
  {
    gtk_spin_button_set_value( (GtkSpinButton*)g_type_check_instance_cast( &config_text_spin_button->object.parent_instance.g_type_instance, gtk_spin_button_get_type( ) ), (double)( Settings.TextScale ) );
  }
  return;
}
void config_close_cb( gpointer data )
{
  int eax;
  int ecx;
  int edx;
  if ( gtk_toggle_button_get_active( (GtkToggleButton*)g_type_check_instance_cast( &use_board_size_default_button->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ) ) )
  {
    Settings.MaxWidth = new_board_width;
    Settings.MaxHeight = new_board_height;
    ghidgui->config_modified = 1;
  }
  if ( gtk_toggle_button_get_active( (GtkToggleButton*)g_type_check_instance_cast( &use_drc_sizes_default_button->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ) ) == 0 )
  {
    if ( PCB->MaxWidth != new_board_width )
    {
      ChangePCBSize( new_board_width, ecx );
      if ( PCB->Data->LayerN > 0 )
      {
        do
        {
        }
        while ( PCB->Data->LayerN <= 0 + 1 + 1 );
        layers_applying = 1;
        if ( edi )
          ghid_layer_buttons_update( );
      }
      layers_applying = 0;
      if ( groups_modified )
      {
        if ( PCB->Data->LayerN > 0 )
        {
          do
          {
            layer_groups.Number[ 0 ] = 0;
          }
          while ( PCB->Data->LayerN != 0 + 1 + 1 );
        }
        if ( PCB->Data->LayerN >= 0 )
        {
          while ( 1 )
          {
            layer_groups.Entries[ config_layer_group[ 0 + 1 ] + -1 ][ layer_groups.Number[ config_layer_group[ 0 + 1 ] + -1 ] ] = 0 + 1;
            layer_groups.Number[ config_layer_group[ 0 + 1 ] + -1 ]++;
            if ( PCB->Data->LayerN + 1 )
            {
              *(int*)(config_layer_group[ PCB->Data->LayerN ] + -1) = PCB->Data->LayerN != layer_groups.Entries[ config_layer_group[ PCB->Data->LayerN ] + -1 ][ layer_groups.Number[ config_layer_group[ PCB->Data->LayerN ] + -1 ] ] ? config_layer_group[ PCB->Data->LayerN ] + -1 : config_layer_group[ PCB->Data->LayerN ] + -1;
              if ( PCB->Data->LayerN + 1 < layer_groups.Entries[ config_layer_group[ PCB->Data->LayerN ] + -1 ][ layer_groups.Number[ config_layer_group[ PCB->Data->LayerN ] + -1 ] ] + 1 )
                goto B25;
            }
            else
            if ( layer_groups.Entries[ config_layer_group[ 0 + 1 ] + -1 ][ layer_groups.Number[ config_layer_group[ 0 + 1 ] + -1 ] ] + 1 <= PCB->Data->LayerN + 1 )
              continue;
          }
        }
B25:;
        if ( layer_groups.Number[ eax ] <= 1 || layer_groups.Number[ ebp_32 ] <= 1 )
        {
          Message( dcgettext( "pcb", "Both 'solder side' or 'component side' layers must have at least\n\tone other layer in their group.\n", 5 ) );
        }
        else
        {
          if ( ebp_32 == eax )
          {
            Message( dcgettext( "pcb", "The 'solder side' and 'component side' layers are not allowed\n\tto be in the same layer group #\n", 5 ) );
          }
          else
          {
            memcpy( PCB + 7380, *(int*)(0), 1216 );
            ghid_invalidate_all( );
            groups_modified = 0;
          }
        }
      }
      if ( dup_string( &lib_newlib_config, ghid_entry_get_text( library_newlib_entry ) ) )
        ghidgui->config_modified = 1;
      ghid_config_files_write( );
      config_sizes_vbox = 0;
      config_increments_vbox = 0;
      config_groups_table = 0;
      config_groups_vbox = 0;
      config_groups_window = 0;
      gtk_widget_destroy( config_window );
      config_window = 0;
      return;
    }
  }
  else
  {
    Settings.IsleArea = PCB->IsleArea;
    Settings.Bloat = PCB->Bloat;
    Settings.Shrink = PCB->Shrink;
    Settings.minWid = PCB->minWid;
    Settings.minSlk = PCB->minSlk;
    Settings.minDrill = PCB->minDrill;
    Settings.minRing = PCB->minRing;
    ghidgui->config_modified = 1;
    if ( PCB->MaxWidth != new_board_width )
    {
      ChangePCBSize( new_board_width, ecx );
    }
  }
  if ( new_board_height != *(int*)(eax + 148) )
  {
    ChangePCBSize( new_board_width, ecx );
  }
  else
  {
  }
}
void config_destroy_cb( gpointer data )
{
  config_sizes_vbox = 0;
  config_increments_vbox = 0;
  config_groups_table = 0;
  config_groups_vbox = 0;
  config_groups_window = 0;
  gtk_widget_destroy( config_window );
  config_window = 0;
  return;
}
void config_selection_changed_cb( GtkTreeSelection *selection, gpointer data )
{
  GtkTreeIter iter;
  GtkTreeModel *model;
  gint page;
  if ( gtk_tree_selection_get_selected( selection, &model, &iter ) )
  {
    gtk_tree_model_get( &model, &iter, 1, page, -1 );
    gtk_notebook_set_current_page( config_notebook, page );
  }
  return;
}
void ghid_config_window_show( void )
{
  int eax;
  int ecx;
  int edx;
  GtkWidget *widget, *main_vbox, *vbox, *config_hbox, *hbox;
  GtkWidget *scrolled;
  GtkWidget *button;
  GtkTreeStore *model;
  /* phantom */ GtkTreeView *treeview;
  GtkTreeIter iter;
  GtkCellRenderer *renderer;
  GtkTreeViewColumn *column;
  GtkTreeSelection *select;
  if ( config_window )
  {
    gtk_window_present( (GtkWindow*)g_type_check_instance_cast( &config_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ) );
    return;
  }
  config_window = gtk_window_new( 0 );
  g_signal_connect_data( g_type_check_instance_cast( (GTypeInstance*)gtk_window_new( 0 ), 80 ), "delete_event", &config_destroy_cb, 0, 0, 0 );
  gtk_window_set_title( (GtkWindow*)g_type_check_instance_cast( &config_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), "PCB Preferences" );
  gtk_window_set_wmclass( (GtkWindow*)g_type_check_instance_cast( &config_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), "Pcb_Conf", "PCB" );
  gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &config_window->object.parent_instance.g_type_instance, gtk_container_get_type( ) ), 2 );
  config_hbox = gtk_hbox_new( 0, 4 );
  gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &config_window->object.parent_instance.g_type_instance, gtk_container_get_type( ) ), config_hbox );
  scrolled = gtk_scrolled_window_new( 0, 0 );
  gtk_scrolled_window_set_policy( g_type_check_instance_cast( &scrolled->object.parent_instance.g_type_instance, gtk_scrolled_window_get_type( ) ), 2, 1 );
  gtk_box_pack_start( g_type_check_instance_cast( &config_hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), scrolled, 0, 0, 0 );
  main_vbox = gtk_vbox_new( 0, 4 );
  gtk_box_pack_start( g_type_check_instance_cast( &config_hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), main_vbox, 1, 1, 0 );
  widget = gtk_notebook_new( );
  gtk_box_pack_start( g_type_check_instance_cast( &main_vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), widget, 1, 1, 0 );
  config_notebook = (GtkNotebook*)g_type_check_instance_cast( &widget[0].object.parent_instance.g_type_instance, gtk_notebook_get_type( ) );
  gtk_notebook_set_show_tabs( (GtkNotebook*)g_type_check_instance_cast( &widget[0].object.parent_instance.g_type_instance, gtk_notebook_get_type( ) ), 0 );
  model = gtk_tree_store_new( 2, 64, 24 );
  gtk_tree_store_append( gtk_tree_store_new( 2, 64, 24 ), &iter, 0 );
  gtk_tree_store_set( model, &iter, 0, dcgettext( "pcb", "General", 5 ), -1 );
  gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( (GTypeInstance*)config_page_create( model, &iter, config_notebook ), gtk_container_get_type( ) ), 6 );
  ghid_check_button_connected( ebp_44, 0, ghidgui->use_command_window, 1, 0, 0, 2, &config_command_window_toggle_cb, 0, (gchar*)eax );
  ghid_check_button_connected( ebp_44, 0, ghidgui->compact_horizontal, 1, 0, 0, 2, &config_compact_horizontal_toggle_cb, 0, (gchar*)eax );
  ghid_check_button_connected( ebp_44, 0, ghidgui->compact_vertical, 1, 0, 0, 2, &config_compact_vertical_toggle_cb, 0, (gchar*)eax );
  ghid_check_button_connected( ebp_44, 0, ghidgui->ghid_title_window, 1, 0, 0, 2, &config_title_window_cb, 0, (gchar*)eax );
  ghid_check_button_connected( ebp_44, 0, Settings.SaveInTMP, 1, 0, 0, 2, &config_general_toggle_cb, &Settings.SaveInTMP, (gchar*)eax );
  ghid_spin_button( ebp_44, 0, (float)( (double)( Settings.BackupInterval ) ), 0, 1163984896, 1114636288, 1142292480, 0, 0, &config_backup_spin_button_cb, 0, 0, (gchar*)eax );
  ghid_spin_button( ebp_44, 0, (float)( (double)( ghidgui->history_size ) ), 1084227584, 1103626240, 1065353216, 1065353216, 0, 0, &config_history_spin_button_cb, 0, 0, (gchar*)eax );
  ghid_spin_button( ebp_44, 0, (float)( (double)( ghidgui->auto_pan_speed ) ), 1065353216, 1092616192, 1065353216, 1065353216, 0, 0, &config_auto_pan_speed_spin_button_cb, 0, 0, (gchar*)eax );
  gtk_tree_store_append( model, &iter, 0 );
  gtk_tree_store_set( model, &iter, 0, dcgettext( "pcb", "Sizes", 5 ), -1 );
  config_page_create( model, &iter, config_notebook );
  config_sizes_tab_create( &eax[0].g_class[0].g_type );
  gtk_tree_store_append( model, &iter, 0 );
  gtk_tree_store_set( model, &iter, 0, dcgettext( "pcb", "Increments", 5 ), -1 );
  config_page_create( model, &iter, config_notebook );
  config_increments_tab_create( &eax[0].g_class[0].g_type );
  gtk_tree_store_append( model, &iter, 0 );
  gtk_tree_store_set( model, &iter, 0, dcgettext( "pcb", "Library", 5 ), -1 );
  vbox = config_page_create( model, &iter, config_notebook );
  gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( (GTypeInstance*)config_page_create( model, &iter, config_notebook ), gtk_container_get_type( ) ), 6 );
  gtk_label_set_use_markup( g_type_check_instance_cast( (GTypeInstance*)gtk_label_new( "" ), gtk_label_get_type( ) ), 1 );
  gtk_label_set_markup( g_type_check_instance_cast( (GTypeInstance*)gtk_label_new( "" ), gtk_label_get_type( ) ), dcgettext( "pcb", "&lt;small&gt;Enter a \":\" separated list of custom top level\nelement directories.  For example:\n\t&lt;b&gt;~/gaf/pcb-elements:packages:/usr/local/pcb-elements&lt;/b&gt;\nElements should be organized into subdirectories below each\ntop level directory.  Restart program for changes to take effect.&lt;/small&gt;", 5 ) );
  gtk_box_pack_start( eax, ebp_44, 0, 0, 0 );
  library_newlib_entry = gtk_entry_new( );
  gtk_entry_set_text( (GtkEntry*)g_type_check_instance_cast( (GTypeInstance*)gtk_entry_new( ), gtk_entry_get_type( ) ), lib_newlib_config );
  gtk_box_pack_start( eax, ebp_64, 0, 0, 4 );
  gtk_tree_store_append( model, &iter, 0 );
  gtk_tree_store_set( model, &iter, 0, dcgettext( "pcb", "Layers", 5 ), -1 );
  config_page_create( model, &iter, config_notebook );
  config_layers_tab_create( &eax[0].g_class[0].g_type );
  gtk_tree_store_append( model, &iter, 0 );
  gtk_tree_store_set( model, &iter, 0, dcgettext( "pcb", "Colors", 5 ), -1 );
  config_page_create( model, &iter, config_notebook );
  config_colors_tab_create( &eax[0].g_class[0].g_type );
  g_object_unref( g_type_check_instance_cast( &model[0].parent.g_type_instance, 80 ) );
  gtk_tree_view_append_column( &esi, &eax[0].g_class[0].g_type );
  gtk_container_add( &eax[0].g_class[0].g_type, &ebx );
  select = &eax[0].g_class[0].g_type;
  gtk_tree_selection_set_mode( &eax[0].g_class[0].g_type, 1 );
  g_signal_connect_data( g_type_check_instance_cast( &select[0].parent.g_type_instance, 80 ), "changed", &config_selection_changed_cb, 0, 0, 0 );
  hbox = gtk_hbutton_box_new( );
  gtk_button_box_set_layout( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_button_box_get_type( ) ), 4 );
  gtk_box_set_spacing( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), 5 );
  gtk_box_pack_start( g_type_check_instance_cast( &main_vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), hbox, 0, 0, 0 );
  button = gtk_button_new_from_stock( "gtk-ok" );
  *(int*)g_type_check_instance_cast( &button[0].object.parent_instance.g_type_instance, gtk_object_get_type( ) )/*.12*/ |= 8192;
  g_signal_connect_data( g_type_check_instance_cast( &button[0].object.parent_instance.g_type_instance, 80 ), "clicked", &config_close_cb, 0, 0, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), button, 1, 1, 0 );
  gtk_widget_grab_default( button );
  gtk_widget_show_all( config_window );
  return;
}
#if 0
#endif
