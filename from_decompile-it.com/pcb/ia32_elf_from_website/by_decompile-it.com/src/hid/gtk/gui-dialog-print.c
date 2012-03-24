#include "gui-dialog-print.c.h"
static GtkWidget *export_dialog;
void set_flag_cb( GtkToggleButton *button, gboolean *flag )
{
  flag[0] = gtk_toggle_button_get_active( button );
  return;
}
void intspinner_changed_cb( GtkWidget *spin_button, gpointer data )
{
  /* phantom */ int *ival;
  gtk_spin_button_get_value( (GtkSpinButton*)g_type_check_instance_cast( &spin_button->object.parent_instance.g_type_instance, gtk_spin_button_get_type( ) ) );
  *(int*)(data) = (int)( 0.000000000000 );
  return;
}
void dblspinner_changed_cb( GtkWidget *spin_button, gpointer data )
{
  /* phantom */ double *dval;
  gtk_spin_button_get_value( (GtkSpinButton*)g_type_check_instance_cast( &spin_button->object.parent_instance.g_type_instance, gtk_spin_button_get_type( ) ) );
  *(double*)(data) = 0.000000000000;
  return;
}
void entry_changed_cb( GtkEntry *entry, char **str )
{
  int ebx;
  int esi;
  gchar *s;
  s[0] = gtk_entry_get_text( entry );
  if ( str[0] )
    free( str[0] );
  str[0] = __strdup( s );
  return;
}
void enum_changed_cb( GtkWidget *combo_box, int *val )
{
  gint active = combo_box;
  val[0] = active;
  return;
}
int ghid_attribute_dialog( HID_Attribute *attrs, int n_attrs, HID_Attr_Val *results, char *title, char *descr )
{
  GtkWidget *dialog, *main_vbox, *vbox, *vbox1, *hbox, *entry;
  GtkWidget *combo;
  GtkWidget *widget;
  /* phantom */ GHidPort *out;
  int i, j;
  GtkTooltips *tips = gtk_tooltips_new( );
  int rc;
  dialog = gtk_dialog_new_with_buttons( dcgettext( "pcb", title, 5 ), (GtkWindow*)g_type_check_instance_cast( &ghid_port.top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), 3, "gtk-cancel", -1, "gtk-ok", (long long)-5 );
  gtk_window_set_wmclass( (GtkWindow*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), "PCB_attribute_editor", "PCB" );
  main_vbox = gtk_vbox_new( 0, 6 );
  gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &main_vbox[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), 6 );
  gtk_container_add( (GtkContainer*)g_type_check_instance_cast( *(int*)g_type_check_instance_cast( &dialog->object.parent_instance.g_type_instance, gtk_dialog_get_type( ) )/*.148*/, gtk_container_get_type( ) ), main_vbox );
  descr = descr == 0 ? descr : "";
  vbox = ghid_category_vbox( main_vbox, descr == 0 ? descr : "", 4, 2, 1, 1 );
  if ( n_attrs > 0 )
  {
    j = 0;
    do
    {
      if ( attrs[1].help_text != 1 )
      {
        switch ( attrs[1].type )
        {
        case 6:
          __printf_chk( 1, 1, 1, "HID_Mixed\n", "HID_Mixed\n", "HID_Mixed\n" );
          j++;
          break;
        default:
          __printf_chk( 1, "%s: unknown type of HID attribute\n", __FUNCTION__ );
          break;
        case 0:
          widget = gtk_label_new( &attrs[1].name );
          widget = gtk_label_new( &attrs[1].name );
          gtk_box_pack_start( g_type_check_instance_cast( &vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), widget, 0, 0, 0 );
          gtk_tooltips_set_tip( tips, widget, &attrs[1].help_text, 0 );
          break;
        case 1:
          hbox = gtk_hbox_new( 0, 4 );
          gtk_box_pack_start( g_type_check_instance_cast( &vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), hbox, 0, 0, 0 );
          ghid_spin_button( hbox, &widget, ebp_160, ebp_156, ebp_152, ebp_148, ebp_144, ebp_140, ebp_136, ebp_132, ebp_128, ebp_124, ebp_120 );
          gtk_tooltips_set_tip( tips, widget, &attrs[1].help_text, 0 );
          widget = gtk_label_new( &attrs[1].name );
          gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), widget, 0, 0, 0 );
          break;
        case 2:
          hbox = gtk_hbox_new( 0, 4 );
          gtk_box_pack_start( g_type_check_instance_cast( &vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), hbox, 0, 0, 0 );
          ghid_spin_button( hbox, &widget, ebp_160, ebp_156, ebp_152, ebp_148, ebp_144, ebp_140, ebp_136, ebp_132, ebp_128, ebp_124, ebp_120 );
          gtk_tooltips_set_tip( tips, widget, &attrs[1].help_text, 0 );
          widget = gtk_label_new( &attrs[1].name );
          gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), widget, 0, 0, 0 );
          break;
        case 3:
          combo = gtk_hbox_new( 0, 4 );
          gtk_box_pack_start( g_type_check_instance_cast( &vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), combo, 0, 0, 0 );
          entry = gtk_entry_new( );
          gtk_box_pack_start( g_type_check_instance_cast( &combo->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), entry, 0, 0, 0 );
          gtk_entry_set_text( (GtkEntry*)g_type_check_instance_cast( &entry[0].object.parent_instance.g_type_instance, gtk_entry_get_type( ) ), &attrs[1].default_val.str_value );
          gtk_tooltips_set_tip( tips, entry, &attrs[1].help_text, 0 );
          g_signal_connect_data( g_type_check_instance_cast( &entry[0].object.parent_instance.g_type_instance, 80 ), "changed", &entry_changed_cb, attrs + 48 + 24, 0, 0 );
          widget = gtk_label_new( &attrs[1].name );
          widget = gtk_label_new( &attrs[1].name );
          break;
        case 4:
          ghid_check_button_connected( vbox, &widget, attrs[1].default_val.int_value, 1, 0, 0, 0, &set_flag_cb, attrs + 48 + 20, &attrs[1].name );
          gtk_tooltips_set_tip( tips, widget, &attrs[1].help_text, 0 );
          break;
        case 5:
          gtk_box_pack_start( g_type_check_instance_cast( &vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), gtk_hbox_new( 0, 4 ), 0, 0, 0 );
          widget = gtk_event_box_new( );
          gtk_tooltips_set_tip( tips, widget, &attrs[1].help_text, 0 );
          gtk_box_pack_start( g_type_check_instance_cast( (GTypeInstance*)gtk_hbox_new( 0, 4 ), gtk_box_get_type( ) ), widget, 0, 0, 0 );
          combo = gtk_combo_box_new_text( );
          gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &widget->object.parent_instance.g_type_instance, gtk_container_get_type( ) ), combo );
          g_signal_connect_data( g_type_check_instance_cast( &combo->object.parent_instance.g_type_instance, 80 ), "changed", &enum_changed_cb, attrs + 48 + 20, 0, 0 );
          if ( attrs[1].enumerations[0] )
          {
            do
            {
              gtk_combo_box_append_text( g_type_check_instance_cast( &combo->object.parent_instance.g_type_instance, gtk_combo_box_get_type( ) ), &attrs[1].enumerations[0] );
            }
            while ( *(int*)(4 + 4 + *(int*)(attrs + 48 + 36)) == 0 );
            j = j;
          }
          else
          {
          }
          gtk_combo_box_set_active( &eax, edi );
          widget = gtk_label_new( &attrs[1].name );
          widget = gtk_label_new( &attrs[1].name );
          break;
        case 7:
          entry = gtk_entry_new( );
          gtk_box_pack_start( &eax, entry, 0, 0, 0 );
          gtk_entry_set_text( (GtkEntry*)g_type_check_instance_cast( &entry[0].object.parent_instance.g_type_instance, gtk_entry_get_type( ) ), &attrs[1].default_val.str_value );
          g_signal_connect_data( g_type_check_instance_cast( &entry[0].object.parent_instance.g_type_instance, 80 ), "changed", &entry_changed_cb, attrs + 48 + 24, 0, 0 );
          gtk_tooltips_set_tip( tips, entry, &attrs[1].help_text, 0 );
          break;
        }
        gtk_box_pack_start( g_type_check_instance_cast( ebp_168, ebp_164 ), &widget->object.parent_instance.g_type_instance.g_class->g_type, 0, 0, 0 );
      }
      j++;
      if ( j + 1 < n_attrs )
        continue;
    }
    while ( j < n_attrs );
  }
  rc = 1;
  gtk_widget_show_all( dialog );
  if ( gtk_dialog_run( (GtkDialog*)g_type_check_instance_cast( &dialog->object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ) ) == -5 )
  {
    if ( n_attrs > 0 )
    {
      i = 0;
      do
      {
        results[1].int_value = attrs[1].default_val.int_value;
        results[1].str_value = attrs[1].default_val.str_value;
        results[1].real_value & 0xFFFFFFFF = attrs[1].default_val.real_value & 0xFFFFFFFF;
        results[1].real_value << 32 = attrs[1].default_val.real_value << 32;
        if ( attrs->default_val.str_value )
        {
          results->str_value = __strdup( &attrs[1].default_val.str_value );
        }
        i++;
      }
      while ( i + 1 < n_attrs );
    }
    rc = 0;
  }
  gtk_widget_destroy( dialog );
  return rc;
}
void exporter_clicked_cb( GtkButton *button, HID *exporter )
{
  button = &exporter->struct_size;
}
void ghid_dialog_print( HID *exporter )
{
  HID_Attribute *attr;
  int n = 0;
  int i;
  HID_Attr_Val *results;
  if ( export_dialog )
  {
    gtk_dialog_response( (GtkDialog*)g_type_check_instance_cast( &export_dialog->object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ), -6 );
  }
  results = 0;
  ;
}
void ghid_dialog_export( void )
{
  GtkWidget *vbox, *button;
  /* phantom */ GHidPort *out;
  /* phantom */ int i;
  HID **hids;
  GtkTooltips *tips = gtk_tooltips_new( );
  export_dialog = gtk_dialog_new_with_buttons( dcgettext( "pcb", "PCB Export Layout", 5 ), (GtkWindow*)g_type_check_instance_cast( &ghid_port.top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), 3, "gtk-cancel", (long long)-6 );
  gtk_window_set_wmclass( (GtkWindow*)g_type_check_instance_cast( &export_dialog[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), "PCB_Export", "PCB" );
  vbox = gtk_vbox_new( 0, 6 );
  gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &vbox->object.parent_instance.g_type_instance, gtk_container_get_type( ) ), 6 );
  gtk_container_add( (GtkContainer*)g_type_check_instance_cast( *(int*)g_type_check_instance_cast( &export_dialog->object.parent_instance.g_type_instance, gtk_dialog_get_type( ) )/*.148*/, gtk_container_get_type( ) ), vbox );
  hids[0] = hid_enumerate( );
  if ( hids[0] )
  {
    do
    {
      if ( ( *(char*)(hids[2] + 12) & 4 ) & 255 )
      {
        exporter = hids[2];
        button = gtk_button_new_with_label( &hids[1]->struct_size );
        gtk_tooltips_set_tip( tips, gtk_button_new_with_label( &hids[1]->struct_size ), &hids[2]->struct_size, 0 );
        gtk_box_pack_start( g_type_check_instance_cast( &vbox->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), button, 0, 0, 0 );
        hids[0] = hids + 4;
        g_signal_connect_data( g_type_check_instance_cast( &button[0].object.parent_instance.g_type_instance, 80 ), "clicked", &exporter_clicked_cb, &hids[0], 0, 0 );
      }
      else
      {
        hids[0] = hids + 4 + 4;
        if ( hids[2] )
          continue;
        else
          break;
      }
    }
    while ( hids[2] );
  }
  if ( exporter == 0 )
  {
    ebx( dcgettext( "pcb", "Can't find a suitable exporter HID", 5 ) );
  }
  gtk_widget_show_all( export_dialog );
  gtk_dialog_run( (GtkDialog*)g_type_check_instance_cast( &export_dialog->object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ) );
  if ( export_dialog )
  {
    gtk_widget_destroy( export_dialog );
  }
  export_dialog = 0;
  exporter = 0;
  return;
}
#if 0
#endif
