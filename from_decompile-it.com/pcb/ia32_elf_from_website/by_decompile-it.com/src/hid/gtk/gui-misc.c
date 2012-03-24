#include "gui-misc.c.h"
GdkPixmap *XC_clock_source;
GdkPixmap *XC_clock_mask;
GdkPixmap *XC_hand_source;
GdkPixmap *XC_hand_mask;
GdkPixmap *XC_lock_source;
GdkPixmap *XC_lock_mask;
static GdkCursorType oldCursor;
static gboolean got_location;
void ghid_status_line_set_text( gchar *text )
{
  if ( ghidgui->command_entry_status_line_active == 0 )
  {
    ghid_label_set_markup( &ghidgui->status_line_label, text );
    return;
  }
  return;
}
void ghid_cursor_position_label_set_text( gchar *text )
{
  ghid_label_set_markup( &ghidgui->cursor_position_absolute_label, text );
  return;
}
void ghid_cursor_position_relative_label_set_text( gchar *text )
{
  ghid_label_set_markup( &ghidgui->cursor_position_relative_label, text );
  return;
}
void ghid_size_increment_get_value( gchar *saction, gchar **value, gchar **units )
{
  static gchar s_buf[64];
  gdouble increment;
  /* phantom */ gchar *fmt;
  __snprintf_chk( s_buf, 64, 1, 64, saction[0] == '+' ? "-%f" : "+%f", Settings.grid_units_mm != 0 ? (Settings.size_increment_mil & 0xFFFFFFFF) : (Settings.size_increment_mm & 0xFFFFFFFF), Settings.grid_units_mm != 0 ? (Settings.size_increment_mil << 32) : (Settings.size_increment_mm << 32), ebp_4, ebp_4 );
  value[0] = s_buf;
  units[0] = Settings.grid_units_mm != 0 ? "mil" : "mm";
  return;
}
void ghid_line_increment_get_value( gchar *saction, gchar **value, gchar **units )
{
  static gchar s_buf[64];
  gdouble increment;
  /* phantom */ gchar *fmt;
  __snprintf_chk( s_buf, 64, 1, 64, saction[0] == '+' ? "-%f" : "+%f", Settings.grid_units_mm != 0 ? (Settings.line_increment_mil & 0xFFFFFFFF) : (Settings.line_increment_mm & 0xFFFFFFFF), Settings.grid_units_mm != 0 ? (Settings.line_increment_mil << 32) : (Settings.line_increment_mm << 32), ebp_4, ebp_4 );
  value[0] = s_buf;
  units[0] = Settings.grid_units_mm != 0 ? "mil" : "mm";
  return;
}
void ghid_clear_increment_get_value( gchar *saction, gchar **value, gchar **units )
{
  static gchar s_buf[64];
  gdouble increment;
  /* phantom */ gchar *fmt;
  __snprintf_chk( s_buf, 64, 1, 64, saction[0] == '+' ? "-%f" : "+%f", Settings.grid_units_mm != 0 ? (Settings.clear_increment_mil & 0xFFFFFFFF) : (Settings.clear_increment_mm & 0xFFFFFFFF), Settings.grid_units_mm != 0 ? (Settings.clear_increment_mil << 32) : (Settings.clear_increment_mm << 32), ebp_4, ebp_4 );
  value[0] = s_buf;
  units[0] = Settings.grid_units_mm != 0 ? "mil" : "mm";
  return;
}
GdkCursorType gport_set_cursor( GdkCursorType shape )
{
  int eax;
  GdkCursorType old_shape = gport->X_cursor_shape;
  GdkColor fg;
  GdkColor bg;
  if ( gport->drawing_area == 0 || gport->drawing_area->window == 0 )
  {
    return 0;
  }
  if ( shape != old_shape )
  {
    fg.pixel = 0;
    fg.red = 65535;
    fg.green = 65535;
    fg.blue = 65535;
    bg.pixel = 0;
    bg.red = 0;
    bg.green = 0;
    bg.blue = 0;
    gport->X_cursor_shape = shape;
    if ( shape > 153 )
    {
      if ( shape == 163 )
      {
        gport->X_cursor = gdk_cursor_new_from_pixmap( XC_clock_source, XC_clock_mask, &fg, &bg, 8, 8 );
      }
      else
      if ( shape == 164 )
      {
        gport->X_cursor = gdk_cursor_new_from_pixmap( XC_hand_source, XC_hand_mask, &fg, &bg, 8, 8 );
      }
      else
      if ( shape == 165 )
      {
        gport->X_cursor = gdk_cursor_new_from_pixmap( XC_lock_source, XC_lock_mask, &fg, &bg, 8, 8 );
      }
    }
    else
    {
      gport->X_cursor = gdk_cursor_new( shape );
    }
    gdk_window_set_cursor( &gport->drawing_area->window, &gport->X_cursor );
    gdk_cursor_unref( &gport->X_cursor );
    shape = old_shape;
  }
  return old_shape;
}
void ghid_point_cursor( void )
{
  oldCursor = gport_set_cursor( 48 );
  return;
}
void ghid_hand_cursor( void )
{
  oldCursor = gport_set_cursor( 60 );
  return;
}
void ghid_watch_cursor( void )
{
  GdkCursorType tmp = GDK_WATCH;
  if ( tmp != GDK_WATCH )
  {
    oldCursor = tmp;
  }
  return;
}
void ghid_mode_cursor( int Mode )
{
  switch ( Mode )
  {
  case 102:
    ebp_0 = ghid_mode_cursor+8d;
    if ( ghid_shift_is_pressed( ) )
    {
    }
    break;
  case 111:
    break;
  case 110:
    break;
  case 109:
    break;
  case 108:
    break;
  case 106:
    break;
  case 104:
  case 105:
    break;
  case 103:
    break;
  case 6:
    break;
  case 5:
    break;
  case 4:
    break;
  case 3:
    break;
  case 2:
    break;
  case 1:
    break;
  case 0:
    break;
  default:
    return;
    break;
  }
}
void ghid_corner_cursor( void )
{
  GdkCursorType shape;
  if ( Crosshair.Y <= Crosshair.AttachedBox.Point1.Y )
  {
    shape = ( ( ( Crosshair.X < Crosshair.AttachedBox.Point1.X ) ^ 1 ) << 2 ) + 144;
    if ( gport->X_cursor_shape != ( ( ( Crosshair.X < Crosshair.AttachedBox.Point1.X ) ^ 1 ) << 2 ) + 144 )
    {
    }
  }
  else
  {
    shape = ( ( ( Crosshair.X < Crosshair.AttachedBox.Point1.X ) ^ 1 ) * 2 ) + 76;
    if ( gport->X_cursor_shape != ( ( ( Crosshair.X < Crosshair.AttachedBox.Point1.X ) ^ 1 ) * 2 ) + 76 )
    {
    }
  }
  return;
}
void ghid_restore_cursor( void )
{
  int eax;
}
gboolean loop_key_press_cb( GtkWidget *drawing_area, GdkEventKey *kev, GMainLoop *loop )
{
  int edi;
  ModifierKeysState mk;
  GdkModifierType state;
  gint ksym = kev->keyval;
  if ( ghid_is_modifier_key_sym( kev->keyval ) == 0 )
  {
    state = kev->state;
    ghid_modifier_keys_state( &state );
    switch ( ksym )
    {
    case 65362:
      if ( mk == CONTROL_PRESSED )
      {
      }
      else
      if ( mk == SHIFT_PRESSED )
      {
        hid_actionl( "MovePointer", "0", "-10", "-10", (long long)( "-10" ), (long long)0 );
      }
      else
      if ( mk == NONE_PRESSED )
      {
        hid_actionl( "MovePointer", "0", (long long)( "-1" ) );
      }
      break;
    case 65364:
      if ( mk == CONTROL_PRESSED )
      {
      }
      else
      if ( mk == SHIFT_PRESSED )
      {
        hid_actionl( "MovePointer", "0", (long long)( "10" ) );
      }
      else
      if ( mk == NONE_PRESSED )
      {
        hid_actionl( "MovePointer", "0", (long long)( "1" ) );
      }
      break;
    case 65361:
      if ( mk == CONTROL_PRESSED )
      {
      }
      else
      if ( mk == SHIFT_PRESSED )
      {
        hid_actionl( "MovePointer", "-10", (long long)( "0" ) );
      }
      else
      if ( mk == NONE_PRESSED )
      {
        hid_actionl( "MovePointer", "-1", (long long)( "0" ) );
      }
      break;
    case 65363:
      if ( mk == CONTROL_PRESSED )
      {
      }
      else
      if ( mk == SHIFT_PRESSED )
      {
        hid_actionl( "MovePointer", "10", (long long)( "0" ) );
      }
      else
      if ( mk == NONE_PRESSED )
      {
        hid_actionl( "MovePointer", "1", (long long)( "0" ) );
      }
      break;
    default:
      got_location = 0;
      if ( g_main_loop_is_running( &loop ) )
      {
        g_main_loop_quit( &loop );
      }
      break;
    case 65293:
      break;
    }
    hid_actionl( "Display", "Scroll", ebp_48, ebp_44 );
    hid_actionl( "Display", "Scroll", (long long)( "0" ) );
  }
  return 1;
}
gboolean loop_button_press_cb( GtkWidget *drawing_area, GdkEventButton *ev, GMainLoop **loop )
{
  if ( g_main_loop_is_running( loop[0] ) )
    g_main_loop_quit( loop[0] );
  ghid_note_event_location( ev );
  return 1;
}
void ghid_get_user_xy( char *msg )
{
  ghid_status_line_set_text( msg );
  HideCrosshair( 1 );
  Crosshair.AttachedObject.State = 0;
  Crosshair.AttachedLine.State = 0;
  Crosshair.AttachedBox.State = 0;
  ghid_hand_cursor( );
  RestoreCrosshair( 1 );
  ghid_interface_input_signals_disconnect( );
  ghid_interface_set_sensitive( 0 );
  got_location = 1;
  g_main_loop_run( g_main_loop_new( 0, 0 ) );
  g_main_loop_unref( g_main_loop_new( 0, 0 ) );
  g_signal_handler_disconnect( &gport->drawing_area, g_signal_connect_data( g_type_check_instance_cast( &gport->drawing_area->object.parent_instance.g_type_instance, 80 ), "button_press_event", &loop_button_press_cb, ebp_28, 0, 0 ) );
  g_signal_handler_disconnect( &gport->top_window->object.parent_instance.g_type_instance.g_class->g_type, g_signal_connect_data( g_type_check_instance_cast( &gport->top_window->object.parent_instance.g_type_instance.g_class->g_type, 80 ), "key_press_event", &loop_key_press_cb, ebp_28, 0, 0 ) );
  ghid_interface_input_signals_connect( );
  ghid_interface_set_sensitive( 1 );
  HideCrosshair( 1 );
  Crosshair.AttachedObject.State = Crosshair.AttachedObject.State;
  Crosshair.AttachedLine.State = Crosshair.AttachedLine.State;
  Crosshair.AttachedBox.State = Crosshair.AttachedBox.State;
  RestoreCrosshair( 1 );
  ghid_restore_cursor( );
  ghid_set_status_line_label( );
  return;
}
void ghid_create_abort_dialog( char *msg )
{
  return;
}
gboolean ghid_check_abort( void )
{
  return 0;
}
void ghid_end_abort( void )
{
  return;
}
void ghid_get_pointer( int *x, int *y )
{
  int ebx;
  int esi;
  gint xp;
  gint yp;
  gdk_window_get_pointer( &gport->drawing_area->window, &xp, 0, &ebx );
  if ( x )
    x[0] = xp;
  if ( y )
  {
    y[0] = yp;
  }
  return;
}
void ghid_set_status_line_label( void )
{
  int eax;
  int ecx;
  int dh;
  double fp6;
  gchar text[512];
  if ( Settings.grid_units_mm == 0 )
  {
    if ( ( ( dh & 1 ) & 255 ) || *(int*)dcgettext( "pcb", "solder", 5 )/*.108*/ == 0 )
      goto B5;
    else
    {
    }
B5:;
    dcgettext( "pcb", "&lt;b&gt;%c  view&lt;/b&gt;=%s  &lt;b&gt;grid&lt;/b&gt;=%.1f:%i  %s%s  &lt;b&gt;line&lt;/b&gt;=%.1f  &lt;b&gt;via&lt;/b&gt;=%.1f(%.1f)  %s&lt;b&gt;clearance&lt;/b&gt;=%.1f  &lt;b&gt;text&lt;/b&gt;=%i%%  &lt;b&gt;buffer&lt;/b&gt;=#%i", 5 );
  }
  else
  {
    if ( ( ( dh & 1 ) & 255 ) || *(int*)dcgettext( "pcb", "solder", 5 )/*.108*/ == 0 )
      goto B10;
    else
    {
    }
B10:;
    dcgettext( "pcb", "&lt;b&gt;%c  view&lt;/b&gt;=%s  &lt;b&gt;grid&lt;/b&gt;=%5.3f:%i  %s%s  &lt;b&gt;line&lt;/b&gt;=%5.3f  &lt;b&gt;via&lt;/b&gt;=%5.3f(%5.3f)  %s&lt;b&gt;clearance&lt;/b&gt;=%5.3f  &lt;b&gt;text&lt;/b&gt;=%i%%  &lt;b&gt;buffer&lt;/b&gt;=#%i", 5 );
  }
  __snprintf_chk( text, 512, 1, 512, dcgettext( "pcb", "&lt;b&gt;%c  view&lt;/b&gt;=%s  &lt;b&gt;grid&lt;/b&gt;=%5.3f:%i  %s%s  &lt;b&gt;line&lt;/b&gt;=%5.3f  &lt;b&gt;via&lt;/b&gt;=%5.3f(%5.3f)  %s&lt;b&gt;clearance&lt;/b&gt;=%5.3f  &lt;b&gt;text&lt;/b&gt;=%i%%  &lt;b&gt;buffer&lt;/b&gt;=#%i", 5 ), ( ( 0 - ( ( PCB->Changed < ( 1 & 255 ) ) & 1 ) ) & -10 ) + 42, dcgettext( "pcb", "&lt;b&gt;%c  view&lt;/b&gt;=%s  &lt;b&gt;grid&lt;/b&gt;=%.1f:%i  %s%s  &lt;b&gt;line&lt;/b&gt;=%.1f  &lt;b&gt;via&lt;/b&gt;=%.1f(%.1f)  %s&lt;b&gt;clearance&lt;/b&gt;=%.1f  &lt;b&gt;text&lt;/b&gt;=%i%%  &lt;b&gt;buffer&lt;/b&gt;=#%i", 5 ), 0.000000000000, ebp_660, ebp_656, ebp_652, ebp_648, ebp_640, ebp_632, ebp_624, ebp_620, ebp_612, ebp_608 );
  ghid_status_line_set_text( text );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void ghid_set_cursor_position_labels( void )
{
  int eax;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gchar text[128];
  if ( Marked.status )
  {
    double scale, dx, dy, r, a;
    *(double*)(atan2( ( Settings.grid_units_mm != 0 ? 0.010000000000 : 0.000254000000 ) * (double)( Marked.Y - Crosshair.Y ), (double)( Crosshair.X - Marked.X ) * ( Settings.grid_units_mm != 0 ? 0.010000000000 : 0.000254000000 ) )) = ( atan2( ( Settings.grid_units_mm != 0 ? 0.010000000000 : 0.000254000000 ) * (double)( Marked.Y - Crosshair.Y ), (double)( Crosshair.X - Marked.X ) * ( Settings.grid_units_mm != 0 ? 0.010000000000 : 0.000254000000 ) ) * 180.000000000000 ) / 3.141592653590;
    dy = ( Settings.grid_units_mm != 0 ? 0.010000000000 : 0.000254000000 ) * (double)( Marked.Y - Crosshair.Y );
    dx = sqrt( ( ( (double)( Crosshair.X - Marked.X ) * ( Settings.grid_units_mm != 0 ? 0.010000000000 : 0.000254000000 ) ) * ( (double)( Crosshair.X - Marked.X ) * ( Settings.grid_units_mm != 0 ? 0.010000000000 : 0.000254000000 ) ) ) + ( ( ( Settings.grid_units_mm != 0 ? 0.010000000000 : 0.000254000000 ) * (double)( Marked.Y - Crosshair.Y ) ) * ( ( Settings.grid_units_mm != 0 ? 0.010000000000 : 0.000254000000 ) * (double)( Marked.Y - Crosshair.Y ) ) ) );
    __snprintf_chk( text, 128, 1, 128, ebp_248, ebp_248, ebp_244, ebp_244, ebp_236, ebp_236, ebp_228, ebp_228, ebp_220, ebp_220 );
    ghid_cursor_position_relative_label_set_text( text );
  }
  else
    ghid_cursor_position_relative_label_set_text( "r __.__; phi __._; __.__ __.__" );
  __snprintf_chk( text, 128, 1, 128, ebp_248, ebp_248, ebp_244, ebp_244, ebp_236, ebp_236 );
  ghid_cursor_position_label_set_text( text );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
#if 0
#endif
