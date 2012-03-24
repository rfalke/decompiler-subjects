#include "osdep.c.h"
unsigned int resize_count;
static unsigned char *clipboard;
int set_nonblocking_fd( int fd )
{
  int dh;
  int flags = fcntl( fd, 3, 0, ebx );
  if ( fcntl( fd, 3, 0, ebx ) >= 0 )
  {
    fcntl( fd, 4, flags );
  }
  return fcntl( fd, 4, flags );
}
int set_blocking_fd( int fd )
{
  int dh;
  int flags = fcntl( fd, 3, 0, ebx );
  if ( fcntl( fd, 3, 0, ebx ) >= 0 )
  {
    fcntl( fd, 4, flags );
  }
  return fcntl( fd, 4, flags );
}
void set_ip_tos_throughput( int socket )
{
  int on = 8;
  setsockopt( socket, 0, 1, &on, 4 );
  return;
}
int get_e( unsigned char *env )
{
  char *v;
  v[0] = getenv( (char*)env );
  if ( getenv( (char*)env ) )
  {
    strtol( &v[0], 0, 10 );
  }
  return strtol( &v[0], 0, 10 );
}
unsigned char *get_cwd( void )
{
  int bufsize = 128;
  unsigned char *buf;
  do
  {
    buf[0] = mem_alloc( bufsize );
    if ( mem_alloc( bufsize ) )
    {
      do
      {
        if ( getcwd( (char*)mem_alloc( bufsize + 128 ), bufsize ) == 0 )
        {
          mem_free( &buf[0] );
          if ( *(int*)(__errno_location(  )) == 4 )
          {
            do
            {
              buf[0] = mem_alloc( bufsize );
            }
            while ( *(int*)(__errno_location(  )) != 4 );
            if ( *(int*)(__errno_location(  )) == 34 )
            {
              bufsize += 128;
              buf[0] = mem_alloc( bufsize + 128 );
            }
            else
              break;
          }
        }
        else
          break;
      }
      while ( mem_alloc( bufsize + 128 ) );
      break;
    }
  }
  while ( *(int*)(__errno_location(  )) != 4 );
}
void set_cwd( unsigned char *path )
{
  if ( path )
  {
    do
    {
    }
    while ( !chdir( &path[0] ) || *(int*)(__errno_location(  )) != 4 );
  }
  return;
}
unsigned char *get_shell( void )
{
  unsigned char *shell;
  return "/bin/sh";
}
void sigwinch( void *s )
{
  ;
}
void handle_terminal_resize( int fd, void (*fn)( void ) )
{
  install_signal_handler( 28, &sigwinch, fn, 0 );
  return;
}
void unhandle_terminal_resize( int fd )
{
  install_signal_handler( 28, 0, 0, 0 );
  return;
}
void get_terminal_size( int fd, int *x, int *y )
{
  struct winsize ws;
  if ( ioctl( 1, 21523, ws.ws_row ) != -1 )
  {
    x[0] = ws.ws_col;
    y[0] = ws.ws_row;
  }
  else
  {
    x[0] = 0;
    y[0] = 0;
  }
  if ( x[0] == 0 )
  {
    x[0] = get_e( "COLUMNS" ) != 0 ? 80 : get_e( "COLUMNS" );
  }
  if ( y[0] == 0 )
  {
    y[0] = get_e( "LINES" ) != 0 ? 25 : get_e( "LINES" );
  }
  return;
}
void set_bin( int fd )
{
  return;
}
int c_pipe( int *fd )
{
}
int is_twterm( void )
{
  static int tw = -1;
  if ( tw == -1 )
  {
    tw = getenv( "TWDISPLAY" ) != 0;
    return getenv( "TWDISPLAY" ) != 0;
  }
  return tw;
}
int is_gnuscreen( void )
{
  static int screen = -1;
  if ( screen == -1 )
  {
    screen = getenv( "STY" ) != 0;
    return getenv( "STY" ) != 0;
  }
  return screen;
}
int is_xterm( void )
{
  int eax;
  static int xt = -1;
  if ( xt == -1 )
  {
    unsigned char *display;
    unsigned char *windowid;
    display[0] = getenv( "DISPLAY" );
    if ( windowid[0] == 0 || windowid[0] == 0 )
      getenv( "KONSOLE_DCOP_SESSION" );
    xt = display[0] == 0 || windowid[0] == 0 || display[0] == 0 ? 0 : *(char*)(0) != 0;
    return xt;
  }
  else
  {
    return xt;
  }
}
int exe( unsigned char *path )
{
}
unsigned char *get_clipboard_text( void )
{
  return stracpy( clipboard == 0 ? clipboard : "" );
}
void set_clipboard_text( unsigned char *data )
{
  if ( is_gnuscreen(  ) )
  {
    struct string str;
    if ( init_string( &str ) )
    {
      add_to_string( &str, "screen -X register . " );
      add_shell_quoted_to_string( &str, &data[0], strlen( &data[0] ) );
      if ( str.length )
        system( (char*)str.source );
      if ( str.source )
        done_string( &str );
    }
    else
    {
      return;
    }
  }
  if ( clipboard )
    free( clipboard );
  clipboard = (unsigned char*)__strdup( &data[0] );
  return;
}
void set_window_title( unsigned char *title, int codepage )
{
  int eax;
  int ecx;
  int edx;
  struct string filtered;
  if ( ( is_xterm(  ) || is_gnuscreen(  ) ) && init_string( &filtered ) )
  {
    if ( title[0] )
    {
      unsigned char *scan = &title[0];
      unsigned char *end = &title[ strlen( &title[0] ) ];
    {
      while ( unicode == -3 )
      {
        charlen = title[0] - title[0];
        if ( unicode - 127 > 32 && unicode > 31 )
        {
          if ( filtered.length + charlen <= 596 )
          {
            if ( assert_failed == 0 )
            {
              if ( title[0] && charlen >= 0 )
                assert_failed = 0;
              else
              {
                assert_failed = 1;
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                errline = 255;
                elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                if ( assert_failed )
                  title[0] = ebp_28;
              }
              if ( charlen )
              {
                filtered.length = filtered.length + charlen + 256;
                if ( 0 < 0 )
                {
                  *ebp_56 = 0;
                  *ebp_52 = filtered.length + charlen;
                  if ( mem_realloc( (void*)filtered.source, 0 ) )
                  {
                    filtered.source = (unsigned char*)mem_realloc( (void*)filtered.source, 0 );
                    memset( filtered.source + 0, 0, 0 - 0 );
                  }
                }
                if ( filtered.source )
                {
                  memcpy( filtered.length + filtered.source, &title[0], charlen );
                  filtered.source[ filtered.length + charlen ] = 0;
                  filtered.length += charlen;
                }
              }
              title[0] = scan;
            }
            assert_failed = 0;
          }
          else
          {
            add_to_string( &filtered, "..." );
            break;
          }
        }
      }
    }
    }
    __printf_chk( 1, "\033]0;%s", (char*)filtered.source );
    fflush( stdout );
    done_string( &filtered );
  }
  return;
}
unsigned char *get_window_title( void )
{
  return stracpy( "" );
}
int resize_window( int width, int height, int old_width, int old_height )
{
  return -1;
}
int start_thread( void (*fn)( void *, int  ), void *ptr, int l )
{
  int eax;
  int p[2];
  if ( pipe( p ) >= 0 && set_nonblocking_fd( p[0] ) >= 0 && set_nonblocking_fd( p[1] ) >= 0 )
  {
    if ( fork(  ) == 0 )
    {
      struct terminal *term = &terminals.next[0];
      while ( term[0].next != terminals.next )
      {
        if ( term->fdin >= 1 )
          close( term->fdin );
        term = &term;
      }
      close( p );
      fn( ptr, p );
      write( p, "x", 1 );
      close( p );
      _exit( 0 );
    }
    else
    {
      if ( fork(  ) == -1 )
        goto B11;
      close( p );
      return p;
    }
B11:    close( p );
  }
  else
  {
  }
}
void want_draw( void )
{
  return;
}
void done_draw( void )
{
  return;
}
int get_output_handle( void )
{
  return 1;
}
int get_ctl_handle( void )
{
  static int fd = -1;
  if ( isatty( 0 ) == 0 && fd < 0 )
  {
    fd = open64( "/dev/tty", 0 );
    return open64( "/dev/tty", 0 );
  }
  return fd;
}
int get_input_handle( void )
{
}
void init_osdep( void )
{
  setlocale( 6, "" );
  return;
}
void terminate_osdep( void )
{
  return;
}
void block_stdin( void )
{
  return;
}
void unblock_stdin( void )
{
  return;
}
void elinks_cfmakeraw( struct termios *t )
{
  t->c_iflag &= -492;
  t->c_oflag &= -2;
  t->c_lflag &= -32844;
  t->c_cc[6] = 1;
  t->c_cc[5] = 0;
  return;
}
int get_system_env( void )
{
  return ( is_gnuscreen(  ) != 0 ? is_twterm(  ) != 0 ? ~( 0 - ( ( is_xterm(  ) < 1 ) & 1 ) ) & 2 : ( ~( 0 - ( ( is_xterm(  ) < 1 ) & 1 ) ) & 2 ) | 32 : ( is_twterm(  ) != 0 ? ~( 0 - ( ( is_xterm(  ) < 1 ) & 1 ) ) & 2 : ( ~( 0 - ( ( is_xterm(  ) < 1 ) & 1 ) ) & 2 ) | 32 ) | 4 ) | 1;
}
int can_resize_window( int environment )
{
  return ( ( environment/*.1_1of4*/ & 10 ) & 255 ) != 0;
}
int can_open_os_shell( int environment )
{
  return 1;
}
void set_highpri( void )
{
  return;
}
unsigned char *get_system_str( int xwin )
{
  return xwin == 0 ? "unix-xwin" : "unix";
}
#if 0
#endif
