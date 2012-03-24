#include "draw_helpers.c.h"
void fill_contour( hidGC gc, PLINE *pl )
{
  /* phantom */ int *x, *y, n, i;
  VNODE *v = &pl->head.next;
  n = pl->Count;
  malloc( n << 2 );
  if ( n > 0 )
  {
    i = 0;
    do
    {
      i++;
    }
    while ( n != i + 1 );
  }
  gui->fill_polygon( gc, n, malloc( n << 2 ) );
  free( malloc( n << 2 ) );
  free( malloc( n << 2 ) );
  return;
}
void thindraw_contour( hidGC gc, PLINE *pl )
{
  int eax;
  int ecx;
  VNODE *v;
  int last_x, last_y;
  int this_x, this_y;
  if ( pl->head.next )
  {
    gui->set_line_width( (long long)( gc ), ebp_32, ebp_28 );
    gui->set_line_cap( gc, 2 );
    last_x = pl->head.point[0];
    last_y = pl->head.point[1];
    v = &pl->head;
    do
    {
      this_x = v->point[0];
      this_y = v->point[1];
      gui->draw_line( gc, last_x, last_y, v->point[0] );
    }
    while ( v == pl->head.next );
  }
  return;
}
void fill_contour_cb( PLINE *pl, void *user_data )
{
  int eax;
  /* phantom */ hidGC gc;
  PLINE *local_pl = pl;
  fill_contour( &user_data[0], pl );
  poly_FreeContours( &local_pl );
  return;
}
void common_fill_pcb_polygon( hidGC gc, PolygonType *poly, BoxType *clip_box )
{
  int eax;
  int edx;
  if ( poly->NoHolesValid == 0 )
    ComputeNoHoles( poly );
  if ( poly->NoHoles )
  {
  {
    do
    {
      PLINE *pl;
      fill_contour( &gc, pl );
    }
    while ( pl->next == 0 );
  }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
int thindraw_hole_cb( PLINE *pl, void *user_data )
{
  int eax;
  int edx;
  /* phantom */ hidGC gc;
  thindraw_contour( &user_data[0], pl );
  return 0;
}
void common_thindraw_pcb_polygon( hidGC gc, PolygonType *poly, BoxType *clip_box )
{
  int eax;
  int edx;
  thindraw_contour( &gc, &poly->Clipped->contours );
  PolygonHoles( poly, clip_box, &thindraw_hole_cb, &gc );
  return;
}
#if 0
#endif
