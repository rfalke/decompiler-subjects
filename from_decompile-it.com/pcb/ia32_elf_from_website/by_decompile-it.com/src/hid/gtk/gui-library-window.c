#include "gui-library-window.c.h"
static GtkWidget *library_window;
static GObjectClass *library_window_parent_class;
gint library_window_configure_event_cb( GtkWidget *widget, GdkEventConfigure *ev, gpointer data )
{
  ghidgui->library_window_width = widget->allocation.width;
  ghidgui->config_modified = 1;
  ghidgui->library_window_height = widget->allocation.height;
  return 0;
}
void library_window_callback_response( GtkDialog *dialog, gint arg1, gpointer user_data )
{
  if ( arg1 != -7 && arg1 != -4 )
  {
    return;
  }
  gtk_widget_destroy( (GtkWidget*)g_type_check_instance_cast( &library_window->object.parent_instance.g_type_instance, gtk_widget_get_type( ) ) );
  library_window = 0;
  return;
}
void ghid_library_window_show( GHidPort *out, gboolean raise )
{
  int eax;
  GtkWidget *current_tab, *entry_filter;
  /* phantom */ GtkNotebook *notebook;
  if ( library_window == 0 )
  {
    library_window = g_object_new( ghid_library_window_get_type( ), 0 );
    g_signal_connect_data( &library_window, "response", &library_window_callback_response, 0, 0, 0 );
    g_signal_connect_data( g_type_check_instance_cast( &library_window->object.parent_instance.g_type_instance, 80 ), "configure_event", &library_window_configure_event_cb, 0, 0, 0 );
    gtk_window_set_default_size( (GtkWindow*)g_type_check_instance_cast( &library_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), ghidgui->library_window_width, ghidgui->library_window_height );
    gtk_window_set_title( (GtkWindow*)g_type_check_instance_cast( &library_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), dcgettext( "pcb", "PCB Library", 5 ) );
    gtk_window_set_wmclass( (GtkWindow*)g_type_check_instance_cast( &library_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), "PCB_Library", "PCB" );
    gtk_widget_realize( library_window );
    if ( Settings.AutoPlace )
    {
      gtk_widget_set_uposition( (GtkWidget*)g_type_check_instance_cast( &library_window->object.parent_instance.g_type_instance, gtk_widget_get_type( ) ), 10, 10 );
    }
    else
    {
    }
    gtk_widget_show( library_window );
  }
  else
  {
    if ( raise )
    {
      gtk_window_present( (GtkWindow*)g_type_check_instance_cast( &library_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ) );
    }
  }
  gtk_editable_select_region( (GtkEditable*)g_type_check_instance_cast( *(int*)g_type_check_instance_cast( &library_window->object.parent_instance.g_type_instance, ghid_library_window_get_type( ) )/*.176*/, gtk_editable_get_type( ) ), 0, -1 );
  current_tab = &eax;
  if ( gtk_widget_is_ancestor( (GtkWidget*)g_type_check_instance_cast( *(int*)g_type_check_instance_cast( &library_window->object.parent_instance.g_type_instance, ghid_library_window_get_type( ) )/*.176*/, esi ), current_tab ) )
  {
    out = *ebp_56;
  }
  return;
}
gboolean lib_model_filter_visible_func( GtkTreeModel *model, GtkTreeIter *iter, gpointer data )
{
  /* phantom */ GhidLibraryWindow *library_window;
  gchar *compname;
  /* phantom */ gchar *compname_upper, *text_upper, *pattern;
  gchar *text;
  gboolean ret;
{
  /* phantom */ GTypeInstance *__inst;
  GType __t;
  gboolean __r;
  ghid_library_window_get_type( );
  if ( data == 0 || ( ( *(int*)(data) == 0 || __t != *(int*)(*(int*)(data)) ) && g_type_check_instance_is_a( &data[0], __t ) == 0 ) )
  {
    g_assertion_message_expr( 0, "../../src/hid/gtk/gui-library-window.c", 224, __PRETTY_FUNCTION__, "GHID_IS_LIBRARY_WINDOW (data)" );
  }
  text = gtk_entry_get_text( &data[44] );
  ret = 1;
  if ( ret )
  {
    if ( gtk_tree_model_iter_has_child( &model, iter ) == 0 )
    {
      gtk_tree_model_get( &model, iter, 0, compname, -1 );
      g_free( g_ascii_strup( compname, -1 ) );
      g_free( g_ascii_strup( text, -1 ) );
      g_free( *ebp_104 );
      return g_pattern_match_simple( g_strconcat( "*", g_ascii_strup( text, -1 ), (long long)( "*" ) ), g_ascii_strup( compname, -1 ) );
    }
  {
    GtkTreeIter iter2;
    gtk_tree_model_iter_children( &model, &iter2, iter );
    do
    {
      if ( lib_model_filter_visible_func( &model, &iter2, data ) )
      {
        ret = 1;
        break;
      }
    }
    while ( gtk_tree_model_iter_next( &model, &iter2 ) );
    return gtk_tree_model_iter_next( &model, &iter2 );
  }
  }
  return 1;
}
}
void tree_row_activated( GtkTreeView *tree_view, GtkTreePath *path, GtkTreeViewColumn *column, gpointer user_data )
{
  int esi;
  GtkTreeModel *model = gtk_tree_view_get_model( tree_view );
  GtkTreeIter iter;
  gtk_tree_model_get_iter( gtk_tree_view_get_model( tree_view ), &iter, &path );
  if ( gtk_tree_model_iter_has_child( &model, &iter ) )
  {
    if ( gtk_tree_view_row_expanded( tree_view, &path ) )
    {
      gtk_tree_view_collapse_row( tree_view, &path );
    }
    else
    {
      gtk_tree_view_expand_row( tree_view, &path, 0 );
    }
  }
  return;
}
void library_window_callback_tree_selection_changed( GtkTreeSelection *selection, gpointer user_data )
{
  /* phantom */ GtkTreeView *view;
  GtkTreeModel *model;
  GtkTreeIter iter;
  /* phantom */ GhidLibraryWindow *library_window;
  LibraryEntryType *entry = 0;
  gchar *m4_args;
  if ( gtk_tree_selection_get_selected( selection, &model, &iter ) )
  {
    gtk_tree_selection_get_tree_view( selection );
    gtk_tree_model_get( &model, &iter, 2, entry, -1 );
    if ( entry )
    {
      if ( entry->Template == -1 )
      {
        if ( LoadElementToBuffer( &Buffers[ Settings.BufferNumber ], &entry->AllocatedMemory, 1 ) & 255 )
          SetMode( 5 );
      }
      else
      {
        if ( LoadElementToBuffer( &Buffers[ Settings.BufferNumber ], g_strdup_printf( "'%s' '%s' '%s'", entry->Template == 0 ? entry->Template : "", *(int*)(entry + 16) == 0 ? entry->Value : "", *(int*)(entry + 12) == 0 ? entry->Package : "" ), 0 ) & 255 )
          SetMode( 5 );
        g_free( m4_args );
      }
      g_object_set( &user_data[43], "element-data", (long long)( Buffers[ Settings.BufferNumber ].Data->Element ) );
      return;
    }
  }
  return;
}
gboolean library_window_filter_timeout( gpointer data )
{
  /* phantom */ GhidLibraryWindow *library_window;
  GtkTreeModel *model;
  *(int*)g_type_check_instance_cast( &data[0], ghid_library_window_get_type( ) )/*.184*/ = 0;
  if ( model )
  {
    gtk_tree_model_filter_refilter( &model );
  }
  return 0;
}
void library_window_callback_filter_entry_changed( GtkEditable *editable, gpointer user_data )
{
  int edx;
  GhidLibraryWindow *library_window = (GhidLibraryWindow*)g_type_check_instance_cast( &user_data[0], ghid_library_window_get_type( ) );
  /* phantom */ GtkWidget *button;
  gboolean sensitive = g_ascii_strcasecmp( gtk_entry_get_text( library_window->entry_filter ), "" ) != 0;
  if ( sensitive != edx )
    gtk_widget_set_sensitive( (GtkWidget*)g_type_check_instance_cast( &library_window->button_clear->bin.container.widget.object.parent_instance.g_type_instance, gtk_widget_get_type( ) ), sensitive );
  if ( library_window->filter_timeout )
    g_source_remove( library_window->filter_timeout );
  library_window->filter_timeout = g_timeout_add( 200, &library_window_filter_timeout, &library_window );
  return;
}
void library_window_callback_filter_button_clicked( GtkButton *button, gpointer user_data )
{
  /* phantom */ GhidLibraryWindow *library_window;
  user_data = "";
  button = *(int*)(GtkButton*)g_type_check_instance_cast( &user_data[0], ghid_library_window_get_type( ) )/*.176*/;
}
GObject *library_window_constructor( GType type, guint n_construct_properties, GObjectConstructParam *construct_params )
{
  GObject *object;
  /* phantom */ GhidLibraryWindow *library_window;
  /* phantom */ GtkWidget *hpaned, *notebook;
  /* phantom */ GtkWidget *libview;
  /* phantom */ GtkWidget *preview;
  /* phantom */ GtkWidget *alignment, *frame;
  ;
}
void library_window_finalize( GObject *object )
{
  int ebx;
  int esi;
  /* phantom */ static GhidLibraryWindow *library_window;
  if ( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_library_window_get_type( ) )/*.184*/ )
  {
    g_source_remove( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_library_window_get_type( ) )/*.184*/ );
    *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_library_window_get_type( ) )/*.184*/ = 0;
  }
  ;
}
void library_window_class_init( GhidLibraryWindowClass *klass )
{
  /* phantom */ GObjectClass *gobject_class;
  *(int*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.parent_class.parent_class.parent_class.g_type_class, 80 )/*.8*/ = library_window_constructor;
  *(int*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.parent_class.parent_class.parent_class.g_type_class, 80 )/*.24*/ = library_window_finalize;
  library_window_parent_class = g_type_class_peek_parent( &klass );
  return;
}
GType ghid_library_window_get_type( void )
{
  static GType library_window_type;
  if ( library_window_type == 0 )
  {
    static GTypeInfo library_window_info = { 480, 0, 0, 0, 0, 0, 0, 188, 0, 0 }
;
    library_window_type = g_type_register_static( gtk_dialog_get_type( ), "GhidLibraryWindow", &library_window_info.class_size, 0 );
    return g_type_register_static( gtk_dialog_get_type( ), "GhidLibraryWindow", &library_window_info.class_size, 0 );
  }
  return library_window_type;
}
#if 0
#endif
