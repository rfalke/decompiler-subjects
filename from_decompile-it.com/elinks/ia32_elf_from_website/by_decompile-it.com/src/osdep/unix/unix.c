#include "unix.c.h"
void gpm_mouse_in( struct gpm_mouse_spec *gms )
{
  int eax;
  Gpm_Event gev;
  struct interlink_event ev;
  if ( Gpm_GetEvent( &gev.buttons ) < 1 )
  {
    set_handlers( gms->h, 0, 0, 0, 0 );
    return;
  }
  else
  {
    _gpm_arg[2] = gev.x + gpm_zerobased/*.1_2of4*/;
    _gpm_arg[0] = gev.x + gpm_zerobased/*.1_2of4*/;
    _gpm_arg[3] = gev.y + (unsigned short)( gpm_zerobased );
    _gpm_arg[1] = gev.y + (unsigned short)( gpm_zerobased );
    _gpm_arg[4] = 3;
    ioctl( 1, 21532, 135564417 );
    if ( !( ( gev.buttons & 4 ) & 255 ) && !( ( gev.buttons & 2 ) & 255 ) && !( gev.buttons & 1 ) && gev.wdy >= 0 )
    {
      if ( !1 )
      {
      }
      else
      {
        return;
      }
    }
    if ( ( ( (unsigned char)( gev.type ) & 4 ) & 255 ) == 0 )
    {
      if ( ( gev.type & 8 ) & 255 )
      {
      }
      else
      if ( gev.type & 2 )
      {
      }
      else
      if ( gev.wdy == 0 )
      {
        return;
      }
    }
    ev.info.mouse.x = gev.x - 1 < 0 ? gev.x - 1 : 0;
    ev.ev = EVENT_MOUSE;
    ev.info.mouse.y = (unsigned char)( ( gev.y - 1 < 0 ) ^ 1 ) ? 0 : gev.y - 1;
    ev.info.mouse.button = 3 | 32;
    gms->fn( gms->data, &ev.ev, 16 );
    return;
  }
}
int init_mouse( int cons, int suspend )
{
  Gpm_Connect conn;
  if ( suspend )
  {
    conn.eventMask = 0;
    conn.defaultMask = 65535;
    conn.minMod = 65535;
  }
  else
  {
    conn.eventMask = 65535;
    conn.defaultMask = 0;
    conn.minMod = 0;
  }
  conn.maxMod = 65535;
  gpm_visiblepointer = 1;
  return Gpm_Open( &conn.eventMask, cons );
}
void *handle_mouse( int cons, void (*fn)( void *, unsigned char *, int  ), void *data )
{
  int eax;
  int h;
  if ( init_mouse( cons, 0 ) >= 0 && mem_alloc( 16 ) )
  {
    *(int*)(mem_alloc( 16 )) = h;
    *(int*)(mem_alloc( 16 ) + 4) = cons;
    *(int*)(mem_alloc( 16 ) + 8) = (fn[0]);
    *(int*)(mem_alloc( 16 ) + 12) = data[0];
    set_handlers( h, &gpm_mouse_in, 0, 0, mem_alloc( 16 ) );
    return mem_alloc( 16 );
  }
}
void unhandle_mouse( void *h )
{
  if ( h )
  {
    set_handlers( ((int*)h)[0], 0, 0, 0, 0 );
    mem_free( &((int*)h)[0] );
  }
  return;
}
void suspend_mouse( void *h )
{
  int eax;
  if ( h )
  {
    h = init_mouse( ((int*)h)[1], 1 );
    if ( ((int*)h)[0] >= 0 )
    {
      set_handlers( ((int*)h)[0], 0, 0, 0, 0 );
    }
  }
  return;
}
void resume_mouse( void *h )
{
  int eax;
  if ( h )
  {
    h = init_mouse( ((int*)h)[1], 0 );
    if ( ((int*)h)[0] >= 0 )
    {
      set_handlers( ((int*)h)[0], &gpm_mouse_in, 0, 0, &((int*)h)[0] );
    }
  }
  return;
}
#if 0
#endif
