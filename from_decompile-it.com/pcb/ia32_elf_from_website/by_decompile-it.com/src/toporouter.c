#include "toporouter.c.h"
static HID_Action toporouter_action_list[2] = { { "Escape", "Select a set of pads", &escape, "Pad escape", "Escape()" }
, { "Toporouter", "Select net(s)", &toporouter, "Topological autorouter", "Toporouter()" }
 };
void toporouter_edge_init( toporouter_edge_t *edge )
{
  edge->routing = 0;
  edge->flags = 0;
  return;
}
toporouter_edge_class_t *toporouter_edge_class( void )
{
  int eax;
  static toporouter_edge_class_t *class;
  if ( class == 0 )
  {
    GtsObjectClassInfo constraint_info = { };
    constraint_info.name[0] = 't';
    *(int*)&constraint_info.name[4] = 0x74756f72;
    *(int*)&constraint_info.name[8] = 0x655f7265;
    *(int*)&constraint_info.name[12] = 0x5f656764;
    *(int*)&constraint_info.name[16] = 116;
    constraint_info.object_size = 32;
    constraint_info.class_size = 92;
    constraint_info.object_init_func = &toporouter_edge_init;
    class = gts_object_class_new( (GtsObjectClass*)gts_edge_class( ), &constraint_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return class;
}
void toporouter_bbox_init( toporouter_bbox_t *box )
{
  box->data = 0;
  box->type = 6;
  box->constraints = 0;
  box->cluster = 0;
  return;
}
toporouter_bbox_class_t *toporouter_bbox_class( void )
{
  int eax;
  static toporouter_bbox_class_t *class;
  if ( class == 0 )
  {
    GtsObjectClassInfo constraint_info = { };
    constraint_info.name[0] = 't';
    *(int*)&constraint_info.name[4] = 0x74756f72;
    *(int*)&constraint_info.name[8] = 0x625f7265;
    *(int*)&constraint_info.name[12] = 0x5f786f62;
    *(int*)&constraint_info.name[16] = 116;
    constraint_info.object_size = 100;
    constraint_info.class_size = 92;
    constraint_info.object_init_func = &toporouter_bbox_init;
    class = gts_object_class_new( (GtsObjectClass*)gts_bbox_class( ), &constraint_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return class;
}
void toporouter_vertex_class_init( toporouter_vertex_class_t *klass )
{
  return;
}
void toporouter_vertex_init( toporouter_vertex_t *vertex )
{
  vertex->gcost = 0.000000000000;
  vertex->bbox = 0;
  vertex->parent = 0;
  vertex->child = 0;
  vertex->flags = 0;
  vertex->routingedge = 0;
  vertex->arc = 0;
  vertex->oproute = 0;
  vertex->route = 0;
  vertex->hcost = 0.000000000000;
  vertex->gn = 0;
  return;
}
toporouter_vertex_class_t *toporouter_vertex_class( void )
{
  int eax;
  static toporouter_vertex_class_t *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo constraint_info = { };
    constraint_info.name[0] = 't';
    *(int*)&constraint_info.name[4] = 0x74756f72;
    *(int*)&constraint_info.name[8] = 0x765f7265;
    *(int*)&constraint_info.name[12] = 0x65747265;
    *(int*)&constraint_info.name[16] = 0x745f78;
    constraint_info.object_size = 100;
    constraint_info.class_size = 100;
    constraint_info.class_init_func = &toporouter_vertex_class_init;
    constraint_info.object_init_func = &toporouter_vertex_init;
    klass = gts_object_class_new( (GtsObjectClass*)gts_vertex_class( ), &constraint_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
void toporouter_constraint_class_init( toporouter_constraint_class_t *klass )
{
  return;
}
void toporouter_constraint_init( toporouter_constraint_t *constraint )
{
  constraint->box = 0;
  constraint->routing = 0;
  return;
}
toporouter_constraint_class_t *toporouter_constraint_class( void )
{
  int eax;
  static toporouter_constraint_class_t *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo constraint_info = { };
    constraint_info.name[0] = 't';
    *(int*)&constraint_info.name[4] = 0x74756f72;
    *(int*)&constraint_info.name[8] = 0x635f7265;
    *(int*)&constraint_info.name[12] = 0x74736e6f;
    *(int*)&constraint_info.name[16] = 0x6e696172;
    *(int*)&constraint_info.name[20] = 0x745f74;
    constraint_info.object_size = 32;
    constraint_info.class_size = 92;
    constraint_info.class_init_func = &toporouter_constraint_class_init;
    constraint_info.object_init_func = &toporouter_constraint_init;
    klass = gts_object_class_new( (GtsObjectClass*)gts_constraint_class( ), &constraint_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
void toporouter_arc_init( toporouter_arc_t *arc )
{
  arc->x0 = -1.000000000000;
  arc->centre = 0;
  arc->y0 = -1.000000000000;
  arc->v = 0;
  arc->x1 = -1.000000000000;
  arc->v1 = 0;
  arc->y1 = -1.000000000000;
  arc->v2 = 0;
  arc->r = -1.000000000000;
  arc->dir = 31337;
  arc->clearance = 0;
  arc->oproute = 0;
  return;
}
toporouter_arc_class_t *toporouter_arc_class( void )
{
  int eax;
  static toporouter_arc_class_t *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo constraint_info = { };
    constraint_info.name[0] = 't';
    *(int*)&constraint_info.name[4] = 0x74756f72;
    *(int*)&constraint_info.name[8] = 0x615f7265;
    *(int*)&constraint_info.name[12] = 0x745f6372;
    constraint_info.object_size = 80;
    constraint_info.class_size = 96;
    constraint_info.object_init_func = &toporouter_arc_init;
    klass = gts_object_class_new( (GtsObjectClass*)gts_constraint_class( ), &constraint_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
drawing_context_t *toporouter_output_init( int w, int h, char *filename )
{
  /* phantom */ drawing_context_t *dc;
  *(int*)calloc( 1, 36 )/*.16*/ = filename[0];
  *(int*)calloc( 1, 36 )/*.20*/ = (double)( w );
  *(int*)calloc( 1, 36 )/*.28*/ = (double)( h );
  if ( PCB->MaxWidth <= PCB->MaxHeight )
  {
    *(double*)(calloc( 1, 36 )) = ( (double)( h ) - 20.000000000000 ) / (double)( PCB->MaxHeight );
    *(int*)calloc( 1, 36 )/*.20*/ = 20.000000000000 + ( ( ( (double)( h ) - 20.000000000000 ) / (double)( PCB->MaxHeight ) ) * (double)( PCB->MaxWidth ) );
    return (drawing_context_t*)calloc( 1, 36 );
  }
  *(double*)(calloc( 1, 36 )) = ( (double)( w ) - 20.000000000000 ) / (double)( PCB->MaxWidth );
  *(int*)calloc( 1, 36 )/*.28*/ = 20.000000000000 + ( ( ( (double)( w ) - 20.000000000000 ) / (double)( PCB->MaxWidth ) ) * (double)( PCB->MaxHeight ) );
  return (drawing_context_t*)calloc( 1, 36 );
}
gpointer gts_object_is_from_class( gpointer object, gpointer klass )
{
  if ( klass == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    return 0;
  }
  if ( object )
  {
    if ( *(int*)(object) == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
      return 0;
    }
    do
    {
      if ( klass == *(int*)(*(int*)(object) + 64) )
        break;
    }
    while ( *(int*)(*(int*)(*(int*)(object) + 64) + 64) );
    return 0;
  }
  return object;
}
void toporouter_output_close( drawing_context_t *dc )
{
  return;
}
gdouble lookup_keepaway( char *name )
{
  int esi;
  double fp7;
  if ( name )
  {
  {
    do
    {
      if ( strcmp( &PCB->RouteStyle[1].Name, name ) == 0 )
      {
        break;
      }
      n++;
      PCB->ID = PCB + 24;
    }
    while ( n + 1 != 4 );
  }
  }
  return 0;
}
gdouble lookup_thickness( char *name )
{
  int esi;
  double fp7;
  if ( name )
  {
  {
    do
    {
      if ( strcmp( &PCB->RouteStyle[1].Name, name ) == 0 )
      {
        break;
      }
      n++;
      PCB->ID = PCB + 24;
    }
    while ( n + 1 != 4 );
  }
  }
  return 0;
}
gint toporouter_draw_vertex( gpointer item, gpointer data )
{
  return -1;
}
gint toporouter_draw_edge( gpointer item, gpointer data )
{
  return -1;
}
toporouter_bbox_t *vertex_bbox( toporouter_vertex_t *v )
{
  int eax;
  return v ? v->bbox : 0;
}
char *vertex_netlist( toporouter_vertex_t *v )
{
  if ( v && v->bbox->b.x2 & 0xFFFFFFFF && v->bbox->cluster )
  {
    return &v->bbox->cluster->netlist->netlist;
  }
  return 0;
}
char *constraint_netlist( toporouter_constraint_t *c )
{
  toporouter_bbox_t *box = &c->box;
  if ( c->box && box->cluster[6] )
  {
    return &box->cluster->netlist->netlist;
  }
  return 0;
}
void print_bbox( toporouter_bbox_t *box )
{
  int eax;
  __printf_chk( 1, "[BBOX %x ", box );
  switch ( box->type )
  {
  case BOARD:
    __printf_chk( 1, "BOARD " );
    break;
  case LINE:
    __printf_chk( 1, "LINE " );
    break;
  case VIA:
    __printf_chk( 1, "VIA " );
    break;
  case PIN:
    __printf_chk( 1, "PIN " );
    break;
  case PAD:
    __printf_chk( 1, "PAD " );
    break;
  case POLYGON:
    __printf_chk( 1, "POLYGON " );
    if ( box->point )
      __printf_chk( 1, "P: %f,%f,%f ", box->point->x, box->point->y, box->point->z );
      __printf_chk( 1, "LAYER: %d ", box->layer );
      __printf_chk( 1, "CLUSTER: %d]\n", box->cluster->c );
      return;
    else
      __printf_chk( 1, "P: NONE " );
      __printf_chk( 1, "LAYER: %d ", box->layer );
      __printf_chk( 1, "CLUSTER: %d]\n", box->cluster->c );
      return;
    break;
  case ARC:
  case VIA_SHADOW:
  case OTHER:
  case EXPANSION_AREA:
    __printf_chk( 1, "UNKNOWN " );
    break;
  }
  if ( box->point )
    __printf_chk( 1, "P: %f,%f,%f ", box->point->x, box->point->y, box->point->z );
    __printf_chk( 1, "LAYER: %d ", box->layer );
    __printf_chk( 1, "CLUSTER: %d]\n", box->cluster->c );
    return;
  else
    __printf_chk( 1, "P: NONE " );
    __printf_chk( 1, "LAYER: %d ", box->layer );
    __printf_chk( 1, "CLUSTER: %d]\n", box->cluster->c );
    return;
}
void print_vertex( toporouter_vertex_t *v )
{
  int eax;
  int ecx;
  int edx;
  if ( v )
  {
    __printf_chk( 1, "[V %f,%f,%f ", v->v.p.x, v->v.p.y, v->v.p.z );
    if ( v->bbox && v->bbox->cluster )
      v->bbox->cluster->c = v->bbox->cluster->netlist->netlist;
    else
    {
    }
  }
  else
  {
    __printf_chk( 1, "[V (null) " );
  }
  __printf_chk( 1, "%s ", &eax );
  if ( v->route && v->route->netlist->clusters->pdata[0] )
    __printf_chk( 1, "%s ", (char*)v->route->dest );
  if ( v->routingedge )
  {
    guint n;
    /* phantom */ guint pos;
    if ( toporouter_constraint_class( ) )
    {
      if ( v->routingedge )
      {
        if ( v->routingedge->e.segment.object.klass->info.name[0] == 0 )
        {
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
        }
        else
        do
        {
        }
        while ( v->routingedge->_toporouter_edge_t != toporouter_constraint_class( ) && v->routingedge->_toporouter_edge_t );
      }
    }
    else
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    }
    n = g_list_length( &v->routingedge->routing );
    if ( toporouter_constraint_class( ) )
    {
      if ( v->routingedge )
      {
        if ( v->routingedge->e.segment.object.klass->info.name[0] == 0 )
        {
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
        }
        else
        do
        {
        }
        while ( v->routingedge->_toporouter_edge_t != toporouter_constraint_class( ) && v->routingedge->_toporouter_edge_t );
      }
    }
    else
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    }
    if ( toporouter_constraint_class( ) )
    {
      if ( v->routingedge )
      {
        if ( v->routingedge->e.segment.object.klass->info.name[0] == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
        else
        do
        {
          if ( v->routingedge->_toporouter_edge_t == toporouter_constraint_class( ) )
            __printf_chk( 1, "[CONST " );
            __printf_chk( 1, "%d/%d] ", g_list_index( &v->routingedge->routing, &v ), (int)n );
          else
        }
        while ( v->routingedge->_toporouter_edge_t );
      }
    }
    else
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    }
    __printf_chk( 1, "[EDGE " );
    __printf_chk( 1, "%d/%d] ", g_list_index( &v->routingedge->routing, &v ), (int)n );
  }
  if ( (_Bool)( ( v->flags >> 7 ) & 1 ) )
  {
    __printf_chk( 1, "TEMP " );
  }
  if ( ( ah & 1 ) & 255 )
  {
    __printf_chk( 1, "ROUTE " );
  }
  if ( ( ah & 8 ) & 255 )
  {
    __printf_chk( 1, "SPECCUT " );
  }
  if ( ( ah & 4 ) & 255 )
    __printf_chk( 1, "FAKE " );
  __printf_chk( 1, "]\n" );
  return;
}
gdouble vertex_net_thickness( toporouter_vertex_t *v )
{
  int eax;
  double fp7;
  toporouter_bbox_t *box;
  if ( v )
  {
    box = v->bbox;
    if ( v->bbox == 0 )
    {
      /* phantom */ LineType *line;
      if ( ( v->flags & 384 ) == 0 )
      {
      }
      else
      {
        do
        {
          v = v->parent;
          if ( v->parent == 0 )
          {
            break;
          }
        }
        while ( v->flags & 384 );
        box = v->bbox;
        if ( v->bbox == 0 )
        {
          return 0;
        }
      }
    }
    else
    {
      if ( box->type + -1 <= 1 )
      {
        PinType *pin = &box->data[0];
        if ( pin->Flags.f & 2304 )
        {
          return 0;
        }
      }
      else
      if ( box->type == PAD )
      {
        PadType *pad = &box->data[0];
        if ( pad->Point2.X != pad->Point1.X || pad->Point2.Y != pad->Point1.Y || ( ( pad->Flags.f/*.2_2of4*/ & 1 ) & 255 ) )
        {
          return 0;
        }
      }
      else
      if ( box->type == BOARD )
      {
        return 0;
      }
      if ( box->type == LINE )
      {
      }
      if ( box->type == POLYGON )
      {
        return 0;
      }
      __printf_chk( 1, "Unrecognized type in thickness lookup..\n" );
      return 0;
    }
    if ( box->cluster )
    {
      v = &box->cluster->netlist->style[0];
    }
  }
}
gdouble vertex_net_keepaway( toporouter_vertex_t *v )
{
  toporouter_bbox_t *box;
  if ( v )
  {
    box = v->bbox;
    if ( v->bbox == 0 )
    {
      if ( ( v->flags & 384 ) == 0 )
      {
        return 0;
      }
      do
      {
        v = v->parent;
        if ( v->parent == 0 )
          break;
      }
      while ( v->flags & 384 );
      box = v->bbox;
      if ( v->bbox == 0 )
      {
        return 0;
      }
    }
    if ( box->cluster )
    {
      v = &box->cluster->netlist->style[0];
    }
  }
  return 0;
}
void point_from_point_to_point( toporouter_vertex_t *a, toporouter_vertex_t *b, gdouble d, gdouble *x, gdouble *y )
{
  int esi;
  int edi;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble dx;
  gdouble dy;
  gdouble theta;
{
  /* phantom */ int _g_boolean_var_;
  dx = b->v.p.y - a->v.p.y;
  theta = b->v.p.x - a->v.p.x;
  dy = a->v.p.x;
  if ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 <= abs( dx ) )
  {
    x[0] = dy;
    y[0] = a->v.p.y;
    if ( theta <= 0.000000000000 )
    {
      dx = theta;
      if ( dx <= theta )
      {
        *(double*)(cos( atan( abs( ( b->v.p.y - a->v.p.y ) / ( b->v.p.x - a->v.p.x ) ) ) )) = (x[ ( d * cos( atan( abs( ( b->v.p.y - a->v.p.y ) / ( b->v.p.x - a->v.p.x ) ) ) ) ) >> 3 ] & 0xFFFFFFFF);
        x[0] = (x[ ( d * cos( atan( abs( ( b->v.p.y - a->v.p.y ) / ( b->v.p.x - a->v.p.x ) ) ) ) ) >> 3 ] & 0xFFFFFFFF);
        y[0] = (y[ ( ebp_48 * fp7 ) >> 3 ] & 0xFFFFFFFF);
        return;
      }
      else
      {
        x[0] = (x[ ( d * cos( atan( abs( ( b->v.p.y - a->v.p.y ) / ( b->v.p.x - a->v.p.x ) ) ) ) ) >> 3 ] & 0xFFFFFFFF);
        y[0] -= d * sin( atan( abs( ( b->v.p.y - a->v.p.y ) / ( b->v.p.x - a->v.p.x ) ) ) );
        return;
      }
    }
  }
  else
  {
    g_assertion_message_expr( 0, "../../src/toporouter.c", 736, __PRETTY_FUNCTION__, "finite(theta)" );
  }
  dx = theta;
  if ( dx <= theta )
  {
    *(double*)(cos( atan( abs( ( b->v.p.y - a->v.p.y ) / ( b->v.p.x - a->v.p.x ) ) ) )) = x[0] - ( d * cos( atan( abs( ( b->v.p.y - a->v.p.y ) / ( b->v.p.x - a->v.p.x ) ) ) ) );
    x[0] = (x[ ( d * cos( atan( abs( ( b->v.p.y - a->v.p.y ) / ( b->v.p.x - a->v.p.x ) ) ) ) ) >> 3 ] & 0xFFFFFFFF);
    y[0] = (y[ ( ebp_48 * fp7 ) >> 3 ] & 0xFFFFFFFF);
    return;
  }
  else
  {
    ;
    x[0] -= d * cos( atan( abs( ( b->v.p.y - a->v.p.y ) / ( b->v.p.x - a->v.p.x ) ) ) );
    y[0] -= d * sin( atan( abs( ( b->v.p.y - a->v.p.y ) / ( b->v.p.x - a->v.p.x ) ) ) );
    return;
  }
}
}
int point_wind( GtsPoint *a, GtsPoint *b, GtsPoint *c )
{
  int eax;
  double fp7;
  return ( -0.000099999997 <= fp7 ) + -1;
}
int sloppy_point_wind( GtsPoint *a, GtsPoint *b, GtsPoint *c )
{
  int eax;
  double fp7;
  gdouble rval;
  /* phantom */ gdouble dx1;
  /* phantom */ gdouble dx2;
  /* phantom */ gdouble dy1;
  /* phantom */ gdouble dy2;
  return ( -10.000000000000 <= fp7 ) + -1;
}
void coord_move_towards_coord_values( gdouble ax, gdouble ay, gdouble px, gdouble py, gdouble d, gdouble *x, gdouble *y )
{
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble dx = py - ay;
  gdouble dy = px - ax;
  gdouble theta = px;
  if ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 <= abs( atan( abs( ( py - ay ) / ( px - ax ) ) ) ) )
  {
    if ( dy <= 0.000000000000 )
    {
      dx = dy;
      if ( dy < dx )
      {
        x[0] = ax + ( d * cos( ax ) );
        y[0] = ebp_40 - ( ebp_48 * fp7 );
        return;
      }
      *(double*)(cos( atan( abs( ( py - ay ) / ( px - ax ) ) ) )) = ax + ( d * cos( atan( abs( ( py - ay ) / ( px - ax ) ) ) ) );
    }
    else
    {
      dx = dy;
      if ( dy < dx )
      {
        ;
        x[0] = ax - ( d * cos( atan( abs( ( py - ay ) / ( px - ax ) ) ) ) );
        y[0] = ay - ( d * sin( atan( abs( ( py - ay ) / ( px - ax ) ) ) ) );
        return;
      }
      *(double*)(cos( atan( abs( ( py - ay ) / ( px - ax ) ) ) )) = ax - ( d * cos( atan( abs( ( py - ay ) / ( px - ax ) ) ) ) );
    }
    x[0] = ax + ( d * cos( atan( abs( ( py - ay ) / ( px - ax ) ) ) ) );
    y[0] = ebp_40 + ( ebp_48 * fp7 );
    return;
  }
  else
  {
    __printf_chk( 1, "!finite(theta) a = %f,%f p = %f,%f d = %f\n", ax, ay, theta, py, d );
    g_assertion_message_expr( 0, "../../src/toporouter.c", 830, __PRETTY_FUNCTION__, "finite(theta)" );
  }
  x[0] = ax + ( d * cos( ax ) );
  y[0] = ebp_40 - ( ebp_48 * fp7 );
  return;
}
void vertex_move_towards_point_values( GtsVertex *v, gdouble px, gdouble py, gdouble d, gdouble *x, gdouble *y )
{
  int esi;
  int edi;
  double fp5;
  double fp6;
  double fp7;
  gdouble dx;
  gdouble dy;
  gdouble theta;
{
  /* phantom */ int _g_boolean_var_;
  dx = py - v->p.y;
  theta = px - v->p.x;
  if ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 <= abs( dx ) )
  {
    if ( theta <= 0.000000000000 )
    {
      dx = theta;
      if ( dx <= theta )
      {
        *(double*)(cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) )) = v->p.x + ( d * cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) ) );
        x[0] = v->p.x + ( d * cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) ) );
        y[0] = v->p.y + ( ebp_56 * fp7 );
        return;
      }
      else
      {
        x[0] = v->p.x + ( d * cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) ) );
        y[0] = v->p.y - ( d * sin( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) ) );
        return;
      }
    }
  }
  else
  {
    g_assertion_message_expr( 0, "../../src/toporouter.c", 864, __PRETTY_FUNCTION__, "finite(theta)" );
  }
  dx = theta;
  if ( dx <= theta )
  {
    *(double*)(cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) )) = v->p.x - ( d * cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) ) );
    x[0] = v->p.x + ( d * cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) ) );
    y[0] = v->p.y + ( ebp_56 * fp7 );
    return;
  }
  else
  {
    ;
    x[0] = v->p.x - ( d * cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) ) );
    y[0] = v->p.y - ( d * sin( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) ) );
    return;
  }
}
}
void vertex_move_towards_vertex_values( GtsVertex *v, GtsVertex *p, gdouble d, gdouble *x, gdouble *y )
{
  int esi;
  int edi;
  double fp5;
  double fp6;
  double fp7;
  gdouble dx;
  gdouble dy;
  gdouble theta;
{
  /* phantom */ int _g_boolean_var_;
  dx = p->p.y - v->p.y;
  theta = p->p.x - v->p.x;
  if ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 <= abs( dx ) )
  {
    if ( theta <= 0.000000000000 )
    {
      dx = theta;
      if ( dx <= theta )
      {
        *(double*)(cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) )) = v->p.x + ( d * cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) ) );
        x[0] = v->p.x + ( d * cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) ) );
        y[0] = v->p.y + ( ebp_56 * fp7 );
        return;
      }
      else
      {
        x[0] = v->p.x + ( d * cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) ) );
        y[0] = v->p.y - ( d * sin( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) ) );
        return;
      }
    }
  }
  else
  {
    g_assertion_message_expr( 0, "../../src/toporouter.c", 898, __PRETTY_FUNCTION__, "finite(theta)" );
  }
  dx = theta;
  if ( dx <= theta )
  {
    *(double*)(cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) )) = v->p.x - ( d * cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) ) );
    x[0] = v->p.x + ( d * cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) ) );
    y[0] = v->p.y + ( ebp_56 * fp7 );
    return;
  }
  else
  {
    ;
    x[0] = v->p.x - ( d * cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) ) );
    y[0] = v->p.y - ( d * sin( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) ) );
    return;
  }
}
}
void toporouter_draw_cluster( toporouter_t *r, drawing_context_t *dc, toporouter_cluster_t *cluster, gdouble red, gdouble green, gdouble blue, guint layer )
{
  return;
}
void toporouter_draw_surface( toporouter_t *r, GtsSurface *s, char *filename, int w, int h, int mode, GList *datas, int layer, GList *candidatepoints )
{
  return;
}
void toporouter_layer_free( toporouter_layer_t *l )
{
  g_list_free( &l->vertices );
  l = &l->constraints->data[0];
}
guint groupcount( void )
{
  int eax;
  if ( PCB->Data->LayerN > 0 )
  {
    do
    {
    }
    while ( PCB->Data->LayerN != 0 + 1 + 1 );
  }
  return ( 0 + 1 ) - ( ( *(int*)(PCB + ( 0 << 2 ) + 7380) < 1 ) & 1 );
}
void toporouter_free( toporouter_t *r )
{
  int eax;
  int edx;
  struct timeval endtime;
  int secs, usecs;
  int i = 0;
  while ( PCB->Data->LayerN > 0 )
  {
    do
    {
    }
    while ( PCB->Data->LayerN != 0 + 1 + 1 );
    if ( ( 0 + 1 ) - ( ( *(int*)(PCB + ( 0 << 2 ) + 7380) < 1 ) & 1 ) <= i )
      break;
    else
    {
      i++;
      toporouter_layer_free( r->layers + ( i << 4 ) );
    }
  }
  gettimeofday( &endtime.tv_sec, 0 );
  secs = endtime.tv_sec - r->starttime.tv_sec;
  usecs = ( endtime.tv_usec - r->starttime.tv_usec ) / 1000;
  Message( "Elapsed time: %d.%02d seconds\n", secs, usecs );
  free( r->layers );
  free( r );
  return;
}
int wind( toporouter_spoint_t *p1, toporouter_spoint_t *p2, toporouter_spoint_t *p3 )
{
  int eax;
  double fp7;
  return ( -0.000100000000 <= fp7 ) + -1;
}
int wind_double( gdouble p1_x, gdouble p1_y, gdouble p2_x, gdouble p2_y, gdouble p3_x, gdouble p3_y )
{
  int eax;
  double fp7;
  double rval, dx1, dx2, dy1, dy2;
  return ( -0.000100000000 <= fp7 ) + -1;
}
void vertices_on_line( toporouter_spoint_t *a, gdouble m, gdouble r, toporouter_spoint_t *b0, toporouter_spoint_t *b1 )
{
  int ebx;
  int esi;
  int edi;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble c;
  /* phantom */ gdouble temp;
  if ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 < m )
  {
  }
  else
  if ( m < -179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 )
  {
  }
  else
  {
    if ( sqrt( ( ( a->y - ( m * a ) ) * ( a->y - ( m * a ) ) ) / ( ( m * m ) + 1.000000000000 ) ) == sqrt( ( ( a->y - ( m * a ) ) * ( a->y - ( m * a ) ) ) / ( ( m * m ) + 1.000000000000 ) ) )
    {
      if ( 1 )
        c = 0.000000000000;
        b0 = c + a;
        b1 = a - c;
        b0->y = ( a->y - ( m * a ) ) + ( m * b0 );
        b1->y = ( a->y - ( m * a ) ) + ( m * ( a - c ) );
        return;
      else
      {
      }
    }
    else
    {
    }
    sqrt( c );
    c = m;
    b0 = c + a;
    b1 = a - c;
    b0->y = ( a->y - ( m * a ) ) + ( m * b0 );
    b1->y = ( a->y - ( m * a ) ) + ( m * ( a - c ) );
    return;
  }
  b0->y = a->y + r;
  b1->y = a->y - r;
  b0 = a;
  b1 = a;
  return;
}
void coords_on_line( gdouble ax, gdouble ay, gdouble m, gdouble r, gdouble *b0x, gdouble *b0y, gdouble *b1x, gdouble *b1y )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble c = ay;
  /* phantom */ gdouble temp;
  if ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 < m )
  {
  }
  else
  if ( m < -179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 )
  {
  }
  else
  {
    c -= ax * m;
    if ( sqrt( ( r * r ) / ( ( m * m ) + 1.000000000000 ) ) == sqrt( ( r * r ) / ( ( m * m ) + 1.000000000000 ) ) )
    {
      if ( 1 )
      {
        b0x[0] = ax + 0.000000000000;
        b1x[0] = (unsigned int)ax + 0;
        b0y[0] = c + ( b0x[0] * m );
        b1y[0] = c + ( b1x[0] * m );
        return;
      }
      else
      {
      }
    }
    else
    {
    }
    sqrt( fp4 );
    c = c;
    b0x[0] = ax + 0.000000000000;
    b1x[0] = (unsigned int)ax + 0;
    b0y[0] = c + ( b0x[0] * m );
    b1y[0] = c + ( b1x[0] * m );
    return;
  }
  b0y[0] = r + c;
  b1y[0] = c - r;
  b0x[0] = ax;
  b1x[0] = b0x;
  return;
}
void points_on_line( GtsPoint *a, gdouble m, gdouble r, GtsPoint *b0, GtsPoint *b1 )
{
  int ebx;
  int esi;
  int edi;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble c;
  /* phantom */ gdouble temp;
  if ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 < m )
  {
  }
  else
  if ( m < -179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 )
  {
  }
  else
  {
    if ( sqrt( ( ( a->y - ( a->x * m ) ) * ( a->y - ( a->x * m ) ) ) / ( ( m * m ) + 1.000000000000 ) ) == sqrt( ( ( a->y - ( a->x * m ) ) * ( a->y - ( a->x * m ) ) ) / ( ( m * m ) + 1.000000000000 ) ) )
    {
      if ( 1 )
        c = 0.000000000000;
        b0->x = a->x + c;
        b1->x = a->x - c;
        b0->y = ( a->y - ( a->x * m ) ) + ( b0->x * m );
        b1->y = ( a->y - ( a->x * m ) ) + ( m * ( a->x - c ) );
        return;
      else
      {
      }
    }
    else
    {
    }
    sqrt( c );
    c = m;
    b0->x = a->x + c;
    b1->x = a->x - c;
    b0->y = ( a->y - ( a->x * m ) ) + ( b0->x * m );
    b1->y = ( a->y - ( a->x * m ) ) + ( m * ( a->x - c ) );
    return;
  }
  b0->y = a->y + r;
  b1->y = a->y - r;
  b0->x = a->x;
  b1->x = a->x;
  return;
}
gdouble vertex_gradient( toporouter_spoint_t *a, toporouter_spoint_t *b )
{
  if ( b->x == a->x )
  {
    return 0;
  }
  return 0;
}
gdouble segment_gradient( GtsSegment *s )
{
  double fp4;
  double fp5;
  double fp7;
  if ( s->v2->p.x != s->v1->p.x )
  {
    fp5 = 0.000000000000;
  }
  else
  if ( !0 )
  {
    return 1;
  }
  fp5 = 0.000000000000;
  return 1;
}
gdouble perpendicular_gradient( gdouble m )
{
  double fp7;
  if ( m <= 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 )
  {
    return 0;
  }
  return 0;
}
gdouble vertices_plane_distance( toporouter_spoint_t *a, toporouter_spoint_t *b )
{
  double fp6;
  double fp7;
  if ( sqrt( ( ( a->x - b->x ) * ( a->x - b->x ) ) + ( ( a->y - b->y ) * ( a->y - b->y ) ) ) == sqrt( ( ( a->x - b->x ) * ( a->x - b->x ) ) + ( ( a->y - b->y ) * ( a->y - b->y ) ) ) )
  {
    if ( sqrt( ( ( a->x - b->x ) * ( a->x - b->x ) ) + ( ( a->y - b->y ) * ( a->y - b->y ) ) ) != sqrt( ( ( a->x - b->x ) * ( a->x - b->x ) ) + ( ( a->y - b->y ) * ( a->y - b->y ) ) ) )
    {
    }
    else
    {
      return 0;
    }
  }
  else
  {
  }
  sqrt( ( ( a->x - b->x ) * ( a->x - b->x ) ) + ( ( a->y - b->y ) * ( a->y - b->y ) ) );
  return 0;
}
gint coord_intersect_prop( gdouble ax, gdouble ay, gdouble bx, gdouble by, gdouble cx, gdouble cy, gdouble dx, gdouble dy )
{
  int eax;
  int edx;
  double fp1;
  double fp2;
  double fp3;
  double fp6;
  double fp7;
  gint wind_abc = 1;
  gint wind_abd = 1;
  gint wind_cda = 1;
  gint wind_cdb = 1;
  bx = ( ( by - dy ) * ( by - ( cx - ( by - dy ) ) ) ) - ( cx * ( bx - ( by - ( cx - ( by - dy ) ) ) ) );
  if ( !( ecx & 255 ) && !( ( -0.000099999997 <= fp1 ) & 255 ) && wind_cdb && wind_cda )
  {
    return ( wind_abc != wind_abd ) & ( wind_cda != ( -0.000099999997 <= bx ) + -1 );
  }
  return 0;
}
int point_intersect_prop( GtsPoint *a, GtsPoint *b, GtsPoint *c, GtsPoint *d )
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
  return eax;
}
GtsVertex *vertex_intersect( GtsVertex *a, GtsVertex *b, GtsVertex *c, GtsVertex *d )
{
  int ebx;
  int esi;
  int edi;
  /* phantom */ GtsVertexClass *vertex_class;
  GtsVertex *rval = 0;
  /* phantom */ gdouble ua_top;
  /* phantom */ gdouble ua_bot;
  gdouble ua;
  /* phantom */ gdouble rx;
  /* phantom */ gdouble ry;
  if ( rval )
  {
    gts_vertex_new( (GtsVertexClass*)toporouter_vertex_class( ), a->p.x + ( ( b->p.x - a->p.x ) * ( ( ( ( a->p.y - c->p.y ) * ( d->p.x - c->p.x ) ) - ( ( a->p.x - c->p.x ) * ( d->p.y - c->p.y ) ) ) / ( ( ( d->p.y - c->p.y ) * ( b->p.x - a->p.x ) ) - ( ( d->p.x - c->p.x ) * ( b->p.y - a->p.y ) ) ) ) ), a->p.y + ( ( b->p.y - a->p.y ) * ( ( ( ( a->p.y - c->p.y ) * ( d->p.x - c->p.x ) ) - ( ( a->p.x - c->p.x ) * ( d->p.y - c->p.y ) ) ) / ( ( ( d->p.y - c->p.y ) * ( b->p.x - a->p.x ) ) - ( ( d->p.x - c->p.x ) * ( b->p.y - a->p.y ) ) ) ) ), 0.000000000000 );
  }
  return eax;
}
void coord_intersect( gdouble ax, gdouble ay, gdouble bx, gdouble by, gdouble cx, gdouble cy, gdouble dx, gdouble dy, gdouble *rx, gdouble *ry )
{
  /* phantom */ gdouble ua_top;
  /* phantom */ gdouble ua_bot;
  gdouble ua;
  rx[0] = ax + ( ( bx - ax ) * ( ( ( ( ay - cy ) * ( dx - cx ) ) - ( ( ax - cx ) * ( dy - cy ) ) ) / ( ( ( dy - cy ) * ( bx - ax ) ) - ( ( dx - cx ) * ( by - ay ) ) ) ) );
  ry[0] = ay + ( ( by - ay ) * ( ( ( ( ay - cy ) * ( dx - cx ) ) - ( ( ax - cx ) * ( dy - cy ) ) ) / ( ( ( dy - cy ) * ( bx - ax ) ) - ( ( dx - cx ) * ( by - ay ) ) ) ) );
  return;
}
int point_between( GtsPoint *a, GtsPoint *b, GtsPoint *c )
{
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  if ( 0.000099999997 < ( ( b->x - a->x ) * ( c->y - b->y ) ) - ( ( b->y - a->y ) * ( c->x - b->x ) ) )
  {
  }
  else
  if ( ( ( b->x - a->x ) * ( c->y - b->y ) ) - ( ( b->y - a->y ) * ( c->x - b->x ) ) < -0.000099999997 )
  {
  }
  else
  {
    if ( b->x != a->x )
    {
    }
    else
    if ( !0 )
    {
      if ( b->x <= a->y && b->y <= b->x )
      {
        return 1;
      }
      else
      if ( a->y <= b->x )
      {
        return ( ( b->x <> b->x ) & 1 ) == 0;
      }
    }
    else
    {
    }
    if ( b->y <= c->x )
    {
      if ( a->x <= a->x )
      {
        return 1;
      }
      else
        c->x = a->x;
    }
    else
    {
    }
    if ( c->x <= c->x )
    {
      return ( ( c->x <> c->x ) & 1 ) == 0;
    }
  }
  return 0;
}
void delaunay_create_from_vertices( GList *vertices, GtsSurface **surface, GtsTriangle **t )
{
  int eax;
  GList *i;
  GtsVertex *v1, *v2, *v3;
  GSList *vertices_slist = 0;
  if ( vertices )
  {
    surface[0] = surface[0];
    do
    {
      g_slist_prepend( vertices_slist, &i );
    }
    while ( i->next == 0 );
    vertices_slist = g_slist_prepend( vertices_slist, &i );
  }
  else
    vertices_slist = &vertices[0].data[0];
  t[0] = gts_triangle_enclosing( gts_triangle_class( ), vertices_slist, 100000.000000000000 );
  gts_triangle_vertices( t[0], &v1, &v2, &v3 );
  surface[0] = gts_surface_new( gts_surface_class( ), gts_face_class( ), (GtsEdgeClass*)toporouter_edge_class( ), (GtsVertexClass*)toporouter_vertex_class( ) );
  gts_surface_add_face( surface[0], gts_face_new( gts_face_class( ), t[0]->e1, t[0]->e2, t[0]->e3 ) );
  if ( i )
  {
    surface[0] = surface[0];
  {
    do
    {
      if ( gts_delaunay_add_vertex( surface[0], &i->data[0], 0 ) )
      {
        __printf_chk( 1, "ERROR: vertex could not be added to CDT " );
        print_vertex( (toporouter_vertex_t*)gts_delaunay_add_vertex( surface[0], &i->data[0], 0 ) );
      }
      i = i->next;
    }
    while ( i->next );
    vertices_slist = vertices_slist;
  }
  }
  gts_allow_floating_vertices = 1;
  gts_object_destroy( (int)( &v1->p.object ) );
  gts_object_destroy( (int)( &v2->p.object ) );
  gts_object_destroy( (int)( &v3->p.object ) );
  gts_allow_floating_vertices = 0;
  g_slist_free( vertices_slist );
  return;
}
GSList *list_to_slist( GList *i )
{
  GSList *rval = 0;
  if ( i )
  {
    do
    {
      g_slist_prepend( rval, &i );
    }
    while ( i->next == 0 );
  }
  return g_slist_prepend( rval, &i );
}
toporouter_bbox_t *toporouter_bbox_create_from_points( int layer, GList *vertices, toporouter_term_t type, gpointer data )
{
  /* phantom */ toporouter_bbox_t *bbox;
  GSList *vertices_slist = list_to_slist( vertices );
  *(int*)gts_bbox_points( (GtsBBoxClass*)toporouter_bbox_class( ), vertices_slist )/*.76*/ = 0;
  *(int*)gts_bbox_points( (GtsBBoxClass*)toporouter_bbox_class( ), vertices_slist )/*.80*/ = 0;
  *(int*)gts_bbox_points( (GtsBBoxClass*)toporouter_bbox_class( ), vertices_slist )/*.88*/ = 0;
  *(int*)gts_bbox_points( (GtsBBoxClass*)toporouter_bbox_class( ), vertices_slist )/*.64*/ = type;
  *(int*)gts_bbox_points( (GtsBBoxClass*)toporouter_bbox_class( ), vertices_slist )/*.92*/ = 0;
  *(int*)gts_bbox_points( (GtsBBoxClass*)toporouter_bbox_class( ), vertices_slist )/*.68*/ = data[0];
  *(int*)gts_bbox_points( (GtsBBoxClass*)toporouter_bbox_class( ), vertices_slist )/*.72*/ = layer;
  g_slist_free( vertices_slist );
  return (toporouter_bbox_t*)gts_bbox_points( (GtsBBoxClass*)toporouter_bbox_class( ), vertices_slist );
}
toporouter_bbox_t *toporouter_bbox_create( int layer, GList *vertices, toporouter_term_t type, gpointer data )
{
  /* phantom */ toporouter_bbox_t *bbox;
  GtsSurface *s;
  GtsTriangle *t;
  delaunay_create_from_vertices( vertices, &s, &t );
  *(int*)gts_bbox_surface( (GtsBBoxClass*)toporouter_bbox_class( ), s )/*.64*/ = type;
  *(int*)gts_bbox_surface( (GtsBBoxClass*)toporouter_bbox_class( ), s )/*.68*/ = data[0];
  *(int*)gts_bbox_surface( (GtsBBoxClass*)toporouter_bbox_class( ), s )/*.76*/ = s->_GtsSurface;
  *(int*)gts_bbox_surface( (GtsBBoxClass*)toporouter_bbox_class( ), s )/*.80*/ = t->_GtsTriangle;
  *(int*)gts_bbox_surface( (GtsBBoxClass*)toporouter_bbox_class( ), s )/*.72*/ = layer;
  return gts_bbox_surface( (GtsBBoxClass*)toporouter_bbox_class( ), s );
}
GtsVertex *insert_vertex( toporouter_t *r, toporouter_layer_t *l, gdouble x, gdouble y, toporouter_bbox_t *box )
{
  double fp6;
  double fp7;
  /* phantom */ GtsVertexClass *vertex_class;
  GtsVertex *v;
  GList *i;
  toporouter_vertex_class( );
  i = &l->vertices;
  if ( l->vertices )
  {
    do
    {
      v = &i->data[0];
      if ( v->p.x == x && v->p.y == y )
        break;
      i = i->next;
    }
    while ( i->next );
  }
  *(int*)gts_vertex_new( (GtsVertexClass*)toporouter_vertex_class( ), x, y, (double)( ( l - r->layers ) >> 4 ) )/*.40*/ = box[0].b.object.klass[0].info.name[0];
  v = gts_vertex_new( (GtsVertexClass*)toporouter_vertex_class( ), x, y, (double)( ( l - r->layers ) >> 4 ) );
  l->vertices = g_list_prepend( l->vertices, gts_vertex_new( (GtsVertexClass*)toporouter_vertex_class( ), x, y, (double)( ( l - r->layers ) >> 4 ) ) );
  return &v->p.object.klass->info.name[0];
}
GList *insert_constraint_edge( toporouter_t *r, toporouter_layer_t *l, gdouble x1, gdouble y1, guint flags1, gdouble x2, gdouble y2, guint flags2, toporouter_bbox_t *box )
{
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  GtsVertexClass *vertex_class = (GtsVertexClass*)toporouter_vertex_class( );
  /* phantom */ GtsEdgeClass *edge_class;
  /* phantom */ GtsVertex *p[2];
  GtsVertex *v;
  GList *i = &l->vertices;
  GtsEdge *e;
  if ( l->vertices )
  {
    do
    {
      i = i->next;
    }
    while ( i->next == 0 );
    if ( v->p.y != y1 ? v->p.y == y1 ? 0 : v : 0 )
    {
      if ( ebx )
      {
      }
      else
      {
        *(int*)gts_vertex_new( vertex_class, x2, y2, (double)( ( l - *(int*)(r + 8) ) >> 4 ) )/*.40*/ = box->b.object._GtsObject;
        l->vertices = eax;
      }
      *(int*)(ebx + 56) = flags2;
      e = &eax[0].data[0];
      *(int*)(&eax[2].data) = &box->b.object.klass->info.name[0];
      l->constraints = eax;
      l = &e[0].segment.object.klass[0].info.name[0];
      r = 0;
    }
  }
  else
  {
  }
  *(int*)gts_vertex_new( vertex_class, x1, y1, (double)( ( l - *(int*)(r + 8) ) >> 4 ) )/*.40*/ = box->b.object._GtsObject;
  l->vertices = g_list_prepend( l->vertices, gts_vertex_new( vertex_class, x1, y1, (double)( ( l - *(int*)(r + 8) ) >> 4 ) ) );
}
void insert_constraints_from_list( toporouter_t *r, toporouter_layer_t *l, GList *vlist, toporouter_bbox_t *box )
{
  int eax;
  int edx;
  GList *i;
  toporouter_vertex_t *pv = 0, *v;
  if ( vlist )
  {
    v = &vlist->data[0];
    i = &vlist->next;
    if ( vlist->next )
    {
      do
      {
        v = &i->data[0];
        if ( vlist->data[0] )
        {
          box->constraints = g_list_concat( box->constraints, insert_constraint_edge( r, l, v->v.p.x, v->v.p.y, v->flags, *(double*)(vlist->data[0] + 12), *(double*)(vlist->data[0] + 20), *(int*)(vlist->data[0] + 56), box ) );
        }
        i = i->next;
      }
      while ( i->next );
    }
    pv = v;
  }
  v = &vlist->data[0];
  box->constraints = g_list_concat( box->constraints, insert_constraint_edge( r, l, v->v.p.x, v->v.p.y, v->flags, v->v.p.x, v->v.p.y, pv->flags, box ) );
  return;
}
void insert_centre_point( toporouter_t *r, toporouter_layer_t *l, gdouble x, gdouble y )
{
  double fp6;
  double fp7;
  GList *i;
  /* phantom */ GtsVertexClass *vertex_class;
  toporouter_vertex_class( );
  i = &l->vertices;
  if ( l->vertices )
  {
  {
    do
    {
      GtsPoint *p = &i->data[0];
      if ( p->x == x && p->y == y && p->y == fp6 )
      {
        break;
      }
      else
      {
        i = i->next;
      }
    }
    while ( i->next );
  }
  }
  l->vertices = g_list_prepend( l->vertices, gts_vertex_new( (GtsVertexClass*)toporouter_vertex_class( ), x, y, 0.000000000000 ) );
  return;
}
GtsPoint *midpoint( GtsPoint *a, GtsPoint *b )
{
  return gts_point_new( gts_point_class( ), 0.500000000000 * ( b->x + a->x ), ( b->y + a->y ) * 0.500000000000, 0.000000000000 );
}
GList *rect_with_attachments( gdouble rad, gdouble x0, gdouble y0, gdouble x1, gdouble y1, gdouble x2, gdouble y2, gdouble x3, gdouble y3, gdouble z )
{
  int eax;
  /* phantom */ GtsVertexClass *vertex_class;
  GList *r, *rr, *i;
  toporouter_vertex_t *curpoint, *temppoint;
  return &y3 & 0xFFFFFFFF;
  curpoint = (toporouter_vertex_t*)gts_vertex_new( (GtsVertexClass*)toporouter_vertex_class( ), x0, y0, z );
  r = g_list_prepend( 0, gts_vertex_new( (GtsVertexClass*)toporouter_vertex_class( ), x0, y0, z ) );
  r = g_list_prepend( r, gts_vertex_new( *ebp_216, x1, y1, z ) );
  r = g_list_prepend( r, gts_vertex_new( *ebp_216, x2, y2, z ) );
  i = g_list_prepend( r, gts_vertex_new( *ebp_216, x3, y3, z ) );
  rr = 0;
  if ( rr )
  {
    do
    {
      temppoint = &i->data[0];
      g_list_prepend( rr, &curpoint );
    }
    while ( i->next == 0 );
  }
  else
    rr = i;
  g_list_free( ebp_32 );
}
int read_pads( toporouter_t *r, toporouter_layer_t *l, guint layer )
{
  int eax;
  int ch;
  int edx;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp5;
  double fp6;
  double fp7;
  int ebp_304;
#error unstructured control flow
}
int read_points( toporouter_t *r, toporouter_layer_t *l, int layer )
{
  int eax;
  int ecx;
  int edx;
  double fp5;
  double fp6;
  double fp7;
  int ebp_48;
  gdouble x;
  gdouble y;
  gdouble t;
  GList *vlist;
  toporouter_bbox_t *bbox;
{
  Cardinal n = PCB->Data->ElementN + -1;
  ElementTypePtr element;
  if ( PCB->Data->ElementN + -1 != -1 )
  {
    ebp_48 = ( PCB->Data->ElementN * 300 ) + -300;
    while ( element = ebp_48 + *(int*)(*(int*)(ecx + 8716) + 32), element->PinN == 0 )
    {
      n += -1;
      ebp_48 += -300;
      if ( n == -1 )
      {
      }
      else
      {
      }
    }
    n = 0;
    while ( 1 )
    {
      pin = element->Pin + ( n * 76 );
      t = (double)( element->Pin->X );
      y = (double)( element->Pin->Y );
      if ( ( ah & 1 ) & 255 )
      {
        lookup_thickness( &pin->Name );
        lookup_keepaway( &pin->Name );
        vlist = rect_with_attachments( 0.000000000000 * 0.500000000000, t - ( (double)( pin->Thickness ) * 0.500000000000 ), y - ( (double)( pin->Thickness ) * 0.500000000000 ), t - ( (double)( pin->Thickness ) * 0.500000000000 ), y + ( (double)( pin->Thickness ) * 0.500000000000 ), t + ( (double)( pin->Thickness ) * 0.500000000000 ), y + ( (double)( pin->Thickness ) * 0.500000000000 ), t + ( (double)( pin->Thickness ) * 0.500000000000 ), y - ( (double)( pin->Thickness ) * 0.500000000000 ), (double)( ( l - r->layers ) >> 4 ) );
        bbox = toporouter_bbox_create( ( l - r->layers ) >> 4, rect_with_attachments( 0.000000000000 * 0.500000000000, t - ( (double)( pin->Thickness ) * 0.500000000000 ), y - ( (double)( pin->Thickness ) * 0.500000000000 ), t - ( (double)( pin->Thickness ) * 0.500000000000 ), y + ( (double)( pin->Thickness ) * 0.500000000000 ), t + ( (double)( pin->Thickness ) * 0.500000000000 ), y + ( (double)( pin->Thickness ) * 0.500000000000 ), t + ( (double)( pin->Thickness ) * 0.500000000000 ), y - ( (double)( pin->Thickness ) * 0.500000000000 ), (double)( ( l - r->layers ) >> 4 ) ), 1, &pin );
        r = &eax[0].p.object.klass[0].info.name[0];
        insert_constraints_from_list( r, l, rect_with_attachments( 0.000000000000 * 0.500000000000, t - ( (double)( pin->Thickness ) * 0.500000000000 ), y - ( (double)( pin->Thickness ) * 0.500000000000 ), t - ( (double)( pin->Thickness ) * 0.500000000000 ), y + ( (double)( pin->Thickness ) * 0.500000000000 ), t + ( (double)( pin->Thickness ) * 0.500000000000 ), y + ( (double)( pin->Thickness ) * 0.500000000000 ), t + ( (double)( pin->Thickness ) * 0.500000000000 ), y - ( (double)( pin->Thickness ) * 0.500000000000 ), (double)( ( l - r->layers ) >> 4 ) ), bbox );
      }
      else
      if ( ( ah & 8 ) & 255 )
      {
        __fprintf_chk( stderr, 1, "No support for octagon pins yet\n" );
        element = element;
        sn = element->PinN;
        if ( element->PinN )
        {
          n = ( sn + n + 1 ) - sn;
          if ( sn <= ( sn + n + 1 ) - element->PinN )
          {
            n += -1;
            ebp_48 += -300;
          }
          else
          {
          }
        }
      }
      else
      {
        lookup_thickness( &pin->Name );
        lookup_keepaway( &pin->Name );
        vlist = rect_with_attachments( 0.000000000000 * 0.500000000000, t - ( (double)( pin->Thickness ) * 0.500000000000 ), y - ( (double)( pin->Thickness ) * 0.500000000000 ), t - ( (double)( pin->Thickness ) * 0.500000000000 ), y + ( (double)( pin->Thickness ) * 0.500000000000 ), t + ( (double)( pin->Thickness ) * 0.500000000000 ), y + ( (double)( pin->Thickness ) * 0.500000000000 ), t + ( (double)( pin->Thickness ) * 0.500000000000 ), y - ( (double)( pin->Thickness ) * 0.500000000000 ), (double)( ( l - r->layers ) >> 4 ) );
        r = &eax[0].p.object.klass[0].info.name[0];
      }
      g_list_free( rect_with_attachments( 0.000000000000 * 0.500000000000, t - ( (double)( pin->Thickness ) * 0.500000000000 ), y - ( (double)( pin->Thickness ) * 0.500000000000 ), t - ( (double)( pin->Thickness ) * 0.500000000000 ), y + ( (double)( pin->Thickness ) * 0.500000000000 ), t + ( (double)( pin->Thickness ) * 0.500000000000 ), y + ( (double)( pin->Thickness ) * 0.500000000000 ), t + ( (double)( pin->Thickness ) * 0.500000000000 ), y - ( (double)( pin->Thickness ) * 0.500000000000 ), (double)( ( l - r->layers ) >> 4 ) ) );
      bbox->point = (GtsPoint*)insert_vertex( r, l, t, y, bbox );
      sn = element->PinN;
      if ( element->PinN )
      {
        n = ( sn + n + 1 ) - sn;
      }
    }
  }
{
  Cardinal n;
  Cardinal sn;
  PinTypePtr via;
  if ( PCB->Data->ViaN )
  {
    n = 0;
    while ( 1 )
    {
      via = PCB->Data->Via + ( n * 76 );
      t = (double)( PCB->Data->Via->BoundingBox.X1 );
      y = (double)( PCB->Data->Via->BoundingBox.X1 );
      if ( ( ah & 1 ) & 255 )
      {
        lookup_thickness( &via->Name );
        lookup_keepaway( &via->Name );
        vlist = rect_with_attachments( 0.000000000000 * 0.500000000000, t - ( (double)( via->Thickness ) * 0.500000000000 ), y - ( (double)( via->Thickness ) * 0.500000000000 ), t - ( (double)( via->Thickness ) * 0.500000000000 ), y + ( (double)( via->Thickness ) * 0.500000000000 ), t + ( (double)( via->Thickness ) * 0.500000000000 ), y + ( (double)( via->Thickness ) * 0.500000000000 ), t + ( (double)( via->Thickness ) * 0.500000000000 ), y - ( (double)( via->Thickness ) * 0.500000000000 ), (double)( ( l - r->layers ) >> 4 ) );
        bbox = toporouter_bbox_create( ( l - r->layers ) >> 4, rect_with_attachments( 0.000000000000 * 0.500000000000, t - ( (double)( via->Thickness ) * 0.500000000000 ), y - ( (double)( via->Thickness ) * 0.500000000000 ), t - ( (double)( via->Thickness ) * 0.500000000000 ), y + ( (double)( via->Thickness ) * 0.500000000000 ), t + ( (double)( via->Thickness ) * 0.500000000000 ), y + ( (double)( via->Thickness ) * 0.500000000000 ), t + ( (double)( via->Thickness ) * 0.500000000000 ), y - ( (double)( via->Thickness ) * 0.500000000000 ), (double)( ( l - r->layers ) >> 4 ) ), 2, &via );
        r = &eax[0].p.object.klass[0].info.name[0];
        insert_constraints_from_list( r, l, rect_with_attachments( 0.000000000000 * 0.500000000000, t - ( (double)( via->Thickness ) * 0.500000000000 ), y - ( (double)( via->Thickness ) * 0.500000000000 ), t - ( (double)( via->Thickness ) * 0.500000000000 ), y + ( (double)( via->Thickness ) * 0.500000000000 ), t + ( (double)( via->Thickness ) * 0.500000000000 ), y + ( (double)( via->Thickness ) * 0.500000000000 ), t + ( (double)( via->Thickness ) * 0.500000000000 ), y - ( (double)( via->Thickness ) * 0.500000000000 ), (double)( ( l - r->layers ) >> 4 ) ), bbox );
        g_list_free( rect_with_attachments( 0.000000000000 * 0.500000000000, t - ( (double)( via->Thickness ) * 0.500000000000 ), y - ( (double)( via->Thickness ) * 0.500000000000 ), t - ( (double)( via->Thickness ) * 0.500000000000 ), y + ( (double)( via->Thickness ) * 0.500000000000 ), t + ( (double)( via->Thickness ) * 0.500000000000 ), y + ( (double)( via->Thickness ) * 0.500000000000 ), t + ( (double)( via->Thickness ) * 0.500000000000 ), y - ( (double)( via->Thickness ) * 0.500000000000 ), (double)( ( l - r->layers ) >> 4 ) ) );
        bbox->point = (GtsPoint*)insert_vertex( r, l, t, y, bbox );
      }
      else
      if ( ( ah & 8 ) & 255 )
        __fprintf_chk( stderr, 1, "No support for octagon vias yet\n" );
      else
      {
        lookup_thickness( &via->Name );
        lookup_keepaway( &via->Name );
        vlist = rect_with_attachments( 0.000000000000 * 0.500000000000, t - ( (double)( via->Thickness ) * 0.500000000000 ), y - ( (double)( via->Thickness ) * 0.500000000000 ), t - ( (double)( via->Thickness ) * 0.500000000000 ), y + ( (double)( via->Thickness ) * 0.500000000000 ), t + ( (double)( via->Thickness ) * 0.500000000000 ), y + ( (double)( via->Thickness ) * 0.500000000000 ), t + ( (double)( via->Thickness ) * 0.500000000000 ), y - ( (double)( via->Thickness ) * 0.500000000000 ), (double)( ( l - r->layers ) >> 4 ) );
        bbox = toporouter_bbox_create( ( l - r->layers ) >> 4, rect_with_attachments( 0.000000000000 * 0.500000000000, t - ( (double)( via->Thickness ) * 0.500000000000 ), y - ( (double)( via->Thickness ) * 0.500000000000 ), t - ( (double)( via->Thickness ) * 0.500000000000 ), y + ( (double)( via->Thickness ) * 0.500000000000 ), t + ( (double)( via->Thickness ) * 0.500000000000 ), y + ( (double)( via->Thickness ) * 0.500000000000 ), t + ( (double)( via->Thickness ) * 0.500000000000 ), y - ( (double)( via->Thickness ) * 0.500000000000 ), (double)( ( l - r->layers ) >> 4 ) ), 2, &via );
        r = &eax[0].p.object.klass[0].info.name[0];
        g_list_free( rect_with_attachments( 0.000000000000 * 0.500000000000, t - ( (double)( via->Thickness ) * 0.500000000000 ), y - ( (double)( via->Thickness ) * 0.500000000000 ), t - ( (double)( via->Thickness ) * 0.500000000000 ), y + ( (double)( via->Thickness ) * 0.500000000000 ), t + ( (double)( via->Thickness ) * 0.500000000000 ), y + ( (double)( via->Thickness ) * 0.500000000000 ), t + ( (double)( via->Thickness ) * 0.500000000000 ), y - ( (double)( via->Thickness ) * 0.500000000000 ), (double)( ( l - r->layers ) >> 4 ) ) );
        bbox->point = (GtsPoint*)insert_vertex( r, l, t, y, bbox );
      }
      sn = PCB->Data->ViaN;
      if ( PCB->Data->ViaN == 0 || sn <= ( sn + n + 1 ) - PCB->Data->ViaN )
        break;
    }
  }
  return 0;
}
}
}
int read_lines( toporouter_t *r, toporouter_layer_t *l, LayerType *layer, int ln )
{
  int edx;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ gdouble xs[2], ys[2];
  GList *vlist;
  toporouter_bbox_t *bbox;
  GtsVertexClass *vertex_class = (GtsVertexClass*)toporouter_vertex_class( );
{
  Cardinal n = layer->LineN + -1;
  LineTypePtr line;
  if ( layer->LineN + -1 != -1 )
  {
    n = n;
    do
    {
      line = layer->Line + ( n * 88 ) + -88 + -88;
      if ( line->Point2.X != (double)( line->Point1.X ) )
        fp5 = 0.000000000000;
      else
      if ( !0 )
      {
        fp5 = 0.000000000000;
        if ( 0.000000000000 == 0.000000000000 )
        {
          if ( 0.000000000000 == 0.000000000000 )
          {
          }
          else
          {
          }
        }
      }
      else
        fp5 = 0.000000000000;
      vlist = eax;
      bbox = &eax[0].data[0];
      r = &eax[0].data[0];
      g_list_free( ebp_32 );
      bbox->constraints = g_list_concat( bbox->constraints, insert_constraint_edge( r, l, 0.000000000000, 0.000000000000, 0, 0.000000000000, 0.000000000000, 0, bbox ) );
    }
    while ( n + -1 != -1 );
  }
  return 0;
}
}
void create_board_edge( gdouble x0, gdouble y0, gdouble x1, gdouble y1, gdouble max, gint layer, GList **vlist )
{
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  GtsVertexClass *vertex_class = (GtsVertexClass*)toporouter_vertex_class( );
  /* phantom */ gdouble d;
  guint n;
  guint count;
  gdouble inc;
  gdouble x;
  gdouble y;
  if ( sqrt( ( ( x0 - x1 ) * ( x0 - x1 ) ) + ( ( y0 - y1 ) * ( y0 - y1 ) ) ) == sqrt( ( ( x0 - x1 ) * ( x0 - x1 ) ) + ( ( y0 - y1 ) * ( y0 - y1 ) ) ) )
  {
    if ( sqrt( ( ( ebp_120 - ebp_80 ) * ( ebp_120 - ebp_80 ) ) + ( ( ebp_136 - ebp_88 ) * ( ebp_136 - ebp_88 ) ) ) != sqrt( ( ( ebp_120 - ebp_80 ) * ( ebp_120 - ebp_80 ) ) + ( ( ebp_136 - ebp_88 ) * ( ebp_136 - ebp_88 ) ) ) )
    {
    }
    else
    {
      if ( (long long)( 0.000000000000 / max ) == 0 )
      {
        x = 0.000000000000;
        y = 0.000000000000;
        vlist[0] = g_list_prepend( vlist[0], gts_vertex_new( vertex_class, x, y, (double)( layer ) ) );
        return;
      }
      edx = 0;
      inc = x0 / (double)( (long long)( (long long)( 0.000000000000 / max ) ) );
      x = 0.000000000000;
      y = 0.000000000000;
      vlist[0] = g_list_prepend( vlist[0], gts_vertex_new( vertex_class, x, y, (double)( layer ) ) );
      if ( n != 1 )
      {
        count = 1;
        n = n;
        do
        {
          count++;
          coord_move_towards_coord_values( x, y, x1, y1, inc, &x, &y );
          vlist[0] = g_list_prepend( vlist[0], gts_vertex_new( vertex_class, x, y, (double)( layer ) ) );
        }
        while ( n <= count );
      }
      else
      {
      }
      return;
    }
  }
  else
    vlist[0] = vlist[0];
  sqrt( ( ( x0 - x1 ) * ( x0 - x1 ) ) + ( ( y0 - y1 ) * ( y0 - y1 ) ) );
}
int read_board_constraints( toporouter_t *r, toporouter_layer_t *l, int layer )
{
  GList *vlist = 0;
  toporouter_bbox_t *bbox;
  create_board_edge( 0.000000000000, 0.000000000000, (double)( PCB->MaxWidth ), 0.000000000000, 10000.000000000000, layer, &vlist );
  create_board_edge( (double)( PCB->MaxWidth ), 0.000000000000, (double)( PCB->MaxWidth ), (double)( PCB->MaxHeight ), 10000.000000000000, layer, &vlist );
  create_board_edge( (double)( PCB->MaxWidth ), (double)( PCB->MaxHeight ), 0.000000000000, (double)( PCB->MaxHeight ), 10000.000000000000, layer, &vlist );
  create_board_edge( 0.000000000000, (double)( PCB->MaxHeight ), 0.000000000000, 0.000000000000, 10000.000000000000, layer, &vlist );
  bbox = toporouter_bbox_create( layer, vlist, 7, 0 );
  r->bboxes->data[0] = g_slist_prepend( &r->bboxes->data[0], toporouter_bbox_create( layer, vlist, 7, 0 ) );
  insert_constraints_from_list( r, l, vlist, bbox );
  g_list_free( vlist );
  return 0;
}
gdouble triangle_cost( GtsTriangle *t, gpointer *data )
{
  int esi;
  int edi;
  double fp1;
  gdouble *min_quality;
  /* phantom */ gdouble *max_area;
  gdouble quality;
  gdouble area;
  gts_triangle_quality( t );
  gts_triangle_area( t );
  if ( 0.000000000000 < min_quality[0] )
  {
  }
  else
  if ( 0.000000000000 <= *(double*)(data[1]) )
  {
  }
  return 0;
(min_quality[0] & 0xFFFFFFFF) = data[0]; // XXX
}
void build_cdt( toporouter_t *r, toporouter_layer_t *l )
{
  GList *i;
  /* phantom */ GtsEdge *temp;
  /* phantom */ GtsVertex *v;
  GtsTriangle *t;
  GtsVertex *v1, *v2, *v3;
  GSList *vertices_slist = list_to_slist( &l->vertices );
  t = gts_triangle_enclosing( gts_triangle_class( ), vertices_slist, 1000.000000000000 );
  gts_triangle_vertices( gts_triangle_enclosing( gts_triangle_class( ), vertices_slist, 1000.000000000000 ), &v1, &v2, &v3 );
  g_slist_free( vertices_slist );
  l->surface->object.klass->info.name[0] = gts_surface_new( gts_surface_class( ), gts_face_class( ), (GtsEdgeClass*)toporouter_edge_class( ), (GtsVertexClass*)toporouter_vertex_class( ) );
  gts_surface_add_face( &l->surface->object.klass->info.name[0], gts_face_new( gts_face_class( ), t->e1, t->e2, &t->e1->triangles->data[0] ) );
  i = &l->vertices;
  if ( l->vertices )
  {
    do
    {
      if ( gts_delaunay_add_vertex( l->surface, &i->data[0], 0 ) )
        g_assertion_message_expr( 0, "../../src/toporouter.c", 2264, __PRETTY_FUNCTION__, "gts_delaunay_add_vertex (l-&gt;surface, i-&gt;data, NULL) == NULL" );
      i = i->next;
    }
    while ( i->next );
  }
  i = l->constraints;
  if ( l->constraints )
  {
    do
    {
      if ( gts_delaunay_add_constraint( l->surface, &i->data[0] ) )
        g_assertion_message_expr( 0, "../../src/toporouter.c", 2311, __PRETTY_FUNCTION__, "gts_delaunay_add_constraint (l-&gt;surface, i-&gt;data) == NULL" );
      i = i->next;
    }
    while ( i->next );
  }
  gts_allow_floating_vertices = 1;
  gts_object_destroy( (int)( &v1->p.object ) );
  gts_object_destroy( (int)( &v2->p.object ) );
  gts_object_destroy( (int)( &v3->p.object ) );
  gts_allow_floating_vertices = 0;
  return;
}
gint visited_cmp( gconstpointer a, gconstpointer b )
{
  int eax;
  return a < b ? -1 : ccdep2 < ccdep1;
}
gdouble coord_xangle( gdouble ax, gdouble ay, gdouble bx, gdouble by )
{
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp6;
  double fp7;
  gdouble dx;
  /* phantom */ gdouble dy;
  gdouble theta;
  if ( abs( ax - bx ) < 0.000099999997 )
    dx = 1.570796326795;
  else
  {
    atan( abs( ay - by ) / dx );
    dx = ax;
  }
  if ( dx <= by )
  {
    return 0;
  }
  else
  {
    if ( ax < ax )
    {
      return 0;
    }
    return 0;
  }
}
gdouble point_xangle( GtsPoint *a, GtsPoint *b )
{
  double fp0;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble dx = b->y;
  /* phantom */ gdouble dy;
  gdouble theta;
  if ( abs( a->x - b->x ) < 0.000099999997 )
  {
  }
  else
  {
    atan( abs( a->y - dx ) / abs( a->x - b->x ) );
    dx = dx;
  }
  if ( dx <= fp5 )
  {
    return 0;
  }
  else
  {
    if ( b->x < a->x )
    {
      return 0;
    }
    return 0;
  }
}
GList *cluster_vertices( toporouter_t *r, toporouter_cluster_t *c )
{
  int edx;
  GList *rval;
  if ( c )
  {
    toporouter_cluster_t **i = c->netlist->clusters->pdata + c->netlist->routes;
    if ( c->netlist->clusters <= c->netlist->clusters->pdata + c->netlist->routes && -4 )
    {
      rval = 0;
      do
      {
        cluster = i[0];
        if ( r->flags/*.1_1of4*/ >= 0 )
        {
          if ( cluster != c )
          {
            i = &i[ -1 ];
            if ( c->netlist->clusters <= i )
              continue;
            else
              break;
          }
        }
        else
      {
        toporouter_cluster_t *cluster;
        if ( i[0] != c->c )
          continue;
      }
      {
        toporouter_bbox_t **i;
        i[0] = cluster->boxes->pdata[0] + ( cluster->boxes->len << 2 ) + -4;
        if ( cluster->boxes->pdata[0] <= cluster->boxes->pdata[0] + ( cluster->boxes->len << 2 ) + -4 && cluster->boxes->len )
        {
          do
          {
            box = i[0];
            if ( box->type == LINE )
            {
              /* phantom */ int _g_boolean_var_;
              if ( box->constraints->data[0] == 0 )
              {
                g_assertion_message_expr( 0, "../../src/toporouter.c", 2402, __PRETTY_FUNCTION__, "box-&gt;constraints-&gt;data" );
                break;
              }
              else
              {
                i[0] = i + -4;
                rval = g_list_prepend( g_list_prepend( rval, (int)( &box->constraints->_GList ) ), (int)( &box->constraints->_GList ) );
                if ( i < cluster->boxes->pdata[0] )
                {
                  i = &i[ -1 ];
                  if ( i < c->netlist->clusters )
                    break;
                  if ( c->netlist->routes == 0 )
                    break;
                  do
                  {
                    cluster = i[0];
                  }
                  while ( c->netlist->routes );
                  break;
                }
              }
            }
            else
            {
              toporouter_bbox_t *box;
              if ( box->point )
              {
                rval = g_list_prepend( rval, &box->point );
              }
              else
                __printf_chk( 1, "WARNING: cluster_vertices: unhandled bbox type\n" );
              i[0] = i + -4;
              if ( i + -4 < cluster->boxes->pdata[0] )
              {
                i = &i[ -1 ];
              }
            }
          }
          while ( cluster->boxes->len );
        }
      }
      }
      while ( c->netlist->routes );
      return rval;
    }
  }
  return 0;
}
void print_cluster( toporouter_cluster_t *c )
{
  if ( c == 0 )
  {
    __printf_chk( 1, "[CLUSTER (NULL)]\n" );
    return;
  }
  __printf_chk( 1, "CLUSTER %d: NETLIST = %s STYLE = %s\n", c, (char*)c->netlist->netlist, (char*)c->netlist->style );
{
  toporouter_bbox_t **i;
  i[0] = c->boxes->pdata[0] + ( c->boxes->len << 2 ) + -4;
  if ( c->boxes->pdata[0] <= c->boxes->pdata[0] + ( c->boxes->len << 2 ) + -4 && c->boxes->len )
  {
    do
    {
      /* phantom */ toporouter_bbox_t *box;
      i[0] = i + -4;
      print_bbox( i[0] );
    }
    while ( i < c->boxes->pdata[0] || c->boxes->len == 0 );
  }
  return;
}
}
toporouter_cluster_t *cluster_create( toporouter_t *r, toporouter_netlist_t *netlist )
{
  int esi;
  /* phantom */ toporouter_cluster_t *c;
  *(int*)calloc( 1, ebx )/*.4*/ = netlist->routes->_GPtrArray;
  *(int*)(calloc( 1, ebx )) = netlist->routes->_GPtrArray;
  g_ptr_array_add( *(int*)(netlist), calloc( 1, ebx ) );
  *(int*)calloc( 1, ebx )/*.12*/ = netlist->_toporouter_netlist_t;
  *(int*)calloc( 1, ebx )/*.8*/ = g_ptr_array_new( );
  return (toporouter_cluster_t*)calloc( 1, ebx );
}
toporouter_bbox_t *toporouter_bbox_locate( toporouter_t *r, toporouter_term_t type, void *data, gdouble x, gdouble y, guint layergroup )
{
  int edx;
  GtsPoint *p;
  GSList *boxes, *i;
  ecx = 0;
  gts_object_destroy( &p[0].object );
  if ( gts_bb_tree_stabbed( &r->bboxtree, gts_point_new( gts_point_class( ), x, y, (double)( (long long)( layergroup ) ) ) ) )
  {
    i = boxes;
    do
    {
      box = &i->data[0];
      if ( box->type == type && box->data == data )
      {
        g_slist_free( boxes );
        break;
      }
    {
      toporouter_bbox_t *box;
      i = i->next;
    }
    }
    while ( i->next );
  }
  box = 0;
  g_slist_free( boxes );
  return box;
}
void cluster_join_bbox( toporouter_cluster_t *cluster, toporouter_bbox_t *box )
{
  int esi;
  if ( box )
  {
    g_ptr_array_add( cluster->boxes, &box );
    box->cluster = cluster;
  }
  return;
}
void import_clusters( toporouter_t *r )
{
  int eax;
  int edx;
  int ebp_92;
  int ebp_76;
  int ebp_68;
  NetListListType nets;
  ResetFoundPinsViasAndPads( 0 );
  ResetFoundLinesAndPolygons( 0 );
  esi = CollectSubnets( 0 );
  memcpy( &nets.NetListN, *(int*)(0), 12 );
{
  Cardinal n = nets.NetListN;
  NetListTypePtr netlist;
  ebp_92 = nets.NetListN * 12;
  for ( ; n != -1;  )
  {
    netlist = ebp_92 + nets.NetList;
    if ( *(int*)(ebp_92 + nets.NetList) == 0 )
      goto B9;
    else
    {
      /* phantom */ toporouter_netlist_t *nl;
      *(int*)calloc( 1, 20 )/*.8*/ = netlist->Net->Connection->menu->Name[0];
      *(int*)calloc( 1, 20 )/*.12*/ = netlist->Net->Connection->menu->Style;
      *(int*)(calloc( 1, 20 )) = g_ptr_array_new( );
      *(int*)calloc( 1, 20 )/*.16*/ = 0;
      *(int*)calloc( 1, 20 )/*.4*/ = g_ptr_array_new( );
      g_ptr_array_add( &r->netlists, calloc( 1, 20 ) );
    {
      Cardinal n = netlist->NetN + -1;
      NetTypePtr net;
      if ( netlist->NetN + -1 != -1 )
      {
        ebp_76 = ( netlist->NetN + 0xfffffff ) << 4;
        do
        {
          toporouter_cluster_t *cluster;
          net = ebp_76 + netlist->Net;
        {
          Cardinal n;
          ConnectionTypePtr connection;
          cluster = cluster_create( r, (toporouter_netlist_t*)calloc( 1, 20 ) );
          n = net->ConnectionN + -1;
          if ( net->ConnectionN + -1 != -1 )
          {
            ebp_68 = ( net->ConnectionN * 28 ) + -28;
            do
            {
              connection = ebp_68 + net->Connection;
              if ( connection->type == 4 )
              {
                /* phantom */ LineType *line;
                toporouter_bbox_t *box = &connection->ptr2[0];
              }
              else
              {
                if ( connection->type == 512 )
                {
                  /* phantom */ PadType *pad;
                  toporouter_bbox_t *box;
                  cluster_join_bbox( cluster, toporouter_bbox_locate( r, 0, &connection->ptr2, (double)( connection->X ), (double)( connection->Y ), connection->group ) );
                }
                else
                {
                  m = 0;
                  if ( connection->type != 256 )
                  {
                    m = 0;
                    if ( net->ConnectionN != 1 )
                    {
                      if ( connection->type == 8 )
                      {
                      }
                    }
                    else
                    while ( PCB->Data->LayerN > 0 )
                    {
                      do
                      {
                      }
                      while ( PCB->Data->LayerN != 0 + 1 + 1 );
                    {
                      guint m;
                      if ( m < ( 0 + 1 ) - ( ( *(int*)(PCB + ( 0 << 2 ) + 7380) < 1 ) & 1 ) )
                      {
                        /* phantom */ PinType *pin;
                        toporouter_bbox_t *box;
                        m++;
                        cluster_join_bbox( cluster, toporouter_bbox_locate( r, 2, &connection->ptr2, (double)( connection->X ), (double)( connection->Y ), m ) );
                      }
                    }
                    }
                  }
                  else
                {
                  while ( PCB->Data->LayerN > 0 )
                  {
                    do
                    {
                    }
                    while ( PCB->Data->LayerN != 0 + 1 + 1 );
                    if ( m < ( 0 + 1 ) - ( ( *(int*)(PCB + ( 0 << 2 ) + 7380) < 1 ) & 1 ) )
                    {
                      /* phantom */ PinType *pin;
                      toporouter_bbox_t *box;
                      m++;
                      cluster_join_bbox( cluster, toporouter_bbox_locate( r, 1, &connection->ptr2, (double)( connection->X ), (double)( connection->Y ), m ) );
                    }
                  }
                }
                }
                n += -1;
                ebp_68 += -28;
              }
            {
              /* phantom */ PolygonType *polygon;
              toporouter_bbox_t *box;
              cluster_join_bbox( cluster, toporouter_bbox_locate( r, ebp_152, ebp_148, ebp_144, ebp_136, ebp_128 ) );
              n += -1;
              ebp_68 += -28;
              if ( n != -1 )
                continue;
              else
                break;
            }
            }
            while ( n != -1 );
          }
          n += -1;
          ebp_76 += -16;
        }
        }
        while ( n == -1 );
      }
    }
    }
B9:;
    n += -1;
    ebp_92 += -12;
  }
  FreeNetListListMemory( &nets );
  return;
}
}
void import_geometry( toporouter_t *r )
{
  int ecx;
  int edx;
  toporouter_layer_t *cur_layer;
  int group;
  if ( PCB->Data->LayerN > 0 )
  {
    do
    {
    }
    while ( PCB->Data->LayerN != 0 + 1 + 1 );
  }
  cur_layer = (toporouter_layer_t*)calloc( 1, ( ( 0 + 1 ) - ( ( *(int*)(PCB + ( 0 << 2 ) + 7380) < 1 ) & 1 ) ) << 4 );
  r->layers = calloc( 1, ( ( 0 + 1 ) - ( ( *(int*)(PCB + ( 0 << 2 ) + 7380) < 1 ) & 1 ) ) << 4 );
  if ( PCB->Data->LayerN > 0 )
  {
    group = 0;
    do
    {
      if ( PCB->Font.Valid )
      {
        cur_layer->vertices = 0;
        cur_layer->constraints = 0;
        read_board_constraints( r, cur_layer, PCB->Font.Symbol[255].Delta );
        read_points( r, cur_layer, PCB->ID );
        read_pads( r, cur_layer, group );
      {
        Cardinal entry;
        if ( PCB->Data->pcb->ID )
        {
          /* phantom */ LayerTypePtr layer;
          Cardinal number;
          entry = 0;
          do
          {
            number = *(int*)(number + ( entry * 4 ) + ( ( ( group * 9 ) * 2 ) * 4 ) + 7444);
            if ( *(int*)(number + ( entry * 4 ) + ( ( ( group * 9 ) * 2 ) * 4 ) + 7444) < PCB->Data->LayerN )
            {
              read_lines( r, cur_layer, PCB->Data + ( number * 92 ) + 76, (int)number );
            }
            entry++;
          }
          while ( entry + 1 < PCB->Data->pcb->LayerGroups.Number[0] );
        }
        build_cdt( r, cur_layer );
        cur_layer++;
      }
      }
      group++;
    }
    while ( group < PCB->Data->LayerN );
  }
  r->bboxtree = gts_bb_tree_new( &r->bboxes->data[0] );
  r = r;
}
gint compare_points( gconstpointer a, gconstpointer b )
{
  double fp6;
  double fp7;
  /* phantom */ GtsPoint *i;
  /* phantom */ GtsPoint *j;
  if ( b[3] == a[3] )
  {
    if ( !0 )
    {
      if ( b[5] == a[5] )
      {
        if ( 1 )
        {
          return 0;
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
  if ( fp6 <= fp7 )
  {
    return 1;
  }
  return 0;
}
gint compare_segments( gconstpointer a, gconstpointer b )
{
  if ( b != a )
  {
    return ( 0 - ( 0 & 1 ) ) | 1;
  }
  return 0;
}
toporouter_cluster_t *cluster_find( toporouter_t *r, gdouble x, gdouble y, gdouble z )
{
  double fp6;
  GtsPoint *p = gts_point_new( gts_point_class( ), x, y, z );
  GSList *hits;
  toporouter_cluster_t *rval = 0;
  if ( gts_bb_tree_stabbed( &r->bboxtree, gts_point_new( gts_point_class( ), x, y, z ) ) )
  {
    do
    {
      box = &(toporouter_bbox_t*)(hits->next);
      if ( box->layer == (int)( z ) && box->type != BOARD )
      {
        if ( box->type == LINE )
        {
          LineType *line = &box->data[0];
          /* phantom */ gint linewind;
          if ( 0.000099999997 < ( ( x - (double)( line->Point1.X ) ) * ( (double)( line->Point2.Y ) - y ) ) - ( ( y - (double)( line->Point1.Y ) ) * ( (double)( line->Point2.X ) - x ) ) )
          {
          }
          else
          if ( -0.000099999997 <= ( ( x - (double)( line->Point1.X ) ) * ( (double)( line->Point2.Y ) - y ) ) - ( ( y - (double)( line->Point1.Y ) ) * ( (double)( line->Point2.X ) - x ) ) )
            rval = &box->cluster[6];
        }
        else
        if ( box->surface && gts_point_locate( p, box->surface, 0 ) )
        {
          rval = &box->cluster;
          box = &box->cluster->c;
          break;
        }
      }
    {
      toporouter_bbox_t *box;
    }
    }
    while ( (hits->next) );
  }
  gts_object_destroy( (int)( &p->object ) );
  return rval;
}
gdouble simple_h_cost( toporouter_t *r, toporouter_vertex_t *curpoint, toporouter_vertex_t *destpoint )
{
  double fp7;
  gdouble layerpenalty;
  if ( destpoint->v.p.z == curpoint->v.p.z )
    layerpenalty = 0.000000000000;
  else
    layerpenalty = r->viacost;
  gts_point_distance( &curpoint[0].v.p, &destpoint[0].v.p );
  return 1;
}
gdouble route_heap_cmp( gpointer item, gpointer data )
{
  return 0;
}
void toporouter_heap_search( gpointer data, gpointer user_data )
{
  /* phantom */ toporouter_vertex_t *v;
  /* phantom */ toporouter_heap_search_data_t *heap_search_data;
  if ( data == *(int*)(user_data) )
  {
    user_data[1] = *(int*)(user_data);
    return;
  }
  return;
}
void toporouter_heap_color( gpointer data, gpointer user_data )
{
  /* phantom */ toporouter_vertex_t *v;
  data[14] |= user_data;
  return;
}
gdouble region_span( toporouter_vertex_region_t *region )
{
  double fp0;
  gdouble a1;
  gdouble a2;
{
  /* phantom */ int _g_boolean_var_;
  if ( region->v1 == 0 )
  {
    g_assertion_message_expr( 0, "../../src/toporouter.c", 2776, __PRETTY_FUNCTION__, "region-&gt;v1 != NULL" );
  }
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( region->v2 == 0 )
    goto B5;
  else
  {
    /* phantom */ int _g_boolean_var_;
    if ( region->origin == 0 )
    {
      g_assertion_message_expr( 0, "../../src/toporouter.c", 2778, __PRETTY_FUNCTION__, "region-&gt;origin != NULL" );
    }
    point_xangle( (int)( &region->origin->v.p ), &region->v1->v.p );
    point_xangle( (int)( &region->origin->v.p ), (int)( &region->v2->v.p ) );
    if ( 0.000000000000 < 0.000000000000 )
    {
      return 0;
    }
    return 0;
  }
}
B5:;
  g_assertion_message_expr( 0, "../../src/toporouter.c", 2777, __PRETTY_FUNCTION__, "region-&gt;v2 != NULL" );
  g_assertion_message_expr( 0, "../../src/toporouter.c", 2778, __PRETTY_FUNCTION__, "region-&gt;origin != NULL" );
}
}
gdouble edge_capacity( toporouter_edge_t *e )
{
  gts_point_distance( &e->e.segment.v1->p, &e->e.segment.v2->p );
  return 0;
}
gdouble edge_flow( toporouter_edge_t *e, toporouter_vertex_t *v1, toporouter_vertex_t *v2, toporouter_vertex_t *dest )
{
  int eax;
  int edx;
  double fp2;
  double fp6;
#error unstructured control flow
}
void print_path( GList *path )
{
  GList *i;
  __printf_chk( 1, "PATH:\n" );
  if ( path )
  {
    i = path;
  {
    do
    {
      toporouter_vertex_t *v = &i->data[0];
      print_vertex( &i->data[0] );
      if ( v->child && g_list_find( path, &v->child ) == 0 )
        __printf_chk( 1, "\t CHILD NOT IN LIST\n" );
      if ( v->parent && g_list_find( path, &v->parent ) == 0 )
        __printf_chk( 1, "\t parent NOT IN LIST\n" );
      i = i->next;
    }
    while ( i->next == 0 );
  }
  }
  return;
}
GList *split_path( GList *path )
{
  int edx;
  double fp7;
  /* phantom */ toporouter_vertex_t *pv;
  GList *curpath = 0, *i, *paths = 0;
  if ( path )
  {
    toporouter_vertex_t *v = &path->data[0];
    curpath = 0;
    paths = 0;
    while ( i->next == 0 )
    {
      v = &i->data[0];
      if ( v->v.p.object.klass->info.name[0] && v->v.p.x == v->v.p.x && v->v.p.y == v->v.p.y )
      {
        if ( g_list_length( curpath ) > 1 )
        {
          paths = g_list_prepend( paths, &curpath );
        }
        v->child = 0;
        curpath = 0;
        v = &v->v.p.object.klass->info.name[0];
        v->parent = 0;
      }
      else
      {
      }
    }
  }
  if ( g_list_length( curpath ) > 1 )
  {
    paths = g_list_prepend( paths, &curpath );
  }
  return paths;
}
gint routing_edge_insert( gconstpointer a, gconstpointer b, gpointer user_data )
{
  int eax;
  int esi;
  double fp1;
  double fp3;
  GtsPoint *v1 = &user_data[3];
  gts_point_distance2( &user_data[3], &a[0] );
  gts_point_distance2( v1, &b[0] );
  if ( 0.000000000000 < 0.000000000000 - 0.000099999997 )
  {
  }
  gts_point_distance2( v1, &a[0] );
  gts_point_distance2( v1, &b[0] );
  return 0.000000000000 < 0.000099999997;
}
void print_edge( toporouter_edge_t *e )
{
  GList *i;
  if ( toporouter_constraint_class( ) == 0 )
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  else
  if ( e )
  {
    if ( e == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    }
    else
    do
    {
    }
    while ( e[2].e.segment.object.klass != toporouter_constraint_class( ) && e[2].e.segment.object.klass->parent_class );
  }
  i = e->routing;
  __printf_chk( 1, "EDGE:\n" );
  print_vertex( &e->e.segment.v1->p.object.klass->info.name[0] );
  if ( i == 0 )
  {
    e = &e->e.segment.v2->p.object.klass->info.name[0];
  }
{
  do
  {
    /* phantom */ toporouter_vertex_t *v;
    print_vertex( &i->data[0] );
  }
  while ( i->next == 0 );
  e = &e->e.segment.v2->p.object.klass->info.name[0];
}
}
toporouter_vertex_t *new_temp_toporoutervertex( gdouble x, gdouble y, toporouter_edge_t *e )
{
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ GtsVertexClass *vertex_class;
  GList *i;
  toporouter_vertex_t *r;
  if ( toporouter_constraint_class( ) == 0 )
  {
  }
  else
  if ( e )
  {
    if ( e == 0 )
    {
    }
    else
    {
      do
      {
      }
      while ( e[2].e.segment.object.klass != toporouter_constraint_class( ) && e[2].e.segment.object.klass->parent_class );
      i = e->routing;
      if ( e->routing )
      {
        do
        {
          r = &i->data[0];
          if ( r->v.p.x < r->v.p.x )
          {
            if ( r->v.p.x < fp7 + 0.000099999997 )
            {
              if ( fp6 - 0.000099999997 < r->v.p.y )
              {
                if ( r->v.p.y < fp6 + 0.000099999997 && (int)r->flags/*.1_1of4*/ < 0 )
                {
                  break;
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
          i = i->next;
        }
        while ( i->next );
      }
      *(int*)gts_vertex_new( (GtsVertexClass*)toporouter_vertex_class( ), x, y, e->e.segment.v1->p.z )/*.56*/ |= 128;
      r = (toporouter_vertex_t*)gts_vertex_new( (GtsVertexClass*)toporouter_vertex_class( ), x, y, e->e.segment.v1->p.z );
      *(int*)gts_vertex_new( (GtsVertexClass*)toporouter_vertex_class( ), x, y, e->e.segment.v1->p.z )/*.52*/ = e[0].e.segment.object.klass[0].info.name[0];
      if ( toporouter_constraint_class( ) == 0 )
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      else
      if ( e == 0 )
      {
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
      }
      else
      do
      {
        if ( e[2].e.segment.object.klass == toporouter_constraint_class( ) )
        {
          if ( toporouter_constraint_class( ) == 0 )
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
            e->routing = g_list_insert_sorted_with_data( e->routing, &r, &routing_edge_insert, &e );
            break;
          else
          if ( e == 0 )
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
          else
          do
          {
          }
          while ( e[2].e.segment.object.klass != toporouter_constraint_class( ) && e[2].e.segment.object.klass->parent_class );
        }
        else
      }
      while ( e[2].e.segment.object.klass->parent_class );
      if ( toporouter_constraint_class( ) == 0 )
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      else
      {
        if ( e == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
        else
        {
          do
          {
          }
          while ( e[2].e.segment.object.klass != toporouter_constraint_class( ) && e[2].e.segment.object.klass->parent_class );
        }
      }
    }
  }
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, (int)( &(char*)x & 0xFFFFFFFF ) );
}
toporouter_vertex_t *new_temp_toporoutervertex_in_segment( toporouter_edge_t *e, toporouter_vertex_t *v, gdouble r, toporouter_vertex_t *ref )
{
  int eax;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble m;
  toporouter_spoint_t p;
  toporouter_spoint_t np1;
  toporouter_spoint_t np2;
  toporouter_vertex_t *rval = v;
  p.x = v->v.p.x;
  p.y = rval->v.p.y;
  rval = &p.x;
  vertices_on_line( &p, r, r, &np1, &np2 );
  if ( ( ( np1.y - ref->v.p.y ) * ( np1.y - ref->v.p.y ) ) + ( ( np1.x - ref->v.p.x ) * ( np1.x - ref->v.p.x ) ) < ( np2.y * np2.y ) + ( ( np2.x - ref->v.p.x ) * ( np2.x - ref->v.p.x ) ) )
  {
    return new_temp_toporoutervertex( np1.x, np1.y, e );
  }
  return new_temp_toporoutervertex( np2.x, np2.y, e );
}
gint vertex_keepout_test( toporouter_t *r, toporouter_vertex_t *v )
{
  double fp7;
  if ( r->keepoutlayers == 0 )
  {
    return 0;
  }
  if ( v->v.p.z == *(double*)(*(int*)(r->keepoutlayers)) )
  {
  }
  else
  do
  {
    if ( r->keepoutlayers->next == 0 )
    {
      break;
    }
    else
  }
  while ( v->v.p.z != *(double*)(*(int*)(r->keepoutlayers)) || v->v.p.z != *(double*)(*(int*)(r->keepoutlayers)) );
  return 1;
  return 0;
}
void closest_cluster_pair( toporouter_t *r, GList *src_vertices, GList *dest_vertices, toporouter_vertex_t **a, toporouter_vertex_t **b )
{
  int ecx;
  int edx;
  double fp0;
  double fp6;
  double fp7;
#error unstructured control flow
}
toporouter_vertex_t *closest_dest_vertex( toporouter_t *r, toporouter_vertex_t *v, toporouter_route_t *routedata )
{
  int eax;
  double fp0;
  double fp6;
  double fp7;
  GList *i = &routedata->destvertices;
  toporouter_vertex_t *closest = 0;
  gdouble closest_distance;
  if ( routedata->destvertices )
  {
    do
    {
      cv = &i->data[0];
      if ( v->v.p.z == cv->v.p.z )
      {
        if ( closest )
        {
          simple_h_cost( r, v, cv );
          if ( ( r->flags/*.2_2of4*/ & 1 ) & 255 )
          {
          {
            gdouble tempd;
            if ( 0.000000000000 < 0.000000000000 )
            {
              closest = cv;
            }
            else
            {
            }
          }
          }
          if ( 0.000000000000 < 0.000000000000 )
          {
            closest = cv;
          }
          else
          {
            i = i->next;
            if ( i->next )
              continue;
            else
            {
              break;
            }
          }
        }
        else
        {
          simple_h_cost( r, v, cv );
          closest = cv;
        }
      }
      i = i->next;
    }
    while ( i->next );
  }
  return closest;
}
gdouble triangle_interior_capacity( GtsTriangle *t, toporouter_vertex_t *v )
{
  int edx;
  double fp0;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ toporouter_edge_t *e;
  gdouble x;
  gdouble y;
  gdouble m1;
  gdouble m2;
  gdouble c2;
  gdouble c1;
  /* phantom */ gdouble len;
{
  /* phantom */ int _g_boolean_var_;
  if ( gts_triangle_edge_opposite( t, (int)( &v->v ) ) == 0 )
    g_assertion_message_expr( 0, "../../src/toporouter.c", 3102, __PRETTY_FUNCTION__, "e" );
  else
  {
    y = *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 20);
    if ( *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 12) != *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 12) )
      c1 = 0.000000000000;
    else
    if ( !0 )
      m2 = 0.000000000000;
      if ( __isinf( (int)( (float)m2 ) ) )
        c2 = v->v.p.x;
      else
        c2 = v->v.p.y - ( v->v.p.x * m2 );
      c1 = 0.000000000000;
      if ( edx )
      {
      }
      else
      {
        y = c2 + ( m2 * ( ( (unsigned int)c2 + 0 ) / ( c1 - m2 ) ) );
      }
      gts_point_distance2( *(int*)(GtsPoint*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/, *(int*)(GtsPoint*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ );
      if ( *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 12) - 0.000099999997 < v->v.p.x )
      {
        if ( 0.000099999997 + *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 12) <= 0.000099999997 )
        {
        }
        else
        {
          x = 0.000000000000;
          if ( *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 20) - 0.000099999997 < 0.000000000000 )
          {
            if ( x < 0.000099999997 + c1 )
            {
              return 1;
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
      if ( *(double*)(*(int*)(ebx + 16) + 12) - 0.000099999997 < fp7 )
      {
        if ( fp6 + c1 <= fp7 )
        {
        }
        else
        {
          m1 = 0.000000000000;
          if ( *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 20) - c1 < 0.000000000000 )
          {
            c1 = m1;
            if ( m1 < x + c1 )
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
      if ( fp7 <= fp6 < fp0 ? fp6 : fp0 )
      {
        if ( *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 12) <= *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 12) ? *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 12) : *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 12) <= *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 12) <= *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 12) ? *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 12) : *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 12) )
        {
          c1 = y;
          if ( y <= *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 20) < *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 20) ? *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 20) : *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 20) )
          {
            if ( c1 <= *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 20) ? c1 : *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 20) <= c1 )
            {
              if ( sqrt( ( ( v->v.p.x - ( *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 12) <= *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 12) ? *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 12) : *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 12) ) ) * ( v->v.p.x - ( *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 12) <= *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 12) ? *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 12) : *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 12) ) ) ) + ( ( v->v.p.y - c1 ) * ( v->v.p.y - c1 ) ) ) == sqrt( ( ( v->v.p.x - ( *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 12) <= *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 12) ? *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 12) : *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 12) ) ) * ( v->v.p.x - ( *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 12) <= *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 12) ? *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.12*/ + 12) : *(double*)(*(int*)gts_triangle_edge_opposite( t, (int)( &v->v ) )/*.16*/ + 12) ) ) ) + ( ( v->v.p.y - c1 ) * ( v->v.p.y - c1 ) ) ) )
              {
                if ( sqrt( ( ( v->v.p.x - fp0 ) * ( v->v.p.x - fp0 ) ) + ( ( v->v.p.y - fp7 ) * ( v->v.p.y - fp7 ) ) ) != sqrt( ( ( v->v.p.x - fp0 ) * ( v->v.p.x - fp0 ) ) + ( ( v->v.p.y - fp7 ) * ( v->v.p.y - fp7 ) ) ) )
                {
                }
                else
                {
                  return 1;
                }
              }
              else
              {
              }
              sqrt( fp0 );
              return 1;
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
    else
      c1 = 0.000000000000;
    if ( ( c1 - y ) / 0.000000000000 <= 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 )
      m2 = -1.000000000000 / ( ( c1 - y ) / 0.000000000000 );
  }
  m2 = 0.000000000000;
}
}
gdouble flow_from_edge_to_edge( GtsTriangle *t, toporouter_edge_t *e1, toporouter_edge_t *e2, toporouter_vertex_t *common_v, toporouter_vertex_t *curpoint )
{
  int eax;
  int edx;
  double fp1;
  double fp2;
  double fp3;
#error unstructured control flow
}
guint check_triangle_interior_capacity( GtsTriangle *t, toporouter_vertex_t *v, toporouter_vertex_t *curpoint, toporouter_edge_t *op_edge, toporouter_edge_t *adj_edge1, toporouter_edge_t *adj_edge2 )
{
  int eax;
  double fp1;
  gdouble ic;
  gdouble flow;
  triangle_interior_capacity( t, v );
  ic = 0.000000000000;
  flow_from_edge_to_edge( t, adj_edge1, adj_edge2, v, curpoint );
  flow = 0.000000000000;
  if ( toporouter_constraint_class( ) == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
  else
  if ( adj_edge1 )
  {
    if ( adj_edge1 == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    }
    else
    do
    {
      if ( adj_edge1[2].e.segment.object.klass == toporouter_constraint_class( ) )
      {
        break;
      }
    }
    while ( adj_edge1[2].e.segment.object.klass->parent_class );
  }
  if ( toporouter_constraint_class( ) == 0 )
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  else
  if ( adj_edge2 )
  {
    if ( adj_edge2 == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    }
    else
    do
    {
      if ( adj_edge2[2].e.segment.object.klass == toporouter_constraint_class( ) )
      {
        break;
      }
    }
    while ( adj_edge2[2].e.segment.object.klass->parent_class );
  }
  return flow <= ic;
}
toporouter_vertex_t *edge_routing_next_not_temp( toporouter_edge_t *e, GList *list )
{
  if ( toporouter_constraint_class( ) == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
  else
  if ( e )
  {
    if ( e == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    }
    else
    do
    {
      if ( e[2].e.segment.object.klass == toporouter_constraint_class( ) )
      {
        break;
      }
    }
    while ( e[2].e.segment.object.klass->parent_class );
  }
  while ( list )
  {
    toporouter_vertex_t *v = &list->data[0];
    if ( (int)v->flags/*.1_1of4*/ < 0 )
    {
      list = list->next;
    }
    else
      break;
  }
  return &list->data[0];
}
toporouter_vertex_t *edge_routing_prev_not_temp( toporouter_edge_t *e, GList *list )
{
  if ( toporouter_constraint_class( ) == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
  else
  if ( e )
  {
    if ( e == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    }
    else
    do
    {
      if ( e[2].e.segment.object.klass == toporouter_constraint_class( ) )
      {
        break;
      }
    }
    while ( e[2].e.segment.object.klass->parent_class );
  }
  while ( list )
  {
    toporouter_vertex_t *v = &list->data[0];
    if ( (int)v->flags/*.1_1of4*/ < 0 )
    {
      list = list->prev;
    }
    else
      break;
  }
  return &list->data[0];
}
void edge_adjacent_vertices( toporouter_edge_t *e, toporouter_vertex_t *v, toporouter_vertex_t **v1, toporouter_vertex_t **v2 )
{
  int eax;
  int edx;
  GList *r;
  if ( toporouter_constraint_class( ) == 0 )
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  else
  if ( e )
  {
    if ( e == 0 )
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    else
    do
    {
    }
    while ( e[2].e.segment.object.klass != toporouter_constraint_class( ) && e[2].e.segment.object.klass->parent_class );
  }
  r = g_list_find( e->routing, &v );
  if ( e->e.segment.v1 == v )
  {
    v1[0] = 0;
    gts_object_is_from_class( &e, toporouter_constraint_class( ) );
    v2[0] = edge_routing_next_not_temp( e, e->routing );
  }
  else
  if ( e->e.segment.v2 == v )
  {
    if ( toporouter_constraint_class( ) == 0 )
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    else
    if ( e == 0 )
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    else
    do
    {
    }
    while ( e[2].e.segment.object.klass != toporouter_constraint_class( ) && e[2].e.segment.object.klass->parent_class );
    v1[0] = edge_routing_prev_not_temp( e, g_list_last( e->routing ) );
    v2[0] = 0;
    return;
  }
  else
  {
    v1[0] = edge_routing_prev_not_temp( e, g_list_find( e->routing, &v ) );
    v2[0] = edge_routing_next_not_temp( e, r );
  }
  return;
}
GList *candidate_vertices( toporouter_vertex_t *v1, toporouter_vertex_t *v2, toporouter_vertex_t *dest, toporouter_edge_t *e )
{
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp7;
  gdouble totald;
  gdouble v1ms;
  gdouble v2ms;
  gdouble flow;
  gdouble capacity;
  gdouble ms;
  GList *vs;
{
  /* phantom */ int _g_boolean_var_;
  if ( v1 == 0 )
    goto B3;
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( v2 == 0 )
    g_assertion_message_expr( 0, "../../src/toporouter.c", 3340, __PRETTY_FUNCTION__, "v2" );
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    edge_flow( e, v1, v2, dest );
    flow = 0.000000000000;
    vs = 0;
    edge_capacity( e );
    v1ms = 0.000000000000;
    if ( flow <= 0.000000000000 )
    {
      return vs;
    }
    if ( totald < ( 0.000000000000 <= 0.000000000000 ? 0.000000000000 : 0.000000000000 ) + ( 0.000000000000 <= 0.000000000000 ? 0.000000000000 : 0.000000000000 ) + ( ( 0.000000000000 + 0.000000000000 ) * 0.500000000000 ) + ( ( 0.000000000000 + 0.000000000000 ) * 0.500000000000 ) + ( 0.000000000000 <= 0.000000000000 ? 0.000000000000 : 0.000000000000 ) + ( ( 0.000000000000 + 0.000000000000 ) * 0.500000000000 ) )
    {
      v1ms = ms = ( 0.000000000000 <= 0.000000000000 ? 0.000000000000 : 0.000000000000 ) + ( ( 0.000000000000 + 0.000000000000 ) * 0.500000000000 );
    {
      gdouble x0;
      gdouble y0;
      gdouble x1;
      gdouble y1;
      /* phantom */ gdouble d;
      vertex_move_towards_vertex_values( &v1[0].v, &v2[0].v, 0.000000000000, &x0, &y0 );
      vs = g_list_prepend( 0, new_temp_toporoutervertex( x0, y0, e ) );
      vertex_move_towards_vertex_values( &v2[0].v, &v1[0].v, capacity, &y1 );
      vs = g_list_prepend( vs, new_temp_toporoutervertex( x1, y1, e ) );
      v2ms = sqrt( ( ( x0 - x1 ) * ( x0 - x1 ) ) + ( ( y0 - y1 ) * ( y0 - y1 ) ) );
      if ( sqrt( ( ( x0 - x1 ) * ( x0 - x1 ) ) + ( ( y0 - y1 ) * ( y0 - y1 ) ) ) == sqrt( ( ( x0 - x1 ) * ( x0 - x1 ) ) + ( ( y0 - y1 ) * ( y0 - y1 ) ) ) )
      {
        if ( 1 )
        {
          capacity = 0.000000000000;
          if ( 0.000000000000 < 0.000000000000 )
          {
            /* phantom */ gdouble dif;
            gdouble x;
            gdouble y;
            coord_move_towards_coord_values( x0, y0, x1, y1, capacity * 0.500000000000, &x, &y );
            vs = g_list_prepend( vs, new_temp_toporoutervertex( x, y, e ) );
            return vs;
          }
          return vs;
        }
        else
        {
        }
      }
      else
      {
      }
      if ( capacity < capacity )
      {
        /* phantom */ gdouble dif;
        gdouble x;
        gdouble y;
        coord_move_towards_coord_values( x0, y0, x1, y1, capacity * 0.500000000000, &x, &y );
        vs = g_list_prepend( vs, new_temp_toporoutervertex( x, y, e ) );
        return vs;
      }
      return vs;
    }
    }
    else
    {
      vs = g_list_prepend( 0, new_temp_toporoutervertex( v1ms * ( v2->v.p.x + v1->v.p.x ), v1ms * ( v2->v.p.y + v1->v.p.y ), e ) );
      return vs;
    }
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( dest == 0 )
  {
    g_assertion_message_expr( 0, "../../src/toporouter.c", 3341, __PRETTY_FUNCTION__, "dest" );
  }
  else
  {
    /* phantom */ int _g_boolean_var_;
    if ( (int)v1->flags/*.1_1of4*/ < 0 )
    {
      g_assertion_message_expr( 0, "../../src/toporouter.c", 3343, __PRETTY_FUNCTION__, "!(v1-&gt;flags & VERTEX_FLAG_TEMP)" );
    }
    else
  {
    /* phantom */ int _g_boolean_var_;
    if ( (int)v2->flags/*.1_1of4*/ < 0 )
      goto B11;
    else
    {
      gts_point_distance( &v1[0].v.p, &v2[0].v.p );
      totald = 0.000000000000;
      vertex_net_thickness( v1 );
      vertex_net_thickness( dest );
      vertex_net_keepaway( v1 );
      vertex_net_keepaway( dest );
      vertex_net_thickness( v2 );
      vertex_net_thickness( dest );
      vertex_net_keepaway( v2 );
      vertex_net_keepaway( dest );
      vertex_net_thickness( dest );
      vertex_net_thickness( dest );
      vertex_net_keepaway( dest );
      vertex_net_keepaway( dest );
      if ( toporouter_constraint_class( ) == 0 )
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      else
      {
        if ( e )
        {
          if ( e->e.segment.object.klass->info.name[0] == 0 )
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
          else
          {
            do
            {
              if ( e->_toporouter_edge_t == toporouter_constraint_class( ) )
                flow = 0.000000000000;
                vs = 0;
                edge_capacity( e );
                v1ms = 0.000000000000;
              else
              {
              }
            }
            while ( e->_toporouter_edge_t );
          }
        }
      }
    }
  }
B11:;
    g_assertion_message_expr( 0, "../../src/toporouter.c", 3344, __PRETTY_FUNCTION__, "!(v2-&gt;flags & VERTEX_FLAG_TEMP)" );
    capacity = 0.000000000000;
  {
    gdouble x0;
    gdouble y0;
    gdouble x1;
    gdouble y1;
    /* phantom */ gdouble d;
    vertex_move_towards_vertex_values( &v1[0].v, &v2[0].v, 0.000000000000, &x0, &y0 );
    vs = g_list_prepend( 0, new_temp_toporoutervertex( x0, y0, e ) );
    vertex_move_towards_vertex_values( &v2[0].v, &v1[0].v, capacity, &y1 );
    vs = g_list_prepend( vs, new_temp_toporoutervertex( x1, y1, e ) );
    v2ms = sqrt( ( ( x0 - x1 ) * ( x0 - x1 ) ) + ( ( y0 - y1 ) * ( y0 - y1 ) ) );
  }
  }
}
}
B3:;
  g_assertion_message_expr( 0, "../../src/toporouter.c", 3339, __PRETTY_FUNCTION__, "v1" );
  g_assertion_message_expr( 0, "../../src/toporouter.c", 3340, __PRETTY_FUNCTION__, "v2" );
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
}
}
GList *edge_routing_first_not_temp( toporouter_edge_t *e )
{
  int eax;
  GList *i;
  /* phantom */ toporouter_vertex_t *v;
  if ( toporouter_constraint_class( ) == 0 )
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  else
  if ( e )
  {
    if ( e == 0 )
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    else
    do
    {
    }
    while ( e[2].e.segment.object.klass != toporouter_constraint_class( ) && e[2].e.segment.object.klass->parent_class );
  }
  i = e->routing;
  for ( ; i && *(char*)(i[4].prev) < 0;  )
  {
    i = i->next;
  }
  return i->next;
}
GList *edge_routing_last_not_temp( toporouter_edge_t *e )
{
  int eax;
  GList *i, *last;
  /* phantom */ toporouter_vertex_t *v;
  if ( toporouter_constraint_class( ) == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
  else
  if ( e )
  {
    if ( e == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    }
    else
    do
    {
    }
    while ( e[2].e.segment.object.klass != toporouter_constraint_class( ) && e[2].e.segment.object.klass->parent_class );
  }
  while ( 1 )
    break;
}
void delete_vertex( toporouter_vertex_t *v )
{
  if ( v->flags/*.1_1of4*/ < 0 )
  {
    if ( v->routingedge )
    {
      if ( toporouter_constraint_class( ) )
      {
        if ( v->routingedge )
        {
          if ( v->routingedge->e.segment.object.klass->info.name[0] == 0 )
          {
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
          }
          else
          do
          {
          }
          while ( v->routingedge->_toporouter_edge_t != toporouter_constraint_class( ) && v->routingedge->_toporouter_edge_t );
        }
      }
      else
      {
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      }
      v->routingedge->routing = g_list_remove( &v->routingedge->routing, &v );
    }
  }
  else
  {
    return;
  }
}
GList *triangle_candidate_points_from_vertex( GtsTriangle *t, toporouter_vertex_t *v, toporouter_vertex_t *dest, toporouter_route_t *routedata )
{
  int eax;
  int ecx;
  int edx;
  toporouter_edge_t *op_e = (toporouter_edge_t*)gts_triangle_edge_opposite( t, (int)( &v->v ) );
  toporouter_vertex_t *vv1, *vv2, *constraintv;
  /* phantom */ toporouter_edge_t *e1, *e2;
  GList *i;
  GList *rval = (GList*)gts_vertices_are_connected( (int)( &v->v ), op_e->e.segment.v2 );
  if ( toporouter_constraint_class( ) == 0 )
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  else
  if ( op_e == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
  }
  else
  do
  {
    if ( op_e[2].e.segment.object.klass == toporouter_constraint_class( ) )
    {
      if ( op_e->flags == 7 )
        break;
      if ( edx == eax )
      {
        gts_point_distance( (int)( &op_e->e.segment.v1->p ), (int)( &op_e->e.segment.v2->p ) );
        constraintv = new_temp_toporoutervertex_in_segment( op_e, &op_e->e.segment.v1->p.object.klass->info.name[0], 0.000000000000, &op_e->e.segment.v2->p.object.klass->info.name[0] );
        if ( toporouter_edge_class( ) == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        else
        if ( op_e == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
        else
        do
        {
          if ( op_e[2].e.segment.object.klass == toporouter_edge_class( ) )
          {
            if ( ( ( op_e->flags/*.1_1of4*/ & 1 ) & 255 ) == 0 )
              break;
            else
            {
              if ( constraintv == 0 )
              {
                g_list_free( 0 );
                return 0;
              }
              g_hash_table_insert( &routedata->alltemppoints, &constraintv, &constraintv );
              g_list_free( 0 );
              return 0;
            }
          }
          else
        }
        while ( op_e[2].e.segment.object.klass->parent_class );
        if ( v == *(int*)gts_vertices_are_connected( (int)( &v->v ), op_e->e.segment.v1 )/*.12*/ )
        {
          edge_routing_first_not_temp( &edi );
        }
        else
          edge_routing_last_not_temp( (toporouter_edge_t*)gts_vertices_are_connected( (int)( &v->v ), op_e->e.segment.v1 ) );
        if ( i )
        {
          toporouter_vertex_t *temp = temp;
          vv1 = &temp->parent;
          if ( temp->parent != op_e->e.segment.v2 && vv1->child != op_e->e.segment.v2 && ( op_e == vv1->routingedge || op_e == temp->child ) )
            goto B48;
        }
        else
          vv1 = &op_e->e.segment.v1->p.object.klass->info.name[0];
B48:;
        if ( i )
        {
          toporouter_vertex_t *temp = temp;
          vv2 = &temp->parent;
          if ( temp->parent != op_e->e.segment.v1 && vv2->child != op_e->e.segment.v1 && ( op_e == vv2->routingedge || op_e == temp->child ) )
            goto B60;
        }
        else
          vv2 = &op_e->e.segment.v2->p.object.klass->info.name[0];
B60:;
        if ( constraintv )
        {
          t = 0;
          v = constraintv;
        }
        gts_object_is_from_class( &op_e, toporouter_constraint_class( ) );
        i = op_e->routing;
        rval = 0;
        if ( op_e->routing )
        {
          constraintv = &op_e[0].e.segment.object.klass[0].info.name[0];
          do
          {
            temp = &i->data[0];
            if ( temp->parent == v || temp->child == v )
            {
              rval = g_list_concat( rval, candidate_vertices( vv1, temp, dest, &constraintv->v.p.object.klass->info.name[0] ) );
              vv1 = temp;
            }
          {
            toporouter_vertex_t *temp;
            i = i->next;
          }
          }
          while ( i->next );
          op_e = &constraintv->v.p.object.klass->info.name[0];
          vv1 = temp;
        }
        else
          rval = &constraintv->v.p.object.klass->info.name[0];
        t = &rval->data[0];
        v = (toporouter_vertex_t*)candidate_vertices( vv1, vv2, dest, op_e );
      }
    }
    else
    {
    }
  }
  while ( op_e[2].e.segment.object.klass->parent_class );
  constraintv = 0;
}
void routedata_insert_temppoints( toporouter_route_t *data, GList *temppoints )
{
  GList *j;
  if ( temppoints )
  {
    do
    {
      g_hash_table_insert( (int)( &data->alltemppoints ), &j, &j );
    }
    while ( j->next == 0 );
  }
  return;
}
GList *all_candidates_on_edge( toporouter_edge_t *e, toporouter_route_t *routedata )
{
  int eax;
  int ecx;
  double fp6;
  double fp7;
  GList *rval;
  if ( toporouter_edge_class( ) == 0 )
  {
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
      if ( e[2].e.segment.object.klass == toporouter_edge_class( ) )
      {
        if ( ( ( e->flags/*.1_1of4*/ & 1 ) & 255 ) == 0 )
          break;
        else
          break;
      }
      else
    }
    while ( e[2].e.segment.object.klass->parent_class );
  }
  if ( toporouter_constraint_class( ) == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
  else
  if ( e )
  {
    if ( e == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    }
    else
    do
    {
      if ( e[2].e.segment.object.klass == toporouter_constraint_class( ) )
      {
        if ( e->flags != 7 && e->flags && e->flags == routedata->src->netlist && ( e->flags == routedata->dest->c || *(int*)(routedata->src) == e->flags ) )
        {
          toporouter_vertex_t *consv;
          if ( sqrt( ( ( e->e.segment.v1->p.x - e->e.segment.v2->p.x ) * ( e->e.segment.v1->p.x - e->e.segment.v2->p.x ) ) + ( ( e->e.segment.v1->p.y - e->e.segment.v2->p.y ) * ( e->e.segment.v1->p.y - e->e.segment.v2->p.y ) ) ) == sqrt( ( ( e->e.segment.v1->p.x - e->e.segment.v2->p.x ) * ( e->e.segment.v1->p.x - e->e.segment.v2->p.x ) ) + ( ( e->e.segment.v1->p.y - e->e.segment.v2->p.y ) * ( e->e.segment.v1->p.y - e->e.segment.v2->p.y ) ) ) )
          {
            if ( sqrt( ( ( e->e.segment.v1->p.x - e->e.segment.v2->p.x ) * ( e->e.segment.v1->p.x - e->e.segment.v2->p.x ) ) + ( ( e->e.segment.v1->p.y - e->e.segment.v2->p.y ) * ( e->e.segment.v1->p.y - e->e.segment.v2->p.y ) ) ) != sqrt( ( ( e->e.segment.v1->p.x - e->e.segment.v2->p.x ) * ( e->e.segment.v1->p.x - e->e.segment.v2->p.x ) ) + ( ( e->e.segment.v1->p.y - e->e.segment.v2->p.y ) * ( e->e.segment.v1->p.y - e->e.segment.v2->p.y ) ) ) )
            {
            }
            else
            {
              e = 0;
              routedata = (toporouter_route_t*)new_temp_toporoutervertex_in_segment( e, &e->e.segment.v1->p.object.klass->info.name[0], 0.000000000000 * 0.500000000000, &e->e.segment.v2->p.object.klass->info.name[0] );
            }
          }
          else
          {
          }
          sqrt( ( ( e->e.segment.v1->p.x - e->e.segment.v2->p.x ) * ( e->e.segment.v1->p.x - e->e.segment.v2->p.x ) ) + ( ( e->e.segment.v1->p.y - e->e.segment.v2->p.y ) * ( e->e.segment.v1->p.y - e->e.segment.v2->p.y ) ) );
          e = 0;
          routedata = (toporouter_route_t*)new_temp_toporoutervertex_in_segment( e, &e->e.segment.v1->p.object.klass->info.name[0], 0.000000000000 * 0.500000000000, &e->e.segment.v2->p.object.klass->info.name[0] );
        }
        else
          break;
      }
      else
      {
      }
    }
    while ( e[2].e.segment.object.klass->parent_class );
  }
{
  GList *i;
  toporouter_vertex_t *pv;
  if ( toporouter_constraint_class( ) == 0 )
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  else
  if ( e )
  {
    if ( e == 0 )
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    else
    do
    {
    }
    while ( e[2].e.segment.object.klass != toporouter_constraint_class( ) && e[2].e.segment.object.klass->parent_class );
  }
  i = e->routing;
  rval = 0;
  pv = &e->e.segment.v1->p.object.klass->info.name[0];
  if ( e->routing )
  {
    do
    {
      v = &i->data[0];
      if ( (int)v->flags/*.1_1of4*/ >= 0 )
      {
        i = i->next;
        rval = &pv[0].v.p.object.klass[0].info.name[0];
        pv = v;
      }
      else
      {
        toporouter_vertex_t *v;
        i = i->next;
        if ( i->next )
          continue;
        else
          break;
      }
    }
    while ( i->next );
    e = e;
  }
  e = &rval[0].data[0];
  routedata = (toporouter_route_t*)candidate_vertices( pv, &e->e.segment.v2->p.object.klass->info.name[0], &routedata->destvertices->data[0], e );
}
}
GList *triangle_all_candidate_points_from_vertex( GtsTriangle *t, toporouter_vertex_t *v, toporouter_route_t *routedata )
{
  /* phantom */ toporouter_edge_t *op_e;
  v = &routedata->netlist->clusters->pdata[0][0];
  t = (GtsTriangle*)gts_triangle_edge_opposite( t, (int)( &v->v ) );
}
GList *triangle_all_candidate_points_from_edge( toporouter_t *r, GtsTriangle *t, toporouter_edge_t *e, toporouter_route_t *routedata, toporouter_vertex_t **dest, toporouter_vertex_t *curpoint )
{
  int eax;
  int edx;
  /* phantom */ toporouter_vertex_t *op_v;
  toporouter_edge_t *e1, *e2;
  GList *i, *rval, *rval2;
  toporouter_vertex_t *boxpoint;
  guint e1intcap;
  guint e2intcap;
  if ( g_list_find( &routedata->destvertices, gts_triangle_vertex_opposite( t, (int)( &e->e ) ) ) )
  {
    dest[0] = (toporouter_vertex_t*)gts_triangle_vertex_opposite( t, (int)( &e->e ) );
    return g_list_prepend( 0, gts_triangle_vertex_opposite( t, (int)( &e->e ) ) );
  }
  if ( g_list_find( &routedata->destvertices, &boxpoint ) )
  {
    rval = 0;
    dest[0] = boxpoint;
  }
  else
  {
    rval = 0;
    if ( g_list_find( &routedata->srcvertices, gts_triangle_vertex_opposite( t, (int)( &e->e ) ) ) )
    {
      rval = g_list_prepend( 0, gts_triangle_vertex_opposite( t, (int)( &e->e ) ) );
    }
  }
  e1 = (toporouter_edge_t*)gts_vertices_are_connected( gts_triangle_vertex_opposite( t, (int)( &e->e ) ), e->e.segment.v1 );
  e2 = (toporouter_edge_t*)gts_vertices_are_connected( gts_triangle_vertex_opposite( t, (int)( &e->e ) ), e->e.segment.v2 );
  rval = g_list_concat( rval, all_candidates_on_edge( e1, routedata ) );
  e1intcap = check_triangle_interior_capacity( t, &e->e.segment.v1->p.object.klass->info.name[0], curpoint, e2, e, e1 );
  i = ebp_32;
  rval2 = 0;
  e2intcap = check_triangle_interior_capacity( t, &e->e.segment.v2->p.object.klass->info.name[0], curpoint, e1, e, e2 );
  if ( ebp_32 == 0 )
    rval2 = &i->data[0];
  else
  {
    do
    {
      toporouter_vertex_t *v = &i->data[0];
      if ( v->routingedge )
      {
        if ( v->routingedge == e1 )
        {
          if ( toporouter_constraint_class( ) == 0 )
          {
          }
          else
          if ( e1 == 0 )
          {
          }
          else
          {
            do
            {
              if ( e1[2].e.segment.object.klass == toporouter_constraint_class( ) )
              {
              }
              else
              {
              }
            }
            while ( e1[2].e.segment.object.klass->parent_class );
            if ( e1intcap == 0 )
            {
            }
          }
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, ebp_80 );
        }
        if ( v->routingedge == e2 )
        {
          if ( toporouter_constraint_class( ) == 0 )
          {
          }
          else
          if ( e2 )
          {
            if ( e2 == 0 )
            {
            }
            else
            {
              do
              {
                if ( e2[2].e.segment.object.klass == toporouter_constraint_class( ) )
                  goto B26;
                else
                {
                }
              }
              while ( e2[2].e.segment.object.klass->parent_class );
              if ( e2intcap )
              {
              }
              else
              {
                i = i->next;
              }
            }
          }
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, ebp_80 );
          e2 = e2;
        }
      }
B26:;
      rval2 = g_list_prepend( rval2, &v );
    }
    while ( i->next );
  }
  *ebp_88 = ebp_32;
  g_list_free( ebp_32 );
  rval = rval2;
  return rval2;
}
// Lost vars at line 3808 through condition folding
GList *triangle_candidate_points_from_edge( toporouter_t *r, GtsTriangle *t, toporouter_edge_t *e, toporouter_vertex_t *v, toporouter_vertex_t **dest, toporouter_route_t *routedata )
{
  int eax;
  int ecx;
  int edx;
  toporouter_vertex_t *v1, *v2, *op_v, *vv, *e1constraintv, *e2constraintv;
  /* phantom */ toporouter_edge_t *e1, *e2;
  GList *e1cands, *e2cands, *rval;
  guint noe1;
  guint noe2;
{
  /* phantom */ int _g_boolean_var_;
  if ( dest[0] == 0 )
    g_assertion_message_expr( 0, "../../src/toporouter.c", 3782, __PRETTY_FUNCTION__, "*dest" );
  else
  {
    edge_adjacent_vertices( e, v, &v1, &v2 );
    if ( toporouter_constraint_class( ) == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      if ( toporouter_edge_class( ) == 0 )
      {
        toporouter_vertex_t *boxpoint;
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      }
      else
      if ( ebx )
      {
        if ( ebx == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
        else
        do
        {
          if ( edx == eax )
          {
            noe1 = 1;
            if ( ( *(char*)(ebx + 24) & 1 ) & 255 )
            {
              e1cands = 0;
              rval = 0;
              e1constraintv = 0;
              if ( toporouter_constraint_class( ) == 0 )
                g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
              else
              if ( ebp_52 )
              {
                if ( *ebp_52 == 0 )
                  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
                else
                do
                {
                  if ( edx == eax )
                  {
                    GList *i;
                    if ( toporouter_constraint_class( ) == 0 )
                      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
                    else
                    if ( *ebp_52 == 0 )
                    {
                      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
                    }
                    else
                    do
                    {
                    }
                    while ( edx != eax && *(int*)(edx + 64) );
                    if ( *(int*)(*(int*)(ebp_52 + 24) + 64) != 7 && *(int*)(&eax->thickness) && routedata->src->netlist == *(int*)(&eax->v.p.x) )
                    {
                      e2cands = &eax->v.p.object.klass->info.name[0];
                      if ( routedata->dest->c == e2cands || *(int*)(routedata->src) == e2cands )
                      {
                        if ( e->e.segment.v2 != v2 && ( v2->parent == 0 || ebp_52 != eax ) && ( v2->child == 0 || ebp_52 != eax ) )
                          e2constraintv = 0;
                          if ( ebp_64 )
                          {
                          {
                            toporouter_vertex_t *temp;
                            i = ebp_64;
                            do
                            {
                              temp = &i->data[0];
                              if ( temp->child == e->e.segment.v1 || temp->parent == e->e.segment.v1 )
                              {
                                i = i->next;
                                noe1 = *(char*)(i + 56) < 0 ? 1 : noe1;
                                if ( i->next )
                                  continue;
                                else
                                  break;
                              }
                              else
                              {
                                i = i->next;
                              }
                            }
                            while ( i->next );
                            e2cands = 0;
                            v1 = &e->e.segment.v2->p.object.klass->info.name[0];
                            v2 = &e->e.segment.v2->p.object.klass->info.name[0];
                            if ( noe1 || e->e.segment.v2 == 0 )
                            {
                              routedata_insert_temppoints( routedata, i );
                              e1cands = 0;
                              g_list_free( i );
                            }
                            if ( 1 || eax == 0 )
                            {
                              routedata_insert_temppoints( routedata, e2cands );
                              g_list_free( e2cands );
                              e2cands = 0;
                            }
                            if ( ebp_44 )
                            {
                              e1cands = g_list_prepend( i, &e1constraintv );
                            }
                            else
                            if ( e1constraintv != 0 )
                              g_hash_table_insert( &routedata->alltemppoints, &e1constraintv, &e1constraintv );
                            if ( ebp_69 )
                            {
                              e2cands = g_list_prepend( e2cands, &e2constraintv );
                            }
                            else
                            if ( ebp_81 )
                              g_hash_table_insert( &routedata->alltemppoints, &e2constraintv, &e2constraintv );
                            if ( 1 == 0 )
                            {
                              return g_list_concat( rval, g_list_concat( i, e2cands ) );
                            }
                            return g_list_concat( i, e2cands );
                          }
                          }
                          else
                            e2cands = 0;
                        else
                        {
                          gts_point_distance( *(int*)(ebp_52 + 12), *(int*)(ebp_52 + 16) );
                          e2constraintv = eax;
                        }
                      }
                    }
                    e2constraintv = 0;
                  }
                  else
                  {
                  }
                }
                while ( *(int*)(edx + 64) );
              }
              if ( eax && ( ( *(char*)(ebp_52 + 24) & 1 ) & 255 ) )
              {
                e2cands = 0;
                e2constraintv = 0;
              }
              else
              {
                if ( e->e.segment.v2 == v2 )
                {
                  toporouter_vertex_t *vv1 = 0, *vv2 = 0;
                  edge_adjacent_vertices( ebp_52, eax, &vv1, &vv2 );
                  vv = vv1 == 0 ? vv1 : vv2;
                  e2cands = &eax[0].v.p.object.klass[0].info.name[0];
                  if ( ebp_100 == ebp_44 )
                    e2constraintv = 0;
                  else
                  {
                    if ( vv->parent != e->e.segment.v1 && vv->child != e->e.segment.v1 )
                      e2constraintv = 0;
                    else
                    {
                      noe1 = 1;
                      e2constraintv = 0;
                    }
                  }
                }
                else
                {
                  if ( ebp_44 != *(int*)(&eax->parent) )
                  {
                    e2constraintv = &v2->child;
                    if ( ebp_44 == *(int*)(&eax->child) )
                      goto B189;
                    else
                    {
                      toporouter_vertex_t *vv1, *vv2;
                      if ( ebp_52 == vv1->routingedge )
                      {
                        if ( ebp_44 == *(int*)(&eax->v.p.x) )
                        {
                          gts_object_is_from_class( ebp_52, &eax );
                          edge_routing_prev_not_temp( ebp_52, *(int*)(&eax->v.p.object.flags) );
                        }
                        else
                        {
                          gts_object_is_from_class( ebp_52, &eax );
                          edge_routing_next_not_temp( ebp_52, *(int*)(&eax->v.p.object.reserved) );
                        }
                      }
                      else
                      if ( ebp_52 != e2constraintv->routingedge )
                      {
                        e2cands = 0;
                        e2constraintv = 0;
                      }
                      else
                      if ( ebp_44 != *(int*)(ebp_52 + 12) )
                      {
                        gts_object_is_from_class( ebp_52, &eax );
                        edge_routing_next_not_temp( ebp_52, *(int*)(&eax->v.p.object.reserved) );
                        vv1 = e2constraintv;
                      }
                      else
                      {
                        gts_object_is_from_class( ebp_52, &eax );
                        edge_routing_prev_not_temp( ebp_52, *(int*)(&eax->v.p.object.flags) );
                      }
                      if ( vv2 == 0 )
                      {
                      }
                      else
                      {
                        if ( vv2->parent == e->e.segment.v1 || vv2->child == e->e.segment.v1 )
                          noe1 = 1;
                        e2cands = &eax[0].v.p.object.klass[0].info.name[0];
                        e2constraintv = 0;
                      }
                    }
                  }
B189:;
                }
              }
            }
            else
              break;
          }
          else
        }
        while ( *(int*)(edx + 64) );
      }
      if ( e->e.segment.v1 == v1 )
      {
        toporouter_vertex_t *vv1, *vv2;
        edge_adjacent_vertices( &ebx, &edx, &vv1, &vv2 );
        vv = vv1 == 0 ? vv1 : vv2;
        e1cands = &eax[0].v.p.object.klass[0].info.name[0];
        if ( ebp_96 == ebp_44 )
          noe2 = 0;
        else
        {
          noe2 = 1;
          if ( vv->parent != e->e.segment.v2 )
          {
            noe2 = 0;
            noe2 = vv->child == e->e.segment.v2;
            noe1 = 0;
            rval = 0;
            e1constraintv = 0;
            if ( noe2 )
            {
              e2cands = 0;
              e2constraintv = 0;
            }
            else
            {
            }
          }
        }
      }
      else
      {
        if ( ebp_44 != *(int*)(&eax->parent) && ebp_44 != *(int*)(&eax->child) )
        {
          if ( ebx == *(int*)(edi + 52) )
          {
            if ( ebp_44 == *(int*)(ebx + 12) )
            {
              gts_object_is_from_class( &ebx, &eax );
              noe1 = eax;
            }
            else
            {
              gts_object_is_from_class( &ebx, &eax );
              noe1 = eax;
            }
          }
          else
          {
            noe1 = 0;
            if ( ebx != *(int*)(ecx + 52) )
            {
              e1cands = 0;
              rval = 0;
              e1constraintv = 0;
            }
            else
            if ( ebp_44 == *(int*)(ebx + 12) )
            {
              gts_object_is_from_class( &ebx, &eax );
              vv1 = vv1;
              noe1 = eax;
            }
            else
            {
              gts_object_is_from_class( &ebx, &eax );
              vv1 = vv1;
              noe1 = eax;
            }
          }
          if ( noe1 )
          {
            noe2 = 1;
            vv = &noe1;
            e1cands = &eax[0].v.p.object.klass[0].info.name[0];
          }
        }
        noe1 = 0;
        e1constraintv = 0;
        rval = 0;
        e1cands = 0;
      }
      if ( vv && ( eax & 255 ) )
      {
        e2cands = *(int*)(ebp_44 + 40);
        if ( *(int*)(ebp_44 + 40) )
          noe1 = e2cands[7].next;
        else
          noe1 = 0;
        if ( g_list_find( &routedata->destvertices, &vv ) )
        {
          noe1 = 0;
          e1constraintv = 0;
          rval = g_list_prepend( 0, &vv );
          dest[0] = vv;
        }
        else
        {
          if ( g_list_find( &routedata->destvertices, &noe1 ) )
          {
            noe1 = 0;
            rval = 0;
            dest[0] = &noe1;
            e1constraintv = 0;
          }
          else
          {
            if ( eax )
            {
              noe1 = 0;
              e1constraintv = 0;
              rval = g_list_prepend( 0, &vv );
            }
          }
        }
      }
    }
    else
    if ( gts_vertices_are_connected( gts_triangle_vertex_opposite( t, (int)( &e->e ) ), &e->e.segment.v1 ) )
    {
      if ( *(int*)(gts_vertices_are_connected( gts_triangle_vertex_opposite( t, (int)( &e->e ) ), &e->e.segment.v1 )) == 0 )
        goto B9;
      else
      {
        do
        {
          if ( edx == eax )
          {
            GList *i;
            if ( toporouter_constraint_class( ) == 0 )
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
            else
            if ( *(int*)(gts_vertices_are_connected( gts_triangle_vertex_opposite( t, (int)( &e->e ) ), &e->e.segment.v1 )) == 0 )
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
            else
            do
            {
            }
            while ( edx != eax && *(int*)(edx + 64) );
            i = *(int*)(GList*)gts_vertices_are_connected( gts_triangle_vertex_opposite( t, (int)( &e->e ) ), &e->e.segment.v1 )/*.28*/;
            if ( *(int*)(*(int*)gts_vertices_are_connected( gts_triangle_vertex_opposite( t, (int)( &e->e ) ), &e->e.segment.v1 )/*.24*/ + 64) != 7 && *(int*)(*(int*)gts_vertices_are_connected( gts_triangle_vertex_opposite( t, (int)( &e->e ) ), &e->e.segment.v1 )/*.24*/ + 96) && routedata->src->netlist == *(int*)toporouter_constraint_class( )/*.12*/ && ( routedata->dest->c == eax || edx == ecx ) )
            {
              if ( e->e.segment.v1 != v1 && ( v1->parent == 0 || ebx != eax ) && ( v1->child == 0 || ebx != eax ) )
              {
                noe1 = 0;
                e1constraintv = 0;
              }
              else
              {
                gts_point_distance( *(int*)(ebx + 12), *(int*)(ebx + 16) );
                noe1 = 0;
                e1constraintv = eax;
              }
            }
            else
            {
              noe1 = 1;
              e1constraintv = 0;
            }
            if ( i )
            {
              noe2 = 0;
              do
              {
                temp = &i->data[0];
                if ( temp->child == e->e.segment.v2 || temp->parent == e->e.segment.v2 )
                {
                  i = i->next;
                  noe2 = (unsigned char)( ( ( *(char*)(i + 56) >> 7 ) & 1 ) ^ 1 ) ? noe2 : 1;
                  if ( i->next )
                    continue;
                  else
                    break;
                }
                else
                {
                  i = i->next;
                }
              }
              while ( i->next );
              rval = 0;
            }
            else
            {
              rval = 0;
              e1cands = 0;
            }
          }
          else
          {
          }
        }
        while ( *(int*)(edx + 64) );
      }
    }
  }
B9:;
  g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
}
}
GList *compute_candidate_points( toporouter_t *tr, toporouter_layer_t *l, toporouter_vertex_t *curpoint, toporouter_route_t *data, toporouter_vertex_t **closestdest )
{
  int eax;
  int ecx;
  double fp7;
  GList *r, *j;
  toporouter_edge_t *edge = &curpoint->routingedge, *tempedge;
  if ( tr->keepoutlayers )
  {
    if ( curpoint->v.p.z == *(double*)(*(int*)(tr->keepoutlayers)) )
    {
    {
      int prevwind;
      GSList *i;
      r = 0;
      if ( curpoint->bbox && data->src->c == curpoint->bbox->cluster->c )
      {
        tr = &r[0].data[0];
        l = (toporouter_layer_t*)g_list_copy( data->srcvertices );
      }
      return r;
    }
    }
    else
    do
    {
      if ( tr->keepoutlayers->next == 0 )
      {
      }
      else
      {
      }
    }
    while ( curpoint->v.p.z != *(double*)(*(int*)(tr->keepoutlayers)) || curpoint->v.p.z != *(double*)(*(int*)(tr->keepoutlayers)) );
  }
  if ( gts_vertices_are_connected( &curpoint[0].v, (int)( &closestdest[0]->v ) ) )
  {
    if ( toporouter_constraint_class( ) == 0 )
    {
    }
    else
    if ( tempedge == 0 )
    {
    }
    else
    {
      do
      {
        if ( edx == eax )
          continue;
        else
        {
        }
      }
      while ( *(int*)(edx + 64) );
      if ( tempedge->routing == 0 )
      {
        tempedge->flags |= 1;
        r = g_list_prepend( 0, &closestdest[0] );
      }
    }
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, ebp_80 );
    tempedge = tempedge;
  }
  if ( (int)curpoint->flags/*.1_1of4*/ >= 0 )
  {
    GSList *triangles, *i;
    r = 0;
    triangles = gts_vertex_triangles( &curpoint[0].v, 0 );
    if ( triangles )
    {
      triangles = i;
      do
      {
        routedata_insert_temppoints( data, &triangles[0].data[0] );
        i = i->next;
        r = g_list_concat( r, temppoints );
      }
      while ( i->next == 0 );
      curpoint = curpoint;
    }
    else
      r = triangle_candidate_points_from_edge( &temppoints->data[0], &i->data[0], edge, curpoint, closestdest, data );
    g_slist_free( triangles );
  }
  else
  {
    if ( edge->e.triangles )
    {
      triangles = &data[0].netlist[0].clusters[0].pdata[0][0];
      do
      {
        if ( prevwind != ( -0.000099999997 <= ( ( edge->e.segment.v2->p.x - edge->e.segment.v1->p.x ) * ( curpoint->parent - edge->e.segment.v2->p.y ) ) - ( ( edge->e.segment.v2->p.y - edge->e.segment.v1->p.y ) * ( curpoint->parent - edge->e.segment.v2->p.x ) ) ) + -1 )
        {
          GList *temppoints;
          data = &triangles->data[0];
          curpoint = curpoint;
          temppoints = triangle_candidate_points_from_edge( &temppoints->data[0], &i->data[0], edge, curpoint, closestdest, data );
          if ( temppoints )
          {
            j = temppoints;
            do
            {
              if ( *(char*)(j[4].prev) < 0 )
                g_hash_table_insert( (int)( &data->alltemppoints ), &j, &j );
            {
              /* phantom */ toporouter_vertex_t *tempj;
              j = j->next;
            }
            }
            while ( j->next );
          }
          r = g_list_concat( 0, temppoints );
        }
        else
        {
          GtsVertex *oppv;
          i = i->next;
        }
      }
      while ( i->next == 0 );
      curpoint = curpoint;
      data = &triangles->data[0];
    }
  }
}
gboolean temp_point_clean( gpointer key, gpointer value, gpointer user_data )
{
  /* phantom */ toporouter_vertex_t *tv;
  if ( value[14] < 0 )
  {
    if ( toporouter_constraint_class( ) )
    {
      if ( value[13] )
      {
        if ( *(int*)(value[13]) == 0 )
        {
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
        }
        else
        do
        {
        }
        while ( *(int*)(*(int*)(value[13]) + 64) != toporouter_constraint_class( ) && *(int*)(*(int*)(*(int*)(value[13]) + 64) + 64) );
      }
    }
    else
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    }
    value[13] = g_list_remove( &value[13], value );
    gts_object_destroy( &value[0] );
    return 1;
  }
  else
  {
    return 1;
  }
}
void clean_routing_edges( toporouter_t *r, toporouter_route_t *data )
{
  g_hash_table_foreach_remove( &data->alltemppoints, &temp_point_clean, 0 );
  g_hash_table_destroy( &data->alltemppoints );
  data->alltemppoints = 0;
  return;
}
gdouble path_score( toporouter_t *r, GList *path )
{
  double fp0;
  double fp7;
#error unstructured control flow
}
void print_vertices( GList *vertices )
{
  if ( vertices )
  {
    do
    {
      v = &vertices->data[0];
      print_vertex( &vertices->data[0] );
      if ( v )
      {
        toporouter_vertex_t *v;
        print_bbox( v->bbox );
        if ( v->bbox )
        {
          __printf_chk( 1, "has bbox\n" );
          if ( *(int*)(*(int*)(ebx + 40) + 96) )
            __printf_chk( 1, "has cluster\n" );
          else
            __printf_chk( 1, "no cluster\n" );
          vertices = vertices->next;
        }
      }
      else
        print_bbox( 0 );
      __printf_chk( 1, "no bbox\n" );
      vertices = vertices->next;
      if ( vertices->next == 0 )
        break;
    }
    while ( vertices->next == 0 );
  }
  return;
}
gint space_edge( gpointer item, gpointer data )
{
  int eax;
  int edx;
  double fp0;
  double fp1;
  double fp3;
  double fp7;
  /* phantom */ toporouter_edge_t *e;
  GList *i;
  /* phantom */ gdouble *forces;
  if ( toporouter_constraint_class( ) == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
  else
  if ( item )
  {
    if ( *(int*)(item) == 0 )
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    else
    do
    {
      if ( *(int*)(*(int*)(item) + 64) == toporouter_constraint_class( ) )
        break;
    }
    while ( *(int*)(*(int*)(*(int*)(item) + 64) + 64) );
  }
  if ( toporouter_constraint_class( ) == 0 )
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  else
  if ( item )
  {
    if ( *(int*)(item) == 0 )
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    else
    do
    {
    }
    while ( *(int*)(*(int*)(item) + 64) != toporouter_constraint_class( ) && *(int*)(*(int*)(*(int*)(item) + 64) + 64) );
  }
  if ( item[7] == 0 )
  {
    return 0;
  }
  gts_object_is_from_class( item, toporouter_constraint_class( ) );
  if ( g_list_length( &item[7] ) == 0 )
  {
    return 0;
  }
  gts_object_is_from_class( item, toporouter_constraint_class( ) );
{
  do
  {
    if ( toporouter_constraint_class( ) == 0 )
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    else
    if ( item )
    {
      if ( *(int*)(item) == 0 )
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
      else
      do
      {
      }
      while ( *(int*)(*(int*)(item) + 64) != toporouter_constraint_class( ) && *(int*)(*(int*)(*(int*)(item) + 64) + 64) );
    }
    i = &item[7];
    if ( item[7] )
    {
    {
      toporouter_vertex_t *v;
      gdouble ms;
      gdouble d;
      do
      {
        v = &i->data[0];
        if ( i->prev )
        {
          vertex_net_thickness( (int)( &i->prev ) );
          vertex_net_thickness( v );
          equilibrium = 0.000000000000;
          vertex_net_keepaway( (int)( &i->prev ) );
          vertex_net_keepaway( v );
          gts_point_distance( (int)( &i->prev ), &v->v.p );
          d = ( 0.000000000000 * 0.500000000000 ) + ( equilibrium * 0.500000000000 ) + ( 0.000000000000 <= 0.000000000000 ? 0.000000000000 : 0.000000000000 );
        }
        else
        {
          equilibrium = item[3];
          vertex_net_thickness( v );
          vertex_net_thickness( &equilibrium );
          vertex_net_keepaway( v );
          vertex_net_keepaway( &equilibrium );
          gts_point_distance( &item[3], &v[0].v.p );
          d = ( 0.000000000000 * 0.500000000000 ) + ( 0.000000000000 * 0.500000000000 ) + ( 0.000000000000 <= 0.000000000000 ? 0.000000000000 : 0.000000000000 );
        }
        if ( d <= 0.000000000000 )
        {
          ebx = 0.000000000000;
          if ( i->next )
          {
            vertex_net_thickness( *(int*)(calloc( 1, g_list_length( &item[7] ) << 3 )) );
            vertex_net_thickness( v );
            equilibrium = 0.000000000000;
            vertex_net_keepaway( (int)( &i->next ) );
            vertex_net_keepaway( v );
            gts_point_distance( (int)( &i->next ), &v->v.p );
            if ( 0.000000000000 < fp0 )
              ebx += 0.000000000000 - fp0;
            else
            {
            }
            i = i->next;
          }
        }
        else
        {
          ebx = (int)d;
          if ( i->next )
          {
            vertex_net_thickness( *(int*)(calloc( 1, g_list_length( &item[7] ) << 3 )) );
            vertex_net_thickness( v );
            equilibrium = 0.000000000000;
            vertex_net_keepaway( (int)( &i->next ) );
            vertex_net_keepaway( v );
            gts_point_distance( (int)( &i->next ), &v->v.p );
          }
        }
        equilibrium = item[4];
        vertex_net_thickness( v );
        vertex_net_thickness( &equilibrium );
        vertex_net_keepaway( v );
        vertex_net_keepaway( &equilibrium );
        gts_point_distance( &item[4], &v[0].v.p );
      }
      while ( i->next );
      item = item;
    }
    }
    if ( toporouter_constraint_class( ) == 0 )
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    else
    if ( item )
    {
      if ( *(int*)(item) == 0 )
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
      else
      do
      {
      }
      while ( *(int*)(*(int*)(item) + 64) != toporouter_constraint_class( ) && *(int*)(*(int*)(*(int*)(item) + 64) + 64) );
    }
    i = &item[7];
    if ( item[7] )
    {
      equilibrium = 1;
    {
      do
      {
        toporouter_vertex_t *v = &i->data[0];
        if ( 0.000099999997 < *(double*)(calloc( 1, g_list_length( &item[7] ) << 3 )) || fp7 < -0.000099999997 )
          equilibrium = 0;
        vertex_move_towards_vertex_values( &v[0].v, &item[4], fp7 * 0.100000000000, &v->v.p.x, &v->v.p.y );
        i = i->next;
      }
      while ( i->next );
      if ( equilibrium == 0 )
      {
        j++;
      }
    }
    }
  }
  while ( j != 100 );
  free( calloc( 1, g_list_length( &item[7] ) << 3 ) );
  return 0;
}
}
void swap_vertices( toporouter_vertex_t **v1, toporouter_vertex_t **v2 )
{
  toporouter_vertex_t *tempv = v1[0];
  v2[0] = v1[0] = v2[0];
  return;
}
void split_edge_routing( toporouter_vertex_t *v, GList **l1, GList **l2 )
{
  int ecx;
#error unstructured control flow
}
GList *vertices_routing_conflicts( toporouter_vertex_t *v, toporouter_vertex_t *pv )
{
  int eax;
  int edx;
  double fp7;
#error unstructured control flow
}
gdouble vertices_routing_conflict_cost( toporouter_t *r, toporouter_vertex_t *v, toporouter_vertex_t *pv, guint *n )
{
  int ecx;
  int edx;
  double fp6;
  double fp7;
  GList *conflicts, *i;
  gdouble penalty;
  if ( conflicts )
  {
    i = conflicts;
    do
    {
      n[0] = n[0] + 1;
      i = i->next;
    }
    while ( i->next );
    n[0]++;
  }
  else
  {
  }
  g_list_free( conflicts );
  return 0;
}
gdouble gcost( toporouter_t *r, toporouter_route_t *data, toporouter_vertex_t *srcv, toporouter_vertex_t *v, toporouter_vertex_t *pv, guint *n )
{
  double fp5;
  double fp6;
  double fp7;
  gdouble cost;
  n[0] = pv->gn;
  if ( g_list_find( &data->srcvertices, &v ) )
  {
  }
  else
  {
    if ( sqrt( ( ( pv->v.p.x - v->v.p.x ) * ( pv->v.p.x - v->v.p.x ) ) + ( ( pv->v.p.y - v->v.p.y ) * ( pv->v.p.y - v->v.p.y ) ) ) == sqrt( ( ( pv->v.p.x - v->v.p.x ) * ( pv->v.p.x - v->v.p.x ) ) + ( ( pv->v.p.y - v->v.p.y ) * ( pv->v.p.y - v->v.p.y ) ) ) )
    {
      if ( sqrt( ( ( pv->v.p.x - v->v.p.x ) * ( pv->v.p.x - v->v.p.x ) ) + ( ( pv->v.p.y - v->v.p.y ) * ( pv->v.p.y - v->v.p.y ) ) ) != sqrt( ( ( pv->v.p.x - v->v.p.x ) * ( pv->v.p.x - v->v.p.x ) ) + ( ( pv->v.p.y - v->v.p.y ) * ( pv->v.p.y - v->v.p.y ) ) ) )
      {
      }
      else
      {
      {
        gdouble conflictcost;
        if ( v != pv && v->v.p.z == pv->v.p.z )
        {
          vertices_routing_conflict_cost( r, v, pv, n );
        }
        else
        {
        }
        fp7 += fp6 * ( (double)( (long long)( n[0] ) ) * (double)( (long long)( n[0] ) ) );
      }
      }
    }
    else
    {
    }
    sqrt( ( ( pv->v.p.x - v->v.p.x ) * ( pv->v.p.x - v->v.p.x ) ) + ( ( pv->v.p.y - v->v.p.y ) * ( pv->v.p.y - v->v.p.y ) ) );
  }
  return 0;
}
guint candidate_is_available( toporouter_vertex_t *pv, toporouter_vertex_t *v )
{
  int edx;
  if ( ebp_8 == 0 )
  {
    return 1;
  }
  if ( v != ebp_8 )
  {
    do
    {
      if ( *(int*)(*(int*)(ebp_8 + 44) + 44) == 0 )
        break;
    }
    while ( v != ebp_8 );
  }
  return 0;
  return 1;
}
GList *route( toporouter_t *r, toporouter_route_t *data, guint debug )
{
  int eax;
  int ecx;
  int edx;
  int bh;
  double fp0;
  double fp7;
  GtsEHeap *openlist;
  GList *closelist;
  GList *i, *rval;
  /* phantom */ gint count;
  toporouter_vertex_t *srcv, *destv = 0, *curpoint = 0;
  toporouter_layer_t *cur_layer, *dest_layer;
  openlist = gts_eheap_new( &route_heap_cmp, 0 );
{
  /* phantom */ int _g_boolean_var_;
  if ( data->dest->c == data->src->c )
    g_assertion_message_expr( 0, "../../src/toporouter.c", 4519, __PRETTY_FUNCTION__, "data-&gt;src-&gt;c != data-&gt;dest-&gt;c" );
  else
  {
    if ( data->destvertices )
      g_list_free( &data->destvertices );
    if ( data->srcvertices )
      g_list_free( &data->srcvertices );
    data->destvertices = (void*)cluster_vertices( r, &data->dest );
    data->srcvertices = (void*)cluster_vertices( r, &data->src );
    closest_cluster_pair( r, &data->srcvertices, &data->destvertices, &curpoint, &destv );
    if ( curpoint && destv )
    {
      closelist = 0;
      cur_layer = (int)( curpoint->v.p.z );
      cur_layer <<= 4;
      cur_layer = &cur_layer[ r->layers >> 4 ];
      data->path = 0;
      destv = curpoint;
      curpoint->parent = 0;
      data->alltemppoints = (void*)g_hash_table_new( &g_direct_hash, &g_direct_equal );
      curpoint->child = 0;
      curpoint->gcost = 0.000000000000;
      curpoint->gn = 0;
      simple_h_cost( r, curpoint, destv );
      destv->hcost = curpoint->v.p.z;
      gts_eheap_insert( openlist, &curpoint );
      if ( gts_eheap_size( openlist ) )
      {
      {
        do
        {
          GList *candidatepoints;
          data->curpoint = (void*)curpoint;
          curpoint = gts_eheap_remove_top( openlist, 0 );
          if ( curpoint->parent && (int)curpoint->flags/*.1_1of4*/ >= 0 )
          {
            if ( destv->v.p.z == curpoint->v.p.z && destv->v.p.z == curpoint->v.p.z )
            {
            }
            else
            {
              toporouter_vertex_t *tempv;
              cur_layer = (int)( curpoint->v.p.z );
              cur_layer <<= 4;
              cur_layer = &cur_layer[ r->layers >> 4 ];
              if ( tempv )
                destv = tempv;
            }
          }
          if ( g_list_find( &data->destvertices, &curpoint ) == 0 )
          {
            closelist = g_list_prepend( closelist, &curpoint );
            rval = compute_candidate_points( r, cur_layer, curpoint, data, &destv );
            if ( rval )
            {
              i = rval;
              do
              {
                if ( g_list_find( closelist, &i ) == 0 )
                {
                  if ( curpoint )
                  {
                    if ( temppoint != curpoint )
                    {
                      do
                      {
                        if ( curpoint->parent == 0 )
                          goto B62;
                        else
                        {
                        }
                      }
                      while ( temppoint != g_list_find( closelist, &i ) );
                    }
                  }
                {
B62:;
                  toporouter_heap_search_data_t heap_search_data;
                  guint temp_gn;
                  gdouble temp_g_cost;
                  heap_search_data->key = temppoint;
                  heap_search_data.result = 0;
                  gcost( r, data, curpoint, temppoint, curpoint, &temp_gn );
                  gts_eheap_foreach( openlist, &toporouter_heap_search, &heap_search_data.key );
                  if ( heap_search_data.result )
                  {
                    if ( 0.000000000000 < temppoint->gcost )
                    {
                      temppoint->gcost = 0.000000000000;
                      temppoint->gn = temp_gn;
                      destv = curpoint;
                      temppoint->parent = curpoint;
                      curpoint->child = temppoint;
                      gts_eheap_update( openlist );
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
                    }
                  }
                  else
                  {
                    temppoint->gcost = 0.000000000000;
                    temppoint->parent = curpoint;
                    curpoint->child = temppoint;
                    temppoint->gn = ebp_36;
                    simple_h_cost( r, temppoint, destv );
                    temppoint->hcost = 0.000000000000;
                    gts_eheap_insert( openlist, &temppoint );
                  }
                }
                }
              {
                toporouter_vertex_t *temppoint;
                i = i->next;
              }
              }
              while ( i->next );
            }
            g_list_free( rval );
          }
        }
        while ( gts_eheap_size( openlist ) == 0 );
      }
      }
      data->score & 0xFFFFFFFF = 0.000000000000;
      clean_routing_edges( r, data );
      rval = 0;
      data->path = 0;
      g_list_free( &data->destvertices );
      g_list_free( &data->srcvertices );
      data->destvertices = 0;
      data->srcvertices = 0;
      gts_eheap_destroy( openlist );
      g_list_free( closelist );
      data->alltemppoints = 0;
      return rval;
    }
    else
    {
      GList *i;
      rval = 0;
      closelist = 0;
    }
  }
{
  toporouter_vertex_t *temppoint = curpoint;
  srcv = 0;
  rval = 0;
  destv = curpoint;
  data->path = 0;
  if ( curpoint )
  {
    cur_layer = &closelist[0].data[0];
    data = data;
    while ( 1 )
    {
      data->path = g_list_prepend( data->path, &temppoint );
      if ( g_list_find( data->srcvertices, &temppoint ) )
      {
        if ( ( r->flags/*.1_1of4*/ & 64 ) & 255 )
        {
          srcv = temppoint;
          closelist = &cur_layer->surface->object.klass->info.name[0];
          rval = &data->path;
        }
        else
          rval = &temppoint[0].v.p.object.klass[0].info.name[0];
      }
      temppoint = temppoint->parent;
      if ( temppoint->parent == 0 )
      {
        closelist = &cur_layer->surface->object.klass->info.name[0];
        srcv = &rval->data[0];
        rval = &data->path;
      }
      else
      {
      }
    }
  }
  path_score( r, rval );
  data->score & 0xFFFFFFFF = 0.000000000000;
  if ( srcv->bbox->cluster != data->src )
    data->src = &srcv->bbox->cluster;
  if ( destv->bbox->cluster != data->dest )
    data->dest = &destv->bbox->cluster;
{
  /* phantom */ toporouter_vertex_t *pv;
  GList *i = &data->path;
  if ( data->path )
  {
    toporouter_vertex_t *tv = &i->data[0];
    i = i->next;
    cur_layer = &closelist[0].data[0];
    if ( i->next )
    {
      do
      {
        tv = &i->data[0];
        if ( i && g_list_find( data->srcvertices, &tv ) )
        {
          GList *temp = g_list_copy( i );
          g_list_free( data->path );
          data->path = temp;
        }
        i = temp->next;
      }
      while ( i->next );
    }
  {
    toporouter_vertex_t *pv;
    GList *i;
    closelist = &cur_layer->surface->object.klass->info.name[0];
    i = &data->path;
    i = &data->path;
    if ( data->path )
    {
      pv = 0;
      data = data;
    {
      do
      {
        toporouter_vertex_t *tv = &i->data[0];
        tv->flags = *(int*)(i[4].prev);
        if ( (_Bool)( ( tv->flags >> 7 ) & 1 ) )
          tv->flags = "tv->flags ^ 128 # bh | 1 | 1";
        if ( pv )
          pv->child = tv;
        if ( tv->routingedge )
          tv->route = data;
        i = i->next;
        pv = tv;
      }
      while ( i->next );
    {
      toporouter_vertex_t *pv, *v;
      GList *i;
      closelist = &cur_layer->surface->object.klass->info.name[0];
      if ( i )
      {
        pv = 0;
        do
        {
          v = &i->data[0];
          if ( pv == 0 )
          {
            i = i->next;
            pv = v;
            v->parent = 0;
            if ( i->next )
              continue;
            else
              break;
          }
          else
          {
            i = i->next;
            v->parent = pv;
            pv->child = v;
            pv = v;
          }
        }
        while ( i->next );
        if ( v )
          v->child = 0;
      }
    }
    }
    }
  }
  }
  clean_routing_edges( r, data );
  i = &data->path;
  if ( data->path == 0 )
  {
    g_list_free( &data->destvertices );
    g_list_free( &data->srcvertices );
    data->destvertices = 0;
    data->srcvertices = 0;
    gts_eheap_destroy( openlist );
    g_list_free( closelist );
    data->alltemppoints = 0;
    return rval;
  }
{
  do
  {
    toporouter_vertex_t *v = &i->data[0];
    if ( v->routingedge )
    {
      if ( toporouter_constraint_class( ) )
      {
        if ( v->routingedge )
        {
          if ( v->routingedge->e.segment.object.klass->info.name[0] == 0 )
          {
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
            space_edge( &v->routingedge, 0 );
          }
          else
          do
          {
            if ( v->routingedge->_toporouter_edge_t == toporouter_constraint_class( ) )
              goto B109;
            else
          }
          while ( v->routingedge->_toporouter_edge_t );
        }
      }
      else
      {
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      }
      space_edge( &v->routingedge, 0 );
    }
B109:;
    i = i->next;
    if ( i->next == 0 )
      break;
  }
  while ( i->next );
}
}
}
}
}
void vertex_move_towards_point( GtsVertex *v, gdouble px, gdouble py, gdouble d )
{
  double fp5;
  double fp6;
  double fp7;
  gdouble dx;
  gdouble dy;
  gdouble theta;
{
  /* phantom */ int _g_boolean_var_;
  dx = py - v->p.y;
  theta = px - v->p.x;
  if ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 <= abs( dx ) )
  {
    if ( theta <= 0.000000000000 )
    {
      dx = theta;
      if ( theta < dx )
      {
        v->p.x = v->p.x + ( d * cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) ) );
        v->p.y -= d * sin( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) );
        return;
      }
      *(double*)(cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) )) = v->p.x + ( d * cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) ) );
      v->p.x = v->p.x + ( d * cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) ) );
      v->p.y += ebp_40 * fp7;
      return;
    }
  }
  else
  {
    g_assertion_message_expr( 0, "../../src/toporouter.c", 4876, __PRETTY_FUNCTION__, "finite(theta)" );
  }
  dx = theta;
  if ( theta < dx )
  {
    ;
    v->p.x = v->p.x - ( d * cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) ) );
    v->p.y -= d * sin( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) );
    return;
  }
  *(double*)(cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) )) = v->p.x - ( d * cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) ) );
  v->p.x = v->p.x + ( d * cos( atan( abs( ( py - v->p.y ) / ( px - v->p.x ) ) ) ) );
  v->p.y += ebp_40 * fp7;
  return;
}
}
void vertex_move_towards_vertex( GtsVertex *v, GtsVertex *p, gdouble d )
{
  double fp5;
  double fp6;
  double fp7;
  gdouble dx;
  gdouble dy;
  gdouble theta;
{
  /* phantom */ int _g_boolean_var_;
  dx = p->p.y - v->p.y;
  theta = p->p.x - v->p.x;
  if ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 <= abs( dx ) )
  {
    if ( theta <= 0.000000000000 )
    {
      dx = theta;
      if ( theta < dx )
      {
        v->p.x = v->p.x + ( d * cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) ) );
        v->p.y -= d * sin( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) );
        return;
      }
      *(double*)(cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) )) = v->p.x + ( d * cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) ) );
      v->p.x = v->p.x + ( d * cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) ) );
      v->p.y += ebp_40 * fp7;
      return;
    }
  }
  else
  {
    g_assertion_message_expr( 0, "../../src/toporouter.c", 4910, __PRETTY_FUNCTION__, "finite(theta)" );
  }
  dx = theta;
  if ( theta < dx )
  {
    ;
    v->p.x = v->p.x - ( d * cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) ) );
    v->p.y -= d * sin( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) );
    return;
  }
  *(double*)(cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) )) = v->p.x - ( d * cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) ) );
  v->p.x = v->p.x + ( d * cos( atan( abs( ( p->p.y - v->p.y ) / ( p->p.x - v->p.x ) ) ) ) );
  v->p.y += ebp_40 * fp7;
  return;
}
}
gdouble pathvertex_arcing_through_constraint( toporouter_vertex_t *pathv, toporouter_vertex_t *arcv )
{
  int eax;
  int ecx;
  toporouter_vertex_t *v = &pathv->child;
  if ( pathv->child == 0 || v->routingedge == 0 )
  {
    return 0;
  }
  if ( ( v->flags/*.2_2of4*/ & 1 ) & 255 )
  {
    while ( arcv == v->routingedge->e.segment.v1 || arcv == v->routingedge->e.segment.v2 )
    {
      if ( toporouter_constraint_class( ) )
      {
        if ( v->routingedge )
        {
          if ( v->routingedge->e.segment.object.klass->info.name[0] == 0 )
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
          else
          do
          {
            if ( v->routingedge->_toporouter_edge_t == toporouter_constraint_class( ) )
            {
              arcv = &v->routingedge->e.segment.v2->p.object.klass->info.name[0];
              pathv = &v->routingedge->e.segment.v1->p.object.klass->info.name[0];
            }
          }
          while ( v->routingedge->_toporouter_edge_t );
        }
      }
      else
      {
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      }
      v = v->child;
      if ( ( ( v->flags/*.2_2of4*/ & 1 ) & 255 ) == 0 )
        break;
      else
      {
      }
    }
  }
  v = pathv->parent;
  if ( ( v->flags/*.2_2of4*/ & 1 ) & 255 )
  {
    do
    {
      if ( v->routingedge->e.segment.v1 == arcv || arcv == v->routingedge->e.segment.v2 )
      {
        if ( toporouter_constraint_class( ) )
        {
          if ( v->routingedge )
          {
            if ( v->routingedge->e.segment.object.klass->info.name[0] == 0 )
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
            else
            do
            {
              if ( v->routingedge->_toporouter_edge_t == toporouter_constraint_class( ) )
              {
                arcv = &v->routingedge->e.segment.v2->p.object.klass->info.name[0];
                pathv = &v->routingedge->e.segment.v1->p.object.klass->info.name[0];
              }
              else
            }
            while ( v->routingedge->_toporouter_edge_t );
          }
        }
        else
        {
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        }
        v = v->parent;
      }
      else
        break;
    }
    while ( ( v->flags/*.2_2of4*/ & 1 ) & 255 );
  }
  return 0;
}
gint vertices_connected( toporouter_vertex_t *a, toporouter_vertex_t *b )
{
  if ( b->route->netlist->clusters->pdata[0] == a->route->netlist->clusters->pdata[0] )
  {
    return *(int*)(*(int*)(a->route + 4)) == *(int*)(*(int*)(b->route + 4));
  }
  return 0;
}
gdouble edge_min_spacing( GList *list, toporouter_edge_t *e, toporouter_vertex_t *v )
{
  int eax;
  double fp1;
  double fp2;
  double fp4;
  double fp5;
  double fp6;
  toporouter_vertex_t *origin;
  GList *i;
  gdouble space;
  toporouter_vertex_t *nextv, *prevv;
  if ( list == 0 )
  {
    space = 0.000000000000;
    return 0;
  }
  origin = &list->data[0];
  gts_point_distance2( &list->data[0], &e->e.segment.v1->p );
  gts_point_distance2( (int)( &v->v.p ), &e->e.segment.v1->p );
  if ( 0.000000000000 < 0.000000000000 )
  {
    space = 0.000000000000;
  {
    gdouble ms;
    while ( 1 )
    {
      if ( ( nextv->route == 0 || nextv->route->netlist->clusters->pdata[0] != nextv->route->netlist->clusters->pdata[0] || origin->route->src->c != nextv->route->src->c ) && (int)nextv->flags/*.1_1of4*/ >= 0 )
      {
        vertex_net_thickness( origin );
        vertex_net_thickness( nextv );
        vertex_net_keepaway( origin );
        vertex_net_keepaway( nextv );
        if ( e->e.segment.v2 != nextv )
        {
        }
        else
        {
        {
          gdouble cms;
          pathvertex_arcing_through_constraint( &i->data[0], nextv );
          ms = ms;
          if ( 0.000099999997 < 0.000000000000 )
          {
            i = i->next;
            space += ms * 0.000000000000 < ms ? ms * 0.000000000000 : ms;
          }
          else
          {
          }
        }
        }
        i = i->next;
        space += ( 0.000000000000 <= 0.000000000000 ? 0.000000000000 : 0.000000000000 ) + ( ( 0.000000000000 + 0.000000000000 ) * 0.500000000000 );
        if ( list->next == 0 )
        {
        }
        else
        {
        }
      }
      if ( i == 0 )
        goto B17;
      else
      {
      }
      i = i->next;
      space += ( 0.000000000000 <= 0.000000000000 ? 0.000000000000 : 0.000000000000 ) + ( ( 0.000000000000 + 0.000000000000 ) * 0.500000000000 );
    }
  }
  }
  else
  {
    space = 0.000000000000;
  {
    gdouble ms;
    while ( i = i->prev, ( nextv->route && nextv->route->netlist->clusters->pdata[0] == nextv->route->netlist->clusters->pdata[0] && origin->route->src->c == nextv->route->src->c ) || (int)nextv->flags/*.1_1of4*/ < 0 )
    {
      if ( i == 0 )
        goto B17;
      else
      {
      }
    }
    vertex_net_thickness( origin );
    vertex_net_thickness( nextv );
    vertex_net_keepaway( origin );
    vertex_net_keepaway( nextv );
    if ( e->e.segment.v1 != nextv )
    {
    }
    else
    {
    {
      gdouble cms;
      pathvertex_arcing_through_constraint( &i->data[0], nextv );
      ms = ms;
      if ( 0.000099999997 < 0.000000000000 )
      {
        i = i->prev;
        space += ms * 0.000000000000 < ms ? ms * 0.000000000000 : ms;
      }
      else
      {
      }
    }
    }
    i = i->prev;
    space += ( 0.000000000000 <= 0.000000000000 ? 0.000000000000 : 0.000000000000 ) + ( ( 0.000000000000 + 0.000000000000 ) * 0.500000000000 );
  }
  }
B17:;
  if ( toporouter_constraint_class( ) == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    return 0;
  }
  if ( e->e.segment.object.klass->info.name[0] == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    return 0;
  }
  do
  {
    if ( e->_toporouter_edge_t == toporouter_constraint_class( ) )
    {
      gts_point_distance( &e->e.segment.v1->p, &e->e.segment.v2->p );
      if ( space <= 0.000000000000 )
      {
        break;
      }
      gts_point_distance( &e->e.segment.v1->p, &e->e.segment.v2->p );
      space = 0.000000000000;
      return 0;
    }
    else
  }
  while ( e->_toporouter_edge_t );
  return 0;
}
guint vertex_line_normal_intersection( gdouble x1, gdouble y1, gdouble x2, gdouble y2, gdouble x3, gdouble y3, gdouble *x, gdouble *y )
{
  double fp0;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble m1;
  gdouble m2;
  gdouble c2;
  gdouble c1;
  if ( x2 == x1 && x2 == x1 )
  {
    m1 = 0.000000000000;
    m2 = 0.000000000000;
  }
  else
  {
    m1 = ( 0.000000000000 - y1 ) / 0.000000000000;
    if ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 < ( 0.000000000000 - y1 ) / 0.000000000000 )
      m2 = 0.000000000000;
    else
      m2 = -1.000000000000 / m1;
  }
  c2 = x3;
  c1 = 0.000000000000;
  m1 = 0.000000000000;
  if ( __isinf( (int)( (float)m2 ) ) )
    c1 = m1;
  else
  {
    c2 = y3 - ( m2 * x3 );
    c1 = m1;
  }
  m1 = c1 = m1;
  if ( __isinf( (int)( (float)m2 ) ) )
  {
    c1 = m1;
    x[0] = (c2 & 0xFFFFFFFF);
    m1 = y1;
  }
  else
  {
    if ( __isinf( (int)( (float)m1 ) ) )
    {
      x[0] = m1;
      c1 = m1;
    }
    else
    {
      c1 = ( c2 - c1 ) / ( m1 - m2 );
      x[0] = ( c2 - c1 ) / ( m1 - m2 );
    }
    m1 = c2 + ( m2 * m1 );
  }
  y[0] = m1;
  c1 = x[0];
  if ( x[0] <= c1 < m1 ? c1 : m1 )
  {
    m1 = m1 <= c1 ? m1 : c1;
    if ( m1 <= c1 ? m1 : c1 <= c1 )
    {
      if ( m1 <= y2 < y1 ? y2 : y1 )
      {
        return ( ( ( c1 <= y2 ? c1 : y2 ) <> m1 ) & 1 ) == 0;
      }
    }
    else
    {
    }
  }
  else
  {
  }
  return 0;
}
void print_toporouter_arc( toporouter_arc_t *arc )
{
  __printf_chk( 1, "ARC CENTRE: %f,%f ", arc->centre->v.p.x, arc->centre->v.p.y );
  __printf_chk( 1, "RADIUS: %f", arc->r );
  if ( arc->dir > 0 )
  {
    __printf_chk( 1, " COUNTERCLOCKWISE " );
    return;
  }
  if ( !1 )
  {
    __printf_chk( 1, " CLOCKWISE " );
    return;
  }
  __printf_chk( 1, " COLINEAR(ERROR) " );
  return;
}
void toporouter_arc_remove( toporouter_oproute_t *oproute, toporouter_arc_t *arc )
{
  oproute->arcs->data[0] = g_list_remove( &oproute->arcs->data[0], &arc );
  if ( arc->v )
  {
    arc->v->arc = 0;
  }
  return;
}
toporouter_arc_t *toporouter_arc_new( toporouter_oproute_t *oproute, toporouter_vertex_t *v1, toporouter_vertex_t *v2, toporouter_vertex_t *centre, gdouble r, gint dir )
{
  toporouter_arc_t *arc;
  arc->centre = centre;
  arc->v = v1;
  arc->r = r;
  arc->v1 = v1;
  arc->v2 = v2;
  arc->dir = dir;
  if ( &arc->v1 )
  {
    v1->arc = arc;
  }
  arc->clearance = 0;
  arc->oproute = oproute;
  return arc;
}
void path_set_oproute( GList *path, toporouter_oproute_t *oproute )
{
  int ecx;
  if ( path )
  {
    do
    {
      if ( ( path[4].prev & 1 ) & 255 )
        path[7].data = oproute;
      path = path->next;
    }
    while ( path->next );
  }
  return;
}
void print_oproute( toporouter_oproute_t *oproute )
{
  GList *i;
  __printf_chk( 1, "Optimized Route:\n" );
  __printf_chk( 1, "\tNetlist:\t\t%s\n\tStyle:\t\t%s\n", &oproute->netlist, &oproute->style );
  __printf_chk( 1, "\t" );
  print_vertex( &oproute->term1 );
  __printf_chk( 1, "\n" );
  i = &oproute->arcs->data[0];
  if ( oproute->arcs->data[0] )
  {
  {
    do
    {
      toporouter_arc_t *arc = &i->data[0];
      __printf_chk( 1, "\t" );
      print_toporouter_arc( arc );
      __printf_chk( 1, "\n" );
      i = i->next;
    }
    while ( i->next == 0 );
  }
  }
  __printf_chk( 1, "\t" );
  print_vertex( oproute->term2 );
  __printf_chk( 1, "\n" );
  return;
}
gdouble export_pcb_drawline( guint layer, guint x0, guint y0, guint x1, guint y1, guint thickness, guint keepaway )
{
  int edx;
  double fp0;
  double fp6;
  double fp7;
  gdouble d;
  LineTypePtr line;
  if ( line == 0 )
  {
  }
  else
  {
    AddObjectToCreateUndoList( 4, PCB->Data + ( layer * 92 ) + 76, (void*)line, (void*)line );
    if ( sqrt( ( (double)( (long long)( x0 - x1 ) ) * (double)( (long long)( x0 - x1 ) ) ) * 0.000000000000 ) == sqrt( ( (double)( (long long)( x0 - x1 ) ) * (double)( (long long)( x0 - x1 ) ) ) * 0.000000000000 ) )
    {
    }
    else
    {
    }
    sqrt( ( (double)( (long long)( x0 - x1 ) ) * (double)( (long long)( x0 - x1 ) ) ) * 0.000000000000 );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return 0;
}
gdouble arc_angle( toporouter_arc_t *arc )
{
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble x0;
  gdouble x1;
  gdouble y0 = arc->x1 - arc->centre->v.p.x;
  gdouble y1;
  if ( sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) ) == sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) ) )
  {
    if ( sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) ) != sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) ) )
    {
    }
    else
    {
      if ( sqrt( ( y0 * y0 ) + ( sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) ) * sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) ) ) ) == sqrt( ( y0 * y0 ) + ( sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) ) * sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) ) ) ) )
      {
        if ( sqrt( ( y0 * y0 ) + ( fp4 * fp4 ) ) != sqrt( ( y0 * y0 ) + ( fp4 * fp4 ) ) )
        {
        }
        else
          x1 = 0.000000000000;
          acos( ( ( y1 * sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) ) ) + ( x1 * x1 ) ) / ( y0 * sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) ) ) );
          return 1;
      }
      else
      {
      }
      sqrt( ( y0 * y0 ) + ( sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) ) * sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) ) ) );
      y0 = 0.000000000000;
      x1 = sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) );
      y1 = y0;
      acos( ( ( y1 * sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) ) ) + ( x1 * x1 ) ) / ( y0 * sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) ) ) );
      return 1;
    }
  }
  else
  {
  }
  sqrt( ( ( arc->x0 - arc->centre->v.p.x ) * ( arc->x0 - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( arc->y0 - arc->centre->v.p.y ) ) );
  x1 = 0.000000000000;
}
gdouble export_pcb_drawarc( guint layer, toporouter_arc_t *a, guint thickness, guint keepaway )
{
  int eax;
  double fp0;
  double fp1;
  double fp3;
  double fp4;
  double fp5;
  /* phantom */ gdouble sa;
  gdouble da;
  gdouble theta;
  /* phantom */ gdouble x0;
  /* phantom */ gdouble y0;
  /* phantom */ gdouble x1;
  /* phantom */ gdouble y1;
  gdouble d;
  ArcTypePtr arc;
  gint wind = 1;
  da = ( ( a->x1 - a->x0 ) * ( a->centre->v.p.y - a->y1 ) ) - ( ( a->y1 - a->y0 ) * ( a->centre->v.p.x - a->x1 ) );
  coord_xangle( a->centre->v.p.x, a->centre->v.p.x, a->centre->v.p.x, da );
  arc_angle( a );
  if ( ( ( -0.000099999997 <= da ) & 255 ) == 0 )
  {
    if ( a->dir )
    {
      if ( 0.000000000000 / 3.141592653590 < 1.000000000000 && -1.000000000000 < 0.000000000000 / 3.141592653590 )
      {
      }
      else
      if ( 359.000000000000 < 0.000000000000 / 3.141592653590 )
      {
      }
      else
      if ( 0.000000000000 / 3.141592653590 < -359.000000000000 )
      {
      }
      else
      {
        da = 0.000000000000;
        if ( arc )
        {
          AddObjectToCreateUndoList( 16384, PCB->Data + ( layer * 92 ) + 76, (void*)arc, (void*)arc );
          theta = ( da * a->r ) / 100.000000000000;
          if ( 0 ^ 0 )
          {
            __stack_chk_fail( );
          }
          return 0;
        }
        else
        {
        }
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
void calculate_term_to_arc( toporouter_vertex_t *v, toporouter_arc_t *arc, guint dir )
{
  double fp0;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble theta;
  /* phantom */ gdouble a;
  /* phantom */ gdouble b;
  gdouble bx;
  gdouble by;
  gdouble a0x;
  gdouble a0y;
  gdouble a1x;
  gdouble a1y;
  gint winddir;
  gts_point_distance( (int)( &v->v.p ), &arc->centre->v.p );
  ;
  point_from_point_to_point( &arc->centre, v, arc->r * cos( acos( arc->r / 0.000000000000 ) ), &bx, &by );
  if ( arc->centre->v.p.x == v->v.p.x )
  {
    if ( *(double*)(*(int*)(ebx + 44) + 12) != *(double*)(esi + 12) )
      fp6 = 0.000000000000;
    else
    {
      coords_on_line( bx, by, fp0, ebp_96 * fp7, &a0x, &a0y, &a1x, &a1y );
      winddir = 1;
      theta = ( ( a0x - v->v.p.x ) * ( 0.000000000000 - a0y ) ) - ( ( a0y - v->v.p.y ) * ( arc->centre->v.p.x - a0x ) );
      if ( 0.000099999997 < ( ( a0x - v->v.p.x ) * ( 0.000000000000 - a0y ) ) - ( ( a0y - v->v.p.y ) * ( arc->centre->v.p.x - a0x ) ) )
      {
      }
      else
      {
        winddir = -1;
        if ( theta < -0.000099999997 )
        {
        }
        else
        {
          __printf_chk( 1, "!winddir @ v %f,%f arc-&gt;centre %f,%f\n", v->v.p.x, v->v.p.y, arc->centre->v.p.x, arc->centre->v.p.y );
          g_assertion_message_expr( 0, "../../src/toporouter.c", 5247, __PRETTY_FUNCTION__, "winddir" );
          if ( dir == 0 )
          {
            arc->x0 = a0x;
            arc->y0 = v->v.p.x;
            return;
          }
          arc->x1 = a0x;
          arc->y1 = v->v.p.x;
          return;
        }
      }
      winddir = dir != 0 ? winddir : 0 - winddir;
      if ( arc->dir != ( dir != 0 ? winddir : 0 - winddir ) )
      {
        if ( dir == 0 )
        {
          arc->x0 = a1x;
          arc->y0 = a1y;
          return;
        }
        arc->x1 = a1x;
        arc->y1 = a1y;
        return;
      }
      else
      {
      }
    }
  }
  else
    fp6 = 0.000000000000;
  arc->centre->v.p.y = ( fp0 - fp4 ) / ( fp6 - fp5 );
  coords_on_line( bx, by, fp0, ebp_96 * fp7, &a0x, &a0y, &a1x, &a1y );
  winddir = 1;
  theta = ( ( a0x - v->v.p.x ) * ( 0.000000000000 - a0y ) ) - ( ( a0y - v->v.p.y ) * ( arc->centre->v.p.x - a0x ) );
}
void arc_ortho_projections( toporouter_arc_t *arc, toporouter_arc_t *narc, gdouble *b1, gdouble *b2 )
{
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp5;
  double fp6;
  double fp7;
  gdouble nax;
  gdouble nay;
  gdouble ax = arc->y0 - arc->centre->v.p.y;
  gdouble ay;
  /* phantom */ gdouble alen2;
  gdouble c;
  gdouble b1x;
  gdouble b1y;
  /* phantom */ gdouble b2x;
  /* phantom */ gdouble b2y;
  nax = arc->x0 - arc->centre->v.p.x;
  if ( sqrt( ( ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) * ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) ) + ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) * ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) ) ) == sqrt( ( ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) * ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) ) + ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) * ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) ) ) )
  {
    if ( sqrt( ( ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) * ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) ) + ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) * ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) ) ) != sqrt( ( ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) * ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) ) + ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) * ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( ( ( ( arc->x0 - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) + ( ( arc->y0 - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) ) / ( ( ( narc->centre->v.p.y - arc->centre->v.p.y ) * ( narc->centre->v.p.y - arc->centre->v.p.y ) ) + ( ( narc->centre->v.p.x - arc->centre->v.p.x ) * ( narc->centre->v.p.x - arc->centre->v.p.x ) ) ) ) ) ) ) )
    {
    }
    else
      nay = 0.000000000000;
      b1[0] = nay;
      if ( sqrt( ( ( nax - ay ) * ( nax - ay ) ) + ( ( ax - c ) * ( ax - c ) ) ) == sqrt( ( ( nax - ay ) * ( nax - ay ) ) + ( ( ax - c ) * ( ax - c ) ) ) )
      {
        b2[0] = nax;
        return;
      }
      else
      {
      }
      sqrt( nax );
      b2[0] = nax;
      return;
  }
  else
  {
  }
  sqrt( nay );
  nay = nax = 0.000000000000;
  b1[0] = nay;
}
guint calculate_arc_to_arc( toporouter_t *ar, toporouter_arc_t *parc, toporouter_arc_t *arc )
{
  int eax;
  int edx;
  double fp0;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble theta;
  gdouble a;
  gdouble b;
  gdouble bx;
  gdouble by;
  gdouble a0x;
  gdouble a0y;
  gdouble a1x;
  gdouble a1y;
  gdouble m;
  gdouble preva;
  gdouble prevb;
  gint winddir;
  toporouter_arc_t *bigr, *smallr = parc->r < arc->r ? parc : arc;
  bigr = parc->r < arc->r ? arc : parc;
  smallr->centre->v.p.y = *(double*)(*(int*)(( parc->r < arc->r ? parc : arc ) + 44) + 20);
  bigr->centre->v.p.y = *(double*)(*(int*)(( parc->r < arc->r ? arc : parc ) + 44) + 20);
  if ( smallr->centre->v.p.x == bigr->centre->v.p.x )
  {
    if ( smallr->centre->v.p.x != bigr->centre->v.p.x )
      fp5 = 0.000000000000;
    else
    {
      m = 0.000000000000;
      if ( smallr->centre != bigr->centre )
      {
      }
      else
      {
        __printf_chk( 1, "bigr-&gt;centre == smallr-&gt;centre @ %f,%f\n", smallr->centre->v.p.y, smallr->centre->v.p.y );
      {
        /* phantom */ int _g_boolean_var_;
        if ( smallr->centre != bigr->centre )
        {
        }
        else
        {
          g_assertion_message_expr( 0, "../../src/toporouter.c", 5329, __PRETTY_FUNCTION__, "bigr-&gt;centre != smallr-&gt;centre" );
          smallr->x1 = a0x;
          smallr->y1 = a0y;
          return 0;
        }
      }
      }
      if ( arc->dir == parc->dir )
        goto B11;
      else
      {
        gts_point_distance( (int)( &bigr->centre->v.p ), (int)( &smallr->centre->v.p ) );
        theta = acos( ( smallr->r + bigr->r ) / smallr->centre->v.p.x );
        ;
        a = bigr->r * sin( theta );
        b = bigr->r * cos( theta );
        point_from_point_to_point( bigr->centre, smallr->centre, bigr->r * cos( theta ), &bx, &by );
        coords_on_line( bx, by, m, a, &a0x, &a0y, &a1x, &a1y );
        if ( 0.000099999997 < ( ( a0x - smallr->centre->v.p.x ) * ( bigr->centre->v.p.y - a0y ) ) - ( ( a0y - smallr->centre->v.p.y ) * ( bigr->centre->v.p.x - a0x ) ) )
        {
        }
        else
        if ( -0.000099999997 <= ( ( a0x - smallr->centre->v.p.x ) * ( bigr->centre->v.p.y - a0y ) ) - ( ( a0y - smallr->centre->v.p.y ) * ( bigr->centre->v.p.x - a0x ) ) )
        {
          __printf_chk( 1, "TWIST:\n" );
          gts_point_distance( (int)( &bigr->centre->v.p ), (int)( &smallr->centre->v.p ) );
          m = 0.000000000000;
          gts_point_distance( (int)( &bigr->centre->v.p ), (int)( &smallr->centre->v.p ) );
          __printf_chk( 1, "theta = %f a = %f b = %f r = %f d = %f po = %f\n", theta, a, b, smallr->r + bigr->r, bigr->centre->v.p.x, ( smallr->r + bigr->r ) / m );
          __printf_chk( 1, "bigr centre = %f,%f smallr centre = %f,%f\n\n", bigr->centre->v.p.x, bigr->centre->v.p.y, smallr->centre->v.p.x, smallr->centre->v.p.y );
          __printf_chk( 1, "big wind = %d small wind = %d\n", bigr->dir, smallr->dir );
          g_assertion_message_expr( 0, "../../src/toporouter.c", 5452, __PRETTY_FUNCTION__, "winddir" );
          g_assertion_message_expr( 0, "../../src/toporouter.c", 5483, __PRETTY_FUNCTION__, "winddir" );
        }
        if ( bigr->dir != ( parc == bigr ? 1 : 0 + -1 ) )
        {
          if ( bigr == arc )
          {
            bigr->x0 = a1x;
            bigr->y0 = a1y;
          }
          else
          {
            bigr->x1 = a1x;
            bigr->y1 = a1y;
          }
        }
        else
        if ( bigr != arc )
        {
          bigr->x1 = a0x;
          a0y = a0x;
          bigr->y1 = a0x;
        }
        else
        {
          bigr->x0 = a0x;
          a0y = a0x;
          bigr->y0 = a0x;
        }
        point_from_point_to_point( smallr->centre, bigr->centre, smallr->r * fp0, ebp_112, &eax );
        coords_on_line( bx, by, m, smallr->r * sin( theta ), &a0x, &a0y, &a1x, &a1y );
        winddir = 1;
        if ( 0.000099999997 < ( ( a0x - smallr->centre->v.p.x ) * ( bigr->centre->v.p.y - a0y ) ) - ( ( a0y - smallr->centre->v.p.y ) * ( bigr->centre->v.p.x - a0x ) ) )
        {
        }
        else
        {
          winddir = -1;
          if ( -0.000099999997 <= ( ( a0x - smallr->centre->v.p.x ) * ( bigr->centre->v.p.y - a0y ) ) - ( ( a0y - smallr->centre->v.p.y ) * ( bigr->centre->v.p.x - a0x ) ) )
            g_assertion_message_expr( 0, "../../src/toporouter.c", 5483, __PRETTY_FUNCTION__, "winddir" );
        }
        winddir = parc == bigr ? winddir : 0 - winddir;
        if ( smallr->dir != ( parc == bigr ? winddir : 0 - winddir ) )
        {
          if ( bigr == arc )
          {
            smallr->x1 = a1x;
            smallr->y1 = a1y;
            return 0;
          }
          else
          {
            smallr->x0 = a1x;
            smallr->y0 = a1y;
            return 0;
          }
        }
        else
        {
          if ( bigr == arc )
          {
            smallr->x1 = a0x;
            smallr->y1 = a0y;
            return 0;
          }
          else
          {
            smallr->x0 = a0x;
            smallr->y0 = a0y;
            return 0;
          }
        }
      }
B11:;
      gts_point_distance( &bx, &a1y );
      theta = acos( ( bigr->r - smallr->r ) / ( smallr->r + bigr->r ) );
      ;
      a = bigr->r * sin( theta );
      b = bigr->r * cos( theta );
      point_from_point_to_point( bigr->centre, smallr->centre, bigr->r * cos( theta ), &bx, &by );
      coords_on_line( bx, by, m, a, &a0x, &a0y, &a1x, &a1y );
      if ( 0.000099999997 < ( ( a0x - smallr->centre->v.p.x ) * ( bigr->centre->v.p.y - a0y ) ) - ( ( a0y - smallr->centre->v.p.y ) * ( bigr->centre->v.p.x - a0x ) ) )
      {
      }
      else
      if ( -0.000099999997 <= ( ( a0x - smallr->centre->v.p.x ) * ( bigr->centre->v.p.y - a0y ) ) - ( ( a0y - smallr->centre->v.p.y ) * ( bigr->centre->v.p.x - a0x ) ) )
      {
        arc_ortho_projections( parc, arc, &prevb, &preva );
        __printf_chk( 1, "STRAIGHT:\n" );
        __printf_chk( 1, "bigr centre = %f,%f smallr centre = %f,%f\n", bigr->centre->v.p.x, bigr->centre->v.p.y, smallr->centre->v.p.x, smallr->centre->v.p.y );
        m = bigr->r;
        gts_point_distance( (int)( &bigr->centre->v.p ), (int)( &smallr->centre->v.p ) );
        gts_point_distance( (int)( &bigr->centre->v.p ), (int)( &smallr->centre->v.p ) );
        __printf_chk( 1, "theta = %f a = %f b = %f bigrr = %f d = %f po = %f\n", theta, a, b, bigr->r, bigr->centre->v.p.x, m / 0.000000000000 );
        gts_point_distance( (int)( &bigr->centre->v.p ), (int)( &smallr->centre->v.p ) );
        __printf_chk( 1, "bigr-r = %f smallr-r = %f ratio = %f\n", bigr->r, smallr->r, ( bigr->r - smallr->r ) / 0.000000000000 );
        __printf_chk( 1, "preva = %f prevb = %f\n\n", preva, prevb );
        g_assertion_message_expr( 0, "../../src/toporouter.c", 5360, __PRETTY_FUNCTION__, "winddir" );
        smallr->x1 = a1x;
        smallr->y1 = a1y;
        return 0;
      }
      arc_ortho_projections( parc, arc, &prevb, &preva );
      if ( bigr->dir == ( parc == bigr ? 1 : 0 + -1 ) )
      {
        if ( bigr == arc )
        {
          bigr->x0 = a0x;
          bigr->y0 = a0y;
        }
        else
        {
          bigr->x1 = a0x;
          bigr->y1 = a0y;
        }
      }
      else
      if ( bigr == arc )
      {
        bigr->x0 = a1x;
        bigr->y0 = a1y;
      }
      else
      {
        bigr->x1 = a1x;
        bigr->y1 = a1y;
      }
      point_from_point_to_point( smallr->centre, bigr->centre, -( smallr->r * fp0 ), ebp_112, &eax );
      coords_on_line( bx, by, m, smallr->r * sin( theta ), &a0x, &a0y, &a1x, &a1y );
      if ( ( parc == bigr ? 1 : 0 + -1 ) == bigr->dir )
      {
        if ( bigr == arc )
        {
          smallr->x1 = a0x;
          smallr->y1 = a0y;
          return 0;
        }
        else
        {
          smallr->x0 = a0x;
          smallr->y0 = a0y;
          return 0;
        }
      }
      else
      {
      }
    }
  }
  else
    fp5 = 0.000000000000;
  if ( ( fp7 - fp4 ) / fp5 <= 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 )
    m = -1.000000000000 / 0.000000000000;
  else
  {
    m = 0.000000000000;
  }
}
void export_oproutes( toporouter_t *ar, toporouter_oproute_t *oproute )
{
  int eax;
  double fp1;
  guint layer = PCB->LayerGroups.Number[ ( oproute->layergroup << 4 ) + 16 ];
  guint thickness;
  guint keepaway;
  GList *arcs;
  toporouter_arc_t *arc, *parc;
  lookup_thickness( &oproute->style );
  keepaway/*.1_1of4*/ = 12;
  thickness = (long long)( 0.000000000000 );
  lookup_keepaway( &oproute->style );
  keepaway/*.1_1of4*/ = 12;
  arcs = &oproute->arcs->data[0];
  keepaway = (long long)( 0.000000000000 );
  if ( oproute->arcs->data[0] == 0 )
  {
    keepaway = ar->wiring_score;
    thickness = oproute->term2;
    export_pcb_drawline( layer, (long long)( oproute->term1->v.p.x ), (long long)( oproute->term1->v.p.y ), (long long)( thickness ), (long long)( thickness ), (long long)( oproute->term1->v.p.x ), (long long)( oproute->term1->v.p.x ) );
    ar->wiring_score = keepaway + oproute->term1->v.p.x;
  }
  else
  {
    parc = 0;
    while ( 1 )
    {
      arc = &arcs->data[0];
      if ( arcs )
      {
        if ( parc )
        {
          export_pcb_drawarc( layer, parc, thickness, keepaway );
          ar->wiring_score = ar->wiring_score;
          export_pcb_drawline( layer, (long long)( parc->x1 ), (long long)( parc->y1 ), (long long)( arcs[1].data ), ar->wiring_score, (long long)( parc->x1 ), (long long)( parc->x1 ) );
          ar->wiring_score += parc->y1;
          arcs = arcs->next;
          if ( arcs->next == 0 )
          {
            export_pcb_drawarc( layer, &arcs->data[0], thickness, keepaway );
            ar->wiring_score = arcs[1].prev;
            export_pcb_drawline( layer, (long long)( arcs[2].next ), (long long)( arcs[3].data ), (long long)( oproute->term2->v.p.x ), arcs[1].prev, (long long)( arcs[2].next ), (long long)( arcs[2].next ) );
            ar->wiring_score = arcs[1].prev + arcs[3].data;
            break;
          }
          else
          {
            parc = arc;
          }
        }
      }
      else
      if ( parc )
      {
        arcs = arcs->next;
      }
      export_pcb_drawline( layer, (long long)( oproute->term1->v.p.x ), (long long)( oproute->term1->v.p.y ), (long long)( arcs[1].data ), (long long)( arcs[1].prev ), (long long)( oproute->term1->v.p.y ), (long long)( oproute->term1->v.p.y ) );
      arcs = arcs->next;
      ar->wiring_score = oproute->term1->v.p.x + oproute->term1->v.p.y;
      if ( arcs->next == 0 )
      {
        export_pcb_drawarc( layer, &arcs->data[0], thickness, keepaway );
        ar->wiring_score = arcs[1].prev;
        export_pcb_drawline( layer, (long long)( arcs[2].next ), (long long)( arcs[3].data ), (long long)( oproute->term2->v.p.x ), arcs[1].prev, (long long)( arcs[2].next ), (long long)( arcs[2].next ) );
        ar->wiring_score = arcs[1].prev + arcs[3].data;
        break;
      }
      else
      {
        parc = arc;
      }
    }
  }
  return;
}
void oproute_free( toporouter_oproute_t *oproute )
{
  int eax;
  GList *i = &oproute->arcs->data[0];
  if ( oproute->arcs->data[0] )
  {
    do
    {
      if ( *(char*)(i[3].prev[4]) < 0 )
      {
        gts_object_destroy( *(int*)(i[3].prev) );
        i = i->next;
        if ( i->next )
          continue;
        else
          break;
      }
      else
      {
        /* phantom */ toporouter_arc_t *arc;
        i = i->next;
      }
    }
    while ( i->next );
  }
  g_list_free( oproute->arcs );
}
void oproute_calculate_tof( toporouter_oproute_t *oproute )
{
  int eax;
  int edx;
  double fp5;
  double fp6;
  double fp7;
  static Extra *arcs;
  toporouter_arc_t *parc, *arc;
  arcs = &oproute->arcs->data[0];
  oproute->tof = 0.000000000000;
  if ( oproute->arcs->data[0] )
  {
    parc = 0;
    while ( 1 )
    {
      arc = &arcs->start.next;
      if ( arcs )
      {
        if ( parc )
        {
          arc_angle( parc );
          oproute->tof = oproute->tof;
          if ( sqrt( ( ( parc->x1 - *(double*)(arcs + 12) ) * ( parc->x1 - *(double*)(arcs + 12) ) ) + ( ( parc->y1 - *(double*)(arcs + 20) ) * ( parc->y1 - *(double*)(arcs + 20) ) ) ) == sqrt( ( ( parc->x1 - *(double*)(arcs + 12) ) * ( parc->x1 - *(double*)(arcs + 12) ) ) + ( ( parc->y1 - *(double*)(arcs + 20) ) * ( parc->y1 - *(double*)(arcs + 20) ) ) ) )
          {
            if ( sqrt( ( ( parc->x1 - *(double*)(esi + 12) ) * ( parc->x1 - *(double*)(esi + 12) ) ) + ( ( parc->y1 - *(double*)(esi + 20) ) * ( parc->y1 - *(double*)(esi + 20) ) ) ) != sqrt( ( ( parc->x1 - *(double*)(esi + 12) ) * ( parc->x1 - *(double*)(esi + 12) ) ) + ( ( parc->y1 - *(double*)(esi + 20) ) * ( parc->y1 - *(double*)(esi + 20) ) ) ) )
            {
            }
            else
            {
              oproute->tof = fp7 + fp0;
              arcs = &arcs->start.pin[0];
              if ( arcs->start.pin )
              {
              }
              else
              {
                arc_angle( (int)( &arcs->start.next ) );
                oproute->tof = 0.000000000000;
                if ( sqrt( ( ( *(double*)(arcs + 28) - *(double*)(*(int*)(&oproute->term2) + 12) ) * ( *(double*)(arcs + 28) - *(double*)(*(int*)(&oproute->term2) + 12) ) ) + ( ( *(double*)(arcs + 36) - *(double*)(*(int*)(&oproute->term2) + 20) ) * ( *(double*)(arcs + 36) - *(double*)(*(int*)(&oproute->term2) + 20) ) ) ) == sqrt( ( ( *(double*)(arcs + 28) - *(double*)(*(int*)(&oproute->term2) + 12) ) * ( *(double*)(arcs + 28) - *(double*)(*(int*)(&oproute->term2) + 12) ) ) + ( ( *(double*)(arcs + 36) - *(double*)(*(int*)(&oproute->term2) + 20) ) * ( *(double*)(arcs + 36) - *(double*)(*(int*)(&oproute->term2) + 20) ) ) ) )
                {
                  if ( sqrt( ( ( *(double*)(esi + 28) - *(double*)(*(int*)(ebp_28 + 8) + 12) ) * ( *(double*)(esi + 28) - *(double*)(*(int*)(ebp_28 + 8) + 12) ) ) + ( ( *(double*)(esi + 36) - *(double*)(*(int*)(ebp_28 + 8) + 20) ) * ( *(double*)(esi + 36) - *(double*)(*(int*)(ebp_28 + 8) + 20) ) ) ) != sqrt( ( ( *(double*)(esi + 28) - *(double*)(*(int*)(ebp_28 + 8) + 12) ) * ( *(double*)(esi + 28) - *(double*)(*(int*)(ebp_28 + 8) + 12) ) ) + ( ( *(double*)(esi + 36) - *(double*)(*(int*)(ebp_28 + 8) + 20) ) * ( *(double*)(esi + 36) - *(double*)(*(int*)(ebp_28 + 8) + 20) ) ) ) )
                  {
                  }
                  else
                  {
                    oproute->tof = 0.000000000000 + 0.000000000000;
                    break;
                  }
                }
                else
                {
                }
                sqrt( ( ( arcs->end.pin - oproute->term2->v.p.x ) * ( arcs->end.pin - oproute->term2->v.p.x ) ) + ( ( arcs->end.x - *(double*)(*(int*)(&oproute->term2) + 20) ) * ( arcs->end.x - *(double*)(*(int*)(&oproute->term2) + 20) ) ) );
                oproute->tof = 0.000000000000 + 0.000000000000;
                break;
              }
            }
          }
          else
          {
          }
          sqrt( ( ( parc->x1 - arcs->start.x ) * ( parc->x1 - arcs->start.x ) ) + ( ( parc->y1 - arcs->start.waiting_for ) * ( parc->y1 - arcs->start.waiting_for ) ) );
          oproute->tof = fp7 + fp0;
          arcs = &arcs->start.pin[0];
        }
      }
      else
      if ( parc )
      {
        arcs = &arcs->start.pin[0];
      }
      if ( sqrt( ( ( *(double*)(arcs + 12) - oproute->term1->v.p.x ) * ( *(double*)(arcs + 12) - oproute->term1->v.p.x ) ) + ( ( *(double*)(arcs + 20) - oproute->term1->v.p.y ) * ( *(double*)(arcs + 20) - oproute->term1->v.p.y ) ) ) == sqrt( ( ( *(double*)(arcs + 12) - oproute->term1->v.p.x ) * ( *(double*)(arcs + 12) - oproute->term1->v.p.x ) ) + ( ( *(double*)(arcs + 20) - oproute->term1->v.p.y ) * ( *(double*)(arcs + 20) - oproute->term1->v.p.y ) ) ) )
      {
        if ( sqrt( ( ( *(double*)(esi + 12) - oproute->term1->v.p.x ) * ( *(double*)(esi + 12) - oproute->term1->v.p.x ) ) + ( ( *(double*)(esi + 20) - oproute->term1->v.p.y ) * ( *(double*)(esi + 20) - oproute->term1->v.p.y ) ) ) != sqrt( ( ( *(double*)(esi + 12) - oproute->term1->v.p.x ) * ( *(double*)(esi + 12) - oproute->term1->v.p.x ) ) + ( ( *(double*)(esi + 20) - oproute->term1->v.p.y ) * ( *(double*)(esi + 20) - oproute->term1->v.p.y ) ) ) )
        {
        }
        else
        {
          arcs = &arcs->start.pin[0];
          oproute->tof += 0.000000000000;
          if ( arcs->start.pin )
          {
          }
          else
          {
            arc_angle( (int)( &arcs->start.next ) );
            oproute->tof = 0.000000000000;
          }
        }
      }
      else
      {
      }
      sqrt( ( ( arcs->start.x - oproute->term1->v.p.x ) * ( arcs->start.x - oproute->term1->v.p.x ) ) + ( ( *(double*)(arcs + 20) - oproute->term1->v.p.y ) * ( *(double*)(arcs + 20) - oproute->term1->v.p.y ) ) );
      arcs = &arcs->start.pin[0];
      oproute->tof += 0.000000000000;
    }
  }
  else
  {
    gts_point_distance( &oproute->term1->v.p, &oproute->term2->v.p );
    oproute->tof = 0.000000000000;
  }
  return;
}
gdouble line_line_distance_at_normal( gdouble line1_x1, gdouble line1_y1, gdouble line1_x2, gdouble line1_y2, gdouble line2_x1, gdouble line2_y1, gdouble line2_x2, gdouble line2_y2, gdouble x, gdouble y )
{
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  gdouble m1;
  gdouble m2;
  gdouble c1;
  gdouble c2;
  gdouble intx = line1_y2;
  gdouble inty;
  if ( line1_x2 == line1_x1 )
  {
    if ( line1_x2 != line1_x1 )
      fp6 = 0.000000000000;
    else
      c2 = line1_x1;
      m1 = 0.000000000000;
      c1 = x;
      c2 = c2;
      if ( __isinf( (int)( (float)m1 ) ) )
      {
      }
      else
        c1 = y - ( m1 * x );
      if ( __isinf( (int)( (float)c2 ) ) == 0 )
      {
        fp7 = ebp_40 - ( fp7 * fp6 );
        c2 = (c1 & 0xFFFFFFFF);
        if ( __isinf( (int)( (float)m1 ) ) == 0 )
          c2 = ( fp7 - c1 ) / ( m1 - fp6 );
        c2 *= fp6;
        fp7 += fp6 * c2;
      }
      else
        fp7 = c1 + ( m1 * fp7 );
      if ( sqrt( ( ( ebp_96 - fp6 ) * ( ebp_96 - fp6 ) ) + ( ( ebp_24 - fp7 ) * ( ebp_24 - fp7 ) ) ) == sqrt( ( ( ebp_96 - fp6 ) * ( ebp_96 - fp6 ) ) + ( ( ebp_24 - fp7 ) * ( ebp_24 - fp7 ) ) ) )
      {
        if ( sqrt( ( ( ebp_96 - c2 ) * ( ebp_96 - c2 ) ) + ( ( ebp_24 - ( fp7 + ( fp6 * c2 ) ) ) * ( ebp_24 - ( fp7 + ( fp6 * c2 ) ) ) ) ) != sqrt( ( ( ebp_96 - c2 ) * ( ebp_96 - c2 ) ) + ( ( ebp_24 - ( fp7 + ( fp6 * c2 ) ) ) * ( ebp_24 - ( fp7 + ( fp6 * c2 ) ) ) ) ) )
        {
        }
        else
        {
          return 1;
        }
      }
      else
      {
      }
      sqrt( fp7 );
      return 1;
  }
  else
    fp6 = 0.000000000000;
  intx = line2_x1;
  c2 = ( intx - fp1 ) / ( c2 - fp6 );
  if ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 < ( intx - fp1 ) / ( c2 - fp6 ) )
  {
    m1 = 0.000000000000;
    c1 = x;
    c2 = c2;
  }
  else
  {
    c2 = intx;
    m1 = -1.000000000000 / c2;
    c1 = x;
    c2 = c2;
  }
}
void calculate_serpintine( gdouble delta, gdouble r, gdouble initiala, gdouble *a, guint *nhalfcycles )
{
  gdouble lhalfcycle;
  guint n;
  __printf_chk( 1, "lhalfcycle = %f r = %f\n", ( ( initiala - r ) * 0.000000000000 ) + ( r * 3.141592653590 ), r );
  a[0] = ( delta + ( r * (double)( (long long)( (long long)( ( ( delta + ( r * -3.141592653590 ) ) / ( ( ( initiala - r ) * 0.000000000000 ) + ( r * 3.141592653590 ) + ( r * -2.000000000000 ) ) ) + 1.000000000000 ) ) ) * 4.000000000000 ) + ( r * -3.141592653590 * (double)( (long long)( (long long)( ( ( delta + ( r * -3.141592653590 ) ) / ( ( ( initiala - r ) * 0.000000000000 ) + ( r * 3.141592653590 ) + ( r * -2.000000000000 ) ) ) + 1.000000000000 ) ) ) ) + ( r * 4.000000000000 ) + ( r * -3.141592653590 ) ) / ( (double)( (long long)( (long long)( ( ( delta + ( r * -3.141592653590 ) ) / ( ( ( initiala - r ) * 0.000000000000 ) + ( r * 3.141592653590 ) + ( r * -2.000000000000 ) ) ) + 1.000000000000 ) ) ) * 0.000000000000 );
  nhalfcycles[0] = (long long)( ( ( delta + ( r * -3.141592653590 ) ) / ( ( ( initiala - r ) * 0.000000000000 ) + ( r * 3.141592653590 ) + ( r * -2.000000000000 ) ) ) + 1.000000000000 );
  return;
}
gdouble oproute_min_spacing( toporouter_oproute_t *a, toporouter_oproute_t *b )
{
  double fp3;
  lookup_thickness( &a->style );
  lookup_thickness( &b->style );
  lookup_keepaway( &a->style );
  lookup_keepaway( &b->style );
  if ( 0.000000000000 < 0.000000000000 )
  {
    lookup_keepaway( a->style );
  }
  lookup_keepaway( b->style );
  return 0;
}
gdouble vector_angle( gdouble ox, gdouble oy, gdouble ax, gdouble ay, gdouble bx, gdouble by )
{
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ gdouble alen;
  /* phantom */ gdouble blen;
  if ( sqrt( ( ( ax - ox ) * ( ax - ox ) ) + ( ( ay - oy ) * ( ay - oy ) ) ) == sqrt( ( ( ax - ox ) * ( ax - ox ) ) + ( ( ay - oy ) * ( ay - oy ) ) ) )
  {
    if ( sqrt( ( ( ax - ox ) * ( ax - ox ) ) + ( ( ay - oy ) * ( ay - oy ) ) ) != sqrt( ( ( ax - ox ) * ( ax - ox ) ) + ( ( ay - oy ) * ( ay - oy ) ) ) )
    {
    }
    else
    {
      if ( sqrt( ( ( bx - sqrt( ( ( ax - ox ) * ( ax - ox ) ) + ( ( ay - oy ) * ( ay - oy ) ) ) ) * ( bx - sqrt( ( ( ax - ox ) * ( ax - ox ) ) + ( ( ay - oy ) * ( ay - oy ) ) ) ) ) + ( ( oy - ( ( ( ax - ox ) * ( ax - ox ) ) + ( ( ay - oy ) * ( ay - oy ) ) ) ) * ( oy - ( ( ( ax - ox ) * ( ax - ox ) ) + ( ( ay - oy ) * ( ay - oy ) ) ) ) ) ) == sqrt( ( ( bx - sqrt( ( ( ax - ox ) * ( ax - ox ) ) + ( ( ay - oy ) * ( ay - oy ) ) ) ) * ( bx - sqrt( ( ( ax - ox ) * ( ax - ox ) ) + ( ( ay - oy ) * ( ay - oy ) ) ) ) ) + ( ( oy - ( ( ( ax - ox ) * ( ax - ox ) ) + ( ( ay - oy ) * ( ay - oy ) ) ) ) * ( oy - ( ( ( ax - ox ) * ( ax - ox ) ) + ( ( ay - oy ) * ( ay - oy ) ) ) ) ) ) )
      {
        if ( sqrt( ( ( ebp_112 - 0.000000000000 ) * ( ebp_112 - 0.000000000000 ) ) + ( ( fp5 - fp6 ) * ( fp5 - fp6 ) ) ) != sqrt( ( ( ebp_112 - 0.000000000000 ) * ( ebp_112 - 0.000000000000 ) ) + ( ( fp5 - fp6 ) * ( fp5 - fp6 ) ) ) )
        {
        }
        else
        {
          ox = ( ( fp5 * fp2 ) + ( fp6 * fp4 ) ) / ( fp7 * fp6 );
        }
      }
      else
      {
      }
      sqrt( bx - sqrt( ( ( ax - ox ) * ( ax - ox ) ) + ( ( ay - oy ) * ( ay - oy ) ) ) );
      ox = ( ( fp5 * fp2 ) + ( fp6 * fp4 ) ) / ( fp7 * fp6 );
    }
  }
  else
  {
  }
  sqrt( sqrt( ( ( ax - ox ) * ( ax - ox ) ) + ( ( ay - oy ) * ( ay - oy ) ) ) );
}
toporouter_serpintine_t *toporouter_serpintine_new( gdouble x, gdouble y, gdouble x0, gdouble y0, gdouble x1, gdouble y1, gpointer start, gdouble halfa, gdouble radius, guint nhalfcycles )
{
  /* phantom */ toporouter_serpintine_t *serp;
  *(int*)calloc( 1, 76 )/*.4*/ = x;
  *(int*)calloc( 1, 76 )/*.12*/ = y;
  *(int*)calloc( 1, 76 )/*.20*/ = x0;
  *(int*)calloc( 1, 76 )/*.28*/ = y0;
  *(int*)calloc( 1, 76 )/*.36*/ = x1;
  *(int*)calloc( 1, 76 )/*.44*/ = y1;
  *(int*)calloc( 1, 76 )/*.52*/ = start[0];
  *(int*)calloc( 1, 76 )/*.56*/ = halfa;
  *(int*)calloc( 1, 76 )/*.64*/ = radius;
  *(int*)calloc( 1, 76 )/*.72*/ = nhalfcycles;
  *(int*)(calloc( 1, 76 )) = 0;
  return calloc( 1, 76 );
}
gdouble check_non_intersect_vertex( gdouble x0, gdouble y0, gdouble x1, gdouble y1, toporouter_vertex_t *pathv, toporouter_vertex_t *arcv, toporouter_vertex_t *opv, gint wind, gint *arcwind, gdouble *arcr, guint debug )
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
  gdouble ms;
  gdouble line_int_x;
  gdouble line_int_y;
  gdouble x;
  gdouble y;
  gdouble d = x0;
  gdouble m;
  gdouble tx0;
  gdouble ty0;
  gdouble tx1;
  gdouble ty1;
  gint wind1;
  gint wind2;
{
  /* phantom */ int _g_boolean_var_;
  m = y0;
  if ( pathv->routingedge == 0 )
  {
    g_assertion_message_expr( 0, "../../src/toporouter.c", 5675, __PRETTY_FUNCTION__, "pathv-&gt;routingedge" );
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
  else
  {
    if ( toporouter_constraint_class( ) )
    {
      if ( pathv->routingedge )
      {
        if ( pathv->routingedge->e.segment.object.klass->info.name[0] == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
          if ( toporouter_constraint_class( ) )
          {
            if ( pathv->routingedge )
            {
              if ( pathv->routingedge->e.segment.object.klass->info.name[0] == 0 )
              {
                g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
              }
              else
              do
              {
              }
              while ( pathv->routingedge->_toporouter_edge_t != toporouter_constraint_class( ) && pathv->routingedge->_toporouter_edge_t );
            }
          }
          else
          {
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
          }
          edge_min_spacing( g_list_find( &pathv->routingedge->routing, &pathv ), pathv->routingedge, arcv );
          ms = 0.000000000000;
          if ( vertex_line_normal_intersection( d, m, x1, y1, arcv->v.p.x, arcv->v.p.y, &line_int_x, &line_int_y ) )
          {
            if ( x1 == d && x1 == d )
              m = 0.000000000000;
            else
              m = ( y1 - m ) / ( x1 - d );
          }
          else
          {
            if ( ( ( m - line_int_y ) * ( m - line_int_y ) ) + ( ( d - line_int_x ) * ( d - line_int_x ) ) < ( ( y1 - line_int_y ) * ( y1 - line_int_y ) ) + ( ( x1 - line_int_x ) * ( x1 - line_int_x ) ) )
            {
              line_int_x = d;
              line_int_y = m;
            }
            else
            {
              line_int_x = x1;
              line_int_y = y1;
              d = x1;
              m = y1;
            }
            if ( arcv->v.p.x != d || arcv->v.p.x != d )
            {
              if ( ( m - arcv->v.p.y ) / ( d - arcv->v.p.x ) <= 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 )
                m = -1.000000000000 / ( ( m - arcv->v.p.y ) / ( d - arcv->v.p.x ) );
              else
              {
              }
            }
            m = 0.000000000000;
          }
          coords_on_line( fp3, fp3, m, 100.000000000000, &tx0, &ty0, &tx1, &ty1 );
          wind1 = 1;
          wind2 = 1;
          d/*.1_1of8*/ = 0;
          ty1 = ( line_int_x * ( opv->v.p.y - ( ty1 - ty0 ) ) ) - ( ty1 * ( opv->v.p.x - tx1 ) );
          if ( 0.000099999997 < ( line_int_x * ( opv->v.p.y - ( ty1 - ty0 ) ) ) - ( ty1 * ( opv->v.p.x - tx1 ) ) )
          {
          }
          else
          {
            d/*.1_1of8*/ = -0.000099999997 <= ( line_int_x * ( opv->v.p.y - ( ty1 - ty0 ) ) ) - ( ty1 * ( opv->v.p.x - tx1 ) );
            wind2 = (int)d/*.1_1of8*/ + -1;
          }
          if ( wind2 != wind1 )
          {
            if ( d/*.1_1of8*/ == 0 )
            {
              if ( wind )
              {
                parent = pathv->parent;
                child = pathv->child;
                if ( sqrt( ( ( arcv->v.p.x - line_int_x ) * ( arcv->v.p.x - line_int_x ) ) + ( ( arcv->v.p.y - line_int_y ) * ( arcv->v.p.y - line_int_y ) ) ) == sqrt( ( ( arcv->v.p.x - line_int_x ) * ( arcv->v.p.x - line_int_x ) ) + ( ( arcv->v.p.y - line_int_y ) * ( arcv->v.p.y - line_int_y ) ) ) )
                {
                  if ( sqrt( ( ( arcv->v.p.x - fp2 ) * ( arcv->v.p.x - fp2 ) ) + ( ( arcv->v.p.y - line_int_y ) * ( arcv->v.p.y - line_int_y ) ) ) != sqrt( ( ( arcv->v.p.x - fp2 ) * ( arcv->v.p.x - fp2 ) ) + ( ( arcv->v.p.y - line_int_y ) * ( arcv->v.p.y - line_int_y ) ) ) )
                  {
                  }
                  else
                  {
                    d = line_int_y;
                    coord_move_towards_coord_values( 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, ms + d, &x, &y );
                    windtests = 0;
                    m = child->v.p.y - y;
                    while ( 1 )
                    {
                      wind2 = 1;
                      if ( 0.000099999997 < ( m * ( x - line_int_x ) ) - ( ( child->v.p.x - x ) * ( y - line_int_y ) ) )
                      {
                      }
                      else
                      if ( fp5 < -0.000099999997 )
                        wind2 = -1;
                      else
                      {
                        pathv = pathv;
                      }
                      if ( wind1 )
                      {
                        if ( wind2 != wind1 )
                        {
                        }
                        else
                        {
                          if ( windtests != 2 )
                          {
                            if ( ( child->flags/*.2_2of4*/ & 1 ) & 255 )
                            {
                              child = child->child;
                              m = child->child - y;
                            }
                            windtests++;
                          }
                          else
                          {
                            break;
                          }
                        }
                      }
                      else
                      {
                      }
                    }
                  }
                }
                else
                {
                }
                sqrt( ( ( arcv->v.p.x - line_int_x ) * ( arcv->v.p.x - line_int_x ) ) + ( ( arcv->v.p.y - line_int_y ) * ( arcv->v.p.y - line_int_y ) ) );
                d = line_int_y;
                coord_move_towards_coord_values( 0.000000000000, 0.000000000000, 0.000000000000, 0.000000000000, ms + d, &x, &y );
                windtests = 0;
                m = child->v.p.y - y;
                while ( 1 )
                {
                  wind2 = 1;
                }
              }
              else
              {
                coords_on_line( line_int_y, line_int_y, 0.000000000000, ms, &tx0, &ty0, &tx1, &ty1 );
                if ( ( ( ty0 - opv->v.p.y ) * ( ty0 - opv->v.p.y ) ) + ( ( tx0 - opv->v.p.x ) * ( tx0 - opv->v.p.x ) ) < ( ( ty1 - opv->v.p.y ) * ( ty1 - opv->v.p.y ) ) + ( ( tx1 - opv->v.p.x ) * ( tx1 - opv->v.p.x ) ) )
                {
                  x = tx0;
                  y = ty0;
                  d = 0.000000000000;
                }
                else
                {
                  x = tx1;
                  y = tx1;
                  d = 0.000000000000;
                }
              }
              arcr[0] = ms;
              arcwind[0] = ( -0.000099999997 <= tx0 ) + -1;
              return 0;
            }
            else
            {
            {
              toporouter_vertex_t *parent, *child;
              guint windtests;
              return 0;
            }
            }
          }
          else
          {
          {
            toporouter_vertex_t *parent, *child;
            guint windtests;
            return 0;
          }
          }
        else
        {
          do
          {
            if ( pathv->routingedge->_toporouter_edge_t == toporouter_constraint_class( ) )
            {
              gdouble d;
              if ( sqrt( ( ( *(double*)(*(int*)(pathv->routingedge + 12) + 12) - *(double*)(*(int*)(pathv->routingedge + 16) + 12) ) * ( *(double*)(*(int*)(pathv->routingedge + 12) + 12) - *(double*)(*(int*)(pathv->routingedge + 16) + 12) ) ) + ( ( *(double*)(*(int*)(pathv->routingedge + 12) + 20) - *(double*)(*(int*)(pathv->routingedge + 16) + 20) ) * ( *(double*)(*(int*)(pathv->routingedge + 12) + 20) - *(double*)(*(int*)(pathv->routingedge + 16) + 20) ) ) ) == sqrt( ( ( *(double*)(*(int*)(pathv->routingedge + 12) + 12) - *(double*)(*(int*)(pathv->routingedge + 16) + 12) ) * ( *(double*)(*(int*)(pathv->routingedge + 12) + 12) - *(double*)(*(int*)(pathv->routingedge + 16) + 12) ) ) + ( ( *(double*)(*(int*)(pathv->routingedge + 12) + 20) - *(double*)(*(int*)(pathv->routingedge + 16) + 20) ) * ( *(double*)(*(int*)(pathv->routingedge + 12) + 20) - *(double*)(*(int*)(pathv->routingedge + 16) + 20) ) ) ) )
              {
                vertex_net_thickness( pathv );
                ms = 0.000000000000;
                vertex_net_thickness( arcv );
                vertex_net_keepaway( pathv );
                vertex_net_keepaway( arcv );
                (int)ms = ( ebp_168 * ms ) + ( ebp_168 * ebp_136 ) + ( ebp_184 <= 0.000000000000 ? ebp_184 : 0.000000000000 ) < ebp_152 ? ( ebp_168 * ms ) + ( ebp_168 * ebp_136 ) + ( ebp_184 <= 0.000000000000 ? ebp_184 : 0.000000000000 ) : ebp_152;
              }
              else
                d = 0.000000000000;
              sqrt( ( ( pathv->routingedge->e.segment.v1->p.x - pathv->routingedge->e.segment.v2->p.x ) * ( pathv->routingedge->e.segment.v1->p.x - pathv->routingedge->e.segment.v2->p.x ) ) + ( ( pathv->routingedge->e.segment.v1->p.y - *(double*)(*(int*)(pathv->routingedge + 16) + 20) ) * ( pathv->routingedge->e.segment.v1->p.y - *(double*)(*(int*)(pathv->routingedge + 16) + 20) ) ) );
              vertex_net_thickness( pathv );
              ms = 0.000000000000;
              vertex_net_thickness( arcv );
              vertex_net_keepaway( pathv );
              vertex_net_keepaway( arcv );
              (int)ms = ( ebp_168 * ms ) + ( ebp_168 * ebp_136 ) + ( ebp_184 <= 0.000000000000 ? ebp_184 : 0.000000000000 ) < ebp_152 ? ( ebp_168 * ms ) + ( ebp_168 * ebp_136 ) + ( ebp_184 <= 0.000000000000 ? ebp_184 : 0.000000000000 ) : ebp_152;
            }
            else
            {
            }
          }
          while ( pathv->routingedge->_toporouter_edge_t );
        }
      }
    }
    else
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
}
}
gdouble check_intersect_vertex( gdouble x0, gdouble y0, gdouble x1, gdouble y1, toporouter_vertex_t *pathv, toporouter_vertex_t *arcv, toporouter_vertex_t *opv, gint wind, gint *arcwind, gdouble *arcr, guint debug )
{
  int eax;
  int ecx;
  double fp1;
  double fp2;
  double fp3;
  double fp6;
  double fp7;
  gdouble ms;
  gdouble line_int_x;
  gdouble line_int_y;
  gdouble x;
  gdouble y;
  /* phantom */ gdouble d;
  if ( toporouter_constraint_class( ) )
  {
    if ( pathv->routingedge )
    {
      if ( pathv->routingedge->e.segment.object.klass->info.name[0] == 0 )
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
      else
      do
      {
        if ( pathv->routingedge->_toporouter_edge_t == toporouter_constraint_class( ) )
        {
          gdouble d;
          if ( sqrt( ( ( *(double*)(*(int*)(pathv->routingedge + 12) + 12) - *(double*)(*(int*)(pathv->routingedge + 16) + 12) ) * ( *(double*)(*(int*)(pathv->routingedge + 12) + 12) - *(double*)(*(int*)(pathv->routingedge + 16) + 12) ) ) + ( ( *(double*)(*(int*)(pathv->routingedge + 12) + 20) - *(double*)(*(int*)(pathv->routingedge + 16) + 20) ) * ( *(double*)(*(int*)(pathv->routingedge + 12) + 20) - *(double*)(*(int*)(pathv->routingedge + 16) + 20) ) ) ) == sqrt( ( ( *(double*)(*(int*)(pathv->routingedge + 12) + 12) - *(double*)(*(int*)(pathv->routingedge + 16) + 12) ) * ( *(double*)(*(int*)(pathv->routingedge + 12) + 12) - *(double*)(*(int*)(pathv->routingedge + 16) + 12) ) ) + ( ( *(double*)(*(int*)(pathv->routingedge + 12) + 20) - *(double*)(*(int*)(pathv->routingedge + 16) + 20) ) * ( *(double*)(*(int*)(pathv->routingedge + 12) + 20) - *(double*)(*(int*)(pathv->routingedge + 16) + 20) ) ) ) )
          {
            vertex_net_thickness( pathv );
            vertex_net_thickness( arcv );
            vertex_net_keepaway( pathv );
            vertex_net_keepaway( arcv );
            if ( vertex_line_normal_intersection( x0, y0, x1, y1, arcv->v.p.x, arcv->v.p.y, &line_int_x, &line_int_y ) == 0 )
            {
              break;
            }
            else
            {
              if ( sqrt( ( ( line_int_x - arcv->v.p.x ) * ( line_int_x - arcv->v.p.x ) ) + ( ( line_int_y - arcv->v.p.y ) * ( line_int_y - arcv->v.p.y ) ) ) == sqrt( ( ( line_int_x - arcv->v.p.x ) * ( line_int_x - arcv->v.p.x ) ) + ( ( line_int_y - arcv->v.p.y ) * ( line_int_y - arcv->v.p.y ) ) ) )
              {
                if ( sqrt( ( ( line_int_x - arcv->v.p.x ) * ( line_int_x - arcv->v.p.x ) ) + ( ( line_int_y - arcv->v.p.y ) * ( line_int_y - arcv->v.p.y ) ) ) == sqrt( ( ( line_int_x - arcv->v.p.x ) * ( line_int_x - arcv->v.p.x ) ) + ( ( line_int_y - arcv->v.p.y ) * ( line_int_y - arcv->v.p.y ) ) ) )
                {
                  if ( fp3 - 0.000099999997 < 0.000000000000 )
                  {
                    break;
                  }
                  else
                  {
                    coord_move_towards_coord_values( arcv->v.p.x, arcv->v.p.y, line_int_x, line_int_y, fp1, &x, &y );
                    arcr[0] = 0.000000000000;
                    arcwind[0] = ( -0.000099999997 <= 0.000000000000 ) + -1;
                    return 0;
                  }
                }
                else
                {
                }
              }
              else
              {
              }
              if ( ebp_120 - 0.000099999997 < fp3 )
              {
                break;
              }
              else
                fp2 = 0.000099999997;
                coord_move_towards_coord_values( arcv->v.p.x, arcv->v.p.y, line_int_x, line_int_y, fp1, &x, &y );
                arcr[0] = 0.000000000000;
                arcwind[0] = ( -0.000099999997 <= 0.000000000000 ) + -1;
                return 0;
            }
          }
          else
          {
          }
          sqrt( d );
          vertex_net_thickness( pathv );
          vertex_net_thickness( arcv );
          vertex_net_keepaway( pathv );
          vertex_net_keepaway( arcv );
        }
        else
        {
        }
      }
      while ( pathv->routingedge->_toporouter_edge_t );
    }
  }
  else
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
  if ( toporouter_constraint_class( ) )
  {
    if ( pathv->routingedge )
    {
      if ( pathv->routingedge->e.segment.object.klass->info.name[0] == 0 )
      {
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
      }
      else
      do
      {
      }
      while ( pathv->routingedge->_toporouter_edge_t != toporouter_constraint_class( ) && pathv->routingedge->_toporouter_edge_t );
    }
  }
  else
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
  edge_min_spacing( g_list_find( &pathv->routingedge->routing, &pathv ), pathv->routingedge, arcv );
}
guint check_arc_for_loops( gpointer t1, toporouter_arc_t *arc, gpointer t2 )
{
  gdouble x0;
  gdouble y0;
  gdouble x1;
  gdouble y1;
  if ( toporouter_vertex_class( ) == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
  else
  if ( t1 )
  {
    if ( *(int*)(t1) == 0 )
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    else
    do
    {
      if ( *(int*)(*(int*)(t1) + 64) == toporouter_vertex_class( ) )
      {
        x0 = t1[3];
        y0 = t1[5];
        if ( toporouter_vertex_class( ) == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        else
        if ( t2 == 0 )
        {
          return coord_intersect_prop( x0, y0, arc->x0, arc->y0, arc->x1, arc->y1, t2[3], t2[5] ) != 0;
        }
        if ( *(int*)(t2) == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
        else
        do
        {
        }
        while ( *(int*)(*(int*)(t2) + 64) != toporouter_vertex_class( ) && *(int*)(*(int*)(*(int*)(t2) + 64) + 64) );
      }
      else
    }
    while ( *(int*)(*(int*)(*(int*)(t1) + 64) + 64) );
  }
  x0 = t1[7];
  y0 = t1[9];
}
toporouter_rubberband_arc_t *new_rubberband_arc( toporouter_vertex_t *pathv, toporouter_vertex_t *arcv, gdouble r, gdouble d, gint wind, GList *list )
{
  /* phantom */ toporouter_rubberband_arc_t *rba;
  *(int*)(calloc( 1, 32 )) = pathv->v._GtsVertex;
  *(int*)calloc( 1, 32 )/*.8*/ = r;
  *(int*)calloc( 1, 32 )/*.4*/ = arcv->v._GtsVertex;
  *(int*)calloc( 1, 32 )/*.16*/ = d;
  *(int*)calloc( 1, 32 )/*.24*/ = wind;
  *(int*)calloc( 1, 32 )/*.28*/ = list->_GList;
  return calloc( 1, 32 );
}
gint compare_rubberband_arcs( toporouter_rubberband_arc_t *a, toporouter_rubberband_arc_t *b )
{
  return (int)( b->d - a->d );
}
void free_list_elements( gpointer data, gpointer user_data )
{
}
// Lost vars at line 5931 through condition folding
GList *oproute_rubberband_segment( toporouter_t *r, toporouter_oproute_t *oproute, GList *path, gpointer t1, gpointer t2, guint debug )
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
  gdouble x0;
  gdouble y0;
  gdouble x1;
  gdouble y1;
  toporouter_vertex_t *v1, *v2, *av1, *av2;
  toporouter_arc_t *arc1, *arc2, *newarc;
  GList *i;
  GList *list1, *list2;
  GList *arcs;
  toporouter_rubberband_arc_t *max;
  if ( toporouter_vertex_class( ) == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
  else
  if ( t1 )
  {
    if ( *(int*)(t1) == 0 )
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    else
    do
    {
      if ( *(int*)(*(int*)(t1) + 64) == toporouter_vertex_class( ) )
      {
        arc1 = 0;
        x0 = t1[3];
        v1 = &t1[0];
        y0 = t1[5];
        if ( toporouter_vertex_class( ) == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        else
        if ( t2 )
        {
          if ( *(int*)(t2) == 0 )
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
          else
          do
          {
            if ( *(int*)(*(int*)(t2) + 64) == toporouter_vertex_class( ) )
            {
              arc2 = 0;
              v2 = &t2[0];
              if ( v2 != v1 )
              {
                i = &path->next;
                if ( path->next )
                {
                  if ( path->data[0] == 0 )
                  {
                  }
                  else
                  {
                    toporouter_vertex_t *v = &i->data[0];
                    gdouble d;
                    gdouble arcr;
                    gint v1wind;
                    gint v2wind;
                    gint arcwind;
                    if ( v2 != i )
                    {
                      if ( v1 != v )
                      {
                        if ( v->routingedge )
                        {
                          x1 = fp7 - x0;
                          arcs = 0;
                          while ( 1 )
                          {
                            v1wind = 1;
                            d = x1 * ( v->routingedge->e.segment.v1->p.y - y1 );
                            if ( 0.000099999997 < x1 * ( *(double*)(*(int*)(v->routingedge + 12) + 20) - y1 ) )
                            {
                            }
                            else
                              v1wind = ( -0.000099999997 <= d ) + -1;
                            v2wind = 1;
                            d = x1 * ( v->routingedge->e.segment.v2->p.y - y1 );
                            if ( 0.000099999997 < x1 * ( *(double*)(*(int*)(v->routingedge + 16) + 20) - y1 ) )
                            {
                              if ( v2wind/*.1_1of4*/ == 0 )
                              {
                                if ( arc1 == 0 || v->routingedge->e.segment.v1 != arc1->centre )
                                {
                                  if ( arc2 )
                                  {
                                    if ( v->routingedge->e.segment.v1 != arc2->centre )
                                      y1 = 0.000000000000;
                                    else
                                    {
                                      y1 = x1 = 0.000000000000;
                                      if ( arc1 )
                                      {
                                      }
                                      else
                                      {
                                        if ( arc2 )
                                        {
                                          if ( v->routingedge->e.segment.v1 != arc2->centre )
                                          {
                                          }
                                          else
                                          {
                                            i = i->next;
                                            if ( i->next )
                                            {
                                              v = &i->data[0];
                                              if ( v2 != i )
                                              {
                                                if ( v1 != v )
                                                {
                                                  if ( v->routingedge == 0 )
                                                  {
                                                    v2wind = g_list_sort( arcs, &compare_rubberband_arcs );
                                                    if ( v2wind == 0 )
                                                    {
                                                      break;
                                                    }
                                                    do
                                                    {
                                                      max = &v2wind;
                                                      max->list->data[0] = v2wind;
                                                      i = &v2wind;
                                                      v2 = &v2wind;
                                                      if ( max->list->next == 0 )
                                                        v1 = max->pathv;
                                                      else
                                                      {
                                                        toporouter_vertex_t *v = &i->data[0];
                                                        if ( v->routingedge )
                                                        {
                                                          v1 = v2;
                                                          while ( max->arcv == y0 & 0xFFFFFFFF || max->arcv == *(int*)(*(int*)(i[4].next) + 16) )
                                                          {
                                                            i = i->next;
                                                            if ( i->next )
                                                            {
                                                              v1 = v;
                                                              if ( *(int*)(i[4].next) )
                                                                continue;
                                                            }
                                                            v = &y0 & 0xFFFFFFFF;
                                                            v1 = &y0 & 0xFFFFFFFF;
                                                            break;
                                                          }
                                                        }
                                                        else
                                                          v1 = v2;
                                                      }
                                                      i = i->prev;
                                                      if ( i->prev == 0 || v->routingedge == 0 )
                                                        av1 = v2;
                                                      else
                                                      while ( max->arcv == v->routingedge->e.segment.v1 || max->arcv == *(int*)(*(int*)(i[4].next) + 16) )
                                                      {
                                                        i = i->prev;
                                                        if ( i->prev )
                                                        {
                                                          av1 = v;
                                                          v2 = &i->data[0];
                                                          if ( *(int*)(i[4].next) )
                                                          {
                                                            v = v2;
                                                          }
                                                        }
                                                        av1 = v;
                                                        break;
                                                      }
                                                      newarc = toporouter_arc_new( oproute, av1, v1, max->arcv, max->r, max->wind );
                                                      if ( toporouter_vertex_class( ) == 0 )
                                                      {
                                                        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
                                                      }
                                                      else
                                                      if ( t1 )
                                                      {
                                                        if ( *(int*)(t1) == 0 )
                                                          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
                                                        else
                                                        do
                                                        {
                                                          if ( *(int*)(*(int*)(t1) + 64) == toporouter_vertex_class( ) )
                                                            calculate_term_to_arc( &t1[0], newarc, 0 );
                                                            if ( toporouter_vertex_class( ) == 0 )
                                                            {
                                                              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
                                                            }
                                                            else
                                                            if ( t2 )
                                                            {
                                                              if ( *(int*)(t2) == 0 )
                                                                g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
                                                              else
                                                              do
                                                              {
                                                                if ( *(int*)(*(int*)(t2) + 64) == toporouter_vertex_class( ) )
                                                                  calculate_term_to_arc( &t2[0], newarc, 1 );
                                                                  if ( check_arc_for_loops( t1, newarc, t2 ) )
                                                                  {
                                                                    if ( arc2 )
                                                                    {
                                                                      if ( ( arc1 != 0 ) & 255 )
                                                                        calculate_arc_to_arc( r, arc1, arc2 );
                                                                      else
                                                                        calculate_term_to_arc( &t1[0], arc2, 0 );
                                                                    }
                                                                    else
                                                                    if ( ( arc1 != 0 ) & 255 )
                                                                      calculate_term_to_arc( &t2[0], arc1, 1 );
                                                                    v2wind = g_list_remove( &v2wind, &max );
                                                                    free( max );
                                                                    if ( v2wind == 0 )
                                                                    {
                                                                      break;
                                                                    }
                                                                    do
                                                                    {
                                                                      max = &v2wind;
                                                                      max->list->data[0] = v2wind;
                                                                      i = &v2wind;
                                                                      v2 = &v2wind;
                                                                    }
                                                                    while ( v2wind );
                                                                  }
                                                                  else
                                                                  {
                                                                    v2 = (toporouter_vertex_t*)oproute_rubberband_segment( r, oproute, path, t1, &newarc, debug );
                                                                    list2 = oproute_rubberband_segment( r, oproute, i->next, &newarc, t2, debug );
                                                                    if ( v2 )
                                                                    {
                                                                      GList *list;
                                                                      toporouter_arc_t *testarc;
                                                                      toporouter_arc_t *parc = arc1;
                                                                      gdouble px;
                                                                      gdouble py;
                                                                      testarc = *(int*)(g_list_last( &v2->v.p.object.klass->info.name[0] ));
                                                                      if ( coord_intersect_prop( parc ? parc->x1 : t1[3], parc ? parc->y1 : t1[5], testarc->x0, testarc->y0, testarc->x1, testarc->y1, newarc->x0, newarc->y0 ) )
                                                                      {
                                                                        v2 = (toporouter_vertex_t*)g_list_remove( &v2->v.p.object.klass->info.name[0], &testarc );
                                                                        if ( parc )
                                                                          calculate_arc_to_arc( r, parc, newarc );
                                                                          if ( list2 == 0 )
                                                                          {
                                                                            g_list_foreach( ebp_44, &free_list_elements, 0 );
                                                                            g_list_free( ebp_44 );
                                                                            g_list_concat( &v2->v.p.object.klass->info.name[0], g_list_prepend( list2, &newarc ) );
                                                                            break;
                                                                          }
                                                                        {
                                                                          toporouter_arc_t *testarc = &list2->data[0];
                                                                          toporouter_arc_t *narc = arc2;
                                                                          gdouble nx;
                                                                          gdouble ny;
                                                                          if ( coord_intersect_prop( newarc->x1, newarc->y1, testarc->x0, testarc->y0, testarc->x1, testarc->y1, narc ? narc->x0 : t2[3], narc ? narc->y0 : t2[5] ) == 0 )
                                                                          {
                                                                            g_list_foreach( ebp_44, &free_list_elements, 0 );
                                                                            g_list_free( ebp_44 );
                                                                            g_list_concat( &v2->v.p.object.klass->info.name[0], g_list_prepend( list2, &newarc ) );
                                                                            break;
                                                                          }
                                                                          list2 = g_list_remove( list2, &testarc );
                                                                          if ( narc )
                                                                            calculate_arc_to_arc( r, newarc, narc );
                                                                          else
                                                                            calculate_term_to_arc( &t2[0], newarc, 1 );
                                                                        }
                                                                        else
                                                                          calculate_term_to_arc( &t1[0], newarc, 0 );
                                                                      }
                                                                    }
                                                                  }
                                                                else
                                                              }
                                                              while ( *(int*)(*(int*)(*(int*)(t2) + 64) + 64) );
                                                            }
                                                            if ( calculate_arc_to_arc( r, newarc, &t2[0] ) )
                                                            {
                                                              __printf_chk( 1, "\tERROR: best: r = %f d = %f\n", max->r, max->d );
                                                              break;
                                                            }
                                                          else
                                                        }
                                                        while ( *(int*)(*(int*)(*(int*)(t1) + 64) + 64) );
                                                      }
                                                      if ( calculate_arc_to_arc( r, &t1[0], newarc ) )
                                                      {
                                                        __printf_chk( 1, "\tERROR: best:  r = %f d = %f\n", max->r, max->d );
                                                        break;
                                                      }
                                                    }
                                                    while ( v2wind );
                                                  }
                                                  else
                                                  {
                                                    y1 = x1 = y1;
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
                                        }
                                        else
                                        {
                                        }
                                        check_non_intersect_vertex( x0, y0, y1, y1, &v2wind, &arcwind, &arcr, debug, &arc1->centre );
                                        x1 = x1;
                                        y1 = y1;
                                        if ( 0.000099999997 < 0.000000000000 )
                                        {
                                          arcs = g_list_prepend( arcs, new_rubberband_arc( v, &v->routingedge->e.segment.v2->p.object.klass->info.name[0], arcr, 0.000000000000, arcwind, i ) );
                                          y1 = y1;
                                          (int)d = ebp_120;
                                        }
                                        else
                                        {
                                        }
                                      }
                                    }
                                  }
                                  else
                                    y1 = 0.000000000000;
                                  check_non_intersect_vertex( x0, y0, fp7, y1, ebp_76 );
                                  y1 = x1 = 0.000000000000;
                                  if ( 0.000000000000 <= 0.000099999997 )
                                  {
                                  }
                                  else
                                  {
                                    arcs = eax;
                                    y1 = x1;
                                    (int)d = ebp_120;
                                  }
                                }
                                else
                                {
                                  y1 = x1 = 0.000000000000;
                                }
                                if ( v->routingedge->e.segment.v2 != arc1->centre )
                                {
                                }
                              }
                            }
                            else
                            {
                              v2wind = -1;
                              if ( -0.000099999997 <= d )
                              {
                                v2wind = 0;
                                if ( v1wind )
                                {
                                  if ( v2wind/*.1_1of4*/ == 0 )
                                  {
                                  }
                                }
                                else
                                {
                                  y1 = x1 = 0.000000000000;
                                }
                              }
                            }
                            if ( v1wind && v2wind != v1wind )
                            {
                              if ( arc1 == 0 || arc1->centre != v2->v.p.x & 0xFFFFFFFF )
                              {
                                if ( arc2 )
                                {
                                  if ( arc2->centre != path )
                                    y1 = 0.000000000000;
                                  else
                                  {
                                    y1 = x1 = 0.000000000000;
                                    if ( arc1 )
                                    {
                                    }
                                    else
                                    {
                                      if ( arc2 )
                                      {
                                        if ( arc2->centre != path )
                                        {
                                        }
                                      }
                                      else
                                      {
                                      }
                                      check_intersect_vertex( x0, y0, y1, y1, &v2wind, &arcwind, &arcr, debug, &arc1->centre );
                                      x1 = x1;
                                      y1 = y1;
                                      if ( 0.000099999997 < 0.000000000000 )
                                      {
                                        arcs = g_list_prepend( arcs, new_rubberband_arc( v, &v->routingedge->e.segment.v2->p.object.klass->info.name[0], arcr, 0.000000000000, arcwind, i ) );
                                        x1 = y1;
                                      }
                                      else
                                      {
                                      }
                                    }
                                  }
                                }
                                else
                                  y1 = 0.000000000000;
                                check_intersect_vertex( x0, y0, fp7, y1, ebp_76 );
                                y1 = x1 = 0.000000000000;
                                if ( 0.000000000000 <= 0.000099999997 )
                                {
                                }
                                else
                                {
                                  arcs = eax;
                                  y1 = x1;
                                  (int)d = ebp_120;
                                }
                              }
                              else
                              {
                                y1 = x1 = 0.000000000000;
                              }
                              if ( v->routingedge->e.segment.v2 != arc1->centre )
                              {
                              }
                            }
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
                    arcs = 0;
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
          }
          while ( *(int*)(*(int*)(*(int*)(t2) + 64) + 64) );
        }
      {
        /* phantom */ int _g_boolean_var_;
        if ( toporouter_arc_class( ) == 0 )
        {
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        }
        else
        if ( t2 )
        {
          if ( *(int*)(t2) == 0 )
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
          else
          do
          {
            if ( *(int*)(*(int*)(t2) + 64) == toporouter_arc_class( ) )
            {
              arc2 = &t2[0];
              v2 = &t2[19];
            }
            else
            {
            }
          }
          while ( *(int*)(*(int*)(*(int*)(t2) + 64) + 64) );
        }
        g_assertion_message_expr( 0, "../../src/toporouter.c", 5845, __PRETTY_FUNCTION__, "TOPOROUTER_IS_ARC(t2)" );
        v2 = (toporouter_vertex_t*)oproute_rubberband_segment( r, oproute, path, t1, &newarc, debug );
        list2 = oproute_rubberband_segment( r, oproute, i->next, &newarc, t2, debug );
      }
      }
      else
    }
    while ( *(int*)(*(int*)(*(int*)(t1) + 64) + 64) );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( gts_object_is_from_class( t1, toporouter_arc_class( ) ) == 0 )
    g_assertion_message_expr( 0, "../../src/toporouter.c", 5834, __PRETTY_FUNCTION__, "TOPOROUTER_IS_ARC(t1)" );
  else
  {
    x0 = t1[7];
    arc1 = &t1[0];
    y0 = t1[9];
    v1 = &t1[18];
  }
}
}
void oproute_check_all_loops( toporouter_t *r, toporouter_oproute_t *oproute )
{
  int eax;
  int ecx;
  int edx;
  GList *i = &oproute->arcs->data[0];
  gpointer t1;
  while ( t1 = &oproute->term1, i )
  {
    while ( arc = &i->data[0], check_arc_for_loops( t1, arc, t2 ) == 0 )
    {
      i = i->next;
      if ( i->next == 0 )
        break;
      t1 = (void*)arc;
    }
    *(int*)(t1) = t1;
    if ( toporouter_arc_class( ) == 0 )
      goto B13;
    else
    if ( t1 )
    {
      if ( *(int*)(t1) == 0 )
        goto B19;
      else
      do
      {
        if ( *(int*)(*(int*)(t1) + 64) == toporouter_arc_class( ) )
        {
          if ( t1 )
          {
            if ( toporouter_arc_class( ) == 0 )
              goto B13;
            else
            if ( t2 )
            {
              if ( *(int*)(t2) == 0 )
              {
              }
              else
              {
                do
                {
                  if ( *(int*)(*(int*)(t2) + 64) == toporouter_arc_class( ) )
                  {
                    if ( t2 )
                      calculate_arc_to_arc( r, &t1[0], &t2[0] );
                      i = g_list_remove( &oproute->arcs->data[0], &arc );
                      oproute->arcs->data[0] = g_list_remove( &oproute->arcs->data[0], &arc );
                      break;
                      while ( t1 = &oproute->term1, i )
                      {
                        while ( arc = &i->data[0], check_arc_for_loops( t1, arc, t2 ) == 0 )
                        {
                          i = i->next;
                        }
                      }
                      break;
                    else
                      break;
                  }
                  else
                  {
                  }
                }
                while ( *(int*)(*(int*)(*(int*)(t2) + 64) + 64) );
                break;
              }
            }
            else
              break;
          }
          else
            break;
        }
        else
        {
        }
      }
      while ( *(int*)(*(int*)(*(int*)(t1) + 64) + 64) );
      if ( toporouter_arc_class( ) == 0 )
      {
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      }
      else
      if ( t1 )
      {
        if ( *(int*)(t1) == 0 )
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
        else
        do
        {
          if ( *(int*)(*(int*)(t1) + 64) == toporouter_arc_class( ) )
          {
            if ( t1 )
              calculate_term_to_arc( &t2[0], &t1[0], 1 );
            else
              break;
          }
          else
        }
        while ( *(int*)(*(int*)(*(int*)(t1) + 64) + 64) );
      }
      if ( gts_object_is_from_class( t2, toporouter_arc_class( ) ) )
        calculate_term_to_arc( &t1[0], &t2[0], 0 );
B19:;
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    }
B13:;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
  return;
}
GtsTriangle *opposite_triangle( GtsTriangle *t, toporouter_edge_t *e )
{
  int eax;
  int ecx;
  int edx;
  GSList *i;
{
  /* phantom */ int _g_boolean_var_;
  i = &e->e.triangles;
  if ( t == 0 )
    g_assertion_message_expr( 0, "../../src/toporouter.c", 6040, __PRETTY_FUNCTION__, "e && t" );
  if ( i == 0 )
  {
    return 0;
  }
  if ( t == i )
  {
    do
    {
      i = i->next;
      if ( i->next == 0 )
      {
        break;
      }
    }
    while ( i != i );
    return &i->data[0];
  }
  else
  {
    return 0;
  }
  return 0;
}
}
void speccut_edge_routing_from_edge( GList *i, toporouter_edge_t *e )
{
  int edx;
  if ( i )
  {
    do
    {
      curv = &i->data[0];
      if ( (int)curv->flags/*.1_1of4*/ >= 0 && vertex_intersect( &curv[0].v, (int)( &curv->parent ), &e->e.segment.v1, &e->e.segment.v2 ) )
      {
        gint index;
        *(int*)vertex_intersect( &curv[0].v, (int)( &curv->parent ), &e->e.segment.v1, &e->e.segment.v2 )/*.56*/ |= 2304;
        *(int*)vertex_intersect( &curv[0].v, (int)( &curv->parent ), &e->e.segment.v1, &e->e.segment.v2 )/*.48*/ = curv[0].v;
        *(int*)vertex_intersect( &curv[0].v, (int)( &curv->parent ), &e->e.segment.v1, &e->e.segment.v2 )/*.52*/ = e[0].e.segment.object.klass[0].info.name[0];
        e->routing = g_list_insert_sorted_with_data( e->routing, vertex_intersect( &curv[0].v, (int)( &curv->parent ), &e->e.segment.v1, &e->e.segment.v2 ), &routing_edge_insert, &e );
        *(int*)vertex_intersect( &curv[0].v, (int)( &curv->parent ), &e->e.segment.v1, &e->e.segment.v2 )/*.28*/ = curv->v.p.z;
        *(int*)vertex_intersect( &curv[0].v, (int)( &curv->parent ), &e->e.segment.v1, &e->e.segment.v2 )/*.88*/ = curv->route->netlist->_toporouter_netlist_t;
        *(int*)vertex_intersect( &curv[0].v, (int)( &curv->parent ), &e->e.segment.v1, &e->e.segment.v2 )/*.84*/ = curv->oproute->_toporouter_oproute_t;
        *(int*)vertex_intersect( &curv[0].v, (int)( &curv->parent ), &e->e.segment.v1, &e->e.segment.v2 )/*.44*/ = curv->parent;
        *(int*)(*(int*)vertex_intersect( &curv->v, (int)( &curv->parent ), &e->e.segment.v1, &e->e.segment.v2 )/*.88*/ + 44) = eax[0].data[0];
        if ( *(int*)vertex_intersect( &curv[0].v, (int)( &curv->parent ), &e->e.segment.v1, &e->e.segment.v2 )/*.84*/ )
        {
          *(int*)(*(int*)vertex_intersect( &curv[0].v, (int)( &curv->parent ), &e->e.segment.v1, &e->e.segment.v2 )/*.84*/ + 32) = *(int*)(*(int*)vertex_intersect( &curv[0].v, (int)( &curv->parent ), &e->e.segment.v1, &e->e.segment.v2 )/*.88*/ + 44);
          i = i->next;
        }
      }
    {
      toporouter_vertex_t *curv;
      i = i->next;
      if ( i->next == 0 )
        break;
    }
    }
    while ( i->next );
  }
  return;
}
void speccut_edge_patch_links( toporouter_edge_t *e )
{
  if ( e->routing )
  {
    do
    {
      e->routing->next->_GList = e->routing->next;
      e->routing->next->_GList = e->routing->next;
    }
    while ( e->routing->next );
  }
  return;
}
gint check_speccut( toporouter_oproute_t *oproute, toporouter_vertex_t *v1, toporouter_vertex_t *v2, toporouter_edge_t *e, toporouter_edge_t *e1, toporouter_edge_t *e2 )
{
  int eax;
  int edx;
  double fp0;
  double fp1;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  GtsTriangle *t, *opt;
  toporouter_vertex_t *opv, *opv2;
  /* phantom */ toporouter_edge_t *ope1, *ope2;
  gdouble cap;
  gdouble flow;
  gdouble line_int_x;
  gdouble line_int_y;
  if ( toporouter_constraint_class( ) == 0 )
  {
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
      if ( e->e.segment.object.klass == toporouter_constraint_class( ) )
      {
      {
        toporouter_edge_t *newe;
        break;
      }
      }
      else
    }
    while ( e[2].e.segment.object.klass->parent_class );
  }
  if ( t == 0 )
  {
    __printf_chk( 1, "check_speccut: NULL t\n" );
    return newe->routing != 0;
  }
  opt = opposite_triangle( t, e );
  if ( opt == 0 )
  {
    __printf_chk( 1, "check_speccut: NULL opt\n" );
    return newe->routing != 0;
  }
  if ( e2 && e1 )
  {
    opv = &e1->e.segment.v1->p.object.klass->info.name[0];
    if ( e1->e.segment.v1 != e2->e.segment.v1 )
    {
      opv = &e2->e.segment.v1->p.object.klass->info.name[0];
      if ( e1->e.segment.v2 != opv )
      {
        opv = &e1->e.segment.v1->p.object.klass->info.name[0];
        if ( e2->e.segment.v2 != opv )
        {
          if ( e2->e.segment.v2 == e1->e.segment.v2 )
            opv = &e1->e.segment.v2->p.object.klass->info.name[0];
        }
      }
    }
    if ( opv == 0 )
    {
      __printf_chk( 1, "check_speccut: NULL opv\n" );
      return newe->routing != 0;
    }
    if ( gts_triangle_vertex_opposite( opt, &e[0].e ) == 0 )
    {
      __printf_chk( 1, "check_speccut: NULL opv2\n" );
      return newe->routing != 0;
    }
    if ( 0.000099999997 < ( ( e->e.segment.v1->p.x - *(int*)gts_triangle_vertex_opposite( opt, &e[0].e )/*.12*/ ) * ( opv->v.p.y - e->e.segment.v1->p.y ) ) - ( ( e->e.segment.v1->p.y - *(int*)gts_triangle_vertex_opposite( opt, &e[0].e )/*.20*/ ) * ( opv->v.p.x - e->e.segment.v1->p.x ) ) )
    {
    }
    else
    if ( ( ( e->e.segment.v1->p.x - *(int*)gts_triangle_vertex_opposite( opt, &e[0].e )/*.12*/ ) * ( opv->v.p.y - e->e.segment.v1->p.y ) ) - ( ( e->e.segment.v1->p.y - *(int*)gts_triangle_vertex_opposite( opt, &e[0].e )/*.20*/ ) * ( opv->v.p.x - e->e.segment.v1->p.x ) ) < -0.000099999997 )
      opv->v.p.x = *(int*)gts_triangle_vertex_opposite( opt, &e[0].e )/*.20*/;
    else
    {
    }
    fp6 = ( ( e->e.segment.v2->p.x - fp7 ) * ( fp6 - e->e.segment.v2->p.y ) ) - ( ( fp4 - e->e.segment.v2->p.x ) * ( e->e.segment.v2->p.y - fp5 ) );
    if ( 0.000099999997 < ( ( e->e.segment.v2->p.x - fp7 ) * ( fp6 - e->e.segment.v2->p.y ) ) - ( ( fp4 - e->e.segment.v2->p.x ) * ( e->e.segment.v2->p.y - fp5 ) ) )
    {
    }
    else
    if ( -0.000099999997 <= fp6 )
    {
    }
    if ( eax == 0 )
    {
      toporouter_edge_t *newe;
      return newe->routing != 0;
    }
    if ( gts_triangle_vertex_opposite( opt, &e[0].e ) != *(int*)gts_vertices_are_connected( gts_triangle_vertex_opposite( opt, &e[0].e ), e->e.segment.v1 )/*.12*/ )
    {
      gts_object_is_from_class( gts_vertices_are_connected( gts_triangle_vertex_opposite( opt, &e[0].e ), e->e.segment.v1 ), toporouter_constraint_class( ) );
      *(int*)gts_vertices_are_connected( gts_triangle_vertex_opposite( opt, &e[0].e ), e->e.segment.v1 )/*.28*/ = eax[0].data[0];
    }
    else
    {
      gts_object_is_from_class( gts_vertices_are_connected( gts_triangle_vertex_opposite( opt, &e[0].e ), e->e.segment.v1 ), toporouter_constraint_class( ) );
      *(int*)gts_vertices_are_connected( gts_triangle_vertex_opposite( opt, &e[0].e ), e->e.segment.v1 )/*.28*/ = eax[0].data[0];
    }
    triangle_interior_capacity( opt, (toporouter_vertex_t*)gts_triangle_vertex_opposite( opt, &e[0].e ) );
    cap = 0.000000000000;
    flow_from_edge_to_edge( opt, (toporouter_edge_t*)gts_vertices_are_connected( gts_triangle_vertex_opposite( opt, &e[0].e ), e->e.segment.v1 ), (toporouter_edge_t*)gts_vertices_are_connected( gts_triangle_vertex_opposite( opt, &e[0].e ), e->e.segment.v2 ), (toporouter_vertex_t*)gts_triangle_vertex_opposite( opt, &e[0].e ), v1 );
    opt = 0.000000000000;
    if ( eax )
    {
      *(int*)gts_vertices_are_connected( gts_triangle_vertex_opposite( opt, &e[0].e ), e->e.segment.v1 )/*.28*/ = eax[0].data[0];
    }
    else
    {
      *(int*)gts_vertices_are_connected( gts_triangle_vertex_opposite( opt, &e[0].e ), e->e.segment.v1 )/*.28*/ = eax[0].data[0];
    }
    if ( cap < opt )
    {
      toporouter_edge_t *newe;
      return newe->routing != 0;
    }
    newe = (toporouter_edge_t*)gts_edge_new( (GtsEdgeClass*)toporouter_edge_class( ), (int)( &opv->v ), gts_triangle_vertex_opposite( opt, &e[0].e ) );
    gts_object_is_from_class( &e1, toporouter_constraint_class( ) );
    speccut_edge_routing_from_edge( &e1->routing, newe );
    gts_object_is_from_class( &e2, toporouter_constraint_class( ) );
    speccut_edge_routing_from_edge( e2->routing, newe );
    gts_object_is_from_class( gts_vertices_are_connected( gts_triangle_vertex_opposite( opt, &e[0].e ), e->e.segment.v1 ), toporouter_constraint_class( ) );
    speccut_edge_routing_from_edge( *(int*)(GList*)gts_vertices_are_connected( gts_triangle_vertex_opposite( opt, &e[0].e ), e->e.segment.v1 )/*.28*/, newe );
    gts_object_is_from_class( gts_vertices_are_connected( gts_triangle_vertex_opposite( opt, &e[0].e ), e->e.segment.v2 ), toporouter_constraint_class( ) );
    speccut_edge_routing_from_edge( *(int*)(GList*)gts_vertices_are_connected( gts_triangle_vertex_opposite( opt, &e[0].e ), e->e.segment.v2 )/*.28*/, newe );
    while ( newe->routing )
    {
    }
    __printf_chk( 1, "SPECCUT WITH v %f,%f for seg %f,%f %f,%f detected\n", *(int*)gts_triangle_vertex_opposite( opt, &e[0].e )/*.12*/, *(int*)gts_triangle_vertex_opposite( opt, &e[0].e )/*.20*/, v1->v.p.x, v1->v.p.y, v2->v.p.x, v2->v.p.y );
    __printf_chk( 1, "\tflow %f cap %f\n", opt, cap );
    print_edge( newe );
    return newe->routing != 0;
  }
}
// Lost vars at line 6198 through condition folding
gint oproute_path_speccut( toporouter_oproute_t *oproute )
{
  int eax;
  int ecx;
  GList *i;
  /* phantom */ toporouter_vertex_t *pv;
  do
  {
    i = &oproute->path;
    if ( oproute->path == 0 || i->next == 0 )
      break;
    do
    {
      v = &i->data[0];
      if ( v->v.p.object.klass->info.name[0] )
      {
        if ( v->routingedge || v->routingedge )
        {
          if ( ( ( *(char*)(v->v.p.object.klass->info.name[0] + 57) & 8 ) & 255 ) == 0 && ( ( *(char*)(v->v.p.object.klass->info.name[0] + 57) & 8 ) & 255 ) == 0 )
          {
            if ( v->routingedge == 0 )
            {
              if ( check_speccut( oproute, &v->v.p.object.klass->info.name[0], v, (toporouter_edge_t*)gts_vertices_are_connected( &v->routingedge->e.segment.v1, (GtsVertex*)gts_vertices_are_connected( &v->routingedge->e.segment.v2, &v[0].v ) ), &v->routingedge, (toporouter_edge_t*)gts_vertices_are_connected( &v->routingedge->e.segment.v2, &v[0].v ) ) )
                continue;
              else
              {
              }
            }
            else
            {
              if ( v->routingedge )
              {
                /* phantom */ toporouter_vertex_t *v1, *v2;
                if ( v->routingedge->e.segment.v1 == v->routingedge->e.segment.v1 )
                {
                }
                else
                if ( v->routingedge->e.segment.v1 == v->routingedge->e.segment.v2 )
                {
                }
                else
                if ( v->routingedge->e.segment.v2 != v->routingedge->e.segment.v1 )
                {
                }
              }
              else
              {
                if ( check_speccut( oproute, &v->v.p.object.klass->info.name[0], v, (toporouter_edge_t*)gts_vertices_are_connected( &v->routingedge->e.segment.v1, (GtsVertex*)gts_vertices_are_connected( &v->routingedge->e.segment.v2, &v[0].v ) ), &v->routingedge, (toporouter_edge_t*)gts_vertices_are_connected( &v->routingedge->e.segment.v2, &v[0].v ) ) )
                  continue;
                else
                {
                }
              }
            }
            if ( check_speccut( oproute, ebp_100, ebp_96, ebp_92, ebp_92, ebp_88 ) )
              continue;
            else
              v = &v->v.p.object.klass->info.name[0];
          }
        }
        else
          v = &v->v.p.object.klass->info.name[0];
      }
    }
    while ( i->next );
    break;
  }
  while ( check_speccut( oproute, ebp_100, ebp_96, ebp_92, ebp_92, ebp_88 ) );
}
toporouter_oproute_t *oproute_rubberband( toporouter_t *r, GList *path )
{
  int eax;
  int edx;
  /* phantom */ toporouter_oproute_t *oproute;
{
  /* phantom */ int _g_boolean_var_;
  if ( path == 0 )
  {
    g_assertion_message_expr( 0, "../../src/toporouter.c", 6235, __PRETTY_FUNCTION__, "path" );
  }
  *(int*)calloc( 1, 40 )/*.4*/ = path->_GList;
  *(int*)(calloc( 1, 40 )) = 0;
  *(int*)calloc( 1, 40 )/*.8*/ = *(int*)(g_list_last( path ));
  *(int*)calloc( 1, 40 )/*.12*/ = *(int*)(*(int*)(*(int*)(( *(int*)calloc( 1, 40 )/*.4*/ ? *(int*)(*(int*)calloc( 1, 40 )/*.4*/ + 40) : 0 ) + 96) + 12) + 12);
  *(int*)calloc( 1, 40 )/*.32*/ = path[0].data[0];
  *(int*)calloc( 1, 40 )/*.36*/ = 0;
  *(int*)calloc( 1, 40 )/*.16*/ = *(int*)(*(int*)(*(int*)(( *(int*)calloc( 1, 40 )/*.4*/ ? *(int*)(*(int*)calloc( 1, 40 )/*.4*/ + 40) : 0 ) + 96) + 12) + 8);
  *(int*)(*(int*)calloc( 1, 40 )/*.4*/ + 44) = 0;
  *(int*)calloc( 1, 40 )/*.20*/ = (long long)( *(double*)(*(int*)calloc( 1, 40 )/*.4*/ + 28) );
  *(int*)(*(int*)calloc( 1, 40 )/*.8*/ + 48) = 0;
  path = path;
  do
  {
    if ( ( path[4].prev & 1 ) & 255 )
      path[7].data = calloc( 1, 40 );
    path = path->next;
  }
  while ( path->next );
  oproute_path_speccut( path + 84 );
  path[7].data = oproute_rubberband_segment( r, path + 84, &path->data[0], &path[7].next, &path[7].prev, 0 );
  oproute_check_all_loops( r, path + 84 );
  return path + 84;
}
}
void toporouter_export( toporouter_t *r )
{
  GList *i;
  GList *oproutes = 0;
  i = &r->routednets;
  if ( r->routednets )
  {
  {
    do
    {
      i = i->next;
      oproutes = g_list_prepend( oproutes, oproute_rubberband( r, *(int*)(i[3].prev) ) );
    }
    while ( i->next );
    if ( g_list_prepend( oproutes, oproute_rubberband( r, *(int*)(i[3].prev) ) ) )
    {
      i = oproutes;
    {
      do
      {
        toporouter_oproute_t *oproute = &i->data[0];
        export_oproutes( r, &i->data[0] );
        oproute_free( &i->data[0] );
        i = i->next;
      }
      while ( i->next == 0 );
    }
    }
  }
  }
  Message( "Reticulating splines... successful\n\n" );
  r = &oproutes[0].data[0];
}
toporouter_route_t *routedata_create( void )
{
  /* phantom */ toporouter_route_t *routedata;
  *(int*)calloc( 1, 80 )/*.20*/ = 0.000000000000;
  *(int*)(calloc( 1, 80 )) = 0;
  *(int*)calloc( 1, 80 )/*.40*/ = 0;
  *(int*)calloc( 1, 80 )/*.44*/ = 0;
  *(int*)calloc( 1, 80 )/*.36*/ = 0;
  *(int*)calloc( 1, 80 )/*.64*/ = 0.000000000000;
  *(int*)calloc( 1, 80 )/*.48*/ = 0;
  *(int*)calloc( 1, 80 )/*.8*/ = 0;
  *(int*)calloc( 1, 80 )/*.4*/ = 0;
  *(int*)calloc( 1, 80 )/*.16*/ = 0;
  *(int*)calloc( 1, 80 )/*.12*/ = 0;
  *(int*)calloc( 1, 80 )/*.60*/ = 0;
  *(int*)calloc( 1, 80 )/*.72*/ = 0;
  *(int*)calloc( 1, 80 )/*.76*/ = 0;
  *(int*)calloc( 1, 80 )/*.56*/ = 0;
  *(int*)calloc( 1, 80 )/*.52*/ = 0;
  return calloc( 1, 80 );
}
toporouter_route_t *import_route( toporouter_t *r, RatType *line )
{
  int eax;
  toporouter_route_t *routedata = routedata_create( );
  routedata->src = cluster_find( r, (double)( line->Point1.X ), (double)( line->Point1.Y ), (double)( (long long)( line->group1 ) ) );
  routedata->dest = cluster_find( r, (double)( line->Point2.X ), (double)( line->Point2.Y ), (double)( (long long)( line->group2 ) ) );
  if ( routedata->src == 0 )
  {
    __printf_chk( 1, "couldn't locate src\n" );
  }
  if ( routedata->dest == 0 )
    __printf_chk( 1, "couldn't locate dest\n" );
  if ( routedata->src == 0 || routedata->dest == 0 )
  {
    __printf_chk( 1, "PROBLEM: couldn't locate rat src or dest for rat %d,%d,%d -&gt; %d,%d,%d\n", line->Point1.X, line->Point1.Y, (int)line->group1, line->Point2.X, line->Point2.Y, (int)line->group2 );
    routedata = 0;
    free( routedata );
  }
  routedata = &routedata->src->netlist->clusters->pdata[0][0];
{
  /* phantom */ int _g_boolean_var_;
  if ( routedata->dest->netlist != routedata->src->netlist )
  {
    g_assertion_message_expr( 0, "../../src/toporouter.c", 6354, __PRETTY_FUNCTION__, "routedata-&gt;src-&gt;netlist == routedata-&gt;dest-&gt;netlist" );
  }
  g_ptr_array_add( r->routes, &routedata );
  g_ptr_array_add( *(int*)(routedata->src), &routedata );
  r->failednets = g_list_prepend( r->failednets, &routedata );
}
  return &routedata->netlist->clusters->pdata[0][0];
}
void delete_route( toporouter_route_t *routedata, guint destroy )
{
  int eax;
#error unstructured control flow
}
void remove_route( GList *path )
{
  GList *i;
  if ( path )
  {
    do
    {
      toporouter_vertex_t *tv = &i->data[0];
      i[3].prev = 0;
      i[4].data = 0;
      if ( tv->routingedge )
      {
        if ( toporouter_constraint_class( ) )
        {
          if ( tv->routingedge )
          {
            if ( tv->routingedge->e.segment.object.klass->info.name[0] == 0 )
            {
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
            }
            else
            do
            {
            }
            while ( tv->routingedge->_toporouter_edge_t != toporouter_constraint_class( ) && tv->routingedge->_toporouter_edge_t );
          }
        }
        else
        {
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        }
        tv->routingedge->routing = g_list_remove( &tv->routingedge->routing, &tv );
      }
      i = i->next;
    }
    while ( i->next );
  }
  return;
}
// Lost vars at line 6472 through condition folding
gint apply_route( GList *path, toporouter_route_t *routedata )
{
  int edx;
  GList *i;
  toporouter_vertex_t *pv;
  gint count = 0;
  if ( path )
  {
    i = path;
    pv = 0;
  {
    do
    {
      toporouter_vertex_t *tv = &i->data[0];
      if ( tv->routingedge )
      {
        if ( toporouter_constraint_class( ) )
        {
          if ( tv->routingedge )
          {
            if ( tv->routingedge->e.segment.object.klass->info.name[0] == 0 )
            {
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
            }
            else
            do
            {
            }
            while ( tv->routingedge->_toporouter_edge_t != toporouter_constraint_class( ) && tv->routingedge->_toporouter_edge_t );
          }
        }
        else
        {
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        }
        tv->routingedge->routing = g_list_insert_sorted_with_data( &tv->routingedge->routing, &tv, &routing_edge_insert, &tv->routingedge );
        count++;
      }
      if ( pv )
      {
        pv->child = tv;
        tv->parent = pv;
      }
      if ( ( ( tv->flags/*.2_2of4*/ & 1 ) & 255 ) && tv->route != routedata )
      {
        g_assertion_message_expr( 0, "../../src/toporouter.c", 6472, __PRETTY_FUNCTION__, "tv-&gt;route == routedata" );
      }
      i = i->next;
      pv = tv;
    }
    while ( i->next );
    tv->child = 0;
    path->_GList = 0;
  }
  }
  return count;
}
gint compare_routedata_ascending( gconstpointer a, gconstpointer b )
{
  /* phantom */ toporouter_route_t *ra;
  /* phantom */ toporouter_route_t *rb;
  return (int)( a[5] - b[5] );
}
void print_costmatrix( gdouble *m, guint n )
{
  __printf_chk( 1, "COST MATRIX:\n" );
{
  guint i;
  if ( n )
  {
    i = 0;
    do
    {
    {
      do
      {
        guint j;
        j++;
        __printf_chk( 1, "%f ", *(double*)(ebp_36 + m + 8) );
      }
      while ( n <= j );
      __printf_chk( 1, "\n" );
      i++;
    }
    }
    while ( n <= i );
  }
  return;
}
}
toporouter_netscore_t *netscore_create( toporouter_t *r, toporouter_route_t *routedata, guint n, guint id )
{
  int eax;
  double fp7;
  /* phantom */ toporouter_netscore_t *netscore;
  GList *path;
  *(int*)calloc( 1, 36 )/*.28*/ = routedata->netlist->_toporouter_netlist_t;
  *(int*)calloc( 1, 36 )/*.16*/ = routedata->score;
  path = route( r, routedata, 0 );
  routedata->detourscore & 0xFFFFFFFF = routedata->score & 0xFFFFFFFF;
  *(int*)(calloc( 1, 36 )) = id;
  if ( abs( *(double*)(calloc( 1, 36 ) + 28 + 20) ) < 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 )
  {
    __printf_chk( 1, "WARNING: !finite(detourscore)\n" );
    print_cluster( routedata->src );
    print_cluster( routedata->dest );
  }
{
  guint i;
  *(int*)calloc( 1, 36 )/*.4*/ = calloc( 1, n << 2 );
  if ( n )
  {
    i = 0;
    while ( i++, i + 1 < n )
    {
    }
  }
  *(int*)calloc( 1, 36 )/*.8*/ = 0.000000000000;
  *(int*)calloc( 1, 36 )/*.24*/ = 0;
  *(int*)calloc( 1, 36 )/*.32*/ = r->bboxes->_GSList;
  if ( path )
  {
    routedata->topopath = g_list_copy( routedata->path );
    delete_route( routedata, 0 );
  }
  return (toporouter_netscore_t*)calloc( 1, 36 );
}
}
void print_netscores( GPtrArray *netscores )
{
  __printf_chk( 1, "NETSCORES: \n\n" );
  __printf_chk( 1, "     %15s %15s %15s\n----------------------------------------------------\n", "Score", "Detour Sum", "Pairwise Fails" );
{
  toporouter_netscore_t **i;
  i[0] = &netscores->pdata[0][0];
  if ( netscores->pdata[0] < netscores->len + netscores->pdata[0] )
  {
    do
    {
      i[0] = i + 4;
      __printf_chk( 1, "%4d %15f %15f %15d %15x\n", i[0], i[4]->id, i[2]->id, i[6]->id, i[0] );
    }
    while ( netscores->pdata <= netscores->len );
  }
  __printf_chk( 1, "\n" );
  return;
}
}
void netscore_pairwise_calculation( toporouter_netscore_t *netscore, GPtrArray *netscores )
{
  int ecx;
  int edx;
  double fp5;
  double fp6;
  double fp7;
  toporouter_netscore_t **netscores_base = &netscores->pdata[0][0];
  toporouter_route_t *temproutedata = routedata_create( );
  apply_route( &netscore->routedata->topopath, &netscore->routedata );
{
  toporouter_netscore_t **i;
  if ( netscores_base < netscores_base[ *(int*)(netscores + 4) ] )
  {
    i[0] = netscores_base[0];
    do
    {
      if ( netscore->pairwise_nodetour[0] == 0 && i[0] != netscore )
      {
        temproutedata->src = &i[0]->routedata->src;
        temproutedata->dest = &i[0]->routedata->dest;
        route( netscore->r, temproutedata, 0 );
        if ( i[4]->id == temproutedata->score )
          i[0]->pairwise_nodetour[0] = 1;
        else
        if ( abs( 0.000000000000 ) < 0.000000000000 )
          netscore->pairwise_fails++;
        else
        {
        }
        delete_route( temproutedata, 1 );
      }
      i[0] = i + 4;
    }
    while ( i + 4 < netscores_base[ netscores->len ] );
  }
  remove_route( &netscore->routedata->topopath );
  netscore = (toporouter_netscore_t*)routedata_create( );
}
}
gint netscore_pairwise_size_compare( toporouter_netscore_t **a, toporouter_netscore_t **b )
{
  int edx;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  if ( abs( a[0]->score ) < 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 )
  {
    return ( ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 <> abs( b[4]->id ) ) & 1 ) == 0;
  }
  if ( abs( b[0]->score ) < 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 )
  {
  }
  if ( a[0]->pairwise_fails < b[6] )
  {
  }
  if ( ccdep1 < ccdep2 )
  {
  }
  if ( b[2] <= a[0]->pairwise_detour_sum )
  {
    if ( a[0]->pairwise_detour_sum < a[0]->pairwise_detour_sum )
    {
    }
    if ( b[0]->score <= a[0]->score )
    {
      return a[0]->score < a[0]->score;
    }
  }
  else
  {
  }
  return 1;
  return -1;
}
gint netscore_pairwise_compare( toporouter_netscore_t **a, toporouter_netscore_t **b )
{
  int edx;
  double fp6;
  double fp7;
  if ( abs( a[0]->score ) < 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 )
  {
    return ( ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 <> abs( b[4]->id ) ) & 1 ) == 0;
  }
  if ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 <= abs( b[0]->score ) && b[6] <= a[0]->pairwise_fails )
  {
    if ( ccdep1 < ccdep2 )
    {
      return 1;
    }
    if ( b[2] <= a[0]->pairwise_detour_sum )
    {
      return a[0]->pairwise_detour_sum < a[0]->pairwise_detour_sum;
    }
  }
  return -1;
}
guint order_nets_preroute_greedy( toporouter_t *r, GList *nets, GList **rnets )
{
  int eax;
  double fp7;
  /* phantom */ gint len;
  GPtrArray *netscores = g_ptr_array_sized_new( g_list_length( nets ) );
  guint failcount;
  if ( nets )
  {
    failcount = 0;
    while ( 1 )
    {
      g_ptr_array_add( netscores, &eax );
      nets = nets->next;
      if ( nets->next == 0 )
        goto B4;
      else
      {
      }
    }
  }
B4:;
  g_ptr_array_foreach( netscores, &netscore_pairwise_calculation, &netscores );
  g_ptr_array_sort( netscores, &r->netsort );
{
  toporouter_netscore_t **i;
  rnets[0] = 0;
  i[0] = netscores->pdata + netscores->len;
  if ( netscores <= netscores->pdata + netscores->len && -4 )
  {
    return 0;
  }
  else
    return 0;
  g_ptr_array_free( netscores, 1 );
}
}
toporouter_vertex_t *edge_closest_vertex( toporouter_edge_t *e, toporouter_vertex_t *v )
{
  int ecx;
  double fp0;
  GList *i;
  gdouble closestd;
  toporouter_vertex_t *closestv;
  if ( v->routingedge )
  {
    if ( toporouter_constraint_class( ) )
    {
      if ( v->routingedge )
      {
        if ( v->routingedge->e.segment.object.klass->info.name[0] == 0 )
        {
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
        }
        else
        do
        {
        }
        while ( v->routingedge->_toporouter_edge_t != toporouter_constraint_class( ) && v->routingedge->_toporouter_edge_t );
      }
    }
    else
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    }
    i = &v->routingedge->routing;
    if ( v->routingedge->routing == 0 )
    {
      closestv = 0;
      return closestv;
    }
    closestv = 0;
    closestd = 0.000000000000;
  {
    do
    {
      toporouter_vertex_t *ev = &i->data[0];
      gdouble tempd;
      gts_point_distance2( &i->data[0], &v[0].v.p );
      if ( closestv == 0 || 0.000000000000 < closestd )
      {
        closestv = ev;
        closestd = 0.000000000000;
      }
      else
      {
      }
      i = i->next;
    }
    while ( i->next == 0 );
    return closestv;
  }
  }
  closestv = 0;
  return closestv;
}
void snapshot( toporouter_t *r, char *name, GList *datas )
{
  int edx;
{
  while ( PCB->Data->LayerN > 0 )
  {
    do
    {
    }
    while ( PCB->Data->LayerN != 0 + 1 + 1 );
    if ( ( 0 + 1 ) - ( ( *(int*)(PCB + ( 0 << 2 ) + 7380) < 1 ) & 1 ) <= i )
      break;
    else
    {
      char buffer[256];
      __sprintf_chk( buffer, 1, 256, "route-%s-%d.png", name, i );
      i++;
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
}
GList *route_conflicts( toporouter_route_t *route )
{
  int eax;
  double fp7;
  GList *conflicts = 0, *i = &route->path;
  /* phantom */ toporouter_vertex_t *pv;
  if ( route->path )
  {
    toporouter_vertex_t *v = &i->data[0];
    conflicts = 0;
    while ( i = i->next, i->next )
    {
      if ( v && i[2].next == v->v.p.z )
      {
        temp = vertices_routing_conflicts( v, &i->data[0] );
        if ( temp )
        {
          j = temp;
        {
          do
          {
            if ( g_list_find( conflicts, &j ) == 0 )
            {
              conflicts = g_list_prepend( conflicts, &conroute );
            }
            j = j->next;
          }
          while ( j->next );
          i = i;
          g_list_free( temp );
        }
        }
      }
    {
      GList *temp, *j;
      v = &i->data[0];
    }
    }
  }
  return conflicts;
}
gint spread_edge( gpointer item, gpointer data )
{
  double fp0;
  double fp7;
  /* phantom */ toporouter_edge_t *e;
  /* phantom */ toporouter_vertex_t *v;
  gdouble spacing;
  gdouble s;
  GList *i;
  if ( toporouter_constraint_class( ) == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
  else
  if ( item )
  {
    if ( *(int*)(item) == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    }
    else
    do
    {
      if ( *(int*)(*(int*)(item) + 64) == toporouter_constraint_class( ) )
        break;
    }
    while ( *(int*)(*(int*)(*(int*)(item) + 64) + 64) );
  }
  if ( toporouter_constraint_class( ) == 0 )
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  else
  if ( item )
  {
    if ( *(int*)(item) == 0 )
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
    else
    do
    {
    }
    while ( *(int*)(*(int*)(item) + 64) != toporouter_constraint_class( ) && *(int*)(*(int*)(*(int*)(item) + 64) + 64) );
  }
  i = &item[7];
  if ( g_list_length( &item[7] ) == 0 )
  {
    return 0;
  }
  if ( g_list_length( i ) == 1 )
  {
    i[1].data = ( item[4] + item[3] ) * 0.500000000000;
    i[1].prev = 0.500000000000 * ( item[4] + item[3] );
    return 0;
  }
  else
  {
    gts_point_distance( &item[3], &item[4] );
    g_list_length( i );
    if ( i )
    {
      spacing = 0.000000000000 / (double)( (long long)( g_list_length( i ) + 1 ) );
      do
      {
        vertex_move_towards_vertex_values( &item[3], &item[4], 0.000000000000 / (double)( (long long)( g_list_length( i ) + 1 ) ), &i[1].data, &i[1].prev );
      }
      while ( i->next == 0 );
      return 0;
    }
    else
    {
      return 0;
    }
  }
}
void route_checkpoint( toporouter_route_t *route, toporouter_route_t *temproute )
{
  int eax;
  int ecx;
  int ebp_32;
  GList *i = g_list_last( &route->path );
  /* phantom */ gint n;
  if ( route->ppathindices )
    free( route->ppathindices );
  route->ppathindices = calloc( 1, g_list_length( &route->path ) << 2 );
  if ( i )
  {
    ebp_32 = ( g_list_length( &route->path ) << 2 ) + -4;
  {
    do
    {
      toporouter_vertex_t *v = &i->data[0];
      if ( v->routingedge )
      {
        GList *j;
        gint tempindex;
        if ( toporouter_constraint_class( ) )
        {
          if ( v->routingedge )
          {
            if ( v->routingedge->e.segment.object.klass->info.name[0] == 0 )
            {
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
            }
            else
            do
            {
            }
            while ( v->routingedge->_toporouter_edge_t != toporouter_constraint_class( ) && v->routingedge->_toporouter_edge_t );
          }
        }
        else
        {
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        }
        j = *(int*)g_list_find( &v->routingedge->routing, &v )/*.8*/;
        if ( toporouter_constraint_class( ) )
        {
          if ( v->routingedge )
          {
            if ( v->routingedge->e.segment.object.klass->info.name[0] == 0 )
            {
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
            }
            else
            do
            {
            }
            while ( v->routingedge->_toporouter_edge_t != toporouter_constraint_class( ) && v->routingedge->_toporouter_edge_t );
          }
        }
        else
        {
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        }
        g_list_index( &v->routingedge->routing, &v );
        if ( j )
        {
          do
          {
            j = j->prev;
            tempindex -= temproute == *(int*)(j[7].next);
          }
          while ( j->prev );
        }
        route->ppathindices[ ebp_32 >> 2 ] = tempindex;
        if ( toporouter_constraint_class( ) )
        {
          if ( v->routingedge )
          {
            if ( v->routingedge->e.segment.object.klass->info.name[0] == 0 )
            {
              g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
            }
            else
            do
            {
            }
            while ( v->routingedge->_toporouter_edge_t != toporouter_constraint_class( ) && v->routingedge->_toporouter_edge_t );
          }
        }
        else
        {
          g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
        }
        v->routingedge->routing = g_list_remove( &v->routingedge->routing, &v );
      }
      ebp_32 += -4;
      i = &i->prev;
    }
    while ( i->prev );
  }
  }
  route->pscore & 0xFFFFFFFF = route->score & 0xFFFFFFFF;
  route->ppath = route->path;
  remove_route( &route->path );
  route->path = 0;
  route->psrc = route->src;
  route->pdest = route->dest;
  return;
}
void route_restore( toporouter_route_t *route )
{
  int edx;
  int ebp_28;
  GList *i;
  toporouter_vertex_t *pv;
  /* phantom */ gint n;
{
  /* phantom */ int _g_boolean_var_;
  if ( route->ppath == 0 )
    g_assertion_message_expr( 0, "../../src/toporouter.c", 6858, __PRETTY_FUNCTION__, "route-&gt;ppath" );
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( route->ppathindices == 0 )
  {
    g_assertion_message_expr( 0, "../../src/toporouter.c", 6859, __PRETTY_FUNCTION__, "route-&gt;ppathindices" );
  }
  route->path = route->ppath;
  pv = 0;
  ebp_28 = 0;
{
  do
  {
    toporouter_vertex_t *v = &i->data[0];
    if ( v->routingedge )
    {
      if ( toporouter_constraint_class( ) )
      {
        if ( v->routingedge )
        {
          if ( v->routingedge->e.segment.object.klass->info.name[0] == 0 )
          {
            g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "c != NULL" );
          }
          else
          do
          {
          }
          while ( v->routingedge->_toporouter_edge_t != toporouter_constraint_class( ) && v->routingedge->_toporouter_edge_t );
        }
      }
      else
      {
        g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
      }
      v->routingedge->routing = g_list_insert( &v->routingedge->routing, &v, route->ppathindices[ ebp_28 >> 2 ] );
    }
    if ( pv )
    {
      pv->child = v;
      v->parent = pv;
    }
    i = i->next;
    pv = v;
    ebp_28 += 4;
  }
  while ( i->next );
  route->score & 0xFFFFFFFF = route->pscore & 0xFFFFFFFF;
  route->src = route->psrc;
  route->dest = route->pdest;
  return;
}
}
  g_assertion_message_expr( 0, "../../src/toporouter.c", 6859, __PRETTY_FUNCTION__, "route-&gt;ppathindices" );
}
}
void cluster_merge( toporouter_route_t *routedata )
{
  if ( routedata->netlist->clusters->pdata[0] <= routedata->netlist->clusters->pdata[0] + ( routedata->netlist->routes << 2 ) + -4 && routedata->netlist->routes )
  {
    do
    {
      if ( routedata->dest->c == routedata->netlist->clusters->pdata[0] )
      {
        routedata->netlist->clusters->pdata[0] = &routedata->src->c;
        if ( routedata->netlist->clusters->pdata[0] <= routedata->netlist->clusters->pdata[0] + ( routedata->netlist->routes << 2 ) + -4 + -4 + -4 )
          continue;
        else
          break;
      }
      else
    }
    while ( routedata->netlist->clusters->pdata[0] + ( routedata->netlist->routes << 2 ) + -4 + -4 + -4 < routedata->netlist->clusters->pdata[0] );
  }
  return;
}
void netlist_recalculate( toporouter_netlist_t *netlist, GList *ignore )
{
  int edx;
#error unstructured control flow
}
void netlists_recalculate( GList *netlists, GList *ignore )
{
  GList *i;
  if ( netlists )
  {
    do
    {
      netlist_recalculate( &i->data[0], ignore );
    }
    while ( i->next == 0 );
  }
  return;
}
void netlists_rollback( GList *netlists )
{
  if ( netlists )
  {
  {
    do
    {
      toporouter_cluster_t **i;
      i[0] = netlists->data[0] + ( netlists->next->data[0] << 2 ) + -4;
      if ( netlists->data[0] <= netlists->data[0] + ( netlists->next->data[0] << 2 ) + -4 && netlists->next->data[0] )
      {
      {
        do
        {
          toporouter_cluster_t *cluster = i[0];
          i[0] = i + -4;
          i[0] = &i[1]->c;
        }
        while ( netlists->data[0] <= i + -4 );
      }
      }
      netlists = netlists->next;
    }
    while ( netlists->next );
  }
  }
  return;
}
void print_netlist( toporouter_netlist_t *netlist )
{
  __printf_chk( 1, "NETLIST %s: ", (char*)netlist->netlist );
{
  toporouter_cluster_t **i;
  i[0] = netlist->clusters + ( *(int*)(*(int*)(netlist) + 4) << 2 ) + -4;
  if ( netlist->clusters <= netlist->clusters + ( netlist->routes << 2 ) + -4 && netlist->routes )
  {
    do
    {
      /* phantom */ toporouter_cluster_t *cluster;
      i[0] = i + -4;
      __printf_chk( 1, "%d ", i[0] );
    }
    while ( i < netlist->clusters->pdata[0] || netlist->routes == 0 );
  }
  __printf_chk( 1, "\n" );
  return;
}
}
// Lost vars at line 7015 through loop consolidation
gint roar_route( toporouter_t *r, toporouter_route_t *routedata, gint threshold )
{
  int ebp_40;
  gint intfails;
  GList *netlists, *routed;
{
  /* phantom */ int _g_boolean_var_;
  if ( routedata->path )
    g_assertion_message_expr( 0, "../../src/toporouter.c", 6974, __PRETTY_FUNCTION__, "!routedata-&gt;path" );
  if ( routedata->dest->c == routedata->src->c )
  {
    __printf_chk( 1, "ERROR: attempt to route already complete route\n" );
  {
    /* phantom */ int _g_boolean_var_;
    if ( *(int*)(*(int*)g_list_prepend( 0, &conflict )/*.4*/) == *(int*)(*(int*)g_list_prepend( 0, &conflict )/*.8*/) )
      g_assertion_message_expr( 0, "../../src/toporouter.c", 6978, __PRETTY_FUNCTION__, "routedata-&gt;src-&gt;c != routedata-&gt;dest-&gt;c" );
      intfails |= -1;
      netlists = g_list_prepend( 0, routedata->netlist->clusters->pdata[0] );
      netlists_recalculate( netlists, 0 );
      routed = 0;
      netlists_recalculate( netlists, 0 );
      g_list_free( conflicts );
      g_list_free( netlists );
      g_list_free( routed );
      return intfails;
  }
  }
  return *(int*)(*(int*)(ebx + 4));
  return *(int*)(*(int*)(ebx + 8));
  r->flags |= 32;
  routedata->psrc = *(int*)(ebx + 4);
  routedata->pdest = *(int*)(ebx + 8);
  if ( route( r, routedata, 0 ) )
  {
    GList *conflicts, *j;
    routedata->pdest = (struct _toporouter_cluster_t*)g_list_prepend( &routedata->pdest->c, &routedata );
    r->routednets = g_list_prepend( &r->routednets, &routedata );
    r->failednets = g_list_remove( &r->failednets, &routedata );
    conflicts = route_conflicts( routedata );
    if ( routedata->netlist->clusters->pdata[0] <= routedata->netlist->clusters->pdata[0] + ( routedata->netlist->routes << 2 ) + -4 && routedata->netlist->routes )
    {
      do
      {
        if ( routedata->netlist->clusters->pdata[0] != routedata->dest->c )
        {
          if ( routedata->netlist->clusters->pdata[0] <= routedata->netlist->clusters->pdata[0] + ( routedata->netlist->routes << 2 ) + -4 + -4 + -4 )
            continue;
          else
            break;
        }
        else
        {
          routedata->netlist->clusters->pdata[0] = &routedata->src->c;
          if ( routedata->netlist->clusters->pdata[0] <= routedata->netlist->clusters->pdata[0] + ( routedata->netlist->routes << 2 ) + -4 + -4 + -4 )
            continue;
          else
            break;
        }
      }
      while ( routedata->src );
    }
    r->flags &= -33;
    if ( conflicts )
    {
      j = conflicts;
      r = r;
    {
      do
      {
        if ( eax == 0 )
        {
        }
        route_checkpoint( conflict, routedata );
        conflict->pdest = (void*)g_list_remove( *(int*)(conflict->pdest), &conflict );
        r->routednets = g_list_remove( r->routednets, &conflict );
        r->failednets = g_list_prepend( r->failednets, &conflict );
        j = j->next;
      }
      while ( j->next );
      netlists = g_list_prepend( 0, routedata->netlist->clusters->pdata[0] );
      netlists_recalculate( netlists, 0 );
    {
      toporouter_route_t *conflict = &conflicts->data[0];
      conflict = *(int*)(conflicts->next);
      if ( conflict->dest->c == conflict->src->c )
      {
        g_assertion_message_expr( 0, "../../src/toporouter.c", 7015, __PRETTY_FUNCTION__, "conflict-&gt;src-&gt;c != conflict-&gt;dest-&gt;c" );
        ebp_40++;
        if ( threshold <= ebp_40 )
        {
          GList *i;
          if ( routed )
          {
            i = routed;
          {
            do
            {
              intconflict->pdest = (void*)g_list_remove( *(int*)(intconflict->pdest), &i );
              r->routednets = g_list_remove( r->routednets, &intconflict );
              r->failednets = g_list_prepend( r->failednets, &intconflict );
              delete_route( intconflict, 1 );
              i = i->next;
            }
            while ( i->next == 0 );
          }
          }
          delete_route( routedata, 1 );
          i = g_list_last( conflicts );
          if ( g_list_last( conflicts ) )
          {
          {
            do
            {
              toporouter_route_t *intconflict = &i->data[0];
              route_restore( &i->data[0] );
              intconflict->pdest = (void*)g_list_prepend( *(int*)(intconflict->pdest), &intconflict );
              r->routednets = g_list_prepend( r->routednets, &intconflict );
              r->failednets = g_list_remove( r->failednets, &intconflict );
              i = i->prev;
            }
            while ( i->prev == 0 );
          }
          }
          routedata->pdest = (struct _toporouter_cluster_t*)g_list_remove( &routedata->pdest->c, &routedata );
          r->routednets = g_list_remove( &r->routednets, &routedata );
          intfails = g_list_prepend( &r->failednets, &routedata );
          intfails = 0;
          netlists_recalculate( netlists, 0 );
          g_list_free( conflicts );
          g_list_free( netlists );
          g_list_free( routed );
        }
        else
        {
          do
          {
            if ( *(int*)(*(int*)(0 + 4) + 4) )
            {
              conflict = *(int*)(conflicts->next);
            }
            else
              intfails = ebp_40 + -1;
              netlists_recalculate( netlists, 0 );
              g_list_free( conflicts );
              g_list_free( netlists );
              g_list_free( routed );
          }
          while ( threshold <= ebp_40 );
        {
          GList *i;
        }
        }
      }
      else
      {
        if ( route( r, conflict, 0 ) )
        {
          if ( conflict->netlist->clusters->pdata[0] <= conflict->netlist->clusters + conflict->src->c && -4 )
          {
            do
            {
              if ( conflict->dest->c != *(int*)(*(int*)(conflict->netlist->clusters + conflict->src->c)) )
              {
                if ( conflict->netlist->clusters + conflict->src->c + -4 + -4 < -4 )
                  break;
              }
              else
              {
                *(int*)(*(int*)(conflict->netlist->clusters + conflict->src->c)) = &conflict->src->c;
                if ( conflict->netlist->clusters + conflict->src->c + -4 + -4 < -4 )
                  break;
              }
            }
            while ( conflict->src );
            conflict = conflict;
          }
          routed = g_list_prepend( routed, &conflict );
          conflict->pdest = (void*)g_list_prepend( *(int*)(conflict->pdest), &conflict );
          r->routednets = g_list_prepend( &r->routednets, &conflict );
          r->failednets = g_list_remove( &r->failednets, &conflict );
          netlist_recalculate( conflict->netlist, 0 );
        }
        else
        {
          ebp_40++;
          if ( threshold <= ebp_40 )
          {
            GList *i;
          }
        }
      }
    }
    }
    }
    else
    {
      intfails |= -1;
      netlists = g_list_prepend( 0, routedata->netlist->clusters->pdata[0] );
      netlists_recalculate( netlists, 0 );
      routed = 0;
      netlists_recalculate( netlists, 0 );
      g_list_free( conflicts );
      g_list_free( netlists );
      g_list_free( routed );
    }
  }
  else
  {
    routed = 0;
    r->flags &= -33;
    intfails = 0;
    g_list_free( routed );
  }
}
}
gint roar_router( toporouter_t *r, gint failcount, gint threshold )
{
  gint pfailcount = failcount + 1;
  Message( "ROAR router: " );
  j = 0;
{
  do
  {
    failed = g_list_copy( r->failednets );
    if ( failed )
    {
      k = failed;
      do
      {
        k = k->next;
        failcount += roar_route( r, &k->data[0], threshold );
      }
      while ( k->next );
    }
    g_list_free( failed );
    __printf_chk( 1, "\tROAR pass %d - %d routed -  %d failed\n", (int)j, g_list_length( r->routednets ), g_list_length( r->failednets ) );
    if ( pfailcount <= failcount || failcount == 0 )
    {
      Message( "%d nets remaining\n", failcount );
      break;
    }
    Message( "%d -&gt; ", failcount );
    j++;
    pfailcount = failcount;
  }
  while ( j != 6 );
  return failcount;
}
}
gint route_detour_compare( toporouter_route_t **a, toporouter_route_t **b )
{
  return (int)( b[0]->score - b[0]->detourscore - ( a[0]->score - a[0]->detourscore ) );
}
void roar_detour_route( toporouter_t *r, toporouter_route_t *data )
{
  double fp7;
  gdouble pscore = data->score;
  gdouble nscore;
  GList *netlists;
  route_checkpoint( data, 0 );
  data->pdest = (struct _toporouter_cluster_t*)g_list_remove( &data->pdest->c, &data );
  r->routednets = g_list_remove( &r->routednets, &data );
  r->failednets = g_list_prepend( &r->failednets, &data );
  netlists = g_list_prepend( 0, data->netlist->clusters->pdata[0] );
  netlists_recalculate( netlists, 0 );
  r->flags |= 32;
  if ( route( r, data, 0 ) )
  {
    GList *conflicts, *j;
    nscore = data->score;
    conflicts = route_conflicts( data );
    data->pdest = (struct _toporouter_cluster_t*)g_list_prepend( &data->pdest->c, &data );
    r->routednets = g_list_prepend( r->routednets, &data );
    r->flags &= -33;
    r->failednets = g_list_remove( r->failednets, &data );
    if ( conflicts )
    {
      j = conflicts;
    {
      do
      {
        if ( g_list_find( netlists, &conflict ) == 0 )
        {
          netlists = g_list_prepend( netlists, &conflict );
        }
        pscore += conflict->score;
        route_checkpoint( conflict, 0 );
        conflict->pdest = (void*)g_list_remove( *(int*)(conflict->pdest), &conflict );
        r->routednets = g_list_remove( r->routednets, &conflict );
        r->failednets = g_list_prepend( r->failednets, &conflict );
        j = j->next;
      }
      while ( j->next );
      netlists_recalculate( netlists, 0 );
    {
      do
      {
        if ( route( r, *(int*)(conflicts->next), 0 ) )
        {
          if ( conflict->netlist->clusters->pdata[0] <= conflict->netlist->clusters + conflict->src->c && -4 )
          {
            do
            {
              if ( conflict->dest->c == *(int*)(*(int*)(conflict->netlist->clusters + conflict->src->c)) )
              {
                *(int*)(*(int*)(conflict->netlist->clusters + conflict->src->c)) = &conflict->src->c;
                if ( conflict->netlist->clusters + conflict->src->c + -4 + -4 < -4 )
                  goto B48;
              }
              else
B48:;
              r = r;
            }
            while ( conflict->netlist->clusters + conflict->src->c + -4 + -4 < -4 );
B48:;
            r = r;
          }
          conflict->pdest = (void*)g_list_prepend( &conflict->pdest->c, &conflict );
          r->routednets = g_list_prepend( r->routednets, &conflict );
          r->failednets = g_list_remove( r->failednets, &conflict );
          nscore += conflict->score;
        }
        else
          j = &conflicts->next;
          data->pdest = (struct _toporouter_cluster_t*)g_list_remove( &data->pdest->c, &data );
          r->routednets = g_list_remove( r->routednets, &data );
          r->failednets = g_list_prepend( r->failednets, &data );
          if ( j )
          {
          {
            do
            {
              conflict->pdest = (void*)g_list_remove( *(int*)(conflict->pdest), &j );
              r->routednets = g_list_remove( r->routednets, &conflict );
              r->failednets = g_list_prepend( r->failednets, &conflict );
              delete_route( conflict, 1 );
              j = j->prev;
            }
            while ( j->prev == 0 );
          }
          }
          j = g_list_last( conflicts );
          if ( g_list_last( conflicts ) )
          {
            do
            {
              toporouter_route_t *conflict = &j->data[0];
              route_restore( &j->data[0] );
              conflict->pdest = (void*)g_list_prepend( *(int*)(conflict->pdest), &conflict );
              r->routednets = g_list_prepend( r->routednets, &conflict );
              r->failednets = g_list_remove( r->failednets, &conflict );
              j = j->prev;
            }
            while ( j->prev == 0 );
          }
          delete_route( data, 1 );
      }
      while ( conflicts->next );
    }
    }
    }
    else
      netlists_recalculate( netlists, 0 );
    if ( pscore < nscore )
    {
      j = g_list_last( conflicts );
      data->pdest = (struct _toporouter_cluster_t*)g_list_remove( &data->pdest->c, &data );
      r->routednets = g_list_remove( r->routednets, &data );
      r->failednets = g_list_prepend( r->failednets, &data );
    }
    else
      g_list_free( conflicts );
      netlists_recalculate( netlists, 0 );
      r = &netlists->data[0];
  }
  else
    r->flags &= -33;
  route_restore( data );
  data->pdest = (struct _toporouter_cluster_t*)g_list_prepend( &data->pdest->c, &data );
  r->routednets = g_list_prepend( r->routednets, &data );
  r->failednets = g_list_remove( r->failednets, &data );
  netlists_recalculate( netlists, 0 );
  r = &netlists->data[0];
}
void detour_router( toporouter_t *r )
{
  int edx;
  double fp5;
  double fp6;
  double fp7;
  GList *i = &r->routednets;
  guint n;
  GPtrArray *scores = g_ptr_array_sized_new( g_list_length( &r->routednets ) );
  if ( i )
  {
  {
    do
    {
      toporouter_route_t *curroute = &i->data[0];
      path_score( r, *(int*)(GList*)g_ptr_array_sized_new( g_list_length( &r->routednets ) )/*.44*/ );
      i[1].prev = 0.000000000000;
      g_ptr_array_add( scores, &i );
      i = i->next;
    }
    while ( i->next == 0 );
  }
  }
  g_ptr_array_sort( scores, &route_detour_compare );
{
  toporouter_route_t **i;
  i[0] = &scores->pdata[0][0];
  if ( scores < scores->pdata )
  {
    toporouter_route_t *curroute;
    do
    {
      curroute = i[0];
      if ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 <= abs( curroute->score ) )
      {
        if ( 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010 <= abs( curroute->detourscore ) )
        {
          if ( 1000.000000000000 < curroute->score - curroute->detourscore )
          {
            roar_detour_route( r, curroute );
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
      i[0] = i + 4;
    }
    while ( i + 4 < scores->pdata );
  }
  __printf_chk( 1, "\n" );
  g_ptr_array_free( scores, 1 );
  return;
}
}
gint rubix_router( toporouter_t *r, gint failcount )
{
  int eax;
  int ecx;
  GList *i, *ordering;
  order_nets_preroute_greedy( r, &r->failednets, &ordering );
  i = ordering;
  if ( ordering )
  {
    do
    {
      if ( route( r, &i->data[0], 0 ) )
      {
        data->pdest = (void*)g_list_prepend( *(int*)(data->pdest), &data );
        r->routednets = g_list_prepend( r->routednets, &data );
        r->failednets = g_list_remove( r->failednets, &data );
        if ( *(int*)(*(int*)(data->netlist->clusters->pdata[0])) <= *(int*)(*(int*)(data->netlist->clusters->pdata[0])) + ( *(int*)(*(int*)(data->netlist->clusters->pdata[0]) + 4) << 2 ) + -4 && *(int*)(*(int*)(data->netlist->clusters->pdata[0]) + 4) )
        {
          do
          {
            if ( data->dest->c == *(int*)(*(int*)(*(int*)(*(int*)(*(int*)(data->netlist->clusters->pdata[0]))) + ( *(int*)(*(int*)(*(int*)(data->netlist->clusters->pdata[0])) + 4) << 2 ) + -4)) )
            {
              if ( *(int*)(*(int*)(*(int*)(data->netlist->clusters->pdata[0]))) + ( *(int*)(*(int*)(*(int*)(data->netlist->clusters->pdata[0])) + 4) << 2 ) + -4 + -4 + -4 < data->netlist->clusters->pdata[0] )
                goto B20;
            }
            else
B20:;
            i = i;
          }
          while ( *(int*)(*(int*)(*(int*)(data->netlist->clusters->pdata[0]))) + ( *(int*)(*(int*)(*(int*)(data->netlist->clusters->pdata[0])) + 4) << 2 ) + -4 + -4 + -4 < data->netlist->clusters->pdata[0] );
B20:;
          i = i;
        }
        failcount += -1;
      }
      i = i->next;
    }
    while ( i->next );
  }
  g_list_free( ordering );
  return failcount;
}
guint hybrid_router( toporouter_t *r )
{
  gint failcount;
  r->flags |= 192;
  failcount = rubix_router( r, g_list_length( &r->failednets ) );
  Message( "RUBIX router: %d nets remaining\n", rubix_router( r, g_list_length( &r->failednets ) ) );
  __printf_chk( 1, "RUBIX router: %d nets remaining\n", failcount );
  r->flags |= 256;
  failcount = roar_router( r, failcount, 2 );
  detour_router( r );
  failcount = roar_router( r, failcount, 2 );
  detour_router( r );
  return failcount;
}
void parse_arguments( toporouter_t *r, int argc, char **argv )
{
  int ecx;
  int i, tempint;
  if ( argc > 0 )
  {
    i = 0;
    do
    {
      if ( __isoc99_sscanf( &argv, "viacost=%d", &tempint ) )
        r->viacost = (double)( tempint );
      else
      {
        if ( __isoc99_sscanf( &argv, "l%d", &tempint ) )
        {
          /* phantom */ gdouble *layer;
          i++;
          *(double*)(calloc( 1, 8 )) = (double)( tempint );
          r->keepoutlayers = g_list_prepend( &r->keepoutlayers, calloc( 1, 8 ) );
          if ( i < argc )
            continue;
          else
            break;
        }
      }
      i++;
    }
    while ( i + 1 < argc );
  }
{
  guint group = 0;
  if ( PCB->Data->LayerN )
  {
    do
    {
      if ( PCB->Font.Valid )
      {
        i = 0;
      {
        /* phantom */ gdouble *layer;
        while ( 1 )
        {
          if ( PCB->Data->LayerN <= *(int*)(PCB + ( i * 4 ) + ( group * 18 * 4 ) + 7444) || PCB->Data->Layer->On )
          {
            i++;
            if ( i + 1 < PCB->Font.Valid )
              continue;
          }
          else
          {
            i++;
            *(double*)(calloc( 1, 8 )) = (double)( group );
            r->keepoutlayers = g_list_prepend( &r->keepoutlayers, calloc( 1, 8 ) );
            if ( i < PCB->ID )
              continue;
          }
        }
      }
      }
      group++;
    }
    while ( group < PCB->Data->LayerN );
  }
  return;
}
}
toporouter_t *toporouter_new( void )
{
  /* phantom */ toporouter_t *r;
  time_t ltime;
  gettimeofday( calloc( 1, 100 ) + 88, 0 );
  *(int*)calloc( 1, 100 )/*.84*/ = netscore_pairwise_compare;
  *(int*)calloc( 1, 100 )/*.24*/ = 0;
  *(int*)calloc( 1, 100 )/*.28*/ = 0;
  *(int*)calloc( 1, 100 )/*.12*/ = 0;
  *(int*)calloc( 1, 100 )/*.8*/ = 0;
  *(int*)calloc( 1, 100 )/*.36*/ = 10000.000000000000;
  *(int*)calloc( 1, 100 )/*.20*/ = 0;
  *(int*)calloc( 1, 100 )/*.44*/ = 300.000000000000;
  *(int*)calloc( 1, 100 )/*.32*/ = 3;
  *(int*)calloc( 1, 100 )/*.52*/ = 1500.000000000000;
  *(int*)(calloc( 1, 100 )) = 0;
  *(int*)calloc( 1, 100 )/*.60*/ = 0.000000000000;
  *(int*)calloc( 1, 100 )/*.4*/ = 0;
  *(int*)calloc( 1, 100 )/*.72*/ = g_ptr_array_new( );
  *(int*)calloc( 1, 100 )/*.16*/ = 0;
  *(int*)calloc( 1, 100 )/*.76*/ = 0;
  *(int*)calloc( 1, 100 )/*.80*/ = 0;
  *(int*)calloc( 1, 100 )/*.68*/ = g_ptr_array_new( );
  ltime = time( 0 );
  gts_predicates_init( );
  Message( "Topological Autorouter\n" );
  Message( "Started %s", asctime( localtime( &ltime ) ) );
  Message( "-------------------------------------\n" );
  Message( "Copyright 2009 Anthony Blake (tonyb33@gmail.com)\n\n" );
  return (toporouter_t*)calloc( 1, 100 );
}
// Lost vars at line 7356 through condition folding
void acquire_twonets( toporouter_t *r )
{
  int eax;
{
  Cardinal n = PCB->Data->RatN + -1;
  RatTypePtr line;
  if ( PCB->Data->RatN + -1 != -1 )
  {
    while ( 1 )
    {
      line = line->Thickness + ( PCB->Data->RatN * 92 ) + -92 + -92;
      if ( ( line->Flags.f/*.1_1of4*/ & 64 ) & 255 )
      {
        n += -1;
        import_route( r, line );
        if ( n == -1 )
          goto B2;
      }
      else
      {
        n += -1;
        if ( n + -1 == -1 )
          goto B2;
      }
    }
  }
B2:;
  if ( r->routes->len == 0 && PCB->Data->RatN + -1 != -1 )
  {
    while ( 1 )
    {
      n += -1;
      import_route( r, PCB->Data->Rat + ( PCB->Data->RatN * 92 ) + -92 + -92 );
      if ( n == -1 )
        break;
    }
  }
  return;
}
}
int toporouter( int argc, char **argv, int x, int y )
{
  toporouter_t *r = toporouter_new( );
  parse_arguments( toporouter_new( ), argc, argv );
  import_geometry( r );
  acquire_twonets( r );
  hybrid_router( r );
  toporouter_export( r );
  toporouter_free( r );
  SaveUndoSerialNumber( );
  DeleteRats( 0 );
  RestoreUndoSerialNumber( );
  AddAllRats( 0, 0 );
  RestoreUndoSerialNumber( );
  IncrementUndoSerialNumber( );
  ClearAndRedrawOutput( );
  return 0;
}
int escape( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  int ebp_108;
  guint dir;
  guint viax;
  guint viay;
  /* phantom */ gdouble pitch;
  gdouble length;
  gdouble dx;
  gdouble dy;
  if ( argc == 1 )
  {
    dir = strtol( argv[0], 0, 10 );
  {
    Cardinal n = PCB->Data->ElementN + -1;
    ElementTypePtr element;
    if ( PCB->Data->ElementN + -1 != -1 )
    {
      ebp_108 = ( PCB->Data->ElementN * 300 ) + -300;
      while ( 1 )
      {
        Cardinal n = 0;
        Cardinal sn;
        PadTypePtr pad;
        while ( 1 )
        {
          sn = element->PadN;
          do
          {
            if ( sn == 0 || sn <= n )
            {
              n += -1;
              ebp_108 += -300;
              if ( n != -1 )
              {
                break;
                while ( 1 )
                {
                  Cardinal n = 0;
                  Cardinal sn;
                  PadTypePtr pad;
                  while ( 1 )
                  {
                    sn = element->PadN;
                    do
                    {
                    }
                    while ( element->PadN != sn );
                    n++;
                  }
                }
              }
            }
            else
            {
              pad = element->Pad + 0;
              if ( ( ( pad->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 )
                continue;
              else
              {
                PinTypePtr via;
                LineTypePtr line;
                if ( sqrt( ( (double)( ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) ^ ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) >> 31 ) ) - ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) >> 31 ) ) * (double)( ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) ^ ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) >> 31 ) ) - ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) >> 31 ) ) ) * 0.000000000000 ) == sqrt( ( (double)( ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) ^ ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) >> 31 ) ) - ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) >> 31 ) ) * (double)( ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) ^ ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) >> 31 ) ) - ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) >> 31 ) ) ) * 0.000000000000 ) )
                {
                  if ( sqrt( ( fp7 * fp7 ) * 0.000000000000 ) == sqrt( ( fp7 * fp7 ) * 0.000000000000 ) )
                  {
                    if ( sqrt( 0.000000000000 ) != sqrt( 0.000000000000 ) )
                      dx = 0.000000000000;
                    else
                    {
                      switch ( dir )
                      {
                      case 9:
                        break;
                      case 0:
                      case 5:
                        dx = 0.000000000000;
                        __printf_chk( 1, "ERROR: escape() with bad direction (%d)\n", (int)dir );
                        break;
                      default:
                        __printf_chk( 1, "ERROR: escape() with bad direction (%d)\n", (int)dir );
                        break;
                      case 2:
                        dx = 0.000000000000;
                        break;
                      case 6:
                        dx = 0.000000000000;
                        break;
                      case 1:
                        break;
                      case 7:
                        break;
                      case 3:
                        break;
                      case 4:
                        dx = 0.000000000000;
                        break;
                      case 8:
                        dx = 0.000000000000;
                        break;
                      }
                      if ( via )
                      {
                        AddObjectToCreateUndoList( 1, (void*)via, (void*)via, (void*)via );
                        DrawVia( via, 0 );
                        ebp = MakeFlags( 0 );
                        if ( CreateDrawnLineOnLayer( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, (int)( 1.000000000000 + (double)( pad->Point1.X ) ), (int)( (double)( pad->Point1.X ) + 1.000000000000 ), (int)( (double)( (long long)( (long long)( (double)( pad->Point1.X ) ) ) ) + 1.000000000000 ), (int)( (double)( (long long)( pad->Point1.Y ) ) + 1.000000000000 ), Settings.Keepaway * 2, MakeFlags( 0 ), "badarg" ) == 0 )
                          goto B47;
                        else
                        {
                          AddObjectToCreateUndoList( 4, PCB->SilkActive == 0 ? *(int*)(PCB + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, (void*)line, (void*)line );
                          DrawLine( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB + 8716) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, line, 0 );
                          sn = element->PadN;
                        }
                      }
B47:;
                      sn = element->PadN;
                    }
                  }
                  else
                    dx = 0.000000000000;
                  sqrt( fp6 );
                  dx = 0.000000000000;
                  switch ( dir )
                  {
                  case 9:
                    break;
                  case 0:
                  case 5:
                    break;
                  default:
                    break;
                  case 2:
                    break;
                  case 6:
                    break;
                  case 1:
                    break;
                  case 7:
                    break;
                  case 3:
                    break;
                  case 4:
                    break;
                  case 8:
                    break;
                  }
                }
                else
                {
                }
                sqrt( ( (double)( ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) ^ ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) >> 31 ) ) - ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) >> 31 ) ) * (double)( ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) ^ ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) >> 31 ) ) - ( ( *(int*)(element->Pad + 44) - *(int*)(element->Pad + 148) ) >> 31 ) ) ) * 0.000000000000 );
              }
            }
          }
          while ( element->PadN != sn );
        }
      }
    }
    IncrementUndoSerialNumber( );
    Draw( );
  }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return eax;
}
void register_toporouter_action_list( void )
{
  hid_register_actions( toporouter_action_list, 2 );
  return;
}
void hid_toporouter_init( void )
{
}
#if 0
#endif
