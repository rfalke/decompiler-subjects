#include "face.c.h"
gboolean gts_allow_floating_faces;
void face_destroy( GtsObject *object )
{
  /* phantom */ GtsFace *face;
  GSList *i = &object[2].klass->info.name[0];
  if ( object[2].klass )
  {
  {
    do
    {
      GSList *next = i->next;
      gts_surface_remove_face( &object[2].klass->info.name[0], &object[0].klass[0].info.name[0] );
    }
    while ( next == 0 );
  {
    /* phantom */ int _g_boolean_var_;
    if ( object[2].klass )
    {
      g_assertion_message_expr( 0, "../../src/gts/face.c", 35, __PRETTY_FUNCTION__, "face-&gt;surfaces == NULL" );
    }
  }
  }
  }
  ;
}
void face_clone( GtsObject *clone, GtsObject *object )
{
  ;
}
void face_class_init( GtsFaceClass *klass )
{
  klass->parent_class.parent_class.clone = face_clone;
  klass->parent_class.parent_class.destroy = face_destroy;
  return;
}
void face_init( GtsFace *face )
{
  face->surfaces = 0;
  return;
}
GtsFaceClass *gts_face_class( void )
{
  int eax;
  int edx;
  int edi;
  static GtsFaceClass *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo face_info = { };
    face_info.name[0] = 'G';
    *(int*)&face_info.name[4] = 0x656361;
    do
    {
      *(int*)&face_info.name[7] = 0;
    }
    while ( klass + 4 + 4 < 32 );
    face_info.object_size = 28;
    face_info.class_size = 92;
    face_info.class_init_func = &face_class_init;
    face_info.object_init_func = &face_init;
    klass = gts_object_class_new( (GtsObjectClass*)gts_triangle_class( ), &face_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
GtsFace *gts_face_new( GtsFaceClass *klass, GtsEdge *e1, GtsEdge *e2, GtsEdge *e3 )
{
  /* phantom */ GtsFace *f;
  gts_triangle_set( (GtsTriangle*)gts_object_new( (int)( &klass->parent_class.parent_class ) ), e1, e2, e3 );
  return *ebp_24;
}
gboolean gts_face_has_parent_surface( GtsFace *f, GtsSurface *s )
{
  int eax;
  int edx;
  GSList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    return 0;
  }
  i = f->surfaces;
  if ( i[3].data == 0 )
  {
    return 0;
  }
  do
  {
    if ( s == i )
      break;
    i = i->next;
  }
  while ( i->next );
  return 0;
}
}
GSList *gts_faces_from_edges( GSList *edges, GtsSurface *s )
{
  GHashTable *hash;
  GSList *faces = 0, *i;
  hash = g_hash_table_new( 0, 0 );
  i = edges;
  if ( edges )
  {
  {
    do
    {
      GSList *j = &i->_GSList;
      if ( i->_GSList )
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
                if ( ( !s || gts_face_has_parent_surface( &j->data[0], s ) ) && g_hash_table_lookup( &hash, &j ) == 0 )
                {
                  faces = g_slist_prepend( faces, &j );
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
  return faces;
}
guint gts_face_neighbor_number( GtsFace *f, GtsSurface *s )
{
  GSList *i;
  guint nn;
  GtsEdge *e[4], **e1;
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    nn = 0;
  }
  else
  {
    e1[0] = e[0];
    nn = 0;
    e[0] = f->triangle.e1;
    e[1] = f->triangle.e2;
    e[3] = 0;
    e[2] = f->triangle.e3;
    for ( ; e1[0];  )
    {
      i = e1[0]->triangles;
      if ( e1[0]->triangles == 0 )
        continue;
      else
      {
        do
        {
          /* phantom */ GtsTriangle *t;
          if ( i != f )
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
            if ( i )
            {
              if ( i->data[0] == 0 )
              {
                g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
                i = i->next;
                if ( i->next )
                  continue;
                else
                  break;
              }
              else
              do
              {
                if ( i->_GSList == gts_face_class( ) )
                {
                  if ( s == 0 || gts_face_has_parent_surface( &i->data[0], s ) )
                  {
                    nn++;
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
          i = i->next;
        }
        while ( i->next );
      }
      e1[0] = e1 + 4;
    }
  }
  return nn;
}
}
GSList *gts_face_neighbors( GtsFace *f, GtsSurface *s )
{
  int edx;
  GSList *i, *list;
  GtsEdge *e[4], **e1;
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    list = 0;
  }
  else
  {
    e1[0] = e[0];
    list = 0;
    e[0] = f->triangle.e1;
    e[1] = f->triangle.e2;
    e[3] = 0;
    e[2] = f->triangle.e3;
    for ( ; e1[0];  )
    {
      i = e1[0]->triangles;
      if ( e1[0]->triangles == 0 )
        continue;
      else
      {
        do
        {
          GtsTriangle *t = &i->data[0];
          if ( i != f )
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
            if ( t )
            {
              if ( t == 0 )
              {
                g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
                i = i->next;
                if ( i->next )
                  continue;
                else
                  break;
              }
              else
              do
              {
                if ( t[2].e2 == gts_face_class( ) )
                {
                  if ( s == 0 || gts_face_has_parent_surface( &t[0].object.klass[0].info.name[0], s ) )
                  {
                    list = g_slist_prepend( list, &t );
                    break;
                  }
                  else
                    break;
                }
                else
              }
              while ( t[2].e2[2].segment.v2 );
            }
          }
          i = i->next;
        }
        while ( i->next );
      }
      e1[0] = e1 + 4;
    }
  }
  return list;
}
}
void gts_face_foreach_neighbor( GtsFace *f, GtsSurface *s, GtsFunc func, gpointer data )
{
  int edx;
  GSList *i;
  GtsEdge *e[4], **e1;
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
  }
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( func == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "func != NULL" );
    return;
  }
  e1[0] = e[0];
  e[0] = f->triangle.e1;
  e[1] = f->triangle.e2;
  e[3] = 0;
  e[2] = f->triangle.e3;
  for ( ; e1[0];  )
  {
    i = e1[0]->triangles;
    if ( e1[0]->triangles == 0 )
      continue;
    else
    {
      do
      {
        GtsTriangle *t = &i->data[0];
        if ( i != f )
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
          if ( t )
          {
            if ( t == 0 )
            {
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
              i = i->next;
              if ( i->next )
                continue;
              else
                break;
            }
            else
            do
            {
              if ( t[2].e2 == gts_face_class( ) )
              {
                if ( s == 0 || gts_face_has_parent_surface( &t[0].object.klass[0].info.name[0], s ) )
                {
                  func( &t, data );
                  break;
                }
                else
                  break;
              }
              else
            }
            while ( t[2].e2[2].segment.v2 );
          }
        }
        i = i->next;
      }
      while ( i->next );
    }
    e1[0] = e1 + 4;
  }
}
  return;
}
}
gboolean triangle_is_incompatible( GtsTriangle *t, GtsEdge *e, GtsSurface *s )
{
  GSList *i = e->triangles;
  if ( i == 0 )
  {
    return 1;
  }
  do
  {
    if ( t != i )
    {
      if ( gts_face_class( ) == 0 )
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      else
      if ( i == 0 )
        goto B4;
      else
      if ( i->data[0] == 0 )
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
      else
      do
      {
        if ( i->_GSList == gts_face_class( ) )
        {
          if ( gts_face_has_parent_surface( &i->data[0], s ) && gts_triangles_are_compatible( t, &i->data[0], e ) == 0 )
          {
            break;
          }
          break;
        }
        else
      }
      while ( i->_GSList );
    }
B4:;
    i = i->next;
  }
  while ( i->next );
  return 1;
}
gboolean gts_face_is_compatible( GtsFace *f, GtsSurface *s )
{
  int eax;
  int ecx;
  int edx;
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
  return triangle_is_incompatible( &f[0].triangle, f->triangle.e1, s ) == 0 && triangle_is_incompatible( &f[0].triangle, f->triangle.e2, s ) == 0 ? triangle_is_incompatible( &f[0].triangle, f->triangle.e1, s ) == 0 : 0;
}
}
}
#if 0
#endif
