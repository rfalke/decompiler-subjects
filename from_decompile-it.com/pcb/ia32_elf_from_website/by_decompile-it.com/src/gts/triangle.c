#include "triangle.c.h"
void triangle_destroy( GtsObject *object )
{
  int ebx;
  int esi;
  int edi;
  /* phantom */ GtsTriangle *triangle;
  GtsEdge *e1 = &object[1].klass->info.name[0];
  GtsEdge *e2 = &object[1].reserved[0];
  GtsEdge *e3 = &object[1].flags;
  object[1].klass->info.name[20] = g_slist_remove( e1->triangles, &object );
  if ( ( ( *(char*)(object[1].klass + 8) & 1 ) & 255 ) == 0 && gts_allow_floating_edges == 0 && &e1->triangles == 0 )
    gts_object_destroy( &e1[0].segment.object );
  e2->triangles = g_slist_remove( e2->triangles, &object );
  if ( ( ( e2->segment.object.flags/*.1_1of4*/ & 1 ) & 255 ) == 0 && gts_allow_floating_edges == 0 && &e2->triangles == 0 )
    gts_object_destroy( &e2[0].segment.object );
  e3->triangles = g_slist_remove( e3->triangles, &object );
  if ( ( ( e3->segment.object.flags/*.1_1of4*/ & 1 ) & 255 ) == 0 && gts_allow_floating_edges == 0 && &e3->triangles == 0 )
    gts_object_destroy( &e3[0].segment.object );
  ;
}
void triangle_class_init( GtsObjectClass *klass )
{
  klass->destroy = triangle_destroy;
  return;
}
void triangle_init( GtsTriangle *triangle )
{
  triangle->e3 = 0;
  triangle->e2 = 0;
  triangle->e1 = 0;
  return;
}
GtsTriangleClass *gts_triangle_class( void )
{
  int eax;
  int edx;
  int edi;
  static GtsTriangleClass *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo triangle_info = { };
    triangle_info.name[0] = 'G';
    *(int*)&triangle_info.name[4] = 0x6e616972;
    *(int*)&triangle_info.name[8] = 0x656c67;
    do
    {
      *(int*)&triangle_info.name[11] = 0;
    }
    while ( klass + 4 + 4 < 28 );
    triangle_info.object_size = 24;
    triangle_info.class_size = 92;
    triangle_info.class_init_func = &triangle_class_init;
    triangle_info.object_init_func = &triangle_init;
    klass = gts_object_class_new( gts_object_class( ), &triangle_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
void gts_triangle_set( GtsTriangle *triangle, GtsEdge *e1, GtsEdge *e2, GtsEdge *e3 )
{
  int ecx;
  int edx;
{
  /* phantom */ int _g_boolean_var_;
  if ( e1 == 0 )
    e2 = "e1 != NULL";
    e1 = &__PRETTY_FUNCTION__[0];
    triangle = 0;
  else
  {
    /* phantom */ int _g_boolean_var_;
    if ( e2 == 0 )
      e2 = "e2 != NULL";
    else
    {
      /* phantom */ int _g_boolean_var_;
      if ( e3 == 0 )
        e2 = "e3 != NULL";
      else
      {
        /* phantom */ int _g_boolean_var_;
        if ( e3 == e1 || e2 == e1 || e3 == e2 )
          e2 = "e1 != e2 && e1 != e3 && e2 != e3";
        else
        {
          triangle->e1 = e1;
          triangle->e2 = e2;
          triangle->e3 = e3;
          if ( e2->segment.v1 == e1->segment.v1 )
          {
            /* phantom */ int _g_boolean_var_;
            if ( e1->segment.v2 != e3->segment.v1 )
            {
            }
            else
            if ( e3->segment.v2 == e2->segment.v2 )
            {
            }
            if ( e2->segment.v2 != e3->segment.v1 || e3->segment.v2 != e1->segment.v2 )
              e2 = "gts_segment_connect (GTS_SEGMENT (e3), GTS_SEGMENT (e1)-&gt;v2, GTS_SEGMENT (e2)-&gt;v2)";
            else
            {
            }
          }
          else
          {
            if ( e2->segment.v1 == e1->segment.v2 )
            {
              if ( e3->segment.v1 != e1->segment.v1 )
              {
              }
              else
            {
              /* phantom */ int _g_boolean_var_;
              if ( e3->segment.v2 == e2->segment.v2 )
              {
              }
            }
              if ( e2->segment.v2 != e3->segment.v1 || e3->segment.v2 != e1->segment.v1 )
                e2 = "gts_segment_connect (GTS_SEGMENT (e3), GTS_SEGMENT (e1)-&gt;v1, GTS_SEGMENT (e2)-&gt;v2)";
              else
              {
              }
            }
            else
            {
              if ( e2->segment.v2 == e1->segment.v2 )
              {
                if ( e3->segment.v1 != e1->segment.v1 )
                {
                  if ( e2->segment.v1 == e3->segment.v1 && e1->segment.v1 == e3->segment.v2 )
                  {
                  }
                }
                else
              {
                /* phantom */ int _g_boolean_var_;
                if ( e2->segment.v1 == e3->segment.v2 )
                {
                }
              }
                e2 = "gts_segment_connect (GTS_SEGMENT (e3), GTS_SEGMENT (e1)-&gt;v1, GTS_SEGMENT (e2)-&gt;v1)";
              }
              else
              {
                if ( e1->segment.v1 == e2->segment.v2 )
                {
                  /* phantom */ int _g_boolean_var_;
                  if ( e3->segment.v1 == e1->segment.v2 )
                  {
                    if ( e2->segment.v1 == e3->segment.v2 )
                    {
                      e1->triangles = g_slist_prepend( e1->triangles, &triangle );
                      e2->triangles = g_slist_prepend( e2->triangles, &triangle );
                      e3->triangles = g_slist_prepend( e3->triangles, &triangle );
                      return;
                    }
                    e2 = "gts_segment_connect (GTS_SEGMENT (e3), GTS_SEGMENT (e1)-&gt;v2, GTS_SEGMENT (e2)-&gt;v1)";
                  }
                }
                else
                  g_assertion_message( 0, "../../src/gts/triangle.c", 125, __PRETTY_FUNCTION__, 0 );
                if ( e2->segment.v1 == e3->segment.v1 && e3->segment.v2 == e1->segment.v2 )
                {
                  e1->triangles = g_slist_prepend( e1->triangles, &triangle );
                  e2->triangles = g_slist_prepend( e2->triangles, &triangle );
                  e3->triangles = g_slist_prepend( e3->triangles, &triangle );
                  return;
                }
                e2 = "gts_segment_connect (GTS_SEGMENT (e3), GTS_SEGMENT (e1)-&gt;v2, GTS_SEGMENT (e2)-&gt;v1)";
              }
            }
          }
        }
      }
    }
  }
}
}
GtsTriangle *gts_triangle_new( GtsTriangleClass *klass, GtsEdge *e1, GtsEdge *e2, GtsEdge *e3 )
{
  /* phantom */ GtsTriangle *t;
  gts_triangle_set( (GtsTriangle*)gts_object_new( (int)( &klass->parent_class ) ), e1, e2, e3 );
  return *ebp_24;
}
GtsVertex *gts_triangle_vertex_opposite( GtsTriangle *t, GtsEdge *e )
{
  int eax;
  int edx;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( e == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e != NULL" );
    return 0;
  }
  if ( t->e1 == e )
  {
    GtsVertex *v = &v->p.x << 32;
    if ( v->p.x << 32 == t->e1->segment.v1 || v == t->e1->segment.v2 )
    {
      v = &t->e2->segment.v2;
    }
  }
  else
  if ( t->e2 == e )
  {
    GtsVertex *v = &t->e1->segment.v1;
    if ( t->e2->segment.v1 == t->e1->segment.v1 || v == t->e2->segment.v2 )
    {
    }
  }
  else
  {
    if ( t->e3 == e )
    {
      GtsVertex *v = &t->e2->segment.v1;
      if ( t->e3->segment.v1 == t->e2->segment.v1 )
      {
        return &t->e2->segment.v2;
      }
    }
    else
      g_assertion_message( 0, "../../src/gts/triangle.c", 186, __PRETTY_FUNCTION__, 0 );
    if ( v == t->e3->segment.v2 )
    {
      return &t->e2->segment.v2;
    }
  }
  return *(int*)(ecx + 12);
}
}
}
GtsEdge *gts_triangle_edge_opposite( GtsTriangle *t, GtsVertex *v )
{
  int eax;
  int ecx;
  int edx;
  /* phantom */ GtsSegment *s1, *s2, *s3;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( v == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v != NULL" );
    return 0;
  }
  if ( t->e1->segment.v1 != v && t->e1->segment.v2 != v )
  {
    if ( t->e2->segment.v1 != v && t->e1->segment.v2 != v )
    {
      return 0;
    }
  {
    /* phantom */ int _g_boolean_var_;
    return t->e1;
  }
  }
  else
  if ( ( v == t->e2->segment.v1 || v == t->e2->segment.v2 ) && ( t->e3->segment.v1 == v || v == t->e3->segment.v2 ) )
    g_assertion_message_expr( 0, "../../src/gts/triangle.c", 215, __PRETTY_FUNCTION__, "s3-&gt;v1 != v && s3-&gt;v2 != v" );
}
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
}
}
gdouble gts_triangles_angle( GtsTriangle *t1, GtsTriangle *t2 )
{
  int eax;
  double fp7;
  gdouble nx1;
  gdouble ny1;
  gdouble nz1;
  gdouble nx2;
  gdouble ny2;
  gdouble nz2;
  /* phantom */ gdouble pvx;
  /* phantom */ gdouble pvy;
  /* phantom */ gdouble pvz;
  gdouble theta;
{
  /* phantom */ int _g_boolean_var_;
  if ( t2 == 0 || t1 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t1 != NULL && t2 != NULL" );
  }
  else
  {
    gts_triangle_normal( t1, &nx1, &ny1, &nz1 );
    gts_triangle_normal( t2, &nx2, &ny2, &nz2 );
    if ( atan2( sqrt( ( ( ( nz2 * ny1 ) - ( nz1 * ny2 ) ) * ( ( nz2 * ny1 ) - ( nz1 * ny2 ) ) ) + ( ( ( nz1 * nx2 ) - ( nz2 * nx1 ) ) * ( ( nz1 * nx2 ) - ( nz2 * nx1 ) ) ) + ( ( ( ny2 * nx1 ) - ( ny1 * nx2 ) ) * ( ( ny2 * nx1 ) - ( ny1 * nx2 ) ) ) ), ( ny2 * ny1 ) + ( nx2 * nx1 ) + ( nz2 * nz1 ) ) - 3.141592653590 < -3.141592653590 )
    {
      return 0;
    }
  }
  return 0;
}
}
gboolean gts_triangles_are_compatible( GtsTriangle *t1, GtsTriangle *t2, GtsEdge *e )
{
  int eax;
  int ecx;
  int edx;
  GtsEdge *e1, *e2;
{
  /* phantom */ int _g_boolean_var_;
  if ( t1 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t1 != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t2 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t2 != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( e == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e != NULL" );
    return 0;
  }
  e1 = t1->e1;
  if ( t1->e1 == e )
    e1 = t1->e2;
  else
  if ( t1->e2 == e )
    e1 = t1->e3;
  else
  if ( t1->e3 != e )
    g_assertion_message( 0, "../../src/gts/triangle.c", 273, __PRETTY_FUNCTION__, 0 );
    g_assertion_message( 0, "../../src/gts/triangle.c", 278, __PRETTY_FUNCTION__, 0 );
  e2 = t2->e1;
  if ( t2->e1 == e )
  {
    e2 = t2->e2;
    return e2->segment.v2->p.x << 32 == e || e1->segment.v2 == t2 ? 0 : 0 != e2;
  }
  else
  {
    if ( t2->e2 == e )
      e2 = t2->e3;
    else
    if ( t2->e3 != e )
    {
      g_assertion_message( 0, "../../src/gts/triangle.c", 278, __PRETTY_FUNCTION__, 0 );
    }
    return e2->segment.v2->p.x << 32 == e || e1->segment.v2 == t2 ? 0 : 0 != e2;
  }
  return e2->segment.v2->p.x << 32 == e || e1->segment.v2 == t2 ? 0 : 0 != e2;
}
}
}
}
gdouble gts_triangle_area( GtsTriangle *t )
{
  int eax;
  gdouble x;
  gdouble y;
  gdouble z;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return 0;
  }
  gts_triangle_normal( t, &x, &y, &z );
  return 0;
}
}
gdouble gts_triangle_perimeter( GtsTriangle *t )
{
  int eax;
  GtsVertex *v;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return 0;
  }
  v = &t->e2->segment.v1;
  if ( t->e2->segment.v1 != t->e1->segment.v1 )
  {
    if ( v == t->e1->segment.v2 )
      goto B7;
    else
    {
      gts_point_distance( &t->e1->segment.v1->p, &t->e1->segment.object.klass->info.name[0] );
      gts_point_distance( &t->e1->segment.v1->p, &v[0].p );
      gts_point_distance( &t->e1->segment.v2->p, &v[0].p );
      return 0;
    }
  }
  else
  {
  }
B7:;
  v = &t->e2->segment.v2;
  gts_point_distance( &t->e1->segment.v1->p, &t->e1->segment.object.klass->info.name[0] );
  gts_point_distance( &t->e1->segment.v1->p, &v[0].p );
  gts_point_distance( &t->e1->segment.v2->p, &v[0].p );
  return 0;
}
}
gdouble gts_triangle_quality( GtsTriangle *t )
{
  double fp0;
  double fp1;
  double fp6;
  double fp7;
  gdouble perimeter;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return 0;
  }
  gts_triangle_perimeter( t );
  if ( 0.000000000000 <= 0.000000000000 )
  {
    return 1;
  }
  gts_triangle_area( t );
  if ( sqrt( 0.000000000000 ) == sqrt( 0.000000000000 ) )
  {
    return 0;
  }
  else
  {
  }
  *(double*)(sqrt( 0.000000000000 )) = ( sqrt( 0.000000000000 ) * 4.559014113900 ) / 0.000000000000;
  return 0;
}
}
void gts_triangle_normal( GtsTriangle *t, gdouble *x, gdouble *y, gdouble *z )
{
  int eax;
  int edx;
  GtsVertex *v1, *v2, *v3;
  /* phantom */ GtsPoint *p1, *p2, *p3;
  gdouble x1;
  gdouble y1;
  gdouble z1;
  gdouble x2;
  gdouble y2;
  gdouble z2;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    y = "t != NULL";
    x = __PRETTY_FUNCTION__;
    t = 0;
  }
  v1 = &t->e1->segment.v1;
  v2 = &t->e2->segment.v1;
  if ( t->e2->segment.v1 == t->e1->segment.v1 )
  {
    v2 = &t->e2->segment.v2;
    v3 = &t->e1->segment.v2;
  }
  else
  {
    v3 = &t->e1->segment.v2;
    if ( t->e2->segment.v2 != t->e1->segment.v2 )
    {
      if ( t->e2->segment.v2 != v1 )
      {
        if ( v3 != v2 )
        {
          __fprintf_chk( stderr, 1, "t: %p t-&gt;e1: %p t-&gt;e2: %p t-&gt;e3: %p t-&gt;e1-&gt;v1: %p t-&gt;e1-&gt;v2: %p t-&gt;e2-&gt;v1: %p t-&gt;e2-&gt;v2: %p t-&gt;e3-&gt;v1: %p t-&gt;e3-&gt;v2: %p\n", t, t->e1, t->e2, t->e3, v1, v3, v2, &t->e2->segment.v2, &t->e3->segment.v1, &t->e3->segment.v2 );
          g_assertion_message( 0, "../../src/gts/triangle.c", 399, __PRETTY_FUNCTION__, 0 );
        }
        v3 = &t->e2->segment.v2;
      }
    }
    else
    {
      v3 = v2 = v3;
    }
  }
  x[0] = ( ( v2->p.y - v1->p.y ) * ( t->e2->segment.v2->p.z - v1->p.z ) ) - ( ( v2->p.z - v1->p.z ) * ( t->e2->segment.v2->p.y - v1->p.y ) );
  y[0] = ( ( v2->p.z - v1->p.z ) * ( t->e2->segment.v2->p.x - v1->p.x ) ) - ( v1->p.x * ( t->e2->segment.v2->p.z - v1->p.z ) );
  z[0] = ( ( v2->p.x - v1->p.x ) * ( t->e2->segment.v2->p.y - v1->p.y ) ) - ( ( v2->p.y - v1->p.y ) * ( t->e2->segment.v2->p.x - v1->p.x ) );
  return;
}
}
gdouble gts_triangle_orientation( GtsTriangle *t )
{
  int eax;
  int edx;
  GtsVertex *v1, *v2, *v3;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return 0;
  }
  v1 = &t->e1->segment.v1;
  v2 = &t->e2->segment.v1;
  if ( t->e2->segment.v1 == t->e1->segment.v1 )
  {
    v2 = &t->e2->segment.v2;
    v3 = &t->e1->segment.v2;
  }
  else
  {
    v3 = &t->e1->segment.v2;
    v2 = &v2->p.x << 32;
    if ( t->e1->segment.v2 != (v2->p.x << 32) )
    {
      if ( v2 == v1 )
      {
        gts_point_orientation( &v1[0].p, &v2[0].p, &v3[0].p );
        return 0;
      }
      if ( v3 != v2->p.object.klass->info.name[0] )
      {
        g_assertion_message( 0, "../../src/gts/triangle.c", 453, __PRETTY_FUNCTION__, 0 );
      }
    }
    else
      v2 = v3;
    v3 = &v2->p.object.klass->info.name[0];
  }
}
}
void gts_triangle_revert( GtsTriangle *t )
{
  int eax;
  GtsEdge *e;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return;
  }
  e = t->e1;
  t->e1 = t->e2 = t->e1;
  return;
}
}
GSList *gts_triangles_from_edges( GSList *edges )
{
  GHashTable *hash;
  GSList *triangles = 0, *i;
  hash = g_hash_table_new( 0, 0 );
  i = edges;
  if ( edges )
  {
    do
    {
      GSList *j = &i->_GSList;
      if ( i->_GSList )
      {
      {
        do
        {
          if ( g_hash_table_lookup( &hash, &j ) == 0 )
          {
            triangles = g_slist_prepend( triangles, &t );
            g_hash_table_insert( &hash, &t, &i );
          }
          j = j->next;
        }
        while ( j->next );
      }
      }
      i = &i->next;
    }
    while ( i->next );
  }
  g_hash_table_destroy( &hash );
  return triangles;
}
void gts_triangle_vertices_edges( GtsTriangle *t, GtsEdge *e, GtsVertex **v1, GtsVertex **v2, GtsVertex **v3, GtsEdge **e1, GtsEdge **e2, GtsEdge **e3 )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  GtsEdge *ee1, *ee2;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    v1 = "t != NULL";
    e = &__PRETTY_FUNCTION__[0];
    t = 0;
  }
  ee1 = t->e1;
  if ( e == 0 || ee1 == e )
  {
    e1[0] = ee1;
    ee2 = t->e2;
    e2[0] = t->e2;
    e3[0] = &t->e3;
  }
  else
  {
    ee1 = t->e2;
    if ( t->e2 == e )
    {
      e1[0] = ee1;
      ee2 = t->e3;
      e2[0] = t->e3;
      e3[0] = &t->e1;
    }
    else
    {
      ee1 = t->e3;
      if ( t->e3 == e )
      {
        e1[0] = ee1;
        ee2 = t->e1;
        e2[0] = t->e1;
        e3[0] = &t->e2;
        if ( ee1->segment.v2 == ee2->segment.v1 )
        {
          v1[0] = ee1->segment.v1;
          ee1->segment.v2->p.object.klass->info.name[0] = e1[4];
          v2[0] = ee1->segment.v1;
          v3[0] = ee2->segment.v2;
          return;
        }
        else
        {
          if ( ee2->segment.v2 == ee1->segment.v2 )
          {
            v1[0] = ee1->segment.v1;
            ee1->segment.v2->p.object.klass->info.name[0] = e1[4];
          }
          else
          if ( ee1->segment.v1 == ee2->segment.v1 )
          {
            v1[0] = ee1->segment.v2;
            ee1->segment.v1->p.object.klass->info.name[0] = ee1->segment.v1->p.x & 0xFFFFFFFF;
            v2[0] = ee1->segment.v1;
            v3[0] = ee2->segment.v2;
            return;
          }
          else
          if ( ee2->segment.v2 == ee1->segment.v1 )
          {
            v1[0] = ee1->segment.v2;
            ee1->segment.v1->p.object.klass->info.name[0] = ee1->segment.v1->p.x & 0xFFFFFFFF;
          }
          else
            g_assertion_message( 0, "../../src/gts/triangle.c", 572, __PRETTY_FUNCTION__, 0 );
            g_assertion_message( 0, "../../src/gts/triangle.c", 548, __PRETTY_FUNCTION__, 0 );
          v2[0] = ee1->segment.v1;
          v3[0] = ee2->segment.v1;
          return;
        }
      }
      else
      {
        g_assertion_message( 0, "../../src/gts/triangle.c", 548, __PRETTY_FUNCTION__, 0 );
      }
    }
  }
  if ( ee1->segment.v2 == ee2->segment.v1 )
  {
    v1[0] = ee1->segment.v1;
    ee1->segment.v2->p.object.klass->info.name[0] = e1[4];
    v2[0] = ee1->segment.v1;
    v3[0] = ee2->segment.v2;
    return;
  }
  else
  {
  }
}
}
GtsTriangle *gts_triangle_enclosing( GtsTriangleClass *klass, GSList *points, gdouble scale )
{
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble xmax;
  gdouble xmin = scale;
  gdouble ymax;
  gdouble ymin;
  gdouble xo;
  gdouble yo;
  gdouble r;
  GtsVertex *v1, *v2, *v3;
  GtsEdge *e1, *e2, *e3;
  if ( points == 0 )
  {
    return &points[0].data[0];
  }
  points = points->next;
  xmax = points[2].next;
  ymax = points[1].next;
  if ( points->next )
  {
    xmax = points[2].next;
    ymax = ymin;
    while ( 1 )
    {
      p = &points->data[0];
      if ( p->x < p->x )
        ymax = p->x;
      else
      if ( ymin < ymin )
      {
      }
      else
        xmin = ymin;
    {
      GtsPoint *p;
      if ( p->y <= ymax )
      {
        if ( points[2].next < points[2].next )
        {
        }
        else
        {
          ymin = xmax = points[2].next;
          points = points->next;
          if ( points->next )
          {
          }
          else
          {
            ymin = ymax = ymin;
          }
        }
      }
      else
        xmax = p->y;
      points = points->next;
      if ( points->next == 0 )
      {
        ymin = ymax = ymin;
      }
      else
      {
        xmax = ymax = xmax;
      }
    }
    }
  }
  else
  {
    xmax = ymax;
    ymax = ymin;
    ymin = xmax;
  }
  v1 = gts_vertex_new( gts_vertex_class( ), ( ( ymax + xmax ) * 0.500000000000 ) + ( ( ( ( ( ( 0.000000000000 <> ( xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) ) ) & 69 ) >> 2 ) & 1 ) == 0 ? xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) : xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) == 0.000000000000 ? xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) : xmin ) * 1.732050807570 ), ( 0.500000000000 * ( ymin + ymax ) ) - ( ( ( ( ( 0.000000000000 <> ( xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) ) ) & 69 ) >> 2 ) & 1 ) == 0 ? xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) : xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) == 0.000000000000 ? xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) : xmin ), 0.000000000000 );
  v2 = gts_vertex_new( gts_vertex_class( ), ( ymax + xmax ) * 0.500000000000, ( 0.500000000000 * ( ymin + ymax ) ) + ( ( ( ( ( ( 0.000000000000 <> ( xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) ) ) & 69 ) >> 2 ) & 1 ) == 0 ? xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) : xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) == 0.000000000000 ? xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) : xmin ) * 0.000000000000 ), 0.000000000000 );
  v3 = gts_vertex_new( gts_vertex_class( ), ( ( ymax + xmax ) * 0.500000000000 ) + ( ( ( ( ( ( 0.000000000000 <> ( xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) ) ) & 69 ) >> 2 ) & 1 ) == 0 ? xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) : xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) == 0.000000000000 ? xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) : xmin ) * -1.732050807570 ), ( 0.500000000000 * ( ymin + ymax ) ) - ( ( ( ( ( 0.000000000000 <> ( xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) ) ) & 69 ) >> 2 ) & 1 ) == 0 ? xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) : xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) == 0.000000000000 ? xmin * sqrt( ( ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) * ( xmax - ( ( ymax + xmax ) * 0.500000000000 ) ) ) + ( ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) * ( ymin - ( 0.500000000000 * ( ymin + ymax ) ) ) ) ) : xmin ), 0.000000000000 );
  e2 = gts_edge_new( gts_edge_class( ), v2, v3 );
  e3 = gts_edge_new( gts_edge_class( ), v3, v1 );
  points = (GSList*)gts_edge_new( gts_edge_class( ), v1, v2 );
  klass = gts_triangle_class( );
}
guint gts_triangle_neighbor_number( GtsTriangle *t )
{
  int ecx;
  GSList *i;
  guint nn;
  GtsEdge *ee[4], **e;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    nn = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
  }
  e[0] = ee[0];
  nn = 0;
  ee[0] = t->e1;
  ee[1] = t->e2;
  ee[3] = 0;
  ee[2] = t->e3;
  for ( ; e[0];  )
  {
    while ( i = i[2].next, e[0] )
    {
      while ( i = i[2].next, e[0] )
      {
        /* phantom */ GtsTriangle *t1;
        i = i->next;
        nn += ( t != i ) & 255;
      }
      }
      break;
    }
    return nn;
  }
}
GSList *gts_triangle_neighbors( GtsTriangle *t )
{
  GSList *i, *list;
  GtsEdge *ee[4], **e;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    list = 0;
  }
  else
  {
    e[0] = ee[0];
    ee[0] = t->e1;
    ee[1] = t->e2;
    ee[3] = 0;
    ee[2] = t->e3;
    list = 0;
    for ( ; e[0];  )
    {
      i = e[0]->triangles;
      if ( e[0]->triangles == 0 )
        continue;
      else
      {
        do
        {
          GtsTriangle *t1 = &i->data[0];
          if ( t != i )
            g_slist_prepend( list, &t1 );
          i = i->next;
        }
        while ( i->next );
      }
      e[0] = e + 4;
    }
  }
  return 0;
}
}
GtsEdge *gts_triangles_common_edge( GtsTriangle *t1, GtsTriangle *t2 )
{
  int eax;
  int edx;
{
  /* phantom */ int _g_boolean_var_;
  if ( t1 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t1 != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t2 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t2 != NULL" );
    return 0;
  }
  if ( t2->e1 == t1->e1 || t2->e2 == t1->e1 || t2->e3->triangles == t1->e1 )
  {
  }
  if ( t1->e2 != t2->e1 )
  {
    if ( t2->e2 != t1->e2 )
    {
      if ( t1->e2 == t2->e3 )
      {
        return t2->e2;
      }
      if ( t1->e3->triangles == t2->e1 )
      {
        return t2->e1;
      }
      if ( t1->e3 != t2->e2 )
      {
        return t1->e3 != t2->e3 ? t2->e3 : 0;
      }
    }
  }
  return t2->e1;
  return t2->e2;
}
}
}
GtsTriangle *gts_triangle_is_duplicate( GtsTriangle *t )
{
  GSList *i;
  GtsEdge *e2, *e3;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return 0;
  }
  e2 = t->e2;
  e3 = t->e3;
  i = &t->e1->triangles;
  if ( t->e1->triangles == 0 )
  {
    return 0;
  }
{
  do
  {
    GtsTriangle *t1 = &i->data[0];
    if ( t != i && ( t1->e1 == e2 || t1->e2 == e2 || t1->e3 == e2 ) && ( t1->e1 == e3 || t1->e2 == e3 || t1->e3 == e3 ) )
      break;
    i = i->next;
  }
  while ( i->next );
}
  return 0;
}
}
GtsTriangle *gts_triangle_use_edges( GtsEdge *e1, GtsEdge *e2, GtsEdge *e3 )
{
  int eax;
  int ecx;
  GSList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( e1 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e1 != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( e2 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e2 != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( e3 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e3 != NULL" );
    return 0;
  }
  i = e1->triangles;
  if ( e1->triangles == 0 )
    goto B11;
  else
  {
    do
    {
      t = &i->data[0];
      if ( t->e1 != e2 )
      {
        GtsTriangle *t;
      }
      else
      if ( t->e2 == e3 || t->e3 == e3 )
        break;
      if ( esi != e2 )
      {
      }
      else
      if ( t->e1 == e3 || t->e3 == e3 )
        break;
      if ( edi == e2 && ( ebx == e3 || t->e2 == e3 ) )
        break;
      i = i->next;
    }
    while ( i->next );
  }
B11:;
  return &i->data[0];
}
}
}
}
gboolean gts_triangle_is_ok( GtsTriangle *t )
{
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t->e1 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t-&gt;e1 != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t->e2 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t-&gt;e2 != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t->e3 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t-&gt;e3 != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t->e1 == t->e2 || t->e3 == t->e1 || t->e3 == t->e2 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t-&gt;e1 != t-&gt;e2 && t-&gt;e1 != t-&gt;e3 && t-&gt;e2 != t-&gt;e3" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t->e2->segment.v1 != t->e1->segment.v1 && t->e2->segment.v2 != t->e1->segment.v1 && t->e2->segment.v1 != t->e1->segment.v2 && t->e2->segment.v2 != t->e1->segment.v2 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "gts_segments_touch (GTS_SEGMENT (t-&gt;e1), GTS_SEGMENT (t-&gt;e2))" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t->e3->segment.v1 != t->e1->segment.v1 && t->e3->segment.v2 != t->e1->segment.v1 && t->e3->segment.v1 != t->e1->segment.v2 && t->e3->segment.v2 != t->e1->segment.v2 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "gts_segments_touch (GTS_SEGMENT (t-&gt;e1), GTS_SEGMENT (t-&gt;e3))" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( ebp_32 != esi && esi != *(int*)(edx + 16) && t->e3->segment.v1 != t->e2->segment.v2 && t->e3->segment.v2 != t->e2->segment.v2 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "gts_segments_touch (GTS_SEGMENT (t-&gt;e2), GTS_SEGMENT (t-&gt;e3))" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t->e1->segment.v1 == t->e1->segment.v2 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "GTS_SEGMENT (t-&gt;e1)-&gt;v1 != GTS_SEGMENT (t-&gt;e1)-&gt;v2" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t->e2->segment.v1 == t->e2->segment.v2 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "GTS_SEGMENT (t-&gt;e2)-&gt;v1 != GTS_SEGMENT (t-&gt;e2)-&gt;v2" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t->e3->segment.v1 == t->e3->segment.v2 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "GTS_SEGMENT (t-&gt;e3)-&gt;v1 != GTS_SEGMENT (t-&gt;e3)-&gt;v2" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t->object.reserved )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "GTS_OBJECT (t)-&gt;reserved == NULL" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( gts_triangle_is_duplicate( t ) )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "!gts_triangle_is_duplicate (t)" );
  }
}
}
}
}
}
}
}
  return 0;
}
}
}
}
}
}
}
void gts_triangle_vertices( GtsTriangle *t, GtsVertex **v1, GtsVertex **v2, GtsVertex **v3 )
{
  int eax;
  int ecx;
  int ebx;
  int esi;
  int edi;
  GtsSegment *e1, *e2;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
    v2 = "t != NULL";
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( v2 == 0 || v1 == 0 || v3 == 0 )
    v2 = "v1 != NULL && v2 != NULL && v3 != NULL";
  else
  {
    e1 = &t->e1->segment;
    e2 = &t->e2->segment;
    if ( e1->v2 == e1 )
    {
      v1[0] = e1->v1;
      v2[0] = &e1->v2;
      v3[0] = e2->v2;
    }
    else
    if ( e2->v2 == e1->v2 )
    {
      v1[0] = e1->v1;
      v2[0] = &e1->v2;
      v3[0] = e2->v1;
    }
    else
    if ( e1 == e1->v1 )
    {
      v1[0] = e1->v2;
      v2[0] = &e1->v1->p.x & 0xFFFFFFFF;
      v3[0] = e2->v2;
    }
    else
    {
      v1[0] = e1->v2;
      v2[0] = &e1->v1;
      v3[0] = e2->v1;
    }
    return;
  }
}
  v1 = &__PRETTY_FUNCTION__[0];
  t = 0;
}
}
GtsPoint *gts_triangle_circumcircle_center( GtsTriangle *t, GtsPointClass *point_class )
{
  int eax;
  double fp1;
  double fp2;
  double fp6;
  GtsVertex *v1, *v2, *v3;
  gdouble xa;
  gdouble ya;
  /* phantom */ gdouble xb;
  /* phantom */ gdouble yb;
  /* phantom */ gdouble xc;
  /* phantom */ gdouble yc;
  gdouble xd;
  gdouble yd;
  gdouble xe;
  gdouble ye;
  gdouble xad;
  gdouble yad;
  gdouble xae;
  gdouble yae;
  gdouble det;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( point_class == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "point_class != NULL" );
    return 0;
  }
  gts_triangle_vertices( t, &v1, &v2, &v3 );
  xad = ( ( v2->p.x + v1->p.x ) * 0.500000000000 ) - v1->p.x;
  yad = ( ( v2->p.y + v1->p.y ) * 0.500000000000 ) - v1->p.y;
  xae = ( ( v3->p.x + v1->p.x ) * 0.500000000000 ) - v1->p.x;
  yd = ( v3->p.x + v1->p.x ) * 0.500000000000;
  yae = ( 0.500000000000 * ( v3->p.y + v1->p.y ) ) - v1->p.y;
  if ( ( xad * ( ( 0.500000000000 * ( v3->p.y + v1->p.y ) ) - v1->p.y ) ) - ( xae * ( ( ( v2->p.y + v1->p.y ) * 0.500000000000 ) - v1->p.y ) ) == 0.000000000000 )
  {
    return 0;
  }
  return gts_point_new( point_class, ( ( ( ye * ya ) + ( ( xe - xd ) * yae * yad ) ) - ( xae * ( ( ( v2->p.y + v1->p.y ) * 0.500000000000 ) - v1->p.y ) * yd ) ) / ( yae * yad ), -( ( ( xae * xad * ( ye - yd ) ) + ( xae * ( ( ( v2->p.y + v1->p.y ) * 0.500000000000 ) - v1->p.y ) * xe ) ) - ( ya * xd ) ) / ( ( xad * ( ( 0.500000000000 * ( v3->p.y + v1->p.y ) ) - v1->p.y ) ) - ( xae * ( ( ( v2->p.y + v1->p.y ) * 0.500000000000 ) - v1->p.y ) ) ), 0.000000000000 );
}
}
}
GtsVertex *triangle_use_vertices( GtsTriangle *t, GtsVertex *A, GtsVertex *B )
{
  int eax;
  int ebx;
  GtsVertex *v1 = &v3->p.x & 0xFFFFFFFF;
  GtsVertex *v2;
  GtsVertex *v3 = &v3->p.x << 32;
  v2 = &v3->p.x & 0xFFFFFFFF;
  if ( v3->p.x << 32 != v3->p.x & 0xFFFFFFFF && v3 != v2 )
  {
    if ( v1 == A )
      goto B5;
    else
    {
      if ( v2 == A )
      {
        if ( v1 == B )
        {
          return v1;
        }
      {
        /* phantom */ int _g_boolean_var_;
        if ( v3 == B )
        {
          v3 = v1;
          return v1;
        }
        g_assertion_message_expr( 0, "../../src/gts/triangle.c", 932, __PRETTY_FUNCTION__, "v3 == B" );
      }
      }
      else
      {
        if ( v3 == A )
        {
          if ( v1 == B )
          {
            return v1;
          }
        }
        else
          g_assertion_message( 0, "../../src/gts/triangle.c", 941, __PRETTY_FUNCTION__, 0 );
      {
        /* phantom */ int _g_boolean_var_;
        if ( v2 == B )
        {
          v3 = v1;
          return v1;
        }
        g_assertion_message_expr( 0, "../../src/gts/triangle.c", 938, __PRETTY_FUNCTION__, "v2 == B" );
      }
      }
    }
  }
  else
  {
    v3 = &t->e2->segment.v2;
    if ( v1 == A )
      goto B5;
    else
    {
    }
  }
B5:;
  if ( v2 == B )
  {
    return v1;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( v3 == B )
  {
    return v1;
  }
  g_assertion_message_expr( 0, "../../src/gts/triangle.c", 926, __PRETTY_FUNCTION__, "v3 == B" );
}
}
gboolean gts_triangles_are_folded( GSList *triangles, GtsVertex *A, GtsVertex *B, gdouble max )
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
  GSList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( A == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "A != NULL" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( B == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "B != NULL" );
    return 1;
  }
  if ( triangles )
  {
    i = triangles;
  {
    do
    {
      C = triangle_use_vertices( &i->data[0], A, B );
      j = &i->next;
      if ( i->next == 0 )
        break;
    {
      do
      {
        if ( ( ( ( ( B->p.y - A->p.y ) * ( *(double*)(&C->p.z) - A->p.z ) ) - ( ( B->p.z - A->p.z ) * ( *(double*)(&C->p.y) - A->p.y ) ) ) * ( ( ( B->p.y - A->p.y ) * ( *(double*)(&C->p.z) - A->p.z ) ) - ( ( B->p.z - A->p.z ) * ( *(double*)(&C->p.y) - A->p.y ) ) ) ) + ( ( ( ( *(double*)(&C->p.x) - A->p.x ) * ( B->p.z - A->p.z ) ) - ( ( *(double*)(&C->p.z) - A->p.z ) * ( B->p.x - A->p.x ) ) ) * ( ( ( *(double*)(&C->p.x) - A->p.x ) * ( B->p.z - A->p.z ) ) - ( ( *(double*)(&C->p.z) - A->p.z ) * ( B->p.x - A->p.x ) ) ) ) + ( ( ( ( *(double*)(&C->p.y) - A->p.y ) * ( B->p.x - A->p.x ) ) - ( ( *(double*)(&C->p.x) - A->p.x ) * ( B->p.y - A->p.y ) ) ) * ( ( ( *(double*)(&C->p.y) - A->p.y ) * ( B->p.x - A->p.x ) ) - ( ( *(double*)(&C->p.x) - A->p.x ) * ( B->p.y - A->p.y ) ) ) ) <= 100000000.000000000000 * ( ( ( ( ( D->p.y - A->p.y ) * ( B->p.z - A->p.z ) ) - ( ( B->p.y - A->p.y ) * ( D->p.z - A->p.z ) ) ) * ( ( ( D->p.y - A->p.y ) * ( B->p.z - A->p.z ) ) - ( ( B->p.y - A->p.y ) * ( D->p.z - A->p.z ) ) ) ) + ( ( ( ( D->p.z - A->p.z ) * ( B->p.x - A->p.x ) ) - ( ( B->p.z - A->p.z ) * ( D->p.x - A->p.x ) ) ) * ( ( ( D->p.z - A->p.z ) * ( B->p.x - A->p.x ) ) - ( ( B->p.z - A->p.z ) * ( D->p.x - A->p.x ) ) ) ) + ( ( ( ( B->p.y - A->p.y ) * ( D->p.x - A->p.x ) ) - ( ( B->p.x - A->p.x ) * ( D->p.y - A->p.y ) ) ) * ( ( ( B->p.y - A->p.y ) * ( D->p.x - A->p.x ) ) - ( ( B->p.x - A->p.x ) * ( D->p.y - A->p.y ) ) ) ) ) )
        {
          break;
        }
        if ( ( ( ( ( D->p.y - A->p.y ) * ( B->p.z - A->p.z ) ) - ( ( B->p.y - A->p.y ) * ( D->p.z - A->p.z ) ) ) * ( ( ( D->p.y - A->p.y ) * ( B->p.z - A->p.z ) ) - ( ( B->p.y - A->p.y ) * ( D->p.z - A->p.z ) ) ) ) + ( ( ( ( D->p.z - A->p.z ) * ( B->p.x - A->p.x ) ) - ( ( B->p.z - A->p.z ) * ( D->p.x - A->p.x ) ) ) * ( ( ( D->p.z - A->p.z ) * ( B->p.x - A->p.x ) ) - ( ( B->p.z - A->p.z ) * ( D->p.x - A->p.x ) ) ) ) + ( ( ( ( B->p.y - A->p.y ) * ( D->p.x - A->p.x ) ) - ( ( B->p.x - A->p.x ) * ( D->p.y - A->p.y ) ) ) * ( ( ( B->p.y - A->p.y ) * ( D->p.x - A->p.x ) ) - ( ( B->p.x - A->p.x ) * ( D->p.y - A->p.y ) ) ) ) <= ( C + ( ( ( ( B->p.y - A->p.y ) * ( C->p.z - A->p.z ) ) - ( ( B->p.z - A->p.z ) * ( *(double*)(&C->p.y) - A->p.y ) ) ) * ( ( ( B->p.y - A->p.y ) * ( C->p.z - A->p.z ) ) - ( ( B->p.z - A->p.z ) * ( *(double*)(&C->p.y) - A->p.y ) ) ) ) + ( ( ( ( *(double*)(&C->p.x) - A->p.x ) * ( B->p.z - A->p.z ) ) - ( ( *(double*)(&C->p.z) - A->p.z ) * ( B->p.x - A->p.x ) ) ) * ( ( ( *(double*)(&C->p.x) - A->p.x ) * ( B->p.z - A->p.z ) ) - ( ( *(double*)(&C->p.z) - A->p.z ) * ( B->p.x - A->p.x ) ) ) ) ) * 100000000.000000000000 )
        {
          break;
        }
        if ( ( ( ( ( C->p.x - A->p.x ) * ( B->p.z - A->p.z ) ) - ( ( C->p.z - A->p.z ) * ( B->p.x - A->p.x ) ) ) * ( ( ( D->p.z - A->p.z ) * ( B->p.x - A->p.x ) ) - ( ( B->p.z - A->p.z ) * ( D->p.x - A->p.x ) ) ) ) + ( ( ( ( B->p.y - A->p.y ) * ( C->p.z - A->p.z ) ) - ( ( B->p.z - A->p.z ) * ( C->p.y - A->p.y ) ) ) * ( ( ( D->p.y - A->p.y ) * ( B->p.z - A->p.z ) ) - ( ( B->p.y - A->p.y ) * ( D->p.z - A->p.z ) ) ) ) + ( ( ( ( C->p.y - A->p.y ) * ( B->p.x - A->p.x ) ) - ( ( C->p.x - A->p.x ) * ( B->p.y - A->p.y ) ) ) * ( ( ( D->p.y - A->p.y ) * ( B->p.z - A->p.z ) ) - ( ( B->p.y - A->p.y ) * ( D->p.z - A->p.z ) ) ) ) <= 0.000000000000 )
        {
          if ( ( ( ( ( ( ( C->p.x - A->p.x ) * ( B->p.z - A->p.z ) ) - ( ( C->p.z - A->p.z ) * ( B->p.x - A->p.x ) ) ) * ( ( ( D->p.z - A->p.z ) * ( B->p.x - A->p.x ) ) - ( ( B->p.z - A->p.z ) * ( D->p.x - A->p.x ) ) ) ) + ( ( ( ( D->p.z - A->p.z ) * ( B->p.x - A->p.x ) ) - ( ( B->p.z - A->p.z ) * ( D->p.x - A->p.x ) ) ) * ( ( ( D->p.y - A->p.y ) * ( B->p.z - A->p.z ) ) - ( ( B->p.y - A->p.y ) * ( D->p.z - A->p.z ) ) ) ) + ( ( ( ( C->p.y - A->p.y ) * ( B->p.x - A->p.x ) ) - ( ( C->p.x - A->p.x ) * ( B->p.y - A->p.y ) ) ) * ( ( ( D->p.y - A->p.y ) * ( B->p.z - A->p.z ) ) - ( ( B->p.y - A->p.y ) * ( D->p.z - A->p.z ) ) ) ) ) * ( ( ( ( ( C->p.x - A->p.x ) * ( B->p.z - A->p.z ) ) - ( ( C->p.z - A->p.z ) * ( B->p.x - A->p.x ) ) ) * ( ( ( D->p.z - A->p.z ) * ( B->p.x - A->p.x ) ) - ( ( B->p.z - A->p.z ) * ( D->p.x - A->p.x ) ) ) ) + ( ( ( ( D->p.z - A->p.z ) * ( B->p.x - A->p.x ) ) - ( ( B->p.z - A->p.z ) * ( D->p.x - A->p.x ) ) ) * ( ( ( D->p.y - A->p.y ) * ( B->p.z - A->p.z ) ) - ( ( B->p.y - A->p.y ) * ( D->p.z - A->p.z ) ) ) ) + ( ( ( ( C->p.y - A->p.y ) * ( B->p.x - A->p.x ) ) - ( ( C->p.x - A->p.x ) * ( B->p.y - A->p.y ) ) ) * ( ( ( D->p.y - A->p.y ) * ( B->p.z - A->p.z ) ) - ( ( B->p.y - A->p.y ) * ( D->p.z - A->p.z ) ) ) ) ) ) / ( ( ( ( D->p.y - A->p.y ) * ( B->p.z - A->p.z ) ) - ( ( B->p.y - A->p.y ) * ( D->p.z - A->p.z ) ) ) * ( ( ( D->p.z - A->p.z ) * ( B->p.x - A->p.x ) ) - ( ( B->p.z - A->p.z ) * ( D->p.x - A->p.x ) ) ) ) <= max )
            goto B24;
        }
        else
        {
        }
B24:;
        j = &j->next;
      }
      while ( j->next );
      i = &i->next;
    }
    }
    while ( i->next );
  }
  }
  return 0;
}
  return 1;
}
}
GtsObject *gts_triangle_is_stabbed( GtsTriangle *t, GtsPoint *p, gdouble *orientation )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp7;
  GtsVertex *v1, *v2, *v3, *inverted;
  GtsEdge *e1, *e2, *e3, *tmp;
  gdouble o;
  gdouble o1;
  gdouble o2;
  gdouble o3;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL" );
    return 0;
  }
  gts_triangle_vertices_edges( t, 0, &v1, &v2, &v3, &e1, &e2, &e3 );
  gts_point_orientation( (int)( &v1->p ), (int)( &v2->p ), (int)( &v3->p ) );
  if ( !( "huge", 0 ) )
  {
    if ( 1 )
    {
      return 0;
    }
    else
      o2 = 0.000000000000;
  }
  else
    o2 = 0.000000000000;
  if ( o2 <= o2 )
  {
    inverted = v2;
    inverted = 0;
  }
  else
  {
    inverted = v1;
    v2 = v1;
    e3 = e2;
    v1 = v2;
    e2 = e3;
  }
  gts_point_orientation_3d( (int)( &v1->p ), (int)( &v2->p ), (int)( &v3->p ), p );
  if ( 0.000000000000 < 0.000000000000 )
  {
  }
  else
  {
    gts_point_orientation( (int)( &v1->p ), (int)( &v2->p ), p );
    if ( 0.000000000000 < 0.000000000000 )
    {
    }
    else
    {
      gts_point_orientation( (int)( &v2->p ), (int)( &v3->p ), p );
      if ( 0.000000000000 < 0.000000000000 )
        o3 = 0.000000000000;
      else
      {
        gts_point_orientation( (int)( &v3->p ), (int)( &v1->p ), p );
        o3 = 0.000000000000;
        if ( 0.000000000000 < 0.000000000000 )
        {
        }
        else
        {
          if ( orientation )
          {
            orientation[0] = inverted == 0 ? -( o3 ) : o3;
            o3 = inverted == 0 ? -( o3 ) : o3;
          }
          else
            o3 = 0.000000000000;
          if ( o3 == 0 && o3 == 0.000000000000 )
          {
            if ( o3 == 0.000000000000 )
            {
              return &v2->p.object;
            }
            if ( o3 == o3 && o3 == o3 )
            {
              return &v1->p.object;
            }
            return &e1->segment.object;
          }
          else
          {
            if ( o3 != 0.000000000000 )
            {
              return o3 != o3 ? o3 == o3 ? &t->object : &e3->segment.object : &t->object;
            }
            if ( o3 == o3 )
            {
              return &v3->p.object;
            }
            return &e2->segment.object;
          }
        }
      }
    }
  }
}
}
}
void gts_triangle_interpolate_height( GtsTriangle *t, GtsPoint *p )
{
  int eax;
  int edx;
  double fp1;
  double fp7;
  GtsPoint *p1, *p2, *p3;
  gdouble x1;
  gdouble x2;
  gdouble y1;
  gdouble y2;
  gdouble det;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL" );
    return;
  }
  p1 = &t->e1->segment.v1->p;
  p2 = &t->e1->segment.v2->p;
  if ( t->e2->segment.v1 == t->e1->segment.v1 || p2 == t->e2->segment.v1 )
  {
  }
  if ( ( ( p2->x - p1->x ) * ( t->e2->segment.v1->p.y - p1->y ) ) - ( p1->y * ( t->e2->segment.v1->p.x - p1->x ) ) )
  {
  }
  else
  if ( !0 )
  {
    p->z = ( t->e2->segment.v1->p.z + p2->z + p1->z ) / 3.000000000000;
    return;
  }
{
  gdouble x;
  gdouble y;
  gdouble a;
  gdouble b;
  p->z = ( p1->z * ( 1.000000000000 - ( ( ( ( t->e2->segment.v1->p.y - p1->y ) * ( p->x - p1->x ) ) - ( det * ( p->y - y2 ) ) ) / x ) - ( ( ( ( p2->x - p1->x ) * ( p->y - y2 ) ) - ( y * ( p->x - p1->x ) ) ) / x ) ) ) + ( p2->z * ( ( ( ( t->e2->segment.v1->p.y - p1->y ) * ( p->x - p1->x ) ) - ( det * ( p->y - y2 ) ) ) / x ) ) + ( ( ( ( ( p2->x - p1->x ) * ( p->y - y2 ) ) - ( y * ( p->x - p1->x ) ) ) / x ) * t->e2->segment.v1->p.z );
  return;
}
}
}
}
#if 0
#endif
