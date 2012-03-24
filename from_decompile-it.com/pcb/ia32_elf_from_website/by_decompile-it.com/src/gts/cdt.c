#include "cdt.c.h"
gboolean find_closest( gpointer key, gpointer value, gpointer user_data )
{
  double fp0;
  /* phantom */ SFindClosest *data;
  /* phantom */ GtsFace *f;
  gts_triangle_orientation( &value[0] );
  if ( 0.000000000000 < 0.000000000000 )
  {
    GtsPoint *p1 = &value[3];
    gdouble d;
    if ( ( ( user_data[3] - p1->x ) * ( user_data[3] - p1->x ) ) + ( ( user_data[3] - p1->y ) * ( user_data[3] - p1->y ) ) < *(double*)(user_data) )
    {
      user_data = ( ( user_data[3] - p1->x ) * ( user_data[3] - p1->x ) ) + ( ( user_data[3] - p1->y ) * ( user_data[3] - p1->y ) );
      user_data[2] = value;
    }
    else
    {
    }
  }
  user_data[4] += -1;
  return *(int*)(user_data + 16) + -1 <= 0;
}
GtsFace *neighbor( GtsFace *f, GtsEdge *e, GtsSurface *surface )
{
  GSList *i = e->triangles;
  /* phantom */ GtsTriangle *t;
  if ( i )
  {
  {
    do
    {
      GtsTriangle *t1 = &i->data[0];
      if ( i != f )
      {
        if ( gts_face_class( ) == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        else
        if ( t1 )
        {
          if ( t1 == 0 )
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
          else
          do
          {
            if ( t1[2].e2 == gts_face_class( ) )
            {
              if ( gts_face_has_parent_surface( &t1[0].object.klass[0].info.name[0], surface ) == 0 )
                break;
              else
                break;
            }
            else
          }
          while ( t1[2].e2[2].segment.v2 );
        }
      }
      i = i->next;
    }
    while ( i->next );
  }
  }
  return &t1->object.klass->info.name[0];
}
void triangle_barycenter( GtsTriangle *t, GtsPoint *b )
{
  int eax;
  /* phantom */ GtsPoint *p;
  if ( t->e2->segment.v1 != t->e1->segment.v1 )
  {
    if ( t->e2->segment.v1 == t->e1->segment.v2 )
      goto B3;
    else
    {
      b->x = ( t->e2->segment.v1->p.x + t->e1->segment.v1->p.x + *(double*)(t->e1->segment.v2 + 12) ) / 3.000000000000;
      b->y = ( t->e2->segment.v1->p.y + t->e1->segment.v1->p.y + *(double*)(t->e1->segment.v2 + 20) ) / 3.000000000000;
      return;
    }
  }
  else
  {
  }
B3:;
  b->x = ( t->e2->segment.v1->p.x + t->e1->segment.v1->p.x + *(double*)(t->e1->segment.v2 + 12) ) / 3.000000000000;
  b->y = ( t->e2->segment.v1->p.y + t->e1->segment.v1->p.y + *(double*)(t->e1->segment.v2 + 20) ) / 3.000000000000;
  return;
}
GtsFace *point_locate( GtsPoint *o, GtsPoint *p, GtsFace *f, GtsSurface *surface )
{
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp7;
  GtsEdge *prev;
  gboolean on_summit;
  GtsVertex *v1, *v2, *v3;
  GtsEdge *e2, *e3;
  gts_triangle_vertices_edges( &f[0].triangle, 0, ebp_52, ebp_56, ebp_60, ebp_64, ebp_68, ebp_72 );
  gts_point_orientation( o, ebp_52, p );
  if ( 0.000000000000 <= 0.000000000000 )
  {
    if ( 0.000000000000 < 0.000000000000 )
    {
      gts_point_orientation( o, ebp_60, p );
      if ( 0.000000000000 <= 0.000000000000 )
      {
        if ( 0.000000000000 < 0.000000000000 )
        {
          gts_point_orientation( ebp_56, ebp_60, p );
          if ( 0.000000000000 < 0.000000000000 )
          {
            prev = ebp_64;
            if ( prev == 0 || neighbor( f, ebp_64, surface ) == 0 )
            {
              return &f->triangle.object.klass->info.name[0];
            }
            gts_triangle_vertices_edges( &f[0].triangle, prev, &v1, &v2, &v3, &prev, &e2, &e3 );
            while ( 1 )
            {
              gts_point_orientation( o, (int)( &v3->p ), p );
              if ( 0.000000000000 < 0.000000000000 )
              {
                gts_point_orientation( (int)( &v2->p ), (int)( &v3->p ), p );
                orient = 0.000000000000;
                if ( 0.000000000000 < 0.000000000000 )
                {
                  f = neighbor( f, e2, surface );
                  prev = e2;
                  v1 = v3;
                }
                else
                  break;
              }
              else
              if ( 0.000000000000 < 0.000000000000 )
              {
                gts_point_orientation( (int)( &v3->p ), (int)( &v1->p ), p );
                orient = 0.000000000000;
                if ( 0.000000000000 < 0.000000000000 )
                {
                  f = neighbor( f, e3, surface );
                  prev = e3;
                  v2 = v3;
                }
                else
                  break;
              }
              else
              {
                GtsFace *f1;
                gts_point_orientation( (int)( &v2->p ), (int)( &v3->p ), p );
                orient = 0.000000000000;
                if ( 0.000000000000 < 0.000000000000 )
                {
                  if ( neighbor( f, e2, surface ) == 0 )
                  {
                    if ( neighbor( f, f->triangle.e3, &e3->segment.object.klass->info.name[0] ) )
                    {
                      triangle_barycenter( &f1[0].triangle, o );
                      return point_locate( o, p, f1, surface );
                    }
                    f = 0;
                    break;
                  }
                }
                else
                  break;
              }
              if ( f == 0 )
                break;
              if ( f->triangle.e1 == prev )
              {
                e2 = f->triangle.e2;
                e3 = f->triangle.e3;
              }
              else
              {
                e3 = f->triangle.e2;
                if ( f->triangle.e2 == prev )
                {
                  e3 = f->triangle.e1;
                  e2 = f->triangle.e3;
                }
                else
                  e2 = f->triangle.e1;
              }
              if ( v1 == e2->segment.v1 || v2 == e2->segment.v1 )
              {
                v3 = e2->segment.v2;
              }
              else
              {
                v3 = e2->segment.v1;
              }
            }
          }
          else
          {
            gdouble orient;
            on_summit = 0;
          {
            GtsFace *f1;
            prev = 0;
            if ( on_summit == 0 )
            {
              return &f->triangle.object.klass->info.name[0];
            }
            if ( neighbor( f, f->triangle.e1, surface ) == 0 && neighbor( f, f->triangle.e2, surface ) == 0 )
            {
            }
          }
          }
        }
        else
        {
          gts_point_orientation( ebp_60, ebp_116, ebp_112 );
          prev = 0;
        }
      }
      else
      {
        gts_point_orientation( ebp_60, ebp_52, p );
        if ( 0.000000000000 < 0.000000000000 )
        {
        }
      }
    }
    else
    {
      gts_point_orientation( ebp_56, ebp_60, p );
      if ( 0.000000000000 < 0.000000000000 )
      {
      }
    }
  }
  else
  {
    gts_point_orientation( o, ebp_56, p );
    if ( 0.000000000000 <= 0.000000000000 )
    {
      if ( 0.000000000000 < 0.000000000000 )
      {
        gts_point_orientation( ebp_52, ebp_56, p );
        if ( 0.000000000000 < 0.000000000000 )
        {
        }
      }
    }
    else
    {
      gts_point_orientation( ebp_56, ebp_60, p );
      if ( 0.000000000000 < 0.000000000000 )
        continue;
    }
  }
  gts_point_orientation( ebp_60, ebp_116, ebp_112 );
  prev = 0;
}
gpointer gts_object_is_from_class( gpointer object, gpointer klass )
{
  if ( klass == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    return 0;
  }
  if ( eax )
  {
    if ( eax == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
      return 0;
    }
    do
    {
      if ( klass == *(int*)(eax + 64) )
        break;
    }
    while ( *(int*)(*(int*)(eax + 64) + 64) );
    return 0;
  }
  return &eax;
}
GtsFace *gts_point_locate( GtsPoint *p, GtsSurface *surface, GtsFace *guess )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  GtsFace *fr;
  /* phantom */ GtsPoint *o;
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL" );
    fr = 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( surface == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "surface != NULL" );
    fr = 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( guess )
  {
    if ( gts_face_has_parent_surface( guess, surface ) == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "guess == NULL || gts_face_has_parent_surface (guess, surface)" );
      fr = 0;
    }
  {
    /* phantom */ int _g_boolean_var_;
    gts_triangle_orientation( &guess[0].triangle );
    if ( 0.000000000000 <= 0.000000000000 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "gts_triangle_orientation (GTS_TRIANGLE (guess)) &gt; 0." );
      return 0;
    }
  }
  }
  else
  {
    g_hash_table_find( (int)( &surface->faces ), &find_closest, ebp_48 );
    guess = 0;
    fr = 0;
    if ( 0 )
    {
      triangle_barycenter( &guess[0].triangle, (GtsPoint*)gts_object_new( (GtsObjectClass*)gts_point_class( ) ) );
      gts_object_destroy( gts_object_new( (GtsObjectClass*)gts_point_class( ) ) );
      return ebp_72;
    }
  }
  triangle_barycenter( &guess[0].triangle, (GtsPoint*)gts_object_new( (GtsObjectClass*)gts_point_class( ) ) );
  gts_object_destroy( gts_object_new( (GtsObjectClass*)gts_point_class( ) ) );
  return ebp_72;
}
}
  return 0;
}
}
GtsConstraintClass *gts_constraint_class( void )
{
  int eax;
  int edx;
  int edi;
  static GtsConstraintClass *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo constraint_info = { };
    constraint_info.name[0] = 'G';
    *(int*)&constraint_info.name[4] = 0x74736e6f;
    *(int*)&constraint_info.name[8] = 0x6e696172;
    *(int*)&constraint_info.name[12] = 116;
    do
    {
      *(int*)&constraint_info.name[15] = 0;
    }
    while ( klass + 4 + 4 < 24 );
    constraint_info.object_size = 24;
    constraint_info.class_size = 92;
    klass = gts_object_class_new( (GtsObjectClass*)gts_edge_class( ), &constraint_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
void swap_if_in_circle( GtsFace *f1, GtsVertex *v1, GtsVertex *v2, GtsVertex *v3, GtsEdge *e1, GtsEdge *e2, GtsEdge *e3, GtsSurface *surface )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  double fp1;
  GtsFace *f2;
  GtsEdge *e4, *e5;
  GtsVertex *v4;
  while ( 1 )
  {
    if ( gts_constraint_class( ) == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    }
    else
    if ( e1 )
    {
      if ( e1 == 0 )
      {
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
      }
      else
      do
      {
        if ( e1[2].segment.v2 == gts_constraint_class( ) )
          break;
      }
      while ( e1[2].segment.v2[1].p.y << 32 );
    }
    f2 = neighbor( f4, e1, surface );
    if ( f2 == 0 )
      break;
    e4 = &e4->segment.v1->p.object.klass->info.name[0];
    if ( e4->segment.v1 == e1 )
      e5 = f2->triangle.e3;
    else
    {
      e5 = &f2->triangle.e2;
      if ( f2->triangle.e2 == e1 )
        e5 = e4;
    }
    v4 = &f2->triangle.e3->segment.v1;
    if ( e1->segment.v1 == e4->segment.v1 || e1->segment.v2 == v4 )
      v4 = e4->segment.v2;
    gts_point_in_circle( &v4[0].p, &v1[0].p, &v2[0].p, &v3[0].p );
    if ( 0.000000000000 <= 0.000000000000 )
      break;
  {
    GtsEdge *en;
    GtsSegment *sn = gts_vertices_are_connected( v3, v4 );
    GtsFace *f3, *f4;
    if ( gts_edge_class( ) == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    }
    else
    if ( sn )
    {
      if ( sn == 0 )
      {
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
      }
      else
      do
      {
        if ( sn[3].object.reserved == gts_edge_class( ) )
          en = &sn[0].object.klass[0].info.name[0];
          f3 = gts_face_new( &surface->face_class, en, e5, e2 );
          gts_object_attributes( (int)( &f3->triangle.object ), &f1[0].triangle.object );
          f4 = gts_face_new( &surface->face_class, en, e3, e4 );
          gts_object_attributes( (int)( &f4->triangle.object ), (int)( &f2->triangle.object ) );
          if ( gts_list_face_class( ) == 0 )
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
          else
          if ( f3 )
          {
            if ( f3->triangle.object.klass->info.name[0] == 0 )
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
            else
            do
            {
              if ( f3->_GtsFace == gts_list_face_class( ) )
              {
                GSList *last3, *last4;
                if ( gts_list_face_class( ) == 0 )
                {
                  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
                }
                else
                if ( f1 )
                {
                  if ( f1 == 0 )
                    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
                  else
                  do
                  {
                    if ( f1[2].triangle.object.flags == gts_list_face_class( ) )
                    {
                      last3 = 0;
                      last3 = 0;
                      if ( f1[1].triangle.object.klass == 0 )
                      {
                      }
                      else
                      {
                        do
                        {
                          gts_point_orientation( &v3[0].p, &v4[0].p, &last3->data[0] );
                          if ( 0.000000000000 <= 0.000000000000 )
                          {
                            if ( 0 )
                              last3->next = last3;
                            else
                            {
                              last3 = &last3->data[0];
                              f3[1].triangle.object.klass = last3->data[0];
                            }
                          }
                          else
                          if ( last3->data[0] )
                          {
                            last3 = last3->next = &last3->data[0];
                            if ( last3[1].data )
                              continue;
                            else
                              break;
                          }
                          else
                          {
                            last3 = &last3->data[0];
                            f4[1].triangle.object.klass = last3->data[0];
                          }
                          last3 = last3->next;
                        }
                        while ( last3->next == 0 );
                        last3 += 0;
                        v4 = v4;
                        v3 = v3;
                        last3 = &v3[0].p.object.klass[0].info.name[0];
                      }
                      f4[1].triangle.object.klass = 0;
                      last4 = last3;
                      if ( gts_list_face_class( ) == 0 )
                      {
                        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, ebp_96 );
                        if ( last3 )
                          last3->next = 0;
                        if ( last4 )
                          last4->next = 0;
                      }
                      else
                      {
                        if ( f2->triangle.object.klass->info.name[0] == 0 )
                        {
                          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, ebp_96 );
                        }
                        else
                        {
                          if ( f2->triangle.object.klass->info.name[0] != gts_list_face_class( ) )
                          {
                            do
                            {
                              if ( f2->_GtsFace == 0 )
                                continue;
                              else
                            }
                            while ( f2->triangle.object.klass->info.name[0] != gts_list_face_class( ) );
                          }
                          last3 = &f2[1].triangle.object.klass->info.name[0];
                          if ( f2[1].triangle.object.klass )
                          {
                            do
                            {
                              gts_point_orientation( &v3[0].p, &v4[0].p, &last3->data[0] );
                              if ( 0.000000000000 <= 0.000000000000 )
                              {
                                if ( f3[1].triangle.object.klass )
                                  last3->next = last3;
                                else
                                {
                                  last3 = &last3->data[0];
                                  f3[1].triangle.object.klass = last3->data[0];
                                }
                              }
                              else
                              if ( v2->p.object.klass->info.name[0] )
                              {
                                last3 = last3->next = &last3->data[0];
                                if ( last3[1].data )
                                  continue;
                                else
                                  break;
                              }
                              else
                              {
                                last3 = &last3->data[0];
                                f4[1].triangle.object.klass = last3->data[0];
                              }
                              last3 = last3->next;
                            }
                            while ( last3->next == 0 );
                            last3 += 0;
                            v4 = v4;
                            v3 = v3;
                          }
                          f2[1].triangle.object.klass = 0;
                        }
                      }
                    }
                    else
                    {
                    }
                  }
                  while ( f1[2].triangle.object.flags );
                }
                last4 = 0;
                last3 = 0;
                if ( gts_list_face_class( ) == 0 )
                {
                  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, ebp_96 );
                }
                else
                {
                }
              }
              else
              {
              }
            }
            while ( f3->_GtsFace );
          }
          gts_surface_remove_face( surface, f1 );
          gts_surface_remove_face( surface, f2 );
          gts_surface_add_face( surface, f3 );
          gts_surface_add_face( surface, f4 );
          swap_if_in_circle( f3, v4, v2, v3, e5, e2, en, surface );
          e1 = e4;
          e2 = en;
          break;
          while ( 1 )
          {
          }
        else
      }
      while ( sn[3].object.reserved[16] );
    }
    en = gts_edge_new( &surface->edge_class, v3, v4 );
    f3 = gts_face_new( &surface->face_class, en, e5, e2 );
    gts_object_attributes( (int)( &f3->triangle.object ), &f1[0].triangle.object );
    f4 = gts_face_new( &surface->face_class, en, e3, e4 );
    gts_object_attributes( (int)( &f4->triangle.object ), (int)( &f2->triangle.object ) );
  }
  }
}
GtsVertex *gts_delaunay_add_vertex_to_face( GtsSurface *surface, GtsVertex *v, GtsFace *f )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  double fp0;
  double fp1;
  double fp2;
  double fp6;
  double fp7;
  GtsEdge *e1, *e2, *e3;
  GtsSegment *s4, *s5, *s6;
  GtsEdge *e4, *e5, *e6;
  GtsVertex *v1, *v2, *v3;
  GtsFace *nf[3];
{
  /* phantom */ int _g_boolean_var_;
  if ( surface == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "surface != NULL" );
    return v;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( v == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v != NULL" );
    v = 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    return v;
  }
  gts_triangle_vertices_edges( &f[0].triangle, 0, &v1, &v2, &v3, &e1, &e2, &e3 );
  v = v1;
  if ( v1 == v || v2 == v || v3 == v )
  {
    v = 0;
  }
  if ( v->p.x == v->p.x && v->p.y == v->p.y )
  {
    return v;
  }
  if ( v2->p.x == v->p.x && v->p.y == v->p.y && v->p.y == v->p.y )
  {
  }
  if ( v->p.x != v->p.x || v->p.y != v->p.y || v->p.y != v->p.y )
  {
    s4 = gts_vertices_are_connected( v, &v->p.object.klass->info.name[0] );
    if ( gts_object_is_from_class( &v->p.object.klass->info.name[0], gts_edge_class( ) ) == 0 )
    {
      s4 = (GtsSegment*)gts_edge_new( surface->edge_class, v, v1 );
    }
    s5 = gts_vertices_are_connected( v, v2 );
    if ( gts_object_is_from_class( &v->p.object.klass->info.name[0], gts_edge_class( ) ) == 0 )
    {
      s5 = (GtsSegment*)gts_edge_new( surface->edge_class, v, v2 );
    }
    s6 = gts_vertices_are_connected( v, v3 );
    if ( gts_object_is_from_class( &v->p.object.klass->info.name[0], gts_edge_class( ) ) == 0 )
    {
      s6 = (GtsSegment*)gts_edge_new( surface->edge_class, v, v3 );
    }
    nf[0] = gts_face_new( surface->face_class, &s4->object.klass->info.name[0], e1, &s5->object.klass->info.name[0] );
    gts_object_attributes( &nf[0][0].triangle.object, &f[0].triangle.object );
    nf[1] = gts_face_new( surface->face_class, &s5->object.klass->info.name[0], e2, &s6->object.klass->info.name[0] );
    gts_object_attributes( &nf[1][0].triangle.object, &f[0].triangle.object );
    nf[2] = gts_face_new( surface->face_class, &s6->object.klass->info.name[0], e3, &s4->object.klass->info.name[0] );
    gts_object_attributes( &nf[2][0].triangle.object, &f[0].triangle.object );
    if ( gts_object_is_from_class( &v->p.object.klass->info.name[0], gts_list_face_class( ) ) && gts_object_is_from_class( &v->p.object.klass->info.name[0], gts_list_face_class( ) ) )
    {
      GSList *i = &f[1].triangle.object.klass->info.name[0], *last[3];
      last[0] = 0;
      last[1] = 0;
      last[2] = 0;
      if ( f[1].triangle.object.klass )
      {
        GtsPoint *p;
        GSList *next;
        guint j;
        do
        {
          p = &i->data[0];
          next = i->next;
          if ( v != i )
          {
            gts_point_orientation( &v[0].p, (int)( &v1->p ), p );
            if ( 0.000000000000 <= 0.000000000000 )
            {
              gdouble o;
              gts_point_orientation( &v[0].p, (int)( &v2->p ), p );
              if ( 0.000000000000 != 0.000000000000 || 0.000000000000 != 0.000000000000 )
              {
                j = 0;
                j = fp0 < 0.000000000000;
              }
              else
              {
                gts_point_orientation( &v[0].p, (int)( &v3->p ), p );
                j = 0;
                j = 0.000000000000 <= 0.000000000000;
              }
            }
            else
            {
              gts_point_orientation( &v[0].p, (int)( &v3->p ), p );
              j = 0;
              j = 0.000000000000 < 0.000000000000;
              j = ( 0.000000000000 < 0.000000000000 ) + 1;
            }
            if ( last[ j ] )
              last[ j ]->next = i;
            else
              nf[ j ][1].triangle.object.klass = i;
            last[ j ] = i;
          }
          else
            g_slist_free_1( i );
          i = next;
        }
        while ( next );
        f = f;
        surface = surface;
        f[1].triangle.object.klass = 0;
        if ( last[0] )
          last[1] = 0;
        if ( last[1] )
          last[1]->next = 0;
        if ( last[2] )
          i->next = 0;
      }
      else
        f[1].triangle.object.klass = 0;
    }
    gts_surface_remove_face( surface, f );
    gts_surface_add_face( surface, gts_face_new( surface->face_class, &s4->object.klass->info.name[0], e1, &s5->object.klass->info.name[0] ) );
    gts_surface_add_face( surface, gts_face_new( surface->face_class, &s5->object.klass->info.name[0], e2, &s6->object.klass->info.name[0] ) );
    gts_surface_add_face( surface, gts_face_new( surface->face_class, &s6->object.klass->info.name[0], e3, &s4->object.klass->info.name[0] ) );
    swap_if_in_circle( gts_face_new( surface->face_class, &s4->object.klass->info.name[0], e1, &s5->object.klass->info.name[0] ), v1, v2, v, e1, &s5->object.klass->info.name[0], &s4->object.klass->info.name[0], surface );
    swap_if_in_circle( gts_face_new( surface->face_class, &s5->object.klass->info.name[0], e2, &s6->object.klass->info.name[0] ), v2, v3, v, e2, &s6->object.klass->info.name[0], &s5->object.klass->info.name[0], surface );
    swap_if_in_circle( gts_face_new( surface->face_class, &s6->object.klass->info.name[0], e3, &s4->object.klass->info.name[0] ), v3, v1, v, e3, &s4->object.klass->info.name[0], &s6->object.klass->info.name[0], surface );
    v = 0;
  }
}
}
}
}
GtsVertex *gts_delaunay_add_vertex( GtsSurface *surface, GtsVertex *v, GtsFace *guess )
{
  int eax;
  int ebx;
  int esi;
  GtsFace *f;
{
  /* phantom */ int _g_boolean_var_;
  if ( surface == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "surface != NULL" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( v == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v != NULL" );
    return v;
  }
  if ( f )
  {
    guess = f;
  }
}
  return v;
}
}
void triangulate_polygon( GSList *poly, GtsSurface *surface, GtsFace *ref )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  double fp1;
  GSList *i, *poly1, *poly2;
  GtsVertex *v1, *v2, *v3;
  gboolean found;
  GtsSegment *s, *s1, *s2;
  GtsEdge *e1, *e2;
  GtsFace *f;
  if ( !1 )
  {
    i = &(GSList*)(poly->next);
    if ( (poly->next) == 0 )
      goto B2;
    else
    {
      do
      {
        s = &poly2->data[0];
        s1 = &i->data[0];
        poly1 = &s->v1->p.object.klass->info.name[0];
        if ( s->v1 == s1->v1 || (v2->p.x << 32) == s->v1 )
          poly1 = &s->v2->p.object.klass->info.name[0];
        else
        {
          /* phantom */ int _g_boolean_var_;
          v2 = &s->v2;
          if ( s->v2 != s1->v1 )
          {
            if ( s1->v2 != v2 )
              g_assertion_message_expr( 0, "../../src/gts/cdt.c", 710, __PRETTY_FUNCTION__, "s-&gt;v2 == s1-&gt;v1 || s-&gt;v2 == s1-&gt;v2" );
          }
        }
        found = 0;
        v3 = s1->v2;
        if ( (_Bool)( 1 ) )
        {
          do
          {
            if ( i )
            {
              s1 = &i->data[0];
              v3 = &i->_GSList;
              if ( s1->v1 == v3->p.object.klass->info.name[0] )
                goto B16;
              else
            {
              /* phantom */ int _g_boolean_var_;
              if ( s1->v2 != v3 )
                g_assertion_message_expr( 0, "../../src/gts/cdt.c", 722, __PRETTY_FUNCTION__, "s1-&gt;v2 == v3" );
              else
              {
                if ( v3 != poly1 )
                {
                  gts_point_orientation( &poly1->data[0], &i->data[0], &v3[0].p );
                  if ( 0.000000000000 <= 0.000000000000 )
                  {
                    poly = poly;
                    v3 = 0;
                    for ( ; v3 == *(int*)(poly[1].next) || poly[1].next == *(int*)(poly[1].next) || *(int*)(poly[1].next) == *(int*)(poly[1].next) || poly1 == *(int*)(poly[1].next) || v3 == *(int*)(poly[1].next);  )
                    {
                      v3 = &poly[2].data[0];
                      if ( poly[2].data != v3->p.object.klass->info.name[0] && poly[1].next != v3 && poly[2].data != v3 && v3 != poly1 )
                      {
                        if ( v3 != v3 )
                        {
                          gts_point_in_circle( &v3[0].p, &poly1->data[0], &v3->p.x << 32, &v3[0].p );
                          if ( 0.000000000000 <= 0.000000000000 )
                            v3 = &v3->p.x << 32;
                          else
                            v3 = v3;
                        }
                        else
                        {
                          poly = poly->next;
                          v3 = v3;
                          if ( poly->next == 0 )
                          {
                            v3 = v3;
                            found = 1;
                            v3 = v3;
                            if ( found == 0 )
                            {
                              do
                              {
                              }
                              while ( found );
                            }
                            else
                            {
                              s1 = &eax[0].segment;
                              if ( gts_edge_class( ) == 0 )
                                g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
                              else
                              if ( s1 )
                              {
                                if ( s1 == 0 )
                                {
                                  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
                                }
                                else
                                do
                                {
                                  if ( s1[3].object.reserved == gts_edge_class( ) )
                                    e1 = &s1[0].object.klass[0].info.name[0];
                                    s2 = gts_vertices_are_connected( v3, &poly1->data[0] );
                                    if ( gts_edge_class( ) == 0 )
                                      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
                                    else
                                    if ( s2 )
                                    {
                                      if ( s2 == 0 )
                                        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
                                      else
                                      do
                                      {
                                        if ( s2[3].object.reserved == gts_edge_class( ) )
                                        {
                                          f = gts_face_new( surface->face_class, &s->object.klass->info.name[0], e1, e2 );
                                          gts_object_attributes( (GtsObject*)gts_face_new( surface->face_class, &s->object.klass->info.name[0], e1, e2 ), &ref[0].triangle.object );
                                          gts_surface_add_face( surface, f );
                                          poly1 = poly->next;
                                          g_slist_free_1( poly );
                                          poly2 = &i->next;
                                          if ( i->next && poly2 != e2 )
                                          {
                                            poly2 = g_slist_prepend( poly2, &e2 );
                                          }
                                          if ( i->data[0] != e1 )
                                          {
                                            i->next = g_slist_prepend( 0, &e1 );
                                          }
                                          else
                                            i->next = 0;
                                          triangulate_polygon( poly1, surface, ref );
                                          if ( poly2 )
                                          {
                                            i = poly2->next;
                                            if ( poly2->next == 0 )
                                              goto B88;
                                            else
                                            {
                                              do
                                              {
                                                s = &poly2->data[0];
                                                s1 = &i->data[0];
                                                poly1 = &s->v1->p.object.klass->info.name[0];
                                              }
                                              while ( poly2->next );
                                            }
                                          }
B88:;
                                        }
                                        else
                                      }
                                      while ( s2[3].object.reserved[16] );
                                    }
                                    e2 = gts_edge_new( surface->edge_class, v3, &poly1->data[0] );
                                    f = gts_face_new( surface->face_class, &s->object.klass->info.name[0], e1, e2 );
                                    gts_object_attributes( (GtsObject*)gts_face_new( surface->face_class, &s->object.klass->info.name[0], e1, e2 ), &ref[0].triangle.object );
                                    gts_surface_add_face( surface, f );
                                    poly1 = poly->next;
                                    g_slist_free_1( poly );
                                    poly2 = &i->next;
                                  else
                                }
                                while ( s1[3].object.reserved[16] );
                              }
                              e1 = eax;
                              s2 = gts_vertices_are_connected( v3, &poly1->data[0] );
                            }
                          }
                          else
                          {
                            v3 = v3;
                          }
                        }
                      }
                      poly = poly->next;
                      if ( poly->next == 0 )
                      {
                        v3 = v3;
                        found = 1;
                        v3 = v3;
                      }
                      else
                      {
                        v3 = v3;
                      }
                    }
                    gts_point_in_circle( *(int*)(poly[1].next), &poly1->data[0], *(int*)(poly[1].next), &v3[0].p );
                    if ( 0.000000000000 <= 0.000000000000 )
                      goto B29;
                    else
                      v3 = v3;
B29:;
                    v3 = &poly[2].data[0];
                  }
                }
                i = &i->next;
                found = 0;
              }
            }
B16:;
              v3 = s1->v2;
            }
            else
            {
              *ebp_104 = poly2;
              g_slist_free( poly2 );
              break;
            }
          }
          while ( found );
        }
        s1 = &eax[0].segment;
      }
      while ( poly2->next );
B88:;
    }
  }
B2:;
  *ebp_104 = poly2;
  g_slist_free( poly2 );
  return;
}
void gts_delaunay_remove_vertex( GtsSurface *surface, GtsVertex *v )
{
  int eax;
  int ecx;
  int edx;
  GSList *triangles, *i;
  GtsFace *ref;
{
  /* phantom */ int _g_boolean_var_;
  if ( surface == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "surface != NULL" );
  }
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( v == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v != NULL" );
  }
  else
  {
    triangles = gts_vertex_triangles( v, 0 );
    if ( triangles )
    {
      i = triangles;
      do
      {
        if ( gts_face_class( ) )
        {
          if ( i )
          {
            if ( i->data[0] == 0 )
            {
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
            }
            else
            do
            {
              if ( i->_GSList == gts_face_class( ) )
              {
                if ( gts_face_has_parent_surface( &i->data[0], surface ) )
                  ref = &i->data[0];
                else
                  break;
              }
              else
            }
            while ( i->_GSList );
          }
          ref = 0;
        }
        else
        {
          ref = 0;
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        }
        i = i->next;
      }
      while ( ( ( i == 0 ) & 255 ) && i );
      if ( ref == 0 )
        goto B10;
      else
      {
        gts_vertex_fan_oriented( ebp_32, surface );
        triangulate_polygon( i == 0, surface, ref );
        i = triangles;
        do
        {
          if ( gts_face_class( ) )
          {
            if ( i )
            {
              if ( i->data[0] == 0 )
                g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
              else
              do
              {
                if ( i->_GSList == gts_face_class( ) )
                {
                  if ( gts_face_has_parent_surface( &i->data[0], surface ) )
                  {
                    gts_surface_remove_face( surface, &i->data[0] );
                    break;
                  }
                  else
                    break;
                }
                else
              }
              while ( i->_GSList );
            }
          }
          else
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
          i = i->next;
        }
        while ( i->next );
        surface = &triangles->data[0];
      }
    }
B10:;
    g_slist_free( triangles );
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "ref" );
  }
}
  return;
}
}
void remove_triangles( GtsEdge *e, GtsSurface *s )
{
  int ecx;
  GSList *i = e->triangles;
  if ( e->triangles )
  {
  {
    do
    {
      if ( gts_face_class( ) )
      {
        if ( i )
        {
          if ( i->data[0] == 0 )
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
          else
          do
          {
            if ( i->_GSList == gts_face_class( ) )
            {
              if ( gts_face_has_parent_surface( &i->data[0], s ) )
              {
                gts_surface_remove_face( s, &i->data[0] );
                break;
              }
              else
                break;
            }
            else
          }
          while ( i->_GSList );
        }
      }
      else
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      i = next;
    }
    while ( next );
  }
  }
  return;
}
GSList *remove_intersected_edge( GtsSegment *s, GtsEdge *e, GtsFace *f, GtsSurface *surface, GSList **left, GSList **right )
{
  int edx;
  double fp0;
  double fp1;
  double fp2;
#error unstructured control flow
}
GSList *gts_delaunay_add_constraint( GtsSurface *surface, GtsConstraint *c )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  double fp1;
  double fp2;
#error unstructured control flow
}
void delaunay_check( GtsTriangle *t, gpointer *data )
{
  int esi;
  double fp0;
  /* phantom */ GtsSurface *surface;
  GtsFace **face;
  face[0] = &data[1][0];
  if ( face[0] == 0 )
  {
    GSList *i, *list;
    GtsVertex *v1, *v2, *v3;
    gts_triangle_vertices( t, &v1, &v2, &v3 );
    if ( gts_vertex_neighbors( v3, gts_vertex_neighbors( v2, gts_vertex_neighbors( v1, 0, &data[0][0] ), &data[0][0] ), &data[0][0] ) && face[0] == 0 )
    {
      i = gts_vertex_neighbors( v3, gts_vertex_neighbors( v2, gts_vertex_neighbors( v1, 0, &data[0][0] ), &data[0][0] ), &data[0][0] );
    {
      do
      {
        GtsVertex *v = &i->data[0];
        if ( v1 != i && v2 != v && v3 != v )
        {
          gts_point_in_circle( &v[0].p, (int)( &v1->p ), (int)( &v2->p ), (int)( &v3->p ) );
          if ( 0.000000000000 < 0.000000000000 )
            face[0] = &t->object.klass->info.name[0];
        }
        i = i->next;
      }
      while ( i->next == 0 || face[0] );
    }
    }
    g_slist_free( ebp_44 );
  }
  return;
}
GtsFace *gts_delaunay_check( GtsSurface *surface )
{
  int eax;
  GtsFace *face = 0;
  gpointer data[2];
{
  /* phantom */ int _g_boolean_var_;
  if ( surface == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "surface != NULL" );
    return 0;
  }
  data[1] = (void*)face;
  data[0] = (void*)surface;
  gts_surface_foreach_face( surface, &delaunay_check, data[0] );
  return face;
}
}
void gts_delaunay_remove_hull( GtsSurface *surface )
{
  int ecx;
  int edx;
  GSList *boundary;
{
  /* phantom */ int _g_boolean_var_;
  if ( surface == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "surface != NULL" );
  }
  else
  {
    gts_allow_floating_edges = 1;
    boundary = gts_surface_boundary( surface );
    while ( boundary )
    {
    {
      while ( 1 )
      {
        /* phantom */ GSList *i;
        GtsEdge *e = &boundary->data[0];
        boundary = boundary->next;
        g_slist_free_1( &boundary->data[0] );
        if ( gts_constraint_class( ) == 0 )
        {
          boundary = &boundary->data[0];
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        }
        else
        {
          if ( e )
          {
            if ( e == 0 )
            {
              boundary = &boundary->data[0];
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
            }
            else
            do
            {
              if ( e[2].segment.v2 == gts_constraint_class( ) )
              {
                if ( boundary->data[0] )
                {
                  break;
                {
                  while ( 1 )
                  {
                    /* phantom */ GSList *i;
                    GtsEdge *e = &boundary->data[0];
                    boundary = boundary->next;
                    g_slist_free_1( &boundary->data[0] );
                  }
                }
                }
                else
                {
                  gts_allow_floating_edges = 0;
                  break;
                }
              }
              else
            }
            while ( e[2].segment.v2[1].p.y << 32 );
          }
          boundary = &boundary->data[0];
        }
      {
        /* phantom */ GtsTriangle *t;
        if ( gts_edge_is_boundary( e, surface ) )
        {
          if ( e != *(int*)gts_edge_is_boundary( e, surface )/*.12*/ )
          {
            if ( gts_constraint_class( ) )
            {
              if ( *(int*)gts_edge_is_boundary( e, surface )/*.12*/ )
              {
                if ( *(int*)(*(int*)gts_edge_is_boundary( e, surface )/*.12*/) == 0 )
                {
                  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
                }
                else
                if ( *(int*)(*(int*)gts_edge_is_boundary( e, surface )/*.12*/) != gts_constraint_class( ) )
                {
                  do
                  {
                    if ( *(int*)(ecx + 64) == 0 )
                      goto B40;
                    else
                    {
                    }
                  }
                  while ( *(int*)(*(int*)gts_edge_is_boundary( e, surface )/*.12*/) != gts_constraint_class( ) );
                }
              }
            }
            else
            {
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
            }
B40:;
            if ( eax == 0 )
            {
              boundary = eax;
            }
          }
          if ( e != *(int*)(edx + 16) )
          {
            if ( gts_constraint_class( ) )
            {
              if ( edi )
              {
                if ( edi == 0 )
                {
                }
                else
                {
                  do
                  {
                    if ( ecx == eax )
                      goto B30;
                    else
                    {
                    }
                  }
                  while ( *(int*)(ecx + 64) );
                  if ( eax == 0 )
                  {
                    boundary = eax;
                  }
                }
              }
            }
            else
            {
            }
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, ebp_64 );
          }
B30:;
          if ( e != *(int*)(edx + 20) )
          {
            if ( gts_constraint_class( ) )
            {
              if ( edi )
              {
                if ( edi == 0 )
                {
                }
                else
                {
                  do
                  {
                    if ( ecx == eax )
                      goto B33;
                    else
                    {
                    }
                  }
                  while ( *(int*)(ecx + 64) );
                  if ( eax == 0 )
                  {
                    boundary = eax;
                  }
                }
              }
            }
            else
            {
            }
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, ebp_64 );
          }
B33:;
          gts_surface_remove_face( surface, &edx );
        }
        if ( e->triangles == 0 )
        {
          gts_object_destroy( &e[0].segment.object );
          break;
        }
      }
      }
    }
    }
    gts_allow_floating_edges = 0;
  }
  return;
}
}
void gts_list_face_destroy( GtsObject *object )
{
  g_slist_free( &object[2].reserved[0] );
  object = object;
  ;
}
void gts_list_face_class_init( GtsFaceClass *klass )
{
  klass->parent_class.parent_class.destroy = gts_list_face_destroy;
  return;
}
GtsFaceClass *gts_list_face_class( void )
{
  int eax;
  int edx;
  int edi;
  static GtsFaceClass *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo gts_list_face_info = { };
    gts_list_face_info.name[0] = 'G';
    *(int*)&gts_list_face_info.name[4] = 0x46747369;
    *(int*)&gts_list_face_info.name[8] = 0x656361;
    do
    {
      *(int*)&gts_list_face_info.name[11] = 0;
    }
    while ( klass + 4 + 4 < 28 );
    gts_list_face_info.object_size = 32;
    gts_list_face_info.class_size = 92;
    gts_list_face_info.class_init_func = &gts_list_face_class_init;
    klass = gts_object_class_new( (GtsObjectClass*)gts_face_class( ), &gts_list_face_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
#if 0
#endif
