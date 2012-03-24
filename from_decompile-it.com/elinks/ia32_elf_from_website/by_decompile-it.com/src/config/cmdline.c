#include "cmdline.c.h"
static unsigned char *remote_url;
struct option_info cmdline_options_info[35] = { { { 0, 0, { 0 }
, "anonymous", 0, 0, 0, 1, { 0, 135337128, 135429913, 0, 0, 0 }
, "Restricts ELinks so it can run on an anonymous account. Local file browsing, downloads, and modification of options will be disabled. Execution of viewers is allowed, but entries in the association table can't be added or modified.", "Restrict to anonymous mode", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "auto-submit", 0, 0, 0, 1, { 0, 135337360, 135429952, 0, 0, 0 }
, "Automatically submit the first form in the given URLs.", "Autosubmit first form", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "base-session", 0, 1, 0, 2147483647, { 0, 135337416, 135337584, 0, 0, 0 }
, "Used internally when opening ELinks instances in new windows. The ID maps to information that will be used when creating the new instance. You don't want to use it.", "Clone internal session with given ID", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "confdir", 1, 7, 0, 0, { &redir_cmd, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "config-dir", 0, 3, 0, 1024, { "", 135337624, 135337824, 0, 0, 0 }
, "Path of the directory ELinks will read and write its config and runtime state files to instead of ~/.elinks. If the path does not begin with a '/' it is assumed to be relative to your HOME directory.", "Name of directory with configuration file", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "config-dump", 0, 7, 0, 0, { &printconfigdump_cmd, 135337868, 135337948, 0, 0, 0 }
, "Print a configuration file with options set to the built-in defaults to stdout.", "Print default configuration file to stdout", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "conffile", 1, 7, 0, 0, { &redir_cmd, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "config-file", 0, 3, 0, 1024, { "elinks.conf", 135337992, 135430011, 0, 0, 0 }
, "Name of the configuration file that all configuration options will be read from and written to. It should be relative to config-dir.", "Name of configuration file", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "config-help", 0, 7, 0, 0, { &printhelp_cmd, 135338128, 135338176, 0, 0, 0 }
, "Print help for configuration options and exit.", "Print help for configuration options", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "default-mime-type", 0, 8, 0, 17, { "mime.default_type", 135338216, 135338276, 0, 0, 0 }
, "The default MIME type used for documents of unknown type.", "MIME type assumed for unknown document types", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "default-keys", 0, 0, 0, 1, { 0, 135338324, 135338472, 0, 0, 0 }
, "When set, all keybindings from configuration files will be ignored. It forces use of default keybindings and will reset user-defined ones on save.", "Ignore user-defined keybindings", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "dump", 0, 0, 0, 1, { 0, 135338504, 135338568, 0, 0, 0 }
, "Print formatted plain-text versions of given URLs to stdout.", "Print formatted versions of given URLs to stdout", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "dump-charset", 0, 8, 0, 22, { "document.dump.codepage", 135338620, 135430105, 0, 0, 0 }
, "Codepage used when formatting dump output.", "Codepage to use with -dump", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "dump-color-mode", 0, 8, 0, 24, { "document.dump.color_mode", 135430173, 135430201, 0, 0, 0 }
, "Color mode used with -dump.", "Color mode used with -dump", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "dump-width", 0, 8, 0, 19, { "document.dump.width", 135430259, 135338664, 0, 0, 0 }
, "Width of the dump output.", "Width of document formatted with -dump", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "eval", 0, 7, 0, 0, { &eval_cmd, 135338704, 135338900, 0, 0, 0 }
, "Specify configuration file directives on the command-line which will be evaluated after all configuration files has been read. Example usage:\n\t-eval 'set protocol.file.allow_special_files = 1'", "Evaluate configuration file directive", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "force-html", 0, 7, 0, 0, { &forcehtml_cmd, 135338940, 135339108, 0, 0, 0 }
, "Makes ELinks assume documents of unknown types are HTML. Useful when using ELinks as an external viewer from MUAs. This is equivalent to -default-mime-type text/html.", "Interpret documents of unknown types as HTML", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "?", 0, 7, 0, 0, { &printhelp_cmd, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "h", 0, 7, 0, 0, { &printhelp_cmd, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "help", 0, 7, 0, 0, { &printhelp_cmd, 135430296, 135430323, 0, 0, 0 }
, "Print usage help and exit.", "Print usage help and exit", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "localhost", 0, 0, 0, 1, { 0, 135339156, 135430359, 0, 0, 0 }
, "Restricts ELinks to work offline and only connect to servers with local addresses (ie. 127.0.0.1). No connections to remote servers will be permitted.", "Only permit local connections", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "long-help", 0, 7, 0, 0, { &printhelp_cmd, 135339308, 135339344, 0, 0, 0 }
, "Print detailed usage help and exit.", "Print detailed usage help and exit", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "lookup", 0, 7, 0, 0, { &lookup_cmd, 135339380, 135430389, 0, 0, 0 }
, "Look up specified host and print all DNS resolved IP addresses.", "Look up specified host", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "no-connect", 0, 0, 0, 1, { 0, 135339444, 135430423, 0, 0, 0 }
, "Run ELinks as a separate instance instead of connecting to an existing instance. Note that normally no runtime state files (bookmarks, history, etc.) are written to the disk when this option is used. See also -touch-files.", "Run as separate instance", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "no-home", 0, 0, 0, 1, { 0, 135339668, 135339860, 0, 0, 0 }
, "Disables creation and use of files in the user specific home configuration directory (~/.elinks). It forces default configuration values to be used and disables saving of runtime state files.", "Disable use of files in ~/.elinks", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "no-numbering", 256, 8, 0, 23, { "document.dump.numbering", 135339896, 135340004, 0, 0, 0 }
, "Prevents printing of link number in dump output.\n\nNote that this really affects only -dump, nothing else.", "Disable link numbering in dump output", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "no-references", 256, 8, 0, 24, { "document.dump.references", 135340044, 135340176, 0, 0, 0 }
, "Prevents printing of references (URIs) of document links in dump output.\n\nNote that this really affects only -dump, nothing else.", "Disable printing of link references in dump output", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "remote", 0, 7, 0, 0, { &remote_cmd, 135340228, 135341024, 0, 0, 0 }
, "Control a remote ELinks instance by passing commands to it. The option takes an additional argument containing the method which should be invoked and any parameters that should be passed to it. For ease of use, the additional method argument can be omitted in which case any URL arguments will be opened in new tabs in the remote instance.\n\nFollowing is a list of the supported methods:\n\tping()                    : look for a remote instance\n\topenURL()                 : prompt URL in current tab\n\topenURL(URL)              : open URL in current tab\n\topenURL(URL, new-tab)     : open URL in new tab\n\topenURL(URL, new-window)  : open URL in new window\n\taddBookmark(URL)          : bookmark URL\n\tinfoBox(text)             : show text in a message box\n\txfeDoCommand(openBrowser) : open new window", "Control an already running ELinks", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "session-ring", 0, 1, 0, 2147483647, { 0, 135341060, 135341940, 0, 0, 0 }
, "ID of session ring this ELinks session should connect to. ELinks works in so-called session rings, whereby all instances of ELinks are interconnected and share state (cache, bookmarks, cookies, and so on). By default, all ELinks instances connect to session ring 0. You can change that behaviour with this switch and form as many session rings as you want. Obviously, if the session-ring with this number doesn't exist yet, it's created and this ELinks instance will become the master instance (that usually doesn't matter for you as a user much).\n\nNote that you usually don't want to use this unless you're a developer and you want to do some testing - if you want the ELinks instances each running standalone, rather use the -no-connect command-line option. Also note that normally no runtime state files are written to the disk when this option is used. See also -touch-files.", "Connect to session ring with given ID", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "source", 0, 0, 0, 1, { 0, 135341980, 135342024, 0, 0, 0 }
, "Print given URLs in source form to stdout.", "Print the source of given URLs to stdout", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "stdin", 1, 7, 0, 0, { &redir_cmd, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "touch-files", 0, 0, 0, 1, { 0, 135342068, 135342280, 0, 0, 0 }
, "When enabled, runtime state files (bookmarks, history, etc.) are written to disk, even when -no-connect or -session-ring is used. The option has no effect if not used in conjunction with any of these options.", "Touch files in ~/.elinks when running with -no-connect/-session-ring", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "verbose", 0, 1, 0, 2, { 0, 135342352, 135430579, 0, 0, 0 }
, "The verbose level controls what messages are shown at start up and while running:\n\t0 means only show serious errors\n\t1 means show serious errors and warnings\n\t2 means show all messages", "Verbose level", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "version", 0, 7, 0, 0, { &version_cmd, 135342540, 135342584, 0, 0, 0 }
, "Print ELinks version information and exit.", "Print version information and exit", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
enum retval  parse_options( int argc, unsigned char **argv, struct list_head_elinks *url_list )
{
  int eax;
  int ebp_32;
  ebp_32 = argv;
  for ( ; argc; argc = argc - 1 - 1 )
  {
    ebp_32 += 4;
    if ( *(char*)(*ebp_32) == '-' && *(char*)(*ebp_32 + 1) )
    {
      if ( stracpy( *ebp_32 + 1 ) )
      {
        if ( get_opt_rec( cmdline_options, *(char*)(*ebp_32 + 1) == '-' ? *ebp_32 + 1 : *ebp_32 + 2 ) == 0 && get_opt_rec( cmdline_options, *(char*)(*ebp_32 + 1) == '-' ? *ebp_32 + 1 : *ebp_32 + 2 ) == 0 )
        {
          if ( eax )
          {
            url_list = &url_list[0];
            do
            {
              return 45;
            }
            while ( eax == 0 );
          }
          mem_free( ebp_44 );
          if ( ebx == 0 )
          {
            usrerror( gettext( "Unknown option %s" ) );
            break;
          }
        }
        else
          mem_free( ebp_44 );
        if ( txt[ 152 + ( *(int*)(*ebp_32 + 20) << 3 ) ] )
        {
          if ( eax( *ebp_32, ebp_32, ebp_28 ) == 0 )
          {
            if ( remote_url )
            {
              if ( url_list[0].next )
              {
                add_to_string_list( &url_list[0], remote_url, -1 );
                remote_url[0] = remote_url;
              }
              mem_free( (void*)remote_url );
              remote_url = 0;
            }
          }
          else
          {
            if ( *(char*)(eax( *ebp_32, ebp_32, ebp_28 )) )
            {
              usrerror( gettext( "Cannot parse option %s: %s" ) );
              break;
            }
            break;
          }
        }
        else
        {
          usrerror( gettext( "Unknown option %s" ) );
          break;
        }
      }
    }
    else
    if ( url_list[0].next )
      add_to_string_list( &url_list[0], *ebp_32, -1 );
    //argc = argc - 1 - 1;
  }
}
unsigned char *eval_cmd( struct option_elinks *o, unsigned char ***argv, int *argc )
{
  int edx;
  if ( argc[0] < 1 )
  {
    o = "Parameter expected";
  }
  argv[0] = argv[1];
  argc[0] = argc[ 0 ];
  parse_config_file( config_options, "-eval", argv[ -1 ][0], 0, 0 );
  fflush( stdout );
  return 0;
}
unsigned char *forcehtml_cmd( struct option_elinks *o, unsigned char ***argv, int *argc )
{
  safe_strncpy( *(int*)(get_opt_( config_options, (unsigned char*)config_options )), "text/html", 1024 );
  return 0;
}
unsigned char *lookup_cmd( struct option_elinks *o, unsigned char ***argv, int *argc )
{
  int ecx;
  struct sockaddr_storage *addrs = 0;
  int addrno, i;
  if ( argc[0] == 0 )
    gettext( "Parameter expected" );
  else
  if ( argc[0] > 1 )
    gettext( "Too many parameters" );
  else
  {
    argv[0] = argv[1];
    argc[0] = argc[ 0 ];
    if ( do_real_lookup( argv[ -1 ][0], &addrs, &addrno, 0 ) == DNS_ERROR )
    {
      herror( (char*)gettext( "error" ) );
    }
    else
    {
      if ( addrno >= 1 )
      {
        struct sockaddr_in6 addr;
        unsigned char p[46];
        i = 0;
        do
        {
          if ( inet_ntop( addrs[ i ].ss_family, addrs[ i ].ss_family != 10 ? ebp_48 : ebp_52, ebp_102, 46 ) )
          {
            __printf_chk( 1, "%s\n", ebp_102 );
            i++;
          }
          else
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/cmdline.c";
            i++;
            errline = 179;
            elinks_error( gettext( "Resolver error" ) );
            if ( i < addrno )
              continue;
            else
              break;
          }
        }
        while ( i < addrno );
      }
    {
      void *p = (void*)addrs;
      if ( addrs )
        mem_free( &((int*)p)[0] );
      fflush( stdout );
    }
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return gettext( "Too many parameters" );
}
unsigned char *remote_cmd( struct option_elinks *o, unsigned char ***argv, int *argc )
{
  int eax;
  int ecx;
  int edx;
  struct SSS remote_methods[6];
  unsigned char *command, *arg, *argend, *argstring;
  int method, len;
  unsigned char *remote_argv[10];
  int remote_argc;
  remote_methods[0].name = "openURL";
  remote_methods->type = REMOTE_METHOD_OPENURL;
  remote_methods[1].name = "ping";
  remote_methods[1].type = REMOTE_METHOD_PING;
  remote_methods[2].name = "addBookmark";
  remote_methods[2].type = REMOTE_METHOD_ADDBOOKMARK;
  remote_methods[3].name = "infoBox";
  remote_methods[3].type = REMOTE_METHOD_INFOBOX;
  remote_methods[4].name = "xfeDoCommand";
  remote_methods[4].type = REMOTE_METHOD_XFEDOCOMMAND;
  remote_methods[5].name = 0;
  remote_methods[5].type = REMOTE_METHOD_NOT_SUPPORTED;
  if ( argc[0] < 1 )
    o = "Parameter expected";
  else
  {
    if ( argv[0][0] - 97 < 25 && argv[0][0] - 65 < 25 )
    {
      arg[0] = argv[0];
      len = 0;
    }
    else
    {
      command[0] = argv[0];
      len = 0;
      do
      {
        len++;
        arg[0] = command[0] + len + 1;
      }
      while ( *(char*)(command[0] + len + 1) - 97 >= 25 || *(char*)(command[0] + len + 1) - 65 >= 25 );
    }
    argend[0] = arg[ argend[0] ];
    if ( arg[0] < arg[ argend[0] ] )
      remote_argc = argend[ -1 ];
    argend[0] -= ( arg[0] < argend[0] ) & 1;
    if ( len == 0 || edx != '(' || argend[0] != ')' )
    {
      remote_session_flags |= SES_REMOTE_NEW_TAB;
      return 0;
    }
    arg[0] = arg[1];
    argstring = memacpy( &arg[1], argend[0] - arg[1] - arg[1] );
    if ( argstring )
    {
      arg[0] = argstring = argstring;
      remote_argc = 0;
      len = len;
    {
      while ( 1 )
      {
        if ( argstring == '"' )
        {
          while ( 1 )
          {
            argv = 34;
            o = arg[1] + 1 + 2;
            ebp_4 = remote_cmd+267;
            if ( strchr(  ) )
            {
              arg[0] = strchr(  ) + 1;
              if ( *(char*)(arg[0] + 1) != '"' )
              {
                if ( *(char*)(strchr(  ) + 1) != ',' && ( *(char*)(strlen(  ) + 1) & 255 ) )
                  o = "Garbage after quoted argument";
                else
                {
                  *(char*)(strchr(  )) = 0;
                  if ( arg[1] )
                  {
                    ebp_172 = arg[1];
                    arg[0] = arg[0];
                    do
                    {
                      arg[1] = arg[1];
                      arg[1]++;
                    }
                    while ( *(char*)(eax + ( eax == '"' ) + 1) );
                    arg[0] = arg[0];
                  }
                  remote_argv[ remote_argc ] = &arg[1];
                  remote_argc++;
                  arg[1] = 0;
                  if ( arg[0] != ',' )
                  {
                    if ( arg[0] & 255 )
                    {
                      if ( remote_argc <= 10 )
                      {
                        break;
                      {
                        while ( 1 )
                        {
                        }
                      }
                      }
                      else
                      {
                        o = &argstring[0];
                        ebp_4 = remote_cmd+512;
                        mem_free(  );
                        o = "Too many arguments";
                      }
                    }
                    else
                    {
                      method = 0;
                      command[0] = argv[0];
                      ebp_152 = "openURL";
                      do
                      {
                        ebp_24 = 1;
                        ebp_20 = -1;
                        argc = (int*)remote_methods[ method + 1 ].name;
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/cmdline.c";
                        errline = 322;
                        o = &command[0];
                        argv = 0;
                        ebp_4 = remote_cmd+364;
                      }
                      while ( elinks_strlcasecmp(  ) == 0 || remote_methods[ method + 1 ].name == 0 );
                      switch ( remote_methods[ method ].type )
                      {
                      case REMOTE_METHOD_OPENURL:
                        if ( remote_argc == 0 )
                          remote_session_flags |= SES_REMOTE_PROMPT_URL;
                          o = &argstring[0];
                          ebp_4 = remote_cmd+40e;
                          mem_free(  );
                          if ( remote_session_flags == 0 )
                          {
                            o = "Remote method not supported";
                          }
                          argv[0]++;
                          argc--;
                          break;
                        else
                        {
                          if ( remote_argc == 2 )
                          {
                            remote_argv[1][0] = remote_argv[1];
                            argv = "new-window";
                            o = &remote_argv[1][0];
                            ebp_4 = remote_cmd+55d;
                            if ( strstr(  ) )
                              remote_session_flags |= SES_REMOTE_NEW_WINDOW;
                            else
                            {
                              argv = "new-tab";
                              o = &method;
                              ebp_4 = remote_cmd+57d;
                              if ( strstr(  ) )
                                remote_session_flags |= SES_REMOTE_NEW_TAB;
                            }
                          }
                          else
                            remote_session_flags |= SES_REMOTE_CURRENT_TAB;
                          o = &remote_argv[0][0];
                          ebp_4 = remote_cmd+4a3;
                          remote_url = stracpy(  );
                        }
                        break;
                      case REMOTE_METHOD_XFEDOCOMMAND:
                        if ( remote_argc )
                        {
                          argv = "openBrowser";
                          o = &remote_argv[0][0];
                          ebp_4 = remote_cmd+3e2;
                          if ( c_strcasecmp(  ) == 0 )
                            remote_session_flags = SES_REMOTE_NEW_WINDOW;
                        }
                        break;
                      case REMOTE_METHOD_PING:
                        remote_session_flags = SES_REMOTE_PING;
                        break;
                      case REMOTE_METHOD_ADDBOOKMARK:
                        if ( remote_argc )
                        {
                          o = &remote_argv[0][0];
                          ebp_4 = remote_cmd+3b7;
                          remote_session_flags = SES_REMOTE_ADD_BOOKMARK;
                          remote_url = stracpy(  );
                        }
                        break;
                      case REMOTE_METHOD_INFOBOX:
                        if ( remote_argc )
                        {
                          *ebp_232 = remote_argv[0];
                          ebp_228 = remote_cmd+443;
                          remote_url = stracpy(  );
                          if ( remote_url )
                          {
                            ebp_244 = 6;
                            ebp_240 = "about:";
                            ebp_236 = 0;
                            *ebp_232 = remote_url;
                            ebp_228 = remote_cmd+470;
                            insert_in_string(  );
                          }
                          remote_session_flags = SES_REMOTE_INFO_BOX;
                        }
                        break;
                      default:
                        break;
                      }
                    }
                  }
                }
              }
              else
              {
              }
            }
            else
              o = "Mismatched ending argument quoting";
          }
        }
        else
        {
          argv = 44;
          o = &arg[0];
          ebp_4 = remote_cmd+1dc;
          arg[0] = strchr(  ) + 1;
          if ( strchr(  ) == 0 )
          {
            o = &arg[0];
            ebp_4 = remote_cmd+4b5;
            arg[0] += strlen(  );
          }
          if ( arg[0] < end[0] )
            end[0] = arg[ strchr(  ) ] - 1;
          else
          if ( end[0] == arg[0] )
          {
            arg[ strchr(  ) ] = 0;
            if ( arg[0] != ',' )
            {
            }
          }
          remote_argv[ remote_argc ] = &arg[0];
          remote_argc++;
          arg[ strchr(  ) ] = 0;
        }
        arg[0] = arg[1];
        if ( arg[0] )
        {
        }
        else
        {
          method = 0;
          command[0] = argv[0];
          ebp_152 = "openURL";
          do
          {
            ebp_24 = 1;
            ebp_20 = -1;
            argc = (int*)remote_methods[ method + 1 ].name;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/cmdline.c";
            errline = 322;
            o = &command[0];
            argv = 0;
            ebp_4 = remote_cmd+364;
          }
          while ( elinks_strlcasecmp(  ) == 0 || remote_methods[ method + 1 ].name == 0 );
        }
      }
    }
    }
    else
      o = "Out of memory";
  }
}
unsigned char *version_cmd( struct option_elinks *o, unsigned char ***argv, int *argc )
{
  __printf_chk( 1, "%s\n", full_static_version );
  fflush( stdout );
  return "";
}
void print_full_help_inner( struct option_elinks *tree, unsigned char *path, int trees )
{
  struct option_elinks *option_elinks;
  unsigned char saved[1024];
  unsigned char *savedpos;
  saved[0] = 0;
  option_elinks = &tree->value.tree->next[0];
  if ( tree->value.tree->next != tree->value.tree )
  {
  {
    enum option_type  type;
    unsigned char *help;
    unsigned char *capt;
    unsigned char *desc;
    unsigned char hexcolor[8];
    savedpos = saved;
    do
    {
      if ( trees == option_elinks->type == OPT_TREE && ( option_elinks->type != OPT_ALIAS || tree[0].next == cmdline_options ) && ( ( option_elinks->flags & 1 ) & 255 ) == 0 )
      {
        if ( option_elinks->capt == 0 && c_strncasecmp( (char*)option_elinks->name, "_template_", 10 ) )
        {
          int max = ebp_36 - savedpos;
          safe_strncpy( savedpos, option_elinks->name, ebp_36 - savedpos );
          max = ebp_36 - savedpos - strlen( (char*)option_elinks->name );
          safe_strncpy( savedpos + strlen( (char*)option_elinks->name ), ", -", ebp_36 - savedpos - strlen( (char*)option_elinks->name ) );
          max = savedpos + strlen( (char*)option_elinks->name ) + 3;
          savedpos = savedpos + strlen( (char*)option_elinks->name ) + 3;
        }
        else
        {
          if ( txt[ 152 + ( option_elinks->type << 3 ) ] )
          {
            gettext( txt[ 152 + ( option_elinks->type << 3 ) ] );
            if ( option_elinks->type == OPT_TREE )
            {
              if ( strlen( &path[0] ) + strlen( (char*)option_elinks->name ) + 2 <= 1024 )
              {
                savedpos = saved;
                if ( strlen( &path[0] ) >= 1 )
                {
                  __memcpy_chk( saved, &path[0], strlen( &path[0] ), 1024 );
                  savedpos = &saved[ strlen( &path[0] ) ];
                }
                memcpy( savedpos, ebp_1100, ecx );
                if ( 'T' )
                {
                }
                savedpos += &ecx;
                __printf_chk( 1, "  %s: (%s)", (char*)option_elinks->capt, saved );
                _IO_putc( 10, stdout );
                if ( init_string( ebp_1068 ) && init_string( ebp_1068 ) )
                  fwrite( ebp_1068, 1, ebp_1064, stdout );
                else
                {
                  __fprintf_chk( stderr, 1, "%12s%s\n", "", (char*)gettext( "Out of memory formatting option documentation" ) );
                }
                done_string( ebp_1068 );
                _IO_putc( 10, stdout );
                if ( option_elinks->type == OPT_TREE )
                {
                  savedpos[0] = 46;
                  print_full_help_outer( &option_elinks[0], saved );
                }
                saved[0] = 0;
                savedpos = saved;
                option_elinks = &option_elinks;
                if ( tree->value.tree != option_elinks->next )
                  continue;
              }
            }
          }
          else
          if ( option_elinks->type == OPT_TREE )
            continue;
          __printf_chk( 1, "    %s%s%s %s ", &path[0], saved, (char*)option_elinks->name, txt[ 152 + ( option_elinks->type << 3 ) ] );
          switch ( option_elinks->type )
          {
          case OPT_COMMAND:
            break;
          case OPT_BOOL:
          case OPT_INT:
          case OPT_LONG:
            break;
          case OPT_STRING:
            break;
          case OPT_ALIAS:
            break;
          case OPT_CODEPAGE:
            break;
          case OPT_COLOR:
            break;
          case OPT_LANGUAGE:
            break;
          case OPT_TREE:
            break;
          }
          __printf_chk( 1, (char*)gettext(  ), option_elinks->value.tree );
        }
      }
      option_elinks = &option_elinks;
    }
    while ( tree->value.tree != option_elinks->next );
  }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
void print_full_help_outer( struct option_elinks *tree, unsigned char *path )
{
  print_full_help_inner( &ebx, &esi );
}
unsigned char *printhelp_cmd( struct option_elinks *option_elinks, unsigned char ***argv, int *argc )
{
  int eax;
  int ecx;
  int edx;
  if ( strchr( full_static_version, 10 ) )
    *(char*)(strchr( full_static_version, 10 )) = 0;
  __printf_chk( 1, "%s\n\n", full_static_version );
  strcmp( *(int*)(0), (char*)option_elinks->name );
  if ( 1 )
  {
    __printf_chk( 1, "%s:\n", (char*)gettext( "Configuration options" ) );
    print_full_help_outer( config_options, "" );
  }
  else
  {
    __printf_chk( 1, "%s\n\n%s:\n", (char*)gettext( "Usage: elinks [OPTION]... [URL]..." ), (char*)gettext( "Options" ) );
    strcmp( *(int*)(0), (char*)option_elinks->name );
    if ( !1 )
    {
      if ( cmdline_options->value.tree[0].next != cmdline_options->value.tree )
      {
        while ( ( ( *(char*)(cmdline_options->value.tree->next + 16) & 1 ) & 255 ) == 0 )
        {
          if ( cmdline_options->value.tree->next != cmdline_options->value.tree/*union*/ )
          {
            if ( 0 )
              continue;
          }
        }
      }
    }
    else
      print_full_help_outer( cmdline_options, "-" );
  }
  fflush( stdout );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return "";
}
unsigned char *redir_cmd( struct option_elinks *option_elinks, unsigned char ***argv, int *argc )
{
  int eax;
  unsigned char *target;
  strcmp( "confdir", (char*)option_elinks->name );
  target[0] = "config-dir";
  if ( (unsigned char)( ccdep2 < ccdep1 ) )
  {
    strcmp( "conffile", (char*)option_elinks->name );
    target[0] = "config-file";
    if ( (unsigned char)( ccdep2 < ccdep1 ) )
    {
      strcmp( "stdin", (char*)option_elinks->name );
      if ( 1 )
      {
        static int complained;
        if ( complained == 0 )
        {
          complained = 1;
          if ( argv[0] && argv[0][0] - 48 >= 1 && argv[0][0][1] == 0 )
          {
            argv[0] = &argv[0][1];
            argc--;
          }
          __fprintf_chk( stderr, 1, "Warning: Deprecated option -stdin used!\n" );
          __fprintf_chk( stderr, 1, "ELinks now determines the -stdin option value automatically.\n" );
          __fprintf_chk( stderr, 1, "In the future versions ELinks will report error when you will\n" );
          __fprintf_chk( stderr, 1, "continue to use this option.\n" );
          return 0;
        }
        else
        {
          return 0;
        }
      }
      else
      {
        option_elinks = "Internal consistency error";
      }
    }
  }
  get_opt_rec( cmdline_options, &target[0] );
  if ( assert_failed == 0 )
  {
    assert_failed = get_opt_rec( cmdline_options, &target[0] ) == 0;
    if ( !(_Bool)( get_opt_rec( cmdline_options, &target[0] ) != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/cmdline.c";
      errline = 705;
      elinks_internal( "assertion option failed!" );
      ebp_28 = option_elinks[0].next;
    }
  }
  txt[ 152 + ( *(int*)(ebp_28 + 20) << 3 ) ]( ebp_28, argv, argc );
  return 0;
}
unsigned char *printconfigdump_cmd( struct option_elinks *option_elinks, unsigned char ***argv, int *argc )
{
  unsigned char *config_string;
  *(int*)(get_opt_( config_options, (unsigned char*)config_options )) = 2;
  if ( create_config_string( "", "", config_options ) )
  {
    __printf_chk( 1, "%s", (char*)create_config_string( "", "", config_options ) );
    mem_free( &config_string[0] );
  }
  fflush( stdout );
  return "";
}
#if 0
#endif
