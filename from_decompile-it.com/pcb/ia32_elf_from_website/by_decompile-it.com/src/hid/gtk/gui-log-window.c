#include "gui-log-window.c.h"
static GtkWidget *log_window;
static GtkWidget *log_text;
static char *msg_buffer;
static int msg_buffer_size;
gint log_window_configure_event_cb( GtkWidget *widget, GdkEventConfigure *ev, gpointer data )
{
  ghidgui->log_window_width = widget->allocation.width;
  ghidgui->config_modified = 1;
  ghidgui->log_window_height = widget->allocation.height;
  return 0;
}
void log_close_cb( gpointer data )
{
  gtk_widget_destroy( log_window );
  log_window = 0;
  return;
}
void log_destroy_cb( GtkWidget *widget, gpointer data )
{
  log_window = 0;
  return;
}
void ghid_log_window_show( gboolean raise )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  GtkWidget *vbox, *hbox, *button;
  if ( log_window )
  {
    if ( raise )
    {
      raise = g_type_check_instance_cast( &log_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) );
    }
    return;
  }
  else
  {
    log_window = gtk_window_new( 0 );
    g_signal_connect_data( g_type_check_instance_cast( &log_window[0].object.parent_instance.g_type_instance, 80 ), "destroy", &log_destroy_cb, 0, 0, 0 );
    g_signal_connect_data( g_type_check_instance_cast( &log_window->object.parent_instance.g_type_instance, 80 ), "configure_event", &log_window_configure_event_cb, 0, 0, 0 );
    gtk_window_set_title( (GtkWindow*)g_type_check_instance_cast( &log_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), dcgettext( "pcb", "PCB Log", 5 ) );
    gtk_window_set_wmclass( (GtkWindow*)g_type_check_instance_cast( &log_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), "PCB_Log", "PCB" );
    gtk_window_set_default_size( (GtkWindow*)g_type_check_instance_cast( &log_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), ghidgui->log_window_width, ghidgui->log_window_height );
    vbox = gtk_vbox_new( 0, 0 );
    gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), 6 );
    gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &log_window->object.parent_instance.g_type_instance, gtk_container_get_type( ) ), vbox );
    log_text = ghid_scrolled_text_view( vbox, 0, 1, 1 );
    hbox = gtk_hbutton_box_new( );
    gtk_button_box_set_layout( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_button_box_get_type( ) ), 4 );
    gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), hbox, 0, 0, 0 );
    g_signal_connect_data( g_type_check_instance_cast( (GTypeInstance*)gtk_button_new_from_stock( "gtk-close" ), 80 ), "clicked", &log_close_cb, 0, 0, 0 );
    gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), button, 1, 1, 0 );
    gtk_widget_realize( log_window );
    if ( Settings.AutoPlace )
    {
      gtk_widget_set_uposition( (GtkWidget*)g_type_check_instance_cast( &log_window->object.parent_instance.g_type_instance, gtk_widget_get_type( ) ), 10, 10 );
    }
    raise = log_window;
  }
}
void ghid_log( char *fmt, ... )
{
  /* phantom */ va_list ap;
  ghid_logv( fmt, ebp_12 );
  return;
}
void ghid_logv( char *fmt, va_list args )
{
  int eax;
  int edx;
  int i;
  if ( msg_buffer )
  {
  }
  else
  {
    msg_buffer = (char*)calloc( 1, 1002 );
    if ( msg_buffer == 0 )
    {
      __fprintf_chk( stderr, 1, "ghid_logv():  malloc failed\n\n" );
      exit( 1 );
    }
    msg_buffer_size = 1000;
  }
  if ( msg_buffer_size <= i )
  {
    msg_buffer_size = __vsnprintf_chk( msg_buffer, msg_buffer_size, 1, -1, fmt, args ) + 100;
    msg_buffer = realloc( msg_buffer, ( __vsnprintf_chk( msg_buffer, msg_buffer_size, 1, -1, fmt, args ) + 102 ) * sizeof( char ) );
    if ( msg_buffer == 0 )
    {
      __fprintf_chk( stderr, 1, "ghid_logv():  malloc failed\n\n" );
      exit( 1 );
    }
    __vsnprintf_chk( msg_buffer, msg_buffer_size, 1, -1, fmt, args );
  }
  ghid_log_window_show( 0 );
  args = msg_buffer;
  fmt = (char*)log_text;
}
#if 0
#endif
