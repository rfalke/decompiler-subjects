#include "gui-netlist-window.c.h"
static GtkWidget *netlist_window;
static GtkWidget *disable_all_button;
static GtkTreeModel *node_model;
static GtkTreeView *node_treeview;
static GtkTreeSelection *node_selection;
static gboolean selection_holdoff;
static LibraryMenuType *selected_net;
static LibraryMenuType *node_selected_net;
static GtkTreeModel *net_model;
static GtkTreeView *net_treeview;
static gboolean loading_new_netlist;
HID_Action ghid_netlist_action_list[2] = { { "NetlistChanged", 0, &NetlistChanged, 0, 0 }
, { "NetlistShow", 0, &NetlistShow, 0, 0 }
 };
void node_model_update( LibraryMenuType *menu )
{
  GtkTreeModel *model = node_model;
  if ( menu && menu->EntryN + -1 != -1 )
  {
    do
    {
      if ( menu->Entry->ListEntry[0] == 0 )
        continue;
      else
      {
        gtk_list_store_append( gtk_list_store_new( ebp_88, ebp_88, ebp_84, ebp_84, ebp_80, ebp_80 ), ebp_40 );
        gtk_list_store_set( gtk_list_store_new( ebp_88, ebp_88, ebp_84, ebp_84, ebp_80, ebp_80 ), ebp_40, 0, edi, 1, edi, -1 );
      }
    }
    while ( menu->EntryN + -1 + -1 + -1 != -1 );
  }
  node_model = eax;
  gtk_tree_view_set_model( node_treeview, &node_model );
  gtk_tree_sortable_set_sort_column_id( g_type_check_instance_cast( &node_model, gtk_tree_sortable_get_type( ) ), 0, 0 );
  if ( model )
  {
    g_object_unref( g_type_check_instance_cast( &model, 80 ) );
  }
  return;
}
void node_selection_changed_cb( GtkTreeSelection *selection, gpointer data )
{
  int ecx;
  int ebx;
  int esi;
  static gchar *node_name;
  GtkTreeIter iter;
  GtkTreeModel *model;
  LibraryMenuType *node_net;
  LibraryEntryType *node;
  /* phantom */ gint x0;
  /* phantom */ gint y0;
  gint margin;
  if ( selection_holdoff == 0 )
  {
    if ( node )
    {
      if ( node_selected_net == node_net )
        SelectPin( node, 1 );
      g_free( node_name );
      node_name = 0;
    }
    if ( gtk_tree_selection_get_selected( selection, &model, &iter ) == 0 )
    {
      if ( node )
      {
        ghid_invalidate_all( );
      }
    }
    else
    {
      gtk_tree_model_get( &model, &iter, 1, node, -1 );
      dup_string( &node_name, &node->ListEntry[0] );
      node_selected_net = selected_net;
      SelectPin( node, 1 );
      IncrementUndoSerialNumber( );
      margin = gport->view_width / 20;
      if ( Crosshair.X < gport->view_x0 + ( gport->view_width / 20 ) || ( gport->view_x0 + gport->view_width ) - margin < Crosshair.X )
        gport->top_window->object.parent_instance.g_type_instance.g_class->g_type = gport->view_height;
      else
      if ( margin + gport->view_y0 <= Crosshair.Y )
      {
        if ( Crosshair.Y <= ( gport->view_height + gport->view_y0 ) - margin )
        {
          ghid_screen_update( );
        }
      }
      else
        gport->top_window->object.parent_instance.g_type_instance.g_class->g_type = gport->view_height;
      ghid_port_ranges_pan( (double)( Crosshair.X - ( gport->view_width / 2 ) ), (double)( Crosshair.Y - ( gport->view_height / 2 ) ), 0 );
      ghid_screen_update( );
    }
  }
  return;
}
GtkTreeModel *net_model_create( void )
{
  int eax;
  int edx;
  int ebp_100;
  int ebp_68;
  int ebp_60;
  GtkTreeModel *model;
  GtkTreeStore *store = gtk_tree_store_new( 3, 64, 64, 68 );
  GtkTreeIter new_iter;
  GtkTreeIter parent_iter;
  GtkTreeIter *parent_ptr;
  GtkTreePath *path;
  GtkTreeRowReference *row_ref;
  GHashTable *prefix_hash;
  /* phantom */ char *display_name;
  /* phantom */ char *hash_string;
  /* phantom */ char **join_array;
  char **path_segments;
  /* phantom */ int path_depth;
  int try_depth;
  model = g_type_check_instance_cast( &store->parent.g_type_instance, gtk_tree_model_get_type( ) );
  prefix_hash = g_hash_table_new_full( &g_str_hash, &g_str_equal, &g_free, &gtk_tree_row_reference_free );
{
  Cardinal l = PCB->NetlistLib.MenuN + -1;
  LibraryMenuTypePtr menu;
  if ( PCB->NetlistLib.MenuN + -1 != -1 )
  {
    ebp_100 = ( PCB->NetlistLib.MenuN * 28 ) + -28;
    while ( menu = ebp_100 + PCB->NetlistLib.Menu, *(int*)(ebp_100 + *(int*)(PCB + 8700)) == 0 )
    {
      l += -1;
      ebp_100 += -28;
      if ( l == -1 )
      {
        g_hash_table_destroy( &prefix_hash );
        return &model;
      }
    }
    if ( loading_new_netlist )
      *(char*)(ebp_100 + PCB->NetlistLib.Menu + 24) = 1;
    path_segments = (char**)g_strsplit( *(int*)(ebp_100 + *(int*)(PCB + 8700)), "/", 0 );
    parent_ptr = 0;
    if ( g_strv_length( path_segments ) + -1 > 0 )
    {
      ebp_60 = ( g_strv_length( path_segments ) + -1 ) << 2;
      ebp_68 = g_strv_length( path_segments ) + -1;
    {
      do
      {
        memcpy( g_malloc0_n( ebp_68 + 1, 4 ), path_segments, ebp_60 );
        g_free( *ebp_168 );
        g_free( g_strjoinv( "/", *ebp_168 ) );
        if ( esi )
        {
          parent_ptr = &parent_iter;
          gtk_tree_model_get_iter( &model, &parent_iter, &eax[0] );
          if ( ebp_68 < g_strv_length( path_segments ) + -1 )
            goto B31;
        }
        else
        {
          ebp_68 += -1;
          ebp_60 += -4;
        }
B31:;
        path_segments[ ebp_68 ][0] = path_segments[ ebp_68 ];
        ebp_60 = try_depth << 2;
        while ( 1 )
        {
          gtk_tree_store_append( store, &new_iter, parent_ptr );
          gtk_tree_store_set( store, &new_iter, 0, "", 1, g_strconcat( *(int*)(ebp_68 + 1 + 4), (long long)( "/" ) ), (long long)2, -1 );
          g_free( g_strconcat( *(int*)(ebp_68 + 1 + 4), (long long)( "/" ) ) );
        {
          /* phantom */ gsize __n;
          /* phantom */ gsize __s;
          /* phantom */ gpointer __p;
          row_ref = gtk_tree_row_reference_new( &model, gtk_tree_model_get_path( &model, &new_iter ) );
          parent_iter.stamp = new_iter.stamp;
          parent_iter.user_data = new_iter.user_data;
          parent_iter.user_data2 = new_iter.user_data2;
          parent_iter.user_data3 = new_iter.user_data3;
          memcpy( g_malloc0_n( ebp_68 + 2, 4 ), path_segments, ebp_60 );
          parent_ptr = &parent_iter;
          g_free( *ebp_168 );
          g_hash_table_insert( &prefix_hash, g_strjoinv( "/", *ebp_168 ), gtk_tree_row_reference_new( &model, gtk_tree_model_get_path( &model, &new_iter ) ) );
          ebp_60 += 4;
          if ( g_strv_length( path_segments ) + -1 <= try_depth )
            parent_ptr = &parent_iter;
          else
          {
            try_depth++;
          }
        }
        }
      }
      while ( ebp_68 <= 0 );
      try_depth = ebp_68 + 1;
B31:;
      path_segments[ ebp_68 ][0] = path_segments[ ebp_68 ];
      ebp_60 = try_depth << 2;
      while ( 1 )
      {
        gtk_tree_store_append( store, &new_iter, parent_ptr );
        gtk_tree_store_set( store, &new_iter, 0, "", 1, g_strconcat( *(int*)(ebp_68 + 1 + 4), (long long)( "/" ) ), (long long)2, -1 );
        g_free( g_strconcat( *(int*)(ebp_68 + 1 + 4), (long long)( "/" ) ) );
      }
    }
    }
    gtk_tree_store_append( store, &new_iter, parent_ptr );
    gtk_tree_store_set( store, &edi, 0, menu->flag != 0 ? "*" : "", 1, path_segments[ ebp_84 ], 2, menu, -1 );
    g_strfreev( path_segments );
    l += -1;
    ebp_100 += -28;
  }
  g_hash_table_destroy( &prefix_hash );
  return &model;
}
}
void net_selection_double_click_cb( GtkTreeView *treeview, GtkTreePath *path, GtkTreeViewColumn *col, gpointer data )
{
  int edx;
  int ebx;
  int esi;
  GtkTreeModel *model = gtk_tree_view_get_model( treeview );
  GtkTreeIter iter;
  gchar *str;
  LibraryMenuType *menu;
  if ( gtk_tree_model_get_iter( gtk_tree_view_get_model( treeview ), &iter, &path ) )
  {
    if ( gtk_tree_model_iter_has_child( &model, &iter ) )
    {
      if ( gtk_tree_view_row_expanded( treeview, &path ) )
      {
        gtk_tree_view_collapse_row( treeview, &path );
      }
      else
      {
        gtk_tree_view_expand_row( treeview, &path, 0 );
      }
    }
    else
    {
      gtk_tree_model_get( &model, &iter, 0, str, -1 );
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      unsigned char *__s1;
      /* phantom */ int __result;
      __s1[0] = str;
      gtk_tree_store_set( (GtkTreeStore*)g_type_check_instance_cast( &model, gtk_tree_store_get_type( ) ), &iter, 0, "", -1 );
      gtk_tree_model_get( &model, &iter, 2, menu, -1 );
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      /* phantom */ unsigned char *__s1;
      int __result = str[0] - 42;
      menu->flag = __result == 0;
      g_free( str );
    }
    }
    }
  }
  return;
}
void net_selection_changed_cb( GtkTreeSelection *selection, gpointer data )
{
  int eax;
  GtkTreeIter iter;
  GtkTreeModel *model;
  LibraryMenuType *net;
  if ( selection_holdoff == 0 )
  {
    if ( gtk_tree_selection_get_selected( selection, &model, &iter ) == 0 )
    {
      selected_net = 0;
      return;
    }
    gtk_tree_model_get( &model, &iter, 2, net, -1 );
    node_model_update( net );
    selected_net = net;
    return;
  }
  else
  {
    return;
  }
}
void netlist_disable_all_cb( GtkToggleButton *button, gpointer data )
{
  GtkTreeIter iter;
  gboolean active = gtk_toggle_button_get_active( button );
  LibraryMenuType *menu;
  if ( gtk_tree_model_get_iter_first( &net_model, &iter ) )
  {
    do
    {
      gtk_tree_store_set( (GtkTreeStore*)g_type_check_instance_cast( &net_model, gtk_tree_store_get_type( ) ), &iter, 0, active == 0 ? "*" : "", -1 );
      gtk_tree_model_get( &net_model, &iter, 2, menu, -1 );
      menu->flag = active == 0;
    }
    while ( gtk_tree_model_iter_next( &net_model, &iter ) == 0 );
  }
  return;
}
void netlist_select_cb( GtkWidget *widget, gpointer data )
{
  LibraryEntryType *entry;
  ConnectionType conn;
  gint i;
  /* phantom */ gboolean select_flag;
  if ( selected_net )
  {
    if ( node_selected_net == selected_net )
      node_selected_net = 0;
    InitConnectionLookup( );
    ResetFoundPinsViasAndPads( 0 );
    ResetFoundLinesAndPolygons( 0 );
    SaveUndoSerialNumber( );
    i = selected_net->EntryN;
    entry = &selected_net->Entry;
    if ( selected_net->EntryN )
    {
      while ( 1 )
      {
        if ( SeekPad( entry, &conn, 0 ) & 255 )
        {
          RatFindHook( conn.type, conn.ptr1, conn.ptr2, conn.ptr2, 1, 1 );
          i += -1;
          if ( i == 1 )
            goto B9;
        }
        else
        {
          i += -1;
          if ( i == 1 )
            goto B9;
        }
        entry++;
      }
    }
B9:;
    RestoreUndoSerialNumber( );
    data = data;
    SelectConnection( data );
    ResetFoundPinsViasAndPads( 0 );
    ResetFoundLinesAndPolygons( 0 );
    FreeConnectionLookupMemory( );
    IncrementUndoSerialNumber( );
    ghid_invalidate_all( );
  }
  return;
}
void netlist_find_cb( GtkWidget *widget, gpointer data )
{
  char *name;
  if ( selected_net )
  {
    name[0] = selected_net->Name[0] + 2;
    hid_actionl( "connection", (long long)( "reset" ), ebp_4 );
    hid_actionl( "netlist", "find", (long long)( name ) );
  }
  return;
}
// Lost vars at line 556 through condition folding
// Lost vars at line 563 through condition folding
// Lost vars at line 571 through condition folding
void netlist_rip_up_cb( GtkWidget *widget, gpointer data )
{
  int eax;
  int edx;
  if ( selected_net )
  {
    netlist_find_cb( widget, data );
  {
    Cardinal l;
    LayerTypePtr layer = &PCB->Data->Layer;
    if ( PCB->Data->LayerN != -2 )
    {
      l = 0;
      while ( layer->On == 0 || layer->LineN + -1 == -1 )
      {
        l++;
        if ( PCB->Data->LayerN + 2 <= l + 1 )
        {
          Cardinal l;
          LayerTypePtr layer = PCB->Data + 76;
          if ( PCB->Data->LayerN != -2 )
          {
            l = 0;
            while ( layer->On == 0 || layer->ArcN + -1 == -1 )
            {
              l++;
              if ( PCB->Data->LayerN + 2 <= l + 1 )
                goto B4;
              else
              {
                layer++;
              }
            }
            do
            {
              arc = layer->Arc + ( layer->ArcN * 68 ) + -68 + -68;
              if ( ( arc->Flags.f & 8196 ) == 4 )
              {
                n += -1;
                RemoveObject( 16384, (void*)layer, (void*)arc, (void*)arc );
                if ( n != -1 )
                  continue;
                else
                  break;
              }
              else
              {
                n += -1;
              }
            }
            while ( n + -1 != -1 );
            l++;
          }
        }
        else
        {
          layer++;
        }
      }
      layer->LineN = ( layer->LineN * 88 ) + -88;
      do
      {
        line = layer->Line + ebp_28 + -88 + -88;
        if ( ( line->Flags.f & 8196 ) == 4 )
        {
          n += -1;
          RemoveObject( 4, (void*)layer, (void*)line, (void*)line );
          if ( n != -1 )
            continue;
          else
            break;
        }
        else
        {
          n += -1;
          *(int*)(ebp_28 + -88) += -88;
        }
      }
      while ( n + -1 != -1 );
      l++;
    }
B4:;
    if ( PCB->ViaOn == 0 || PCB->Data->ViaN == 0 )
    {
      return;
    }
    n = 0;
    while ( via = PCB->Data->Via + ( n * 76 ), ( via->Flags.f & 8196 ) != 4 )
    {
      sn = PCB->Data->ViaN;
      if ( PCB->Data->ViaN == 0 || sn <= ( sn + n + 1 ) - sn )
        break;
    }
    RemoveObject( 1, (void*)via, (void*)via, (void*)via );
    sn = PCB->Data->ViaN;
  }
  }
  return;
}
LibraryEntryType *node_get_node_from_name( gchar *node_name, LibraryMenuType **node_net )
{
  GtkTreeIter iter;
  LibraryMenuType *net;
  LibraryEntryType *node;
  gint j;
  if ( node_name )
  {
    if ( netlist_window == 0 )
    {
      ghid_netlist_window_show( gport, 0 );
      while ( gtk_events_pending( ) == 0 )
      {
        gtk_main_iteration( );
      }
      if ( gtk_tree_model_get_iter_first( &net_model, &iter ) )
      {
        do
        {
          gtk_tree_model_get( &net_model, &iter, 2, net, -1 );
          j = net->EntryN;
          return &net->Name[0];
          node = &net->Entry;
          if ( net->EntryN )
          {
            for ( ; node == 0 || strcmp( node_name, (char*)node ); node++ )
            {
              j += -1;
              if ( j == 1 )
                goto B16;
              else
              {
                // node++;
              }
            }
            if ( node_net )
              break;
            break;
          }
B16:;
        }
        while ( gtk_tree_model_iter_next( &net_model, &iter ) == 0 );
      }
    }
  }
  node = 0;
}
gint netlist_window_configure_event_cb( GtkWidget *widget, GdkEventConfigure *ev, gpointer data )
{
  ghidgui->config_modified = 1;
  ghidgui->netlist_window_height = widget->allocation.height;
  return 0;
}
void netlist_close_cb( GtkWidget *widget, gpointer data )
{
  gtk_widget_destroy( netlist_window );
  selected_net = 0;
  netlist_window = 0;
  return;
}
void netlist_destroy_cb( GtkWidget *widget, GHidPort *out )
{
  selected_net = 0;
  netlist_window = 0;
  return;
}
void ghid_netlist_window_show( GHidPort *out, gboolean raise )
{
  int edx;
  int ebx;
  int esi;
  int edi;
  GtkWidget *vbox, *hbox, *button, *label, *sep;
  /* phantom */ GtkTreeView *treeview;
  GtkTreeModel *model;
  GtkTreeSelection *selection;
  GtkCellRenderer *renderer;
  GtkTreeViewColumn *column;
  if ( PCB->NetlistLib.MenuN == 0 )
  {
    return;
  }
  if ( netlist_window )
  {
    if ( raise == 0 )
    {
      out = 1;
    }
    gtk_window_present( (GtkWindow*)g_type_check_instance_cast( &netlist_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ) );
    out = 1;
  }
  else
  {
    netlist_window = gtk_window_new( 0 );
    g_signal_connect_data( g_type_check_instance_cast( &netlist_window[0].object.parent_instance.g_type_instance, 80 ), "destroy", &netlist_destroy_cb, &out, 0, 0 );
    gtk_window_set_title( (GtkWindow*)g_type_check_instance_cast( &netlist_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), dcgettext( "pcb", "PCB Netlist", 5 ) );
    gtk_window_set_wmclass( (GtkWindow*)g_type_check_instance_cast( &netlist_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), "PCB_Netlist", "PCB" );
    g_signal_connect_data( g_type_check_instance_cast( &netlist_window->object.parent_instance.g_type_instance, 80 ), "configure_event", &netlist_window_configure_event_cb, 0, 0, 0 );
    gtk_window_set_default_size( (GtkWindow*)g_type_check_instance_cast( &netlist_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), -1, ghidgui->netlist_window_height );
    gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &netlist_window->object.parent_instance.g_type_instance, gtk_container_get_type( ) ), 2 );
    gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( (GTypeInstance*)gtk_vbox_new( 0, 4 ), gtk_container_get_type( ) ), 6 );
    gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &netlist_window->object.parent_instance.g_type_instance, gtk_container_get_type( ) ), vbox );
    gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), gtk_hbox_new( 0, 8 ), 1, 1, 4 );
    model = net_model_create( );
    net_treeview = (GtkTreeView*)g_type_check_instance_cast( (GTypeInstance*)gtk_tree_view_new_with_model( &model ), gtk_tree_view_get_type( ) );
    net_model = model;
    gtk_tree_sortable_set_sort_column_id( g_type_check_instance_cast( &model, gtk_tree_sortable_get_type( ) ), 1, 0 );
    gtk_tree_view_set_rules_hint( net_treeview, 0 );
    g_object_set( &net_treeview, "enable-tree-lines", (long long)1 );
    gtk_tree_view_insert_column_with_attributes( net_treeview, -1, dcgettext( "pcb", " ", 5 ), gtk_cell_renderer_text_new( ), (long long)( "text" ), 0 );
    gtk_tree_view_insert_column( net_treeview, gtk_tree_view_column_new_with_attributes( dcgettext( "pcb", "Net Name", 5 ), gtk_cell_renderer_text_new( ), "text", (long long)1 ), -1 );
    gtk_tree_view_set_expander_column( net_treeview, column );
    gtk_tree_view_expand_all( net_treeview );
    ghid_scrolled_selection( net_treeview, gtk_hbox_new( 0, 8 ), 1, 2, 1, &net_selection_changed_cb, 0 );
    g_signal_connect_data( g_type_check_instance_cast( &net_treeview[0].parent.widget.object.parent_instance.g_type_instance, 80 ), "row-activated", &net_selection_double_click_cb, 0, 0, 0 );
    node_treeview = (GtkTreeView*)g_type_check_instance_cast( (GTypeInstance*)gtk_tree_view_new( ), gtk_tree_view_get_type( ) );
    gtk_tree_view_set_rules_hint( node_treeview, 0 );
    gtk_tree_view_insert_column_with_attributes( *ebp_88, -1, dcgettext( "pcb", "Nodes", 5 ), gtk_cell_renderer_text_new( ), (long long)( "text" ), 0 );
    node_selection = ghid_scrolled_selection( *ebp_88, gtk_hbox_new( 0, 8 ), 1, 2, 1, &node_selection_changed_cb, 0 );
    model = gtk_hbox_new( 0, 0 );
    gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), &model, 0, 0, 0 );
    label = gtk_label_new( dcgettext( "pcb", "Operations on selected 'Net Name':", 5 ) );
    gtk_box_pack_start( g_type_check_instance_cast( &model, gtk_box_get_type( ) ), label, 0, 0, 4 );
    gtk_misc_set_alignment( g_type_check_instance_cast( &label[0].object.parent_instance.g_type_instance, gtk_misc_get_type( ) ), 0, 1056964608 );
    hbox = gtk_hbox_new( 0, 0 );
    gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), hbox, 0, 0, 4 );
    model = gtk_button_new_with_label( dcgettext( "pcb", "Select", 5 ) );
    gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), &model, 0, 0, 0 );
    g_signal_connect_data( g_type_check_instance_cast( &model, 80 ), "clicked", &netlist_select_cb, 1, 0, 0 );
    model = gtk_button_new_with_label( dcgettext( "pcb", "Unselect", 5 ) );
    gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), &model, 0, 0, 0 );
    g_signal_connect_data( g_type_check_instance_cast( &model, 80 ), "clicked", &netlist_select_cb, 0, 0, 0 );
    model = gtk_button_new_with_label( dcgettext( "pcb", "Find", 5 ) );
    gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), &model, 0, 0, 0 );
    g_signal_connect_data( g_type_check_instance_cast( &model, 80 ), "clicked", &netlist_find_cb, 0, 0, 0 );
    model = gtk_button_new_with_label( dcgettext( "pcb", "Rip Up", 5 ) );
    gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), &model, 0, 0, 0 );
    g_signal_connect_data( g_type_check_instance_cast( &model, 80 ), "clicked", &netlist_rip_up_cb, 0, 0, 0 );
    ghid_check_button_connected( vbox, &disable_all_button, 0, 1, 0, 0, 0, &netlist_disable_all_cb, 0, dcgettext( "pcb", "Disable all nets for adding rats", 5 ) );
    sep = gtk_hseparator_new( );
    gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), sep, 0, 0, 3 );
    hbox = gtk_hbutton_box_new( );
    gtk_button_box_set_layout( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_button_box_get_type( ) ), 4 );
    gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), hbox, 0, 0, 4 );
    g_signal_connect_data( g_type_check_instance_cast( (GTypeInstance*)gtk_button_new_from_stock( "gtk-close" ), 80 ), "clicked", &netlist_close_cb, 0, 0, 0 );
    gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), button, 1, 1, 0 );
    gtk_widget_realize( netlist_window );
    if ( Settings.AutoPlace )
    {
      gtk_widget_set_uposition( (GtkWidget*)g_type_check_instance_cast( &netlist_window->object.parent_instance.g_type_instance, gtk_widget_get_type( ) ), 10, 10 );
    }
    out = &netlist_window->object.parent_instance.g_type_instance._GTypeInstance;
  }
}
gboolean hunt_named_node( GtkTreeModel *model, GtkTreePath *path, GtkTreeIter *iter, gpointer data )
{
  /* phantom */ struct ggnfnn_task *task;
  LibraryMenuType *net;
  LibraryEntryType *node;
  gchar *str;
  gint j;
  /* phantom */ gboolean is_disabled;
  if ( gtk_tree_model_iter_has_child( &model, iter ) == 0 )
  {
    gtk_tree_model_get( &model, iter, 2, net, -1 );
    gtk_tree_model_get( &model, iter, 0, str, -1 );
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    /* phantom */ unsigned char *__s1;
    int __result;
    if ( str[0] == 42 )
    {
      __result = str[1] - 0;
      g_free( str );
      if ( __result == 0 )
      {
        if ( *(int*)(data) == 0 )
        {
        }
      }
    }
    else
      g_free( str );
    j = net->EntryN;
    node = &net->Entry;
    if ( net->EntryN == 0 )
    {
      return 0;
    }
    for ( ; node == 0 || strcmp( &data[1], (char*)node ); node++ )
    {
      j += -1;
      if ( j == 1 )
      {
        break;
      }
      else
      {
        // node++;
      }
    }
    data[2] = net;
    data[3] = iter->stamp;
    data[4] = iter->user_data;
    data[5] = iter->user_data2;
    data[6] = iter->user_data3;
    return 1;
  }
  }
  return 0;
}
LibraryMenuType *ghid_get_net_from_node_name( gchar *node_name, gboolean enabled_only )
{
  int eax;
  GtkTreePath *path;
  struct ggnfnn_task task;
  if ( node_name )
  {
    if ( netlist_window == 0 )
    {
      ghid_netlist_window_show( gport, 0 );
      while ( gtk_events_pending( ) == 0 )
      {
        gtk_main_iteration( );
      }
      if ( netlist_window )
      {
        task.enabled_only = enabled_only;
        task.node_name = node_name;
        task.found_net = 0;
        gtk_tree_model_foreach( &net_model, &hunt_named_node, &task.enabled_only );
        if ( enabled_only && task.found_net )
        {
          selection_holdoff = 1;
          path = gtk_tree_model_get_path( &net_model, &task.iter );
          gtk_tree_view_scroll_to_cell( net_treeview, gtk_tree_model_get_path( &net_model, &task.iter ), 0, 1, 1056964608, 1056964608 );
          gtk_tree_selection_select_path( gtk_tree_view_get_selection( net_treeview ), &path );
          return task.found_net;
          selection_holdoff = 0;
        }
      }
    }
  }
}
void ghid_netlist_highlight_node( gchar *node_name )
{
  GtkTreePath *path;
  GtkTreeIter iter;
  LibraryMenuType *net;
  gchar *name;
  if ( node_name )
  {
    net = ghid_get_net_from_node_name( node_name, 1 );
    if ( net )
    {
      node_model_update( &eax );
      if ( gtk_tree_model_get_iter_first( &node_model, &iter ) )
      {
        do
        {
          gtk_tree_model_get( &node_model, &iter, 0, name, -1 );
        {
          /* phantom */ size_t __s1_len;
          /* phantom */ size_t __s2_len;
          if ( strcmp( node_name, name ) == 0 )
          {
            selection_holdoff = 1;
            selected_net = net;
            path = gtk_tree_model_get_path( &node_model, &iter );
            gtk_tree_view_scroll_to_cell( node_treeview, gtk_tree_model_get_path( &node_model, &iter ), 0, 1, 1056964608, 1056964608 );
            gtk_tree_selection_select_path( gtk_tree_view_get_selection( node_treeview ), &path );
            selection_holdoff = 0;
          }
          g_free( &path );
        }
        }
        while ( gtk_tree_model_iter_next( &node_model, &iter ) == 0 );
      }
    }
  }
  return;
}
void ghid_netlist_nodes_update( LibraryMenuType *net )
{
  int eax;
}
void ghid_netlist_window_update( gboolean init_nodes )
{
  int eax;
  GtkTreeModel *model;
  if ( netlist_window == 0 )
  {
    ghid_netlist_window_show( gport, 0 );
    return;
  }
  model = net_model;
  net_model = net_model_create( );
  gtk_tree_view_set_model( net_treeview, &net_model );
  gtk_tree_sortable_set_sort_column_id( g_type_check_instance_cast( &net_model, gtk_tree_sortable_get_type( ) ), 1, 0 );
  if ( model )
  {
    gtk_tree_store_clear( (GtkTreeStore*)g_type_check_instance_cast( &model, gtk_tree_store_get_type( ) ) );
    g_object_unref( &model );
  }
  selected_net = 0;
  if ( init_nodes )
  {
  }
  return;
}
gint NetlistChanged( int argc, char **argv, int x, int y )
{
  loading_new_netlist = 1;
  ghid_netlist_window_update( 1 );
  gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &disable_all_button->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), 0 );
  loading_new_netlist = 0;
  return 0;
}
gint NetlistShow( int argc, char **argv, int x, int y )
{
  ghid_netlist_window_show( gport, 0 );
  if ( argc > 0 )
  {
    ghid_netlist_highlight_node( argv[0] );
  }
  return 0;
}
void register_ghid_netlist_action_list( void )
{
  hid_register_actions( ghid_netlist_action_list, 2 );
  return;
}
#if 0
#endif
