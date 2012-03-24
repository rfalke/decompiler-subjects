#include "main.c.h"
static void fversion( FILE *f );
static void fusage( FILE *f, int err );
static void wrap_GC_warn_proc( char *msg, GC_word arg );
static void sig_chld( int signo );
static void keyPressEventProc( int c );
static void dump_source( Buffer *buf );
static void dump_head( Buffer *buf );
static void dump_extra( Buffer *buf );
static void do_dump( Buffer *buf );
static void escKeyProc( int c, int esc, unsigned char *map );
static void pushBuffer( Buffer *buf );
static void delBuffer( Buffer *buf );
static void repBuffer( Buffer *oldbuf, Buffer *buf );
static void resize_hook( int _dummy );
static void resize_screen( void );
static void SigPipe( int _dummy );
static void nscroll( int n, int mode );
static void clear_mark( Line *l );
static int srchcore( char *str, int (*func)( Buffer *, char * ) );
static void disp_srchresult( int result, char *prompt, char *str );
static int dispincsrch( int ch, Str buf, Lineprop *prop );
static void srch_nxtprv( int reverse );
static void shiftvisualpos( Buffer *buf, int shift );
static void cmd_loadfile( char *fn );
static void _movL( int n );
static void _movD( int n );
static void _movU( int n );
static void _movR( int n );
static int prev_nonnull_line( Line *line );
static int next_nonnull_line( Line *line );
static void _quitfm( int confirm );
static void _goLine( char *l );
static int cur_real_linenumber( Buffer *buf );
static Buffer *loadNormalBuf( Buffer *buf, int renderframe );
static Buffer *loadLink( char *url, char *target, char *referer, FormList *request );
static void gotoLabel( char *label );
static FormItemList *save_submit_formlist( FormItemList *src );
static Str conv_form_encoding( Str val, FormItemList *fi, Buffer *buf );
static void query_from_followform( Str *query, FormItemList *fi, int multipart );
static void _followForm( int submit );
static void _nextA( int visited );
static void _prevA( int visited );
static void nextX( int d, int dy );
static void nextY( int d );
static int checkBackBuffer( Buffer *buf );
static void cmd_loadURL( char *url, ParsedURL *current, char *referer, FormList *request );
static void goURL0( char *prompt, int relative );
static void cmd_loadBuffer( Buffer *buf, int prop, int linkid );
static void anchorMn( Anchor *(*menu_func)( Buffer * ), int go );
static void _peekURL( int only_img );
static Str currentURL( void );
static void _docCSet( wc_ces charset );
static void invoke_browser( char *url );
static int mouse_scroll_line( void );
static TabBuffer *posTab( int x, int y );
static void do_mouse_action( int btn, int x, int y );
static void process_mouse( int btn, int x, int y );
static int is_wordchar( int c, char *badchars );
static char *getCurWord( Buffer *buf, int *spos, int *epos, char *badchars );
static char *GetWord( Buffer *buf );
static void execdict( char *word );
static int searchKeyNum( void );
static void SigAlarm( int _dummy );
static void _newT( void );
static TabBuffer *numTab( int n );
static void followTab( TabBuffer *tab );
static void tabURL0( TabBuffer *tab, char *prompt, int relative );
static void moveTab( TabBuffer *t, TabBuffer *t2, int right );
static char *convert_size3( clen_t size );
static Buffer *DownloadListBuffer( void );
static void save_buffer_position( Buffer *buf );
static void resetPos( BufferPos *b );
static Event *CurrentEvent;
static Event *LastEvent;
static AlarmEvent DefaultAlarm;
static AlarmEvent *CurrentAlarm = &DefaultAlarm;
static int need_resize_screen;
static char *MarkString;
static char *SearchString;
static int display_ok;
static int add_download_list;
static int check_target = 1;
static GC_warn_proc orig_GC_warn_proc;
int REV_LB[5] = { 1, 0, 3, 2, 4,  };
int Tabstop = 8;
int IndentIncr = 4;
int ShowEffect = 1;
int PagerMax = 10000;
char SearchHeader;
char *DefaultType;
char RenderFrame;
char TargetSelf;
char PermitSaveToPipe;
char DecodeCTE;
char AutoUncompress;
char PreserveTimestamp = 1;
char ArgvIsURL;
char MetaRefresh;
char fmInitialized;
char QuietMessage;
char TrapSignal = 1;
char *HTTP_proxy;
char *GOPHER_proxy;
char *FTP_proxy;
ParsedURL HTTP_proxy_parsed;
ParsedURL GOPHER_proxy_parsed;
ParsedURL FTP_proxy_parsed;
char *NO_proxy;
int NOproxy_netaddr = 1;
int DNS_order;
TextList *NO_proxy_domains;
char NoCache;
char use_proxy = 1;
int Do_not_use_ti_te;
char *NNTP_server;
char *NNTP_mode;
int MaxNewsMessage = 50;
char *document_root;
char *personal_document_root;
char *cgi_bin;
char *index_file;
char *CurrentDir;
int CurrentPid;
TabBuffer *CurrentTab;
TabBuffer *FirstTab;
TabBuffer *LastTab;
int open_tab_blank;
int open_tab_dl_list;
int close_tab_back;
int nTab;
int TabCols = 10;
DownloadList *FirstDL;
DownloadList *LastDL;
int CurrentKey;
char *CurrentKeyData;
char *CurrentCmdData;
char *w3m_reqlog;
int w3m_debug;
int w3m_dump;
int w3m_halfload;
Str header_string;
int override_content_type;
int useColor = 1;
int basic_color = 8;
int anchor_color = 4;
int image_color = 2;
int form_color = 1;
int bg_color = 8;
int mark_color = 6;
int useActiveColor;
int active_color = 6;
int useVisitedColor;
int visited_color = 5;
int confirm_on_quit = 1;
int use_mark;
int emacs_like_lineedit;
int vi_prec_num;
int label_topline;
int nextpage_topline;
char *displayTitleTerm;
int displayLink;
int displayLineInfo;
int DecodeURL;
int retryAsHttp = 1;
int showLineNum;
int show_srch_str = 1;
char *Imgdisplay = "w3mimgdisplay";
int activeImage;
int displayImage = 1;
int autoImage = 1;
int useExtImageViewer = 1;
int maxLoadImage = 4;
int image_map_list = 1;
char *Editor = "/usr/bin/sensible-editor";
char *Mailer;
char *ExtBrowser = "/usr/bin/mozilla";
char *ExtBrowser2;
char *ExtBrowser3;
int BackgroundExtViewer = 1;
int disable_secret_security_check;
char *passwd_file = "~/.w3m/passwd";
char *pre_form_file = "~/.w3m/pre_form";
char *ftppasswd;
int ftppass_hostnamegen = 1;
int do_download;
char *image_source;
char *UserAgent;
int NoSendReferer;
char *AcceptLang;
char *AcceptEncoding;
char *AcceptMedia;
int WrapDefault;
int IgnoreCase = 1;
int WrapSearch;
int squeezeBlankLine;
char *BookmarkFile;
char *pauth;
Str proxy_auth_cookie;
int UseExternalDirBuffer = 1;
char *DirBufferCommand = "file:///$LIB/dirlist.cgi";
int UseDictCommand;
char *DictCommand = "file:///$LIB/w3mdict.cgi";
int ignore_null_img_alt = 1;
int displayInsDel = 1;
int FoldTextarea;
int FoldLine;
int DefaultURLString;
int MarkAllPages;
int use_migemo;
int migemo_active;
char *migemo_command = "migemo -t egrep /usr/share/migemo/migemo-dict";
struct auth_cookie *Auth_cookie;
struct cookie *First_cookie;
char *mailcap_files = "~/.w3m/mailcap, /etc/w3m/mailcap";
char *mimetypes_files = "~/.mime.types, /etc/mime.types";
char *urimethodmap_files = "~/.w3m/urimethodmap, /etc/w3m/urimethodmap";
TextList *fileToDelete;
Hist *LoadHist;
Hist *SaveHist;
Hist *URLHist;
Hist *ShellHist;
Hist *TextHist;
int UseHistory = 1;
int URLHistSize = 100;
int SaveURLHist = 1;
int multicolList;
wc_ces InnerCharset = 3211264;
wc_ces DisplayCharset = 3178565;
wc_ces DocumentCharset = 3178565;
wc_ces SystemCharset = 3178565;
wc_ces BookmarkCharset = 3178565;
char ExtHalfdump;
char FollowLocale = 1;
char UseContentCharset = 1;
char SearchConv = 1;
char SimplePreserveSpace;
char UseAltEntity = 1;
char UseGraphicChar;
int no_rc_dir;
char *rc_dir;
char *tmp_dir;
char *config_file;
int use_mouse = 1;
int reverse_mouse;
int relative_wheel_scroll;
int fixed_wheel_scroll_count = 5;
int relative_wheel_scroll_ratio = 30;
MouseAction mouse_action;
int default_use_cookie = 1;
int use_cookie;
int show_cookie = 1;
int accept_cookie;
int accept_bad_cookie;
char *cookie_reject_domains;
char *cookie_accept_domains;
TextList *Cookie_reject_domains;
TextList *Cookie_accept_domains;
int view_unseenobject;
int is_redisplay;
int clear_buffer = 1;
double pixel_per_char = 7.000000000000;
int set_pixel_per_char;
double pixel_per_line = 14.000000000000;
int set_pixel_per_line;
double image_scale = 100.000000000000;
int use_lessopen;
char *keymap_file = "keymap";
int FollowRedirection = 10;
int w3m_backend;
TextLineList *backend_halfdump_buf;
TextList *backend_batch_commands;
int (*searchRoutine)( Buffer *, char * );
sigjmp_buf IntReturn;
int show_params_p;
int prec_num;
int prev_key = -1;
int on_target = 1;
void fversion( FILE *f )
{
  fprintf( f, "w3m version %s, options %s\n", w3m_version, "lang=en,m17n,image,color,ansi-color,mouse,gpm,menu,cookie,external-uri-loader,w3mmailer,nntp,gopher,ipv6,alarm,mark,migemo" );
  return;
}
void fusage( FILE *f, int err )
{
  fversion( f );
  fwrite( "usage: w3m [options] [URL or filename]\noptions:\n", 1, 48, f );
  fwrite( "    -t tab           set tab width\n", 1, 35, f );
  fwrite( "    -r               ignore backspace effect\n", 1, 45, f );
  fwrite( "    -l line          # of preserved line (default 10000)\n", 1, 57, f );
  fwrite( "    -I charset       document charset\n", 1, 38, f );
  fwrite( "    -O charset       display/output charset\n", 1, 44, f );
  fwrite( "    -B               load bookmark\n", 1, 35, f );
  fwrite( "    -bookmark file   specify bookmark file\n", 1, 43, f );
  fwrite( "    -T type          specify content-type\n", 1, 42, f );
  fwrite( "    -m               internet message mode\n", 1, 43, f );
  fwrite( "    -v               visual startup mode\n", 1, 41, f );
  fwrite( "    -M               monochrome display\n", 1, 40, f );
  fwrite( "    -N               open URL of command line on each new tab\n", 1, 62, f );
  fwrite( "    -F               automatically render frame\n", 1, 48, f );
  fwrite( "    -cols width      specify column width (used with -dump)\n", 1, 60, f );
  fwrite( "    -ppc count       specify the number of pixels per character (4.0...32.0)\n", 1, 77, f );
  fwrite( "    -ppl count       specify the number of pixels per line (4.0...64.0)\n", 1, 72, f );
  fwrite( "    -dump            dump formatted page into stdout\n", 1, 53, f );
  fwrite( "    -dump_head       dump response of HEAD request into stdout\n", 1, 63, f );
  fwrite( "    -dump_source     dump page source into stdout\n", 1, 50, f );
  fwrite( "    -dump_both       dump HEAD and source into stdout\n", 1, 54, f );
  fwrite( "    -dump_extra      dump HEAD, source, and extra information into stdout\n", 1, 74, f );
  fwrite( "    -post file       use POST method with file content\n", 1, 55, f );
  fwrite( "    -header string   insert string as a header\n", 1, 47, f );
  fwrite( "    +&lt;num&gt;           goto &lt;num&gt; line\n", 1, 37, f );
  fwrite( "    -num             show line number\n", 1, 38, f );
  fwrite( "    -no-proxy        don't use proxy\n", 1, 37, f );
  fwrite( "    -4               IPv4 only (-o dns_order=4)\n", 1, 48, f );
  fwrite( "    -6               IPv6 only (-o dns_order=6)\n", 1, 48, f );
  fwrite( "    -no-mouse        don't use mouse\n", 1, 37, f );
  fwrite( "    -cookie          use cookie (-no-cookie: don't use cookie)\n", 1, 63, f );
  fwrite( "    -pauth user:pass proxy authentication\n", 1, 42, f );
  fwrite( "    -graph           use graphic character\n", 1, 43, f );
  fwrite( "    -no-graph        don't use graphic character\n", 1, 49, f );
  fwrite( "    -s               squeeze multiple blank lines\n", 1, 50, f );
  fwrite( "    -W               toggle wrap search mode\n", 1, 45, f );
  fwrite( "    -X               don't use termcap init/deinit\n", 1, 51, f );
  fwrite( "    -title[=TERM]    set buffer name to terminal title string\n", 1, 62, f );
  fwrite( "    -o opt=value     assign value to config option\n", 1, 51, f );
  fwrite( "    -show-option     print all config options\n", 1, 46, f );
  fwrite( "    -config file     specify config file\n", 1, 41, f );
  fwrite( "    -help            print this usage message\n", 1, 46, f );
  fwrite( "    -version         print w3m version\n", 1, 39, f );
  fwrite( "    -reqlog          write request logfile\n", 1, 43, f );
  fwrite( "    -debug           DO NOT USE\n", 1, 32, f );
  if ( show_params_p != 0 )
    show_params( f );
  exit( &err );
}
void wrap_GC_warn_proc( char *msg, GC_word arg )
{
  if ( ( fmInitialized & 255 ) != 0 )
  {
    static struct {
       char *msg;
       GC_word arg;
    } msg_ring[20];
    static int i;
    static int n;
    static int lock;
    int j = ( n + i ) - ( ( (/*HI*/int)( ( n + i ) * -858993459 ) >> 4 ) * 20 );
    msg_ring[ j ].msg = msg;
    msg_ring[ j ].arg = arg;
    if ( n <= 19 )
      n++;
    else
      i++;
    if ( lock == 0 )
    {
      lock = 1;
      for ( ; n >= 1; i++ )
      {
        i -= ( (/*HI*/int)( i * -858993459 ) >> 4 ) * 20;
        printf( msg_ring[ i ].msg, msg_ring[ i ].arg );
        sleep_till_anykey( 1, 1 );
        n--;
        //i++;
      }
      lock = 0;
      return;
    }
    else
    {
      return;
    }
  }
  else
  {
    if ( orig_GC_warn_proc != 0 )
    {
      orig_GC_warn_proc( msg, arg );
      return;
    }
    else
    {
      fprintf( *(int*)(135774692), msg, arg );
      return;
    }
  }
}
void sig_chld( int signo )
{
  int p_stat;
  pid_t pid;
  do
  {
    pid = waitpid( -1, &p_stat, 1 );
  }
  while ( pid >= 1 );
  mySignal( 17, &sig_chld );
  return;
}
Str make_optional_header_string( char *s )
{
  int eax;
  char *p;
  Str hs;
  if ( strchr( s, 10 ) != 0 || strchr( s, 13 ) != 0 )
  {
  }
  else
  {
    p = s;
    for ( ; ( p[0] & 255 ) != 0 && p[0] != ':'; p++ )
    {
      //p++;
    }
    if ( p[0] != ':' || s == p )
    {
    }
    else
    {
      hs = Strnew_size( strlen( s ) + 3 );
      Strcopy_charp_n( hs, s, p - s );
      if ( strcasecmp( hs->ptr, "content-type" ) == 0 )
        override_content_type = 1;
      Strcat_charp( hs, ": " );
      p++;
      if ( ( p[0] & 255 ) != 0 )
      {
        for ( ; ( p[0] & 255 ) != 0 && ( MYCTYPE_MAP[ p[0] ] & 2 ) != 0; p++ )
        {
          //p++;
        }
        Strcat_charp( hs, p );
      }
      Strcat_charp( hs, "\r\n" );
      hs->ptr = (char*)hs;
    }
  }
  return 0;
}
int main( int argc, char **argv, char **envp )
{
  int edx;
  double fp7;
  Buffer *newbuf;
  char *p, c;
  int i;
  InputStream redin;
  char *line_str;
  char **load_argv;
  FormList *request;
  int load_argc;
  int load_bookmark;
  int visual_start;
  int open_new_tab;
  char search_header;
  char *default_type;
  char *post_file;
  Str err_msg;
  char *Locale;
  wc_uint8 auto_detect;
  setlocale( );
  argc = "/usr/share/locale";
  ebp_4 = "w3m";
  *ebp_2147483632 = main+89;
  bindtextdomain( );
  ebp_4 = "w3m";
  *ebp_2147483632 = main+95;
  textdomain( );
  *ebp_2147483632 = main+9a;
  NO_proxy_domains = newGeneralList( );
  *ebp_2147483632 = main+a4;
  fileToDelete = newGeneralList( );
  ebp_4 = ( argc * 4 ) - 4;
  *ebp_2147483632 = main+ba;
  request = GC_malloc( );
  load_bookmark = 0;
  *ebp_2147483632 = main+cb;
  CurrentDir = currentdir( );
  *ebp_2147483632 = main+d5;
  CurrentPid = getpid( );
  BookmarkFile = 0;
  config_file = 0;
  redin = 1;
  for ( ; redin < argc; redin += 0 )
  {
    if ( argv[ redin ][0] == '-' )
    {
      argc = argv[ redin ];
      ebp_4 = "-config";
      *ebp_2147483632 = main+137;
      if ( strcmp( ) == 0 )
      {
        argv[ redin ] = "-dummy";
        redin += 0;
        if ( argc <= redin )
        {
          argc = 1;
          ebp_4 = *(int*)(135774692);
          *ebp_2147483632 = main+177;
          fusage( );
        }
        config_file = argv[ redin ];
        argv[ redin ] = "-dummy";
      }
      else
      {
        argc = argv[ redin ];
        ebp_4 = "-h";
        *ebp_2147483632 = main+1c2;
        if ( strcmp( ) != 0 )
        {
          argc = argv[ redin ];
          ebp_4 = "-help";
          *ebp_2147483632 = main+1e5;
          if ( strcmp( ) != 0 )
          {
            argc = argv[ redin ];
            ebp_4 = "-V";
            *ebp_2147483632 = main+21f;
            if ( strcmp( ) != 0 )
            {
              argc = argv[ redin ];
              ebp_4 = "-version";
              *ebp_2147483632 = main+242;
              if ( strcmp( ) != 0 )
                continue;
            }
            ebp_4 = *(int*)(135774752);
            *ebp_2147483632 = main+253;
            fversion( );
            ebp_4 = 0;
            *ebp_2147483632 = main+25f;
            exit( );
          }
        }
        argc = 0;
        ebp_4 = *(int*)(135774752);
        *ebp_2147483632 = main+1fe;
        fusage( );
      }
    }
    //redin += 0;
  }
  ebp_4 = "LC_ALL";
  *ebp_2147483632 = main+283;
  ebp_84 = getenv( );
  *ebp_2147483632 = main+293;
  if ( non_null( ) == 0 )
  {
    ebp_4 = "LC_CTYPE";
    *ebp_2147483632 = main+2a3;
    ebp_84 = getenv( );
    *ebp_2147483632 = main+2b3;
    if ( non_null( ) == 0 )
    {
      ebp_4 = "LANG";
      *ebp_2147483632 = main+2c3;
      ebp_84 = getenv( );
      *ebp_2147483632 = main+2d3;
      if ( non_null( ) == 0 )
      {
        *ebp_2147483632 = main+32a;
        init_rc( );
        *ebp_2147483632 = main+32f;
        LoadHist = newHist( );
        *ebp_2147483632 = main+339;
        SaveHist = newHist( );
        *ebp_2147483632 = main+343;
        ShellHist = newHist( );
        *ebp_2147483632 = main+34d;
        TextHist = newHist( );
        *ebp_2147483632 = main+357;
        URLHist = newHist( );
        if ( ( FollowLocale & 255 ) != 0 && ebp_84 != 0 )
        {
          argc = DisplayCharset;
          *ebp_2147483632 = main+383;
          DisplayCharset = wc_guess_locale_charset( );
          argc = SystemCharset;
          *ebp_2147483632 = main+39d;
          SystemCharset = wc_guess_locale_charset( );
        }
        *(char*)(ebp_4 + 141) = WcOption.auto_detect;
        BookmarkCharset = DocumentCharset;
        ebp_4 = HTTP_proxy;
        *ebp_2147483632 = main+3c7;
        if ( non_null( ) == 0 )
        {
          ebp_4 = "HTTP_PROXY";
          *ebp_2147483632 = main+3d7;
          i = getenv( );
          if ( i == 0 )
          {
            ebp_4 = "http_proxy";
            *ebp_2147483632 = main+3f4;
            i = getenv( );
            if ( i == 0 )
            {
              ebp_4 = "HTTP_proxy";
              *ebp_2147483632 = main+411;
              i = getenv( );
              if ( i != 0 )
                goto B60;
            }
          }
B60:          HTTP_proxy = &i;
        }
        ebp_4 = GOPHER_proxy;
        *ebp_2147483632 = main+43b;
        if ( non_null( ) == 0 )
        {
          ebp_4 = "GOPHER_PROXY";
          *ebp_2147483632 = main+44b;
          i = getenv( );
          if ( i == 0 )
          {
            ebp_4 = "gopher_proxy";
            *ebp_2147483632 = main+468;
            i = getenv( );
            if ( i == 0 )
            {
              ebp_4 = "GOPHER_proxy";
              *ebp_2147483632 = main+485;
              i = getenv( );
              if ( i != 0 )
                goto B69;
            }
          }
B69:          GOPHER_proxy = &i;
        }
        ebp_4 = FTP_proxy;
        *ebp_2147483632 = main+4af;
        if ( non_null( ) == 0 )
        {
          ebp_4 = "FTP_PROXY";
          *ebp_2147483632 = main+4bf;
          i = getenv( );
          if ( i == 0 )
          {
            ebp_4 = "ftp_proxy";
            *ebp_2147483632 = main+4dc;
            i = getenv( );
            if ( i == 0 )
            {
              ebp_4 = "FTP_proxy";
              *ebp_2147483632 = main+4f9;
              i = getenv( );
              if ( i != 0 )
                goto B78;
            }
          }
B78:          FTP_proxy = &i;
        }
        ebp_4 = NO_proxy;
        *ebp_2147483632 = main+523;
        if ( non_null( ) == 0 )
        {
          ebp_4 = "NO_PROXY";
          *ebp_2147483632 = main+533;
          i = getenv( );
          if ( i == 0 )
          {
            ebp_4 = "no_proxy";
            *ebp_2147483632 = main+550;
            i = getenv( );
            if ( i == 0 )
            {
              ebp_4 = "NO_proxy";
              *ebp_2147483632 = main+56d;
              i = getenv( );
              if ( i != 0 )
                goto B87;
            }
          }
B87:          NO_proxy = &i;
        }
        ebp_4 = NNTP_server;
        *ebp_2147483632 = main+597;
        if ( non_null( ) == 0 )
        {
          ebp_4 = "NNTPSERVER";
          *ebp_2147483632 = main+5a7;
          i = getenv( );
          if ( i != 0 )
            NNTP_server = &i;
        }
        ebp_4 = NNTP_mode;
        *ebp_2147483632 = main+5d1;
        if ( non_null( ) == 0 )
        {
          ebp_4 = "NNTPMODE";
          *ebp_2147483632 = main+5e1;
          i = getenv( );
          if ( i != 0 )
            NNTP_mode = &i;
        }
        ebp_4 = Editor;
        *ebp_2147483632 = main+60b;
        if ( non_null( ) == 0 )
        {
          ebp_4 = "EDITOR";
          *ebp_2147483632 = main+61b;
          i = getenv( );
          if ( i != 0 )
            Editor = &i;
        }
        ebp_4 = Mailer;
        *ebp_2147483632 = main+645;
        if ( non_null( ) == 0 )
        {
          ebp_4 = "MAILER";
          *ebp_2147483632 = main+655;
          i = getenv( );
          if ( i != 0 )
            Mailer = &i;
        }
        redin = 1;
        for ( ; redin < argc; redin += 0 )
        {
          if ( argv[ redin ][0] == '-' )
          {
            argc = argv[ redin ];
            ebp_4 = "-t";
            *ebp_2147483632 = main+6bb;
            if ( strcmp( ) == 0 )
            {
              redin += 0;
              if ( argc <= redin )
              {
                argc = 1;
                ebp_4 = *(int*)(135774692);
                *ebp_2147483632 = main+6e8;
                fusage( );
              }
              ebp_4 = argv[ redin ];
              *ebp_2147483632 = main+6ff;
              if ( atoi( ) >= 1 )
              {
                ebp_4 = argv[ redin ];
                *ebp_2147483632 = main+71e;
                Tabstop = atoi( );
              }
              else
              {
              }
            }
            else
            {
              argc = argv[ redin ];
              ebp_4 = "-r";
              *ebp_2147483632 = main+747;
              if ( strcmp( ) == 0 )
                ShowEffect = 0;
              else
              {
                argc = argv[ redin ];
                ebp_4 = "-l";
                *ebp_2147483632 = main+779;
                if ( strcmp( ) == 0 )
                {
                  redin += 0;
                  if ( argc <= redin )
                  {
                    argc = 1;
                    ebp_4 = *(int*)(135774692);
                    *ebp_2147483632 = main+7a6;
                    fusage( );
                  }
                  ebp_4 = argv[ redin ];
                  *ebp_2147483632 = main+7bd;
                  if ( atoi( ) >= 1 )
                  {
                    ebp_4 = argv[ redin ];
                    *ebp_2147483632 = main+7dc;
                    PagerMax = atoi( );
                  }
                  else
                  {
                  }
                }
                else
                {
                  argv = 2;
                  argc = argv[ redin ];
                  ebp_4 = "-I";
                  *ebp_2147483632 = main+80d;
                  if ( strncmp( ) == 0 )
                  {
                    if ( ( argv[ redin ][2] & 255 ) != 0 )
                      i = argv[ redin ][2];
                    else
                    {
                      redin += 0;
                      if ( argc <= redin )
                      {
                        argc = 1;
                        ebp_4 = *(int*)(135774692);
                        *ebp_2147483632 = main+872;
                        fusage( );
                      }
                      i = argv[ redin ];
                    }
                    argc = DocumentCharset;
                    *ebp_2147483632 = main+8a0;
                    DocumentCharset = wc_guess_charset_short( );
                    WcOption.auto_detect = 0;
                    UseContentCharset = 0;
                  }
                  else
                  {
                    argv = 2;
                    argc = argv[ redin ];
                    ebp_4 = "-O";
                    *ebp_2147483632 = main+8df;
                    if ( strncmp( ) == 0 )
                    {
                      if ( ( argv[ redin ][2] & 255 ) != 0 )
                        i = argv[ redin ][2];
                      else
                      {
                        redin += 0;
                        if ( argc <= redin )
                        {
                          argc = 1;
                          ebp_4 = *(int*)(135774692);
                          *ebp_2147483632 = main+944;
                          fusage( );
                        }
                        i = argv[ redin ];
                      }
                      argc = DisplayCharset;
                      *ebp_2147483632 = main+972;
                      DisplayCharset = wc_guess_charset_short( );
                    }
                    else
                    {
                      argc = argv[ redin ];
                      ebp_4 = "-graph";
                      *ebp_2147483632 = main+99b;
                      if ( strcmp( ) == 0 )
                        UseGraphicChar = 1;
                      else
                      {
                        argc = argv[ redin ];
                        ebp_4 = "-no-graph";
                        *ebp_2147483632 = main+9ca;
                        if ( strcmp( ) == 0 )
                          UseGraphicChar = 0;
                        else
                        {
                          argc = argv[ redin ];
                          ebp_4 = "-T";
                          *ebp_2147483632 = main+9f9;
                          if ( strcmp( ) == 0 )
                          {
                            redin += 0;
                            if ( argc <= redin )
                            {
                              argc = 1;
                              ebp_4 = *(int*)(135774692);
                              *ebp_2147483632 = main+a26;
                              fusage( );
                            }
                            DefaultType = post_file = argv[ redin ];
                          }
                          else
                          {
                            argc = argv[ redin ];
                            ebp_4 = "-m";
                            *ebp_2147483632 = main+a66;
                            if ( strcmp( ) == 0 )
                            {
                              SearchHeader = *(char*)(ebp_4 + 142) = 1;
                            }
                            else
                            {
                              argc = argv[ redin ];
                              ebp_4 = "-v";
                              *ebp_2147483632 = main+aa3;
                              if ( strcmp( ) == 0 )
                                open_new_tab = 1;
                              else
                              {
                                argc = argv[ redin ];
                                ebp_4 = "-N";
                                *ebp_2147483632 = main+ad3;
                                if ( strcmp( ) == 0 )
                                  default_type = 1;
                                else
                                {
                                  argc = argv[ redin ];
                                  ebp_4 = "-M";
                                  *ebp_2147483632 = main+b03;
                                  if ( strcmp( ) == 0 )
                                    useColor = 0;
                                  else
                                  {
                                    argc = argv[ redin ];
                                    ebp_4 = "-B";
                                    *ebp_2147483632 = main+b35;
                                    if ( strcmp( ) == 0 )
                                      visual_start = 1;
                                    else
                                    {
                                      argc = argv[ redin ];
                                      ebp_4 = "-bookmark";
                                      *ebp_2147483632 = main+b65;
                                      if ( strcmp( ) == 0 )
                                      {
                                        redin += 0;
                                        if ( argc <= redin )
                                        {
                                          argc = 1;
                                          ebp_4 = *(int*)(135774692);
                                          *ebp_2147483632 = main+b96;
                                          fusage( );
                                        }
                                        BookmarkFile = argv[ redin ];
                                        if ( BookmarkFile[0] != '~' )
                                        {
                                          if ( BookmarkFile[0] != '/' )
                                          {
                                            Str tmp;
                                            ebp_4 = CurrentDir;
                                            *ebp_2147483632 = main+bd7;
                                            ebp_80 = Strnew_charp( );
                                            if ( *(int*)(ebp_80 + 4) < 1 || *(char*)(*ebp_80 + ( *(int*)(ebp_80 + 4) - 1 )) != '/' )
                                            {
                                              if ( *(int*)(ebp_80 + 8) <= *(int*)(ebp_80 + 4) + 1 )
                                              {
                                                *ebp_2147483632 = main+c21;
                                                Strgrow( );
                                              }
                                              *(int*)(ebp_80 + 4)++;
                                            }
                                            argc = BookmarkFile;
                                            *ebp_2147483632 = main+c68;
                                            Strcat_charp( );
                                            ebp_4 = *ebp_80;
                                            *ebp_2147483632 = main+c76;
                                            BookmarkFile = cleanupName( );
                                          }
                                          else
                                          {
                                          }
                                        }
                                        else
                                        {
                                        }
                                      }
                                      else
                                      {
                                        argc = argv[ redin ];
                                        ebp_4 = "-F";
                                        *ebp_2147483632 = main+c9f;
                                        if ( strcmp( ) == 0 )
                                          RenderFrame = 1;
                                        else
                                        {
                                          argc = argv[ redin ];
                                          ebp_4 = "-W";
                                          *ebp_2147483632 = main+cce;
                                          if ( strcmp( ) == 0 )
                                          {
                                            if ( WrapDefault != 0 )
                                              WrapDefault = 0;
                                            else
                                              WrapDefault = 1;
                                          }
                                          else
                                          {
                                            argc = argv[ redin ];
                                            ebp_4 = "-dump";
                                            *ebp_2147483632 = main+d18;
                                            if ( strcmp( ) == 0 )
                                              w3m_dump = 1;
                                            else
                                            {
                                              argc = argv[ redin ];
                                              ebp_4 = "-dump_source";
                                              *ebp_2147483632 = main+d4a;
                                              if ( strcmp( ) == 0 )
                                                w3m_dump = 4;
                                              else
                                              {
                                                argc = argv[ redin ];
                                                ebp_4 = "-dump_head";
                                                *ebp_2147483632 = main+d7c;
                                                if ( strcmp( ) == 0 )
                                                  w3m_dump = 2;
                                                else
                                                {
                                                  argc = argv[ redin ];
                                                  ebp_4 = "-dump_both";
                                                  *ebp_2147483632 = main+dae;
                                                  if ( strcmp( ) == 0 )
                                                    w3m_dump = 6;
                                                  else
                                                  {
                                                    argc = argv[ redin ];
                                                    ebp_4 = "-dump_extra";
                                                    *ebp_2147483632 = main+de0;
                                                    if ( strcmp( ) == 0 )
                                                      w3m_dump = 14;
                                                    else
                                                    {
                                                      argc = argv[ redin ];
                                                      ebp_4 = "-halfdump";
                                                      *ebp_2147483632 = main+e12;
                                                      if ( strcmp( ) == 0 )
                                                        w3m_dump = 16;
                                                      else
                                                      {
                                                        argc = argv[ redin ];
                                                        ebp_4 = "-halfload";
                                                        *ebp_2147483632 = main+e44;
                                                        if ( strcmp( ) == 0 )
                                                        {
                                                          w3m_dump = 0;
                                                          w3m_halfload = 1;
                                                          DefaultType = post_file = "text/html";
                                                        }
                                                        else
                                                        {
                                                          argc = argv[ redin ];
                                                          ebp_4 = "-backend";
                                                          *ebp_2147483632 = main+e91;
                                                          if ( strcmp( ) == 0 )
                                                            w3m_backend = 1;
                                                          else
                                                          {
                                                            argc = argv[ redin ];
                                                            ebp_4 = "-backend_batch";
                                                            *ebp_2147483632 = main+ec3;
                                                            if ( strcmp( ) == 0 )
                                                            {
                                                              w3m_backend = 1;
                                                              redin += 0;
                                                              if ( argc <= redin )
                                                              {
                                                                argc = 1;
                                                                ebp_4 = *(int*)(135774692);
                                                                *ebp_2147483632 = main+efa;
                                                                fusage( );
                                                              }
                                                              if ( backend_batch_commands == 0 )
                                                              {
                                                                *ebp_2147483632 = main+f08;
                                                                backend_batch_commands = newGeneralList( );
                                                              }
                                                              argc = -1;
                                                              ebp_4 = argv[ redin ];
                                                              *ebp_2147483632 = main+f2c;
                                                              argc = allocStr( );
                                                              ebp_4 = backend_batch_commands;
                                                              *ebp_2147483632 = main+f3e;
                                                              pushValue( );
                                                            }
                                                            else
                                                            {
                                                              argc = argv[ redin ];
                                                              ebp_4 = "-cols";
                                                              *ebp_2147483632 = main+f62;
                                                              if ( strcmp( ) == 0 )
                                                              {
                                                                redin += 0;
                                                                if ( argc <= redin )
                                                                {
                                                                  argc = 1;
                                                                  ebp_4 = *(int*)(135774692);
                                                                  *ebp_2147483632 = main+f8f;
                                                                  fusage( );
                                                                }
                                                                ebp_4 = argv[ redin ];
                                                                *ebp_2147483632 = main+fa6;
                                                                COLS = atoi( );
                                                              }
                                                              else
                                                              {
                                                                argc = argv[ redin ];
                                                                ebp_4 = "-ppc";
                                                                *ebp_2147483632 = main+fcf;
                                                                if ( strcmp( ) == 0 )
                                                                {
                                                                  double ppc;
                                                                  redin += 0;
                                                                  if ( argc <= redin )
                                                                  {
                                                                    argc = 1;
                                                                    ebp_4 = *(int*)(135774692);
                                                                    *ebp_2147483632 = main+1000;
                                                                    fusage( );
                                                                  }
                                                                  ebp_4 = argv[ redin ];
                                                                  *ebp_2147483632 = main+1017;
                                                                  ebp_52 = atof( );
                                                                  if ( ( ( ( ( ebp_52 <> 4.000000000000 ) & 1 ) == 0 ) & 255 ) != 0 )
                                                                  {
                                                                    if ( ( ( ( ( 32.000000000000 <> ebp_52 ) & 1 ) == 0 ) & 255 ) != 0 )
                                                                      set_pixel_per_char = 1;
                                                                    else
                                                                    {
                                                                    }
                                                                  }
                                                                  else
                                                                  {
                                                                  }
                                                                }
                                                                else
                                                                {
                                                                  argc = argv[ redin ];
                                                                  ebp_4 = "-ppl";
                                                                  *ebp_2147483632 = main+1087;
                                                                  if ( strcmp( ) == 0 )
                                                                  {
                                                                    double ppc;
                                                                    redin += 0;
                                                                    if ( argc <= redin )
                                                                    {
                                                                      argc = 1;
                                                                      ebp_4 = *(int*)(135774692);
                                                                      *ebp_2147483632 = main+10b8;
                                                                      fusage( );
                                                                    }
                                                                    ebp_4 = argv[ redin ];
                                                                    *ebp_2147483632 = main+10cf;
                                                                    ebp_44 = atof( );
                                                                    if ( ( ( ( ( ebp_44 <> 4.000000000000 ) & 1 ) == 0 ) & 255 ) != 0 )
                                                                    {
                                                                      if ( ( ( ( ( 64.000000000000 <> ebp_44 ) & 1 ) == 0 ) & 255 ) != 0 )
                                                                        set_pixel_per_line = 1;
                                                                      else
                                                                      {
                                                                      }
                                                                    }
                                                                    else
                                                                    {
                                                                    }
                                                                  }
                                                                  else
                                                                  {
                                                                    argc = argv[ redin ];
                                                                    ebp_4 = "-num";
                                                                    *ebp_2147483632 = main+113f;
                                                                    if ( strcmp( ) == 0 )
                                                                      showLineNum = 1;
                                                                    else
                                                                    {
                                                                      argc = argv[ redin ];
                                                                      ebp_4 = "-no-proxy";
                                                                      *ebp_2147483632 = main+1171;
                                                                      if ( strcmp( ) == 0 )
                                                                        use_proxy = 0;
                                                                      else
                                                                      {
                                                                        argc = argv[ redin ];
                                                                        ebp_4 = "-4";
                                                                        *ebp_2147483632 = main+11a0;
                                                                        if ( strcmp( ) != 0 )
                                                                        {
                                                                          argc = argv[ redin ];
                                                                          ebp_4 = "-6";
                                                                          *ebp_2147483632 = main+11c3;
                                                                          if ( strcmp( ) != 0 )
                                                                          {
                                                                            argc = argv[ redin ];
                                                                            ebp_4 = "-post";
                                                                            *ebp_2147483632 = main+121d;
                                                                            if ( strcmp( ) == 0 )
                                                                            {
                                                                              redin += 0;
                                                                              if ( argc <= redin )
                                                                              {
                                                                                argc = 1;
                                                                                ebp_4 = *(int*)(135774692);
                                                                                *ebp_2147483632 = main+124a;
                                                                                fusage( );
                                                                              }
                                                                              err_msg = &argv[ redin ][0]/*error:'c'*/;
                                                                            }
                                                                            else
                                                                            {
                                                                              argc = argv[ redin ];
                                                                              ebp_4 = "-header";
                                                                              *ebp_2147483632 = main+1281;
                                                                              if ( strcmp( ) == 0 )
                                                                              {
                                                                                Str hs;
                                                                                redin += 0;
                                                                                if ( argc <= redin )
                                                                                {
                                                                                  argc = 1;
                                                                                  ebp_4 = *(int*)(135774692);
                                                                                  *ebp_2147483632 = main+12b2;
                                                                                  fusage( );
                                                                                }
                                                                                ebp_4 = argv[ redin ];
                                                                                *ebp_2147483632 = main+12c9;
                                                                                ebp_76 = make_optional_header_string( );
                                                                                if ( ebp_76 != 0 )
                                                                                {
                                                                                  if ( header_string == 0 )
                                                                                  {
                                                                                    while ( ( argv[ redin ][0] & 255 ) != 0 )
                                                                                    {
                                                                                      argv[ redin ][0] = 0;
                                                                                      argv[ redin ]++;
                                                                                    }
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    ebp_4 = header_string;
                                                                                    *ebp_2147483632 = main+12fd;
                                                                                    Strcat( );
                                                                                  }
                                                                                }
                                                                                else
                                                                                {
                                                                                }
                                                                              }
                                                                              else
                                                                              {
                                                                                argc = argv[ redin ];
                                                                                ebp_4 = "-no-mouse";
                                                                                *ebp_2147483632 = main+1362;
                                                                                if ( strcmp( ) == 0 )
                                                                                  use_mouse = 0;
                                                                                else
                                                                                {
                                                                                  argc = argv[ redin ];
                                                                                  ebp_4 = "-no-cookie";
                                                                                  *ebp_2147483632 = main+1394;
                                                                                  if ( strcmp( ) == 0 )
                                                                                  {
                                                                                    use_cookie = 0;
                                                                                    accept_cookie = 0;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    argc = argv[ redin ];
                                                                                    ebp_4 = "-cookie";
                                                                                    *ebp_2147483632 = main+13d0;
                                                                                    if ( strcmp( ) == 0 )
                                                                                    {
                                                                                      use_cookie = 1;
                                                                                      accept_cookie = 1;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      argc = argv[ redin ];
                                                                                      ebp_4 = "-pauth";
                                                                                      *ebp_2147483632 = main+140c;
                                                                                      if ( strcmp( ) == 0 )
                                                                                      {
                                                                                        redin += 0;
                                                                                        if ( argc <= redin )
                                                                                        {
                                                                                          argc = 1;
                                                                                          ebp_4 = *(int*)(135774692);
                                                                                          *ebp_2147483632 = main+143d;
                                                                                          fusage( );
                                                                                        }
                                                                                        ebp_4 = argv[ redin ];
                                                                                        *ebp_2147483632 = main+1454;
                                                                                        argv = 0;
                                                                                        argc = *(int*)(encodeB( ));
                                                                                        ebp_4 = "Basic ";
                                                                                        *ebp_2147483632 = main+146e;
                                                                                        proxy_auth_cookie = Strnew_m_charp( );
                                                                                        for ( ; ( argv[ redin ][0] & 255 ) != 0; argv[ redin ]++ )
                                                                                        {
                                                                                          argv[ redin ][0] = 0;
                                                                                          //argv[ redin ]++;
                                                                                        }
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        argc = argv[ redin ];
                                                                                        ebp_4 = "-s";
                                                                                        *ebp_2147483632 = main+14d5;
                                                                                        if ( strcmp( ) == 0 )
                                                                                          squeezeBlankLine = 1;
                                                                                        else
                                                                                        {
                                                                                          argc = argv[ redin ];
                                                                                          ebp_4 = "-X";
                                                                                          *ebp_2147483632 = main+1507;
                                                                                          if ( strcmp( ) == 0 )
                                                                                            Do_not_use_ti_te = 1;
                                                                                          else
                                                                                          {
                                                                                            argc = argv[ redin ];
                                                                                            ebp_4 = "-title";
                                                                                            *ebp_2147483632 = main+1539;
                                                                                            if ( strcmp( ) == 0 )
                                                                                            {
                                                                                              ebp_4 = "TERM";
                                                                                              *ebp_2147483632 = main+1549;
                                                                                              displayTitleTerm = getenv( );
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              argv = 7;
                                                                                              argc = argv[ redin ];
                                                                                              ebp_4 = "-title=";
                                                                                              *ebp_2147483632 = main+157a;
                                                                                              if ( strncmp( ) == 0 )
                                                                                                displayTitleTerm = &argv[ redin ][7];
                                                                                              else
                                                                                              {
                                                                                                argc = argv[ redin ];
                                                                                                ebp_4 = "-o";
                                                                                                *ebp_2147483632 = main+15b9;
                                                                                                if ( strcmp( ) != 0 )
                                                                                                {
                                                                                                  argc = argv[ redin ];
                                                                                                  ebp_4 = "-show-option";
                                                                                                  *ebp_2147483632 = main+15dc;
                                                                                                  if ( strcmp( ) != 0 )
                                                                                                  {
                                                                                                    argc = argv[ redin ];
                                                                                                    ebp_4 = "-dummy";
                                                                                                    *ebp_2147483632 = main+16e2;
                                                                                                    if ( strcmp( ) != 0 )
                                                                                                    {
                                                                                                      argc = argv[ redin ];
                                                                                                      ebp_4 = "-debug";
                                                                                                      *ebp_2147483632 = main+1709;
                                                                                                      if ( strcmp( ) == 0 )
                                                                                                        w3m_debug = 1;
                                                                                                      else
                                                                                                      {
                                                                                                        argc = argv[ redin ];
                                                                                                        ebp_4 = "-reqlog";
                                                                                                        *ebp_2147483632 = main+173b;
                                                                                                        if ( strcmp( ) == 0 )
                                                                                                        {
                                                                                                          ebp_4 = "request.log";
                                                                                                          *ebp_2147483632 = main+174b;
                                                                                                          rcFile( );
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                          argc = 1;
                                                                                                          ebp_4 = *(int*)(135774692);
                                                                                                          *ebp_2147483632 = main+176a;
                                                                                                          fusage( );
                                                                                                        }
                                                                                                        w3m_reqlog = *(int*)(135774692);
                                                                                                      }
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                                argc = argv[ redin ];
                                                                                                ebp_4 = "-show-option";
                                                                                                *ebp_2147483632 = main+1603;
                                                                                                if ( strcmp( ) != 0 )
                                                                                                {
                                                                                                  redin += 0;
                                                                                                  if ( redin < argc )
                                                                                                  {
                                                                                                    argc = "?";
                                                                                                    ebp_4 = argv[ redin ];
                                                                                                    *ebp_2147483632 = main+163a;
                                                                                                    if ( strcmp( ) != 0 )
                                                                                                    {
                                                                                                      ebp_4 = argv[ redin ];
                                                                                                      *ebp_2147483632 = main+166e;
                                                                                                      if ( set_param_option( ) != 0 )
                                                                                                      {
                                                                                                      }
                                                                                                      else
                                                                                                      {
                                                                                                        argv = &argv[ redin ];
                                                                                                        argc = "%s: bad option\n";
                                                                                                        ebp_4 = *(int*)(135774692);
                                                                                                        *ebp_2147483632 = main+169f;
                                                                                                        fprintf( );
                                                                                                        show_params_p = 1;
                                                                                                        argc = 1;
                                                                                                        ebp_4 = *(int*)(135774692);
                                                                                                        *ebp_2147483632 = main+16be;
                                                                                                        fusage( );
                                                                                                      }
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                                ebp_4 = *(int*)(135774752);
                                                                                                *ebp_2147483632 = main+164b;
                                                                                                show_params( );
                                                                                                ebp_4 = 0;
                                                                                                *ebp_2147483632 = main+1657;
                                                                                                exit( );
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
                                                                          }
                                                                        }
                                                                        argc = argv[ redin ][1];
                                                                        ebp_4 = "dns_order=%c";
                                                                        *ebp_2147483632 = main+11ef;
                                                                        ebp_4 = *(int*)(Sprintf( ));
                                                                        *ebp_2147483632 = main+11f9;
                                                                        set_param_option( );
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
          }
          else
          {
            if ( argv[ redin ][0] == '+' )
              load_argv = argv[ redin ][1];
            else
            {
              request->item->type/*error:'i'*/ = argv[ redin ];
              load_bookmark++;
            }
          }
          //redin += 0;
        }
        FirstTab = 0;
        LastTab = 0;
        nTab = 0;
        CurrentTab = 0;
        CurrentKey = -1;
        if ( BookmarkFile == 0 )
        {
          ebp_4 = "bookmark.html";
          *ebp_2147483632 = main+1838;
          BookmarkFile = rcFile( );
        }
        ebp_4 = 1;
        *ebp_2147483632 = main+1849;
        if ( isatty( ) == 0 && w3m_dump == 0 )
          w3m_dump = 1;
        if ( w3m_dump != 0 && COLS == 0 )
          COLS = 80;
        if ( w3m_dump == 0 && w3m_backend == 0 )
        {
          *ebp_2147483632 = main+1893;
          fmInit( );
          argc = resize_hook;
          ebp_4 = 28;
          *ebp_2147483632 = main+18a7;
          mySignal( );
        }
        if ( ( w3m_dump & 16 ) != 0 && displayImage != 0 )
          activeImage = 1;
        *ebp_2147483632 = main+18cd;
        sync_with_option( );
        *ebp_2147483632 = main+18d2;
        initCookie( );
        if ( UseHistory != 0 )
        {
          ebp_4 = URLHist;
          *ebp_2147483632 = main+18e8;
          loadHistory( );
        }
        argc = DisplayCharset;
        ebp_4 = DocumentCharset;
        *ebp_2147483632 = main+18ff;
        wtf_init( );
        if ( w3m_backend != 0 )
        {
          *ebp_2147483632 = main+190d;
          backend( );
        }
        if ( w3m_dump != 0 )
        {
          argc = 1;
          ebp_4 = 2;
          *ebp_2147483632 = main+192a;
          mySignal( );
        }
        argc = sig_chld;
        ebp_4 = 17;
        *ebp_2147483632 = main+193e;
        mySignal( );
        argc = SigPipe;
        ebp_4 = 13;
        *ebp_2147483632 = main+1952;
        mySignal( );
        ebp_4 = wrap_GC_warn_proc;
        *ebp_2147483632 = main+195e;
        orig_GC_warn_proc = GC_set_warn_proc( );
        *ebp_2147483632 = main+1968;
        Locale = Strnew( );
        if ( load_bookmark == 0 )
        {
          ebp_4 = 0;
          *ebp_2147483632 = main+1983;
          if ( isatty( ) == 0 )
          {
            ebp_4 = 0;
            *ebp_2147483632 = main+1998;
            argc = "rb";
            ebp_4 = dup( );
            *ebp_2147483632 = main+19a8;
            argc = pclose;
            ebp_4 = fdopen( );
            *ebp_2147483632 = main+19b4;
            line_str = newFileStream( );
            *ebp_2147483632 = main+19c4;
            p = openGeneralPagerBuffer( );
            argc = 0;
            ebp_4 = 1;
            *ebp_2147483632 = main+19df;
            dup2( );
          }
          if ( visual_start != 0 )
          {
            ebp_20 = 0;
            envp = 0;
            argv = -1;
            argc = 0;
            ebp_4 = BookmarkFile;
            *ebp_2147483632 = main+1a18;
            p = loadGeneralFile( );
            if ( p == 0 )
            {
              argc = "w3m: Can't load bookmark.\n";
              *ebp_2147483632 = main+1a41;
              Strcat_charp( );
            }
          }
          else
          if ( open_new_tab != 0 )
          {
            Str s_page;
            ebp_4 = "&lt;title&gt;W3M startup page&lt;/title&gt;&lt;center&gt;&lt;b&gt;Welcome to ";
            *ebp_2147483632 = main+1a5d;
            ebp_72 = Strnew_charp( );
            argc = "&lt;a href='http://w3m.sourceforge.net/'&gt;";
            *ebp_2147483632 = main+1a75;
            Strcat_charp( );
            ebp_20 = 0;
            envp = "&lt;br&gt;Written by &lt;a href='mailto:aito@fw.ipsj.or.jp'&gt;Akinori Ito&lt;/a&gt;";
            argv = &w3m_version;
            argc = "w3m&lt;/a&gt;!&lt;p&gt;&lt;p&gt;This is w3m version ";
            *ebp_2147483632 = main+1aa2;
            Strcat_m_charp( );
            envp = 0;
            argv = "You can read &lt;a href='file:///usr/share/doc/w3m/'&gt;w3m documents on your local system&lt;/a&gt;.";
            argc = "&lt;p&gt;Debian package is maintained by &lt;a href='mailto:ukai@debian.or.jp'&gt;Fumitoshi UKAI&lt;/a&gt;.";
            *ebp_2147483632 = main+1ac6;
            Strcat_m_charp( );
            *ebp_2147483632 = main+1ad2;
            p = loadHTMLString( );
            if ( p == 0 )
            {
              argc = "w3m: Can't load string.\n";
              *ebp_2147483632 = main+1af7;
              Strcat_charp( );
            }
            if ( p != 1 )
              p[64] = p[64] | 24;
          }
          else
          {
            ebp_4 = "HTTP_HOME";
            *ebp_2147483632 = main+1b36;
            i = getenv( );
            if ( i == 0 )
            {
              ebp_4 = "WWW_HOME";
              *ebp_2147483632 = main+1b53;
              i = getenv( );
              if ( i == 0 )
              {
                if ( ( fmInitialized & 255 ) != 0 )
                {
                  *ebp_2147483632 = main+1c14;
                  fmTerm( );
                }
                argc = 1;
                ebp_4 = *(int*)(135774692);
                *ebp_2147483632 = main+1c29;
                fusage( );
              }
            }
            ebp_20 = 0;
            envp = 0;
            argv = -1;
            argc = 0;
            *ebp_2147483632 = main+1b97;
            p = loadGeneralFile( );
            if ( p == 0 )
            {
              argc = i;
              ebp_4 = "w3m: Can't load %s.\n";
              *ebp_2147483632 = main+1bbf;
              argc = Sprintf( );
              *ebp_2147483632 = main+1bcf;
              Strcat( );
            }
            if ( p == 1 )
            {
            }
            else
            {
              ebp_4 = p[132];
              *ebp_2147483632 = main+1bef;
              argc = *(int*)(parsedURL2Str( ));
              ebp_4 = URLHist;
              *ebp_2147483632 = main+1c02;
              pushHashHist( );
            }
          }
          if ( p == 0 )
          {
            if ( ( fmInitialized & 255 ) != 0 )
            {
              *ebp_2147483632 = main+1c46;
              fmTerm( );
            }
            if ( Locale[4] != 0 )
            {
              argc = *(int*)(135774692);
              ebp_4 = Locale[0];
              *ebp_2147483632 = main+1c6a;
              fputs( );
            }
            ebp_4 = 2;
            *ebp_2147483632 = main+1c76;
            w3m_exit( );
          }
          redin = -1;
          while ( redin < load_bookmark )
          {
            if ( redin >= 0 )
            {
              SearchHeader = *(char*)(ebp_4 + 142);
              DefaultType = post_file;
              if ( w3m_dump == 2 )
              {
                ebp_4 = 52;
                *ebp_2147483632 = main+1cd0;
                load_argc = GC_malloc( );
                load_argc/*error:'i'*/ = 3;
                ebp_20 = load_argc;
                envp = 0;
                argv = -1;
                argc = 0;
                ebp_4 = request->item->type/*error:'i'*/;
                *ebp_2147483632 = main+1d17;
                p = loadGeneralFile( );
              }
              else
              {
                if ( err_msg != 0 && redin == 0 )
                {
                  FILE *fp;
                  Str body;
                  argc = "-";
                  *ebp_2147483632 = main+1d50;
                  if ( strcmp( ) == 0 )
                    body = *(int*)(135774740);
                  else
                  {
                    argc = "r";
                    *ebp_2147483632 = main+1d74;
                    body = fopen( );
                  }
                  if ( body == 0 )
                  {
                    argc = err_msg;
                    ebp_4 = "w3m: Can't open %s.\n";
                    *ebp_2147483632 = main+1d93;
                    argc = Sprintf( );
                    *ebp_2147483632 = main+1da3;
                    Strcat( );
                  }
                  *ebp_2147483632 = main+1db4;
                  ebp_64 = Strfgetall( );
                  if ( body != *(int*)(135774740) )
                  {
                    *ebp_2147483632 = main+1dcf;
                    fclose( );
                  }
                  ebp_28 = 0;
                  ebp_24 = 0;
                  ebp_20 = 0;
                  envp = 0;
                  argv = 0;
                  argc = "post";
                  ebp_4 = 0;
                  *ebp_2147483632 = main+1e0b;
                  load_argc = newFormList( );
                  load_argc/*error:'i'*/ = *ebp_64;
                  load_argc/*error:'i'*/ = 0;
                  load_argc/*error:'i'*/ = *(int*)(ebp_64 + 4);
                }
                else
                  load_argc = 0;
                ebp_20 = load_argc;
                envp = 0;
                argv = -1;
                argc = 0;
                ebp_4 = request->item->type/*error:'i'*/;
                *ebp_2147483632 = main+1e79;
                p = loadGeneralFile( );
              }
              if ( p == 0 )
              {
                argc = request->item->type/*error:'i'*/;
                ebp_4 = "w3m: Can't load %s.\n";
                *ebp_2147483632 = main+1eaa;
                argc = Sprintf( );
                *ebp_2147483632 = main+1eba;
                Strcat( );
              }
              if ( p == 1 )
              {
                redin += 0;
              }
              else
              {
                switch ( p[180] )
                {
                  ebp_4 = p[132];
                  *ebp_2147483632 = main+1f4a;
                  argc = *(int*)(parsedURL2Str( ));
                  ebp_4 = URLHist;
                  *ebp_2147483632 = main+1f5d;
                  pushHashHist( );
                  break;
                case 12:
                  break;
                case 4:
                case 5:
                  ebp_4 = request->item->type/*error:'i'*/;
                  *ebp_2147483632 = main+1f13;
                  argv = InnerCharset;
                  argc = SystemCharset;
                  ebp_4 = Strnew_charp( );
                  *ebp_2147483632 = main+1f23;
                  argc = *(int*)(wc_Str_conv( ));
                  ebp_4 = LoadHist;
                  *ebp_2147483632 = main+1f36;
                  unshiftHist( );
                  ebp_4 = p[132];
                  *ebp_2147483632 = main+1f4a;
                  argc = *(int*)(parsedURL2Str( ));
                  ebp_4 = URLHist;
                  *ebp_2147483632 = main+1f5d;
                  pushHashHist( );
                  break;
                default:
                  ebp_4 = p[132];
                  *ebp_2147483632 = main+1f4a;
                  argc = *(int*)(parsedURL2Str( ));
                  ebp_4 = URLHist;
                  *ebp_2147483632 = main+1f5d;
                  pushHashHist( );
                  break;
                }
              }
            }
            else
            if ( p != 1 )
            {
            }
            else
            {
            }
            if ( p[92] == 0 )
            {
              if ( p[180] == 4 && p[240] != 0 && p[152] != 0 )
              {
                argc = "-";
                ebp_4 = p[152];
                *ebp_2147483632 = main+1fcf;
                if ( strcmp( ) == 0 )
                {
                  if ( CurrentTab == 0 )
                  {
                    *ebp_2147483632 = main+1ff6;
                    FirstTab = LastTab = CurrentTab = newTab( );
                    nTab = 1;
                    CurrentTab->firstBuffer = CurrentTab->currentBuffer = &p[0]/*error:'c'*/;
                  }
                  else
                  if ( default_type != 0 )
                  {
                    *ebp_2147483632 = main+2042;
                    _newT( );
                    CurrentTab->currentBuffer->nextBuffer = &p[0]/*error:'c'*/;
                    ebp_4 = CurrentTab->currentBuffer;
                    *ebp_2147483632 = main+2064;
                    delBuffer( );
                  }
                  CurrentTab->currentBuffer->nextBuffer = &p[0]/*error:'c'*/;
                  CurrentTab->currentBuffer = &p[0]/*error:'c'*/;
                  if ( ( w3m_dump == 0 || w3m_dump == 1 ) && CurrentTab->currentBuffer->frameset != 0 && ( RenderFrame & 255 ) != 0 )
                  {
                    *ebp_2147483632 = main+20bc;
                    rFrame( );
                  }
                  if ( w3m_dump != 0 )
                  {
                    ebp_4 = CurrentTab->currentBuffer;
                    *ebp_2147483632 = main+20d5;
                    do_dump( );
                  }
                  else
                    CurrentTab->currentBuffer = &p[0]/*error:'c'*/;
                }
              }
            }
            p[244] = *(char*)(ebp_4 + 142);
          }
          if ( w3m_dump != 0 )
          {
            if ( Locale[4] != 0 )
            {
              argc = *(int*)(135774692);
              ebp_4 = Locale[0];
              *ebp_2147483632 = main+2132;
              fputs( );
            }
            *ebp_2147483632 = main+2137;
            save_cookies( );
            ebp_4 = 0;
            *ebp_2147483632 = main+2143;
            w3m_exit( );
          }
          if ( add_download_list != 0 )
          {
            add_download_list = 0;
            CurrentTab = LastTab;
            if ( FirstTab == 0 )
            {
              *ebp_2147483632 = main+2172;
              FirstTab = LastTab = CurrentTab = newTab( );
              nTab = 1;
              if ( CurrentTab->firstBuffer == 0 )
              {
                if ( showLineNum != 0 )
                {
                  ebp_4 = COLS - 6 < 0 ? COLS - 6 : 0;
                  *ebp_2147483632 = main+21ed;
                  CurrentTab->firstBuffer = CurrentTab->currentBuffer = newBuffer( );
                  CurrentTab->currentBuffer->bufferprop = 24;
                  CurrentTab->currentBuffer->buffername = "Download List Panel";
                  *ebp_2147483632 = main+222b;
                  ldDL( );
                }
                else
                {
                  ebp_4 = COLS - 6 < 0 ? COLS - 6 : 0;
                  *ebp_2147483632 = main+21ed;
                  CurrentTab->firstBuffer = CurrentTab->currentBuffer = newBuffer( );
                  CurrentTab->currentBuffer->bufferprop = 24;
                  CurrentTab->currentBuffer->buffername = "Download List Panel";
                  *ebp_2147483632 = main+222b;
                  ldDL( );
                }
              }
              else
              {
                if ( CurrentTab->firstBuffer == 1 )
                {
                }
                else
                  CurrentTab->currentBuffer = CurrentTab->firstBuffer;
                  *ebp_2147483632 = main+222b;
                  ldDL( );
              }
            }
            else
            {
            }
          }
          else
          {
            CurrentTab = FirstTab;
            if ( FirstTab == 0 || CurrentTab->firstBuffer == 0 || CurrentTab->firstBuffer == 1 )
            {
              if ( p == 1 && ( fmInitialized & 255 ) != 0 )
              {
                ebp_20 = 0;
                envp = 0;
                argv = 512;
                argc = "";
                ebp_4 = "Hit any key to quit w3m:";
                *ebp_2147483632 = main+229e;
                inputLineHistSearch( );
              }
              if ( ( fmInitialized & 255 ) != 0 )
              {
                *ebp_2147483632 = main+22ae;
                fmTerm( );
              }
              if ( Locale[4] != 0 )
              {
                argc = *(int*)(135774692);
                ebp_4 = Locale[0];
                *ebp_2147483632 = main+22d2;
                fputs( );
              }
              if ( p == 1 )
              {
                *ebp_2147483632 = main+22e1;
                save_cookies( );
                if ( Locale[4] == 0 )
                {
                  ebp_4 = 0;
                  *ebp_2147483632 = main+22f8;
                  w3m_exit( );
                }
              }
              ebp_4 = 2;
              *ebp_2147483632 = main+2304;
              w3m_exit( );
            }
            if ( Locale[4] != 0 )
            {
              ebp_20 = 0;
              envp = 1;
              argv = 1;
              argc = 0;
              ebp_4 = Locale[0];
              *ebp_2147483632 = main+233d;
              disp_message_nsec( );
            }
            SearchHeader = 0;
            DefaultType = 0;
            UseContentCharset = 1;
            WcOption.auto_detect = *(char*)(ebp_4 + 141);
            CurrentTab->currentBuffer = CurrentTab->firstBuffer;
            argc = 1;
            ebp_4 = CurrentTab->currentBuffer;
            *ebp_2147483632 = main+238b;
            displayBuffer( );
            if ( load_argv != 0 )
            {
              *ebp_2147483632 = main+239e;
              _goLine( );
            }
            while ( add_download_list == 0 )
            {
              add_download_list = 0;
              *ebp_2147483632 = main+23b6;
              ldDL( );
              if ( CurrentTab->currentBuffer->submit != 0 )
              {
                Anchor *a;
                ebp_60 = CurrentTab->currentBuffer->submit;
                CurrentTab->currentBuffer->submit = 0;
                argc = *(int*)(ebp_60 + 20);
                ebp_4 = CurrentTab->currentBuffer;
                *ebp_2147483632 = main+2407;
                gotoLine( );
                CurrentTab->currentBuffer->pos = *(int*)(ebp_60 + 24);
                ebp_4 = 1;
                *ebp_2147483632 = main+2425;
                _followForm( );
              }
              if ( CurrentEvent != 0 )
              {
                CurrentKey = -1;
                CurrentKeyData = 0;
                CurrentCmdData = (char*)CurrentEvent->data;
                *ebp_2147483632 = main+2464;
                w3mFuncList[ CurrentEvent->cmd ].func( );
                CurrentCmdData = 0;
                CurrentEvent = CurrentEvent->next;
              }
              else
              {
                if ( CurrentTab->currentBuffer->event != 0 )
                {
                  if ( ( CurrentTab->currentBuffer->event->status & 65535 ) != 0 )
                  {
                    CurrentAlarm = CurrentTab->currentBuffer->event;
                    if ( CurrentAlarm->sec == 0 )
                    {
                      CurrentTab->currentBuffer->event = 0;
                      CurrentKey = -1;
                      CurrentKeyData = 0;
                      CurrentCmdData = (char*)CurrentAlarm->data;
                      *ebp_2147483632 = main+250f;
                      w3mFuncList[ CurrentAlarm->cmd ].func( );
                      CurrentCmdData = 0;
                    }
                  }
                  else
                    CurrentTab->currentBuffer->event = 0;
                }
                if ( CurrentTab->currentBuffer->event == 0 )
                  CurrentAlarm = &DefaultAlarm;
                mouse_action.in_action = 0;
                if ( use_mouse != 0 )
                {
                  *ebp_2147483632 = main+2564;
                  mouse_active( );
                }
                if ( CurrentAlarm->sec >= 1 )
                {
                  argc = SigAlarm;
                  ebp_4 = 14;
                  *ebp_2147483632 = main+2583;
                  mySignal( );
                  ebp_4 = CurrentAlarm->sec;
                  *ebp_2147483632 = main+2592;
                  alarm( );
                }
                argc = resize_hook;
                ebp_4 = 28;
                *ebp_2147483632 = main+25a6;
                mySignal( );
                if ( activeImage != 0 && displayImage != 0 && CurrentTab->currentBuffer->img != 0 && ( CurrentTab->currentBuffer->image_loaded & 255 ) == 0 )
                {
                  do
                  {
                    if ( need_resize_screen != 0 )
                    {
                      *ebp_2147483632 = main+25e8;
                      resize_screen( );
                    }
                    argc = 2;
                    ebp_4 = CurrentTab->currentBuffer;
                    *ebp_2147483632 = main+2600;
                    loadImage( );
                    argc = 0;
                    ebp_4 = 1;
                    *ebp_2147483632 = main+2614;
                  }
                  while ( sleep_till_anykey( ) >= 1 );
                }
                else
                {
                  do
                  {
                    if ( need_resize_screen != 0 )
                    {
                      *ebp_2147483632 = main+2628;
                      resize_screen( );
                    }
                    argc = 0;
                    ebp_4 = 1;
                    *ebp_2147483632 = main+263c;
                  }
                  while ( sleep_till_anykey( ) >= 1 );
                }
                *ebp_2147483632 = main+2645;
                *(char*)(ebp_4 + 143) = do_getch( );
                if ( CurrentAlarm->sec >= 1 )
                {
                  ebp_4 = 0;
                  *ebp_2147483632 = main+2663;
                  alarm( );
                }
                if ( use_mouse != 0 )
                {
                  *ebp_2147483632 = main+2671;
                  mouse_inactive( );
                }
                if ( ( MYCTYPE_MAP[ *(char*)(ebp_4 + 143) ] & 17 ) != 0 )
                {
                  if ( vi_prec_num != 0 )
                  {
                    if ( ( ( prec_num != 0 && *(char*)(ebp_4 + 143) == '0' ) || *(char*)(ebp_4 + 143) > 48 ) && *(char*)(ebp_4 + 143) <= 57 )
                    {
                      prec_num = ( *(char*)(ebp_4 + 143) - 48 ) + ( prec_num * 10 );
                      if ( prec_num <= 10000 )
                      {
                        prev_key = CurrentKey;
                        CurrentKey = -1;
                        CurrentKeyData = 0;
                      }
                      else
                        prec_num = 10000;
                    }
                    else
                    {
                      ebp_4 = CurrentTab->currentBuffer;
                      *ebp_2147483632 = main+2712;
                      set_buffer_environ( );
                      ebp_4 = CurrentTab->currentBuffer;
                      *ebp_2147483632 = main+2722;
                      save_buffer_position( );
                      ebp_4 = *(char*)(ebp_4 + 143);
                      *ebp_2147483632 = main+2732;
                      keyPressEventProc( );
                      prec_num = 0;
                    }
                  }
                  else
                  {
                    ebp_4 = CurrentTab->currentBuffer;
                    *ebp_2147483632 = main+274e;
                    set_buffer_environ( );
                    ebp_4 = CurrentTab->currentBuffer;
                    *ebp_2147483632 = main+275e;
                    save_buffer_position( );
                    ebp_4 = *(char*)(ebp_4 + 143);
                    *ebp_2147483632 = main+276e;
                    keyPressEventProc( );
                    prec_num = 0;
                  }
                }
              }
            }
          }
        }
        else
        {
          redin = 0;
        }
      }
    }
  }
  argc = DisplayCharset;
  *ebp_2147483632 = main+2ec;
  DisplayCharset = wc_guess_locale_charset( );
  argc = DocumentCharset;
  *ebp_2147483632 = main+306;
  DocumentCharset = wc_guess_locale_charset( );
  argc = SystemCharset;
  *ebp_2147483632 = main+320;
  SystemCharset = wc_guess_locale_charset( );
  *ebp_2147483632 = main+32a;
  init_rc( );
  *ebp_2147483632 = main+32f;
  LoadHist = newHist( );
  *ebp_2147483632 = main+339;
  SaveHist = newHist( );
  *ebp_2147483632 = main+343;
  ShellHist = newHist( );
  *ebp_2147483632 = main+34d;
  TextHist = newHist( );
  *ebp_2147483632 = main+357;
  URLHist = newHist( );
}
void keyPressEventProc( int c )
{
  CurrentKey = c;
  w3mFuncList[ GlobalKeymap[ c ] ].func( );
  return;
}
void pushEvent( int cmd, void *data )
{
  Event *event = GC_malloc( 12 );
  event->cmd = cmd;
  event->data = data;
  event->next = 0;
  if ( CurrentEvent != 0 )
  {
    LastEvent->next = event;
  }
  else
  {
    CurrentEvent = event;
  }
  LastEvent = event;
  return;
}
void dump_source( Buffer *buf )
{
  FILE *f;
  char c;
  if ( buf->sourcefile == 0 )
  {
  }
  else
  {
    f = fopen( buf->sourcefile, "r" );
    if ( f == 0 )
    {
    }
    else
    {
      c = fgetc( f );
      if ( feof( f ) == 0 )
      {
        putchar( c );
      }
      fclose( f );
    }
  }
  return;
}
void dump_head( Buffer *buf )
{
  TextListItem *ti;
  if ( buf->document_header == 0 )
  {
    if ( ( w3m_dump & 8 ) != 0 )
    {
      putchar( 10 );
    }
    else
    {
    }
    return;
  }
  else
  {
    ti = buf->document_header->first;
    for ( ; ti == 0; ti = ti->next )
    {
      printf( "%s", *(int*)(wc_Str_conv_strict( Strnew_charp( ti->ptr ), InnerCharset, buf->document_charset )) );
      //ti = ti->next;
    }
  }
}
void dump_extra( Buffer *buf )
{
  printf( "W3m-current-url: %s\n", *(int*)(parsedURL2Str( &buf->currentURL )) );
  if ( buf->baseURL != 0 )
  {
    printf( "W3m-base-url: %s\n", *(int*)(parsedURL2Str( buf->baseURL )) );
  }
  printf( "W3m-document-charset: %s\n", wc_ces_to_charset( buf->document_charset ) );
  return;
}
void do_dump( Buffer *buf )
{
  void (*prevtrap)( int  ) = 0;
  prevtrap = mySignal( 2, &intTrap );
  if ( __sigsetjmp( IntReturn[0].__jmpbuf, 1 ) != 0 )
    mySignal( 2, prevtrap );
  else
  if ( ( w3m_dump & 8 ) == 0 )
  {
    if ( ( w3m_dump & 2 ) != 0 )
      dump_head( buf );
    if ( ( w3m_dump & 4 ) != 0 )
      dump_source( buf );
    if ( w3m_dump == 1 )
      saveBuffer( buf, *(int*)(135774752), 0 );
    mySignal( 2, prevtrap );
    return;
  }
  dump_extra( buf );
}
void nulcmd( void )
{
  return;
}
void pcmap( void )
{
  return;
}
void escKeyProc( int c, int esc, unsigned char *map )
{
  int eax;
  if ( CurrentKey >= 0 && ( CurrentKey & 268435456 ) != 0 )
  {
    unsigned char **mmap = getKeyData( ( CurrentKey >> 16 ) & 1919 );
    if ( mmap == 0 )
    {
      return;
    }
    switch ( esc )
    {
    default:
      map = mmap[0];
      break;
    case 1024:
      map = mmap[3];
      break;
    case 512:
      map = mmap[2];
      break;
    case 256:
      map = mmap[1];
      break;
    }
    esc |= 0;
    CurrentKey = esc | c;
    w3mFuncList[ map[ c ] ].func( );
  }
  else
  {
    CurrentKey = esc | c;
    w3mFuncList[ map[ c ] ].func( );
  }
}
void escmap( void )
{
  char c = do_getch( );
  if ( ( MYCTYPE_MAP[ c ] & 17 ) != 0 )
  {
    escKeyProc( c, 256, EscKeymap );
  }
  return;
}
void escbmap( void )
{
  char c = do_getch( );
  if ( ( MYCTYPE_MAP[ c ] & 8 ) != 0 )
    escdmap( c );
  else
  if ( ( MYCTYPE_MAP[ c ] & 17 ) == 0 )
  {
    return;
  }
  escKeyProc( c, 512, EscBKeymap );
  return;
}
void escdmap( char c )
{
  int d = c - 48;
  c = do_getch( );
  if ( ( MYCTYPE_MAP[ c ] & 8 ) != 0 )
  {
    d = ( ( d * 10 ) + c ) - 48;
    c = do_getch( );
  }
  if ( c == '~' )
  {
    escKeyProc( d, 1024, EscDKeymap );
  }
  return;
}
void multimap( void )
{
  char c = do_getch( );
  if ( ( MYCTYPE_MAP[ c ] & 17 ) != 0 )
  {
    CurrentKey = c | ( CurrentKey << 16 ) | 268435456;
    escKeyProc( c, 0, 0 );
  }
  return;
}
void tmpClearBuffer( Buffer *buf )
{
  if ( buf->pagerSource == 0 && writeBufferCache( buf ) == 0 )
  {
    buf->firstLine = 0;
    buf->topLine = 0;
    buf->currentLine = 0;
    buf->lastLine = 0;
  }
  return;
}
void pushBuffer( Buffer *buf )
{
  Buffer *b;
  deleteImage( CurrentTab->currentBuffer );
  if ( clear_buffer != 0 )
    tmpClearBuffer( CurrentTab->currentBuffer );
  if ( CurrentTab->firstBuffer == CurrentTab->currentBuffer )
  {
    buf->nextBuffer = CurrentTab->firstBuffer;
    CurrentTab->firstBuffer = CurrentTab->currentBuffer = buf;
  }
  else
  {
    b = prevBuffer( CurrentTab->firstBuffer, CurrentTab->currentBuffer );
    if ( b != 0 )
    {
      b->nextBuffer = buf;
      buf->nextBuffer = CurrentTab->currentBuffer;
      CurrentTab->currentBuffer = buf;
    }
  }
  return;
}
void delBuffer( Buffer *buf )
{
  if ( buf == 0 )
  {
  }
  else
  {
    if ( CurrentTab->currentBuffer == buf )
      CurrentTab->currentBuffer = buf->nextBuffer;
    CurrentTab->firstBuffer = deleteBuffer( CurrentTab->firstBuffer, buf );
    if ( CurrentTab->currentBuffer == 0 )
    {
      CurrentTab->currentBuffer = CurrentTab->firstBuffer;
    }
  }
  return;
}
void repBuffer( Buffer *oldbuf, Buffer *buf )
{
  CurrentTab->firstBuffer = replaceBuffer( CurrentTab->firstBuffer, oldbuf, buf );
  CurrentTab->currentBuffer = buf;
  return;
}
void intTrap( int _dummy )
{
  siglongjmp( IntReturn[0].__jmpbuf, 0 );
}
void resize_hook( int _dummy )
{
  need_resize_screen = 1;
  mySignal( 28, &resize_hook );
  return;
}
void resize_screen( void )
{
  need_resize_screen = 0;
  setlinescols( );
  setupscreen( );
  if ( CurrentTab != 0 )
  {
    displayBuffer( CurrentTab->currentBuffer, 1 );
  }
  return;
}
void SigPipe( int _dummy )
{
  init_migemo( );
  mySignal( 13, &SigPipe );
  return;
}
void nscroll( int n, int mode )
{
  Buffer *buf = CurrentTab->currentBuffer;
  Line *top = buf->topLine, *cur = buf->currentLine;
  int lnum, tlnum, llnum, diff_n;
  if ( buf->firstLine == 0 )
  {
    return;
  }
  lnum = cur->linenumber;
  buf->topLine = lineSkip( buf, top, n, 0 );
  if ( buf->topLine == top )
  {
    lnum += n;
    if ( lnum < buf->topLine->linenumber )
      lnum = buf->topLine->linenumber;
    else
    if ( buf->lastLine->linenumber < lnum )
      lnum = buf->lastLine->linenumber;
  }
  else
  {
    tlnum = buf->topLine->linenumber;
    llnum = ( buf->topLine->linenumber + buf->LINES ) - 1;
    if ( nextpage_topline != 0 )
      diff_n = 0;
    else
      diff_n = n + ( top->linenumber - tlnum );
    if ( lnum < tlnum )
      lnum = tlnum + diff_n;
    if ( llnum < lnum )
      lnum = llnum + diff_n;
  }
  gotoLine( buf, lnum );
  arrangeLine( buf );
  if ( n >= 1 )
  {
    if ( buf->currentLine->bpos != 0 )
    {
      if ( buf->visualpos + buf->currentColumn <= buf->currentLine->bwidth )
      {
        cursorDown( buf, 1 );
        displayBuffer( buf, mode );
      }
      else
      {
      }
    }
    else
    {
    }
    if ( buf->currentLine->next != 0 && buf->currentLine->next != 0 )
    {
      if ( buf->visualpos + buf->currentColumn <= buf->currentLine->bwidth + buf->currentLine->width )
      {
      }
      else
      {
        cursorDown0( buf, 1 );
      }
    }
  }
  else
  {
    if ( buf->currentLine->bwidth + buf->currentLine->width < buf->visualpos + buf->currentColumn )
    {
      cursorUp( buf, 1 );
    }
    if ( buf->currentLine->prev != 0 && buf->currentLine->bpos != 0 && buf->visualpos + buf->currentColumn <= buf->currentLine->bwidth )
    {
      cursorUp0( buf, 1 );
    }
  }
}
void pgFore( void )
{
  int eax;
  if ( vi_prec_num != 0 )
  {
    nscroll( searchKeyNum( ) * ( CurrentTab->currentBuffer->LINES - 1 ), 0 );
  }
  nscroll( searchKeyNum( ) * ( CurrentTab->currentBuffer->LINES - 1 ), prec_num == 0 ? 0 : 3 );
  return;
}
void pgBack( void )
{
  int eax;
  if ( vi_prec_num != 0 )
  {
    nscroll( searchKeyNum( ) * ( 1 - CurrentTab->currentBuffer->LINES ), 0 );
  }
  nscroll( eax, ebx );
  return;
}
void lup1( void )
{
  nscroll( searchKeyNum( ), 3 );
  return;
}
void ldown1( void )
{
  nscroll( searchKeyNum( ) * -1, 3 );
  return;
}
void ctrCsrV( void )
{
  int offsety;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  {
    offsety = ( CurrentTab->currentBuffer->LINES / 2 ) - CurrentTab->currentBuffer->cursorY;
    if ( offsety != 0 )
    {
      CurrentTab->currentBuffer->topLine = lineSkip( CurrentTab->currentBuffer, CurrentTab->currentBuffer->topLine, offsety * -1, 0 );
      arrangeLine( CurrentTab->currentBuffer );
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
  }
  return;
}
void ctrCsrH( void )
{
  int offsetx;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  {
    offsetx = CurrentTab->currentBuffer->cursorX - ( CurrentTab->currentBuffer->COLS / 2 );
    if ( offsetx != 0 )
    {
      columnSkip( CurrentTab->currentBuffer, offsetx );
      arrangeCursor( CurrentTab->currentBuffer );
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
  }
  return;
}
void rdrwSc( void )
{
  clear( );
  arrangeCursor( CurrentTab->currentBuffer );
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void clear_mark( Line *l )
{
  int pos;
  if ( l == 0 )
  {
  }
  else
  {
    pos = 0;
    for ( ; pos < l->size; pos++ )
    {
      l->propBuf[ pos ] = l->propBuf[ pos ] & -2;
      //pos++;
    }
  }
  return;
}
int srchcore( char *str, int (*func)( Buffer *, char * ) )
{
  int eax;
  void (*prevtrap)( void );
  int i, result = 2;
  if ( str != 0 && str != SearchString )
    SearchString = str;
  if ( SearchString == 0 || ( SearchString[0] & 255 ) == 0 )
  {
  }
  else
  {
    str = conv_search_string( SearchString, DisplayCharset );
    prevtrap = mySignal( 2, &intTrap );
    crmode( );
    if ( __sigsetjmp( IntReturn[0].__jmpbuf, 1 ) == 0 )
    {
      i = 0;
      for ( ; i < ( prec_num == 0 ? 1 : prec_num ); i++ )
      {
        result = func( CurrentTab->currentBuffer, str );
        if ( i < ( prec_num == 0 ? 0 : prec_num - 1 ) && ( result & 1 ) != 0 )
          clear_mark( CurrentTab->currentBuffer->currentLine );
        //i++;
      }
    }
    mySignal( 2, prevtrap );
    term_raw( );
    return result;
  }
  return result;
}
void disp_srchresult( int result, char *prompt, char *str )
{
  if ( str == 0 )
    str = "";
  if ( ( result & 2 ) != 0 )
  {
    disp_message( *(int*)(Sprintf( "Not found: %s", str )), 1 );
  }
  if ( ( result & 4 ) != 0 )
  {
    disp_message( *(int*)(Sprintf( "Search wrapped: %s", str )), 1 );
  }
  if ( show_srch_str != 0 )
  {
    disp_message( *(int*)(Sprintf( "%s%s", prompt, str )), 1 );
  }
  return;
}
int dispincsrch( int ch, Str buf, Lineprop *prop )
{
  int eax;
  static Buffer sbuf;
  static Line *currentLine;
  static int pos;
  char *str;
  int do_next_search = 0;
  if ( ch == 0 && buf == 0 )
  {
    sbuf.topLine = CurrentTab->currentBuffer->topLine;
    sbuf.currentLine = CurrentTab->currentBuffer->currentLine;
    sbuf.pos = CurrentTab->currentBuffer->pos;
    sbuf.cursorX = CurrentTab->currentBuffer->cursorX;
    sbuf.cursorY = CurrentTab->currentBuffer->cursorY;
    sbuf.visualpos = CurrentTab->currentBuffer->visualpos;
    sbuf.currentColumn = CurrentTab->currentBuffer->currentColumn;
    currentLine = sbuf.currentLine;
    pos = sbuf.pos;
    return ch;
  }
  else
  {
    str = buf->ptr;
    switch ( ch )
    {
    case 18:
      searchRoutine = &backwardSearch;
      do_next_search = 1;
      break;
    case 19:
      searchRoutine = &forwardSearch;
      do_next_search = 1;
      break;
    case 28:
      migemo_active *= -1;
      while ( str++, ( ( ( str[0] & 255 ) != 0 ) & 255 ) != 0 )
      {
        if ( migemo_active < 1 )
        {
          prop[0] = prop[0] & -3;
          prop++;
        }
        else
        {
          prop[0] = prop[0] | 2;
          prop++;
        }
      }
      return ch;
      break;
    default:
      if ( ch >= 0 )
      {
        ch/*error:'i'*/ = ch;
        return ch;
      }
      break;
    }
    if ( do_next_search != 0 )
    {
      if ( ( str[0] & 255 ) != 0 )
      {
        if ( searchRoutine == forwardSearch )
          CurrentTab->currentBuffer->pos++;
        sbuf.topLine = CurrentTab->currentBuffer->topLine;
        sbuf.currentLine = CurrentTab->currentBuffer->currentLine;
        sbuf.pos = CurrentTab->currentBuffer->pos;
        sbuf.cursorX = CurrentTab->currentBuffer->cursorX;
        sbuf.cursorY = CurrentTab->currentBuffer->cursorY;
        sbuf.visualpos = CurrentTab->currentBuffer->visualpos;
        sbuf.currentColumn = CurrentTab->currentBuffer->currentColumn;
        if ( srchcore( str, searchRoutine ) == 2 && searchRoutine == forwardSearch )
        {
          CurrentTab->currentBuffer->pos--;
          sbuf.topLine = CurrentTab->currentBuffer->topLine;
          sbuf.currentLine = CurrentTab->currentBuffer->currentLine;
          sbuf.pos = CurrentTab->currentBuffer->pos;
          sbuf.cursorX = CurrentTab->currentBuffer->cursorX;
          sbuf.cursorY = CurrentTab->currentBuffer->cursorY;
          sbuf.visualpos = CurrentTab->currentBuffer->visualpos;
          sbuf.currentColumn = CurrentTab->currentBuffer->currentColumn;
        }
        arrangeCursor( CurrentTab->currentBuffer );
        displayBuffer( CurrentTab->currentBuffer, 1 );
        clear_mark( CurrentTab->currentBuffer->currentLine );
        return ch;
      }
      else
      {
        return ch;
      }
    }
    else
    {
      if ( ( str[0] & 255 ) != 0 )
      {
        CurrentTab->currentBuffer->topLine = sbuf.topLine;
        CurrentTab->currentBuffer->currentLine = sbuf.currentLine;
        CurrentTab->currentBuffer->pos = sbuf.pos;
        CurrentTab->currentBuffer->cursorX = sbuf.cursorX;
        CurrentTab->currentBuffer->cursorY = sbuf.cursorY;
        CurrentTab->currentBuffer->visualpos = sbuf.visualpos;
        CurrentTab->currentBuffer->currentColumn = sbuf.currentColumn;
        arrangeCursor( CurrentTab->currentBuffer );
        srchcore( str, searchRoutine );
        arrangeCursor( CurrentTab->currentBuffer );
        currentLine = CurrentTab->currentBuffer->currentLine;
        pos = CurrentTab->currentBuffer->pos;
      }
      displayBuffer( CurrentTab->currentBuffer, 1 );
      clear_mark( CurrentTab->currentBuffer->currentLine );
    }
  }
}
void isrch( int (*func)( Buffer *, char * ), char *prompt )
{
  char *str;
  Buffer sbuf;
  sbuf.topLine = CurrentTab->currentBuffer->topLine;
  sbuf.currentLine = CurrentTab->currentBuffer->currentLine;
  sbuf.pos = CurrentTab->currentBuffer->pos;
  sbuf.cursorX = CurrentTab->currentBuffer->cursorX;
  sbuf.cursorY = CurrentTab->currentBuffer->cursorY;
  sbuf.visualpos = CurrentTab->currentBuffer->visualpos;
  sbuf.currentColumn = CurrentTab->currentBuffer->currentColumn;
  dispincsrch( 0, 0, 0 );
  searchRoutine = func;
  str = inputLineHistSearch( prompt, 0, 16, TextHist, &dispincsrch );
  if ( str == 0 )
  {
    CurrentTab->currentBuffer->topLine = sbuf.topLine;
    CurrentTab->currentBuffer->currentLine = sbuf.currentLine;
    CurrentTab->currentBuffer->pos = sbuf.pos;
    CurrentTab->currentBuffer->cursorX = sbuf.cursorX;
    CurrentTab->currentBuffer->cursorY = sbuf.cursorY;
    CurrentTab->currentBuffer->visualpos = sbuf.visualpos;
    CurrentTab->currentBuffer->currentColumn = sbuf.currentColumn;
  }
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void srch( int (*func)( Buffer *, char * ), char *prompt )
{
  char *str;
  int result;
  int disp = 0;
  int pos;
  str = searchKeyData( );
  if ( str == 0 || ( str[0] & 255 ) == 0 )
  {
    str = inputLineHistSearch( prompt, 0, 16, TextHist, 0 );
    if ( str != 0 && ( str[0] & 255 ) == 0 )
      str = SearchString;
    if ( str == 0 )
    {
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
    disp = 1;
  }
  pos = CurrentTab->currentBuffer->pos;
  if ( func == forwardSearch )
    CurrentTab->currentBuffer->pos++;
  result = srchcore( str, func );
  if ( ( result & 1 ) != 0 )
    clear_mark( CurrentTab->currentBuffer->currentLine );
  else
    CurrentTab->currentBuffer->pos = pos;
  displayBuffer( CurrentTab->currentBuffer, 0 );
  if ( disp != 0 )
    disp_srchresult( result, prompt, str );
  searchRoutine = func;
  return;
}
void srchfor( void )
{
  srch( &forwardSearch, "Forward: " );
  return;
}
void isrchfor( void )
{
  isrch( &forwardSearch, "I-search: " );
  return;
}
void srchbak( void )
{
  srch( &backwardSearch, "Backward: " );
  return;
}
void isrchbak( void )
{
  isrch( &backwardSearch, "I-search backward: " );
  return;
}
void srch_nxtprv( int reverse )
{
  int edx;
  static int (*routine[2])( Buffer *, char * ) = { &forwardSearch, &backwardSearch,  };
  int result;
  if ( searchRoutine == 0 )
  {
    disp_message( "No previous regular expression", 1 );
  }
  if ( reverse != 0 )
    reverse = 1;
  if ( searchRoutine == backwardSearch )
    reverse ^= 1;
  if ( reverse == 0 )
    CurrentTab->currentBuffer->pos++;
  result = srchcore( SearchString, routine[ reverse ] );
  if ( ( result & 1 ) != 0 )
    clear_mark( CurrentTab->currentBuffer->currentLine );
  displayBuffer( CurrentTab->currentBuffer, 0 );
  disp_srchresult( result, reverse == 0 ? "Forward: " : "Backward: ", SearchString );
  return;
}
void srchnxt( void )
{
  srch_nxtprv( 0 );
  return;
}
void srchprv( void )
{
  srch_nxtprv( 1 );
  return;
}
void shiftvisualpos( Buffer *buf, int shift )
{
  Line *l = buf->currentLine;
  buf->visualpos -= shift;
  if ( buf->COLS <= buf->visualpos - l->bwidth )
    buf->visualpos = ( l->bwidth + buf->COLS ) - 1;
  else
  if ( buf->visualpos - l->bwidth < 0 )
    buf->visualpos = l->bwidth;
  arrangeLine( buf );
  if ( buf->visualpos - l->bwidth == shift * -1 && ( buf->cursorX & 65535 ) == 0 )
  {
    buf->visualpos = l->bwidth;
  }
  return;
}
void shiftl( void )
{
  int column;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
    return;
  }
  column = CurrentTab->currentBuffer->currentColumn;
  columnSkip( CurrentTab->currentBuffer, ( searchKeyNum( ) * ( 1 - CurrentTab->currentBuffer->COLS ) ) + 1 );
  shiftvisualpos( CurrentTab->currentBuffer, CurrentTab->currentBuffer->currentColumn - column );
  displayBuffer( CurrentTab->currentBuffer, 0 );
}
void shiftr( void )
{
  int column;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
    return;
  }
  column = CurrentTab->currentBuffer->currentColumn;
  columnSkip( CurrentTab->currentBuffer, ( searchKeyNum( ) * ( CurrentTab->currentBuffer->COLS - 1 ) ) - 1 );
  shiftvisualpos( CurrentTab->currentBuffer, CurrentTab->currentBuffer->currentColumn - column );
  displayBuffer( CurrentTab->currentBuffer, 0 );
}
void col1R( void )
{
  Buffer *buf = CurrentTab->currentBuffer;
  Line *l = buf->currentLine;
  int j, column, n = searchKeyNum( );
  if ( l == 0 )
  {
    return;
  }
  j = 0;
  for ( ; j < n; j++ )
  {
    column = buf->currentColumn;
    columnSkip( CurrentTab->currentBuffer, 1 );
    if ( buf->currentColumn == column )
    {
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
    else
    {
      shiftvisualpos( CurrentTab->currentBuffer, 1 );
      //j++;
    }
  }
  displayBuffer( CurrentTab->currentBuffer, 0 );
}
void col1L( void )
{
  Buffer *buf = CurrentTab->currentBuffer;
  Line *l = buf->currentLine;
  int j, n = searchKeyNum( );
  if ( l == 0 )
  {
    return;
  }
  j = 0;
  for ( ; j < n; j++ )
  {
    if ( buf->currentColumn == 0 )
    {
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
    else
    {
      columnSkip( CurrentTab->currentBuffer, -1 );
      shiftvisualpos( CurrentTab->currentBuffer, -1 );
      //j++;
    }
  }
  displayBuffer( CurrentTab->currentBuffer, 0 );
}
void setEnv( void )
{
  char *env;
  char *var, *value;
  CurrentKeyData = 0;
  env = searchKeyData( );
  if ( env == 0 || ( env[0] & 255 ) == 0 || strchr( env, 61 ) == 0 )
  {
    if ( env != 0 && ( env[0] & 255 ) != 0 )
    {
      env = *(int*)(Sprintf( "%s=", env ));
    }
    env = inputLineHistSearch( "Set environ: ", env, 16, TextHist, 0 );
    if ( env == 0 || ( env[0] & 255 ) == 0 )
    {
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
  }
  value = strchr( env, 61 );
  if ( value != 0 && env < value )
  {
    var = allocStr( env, value - env );
    value++;
    set_environ( var, value );
  }
  displayBuffer( CurrentTab->currentBuffer, 0 );
  return;
}
void pipeBuf( void )
{
  Buffer *buf;
  char *cmd, *tmpf;
  FILE *f;
  CurrentKeyData = 0;
  cmd = searchKeyData( );
  if ( cmd == 0 || ( cmd[0] & 255 ) == 0 )
  {
    cmd = inputLineHistSearch( "Pipe buffer to: ", "", 128, ShellHist, 0 );
  }
  if ( cmd != 0 )
  {
    cmd = *(int*)(wc_Str_conv_strict( Strnew_charp( cmd ), InnerCharset, SystemCharset ));
  }
  if ( cmd == 0 || ( cmd[0] & 255 ) == 0 )
  {
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
  tmpf = *(int*)(tmpfname( 0, 0 ));
  f = fopen( tmpf, "w" );
  if ( f == 0 )
  {
    disp_message( *(int*)(Sprintf( "Can't save buffer to %s", cmd )), 1 );
  }
  saveBuffer( CurrentTab->currentBuffer, f, 1 );
  fclose( f );
  buf = getpipe( *(int*)(myExtCommand( cmd, shell_quote( tmpf ), 1 )) );
  if ( buf == 0 )
  {
    disp_message( "Execution failed", 1 );
  }
  buf->filename = cmd;
  buf->buffername = *(int*)(Sprintf( "%s %s", "*stream*", *(int*)(wc_Str_conv( Strnew_charp( cmd ), SystemCharset, InnerCharset )) ));
  buf->bufferprop = buf->bufferprop | 24;
  if ( buf->type == 0 )
    buf->type = "text/plain";
  buf->currentURL.file = "-";
  pushBuffer( buf );
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void pipesh( void )
{
  Buffer *buf;
  char *cmd;
  CurrentKeyData = 0;
  cmd = searchKeyData( );
  if ( cmd == 0 || ( cmd[0] & 255 ) == 0 )
  {
    cmd = inputLineHistSearch( "(read shell[pipe])!", "", 128, ShellHist, 0 );
  }
  if ( cmd != 0 )
  {
    cmd = *(int*)(wc_Str_conv_strict( Strnew_charp( cmd ), InnerCharset, SystemCharset ));
  }
  if ( cmd == 0 || ( cmd[0] & 255 ) == 0 )
  {
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
  buf = getpipe( cmd );
  if ( buf == 0 )
  {
    disp_message( "Execution failed", 1 );
  }
  buf->bufferprop = buf->bufferprop | 24;
  if ( buf->type == 0 )
    buf->type = "text/plain";
  pushBuffer( buf );
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void readsh( void )
{
  Buffer *buf;
  void (*prevtrap)( void );
  char *cmd;
  CurrentKeyData = 0;
  cmd = searchKeyData( );
  if ( cmd == 0 || ( cmd[0] & 255 ) == 0 )
  {
    cmd = inputLineHistSearch( "(read shell)!", "", 128, ShellHist, 0 );
  }
  if ( cmd != 0 )
  {
    cmd = *(int*)(wc_Str_conv_strict( Strnew_charp( cmd ), InnerCharset, SystemCharset ));
  }
  if ( cmd == 0 || ( cmd[0] & 255 ) == 0 )
  {
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
  prevtrap = mySignal( 2, &intTrap );
  crmode( );
  buf = getshell( cmd );
  mySignal( 2, prevtrap );
  term_raw( );
  if ( buf == 0 )
  {
    disp_message( "Execution failed", 1 );
  }
  buf->bufferprop = buf->bufferprop | 24;
  if ( buf->type == 0 )
    buf->type = "text/plain";
  pushBuffer( buf );
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void execsh( void )
{
  char *cmd;
  CurrentKeyData = 0;
  cmd = searchKeyData( );
  if ( cmd == 0 || ( cmd[0] & 255 ) == 0 )
  {
    cmd = inputLineHistSearch( "(exec shell)!", "", 128, ShellHist, 0 );
  }
  if ( cmd != 0 )
  {
    cmd = *(int*)(wc_Str_conv_strict( Strnew_charp( cmd ), InnerCharset, SystemCharset ));
  }
  if ( cmd != 0 && ( cmd[0] & 255 ) != 0 )
  {
    fmTerm( );
    putchar( 10 );
    system( cmd );
    printf( "\n[Hit any key]" );
    fflush( *(int*)(135774752) );
    fmInit( );
    do_getch( );
  }
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void ldfile( void )
{
  char *fn = searchKeyData( );
  if ( fn == 0 || ( fn[0] & 255 ) == 0 )
  {
    fn = inputLineHistSearch( "(Load)Filename? ", 0, 32, LoadHist, 0 );
  }
  if ( fn != 0 )
  {
    fn = *(int*)(wc_Str_conv_strict( Strnew_charp( fn ), InnerCharset, SystemCharset ));
  }
  if ( fn == 0 || ( fn[0] & 255 ) == 0 )
  {
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
  cmd_loadfile( fn );
  return;
}
void ldhelp( void )
{
  char *lang = AcceptLang;
  int n = strcspn( lang, ";, \t" );
  Str tmp = Sprintf( "file:///$LIB/w3mhelp.cgi?version=%s&lang=%s", *(int*)(Str_form_quote( Strnew_charp( w3m_version ) )), *(int*)(Str_form_quote( Strnew_charp_n( lang, n ) )) );
  cmd_loadURL( tmp->ptr, 0, -1, 0 );
  return;
}
void cmd_loadfile( char *fn )
{
  Buffer *buf = loadGeneralFile( file_to_url( fn ), 0, -1, 0, 0 );
  if ( buf == 0 )
  {
    char *emsg = *(int*)(Sprintf( "%s not found", *(int*)(wc_Str_conv( Strnew_charp( fn ), SystemCharset, InnerCharset )) ));
    disp_err_message( emsg, 0 );
  }
  if ( buf != 1 )
  {
    pushBuffer( buf );
    if ( ( RenderFrame & 255 ) != 0 && CurrentTab->currentBuffer->frameset != 0 )
      rFrame( );
  }
  displayBuffer( CurrentTab->currentBuffer, 0 );
  return;
}
void _movL( int n )
{
  int i, m = searchKeyNum( );
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
    return;
  }
  i = 0;
  while ( 1 )
  {
    if ( i < m )
      cursorLeft( CurrentTab->currentBuffer, n );
    else
      displayBuffer( CurrentTab->currentBuffer, 0 );
  }
}
void movL( void )
{
  _movL( ( CurrentTab->currentBuffer->COLS / 2 ) );
  return;
}
void movL1( void )
{
  _movL( 1 );
  return;
}
void _movD( int n )
{
  int i, m = searchKeyNum( );
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
    return;
  }
  i = 0;
  while ( 1 )
  {
    if ( i < m )
      cursorDown( CurrentTab->currentBuffer, n );
    else
      displayBuffer( CurrentTab->currentBuffer, 0 );
  }
}
void movD( void )
{
  _movD( ( CurrentTab->currentBuffer->LINES + 1 ) / 2 );
  return;
}
void movD1( void )
{
  _movD( 1 );
  return;
}
void _movU( int n )
{
  int i, m = searchKeyNum( );
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
    return;
  }
  i = 0;
  while ( 1 )
  {
    if ( i < m )
      cursorUp( CurrentTab->currentBuffer, n );
    else
      displayBuffer( CurrentTab->currentBuffer, 0 );
  }
}
void movU( void )
{
  _movU( ( CurrentTab->currentBuffer->LINES + 1 ) / 2 );
  return;
}
void movU1( void )
{
  _movU( 1 );
  return;
}
void _movR( int n )
{
  int i, m = searchKeyNum( );
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
    return;
  }
  i = 0;
  while ( 1 )
  {
    if ( i < m )
      cursorRight( CurrentTab->currentBuffer, n );
    else
      displayBuffer( CurrentTab->currentBuffer, 0 );
  }
}
void movR( void )
{
  _movR( ( CurrentTab->currentBuffer->COLS / 2 ) );
  return;
}
void movR1( void )
{
  _movR( 1 );
  return;
}
int prev_nonnull_line( Line *line )
{
  Line *l = line;
  for ( ; l != 0 && l->len == 0; l = l->prev )
  {
    //l = l->prev;
  }
  if ( l == 0 || l->len == 0 )
  {
  }
  else
  {
    CurrentTab->currentBuffer->currentLine = l;
    if ( line != l )
      CurrentTab->currentBuffer->pos = CurrentTab->currentBuffer->currentLine->len;
  }
  return 0;
}
void movLW( void )
{
  char *lb;
  Lineprop *pb;
  Line *pline;
  int ppos;
  int i, n = searchKeyNum( );
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
    return;
  }
  i = 0;
  for ( ; i < n; i++ )
  {
    pline = CurrentTab->currentBuffer->currentLine;
    ppos = CurrentTab->currentBuffer->pos;
    if ( prev_nonnull_line( CurrentTab->currentBuffer->currentLine ) < 0 )
    {
    }
    else
    {
      while ( 1 )
      {
        lb = CurrentTab->currentBuffer->currentLine->lineBuf;
        pb = CurrentTab->currentBuffer->currentLine->propBuf;
        for ( ; CurrentTab->currentBuffer->pos >= 1 && ( ( MYCTYPE_MAP[ lb[ CurrentTab->currentBuffer->pos - 1 ] ] & 12 ) == 0 || ( pb[ CurrentTab->currentBuffer->pos - 1 ] & 16128 ) != 0 ); CurrentTab->currentBuffer->pos-- )
        {
          //CurrentTab->currentBuffer->pos--;
        }
        if ( CurrentTab->currentBuffer->pos < 1 )
        {
          if ( prev_nonnull_line( CurrentTab->currentBuffer->currentLine->prev ) < 0 )
          {
            CurrentTab->currentBuffer->currentLine = pline;
            CurrentTab->currentBuffer->pos = ppos;
          }
          else
          {
            CurrentTab->currentBuffer->pos = CurrentTab->currentBuffer->currentLine->len;
          }
        }
        else
        {
          lb = CurrentTab->currentBuffer->currentLine->lineBuf;
          pb = CurrentTab->currentBuffer->currentLine->propBuf;
          for ( ; CurrentTab->currentBuffer->pos >= 1 && ( MYCTYPE_MAP[ lb[ CurrentTab->currentBuffer->pos - 1 ] ] & 12 ) != 0 && ( pb[ CurrentTab->currentBuffer->pos - 1 ] & 16128 ) == 0; CurrentTab->currentBuffer->pos-- )
          {
            //CurrentTab->currentBuffer->pos--;
          }
          i++;
          break;
        }
      }
    }
    arrangeCursor( CurrentTab->currentBuffer );
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
}
int next_nonnull_line( Line *line )
{
  Line *l = line;
  for ( ; l != 0 && l->len == 0; l = l->next )
  {
    //l = l->next;
  }
  if ( l == 0 || l->len == 0 )
  {
  }
  else
  {
    CurrentTab->currentBuffer->currentLine = l;
    if ( line != l )
      CurrentTab->currentBuffer->pos = 0;
  }
  return 0;
}
void movRW( void )
{
  char *lb;
  Lineprop *pb;
  Line *pline;
  int ppos;
  int i, n = searchKeyNum( );
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
    return;
  }
  i = 0;
  while ( i < n )
  {
    pline = CurrentTab->currentBuffer->currentLine;
    ppos = CurrentTab->currentBuffer->pos;
    if ( next_nonnull_line( CurrentTab->currentBuffer->currentLine ) < 0 )
    {
    }
    else
    {
      lb = CurrentTab->currentBuffer->currentLine->lineBuf;
      pb = CurrentTab->currentBuffer->currentLine->propBuf;
      for ( ; ( lb[ CurrentTab->currentBuffer->pos ] & 255 ) != 0; CurrentTab->currentBuffer->pos++ )
      {
        if ( ( MYCTYPE_MAP[ lb[ CurrentTab->currentBuffer->pos ] ] & 12 ) != 0 )
        {
          if ( ( pb[ CurrentTab->currentBuffer->pos ] & 16128 ) != 0 )
          {
            while ( ( lb[ CurrentTab->currentBuffer->pos ] & 255 ) != 0 && ( ( MYCTYPE_MAP[ lb[ CurrentTab->currentBuffer->pos ] ] & 12 ) == 0 || ( pb[ CurrentTab->currentBuffer->pos ] & 16128 ) != 0 ) )
            {
              CurrentTab->currentBuffer->pos++;
            }
            if ( ( lb[ CurrentTab->currentBuffer->pos ] & 255 ) != 0 )
            {
              i++;
              break;
              while ( i < n )
              {
                pline = CurrentTab->currentBuffer->currentLine;
                ppos = CurrentTab->currentBuffer->pos;
              }
            }
            else
            {
              if ( next_nonnull_line( CurrentTab->currentBuffer->currentLine->next ) < 0 )
              {
                CurrentTab->currentBuffer->currentLine = pline;
                CurrentTab->currentBuffer->pos = ppos;
              }
              else
              {
                CurrentTab->currentBuffer->pos = 0;
                lb = CurrentTab->currentBuffer->currentLine->lineBuf;
                pb = CurrentTab->currentBuffer->currentLine->propBuf;
              }
            }
          }
          else
          {
            //CurrentTab->currentBuffer->pos++;
          }
        }
        else
        {
        }
      }
    }
    arrangeCursor( CurrentTab->currentBuffer );
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
}
void _quitfm( int confirm )
{
  char *ans = "y";
  if ( checkDownloadList( ) != 0 )
  {
    ans = inputLineHistSearch( "Download process retains. Do you want to exit w3m? (y/n)", "", 512, 0, 0 );
  }
  else
  if ( confirm != 0 )
  {
    ans = inputLineHistSearch( "Do you want to exit w3m? (y/n)", "", 512, 0, 0 );
  }
  if ( ans != 0 )
  {
    if ( ( MYCTYPE_MAP[ ans[0] ] & 4 ) != 0 )
    {
      if ( (unsigned char)( ans[0] | 32 ) == 'y' )
      {
      }
      else
      {
        displayBuffer( CurrentTab->currentBuffer, 0 );
      }
    }
    else
    if ( ans[0] != 'y' )
      continue;
    term_title( "" );
    if ( activeImage != 0 )
      termImage( );
    fmTerm( );
    save_cookies( );
    if ( UseHistory != 0 && SaveURLHist != 0 )
      saveHistory( URLHist, URLHistSize );
    w3m_exit( 0 );
    return;
  }
}
void quitfm( void )
{
  _quitfm( 0 );
  return;
}
void qquitfm( void )
{
  _quitfm( confirm_on_quit );
  return;
}
void selBuf( void )
{
  Buffer *buf;
  int ok = 0;
  char cmd;
  do
  {
    buf = selectBuffer( CurrentTab->firstBuffer, CurrentTab->currentBuffer, &cmd );
    switch ( cmd )
    {
      if ( cmd != 10 && cmd != 32 )
      {
      }
      else
      {
        CurrentTab->currentBuffer = buf;
        ok = 1;
      }
      break;
    default:
      break;
    case 66:
      ok = 1;
      break;
    case 68:
      delBuffer( buf );
      if ( CurrentTab->firstBuffer == 0 )
      {
        CurrentTab->currentBuffer = CurrentTab->firstBuffer = nullBuffer( );
      }
      else
      {
      }
      break;
    case 113:
      qquitfm( );
      break;
    case 81:
      quitfm( );
      break;
    }
  }
  while ( ok == 0 );
  buf = CurrentTab->firstBuffer;
  for ( ; buf == 0; buf = buf->nextBuffer )
  {
    if ( CurrentTab->currentBuffer == buf )
    {
      //buf = buf->nextBuffer;
    }
    else
    {
      deleteImage( buf );
      if ( clear_buffer != 0 )
      {
        tmpClearBuffer( buf );
      }
      //buf = buf->nextBuffer;
    }
  }
}
void susp( void )
{
  move( LINES - 1, 0 );
  clrtoeolx( );
  refresh( );
  fmTerm( );
  kill( 0, 19 );
  fmInit( );
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void _goLine( char *l )
{
  if ( l == 0 || ( l[0] & 255 ) == 0 || CurrentTab->currentBuffer->currentLine == 0 )
  {
    displayBuffer( CurrentTab->currentBuffer, 1 );
  }
  CurrentTab->currentBuffer->pos = 0;
  if ( ( l[0] == '^' || l[0] == '$' ) && prec_num != 0 )
    gotoRealLine( CurrentTab->currentBuffer, prec_num );
  else
  if ( l[0] == '^' )
  {
    CurrentTab->currentBuffer->topLine = CurrentTab->currentBuffer->currentLine = CurrentTab->currentBuffer->firstLine;
    arrangeCursor( CurrentTab->currentBuffer );
    displayBuffer( CurrentTab->currentBuffer, 1 );
    return;
  }
  if ( l[0] == '$' )
  {
    CurrentTab->currentBuffer->topLine = lineSkip( CurrentTab->currentBuffer, CurrentTab->currentBuffer->lastLine, ~CurrentTab->currentBuffer->LINES / 2, 1 );
    CurrentTab->currentBuffer->currentLine = CurrentTab->currentBuffer->lastLine;
  }
  else
  {
    gotoRealLine( CurrentTab->currentBuffer, atoi( l ) );
  }
}
void goLine( void )
{
  char *str = searchKeyData( );
  if ( prec_num != 0 )
    _goLine( "^" );
  else
  if ( str == 0 )
    inputLineHistSearch( "Goto line: ", "", 16, 0, 0 );
    _goLine( str );
    return;
  _goLine( str );
  _goLine( str );
  return;
}
void goLineF( void )
{
  _goLine( "^" );
  return;
}
void goLineL( void )
{
  _goLine( "$" );
  return;
}
void linbeg( void )
{
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  {
    if ( CurrentTab->currentBuffer->currentLine->prev != 0 && CurrentTab->currentBuffer->currentLine->bpos != 0 )
    {
      cursorUp0( CurrentTab->currentBuffer, 1 );
    }
    CurrentTab->currentBuffer->pos = 0;
    arrangeCursor( CurrentTab->currentBuffer );
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
  return;
}
void linend( void )
{
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  {
    if ( CurrentTab->currentBuffer->currentLine->next != 0 && CurrentTab->currentBuffer->currentLine->next != 0 )
    {
      cursorDown0( CurrentTab->currentBuffer, 1 );
    }
    CurrentTab->currentBuffer->pos = CurrentTab->currentBuffer->currentLine->len - 1;
    arrangeCursor( CurrentTab->currentBuffer );
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
  return;
}
int cur_real_linenumber( Buffer *buf )
{
  int eax;
  Line *l, *cur = buf->currentLine;
  int n;
  if ( cur == 0 )
  {
  }
  else
  {
    n = cur->real_linenumber == 0 ? 1 : cur->real_linenumber;
    l = buf->firstLine;
    for ( ; l != 0 && l != cur && l->real_linenumber == 0; l = l->next )
    {
      if ( l->bpos == 0 )
        n++;
      //l = l->next;
    }
    n/*error:'i'*/ = n;
  }
  return n;
}
void editBf( void )
{
  char *fn = CurrentTab->currentBuffer->filename;
  Str cmd;
  if ( fn == 0 || CurrentTab->currentBuffer->pagerSource != 0 || ( CurrentTab->currentBuffer->type == 0 && CurrentTab->currentBuffer->edit == 0 ) || CurrentTab->currentBuffer->real_scheme != 4 || strcmp( CurrentTab->currentBuffer->currentURL.file, "-" ) == 0 || ( CurrentTab->currentBuffer->bufferprop & 2 ) != 0 )
    disp_err_message( "Can't edit other than local file", 1 );
  else
  {
    if ( CurrentTab->currentBuffer->edit != 0 )
    {
      cmd = unquote_mailcap( CurrentTab->currentBuffer->edit, CurrentTab->currentBuffer->real_type, fn, checkHeader( CurrentTab->currentBuffer, "Content-Type:" ), 0 );
    }
    else
    {
      cmd = myEditor( Editor, shell_quote( fn ), cur_real_linenumber( CurrentTab->currentBuffer ) );
    }
    fmTerm( );
    system( cmd->ptr );
    fmInit( );
    displayBuffer( CurrentTab->currentBuffer, 1 );
  }
  reload( );
  return;
}
void editScr( void )
{
  char *tmpf = *(int*)(tmpfname( 0, 0 ));
  FILE *f = fopen( tmpf, "w" );
  if ( f == 0 )
  {
    disp_err_message( *(int*)(Sprintf( "Can't open %s", tmpf )), 1 );
  }
  saveBuffer( CurrentTab->currentBuffer, f, 1 );
  fclose( f );
  fmTerm( );
  system( *(int*)(myEditor( Editor, shell_quote( tmpf ), cur_real_linenumber( CurrentTab->currentBuffer ) )) );
  fmInit( );
  unlink( tmpf );
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void _mark( void )
{
  Line *l;
  if ( use_mark == 0 )
  {
    return;
  }
  else
  {
    if ( CurrentTab->currentBuffer->firstLine == 0 )
    {
      return;
    }
    else
    {
      l = CurrentTab->currentBuffer->currentLine;
      l->propBuf[ CurrentTab->currentBuffer->pos ] = l->propBuf[ CurrentTab->currentBuffer->pos ] ^ 1;
      displayBuffer( CurrentTab->currentBuffer, 1 );
      return;
    }
  }
}
void nextMk( void )
{
  Line *l;
  int i;
  if ( use_mark == 0 )
  {
  }
  else
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  {
    i = CurrentTab->currentBuffer->pos + 1;
    l = CurrentTab->currentBuffer->currentLine;
    if ( l->len <= i )
    {
      i = 0;
      l = l->next;
    }
    while ( l != 0 )
    {
      while ( i < l->len )
      {
        if ( ( l->propBuf[ i ] & 1 ) != 0 )
        {
          CurrentTab->currentBuffer->currentLine = l;
          CurrentTab->currentBuffer->pos = i;
          arrangeCursor( CurrentTab->currentBuffer );
          displayBuffer( CurrentTab->currentBuffer, 0 );
        }
        i++;
      }
      l = l->next;
      i = 0;
    }
    disp_message( "No mark exist after here", 1 );
  }
  return;
}
void prevMk( void )
{
  Line *l;
  int i;
  if ( use_mark == 0 )
  {
  }
  else
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  {
    i = CurrentTab->currentBuffer->pos - 1;
    l = CurrentTab->currentBuffer->currentLine;
    if ( i < 0 )
    {
      l = l->prev;
      if ( l != 0 )
      {
        i = l->len - 1;
      }
      while ( l != 0 )
      {
        for ( ; i >= 0; i-- )
        {
          if ( ( l->propBuf[ i ] & 1 ) != 0 )
          {
            CurrentTab->currentBuffer->currentLine = l;
            CurrentTab->currentBuffer->pos = i;
            arrangeCursor( CurrentTab->currentBuffer );
            displayBuffer( CurrentTab->currentBuffer, 0 );
          }
          //i--;
        }
        l = l->prev;
        if ( l != 0 )
        {
          i = l->len - 1;
        }
      }
      disp_message( "No mark exist before here", 1 );
    }
  }
  return;
}
void reMark( void )
{
  Line *l;
  char *str;
  char *p, *p1, *p2;
  if ( use_mark == 0 )
  {
    return;
  }
  str = searchKeyData( );
  if ( str == 0 || ( str[0] & 255 ) == 0 )
  {
    str = inputLineHistSearch( "(Mark)Regexp: ", MarkString, 16, TextHist, 0 );
    if ( str == 0 || ( str[0] & 255 ) == 0 )
    {
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
  }
  str = conv_search_string( str, DisplayCharset );
  str = regexCompile( str, 1 );
  if ( str != 0 )
  {
    disp_message( str, 1 );
    while ( l == 0 )
    {
      p = l->lineBuf;
      while ( regexMatch( p, l->lineBuf[ l->len ] - p, l->lineBuf == p ) == 1 )
      {
        l = l->next;
        break;
      }
    }
  }
  else
  {
    MarkString = str;
    l = CurrentTab->currentBuffer->firstLine;
  }
}
Buffer *loadNormalBuf( Buffer *buf, int renderframe )
{
  pushBuffer( buf );
  if ( renderframe != 0 && ( RenderFrame & 255 ) != 0 && CurrentTab->currentBuffer->frameset != 0 )
  {
    rFrame( );
  }
  return buf;
}
Buffer *loadLink( char *url, char *target, char *referer, FormList *request )
{
  int eax;
  Buffer *buf, *nfbuf;
  union frameset_element *f_element = 0;
  int flag = 0;
  ParsedURL *base;
  ParsedURL pu;
  message( *(int*)(Sprintf( "loading %s", url )), 0, 0 );
  refresh( );
  base = baseURL( CurrentTab->currentBuffer );
  if ( base == 0 || base->scheme == 4 || base->scheme == 5 )
    referer = -1;
  if ( referer == 0 )
  {
    referer = *(int*)(parsedURL2Str( &CurrentTab->currentBuffer->currentURL ));
  }
  buf = loadGeneralFile( url, baseURL( CurrentTab->currentBuffer ), referer, flag, request );
  if ( buf == 0 )
  {
    char *emsg = *(int*)(Sprintf( "Can't load %s", url ));
    disp_err_message( emsg, 0 );
    return buf;
  }
  else
  {
    parseURL2( url, &pu, base );
    pushHashHist( URLHist, *(int*)(parsedURL2Str( &pu )) );
    if ( buf == 1 )
    {
      return buf;
    }
    else
    {
      if ( on_target == 0 )
      {
        loadNormalBuf( buf, 1 );
      }
      if ( do_download != 0 )
        loadNormalBuf( buf, 0 );
      else
      if ( target == 0 )
      {
        loadNormalBuf( buf, 1 );
      }
      if ( strcmp( target, "_top" ) == 0 || ( CurrentTab->currentBuffer->bufferprop & 2 ) == 0 )
      {
        loadNormalBuf( buf, 1 );
      }
      nfbuf = CurrentTab->currentBuffer->linkBuffer[1];
      if ( nfbuf == 0 )
      {
        loadNormalBuf( buf, 1 );
      }
      f_element = search_frame( nfbuf->frameset, target );
      if ( f_element == 0 )
      {
        loadNormalBuf( buf, 1 );
      }
      pushFrameTree( &nfbuf->frameQ, copyFrameSet( nfbuf->frameset ), CurrentTab->currentBuffer );
      delBuffer( CurrentTab->currentBuffer );
      CurrentTab->currentBuffer = nfbuf;
      resetFrameElement( f_element, buf, referer, request );
      discardBuffer( buf );
      rFrame( );
    {
      Anchor *al = 0;
      char *label = pu.label;
      if ( label != 0 && f_element->attr/*error:'c'*/ == 1 )
      {
        al = searchAnchor( &f_element[0].element[3].name[0]/*error:'c'*/, label );
      }
      if ( al == 0 )
      {
        label = *(int*)(Strnew_m_charp( "_", (long long)( target ) ));
        al = searchURLLabel( CurrentTab->currentBuffer, label );
      }
      if ( al != 0 )
      {
        gotoLine( CurrentTab->currentBuffer, al->start.line );
        if ( label_topline != 0 )
        {
          CurrentTab->currentBuffer->topLine = lineSkip( CurrentTab->currentBuffer, CurrentTab->currentBuffer->topLine, CurrentTab->currentBuffer->currentLine->linenumber - CurrentTab->currentBuffer->topLine->linenumber, 0 );
          CurrentTab->currentBuffer->pos = al->start.pos;
          arrangeCursor( CurrentTab->currentBuffer );
          displayBuffer( CurrentTab->currentBuffer, 0 );
          buf->filename = (char*)buf;
          return buf;
        }
        else
        {
          CurrentTab->currentBuffer->pos = al->start.pos;
          arrangeCursor( CurrentTab->currentBuffer );
          displayBuffer( CurrentTab->currentBuffer, 0 );
          buf->filename = (char*)buf;
          return buf;
        }
      }
      else
      {
        displayBuffer( CurrentTab->currentBuffer, 0 );
        buf->filename = (char*)buf;
        return buf;
      }
    }
    }
  }
}
void gotoLabel( char *label )
{
  Buffer *buf;
  Anchor *al = searchURLLabel( CurrentTab->currentBuffer, label );
  int i;
  if ( al == 0 )
  {
    disp_message( *(int*)(Sprintf( "%s is not found", label )), 1 );
  }
  buf = newBuffer( CurrentTab->currentBuffer->width );
  copyBuffer( buf, CurrentTab->currentBuffer );
  i = 0;
  for ( ; i <= 4; i++ )
  {
    buf->linkBuffer[ i ] = 0;
    //i++;
  }
  buf->currentURL.label = allocStr( label, -1 );
  pushHashHist( URLHist, *(int*)(parsedURL2Str( &buf->currentURL )) );
  buf->clone[0]++;
  pushBuffer( buf );
  gotoLine( CurrentTab->currentBuffer, al->start.line );
  if ( label_topline != 0 )
  {
    CurrentTab->currentBuffer->topLine = lineSkip( CurrentTab->currentBuffer, CurrentTab->currentBuffer->topLine, CurrentTab->currentBuffer->currentLine->linenumber - CurrentTab->currentBuffer->topLine->linenumber, 0 );
    CurrentTab->currentBuffer->pos = al->start.pos;
    arrangeCursor( CurrentTab->currentBuffer );
    displayBuffer( CurrentTab->currentBuffer, 1 );
  }
  else
  {
    CurrentTab->currentBuffer->pos = al->start.pos;
    arrangeCursor( CurrentTab->currentBuffer );
    displayBuffer( CurrentTab->currentBuffer, 1 );
  }
}
void followA( void )
{
  Line *l;
  Anchor *a;
  ParsedURL u;
  int x = 0, y = 0, map = 0;
  char *url;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
    return;
  }
  l = CurrentTab->currentBuffer->currentLine;
  a = retrieveCurrentImg( CurrentTab->currentBuffer );
  if ( a != 0 && a->image != 0 && a->image->map != 0 )
  {
    _followForm( 0 );
  }
  if ( a != 0 && a->image != 0 && ( a->image->ismap & 255 ) != 0 )
  {
    getMapXY( CurrentTab->currentBuffer, a, &x, &y );
    map = 1;
  }
  a = retrieveCurrentAnchor( CurrentTab->currentBuffer );
  if ( a == 0 )
  {
    _followForm( 0 );
  }
  if ( a->url[0] == '#' )
  {
    gotoLabel( &a->url[1] );
  }
  parseURL2( a->url, &u, baseURL( CurrentTab->currentBuffer ) );
  if ( strcmp( *(int*)(parsedURL2Str( &u )), *(int*)(parsedURL2Str( &CurrentTab->currentBuffer->currentURL )) ) == 0 && u.label != 0 )
    gotoLabel( u.label );
  else
    strncasecmp( a->url, "mailto:", 7 );
  if ( u.label == 0 && non_null( Mailer ) != 0 && strchr( a->url, 63 ) == 0 )
  {
    Str to = Strnew_charp( &a->url[7] );
    fmTerm( );
    system( *(int*)(myExtCommand( Mailer, shell_quote( file_unquote( to->ptr ) ), 0 )) );
    fmInit( );
    displayBuffer( CurrentTab->currentBuffer, 1 );
    pushHashHist( URLHist, a->url );
  }
  url = a->url;
  if ( map != 0 )
  {
    url = *(int*)(Sprintf( "%s?%d,%d", a->url, x, y ));
  }
  if ( check_target != 0 && open_tab_blank != 0 && a->target != 0 && ( strcasecmp( a->target, "_new" ) == 0 || strcasecmp( a->target, "_blank" ) == 0 ) )
  {
    Buffer *buf;
    _newT( );
    buf = CurrentTab->currentBuffer;
    loadLink( url, a->target, a->referer, 0 );
    if ( CurrentTab->currentBuffer != buf )
      delBuffer( buf );
      displayBuffer( CurrentTab->currentBuffer, 1 );
    else
      deleteTab( CurrentTab );
      displayBuffer( CurrentTab->currentBuffer, 1 );
  }
  else
  {
    loadLink( url, a->target, a->referer, 0 );
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
}
void bufferA( void )
{
  on_target = 0;
  followA( );
  on_target = 1;
  return;
}
void followI( void )
{
  Line *l;
  Anchor *a;
  Buffer *buf;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  {
    l = CurrentTab->currentBuffer->currentLine;
    a = retrieveCurrentImg( CurrentTab->currentBuffer );
    if ( a == 0 )
    {
    }
    else
    {
      message( *(int*)(Sprintf( "loading %s", a->url )), 0, 0 );
      refresh( );
      buf = loadGeneralFile( a->url, baseURL( CurrentTab->currentBuffer ), 0, 0, 0 );
      if ( buf == 0 )
      {
        char *emsg = *(int*)(Sprintf( "Can't load %s", a->url ));
        disp_err_message( emsg, 0 );
      }
      if ( buf != 1 )
        pushBuffer( buf );
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
  }
  return;
}
FormItemList *save_submit_formlist( FormItemList *src )
{
  int eax;
  FormList *list;
  FormList *srclist;
  FormItemList *srcitem;
  FormItemList *item;
  FormItemList *ret = 0;
  FormSelectOptionItem *opt;
  FormSelectOptionItem *curopt;
  FormSelectOptionItem *srcopt;
  if ( src == 0 )
  {
  }
  else
  {
    srclist = src->parent;
    list = GC_malloc( 52 );
    list->method = srclist->method;
    list->action = Strdup( srclist->action );
    list->charset = srclist->charset;
    list->enctype = srclist->enctype;
    list->nitems = srclist->nitems;
    list->body = srclist->body;
    list->boundary = srclist->boundary;
    list->length = srclist->length;
    srcitem = srclist->item;
    for ( ; srcitem != 0; srcitem = srcitem->next )
    {
      item = GC_malloc( 72 );
      item->type = srcitem->type;
      item->name = Strdup( srcitem->name );
      item->value = Strdup( srcitem->value );
      item->checked = srcitem->checked;
      item->accept = srcitem->accept;
      item->size = srcitem->size;
      item->rows = srcitem->rows;
      item->maxlength = srcitem->maxlength;
      item->readonly = srcitem->readonly;
      opt = curopt = 0;
      srcopt = srcitem->select_option;
      for ( ; srcopt != 0; srcopt = srcopt->next )
      {
        if ( srcopt->checked == 0 )
        {
        }
        else
        {
          opt = GC_malloc( 16 );
          opt->value = Strdup( srcopt->value );
          opt->label = Strdup( srcopt->label );
          opt->checked = srcopt->checked;
          if ( item->select_option == 0 )
          {
            item->select_option = curopt = opt;
          }
          else
          {
            curopt = curopt->next = opt;
          }
        }
        //srcopt = srcopt->next;
      }
      item->select_option = opt;
      if ( srcitem->label != 0 )
      {
        item->label = Strdup( srcitem->label );
      }
      item->parent = list;
      item->next = 0;
      if ( list->lastitem == 0 )
      {
        list->item = list->lastitem = item;
      }
      else
      {
        list->lastitem->next = item;
        list->lastitem = item;
      }
      if ( srcitem == src )
        ret = item;
      //srcitem = srcitem->next;
    }
    ret->type = ret;
  }
  return ret;
}
Str conv_form_encoding( Str val, FormItemList *fi, Buffer *buf )
{
  wc_ces charset = SystemCharset;
  if ( fi->parent->charset != 0 )
    charset = fi->parent->charset;
  else
  if ( buf->document_charset != 0 && buf->document_charset != 256 )
    charset = buf->document_charset;
  return wc_Str_conv_strict( val, InnerCharset, charset );
}
void query_from_followform( Str *query, FormItemList *fi, int multipart )
{
  FormItemList *f2;
  FILE *body = 0;
  if ( multipart != 0 )
  {
    query[0] = tmpfname( 0, 0 );
    body = fopen( query[0]->ptr, "w" );
    if ( body == 0 )
    {
      return;
    }
    else
    {
      fi->parent->body = query[0]->ptr;
      fi->parent->boundary = *(int*)(Sprintf( "------------------------------%d%ld%ld%ld", CurrentPid, fi->parent, fi->parent->body ));
    }
  }
  query[0] = Strnew( );
  f2 = fi->parent->item;
  for ( ; f2 == 0; f2 = f2->next )
  {
    if ( f2->name == 0 )
    {
      //f2 = f2->next;
    }
    else
    {
      if ( f2->name->length == 0 )
      {
        if ( multipart == 0 )
        {
          if ( f2->type != 0 )
          {
          }
        }
        else
        {
        }
      }
      switch ( f2->type )
      {
      case 5:
        break;
      case 4:
      case 7:
        if ( fi == f2 )
        {
          if ( f2->value == 0 )
          {
          }
          else
          {
            if ( multipart != 0 )
            {
              if ( f2->type == 7 )
              {
                int x = 0, y = 0;
                getMapXY( CurrentTab->currentBuffer, retrieveCurrentImg( CurrentTab->currentBuffer ), &x, &y );
                query[0] = Strdup( conv_form_encoding( f2->name, fi, CurrentTab->currentBuffer ) );
                Strcat_charp( query[0], ".x" );
                form_write_data( body, fi->parent->boundary, query[0]->ptr, *(int*)(Sprintf( "%d", x )) );
                query[0] = Strdup( conv_form_encoding( f2->name, fi, CurrentTab->currentBuffer ) );
                Strcat_charp( query[0], ".y" );
                form_write_data( body, fi->parent->boundary, query[0]->ptr, *(int*)(Sprintf( "%d", y )) );
              }
              if ( f2->name != 0 && f2->name->length >= 1 && f2->value != 0 )
              {
                query[0] = conv_form_encoding( f2->value, fi, CurrentTab->currentBuffer );
                if ( f2->type == 11 )
                {
                  form_write_from_file( body, fi->parent->boundary, *(int*)(conv_form_encoding( f2->name, fi, CurrentTab->currentBuffer )), query[0]->ptr, *(int*)(wc_Str_conv_strict( f2->value, InnerCharset, SystemCharset )) );
                }
                form_write_data( body, fi->parent->boundary, *(int*)(conv_form_encoding( f2->name, fi, CurrentTab->currentBuffer )), query[0]->ptr );
              }
            }
            else
            {
              if ( f2->type == 7 )
              {
                int x = 0, y = 0;
                getMapXY( CurrentTab->currentBuffer, retrieveCurrentImg( CurrentTab->currentBuffer ), &x, &y );
                Strcat( query[0], Str_form_quote( conv_form_encoding( f2->name, fi, CurrentTab->currentBuffer ) ) );
                Strcat( query[0], Sprintf( ".x=%d&", x ) );
                Strcat( query[0], Str_form_quote( conv_form_encoding( f2->name, fi, CurrentTab->currentBuffer ) ) );
                Strcat( query[0], Sprintf( ".y=%d", y ) );
              }
              if ( f2->name != 0 && f2->name->length >= 1 )
              {
                Strcat( query[0], Str_form_quote( conv_form_encoding( f2->name, fi, CurrentTab->currentBuffer ) ) );
                if ( query[0]->area_size <= query[0]->length + 1 )
                  Strgrow( query[0] );
                query[0]->ptr[ query[0]->length ] = '=';
                query[0]->length++;
                query[0]->ptr[ query[0]->length ] = 0;
              }
              if ( f2->value != 0 )
              {
                if ( fi->parent->method == 2 )
                {
                  Strcat( query[0], Str_form_quote( f2->value ) );
                }
                Strcat( query[0], Str_form_quote( conv_form_encoding( f2->value, fi, CurrentTab->currentBuffer ) ) );
              }
              if ( f2->next != 0 )
              {
                if ( query[0]->area_size <= query[0]->length + 1 )
                  Strgrow( query[0] );
                query[0]->ptr[ query[0]->length ] = '&';
                query[0]->length++;
                query[0]->ptr[ query[0]->length ] = 0;
              }
            }
          }
        }
        else
        {
        }
        break;
      case 2:
      case 3:
        if ( f2->checked != 0 )
        {
        }
        else
        {
        }
        break;
      case 0:
      case 1:
      case 6:
        break;
      }
    }
  }
}
void submitForm( void )
{
  _followForm( 1 );
  return;
}
void followForm( void )
{
  _followForm( 0 );
  return;
}
void _followForm( int submit )
{
  int eax;
  int edx;
  Line *l;
  Anchor *a, *a2;
  char *p;
  FormItemList *fi, *f2;
  Str tmp;
  Str tmp2;
  int multipart = 0, i;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  {
    l = CurrentTab->currentBuffer->currentLine;
    a = retrieveCurrentForm( CurrentTab->currentBuffer );
    if ( a == 0 )
    {
    }
    else
    {
      fi = &a->url[0]/*error:'c'*/;
      switch ( fi->type )
      {
      case 0:
        if ( submit != 0 )
        {
          tmp = Strnew( );
          tmp2 = Strnew( );
          multipart = fi->parent->method == 1 && fi->parent->enctype == 1 ? 1 : 0;
          query_from_followform( (Str*)tmp, fi, multipart );
          tmp2 = Strdup( fi->parent->action );
          if ( strcmp( tmp2->ptr, "!CURRENT_URL!" ) == 0 )
          {
            tmp2 = parsedURL2Str( &CurrentTab->currentBuffer->currentURL );
            p = strchr( tmp2->ptr, 63 );
            if ( p != 0 )
              Strshrink( tmp2, tmp2->ptr[ tmp2->length ] - p );
          }
          if ( fi->parent->method == 0 )
          {
            p = strchr( tmp2->ptr, 63 );
            if ( p != 0 )
              Strshrink( tmp2, tmp2->ptr[ tmp2->length ] - p );
            Strcat_charp( tmp2, "?" );
            Strcat( tmp2, tmp );
            loadLink( tmp2->ptr, a->target, 0, 0 );
          }
          else
          {
            if ( fi->parent->method == 1 )
            {
              Buffer *buf;
              if ( multipart != 0 )
              {
                struct stat st;
                stat( fi->parent->body, &st.st_dev );
                fi->parent->length = st.st_size;
              }
              else
              {
                fi->parent->body = tmp->ptr;
                fi->parent->length = tmp->length;
              }
              buf = loadLink( tmp2->ptr, a->target, 0, fi->parent );
              if ( multipart != 0 )
                unlink( fi->parent->body );
              if ( buf != 0 )
              {
                if ( ( buf->bufferprop & 32 ) == 0 )
                {
                  *(int*)(ebp_52 + 220) = save_submit_formlist( fi );
                  displayBuffer( CurrentTab->currentBuffer, 1 );
                }
                else
                {
                }
              }
              else
              {
              }
            }
            else
            {
              if ( fi->parent->method != 2 )
              {
                if ( ( CurrentTab->currentBuffer->bufferprop & 8 ) != 0 )
                {
                  do_internal( tmp2->ptr, tmp->ptr );
                }
                else
                {
                  disp_err_message( "Can't send form because of illegal method.", 0 );
                }
              }
              else
              {
                if ( strcmp( fi->parent->action->ptr, "map" ) != 0 )
                {
                  if ( strcmp( fi->parent->action->ptr, "none" ) != 0 )
                  {
                  }
                }
              }
            }
          }
        }
        else
        {
          if ( fi->readonly != 0 )
            disp_message_nsec( "Read only field!", 0, 1, 1, 0 );
          p = inputLineHistSearch( "TEXT:", fi->value == 0 ? 0 : fi->value->ptr, 16, TextHist, 0 );
          if ( p != 0 && fi->readonly == 0 )
          {
            fi->value = Strnew_charp( p );
            formUpdateBuffer( a, CurrentTab->currentBuffer, fi );
            if ( fi->accept == 0 && fi->parent->nitems != 1 )
            {
            }
          }
        }
        break;
      case 11:
        if ( submit != 0 )
        {
        }
        else
        {
          if ( fi->readonly != 0 )
            disp_message_nsec( "Read only field!", 0, 1, 1, 0 );
          p = inputLineHistSearch( "Filename:", fi->value == 0 ? 0 : fi->value->ptr, 32, 0, 0 );
          if ( p != 0 && fi->readonly == 0 )
          {
            fi->value = Strnew_charp( p );
            formUpdateBuffer( a, CurrentTab->currentBuffer, fi );
            if ( fi->accept == 0 && fi->parent->nitems != 1 )
            {
            }
          }
        }
        break;
      case 1:
        if ( submit != 0 )
        {
        }
        else
        {
          if ( fi->readonly != 0 )
            disp_message_nsec( "Read only field!", 0, 1, 1, 0 );
          else
          {
            p = inputLineHistSearch( "Password:", fi->value->ptr, 64, 0, 0 );
            if ( p == 0 )
            {
            }
            else
            {
              fi->value = Strnew_charp( p );
              formUpdateBuffer( a, CurrentTab->currentBuffer, fi );
              if ( fi->accept != 0 )
              {
              }
              else
              {
              }
            }
          }
          fi->value->ptr[0] = fi->value->ptr;
          p = inputLineHistSearch( "Password:", fi->value->ptr, 64, 0, 0 );
        }
        break;
      case 9:
        if ( submit != 0 )
        {
        }
        else
        {
          if ( fi->readonly != 0 )
            disp_message_nsec( "Read only field!", 0, 1, 1, 0 );
          input_textarea( fi );
          formUpdateBuffer( a, CurrentTab->currentBuffer, fi );
        }
        break;
      case 3:
        if ( submit != 0 )
        {
        }
        else
        {
          if ( fi->readonly != 0 )
          {
            disp_message_nsec( "Read only field!", 0, 1, 1, 0 );
          }
          formRecheckRadio( a, CurrentTab->currentBuffer, fi );
        }
        break;
      case 2:
        if ( submit != 0 )
        {
        }
        else
        {
          if ( fi->readonly != 0 )
          {
            disp_message_nsec( "Read only field!", 0, 1, 1, 0 );
          }
          fi->checked = fi->checked == 0;
          formUpdateBuffer( a, CurrentTab->currentBuffer, fi );
        }
        break;
      case 8:
        if ( submit != 0 )
        {
        }
        else
        {
          if ( formChooseOptionByMenu( fi, a->start.pos + ( CurrentTab->currentBuffer->cursorX - CurrentTab->currentBuffer->pos ) + CurrentTab->currentBuffer->rootX, CurrentTab->currentBuffer->cursorY + CurrentTab->currentBuffer->rootY ) == 0 )
          {
          }
          else
          {
            formUpdateBuffer( a, CurrentTab->currentBuffer, fi );
            if ( fi->parent->nitems == 1 )
            {
            }
            else
            {
            }
          }
        }
        break;
      case 4:
      case 7:
      case 10:
        break;
      case 5:
        i = 0;
        for ( ; i < CurrentTab->currentBuffer->formitem->nanchor; i++ )
        {
          a2 = &CurrentTab->currentBuffer->formitem->anchors[ i ];
          f2 = &a2->url[0]/*error:'c'*/;
          if ( fi->parent == f2->parent && f2->name != 0 && f2->value != 0 && f2->type != 4 && f2->type != 6 && f2->type != 5 )
          {
            f2->value = f2->init_value;
            f2->checked = f2->init_checked;
            f2->label = f2->init_label;
            f2->selected = f2->init_selected;
            formUpdateBuffer( a2, CurrentTab->currentBuffer, f2 );
          }
          //i++;
        }
        break;
      case 6:
        break;
      }
    }
  }
  return;
}
void topA( void )
{
  HmarkerList *hl = CurrentTab->currentBuffer->hmarklist;
  BufferPoint *po;
  Anchor *an;
  int hseq = 0;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  if ( hl != 0 )
  {
    if ( hl->nmark == 0 )
    {
    }
    else
    {
      if ( hl->nmark < prec_num )
      {
        hseq = hl->nmark - 1;
      }
      else
      if ( prec_num >= 1 )
      {
        hseq = prec_num - 1;
      }
      do
      {
        if ( hl->nmark <= hseq )
        {
          break;
        }
        else
        {
          po = &hl->marks[ hseq ];
          an = retrieveAnchor( CurrentTab->currentBuffer->href, po->line, po->pos );
          if ( an == 0 )
          {
            an = retrieveAnchor( CurrentTab->currentBuffer->formitem, po->line, po->pos );
          }
          hseq++;
        }
      }
      while ( an != 0 );
      gotoLine( CurrentTab->currentBuffer, po->line );
      CurrentTab->currentBuffer->pos = po->pos;
      arrangeCursor( CurrentTab->currentBuffer );
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
  }
  else
  {
  }
  return;
}
void lastA( void )
{
  HmarkerList *hl = CurrentTab->currentBuffer->hmarklist;
  BufferPoint *po;
  Anchor *an;
  int hseq;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  if ( hl != 0 )
  {
    if ( hl->nmark == 0 )
    {
    }
    else
    if ( hl->nmark <= prec_num )
    {
      hseq = 0;
      do
      {
        if ( hseq < 0 )
        {
          break;
        }
        else
        {
          po = &hl->marks[ hseq ];
          an = retrieveAnchor( CurrentTab->currentBuffer->href, po->line, po->pos );
          if ( an == 0 )
          {
            an = retrieveAnchor( CurrentTab->currentBuffer->formitem, po->line, po->pos );
          }
          hseq--;
        }
      }
      while ( an != 0 );
      gotoLine( CurrentTab->currentBuffer, po->line );
      CurrentTab->currentBuffer->pos = po->pos;
      arrangeCursor( CurrentTab->currentBuffer );
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
    else
    if ( prec_num >= 1 )
    {
      hseq = hl->nmark - prec_num;
    }
    else
    {
      hseq = hl->nmark - 1;
    }
  }
  else
  {
  }
  return;
}
void nextA( void )
{
  _nextA( 0 );
  return;
}
void prevA( void )
{
  _prevA( 0 );
  return;
}
void nextVA( void )
{
  _nextA( 1 );
  return;
}
void prevVA( void )
{
  _prevA( 1 );
  return;
}
void _nextA( int visited )
{
  HmarkerList *hl = CurrentTab->currentBuffer->hmarklist;
  BufferPoint *po;
  Anchor *an, *pan;
  int i, x, y, n = searchKeyNum( );
  ParsedURL url;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  if ( hl != 0 )
  {
    if ( hl->nmark == 0 )
    {
    }
    else
    {
      an = retrieveCurrentAnchor( CurrentTab->currentBuffer );
      if ( visited != 1 && an == 0 )
      {
        an = retrieveCurrentForm( CurrentTab->currentBuffer );
      }
      y = CurrentTab->currentBuffer->currentLine->linenumber;
      x = CurrentTab->currentBuffer->pos;
      if ( visited == 1 )
        n = hl->nmark;
      i = 0;
      for ( ; i < n; i++ )
      {
        pan = an;
        if ( an != 0 && an->hseq >= 0 )
        {
          int hseq = an->hseq + 1;
          do
          {
            if ( hl->nmark <= hseq )
            {
              if ( visited == 1 )
              {
                break;
              }
              else
                an = pan;
                if ( an != 0 )
                {
                  if ( an->hseq < 0 )
                  {
                    break;
                  }
                  else
                  {
                    po = &hl->marks[ an->hseq ];
                    gotoLine( CurrentTab->currentBuffer, po->line );
                    CurrentTab->currentBuffer->pos = po->pos;
                    arrangeCursor( CurrentTab->currentBuffer );
                    displayBuffer( CurrentTab->currentBuffer, 0 );
                  }
                }
                else
                {
                  break;
                }
            }
            else
            {
              po = &hl->marks[ hseq ];
              an = retrieveAnchor( CurrentTab->currentBuffer->href, po->line, po->pos );
              if ( visited != 1 && an == 0 )
              {
                an = retrieveAnchor( CurrentTab->currentBuffer->formitem, po->line, po->pos );
              }
              hseq++;
              if ( visited == 1 && an != 0 )
              {
                parseURL2( an->url, &url, baseURL( CurrentTab->currentBuffer ) );
                if ( getHashHist( URLHist, *(int*)(parsedURL2Str( &url )) ) != 0 )
                {
                }
              }
            }
          }
          while ( an != 0 && pan != an );
        }
        else
        {
          an = closest_next_anchor( CurrentTab->currentBuffer->href, 0, x, y );
          if ( visited != 1 )
          {
            an = closest_next_anchor( CurrentTab->currentBuffer->formitem, an, x, y );
          }
          if ( an == 0 )
          {
            if ( visited == 1 )
            {
              break;
            }
            else
            {
              an = pan;
              break;
            }
          }
          else
          {
            x = an->start.pos;
            y = an->start.line;
            if ( visited == 1 )
            {
              parseURL2( an->url, &url, baseURL( CurrentTab->currentBuffer ) );
              if ( getHashHist( URLHist, *(int*)(parsedURL2Str( &url )) ) != 0 )
              {
              }
            }
          }
        }
        //i++;
      }
      if ( visited != 1 )
      {
      }
      else
      {
      }
    }
  }
  else
  {
  }
  return;
}
void _prevA( int visited )
{
  HmarkerList *hl = CurrentTab->currentBuffer->hmarklist;
  BufferPoint *po;
  Anchor *an, *pan;
  int i, x, y, n = searchKeyNum( );
  ParsedURL url;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  if ( hl != 0 )
  {
    if ( hl->nmark == 0 )
    {
    }
    else
    {
      an = retrieveCurrentAnchor( CurrentTab->currentBuffer );
      if ( visited != 1 && an == 0 )
      {
        an = retrieveCurrentForm( CurrentTab->currentBuffer );
      }
      y = CurrentTab->currentBuffer->currentLine->linenumber;
      x = CurrentTab->currentBuffer->pos;
      if ( visited == 1 )
        n = hl->nmark;
      i = 0;
      for ( ; i < n; i++ )
      {
        pan = an;
        if ( an != 0 && an->hseq >= 0 )
        {
          int hseq = an->hseq - 1;
          do
          {
            if ( hseq < 0 )
            {
              if ( visited == 1 )
              {
                break;
              }
              else
                an = pan;
                if ( an != 0 )
                {
                  if ( an->hseq < 0 )
                  {
                    break;
                  }
                  else
                  {
                    po = &hl->marks[ an->hseq ];
                    gotoLine( CurrentTab->currentBuffer, po->line );
                    CurrentTab->currentBuffer->pos = po->pos;
                    arrangeCursor( CurrentTab->currentBuffer );
                    displayBuffer( CurrentTab->currentBuffer, 0 );
                  }
                }
                else
                {
                  break;
                }
            }
            else
            {
              po = &hl->marks[ hseq ];
              an = retrieveAnchor( CurrentTab->currentBuffer->href, po->line, po->pos );
              if ( visited != 1 && an == 0 )
              {
                an = retrieveAnchor( CurrentTab->currentBuffer->formitem, po->line, po->pos );
              }
              hseq--;
              if ( visited == 1 && an != 0 )
              {
                parseURL2( an->url, &url, baseURL( CurrentTab->currentBuffer ) );
                if ( getHashHist( URLHist, *(int*)(parsedURL2Str( &url )) ) != 0 )
                {
                }
              }
            }
          }
          while ( an != 0 && pan != an );
        }
        else
        {
          an = closest_prev_anchor( CurrentTab->currentBuffer->href, 0, x, y );
          if ( visited != 1 )
          {
            an = closest_prev_anchor( CurrentTab->currentBuffer->formitem, an, x, y );
          }
          if ( an == 0 )
          {
            if ( visited == 1 )
            {
              break;
            }
            else
            {
              an = pan;
              break;
            }
          }
          else
          {
            x = an->start.pos;
            y = an->start.line;
            if ( visited == 1 && an != 0 )
            {
              parseURL2( an->url, &url, baseURL( CurrentTab->currentBuffer ) );
              if ( getHashHist( URLHist, *(int*)(parsedURL2Str( &url )) ) != 0 )
              {
              }
            }
          }
        }
        //i++;
      }
      if ( visited != 1 )
      {
      }
      else
      {
      }
    }
  }
  else
  {
  }
  return;
}
void nextX( int d, int dy )
{
  int eax;
  HmarkerList *hl = CurrentTab->currentBuffer->hmarklist;
  Anchor *an, *pan;
  Line *l;
  int i, x, y, n = searchKeyNum( );
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  if ( hl != 0 )
  {
    if ( hl->nmark == 0 )
    {
    }
    else
    {
      an = retrieveCurrentAnchor( CurrentTab->currentBuffer );
      if ( an == 0 )
      {
        an = retrieveCurrentForm( CurrentTab->currentBuffer );
      }
      l = CurrentTab->currentBuffer->currentLine;
      x = CurrentTab->currentBuffer->pos;
      y = l->linenumber;
      pan = 0;
      i = 0;
      for ( ; i < n; i++ )
      {
        if ( an != 0 )
        {
          x = d < 1 ? an->start.pos - 1 : an->end.pos;
        }
        an = 0;
        while ( x < 0 || l->len <= x )
        {
          if ( dy != 0 && an == 0 )
          {
            l = dy < 1 ? l->prev : l->next;
            if ( l == 0 )
            {
            }
            else
            {
              x = d < 1 ? l->len - 1 : 0;
              y = l->linenumber;
            }
          }
          if ( an != 0 )
          {
            i++;
            break;
          }
          else
          {
            if ( pan == 0 )
            {
              break;
            }
            else
            {
              gotoLine( CurrentTab->currentBuffer, y );
              CurrentTab->currentBuffer->pos = pan->start.pos;
              arrangeCursor( CurrentTab->currentBuffer );
              displayBuffer( CurrentTab->currentBuffer, 0 );
            }
          }
        }
        an = retrieveAnchor( CurrentTab->currentBuffer->href, y, x );
        if ( an == 0 )
        {
          an = retrieveAnchor( CurrentTab->currentBuffer->formitem, y, x );
        }
        if ( an == 0 )
        {
          x += d;
        }
        else
          pan = an;
      }
    }
  }
  else
  {
  }
  return;
}
void nextY( int d )
{
  HmarkerList *hl = CurrentTab->currentBuffer->hmarklist;
  Anchor *an, *pan;
  int i, x, y, n = searchKeyNum( );
  int hseq;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  if ( hl != 0 )
  {
    if ( hl->nmark == 0 )
    {
    }
    else
    {
      an = retrieveCurrentAnchor( CurrentTab->currentBuffer );
      if ( an == 0 )
      {
        an = retrieveCurrentForm( CurrentTab->currentBuffer );
      }
      x = CurrentTab->currentBuffer->pos;
      y = CurrentTab->currentBuffer->currentLine->linenumber + d;
      pan = 0;
      hseq = -1;
      i = 0;
      for ( ; i < n; i++ )
      {
        if ( an != 0 )
        {
          hseq = an->hseq ^ ( an->hseq >> 31 );
          hseq -= an->hseq >> 31;
        }
        an = 0;
        for ( ; y >= 0 && y <= CurrentTab->currentBuffer->lastLine->linenumber; y += d )
        {
          an = retrieveAnchor( CurrentTab->currentBuffer->href, y, x );
          if ( an == 0 )
          {
            an = retrieveAnchor( CurrentTab->currentBuffer->formitem, y, x );
          }
          if ( an != 0 && hseq != ( an->hseq ^ ( an->hseq >> 31 ) ) - ( an->hseq >> 31 ) )
          {
            pan = an;
            break;
          }
          else
          {
            //y += d;
          }
        }
        if ( an == 0 )
        {
          if ( pan == 0 )
          {
            break;
          }
          else
          {
            gotoLine( CurrentTab->currentBuffer, pan->start.line );
            arrangeLine( CurrentTab->currentBuffer );
            displayBuffer( CurrentTab->currentBuffer, 0 );
          }
        }
        else
        {
          //i++;
        }
      }
    }
  }
  else
  {
  }
  return;
}
void nextL( void )
{
  nextX( -1, 0 );
  return;
}
void nextLU( void )
{
  nextX( -1, -1 );
  return;
}
void nextR( void )
{
  nextX( 1, 0 );
  return;
}
void nextRD( void )
{
  nextX( 1, 1 );
  return;
}
void nextD( void )
{
  nextY( 1 );
  return;
}
void nextU( void )
{
  nextY( -1 );
  return;
}
void nextBf( void )
{
  int eax;
  Buffer *buf;
  int i = 0;
  for ( ; i < ( prec_num == 0 ? 1 : prec_num ); i++ )
  {
    buf = prevBuffer( CurrentTab->firstBuffer, CurrentTab->currentBuffer );
    if ( buf == 0 )
    {
      if ( i == 0 )
      {
        break;
      }
      else
      {
      }
    }
    else
    {
      CurrentTab->currentBuffer = buf;
      //i++;
    }
    displayBuffer( CurrentTab->currentBuffer, 1 );
    break;
  }
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void prevBf( void )
{
  int eax;
  Buffer *buf;
  int i = 0;
  for ( ; i < ( prec_num == 0 ? 1 : prec_num ); i++ )
  {
    buf = CurrentTab->currentBuffer->nextBuffer;
    if ( buf == 0 )
    {
      if ( i == 0 )
      {
        break;
      }
      else
      {
      }
    }
    else
    {
      CurrentTab->currentBuffer = buf;
      //i++;
    }
    displayBuffer( CurrentTab->currentBuffer, 1 );
    break;
  }
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
int checkBackBuffer( Buffer *buf )
{
  Buffer *fbuf = buf->linkBuffer[1];
  if ( fbuf != 0 )
  {
    if ( fbuf->frameQ != 0 )
    {
      return 1;
    }
    else
    if ( ( RenderFrame & 255 ) != 0 && buf->nextBuffer == fbuf )
    {
      if ( fbuf->nextBuffer != 0 )
      {
        return 1;
      }
      else
      {
        return 1;
      }
    }
  }
  if ( buf->nextBuffer != 0 )
  {
    return 1;
  }
  else
  {
    return 1;
  }
}
void backBf( void )
{
  Buffer *buf = CurrentTab->currentBuffer->linkBuffer[1];
  if ( checkBackBuffer( CurrentTab->currentBuffer ) == 0 )
  {
    if ( close_tab_back != 0 && nTab >= 1 )
    {
      deleteTab( CurrentTab );
      displayBuffer( CurrentTab->currentBuffer, 1 );
      return;
    }
    else
    {
      disp_message( "Can't back...", 1 );
    }
  }
  else
  {
    delBuffer( CurrentTab->currentBuffer );
    if ( buf != 0 )
    {
      if ( buf->frameQ != 0 )
      {
        struct frameset *fs;
        long linenumber = buf->frameQ->linenumber;
        long top = buf->frameQ->top_linenumber;
        int pos = buf->frameQ->pos;
        int currentColumn = buf->frameQ->currentColumn;
        AnchorList *formitem = buf->frameQ->formitem;
        fs = popFrameTree( &buf->frameQ );
        deleteFrameSet( buf->frameset );
        buf->frameset = fs;
        if ( CurrentTab->currentBuffer == buf )
        {
          rFrame( );
          CurrentTab->currentBuffer->topLine = lineSkip( CurrentTab->currentBuffer, CurrentTab->currentBuffer->firstLine, top - 1, 0 );
          gotoLine( CurrentTab->currentBuffer, linenumber );
          CurrentTab->currentBuffer->pos = pos;
          CurrentTab->currentBuffer->currentColumn = currentColumn;
          arrangeCursor( CurrentTab->currentBuffer );
          formResetBuffer( CurrentTab->currentBuffer, formitem );
        }
        displayBuffer( CurrentTab->currentBuffer, 1 );
        return;
      }
      else
      {
        if ( ( RenderFrame & 255 ) != 0 && CurrentTab->currentBuffer == buf )
          delBuffer( CurrentTab->currentBuffer );
      }
    }
  }
}
void deletePrevBuf( void )
{
  Buffer *buf = CurrentTab->currentBuffer->nextBuffer;
  if ( buf != 0 )
  {
    delBuffer( buf );
  }
  return;
}
void cmd_loadURL( char *url, ParsedURL *current, char *referer, FormList *request )
{
  Buffer *buf;
  if ( strncasecmp( url, "mailto:", 7 ) == 0 && non_null( Mailer ) != 0 && strchr( url, 63 ) == 0 )
  {
    Str to = Strnew_charp( &url[7] );
    fmTerm( );
    system( *(int*)(myExtCommand( Mailer, shell_quote( file_unquote( to->ptr ) ), 0 )) );
    fmInit( );
    displayBuffer( CurrentTab->currentBuffer, 1 );
    pushHashHist( URLHist, url );
  }
  refresh( );
  buf = loadGeneralFile( url, current, referer, 0, request );
  if ( buf == 0 )
  {
    char *emsg = *(int*)(Sprintf( "Can't load %s", *(int*)(wc_Str_conv( Strnew_charp( url ), SystemCharset, InnerCharset )) ));
    disp_err_message( emsg, 0 );
  }
  if ( buf != 1 )
  {
    pushBuffer( buf );
    if ( ( RenderFrame & 255 ) != 0 && CurrentTab->currentBuffer->frameset != 0 )
      rFrame( );
      displayBuffer( CurrentTab->currentBuffer, 0 );
      return;
  }
}
void goURL0( char *prompt, int relative )
{
  char *url, *referer;
  ParsedURL p_url;
  ParsedURL *current;
  Buffer *cur_buf = CurrentTab->currentBuffer;
  url = searchKeyData( );
  if ( url == 0 )
  {
    Hist *hist = copyHist( URLHist );
    Anchor *a;
    current = baseURL( CurrentTab->currentBuffer );
    if ( current != 0 )
    {
      char *c_url = *(int*)(parsedURL2Str( current ));
      if ( DefaultURLString == 1 )
      {
        url = c_url;
        if ( DecodeURL != 0 )
        {
          url = url_unquote_conv( url, 0 );
        }
      }
      else
        pushHist( hist, c_url );
    }
    a = retrieveCurrentAnchor( CurrentTab->currentBuffer );
    if ( a != 0 )
    {
      char *a_url;
      parseURL2( a->url, &p_url, current );
      a_url = *(int*)(parsedURL2Str( &p_url ));
      if ( DefaultURLString == 2 )
      {
        url = a_url;
        if ( DecodeURL != 0 )
        {
          url = url_unquote_conv( url, CurrentTab->currentBuffer->document_charset );
        }
      }
      else
        pushHist( hist, a_url );
    }
    url = inputLineHistSearch( prompt, url, 256, hist, 0 );
    if ( url != 0 )
    {
      for ( ; ( url[0] & 255 ) != 0 && ( MYCTYPE_MAP[ url[0] ] & 2 ) != 0; url++ )
      {
        //url++;
      }
    }
  }
  if ( url != 0 )
  {
    if ( ( relative != 0 || url[0] == '#' ) && CurrentTab->currentBuffer->document_charset != 0 )
    {
      url = *(int*)(wc_Str_conv_strict( Strnew_charp( url ), InnerCharset, CurrentTab->currentBuffer->document_charset ));
    }
    else
    {
      url = *(int*)(wc_Str_conv_strict( Strnew_charp( url ), InnerCharset, SystemCharset ));
    }
  }
  if ( url == 0 || ( url[0] & 255 ) == 0 )
  {
    displayBuffer( CurrentTab->currentBuffer, 1 );
  }
  if ( url[0] == '#' )
  {
    gotoLabel( &url[1] );
  }
  if ( relative != 0 )
  {
    current = baseURL( CurrentTab->currentBuffer );
    referer = *(int*)(parsedURL2Str( &CurrentTab->currentBuffer->currentURL ));
  }
  else
  {
    current = 0;
    referer = 0;
  }
  parseURL2( url, &p_url, current );
  pushHashHist( URLHist, *(int*)(parsedURL2Str( &p_url )) );
  cmd_loadURL( url, current, referer, 0 );
  if ( CurrentTab->currentBuffer != cur_buf )
  {
    pushHashHist( URLHist, *(int*)(parsedURL2Str( &CurrentTab->currentBuffer->currentURL )) );
    return;
  }
  else
  {
    return;
  }
}
void goURL( void )
{
  goURL0( "Goto URL: ", 0 );
  return;
}
void gorURL( void )
{
  goURL0( "Goto relative URL: ", 1 );
  return;
}
void cmd_loadBuffer( Buffer *buf, int prop, int linkid )
{
  if ( buf == 0 )
  {
    disp_err_message( "Can't load string", 0 );
  }
  if ( buf != 1 )
  {
    buf->bufferprop = buf->bufferprop | prop | 8;
    if ( ( buf->bufferprop & 16 ) == 0 )
      copyParsedURL( &buf->currentURL, &CurrentTab->currentBuffer->currentURL );
    if ( linkid != -1 )
    {
      buf->linkBuffer[ REV_LB[ linkid ] ] = CurrentTab->currentBuffer;
      CurrentTab->currentBuffer->linkBuffer[ linkid ] = buf;
    }
    pushBuffer( buf );
  }
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void ldBmark( void )
{
  cmd_loadURL( BookmarkFile, 0, -1, 0 );
  return;
}
void adBmark( void )
{
  Str tmp = Sprintf( "mode=panel&cookie=%s&bmark=%s&url=%s&title=%s&charset=%s", *(int*)(Str_form_quote( localCookie( ) )), *(int*)(Str_form_quote( Strnew_charp( BookmarkFile ) )), *(int*)(Str_form_quote( parsedURL2Str( &CurrentTab->currentBuffer->currentURL ) )), *(int*)(Str_form_quote( wc_Str_conv_strict( Strnew_charp( CurrentTab->currentBuffer->buffername ), InnerCharset, BookmarkCharset ) )), wc_ces_to_charset( BookmarkCharset ) );
  FormList *request = newFormList( 0, "post", 0, 0, 0, 0, 0 );
  request->body = tmp->ptr;
  request->length = tmp->length;
  cmd_loadURL( "file:///$LIB/w3mbookmark", 0, -1, request );
  return;
}
void ldOpt( void )
{
  cmd_loadBuffer( load_option_panel( ), 16, -1 );
  return;
}
void setOpt( void )
{
  int eax;
  char *opt;
  CurrentKeyData = 0;
  opt = searchKeyData( );
  if ( opt == 0 || ( opt[0] & 255 ) == 0 || strchr( opt, 61 ) == 0 )
  {
    if ( opt != 0 && ( opt[0] & 255 ) != 0 )
    {
      char *v = get_param_option( opt );
      opt = *(int*)(Sprintf( "%s=%s", opt, v == 0 ? "" : v ));
    }
    opt = inputLineHistSearch( "Set option: ", opt, 16, TextHist, 0 );
    if ( opt == 0 || ( opt[0] & 255 ) == 0 )
    {
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
  }
  if ( set_param_option( opt ) != 0 )
    sync_with_option( );
  displayBuffer( CurrentTab->currentBuffer, 4 );
  return;
}
void msgs( void )
{
  cmd_loadBuffer( message_list_panel( ), 16, -1 );
  return;
}
void pginfo( void )
{
  Buffer *buf = CurrentTab->currentBuffer->linkBuffer[3];
  if ( buf != 0 )
  {
    CurrentTab->currentBuffer = buf;
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
  else
  {
    buf = CurrentTab->currentBuffer->linkBuffer[2];
    if ( buf == 0 )
    {
      buf = page_info_panel( CurrentTab->currentBuffer );
      cmd_loadBuffer( buf, 0, 2 );
      return;
    }
  }
  delBuffer( buf );
  buf = page_info_panel( CurrentTab->currentBuffer );
  cmd_loadBuffer( buf, 0, 2 );
  return;
}
void follow_map( struct parsed_tagarg *arg )
{
  char *name = tag_get_value( arg, "link" );
  Anchor *an = retrieveCurrentImg( CurrentTab->currentBuffer );
  MapArea *a;
  int x = CurrentTab->currentBuffer->cursorX + CurrentTab->currentBuffer->rootX, y = CurrentTab->currentBuffer->cursorY + CurrentTab->currentBuffer->rootY;
  ParsedURL p_url;
  a = follow_map_menu( CurrentTab->currentBuffer, name, an, x, y );
  if ( a != 0 )
  {
    if ( a->url != 0 )
    {
      if ( ( a->url[0] & 255 ) == 0 )
      {
      }
      else
      {
        if ( a->url[0] == '#' )
        {
          gotoLabel( &a->url[1] );
        }
        parseURL2( a->url, &p_url, baseURL( CurrentTab->currentBuffer ) );
        pushHashHist( URLHist, *(int*)(parsedURL2Str( &p_url )) );
        if ( check_target != 0 && open_tab_blank != 0 && a->target != 0 && ( strcasecmp( a->target, "_new" ) == 0 || strcasecmp( a->target, "_blank" ) == 0 ) )
        {
          Buffer *buf;
          _newT( );
          buf = CurrentTab->currentBuffer;
          cmd_loadURL( a->url, baseURL( CurrentTab->currentBuffer ), *(int*)(parsedURL2Str( &CurrentTab->currentBuffer->currentURL )), 0 );
          if ( CurrentTab->currentBuffer != buf )
            delBuffer( buf );
            displayBuffer( CurrentTab->currentBuffer, 1 );
          else
            deleteTab( CurrentTab );
            displayBuffer( CurrentTab->currentBuffer, 1 );
        }
        else
        {
          cmd_loadURL( a->url, baseURL( CurrentTab->currentBuffer ), *(int*)(parsedURL2Str( &CurrentTab->currentBuffer->currentURL )), 0 );
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
  return;
}
void linkMn( void )
{
  LinkList *l = link_menu( CurrentTab->currentBuffer );
  ParsedURL p_url;
  if ( l != 0 )
  {
    if ( l->url == 0 )
    {
    }
    else
    {
      if ( l->url[0] == '#' )
      {
        gotoLabel( &l->url[1] );
      }
      parseURL2( l->url, &p_url, baseURL( CurrentTab->currentBuffer ) );
      pushHashHist( URLHist, *(int*)(parsedURL2Str( &p_url )) );
      cmd_loadURL( l->url, baseURL( CurrentTab->currentBuffer ), *(int*)(parsedURL2Str( &CurrentTab->currentBuffer->currentURL )), 0 );
    }
  }
  else
  {
  }
  return;
}
void anchorMn( Anchor *(*menu_func)( Buffer * ), int go )
{
  Anchor *a;
  BufferPoint *po;
  if ( CurrentTab->currentBuffer->href != 0 )
  {
    if ( CurrentTab->currentBuffer->hmarklist == 0 )
    {
    }
    else
    {
      a = menu_func( CurrentTab->currentBuffer );
      if ( a != 0 )
      {
        if ( a->hseq < 0 )
        {
        }
        else
        {
          po = &CurrentTab->currentBuffer->hmarklist->marks[ a->hseq ];
          gotoLine( CurrentTab->currentBuffer, po->line );
          CurrentTab->currentBuffer->pos = po->pos;
          arrangeCursor( CurrentTab->currentBuffer );
          displayBuffer( CurrentTab->currentBuffer, 0 );
          if ( go != 0 )
          {
            followA( );
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
  return;
}
void accessKey( void )
{
  anchorMn( &accesskey_menu, 1 );
  return;
}
void listMn( void )
{
  anchorMn( &list_menu, 1 );
  return;
}
void movlistMn( void )
{
  anchorMn( &list_menu, 0 );
  return;
}
void linkLst( void )
{
  Buffer *buf = link_list_panel( CurrentTab->currentBuffer );
  if ( buf != 0 )
  {
    buf->document_charset = CurrentTab->currentBuffer->document_charset;
    cmd_loadBuffer( buf, 0, -1 );
  }
  return;
}
void cooLst( void )
{
  Buffer *buf = cookie_list_panel( );
  if ( buf != 0 )
  {
    cmd_loadBuffer( buf, 16, -1 );
  }
  return;
}
void ldHist( void )
{
  cmd_loadBuffer( historyBuffer( URLHist ), 16, -1 );
  return;
}
void svA( void )
{
  CurrentKeyData = 0;
  do_download = 1;
  followA( );
  do_download = 0;
  return;
}
void svI( void )
{
  CurrentKeyData = 0;
  do_download = 1;
  followI( );
  do_download = 0;
  return;
}
void svBuf( void )
{
  int eax;
  char *qfile = 0, *file;
  FILE *f;
  int is_pipe;
  CurrentKeyData = 0;
  file = searchKeyData( );
  if ( file == 0 || ( file[0] & 255 ) == 0 )
  {
    qfile = inputLineHistSearch( "Save buffer to: ", 0, 128, SaveHist, 0 );
    if ( qfile == 0 || ( qfile[0] & 255 ) == 0 )
    {
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
  }
  file = (char*)eax;
  if ( file[0] == '|' )
  {
    is_pipe = 1;
    f = popen( &file[1], "w" );
  }
  else
  {
    if ( qfile != 0 )
    {
      file = *(int*)(unescape_spaces( Strnew_charp( qfile ) ));
      file = *(int*)(wc_Str_conv_strict( Strnew_charp( file ), InnerCharset, SystemCharset ));
    }
    file = expandPath( file );
    if ( checkOverWrite( file ) < 0 )
    {
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
    f = fopen( file, "w" );
    is_pipe = 0;
  }
  if ( f == 0 )
  {
    char *emsg = *(int*)(Sprintf( "Can't open %s", *(int*)(wc_Str_conv( Strnew_charp( file ), SystemCharset, InnerCharset )) ));
    disp_err_message( emsg, 1 );
  }
  saveBuffer( CurrentTab->currentBuffer, f, 1 );
  if ( is_pipe != 0 )
    pclose( f );
    displayBuffer( CurrentTab->currentBuffer, 0 );
    return;
  else
    fclose( f );
    displayBuffer( CurrentTab->currentBuffer, 0 );
    return;
}
void svSrc( void )
{
  char *file;
  if ( CurrentTab->currentBuffer->sourcefile == 0 )
  {
    return;
  }
  CurrentKeyData = 0;
  PermitSaveToPipe = 1;
  if ( CurrentTab->currentBuffer->real_scheme == 4 )
  {
    file = *(int*)(wc_Str_conv( Strnew_charp( guess_save_name( 0, CurrentTab->currentBuffer->currentURL.real_file ) ), SystemCharset, InnerCharset ));
  }
  else
  {
    file = guess_save_name( CurrentTab->currentBuffer, CurrentTab->currentBuffer->currentURL.file );
  }
  _doFileCopy( CurrentTab->currentBuffer->sourcefile, file, 0 );
  PermitSaveToPipe = 0;
  displayBuffer( CurrentTab->currentBuffer, 0 );
}
void _peekURL( int only_img )
{
  static Str s;
  static Lineprop *p;
  static int offset, n;
  Anchor *a;
  ParsedURL pu;
  Lineprop *pp;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  if ( prev_key == CurrentKey && s != 0 )
  {
    if ( COLS <= s->length - offset )
      offset++;
    else
    if ( s->length <= offset )
      offset = 0;
    else
    {
    }
    n = searchKeyNum( );
    if ( n > 1 )
    {
      if ( ( n - 1 ) * ( COLS - 1 ) < s->length )
      {
        offset = ( n - 1 ) * ( COLS - 1 );
        while ( offset < s->length && ( p[ offset ] & 1024 ) != 0 )
        {
          offset++;
        }
        disp_message_nomouse( &s->ptr[ offset ], 1 );
      }
      else
      {
      }
    }
    else
    {
    }
  }
  else
  {
    offset = 0;
    s = 0;
    if ( only_img != 0 )
    {
      a = 0;
      if ( a == 0 )
      {
        if ( only_img != 0 )
        {
          a = 0;
          if ( a == 0 )
          {
            a = retrieveCurrentImg( CurrentTab->currentBuffer );
            if ( a == 0 )
            {
            }
          }
          else
          {
            s = Strnew_charp( form2str( &a->url[0]/*error:'c'*/ ) );
          }
        }
        else
        {
          retrieveCurrentForm( CurrentTab->currentBuffer );
        }
      }
      if ( s == 0 )
      {
        parseURL2( a->url, &pu, baseURL( CurrentTab->currentBuffer ) );
        s = parsedURL2Str( &pu );
      }
      if ( DecodeURL != 0 )
      {
        s = Strnew_charp( url_unquote_conv( s->ptr, CurrentTab->currentBuffer->document_charset ) );
        s = checkType( s, &pp, 0 );
        p = GC_malloc_atomic( s->length * 2 );
        bcopy( pp, p, s->length * 2 );
      }
      else
      {
        s = checkType( s, &pp, 0 );
        p = GC_malloc_atomic( s->length * 2 );
        bcopy( pp, p, s->length * 2 );
      }
    }
    else
    {
      retrieveCurrentAnchor( CurrentTab->currentBuffer );
    }
  }
  return;
}
void peekURL( void )
{
  _peekURL( 0 );
  return;
}
void peekIMG( void )
{
  _peekURL( 1 );
  return;
}
Str currentURL( void )
{
  return ( CurrentTab->currentBuffer->bufferprop & 8 ) == 0 ? parsedURL2Str( &CurrentTab->currentBuffer->currentURL ) : Strnew_size( 0 );
}
void curURL( void )
{
  static Str s;
  static Lineprop *p;
  static int offset, n;
  Lineprop *pp;
  if ( ( CurrentTab->currentBuffer->bufferprop & 8 ) != 0 )
  {
    return;
  }
  if ( prev_key == CurrentKey && s != 0 )
  {
    if ( COLS <= s->length - offset )
      offset++;
    else
    if ( offset < s->length )
    {
    }
    else
      offset = 0;
    n = searchKeyNum( );
    if ( n > 1 )
    {
      if ( ( n - 1 ) * ( COLS - 1 ) < s->length )
      {
        offset = ( n - 1 ) * ( COLS - 1 );
        while ( offset < s->length && ( p[ offset ] & 1024 ) != 0 )
        {
          offset++;
        }
        disp_message_nomouse( &s->ptr[ offset ], 1 );
      }
      else
      {
      }
    }
    else
    {
    }
  }
  else
  {
    offset = 0;
    s = currentURL( );
    if ( DecodeURL != 0 )
    {
      s = Strnew_charp( url_unquote_conv( s->ptr, 0 ) );
    }
    s = checkType( s, &pp, 0 );
    p = GC_malloc_atomic( s->length * 2 );
    bcopy( pp, p, s->length * 2 );
  }
}
void vwSrc( void )
{
  int eax;
  int edx;
  Buffer *buf;
  if ( CurrentTab->currentBuffer->type != 0 )
  {
    if ( ( CurrentTab->currentBuffer->bufferprop & 2 ) != 0 )
    {
      return;
    }
    else
    {
      buf = CurrentTab->currentBuffer->linkBuffer[4];
      if ( CurrentTab->currentBuffer->sourcefile == 0 )
      {
        if ( CurrentTab->currentBuffer->pagerSource != 0 )
        {
          if ( strcasecmp( CurrentTab->currentBuffer->type, "text/plain" ) == 0 )
          {
            wc_ces old_charset;
            wc_bool old_fix_width_conv;
            FILE *f;
            Str tmpf = tmpfname( 1, 0 );
            f = fopen( tmpf->ptr, "w" );
            if ( f == 0 )
            {
              return;
            }
            else
            {
              old_charset = DisplayCharset;
              old_fix_width_conv = WcOption.fix_width_conv;
              DisplayCharset = CurrentTab->currentBuffer->document_charset == 256 ? 0 : CurrentTab->currentBuffer->document_charset;
              WcOption.fix_width_conv = 0;
              saveBufferBody( CurrentTab->currentBuffer, f, 1 );
              DisplayCharset = old_charset;
              WcOption.fix_width_conv = old_fix_width_conv;
              fclose( f );
              CurrentTab->currentBuffer->sourcefile = tmpf->ptr;
            }
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
void reload( void )
{
  Buffer *buf, *fbuf = 0;
  Buffer sbuf;
  wc_ces old_charset;
  Str url;
  FormList *request;
  int multipart;
  if ( ( CurrentTab->currentBuffer->bufferprop & 8 ) != 0 )
  {
    if ( strcmp( CurrentTab->currentBuffer->buffername, "Download List Panel" ) == 0 )
    {
      ldDL( );
    }
    disp_err_message( "Can't reload...", 1 );
  }
  else
  {
    if ( CurrentTab->currentBuffer->currentURL.scheme == 4 && strcmp( CurrentTab->currentBuffer->currentURL.file, "-" ) == 0 )
    {
      disp_err_message( "Can't reload stdin", 1 );
    }
    copyBuffer( &sbuf, CurrentTab->currentBuffer );
    if ( ( CurrentTab->currentBuffer->bufferprop & 2 ) != 0 )
    {
      fbuf = CurrentTab->currentBuffer->linkBuffer[1];
      if ( fbuf != 0 )
      {
        if ( ( fmInitialized & 255 ) != 0 )
        {
          message( "Rendering frame", 0, 0 );
          refresh( );
        }
        buf = renderFrame( fbuf, 1 );
        if ( buf == 0 )
        {
          displayBuffer( CurrentTab->currentBuffer, 0 );
        }
        if ( fbuf->linkBuffer[0] != 0 )
        {
          if ( buf->sourcefile != 0 && fbuf->linkBuffer[0]->sourcefile != 0 && strcmp( buf->sourcefile, fbuf->linkBuffer[0]->sourcefile ) == 0 )
            fbuf->linkBuffer[0]->sourcefile = 0;
          delBuffer( fbuf->linkBuffer[0] );
        }
        fbuf->linkBuffer[0] = buf;
        buf->linkBuffer[1] = fbuf;
        pushBuffer( buf );
        CurrentTab->currentBuffer = buf;
        if ( CurrentTab->currentBuffer->firstLine != 0 )
        {
          CurrentTab->currentBuffer->rootX = sbuf.rootX;
          CurrentTab->currentBuffer->rootY = sbuf.rootY;
          CurrentTab->currentBuffer->COLS = sbuf.COLS;
          CurrentTab->currentBuffer->LINES = sbuf.LINES;
          restorePosition( CurrentTab->currentBuffer, &sbuf );
          displayBuffer( CurrentTab->currentBuffer, 1 );
        }
        else
        {
          displayBuffer( CurrentTab->currentBuffer, 1 );
        }
      }
    }
    if ( CurrentTab->currentBuffer->frameset != 0 )
      fbuf = CurrentTab->currentBuffer->linkBuffer[0];
    multipart = 0;
    if ( CurrentTab->currentBuffer->form_submit != 0 )
    {
      request = CurrentTab->currentBuffer->form_submit->parent;
      if ( request->method == 1 && request->enctype == 1 )
      {
        Str query;
        struct stat st;
        multipart = 1;
        query_from_followform( (Str*)query, CurrentTab->currentBuffer->form_submit, multipart );
        stat( request->body, &st.st_dev );
        request->length = st.st_size;
      }
    }
    else
      request = 0;
    url = parsedURL2Str( &CurrentTab->currentBuffer->currentURL );
    message( "Reloading...", 0, 0 );
    refresh( );
    old_charset = DocumentCharset;
    if ( CurrentTab->currentBuffer->document_charset != 256 )
      DocumentCharset = CurrentTab->currentBuffer->document_charset;
    SearchHeader = CurrentTab->currentBuffer->search_header;
    DefaultType = CurrentTab->currentBuffer->real_type;
    buf = loadGeneralFile( url->ptr, 0, -1, 1, request );
    DocumentCharset = old_charset;
    SearchHeader = 0;
    DefaultType = 0;
    if ( multipart != 0 )
      unlink( request->body );
    if ( buf == 0 )
    {
      disp_err_message( "Can't reload...", 1 );
    }
    if ( buf == 1 )
    {
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
    if ( fbuf != 0 )
    {
      CurrentTab->firstBuffer = deleteBuffer( CurrentTab->firstBuffer, fbuf );
    }
    repBuffer( CurrentTab->currentBuffer, buf );
    if ( buf->type != 0 && sbuf.type != 0 && ( ( strcasecmp( buf->type, "text/plain" ) == 0 && is_html_type( sbuf.type ) != 0 ) || ( is_html_type( buf->type ) != 0 && strcasecmp( sbuf.type, "text/plain" ) == 0 ) ) )
    {
      vwSrc( );
      if ( CurrentTab->currentBuffer != buf )
      {
        CurrentTab->firstBuffer = deleteBuffer( CurrentTab->firstBuffer, buf );
      }
    }
    CurrentTab->currentBuffer->search_header = sbuf.search_header;
    CurrentTab->currentBuffer->form_submit = sbuf.form_submit;
    if ( CurrentTab->currentBuffer->firstLine != 0 )
    {
      CurrentTab->currentBuffer->rootX = sbuf.rootX;
      CurrentTab->currentBuffer->rootY = sbuf.rootY;
      CurrentTab->currentBuffer->COLS = sbuf.COLS;
      CurrentTab->currentBuffer->LINES = sbuf.LINES;
      restorePosition( CurrentTab->currentBuffer, &sbuf );
    }
    displayBuffer( CurrentTab->currentBuffer, 1 );
    return;
  }
}
void reshape( void )
{
  CurrentTab->currentBuffer->need_reshape = 1;
  reshapeBuffer( CurrentTab->currentBuffer );
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void _docCSet( wc_ces charset )
{
  if ( ( CurrentTab->currentBuffer->bufferprop & 8 ) != 0 )
  {
    return;
  }
  if ( CurrentTab->currentBuffer->sourcefile == 0 )
  {
    disp_message( "Can't reload...", 0 );
  }
  CurrentTab->currentBuffer->document_charset = charset;
  CurrentTab->currentBuffer->need_reshape = 1;
  displayBuffer( CurrentTab->currentBuffer, 1 );
}
void change_charset( struct parsed_tagarg *arg )
{
  Buffer *buf = CurrentTab->currentBuffer->linkBuffer[3];
  wc_ces charset;
  if ( buf == 0 )
  {
    return;
  }
  else
  {
    delBuffer( CurrentTab->currentBuffer );
    CurrentTab->currentBuffer = buf;
    if ( ( CurrentTab->currentBuffer->bufferprop & 8 ) != 0 )
    {
      return;
    }
    else
    {
      charset = CurrentTab->currentBuffer->document_charset;
      for ( ; arg != 0; arg = arg->next )
      {
        if ( strcmp( arg->arg, "charset" ) == 0 )
        {
          charset = atoi( arg->value );
        }
        //arg = arg->next;
      }
      _docCSet( charset );
    }
  }
}
void docCSet( void )
{
  char *cs = searchKeyData( );
  wc_ces charset;
  if ( cs == 0 || ( cs[0] & 255 ) == 0 )
  {
    cs = inputLineHistSearch( "Document charset: ", wc_ces_to_charset( CurrentTab->currentBuffer->document_charset ), 16, 0, 0 );
  }
  charset = wc_guess_charset_short( cs, 0 );
  if ( charset == 0 )
  {
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
  _docCSet( charset );
  return;
}
void defCSet( void )
{
  char *cs = searchKeyData( );
  wc_ces charset;
  if ( cs == 0 || ( cs[0] & 255 ) == 0 )
  {
    cs = inputLineHistSearch( "Default document charset: ", wc_ces_to_charset( DocumentCharset ), 16, 0, 0 );
  }
  charset = wc_guess_charset_short( cs, 0 );
  if ( charset != 0 )
    DocumentCharset = charset;
  displayBuffer( CurrentTab->currentBuffer, 0 );
  return;
}
void chkURLBuffer( Buffer *buf )
{
  static char *url_like_pat[9] = { "https?://[a-zA-Z0-9][a-zA-Z0-9:%\\-\\./?=~_\\&+@#,\\$;]*[a-zA-Z0-9_/=\\-]", "file:/[a-zA-Z0-9:%\\-\\./=_\\+@#,\\$;]*", "gopher://[a-zA-Z0-9][a-zA-Z0-9:%\\-\\./_]*", "ftp://[a-zA-Z0-9][a-zA-Z0-9:%\\-\\./=_+@#,\\$]*[a-zA-Z0-9_/]", "news:[^&lt;&gt; \t][^&lt;&gt; \t]*", "nntp://[a-zA-Z0-9][a-zA-Z0-9:%\\-\\./_]*", "https?://[a-zA-Z0-9:%\\-\\./_@]*\\[[a-fA-F0-9:][a-fA-F0-9:\\.]*\\][a-zA-Z0-9:%\\-\\./?=~_\\&+@#,\\$;]*", "ftp://[a-zA-Z0-9:%\\-\\./_@]*\\[[a-fA-F0-9:][a-fA-F0-9:\\.]*\\][a-zA-Z0-9:%\\-\\./=_+@#,\\$]*", 0,  };
  int i = 0;
  for ( ; url_like_pat[ i ] != 0; i++ )
  {
    reAnchor( buf, url_like_pat[ i ] );
    //i++;
  }
  chkExternalURIBuffer( buf );
  buf->check_url |= 1;
  return;
}
void chkURL( void )
{
  chkURLBuffer( CurrentTab->currentBuffer );
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void chkWORD( void )
{
  char *p = getCurWord( CurrentTab->currentBuffer, &spos, &epos, ":\"'`&lt;&gt;()[]{}&|;*?$" );
  int spos, epos;
  if ( p == 0 )
  {
    return;
  }
  reAnchorWord( CurrentTab->currentBuffer, CurrentTab->currentBuffer->currentLine, spos, epos );
  displayBuffer( CurrentTab->currentBuffer, 1 );
}
void chkNMIDBuffer( Buffer *buf )
{
  static char *url_like_pat[2] = { "&lt;[!-;=?-~]+@[a-zA-Z0-9\\.\\-_]+&gt;", 0,  };
  int i = 0;
  for ( ; url_like_pat[ i ] != 0; i++ )
  {
    reAnchorNews( buf, url_like_pat[ i ] );
    //i++;
  }
  buf->check_url |= 2;
  return;
}
void chkNMID( void )
{
  chkNMIDBuffer( CurrentTab->currentBuffer );
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void rFrame( void )
{
  Buffer *buf = CurrentTab->currentBuffer->linkBuffer[0];
  if ( buf != 0 )
  {
    CurrentTab->currentBuffer = buf;
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
  else
  if ( CurrentTab->currentBuffer->frameset == 0 )
  {
    buf = CurrentTab->currentBuffer->linkBuffer[1];
    if ( buf != 0 )
    {
      CurrentTab->currentBuffer = buf;
      displayBuffer( CurrentTab->currentBuffer, 0 );
      return;
    }
    else
    {
      return;
    }
  }
  if ( ( fmInitialized & 255 ) != 0 )
  {
    message( "Rendering frame", 0, 0 );
    refresh( );
  }
  buf = renderFrame( CurrentTab->currentBuffer, 0 );
  if ( buf == 0 )
  {
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
  buf->linkBuffer[1] = CurrentTab->currentBuffer;
  CurrentTab->currentBuffer->linkBuffer[0] = buf;
  pushBuffer( buf );
  if ( ( fmInitialized & 255 ) != 0 )
  {
    if ( display_ok != 0 )
    {
      displayBuffer( CurrentTab->currentBuffer, 1 );
    }
    return;
  }
  else
  {
    return;
  }
}
void invoke_browser( char *url )
{
  Str cmd;
  char *browser = 0;
  int bg = 0, len;
  CurrentKeyData = 0;
  browser = searchKeyData( );
  if ( browser == 0 || ( browser[0] & 255 ) == 0 )
  {
    switch ( prec_num )
    {
    case 0:
    case 1:
    case 2:
      browser = ExtBrowser;
      break;
    default:
      break;
    case 2:
      browser = ExtBrowser2;
      break;
    case 3:
      browser = ExtBrowser3;
      break;
    }
    if ( browser != 0 && ( browser[0] & 255 ) != 0 )
    {
    }
    else
    {
      browser = inputLineHistSearch( "Browse command: ", 0, 16, 0, 0 );
      if ( browser == 0 )
      {
      }
      else
      {
        browser = *(int*)(wc_Str_conv_strict( Strnew_charp( browser ), InnerCharset, SystemCharset ));
      }
    }
  }
  else
  {
    browser = *(int*)(wc_Str_conv_strict( Strnew_charp( browser ), InnerCharset, SystemCharset ));
  }
  if ( browser == 0 || ( browser[0] & 255 ) == 0 )
  {
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
  len = strlen( browser );
  if ( len > 1 && browser[ len - 1 ] == '&' && browser[ len - 2 ] != '\\' )
  {
    browser = allocStr( browser, len - 2 );
    bg = 1;
  }
  cmd = myExtCommand( browser, shell_quote( url ), 0 );
  Strremovetrailingspaces( cmd );
  fmTerm( );
  mySystem( cmd->ptr, bg );
  fmInit( );
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void extbrz( void )
{
  if ( ( CurrentTab->currentBuffer->bufferprop & 8 ) != 0 )
    disp_err_message( "Can't browse...", 1 );
  else
  if ( CurrentTab->currentBuffer->currentURL.scheme == 4 && strcmp( CurrentTab->currentBuffer->currentURL.file, "-" ) == 0 )
  {
    disp_err_message( "Can't browse stdin", 1 );
  }
  invoke_browser( *(int*)(parsedURL2Str( &CurrentTab->currentBuffer->currentURL )) );
  return;
}
void linkbrz( void )
{
  Anchor *a;
  ParsedURL pu;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  {
    a = retrieveCurrentAnchor( CurrentTab->currentBuffer );
    if ( a == 0 )
    {
    }
    else
    {
      parseURL2( a->url, &pu, baseURL( CurrentTab->currentBuffer ) );
      invoke_browser( *(int*)(parsedURL2Str( &pu )) );
    }
  }
  return;
}
void curlno( void )
{
  double fp6;
  double fp7;
  Line *l = CurrentTab->currentBuffer->currentLine;
  Str tmp;
  int cur = 0, all = 0, col = 0, len = 0;
  if ( l != 0 )
  {
    cur = l->real_linenumber;
    col = CurrentTab->currentBuffer->currentColumn + l->bwidth + CurrentTab->currentBuffer->cursorX + 1;
    for ( ; l->next != 0 && l->next != 0; l = l->next )
    {
      //l = l->next;
    }
    if ( l->width < 0 )
    {
      l->width = calcPosition( l->lineBuf, l->propBuf, l->len, l->len, 0, 0 );
    }
    len = l->bwidth + l->width;
  }
  if ( CurrentTab->currentBuffer->lastLine != 0 )
    all = CurrentTab->currentBuffer->lastLine->real_linenumber;
  if ( CurrentTab->currentBuffer->pagerSource != 0 && ( CurrentTab->currentBuffer->bufferprop & 64 ) == 0 )
  {
    tmp = Sprintf( "line %d col %d/%d", cur, col, len );
  }
  else
  {
    tmp = Sprintf( "line %d/%d (%d%%) col %d/%d", cur, all, (int)( ( ( (double)( cur ) * 100.000000000000 ) / ( all == 0 ? 1.000000000000 : (double)( all ) ) ) + 0.500000000000 ), col, len );
  }
  Strcat_charp( tmp, "  " );
  Strcat_charp( tmp, wc_ces_to_charset_desc( CurrentTab->currentBuffer->document_charset ) );
  disp_message( tmp->ptr, 0 );
  return;
}
void dispI( void )
{
  if ( displayImage == 0 )
    initImage( );
  if ( activeImage == 0 )
  {
    return;
  }
  else
  {
    displayImage = 1;
    CurrentTab->currentBuffer->image_flag = 2;
    CurrentTab->currentBuffer->need_reshape = 1;
    displayBuffer( CurrentTab->currentBuffer, 4 );
    return;
  }
}
void stopI( void )
{
  if ( activeImage == 0 )
  {
    return;
  }
  else
  {
    CurrentTab->currentBuffer->image_flag = 1;
    displayBuffer( CurrentTab->currentBuffer, 4 );
    return;
  }
}
int mouse_scroll_line( void )
{
  int eax;
  return relative_wheel_scroll == 0 ? fixed_wheel_scroll_count : ( (/*HI*/int)( ( ( relative_wheel_scroll_ratio * ( LINES - 1 ) ) + 99 ) * 1374389535 ) >> 5 ) - ( ( ( relative_wheel_scroll_ratio * ( LINES - 1 ) ) + 99 ) >> 31 );
}
TabBuffer *posTab( int x, int y )
{
  int eax;
  TabBuffer *tab;
  if ( mouse_action->menu_str != 0 && x < mouse_action.menu_width && y == 0 )
  {
  }
  else
  if ( LastTab->y < y )
  {
  }
  else
  {
    tab = FirstTab;
    for ( ; tab != 0; tab = &tab )
    {
      if ( tab->x1 <= x && x <= tab->x2 && y == tab->y )
      {
        &tab = tab;
        break;
      }
      else
      {
        //tab = &tab;
      }
    }
  }
  return 1;
}
void do_mouse_action( int btn, int x, int y )
{
  MouseActionMap *map = 0;
  int ny = -1;
  if ( nTab > 1 || mouse_action->menu_str != 0 )
    ny = LastTab->y + 1;
  switch ( btn )
  {
  case 0:
    btn = 0;
    break;
  case 1:
    btn = 1;
    break;
  case 2:
    btn = 2;
    break;
  default:
    return;
    break;
  }
  if ( y < ny )
  {
    if ( mouse_action.menu_str != 0 && x >= 0 && x < mouse_action.menu_width )
    {
      if ( mouse_action.menu_map[ btn ] == 0 )
      {
      }
      else
        map = &mouse_action.menu_map[ btn ][ x ];
    }
    else
      map = &mouse_action.tab_map[ btn ];
  }
  else
  if ( y == LINES - 1 )
  {
    if ( mouse_action.lastline_str != 0 && x >= 0 && x < mouse_action.lastline_width && mouse_action.lastline_map[ btn ] != 0 )
      map = &mouse_action.lastline_map[ btn ][ x ];
  }
  else
  if ( ny < y )
  {
    if ( y == CurrentTab->currentBuffer->cursorY + CurrentTab->currentBuffer->rootY && ( x == CurrentTab->currentBuffer->cursorX + CurrentTab->currentBuffer->rootX || ( ( WcOption.use_wide & 255 ) != 0 && CurrentTab->currentBuffer->currentLine != 0 && ( CurrentTab->currentBuffer->currentLine->propBuf[ CurrentTab->currentBuffer->pos ] & 16128 ) == 2560 && x == CurrentTab->currentBuffer->cursorX + CurrentTab->currentBuffer->rootX + 1 ) ) )
    {
      if ( retrieveCurrentAnchor( CurrentTab->currentBuffer ) == 0 && retrieveCurrentForm( CurrentTab->currentBuffer ) == 0 )
      {
      }
      else
      {
        map = &mouse_action.active_map[ btn ];
        if ( map != 0 && map->func != 0 )
        {
        }
        else
          map = &mouse_action.anchor_map[ btn ];
      }
    }
    else
    {
      int cx = CurrentTab->currentBuffer->cursorX, cy = CurrentTab->currentBuffer->cursorY;
      cursorXY( CurrentTab->currentBuffer, x - CurrentTab->currentBuffer->rootX, y - CurrentTab->currentBuffer->rootY );
      if ( y == CurrentTab->currentBuffer->cursorY + CurrentTab->currentBuffer->rootY && ( x == CurrentTab->currentBuffer->cursorX + CurrentTab->currentBuffer->rootX || ( ( WcOption.use_wide & 255 ) != 0 && CurrentTab->currentBuffer->currentLine != 0 && ( CurrentTab->currentBuffer->currentLine->propBuf[ CurrentTab->currentBuffer->pos ] & 16128 ) == 2560 && x == CurrentTab->currentBuffer->cursorX + CurrentTab->currentBuffer->rootX + 1 ) ) && ( retrieveCurrentAnchor( CurrentTab->currentBuffer ) != 0 || retrieveCurrentForm( CurrentTab->currentBuffer ) != 0 ) )
        map = &mouse_action.anchor_map[ btn ];
      cursorXY( CurrentTab->currentBuffer, cx, cy );
    }
  }
  else
  {
    return;
  }
  if ( map == 0 || map->func == 0 )
    map = &mouse_action.default_map[ btn ];
  if ( map != 0 && map->func != 0 )
  {
    mouse_action.in_action = 1;
    mouse_action.cursorX = x;
    mouse_action.cursorY = y;
    CurrentKey = -1;
    CurrentKeyData = 0;
    CurrentCmdData = map->data;
    ;
  }
  return;
}
/* Abandon function process_mouse... */
void msToggle( void )
{
  if ( use_mouse != 0 )
    use_mouse = 0;
  else
    use_mouse = 1;
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void mouse( void )
{
  int btn = do_getch( ) - 32, x = do_getch( ) - 33, y;
  if ( x < 0 )
    x += 256;
  y = do_getch( ) - 33;
  if ( y < 0 )
    y += 256;
  if ( x >= 0 )
  {
    if ( x < COLS )
    {
      if ( y >= 0 )
      {
        if ( LINES - 1 < y )
        {
          return;
        }
        else
        {
          process_mouse( btn, x, y );
          return;
        }
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
  else
  {
    return;
  }
}
int gpm_process_mouse( Gpm_Event *event, void *data )
{
  int btn = -1, x, y;
  if ( ( event->type & 8 ) != 0 )
    btn = 3;
  else
  if ( ( event->type & 4 ) != 0 )
  {
    switch ( event->buttons )
    {
    case 4:
      btn = 0;
      break;
    case 2:
      btn = 1;
      break;
    default:
      break;
    case 1:
      btn = 2;
      break;
    }
  }
  else
  {
    ioctl( *(int*)(135774736), 21532, 135774721 );
    return 0;
  }
  x = event->x;
  y = event->y;
  process_mouse( btn, x - 1, y - 1 );
  return 0;
}
void movMs( void )
{
  if ( mouse_action.in_action == 0 )
  {
  }
  else
  if ( ( nTab > 1 || mouse_action.menu_str != 0 ) && mouse_action.cursorY < LastTab->y + 1 )
  {
  }
  else
  {
    if ( CurrentTab->currentBuffer->rootX <= mouse_action.cursorX && mouse_action.cursorY < LINES - 1 )
      cursorXY( CurrentTab->currentBuffer, mouse_action.cursorX - CurrentTab->currentBuffer->rootX, mouse_action.cursorY - CurrentTab->currentBuffer->rootY );
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
  return;
}
void menuMs( void )
{
  if ( mouse_action.in_action == 0 )
  {
    return;
  }
  if ( ( nTab > 1 || mouse_action.menu_str != 0 ) && mouse_action.cursorY < LastTab->y + 1 )
    mouse_action.cursorX -= 2;
    mainMn( );
  else
  {
    if ( CurrentTab->currentBuffer->rootX <= mouse_action.cursorX && mouse_action.cursorY < LINES - 1 )
    {
      cursorXY( CurrentTab->currentBuffer, mouse_action.cursorX - CurrentTab->currentBuffer->rootX, mouse_action.cursorY - CurrentTab->currentBuffer->rootY );
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
  }
}
void tabMs( void )
{
  TabBuffer *tab;
  if ( mouse_action.in_action == 0 )
  {
    return;
  }
  else
  {
    tab = posTab( mouse_action.cursorX, mouse_action.cursorY );
    switch ( tab )
    {
    case 0:
      break;
    case 1:
      break;
    default:
      CurrentTab = tab;
      displayBuffer( CurrentTab->currentBuffer, 1 );
      break;
    }
    return;
  }
}
void closeTMs( void )
{
  TabBuffer *tab;
  if ( mouse_action.in_action == 0 )
  {
  }
  else
  {
    tab = posTab( mouse_action.cursorX, mouse_action.cursorY );
    switch ( tab )
    {
    case 0:
      break;
    case 1:
      break;
    default:
      deleteTab( tab );
      displayBuffer( CurrentTab->currentBuffer, 1 );
      break;
    }
  }
  return;
}
void dispVer( void )
{
  disp_message( *(int*)(Sprintf( "w3m version %s", w3m_version )), 1 );
  return;
}
void wrapToggle( void )
{
  if ( WrapSearch != 0 )
  {
    WrapSearch = 0;
    disp_message( "Wrap search off", 1 );
    return;
  }
  else
  {
    WrapSearch = 1;
    disp_message( "Wrap search on", 1 );
    return;
  }
}
int is_wordchar( int c, char *badchars )
{
  int eax;
  return ( MYCTYPE_MAP[ c ] & 2 ) == 0 && strchr( badchars, c ) == 0 ? 1 : 0;
}
char *getCurWord( Buffer *buf, int *spos, int *epos, char *badchars )
{
  int eax;
  char *p;
  Line *l = buf->currentLine;
  int b, e;
  spos[0] = 0;
  epos[0] = 0;
  if ( l == 0 )
  {
  }
  else
  {
    p = l->lineBuf;
    e = buf->pos;
    for ( ; e >= 1 && is_wordchar( p[ e ], badchars ) == 0; e-- )
    {
      //e--;
    }
    if ( is_wordchar( p[ e ], badchars ) == 0 )
    {
    }
    else
    {
      b = e;
      for ( ; b >= 1; b-- )
      {
        if ( is_wordchar( p[ b - 1 ], badchars ) == 0 )
        {
          while ( e < l->len && is_wordchar( p[ e ], badchars ) != 0 )
          {
            e++;
          }
          spos[0] = b;
          epos[0] = e;
          p[ b ] = p[ b ];
          break;
        }
        else
        {
          //b--;
        }
      }
    }
  }
  return &p[ b ];
}
char *GetWord( Buffer *buf )
{
  int eax;
  int b, e;
  char *p = getCurWord( buf, &b, &e, 0 );
  return (char*)eax;
}
void execdict( char *word )
{
  char *w, *dictcmd;
  Buffer *buf;
  if ( UseDictCommand == 0 || word == 0 || ( word[0] & 255 ) == 0 )
  {
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
  w = *(int*)(wc_Str_conv_strict( Strnew_charp( word ), InnerCharset, SystemCharset ));
  if ( ( w[0] & 255 ) == 0 )
  {
    displayBuffer( CurrentTab->currentBuffer, 0 );
  }
  dictcmd = *(int*)(Sprintf( "%s?%s", DictCommand, *(int*)(Str_form_quote( Strnew_charp( w ) )) ));
  buf = loadGeneralFile( dictcmd, 0, -1, 0, 0 );
  if ( buf == 0 )
  {
    disp_message( "Execution failed", 1 );
  }
  buf->filename = w;
  buf->buffername = *(int*)(Sprintf( "%s %s", "*dictionary*", word ));
  if ( buf->type == 0 )
    buf->type = "text/plain";
    pushBuffer( buf );
    displayBuffer( CurrentTab->currentBuffer, 1 );
    return;
  else
  {
    pushBuffer( buf );
    displayBuffer( CurrentTab->currentBuffer, 1 );
    return;
  }
}
void dictword( void )
{
  execdict( inputLineHistSearch( "(dictionary)!", "", 16, 0, 0 ) );
  return;
}
void dictwordat( void )
{
  execdict( GetWord( CurrentTab->currentBuffer ) );
  return;
}
void set_buffer_environ( Buffer *buf )
{
  int eax;
  static Buffer *prev_buf;
  static Line *prev_line;
  static int prev_pos = -1;
  Line *l;
  if ( buf == 0 )
  {
  }
  else
  {
    if ( prev_buf != buf )
    {
      set_environ( "W3M_SOURCEFILE", buf->sourcefile );
      set_environ( "W3M_FILENAME", buf->filename );
      set_environ( "W3M_TITLE", buf->buffername );
      set_environ( "W3M_URL", *(int*)(parsedURL2Str( &buf->currentURL )) );
      set_environ( "W3M_TYPE", buf->real_type == 0 ? "unknown" : buf->real_type );
      set_environ( "W3M_CHARSET", wc_ces_to_charset( buf->document_charset ) );
    }
    l = buf->currentLine;
    if ( l != 0 && ( prev_buf != buf || prev_line != l || buf->pos != prev_pos ) )
    {
      Anchor *a;
      ParsedURL pu;
      char *s = GetWord( buf );
      set_environ( "W3M_CURRENT_WORD", s == 0 ? "" : s );
      a = retrieveCurrentAnchor( buf );
      if ( a != 0 )
      {
        parseURL2( a->url, &pu, baseURL( buf ) );
        set_environ( "W3M_CURRENT_LINK", *(int*)(parsedURL2Str( &pu )) );
      }
      set_environ( "W3M_CURRENT_LINK", "" );
      a = retrieveCurrentImg( buf );
      if ( a != 0 )
      {
        parseURL2( a->url, &pu, baseURL( buf ) );
        set_environ( "W3M_CURRENT_IMG", *(int*)(parsedURL2Str( &pu )) );
      }
      set_environ( "W3M_CURRENT_IMG", "" );
      a = retrieveCurrentForm( buf );
      if ( a != 0 )
      {
        set_environ( "W3M_CURRENT_FORM", form2str( &a->url[0]/*error:'c'*/ ) );
      }
      set_environ( "W3M_CURRENT_FORM", "" );
      set_environ( "W3M_CURRENT_LINE", *(int*)(Sprintf( "%d", l->real_linenumber )) );
      set_environ( "W3M_CURRENT_COLUMN", *(int*)(Sprintf( "%d", buf->currentColumn + buf->cursorX + 1 )) );
    }
    else
    {
      if ( l == 0 )
      {
        set_environ( "W3M_CURRENT_WORD", "" );
        set_environ( "W3M_CURRENT_LINK", "" );
        set_environ( "W3M_CURRENT_IMG", "" );
        set_environ( "W3M_CURRENT_FORM", "" );
        set_environ( "W3M_CURRENT_LINE", "0" );
        set_environ( "W3M_CURRENT_COLUMN", "0" );
      }
      prev_buf = buf;
      prev_line = l;
      prev_pos = buf->pos;
    }
  }
  return;
}
char *searchKeyData( void )
{
  char *data = 0;
  if ( CurrentKeyData != 0 && ( CurrentKeyData[0] & 255 ) != 0 )
    data = CurrentKeyData;
  else
  if ( CurrentCmdData != 0 && ( CurrentCmdData[0] & 255 ) != 0 )
    data = CurrentCmdData;
  else
  if ( CurrentKey >= 0 )
  {
    data = getKeyData( CurrentKey );
  }
  CurrentKeyData = 0;
  CurrentCmdData = 0;
  return data == 0 || ( data[0] & 255 ) == 0 ? 0 : allocStr( data, -1 );
}
int searchKeyNum( void )
{
  int eax;
  char *d;
  int n = 1;
  d = searchKeyData( );
  if ( d != 0 )
  {
    n = atoi( d );
  }
  return n * ( prec_num == 0 ? 1 : prec_num );
}
void deleteFiles( void )
{
  Buffer *buf;
  char *f;
  CurrentTab = FirstTab;
  for ( ; CurrentTab != 0; CurrentTab = &CurrentTab )
  {
    while ( CurrentTab->firstBuffer != 0 && CurrentTab->firstBuffer != 1 )
    {
      buf = CurrentTab->firstBuffer->nextBuffer;
      discardBuffer( CurrentTab->firstBuffer );
      CurrentTab->firstBuffer = buf;
    }
    //CurrentTab = &CurrentTab;
  }
  while ( f == 0 )
  {
    unlink( f );
  }
  return;
}
void w3m_exit( int i )
{
  init_migemo( );
  stopDownload( );
  deleteFiles( );
  disconnectFTP( );
  disconnectNews( );
  exit( &i );
}
void execCmd( void )
{
  int eax;
  char *data, *p;
  int cmd;
  CurrentKeyData = 0;
  data = searchKeyData( );
  if ( data == 0 || ( data & 255 ) == 0 )
  {
    data = inputLineHistSearch( "command [; ...]: ", "", 16, TextHist, 0 );
    if ( data == 0 )
    {
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
    while ( ( data[0] & 255 ) != 0 )
    {
      for ( ; ( data[0] & 255 ) != 0 && ( MYCTYPE_MAP[ data[0] ] & 2 ) != 0; data++ )
      {
        //data++;
      }
      if ( data[0] == ';' )
      {
        data++;
      }
      else
      {
        p = getWord( &data );
        cmd = getFuncList( p );
        if ( cmd < 0 )
        {
        }
        else
        {
          p = getQWord( &data );
          CurrentKey = -1;
          CurrentKeyData = 0;
          CurrentCmdData = ( p[0] & 255 ) == 0 ? 0 : p;
          if ( use_mouse != 0 )
            mouse_inactive( );
          w3mFuncList[ cmd ].func( );
          if ( use_mouse != 0 )
            mouse_active( );
          CurrentCmdData = 0;
        }
      }
      displayBuffer( CurrentTab->currentBuffer, 0 );
      return;
    }
    displayBuffer( CurrentTab->currentBuffer, 0 );
    return;
  }
  else
  {
  }
}
void SigAlarm( int _dummy )
{
  char *data;
  if ( CurrentAlarm->sec >= 1 )
  {
    CurrentKey = -1;
    CurrentKeyData = 0;
    CurrentCmdData = data = (char*)CurrentAlarm->data;
    if ( use_mouse != 0 )
      mouse_inactive( );
    w3mFuncList[ CurrentAlarm->cmd ].func( );
    if ( use_mouse != 0 )
      mouse_active( );
    CurrentCmdData = 0;
    if ( CurrentAlarm->status == 3 )
    {
      CurrentAlarm->sec = 0;
      CurrentAlarm->status = 0;
    }
    if ( CurrentTab->currentBuffer->event != 0 )
    {
      if ( ( CurrentTab->currentBuffer->event->status & 65535 ) != 0 )
        CurrentAlarm = CurrentTab->currentBuffer->event;
      else
        CurrentTab->currentBuffer->event = 0;
    }
    if ( CurrentTab->currentBuffer->event == 0 )
      CurrentAlarm = &DefaultAlarm;
    if ( CurrentAlarm->sec >= 1 )
    {
      mySignal( 14, &SigAlarm );
      alarm( CurrentAlarm->sec );
    }
  }
  return;
}
void setAlarm( void )
{
  char *data;
  int sec = 0, cmd = -1;
  CurrentKeyData = 0;
  data = searchKeyData( );
  if ( data == 0 || ( data[0] & 255 ) == 0 )
  {
    data = inputLineHistSearch( "(Alarm)sec command: ", "", 16, TextHist, 0 );
    if ( data == 0 )
    {
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
  }
  if ( ( data[0] & 255 ) != 0 )
  {
    sec = atoi( getWord( &data ) );
    if ( sec >= 1 )
    {
      cmd = getFuncList( getWord( &data ) );
    }
  }
  if ( cmd >= 0 )
  {
    data = getQWord( &data );
    setAlarmEvent( &DefaultAlarm, sec, 1, cmd, (void*)data );
    disp_message_nsec( *(int*)(Sprintf( "%dsec %s %s", sec, w3mFuncList[ cmd ].id, data )), 0, 1, 0, 1 );
  }
  setAlarmEvent( &DefaultAlarm, 0, 0, 0, 0 );
  displayBuffer( CurrentTab->currentBuffer, 0 );
  return;
}
AlarmEvent *setAlarmEvent( AlarmEvent *event, int sec, short status, int cmd, void *data )
{
  if ( event == 0 )
  {
    event = GC_malloc( 16 );
  }
  event->sec = sec;
  event->status = status;
  event->cmd = cmd;
  event->data = data;
  return event;
}
void reinit( void )
{
  char *resource = searchKeyData( );
  if ( resource == 0 )
  {
    init_rc( );
    sync_with_option( );
    initCookie( );
    displayBuffer( CurrentTab->currentBuffer, 4 );
  }
  if ( strcasecmp( resource, "CONFIG" ) == 0 || strcasecmp( resource, "RC" ) == 0 )
  {
    init_rc( );
    sync_with_option( );
    displayBuffer( CurrentTab->currentBuffer, 4 );
  }
  if ( strcasecmp( resource, "COOKIE" ) == 0 )
  {
    initCookie( );
  }
  if ( strcasecmp( resource, "KEYMAP" ) == 0 )
  {
    initKeymap( 1 );
  }
  if ( strcasecmp( resource, "MAILCAP" ) == 0 )
  {
    initMailcap( );
  }
  if ( strcasecmp( resource, "MOUSE" ) == 0 )
  {
    initMouseAction( );
    displayBuffer( CurrentTab->currentBuffer, 4 );
  }
  if ( strcasecmp( resource, "MENU" ) == 0 )
  {
    initMenu( );
  }
  if ( strcasecmp( resource, "MIMETYPES" ) == 0 )
  {
    initMimeTypes( );
  }
  if ( strcasecmp( resource, "URIMETHODS" ) == 0 )
  {
    initURIMethods( );
  }
  disp_err_message( *(int*)(Sprintf( "Don't know how to reinitialize '%s'", resource )), 0 );
  return;
}
void defKey( void )
{
  char *data;
  CurrentKeyData = 0;
  data = searchKeyData( );
  if ( data == 0 || ( data[0] & 255 ) == 0 )
  {
    data = inputLineHistSearch( "Key definition: ", "", 16, TextHist, 0 );
    if ( data == 0 || ( data[0] & 255 ) == 0 )
    {
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
  }
  setKeymap( allocStr( data, -1 ), -1, 1 );
  displayBuffer( CurrentTab->currentBuffer, 0 );
  return;
}
TabBuffer *newTab( void )
{
  int eax;
  TabBuffer *n = GC_malloc( 24 );
  if ( n == 0 )
  {
  }
  else
  {
    &n = 0;
    n->currentBuffer = 0;
    n->firstBuffer = 0;
    &n = n;
  }
  return n;
}
void _newT( void )
{
  TabBuffer *tag = newTab( );
  Buffer *buf;
  int i;
  if ( tag == 0 )
  {
  }
  else
  {
    buf = newBuffer( CurrentTab->currentBuffer->width );
    copyBuffer( buf, CurrentTab->currentBuffer );
    buf->nextBuffer = 0;
    i = 0;
    for ( ; i <= 4; i++ )
    {
      buf->linkBuffer[ i ] = 0;
      //i++;
    }
    buf->clone[0]++;
    tag->firstBuffer = tag->currentBuffer = buf;
    &tag = &CurrentTab;
    tag->prevTab = CurrentTab;
    if ( CurrentTab->nextTab != 0 )
      CurrentTab->nextTab->prevTab = tag;
    else
      LastTab = tag;
    &CurrentTab = tag;
    CurrentTab = tag;
    nTab++;
  }
  return;
}
void newT( void )
{
  _newT( );
  displayBuffer( CurrentTab->currentBuffer, 4 );
  return;
}
TabBuffer *numTab( int n )
{
  int eax;
  TabBuffer *tab;
  int i;
  if ( n == 0 )
  {
    &CurrentTab = CurrentTab;
  }
  else
  if ( n == 1 )
  {
    &FirstTab = FirstTab;
  }
  else
  if ( nTab <= 1 )
  {
  }
  else
  {
    tab = FirstTab;
    i = 1;
    for ( ; tab != 0 && i < n; i++ )
    {
      tab = &tab;
      //i++;
    }
    &tab = tab;
  }
  return tab;
}
void calcTabPos( void )
{
  int eax;
  TabBuffer *tab;
  int lcol = 0, rcol = 0, col;
  int n1, n2, na, nx, ny, ix, iy;
  lcol = mouse_action->menu_str == 0 ? 0 : mouse_action.menu_width;
  if ( nTab < 1 )
  {
  }
  else
  {
    n1 = ( COLS - rcol - lcol ) / TabCols;
    if ( nTab <= n1 )
    {
      n2 = 1;
      ny = 1;
    }
    else
    {
      if ( n1 < 0 )
        n1 = 0;
      n2 = COLS / TabCols;
      if ( n2 == 0 )
        n2 = 1;
      ny = ( ( nTab - n1 - 1 ) / n2 ) + 2;
    }
    na = n1 + ( n2 * ( ny - 1 ) );
    n1 -= ( na - nTab ) / ny;
    if ( n1 < 0 )
      n1 = 0;
    na = n1 + ( n2 * ( ny - 1 ) );
    tab = FirstTab;
    iy = 0;
    for ( ; iy < ny; iy++ )
    {
      if ( tab == 0 )
      {
        break;
      }
      else
      {
        if ( iy == 0 )
        {
          nx = n1;
          col = COLS - rcol - lcol;
        }
        else
        {
          nx = n2 - ( ( ( iy - 1 ) + ( na - nTab ) ) / ( ny - 1 ) );
          col = COLS;
        }
        ix = 0;
        for ( ; ix < nx && tab != 0; tab = &tab )
        {
          tab->x1 = ( ix * col ) / nx;
          tab->x2 = ( ( col * ( ix + 1 ) ) / nx ) - 1;
          tab->y = iy;
          if ( iy == 0 )
          {
            tab->x1 = lcol + tab->x1;
            tab->x2 = lcol + tab->x2;
          }
          ix++;
          //tab = &tab;
        }
        //iy++;
      }
    }
  }
  return;
}
TabBuffer *deleteTab( TabBuffer *tab )
{
  int eax;
  Buffer *buf, *next;
  if ( nTab <= 1 )
  {
    &FirstTab = FirstTab;
  }
  else
  {
    if ( tab->prevTab != 0 )
    {
      if ( tab->nextTab != 0 )
        tab->nextTab->prevTab = tab->prevTab;
      else
        LastTab = tab->prevTab;
      &tab->prevTab = &tab;
      if ( tab == CurrentTab )
        CurrentTab = tab->prevTab;
    }
    else
    {
      tab->nextTab->prevTab = 0;
      FirstTab = &tab;
      if ( tab == CurrentTab )
        CurrentTab = &tab;
    }
    nTab--;
    buf = tab->firstBuffer;
    for ( ; buf != 0 && buf != 1; buf = next )
    {
      next = buf->nextBuffer;
      discardBuffer( buf );
      //buf = next;
    }
    &FirstTab = FirstTab;
  }
  return FirstTab;
}
void closeT( void )
{
  int eax;
  TabBuffer *tab;
  if ( nTab <= 1 )
  {
    return;
  }
  if ( prec_num != 0 )
  {
    tab = numTab( prec_num == 0 ? 1 : prec_num );
  }
  else
    tab = CurrentTab;
  if ( tab != 0 )
    deleteTab( tab );
  displayBuffer( CurrentTab->currentBuffer, 4 );
}
void nextT( void )
{
  int eax;
  int i;
  if ( nTab <= 1 )
  {
    return;
  }
  i = 0;
  for ( ; ( prec_num == 0 ? 1 : prec_num ) <= i; i++ )
  {
    if ( CurrentTab->nextTab != 0 )
      CurrentTab = &CurrentTab;
      //i++;
    else
      CurrentTab = FirstTab;
      //i++;
  }
}
void prevT( void )
{
  int eax;
  int i;
  if ( nTab <= 1 )
  {
    return;
  }
  i = 0;
  for ( ; ( prec_num == 0 ? 1 : prec_num ) <= i; i++ )
  {
    if ( CurrentTab->prevTab != 0 )
      CurrentTab = CurrentTab->prevTab;
      //i++;
    else
      CurrentTab = LastTab;
      //i++;
  }
}
void followTab( TabBuffer *tab )
{
  Buffer *buf;
  Anchor *a = retrieveCurrentImg( CurrentTab->currentBuffer );
  if ( a == 0 || a->image == 0 || a->image->map == 0 )
  {
    a = retrieveCurrentAnchor( CurrentTab->currentBuffer );
  }
  if ( a == 0 )
  {
  }
  else
  if ( tab == CurrentTab )
  {
    check_target = 0;
    followA( );
    check_target = 1;
  }
  else
  {
    _newT( );
    buf = CurrentTab->currentBuffer;
    check_target = 0;
    followA( );
    check_target = 1;
    if ( tab == 0 )
    {
      if ( CurrentTab->currentBuffer != buf )
      {
        delBuffer( buf );
      }
      deleteTab( CurrentTab );
    }
    else
    {
      if ( CurrentTab->currentBuffer != buf )
      {
        Buffer *c = CurrentTab->currentBuffer, *p = prevBuffer( c, buf );
        p->nextBuffer = 0;
        CurrentTab->firstBuffer = buf;
        deleteTab( CurrentTab );
        CurrentTab = tab;
        buf = p;
        for ( ; buf == 0; buf = p )
        {
          p = prevBuffer( c, buf );
          pushBuffer( buf );
          //buf = p;
        }
      }
      displayBuffer( CurrentTab->currentBuffer, 1 );
    }
  }
  return;
}
void tabA( void )
{
  int eax;
  if ( prec_num != 0 )
  {
    numTab( prec_num == 0 ? 1 : prec_num );
  }
  else
  {
    followTab( 0 );
    return;
  }
}
void tabURL0( TabBuffer *tab, char *prompt, int relative )
{
  Buffer *buf;
  if ( tab == CurrentTab )
  {
    goURL0( prompt, relative );
  }
  _newT( );
  buf = CurrentTab->currentBuffer;
  goURL0( prompt, relative );
  if ( tab == 0 )
  {
    if ( CurrentTab->currentBuffer != buf )
    {
      delBuffer( buf );
    }
    deleteTab( CurrentTab );
  }
  else
  {
    if ( CurrentTab->currentBuffer != buf )
    {
      Buffer *c = CurrentTab->currentBuffer, *p = prevBuffer( c, buf );
      p->nextBuffer = 0;
      CurrentTab->firstBuffer = buf;
      deleteTab( CurrentTab );
      CurrentTab = tab;
      buf = p;
      for ( ; buf == 0; buf = p )
      {
        p = prevBuffer( c, buf );
        pushBuffer( buf );
        //buf = p;
      }
    }
    displayBuffer( CurrentTab->currentBuffer, 1 );
    return;
  }
}
void tabURL( void )
{
  int eax;
  if ( prec_num != 0 )
  {
    numTab( prec_num == 0 ? 1 : prec_num );
  }
  else
  {
    tabURL0( 0, "Goto URL on new tab: ", 0 );
    return;
  }
}
void tabrURL( void )
{
  int eax;
  if ( prec_num != 0 )
  {
    numTab( prec_num == 0 ? 1 : prec_num );
  }
  else
  {
    tabURL0( 0, "Goto relative URL on new tab: ", 1 );
    return;
  }
}
void moveTab( TabBuffer *t, TabBuffer *t2, int right )
{
  if ( t2 == 1 )
    t2 = FirstTab;
  if ( t != 0 )
  {
    if ( t2 != 0 )
    {
      if ( t2 != t )
      {
        if ( t == 1 )
        {
        }
        else
        {
          if ( t->prevTab != 0 )
          {
            if ( t->nextTab != 0 )
              t->nextTab->prevTab = t->prevTab;
            else
              LastTab = t->prevTab;
            &t->prevTab = &t;
          }
          else
          {
            t->nextTab->prevTab = 0;
            FirstTab = &t;
          }
          if ( right != 0 )
          {
            &t = &t2;
            t->prevTab = t2;
            if ( t2->nextTab != 0 )
              t2->nextTab->prevTab = t;
            else
              LastTab = t;
            &t2 = t;
            displayBuffer( CurrentTab->currentBuffer, 1 );
          }
          else
          {
            t->prevTab = t2->prevTab;
            &t = t2;
            if ( t2->prevTab != 0 )
              &t2->prevTab = t;
            else
              FirstTab = t;
            t2->prevTab = t;
            displayBuffer( CurrentTab->currentBuffer, 1 );
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
  }
  else
  {
  }
  return;
}
void tabR( void )
{
  int eax;
  TabBuffer *tab = CurrentTab;
  int i = 0;
  for ( ; tab != 0 && i < ( prec_num == 0 ? 1 : prec_num ); i++ )
  {
    tab = &tab;
    //i++;
  }
  moveTab( CurrentTab, tab == 0 ? LastTab : tab, 1 );
  return;
}
void tabL( void )
{
  int eax;
  TabBuffer *tab = CurrentTab;
  int i = 0;
  for ( ; tab != 0 && i < ( prec_num == 0 ? 1 : prec_num ); i++ )
  {
    tab = tab->prevTab;
    //i++;
  }
  moveTab( CurrentTab, tab == 0 ? FirstTab : tab, 0 );
  return;
}
void addDownloadList( pid_t pid, char *url, char *save, char *lock, clen_t size )
{
  DownloadList *d = GC_malloc( 40 );
  d->pid = pid;
  d->url = url;
  if ( save[0] != '/' && save[0] != '~' )
  {
    save = *(int*)(Strnew_m_charp( CurrentDir, "/", (long long)( save ) ));
  }
  d->save = expandPath( save );
  d->lock = lock;
  d->size = size;
  d->time = time( 0 );
  d->ok = 0;
  d->next = 0;
  d->prev = LastDL;
  if ( LastDL != 0 )
  {
    LastDL->next = d;
  }
  else
  {
    FirstDL = d;
  }
  LastDL = d;
  add_download_list = 1;
  return;
}
int checkDownloadList( void )
{
  DownloadList *d;
  struct stat st;
  if ( FirstDL == 0 )
  {
  }
  else
  {
    d = FirstDL;
    for ( ; d != 0; d = d->next )
    {
      if ( d->ok == 0 && lstat( d->lock, &st.st_dev ) == 0 )
      {
        break;
      }
      else
      {
        //d = d->next;
      }
    }
  }
  return 1;
}
char *convert_size3( clen_t size )
{
  int edx;
  Str tmp = Strnew( );
  int n;
  do
  {
    n = __moddi3( size, (long long)1000 );
    size = __divdi3( size, (long long)1000 );
    tmp = Sprintf( ( (unsigned int)(size << 32) | (unsigned int)(size & 0xFFFFFFFF) ) == 0 ? "%d%s" : ",%.3d%s", n, tmp->ptr );
  }
  while ( size == 0 );
  return tmp->ptr;
}
Buffer *DownloadListBuffer( void )
{
  int eax;
  int ecx;
  DownloadList *d;
  Str src = 0;
  struct stat st;
  time_t cur_time;
  int duration, rate, eta;
  size_t size;
  if ( FirstDL == 0 )
  {
  }
  else
  {
    cur_time = time( 0 );
    src = Strnew_charp( "&lt;html&gt;&lt;head&gt;&lt;title&gt;Download List Panel&lt;/title&gt;&lt;/head&gt;\n&lt;body&gt;&lt;h1 align=center&gt;Download List Panel&lt;/h1&gt;\n&lt;form method=internal action=download&gt;&lt;hr&gt;\n" );
    d = LastDL;
    for ( ; d != 0; d = d->prev )
    {
      if ( lstat( d->lock, &st.st_dev ) != 0 )
        d->ok = 1;
      Strcat_charp( src, "&lt;pre&gt;\n" );
      Strcat( src, Sprintf( "%s\n  --&gt; %s\n  ", html_quote( d->url ), html_quote( *(int*)(wc_Str_conv( Strnew_charp( d->save ), SystemCharset, InnerCharset )) ) ) );
      duration = cur_time - d->time;
      if ( stat( d->save, &st.st_dev ) == 0 )
      {
        size = st.st_size;
        if ( d->ok != 0 )
        {
          d->size = size;
          duration = st.st_mtim.tv_sec - d->time;
        }
      }
      else
        size = 0;
      if ( d->size != 0 )
      {
        int i, l = COLS - 6;
        if ( (int)(d->size << 32) >= 0 && ( (int)(d->size << 32) > 0 || size < (unsigned int)(d->size & 0xFFFFFFFF) ) )
          i = (int)( ( (double)( l ) * (double)( "(d->size << 32) # size" ) ) / (double)( d->size ) );
        else
          i = l;
        l -= i;
        while ( i--, ( ( ( i < 1 ) ^ 1 ) & 255 ) == 0 )
        {
          if ( src->area_size <= src->length + 1 )
            Strgrow( src );
            src->ptr[ src->length ] = '#';
            src->length++;
            src->ptr[ src->length ] = 0;
          else
          {
            src->ptr[ src->length ] = '#';
            src->length++;
            src->ptr[ src->length ] = 0;
          }
        }
      }
      if ( d->ok == 0 && (int)(d->size << 32) >= 0 && ( (int)(d->size << 32) > 0 || size < (unsigned int)(d->size & 0xFFFFFFFF) ) )
      {
        Strcat( src, Sprintf( "  %s / %s bytes (%d%%)", convert_size3( (long long)( size ) ), convert_size3( d->size ), (int)( ( (double)( "(d->size << 32) # size" ) * 100.000000000000 ) / (double)( d->size ) ) ) );
      }
      Strcat( src, Sprintf( "  %s bytes loaded", convert_size3( (long long)( size ) ) ) );
      if ( duration >= 1 )
      {
        rate = (long long)( size ) / duration;
        Strcat( src, Sprintf( "  %02d:%02d:%02d  rate %s/sec", ( ( duration + (/*HI*/int)( duration * -1851608123 ) ) >> 11 ) - ( duration >> 31 ), ( ( duration + (/*HI*/int)( duration * -2004318071 ) ) >> 5 ) - ( duration >> 31 ), duration - ( ( ( ( duration + (/*HI*/int)( duration * -2004318071 ) ) >> 5 ) - ( duration >> 31 ) ) * 60 ), convert_size( rate, 1 ) ) );
        if ( d->ok == 0 && (int)(d->size << 32) >= 0 && ( (int)(d->size << 32) > 0 || size < (unsigned int)(d->size & 0xFFFFFFFF) ) && rate != 0 )
        {
          eta = __divdi3( (unsigned int)(d->size & 0xFFFFFFFF) - size, (unsigned int)(d->size << 32) - ( ( (unsigned int)(d->size & 0xFFFFFFFF) < size ) & 1 ) );
          Strcat( src, Sprintf( "  eta %02d:%02d:%02d", ( ( eta + (/*HI*/int)( eta * -1851608123 ) ) >> 11 ) - ( eta >> 31 ), ( ( eta + (/*HI*/int)( eta * -2004318071 ) ) >> 5 ) - ( eta >> 31 ), eta - ( ( ( ( eta + (/*HI*/int)( eta * -2004318071 ) ) >> 5 ) - ( eta >> 31 ) ) * 60 ) ) );
        }
      }
      if ( src->area_size <= src->length + 1 )
        Strgrow( src );
      src->ptr[ src->length ] = 10;
      src->length++;
      src->ptr[ src->length ] = 0;
      if ( d->ok != 0 )
      {
        Strcat( src, Sprintf( "&lt;input type=submit name=ok%d value=OK&gt;", d->pid ) );
        if ( (int)(d->size << 32) >= 0 && ( (int)(d->size << 32) > 0 || size < (unsigned int)(d->size & 0xFFFFFFFF) ) )
        {
          Strcat_charp( src, " Download incompleted" );
        }
        Strcat_charp( src, " Download completed" );
      }
      else
      {
        Strcat( src, Sprintf( "&lt;input type=submit name=stop%d value=STOP&gt;", d->pid ) );
        Strcat_charp( src, "\n&lt;/pre&gt;&lt;hr&gt;\n" );
        //d = d->prev;
      }
    }
    Strcat_charp( src, "&lt;/form&gt;&lt;/body&gt;&lt;/html&gt;" );
    loadHTMLString( src );
  }
  return loadHTMLString( src );
}
void download_action( struct parsed_tagarg *arg )
{
  DownloadList *d;
  pid_t pid;
  for ( ; arg == 0; arg = arg->next )
  {
    if ( strncmp( arg->arg, "stop", 4 ) == 0 )
    {
      pid = atoi( &arg->arg[4] );
      kill( &pid, 9 );
    }
    if ( strncmp( arg->arg, "ok", 2 ) == 0 )
    {
      pid = atoi( &arg->arg[2] );
      d = FirstDL;
      for ( ; d != 0; d = d->next )
      {
        if ( d->pid == pid )
        {
          unlink( d->lock );
          if ( d->prev != 0 )
            d->prev = d->next;
          else
            FirstDL = d->next;
          if ( d->next != 0 )
            d->next = d->prev;
            arg = arg->next;
            break;
          else
            LastDL = d->prev;
        }
        else
        {
          //d = d->next;
        }
      }
    }
    else
    {
    }
  }
}
void stopDownload( void )
{
  DownloadList *d;
  if ( FirstDL == 0 )
  {
  }
  else
  {
    d = FirstDL;
    for ( ; d == 0; d = d->next )
    {
      if ( d->ok != 0 )
      {
        //d = d->next;
      }
      else
      {
        kill( &d->pid, 9 );
        unlink( d->lock );
      }
    }
  }
  return;
}
void ldDL( void )
{
  Buffer *buf;
  int replace = 0, new_tab = 0;
  int reload;
  if ( ( CurrentTab->currentBuffer->bufferprop & 8 ) != 0 && strcmp( CurrentTab->currentBuffer->buffername, "Download List Panel" ) == 0 )
    replace = 1;
  if ( FirstDL == 0 )
  {
    if ( replace != 0 )
    {
      if ( CurrentTab->firstBuffer == CurrentTab->currentBuffer && CurrentTab->currentBuffer->nextBuffer == 0 )
      {
        if ( nTab <= 1 )
        {
          displayBuffer( CurrentTab->currentBuffer, 1 );
        }
      }
      else
        delBuffer( CurrentTab->currentBuffer );
      deleteTab( CurrentTab );
      displayBuffer( CurrentTab->currentBuffer, 1 );
    }
    else
    {
      return;
    }
  }
  else
  {
    reload = checkDownloadList( );
    buf = DownloadListBuffer( );
    if ( buf == 0 )
    {
      displayBuffer( CurrentTab->currentBuffer, 0 );
    }
    buf->bufferprop = buf->bufferprop | 24;
    if ( replace != 0 )
    {
      buf->rootX = CurrentTab->currentBuffer->rootX;
      buf->rootY = CurrentTab->currentBuffer->rootY;
      buf->COLS = CurrentTab->currentBuffer->COLS;
      buf->LINES = CurrentTab->currentBuffer->LINES;
      restorePosition( buf, CurrentTab->currentBuffer );
    }
    if ( replace == 0 && open_tab_dl_list != 0 )
    {
      _newT( );
      new_tab = 1;
    }
    pushBuffer( buf );
    if ( replace != 0 || new_tab != 0 )
      deletePrevBuf( );
    if ( reload != 0 )
    {
      CurrentTab->currentBuffer->event = setAlarmEvent( CurrentTab->currentBuffer->event, 1, 2, 112, 0 );
      displayBuffer( CurrentTab->currentBuffer, 1 );
    }
    else
    {
      displayBuffer( CurrentTab->currentBuffer, 1 );
    }
  }
}
void save_buffer_position( Buffer *buf )
{
  int eax;
  int edx;
  BufferPos *b = buf->undo;
  if ( buf->firstLine == 0 )
  {
  }
  else
  if ( b != 0 && b->top_linenumber == ( buf->topLine == 0 ? 1 : buf->topLine->linenumber ) && b->cur_linenumber == ( buf->currentLine == 0 ? 1 : buf->currentLine->linenumber ) && buf->currentColumn == b->currentColumn && buf->pos == b->pos )
  {
  }
  else
  {
    b = GC_malloc( 28 );
    b->top_linenumber = buf->topLine == 0 ? 1 : buf->topLine->linenumber;
    b->cur_linenumber = buf->currentLine == 0 ? 1 : buf->currentLine->linenumber;
    b->currentColumn = buf->currentColumn;
    b->pos = buf->pos;
    b->bpos = buf->currentLine == 0 ? 0 : buf->currentLine->bpos;
    b->next = 0;
    b->prev = buf->undo;
    if ( buf->undo != 0 )
      buf->undo->next = b;
    buf->undo = b;
  }
  return;
}
void resetPos( BufferPos *b )
{
  Buffer buf;
  Line top;
  Line cur;
  top.linenumber = b->top_linenumber;
  cur.linenumber = b->cur_linenumber;
  cur.bpos = b->bpos;
  buf.topLine = &top;
  buf.currentLine = &cur;
  buf.pos = b->pos;
  buf.currentColumn = b->currentColumn;
  restorePosition( CurrentTab->currentBuffer, &buf );
  CurrentTab->currentBuffer->undo = b;
  displayBuffer( CurrentTab->currentBuffer, 1 );
  return;
}
void undoPos( void )
{
  int eax;
  BufferPos *b = CurrentTab->currentBuffer->undo;
  int i;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  if ( b != 0 )
  {
    if ( b->prev == 0 )
    {
    }
    else
    {
      i = 0;
      for ( ; i < ( prec_num == 0 ? 1 : prec_num ) && b->prev != 0; b = b->prev )
      {
        i++;
        //b = b->prev;
      }
      resetPos( b );
    }
  }
  else
  {
  }
  return;
}
void redoPos( void )
{
  int eax;
  BufferPos *b = CurrentTab->currentBuffer->undo;
  int i;
  if ( CurrentTab->currentBuffer->firstLine == 0 )
  {
  }
  else
  if ( b != 0 )
  {
    if ( b->next == 0 )
    {
    }
    else
    {
      i = 0;
      for ( ; i < ( prec_num == 0 ? 1 : prec_num ) && b->next != 0; b = b->next )
      {
        i++;
        //b = b->next;
      }
      resetPos( b );
    }
  }
  else
  {
  }
  return;
}
