#include "edge.c.h"
gboolean gts_allow_floating_edges;
void edge_destroy( GtsObject *object )
{
  /* phantom */ GtsEdge *edge;
  GSList *i = &object[1].flags;
  if ( object[1].flags )
  {
  {
    do
    {
      GSList *next = next->next;
      gts_object_destroy( &object[1].flags );
    }
    while ( next == 0 );
  {
    /* phantom */ int _g_boolean_var_;
    if ( object[1].flags )
      g_assertion_message_expr( 0, "../../src/gts/edge.c", 35, __PRETTY_FUNCTION__, "edge-&gt;triangles == NULL" );
  }
  }
  }
  ;
}
void edge_clone( GtsObject *clone, GtsObject *object )
{
  ;
}
void edge_class_init( GtsObjectClass *klass )
{
  klass->clone = edge_clone;
  klass->destroy = edge_destroy;
  return;
}
void edge_init( GtsEdge *edge )
{
  edge->triangles = 0;
  return;
}
GtsEdgeClass *gts_edge_class( void )
{
  int eax;
  int edx;
  int edi;
  static GtsEdgeClass *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo edge_info = { };
    edge_info.name[0] = 'G';
    *(int*)&edge_info.name[4] = 0x656764;
    do
    {
      *(int*)&edge_info.name[7] = 0;
    }
    while ( klass + 4 + 4 < 32 );
    edge_info.object_size = 24;
    edge_info.class_size = 92;
    edge_info.class_init_func = &edge_class_init;
    edge_info.object_init_func = &edge_init;
    klass = gts_object_class_new( (GtsObjectClass*)gts_segment_class( ), &edge_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
GtsEdge *gts_edge_new( GtsEdgeClass *klass, GtsVertex *v1, GtsVertex *v2 )
{
}
void gts_edge_remove( GtsEdge *edge )
{
  int ebx;
  int esi;
  edge->segment.v1->segments = g_slist_remove( &edge->segment.v1->segments, &edge );
  edge->segment.v2->segments = g_slist_remove( &edge->segment.v2->segments, &edge );
  edge = edge;
}
void gts_edge_replace( GtsEdge *e, GtsEdge *with )
{
  int eax;
  int edx;
  GSList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( with == 0 || e == 0 || with == e )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e != NULL && with != NULL && e != with" );
    return;
  }
  i = e->triangles;
  if ( e->triangles )
  {
    do
    {
      t = &i->data[0];
      if ( t->e1 != e )
      {
        GtsTriangle *t;
        if ( t->e2 != e )
        {
          if ( t->e3 == e )
            t->e3 = with;
          if ( g_slist_find( with->triangles, &t ) == 0 )
          {
            with->triangles = g_slist_prepend( with->triangles, &t );
          }
          i = i->next;
        }
      }
      else
      {
        t->e1 = with;
        if ( t->e2 == e )
        {
        }
        else
        {
        }
      }
      t->e2 = with;
      if ( t->e3 == e )
        t->e3 = with;
    }
    while ( i->next );
  }
  g_slist_free( e->triangles );
  e->triangles = 0;
  return;
}
}
GtsFace *gts_edge_has_parent_surface( GtsEdge *e, GtsSurface *surface )
{
  int eax;
  int ecx;
  GSList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( e == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e != NULL" );
    return 0;
  }
  i = e->triangles;
  if ( e->triangles )
  {
    do
    {
      if ( gts_face_class( ) == 0 )
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      else
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
              break;
            break;
          }
          else
        }
        while ( i->_GSList );
      }
      i = i->next;
    }
    while ( i->next );
  }
  return 0;
}
}
GtsFace *gts_edge_has_any_parent_surface( GtsEdge *e )
{
  int eax;
  GSList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( e == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e != NULL" );
    return 0;
  }
  i = e->triangles;
  if ( e->triangles )
  {
  {
    do
    {
      if ( gts_face_class( ) == 0 )
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      else
      if ( i )
      {
        if ( i->data[0] == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
        else
        do
        {
          if ( i->_GSList == gts_face_class( ) )
          {
            if ( i[3].data == 0 )
              break;
            else
              break;
          }
          else
        }
        while ( i->_GSList );
      }
      i = i->next;
    }
    while ( i->next );
  }
  }
  return 0;
}
}
GtsFace *gts_edge_is_boundary( GtsEdge *e, GtsSurface *surface )
{
  int eax;
  int ecx;
  GSList *i;
  GtsFace *f;
{
  /* phantom */ int _g_boolean_var_;
  if ( e == 0 )
  {
    f = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e != NULL" );
  }
  i = e->triangles;
  if ( e->triangles )
  {
    f = 0;
    do
    {
      if ( gts_face_class( ) == 0 )
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      else
      if ( i )
      {
        if ( i->data[0] == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
        else
        do
        {
          if ( i->_GSList == gts_face_class( ) )
          {
            if ( !surface || gts_face_has_parent_surface( &i->data[0], surface ) )
            {
              if ( f == 0 )
              {
                f = &i->data[0];
                break;
              }
            }
            else
              break;
          }
          else
        }
        while ( i->_GSList );
      }
      i = i->next;
    }
    while ( i->next );
  }
  f = 0;
  return f;
}
}
GSList *gts_edges_from_vertices( GSList *vertices, GtsSurface *parent )
{
  GHashTable *hash;
  GSList *edges, *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( parent == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "parent != NULL" );
    edges = 0;
  }
  else
  {
    edges = 0;
    hash = g_hash_table_new( 0, 0 );
    if ( vertices )
    {
      i = vertices;
    {
      do
      {
        GSList *j = &i->_GSList;
        if ( i->_GSList )
        {
        {
          do
          {
            if ( gts_edge_class( ) == 0 )
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
            else
            if ( j )
            {
              if ( j->data[0] == 0 )
                g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
              else
              do
              {
                if ( j->_GSList == gts_edge_class( ) )
                {
                  if ( gts_edge_has_parent_surface( &j->data[0], parent ) && g_hash_table_lookup( &hash, &j ) == 0 )
                  {
                    edges = g_slist_prepend( edges, &j );
                    g_hash_table_insert( &hash, &j, &i );
                    break;
                  }
                  else
                    break;
                }
                else
              }
              while ( j->_GSList );
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
    }
    g_hash_table_destroy( &hash );
  }
  return edges;
}
}
guint gts_edge_face_number( GtsEdge *e, GtsSurface *s )
{
  int eax;
  int ecx;
  GSList *i;
  guint nt;
{
  /* phantom */ int _g_boolean_var_;
  if ( e == 0 )
  {
    nt = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e != NULL" );
    return nt;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    nt = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return nt;
  }
  i = e->triangles;
  nt = 0;
  if ( e->triangles )
  {
    do
    {
      if ( gts_face_class( ) == 0 )
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      else
      if ( i )
      {
        if ( i->data[0] == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
        else
        do
        {
          if ( i->_GSList == gts_face_class( ) )
          {
            nt = ( nt + 1 ) - ( ( gts_face_has_parent_surface( &i->data[0], s ) < 1 ) & 1 );
            break;
          }
          else
        }
        while ( i->_GSList );
      }
      i = i->next;
    }
    while ( i->next );
  }
  return nt;
}
}
}
GtsEdge *gts_edge_is_duplicate( GtsEdge *e )
{
  GSList *i;
  GtsVertex *v2;
{
  /* phantom */ int _g_boolean_var_;
  if ( e == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e != NULL" );
    return 0;
  }
  v2 = &e->segment.v2;
  i = &e->segment.v1->segments;
  if ( e->segment.v2 == e->segment.v1 )
  {
    if ( i == 0 )
    {
      return 0;
    }
  {
    do
    {
      GtsSegment *s = &i->data[0];
      if ( i != e )
      {
        if ( gts_edge_class( ) == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        else
        if ( s )
        {
          if ( s == 0 )
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
          else
          do
          {
            if ( s[3].object.reserved == gts_edge_class( ) )
            {
              if ( s->v1 == v2 && s->v2 == v2 )
                break;
              break;
            }
            else
          }
          while ( s[3].object.reserved[16] );
        }
      }
      i = i->next;
    }
    while ( i->next );
    return 0;
  }
  }
  else
  {
    if ( i == 0 )
    {
      return 0;
    }
  {
    do
    {
      GtsSegment *s = &i->data[0];
      if ( i != e )
      {
        if ( gts_edge_class( ) == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        else
        if ( s )
        {
          if ( s == 0 )
          {
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
          }
          else
          do
          {
            if ( s[3].object.reserved == gts_edge_class( ) )
            {
              if ( s->v1 == v2 || s->v2 == v2 )
                break;
              break;
            }
            else
          }
          while ( s[3].object.reserved[16] );
        }
      }
      i = i->next;
    }
    while ( i->next );
  }
  }
  return &s[0].object.klass[0].info.name[0];
}
}
GList *gts_edges_merge( GList *edges )
{
  GList *i;
  gts_allow_floating_edges = 1;
  if ( edges )
  {
    i = edges;
    do
    {
      de = gts_edge_is_duplicate( &i->data[0] );
      if ( gts_edge_is_duplicate( &i->data[0] ) )
      {
        GList *next = i->next;
        edges = g_list_remove_link( edges, i );
        g_list_free_1( i );
        gts_edge_replace( e, de );
        gts_object_destroy( &e[0].segment.object );
        i = next;
      }
      else
      {
        i = i->next;
        if ( i->next == 0 )
          break;
      }
    }
    while ( ebp_28 );
  }
  gts_allow_floating_edges = 0;
  return edges;
}
void triangle_vertices_edges( GtsTriangle *t, GtsEdge *e, GtsVertex **v, GtsEdge **ee1, GtsEdge **ee2 )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  int edi;
  GtsEdge *e1 = t->e1, *e2 = t->e2, *e3;
  GtsVertex *v1 = e->segment.v1;
  e3 = &e3->triangles->data[0];
  if ( e3->segment.v1 == e )
    goto B2;
  else
  if ( e2 == e )
    e2 = e3;
    if ( e2->segment.v1 != v1 )
    {
      if ( e2->segment.v2 != v1 )
      {
        if ( e1->segment.v1 == v1 )
          goto B13;
      }
      else
      {
        e2 = e1 = e2;
      }
      v[0] = e1->segment.v1;
      ee1[0] = e1;
      ee2[0] = e2;
      return;
    }
    else
    {
      e2 = e1 = e2;
    }
B13:;
    v[0] = e1->segment.v2;
    ee1[0] = e1;
    ee2[0] = e2;
    return;
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( e3 != e )
    g_assertion_message_expr( 0, "../../src/gts/edge.c", 357, __PRETTY_FUNCTION__, "e3 == e" );
}
B2:;
  e1 = t->e3;
}
gboolean gts_edge_belongs_to_tetrahedron( GtsEdge *e )
{
  int eax;
  int ecx;
  int edx;
  GSList *i;
  /* phantom */ GtsVertex *v1, *v2;
{
  /* phantom */ int _g_boolean_var_;
  if ( e == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e != NULL" );
  }
  i = &e->triangles;
  if ( e->triangles )
  {
  {
    do
    {
      GtsEdge *e1, *e2;
      GtsVertex *vt1;
      GSList *j;
      triangle_vertices_edges( &i->data[0], e, &vt1, &e1, &e2 );
      if ( i->next )
      {
        j = &i->next;
      {
        do
        {
          GtsSegment *s5;
          GtsEdge *e3, *e4;
          GtsVertex *vt2;
          triangle_vertices_edges( &j->data[0], e, &vt2, ebp_40, ebp_44 );
          if ( gts_edge_class( ) == 0 )
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
          else
          if ( s5 )
          {
            if ( s5 == 0 )
            {
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
            }
            else
            do
            {
              if ( s5[3].object.reserved == gts_edge_class( ) )
              {
                if ( gts_triangle_use_edges( e1, e3, &s5[0].object.klass[0].info.name[0] ) && gts_triangle_use_edges( e2, e4, &s5[0].object.klass[0].info.name[0] ) )
                {
                  break;
                }
                break;
              }
              else
            }
            while ( s5[3].object.reserved[16] );
          }
          j = j->next;
        }
        while ( j->next == 0 );
      }
      }
      i = &i->next;
    }
    while ( i->next == 0 );
  }
  }
  return 1;
}
}
GtsEdge *next_edge( GtsTriangle *t, GtsEdge *e1, GtsEdge *e )
{
  int esi;
  GtsVertex *v1 = e->segment.v1;
  GtsVertex *v2 = e->segment.v2;
  if ( ( t->e1 == e1 || t->e1 == e || ( t->e1->segment.v1 != v1 && t->e1->segment.v2 != v1 && t->e1->segment.v1 != v2 && t->e1->segment.v2 != v2 ) ) && ( t->e2 == e1 || t->e2 == e || ( t->e2->segment.v1 != v1 && t->e2->segment.v2 != v1 && t->e2->segment.v1 != v2 && t->e2->segment.v2 != v2 ) ) && ( t->e3 == e1 || t->e3 == e || ( t->e3->segment.v1 != v1 && t->e3->segment.v2 != v1 && t->e3->segment.v1 != v2 && t->e3->segment.v2 != v2 ) ) )
  {
    g_assertion_message( 0, "../../src/gts/edge.c", 430, __PRETTY_FUNCTION__, 0 );
  }
  return t->e2;
}
void triangle_next( GtsEdge *e1, GtsEdge *e )
{
  int ecx;
  GSList *i = e1->triangles;
  if ( e1->triangles )
  {
  {
    do
    {
      GtsTriangle *t = &i->data[0];
      if ( t->object.reserved )
      {
        t->object.reserved = 0;
        next_edge( t, e1, e );
        triangle_next( &i->data[0], e );
      }
      i = i->next;
    }
    while ( i->next );
  }
  }
  return;
}
guint gts_edge_is_contact( GtsEdge *e )
{
  int eax;
  int ecx;
  int edx;
  GSList *i, *triangles;
  guint ncomponent;
{
  /* phantom */ int _g_boolean_var_;
  if ( e == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e != NULL" );
    ncomponent = 0;
    return ncomponent;
  }
  if ( gts_vertex_triangles( e->segment.v2, gts_vertex_triangles( e->segment.v1, 0 ) ) )
  {
    do
    {
      i = i->next = i;
    }
    while ( i->next );
  }
  i = e->triangles;
  ncomponent = 0;
  if ( e->triangles )
  {
  {
    do
    {
      GtsTriangle *t = &i->data[0];
      if ( t->object.reserved )
      {
        GtsEdge *e1;
        t->object.reserved = 0;
        e1 = next_edge( t, 0, e );
        triangle_next( e1, e );
        next_edge( t, e1, e );
        triangle_next( next_edge( t, 0, e ), e );
        ncomponent++;
      }
      i = i->next;
    }
    while ( i->next );
  }
  }
  g_slist_foreach( gts_vertex_triangles( e->segment.v2, gts_vertex_triangles( e->segment.v1, 0 ) ), &gts_object_reset_reserved, 0 );
  g_slist_free( gts_vertex_triangles( e->segment.v2, gts_vertex_triangles( e->segment.v1, 0 ) ) );
  return ncomponent;
}
}
void gts_edge_swap( GtsEdge *e, GtsSurface *s )
{
  int ecx;
#error unstructured control flow
}
gboolean gts_edge_manifold_faces( GtsEdge *e, GtsSurface *s, GtsFace **f1, GtsFace **f2 )
{
  int eax;
  int ecx;
  GSList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( e == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e != NULL" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( f1 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f1 != NULL" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( f2 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f2 != NULL" );
  }
  i = e->triangles;
  f2[0] = 0;
  f1[0] = 0;
  if ( e->triangles )
  {
    f2[0] = f2[0];
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
                if ( f1[0] == 0 )
                {
                  f1[0] = &i->data[0];
                  break;
                }
                else
                if ( f2[0] == 0 )
                {
                  f2[0] = &i->data[0];
                  break;
                }
              }
              else
                break;
            }
            else
            {
              f2[0] = f2[0];
            }
          }
          while ( i->_GSList );
        }
      }
      else
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      i = i->next;
    }
    while ( i->next );
    if ( f1[0] )
    {
    }
  }
  return 0;
}
}
}
  return f2[0] != 0;
}
}
#if 0
#endif
