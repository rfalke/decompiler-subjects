#include "window.c.h"
void redraw_from_window( struct window *win )
{
  struct terminal *term = win->term;
  struct term_event ev;
  struct window *end;
  if ( term->redrawing == TREDRAW_READY )
  {
    ev.info.mouse.x = term->width;
    end = &term->windows.next[0];
    ev.info.mouse.button = 0;
    ev.ev = EVENT_REDRAW;
    ev.info.mouse.y = term->height;
    term->redrawing = TREDRAW_BUSY;
    win = win->prev;
    if ( term->windows.next != win->prev )
    {
      do
      {
        if ( win->type == WINDOW_NORMAL || win[0].next == get_tab_by_number( win->term, win->term->current_tab ) )
        {
          ev = win->handler(  );
          win = win->prev;
          if ( win->prev != end[0].next )
            continue;
          else
            break;
        }
        else
        {
          win = win->prev;
        }
      }
      while ( win->prev != end[0].next );
    }
    term->redrawing = TREDRAW_READY;
    return;
  }
  else
  {
    return;
  }
}
void redraw_below_window( struct window *win )
{
  struct terminal *term = win->term;
  struct term_event ev;
  enum term_redrawing_state  saved_redraw_state = win->term->redrawing;
  if ( term->redrawing != TREDRAW_DELAYED )
  {
    ev.info.mouse.x = term->width;
    ev.info.mouse.button = 0;
    ev.ev = EVENT_REDRAW;
    ev.info.mouse.y = term->height;
    win = &term->windows.prev[0];
    term->redrawing = TREDRAW_DELAYED;
    if ( term->windows.prev != win )
    {
      do
      {
        if ( win->type == WINDOW_NORMAL || win[0].next == get_tab_by_number( win->term, win->term->current_tab ) )
        {
          ev = win->handler(  );
          win = win->prev;
          if ( win->prev != win )
            continue;
          else
            break;
        }
        else
        {
          win = win->prev;
        }
      }
      while ( win->prev != win );
    }
    term->redrawing = saved_redraw_state;
  }
  return;
}
void add_window( struct terminal *term, window_handler_T *handler, void *data )
{
  struct term_event ev;
  if ( mem_calloc( 1, 44 ) == 0 )
  {
    if ( ((int*)data)[0] )
    {
      mem_free( &((int*)data)[0] );
      return;
    }
    return;
  }
  else
  {
    *(int*)(mem_calloc( 1, 44 ) + 16) = ((int*)data)[0];
    *(int*)(mem_calloc( 1, 44 ) + 20) = term[0];
    *(int*)(mem_calloc( 1, 44 ) + 8) = 0;
    *(int*)(mem_calloc( 1, 44 ) + 12) = handler[0];
    *(int*)(mem_calloc( 1, 44 ) + 4) = term->windows;
    *(int*)(mem_calloc( 1, 44 )) = term->windows;
    term->windows.next = mem_calloc( 1, 44 );
    *(int*)(*(int*)(mem_calloc( 1, 44 )) + 4) = mem_calloc( 1, 44 );
    ev.info.mouse.button = 0;
    ev.ev = EVENT_INIT;
    ev.info.mouse.y = term->height;
    ;
  }
ev.info.mouse.x = term->width; // XXX
}
void delete_window( struct window *win )
{
  ev.info.mouse.x = 0;
  struct term_event ev;
  win->prev = win->prev;
  &win->prev[0] = &win[0];
  ev.info.mouse.y = 0;
  ev.info.mouse.button = 0;
  ev.ev = EVENT_ABORT;
  win = win->handler(  );
{
  void *p = *(int*)(win->handler(  ) + 16);
  if ( *(int*)(win->handler(  ) + 16) )
    mem_free( &((int*)p)[0] );
  redraw_terminal( win->term );
  mem_free( (void*)win[0].next );
  return;
}
}
void delete_window_ev( struct window *win, struct term_event *ev )
{
  struct window *w = &win[0];
  delete_window( &win[0] );
  if ( !( ( w[0].next == 0 ) & 255 ) && ev[0] )
  {
    if ( w->type == WINDOW_TAB )
    {
      w = get_tab_by_number( w->term, w->term->current_tab );
    }
    if ( w[0].next )
    {
      ev = &ev[0];
      win = &w[0];
      ;
    }
  }
  return;
}
void get_parent_ptr( struct window *win, int *x, int *y )
{
  struct window *parent = &win[0];
  if ( parent->type == WINDOW_TAB )
    get_tab_by_number( win->term, win->term->current_tab );
  if ( parent[0].next )
  {
    x[0] = parent->x;
    y[0] = win->y;
    return;
  }
  x[0] = 0;
  y[0] = 0;
  return;
}
void empty_window_handler( struct window *win, struct term_event *ev )
{
  struct terminal *term = win->term;
  struct ewd *ewd = &win->data[0];
  void (*fn)( void * ) = *(int*)(win->data);
  void *data = &win->data[1];
  if ( ( ( ewd->bits_at_8/*.1_1of4*/ & 1 ) & 255 ) == 0 )
  {
    if ( ev->ev <= 4 )
    {
      if ( ev->ev >= 3 || ev->ev == 0 )
      {
        get_parent_ptr( &win[0], &win->x, &win->y );
        return;
      }
    }
    else
    if ( ev->ev == 5 )
    {
      win = &((int*)data)[0];
      ;
    }
    ewd->bits_at_8/*.1_1of4*/ = (int)ewd->bits_at_8/*.1_1of4*/ | 1;
    delete_window( &win[0] );
    fn( &((int*)data)[0] );
    ev = &ev[0];
    win = &term->next;
  }
  else
  {
    return;
  }
}
void add_empty_window( struct terminal *term, void (*fn)( void * ), void *data )
{
  if ( mem_alloc( 12 ) )
  {
    *(char*)(mem_alloc( 12 ) + 8) &= -2;
    *(int*)(mem_alloc( 12 )) = fn;
    *(int*)(mem_alloc( 12 ) + 4) = ((int*)data);
    term = &term;
    data = mem_alloc( 12 );
    fn = &empty_window_handler;
  }
  return;
}
#if 0
#endif
