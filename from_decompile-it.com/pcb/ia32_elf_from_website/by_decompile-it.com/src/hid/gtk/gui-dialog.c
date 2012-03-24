#include "gui-dialog.c.h"
static int n_recent_dirs;
static ghid_file_history *recent_dirs;
gchar *ghid_dialog_input( gchar *prompt, gchar *initial )
{
  int edx;
  GtkWidget *dialog = gtk_dialog_new_with_buttons( "PCB User Input", (GtkWindow*)g_type_check_instance_cast( &ghid_port.top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), 1, "gtk-cancel", -6, "gtk-ok", (long long)-5 ), *vbox, *label, *entry;
  gchar *string;
  gboolean response;
  /* phantom */ GHidPort *out;
  gtk_dialog_set_default_response( (GtkDialog*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ), -5 );
  vbox = gtk_vbox_new( 0, 4 );
  gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), 4 );
  label = gtk_label_new( "" );
  gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), label, 1, 1, 0 );
  gtk_label_set_use_markup( g_type_check_instance_cast( &label->object.parent_instance.g_type_instance, gtk_label_get_type( ) ), 1 );
  prompt = prompt != 0 ? "Enter something" : prompt;
  gtk_label_set_markup( g_type_check_instance_cast( &label->object.parent_instance.g_type_instance, gtk_label_get_type( ) ), prompt );
  entry = gtk_entry_new( );
  if ( initial )
  {
    gtk_entry_set_text( (GtkEntry*)g_type_check_instance_cast( &entry->object.parent_instance.g_type_instance, gtk_entry_get_type( ) ), initial );
  }
  else
  {
  }
  gtk_entry_set_activates_default( (GtkEntry*)g_type_check_instance_cast( &entry->object.parent_instance.g_type_instance, gtk_entry_get_type( ) ), 1 );
  gtk_box_pack_start_defaults( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), entry );
  gtk_container_add( (GtkContainer*)g_type_check_instance_cast( *(int*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_dialog_get_type( ) )/*.148*/, gtk_container_get_type( ) ), vbox );
  gtk_widget_show_all( dialog );
  gtk_widget_destroy( dialog );
  return string;
}
void ghid_dialog_about( void )
{
  GtkWidget *dialog = gtk_message_dialog_new( (GtkWindow*)g_type_check_instance_cast( &ghid_port.top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), 3, 0, 1, GetInfoString( ) );
  /* phantom */ GHidPort *out;
  gtk_dialog_run( (GtkDialog*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ) );
  gtk_widget_destroy( dialog );
  return;
}
gint ghid_dialog_confirm_all( gchar *all_message )
{
  GtkWidget *dialog = gtk_dialog_new_with_buttons( "Confirm", (GtkWindow*)g_type_check_instance_cast( &ghid_port.top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), 3, "gtk-cancel", -6, "gtk-ok", -5, "Sequence OK", (long long)1 ), *label, *vbox = ghid_framed_vbox( *(int*)(GtkWidget*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_dialog_get_type( ) )/*.148*/, 0, 6, 0, 4, 6 );
  gint response;
  /* phantom */ GHidPort *out;
  label = gtk_label_new( all_message );
  gtk_box_pack_start( &eax, label, 0, 0, 3 );
  gtk_widget_show_all( dialog );
  response = gtk_dialog_run( (GtkDialog*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ) );
  gtk_widget_destroy( dialog );
  return response;
}
void ghid_dialog_message( gchar *message )
{
  GtkWidget *dialog = gtk_message_dialog_new( (GtkWindow*)g_type_check_instance_cast( &ghid_port.top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), 3, 1, 1, message );
  /* phantom */ GHidPort *out;
  gtk_dialog_run( (GtkDialog*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ) );
  message = (gchar*)dialog;
}
gboolean ghid_dialog_confirm( gchar *message, gchar *cancelmsg, gchar *okmsg )
{
  static gint x = -1;
  static gint y = -1;
  GtkWidget *dialog;
  /* phantom */ gboolean confirm;
  /* phantom */ GHidPort *out;
  if ( cancelmsg == 0 )
  {
    cancelmsg = dcgettext( "pcb", "_Cancel", 5 );
  }
  if ( okmsg == 0 )
  {
    okmsg[0] = dcgettext( "pcb", "_OK", 5 );
  }
  dialog = gtk_message_dialog_new( (GtkWindow*)g_type_check_instance_cast( &ghid_port.top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), 3, 2, 0, message );
  gtk_dialog_add_buttons( (GtkDialog*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ), cancelmsg, -6, okmsg, (long long)-5 );
  if ( x != -1 )
  {
    gtk_window_move( (GtkWindow*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), x, y );
  }
  gtk_window_get_position( (GtkWindow*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), &x, &y );
  gtk_widget_destroy( dialog );
  return edi == -5;
}
int ghid_dialog_close_confirm( void )
{
  GtkWidget *dialog;
  gint rv;
  /* phantom */ GHidPort *out;
  gchar *tmp;
  /* phantom */ gchar *str;
  g_free( tmp );
  dialog = gtk_message_dialog_new( (GtkWindow*)g_type_check_instance_cast( &ghid_port.top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), 3, 1, 0, 0 );
  gtk_message_dialog_set_markup( g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_message_dialog_get_type( ) ), g_strconcat( g_strconcat( "&lt;big&gt;&lt;b&gt;", tmp, (long long)( "&lt;/b&gt;&lt;/big&gt;" ) ), "\n\n", (long long)( dcgettext( "pcb", "If you don't save, all your changes will be permanently lost.", 5 ) ) ) );
  gtk_dialog_add_buttons( (GtkDialog*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ), dcgettext( "pcb", "Close without saving", 5 ), -9, "gtk-cancel", -6, "gtk-save", (long long)-8 );
  gtk_dialog_set_alternative_button_order( (GtkDialog*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ), -8, -9, -6, -1 );
  rv = 0;
  gtk_widget_destroy( dialog );
  return rv;
}
gchar *ghid_dialog_file_select_open( gchar *title, gchar **path, gchar *shortcuts )
{
  GtkWidget *dialog = gtk_file_chooser_dialog_new( title, (GtkWindow*)g_type_check_instance_cast( &ghid_port.top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), 0, "gtk-cancel", -6, "gtk-ok", (long long)-5 );
  gchar *result, *folder, *seed;
  /* phantom */ GHidPort *out;
  GtkFileFilter *no_filter;
  gtk_dialog_set_default_response( (GtkDialog*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ), -5 );
  no_filter = gtk_file_filter_new( );
  gtk_file_filter_set_name( &no_filter, "all" );
  gtk_file_filter_add_pattern( &no_filter, "*.*" );
  gtk_file_filter_add_pattern( &no_filter, "*" );
  gtk_file_chooser_add_filter( g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_file_chooser_get_type( ) ), &no_filter );
{
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
  if ( strcmp( title, dcgettext( "pcb", "Load element to buffer", 5 ) ) == 0 )
  {
    GtkFileFilter *fp_filter;
    no_filter = gtk_file_filter_new( );
    gtk_file_filter_set_name( &no_filter, "fp" );
    gtk_file_filter_add_mime_type( &no_filter, "application/x-pcb-footprint" );
    gtk_file_filter_add_pattern( &no_filter, "*.fp" );
    gtk_file_filter_add_pattern( &no_filter, "*.FP" );
    gtk_file_chooser_add_filter( g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_file_chooser_get_type( ) ), &no_filter );
  }
{
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
  if ( strcmp( title, dcgettext( "pcb", "Load layout file", 5 ) ) == 0 || strcmp( title, dcgettext( "pcb", "Load layout file to buffer", 5 ) ) == 0 )
  {
    GtkFileFilter *pcb_filter;
    no_filter = gtk_file_filter_new( );
    gtk_file_filter_set_name( &no_filter, "pcb" );
    gtk_file_filter_add_mime_type( &no_filter, "application/x-pcb-layout" );
    gtk_file_filter_add_pattern( &no_filter, "*.pcb" );
    gtk_file_filter_add_pattern( &no_filter, "*.PCB" );
    gtk_file_chooser_add_filter( g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_file_chooser_get_type( ) ), &no_filter );
  }
{
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
  if ( strcmp( title, dcgettext( "pcb", "Load netlist file", 5 ) ) == 0 )
  {
    GtkFileFilter *net_filter = gtk_file_filter_new( );
    gtk_file_filter_set_name( gtk_file_filter_new( ), "netlist" );
    gtk_file_filter_add_mime_type( &net_filter, "application/x-pcb-netlist" );
    gtk_file_filter_add_pattern( &net_filter, "*.net" );
    gtk_file_filter_add_pattern( &net_filter, "*.NET" );
    gtk_file_chooser_add_filter( g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_file_chooser_get_type( ) ), &net_filter );
  }
  if ( path && path[0] )
  {
    gtk_file_chooser_set_current_folder( g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_file_chooser_get_type( ) ), path[0] );
  }
  if ( shortcuts && shortcuts[0] )
  {
    g_strdup( shortcuts );
    for ( ; strtok( seed, ":" );  )
    {
      gtk_file_chooser_add_shortcut_folder( g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_file_chooser_get_type( ) ), folder, 0 );
      *(int*)&seed[0] = 0;
    }
    g_free( 0 );
  }
  result = 0;
  if ( gtk_dialog_run( (GtkDialog*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ) ) == -5 && gtk_dialog_run( (GtkDialog*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ) ) && path )
  {
    dup_string( path, &eax );
    g_free( folder );
  }
  gtk_widget_destroy( dialog );
  return result;
}
}
}
}
gchar *ghid_dialog_file_select_save( gchar *title, gchar **path, gchar *file, gchar *shortcuts )
{
  GtkWidget *dialog = gtk_file_chooser_dialog_new( title, (GtkWindow*)g_type_check_instance_cast( &ghid_port.top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), 1, "gtk-cancel", -6, "gtk-ok", (long long)-5 );
  gchar *result, *folder, *seed;
  /* phantom */ GHidPort *out;
  gtk_dialog_set_default_response( (GtkDialog*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ), -5 );
  if ( path && path[0] && path[0] )
  {
    gtk_file_chooser_set_current_folder( g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_file_chooser_get_type( ) ), path[0] );
  }
  if ( file && file[0] )
  {
    gtk_file_chooser_set_current_name( g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_file_chooser_get_type( ) ), file );
  }
  if ( shortcuts && shortcuts[0] )
  {
    g_strdup( shortcuts );
    for ( ; strtok( seed, ":" );  )
    {
      gtk_file_chooser_add_shortcut_folder( g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_file_chooser_get_type( ) ), folder, 0 );
      *(int*)&seed[0] = 0;
    }
    g_free( 0 );
  }
  result = 0;
  if ( gtk_dialog_run( (GtkDialog*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ) ) == -5 && gtk_file_chooser_get_current_folder( g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_file_chooser_get_type( ) ) ) && path )
  {
    dup_string( path, gtk_file_chooser_get_current_folder( g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_file_chooser_get_type( ) ) ) );
    g_free( folder );
  }
  gtk_widget_destroy( dialog );
  return result;
}
gchar *ghid_fileselect( char *title, char *descr, char *default_file, char *default_ext, char *history_tag, int flags )
{
  int eax;
  int edx;
  int ebp_40;
  GtkWidget *dialog;
  gchar *result;
  /* phantom */ GHidPort *out;
  gchar *path, *base;
  int history_pool;
  int i;
  if ( history_tag && history_tag[0] )
  {
    if ( n_recent_dirs > 0 )
    {
      history_pool = 0;
      dialog = &history_tag[0];
    {
      do
      {
        if ( strcmp( &recent_dirs[1].id, (char*)dialog ) == 0 )
          goto B11;
        else
        {
          history_pool++;
        }
      }
      while ( history_pool + 1 < n_recent_dirs );
      history_tag[0] = dialog;
    }
    }
    else
      history_pool = 0;
    n_recent_dirs++;
    recent_dirs = (ghid_file_history*)realloc( history_tag, ( n_recent_dirs + 1 ) * 36 );
    if ( recent_dirs == 0 )
    {
      __fprintf_chk( stderr, 1, "%s():  realloc failed\n", __FUNCTION__ );
      exit( 1 );
    }
    recent_dirs = (ghid_file_history*)__strdup( history_tag );
    i = 0;
    do
    {
      *(int*)&recent_dirs->history[0] = 0;
      i++;
    }
    while ( i + 1 != 8 );
  }
  else
  {
  }
B11:;
  dialog = gtk_file_chooser_dialog_new( title, (GtkWindow*)g_type_check_instance_cast( &ghid_port.top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), (unsigned char)( ( flags ^ 1 ) & 1 ), "gtk-cancel", -6, "gtk-ok", (long long)-5 );
  gtk_dialog_set_default_response( (GtkDialog*)g_type_check_instance_cast( &dialog->object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ), -5 );
  if ( path && path[0] )
  {
    gtk_file_chooser_set_current_folder( g_type_check_instance_cast( &dialog->object.parent_instance.g_type_instance, gtk_file_chooser_get_type( ) ), path );
    g_free( path );
  }
  if ( base && base[0] )
  {
    if ( (unsigned char)( ( flags ^ 1 ) & 1 ) == 0 )
      goto B39;
    else
    {
      base[0] = base;
      gtk_file_chooser_set_current_name( g_type_check_instance_cast( &dialog->object.parent_instance.g_type_instance, gtk_file_chooser_get_type( ) ), base );
    }
B39:;
    g_free( base );
  }
  i = 0;
  do
  {
    if ( *(int*)(recent_dirs + 0 + 36 + ( i << 2 ) + 4) )
    {
      gtk_file_chooser_add_shortcut_folder( g_type_check_instance_cast( &dialog->object.parent_instance.g_type_instance, gtk_file_chooser_get_type( ) ), *(int*)(recent_dirs + 0 + 36 + ( i << 2 ) + 4), 0 );
      i++;
    }
    else
      break;
  }
  while ( i != 8 );
  result = 0;
  if ( gtk_dialog_run( (GtkDialog*)g_type_check_instance_cast( &dialog->object.parent_instance.g_type_instance, gtk_dialog_get_type( ) ) ) == -5 )
  {
    result = gtk_file_chooser_get_filename( g_type_check_instance_cast( &dialog->object.parent_instance.g_type_instance, gtk_file_chooser_get_type( ) ) );
    if ( result && g_path_get_dirname( result ) )
    {
    {
      while ( 1 )
      {
        ebp_40 = 1;
        recent_dirs[1].history[0] = g_path_get_dirname( result );
        do
        {
          if ( ebp_40 + k <= 7 )
          {
            tmps2[0] = *(int*)(recent_dirs + 0 + 36 + ( ( ebp_40 + k ) << 2 ) + 4);
            if ( *(int*)(recent_dirs + 0 + 36 + ( ( ebp_40 + k ) << 2 ) + 4) )
            {
            {
              do
              {
                if ( eax )
                  break;
                else
                {
                  k++;
                  if ( ebp_40 + k + 1 <= 7 )
                    continue;
                }
              }
              while ( esi );
              tmps2[0] = *(int*)(recent_dirs + 0 + 36 + ( ( ebp_40 + k ) << 2 ) + 12);
            }
            }
            else
            {
              ebp_40++;
            }
          }
          *(int*)&tmps2[0] = 0;
        }
        while ( ebp_40 + 1 != 8 );
        if ( tmps2 == 0 )
        {
          gtk_widget_destroy( dialog );
          return result;
        }
        free( tmps2 );
      }
    }
    }
  }
}
#if 0
#endif
