#include "dbus-pcbmain.c.h"
void block_hook_cb( hidval data )
{
  /* phantom */ DBusConnection *connection;
  if ( dbus_connection_get_dispatch_status( &data.lval ) == 0 )
  {
    data = data;
  }
  return;
}
void io_watch_handler_dbus_freed( void *data )
{
  /* phantom */ IOWatchHandler *handler;
  gui->unwatch_file( ((int*)data), ebp_4, ebp_4 );
  data = data;
}
void io_watch_handler_cb( hidval pcb_watch, int fd, unsigned int condition, hidval data )
{
  /* phantom */ IOWatchHandler *handler;
  unsigned int dbus_condition;
  condition &= 8;
  fd = ( condition & 8 ) != 0 ? ( ( (unsigned char)( condition ) & 4 ) & 255 ) != 0 ? ( ( (unsigned char)( condition ) & 2 ) & 255 ) != 0 ? condition & 1 : ( condition & 1 ) | 2 : ( ( ( (unsigned char)( condition ) & 2 ) & 255 ) != 0 ? condition & 1 : ( condition & 1 ) | 2 ) | 4 : ( ( ( (unsigned char)( condition ) & 4 ) & 255 ) != 0 ? ( ( (unsigned char)( condition ) & 2 ) & 255 ) != 0 ? condition & 1 : ( condition & 1 ) | 2 : ( ( ( (unsigned char)( condition ) & 2 ) & 255 ) != 0 ? condition & 1 : ( condition & 1 ) | 2 ) | 4 ) | 8;
  pcb_watch = data;
}
void timeout_handler_dbus_freed( void *data )
{
  /* phantom */ TimeoutHandler *handler;
  gui->stop_timer( ((int*)data), ebp_4, ebp_4 );
  data = data;
}
lval/*union*/lval/*union*/lval/*union*/void timeout_handler_cb( hidval data )
{
lval/*union*/  /* phantom */ TimeoutHandler *handler;
  gui->add_timer( ebp_12, timeout_handler_cb, lval/*union*/data.lval/*union*/, data.lval );
  lval/*union*/data.lval/*union*/ = ebp_12;
  data = data;
}
dbus_bool_t watch_add( DBusWatch *dbus_watch, void *data )
{
  int esi;
  int edi;
  /* phantom */ IOWatchHandler *handler;
  int fd;
  unsigned int pcb_condition;
  unsigned int dbus_flags;
  if ( dbus_watch_get_enabled( &dbus_watch ) )
  {
    pcb_condition = ( ( dbus_flags/*.1_1of4*/ & 2 ) & 255 ) != 0 ? ( 0 - ( ( ( dbus_flags & 1 ) < 1 ) & 1 ) ) + 13 : ( ( 0 - ( ( ( dbus_flags & 1 ) < 1 ) & 1 ) ) + 13 ) | 1;
    fd = dbus_watch_get_unix_fd( &dbus_watch );
    *(int*)(malloc( 8 )) = dbus_watch;
    gui->watch_file( ebp_28, fd, pcb_condition, io_watch_handler_cb );
    *(int*)malloc( 8 )/*.4*/ = ebp_28;
    dbus_watch_set_data( &dbus_watch, malloc( 8 ), &io_watch_handler_dbus_freed );
  }
  return 1;
}
void watch_remove( DBusWatch *dbus_watch, void *data )
{
  dbus_watch_set_data( &dbus_watch, 0, 0 );
  return;
}
void watch_toggled( DBusWatch *dbus_watch, void *data )
{
  int ebx;
  int esi;
  if ( dbus_watch_get_enabled( &dbus_watch ) )
  {
  }
}
dbus_bool_t timeout_add( DBusTimeout *timeout, void *data )
{
  int esi;
  /* phantom */ TimeoutHandler *handler;
  if ( dbus_timeout_get_enabled( &timeout ) )
  {
    *(int*)(malloc( 12 )) = timeout;
    *(int*)malloc( 12 )/*.8*/ = dbus_timeout_get_interval( &timeout );
    gui->add_timer( ebp_12, timeout_handler_cb, malloc( 12 ) + 8, malloc( 12 ) );
    *(int*)malloc( 12 )/*.4*/ = ebp_12;
    dbus_timeout_set_data( &timeout, malloc( 12 ), &timeout_handler_dbus_freed );
  }
  return 1;
}
void timeout_remove( DBusTimeout *timeout, void *data )
{
  dbus_timeout_set_data( &timeout, 0, 0 );
  return;
}
void timeout_toggled( DBusTimeout *timeout, void *data )
{
  int ebx;
  int esi;
  if ( dbus_timeout_get_enabled( &timeout ) )
  {
  }
}
void dispatch_status_changed( DBusConnection *conn, DBusDispatchStatus new_status, void *data )
{
  return;
}
void pcb_dbus_connection_setup_with_mainloop( DBusConnection *connection )
{
  if ( dbus_connection_set_watch_functions( &connection, &watch_add, &watch_remove, &watch_toggled, 0, 0 ) && dbus_connection_set_timeout_functions( &connection, &timeout_add, &timeout_remove, &timeout_toggled, 0, 0 ) )
  {
    dbus_connection_set_dispatch_status_function( &connection, &dispatch_status_changed, 0, 0 );
    gui->add_block_hook( ebp_12, block_hook_cb, connection );
    return;
  }
  __fprintf_chk( stderr, 1, "Not enough memory to set up DBusConnection for use with PCB\n" );
  return;
}
void pcb_dbus_connection_finish_with_mainloop( DBusConnection *connection )
{
  if ( dbus_connection_set_watch_functions( &connection, 0, 0, 0, 0, 0 ) && dbus_connection_set_timeout_functions( &connection, 0, 0, 0, 0, 0 ) )
  {
    dbus_connection_set_dispatch_status_function( &connection, 0, 0, 0 );
    return;
  }
  __fprintf_chk( stderr, 1, "Not enough memory when cleaning up DBusConnection mainloop integration\n" );
  return;
}
#if 0
#endif
