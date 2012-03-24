#include "gui-pinout-window.c.h"
void pinout_close_cb( GtkWidget *widget, GtkWidget *top_window )
{
  widget = top_window;
}
void ghid_pinout_window_show( GHidPort *out, ElementType *element )
{
  GtkWidget *button, *viewport, *vbox, *hbox, *preview, *top_window;
  /* phantom */ gchar *title;
  int width, height;
  if ( element )
  {
    if ( element->Name[2].TextString && element->Name[2].TextString[0] )
    {
      if ( element->Name->TextString == 0 || element->Name->TextString[0] == 0 )
      {
      }
      top_window = gtk_window_new( 0 );
      gtk_window_set_title( (GtkWindow*)g_type_check_instance_cast( &top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), g_strdup_printf( "%s [%s,%s]", element->Name->TextString, element->Name[1].TextString, element->Name[2].TextString ) );
      g_free( g_strdup_printf( "%s [%s,%s]", element->Name->TextString, element->Name[1].TextString, element->Name[2].TextString ) );
      gtk_window_set_wmclass( (GtkWindow*)g_type_check_instance_cast( &top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), "PCB_Pinout", "PCB" );
      gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &top_window[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), 4 );
      vbox = gtk_vbox_new( 0, 0 );
      gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &top_window[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), vbox );
      viewport = gtk_viewport_new( 0, 0 );
      gtk_viewport_set_shadow_type( g_type_check_instance_cast( &viewport[0].object.parent_instance.g_type_instance, gtk_viewport_get_type( ) ), 1 );
      gtk_box_pack_start( g_type_check_instance_cast( &vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), viewport, 1, 1, 0 );
      preview = ghid_pinout_preview_new( element );
      gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &viewport[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), preview );
      ghid_pinout_preview_get_natural_size( (GhidPinoutPreview*)g_type_check_instance_cast( &preview[0].object.parent_instance.g_type_instance, ghid_pinout_preview_get_type( ) ), &width, &height );
      gtk_window_set_default_size( (GtkWindow*)g_type_check_instance_cast( &top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), width + 50, height + 50 );
      hbox = gtk_hbutton_box_new( );
      gtk_button_box_set_layout( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_button_box_get_type( ) ), 4 );
      gtk_box_pack_start( g_type_check_instance_cast( &vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), hbox, 0, 0, 0 );
      button = gtk_button_new_from_stock( "gtk-close" );
      g_signal_connect_data( g_type_check_instance_cast( (GTypeInstance*)gtk_button_new_from_stock( "gtk-close" ), 80 ), "clicked", &pinout_close_cb, &top_window, 0, 0 );
      gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), button, 1, 1, 0 );
      gtk_widget_realize( top_window );
      if ( Settings.AutoPlace )
        gtk_widget_set_uposition( top_window, 10, 10 );
      gtk_widget_show_all( top_window );
    }
    else
    if ( element->Name[1].TextString == 0 )
    {
    }
    if ( element->Name[1].TextString[0] == 0 )
      continue;
  }
  return;
}
#if 0
#endif
