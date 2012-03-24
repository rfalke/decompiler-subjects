#include "gui-command-window.c.h"
static GtkWidget *command_window;
static GtkWidget *combo_vbox;
static GList *history_list;
static gchar *command_entered;
static GMainLoop *loop;
static gchar *command_ref_text[51] = { "Common commands easily accessible via the gui may not be included here.\n", "\n", "In user commands below, 'size' values may be absolute or relative\nif preceded by a '+' or '-'.  Where 'units' are indicated, use \n'mil' or 'mm' otherwise PCB internal units will be used.\n", "\n", "&lt;b&gt;changesize(target, size, units)\n", "\ttarget = {selectedlines | selectedpins | selectedvias | selectedpads \n\t\t\t| selectedtexts | selectednames | selectedelements | selected}\n", "\n", "&lt;b&gt;changedrillsize(target, size, units)\n", "\ttarget = {selectedpins | selectedvias | selectedobjects | selected}\n", "\n", "&lt;b&gt;changeclearsize(target, size, units)\n", "\ttarget = {selectedpins | selectedpads | selectedvias | selectedlines\n\t\t\t| selectedarcs | selectedobjects | selected}\n", "\tChanges the clearance of objects.\n", "\n", "&lt;b&gt;setvalue(target, size, units)\n", "\ttarget = {grid | zoom | line | textscale | viadrillinghole\n\t\t\t| viadrillinghole | via}\n", "\tChanges values.  Omit 'units' for 'grid' and 'zoom'.\n", "\n", "&lt;b&gt;changejoin(target)\n", "\ttarget = {object | selectedlines | selectedarcs | selected}\n", "\tChanges the join (clearance through polygons) of objects.\n", "\n", "&lt;b&gt;changesquare(target)\n", "&lt;b&gt;setsquare(target)\n", "&lt;b&gt;clearsquare(target)\n", "\ttarget = {object | selectedelements | selectedpins | selected}\n", "\tToggles, sets, or clears the square flag of objects.\n", "\n", "&lt;b&gt;changeoctagon(target)\n", "&lt;b&gt;setoctagon(target)\n", "&lt;b&gt;clearoctagon(target)\n", "\ttarget = {object | selectedelements | selectedpins selectedvias | selected}\n", "\tToggles, sets, or clears the octagon flag of objects.\n", "\n", "&lt;b&gt;changehole(target)\n", "\ttarget = {object | selectedvias | selected}\n", "\tChanges the hole flag of objects.\n", "\n", "&lt;b&gt;flip(target)\n", "\ttarget = {object | selectedelements | selected}\n", "\tFlip elements to the opposite side of the board.\n", "\n", "&lt;b&gt;togglethermal(target)\n", "&lt;b&gt;setthermal(target)\n", "&lt;b&gt;clearthermal(target)\n", "\ttarget = {object | selectedpins | selectedvias | selected}\n", "\tToggle, set or clear a thermal (on the current layer) to pins or vias.\n", "\n", "&lt;b&gt;loadvendor(target)\n", "\ttarget = [filename]\n", "\tLoad a vendor file.  If 'filename' omitted, pop up file select dialog.\n" };
void command_entry_activate_cb( GtkWidget *widget, gpointer data )
{
  int edx;
  int ebp_28;
  gchar *command;
  command[0] = g_strdup( ghid_entry_get_text( (GtkWidget*)g_type_check_instance_cast( &ghidgui->command_entry->widget.object.parent_instance.g_type_instance, gtk_widget_get_type( ) ) ) );
  gtk_entry_set_text( &ghidgui->command_entry, "" );
  if ( command[0] )
  {
    if ( history_list )
    {
      ebp_28 = 0;
      for ( ; strcmp( command, *(int*)(history_list->next) ) == 0; ebp_28++ )
      {
        if ( history_list->next == 0 )
          goto B15;
        else
        {
          // ebp_28++;
        }
      }
    }
B15:;
    history_list = g_list_prepend( history_list, g_strdup( command ) );
    gtk_combo_box_prepend_text( g_type_check_instance_cast( &ghidgui->command_combo_box->object.parent_instance.g_type_instance, gtk_combo_box_get_type( ) ), g_strdup( command ) );
    if ( ghidgui->history_size < g_list_length( history_list ) )
    {
      history_list = g_list_remove( history_list, g_list_nth_data( history_list, ghidgui->history_size ) );
      gtk_combo_box_remove_text( g_type_check_instance_cast( &ghidgui->command_combo_box->object.parent_instance.g_type_instance, gtk_combo_box_get_type( ) ), ghidgui->history_size );
      g_free( g_list_nth_data( history_list, ghidgui->history_size ) );
    }
    else
    {
      if ( ghidgui->use_command_window )
      {
        HideCrosshair( 1 );
        hid_parse_actions( command, 0 );
        RestoreCrosshair( 1 );
        widget = &command[0];
      }
      if ( loop && g_main_loop_is_running( loop[0] ) )
      {
        g_main_loop_quit( loop[0] );
        command_entered = command;
        return;
      }
      command_entered = command;
      return;
    }
  }
}
void command_combo_box_entry_create( void )
{
  ghidgui->command_combo_box = gtk_combo_box_entry_new_text( );
  ghidgui->command_entry = g_type_check_instance_cast( *(int*)g_type_check_instance_cast( &ghidgui->command_combo_box->object.parent_instance.g_type_instance, gtk_bin_get_type( ) )/*.68*/, gtk_entry_get_type( ) );
  gtk_entry_set_width_chars( &ghidgui->command_entry, 40 );
  gtk_entry_set_activates_default( &ghidgui->command_entry, 1 );
  g_signal_connect_data( g_type_check_instance_cast( &ghidgui->command_entry->widget.object.parent_instance.g_type_instance, 80 ), "activate", &command_entry_activate_cb, 0, 0, 0 );
  g_object_ref( g_type_check_instance_cast( &ghidgui->command_combo_box->object.parent_instance.g_type_instance, 80 ) );
  return;
}
void command_window_close_cb( void )
{
  if ( command_window )
  {
    gtk_container_remove( (GtkContainer*)g_type_check_instance_cast( &combo_vbox->object.parent_instance.g_type_instance, gtk_container_get_type( ) ), &ghidgui->command_combo_box );
    gtk_widget_destroy( command_window );
  }
  combo_vbox = 0;
  command_window = 0;
  return;
}
void command_destroy_cb( GtkWidget *widget, gpointer data )
{
  command_window = 0;
  return;
}
void ghid_command_use_command_window_sync( void )
{
  if ( ghidgui->command_combo_box )
  {
    if ( ghidgui->use_command_window )
    {
      gtk_container_remove( (GtkContainer*)g_type_check_instance_cast( &ghidgui->status_line_hbox->object.parent_instance.g_type_instance, gtk_container_get_type( ) ), &ghidgui->command_combo_box );
      return;
    }
    command_window_close_cb( );
    gtk_widget_hide( &ghidgui->command_combo_box );
    gtk_box_pack_start( g_type_check_instance_cast( &ghidgui->status_line_hbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), &ghidgui->command_combo_box, 0, 0, 0 );
  }
  return;
}
void ghid_command_window_show( gboolean raise )
{
  int eax;
  GtkWidget *vbox, *vbox1, *hbox, *button, *expander, *text;
  gint i;
  if ( command_window )
  {
    if ( raise )
    {
      raise = g_type_check_instance_cast( &command_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) );
    }
    return;
  }
  else
  {
    command_window = gtk_window_new( 0 );
    g_signal_connect_data( g_type_check_instance_cast( &command_window[0].object.parent_instance.g_type_instance, 80 ), "destroy", &command_destroy_cb, 0, 0, 0 );
    gtk_window_set_title( (GtkWindow*)g_type_check_instance_cast( &command_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), dcgettext( "pcb", "PCB Command Entry", 5 ) );
    gtk_window_set_wmclass( (GtkWindow*)g_type_check_instance_cast( &command_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), "PCB_Command", "PCB" );
    gtk_window_set_resizable( (GtkWindow*)g_type_check_instance_cast( &command_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), 0 );
    vbox = gtk_vbox_new( 0, 0 );
    text = gtk_container_get_type( );
    gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, text ), 6 );
    gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &command_window->object.parent_instance.g_type_instance, text ), vbox );
    if ( ghidgui->command_combo_box == 0 )
    {
      command_combo_box_entry_create( );
    }
    gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), &ghidgui->command_combo_box, 0, 0, 0 );
    combo_vbox = vbox;
    expander = gtk_expander_new( "Command Reference" );
    gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), expander, 1, 1, 2 );
    vbox1 = gtk_vbox_new( 0, 0 );
    gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &expander->object.parent_instance.g_type_instance, text ), vbox1 );
    gtk_widget_set_size_request( vbox1, -1, 350 );
    i = 0;
    text = ghid_scrolled_text_view( vbox1, 0, 2, 1 );
    do
    {
      ghid_text_view_append( text, dcgettext( "pcb", command_ref_text[ i ], 5 ) );
    }
    while ( i == 51 );
    hbox = gtk_hbutton_box_new( );
    gtk_button_box_set_layout( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_button_box_get_type( ) ), 4 );
    gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), hbox, 0, 0, 3 );
    button = gtk_button_new_from_stock( "gtk-close" );
    g_signal_connect_data( g_type_check_instance_cast( (GTypeInstance*)gtk_button_new_from_stock( "gtk-close" ), 80 ), "clicked", &command_window_close_cb, 0, 0, 0 );
    gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), button, 1, 1, 0 );
    raise = command_window;
  }
}
gboolean command_escape_cb( GtkWidget *widget, GdkEventKey *kev, gpointer data )
{
  /* phantom */ gint ksym;
  if ( kev->keyval == 65307 )
  {
    if ( loop && g_main_loop_is_running( loop[0] ) )
    {
      g_main_loop_quit( loop[0] );
    }
    command_entered = 0;
    return 1;
  }
  else
  {
    return 0;
  }
}
gchar *ghid_command_entry_get( gchar *prompt, gchar *command )
{
  int eax;
  /* phantom */ gchar *s;
  /* phantom */ gint escape_sig_id;
  /* phantom */ GHidPort *out;
  if ( ghidgui->command_combo_box == 0 )
  {
    command_combo_box_entry_create( );
    gtk_box_pack_start( g_type_check_instance_cast( &ghidgui->status_line_hbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), &ghidgui->command_combo_box, 0, 0, 0 );
  }
  prompt[0] = prompt == 0 ? prompt : "";
  ghid_status_line_set_text( g_strdup_printf( "&lt;b&gt;%s&lt;/b&gt;", prompt == 0 ? prompt : "" ) );
  g_free( *ebp_72 );
  command[0] = command == 0 ? command : "";
  ghidgui->command_entry_status_line_active = 1;
  gtk_entry_set_text( &ghidgui->command_entry, command == 0 ? command : "" );
  gtk_widget_show_all( &ghidgui->command_combo_box );
  gtk_window_remove_accel_group( (GtkWindow*)g_type_check_instance_cast( &ghid_port.top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), gtk_ui_manager_get_accel_group( &ghidgui->ui_manager->parent.g_type_instance.g_class->g_type ) );
  ghid_interface_input_signals_disconnect( );
  ghid_interface_set_sensitive( 0 );
  gtk_widget_grab_focus( (GtkWidget*)g_type_check_instance_cast( &ghidgui->command_entry->widget.object.parent_instance.g_type_instance, gtk_widget_get_type( ) ) );
  loop = g_main_loop_new( 0, 0 );
  g_main_loop_run( g_main_loop_new( 0, 0 ) );
  g_main_loop_unref( loop[0] );
  loop = 0;
  ghidgui->command_entry_status_line_active = 0;
  g_signal_handler_disconnect( &ghidgui->command_entry, g_signal_connect_data( g_type_check_instance_cast( &ghidgui->command_entry->widget.object.parent_instance.g_type_instance, 80 ), "key_press_event", &command_escape_cb, 0, 0, 0 ) );
  ghid_interface_input_signals_connect( );
  ghid_interface_set_sensitive( 1 );
  gtk_window_add_accel_group( (GtkWindow*)g_type_check_instance_cast( &ghid_port.top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), gtk_ui_manager_get_accel_group( &ghidgui->ui_manager->parent.g_type_instance.g_class->g_type ) );
  gtk_widget_hide( &ghidgui->command_combo_box );
  gtk_widget_grab_focus( ghid_port.drawing_area );
  return command_entered;
}
void ghid_handle_user_command( gboolean raise )
{
  int eax;
  int edx;
  static char *previous;
  char *command;
  if ( ghidgui->use_command_window )
  {
    ghid_command_window_show( raise );
  }
  HideCrosshair( 1 );
  if ( Settings.SaveLastCommand )
  {
    command[0] = ghid_command_entry_get( "Enter command:", previous == 0 ? previous : "" );
    if ( ghid_command_entry_get( "Enter command:", previous == 0 ? previous : "" ) )
    {
      g_free( previous );
      previous = g_strdup( command );
      hid_parse_actions( command, 0 );
      g_free( g_strdup( command ) );
      RestoreCrosshair( 1 );
    }
  }
  else
  {
    command[0] = ghid_command_entry_get( "Enter command:", "" );
    if ( ghid_command_entry_get( "Enter command:", "" ) )
    {
      g_free( previous );
      previous = g_strdup( command );
      hid_parse_actions( command, 0 );
      g_free( g_strdup( command ) );
      RestoreCrosshair( 1 );
    }
  }
  if ( previous == 0 )
  {
    RestoreCrosshair( 1 );
  }
  hid_parse_actions( command, 0 );
  g_free( g_strdup( command ) );
  RestoreCrosshair( 1 );
}
#if 0
#endif
