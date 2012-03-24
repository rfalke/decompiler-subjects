#include "segment.c.h"
void segment_destroy( GtsObject *object )
{
  int ebx;
  int esi;
  int edi;
  /* phantom */ GtsSegment *segment;
  GtsVertex *v1 = &object[1].klass->info.name[0];
  GtsVertex *v2 = &object[1].reserved[0];
  v1->segments = g_slist_remove( v1->segments, &object );
  if ( ( ( v1->p.object.flags/*.1_1of4*/ & 1 ) & 255 ) == 0 && gts_allow_floating_vertices == 0 && &v1->segments == 0 )
  {
    gts_object_destroy( &v1[0].p.object );
  }
  v2->segments = g_slist_remove( v2->segments, &object );
  if ( ( ( v2->p.object.flags/*.1_1of4*/ & 1 ) & 255 ) == 0 && gts_allow_floating_vertices == 0 && &v2->segments == 0 )
    gts_object_destroy( &v2[0].p.object );
  ;
}
void segment_class_init( GtsObjectClass *klass )
{
  klass->destroy = segment_destroy;
  return;
}
void segment_init( GtsSegment *segment )
{
  segment->v2 = 0;
  segment->v1 = 0;
  return;
}
GtsSegmentClass *gts_segment_class( void )
{
  int eax;
  int edx;
  int edi;
  static GtsSegmentClass *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo segment_info = { };
    segment_info.name[0] = 'G';
    *(int*)&segment_info.name[4] = 0x656d6765;
    *(int*)&segment_info.name[8] = 29806;
    do
    {
      *(int*)&segment_info.name[11] = 0;
    }
    while ( klass + 4 + 4 < 28 );
    segment_info.object_size = 20;
    segment_info.class_size = 92;
    segment_info.class_init_func = &segment_class_init;
    segment_info.object_init_func = &segment_init;
    klass = gts_object_class_new( gts_object_class( ), &segment_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
GtsSegment *gts_segment_new( GtsSegmentClass *klass, GtsVertex *v1, GtsVertex *v2 )
{
  int esi;
  int edi;
  GtsSegment *s;
{
  /* phantom */ int _g_boolean_var_;
  if ( v1 == 0 )
  {
    s = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v1 != NULL" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( v2 == 0 )
  {
    s = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v2 != NULL" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( v2 == v1 )
  {
    s = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v1 != v2" );
  }
  s->v1 = v1;
  *(int*)gts_object_new( (int)( &klass->parent_class ) )/*.16*/ = v2[0].p.object;
  v1->segments = g_slist_prepend( v1->segments, gts_object_new( (int)( &klass->parent_class ) ) );
  v2->segments = g_slist_prepend( v2->segments, gts_object_new( (int)( &klass->parent_class ) ) );
}
}
  return (GtsSegment*)gts_object_new( (int)( &klass->parent_class ) );
}
}
GtsSegment *gts_segment_is_duplicate( GtsSegment *s )
{
  int edx;
  GSList *i;
  GtsVertex *v2;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
  v2 = s->v2;
  i = &s->v1->segments;
  if ( s->v2 == s->v1 )
  {
    if ( i )
    {
    {
      do
      {
        GtsSegment *s1 = &i->data[0];
        if ( s != i && s1->v1 == v2 && s1->v2 == v2 )
          break;
        i = i->next;
      }
      while ( i->next );
      return &i->data[0];
    }
    }
  }
  else
  for ( ; i;  )
  {
    GtsSegment *s1 = &i->data[0];
    if ( s != i && ( s1->v1 == v2 || s1->v2 == v2 ) )
      break;
    i = i->next;
  }
  return &i->data[0];
}
}
GtsIntersect gts_segments_are_intersecting( GtsSegment *s1, GtsSegment *s2 )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  GtsPoint *p1, *p2, *p3, *p4;
  gdouble d1;
  gdouble d2;
  gdouble d3;
  gdouble d4;
{
  /* phantom */ int _g_boolean_var_;
  if ( s2 == 0 || s1 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s1 != NULL && s2 != NULL" );
    return 0 | -1;
  }
  p1 = &s1->v1->p;
  p2 = &s1->v2->p;
  p3 = &s2->v1->p;
  p4 = &s2->v2->p;
  gts_point_orientation( (int)( &s1->v1->p ), (int)( &s1->v2->p ), (int)( &s2->v1->p ) );
  gts_point_orientation( (int)( &s1->v1->p ), p2, p4 );
  d2 = 0.000000000000;
  if ( 0.000000000000 < 0.000000000000 )
  {
    if ( 0.000000000000 < d2 )
    {
      return 0 | -1;
    }
  }
  else
  {
  }
  if ( 0.000000000000 < 0.000000000000 )
  {
    if ( d2 < 0.000000000000 )
    {
    }
  }
  else
  {
  }
  gts_point_orientation( p3, p4, (int)( &s1->v1->p ) );
  gts_point_orientation( p3, p4, p2 );
  if ( 0.000000000000 < 0.000000000000 )
  {
    d4 = 0.000000000000;
    if ( 0.000000000000 < 0.000000000000 )
    {
    }
    else
      d4 = 0.000000000000;
  }
  else
    d4 = fp0;
  if ( d4 < 0.000000000000 )
  {
    if ( d4 < 0.000000000000 )
    {
    }
  }
  else
  {
  }
  if ( 0.000000000000 == 0.000000000000 && 0.000000000000 == 0.000000000000 )
  {
  }
  if ( fp2 != fp1 || fp2 != fp1 )
  {
    return ( ( fp2 == d4 ) & ( ( ( ( ( fp2 <> d4 ) & 69 ) >> 2 ) & 1 ) == 0 ) ) ^ 1;
  }
  return 0;
}
}
GtsVertex *gts_segment_midvertex( GtsSegment *s, GtsVertexClass *klass )
{
  int eax;
  int ecx;
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
  p1 = &p2->x & 0xFFFFFFFF;
  p2 = &p2->x << 32;
  return gts_vertex_new( klass, 0.500000000000 * ( p1->x + p1 ), ( p2->y + p1->y ) * 0.500000000000, ( p2->z + p1->z ) * 0.500000000000 );
}
}
}
GSList *gts_segments_from_vertices( GSList *vertices )
{
  GHashTable *hash;
  GSList *segments = 0, *i;
  hash = g_hash_table_new( 0, 0 );
  i = vertices;
  if ( vertices )
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
            segments = g_slist_prepend( segments, &s );
            g_hash_table_insert( &hash, &s, &i );
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
  return segments;
}
gboolean gts_segment_is_ok( GtsSegment *s )
{
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( s->v2 == s->v1 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s-&gt;v1 != s-&gt;v2" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( gts_segment_is_duplicate( s ) )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "!gts_segment_is_duplicate (s)" );
  }
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( s->object.reserved )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "GTS_OBJECT (s)-&gt;reserved == NULL" );
    return 0;
  }
}
  return 0;
}
}
}
}
#if 0
#endif
