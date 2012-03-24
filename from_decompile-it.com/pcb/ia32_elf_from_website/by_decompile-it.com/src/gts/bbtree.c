#include "bbtree.c.h"
void bbox_init( GtsBBox *bbox )
{
  bbox->bounded = 0;
  return;
}
GtsBBoxClass *gts_bbox_class( void )
{
  int eax;
  int edx;
  int edi;
  static GtsBBoxClass *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo bbox_info = { };
    bbox_info.name[0] = 'G';
    *(int*)&bbox_info.name[4] = 0x786f42;
    do
    {
      *(int*)&bbox_info.name[7] = 0;
    }
    while ( klass + 4 + 4 < 32 );
    bbox_info.object_size = 64;
    bbox_info.class_size = 92;
    bbox_info.object_init_func = &bbox_init;
    klass = gts_object_class_new( gts_object_class( ), &bbox_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
void gts_bbox_set( GtsBBox *bbox, gpointer bounded, gdouble x1, gdouble y1, gdouble z1, gdouble x2, gdouble y2, gdouble z2 )
{
  int eax;
  int edx;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
{
  /* phantom */ int _g_boolean_var_;
  if ( bbox == 0 )
  {
    bounded = __PRETTY_FUNCTION__;
    bbox = 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( x2 <= x1 )
  {
    if ( y2 <= y1 )
    {
      if ( x2 <= z1 )
      {
        bbox->x1 = x1;
        bbox->y1 = y1;
        bbox->z1 = z1;
        bbox->x2 = y1;
        bbox->y2 = z1;
        bbox->z2 = x1;
        bbox->bounded = bounded;
        return;
      }
    }
    else
    {
    }
  }
  else
  {
  }
  bounded = __PRETTY_FUNCTION__;
  bbox = 0;
}
}
}
GtsBBox *gts_bbox_new( GtsBBoxClass *klass, gpointer bounded, gdouble x1, gdouble y1, gdouble z1, gdouble x2, gdouble y2, gdouble z2 )
{
  int eax;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  GtsBBox *bbox;
{
  /* phantom */ int _g_boolean_var_;
  if ( klass )
  {
    bbox = (GtsBBox*)gts_object_new( &klass[0].parent_class );
    gts_bbox_set( (GtsBBox*)gts_object_new( &klass[0].parent_class ), bounded, x1, y1, z1, z1, y1, x1 );
    return bbox;
  }
  bbox = 0;
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  return bbox;
}
}
GtsBBox *gts_bbox_triangle( GtsBBoxClass *klass, GtsTriangle *t )
{
  int edx;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  GtsBBox *bbox;
  GtsPoint *p;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( klass == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    return 0;
  }
  p = &t->e1->segment.v1->p;
  p = &t->e1->segment.v2->p;
  if ( bbox->x2 < p->x )
    bbox->x2 = 0.000000000000;
  else
  {
  }
  if ( 0.000000000000 < 0.000000000000 )
    bbox->x1 = 0.000000000000;
  else
  {
  }
  if ( 0.000000000000 < p->y )
    bbox->y2 = p->x;
  if ( 0.000000000000 < 0.000000000000 )
    bbox->y1 = 0.000000000000;
  else
  {
  }
  if ( 0.000000000000 < p->z )
    bbox->z2 = p->y;
  if ( 0.000000000000 <= 0.000000000000 )
  {
    if ( 0.000000000000 < t->e2->segment.v2->p.x )
      bbox->x2 = t->e2->segment.v2->p.x;
    else
    {
    }
    if ( t->e2->segment.v2->p.x < 0.000000000000 )
      bbox->x1 = t->e2->segment.v2->p.x;
    else
    {
    }
    if ( 0.000000000000 < t->e2->segment.v2->p.x )
      bbox->y2 = t->e2->segment.v2->p.x;
    else
    {
    }
    if ( t->e2->segment.v2->p.x < 0.000000000000 )
      bbox->y1 = t->e2->segment.v2->p.x;
    else
    {
    }
    if ( p->y < t->e2->segment.v2->p.x )
      bbox->z2 = t->e2->segment.v2->p.x;
    else
    {
    }
    if ( 0.000000000000 < 0.000000000000 )
    {
      bbox->z1 = 0.000000000000;
    }
    else
    {
    }
    return gts_bbox_new( klass, &t, p->x, p->y, p->z, p->x, p->y, p->z );
  }
  else
  {
    bbox->z1 = 0.000000000000;
  }
  if ( t->e2->segment.v2->p.x & 0xFFFFFFFF == t->e1->segment.v2 )
  {
  }
}
}
}
GtsBBox *gts_bbox_segment( GtsBBoxClass *klass, GtsSegment *s )
{
  int eax;
  double fp7;
  GtsBBox *bbox;
  GtsPoint *p1, *p2;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( klass == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    return 0;
  }
  gts_bbox_new( klass, &s, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000 );
  p1 = &s->v1->p;
  p2 = &s->v2->p;
  p1->x = s->v1->p.x;
  if ( p2->x < p1->x )
  {
    bbox->x2 = p1->x;
    bbox->x1 = p2->x;
    if ( p2->y < p1->y )
    {
      bbox->y2 = p1->y;
      bbox->y1 = p2->y;
      if ( p2->z < p1->z )
      {
        *(int*)gts_bbox_new( klass, &s, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000 )/*.56*/ = p1->z;
        bbox->z1 = p2->z;
        return bbox;
      }
      *(int*)gts_bbox_new( klass, &s, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000 )/*.32*/ = p1->z;
      bbox->z2 = p2->z;
      return bbox;
    }
  }
  else
  {
    bbox->x1 = p1->x;
    bbox->x2 = p2->x;
    if ( p2->y < p1->y )
    {
      bbox->y2 = p1->y;
      bbox->y1 = p2->y;
    }
  }
  bbox->y1 = p1->y;
  bbox->y2 = p2->y;
  if ( p2->z < p1->z )
  {
    *(int*)gts_bbox_new( klass, &s, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000 )/*.56*/ = p1->z;
    bbox->z1 = p2->z;
    return bbox;
  }
  *(int*)gts_bbox_new( klass, &s, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000 )/*.32*/ = p1->z;
  bbox->z2 = p2->z;
  return bbox;
}
}
}
void bbox_foreach_vertex( GtsPoint *p, GtsBBox *bb )
{
  double fp0;
  double fp7;
  if ( p->x < bb->x1 )
    bb->x1 = p->x;
  if ( p->y < bb->y1 )
    bb->y1 = p->y;
  if ( p->z < bb->z1 )
    bb->z1 = p->z;
  if ( bb->x2 < &bb->x1 )
  {
    bb->x2 = &bb->x1;
    bb->x2 = &bb->x1;
    bb->x2 = &bb->x2;
  }
  else
  {
  }
  if ( bb->y2 < &bb->z1 )
    bb->y2 = &bb->z1;
  else
  {
  }
  if ( bb->z2 < &bb->y1 )
  {
    bb->z2 = &bb->y1;
  }
  else
  {
  }
  return;
}
GtsBBox *gts_bbox_surface( GtsBBoxClass *klass, GtsSurface *surface )
{
  int eax;
  GtsBBox *bbox;
{
  /* phantom */ int _g_boolean_var_;
  if ( klass == 0 )
  {
    bbox = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    return bbox;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( surface == 0 )
  {
    bbox = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "surface != NULL" );
    return bbox;
  }
  bbox = gts_bbox_new( klass, &surface, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000 );
  *(int*)gts_bbox_new( klass, &surface, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000 )/*.32*/ = 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010;
  *(int*)gts_bbox_new( klass, &surface, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000 )/*.24*/ = 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010;
  *(int*)gts_bbox_new( klass, &surface, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000 )/*.16*/ = 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010;
  *(int*)gts_bbox_new( klass, &surface, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000 )/*.56*/ = -179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010;
  *(int*)gts_bbox_new( klass, &surface, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000 )/*.48*/ = -179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010;
  *(int*)gts_bbox_new( klass, &surface, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000 )/*.40*/ = -179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010;
  gts_surface_foreach_vertex( surface, &bbox_foreach_vertex, gts_bbox_new( klass, &surface, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000 ) );
  return bbox;
}
}
}
GtsBBox *gts_bbox_bboxes( GtsBBoxClass *klass, GSList *bboxes )
{
  int edx;
  double fp7;
  GtsBBox *bbox;
  GtsBBox *bb;
{
  /* phantom */ int _g_boolean_var_;
  if ( bboxes == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "bboxes != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( klass == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    return 0;
  }
  bb = &bboxes->data[0];
  gts_bbox_new( klass, &bboxes, bb->x1, bb->y1, bb->z1, bb->x2, bb->y2, bb->z2 );
  bboxes = &bboxes->next;
  if ( bboxes->next )
  {
    do
    {
      bb = &bboxes->data[0];
      if ( bb->x1 < bbox->x1 )
        bbox->x1 = bb->x1;
      else
      {
      }
      if ( bb->y1 < bbox->y1 )
        bbox->y1 = bb->y1;
      else
      {
      }
      if ( bb->z1 < bbox->z1 )
        bbox->z1 = bb->z1;
      else
      {
      }
      if ( bbox->x2 < bb->x2 )
        bbox->x2 = bb->x2;
      else
      {
      }
      if ( bbox->y2 < bb->y2 )
        bbox->y2 = bb->y2;
      else
      {
      }
      if ( bbox->z2 < bb->z2 )
        bbox->z2 = bb->z2;
      else
      {
      }
      bboxes = bboxes->next;
    }
    while ( bboxes->next );
  }
  return gts_bbox_new( klass, &bboxes, bb->x1, bb->y1, bb->z1, bb->x2, bb->y2, bb->z2 );
}
}
}
GtsBBox *gts_bbox_points( GtsBBoxClass *klass, GSList *points )
{
  double fp7;
  GtsPoint *p;
  GtsBBox *bbox = 0;
  GSList *i;
  if ( points )
  {
    gts_bbox_new( klass, &points, points[1].next, points[2].next, points[3].next, points[1].next, points[2].next, points[3].next );
    i = points->next;
    if ( points->next )
    {
      do
      {
        p = &i->data[0];
        p->x = i[1].next;
        if ( bbox->x2 < p->x )
          bbox->x2 = p->x;
        else
        if ( p->x < bbox->x1 )
        {
          bbox->x1 = p->x;
          if ( bbox->y2 < p->y )
            bbox->y2 = p->y;
            if ( bbox->z2 < p->z )
              bbox->z2 = p->z;
            else
            {
              if ( p->z < bbox->z1 )
              {
                i = i->next;
                bbox->z1 = p->z;
                if ( i->next == 0 )
                {
                  break;
                }
              }
              else
              {
              }
            }
          else
          {
            if ( p->y < bbox->y1 )
            {
              bbox->y1 = p->y;
              if ( bbox->z2 < p->z )
                bbox->z2 = p->z;
              else
              {
              }
            }
            else
            {
            }
          }
        }
        else
        {
        }
        if ( bbox->y2 < p->y )
          bbox->y2 = p->y;
        else
        {
        }
      }
      while ( i->next );
    }
  }
  return gts_bbox_new( klass, &points, points[1].next, points[2].next, points[3].next, points[1].next, points[2].next, points[3].next );
}
gboolean gts_bboxes_are_overlapping( GtsBBox *bb1, GtsBBox *bb2 )
{
  int eax;
  double fp7;
  if ( bb2 != bb1 )
  {
    if ( bb2->x2 < bb1->x1 || bb1->x2 < bb2->x1 || bb2->y2 < bb1->y1 || bb1->y2 < bb2->y1 || bb2->z2 < bb1->z1 )
    {
      return 0;
    }
    return bb2->z1 <= bb1->z2;
  }
}
gdouble gts_bbox_diagonal2( GtsBBox *bb )
{
  int eax;
  /* phantom */ gdouble x;
  /* phantom */ gdouble y;
  /* phantom */ gdouble z;
{
  /* phantom */ int _g_boolean_var_;
  if ( bb == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "bb != NULL" );
    return 0;
  }
  return 0;
}
}
void gts_bbox_draw( GtsBBox *bb, FILE *fptr )
{
{
  /* phantom */ int _g_boolean_var_;
  if ( bb )
  {
    __fprintf_chk( fptr, 1, "OFF 8 6 12\n" );
    __fprintf_chk( fptr, 1, "%g %g %g\n", bb->x1, bb->y1, bb->z1 );
    __fprintf_chk( fptr, 1, "%g %g %g\n", bb->x2, bb->y1, bb->z1 );
    __fprintf_chk( fptr, 1, "%g %g %g\n", bb->x2, bb->y2, bb->z1 );
    __fprintf_chk( fptr, 1, "%g %g %g\n", bb->x1, bb->y2, bb->z1 );
    __fprintf_chk( fptr, 1, "%g %g %g\n", bb->x1, bb->y1, bb->z2 );
    __fprintf_chk( fptr, 1, "%g %g %g\n", bb->x2, bb->y1, bb->z2 );
    __fprintf_chk( fptr, 1, "%g %g %g\n", bb->x2, bb->y2, bb->z2 );
    __fprintf_chk( fptr, 1, "%g %g %g\n", bb->x1, bb->y2, bb->z2 );
    fwrite( "4 3 2 1 0\n4 4 5 6 7\n4 2 3 7 6\n4 0 1 5 4\n4 0 4 7 3\n4 1 2 6 5\n", 1, 60, fptr );
    return;
  }
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "bb != NULL" );
  return;
}
}
void gts_bbox_point_distance2( GtsBBox *bb, GtsPoint *p, gdouble *min, gdouble *max )
{
  int eax;
  int ecx;
  int edx;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble x1;
  gdouble y1;
  gdouble z1;
  gdouble x2;
  gdouble y2;
  gdouble z2;
  gdouble x;
  gdouble y;
  gdouble z;
  gdouble dmin;
  gdouble dmax;
  gdouble xd1;
  gdouble xd2;
  gdouble yd1;
  gdouble yd2;
  gdouble zd1;
  gdouble zd2;
  /* phantom */ gdouble mx;
  gdouble Mx;
  /* phantom */ gdouble my;
  gdouble My;
  gdouble mz;
  gdouble Mz;
{
  /* phantom */ int _g_boolean_var_;
  if ( bb == 0 )
    min = "bb != NULL";
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
    min = "p != NULL";
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( min == 0 )
    min = "min != NULL";
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( max == 0 )
    min = "max != NULL";
  else
  {
    x1 = bb->x1;
    y1 = bb->y1;
    z1 = bb->z1;
    x2 = bb->x2;
    y2 = bb->y2;
    z2 = bb->z2;
    x = p->x;
    y = p->y;
    z = p->z;
    zd2 = ( y1 - p->y ) * ( y1 - p->y );
    mz = ( p->y - y2 ) * ( p->y - y2 );
    dmax = ( z1 - p->z ) * ( z1 - p->z );
    yd2 = ( p->z - z2 ) * ( p->z - z2 );
    dmin = ( x1 - p->x ) * ( x1 - p->x );
    if ( x < x1 )
    {
      yd2 = mz = yd2;
    }
    else
    {
      dmin = ( p->x - x2 ) * ( p->x - x2 );
      dmin = ( p->x - x2 ) * ( p->x - x2 );
      if ( x2 < ( p->x - x2 ) * ( p->x - x2 ) )
      {
      }
      else
        dmin = 0.000000000000;
    }
    x = zd2;
    if ( y < y1 )
    {
      zd2 = mz = zd2;
    }
    else
    {
      x = mz;
      if ( y2 < mz )
      {
      }
      else
        x = 0.000000000000;
    }
    y1 = dmax;
    if ( z < z1 )
    {
      dmax = mz = dmax;
    }
    else
    {
      y1 = yd2;
      if ( z2 < yd2 )
      {
      }
      else
      {
        y1 = 0.000000000000;
      }
    }
    min[0] = y1 + x + dmin;
    max[0] = ( "huge", 0 );
    return;
  }
}
}
}
  p = &__PRETTY_FUNCTION__[0];
  bb = 0;
}
}
gboolean gts_bbox_is_stabbed( GtsBBox *bb, GtsPoint *p )
{
  int eax;
  int edx;
  double fp7;
{
  /* phantom */ int _g_boolean_var_;
  if ( bb == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "bb != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL" );
    return 0;
  }
  if ( p->x <= bb->x2 )
  {
    if ( bb->y1 <= p->y )
    {
      if ( p->y <= bb->y2 )
      {
        if ( bb->z1 <= p->z )
        {
          return p->z <= *(double*)(bb + 56);
        }
      }
    }
    else
    {
    }
  }
  return 0;
}
}
}
gboolean gts_bbox_overlaps_triangle( GtsBBox *bb, GtsTriangle *t )
{
  int eax;
  int edx;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  double bc[3], bh[3], tv[3][3];
  GtsPoint *p1, *p2, *p3;
{
  /* phantom */ int _g_boolean_var_;
  if ( bb == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "bb != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return 0;
  }
  p1 = &t->e1->segment.v1->p;
  p2 = &t->e1->segment.v2->p;
  if ( t->e2->segment.v1 == t->e1->segment.v1 || p2 == t->e2->segment.v1 )
  {
  }
  tv[0][0] = p1->x;
  tv[0][1] = p1->y;
  tv[0][2] = p1->z;
  tv[1][0] = p2->x;
  tv[1][1] = p2->y;
  tv[1][2] = p2->z;
  tv[2][0] = t->e2->segment.v1->p.x;
  tv[2][1] = t->e2->segment.v1->p.y;
  tv[2][2] = t->e2->segment.v1->p.z;
  bh[0] = ( bb->x2 - bb->x1 ) * 0.500000000000;
  bh[1] = ( bb->y2 - bb->y1 ) * 0.500000000000;
  bh[2] = ( bb->z2 - bb->z1 ) * 0.500000000000;
  bc[0] = ( bb->x2 + 0.500000000000 ) * 0.500000000000;
  bc[1] = ( bb->y2 + bb->y1 ) * 0.500000000000;
  bc[2] = ( bb->y1 + bb->z1 ) * 0.500000000000;
  return triBoxOverlap( bc, bh, tv );
}
}
}
gboolean gts_bbox_overlaps_segment( GtsBBox *bb, GtsSegment *s )
{
  int eax;
  int edx;
  double bc[3], bh[3], tv[3][3];
  GtsPoint *p1, *p2, *p3;
{
  /* phantom */ int _g_boolean_var_;
  if ( bb == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "bb != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
  p1 = &s->v1->p;
  bc[0] = ( bb->x2 + bb->x1 ) * 0.500000000000;
  bh[0] = ( bb->x2 - bb->x1 ) * 0.500000000000;
  bc[1] = ( bb->y2 + bb->y1 ) * 0.500000000000;
  bh[1] = ( bb->y2 - bb->y1 ) * 0.500000000000;
  bc[2] = ( p2[1].y + p2->z ) * 0.500000000000;
  bh[2] = 0.500000000000 * ( p2[1].y - p2->z );
  tv[0][0] = s->v1->p.x;
  tv[0][1] = s->v1->p.y;
  tv[0][2] = s->v1->p.z;
  tv[1][0] = s->v2->p.x;
  tv[1][1] = s->v2->p.y;
  tv[1][2] = s->v2->p.z;
  tv[2][0] = s->v1->p.x;
  tv[2][1] = s->v1->p.y;
  tv[2][2] = s->v1->p.z;
  return triBoxOverlap( bc, bh, tv );
}
}
}
GNode *gts_bb_tree_new( GSList *bboxes )
{
  int edx;
  double fp7;
  GSList *i, *positive, *negative;
  GNode *node;
  GtsBBox *bbox;
  /* phantom */ guint dir;
  guint np;
  guint nn;
  /* phantom */ gdouble *p1, *p2;
  gdouble cut;
{
  /* phantom */ int _g_boolean_var_;
  if ( bboxes == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "bboxes != NULL" );
    node = 0;
    return node;
  }
  if ( bboxes->next == 0 )
  {
  }
  bbox = gts_bbox_bboxes( gts_bbox_class( ), bboxes );
  node = g_node_new( gts_bbox_bboxes( gts_bbox_class( ), bboxes ) );
  if ( bbox->y2 - bbox->y1 < bbox->x2 - bbox->x1 )
  {
    if ( bbox->z2 - bbox->z1 <= 0.000000000000 )
    {
      positive = 0;
      negative = 0;
      nn = 0;
      np = 0;
      cut = *(double*)(negative + 0 + 16) + *(double*)(negative + 0 + 40);
      cut *= 0.500000000000;
      do
      {
        bbox = &i->data[0];
        if ( cut < ( *(double*)(i + 0 + 16) + *(double*)(i + 0 + 40) ) * 0.500000000000 )
        {
          i = i->next;
          np++;
          positive = g_slist_prepend( positive, &bbox );
        }
        else
        {
          i = i->next;
          nn++;
          negative = g_slist_prepend( negative, &bbox );
          if ( i->next )
            continue;
          else
            break;
        }
      }
      while ( i->next );
      if ( positive == 0 )
      {
        GSList *last;
        bboxes = negative;
        ebp_12 = ( nn + -1 ) >> 1;
        ebp_4 = gts_bb_tree_new+1cb;
        positive = last->next;
        last->next = 0;
      }
      else
      if ( negative == 0 )
      {
        GSList *last;
        negative = last->next;
        last->next = 0;
      }
      g_node_prepend( node, gts_bb_tree_new( positive ) );
      g_slist_free( positive );
      g_node_prepend( node, gts_bb_tree_new( negative ) );
      g_slist_free( negative );
      return node;
    }
  }
  else
  if ( bbox->z2 - bbox->z1 <= 0.000000000000 )
    continue;
}
}
void prepend_triangle_bbox( GtsTriangle *t, GSList **bboxes )
{
  bboxes[0] = g_slist_prepend( bboxes[0], gts_bbox_triangle( gts_bbox_class( ), t ) );
  return;
}
GNode *gts_bb_tree_surface( GtsSurface *s )
{
  int eax;
  GSList *bboxes = 0;
  GNode *tree;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    tree = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return tree;
  }
  gts_surface_foreach_face( s, &prepend_triangle_bbox, &bboxes );
  tree = gts_bb_tree_new( bboxes );
  g_slist_free( bboxes );
  return tree;
}
}
GSList *gts_bb_tree_stabbed( GNode *tree, GtsPoint *p )
{
  int edx;
  GSList *list;
  GtsBBox *bb;
  GNode *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( tree == 0 )
  {
    list = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "tree != NULL" );
    return list;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
  {
    list = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL" );
    return list;
  }
  bb = &tree->data[0];
  list = 0;
  if ( gts_bbox_is_stabbed( &tree->data[0], p ) )
  {
    i = tree->children;
    if ( i->children == 0 )
    {
      p = &tree->data[0];
      tree = 0;
    }
    do
    {
      i = i->next;
      list = g_slist_concat( list, gts_bb_tree_stabbed( i, p ) );
    }
    while ( i->next );
  }
  return list;
}
}
}
GSList *gts_bb_tree_overlap( GNode *tree, GtsBBox *bbox )
{
  int edx;
  GSList *list;
  GtsBBox *bb;
  GNode *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( tree == 0 )
  {
    list = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "tree != NULL" );
    return list;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( bbox == 0 )
  {
    list = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "bbox != NULL" );
    return list;
  }
  bb = &tree->data[0];
  list = 0;
  if ( gts_bboxes_are_overlapping( bbox, &tree->data[0] ) )
  {
    i = tree->children;
    if ( i->children == 0 )
    {
      bbox = &tree->data[0];
      tree = 0;
    }
    do
    {
      i = i->next;
      list = g_slist_concat( list, gts_bb_tree_overlap( i, bbox ) );
    }
    while ( i->next );
  }
  return list;
}
}
}
gboolean gts_bb_tree_is_overlapping( GNode *tree, GtsBBox *bbox )
{
  /* phantom */ GtsBBox *bb;
  GNode *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( tree == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "tree != NULL" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( bbox == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "bbox != NULL" );
    return 0;
  }
  if ( gts_bboxes_are_overlapping( bbox, &tree->data[0] ) )
  {
    i = tree->children;
    if ( i->children == 0 )
    {
    }
    do
    {
      if ( gts_bb_tree_is_overlapping( i, bbox ) == 0 )
      {
        i = i->next;
      }
    }
    while ( i->next );
    return 1;
  }
}
  return 0;
}
}
void gts_bb_tree_traverse_overlapping( GNode *tree1, GNode *tree2, GtsBBTreeTraverseFunc func, gpointer data )
{
  int eax;
  int ecx;
  double fp7;
  GtsBBox *bb1, *bb2;
{
  /* phantom */ int _g_boolean_var_;
  if ( tree2 == 0 || tree1 == 0 )
  {
    func = "tree1 != NULL && tree2 != NULL";
    tree2 = &__PRETTY_FUNCTION__[0];
    tree1 = 0;
  }
  bb1 = &tree1->data[0];
  bb2 = &tree2->data[0];
  if ( gts_bboxes_are_overlapping( &tree1->data[0], &tree2->data[0] ) == 0 )
  {
    return;
  }
  if ( tree1->children == 0 )
  {
    if ( tree2->children == 0 )
    {
      func = data;
      tree1 = &tree1->data[0];
      tree2 = &bb2->object.klass->info.name[0];
      ;
    }
  }
  else
  if ( tree2->children == 0 || ( bb2->x2 - bb2->x1 ) * ( bb2->y2 - bb2->y1 ) * ( bb2->z2 - bb2->z1 ) < ( *(double*)(tree1->data[0] + 40) - *(double*)(tree1->data[0] + 16) ) * ( *(double*)(tree1->data[0] + 48) - *(double*)(tree1->data[0] + 24) ) * ( *(double*)(tree1->data[0] + 56) - *(double*)(tree1->data[0] + 32) ) )
  {
    bb2 = &data[0];
    i = &tree1->children;
  {
    do
    {
      GNode *i;
      gts_bb_tree_traverse_overlapping( i, tree2, func, &bb2 );
    }
    while ( i->next == 0 );
    return;
  }
  }
  bb2 = &data[0];
  tree1 = tree1;
  i = tree2->children;
  func = tree1[0].data;
{
  do
  {
    GNode *i;
    gts_bb_tree_traverse_overlapping( tree1, i, func, &bb2 );
  }
  while ( i->next == 0 );
  return;
}
}
}
// Lost vars at line 786 through condition folding
void gts_bb_tree_draw( GNode *tree, guint depth, FILE *fptr )
{
  int edx;
  guint d;
{
  /* phantom */ int _g_boolean_var_;
  if ( tree == 0 )
    fptr = "tree != NULL";
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( fptr == 0 )
    fptr = "fptr != NULL";
  else
  {
    if ( g_node_depth( tree ) != 1 )
    {
      if ( d == depth )
        goto B11;
      else
      {
        if ( 0 && tree->children )
        {
          do
          {
            gts_bb_tree_draw( i, depth, fptr );
          }
          while ( i->next == 0 );
          if ( d != 1 )
          {
            return;
          }
          fptr = "}\n";
          depth = 1;
          tree = &fptr[0]._flags;
        }
      }
    }
    else
    {
      __fprintf_chk( fptr, 1, "{ LIST" );
      if ( depth == d )
      {
      }
      else
      {
      }
    }
B11:;
    gts_bbox_draw( &tree->data[0], fptr );
  }
}
  depth = __PRETTY_FUNCTION__[0];
  tree = 0;
}
}
void bb_tree_free( GNode *tree, gboolean free_leaves )
{
  GNode *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( tree == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "tree != NULL" );
    return;
  }
  if ( free_leaves || tree->children )
  {
    gts_object_destroy( &tree->data[0] );
    i = tree->children;
    if ( i->children )
    {
      do
      {
        bb_tree_free( i, free_leaves );
      }
      while ( i->next == 0 );
    }
  }
  return;
}
}
void gts_bb_tree_destroy( GNode *tree, gboolean free_leaves )
{
  int eax;
  int edx;
{
  /* phantom */ int _g_boolean_var_;
  if ( tree == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "tree != NULL" );
    return;
  }
  bb_tree_free( tree, free_leaves );
}
}
gdouble bb_tree_min_max( GNode *tree, GtsPoint *p, gdouble min_max, GSList **list )
{
  int eax;
  int ecx;
  int edx;
  int edi;
  double fp0;
  double fp5;
  double fp7;
  /* phantom */ GNode *tree1, *tree2;
  gdouble min1;
  gdouble max1;
  gdouble min2;
  gdouble max2;
  if ( tree->children == 0 )
  {
    list = g_slist_prepend( list[0], &tree );
  }
  else
  {
    gts_bbox_point_distance2( (int)( &tree->children ), &p->object.klass->info.name[0], &min1, &max1 );
    tree2 = &tree->children;
    gts_bbox_point_distance2( &tree2->data[0], p, &min2, &max2 );
    if ( min2 <= min1 )
    {
      if ( min_max < max1 ? min_max : max1 < max2 ? min_max < max1 ? min_max : max1 : max2 <= min2 )
      {
        bb_tree_min_max( tree2, p, list, min_max < max1 ? min_max : max1 < max2 ? min_max < max1 ? &min_max & 0xFFFFFFFF : &max1 & 0xFFFFFFFF : &max2 & 0xFFFFFFFF );
        if ( 0.000000000000 <= min1 )
        {
          bb_tree_min_max( tree->children, p, list, 0.000000000000 );
        }
      }
    }
    else
    if ( min_max < max1 ? min_max : max1 < max2 ? min_max < max1 ? min_max : max1 : max2 <= min_max < max1 ? min_max : max1 < max2 ? min_max < max1 ? min_max : max1 : max2 )
    {
      bb_tree_min_max( tree->children, p, list, min_max < max1 ? min_max : max1 < max2 ? min_max < max1 ? &min_max & 0xFFFFFFFF : &max1 & 0xFFFFFFFF : &max2 & 0xFFFFFFFF );
      if ( 0.000000000000 <= min2 )
      {
        bb_tree_min_max( tree2, p, list, 0.000000000000 );
      }
    }
  }
  return 0;
}
GSList *gts_bb_tree_point_closest_bboxes( GNode *tree, GtsPoint *p )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  gdouble min;
  gdouble min_max;
  GSList *list = 0, *i, *prev;
{
  /* phantom */ int _g_boolean_var_;
  if ( tree == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "tree != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL" );
    return 0;
  }
  gts_bbox_point_distance2( &tree->data[0], p, &min, &min_max );
  bb_tree_min_max( tree, p, list, &min_max & 0xFFFFFFFF );
  i = list;
  min_max = 0.000000000000;
  if ( list )
  {
    prev = 0;
    do
    {
      next = i->next;
      gts_bbox_point_distance2( &i->data[0], p, &min, &max );
      if ( min_max < min )
      {
        if ( prev == 0 )
          list = next;
        else
          prev->next = next;
        i = next;
        g_slist_free_1( i );
      }
      else
      {
      {
        GSList *next;
        gdouble min;
        gdouble max;
        prev = i;
        i = next;
        if ( 1 )
          break;
      }
      }
    }
    while ( next == 0 );
    return list;
  }
}
}
}
gdouble gts_bb_tree_point_distance( GNode *tree, GtsPoint *p, GtsBBoxDistFunc distance, GtsBBox **bbox )
{
  int eax;
  int edx;
  double fp0;
  double fp7;
  GSList *list, *i;
  gdouble dmin;
{
  /* phantom */ int _g_boolean_var_;
  if ( tree == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "tree != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( distance == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "distance != NULL" );
    return 0;
  }
  list = gts_bb_tree_point_closest_bboxes( tree, p );
  if ( list )
  {
    i = list;
  {
    do
    {
      gdouble d;
      distance( p, *(int*)(i[1].next) );
      if ( abs( 0.000000000000 ) < abs( ebp_40 ) )
      {
        if ( bbox )
          bbox[0] = &i->data[0];
      }
      else
      {
      }
      i = i->next;
    }
    while ( i->next == 0 );
  }
  }
  else
  {
  }
  g_slist_free( list );
  return 0;
}
}
}
}
GtsPoint *gts_bb_tree_point_closest( GNode *tree, GtsPoint *p, GtsBBoxClosestFunc closest, gdouble *distance )
{
  int eax;
  double fp0;
  GSList *list, *i;
  gdouble dmin;
  GtsPoint *np;
{
  /* phantom */ int _g_boolean_var_;
  if ( tree == 0 )
  {
    np = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "tree != NULL" );
    return np;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
  {
    np = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL" );
    return np;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( closest == 0 )
  {
    np = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "closest != NULL" );
    return np;
  }
  list = gts_bb_tree_point_closest_bboxes( tree, p );
  if ( list )
  {
    np = 0;
    i = list;
    dmin = 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010;
    do
    {
      gts_point_distance2( closest( p, *(int*)(i[1].next) ), p );
      if ( dmin <= 0.000000000000 )
      {
        gts_object_destroy( &tp[0].object );
        i = i->next;
        if ( i->next )
          continue;
        else
          break;
      }
      else
      {
        GtsPoint *tp;
        gdouble d;
        if ( np == 0 )
        {
          np = tp;
          dmin = 0.000000000000;
        }
        else
        {
          gts_object_destroy( &np[0].object );
          tp = (GtsPoint*)gts_bb_tree_point_closest_bboxes( tree, p );
          np = (GtsPoint*)gts_bb_tree_point_closest_bboxes( tree, p );
          dmin = 0.000000000000;
        }
        i = i->next;
      }
    }
    while ( i->next == 0 );
  }
  else
  {
    np = 0;
    dmin = 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010;
  }
  g_slist_free( list );
  if ( distance )
  {
    distance[0] = dmin;
  }
  return np;
}
}
}
}
void gts_bb_tree_triangle_distance( GNode *tree, GtsTriangle *t, GtsBBoxDistFunc distance, gdouble delta, GtsRange *range )
{
  int eax;
  double fp1;
  double fp2;
  double fp6;
  double fp7;
  GtsPoint *p1, *p2, *p3, *p;
  /* phantom */ GtsVector p1p2;
  /* phantom */ GtsVector p1p3;
  /* phantom */ gdouble l1;
  gdouble t1;
  gdouble dt1;
  guint i;
  guint n1;
{
  /* phantom */ int _g_boolean_var_;
  if ( tree == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "tree != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( distance == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "distance != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( delta <= 0.000000000000 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "delta &gt; 0." );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( range == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "range != NULL" );
    return;
  }
  gts_triangle_vertices( t, &p1[0].object.klass[0].info.name[0], &p2[0].object.klass[0].info.name[0], &p3[0].object.klass[0].info.name[0] );
  gts_range_init( range );
  gts_object_new( (GtsObjectClass*)gts_point_class( ) );
{
  gdouble t2;
  /* phantom */ gdouble x;
  /* phantom */ gdouble y;
  /* phantom */ gdouble z;
  /* phantom */ gdouble l2;
  guint j;
  guint n2;
  gdouble dt2;
  i = 0;
  n1 = (long long)( ( sqrt( ( ( p2->x - p1->x ) * ( p2->x - p1->x ) ) + ( ( p2->y - p1->y ) * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p2->z - p1->z ) ) ) / delta ) + 1.000000000000 );
  dt1 = 1.000000000000 / (double)( (long long)( (long long)( ( sqrt( ( ( p2->x - p1->x ) * ( p2->x - p1->x ) ) + ( ( p2->y - p1->y ) * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p2->z - p1->z ) ) ) / delta ) + 1.000000000000 ) ) );
  t1 = 0.000000000000;
  while ( 1 )
  {
    n2 = 0;
    dt2 = ( 1.000000000000 - t1 ) / (double)( (long long)( (long long)( ( sqrt( ( ( ( p3->x - p1->x ) * ( 1.000000000000 - t1 ) ) * ( ( p3->x - p1->x ) * ( 1.000000000000 - t1 ) ) ) + ( ( ( p3->y - p1->y ) * ( 1.000000000000 - t1 ) ) * ( ( p3->y - p1->y ) * ( 1.000000000000 - t1 ) ) ) + ( ( ( p3->z - p1->z ) * ( 1.000000000000 - t1 ) ) * ( ( p3->z - p1->z ) * ( 1.000000000000 - t1 ) ) ) ) / delta ) + 1.000000000000 ) ) );
    j = 0;
    do
    {
      j++;
      *(int*)gts_object_new( (GtsObjectClass*)gts_point_class( ) )/*.12*/ = ( p2->x * t1 ) + ( p1->x * ( 1.000000000000 - t1 ) ) + ( ( p3->x - p1->x ) * ( ( p2->z - p1->z ) + dt2 ) );
      *(int*)gts_object_new( (GtsObjectClass*)gts_point_class( ) )/*.20*/ = ( p1->y * ( 1.000000000000 - t1 ) ) + ( p2->y * t1 ) + ( ( p3->y - p1->y ) * ( ( p2->z - p1->z ) + dt2 ) );
      *(int*)gts_object_new( (GtsObjectClass*)gts_point_class( ) )/*.28*/ = ( p2->z * t1 ) + ( p1->z * ( 1.000000000000 - t1 ) ) + ( ( p3->z - p1->z ) * ( ( p2->z - p1->z ) + dt2 ) );
      gts_bb_tree_point_distance( tree, (GtsPoint*)gts_object_new( (GtsObjectClass*)gts_point_class( ) ), distance, 0 );
      gts_range_add_value( range, 0.000000000000 );
    }
    while ( n2 < j );
    i++;
    if ( (long long)( ( sqrt( ( ( p2->x - p1->x ) * ( p2->x - p1->x ) ) + ( ( p2->y - p1->y ) * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p2->z - p1->z ) ) ) / delta ) + 1.000000000000 ) < i )
    {
      range = range;
      gts_object_destroy( gts_object_new( (GtsObjectClass*)gts_point_class( ) ) );
      gts_range_update( range );
      return;
    }
    t1 += dt1;
  }
}
}
}
}
}
}
}
void gts_bb_tree_segment_distance( GNode *tree, GtsSegment *s, gdouble (*distance)( GtsPoint *, gpointer  ), gdouble delta, GtsRange *range )
{
  int eax;
  int edx;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  GtsPoint *p1, *p2, *p;
  /* phantom */ GtsVector p1p2;
  /* phantom */ gdouble l;
  gdouble t;
  gdouble dt;
  guint i;
  guint n;
{
  /* phantom */ int _g_boolean_var_;
  if ( tree )
  {
    /* phantom */ int _g_boolean_var_;
    if ( s )
    {
      /* phantom */ int _g_boolean_var_;
      if ( distance )
      {
        /* phantom */ int _g_boolean_var_;
        if ( delta <= 0.000000000000 )
          distance = "delta &gt; 0.";
        else
      {
        /* phantom */ int _g_boolean_var_;
        if ( range )
        {
          p1 = &p2->x & 0xFFFFFFFF;
          p2 = &p2->x << 32;
          gts_range_init( range );
          i = 0;
          dt = 1.000000000000 / (double)( (long long)( (long long)( ( sqrt( ( ( p1 - p1->x ) * ( p1 - p1->x ) ) + ( ( p2->y - p1->y ) * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p2->z - p1->z ) ) ) / delta ) + 1.000000000000 ) ) );
          t = 0.000000000000;
          p1 = &p1->object.klass->info.name[0];
          do
          {
            i++;
            *(int*)gts_object_new( (GtsObjectClass*)gts_point_class( ) )/*.12*/ = p1->x + ( ( p1 - p1->x ) * t );
            *(int*)gts_object_new( (GtsObjectClass*)gts_point_class( ) )/*.20*/ = p1->y + ( ( p2->y - p1->y ) * t );
            *(int*)gts_object_new( (GtsObjectClass*)gts_point_class( ) )/*.28*/ = p1->z + ( ( p2->z - p1->z ) * t );
            gts_bb_tree_point_distance( tree, (GtsPoint*)gts_object_new( (GtsObjectClass*)gts_point_class( ) ), distance, 0 );
            gts_range_add_value( range, 1.000000000000 );
            t += dt;
          }
          while ( (long long)( ( sqrt( ( ( p1 - p1->x ) * ( p1 - p1->x ) ) + ( ( p2->y - p1->y ) * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p2->z - p1->z ) ) ) / delta ) + 1.000000000000 ) < i );
          range = range;
          gts_object_destroy( gts_object_new( (GtsObjectClass*)gts_point_class( ) ) );
          tree = &range[0].min;
        }
        else
          distance = "range != NULL";
      }
      }
      else
        distance = "distance != NULL";
    }
    else
      distance = "s != NULL";
  }
  else
    distance = "tree != NULL";
  s = &__PRETTY_FUNCTION__[0];
  tree = 0;
}
}
void surface_distance_foreach_triangle( GtsTriangle *t, gpointer *data )
{
  int ebx;
  int esi;
  double fp7;
  /* phantom */ gdouble *delta;
  GtsRange *range = &data[2][0];
  gdouble *total_area;
  gdouble area;
  GtsRange range_triangle;
  gts_bb_tree_triangle_distance( &data[0][0], t, data[4], *(double*)(data[1]), &range_triangle );
  if ( range_triangle.min < range )
    range = &range_triangle;
  else
  {
  }
  if ( range->max < range_triangle.max )
    range->max = range_triangle.max;
  else
  {
  }
  range->n += range_triangle.n;
  gts_triangle_area( t );
  range->sum2 = range->sum2;
  return;
}
void gts_bb_tree_surface_distance( GNode *tree, GtsSurface *s, GtsBBoxDistFunc distance, gdouble delta, GtsRange *range )
{
  int eax;
  double fp0;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gpointer data[5];
  gdouble total_area;
{
  /* phantom */ int _g_boolean_var_;
  total_area = 0.000000000000;
  if ( tree == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "tree != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( total_area < delta )
  {
    if ( 1.000000000000 <= delta )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "delta &gt; 0. && delta &lt; 1." );
      return;
    }
  {
    /* phantom */ int _g_boolean_var_;
    if ( range == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "range != NULL" );
      return;
    }
    gts_range_init( range );
    gts_bbox_diagonal2( &tree->data[0] );
    if ( sqrt( 0.000000000000 ) == sqrt( 0.000000000000 ) )
    {
      data[0] = (void*)tree;
      data[1] = &delta;
      data[3] = &total_area;
      data[2] = (void*)range;
      delta *= sqrt( 0.000000000000 ) == sqrt( 0.000000000000 ) ? sqrt( 0.000000000000 ) : 0.000000000000;
      data[4] = (void*)distance;
      gts_surface_foreach_face( s, &surface_distance_foreach_triangle, data[0] );
      if ( total_area <= 0.000000000000 )
      {
        range->stddev = 0.000000000000;
        range->mean = 0.000000000000;
        range->max = 0.000000000000;
        range = 0.000000000000;
        return;
      }
      if ( 0.000000000000 < range->sum2 - ( 0.000000000000 / sqrt( 0.000000000000 ) ) )
      {
        range->stddev = 0.000000000000;
      }
      else
      {
        if ( sqrt( 0.000000000000 / sqrt( 0.000000000000 ) ) == sqrt( 0.000000000000 / sqrt( 0.000000000000 ) ) )
        {
          if ( sqrt( fp5 / fp6 ) != sqrt( fp5 / fp6 ) )
          {
          }
          else
          {
            range->stddev = sqrt( 0.000000000000 / ( 0.000000000000 / sqrt( 0.000000000000 ) ) );
          }
        }
        else
        {
        }
        sqrt( 0.000000000000 / sqrt( 0.000000000000 ) );
        range->stddev = sqrt( 0.000000000000 / ( 0.000000000000 / sqrt( 0.000000000000 ) ) );
      }
      range->mean = 0.000000000000 / sqrt( 0.000000000000 );
      return;
    }
    else
    {
    }
    sqrt( 0.000000000000 );
    data[0] = (void*)tree;
    data[1] = &delta;
    data[3] = &total_area;
    data[2] = (void*)range;
    delta *= sqrt( 0.000000000000 ) == sqrt( 0.000000000000 ) ? sqrt( 0.000000000000 ) : 0.000000000000;
    data[4] = (void*)distance;
    gts_surface_foreach_face( s, &surface_distance_foreach_triangle, data[0] );
  }
  }
  else
  {
  }
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "delta &gt; 0. && delta &lt; 1." );
  return;
}
}
}
}
void surface_distance_foreach_boundary( GtsEdge *e, gpointer *data )
{
  int edx;
  int ebx;
  double fp7;
  /* phantom */ gdouble *delta;
  /* phantom */ GtsRange *range;
  /* phantom */ gdouble *total_length;
  gdouble length;
  GtsRange range_edge;
  if ( gts_edge_is_boundary( e, &data[1][0] ) )
  {
    /* phantom */ GtsSegment *s;
    gts_bb_tree_segment_distance( &data[0][0], &e[0].segment, ((gdouble)( GtsPoint *, gpointer  )*)data[4], *(double*)(data[1]), &range_edge );
    if ( range_edge.min < *(double*)(data[2]) )
      *(double*)(data[2]) = range_edge.min;
    else
    {
    }
    if ( range_edge.max <= data[2][2] )
    {
    }
    else
      data[2][2] = range_edge.max;
    data[2][12] += (int)range_edge.n;
    gts_point_distance( (int)( &e->segment.v1->p ), (int)( &e->segment.v2->p ) );
  }
  return;
}
void gts_bb_tree_surface_boundary_distance( GNode *tree, GtsSurface *s, gdouble (*distance)( GtsPoint *, gpointer  ), gdouble delta, GtsRange *range )
{
  int eax;
  double fp0;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gpointer data[5];
  gdouble total_length;
{
  /* phantom */ int _g_boolean_var_;
  total_length = 0.000000000000;
  if ( tree == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "tree != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( total_length < delta )
  {
    if ( 1.000000000000 <= delta )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "delta &gt; 0. && delta &lt; 1." );
      return;
    }
  {
    /* phantom */ int _g_boolean_var_;
    if ( range == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "range != NULL" );
      return;
    }
    gts_range_init( range );
    gts_bbox_diagonal2( &tree->data[0] );
    if ( sqrt( 0.000000000000 ) == sqrt( 0.000000000000 ) )
    {
      data[0] = (void*)tree;
      data[1] = &delta;
      data[3] = &total_length;
      data[2] = (void*)range;
      delta *= sqrt( 0.000000000000 ) == sqrt( 0.000000000000 ) ? sqrt( 0.000000000000 ) : 0.000000000000;
      data[4] = (void*)distance;
      gts_surface_foreach_edge( s, &surface_distance_foreach_boundary, data[0] );
      if ( total_length <= 0.000000000000 )
      {
        range->stddev = 0.000000000000;
        range->mean = 0.000000000000;
        range->max = 0.000000000000;
        range = 0.000000000000;
        return;
      }
      if ( 0.000000000000 < range->sum2 - ( 0.000000000000 / sqrt( 0.000000000000 ) ) )
      {
        range->stddev = 0.000000000000;
      }
      else
      {
        if ( sqrt( 0.000000000000 / sqrt( 0.000000000000 ) ) == sqrt( 0.000000000000 / sqrt( 0.000000000000 ) ) )
        {
          if ( sqrt( fp5 / fp6 ) != sqrt( fp5 / fp6 ) )
          {
          }
          else
          {
            range->stddev = sqrt( 0.000000000000 / ( 0.000000000000 / sqrt( 0.000000000000 ) ) );
          }
        }
        else
        {
        }
        sqrt( 0.000000000000 / sqrt( 0.000000000000 ) );
        range->stddev = sqrt( 0.000000000000 / ( 0.000000000000 / sqrt( 0.000000000000 ) ) );
      }
      range->mean = 0.000000000000 / sqrt( 0.000000000000 );
      return;
    }
    else
    {
    }
    sqrt( 0.000000000000 );
    data[0] = (void*)tree;
    data[1] = &delta;
    data[3] = &total_length;
    data[2] = (void*)range;
    delta *= sqrt( 0.000000000000 ) == sqrt( 0.000000000000 ) ? sqrt( 0.000000000000 ) : 0.000000000000;
    data[4] = (void*)distance;
    gts_surface_foreach_edge( s, &surface_distance_foreach_boundary, data[0] );
  }
  }
  else
  {
  }
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "delta &gt; 0. && delta &lt; 1." );
  return;
}
}
}
}
#if 0
#endif
