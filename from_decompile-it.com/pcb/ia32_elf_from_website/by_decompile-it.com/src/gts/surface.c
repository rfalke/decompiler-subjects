#include "surface.c.h"
void destroy_foreach_face( GtsFace *f, GtsSurface *s )
{
  f->surfaces = g_slist_remove( &f->surfaces, &s );
  if ( ( ( *(char*)(f + 8) & 1 ) & 255 ) == 0 && gts_allow_floating_faces == 0 && f + 24 == 0 )
  {
  }
  return;
}
void surface_destroy( GtsObject *object )
{
  /* phantom */ GtsSurface *surface;
  gts_surface_foreach_face( &object->klass->info.name[0], &destroy_foreach_face, &object );
  g_hash_table_destroy( &object[1].klass->info.name[0] );
  object = object;
  ;
}
void surface_write( GtsObject *object, FILE *fptr )
{
  __fprintf_chk( fptr, 1, " %s %s %s %s", &object->klass->info.name[0], &object[1].reserved, &object[1].flags, object[2].klass[1].info.name[0] == 0 ? "GtsVertexBinary" : &object[2].klass );
  return;
}
void surface_class_init( GtsSurfaceClass *klass )
{
  klass->parent_class.destroy = surface_destroy;
  klass->parent_class.write = surface_write;
  klass->add_face = 0;
  klass->remove_face = 0;
  return;
}
void surface_init( GtsSurface *surface )
{
  surface->faces = g_hash_table_new( 0, 0 );
  surface->vertex_class = gts_vertex_class( );
  surface->edge_class = gts_edge_class( );
  surface->keep_faces = 0;
  surface->face_class = gts_face_class( );
  return;
}
GtsSurfaceClass *gts_surface_class( void )
{
  int eax;
  int edx;
  int edi;
  static GtsSurfaceClass *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo surface_info = { };
    surface_info.name[0] = 'G';
    *(int*)&surface_info.name[4] = 0x61667275;
    *(int*)&surface_info.name[8] = 25955;
    do
    {
      *(int*)&surface_info.name[11] = 0;
    }
    while ( klass + 4 + 4 < 28 );
    surface_info.object_size = 32;
    surface_info.class_size = 100;
    surface_info.class_init_func = &surface_class_init;
    surface_info.object_init_func = &surface_init;
    klass = gts_object_class_new( gts_object_class( ), &surface_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
GtsSurface *gts_surface_new( GtsSurfaceClass *klass, GtsFaceClass *face_class, GtsEdgeClass *edge_class, GtsVertexClass *vertex_class )
{
  *(int*)gts_object_new( (int)( &klass->parent_class ) )/*.24*/ = vertex_class->parent_class.parent_class.info.name[0];
  *(int*)gts_object_new( (int)( &klass->parent_class ) )/*.20*/ = edge_class->parent_class.parent_class.info.name[0];
  *(int*)gts_object_new( (int)( &klass->parent_class ) )/*.16*/ = face_class->parent_class.parent_class.info.name[0];
  return gts_object_new( (int)( &klass->parent_class ) );
}
void gts_surface_add_face( GtsSurface *s, GtsFace *f )
{
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
    goto B3;
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( s->keep_faces )
  {
    g_assertion_message_expr( 0, "../../src/gts/surface.c", 153, __PRETTY_FUNCTION__, "s-&gt;keep_faces == FALSE" );
  }
  else
  {
    if ( g_hash_table_lookup( (int)( &s->faces ), &f ) == 0 )
    {
      f->surfaces = g_slist_prepend( f->surfaces, &s );
      g_hash_table_insert( (int)( &s->faces ), &f, &f );
    }
    if ( s[2].keep_faces )
    {
      ;
    }
    return;
  }
}
}
B3:;
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
  return;
}
}
void gts_surface_remove_face( GtsSurface *s, GtsFace *f )
{
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( s->keep_faces )
  {
    g_assertion_message_expr( 0, "../../src/gts/surface.c", 184, __PRETTY_FUNCTION__, "s-&gt;keep_faces == FALSE" );
  }
  else
  {
    g_hash_table_remove( (int)( &s->faces ), &f );
    f->surfaces = g_slist_remove( f->surfaces, &s );
    if ( s[3].object.klass->info.name[0] )
      eax( );
    if ( ( ( f->triangle.object.flags/*.1_1of4*/ & 1 ) & 255 ) == 0 && gts_allow_floating_faces == 0 && f->surfaces == 0 )
    {
      s = &f[0].triangle.object.klass[0].info.name[0];
    }
    return;
  }
}
}
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
  return;
}
}
guint gts_surface_read( GtsSurface *surface, GtsFile *f )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  int edi;
  /* phantom */ GtsVertex **vertices;
  /* phantom */ GtsEdge **edges;
  guint n;
  guint nv;
  guint ne;
  /* phantom */ guint nf;
{
  /* phantom */ int _g_boolean_var_;
  if ( surface == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "surface != NULL" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
  }
  if ( f->type != GTS_INT )
  {
    gts_file_error( f, "expecting an integer (number of vertices)" );
  }
  gts_file_next_token( f );
  if ( f->type != GTS_INT )
  {
    gts_file_error( f, "expecting an integer (number of edges)" );
    return f->line;
  }
  gts_file_next_token( f );
  if ( f->type != GTS_INT )
  {
    gts_file_error( f, "expecting an integer (number of faces)" );
    return f->line;
  }
  gts_file_next_token( f );
  if ( f->type == GTS_STRING )
  {
    gts_file_next_token( f );
    if ( f->type != GTS_STRING )
    {
      gts_file_error( f, "expecting a string (GtsFaceClass)" );
      return f->line;
    }
    gts_file_next_token( f );
    if ( f->type != GTS_STRING )
    {
      gts_file_error( f, "expecting a string (GtsEdgeClass)" );
      return f->line;
    }
  {
    guint s1;
    guint s2;
    guint s3;
    gts_file_next_token( f );
    if ( f->type != GTS_STRING )
    {
      gts_file_error( f, "expecting a string (GtsVertexClass)" );
      return f->line;
    }
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    if ( strcmp( &f->token->str[0], "GtsVertexBinary" ) == 0 )
      surface->vertex_class->parent_class.binary = 1;
    else
    {
      surface->vertex_class->parent_class.binary = 0;
      gts_file_first_token_after( f, 10 );
    }
  }
  }
  }
  else
    gts_file_first_token_after( f, 10 );
  if ( strtol( &f->token->str[0], 0, 10 ) )
  {
    ne = strtol( &f->token->str[0], 0, 10 );
    if ( strtol( &f->token->str[0], 0, 10 ) )
    {
      if ( f->type != GTS_ERROR )
      {
        n = 0;
        new_vertex = gts_object_new( (int)( &surface->vertex_class->parent_class.parent_class ) );
        ;
      }
      n = 0;
    }
    else
    {
      n = 0;
      if ( f->type == GTS_ERROR )
        goto B43;
      else
      {
        if ( surface->vertex_class->parent_class.binary )
          gts_file_first_token_after( f, 10 );
        if ( ne )
        {
          if ( f->type != GTS_ERROR )
          {
            /* phantom */ guint p1;
            /* phantom */ guint p2;
            GtsEdge *new_edge;
            n = 0;
            do
            {
              if ( f->type != GTS_INT )
                gts_file_error( f, "expecting an integer (first vertex index)" );
              else
              {
                if ( ebp_60 < eax || strtol( &f->token->str[0], 0, 10 ) == 0 )
                  gts_file_error( f, (gchar*)f, "vertex index `%d' is out of range `[1,%d]'", "vertex index `%d' is out of range `[1,%d]'", edx, ebp_60 );
                else
                {
                  gts_file_next_token( f );
                  if ( f->type != GTS_INT )
                    gts_file_error( f, "expecting an integer (second vertex index)" );
                  else
                  {
                    if ( n < strtol( &f->token->str[0], 0, 10 ) || strtol( &f->token->str[0], 0, 10 ) == 0 )
                      gts_file_error( f, "vertex index `%d' is out of range `[1,%d]'", strtol( &f->token->str[0], 0, 10 ), n );
                    else
                    {
                      new_edge = &eax[0].triangle.object.klass[0].info.name[0];
                      gts_file_next_token( f );
                      if ( f->type != 10 && surface->edge_class->parent_class.parent_class.read )
                        new_edge = eax( );
                      gts_file_first_token_after( f, 10 );
                      n++;
                    }
                  }
                }
              }
              if ( ne <= n )
                surface = surface;
              else
              {
              }
            }
            while ( f->type != GTS_ERROR );
            surface = surface;
            ne = n;
            n = 0;
            while ( f->type != GTS_ERROR )
            {
              if ( f->type == GTS_INT )
              {
                if ( ne < strtol( &f->token->str[0], 0, 10 ) || strtol( &f->token->str[0], 0, 10 ) == 0 )
                  gts_file_error( f, "edge index `%d' is out of range `[1,%d]'", strtol( &f->token->str[0], 0, 10 ), ne );
                else
                {
                  gts_file_next_token( f );
                  if ( f->type != GTS_INT )
                    gts_file_error( f, "expecting an integer (second edge index)" );
                  else
                  {
                    if ( ne < strtol( &f->token->str[0], 0, 10 ) || strtol( &f->token->str[0], 0, 10 ) == 0 )
                      gts_file_error( f, "edge index `%d' is out of range `[1,%d]'", strtol( &f->token->str[0], 0, 10 ), ne );
                    else
                    {
                      gts_file_next_token( f );
                      if ( f->type != GTS_INT )
                        gts_file_error( f, "expecting an integer (third edge index)" );
                      else
                      {
                        s3 = strtol( &f->token->str[0], 0, 10 );
                        if ( ne < s3 || s3 == 0 )
                          gts_file_error( f, "edge index `%d' is out of range `[1,%d]'", s3, ne );
                        else
                        {
                          GtsFace *new_face = eax;
                          gts_file_next_token( f );
                          if ( f->type != 10 && surface->face_class->parent_class.parent_class.read )
                            new_face = eax( );
                          n++;
                          gts_file_first_token_after( f, 10 );
                          gts_surface_add_face( surface, new_face );
                        }
                      }
                    }
                  }
                }
              }
              else
                gts_file_error( f, "expecting an integer (first edge index)" );
              if ( strtol( &f->token->str[0], 0, 10 ) <= n )
              {
                if ( f->type == GTS_ERROR )
                  break;
                else
                {
                  g_free( ebp_52 );
                  g_free( g_malloc( ( ne + 1 ) * 4 ) );
                  if ( f->type == GTS_ERROR )
                  {
                    return f->line;
                  }
                }
              }
              else
              {
              }
            }
            gts_allow_floating_vertices = 1;
            if ( n )
            {
              nv = n + -1;
              while ( 1 )
              {
                gts_object_destroy( &esi );
                if ( nv == 0 )
                  goto B67;
                else
                {
                  nv += -1;
                }
              }
            }
B67:;
            gts_allow_floating_vertices = 0;
            g_free( ebp_52 );
            g_free( g_malloc( ( ne + 1 ) * 4 ) );
          }
          else
            n = 0;
        }
        else
          n = 0;
        if ( f->type == GTS_ERROR )
          continue;
        n = 0;
        while ( f->type != GTS_ERROR )
        {
        }
        gts_allow_floating_vertices = 1;
      }
    }
B43:;
  }
}
}
}
void sum_area( GtsFace *f, gdouble *area )
{
  gts_triangle_area( (int)( &f->triangle ) );
  area[0] = area[0];
  return;
}
gdouble gts_surface_area( GtsSurface *s )
{
  gdouble area = 0.000000000000;
  gts_surface_foreach_face( s, &sum_area, ebp_32 );
  return 0;
}
void gts_range_init( GtsRange *r )
{
  int eax;
{
  /* phantom */ int _g_boolean_var_;
  if ( r == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "r != NULL" );
    return;
  }
  r->max = -179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010;
  r = 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010;
  r->sum2 = 0.000000000000;
  r->n = 0;
  r->sum = 0.000000000000;
  return;
}
}
void gts_range_reset( GtsRange *r )
{
  int eax;
{
  /* phantom */ int _g_boolean_var_;
  if ( r == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "r != NULL" );
    return;
  }
  r->max = 0.000000000000;
  r->n = 0;
  r = 0.000000000000;
  r->sum2 = 0.000000000000;
  r->sum = 0.000000000000;
  return;
}
}
void gts_range_add_value( GtsRange *r, gdouble val )
{
  int eax;
  double fp7;
{
  /* phantom */ int _g_boolean_var_;
  if ( r == 0 )
  {
    r = 0;
  }
  if ( val < r )
    r = &val & 0xFFFFFFFF;
  if ( r->max < r )
  {
    r->max = r;
  }
  r->sum += &r->max;
  r->n++;
  r->sum2 += &r->max * &r->max;
  return;
}
}
void gts_range_update( GtsRange *r )
{
  double fp4;
  double fp5;
  double fp6;
  double fp7;
{
  /* phantom */ int _g_boolean_var_;
  if ( r == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "r != NULL" );
    return;
  }
  if ( r->n == 0 )
  {
    r->stddev = 0.000000000000;
    r->mean = 0.000000000000;
    r->max = 0.000000000000;
    r = 0.000000000000;
    return;
  }
  if ( 0.000000000000 < r->sum2 - ( ( r->sum * r->sum ) / (double)( (long long)( r->n ) ) ) )
  {
    r->stddev = 0.000000000000;
  }
  else
  {
    if ( sqrt( ( r->sum2 - ( ( r->sum * r->sum ) / (double)( (long long)( r->n ) ) ) ) / (double)( (long long)( r->n ) ) ) == sqrt( ( r->sum2 - ( ( r->sum * r->sum ) / (double)( (long long)( r->n ) ) ) ) / (double)( (long long)( r->n ) ) ) )
    {
      if ( sqrt( fp5 / fp6 ) != sqrt( fp5 / fp6 ) )
      {
      }
      else
      {
        r->stddev = r->sum2 - ( ( r->sum * r->sum ) / (double)( (long long)( r->n ) ) );
      }
    }
    else
    {
    }
    sqrt( sqrt( ( r->sum2 - ( ( r->sum * r->sum ) / (double)( (long long)( r->n ) ) ) ) / (double)( (long long)( r->n ) ) ) );
    r->stddev = r->sum2 - ( ( r->sum * r->sum ) / (double)( (long long)( r->n ) ) );
  }
  r->mean = r->sum / (double)( (long long)( r->n ) );
  return;
}
}
void gts_range_print( GtsRange *r, FILE *fptr )
{
  int eax;
  int edx;
{
  /* phantom */ int _g_boolean_var_;
  if ( r == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "r != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( fptr )
  {
    __fprintf_chk( fptr, 1, "min: %g mean: %g | %g max: %g", r, r->mean, r->stddev, r->max );
    return;
  }
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fptr != NULL" );
  return;
}
}
}
void stats_foreach_vertex( GtsVertex *v, GtsSurfaceStats *stats )
{
  int ecx;
  GSList *i;
  guint nedges = 0;
  i = &v->segments;
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
              nedges = ( nedges + 1 ) - ( ( gts_edge_has_parent_surface( &i->data[0], stats->parent ) < 1 ) & 1 );
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
  edx = 0;
  gts_range_add_value( &stats->edges_per_vertex.min + 24, (double)( (long long)( nedges ) ) );
  return;
}
void stats_foreach_edge( GtsEdge *e, GtsSurfaceStats *stats )
{
  int esi;
  guint nt = gts_edge_face_number( e, &stats->parent );
  if ( gts_segment_is_duplicate( (int)( &e->segment ) ) )
    stats->n_duplicate_edges++;
  if ( nt == 1 )
    stats->n_boundary_edges++;
  else
  if ( nt > 2 )
    stats->n_non_manifold_edges = stats->n_non_manifold_edges + 1;
  nt = 0;
  gts_range_add_value( &stats->faces_per_edge.min + 76, (double)( (long long)( nt ) ) );
  return;
}
void stats_foreach_face( GtsTriangle *t, GtsSurfaceStats *stats )
{
  if ( gts_face_is_compatible( &t->object.klass->info.name[0], &stats->parent ) == 0 )
    stats->n_incompatible_faces++;
  if ( gts_triangle_is_duplicate( t ) )
  {
    stats->n_duplicate_faces++;
  }
  stats->n_faces = stats + 1;
  return;
}
void gts_surface_stats( GtsSurface *s, GtsSurfaceStats *stats )
{
  int ebx;
  int esi;
  int edi;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
  }
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( stats == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "stats != NULL" );
  }
  else
  {
    stats->parent = s;
    stats = 0;
    stats->n_incompatible_faces = 0;
    stats->n_duplicate_faces = 0;
    stats->n_duplicate_edges = 0;
    stats->n_boundary_edges = 0;
    stats->n_non_manifold_edges = 0;
    gts_range_init( &stats->edges_per_vertex.min );
    gts_range_init( &stats->faces_per_edge.min );
    gts_surface_foreach_vertex( s, &stats_foreach_vertex, &stats );
    gts_surface_foreach_edge( s, &stats_foreach_edge, &stats );
    gts_surface_foreach_face( s, &stats_foreach_face, &stats );
    gts_range_update( &stats->edges_per_vertex.min );
    s = &stats->faces_per_edge.min;
  }
}
  return;
}
}
void quality_foreach_edge( GtsSegment *s, GtsSurfaceQualityStats *stats )
{
  GSList *i = &s[1].object.klass->info.name[0];
  gts_point_distance( &s->v1->p, &s->v2->p );
  gts_range_add_value( stats + 104, 0.000000000000 );
  if ( i )
  {
    GSList *j;
    do
    {
      j = i->next;
      if ( i->next == 0 )
        break;
      do
      {
        gts_triangles_angle( &i->data[0], &j->data[0] );
        gts_range_add_value( &stats->face_quality.min, abs( 0.000000000000 ) );
        j = j->next;
      }
      while ( j->next == 0 );
      i = i->next;
    }
    while ( i->next );
  }
  return;
}
void quality_foreach_face( GtsTriangle *t, GtsSurfaceQualityStats *stats )
{
  int ebx;
  gts_triangle_quality( t );
  gts_range_add_value( (int)( &stats->face_quality ), 0.000000000000 );
  gts_triangle_area( t );
  gts_range_add_value( stats + 52, 0.000000000000 );
  return;
}
void gts_surface_quality_stats( GtsSurface *s, GtsSurfaceQualityStats *stats )
{
  int ebx;
  int esi;
  int edi;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
  }
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( stats == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "stats != NULL" );
  }
  else
  {
    stats->parent = s;
    gts_range_init( &stats[0].face_quality );
    gts_range_init( &stats->face_area.min );
    gts_range_init( &stats->edge_length.min );
    gts_range_init( &stats->edge_angle.min );
    gts_surface_foreach_edge( s, &quality_foreach_edge, &stats );
    gts_surface_foreach_face( s, &quality_foreach_face, &stats );
    gts_range_update( &stats[0].face_quality );
    gts_range_update( &stats->face_area.min );
    gts_range_update( &stats->edge_length.min );
    s = &stats->edge_angle.min;
  }
}
  return;
}
}
void gts_surface_print_stats( GtsSurface *s, FILE *fptr )
{
  GtsSurfaceStats stats;
  GtsSurfaceQualityStats qstats;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( fptr == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fptr != NULL" );
    return;
  }
  gts_surface_stats( s, &stats );
  gts_surface_quality_stats( s, &qstats );
  __fprintf_chk( fptr, 1, "# vertices: %u edges: %u faces: %u\n# Connectivity statistics\n#   incompatible faces: %u\n#   duplicate faces: %u\n#   boundary edges: %u\n#   duplicate edges: %u\n#   non-manifold edges: %u\n", stats.edges_per_vertex.n, stats.faces_per_edge.n, stats.n_faces, stats.n_incompatible_faces, stats.n_duplicate_faces, stats.n_boundary_edges, stats.n_duplicate_edges, stats.n_non_manifold_edges );
  fwrite( "#   edges per vertex: ", 1, 22, fptr );
  gts_range_print( &stats.edges_per_vertex, fptr );
  fwrite( "\n#   faces per edge: ", 1, 21, fptr );
  gts_range_print( &stats.faces_per_edge, fptr );
  fwrite( "\n# Geometric statistics\n#   face quality: ", 1, 42, fptr );
  gts_range_print( &qstats.face_quality, fptr );
  fwrite( "\n#   face area  : ", 1, 18, fptr );
  gts_range_print( &qstats.face_area, fptr );
  fwrite( "\n#   edge length : ", 1, 19, fptr );
  gts_range_print( &qstats.edge_length, fptr );
  fputc( 10, fptr );
  return;
}
}
}
void write_vertex( GtsPoint *p, gpointer *data )
{
  ;
}
void write_edge( GtsSegment *s, gpointer *data )
{
  __fprintf_chk( data[0], 1, "%u %u", g_hash_table_lookup( &data[2][0], &s->v1 ), g_hash_table_lookup( &data[2][0], &s->v2 ) );
  if ( s->_GtsSegment )
    eax( s, data[0] );
  fputc( 10, data[0] );
  *(int*)(data[1])++;
  g_hash_table_insert( &data[3][0], &s, *(int*)(data[1]) + 1 );
  return;
}
void write_face( GtsTriangle *t, gpointer *data )
{
  int ebx;
  int esi;
  int edi;
  __fprintf_chk( data[0], 1, "%u %u %u", g_hash_table_lookup( &data[3][0], &t->e1 ), g_hash_table_lookup( &data[3][0], &t->e2 ), g_hash_table_lookup( &data[3][0], &t->e3 ) );
  if ( t->_GtsTriangle )
    eax( t, data[0] );
  t = 10;
  data = (gpointer*)&data[0];
}
void gts_surface_write( GtsSurface *s, FILE *fptr )
{
  guint n;
  gpointer data[4];
  GHashTable *vindex, *eindex;
  GtsSurfaceStats stats;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( fptr == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fptr != NULL" );
    return;
  }
  data[0] = (void*)fptr;
  data[1] = &n;
  vindex = g_hash_table_new( 0, 0 );
  data[2] = (void*)g_hash_table_new( 0, 0 );
  eindex = g_hash_table_new( 0, 0 );
  data[3] = (void*)g_hash_table_new( 0, 0 );
  gts_surface_stats( s, &stats );
  __fprintf_chk( fptr, 1, "%u %u %u", stats.edges_per_vertex.n, stats.faces_per_edge.n, stats.n_faces );
  if ( s[2].face_class->parent_class.parent_class.info.name[0] )
    eax( s, fptr );
  fputc( 10, fptr );
  n = 0;
  gts_surface_foreach_vertex( s, &write_vertex, data[0] );
  n = 0;
  if ( s->vertex_class->parent_class.binary )
    fputc( 10, fptr );
  gts_surface_foreach_edge( s, &write_edge, data[0] );
  gts_surface_foreach_face( s, &write_face, data[0] );
  g_hash_table_destroy( &vindex );
  g_hash_table_destroy( &eindex );
  return;
}
}
}
void write_vertex_oogl( GtsPoint *p, gpointer *data )
{
  FILE *fp = &data[0][0];
  __fprintf_chk( data[0], 1, "%g %g %g", p->x, p->y, p->z );
  if ( p->_GtsPoint )
  {
    GtsColor c;
    eax( c.r, p );
    __fprintf_chk( fp, 1, " %g %g %g 1.0\n", c.r, c.g, c.b );
  }
  else
  {
    fputc( 10, fp );
  }
  p->object.reserved = *(int*)(data[1]);
  data[1][0] = *(int*)(data[1]) + 1;
  return;
}
void write_face_oogl( GtsTriangle *t, FILE *fp )
{
  GtsVertex *v1, *v2, *v3;
  gts_triangle_vertices( t, &v1, &v2, &v3 );
  __fprintf_chk( fp, 1, "3 %u %u %u", v1->p.object.reserved, v2->p.object.reserved, v3->p.object.reserved );
  if ( t->_GtsTriangle )
  {
    GtsColor c;
    eax( c.r, t );
    __fprintf_chk( fp, 1, " %g %g %g\n", c.r, c.g, c.b );
    return;
  }
  fputc( 10, fp );
  return;
}
void gts_surface_write_oogl( GtsSurface *s, FILE *fptr )
{
  guint n = 0;
  gpointer data[2];
  GtsSurfaceStats stats;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( fptr == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fptr != NULL" );
    return;
  }
  data[1] = &n;
  data[0] = (void*)fptr;
  gts_surface_stats( s, &stats );
  if ( s->vertex_class->parent_class.parent_class.color )
    fwrite( "COFF ", 1, 5, fptr );
  else
    fwrite( "OFF ", 1, 4, fptr );
  __fprintf_chk( fptr, 1, "%u %u %u\n", stats.edges_per_vertex.n, stats.n_faces, stats.faces_per_edge.n );
  gts_surface_foreach_vertex( s, &write_vertex_oogl, data[0] );
  gts_surface_foreach_face( s, &write_face_oogl, &fptr );
  gts_surface_foreach_vertex( s, &gts_object_reset_reserved, 0 );
  return;
}
}
}
void write_vertex_vtk( GtsPoint *p, gpointer *data )
{
  /* phantom */ FILE *fp;
  __fprintf_chk( data[0], 1, "%g %g %g\n", p->x, p->y, p->z );
  p->object.reserved = data[1][0];
  data[1][0]++;
  return;
}
void write_face_vtk( GtsTriangle *t, FILE *fp )
{
  GtsVertex *v1, *v2, *v3;
  gts_triangle_vertices( t, &v1, &v2, &v3 );
  __fprintf_chk( fp, 1, "3 %u %u %u\n", v1->p.object.reserved, v2->p.object.reserved, v3->p.object.reserved );
  return;
}
void gts_surface_write_vtk( GtsSurface *s, FILE *fptr )
{
  guint n = 0;
  gpointer data[2];
  GtsSurfaceStats stats;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( fptr == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fptr != NULL" );
    return;
  }
  data[0] = (void*)fptr;
  data[1] = &n;
  gts_surface_stats( s, &stats );
  __fprintf_chk( fptr, 1, "# vtk DataFile Version 2.0\nGenerated by GTS\nASCII\nDATASET POLYDATA\nPOINTS %u float\n", stats.edges_per_vertex.n );
  gts_surface_foreach_vertex( s, &write_vertex_vtk, data[0] );
  __fprintf_chk( fptr, 1, "POLYGONS %u %u\n", stats.n_faces, stats.n_faces << 2 );
  gts_surface_foreach_face( s, &write_face_vtk, &fptr );
  gts_surface_foreach_vertex( s, &gts_object_reset_reserved, 0 );
  return;
}
}
}
void write_edge_oogl_boundary( GtsSegment *s, gpointer *data )
{
  if ( gts_edge_is_boundary( &s->object.klass->info.name[0], &data[1][0] ) )
  {
    if ( s[4].object.reserved[0] == 0 )
    {
      __fprintf_chk( data[0], 1, "VECT 1 2 0 2 0 %g %g %g %g %g %g\n", s->v1->p.x, s->v1->p.y, s->v1->p.z, s->v2->p.x, s->v2->p.y, s->v2->p.z );
      return;
    }
  {
    GtsColor c;
    eax( s );
    __fprintf_chk( data[0], 1, "VECT 1 2 1 2 1 %g %g %g %g %g %g %g %g %g 1.\n", s->v1->p.x, s->v1->p.y, s->v1->p.z, s->v2->p.x, s->v2->p.y, s->v2->p.z, c.r, c.g, c.b );
  }
  }
  return;
}
void gts_surface_write_oogl_boundary( GtsSurface *s, FILE *fptr )
{
  gpointer data[2];
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( fptr == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fptr != NULL" );
    return;
  }
  data[0] = (void*)fptr;
  data[1] = (void*)s;
  fwrite( "LIST {\n", 1, 7, fptr );
  gts_surface_foreach_edge( s, &write_edge_oogl_boundary, data[0] );
  fwrite( "}\n", 1, 2, fptr );
  return;
}
}
}
void vertex_foreach_face( GtsTriangle *t, gpointer t_data, gpointer *info )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  GHashTable *hash = info[0];
  gpointer data;
  GtsFunc func;
  GtsSegment *s1 = &t->e1->segment;
  data = info[1];
  func = ((gint)( gpointer , gpointer  )*)info[2];
  if ( g_hash_table_lookup( &info[0][0], &s1->v1 ) == 0 )
  {
    func( &s1->v1, data );
    g_hash_table_insert( &hash, &s1->v1, -1 );
  }
  if ( g_hash_table_lookup( &hash, &s1->v2 ) == 0 )
  {
    func( &s1->v2, data );
    g_hash_table_insert( &hash, &s1->v2, -1 );
  }
  if ( t->e2->segment.v1 != t->e1->segment.v1 && t->e2->segment.v1 != t->e1->segment.v2 )
  {
    if ( g_hash_table_lookup( &hash, &t->e2->segment.v1 ) == 0 )
      goto B15;
    else
    {
      return;
    }
  }
  else
  {
    if ( g_hash_table_lookup( &hash, &t->e2->segment.v2 ) == 0 )
      goto B15;
    else
    {
      return;
    }
  }
B15:;
  if ( t->e2->segment.v1 == t->e1->segment.v1 || t->e2->segment.v1 == t->e1->segment.v2 )
  {
  }
  func( &t->e2->segment.v1, data );
  if ( t->e2->segment.v1 == t->e1->segment.v1 || t->e2->segment.v1 == t->e1->segment.v2 )
  {
  }
  t = &hash;
  info = -1;
  t_data = &t->e2->segment.v1;
}
void gts_surface_foreach_vertex( GtsSurface *s, GtsFunc func, gpointer data )
{
  gpointer info[3];
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( func == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "func != NULL" );
    return;
  }
  s->keep_faces = 1;
  info[2] = (void*)func;
  info[0] = (void*)g_hash_table_new( 0, 0 );
  info[1] = data;
  g_hash_table_foreach( (int)( &s->faces ), &vertex_foreach_face, info[0] );
  g_hash_table_destroy( &info[0][0] );
  s->keep_faces = 0;
  return;
}
}
}
void edge_foreach_face( GtsTriangle *t, gpointer t_data, gpointer *info )
{
  int ebx;
  int esi;
  int edi;
  GHashTable *hash = info[0];
  gpointer data;
  GtsFunc func = ((gint)( gpointer , gpointer  )*)info[2];
  data = info[1];
  if ( g_hash_table_lookup( &info[0][0], &t->e1 ) == 0 )
  {
    func( &t->e1, data );
    g_hash_table_insert( &hash, &t->e1, -1 );
  }
  if ( g_hash_table_lookup( &hash, &t->e2 ) == 0 )
  {
    func( &t->e2, data );
    g_hash_table_insert( &hash, &t->e2, -1 );
  }
  if ( g_hash_table_lookup( &hash, &t->e3 ) == 0 )
  {
    func( &t->e3, data );
    info = -1;
    t = &hash;
    t_data = &t->e3;
  }
  return;
}
void gts_surface_foreach_edge( GtsSurface *s, GtsFunc func, gpointer data )
{
  gpointer info[3];
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( func == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "func != NULL" );
    return;
  }
  s->keep_faces = 1;
  info[2] = (void*)func;
  info[0] = (void*)g_hash_table_new( 0, 0 );
  info[1] = data;
  g_hash_table_foreach( (int)( &s->faces ), &edge_foreach_face, info[0] );
  g_hash_table_destroy( &info[0][0] );
  s->keep_faces = 0;
  return;
}
}
}
void foreach_face( GtsFace *f, gpointer t_data, gpointer *info )
{
  t_data = info[1];
  ;
}
void gts_surface_foreach_face( GtsSurface *s, GtsFunc func, gpointer data )
{
  int eax;
  gpointer info[2];
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( func == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "func != NULL" );
    return;
  }
  info[0] = (void*)func;
  s->keep_faces = 1;
  info[1] = data;
  g_hash_table_foreach( (int)( &s->faces ), &foreach_face, info[0] );
  s->keep_faces = 0;
  return;
}
}
}
gboolean foreach_face_remove( GtsFace *f, gpointer t_data, gpointer *info )
{
  ;
}
guint gts_surface_foreach_face_remove( GtsSurface *s, GtsFunc func, gpointer data )
{
  int eax;
  gpointer info[4];
  guint n;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( func == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "func != NULL" );
    return 0;
  }
  info[0] = (void*)func;
  info[2] = (void*)s;
  s->keep_faces = 1;
  info[1] = data;
  s->keep_faces = 0;
  return g_hash_table_foreach_remove( (int)( &s->faces ), &foreach_face_remove, info[0] );
}
}
}
gdouble edge_length2_inverse( GtsSegment *s )
{
  gts_point_distance2( &s->v1->p, &s->v2->p );
  return 1;
}
void create_heap_refine( GtsEdge *e, GtsEHeap *heap )
{
  e = &heap->elts->pdata[0][0];
  heap = &e->segment.object.klass->info.name[0];
}
void gts_surface_refine( GtsSurface *surface, GtsKeyFunc cost_func, gpointer cost_data, GtsRefineFunc refine_func, gpointer refine_data, GtsStopFunc stop_func, gpointer stop_data )
{
  int eax;
  int edx;
  GtsEHeap *heap;
  /* phantom */ GtsEdge *e;
  gdouble top_cost;
{
  /* phantom */ int _g_boolean_var_;
  if ( surface == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "surface != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( stop_func == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "stop_func != NULL" );
    return;
  }
  cost_func = cost_func == 0 ? cost_func : &edge_length2_inverse;
  refine_func = refine_func != 0 ? &gts_segment_midvertex : refine_func;
  heap = gts_eheap_new( cost_func == 0 ? cost_func : &edge_length2_inverse, cost_data );
  gts_eheap_freeze( heap );
  gts_surface_foreach_edge( surface, &create_heap_refine, &heap );
  gts_eheap_thaw( heap );
  while ( gts_eheap_remove_top( heap, &top_cost ) && stop_func( top_cost, gts_eheap_size( heap ) + gts_edge_face_number( gts_eheap_remove_top( heap, &top_cost ), surface ) + 2, stop_data ) == 0 )
  {
    gts_eheap_insert( heap, gts_edge_new( &surface->edge_class, *(int*)gts_eheap_remove_top( heap, &top_cost )/*.12*/, refine_func( gts_eheap_remove_top( heap, &top_cost ), &surface->vertex_class, refine_data ) ) );
    gts_eheap_insert( &ebx, &eax );
    if ( *(int*)gts_eheap_remove_top( heap, &top_cost )/*.20*/ )
    {
      while ( 1 )
      {
        gts_triangle_vertices_edges( *ebp_108, &eax[0].triangle.object.klass[0].info.name[0], ebp_32, ebp_36, ebp_40, ebp_28, ebp_44, ebp_48 );
        gts_eheap_insert( heap, &eax );
        *(int*)(esi + 20) = eax;
        *(int*)(edi + 20) = eax;
        *(int*)(ebx + 16) = edi;
        *(int*)(ebx + 12) = esi;
        *(int*)(ebp_44 + 20) = eax;
        *(int*)(ebx + 20) = ebp_48;
        gts_surface_add_face( &ebx, eax );
        if ( *(int*)(ebp_108 + 4) == 0 )
        {
        }
        else
        {
        }
      }
    }
    g_slist_free( &ebx );
    *(int*)(ebp_28 + 20) = 0;
    gts_object_destroy( ebp_28 );
  }
  gts_eheap_destroy( heap );
  return;
}
}
}
GSList *edge_triangles( GtsEdge *e1, GtsEdge *e )
{
  int ecx;
  GSList *i = e1->triangles;
  GSList *triangles = 0;
  if ( i )
  {
    do
    {
      t = &i->data[0];
      e2 = *(int*)(i[1].next);
      if ( t->e1 != e )
      {
        if ( t->e2 != e )
        {
          if ( t->e3 == e )
          {
            GtsEdge *e2;
            GSList *j;
            if ( e1 == e2 )
              goto B12;
          }
          else
          {
            GtsTriangle *t;
            g_slist_prepend( triangles, &t );
          }
        }
        else
        {
          e2 = t->e3;
          if ( e1 == t->e3 )
            goto B12;
        }
B12:;
        e2 = t->e1;
      }
      else
      {
        e2 = t->e2;
        if ( e1 == t->e2 )
          e2 = t->e3;
      }
      j = e2->triangles;
      if ( e2->triangles )
      {
      {
        do
        {
          GtsTriangle *t = &j->data[0];
          if ( t->e1 != e && t->e2 != e && t->e3 != e )
            g_slist_prepend( triangles, &t );
          j = j->next;
        }
        while ( j->next );
        i = i->next;
        if ( i->next == 0 )
          break;
      }
      }
      else
      {
        i = i->next;
      }
    }
    while ( i->next );
  }
  return g_slist_prepend( triangles, &t );
}
gboolean gts_edge_collapse_creates_fold( GtsEdge *e, GtsVertex *v, gdouble max )
{
  int eax;
  int ecx;
  int edx;
  GtsVertex *v1, *v2;
  /* phantom */ GtsSegment *s;
  GSList *i;
  gboolean folded;
{
  /* phantom */ int _g_boolean_var_;
  if ( e == 0 )
  {
    folded = 1;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e != NULL" );
    return folded;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( v == 0 )
  {
    folded = 1;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v != NULL" );
    return folded;
  }
  i = &e->segment.v1->segments;
  if ( e->segment.v1->segments )
  {
    v1 = &e->segment.v1;
    do
    {
      if ( v1 == e->segment.v1->segments->_GSList )
      {
        e->segment.v1->segments->next->_GSList = v;
        if ( e->segment.v1->segments->next )
          continue;
        else
          break;
      }
      else
      {
        e->segment.v1->segments->next->_GSList = v;
      }
    }
    while ( e->segment.v1->segments->next );
  }
  i = &e->segment.v2->segments;
  if ( e->segment.v2->segments )
  {
    v2 = &e->segment.v2;
    do
    {
      if ( v2 == e->segment.v2->segments->_GSList )
      {
        e->segment.v2->segments->next->_GSList = v;
        if ( e->segment.v2->segments->next )
          continue;
        else
        {
          break;
        }
      }
      else
      {
        e->segment.v2->segments->next->_GSList = v;
      }
    }
    while ( e->segment.v2->segments->next );
  }
  folded = 0;
  if ( i->data[0] )
  {
    do
    {
      if ( gts_edge_class( ) == 0 )
      {
        folded = 0;
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
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
            if ( i->_GSList == gts_edge_class( ) )
            {
              /* phantom */ GtsEdge *e1;
              if ( i != e )
              {
                GSList *triangles = edge_triangles( &i->data[0], e );
                folded = gts_triangles_are_folded( edge_triangles( &i->data[0], e ), &i[1].next, &i->data[0], max );
                g_slist_free( edge_triangles( &i->data[0], e ) );
              }
              else
                break;
            }
            else
          }
          while ( i->_GSList );
        }
        folded = 0;
      }
      i = i->next;
    }
    while ( ( ( folded == 0 ) & 255 ) && i );
    i = &e->segment.v2->segments;
  }
  if ( ( folded == 0 ) & 255 )
  {
    do
    {
      if ( i )
      {
        /* phantom */ GtsSegment *s;
        if ( gts_edge_class( ) == 0 )
        {
          folded = 0;
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
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
              if ( i->_GSList == gts_edge_class( ) )
              {
                /* phantom */ GtsEdge *e1;
                if ( i != e )
                {
                  GSList *triangles = edge_triangles( &i->data[0], e );
                  folded = gts_triangles_are_folded( edge_triangles( &i->data[0], e ), &i[1].next, &i->data[0], max );
                  g_slist_free( edge_triangles( &i->data[0], e ) );
                }
                else
                  break;
              }
              else
            }
            while ( i->_GSList );
          }
          folded = 0;
        }
        i = i->next;
      }
      else
        break;
    }
    while ( ( folded == 0 ) & 255 );
  }
  if ( folded == 0 )
  {
    GSList *triangles;
    if ( gts_vertex_triangles( &e->segment.v2, gts_vertex_triangles( &e->segment.v1, 0 ) ) )
    {
      i = gts_vertex_triangles( &e->segment.v2, gts_vertex_triangles( &e->segment.v1, 0 ) );
      do
      {
        t = &i->data[0];
        if ( t->e1 != e && t->e2 != e && t->e3 != e )
        {
          GtsTriangle *t;
          GtsEdge *e1;
        {
          /* phantom */ int _g_boolean_var_;
          if ( e1 == 0 )
            g_assertion_message_expr( 0, "../../src/gts/surface.c", 1420, __PRETTY_FUNCTION__, "e1" );
          else
          {
            i = i->next;
            if ( ( ( folded == 0 ) & 255 ) == 0 )
              break;
          }
        }
        }
        else
        {
          folded = 0;
          i = i->next;
          if ( ( 1 & 255 ) == 0 )
            break;
        }
      }
      while ( i );
      folded = 0;
    }
    g_slist_free( ebp_44 );
  }
  if ( e->segment.v1->segments )
  {
    v1 = &e->segment.v1;
    do
    {
      if ( v == e->segment.v1->segments->_GSList )
      {
        e->segment.v1->segments->next->_GSList = v1;
        if ( e->segment.v1->segments->next )
          continue;
        else
        {
          break;
        }
      }
      else
      {
        e->segment.v1->segments->next->_GSList = v1;
      }
    }
    while ( e->segment.v1->segments->next );
  }
  if ( e->segment.v2->segments )
  {
    v2 = &e->segment.v2;
    do
    {
      if ( v == e->segment.v2->segments->_GSList )
      {
        e->segment.v2->segments->next->_GSList = v2;
        if ( e->segment.v2->segments->next == 0 )
        {
          break;
        }
      }
      else
      {
        e->segment.v2->segments->next->_GSList = v2;
      }
    }
    while ( e->segment.v2->segments->next );
  }
  return folded;
  folded = 1;
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "v != NULL" );
  return folded;
}
}
}
gboolean gts_edge_collapse_is_valid( GtsEdge *e )
{
  int eax;
  GSList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( e == 0 )
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "e != NULL" );
  else
  {
    i = &e->segment.v1->segments;
    if ( e->segment.v1->segments )
    {
    {
      do
      {
        GtsEdge *e1 = &i->data[0];
        if ( i->data[0] != e )
        {
          if ( gts_edge_class( ) == 0 )
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
          else
          if ( e1 )
          {
            if ( e1->segment.object.klass->info.name[0] == 0 )
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
            else
            do
            {
              if ( e1->_GtsEdge == gts_edge_class( ) )
              {
                /* phantom */ GtsEdge *e2;
                GSList *j;
                if ( e1->segment.v1 == e->segment.v1 )
                {
                }
                j = &e1->segment.v2->segments;
                while ( j )
                {
                  /* phantom */ GtsEdge *e1;
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
                        if ( j[1].next != e->segment.v2 && j[2].data != e->segment.v2 )
                          break;
                        else
                        {
                          if ( gts_triangle_use_edges( e, e1, &j->data[0] ) == 0 )
                          {
                            break;
                          }
                        }
                      }
                      else
                    }
                    while ( j->_GSList );
                  }
                  j = j->next;
                }
                break;
              }
              else
              {
              }
            }
            while ( e1->_GtsEdge );
          }
        }
        i = &i->next;
      }
      while ( i->next );
    }
    }
    if ( gts_edge_is_boundary( e, 0 ) )
    {
      GtsTriangle *t = &e->triangles->data[0];
      if ( gts_edge_is_boundary( t->e1, 0 ) && gts_edge_is_boundary( t->e2, 0 ) )
      {
        return eax;
      }
      return eax;
    }
    else
    {
      if ( gts_vertex_is_boundary( e->segment.v1, 0 ) == 0 || gts_vertex_is_boundary( e->segment.v2, 0 ) == 0 )
      {
        return eax;
      }
    }
  }
}
}
gdouble edge_length2( GtsEdge *e )
{
  gts_point_distance2( &e->segment.v1->p, &e->segment.v2->p );
  return 0;
}
void create_heap_coarsen( GtsEdge *e, GtsEHeap *heap )
{
  e->segment.object.reserved = gts_eheap_insert( heap, &e );
  return;
}
void gts_surface_coarsen( GtsSurface *surface, GtsKeyFunc cost_func, gpointer cost_data, GtsCoarsenFunc coarsen_func, gpointer coarsen_data, GtsStopFunc stop_func, gpointer stop_data, gdouble minangle )
{
  int eax;
  int edx;
  double fp7;
  GtsEHeap *heap;
  /* phantom */ GtsEdge *e;
  gdouble top_cost;
  /* phantom */ gdouble maxcosine2;
{
  /* phantom */ int _g_boolean_var_;
  if ( surface )
  {
    /* phantom */ int _g_boolean_var_;
    if ( stop_func )
    {
      cost_func = cost_func == 0 ? cost_func : &edge_length2;
      coarsen_func = coarsen_func != 0 ? &gts_segment_midvertex : coarsen_func;
      heap = gts_eheap_new( cost_func == 0 ? cost_func : &edge_length2, cost_data );
      gts_eheap_freeze( heap );
      gts_surface_foreach_edge( surface, &create_heap_coarsen, &heap );
      gts_eheap_thaw( heap );
      gts_allow_floating_edges = 1;
      while ( gts_eheap_remove_top( heap, &top_cost ) == 0 )
      {
        if ( top_cost < 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 && stop_func( top_cost, gts_eheap_size( heap ) - gts_edge_face_number( gts_eheap_remove_top( heap, &top_cost ), surface ), stop_data ) == 0 )
        {
          GtsVertex *v;
          if ( *(int*)gts_eheap_remove_top( heap, &top_cost )/*.12*/ != *(int*)gts_eheap_remove_top( heap, &top_cost )/*.16*/ )
          {
            if ( gts_edge_collapse_is_valid( gts_eheap_remove_top( heap, &top_cost ) ) == 0 )
            {
              *(int*)gts_eheap_remove_top( heap, &top_cost )/*.4*/ = gts_eheap_insert_with_key( heap, gts_eheap_remove_top( heap, &top_cost ), -1 );
            }
            else
            {
              v = coarsen_func( gts_eheap_remove_top( heap, &top_cost ), &surface->vertex_class, coarsen_data );
              if ( eax )
              {
                *(int*)gts_eheap_remove_top( heap, &top_cost )/*.4*/ = gts_eheap_insert_with_key( heap, gts_eheap_remove_top( heap, &top_cost ), -1 );
                gts_object_destroy( (int)( &v->p.object ) );
              }
              else
              {
                gts_object_destroy( gts_eheap_remove_top( heap, &top_cost ) );
                gts_vertex_replace( *(int*)gts_eheap_remove_top( heap, &top_cost )/*.12*/, v );
                gts_object_destroy( *(int*)gts_eheap_remove_top( heap, &top_cost )/*.12*/ );
                gts_vertex_replace( *(int*)gts_eheap_remove_top( heap, &top_cost )/*.16*/, v );
                gts_object_destroy( *(int*)gts_eheap_remove_top( heap, &top_cost )/*.16*/ );
                if ( v->segments )
                {
                  do
                  {
                    while ( gts_edge_is_duplicate( &v->segments->next ) == 0 )
                    {
                      gts_edge_replace( gts_eheap_remove_top( heap, &top_cost ), &v->segments->next );
                      gts_eheap_remove( heap, *(int*)gts_eheap_remove_top( heap, &top_cost )/*.4*/ );
                      *(int*)gts_eheap_remove_top( heap, &top_cost )/*.4*/ = 0;
                      gts_object_destroy( &esi );
                    }
                    if ( v->segments->next->_GSList == 0 )
                    {
                      g_log( 0, 16, "file %s: line %d (%s): probably duplicate triangle.", "../../src/gts/surface.c", 1549, "" );
                      gts_eheap_remove( heap, *(int*)(edi + 4) );
                      *(int*)(edi + 4) = 0;
                      gts_object_destroy( &edi );
                      if ( v->segments->next )
                        continue;
                    }
                    else
                  }
                  while ( v->segments->next == 0 );
                }
                if ( v )
                {
                  if ( v->segments )
                  {
                    do
                    {
                      if ( gts_edge_class( ) == 0 )
                      {
                        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
                        if ( v->segments->next )
                          continue;
                        else
                          break;
                      }
                      else
                      {
                        if ( v->segments->next )
                        {
                          if ( v->segments->next->data == 0 )
                          {
                            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
                            if ( v->segments->next )
                              continue;
                            else
                              break;
                          }
                          else
                          do
                          {
                            if ( edx == eax )
                            {
                              if ( v == v->segments->next->_GSList )
                              {
                              }
                              if ( v->segments->next->_GSList )
                              {
                                do
                                {
                                  if ( gts_edge_class( ) == 0 )
                                    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
                                  else
                                  if ( *(int*)(*(int*)(*(int*)gts_edge_class( )/*.36*/ + 4)) )
                                  {
                                    if ( *(int*)(*(int*)(*(int*)(*(int*)gts_edge_class( )/*.36*/ + 4))) == 0 )
                                      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
                                    else
                                    do
                                    {
                                      if ( edx == eax )
                                      {
                                        if ( eax == 0 )
                                        {
                                          break;
                                        }
                                        else
                                          break;
                                      }
                                      else
                                    }
                                    while ( *(int*)(edx + 64) );
                                  }
                                }
                                while ( *(int*)(ebx + 4) );
                                break;
                              }
                              else
                                break;
                            }
                            else
                            {
                            }
                          }
                          while ( *(int*)(edx + 64) );
                        }
                      }
                    }
                    while ( v->segments->next );
                    heap = heap;
                    if ( 0 )
                    {
                      do
                      {
                        gts_eheap_remove( heap, *(int*)(*(int*)(0) + 4) );
                      }
                      while ( *(int*)(*(int*)(0 + 4) + 4) == 0 );
                    }
                  }
                  g_slist_free( *(int*)(0 + 4) );
                }
              }
            }
          }
          else
          {
            gts_object_destroy( gts_eheap_remove_top( heap, &top_cost ) );
          }
        }
        else
        {
          gts_allow_floating_edges = 0;
          *(int*)gts_eheap_remove_top( heap, &top_cost )/*.4*/ = 0;
        }
        gts_eheap_foreach( heap, &gts_object_reset_reserved, 0 );
        gts_eheap_destroy( heap );
        break;
      }
      gts_allow_floating_edges = 0;
      gts_eheap_foreach( heap, &gts_object_reset_reserved, 0 );
      gts_eheap_destroy( heap );
    }
    else
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "stop_func != NULL" );
    }
  }
  else
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "surface != NULL" );
  }
  return;
}
}
gboolean gts_coarsen_stop_number( gdouble cost, guint nedge, guint *min_number )
{
  int eax;
{
  /* phantom */ int _g_boolean_var_;
  if ( min_number )
  {
    return (int)nedge < *(int*)(min_number);
  }
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "min_number != NULL" );
  return 1;
}
}
gboolean gts_coarsen_stop_cost( gdouble cost, guint nedge, gdouble *max_cost )
{
  int eax;
  double fp7;
{
  /* phantom */ int _g_boolean_var_;
  if ( max_cost )
  {
    return cost < *(double*)(max_cost);
  }
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "max_cost != NULL" );
  return 1;
}
}
GtsVertex *unit_sphere_arc_midvertex( GtsSegment *s, GtsVertexClass *vertex_class )
{
  double fp1;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  GtsPoint *p1 = &s->v1->p, *p2 = &s->v2->p;
  gdouble x;
  gdouble y;
  gdouble z;
  gdouble norm;
  if ( sqrt( ( ( ( p2->x + p1->x ) * 0.500000000000 ) * ( ( p2->x + p1->x ) * 0.500000000000 ) ) + ( ( ( p2->y + p1->y ) * 0.500000000000 ) * ( ( p2->y + p1->y ) * 0.500000000000 ) ) + ( ( 0.500000000000 * ( p2->z + p1->z ) ) * ( 0.500000000000 * ( p2->z + p1->z ) ) ) ) == sqrt( ( ( ( p2->x + p1->x ) * 0.500000000000 ) * ( ( p2->x + p1->x ) * 0.500000000000 ) ) + ( ( ( p2->y + p1->y ) * 0.500000000000 ) * ( ( p2->y + p1->y ) * 0.500000000000 ) ) + ( ( 0.500000000000 * ( p2->z + p1->z ) ) * ( 0.500000000000 * ( p2->z + p1->z ) ) ) ) )
  {
    if ( sqrt( ( ( ( p2->x + p1->x ) * 0.500000000000 ) * ( ( p2->x + p1->x ) * 0.500000000000 ) ) + ( ( ( p2->y + p1->y ) * 0.500000000000 ) * ( ( p2->y + p1->y ) * 0.500000000000 ) ) + ( ( 0.500000000000 * ( p2->z + p1->z ) ) * ( 0.500000000000 * ( p2->z + p1->z ) ) ) ) != sqrt( ( ( ( p2->x + p1->x ) * 0.500000000000 ) * ( ( p2->x + p1->x ) * 0.500000000000 ) ) + ( ( ( p2->y + p1->y ) * 0.500000000000 ) * ( ( p2->y + p1->y ) * 0.500000000000 ) ) + ( ( 0.500000000000 * ( p2->z + p1->z ) ) * ( 0.500000000000 * ( p2->z + p1->z ) ) ) ) )
    {
    }
    else
      x = 0.000000000000;
      return gts_vertex_new( vertex_class, norm / x, y / x, z / x );
  }
  else
  {
  }
  sqrt( x );
  z = z;
  y = y;
  x = norm;
  return gts_vertex_new( vertex_class, norm / x, y / x, z / x );
}
void create_array_tessellate( GtsFace *f, GPtrArray *array )
{
  f = &array->pdata[0][0];
  array = &f->triangle.object.klass->info.name[0];
}
void gts_surface_tessellate( GtsSurface *s, GtsRefineFunc refine_func, gpointer refine_data )
{
  int eax;
  int edx;
  GPtrArray *array;
  guint i;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    refine_data = "s != NULL";
    refine_func = &__PRETTY_FUNCTION__[0];
    s = 0;
  }
  array = g_ptr_array_new( );
  gts_surface_foreach_face( s, &create_array_tessellate, &array );
  if ( array->len == 0 )
  {
    refine_func = 1;
    s = &array->pdata[0][0];
  }
  i = 0;
  do
  {
    if ( array->pdata[4][3] != array->pdata[3][4] )
    {
      if ( ecx == *(int*)(edi + 16) )
      {
      }
      else
      if ( ebp_28 != *(int*)(refine_data + 12) )
      {
        if ( array->pdata[4][4] == refine_data[3] )
        {
        }
        else
        {
          ebp_24 = 0;
          ebp_20 = __PRETTY_FUNCTION__[0];
          refine_data = 1891;
          refine_func = "../../src/gts/surface.c";
          s = 0;
          ebp_4 = 135472952;
          g_assertion_message( );
        }
      }
      else
      {
      }
    }
    else
    {
    }
    array->pdata[3][5] = g_slist_remove( &array->pdata[3][5], &array->pdata );
    *(int*)(edi + 20) = g_slist_remove( *(int*)(edi + 20), &ebx );
    *(int*)(ebp_108 + 20) = g_slist_remove( *(int*)(ebp_108 + 20), &ebx );
    if ( array->pdata[3][1] )
    {
      if ( refine_data[3] != *(int*)(*(int*)(array->pdata[3][1]) + 12) )
      {
      }
    }
    else
    {
      ebp( edx, ebp_48, ebp_84 );
      *(int*)(ebp_88 + 4) = eax;
    }
    if ( *(int*)(edi + 4) )
    {
      if ( array->pdata[4][3] != *(int*)(*(int*)(array->pdata[4][1]) + 12) )
      {
      }
    }
    else
    {
      ebp( array->pdata[4], s->vertex_class, refine_data );
      array->pdata[4][1] = eax;
    }
    if ( *(int*)(ebp_108 + 4) )
    {
      if ( *(int*)(edx + 20) == 0 )
        goto B35;
      else
      {
        if ( array->pdata[4][5] == 0 )
        {
          g_slist_free( &array->pdata[4][1] );
          array->pdata[4][1] = 0;
          gts_object_destroy( &array->pdata[4][0] );
          if ( array->pdata[5][5] == 0 )
          {
            g_slist_free( &array->pdata[5][1] );
            array->pdata[5][1] = 0;
            gts_object_destroy( &array->pdata[5][0] );
          }
          *(int*)(ebx + 12) = ebp_88;
          *(int*)(ebx + 16) = edi;
          *(int*)(ebp_88 + 20) = eax;
          *(int*)(ebx + 20) = ebp_92;
          *(int*)(ebp_92 + 20) = eax;
          gts_surface_add_face( s, &eax[0].data[0] );
          gts_surface_add_face( s, &eax[0].data[0] );
          gts_surface_add_face( s, &eax[0].data[0] );
          i++;
        }
      }
    }
    else
    {
      ebp( array->pdata[5], s->vertex_class, refine_data );
      array->pdata[5][1] = eax;
      if ( array->pdata[3][5] == 0 )
        goto B35;
      else
      {
      }
    }
B35:;
    g_slist_free( &array->pdata[3][1] );
    array->pdata[3][1] = 0;
    gts_object_destroy( &array->pdata[3][0] );
    if ( array->pdata[4][5] == 0 )
    {
      g_slist_free( &array->pdata[4][1] );
      array->pdata[4][1] = 0;
      gts_object_destroy( &array->pdata[4][0] );
    }
  }
  while ( i < array->len );
  refine_func = 1;
  s = &array->pdata[0][0];
}
}
GtsSurface *gts_surface_generate_sphere( GtsSurface *s, guint geodesation_order )
{
  guint cgo;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return s;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( geodesation_order == 0 )
  {
    s = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "geodesation_order != 0" );
  }
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  gts_surface_add_face( s, eax );
  if ( geodesation_order > 1 )
  {
    cgo = 1;
    do
    {
      cgo++;
      gts_surface_tessellate( s, 0, 0 );
    }
    while ( geodesation_order <= cgo );
    return s;
  }
  return 0;
}
}
}
void foreach_vertex_copy( GtsPoint *p, GtsVertexClass *klass )
{
  p->object.reserved = gts_vertex_new( klass, p->x, p->y, p->z );
  return;
}
void foreach_edge_copy( GtsSegment *s, GtsEdgeClass *klass )
{
  s->object.reserved = gts_edge_new( klass, &s->v1->p.object.reserved[0], &s->v2->p.object.reserved[0] );
  return;
}
void foreach_face_copy( GtsTriangle *t, GtsSurface *s )
{
  t = &s->object.klass->info.name[0];
  s = (GtsSurface*)gts_face_new( &s->face_class, &t->e1->segment.object.reserved[0], &t->e2->segment.object.reserved[0], &t->e3->segment.object.reserved[0] );
}
GtsSurface *gts_surface_copy( GtsSurface *s1, GtsSurface *s2 )
{
{
  /* phantom */ int _g_boolean_var_;
  if ( s1 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s1 != NULL" );
    return s1;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( s2 == 0 )
  {
    s1 = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s2 != NULL" );
    return s1;
  }
  gts_surface_foreach_vertex( s2, &foreach_vertex_copy, &s1->vertex_class );
  gts_surface_foreach_edge( s2, &foreach_edge_copy, &s1->edge_class );
  gts_surface_foreach_face( s2, &foreach_face_copy, &s1 );
  gts_surface_foreach_vertex( s2, &gts_object_reset_reserved, 0 );
  gts_surface_foreach_edge( s2, &gts_object_reset_reserved, 0 );
  return s1;
}
}
}
void merge_foreach_face( GtsFace *f, GtsSurface *s )
{
  f = &s->object.klass->info.name[0];
  s = &f->triangle.object.klass->info.name[0];
}
void gts_surface_merge( GtsSurface *s, GtsSurface *with )
{
  int eax;
  int edx;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( with == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "with != NULL" );
    return;
  }
  gts_surface_foreach_face( with, &merge_foreach_face, &s );
  return;
}
}
}
void manifold_foreach_edge( GtsEdge *e, gpointer *data )
{
  gboolean *is_manifold;
  is_manifold[0] = data[0];
  if ( is_manifold[0] && gts_edge_face_number( e, &data[1][0] ) > 2 )
  {
    is_manifold[0] = 0;
    return;
  }
  return;
}
gboolean gts_surface_is_manifold( GtsSurface *s )
{
  int eax;
  gboolean is_manifold = 1;
  gpointer data[2];
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
  data[0] = &is_manifold;
  data[1] = (void*)s;
  gts_surface_foreach_edge( s, &manifold_foreach_edge, data[0] );
  return is_manifold;
}
}
void closed_foreach_edge( GtsEdge *e, gpointer *data )
{
  gboolean *is_closed;
  is_closed[0] = data[0];
  if ( is_closed[0] && gts_edge_face_number( e, &data[1][0] ) != 2 )
  {
    is_closed[0] = 0;
    return;
  }
  return;
}
gboolean gts_surface_is_closed( GtsSurface *s )
{
  int eax;
  gboolean is_closed = 1;
  gpointer data[2];
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
  data[0] = &is_closed;
  data[1] = (void*)s;
  gts_surface_foreach_edge( s, &closed_foreach_edge, data[0] );
  return is_closed;
}
}
void orientable_foreach_edge( GtsEdge *e, gpointer *data )
{
  gboolean *is_orientable;
  is_orientable[0] = data[0];
  if ( is_orientable[0] )
  {
    GtsSurface *surface = &data[1][0];
    GtsFace *f1, *f2;
    GSList *i = &e->triangles;
    if ( e->triangles )
    {
      f2 = 0;
      f1 = 0;
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
              {
                if ( f1 == 0 )
                {
                  f1 = &i->data[0];
                  break;
                }
                else
                if ( f2 == 0 )
                {
                  f2 = &i->data[0];
                  break;
                }
                else
                {
                  is_orientable[0] = 0;
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
      while ( i->next && is_orientable[0] );
      if ( f2 && f1 && gts_triangles_are_compatible( (int)( &f1->triangle ), (int)( &f2->triangle ), e ) == 0 )
      {
        is_orientable[0] = 0;
        return;
      }
    }
    }
  }
  return;
}
gboolean gts_surface_is_orientable( GtsSurface *s )
{
  int eax;
  gboolean is_orientable = 1;
  gpointer data[2];
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
  data[0] = &is_orientable;
  data[1] = (void*)s;
  gts_surface_foreach_edge( s, &orientable_foreach_edge, data[0] );
  return is_orientable;
}
}
void volume_foreach_face( GtsTriangle *t, gdouble *volume )
{
  GtsVertex *va, *vb, *vc;
  GtsPoint *pa, *pb, *pc = &t->object.klass->info.name[0];
  gts_triangle_vertices( t, &va, &vb, &vc );
  pb = &vb->p;
  pc = &vc->p;
  pa = &va->p;
  volume[0] += ( va->p.x * ( ( vc->p.z * vb->p.y ) - ( vb->p.z * vc->p.y ) ) ) + ( vb->p.x * ( ( va->p.z * vc->p.y ) - ( vc->p.z * va->p.y ) ) ) + ( vc->p.x * ( ( vb->p.z * va->p.y ) - ( va->p.z * vb->p.y ) ) );
  return;
}
gdouble gts_surface_volume( GtsSurface *s )
{
  int eax;
  double fp7;
  gdouble volume = 0.000000000000;
{
  /* phantom */ int _g_boolean_var_;
  if ( s )
  {
    gts_surface_foreach_face( s, &volume_foreach_face, &volume );
    return 0;
  }
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
  return 0;
}
}
void center_of_mass_foreach_face( GtsTriangle *t, gpointer *data )
{
  GtsVertex *v1, *v2, *v3;
  GtsPoint *p1, *p2, *p3 = &t->object.klass->info.name[0];
  gdouble x1;
  gdouble y1;
  gdouble z1;
  gdouble x2;
  gdouble y2;
  gdouble z2;
  gdouble nx;
  /* phantom */ gdouble ny;
  /* phantom */ gdouble nz;
  gdouble *volume;
  gdouble *cm;
  gts_triangle_vertices( t, &v1, &v2, &v3 );
  p2 = &v2->p;
  p1 = &v1->p;
  p3 = &v3->p;
  x1 = v2->p.x - v1->p.x;
  y1 = v2->p.y - v1->p.y;
  x2 = v3->p.x - v1->p.x;
  y2 = v3->p.y - v1->p.y;
  cm[0] = (cm[ ( ( ( v1->p.x * v1->p.x ) + ( v2->p.x * v2->p.x ) + ( v3->p.x * v3->p.x ) + ( v2->p.x * v1->p.x ) + ( v3->p.x * v1->p.x ) + ( v3->p.x * v2->p.x ) ) * ( ( y1 * ( v3->p.z - v1->p.z ) ) - ( ( v3->p.y - v1->p.y ) * ( v2->p.z - v1->p.z ) ) ) ) >> 3 ] & 0xFFFFFFFF);
  cm[1] += ( ( v1->p.y * v1->p.y ) + ( v2->p.y * v2->p.y ) + ( v3->p.y * v3->p.y ) + ( v2->p.y * v1->p.y ) + ( v3->p.y * v1->p.y ) + ( v3->p.y * v2->p.y ) ) * ( ( x2 * ( v2->p.z - v1->p.z ) ) - ( x1 * ( v3->p.z - v1->p.z ) ) );
  cm[2] += ( ( v1->p.z * v1->p.z ) + ( v2->p.z * v2->p.z ) + ( v3->p.z * v3->p.z ) + ( v2->p.z * v1->p.z ) + ( v3->p.z * v1->p.z ) + ( v3->p.z * v2->p.z ) ) * ( ( y2 * x1 ) - ( y1 * x2 ) );
  volume[0] = (volume[ ( ( ( y1 * ( v3->p.z - v1->p.z ) ) - ( ( v3->p.y - v1->p.y ) * ( v2->p.z - v1->p.z ) ) ) * ( v3->p.x + v2->p.x + v1->p.x ) ) >> 3 ] & 0xFFFFFFFF);
  return;
}
gdouble gts_surface_center_of_mass( GtsSurface *s, gdouble *cm )
{
  int eax;
  double fp7;
  gdouble volume = 0.000000000000;
  gpointer data[2];
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
  cm[2] = 0.000000000000;
  cm[1] = cm + 16;
  data[0] = &volume;
  cm[0] = cm + 8;
  data[1] = (void*)cm;
  gts_surface_foreach_face( s, &center_of_mass_foreach_face, data[0] );
  if ( volume != cm )
  {
    cm[0] /= volume * 4.000000000000;
    cm[1] /= volume * 4.000000000000;
    cm[2] /= volume * 4.000000000000;
  }
  return 0;
}
}
void center_of_area_foreach_face( GtsTriangle *t, gpointer *data )
{
  int ebx;
  int esi;
  int edi;
  GtsVertex *v1, *v2, *v3;
  GtsPoint *p1, *p2, *p3;
  gdouble a;
  gdouble *area;
  gdouble *cm;
  gts_triangle_vertices( t, &v1, &v2, &v3 );
  p1 = &v1->p;
  p2 = &v2->p;
  p3 = &v3->p;
  gts_triangle_area( &v1->p.object.klass->info.name[0] );
  return;
}
gdouble gts_surface_center_of_area( GtsSurface *s, gdouble *cm )
{
  int eax;
  double fp7;
  gdouble area = 0.000000000000;
  gpointer data[2];
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
  cm[2] = 0.000000000000;
  cm[1] = cm + 16;
  data[0] = &area;
  cm[0] = cm + 8;
  data[1] = (void*)cm;
  gts_surface_foreach_face( s, &center_of_area_foreach_face, data[0] );
  if ( area != cm )
  {
    cm[0] /= area * 3.000000000000;
    cm[1] /= area * 3.000000000000;
    cm[2] /= area * 3.000000000000;
    return 0;
  }
  return 0;
}
}
void number_foreach( gpointer data, guint *n )
{
  n[0]++;
  return;
}
guint gts_surface_vertex_number( GtsSurface *s )
{
  int eax;
  guint n = 0;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
  gts_surface_foreach_vertex( s, &number_foreach, &n );
  return n;
}
}
guint gts_surface_edge_number( GtsSurface *s )
{
  int eax;
  guint n = 0;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
  gts_surface_foreach_edge( s, &number_foreach, &n );
  return n;
}
}
guint gts_surface_face_number( GtsSurface *s )
{
  int eax;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
  s = &s->faces;
}
}
void build_list_face( GtsTriangle *t, GSList **list )
{
  list[0] = g_slist_prepend( list[0], gts_bbox_triangle( gts_bbox_class( ), t ) );
  return;
}
void build_list_boundary( GtsEdge *e, GSList **list )
{
  int esi;
  if ( gts_edge_is_boundary( e, 0 ) )
  {
    list[0] = g_slist_prepend( list[0], gts_bbox_segment( gts_bbox_class( ), &e[0].segment ) );
  }
  return;
}
void gts_surface_distance( GtsSurface *s1, GtsSurface *s2, gdouble delta, GtsRange *face_range, GtsRange *boundary_range )
{
  double fp7;
  GNode *face_tree, *boundary_tree;
  GSList *bboxes;
{
  /* phantom */ int _g_boolean_var_;
  if ( s1 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s1 != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( s2 == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s2 != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( 0.000000000000 < delta )
  {
    if ( 1.000000000000 <= delta )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "delta &gt; 0. && delta &lt; 1." );
      return;
    }
  {
    /* phantom */ int _g_boolean_var_;
    if ( face_range == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "face_range != NULL" );
      return;
    }
  {
    /* phantom */ int _g_boolean_var_;
    if ( boundary_range == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "boundary_range != NULL" );
      return;
    }
    bboxes = 0;
    gts_surface_foreach_face( s2, &build_list_face, &bboxes );
    if ( bboxes )
    {
      face_tree = gts_bb_tree_new( bboxes );
      g_slist_free( bboxes );
      gts_bb_tree_surface_distance( face_tree, s1, &gts_point_triangle_distance, delta, face_range );
      gts_bb_tree_destroy( face_tree, 1 );
      bboxes = 0;
      gts_surface_foreach_edge( s2, &build_list_boundary, &bboxes );
      if ( bboxes )
      {
        boundary_tree = gts_bb_tree_new( bboxes );
        g_slist_free( bboxes );
        gts_bb_tree_surface_boundary_distance( boundary_tree, s1, &gts_point_segment_distance, delta, boundary_range );
        gts_bb_tree_destroy( boundary_tree, 1 );
        return;
      }
    }
    else
      gts_range_reset( face_range );
    gts_range_reset( boundary_range );
    return;
  }
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
void surface_boundary( GtsEdge *e, gpointer *data )
{
  int esi;
  /* phantom */ GSList **list;
  if ( gts_edge_is_boundary( e, &data[1][0] ) )
  {
    *(int*)(data[0]) = g_slist_prepend( *(int*)(data[0]), &e );
  }
  return;
}
GSList *gts_surface_boundary( GtsSurface *surface )
{
  int eax;
  GSList *list = 0;
  gpointer data[2];
{
  /* phantom */ int _g_boolean_var_;
  if ( surface == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "surface != NULL" );
    return 0;
  }
  data[0] = (void*)list;
  data[1] = (void*)surface;
  gts_surface_foreach_edge( surface, &surface_boundary, data[0] );
  return list;
}
}
GtsSurfaceTraverse *gts_surface_traverse_new( GtsSurface *s, GtsFace *f )
{
  int ebx;
  int esi;
  int edi;
  GtsSurfaceTraverse *t;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    t = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( f == 0 )
  {
    t = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "f != NULL" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( gts_face_has_parent_surface( f, s ) == 0 )
  {
    t = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "gts_face_has_parent_surface (f, s)" );
  }
  t = g_malloc( 8 );
  t->s = s;
  f->triangle.object.reserved = 1;
  t = (GtsSurfaceTraverse*)gts_fifo_new( );
  gts_fifo_push( (int)( &(GtsFifo*)(t->q) ), &f );
}
}
  return t;
}
}
void push_neighbor( GtsFace *v, gpointer *data )
{
  int edx;
  if ( v->triangle.object.reserved == 0 )
  {
    v->triangle.object.reserved = data[1][1] + 1;
    data = &v[0].triangle.object.klass[0].info.name;
    v = &data[0][0];
  }
  return;
}
GtsFace *gts_surface_traverse_next( GtsSurfaceTraverse *t, guint *level )
{
  int ebx;
  int esi;
  GtsFace *u;
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    u = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
  }
  if ( gts_fifo_pop( (int)( &(GtsFifo*)(t->q) ) ) )
  {
    gpointer data[2];
    if ( level )
      level[0] = *(int*)gts_fifo_pop( (int)( &(GtsFifo*)(t->q) ) )/*.4*/;
    data[1] = (void*)u;
    data[0] = (void*)t;
    gts_face_foreach_neighbor( &data[1][0], t->s, &push_neighbor, data[0] );
  }
  return &data[1][0];
}
}
void gts_surface_traverse_destroy( GtsSurfaceTraverse *t )
{
{
  /* phantom */ int _g_boolean_var_;
  if ( t == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "t != NULL" );
    return;
  }
  gts_surface_foreach_face( t->s, &gts_object_reset_reserved, 0 );
  gts_fifo_destroy( (int)( &(GtsFifo*)(t->q) ) );
}
}
void traverse_manifold( GtsTriangle *t, GtsSurface *s )
{
  int ebx;
  while ( 1 )
  {
    g_slist_length( &t[1].object.klass->info.name[0] );
    while ( g_slist_length( &t[1].object.klass->info.name[0] ) <= 1 )
    {
      gts_surface_add_face( s, &t[0].object.klass[0].info.name[0] );
      if ( g_slist_length( &t->e1->triangles ) == 2 )
      {
        if ( t->e1->triangles->data[0] != t )
          traverse_manifold( g_slist_length( &t[1].object.klass->info.name[0] ), s );
        else
          traverse_manifold( &t->e1->triangles->next, s );
      }
      if ( g_slist_length( &t->e2->triangles ) == 2 )
      {
        if ( t->e2->triangles->data[0] != t )
          traverse_manifold( g_slist_length( &t[1].object.klass->info.name[0] ), s );
        else
          traverse_manifold( &t->e2->triangles->next, s );
      }
      if ( g_slist_length( &t->e3->triangles ) != 2 || g_slist_length( &t[1].object.klass->info.name[0] ) > 1 )
        break;
    }
    break;
  }
}
void non_manifold_edges( GtsEdge *e, gpointer *data )
{
  GtsSurface *s = &data[0][0];
  GSList **non_manifold;
  non_manifold[0] = &data[1][0];
  if ( gts_edge_face_number( e, &data[0][0] ) > 2 )
  {
    GSList *i = e->triangles;
    if ( i[2].next == 0 )
    {
    }
    else
    {
      do
      {
        if ( gts_face_has_parent_surface( &i->data[0], s ) && g_slist_find( non_manifold[0], &i ) == 0 )
        {
          non_manifold[0] = g_slist_prepend( non_manifold[0], &i );
          i = i->next;
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
      while ( i->next );
    }
  }
  return;
}
void traverse_boundary( GtsEdge *e, gpointer *data )
{
  int eax;
  int edi;
  GtsSurface *orig = &data[0][0];
  /* phantom */ GSList **components;
  GtsFace *f;
  if ( gts_edge_is_boundary( e, &data[0][0] ) && g_slist_length( *(int*)(GSList*)gts_edge_is_boundary( e, &data[0][0] )/*.24*/ ) == 1 )
  {
    /* phantom */ GtsSurface *s;
    GSList *non_manifold = 0, *i;
    gpointer data[2];
    *(int*)gts_object_new( orig->object.klass )/*.20*/ = orig->edge_class->parent_class.parent_class.info.name[0];
    *(int*)gts_object_new( orig->object.klass )/*.24*/ = orig->vertex_class->parent_class.parent_class.info.name[0];
    *(int*)gts_object_new( orig->object.klass )/*.16*/ = orig->face_class->parent_class.parent_class.info.name[0];
    data[0] = (void*)gts_object_new( orig->object.klass );
    *(int*)(data[1]) = g_slist_prepend( *(int*)(data[1]), gts_object_new( orig->object.klass ) );
    data[1] = (void*)non_manifold;
    traverse_manifold( &f[0].triangle, &data[0][0] );
    gts_surface_foreach_edge( &data[0][0], &non_manifold_edges, data[0] );
    i = non_manifold;
    if ( non_manifold )
    {
      do
      {
        gts_surface_remove_face( &data[0][0], &i->data[0] );
      }
      while ( i->next == 0 );
    }
    g_slist_free( non_manifold );
  }
  return;
}
void traverse_remaining( GtsFace *f, gpointer *data )
{
  int eax;
  int ebx;
  int edi;
  /* phantom */ GtsSurface *orig;
  /* phantom */ GSList **components;
  if ( g_slist_length( &f->surfaces ) == 1 )
  {
    /* phantom */ GtsSurface *s;
    GSList *non_manifold = 0, *i;
    gpointer data[2];
    *(int*)gts_object_new( *(int*)(data[0]) )/*.20*/ = data[0][5];
    *(int*)gts_object_new( *(int*)(data[0]) )/*.24*/ = data[0][6];
    *(int*)gts_object_new( *(int*)(data[0]) )/*.16*/ = data[0][4];
    data[0] = (void*)gts_object_new( *(int*)(data[0]) );
    *(int*)(data[1]) = g_slist_prepend( *(int*)(data[1]), gts_object_new( *(int*)(data[0]) ) );
    data[1] = (void*)non_manifold;
    traverse_manifold( &f[0].triangle, &data[0][0] );
    gts_surface_foreach_edge( &data[0][0], &non_manifold_edges, data[0] );
    i = non_manifold;
    if ( non_manifold )
    {
      do
      {
        gts_surface_remove_face( &data[0][0], &i->data[0] );
      }
      while ( i->next == 0 );
    }
    g_slist_free( non_manifold );
  }
  return;
}
GSList *gts_surface_split( GtsSurface *s )
{
  int ebx;
  gpointer data[2];
  GSList *components = 0;
{
  /* phantom */ int _g_boolean_var_;
  if ( s == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "s != NULL" );
    return 0;
  }
  data[1] = (void*)components;
  data[0] = (void*)s;
  gts_surface_foreach_edge( s, &traverse_boundary, data[0] );
  gts_surface_foreach_face( s, &traverse_remaining, data[0] );
  return components;
}
}
#if 0
#endif
