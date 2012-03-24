#include "autoroute.c.h"
static hidGC ar_gc;
static struct {
   RouteStyleType *style;
   BDimension bloat;
   cost_t ViaCost;
   cost_t LastConflictPenalty;
   cost_t ConflictPenalty;
   cost_t JogPenalty;
   cost_t CongestionPenalty;
   cost_t NewLayerPenalty;
   cost_t MinPenalty;
   int hi_conflict;
   Boolean use_vias;
   Boolean is_odd;
   Boolean with_conflicts;
   Boolean is_smoothing;
   Boolean rip_always;
   Boolean last_smooth;
   unsigned char pass;
   char __pad[1];
} AutoRouteParameters;
static Cardinal front;
static Cardinal back;
static Boolean usedGroup[16];
static int x_cost[16];
static int y_cost[16];
static Boolean is_layer_group_active[16];
static int ro;
static int routing_layers;
static float total_wire_length;
static int total_via_count;
static edge_t *T/*.532*/ = 0;
static Boolean T/*.531*/ = 'U';
vector_t *area_vec;
void InitLists( routebox_t *r )
{
  int edx;
  static enum boxlist  all[4] = { 0, 1, 2, 3 };
  static enum boxlist  *p;
  p = all;
  if ( all[0] < qX1 )
  {
    struct routebox_list *rl = &r->different_net.next;
    do
    {
      rl = &r[0].box.X1;
      rl->prev = r;
    }
    while ( 0 + 4 + 4 != 16 );
    p = &qX1;
  }
  return;
}
void MergeNets( routebox_t *a, routebox_t *b, enum boxlist  which )
{
  int ecx;
  int ebx;
  int esi;
  struct routebox_list *al, *bl, *anl, *bnl;
  routebox_t *an, *bn;
  if ( !1 )
  {
    switch ( which )
    {
    default:
      bnl = &bn->same_net.next;
      break;
    case SUBNET:
      al = &a->same_subnet.next;
      bl = &b->same_subnet.next;
      bn = b->same_subnet.next;
      an = &al->next->box.X1;
      an->same_subnet.next = &an->same_subnet.next;
      anl = &an->same_subnet.next;
      bnl = &bn->same_subnet.next;
      break;
//    case SUBNET:
      an->same_subnet.next = &an->same_subnet.next;
      anl = &an->same_subnet.next;
      bnl = &bn->same_subnet.next;
      break;
//    case SUBNET:
      bnl = &bn->same_subnet.next;
      break;
    case ORIGINAL:
      anl = &an->original_subnet.next;
      bnl = &bn->original_subnet.next;
      break;
//    case ORIGINAL:
      bnl = &bn->original_subnet.next;
      break;
    case DIFFERENT_NET:
      a->different_net.next = &a->different_net.next;
      al = &a->different_net.next;
      bl = &b->different_net.next;
      bn = b->different_net.next;
      an = &al->next->box.X1;
      an->different_net.next = &an->different_net.next;
      anl = &an->different_net.next;
      bnl = &bn->different_net.next;
      break;
//    case DIFFERENT_NET:
      an->different_net.next = &an->different_net.next;
      anl = &an->different_net.next;
      bnl = &bn->different_net.next;
      break;
//    case DIFFERENT_NET:
      bnl = &bn->different_net.next;
      break;
//    case SUBNET:
      bl = &b->same_subnet.next;
      bn = b->same_subnet.next;
      an = &al->next->box.X1;
      break;
//    case ORIGINAL:
      b->original_subnet.next = &b->original_subnet.next;
      bl = &b->original_subnet.next;
      an = &al->next->box.X1;
      bn = b->original_subnet.next;
      break;
//    case DIFFERENT_NET:
      bl = &b->different_net.next;
      bn = b->different_net.next;
      an = &al->next->box.X1;
      break;
    }
  }
  else
  {
    al = &a->original_subnet.next;
  }
  bl->next->box.X1 = an;
  anl->prev = b;
  al->next->box.X1 = bn;
  bnl->prev = a;
  return;
}
void RemoveFromNet( routebox_t *a, enum boxlist  which )
{
  int ecx;
  int edx;
  struct routebox_list *al = &a->original_subnet.next, *anl, *apl;
  routebox_t *an, *ap = al->prev;
  an = al->next;
  if ( al->prev != a && an != a )
  {
    switch ( which )
    {
    default:
      apl = &ap->same_net.next;
      anl->prev = ap;
      ap->same_net.next = an;
      al->prev = a;
      al = &a[0].box.X1;
      ap->same_net.next = an;
      break;
    case SUBNET:
      anl = &an->same_subnet.next;
      apl = &ap->same_subnet.next;
      break;
//    case SUBNET:
      apl = &ap->same_subnet.next;
      break;
    case ORIGINAL:
      anl = &an->original_subnet.next;
      apl = &ap->original_subnet.next;
      break;
//    case ORIGINAL:
      apl = &ap->original_subnet.next;
      break;
    case DIFFERENT_NET:
      anl = &an->different_net.next;
      apl = &ap->different_net.next;
      break;
//    case DIFFERENT_NET:
      apl = &ap->different_net.next;
      break;
    }
    anl->prev = ap;
    apl = &an[0].box.X1;
    al->prev = a;
    al = &a[0].box.X1;
  }
  return;
}
routebox_t *AddPin( PointerListType *layergroupboxes, PinTypePtr pin, Boolean is_via, RouteStyleType *style )
{
  int eax;
  int ebp_40;
  routebox_t **rbpp, *lastrb = 0;
  int i, ht;
  if ( PCB->Data->LayerN > 0 )
  {
    i = 0;
    do
    {
      rbpp[0] = calloc( 1, sizeof( routebox_t ) );
      mymemset( (void*)&rbpp, 0, 124 );
      rbpp[9] = &i;
      rbpp[0] = pin->X - ( ( ( (unsigned char)( ( pin->Thickness < pin->DrillingHole ) ^ 1 ) ? pin->DrillingHole : pin->Thickness ) + 1 ) / 2 ) - style->Keepaway;
      rbpp[4] = pin->X - ( ( ( (unsigned char)( ( pin->Thickness < pin->DrillingHole ) ^ 1 ) ? pin->DrillingHole : pin->Thickness ) + 1 ) / 2 );
      rbpp[1] = pin->Y - ( ( ( (unsigned char)( ( pin->Thickness < pin->DrillingHole ) ^ 1 ) ? pin->DrillingHole : pin->Thickness ) + 1 ) / 2 ) - style->Keepaway;
      rbpp[5] = pin->Y - ( ( ( (unsigned char)( ( pin->Thickness < pin->DrillingHole ) ^ 1 ) ? pin->DrillingHole : pin->Thickness ) + 1 ) / 2 );
      rbpp[2] = style->Keepaway + pin->X + ( ( ( (unsigned char)( ( pin->Thickness < pin->DrillingHole ) ^ 1 ) ? pin->DrillingHole : pin->Thickness ) + 1 ) / 2 );
      rbpp[0]->flags.bits_at_0/*.2_2of4*/ |= '@';
      rbpp[3] = style->Keepaway + pin->Y + ( ( ( (unsigned char)( ( pin->Thickness < pin->DrillingHole ) ^ 1 ) ? pin->DrillingHole : pin->Thickness ) + 1 ) / 2 );
      rbpp[6] = pin->X + ( ( ( (unsigned char)( ( pin->Thickness < pin->DrillingHole ) ^ 1 ) ? pin->DrillingHole : pin->Thickness ) + 1 ) / 2 );
      rbpp[7] = pin->Y + ( ( ( (unsigned char)( ( pin->Thickness < pin->DrillingHole ) ^ 1 ) ? pin->DrillingHole : pin->Thickness ) + 1 ) / 2 );
      if ( is_via )
      {
        rbpp[10] = 2;
        rbpp[8] = &pin->BoundingBox.X1;
      }
      else
      {
        rbpp[10] = 1;
        rbpp[8] = &pin->BoundingBox.X1;
      }
      rbpp[11] = rbpp[11]->box.X1/*.1_1of4*/ | 2;
      rbpp[11] = ( rbpp[11]->box.X1/*.1_1of4*/ & -33 ) | ( ( ( ( pin->Flags.f >> 8 ) ^ 1 ) & 1 ) << 5 );
      rbpp[22] = 8;
      rbpp[19] = &style->Thick;
      InitLists( rbpp[0] );
      if ( lastrb )
      {
        MergeNets( rbpp[0], lastrb, NET );
        MergeNets( rbpp[0], lastrb, SUBNET );
        MergeNets( rbpp[0], lastrb, ORIGINAL );
      }
      i++;
      ebp_40 += 12;
      lastrb = rbpp[0];
    }
    while ( PCB->Data->LayerN <= i );
  }
  return lastrb;
}
routebox_t *AddPad( PointerListType *layergroupboxes, ElementTypePtr element, PadTypePtr pad, RouteStyleType *style )
{
  /* phantom */ BDimension halfthick;
  routebox_t **rbpp;
  int layergroup = (unsigned char)( ( ( pad->Flags.f/*.1_1of4*/ >> 7 ) & 1 ) ^ 1 ) ? back : front;
  rbpp[0] = (routebox_t*)GetPointerMemory( layergroupboxes + ( ( (unsigned char)( ( ( pad->Flags.f/*.1_1of4*/ >> 7 ) & 1 ) ^ 1 ) ? back : front ) * 12 ) );
  rbpp[0] = calloc( 1, sizeof( routebox_t ) );
  mymemset( (void*)&rbpp, 0, 124 );
  rbpp[9] = &layergroup;
  rbpp[0] = ( pad->Point1.X <= pad->Point2.X ? pad->Point2.X : pad->Point1.X ) - ( ( pad->Thickness + 1 ) / 2 ) - style->Keepaway;
  rbpp[4] = ( pad->Point1.X <= pad->Point2.X ? pad->Point2.X : pad->Point1.X ) - ( ( pad->Thickness + 1 ) / 2 );
  rbpp[1] = ( pad->Point1.Y <= pad->Point2.Y ? pad->Point2.Y : pad->Point1.Y ) - ( ( pad->Thickness + 1 ) / 2 ) - style->Keepaway;
  rbpp[6] = ( ( pad->Thickness + 1 ) / 2 ) + ( (unsigned char)( ( pad->Point1.X < pad->Point2.X ) ^ 1 ) ? pad->Point2.X : pad->Point1.X );
  rbpp[2] = style->Keepaway + ( ( pad->Thickness + 1 ) / 2 ) + ( (unsigned char)( ( pad->Point1.X < pad->Point2.X ) ^ 1 ) ? pad->Point2.X : pad->Point1.X );
  rbpp[5] = ( pad->Point1.Y <= pad->Point2.Y ? pad->Point2.Y : pad->Point1.Y ) - ( ( pad->Thickness + 1 ) / 2 );
  rbpp[3] = style->Keepaway + ( ( pad->Thickness + 1 ) / 2 ) + ( (unsigned char)( ( pad->Point1.Y < pad->Point2.Y ) ^ 1 ) ? pad->Point2.Y : pad->Point1.Y );
  rbpp[7] = ( ( pad->Thickness + 1 ) / 2 ) + ( (unsigned char)( ( pad->Point1.Y < pad->Point2.Y ) ^ 1 ) ? pad->Point2.Y : pad->Point1.Y );
  rbpp[0]->flags.bits_at_0/*.2_2of4*/ |= '@';
  if ( pad->Point2.X != pad->Point1.X && pad->Point2.Y != pad->Point1.Y )
    rbpp[11] = rbpp[11]->box.X1/*.1_1of4*/ | 1;
  rbpp[8] = &pad->BoundingBox.X1;
  rbpp[10] = 0;
  rbpp[11] = rbpp[11]->box.X1/*.1_1of4*/ | 2;
  rbpp[22] = 8;
  rbpp[19] = &style->Thick;
  InitLists( rbpp[0] );
  return rbpp[0];
}
routebox_t *AddLine( PointerListType *layergroupboxes, int layergroup, LineTypePtr line, LineTypePtr ptr, RouteStyleType *style )
{
  routebox_t **rbpp;
  layergroup = layergroup;
  rbpp[0] = (routebox_t*)GetPointerMemory( layergroupboxes + ( layergroup * 12 ) );
  rbpp[0] = calloc( 1, sizeof( routebox_t ) );
  mymemset( (void*)&rbpp, 0, 124 );
  rbpp[9] = &layergroup;
  rbpp[0] = ( ( 0 - ( ( line->Thickness + 1 ) / 2 ) ) + ( line->Point1.X <= line->Point2.X ? line->Point2.X : line->Point1.X ) ) - style->Keepaway;
  rbpp[4] = ( 0 - ( ( line->Thickness + 1 ) / 2 ) ) + ( line->Point1.X <= line->Point2.X ? line->Point2.X : line->Point1.X );
  rbpp[1] = ( ( 0 - ( ( line->Thickness + 1 ) / 2 ) ) + ( line->Point1.Y <= line->Point2.Y ? line->Point2.Y : line->Point1.Y ) ) - style->Keepaway;
  rbpp[6] = ( ( line->Thickness + 1 ) / 2 ) + ( (unsigned char)( ( line->Point1.X < line->Point2.X ) ^ 1 ) ? line->Point2.X : line->Point1.X );
  rbpp[2] = style->Keepaway + ( ( line->Thickness + 1 ) / 2 ) + ( (unsigned char)( ( line->Point1.X < line->Point2.X ) ^ 1 ) ? line->Point2.X : line->Point1.X );
  rbpp[5] = ( 0 - ( ( line->Thickness + 1 ) / 2 ) ) + ( line->Point1.Y <= line->Point2.Y ? line->Point2.Y : line->Point1.Y );
  rbpp[3] = style->Keepaway + ( ( line->Thickness + 1 ) / 2 ) + ( (unsigned char)( ( line->Point1.Y < line->Point2.Y ) ^ 1 ) ? line->Point2.Y : line->Point1.Y );
  rbpp[7] = ( ( line->Thickness + 1 ) / 2 ) + ( (unsigned char)( ( line->Point1.Y < line->Point2.Y ) ^ 1 ) ? line->Point2.Y : line->Point1.Y );
  rbpp[0]->flags.bits_at_0/*.2_2of4*/ |= '@';
  if ( line->Point2.X != line->Point1.X && line->Point2.Y != line->Point1.Y )
  {
    rbpp[11] = rbpp[11]->box.X1/*.1_1of4*/ | 1;
    rbpp[0]->flags.bits_at_0/*.2_2of4*/ = ( rbpp[0]->flags.bits_at_0/*.2_2of4*/ & -9 ) | ( ( ( line->Point1.Y == ( line->Point1.Y <= line->Point2.Y ? line->Point2.Y : line->Point1.Y ) ) ^ ( line->Point1.X == ( line->Point1.X <= line->Point2.X ? line->Point2.X : line->Point1.X ) ) ) << 3 );
  }
  rbpp[10] = 4;
  rbpp[8] = &ptr->BoundingBox.X1;
  rbpp[11] = rbpp[11]->box.X1/*.1_1of4*/ | 2;
  rbpp[22] = 8;
  rbpp[19] = &style->Thick;
  InitLists( rbpp[0] );
  return rbpp[0];
}
routebox_t *AddIrregularObstacle( PointerListType *layergroupboxes, LocationType X1, LocationType Y1, LocationType X2, LocationType Y2, Cardinal layergroup, void *parent, RouteStyleType *style )
{
  /* phantom */ routebox_t **rbpp;
  LocationType keep = style->Keepaway;
  *(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) = calloc( 1, 124 );
  mymemset( GetPointerMemory( layergroupboxes + ( layergroup * 12 ) ), 0, 124 );
  *(int*)(*(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) ))) = X1 - keep;
  *(int*)(*(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) + 4) = Y1 - keep;
  *(short*)(*(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) + 36) = layergroup;
  *(int*)(*(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) + 8) = keep + X2;
  *(int*)(*(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) + 20) = Y1;
  *(int*)(*(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) + 16) = X1;
  *(int*)(*(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) + 12) = keep + Y2;
  *(int*)(*(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) + 24) = X2;
  *(char*)(*(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) + 45) |= '@';
  *(int*)(*(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) + 28) = Y2;
  *(char*)(*(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) + 44) |= 1;
  *(int*)(*(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) + 40) = 5;
  *(int*)(*(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) + 32) = parent[0];
  *(char*)(*(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) + 44) |= 2;
  *(int*)(*(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) + 76) = style->(null);
  InitLists( *(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) )) );
  return *(int*)(GetPointerMemory( layergroupboxes + ( layergroup * 12 ) ));
}
routebox_t *AddPolygon( PointerListType *layergroupboxes, Cardinal layer, PolygonTypePtr polygon, RouteStyleType *style )
{
  int is_not_rectangle;
  int layergroup;
  routebox_t *rb;
  AddIrregularObstacle( layergroupboxes, polygon->BoundingBox.X1, polygon->BoundingBox.Y1, polygon->BoundingBox.X2, polygon->BoundingBox.Y2, GetLayerGroupNumberByNumber( layer ), (void*)polygon, style );
  rb->layer = layer/*.1_2of4*/;
  rb->came_from = ALL;
  rb->flags.bits_at_0/*.1_1of4*/ = ( polygon->PointN == 4 && ( polygon->Points[1].X == polygon->Points->X || polygon->Points[1].Y == polygon->Points->Y ) && ( polygon->Points[1].X == polygon->Points[2].X || polygon->Points[2].Y == polygon->Points[1].Y ) && ( polygon->Points[2].X == polygon->Points[3].X || polygon->Points[3].Y == polygon->Points[2].Y ) && ( polygon->Points[3].X == polygon->Points->X || polygon->Points[3].Y == polygon->Points->Y ) ? 0 : 1 ) | ( (int)rb->flags.bits_at_0/*.1_1of4*/ & -2 );
  if ( ( polygon->Flags.f/*.1_1of4*/ & 16 ) & 255 )
  {
    rb->flags.bits_at_0/*.2_2of4*/ |= 16;
    if ( is_not_rectangle == 0 )
    {
      rb->type = PLANE;
    }
  }
  return AddIrregularObstacle( layergroupboxes, polygon->BoundingBox.X1, polygon->BoundingBox.Y1, polygon->BoundingBox.X2, polygon->BoundingBox.Y2, GetLayerGroupNumberByNumber( layer ), (void*)polygon, style );
}
int __found_one_on_lg( BoxType *box, void *cl )
{
  int ecx;
  int esi;
  int edi;
  /* phantom */ struct rb_info *inf;
  /* phantom */ routebox_t *rb;
  /* phantom */ BoxType sb;
  if ( ( ( box[2].Y2/*.1_1of4*/ & 1 ) & 255 ) || box->X2 - box[4].Y2 <= cl || ((struct rb_info*)cl)->query.X2 <= box + box[4].Y2 || box->Y2 - box[4].Y2 <= ((struct rb_info*)cl)->query.Y1 || ((struct rb_info*)cl)->query.Y2 <= box->Y1 + box[4].Y2 )
  {
  }
  ((struct rb_info*)cl)->winner = box;
  if ( box[2].X2 == 7 )
  {
  }
  __longjmp_chk( cl + 20 + 20, 1 );
  return 1;
}
routebox_t *FindRouteBoxOnLayerGroup( routedata_t *rd, LocationType X, LocationType Y, Cardinal layergroup )
{
  struct rb_info info;
  info.query.X1 = X;
  info.query.Y1 = Y;
  info.winner = 0;
  info.query.X2 = X + 1;
  info.query.Y2 = Y + 1;
  if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
  {
    r_search( rd->layergrouptree[0], &info.query, 0, &__found_one_on_lg, &info.query.X1 );
  }
  return info.winner;
}
void DestroyRouteData( routedata_t **rd )
{
  int eax;
  int i;
  if ( PCB->Data->LayerN > 0 )
  {
    i = 0;
    do
    {
      i++;
      r_destroy_tree( (int)( rd[ i ]->layergrouptree ) );
    }
    while ( PCB->Data->LayerN <= i );
  }
  if ( AutoRouteParameters.use_vias )
    mtspace_destroy( (int)( &(mtspace_t**)(rd[30]->layergrouptree[0]->root) ) );
  free( rd[0] );
  rd[0] = 0;
  return;
}
void RB_down_count( routebox_t *rb )
{
  rb->refcount += -1;
  if ( rb->refcount + -1 == 0 )
  {
    if ( ( rb->parent.expansion_area & 64 ) & 255 )
      RB_down_count( &eax );
    free( rb );
  }
  return;
}
Boolean TargetPoint( CheapPointType *nextpoint, routebox_t *target )
{
  int edx;
  if ( target->type == 1 )
  {
    nextpoint = &target->parent.pad->Point1.X2;
    nextpoint->Y = target->parent.pad->Point1.Y2;
  }
  if ( target->type == 0 )
  {
    nextpoint = (unsigned char)( ( ( ( target->parent.pad->Point1.X - nextpoint ) ^ ( ( target->parent.pad->Point1.X - nextpoint ) >> 31 ) ) - ( ( target->parent.pad->Point1.X - nextpoint ) >> 31 ) < ( ( target->parent.pad->Point2.X - nextpoint ) ^ ( ( target->parent.pad->Point2.X - nextpoint ) >> 31 ) ) - ( ( target->parent.pad->Point2.X - nextpoint ) >> 31 ) ) ^ 1 ) ? &target->parent.pad->Point1.X : &target->parent.pad->Point2.X;
    if ( ( ( target->parent.pad->Point1.Y - nextpoint->Y ) ^ ( ( target->parent.pad->Point1.Y - nextpoint->Y ) >> 31 ) ) - ( ( target->parent.pad->Point1.Y - nextpoint->Y ) >> 31 ) < ( ( *(int*)(*(int*)(target + 32) + 68) - nextpoint->Y ) ^ ( ( *(int*)(*(int*)(target + 32) + 68) - nextpoint->Y ) >> 31 ) ) - ( ( target->parent.pad->Point2.Y - nextpoint->Y ) >> 31 ) )
    {
      nextpoint->Y = target->parent.pad->Point1.Y;
    }
    nextpoint->Y = esi;
  }
  else
  {
    nextpoint = target->sbox.X1 + ( ( target->sbox.X2 - target->sbox.X1 ) / 2 );
    nextpoint->Y = ( ( *(int*)(target + 28) - target->sbox.Y1 ) / 2 ) + *(int*)(target + 20);
  }
  return 0;
}
cost_t cost_to_routebox( CheapPointType *p, Cardinal point_layer, routebox_t *rb )
{
  int eax;
  double fp7;
  cost_t trial;
  /* phantom */ CheapPointType p2;
  if ( rb->sbox.X1 <= p )
  {
    if ( rb->sbox.X2 <= p )
    {
    }
    else
    {
      if ( rb->sbox.Y1 <= p->Y )
      {
        if ( PCB->Data->LayerN < point_layer || point_layer == rb->group )
        {
          fp7 = fp7 + (double)( ( ebp_32 ^ ( ebp_32 >> 31 ) ) - ( ebp_32 >> 31 ) ) + (double)( ( ebp_20 ^ ( ebp_20 >> 31 ) ) - ( ebp_20 >> 31 ) );
        }
        if ( p == p && *(int*)(0 + 4) == *(int*)(0 + 4) )
        {
          *(double*)(usedGroup[ point_layer ] == 0 || usedGroup[ rb->group ] == 0 ? AutoRouteParameters.NewLayerPenalty : 0.000000000000) += 1.000000000000;
        }
        return 0;
        return 0;
      }
    }
  }
}
BoxType bloat_routebox( routebox_t *rb )
{
  /* phantom */ BoxType r;
  /* phantom */ LocationType keepaway;
  if ( ( rb->flags.bits_at_0/*.1_1of4*/ & 16 ) & 255 )
  {
    eax = rb->sbox.X1;
    *(int*)(eax + 4) = rb->sbox.Y1;
    *(int*)(eax + 8) = rb->sbox.X2;
    *(int*)(eax + 12) = rb->sbox.Y2;
  }
  else
  {
    *(int*)(eax + 4) = rb->sbox.Y1 + ( 0 - ( ( ( AutoRouteParameters.style->Thick + 1 ) / 2 ) + ( (unsigned char)( ( AutoRouteParameters.style->Keepaway < rb->style->Keepaway ) ^ 1 ) ? rb->style->Keepaway : AutoRouteParameters.style->Keepaway ) ) );
    *(int*)(eax + 8) = rb->sbox.X2 - ( 0 - ( ( ( AutoRouteParameters.style->Thick + 1 ) / 2 ) + ( (unsigned char)( ( AutoRouteParameters.style->Keepaway < rb->style->Keepaway ) ^ 1 ) ? rb->style->Keepaway : AutoRouteParameters.style->Keepaway ) ) );
    *(int*)(eax + 12) = rb->sbox.Y2 - ( 0 - ( ( ( AutoRouteParameters.style->Thick + 1 ) / 2 ) + ( (unsigned char)( ( AutoRouteParameters.style->Keepaway < rb->style->Keepaway ) ^ 1 ) ? rb->style->Keepaway : AutoRouteParameters.style->Keepaway ) ) );
    eax = rb->sbox.X1 + ( 0 - ( ( ( AutoRouteParameters.style->Thick + 1 ) / 2 ) + ( (unsigned char)( ( AutoRouteParameters.style->Keepaway < rb->style->Keepaway ) ^ 1 ) ? rb->style->Keepaway : AutoRouteParameters.style->Keepaway ) ) );
  }
  return;
}
vector_t *path_conflicts( routebox_t *rb, routebox_t *conflictor, Boolean branch )
{
  int edx;
  if ( branch & 255 )
  {
    rb->conflicts_with = vector_duplicate( (int)( &rb->conflicts_with ) );
  }
  else
  if ( rb->conflicts_with == 0 )
  {
    rb->conflicts_with = vector_create( );
  }
  vector_append( (int)( &rb->conflicts_with ), &conflictor );
  return &rb->conflicts_with;
}
void touch_conflicts( vector_t *conflicts, int touch )
{
  int edx;
  static vector_t *last;
  static int last_size;
  int i = 0, n;
  if ( !1 )
  {
    if ( last && last != conflicts )
      touch_conflicts( &eax[0], 0 );
    if ( conflicts == 0 )
    {
      return;
    }
    i = last_size;
    last = conflicts;
  }
  *ebp_56 = conflicts;
  n = vector_size( &conflicts );
  if ( i < n )
  {
    routebox_t *rb;
    /* phantom */ routebox_t *p;
    routebox_t *__next_one__;
    do
    {
      if ( rb )
      {
        __next_one__ = rb;
        while ( __next_one__ = __next_one__->same_net.next, ( *(char*)(__next_one__->box.X1 + 44) & 2 ) & 255 )
        {
          if ( rb != __next_one__ )
          {
            __next_one__ = &__next_one__->box.X1;
          }
        }
        __next_one__->flags.bits_at_0/*.2_2of4*/ = ( touch & 1 ) | ( *(char*)(__next_one__->box.X1 + 45) & -2 );
      }
      i++;
    }
    while ( i + 1 < n );
  }
  if ( touch == 0 )
  {
    last = 0;
    last_size = 0;
    return;
  }
  last_size = n;
  return;
}
int __region_within_guess( BoxType *region, void *cl )
{
  int eax;
  int ecx;
  double fp6;
  double fp7;
  /* phantom */ struct mincost_target_closure *mtc;
  cost_t cost_to_region;
  if ( ((int*)cl) )
  {
    if ( region <= *(int*)(cl) )
    {
      if ( region->Y1 <= ((int*)cl) )
      {
        if ( region->Y2 <= ((int*)cl) )
        {
        }
        else
        {
        }
      }
      else
      {
      }
      return ((struct mincost_target_closure*)cl)->nearest_cost < fp7;
    }
  }
}
int __found_new_guess( BoxType *box, void *cl )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  /* phantom */ struct mincost_target_closure *mtc;
  /* phantom */ routebox_t *guess;
  cost_t cost_to_guess;
  cost_to_routebox( &((int*)cl), ((int*)cl), &box->X1 );
  if ( 0.000000000000 < ((int*)cl) )
  {
    ((struct mincost_target_closure*)cl)->nearest = box;
    ((struct mincost_target_closure*)cl)->nearest_cost = 0.000000000000;
  }
  else
  {
  }
  return 1;
}
routebox_t *mincost_target_to_point( CheapPointType *CostPoint, Cardinal CostPointLayer, rtree_t *targets, routebox_t *target_guess )
{
  struct mincost_target_closure mtc;
  mtc.CostPoint = CostPoint;
  mtc.CostPointLayer = CostPointLayer;
  mtc.nearest = target_guess;
  if ( target_guess )
  {
    cost_to_routebox( CostPoint, CostPointLayer, target_guess );
    mtc.nearest_cost = 0.000000000000;
  }
  else
    mtc.nearest_cost = 30000000000000000949187772416.000000000000;
  r_search( targets, 0, &__region_within_guess, &__found_new_guess, (void*)mtc.CostPoint );
  return mtc.nearest;
}
edge_t *CreateEdge( routebox_t *rb, LocationType CostPointX, LocationType CostPointY, cost_t cost_to_point, routebox_t *mincost_target_guess, direction_t expand_dir, rtree_t *targets )
{
  int eax;
  int ecx;
  int edx;
  int esi;
  int edi;
  double fp7;
  /* phantom */ edge_t *e;
  mymemset( calloc( 1, 44 ), 0, 44 );
  *ebp_56 = rb;
  if ( ( rb->flags.bits_at_0/*.1_1of4*/ & 64 ) & 255 )
    rb->refcount++;
  *(int*)(*ebp_56 + 8) = CostPointY;
  *(double*)(*ebp_56 + 12) = (int)cost_to_point;
  *(char*)(*ebp_56 + 40) &= 239;
  *(int*)(*ebp_56 + 4) = CostPointX;
  if ( targets )
  {
    *(int*)(*ebp_56 + 28) = mincost_target_to_point( *ebp_56 + 4, rb->group, targets, mincost_target_guess );
  }
  *(int*)(*ebp_56 + 28) = mincost_target_guess;
  *(int*)(*ebp_56 + 36) = expand_dir;
  return *ebp_56;
}
void KillEdge( void *edge )
{
  edge_t *e = &edge[0];
  if ( ( e[1].rb->box.X1/*.1_1of4*/ & 64 ) & 255 )
    RB_down_count( eax );
  if ( ( e->flags.bits_at_0/*.1_1of4*/ & 16 ) & 255 )
    mtsFreeWork( &e->work );
  edge = (void*)e;
}
cost_t edge_cost( edge_t *e, cost_t too_big )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  double fp7;
  cost_t penalty;
  if ( e[1].cost_point.X == 0 )
  {
    if ( e->flags.(null) == 7 )
    {
    }
    if ( e->cost_to_point <= too_big )
    {
      cost_to_routebox( &e->cost_point.X, e->expand_dir, e->mincost_target );
      return 1;
    }
  }
  else
  {
  }
  return 0;
}
struct broken_boxes break_box_edge( BoxType *original, direction_t which_edge, routebox_t *breaker )
{
  int ecx;
  int edx;
  /* phantom */ BoxType origbox;
  BoxType breakbox;
  /* phantom */ struct broken_boxes result;
  which_edge = bloat_routebox( &result.left.X1 );
{
  /* phantom */ LocationType t;
  switch ( which_edge )
  {
  case EAST:
    break;
  case SOUTH:
    origbox.X1 = ebp_80;
    origbox.X1 = ebp_76;
    origbox.X1 = breakbox.Y2 < original->X2;
    origbox.X1 = ( (unsigned char)( ( original < breakbox.Y1 ) ^ 1 ) ? breakbox.Y1 : original ) < ( original->X2 <= breakbox.Y2 ? breakbox.Y2 : original->X2 );
    origbox.X1 = ( 0 - original->X2 ) + 1;
    origbox.X1 = ebp_80;
    origbox.X1 = original < breakbox.Y1;
    origbox.X1 = original->X2;
    *(int*)(bloat_routebox( &result.left.X1 )) = ebp_80;
    origbox.X1 = breakbox.X2;
    origbox.X1 = ebp_76;
    origbox.X1 = 0 - original->X2;
    origbox.X1 = 0 - original->Y1;
    origbox.X1 = ( 0 - original->X2 ) + 1;
    origbox.X1 = 0 - original->X2;
    return;
    break;
  case WEST:
  {
    /* phantom */ LocationType t;
  }
    break;
  default:
  {
    /* phantom */ LocationType t;
    switch ( which_edge )
    {
    case SOUTH:
      origbox.X1 = ebp_80;
      origbox.X1 = ebp_76;
      origbox.X1 = breakbox.Y2 < original->X2;
      origbox.X1 = ( (unsigned char)( ( original < breakbox.Y1 ) ^ 1 ) ? breakbox.Y1 : original ) < ( original->X2 <= breakbox.Y2 ? breakbox.Y2 : original->X2 );
      origbox.X1 = ( 0 - original->X2 ) + 1;
      origbox.X1 = ebp_80;
      origbox.X1 = original < breakbox.Y1;
      origbox.X1 = original->X2;
      *(int*)(bloat_routebox( &result.left.X1 )) = ebp_80;
      origbox.X1 = breakbox.X2;
      origbox.X1 = ebp_76;
      origbox.X1 = 0 - original->X2;
      origbox.X1 = 0 - original->Y1;
      origbox.X1 = ( 0 - original->X2 ) + 1;
      origbox.X1 = 0 - original->X2;
      return;
      break;
    case WEST:
    {
      /* phantom */ LocationType t;
    }
      break;
    default:
    {
      /* phantom */ LocationType t;
      switch ( which_edge )
      {
      case EAST:
        break;
      case SOUTH:
        origbox.X1 = ebp_80;
        origbox.X1 = ebp_76;
        origbox.X1 = breakbox.Y2 < original->X2;
        origbox.X1 = ( (unsigned char)( ( original < breakbox.Y1 ) ^ 1 ) ? breakbox.Y1 : original ) < ( original->X2 <= breakbox.Y2 ? breakbox.Y2 : original->X2 );
        origbox.X1 = ( 0 - original->X2 ) + 1;
        origbox.X1 = ebp_80;
        origbox.X1 = original < breakbox.Y1;
        origbox.X1 = original->X2;
        *(int*)(bloat_routebox( &result.left.X1 )) = ebp_80;
        origbox.X1 = breakbox.X2;
        origbox.X1 = ebp_76;
        origbox.X1 = 0 - original->X2;
        origbox.X1 = 0 - original->Y1;
        origbox.X1 = ( 0 - original->X2 ) + 1;
        origbox.X1 = 0 - original->X2;
        return;
        break;
      case WEST:
      {
        /* phantom */ LocationType t;
      }
        break;
      default:
        switch ( which_edge )
        {
        case EAST:
          break;
        case WEST:
        {
          /* phantom */ LocationType t;
        }
          break;
        case SOUTH:
          origbox.X1 = ebp_80;
          origbox.X1 = ebp_76;
          origbox.X1 = breakbox.Y2 < original->X2;
          origbox.X1 = ( (unsigned char)( ( original < breakbox.Y1 ) ^ 1 ) ? breakbox.Y1 : original ) < ( original->X2 <= breakbox.Y2 ? breakbox.Y2 : original->X2 );
          origbox.X1 = ( 0 - original->X2 ) + 1;
          origbox.X1 = ebp_80;
          origbox.X1 = original < breakbox.Y1;
          origbox.X1 = original->X2;
          *(int*)(bloat_routebox( &result.left.X1 )) = ebp_80;
          origbox.X1 = breakbox.X2;
          origbox.X1 = ebp_76;
          origbox.X1 = 0 - original->X2;
          origbox.X1 = 0 - original->Y1;
          origbox.X1 = ( 0 - original->X2 ) + 1;
          origbox.X1 = 0 - original->X2;
          return;
          break;
        default:
          switch ( which_edge )
          {
          default:
            break;
          case SOUTH:
            origbox.X1 = ebp_80;
            origbox.X1 = ebp_76;
            origbox.X1 = breakbox.Y2 < original->X2;
            origbox.X1 = ( (unsigned char)( ( original < breakbox.Y1 ) ^ 1 ) ? breakbox.Y1 : original ) < ( original->X2 <= breakbox.Y2 ? breakbox.Y2 : original->X2 );
            origbox.X1 = ( 0 - original->X2 ) + 1;
            origbox.X1 = ebp_80;
            origbox.X1 = original < breakbox.Y1;
            origbox.X1 = original->X2;
            *(int*)(bloat_routebox( &result.left.X1 )) = ebp_80;
            origbox.X1 = breakbox.X2;
            origbox.X1 = ebp_76;
            origbox.X1 = 0 - original->X2;
            origbox.X1 = 0 - original->Y1;
            origbox.X1 = ( 0 - original->X2 ) + 1;
            origbox.X1 = 0 - original->X2;
            return;
            break;
          case WEST:
            break;
          case EAST:
          {
            /* phantom */ LocationType t;
          }
            break;
          }
          origbox.X1 = ebp_80;
          origbox.X1 = ebp_76;
          origbox.X1 = breakbox.Y2 < original->X2;
          origbox.X1 = ( (unsigned char)( ( original < breakbox.Y1 ) ^ 1 ) ? breakbox.Y1 : original ) < ( original->X2 <= breakbox.Y2 ? breakbox.Y2 : original->X2 );
          origbox.X1 = ( 0 - original->X2 ) + 1;
          origbox.X1 = ebp_80;
          origbox.X1 = original < breakbox.Y1;
          origbox.X1 = original->X2;
          *(int*)(bloat_routebox( &result.left.X1 )) = ebp_80;
          origbox.X1 = breakbox.X2;
          origbox.X1 = ebp_76;
          origbox.X1 = 0 - original->X2;
          origbox.X1 = 0 - original->Y1;
          origbox.X1 = ( 0 - original->X2 ) + 1;
          origbox.X1 = 0 - original->X2;
          return;
          break;
        }
        origbox.X1 = ebp_80;
        origbox.X1 = ebp_76;
        origbox.X1 = breakbox.Y2 < original->X2;
        origbox.X1 = ( (unsigned char)( ( original < breakbox.Y1 ) ^ 1 ) ? breakbox.Y1 : original ) < ( original->X2 <= breakbox.Y2 ? breakbox.Y2 : original->X2 );
        origbox.X1 = ( 0 - original->X2 ) + 1;
        origbox.X1 = ebp_80;
        origbox.X1 = original < breakbox.Y1;
        origbox.X1 = original->X2;
        *(int*)(bloat_routebox( &result.left.X1 )) = ebp_80;
        origbox.X1 = breakbox.X2;
        origbox.X1 = ebp_76;
        origbox.X1 = 0 - original->X2;
        origbox.X1 = 0 - original->Y1;
        origbox.X1 = ( 0 - original->X2 ) + 1;
        origbox.X1 = 0 - original->X2;
        return;
        break;
      }
      origbox.X1 = ebp_80;
      origbox.X1 = ebp_76;
      origbox.X1 = breakbox.Y2 < original->X2;
      origbox.X1 = ( (unsigned char)( ( original < breakbox.Y1 ) ^ 1 ) ? breakbox.Y1 : original ) < ( original->X2 <= breakbox.Y2 ? breakbox.Y2 : original->X2 );
      origbox.X1 = ( 0 - original->X2 ) + 1;
      origbox.X1 = ebp_80;
      origbox.X1 = original < breakbox.Y1;
      origbox.X1 = original->X2;
      *(int*)(bloat_routebox( &result.left.X1 )) = ebp_80;
      origbox.X1 = breakbox.X2;
      origbox.X1 = ebp_76;
      origbox.X1 = 0 - original->X2;
      origbox.X1 = 0 - original->Y1;
      origbox.X1 = ( 0 - original->X2 ) + 1;
      origbox.X1 = 0 - original->X2;
      return;
    }
      break;
    case EAST:
      break;
    }
    origbox.X1 = ebp_80;
    origbox.X1 = ebp_76;
    origbox.X1 = breakbox.Y2 < original->X2;
    origbox.X1 = ( (unsigned char)( ( original < breakbox.Y1 ) ^ 1 ) ? breakbox.Y1 : original ) < ( original->X2 <= breakbox.Y2 ? breakbox.Y2 : original->X2 );
    origbox.X1 = ( 0 - original->X2 ) + 1;
    origbox.X1 = ebp_80;
    origbox.X1 = original < breakbox.Y1;
    origbox.X1 = original->X2;
    *(int*)(bloat_routebox( &result.left.X1 )) = ebp_80;
    origbox.X1 = breakbox.X2;
    origbox.X1 = ebp_76;
    origbox.X1 = 0 - original->X2;
    origbox.X1 = 0 - original->Y1;
    origbox.X1 = ( 0 - original->X2 ) + 1;
    origbox.X1 = 0 - original->X2;
    return;
  }
    break;
  }
  origbox.X1 = ebp_80;
  origbox.X1 = ebp_76;
  origbox.X1 = breakbox.Y2 < original->X2;
  origbox.X1 = ( (unsigned char)( ( original < breakbox.Y1 ) ^ 1 ) ? breakbox.Y1 : original ) < ( original->X2 <= breakbox.Y2 ? breakbox.Y2 : original->X2 );
  origbox.X1 = ( 0 - original->X2 ) + 1;
  origbox.X1 = ebp_80;
  origbox.X1 = original < breakbox.Y1;
  origbox.X1 = original->X2;
  *(int*)(bloat_routebox( &result.left.X1 )) = ebp_80;
  origbox.X1 = breakbox.X2;
  origbox.X1 = ebp_76;
  origbox.X1 = 0 - original->X2;
  origbox.X1 = 0 - original->Y1;
  origbox.X1 = ( 0 - original->X2 ) + 1;
  origbox.X1 = 0 - original->X2;
  return;
}
}
routebox_t *CreateExpansionArea( BoxType *area, Cardinal group, routebox_t *parent, Boolean relax_edge_requirements, edge_t *src_edge )
{
  int edx;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ routebox_t *rb;
  mymemset( calloc( 1, ebp_84 ), 0, 124 );
  *(int*)(*ebp_88 + 40) = 6;
  *(char*)(*ebp_88 + 45) |= 64;
  *(int*)(*ebp_88 + 8) = area->X2;
  *ebp_88 = area;
  *(int*)(*ebp_88 + 4) = area->Y1;
  *(int*)(*ebp_88 + 16) = area;
  *(int*)(*ebp_88 + 12) = area->Y2;
  *(int*)(*ebp_88 + 20) = area->Y1;
  *(short*)(*ebp_88 + 36) = group;
  *(int*)(*ebp_88 + 24) = area->X2;
  *(int*)(*ebp_88 + 28) = area->Y2;
  if ( ( parent->flags.bits_at_0/*.1_2of4*/ & 1088 ) != 64 || parent->flags.is_thermal )
  {
  }
  else
  {
    do
    {
      parent = &parent->parent.pad/*union*/;
    }
    while ( ( parent->flags.bits_at_0/*.1_2of4*/ & 1088 ) == 64 && parent->flags.is_thermal == 0 );
  }
  *(int*)(*ebp_88 + 32) = parent;
  *(int*)(*ebp_88 + 60) = edx;
  *(int*)(*ebp_88 + 64) = ebx;
  fp6 += fp5;
  *(double*)(*ebp_88 + 52) = fp7 + fp6;
  if ( ( parent->flags.bits_at_0/*.1_1of4*/ & 64 ) & 255 )
  {
    parent->refcount++;
  }
  *(char*)(*ebp_88 + 44) |= 80;
  *(int*)(*ebp_88 + 76) = AutoRouteParameters.style;
  *(int*)(*ebp_88 + 72) = parent->conflicts_with;
  *(int*)(*ebp_88 + 88) = src_edge->expand_dir;
  return *ebp_88;
}
int __Expand_this_rect( BoxType *box, void *cl )
{
  int ecx;
  int ebx;
  int esi;
  /* phantom */ struct E_result *res;
  /* phantom */ routebox_t *rb;
  /* phantom */ BoxType rbox;
  BDimension dn;
  BDimension de;
  BDimension ds;
  BDimension dw;
  static BDimension bloat;
  if ( ( ( box[2].Y2/*.2_2of4*/ & 1 ) & 255 ) == 0 )
  {
    if ( box[2].Y2/*.1_1of4*/ & 16 )
    {
      bloat = ((struct E_result*)cl)->bloat;
      if ( ((struct E_result*)cl)->inflated.X1 + ((struct E_result*)cl)->bloat < box[1].X2 )
      {
        dn = ((struct E_result*)cl)->inflated.X2;
        dn -= bloat;
        if ( dn <= box[1].X1 )
        {
          return 0;
        }
        dn = ((struct E_result*)cl)->inflated.Y2;
        dn -= bloat;
        if ( box[1].Y1 < dn )
        {
          dn = ((struct E_result*)cl)->inflated.Y1 + bloat;
          if ( dn < box[1].Y2 )
            goto B9;
        }
      }
    }
    else
    {
      if ( ((struct E_result*)cl)->keep < box[4].Y2 )
        bloat = ((struct E_result*)cl)->keep - box[4].Y2;
      else
      {
      }
      if ( ((struct E_result*)cl)->inflated.X1 < box[1].X2 && box[1].X1 < ((struct E_result*)cl)->inflated.X2 && box[1].Y1 < ((struct E_result*)cl)->inflated.Y2 && ((struct E_result*)cl)->inflated.Y1 < box[1].Y2 )
        bloat = 0;
    }
B9:;
    dn = cl;
    if ( cl == box )
    {
      return 0;
    }
    ds = box[2].X1;
    if ( box[2].X1 == dn )
    {
      return 0;
    }
    if ( ( ( dn/*.1_1of4*/ & 4 ) & 255 ) == 0 )
    {
    }
    else
    if ( ( box[2].Y2/*.1_1of4*/ & 4 ) == 0 )
    {
      if ( box[2].X2 == 6 && ( ( ds/*.1_1of4*/ & 4 ) & 255 ) )
      {
      }
    }
    if ( ( ( box[2].Y2/*.2_2of4*/ & 4 ) & 255 ) && box[2].X2 == 6 )
    {
      return 0;
    }
    if ( box[2].X2 == 7 && box[1].X1 + ( edi - ebx ) < ((struct E_result*)cl)->orig.X1 && ((struct E_result*)cl)->orig.X2 < box[1].X2 - bloat )
    {
      dn = ((struct E_result*)cl)->orig.Y1;
      if ( box[1].Y1 + bloat < dn )
      {
        ds = ((struct E_result*)cl)->orig.Y2;
        if ( ((struct E_result*)cl)->orig.Y2 < box[1].Y2 - bloat )
        {
          ((struct E_result*)cl)->inflated.X1 = ((struct E_result*)cl)->orig.X1 + ( 0 - ((struct E_result*)cl)->bloat );
          ((struct E_result*)cl)->inflated.X2 = ((struct E_result*)cl)->orig.X2 - ( 0 - ((struct E_result*)cl)->bloat );
          ((struct E_result*)cl)->inflated.Y2 = ((struct E_result*)cl)->orig.Y2 - ( 0 - ((struct E_result*)cl)->bloat );
          ((struct E_result*)cl)->inflated.Y1 = dn + ( 0 - ((struct E_result*)cl)->bloat );
          return 0;
        }
      }
    }
    if ( !( ((struct E_result*)cl)->done & 1 ) && box[1].Y1 <= ((struct E_result*)cl)->orig.Y1 && ((struct E_result*)cl)->inflated.Y1 < box[1].Y2 )
      dn = ((struct E_result*)cl)->orig.Y1 - box[1].Y2;
    else
      dn = 0;
    if ( !( ( ((struct E_result*)cl)->done & 2 ) & 255 ) && ((struct E_result*)cl)->orig.X2 <= box[1].X2 && box[1].X1 < ((struct E_result*)cl)->inflated.X2 )
      de = box[1].X1 - ((struct E_result*)cl)->orig.X2;
    else
      de = 0;
    if ( !( ( ((struct E_result*)cl)->done & 4 ) & 255 ) && ((struct E_result*)cl)->orig.Y2 <= box[1].Y2 && box[1].Y1 < ((struct E_result*)cl)->inflated.Y2 )
      ds = box[1].Y1 - ((struct E_result*)cl)->orig.Y2;
    else
      ds = 0;
    if ( box[1].X1 - ((struct E_result*)cl)->orig.X2 <= 0 && ((struct E_result*)cl)->orig.Y1 - box[1].Y2 <= 0 && dw <= 0 && ds <= 0 )
    {
      return 0;
    }
    if ( ds <= dn && de <= dn && dw <= dn )
    {
      ((struct E_result*)cl)->n = box;
      ((struct E_result*)cl)->inflated.Y1 = box[1].Y2 - bloat - bloat;
      return 0;
    }
    if ( dw <= de && ds <= de )
    {
      ((struct E_result*)cl)->e = box;
      ((struct E_result*)cl)->inflated.X2 = box[1].X1 + ( edi - ebx ) + bloat;
      return 0;
    }
    if ( dw <= ds )
    {
      ((struct E_result*)cl)->s = box;
      ((struct E_result*)cl)->inflated.Y2 = box[1].Y1 + bloat + bloat;
      return 0;
    }
    ((struct E_result*)cl)->w = box;
    ((struct E_result*)cl)->inflated.X1 = box[1].X2 - bloat;
    return 0;
  }
}
struct E_result *Expand( rtree_t *rtree, edge_t *e, BoxType *box )
{
  int eax;
  static struct E_result ans;
  /* phantom */ int noshrink;
  ans.w = 0;
  ans.s = 0;
  ans.bloat = AutoRouteParameters.bloat;
  ans.e = 0;
  ans.n = 0;
  ans.orig.X1 = box->X1;
  ans.orig.Y1 = box->Y1;
  ans.orig.X2 = box->X2;
  ans.orig.Y2 = box->Y2;
  switch ( e->expand_dir )
  {
  case ALL:
    if ( e->edge_struct == 1 )
    {
      ans.inflated.Y1 = 0;
      ans.inflated.X1 = ans.orig.X1;
      ans.inflated.X2 = PCB->MaxWidth;
      ans.done = 8;
      ans.inflated.Y2 = PCB->MaxHeight;
    }
    else
    {
      ans.inflated.X1 = 0;
      if ( e[2].rb->box.X1 == 2 )
      {
        ans.inflated.Y1 = ans.orig.Y1;
        ans.inflated.X2 = PCB->MaxWidth;
        ans.inflated.Y2 = PCB->MaxHeight;
      }
      else
      {
        ans.inflated.Y1 = 0;
        if ( e[2].rb->box.X1 == 3 )
        {
          ans.inflated.X2 = ans.orig.X2;
          ans.inflated.Y2 = PCB->MaxHeight;
        }
        else
        {
          ans.inflated.X2 = PCB->MaxWidth;
          if ( e[2].rb->box.X1 )
          {
            ans.inflated.Y2 = PCB->MaxHeight;
            if ( e[2].rb->box.X1 == 2 )
              goto B59;
            else
            if ( e[2].rb->box.X1 == 3 )
              goto B61;
            else
            {
              ans.done = 0;
            }
          }
          else
          {
            ans.done = 4;
            ans.inflated.Y2 = ans.orig.Y2;
          }
        }
B61:;
        ans.done = 2;
      }
B59:;
      ans.done = 1;
    }
    break;
  case NORTH:
    ans.done = 14;
    ans.inflated.Y1 = 0;
    ans.inflated.X1 = box->X1 - ans.bloat;
    ans.inflated.X2 = ans.bloat + box->X2;
    ans.inflated.Y2 = box->Y2;
    break;
  case NE:
    ans.done = 12;
    ans.inflated.X1 = box - ans.bloat;
    ans.inflated.Y2 = ans.bloat + box->Y2;
    ans.inflated.Y1 = 0;
    ans.inflated.X2 = PCB->MaxWidth;
    break;
  case EAST:
    ans.done = 13;
    ans.inflated.Y1 = box->Y1 - ans.bloat;
    ans.inflated.Y2 = ans.bloat + box->Y2;
    ans.inflated.X1 = box->X1;
    ans.inflated.X2 = PCB->MaxWidth;
    break;
  case SE:
    ans.done = 9;
    ans.inflated.X1 = box->X1 - ans.bloat;
    ans.inflated.X2 = PCB->MaxWidth;
    ans.inflated.Y1 = box->Y1 - ans.bloat;
    ans.inflated.Y2 = PCB->MaxHeight;
    break;
  case SOUTH:
    ans.done = 11;
    ans.inflated.X1 = box->X1 - ans.bloat;
    ans.inflated.X2 = ans.bloat + box->X2;
    ans.inflated.Y1 = box->Y1;
    ans.inflated.Y2 = PCB->MaxHeight;
    break;
  case SW:
    ans.done = 3;
    ans.inflated.X1 = 0;
    ans.inflated.X2 = ans.bloat + box->X2;
    ans.inflated.Y1 = box->Y1 - ans.bloat;
    ans.inflated.Y2 = PCB->MaxHeight;
    break;
  case WEST:
    ans.done = 7;
    ans.inflated.X1 = 0;
    ans.inflated.Y1 = box->Y1 - ans.bloat;
    ans.inflated.Y2 = ans.bloat + box->Y2;
    ans.inflated.X2 = box->X2;
    break;
  case NW:
    ans.done = 6;
    ans.inflated.X1 = 0;
    ans.inflated.Y1 = 0;
    ans.inflated.X2 = ans.bloat + box->X2;
    ans.inflated.Y2 = ans.bloat + box->Y2;
    break;
  default:
    ans.done = 0;
    break;
  }
  do
  {
    ans.keep = e[1].work;
    if ( ( e[1].rb & 1088 ) == 64 )
      continue;
    ans.parent = &e->work;
    r_search( rtree, &ans.inflated, 0, &__Expand_this_rect, (void*)ans.parent );
    if ( ans.n )
    {
      T/*.531*/( );
      if ( ( ans.n & 255 ) == 0 )
        ans.inflated.Y1 = 0;
        if ( ans.e )
        {
          T/*.531*/( );
          if ( ( ans.e & 255 ) == 0 )
            ans.inflated.X2 = PCB->MaxWidth;
            if ( ans.s )
            {
              T/*.531*/( );
              if ( ( ans.s & 255 ) == 0 )
                ans.inflated.Y2 = PCB->MaxHeight;
                if ( ans.w )
                {
                  T/*.531*/( );
                  if ( ( ans.w & 255 ) == 0 )
                    ans.inflated.X1 = 0;
                    if ( ( ans.done | 8 | 4 | 2 ) != 15 )
                      r_search( rtree, &ans.inflated, 0, &__Expand_this_rect, (void*)ans.parent );
                    if ( esi == 0 )
                      ans.inflated.Y1 += ans.bloat;
                    if ( edi == 0 )
                      ans.inflated.X2 -= ans.bloat;
                    if ( 0 == 0 )
                      ans.inflated.Y2 -= ans.bloat;
                    if ( 0 == 0 )
                    {
                      ans.inflated.X1 += ans.bloat;
                      break;
                    }
                }
                ans.done |= 8;
            }
            ans.done |= 4;
        }
        ans.done |= 2;
    }
    ans.done |= 1;
  }
  while ( e->work );
  if ( ( e->work & 1088 ) != 64 )
    continue;
  else
  {
    if ( e->work == 0 )
      continue;
  }
}
int blocker_to_heap( heap_t *heap, routebox_t *rb, BoxType *box, direction_t dir )
{
  int eax;
  int ecx;
  /* phantom */ BoxType b;
  rb->sbox.Y1 = rb->sbox.Y1;
  if ( dir == EAST )
  {
    heap_insert( &heap, (double)( rb->sbox.Y1 < *(int*)(box->X1 + 4) ? rb->sbox.Y1 : box->Y1 ) - ( (double)( rb->sbox.Y1 < *(int*)(box->X1 + 4) ? rb->sbox.Y1 : box->Y1 ) / ( (double)( rb->sbox.Y2 - ( AutoRouteParameters.style->Keepaway - rb->style->Keepaway ) <= *(int*)(box->X1 + 12) ? *(int*)(box->X1 + 12) : rb->sbox.Y2 - ( AutoRouteParameters.style->Keepaway - rb->style->Keepaway ) ) + 1.000000000000 ) ), (void*)rb );
  }
  if ( 0 )
  {
    heap_insert( &heap, (double)( (unsigned char)( ( rb->sbox.X1 < box ) ^ 1 ) ? box : rb->sbox.X1 ) - ( (double)( (unsigned char)( ( rb->sbox.X1 < box ) ^ 1 ) ? box : rb->sbox.X1 ) / ( (double)( box->X2 < rb->sbox.X2 - ( AutoRouteParameters.style->Keepaway - rb->style->Keepaway ) ? rb->sbox.X2 - ( AutoRouteParameters.style->Keepaway - rb->style->Keepaway ) : box->X2 ) + 1.000000000000 ) ), (void*)rb );
  }
  if ( dir == SOUTH )
  {
    heap_insert( &heap, -( (double)( box->X2 < rb->sbox.X2 - ( AutoRouteParameters.style->Keepaway - rb->style->Keepaway ) ? rb->sbox.X2 - ( AutoRouteParameters.style->Keepaway - rb->style->Keepaway ) : box->X2 ) + ( (double)( (unsigned char)( ( rb->sbox.X1 < box ) ^ 1 ) ? box : rb->sbox.X1 ) / ( (double)( box->X2 < rb->sbox.X2 - ( AutoRouteParameters.style->Keepaway - rb->style->Keepaway ) ? rb->sbox.X2 - ( AutoRouteParameters.style->Keepaway - rb->style->Keepaway ) : box->X2 ) + 1.000000000000 ) ) ), (void*)rb );
  }
  if ( dir == WEST )
  {
    heap_insert( &heap, -( (double)( rb->sbox.Y2 - ( AutoRouteParameters.style->Keepaway - rb->style->Keepaway ) <= *(int*)(box->X1 + 12) ? *(int*)(box->X1 + 12) : rb->sbox.Y2 - ( AutoRouteParameters.style->Keepaway - rb->style->Keepaway ) ) + ( (double)( rb->sbox.Y1 < *(int*)(box->X1 + 4) ? rb->sbox.Y1 : box->Y1 ) / ( (double)( rb->sbox.Y2 - ( AutoRouteParameters.style->Keepaway - rb->style->Keepaway ) <= *(int*)(box->X1 + 12) ? *(int*)(box->X1 + 12) : rb->sbox.Y2 - ( AutoRouteParameters.style->Keepaway - rb->style->Keepaway ) ) + 1.000000000000 ) ) ), (void*)rb );
  }
  return (unsigned char)( *(char*)(&rb->flags.bits_at_0) & 14 ) == 2;
}
routebox_t *CreateBridge( BoxType *area, routebox_t *parent, direction_t dir )
{
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ routebox_t *rb;
  mymemset( calloc( 1, ebp_52 ), 0, 124 );
  *(int*)(*ebp_56 + 40) = 6;
  *(char*)(*ebp_56 + 45) |= 64;
  *ebp_56 = area;
  *(int*)(*ebp_56 + 12) = area->Y2;
  *(int*)(*ebp_56 + 28) = area->Y2;
  *(int*)(*ebp_56 + 4) = area->Y1;
  *(int*)(*ebp_56 + 8) = area->X2;
  *(int*)(*ebp_56 + 16) = area;
  *(short*)(*ebp_56 + 36) = parent->group;
  *(int*)(*ebp_56 + 20) = area->Y1;
  *(int*)(*ebp_56 + 24) = area->X2;
  *(int*)(*ebp_56 + 88) = dir;
  *(int*)(*ebp_56 + 60) = parent->cost_point.X < parent->cost_point.X ? area : parent->cost_point.X < area->X2 ? area->X2 + -1 : parent->cost_point.X;
  *(int*)(*ebp_56 + 64) = parent->cost_point.Y < area->Y2 ? area->Y2 + -1 : parent->cost_point.Y;
  fp6 += fp5;
  *(double*)(*ebp_56 + 52) = fp7 + fp6;
  if ( ( parent->flags.bits_at_0/*.1_2of4*/ & 1088 ) != 64 || parent->flags.is_thermal )
  {
  }
  else
  {
    do
    {
      parent = &parent->parent.pad/*union*/;
    }
    while ( ( parent->flags.bits_at_0/*.1_2of4*/ & 1088 ) == 64 && parent->flags.is_thermal == 0 );
  }
  *(int*)(*ebp_56 + 32) = parent;
  if ( ( parent->flags.bits_at_0/*.1_1of4*/ & 64 ) & 255 )
  {
    parent->refcount++;
  }
  *(char*)(*ebp_56 + 44) |= 80;
  *(int*)(*ebp_56 + 76) = parent->style;
  *(int*)(*ebp_56 + 72) = parent->conflicts_with;
  return *ebp_56;
}
void moveable_edge( vector_t *result, BoxType *box, direction_t dir, routebox_t *rb, routebox_t *blocker, edge_t *e, rtree_t *targets, struct routeone_state *s, rtree_t *tree, vector_t *area_vec )
{
  int eax;
  int ecx;
  int edx;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  BoxType b;
  b.X1 = box->X1;
  b.Y1 = box->Y1;
  b.X2 = box->X2;
  b.Y2 = box->Y2;
  switch ( dir )
  {
  case NORTH:
    b.Y2 = b.Y1;
    b.Y1 += -1;
    if ( b.Y1 + -1 <= AutoRouteParameters.bloat )
    {
      return;
    }
    if ( blocker == 0 )
    {
      edge_t *ne;
      routebox_t *nrb;
      CreateBridge( &b, rb, dir );
      if ( dir + -4 > 3 )
      {
      }
      else
      {
        /* phantom */ CheapPointType p;
        fp6 += fp5;
        nrb->cost_point.Y = b.Y1 < b.Y1 ? b.Y1 : (unsigned char)( ( b.Y1 < b.Y2 ) ^ 1 ) ? b.Y1 : b.Y2 + -1;
        nrb->cost_point.X = b.X1 < b.X1 ? b.Y1 : (unsigned char)( ( b.X1 < b.X2 ) ^ 1 ) ? b.X1 : b.X2 + -1;
        nrb->cost = fp7 + fp6;
      }
      vector_append( &result, &eax );
    }
    else
    {
      if ( AutoRouteParameters.with_conflicts && ( ( blocker->flags.bits_at_0/*.1_2of4*/ & 270 ) & 65535 ) == 0 )
      {
        if ( blocker->type != EXPANSION_AREA )
        {
          edge_t *ne;
          routebox_t *nrb;
          if ( dir != EAST )
          {
            if ( !0 )
            {
              if ( dir == SOUTH )
                b.Y2 = blocker->sbox.Y1 + 1;
              else
              if ( dir == WEST )
                b.X1 = blocker->sbox.X2 + -1;
            }
            else
              b.Y1 = blocker->sbox.Y2 + -1;
          }
          else
            b.X2 = blocker->sbox.X1 + 1;
          if ( eax < b.X2 && b.Y1 < b.Y2 )
          {
            r_insert_entry( tree, (BoxType*)CreateBridge( &b, rb, dir ), 1 );
            vector_append( &area_vec, &nrb );
            nrb->flags.bits_at_0/*.1_1of4*/ &= 191;
            path_conflicts( nrb, blocker, 1 );
            nrb->cost_point.X = edx;
            nrb->cost_point.Y = ecx;
            fp6 += fp5;
            nrb->cost = fp7 + ( fp6 * ( ( (int)blocker->flags.bits_at_0/*.1_1of4*/ >> 7 ) != AutoRouteParameters.is_odd ? AutoRouteParameters.ConflictPenalty : AutoRouteParameters.LastConflictPenalty ) * (double)( blocker->pass ) );
            ne->flags.bits_at_0/*.1_1of4*/ = *(char*)(&eax->flags.bits_at_0) | 8;
            vector_append( &result, &ne );
          }
        }
      }
      else
      {
        if ( blocker->type == EXPANSION_AREA )
          goto B9;
        else
        {
          if ( ( ( blocker->flags.bits_at_0/*.1_1of4*/ & 8 ) & 255 ) == 0 )
          {
            return;
          }
        {
          routebox_t *nrb;
          edge_t *ne;
          if ( blocker->sbox.X2 <= b.X1 || b.X2 + 1 <= blocker->sbox.X1 || blocker->sbox.Y2 <= b.Y1 + -1 || b.Y2 + 1 <= blocker->sbox.Y1 )
          {
            if ( dir != EAST )
            {
              if ( !0 )
              {
                if ( dir == SOUTH )
                {
                }
                else
                if ( dir == WEST )
                  b.X1 += ~AutoRouteParameters.bloat;
              }
              else
              {
              }
            }
            else
            {
            }
          }
          b.X1 = b.X1;
          b.Y1 = b.Y1 + -1 + 1;
          b.X2 = b.X2 + 1 + -1;
          b.Y2 = b.Y2 + 1 + -1;
          nrb = CreateBridge( &b, rb, dir );
          r_insert_entry( tree, (BoxType*)CreateBridge( &b, rb, dir ), 1 );
          vector_append( &area_vec, &nrb );
          nrb->flags.bits_at_0/*.1_1of4*/ &= 191;
          ne = CreateEdge( nrb, nrb->cost_point.X, nrb->cost_point.Y, nrb->cost, blocker, dir, 0 );
          best_path_candidate( s, CreateEdge( nrb, nrb->cost_point.X, nrb->cost_point.Y, nrb->cost, blocker, dir, 0 ), blocker );
          KillEdge( (void*)ne );
          return;
        }
        }
      }
B9:;
      if ( blocker->cost < rb->cost )
      {
      }
      else
      {
        if ( blocker->cost < rb->cost + -( (double)( blocker->cost_point.X - rb->cost_point.X ) * (double)( x_cost[ rb->group ] ) ) && blocker->conflicts_with == 0 && rb->conflicts_with == 0 )
        {
          if ( ( blocker->parent.expansion_area & 64 ) & 255 )
          {
            RB_down_count( &rb->cost_point.X );
          }
          blocker->parent.pad/*union*/ = &rb[0].box.X1;
        }
      }
    }
    break;
  case EAST:
    b.X1 = b.X2;
    b.X2++;
    if ( b.X2 + 1 < PCB->MaxWidth - AutoRouteParameters.bloat )
      continue;
    break;
  case SOUTH:
    b.Y1 = b.Y2;
    b.Y2++;
    if ( b.Y2 + 1 < PCB->MaxHeight - AutoRouteParameters.bloat )
      continue;
    break;
  case WEST:
    b.X2 = b.X1;
    if ( b.X1 <= AutoRouteParameters.bloat )
    {
      return;
    }
    break;
  case NE:
    if ( b.Y1 <= AutoRouteParameters.bloat + 1 )
    {
      if ( b.X2 < PCB->MaxWidth + ~AutoRouteParameters.bloat )
        dir = EAST;
    }
    else
    {
      if ( PCB->MaxWidth + ~AutoRouteParameters.bloat <= b.X2 )
        dir = NORTH;
    }
    break;
  case SE:
    if ( PCB->MaxHeight + ~AutoRouteParameters.bloat <= b.Y2 )
    {
      if ( b.X2 < ~AutoRouteParameters.bloat + PCB->MaxWidth )
        dir = EAST;
    }
    else
    {
      if ( ~AutoRouteParameters.bloat + PCB->MaxWidth <= b.X2 )
        dir = SOUTH;
    }
    break;
  case SW:
    if ( PCB->MaxHeight + ~AutoRouteParameters.bloat <= b.Y2 )
    {
      if ( b.X1 <= AutoRouteParameters.bloat + 1 )
      {
        return;
      }
      dir = WEST;
    }
    else
    {
      if ( b.X1 <= AutoRouteParameters.bloat + 1 )
        dir = SOUTH;
    }
    break;
  case NW:
    if ( AutoRouteParameters.bloat + 1 < b.Y1 )
    {
      if ( b.X1 <= AutoRouteParameters.bloat )
        dir = NORTH;
    }
    else
    {
      if ( AutoRouteParameters.bloat + 1 < b.X1 )
        dir = WEST;
    }
    break;
  default:
    break;
  }
  return;
}
int __GatherBlockers( BoxType *box, void *cl )
{
  int ecx;
  int ebx;
  int esi;
  int edi;
  /* phantom */ routebox_t *rb;
  /* phantom */ struct break_info *bi;
  /* phantom */ BoxType b;
  if ( ((int*)cl) != box && !( ( box[2].Y2/*.2_2of4*/ & 1 ) & 255 ) && ((int*)cl) != box && ( ( ( box[2].Y2/*.1_1of4*/ & 4 ) & 255 ) == 0 || ((routebox_t*)cl)->sbox.Y2/*.1_1of4*/ == 0 ) )
  {
    if ( AutoRouteParameters.style->Keepaway < box[4].Y2 )
      box[1].X2 = box[1].X2 - ( AutoRouteParameters.style->Keepaway - box[4].Y2 );
    if ( box[1].X2 <= ((routebox_t*)cl)->box.X2 || ((routebox_t*)cl)->sbox.X1 <= box[1].X1 || ((routebox_t*)cl)->sbox.Y1 <= box[1].Y1 )
    {
      return 0;
    }
    if ( ((routebox_t*)cl)->box.Y2 < box[1].Y2 )
    {
      box = &((routebox_t*)cl)->sbox.X2;
    }
  }
  return 0;
}
vector_t *BreakManyEdges( struct routeone_state *s, rtree_t *targets, rtree_t *tree, vector_t *area_vec, struct E_result *ans, routebox_t *rb, edge_t *e )
{
  int eax;
  int ecx;
  int edx;
  int ebp_352;
#error unstructured control flow
}
int foib_rect_in_reg( BoxType *box, void *cl )
{
  int eax;
  int edx;
  int esi;
  /* phantom */ struct foib_info *foib;
  BoxType rbox;
  /* phantom */ routebox_t *rb;
  if ( ( ( box[2].Y2/*.2_2of4*/ & 1 ) & 255 ) == 0 )
  {
    ebp = bloat_routebox( &box[0].X1 );
    if ( rbox.X1 < *(int*)(((int*)cl)) && *(int*)(cl) < rbox.X2 && rbox.Y1 < ((int*)cl) && ((int*)cl) < rbox.Y2 )
    {
      ((int*)cl) = box;
      __longjmp_chk( cl + 8, 1 );
    }
  }
  return 0;
}
routebox_t *FindOneInBox( rtree_t *rtree, routebox_t *rb )
{
  struct foib_info foib;
  BoxType r;
  foib.intersect = 0;
  r.X1 = rb->sbox.X1;
  r.Y1 = rb->sbox.Y1;
  r.X2 = rb->sbox.X2;
  r.Y2 = rb->sbox.Y2;
  foib.box = &r;
  if ( _setjmp( &foib.env[0].__jmpbuf[0] ) == 0 )
  {
    r_search( rtree, &r, 0, &foib_rect_in_reg, (void*)foib.box );
  }
  return foib.intersect;
}
int ftherm_rect_in_reg( BoxType *box, void *cl )
{
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
#error unstructured control flow
}
routebox_t *FindThermable( rtree_t *rtree, routebox_t *rb )
{
  struct therm_info info;
  info.plane = rb;
  info.query.X2 = rb->sbox.X2;
  info.query.Y1 = rb->sbox.Y1;
  info.query.X1 = rb->sbox.X1;
  info.query.Y2 = rb->sbox.Y2;
  if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
  {
    r_search( rtree, &info.query, 0, &ftherm_rect_in_reg, (void*)info.plane );
  }
  return info.plane;
}
void RD_DrawThermal( routedata_t *rd, LocationType X, LocationType Y, Cardinal group, Cardinal layer, routebox_t *subnet, Boolean is_bad )
{
  /* phantom */ routebox_t *rb;
  mymemset( calloc( 1, 124 ), 0, 124 );
  *(int*)(*ebp_56 + 8) = X + 1;
  *(int*)(*ebp_56 + 24) = X + 1;
  *ebp_56 = X;
  *(int*)(*ebp_56 + 4) = Y;
  *(int*)(*ebp_56 + 12) = Y + 1;
  *(int*)(*ebp_56 + 20) = Y;
  *(int*)(*ebp_56 + 28) = Y + 1;
  *(short*)(*ebp_56 + 36) = group;
  *(int*)(*ebp_56 + 16) = X;
  *(short*)(*ebp_56 + 38) = layer;
  *(char*)(*ebp_56 + 45) = ( ( *(char*)(*ebp_56 + 45) | 64 ) & -33 ) | ( ( is_bad & 1 ) << 5 );
  *(int*)(*ebp_56 + 40) = 8;
  *(char*)(*ebp_56 + 44) = ( *(char*)(*ebp_56 + 44) & 93 ) | ( AutoRouteParameters.is_odd << 7 );
  *(int*)(*ebp_56 + 76) = AutoRouteParameters.style;
  InitLists( *ebp_56 );
  MergeNets( *ebp_56, subnet, NET );
  MergeNets( *ebp_56, subnet, SUBNET );
  r_insert_entry( rd->layergrouptree[0], *ebp_56, 1 );
  *(char*)(*ebp_56 + 44) &= 191;
  return;
}
void RD_DrawLine( routedata_t *rd, LocationType X1, LocationType Y1, LocationType X2, LocationType Y2, BDimension halfthick, Cardinal group, routebox_t *subnet, Boolean is_bad, Boolean is_45 )
{
  int eax;
  static LocationType qX1 = -1;
  static LocationType qY1;
  static LocationType qX2;
  static LocationType qY2;
  static BDimension qhthick;
  static Cardinal qgroup;
  static Boolean qis_45;
  static Boolean qis_bad;
  static routebox_t *qsn;
  /* phantom */ routebox_t *rb;
  int ka = AutoRouteParameters.style->Keepaway;
  if ( Y2 == Y1 )
  {
    if ( ( ( X2 == X1 ) & 255 ) == 0 )
    {
      if ( qX1 == -1 )
      {
        qX2 = X2;
        qY2 = Y2;
        qhthick = halfthick;
        qX1 = X1;
        qY1 = Y1;
        qis_bad = is_bad;
        qgroup = group;
        qis_45 = is_45;
        qsn = subnet;
        return;
      }
      if ( qX2 == X1 && qY2 == Y1 && qhthick == halfthick && qgroup == group )
      {
        if ( ( ( X2 == X1 ) & 255 ) && qX1 == X1 )
        {
          qY2 = Y2;
          return;
        }
        else
        if ( Y2 == Y1 && qY1 == Y1 )
        {
          qX2 = X2;
          return;
        }
      }
      mymemset( calloc( 1, 124 ), 0, 124 );
      *(int*)(*ebp_104 + 28) = qhthick + 1 + ( (unsigned char)( ( qY1 < qY2 ) ^ 1 ) ? qY2 : qY1 );
      *(int*)(*ebp_104 + 24) = qhthick + 1 + ( (unsigned char)( ( qX1 < qX2 ) ^ 1 ) ? qX2 : qX1 );
      *ebp_104 = ( qX1 <= qX2 ? qX2 : qX1 ) - qhthick - ka;
      *(int*)(*ebp_104 + 4) = ( qY1 <= qY2 ? qY2 : qY1 ) - qhthick - ka;
      *(int*)(*ebp_104 + 8) = ka + *(int*)(*ebp_104 + 24);
      *(int*)(*ebp_104 + 12) = ka + *(int*)(*ebp_104 + 28);
      *(int*)(*ebp_104 + 16) = ( qX1 <= qX2 ? qX2 : qX1 ) - qhthick;
      *(int*)(*ebp_104 + 40) = 4;
      *(int*)(*ebp_104 + 20) = ( qY1 <= qY2 ? qY2 : qY1 ) - qhthick;
      *(int*)(*ebp_104 + 32) = 0;
      *(short*)(*ebp_104 + 36) = qgroup;
      *(int*)(*ebp_104 + 88) = 8;
      *(char*)(*ebp_104 + 45) = ( ( *(char*)(*ebp_104 + 45) | 64 ) & -33 ) | ( ( qis_bad & 1 ) << 5 );
      *(char*)(*ebp_104 + 44) = ( (unsigned char)( *(char*)(*ebp_104 + 44) & 60 ) | (unsigned char)( AutoRouteParameters.is_odd << 7 ) ) | ( qis_45 & 1 );
      if ( qX1 <= qX2 )
      {
        if ( qY1 < qY2 )
        {
        }
      }
      else
      {
      }
      *(char*)(*ebp_104 + 45) = ( ( ( ( *(char*)(*ebp_104 + 45) | 64 ) & -33 ) | ( ( qis_bad & 1 ) << 5 ) ) & -9 ) | ( ( qX2 <= qX1 ) << 3 );
      *(int*)(*ebp_104 + 76) = AutoRouteParameters.style;
      *(char*)(*ebp_104 + 84) = AutoRouteParameters.pass;
      InitLists( *ebp_104 );
      MergeNets( *ebp_104, qsn, NET );
      MergeNets( *ebp_104, qsn, SUBNET );
      r_insert_entry( rd->layergrouptree[0], *ebp_104, 1 );
      if ( ( PCB->Flags.f/*.3_3of4*/ & 1 ) & 255 )
      {
        /* phantom */ LayerTypePtr layp;
        gui->set_line_width( ar_gc, qhthick * 2, PCB->Font.Symbol[255].Delta );
        gui->set_color( ar_gc, PCB->Data->Layer->Color );
        gui->draw_line( ar_gc, qX1, qY1, qX2 );
      }
      if ( AutoRouteParameters.use_vias )
        mtspace_add( (int)( &rd->mtspace ), *ebp_104, ~( 0 - ( ( ( *(char*)(*ebp_104 + 44) & 128 ) < ( 1 & 255 ) ) & 1 ) ) + 2, *(int*)(*(int*)(*ebp_104 + 76) + 12) );
      usedGroup[ *(short*)(*ebp_104 + 36) ] = 1;
      qhthick = halfthick;
      qX2 = X2;
      qX1 = X1;
      qY2 = Y2;
      qY1 = Y1;
      qgroup = group;
      qis_45 = is_45;
      qis_bad = is_bad;
      qsn = subnet;
      return;
    }
    else
    {
      return;
    }
  }
  else
  if ( qX1 == -1 )
  {
    qX2 = X2;
    qY2 = Y2;
    qhthick = halfthick;
    qX1 = X1;
    qY1 = Y1;
    qis_bad = is_bad;
    qgroup = group;
    qis_45 = is_45;
    qsn = subnet;
    return;
  }
  qX2 = X2;
  qY2 = Y2;
  qhthick = halfthick;
  qX1 = X1;
  qY1 = Y1;
  qis_bad = is_bad;
  qgroup = group;
  qis_45 = is_45;
  qsn = subnet;
  return;
}
Boolean RD_DrawManhattanLine( routedata_t *rd, BoxType *box1, BoxType *box2, CheapPointType start, CheapPointType end, BDimension halfthick, Cardinal group, routebox_t *subnet, Boolean is_bad, Boolean last_was_x )
{
  int eax;
  int ecx;
  int edx;
  /* phantom */ CheapPointType knee;
  if ( start.X == end.X )
  {
    RD_DrawLine( rd, end.X, start.Y, end.X, end.Y, halfthick, group, subnet, is_bad, 0 );
  }
  if ( end.Y == start.X )
  {
    RD_DrawLine( rd, start.X, end.Y, end.X, end.Y, halfthick, group, subnet, is_bad, 0 );
  }
  RD_DrawLine( rd, start.X, start.X, start.X, end.Y, halfthick, group, subnet, is_bad, 0 );
  RD_DrawLine( rd, end.X < box2 || start.X < box2->Y1 || box2->X2 <= end.X || box2->Y2 <= start.X ? start.X : end.X, end.X < box2 || start.X < box2->Y1 || box2->X2 <= end.X || box2->Y2 <= start.X ? end.Y : start.X, end.X, end.Y, halfthick, group, subnet, is_bad, 0 );
  return 0;
}
void CreateSearchEdge( struct routeone_state *s, vetting_t *work, edge_t *parent, routebox_t *rb, conflict_t conflict, rtree_t *targets, Boolean in_plane )
{
  int eax;
  int ecx;
  int edx;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  routebox_t *target = parent->mincost_target;
  /* phantom */ BoxType b;
  cost_t cost;
  if ( target->sbox.X1 <= rb->cost_point.X )
  {
    if ( *(double*)(ebp_36 + 12) <= fp6 + fp7 + fp5 )
    {
      mtsFreeWork( &work );
      return;
    }
  {
    /* phantom */ edge_t *ne;
    mymemset( calloc( 1, 44 ), 0, 44 );
    *ebp_104 = rb;
    *(char*)(*ebp_104 + 40) = ( ( *(char*)(*ebp_104 + 40) | 16 ) & -33 ) | ( ( in_plane & 1 ) << 5 );
    if ( ( rb->flags.bits_at_0/*.1_1of4*/ & 64 ) & 255 )
      rb->refcount++;
    *(int*)(*ebp_104 + 28) = target;
    *(int*)(*ebp_104 + 32) = work;
    *(char*)(*ebp_104 + 40) = ( ( ( ( *(char*)(*ebp_104 + 40) | 16 ) & -33 ) | ( ( in_plane & 1 ) << 5 ) ) & -7 ) | ( ( __MOD(conflict,4) ) * 2 );
    *(double*)(*ebp_104 + 12) = (int)parent->cost_to_point;
    *(double*)(*ebp_104 + 20) = fp7;
    *(int*)(*ebp_104 + 4) = parent->cost_point.X;
    *(int*)(*ebp_104 + 8) = parent->cost_point.Y;
    heap_insert( (int)( &s->workheap ), *ebp_104 + 20, *ebp_104 );
    return;
  }
  }
}
void add_or_destroy_edge( struct routeone_state *s, edge_t *e )
{
  double fp0;
  edge_cost( e, s->best_cost );
  e->cost = 0.000000000000;
  if ( s->best_cost <= 0.000000000000 )
  {
    KillEdge( (void*)e );
    return;
  }
  heap_insert( (int)( &s->workheap ), 0.000000000000, (void*)e );
  return;
}
void best_path_candidate( struct routeone_state *s, edge_t *e, routebox_t *best_target )
{
  double fp0;
  s = s;
  edge_cost( e, 30000000000000000949187772416.000000000000 );
  e->cost = 0.000000000000;
  if ( s->best_path )
  {
    if ( 0.000000000000 < s->best_cost )
    {
      if ( ( ( *(char*)(s->best_path + 44) & 64 ) & 255 ) == 0 )
        goto B2;
      else
      {
        RB_down_count( &eax[0] );
      }
    }
    else
    {
      return;
    }
  }
B2:;
  s->best_cost = 0.000000000000;
  s->best_target = best_target;
  s->best_path = e->rb;
  if ( ( e[1].rb->box.X1/*.1_1of4*/ & 64 ) & 255 )
  {
    e[1].cost << 32++;
  }
  return;
}
void add_via_sites( struct routeone_state *s, struct routeone_via_site_state *vss, mtspace_t *mtspace, routebox_t *within, conflict_t within_conflict_level, edge_t *parent_edge, rtree_t *targets, BDimension shrink, Boolean in_plane )
{
  int eax;
  int ecx;
  int edx;
  /* phantom */ int radius, keepaway;
  vetting_t *work;
  BoxType region;
  region.X1 = within->sbox.X1;
  region.Y1 = within->sbox.Y1;
  region.X2 = within->sbox.X2;
  region.Y2 = within->sbox.Y2;
  if ( work )
  {
    CreateSearchEdge( s, mtspace_query_rect( &mtspace, &region, ( AutoRouteParameters.style->Diameter + 1 ) / 2, AutoRouteParameters.style->Keepaway, 0, &vss->free_space_vec, &vss->lo_conflict_space_vec, &vss->hi_conflict_space_vec, AutoRouteParameters.is_odd, AutoRouteParameters.with_conflicts, &parent_edge->cost_point ), parent_edge, within, within_conflict_level, targets, in_plane );
  }
  return;
}
void do_via_search( edge_t *search, struct routeone_state *s, struct routeone_via_site_state *vss, mtspace_t *mtspace, rtree_t *targets )
{
  int eax;
  int ecx;
  int edx;
  double fp5;
  double fp6;
  double fp7;
  int i, j, count;
  /* phantom */ int radius, keepaway = (AutoRouteParameters.ViaCost << 32);
  vetting_t *work;
  routebox_t *within = &search->rb->box.X1;
  conflict_t within_conflict_level;
  work = mtspace_query_rect( &mtspace, 0, 0, 0, &search->work, &vss->free_space_vec, &vss->lo_conflict_space_vec, &vss->hi_conflict_space_vec, AutoRouteParameters.is_odd, AutoRouteParameters.with_conflicts, 0 );
  i = 0;
  within_conflict_level = __MOD(( *(char*)(search + 40) >> 1 ),4);
{
  edge_t *ne;
  do
  {
    if ( i == 0 )
      v = vss->free_space_vec;
    else
    if ( i == 1 )
      v = vss->lo_conflict_space_vec;
    else
      v = vss->hi_conflict_space_vec;
    do
    {
      vector_is_empty( &v );
      while ( vector_is_empty( &v ) == 0 )
      {
        vector_remove_last( &v );
        if ( i == 0 || AutoRouteParameters.with_conflicts )
        {
          cliparea.Y2 = ( *(int*)vector_remove_last( &v )/*.12*/ + 1 ) - ( keepaway + ( ( AutoRouteParameters.bloat + 1 ) / 2 ) );
          cliparea.X2 = ( *(int*)vector_remove_last( &v )/*.8*/ + 1 ) - ( keepaway + ( ( AutoRouteParameters.bloat + 1 ) / 2 ) );
          cliparea.X1 = keepaway + ( ( AutoRouteParameters.bloat + 1 ) / 2 ) + *(int*)(vector_remove_last( &v ));
          cliparea.Y1 = keepaway + ( ( AutoRouteParameters.bloat + 1 ) / 2 ) + *(int*)vector_remove_last( &v )/*.4*/;
          free( vector_remove_last( &v ) );
          if ( PCB->Data->LayerN > 0 )
            j = 0;
            if ( within->group != j && is_layer_group_active[ j ] )
            {
              *(int*)CreateExpansionArea( &cliparea, j, &ecx, 1, search )/*.45*/ |= 4;
              *(int*)CreateExpansionArea( &cliparea, j, &ecx, 1, search )/*.88*/ = 8;
              ne->mincost_target = mincost_target_to_point( ebp_32, *(int*)CreateExpansionArea( &cliparea, j, &ecx, 1, search )/*.36*/, targets, search->mincost_target );
              *(int*)CreateEdge( &esi, PCB, ecx, search->cost_to_point + ( fp7 * fp6 ), ebp_84, 8, 0 )/*.40*/ = (unsigned char)( ( __MOD(( *(char*)(search + 40) >> 1 ),4) ) * 2 ) | (unsigned char)( ( (int)ne->flags.bits_at_0/*.1_1of4*/ | 1 ) & -7 );
              add_or_destroy_edge( s, (edge_t*)CreateExpansionArea( &cliparea, j, &ecx, 1, search ) );
            }
            j++;
            if ( j + 1 < PCB->Data->LayerN )
            {
            }
        }
        else
        {
          free( vector_remove_last( &v ) );
          vector_is_empty( &v );
        }
      }
      i++;
      if ( i != 3 )
      {
        do
        {
        }
        while ( i != 3 );
        search->flags.bits_at_0/*.1_1of4*/ = (int)search->flags.bits_at_0/*.1_1of4*/ & -17;
        if ( work == 0 )
          break;
        CreateSearchEdge( s, &work, search, within, within_conflict_level, targets, ( ( (int)search->flags.bits_at_0/*.1_1of4*/ & -17 ) >> 5 ) & 1 );
        break;
      }
    }
    while ( PCB->Data->LayerN <= j + 1 );
  }
  while ( i != 3 );
}
}
int __conflict_source( BoxType *box, void *cl )
{
  int eax;
  /* phantom */ routebox_t *rb;
  if ( ( ( box[2].Y2/*.1_2of4*/ & 258 ) & 65535 ) == 0 )
  {
    /* phantom */ routebox_t *this;
    path_conflicts( &cl[0], &box[0].X1, 0 );
    touch_conflicts( &((routebox_t*)cl)->conflicts_with, 1 );
  }
  return 1;
}
struct routeone_status RouteOne( routedata_t *rd, routebox_t *from, routebox_t *to, int max_edges )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  /* phantom */ struct routeone_status result;
  /* phantom */ routebox_t *p;
  int seen, i;
  /* phantom */ BoxType **target_list;
  int num_targets;
  rtree_t *targets;
  vector_t *source_vec;
  vector_t *edge_vec;
  struct routeone_state s;
  struct routeone_via_site_state vss;
{
  routebox_t *__next_one__;
  if ( from )
  {
    __next_one__ = from;
    while ( __next_one__ = __next_one__->same_net.next, __next_one__->flags.bits_at_0/*.1_1of4*/ |= 16, __next_one__->same_net.next != from )
    {
    }
    __next_one__ = from;
  {
    while ( __next_one__ = __next_one__->same_subnet.next, ( *(char*)(&__next_one__->flags.bits_at_0) & 1 ) & 255 )
    {
      if ( __next_one__->same_net.next == __next_one__ )
        goto B2;
      else
      {
      }
    }
    __next_one__->flags.bits_at_0/*.1_1of4*/ = (int)__next_one__->flags.bits_at_0/*.1_1of4*/ | 4;
  }
  }
B2:;
  if ( to )
  {
    if ( ( ( to->flags.bits_at_0/*.1_1of4*/ & 4 ) & 255 ) == 0 )
    {
      __next_one__ = to;
      num_targets = 0;
      while ( __next_one__ = __next_one__->same_subnet.next, ( (int)__next_one__->flags.bits_at_0/*.1_1of4*/ & 1 ) || is_layer_group_active[ *(short*)(__next_one__->box.X1 + 36) ] == 0 )
      {
        if ( to == __next_one__ )
          goto B19;
        else
        {
          routebox_t *__next_one__ = __next_one__->same_subnet.next;
        }
      }
      __next_one__->flags.bits_at_0/*.1_1of4*/ |= 8;
      num_targets++;
    }
    else
    {
      routebox_t *__next_one__;
      if ( from == 0 )
      {
        return;
      }
      __next_one__ = from;
      from = from;
      while ( __next_one__ = __next_one__->same_net.next, __next_one__->flags.bits_at_0/*.1_1of4*/ &= 227, __next_one__->same_net.next != from )
      {
      }
      return;
    }
  }
  else
{
  routebox_t *__next_one__;
  if ( from == 0 )
  {
    return;
  }
  __next_one__ = from;
  num_targets = 0;
  from = from;
  while ( __next_one__ = __next_one__->same_net.next, ( ( *(char*)(&__next_one__->flags.bits_at_0) & 4 ) & 255 ) || is_layer_group_active[ *(short*)(&__next_one__->group) ] == 0 || ( ( (int)__next_one__->flags.bits_at_0/*.1_1of4*/ & 1 ) & 255 ) )
  {
    if ( from == __next_one__ )
      goto B19;
    else
    {
    }
  }
  __next_one__->flags.bits_at_0/*.1_1of4*/ = (int)__next_one__->flags.bits_at_0/*.1_1of4*/ | 8;
  num_targets++;
}
B19:;
  if ( num_targets == 0 )
  {
    routebox_t *__next_one__;
  }
  else
  {
  {
    routebox_t *__next_one__;
    if ( from )
    {
      __next_one__ = from;
      i = 0;
      from = from;
      while ( 1 )
      {
        __next_one__ = __next_one__->same_net.next;
        if ( ( *(char*)(&__next_one__->flags.bits_at_0) & 8 ) & 255 )
          i++;
        if ( from == __next_one__ )
          break;
        else
        {
        }
      }
      targets = r_create_tree( (BoxType**)calloc( 1, ( num_targets << 2 ) << 2 ), i, 0 );
      free( calloc( 1, ( num_targets << 2 ) << 2 ) );
      source_vec = vector_create( );
    {
      while ( __next_one__ = __next_one__->same_subnet.next, __next_one__->flags.bits_at_0/*.2_2of4*/ |= 1, __next_one__->same_subnet.next != __next_one__ )
      {
      }
      __next_one__ = __next_one__;
    {
      routebox_t *__next_one__;
      /* phantom */ CheapPointType cp;
      edge_t *e;
      /* phantom */ BoxType b;
      while ( 1 )
      {
        __next_one__ = __next_one__->same_subnet.next;
        if ( ( ( *(char*)(__next_one__->box.X1 + 44) & 4 ) & 255 ) && is_layer_group_active[ *(short*)(__next_one__->box.X1 + 36) ] )
        {
          e = CreateEdge( __next_one__, __next_one__->sbox.X1 + ( ( __next_one__->sbox.X2 - __next_one__->sbox.X1 ) / 2 ), __next_one__->sbox.Y1 + ( ( __next_one__->sbox.Y2 - __next_one__->sbox.Y1 ) / 2 ), 0.000000000000, 0, 8, targets );
          e->cost_point.Y = esi;
          __next_one__->cost_point.Y = esi;
          e->cost_point.X = ebp_112;
          __next_one__->cost_point.X = ebp_112;
          if ( AutoRouteParameters.with_conflicts )
          {
            __next_one__->sbox.X1 = &__next_one__->sbox.X1;
            r_search( rd->layergrouptree[0], __next_one__->box.X1 + 16, 0, &__conflict_source, (void*)__next_one__ );
            touch_conflicts( 0, 1 );
          }
          vector_append( &source_vec, &e );
          if ( __next_one__ == __next_one__ )
          {
          }
          else
          {
          }
        }
        else
        if ( __next_one__ != __next_one__ )
          continue;
      {
        while ( __next_one__ = __next_one__->same_subnet.next, __next_one__->flags.bits_at_0/*.2_2of4*/ &= -2, __next_one__->same_subnet.next != __next_one__ )
        {
        }
      }
      }
    }
    }
    }
    else
    {
      targets = r_create_tree( (BoxType**)calloc( 1, ( num_targets << 2 ) << 2 ), 0, 0 );
      free( calloc( 1, ( num_targets << 2 ) << 2 ) );
      source_vec = vector_create( );
    }
    &s.workheap = heap_create( );
    while ( vector_is_empty( &source_vec ) == 0 )
    {
      /* phantom */ edge_t *e;
      edge_cost( vector_remove_last( &source_vec ), -961635390 );
      *(int*)vector_remove_last( &source_vec )/*.20*/ = 0.000000000000;
      heap_insert( &s.workheap, 0.000000000000, vector_remove_last( &source_vec ) );
    }
    seen = 0;
    vector_destroy( &source_vec );
    s.best_path = 0;
    s.best_cost = 30000000000000000949187772416.000000000000;
    area_vec = vector_create( );
    edge_vec = vector_create( );
    &vss.free_space_vec = vector_create( );
    vss.lo_conflict_space_vec = vector_create( );
    vss.hi_conflict_space_vec = vector_create( );
    while ( heap_is_empty( &s.workheap ) == 0 )
    {
      e = (edge_t*)heap_remove_smallest( &s.workheap );
      if ( s.best_path && *(int*)heap_remove_smallest( &s.workheap )/*.20*/ <= s.best_cost )
        heap_free( &s.workheap, &KillEdge );
      else
      {
        if ( seen <= max_edges )
        {
          touch_conflicts( &e[1].mincost_target->box.X1, 1 );
          if ( ( e->flags.bits_at_0/*.1_1of4*/ & 16 ) & 255 )
          {
            do_via_search( e, &s, &vss, (int)( &rd->mtspace ), targets );
            seen++;
          }
          else
          if ( e[1].cost_point.X )
          {
            best_path_candidate( &s, e, e->mincost_target );
            seen++;
          }
          else
          {
            if ( e->flags.(null) == 7 )
            {
              routebox_t *pin;
              if ( FindThermable( targets, e->rb ) )
              {
                BoxType b;
                edge_t *ne;
                routebox_t *nrb;
                b.X1 = *(int*)FindThermable( targets, e->rb )/*.16*/;
                b.Y1 = pin->sbox.Y1;
                b.X2 = pin->sbox.X2;
                b.Y2 = pin->sbox.Y2;
                nrb->flags.is_thermal = 1;
                e->cost_point.X = b.X1;
                e->cost_point.Y = b.Y1;
                esi = T/*.532*/( );
                best_path_candidate( &s, (edge_t*)CreateExpansionArea( &b, e->expand_dir, e->rb, 1, e ), pin );
                KillEdge( (void*)ne );
                seen++;
              }
              else
              if ( AutoRouteParameters.use_vias && e->cost + AutoRouteParameters.ViaCost < s.best_cost )
              {
                routebox_t *nrb = CreateExpansionArea( &e->cost_to_point << 32, e->expand_dir, e->rb, 1, e );
                edge_t *ne;
                e->mincost_target = T/*.532*/( );
                nrb->flags.is_thermal = 1;
              }
            }
            else
            {
              if ( ( (int)e->flags.bits_at_0/*.1_1of4*/ & 1 ) & 255 )
              {
                if ( FindOneInBox( rd->layergrouptree[0], e->rb ) )
                {
                  if ( ( ( *(int*)FindOneInBox( rd->layergrouptree[0], e->rb )/*.44*/ & 8 ) & 255 ) && *(int*)FindOneInBox( rd->layergrouptree[0], e->rb )/*.40*/ == 7 )
                  {
                    edge_t *ne;
                    routebox_t *nrb;
                    BoxType b;
                    // memcpy( ebp_84, &e->cost_to_point << 32, 16 );
                    nrb->flags.is_thermal = 1;
                    intersecting = T/*.532*/( );
                    ne = (edge_t*)CreateExpansionArea( &b, e, e->rb, 1, e );
                    best_path_candidate( &s, (edge_t*)CreateExpansionArea( &b, e, e->rb, 1, e ), intersecting );
                    KillEdge( (void*)ne );
                    seen++;
                  }
                }
                else
                {
                  r_insert_entry( rd->layergrouptree[0], (int)( &e->rb->box ), 1 );
                  e[1].rb = e[1].rb->box.X1/*.1_1of4*/ & 191;
                  vector_append( &area_vec, &e );
                  e[1].cost << 32 = 0;
                }
              }
              if ( ( (int)e->flags.bits_at_0/*.1_1of4*/ & 8 ) & 255 )
              {
                if ( e[2].rb != 1 )
                {
                  if ( !0 )
                  {
                    if ( e[2].rb == 2 )
                    {
                    }
                    else
                    {
                      if ( e[2].rb == 3 )
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
              else
              if ( ( *(char*)(e + 44) & 4 ) & 255 )
              {
              }
              else
              {
              }
              ans = Expand( rd->layergrouptree[0], e, ebp_84 );
              if ( ans->inflated.X1 < ans->orig.X2 && ans->orig.X1 < ans->inflated.X2 && ans->inflated.Y1 < ans->orig.Y2 && ans->orig.Y1 < ans->inflated.Y2 && ans->inflated.X1 < ans->inflated.X2 && ans->inflated.Y1 < ans->inflated.Y2 )
              {
                r_insert_entry( rd->layergrouptree[0], (BoxType*)CreateExpansionArea( &ans->inflated.X1, e->expand_dir, e->rb, 1, e ), 1 );
                vector_append( &area_vec, &nrb );
                nrb->flags.bits_at_0/*.1_1of4*/ &= 191;
                while ( vector_is_empty( &broken ) == 0 )
                {
                  /* phantom */ edge_t *ne;
                  add_or_destroy_edge( &s, vector_remove_last( &broken ) );
                }
                vector_destroy( ebp_40 );
                if ( AutoRouteParameters.use_vias && !( ( e[1].rb->box.X1/*.2_2of4*/ & 4 ) & 255 ) && e->cost + AutoRouteParameters.ViaCost < s.best_cost )
                {
                }
              }
            }
            add_via_sites( &s, &vss, *(int*)(&rd->mtspace), ebp_236, ebp_232, ebp_228, ebp_224, ebp_224, ebp_220 );
            seen++;
          }
        }
        seen++;
      }
      KillEdge( (void*)e );
    }
    touch_conflicts( 0, 1 );
    heap_destroy( &s.workheap );
    r_destroy_tree( &targets );
    vector_destroy( &edge_vec );
    if ( s.best_path )
    {
      if ( AutoRouteParameters.with_conflicts && s.best_path->conflicts_with )
      {
        for ( ; vector_is_empty( &s.best_path->conflicts_with ) == 0;  )
        {
          *(int*)vector_remove_last( &s.best_path->conflicts_with )/*.45*/ |= ' ';
        }
      }
      else
      {
      }
      if ( AutoRouteParameters.hi_conflict <= 0 )
      {
        rd = rd;
        while ( vector_is_empty( &area_vec ) == 0 )
        {
          routebox_t *rb = vector_remove_last( &area_vec );
          if ( rb->conflicts_with && rb->parent.pad->Point2.X2 != rb->conflicts_with )
            vector_destroy( &rb->conflicts_with );
          r_delete_entry( rd->layergrouptree[0], &rb[0].box );
        }
        vector_destroy( &area_vec );
      {
        routebox_t *__next_one__;
        if ( from )
        {
          __next_one__ = from;
          from = from;
          while ( 1 )
          {
            __next_one__ = __next_one__->same_net.next;
            if ( ( ( *(char*)(__next_one__->box.X1 + 44) & 4 ) & 255 ) && __next_one__->conflicts_with )
            {
              vector_destroy( &__next_one__->conflicts_with );
            }
            __next_one__->flags.bits_at_0/*.2_2of4*/ &= -2;
            __next_one__->flags.bits_at_0/*.1_1of4*/ = (int)__next_one__->flags.bits_at_0/*.1_1of4*/ & -29;
            if ( from == __next_one__ )
              break;
            else
            {
              __next_one__ = __next_one__;
            }
          }
        }
        vector_destroy( &vss.free_space_vec );
        vector_destroy( &vss.lo_conflict_space_vec );
        vector_destroy( &vss.hi_conflict_space_vec );
        return;
      }
      }
      else
      {
        routebox_t *intersecting;
        if ( s.best_path->flags.is_thermal )
        {
          if ( ( *(char*)(*(int*)(s.best_path + 32) + 45) & 4 ) & 255 )
          {
            if ( ( *(char*)(s.best_path + 44) & 4 ) & 255 )
            {
            }
            else
            for ( ; s.best_path->parent.pad->net && ( ( *(char*)(s.best_path->parent.pad/*union*/ + 44) & 4 ) & 255 ) == 0;  )
            {
              s.best_path->parent.pad->BoundingBox.X1 = s.best_path->parent.pad->net;
            }
            TargetPoint( ebp_56, &s.best_path->parent.pad->net );
          }
          else
          {
            TargetPoint( ebp_56, s.best_target );
          }
          RD_DrawThermal( ebp_132, edx, ecx, *(short*)(ebx + 36), *(short*)(ebx + 38), ebp_108, ebp_144 );
        }
        else
        {
          TargetPoint( ( ( s.best_target->sbox.X2 - s.best_target->sbox.X1 ) / 2 ) + *(int*)(s.best_target + 16), s.best_target );
          intersecting = &s.best_path->parent.pad->Flags.t[0];
          intersecting = ( ( s.best_target->sbox.Y2 - s.best_target->sbox.Y1 ) / 2 ) + *(int*)(s.best_target + 20);
          if ( AutoRouteParameters.last_smooth )
          {
            RD_DrawLine( rd, ( ( s.best_target->sbox.X2 - s.best_target->sbox.X1 ) / 2 ) + s.best_target->sbox.X1, intersecting, ( ( s.best_target->sbox.X2 - s.best_target->sbox.X1 ) / 2 ) + *(int*)(s.best_target + 16) < s.best_path->parent.pad->Flags.t[0] ? s.best_path->parent.pad->Flags.t[0] + -1 : ( ( s.best_target->sbox.X2 - s.best_target->sbox.X1 ) / 2 ) + s.best_target->sbox.X1, s.best_target->sbox.Y1 + ( ( s.best_target->sbox.Y2 - s.best_target->sbox.Y1 ) / 2 ) < s.best_path->parent.pad->Flags.f ? s.best_path->parent.pad->Flags.f : intersecting < s.best_path->parent.pad->Flags.t[4] ? s.best_path->parent.pad->Flags.t[4] + -1 : intersecting, ( AutoRouteParameters.style->Thick + 1 ) / 2, s.best_path->parent.expansion_area, from, calloc( 1, ( num_targets << 2 ) << 2 ), 1 );
          }
          else
          {
          }
        }
        while ( 1 )
        {
          intersecting = *(int*)(*(int*)(ebp_128 + 32) + 28);
          if ( esi <= ebp_48 )
          {
            if ( ( ( *(char*)(s->best_path + 44) & 4 ) & 255 ) && s.best_path->type != 7 )
              TargetPoint( ebp_56, &__next_one__->sbox.X1 );
            if ( AutoRouteParameters.last_smooth )
            {
              RD_DrawLine( ebp_132, ebp_48, ebp_44, ebp_56, ebp_52, ebp_160, *(short*)(edi + 36), ebp_108, ebp_144, 1 );
              if ( ( ( *(char*)(__next_one__->sbox.X1 + 45) & 4 ) & 255 ) == 0 )
              {
                if ( __next_one__->sbox.X1 == 0 )
                {
                  if ( s.best_path->type == 7 )
                  {
                    RD_DrawThermal( ebp_132, ebp_48, ebp_44, *(short*)(edi + 36), *(short*)(edi + 38), ebp_108, ebp_144 );
                    if ( *(int*)(edi + 40) == 6 )
                    {
                      if ( ( ( *(char*)(*(int*)(edi + 32) + 44) & 4 ) & 255 ) && *(int*)(eax + 40) != 7 && ( eax & 255 ) )
                      {
                        if ( AutoRouteParameters.last_smooth )
                          RD_DrawLine( ebp_132, edx, ecx, ebp_56, ebp_52, ebp_160, *(short*)(edi + 36), ebp_108, ebp_144, 1 );
                        else
                        {
                        }
                        if ( ( ( *(char*)(s.best_path + 44) & 4 ) & 255 ) == 0 )
                          continue;
                        else
                        {
                          RD_DrawLine( rd, -1, 0, 0, 0, 0, 0, 0, 0, 0 );
                          if ( ( PCB->Flags.f/*.3_3of4*/ & 1 ) & 255 )
                            gui->use_mask( 6 );
                          MergeNets( from, s.best_target, SUBNET );
                          rd = rd;
                        }
                      }
                    }
                  }
                  else
                  {
                    if ( *(int*)(ebp_180 + 40) == 6 )
                    {
                    }
                  }
                }
              }
            }
            else
            {
              if ( ( ( *(char*)(edi + 45) & 4 ) & 255 ) == 0 )
                continue;
            }
            AutoRouteParameters.ViaCost << 32 = AutoRouteParameters.style->Keepaway;
            if ( PCB->Data->LayerN > 0 )
            {
              intersecting = 0;
              do
              {
                if ( is_layer_group_active[ 0 + 1 ] )
                {
                  mymemset( calloc( 1, 124 ), 0, 124 );
                  *ebp_248 = AutoRouteParameters.style->Keepaway - ( ( AutoRouteParameters.style->Diameter + 1 ) / 2 ) - AutoRouteParameters.style->Keepaway;
                  *(int*)(*ebp_248 + 4) = PCB - ( ( AutoRouteParameters.style->Diameter + 1 ) / 2 ) - AutoRouteParameters.style->Keepaway;
                  *(int*)(*ebp_248 + 16) = AutoRouteParameters.style->Keepaway - ( ( AutoRouteParameters.style->Diameter + 1 ) / 2 );
                  *(int*)(*ebp_248 + 20) = PCB - ( ( AutoRouteParameters.style->Diameter + 1 ) / 2 );
                  *(short*)(*ebp_248 + 36) = 0 + 1;
                  *(int*)(*ebp_248 + 8) = AutoRouteParameters.style->Keepaway + AutoRouteParameters.style->Keepaway + ( ( AutoRouteParameters.style->Diameter + 1 ) / 2 ) + 1;
                  *(int*)(*ebp_248 + 28) = PCB + ( ( AutoRouteParameters.style->Diameter + 1 ) / 2 ) + 1;
                  *(int*)(*ebp_248 + 24) = AutoRouteParameters.style->Keepaway + ( ( AutoRouteParameters.style->Diameter + 1 ) / 2 ) + 1;
                  *(int*)(*ebp_248 + 12) = AutoRouteParameters.style->Keepaway + PCB + ( ( AutoRouteParameters.style->Diameter + 1 ) / 2 ) + 1;
                  *(int*)(*ebp_248 + 88) = 8;
                  *(char*)(*ebp_248 + 45) = (unsigned char)( ( AutoRouteParameters.style->Keepaway & 1 ) << 5 ) | (unsigned char)( ( *(char*)(*ebp_248 + 45) | 64 ) & -33 );
                  *(char*)(*ebp_248 + 44) = ( *(char*)(*ebp_248 + 44) & 125 ) | ( AutoRouteParameters.is_odd << 7 ) | 32;
                  *(int*)(*ebp_248 + 76) = AutoRouteParameters.style;
                  *(char*)(*ebp_248 + 84) = AutoRouteParameters.pass;
                  if ( intersecting == 0 )
                  {
                    *(int*)(*ebp_248 + 32) = 0;
                    *(int*)(*ebp_248 + 40) = 2;
                    mtspace_add( (int)( &rd->mtspace ), *ebp_248, ~( 0 - ( ( ( ( ( *(char*)(*ebp_248 + 44) & 125 ) | ( AutoRouteParameters.is_odd << 7 ) | 32 ) & 128 ) < ( 1 & 255 ) ) & 1 ) ) + 2, (int)( (BDimension)(AutoRouteParameters.ViaCost << 32) ) );
                    intersecting = *ebp_248;
                  }
                  else
                  {
                    *(int*)(*ebp_248 + 40) = 3;
                    *(int*)(*ebp_248 + 32) = intersecting;
                  }
                  InitLists( *ebp_248 );
                  MergeNets( *ebp_248, from, NET );
                  MergeNets( *ebp_248, from, SUBNET );
                  r_insert_entry( rd->layergrouptree[0], *ebp_248, 1 );
                  *(char*)(*ebp_248 + 44) &= 191;
                  if ( ( PCB->Flags.f/*.3_3of4*/ & 1 ) & 255 )
                  {
                    gui->set_color( ar_gc, PCB->ViaColor, AutoRouteParameters.style->Keepaway, PCB );
                    gui->fill_circle( ar_gc, AutoRouteParameters.style->Keepaway, PCB, ( AutoRouteParameters.style->Diameter + 1 ) / 2 );
                  }
                }
                if ( *(int*)(*(int*)(PCB + 8716) + 24) <= s.best_path + 36 + 1 )
                {
                  if ( *(int*)(ebp_180 + 48) )
                  {
                  }
                  else
                  {
                  }
                }
              }
              while ( PCB->Data->LayerN <= *ebp_248 + 36 + 1 );
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
      rd = rd;
    }
  }
  }
}
}
void InitAutoRouteParameters( int pass, RouteStyleType *style, Boolean with_conflicts, Boolean is_smoothing, Boolean lastpass )
{
  double fp6;
  double fp7;
  int i;
  AutoRouteParameters.style = style;
  AutoRouteParameters.bloat = style->Keepaway + ( ( style + 1 ) / 2 );
  if ( is_smoothing == 0 )
  {
    AutoRouteParameters.ViaCost = (double)( ( style->Diameter * 30 ) + 0x55730 );
    AutoRouteParameters.LastConflictPenalty = (double)( ( ( ( pass * 400 ) / 12 ) + 2 ) / ( pass + 1 ) );
    AutoRouteParameters.ConflictPenalty = (double)( ( ( ( pass * 400 ) / 12 ) + 2 ) / ( pass + 1 ) ) * 4.000000000000;
  }
  else
  {
    AutoRouteParameters.ViaCost = (double)( ( style->Diameter * 80 ) + 0x55730 );
    AutoRouteParameters.LastConflictPenalty = (double)( ( ( ( pass * 400 ) / 12 ) + 2 ) / ( pass + 1 ) );
    AutoRouteParameters.ConflictPenalty = (double)( ( ( ( pass * 400 ) / 12 ) + 2 ) / ( pass + 1 ) ) * 4.000000000000;
  }
  AutoRouteParameters.JogPenalty = 20000.000000000000;
  AutoRouteParameters.CongestionPenalty = 1000000.000000000000;
  AutoRouteParameters.MinPenalty = 30000000000000000949187772416.000000000000;
  if ( PCB->Data->LayerN > 0 )
  {
    i = 0;
    do
    {
      i++;
    }
    while ( PCB->Data->LayerN != i + 1 );
    AutoRouteParameters.MinPenalty = 30000000000000000949187772416.000000000000 < (double)( x_cost[ i ] ) ? 30000000000000000949187772416.000000000000 : (double)( x_cost[ i ] ) < (double)( y_cost[ i ] ) ? 30000000000000000949187772416.000000000000 < (double)( x_cost[ i ] ) ? 30000000000000000949187772416.000000000000 : (double)( x_cost[ i ] ) : (double)( y_cost[ i ] );
  }
  else
  {
  }
  AutoRouteParameters.hi_conflict = ( ( 13 - pass ) << 3 ) > 5 ? 6 : ( 13 - pass ) << 3;
  pass++;
  AutoRouteParameters.is_odd = pass & 1;
  AutoRouteParameters.pass = pass + 1;
  AutoRouteParameters.NewLayerPenalty = 0.000000000000;
  AutoRouteParameters.with_conflicts = with_conflicts;
  AutoRouteParameters.is_smoothing = is_smoothing;
  AutoRouteParameters.rip_always = is_smoothing;
  AutoRouteParameters.last_smooth = 0;
  return;
}
// Lost vars at line 4706 through condition folding
struct routeall_status RouteAll( routedata_t *rd )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  double fp7;
  int ebp_108;
  int ebp_96;
  int ebp_84;
  int ebp_80;
  int ebp_76;
  /* phantom */ struct routeall_status ras;
  struct routeone_status ros;
  Boolean rip;
  heap_t *net_heap;
  heap_t *this_pass = heap_create( ), *next_pass = heap_create( ), *tmp;
  routebox_t *net, *p, *pp;
  cost_t total_net_cost;
  /* phantom */ cost_t last_cost;
  /* phantom */ cost_t this_cost;
  int i;
  net_heap = heap_create( );
{
  routebox_t *__next_one__ = (routebox_t*)rd->first_net;
  if ( rd->first_net )
  {
    while ( 1 )
    {
      i = __next_one__->different_net.next;
      ebp_80 = __next_one__->sbox.Y2;
      ebp_76 = __next_one__->sbox.X2;
      rip = __next_one__->sbox.Y1;
      while ( __next_one__ = __next_one__->same_net.next, __next_one__->same_net.next != __next_one__ )
      {
        routebox_t *__next_one__;
        rip = __next_one__->sbox.Y1;
        ebp_76 = __next_one__->sbox.X2;
        ebp_80 = __next_one__->sbox.Y2;
      }
      heap_insert( &this_pass, (double)( ( __next_one__->sbox.X2 < ebp_76 ? __next_one__->sbox.X2 : ebp_76 ) - ( __next_one__->sbox.X1 < __next_one__->sbox.X1 ? __next_one__->sbox.X1 : __next_one__->sbox.X1 ) ) * (double)( ( __next_one__->sbox.X2 < ebp_76 ? __next_one__->sbox.X2 : ebp_76 ) - ( __next_one__->sbox.X1 < __next_one__->sbox.X1 ? __next_one__->sbox.X1 : __next_one__->sbox.X1 ) ), (void*)__next_one__ );
      if ( rd->first_net == i )
        goto B6;
      else
      {
        __next_one__ = &i;
      }
    }
  }
B6:;
  i = 0;
  ebp_84 = 0;
  do
  {
    if ( heap_is_empty( &next_pass ) == 0 )
    {
      do
      {
        net = (routebox_t*)heap_remove_smallest( &this_pass );
        InitAutoRouteParameters( i, *(int*)(RouteStyleType*)heap_remove_smallest( &this_pass )/*.76*/, i <= 11, net, net );
        if ( i )
        {
          if ( AutoRouteParameters.rip_always == 0 )
          {
            __next_one__ = net->same_net.next;
          }
          rip = 1;
          __next_one__ = net;
          while ( 1 )
          {
            __next_one__->flags.bits_at_0/*.2_2of4*/ &= -33;
            __next_one__ = __next_one__->same_net.next;
            if ( ( ( *(char*)(__next_one__->box.X1 + 44) & 2 ) & 255 ) == 0 )
            {
              if ( rip )
              {
                RemoveFromNet( &__next_one__->box.X1, NET );
                RemoveFromNet( &__next_one__->box.X1, SUBNET );
              }
              if ( AutoRouteParameters.use_vias && net->type != VIA_SHADOW && __next_one__->type != 7 )
              {
                mtspace_remove( (mtspace_t*)rd->mtspace, &__next_one__[0].box, ~( 0 - ( ( ( (int)__next_one__->flags.bits_at_0/*.1_1of4*/ & 128 ) < ( 1 & 255 ) ) & 1 ) ) + 2, __next_one__->style->Keepaway );
                if ( rip == 0 )
                  mtspace_add( (mtspace_t*)rd->mtspace, &__next_one__[0].box, ( 0 - ( ( ( (int)__next_one__->flags.bits_at_0/*.1_1of4*/ & 128 ) < ( 1 & 255 ) ) & 1 ) ) + 2, __next_one__->style->Keepaway );
                else
                {
                  if ( ( ( PCB->Flags.f/*.3_3of4*/ & 1 ) & 255 ) && ( __next_one__->type == 2 || __next_one__->type == 4 ) )
                  {
                    gui->set_line_width( ar_gc, __next_one__->box.Y2 - __next_one__->box.Y1, ( __next_one__->box.Y2 + __next_one__->box.Y1 ) / 2, __next_one__->box.Y2 );
                    gui->set_color( ar_gc, Settings.BackgroundColor );
                    gui->draw_line( ar_gc, ebp_104, ebp_120, ebp_88 );
                  }
                  r_delete_entry( rd->layergrouptree[0], *(short*)(__next_one__->box.X1 + 36) );
                  if ( net == __next_one__ )
                  {
                    if ( ( PCB->Flags.f/*.3_3of4*/ & 1 ) & 255 )
                      gui->use_mask( 6 );
                    if ( rip )
                    {
                      net = __next_one__;
                      while ( net = net->same_net.next, net->same_subnet.next = net->original_subnet.next, net->same_subnet.prev = net->original_subnet.prev, net->same_net.next != __next_one__ )
                      {
                      }
                      ebp_108++;
                    }
                    else
                    {
                      heap_insert( &next_pass, 0.000000000000, (void*)__next_one__ );
                      if ( heap_is_empty( &this_pass ) == 0 )
                      {
                        do
                        {
                          net = (routebox_t*)heap_remove_smallest( &this_pass );
                          InitAutoRouteParameters( i, *(int*)(RouteStyleType*)heap_remove_smallest( &this_pass )/*.76*/, i <= 11, net, net );
                        }
                        while ( heap_is_empty( &this_pass ) == 0 );
                      }
                      else
                      {
                        tmp = this_pass;
                        ro = 0;
                        this_pass = next_pass = this_pass;
                        if ( ebp_76 || ebp_96 != ebp_80 )
                        {
                          i++;
                          if ( i == 14 )
                          {
                            Message( "%d of %d nets successfully routed.\n", ebp_80, ebp_96 );
                            heap_destroy( &this_pass );
                            heap_destroy( &next_pass );
                            heap_destroy( &net_heap );
                            return ebp_96;
                            result.routed_subnets = ebp_80;
                            result.conflict_subnets = ebp_76;
                            result.failed = 0;
                            result.ripped = ebp_108;
                            result.total_nets_routed = ebp_84;
                          }
                        }
                        else
                        if ( i == 13 )
                        {
                          Message( "%d of %d nets successfully routed.\n", ebp_80, ebp_96 );
                          heap_destroy( &this_pass );
                          heap_destroy( &next_pass );
                          heap_destroy( &net_heap );
                          return ebp_96;
                          result.routed_subnets = ebp_80;
                          result.conflict_subnets = ebp_76;
                          result.failed = 0;
                          result.ripped = ebp_108;
                          result.total_nets_routed = ebp_84;
                        }
                        i = 13;
                        Message( "%d of %d nets successfully routed.\n", ebp_80, ebp_96 );
                        heap_destroy( &this_pass );
                        heap_destroy( &next_pass );
                        heap_destroy( &net_heap );
                        return ebp_96;
                        result.routed_subnets = ebp_80;
                        result.conflict_subnets = ebp_76;
                        result.failed = 0;
                        result.ripped = ebp_108;
                        result.total_nets_routed = ebp_84;
                      }
                    }
                  }
                  else
                  {
                  }
                }
              }
              else
              if ( rip )
              {
              }
              __next_one__->flags.bits_at_0/*.1_1of4*/ = ( *(char*)(__next_one__->box.X1 + 44) & 127 ) | ( AutoRouteParameters.is_odd << 7 );
            }
            if ( net == __next_one__ )
            {
            }
            else
            {
            }
          }
        }
      {
        do
        {
          routebox_t *__next_one__ = __next_one__->same_net.next;
        }
        while ( __next_one__->same_net.next != net );
        __next_one__ = __next_one__;
      {
        while ( __next_one__ = __next_one__->same_net.next, ( *(char*)(&__next_one__->flags.bits_at_0) & 2 ) & 255 )
        {
          if ( __next_one__->box.X1 == __next_one__ )
          {
            while ( __next_one__ = __next_one__->same_net.next, __next_one__->flags.bits_at_0/*.2_2of4*/ &= -3, __next_one__->same_net.next != __next_one__ )
            {
              routebox_t *__next_one__;
            }
            ebp_96 += -1;
            if ( ebp_96 != 1 )
            {
            {
              /* phantom */ BoxType b;
              while ( 1 )
              {
                heap_insert( &net_heap, 0.000000000000 * ( (double)( __next_one__->sbox.X2 - __next_one__->sbox.X1 ) * (double)( __next_one__->sbox.X2 - __next_one__->sbox.X1 ) ) * ( (double)( ( ebp_96 + 1 ) - __next_one__->box.X1 ) * (double)( ( ebp_96 + 1 ) - __next_one__->box.X1 ) ), (void*)__next_one__ );
                if ( __next_one__ == __next_one__ )
                {
                  rip = 0.000000000000;
                  __next_one__ = __next_one__;
                {
                  do
                  {
                    routebox_t *__next_one__;
                    heap_is_empty( &net_heap );
                    while ( heap_is_empty( &net_heap ) == 0 )
                    {
                      p = (routebox_t*)heap_remove_smallest( &net_heap );
                      if ( ( p & 514 ) != 2 || p->type == OTHER || ( 0 & 255 ) )
                        continue;
                      else
                      {
                        do
                        {
                          0 = RouteOne( rd, p, __next_one__ );
                          rip += ros.best_route_cost;
                          if ( ros.found_route )
                          {
                            if ( ros.route_had_conflicts == 0 )
                            {
                              ebp_80++;
                              ebp_84++;
                              if ( ros.net_completely_routed & 255 )
                                goto B116;
                            }
                            else
                            {
                              ebp_76++;
                            }
B116:;
                            heap_is_empty( &net_heap );
                            break;
                            while ( heap_is_empty( &net_heap ) == 0 )
                            {
                              p = (routebox_t*)heap_remove_smallest( &net_heap );
                            }
                          }
                          else
                          {
                            while ( __next_one__ = __next_one__->same_subnet.next, __next_one__->flags.bits_at_0/*.2_2of4*/ |= 2, __next_one__->same_subnet.next != p )
                            {
                              routebox_t *__next_one__;
                            }
                          }
                        }
                        while ( ( ros.net_completely_routed & 255 ) == 0 );
B116:;
                        heap_is_empty( &net_heap );
                      }
                    }
                    if ( ( ros.net_completely_routed & 255 ) == 0 )
                      __next_one__->flags.bits_at_0/*.2_2of4*/ |= ' ';
                    heap_insert( &next_pass, rip, (void*)__next_one__ );
                  }
                  while ( p == __next_one__->same_subnet.next );
                }
                }
                else
                {
                }
              }
            }
            }
            else
              heap_insert( &next_pass, 0.000000000000, (void*)__next_one__ );
            while ( __next_one__->flags.bits_at_0/*.2_2of4*/ &= -3, __next_one__->same_net.next != __next_one__ )
            {
            }
          }
          else
          {
          }
        }
        while ( __next_one__ = __next_one__->same_subnet.next, __next_one__->flags.bits_at_0/*.2_2of4*/ |= 2, __next_one__->same_subnet.next != __next_one__ )
        {
          routebox_t *__next_one__;
        }
      }
      }
      }
      while ( heap_is_empty( &this_pass ) == 0 );
    }
    tmp = this_pass;
    ro = 0;
    this_pass = next_pass = this_pass;
  }
  while ( i != 14 );
  Message( "%d of %d nets successfully routed.\n", ebp_80, ebp_96 );
  heap_destroy( &this_pass );
  heap_destroy( &next_pass );
  heap_destroy( &net_heap );
  return ebp_96;
  result.routed_subnets = ebp_80;
  result.conflict_subnets = ebp_76;
  result.failed = 0;
  result.ripped = ebp_108;
  result.total_nets_routed = ebp_84;
}
}
int fpin_rect( BoxType *b, void *cl )
{
  /* phantom */ PinTypePtr pin;
  /* phantom */ struct fpin_info *info;
  if ( b[3].Y1 == ((int*)cl) && b[3].X2 == cl[2] )
  {
    *(int*)(cl) = b;
    __longjmp_chk( cl + 12, 1 );
  }
  return 0;
}
int FindPin( BoxType *box, PinTypePtr *pin )
{
  struct fpin_info info;
  info.pin = 0;
  info.X = box;
  info.Y = box->Y1;
  if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
  {
    r_search( &PCB->Data->pin_tree, box, 0, &fpin_rect, (void*)info.pin );
    if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
    {
      r_search( &PCB->Data->via_tree, box, 0, &fpin_rect, (void*)info.pin );
      pin = 0;
      return 0;
    }
    pin[0]->(null) = info;
    return 1;
  }
  else
  {
    pin[0]->(null) = info;
    return 256;
  }
}
Boolean IronDownAllUnfixedPaths( routedata_t *rd )
{
  int eax;
  int edx;
  Boolean changed;
  LayerTypePtr layer;
  /* phantom */ routebox_t *net, *p;
  int i;
{
  routebox_t *__next_one__;
  changed = 0;
  __next_one__ = (routebox_t*)rd->first_net;
  if ( rd->first_net )
  {
    while ( 1 )
    {
    {
      while ( 1 )
      {
        routebox_t *__next_one__ = &__next_one__->same_net.next;
        if ( ( ( *(char*)(__next_one__ + 44) & 2 ) & 255 ) == 0 )
        {
          layer = 0;
          if ( PCB->LayerGroups.Number[ *(short*)(__next_one__ + 36) ] && PCB->Data->Layer->On == 0 )
          {
            do
            {
              i++;
            }
            while ( i + 1 < PCB->LayerGroups.Number[ *(short*)(__next_one__ + 36) ] && *(char*)(esi + ( edx * 92 ) + 144) == 0 );
          }
          if ( __next_one__->type == 4 )
          {
            /* phantom */ BDimension halfwidth;
            double th;
            /* phantom */ BoxType b;
            total_wire_length += sqrt( ( ( (double)( *(int*)(__next_one__ + 24) - *(int*)(__next_one__ + 16) ) - (double)( ( ( ( *(int*)(*(int*)(__next_one__ + 76)) + 1 ) / 2 ) * 2 ) + 1 ) ) * ( (double)( *(int*)(__next_one__ + 24) - *(int*)(__next_one__ + 16) ) - (double)( ( ( ( *(int*)(*(int*)(__next_one__ + 76)) + 1 ) / 2 ) * 2 ) + 1 ) ) ) * 0.000000000000 );
            __next_one__->parent.pad/*union*/ = eax;
            if ( __next_one__ + 32 )
            {
              AddObjectToCreateUndoList( 4, (void*)layer, __next_one__ + 32, __next_one__ + 32 );
              changed = 1;
            }
          }
          else
          {
            if ( __next_one__->type + -2 <= 1 )
            {
              routebox_t *pp = __next_one__;
              /* phantom */ BDimension radius;
              /* phantom */ BoxType b;
              if ( __next_one__->type == 3 )
              {
              }
              total_via_count++;
              if ( pp->parent.pad/*union*/ == 0 )
              {
                pp->parent.pad/*union*/ = CreateNewVia( &PCB->Data, __next_one__->sbox.X1 + ( ( pp->style->Diameter + 1 ) / 2 ), __next_one__->sbox.Y1 + ( ( pp->style->Diameter + 1 ) / 2 ), pp->style->Diameter, pp->style->Keepaway * 2, 0, pp->style->Hole, 0, "badarg" );
                if ( &pp->parent.pad == 0 )
                {
                }
                else
                {
                  AddObjectToCreateUndoList( 1, &pp->parent.pad, &pp->parent.pad, &pp->parent.pad );
                  changed = 1;
                }
              }
              if ( __next_one__->type == 3 )
              {
                __next_one__->type = 2;
                __next_one__->parent.pad/*union*/ = pp->parent.pad/*union*/;
                if ( __next_one__ == __next_one__ )
                {
                  __next_one__ = __next_one__;
                  while ( 1 )
                  {
                    __next_one__ = __next_one__->same_net.next;
                    if ( __next_one__->type == 8 )
                    {
                      PinTypePtr pin = 0;
                      int type = FindPin( &__next_one__->box.X1, (PinTypePtr*)pin );
                      if ( pin )
                      {
                        AddObjectToClearPolyUndoList( type, *(int*)(pin + 68) == 0 ? &pin->Element : (void*)pin, (void*)pin, (void*)pin, 0 );
                        RestoreToPolygon( &PCB->Data, 1, &PCB->Data->Layer[ __next_one__->layer ].Name, (void*)pin );
                        AddObjectToFlagUndoList( type, pin->Element == 0 ? &pin->Element : (void*)pin, (void*)pin, (void*)pin );
                        *(char*)(pin + ( __next_one__->layer >> 1 ) + 24) = ( ~( 15 << ( ( __next_one__->layer & 1 ) << 2 ) ) & *(char*)(pin + ( __next_one__->layer >> 1 ) + 24) ) | ( PCB->ThermStyle << ( ( __next_one__->layer & 1 ) << 2 ) );
                        AddObjectToClearPolyUndoList( type, pin->Element == 0 ? &pin->Element : (void*)pin, (void*)pin, (void*)pin, __next_one__->layer >> 1 );
                        ClearFromPolygon( &PCB->Data, 1, &PCB->Data->Layer[ __next_one__->layer ].Name, (void*)pin );
                        changed = 1;
                        if ( __next_one__->box.X1 == __next_one__ )
                          esi = __next_one__;
                          if ( ebp_88 != *(int*)(ebp_96 + 64) )
                          {
                            __next_one__ = &__next_one__->different_net.next;
                            break;
                            while ( 1 )
                            {
                            {
                              while ( 1 )
                              {
                                routebox_t *__next_one__ = &__next_one__->same_net.next;
                              }
                            }
                            }
                          }
                        else
                        {
                          __next_one__ = &__next_one__->box.X1;
                        }
                      }
                    }
                  {
                    routebox_t *__next_one__;
                    if ( __next_one__ == __next_one__ )
                    {
                    }
                    else
                    {
                      __next_one__ = &__next_one__->box.X1;
                    }
                  }
                  }
                }
                else
                {
                }
              }
            }
          }
        }
        if ( __next_one__ == __next_one__ )
        {
          __next_one__ = __next_one__;
          while ( 1 )
          {
            __next_one__ = __next_one__->same_net.next;
          }
        }
        else
        {
        }
      }
    }
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return changed;
}
}
// Lost vars at line 5212 through condition folding
Boolean AutoRoute( Boolean selected )
{
  int eax;
  int ah;
  int ecx;
  int ch;
  int edx;
  int ebp_456;
  int ebp_452;
  int ebp_444;
  int ebp_440;
  int ebp_428;
  int ebp_420;
  int ebp_416;
  int ebp_412;
  int ebp_408;
  int ebp_400;
  int ebp_396;
  Boolean changed;
  routedata_t *rd;
  /* phantom */ int i;
  total_wire_length = 0.0;
  total_via_count = 0;
  if ( ( PCB->Flags.f/*.3_3of4*/ & 1 ) & 255 )
    gui->use_mask( 4 );
  if ( ar_gc == 0 )
  {
    gui->make_gc( );
    ar_gc = gui;
    gui->set_line_cap( gui, 2, ebp_400 );
  }
  do
  {
    if ( PCB->RouteStyle[1].Thick == 0 || PCB->RouteStyle[1].Diameter == 0 || PCB->RouteStyle[1].Hole == 0 || PCB->RouteStyle->Keepaway == 0 )
    {
      *(int*)&changed = 0;
      Message( "You must define proper routing styles\nbefore auto-routing.\n" );
    }
    else
    a = 0;
    if ( 0 ^ 0 )
    {
      __stack_chk_fail( );
    }
    break;
  }
  while ( PCB->MaskColor != PCB + 24 + 24 );
  *(int*)&changed = 0;
  if ( PCB->Data->RatN )
  {
    SaveFindFlag( 4096 );
    routing_layers = 0;
    if ( PCB->Data->LayerN > 0 )
    {
      ebp_400 = 0;
      do
      {
        if ( PCB->Font.Valid )
        {
          ebp_396 = 0 * 18;
          while ( PCB->Data->LayerN <= *(int*)(PCB + ( 0 * 4 ) + ( ebp_396 * 4 ) + 7444) || PCB->Data->Layer->On == 0 )
          {
            is_layer_group_active[ 0 ] = 0;
            if ( *(int*)(PCB + ( 0 << 2 ) + 7380) <= 0 + 1 + 1 )
            {
            }
            else
            {
            }
          }
          is_layer_group_active[ 0 + 1 ] = 1;
          ebp_400++;
        }
      }
      while ( PCB->Data->LayerN <= 0 + 1 + 1 );
      routing_layers = ebp_400;
      if ( ebp_400 > 1 && PCB->ViaOn )
        goto B33;
B33:;
      *(int*)&AutoRouteParameters.use_vias = 1;
      front = GetLayerGroupNumberByNumber( PCB->Data->LayerN + 1 );
      back = GetLayerGroupNumberByNumber( PCB->Data->LayerN );
      if ( PCB->Data->LayerN > 0 )
      {
        do
        {
          if ( 0 + 1 != back )
          {
            if ( front )
            {
              if ( ( 0 & 1 ) & 255 )
                x_cost[ 0 ] = 2;
              else
                x_cost[ 0 + 1 ] = 1;
              y_cost[ 0 + 1 ] = 1;
            }
            else
            {
              x_cost[ front ] = 2;
              y_cost[ front ] = 2;
            }
          }
          else
          {
            x_cost[ back ] = 4;
            y_cost[ back ] = 2;
          }
        }
        while ( PCB->Data->LayerN <= 0 + 1 + 1 );
      }
      mymemset( calloc( 1, 124 ), 0, calloc( 1, 124 ) );
      *(int*)calloc( 1, 124 )/*.68*/ = Settings.LineThickness;
      *(int*)calloc( 1, 124 )/*.72*/ = Settings.ViaThickness;
      *(int*)calloc( 1, 124 )/*.76*/ = Settings.ViaDrillingHole;
      *(int*)calloc( 1, 124 )/*.80*/ = Settings.Keepaway;
      *(int*)calloc( 1, 124 )/*.116*/ = Settings.Keepaway;
      *(int*)calloc( 1, 124 )/*.112*/ = Settings.Keepaway + ( ( Settings.LineThickness + 1 ) / 2 );
      *(int*)calloc( 1, 124 )/*.92*/ = PCB->RouteStyle->Thick;
      *(int*)calloc( 1, 124 )/*.96*/ = PCB->RouteStyle[1].Thick;
      *(int*)calloc( 1, 124 )/*.100*/ = PCB->RouteStyle[2].Thick;
      *(int*)calloc( 1, 124 )/*.104*/ = PCB->RouteStyle[3].Thick;
      *(int*)calloc( 1, 124 )/*.108*/ = calloc( 1, 124 ) + 68;
      ebp_400 = PCB;
      if ( PCB->Data->LayerN > 0 )
      {
        ebp_408 = ebp_360;
        ebp_396 = 0;
        do
        {
          *(int*)(ebp_408 + -8) = 0;
          *(int*)(ebp_408 + -4) = 0;
          *ebp_408 = 0;
          if ( PCB->Data->pcb->LayerGroups.Number[0] )
          {
            do
            {
              if ( *(int*)(*(int*)(*(int*)(ebp_400 + 8716) + 72) + ( ( 0 + 1 ) * 4 ) + ( ebp_396 * 18 * 4 ) + 7444) < PCB->Data->LayerN )
              {
                if ( PCB->Data->Layer->LineN || front )
                {
                  usedGroup[ ebp_396 ] = 1;
                  if ( *(int*)(*(int*)(*(int*)(ebp_400 + 8716) + 72) + ( ebp_396 << 2 ) + 7380) <= 0 + 1 + 1 )
                    goto B52;
                }
                else
                  usedGroup[ ebp_396 ] = 0;
              }
            }
            while ( *(int*)(*(int*)(*(int*)(ebp_400 + 8716) + 72) + ( ebp_396 << 2 ) + 7380) <= 0 + 1 + 1 );
          }
B52:;
          ebp_396++;
          ebp_408 += 12;
        }
        while ( *(int*)(*(int*)(ebp_400 + 8716) + 24) <= ebp_396 );
      }
      usedGroup[ front ] = 1;
      usedGroup[ back ] = 1;
      ResetFoundPinsViasAndPads( 0 );
      ResetFoundLinesAndPolygons( 0 );
      esi = CollectSubnets( 0 );
      // memcpy( ebp_132, *(int*)(0), 12 );
      ebp_452 = ebp_132 + -1;
      if ( ebp_132 + -1 != -1 )
      {
        ebp_456 = ( ebp_132 * 12 ) + -12;
        while ( ebp_444 = *(int*)(ebp_456 + ebp_124) + -1, ebp_444 == -1 )
        {
          ebp_452 += -1;
          ebp_456 += -12;
          if ( ebp_452 == -1 )
            goto B65;
          else
          {
          }
        }
        ebp_440 = ( *(int*)(ebp_456 + ebp_124) + 0xfffffff ) << 4;
        ebp_420 = 0;
        while ( 1 )
        {
          ebp_400 = 0;
          ebp_412 = *(int*)(ebp_440 + *(int*)(ebp_456 + ebp_124 + 8)) + -1;
          if ( *(int*)(ebp_440 + *(int*)(ebp_456 + ebp_124 + 8)) + -1 == -1 )
          {
          }
          else
          {
            ebp_416 = eax + 20;
            while ( 1 )
            {
              ebp_408 = ( ebp_412 * 28 ) + *(int*)(ebp_440 + *(int*)(ebp_456 + ebp_124 + 8) + 8);
              ebp_396 = *(int*)(*(int*)(ebp_440 + *(int*)(ebp_456 + ebp_124 + 8) + 8) + ( ebp_412 * 28 ));
              if ( *(int*)(*(int*)(ebp_440 + *(int*)(ebp_456 + ebp_124 + 8) + 8) + ( ebp_412 * 28 )) == 4 )
              {
                ebp_412 += -1;
                if ( *(int*)(*(int*)(*(int*)(ebp_440 + *(int*)(ebp_456 + ebp_124 + 8) + 8) + ( ebp_412 * 28 )) + 44) != *(int*)(*(int*)(*(int*)(ebp_440 + *(int*)(ebp_456 + ebp_124 + 8) + 8) + ( ebp_412 * 28 )) + 64) && *(int*)(*(int*)(*(int*)(ebp_440 + *(int*)(ebp_456 + ebp_124 + 8) + 8) + ( ebp_412 * 28 )) + 48) != *(int*)(*(int*)(*(int*)(ebp_440 + *(int*)(ebp_456 + ebp_124 + 8) + 8) + ( ebp_412 * 28 )) + 68) )
                {
                  // memcpy( ebp_116, ebp_396, 88 );
                  if ( ( ( ( ( *(int*)(eax + 64) - *(int*)(eax + 44) ) >> 31 ) ^ ( *(int*)(eax + 64) - *(int*)(eax + 44) ) ) - ( ( *(int*)(eax + 64) - *(int*)(eax + 44) ) >> 31 ) < ( ( ( *(int*)(eax + 68) - *(int*)(eax + 48) ) >> 31 ) ^ ( *(int*)(eax + 68) - *(int*)(eax + 48) ) ) - ( ( *(int*)(eax + 68) - *(int*)(eax + 48) ) >> 31 ) ? ( ( ( *(int*)(eax + 64) - *(int*)(eax + 44) ) >> 31 ) ^ ( *(int*)(eax + 64) - *(int*)(eax + 44) ) ) - ( ( *(int*)(eax + 64) - *(int*)(eax + 44) ) >> 31 ) : ( ( ( *(int*)(eax + 68) - *(int*)(eax + 48) ) >> 31 ) ^ ( *(int*)(eax + 68) - *(int*)(eax + 48) ) ) - ( ( *(int*)(eax + 68) - *(int*)(eax + 48) ) >> 31 ) ) / ( ( ( ( ( *(int*)(*(int*)(ebp_404 + ( ebp_416 << 2 ) + 12)) + 1 ) / 2 ) + *(int*)(*(int*)(ebp_404 + ( ebp_416 << 2 ) + 12) + 12) ) << 2 ) + 1 ) > 0 && ( eax <= 32 ? 32 : eax ) != 1 )
                  {
                    while ( ebp_424 + ebp_72 != *(int*)(ebp_396 + 64) || edx != *(int*)(ecx + 68) )
                    {
                      if ( ebp_400 != eax && ebp_400 )
                      {
                        MergeNets( ebp_400, &eax, ORIGINAL );
                        if ( esi == ebx )
                        {
                          if ( ebp_432 <= edi + 1 )
                          {
                          }
                          else
                          {
                          }
                        }
                      }
                      else
                      if ( esi == ebx )
                        continue;
                      if ( ebp_400 )
                        MergeNets( &esi, &ebx, NET );
                    }
                  }
                }
                else
                {
                }
              }
              else
              {
                if ( *(int*)(*(int*)(ebp_440 + *(int*)(ebp_456 + ebp_124 + 8) + 8) + ( ebp_412 * 28 )) != 8 )
                {
                  if ( eax < 8 )
                  {
                    if ( *(int*)(*(int*)(ebp_440 + *(int*)(ebp_456 + ebp_124 + 8) + 8) + ( ebp_412 * 28 )) == 256 )
                    {
                    }
                    else
                    {
                      if ( *(int*)(*(int*)(ebp_440 + *(int*)(ebp_456 + ebp_124 + 8) + 8) + ( ebp_412 * 28 )) == 512 )
                      {
                      }
                      else
                      {
                      }
                    }
                  }
                  else
                  if ( *(int*)(*(int*)(ebp_440 + *(int*)(ebp_456 + ebp_124 + 8) + 8) + ( ebp_412 * 28 )) != 1 )
                  {
                  }
                  else
                  {
                  }
                }
                else
                {
                }
              }
              if ( ebp_400 && ebp_400 )
              {
                MergeNets( ebp_400, 0, ORIGINAL );
                if ( ebp_420 == *(int*)(*(int*)(ebp_440 + *(int*)(ebp_456 + ebp_124 + 8) + 8) + ( ebp_412 * 28 )) )
                {
                  *(int*)(ebp_404 + 112) = ( ( *(int*)(*(int*)(esi + 76)) + 1 ) / 2 ) + *(int*)(*(int*)(esi + 76) + 12) < *(int*)(ebp_404 + 112) ? ( ( *(int*)(*(int*)(esi + 76)) + 1 ) / 2 ) + *(int*)(*(int*)(esi + 76) + 12) : *(int*)(ebp_404 + 112);
                  ebp_412 += -1;
                  *(int*)(ebp_404 + 116) = (unsigned char)( ( *(int*)(ebp_404 + 116) < *(int*)(*(int*)(esi + 76) + 12) ) ^ 1 ) ? *(int*)(*(int*)(esi + 76) + 12) : *(int*)(ebp_404 + 116);
                  if ( ebp_412 == -1 )
                    goto B88;
                  else
                  {
                  }
                }
              }
              else
              if ( ebp_420 == esi )
                continue;
              if ( ebp_420 )
                MergeNets( ebp_420, 0, NET );
            }
          }
B88:;
          ebp_444 += -1;
          ebp_440 += -16;
          if ( ebp_444 == -1 )
          {
            if ( ( ebx & 255 ) && 0 )
              MergeNets( ebp_468, &esi, DIFFERENT_NET );
          }
          else
          {
          }
        }
      }
B65:;
      *(int*)(ebp_404 + 64) = esi;
      FreeNetListListMemory( ebp_132 );
      if ( *(int*)(ebp_404 + 64) )
      {
        while ( 1 )
        {
          do
          {
          }
          while ( esi != *(int*)(eax + 92) );
          if ( edi == *(int*)(ebp_404 + 64) )
            goto B135;
          else
          {
          }
        }
      }
B135:;
      ebp_396 = PCB->Data->ElementN + -1;
      if ( PCB->Data->ElementN + -1 != -1 )
      {
        ebp_400 = ( PCB->Data->ElementN * 300 ) + -300;
        while ( *(int*)(ebp_400 + *(int*)(PCB->Data + 32) + 224) == 0 )
        {
          ebp_396 += -1;
          ebp_400 += -300;
          if ( ebp_396 == -1 )
          {
            ebp_400 = PCB->Data->ElementN + -1;
            if ( PCB->Data->ElementN + -1 != -1 )
            {
              ebp_408 = ( PCB->Data->ElementN * 300 ) + -300;
              while ( 1 )
              {
                n = *(int*)(ebp_408 + *(int*)(PCB->Data + 32) + 232);
                while ( 1 )
                {
                  do
                  {
                    if ( changed == 0 || changed <= 0 )
                    {
                      ebp_400 += -1;
                      ebp_408 += -300;
                      if ( ebp_400 != -1 )
                      {
                        break;
                        while ( 1 )
                        {
                          n = *(int*)(ebp_408 + *(int*)(PCB->Data + 32) + 232);
                          while ( 1 )
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
                      if ( ( ( ah & 239 & 239 & 16 ) & 255 ) == 0 )
                      {
                        AddPad( ebp_368, &ebx, &ecx, *(int*)(ebp_404 + 108) );
                        if ( n != *(int*)(ebx + 232) )
                          continue;
                      }
                      else
                      {
                        *(int*)(i + -92 + changed + 20) = *(int*)(i + -92 + *(int*)(changed + 260) + 20);
                      }
                    }
                  }
                  while ( changed != n );
                }
              }
            }
          }
          else
          {
          }
        }
        while ( 1 )
        {
          if ( ( ch & 239 & 239 & 16 ) & 255 )
          {
            *(int*)(edx + 20) = ecx;
            if ( PCB->Font.Symbol->Width == 0 )
            {
              ebp_396 += -1;
              ebp_400 += -300;
            }
          }
          else
          {
            AddPin( ebp_368, &edx, 0, *(int*)(ebp_404 + 108) );
            if ( *(int*)(edi + 224) == 0 )
              continue;
          }
          if ( eax <= ( ebx + eax + 1 ) - esi )
            continue;
          else
          {
          }
        }
      }
      if ( PCB->Data->ViaN )
      {
        while ( 1 )
        {
          if ( ( ah & 16 ) & 255 )
            *(int*)(edx + 20) = eax;
          else
          {
            AddPin( ebp_368, &edx, 1, *(int*)(ebp_404 + 108) );
          }
          if ( PCB->Data->ViaN == 0 || PCB->Font.Symbol->Width <= ( PCB->Font.Symbol->Width + ( ( *(int*)(ebp_400 + *(int*)(PCB->Data + 32) + 224) + 0 + 1 ) - *(int*)(ebp_400 + *(int*)(PCB->Data + 32) + 224) ) + 1 ) - *(int*)(ebp_400 + *(int*)(PCB->Data + 32) + 224) )
            goto B154;
          else
          {
          }
        }
      }
B154:;
      if ( PCB->Data->LayerN > 0 )
      {
        ebp_428 = 0;
        do
        {
          ebp_416 = PCB->Data->Layer[ *ebp_524 ].LineN + -1;
          if ( PCB->Data->Layer[ *ebp_524 ].LineN + -1 != -1 )
          {
            ebp_420 = ( PCB->Data->Layer[ *ebp_524 ].LineN * 88 ) + -88;
            while ( 1 )
            {
              PCB->Data = *(int*)(ebp_420 + *(int*)(( *ebp_524 * 92 ) + PCB->Data + 112) + 20);
              if ( ( ah & 16 ) & 255 )
                *(int*)(ebx + 20) = eax;
              else
              if ( *(int*)(ebp_420 + PCB->Data->ViaN + 44) != *(int*)(ebp_420 + PCB->Data->ViaN + 64) && *(int*)(ebp_420 + PCB->Data->ViaN + 48) != *(int*)(ebp_420 + PCB->Data->ViaN + 68) )
              {
                // memcpy( ebp_116, ebp_420 + PCB->Data->ViaN, 88 );
                if ( ( ( ( ( *(int*)(ebx + 64) - *(int*)(ebx + 44) ) >> 31 ) ^ ( *(int*)(ebx + 64) - *(int*)(ebx + 44) ) ) - ( ( *(int*)(ebx + 64) - *(int*)(ebx + 44) ) >> 31 ) < ( ( ( *(int*)(ebx + 68) - *(int*)(ebx + 48) ) >> 31 ) ^ ( *(int*)(ebx + 68) - *(int*)(ebx + 48) ) ) - ( ( *(int*)(ebx + 68) - *(int*)(ebx + 48) ) >> 31 ) ? ( ( ( *(int*)(ebx + 64) - *(int*)(ebx + 44) ) >> 31 ) ^ ( *(int*)(ebx + 64) - *(int*)(ebx + 44) ) ) - ( ( *(int*)(ebx + 64) - *(int*)(ebx + 44) ) >> 31 ) : ( ( ( *(int*)(ebx + 68) - *(int*)(ebx + 48) ) >> 31 ) ^ ( *(int*)(ebx + 68) - *(int*)(ebx + 48) ) ) - ( ( *(int*)(ebx + 68) - *(int*)(ebx + 48) ) >> 31 ) ) / ( ( *(int*)(ebp_404 + 112) << 2 ) + 1 ) > 0 && ( eax <= 32 ? 32 : eax ) != 1 )
                {
                  do
                  {
                    if ( ebp_400 + ebp_72 != *(int*)(ebx + 64) || edx != *(int*)(ebx + 68) )
                    {
                      AddLine( ebp_368, ebp_396, ebp_116, &ebx, *(int*)(edi + 108) );
                    }
                    else
                    {
                      AddLine( ebp_368, ebp_396, ebp_116, &ebx, *(int*)(ebp_404 + 108) );
                    }
                  }
                  while ( ebp_412 <= 0 + 1 );
                }
              }
              else
              {
                AddLine( ebp_368, ebp_396, &ebx, &ebx, *(int*)(ebp_404 + 108) );
              }
              ebp_416 += -1;
              ebp_420 += -88;
              if ( ebp_416 == -1 )
              {
              }
              else
              {
              }
            }
          }
          if ( PCB->Data->Layer->PolygonN + -1 != -1 )
          {
            while ( 1 )
            {
              PCB->Data = *(int*)(ebx + *(int*)(edi + eax + 120) + 20);
              if ( ( ah & 16 ) & 255 )
              {
                *(int*)(ecx + 20) = eax;
                if ( esi + -1 != -1 )
                  continue;
              }
              else
              {
                AddPolygon( ebp_368, ebp_428, &ecx, *(int*)(ebp_404 + 108) );
                if ( esi != -1 )
                  continue;
              }
            }
          }
          if ( PCB->Data->Layer->TextN + -1 != -1 )
          {
            while ( 1 )
            {
              AddIrregularObstacle( ebp_368, *(int*)(ebx + *(int*)(ebp_400 + eax + 116)), *(int*)(ebx + *(int*)(ebp_400 + eax + 116) + 4), *(int*)(ebx + *(int*)(ebp_400 + eax + 116) + 8), *(int*)(ebx + *(int*)(ebp_400 + eax + 116) + 12), ebp_396, ebx + *(int*)(ebp_400 + eax + 116), *(int*)(edi + 108) );
              if ( PCB->Data->Layer->TextN + -1 + -1 == -1 )
              {
              }
              else
              {
              }
            }
          }
          ebp_400 = ebp_428 * 92;
          if ( PCB->Data->Layer->ArcN + -1 != -1 )
          {
            while ( 1 )
            {
              AddIrregularObstacle( ebp_368, *(int*)(ebx + *(int*)(ebp_400 + eax + 124)), *(int*)(ebx + *(int*)(ebp_400 + eax + 124) + 4), *(int*)(ebx + *(int*)(ebp_400 + eax + 124) + 8), *(int*)(ebx + *(int*)(ebp_400 + eax + 124) + 12), ebp_396, ebx + *(int*)(ebp_400 + eax + 124), *(int*)(edi + 108) );
              if ( PCB->Data->Layer->ArcN + -1 + -1 == -1 )
              {
              }
              else
              {
              }
            }
          }
          ebp_428++;
        }
        while ( PCB->Data->LayerN <= ebp_428 );
        if ( PCB->Data->LayerN > 0 )
        {
          do
          {
          }
          while ( PCB->Data->LayerN <= 0 + 1 + 1 );
        }
      }
      if ( AutoRouteParameters.use_vias == 0 )
      {
      }
      else
      {
        *(int*)(ebp_404 + 120) = mtspace_create( );
        if ( PCB->Data->LayerN > 0 )
        {
          ebp_396 = 0;
          do
          {
            if ( *ebp_368 + -1 != -1 )
            {
              do
              {
                if ( ( ( *(char*)(*(int*)(( *(int*)(ebp_368 + 12) << 2 ) + -4 + *(int*)(ebp_368 + 8)) + 45) & 16 ) & 255 ) == 0 )
                {
                  mtspace_add( *(int*)(ebp_404 + 120), &eax, 0, *(int*)(*(int*)(eax + 76) + 12) );
                  if ( *(int*)(ebp_368 + 12) + -1 + -1 == -1 )
                    break;
                }
                else
              }
              while ( *(int*)(ebp_368 + 12) + -1 + -1 + -1 != -1 );
            }
            ebp_396++;
          }
          while ( PCB->Data->LayerN <= ebp_396 );
        }
        else
        {
          Cardinal n;
          /* phantom */ RatTypePtr line;
          rd = ebp_404;
          n = PCB->Data->RatN + -1;
          if ( PCB->Data->RatN + -1 != -1 )
          {
            i = 0;
            do
            {
              n += -1;
            }
            while ( n + -1 != -1 );
            if ( i )
            {
              if ( i == 1 )
              {
                Cardinal n;
                RatTypePtr line = &edi;
                if ( selected )
                {
                  n = n;
                  for ( ; ( ( (unsigned char)( *(int*)(edi + 20) ) & 64 ) & 255 ) == 0;  )
                  {
                    n += -1;
                    if ( n + -1 == -1 )
                      goto B228;
                    else
                    {
                      line = &edi;
                    }
                  }
                }
              {
                routebox_t *a = FindRouteBoxOnLayerGroup( rd, line->Point1.X, line->Point1.Y, line->group1 );
                routebox_t *b = FindRouteBoxOnLayerGroup( rd, line->Point2.X, line->Point2.Y, line->group2 );
                InitAutoRouteParameters( 0, a->style, 0, 1, 1 );
                b = RouteOne( rd, a, (int)( &(routebox_t*)(rd->layergrouptree[0]->root) ) );
                changed = ebp_152 != 0;
                if ( changed & 255 )
                {
                  changed = IronDownAllUnfixedPaths( rd );
                  Message( "Total added wire length = %f inches, %d vias added\n", total_wire_length / 100000.000000000000, total_via_count );
                  DestroyRouteData( &rd );
                  if ( ( PCB->Flags.f/*.3_3of4*/ & 1 ) & 255 )
                    gui->use_mask( 5 );
                  if ( changed & 255 )
                  {
                    SaveUndoSerialNumber( );
                    DeleteRats( 0 );
                    RestoreUndoSerialNumber( );
                    AddAllRats( 0, 0 );
                    RestoreUndoSerialNumber( );
                    IncrementUndoSerialNumber( );
                    ClearAndRedrawOutput( );
                  }
                  RestoreFindFlag( );
                }
              }
              }
            {
B228:;
              routebox_t *__next_one__ = (routebox_t*)rd->first_net;
              if ( rd->first_net )
              {
                last = 0;
                do
                {
                  ebp_396 = __next_one__->different_net.next;
                {
                  do
                  {
                    routebox_t *__next_one__ = __next_one__->same_net.next;
                  }
                  while ( __next_one__->same_net.next != __next_one__ );
                  __next_one__ = __next_one__;
                {
                  while ( __next_one__ = __next_one__->same_net.next, ( *(char*)(&__next_one__->flags.bits_at_0) & 2 ) & 255 )
                  {
                    if ( __next_one__ == __next_one__ )
                    {
                      while ( __next_one__ = __next_one__->same_net.next, __next_one__->flags.bits_at_0/*.2_2of4*/ &= -3, __next_one__->same_net.next != __next_one__ )
                      {
                        routebox_t *__next_one__;
                      }
                      while ( __next_one__ = __next_one__->same_net.next, __next_one__->same_net.next = __next_one__->same_subnet.next, __next_one__->same_net.prev = __next_one__->same_subnet.prev, __next_one__->same_net.next != __next_one__ )
                      {
                        routebox_t *__next_one__;
                      }
                      if ( ebp_396 != rd->first_net )
                      {
                        do
                        {
                          ebp_396 = __next_one__->different_net.next;
                        {
                          do
                          {
                            routebox_t *__next_one__ = __next_one__->same_net.next;
                          }
                          while ( __next_one__->same_net.next != __next_one__ );
                        }
                        }
                        while ( ebp_396 == rd->first_net );
                        if ( last )
                        {
                          last->different_net.next = ebp_396;
                          rd->first_net->different_net.prev = &last->box.X1;
                        }
                      {
                        Cardinal n;
                        RatTypePtr line;
                        if ( n == -1 )
                        {
                          routebox_t *__next_one__ = (routebox_t*)rd->first_net;
                          if ( rd->first_net )
                          {
                            while ( 1 )
                            {
                              __next_one__ = __next_one__->different_net.next;
                              if ( ( ( *(char*)(rd->first_net + 45) & 1 ) & 255 ) == 0 )
                              {
                                __next_one__ = (routebox_t*)rd->first_net;
                                while ( __next_one__ = __next_one__->same_net.next, __next_one__->flags.bits_at_0/*.2_2of4*/ |= 1, __next_one__->same_net.next != __next_one__ )
                                {
                                  routebox_t *__next_one__;
                                }
                              }
                              else
                              {
                                RemoveFromNet( &eax, DIFFERENT_NET );
                              }
                              if ( rd->first_net == __next_one__ )
                              {
                                routebox_t *__next_one__;
                                if ( __next_one__ )
                                {
                                  while ( 1 )
                                  {
                                    __next_one__ = __next_one__->different_net.next;
                                  {
                                    do
                                    {
                                      routebox_t *__next_one__ = __next_one__->same_net.next;
                                      __next_one__->flags.bits_at_0/*.2_2of4*/ &= -2;
                                    }
                                    while ( __next_one__->same_net.next != __next_one__ );
                                    if ( __next_one__ == rd->first_net )
                                      goto B293;
                                    else
                                    {
                                    }
                                  }
                                  }
                                }
                              }
                              else
                              {
                              }
                            }
                          }
B293:;
                          ebp = RouteAll( rd );
                          changed = RouteAll( rd ) > 0;
                        }
                      }
                      }
                    }
                    else
                    {
                    }
                  }
                  while ( __next_one__ = __next_one__->same_subnet.next, __next_one__->flags.bits_at_0/*.2_2of4*/ |= 2, __next_one__->same_subnet.next != __next_one__ )
                  {
                    routebox_t *__next_one__;
                  }
                  if ( last )
                  {
                    last->different_net.next = __next_one__;
                    __next_one__->different_net.prev = last;
                  }
                  last = __next_one__;
                }
                }
                }
                while ( ebp_396 == rd->first_net );
              }
              n = n;
              while ( 1 )
              {
                line = i + -92 + PCB->Data->Rat;
                if ( selected && ( ( line->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 )
                  goto B258;
                else
                {
                  a = FindRouteBoxOnLayerGroup( rd, line->Point1.X, line->Point1.Y, line->group1 );
                  if ( b == 0 || a == 0 )
                    Message( "The rats nest is stale! Aborting autoroute...\n" );
                  else
                    MergeNets( a, FindRouteBoxOnLayerGroup( rd, line->Point2.X, line->Point2.Y, line->group2 ), NET );
                }
B258:;
                n += -1;
                if ( n == -1 )
                  break;
                else
                {
                }
              }
            {
              routebox_t *__next_one__ = (routebox_t*)rd->first_net;
            }
            }
            }
          }
          *(int*)&changed = 0;
        }
      }
      if ( PCB->Data->LayerN > 0 )
      {
        do
        {
          FreePointerListMemory( ebp_368 + 12 );
        }
        while ( 0 + 1 < PCB->Data->LayerN );
      }
    }
B33:;
    *(int*)&AutoRouteParameters.use_vias = 1;
    front = GetLayerGroupNumberByNumber( PCB->Data->LayerN + 1 );
    back = GetLayerGroupNumberByNumber( PCB->Data->LayerN );
  }
}
#if 0
#endif
