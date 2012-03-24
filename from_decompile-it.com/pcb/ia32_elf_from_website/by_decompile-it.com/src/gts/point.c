#include "point.c.h"
void point_read( GtsObject **o, GtsFile *f )
{
  /* phantom */ GtsPoint *p;
  if ( o[0][7].flags )
  {
    if ( gts_file_read( f, o[0] + 12, 8, 1 ) != 1 )
    {
      f = "expecting a binary number (x coordinate)";
      o = &f[0].fp[0]._flags;
    }
    if ( gts_file_read( f, o[0] + 20, 8, 1 ) != 1 )
      f = "expecting a binary number (y coordinate)";
      o = &f[0].fp[0]._flags;
    else
    {
      ebp_20 = 1;
      ebp_16 = 8;
      f = o[0] + 28;
      o[0] = &f[0].fp[0]._flags;
      ebp_4 = point_read+19f;
      if ( gts_file_read( ) == 1 )
      {
        return;
      }
      f = "expecting a binary number (z coordinate)";
    }
  }
  else
  {
    if ( f->type != GTS_FLOAT && f->type != GTS_INT )
      f = "expecting a number (x coordinate)";
    else
    {
      o[0][1].klass = strtod( &f->token->str[0], 0 );
      gts_file_next_token( f );
      if ( f->type != GTS_FLOAT && f->type != GTS_INT )
      {
        f = "expecting a number (y coordinate)";
        o = &f[0].fp[0]._flags;
      }
      o[0][1].flags = strtod( &f->token->str[0], 0 );
      gts_file_next_token( f );
      if ( f->type != GTS_FLOAT && gts_file_read( f, o[0] + 20, 8, 1 ) != 512 )
      {
        f = "expecting a number (z coordinate)";
        o = &f[0].fp[0]._flags;
      }
      o[0][2].reserved = strtod( &f->token->str[0], 0 );
      o = &f[0].fp[0]._flags;
    }
  }
}
void point_write( GtsObject *o, FILE *fptr )
{
  int ebx;
  int esi;
  /* phantom */ GtsPoint *p;
  if ( o->_GtsObject )
  {
    fwrite( &o[1].klass, 8, 1, fptr );
    fwrite( o + 20, 8, 1, fptr );
    fwrite( &o[2].reserved, 8, 1, fptr );
    return;
  }
  __fprintf_chk( fptr, 1, "%.10g %.10g %.10g", o[1].klass, o[1].flags, o[2].reserved );
  return;
}
void point_class_init( GtsObjectClass *klass )
{
  klass->read = point_read;
  klass->write = point_write;
  return;
}
GtsPointClass *gts_point_class( void )
{
  int eax;
  int edx;
  int edi;
  static GtsPointClass *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo point_info = { };
    point_info.name[0] = 'G';
    *(int*)&point_info.name[4] = 0x746e696f;
    do
    {
      *(int*)&point_info.name[11] = 0;
    }
    while ( klass + 4 + 4 < 28 );
    point_info.object_size = 36;
    point_info.class_size = 96;
    point_info.class_init_func = &point_class_init;
    klass = gts_object_class_new( gts_object_class( ), &point_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
GtsPoint *gts_point_new( GtsPointClass *klass, gdouble x, gdouble y, gdouble z )
{
  *(int*)gts_object_new( (int)( &klass->parent_class ) )/*.12*/ = x;
  *(int*)gts_object_new( (int)( &klass->parent_class ) )/*.20*/ = y;
  *(int*)gts_object_new( (int)( &klass->parent_class ) )/*.28*/ = z;
  return gts_object_new( (int)( &klass->parent_class ) );
}
void gts_point_set( GtsPoint *p, gdouble x, gdouble y, gdouble z )
{
  int eax;
  double fp5;
  double fp6;
  double fp7;
{
  /* phantom */ int _g_boolean_var_;
  if ( p )
  {
    p->x = x;
    p->y = y;
    p->z = x;
    return;
  }
  p = 0;
}
}
gdouble gts_point_distance( GtsPoint *p1, GtsPoint *p2 )
{
  int eax;
  int edx;
{
  /* phantom */ int _g_boolean_var_;
  if ( p2 == 0 || p1 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p1 != NULL && p2 != NULL" );
    return 0;
  }
  return 0;
}
}
gdouble gts_point_distance2( GtsPoint *p1, GtsPoint *p2 )
{
  int eax;
  int edx;
{
  /* phantom */ int _g_boolean_var_;
  if ( p2 == 0 || p1 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p1 != NULL && p2 != NULL" );
    return 0;
  }
  return 0;
}
}
gdouble gts_point_orientation_3d( GtsPoint *p1, GtsPoint *p2, GtsPoint *p3, GtsPoint *p4 )
{
  int eax;
  int ecx;
  int edx;
{
  /* phantom */ int _g_boolean_var_;
  if ( p2 == 0 || p1 == 0 || p4 == 0 || p3 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p1 != NULL && p2 != NULL && p3 != NULL && p4 != NULL" );
    return 0;
  }
  p4 = &p4->x + 12;
  p3 += 0;
  p2 = &p2->x + 12;
  p1 = &p1->x + 12;
}
}
GtsIntersect gts_point_is_in_triangle( GtsPoint *p, GtsTriangle *t )
{
  int eax;
  double fp0;
  double fp1;
  double fp2;
  double fp7;
  GtsVertex *v1, *v2, *v3;
  gdouble d1;
  gdouble d2;
  gdouble d3;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 || p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL && t != NULL" );
  }
  gts_triangle_vertices( t, &v1, &v2, &v3 );
  gts_point_orientation( (int)( &v1->p ), (int)( &v2->p ), p );
  if ( 0.000000000000 < 0.000000000000 )
  {
  }
  gts_point_orientation( (int)( &v2->p ), (int)( &v3->p ), p );
  if ( 0.000000000000 < 0.000000000000 )
  {
  }
  gts_point_orientation( (int)( &v3->p ), (int)( &v1->p ), p );
  if ( 0.000000000000 < 0.000000000000 )
  {
  }
  if ( 0.000000000000 != 0.000000000000 || 0.000000000000 != 0.000000000000 )
  {
    if ( 0.000000000000 != 0.000000000000 || 0.000000000000 != 0.000000000000 )
    {
      return ( ( 0.000000000000 == 0.000000000000 ) & ( ( ( ( ( 0.000000000000 <> 0.000000000000 ) & 69 ) >> 2 ) & 1 ) == 0 ) ) ^ 1;
    }
  }
  else
  {
  }
}
}
gdouble gts_point_in_triangle_circle( GtsPoint *p, GtsTriangle *t )
{
  int eax;
  GtsPoint *p1, *p2, *p3;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 || p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL && t != NULL" );
    return 0;
  }
  gts_triangle_vertices( t, &p1[0].object.klass[0].info.name[0], &p2[0].object.klass[0].info.name[0], &p3[0].object.klass[0].info.name[0] );
  incircle( &p1->x, &p2->x, &p3->x, &p->x );
  return 0;
}
}
gdouble gts_point_in_circle( GtsPoint *p, GtsPoint *p1, GtsPoint *p2, GtsPoint *p3 )
{
  int eax;
  int ecx;
  int edx;
{
  /* phantom */ int _g_boolean_var_;
  if ( p1 == 0 || p == 0 || p3 == 0 || p2 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL && p1 != NULL && p2 != NULL && p3 != NULL" );
    return 0;
  }
  p3 = &p->x + 12;
  p2 = &p3->x + 12;
  p1 = p2 + 12;
  p = &p1->x + 12;
}
}
gdouble gts_point_in_sphere( GtsPoint *p, GtsPoint *p1, GtsPoint *p2, GtsPoint *p3, GtsPoint *p4 )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
{
  /* phantom */ int _g_boolean_var_;
  if ( p1 == 0 || p == 0 || p3 == 0 || p2 == 0 || p4 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL && p1 != NULL && p2 != NULL && p3 != NULL && p4 != NULL" );
    return 0;
  }
  p3 = p4 + 12;
  p1 = p2 + 12;
  p4 = &p->x + 12;
  p2 = &p3->x + 12;
  p = &p1->x + 12;
}
}
gdouble gts_point_segment_distance2( GtsPoint *p, GtsSegment *s )
{
  int eax;
  double fp0;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble t;
  gdouble ns2;
  /* phantom */ gdouble x;
  /* phantom */ gdouble y;
  /* phantom */ gdouble z;
  GtsPoint *p1, *p2;
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL" );
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
  p2 = &s->v2->p;
  gts_point_distance2( (int)( &s->v1->p ), (int)( &s->v2->p ) );
  if ( 0 )
  {
  }
  else
  if ( ( ( ( 0.000000000000 - p1->x ) * ( p->x - p1->x ) ) + ( ( p2->y - p1->y ) * ( p->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p->z - p1->z ) ) ) / 0.000000000000 <= 1.000000000000 )
  {
    if ( 0.000000000000 <= ns2 )
    {
      return 1;
    }
  }
  else
  {
    s = &p2[0].object.klass[0].info.name[0];
  }
  s = &p1[0].object.klass[0].info.name[0];
}
}
}
gdouble gts_point_segment_distance( GtsPoint *p, GtsSegment *s )
{
  int eax;
  int edx;
  double fp0;
  double fp7;
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
  gts_point_segment_distance2( p, s );
  if ( sqrt( 0.000000000000 ) == sqrt( 0.000000000000 ) )
  {
    if ( 1 )
    {
      return 1;
    }
    else
    {
    }
  }
  else
  {
  }
  sqrt( 0.000000000000 );
  return 1;
}
}
}
void gts_point_segment_closest( GtsPoint *p, GtsSegment *s, GtsPoint *closest )
{
  int eax;
  int edx;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble t;
  gdouble ns2;
  GtsPoint *p1, *p2;
  __PRETTY_FUNCTION__[0] = p;
{
  /* phantom */ int _g_boolean_var_;
  if ( __PRETTY_FUNCTION__[0] == 0 )
    closest = "p != NULL";
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
    closest = "s != NULL";
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( closest == 0 )
    closest = "closest != NULL";
  else
  {
    p1 = &s->v1->p;
    p2 = &s->v2->p;
    gts_point_distance2( (int)( &s->v1->p ), (int)( &s->v2->p ) );
    if ( 0 )
    {
      gts_point_set( closest, p1->x, p1->y, p1->z );
      return;
    }
    if ( ( ( ( 0.000000000000 - p1->x ) * ( p->x - p1->x ) ) + ( ( p2->y - p1->y ) * ( p->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p->z - p1->z ) ) ) / 0.000000000000 <= 1.000000000000 )
    {
      if ( 0.000000000000 <= ns2 )
      {
        gts_point_set( closest, ( p1->x * ( ( ( ( ( 0.000000000000 - p1->x ) * ( p->x - p1->x ) ) + ( ( p2->y - p1->y ) * ( p->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p->z - p1->z ) ) ) / 0.000000000000 ) - ns2 ) ) + ( 0.000000000000 * ns2 ), ( p1->y * ( ( ( ( ( 0.000000000000 - p1->x ) * ( p->x - p1->x ) ) + ( ( p2->y - p1->y ) * ( p->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p->z - p1->z ) ) ) / 0.000000000000 ) - ns2 ) ) + ( p2->y * ns2 ), ( t * ( ( ( ( ( 0.000000000000 - p1->x ) * ( p->x - p1->x ) ) + ( ( p2->y - p1->y ) * ( p->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p->z - p1->z ) ) ) / 0.000000000000 ) - ns2 ) ) + ( p2->z * ns2 ) );
        return;
      }
      gts_point_set( closest, t, p1->y, t );
      return;
    }
    else
    {
      gts_point_set( closest, 0.000000000000, p2->y, p2->z );
      return;
    }
  }
}
}
  s = &__PRETTY_FUNCTION__[0];
  p = 0;
}
}
gdouble gts_point_triangle_distance2( GtsPoint *p, GtsTriangle *t )
{
  int eax;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  GtsPoint *p1, *p2, *p3;
  GtsEdge *e1, *e2, *e3;
  /* phantom */ GtsVector p1p2;
  /* phantom */ GtsVector p1p3;
  /* phantom */ GtsVector pp1;
  gdouble A;
  gdouble B;
  gdouble C;
  gdouble D;
  gdouble E;
  gdouble det;
  gdouble t1;
  gdouble t2;
  /* phantom */ gdouble x;
  /* phantom */ gdouble y;
  /* phantom */ gdouble z;
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return 0;
  }
  gts_triangle_vertices_edges( t, 0, &p1[0].object.klass[0].info.name[0], &p2[0].object.klass[0].info.name[0], &p3[0].object.klass[0].info.name[0], &e1, &e2, &e3 );
  if ( ( ( ( ( p3->x - p1->x ) * ( p2->x - p1->x ) ) + ( ( p2->y - p1->y ) * ( p3->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p3->z - p1->z ) ) ) * ( ( ( p3->x - p1->x ) * ( p2->x - p1->x ) ) + ( ( p2->y - p1->y ) * ( p3->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p3->z - p1->z ) ) ) ) - ( ( ( ( p2->x - p1->x ) * ( p2->x - p1->x ) ) + ( ( p2->y - p1->y ) * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p2->z - p1->z ) ) ) * ( ( ( p3->x - p1->x ) * ( p3->x - p1->x ) ) + ( ( p3->y - p1->y ) * ( p3->y - p1->y ) ) + ( ( p3->z - p1->z ) * ( p3->z - p1->z ) ) ) ) )
  {
  }
  else
  if ( !0 )
  {
  {
    gdouble d1;
    gdouble d2;
    gts_point_segment_distance2( p, (int)( &e1->segment ) );
    gts_point_segment_distance2( p, (int)( &e3->segment ) );
    return 0;
  }
  }
  C = ( p->x * E ) + ( p->y * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * p1->z );
  if ( 0.000000000000 <= ( ( ( ( ( p3->x - p1->x ) * ( p3->x - p1->x ) ) + ( ( p3->y - p1->y ) * ( p3->y - p1->y ) ) + ( ( p3->z - p1->z ) * ( p3->z - p1->z ) ) ) * ( ( p->x * E ) + ( p->y * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * p1->z ) ) ) - ( B * ( ( p->x * ( p3->x - p1->x ) ) + ( p->y * ( p3->y - p1->y ) ) + ( ( p3->z - p1->z ) * p1->z ) ) ) ) / det )
  {
    C = ( ( p2->x - p1->x ) * ( p2->x - p1->x ) ) + ( ( p2->y - p1->y ) * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p2->z - p1->z ) );
    if ( 0.000000000000 <= ( ( ( ( ( p2->x - p1->x ) * ( p2->x - p1->x ) ) + ( ( p2->y - p1->y ) * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p2->z - p1->z ) ) ) * ( ( p->x * ( p3->x - p1->x ) ) + ( p->y * ( p3->y - p1->y ) ) + ( ( p3->z - p1->z ) * p1->z ) ) ) - ( C * B ) ) / det )
    {
      B = 1.000000000000;
      if ( det + C <= 1.000000000000 )
      {
        det = ( ( ( det - p->x ) + ( E * C ) + ( ( p3->x - p1->x ) * det ) ) * ( ( det - p->x ) + ( E * C ) + ( ( p3->x - p1->x ) * det ) ) ) + ( ( ( C - p->y ) + ( ( p2->y - p1->y ) * C ) + ( ( p3->y - p1->y ) * det ) ) * ( ( C - p->y ) + ( ( p2->y - p1->y ) * C ) + ( ( p3->y - p1->y ) * det ) ) ) + ( ( ( p1->z - p->z ) + ( ( p2->z - p1->z ) * C ) + ( ( p3->z - p1->z ) * det ) ) * ( ( p1->z - p->z ) + ( ( p2->z - p1->z ) * C ) + ( ( p3->z - p1->z ) * det ) ) );
      }
      gts_point_segment_distance2( p, (int)( &e2->segment ) );
      return 0;
    }
    else
    {
      gts_point_segment_distance2( p, (int)( &e1->segment ) );
      return 0;
    }
  }
  else
  {
    gts_point_segment_distance2( p, (int)( &e3->segment ) );
    return 0;
  }
}
}
}
gdouble gts_point_triangle_distance( GtsPoint *p, GtsTriangle *t )
{
  int eax;
  int edx;
  double fp0;
  double fp7;
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return 0;
  }
  gts_point_triangle_distance2( p, t );
  if ( sqrt( 0.000000000000 ) == sqrt( 0.000000000000 ) )
  {
    if ( 1 )
    {
      return 1;
    }
    else
    {
    }
  }
  else
  {
  }
  sqrt( 0.000000000000 );
  return 1;
}
}
}
void gts_point_triangle_closest( GtsPoint *p, GtsTriangle *t, GtsPoint *closest )
{
  int eax;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  GtsPoint *p1, *p2, *p3;
  GtsEdge *e1, *e2, *e3;
  /* phantom */ GtsVector p1p2;
  /* phantom */ GtsVector p1p3;
  /* phantom */ GtsVector pp1;
  gdouble A;
  gdouble B;
  gdouble C;
  gdouble D;
  gdouble E;
  gdouble det;
  gdouble t1;
  gdouble t2;
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL" );
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
  if ( closest == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "closest != NULL" );
    return;
  }
  gts_triangle_vertices_edges( t, 0, &p1[0].object.klass[0].info.name[0], &p2[0].object.klass[0].info.name[0], &p3[0].object.klass[0].info.name[0], &e1, &e2, &e3 );
  D = p->x;
  A = p->z;
  det = ( ( ( ( p2->x - p1->x ) * ( p3->x - p1->x ) ) + ( ( p3->y - p1->y ) * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p3->z - p1->z ) ) ) * ( ( ( p2->x - p1->x ) * ( p3->x - p1->x ) ) + ( ( p3->y - p1->y ) * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p3->z - p1->z ) ) ) ) - ( ( ( ( p2->x - p1->x ) * ( p2->x - p1->x ) ) + ( ( p2->y - p1->y ) * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p2->z - p1->z ) ) ) * ( ( ( p3->x - p1->x ) * ( p3->x - p1->x ) ) + ( ( p3->y - p1->y ) * ( p3->y - p1->y ) ) + ( ( p3->z - p1->z ) * ( p3->z - p1->z ) ) ) );
  if ( ( ( ( ( p2->x - p1->x ) * ( p3->x - p1->x ) ) + ( ( p3->y - p1->y ) * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p3->z - p1->z ) ) ) * ( ( ( p2->x - p1->x ) * ( p3->x - p1->x ) ) + ( ( p3->y - p1->y ) * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p3->z - p1->z ) ) ) ) - ( ( ( ( p2->x - p1->x ) * ( p2->x - p1->x ) ) + ( ( p2->y - p1->y ) * ( p2->y - p1->y ) ) + ( ( p2->z - p1->z ) * ( p2->z - p1->z ) ) ) * ( ( ( p3->x - p1->x ) * ( p3->x - p1->x ) ) + ( ( p3->y - p1->y ) * ( p3->y - p1->y ) ) + ( ( p3->z - p1->z ) * ( p3->z - p1->z ) ) ) ) )
  {
    D = p1->x - D;
    A = ( ( p3->x - p1->x ) * D ) + ( ( p3->y - p1->y ) * ( p1->y - p->y ) );
    A += E * ( p1->z - A );
    D *= p2->x - p1->x;
    D += ( p2->y - p1->y ) * ( p1->y - p->y );
    D += ( p2->z - p1->z ) * ( p1->z - A );
    if ( 0.000000000000 <= ( ( ( ( ( p3->x - p1->x ) * ( p3->x - p1->x ) ) + ( ( p3->y - p1->y ) * ( p3->y - p1->y ) ) + ( ( p3->z - p1->z ) * ( p3->z - p1->z ) ) ) * ( D + ( ( p2->z - p1->z ) * ( p1->z - A ) ) ) ) - ( C * A ) ) / det )
    {
      C = ( ( ( ( ( p3->x - p1->x ) * ( p3->x - p1->x ) ) + ( ( p3->y - p1->y ) * ( p3->y - p1->y ) ) + ( ( p3->z - p1->z ) * ( p3->z - p1->z ) ) ) * ( D + ( ( p2->z - p1->z ) * ( p1->z - A ) ) ) ) - ( C * A ) ) / det;
      if ( 0.000000000000 <= ( ( B * A ) - ( D * C ) ) / det )
      {
        if ( 1.000000000000 < C + B )
        {
          gts_point_segment_closest( p, (int)( &e2->segment ), closest );
          return;
        }
        gts_point_set( closest, p1->x + ( ( p2->x - p1->x ) * C ) + ( ( p3->x - p1->x ) * B ), p1->y + ( ( p2->y - p1->y ) * C ) + ( ( p3->y - p1->y ) * B ), p1->z + ( ( p2->z - p1->z ) * C ) + ( E * B ) );
        return;
      }
      else
      {
        gts_point_segment_closest( p, (int)( &e1->segment ), closest );
        return;
      }
    }
    else
    {
      gts_point_segment_closest( p, (int)( &e3->segment ), closest );
      return;
    }
  }
  else
  {
  {
    /* phantom */ GtsPoint *cp;
    gts_point_segment_closest( p, (int)( &e1->segment ), (GtsPoint*)gts_object_new( (GtsObjectClass*)gts_point_class( ) ) );
    gts_point_segment_closest( p, (int)( &e3->segment ), closest );
    gts_point_distance2( (GtsPoint*)gts_object_new( (GtsObjectClass*)gts_point_class( ) ), p );
    gts_point_distance2( closest, p );
    if ( 0.000000000000 < 0.000000000000 )
    {
      gts_point_set( closest, *(int*)gts_object_new( (GtsObjectClass*)gts_point_class( ) )/*.12*/, *(int*)gts_object_new( (GtsObjectClass*)gts_point_class( ) )/*.20*/, *(int*)gts_object_new( (GtsObjectClass*)gts_point_class( ) )/*.28*/ );
      gts_object_destroy( gts_object_new( (GtsObjectClass*)gts_point_class( ) ) );
    }
    else
    {
      gts_object_destroy( gts_object_new( (GtsObjectClass*)gts_point_class( ) ) );
    }
    return;
  }
  }
}
}
}
}
GtsPoint *gts_segment_triangle_intersection( GtsSegment *s, GtsTriangle *t, gboolean boundary, GtsPointClass *klass )
{
  int eax;
  int edx;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  GtsPoint *A, *B, *C, *D, *E, *I;
  gdouble ABCE;
  gdouble ABCD;
  gdouble ADCE;
  gdouble ABDE;
  gdouble BCDE;
  gdouble c;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    E = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return &E->object.klass->info.name[0];
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    E = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return &E->object.klass->info.name[0];
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( klass == 0 )
  {
    E = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    return &E->object.klass->info.name[0];
  }
  A = &t->e1->segment.v1->p;
  B = &t->e1->segment.v2->p;
  if ( t->e2->segment.v1 == t->e1->segment.v1 || t->e2->segment.v1 == t->e1->segment.v2 )
  {
  }
  E = &s->v2->p;
  D = &s->v1->p;
  gts_point_orientation_3d( A, B, &t->e2->segment.v1->p, (int)( &s->v2->p ) );
  ABCE = 0.000000000000;
  gts_point_orientation_3d( A, B, &t->e2->segment.v1->p, D );
  if ( 0.000000000000 <= ABCE )
  {
    if ( 0.000000000000 <= 0.000000000000 )
    {
      gts_point_orientation_3d( A, D, &t->e2->segment.v1->p, E );
      ADCE = 0.000000000000;
      if ( boundary )
      {
        if ( 0.000000000000 < 0.000000000000 )
        {
          E = 0;
          return &E->object.klass->info.name[0];
        }
        else
        {
          gts_point_orientation_3d( A, B, D, E );
          if ( 0.000000000000 < 0.000000000000 )
            BCDE = 0.000000000000;
          else
          {
            gts_point_orientation_3d( B, &t->e2->segment.v2->p, D, E );
            (int)BCDE = ebp_72;
            if ( 0.000000000000 < 0.000000000000 )
              ABCD = 0.000000000000;
          }
        }
      }
      else
      if ( 0.000000000000 <= ADCE )
      {
      }
      else
      {
        gts_point_orientation_3d( A, B, D, E );
        if ( ebp_104 <= 0.000000000000 )
          BCDE = 0.000000000000;
        else
        {
          gts_point_orientation_3d( B, &t->e2->segment.v1->p, D, E );
          (int)BCDE = ebp_72;
          if ( ebp_104 <= 0.000000000000 )
            ABCD = 0.000000000000;
        }
      }
      if ( ABCE )
      {
      }
      else
      if ( !0 )
      {
        ABCD = 0.000000000000;
        if ( BCDE == 0.000000000000 )
        {
          E = 0;
          return &E->object.klass->info.name[0];
        }
        return &E->object.klass->info.name[0];
      }
      else
      {
      }
      if ( BCDE == BCDE )
      {
        ABCD = 0.000000000000;
        E = D;
        return &E->object.klass->info.name[0];
      }
      if ( boundary )
      {
        if ( BCDE != 0.000000000000 )
          ABCD = 0.000000000000;
        else
        if ( fp2 == BCDE )
        {
          if ( BCDE != ADCE )
            ABCD = 0.000000000000;
          else
          if ( !0 )
          {
            ABCD = 0.000000000000;
            E = A;
            return &E->object.klass->info.name[0];
          }
          ABCD = 0.000000000000;
          if ( BCDE == 0.000000000000 )
          {
            E = B;
            return &E->object.klass->info.name[0];
          }
        }
        else
          ABCD = 0.000000000000;
        if ( BCDE != 0.000000000000 )
        {
        }
        else
        {
          if ( fp2 == BCDE )
          {
            if ( BCDE == ADCE && BCDE == ADCE )
            {
              E = &t->e2->segment.v2->p;
              return &E->object.klass->info.name[0];
            }
          }
          else
          {
          }
        }
      }
      else
        ABCD = BCDE;
      E = (GtsPoint*)gts_object_new( (int)( &klass->parent_class ) );
      gts_point_set( (GtsPoint*)gts_object_new( (int)( &klass->parent_class ) ), E->x + ( ( ABCE / ( ABCE - ABCD ) ) * ( D->x - E->x ) ), E->y + ( ( ABCE / ( ABCE - ABCD ) ) * ( D->y - E->y ) ), E->z + ( ( ABCE / ( ABCE - ABCD ) ) * ( D->z - E->z ) ) );
      return &E->object.klass->info.name[0];
    }
  }
  else
  {
  }
  if ( 0.000000000000 < 0.000000000000 )
  {
  }
  else
  {
    if ( 0.000000000000 < ABCE )
    {
    }
    else
    {
      E = D;
      ABCE = 0.000000000000;
      D = E;
      gts_point_orientation_3d( A, D, &t->e2->segment.v1->p, E );
      ADCE = 0.000000000000;
    }
  }
}
}
}
}
void gts_point_transform( GtsPoint *p, GtsMatrix *m )
{
  int eax;
  int edx;
  /* phantom */ gdouble x;
  gdouble y;
  gdouble z;
{
  /* phantom */ int _g_boolean_var_;
  if ( m == 0 || p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL && m != NULL" );
    return;
  }
  p->x = m[0][3] + ( p->x * m[0][0] ) + ( p->y * m[0][1] ) + ( p->z * m[0][2] );
  p->y = m[1][3] + ( m[1][0] * p->x ) + ( m[1][1] * p->y ) + ( m[1][2] * p->z );
  p->z = m[2][3] + ( m[2][0] * p->x ) + ( m[2][1] * p->y ) + ( m[2][2] * p->z );
  return;
}
}
gdouble gts_point_orientation( GtsPoint *p1, GtsPoint *p2, GtsPoint *p3 )
{
  int eax;
  int ecx;
  int edx;
{
  /* phantom */ int _g_boolean_var_;
  if ( p2 == 0 || p1 == 0 || p3 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p1 != NULL && p2 != NULL && p3 != NULL" );
    return 0;
  }
  p3 = &p3->x + 12;
  p2 = &p2->x + 12;
  p1 = &p1->x + 12;
}
}
// Lost vars at line 717 through condition folding
gboolean gts_point_is_inside_surface( GtsPoint *p, GNode *tree, gboolean is_open )
{
  int ecx;
  int edx;
  GSList *list, *i;
  guint nc;
  GtsPoint *p1;
  /* phantom */ GtsBBox *bb;
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( tree == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "tree != NULL" );
    return 0;
  }
  *(int*)gts_object_new( (GtsObjectClass*)gts_point_class( ) )/*.12*/ = *(double*)(tree[2]) + ( abs( *(double*)(tree[2]) ) / 10.000000000000 );
  *(int*)gts_object_new( (GtsObjectClass*)gts_point_class( ) )/*.20*/ = p->y;
  *(int*)gts_object_new( (GtsObjectClass*)gts_point_class( ) )/*.28*/ = p->z;
  nc = 0;
  list = gts_bb_tree_stabbed( tree, p );
  if ( list )
  {
    i = list;
    do
    {
      gts_triangle_vertices( *(int*)(i[1].next), ebp_28, ebp_32, ebp_36 );
      if ( gts_point_orientation_3d_sos( ebp_28, ebp_32, ebp_36, p ) > 0 || list < 0 )
      {
        if ( esi <= 0 && gts_point_orientation_3d_sos( ebp_28, ebp_32, ebp_36, p ) >= 0 )
        {
          p1 = p;
          p = (GtsPoint*)gts_object_new( (GtsObjectClass*)gts_point_class( ) );
        }
        else
        {
          i = i->next;
        }
      }
      if ( gts_point_orientation_3d_sos( ebp_28, p, ebp_36, p1 ) >= 0 && gts_point_orientation_3d_sos( ebp_28, ebp_32, p, p1 ) >= 0 )
      {
        nc += ( gts_point_orientation_3d_sos( ebp_32, ebp_36, p, p1 ) < 0x80000000 ) & 1;
      }
    }
    while ( i->next == 0 );
  }
  g_slist_free( list );
  gts_object_destroy( gts_object_new( (GtsObjectClass*)gts_point_class( ) ) );
  if ( is_open )
  {
    return ( nc ^ 1 ) & 1;
  }
  return nc & 1;
}
}
}
gint sortp( gpointer *p, guint n )
{
  int edx;
  gint sign = 1;
  guint i;
  guint j;
  n += -1;
  if ( !1 )
  {
    i = 0;
    do
    {
      j = 0;
      do
      {
        if ( j < n - i )
        {
          do
          {
            j++;
            if ( *(int*)(p + -4) <= p )
            {
              do
              {
              }
              while ( *(int*)(p + -4) <= p );
            {
              /* phantom */ gpointer tmp;
              sign = 0 - sign;
              p = *(int*)(p + -4) = p;
            }
            }
          }
          }
          i++;
          return i;
        }
        while ( *(int*)(p + -4) <= p );
      }
      while ( n <= i );
    }
}
gint gts_point_orientation_3d_sos( GtsPoint *p1, GtsPoint *p2, GtsPoint *p3, GtsPoint *p4 )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble o;
{
  /* phantom */ int _g_boolean_var_;
  if ( p2 == 0 || p1 == 0 || p4 == 0 || p3 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p1 != NULL && p2 != NULL && p3 != NULL && p4 != NULL" );
  }
  orient3d( &p1->x, &p2->x, &p3->x, &p4->x );
  if ( ( "huge", 0 ) )
  {
    return ( ( 0.000000000000 < orient3d( &p1->x, &p2->x, &p3->x, &p4->x ) ) * 2 ) + -1;
  }
{
  GtsPoint *p[4];
  gdouble a[2], b[2], c[2];
  gint sign;
  p[2] = p3;
  p[0] = p1;
  p[1] = p2;
  p[3] = p4;
  a[0] = p[1]->x;
  a[1] = p[1]->y;
  b[0] = p[2]->x;
  b[1] = p[2]->y;
  c[0] = p[3]->x;
  c[1] = p[3]->y;
  orient2d( a, b, c );
  if ( orient3d( &p1->x, &p2->x, &p3->x, &p4->x ) == 0.000000000000 && orient3d( &p1->x, &p2->x, &p3->x, &p4->x ) == 0.000000000000 )
  {
    a[0] = p[1]->x;
    a[1] = p[1]->z;
    b[0] = p[2]->x;
    b[1] = p[2]->z;
    c[0] = p[3]->x;
    c[1] = p[3]->z;
    orient2d( a, b, c );
    if ( orient2d( a, b, c ) == 0.000000000000 && orient2d( a, b, c ) == 0.000000000000 )
    {
      a[0] = p[1]->y;
      a[1] = p[1]->z;
      b[0] = p[2]->y;
      b[1] = p[2]->z;
      c[0] = p[3]->y;
      c[1] = p[3]->z;
      orient2d( a, b, c );
      if ( orient2d( a, b, c ) == 0.000000000000 && orient2d( a, b, c ) == 0.000000000000 )
      {
        a[0] = p[0]->x;
        a[1] = p[0]->y;
        b[0] = p[2]->x;
        b[1] = p[2]->y;
        c[0] = p[3]->x;
        c[1] = p[3]->y;
        orient2d( a, b, c );
        if ( orient2d( a, b, c ) == 0.000000000000 && orient2d( a, b, c ) == 0.000000000000 )
        {
          if ( p[2]->x <= p[3]->x )
          {
            if ( p[3]->x <= p[3]->x )
            {
              if ( 0.000000000000 <= p[3]->y )
              {
                if ( 0.000000000000 <= 0.000000000000 )
                {
                  a[0] = p[0]->x;
                  a[1] = p[0]->z;
                  b[0] = p[3]->x;
                  b[1] = p[2]->z;
                  c[0] = p[3]->x;
                  c[1] = p[3]->z;
                  orient2d( a, b, c );
                  if ( !0 )
                  {
                    sign *= ( ( orient3d( &p1->x, &p2->x, &p3->x, &p4->x ) < orient2d( a, b, c ) ) * 2 ) + -1;
                  }
                  if ( p[2]->z <= 0.000000000000 )
                  {
                    if ( 0.000000000000 <= 0.000000000000 )
                    {
                      a[0] = 0.000000000000;
                      a[1] = p[0]->z;
                      b[0] = p[2]->y;
                      b[1] = 0.000000000000;
                      c[0] = p[3]->y;
                      c[1] = 0.000000000000;
                      orient2d( a, b, c );
                      if ( orient2d( a, b, c ) != 0.000000000000 || orient2d( a, b, c ) != 0.000000000000 )
                      {
                        sign *= ( ( orient2d( a, b, c ) <= orient2d( a, b, c ) ) * 2 ) + -1;
                      }
                      a[0] = p[0]->x;
                      a[1] = p[0]->y;
                      b[0] = p[1]->x;
                      b[1] = p[1]->y;
                      c[0] = p[3]->x;
                      c[1] = p[3]->y;
                      orient2d( a, b, c );
                      if ( orient2d( a, b, c ) == 0.000000000000 && orient2d( a, b, c ) == 0.000000000000 )
                      {
                        if ( p[3]->x < p[1]->x )
                        {
                        }
                        else
                        if ( p[3]->x < p[3]->x )
                        {
                        }
                        else
                        {
                          if ( 0.000000000000 < p[1]->y )
                          {
                          }
                          else
                          if ( 0.000000000000 < 0.000000000000 )
                          {
                          }
                          else
                          if ( p[0]->x < p[0]->x )
                          {
                          }
                          else
                          if ( p[3]->x < p[3]->x )
                          {
                            sign *= 1;
                          }
                        }
                        sign *= 1;
                      }
                    }
                    else
                    {
                    }
                  }
                  else
                  {
                  }
                }
                else
                {
                }
              }
              else
              {
              }
            }
            else
            {
            }
          }
          else
          {
          }
          sign *= -1;
        }
      }
    }
  }
}
}
}
gint gts_point_orientation_sos( GtsPoint *p1, GtsPoint *p2, GtsPoint *p3 )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  double fp5;
  double fp6;
  double fp7;
  gdouble o;
{
  /* phantom */ int _g_boolean_var_;
  if ( p2 == 0 || p1 == 0 || p3 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p1 != NULL && p2 != NULL && p3 != NULL" );
  }
  orient2d( &p1->x, &p2->x, &p3->x );
  if ( ( "huge", 0 ) )
  {
    return ( ( 0.000000000000 < orient2d( &p1->x, &p2->x, &p3->x ) ) * 2 ) + -1;
  }
{
  GtsPoint *p[3];
  gint sign;
  p[1] = p2;
  p[0] = p1;
  p[2] = p3;
  sortp( &p[0][0].object.klass[0].info.name, 3 );
  if ( p[1]->x <= p[2]->x )
  {
    if ( 0.000000000000 <= 0.000000000000 )
    {
      if ( 0.000000000000 < p[1]->y )
      {
      }
      else
      if ( 0.000000000000 < 0.000000000000 )
      {
      }
      else
      if ( p[0]->x < p[0]->x )
      {
      }
      else
      if ( 0.000000000000 < 0.000000000000 )
      {
        sign *= 1;
      }
    }
    else
    {
    }
  }
  else
  {
  }
  sign *= 1;
}
}
}
#if 0
#endif
