#include "menu.c.h"
static void set_menu_frame( void );
static int mEsc( char c );
static int mEscB( char c );
static int mEscD( char c );
static int mNull( char c );
static int mSelect( char c );
static int mDown( char c );
static int mUp( char c );
static int mLast( char c );
static int mTop( char c );
static int mNext( char c );
static int mPrev( char c );
static int mFore( char c );
static int mBack( char c );
static int mLineU( char c );
static int mLineD( char c );
static int mOk( char c );
static int mCancel( char c );
static int mClose( char c );
static int mSusp( char c );
static int menuForwardSearch( Menu *menu, char *str, int from );
static int menu_search_forward( Menu *menu, int from );
static int mSrchF( char c );
static int menuBackwardSearch( Menu *menu, char *str, int from );
static int menu_search_backward( Menu *menu, int from );
static int mSrchB( char c );
static int menu_search_next_previous( Menu *menu, int from, int reverse );
static int mSrchN( char c );
static int mSrchP( char c );
static int mMouse_scroll_line( void );
static int process_mMouse( int btn, int x, int y );
static int mMouse( char c );
static int gpm_process_menu_mouse( Gpm_Event *event, void *data );
static void initSelectMenu( void );
static void smChBuf( void );
static int smDelBuf( char c );
static void initSelTabMenu( void );
static void smChTab( void );
static int smDelTab( char c );
static void interpret_menu( FILE *mf );
static int lmGoto( char c );
static int lmSelect( char c );
static int X_Mouse_Selection;
static char **FRAME;
static int FRAME_WIDTH;
static int graph_mode;
static int (*MenuKeymap[128])( char  ) = { &mNull, &mTop, &mPrev, &mClose, &mNull, &mLast, &mNext, &mNull, &mCancel, &mNull, &mOk, &mNull, &mNull, &mOk, &mDown, &mNull, &mUp, &mNull, &mSrchB, &mSrchF, &mNull, &mNull, &mNext, &mNull, &mNull, &mNull, &mSusp, &mEsc, &mNull, &mNull, &mNull, &mNull, &mOk, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mSrchF, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mSrchB, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mLineU, &mLineD, &mNull, &mNull, &mSrchP, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mCancel, &mNull, &mDown, &mUp, &mOk, &mNull, &mSrchN, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mCancel,  };
static int (*MenuEscKeymap[128])( char  ) = { &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mEscB, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mEscB, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mPrev, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull,  };
static int (*MenuEscBKeymap[128])( char  ) = { &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mUp, &mDown, &mOk, &mCancel, &mClose, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mClose, &mMouse, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull,  };
static int (*MenuEscDKeymap[128])( char  ) = { &mNull, &mNull, &mClose, &mNull, &mNull, &mBack, &mFore, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mClose, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull, &mNull,  };
static Menu SelectMenu;
static int SelectV;
static Menu SelTabMenu;
static int SelTabV;
static Menu MainMenu;
static wc_ces MainMenuCharset = 256;
static int MainMenuEncode;
static MenuItem MainMenuItem[21] = { { 4, " Back         (b) ", 0, 0, &backBf, 0, "b", 0,  }
, { 8, " Select Buffer(s) ", 0, 0, 0, &SelectMenu, "s", 0,  }
, { 8, " Select Tab   (t) ", 0, 0, 0, &SelTabMenu, "tT", 0,  }
, { 4, " View Source  (v) ", 0, 0, &vwSrc, 0, "vV", 0,  }
, { 4, " Edit Source  (e) ", 0, 0, &editBf, 0, "eE", 0,  }
, { 4, " Save Source  (S) ", 0, 0, &svSrc, 0, "S", 0,  }
, { 4, " Reload       (r) ", 0, 0, &reload, 0, "rR", 0,  }
, { 1, " ---------------- ", 0, 0, &nulcmd, 0, "", 0,  }
, { 4, " Go Link      (a) ", 0, 0, &followA, 0, "a", 0,  }
, { 4, "   on New Tab (n) ", 0, 0, &tabA, 0, "nN", 0,  }
, { 4, " Save Link    (A) ", 0, 0, &svA, 0, "A", 0,  }
, { 4, " View Image   (i) ", 0, 0, &followI, 0, "i", 0,  }
, { 4, " Save Image   (I) ", 0, 0, &svI, 0, "I", 0,  }
, { 4, " View Frame   (f) ", 0, 0, &rFrame, 0, "fF", 0,  }
, { 1, " ---------------- ", 0, 0, &nulcmd, 0, "", 0,  }
, { 4, " Bookmark     (B) ", 0, 0, &ldBmark, 0, "B", 0,  }
, { 4, " Help         (h) ", 0, 0, &ldhelp, 0, "hH", 0,  }
, { 4, " Option       (o) ", 0, 0, &ldOpt, 0, "oO", 0,  }
, { 1, " ---------------- ", 0, 0, &nulcmd, 0, "", 0,  }
, { 4, " Quit         (q) ", 0, 0, &qquitfm, 0, "qQ", 0,  }
, { 0, "", 0, 0, &nulcmd, 0, "", 0,  }
,  };
static MenuList *w3mMenuList;
static Menu *CurrentMenu;
static char *SearchString;
int (*menuSearchRoutine)( Menu *, char *, int  );
static char lmKeys[22] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'i', 'm', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',  };
static char lmKeys2[34] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'L', 'M', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',  };
void new_menu( Menu *menu, MenuItem *item )
{
  int i, l;
  char *p;
  menu->cursorX = 0;
  menu->cursorY = 0;
  menu->x = 0;
  menu->y = 0;
  menu->nitem = 0;
  menu->item = item;
  menu->initial = 0;
  menu->select = 0;
  menu->offset = 0;
  menu->active = 0;
  if ( item == 0 )
  {
  }
  else
  {
    i = 0;
    for ( ; item[ i ].type != 0; i++ )
    {
      //i++;
    }
    menu->height = menu->nitem = i;
    i = 0;
    for ( ; i <= 127; i++ )
    {
      menu->keymap[ i ] = MenuKeymap[ i ];
      //i++;
    }
    menu->width = 0;
    i = 0;
    for ( ; i < menu->nitem; i++ )
    {
      p = item[ i ].keys;
      if ( p != 0 )
      {
        for ( ; ( p[0] & 255 ) != 0; p++ )
        {
          if ( ( MYCTYPE_MAP[ p[0] ] & 17 ) != 0 )
          {
            menu->keymap[ p[0] ] = &mSelect;
            menu->keyselect[ p[0] ] = i;
          }
          //p++;
        }
      }
      l = wtf_strwidth( (wc_uchar*)item[ i ].label );
      if ( menu->width < l )
        menu->width = l;
      //i++;
    }
  }
  return;
}
void geom_menu( Menu *menu, int x, int y, int mselect )
{
  int win_x, win_y, win_w, win_h;
  menu->select = mselect;
  if ( menu->width % FRAME_WIDTH != 0 )
    menu->width = FRAME_WIDTH * ( ( menu->width / FRAME_WIDTH ) + 1 );
  win_x = menu->x - FRAME_WIDTH;
  win_w = menu->width + ( FRAME_WIDTH * 2 );
  if ( COLS < win_x + win_w )
    win_x = COLS - win_w;
  if ( win_x < 0 )
  {
    win_x = 0;
    if ( COLS < win_w )
    {
      menu->width = COLS + ( FRAME_WIDTH * -2 );
      menu->width -= menu->width % FRAME_WIDTH;
      win_w = menu->width + ( FRAME_WIDTH * 2 );
    }
  }
  menu->x = win_x + FRAME_WIDTH;
  win_y = menu->y - mselect - 1;
  win_h = menu->height + 2;
  if ( LINES - 1 < win_y + win_h )
    win_y = LINES - 1 - win_h;
  if ( win_y < 0 )
  {
    win_y = 0;
    if ( LINES - 1 < win_y + win_h )
    {
      win_h = LINES - 1 - win_y;
      menu->height = win_h - 2;
      if ( menu->height <= mselect )
      {
        menu->offset = ( mselect - menu->height ) + 1;
      }
    }
  }
  menu->y = win_y + 1;
  return;
}
void draw_all_menu( Menu *menu )
{
  if ( menu->parent != 0 )
    draw_all_menu( (int)( &menu ) );
  draw_menu( menu );
  return;
}
void draw_menu( Menu *menu )
{
  int x = menu->x - FRAME_WIDTH, y, w = menu->width + ( FRAME_WIDTH * 2 );
  int i, j;
  y = menu->y - 1;
  if ( menu->offset == 0 )
  {
    if ( graph_mode != 0 )
      graphstart( );
    move( y, x );
    addstr( FRAME[3] );
    i = FRAME_WIDTH;
    for ( ; i < w - FRAME_WIDTH; i += FRAME_WIDTH )
    {
      move( y, x + i );
      addstr( FRAME[10] );
      //i += FRAME_WIDTH;
    }
    move( y, x + i );
    addstr( FRAME[6] );
    if ( graph_mode != 0 )
    {
      graphend( );
      while ( j < menu->height )
      {
        y++;
        if ( graph_mode != 0 )
          graphstart( );
        move( y, x );
        addstr( FRAME[5] );
        if ( graph_mode != 0 )
          graphend( );
        draw_menu_item( menu, menu->offset + j );
        if ( graph_mode != 0 )
          graphstart( );
        move( y, ( x + w ) - FRAME_WIDTH );
        addstr( FRAME[5] );
        if ( graph_mode != 0 )
          graphend( );
        j++;
      }
      y++;
      if ( menu->nitem == menu->offset + menu->height )
      {
        if ( graph_mode != 0 )
          graphstart( );
        move( y, x );
        addstr( FRAME[9] );
        i = FRAME_WIDTH;
        for ( ; i < w - FRAME_WIDTH; i += FRAME_WIDTH )
        {
          move( y, x + i );
          addstr( FRAME[10] );
          //i += FRAME_WIDTH;
        }
        move( y, x + i );
        addstr( FRAME[12] );
        if ( graph_mode != 0 )
        {
          graphend( );
        }
      }
      else
      {
        if ( graph_mode != 0 )
          graphstart( );
        move( y, x );
        addstr( FRAME[5] );
        if ( graph_mode != 0 )
          graphend( );
        i = FRAME_WIDTH;
        for ( ; i < w - FRAME_WIDTH; i++ )
        {
          move( y, x + i );
          addstr( " " );
          //i++;
        }
        if ( graph_mode != 0 )
          graphstart( );
        move( y, x + i );
        addstr( FRAME[5] );
        if ( graph_mode != 0 )
          graphend( );
        i = FRAME_WIDTH * ( ( ( w / 2 ) - 1 ) / FRAME_WIDTH );
        move( y, x + i );
        addstr( ":" );
      }
      return;
    }
  }
  else
  {
    if ( graph_mode != 0 )
      graphstart( );
    move( y, x );
    addstr( FRAME[5] );
    if ( graph_mode != 0 )
      graphend( );
    i = FRAME_WIDTH;
    for ( ; w - FRAME_WIDTH <= i; i++ )
    {
      move( y, x + i );
      addstr( " " );
      //i++;
    }
  }
  j = 0;
}
void draw_menu_item( Menu *menu, int mselect )
{
  move( ( menu->y + mselect ) - menu->offset, menu->x );
  addnstr_sup( menu->item[ mselect ].label, menu->width );
  return;
}
int select_menu( Menu *menu, int mselect )
{
  int eax;
  if ( mselect < 0 || menu->nitem <= mselect )
  {
    return menu->select;
  }
  else
  {
    if ( mselect < menu->offset )
      up_menu( menu, menu->offset - mselect );
    else
    if ( menu->offset + menu->height <= mselect )
      down_menu( menu, ( mselect - menu->offset - menu->height ) + 1 );
    if ( menu->offset <= menu->select && menu->select < menu->offset + menu->height )
      draw_menu_item( menu, menu->select );
    menu->select = mselect;
    standout( );
    draw_menu_item( menu, menu->select );
    standend( );
    move( ( menu->y + mselect ) - menu->offset, menu->x );
    toggle_stand( );
    refresh( );
    menu->select/*error:'i'*/ = menu->select;
    return menu->select;
  }
}
void goto_menu( Menu *menu, int mselect, int down )
{
  int select_in;
  if ( menu->nitem <= mselect )
    mselect = menu->nitem - 1;
  else
  if ( mselect < 0 )
    mselect = 0;
  select_in = mselect;
  do
  {
    if ( menu->item[ mselect ].type == 1 )
    {
      if ( down < 1 )
      {
        if ( down < 0 )
        {
          mselect--;
          if ( mselect >= 0 )
            continue;
          else
          {
            up_menu( menu, menu->select - select_in );
            mselect = menu->select;
            select_menu( menu, mselect );
          }
        }
        else
        {
          return;
        }
      }
      else
      {
        mselect++;
      }
    }
  }
  while ( menu->nitem <= mselect );
  down_menu( menu, select_in - menu->select );
  mselect = menu->select;
}
void up_menu( Menu *menu, int n )
{
  if ( n >= 0 )
  {
    if ( menu->offset == 0 )
    {
    }
    else
    {
      menu->offset -= n;
      if ( menu->offset < 0 )
        menu->offset = 0;
      draw_menu( menu );
    }
  }
  else
  {
  }
  return;
}
void down_menu( Menu *menu, int n )
{
  if ( n >= 0 )
  {
    if ( menu->nitem == menu->offset + menu->height )
    {
    }
    else
    {
      menu->offset += n;
      if ( menu->nitem < menu->offset + menu->height )
        menu->offset = menu->nitem - menu->height;
      draw_menu( menu );
    }
  }
  else
  {
  }
  return;
}
int action_menu( Menu *menu )
{
  char c;
  int mselect;
  MenuItem item;
  if ( menu->active == 0 )
  {
    if ( menu->parent != 0 )
      menu->parent->active = 0;
      return 0;
    else
    {
      return 0;
    }
  }
  else
  {
    draw_all_menu( menu );
    select_menu( menu, menu->select );
  }
}
void popup_menu( Menu *parent, Menu *menu )
{
  int active = 1;
  if ( menu->item != 0 )
  {
    if ( menu->nitem == 0 )
    {
    }
    else
    if ( menu->active != 0 )
    {
    }
    else
    {
      &menu = parent;
      menu->select = menu->initial;
      menu->offset = 0;
      menu->active = 1;
      if ( parent != 0 )
      {
        menu->cursorX = parent->cursorX;
        menu->cursorY = parent->cursorY;
        guess_menu_xy( parent, menu->width, &menu->x, &menu->y );
      }
      geom_menu( menu, menu->x, menu->y, menu->select );
      CurrentMenu = menu;
      while ( active != 0 )
      {
        active = action_menu( CurrentMenu );
        displayBuffer( CurrentTab->currentBuffer, 1 );
      }
      menu->active = 0;
      CurrentMenu = parent;
      if ( CurrentMenu == 0 )
      {
      }
    }
  }
  else
  {
  }
  return;
}
void guess_menu_xy( Menu *parent, int width, int *x, int *y )
{
  x[0] = ( FRAME_WIDTH + parent->width + parent->x ) - 1;
  if ( COLS < FRAME_WIDTH + x[0] + width )
  {
    x[0] = COLS - width - FRAME_WIDTH;
    if ( x[0] < parent->x + ( parent->width / 2 ) && COLS / 2 < parent->x + ( parent->width / 2 ) )
    {
      x[0] = ( parent->x - width - FRAME_WIDTH ) + 1;
    }
  }
  y[0] = ( parent->select + parent->y ) - parent->offset;
  return;
}
void new_option_menu( Menu *menu, char **label, int *variable, void (*func)( void ) )
{
  int i, nitem;
  char **p;
  MenuItem *item;
  if ( label != 0 )
  {
    if ( label[0] == 0 )
    {
    }
    else
    {
      i = 0;
      p = label;
      for ( ; p[0] != 0; p++ )
      {
        i++;
        //p++;
      }
      nitem = i;
      item = GC_malloc( ( nitem * 32 ) + 32 );
      i = 0;
      p = label;
      while ( 1 )
      {
        if ( i < nitem )
        {
          if ( func == 0 )
            item[ i ].type = 2;
        }
        else
        {
          item[ nitem ].type = 0;
          new_menu( menu, item );
        }
        item[ i ].type = 6;
      }
    }
  }
  else
  {
  }
  return;
}
void set_menu_frame( void )
{
  if ( graph_ok( ) != 0 )
  {
    graph_mode = 1;
    FRAME_WIDTH = 1;
    FRAME = graph_symbol;
  }
  else
  {
    graph_mode = 0;
    FRAME_WIDTH = 0;
    FRAME = get_symbol( DisplayCharset, &FRAME_WIDTH );
    if ( ( WcOption.use_wide & 255 ) == 0 )
    {
      FRAME_WIDTH = 1;
    }
  }
  return;
}
int mEsc( char c )
{
  c = do_getch( );
  return MenuEscKeymap[ c ]( c );
}
int mEscB( char c )
{
  c = do_getch( );
  return ( MYCTYPE_MAP[ c ] & 8 ) == 0 ? MenuEscBKeymap[ c ]( c ) : mEscD( c );
}
int mEscD( char c )
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
    MenuEscDKeymap[ d ]( c );
  }
  return -1;
}
int mNull( char c )
{
  return -1;
}
int mSelect( char c )
{
  return ( MYCTYPE_MAP[ c ] & 17 ) == 0 ? -1 : select_menu( CurrentMenu, CurrentMenu->keyselect[ c ] );
}
int mDown( char c )
{
  if ( CurrentMenu->nitem - 1 <= CurrentMenu->select )
  {
  }
  else
  {
    goto_menu( CurrentMenu, CurrentMenu->select + 1, 1 );
  }
  return -1;
}
int mUp( char c )
{
  if ( CurrentMenu->select < 1 )
  {
  }
  else
  {
    goto_menu( CurrentMenu, CurrentMenu->select - 1, -1 );
  }
  return -1;
}
int mLast( char c )
{
  goto_menu( CurrentMenu, CurrentMenu->nitem - 1, -1 );
  return -1;
}
int mTop( char c )
{
  goto_menu( CurrentMenu, 0, 1 );
  return -1;
}
int mNext( char c )
{
  int mselect = CurrentMenu->select + CurrentMenu->height;
  if ( CurrentMenu->nitem <= mselect )
  {
    mLast( c );
  }
  down_menu( CurrentMenu, CurrentMenu->height );
  goto_menu( CurrentMenu, mselect, -1 );
  return -1;
}
int mPrev( char c )
{
  int mselect = CurrentMenu->select - CurrentMenu->height;
  if ( mselect < 0 )
  {
    mTop( c );
  }
  up_menu( CurrentMenu, CurrentMenu->height );
  goto_menu( CurrentMenu, mselect, 1 );
  return -1;
}
int mFore( char c )
{
  if ( CurrentMenu->nitem - 1 <= CurrentMenu->select )
  {
  }
  else
  {
    goto_menu( CurrentMenu, ( CurrentMenu->select + CurrentMenu->height ) - 1, CurrentMenu->height + 1 );
  }
  return -1;
}
int mBack( char c )
{
  if ( CurrentMenu->select < 1 )
  {
  }
  else
  {
    goto_menu( CurrentMenu, ( CurrentMenu->select - CurrentMenu->height ) + 1, ~CurrentMenu->height );
  }
  return -1;
}
int mLineU( char c )
{
  int mselect = CurrentMenu->select;
  if ( CurrentMenu->nitem <= mselect )
  {
    mLast( c );
  }
  if ( CurrentMenu->nitem <= CurrentMenu->offset + CurrentMenu->height )
    mselect++;
  else
  {
    down_menu( CurrentMenu, 1 );
    if ( mselect < CurrentMenu->offset )
      mselect++;
  }
  goto_menu( CurrentMenu, mselect, 1 );
  return -1;
}
int mLineD( char c )
{
  int mselect = CurrentMenu->select;
  if ( mselect < 1 )
  {
    mTop( c );
  }
  if ( CurrentMenu->offset < 1 )
    mselect--;
  else
  {
    up_menu( CurrentMenu, 1 );
    if ( CurrentMenu->offset + CurrentMenu->height <= mselect )
      mselect--;
  }
  goto_menu( CurrentMenu, mselect, -1 );
  return -1;
}
int mOk( char c )
{
  int eax;
  int mselect = CurrentMenu->select;
  return CurrentMenu->item[ mselect ].type == 1 ? -1 : mselect;
}
int mCancel( char c )
{
  return -2;
}
int mClose( char c )
{
  return -3;
}
int mSusp( char c )
{
  susp( );
  draw_all_menu( CurrentMenu );
  select_menu( CurrentMenu, CurrentMenu->select );
  return -1;
}
int menuForwardSearch( Menu *menu, char *str, int from )
{
  int eax;
  int i;
  char *p = regexCompile( str, IgnoreCase );
  if ( p != 0 )
  {
    message( p, 0, 0 );
  }
  else
  {
    if ( from < 0 )
      from = 0;
    i = from;
    for ( ; i < menu->nitem; i++ )
    {
      if ( menu->item[ i ].type != 1 && regexMatch( menu->item[ i ].label, -1, 1 ) == 1 )
      {
        i/*error:'i'*/ = i;
        break;
      }
      else
      {
        //i++;
      }
    }
  }
  return -1;
}
int menu_search_forward( Menu *menu, int from )
{
  int eax;
  char *str = inputLineHistSearch( "Forward: ", 0, 16, TextHist, 0 );
  int found;
  if ( str != 0 && ( str[0] & 255 ) == 0 )
    str = SearchString;
  if ( str == 0 || ( str[0] & 255 ) == 0 )
  {
  }
  else
  {
    SearchString = str;
    str = conv_search_string( str, DisplayCharset );
    menuSearchRoutine = &menuForwardSearch;
    found = menuForwardSearch( menu, str, from + 1 );
    if ( WrapSearch != 0 && found == -1 )
    {
      found = menuForwardSearch( menu, str, 0 );
    }
    if ( found >= 0 )
    {
      found/*error:'i'*/ = found;
    }
    else
    {
      disp_message( "Not found", 1 );
    }
  }
  return found;
}
int mSrchF( char c )
{
  int mselect = menu_search_forward( CurrentMenu, CurrentMenu->select );
  if ( mselect >= 0 )
  {
    goto_menu( CurrentMenu, mselect, 1 );
  }
  return -1;
}
int menuBackwardSearch( Menu *menu, char *str, int from )
{
  int eax;
  int i;
  char *p = regexCompile( str, IgnoreCase );
  if ( p != 0 )
  {
    message( p, 0, 0 );
  }
  else
  {
    if ( menu->nitem <= from )
      from = menu->nitem - 1;
    i = from;
    for ( ; i >= 0; i-- )
    {
      if ( menu->item[ i ].type != 1 && regexMatch( menu->item[ i ].label, -1, 1 ) == 1 )
      {
        i/*error:'i'*/ = i;
        break;
      }
      else
      {
        //i--;
      }
    }
  }
  return -1;
}
int menu_search_backward( Menu *menu, int from )
{
  int eax;
  char *str = inputLineHistSearch( "Backward: ", 0, 16, TextHist, 0 );
  int found;
  if ( str != 0 && ( str[0] & 255 ) == 0 )
    str = SearchString;
  if ( str == 0 || ( str[0] & 255 ) == 0 )
  {
  }
  else
  {
    SearchString = str;
    str = conv_search_string( str, DisplayCharset );
    menuSearchRoutine = &menuBackwardSearch;
    found = menuBackwardSearch( menu, str, from - 1 );
    if ( WrapSearch != 0 && found == -1 )
    {
      found = menuBackwardSearch( menu, str, menu->nitem );
    }
    if ( found >= 0 )
    {
      found/*error:'i'*/ = found;
    }
    else
    {
      disp_message( "Not found", 1 );
    }
  }
  return found;
}
int mSrchB( char c )
{
  int mselect = menu_search_backward( CurrentMenu, CurrentMenu->select );
  if ( mselect >= 0 )
  {
    goto_menu( CurrentMenu, mselect, -1 );
  }
  return -1;
}
int menu_search_next_previous( Menu *menu, int from, int reverse )
{
  int eax;
  static int (*routine[2])( Menu *, char *, int  ) = { &menuForwardSearch, &menuBackwardSearch,  };
  int found;
  char *str;
  if ( menuSearchRoutine == 0 )
  {
    disp_message( "No previous regular expression", 1 );
  }
  else
  {
    str = conv_search_string( SearchString, DisplayCharset );
    if ( reverse != 0 )
      reverse = 1;
    if ( menuSearchRoutine == menuBackwardSearch )
      reverse ^= 1;
    from += reverse == 0 ? 1 : -1;
    found = routine[ reverse ]( menu, str, from );
    if ( WrapSearch != 0 && found == -1 )
    {
      found = routine[ reverse ]( menu, str, menu->nitem * reverse );
    }
    if ( found >= 0 )
    {
      found/*error:'i'*/ = found;
    }
    else
    {
      disp_message( "Not found", 1 );
    }
  }
  return found;
}
int mSrchN( char c )
{
  int mselect = menu_search_next_previous( CurrentMenu, CurrentMenu->select, 0 );
  if ( mselect >= 0 )
  {
    goto_menu( CurrentMenu, mselect, 1 );
  }
  return -1;
}
int mSrchP( char c )
{
  int mselect = menu_search_next_previous( CurrentMenu, CurrentMenu->select, 1 );
  if ( mselect >= 0 )
  {
    goto_menu( CurrentMenu, mselect, -1 );
  }
  return -1;
}
int mMouse_scroll_line( void )
{
  int eax;
  int i = 0;
  if ( relative_wheel_scroll != 0 )
    i = ( (/*HI*/int)( ( ( CurrentMenu->height * relative_wheel_scroll_ratio ) + 99 ) * 1374389535 ) >> 5 ) - ( ( ( CurrentMenu->height * relative_wheel_scroll_ratio ) + 99 ) >> 31 );
  else
    i = fixed_wheel_scroll_count;
  return i == 0 ? 1 : i;
}
int process_mMouse( int btn, int x, int y )
{
  static int press_btn = -1, press_x, press_y;
  Menu *menu;
  int mselect, i;
  char c = ' ';
  menu = CurrentMenu;
  if ( x < 0 || COLS <= x || y < 0 || LINES - 1 < y )
  {
    return -1;
  }
  else
  {
    if ( btn == 3 )
    {
      switch ( press_btn )
      {
      case 0:
      case 2:
        if ( x < menu->x - FRAME_WIDTH || FRAME_WIDTH + menu->width + menu->x <= x || y < menu->y - 1 || menu->height + menu->y + 1 <= y )
        {
          return -1;
        }
        else
        if ( ( menu->x - FRAME_WIDTH <= x && x < menu->x ) || ( menu->width + menu->x <= x && x < FRAME_WIDTH + menu->width + menu->x ) )
        {
          return -1;
        }
        else
        if ( y < press_y )
        {
          i = 0;
          for ( ; i < press_y - y; i++ )
          {
            mLineU( c );
            //i++;
          }
          return -1;
        }
        else
        if ( press_y < y )
        {
          i = 0;
          for ( ; i < y - press_y; i++ )
          {
            mLineD( c );
            //i++;
          }
          return -1;
        }
        else
        if ( y == menu->y - 1 )
        {
          mPrev( c );
          return -1;
        }
        else
        if ( y == menu->height + menu->y )
        {
          mNext( c );
          return -1;
        }
        else
        {
          mselect = menu->offset + ( y - menu->y );
          if ( menu->item[ mselect ].type == 1 )
          {
            return -1;
          }
          else
            select_menu( menu, mselect );
            return -1;
        }
        break;
      case 3:
        i = 0;
        for ( ; i < mMouse_scroll_line( ); i++ )
        {
          mLineD( c );
          //i++;
        }
        break;
        break;
      default:
        break;
      case 4:
        i = 0;
        for ( ; i < mMouse_scroll_line( ); i++ )
        {
          mLineU( c );
          //i++;
        }
        break;
      }
    }
    else
    if ( btn == 64 )
    {
      i = 0;
      for ( ; i < mMouse_scroll_line( ); i++ )
      {
        mLineD( c );
        //i++;
      }
    }
    else
    if ( btn == 65 )
    {
      i = 0;
      for ( ; i < mMouse_scroll_line( ); i++ )
      {
        mLineU( c );
        //i++;
      }
    }
    if ( btn != 3 || press_btn == -1 )
    {
      press_btn = btn;
      press_x = x;
      press_y = y;
    }
    else
      press_btn = -1;
  }
}
int mMouse( char c )
{
  int btn = do_getch( ) - 32, x = do_getch( ) - 33, y;
  if ( x < 0 )
    x += 256;
  y = do_getch( ) - 33;
  if ( y < 0 )
    y += 256;
  return process_mMouse( btn, x, y );
}
int gpm_process_menu_mouse( Gpm_Event *event, void *data )
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
    return -1;
  }
  x = event->x;
  y = event->y;
  X_Mouse_Selection = process_mMouse( btn, x - 1, y - 1 );
  return -1;
}
void popupMenu( int x, int y, Menu *menu )
{
  set_menu_frame( );
  initSelectMenu( );
  initSelTabMenu( );
  menu->cursorX = CurrentTab->currentBuffer->cursorX + CurrentTab->currentBuffer->rootX;
  menu->cursorY = CurrentTab->currentBuffer->cursorY + CurrentTab->currentBuffer->rootY;
  menu->x = x + FRAME_WIDTH + 1;
  menu->y = y + 2;
  popup_menu( 0, menu );
  return;
}
void mainMenu( int x, int y )
{
  popupMenu( x, y, &MainMenu );
  return;
}
void mainMn( void )
{
  Menu *menu = &MainMenu;
  char *data;
  int n;
  int x = CurrentTab->currentBuffer->cursorX + CurrentTab->currentBuffer->rootX;
  int y = CurrentTab->currentBuffer->cursorY + CurrentTab->currentBuffer->rootY;
  data = searchKeyData( );
  if ( data != 0 )
  {
    n = getMenuN( w3mMenuList, data );
    if ( n < 0 )
    {
      return;
    }
    menu = w3mMenuList[ n ].menu;
  }
  if ( mouse_action.in_action != 0 )
  {
    x = mouse_action.cursorX;
    y = mouse_action.cursorY;
  }
  popupMenu( x, y, menu );
}
void selMn( void )
{
  int x = CurrentTab->currentBuffer->cursorX + CurrentTab->currentBuffer->rootX;
  int y = CurrentTab->currentBuffer->cursorY + CurrentTab->currentBuffer->rootY;
  if ( mouse_action.in_action != 0 )
  {
    x = mouse_action.cursorX;
    y = mouse_action.cursorY;
  }
  popupMenu( x, y, &SelectMenu );
  return;
}
void initSelectMenu( void )
{
  int eax;
  static char *comment = " SPC for select / D for delete buffer ";
  int i, nitem, len = 0, l;
  Buffer *buf;
  Str str;
  char **label;
  char *p;
  SelectV = -1;
  i = 0;
  buf = CurrentTab->firstBuffer;
  for ( ; buf == 0; buf = buf->nextBuffer )
  {
    if ( CurrentTab->currentBuffer == buf )
      SelectV = i;
    i++;
    //buf = buf->nextBuffer;
  }
}
void smChBuf( void )
{
  int i;
  Buffer *buf;
  if ( SelectV >= 0 )
  {
    if ( SelectMenu.nitem <= SelectV )
    {
    }
    else
    {
      i = 0;
      buf = CurrentTab->firstBuffer;
      for ( ; i < SelectV; buf = buf->nextBuffer )
      {
        i++;
        //buf = buf->nextBuffer;
      }
      CurrentTab->currentBuffer = buf;
      buf = CurrentTab->firstBuffer;
      for ( ; buf != 0; buf = buf->nextBuffer )
      {
        if ( CurrentTab->currentBuffer == buf )
        {
        }
        else
        {
          deleteImage( buf );
          if ( clear_buffer != 0 )
          {
            tmpClearBuffer( buf );
          }
        }
        //buf = buf->nextBuffer;
      }
    }
  }
  else
  {
  }
  return;
}
int smDelBuf( char c )
{
  int i, x, y, mselect;
  Buffer *buf;
  if ( CurrentMenu->select < 0 || SelectMenu.nitem <= CurrentMenu->select )
  {
  }
  else
  {
    i = 0;
    buf = CurrentTab->firstBuffer;
    for ( ; i < CurrentMenu->select; buf = buf->nextBuffer )
    {
      i++;
      //buf = buf->nextBuffer;
    }
    if ( CurrentTab->currentBuffer == buf )
      CurrentTab->currentBuffer = buf->nextBuffer;
    CurrentTab->firstBuffer = deleteBuffer( CurrentTab->firstBuffer, buf );
    if ( CurrentTab->currentBuffer == 0 )
    {
      CurrentTab->currentBuffer = nthBuffer( CurrentTab->firstBuffer, i - 1 );
    }
    if ( CurrentTab->firstBuffer == 0 )
    {
      CurrentTab->currentBuffer = CurrentTab->firstBuffer = nullBuffer( );
    }
    x = CurrentMenu->x;
    y = CurrentMenu->y;
    mselect = CurrentMenu->select;
    initSelectMenu( );
    CurrentMenu->x = x;
    CurrentMenu->y = y;
    geom_menu( CurrentMenu, x, y, 0 );
    CurrentMenu->select = CurrentMenu->nitem - 2 <= mselect ? mselect : CurrentMenu->nitem - 2;
    displayBuffer( CurrentTab->currentBuffer, 1 );
    draw_all_menu( CurrentMenu );
    select_menu( CurrentMenu, CurrentMenu->select );
  }
  return -1;
}
void tabMn( void )
{
  int x = CurrentTab->currentBuffer->cursorX + CurrentTab->currentBuffer->rootX;
  int y = CurrentTab->currentBuffer->cursorY + CurrentTab->currentBuffer->rootY;
  if ( mouse_action.in_action != 0 )
  {
    x = mouse_action.cursorX;
    y = mouse_action.cursorY;
  }
  popupMenu( x, y, &SelTabMenu );
  return;
}
void initSelTabMenu( void )
{
  int eax;
  static char *comment = " SPC for select / D for delete tab ";
  int i, nitem, len = 0, l;
  TabBuffer *tab;
  Buffer *buf;
  Str str;
  char **label;
  char *p;
  SelTabV = -1;
  i = 0;
  tab = LastTab;
  for ( ; tab == 0; tab = tab->prevTab )
  {
    if ( tab == CurrentTab )
      SelTabV = i;
    i++;
    //tab = tab->prevTab;
  }
}
void smChTab( void )
{
  int i;
  TabBuffer *tab;
  Buffer *buf;
  if ( SelTabV >= 0 )
  {
    if ( SelTabMenu.nitem <= SelTabV )
    {
    }
    else
    {
      i = 0;
      tab = LastTab;
      for ( ; i < SelTabV && tab != 0; tab = tab->prevTab )
      {
        i++;
        //tab = tab->prevTab;
      }
      CurrentTab = tab;
      tab = LastTab;
      for ( ; tab != 0; tab = tab->prevTab )
      {
        if ( tab == CurrentTab )
        {
        }
        else
        {
          buf = tab->currentBuffer;
          deleteImage( buf );
          if ( clear_buffer != 0 )
          {
            tmpClearBuffer( buf );
          }
        }
        //tab = tab->prevTab;
      }
    }
  }
  else
  {
  }
  return;
}
int smDelTab( char c )
{
  int i, x, y, mselect;
  TabBuffer *tab;
  if ( CurrentMenu->select < 0 || SelTabMenu.nitem <= CurrentMenu->select )
  {
  }
  else
  {
    i = 0;
    tab = LastTab;
    for ( ; i < CurrentMenu->select && tab != 0; tab = tab->prevTab )
    {
      i++;
      //tab = tab->prevTab;
    }
    deleteTab( tab );
    x = CurrentMenu->x;
    y = CurrentMenu->y;
    mselect = CurrentMenu->select;
    initSelTabMenu( );
    CurrentMenu->x = x;
    CurrentMenu->y = y;
    geom_menu( CurrentMenu, x, y, 0 );
    CurrentMenu->select = CurrentMenu->nitem - 2 <= mselect ? mselect : CurrentMenu->nitem - 2;
    displayBuffer( CurrentTab->currentBuffer, 1 );
    draw_all_menu( CurrentMenu );
    select_menu( CurrentMenu, CurrentMenu->select );
  }
  return -1;
}
void optionMenu( int x, int y, char **label, int *variable, int initial, void (*func)( void ) )
{
  Menu menu;
  set_menu_frame( );
  new_option_menu( &menu, label, variable, func );
  menu.cursorX = COLS - 1;
  menu.cursorY = LINES - 1;
  menu.x = x;
  menu.y = y;
  menu.initial = initial;
  popup_menu( 0, &menu );
  return;
}
void interpret_menu( FILE *mf )
{
  Str line;
  char *p, *s;
  int in_menu = 0, nmenu = 0, nitem = 0, type;
  MenuItem *item = 0;
  wc_ces charset = SystemCharset;
  while ( feof( mf ) == 0 )
  {
    line = Strfgets( mf );
    Strchop( line );
    Strremovefirstspaces( line );
    if ( line->length == 0 )
    {
    }
    else
    {
      line = wc_Str_conv( line, charset, InnerCharset );
      p = line->ptr;
      s = getWord( &p );
      if ( s[0] == '#' )
      {
      }
      else
      {
        if ( in_menu != 0 )
        {
          type = setMenuItem( &item[ nitem ], s, p );
          if ( type == -1 )
          {
          }
          else
          {
            if ( type == 0 )
            {
              in_menu = 0;
            }
            else
            {
              nitem++;
              w3mMenuList[ nmenu ].item = item = GC_realloc( item, ( nitem * 32 ) + 32 );
              item[ nitem ].type = 0;
            }
          }
        }
        else
        {
          if ( strcmp( s, "menu" ) == 0 )
          {
            s = getQWord( &p );
            if ( ( s[0] & 255 ) == 0 )
            {
            }
            else
            {
              in_menu = 1;
              nmenu = getMenuN( w3mMenuList, s );
              if ( nmenu != -1 )
              {
                w3mMenuList[ nmenu ].item = GC_malloc( 32 );
              }
              else
              {
                nmenu = addMenuList( &w3mMenuList, s );
              }
              item = w3mMenuList[ nmenu ].item;
              nitem = 0;
              item[ nitem ].type = 0;
            }
          }
          else
          {
            if ( strcmp( s, "charset" ) != 0 && strcmp( s, "encoding" ) != 0 )
              continue;
            else
            {
              s = getQWord( &p );
              if ( ( s[0] & 255 ) == 0 )
              {
              }
              else
              {
                charset = wc_guess_charset( s, charset );
              }
            }
          }
        }
      }
    }
  }
  return;
}
void initMenu( void )
{
  FILE *mf;
  MenuList *list;
  w3mMenuList = GC_malloc( 36 );
  w3mMenuList->id = "Main";
  w3mMenuList->menu = &MainMenu;
  w3mMenuList->item = MainMenuItem;
  w3mMenuList[1].id = "Select";
  w3mMenuList[1].menu = &SelectMenu;
  w3mMenuList[1].item = 0;
  w3mMenuList[2].id = "SelectTab";
  w3mMenuList[2].menu = &SelTabMenu;
  w3mMenuList[2].item = 0;
  w3mMenuList[3].id = 0;
  if ( MainMenuEncode == 0 )
  {
    MenuItem *item;
    MainMenuCharset = SystemCharset;
    item = MainMenuItem;
    for ( ; item->type != 0; item++ )
    {
      item->label = *(int*)(wc_Str_conv( Strnew_charp( gettext( item->label ) ), MainMenuCharset, InnerCharset ));
      //item++;
    }
    MainMenuEncode = 1;
  }
  mf = fopen( confFile( "menu" ), "rt" );
  if ( mf != 0 )
  {
    interpret_menu( mf );
    fclose( mf );
  }
  mf = fopen( rcFile( "menu" ), "rt" );
  if ( mf != 0 )
  {
    interpret_menu( mf );
    fclose( mf );
  }
  list = w3mMenuList;
  for ( ; list->id == 0; list++ )
  {
    if ( list->item == 0 )
    {
      //list++;
    }
    else
      new_menu( list->menu, list->item );
      //list++;
  }
}
int setMenuItem( MenuItem *item, char *type, char *line )
{
  char *label, *func, *popup, *keys, *data;
  int f;
  int n;
  if ( type == 0 || ( type[0] & 255 ) == 0 )
  {
  }
  else
  {
    if ( strcmp( type, "end" ) == 0 )
    {
      item->type = 0;
    }
    else
    {
      if ( strcmp( type, "nop" ) == 0 )
      {
        item->type = 1;
        item->label = getQWord( &line );
      }
      else
      {
        if ( strcmp( type, "func" ) == 0 )
        {
          label = getQWord( &line );
          func = getWord( &line );
          keys = getQWord( &line );
          data = getQWord( &line );
          if ( ( func[0] & 255 ) == 0 )
          {
          }
          else
          {
            item->type = 4;
            item->label = label;
            f = getFuncList( func );
            item->func = w3mFuncList[ (unsigned char)( ( f < 0 ) ^ 1 ) ? 0 : f ].func;
            item->keys = keys;
            item->data = data;
          }
        }
        else
        {
          if ( strcmp( type, "popup" ) == 0 )
          {
            label = getQWord( &line );
            popup = getQWord( &line );
            keys = getQWord( &line );
            if ( ( popup[0] & 255 ) == 0 )
            {
            }
            else
            {
              item->type = 8;
              item->label = label;
              n = getMenuN( w3mMenuList, popup );
              if ( n == -1 )
              {
                n = addMenuList( &w3mMenuList, popup );
              }
              item->popup = w3mMenuList[ n ].menu;
              item->keys = keys;
            }
          }
          else
          {
          }
        }
      }
    }
  }
  return -1;
}
int addMenuList( MenuList **mlist, char *id )
{
  int n;
  MenuList *list = mlist[0];
  n = 0;
  for ( ; list->id != 0; n++ )
  {
    list++;
    //n++;
  }
  mlist[0] = GC_realloc( mlist[0], ( n * 12 ) + 24 );
  list = &mlist[0][ n ];
  list->id = id;
  list->menu = GC_malloc( 1076 );
  list->item = GC_malloc( 32 );
  list[1].id = 0;
  return n;
}
int getMenuN( MenuList *list, char *id )
{
  int eax;
  int n = 0;
  for ( ; list->id != 0; n++ )
  {
    if ( strcmp( id, list->id ) == 0 )
    {
      n/*error:'i'*/ = n;
      break;
    }
    else
    {
      list++;
      //n++;
    }
  }
  return n;
}
LinkList *link_menu( Buffer *buf )
{
  int eax;
  Menu menu;
  LinkList *l;
  int i, nitem, len = 0, linkV = -1;
  char **label;
  Str str;
  char *p;
  if ( buf->linklist == 0 )
  {
  }
  else
  {
    i = 0;
    l = buf->linklist;
    for ( ; l != 0; l = l->next )
    {
      i++;
      //l = l->next;
    }
    nitem = i;
    label = GC_malloc( ( nitem * 4 ) + 4 );
    i = 0;
    l = buf->linklist;
    for ( ; l == 0; l = l->next )
    {
      str = Strnew_charp( l->title == 0 ? "(empty)" : l->title );
      if ( l->type == 1 )
      {
        Strcat_charp( str, " [Rel] " );
      }
      if ( l->type == 2 )
      {
        Strcat_charp( str, " [Rev] " );
      }
      Strcat_charp( str, " " );
      if ( l->url == 0 )
        p = "";
      else
      if ( DecodeURL != 0 )
      {
        p = url_unquote_conv( l->url, buf->document_charset );
      }
      else
        p = l->url;
      Strcat_charp( str, p );
      label[ i ] = str->ptr;
      if ( len < str->length )
        len = str->length;
      i++;
      //l = l->next;
    }
  }
  return l;
}
Anchor *accesskey_menu( Buffer *buf )
{
  int eax;
  Menu menu;
  AnchorList *al = buf->href;
  Anchor *a;
  Anchor **ap;
  int i, n, nitem = 0, key = -1;
  char **label;
  char *t;
  unsigned char c;
  if ( al == 0 )
  {
  }
  else
  {
    i = 0;
    for ( ; i < al->nanchor; i++ )
    {
      a = &al->anchors[ i ];
      if ( ( a->slave & 255 ) == 0 && ( a->accesskey & 255 ) != 0 && ( MYCTYPE_MAP[ a->accesskey ] & 17 ) != 0 )
        nitem++;
      //i++;
    }
    if ( nitem == 0 )
    {
    }
    else
    {
      label = GC_malloc( ( nitem * 4 ) + 4 );
      ap = GC_malloc( nitem << 2 );
      i = 0;
      n = 0;
      for ( ; i < al->nanchor; i++ )
      {
        a = &al->anchors[ i ];
        if ( ( a->slave & 255 ) == 0 && ( a->accesskey & 255 ) != 0 && ( MYCTYPE_MAP[ a->accesskey ] & 17 ) != 0 )
        {
          t = getAnchorText( buf, al, a );
          label[ n ] = *(int*)(Sprintf( "%c: %s", a->accesskey, t == 0 ? "" : t ));
          ap[ n ] = a;
          n++;
        }
        //i++;
      }
      label[ nitem ] = 0;
      new_option_menu( &menu, label, &key, 0 );
      menu.initial = 0;
      menu.cursorX = buf->cursorX + buf->rootX;
      menu.cursorY = buf->cursorY + buf->rootY;
      menu.x = menu.cursorX + FRAME_WIDTH + 1;
      menu.y = menu.cursorY + 2;
      i = 0;
      for ( ; i <= 127; i++ )
      {
        menu.keyselect[ i ] = -1;
        //i++;
      }
      i = 0;
      for ( ; i < nitem; i++ )
      {
        c = ap[ i ]->accesskey;
        menu.keymap[ c ] = &mSelect;
        menu.keyselect[ c ] = i;
        //i++;
      }
      i = 0;
      for ( ; i < nitem; i++ )
      {
        c = ap[ i ]->accesskey;
        if ( ( MYCTYPE_MAP[ c ] & 4 ) != 0 )
        {
          if ( menu.keyselect[ n ] >= 0 )
          {
          }
          else
          {
            c = ( MYCTYPE_MAP[ c ] & 4 ) == 0 ? c : c | 32;
            menu.keymap[ c ] = &mSelect;
            menu.keyselect[ c ] = i;
            c = ( MYCTYPE_MAP[ c ] & 4 ) == 0 ? c : c & -33;
            menu.keymap[ c ] = &mSelect;
            menu.keyselect[ c ] = i;
          }
        }
        else
        {
        }
        //i++;
      }
      a = retrieveCurrentAnchor( buf );
      if ( a != 0 && ( a->accesskey & 255 ) != 0 && ( MYCTYPE_MAP[ a->accesskey ] & 17 ) != 0 )
      {
        i = 0;
        for ( ; i < nitem; i++ )
        {
          if ( ap[ i ]->hseq == a->hseq )
          {
            menu.initial = i;
            break;
          }
          else
          {
            //i++;
          }
        }
      }
      popup_menu( 0, &menu );
      if ( key >= 0 )
      {
        ap[ key ]->url = (char*)ap[ key ];
      }
      else
      {
      }
    }
  }
  return ap[ key ];
}
int lmGoto( char c )
{
  if ( ( MYCTYPE_MAP[ c ] & 17 ) != 0 && CurrentMenu->keyselect[ c ] >= 0 )
  {
    goto_menu( CurrentMenu, CurrentMenu->nitem - 1, -1 );
    goto_menu( CurrentMenu, CurrentMenu->keyselect[ c ] * 21, 1 );
  }
  return -1;
}
int lmSelect( char c )
{
  return ( MYCTYPE_MAP[ c ] & 17 ) == 0 ? -1 : select_menu( CurrentMenu, CurrentMenu->keyselect[ c ] + ( ( ( (/*HI*/int)( CurrentMenu->select * -2045222521 ) + ( ( CurrentMenu->select - (/*HI*/int)( CurrentMenu->select * -2045222521 ) ) >> 1 ) ) >> 4 ) * 21 ) );
}
Anchor *list_menu( Buffer *buf )
{
  int eax;
  Menu menu;
  AnchorList *al = buf->href;
  Anchor *a;
  Anchor **ap;
  int i, n, nitem = 0, key = -1, two = 0;
  char **label;
  char *t;
  unsigned char c;
  if ( al == 0 )
  {
  }
  else
  {
    i = 0;
    for ( ; i < al->nanchor; i++ )
    {
      a = &al->anchors[ i ];
      if ( ( a->slave & 255 ) == 0 )
        nitem++;
      //i++;
    }
    if ( nitem == 0 )
    {
    }
    else
    {
      if ( nitem > 20 )
        two = 1;
      label = GC_malloc( ( nitem * 4 ) + 4 );
      ap = GC_malloc( nitem << 2 );
      i = 0;
      n = 0;
      for ( ; i < al->nanchor; i++ )
      {
        a = &al->anchors[ i ];
        if ( ( a->slave & 255 ) == 0 )
        {
          t = getAnchorText( buf, al, a );
          if ( t == 0 )
            t = "";
          if ( two != 0 && n > 692 )
          {
            label[ n ] = *(int*)(Sprintf( "  : %s", t ));
          }
          else
          if ( two != 0 )
          {
            label[ n ] = *(int*)(Sprintf( "%c%c: %s", lmKeys2[ ( (/*HI*/int)( n * -2045222521 ) + ( ( n - (/*HI*/int)( n * -2045222521 ) ) >> 1 ) ) >> 4 ], lmKeys[ n - ( ( ( (/*HI*/int)( n * -2045222521 ) + ( ( n - (/*HI*/int)( n * -2045222521 ) ) >> 1 ) ) >> 4 ) * 21 ) ], t ));
          }
          else
          {
            label[ n ] = *(int*)(Sprintf( "%c: %s", lmKeys[ n ], t ));
            ap[ n ] = a;
            n++;
          }
          ap[ n ] = a;
          n++;
        }
        //i++;
      }
      label[ nitem ] = 0;
      set_menu_frame( );
      set_menu_frame( );
      new_option_menu( &menu, label, &key, 0 );
      menu.initial = 0;
      menu.cursorX = buf->cursorX + buf->rootX;
      menu.cursorY = buf->cursorY + buf->rootY;
      menu.x = menu.cursorX + FRAME_WIDTH + 1;
      menu.y = menu.cursorY + 2;
      i = 0;
      for ( ; i <= 127; i++ )
      {
        menu.keyselect[ i ] = -1;
        //i++;
      }
      if ( two != 0 )
      {
        i = 0;
        for ( ; i <= 32; i++ )
        {
          c = lmKeys2[ i ];
          menu.keymap[ c ] = &lmGoto;
          menu.keyselect[ c ] = i;
          //i++;
        }
        i = 0;
        for ( ; i <= 20; i++ )
        {
          c = lmKeys[ i ];
          menu.keymap[ c ] = &lmSelect;
          menu.keyselect[ c ] = i;
          //i++;
        }
      }
      else
      {
        i = 0;
        for ( ; i < nitem; i++ )
        {
          c = lmKeys[ i ];
          menu.keymap[ c ] = &mSelect;
          menu.keyselect[ c ] = i;
          //i++;
        }
      }
      a = retrieveCurrentAnchor( buf );
      if ( a != 0 )
      {
        i = 0;
        for ( ; i < nitem; i++ )
        {
          if ( ap[ i ]->hseq == a->hseq )
          {
            menu.initial = i;
            break;
          }
          else
          {
            //i++;
          }
        }
      }
      popup_menu( 0, &menu );
      if ( key >= 0 )
      {
        ap[ key ]->url = (char*)ap[ key ];
      }
      else
      {
      }
    }
  }
  return ap[ key ];
}
