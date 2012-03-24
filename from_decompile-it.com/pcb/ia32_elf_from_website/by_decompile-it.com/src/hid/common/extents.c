#include "extents.c.h"
static BoxType box;
static HID extents_hid = { 208, "extents-extents", "used to calculate extents", 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
;
int extents_set_layer( char *name, int group, int empty )
{
  int edx;
  int idx;
  if ( group >= 0 )
  {
    idx = group;
    if ( PCB->Data->LayerN <= group || PCB->Font.Symbol[255].Delta >= 0 )
    {
      return (unsigned char)( ( PCB->Data->LayerN + 1 < idx ) ^ 1 );
    }
  }
  else
    idx = group;
  idx = idx & 240;
  if ( ( idx & 240 & 240 ) == 48 || idx == 64 || idx == 16 )
  {
  }
  return (unsigned char)( ( PCB->Data->LayerN + 1 < idx ) ^ 1 );
}
hidGC extents_make_gc( void )
{
  /* phantom */ hidGC rv;
  mymemset( malloc( 4 ), 0, 4 );
  return *ebp_24;
}
void extents_destroy_gc( hidGC gc )
{
}
void extents_use_mask( int use_it )
{
  return;
}
void extents_set_color( hidGC gc, char *name )
{
  return;
}
void extents_set_line_cap( hidGC gc, EndCapStyle style )
{
  return;
}
void extents_set_line_width( hidGC gc, int width )
{
  gc->width = width;
  return;
}
void extents_set_draw_xor( hidGC gc, int xor )
{
  return;
}
void extents_set_draw_faded( hidGC gc, int faded )
{
  return;
}
void extents_set_line_cap_angle( hidGC gc, int x1, int y1, int x2, int y2 )
{
  return;
}
void extents_draw_line( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int ecx;
  int edx;
  int ebx;
  if ( x1 - gc->width < box.X1 )
    box.X1 = x1 - gc->width;
  if ( box.X2 < x1 + gc->width )
    box.X2 = x1;
  if ( y1 - gc->width < box.Y1 )
    box.Y1 = y1 - gc->width;
  if ( box.Y2 < y1 + gc->width )
    box.Y2 = y1;
  if ( x2 - gc->width < box.X1 )
    box.X1 = x2 - gc->width;
  if ( box.X2 < x2 + gc->width )
    box.X2 = x2;
  if ( y2 - gc->width < box.Y1 )
    box.Y1 = y2 - gc->width;
  if ( box.Y2 < y2 + gc->width )
  {
    box.Y2 = y2 + gc->width;
  }
  return;
}
void extents_draw_arc( hidGC gc, int cx, int cy, int width, int height, int start_angle, int end_angle )
{
  int eax;
  int edx;
  if ( cx - ( width + gc->width ) < box.X1 )
    box.X1 = cx - ( width + gc->width );
  if ( box.X2 < width + gc->width + width + gc->width + cx )
    box.X2 = width + gc->width + cx;
  if ( cy - ( height + gc->width ) < box.Y1 )
    box.Y1 = cy - ( height + gc->width );
  if ( box.Y2 < gc->width + gc->width + cy )
  {
    box.Y2 = gc->width + cy;
  }
  return;
}
void extents_draw_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int ecx;
  int edx;
  int ebx;
  if ( x1 - gc->width < box.X1 )
    box.X1 = x1 - gc->width;
  if ( box.X2 < x1 + gc->width )
    box.X2 = x1;
  if ( y1 - gc->width < box.Y1 )
    box.Y1 = y1 - gc->width;
  if ( box.Y2 < y1 + gc->width )
    box.Y2 = y1;
  if ( x2 - gc->width < box.X1 )
    box.X1 = x2 - gc->width;
  if ( box.X2 < x2 + gc->width )
    box.X2 = x2;
  if ( y2 - gc->width < box.Y1 )
    box.Y1 = y2 - gc->width;
  if ( box.Y2 < y2 + gc->width )
  {
    box.Y2 = y2 + gc->width;
  }
  return;
}
void extents_fill_circle( hidGC gc, int cx, int cy, int radius )
{
  int eax;
  int ecx;
  int edx;
  if ( cx - radius < box.X1 )
    box.X1 = cx - radius;
  if ( box.X2 < radius + radius + cx )
    box.X2 = radius + cx;
  if ( cy - radius < box.Y1 )
    box.Y1 = cy - radius;
  if ( box.Y2 < radius + cy )
  {
    box.Y2 = radius;
  }
  return;
}
void extents_fill_polygon( hidGC gc, int n_coords, int *x, int *y )
{
  int ecx;
  int edx;
  int ebx;
  int i;
  if ( n_coords > 0 )
  {
    i = 0;
    do
    {
      if ( x < box.X1 )
        box.X1 = x;
      if ( box.X2 < x )
        box.X2 = x;
      if ( y < box.Y1 )
        box.Y1 = y;
      if ( box.Y2 < y )
        box.Y2 = y;
      i++;
    }
    while ( n_coords != i + 1 );
  }
  return;
}
void extents_fill_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
  int ecx;
  int edx;
  if ( x1 < box.X1 )
    box.X1 = x1;
  if ( box.X2 < x1 )
    box.X2 = x1;
  if ( y1 < box.Y1 )
    box.Y1 = y1;
  if ( box.Y2 < y1 )
    box.Y2 = y1;
  if ( x2 < box.X1 )
    box.X1 = x2;
  if ( box.X2 < x2 )
    box.X2 = x2;
  if ( y2 < box.Y1 )
    box.Y1 = y2;
  if ( box.Y2 < y2 )
  {
    box.Y2 = y2;
  }
  return;
}
BoxType *hid_get_extents( void *item )
{
  BoxType region;
  region.X1 = 0x80000001;
  region.Y1 = 0x80000001;
  region.X2 = 0x7fffffff;
  region.Y2 = 0x7fffffff;
  box.X1 = 0x7fffffff;
  box.Y1 = 0x7fffffff;
  box.X2 = 0x80000001;
  box.Y2 = 0x80000001;
  hid_expose_callback( &extents_hid, &region, item );
  return &box;
}
#if 0
#endif
