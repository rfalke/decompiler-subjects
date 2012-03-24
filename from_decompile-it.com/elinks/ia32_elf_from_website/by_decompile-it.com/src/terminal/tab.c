#include "tab.c.h"
struct window *init_tab( struct terminal *term, void *data, window_handler_T *handler )
{
  int eax;
  int edx;
  struct window *win;
  struct window *pos;
  if ( win[0].next )
  {
    win->term = &term[0];
    win->handler = handler;
    win->bits_at_40/*.1_1of4*/ |= 1;
    win->type = WINDOW_TAB;
    win->data = data;
    &pos[0] = &term->windows.next[0];
    if ( term->windows.next != term->windows.next )
    {
      do
      {
        if ( pos->type == WINDOW_TAB )
          &pos[0] = pos->prev;
          win->prev = &pos[0];
          win = &pos;
          &pos = &win;
          win->prev = &win[0];
          break;
        else
        {
          &pos = &pos;
        }
      }
      while ( pos->next != term->windows.next );
    }
    if ( assert_failed == 0 )
    {
      assert_failed = term->main_menu != 0;
      if ( term->main_menu )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/tab.c";
        errline = 53;
        elinks_internal( "assertion term-&gt;main_menu == NULL failed!" );
      }
    }
    &pos[0] = &term->windows.prev[0];
    win->prev = &pos[0];
    win = &pos;
    &pos = &win;
    win->prev = &win[0];
  }
  return win->prev;
}
int number_of_tabs( struct terminal *term )
{
  int eax;
  int result = 0;
  if ( term->windows.next != term->windows.next )
  {
    do
    {
      result += *(int*)(term->windows.next + 8) == 1;
    }
    while ( term->windows.next[0] != term->windows.next );
  }
  return 0;
}
int get_tab_number( struct window *window )
{
  int eax;
  struct terminal *term;
  struct window *win = &window->term->windows.prev[0];
  int current;
  int num;
  if ( window->term->windows.prev != window->term->windows.next )
  {
    current = 0;
    do
    {
      if ( win->type == WINDOW_TAB )
      {
        if ( window[0].next != win[0].next )
        {
          win = win->prev;
          current++;
          if ( win->prev != window->term->windows.next )
            continue;
          else
            break;
        }
        else
          break;
      }
      else
      {
        win = win->prev;
      }
    }
    while ( win->prev != window->term->windows.next );
  }
  current = 0;
  return 0;
}
struct window *get_tab_by_number( struct terminal *term, int num )
{
  int eax;
  int ecx;
  struct window *win = &term->windows.prev[0];
  if ( term->windows.prev != term->windows.next )
  {
    do
    {
      if ( win->type == WINDOW_TAB )
      {
        if ( num && win->prev != term->windows.next )
          continue;
        else
          break;
      }
      else
      {
        win = win->prev;
      }
    }
    while ( win->prev != term->windows.next );
  }
  if ( assert_failed == 0 )
  {
    assert_failed = win[0].next == term->windows.next;
    if ( !(_Bool)( win[0].next != term->windows.next ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/tab.c";
      errline = 111;
      elinks_internal( "assertion (LIST_OF(struct window) *) win != &term-&gt;windows failed: tab number out of range" );
      if ( assert_failed )
      {
      }
    }
    return ebp_12;
  }
  assert_failed = 0;
  win = &term->windows.next[0];
  return &term->windows.next[0];
}
int get_tab_number_by_xpos( struct terminal *term, int xpos )
{
  int eax;
  int num;
  struct window *win = &term->windows.prev[0];
  if ( term->windows.prev != term->windows.next )
  {
    num = 0;
    do
    {
      if ( win->type == WINDOW_TAB )
      {
        if ( xpos < win->xpos || win->width + win->xpos <= xpos )
          num++;
        else
          break;
      }
      win = win->prev;
    }
    while ( win->prev != term->windows.next );
  }
  return -1;
}
void switch_to_tab( struct terminal *term, int tab, int tabs_count )
{
  int edx;
  if ( tabs_count < 0 )
  {
    if ( term->windows.next == term->windows.next )
      tab = 0;
      term = &term[0];
      if ( term->current_tab != tab )
      {
        term->current_tab = tab;
        if ( term->screen->dirty_from >= 1 )
          term->screen->dirty_from = 0;
        if ( term->screen->dirty_to < term->height )
          term->screen->dirty_to = term->height;
        term = &term[0];
      }
      else
      {
        return;
      }
    else
    {
      tabs_count = 0;
      term = &term[0];
      do
      {
        tabs_count += *(int*)(term->windows.next + 8) == 1;
      }
      while ( term->windows.next[0] != term->windows.next );
    }
  }
  if ( tabs_count <= 1 )
    continue;
  else
  {
    if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 )
    {
      if ( tab < 0 )
        term = &term[0];
      else
      {
        tab--;
        tab = tabs_count - 1 - 1 < tab ? tab : tabs_count - 1 - 1;
        if ( term->current_tab == ( tabs_count - 1 - 1 < tab ? tab : tabs_count - 1 - 1 ) )
        {
          term = &term[0];
          return;
        }
        else
        {
          term->current_tab = tab;
        }
      }
    }
    else
    {
      tab = __MOD(tab,tabs_count);
      if ( __MOD(tab,tabs_count) < 0 )
        tab += tabs_count;
    }
  }
}
void switch_current_tab( struct session *ses, int direction )
{
  struct terminal *term = ses->tab->term;
  int tabs_count;
  int count;
  if ( term->windows.next != term->windows.next )
  {
    tabs_count = 0;
    do
    {
      tabs_count += *(int*)(term->windows.next + 8) == 1;
    }
    while ( term->windows.next[0] != term->windows.next );
    if ( tabs_count > 1 )
    {
      switch_to_tab( &term[0], term->current_tab + ( eat_kbd_repeat_count( &ses[0] ) != 0 ? direction : direction * eat_kbd_repeat_count( &ses[0] ) ), tabs_count );
    }
  }
  return;
}
void really_close_tab( void *ses_ )
{
  int ecx;
  int edx;
  struct session *ses;
  struct terminal *term = &((int*)ses_)[2];
  struct window *current_tab;
  if ( ses->tab == current_tab[0].next )
  {
    int tabs_count = 0;
    if ( term->windows.next != term->windows.next )
    {
      ses = &ses[0];
      do
      {
        tabs_count += *(int*)(term->windows.next + 8) == 1;
      }
      while ( term->windows.next[0] != term->windows.next );
    }
    switch_to_tab( &term[0], term->current_tab - 1, tabs_count - 1 );
    &ses->tab = ses->tab;
    ses_ = (void*)ses->tab;
  }
  else
  {
    ses_ = (void*)ses->tab;
  }
}
void close_tab( struct terminal *term, struct session *ses )
{
  int edx;
  int tabs_count;
  if ( term->windows.next != term->windows.next )
  {
    tabs_count = 0;
    do
    {
      tabs_count += *(int*)(term->windows.next + 8) == 1;
    }
    while ( term->windows.next[0] != term->windows.next );
    if ( tabs_count > 1 )
    {
      if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 )
      {
        term = &ses[0].next[0];
      }
      msg_box( 0, 0, "Close tab", 1, "Do you really want to close the current tab?", 2, "~Yes", really_close_tab );
      return;
    }
  }
  term = &ses[0].next[0];
}
void really_close_tabs( void *ses_ )
{
  struct terminal *term = &((int*)ses_)[2];
  struct window *current_tab = get_tab_by_number( &((int*)ses_)[2], term->current_tab );
  struct window *tab = &term->windows.next[0];
  if ( term->windows.next != term->windows.next )
  {
    do
    {
      if ( tab->type == WINDOW_TAB && tab[0].next != current_tab )
      {
        if ( term->current_tab >= 1 )
          term->current_tab--;
        tab = tab->prev;
        delete_window( (int)( &tab ) );
        tab = &tab;
        if ( tab->next != term->windows.next )
          continue;
      }
      else
      {
        tab = &tab;
      }
    }
    while ( tab->next != term->windows.next );
  }
  ses_ = (void*)term[0].next;
}
void close_all_tabs_but_current( struct session *ses )
{
  if ( assert_failed == 0 )
  {
    assert_failed = ses[0].next == 0;
    if ( !(_Bool)( ses[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/tab.c";
      errline = 240;
      elinks_internal( "assertion ses failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 )
    {
      ses = &ses[0];
    }
    msg_box( ses->tab->term, 0, 0, "Close tab", ALIGN_CENTER, "Do you really want to close all except the current tab?", 2, "~Yes" );
    return;
  }
B2:  assert_failed = 0;
  return;
}
void open_uri_in_new_tab( struct session *ses, struct uri *uri, int in_background, int based )
{
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = ses[0].next == 0;
    if ( !(_Bool)( ses[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/tab.c";
      errline = 261;
      elinks_internal( "assertion ses failed!" );
      *ebp_28 = based;
      based = in_background;
      in_background = uri[0].string;
      ses = ebp_28 == 0 ? &ses[0] : 0;
      uri = &ses->tab->term->next;
    }
  }
}
void delayed_open( void *data )
{
  struct delayed_open *deo;
  if ( assert_failed == 0 )
  {
    assert_failed = deo->ses == 0;
    if ( !(_Bool)( deo[0].ses != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/tab.c";
      errline = 272;
      elinks_internal( "assertion deo failed!" );
    }
  }
  open_uri_in_new_tab( deo->ses, deo->uri, 0, 0 );
  done_uri( deo->uri );
  data = (void*)deo[0].ses;
}
void open_current_link_in_new_tab( struct session *ses, int in_background )
{
  int eax;
  int edx;
  struct document_view *doc_view;
  struct uri *uri;
  struct link *link;
  if ( doc_view[0].next )
  {
    if ( assert_failed == 0 )
    {
      if ( doc_view->vs && doc_view->document )
        assert_failed = 0;
        if ( doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && link[0] )
        {
          uri = get_link_uri( &ses[0], &doc_view[0], &link[0] );
          open_uri_in_new_tab( &ses[0], get_link_uri( &ses[0], &doc_view[0], &link[0] ), in_background, 1 );
          if ( uri[0].string )
          {
            ses = &uri[0].string[0];
          }
          return;
        }
        else
        {
          open_uri_in_new_tab( &ses[0], 0, in_background, 1 );
          return;
        }
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/tab.c";
        errline = 285;
        elinks_internal( "assertion doc_view-&gt;vs && doc_view-&gt;document failed!" );
        doc_view = &doc_view[0];
      }
    }
    else
    {
      assert_failed = 0;
      return;
    }
  }
  if ( assert_failed )
    in_background = in_background;
    assert_failed = 0;
    return;
  else
  {
    if ( doc_view[0].next )
    {
    }
    else
    {
      open_uri_in_new_tab( &ses[0], 0, in_background, 1 );
      return;
    }
  }
}
void move_current_tab( struct session *ses, int direction )
{
  int eax;
  int ecx;
  int edx;
  struct terminal *term;
  int tabs = 0;
  struct window *current_tab;
  struct window *tab;
  int new_pos;
  int count;
  term = ses->tab->term;
  if ( term->windows.next != term->windows.next )
  {
    do
    {
      tabs += *(int*)(term->windows.next + 8) == 1;
    }
    while ( term->windows.next[0] != term->windows.next );
  }
  *ebp_28 = ses[0].next;
  current_tab = get_tab_by_number( &term[0], term->current_tab );
  if ( assert_failed == 0 )
  {
    assert_failed = direction == 0;
    if ( !(_Bool)( direction != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/tab.c";
      errline = 305;
      elinks_internal( "assertion ses && direction failed!" );
      *ebp_28 = new_pos;
    }
  }
  new_pos = term->current_tab + ( eat_kbd_repeat_count( &ses[0] ) == 0 ? direction * eat_kbd_repeat_count( &ses[0] ) : direction );
  *ebp_28 = ebp_28;
  if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 )
  {
    new_pos = 0;
    if ( ecx >= 0 )
      new_pos = ecx <= tabs - 1 ? tabs - 1 : ecx;
  }
  else
  {
    new_pos = __MOD(ecx,tabs);
    if ( __MOD(ecx,tabs) < 0 )
      new_pos += tabs;
  }
  if ( assert_failed == 0 )
  {
    if ( new_pos >= 0 && new_pos < tabs )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/tab.c";
      errline = 318;
      elinks_internal( "assertion 0 &lt;= new_pos && new_pos &lt; tabs failed!" );
      new_pos = new_pos;
    }
  }
  if ( term->current_tab != new_pos )
  {
    current_tab->prev = current_tab->prev;
    &current_tab->prev = &current_tab;
    if ( new_pos == 0 )
    {
      get_tab_by_number( &term, 0 );
      *ebp_28 = new_pos;
    }
    else
    {
      *ebp_28 = new_pos;
      tab = tab->prev;
    }
    current_tab->prev = &tab[0];
    *(int*)(*(int*)(get_tab_by_number( &term, new_pos - 1 ) + 4)) = current_tab = &tab;
    current_tab->prev = &current_tab[0];
    switch_to_tab( &term[0], new_pos, tabs );
  }
  return;
}
#if 0
#endif
