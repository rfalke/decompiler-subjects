#include "gui-output-events.c.h"
static gint x_pan_speed;
static gint y_pan_speed;
gboolean cursor_in_viewport;
static gint event_x;
static gint event_y;
void ghid_port_ranges_changed( void )
{
  int ebx;
  int esi;
  GtkAdjustment *h_adj, *v_adj;
  if ( ghidgui->combine_adjustments == 0 )
  {
    HideCrosshair( 0 );
    if ( ghidgui->combine_adjustments == 0 )
    {
      ghidgui->need_restore_crosshair = 1;
      h_adj = gtk_range_get_adjustment( g_type_check_instance_cast( &ghidgui->h_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ) );
      gport->view_x0 = (int)( h_adj->value );
      gport->view_y0 = (int)( v_adj->value );
    }
  }
  ghidgui->combine_adjustments = 0;
  return;
}
gboolean ghid_port_ranges_pan( gdouble x, gdouble y, gboolean relative )
{
  int eax;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  GtkAdjustment *h_adj = gtk_range_get_adjustment( g_type_check_instance_cast( &ghidgui->h_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ) ), *v_adj;
  gdouble x0 = h_adj->value;
  gdouble y0 = *(int*)gtk_range_get_adjustment( g_type_check_instance_cast( &ghidgui->v_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ) )/*.32*/;
  gdouble x1 = y;
  gdouble y1;
  y = v_adj->lower <= y ? v_adj->lower : y < v_adj->upper - v_adj->page_size ? v_adj->lower <= y ? v_adj->lower : y : v_adj->upper - v_adj->page_size;
  if ( x0 == ( h_adj->lower <= x1 ? h_adj->lower : x1 < h_adj->upper - h_adj->page_size ? h_adj->lower <= x1 ? h_adj->lower : x1 : h_adj->upper - h_adj->page_size ) )
  {
    if ( x0 != ( h_adj->lower <= x1 ? h_adj->lower : x1 < h_adj->upper - h_adj->page_size ? h_adj->lower <= x1 ? h_adj->lower : x1 : h_adj->upper - h_adj->page_size ) )
    {
      y0 = x1 = y0;
    }
    else
    {
      y0 = x1 = y0;
      if ( x1 == x0 )
      {
        if ( 1 )
        {
          ghid_note_event_location( 0 );
          y0 = x0 = x1;
          if ( y0 != x0 )
          {
          }
          else
          if ( !0 )
          {
          }
          else
          {
          }
          return ( ( ( ( ( y0 <> x0 ) & 69 ) >> 6 ) & 1 ) == 0 ) | ( y0 != x0 );
        }
        else
        {
        }
      }
      else
      {
      }
      gtk_range_set_value( g_type_check_instance_cast( &ghidgui->v_range->object.parent_instance.g_type_instance, (int)( (GType)y0 ) ), x1 );
      y1 = x0;
      ghid_note_event_location( 0 );
      y0 = x0 = x1;
    }
  }
  else
  {
    y0 = x1 = y0;
  }
  if ( x1 != ( v_adj->lower <= y ? v_adj->lower : y < v_adj->upper - v_adj->page_size ? v_adj->lower <= y ? v_adj->lower : y : v_adj->upper - v_adj->page_size ) || x1 != ( v_adj->lower <= y ? v_adj->lower : y < v_adj->upper - v_adj->page_size ? v_adj->lower <= y ? v_adj->lower : y : v_adj->upper - v_adj->page_size ) )
    ghidgui->combine_adjustments = 1;
  else
  {
  }
  gtk_range_set_value( g_type_check_instance_cast( &ghidgui->h_range->object.parent_instance.g_type_instance, (int)( (GType)y0 ) ), x0 );
  y1 = x0;
}
void ghid_port_ranges_scale( gboolean emit_changed )
{
  int eax;
  GtkAdjustment *adj;
  gport->view_width = (int)( (double)( *(int*)(gport + 20) ) * *(double*)(gport + 104) );
  gport->view_height = (int)( (double)( *(int*)(gport + 24) ) * *(double*)(gport + 104) );
  if ( PCB->MaxWidth <= (int)( (double)( *(int*)(gport + 20) ) * *(double*)(gport + 104) ) )
    gport->view_width = PCB->MaxWidth;
  if ( PCB->MaxHeight <= (int)( (double)( *(int*)(gport + 24) ) * *(double*)(gport + 104) ) )
    gport->view_height = PCB->MaxHeight;
  adj = gtk_range_get_adjustment( g_type_check_instance_cast( &ghidgui->h_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ) );
  *(int*)gtk_range_get_adjustment( g_type_check_instance_cast( &ghidgui->h_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ) )/*.56*/ = (double)( gport->view_width );
  *(int*)gtk_range_get_adjustment( g_type_check_instance_cast( &ghidgui->h_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ) )/*.48*/ = (double)( gport->view_width ) / 10.000000000000;
  *(int*)gtk_range_get_adjustment( g_type_check_instance_cast( &ghidgui->h_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ) )/*.40*/ = (double)( gport->view_width ) / 100.000000000000;
  *(int*)gtk_range_get_adjustment( g_type_check_instance_cast( &ghidgui->h_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ) )/*.24*/ = (double)( PCB->MaxWidth );
  if ( emit_changed )
  {
    gtk_signal_emit_by_name( (GtkObject*)g_type_check_instance_cast( &adj[0].parent_instance.parent_instance.g_type_instance, gtk_object_get_type( ) ), "changed" );
  }
  adj = gtk_range_get_adjustment( g_type_check_instance_cast( &ghidgui->v_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ) );
  *(int*)gtk_range_get_adjustment( g_type_check_instance_cast( &ghidgui->v_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ) )/*.56*/ = (double)( gport->view_height );
  *(int*)gtk_range_get_adjustment( g_type_check_instance_cast( &ghidgui->v_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ) )/*.48*/ = (double)( gport->view_height ) / 10.000000000000;
  *(int*)gtk_range_get_adjustment( g_type_check_instance_cast( &ghidgui->v_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ) )/*.40*/ = (double)( gport->view_height ) / 100.000000000000;
  *(int*)gtk_range_get_adjustment( g_type_check_instance_cast( &ghidgui->v_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ) )/*.24*/ = (double)( PCB->MaxHeight );
  if ( emit_changed )
  {
    gtk_signal_emit_by_name( (GtkObject*)g_type_check_instance_cast( &adj[0].parent_instance.parent_instance.g_type_instance, gtk_object_get_type( ) ), "changed" );
  }
  return;
}
void ghid_port_ranges_zoom( gdouble zoom )
{
  int eax;
  int edx;
  double fp4;
  double fp5;
  double fp7;
  gdouble xtmp = (double)( PCB->MaxHeight ) / (double)( gport->height );
  gdouble ytmp;
  gint x0;
  gint y0;
  if ( (double)( *(int*)(PCB + 144) ) / (double)( *(int*)(gport + 20) ) < zoom && 0.000000000000 < 0.000000000000 )
    ytmp = 0.000000000000;
  else
  {
    ytmp = 0.000000000000;
    if ( 1 )
    {
      if ( !0 )
      {
      }
      else
      {
      }
    }
    else
    {
    }
  }
  gport->zoom = 0.000000000000;
  pixel_slop = (int)( 0.000000000000 );
  ghid_port_ranges_scale( 0 );
  x0 = (int)( (double)( gport->view_x ) ) < 0 ? (int)( (double)( gport->view_x ) ) : 0;
  gport->view_x0 = (int)( (double)( gport->view_x ) ) < 0 ? (int)( (double)( gport->view_x ) ) : 0;
  y0 = (int)( (double)( gport->view_y ) - ( ( (double)( *(int*)(gport + 132) - *(int*)(gport + 116) ) / 0.000000000000 ) * (double)( gport->view_height ) ) );
  gport->view_y0 = (unsigned char)( ( ( (int)( (double)( gport->view_y ) - ( ( (double)( *(int*)(gport + 132) - *(int*)(gport + 116) ) / 0.000000000000 ) * (double)( gport->view_height ) ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : (int)( (double)( gport->view_y ) - ( ( (double)( *(int*)(gport + 132) - *(int*)(gport + 116) ) / 0.000000000000 ) * (double)( gport->view_height ) ) );
  ghidgui->adjustment_changed_holdoff = 1;
  gtk_range_set_value( g_type_check_instance_cast( &ghidgui->h_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ), (double)( x0 ) );
  gtk_range_set_value( g_type_check_instance_cast( &ghidgui->v_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ), (double)( gport->view_y0 ) );
  ghidgui->adjustment_changed_holdoff = 0;
}
void ghid_get_coords( char *msg, int *x, int *y )
{
  int eax;
  if ( msg )
  {
    if ( ghid_port.has_entered == 0 )
    {
      ghid_get_user_xy( msg );
    }
    else
    {
      if ( ghid_flip_x )
      {
        x[0] = PCB->MaxWidth - gport->view_x;
        y[0] = ghid_flip_y ? PCB->MaxHeight - gport->view_y : gport->view_y;
        return;
      }
      else
      {
        x[0] = gport->view_x;
        y[0] = ghid_flip_y ? PCB->MaxHeight - gport->view_y : gport->view_y;
        return;
      }
      y[0] = ghid_flip_y ? PCB->MaxHeight - gport->view_y : gport->view_y;
      return;
    }
  }
  if ( ghid_port.has_entered == 0 )
  {
    return;
  }
}
gboolean ghid_note_event_location( GdkEventButton *ev )
{
  int ecx;
  int edx;
  gint x;
  gint y;
  gboolean moved;
  if ( ev == 0 )
  {
    gdk_window_get_pointer( &ghid_port.drawing_area->window, &x, &y, 0 );
    event_x = x;
    event_y = y;
  }
  else
  {
    event_x = (int)( ev->x );
    event_y = (int)( ev->y );
  }
  gport->view_x = (int)( ( gport->zoom * (double)( (int)( ev->x ) ) ) + (double)( gport->view_x0 ) );
  gport->view_y = (int)( ( gport->zoom * (double)( (int)( ev->y ) ) ) + (double)( gport->view_y0 ) );
  moved = MoveCrosshairAbsolute( PCB->MaxWidth - (int)( ( gport->zoom * (double)( (int)( ev->x ) ) ) + (double)( gport->view_x0 ) ), ghid_flip_y ? PCB->MaxHeight - (int)( ( gport->zoom * (double)( (int)( ev->y ) ) ) + (double)( gport->view_y0 ) ) : (int)( ( gport->zoom * (double)( (int)( ( gport->zoom * (double)( (int)( ev->y ) ) ) + (double)( gport->view_y0 ) ) ) ) + (double)( gport->view_y0 ) ) );
  if ( MoveCrosshairAbsolute( PCB->MaxWidth - (int)( ( gport->zoom * (double)( (int)( ev->x ) ) ) + (double)( gport->view_x0 ) ), ghid_flip_y ? PCB->MaxHeight - (int)( ( gport->zoom * (double)( (int)( ev->y ) ) ) + (double)( gport->view_y0 ) ) : (int)( ( gport->zoom * (double)( (int)( ( gport->zoom * (double)( (int)( ev->y ) ) ) + (double)( gport->view_y0 ) ) ) ) + (double)( gport->view_y0 ) ) ) )
  {
    AdjustAttachedObjects( );
    RestoreCrosshair( 0 );
  }
  ghid_set_cursor_position_labels( );
  return moved;
}
gboolean have_crosshair_attachments( void )
{
  gboolean result;
  switch ( Settings.Mode )
  {
    return Crosshair.AttachedBox.State + -1 <= 1;
    break;
  case 109:
    result = 0;
    return Crosshair.AttachedBox.State != 0;
    break;
  case 2:
  case 4:
    result = 0;
    return Crosshair.AttachedLine.State != 0;
    break;
  default:
    result = 0;
    return Crosshair.AttachedObject.Type != 0;
    break;
  case 1:
  case 5:
    break;
  }
  return 1;
}
void draw_crosshair( GdkGC *xor_gc, gint x, gint y )
{
  double (null);
  double (null);
  double (null);
  double (null);
  double (null);
  double (null);
  double (null);
  static enum crosshair_shape  prev;
  gdk_draw_line( &gport->drawing_area->window, xor_gc, x, 0, x, gport->height );
  gdk_draw_line( &gport->drawing_area->window, xor_gc, 0, y, gport->width, y );
  if ( prev == Union_Jack_Crosshair_Shape )
  {
    gdk_draw_line( &gport->drawing_area->window, ( gport->width < ( gport->height + x ) - y ? ( gport->height + x ) - y : gport->width ) < 0 ? gport->width < ( gport->height + x ) - y ? ( gport->height + x ) - y : &gport->width : 0, ( gport->height < gport->width + ( y - x ) ? gport->width + ( y - x ) : gport->height ) < 0 ? gport->height < gport->width + ( y - x ) ? gport->width + ( y - x ) : gport->height : 0, (unsigned char)( ( ( ( gport->width < x - y ? x - y : gport->width ) >> 31 ) & 1 ) ^ 1 ) ? 0 : gport->width < x - y ? x - y : gport->width, (unsigned char)( ( ( ( y - x <= gport->height ? gport->height : y - x ) >> 31 ) & 1 ) ^ 1 ) ? 0 : y - x <= gport->height ? gport->height : y - x, y - x );
    gdk_draw_line( &gport->drawing_area->window, ( gport->width < y + ( x - gport->height ) ? y + ( x - gport->height ) : gport->width ) < 0 ? gport->width < y + ( x - gport->height ) ? y + ( x - gport->height ) : &gport->width : 0, ( y + x <= gport->height ? gport->height : y + x ) < 0 ? y + x <= gport->height ? gport->height : y + x : 0, (unsigned char)( ( ( ( y + x <= gport->width ? gport->width : y + x ) >> 31 ) & 1 ) ^ 1 ) ? 0 : y + x <= gport->width ? gport->width : y + x, (unsigned char)( ( ( ( gport->height < y + ( x - gport->width ) ? y + ( x - gport->width ) : gport->height ) >> 31 ) & 1 ) ^ 1 ) ? 0 : gport->height < y + ( x - gport->width ) ? y + ( x - gport->width ) : gport->height, y + x <= gport->width ? gport->width : y + x );
  }
  if ( prev == Dozen_Crosshair_Shape )
  {
    gdk_draw_line( &gport->drawing_area->window, (unsigned char)( ( ( ( gport->width < (int)( ( (double)( gport->height - y ) / 1.732050807569 ) + (double)( x ) ) ? (int)( ( (double)( gport->height - y ) / 1.732050807569 ) + (double)( x ) ) : gport->width ) >> 31 ) & 1 ) ^ 1 ) ? 0 : gport->width < (int)( ( (double)( gport->height - y ) / 1.732050807569 ) + (double)( x ) ) ? (int)( ( (double)( gport->height - y ) / 1.732050807569 ) + (double)( x ) ) : &gport->width, ( gport->height < (int)( ( (double)( gport->width - x ) * 1.732050807569 ) + (double)( y ) ) ? (int)( ( (double)( gport->width - x ) * 1.732050807569 ) + (double)( y ) ) : gport->height ) < 0 ? gport->height < (int)( ( (double)( gport->width - x ) * 1.732050807569 ) + (double)( y ) ) ? (int)( ( (double)( gport->width - x ) * 1.732050807569 ) + (double)( y ) ) : gport->height : 0, ( gport->width < (int)( (double)( x ) - ( 0.000000000000 / 1.732050807569 ) ) ? (int)( (double)( x ) - ( 0.000000000000 / 1.732050807569 ) ) : gport->width ) < 0 ? gport->width < (int)( (double)( x ) - ( 0.000000000000 / 1.732050807569 ) ) ? (int)( (double)( x ) - ( 0.000000000000 / 1.732050807569 ) ) : gport->width : 0, (double)( x ) * 1.732050807569, 0.000000000000 / 1.732050807569 );
    gdk_draw_line( &gport->drawing_area->window, xor_gc, (unsigned char)( ( ( ( gport->width < (int)( 1.732050807569 * (double)( gport->height - y ) ) ? (int)( 1.732050807569 * (double)( gport->height - y ) ) : gport->width ) >> 31 ) & 1 ) ^ 1 ) ? 0 : gport->width < (int)( 1.732050807569 * (double)( gport->height - y ) ) ? (int)( 1.732050807569 * (double)( gport->height - y ) ) : gport->width, ( gport->height < (int)( (double)( y ) + ( (double)( gport->width - x ) / 1.732050807569 ) ) ? (int)( (double)( y ) + ( (double)( gport->width - x ) / 1.732050807569 ) ) : gport->height ) < 0 ? gport->height < (int)( (double)( y ) + ( (double)( gport->width - x ) / 1.732050807569 ) ) ? (int)( (double)( y ) + ( (double)( gport->width - x ) / 1.732050807569 ) ) : gport->height : 0, ( gport->width < (int)( 0.000000000000 - ( 1.732050807569 * (double)( y ) ) ) ? (int)( 0.000000000000 - ( 1.732050807569 * (double)( y ) ) ) : gport->width ) < 0 ? gport->width < (int)( 0.000000000000 - ( 1.732050807569 * (double)( y ) ) ) ? (int)( 0.000000000000 - ( 1.732050807569 * (double)( y ) ) ) : gport->width : 0, 0.000000000000 / 1.732050807569 );
    gdk_draw_line( &gport->drawing_area->window, xor_gc, (unsigned char)( ( ( ( gport->width < (int)( 0.000000000000 - ( (double)( gport->height - y ) / 1.732050807569 ) ) ? (int)( 0.000000000000 - ( (double)( gport->height - y ) / 1.732050807569 ) ) : gport->width ) >> 31 ) & 1 ) ^ 1 ) ? 0 : gport->width < (int)( 0.000000000000 - ( (double)( gport->height - y ) / 1.732050807569 ) ) ? (int)( 0.000000000000 - ( (double)( gport->height - y ) / 1.732050807569 ) ) : gport->width, ( gport->height < (int)( ( (double)( x ) * 1.732050807569 ) + (double)( y ) ) ? (int)( ( (double)( x ) * 1.732050807569 ) + (double)( y ) ) : gport->height ) < 0 ? gport->height < (int)( ( (double)( x ) * 1.732050807569 ) + (double)( y ) ) ? (int)( ( (double)( x ) * 1.732050807569 ) + (double)( y ) ) : gport->height : 0, ( gport->width < (int)( 0.000000000000 / 1.732050807569 ) ? (int)( 0.000000000000 / 1.732050807569 ) : gport->width ) < 0 ? gport->width < (int)( 0.000000000000 / 1.732050807569 ) ? (int)( 0.000000000000 / 1.732050807569 ) : gport->width : 0, (unsigned char)( ( ( ( (int)( (double)( y ) - ( 1.732050807569 * (double)( gport->width - x ) ) ) <= gport->height ? gport->height : (int)( (double)( y ) - ( 1.732050807569 * (double)( gport->width - x ) ) ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : (int)( (double)( y ) - ( 1.732050807569 * (double)( gport->width - x ) ) ) <= gport->height ? gport->height : (int)( (double)( y ) - ( 1.732050807569 * (double)( gport->width - x ) ) ) );
    gdk_draw_line( &gport->drawing_area->window, xor_gc, ( gport->width < (int)( (double)( x ) - ( 1.732050807569 * (double)( gport->height - y ) ) ) ? (int)( (double)( x ) - ( 1.732050807569 * (double)( gport->height - y ) ) ) : gport->width ) < 0 ? gport->width < (int)( (double)( x ) - ( 1.732050807569 * (double)( gport->height - y ) ) ) ? (int)( (double)( x ) - ( 1.732050807569 * (double)( gport->height - y ) ) ) : gport->width : 0, ( gport->height < (int)( ( 0.000000000000 / 1.732050807569 ) + (double)( y ) ) ? (int)( ( 0.000000000000 / 1.732050807569 ) + (double)( y ) ) : gport->height ) < 0 ? gport->height < (int)( ( 0.000000000000 / 1.732050807569 ) + (double)( y ) ) ? (int)( ( 0.000000000000 / 1.732050807569 ) + (double)( y ) ) : gport->height : 0, ( gport->width < (int)( ( 1.732050807569 * (double)( y ) ) + (double)( x ) ) ? (int)( ( 1.732050807569 * (double)( y ) ) + (double)( x ) ) : gport->width ) < 0 ? gport->width < (int)( ( 1.732050807569 * (double)( y ) ) + (double)( x ) ) ? (int)( ( 1.732050807569 * (double)( y ) ) + (double)( x ) ) : gport->width : 0, ( gport->height < (int)( (double)( y ) - ( (double)( gport->width - x ) / 1.732050807569 ) ) ? (int)( (double)( y ) - ( (double)( gport->width - x ) / 1.732050807569 ) ) : gport->height ) < 0 ? gport->height < (int)( (double)( y ) - ( (double)( gport->width - x ) / 1.732050807569 ) ) ? (int)( (double)( y ) - ( (double)( gport->width - x ) / 1.732050807569 ) ) : gport->height : 0 );
  }
  prev = Crosshair.shape;
  return;
}
void ghid_show_crosshair( gboolean show )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  static gint x_prev = -1;
  static gint y_prev = -1;
  static GdkGC *xor_gc;
  static GdkColor cross_color;
  gint x;
  gint y;
  if ( gport->x_crosshair >= 0 && ghidgui->creating == 0 && gport->has_entered )
  {
    if ( xor_gc == 0 )
    {
      xor_gc = gdk_gc_new( &ghid_port.drawing_area->window );
      gdk_gc_copy( xor_gc, &ghid_port.drawing_area->style->white_gc );
      gdk_gc_set_function( xor_gc, 2 );
      ghid_map_color_string( Settings.CrossColor, &cross_color );
    }
    x = (int)( (double)( PCB->MaxWidth - gport->x_crosshair - *(int*)(gport + 112) ) / *(double*)(gport + 104) );
    gdk_gc_set_foreground( xor_gc, &cross_color );
    if ( x_prev >= 0 )
    {
      draw_crosshair( xor_gc, edx, y_prev );
      if ( ghidgui->auto_pan_on && have_crosshair_attachments( ) )
      {
        gdk_draw_rectangle( &gport->drawing_area->window, xor_gc, 1, 0, y_prev + -8, 8, 16 );
        gdk_draw_rectangle( &gport->drawing_area->window, xor_gc, 1, gport->width + -8, y_prev + -8, 8, 16 );
        gdk_draw_rectangle( &gport->drawing_area->window, xor_gc, 1, x_prev + -8, 0, 16, 8 );
        gdk_draw_rectangle( &gport->drawing_area->window, xor_gc, 1, x_prev + -8, gport->height + -8, 16, 8 );
      }
    }
    if ( x >= 0 && show )
    {
      y = (int)( (double)( ( ghid_flip_y ? PCB->MaxHeight - *(int*)(gport + 140) : gport->y_crosshair ) - gport->view_y0 ) / gport->zoom );
      draw_crosshair( xor_gc, x, (int)( (double)( ( ghid_flip_y ? PCB->MaxHeight - *(int*)(gport + 140) : gport->y_crosshair ) - gport->view_y0 ) / gport->zoom ) );
      if ( ghidgui->auto_pan_on && have_crosshair_attachments( ) )
      {
        gdk_draw_rectangle( &gport->drawing_area->window, xor_gc, 1, 0, y + -8, 8, 16 );
        gdk_draw_rectangle( &gport->drawing_area->window, xor_gc, 1, gport->width + -8, y + -8, 8, 16 );
        gdk_draw_rectangle( &gport->drawing_area->window, xor_gc, 1, x + -8, 0, 16, 8 );
        gdk_draw_rectangle( &gport->drawing_area->window, xor_gc, 1, x + -8, gport->height + -8, 16, 8 );
      }
      x_prev = x;
      y_prev = y;
    }
    else
    {
      y_prev = -1;
      x_prev = -1;
    }
  }
  return;
}
gboolean ghid_idle_cb( gpointer data )
{
  int eax;
  int edx;
  if ( Settings.Mode == 0 )
  {
    SetMode( 110 );
  }
  ghid_mode_cursor( Settings.Mode );
  if ( ghidgui->settings_mode != Settings.Mode )
  {
    ghid_mode_buttons_update( );
  }
  ghidgui->settings_mode = Settings.Mode;
  ghid_update_toggle_flags( );
  return 0;
}
gboolean ghid_port_key_release_cb( GtkWidget *drawing_area, GdkEventKey *kev, GtkUIManager *ui )
{
  /* phantom */ gint ksym;
  if ( ghid_is_modifier_key_sym( kev->keyval ) )
    ghid_note_event_location( 0 );
  HideCrosshair( 1 );
  AdjustAttachedObjects( );
  ghid_invalidate_all( );
  RestoreCrosshair( 1 );
  ghid_screen_update( );
  g_idle_add( &ghid_idle_cb, 0 );
  return 0;
}
gboolean ghid_port_key_press_cb( GtkWidget *drawing_area, GdkEventKey *kev, GtkUIManager *ui )
{
  ModifierKeysState mk;
  gint ksym = kev->keyval;
  gboolean handled;
  GdkModifierType state;
  if ( ghid_is_modifier_key_sym( kev->keyval ) )
    ghid_note_event_location( 0 );
  state = kev->state;
  mk = ghid_modifier_keys_state( &state );
  ghid_show_crosshair( 0 );
  switch ( ksym )
  {
    if ( ksym + -65513 + -65513 <= 1 )
    {
      handled = 1;
      return 1;
    }
    handled = 0;
    break;
  case 65362:
    ghid_hotkey_cb( 2 );
    return 1;
    break;
  case 65364:
    ghid_hotkey_cb( 3 );
    return 1;
    break;
  default:
    handled = 1;
    return 1;
    break;
  case 65361:
    ghid_hotkey_cb( 4 );
    handled = 1;
    return 1;
    break;
  case 65363:
    ghid_hotkey_cb( 5 );
    return 1;
    break;
  case 64773:
  case 65056:
    break;
  case 65289:
    switch ( mk )
    {
    case NONE_PRESSED:
      ghid_hotkey_cb( 1 );
      handled = 1;
      break;
    case CONTROL_PRESSED:
      ghid_hotkey_cb( 65 );
      handled = 1;
      break;
    case MOD1_PRESSED:
      ghid_hotkey_cb( 129 );
      handled = 1;
      break;
    case SHIFT_PRESSED:
      ghid_hotkey_cb( 33 );
      handled = 1;
      break;
    case SHIFT_CONTROL_PRESSED:
      ghid_hotkey_cb( 97 );
      handled = 1;
      break;
    case SHIFT_MOD1_PRESSED:
      ghid_hotkey_cb( 161 );
      handled = 1;
      break;
    default:
      break;
    }
    return 1;
    break;
//  case 65056:
//  case 65362:
//  case 65364:
  case 65509:
    break;
  }
  return 1;
}
gboolean ghid_port_button_press_cb( GtkWidget *drawing_area, GdkEventButton *ev, GtkUIManager *ui )
{
  int esi;
  ModifierKeysState mk;
  /* phantom */ gboolean drag;
  GdkModifierType state;
  if ( ev->type == 4 )
  {
    ghid_note_event_location( ev );
    state = ev->state;
    mk = ghid_modifier_keys_state( &state );
    ghid_show_crosshair( 0 );
    HideCrosshair( 1 );
    do_mouse_action( (int)ev->button, mk );
    ghid_invalidate_all( );
    RestoreCrosshair( 1 );
    ghid_set_status_line_label( );
    ghid_show_crosshair( 1 );
    if ( gport->panning == 0 )
    {
      g_idle_add( &ghid_idle_cb, 0 );
    }
  }
  return 1;
}
gboolean ghid_port_button_release_cb( GtkWidget *drawing_area, GdkEventButton *ev, GtkUIManager *ui )
{
  ModifierKeysState mk;
  gboolean drag;
  GdkModifierType state;
  ghid_note_event_location( ev );
  state = ev->state;
  mk = ghid_modifier_keys_state( &state );
  if ( drag )
  {
    HideCrosshair( 1 );
    do_mouse_action( (int)ev->button, mk + 0x80000000 );
    AdjustAttachedObjects( );
    ghid_invalidate_all( );
    RestoreCrosshair( 1 );
    ghid_screen_update( );
  }
  else
    do_mouse_action( (int)ev->button, mk + 0x80000000 + 0x80000000 );
  ghid_set_status_line_label( );
  g_idle_add( &ghid_idle_cb, 0 );
  return 1;
}
gboolean ghid_port_drawing_area_configure_event_cb( GtkWidget *widget, GdkEventConfigure *ev, GHidPort *out )
{
  int eax;
  int edx;
  static gboolean first_time_done;
  HideCrosshair( 1 );
  gport->width = ev->width;
  gport->height = ev->height;
  if ( gport->pixmap )
  {
    g_object_unref( &gport->pixmap );
  }
  gport->drawable = gport->pixmap = gdk_pixmap_new( &widget->window, gport->width, gport->height, -1 );
  if ( first_time_done == 0 )
  {
    gport->colormap = gtk_widget_get_colormap( &gport->top_window->object.parent_instance.g_type_instance.g_class->g_type );
    gport->bg_gc = gdk_gc_new( &gport->drawable );
    if ( gdk_color_parse( Settings.BackgroundColor, &gport->bg_color ) )
      gdk_color_alloc( &gport->colormap, &gport->bg_color );
    else
      gdk_color_white( &gport->colormap, &gport->bg_color );
    gdk_gc_set_foreground( &gport->bg_gc, &gport->bg_color );
    gport->offlimits_gc = gdk_gc_new( &gport->drawable );
    if ( gdk_color_parse( Settings.OffLimitColor, &gport->offlimits_color ) )
      gdk_color_alloc( &gport->colormap, &gport->offlimits_color );
    else
      gdk_color_white( &gport->colormap, &gport->offlimits_color );
    gdk_gc_set_foreground( &gport->offlimits_gc, &gport->offlimits_color );
    first_time_done = 1;
    PCBChanged( 0, 0, 0, 0 );
  }
  if ( gport->mask )
  {
    g_object_unref( &gport->mask );
    gport->mask = gdk_pixmap_new( 0, gport->width, gport->height, 1 );
  }
  ghid_port_ranges_scale( 0 );
  ghid_invalidate_all( );
  RestoreCrosshair( 1 );
  return 0;
}
void ghid_screen_update( void )
{
  ghid_show_crosshair( 0 );
  gdk_draw_drawable( &gport->drawing_area->window, &gport->bg_gc, &gport->pixmap, 0, 0, 0, 0, gport->width, gport->height );
  ghid_show_crosshair( 1 );
  return;
}
gboolean ghid_port_drawing_area_expose_event_cb( GtkWidget *widget, GdkEventExpose *ev, GHidPort *port )
{
  ghid_show_crosshair( 0 );
  gdk_draw_drawable( &widget->window, &port->bg_gc, &port->pixmap, ev->area.x, ev->area.y, ev->area.x, ev->area.y, ev->area.width, ev->area.height );
  ghid_show_crosshair( 1 );
  return 0;
}
gint ghid_port_window_motion_cb( GtkWidget *widget, GdkEventButton *ev, GHidPort *out )
{
  int edx;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  static gint x_prev = -1;
  static gint y_prev = -1;
  /* phantom */ gdouble dx;
  /* phantom */ gdouble dy;
  gboolean moved;
  if ( out->panning )
  {
    if ( gtk_events_pending( ) == 0 )
    {
      if ( x_prev > 0 )
      {
        ghid_port_ranges_pan( gport->zoom * ( (double)( x_prev ) - ev->x ), gport->zoom * ( (double)( y_prev ) - ev->y ), 1 );
      }
      else
      {
      }
      x_prev = (int)( 0.000000000000 );
      y_prev = (int)( 0.000000000000 );
    }
  }
  else
  {
    y_prev = -1;
    x_prev = -1;
    moved = ghid_note_event_location( ev );
    ghid_show_crosshair( 1 );
    if ( moved && have_crosshair_attachments( ) )
    {
      ghid_draw_area_update( gport, 0 );
    }
  }
  return 0;
}
gint ghid_port_window_enter_cb( GtkWidget *widget, GdkEventCrossing *ev, GHidPort *out )
{
  int ecx;
  if ( ev->mode == 0 || ev->detail == GDK_NOTIFY_NONLINEAR )
  {
    if ( ghidgui->command_entry_status_line_active == 0 )
    {
      out->has_entered = 1;
      gtk_widget_grab_focus( out->drawing_area );
      ghidgui->in_popup = 0;
      if ( ev->mode == GDK_CROSSING_UNGRAB )
        goto B7;
      else
      {
        if ( cursor_in_viewport == 0 )
        {
          RestoreCrosshair( 1 );
          cursor_in_viewport = 1;
          return 0;
        }
      }
    }
    else
    {
      ghidgui->in_popup = 0;
      if ( ev->mode == 2 )
        goto B7;
    }
B7:;
    if ( ev->detail == GDK_NOTIFY_NONLINEAR )
      ghid_screen_update( );
  }
  return 0;
}
gboolean ghid_pan_idle_cb( gpointer data )
{
  /* phantom */ gdouble dx;
  /* phantom */ gdouble dy;
  if ( gport->has_entered == 0 )
  {
    return ghid_port_ranges_pan( gport->zoom * (double)( x_pan_speed ), (double)( y_pan_speed ) * gport->zoom, 1 );
  }
  return 0;
}
gint ghid_port_window_leave_cb( GtkWidget *widget, GdkEventCrossing *ev, GHidPort *out )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  gint x0;
  gint y0;
  gint x;
  gint y;
  gint dx;
  gint dy;
  gint w;
  gint h;
  if ( ev->mode == 0 )
  {
    if ( out->has_entered && ghidgui->in_popup == 0 && have_crosshair_attachments( ) && ghidgui->auto_pan_on )
    {
      w = (int)( gport->zoom * (double)( ghid_port.width ) );
      h = (int)( gport->zoom * (double)( ghid_port.height ) );
      ghid_get_coords( 0, &x, &x0 );
      dx = x - x0;
      x -= x0;
      dy = y - y0;
      y -= y0;
      if ( ghid_flip_x )
      {
        dx = 0 - dx;
        x = 0 - dx;
      }
      if ( ghid_flip_y )
      {
        dy = 0 - dy;
        y = 0 - dy;
      }
      dx = w - dx;
      y_pan_speed = ghidgui->auto_pan_speed * 2;
      x_pan_speed = ghidgui->auto_pan_speed * 2;
      if ( w - dx <= dx )
        dx = dx;
      else
        x_pan_speed = 0 - ( ghidgui->auto_pan_speed * 2 );
      if ( h - dy <= dy )
        dy = h - dy;
      else
        y_pan_speed = 0 - ( ghidgui->auto_pan_speed * 2 );
      if ( dx < dy )
      {
        if ( dy < h / 3 )
          y_pan_speed += ( dy * ( 0 - ( y_pan_speed * 3 ) ) ) / h;
        else
          y_pan_speed = 0;
      }
      else
      if ( dx < w / 3 )
        x_pan_speed += ( dx * ( 0 - ( x_pan_speed * 3 ) ) ) / w;
      else
        x_pan_speed = 0;
      g_idle_add( &ghid_pan_idle_cb, 0 );
    }
    if ( cursor_in_viewport )
    {
      HideCrosshair( 1 );
      cursor_in_viewport = 0;
    }
    ghid_show_crosshair( 0 );
    out->has_entered = 0;
    ghid_screen_update( );
  }
  return 0;
}
gint ghid_port_window_mouse_scroll_cb( GtkWidget *widget, GdkEventScroll *ev, GHidPort *out )
{
  int edx;
  ModifierKeysState mk;
  GdkModifierType state = ev->state;
  int button;
  ghid_modifier_keys_state( &state );
  button = -1;
  do_mouse_action( button, ghid_modifier_keys_state( &state ) );
  return 1;
}
#if 0
#endif
