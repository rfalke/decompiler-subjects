#include "gtkhid-main.c.h"
static int cur_mask = -1;
static int mask_seq;
int ghid_flip_x;
int ghid_flip_y;
static char zoom_syntax[20] = { 'Z', 'o', 'o', 'm', '(', ')', '\n', 'Z', 'o', 'o', 'm', '(', 'f', 'a', 'c', 't', 'o', 'r', ')' };
static char zoom_help[29] = { 'V', 'a', 'r', 'i', 'o', 'u', 's', ' ', 'z', 'o', 'o', 'm', ' ', 'f', 'a', 'c', 't', 'o', 'r', ' ', 'c', 'h', 'a', 'n', 'g', 'e', 's', '.' };
static int ghid_gui_is_up;
static GSourceFuncs ghid_block_hook_funcs = { &ghid_block_hook_prepare, &ghid_block_hook_check, &ghid_block_hook_dispatch, 0, 0, 0 }
;
HID_DRC_GUI ghid_drc_gui = { 1, 0, &ghid_drc_window_reset_message, &ghid_drc_window_append_violation, &ghid_drc_window_throw_dialog }
;
HID ghid_hid = { 208, "gtk", "Gtk - The Gimp Toolkit", 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
;
HID ghid_extents = { 208, "ghid_extents", "used to calculate extents", 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
;
static char about_syntax[8] = { 'A', 'b', 'o', 'u', 't', '(', ')' };
static char about_help[41] = { 'T', 'e', 'l', 'l', ' ', 't', 'h', 'e', ' ', 'u', 's', 'e', 'r', ' ', 'a', 'b', 'o', 'u', 't', ' ', 't', 'h', 'i', 's', ' ', 'v', 'e', 'r', 's', 'i', 'o', 'n', ' ', 'o', 'f', ' ', 'P', 'C', 'B', '.' };
static char getxy_syntax[8] = { 'G', 'e', 't', 'X', 'Y', '(', ')' };
static char getxy_help[18] = { 'G', 'e', 't', ' ', 'a', ' ', 'c', 'o', 'o', 'r', 'd', 'i', 'n', 'a', 't', 'e', '.' };
static char save_syntax[101] = { 'S', 'a', 'v', 'e', '(', ')', '\n', 'S', 'a', 'v', 'e', '(', 'L', 'a', 'y', 'o', 'u', 't', '|', 'L', 'a', 'y', 'o', 'u', 't', 'A', 's', ')', '\n', 'S', 'a', 'v', 'e', '(', 'A', 'l', 'l', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 's', '|', 'A', 'l', 'l', 'U', 'n', 'u', 's', 'e', 'd', 'P', 'i', 'n', 's', '|', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 's', ')', '\n', 'S', 'a', 'v', 'e', '(', 'P', 'a', 's', 't', 'e', 'B', 'u', 'f', 'f', 'e', 'r', ')' };
static char save_help[57] = { 'S', 'a', 'v', 'e', ' ', 'l', 'a', 'y', 'o', 'u', 't', ' ', 'a', 'n', 'd', '/', 'o', 'r', ' ', 'e', 'l', 'e', 'm', 'e', 'n', 't', ' ', 'd', 'a', 't', 'a', ' ', 't', 'o', ' ', 'a', ' ', 'u', 's', 'e', 'r', '-', 's', 'e', 'l', 'e', 'c', 't', 'e', 'd', ' ', 'f', 'i', 'l', 'e', '.' };
static char swapsides_syntax[18] = { 'S', 'w', 'a', 'p', 'S', 'i', 'd', 'e', 's', '(', '|', 'v', '|', 'h', '|', 'r', ')' };
static char swapsides_help[47] = { 'S', 'w', 'a', 'p', 's', ' ', 't', 'h', 'e', ' ', 's', 'i', 'd', 'e', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 'b', 'o', 'a', 'r', 'd', ' ', 'y', 'o', 'u', '\'', 'r', 'e', ' ', 'l', 'o', 'o', 'k', 'i', 'n', 'g', ' ', 'a', 't', '.' };
static char print_syntax[8] = { 'P', 'r', 'i', 'n', 't', '(', ')' };
static char print_help[18] = { 'P', 'r', 'i', 'n', 't', ' ', 't', 'h', 'e', ' ', 'l', 'a', 'y', 'o', 'u', 't', '.' };
static HID_Attribute printer_calibrate_attrs[3] = { { "Enter Values here:", "", 0, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "x-calibration", "X scale for calibrating your printer", 2, 0, 25, { 0, 0, 1.000000000000 }
, 0, 0, 0 }
, { "y-calibration", "Y scale for calibrating your printer", 2, 0, 25, { 0, 0, 1.000000000000 }
, 0, 0, 0 }
 };
static HID_Attr_Val printer_calibrate_values[3];
static char printcalibrate_syntax[17] = { 'P', 'r', 'i', 'n', 't', 'C', 'a', 'l', 'i', 'b', 'r', 'a', 't', 'e', '(', ')' };
static char printcalibrate_help[23] = { 'C', 'a', 'l', 'i', 'b', 'r', 'a', 't', 'e', ' ', 't', 'h', 'e', ' ', 'p', 'r', 'i', 'n', 't', 'e', 'r', '.' };
static char center_syntax[10] = { 'C', 'e', 'n', 't', 'e', 'r', '(', ')', '\n' };
static char center_help[47] = { 'M', 'o', 'v', 'e', 's', ' ', 't', 'h', 'e', ' ', 'p', 'o', 'i', 'n', 't', 'e', 'r', ' ', 't', 'o', ' ', 't', 'h', 'e', ' ', 'c', 'e', 'n', 't', 'e', 'r', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 'w', 'i', 'n', 'd', 'o', 'w', '.' };
static char cursor_syntax[38] = { 'C', 'u', 'r', 's', 'o', 'r', '(', 'T', 'y', 'p', 'e', ',', 'D', 'e', 'l', 't', 'a', 'U', 'p', ',', 'D', 'e', 'l', 't', 'a', 'R', 'i', 'g', 'h', 't', ',', 'U', 'n', 'i', 't', 's', ')' };
static char cursor_help[17] = { 'M', 'o', 'v', 'e', ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r', 's', 'o', 'r', '.' };
static char dowindows_syntax[77] = { 'D', 'o', 'W', 'i', 'n', 'd', 'o', 'w', 's', '(', '1', '|', '2', '|', '3', '|', '4', '|', '5', '|', '6', ')', '\n', 'D', 'o', 'W', 'i', 'n', 'd', 'o', 'w', 's', '(', 'L', 'a', 'y', 'o', 'u', 't', '|', 'L', 'i', 'b', 'r', 'a', 'r', 'y', '|', 'L', 'o', 'g', '|', 'N', 'e', 't', 'l', 'i', 's', 't', '|', 'P', 'r', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'e', 's', '|', 'D', 'R', 'C', ')' };
static char dowindows_help[26] = { 'O', 'p', 'e', 'n', ' ', 'v', 'a', 'r', 'i', 'o', 'u', 's', ' ', 'G', 'U', 'I', ' ', 'w', 'i', 'n', 'd', 'o', 'w', 's', '.' };
static char setunits_syntax[17] = { 'S', 'e', 't', 'U', 'n', 'i', 't', 's', '(', 'm', 'm', '|', 'm', 'i', 'l', ')' };
static char setunits_help[35] = { 'S', 'e', 't', ' ', 't', 'h', 'e', ' ', 'd', 'e', 'f', 'a', 'u', 'l', 't', ' ', 'm', 'e', 'a', 's', 'u', 'r', 'e', 'm', 'e', 'n', 't', ' ', 'u', 'n', 'i', 't', 's', '.' };
static char scroll_syntax[34] = { 'S', 'c', 'r', 'o', 'l', 'l', '(', 'u', 'p', '|', 'd', 'o', 'w', 'n', '|', 'l', 'e', 'f', 't', '|', 'r', 'i', 'g', 'h', 't', ',', ' ', '[', 'd', 'i', 'v', ']', ')' };
static char scroll_help[21] = { 'S', 'c', 'r', 'o', 'l', 'l', ' ', 't', 'h', 'e', ' ', 'v', 'i', 'e', 'w', 'p', 'o', 'r', 't', '.' };
static char pan_syntax[19] = { 'P', 'a', 'n', '(', '[', 't', 'h', 'u', 'm', 'b', ']', ',', ' ', 'M', 'o', 'd', 'e', ')' };
static char pan_help[109] = { 'S', 't', 'a', 'r', 't', ' ', 'o', 'r', ' ', 's', 't', 'o', 'p', ' ', 'p', 'a', 'n', 'n', 'i', 'n', 'g', ' ', '(', 'M', 'o', 'd', 'e', ' ', '=', ' ', '1', ' ', 't', 'o', ' ', 's', 't', 'a', 'r', 't', ',', ' ', '0', ' ', 't', 'o', ' ', 's', 't', 'o', 'p', ')', '\n', 'O', 'p', 't', 'i', 'o', 'n', 'a', 'l', ' ', 't', 'h', 'u', 'm', 'b', ' ', 'a', 'r', 'g', 'u', 'm', 'e', 'n', 't', ' ', 'i', 's', ' ', 'i', 'g', 'n', 'o', 'r', 'e', 'd', ' ', 'f', 'o', 'r', ' ', 'n', 'o', 'w', ' ', 'i', 'n', ' ', 'g', 't', 'k', ' ', 'h', 'i', 'd', '.', '\n' };
static char popup_syntax[26] = { 'P', 'o', 'p', 'u', 'p', '(', 'M', 'e', 'n', 'u', 'N', 'a', 'm', 'e', ',', ' ', '[', 'B', 'u', 't', 't', 'o', 'n', ']', ')' };
static char popup_help[161] = { 'B', 'r', 'i', 'n', 'g', ' ', 'u', 'p', ' ', 't', 'h', 'e', ' ', 'p', 'o', 'p', 'u', 'p', ' ', 'm', 'e', 'n', 'u', ' ', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 'd', ' ', 'b', 'y', ' ', '@', 'c', 'o', 'd', 'e', '{', 'M', 'e', 'n', 'u', 'N', 'a', 'm', 'e', '}', '.', '\n', 'I', 'f', ' ', 'c', 'a', 'l', 'l', 'e', 'd', ' ', 'b', 'y', ' ', 'a', ' ', 'm', 'o', 'u', 's', 'e', ' ', 'e', 'v', 'e', 'n', 't', ' ', 't', 'h', 'e', 'n', ' ', 't', 'h', 'e', ' ', 'm', 'o', 'u', 's', 'e', ' ', 'b', 'u', 't', 't', 'o', 'n', ' ', 'n', 'u', 'm', 'b', 'e', 'r', '\n', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 'd', ' ', 'a', 's', ' ', 't', 'h', 'e', ' ', 'o', 'p', 't', 'i', 'o', 'n', 'a', 'l', ' ', 's', 'e', 'c', 'o', 'n', 'd', ' ', 'a', 'r', 'g', 'u', 'm', 'e', 'n', 't', '.' };
HID_Action ghid_main_action_list[24] = { { "About", 0, &About, &about_help, &about_syntax }
, { "Benchmark", 0, &Benchmark, 0, 0 }
, { "Busy", 0, &Busy, 0, 0 }
, { "Center", "Click on a location to center", &Center, &center_help, &center_syntax }
, { "Command", 0, &Command, 0, 0 }
, { "Cursor", 0, &CursorAction, &cursor_help, &cursor_syntax }
, { "DoWindows", 0, &DoWindows, &dowindows_help, &dowindows_syntax }
, { "Export", 0, &Export, 0, 0 }
, { "GetXY", "", &GetXY, &getxy_help, &getxy_syntax }
, { "LayerGroupsChanged", 0, &LayerGroupsChanged, 0, 0 }
, { "LibraryChanged", 0, &LibraryChanged, 0, 0 }
, { "Load", 0, &Load, 0, 0 }
, { "Pan", "Click on a place to pan", &PanAction, &pan_help, &pan_syntax }
, { "PCBChanged", 0, &PCBChanged, 0, 0 }
, { "PointCursor", 0, &PointCursor, 0, 0 }
, { "Popup", 0, &Popup, &popup_help, &popup_syntax }
, { "Print", 0, &Print, &print_help, &print_syntax }
, { "PrintCalibrate", 0, &PrintCalibrate, &printcalibrate_help, &printcalibrate_syntax }
, { "RouteStylesChanged", 0, &RouteStylesChanged, 0, 0 }
, { "Save", 0, &Save, &save_help, &save_syntax }
, { "Scroll", "Click on a place to scroll", &ScrollAction, &scroll_help, &scroll_syntax }
, { "SetUnits", 0, &SetUnits, &setunits_help, &setunits_syntax }
, { "SwapSides", 0, &SwapSides, &swapsides_help, &swapsides_syntax }
, { "Zoom", "Click on zoom focus", &Zoom, &zoom_help, &zoom_syntax }
 };
HID_Flag ghid_main_flag_list[2] = { { "flip_x", &flag_flipx, 0 }
, { "flip_y", &flag_flipy, 0 }
 };
void ghid_pan_fixup( void )
{
  if ( PCB->MaxWidth - gport->view_width < gport->view_x0 )
    gport->view_x0 = PCB->MaxWidth - gport->view_width;
  if ( PCB->MaxHeight - gport->view_height < gport->view_y0 )
    gport->view_y0 = PCB->MaxHeight - gport->view_height;
  if ( gport->view_x0 >= 0 )
  {
    if ( gport->view_y0 < 0 )
      goto B7;
    else
    {
      if ( gport->view_width <= PCB->MaxWidth || gport->view_height <= PCB->MaxHeight )
      {
        gtk_range_set_value( g_type_check_instance_cast( &ghidgui->h_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ), (double)( gport->view_x0 ) );
        gtk_range_set_value( g_type_check_instance_cast( &ghidgui->v_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ), (double)( gport->view_y0 ) );
      }
      zoom_to( 0, gport->zoom );
      return;
    }
  }
  else
  {
    gport->view_x0 = 0;
    if ( gport->view_y0 < 0 )
      goto B7;
  }
B7:;
  gport->view_y0 = 0;
}
int Zoom( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  double fp7;
  /* phantom */ double factor;
  char *vp;
  double v;
  if ( argc > 1 )
  {
    Message( "Syntax error.  Usage:\n%s\n", zoom_syntax[0] );
  }
  if ( argc != 1 )
  {
    zoom_to( 0, 1000000.000000000000, ebp_32 );
  }
  vp = argv[0];
  if ( strtod( vp, 0 ) < 0.000000000000 )
  {
    if ( argv[0] != '-' )
    {
      if ( argv[0] == '=' )
      {
        zoom_to( x, gport->zoom * strtod( vp, 0 ) );
      }
      *(double*)(strtod( vp, 0 )) *= gport->zoom;
    }
    else
      *(double*)(strtod( vp, 0 )) = gport->zoom * ( 1.000000000000 / strtod( vp, 0 ) );
  }
  else
  {
  }
  return 1;
}
void zoom_to( double new_zoom, int x, int y )
{
  int ecx;
  double fp7;
  double max_zoom, xfrac, yfrac;
  /* phantom */ int cx, cy;
  if ( gport->zoom == ( 1.000000000000 <= new_zoom ? 1.000000000000 : new_zoom < (double)( *(int*)(PCB + 148) / *(int*)(gport + 24) ) <= (double)( *(int*)(PCB + 144) / *(int*)(gport + 20) ) ? (double)( *(int*)(PCB + 148) / *(int*)(gport + 24) ) : (double)( *(int*)(PCB + 144) / *(int*)(gport + 20) ) ? 1.000000000000 <= new_zoom ? 1.000000000000 : new_zoom : (double)( *(int*)(PCB + 148) / *(int*)(gport + 24) ) <= (double)( *(int*)(PCB + 144) / *(int*)(gport + 20) ) ? (double)( *(int*)(PCB + 148) / *(int*)(gport + 24) ) : (double)( *(int*)(PCB + 144) / *(int*)(gport + 20) ) ) )
  {
  }
{
  gdouble xtmp;
  gdouble ytmp;
  gint x0;
  gint y0;
  gport->zoom = 0.000000000000;
  pixel_slop = (int)( 0.000000000000 );
  ghid_port_ranges_scale( 0 );
  x0 = (int)( (double)( gport->view_x ) - ( ( (double)( *(int*)(gport + 128) - *(int*)(gport + 112) ) / (double)( gport->view_width ) ) * (double)( gport->view_width ) ) ) < 0 ? (int)( (double)( gport->view_x ) - ( ( (double)( *(int*)(gport + 128) - *(int*)(gport + 112) ) / (double)( gport->view_width ) ) * (double)( gport->view_width ) ) ) : 0;
  gport->view_x0 = (int)( (double)( gport->view_x ) - ( ( (double)( *(int*)(gport + 128) - *(int*)(gport + 112) ) / (double)( gport->view_width ) ) * (double)( gport->view_width ) ) ) < 0 ? (int)( (double)( gport->view_x ) - ( ( (double)( *(int*)(gport + 128) - *(int*)(gport + 112) ) / (double)( gport->view_width ) ) * (double)( gport->view_width ) ) ) : 0;
  y0 = (int)( (double)( gport->view_y ) - ( ( (double)( *(int*)(gport + 132) - *(int*)(gport + 116) ) / (double)( gport->view_height ) ) * (double)( gport->view_height ) ) );
  gport->view_y0 = (unsigned char)( ( ( (int)( (double)( gport->view_y ) - ( ( (double)( *(int*)(gport + 132) - *(int*)(gport + 116) ) / (double)( gport->view_height ) ) * (double)( gport->view_height ) ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : (int)( (double)( gport->view_y ) - ( ( (double)( *(int*)(gport + 132) - *(int*)(gport + 116) ) / (double)( gport->view_height ) ) * (double)( gport->view_height ) ) );
  ghidgui->adjustment_changed_holdoff = 1;
  gtk_range_set_value( g_type_check_instance_cast( &ghidgui->h_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ), (double)( x0 ) );
  gtk_range_set_value( g_type_check_instance_cast( &ghidgui->v_range->object.parent_instance.g_type_instance, gtk_range_get_type( ) ), (double)( gport->view_y0 ) );
  ghidgui->adjustment_changed_holdoff = 0;
  ghid_port_ranges_changed( );
}
}
HID_Attribute *ghid_get_export_options( int *n_ret )
{
  return 0;
}
void ghid_invalidate_wh( int x, int y, int width, int height, int last )
{
}
void ghid_invalidate_lr( int left, int right, int top, int bottom, int last )
{
}
void ghid_invalidate_all( void )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  int ebp_60;
  int eleft, eright, etop, ebottom;
  BoxType region;
  if ( gport->pixmap == 0 )
  {
    return;
  }
  if ( ghid_flip_x == 0 )
  {
    ebp_60 = gport->width;
    if ( (int)( ( *(double*)(gport + 104) * 0.0 ) + (double)( *(int*)(gport + 112) ) ) < (int)( gport->zoom * 0.0 * (double)( *(int*)(gport + 20) + 1 ) ) )
    {
      if ( ghid_flip_x )
      {
      }
      if ( ( ghid_flip_y == 0 ? esi : (int)( 0.000000000000 ) ) < ( ghid_flip_y ? (int)( 0.000000000000 ) : (int)( (double)( gport->view_x0 ) ) ) )
      {
        if ( ghid_flip_y == 0 )
          goto B14;
        else
        {
        }
      }
      else
      if ( ghid_flip_y )
      {
        if ( ghid_flip_x )
        {
          ebp_60++;
          ebp_60 = (int)( (double)( *(int*)(PCB + 144) ) - (double)( *(int*)(PCB + 144) ) );
          if ( (int)( (double)( *(int*)(PCB + 144) ) - (double)( *(int*)(PCB + 144) ) ) <= ebp_60 )
          {
            if ( ghid_flip_x )
            {
              if ( ghid_flip_y == 0 )
              {
                ebp_60 = gport->height + 1;
                ebp_60 = (int)( ( 0.000000000000 * (double)( ebp_60 ) ) + ( (double)( PCB->MaxWidth ) * (double)( ebp_60 ) ) );
                if ( (int)( (double)( PCB->MaxWidth ) + (double)( *(int*)(gport + 116) ) ) <= ebp_60 )
                {
                  if ( ghid_flip_y )
                  {
                    region.Y2 = (int)( (double)( *(int*)(PCB + 148) ) - ( fp2 * (double)( ebp_60 ) ) );
                    region.X1 = (int)( (double)( PCB->MaxWidth ) );
                    region.Y1 = (int)( (double)( *(int*)(PCB + 148) ) - (double)( PCB->MaxWidth ) );
                    region.X2 = (int)( (double)( *(int*)(PCB + 144) ) - ( fp0 + ( fp2 * (double)( ebp_60 ) ) ) );
                    eright = (int)( 0.500000000000 + ( (double)( ghid_flip_x ? 0 - gport->view_x0 : PCB->MaxWidth - gport->view_x0 ) / 0.000000000000 ) );
                    ebottom = (int)( fp3 + ( (double)( edx ) / fp4 ) );
                    if ( eleft > 0 )
                    {
                      gdk_draw_rectangle( &gport->drawable, &gport->offlimits_gc, 1, 0, 0, eleft, gport->height );
                      ebp_60 = gport->width;
                      if ( gport->width <= eright )
                        eright = gport->width;
                        if ( etop <= 0 )
                        {
                          etop = 0;
                          ebp_60 = 1;
                          if ( gport->height <= ebottom )
                            ebottom = gport->height;
                            gdk_draw_rectangle( &gport->drawable, &gport->bg_gc, 1, eleft, etop, ( eright - eleft ) + 1, ebp_60 + ebottom );
                            if ( ghidgui->bg_pixbuf )
                            {
                              if ( w_scaled == (int)( (double)( PCB->MaxWidth ) / gport->zoom ) && h_scaled == (int)( (double)( PCB->MaxHeight ) / gport->zoom ) )
                              {
                              }
                              else
                              {
                                if ( pixbuf )
                                {
                                  g_object_unref( g_type_check_instance_cast( &pixbuf, 80 ) );
                                }
                                if ( (int)( (double)( PCB->MaxHeight ) / gport->zoom ) <= gdk_pixbuf_get_height( &ghidgui->bg_pixbuf ) || (int)( (double)( PCB->MaxWidth ) / gport->zoom ) <= gdk_pixbuf_get_width( &ghidgui->bg_pixbuf ) )
                                {
                                }
                                w_scaled = (int)( (double)( PCB->MaxWidth ) / gport->zoom );
                                h_scaled = (int)( (double)( PCB->MaxHeight ) / gport->zoom );
                                pixbuf = gdk_pixbuf_scale_simple( &ghidgui->bg_pixbuf, (int)( (double)( PCB->MaxWidth ) / gport->zoom ), (int)( (double)( PCB->MaxHeight ) / gport->zoom ), 0 );
                              }
                              if ( pixbuf )
                                gdk_pixbuf_render_to_drawable( &pixbuf, &gport->drawable, &gport->bg_gc, (int)( (double)( gport->view_x0 ) / 0.000000000000 ), (int)( (double)( gport->view_y0 ) / 0.000000000000 ), 0, 0, w_scaled - (int)( (double)( gport->view_x0 ) / 0.000000000000 ), h_scaled - (int)( (double)( gport->view_y0 ) / 0.000000000000 ), "12 # (unsigned short)( ( ( fpround & 3 ) << 10 ) | 895 )", (int)( (double)( gport->view_y0 ) / 0.000000000000 ), (int)( (double)( gport->view_y0 ) / 0.000000000000 ) );
                              else
                              {
                              }
                            }
                            hid_expose_callback( &ghid_hid, &region, 0 );
                            if ( Settings.DrawGrid )
                            {
                              if ( (int)( ( 0.000000000000 / gport->zoom ) + 0.500000000000 ) > 3 )
                              {
                                if ( gport->grid_gc == 0 )
                                {
                                  if ( gdk_color_parse( Settings.GridColor, gport + 72 ) )
                                  {
                                    gport->grid_color.red ^= gport->bg_color.red;
                                    gport->grid_color.green ^= gport->bg_color.green;
                                    gport->grid_color.blue ^= gport->bg_color.blue;
                                    gdk_color_alloc( &gport->colormap, &gport->grid_color );
                                  }
                                  gport->grid_gc = gdk_gc_new( &gport->drawable );
                                  gdk_gc_set_function( &gport->grid_gc, 2 );
                                  gdk_gc_set_foreground( &gport->grid_gc, &gport->grid_color );
                                }
                                ebp_60 = (int)( ( fp6 * (double)( (int)( fp7 / fp1 ) ) ) + 0.500000000000 + (double)( *(int*)(edx + 140) ) );
                                if ( (int)( ( (double)( PCB->MaxWidth - (int)( 0.500000000000 + 0.500000000000 ) - gport->view_x0 ) / 0.500000000000 ) + 0.500000000000 ) < 0 )
                                {
                                }
                                if ( (int)( ( (double)( ( ghid_flip_y ? PCB->MaxHeight - ebp_60 : ebp_60 ) - gport->view_y0 ) / 0.000000000000 ) + 0.500000000000 ) < 0 )
                                  ebp_60 = (int)( (double)( ebp_60 ) );
                                if ( npoints < (int)( ( (double)( ebx - esi ) / fp5 ) + 0.500000000000 ) + 1 )
                                {
                                  npoints = &eax->parent_instance.qdata;
                                  points = &eax[0].parent_instance.g_type_instance.g_class[0].g_type;
                                }
                                if ( (double)( esi ) < (double)( ebx ) )
                                {
                                }
                                else
                                {
                                  while ( 1 )
                                  {
                                    if ( ghid_flip_x )
                                    {
                                      points->x = (int)( ( (double)( *(int*)(PCB + 144) - (int)( 0.000000000000 ) - *(int*)(gport + 112) ) / *(double*)(gport + 104) ) + 0.500000000000 );
                                      if ( 0.000000000000 < 0.000000000000 )
                                      {
                                      }
                                      else
                                      {
                                      }
                                    }
                                    else
                                    {
                                      points->x = (int)( (double)( 0 + 1 ) + ( (double)( (int)( 0.000000000000 ) - *(int*)(gport + 112) ) / *(double*)(gport + 104) ) );
                                      if ( 0.000000000000 <= 0.000000000000 )
                                      {
                                      }
                                      else
                                        break;
                                    }
                                  }
                                }
                                if ( (double)( (int)( (double)( ebp_60 ) ) ) <= (double)( ebp_60 ) )
                                {
                                  do
                                  {
                                    if ( 0 + 1 )
                                    {
                                      do
                                      {
                                        points->y = ghid_flip_y ? PCB->MaxHeight - points - gport->view_y0 : points - gport->view_y0;
                                      }
                                      while ( 0 + 1 != 0 + 1 + 1 );
                                    }
                                    else
                                    {
                                    }
                                    gdk_draw_points( &gport->drawable, &gport->grid_gc, points, 0 + 1 );
                                  }
                                  while ( (double)( (int)( (double)( ebp_60 ) ) ) <= 0.000000000000 + PCB->Grid );
                                }
                                else
                                {
                                }
                              }
                              else
                              {
                              }
                            }
                            if ( ghidgui->need_restore_crosshair )
                            {
                              RestoreCrosshair( 0 );
                            }
                            ghidgui->need_restore_crosshair = 0;
                            ghid_screen_update( );
                        }
                        else
                        {
                          gdk_draw_rectangle( &ghidgui->displayed_name_actions->parent.g_type_instance._GTypeInstance, &ghidgui->cursor_position_absolute_label->object.parent_instance.g_type_instance._GTypeInstance, 1, eleft, 0, eright + 1, eright + 1 );
                          ebp_60 = 1;
                          ebp_60 -= etop;
                          if ( gport->height <= ebottom )
                            ebottom = gport->height;
                            gdk_draw_rectangle( &gport->drawable, &gport->bg_gc, 1, eleft, etop, ( eright - eleft ) + 1, ebp_60 + ebottom );
                        }
                        gdk_draw_rectangle( &ghidgui->displayed_name_actions->parent.g_type_instance._GTypeInstance, &ghidgui->cursor_position_absolute_label->object.parent_instance.g_type_instance._GTypeInstance, 1, eleft, ebottom, gport->height - ebottom, gport->height + eright );
                        gdk_draw_rectangle( &gport->drawable, &gport->bg_gc, 1, eleft, etop, ( eright - eleft ) + 1, ebp_60 + ebottom );
                    }
                    else
                    {
                      eleft = 0;
                      ebp_60 = gport->width;
                      if ( gport->width <= eright )
                        eright = gport->width;
                    }
                    gdk_draw_rectangle( &gport->drawable, &gport->offlimits_gc, 1, eright, 0, ebp_60 - eright, gport->height );
                  }
                  else
                  {
                  }
                }
                else
                {
                  if ( ghid_flip_y )
                  {
                  }
                  else
                  {
                  }
                }
              }
              else
              {
                ebp_60 = gport->height + 1;
                ebp_60 = (int)( (double)( *(int*)(PCB + 148) ) - ( (double)( ebp_60 ) * (double)( *(int*)(PCB + 148) ) ) );
                if ( (int)( (double)( PCB->MaxHeight ) ) <= ebp_60 )
                {
                }
                else
                {
                }
              }
            }
            else
            {
              if ( ghid_flip_y )
              {
                ebp_60 = gport->height + 1;
                ebp_60 = (int)( (double)( *(int*)(PCB + 148) ) - ( (double)( ebp_60 ) * (double)( *(int*)(PCB + 148) ) ) );
              }
              else
              {
                ebp_60 = gport->height + 1;
                ebp_60 = (int)( ( 0.000000000000 * (double)( ebp_60 ) ) + ( (double)( PCB->MaxWidth ) * (double)( ebp_60 ) ) );
              }
            }
          }
          else
          {
            if ( ghid_flip_x )
            {
            }
            else
            {
            }
          }
        }
        else
        {
          ebp_60++;
          ebp_60 = (int)( (double)( PCB->MaxWidth ) + ( 0.000000000000 * (double)( ebp_60 ) ) );
          if ( (int)( ( *(double*)(gport + 104) * 0.0 ) + (double)( *(int*)(gport + 112) ) ) <= ebp_60 )
          {
          }
          else
          {
          }
        }
      }
      else
      {
      }
B14:;
      if ( ghid_flip_x )
      {
        ebp_60++;
        ebp_60 = (int)( (double)( *(int*)(PCB + 144) ) - (double)( *(int*)(PCB + 144) ) );
      }
      else
      {
        ebp_60++;
        ebp_60 = (int)( (double)( PCB->MaxWidth ) + ( 0.000000000000 * (double)( ebp_60 ) ) );
      }
    }
  }
  else
  {
    ebp_60 = ghidgui->name_label;
    if ( (int)( (double)( PCB->MaxWidth ) ) < (int)( (double)( PCB->MaxWidth ) ) )
    {
    }
  }
  if ( ghid_flip_x )
  {
  }
  else
  {
  }
  return;
}
int ghid_set_layer( char *name, int group, int empty )
{
  int eax;
  int edx;
  int idx;
  if ( group >= 0 )
  {
    idx = group;
    if ( group < PCB->Data->LayerN )
    {
      idx = PCB->Font.Symbol[255].Delta;
      if ( PCB->Font.Symbol[255].Delta >= 0 )
      {
        if ( PCB->Data->LayerN + 1 < idx )
        {
          return PCB->InvisibleObjectsOn;
        }
      }
    }
    else
    if ( PCB->Data->LayerN + 1 < idx )
    {
      return PCB->InvisibleObjectsOn;
    }
    return PCB->Data->Layer->On;
  }
  else
    idx = group;
  switch ( idx & 240 )
  {
  default:
    if ( ( idx & 240 ) == 32 && (unsigned char)( ( ( idx >> 1 ) ^ 1 ) & 1 ) != (unsigned char)( Settings.ShowSolderSide != 0 ) )
    {
      return ( PCB->Flags.f >> 13 ) & 1;
    }
    break;
  case 48:
  case 64:
    break;
  case 96:
    return PCB->InvisibleObjectsOn;
    break;
  case 16:
    if ( (unsigned char)( ( ( idx >> 1 ) ^ 1 ) & 1 ) != (unsigned char)( Settings.ShowSolderSide != 0 ) )
    {
      return PCB->ElementOn;
    }
    break;
    break;
  }
}
int Vx( int x )
{
  double fp6;
  return ghid_flip_x ? PCB->MaxWidth - x - gport->view_x0 : x - gport->view_x0 - gport->view_x0;
}
int Vy( int y )
{
  double fp6;
  return ghid_flip_y ? PCB->MaxHeight - y - gport->view_y0 : y - gport->view_y0 - gport->view_y0;
}
void ghid_use_mask( int use_it )
{
  int eax;
  int edx;
  static int mask_seq_id;
  static GdkDrawable *old;
  GdkColor color;
  if ( use_it == 6 )
  {
    gdk_flush( );
    return;
  }
  else
  {
    if ( use_it == 4 )
    {
      old = &gport->drawable;
      gport->drawable = gport->drawing_area->window;
      return;
    }
    if ( use_it == 5 )
    {
      gport->drawable = old;
      return;
    }
    if ( gport->pixmap == 0 || use_it == cur_mask )
    {
      return;
    }
    switch ( use_it )
    {
    case 1:
      __printf_chk( 1, "gtk doesn't support mask_before!\n" );
      abort( );
      break;
    case 0:
      gport->drawable = gport->pixmap;
      mask_seq = 0;
      cur_mask = use_it;
      return;
      break;
    case 2:
      if ( gport->mask == 0 )
      {
        gport->mask = gdk_pixmap_new( 0, gport->width, gport->height, 1 );
      }
      gport->drawable = gport->mask;
      mask_seq = 0;
      if ( gport->mask_gc == 0 )
      {
        gport->mask_gc = gdk_gc_new( gport + 16 );
      }
      color.pixel = 1;
      gdk_gc_set_foreground( &gport->mask_gc, &color );
      gdk_draw_rectangle( &gport->drawable, &gport->mask_gc, 1, 0, 0, gport->width, gport->height );
      color.pixel = 0;
      gdk_gc_set_foreground( &gport->mask_gc, &color );
      cur_mask = use_it;
      return;
      break;
    case 3:
      mask_seq_id++;
      if ( mask_seq_id + 1 == 0 )
        mask_seq_id = 1;
      mask_seq = 1;
      gport->drawable = gport->pixmap;
      cur_mask = use_it;
      return;
      break;
    default:
      cur_mask = use_it;
      return;
      break;
    }
  }
}
void ghid_extents_use_mask( int use_it )
{
  return;
}
void set_special_grid_color( void )
{
  if ( gport->colormap )
  {
    gport->grid_color.red ^= gport->bg_color.red;
    gport->grid_color.green ^= gport->bg_color.green;
    gport->grid_color.blue ^= gport->bg_color.blue;
    gdk_color_alloc( &gport->colormap, gport + 72 );
    if ( gport->grid_gc )
    {
      gdk_gc_set_foreground( &gport->grid_gc, gport + 72 );
    }
  }
  return;
}
void ghid_set_special_colors( HID_Attribute *ha )
{
  int ebx;
  int esi;
  int edi;
  if ( ha->name[0] == 0 || ha->value[10] == 0 )
  {
    return;
  }
{
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
  strcmp( "background-color", &ha->name[0] );
  if ( gport->bg_gc )
  {
    ghid_map_color_string( &ha->name[0], gport + 48 );
    gdk_gc_set_foreground( &gport->bg_gc, &gport->bg_color );
  }
  else
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    strcmp( "off-limit-color", &ha->name[0] );
    if ( gport->offlimits_gc )
    {
      ghid_map_color_string( &ha->name[0], gport + 60 );
      gdk_gc_set_foreground( &gport->offlimits_gc, &gport->offlimits_color );
      return;
    }
    else
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      strcmp( "grid-color", &ha->name[0] );
      if ( !1 || gport->grid_gc == 0 )
      {
        return;
      }
      ghid_map_color_string( &ha->name[0], gport + 72 );
    }
  }
}
}
void ghid_set_color( hidGC gc, char *name )
{
  int edx;
  static void *cache;
  hidval cval;
  if ( name == 0 )
  {
    __fprintf_chk( stderr, 1, "%s():  name = NULL, setting to magenta\n", __FUNCTION__ );
    name[0] = "magenta";
  }
  gc->colorname = name;
  if ( gc->gc )
  {
    if ( gport->colormap == 0 )
    {
      gport->colormap = gtk_widget_get_colormap( &gport->top_window->object.parent_instance.g_type_instance.g_class->g_type );
    }
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    strcmp( "erase", &name[0] );
    if ( 1 )
    {
      gdk_gc_set_foreground( &gc->gc, &gport->bg_color );
      gc->erase = 1;
      return;
    }
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    strcmp( "drill", name );
    if ( 1 )
    {
      gdk_gc_set_foreground( &gc->gc, &gport->offlimits_color );
      gc->erase = 0;
      return;
    }
  {
    ColorCache *cc;
    if ( hid_cache_color( 0, &name[0], &cval, &cache ) )
      cc = &cval.lval;
    else
    {
      cc = calloc( 1, sizeof( ColorCache ) );
      mymemset( calloc( 1, 32 ), 0, 32 );
      cval.lval = cc;
      hid_cache_color( 1, name, &cval, &cache );
    }
    if ( cc == 0 )
    {
      if ( gdk_color_parse( &name[0], &cc->color.pixel ) )
        gdk_color_alloc( &gport->colormap, &cc->color.pixel );
      else
        gdk_color_white( &gport->colormap, &cc->color.pixel );
      cc = 1;
    }
    if ( gc->xor )
    {
      if ( cc->xor_set == 0 )
      {
        cc->xor_color.red = gport->bg_color.red ^ cc->color.red;
        cc->xor_color.green = gport->bg_color.green ^ cc->color.green;
        cc->xor_color.blue = gport->bg_color.blue ^ cc->color.blue;
        gdk_color_alloc( &gport->colormap, &cc->xor_color.pixel );
        cc->xor_set = 1;
      }
      gdk_gc_set_foreground( &gc->gc, &cc->xor_color.pixel );
    }
    else
      gdk_gc_set_foreground( &gc->gc, &cc->color.pixel + 4 );
    gc->erase = 0;
  }
  }
  }
  }
  return;
}
void ghid_set_line_cap( hidGC gc, EndCapStyle style )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  switch ( style )
  {
  case Round_Cap:
    gc->cap = 2;
    gc->join = 1;
    if ( gc->gc )
    {
      gc->width = gc->width;
      if ( cur_mask == 2 )
      {
      }
      gdk_gc_set_line_attributes( &gc[1].gc, (int)( ( (double)( gc->width ) / gport->zoom ) + 0.500000000000 ), 0, &gc->cap, &gc->join );
    }
    break;
  case Square_Cap:
  case Beveled_Cap:
    gc->cap = 3;
    gc->join = 0;
    break;
  default:
    break;
  }
  return;
}
void ghid_set_line_width( hidGC gc, int width )
{
  int edx;
  double fp7;
  gc->width = width;
  if ( gc->gc )
  {
    if ( cur_mask == 2 )
    {
    }
    gdk_gc_set_line_attributes( &gc[1].gc, (int)( ( (double)( width ) / gport->zoom ) + 0.500000000000 ), 0, &gc->cap, &gc->join );
  }
  return;
}
void ghid_set_draw_xor( hidGC gc, int xor )
{
  gc->xor = xor;
  if ( gc->gc )
  {
    gdk_gc_set_function( &gc->gc, ~( 0 - ( ( xor < 1 ) & 1 ) ) & 2 );
    xor = gc->colorname;
  }
  return;
}
void ghid_set_draw_faded( hidGC gc, int faded )
{
  __printf_chk( 1, "ghid_set_draw_faded(%p,%d) -- not implemented\n", gc, faded );
  return;
}
void ghid_set_line_cap_angle( hidGC gc, int x1, int y1, int x2, int y2 )
{
  x1 = "ghid_set_line_cap_angle() -- not implemented\n";
  gc = 1;
}
int use_gc( hidGC gc )
{
  int edx;
  if ( gport->pixmap )
  {
    if ( gc->gc == 0 )
    {
      gc->gc = gdk_gc_new( &gport->bg_color.red );
      ghid_set_color( gc, &gc->colorname );
      ghid_set_line_width( gc, gc->width );
      ghid_set_line_cap( gc, gc->cap );
      ghid_set_draw_xor( gc, gc->xor );
    }
    if ( gc->mask_seq != mask_seq )
    {
      if ( mask_seq )
        gdk_gc_set_clip_mask( &gc->gc, &gport->mask );
      else
        gdk_gc_set_clip_mask( &gc->gc, 0 );
      gc->mask_seq = mask_seq;
    }
    gport->u_gc = cur_mask == 2 ? gport->mask_gc : gc->gc;
  }
  return 1;
}
void ghid_draw_line( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
  int ecx;
  int edx;
  double dx1, dy1, dx2, dy2 = (double)( ghid_flip_y ? PCB->MaxHeight - (int)( (double)( y2 ) ) - gport->view_y0 : (int)( (double)( y2 ) ) - gport->view_y0 );
  dx2 = (double)( ghid_flip_y ? PCB->MaxHeight - ghid_flip_x - gport->view_y0 : ghid_flip_x - gport->view_y0 );
  dy1 = (double)( (int)( ( (double)( ( ghid_flip_y ? PCB->MaxHeight - (int)( (double)( y1 ) ) : (int)( (double)( y1 ) ) ) - gport->view_y0 ) / 0.000000000000 ) + 0.500000000000 ) );
  dx1 = (double)( ghid_flip_x ? (int)( ( (double)( PCB->MaxWidth - ghid_flip_y - gport->view_x0 ) / gport->zoom ) + 0.500000000000 ) : (int)( ( (double)( ghid_flip_y - gport->view_x0 ) / gport->zoom ) + 0.500000000000 ) );
  if ( ( ClipLine( 0.000000000000, 0.000000000000, 0.000000000000, (double)( gport->height ), &dx1, &dy1, &dx2, &dy2, (double)( gc->width ) / 0.000000000000 ) & 255 ) && use_gc( gc ) )
  {
    gdk_draw_line( &gport->drawable, &gport->u_gc, (int)( dx1 ), (int)( dy1 ), (int)( dx2 ), (int)( dy2 ) );
    return;
  }
  return;
}
Missing divisor:  0xb60b60b7(8)
void ghid_draw_arc( hidGC gc, int cx, int cy, int xradius, int yradius, int start_angle, int delta_angle )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  double fp7;
  gint vrx;
  gint vry;
  /* phantom */ gint w;
  /* phantom */ gint h;
  gint radius = (unsigned char)( ( yradius < xradius ) ^ 1 ) ? xradius : yradius;
  if ( gport->view_x0 - radius <= cx )
  {
    if ( ghid_flip_x )
      cx = PCB->MaxWidth - cx;
    if ( radius + gport->view_x0 + (int)( 0.000000000000 ) < cx )
    {
    }
    else
    {
      if ( ghid_flip_y )
        cy = PCB->MaxHeight - cy;
      if ( gport->view_y0 - radius <= cy )
      {
        if ( ghid_flip_y )
          cy = PCB->MaxHeight - cy;
        if ( radius + gport->view_y0 + (int)( 0.000000000000 ) < cy || use_gc( gc ) == 0 )
        {
          return;
        }
        vrx = (int)( ( (double)( xradius ) / gport->zoom ) + 0.500000000000 );
        vry = (int)( ( (double)( yradius ) / gport->zoom ) + 0.500000000000 );
        if ( ghid_flip_x )
        {
          delta_angle = 0 - delta_angle;
          start_angle = 180 - start_angle;
        }
        if ( ghid_flip_y )
        {
          start_angle = 0 - start_angle;
          delta_angle = 0 - delta_angle;
        }
Missing divisor:  0xb60b60b7(8)
        gdk_draw_arc( &gport->drawable, &gport->u_gc, 0, Vx( cx ) - vrx, Vy( cy ) - vry, vrx * 2, vry * 2, ( ( start_angle + 540 ) - ( ( ( start_angle + 540 ) / 0 ) * 360 ) ) << 6, delta_angle << 6 );
      }
      else
      {
      }
    }
  }
  else
  {
  }
  return;
}
void ghid_draw_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
  int edx;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ gint w;
  /* phantom */ gint h;
  gint lw = gc->width;
  if ( x1 < gport->view_x0 - lw )
  {
    if ( ghid_flip_x )
    {
      x2 = PCB->MaxWidth - x2;
      if ( PCB->MaxWidth - x2 < gport->view_x0 - lw )
      {
        return;
      }
    }
    else
    if ( gport->view_x0 - lw <= x2 )
    {
    }
    else
    {
      return;
    }
  }
  if ( ghid_flip_x )
  {
  }
  if ( x1 <= lw + gport->view_x0 + (int)( 0.000000000000 ) || x2 <= lw + gport->view_x0 + (int)( 0.000000000000 ) )
  {
    if ( ghid_flip_y )
    {
      if ( PCB->MaxHeight - y1 < gport->view_y0 - lw )
        goto B19;
      else
      {
        if ( ghid_flip_y )
          y1 = PCB->MaxHeight - y1;
        if ( (int)( 0.000000000000 ) + gport->view_y0 + lw + gport->view_y0 < y1 )
        {
          if ( ghid_flip_y )
            y2 = PCB->MaxHeight - y2;
          if ( gport->view_y0 + lw + gport->view_y0 + (int)( 0.000000000000 ) < y2 )
          {
            return;
          }
        }
        y1 = (int)( ( (double)( ( ghid_flip_y ? PCB->MaxHeight - y1 : y1 ) - gport->view_y0 ) / 0.000000000000 ) + 0.500000000000 );
        x2 = ghid_flip_x ? PCB->MaxWidth - x2 - gport->view_y0 : x2 - gport->view_y0;
        y2 = ghid_flip_y ? PCB->MaxHeight - y2 - gport->view_y0 : y2 - gport->view_y0;
        if ( use_gc( gc ) )
        {
          x2 = gport->u_gc;
          gdk_draw_rectangle( &gport->drawable, &gport->u_gc, 0, x2, y1, 1, ( y2 + 1 ) - y1 );
          return;
        }
        return;
      }
    }
    else
    if ( y1 < gport->view_y0 - lw )
      goto B19;
B19:;
    if ( ghid_flip_y )
    {
      y2 = PCB->MaxHeight - y2;
      if ( gport->view_y0 - lw <= PCB->MaxHeight - y2 )
        continue;
      else
      {
        return;
      }
    }
    else
    {
      if ( gport->view_y0 - lw <= y2 )
      {
      }
      else
      {
        return;
      }
    }
  }
  else
  {
    return;
  }
}
void ghid_fill_circle( hidGC gc, int cx, int cy, int radius )
{
  int eax;
  int edx;
  int esi;
  int edi;
  double fp6;
  double fp7;
  /* phantom */ gint w;
  /* phantom */ gint h;
  gint vr;
  if ( gport->view_x0 - radius <= cx )
  {
    if ( ghid_flip_x )
      cx = PCB->MaxWidth - cx;
    if ( radius + gport->view_x0 + (int)( 0.000000000000 ) < cx )
    {
    }
    else
    {
      if ( ghid_flip_y )
        cy = PCB->MaxHeight - cy;
      if ( gport->view_y0 - radius <= cy )
      {
        if ( ghid_flip_y )
          cy = PCB->MaxHeight - cy;
        if ( radius + gport->view_y0 + (int)( 0.000000000000 ) < cy || use_gc( gc ) == 0 )
        {
          return;
        }
        vr = (int)( ( (double)( radius ) / gport->zoom ) + 0.500000000000 );
        gdk_draw_arc( &gport->drawable, &gport->u_gc, 1, Vx( cx ) - vr, Vy( cy ) - vr, (int)( ( (double)( radius ) / gport->zoom ) + 0.500000000000 ) * 2, (int)( ( (double)( radius ) / gport->zoom ) + 0.500000000000 ) * 2, 0, 23040 );
      }
      else
      {
      }
    }
  }
  else
  {
  }
  return;
}
void ghid_fill_polygon( hidGC gc, int n_coords, int *x, int *y )
{
  int eax;
  int ecx;
  double fp5;
  double fp7;
  static GdkPoint *points;
  static int npoints;
  int i;
  if ( use_gc( gc ) )
  {
    if ( n_coords <= npoints )
    {
    }
    else
    {
      npoints = n_coords + 1;
      points = (GdkPoint*)MyRealloc( (void*)points, ( n_coords + 1 ) << 3, __FUNCTION__ );
    }
    if ( n_coords > 0 )
    {
      i = 0;
      do
      {
        if ( ghid_flip_x )
        {
          points->x = (int)( ( (double)( *(int*)(PCB + 144) - x[ i ] - *(int*)(gport + 112) ) / *(double*)(gport + 104) ) + 0.500000000000 );
          points->y = ghid_flip_y == 0 ? y[ i ] - *(int*)(gport + 116) : *(int*)(ebp_40 + 148) - y[ i ] - *(int*)(gport + 116);
          i++;
        }
        else
        {
          points->x = (int)( (double)( x[ i ] - *(int*)(gport + 112) ) / *(double*)(gport + 104) );
          points->y = ghid_flip_y == 0 ? y[ i ] - *(int*)(gport + 116) : *(int*)(ebp_40 + 148) - y[ i ] - *(int*)(gport + 116);
          i++;
        }
      }
      while ( n_coords != i + 1 );
    }
    else
    {
    }
    gdk_draw_polygon( &gport->drawable, &gport->u_gc, 1, points, n_coords );
  }
  return;
}
void ghid_fill_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
  int edx;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ gint w;
  /* phantom */ gint h;
  gint lw = gc->width;
  /* phantom */ gint xx;
  /* phantom */ gint yy;
  if ( x1 < gport->view_x0 - lw )
  {
    if ( ghid_flip_x )
    {
      x2 = PCB->MaxWidth - x2;
      if ( PCB->MaxWidth - x2 < gport->view_x0 - lw )
      {
        return;
      }
    }
    else
    if ( gport->view_x0 - lw <= x2 )
    {
    }
    else
    {
      return;
    }
  }
  if ( ghid_flip_x )
  {
  }
  if ( x1 <= lw + gport->view_x0 + (int)( 0.000000000000 ) || x2 <= lw + gport->view_x0 + (int)( 0.000000000000 ) )
  {
    if ( ghid_flip_y )
    {
      if ( PCB->MaxHeight - y1 < gport->view_y0 - lw )
        goto B19;
      else
      {
        if ( ghid_flip_y )
          y1 = PCB->MaxHeight - y1;
        if ( (int)( 0.000000000000 ) + gport->view_y0 + lw + gport->view_y0 < y1 )
        {
          if ( ghid_flip_y )
            y2 = PCB->MaxHeight - y2;
          if ( gport->view_y0 + lw + gport->view_y0 + (int)( 0.000000000000 ) < y2 )
          {
            return;
          }
        }
        y1 = (int)( ( (double)( ( ghid_flip_y ? PCB->MaxHeight - y1 : y1 ) - gport->view_y0 ) / 0.000000000000 ) + 0.500000000000 );
        x2 = ghid_flip_x ? PCB->MaxWidth - x2 - gport->view_y0 : x2 - gport->view_y0;
        y2 = ghid_flip_y ? PCB->MaxHeight - y2 - gport->view_y0 : y2 - gport->view_y0;
        if ( use_gc( gc ) )
        {
          x2 = gport->u_gc;
          gdk_draw_rectangle( &gport->drawable, &gport->u_gc, 1, x2, y1, 1, ( y2 + 1 ) - y1 );
          return;
        }
        return;
      }
    }
    else
    if ( y1 < gport->view_y0 - lw )
      goto B19;
B19:;
    if ( ghid_flip_y )
    {
      y2 = PCB->MaxHeight - y2;
      if ( gport->view_y0 - lw <= PCB->MaxHeight - y2 )
        continue;
      else
      {
        return;
      }
    }
    else
    {
      if ( gport->view_y0 - lw <= y2 )
      {
      }
      else
      {
        return;
      }
    }
  }
  else
  {
    return;
  }
}
void ghid_extents_draw_line( hidGC gc, int x1, int y1, int x2, int y2 )
{
  x1 = "ghid_extents_draw_line() -- not implemented\n";
  gc = 1;
}
void ghid_extents_draw_arc( hidGC gc, int cx, int cy, int xradius, int yradius, int start_angle, int delta_angle )
{
  cx = "ghid_extents_draw_arc() -- not implemented\n";
  gc = 1;
}
void ghid_extents_draw_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  x1 = "ghid_extents_draw_rect() -- not implemented\n";
  gc = 1;
}
void ghid_extents_fill_circle( hidGC gc, int cx, int cy, int radius )
{
  cx = "ghid_extents_fill_circle() -- not implemented\n";
  gc = 1;
}
void ghid_extents_fill_polygon( hidGC gc, int n_coords, int *x, int *y )
{
  n_coords = "ghid_extents_fill_polygon() -- not implemented\n";
  gc = 1;
}
void ghid_extents_fill_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  x1 = "ghid_extents_fill_rect() -- not implemented\n";
  gc = 1;
}
void ghid_calibrate( double xval, double yval )
{
(xval & 0xFFFFFFFF) = 1; // XXX
}
void ghid_notify_gui_is_up( void )
{
  ghid_gui_is_up = 1;
  return;
}
gboolean ghid_shift_is_pressed( void )
{
  GdkModifierType mask;
  /* phantom */ GHidPort *out;
  if ( ghid_gui_is_up )
  {
    gdk_window_get_pointer( &ghid_port.drawing_area->window, 0, 0, &mask );
    return mask & 1;
  }
  return 0;
}
gboolean ghid_control_is_pressed( void )
{
  GdkModifierType mask;
  /* phantom */ GHidPort *out;
  if ( ghid_gui_is_up )
  {
    gdk_window_get_pointer( &ghid_port.drawing_area->window, 0, 0, &mask );
    return ( mask >> 2 ) & 1;
  }
  return 0;
}
gboolean ghid_mod1_is_pressed( void )
{
  GdkModifierType mask;
  /* phantom */ GHidPort *out;
  if ( ghid_gui_is_up )
  {
    gdk_window_get_pointer( &ghid_port.drawing_area->window, 0, 0, &mask );
    return ( mask >> 3 ) & 1;
  }
  return 0;
}
void ghid_set_crosshair( int x, int y, int action )
{
  int eax;
  int ecx;
  int esi;
  int edi;
  double fp4;
  double fp6;
  double fp7;
  if ( gport->x_crosshair != x || gport->y_crosshair != y )
  {
    ghid_set_cursor_position_labels( );
    gport->x_crosshair = x;
    gport->y_crosshair = y;
    if ( action == 2 )
      goto B10;
    else
    {
      if ( action != 1 )
      {
        return;
      }
    {
      gint xofs;
      gint yofs;
      GdkDisplay *display = gdk_display_get_default( );
      GdkScreen *screen = gdk_display_get_default_screen( gdk_display_get_default( ) );
      gdk_window_get_origin( &gport->drawing_area->window, &yofs, &xofs );
      gdk_display_warp_pointer( display, screen, ( gport->x_crosshair - gport->view_x0 ) + yofs, ( ghid_flip_x ? PCB->MaxWidth - x - gport->view_x0 : gport->x_crosshair - gport->view_x0 ) + xofs );
      return;
    }
    }
  }
  else
  if ( action == 2 )
  {
  }
  else
  {
  }
{
B10:;
  GdkDisplay *display = gdk_display_get_default( );
  /* phantom */ GdkScreen *screen;
  gint pos_x;
  gint pos_y;
  gint xofs;
  gint yofs;
  gdk_display_get_default_screen( gdk_display_get_default( ) );
  gdk_display_get_pointer( display, 0, &pos_x, &pos_y, 0 );
  gdk_window_get_origin( &gport->drawing_area->window, &xofs, &yofs );
  pos_y -= yofs;
  gport->view_x0 = (int)( (double)( x ) - ( (double)( gport->view_width ) - ( gport->zoom * (double)( pos_x - xofs ) ) ) );
  if ( ghid_flip_y )
    *(int*)gdk_display_get_default( )/*.116*/ = (int)( (double)( y ) - ( (double)( *(int*)gdk_display_get_default( )/*.124*/ ) - ( (double)( pos_y ) * *(int*)gdk_display_get_default( )/*.104*/ ) ) );
  else
    gport->view_y0 = (int)( (double)( y ) - ( (double)( pos_y ) * *(double*)(gport + 104) ) );
  pos_x -= xofs;
  ghid_pan_fixup( );
{
  gint xofs;
  gint yofs;
  GdkDisplay *display = gdk_display_get_default( );
  GdkScreen *screen = gdk_display_get_default_screen( gdk_display_get_default( ) );
  gdk_window_get_origin( &gport->drawing_area->window, &yofs, &xofs );
  gdk_display_warp_pointer( display, screen, ( gport->x_crosshair - gport->view_x0 ) + yofs, ( ghid_flip_x ? PCB->MaxWidth - x - gport->view_x0 : gport->x_crosshair - gport->view_x0 ) + xofs );
  return;
}
}
}
gboolean ghid_timer( GuiTimer *timer )
{
  ;
}
hidval ghid_add_timer( void (*func)( hidval  ), unsigned long milliseconds, hidval user_data )
{
  int esi;
  /* phantom */ GuiTimer *timer;
  /* phantom */ hidval ret;
{
  /* phantom */ gsize __n;
  /* phantom */ gsize __s;
  /* phantom */ gpointer __p;
  *(int*)(g_malloc0( 12 )) = func;
  *(int*)g_malloc0( 12 )/*.8*/ = user_data;
  *(int*)g_malloc0( 12 )/*.4*/ = gtk_timeout_add( milliseconds, &ghid_timer, g_malloc0( 12 ) );
  *ebp_8 = g_malloc0( 12 );
  return ebp_8;
}
}
lval/*union*/lval/*union*/lval/*union*/void ghid_stop_timer( hidval timer )
{
  /* phantom */ void *ptr;
  gtk_timeout_remove(lval/*union*/ lval/*union*/timer.lval/*union*/ );
  timer = timer;
}
gboolean ghid_watch( GIOChannel *source, GIOCondition condition, gpointer data )
{
  unsigned int pcb_condition;
  /* phantom */ hidval x;
  /* phantom */ GuiWatch *watch;
  ;
}
hidval ghid_watch_file( int fd, unsigned int condition, void (*func)( hidval , int , unsigned int , hidval  ), hidval user_data )
{
  int edx;
  int ebx;
  int edi;
  /* phantom */ GuiWatch *watch;
  /* phantom */ hidval ret;
  unsigned int glib_condition;
{
  /* phantom */ gsize __n;
  /* phantom */ gsize __s;
  /* phantom */ gpointer __p;
  condition &= 8;
  glib_condition = ( condition & 8 ) != 0 ? ( condition & 4 ) != 0 ? ( condition & 2 ) != 0 ? condition & 1 : ( condition & 1 ) | 4 : ( ( condition & 2 ) != 0 ? condition & 1 : ( condition & 1 ) | 4 ) | 8 : ( ( condition & 4 ) != 0 ? ( condition & 2 ) != 0 ? condition & 1 : ( condition & 1 ) | 4 : ( ( condition & 2 ) != 0 ? condition & 1 : ( condition & 1 ) | 4 ) | 8 ) | 16;
  *(int*)g_malloc0( 20 )/*.8*/ = fd;
  *(int*)(g_malloc0( 20 )) = func;
  *(int*)g_malloc0( 20 )/*.4*/ = user_data;
  *(int*)g_malloc0( 20 )/*.12*/ = g_io_channel_unix_new( fd );
  *(int*)g_malloc0( 20 )/*.16*/ = g_io_add_watch( g_malloc0( 20 ) + 12, glib_condition, &ghid_watch, g_malloc0( 20 ) );
  *ebp_8 = g_malloc0( 20 );
  return ebp_8;
}
}
lval/*union*/lval/*union*/lval/*union*/void ghid_unwatch_file( hidval data )
{
  /* phantom */ GuiWatch *watch;
  g_io_channel_shutdown(lval/*union*/ lval/*union*/&data.lval/*union*/, 1, 0 );
  g_io_channel_unref(lval/*union*/ lval/*union*/&data.lval/*union*/ );
  data = data;
}
gboolean ghid_block_hook_prepare( GSource *source, gint *timeout )
{
  hidval data;
  data.lval/*union*/ = source[1].callback_funcs;
  source[1]( source[1].callback_funcs );
  return 0;
}
gboolean ghid_block_hook_check( GSource *source )
{
  return 0;
}
gboolean ghid_block_hook_dispatch( GSource *source, GSourceFunc callback, gpointer user_data )
{
  return 0;
}
hidval ghid_add_block_hook( void (*func)( hidval  ), hidval user_data )
{
  int esi;
  /* phantom */ hidval ret;
  /* phantom */ BlockHookSource *source;
  *(int*)g_source_new( &ghid_block_hook_funcs, ebx )/*.52*/ = func;
  *(int*)g_source_new( &ghid_block_hook_funcs, ebx )/*.56*/ = user_data;
  g_source_attach( g_source_new( &ghid_block_hook_funcs, ebx ), 0 );
  *ebp_8 = *ebp_24;
  return ebp_8;
}
void ghid_stop_block_hook( hidval mlpoll )
{
  /* phantom */ GSource *source;
}
int ghid_confirm_dialog( char *msg, ... )
{
  int eax;
  int rv;
  /* phantom */ va_list ap;
  char *cancelmsg, *okmsg;
  if ( ebp_12 == 0 )
  {
    cancelmsg[0] = rv;
    dcgettext( "pcb", "_OK", 5 );
  }
  if ( rv == 0 )
    dcgettext( "pcb", "_OK", 5 );
  rv = msg;
  return ghid_dialog_confirm( msg, cancelmsg, &rv );
}
int ghid_close_confirm_dialog( void )
{
  if ( ghid_dialog_close_confirm( ) != 1 && ghid_dialog_close_confirm( ) == 2 )
  {
    return hid_actionl( "Save", 0 ) == 0;
  }
  return 0;
}
void ghid_report_dialog( char *title, char *msg )
{
}
char *ghid_prompt_for( char *msg, char *default_string )
{
  /* phantom */ char *rv;
}
void ghid_show_item( void *item )
{
  ghid_pinout_window_show( &ghid_port, &item[0] );
  return;
}
void ghid_beep( void )
{
}
int ghid_progress( int so_far, int total, char *message )
{
  return 0;
}
int About( int argc, char **argv, int x, int y )
{
  ghid_dialog_about( );
  return 0;
}
int GetXY( int argc, char **argv, int x, int y )
{
  return 0;
}
int PointCursor( int argc, char **argv, int x, int y )
{
  if ( ghidgui )
  {
    if ( argc > 0 )
    {
      ghid_point_cursor( );
    }
    ghid_mode_cursor( Settings.Mode );
    return 0;
  }
  return 0;
}
int RouteStylesChanged( int argc, char **argv, int x, int y )
{
  /* phantom */ gint n;
  if ( PCB && PCB->RouteStyle->Name )
  {
    ghid_route_style_set_button_label( &PCB->RouteStyle->Name, 0 );
    ghid_route_style_set_button_label( &PCB->RouteStyle[1].Name, 1 );
    ghid_route_style_set_button_label( &PCB->RouteStyle[2].Name, 2 );
    ghid_route_style_set_button_label( &PCB->RouteStyle[3].Name, 3 );
  }
  return 0;
}
int PCBChanged( int argc, char **argv, int x, int y )
{
  if ( ghidgui )
  {
    ghid_window_set_name_label( &PCB->Name );
    if ( gport->pixmap )
    {
      RouteStylesChanged( 0, 0, 0, 0 );
      ghid_port_ranges_scale( 1 );
      ghid_port_ranges_pan( 0.000000000000, 0.000000000000, 0 );
      ghid_port_ranges_zoom( 0.000000000000 );
      ghid_port_ranges_changed( );
      ghid_sync_with_new_layout( );
    }
  }
  return 0;
}
int LayerGroupsChanged( int argc, char **argv, int x, int y )
{
  __printf_chk( 1, "LayerGroupsChanged -- not implemented\n" );
  return 0;
}
int LibraryChanged( int argc, char **argv, int x, int y )
{
  ghid_library_window_show( &ghid_port, 0 );
  return 0;
}
int Command( int argc, char **argv, int x, int y )
{
  ghid_handle_user_command( 1 );
  return 0;
}
int Load( int argc, char **argv, int x, int y )
{
  int edx;
  static gchar *current_element_dir;
  static gchar *current_layout_dir;
  static gchar *current_netlist_dir;
  char *function;
  char *name;
  if ( argc > 1 )
  {
    x = argv;
    argv = &argc;
    argc = "LoadFrom";
  }
  function[0] = "Layout";
  if ( argc )
    function[0] = argv[0];
  if ( strcasecmp( function, "Netlist" ) == 0 )
  {
    x = 5;
    argv = "Load netlist file";
    argc = "pcb";
    ebp_4 = Load+ca;
    x = Settings.FilePath;
    argv = &current_netlist_dir;
    argc = dcgettext( );
    ebp_4 = Load+de;
    name[0] = ghid_dialog_file_select_open( );
  }
  else
  {
    if ( strcasecmp( function, "ElementToBuffer" ) == 0 )
    {
      name[0] = ghid_dialog_file_select_open( dcgettext( "pcb", "Load element to buffer", 5 ), &current_element_dir, Settings.LibraryTree );
    }
    else
    {
      if ( strcasecmp( function, "LayoutToBuffer" ) == 0 )
      {
      }
      else
      {
        if ( strcasecmp( function, "Layout" ) == 0 )
        {
        }
        else
        {
          return 0;
        }
      }
      name[0] = ghid_dialog_file_select_open( dcgettext( "pcb", ebp_36, ebp_32 ), &current_layout_dir, current_layout_dir );
    }
  }
  if ( name == 0 )
  {
    return 0;
  }
  if ( Settings.verbose )
  {
    y = __FUNCTION__[0];
    x = "%s:  Calling LoadFrom(%s, %s)\n";
    argv = 1;
    argc = stderr;
    ebp_4 = Load+18d;
    __fprintf_chk( );
  }
  x = name;
  argv = &function;
  y = 0;
  argc = "LoadFrom";
  ebp_4 = Load+109;
  hid_actionl( );
  argc = name;
  ebp_4 = Load+111;
  g_free( );
  return 0;
}
int Save( int argc, char **argv, int x, int y )
{
  int edx;
  static gchar *current_dir;
  char *function;
  char *name;
  char *prompt;
  if ( argc > 1 )
  {
    x = argv;
    argv = &argc;
    argc = "SaveTo";
  }
  function[0] = "Layout";
  if ( argc )
    function[0] = argv[0];
  if ( !strcasecmp( function, "Layout" ) && PCB->Filename )
  {
    y = 0;
    x = PCB->Filename;
    argv = "Layout";
    argc = "SaveTo";
  }
  if ( strcasecmp( function, "PasteBuffer" ) == 0 )
    dcgettext( "pcb", "Save element as", 5 );
  else
  {
    x = 5;
    argv = "Save layout as";
    argc = "pcb";
    ebp_4 = Save+1ec;
    dcgettext( );
  }
  name[0] = ghid_dialog_file_select_save( dcgettext( ), &current_dir, &PCB->Filename, Settings.FilePath );
  if ( ghid_dialog_file_select_save( dcgettext( ), &current_dir, &PCB->Filename, Settings.FilePath ) )
  {
    FILE *exist;
    if ( exist )
    {
      fclose( exist );
      if ( ghid_dialog_confirm( dcgettext( "pcb", "File exists!  Ok to overwrite?", 5 ), 0, 0 ) == 0 )
      {
        g_free( name );
      }
      if ( Settings.verbose )
        __fprintf_chk( stderr, 1, "Overwriting %s\n", name );
      else
      {
        if ( strcasecmp( function, "PasteBuffer" ) == 0 )
          hid_actionl( "PasteBuffer", "Save", (long long)( name ) );
        else
        {
          if ( strcasecmp( function, "Layout" ) == 0 )
            hid_actionl( "SaveTo", "LayoutAs", (long long)( name ) );
          else
            hid_actionl( "SaveTo", function, (long long)( name ) );
        }
        g_free( name );
      }
    }
    if ( Settings.verbose )
      __fprintf_chk( stderr, 1, "%s:  Calling SaveTo(%s, %s)\n", __FUNCTION__, function, name );
  }
  return 1;
}
int SwapSides( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  /* phantom */ gint flipd;
  int do_flip_x;
  int do_flip_y;
  int comp_group = GetLayerGroupNumberByNumber( PCB->Data->LayerN + 1 );
  int solder_group = GetLayerGroupNumberByNumber( PCB->Data->LayerN );
  int active_group = GetLayerGroupNumberByNumber( LayerStack[0] );
  int comp_showing;
  int solder_showing;
  comp_showing/*.1_1of4*/ = PCB->Data->Layer[ PCB->LayerGroups.Number[ 16 + ( ( GetLayerGroupNumberByNumber( PCB->Data->LayerN + 1 ) * 9 ) * 2 ) ] ].On;
  if ( argc <= 0 )
  {
    do_flip_y = 0;
    do_flip_x = 0;
  }
  else
  {
    switch ( ( argv[0] + -72 ) & 255 )
    {
    case 0:
    case 32:
      do_flip_y = 0;
      do_flip_x = 1;
      ghid_flip_x = ( ghid_flip_x == 0 ) & 255;
      break;
    case 14:
    case 46:
      do_flip_y = 1;
      do_flip_x = 0;
      ghid_flip_y = ghid_flip_y == 0;
      break;
    case 10:
    case 42:
      do_flip_x = 1;
      ghid_flip_x = ( ghid_flip_x == 0 ) & 255;
      do_flip_y/*.1_1of4*/ = ghid_flip_y == 0;
      do_flip_y = 1;
      ghid_flip_y = do_flip_y/*.1_1of4*/;
      break;
    default:
      return 1;
      break;
    }
  }
  solder_showing = solder_showing/*.1_1of4*/;
  comp_showing = comp_showing/*.1_1of4*/;
  Settings.ShowSolderSide = ( ( ebp_48 == Settings.ShowSolderSide ) & 255 ) == 0;
  if ( ( ( Settings.ShowSolderSide & 255 ) == 0 ) & 255 )
  {
    if ( comp_group == active_group )
    {
      if ( comp_showing )
      {
        if ( solder_showing == 0 )
        {
          ChangeGroupVisibility( PCB->LayerGroups.Number[ 16 + ( ( GetLayerGroupNumberByNumber( PCB->Data->LayerN + 1 ) * 9 ) * 2 ) ], 0, 0 );
        }
        else
        {
          if ( do_flip_x )
          {
            ghid_port_ranges_pan( (double)( ( ( PCB->MaxWidth / 2 ) - gport->view_x ) * 2 ), 0.000000000000, 1 );
            if ( do_flip_y )
              ghid_port_ranges_pan( 0.000000000000, (double)( ( ( PCB->MaxHeight / 2 ) - gport->view_y ) * 2 ), 1 );
            ghid_invalidate_all( );
            return 0;
          }
          else
          {
            if ( do_flip_y )
              ghid_port_ranges_pan( 0.000000000000, (double)( ( ( PCB->MaxHeight / 2 ) - gport->view_y ) * 2 ), 1 );
          }
        }
      }
      else
      {
      }
    }
  }
  else
  if ( solder_group == active_group && solder_showing && comp_showing == 0 )
  {
    ChangeGroupVisibility( PCB->LayerGroups.Number[ ( solder_group << 4 ) + 16 ], 0, 0 );
  }
  ChangeGroupVisibility( PCB->LayerGroups.Number[ 16 + ( ( comp_group * 9 ) * 2 ) ], ebp_100, ebp_96 );
  if ( do_flip_x )
  {
    ghid_port_ranges_pan( (double)( ( ( PCB->MaxWidth / 2 ) - gport->view_x ) * 2 ), 0.000000000000, 1 );
  }
  else
  {
  }
}
int Print( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  HID **hids;
  /* phantom */ int i;
  HID *printer = hids[0];
  if ( hids[0] )
  {
    printer = 0;
    while ( printer = hids[1], printer = ( ( printer->bits_at_12 & 2 ) & 255 ) == 0 ? printer : &printer->struct_size, *(int*)(hid_enumerate( ) + 4 + 4) )
    {
    }
    if ( printer->struct_size == 0 )
    {
      ebx( dcgettext( "pcb", "Can't find a suitable printer HID", 5 ) );
      return 0;
    }
    if ( ( IsDataEmpty( &PCB->Data ) & 255 ) == 0 )
    {
      ghid_dialog_print( printer );
      return 0;
    }
    ebx( dcgettext( "pcb", "Can't print empty layout", 5 ) );
    return 0;
  }
  ebx( dcgettext( "pcb", "Can't find a suitable printer HID", 5 ) );
  return 0;
}
int PrintCalibrate( int argc, char **argv, int x, int y )
{
  HID *printer = hid_find_printer( );
  ;
}
int Export( int argc, char **argv, int x, int y )
{
  if ( ( IsDataEmpty( &PCB->Data ) & 255 ) == 0 )
  {
    ghid_dialog_export( );
    return 0;
  }
  ebx( dcgettext( "pcb", "Can't export empty layout", 5 ) );
  return 0;
}
int Benchmark( int argc, char **argv, int x, int y )
{
  int eax;
  int i = 0;
  time_t start;
  time_t end;
  BoxType region;
  GdkDisplay *display;
  region.X1 = 0;
  region.Y1 = 0;
  display = gdk_drawable_get_display( &gport->drawable );
  region.X2 = PCB->MaxWidth;
  region.Y2 = PCB->MaxHeight;
  gdk_display_sync( gdk_drawable_get_display( &gport->drawable ) );
  time( &start );
  do
  {
    i++;
    hid_expose_callback( &ghid_hid, &region, 0 );
    gdk_display_sync( display );
    time( &end );
  }
  while ( end - start <= 9 );
  __printf_chk( 1, "%g redraws per second\n", (double)( i ) / 10.000000000000 );
  return 0;
}
int Center( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  double fp4;
  int x0, y0, w2, h2, dx, dy;
  if ( argc )
  {
    Message( "Syntax error.  Usage:\n%s\n", center_syntax[0] );
    return 1;
  }
  x0 = (int)( 0.500000000000 + ( 0.500000000000 * (double)( (int)( (double)( x - PCB->GridOffsetX - PCB->GridOffsetX ) / ( 0.500000000000 + (double)( *(int*)(PCB + 140) ) ) ) ) ) + (double)( PCB->GridOffsetX ) ) - ( gport->view_width / 2 );
  x0 = ( "huge", 0 );
  y0 = (int)( 0.500000000000 + (double)( *(int*)(PCB + 140) ) ) - ( gport->view_height / 2 );
  y0 = (unsigned char)( ( (int)( 0.500000000000 + (double)( *(int*)(PCB + 140) ) ) - ( gport->view_height / 2 ) < 0 ) ^ 1 ) ? 0 : (int)( 0.500000000000 + (double)( *(int*)(PCB + 140) ) ) - ( gport->view_height / 2 );
  dx = ebp_44;
  dy = (int)( (double)( dx ) / gport->zoom );
  gport->view_x0 = ( "huge", 0 );
  gport->view_y0 = (unsigned char)( ( (int)( 0.500000000000 + (double)( *(int*)(PCB + 140) ) ) - ( gport->view_height / 2 ) < 0 ) ^ 1 ) ? 0 : (int)( 0.500000000000 + (double)( *(int*)(PCB + 140) ) ) - ( gport->view_height / 2 );
  ghid_pan_fixup( );
{
  GdkDisplay *display = gdk_display_get_default( );
  GdkScreen *screen;
  gint cx;
  gint cy;
  gdk_display_get_pointer( display, 0, &cx, &cy, 0 );
  gdk_display_warp_pointer( display, gdk_display_get_default_screen( gdk_display_get_default( ) ), cx - dx, cy - dy );
  return 0;
}
}
int CursorAction( int argc, char **argv, int x, int y )
{
  double fp6;
  double fp7;
  int pan_warp;
  double dx, dy;
  double xu, yu;
  if ( argc == 4 )
  {
    if ( strcasecmp( argv[0], "pan" ) )
    {
      pan_warp = 1;
      if ( strcasecmp( argv[0], "warp" ) )
      {
        Message( "Syntax error.  Usage:\n%s\n", cursor_syntax[0] );
        return 1;
      }
    }
    else
      pan_warp = 2;
    dx = strtod( argv[1], 0 );
    if ( ghid_flip_x )
      dx = -( dx );
    else
    {
    }
    dy = strtod( argv[2], 0 );
    if ( ghid_flip_y )
    {
    }
    else
      dy = -( dy );
    if ( strncasecmp( &argv[3][12], "mm", 2 ) == 0 )
    {
    }
    else
    {
      if ( strncasecmp( argv[3], "mil", 3 ) == 0 )
      {
      }
      else
      {
        if ( strncasecmp( argv[3], "grid", 4 ) == 0 )
        {
        }
        else
        {
          if ( strncasecmp( argv[3], "view", 4 ) == 0 )
          {
          }
          else
          {
            if ( strncasecmp( argv[3], "board", 4 ) )
            {
            }
            else
            {
            }
          }
        }
      }
    }
    EventMoveCrosshair( Crosshair.X + (int)( 0.000000000000 ), Crosshair.Y + (int)( fp6 * dy ) );
    gui->set_crosshair( Crosshair.X, pan_warp );
    return 0;
  }
  Message( "Syntax error.  Usage:\n%s\n", cursor_syntax[0] );
  return 1;
}
int DoWindows( int argc, char **argv, int x, int y )
{
  char *a;
  a[0] = "";
  if ( argc == 1 )
    a[0] = argv[0];
{
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
  /* phantom */ unsigned char *__s1;
  /* phantom */ int __result;
  if ( ( a[0] == 49 && a[1] == 0 ) || strcasecmp( a, "Layout" ) == 0 )
  {
  }
{
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
  /* phantom */ unsigned char *__s1;
  /* phantom */ int __result;
  if ( ( a[0] == 50 && a[1] == 0 ) || strcasecmp( a, "Library" ) == 0 )
  {
    ghid_library_window_show( gport, 1 );
    return 0;
  }
{
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
  /* phantom */ unsigned char *__s1;
  /* phantom */ int __result;
  if ( ( a[0] == 51 && a[1] == 0 ) || strcasecmp( a, "Log" ) == 0 )
  {
    ghid_log_window_show( 1 );
  }
{
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
  /* phantom */ unsigned char *__s1;
  /* phantom */ int __result;
  if ( ( a[0] == 52 && a[1] == 0 ) || strcasecmp( a, "Netlist" ) == 0 )
  {
    ghid_netlist_window_show( gport, 1 );
  }
{
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
  /* phantom */ unsigned char *__s1;
  /* phantom */ int __result;
  if ( ( a[0] == 53 && a[1] == 0 ) || strcasecmp( a, "Preferences" ) == 0 )
  {
    ghid_config_window_show( );
  }
{
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
  /* phantom */ unsigned char *__s1;
  /* phantom */ int __result;
  if ( ( a[0] == 54 && a[1] == 0 ) || strcasecmp( a, "DRC" ) == 0 )
  {
    ghid_drc_window_show( 1 );
  }
  Message( "Syntax error.  Usage:\n%s\n", dowindows_syntax[0] );
}
}
}
}
}
  return 1;
}
}
int SetUnits( int argc, char **argv, int x, int y )
{
  int ecx;
  int edx;
  if ( argc )
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    unsigned char *__s1;
    /* phantom */ int __result;
    __s1[0] = argv[0];
    if ( __s1[0] == 109 && __s1[1] == 105 && __s1[2] == 108 && argv[0][3] == 0 )
      Settings.grid_units_mm = 0;
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    /* phantom */ unsigned char *__s1;
    /* phantom */ int __result;
    if ( argv[0] == 109 && argv[0][1] == 109 && argv[0][2] == 0 )
      Settings.grid_units_mm = 1;
    ghid_config_handle_units_changed( );
    ghid_set_status_line_label( );
  }
  }
  return 0;
}
int ScrollAction( int argc, char **argv, int x, int y )
{
  int edx;
  double fp5;
  double fp6;
  double fp7;
  gdouble dx;
  gdouble dy;
  int div;
  if ( ghidgui )
  {
    if ( argc + -1 <= 1 )
    {
      div = 40;
      if ( argc == 2 )
      {
        div = strtol( argv[1], 0, 10 );
      }
      if ( strcasecmp( argv[0], "up" ) == 0 )
      {
      }
      else
      {
        if ( strcasecmp( argv[0], "down" ) == 0 )
        {
        }
        else
        {
          if ( strcasecmp( argv[0], "right" ) == 0 )
          {
          }
          else
          {
            if ( strcasecmp( argv[0], "left" ) == 0 )
            {
            }
          }
          HideCrosshair( 0 );
          ghid_port_ranges_pan( 0.000000000000, 0.000000000000, 1 );
          MoveCrosshairRelative( ebx, esi );
          AdjustAttachedObjects( );
          RestoreCrosshair( 0 );
        }
      }
      fp6 = 0.000000000000;
      HideCrosshair( 0 );
      ghid_port_ranges_pan( 0.000000000000, 0.000000000000, 1 );
      MoveCrosshairRelative( ebx, esi );
      AdjustAttachedObjects( );
      RestoreCrosshair( 0 );
    }
    Message( "Syntax error.  Usage:\n%s\n", scroll_syntax[0] );
    return 1;
  }
  return 0;
}
int PanAction( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  static int on_x, on_y;
  int mode;
  if ( ghidgui )
  {
    if ( argc + -1 > 1 )
    {
      Message( "Syntax error.  Usage:\n%s\n", pan_syntax[0] );
      return 1;
    }
    if ( argc != 1 )
    {
      mode = strtol( argv[1], 0, 10 );
      Message( "The gtk gui currently ignores the optional first argumentto the Pan action.\nFeel free to provide patches.\n" );
      gport->panning = mode;
      if ( mode == 1 )
      {
        on_x = x;
        on_y = y;
        return 1;
      }
      if ( x == on_x && y == on_y )
      {
        ghid_show_crosshair( 0 );
        ghidgui->auto_pan_on = ghidgui->auto_pan_on == 0;
        ghid_show_crosshair( 1 );
        return 1;
      }
    }
    else
    {
      mode = strtol( argv[0], 0, 10 );
      gport->panning = strtol( argv[0], 0, 10 );
      if ( gport->panning == 1 )
      {
        on_x = x;
        on_y = y;
        return 1;
      }
    }
    on_x = x;
    on_y = y;
    return 1;
  }
  return 1;
}
int Popup( int argc, char **argv, int x, int y )
{
  GtkWidget *menu;
  /* phantom */ char *element;
  guint button;
  if ( argc + -1 > 1 )
  {
    Message( "Syntax error.  Usage:\n%s\n", popup_syntax[0] );
    return 1;
  }
  button = 0;
  if ( argc != 1 )
  {
    button = strtol( argv[1], 0, 10 );
  }
  if ( calloc( 1, strlen( argv[0] ) + 2 ) == 0 )
  {
    __fprintf_chk( stderr, 1, "Popup():  malloc failed\n" );
    exit( 1 );
  }
  __sprintf_chk( (char*)calloc( 1, strlen( argv[0] ) + 2 ), 1, -1, "/%s", argv[0] );
  __printf_chk( 1, "Loading popup \"%s\". Button = %u\n", (char*)calloc( 1, strlen( argv[0] ) + 2 ), button );
  menu = gtk_ui_manager_get_widget( &ghidgui->ui_manager->parent.g_type_instance.g_class->g_type, (gchar*)calloc( 1, strlen( argv[0] ) + 2 ) );
  free( calloc( 1, strlen( argv[0] ) + 2 ) );
{
  /* phantom */ GTypeInstance *__inst;
  GType __t = gtk_menu_get_type( );
  gboolean __r;
  if ( menu == 0 || ( ( menu == 0 || menu->object.parent_instance.g_type_instance.g_class->g_type != __t ) && g_type_check_instance_is_a( &menu[0].object.parent_instance.g_type_instance, __t ) == 0 ) )
  {
    Message( "The specified popup menu \"%s\" has not been defined.\n", argv[0] );
    return 1;
  }
  ghidgui->in_popup = 1;
  gtk_widget_grab_focus( ghid_port.drawing_area );
  gtk_menu_popup( g_type_check_instance_cast( &menu[0].object.parent_instance.g_type_instance, __t ), 0, 0, 0, 0, 0, gtk_get_current_event_time( ) );
  return 0;
}
}
int Busy( int argc, char **argv, int x, int y )
{
  ghid_watch_cursor( );
  return 0;
}
void register_ghid_main_action_list( void )
{
  hid_register_actions( ghid_main_action_list, 24 );
  return;
}
int flag_flipx( int x )
{
  return ghid_flip_x;
}
int flag_flipy( int x )
{
  return ghid_flip_y;
}
void register_ghid_main_flag_list( void )
{
  hid_register_flags( ghid_main_flag_list, 2 );
  return;
}
void hid_gtk_init( void )
{
  hid_register_hid( &ghid_hid );
  apply_default_hid( &ghid_extents, &ghid_hid );
  register_ghid_main_action_list( );
  register_ghid_main_flag_list( );
  register_ghid_netlist_action_list( );
  register_ghid_attribute_list( );
  register_gtk_topwindow_action_list( );
  register_pcbmenu_attr( );
}
#if 0
#endif
