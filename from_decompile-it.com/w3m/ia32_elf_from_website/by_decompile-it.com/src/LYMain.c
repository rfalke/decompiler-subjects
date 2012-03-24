#include "LYMain.c.h"
static void LYStdinArgs_free( void );
static BOOLEAN GetStdin( char **buf, BOOLEAN marker );
static void SetLocale( void );
static void disable_pausing( void );
static void force_dump_mode( void );
static int parse_authentication( char *next_arg, char **result );
static int anonymous_fun( char *next_arg );
static int assume_charset_fun( char *next_arg );
static int assume_local_charset_fun( char *next_arg );
static int assume_unrec_charset_fun( char *next_arg );
static int auth_fun( char *next_arg );
static int base_fun( char *next_arg );
static int cache_fun( char *next_arg );
static int child_fun( char *next_arg );
static int child_relaxed_fun( char *next_arg );
static int crawl_fun( char *next_arg );
static int display_fun( char *next_arg );
static int display_charset_fun( char *next_arg );
static int dump_output_fun( char *next_arg );
static int editor_fun( char *next_arg );
static int error_file_fun( char *next_arg );
static int exec_fun( char *next_arg );
static int get_data_fun( char *next_arg );
static int help_fun( char *next_arg );
static int hiddenlinks_fun( char *next_arg );
static int homepage_fun( char *next_arg );
static int mime_header_fun( char *next_arg );
static int newschunksize_fun( char *next_arg );
static int newsmaxchunk_fun( char *next_arg );
static int nobold_fun( char *next_arg );
static int nobrowse_fun( char *next_arg );
static int nocolor_fun( char *next_arg );
static int nopause_fun( char *next_arg );
static int nomore_fun( char *next_arg );
static int noreverse_fun( char *next_arg );
static int nounderline_fun( char *next_arg );
static int pauth_fun( char *next_arg );
static int post_data_fun( char *next_arg );
static char *show_restriction( char *name );
static int restrictions_fun( char *next_arg );
static int selective_fun( char *next_arg );
static int source_fun( char *next_arg );
static int traversal_fun( char *next_arg );
static int version_fun( char *next_arg );
static int width_fun( char *next_arg );
static void print_help_strings( char *name, char *help, char *value, BOOLEAN option );
static void print_help_and_exit( int exit_status );
static int arg_eqs_parse( char *a, char *b, char **c );
static BOOLEAN parse_arg( char **argv, unsigned int mask, int *countp );
static void FatalProblem( int sig );
static char *lynx_version_putenv_command;
char *list_format;
char *syslog_txt;
BOOLEAN syslog_requested_urls = 1;
BOOLEAN lynx_edit_mode;
BOOLEAN no_dired_support;
HTList *tagged;
int LYAutoUncacheDirLists = 2;
int dir_list_order;
int dir_list_style = 2;
BOOLEAN prev_lynx_edit_mode;
BOOLEAN no_change_exec_perms;
int HTCacheSize = 10;
BOOLEAN local_exec;
BOOLEAN local_exec_on_local_files;
char *LYCgiDocumentRoot;
BOOLEAN enable_scrollback;
char empty_string[1];
int display_lines;
int www_search_result = -1;
lynx_list_item_type *printers;
lynx_list_item_type *downloaders;
lynx_list_item_type *externals;
lynx_list_item_type *uploaders;
int LYShowColor = -1;
int LYrcShowColor = -1;
BOOLEAN LYUseFormsOptions = 1;
BOOLEAN LYJumpFileURL;
BOOLEAN LYPermitURL;
BOOLEAN LYRestricted;
BOOLEAN LYShowCursor;
BOOLEAN LYUnderlineLinks;
BOOLEAN LYUseDefShoCur = 1;
BOOLEAN LYUserSpecifiedURL = 1;
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
BOOLEAN lynx_mode = 1;
BOOLEAN minimal_comments;
BOOLEAN number_fields_on_left = 1;
BOOLEAN number_links_on_left = 1;
BOOLEAN recent_sizechange;
BOOLEAN soft_dquotes;
BOOLEAN use_underscore;
BOOLEAN verbose_img = 1;
BOOLEAN vi_keys;
int keypad_mode;
int user_mode;
BOOLEAN telnet_ok = 1;
BOOLEAN news_ok = 1;
BOOLEAN rlogin_ok = 1;
BOOLEAN long_url_ok;
BOOLEAN ftp_ok = 1;
BOOLEAN system_editor;
BOOLEAN had_restrictions_default;
BOOLEAN had_restrictions_all;
BOOLEAN exec_frozen;
BOOLEAN no_bookmark;
BOOLEAN no_bookmark_exec;
BOOLEAN no_chdir;
BOOLEAN no_disk_save;
BOOLEAN no_dotfiles = 1;
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
BOOLEAN ftp_passive = 1;
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
BOOLEAN no_filereferer = 1;
char LYRefererWithQuery = 'D';
BOOLEAN local_host_only;
BOOLEAN override_no_download;
BOOLEAN show_dotfiles;
BOOLEAN LYforce_HTML_mode;
BOOLEAN LYfind_leaks = 1;
BOOLEAN no_table_center;
BOOLEAN HEAD_request;
BOOLEAN LYAcceptAllCookies;
BOOLEAN LYCancelledFetch;
BOOLEAN LYCollapseBRs = 1;
BOOLEAN LYDefaultRawMode;
BOOLEAN LYListNewsDates;
BOOLEAN LYListNewsNumbers;
BOOLEAN LYMBMBlocked;
BOOLEAN LYNewsPosting = 1;
BOOLEAN LYNoFromHeader = 1;
BOOLEAN LYNoRefererForThis;
BOOLEAN LYNoRefererHeader;
BOOLEAN LYRawMode;
BOOLEAN LYSelectPopups = 1;
BOOLEAN LYSetCookies = 1;
BOOLEAN LYUseDefSelPop = 1;
BOOLEAN LYUseDefaultRawMode = 1;
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
BOOLEAN pseudo_inline_alts = 1;
BOOLEAN scan_for_buried_news_references = 1;
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
int LYStatusLine = -1;
int LYcols = 80;
int LYlines = 24;
int MessageSecs;
int ReplaySecs;
int crawl_count;
int dump_output_width;
int dump_server_status;
int lynx_temp_subspace;
int max_cookies_domain = 50;
int max_cookies_global = 500;
int max_cookies_buffer = 4096;
int nlinks;
int outgoing_mail_charset = -1;
BOOLEAN BibP_bibhost_available;
BOOLEAN BibP_bibhost_checked;
BOOLEAN no_goto_bibp;
char *BibP_bibhost;
char *BibP_globalserver;
BOOLEAN persistent_cookies;
char *LYCookieFile;
char *LYCookieSaveFile;
BOOLEAN nested_tables = 1;
BOOLEAN LYShowTransferRate = 1;
int LYTransferRate = 2;
int LYAcceptEncoding = 15;
int LYAcceptMedia = 1;
char *LYTransferName;
char *XLoadImageCommand;
BOOLEAN LYNoISMAPifUSEMAP;
int LYHiddenLinks = 1;
char *SSL_cert_file;
int Old_DTD;
static BOOLEAN DTD_recovery;
FILE *LYTraceLogFP;
char *LYTraceLogPath;
BOOLEAN LYUseTraceLog = 1;
BOOLEAN LYSeekFragMAPinCur = 1;
BOOLEAN LYSeekFragAREAinCur = 1;
BOOLEAN LYStripDotDotURLs = 1;
BOOLEAN LYForceSSLCookiesSecure;
BOOLEAN LYNoCc;
BOOLEAN LYPreparsedSource;
BOOLEAN LYPrependBaseToSource = 1;
BOOLEAN LYPrependCharsetToSource = 1;
BOOLEAN LYQuitDefaultYes = 1;
BOOLEAN dont_wrap_pre;
int cookie_noprompt;
int connect_timeout = 18000;
int reading_timeout = 18000;
BOOLEAN ok_justify;
int justify_max_void_percent = 35;
BOOLEAN LYLocaleCharset;
BOOLEAN with_backspaces;
BOOLEAN force_empty_hrefless_a;
BOOLEAN textfields_need_activation;
BOOLEAN textfields_activation_option;
BOOLEAN textfield_prompt_at_left_edge;
char *hidden_link_marker;
BOOLEAN display_partial_flag = 1;
BOOLEAN debug_display_partial;
int partial_threshold = -1;
BOOLEAN LYNonRestartingSIGWINCH;
BOOLEAN LYReuseTempfiles;
BOOLEAN LYUseBuiltinSuffixes = 1;
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
BOOLEAN LYuse_default_colors = 1;
static Config_Type Arg_Table[136] = { { "accept_all_cookies", 36, 135981204, "\naccept cookies without prompting if Set-Cookie handling\nis on",  }
, { "anonymous", 66, 134719678, "apply restrictions for anonymous account,\nsee also -restrictions",  }
, { "assume_charset", 4164, 134719732, "=MIMEname\ncharset for documents that don't specify it",  }
, { "assume_local_charset", 4164, 134719791, "=MIMEname\ncharset assumed for local files",  }
, { "assume_unrec_charset", 4164, 134719820, "=MIMEname\nuse this instead of unrecognized charsets",  }
, { "auth", 4164, 134719849, "=id:pw\nauthentication information for protected documents",  }
, { "base", 68, 134719881, "prepend a request URL comment and BASE tag to text/html\noutputs for -source dumps",  }
, { "bibhost", 4180, 135981484, "=URL\nlocal bibp server (default http://bibhost/)",  }
, { "book", 36, 135981215, "use the bookmark page as the startfile",  }
, { "buried_news", 20, 135875700, "toggles scanning of news articles for buried references",  }
, { "cache", 4164, 134719941, "=NUMBER\nNUMBER of documents cached in memory",  }
, { "case", 36, 135981103, "enable case sensitive user searching",  }
, { "center", 20, 135981202, "toggle center alignment in HTML TABLE",  }
, { "cfg", 4178, 135981376, "=FILENAME\nspecifies a lynx.cfg file other than the default",  }
, { "child", 68, 134719996, "exit on left-arrow in startfile, and disable save to disk",  }
, { "child_relaxed", 68, 134720027, "exit on left-arrow in startfile (allows save to disk)",  }
, { "cmd_log", 4178, 136096440, "=FILENAME\nlog keystroke commands to the given file",  }
, { "cmd_script", 4178, 136096456, "=FILENAME\nread keystroke commands from the given file\n(see -cmd_log)",  }
, { "connect_timeout", 4196, 135875760, "=N\nset the N-second connection timeout",  }
, { "cookie_file", 84, 135981496, "=FILENAME\nspecifies a file to use to read cookies",  }
, { "cookie_save_file", 84, 135981500, "=FILENAME\nspecifies a file to use to store cookies",  }
, { "cookies", 20, 135875696, "toggles handling of Set-Cookie headers",  }
, { "core", 20, 135981556, "toggles forced core dumps on fatal errors",  }
, { "crawl", 68, 134720044, "with -traversal, output each page to a file\nwith -dump, format output as with -traversal, but to stdout",  }
, { "curses_pads", 20, 135878400, "uses curses pad feature to support left/right shifting",  }
, { "debug_partial", 20, 135981548, "incremental display stages with MessageSecs delay",  }
, { "delay", 4228, 136096464, "=NNN\nset NNN-second delay at statusline message",  }
, { "display", 4164, 134720071, "=DISPLAY\nset the display variable for X exec'ed programs",  }
, { "display_charset", 4164, 134720101, "=MIMEname\ncharset for the terminal output",  }
, { "dont_wrap_pre", 36, 135981535, "inhibit wrapping of text in &lt;pre&gt; when -dump'ing and\n-crawl'ing, mark wrapped lines in interactive session",  }
, { "dump", 68, 134720181, "dump the first file to stdout and exit",  }
, { "editor", 4164, 134720196, "=EDITOR\nenable edit mode with specified editor",  }
, { "emacskeys", 36, 135981109, "enable emacs-like key movement",  }
, { "enable_scrollback", 20, 135981068, "\ntoggles compatibility with comm programs' scrollback\nkeys (may be incompatible with some curses packages)",  }
, { "error_file", 4164, 134720241, "=FILE\nwrite the HTTP status code here",  }
, { "exec", 68, 134720265, "enable local program execution",  }
, { "force_empty_hrefless_a", 36, 135981539, "\nforce HREF-less 'A' elements to be empty (close them as\nsoon as they are seen)",  }
, { "force_html", 36, 135981201, "forces the first document to be interpreted as HTML",  }
, { "force_secure", 20, 135981532, "toggles forcing of the secure flag for SSL cookies",  }
, { "forms_options", 20, 135875676, "toggles forms-based vs old-style options menu",  }
, { "from", 20, 135875694, "toggle transmission of From headers",  }
, { "ftp", 52, 135875686, "disable ftp access",  }
, { "get_data", 66, 134720282, "user data for get forms, read from stdin,\nterminated by '---' on a line",  }
, { "head", 36, 135981203, "send a HEAD request",  }
, { "help", 65, 134720469, "print this usage message",  }
, { "hiddenlinks", 4164, 134720494, "=[option]\nhidden links: options are merge, listonly, or ignore",  }
, { "historical", 20, 135981112, "toggles use of '&gt;' or '--&gt;' as terminator for comments",  }
, { "homepage", 4164, 134720568, "=URL\nset homepage separate from start page",  }
, { "image_links", 20, 135981217, "toggles inclusion of links for all images",  }
, { "index", 4180, 135981360, "=URL\nset the default index file to URL",  }
, { "ismap", 20, 135981512, "toggles inclusion of ISMAP links when client-side\nMAPs are present",  }
, { "justify", 36, 135981536, "do justification of text",  }
, { "link", 4196, 135981460, "=NUMBER\nstarting count for lnk#.dat files produced by -crawl",  }
, { "listonly", 20, 135981106, "with -dump, forces it to show only the list of links",  }
, { "localhost", 36, 135981198, "disable URLs that point to remote hosts",  }
, { "locexec", 36, 135981063, "enable local program execution from local files only",  }
, { "lss", 4178, 135981560, "=FILENAME\nspecifies a lynx.lss file other than the default",  }
, { "mime_header", 68, 134720618, "include mime headers and force source dump",  }
, { "minimal", 20, 135981115, "toggles minimal versus valid comment parsing",  }
, { "nested_tables", 20, 135875732, "toggles nested-tables logic",  }
, { "newschunksize", 4164, 134720704, "=NUMBER\nnumber of articles in chunked news listings",  }
, { "newsmaxchunk", 4164, 134720764, "=NUMBER\nmaximum news articles in listings before chunking",  }
, { "nobold", 68, 134720824, "disable bold video-attribute",  }
, { "nobrowse", 68, 134720849, "disable directory browsing",  }
, { "nocc", 36, 135981533, "disable Cc: prompts for self copies of mailings",  }
, { "nocolor", 68, 134720869, "turn off color support",  }
, { "noexec", 52, 135981062, "disable local program execution (DEFAULT)",  }
, { "nofilereferer", 36, 135875689, "disable transmission of Referer headers for file URLs",  }
, { "nolist", 36, 135981222, "disable the link list feature in dumps",  }
, { "nolog", 52, 135981110, "disable mailing of error messages to document owners",  }
, { "nomargins", 36, 135981223, "disable the right/left margins in the default\nstyle-sheet",  }
, { "nomore", 68, 134720904, "disable -more- string in statusline messages",  }
, { "nonrestarting_sigwinch", 36, 135981549, "\nmake window size change handler non-restarting",  }
, { "nonumbers", 36, 135981580, "disable the link/form numbering feature in dumps",  }
, { "nopause", 68, 134720889, "disable forced pauses for statusline messages",  }
, { "noprint", 36, 135981170, "disable some print functions, like -restrictions=print",  }
, { "noredir", 36, 135981225, "don't follow Location: redirection",  }
, { "noreferer", 36, 135981210, "disable transmission of Referer headers",  }
, { "noreverse", 68, 134720921, "disable reverse video-attribute",  }
, { "nostatus", 36, 135981197, "disable the miscellaneous information messages",  }
, { "notitle", 36, 135981224, "disable the title at the top of each page",  }
, { "nounderline", 68, 134720946, "disable underline video-attribute",  }
, { "number_fields", 36, 135981582, "force numbering of links as well as form input fields",  }
, { "number_links", 36, 135981581, "force numbering of links",  }
, { "partial", 20, 135875772, "toggles display partial pages while downloading",  }
, { "partial_thres", 4196, 135875776, "[=NUMBER]\nnumber of lines to render before repainting display\nwith partial-display logic",  }
, { "passive-ftp", 20, 135875688, "toggles passive ftp connection",  }
, { "pauth", 4164, 134720971, "=id:pw\nauthentication information for protected proxy server",  }
, { "popup", 52, 135875697, "toggles handling of single-choice SELECT options via\npopup windows or as lists of radio buttons",  }
, { "post_data", 66, 134721003, "user data for post forms, read from stdin,\nterminated by '---' on a line",  }
, { "preparsed", 36, 135981534, "show parsed text/html with -source and in source view\nto visualize how lynx behaves with invalid HTML",  }
, { "prettysrc", 36, 135994982, "do syntax highlighting and hyperlink handling in source\nview",  }
, { "print", 52, 135981170, "enable print functions (DEFAULT), opposite of -noprint",  }
, { "pseudo_inlines", 20, 135875699, "toggles pseudo-ALTs for inlines with no ALT string",  }
, { "raw", 52, 135875698, "toggles default setting of 8-bit character translations\nor CJK mode for the startup character set",  }
, { "realm", 36, 135981216, "restricts access to URLs in the starting realm",  }
, { "read_timeout", 4196, 135875764, "=N\nset the N-second read-timeout",  }
, { "reload", 36, 136000420, "flushes the cache on a proxy server\n(only the first document affected)",  }
, { "restrictions", 68, 134721155, "=[options]\nuse -restrictions to see list",  }
, { "resubmit_posts", 20, 135981097, "toggles forced resubmissions (no-cache) of forms with\nmethod POST when the documents they returned are sought\nwith the PREV_DOC command or from the History List",  }
, { "rlogin", 52, 135875685, "disable rlogins",  }
, { "scrollbar", 20, 135971156, "toggles showing scrollbar",  }
, { "scrollbar_arrow", 20, 135875456, "toggles showing arrows at ends of the scrollbar",  }
, { "selective", 68, 134721749, "require .www_browsable files to browse directories",  }
, { "short_url", 36, 135981128, "enables examination of beginning and end of long URL in\nstatus line",  }
, { "show_cursor", 20, 135875677, "toggles hiding of the cursor in the lower right corner",  }
, { "show_rate", 20, 135875733, "toggles display of transfer rate",  }
, { "soft_dquotes", 20, 135981117, "toggles emulation of the old Netscape and Mosaic\nbug which treated '&gt;' as a co-terminator for\ndouble-quotes and tags",  }
, { "source", 68, 134721769, "dump the source of the first file to stdout and exit",  }
, { "stack_dump", 36, 135981574, "disable SIGINT cleanup handler",  }
, { "startfile_ok", 36, 135981226, "allow non-http startfile and homepage with -validate",  }
, { "stderr", 36, 135981108, "write warning messages to standard error when -dump\nor -source is used",  }
, { "stdin", 36, 135981572, "read startfile from standard input",  }
, { "syslog", 4180, 135981044, "=text\ninformation for syslog call",  }
, { "syslog-urls", 36, 135875648, "log requested URLs with syslog",  }
, { "tagsoup", 36, 135981573, "use TagSoup rather than SortaSGML parser",  }
, { "telnet", 52, 135875683, "disable telnets",  }
, { "term", 4212, 135981576, "=TERM\nset terminal type to TERM",  }
, { "tlog", 18, 135875752, "toggles use of a Lynx Trace Log for the current\nsession",  }
, { "tna", 36, 135981541, "turn on \"Textfields Need Activation\" mode",  }
, { "trace", 33, 136019752, "turns on Lynx trace mode",  }
, { "trace_mask", 97, 136019756, "customize Lynx trace mode",  }
, { "traversal", 68, 134721848, "traverse all http links derived from startfile",  }
, { "trim_input_fields", 34, 135981098, "\ntrim input text/textarea fields in forms",  }
, { "underline_links", 20, 135981092, "toggles use of underline/bold attribute for links",  }
, { "underscore", 20, 135981118, "toggles use of _underline_ format in dumps",  }
, { "use_mouse", 36, 135981211, "turn on mouse support",  }
, { "useragent", 4180, 135981280, "=Name\nset alternate Lynx User-Agent header",  }
, { "validate", 34, 135981093, "accept only http URLs (meant for validation)\nimplies more restrictions than -anonymous, but\ngoto is allowed for http and https",  }
, { "verbose", 20, 135875682, "toggles [LINK], [IMAGE] and [INLINE] comments\nwith filenames of these images",  }
, { "version", 65, 134721875, "print Lynx version information",  }
, { "vikeys", 36, 135981119, "enable vi-like key movement",  }
, { "width", 4164, 134722235, "=NUMBER\nscreen width for formatting of dumps (default is 80)",  }
, { "with_backspaces", 36, 135981538, "emit backspaces in output if -dumping or -crawling\n(like 'man' does)",  }
, { "xhtml-parsing", 36, 135981099, "enable XHTML 1.0 parsing",  }
, { 0, 0, 0, 0,  }
,  };
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
  if ( ( no_suspend & 255 ) != 0 )
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
  if ( LYSafeGets( buf, *(int*)(135965416) ) != 0 && ( marker == 0 || strncmp( buf[0], "---", 3 ) != 0 ) )
  {
    LYTrimTrailing( buf[0] );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "...data: %s\n", buf[0] );
    }
  }
  else
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "...mark: %s\n", buf[0] == 0 ? "" : buf[0] );
    }
  }
  return 1;
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
  argv = argc/*error:'i'*/;
  status = 0;
  temp = 0;
  LYGetStdinArgs = 0;
  ftp_lasthost = calloc( 1, sizeof( char ) );
  LYShowColor = 2;
  pgm = argv[0];
  cp = 0;
  cp = LYLastPathSep( pgm );
  if ( cp != 0 )
    pgm = &cp[1];
  if ( LYGetEnv( "LYNX_TRACE" ) != 0 )
    WWW_TraceFlag = 1;
  cp = LYGetEnv( "LYNX_TRACE_FILE" );
  if ( cp == 0 )
    cp = "Lynx.trace";
  LYTraceLogPath = malloc( 256 );
  LYAddPathToHome( LYTraceLogPath, 256, cp );
  i = 1;
  for ( ; i < argc; i++ )
  {
    parse_arg( &argv[ i ], 1, &i );
    //i++;
  }
  LYOpenTraceLog( );
  SetLocale( );
  memset( links[0].lname, 0, 69632 );
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
  if ( HTLibraryVersion != 0 )
  {
    HTSACat( &LYUserAgent, " libwww-FM/" );
    HTSACat( &LYUserAgent, HTLibraryVersion );
  }
  HTSACopy( &LYUserAgentDefault, LYUserAgent );
  HTSACopy( &lynx_version_putenv_command, "LYNX_VERSION=" );
  HTSACat( &lynx_version_putenv_command, "2.8.7dev.11" );
  putenv( lynx_version_putenv_command );
  cp = LYGetEnv( "LYNX_TEMP_SPACE" );
  cp = cp == 0 ? LYGetEnv( "TMPDIR" ) : HTSACopy( &lynx_temp_space, cp );
  if ( cp != 0 )
    HTSACopy( &lynx_temp_space, cp );
  else
    HTSACopy( &lynx_temp_space, "/tmp/" );
  LYTildeExpand( &lynx_temp_space, 1 );
  cp = strstr( lynx_temp_space, "$USER" );
  if ( cp != 0 )
  {
    char *cp1 = LYGetEnv( "USER" );
    if ( cp1 != 0 )
    {
      cp[0] = 0;
      HTSACopy( &temp, lynx_temp_space );
      cp[0] = '$';
      HTSACat( &temp, cp1 );
      cp += 5;
      HTSACat( &temp, cp );
      HTSACopy( &lynx_temp_space, temp );
      if ( temp != 0 )
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
    fprintf( *(int*)(135965404), "%s: %s\n", lynx_temp_space, gettext( "No such directory" ) );
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
  no_newspost = ( LYNewsPosting & 255 ) == 0;
  i = 1;
  for ( ; i < argc; i++ )
  {
    parse_arg( &argv[ i ], 2, &i );
    //i++;
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
      //i++;
    }
  }
  if ( LYGetStdinArgs == 1 )
  {
    char *buf = 0;
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "processing stdin arguments\n" );
    }
    while ( ( GetStdin( &buf, 1 ) & 255 ) == 0 )
    {
      char *noargv[2];
      noargv[0] = buf;
      noargv[1] = 0;
      LYTrimTrailing( buf );
      if ( ( parse_arg( noargv, 2, 0 ) & 255 ) == 0 && ( buf[0] & 255 ) != 0 )
      {
        char *argument = 0;
        if ( LYStdinArgs == 0 )
        {
          LYStdinArgs = HTList_new( );
        }
        HTSACopy( &argument, buf );
        HTList_appendObject( LYStdinArgs, (void*)argument );
        if ( ( WWW_TraceFlag & 255 ) == 0 )
          continue;
        else
        {
          fprintf( TraceFP( ), "...StdinArg:%s\n", argument );
        }
      }
      else
      {
        if ( ( WWW_TraceFlag & 255 ) == 0 )
          continue;
        else
        {
          fprintf( TraceFP( ), "...complete:%s\n", buf );
        }
      }
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "...done with stdin arguments\n" );
    }
    if ( buf != 0 )
    {
      free( buf );
    }
  }
  if ( LYValidate == 1 )
  {
    parse_restrictions( "all" );
    LYUseTraceLog = 0;
  }
  if ( lynx_cmd_script != 0 )
  {
    LYTildeExpand( &lynx_cmd_script, 1 );
    LYOpenCmdScript( );
  }
  if ( lynx_cmd_logfile != 0 )
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
      if ( cp != 0 )
        goto B146;
    }
B146:    HTSACopy( &lynx_cfg_file, cp );
  }
  if ( lynx_cfg_file == 0 )
    HTSACopy( &lynx_cfg_file, "/etc/lynx-cur/lynx.cfg" );
  LYTildeExpand( &lynx_cfg_file, 0 );
  if ( ( LYCanReadFile( lynx_cfg_file ) & 255 ) == 0 )
  {
    fprintf( *(int*)(135965404), gettext( "\nConfiguration file \"%s\" is not available.\n\n" ), lynx_cfg_file );
    exit_immediately( 1 );
  }
  if ( LYCharSetsDeclared( ) == 0 )
  {
    fprintf( *(int*)(135965404), gettext( "\nLynx character sets not declared.\n\n" ) );
    exit_immediately( 1 );
  }
  current_char_set = safeUCGetLYhndl_byMIME( "iso-8859-1" );
  UCLYhndl_for_unspec = LATIN1;
  HTSACopy( &UCAssume_MIMEcharset, LYCharSet_UC[ UCLYhndl_for_unspec ].MIMEname );
  if ( LYEditmapDeclared( ) == 0 )
  {
    fprintf( *(int*)(135965404), gettext( "\nLynx edit map not declared.\n\n" ) );
    exit_immediately( 1 );
  }
  lynx_setup_colors( );
  if ( strcmp( Current_Dir( filename ), "." ) == 0 )
  {
    cp = LYGetEnv( "PWD" );
    if ( cp != 0 )
      HTSACopy( &original_dir, cp );
      if ( ( LYPathOffHomeOK( filename, 256 ) & 255 ) != 0 )
      {
        HTSACopy( &LynxSigFile, filename );
        LYAddPathToHome( filename, 256, LynxSigFile );
        HTSACopy( &LynxSigFile, filename );
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "LYNX_SIG_FILE set to '%s'\n", LynxSigFile );
        }
      }
      else
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "LYNX_SIG_FILE '%s' is bad. Ignoring.\n", ".lynxsig" );
      }
      HTSwitchDTD( 1 );
      read_cfg( lynx_cfg_file, "main program", 1, 0 );
      if ( lynx_lss_file2 != 0 )
      {
        if ( lynx_lss_file != 0 )
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
          if ( cp != 0 )
            goto B202;
        }
B202:        HTSACopy( &lynx_lss_file, cp );
      }
      if ( lynx_lss_file == 0 )
        HTSACopy( &lynx_lss_file, "/etc/lynx-cur/lynx.lss" );
      LYTildeExpand( &lynx_lss_file, 1 );
      if ( lynx_lss_file != 0 && ( lynx_lss_file[0] & 255 ) != 0 && ( LYCanReadFile( lynx_lss_file ) & 255 ) == 0 )
      {
        fprintf( *(int*)(135965404), gettext( "\nLynx file \"%s\" is not available.\n\n" ), lynx_lss_file );
        exit_immediately( 1 );
      }
      style_readFromFile( lynx_lss_file );
      read_rc( 0 );
      LYFindLocaleCharset( );
      cp = LYGetEnv( "WWW_HOME" );
      if ( cp != 0 )
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
        //i++;
      }
      if ( LYStdinArgs != 0 )
      {
        char *my_args[2];
        HTList *cur = LYStdinArgs;
        my_args[1] = 0;
        while ( 1 )
        {
          if ( cur != 0 )
          {
            cur = cur->next;
            my_args[0] = cur == 0 ? 0 : (char*)cur->object;
            if ( my_args[0] == 0 )
              break;
            else
            {
              parse_arg( my_args, 4, 0 );
            }
          }
          my_args[0] = cur == 0 ? 0 : (char*)cur->object;
        }
        LYStdinArgs_free( );
      }
      if ( LYGetStdinArgs == 0 && ( startfile_stdin & 255 ) == 0 && isatty( fileno( *(int*)(135965416) ) ) == 0 )
      {
        if ( isatty( fileno( *(int*)(135965440) ) == 0 && isatty( fileno( *(int*)(135965404) ) ) == 0 ? 0 : 1 ) != 0 )
        {
          int ignored = 0;
          int ch;
          for ( ; ch != -1; ignored++ )
          {
            //ignored++;
          }
          if ( ignored != 0 )
          {
            fprintf( *(int*)(135965404), gettext( "Ignored %d characters from standard input.\n" ), ignored );
            fprintf( *(int*)(135965404), gettext( "Use \"-stdin\" or \"-\" to tell how to handle piped input.\n" ) );
          }
        }
      }
      if ( ( startfile_stdin & 255 ) != 0 )
      {
        char result[256];
        char *buf = 0;
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "processing stdin startfile\n" );
        }
        fp = LYOpenTemp( result, ".html", "w" );
        if ( fp != 0 )
          HTSACopy( &startfile, result );
        else
        if ( ( WWW_TraceFlag & 255 ) != 0 )
          goto B264;
B264:        fprintf( TraceFP( ), "...done stdin startfile\n" );
      }
      if ( Old_DTD != 0 )
        HTSwitchDTD( Old_DTD == 0 );
      HTMLUseCharacterSet( current_char_set );
      if ( ( persistent_cookies & 255 ) != 0 )
      {
        if ( LYCookieFile == 0 )
        {
          LYCookieFile = malloc( 256 );
          LYAddPathToHome( LYCookieFile, 256, ".lynx_cookies" );
        }
        LYTildeExpand( &LYCookieFile, 0 );
        LYLoadCookies( LYCookieFile );
      }
      if ( LYCookieSaveFile != 0 )
        LYTildeExpand( &LYCookieSaveFile, 0 );
      if ( LYCookieSaveFile == 0 )
      {
        if ( ( dump_output_immediately & 255 ) != 0 )
          HTSACopy( &LYCookieSaveFile, "/dev/null" );
        else
          HTSACopy( &LYCookieSaveFile, LYCookieFile );
      }
      cp = LYGetEnv( "LYNX_HELPFILE" );
      if ( cp != 0 )
        HTSACopy( &helpfile, cp );
      HTSACopy( &helpfilepath, helpfile );
      cp = LYPathLeaf( helpfilepath );
      if ( helpfilepath != cp )
        cp[0] = 0;
      LYAddHtmlSep( &helpfilepath );
      cp = LYGetEnv( "LYNX_SAVE_SPACE" );
      if ( cp != 0 )
        HTSACopy( &lynx_save_space, cp );
      if ( lynx_save_space != 0 && ( lynx_save_space[0] & 255 ) == 0 && lynx_save_space != 0 )
      {
        free( lynx_save_space );
        lynx_save_space = 0;
      }
      if ( lynx_save_space != 0 )
      {
        LYTildeExpand( &lynx_save_space, 1 );
        LYAddPathSep( &lynx_save_space );
      }
      HTFormatInit( );
      if ( ( FileInitAlreadyDone & 255 ) == 0 )
        HTFileInit( );
      if ( ( LYCheckUserAgent( ) & 255 ) == 0 )
      {
        HTAlwaysAlert( gettext( "Warning:" ), gettext( "User-Agent string does not contain \"Lynx\" or \"L_y_n_x\"" ) );
      }
      if ( ( LYPreparsedSource & 255 ) != 0 )
        HTPreparsedFormatInit( );
      if ( ( emacs_keys & 255 ) != 0 )
        set_emacs_keys( );
      if ( ( vi_keys & 255 ) != 0 )
        set_vi_keys( );
      if ( ( no_numbers & 255 ) != 0 )
      {
        number_links = 0;
        number_fields = 0;
        keypad_mode = 0;
        set_numbers_as_arrows( );
      }
      if ( ( crawl & 255 ) != 0 && ( number_links & 255 ) == 0 )
        keypad_mode = 0;
      if ( keypad_mode != 1 && keypad_mode != 2 )
      {
        if ( ( number_fields & 255 ) != 0 )
          keypad_mode = 2;
        if ( ( number_links & 255 ) != 0 )
          keypad_mode = 1;
        set_numbers_as_arrows( );
      }
      if ( ( LYUseDefSelPop & 255 ) == 0 )
        LYSelectPopups = ( LYSelectPopups & 255 ) == 0;
      if ( ( LYUseDefShoCur & 255 ) == 0 )
        LYShowCursor = ( LYShowCursor & 255 ) == 0;
      if ( ( LYPrependBase & 255 ) != 0 && HTAtom_for( "www/download" ) == HTOutputFormat )
        LYPrependBaseToSource = 1;
      if ( ( no_multibook & 255 ) != 0 )
        LYMBMBlocked = 1;
      if ( ( dump_output_immediately & 255 ) != 0 || ( LYMBMBlocked & 255 ) != 0 || ( no_multibook & 255 ) != 0 )
      {
        LYMultiBookmarks = 0;
        LYMBMBlocked = 1;
        no_multibook = 1;
      }
      if ( ( dump_output_immediately & 255 ) != 0 )
        LYCacheSource = 0;
      if ( ( dump_output_immediately & 255 ) != 0 )
        display_partial_flag = 0;
      if ( ( dump_output_immediately & 255 ) == 0 )
        signal( 1, &cleanup_sig );
      signal( 15, &cleanup_sig );
      LYExtSignal( 28, &size_change );
      if ( ( WWW_TraceFlag & 255 ) == 0 && ( dump_output_immediately & 255 ) == 0 && ( stack_dump & 255 ) == 0 )
      {
        signal( 2, &cleanup_sig );
        signal( 11, &FatalProblem );
        signal( 4, &FatalProblem );
        if ( signal( 13, 1 ) != 1 )
          restore_sigpipe_for_children = 1;
      }
      if ( ( no_suspend & 255 ) != 0 )
        signal( 20, 1 );
      if ( ( HEAD_request & 255 ) != 0 && LYCanDoHEAD( startfile ) != 1 )
      {
        fprintf( *(int*)(135965404), "The '-head' switch is for http HEAD requests and cannot be used for\n'%s'.\n", startfile );
        exit_immediately( 1 );
      }
      if ( ( keep_mime_headers & 255 ) != 0 && LYCanDoHEAD( startfile ) != 1 )
      {
        fprintf( *(int*)(135965404), "The '-mime_header' switch is for http URLs and cannot be used for\n'%s'.\n", startfile );
        exit_immediately( 1 );
      }
      if ( ( traversal & 255 ) != 0 && strncmp( startfile, "http", 4 ) != 0 )
      {
        fprintf( *(int*)(135965404), "The '-traversal' switch is for http URLs and cannot be used for\n'%s'.\n", startfile );
        exit_immediately( 1 );
      }
      if ( ( dump_output_immediately & 255 ) == 0 )
        HTMLSRC_init_caches( 0 );
      if ( ( dump_output_immediately & 255 ) == 0 )
        setup( terminal );
      LYEnsureAbsoluteURL( &startfile, "STARTFILE", 0 );
      if ( homepage != 0 )
        LYEnsureAbsoluteURL( &homepage, "HOMEPAGE", 0 );
      if ( homepage == 0 || ( homepage[0] & 255 ) == 0 )
      {
        HTSACopy( &homepage, startfile );
      }
      HTSACopy( &LynxHome, homepage );
      if ( ( inlocaldomain( ) & 255 ) != 0 )
      {
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "LYMain: User in Local domain\n" );
        }
        telnet_ok = ( no_inside_telnet & 255 ) != 0 || ( telnet_ok & 255 ) == 0 ? 0 : 1;
        news_ok = ( no_inside_news & 255 ) != 0 || ( news_ok & 255 ) == 0 ? 0 : 1;
        ftp_ok = ( no_inside_ftp & 255 ) != 0 || ( ftp_ok & 255 ) == 0 ? 0 : 1;
        rlogin_ok = ( no_inside_rlogin & 255 ) != 0 || ( rlogin_ok & 255 ) == 0 ? 0 : 1;
      }
      else
      {
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "LYMain: User in REMOTE domain\n" );
        }
        telnet_ok = ( no_outside_telnet & 255 ) != 0 || ( telnet_ok & 255 ) == 0 ? 0 : 1;
        news_ok = ( no_outside_news & 255 ) != 0 || ( news_ok & 255 ) == 0 ? 0 : 1;
        ftp_ok = ( no_outside_ftp & 255 ) != 0 || ( ftp_ok & 255 ) == 0 ? 0 : 1;
        rlogin_ok = ( no_outside_rlogin & 255 ) != 0 || ( rlogin_ok & 255 ) == 0 ? 0 : 1;
      }
      LYSetConfigValue( "broken_ftp_retr", "ProFTPD 1.2.5" );
      LYSetConfigValue( "broken_ftp_retr", "spftp/" );
      LYSetConfigValue( "broken_ftp_epsv", "(Version wu-2.6.2-12)" );
      if ( bookmark_page == 0 || ( bookmark_page[0] & 255 ) == 0 )
      {
        temp = 0;
        HTSprintf0( &temp, "lynx_bookmarks%s", ".html" );
        set_default_bookmark_page( temp );
        if ( temp != 0 )
        {
          free( temp );
          temp = 0;
        }
      }
      if ( BookmarkPage == 0 || ( BookmarkPage[0] & 255 ) == 0 )
        set_default_bookmark_page( bookmark_page );
      LYOpenlog( syslog_txt );
      if ( x_display != 0 && ( x_display[0] & 255 ) != 0 )
        LYisConfiguredForX = 1;
      if ( ( dump_output_immediately & 255 ) != 0 )
      {
        if ( ( crawl & 255 ) != 0 && ( number_links & 255 ) == 0 && ( number_fields & 255 ) == 0 )
          keypad_mode = 0;
        else
        if ( ( no_numbers & 255 ) != 0 )
          keypad_mode = 0;
        else
        if ( ( no_list & 255 ) == 0 && keypad_mode != 1 && keypad_mode != 2 )
        {
          if ( ( number_fields & 255 ) != 0 )
            keypad_mode = 2;
          else
            keypad_mode = 1;
        }
        if ( dump_output_width >= 1 )
          LYcols = dump_output_width;
        HTAddGotoURL( startfile );
        i = HTList_count( Goto_URLs ) - 1;
        for ( ; i < 0; i-- )
        {
          HTSACopy( &startfile, HTList_objectAt( Goto_URLs, i ) );
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "dumping %d:%d %s\n", i + 1, HTList_count( Goto_URLs ), startfile );
            status = mainloop( );
            if ( ( no_list & 255 ) == 0 )
            {
              if ( ( crawl & 255 ) == 0 )
                printlist( *(int*)(135965440), 0 );
                if ( i != 0 )
                  putchar( 10 );
                  //i--;
                else
                {
                  //i--;
                }
            }
          }
          else
          {
            status = mainloop( );
          }
        }
      }
      else
      {
        cache_tag_styles( );
        if ( ( with_backspaces & 255 ) != 0 )
          with_backspaces = 0;
        ena_csi( LYlowest_eightbit[ current_char_set ] > 155 );
        status = mainloop( );
        LYCloseCloset( 1 );
        LYCloseCloset( 3 );
        cleanup( );
        exit_immediately( status );
        if ( ( 0 ^ 0 ) != 0 )
        {
          __stack_chk_fail( );
        }
        return status;
      }
  }
  else
    HTSACopy( &original_dir, filename );
  LYstrncpy( filename, ".lynxsig", 255 );
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
  if ( ( no_option_save & 255 ) == 0 )
  {
    tempfile = calloc( 256, sizeof( char ) );
    if ( tempfile == 0 )
    {
      HTAlwaysAlert( 0, gettext( "Not enough memory!" ) );
    }
    rcfp = LYOpenTemp( tempfile, ".rc", "w" );
    if ( rcfp == 0 )
    {
      if ( tempfile != 0 )
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
        if ( tempfile != 0 )
        {
          free( tempfile );
          tempfile = 0;
          return;
        }
        else
        {
          return;
        }
      }
      else
      {
        BOOLEAN persistent_cookies_flag = persistent_cookies;
        char *LYCookieFile_flag = 0;
        char *LYCookieSaveFile_flag = 0;
        if ( ( persistent_cookies & 255 ) != 0 )
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
        if ( tempfile != 0 )
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
        if ( ( persistent_cookies & 255 ) != 0 )
        {
          if ( strcmp( LYCookieFile, LYCookieFile_flag ) != 0 )
          {
            HTSACopy( &LYCookieFile, LYCookieFile_flag );
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), "cookie file can be changed in next session only, restored.\n" );
            }
          }
          if ( strcmp( LYCookieSaveFile, LYCookieSaveFile_flag ) != 0 )
          {
            HTSACopy( &LYCookieSaveFile, LYCookieSaveFile_flag );
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), "cookie save file can be changed in next session only, restored.\n" );
            }
          }
          if ( LYCookieFile_flag != 0 )
          {
            free( LYCookieFile_flag );
            LYCookieFile_flag = 0;
          }
          if ( LYCookieSaveFile_flag != 0 )
          {
            free( LYCookieSaveFile_flag );
            return;
          }
          else
          {
            return;
          }
        }
        else
        {
          return;
        }
      }
    }
  }
  else
  {
    return;
  }
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
  if ( next_arg != 0 )
  {
    HTSACopy( &auth_info, next_arg );
    memset( next_arg, 32, strlen( next_arg ) );
  }
  if ( auth_info != 0 )
  {
    char *cp = strchr( auth_info, 58 );
    if ( cp != 0 )
    {
      cp[0] = 0;
      cp++;
      HTUnEscape( cp );
      HTSACopy( &result[1], cp );
    }
    if ( ( auth_info[0] & 255 ) != 0 )
    {
      HTUnEscape( auth_info );
      HTSACopy( result, auth_info );
    }
    if ( auth_info != 0 )
    {
      free( auth_info );
      auth_info = 0;
    }
  }
  return 0;
}
int anonymous_fun( char *next_arg )
{
  if ( ( LYValidate & 255 ) == 0 && ( LYRestricted & 255 ) == 0 )
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
  parse_authentication( next_arg, authentication_info );
  return 0;
}
int base_fun( char *next_arg )
{
  LYPrependBase = 1;
  if ( HTAtom_for( "www/dump" ) == HTOutputFormat )
  {
    HTOutputFormat = HTAtom_for( "www/download" );
  }
  return 0;
}
int cache_fun( char *next_arg )
{
  if ( next_arg != 0 )
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
  if ( next_arg != 0 )
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
    fprintf( *(int*)(135965404), gettext( "Lynx: ignoring unrecognized charset=%s\n" ), next_arg );
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
  if ( next_arg != 0 )
  {
    HTSACopy( &editor, next_arg );
  }
  system_editor = 1;
  return 0;
}
int error_file_fun( char *next_arg )
{
  if ( next_arg != 0 )
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
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "get_data:%s\n", get_data[0] );
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 )
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
  static Config_Enum table[4] = { { "merge", 0,  }
, { "listonly", 1,  }
, { "ignore", 2,  }
, { 0, -1,  }
,  };
  if ( next_arg != 0 )
  {
    if ( ( LYgetEnum( table, next_arg, &LYHiddenLinks ) & 255 ) == 0 )
    {
      print_help_and_exit( -1 );
    }
    return 0;
  }
  else
  {
    LYHiddenLinks = 0;
    return 0;
  }
}
int homepage_fun( char *next_arg )
{
  if ( next_arg != 0 )
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
  HTOutputFormat = ( LYPrependBase & 255 ) != 0 ? HTAtom_for( "www/download" ) : HTAtom_for( "www/dump" );
  LYcols = 1014;
  return 0;
}
int newschunksize_fun( char *next_arg )
{
  if ( next_arg != 0 )
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
  if ( next_arg != 0 )
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
  parse_authentication( next_arg, proxyauth_info );
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
  switch ( find_restriction( name, -1 ) )
  {
  case 1:
    value = "on";
    break;
  case 0:
    value = "off";
    break;
  default:
    value = "?";
    break;
  }
  return value;
}
int restrictions_fun( char *next_arg )
{
  static struct {
     char *name;
     char *help;
  } table[38] = { { "all", "restricts all options.",  }
, { "bookmark", "disallow changing the location of the bookmark file",  }
, { "bookmark_exec", "disallow execution links via the bookmark file",  }
, { "change_exec_perms", "disallow changing the eXecute permission on files\n(but still allow it for directories) when local file\nmanagement is enabled.",  }
, { "chdir", "disallow changing the working directory of lynx, e.g.,\nto affect the behavior of download command",  }
, { "compileopts_info", "disable info on options used to compile the binary",  }
, { "default", "same as commandline option -anonymous.  Sets the\ndefault service restrictions for anonymous users.  Set to\nall restricted, except for: inside_telnet, outside_telnet,\ninside_ftp, outside_ftp, inside_rlogin, outside_rlogin,\ninside_news, outside_news, telnet_port, jump, mail, print,\nexec, and goto.  The settings for these, as well as\nadditional goto restrictions for specific URL schemes\nthat are also applied, are derived from definitions\nwithin userdefs.h.",  }
, { "dired_support", "disallow local file management",  }
, { "disk_save", "disallow saving to disk in the download and print menus",  }
, { "dotfiles", "disallow access to, or creation of, hidden (dot) files",  }
, { "download", "disallow some downloaders in the download menu",  }
, { "editor", "disallow editing",  }
, { "exec", "disable execution scripts",  }
, { "exec_frozen", "disallow the user from changing the execution link option",  }
, { "externals", "disable passing URLs to some external programs",  }
, { "file_url", "disallow using G)oto, served links or bookmarks for\nfile: URL's",  }
, { "goto", "disable the 'g' (goto) command",  }
, { "inside_ftp", "disallow ftps coming from inside your domain",  }
, { "inside_news", "disallow USENET news reading and posting coming\nfrom inside your domain",  }
, { "inside_rlogin", "disallow rlogins coming from inside your domain",  }
, { "inside_telnet", "disallow telnets coming from inside your domain",  }
, { "jump", "disable the 'j' (jump) command",  }
, { "lynxcfg_info", "disable viewing of lynx.cfg configuration file info",  }
, { "lynxcfg_xinfo", "disable extended lynx.cfg viewing and reloading",  }
, { "lynxcgi", "disallow execution of Lynx CGI URLs",  }
, { "mail", "disallow mail",  }
, { "multibook", "disallow multiple bookmark files",  }
, { "news_post", "disallow USENET News posting.",  }
, { "option_save", "disallow saving options in .lynxrc",  }
, { "outside_ftp", "disallow ftp coming from outside your domain",  }
, { "outside_news", "disallow USENET news reading and posting coming\nfrom outside your domain",  }
, { "outside_rlogin", "disallow rlogins coming from outside your domain",  }
, { "outside_telnet", "disallow telnets coming from outside your domain",  }
, { "print", "disallow most print options",  }
, { "shell", "disallow shell escapes, and lynxexec, lynxprog or lynxcgi\nG)oto's",  }
, { "suspend", "disallow Control-Z suspends with escape to shell",  }
, { "telnet_port", "disallow specifying a port in telnet G)oto's",  }
, { "useragent", "disallow modifications of the User-Agent header",  }
,  };
  static char *Usage[4] = { "", "USAGE: lynx -restrictions=[option][,option][,option]", "List of Options:", "  ?                 when used alone, list restrictions in effect.",  };
  unsigned int j, k, column = 0;
  char *name;
  char *value;
  BOOLEAN found;
  BOOLEAN first;
  if ( next_arg == 0 || ( next_arg[0] & 255 ) == 0 )
  {
    j = 0;
    for ( ; j <= 3; j++ )
    {
      puts( Usage[ j ] );
      //j++;
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
      //j++;
    }
    first = 1;
    j = 0;
    while ( 1 )
    {
      found = 0;
      name = index_to_restriction( (int)j );
      if ( name != 0 )
      {
        k = 0;
        for ( ; k <= 37; k++ )
        {
          if ( strcmp( name, table[ k ].name ) == 0 )
            found = 1;
          //k++;
        }
        if ( found == 0 )
        {
          if ( first != 0 )
            puts( "Other restrictions (see the user's guide):" );
          value = show_restriction( table[ j ].name );
          printf( "%s%s (%s)", column == 0 ? "  " : ", ", name, value );
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
        if ( column != 0 )
          putchar( 10 );
        exit_immediately( 0 );
      }
    }
  }
  else
  {
    if ( next_arg[0] == '?' )
    {
      print_restrictions_to_fd( *(int*)(135965440) );
      exit_immediately( 0 );
    }
    parse_restrictions( next_arg );
    return 0;
  }
}
int selective_fun( char *next_arg )
{
  HTDirAccess = 1;
  return 0;
}
int source_fun( char *next_arg )
{
  force_dump_mode( );
  HTOutputFormat = ( LYPrependBase & 255 ) != 0 ? HTAtom_for( "www/download" ) : HTAtom_for( "www/dump" );
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
  if ( next_arg != 0 )
  {
    int w = atoi( next_arg );
    if ( w >= 1 )
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
  pad = field_width + ( ( option * -1 ) - 2 - strlen( name ) );
  fprintf( *(int*)(135965440), "  %s%s", option == 0 ? "" : "-", name );
  if ( help[0] != '=' )
  {
    pad--;
    for ( ; pad < 1; pad-- )
    {
      fputc( 32, *(int*)(135965440) );
      //pad--;
    }
  }
  else
    first = pad;
  if ( strchr( help, 10 ) == 0 )
  {
    fputs( help, *(int*)(135965440) );
  }
  while ( c = help[0], c == 0 )
  {
    if ( c == 10 )
    {
      first--;
      pad = first;
      if ( pad < 0 )
        pad = field_width;
        fputc( c, *(int*)(135965440) );
      else
        c = 32;
        fputc( c, *(int*)(135965440) );
    }
    else
    {
      fputc( c, *(int*)(135965440) );
      help++;
      first--;
    }
  }
}
void print_help_and_exit( int exit_status )
{
  Config_Type *p;
  if ( pgm == 0 )
    pgm = "lynx";
  fprintf( *(int*)(135965440), gettext( "USAGE: %s [options] [file]\n" ), pgm );
  fprintf( *(int*)(135965440), gettext( "Options are:\n" ) );
  print_help_strings( "", "receive options and arguments from stdin", 0, 1 );
  p = Arg_Table;
  for ( ; p->name == 0; p++ )
  {
    char temp[1024], *value = temp;
    ParseUnion *q = &p->value/*error:'l'*/;
    switch ( p->type & 4080 )
    {
      if ( ( p->type & 4080 ) != 16 && ( p->type & 4080 ) != 32 )
      {
        value = 0;
        print_help_strings( p->name, p->help_string, value, 1 );
        //p++;
      }
      else
      {
        strcpy( temp, ( q->override_primary_action/*error:'c'*/ & 255 ) == 0 ? "off" : "on" );
      }
      break;
    default:
      value = 0;
      break;
    case 48:
      strcpy( temp, ( q->override_primary_action/*error:'c'*/ & 255 ) == 0 ? "on" : "off" );
      break;
    case 96:
      sprintf( temp, "%d", q[0].add_value[0] );
      break;
    case 128:
      sprintf( temp, "%.3f", (double)( q[0].add_value[0] ) / 1000.000000000000 );
      break;
    case 112:
      value = (char*)q[0].add_value[0];
      if ( value != 0 && ( value[0] & 255 ) == 0 )
        value = 0;
      break;
    }
  }
}
int arg_eqs_parse( char *a, char *b, char **c )
{
  int result = -1;
  c[0] = 0;
  for ( ; result < 0; b++ )
  {
    if ( b[0] != a[0] || ( a[0] & 255 ) == 0 || ( b[0] & 255 ) == 0 )
    {
      if ( ( a[0] & 255 ) == 0 )
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
          if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( b[1] * 2 )) & 1024 ) != 0 )
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
    //b++;
  }
  return result;
}
BOOLEAN parse_arg( char **argv, unsigned int mask, int *countp )
{
  static BOOLEAN no_options_further;
  Config_Type *p;
  char *arg_name = argv[0];
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "parse_arg(arg_name=%s, mask=%u, count=%d)\n", arg_name, mask, countp == 0 ? -1 : countp[0] );
  }
  if ( mask == countp == 0 )
  {
    no_options_further = 0;
    if ( nonoption != 0 && nonoption != 0 )
    {
      free( nonoption );
      nonoption = 0;
    }
  }
  if ( arg_name[0] != '-' || no_options_further == 1 )
  {
    if ( mask == 4 )
    {
      if ( nonoption != 0 )
      {
        LYEnsureAbsoluteURL( &nonoption, "NONOPTION", 0 );
        HTAddGotoURL( nonoption );
        if ( nonoption != 0 )
        {
          free( nonoption );
          nonoption = 0;
        }
      }
      HTSACopy( &nonoption, arg_name );
    }
    HTSACopy( &startfile, arg_name );
    LYEscapeStartfile( &startfile );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "parse_arg startfile:%s\n", startfile );
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    if ( strcmp( arg_name, "--" ) == 0 )
    {
      no_options_further = 1;
      return 1;
    }
    else
    {
      arg_name++;
      if ( ( arg_name[0] & 255 ) == 0 )
      {
        return 1;
      }
      else
      {
        if ( arg_name[0] == '-' )
          arg_name++;
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "parse_arg lookup(%s)\n", arg_name );
        }
        p = Arg_Table;
        while ( p->name != 0 )
        {
          ParseUnion *q = &p->value/*error:'l'*/;
          ParseFunc fun;
          char *next_arg = 0;
          char *temp_ptr = 0;
          if ( p->name[0] == arg_name[0] && arg_eqs_parse( p->name, arg_name, &next_arg ) != 0 )
          {
            if ( ( p->type & 4096 ) != 0 )
            {
              if ( next_arg == 0 )
              {
                next_arg = argv[1];
                if ( countp != 0 && next_arg != 0 )
                  countp[0]++;
              }
              if ( ( WWW_TraceFlag & 255 ) != 0 )
              {
                fprintf( TraceFP( ), "...arg:%s\n", next_arg == 0 ? "(null)" : next_arg );
              }
            }
            if ( ( p->type & mask ) == 0 )
            {
              if ( ( WWW_TraceFlag & 255 ) != 0 )
              {
                fprintf( TraceFP( ), "...skip (mask %u/%d)\n", mask, p->type & 7 );
              }
              break;
            }
            else
            {
              switch ( p->type & 4080 )
              {
                if ( ( p->type & 4080 ) != 32 && ( p->type & 4080 ) != 48 && ( p->type & 4080 ) != 16 )
                {
                }
                else
                {
                  if ( q[0].add_value/*union*/ != 0 )
                  {
                    if ( next_arg == 0 )
                    {
                      switch ( p->type & 4080 )
                      {
                      case 16:
                        q[0].add_value[0] = ( q->override_primary_action/*error:'c'*/ & 255 ) == 0;
                        break;
                      case 32:
                        q[0].add_value[0] = 1;
                        break;
                      case 48:
                        q[0].add_value[0] = 0;
                        break;
                      }
                      Old_DTD = DTD_recovery;
                      break;
                    }
                    else
                    {
                      if ( next_arg[0] == '1' || next_arg[0] == '+' || strcasecomp( next_arg, "on" ) == 0 || strcasecomp( next_arg, "true" ) == 0 )
                        q[0].add_value[0] = 1;
                      else
                      {
                        if ( next_arg[0] == '0' || next_arg[0] == '-' || strcasecomp( next_arg, "off" ) == 0 || strcasecomp( next_arg, "false" ) == 0 )
                          q[0].add_value[0] = 0;
                      }
                    }
                  }
                }
                break;
                break;
              default:
                break;
              case 64:
                fun = &q[0].add_value/*union*/;
                if ( fun != 0 )
                {
                  fun( next_arg );
                  break;
                }
                break;
              case 80:
                if ( q[0].add_value/*union*/ != 0 && next_arg != 0 )
                {
                  HTSACopy( (int)( &q[0].add_value/*union*/ ), next_arg );
                }
                break;
              case 96:
                if ( q[0].add_value/*union*/ != 0 && next_arg != 0 )
                {
                  q[0].add_value[0] = strtol( next_arg, &temp_ptr, 0 );
                }
                break;
              case 128:
                if ( q[0].add_value/*union*/ != 0 && next_arg != 0 && sscanf( next_arg, "%f", &ival ) == 1 )
                  q[0].add_value[0] = (int)( ival * 1000.000000000000 );
                break;
              case 112:
                if ( q[0].add_value/*union*/ != 0 && next_arg != 0 )
                  q[0].add_value[0] = &next_arg[0]/*error:'c'*/;
                break;
              }
            }
          }
          else
          {
            p++;
          }
        }
        if ( pgm == 0 )
          pgm = "LYNX";
        fprintf( *(int*)(135965404), gettext( "%s: Invalid Option: %s\n" ), pgm, argv[0] );
        print_help_and_exit( -1 );
        return 1;
      }
    }
  }
}
void FatalProblem( int sig )
{
  signal( 1, 1 );
  signal( 15, 1 );
  signal( 2, 1 );
  signal( 11, 1 );
  signal( 4, 1 );
  fflush( *(int*)(135965404) );
  fflush( *(int*)(135965440) );
  if ( ( LYOutOfMemory & 255 ) != 0 && ( LYCursesON & 255 ) != 0 )
    LYSleepAlert( );
  cleanup_sig( 0 );
  signal( 11, 0 );
  signal( 4, 0 );
  if ( ( LYOutOfMemory & 255 ) == 0 )
  {
    fprintf( *(int*)(135965404), "\r\nA Fatal error has occurred in %s Ver. %s\r\n", "Lynx", "2.8.7dev.11" );
    fwrite( "\r\nPlease notify your system administrator to confirm a bug, and\r\nif confirmed, to notify the lynx-dev list.  Bug reports should\r\nhave concise descriptions of the command and/or URL which causes\r\nthe problem, the operating system name with version number, the\r\nTCPIP implementation, and any other relevant information.\r\n", 1, 319, *(int*)(135965404) );
    if ( sig != 0 || ( LYNoCore & 255 ) == 0 )
      fwrite( "\r\nDo NOT mail the core file if one was generated.\r\n", 1, 51, *(int*)(135965404) );
    if ( sig != 0 )
      fprintf( *(int*)(135965404), "\r\nLynx now exiting with signal:  %d\r\n\r\n", sig );
    if ( ( LYNoCore & 255 ) != 0 )
      exit_immediately( 1 );
    abort( );
  }
  else
  {
    LYOutOfMemory = 0;
    printf( "\r\n%s\r\n\r\n", gettext( "Memory exhausted!  Program aborted!" ) );
    fflush( *(int*)(135965440) );
    exit_immediately( 1 );
    return;
  }
}
