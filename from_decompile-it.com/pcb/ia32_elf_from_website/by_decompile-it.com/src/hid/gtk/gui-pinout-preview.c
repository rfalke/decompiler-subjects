#include "gui-pinout-preview.c.h"
static GObjectClass *ghid_pinout_preview_parent_class;
gboolean pinout_zoom_fit( GhidPinoutPreview *pinout, gint zoom )
{
  pinout->zoom = (double)( zoom );
  pinout->x_max = Settings.PinoutOffsetX + pinout->element.BoundingBox.X2;
  pinout->y_max = Settings.PinoutOffsetY + pinout->element.BoundingBox.Y2;
  pinout->scale = 1.000000000000 / ( exp( (double)( zoom ) * 0.346573590000 ) * 100.000000000000 );
  pinout->w_pixels = (int)( (double)( pinout->element.BoundingBox.X2 - pinout->element.BoundingBox.X1 ) * ( 1.000000000000 / ( exp( (double)( zoom ) * 0.346573590000 ) * 100.000000000000 ) ) );
  pinout->h_pixels = (int)( ( 1.000000000000 / ( exp( (double)( zoom ) * 0.346573590000 ) * 100.000000000000 ) ) * (double)( pinout->element.BoundingBox.Y2 - pinout->element.BoundingBox.Y1 ) );
  return (int)( (double)( pinout->element.BoundingBox.X2 - pinout->element.BoundingBox.X1 ) * ( 1.000000000000 / ( exp( (double)( zoom ) * 0.346573590000 ) * 100.000000000000 ) ) ) <= ( ( (unsigned char)( ( ( ( Output.Width * 3 ) >> 31 ) & 1 ) ^ 1 ) ? ( Output.Width + 1 ) * 3 : Output.Width * 3 ) >> 2 ) ? 0 : (int)( ( 1.000000000000 / ( exp( (double)( zoom ) * 0.346573590000 ) * 100.000000000000 ) ) * (double)( pinout->element.BoundingBox.Y2 - pinout->element.BoundingBox.Y1 ) ) <= ( ( Output.Height * 3 < 0 ? Output.Height * 3 : ( Output.Height + 1 ) * 3 ) >> 2 );
}
void pinout_set_data( GhidPinoutPreview *pinout, ElementType *element )
{
  int edx;
  /* phantom */ gint tx;
  /* phantom */ gint ty;
  /* phantom */ gint x_min;
  /* phantom */ gint y_min;
  if ( element == 0 )
  {
    FreeElementMemory( &pinout->element.BoundingBox.X1 );
    pinout->w_pixels = 0;
    pinout->h_pixels = 0;
    return;
  }
  CopyElementLowLevel( 0, &pinout->element.BoundingBox.X1, element, 0, 0, 0 );
{
  Cardinal n;
  Cardinal sn = pinout->element.PinN;
  /* phantom */ PinTypePtr pin;
  if ( pinout->element.PinN )
  {
    n = 1;
    pinout->element.Pin->Flags.f |= 32;
    for ( ; n < sn; n++ )
    {
      &pinout->element.net |= 32;
      // n++;
    }
  }
{
  Cardinal n;
  Cardinal sn = pinout->element.PadN;
  /* phantom */ PadTypePtr pad;
  if ( pinout->element.PadN )
  {
    n = 1;
    pinout->element.Pad->Flags.f |= 32;
    for ( ; n < sn; n++ )
    {
      pinout->element.Pin[2].DrillingHole |= 32;
      // n++;
    }
  }
  MoveElementLowLevel( 0, &pinout->element.BoundingBox.X1, Settings.PinoutOffsetX - pinout->element.BoundingBox.X1, Settings.PinoutOffsetY - pinout->element.BoundingBox.Y1 );
  if ( pinout_zoom_fit( pinout, 2 ) == 0 )
    pinout_zoom_fit( pinout, 3 );
{
  Cardinal n = pinout->element.LineN + -1;
  /* phantom */ LineTypePtr line;
  if ( pinout->element.LineN + -1 != -1 )
  {
    pinout->element.LineN = pinout->element.Line->BoundingBox.X1 + -52;
    do
    {
      n += -1;
      *(int*)(pinout->element.Line->BoundingBox.X1 + -52) = 0;
      *(int*)(pinout->element.Line->BoundingBox.X1 + -52) += -88;
    }
    while ( n + -1 != -1 );
  }
{
  Cardinal n = pinout->element.ArcN + -1;
  /* phantom */ ArcTypePtr arc;
  if ( pinout->element.ArcN + -1 != -1 )
  {
    pinout->element.ArcN = pinout->element.Arc + ( pinout->element.ArcN * 68 ) + -68 + 36;
    do
    {
      n += -1;
      pinout->element.Arc->BoundingBox.X1 = 1;
      pinout->element.Arc->BoundingBox.X1 = pinout->element.Arc + ( pinout->element.ArcN * 68 ) + -68 + 36 + -68;
    }
    while ( n + -1 != -1 );
  }
  return;
}
}
}
}
}
gboolean ghid_pinout_preview_expose( GtkWidget *widget, GdkEventExpose *event )
{
  double fp0;
  double fp1;
  double fp4;
  GhidPinoutPreview *pinout = (GhidPinoutPreview*)g_type_check_instance_cast( &widget->object.parent_instance.g_type_instance, ghid_pinout_preview_get_type( ) );
  GdkDrawable *save_drawable;
  double save_zoom = gport->zoom;
  int da_w, da_h;
  int save_left, save_top;
  int save_width = gport->width, save_height = gport->height;
  int save_view_width, save_view_height;
  double xz, yz;
  save_left = gport->view_x0;
  save_top = gport->view_y0;
  save_drawable = &gport->drawable;
  save_view_width = gport->view_width;
  save_view_height = gport->view_height;
  gdk_window_get_geometry( &widget->window, 0, 0, &da_w, &da_h, 0 );
  if ( (double)( pinout->x_max ) / (double)( da_w ) <= (double)( pinout->y_max ) / (double)( da_h ) )
  {
    xz = 0.000000000000;
    gport->zoom = 0.000000000000;
  }
  else
    gport->zoom = 0.000000000000;
  gport->width = da_w;
  gport->height = da_h;
  gport->drawable = widget->window;
  gport->view_width = (int)( 0.000000000000 );
  gport->view_x0 = ( pinout->x_max + ( pinout->x_max - (int)( 0.000000000000 ) ) ) >> 1;
  gport->view_height = (int)( 0.000000000000 * *(double*)(gport + 104) );
  gport->view_y0 = ( pinout->y_max - (int)( 0.000000000000 * *(double*)(gport + 104) ) ) / 2;
  gdk_draw_rectangle( &widget->window, &gport->bg_gc, 1, 0, 0, gport + 20, gport + 24 );
  hid_expose_callback( &ghid_hid, 0, pinout->parent_instance.widget.object.parent_instance.g_type_instance.g_class->g_type + 64 );
  gport->drawable = save_drawable;
  gport->height = save_height;
  gport->view_x0 = save_left;
  gport->width = save_width;
  gport->zoom = save_zoom;
  gport->view_width = save_view_width;
  gport->view_height = save_view_height;
  gport->view_y0 = save_top;
  return 0;
}
void ghid_pinout_preview_finalize( GObject *object )
{
  /* phantom */ GhidPinoutPreview *pinout;
  g_type_check_instance_cast( &object->g_type_instance, ghid_pinout_preview_get_type( ) );
  pinout_set_data( &eax[0].g_type, 0 );
  object = object;
  ;
}
void ghid_pinout_preview_set_property( GObject *object, guint property_id, GValue *value, GParamSpec *pspec )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  int edi;
  /* phantom */ GhidPinoutPreview *pinout;
  if ( property_id == 1 )
  {
    pinout_set_data( (GhidPinoutPreview*)g_type_check_instance_cast( &object->g_type_instance, ghid_pinout_preview_get_type( ) ), g_value_get_pointer( value ) );
    if ( ( *(char*)(&eax[3].g_class) & 64 ) & 255 )
    {
      value = 0;
      property_id = 0;
      object = *(int*)(GObject*)g_type_check_instance_cast( g_type_check_instance_cast( &object->g_type_instance, ghid_pinout_preview_get_type( ) ), gtk_widget_get_type( ) )/*.52*/;
    }
  }
  else
  {
    /* phantom */ GObject *_object;
    /* phantom */ GParamSpec *_pspec;
    /* phantom */ guint _property_id;
    g_log( 0, 16, "%s: invalid %s id %u for \"%s\" of type `%s' in `%s'", "../../src/hid/gtk/gui-pinout-preview.c:268", "property", property_id, pspec->name, g_type_name( pspec->g_type_instance._GTypeInstance ), g_type_name( object->g_type_instance.g_class->g_type ) );
  }
  return;
}
void ghid_pinout_preview_get_property( GObject *object, guint property_id, GValue *value, GParamSpec *pspec )
{
{
  /* phantom */ GObject *_object;
  /* phantom */ GParamSpec *_pspec;
  /* phantom */ guint _property_id;
  g_log( 0, 16, "%s: invalid %s id %u for \"%s\" of type `%s' in `%s'", "../../src/hid/gtk/gui-pinout-preview.c:293", "property", pspec->name, g_type_name( pspec->g_type_instance._GTypeInstance ), g_type_name( object->g_type_instance.g_class ) );
  return;
}
}
void ghid_pinout_preview_class_init( GhidPinoutPreviewClass *klass )
{
  /* phantom */ GObjectClass *gobject_class;
  /* phantom */ GtkWidgetClass *gtk_widget_class;
  *(int*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 )/*.24*/ = ghid_pinout_preview_finalize;
  *(int*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 )/*.12*/ = ghid_pinout_preview_set_property;
  *(int*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 )/*.16*/ = ghid_pinout_preview_get_property;
  *(int*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, gtk_widget_get_type( ) )/*.200*/ = ghid_pinout_preview_expose;
  ghid_pinout_preview_parent_class = g_type_class_peek_parent( &klass );
  g_object_class_install_property( (GObjectClass*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 ), 1, g_param_spec_pointer( "element-data", "", "", 2 ) );
  return;
}
GType ghid_pinout_preview_get_type( void )
{
  static GType ghid_pinout_preview_type;
  if ( ghid_pinout_preview_type == 0 )
  {
    static GTypeInfo ghid_pinout_preview_info = { 380, 0, 0, 0, 0, 0, 0, 388, 0, 0 }
;
    ghid_pinout_preview_type = g_type_register_static( gtk_drawing_area_get_type( ), "GhidPinoutPreview", &ghid_pinout_preview_info.class_size, 0 );
    return g_type_register_static( gtk_drawing_area_get_type( ), "GhidPinoutPreview", &ghid_pinout_preview_info.class_size, 0 );
  }
  return ghid_pinout_preview_type;
}
GtkWidget *ghid_pinout_preview_new( ElementType *element )
{
  /* phantom */ GhidPinoutPreview *pinout_preview;
  return g_type_check_instance_cast( g_object_new( ghid_pinout_preview_get_type( ), "element-data", (long long)( element ) ), gtk_widget_get_type( ) );
}
void ghid_pinout_preview_get_natural_size( GhidPinoutPreview *pinout, int *width, int *height )
{
  width[0] = pinout->w_pixels;
  height[0] = pinout->h_pixels;
  return;
}
#if 0
#endif
