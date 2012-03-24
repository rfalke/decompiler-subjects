#include "LYCurses.c.h"
int lynx_has_color;
WINDOW *LYwin;
int LYshiftWin;
int LYwideLines;
int LYtableCols;
BOOLEAN LYuseCursesPads;
BOOLEAN LYCursesON;
int Current_Attr;
static int Masked_Attr;
static struct {
   char *name;
   int code;
} Mono_Attrs[7];
HTCharStyle displayStyles[133];
static BOOLEAN lynx_called_initscr;
static struct {
   int fg;
   int dft_fg;
   int bg;
   int dft_bg;
} lynx_color_cfg[8];
static struct {
   int fg;
   int bg;
} lynx_color_pairs[25];
static WINDOW *LYscreen;
static WINDOW *my_subwindow;
int string_to_attr( char *name )
{
  unsigned int i = 0;
  for ( ; i <= 6; i++ )
  {
    if ( strcasecomp( Mono_Attrs[ i ].name, name ) == 0 )
    {
      return Mono_Attrs[ i ].code;
    }
    // i++;
  }
  return 0;
}
char *attr_to_string( int code )
{
  static char result[136];
  unsigned int i;
  int pair = ( code & 65280 ) >> 8;
  int bold = 0;
  if ( bold )
    code &= -2097153;
  result[0] = 0;
  i = 0;
  for ( ; i <= 6; i++ )
  {
    if ( Mono_Attrs[ i ].code & code )
    {
      if ( result[0] )
      {
        memcpy( &result[ strlen( result ) ] );
      }
      strcat( result, Mono_Attrs[ i ].name );
    }
    // i++;
  }
  if ( pair && pair_content( pair, &f, &b ) != -1 )
  {
    char *fg = lookup_color( f );
    char *bg = lookup_color( b );
    if ( result[0] )
      strcat( result, "+" );
    sprintf( &result[ strlen( result ) ], "%s/%s", fg, bg );
  }
  return result;
}
void LYbox( WINDOW *win, BOOLEAN formfield )
{
  int boxvert, boxhori;
  UCSetBoxChars( current_char_set, &boxvert, &boxhori, 0, 0 );
  curses_w_style( win, s_menu_frame, 1 );
  if ( boxvert == 0 || boxhori == 0 )
    wborder( win, boxvert, boxvert, boxhori, boxhori, 0, 0, 0, 0 );
  else
  if ( boxvert == 42 || boxhori == 42 )
    wborder( win, boxvert, boxvert, boxhori, boxhori, 42, 42, 42, 42 );
  else
    wborder( win, boxvert, boxvert, boxhori, boxhori, 47, 92, 92, 47 );
  curses_w_style( win, s_menu_frame, 0 );
  wrefresh( win );
  return;
}
void setStyle( int style, int color, int cattr, int mono )
{
  displayStyles[ style ].color = color;
  displayStyles[ style ].cattr = cattr;
  displayStyles[ style ].mono = mono;
  return;
}
void setHashStyle( int style, int color, int cattr, int mono, char *element )
{
  bucket *ds = &hashStyles[ style ];
  if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
  {
    fprintf( TraceFP( ), "CSS(SET): &lt;%s&gt; hash=%d, ca=%#x, ma=%#x\n", element, style, color, mono );
  }
  ds->color = color;
  ds->cattr = cattr;
  ds->mono = mono;
  ds->code = style;
  if ( ds->name[0] )
  {
    free( &ds->name[0] );
    *(int*)&ds->name[0] = 0;
  }
  HTSACopy( &ds->name, element );
  return;
}
void LYAttrset( WINDOW *win, int color, int mono )
{
  if ( lynx_has_color && LYShowColor > 1 && color >= 0 )
  {
    if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
    {
      fprintf( TraceFP( ), "CSS:LYAttrset color %#x -&gt; (%s)\n", color, attr_to_string( color ) );
    }
    win->_attrs = color;
  }
  else
  if ( mono >= 0 )
  {
    if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
    {
      fprintf( TraceFP( ), "CSS:LYAttrset mono %#x -&gt; (%s)\n", mono, attr_to_string( mono ) );
    }
    win->_attrs = mono;
  }
  else
  {
    if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
    {
      fprintf( TraceFP( ), "CSS:LYAttrset (A_NORMAL)\n" );
    }
    win->_attrs = 0;
  }
  return;
}
void curses_w_style( WINDOW *win, int style, int dir )
{
  int YP, XP;
  bucket *ds = &nostyle_bucket;
  if ( ds->name[0] == 0 )
  {
    if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
    {
      fprintf( TraceFP( ), "CSS.CS:Style %d not configured\n", style );
    }
  }
  else
  {
    if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
    {
      fprintf( TraceFP( ), "CSS.CS:&lt;%s%s&gt; style %d code %#x, color %#x\n", "/", &ds->name[0], style, ds->code, ds->color );
    }
    YP = -1;
    XP = -1;
    if ( style == s_normal && dir )
    {
      LYAttrset( win, ds->color, ds->mono );
      if ( win == LYwin )
      {
        SetCachedStyle( YP, XP, s_normal );
      }
    }
    else
    {
      switch ( dir )
      {
      case 0:
        if ( last_colorattr_ptr )
        {
          int last_attr;
          last_colorattr_ptr += -1;
          last_attr = last_styles[ last_colorattr_ptr ];
          LYAttrset( win, last_attr, last_attr );
        }
        else
        {
          LYAttrset( win, 0, -1 );
        }
        break;
      case 1:
        if ( last_colorattr_ptr > 127 )
        {
          if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
          {
            fprintf( TraceFP( ), "........... %s (0x%x) %s\r\n", "attribute cache FULL, dropping last", last_styles[ last_colorattr_ptr ], "in LynxChangeStyle(curses_w_style)" );
          }
          last_colorattr_ptr = 127;
        }
        last_styles[ last_colorattr_ptr ] = LYgetattrs( win );
        last_colorattr_ptr++;
        if ( style != s_alink && style != s_curedit && style != s_aedit && style != s_aedit_sel && style != s_aedit_pad && style != s_aedit_arr )
        {
          if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
          {
            fprintf( TraceFP( ), "CACHED: &lt;%s&gt; @(%d,%d)\n", &ds->name[0], YP, XP );
          }
          if ( win == LYwin )
            SetCachedStyle( YP, XP, style );
        }
        LYAttrset( win, ds->color, ds->mono );
        break;
      case 2:
        break;
      }
    }
  }
  return;
}
void wcurses_css( WINDOW *win, char *name, int dir )
{
  int try_again = 1;
  while ( try_again )
  {
    int tmpHash = hash_code( name );
    if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
    {
      fprintf( TraceFP( ), "CSSTRIM:trying to set [%s] style - ", name );
    }
    if ( tmpHash == -1 )
    {
      char *pclass = strrchr( name, '.' );
      if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
      {
        fprintf( TraceFP( ), "undefined, trimming at %p\n", pclass );
      }
      if ( pclass )
      {
        pclass[0] = 0;
      }
      else
      {
        try_again = 0;
      }
    }
    else
    {
      if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
      {
        fprintf( TraceFP( ), "ok (%d)\n", hash_code( name ) );
      }
      curses_w_style( win, hash_code( name ), dir );
      try_again = 0;
    }
  }
  return;
}
void curses_css( char *name, int dir )
{
  int eax;
  wcurses_css( LYwin, name, dir );
  return;
}
void curses_style( int style, int dir )
{
  int eax;
  curses_w_style( LYwin, style, dir );
  return;
}
int get_color_pair( int n )
{
  return ( n <= 24 && lynx_color_pairs[ n ].fg == default_fg && lynx_color_pairs[ n ].bg == default_bg ? 0 : n ) << 8;
}
int lynx_color_cfg_attr( int code )
{
  int result = 0;
  if ( code >= 0 && code <= 7 )
  {
    int fg = lynx_color_cfg[ code ].fg;
    if ( COLORS + -1 < fg && ( fg & COLORS ) )
    {
      result = 0x200000;
    }
  }
  return result;
}
int encode_color_attr( int color_attr )
{
  int result;
  int code = 0;
  int offs = 1;
  if ( color_attr & 0x200000 )
    code |= 1;
  if ( color_attr & 0x140000 )
    code |= 2;
  if ( color_attr & 0x20000 )
    code |= 4;
  result = lynx_color_cfg_attr( code );
  if ( offs + code < COLOR_PAIRS )
  {
    result |= get_color_pair( offs + code );
  }
  return result;
}
int decode_mono_code( int mono_code )
{
  int result = 0;
  if ( mono_code & 1 )
    result |= 0x200000;
  if ( mono_code & 2 )
    result |= 0x40000;
  if ( mono_code & 4 )
  {
    result |= 0x20000;
  }
  return result;
}
int LYgetTableAttr( void )
{
  int result;
  if ( lynx_has_color && LYShowColor > 1 )
  {
    result = encode_color_attr( Current_Attr );
  }
  result = Current_Attr;
  return result & ~Masked_Attr;
}
char *LYgetTableString( int code )
{
  int eax;
  int mask = decode_mono_code( code );
  int second = encode_color_attr( mask );
  int pair = ( second & 65280 ) >> 8;
  int mono = 0;
  int fg = lynx_color_pairs[ pair ].fg;
  int bg = lynx_color_pairs[ pair ].bg;
  unsigned int n;
  char *result = 0;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYgetTableString(%d)\n", code );
  }
  if ( fg == 0 && bg == 0 )
    fg = 7;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "%#x -&gt; %#x (mono %#x pair %d) fg=%d, bg=%d\n", mask, second, mono, pair, fg, bg );
  }
  n = 0;
  for ( ; n <= 6; n++ )
  {
    if ( Mono_Attrs[ n ].code & mono )
    {
      if ( result )
        HTSACat( &result, "+" );
      HTSACat( &result, Mono_Attrs[ n ].name );
    }
    // n++;
  }
  if ( result == 0 )
    HTSACopy( &result, "normal" );
  HTSACat( &result, ":" );
  HTSACat( &result, lookup_color( fg ) );
  if ( bg >= 0 )
  {
    HTSACat( &result, ":" );
    HTSACat( &result, lookup_color( bg ) );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "-&gt;%s\n", result );
  }
  return result;
}
void lynx_init_color_pair( int n )
{
  return;
}
void lynx_map_color( int n )
{
  int j;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "lynx_map_color(%d)\n", n );
  }
  if ( n + 1 <= 24 )
  {
    j = n + 1;
    for ( ; j <= 24; j += 8 )
    {
      lynx_color_pairs[ j ].fg = lynx_color_cfg[ n ].fg;
      lynx_color_pairs[ j ].bg = lynx_color_cfg[ n ].bg;
      // j += 8;
    }
    lynx_color_pairs[ n + 9 ].bg = lynx_color_cfg->bg;
  }
  lynx_init_color_pair( n );
  return;
}
int lynx_chg_color( int color, int fg, int bg )
{
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "lynx_chg_color(color=%d, fg=%d, bg=%d)\n", color, fg, bg );
  }
  if ( fg == -3 || bg == -3 )
  {
    return -1;
  }
  if ( color >= 0 && color <= 7 )
  {
    lynx_color_cfg[ color ].fg = fg;
    lynx_color_cfg[ color ].bg = bg;
    lynx_map_color( color );
    return 0;
  }
  return -1;
}
void lynx_set_color( int a )
{
  if ( lynx_has_color && LYShowColor > 1 )
  {
    LYwin->_attrs = lynx_color_cfg_attr( a ) | ( a + 1 < COLOR_PAIRS ? get_color_pair( a + 1 ) : 0 );
  }
  return;
}
void lynx_standout( int flag )
{
  if ( flag )
  {
    wattr_on( LYwin, 262144, 0 );
  }
  else
  {
    wattr_off( LYwin, 262144, 0 );
  }
  return;
}
void lynx_init_colors( void )
{
  if ( lynx_has_color )
  {
    size_t n;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "lynx_init_colors (default %d/%d)\n", default_fg, default_bg );
    }
    lynx_color_cfg[0].fg = default_fg;
    lynx_color_cfg->bg = default_bg;
    n = 0;
    for ( ; n <= 7; n++ )
    {
      lynx_init_color_pair( (int)n );
      // n++;
    }
  }
  else
  if ( LYShowColor )
  {
    LYShowColor = 1;
  }
  return;
}
void lynx_setup_colors( void )
{
  int n;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "lynx_setup_colors\n" );
  }
  if ( LYuse_default_colors == 0 )
  {
    n = 0;
    for ( ; n <= 7; n++ )
    {
      if ( lynx_color_cfg[ n ].dft_fg )
        lynx_color_cfg[ n ].fg = 0;
      if ( lynx_color_cfg[ n ].dft_bg )
        lynx_color_cfg[ n ].bg = 7;
      // n++;
    }
  }
  n = 0;
  for ( ; n <= 7; n++ )
  {
    lynx_map_color( n );
    // n++;
  }
  return;
}
void LYnoVideo( int a )
{
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYnoVideo(%d)\n", a );
  }
  Masked_Attr = decode_mono_code( a );
  return;
}
void start_curses( void )
{
  int keypad_on = 0;
  if ( isatty( fileno( stdout ) ) && LYReopenInput( ) < 0 )
  {
    fwrite( "Cannot open tty input\n", 1, 22, stderr );
    exit_immediately( 1 );
  }
  if ( LYscreen == 0 )
  {
    BOOLEAN savesize = recent_sizechange;
    size_change( 0 );
    recent_sizechange = savesize;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Screen size: %s()\n", "initscr" );
    }
    LYscreen = initscr( );
    if ( LYscreen == 0 )
    {
      fprintf( TraceFP( ), "%s\n", gettext( "Terminal initialisation failed - unknown terminal type?" ) );
      exit_immediately( 1 );
    }
    lynx_called_initscr = 1;
    LYlines = LYscreenHeight( );
    LYcols = LYscreenWidth( );
    size_change( 0 );
    recent_sizechange = 0;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Screen size is now %d x %d\n", LYlines, LYcols );
    }
    if ( LYuseCursesPads )
    {
      LYwin = newpad( LYlines, 1014 );
      LYshiftWin = 0;
      LYwideLines = 0;
    }
    else
      LYwin = stdscr;
    keypad( LYwin, 1 );
    keypad_on = 1;
    if ( lynx_initialize_keymaps( ) == -1 )
    {
      endwin( );
      exit_immediately( 1 );
    }
    if ( has_colors( ) & 255 )
    {
      lynx_has_color = 1;
      start_color( );
      if ( COLORS > 16 )
        COLORS = 16;
      if ( COLORS <= 7 )
        COLORS = 2;
      if ( COLORS > 8 && COLORS != 16 )
        COLORS = 8;
      if ( LYuse_default_colors )
      {
        if ( assume_default_colors( default_fg, default_bg ) )
        {
          default_fg = 7;
          default_bg = 0;
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "initializing default colors %d/%d\n", default_fg, default_bg );
        }
        if ( default_fg >= 0 || default_bg >= 0 )
        {
          unsigned int n = 0;
          for ( ; n <= 7; n++ )
          {
            if ( default_fg >= 0 && lynx_color_cfg[ n ].fg < 0 )
              lynx_color_cfg[ n ].fg = default_fg;
            if ( default_bg >= 0 && lynx_color_cfg[ n ].bg < 0 )
              lynx_color_cfg[ n ].bg = default_bg;
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "color_cfg[%u] = %d/%d\n", n, lynx_color_cfg[ n ].fg, lynx_color_cfg[ n ].bg );
            }
            // n++;
          }
          lynx_setup_colors( );
        }
      }
    }
    if ( lynx_lss_file && lynx_lss_file[0] && ( LYCanReadFile( lynx_lss_file ) & 255 ) )
      style_readFromFile( lynx_lss_file );
    parse_userstyles( );
    lynx_init_colors( );
  }
  cbreak( );
  signal( 2, &cleanup_sig );
  noecho( );
  if ( keypad_on == 0 )
    keypad( LYwin, 1 );
  lynx_enable_mouse( 1 );
  fflush( stdin );
  fflush( stdout );
  fflush( stderr );
  LYCursesON = 1;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "start_curses: done.\n" );
  }
  return;
}
void lynx_enable_mouse( int state )
{
  static int was;
  if ( LYUseMouse )
  {
    if ( state )
    {
      if ( was == 0 )
      {
        int old = mouseinterval( -1 );
        was++;
        if ( old <= 199 )
          mouseinterval( 300 );
      }
      mousemask( 84013535, 0 );
    }
    else
    {
      mousemask( 0, 0 );
    }
  }
  return;
}
void lynx_nl2crlf( int normal )
{
  static struct termios saved_tty;
  static int did_save;
  static int waiting;
  static int can_fix = 1;
  if ( did_save == 0 )
  {
    if ( cur_term == 0 )
      can_fix = 0;
    else
    {
      saved_tty.c_iflag = cur_term->Nttyb.c_iflag;
      saved_tty.c_oflag = cur_term->Nttyb.c_oflag;
      saved_tty.c_cflag = cur_term->Nttyb.c_cflag;
      saved_tty.c_lflag = cur_term->Nttyb.c_lflag;
      saved_tty.c_line = cur_term->Nttyb.c_line;
      saved_tty.c_cc[3] = cur_term->Nttyb.c_cc[3];
      saved_tty.c_cc[7] = cur_term->Nttyb.c_cc[7];
      saved_tty.c_cc[11] = cur_term->Nttyb.c_cc[11];
      saved_tty.c_cc[15] = cur_term->Nttyb.c_cc[15];
      saved_tty.c_cc[19] = cur_term->Nttyb.c_cc[19];
      saved_tty.c_cc[23] = cur_term->Nttyb.c_cc[23];
      saved_tty.c_cc[27] = cur_term->Nttyb.c_cc[27];
      saved_tty.c_cc[31] = cur_term->Nttyb.c_cc[31];
      saved_tty.c_ispeed = cur_term->Nttyb.c_ispeed;
      saved_tty.c_ospeed = cur_term->Nttyb.c_ospeed;
      did_save = 1;
    }
  }
  if ( can_fix )
  {
    if ( normal )
    {
      if ( waiting == 0 )
      {
        cur_term->Nttyb.c_oflag |= 4;
        waiting = 1;
        nonl( );
      }
    }
    else
    if ( waiting )
    {
      cur_term->Nttyb.c_iflag = saved_tty.c_iflag;
      cur_term->Nttyb.c_oflag = saved_tty.c_oflag;
      cur_term->Nttyb.c_cflag = saved_tty.c_cflag;
      cur_term->Nttyb.c_lflag = saved_tty.c_lflag;
      cur_term->Nttyb.c_line = saved_tty.c_line;
      cur_term->Nttyb.c_cc[3] = saved_tty.c_cc[3];
      cur_term->Nttyb.c_cc[7] = saved_tty.c_cc[7];
      cur_term->Nttyb.c_cc[11] = saved_tty.c_cc[11];
      cur_term->Nttyb.c_cc[15] = saved_tty.c_cc[15];
      cur_term->Nttyb.c_cc[19] = saved_tty.c_cc[19];
      cur_term->Nttyb.c_cc[23] = saved_tty.c_cc[23];
      cur_term->Nttyb.c_cc[27] = saved_tty.c_cc[27];
      cur_term->Nttyb.c_cc[31] = saved_tty.c_cc[31];
      cur_term->Nttyb.c_ispeed = saved_tty.c_ispeed;
      cur_term->Nttyb.c_ospeed = saved_tty.c_ospeed;
      tcsetattr( fileno( stdout ), 1, &saved_tty.c_iflag );
      waiting = 0;
      nl( );
      LYrefresh( );
    }
  }
  return;
}
void stop_curses( void )
{
  if ( LYCursesON )
  {
    FreeCachedStyles( );
    echo( );
  }
  if ( LYCursesON == 1 )
  {
    lynx_nl2crlf( 1 );
    lynx_enable_mouse( 0 );
    if ( LYscreen || lynx_called_initscr )
      endwin( );
  }
  fflush( stdout );
  fflush( stderr );
  LYCursesON = 0;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "stop_curses: done.\n" );
  }
  signal( 2, 0 );
  return;
}
BOOLEAN setup( char *terminal )
{
  char *term_putenv = 0;
  char *buffer = 0;
  char *cp = LYgetXDisplay( );
  if ( cp )
    HTSACopy( &x_display, cp );
  else
  if ( x_display )
  {
    free( x_display );
    x_display = 0;
  }
  if ( terminal )
  {
    HTSprintf0( &term_putenv, "TERM=%.106s", terminal );
    putenv( term_putenv );
  }
  if ( dumbterm( LYGetEnv( "TERM" ) ) )
  {
    printf( "\n\n  %s\n\n", gettext( "Your Terminal type is unknown!" ) );
    printf( "  %s [vt100] ", gettext( "Enter a terminal type:" ) );
    if ( LYSafeGets( &buffer, stdin ) )
    {
      LYTrimLeading( buffer );
      LYTrimTrailing( buffer );
    }
    if ( buffer == 0 || buffer[0] == 0 )
      HTSACopy( &buffer, "vt100" );
    HTSprintf0( &term_putenv, "TERM=%.106s", buffer );
    if ( buffer )
    {
      free( buffer );
      buffer = 0;
    }
    putenv( term_putenv );
    printf( "\n%s %s\n", gettext( "TERMINAL TYPE IS SET TO" ), LYGetEnv( "TERM" ) );
    LYSleepMsg( );
  }
  start_curses( );
  if ( strncmp( ttytype, "sun", 3 ) == 0 )
    LYnoVideo( 2 );
  LYlines = LYscreenHeight( );
  LYcols = LYscreenWidth( );
  return 1;
}
int dumbterm( char *terminal )
{
  int dumb = 0;
  if ( terminal == 0 || strcasecomp( terminal, "network" ) == 0 || strcasecomp( terminal, "unknown" ) == 0 || strcasecomp( terminal, "dialup" ) == 0 || strcasecomp( terminal, "dumb" ) == 0 || strcasecomp( terminal, "switch" ) == 0 || strcasecomp( terminal, "ethernet" ) == 0 )
  {
    dumb = 1;
  }
  return dumb;
}
void LYpaddstr( WINDOW *the_window, int width, char *the_string )
{
  int y, x;
  int actual = strlen( the_string );
  y = -1;
  x = -1;
  if ( LYcols - ( LYShowScrollbar != 0 ) < x + width )
    width = LYcols - ( LYShowScrollbar != 0 ) - x;
  if ( width < actual )
    actual = width;
  LYwaddnstr( the_window, the_string, actual );
  width -= actual;
  while ( width += -1, ( width > 0 ) & 255 )
  {
    waddnstr( the_window, " ", -1 );
  }
  return;
}
void LYsubwindow( WINDOW *param )
{
  if ( param )
  {
    my_subwindow = param;
    keypad( my_subwindow, 1 );
    curses_w_style( my_subwindow, s_menu_bg, 1 );
  {
    long b = LYgetattrs( my_subwindow );
    wbkgd( my_subwindow, b | 32 );
    curses_w_style( my_subwindow, s_menu_bg, 0 );
    scrollok( my_subwindow, 1 );
  }
  }
  else
  {
    wtouchln( LYwin, 0, -1, 1 );
    delwin( my_subwindow );
    my_subwindow = 0;
  }
  return;
}
WINDOW *LYtopwindow( void )
{
  return LYwin;
}
WINDOW *LYstartPopup( int *top_y, int *left_x, int *height, int *width )
{
  WINDOW *form_window = 0;
  if ( left_x[0] > 0 && width[0] + left_x[0] + 4 < LYcols - ( LYShowScrollbar != 0 ) )
  {
    form_window = newwin( height[0], width[0] + 4, top_y[0], left_x[0] + -1 );
  }
  if ( form_window == 0 )
  {
    if ( ( LYcols - ( LYShowScrollbar != 0 ) ) + -4 < width[0] )
    {
      width[0] = ( LYcols - ( LYShowScrollbar != 0 ) ) + -4;
      left_x[0] = 1;
    }
    else
    {
      left_x[0] = ( ( LYcols - ( LYShowScrollbar != 0 ) ) + -4 ) - width[0];
      if ( left_x[0] <= 0 )
        left_x[0] = 1;
    }
    form_window = newwin( height[0], width[0] + 4, top_y[0], left_x[0] + -1 );
  }
  if ( form_window == 0 )
  {
    HTAlert( gettext( "Unable to create popup window!" ) );
  }
  LYsubwindow( form_window );
  return form_window;
}
void LYstartTargetEmphasis( void )
{
  if ( s_whereis != -1 )
  {
    curses_style( s_whereis, 1 );
  }
  else
  {
    lynx_start_bold( );
    lynx_start_reverse( );
    lynx_start_underline( );
  }
  return;
}
void LYstopTargetEmphasis( void )
{
  if ( s_whereis != -1 )
  {
    curses_style( s_whereis, 0 );
  }
  else
  {
    lynx_stop_underline( );
    lynx_stop_reverse( );
    lynx_stop_bold( );
  }
  return;
}
void LYtouchline( int row )
{
  int edx;
  wtouchln( LYwin, row, ebp_16, ebp_16 );
  return;
}
void LYwaddnstr( WINDOW *w, char *src, size_t len )
{
  int y0 = -1, x0 = -1;
  int y, x;
  size_t inx;
  if ( LYuseCursesPads && w == LYwin && LYshiftWin == 0 && LYwideLines == 0 && LYcols - ( LYShowScrollbar != 0 ) - x0 < (int)len && x0 < LYcols - ( LYShowScrollbar != 0 ) )
  {
    WINDOW *sub = derwin( LYwin, LYlines, LYcols - ( LYShowScrollbar != 0 ), 0, 0 );
    if ( sub )
    {
      wmove( sub, y0, x0 );
      LYwideLines = 1;
      LYwaddnstr( sub, src, len );
      y0 = -1;
      x0 = -1;
      delwin( sub );
      wmove( LYwin, y0, x0 );
    }
    LYwideLines = 0;
  }
  else
  {
    if ( WWW_TraceFlag )
    {
      y = -1;
      x = -1;
      if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
      {
        fprintf( TraceFP( ), "[%2d,%2d] LYwaddnstr(%.*s, %u)\n", y, x, (int)len, src, len );
      }
    }
    y0 = -1;
    x0 = -1;
    inx = 0;
    for ( ; inx < len; inx++ )
    {
      if ( src[ inx ] == '\t' )
      {
        y = -1;
        x = -1;
        while ( x++, ( x - x0 ) & 7 )
        {
          waddch( w, 32 );
        }
        waddch( w, 32 );
      }
      else
        waddch( w, src[ inx ] );
      // inx++;
    }
  }
  return;
}
int LYstrExtent( char *string, int len, int maxCells )
{
  static WINDOW *fake_win;
  static int fake_max;
  int result = 0;
  int used;
  if ( len < 0 )
  {
    used = strlen( string );
  }
  else
    used = len;
  result = used;
  if ( used > 0 && lynx_called_initscr )
  {
    int n;
    if ( fake_max < maxCells )
    {
      fake_max = ( maxCells + 1 ) * 2;
      if ( fake_win )
      {
        delwin( fake_win );
        fake_win = 0;
      }
    }
    if ( fake_win == 0 )
    {
      fake_win = newwin( 2, fake_max, 0, 0 );
    }
    if ( fake_win )
    {
      int new_x = 0;
      int new_y = 0;
      result = 0;
      wmove( fake_win, 0, 0 );
      n = 0;
      for ( ; n < used; n++ )
      {
        if ( string[ n ] && ( string[ n ] <= 2 || 8 < string[ n ] ) )
        {
          waddch( fake_win, string[ n ] );
          new_y = -1;
          new_x = -1;
          if ( new_y <= 0 && new_x <= maxCells )
            result = new_x;
        }
        // n++;
      }
    }
  }
  if ( maxCells < result )
  {
    result = maxCells;
  }
  return result;
}
int LYstrExtent2( char *string, int len )
{
  return LYstrExtent( string, len, len << 3 );
}
int LYstrCells( char *string )
{
  return LYstrExtent2( string, strlen( string ) );
}
int LYscreenHeight( void )
{
  int eax;
  int result = LINES;
  if ( result <= 0 )
  {
    result = 24;
  }
  return result;
}
int LYscreenWidth( void )
{
  int eax;
  int result = COLS;
  if ( result <= 0 )
  {
    result = 80;
  }
  return result;
}
void LYnormalColor( void )
{
  if ( stdscr != LYwin )
  {
    int color = displayStyles[128].color;
    if ( color >= 0 )
    {
      wbkgd( LYwin, color | 32 );
      LYrefresh( );
    }
  }
  return;
}
void LYclear( void )
{
  wclear( LYwin );
  LYnormalColor( );
  return;
}
void LYclrtoeol( void )
{
  wclrtoeol( LYwin );
  return;
}
void LYerase( void )
{
  werase( LYwin );
  LYnormalColor( );
  return;
}
void LYmove( int y, int x )
{
  int eax;
  wmove( LYwin, y, x );
  return;
}
void LYrefresh( void )
{
  if ( stdscr != LYwin )
  {
    int y = -1, x = -1;
    if ( LYcols - ( LYShowScrollbar != 0 ) < x )
      x = LYcols - ( LYShowScrollbar != 0 );
    wmove( stdscr, y, x );
    wnoutrefresh( stdscr );
    pnoutrefresh( LYwin, 0, LYshiftWin, 0, 0, LYlines, LYscreenWidth( ) + -1 );
    if ( my_subwindow )
    {
      wtouchln( my_subwindow, 0, -1, 1 );
      wnoutrefresh( my_subwindow );
    }
    doupdate( );
  }
  else
  {
    wrefresh( stdscr );
  }
  return;
}
void lynx_force_repaint( void )
{
  clearok( curscr, 1 );
  return;
}
void lynx_start_title_color( void )
{
  return;
}
void lynx_stop_title_color( void )
{
  return;
}
void lynx_start_link_color( int flag, int pending )
{
  if ( flag )
  {
    lynx_start_reverse( );
    if ( lynx_has_color && LYShowColor > 1 )
    {
      lynx_start_underline( );
    }
  }
  else
  {
    lynx_start_bold( );
    if ( pending )
    {
      lynx_start_underline( );
    }
  }
  return;
}
void lynx_stop_link_color( int flag, int pending )
{
  curses_style( flag == 1 ? s_alink : s_a, 0 );
  return;
}
void lynx_stop_target_color( void )
{
  lynx_stop_underline( );
  lynx_stop_reverse( );
  lynx_stop_bold( );
  return;
}
void lynx_start_target_color( void )
{
  lynx_start_bold( );
  lynx_start_reverse( );
  lynx_start_underline( );
  return;
}
void lynx_start_status_color( void )
{
  if ( lynx_has_color && LYShowColor > 1 )
  {
    lynx_set_color( 2 );
  }
  else
  {
    lynx_start_reverse( );
  }
  return;
}
void lynx_stop_status_color( void )
{
  if ( lynx_has_color && LYShowColor > 1 )
  {
    lynx_set_color( 0 );
  }
  else
  {
    lynx_stop_reverse( );
  }
  return;
}
void lynx_start_h1_color( void )
{
  if ( bold_H1 || bold_headers )
  {
    lynx_start_bold( );
  }
  return;
}
void lynx_stop_h1_color( void )
{
  if ( bold_H1 || bold_headers )
  {
    lynx_stop_bold( );
  }
  return;
}
void lynx_start_prompt_color( void )
{
  lynx_start_reverse( );
  return;
}
void lynx_stop_prompt_color( void )
{
  lynx_stop_reverse( );
  return;
}
void lynx_start_radio_color( void )
{
  lynx_start_bold( );
  return;
}
void lynx_stop_radio_color( void )
{
  lynx_stop_bold( );
  return;
}
void lynx_stop_all_colors( void )
{
  lynx_stop_underline( );
  lynx_stop_reverse( );
  lynx_stop_bold( );
  return;
}
void lynx_start_bold( void )
{
  wattr_on( LYwin, 2097152, 0 );
  return;
}
void lynx_start_reverse( void )
{
  wattr_on( LYwin, 262144, 0 );
  return;
}
void lynx_start_underline( void )
{
  wattr_on( LYwin, 131072, 0 );
  return;
}
void lynx_stop_bold( void )
{
  wattr_off( LYwin, 2097152, 0 );
  return;
}
void lynx_stop_reverse( void )
{
  wattr_off( LYwin, 262144, 0 );
  return;
}
void lynx_stop_underline( void )
{
  wattr_off( LYwin, 131072, 0 );
  return;
}
void LYSetDisplayLines( void )
{
  if ( no_title == 0 )
  {
    if ( user_mode == 0 )
    {
      display_lines = LYlines + -4;
    }
    else
    {
      display_lines = LYlines + -2;
    }
  }
  else
  if ( user_mode == 0 )
  {
    display_lines = LYlines + -3;
  }
  else
  {
    display_lines = LYlines + -1;
  }
  return;
}
void LYstowCursor( WINDOW *win, int row, int col )
{
  if ( LYShowCursor )
    wmove( win, row, col );
  else
    LYmove( LYlines + -1, ( LYcols - ( LYShowScrollbar != 0 ) ) + -1 );
  wrefresh( win );
  return;
}
long LYgetattrs( WINDOW *win )
{
  attr_t result = 0;
  short pair = 0;
  result = win->_attrs;
  pair = ( win->_attrs & 65280 ) >> 8;
  return result;
}
#if 0
#endif
