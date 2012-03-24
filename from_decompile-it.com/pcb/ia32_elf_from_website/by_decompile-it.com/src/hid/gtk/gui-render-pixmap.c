#include "gui-render-pixmap.c.h"
GdkPixmap *ghid_render_pixmap( int cx, int cy, double zoom, int width, int height, int depth )
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
  double fp7;
  GdkPixmap *pixmap;
  GdkDrawable *save_drawable = &gport->drawable;
  double save_zoom = gport->zoom;
  int save_left, save_top;
  int save_width, save_height = gport->height;
  int save_view_width, save_view_height;
  BoxType region;
  save_left = gport->view_x0;
  save_width = gport->width;
  save_view_width = gport->view_width;
  save_top = gport->view_y0;
  save_view_height = gport->view_height;
  pixmap = gdk_pixmap_new( 0, width, height, depth );
  gport->zoom = zoom;
  gport->drawable = pixmap;
  gport->width = width;
  gport->height = height;
  gport->view_width = (int)( zoom * (double)( gport->width ) );
  gport->view_height = (int)( zoom * (double)( gport->height ) );
  if ( ghid_flip_x )
    cx = PCB->MaxWidth - cx;
  gport->view_x0 = cx - ( (int)( zoom * (double)( gport->height ) ) / 2 );
  if ( ghid_flip_y )
    cy = PCB->MaxHeight - cy;
  gport->view_y0 = cy - ( (int)( zoom * (double)( gport->width ) ) / 2 );
  gdk_draw_rectangle( (GdkDrawable*)pixmap, &gport->bg_gc, 1, 0, 0, width, height );
  if ( ( ghid_flip_x == 0 ? (int)( fp1 ) : (int)( 0.000000000000 ) ) <= ( ghid_flip_x == 0 ? ebp_52 : (int)( 0.000000000000 ) ) )
  {
    if ( ghid_flip_x )
    {
    }
  }
  else
  if ( ghid_flip_x )
  {
  }
  if ( gport <= ( ghid_flip_y ? (int)( 0.000000000000 - (double)( gport->view_x0 ) ) : ghid_flip_x ? (int)( 0.000000000000 ) : (int)( (double)( gport->view_x0 ) ) ) )
  {
    if ( ghid_flip_y )
    {
    }
  }
  else
  if ( ghid_flip_y )
  {
  }
  if ( (int)( (double)( PCB->MaxWidth ) ) < (int)( (double)( PCB->MaxWidth ) ) )
  {
    if ( ghid_flip_x == 0 )
    {
    }
    else
    {
    }
  }
  else
  if ( ghid_flip_x )
  {
  }
  else
  {
  }
  if ( (int)( (double)( PCB->MaxHeight ) ) < (int)( (double)( PCB->MaxHeight ) ) )
  {
    if ( ghid_flip_y )
    {
    }
    else
    {
    }
  }
  else
  if ( ghid_flip_y )
  {
  }
  else
  {
  }
  region.Y2 = (int)( (double)( PCB->MaxHeight ) - 0.000000000000 );
  region.Y1 = esi;
  region.X2 = edx;
  region.X1 = (int)( (double)( PCB->MaxWidth ) );
  hid_expose_callback( &ghid_hid, &region, 0 );
  gport->drawable = save_drawable;
  gport->width = save_width;
  gport->height = save_height;
  gport->view_x0 = save_left;
  gport->zoom = save_zoom;
  gport->view_y0 = save_top;
  gport->view_width = save_view_width;
  gport->view_height = save_view_height;
  return pixmap;
}
#if 0
#endif
