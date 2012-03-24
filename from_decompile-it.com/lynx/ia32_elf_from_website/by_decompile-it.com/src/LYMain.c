#include "LYMain.c.h"
static char *lynx_version_putenv_command;
char *list_format;
char *syslog_txt;
BOOLEAN syslog_requested_urls;
BOOLEAN lynx_edit_mode;
BOOLEAN no_dired_support;
HTList *tagged;
int LYAutoUncacheDirLists;
int dir_list_order;
int dir_list_style;
BOOLEAN prev_lynx_edit_mode;
BOOLEAN no_change_exec_perms;
int HTCacheSize;
BOOLEAN local_exec;
BOOLEAN local_exec_on_local_files;
char *LYCgiDocumentRoot;
BOOLEAN enable_scrollback;
char empty_string[1];
int display_lines;
int www_search_result;
lynx_list_item_type *printers;
lynx_list_item_type *downloaders;
lynx_list_item_type *externals;
lynx_list_item_type *uploaders;
int LYShowColor;
int LYrcShowColor;
BOOLEAN LYUseFormsOptions;
BOOLEAN LYJumpFileURL;
BOOLEAN LYPermitURL;
BOOLEAN LYRestricted;
BOOLEAN LYShowCursor;
BOOLEAN LYUnderlineLinks;
BOOLEAN LYUseDefShoCur;
BOOLEAN LYUserSpecifiedURL;
BOOLEAN LYValidate;
BOOLEAN LYforce_no_cache;
BOOLEAN LYinternal_flag;
BOOLEAN LYoverride_no_cache;
BOOLEAN LYresubmit_posts;
BOOLEAN LYtrimInputFields;
BOOLEAN LYxhtml_parsing;
BOOLEAN bold_H1;
BOOLEAN bold_headers;
BOOLEAN bold_name_anchors;
BOOLEAN case_sensitive;
BOOLEAN check_mail;
BOOLEAN child_lynx;
BOOLEAN dump_links_only;
BOOLEAN dump_output_immediately;
BOOLEAN dump_to_stderr;
BOOLEAN emacs_keys;
BOOLEAN error_logging;
BOOLEAN goto_buffer;
BOOLEAN historical_comments;
BOOLEAN is_www_index;
BOOLEAN jump_buffer;
BOOLEAN lynx_mode;
BOOLEAN minimal_comments;
BOOLEAN number_fields_on_left;
BOOLEAN number_links_on_left;
BOOLEAN recent_sizechange;
BOOLEAN soft_dquotes;
BOOLEAN use_underscore;
BOOLEAN verbose_img;
BOOLEAN vi_keys;
int keypad_mode;
int user_mode;
BOOLEAN telnet_ok;
BOOLEAN news_ok;
BOOLEAN rlogin_ok;
BOOLEAN long_url_ok;
BOOLEAN ftp_ok;
BOOLEAN system_editor;
BOOLEAN had_restrictions_default;
BOOLEAN had_restrictions_all;
BOOLEAN exec_frozen;
BOOLEAN no_bookmark;
BOOLEAN no_bookmark_exec;
BOOLEAN no_chdir;
BOOLEAN no_disk_save;
BOOLEAN no_dotfiles;
BOOLEAN no_download;
BOOLEAN no_editor;
BOOLEAN no_exec;
BOOLEAN no_file_url;
BOOLEAN no_goto;
BOOLEAN no_goto_configinfo;
BOOLEAN no_goto_cso;
BOOLEAN no_goto_file;
BOOLEAN no_goto_finger;
BOOLEAN no_goto_ftp;
BOOLEAN no_goto_gopher;
BOOLEAN no_goto_http;
BOOLEAN no_goto_https;
BOOLEAN no_goto_lynxcgi;
BOOLEAN no_goto_lynxexec;
BOOLEAN no_goto_lynxprog;
BOOLEAN no_goto_mailto;
BOOLEAN no_goto_rlogin;
BOOLEAN no_goto_telnet;
BOOLEAN no_goto_tn3270;
BOOLEAN no_goto_wais;
BOOLEAN no_inside_ftp;
BOOLEAN no_inside_rlogin;
BOOLEAN no_inside_telnet;
BOOLEAN no_jump;
BOOLEAN no_lynxcfg_info;
BOOLEAN no_lynxcgi;
BOOLEAN no_mail;
BOOLEAN no_multibook;
BOOLEAN no_option_save;
BOOLEAN no_outside_ftp;
BOOLEAN no_outside_rlogin;
BOOLEAN no_outside_telnet;
BOOLEAN no_print;
BOOLEAN no_shell;
BOOLEAN no_suspend;
BOOLEAN no_telnet_port;
BOOLEAN no_useragent;
BOOLEAN ftp_passive;
BOOLEAN ftp_local_passive;
HTList *broken_ftp_epsv;
HTList *broken_ftp_retr;
char *ftp_lasthost;
BOOLEAN no_goto_news;
BOOLEAN no_goto_nntp;
BOOLEAN no_goto_snews;
BOOLEAN no_inside_news;
BOOLEAN no_newspost;
BOOLEAN no_outside_news;
BOOLEAN no_externals;
BOOLEAN no_lynxcfg_xinfo;
BOOLEAN no_compileopts_info;
BOOLEAN no_statusline;
BOOLEAN no_filereferer;
char LYRefererWithQuery;
BOOLEAN local_host_only;
BOOLEAN override_no_download;
BOOLEAN show_dotfiles;
BOOLEAN LYforce_HTML_mode;
BOOLEAN LYfind_leaks;
BOOLEAN no_table_center;
BOOLEAN HEAD_request;
BOOLEAN LYAcceptAllCookies;
BOOLEAN LYCancelledFetch;
BOOLEAN LYCollapseBRs;
BOOLEAN LYDefaultRawMode;
BOOLEAN LYListNewsDates;
BOOLEAN LYListNewsNumbers;
BOOLEAN LYMBMBlocked;
BOOLEAN LYNewsPosting;
BOOLEAN LYNoFromHeader;
BOOLEAN LYNoRefererForThis;
BOOLEAN LYNoRefererHeader;
BOOLEAN LYRawMode;
BOOLEAN LYSelectPopups;
BOOLEAN LYSetCookies;
BOOLEAN LYUseDefSelPop;
BOOLEAN LYUseDefaultRawMode;
BOOLEAN LYUseMouse;
BOOLEAN LYisConfiguredForX;
BOOLEAN UCForce8bitTOUPPER;
BOOLEAN UCSaveBookmarksInUnicode;
BOOLEAN bookmark_start;
BOOLEAN check_realm;
BOOLEAN clickable_images;
BOOLEAN crawl;
BOOLEAN keep_mime_headers;
BOOLEAN more_text;
BOOLEAN more_links;
BOOLEAN no_list;
BOOLEAN no_margins;
BOOLEAN no_title;
BOOLEAN no_url_redirection;
BOOLEAN pseudo_inline_alts;
BOOLEAN scan_for_buried_news_references;
BOOLEAN startfile_ok;
static BOOLEAN startfile_stdin;
BOOLEAN traversal;
char *BookmarkPage;
char *LYCookieAcceptDomains;
char *LYCookieLooseCheckDomains;
char *LYCookieQueryCheckDomains;
char *LYCookieRejectDomains;
char *LYCookieSAcceptDomains;
char *LYCookieSLooseCheckDomains;
char *LYCookieSQueryCheckDomains;
char *LYCookieSRejectDomains;
char *LYCookieSStrictCheckDomains;
char *LYCookieStrictCheckDomains;
char *LYHostName;
char *LYLocalDomain;
char *LYUserAgent;
char *LYUserAgentDefault;
char *LynxHome;
char *LynxSigFile;
char *UCAssume_MIMEcharset;
char *URLDomainPrefixes;
char *URLDomainSuffixes;
char *anonftp_password;
char *authentication_info[2];
char *bookmark_page;
char *editor;
char *form_get_data;
char *form_post_data;
char *global_extension_map;
char *global_type_map;
char *helpfile;
char *helpfilepath;
char *homepage;
char *http_error_file;
char *indexfile;
char *jumpfile;
char *jumpprompt;
char *language;
char *lynx_cfg_file;
char *lynx_cmd_logfile;
char *lynx_cmd_script;
char *lynx_save_space;
char *lynx_temp_space;
char *lynxjumpfile;
char *lynxlinksfile;
char *lynxlistfile;
char *original_dir;
char *personal_extension_map;
char *personal_mail_address;
char *personal_type_map;
char *pref_charset;
char *proxyauth_info[2];
char *startfile;
char *startrealm;
char *system_mail;
char *system_mail_flags;
char *x_display;
HistInfo *history;
int nhist;
int size_history;
LinkInfo links[1024];
BOOLEAN nomore;
int AlertSecs;
int DebugSecs;
int InfoSecs;
int LYMultiBookmarks;
int LYStatusLine;
int LYcols;
int LYlines;
int MessageSecs;
int ReplaySecs;
int crawl_count;
int dump_output_width;
int dump_server_status;
int lynx_temp_subspace;
int max_cookies_domain;
int max_cookies_global;
int max_cookies_buffer;
int nlinks;
int outgoing_mail_charset;
BOOLEAN BibP_bibhost_available;
BOOLEAN BibP_bibhost_checked;
BOOLEAN no_goto_bibp;
char *BibP_bibhost;
char *BibP_globalserver;
BOOLEAN persistent_cookies;
char *LYCookieFile;
char *LYCookieSaveFile;
BOOLEAN nested_tables;
BOOLEAN LYShowTransferRate;
int LYTransferRate;
int LYAcceptEncoding;
int LYAcceptMedia;
char *LYTransferName;
char *XLoadImageCommand;
BOOLEAN LYNoISMAPifUSEMAP;
int LYHiddenLinks;
char *SSL_cert_file;
int Old_DTD;
static BOOLEAN DTD_recovery;
FILE *LYTraceLogFP;
char *LYTraceLogPath;
BOOLEAN LYUseTraceLog;
BOOLEAN LYSeekFragMAPinCur;
BOOLEAN LYSeekFragAREAinCur;
BOOLEAN LYStripDotDotURLs;
BOOLEAN LYForceSSLCookiesSecure;
BOOLEAN LYNoCc;
BOOLEAN LYPreparsedSource;
BOOLEAN LYPrependBaseToSource;
BOOLEAN LYPrependCharsetToSource;
BOOLEAN LYQuitDefaultYes;
BOOLEAN dont_wrap_pre;
int cookie_noprompt;
int connect_timeout;
int reading_timeout;
BOOLEAN ok_justify;
int justify_max_void_percent;
BOOLEAN LYLocaleCharset;
BOOLEAN with_backspaces;
BOOLEAN force_empty_hrefless_a;
BOOLEAN textfields_need_activation;
BOOLEAN textfields_activation_option;
BOOLEAN textfield_prompt_at_left_edge;
char *hidden_link_marker;
BOOLEAN display_partial_flag;
BOOLEAN debug_display_partial;
int partial_threshold;
BOOLEAN LYNonRestartingSIGWINCH;
BOOLEAN LYReuseTempfiles;
BOOLEAN LYUseBuiltinSuffixes;
BOOLEAN FileInitAlreadyDone;
static BOOLEAN stack_dump;
static char *terminal;
static char *pgm;
static BOOLEAN no_numbers;
static BOOLEAN number_links;
static BOOLEAN number_fields;
static BOOLEAN LYPrependBase;
static HTList *LYStdinArgs;
HTList *positionable_editor;
static char *nonoption;
BOOLEAN LYNoCore;
BOOLEAN restore_sigpipe_for_children;
char *lynx_lss_file2;
char *lynx_lss_file;
BOOLEAN LYuse_default_colors;
static Config_Type Arg_Table[136];
void LYStdinArgs_free( void )
{
  LYFreeStringList( LYStdinArgs );
  LYStdinArgs = 0;
  return;
}
void reset_signals( void )
{
  signal( 1, 0 );
  signal( 15, 0 );
  signal( 2, 0 );
  if ( no_suspend )
  {
    signal( 20, 0 );
  }
  return;
}
void exit_immediately( int code )
{
  reset_signals( );
  LYexit( code );
  return;
}
BOOLEAN GetStdin( char **buf, BOOLEAN marker )
{
  if ( LYSafeGets( buf, stdin ) && ( marker == 0 || strncmp( buf[0], "---", 3 ) ) )
  {
    LYTrimTrailing( buf[0] );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "...data: %s\n", buf[0] );
    }
  }
  else
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "...mark: %s\n", "" );
    }
  }
  return 0;
}
void SetLocale( void )
{
  setlocale( 6, "" );
{
  char *cp = LYGetEnv( "LYNX_LOCALEDIR" );
  if ( cp == 0 )
    cp = "/usr/share/locale";
  bindtextdomain( "lynx", cp );
  textdomain( "lynx" );
  return;
}
}
int main( int argc, char **argv )
{
  int eax;
  int i;
  int status;
  char *temp;
  char *cp;
  FILE *fp;
  struct stat dir_info;
  char filename[256];
  BOOLEAN LYGetStdinArgs;
  argv = argc;
  status = 0;
  temp = 0;
  LYGetStdinArgs = 0;
  ftp_lasthost = calloc( 1, sizeof( char ) );
  LYShowColor = 2;
  pgm = argv[0];
  cp = 0;
  cp = LYLastPathSep( pgm );
  if ( cp )
    pgm = &cp[1];
  if ( LYGetEnv( "LYNX_TRACE" ) )
    WWW_TraceFlag = 1;
  cp = LYGetEnv( "LYNX_TRACE_FILE" );
  if ( cp == 0 )
    cp = "Lynx.trace";
  LYTraceLogPath = (char*)malloc( 256 );
  LYAddPathToHome( LYTraceLogPath, 256, cp );
  i = 1;
  for ( ; i < argc; i++ )
  {
    parse_arg( &argv[ i ], 1, &i );
    // i++;
  }
  LYOpenTraceLog( );
  SetLocale( );
  memset( links[0].lname, 0, 0x11000 );
  LYAllocHistory( 8 );
  memset( MBM_A_subbookmark[0], 0, 26 );
  memset( MBM_A_subdescript[0], 0, 26 );
  HTSACopy( &list_format, "    %p %4l %-8.8o %-8.8g %7s %-12.12d %a" );
  AlertSecs = 3000;
  DebugSecs = 0;
  InfoSecs = 1000;
  MessageSecs = 2000;
  ReplaySecs = 0;
  HTSACopy( &LYTransferName, "KiB" );
  HTSACopy( &helpfile, "http://lynx.isc.org/release/lynx2-8-6/lynx_help/lynx_help_main.html" );
  HTSACopy( &startfile, "http://lynx.isc.org/" );
  LYEscapeStartfile( &startfile );
  HTSACopy( &indexfile, "http://www.ncsa.uiuc.edu/SDG/Software/Mosaic/MetaIndex.html" );
  HTSACopy( &global_type_map, "/etc/mailcap" );
  HTSACopy( &personal_type_map, "~/.mailcap" );
  HTSACopy( &global_extension_map, "/etc/mime.types" );
  HTSACopy( &personal_extension_map, "~/.mime.types" );
  HTSACopy( &language, "en" );
  HTSACopy( &pref_charset, "" );
  HTSACopy( &system_mail, "/usr/sbin/sendmail" );
  HTSACopy( &system_mail_flags, "-t -oi" );
  HTSACopy( &LYUserAgent, "Lynx" );
  HTSACat( &LYUserAgent, "/" );
  HTSACat( &LYUserAgent, "2.8.7dev.11" );
  if ( HTLibraryVersion )
  {
    HTSACat( &LYUserAgent, " libwww-FM/" );
    HTSACat( &LYUserAgent, HTLibraryVersion );
  }
  HTSACopy( &LYUserAgentDefault, LYUserAgent );
  HTSACopy( &lynx_version_putenv_command, "LYNX_VERSION=" );
  HTSACat( &lynx_version_putenv_command, "2.8.7dev.11" );
  putenv( lynx_version_putenv_command );
  cp = LYGetEnv( "LYNX_TEMP_SPACE" );
  if ( cp )
    HTSACopy( &lynx_temp_space, cp );
  else
  {
    cp = LYGetEnv( "TMPDIR" );
    if ( cp )
      HTSACopy( &lynx_temp_space, cp );
    else
      HTSACopy( &lynx_temp_space, "/tmp/" );
  }
  LYTildeExpand( &lynx_temp_space, 1 );
  cp = strstr( lynx_temp_space, "$USER" );
  if ( cp )
  {
    char *cp1 = LYGetEnv( "USER" );
    if ( cp1 )
    {
      cp[0] = 0;
      HTSACopy( &temp, lynx_temp_space );
      cp[0] = '$';
      HTSACat( &temp, cp1 );
      cp += 5;
      HTSACat( &temp, cp );
      HTSACopy( &lynx_temp_space, temp );
      if ( temp )
      {
        free( temp );
        temp = 0;
      }
    }
  }
  LYAddPathSep( &lynx_temp_space );
  HTSACopy( &lynx_temp_space, lynx_temp_space );
  if ( ( HTStat( lynx_temp_space, &dir_info ) < 0 && mkdir( lynx_temp_space, 448 ) < 0 ) || ( dir_info.st_mode & 61440 ) != 16384 )
  {
    fprintf( stderr, "%s: %s\n", lynx_temp_space, gettext( "No such directory" ) );
    exit_immediately( 1 );
  }
  HTSACopy( &LYHostName, HTHostName( ) );
  HTSACopy( &LYLocalDomain, "ukans.edu" );
  HTSACopy( &URLDomainPrefixes, "www." );
  HTSACopy( &URLDomainSuffixes, ".com,.edu,.net,.org" );
  HTSACopy( &XLoadImageCommand, "xli %s &" );
  HTSACopy( &SSL_cert_file, 0 );
  HTSACopy( &BibP_globalserver, "http://usin.org/" );
  HTSACopy( &BibP_bibhost, "http://bibhost/" );
  no_newspost = LYNewsPosting == 0;
  i = 1;
  for ( ; i < argc; i++ )
  {
    parse_arg( &argv[ i ], 2, &i );
    // i++;
  }
  i = 1;
  for ( ; i < argc; i++ )
  {
    if ( strcmp( argv[ i ], "-" ) == 0 )
    {
      LYGetStdinArgs = 1;
      break;
    }
    else
    {
      // i++;
    }
  }
  if ( LYGetStdinArgs == 1 )
  {
    char *buf = 0;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "processing stdin arguments\n" );
    }
    while ( ( GetStdin( &buf, 1 ) & 255 ) == 0 )
    {
      char *noargv[2];
      noargv[0] = buf;
      noargv[1] = 0;
      LYTrimTrailing( buf );
      if ( !( parse_arg( noargv, 2, 0 ) & 255 ) && buf[0] )
      {
        char *argument = 0;
        if ( LYStdinArgs == 0 )
        {
          LYStdinArgs = HTList_new( );
        }
        HTSACopy( &argument, buf );
        HTList_appendObject( LYStdinArgs, (void*)argument );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "...StdinArg:%s\n", argument );
        }
      }
      else
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "...complete:%s\n", buf );
        }
      }
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "...done with stdin arguments\n" );
    }
    if ( buf )
    {
      free( buf );
    }
  }
  if ( LYValidate == 1 )
  {
    parse_restrictions( "all" );
    LYUseTraceLog = 0;
  }
  if ( lynx_cmd_script )
  {
    LYTildeExpand( &lynx_cmd_script, 1 );
    LYOpenCmdScript( );
  }
  if ( lynx_cmd_logfile )
  {
    LYTildeExpand( &lynx_cmd_logfile, 1 );
    LYOpenCmdLogfile( argc, argv );
  }
  HTSACopy( &jumpprompt, gettext( "Jump to (use '?' for list): " ) );
  if ( lynx_cfg_file == 0 )
  {
    cp = LYGetEnv( "LYNX_CFG" );
    if ( cp == 0 )
    {
      cp = LYGetEnv( "lynx_cfg" );
      if ( cp )
        goto B147;
    }
B147:;
    HTSACopy( &lynx_cfg_file, cp );
  }
  if ( lynx_cfg_file == 0 )
    HTSACopy( &lynx_cfg_file, "/etc/lynx-cur/lynx.cfg" );
  LYTildeExpand( &lynx_cfg_file, 0 );
  if ( ( LYCanReadFile( lynx_cfg_file ) & 255 ) == 0 )
  {
    fprintf( stderr, gettext( "\nConfiguration file \"%s\" is not available.\n\n" ), lynx_cfg_file );
    exit_immediately( 1 );
  }
  if ( LYCharSetsDeclared( ) == 0 )
  {
    fprintf( stderr, gettext( "\nLynx character sets not declared.\n\n" ) );
    exit_immediately( 1 );
  }
  current_char_set = safeUCGetLYhndl_byMIME( "iso-8859-1" );
  UCLYhndl_for_unspec = LATIN1;
  HTSACopy( &UCAssume_MIMEcharset, LYCharSet_UC[ UCLYhndl_for_unspec ].MIMEname );
  if ( LYEditmapDeclared( ) == 0 )
  {
    fprintf( stderr, gettext( "\nLynx edit map not declared.\n\n" ) );
    exit_immediately( 1 );
  }
  lynx_setup_colors( );
  if ( strcmp( Current_Dir( filename ), "." ) == 0 )
  {
    cp = LYGetEnv( "PWD" );
    if ( cp )
      HTSACopy( &original_dir, cp );
  }
  else
    HTSACopy( &original_dir, filename );
  LYstrncpy( filename, ".lynxsig", 255 );
  if ( LYPathOffHomeOK( filename, 256 ) & 255 )
  {
    HTSACopy( &LynxSigFile, filename );
    LYAddPathToHome( filename, 256, LynxSigFile );
    HTSACopy( &LynxSigFile, filename );
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
  HTSwitchDTD( 1 );
  read_cfg( lynx_cfg_file, "main program", 1, 0 );
  if ( lynx_lss_file2 )
  {
    if ( lynx_lss_file )
    {
      free( lynx_lss_file );
      lynx_lss_file = 0;
    }
    lynx_lss_file = lynx_lss_file2;
    lynx_lss_file2 = 0;
  }
  if ( lynx_lss_file == 0 )
  {
    cp = LYGetEnv( "LYNX_LSS" );
    if ( cp == 0 )
    {
      cp = LYGetEnv( "lynx_lss" );
      if ( cp )
        goto B203;
    }
B203:;
    HTSACopy( &lynx_lss_file, cp );
  }
  if ( lynx_lss_file == 0 )
    HTSACopy( &lynx_lss_file, "/etc/lynx-cur/lynx.lss" );
  LYTildeExpand( &lynx_lss_file, 1 );
  if ( lynx_lss_file && lynx_lss_file[0] && ( LYCanReadFile( lynx_lss_file ) & 255 ) == 0 )
  {
    fprintf( stderr, gettext( "\nLynx file \"%s\" is not available.\n\n" ), lynx_lss_file );
    exit_immediately( 1 );
  }
  else
    style_readFromFile( lynx_lss_file );
  read_rc( 0 );
  LYFindLocaleCharset( );
  cp = LYGetEnv( "WWW_HOME" );
  if ( cp )
  {
    HTSACopy( &startfile, cp );
    LYEscapeStartfile( &startfile );
  }
  HTSACopy( &LynxHome, startfile );
  LYEnsureAbsoluteURL( &LynxHome, "LynxHome", 0 );
  i = 1;
  for ( ; i < argc; i++ )
  {
    parse_arg( &argv[ i ], 4, &i );
    // i++;
  }
  if ( LYStdinArgs )
  {
    char *my_args[2];
    HTList *cur = LYStdinArgs;
    my_args[1] = 0;
    while ( 1 )
    {
      if ( cur )
      {
        cur = &cur->next;
        my_args[0] = 0;
        if ( my_args[0] == 0 )
          break;
        else
        {
          parse_arg( my_args, 4, 0 );
        }
      }
      my_args[0] = 0;
    }
    LYStdinArgs_free( );
  }
  if ( LYGetStdinArgs == 0 && startfile_stdin == 0 && isatty( fileno( stdin ) ) == 0 )
  {
    if ( isatty( 0 ) )
    {
      int ignored = 0;
      int ch;
      for ( ; ch != -1; ignored++ )
      {
        // ignored++;
      }
      if ( ignored )
      {
        fprintf( stderr, gettext( "Ignored %d characters from standard input.\n" ), ignored );
        fprintf( stderr, gettext( "Use \"-stdin\" or \"-\" to tell how to handle piped input.\n" ) );
      }
    }
  }
  if ( startfile_stdin )
  {
    char result[256];
    char *buf = 0;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "processing stdin startfile\n" );
    }
    fp = LYOpenTemp( result, ".html", "w" );
    if ( fp )
    {
      HTSACopy( &startfile, result );
      while ( ( GetStdin( &buf, 0 ) & 255 ) == 0 )
      {
        fputs( buf, fp );
        fputc( 10, fp );
      }
      if ( buf )
      {
        free( buf );
        buf = 0;
      }
      LYCloseTempFP( fp );
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "...done stdin startfile\n" );
    }
  }
  if ( Old_DTD )
    HTSwitchDTD( Old_DTD == 0 );
  HTMLUseCharacterSet( current_char_set );
  if ( persistent_cookies )
  {
    if ( LYCookieFile == 0 )
    {
      LYCookieFile = (char*)malloc( 256 );
      LYAddPathToHome( LYCookieFile, 256, ".lynx_cookies" );
    }
    else
      LYTildeExpand( &LYCookieFile, 0 );
    LYLoadCookies( LYCookieFile );
  }
  if ( LYCookieSaveFile )
    LYTildeExpand( &LYCookieSaveFile, 0 );
  if ( LYCookieSaveFile == 0 )
  {
    if ( dump_output_immediately )
      HTSACopy( &LYCookieSaveFile, "/dev/null" );
    else
      HTSACopy( &LYCookieSaveFile, LYCookieFile );
  }
  cp = LYGetEnv( "LYNX_HELPFILE" );
  if ( cp )
    HTSACopy( &helpfile, cp );
  HTSACopy( &helpfilepath, helpfile );
  cp = LYPathLeaf( helpfilepath );
  if ( helpfilepath != cp )
    cp[0] = 0;
  LYAddHtmlSep( &helpfilepath );
  cp = LYGetEnv( "LYNX_SAVE_SPACE" );
  if ( cp )
    HTSACopy( &lynx_save_space, cp );
  if ( lynx_save_space && !lynx_save_space[0] && lynx_save_space )
  {
    free( lynx_save_space );
    lynx_save_space = 0;
  }
  if ( lynx_save_space )
  {
    LYTildeExpand( &lynx_save_space, 1 );
    LYAddPathSep( &lynx_save_space );
  }
  HTFormatInit( );
  if ( FileInitAlreadyDone == 0 )
    HTFileInit( );
  if ( ( LYCheckUserAgent( ) & 255 ) == 0 )
  {
    HTAlwaysAlert( gettext( "Warning:" ), gettext( "User-Agent string does not contain \"Lynx\" or \"L_y_n_x\"" ) );
  }
  if ( LYPreparsedSource )
    HTPreparsedFormatInit( );
  if ( emacs_keys )
    set_emacs_keys( );
  if ( vi_keys )
    set_vi_keys( );
  if ( no_numbers )
  {
    number_links = 0;
    number_fields = 0;
    keypad_mode = 0;
    set_numbers_as_arrows( );
  }
  if ( crawl && number_links == 0 )
    keypad_mode = 0;
  if ( keypad_mode != 1 && keypad_mode != 2 )
  {
    if ( number_fields )
      keypad_mode = 2;
    if ( number_links )
      keypad_mode = 1;
    set_numbers_as_arrows( );
  }
  if ( LYUseDefSelPop == 0 )
    LYSelectPopups = LYSelectPopups == 0;
  if ( LYUseDefShoCur == 0 )
    LYShowCursor = LYShowCursor == 0;
  if ( LYPrependBase && HTOutputFormat == HTAtom_for( "www/download" ) )
    LYPrependBaseToSource = 1;
  if ( no_multibook )
    LYMBMBlocked = 1;
  if ( dump_output_immediately || LYMBMBlocked || no_multibook )
  {
    LYMultiBookmarks = 0;
    LYMBMBlocked = 1;
    no_multibook = 1;
  }
  if ( dump_output_immediately )
    LYCacheSource = 0;
  if ( dump_output_immediately )
    display_partial_flag = 0;
  if ( dump_output_immediately == 0 )
    signal( 1, &cleanup_sig );
  signal( 15, &cleanup_sig );
  LYExtSignal( 28, &size_change );
  if ( WWW_TraceFlag == 0 && dump_output_immediately == 0 && stack_dump == 0 )
  {
    signal( 2, &cleanup_sig );
    signal( 11, &FatalProblem );
    signal( 4, &FatalProblem );
    if ( signal( 13, 1 ) != 1 )
      restore_sigpipe_for_children = 1;
  }
  if ( no_suspend )
    signal( 20, 1 );
  if ( HEAD_request && LYCanDoHEAD( startfile ) != 1 )
  {
    fprintf( stderr, "The '-head' switch is for http HEAD requests and cannot be used for\n'%s'.\n", startfile );
    exit_immediately( 1 );
  }
  if ( keep_mime_headers && LYCanDoHEAD( startfile ) != 1 )
  {
    fprintf( stderr, "The '-mime_header' switch is for http URLs and cannot be used for\n'%s'.\n", startfile );
    exit_immediately( 1 );
  }
  if ( traversal && strncmp( startfile, "http", 4 ) )
  {
    fprintf( stderr, "The '-traversal' switch is for http URLs and cannot be used for\n'%s'.\n", startfile );
    exit_immediately( 1 );
  }
  if ( dump_output_immediately == 0 )
    HTMLSRC_init_caches( 0 );
  if ( dump_output_immediately == 0 )
    setup( terminal );
  LYEnsureAbsoluteURL( &startfile, "STARTFILE", 0 );
  if ( homepage )
    LYEnsureAbsoluteURL( &homepage, "HOMEPAGE", 0 );
  if ( homepage == 0 || homepage[0] == 0 )
    HTSACopy( &homepage, startfile );
  else
    HTSACopy( &LynxHome, homepage );
  if ( inlocaldomain( ) & 255 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYMain: User in Local domain\n" );
    }
    *(int*)&telnet_ok = 0;
    *(int*)&news_ok = 0;
    *(int*)&ftp_ok = 0;
    *(int*)&rlogin_ok = 0;
  }
  else
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYMain: User in REMOTE domain\n" );
    }
    *(int*)&telnet_ok = 0;
    *(int*)&news_ok = 0;
    *(int*)&ftp_ok = 0;
    *(int*)&rlogin_ok = 0;
  }
  LYSetConfigValue( "broken_ftp_retr", "ProFTPD 1.2.5" );
  LYSetConfigValue( "broken_ftp_retr", "spftp/" );
  LYSetConfigValue( "broken_ftp_epsv", "(Version wu-2.6.2-12)" );
  if ( bookmark_page == 0 || bookmark_page[0] == 0 )
  {
    temp = 0;
    HTSprintf0( &temp, "lynx_bookmarks%s", ".html" );
    set_default_bookmark_page( temp );
    if ( temp )
    {
      free( temp );
      temp = 0;
    }
  }
  if ( BookmarkPage == 0 || BookmarkPage[0] == 0 )
    set_default_bookmark_page( bookmark_page );
  LYOpenlog( syslog_txt );
  if ( x_display && x_display[0] )
    LYisConfiguredForX = 1;
  if ( dump_output_immediately )
  {
    if ( crawl && number_links == 0 && number_fields == 0 )
      keypad_mode = 0;
    else
    if ( no_numbers )
      keypad_mode = 0;
    else
    if ( !no_list && keypad_mode != 1 && keypad_mode != 2 )
    {
      if ( number_fields )
        keypad_mode = 2;
      else
        keypad_mode = 1;
    }
    if ( dump_output_width > 0 )
      LYcols = dump_output_width;
    HTAddGotoURL( startfile );
    i = HTList_count( Goto_URLs ) + -1;
    for ( ; i >= 0;  )
    {
      HTSACopy( &startfile, (char*)HTList_objectAt( Goto_URLs, i ) );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "dumping %d:%d %s\n", i + 1, HTList_count( Goto_URLs ), startfile );
      }
      status = mainloop( );
      if ( no_list == 0 && crawl == 0 )
        printlist( stdout, 0 );
      if ( i )
        putchar( 10 );
      i += -1;
    }
    if ( persistent_cookies )
      LYStoreCookies( LYCookieSaveFile );
    exit_immediately( status );
  }
  else
  {
    cache_tag_styles( );
    if ( with_backspaces )
      with_backspaces = 0;
    ena_csi( LYlowest_eightbit[ current_char_set ] > 155 );
    status = mainloop( );
    LYCloseCloset( 1 );
    LYCloseCloset( 3 );
    cleanup( );
    exit_immediately( status );
  }
  return status;
}
void LYRegisterLynxProtocols( void )
{
  HTRegisterProtocol( &LYLynxKeymap );
  HTRegisterProtocol( &LYLynxCGI );
  HTRegisterProtocol( &LYLynxIMGmap );
  HTRegisterProtocol( &LYLynxCookies );
  HTRegisterProtocol( &LYLynxStatusMessages );
  return;
}
void reload_read_cfg( void )
{
  char *tempfile;
  FILE *rcfp;
  if ( no_option_save == 0 )
  {
    tempfile = calloc( 256, sizeof( char ) );
    if ( tempfile == 0 )
    {
      HTAlwaysAlert( 0, gettext( "Not enough memory!" ) );
    }
    else
    {
      rcfp = LYOpenTemp( tempfile, ".rc", "w" );
      if ( rcfp == 0 )
      {
        if ( tempfile )
        {
          free( tempfile );
          tempfile = 0;
        }
        HTAlwaysAlert( 0, gettext( "Can't open temporary file!" ) );
      }
      else
      {
        if ( save_rc( rcfp ) == 0 )
        {
          HTAlwaysAlert( 0, gettext( "Unable to save Options!" ) );
          LYRemoveTemp( tempfile );
          if ( tempfile == 0 )
          {
            return;
          }
          free( tempfile );
          tempfile = 0;
        }
        else
        {
          BOOLEAN persistent_cookies_flag = persistent_cookies;
          char *LYCookieFile_flag = 0;
          char *LYCookieSaveFile_flag = 0;
          if ( persistent_cookies )
          {
            HTSACopy( &LYCookieFile_flag, LYCookieFile );
            HTSACopy( &LYCookieSaveFile_flag, LYCookieSaveFile );
          }
          html_src_on_lynxcfg_reload( );
          free_lynx_cfg( );
          source_cache_file_error = 0;
          read_cfg( lynx_cfg_file, "main program", 1, 0 );
          rcfp = fopen64( tempfile, "r" );
          read_rc( rcfp );
          LYRemoveTemp( tempfile );
          if ( tempfile )
          {
            free( tempfile );
            tempfile = 0;
          }
          LYSetDisplayLines( );
          if ( persistent_cookies_flag != persistent_cookies )
          {
            persistent_cookies = persistent_cookies_flag;
            HTAlert( gettext( "persistent cookies state will be changed in next session only." ) );
          }
          if ( persistent_cookies == 0 )
          {
            return;
          }
          if ( strcmp( LYCookieFile, LYCookieFile_flag ) )
          {
            HTSACopy( &LYCookieFile, LYCookieFile_flag );
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "cookie file can be changed in next session only, restored.\n" );
            }
          }
          if ( strcmp( LYCookieSaveFile, LYCookieSaveFile_flag ) )
          {
            HTSACopy( &LYCookieSaveFile, LYCookieSaveFile_flag );
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "cookie save file can be changed in next session only, restored.\n" );
            }
          }
          if ( LYCookieFile_flag )
          {
            free( LYCookieFile_flag );
            LYCookieFile_flag = 0;
          }
          if ( LYCookieSaveFile_flag == 0 )
          {
            return;
          }
          free( LYCookieSaveFile_flag );
        }
      }
    }
  }
  return;
}
void disable_pausing( void )
{
  AlertSecs = 0;
  DebugSecs = 0;
  InfoSecs = 0;
  MessageSecs = 0;
  ReplaySecs = 0;
  return;
}
void force_dump_mode( void )
{
  dump_output_immediately = 1;
  disable_pausing( );
  LYcols = 80;
  return;
}
int parse_authentication( char *next_arg, char **result )
{
  char *auth_info = 0;
  if ( next_arg )
  {
    HTSACopy( &auth_info, next_arg );
    memset( next_arg, 32, strlen( next_arg ) );
  }
  if ( auth_info )
  {
    char *cp = strchr( auth_info, ':' );
    if ( cp )
    {
      cp[0] = 0;
      cp++;
      HTUnEscape( cp );
      HTSACopy( &result[1], cp );
    }
    if ( auth_info[0] )
    {
      HTUnEscape( auth_info );
      HTSACopy( result, auth_info );
    }
    if ( auth_info )
    {
      free( auth_info );
      auth_info = 0;
    }
  }
  return 0;
}
int anonymous_fun( char *next_arg )
{
  if ( LYValidate == 0 && LYRestricted == 0 )
  {
    parse_restrictions( "default" );
  }
  LYRestricted = 1;
  return 0;
}
int assume_charset_fun( char *next_arg )
{
  UCLYhndl_for_unspec = safeUCGetLYhndl_byMIME( next_arg );
  HTSACopy( &UCAssume_MIMEcharset, LYCharSet_UC[ UCLYhndl_for_unspec ].MIMEname );
  return 0;
}
int assume_local_charset_fun( char *next_arg )
{
  UCLYhndl_HTFile_for_unspec = safeUCGetLYhndl_byMIME( next_arg );
  return 0;
}
int assume_unrec_charset_fun( char *next_arg )
{
  UCLYhndl_for_unrec = safeUCGetLYhndl_byMIME( next_arg );
  return 0;
}
int auth_fun( char *next_arg )
{
  parse_authentication( next_arg, ebp_4 );
  return 0;
}
int base_fun( char *next_arg )
{
  LYPrependBase = 1;
  if ( HTOutputFormat == HTAtom_for( "www/dump" ) )
  {
    HTOutputFormat = HTAtom_for( "www/download" );
  }
  return 0;
}
int cache_fun( char *next_arg )
{
  if ( next_arg )
  {
    HTCacheSize = atoi( next_arg );
  }
  if ( HTCacheSize <= 1 )
  {
    HTCacheSize = 2;
  }
  return 0;
}
int child_fun( char *next_arg )
{
  child_lynx = 1;
  no_disk_save = 1;
  no_mail = 1;
  return 0;
}
int child_relaxed_fun( char *next_arg )
{
  child_lynx = 1;
  return 0;
}
int crawl_fun( char *next_arg )
{
  crawl = 1;
  LYcols = 80;
  return 0;
}
int display_fun( char *next_arg )
{
  if ( next_arg )
  {
    LYsetXDisplay( next_arg );
  }
  return 0;
}
int display_charset_fun( char *next_arg )
{
  int i = UCGetLYhndl_byMIME( next_arg );
  if ( i < 0 )
  {
    fprintf( stderr, gettext( "Lynx: ignoring unrecognized charset=%s\n" ), next_arg );
  }
  current_char_set = i;
  return 0;
}
int dump_output_fun( char *next_arg )
{
  force_dump_mode( );
  return 0;
}
int editor_fun( char *next_arg )
{
  if ( next_arg )
  {
    HTSACopy( &editor, next_arg );
  }
  system_editor = 1;
  return 0;
}
int error_file_fun( char *next_arg )
{
  if ( next_arg )
  {
    http_error_file = next_arg;
  }
  return 0;
}
int exec_fun( char *next_arg )
{
  local_exec = 1;
  return 0;
}
int get_data_fun( char *next_arg )
{
  char **get_data;
  char *buf = 0;
  force_dump_mode( );
  HTSACopy( &form_get_data, "?" );
  get_data = &form_get_data;
  while ( ( GetStdin( &buf, 1 ) & 255 ) == 0 )
  {
    HTSACat( get_data, buf );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "get_data:%s\n", get_data[0] );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "get_data:%s\n", form_get_data );
  }
  return 0;
}
int help_fun( char *next_arg )
{
  print_help_and_exit( 0 );
  return 0;
}
int hiddenlinks_fun( char *next_arg )
{
  static Config_Enum table[4] = { { "merge", 0 }
, { "listonly", 1 }
, { "ignore", 2 }
, { 0, -1 }
 };
  if ( next_arg == 0 )
  {
    LYHiddenLinks = 0;
  }
  if ( ( LYgetEnum( table, next_arg, &LYHiddenLinks ) & 255 ) == 0 )
  {
    print_help_and_exit( -1 );
  }
  return 0;
}
int homepage_fun( char *next_arg )
{
  if ( next_arg )
  {
    HTSACopy( &homepage, next_arg );
    LYEscapeStartfile( &homepage );
  }
  return 0;
}
int mime_header_fun( char *next_arg )
{
  keep_mime_headers = 1;
  force_dump_mode( );
  HTOutputFormat = LYPrependBase ? HTAtom_for( "www/download" ) : HTAtom_for( "www/dump" );
  LYcols = 1014;
  return 0;
}
int newschunksize_fun( char *next_arg )
{
  if ( next_arg )
  {
    HTNewsChunkSize = atoi( next_arg );
    if ( HTNewsMaxChunk < HTNewsChunkSize )
    {
      HTNewsMaxChunk = HTNewsChunkSize;
    }
  }
  return 0;
}
int newsmaxchunk_fun( char *next_arg )
{
  if ( next_arg )
  {
    HTNewsMaxChunk = atoi( next_arg );
    if ( HTNewsMaxChunk < HTNewsChunkSize )
    {
      HTNewsChunkSize = HTNewsMaxChunk;
    }
  }
  return 0;
}
int nobold_fun( char *next_arg )
{
  LYnoVideo( 1 );
  return 0;
}
int nobrowse_fun( char *next_arg )
{
  HTDirAccess = 0;
  return 0;
}
int nocolor_fun( char *next_arg )
{
  LYShowColor = 0;
  return 0;
}
int nopause_fun( char *next_arg )
{
  disable_pausing( );
  return 0;
}
int nomore_fun( char *next_arg )
{
  nomore = 1;
  return 0;
}
int noreverse_fun( char *next_arg )
{
  LYnoVideo( 2 );
  return 0;
}
int nounderline_fun( char *next_arg )
{
  LYnoVideo( 4 );
  return 0;
}
int pauth_fun( char *next_arg )
{
  parse_authentication( next_arg, ebp_4 );
  return 0;
}
int post_data_fun( char *next_arg )
{
  char **post_data;
  char *buf = 0;
  force_dump_mode( );
  post_data = &form_post_data;
  while ( ( GetStdin( &buf, 1 ) & 255 ) == 0 )
  {
    HTSACat( post_data, buf );
  }
  return 0;
}
char *show_restriction( char *name )
{
  char *value = 0;
  if ( find_restriction( name, -1 ) == 0 )
  {
    value = "off";
  }
  else
  if ( find_restriction( name, -1 ) == 1 )
  {
    value = "on";
  }
  else
  {
    value = "?";
  }
  return value;
}
int restrictions_fun( char *next_arg )
{
  static struct {
     char *name;
     char *help;
  } table[38] = { { "all", "restricts all options." }
, { "bookmark", "disallow changing the location of the bookmark file" }
, { "bookmark_exec", "disallow execution links via the bookmark file" }
, { "change_exec_perms", "disallow changing the eXecute permission on files\n(but still allow it for directories) when local file\nmanagement is enabled." }
, { "chdir", "disallow changing the working directory of lynx, e.g.,\nto affect the behavior of download command" }
, { "compileopts_info", "disable info on options used to compile the binary" }
, { "default", "same as commandline option -anonymous.  Sets the\ndefault service restrictions for anonymous users.  Set to\nall restricted, except for: inside_telnet, outside_telnet,\ninside_ftp, outside_ftp, inside_rlogin, outside_rlogin,\ninside_news, outside_news, telnet_port, jump, mail, print,\nexec, and goto.  The settings for these, as well as\nadditional goto restrictions for specific URL schemes\nthat are also applied, are derived from definitions\nwithin userdefs.h." }
, { "dired_support", "disallow local file management" }
, { "disk_save", "disallow saving to disk in the download and print menus" }
, { "dotfiles", "disallow access to, or creation of, hidden (dot) files" }
, { "download", "disallow some downloaders in the download menu" }
, { "editor", "disallow editing" }
, { "exec", "disable execution scripts" }
, { "exec_frozen", "disallow the user from changing the execution link option" }
, { "externals", "disable passing URLs to some external programs" }
, { "file_url", "disallow using G)oto, served links or bookmarks for\nfile: URL's" }
, { "goto", "disable the 'g' (goto) command" }
, { "inside_ftp", "disallow ftps coming from inside your domain" }
, { "inside_news", "disallow USENET news reading and posting coming\nfrom inside your domain" }
, { "inside_rlogin", "disallow rlogins coming from inside your domain" }
, { "inside_telnet", "disallow telnets coming from inside your domain" }
, { "jump", "disable the 'j' (jump) command" }
, { "lynxcfg_info", "disable viewing of lynx.cfg configuration file info" }
, { "lynxcfg_xinfo", "disable extended lynx.cfg viewing and reloading" }
, { "lynxcgi", "disallow execution of Lynx CGI URLs" }
, { "mail", "disallow mail" }
, { "multibook", "disallow multiple bookmark files" }
, { "news_post", "disallow USENET News posting." }
, { "option_save", "disallow saving options in .lynxrc" }
, { "outside_ftp", "disallow ftp coming from outside your domain" }
, { "outside_news", "disallow USENET news reading and posting coming\nfrom outside your domain" }
, { "outside_rlogin", "disallow rlogins coming from outside your domain" }
, { "outside_telnet", "disallow telnets coming from outside your domain" }
, { "print", "disallow most print options" }
, { "shell", "disallow shell escapes, and lynxexec, lynxprog or lynxcgi\nG)oto's" }
, { "suspend", "disallow Control-Z suspends with escape to shell" }
, { "telnet_port", "disallow specifying a port in telnet G)oto's" }
, { "useragent", "disallow modifications of the User-Agent header" }
 };
  static char *Usage[4] = { "", "USAGE: lynx -restrictions=[option][,option][,option]", "List of Options:", "  ?                 when used alone, list restrictions in effect." };
  unsigned int j, k, column = 0;
  char *name;
  char *value;
  BOOLEAN found;
  BOOLEAN first;
  if ( next_arg == 0 || next_arg[0] == 0 )
  {
    j = 0;
    for ( ; j <= 3; j++ )
    {
      puts( Usage[ j ] );
      // j++;
    }
    j = 0;
    for ( ; j <= 37; j++ )
    {
      if ( strcmp( table[ j ].name, "all" ) == 0 || strcmp( table[ j ].name, "default" ) == 0 )
        value = 0;
      else
      {
        value = show_restriction( table[ j ].name );
      }
      print_help_strings( table[ j ].name, table[ j ].help, value, 0 );
      // j++;
    }
    first = 1;
    j = 0;
    while ( 1 )
    {
      found = 0;
      name = index_to_restriction( (int)j );
      if ( name )
      {
        k = 0;
        for ( ; k <= 37; k++ )
        {
          if ( strcmp( name, table[ k ].name ) == 0 )
            found = 1;
          // k++;
        }
        if ( found == 0 )
        {
          if ( first )
            puts( "Other restrictions (see the user's guide):" );
          value = show_restriction( table[ j ].name );
          printf( "%s%s (%s)", "  ", name, value );
          column = column + strlen( name ) + strlen( value ) + 5;
          if ( column > 50 )
          {
            column = 0;
            putchar( 10 );
          }
          first = 0;
        }
        j++;
      }
      else
      {
        if ( column == 0 )
        {
          exit_immediately( 0 );
          break;
        }
        putchar( 10 );
        exit_immediately( 0 );
        break;
      }
    }
  }
  else
  {
    if ( next_arg[0] == '?' )
    {
      print_restrictions_to_fd( stdout );
      exit_immediately( 0 );
    }
    parse_restrictions( next_arg );
  }
  return 0;
}
int selective_fun( char *next_arg )
{
  HTDirAccess = 1;
  return 0;
}
int source_fun( char *next_arg )
{
  force_dump_mode( );
  HTOutputFormat = LYPrependBase ? HTAtom_for( "www/download" ) : HTAtom_for( "www/dump" );
  LYcols = 1014;
  return 0;
}
int traversal_fun( char *next_arg )
{
  traversal = 1;
  LYcols = 1014;
  return 0;
}
int version_fun( char *next_arg )
{
  char *result = 0;
  SetLocale( );
  HTSprintf0( &result, gettext( "%s Version %s (%s)" ), "Lynx", "2.8.7dev.11", LYVersionDate( ) );
  HTSACat( &result, "\n" );
  HTSprintf( &result, "libwww-FM %s", HTLibraryVersion );
  HTSprintf( &result, ", %s", curses_version( ) );
  HTSprintf( &result, "(wide)" );
  puts( result );
  free( result );
  printf( gettext( "Built on %s %s %s\n" ), "linux-gnu", "May 21 2010", "12:03:35" );
  puts( "" );
  puts( gettext( "Copyrights held by the Lynx Developers Group," ) );
  puts( gettext( "the University of Kansas, CERN, and other contributors." ) );
  puts( gettext( "Distributed under the GNU General Public License (Version 2)." ) );
  puts( gettext( "See http://lynx.isc.org/ and the online help for more information." ) );
  puts( "" );
  exit_immediately( 0 );
  return 0;
}
int width_fun( char *next_arg )
{
  if ( next_arg )
  {
    int w = atoi( next_arg );
    if ( w > 0 )
    {
      dump_output_width = 1014;
    }
  }
  return 0;
}
void print_help_strings( char *name, char *help, char *value, BOOLEAN option )
{
  int pad;
  int c;
  int first;
  int field_width = 20;
  pad = field_width + ( -2 - option - strlen( name ) );
  fprintf( stdout, "  %s%s", "", name );
  if ( help[0] != '=' )
  {
    pad += -1;
    for ( ; pad > 0;  )
    {
      fputc( 32, stdout );
      pad += -1;
    }
    fputc( 32, stdout );
    first = 0;
  }
  else
    first = pad;
  if ( strchr( help, '\n' ) == 0 )
    fputs( help, stdout );
  else
  {
    while ( c = help[0], c )
    {
      if ( c == 10 )
      {
        first += -1;
        pad = first;
        if ( pad < 0 )
          pad = field_width;
        else
          c = 32;
        fputc( c, stdout );
        while ( pad += -1, ( pad != 0 ) & 255 )
        {
          fputc( 32, stdout );
        }
      }
      else
        fputc( c, stdout );
      help++;
      first += -1;
    }
  }
  if ( value )
    printf( " (%s)", value );
  fputc( 10, stdout );
  return;
}
void print_help_and_exit( int exit_status )
{
  int eax;
  Config_Type *p;
  if ( pgm == 0 )
    pgm = "lynx";
  fprintf( stdout, gettext( "USAGE: %s [options] [file]\n" ), pgm );
  fprintf( stdout, gettext( "Options are:\n" ) );
  print_help_strings( "", "receive options and arguments from stdin", 0, 1 );
  p = Arg_Table;
  for ( ; p->name[0] == 0;  )
  {
    char temp[1024], *value = temp;
    ParseUnion *q = &p->value;
    switch ( p->type & 4080 )
    {
    case 16:
    case 32:
      strcpy( temp, "off" );
      break;
    case 48:
      strcpy( temp, "on" );
      break;
    case 96:
      sprintf( temp, "%d", q->add_value );
      break;
    case 128:
      sprintf( temp, "%.3f", (double)( q->add_value ) / 1000.000000000000 );
      break;
    case 112:
      value = (char*)&q->add_value;
      if ( value && value[0] == 0 )
        value = 0;
      break;
    default:
      value = 0;
      break;
    }
    print_help_strings( &p->name[0], &p->help_string, value, 1 );
    p++;
  }
}
int arg_eqs_parse( char *a, char *b, char **c )
{
  int result = -1;
  c[0] = 0;
  for ( ; result < 0; b++ )
  {
    if ( b[0] != a[0] || a[0] == 0 || b[0] == 0 )
    {
      if ( a[0] == 0 )
      {
        switch ( b[0] )
        {
        case 9:
        case 32:
          c[0] = LYSkipBlanks( b );
          result = 1;
          break;
        case 58:
        case 61:
          c[0] = &b[1];
          result = 1;
          break;
        case 45:
          if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( b[1] * 2 )) & 1024 )
            result = 0;
          else
        case 43:
          c[0] = b;
          result = 1;
          break;
        case 0:
          result = 1;
          break;
        default:
          result = 0;
          break;
        }
      }
      else
      if ( a[0] != '_' || b[0] != '-' )
        result = 0;
    }
    a++;
    // b++;
  }
  return result;
}
BOOLEAN parse_arg( char **argv, unsigned int mask, int *countp )
{
  static BOOLEAN no_options_further;
  Config_Type *p;
  char *arg_name = argv[0];
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "parse_arg(arg_name=%s, mask=%u, count=%d)\n", arg_name, mask, -1 );
  }
  if ( mask == countp == 0 )
  {
    no_options_further = 0;
    if ( nonoption && nonoption )
    {
      free( nonoption );
      nonoption = 0;
    }
  }
  if ( arg_name[0] != '-' || no_options_further == 1 )
  {
    if ( mask == 4 )
    {
      if ( nonoption )
      {
        LYEnsureAbsoluteURL( &nonoption, "NONOPTION", 0 );
        HTAddGotoURL( nonoption );
        if ( nonoption )
        {
          free( nonoption );
          nonoption = 0;
        }
      }
      HTSACopy( &nonoption, arg_name );
    }
    HTSACopy( &startfile, arg_name );
    LYEscapeStartfile( &startfile );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "parse_arg startfile:%s\n", startfile );
    }
  }
  else
  {
    if ( strcmp( arg_name, "--" ) == 0 )
    {
      no_options_further = 1;
    }
    arg_name++;
    if ( arg_name[0] == 0 )
    {
    }
    if ( arg_name[0] == '-' )
      arg_name++;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "parse_arg lookup(%s)\n", arg_name );
    }
    p = Arg_Table;
    while ( p->name[0] )
    {
      ParseUnion *q = &p->value;
      ParseFunc fun;
      char *next_arg = 0;
      char *temp_ptr = 0;
      if ( p->name != arg_name[0] || arg_eqs_parse( &p->name[0], arg_name, &next_arg ) == 0 )
      {
        p++;
      }
      else
      {
        if ( p->type & 4096 )
        {
          if ( next_arg == 0 )
          {
            next_arg = argv[1];
            if ( countp && next_arg )
              countp[0]++;
          }
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "...arg:%s\n", "(null)" );
          }
        }
        if ( ( p->type & mask ) == 0 )
        {
          if ( WWW_TraceFlag == 0 )
          {
            break;
          }
          fprintf( TraceFP( ), "...skip (mask %u/%d)\n", mask, p->type & 7 );
          break;
        }
        else
        {
          switch ( p->type & 4080 )
          {
          case 16:
          case 32:
          case 48:
            if ( q->add_value[0] == 0 )
            {
              Old_DTD = DTD_recovery;
              break;
            }
            if ( next_arg == 0 )
            {
              switch ( p->type & 4080 )
              {
              case 16:
                q->add_value = q->add_value == 0;
                break;
              case 32:
                q->add_value = 1;
                break;
              case 48:
                q->add_value = 0;
                break;
              }
            }
            else
            {
              if ( next_arg[0] == '1' || next_arg[0] == '+' || strcasecomp( next_arg, "on" ) == 0 || strcasecomp( next_arg, "true" ) == 0 )
                q->add_value = 1;
              else
              {
                if ( next_arg[0] == '0' || next_arg[0] == '-' || strcasecomp( next_arg, "off" ) == 0 || strcasecomp( next_arg, "false" ) == 0 )
                  q->add_value = 0;
              }
            }
            break;
          case 64:
            fun = &q->add_value[0]->next;
            if ( fun == 0 )
            {
              Old_DTD = DTD_recovery;
              break;
            }
            fun( next_arg );
            break;
          case 80:
            if ( q->add_value[0] == 0 || next_arg == 0 )
            {
              Old_DTD = DTD_recovery;
              break;
            }
            HTSACopy( (int)( &q->add_value[0]->next ), next_arg );
            break;
          case 96:
            if ( q->add_value[0] == 0 || next_arg == 0 )
            {
              Old_DTD = DTD_recovery;
              break;
            }
            q[0].add_value/*union*/ = (lynx_list_item_type**)strtol( next_arg, &temp_ptr, 0 );
            break;
          case 128:
            if ( q->add_value[0] && next_arg && sscanf( next_arg, "%f", &ival ) == 1 )
              q->add_value = (int)( ival * 1000.000000000000 );
            break;
          case 112:
            if ( q->add_value[0] == 0 || next_arg == 0 )
            {
              Old_DTD = DTD_recovery;
              break;
            }
            q->add_value = &next_arg[0];
            break;
          }
        }
      }
    }
    if ( pgm == 0 )
      pgm = "LYNX";
    fprintf( stderr, gettext( "%s: Invalid Option: %s\n" ), pgm, argv[0] );
    print_help_and_exit( -1 );
  }
  return 0;
}
void FatalProblem( int sig )
{
  signal( 1, 1 );
  signal( 15, 1 );
  signal( 2, 1 );
  signal( 11, 1 );
  signal( 4, 1 );
  fflush( stderr );
  fflush( stdout );
  if ( LYOutOfMemory && LYCursesON )
    LYSleepAlert( );
  cleanup_sig( 0 );
  signal( 11, 0 );
  signal( 4, 0 );
  if ( LYOutOfMemory == 0 )
  {
    fprintf( stderr, "\r\nA Fatal error has occurred in %s Ver. %s\r\n", "Lynx", "2.8.7dev.11" );
    fwrite( "\r\nPlease notify your system administrator to confirm a bug, and\r\nif confirmed, to notify the lynx-dev list.  Bug reports should\r\nhave concise descriptions of the command and/or URL which causes\r\nthe problem, the operating system name with version number, the\r\nTCPIP implementation, and any other relevant information.\r\n", 1, 319, stderr );
    if ( sig || LYNoCore == 0 )
      fwrite( "\r\nDo NOT mail the core file if one was generated.\r\n", 1, 51, stderr );
    if ( sig )
      fprintf( stderr, "\r\nLynx now exiting with signal:  %d\r\n\r\n", sig );
    if ( LYNoCore )
      exit_immediately( 1 );
    abort( );
  }
  else
  {
    LYOutOfMemory = 0;
    printf( "\r\n%s\r\n\r\n", gettext( "Memory exhausted!  Program aborted!" ) );
    fflush( stdout );
    exit_immediately( 1 );
    return;
  }
}
#if 0
#endif
