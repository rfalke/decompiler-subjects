#include "LYReadCFG.c.h"
BOOLEAN have_read_cfg;
BOOLEAN LYUseNoviceLineTwo;
int default_fg;
int default_bg;
static char *Color_Strings[16];
BOOLEAN default_color_reset;
static Config_Enum tbl_source_cache[4];
static Config_Enum tbl_abort_source_cache[3];
static Config_Type Config_Table[208];
static char *lynxcfginfo_url;
static char *configinfo_url;
BOOLEAN is_true( char *string )
{
  return ( strcasecomp( string, ebp_20 ) == 0 || strcasecomp( string, "ON" ) == 0 ? 1 : 0 );
}
char *find_colon( char *buffer )
{
  char ch, *buf = buffer;
  if ( buf == 0 )
  {
    return 0;
  }
  while ( ch = buf[0], ch )
  {
    if ( ch == ':' )
    {
      return buf;
    }
    if ( ch == '\\' )
    {
      buf++;
      if ( buf[0] == 0 )
        break;
    }
    buf++;
  }
  return 0;
}
void free_item_list( lynx_list_item_type **ptr )
{
  lynx_list_item_type *cur = ptr[0];
  lynx_list_item_type *next;
  for ( ; cur;  )
  {
    next = &cur->next;
    if ( cur->name )
    {
      free( &cur->name );
      cur->name = 0;
    }
    if ( cur->command )
    {
      free( &cur->command );
      cur->command = 0;
    }
    if ( cur )
    {
      free( cur );
      cur = 0;
    }
    cur = next;
  }
  ptr[0] = 0;
  return;
}
void free_all_item_lists( void )
{
  free_item_list( &printers );
  free_item_list( &downloaders );
  free_item_list( &uploaders );
  free_item_list( &externals );
  return;
}
void add_item_to_list( char *buffer, lynx_list_item_type **list_ptr, int special )
{
  char *colon, *next_colon, *last_colon = strrchr( buffer, ebp_52 );
  lynx_list_item_type *cur_item, *prev_item;
  if ( last_colon && last_colon[ -1 ] != '\\' )
  {
    last_colon = 0;
    last_colon++;
    if ( strcasecomp( last_colon, "XWINDOWS" ) == 0 )
    {
      if ( LYgetXDisplay( ) == 0 )
      {
        return;
      }
    }
    else
    {
      if ( strcasecomp( last_colon, "NON_XWINDOWS" ) || LYgetXDisplay( ) == 0 )
        goto B3;
      else
      {
        return;
      }
    }
  }
B3:;
  if ( list_ptr == 0 )
  {
    cur_item = calloc( 1, sizeof( lynx_list_item_type ) );
    if ( cur_item == 0 )
      outofmem( "./LYReadCFG.c", "read_cfg" );
    list_ptr = cur_item;
  }
  else
  {
    prev_item = list_ptr;
    for ( ; prev_item->next;  )
    {
      prev_item = &prev_item->next;
    }
    cur_item = calloc( 1, sizeof( lynx_list_item_type ) );
    if ( cur_item == 0 )
      outofmem( "./LYReadCFG.c", "read_cfg" );
    else
      prev_item->next = cur_item;
  }
  cur_item->next = 0;
  cur_item->name = 0;
  cur_item->command = 0;
  cur_item->always_enabled = 0;
  cur_item->override_primary_action = 0;
  cur_item->pagelen = 66;
  colon = find_colon( buffer );
  if ( colon == 0 )
  {
    return;
  }
  cur_item->name = calloc( ( colon - buffer ) + 1, 1 );
  if ( cur_item->name == 0 )
    outofmem( "./LYReadCFG.c", "read_cfg" );
  LYstrncpy( &cur_item->name, buffer, colon - buffer );
  remove_backslashes( &cur_item->name );
  next_colon = find_colon( &colon[1] );
  if ( next_colon == 0 )
  {
    next_colon = colon + strlen( colon );
  }
  if ( next_colon - colon[1] > 0 )
  {
    cur_item->command = calloc( next_colon - colon, 1 );
    if ( cur_item->command == 0 )
      outofmem( "./LYReadCFG.c", "read_cfg" );
    LYstrncpy( &cur_item->command, &colon[1], next_colon - colon[1] );
    remove_backslashes( &cur_item->command );
  }
  next_colon++;
  if ( ( ( next_colon[0] != 0 ) & 255 ) == 0 )
  {
    return;
  }
  colon = next_colon;
  next_colon = strchr( colon, ':' );
  if ( next_colon )
  {
    next_colon[0] = 0;
    next_colon++;
  }
  cur_item->always_enabled = is_true( colon );
  if ( next_colon == 0 )
  {
    return;
  }
  if ( special )
  {
    cur_item->pagelen = atoi( next_colon );
    return;
  }
  else
  {
    cur_item->override_primary_action = is_true( next_colon );
    return;
  }
}
lynx_list_item_type *find_item_by_number( lynx_list_item_type *list_ptr, char *number )
{
  int value = atoi( number );
  while ( value += -1, !( ( ( ~value >> 31 ) ^ 1 ) & 255 ) && list_ptr )
  {
    list_ptr = &list_ptr->next;
  }
  return list_ptr;
}
int match_item_by_name( lynx_list_item_type *ptr, char *name, BOOLEAN only_overriders )
{
  return 0;
}
int check_color( char *color, int the_default )
{
  int i;
  if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
  {
    fprintf( TraceFP( ), "check_color(%s,%d)\n", color, the_default );
  }
  if ( strcasecomp( color, "default" ) == 0 )
  {
    if ( LYuse_default_colors && default_color_reset == 0 )
      the_default = -1;
    if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
    {
      fprintf( TraceFP( ), "=&gt; default %d\n", the_default );
    }
    return the_default;
  }
  else
  {
    if ( strcasecomp( color, "nocolor" ) == 0 )
    {
      return -2;
    }
    i = 0;
    for ( ; i <= 15; i++ )
    {
      if ( strcasecomp( color, Color_Strings[ i ] ) == 0 )
      {
        int c = i;
        if ( WWW_TraceFlag == 0 || ( WWW_TraceMask & 2 ) == 0 )
        {
          return c;
        }
        fprintf( TraceFP( ), "=&gt; %d\n", c );
        return c;
      }
      else
      {
        // i++;
      }
    }
    if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
    {
      fprintf( TraceFP( ), "=&gt; ERR_COLOR\n" );
    }
    return -3;
  }
}
char *lookup_color( int code )
{
  unsigned int n = 0;
  for ( ; n <= 15; n++ )
  {
    if ( n == code )
    {
      return Color_Strings[ n ];
    }
    // n++;
  }
  return "default";
}
void exit_with_color_syntax( char *error_line )
{
  unsigned int i;
  fprintf( stderr, gettext( "Syntax Error parsing COLOR in configuration file:\nThe line must be of the form:\nCOLOR:INTEGER:FOREGROUND:BACKGROUND\n\nHere FOREGROUND and BACKGROUND must be one of:\nThe special strings 'nocolor' or 'default', or\n" ) );
  i = 0;
  for ( ; i <= 15; i += 4 )
  {
    fprintf( stderr, "%16s %16s %16s %16s\n", Color_Strings[ i ], Color_Strings[ i + 1 ], Color_Strings[ i + 2 ], Color_Strings[ i + 3 ] );
    // i += 4;
  }
  fprintf( stderr, "%s\nCOLOR:%s\n", gettext( "Offending line:" ), error_line );
  exit_immediately( 1 );
  return;
}
void parse_color( char *buffer )
{
  int color;
  char *fg, *bg;
  char *temp = 0;
  HTSACopy( &temp, buffer );
  color = atoi( buffer );
  fg = find_colon( buffer );
  if ( fg == 0 )
    exit_with_color_syntax( temp );
  fg = 0;
  fg++;
  bg = find_colon( fg );
  if ( bg == 0 )
    exit_with_color_syntax( temp );
  bg = 0;
  bg++;
  if ( lynx_chg_color( color, check_color( fg, default_fg ), check_color( bg, default_bg ) ) < 0 )
    exit_with_color_syntax( temp );
  if ( temp )
  {
    free( temp );
    temp = 0;
  }
  return;
}
int assume_charset_fun( char *value )
{
  UCLYhndl_for_unspec = safeUCGetLYhndl_byMIME( value );
  HTSACopy( &UCAssume_MIMEcharset, LYCharSet_UC[ UCLYhndl_for_unspec ]->MIMEname );
  return 0;
}
int assume_local_charset_fun( char *value )
{
  UCLYhndl_HTFile_for_unspec = safeUCGetLYhndl_byMIME( value );
  return 0;
}
int assume_unrec_charset_fun( char *value )
{
  UCLYhndl_for_unrec = safeUCGetLYhndl_byMIME( value );
  return 0;
}
int character_set_fun( char *value )
{
  int i = UCGetLYhndl_byAnyName( value );
  if ( i >= 0 )
  {
    current_char_set = i;
  }
  return 0;
}
int outgoing_mail_charset_fun( char *value )
{
  outgoing_mail_charset = UCGetLYhndl_byMIME( value );
  return 0;
}
int assumed_color_fun( char *buffer )
{
  char *fg = buffer, *bg;
  char *temp = 0;
  if ( LYuse_default_colors )
  {
    HTSACopy( &temp, buffer );
    bg = find_colon( fg );
    if ( bg == 0 )
      exit_with_color_syntax( temp );
    bg[0] = 0;
    bg++;
    default_fg = check_color( fg, default_fg );
    default_bg = check_color( bg, default_bg );
    if ( default_fg == -3 || default_bg == -3 )
      exit_with_color_syntax( temp );
    if ( temp )
    {
      free( temp );
      temp = 0;
    }
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "...ignored since DEFAULT_COLORS:off\n" );
  }
  return 0;
}
int color_fun( char *value )
{
  parse_color( value );
  return 0;
}
int default_colors_fun( char *value )
{
  LYuse_default_colors = is_true( value );
  if ( LYuse_default_colors )
  {
    default_fg = -1;
    default_bg = -1;
  }
  else
  {
    default_color_reset = 1;
    if ( default_fg == -1 || default_bg == -1 )
    {
      default_fg = 7;
      default_bg = 0;
      lynx_setup_colors( );
    }
  }
  return 0;
}
int default_bookmark_file_fun( char *value )
{
  set_default_bookmark_page( value );
  return 0;
}
int default_cache_size_fun( char *value )
{
  HTCacheSize = atoi( value );
  if ( HTCacheSize <= 1 )
  {
    HTCacheSize = 2;
  }
  return 0;
}
int default_editor_fun( char *value )
{
  if ( system_editor == 0 )
  {
    HTSACopy( &editor, value );
  }
  return 0;
}
int numbers_as_arrows_fun( char *value )
{
  if ( is_true( value ) & 255 )
  {
    keypad_mode = 0;
  }
  else
  {
    keypad_mode = 1;
  }
  return 0;
}
int dired_menu_fun( char *value )
{
  add_menu_item( value );
  return 0;
}
int jumpfile_fun( char *value )
{
  char *buffer = 0;
  HTSprintf0( &buffer, "JUMPFILE:%s", value );
  if ( !( LYJumpInit( buffer ) & 255 ) && WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Failed to register %s\n", buffer );
  }
  if ( buffer )
  {
    free( buffer );
    buffer = 0;
  }
  return 0;
}
int keymap_fun( char *key )
{
  int ah;
  char *func = strchr( key, ebp_68 ), *efunc;
  if ( func )
  {
    func[0] = 0;
    func++;
    efunc = strchr( func, ':' );
    if ( func == efunc )
      func = 0;
    else
    if ( efunc && strncasecomp( &efunc[1], "DIRED", 5 ) == 0 )
    {
      if ( remap( key, strtok( func, " \t\n:#" ), 1 ) == 0 )
      {
        fprintf( stderr, gettext( "key remapping of %s to %s for %s failed\n" ), key, func, efunc[1] );
      }
      else
      if ( func && strcmp( "TOGGLE_HELP", func ) == 0 )
        LYUseNoviceLineTwo = 0;
      return 0;
    }
    else
    {
      if ( remap( key, strtok( func, " \t\n:#" ), 0 ) == 0 )
      {
        fprintf( stderr, gettext( "key remapping of %s to %s failed\n" ), key, func );
      }
      else
      {
        if ( func && strcmp( "TOGGLE_HELP", func ) == 0 )
          LYUseNoviceLineTwo = 0;
      }
    }
    if ( efunc == 0 || efunc != strtok( 0, " \t\n:#" ) || efunc[0] == 0 )
    {
      return 0;
    }
  {
    BOOLEAN success = 0;
    int lkc = lkcstring_to_lkc( key );
    int lec = -1;
    int select_edi = 0;
    char *sselect_edi = strtok( 0, " \t\n:#" );
    char **endp = &sselect_edi;
    if ( sselect_edi )
    {
      if ( sselect_edi[0] )
      {
        select_edi = strtol( sselect_edi, endp, 10 );
      }
      if ( endp[0] )
      {
        fprintf( stderr, gettext( "invalid line-editor selection %s for key %s, selecting all\n" ), sselect_edi, key );
        select_edi = 0;
      }
    }
    if ( success == 0 && strcasecomp( efunc, "PASS!" ) == 0 )
    {
      if ( func )
      {
        lec = lacname_to_lac( func );
        success = LYRemapEditBinding( lkc, lec, select_edi );
      }
      if ( success == 0 )
      {
        fprintf( stderr, gettext( "setting of line-editor binding for key %s (0x%x) to 0x%x for %s failed\n" ), key, lkc, lec, efunc );
      }
      else
      {
        return 0;
      }
    }
    if ( success == 0 )
    {
      lec = lecname_to_lec( efunc );
      success = LYRemapEditBinding( lkc, lec, select_edi );
    }
    if ( success == 0 )
    {
      if ( lec != -1 )
      {
        fprintf( stderr, gettext( "setting of line-editor binding for key %s (0x%x) to 0x%x for %s failed\n" ), key, lkc, lec, efunc );
      }
      else
      {
        fprintf( stderr, gettext( "setting of line-editor binding for key %s (0x%x) for %s failed\n" ), key, lkc, efunc );
      }
    }
  }
  }
}
int localhost_alias_fun( char *value )
{
  LYAddLocalhostAlias( value );
  return 0;
}
int lynxcgi_environment_fun( char *value )
{
  add_lynxcgi_environment( value );
  return 0;
}
int lynx_sig_file_fun( char *value )
{
  char temp[256];
  LYstrncpy( temp, value, 255 );
  if ( LYPathOffHomeOK( temp, 256 ) & 255 )
  {
    HTSACopy( &LynxSigFile, temp );
    LYAddPathToHome( temp, 256, LynxSigFile );
    HTSACopy( &LynxSigFile, temp );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYNX_SIG_FILE set to '%s'\n", LynxSigFile );
    }
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYNX_SIG_FILE '%s' is bad. Ignoring.\n", ".lynxsig" );
  }
  return 0;
}
int news_chunk_size_fun( char *value )
{
  HTNewsChunkSize = atoi( value );
  if ( HTNewsMaxChunk < HTNewsChunkSize )
  {
    HTNewsMaxChunk = HTNewsChunkSize;
  }
  return 0;
}
int news_max_chunk_fun( char *value )
{
  HTNewsMaxChunk = atoi( value );
  if ( HTNewsMaxChunk < HTNewsChunkSize )
  {
    HTNewsChunkSize = HTNewsMaxChunk;
  }
  return 0;
}
int news_posting_fun( char *value )
{
  LYNewsPosting = is_true( value );
  no_newspost = LYNewsPosting == 0;
  return 0;
}
int cern_rulesfile_fun( char *value )
{
  char *rulesfile1 = 0;
  char *rulesfile2 = 0;
  if ( HTLoadRules( value ) >= 0 )
  {
    return 0;
  }
  HTSACopy( &rulesfile1, value );
  LYTrimLeading( value );
  LYTrimTrailing( value );
  HTSACopy( &rulesfile2, value );
  LYTildeExpand( &rulesfile2, 0 );
  if ( strcmp( rulesfile1, rulesfile2 ) && HTLoadRules( rulesfile2 ) >= 0 )
  {
    if ( rulesfile1 )
    {
      free( rulesfile1 );
      rulesfile1 = 0;
    }
    if ( rulesfile2 )
    {
      free( rulesfile2 );
      rulesfile2 = 0;
    }
    return 0;
  }
  else
  {
    fprintf( stderr, gettext( "Lynx: cannot start, CERN rules file %s is not available\n" ), rulesfile2 == 0 || rulesfile2[0] == 0 ? gettext( "Lynx: cannot start, CERN rules file %s is not available\n" ) : rulesfile2 );
    exit_immediately( 1 );
    return 0;
  }
}
int referer_with_query_fun( char *value )
{
  if ( strncasecomp( value, ebp_20, ebp_20 ) == 0 )
  {
    LYRefererWithQuery = 'S';
  }
  if ( strncasecomp( value, "PARTIAL", 7 ) == 0 )
  {
    LYRefererWithQuery = 'P';
  }
  LYRefererWithQuery = 'D';
  return 0;
}
int suffix_fun( char *value )
{
  int eax;
  char *mime_type, *p;
  char *encoding = 0;
  char *sq = 0;
  char *description = 0;
  double q = 1.000000000000;
  if ( strlen( value ) > 2 )
  {
    mime_type = strchr( value, ':' );
    if ( mime_type == 0 )
      goto B3;
    else
    {
      mime_type[0] = 0;
      mime_type++;
      if ( mime_type[0] )
      {
        encoding = strchr( mime_type, ':' );
        if ( encoding )
        {
          encoding[0] = 0;
          encoding++;
          sq = strchr( encoding, ':' );
          if ( sq )
          {
            sq[0] = 0;
            sq++;
            description = strchr( sq, ':' );
            if ( description )
            {
              description[0] = 0;
              description++;
              p = strchr( sq, ':' );
              if ( p )
                p[0] = 0;
              LYTrimTail( description );
            }
            LYRemoveBlanks( sq );
            if ( sq[0] == 0 )
              sq = 0;
          }
          LYRemoveBlanks( encoding );
          LYLowerCase( encoding );
          if ( encoding[0] == 0 )
            encoding = 0;
        }
      }
      LYRemoveBlanks( mime_type );
      if ( mime_type[0] == 0 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "SUFFIX:%s without MIME type for %s\n", value, "what?" );
        }
        mime_type = 0;
        if ( encoding == 0 )
        {
          return 0;
        }
      }
      if ( encoding == 0 )
      {
        if ( strstr( mime_type, "tex" ) || strstr( mime_type, "postscript" ) || strstr( mime_type, "sh" ) || strstr( mime_type, "troff" ) || strstr( mime_type, "rtf" ) )
          encoding = "8bit";
        else
          encoding = "binary";
      }
      if ( sq == 0 )
        q = 1.000000000000;
      else
      {
        double df = strtod( sq, &p );
        if ( sq == p && ( ( ( ( ( ah & 5 ) & 255 ) == 0 ) ^ 1 ) & 255 ) == 0 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Invalid q=%s for SUFFIX:%s, using -1.0\n", sq, value );
          }
          q = -1.000000000000;
        }
        else
          q = df;
      }
      HTSetSuffix5( value, mime_type, encoding, description, q );
      return 0;
    }
  }
B3:;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Invalid SUFFIX:%s ignored.\n", value );
  }
  return 0;
}
int suffix_order_fun( char *value )
{
  char *p = value;
  char *optn;
  BOOLEAN want_file_init_now = 0;
  LYUseBuiltinSuffixes = 1;
  while ( optn == 0 )
  {
    if ( strcasecomp( optn, "NO_BUILTIN" ) == 0 )
    {
      LYUseBuiltinSuffixes = 0;
    }
    else
    {
      if ( strcasecomp( optn, "PRECEDENCE_HERE" ) == 0 )
      {
        want_file_init_now = 1;
      }
      else
      {
        if ( strcasecomp( optn, "PRECEDENCE_OTHER" ) == 0 )
        {
          want_file_init_now = 0;
        }
        else
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Invalid SUFFIX_ORDER:%s\n", optn );
          break;
        }
      }
    }
  }
  if ( want_file_init_now && FileInitAlreadyDone == 0 )
  {
    HTFileInit( );
    FileInitAlreadyDone = 1;
  }
  return 0;
}
int system_editor_fun( char *value )
{
  HTSACopy( &editor, value );
  system_editor = 1;
  return 0;
}
int viewer_fun( char *value )
{
  char *mime_type = value;
  char *viewer;
  char *environment;
  if ( strlen( value ) > 2 )
  {
    viewer = strchr( mime_type, ':' );
    if ( viewer == 0 )
    {
      return 0;
    }
    viewer[0] = 0;
    viewer++;
    LYRemoveBlanks( mime_type );
    LYLowerCase( mime_type );
    environment = strrchr( viewer, ':' );
    if ( environment && strlen( viewer ) > 1 && environment[ -1 ] != '\\' )
    {
      environment[0] = 0;
      environment++;
      remove_backslashes( viewer );
      if ( strcasecomp( environment, "XWINDOWS" ) == 0 )
      {
        if ( LYgetXDisplay( ) )
          HTSetPresentation( mime_type, viewer, 0, 1.000000000000, 3.000000000000, 0.000000000000, 0, 4 );
      }
      else
      {
        if ( strcasecomp( environment, "NON_XWINDOWS" ) == 0 )
        {
          if ( LYgetXDisplay( ) == 0 )
            HTSetPresentation( mime_type, viewer, 0, 1.000000000000, 3.000000000000, 0.000000000000, 0, 4 );
        }
        else
          HTSetPresentation( mime_type, viewer, 0, 1.000000000000, 3.000000000000, 0.000000000000, 0, 4 );
      }
    }
    else
    {
      remove_backslashes( viewer );
      HTSetPresentation( mime_type, viewer, 0, 1.000000000000, 3.000000000000, 0.000000000000, 0, 4 );
    }
    return 0;
  }
  return 0;
}
int nonrest_sigwinch_fun( char *value )
{
  if ( strncasecomp( value, ebp_20, ebp_20 ) == 0 )
  {
    LYNonRestartingSIGWINCH = LYgetXDisplay( ) != 0;
  }
  LYNonRestartingSIGWINCH = is_true( value );
  return 0;
}
void html_src_bad_syntax( char *value, char *option_name )
{
  char *buf = 0;
  HTSprintf0( &buf, "HTMLSRC_%s", option_name );
  LYUpperCase( buf );
  fprintf( stderr, "Bad syntax in TAGSPEC %s:%s\n", buf, value );
  exit_immediately( 1 );
  return;
}
int parse_html_src_spec( HTlexeme lexeme_code, char *value, char *option_name )
{
  char *ts2;
  if ( value == 0 || value[0] == 0 )
  {
    return 0;
  }
  ts2 = strchr( value, ':' );
  if ( ts2 == 0 )
    html_src_bad_syntax( value, option_name );
  ts2[0] = 0;
  if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
  {
    fprintf( TraceFP( ), "LYReadCFG - parsing tagspec '%s:%s' for option '%s'\n", value, ts2, option_name );
  }
  html_src_clean_item( lexeme_code );
  if ( html_src_parse_tagspec( value, lexeme_code, 1, 1 ) == 0 || html_src_parse_tagspec( ts2, lexeme_code, 1, 1 ) == 0 )
  {
    ts2[0] = ':';
    html_src_bad_syntax( value, option_name );
  }
  ts2[0] = ':';
  HTSACopy( &HTL_tagspecs[ lexeme_code ], value );
  return 0;
}
int psrcspec_fun( char *s )
{
  static Config_Enum lexemnames[13] = { { "comm", 0 }
, { "tag", 1 }
, { "attrib", 2 }
, { "attrval", 3 }
, { "abracket", 4 }
, { "entity", 5 }
, { "href", 6 }
, { "entire", 7 }
, { "badseq", 8 }
, { "badtag", 9 }
, { "badattr", 10 }
, { "sgmlspecial", 11 }
, { 0, -1 }
 };
  char *e = strchr( s, ebp_36 );
  int found;
  if ( e == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "bad format of PRETTYSRC_SPEC setting value, ignored %s\n", s );
    }
    return 0;
  }
  else
  {
    e[0] = 0;
    if ( ( LYgetEnum( lexemnames, s, &found ) & 255 ) == 0 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "bad format of PRETTYSRC_SPEC setting value, ignored %s:%s\n", s, &e[1] );
      }
      return 0;
    }
    else
    {
      parse_html_src_spec( found, &e[1], s );
      return 0;
    }
  }
}
int read_htmlsrc_attrname_xform( char *str )
{
  int val;
  if ( sscanf( str, "%d", &val ) == 1 )
  {
    if ( val >= 0 && val <= 2 )
    {
      attrname_transform = val;
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "bad value for htmlsrc_attrname_xform (ignored - must be one of 0,1,2): %d\n", val );
    }
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "bad value for htmlsrc_attrname_xform (ignored): %s\n", str );
  }
  return 0;
}
int read_htmlsrc_tagname_xform( char *str )
{
  int val;
  if ( sscanf( str, "%d", &val ) == 1 )
  {
    if ( val >= 0 && val <= 2 )
    {
      tagname_transform = val;
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "bad value for htmlsrc_tagname_xform (ignored - must be one of 0,1,2): %d\n", val );
    }
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "bad value for htmlsrc_tagname_xform (ignored): %s\n", str );
  }
  return 0;
}
void free_lynx_cfg( void )
{
  Config_Type *tbl = Config_Table;
  for ( ; tbl->name[0];  )
  {
    ParseUnion *q = &tbl->value;
    if ( tbl->type == 8 && q->add_value[0] )
    {
      char *name = (char*)&q->add_value;
      char *eqls = strchr( name, '=' );
      if ( eqls )
      {
        eqls[0] = 0;
        unsetenv( name );
      }
      if ( q->add_value )
      {
        free( q->add_value );
        q->add_value = 0;
      }
      if ( q->add_value[0] )
      {
        free( q->add_value[0] );
        *ebp_8 = 0;
      }
    }
    tbl++;
  }
  free_all_item_lists( );
  reset_dired_menu( );
  if ( lynxcfginfo_url )
  {
    free( lynxcfginfo_url );
    lynxcfginfo_url = 0;
  }
  if ( configinfo_url )
  {
    free( configinfo_url );
    configinfo_url = 0;
  }
  return;
}
Config_Type *lookup_config( char *name )
{
  Config_Type *tbl = Config_Table;
  char ch = name[0];
  for ( ; tbl->name[0];  )
  {
    char ch1 = tbl->name;
    if ( ch == ch1 && strcasecomp( name, &tbl->name[0] ) == 0 )
      break;
    tbl++;
  }
  return tbl;
}
char *actual_filename( char *cfg_filename, char *parent_filename, char *dft_filename )
{
  char *my_filename = 0;
  if ( ( LYisAbsPath( cfg_filename ) & 255 ) == 0 && ( parent_filename || ( LYCanReadFile( cfg_filename ) & 255 ) == 0 ) )
  {
    if ( cfg_filename[0] == '~' && cfg_filename[1] == '/' )
    {
      HTSprintf0( &my_filename, "%s%s", Home_Dir( ), cfg_filename[1] );
    }
    if ( parent_filename )
    {
      HTSACopy( &my_filename, parent_filename );
      *(char*)(LYPathLeaf( my_filename )) = 0;
      HTSACat( &my_filename, cfg_filename );
    }
    if ( my_filename == 0 || ( LYCanReadFile( my_filename ) & 255 ) == 0 )
    {
      HTSACopy( &my_filename, dft_filename );
      *(char*)(LYPathLeaf( my_filename )) = 0;
      HTSACat( &my_filename, cfg_filename );
      if ( ( LYCanReadFile( my_filename ) & 255 ) == 0 )
      {
        HTSACopy( &my_filename, cfg_filename );
      }
    }
  }
  else
  {
    HTSACopy( &my_filename, cfg_filename );
  }
  return my_filename;
}
FILE *LYOpenCFG( char *cfg_filename, char *parent_filename, char *dft_filename )
{
  char *my_file = actual_filename( cfg_filename, parent_filename, dft_filename );
  FILE *result;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "opening config file %s\n", my_file );
  }
  result = fopen64( my_file, "r" );
  if ( my_file )
  {
    free( my_file );
    my_file = 0;
  }
  return result;
}
void LYSetConfigValue( char *name, char *value )
{
  Config_Type *tbl = lookup_config( name );
  ParseUnion *q = &tbl->value;
  char *temp = 0;
  switch ( tbl->type )
  {
  case 1:
    if ( q->add_value[0] == 0 )
    {
      return;
    }
    q->lst_value = is_true( value );
    break;
  case 2:
    if ( q->add_value[0] )
    {
      ;
    }
    break;
  case 3:
    if ( q->add_value[0] && sscanf( value, value, "%f", ival ) == 1 )
    {
      q->add_value = (int)( ival * 1000.000000000000 );
    }
    break;
  case 4:
    if ( tbl->table )
    {
      LYgetEnum( &tbl->table, value, (int*)q->add_value[0] );
    }
    break;
  case 5:
    if ( q->add_value[0] && sscanf( value, "%d", &ival ) == 1 )
    {
      q->add_value = &ival;
    }
    break;
  case 6:
    if ( q->add_value[0] )
    {
      HTSACopy( (int)( &q->add_value[0]->next ), value );
    }
    break;
  case 8:
  case '\t':
    if ( tbl->type == 8 )
      LYLowerCase( name );
    else
      LYUpperCase( name );
    if ( LYGetEnv( name ) == 0 )
    {
      if ( q->add_value[0] == 0 )
      {
        q->add_value[0] = (lynx_list_item_type*)calloc( 1, 4 );
      }
      HTSprintf0( (int)( &q->add_value[0]->next ), "%s=%s", name, value );
      putenv( (char*)&q->add_value );
    }
    break;
  case '':
    if ( q->add_value[0] )
    {
      add_item_to_list( value, &q->add_value[0], q->add_value[0] == printers );
    }
    break;
  case '':
    if ( q->add_value == 0 )
    {
      q[0].add_value/*union*/ = (lynx_list_item_type**)HTList_new( );
    }
    if ( q->add_value[0] == 0 )
    {
      return;
    }
  {
    char *my_value = 0;
    HTSACopy( &my_value, value );
    HTList_appendObject( &q->add_value[0][0].next[0], (void*)my_value );
  }
    break;
  case '\r':
    add_trusted( value, q->add_value[0] );
    break;
  case 7:
    if ( HTSACopy( &temp, value ) == 0 )
    HTSetProgramPath( (int)( q->add_value[0]->next ), temp );
  case 0:
  case '\n':
    break;
  }
  return;
}
void do_read_cfg( char *cfg_filename, char *parent_filename, int nesting_level, FILE *fp0, optidx_set_t *allowed )
{
  FILE *fp;
  char *buffer = 0;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Loading cfg file '%s'.\n", cfg_filename );
  }
  if ( nesting_level > 10 )
  {
    fprintf( stderr, gettext( "More than %d nested lynx.cfg includes -- perhaps there is a loop?!?\n" ), nesting_level + -1 );
    fprintf( stderr, gettext( "Last attempted include was '%s',\n" ), cfg_filename );
    fprintf( stderr, gettext( "included from '%s'.\n" ), parent_filename );
    exit_immediately( 1 );
  }
  if ( cfg_filename == 0 || cfg_filename == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "No filename following -cfg switch!\n" );
    }
  }
  else
  {
    fp = LYOpenCFG( cfg_filename, parent_filename, "/etc/lynx-cur/lynx.cfg" );
    if ( fp == 0 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "lynx.cfg file not found as '%s'\n", cfg_filename );
      }
    }
    else
    {
      have_read_cfg = 1;
      while ( LYSafeGets( &buffer, fp ) == 0 )
      {
        char *name = LYSkipBlanks( buffer ), *value;
        char *cp;
        Config_Type *tbl;
        ParseUnion *q;
        if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( name * 2 )) & 4 )
          continue;
        else
        {
          LYTrimTrailing( name );
          if ( name )
          {
            value = strchr( name, ':' );
            if ( value == 0 )
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "LYReadCFG: missing ':' %s\n", name );
              }
            }
            else
            {
              value = 0;
              value++;
              cp = strrchr( value, ':' );
              if ( cp == 0 )
                cp = value;
              cp = strchr( cp, '#' );
              if ( cp )
              {
                cp = &cp[ -1 ];
                if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp * 2 )) & 8192 )
                  cp = 0;
              }
              if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
              {
                fprintf( TraceFP( ), "LYReadCFG %s:%s\n", name, value );
              }
              tbl = lookup_config( name );
              if ( tbl->name[0] == 0 )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "LYReadCFG: ignored %s:%s\n", name, value );
                }
              }
              else
              {
                if ( allowed && allowed[0][ ( tbl - Config_Table[0].name ) >> 4 ] )
                {
                  if ( fp0 == 0 )
                  {
                    fprintf( stderr, "%s is not allowed in the %s\n", name, cfg_filename );
                  }
                }
                else
                {
                  q = &tbl->value;
                  if ( ( fp0 == 0 || tbl->type == 10 ? tbl->type : 0 ) <= 13 )
                  {
                    if ( ( ( 1 << ( fp0 == 0 || tbl->type == 10 ? tbl->type : 0 ) ) & 15358 ) == 0 )
                    {
                      if ( ( 1 << ( fp0 == 0 || tbl->type == 10 ? tbl->type : 0 ) ) & 1024 )
                      {
                        optidx_set_t cur_set;
                        optidx_set_t anded_set;
                        optidx_set_t *resultant_set = 0;
                        char *p1, *p2, savechar;
                        BOOLEAN any_optname_found = 0;
                        char *url = 0;
                        char *cp1 = 0;
                        char *sep = 0;
                        sep = " for ";
                        p1 = strstr( value, sep );
                        if ( p1 == 0 )
                        {
                          sep = ":";
                          p1 = strstr( value, sep );
                          if ( p1 == 0 )
                          {
                            if ( fp0 && no_lynxcfg_xinfo == 0 )
                            {
                              char *my_file = actual_filename( value, cfg_filename, "/etc/lynx-cur/lynx.cfg" );
                              LYLocalFileToURL( &url, my_file );
                              if ( my_file )
                              {
                                free( my_file );
                                my_file = 0;
                              }
                              HTSACopy( &cp1, value );
                              if ( strchr( value, '&' ) || strchr( value, '<' ) )
                                LYEntify( &cp1, 1 );
                              fprintf( fp0, "%s:&lt;a href=\"%s\"&gt;%s&lt;/a&gt;\n\n", name, url, cp1 );
                              fprintf( fp0, "    #&lt;begin  %s&gt;\n", cp1 );
                            }
                            if ( p1 )
                            {
                              for ( ; p1[0];  )
                              {
                                Config_Type *tbl2;
                                p2 = LYSkipNonBlanks( p1 );
                                savechar = p2[0];
                                p2[0] = 0;
                                tbl2 = lookup_config( p1 );
                                if ( tbl2->name[0] == 0 )
                                {
                                  if ( fp0 == 0 )
                                    fprintf( stderr, "unknown option name %s in %s\n", p1, cfg_filename );
                                }
                                else
                                {
                                  unsigned int i;
                                  if ( any_optname_found == 0 )
                                  {
                                    any_optname_found = 1;
                                    i = 0;
                                    for ( ; i <= 206; i++ )
                                    {
                                      cur_set[ i ] = 1;
                                      // i++;
                                    }
                                  }
                                  cur_set[ ( tbl2 - Config_Table[0].name ) >> 4 ] = 0;
                                }
                                if ( savechar == 0 || p2[1] == 0 )
                                  break;
                                else
                                {
                                  p1 = &p2[1];
                                }
                              }
                            }
                            if ( allowed == 0 )
                            {
                              if ( any_optname_found == 0 )
                                resultant_set = 0;
                              else
                                resultant_set = &cur_set;
                            }
                            else
                            if ( any_optname_found == 0 )
                              resultant_set = allowed;
                            else
                            {
                              unsigned int i1 = 0;
                              for ( ; i1 <= 206; i1++ )
                              {
                                *(int*)&anded_set[ i1 ] = 0;
                                // i1++;
                              }
                              resultant_set = &anded_set;
                            }
                            if ( fp0 && !no_lynxcfg_xinfo && resultant_set )
                            {
                              char *buf = 0;
                              unsigned int i;
                              fwrite( "     Options allowed in this file:\n", 1, 35, fp0 );
                              i = 0;
                              for ( ; i <= 206; i++ )
                              {
                                if ( resultant_set[0][ i ] == 0 )
                                {
                                  HTSACopy( &buf, Config_Table[ i ].name );
                                  LYUpperCase( buf );
                                  fprintf( fp0, "         * %s\n", buf );
                                }
                                // i++;
                              }
                              if ( buf )
                              {
                                free( buf );
                              }
                            }
                            do_read_cfg( value, cfg_filename, nesting_level + 1, fp0, resultant_set );
                            if ( fp0 == 0 || no_lynxcfg_xinfo )
                              continue;
                            else
                            {
                              fprintf( fp0, "    #&lt;end of %s&gt;\n\n", cp1 );
                              if ( url )
                              {
                                free( url );
                                url = 0;
                              }
                              if ( cp1 )
                              {
                                free( cp1 );
                                cp1 = 0;
                              }
                            }
                          }
                        }
                        p1[0] = 0;
                        p1 += strlen( sep );
                      }
                    }
                    else
                    {
                      LYSetConfigValue( name, value );
                    }
                  }
                  if ( fp0 )
                  {
                    if ( strchr( value, '&' ) || strchr( value, '<' ) )
                    {
                      char *cp1 = 0;
                      HTSACopy( &cp1, value );
                      LYEntify( &cp1, 1 );
                      fprintf( fp0, "%s:%s\n", name, cp1 );
                      if ( cp1 )
                      {
                        free( cp1 );
                        cp1 = 0;
                      }
                    }
                    else
                    {
                      fprintf( fp0, "%s:%s\n", name, value );
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}
void read_cfg( char *cfg_filename, char *parent_filename, int nesting_level, FILE *fp0 )
{
  HTInitProgramPaths( );
  do_read_cfg( cfg_filename, parent_filename, nesting_level, fp0, 0 );
  return;
}
void extra_cfg_link( FILE *fp, char *href, char *name )
{
  fprintf( fp, "&lt;a href=\"%s\"&gt;%s&lt;/a&gt;", href, name );
  return;
}
int lynx_cfg_infopage( DocInfo *newdoc )
{
  static char tempfile[256];
  DocAddress WWWDoc;
  char *temp = 0;
  char *cp1 = 0;
  FILE *fp0;
  if ( !no_lynxcfg_xinfo && strstr( &newdoc->address, "LYNXCFG://reload" ) )
  {
    reload_read_cfg( );
    if ( HTMainText && nhist > 0 && !strcmp( HTLoadedDocumentTitle( ), gettext( "Lynx.cfg Information" ) ) && !strcmp( HTLoadedDocumentURL( ), history[ nhist + -1 ].hdoc.address ) && ( LYIsUIPage3( history[ nhist + -1 ].hdoc.address, 6, 1 ) & 255 ) && ( lynxcfginfo_url == 0 || strcmp( HTLoadedDocumentURL( ), lynxcfginfo_url ) ) )
    {
      LYpop( newdoc );
      WWWDoc.address = &newdoc->address;
      WWWDoc.post_data = &newdoc->post_data;
      WWWDoc.post_content_type = &newdoc->post_content_type;
      WWWDoc.bookmark = &newdoc->bookmark;
      WWWDoc.isHEAD = newdoc->isHEAD;
      WWWDoc.safe = newdoc->safe;
      LYforce_no_cache = 0;
      LYoverride_no_cache = 1;
      if ( ( HTLoadAbsolute( &WWWDoc ) & 255 ) == 0 )
      {
        return 0;
      }
      HTuncache_current_document( );
      LYRegisterUIPage( 0, 6 );
    }
    if ( lynxcfginfo_url )
    {
      free( lynxcfginfo_url );
      lynxcfginfo_url = 0;
    }
  }
  if ( LYforce_no_cache && reloading )
  {
    if ( lynxcfginfo_url )
    {
      free( lynxcfginfo_url );
      lynxcfginfo_url = 0;
    }
  }
  else
  if ( lynxcfginfo_url && !( LYCanReadFile( tempfile ) & 255 ) && lynxcfginfo_url )
  {
    free( lynxcfginfo_url );
    lynxcfginfo_url = 0;
  }
  if ( lynxcfginfo_url == 0 )
  {
    fp0 = InternalPageFP( tempfile, 1 );
    if ( fp0 == 0 )
    {
      return 0;
    }
    LYLocalFileToURL( &lynxcfginfo_url, tempfile );
    LYforce_no_cache = 1;
    BeginInternalPage( fp0, gettext( "Lynx.cfg Information" ), 0 );
    fwrite( "&lt;pre&gt;\n", 1, 6, fp0 );
    if ( no_lynxcfg_xinfo == 0 )
    {
      if ( strcmp( lynx_cfg_file, "/etc/lynx-cur/lynx.cfg" ) )
      {
        fprintf( fp0, "&lt;em&gt;%s\n%s", gettext( "The following is read from your lynx.cfg file." ), gettext( "Please read the distribution" ) );
        LYLocalFileToURL( &temp, "/etc/lynx-cur/lynx.cfg" );
        fprintf( fp0, " &lt;a href=\"%s\"&gt;lynx.cfg&lt;/a&gt; ", temp );
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
        fprintf( fp0, "%s&lt;/em&gt;\n\n", gettext( "for more comments." ) );
      }
      else
      {
        fprintf( fp0, "&lt;em&gt;%s\n%s", gettext( "The following is read from your lynx.cfg file." ), gettext( "Please read the distribution" ) );
        fwrite( " &lt;/em&gt;lynx.cfg&lt;em&gt; ", 1, 19, fp0 );
        fprintf( fp0, "%s&lt;/em&gt;\n", gettext( "for more comments." ) );
      }
      if ( no_compileopts_info == 0 && no_lynxcfg_xinfo == 0 )
      {
        fprintf( fp0, "%s&lt;/pre&gt;&lt;ul&gt;&lt;li&gt;", gettext( "See also" ) );
        extra_cfg_link( fp0, "LYNXCOMPILEOPTS:", gettext( "compile time options" ) );
        fwrite( "&lt;li&gt;", 1, 4, fp0 );
        LYLocalFileToURL( &temp, lynx_lss_file );
        extra_cfg_link( fp0, temp, gettext( "color-style configuration" ) );
        fwrite( "&lt;/ul&gt;&lt;pre&gt;\n", 1, 11, fp0 );
      }
      else
      {
        fprintf( fp0, "%s ", gettext( "See also" ) );
        if ( no_compileopts_info == 0 )
        {
          extra_cfg_link( fp0, "LYNXCOMPILEOPTS:", gettext( "compile time options" ) );
        }
        if ( no_lynxcfg_xinfo == 0 )
        {
          LYLocalFileToURL( &temp, lynx_lss_file );
          extra_cfg_link( fp0, temp, gettext( "color-style configuration" ) );
        }
        fwrite( "\n\n", 1, 2, fp0 );
      }
      if ( user_mode == 2 )
      {
        fprintf( fp0, "  &lt;a href=\"%s//reload\"&gt;%s&lt;/a&gt;\n", "LYNXCFG:", gettext( "RELOAD THE CHANGES" ) );
      }
      LYLocalFileToURL( &temp, lynx_cfg_file );
      HTSACopy( &cp1, lynx_cfg_file );
      if ( strchr( lynx_cfg_file, '&' ) || strchr( lynx_cfg_file, '<' ) )
        LYEntify( &cp1, 1 );
      fprintf( fp0, "\n    #&lt;em&gt;%s &lt;a href=\"%s\"&gt;%s&lt;/a&gt;&lt;/em&gt;\n", gettext( "Your primary configuration" ), temp, cp1 );
      if ( temp )
      {
        free( temp );
        temp = 0;
      }
      if ( cp1 )
      {
        free( cp1 );
        cp1 = 0;
      }
    }
    else
    {
      fprintf( fp0, "&lt;em&gt;%s&lt;/em&gt;\n\n", gettext( "The following is read from your lynx.cfg file." ) );
    }
    read_cfg( lynx_cfg_file, "main program", 1, fp0 );
    fwrite( "&lt;/pre&gt;\n", 1, 7, fp0 );
    EndInternalPage( fp0 );
    LYCloseTempFP( fp0 );
    LYRegisterUIPage( lynxcfginfo_url, 6 );
  }
  HTSACopy( &newdoc->address, lynxcfginfo_url );
  WWWDoc.address = &newdoc->address;
  WWWDoc.post_data = &newdoc->post_data;
  WWWDoc.post_content_type = &newdoc->post_content_type;
  WWWDoc.bookmark = &newdoc->bookmark;
  WWWDoc.isHEAD = newdoc->isHEAD;
  WWWDoc.safe = newdoc->safe;
  if ( ( HTLoadAbsolute( &WWWDoc ) & 255 ) == 0 )
  {
    return 0;
  }
  lynx_edit_mode = 0;
  return 1;
}
int lynx_compile_opts( DocInfo *newdoc )
{
  static char tempfile[256];
  static struct {
     char *name;
     char *value;
  } config_cache[282] = { { "", "" }
, { "alt_char_set", "'acs_map'" }
, { "ansi_cc", "'-DCC_HAS_PROTOS'" }
, { "ansi_varargs", "'yes'" }
, { "baddef_remove", "'no'" }
, { "bool_defs", "'yes'" }
, { "build_alias", "'i686-pc-linux-gnu'" }
, { "build", "'i686-pc-linux-gnu'" }
, { "c_compiler_gnu", "'yes'" }
, { "c_const", "'yes'" }
, { "cc_u_d_options", "'yes'" }
, { "c_inline", "'inline'" }
, { "color_curses", "'yes'" }
, { "curses_dir", "'no'" }
, { "dcl_errno", "'yes'" }
, { "dcl_sys_errlist", "'yes'" }
, { "dcl_sys_nerr", "'yes'" }
, { "define_sigwinch", "'yes'" }
, { "env_build_alias_set", "''" }
, { "env_build_alias_value", "''" }
, { "env_CC_set", "''" }
, { "env_CC_value", "''" }
, { "env_CFLAGS_set", "'set'" }
, { "env_CFLAGS_value", "'-g'" }
, { "env_CPPFLAGS_set", "''" }
, { "env_CPPFLAGS_value", "''" }
, { "env_CPP_set", "''" }
, { "env_CPP_value", "''" }
, { "env_host_alias_set", "''" }
, { "env_host_alias_value", "''" }
, { "env_LDFLAGS_set", "''" }
, { "env_LDFLAGS_value", "''" }
, { "env_target_alias_set", "''" }
, { "env_target_alias_value", "''" }
, { "fancy_curses", "'yes'" }
, { "find_linkage_gnutls", "'no'" }
, { "find_linkage_iconv", "'yes'" }
, { "find_linkage_intl", "'yes'" }
, { "find_linkage_z", "'yes'" }
, { "fionbio", "'ioctl'" }
, { "force_use_gnu_gettext", "'no'" }
, { "func_alloca_works", "'yes'" }
, { "func___argz_count", "'yes'" }
, { "func___argz_next", "'yes'" }
, { "func___argz_stringify", "'yes'" }
, { "func_assume_default_colors", "'yes'" }
, { "func_cbreak", "'yes'" }
, { "func_ctermid", "'yes'" }
, { "func_curses_version", "'yes'" }
, { "func_cuserid", "'yes'" }
, { "func_dcgettext", "'yes'" }
, { "func_decl_getgrgid", "'yes'" }
, { "func_decl_getgrnam", "'yes'" }
, { "func_decl_strstr", "'yes'" }
, { "func_define_key", "'yes'" }
, { "func_delscreen", "'yes'" }
, { "func_feof_unlocked", "'yes'" }
, { "func_fgets_unlocked", "'yes'" }
, { "func_fork_works", "'yes'" }
, { "func_fork", "'yes'" }
, { "func_fseeko", "'yes'" }
, { "func_ftime", "'yes'" }
, { "func_getattrs", "'yes'" }
, { "func_getbegx", "'yes'" }
, { "func_getbegy", "'yes'" }
, { "func_getcwd", "'yes'" }
, { "func_getegid", "'yes'" }
, { "func_geteuid", "'yes'" }
, { "func_getgid", "'yes'" }
, { "func_getgroups", "'yes'" }
, { "func_gethostbyname", "'yes'" }
, { "func_gethostname", "'yes'" }
, { "func_getpagesize", "'yes'" }
, { "func_gettext", "'yes'" }
, { "func_gettimeofday", "'yes'" }
, { "func_getuid", "'yes'" }
, { "func_iconv", "'yes'" }
, { "func_keypad", "'yes'" }
, { "func_lstat", "'yes'" }
, { "func_mempcpy", "'yes'" }
, { "func_mkdtemp", "'yes'" }
, { "func_mktemp", "'yes'" }
, { "func_mktime", "'yes'" }
, { "func_mmap_fixed_mapped", "'yes'" }
, { "func_munmap", "'yes'" }
, { "func_napms", "'yes'" }
, { "func__nc_freeall", "'yes'" }
, { "func__nc_free_and_exit", "'yes'" }
, { "func_newpad", "'yes'" }
, { "func_newterm", "'yes'" }
, { "func_pnoutrefresh", "'yes'" }
, { "func_popen", "'yes'" }
, { "func_putenv", "'yes'" }
, { "func_readdir", "'yes'" }
, { "func_resizeterm", "'yes'" }
, { "func_setenv", "'yes'" }
, { "func_setlocale", "'yes'" }
, { "func_setuid", "'yes'" }
, { "func_sigaction", "'yes'" }
, { "func_socket", "'yes'" }
, { "func_stpcpy", "'yes'" }
, { "func_strcasecmp", "'yes'" }
, { "func_strchr", "'yes'" }
, { "func_strdup", "'yes'" }
, { "func_strerror", "'yes'" }
, { "func_strstr", "'yes'" }
, { "func_strtoul", "'yes'" }
, { "func_touchline", "'yes'" }
, { "func_touchwin", "'yes'" }
, { "func_truncate", "'yes'" }
, { "func_tsearch", "'yes'" }
, { "func_ttyname", "'yes'" }
, { "func_unsetenv", "'yes'" }
, { "func_use_default_colors", "'yes'" }
, { "func_use_legacy_coding", "'yes'" }
, { "func_usleep", "'yes'" }
, { "func_vasprintf", "'yes'" }
, { "func_vfork_works", "'yes'" }
, { "func_vfork", "'yes'" }
, { "func_waitpid", "'yes'" }
, { "func_wattr_get", "'yes'" }
, { "func_wborder", "'yes'" }
, { "func_wredrawln", "'yes'" }
, { "func_wresize", "'yes'" }
, { "func_zError", "'no'" }
, { "getaddrinfo", "'yes'" }
, { "gnu_library_2_1", "'yes'" }
, { "gnu_source", "'yes'" }
, { "gnutls_compat", "'no'" }
, { "have_errno", "'no'" }
, { "have_gnutls", "'no'" }
, { "have_h_errno", "'no'" }
, { "have_inet_aton", "'yes'" }
, { "have_sys_errlist", "'yes'" }
, { "have_sys_nerr", "'yes'" }
, { "have_ttytype", "'yes'" }
, { "have_utmp_ut_host", "'yes'" }
, { "have_utmp", "'utmp'" }
, { "have_utmp_ut_name", "'ut_name'" }
, { "have_utmp_ut_session", "'yes'" }
, { "have_utmp_ut_syslen", "'no'" }
, { "have_utmp_ut_xstatus", "'ut_exit.e_exit'" }
, { "have_utmp_ut_xtime", "'yes'" }
, { "header_argz_h", "'yes'" }
, { "header_arpa_inet_h", "'yes'" }
, { "header_dirent_dirent_h", "'yes'" }
, { "header_fcntl_h", "'yes'" }
, { "header_intl", "''" }
, { "header_inttypes_h", "'yes'" }
, { "header_lastlog_h", "'yes'" }
, { "header_libgt", "''" }
, { "header_libintl_h", "'yes'" }
, { "header_limits_h", "'yes'" }
, { "header_locale_h", "'yes'" }
, { "header_malloc_h", "'yes'" }
, { "header_memory_h", "'yes'" }
, { "header_ncursesw_term_h", "'yes'" }
, { "header_nl_types_h", "'yes'" }
, { "header_path_gnutls", "'/usr/local/include'" }
, { "header_path_iconv", "''" }
, { "header_path_intl", "''" }
, { "header_paths_h", "'yes'" }
, { "header_path_z", "'/usr/include'" }
, { "header_stdarg_h", "'yes'" }
, { "header_stdc", "'yes'" }
, { "header_stddef_h", "'yes'" }
, { "header_stdint_h", "'yes'" }
, { "header_stdlib_h", "'yes'" }
, { "header_string_h", "'yes'" }
, { "header_strings_h", "'yes'" }
, { "header_sys_fcntl_h", "'yes'" }
, { "header_sys_filio_h", "'no'" }
, { "header_sys_ioctl_h", "'yes'" }
, { "header_syslog_h", "'yes'" }
, { "header_sys_param_h", "'yes'" }
, { "header_sys_stat_h", "'yes'" }
, { "header_sys_timeb_h", "'yes'" }
, { "header_sys_time_h", "'yes'" }
, { "header_sys_types_h", "'yes'" }
, { "header_sys_wait_h", "'yes'" }
, { "header_term_h", "'yes'" }
, { "header_termio_h", "'yes'" }
, { "header_termios_h", "'yes'" }
, { "header_time", "'yes'" }
, { "header_unistd_h", "'yes'" }
, { "header_varargs_h", "'no'" }
, { "header_vfork_h", "'no'" }
, { "host_alias", "'i686-pc-linux-gnu'" }
, { "host", "'i686-pc-linux-gnu'" }
, { "ipv6type", "'linux-glibc'" }
, { "langinfo_codeset", "'yes'" }
, { "lib_dir_opendir", "'no'" }
, { "lib_inet_main", "'no'" }
, { "library_path_gnutls", "''" }
, { "library_path_iconv", "''" }
, { "library_path_intl", "''" }
, { "library_path_z", "''" }
, { "locale", "'yes'" }
, { "ncurses_broken", "'no'" }
, { "ncurses_header", "'curses.h'" }
, { "ncurses_version", "'5.7.20090207'" }
, { "need_xopen_extension", "'no'" }
, { "netlibs", "''" }
, { "ngroups", "'yes'" }
, { "objext", "'o'" }
, { "path_BZIP2", "'/bin/bzip2'" }
, { "path_COMPRESS", "'/usr/bin/compress'" }
, { "path_GMSGFMT", "'/usr/bin/msgfmt'" }
, { "path_GZIP", "'/bin/gzip'" }
, { "path_install", "'/usr/bin/install -c'" }
, { "path_INSTALL", "'/usr/bin/install -c'" }
, { "path_lastlog", "'_PATH_LASTLOG'" }
, { "path_MSGFMT", "'/usr/bin/msgfmt'" }
, { "path_MV", "'/bin/mv'" }
, { "path_NCURSES_CONFIG", "'/usr/bin/ncursesw5-config'" }
, { "path_PKG_CONFIG", "'/usr/bin/pkg-config'" }
, { "path_RLOGIN", "'/usr/bin/rlogin'" }
, { "path_RM", "'/bin/rm'" }
, { "path_TAR", "'/bin/tar'" }
, { "path_TELNET", "'/usr/bin/telnet'" }
, { "path_UNCOMPRESS", "'/bin/gunzip'" }
, { "path_UNZIP", "'/usr/bin/unzip'" }
, { "path_UUDECODE", "'/usr/bin/uudecode'" }
, { "path_XGETTEXT", "'/usr/bin/xgettext'" }
, { "path_ZCAT", "'/bin/zcat'" }
, { "path_ZIP", "'/usr/bin/zip'" }
, { "prog_ac_ct_AR", "'ar'" }
, { "prog_ac_ct_CC", "'gcc'" }
, { "prog_ac_ct_RANLIB", "'ranlib'" }
, { "prog_cc_g", "'yes'" }
, { "prog_cc_stdc", "''" }
, { "prog_CPP", "'gcc -E'" }
, { "prog_make_make_set", "'yes'" }
, { "proto_iconv_arg1", "''" }
, { "proto_iconv_const", "'no'" }
, { "rand_max", "'INT_MAX'" }
, { "screen", "'ncursesw'" }
, { "set_errno", "'yes'" }
, { "sizechange", "'yes'" }
, { "sizeof_int", "'4'" }
, { "sizeof_long", "'4'" }
, { "sizeof_off_t", "'8'" }
, { "sizeof_time_t", "'4'" }
, { "srand_func", "'srandom/random'" }
, { "struct_dirent64", "'no'" }
, { "subst_AR_OPTS", "'rv'" }
, { "sys_file_offset_bits", "'64'" }
, { "sys_largefile_CC", "'no'" }
, { "sys_large_files", "'no'" }
, { "sys_largefile_source", "'no'" }
, { "system_mail_flags", "'-t -oi'" }
, { "SYSTEM_MAIL", "'/usr/sbin/sendmail'" }
, { "system_name", "'linux-gnu'" }
, { "sysv_utmp", "'yes'" }
, { "target_alias", "'i686-pc-linux-gnu'" }
, { "target", "'i686-pc-linux-gnu'" }
, { "term_header", "'term.h'" }
, { "termio_and_curses", "'yes'" }
, { "termio_and_termios", "'yes'" }
, { "tm_gmtoff", "'yes'" }
, { "type_getgroups", "'gid_t'" }
, { "type_int", "'yes'" }
, { "type_long", "'yes'" }
, { "type_mode_t", "'yes'" }
, { "type_off_t", "'yes'" }
, { "type_pid_t", "'yes'" }
, { "type_size_t", "'yes'" }
, { "type_socklen_t", "'yes'" }
, { "type_time_t", "'yes'" }
, { "type_uid_t", "'yes'" }
, { "type_unionwait", "'no'" }
, { "use_gnu_gettext", "'no'" }
, { "use_libgnutls", "'/usr'" }
, { "use_libnss_compat", "'no'" }
, { "use_libsocks5", "'no'" }
, { "use_libsocks", "'no'" }
, { "use_libssl", "'no'" }
, { "utf8_lib", "'yes'" }
, { "val_LC_MESSAGES", "'yes'" }
, { "widec_curses", "'yes'" }
, { "widec_mbstate", "'no'" }
, { "working_alloca_h", "'yes'" }
 };
  static struct {
     char *name;
     char *value;
  } config_defines[184] = { { "ALT_CHAR_SET", "acs_map" }
, { "ANSI_VARARGS", "1" }
, { "BZIP2_PATH", "\"/bin/bzip2\"" }
, { "CAN_SET_ERRNO", "1" }
, { "CJK_EX", "1" }
, { "COLOR_CURSES", "1" }
, { "COMPRESS_PATH", "\"/usr/bin/compress\"" }
, { "DIRED_SUPPORT", "1" }
, { "DISP_PARTIAL", "1" }
, { "DONT_TRACK_INTERNAL_LINKS", "1" }
, { "ENABLE_IPV6", "1" }
, { "ENABLE_NLS", "1" }
, { "EXEC_LINKS", "1" }
, { "EXEC_SCRIPTS", "1" }
, { "EXP_ALT_BINDINGS", "1" }
, { "EXP_JAPANESEUTF8_SUPPORT", "1" }
, { "EXP_JUSTIFY_ELTS", "1" }
, { "EXP_NESTED_TABLES", "1" }
, { "FANCY_CURSES", "1" }
, { "GETGROUPS_T", "gid_t" }
, { "GZIP_PATH", "\"/bin/gzip\"" }
, { "HAVE_ALLOCA", "1" }
, { "HAVE_ALLOCA_H", "1" }
, { "HAVE___ARGZ_COUNT", "1" }
, { "HAVE_ARGZ_H", "1" }
, { "HAVE___ARGZ_NEXT", "1" }
, { "HAVE___ARGZ_STRINGIFY", "1" }
, { "HAVE_ARPA_INET_H", "1" }
, { "HAVE_ASSUME_DEFAULT_COLORS", "1" }
, { "HAVE_CBREAK", "1" }
, { "HAVE_CTERMID", "1" }
, { "HAVE_CURSES_VERSION", "1" }
, { "HAVE_CUSERID", "1" }
, { "HAVE_DCGETTEXT", "1" }
, { "HAVE_DEFINE_KEY", "1" }
, { "HAVE_DELSCREEN", "1" }
, { "HAVE_DIRENT_H", "1" }
, { "HAVE_FCNTL_H", "1" }
, { "HAVE_FTIME", "1" }
, { "HAVE_GAI_STRERROR", "1" }
, { "HAVE_GETADDRINFO", "1" }
, { "HAVE_GETATTRS", "1" }
, { "HAVE_GETBEGX", "1" }
, { "HAVE_GETBEGY", "1" }
, { "HAVE_GETBKGD", "1" }
, { "HAVE_GETCWD", "1" }
, { "HAVE_GETGROUPS", "1" }
, { "HAVE_GETTEXT", "1" }
, { "HAVE_GETTIMEOFDAY", "1" }
, { "HAVE_GETUID", "1" }
, { "HAVE_ICONV", "1" }
, { "HAVE_INET_ATON", "1" }
, { "HAVE_INTTYPES_H", "1" }
, { "HAVE_KEYPAD", "1" }
, { "HAVE_LANGINFO_CODESET", "1" }
, { "HAVE_LC_MESSAGES", "1" }
, { "HAVE_LIBINTL_H", "1" }
, { "HAVE_LIMITS_H", "1" }
, { "HAVE_LOCALE_H", "1" }
, { "HAVE_LSTAT", "1" }
, { "HAVE_LYHELP_H", "1" }
, { "HAVE_MALLOC_H", "1" }
, { "HAVE_MBSTATE_T", "1" }
, { "HAVE_MKDTEMP", "1" }
, { "HAVE_MKTEMP", "1" }
, { "HAVE_MMAP", "1" }
, { "HAVE_MUNMAP", "1" }
, { "HAVE_NAPMS", "1" }
, { "HAVE__NC_FREEALL", "1" }
, { "HAVE__NC_FREE_AND_EXIT", "1" }
, { "HAVE_NCURSESW_TERM_H", "1" }
, { "HAVE_NEWPAD", "1" }
, { "HAVE_NEWTERM", "1" }
, { "HAVE_NL_TYPES_H", "1" }
, { "HAVE_PNOUTREFRESH", "1" }
, { "HAVE_POPEN", "1" }
, { "HAVE_PUTENV", "1" }
, { "HAVE_READDIR", "1" }
, { "HAVE_RESIZETERM", "1" }
, { "HAVE_SETENV", "1" }
, { "HAVE_SETLOCALE", "1" }
, { "HAVE_SETUID", "1" }
, { "HAVE_SIGACTION", "1" }
, { "HAVE_SIZECHANGE", "1" }
, { "HAVE_STDARG_H", "1" }
, { "HAVE_STDLIB_H", "1" }
, { "HAVE_STPCPY", "1" }
, { "HAVE_STRCASECMP", "1" }
, { "HAVE_STRCHR", "1" }
, { "HAVE_STRERROR", "1" }
, { "HAVE_STRING_H", "1" }
, { "HAVE_SYS_FCNTL_H", "1" }
, { "HAVE_SYS_IOCTL_H", "1" }
, { "HAVE_SYSLOG_H", "1" }
, { "HAVE_SYS_PARAM_H", "1" }
, { "HAVE_SYS_TIMEB_H", "1" }
, { "HAVE_SYS_WAIT_H", "1" }
, { "HAVE_TERM_H", "1" }
, { "HAVE_TERMIO_H", "1" }
, { "HAVE_TERMIOS_H", "1" }
, { "HAVE_TOUCHLINE", "1" }
, { "HAVE_TOUCHWIN", "1" }
, { "HAVE_TRUNCATE", "1" }
, { "HAVE_TTYNAME", "1" }
, { "HAVE_TTYTYPE", "1" }
, { "HAVE_UNISTD_H", "1" }
, { "HAVE_UNSETENV", "1" }
, { "HAVE_USE_DEFAULT_COLORS", "1" }
, { "HAVE_USE_LEGACY_CODING", "1" }
, { "HAVE_USLEEP", "1" }
, { "HAVE_UTMP", "1" }
, { "HAVE_UTMP_UT_HOST", "1" }
, { "HAVE_UTMP_UT_SESSION", "1" }
, { "HAVE_UTMP_UT_XSTATUS", "1" }
, { "HAVE_UTMP_UT_XTIME", "1" }
, { "HAVE_VASPRINTF", "1" }
, { "HAVE_WAITPID", "1" }
, { "HAVE_WATTR_GET", "1" }
, { "HAVE_WBORDER", "1" }
, { "HAVE_WREDRAWLN", "1" }
, { "HAVE_WRESIZE", "1" }
, { "ICONV_CONST", "" }
, { "INSTALL_ARGS", "\"-c\"" }
, { "INSTALL_PATH", "\"/usr/bin/install\"" }
, { "LOCALE", "1" }
, { "LONG_LIST", "1" }
, { "lstat", "stat" }
, { "LYNX_CFG_FILE", "\"/etc/lynx-cur/lynx.cfg\"" }
, { "LYNX_CFG_H", "1" }
, { "LYNXCGI_LINKS", "1" }
, { "LYNX_LSS_FILE", "\"/etc/lynx-cur/lynx.lss\"" }
, { "LYNX_RAND_MAX", "INT_MAX" }
, { "lynx_rand", "random" }
, { "lynx_srand", "srandom" }
, { "MIME_LIBDIR", "\"/etc/\"" }
, { "MV_PATH", "\"/bin/mv\"" }
, { "NCURSES", "1" }
, { "NSL_FORK", "1" }
, { "OK_GZIP", "1" }
, { "OK_OVERRIDE", "1" }
, { "OK_PERMIT", "1" }
, { "OK_TAR", "1" }
, { "OK_UUDECODE", "1" }
, { "OK_ZIP", "1" }
, { "RLOGIN_PATH", "\"/usr/bin/rlogin\"" }
, { "RM_PATH", "\"/bin/rm\"" }
, { "SIZEOF_INT", "4" }
, { "SIZEOF_LONG", "4" }
, { "SIZEOF_OFF_T", "8" }
, { "SIZEOF_TIME_T", "4" }
, { "STDC_HEADERS", "1" }
, { "SYSLOG_REQUESTED_URLS", "1" }
, { "SYSTEM_MAIL_FLAGS", "\"-t -oi\"" }
, { "SYSTEM_MAIL", "\"/usr/sbin/sendmail\"" }
, { "SYSTEM_NAME", "\"linux-gnu\"" }
, { "TAR_DOWN_OPTIONS", "\"-xf\"" }
, { "TAR_FILE_OPTIONS", "\"\"" }
, { "TAR_PATH", "\"/bin/tar\"" }
, { "TAR_PIPE_OPTIONS", "\"-\"" }
, { "TAR_UP_OPTIONS", "\"-cf\"" }
, { "TELNET_PATH", "\"/usr/bin/telnet\"" }
, { "TERMIO_AND_CURSES", "1" }
, { "UNCOMPRESS_PATH", "\"/bin/gunzip\"" }
, { "UNDERLINE_LINKS", "0" }
, { "UNIX", "1" }
, { "UNZIP_PATH", "\"/usr/bin/unzip\"" }
, { "USE_COLOR_STYLE", "1" }
, { "USE_DEFAULT_COLORS", "1" }
, { "USE_EXTERNALS", "1" }
, { "USE_FILE_UPLOAD", "1" }
, { "USE_GNUTLS_FUNCS", "1" }
, { "USE_LOCALE_CHARSET", "1" }
, { "USE_PERSISTENT_COOKIES", "1" }
, { "USE_PRETTYSRC", "1" }
, { "USE_READPROGRESS", "1" }
, { "USE_SCROLLBAR", "1" }
, { "USE_SOURCE_CACHE", "1" }
, { "USE_SYSV_UTMP", "1" }
, { "USE_ZLIB", "1" }
, { "ut_xstatus", "ut_exit.e_exit" }
, { "UUDECODE_PATH", "\"/usr/bin/uudecode\"" }
, { "WIDEC_CURSES", "1" }
, { "ZCAT_PATH", "\"/bin/zcat\"" }
, { "ZIP_PATH", "\"/usr/bin/zip\"" }
 };
  unsigned int n;
  DocAddress WWWDoc;
  FILE *fp0;
  if ( LYforce_no_cache && reloading )
  {
    if ( configinfo_url )
    {
      free( configinfo_url );
      configinfo_url = 0;
    }
  }
  else
  if ( configinfo_url && !( LYCanReadFile( tempfile ) & 255 ) && configinfo_url )
  {
    free( configinfo_url );
    configinfo_url = 0;
  }
  if ( configinfo_url == 0 )
  {
    fp0 = InternalPageFP( tempfile, 1 );
    if ( fp0 == 0 )
    {
      return 0;
    }
    LYLocalFileToURL( &configinfo_url, tempfile );
    BeginInternalPage( fp0, gettext( "Configuration Definitions" ), 0 );
    fwrite( "&lt;pre&gt;\n", 1, 6, fp0 );
    fprintf( fp0, "\n%s&lt;br&gt;\n&lt;em&gt;config.cache&lt;/em&gt;\n", gettext( "The following data were derived during the automatic configuration/build\nprocess of this copy of Lynx.  When reporting a bug, please include a copy\nof this page." ) );
    n = 0;
    for ( ; n <= 281; n++ )
    {
      fprintf( fp0, "%-35s %s\n", config_cache[ n ].name, config_cache[ n ].value );
      // n++;
    }
    fprintf( fp0, "\n%s&lt;br&gt;\n&lt;em&gt;lynx_cfg.h&lt;/em&gt;\n", gettext( "The following data were used as automatically-configured compile-time\ndefinitions when this copy of Lynx was built." ) );
    n = 0;
    for ( ; n <= 183; n++ )
    {
      fprintf( fp0, "%-35s %s\n", config_defines[ n ].name, config_defines[ n ].value );
      // n++;
    }
    fwrite( "&lt;/pre&gt;\n", 1, 7, fp0 );
    EndInternalPage( fp0 );
    LYCloseTempFP( fp0 );
    LYRegisterUIPage( configinfo_url, 12 );
  }
  HTSACopy( &newdoc->address, configinfo_url );
  WWWDoc.address = &newdoc->address;
  WWWDoc.post_data = &newdoc->post_data;
  WWWDoc.post_content_type = &newdoc->post_content_type;
  WWWDoc.bookmark = &newdoc->bookmark;
  WWWDoc.isHEAD = newdoc->isHEAD;
  WWWDoc.safe = newdoc->safe;
  if ( ( HTLoadAbsolute( &WWWDoc ) & 255 ) == 0 )
  {
    return 0;
  }
  lynx_edit_mode = 0;
  return 1;
}
#if 0
#endif
