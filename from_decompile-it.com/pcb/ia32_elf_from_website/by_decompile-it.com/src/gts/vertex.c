#include "vertex.c.h"
gboolean gts_allow_floating_vertices;
void vertex_destroy( GtsObject *object )
{
  /* phantom */ GtsVertex *vertex;
  GSList *i = &object[3].klass->info.name[0];
  if ( object[3].klass )
  {
    do
    {
      i = i->next;
      i[1].data = *(int*)(i[1]) | 1;
    }
    while ( i->next );
    if ( object[3].klass )
    {
    {
      do
      {
        GSList *next = next->next;
        gts_object_destroy( &object[3].klass->info.name[0] );
      }
      while ( next == 0 );
    {
      /* phantom */ int _g_boolean_var_;
      if ( object[3].klass )
        g_assertion_message_expr( 0, "../../src/gts/vertex.c", 41, __PRETTY_FUNCTION__, "vertex-&gt;segments == NULL" );
    }
    }
    }
  }
  ;
}
void vertex_clone( GtsObject *clone, GtsObject *object )
{
  ;
}
void vertex_class_init( GtsVertexClass *klass )
{
  klass->intersection_attributes = 0;
  klass->parent_class.parent_class.clone = vertex_clone;
  klass->parent_class.parent_class.destroy = vertex_destroy;
  return;
}
void vertex_init( GtsVertex *vertex )
{
  vertex->segments = 0;
  return;
}
GtsVertexClass *gts_vertex_class( void )
{
  int eax;
  int edx;
  int edi;
  static GtsVertexClass *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo vertex_info = { };
    vertex_info.name[0] = 'G';
    *(int*)&vertex_info.name[4] = 0x65747265;
    *(int*)&vertex_info.name[8] = 120;
    do
    {
      *(int*)&vertex_info.name[11] = 0;
    }
    while ( klass + 4 + 4 < 28 );
    vertex_info.object_size = 40;
    vertex_info.class_size = 100;
    vertex_info.class_init_func = &vertex_class_init;
    vertex_info.object_init_func = &vertex_init;
    klass = gts_object_class_new( (GtsObjectClass*)gts_point_class( ), &vertex_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
GtsVertex *gts_vertex_new( GtsVertexClass *klass, gdouble x, gdouble y, gdouble z )
{
  /* phantom */ GtsVertex *v;
  gts_point_set( (GtsPoint*)gts_object_new( (int)( &klass->parent_class.parent_class ) ), x, y, z );
  return *ebp_88;
}
void gts_vertex_replace( GtsVertex *v, GtsVertex *with )
{
  int eax;
  int edx;
  GSList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( v == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( with == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "with != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( with == v )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v != with" );
    return;
  }
  i = v->segments;
  if ( v->segments )
  {
    do
    {
      s = &i->data[0];
      if ( s->v1 != with )
      {
        if ( s->v2 != with )
        {
          with->segments = g_slist_prepend( with->segments, &s );
        }
        if ( v == s->v1 )
        {
          s->v1 = with;
          if ( s->v2 == v )
          {
            i = i->next;
            s->v2 = with;
            if ( i->next )
              continue;
            else
            {
              break;
            }
          }
          else
          {
            i = i->next;
          }
        }
      }
    {
      GtsSegment *s;
      if ( s->v2 == v )
      {
        i = i->next;
        s->v2 = with;
      }
      else
      {
        i = i->next;
      }
    }
    }
    while ( i->next );
  }
  g_slist_free( v->segments );
  v->segments = 0;
  return;
}
}
}
}
gboolean gts_vertex_is_unattached( GtsVertex *v )
{
  int eax;
{
  /* phantom */ int _g_boolean_var_;
  if ( v )
  {
    return *(int*)(v + 36) == 0;
  }
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v != NULL" );
  return 0;
}
}
// Lost vars at line 176 through condition folding
GtsSegment *gts_vertices_are_connected( GtsVertex *v1, GtsVertex *v2 )
{
  int eax;
  int ecx;
  GSList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( v1 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v1 != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( v2 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v2 != NULL" );
    return 0;
  }
  i = v1->segments;
  if ( v1->segments == 0 )
  {
  }
  do
  {
    s = &i->data[0];
    if ( s->v1 == v2 || s->v2 == v2 )
      break;
    i = i->next;
  }
  while ( i->next );
  return 0;
}
}
}
GSList *gts_vertices_from_segments( GSList *segments )
{
  GHashTable *hash;
  GSList *vertices, *i = segments;
  vertices = 0;
  hash = g_hash_table_new( 0, 0 );
  if ( segments )
  {
  {
    do
    {
      if ( g_hash_table_lookup( &hash, &s->v1 ) == 0 )
      {
        vertices = g_slist_prepend( vertices, &s->v1 );
        g_hash_table_insert( &hash, &s->v1, &s );
      }
      if ( g_hash_table_lookup( &hash, &s->v2 ) == 0 )
      {
        vertices = g_slist_prepend( vertices, &s->v2 );
        g_hash_table_insert( &hash, &s->v2, &s );
      }
      i = i->next;
    }
    while ( i->next );
  }
  }
  g_hash_table_destroy( &hash );
  return vertices;
}
GSList *gts_vertex_triangles( GtsVertex *v, GSList *list )
{
  int eax;
  GSList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( v == 0 )
  {
    list = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v != NULL" );
    return list;
  }
  i = v->segments;
  if ( v->segments )
  {
    do
    {
      if ( gts_edge_class( ) == 0 )
      {
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        i = i->next;
        if ( i->next == 0 )
          break;
      }
      else
      {
        if ( i )
        {
          if ( i->data[0] == 0 )
          {
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
            i = i->next;
            if ( i->next == 0 )
              break;
          }
          else
          do
          {
            if ( i->_GSList == gts_edge_class( ) )
            {
              GSList *j = j[2].next;
              if ( j[2].next )
              {
                do
                {
                  if ( g_slist_find( list, &j ) == 0 )
                  {
                    list = g_slist_prepend( list, &j );
                  }
                  j = j->next;
                }
                while ( j->next );
                break;
              }
              else
                break;
            }
            else
            {
            }
          }
          while ( i->_GSList );
        }
        i = i->next;
      }
    }
    while ( i->next );
  }
  return list;
}
}
GSList *gts_vertex_faces( GtsVertex *v, GtsSurface *surface, GSList *list )
{
  int eax;
  GSList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( v == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v != NULL" );
    list = 0;
  }
  i = &v->segments;
  if ( v->segments[4].next )
  {
  {
    do
    {
      if ( gts_edge_class( ) == 0 )
      {
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        i = &i->next;
        if ( i->next == 0 )
          break;
      }
      else
      {
        if ( i->data[0] )
        {
          if ( *(int*)(i->data[0]) == 0 )
          {
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
            i = &i->next;
            if ( i->next == 0 )
              break;
          }
          else
          do
          {
            if ( *(int*)(*(int*)(i->data[0]) + 64) == gts_edge_class( ) )
            {
              GSList *j = j[2].next;
              if ( j[2].next )
              {
              {
                do
                {
                  if ( gts_face_class( ) == 0 )
                    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
                  else
                  if ( j )
                  {
                    if ( j->data[0] == 0 )
                      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
                    else
                    do
                    {
                      if ( j->_GSList == gts_face_class( ) )
                      {
                        if ( ( !surface || gts_face_has_parent_surface( &j->data[0], surface ) ) && g_slist_find( list, &j ) == 0 )
                        {
                          list = g_slist_prepend( list, &j );
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
                break;
              }
              }
              else
                break;
            }
            else
            {
            }
          }
          while ( *(int*)(*(int*)(*(int*)(i->data[0]) + 64) + 64) );
        }
        i = &i->next;
      }
    }
    while ( i->next );
  }
  }
  return list;
}
}
GSList *gts_vertex_neighbors( GtsVertex *v, GSList *list, GtsSurface *surface )
{
  GSList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( v == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v != NULL" );
    list = 0;
    return list;
  }
  i = &v->segments;
  if ( v->segments )
  {
    do
    {
      GtsSegment *s = &i->data[0];
      GtsVertex *v1 = *(int*)(i[1].next);
      if ( s->v1 != v || s->v2 != v )
      {
        if ( surface )
        {
          if ( gts_edge_class( ) == 0 )
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
          else
          if ( s == 0 )
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
          else
          do
          {
            if ( s[3].object.reserved == gts_edge_class( ) )
            {
              if ( gts_edge_has_parent_surface( &s[0].object.klass[0].info.name[0], surface ) == 0 )
                break;
            }
            else
            {
            }
          }
          while ( s[3].object.reserved[16] );
        }
        if ( g_slist_find( list, &v1 ) == 0 )
        {
          list = g_slist_prepend( list, &v1 );
        }
      }
      i = i->next;
    }
    while ( i->next );
  }
  return list;
}
}
gboolean gts_vertex_is_boundary( GtsVertex *v, GtsSurface *surface )
{
  int eax;
  int ecx;
  GSList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( v == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v != NULL" );
    return 0;
  }
  i = v->segments;
  if ( v->segments )
  {
    do
    {
      if ( gts_edge_class( ) )
      {
        if ( i )
        {
          if ( i->data[0] == 0 )
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
          else
          do
          {
            if ( i->_GSList == gts_edge_class( ) )
            {
              if ( gts_edge_is_boundary( &i->data[0], surface ) == 0 )
                break;
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
  }
  return 0;
}
}
GList *gts_vertices_merge( GList *vertices, gdouble epsilon, gboolean (*check)( GtsVertex *, GtsVertex * ) )
{
  int ecx;
  GPtrArray *array;
  GList *i;
  GNode *kdtree;
{
  /* phantom */ int _g_boolean_var_;
  if ( vertices == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "vertices != NULL" );
    return vertices;
  }
  i = vertices;
  array = g_ptr_array_new( );
  do
  {
    g_ptr_array_add( array, &i );
  }
  while ( i->next == 0 );
  kdtree = gts_kdtree_new( array, 0 );
  g_ptr_array_free( array, 1 );
  i = vertices;
{
  do
  {
    GtsVertex *v = &i->data[0];
    if ( v->p.object.reserved == 0 )
    {
      GtsBBox *bbox = gts_bbox_new( gts_bbox_class( ), &v, v->p.x - epsilon, v->p.y - epsilon, v->p.z - epsilon, v->p.x + epsilon, v->p.y + epsilon, v->p.z + epsilon );
      GSList *selected, *j;
      if ( gts_kdtree_range( kdtree, bbox, 0 ) )
      {
        j = gts_kdtree_range( kdtree, bbox, 0 );
        do
        {
          sv = &j->data[0];
          if ( v != j && sv->p.object.reserved == 0 && ( check == 0 || check( sv, v ) ) )
          {
            gts_vertex_replace( sv, v );
            j = j->next;
            sv->p.object.reserved = (void*)sv;
            if ( j->next )
              continue;
          }
          else
          {
            GtsVertex *sv;
            j = j->next;
          }
        }
        while ( j->next );
        i = i;
        selected = gts_kdtree_range( kdtree, bbox, 0 );
      }
      g_slist_free( selected );
      gts_object_destroy( (int)( &bbox->object ) );
    }
    i = i->next;
  }
  while ( i->next );
  g_node_destroy( kdtree );
  i = vertices;
  gts_allow_floating_vertices = 1;
{
  do
  {
    /* phantom */ GtsVertex *v;
    GList *next = i->next;
    if ( *(int*)(i->next) )
    {
      gts_object_destroy( &i->data[0] );
      vertices = g_list_remove_link( vertices, i );
      g_list_free_1( i );
    }
    i = next;
  }
  while ( next );
  gts_allow_floating_vertices = 0;
  return vertices;
}
}
}
}
GSList *edge_fan_list( GtsVertex *v, GtsSurface *surface, GtsFace *f, GtsEdge *e, GtsFace *first )
{
  int eax;
  int ecx;
  GSList *i;
  GtsFace *neighbor = 0;
  GtsEdge *next, *enext;
  i = &e->triangles;
  if ( e->triangles )
  {
  {
    do
    {
      if ( gts_face_class( ) == 0 )
      {
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        i = i->next;
        if ( i->next )
          continue;
        else
          break;
      }
      else
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
              if ( i != f && gts_face_has_parent_surface( &i->data[0], surface ) )
              {
                /* phantom */ int _g_boolean_var_;
                if ( neighbor )
                {
                  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "neighbor == NULL" );
                  break;
                }
                i = i->next;
                neighbor = &i->data[0];
                if ( i->next )
                  continue;
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
    }
    while ( i->next );
  }
  }
  if ( neighbor != first && ( ( neighbor == 0 ) & 255 ) == 0 )
  {
    next = &neighbor->triangle.e1;
    if ( e == neighbor->triangle.e1 )
    {
      next = &enext->segment.v2->p.object.klass->info.name[0];
      enext = &enext->triangles->data[0];
    }
    else
    {
      enext = &neighbor->triangle.e2;
      if ( e == neighbor->triangle.e2 )
      {
        enext = next;
        next = &neighbor->triangle.e3;
      }
      else
      if ( neighbor->triangle.e3 != e )
      {
        g_assertion_message( 0, "../../src/gts/vertex.c", 476, __PRETTY_FUNCTION__, 0 );
      }
    }
  {
    /* phantom */ int _g_boolean_var_;
    if ( enext->segment.v1 != v && enext->segment.v2 != v )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "GTS_SEGMENT (enext)-&gt;v1 == v || GTS_SEGMENT (enext)-&gt;v2 == v" );
      return 0;
    }
    first = &next[0].segment.object.klass[0].info.name[0];
    e = (GtsEdge*)edge_fan_list( v, surface, neighbor, enext, first );
  }
  }
  else
  {
    return 0;
  }
}
GSList *gts_vertex_fan_oriented( GtsVertex *v, GtsSurface *surface )
{
  int eax;
  int ecx;
  int edx;
  GtsFace *f;
  guint d;
  GSList *i;
  GtsVertex *v1, *v2, *v3;
  GtsEdge *e1, *e2, *e3;
{
  /* phantom */ int _g_boolean_var_;
  if ( v == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v != NULL" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( surface == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "surface != NULL" );
  }
  i = &v->segments;
  if ( v->segments )
  {
    d = 2;
    f = 0;
  {
    do
    {
      if ( gts_edge_class( ) == 0 )
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      else
      if ( i->data[0] )
      {
        if ( *(int*)(i->data[0]) == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
        else
        do
        {
          if ( *(int*)(*(int*)(i->data[0]) + 64) == gts_edge_class( ) )
          {
            GSList *j;
            GtsFace *f1;
            guint degree = 0;
            f1 = 0;
            j = &i->_GSList;
            if ( i->_GSList )
            {
              do
              {
                if ( gts_face_class( ) )
                {
                  if ( j )
                  {
                    if ( j->data[0] == 0 )
                      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
                    else
                    do
                    {
                      if ( j->_GSList == gts_face_class( ) )
                      {
                        if ( gts_face_has_parent_surface( &j->data[0], surface ) )
                        {
                          f1 = &j->data[0];
                          degree++;
                          break;
                        }
                        else
                          break;
                      }
                      else
                    }
                    while ( j->_GSList );
                  }
                }
                else
                  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
                j = j->next;
              }
              while ( j->next );
              if ( f1 )
              {
                /* phantom */ int _g_boolean_var_;
                if ( degree > 2 )
                {
                  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "degree &lt;= 2" );
                  break;
                }
                if ( degree == 1 )
                {
                  gts_triangle_vertices_edges( &f1[0].triangle, 0, &v1, &v2, &v3, &e1, &e2, &e3 );
                  if ( v2 == v )
                  {
                    e2 = e3;
                    e3 = e1;
                  }
                  else
                  if ( v3 != v )
                  {
                  }
                  else
                  {
                    e3 = e2;
                    e2 = e1;
                  }
                  f1 = i->data[0] == e3 ? f1 : f;
                  f = i->data[0] == e3 ? f1 : f;
                  d = i->data[0] == e3 ? 1 : d;
                  break;
                }
                else
                {
                  f1 = (int)d < (int)degree ? f1 : f;
                  f = (int)d < (int)degree ? f1 : f;
                  break;
                }
              }
            }
            else
              break;
          }
          else
          {
          }
        }
        while ( *(int*)(*(int*)(*(int*)(i->data[0]) + 64) + 64) );
      }
      i = &i->next;
    }
    while ( i->next );
    if ( f == 0 )
    {
    }
    gts_triangle_vertices_edges( (int)( &f->triangle ), 0, &v1, &v2, &v3, &e1, &e2, &e3 );
    if ( v2 == v )
    {
      e2 = e3;
      e3 = e1;
    }
    else
    if ( v3 != v )
    {
    }
    else
    {
      e3 = e2;
      e2 = e1;
    }
    g_slist_prepend( edge_fan_list( v, surface, f, e3, f ), &e2 );
  }
  }
}
  return 0;
}
}
GtsEdge *replace_vertex( GtsTriangle *t, GtsEdge *e1, GtsVertex *v, GtsVertex *with )
{
  int esi;
  int edi;
  GtsEdge *e = t->e1;
  if ( ( t->e1 != e1 && ( e->segment.v1 == v->p.object.klass->info.name[0] || e->segment.v2 == v ) ) || ( t->e2 != e1 && ( e->segment.v1 == v || e->segment.v2 == v ) ) || ( t->e3 != e1 && ( e->segment.v1 == v || e->segment.v2 == v ) ) )
  {
    if ( with != v )
    {
      /* phantom */ GtsSegment *s;
      if ( e->segment.v1 != v )
      {
        if ( e->segment.v2 == v )
          goto B13;
        else
        {
          with->segments = g_slist_prepend( with->segments, &e );
          v->segments = g_slist_remove( v->segments, &e );
        }
      }
      else
      {
        e->segment.v1 = with;
        if ( e->segment.v2 == v )
        {
        }
      }
B13:;
      e->segment.v2 = with;
    }
  }
  else
  {
    e = 0;
  }
  return e;
}
void triangle_next( GtsEdge *e, GtsVertex *v, GtsVertex *with )
{
  GSList *i;
  if ( !1 && e->triangles )
  {
  {
    do
    {
      GtsTriangle *t = &i->data[0];
      if ( t->object.reserved )
      {
        t->object.reserved = 0;
        replace_vertex( t, e, v, with );
        triangle_next( &i->data[0], v, with );
      }
      i = i->next;
    }
    while ( i->next );
  }
  }
  return;
}
guint gts_vertex_is_contact( GtsVertex *v, gboolean sever )
{
  int eax;
  int ecx;
  int edx;
  GSList *triangles, *i;
  GtsVertex *with;
  guint ncomponent;
{
  /* phantom */ int _g_boolean_var_;
  if ( v == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v != NULL" );
    ncomponent = 0;
    return ncomponent;
  }
  ncomponent = 0;
  triangles = gts_vertex_triangles( v, 0 );
  if ( triangles )
  {
    do
    {
      i = i->next = i;
    }
    while ( i->next );
    with = v;
    i = triangles;
    ncomponent = 0;
    do
    {
      t = &i->data[0];
      if ( t->object.reserved )
      {
        if ( ncomponent && sever )
        {
          with = (GtsVertex*)gts_object_clone( (int)( &v->p.object ) );
        }
      {
        GtsTriangle *t;
        GtsEdge *e;
        t->object.reserved = 0;
        e = replace_vertex( t, 0, v, with );
        triangle_next( e, v, with );
        replace_vertex( t, e, v, with );
        triangle_next( replace_vertex( t, 0, v, with ), v, with );
        ncomponent++;
      }
      }
      i = i->next;
    }
    while ( i->next );
  }
  g_slist_free( triangles );
  return ncomponent;
}
}
void vertex_normal_attributes( GtsVertex *v, GtsObject *e, GtsObject *t )
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
{
  /* phantom */ int _g_boolean_var_;
  if ( gts_edge_class( ) == 0 )
  {
    /* phantom */ GtsVector a1;
    /* phantom */ GtsVector a2;
    /* phantom */ GtsVector a3;
    GtsVector det;
    guint i;
    guint j;
    gdouble l1;
    gdouble l2;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
  else
  if ( e )
  {
    if ( e == 0 )
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    else
    do
    {
      if ( e[5].reserved == gts_edge_class( ) )
      {
        /* phantom */ int _g_boolean_var_;
        if ( gts_triangle_class( ) == 0 )
        {
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        }
        else
        if ( t == 0 )
        {
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "GTS_IS_TRIANGLE (t)" );
          return;
        }
        if ( t == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
        else
        do
        {
          if ( t[5].reserved == gts_triangle_class( ) )
          {
            if ( gts_vertex_normal_class( ) )
            {
              if ( e[1].klass )
              {
                if ( e[1].klass->info.name[0] == 0 )
                  goto B36;
                else
                do
                {
                  if ( e[1].klass->parent_class == gts_vertex_normal_class( ) )
                  {
                    if ( gts_vertex_normal_class( ) )
                    {
                      if ( e[1].reserved )
                      {
                        if ( *(int*)(e[1].reserved) == 0 )
                          goto B36;
                        else
                        {
                          do
                          {
                            if ( *(int*)(*(int*)(e[1].reserved) + 64) == gts_vertex_normal_class( ) )
                            {
                              /* phantom */ GtsPoint *p1;
                              /* phantom */ GtsPoint *p2;
                              /* phantom */ GtsPoint *p;
                              gdouble a;
                              gdouble b = v->p.x;
                              gdouble lambda;
                              guint i;
                              a = e[1].reserved[7] - e[1].klass->info.name[28];
                              b = 0.000000000000;
                              i = 0;
                              b = 1.000000000000 - a;
                              do
                              {
                                v[1].p.object.klass = i + ( e[1].klass->info.object_size * b );
                                i++;
                              }
                              while ( i + 1 != 3 );
                              break;
                            }
                            else
                            {
                            }
                          }
                          while ( *(int*)(*(int*)(*(int*)(e[1].reserved) + 64) + 64) );
                          break;
                        }
                      }
                      else
                        break;
                    }
                  }
                  else
                  {
                  }
                }
                while ( e[1].klass->parent_class->parent_class );
                gts_triangle_vertices( &t[0].klass[0].info.name[0], ebp_28, ebp_32, ebp_36 );
                if ( gts_vertex_normal_class( ) == 0 )
                {
                  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
                  return;
                }
                if ( ebp_28 == 0 )
                  break;
                if ( *ebp_28 == 0 )
                {
                }
                else
                do
                {
                  if ( *(int*)(*ebp_28 + 64) == gts_vertex_normal_class( ) )
                  {
                    if ( gts_vertex_normal_class( ) == 0 )
                    {
                      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
                      return;
                    }
                    if ( ebp_32 == 0 )
                      break;
                    if ( *ebp_32 == 0 )
                      goto B70;
                    else
                    do
                    {
                      if ( *(int*)(*ebp_32 + 64) == gts_vertex_normal_class( ) )
                      {
                        if ( gts_vertex_normal_class( ) == 0 )
                        {
                          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
                          return;
                        }
                        if ( ebp_36 == 0 )
                          break;
                        if ( *ebp_36 == 0 )
                          goto B70;
                        else
                        {
                          do
                          {
                            if ( *(int*)(*ebp_36 + 64) == gts_vertex_normal_class( ) )
                            {
                              if ( !( "huge", 0 ) )
                              {
                              }
                              else
                              if ( !0 )
                              {
                                g_log( 0, 16, "vertex_normal_attributes: det[%d] == 0.", j );
                                break;
                              }
                              else
                              {
                              }
                              a = v->p.y - ( v->p.x - a );
                              if ( eax == 1 )
                              {
                              }
                              else
                              {
                                b = ( ( *(double*)(ebp_32 + 20) - *(double*)(ebp_28 + 20) ) * ( *(double*)(ebp_36 + 28) - *(double*)(ebp_28 + 28) ) ) - ( ( *(double*)(ebp_32 + 28) - *(double*)(ebp_28 + 28) ) * ( *(double*)(ebp_36 + 20) - *(double*)(ebp_28 + 20) ) );
                                if ( eax == 2 )
                                {
                                  l1 = ( ( ( *(double*)(ebp_36 + 20) - *(double*)(ebp_28 + 20) ) * l1 ) - ( ( *(double*)(ebp_36 + 12) - *(double*)(ebp_28 + 12) ) * 0.000000000000 ) ) / a;
                                  a = ( ( ( *(double*)(ebp_32 + 12) - *(double*)(ebp_28 + 12) ) * 0.000000000000 ) - ( ( *(double*)(ebp_32 + 20) - *(double*)(ebp_28 + 20) ) * l1 ) ) / a;
                                }
                                else
                                  a = ( ( ( *(double*)(ebp_32 + 20) - *(double*)(ebp_28 + 20) ) * ( v->p.y - ( v->p.x - a ) ) ) - ( ( *(double*)(ebp_32 + 28) - *(double*)(ebp_28 + 28) ) * 0.000000000000 ) ) / b;
                              }
                              do
                              {
                                v[1].p.object.klass = ( b * *(double*)(ebp_28 + ( 0 << 3 ) + 40) ) + ( ( ( ( ( *(double*)(ebp_36 + 28) - *(double*)(ebp_28 + 28) ) * 0.000000000000 ) - ( ( *(double*)(ebp_36 + 20) - *(double*)(ebp_28 + 20) ) * ( v->p.y - ( v->p.x - a ) ) ) ) / b ) * *(double*)(ebp_32 + ( 0 << 3 ) + 40) ) + ( a * *(double*)(ebp_36 + ( 0 << 3 ) + 40) );
                              }
                              while ( 0 + 1 + 1 != 3 );
                              break;
                            }
                            else
                            {
                            }
                          }
                          while ( *(int*)(*(int*)(*ebp_36 + 64) + 64) );
                          break;
                        }
                      }
                      else
                      {
                      }
                    }
                    while ( *(int*)(*(int*)(*ebp_32 + 64) + 64) );
                    break;
                  }
                  else
                  {
                  }
                }
                while ( *(int*)(*(int*)(*ebp_28 + 64) + 64) );
                break;
B70:;
                g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
                break;
B36:;
                g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
              }
            }
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
          }
          else
          {
          }
        }
        while ( t[5].reserved[16] );
      }
      else
      {
      }
    }
    while ( e[5].reserved[16] );
  }
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "GTS_IS_EDGE (e)" );
  return;
}
}
void gts_vertex_normal_class_init( GtsVertexClass *klass )
{
  klass->intersection_attributes = vertex_normal_attributes;
  return;
}
GtsVertexClass *gts_vertex_normal_class( void )
{
  int eax;
  int edx;
  int edi;
  static GtsVertexClass *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo gts_vertex_normal_info = { };
    gts_vertex_normal_info.name[0] = 'G';
    *(int*)&gts_vertex_normal_info.name[4] = 0x65747265;
    *(int*)&gts_vertex_normal_info.name[8] = 0x726f4e78;
    *(int*)&gts_vertex_normal_info.name[12] = 0x6c616d;
    do
    {
      *(int*)&gts_vertex_normal_info.name[15] = 0;
    }
    while ( klass + 4 + 4 < 24 );
    gts_vertex_normal_info.object_size = 64;
    gts_vertex_normal_info.class_size = 100;
    gts_vertex_normal_info.class_init_func = &gts_vertex_normal_class_init;
    klass = gts_object_class_new( (GtsObjectClass*)gts_vertex_class( ), &gts_vertex_normal_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
GtsVertexClass *gts_color_vertex_class( void )
{
  int eax;
  int edx;
  int edi;
  static GtsVertexClass *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo gts_color_vertex_info = { };
    gts_color_vertex_info.name[0] = 'G';
    *(int*)&gts_color_vertex_info.name[4] = 0x726f6c6f;
    *(int*)&gts_color_vertex_info.name[8] = 0x74726556;
    *(int*)&gts_color_vertex_info.name[12] = 30821;
    do
    {
      *(int*)&gts_color_vertex_info.name[15] = 0;
    }
    while ( klass + 4 + 4 < 24 );
    gts_color_vertex_info.object_size = 52;
    gts_color_vertex_info.class_size = 100;
    klass = gts_object_class_new( (GtsObjectClass*)gts_vertex_class( ), &gts_color_vertex_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
#if 0
#endif
