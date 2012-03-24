#include "autoplace.c.h"
struct {
   float via_cost;
   float congestion_penalty;
   float overlap_penalty_min;
   float overlap_penalty_max;
   float out_of_bounds_penalty;
   float overall_area_penalty;
   float matching_neighbor_bonus;
   float aligned_neighbor_bonus;
   float oriented_neighbor_bonus;
   float m;
   float gamma;
   int good_ratio;
   Boolean fast;
   int large_grid_size;
   int small_grid_size;
} CostParameter = { 3000.000000000000, 0.019999999553, 0.009999999776, 100.000000000000, 1000.000000000000, 1.000000000000, 1.000000000000, 1.000000000000, 1.000000000000, 20.000000000000, 0.750000000000, 40, 0, 1677721600, 167772160 };
int __r_find_neighbor_reg_in_sea( BoxType *region, void *cl )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  /* phantom */ struct r_neighbor_info *ni;
  /* phantom */ BoxType query;
{
  /* phantom */ LocationType t;
  switch ( ((int*)cl) )
  {
  default:
    break;
  case 1:
    break;
  case 3:
    break;
  case 2:
    break;
  }
  return region->Y2 <= ((struct r_neighbor_info*)cl)->trap.Y1 || ((struct r_neighbor_info*)cl)->trap.Y2 <= region->Y1 || region->X2 + ((struct r_neighbor_info*)cl)->trap.Y2 <= ((struct r_neighbor_info*)cl)->trap.X1 + region->Y1 ? 0 : ebp_20 + edi < edx + *(int*)(&eax->bits_at_12);
}
}
int __r_find_neighbor_rect_in_reg( BoxType *box, void *cl )
{
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  /* phantom */ struct r_neighbor_info *ni;
  /* phantom */ BoxType query;
  int r;
{
  /* phantom */ LocationType t;
  switch ( ((int*)cl) )
  {
  default:
    break;
  case 1:
    box->X1 = 0 - box->X1;
    break;
  case 3:
    break;
  case 2:
    break;
  }
  if ( ((struct r_neighbor_info*)cl)->trap.Y1 < box->Y2 && box->Y1 < ((struct r_neighbor_info*)cl)->trap.Y2 && ((struct r_neighbor_info*)cl)->trap.X1 + box->Y1 < box->X2 + ((struct r_neighbor_info*)cl)->trap.Y2 && box->X1 + box->Y1 < ((struct r_neighbor_info*)cl)->trap.X2 + ((struct r_neighbor_info*)cl)->trap.Y2 && box->Y2 <= ((struct r_neighbor_info*)cl)->trap.Y2 )
  {
    cl = (void*)box;
    r = 1;
    ((struct r_neighbor_info*)cl)->trap.Y1 = 0 - box->X1;
  }
  return 1;
}
}
double ComputeCost( NetListTypePtr Nets, double T0, double T )
{
  int eax;
  int ecx;
  int edx;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  int ebp_208;
  int ebp_200;
  int ebp_180;
  double W;
  double delta1;
  double delta2;
  double delta3;
  double delta4;
  double delta5;
  Cardinal i;
  Cardinal j;
  LocationType minx;
  LocationType maxx;
  LocationType miny;
  LocationType maxy;
  Boolean allpads;
  Boolean allsameside;
  Cardinal thegroup;
  static BoxListType bounds;
  BoxListType solderside;
  BoxListType componentside;
  bounds.BoxN = 0;
  bounds.BoxMax = 0;
  solderside.BoxN = 0;
  solderside.BoxMax = 0;
  componentside.BoxN = 0;
  componentside.BoxMax = 0;
  bounds.Box = 0;
  solderside.Box = 0;
  componentside.Box = 0;
  *(int*)&allpads = 0;
  if ( *ebp_180 )
  {
    Nets = ebp_180;
    maxx = GetLayerGroupNumberByNumber( PCB->Data->LayerN );
    do
    {
      if ( Nets->Net->ConnectionN == 0 )
        goto B7;
      else
      {
        allsameside = allpads << 4;
        do
        {
          if ( *(int*)(0 + 28 + *(int*)(Nets->Net + allsameside + 8) + 8) != 256 )
          {
            if ( ecx == 512 )
            {
              *(int*)(0 + 28 + Nets->Net->Connection + 20) = *(char*)(*(int*)(0 + 28 + Nets->Net->Connection + 12) + 20) < 0 ? (delta4 & 0xFFFFFFFF) : maxx;
              *(int*)(0 + 28 + Nets->Net->Connection) = *(int*)(*(int*)(0 + 28 + Nets->Net->Connection + 16) + 44);
              *(int*)(0 + 28 + Nets->Net->Connection + 4) = *(int*)(*(int*)(0 + 28 + Nets->Net->Connection + 16) + 48);
            }
            else
            {
              Message( "Odd connection type encountered in UpdateXY" );
              Nets = Nets;
            }
          }
          else
          {
            *(int*)(0 + 28 + Nets->Net->Connection + 20) = maxx;
            *(int*)(0 + 28 + Nets->Net->Connection) = *(int*)(*(int*)(0 + 28 + Nets->Net->Connection + 16) + 52);
            *(int*)(0 + 28 + Nets->Net->Connection + 4) = *(int*)(*(int*)(0 + 28 + Nets->Net->Connection + 16) + 56);
          }
        }
        while ( *(int*)(Nets->Net + allsameside) <= 0 + 1 + 1 );
      }
B7:;
      allpads++;
    }
    while ( Nets->NetN <= allpads );
    if ( Nets->NetN )
    {
      i = 0;
      W = 0.000000000000;
    {
      do
      {
        NetTypePtr n = *(int*)(ebp_180 + 8) + ( i << 4 );
        if ( n->ConnectionN > 1 )
        {
          j = 1;
          allsameside = 1;
          ebp_200 = 1;
          thegroup = n->Connection->type;
          maxx = n->Connection->type;
          allpads = n->Connection->type == 512;
          miny = n->Connection->type;
          maxy = n->Connection->type;
        {
          do
          {
            /* phantom */ ConnectionTypePtr c;
            minx = *(int*)(n->Connection + 28) < minx ? minx : n->Connection[1].X;
            maxx = (unsigned char)( ( maxx < *(int*)(n->Connection + 28) ) ^ 1 ) ? n->Connection[1].X : maxx;
            miny = *(int*)(n->Connection + 32) < miny ? miny : n->Connection[1].Y;
            maxy = maxy < *(int*)(n->Connection + 32) ? maxy : n->Connection[1].Y;
            allpads = *(int*)(n->Connection + 36) == 512 ? 0 : allpads;
            n->Connection->X = n->Connection + 28;
            allsameside = thegroup == *(int*)(n->Connection + 28 + 48) ? 0 : allsameside;
            ebp_200++;
          }
          while ( ebp_200 != (delta4 & 0xFFFFFFFF) );
        {
          BoxTypePtr box = &minx;
          box->Y1 = miny;
          box->X2 = maxx;
          *(int*)GetBoxMemory( &bounds )/*.12*/ = maxy;
          W += ( allsameside || allpads == 0 ? 0.000000000000 : 3000.000000000000 ) + (double)( ( ( maxy - miny ) / 100 ) + ( ( maxx - minx ) / 100 ) );
        }
        }
        }
        i++;
      }
      while ( i < *ebp_180 );
      FreeBoxListMemory( &bounds );
      if ( PCB->Data->ElementN + -1 != -1 )
      {
        delta3 = 0.000000000000;
        ebp_208 = ( PCB->Data->ElementN * 300 ) + -300;
        while ( 1 )
        {
          element = ebp_208 + PCB->Data->Element;
          i = ( *(int*)(ebp_208 + *(int*)(PCB->Data + 32) + 20) & 128 ) != 0 ? solderside.BoxN : componentside.BoxN;
          GetBoxMemory( ( element->Flags.f & 128 ) != 0 ? &componentside : &solderside );
          if ( element->PinN || element->PadN )
          {
            *(int*)(GetBoxMemory( ( element->Flags.f & 128 ) != 0 ? &componentside : &solderside )) = 0x989680;
            *(int*)GetBoxMemory( ( element->Flags.f & 128 ) != 0 ? &componentside : &solderside )/*.4*/ = 0x989680;
            *(int*)GetBoxMemory( ( element->Flags.f & 128 ) != 0 ? &componentside : &solderside )/*.8*/ = 0xff676980;
            box->Y2 = -10000000;
          {
            Cardinal n;
            Cardinal sn;
            PinTypePtr pin;
            if ( element->PinN )
            {
              n = 0;
              maxx = 0x989680;
              *(int*)&allsameside = 0x989680;
              *(int*)&allpads = 0xff676980;
              while ( box = maxx <= *(int*)(element->Pin + ( n * 76 ) + 52) - ( ( *(int*)(element->Pin + ( n * 76 ) + 36) / 2 ) + ( *(int*)(element->Pin + ( n * 76 ) + 40) * 2 ) ) ? *(int*)(element->Pin + ( n * 76 ) + 52) - ( ( element->Pin->Thickness / 2 ) + ( element->Pin->Clearance * 2 ) ) : &maxx, maxx = maxx <= *(int*)(element->Pin + ( n * 76 ) + 52) - ( ( *(int*)(element->Pin + ( n * 76 ) + 36) / 2 ) + ( *(int*)(element->Pin + ( n * 76 ) + 40) * 2 ) ) ? *(int*)(element->Pin + ( n * 76 ) + 52) - ( ( element->Pin->Thickness / 2 ) + ( element->Pin->Clearance * 2 ) ) : maxx, box->Y1 = allsameside < *(int*)(element->Pin + ( n * 76 ) + 56) - ( ( *(int*)(element->Pin + ( n * 76 ) + 36) / 2 ) + ( *(int*)(element->Pin + ( n * 76 ) + 40) * 2 ) ) ? *(int*)(element->Pin + ( n * 76 ) + 56) - ( ( element->Pin->Thickness / 2 ) + ( element->Pin->Clearance * 2 ) ) : allsameside, allsameside = allsameside < *(int*)(element->Pin + ( n * 76 ) + 56) - ( ( *(int*)(element->Pin + ( n * 76 ) + 36) / 2 ) + ( *(int*)(element->Pin + ( n * 76 ) + 40) * 2 ) ) ? *(int*)(element->Pin + ( n * 76 ) + 56) - ( ( element->Pin->Thickness / 2 ) + ( element->Pin->Clearance * 2 ) ) : allsameside, box->X2 = ( *(int*)(element->Pin + ( n * 76 ) + 36) / 2 ) + ( *(int*)(element->Pin + ( n * 76 ) + 40) * 2 ) + *(int*)(element->Pin + ( n * 76 ) + 52) < allpads ? ( element->Pin->Thickness / 2 ) + ( element->Pin->Clearance * 2 ) + *(int*)(element->Pin + ( n * 76 ) + 52) : allpads, allpads = ( *(int*)(element->Pin + ( n * 76 ) + 36) / 2 ) + ( *(int*)(element->Pin + ( n * 76 ) + 40) * 2 ) + *(int*)(element->Pin + ( n * 76 ) + 52) < allpads ? ( element->Pin->Thickness / 2 ) + ( element->Pin->Clearance * 2 ) + *(int*)(element->Pin + ( n * 76 ) + 52) : allpads, box->Y2 = (unsigned char)( ( ( *(int*)(element->Pin + ( n * 76 ) + 36) / 2 ) + ( *(int*)(element->Pin + ( n * 76 ) + 40) * 2 ) + *(int*)(element->Pin + ( n * 76 ) + 56) < ( (unsigned char)( ( ( *(int*)(element->Pin + ( n * 76 ) + 36) / 2 ) + ( *(int*)(element->Pin + ( n * 76 ) + 40) * 2 ) + *(int*)(element->Pin + ( n * 76 ) + 56) < 0xff676980 ) ^ 1 ) ? 0xff676980 : ( element->Pin->Thickness / 2 ) + ( element->Pin->Clearance * 2 ) + *(int*)(element->Pin + ( n * 76 ) + 56) ) ) ^ 1 ) ? (unsigned char)( ( ( *(int*)(element->Pin + ( n * 76 ) + 36) / 2 ) + ( *(int*)(element->Pin + ( n * 76 ) + 40) * 2 ) + *(int*)(element->Pin + ( n * 76 ) + 56) < 0xff676980 ) ^ 1 ) ? -10000000 : ( element->Pin->Thickness / 2 ) + ( element->Pin->Clearance * 2 ) + *(int*)(element->Pin + ( n * 76 ) + 56) : ( element->Pin->Thickness / 2 ) + ( element->Pin->Clearance * 2 ) + *(int*)(element->Pin + ( n * 76 ) + 56), sn = *(int*)(ebp_180 + 224), *(int*)(ebp_180 + 224) && ( sn + n + 1 ) - (unsigned int)(delta4 & 0xFFFFFFFF) < sn )
              {
              }
              element = ebp_180;
            }
          {
            Cardinal n;
            Cardinal sn;
            PadTypePtr pad;
            *(int*)&allsameside = 0;
            maxx = 0;
            allpads = element->PadN;
            while ( 1 )
            {
              sn = allpads;
              do
              {
                if ( sn && maxx < sn )
                {
                  box = box->X1 < ( element->Pad->Point1.X <= element->Pad->Point2.X ? element->Pad->Point2.X : element->Pad->Point1.X ) - ( ( element->Pad->Thickness / 2 ) + ( element->Pad->Clearance * 2 ) ) ? ( element->Pad->Point1.X <= element->Pad->Point2.X ? element->Pad->Point2.X : element->Pad->Point1.X ) - ( ( element->Pad->Thickness / 2 ) + ( element->Pad->Clearance * 2 ) ) : &box->X1;
                  box->Y1 = box->Y1 < ( element->Pad->Point1.X <= element->Pad->Point2.X ? element->Pad->Point2.X : element->Pad->Point1.X ) - ( ( element->Pad->Thickness / 2 ) + ( element->Pad->Clearance * 2 ) ) ? ( element->Pad->Point1.X <= element->Pad->Point2.X ? element->Pad->Point2.X : element->Pad->Point1.X ) - ( ( element->Pad->Thickness / 2 ) + ( element->Pad->Clearance * 2 ) ) : box->Y1;
                  box->X2 = (unsigned char)( ( ( element->Pad->Thickness / 2 ) + ( element->Pad->Clearance * 2 ) + ( (unsigned char)( ( element->Pad->Point1.X < element->Pad->Point2.X ) ^ 1 ) ? element->Pad->Point2.X : element->Pad->Point1.X ) < box->X2 ) ^ 1 ) ? box->X2 : ( element->Pad->Thickness / 2 ) + ( element->Pad->Clearance * 2 ) + ( (unsigned char)( ( element->Pad->Point1.X < element->Pad->Point2.X ) ^ 1 ) ? element->Pad->Point2.X : element->Pad->Point1.X );
                  box->Y2 = ( element->Pad->Thickness / 2 ) + ( element->Pad->Clearance * 2 ) + ( (unsigned char)( ( element->Pad->Point1.X < element->Pad->Point2.X ) ^ 1 ) ? element->Pad->Point2.X : element->Pad->Point1.X ) < box->Y2 ? ( element->Pad->Thickness / 2 ) + ( element->Pad->Clearance * 2 ) + ( (unsigned char)( ( element->Pad->Point1.X < element->Pad->Point2.X ) ^ 1 ) ? element->Pad->Point2.X : element->Pad->Point1.X ) : box->Y2;
                  sn = element->PadN;
                }
                else
                {
                  Cardinal n;
                  Cardinal sn;
                  PinTypePtr pin;
                  if ( element->PinN )
                  {
                    n = 0;
                    maxx = 0;
                    allpads = element;
                    while ( 1 )
                    {
                      thegroup = pin->Clearance;
                      box = pin->X - ( pin->Thickness / 2 );
                      box->Y1 = pin->Y - ( pin->Thickness / 2 );
                      box->X2 = pin->X + ( pin->Thickness / 2 );
                      allsameside = *(int*)(pin->BoundingBox.X1 + 52) + ( pin->Thickness / 2 );
                      box->Y2 = ( pin->Thickness / 2 ) + *(int*)(pin->BoundingBox.X1 + 56);
                      if ( maxx == 0 )
                        goto B66;
                      else
                      {
                        ebp_180 = thegroup * 2;
                        if ( pin->X != maxx )
                          thegroup = maxx;
                        else
                        if ( maxx != allsameside )
                        {
                          thegroup = maxx;
                          if ( thegroup == pin->Y - ( pin->Thickness / 2 ) )
                          {
                            if ( pin->Y == maxx && ( ( ( maxx - allsameside ) ^ ( ( maxx - allsameside ) >> 31 ) ) - ( ( maxx - allsameside ) >> 31 ) <= ( ebp_200 ^ ( ( pin->X - ( pin->Thickness / 2 ) - maxx ) >> 31 ) ) - ( ( pin->X - ( pin->Thickness / 2 ) - maxx ) >> 31 ) ? ( ebp_200 ^ ( ( pin->X - ( pin->Thickness / 2 ) - maxx ) >> 31 ) ) - ( ( pin->X - ( pin->Thickness / 2 ) - maxx ) >> 31 ) : ( ( maxx - allsameside ) ^ ( ( maxx - allsameside ) >> 31 ) ) - ( ( maxx - allsameside ) >> 31 ) ) < ebp_180 )
                            {
                              maxx = maxx < pin->X - ( pin->Thickness / 2 ) ? pin->X - ( pin->Thickness / 2 ) : maxx;
                              maxx = pin->Y - ( pin->Thickness / 2 ) <= (int)thegroup ? thegroup : pin->Y - ( pin->Thickness / 2 );
                              maxx = (unsigned char)( ( allsameside < maxx ) ^ 1 ) ? maxx : allsameside;
                              maxx = pin->Y + ( pin->Thickness / 2 ) < maxx ? pin->Y + ( pin->Thickness / 2 ) : maxx;
                              i += -1;
                              sn = allpads;
                              if ( allpads == 0 || sn <= ( sn + n + 1 ) - (unsigned int)(delta4 & 0xFFFFFFFF) )
                              {
                              }
                              else
                              {
                              }
                            }
                          }
                        }
                        else
                        {
                          thegroup = maxx;
                          ebp_200 = pin->Y - ( pin->Thickness / 2 ) - maxx;
                          if ( ( ( ( maxx - ( pin->Y + ( pin->Thickness / 2 ) ) ) ^ ( ( maxx - ( pin->Y + ( pin->Thickness / 2 ) ) ) >> 31 ) ) - ( ( maxx - ( pin->Y + ( pin->Thickness / 2 ) ) ) >> 31 ) <= ( ebp_200 ^ ( ( pin->Y - ( pin->Thickness / 2 ) - maxx ) >> 31 ) ) - ( ( pin->Y - ( pin->Thickness / 2 ) - maxx ) >> 31 ) ? ( ebp_200 ^ ( ( pin->Y - ( pin->Thickness / 2 ) - maxx ) >> 31 ) ) - ( ( pin->Y - ( pin->Thickness / 2 ) - maxx ) >> 31 ) : ( ( maxx - ( pin->Y + ( pin->Thickness / 2 ) ) ) ^ ( ( maxx - ( pin->Y + ( pin->Thickness / 2 ) ) ) >> 31 ) ) - ( ( maxx - ( pin->Y + ( pin->Thickness / 2 ) ) ) >> 31 ) ) < ebp_180 )
                          {
                            maxx = maxx < pin->X - ( pin->Thickness / 2 ) ? pin->X - ( pin->Thickness / 2 ) : maxx;
                            maxx = pin->Y - ( pin->Thickness / 2 ) <= (int)thegroup ? thegroup : pin->Y - ( pin->Thickness / 2 );
                            maxx = (unsigned char)( ( allsameside < maxx ) ^ 1 ) ? maxx : allsameside;
                            maxx = pin->Y + ( pin->Thickness / 2 ) < maxx ? pin->Y + ( pin->Thickness / 2 ) : maxx;
                            i += -1;
                            sn = allpads;
                          }
                        }
                        if ( thegroup == pin->Y - ( pin->Thickness / 2 ) )
                        {
                        }
                      }
B66:;
                      maxx = box;
                      sn = allpads;
                    }
                  }
                {
                  /* phantom */ static BDimension thickness;
                  BoxListTypePtr thisside;
                  BoxListTypePtr otherside;
                  BoxTypePtr box;
                  BoxTypePtr lastbox;
                  /* phantom */ BDimension clearance;
                  if ( element->VBox.X1 >= 0 && element->VBox.Y1 >= 0 && element->VBox.X2 <= PCB->MaxWidth )
                  {
                    if ( PCB->MaxHeight < element->VBox.Y2 )
                    {
                    }
                  }
                  delta3 += 1000.000000000000;
                }
                }
              }
              while ( element->PadN != allpads );
              maxx++;
              allsameside += 'h';
            }
          }
          }
          }
          n += -1;
          ebp_208 += -300;
          if ( n == -1 )
            goto B64;
          else
          {
          }
        }
      }
      else
        delta3 = 0.000000000000;
B64:;
      *ebp_392 = solderside.BoxN;
      maxx = ComputeIntersectionArea( &solderside );
      *ebp_392 = solderside.BoxN;
      FreeBoxListMemory( &solderside );
      FreeBoxListMemory( *ebp_392 );
    {
      PointerListType seboxes;
      PointerListType ceboxes;
      direction_t dir[4];
      /* phantom */ struct ebox **boxpp, *boxp;
      rtree_t *rt_s, *rt_c;
      int factor;
      Cardinal n;
      ElementTypePtr element;
      seboxes.PtrN = 0;
      seboxes.PtrMax = 0;
      ceboxes.PtrN = 0;
      ceboxes.PtrMax = 0;
      seboxes.Ptr = 0;
      ceboxes.Ptr = 0;
      dir[0] = NORTH;
      dir[1] = EAST;
      dir[2] = SOUTH;
      n = PCB->Data->ElementN + -1;
      dir[3] = WEST;
      if ( PCB->Data->ElementN + -1 != -1 )
      {
        while ( element = ( PCB->Data->ElementN * 300 ) + -300 + -300 + PCB->Data->Element, GetPointerMemory( element->Flags.f/*.1_1of4*/ < 0 ? &ceboxes : &seboxes ) == 0 )
        {
          n += -1;
          *(int*)GetPointerMemory( element->Flags.f/*.1_1of4*/ < 0 ? &ceboxes : &seboxes )/*.16*/ = element->BoundingBox.BoxType;
          *(int*)(GetPointerMemory( element->Flags.f/*.1_1of4*/ < 0 ? &ceboxes : &seboxes )) = element->VBox.X1;
          *(int*)GetPointerMemory( element->Flags.f/*.1_1of4*/ < 0 ? &ceboxes : &seboxes )/*.4*/ = element->VBox.Y1;
          *(int*)GetPointerMemory( element->Flags.f/*.1_1of4*/ < 0 ? &ceboxes : &seboxes )/*.8*/ = element->VBox.X2;
          *(int*)GetPointerMemory( element->Flags.f/*.1_1of4*/ < 0 ? &ceboxes : &seboxes )/*.12*/ = element->VBox.Y2;
          if ( n + -1 == -1 )
          {
          }
          else
          {
          }
        }
        __fprintf_chk( stderr, 1, "malloc() failed in %s\n", __FUNCTION__ );
        exit( 1 );
      }
      rt_s = r_create_tree( &seboxes.Ptr[0][0], seboxes.PtrN, 1 );
      rt_c = r_create_tree( &ceboxes.Ptr[0][0], ceboxes.PtrN, 1 );
      FreePointerListMemory( &seboxes );
      FreePointerListMemory( &ceboxes );
      ebp_180 = 0;
      delta4 = 0.000000000000;
    {
      do
      {
        Cardinal n;
        ElementTypePtr element;
        allsameside = PCB->Data->ElementN + -1;
        if ( PCB->Data->ElementN + -1 != -1 )
        {
          allpads = ( PCB->Data->ElementN * 300 ) + -300;
          maxx = dir[ ebp_180 ];
          while ( 1 )
          {
            element = allpads + PCB->Data->Element;
            if ( element->Flags.f/*.1_1of4*/ >= 0 )
              thegroup = rt_c;
            else
              thegroup = rt_s;
            ebp_200 = element->VBox.X2;
            i = PCB->MaxWidth;
            if ( maxx == 1 )
            {
            }
            else
            if ( maxx == 2 )
              element->VBox.Y2 = 0 - element->VBox.Y2;
              r_search( &thegroup, 0, &__r_find_neighbor_reg_in_sea, &__r_find_neighbor_rect_in_reg, ebp_132 );
              boxp = 0;
              if ( 0 )
              {
                if ( element->Name->TextString == 0 )
                  factor = 1;
                else
                if ( boxp->element->Name->TextString && strcmp( &element->Name->TextString, &boxp->element->Name->TextString ) == 0 )
                {
                  factor = 2;
                  delta4 += 1.000000000000;
                }
                else
                {
                  factor = 1;
                  if ( element->Name->Direction == boxp->element->Name->Direction )
                    delta4 += (double)( factor );
                  if ( element->VBox.Y1 != element->VBox.X1 && element->VBox.Y1 != element->VBox.X1 && boxp->element->VBox.X1 != element->VBox.X2 && element->VBox.Y1 != element->VBox.X2 && element->VBox.Y1 != element->VBox.Y1 && element->VBox.Y1 != element->VBox.Y1 && element->VBox.Y1 != element->VBox.Y2 && element->VBox.Y1 != element->VBox.Y2 )
                  {
                  }
                  else
                    delta4 += (double)( factor );
                }
                if ( element->Name->Direction == boxp->element->Name->Direction )
                  delta4 += (double)( factor );
              }
              allsameside += -1;
              allpads += -44;
              if ( allsameside != -1 )
                continue;
            else
            if ( maxx == 3 )
            {
            }
            else
            if ( maxx == 1 )
              goto B109;
B109:;
          }
        }
        ebp_180++;
      }
      while ( ebp_180 != 4 );
      r_destroy_tree( &rt_s );
      r_destroy_tree( &rt_c );
    {
      Cardinal n = PCB->Data->ElementN + -1;
      /* phantom */ ElementTypePtr element;
      if ( PCB->Data->ElementN + -1 != -1 )
      {
        minX = 0x989680;
        maxY = 0xff676980;
        maxX = 0xff676980;
        minY = 0x989680;
        maxx = n;
        PCB->Data->ElementN = minY + ( PCB->Data->ElementN * 300 ) + -28;
        do
        {
          minX = *(int*)(minY + ( PCB->Data->ElementN * 300 ) + -28) < minX ? minX : minY;
          minY = *(int*)(minY + ( PCB->Data->ElementN * 300 ) + -28 + 4) < minY ? minY : minY;
          maxX = maxX < *(int*)(minY + ( PCB->Data->ElementN * 300 ) + -28 + 8) ? maxX : minY;
          maxY = maxY < *(int*)(minY + ( PCB->Data->ElementN * 300 ) + -28 + 12) ? maxY : minY;
          minY = minY + ( PCB->Data->ElementN * 300 ) + -28 + -300;
          maxx += -1;
        }
        while ( maxx != -1 );
        if ( minY < maxY && minX < maxX )
        {
          if ( sqrt( ( (double)( maxX - minX - minX ) * (double)( maxX - minX - minX ) ) * 0.000100000000 ) == sqrt( ( (double)( maxX - minX - minX ) * (double)( maxX - minX - minX ) ) * 0.000100000000 ) )
          {
            if ( sqrt( ( (double)( maxX - minX - minX ) * (double)( maxX - minX - minX ) ) * 0.000100000000 ) != sqrt( ( (double)( maxX - minX - minX ) * (double)( maxX - minX - minX ) ) * 0.000100000000 ) )
            {
            }
            else
            {
              delta2 = sqrt( abs( maxx + ComputeIntersectionArea( &componentside ) ) ) * ( ( ( 1.000000000000 - ( T / T0 ) ) * 100.000000000000 ) + 0.009999999776 );
              delta5 = 5.000000000000;
              if ( T == 5.000000000000 )
              {
                __printf_chk( 1, "cost components are %.3f %.3f %.3f %.3f %.3f %.3f\n", W / ( fp7 + ( ( delta3 + delta2 + fp6 + W ) - delta4 ) ), fp6 / ( fp7 + ( ( delta3 + delta2 + fp6 + W ) - delta4 ) ), delta2 / ( fp7 + ( ( delta3 + delta2 + fp6 + W ) - delta4 ) ), delta3 / ( fp7 + ( ( delta3 + delta2 + fp6 + W ) - delta4 ) ), -( delta4 ) / ( fp7 + ( ( delta3 + delta2 + fp6 + W ) - delta4 ) ), fp7 / ( fp7 + ( ( delta3 + delta2 + fp6 + W ) - delta4 ) ) );
                (int)delta1 = ebp_312;
                delta5 = delta2;
              }
              return 0;
            }
          }
          else
          {
          }
          sqrt( ( (double)( maxX - minX - minX ) * (double)( maxX - minX - minX ) ) * 0.000100000000 );
        }
      }
    }
    }
    }
    }
    }
  }
  W = 0.000000000000;
  FreeBoxListMemory( &bounds );
}
PerturbationType createPerturbation( PointerListTypePtr selected, double T )
{
  int eax;
  int ecx;
  int edx;
  double fp1;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ PerturbationType pt;
  switch ( __MOD(random( ),( ( 0 - ( ( *(int*)(selected) < 2 ) & 1 ) ) + 3 )) )
  {
  case 0:
  {
    int grid;
    double scaleX;
    double scaleY;
    if ( T == sqrt( T ) )
    {
      if ( sqrt( ebp_40 ) == sqrt( ebp_40 ) )
      {
        if ( (double)( PCB->MaxWidth / 3 ) <= sqrt( T ) )
        {
        }
        else
        {
          if ( scaleY == scaleY )
          {
            if ( scaleY != scaleY )
            {
            }
            else
            {
            }
          }
          else
          {
          }
          sqrt( T );
        }
        if ( ( 250.000000000000 < (double)( PCB->MaxWidth / 3 ) ) & 255 )
          scaleX = 250.000000000000;
        else
        {
          if ( scaleY == scaleY )
          {
            if ( scaleY == scaleY )
            {
              scaleX = (double)( PCB->MaxWidth / 3 );
              if ( scaleY < (double)( PCB->MaxWidth / 3 ) )
              {
                if ( scaleY == scaleY )
                {
                  if ( scaleY != scaleY )
                  {
                  }
                  else
                    scaleX = scaleY;
                }
                else
                {
                }
                sqrt( T );
                scaleX = scaleY;
              }
            }
            else
            {
            }
          }
          else
          {
          }
          sqrt( T );
          scaleX = (double)( PCB->MaxWidth / 3 );
        }
        if ( scaleY == scaleY )
        {
          if ( scaleY != scaleY )
          {
          }
          else
          {
            if ( scaleY < (double)( PCB->MaxHeight / 3 ) )
            {
              if ( scaleY == scaleY )
              {
                if ( 1 )
                {
                }
                else
                {
                }
              }
              else
              {
              }
              sqrt( T );
            }
            else
            {
            }
            if ( ( 250.000000000000 < (double)( PCB->MaxHeight / 3 ) ) & 255 )
              scaleY = 250.000000000000;
            else
            {
              if ( scaleY == scaleY )
              {
                if ( scaleY != scaleY )
                {
                }
                else
                {
                  if ( scaleY < (double)( PCB->MaxHeight / 3 ) )
                  {
                    if ( !( "huge", 0 ) )
                    {
                      if ( !1 )
                      {
                      }
                    }
                    else
                    {
                    }
                    sqrt( T );
                  }
                  else
                    scaleY = (double)( PCB->MaxHeight / 3 );
                }
              }
              else
              {
              }
              sqrt( T );
            }
            grid = 10;
            grid = T < 1000.000000000000 ? grid : 100;
            if ( (int)( ( ( (double)( random( ) ) / 2147483647.000000000000 ) - 0.500000000000 ) * scaleX * 0.000000000000 ) <= 0 )
            {
            }
            if ( (int)(scaleX & 0xFFFFFFFF) <= 0 )
            {
            }
          }
        }
        else
        {
        }
        sqrt( T );
      }
      else
      {
      }
    }
    else
    {
    }
    sqrt( T );
  }
    break;
  case 1:
  {
    /* phantom */ Boolean isSMD;
    if ( *(int*)(edi + 232) )
    {
    }
    else
    {
    }
  }
    break;
  case 2:
    if ( edi == *(int*)(ebp_72 + ( ( __MOD((long long)( eax ),(unsigned int)(scaleX & 0xFFFFFFFF)) ) << 2 )) )
    {
    }
    if ( ( *(int*)(edi + 224) && *(char*)(*(int*)(selected->Ptr + ( ebp_48 << 2 )) + 20) < 0 ) || ( selected->Ptr[0][56] && *(char*)(edi + 20) < 0 ) )
    {
      ebx = createPerturbation( &T & 0xFFFFFFFF, T );
      return;
    }
    break;
  default:
    break;
  }
  result.other = 0;
  result.DY = 0;
  result.DX = 0;
  result.which = SHIFT;
  result.rotate = 0;
  result.element = &edi;
  return;
}
void doPerturb( PerturbationType *pt, Boolean undo )
{
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  /* phantom */ LocationType bbcx;
  /* phantom */ LocationType bbcy;
  if ( pt->which != 1 )
  {
    if ( !0 )
    {
      if ( pt->which == 2 )
      {
        /* phantom */ LocationType x1;
        /* phantom */ LocationType y1;
        LocationType x2 = pt->other->BoundingBox.X1;
        LocationType y2 = pt->other->BoundingBox.Y1;
        MoveElementLowLevel( &PCB->Data, &pt->element->BoundingBox.X1, x2 - pt->(null), pt->other->BoundingBox.Y1 - pt->(null) );
        MoveElementLowLevel( &PCB->Data, pt->other, pt->(null) - x2, pt->(null) - y2 );
        if ( ( ( (unsigned char)( pt->other->Flags.f ^ pt->other->BoundingBox.X1 ) & 128 ) & 255 ) == 0 )
        {
          return;
        }
      {
        PerturbationType mypt;
        mypt.element = pt->element;
        mypt.which = ROTATE;
        mypt.rotate = 0;
        doPerturb( &mypt, undo );
        mypt.element = pt->other;
        doPerturb( &mypt, undo );
        return;
      }
      }
      else
      {
        return;
      }
    }
    else
    {
      LocationType DX = pt->DX;
      LocationType DY = pt->DY;
    }
  }
  else
  {
    b = pt->rotate;
    if ( b & 255 )
    {
      RotateElementLowLevel( &PCB->Data, &pt->element->BoundingBox.X1, ( pt->(null) + pt->(null) ) / 2, ( pt->(null) + pt->(null) ) / 2, b );
      return;
    }
    else
    {
      MirrorElementCoordinates( &PCB->Data, &pt->element->BoundingBox.X1, 0 );
    }
  }
{
  BYTE b;
  /* phantom */ LocationType y;
  MoveElementLowLevel( &PCB->Data, &pt->element->BoundingBox.X1, ebp_96, ebp_96 );
  return;
}
}
Boolean AutoPlaceSelected( void )
{
  int eax;
  double fp5;
  double fp6;
  NetListTypePtr Nets;
  PointerListType Selected;
  PerturbationType pt;
  double C0, T0;
  Boolean changed;
  Selected.PtrN = 0;
  Selected.PtrMax = 0;
  Selected.Ptr = 0;
  if ( ProcNetlist( PCB + 8692 ) )
  {
    if ( PCB->Data->ElementN + -1 != -1 )
    {
      while ( 1 )
      {
        if ( ( ( *(char*)(( PCB->Data->ElementN * 300 ) + -300 + -300 + *(int*)(PCB->Data + 32) + 20) & 64 ) & 255 ) == 0 )
        {
          if ( PCB->Data->ElementN + -1 + -1 + -1 != -1 )
            continue;
        }
        else
        {
          *(int*)(GetPointerMemory( ebp_48 )) = ( PCB->Data->ElementN * 300 ) + -300 + -300 + *(int*)GetPointerMemory( ebp_48 )/*.32*/;
          if ( PCB->Data->ElementN + -1 + -1 + -1 != -1 )
            continue;
        }
        Selected.Ptr = 0;
        Selected.PtrN = 0;
        Selected.PtrMax = 0;
        if ( 0 == 0 )
          goto B13;
        else
        {
          /* phantom */ int TRIALS;
          /* phantom */ double Tx, P;
          double Cs;
          int i = 0;
          C0 = ComputeCost( ProcNetlist( PCB + 8692 ), 300000.000000000000, 300000.000000000000 );
          Cs = 0.000000000000;
          Nets = ProcNetlist( PCB + 8692 );
          do
          {
            pt = createPerturbation( 1000000.000000000000, Selected.PtrN );
            pt.which = createPerturbation( 1000000.000000000000, Selected.PtrN );
            doPerturb( &pt, 0 );
            Cs += abs( ComputeCost( Nets, 300000.000000000000, 300000.000000000000 ) - C0 );
            doPerturb( &pt, 1 );
          }
          while ( i == 10 );
          good_moves = 0;
          T0 = ( Cs / -10.000000000000 ) / -0.051293294388;
          __printf_chk( 1, "Initial T: %f\n", ( Cs / -10.000000000000 ) / -0.051293294388 );
        {
          double T;
          long steps;
          int good_moves, moves;
          int good_move_cutoff = (int)( (double)( (long long)( Selected.PtrN ) ) * 20.000000000000 );
          int move_cutoff = good_move_cutoff * 2;
          __printf_chk( 1, "Starting cost is %.0f\n", ComputeCost( ProcNetlist( PCB + 8692 ), T0, 5.000000000000 ) );
          steps = 0;
          C0 = ComputeCost( ProcNetlist( PCB + 8692 ), T0, T0 );
          T = T0;
        {
          while ( 1 )
          {
            pt = createPerturbation( &T & 0xFFFFFFFF );
            pt.which = createPerturbation( &T & 0xFFFFFFFF );
            doPerturb( &pt, 0 );
            if ( ComputeCost( ProcNetlist( PCB + 8692 ), T0, T ) < C0 )
            {
              steps++;
              good_moves++;
              C0 = ComputeCost( ProcNetlist( PCB + 8692 ), T0, T );
            }
            else
            {
              random( );
              if ( fp6 <= (double)( ebp_188 ) / 2147483647.000000000000 )
                doPerturb( &pt, 1 );
              else
              {
                steps++;
                C0 = fp6;
              }
            }
            moves++;
            if ( good_move_cutoff <= good_moves || move_cutoff <= moves )
            {
              __printf_chk( 1, "END OF STAGE: COST %.0f\tGOOD_MOVES %d\tMOVES %d\tT: %.1f\n", C0, good_moves, moves, T );
              if ( T < 5.000000000000 )
              {
              }
              else
              if ( moves / 40 <= good_moves )
              {
                moves = 0;
                good_moves = 0;
                T *= 0.750000000000;
                C0 = ComputeCost( ProcNetlist( PCB + 8692 ), T0, T * 0.750000000000 );
              }
              else
              {
              }
              *(int*)&changed = 0;
              if ( ebp_148 <= 0 )
              {
                FreePointerListMemory( &Selected );
                return changed;
              }
              *(int*)&changed = 1;
              DeleteRats( 0 );
              AddAllRats( 0, 0 );
              ClearAndRedrawOutput( );
            }
          }
        }
        }
        }
      }
    }
    else
    {
      Selected.Ptr = 0;
      Selected.PtrMax = 0;
      Selected.PtrN = 0;
    }
B13:;
    Message( "No elements selected to autoplace.\n" );
  }
  else
    Message( "Can't add rat lines because no netlist is loaded.\n" );
  *(int*)&changed = 0;
}
#if 0
#endif
