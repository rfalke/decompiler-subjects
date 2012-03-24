#include "mouse.c.h"
static int mouse_enabled;
void send_mouse_init_sequence( int h )
{
  hard_write( h, "\033[?9h", 5 );
  hard_write( h, "\033[?1000h", 8 );
  return;
}
void send_mouse_done_sequence( int h )
{
  hard_write( h, "\033[?9l", 5 );
  hard_write( h, "\033[?1000l", 8 );
  return;
}
void disable_mouse( void )
{
  int h = get_output_handle(  );
  if ( mouse_enabled )
  {
    unhandle_mouse( ditrm->mouse_h );
    if ( is_xterm(  ) )
    {
      send_mouse_done_sequence( h );
      mouse_enabled = 0;
      return;
    }
    else
    {
      mouse_enabled = 0;
      return;
    }
  }
  else
  {
    return;
  }
}
void enable_mouse( void )
{
  int h = get_output_handle(  );
  if ( mouse_enabled == 0 )
  {
    if ( is_xterm(  ) )
      send_mouse_init_sequence( h );
    ditrm->mouse_h = handle_mouse( 0, &itrm_queue_event, (void*)ditrm );
    mouse_enabled = 1;
    return;
  }
  else
  {
    return;
  }
}
void toggle_mouse( void )
{
  if ( mouse_enabled )
  {
  }
}
int decode_terminal_mouse_escape_sequence( struct itrm *itrm, struct interlink_event *ev, int el, int v )
{
  int eax;
  int ecx;
  int edx;
  static int xterm_button = -1;
  if ( itrm->in.queue.len - el > 2 )
  {
    if ( v == 5 )
    {
      if ( xterm_button == -1 )
        xterm_button = 0;
      if ( ( *(char*)(el + *(int*)(itrm + 12)) & 7 ) > 4 )
      {
        if ( ( xterm_button ^ ( *(char*)(el + *(int*)(itrm + 12)) - 32 ) ) != 1 )
        {
          if ( ( xterm_button ^ ( *(char*)(el + *(int*)(ebx + 12)) - 32 ) ) >= 1 )
          {
            if ( ( xterm_button ^ ( *(char*)(el + *(int*)(itrm + 12)) - 32 ) ) == 2 )
            {
              xterm_button = *(char*)(el + *(int*)(itrm + 12)) - 32;
              el += 5;
            }
            else
            if ( ( xterm_button ^ ( *(char*)(el + *(int*)(itrm + 12)) - 32 ) ) == 4 )
            {
            }
          }
          else
          if ( ( xterm_button ^ ( *(char*)(el + *(int*)(( *(char*)(el + *(int*)(itrm + 12)) - 32 ) + 12)) - 32 ) ) == 0 )
            continue;
        }
        else
        if ( ( xterm_button & 1 ) & 255 )
          continue;
      }
    }
    else
    {
      if ( ( *(char*)(el + *(int*)(itrm + 12)) & 7 ) == 3 )
      {
        if ( ( *(char*)(el + *(int*)(itrm + 12)) & 96 ) != 96 )
        {
          xterm_button = -1;
          xterm_button = ebx;
          el += 3;
        }
      }
      else
      if ( ( *(char*)(el + *(int*)(itrm + 12)) & 96 ) != 96 )
      {
        xterm_button = -1;
        xterm_button = ebx;
        el += 3;
      }
      xterm_button = ebx;
      el += 3;
    }
    ev = 2;
    ev->info.mouse.y = el/*.1_1of4*/ - itrm->in.queue.data;
    ev->info.mouse.button = *(char*)(el + *(int*)(*(char*)(el + *(int*)(itrm + 12)) + 12)) & 7;
    return el + 3;
  }
  el = -1;
  return el + 3;
}
#if 0
#endif
