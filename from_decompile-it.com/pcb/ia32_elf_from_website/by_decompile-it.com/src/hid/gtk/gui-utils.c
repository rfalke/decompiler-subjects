#include "gui-utils.c.h"
gboolean dup_string( gchar **dst, gchar *src )
{
  int esi;
  int edi;
  if ( dst )
  {
    if ( src == 0 )
    {
      if ( dst[0] == 0 )
      {
        return 0;
      }
    }
    else
    if ( dst[0] == 0 )
    {
      dst[0] = g_strdup( src );
      return 0;
    }
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    if ( strcmp( dst[0], src ) == 0 )
    {
      return 0;
    }
  }
    g_free( dst[0] );
    dst[0] = g_strdup( src );
    return 0;
  }
}
void free_glist_and_data( GList **list_head )
{
  GList *list = list_head[0];
  if ( list_head[0] )
  {
    list_head[0] = list_head[0];
    do
    {
      if ( list )
        g_free( &list );
      list = list->next;
    }
    while ( list->next );
    g_list_free( list_head[0] );
    list_head[0] = 0;
  }
  return;
}
gboolean ghid_is_modifier_key_sym( gint ksym )
{
  if ( ksym + -65505 > 1 && ksym != 65508 )
  {
    return ksym == 65507;
  }
  return 1;
}
ModifierKeysState ghid_modifier_keys_state( GdkModifierType *state )
{
  int edx;
  int esi;
  int edi;
  GdkModifierType mask;
  ModifierKeysState mk;
  gboolean shift;
  gboolean control;
  gboolean mod1;
  /* phantom */ GHidPort *out;
  if ( state == 0 )
  {
    gdk_window_get_pointer( &ghid_port.drawing_area->window, 0, 0, &mask );
  }
  else
  {
  }
  shift = state[0] & 1;
  mod1 = control & 8;
  control &= 4;
  return 2;
}
ButtonState ghid_button_state( GdkModifierType *state )
{
  int eax;
  int edx;
  GdkModifierType mask;
  ButtonState bs;
  /* phantom */ gboolean button1;
  /* phantom */ gboolean button2;
  /* phantom */ gboolean button3;
  /* phantom */ GHidPort *out;
  if ( state == 0 )
  {
    gdk_window_get_pointer( &ghid_port.drawing_area->window, 0, 0, &mask );
  }
  else
  {
  }
  bs = BUTTON1_PRESSED;
  return ( ( dh & 1 ) & 255 ) || ( ( dh & 2 ) & 255 ) ? 2 : __MOD(~( 0 - ( ( ( state[0] & 1024 ) < 1 ) & 1 ) ),4);
}
void ghid_draw_area_update( GHidPort *port, GdkRectangle *rect )
{
  int edx;
  GdkRectangle update_rect;
  if ( rect )
  {
    update_rect.x = rect;
    update_rect.y = rect->y;
    update_rect.width = rect->width;
    update_rect.height = rect->height;
  }
  else
  {
    update_rect.x = 0;
    update_rect.y = 0;
    update_rect.width = port->width;
    update_rect.height = port->height;
  }
  gdk_window_invalidate_rect( &port->drawing_area->window, &update_rect, 0 );
  return;
}
void ghid_string_markup_extents( PangoFontDescription *font_desc, gchar *string, gint *width, gint *height )
{
  int eax;
  int esi;
  int edi;
  PangoLayout *layout = gtk_widget_create_pango_layout( ghid_port.top_window, 0 );
  gint w;
  gint h;
  /* phantom */ GHidPort *out;
  pango_layout_set_font_description( gtk_widget_create_pango_layout( ghid_port.top_window, 0 ), &font_desc );
  pango_layout_set_markup( &layout, string, strlen( string ) );
  pango_layout_get_pixel_size( &layout, &w, &h );
  g_object_unref( &layout );
  if ( width[0] )
    width[0] = w;
  if ( height[0] )
  {
    height[0] = h;
  }
  return;
}
void ghid_draw_string_markup( GdkDrawable *drawable, PangoFontDescription *font_desc, GdkGC *gc, gint x, gint y, gchar *string )
{
  int ebx;
  int esi;
  int edi;
  PangoLayout *layout;
  /* phantom */ GHidPort *out;
  pango_layout_set_font_description( gtk_widget_create_pango_layout( ghid_port.top_window, 0 ), &font_desc );
  pango_layout_set_markup( &layout, string, strlen( string ) );
  gdk_draw_layout( drawable, gc, x, y, &layout );
  drawable = &layout;
}
gchar *ghid_get_color_name( GdkColor *color )
{
  /* phantom */ gchar *name;
  if ( color == 0 )
  {
    color = "#000000";
  }
  return g_strdup_printf( "#%2.2x%2.2x%2.2x", color->red/*.2_2of2*/, color->green/*.2_2of2*/, color->blue/*.2_2of2*/ );
}
void ghid_map_color_string( char *color_string, GdkColor *color )
{
  int ebx;
  int esi;
  static GdkColormap *colormap;
  /* phantom */ GHidPort *out;
  if ( color == 0 || ghid_port.top_window == 0 )
  {
    return;
  }
  if ( colormap == 0 )
  {
    colormap = gtk_widget_get_colormap( ghid_port.top_window );
  }
  if ( color->red || color->blue )
    gdk_colormap_free_colors( colormap, color, 1 );
  gdk_color_parse( color_string, color );
  color_string = (char*)colormap;
}
void ghid_button_set_text( GtkWidget *button, gchar *text )
{
  int ebx;
  int esi;
  GtkWidget *label = gtk_bin_get_child( g_type_check_instance_cast( &button->object.parent_instance.g_type_instance, gtk_bin_get_type( ) ) );
  text = text;
  button = (GtkWidget*)g_type_check_instance_cast( &label[0].object.parent_instance.g_type_instance, gtk_label_get_type( ) );
}
gboolean ghid_button_active( GtkWidget *widget )
{
  return *(int*)g_type_check_instance_cast( &widget->object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) )/*.88*/ & 1;
}
gchar *ghid_entry_get_text( GtkWidget *entry )
{
  int eax;
  gchar *s;
  s[0] = "";
  if ( entry )
  {
    gtk_entry_get_text( (GtkEntry*)g_type_check_instance_cast( &entry[0].object.parent_instance.g_type_instance, gtk_entry_get_type( ) ) );
  }
  while ( s[0] == '\t' || s[0] == ' ' )
  {
    s[0] = s + 1;
  }
  return s + 1;
}
void ghid_check_button_connected( GtkWidget *box, GtkWidget **button, gboolean active, gboolean pack_start, gboolean expand, gboolean fill, gint pad, void (*cb_func)( void ), gpointer data, gchar *string )
{
  int eax;
  GtkWidget *b;
  if ( string )
  {
    b = gtk_check_button_new_with_label( string );
    gtk_toggle_button_set_active( (GtkToggleButton*)g_type_check_instance_cast( &b[0].object.parent_instance.g_type_instance, gtk_toggle_button_get_type( ) ), active );
    if ( pack_start )
    {
      if ( ( box != 0 ) & 255 )
      {
        gtk_box_pack_start( g_type_check_instance_cast( &box->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), b, expand, fill, pad );
      }
    }
    else
    if ( ( ( box != 0 ) & 255 ) == 0 )
      button[0] = button[0];
    else
    {
      gtk_box_pack_end( g_type_check_instance_cast( &box->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), b, expand, fill, pad );
    }
    if ( cb_func )
    {
      button[0] = button[0];
      gtk_signal_connect_full( (GtkObject*)g_type_check_instance_cast( &b[0].object.parent_instance.g_type_instance, gtk_object_get_type( ) ), "clicked", cb_func, 0, data, 0, 0, 0 );
    }
    if ( button )
    {
      button[0] = b;
    }
  }
  return;
}
void ghid_button_connected( GtkWidget *box, GtkWidget **button, gboolean pack_start, gboolean expand, gboolean fill, gint pad, void (*cb_func)( void ), gpointer data, gchar *string )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  GtkWidget *b;
  if ( string )
  {
    b = gtk_button_new_with_label( string );
    if ( pack_start )
    {
      if ( ( box != 0 ) & 255 )
      {
        gtk_box_pack_start( g_type_check_instance_cast( &box->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), b, expand, fill, pad );
      }
    }
    else
    if ( ( ( box != 0 ) & 255 ) == 0 )
    {
    }
    else
    {
      gtk_box_pack_end( g_type_check_instance_cast( &box->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), b, expand, fill, pad );
    }
    if ( cb_func )
    {
      gtk_signal_connect_full( (GtkObject*)g_type_check_instance_cast( &b[0].object.parent_instance.g_type_instance, gtk_object_get_type( ) ), "clicked", cb_func, 0, data, 0, 0, 0 );
    }
    if ( button )
    {
      button[0] = b;
    }
  }
  return;
}
void ghid_spin_button( GtkWidget *box, GtkWidget **spin_button, gfloat value, gfloat low, gfloat high, gfloat step0, gfloat step1, gint digits, gint width, void (*cb_func)( void ), gpointer data, gboolean right_align, gchar *string )
{
  int edx;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  GtkWidget *hbox, *label, *spin_but;
  /* phantom */ GtkSpinButton *spin;
  /* phantom */ GtkAdjustment *adj;
  if ( string && box )
  {
    hbox = gtk_hbox_new( 0, 0 );
    gtk_box_pack_start( g_type_check_instance_cast( &box[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), hbox, 0, 0, 2 );
    box = hbox;
  }
  spin_but = gtk_spin_button_new( (GtkAdjustment*)gtk_adjustment_new( ebp_120, ebp_136, ebp_104, low, value, 0.000000000000 ), 0.500000000000, digits );
  if ( ebp_52 )
    edx = gtk_spin_button_new( (GtkAdjustment*)gtk_adjustment_new( ebp_120, ebp_136, ebp_104, low, value, 0.000000000000 ), 0.500000000000, digits );
  if ( width > 0 )
    gtk_widget_set_size_request( spin_but, width, -1 );
  gtk_spin_button_set_numeric( (GtkSpinButton*)g_type_check_instance_cast( &spin_but[0].object.parent_instance.g_type_instance, gtk_spin_button_get_type( ) ), 1 );
  data = data == 0 ? data : (void*)g_type_check_instance_cast( &spin_but[0].object.parent_instance.g_type_instance, gtk_spin_button_get_type( ) );
  if ( cb_func )
  {
    g_signal_connect_data( g_type_check_instance_cast( &spin_but[0].object.parent_instance.g_type_instance, 80 ), "value_changed", cb_func, data, 0, 0 );
  }
  if ( box == 0 )
  {
    return;
  }
  if ( ( string != 0 ) == 0 || right_align == 0 )
  {
  }
  else
  {
    gtk_misc_set_alignment( g_type_check_instance_cast( (GTypeInstance*)gtk_label_new( string ), gtk_misc_get_type( ) ), 1065353216, 1056964608 );
    gtk_box_pack_start( g_type_check_instance_cast( &box[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), gtk_label_new( string ), 1, 1, 2 );
  }
  gtk_box_pack_start( g_type_check_instance_cast( &box[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), spin_but, 0, 0, 2 );
  if ( string != 0 && right_align == 0 )
  {
    label = gtk_label_new( string );
    gtk_misc_set_alignment( g_type_check_instance_cast( &label[0].object.parent_instance.g_type_instance, gtk_misc_get_type( ) ), 0, 1056964608 );
    high = 0.0;
    low = 0.0;
    value = 0.0;
    spin_button = &label;
    box = (GtkWidget*)g_type_check_instance_cast( &box[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) );
  }
  return;
}
void ghid_table_spin_button( GtkWidget *table, gint row, gint column, GtkWidget **spin_button, gfloat value, gfloat low, gfloat high, gfloat step0, gfloat step1, gint digits, gint width, void (*cb_func)( void ), gpointer data, gboolean right_align, gchar *string )
{
  int ecx;
  int edx;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  GtkWidget *label, *spin_but;
  /* phantom */ GtkSpinButton *spin;
  /* phantom */ GtkAdjustment *adj;
  if ( table )
  {
    spin_but = gtk_spin_button_new( (GtkAdjustment*)gtk_adjustment_new( value, low, high, step0, step1, 0.000000000000 ), 0.500000000000, digits );
    if ( spin_button )
      spin_button[0] = gtk_spin_button_new( (GtkAdjustment*)gtk_adjustment_new( value, low, high, step0, step1, 0.000000000000 ), 0.500000000000, digits );
    if ( width > 0 )
      gtk_widget_set_size_request( spin_but, width, -1 );
    gtk_spin_button_set_numeric( (GtkSpinButton*)g_type_check_instance_cast( &spin_but[0].object.parent_instance.g_type_instance, gtk_spin_button_get_type( ) ), 1 );
    data = data == 0 ? data : (void*)g_type_check_instance_cast( &spin_but[0].object.parent_instance.g_type_instance, gtk_spin_button_get_type( ) );
    if ( cb_func )
    {
      g_signal_connect_data( g_type_check_instance_cast( &spin_but[0].object.parent_instance.g_type_instance, 80 ), "value_changed", cb_func, data, 0, 0 );
    }
    if ( right_align )
    {
      gtk_table_attach_defaults( g_type_check_instance_cast( &table[0].object.parent_instance.g_type_instance, gtk_table_get_type( ) ), spin_but, column + 1, column + 2, row, row + 1 );
      if ( string == 0 )
      {
        return;
      }
      label = gtk_label_new( string );
      gtk_misc_set_alignment( g_type_check_instance_cast( &label[0].object.parent_instance.g_type_instance, gtk_misc_get_type( ) ), 1065353216, 1056964608 );
      g_type_check_instance_cast( &table[0].object.parent_instance.g_type_instance, gtk_table_get_type( ) );
      low = row + 1;
      value = row;
      spin_button = column + 1;
      column = column;
      row = label;
      table = (GtkWidget*)g_type_check_instance_cast( &table[0].object.parent_instance.g_type_instance, gtk_table_get_type( ) );
    }
    else
    {
      gtk_table_attach_defaults( g_type_check_instance_cast( &table[0].object.parent_instance.g_type_instance, gtk_table_get_type( ) ), spin_but, column, column + 1, row, row + 1 );
      if ( string == 0 )
      {
        return;
      }
      label = gtk_label_new( string );
      gtk_misc_set_alignment( g_type_check_instance_cast( &label[0].object.parent_instance.g_type_instance, gtk_misc_get_type( ) ), 0, 1056964608 );
      g_type_check_instance_cast( &table[0].object.parent_instance.g_type_instance, gtk_table_get_type( ) );
      low = row + 1;
      value = row;
      spin_button = column + 2;
      column = column;
      row = label;
      table = (GtkWidget*)g_type_check_instance_cast( &table[0].object.parent_instance.g_type_instance, gtk_table_get_type( ) );
    }
  }
  else
  {
  }
  return;
}
void ghid_range_control( GtkWidget *box, GtkWidget **scale_res, gboolean horizontal, GtkPositionType pos, gboolean set_draw_value, gint digits, gboolean pack_start, gboolean expand, gboolean fill, guint pad, gfloat value, gfloat low, gfloat high, gfloat step0, gfloat step1, void (*cb_func)( void ), gpointer data )
{
  GtkWidget *scale;
  GtkAdjustment *adj = (GtkAdjustment*)gtk_adjustment_new( value, low, high, step0, step1, 0.000000000000 );
  if ( horizontal )
  {
    scale = gtk_hscale_new( (GtkAdjustment*)g_type_check_instance_cast( &adj->parent_instance.parent_instance.g_type_instance, gtk_adjustment_get_type( ) ) );
  }
  else
  {
    scale = gtk_vscale_new( (GtkAdjustment*)g_type_check_instance_cast( &adj->parent_instance.parent_instance.g_type_instance, gtk_adjustment_get_type( ) ) );
  }
  gtk_scale_set_value_pos( g_type_check_instance_cast( &scale[0].object.parent_instance.g_type_instance, gtk_scale_get_type( ) ), pos );
  gtk_scale_set_draw_value( g_type_check_instance_cast( &scale[0].object.parent_instance.g_type_instance, gtk_scale_get_type( ) ), set_draw_value );
  gtk_scale_set_digits( g_type_check_instance_cast( &scale[0].object.parent_instance.g_type_instance, gtk_scale_get_type( ) ), digits );
  gtk_range_set_update_policy( g_type_check_instance_cast( &scale[0].object.parent_instance.g_type_instance, gtk_range_get_type( ) ), 0 );
  gtk_range_set_increments( g_type_check_instance_cast( &scale[0].object.parent_instance.g_type_instance, gtk_range_get_type( ) ), -1.000000000000, 1.000000000000 );
  if ( pack_start )
  {
    gtk_box_pack_start( g_type_check_instance_cast( &box->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), scale, expand, fill, pad );
  }
  else
  {
    gtk_box_pack_end( g_type_check_instance_cast( &box->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), scale, expand, fill, pad );
  }
  data = data == 0 ? data : (void*)adj;
  if ( cb_func )
  {
    g_signal_connect_data( g_type_check_instance_cast( &adj->parent_instance.parent_instance.g_type_instance, 80 ), "value_changed", cb_func, data, 0, 0 );
  }
  if ( scale_res )
  {
    scale_res[0] = scale;
  }
  return;
}
GtkWidget *ghid_scrolled_vbox( GtkWidget *box, GtkWidget **scr, GtkPolicyType h_policy, GtkPolicyType v_policy )
{
  GtkWidget *scrolled = gtk_scrolled_window_new( 0, 0 ), *vbox;
  gtk_scrolled_window_set_policy( g_type_check_instance_cast( &scrolled[0].object.parent_instance.g_type_instance, gtk_scrolled_window_get_type( ) ), h_policy, v_policy );
  gtk_box_pack_start( g_type_check_instance_cast( &box->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), scrolled, 1, 1, 0 );
  vbox = gtk_vbox_new( 0, 0 );
  gtk_scrolled_window_add_with_viewport( g_type_check_instance_cast( &scrolled[0].object.parent_instance.g_type_instance, gtk_scrolled_window_get_type( ) ), vbox );
  if ( scr )
  {
    scr[0] = scrolled;
  }
  return vbox;
}
GtkWidget *ghid_framed_vbox( GtkWidget *box, gchar *label, gint frame_border_width, gboolean frame_expand, gint vbox_pad, gint vbox_border_width )
{
  GtkWidget *frame = gtk_frame_new( label );
  GtkWidget *vbox;
  gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &frame[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), frame_border_width );
  gtk_box_pack_start( g_type_check_instance_cast( &box->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), frame, frame_expand, frame_expand, 0 );
  vbox = gtk_vbox_new( 0, vbox_pad );
  gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( (GTypeInstance*)gtk_vbox_new( 0, vbox_pad ), gtk_container_get_type( ) ), vbox_border_width );
  gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &frame[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), vbox );
  return &vbox->object.parent_instance.g_type_instance.g_class->g_type;
}
GtkWidget *ghid_framed_vbox_end( GtkWidget *box, gchar *label, gint frame_border_width, gboolean frame_expand, gint vbox_pad, gint vbox_border_width )
{
  GtkWidget *frame = gtk_frame_new( label );
  GtkWidget *vbox;
  gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &frame[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), frame_border_width );
  gtk_box_pack_end( g_type_check_instance_cast( &box->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), frame, frame_expand, frame_expand, 0 );
  vbox = gtk_vbox_new( 0, vbox_pad );
  gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( (GTypeInstance*)gtk_vbox_new( 0, vbox_pad ), gtk_container_get_type( ) ), vbox_border_width );
  gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &frame[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), vbox );
  return &vbox->object.parent_instance.g_type_instance.g_class->g_type;
}
GtkWidget *ghid_category_vbox( GtkWidget *box, gchar *category_header, gint header_pad, gint box_pad, gboolean pack_start, gboolean bottom_pad )
{
  GtkWidget *vbox = gtk_vbox_new( 0, 0 ), *vbox1, *hbox, *label;
  /* phantom */ gchar *s;
  if ( pack_start )
  {
    gtk_box_pack_start( g_type_check_instance_cast( &box[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), vbox, 0, 0, 0 );
  }
  else
  {
    gtk_box_pack_end( g_type_check_instance_cast( &box[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), vbox, 0, 0, 0 );
  }
  if ( category_header )
  {
    label = gtk_label_new( 0 );
    vbox1 = (GtkWidget*)g_strconcat( "&lt;span weight=\"bold\"&gt;", category_header, (long long)( "&lt;/span&gt;" ) );
    gtk_label_set_markup( g_type_check_instance_cast( &label[0].object.parent_instance.g_type_instance, gtk_label_get_type( ) ), (gchar*)vbox1 );
    gtk_misc_set_alignment( g_type_check_instance_cast( &label[0].object.parent_instance.g_type_instance, gtk_misc_get_type( ) ), 0, 1056964608 );
    gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, ebx ), label, 0, 0, header_pad );
    g_free( &vbox1 );
  }
  hbox = gtk_hbox_new( 0, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, ebx ), hbox, 0, 0, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, ebx ), gtk_label_new( "     " ), 0, 0, 0 );
  vbox1 = gtk_vbox_new( 0, box_pad );
  gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, ebx ), vbox1, 1, 1, 0 );
  if ( bottom_pad )
  {
    label = gtk_label_new( "" );
    gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, ebx ), label, 0, 0, 0 );
  }
  return vbox1;
}
GtkTreeSelection *ghid_scrolled_selection( GtkTreeView *treeview, GtkWidget *box, GtkSelectionMode s_mode, GtkPolicyType h_policy, GtkPolicyType v_policy, void (*func_cb)( void ), gpointer data )
{
  int ebx;
  int esi;
  int edi;
  GtkTreeSelection *selection;
  GtkWidget *scrolled;
  if ( box == 0 || treeview == 0 )
  {
    selection = 0;
  }
  scrolled = gtk_scrolled_window_new( 0, 0 );
  gtk_box_pack_start( g_type_check_instance_cast( &box[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), scrolled, 1, 1, 0 );
  gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &scrolled->object.parent_instance.g_type_instance, gtk_container_get_type( ) ), (GtkWidget*)g_type_check_instance_cast( &treeview[0].parent.widget.object.parent_instance.g_type_instance, gtk_widget_get_type( ) ) );
  gtk_scrolled_window_set_policy( g_type_check_instance_cast( &scrolled->object.parent_instance.g_type_instance, gtk_scrolled_window_get_type( ) ), h_policy, v_policy );
  selection = gtk_tree_view_get_selection( treeview );
  gtk_tree_selection_set_mode( gtk_tree_view_get_selection( treeview ), s_mode );
  if ( func_cb )
  {
    g_signal_connect_data( g_type_check_instance_cast( &selection[0].parent.g_type_instance, 80 ), "changed", func_cb, data, 0, 0 );
  }
  return selection;
}
GtkWidget *ghid_notebook_page( GtkWidget *tabs, char *name, gint pad, gint border )
{
  GtkWidget *label;
  GtkWidget *vbox = gtk_vbox_new( 0, pad );
  gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), border );
  label = gtk_label_new( name );
  gtk_notebook_append_page( (GtkNotebook*)g_type_check_instance_cast( &tabs->object.parent_instance.g_type_instance, gtk_notebook_get_type( ) ), vbox, label );
  return &vbox->object.parent_instance.g_type_instance.g_class->g_type;
}
GtkWidget *ghid_framed_notebook_page( GtkWidget *tabs, char *name, gint border, gint frame_border, gint vbox_pad, gint vbox_border )
{
  int ebx;
  int esi;
  int edi;
  GtkWidget *vbox;
  vbox_border = vbox_border;
  vbox_pad = vbox_pad;
  border = frame_border;
  frame_border = 1;
  name = 0;
  tabs = ghid_notebook_page( tabs, name, 0, border );
}
void ghid_dialog_report( gchar *title, gchar *message )
{
  int edx;
  /* phantom */ GtkWidget *top_win;
  GtkWidget *dialog;
  GtkWidget *scrolled;
  GtkWidget *vbox, *vbox1;
  GtkWidget *label;
  gchar *s;
  static gint nlines;
  /* phantom */ GHidPort *out;
  if ( message )
  {
    title[0] = title == 0 ? title : "PCB";
    dialog = gtk_dialog_new_with_buttons( title == 0 ? title : "PCB", (GtkWindow*)g_type_check_instance_cast( &ghid_port.top_window[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), 2, "gtk-ok", (long long)-1 );
    g_signal_connect_data( g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_object_get_type( ) ) ), "response", &gtk_widget_destroy, g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_object_get_type( ) ), 0, 2 );
    gtk_window_set_wmclass( (GtkWindow*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_window_get_type( ) ), "PCB_Dialog", "PCB" );
    vbox = gtk_vbox_new( 0, 0 );
    gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), 8 );
    gtk_box_pack_start( g_type_check_instance_cast( *(int*)g_type_check_instance_cast( &dialog[0].object.parent_instance.g_type_instance, gtk_dialog_get_type( ) )/*.148*/, gtk_box_get_type( ) ), vbox, 0, 0, 0 );
    label = gtk_label_new( message );
    gtk_label_set_justify( g_type_check_instance_cast( &label->object.parent_instance.g_type_instance, gtk_label_get_type( ) ), 0 );
    if ( message[0] )
    {
      nlines = 0;
      message[0] = message;
      do
      {
        s[0] = message + 1;
        nlines += message[0] == '\n';
      }
      while ( s[0] );
      if ( nlines > 20 )
      {
        vbox1 = ghid_scrolled_vbox( vbox, &scrolled, 2, 1 );
        gtk_widget_set_size_request( scrolled, -1, 300 );
        gtk_box_pack_start( g_type_check_instance_cast( ebp_88, ebp_84 ), label, label, 0, 0 );
        gtk_widget_show_all( dialog );
      }
    }
    gtk_box_pack_start( g_type_check_instance_cast( ebp_88, ebp_84 ), label, label, 0, 0 );
    gtk_widget_show_all( dialog );
  }
  return;
}
void ghid_label_set_markup( GtkWidget *label, gchar *text )
{
  int ebx;
  int esi;
  if ( label )
  {
    text[0] = text == 0 ? text : "";
    label = (GtkWidget*)g_type_check_instance_cast( &label[0].object.parent_instance.g_type_instance, gtk_label_get_type( ) );
  }
  return;
}
void text_view_append( GtkWidget *view, gchar *s )
{
  int eax;
  GtkTextIter iter;
  GtkTextBuffer *buffer = gtk_text_view_get_buffer( g_type_check_instance_cast( &view[0].object.parent_instance.g_type_instance, gtk_text_view_get_type( ) ) );
  GtkTextMark *mark;
  gtk_text_buffer_get_end_iter( buffer, iter.dummy1 );
  strcmp( *(int*)(0), *(int*)(0) );
  if ( 1 )
  {
    s[0] = s + 3;
    gtk_text_buffer_insert_with_tags_by_name( buffer, iter.dummy1, s + 3, -1, "bold", 0 );
  }
  else
  {
    strcmp( "&lt;i&gt;", s );
    if ( 1 )
    {
    }
    else
    {
      strcmp( "&lt;h&gt;", s );
      if ( 1 )
      {
      }
      else
      {
        strcmp( "&lt;c&gt;", s );
        if ( 1 )
          s[0] = s + 3;
          gtk_text_buffer_insert_with_tags_by_name( buffer, iter.dummy1, s, ebp_140, (gchar*)iter.dummy1 );
        else
        {
          strcmp( "&lt;ul&gt;", s );
          if ( 1 )
            s[0] = s + 4;
          else
          {
            gtk_text_buffer_insert( buffer, iter.dummy1, s, -1 );
          }
        }
      }
    }
    s[0] = s + 3;
  }
  mark = &eax[0].g_class[0].g_type;
  gtk_text_view_scroll_to_mark( g_type_check_instance_cast( &view[0].object.parent_instance.g_type_instance, gtk_text_view_get_type( ) ), mark, 0.000000000000, 0.000000000000, 1, 1 );
  gtk_text_buffer_delete_mark( buffer, mark );
  return;
}
void ghid_text_view_append( GtkWidget *view, gchar *string )
{
  int eax;
  static gchar *tag;
  /* phantom */ gchar *s;
  if ( string[0] == '<' )
  {
    if ( string[2] != '>' )
    {
    }
    else
    if ( string[3] == 0 )
    {
      tag = g_strdup( string );
      return;
    }
    if ( g_strconcat( tag, (long long)( string ), ebp_8, ebp_8, ebp_4, ebp_4 ) == '>' && string[4] == 0 )
    {
      tag = g_strdup( string );
      return;
    }
  }
  if ( tag == 0 )
  {
  }
  text_view_append( view, g_strconcat( tag, (long long)( string ), ebp_8, ebp_8, ebp_4, ebp_4 ) );
  g_free( g_strconcat( tag, (long long)( string ), ebp_8, ebp_8, ebp_4, ebp_4 ) );
  g_free( tag );
  tag = 0;
  return;
}
void ghid_text_view_append_strings( GtkWidget *view, gchar **string, gint n_strings )
{
  int eax;
  int edx;
  gchar *tag;
  gchar *s, *t;
  gint i;
  if ( n_strings > 0 )
  {
    i = 0;
    *(int*)&tag[0] = 0;
    do
    {
      s[0] = string[ i ];
      if ( s[0] == '<' )
      {
        if ( s[2] != '>' )
        {
        }
        else
        if ( s[3] == 0 )
        {
          i++;
          tag[0] = g_strdup( s );
          if ( n_strings <= i )
            break;
        }
        if ( s[3] == '>' && s[4] == 0 )
          tag[0] = tag;
          i++;
          tag[0] = g_strdup( s );
      }
      dcgettext( 0, s, 5 );
      if ( tag )
      {
        text_view_append( view, g_strconcat( tag, (long long)( dcgettext( 0, s, 5 ) ) ) );
        g_free( g_strconcat( tag, (long long)( dcgettext( 0, s, 5 ) ) ) );
        *(int*)&tag[0] = 0;
        g_free( tag );
      }
      else
        text_view_append( view, dcgettext( 0, s, 5 ) );
      i++;
    }
    while ( i + 1 < n_strings );
  }
  return;
}
GtkWidget *ghid_scrolled_text_view( GtkWidget *box, GtkWidget **scr, GtkPolicyType h_policy, GtkPolicyType v_policy )
{
  GtkWidget *scrolled = gtk_scrolled_window_new( 0, 0 ), *view;
  GtkTextBuffer *buffer;
  gtk_scrolled_window_set_policy( g_type_check_instance_cast( &scrolled[0].object.parent_instance.g_type_instance, gtk_scrolled_window_get_type( ) ), h_policy, v_policy );
  gtk_box_pack_start( g_type_check_instance_cast( &box->object.parent_instance.g_type_instance, gtk_box_get_type( ) ), scrolled, 1, 1, 0 );
  view = gtk_text_view_new( );
  gtk_text_view_set_editable( g_type_check_instance_cast( &view[0].object.parent_instance.g_type_instance, gtk_text_view_get_type( ) ), 0 );
  buffer = gtk_text_view_get_buffer( g_type_check_instance_cast( &view[0].object.parent_instance.g_type_instance, gtk_text_view_get_type( ) ) );
  gtk_text_buffer_create_tag( gtk_text_view_get_buffer( g_type_check_instance_cast( &view[0].object.parent_instance.g_type_instance, gtk_text_view_get_type( ) ) ), "heading", "weight", 700, "size", (long long)14336 );
  gtk_text_buffer_create_tag( buffer, "italic", "style", (long long)2 );
  gtk_text_buffer_create_tag( buffer, "bold", "weight", (long long)700 );
  gtk_text_buffer_create_tag( buffer, "center", "justification", (long long)2 );
  gtk_text_buffer_create_tag( buffer, "underline", "underline", (long long)1 );
  gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &scrolled[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), view );
  if ( scr )
  {
    scr[0] = scrolled;
  }
  return view;
}
gboolean utf8_dup_string( gchar **dst_utf8, gchar *src )
{
  int esi;
  int edi;
  if ( dst_utf8 )
  {
    if ( src == 0 )
    {
      if ( dst_utf8[0] == 0 )
      {
        return 1;
      }
    }
    else
    if ( dst_utf8[0] )
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      if ( strcmp( dst_utf8[0], src ) == 0 )
      {
        return 1;
      }
    }
    else
    {
      if ( src == 0 )
      {
        dst_utf8[0] = 0;
        return 1;
      }
      if ( g_utf8_validate( src, -1, 0 ) == 0 )
      {
        dst_utf8[0] = g_locale_to_utf8( src, -1, 0, 0, 0 );
        if ( dst_utf8 == 0 )
        {
          dst_utf8[0] = g_strdup( src );
          return 1;
        }
        return 1;
      }
      dst_utf8[0] = g_strdup( src );
      return 1;
    }
    g_free( dst_utf8[0] );
  }
}
#if 0
#endif
