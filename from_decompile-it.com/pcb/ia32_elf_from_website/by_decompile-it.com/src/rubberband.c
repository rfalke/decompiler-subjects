#include "rubberband.c.h"
int rubber_callback( BoxType *b, void *cl )
{
  int esi;
  /* phantom */ LineTypePtr line;
  /* phantom */ struct rubber_info *i;
  /* phantom */ float x, y, rad, dist1, dist2;
  /* phantom */ BDimension t;
  int touches;
  return 0;
}
int rat_callback( BoxType *box, void *cl )
{
  int eax;
  /* phantom */ RatTypePtr rat;
  /* phantom */ struct rinfo *i;
  switch ( ((int*)cl) )
  {
  case 256:
    if ( cl[2] == box[2].Y2 && box[3].X1 == cl[2] )
    {
      CreateNewRubberbandEntry( 0, &box[0].X1, &box[2].Y2 );
    }
    else
    {
      if ( box[4].X1 == cl[2] && box[4].Y1 == cl[2] )
      {
        CreateNewRubberbandEntry( 0, &box[0].X1, &box[4].X1 );
      }
    }
    break;
  case 512:
    if ( cl[3] != box[2].Y2 || cl[3] != box[3].X1 || box[5].Y1 != cl[1] )
    {
      if ( cl[3] != box[4].X1 || cl[3] != box[4].Y1 || box[5].X2 != cl[1] )
      {
        if ( cl[3] != box[2].Y2 || cl[3] != box[3].X1 || box[5].Y1 != cl[1] )
        {
          if ( box[4].X1 == cl[3] && box[4].Y1 == cl[3] && box[5].X2 == cl[1] )
            continue;
        }
      }
    }
    break;
  case 4096:
    if ( box[5].Y1 == cl[1] && box[2].Y2 == *(int*)(cl[4]) && box[3].X1 == cl[4] )
      continue;
    else
    {
      if ( box[5].X2 == cl[1] && box[4].X1 == ((int*)cl) && box[4].Y1 == cl[4] )
        continue;
    }
    break;
  default:
    Message( "hace: bad rubber-rat lookup callback\n" );
    break;
  }
  return 0;
}
void CheckLinePointForRat( LayerTypePtr Layer, PointTypePtr Point )
{
  struct rinfo info;
  info.point = Point;
  info.type = 4096;
  info.group = GetLayerGroupNumberByPointer( Layer );
  r_search( &PCB->Data->rat_tree, &Point->X, 0, &rat_callback, &info.type );
  return;
}
void CheckPinForRubberbandConnection( PinTypePtr Pin )
{
  int edx;
  struct rubber_info info;
  Cardinal n;
  /* phantom */ BDimension t;
  info.line = 0;
  info.box.X1 = Pin->X - ( Pin->Thickness / 2 );
  info.box.X2 = Pin->X + ( Pin->Thickness / 2 );
  info.box.Y1 = Pin->Y - ( Pin->Thickness / 2 );
  info.box.Y2 = Pin->Y + ( Pin->Thickness / 2 );
  if ( ( Pin->Flags.f/*.2_2of4*/ & 1 ) & 255 )
    info.radius = 0;
  else
  {
    info.radius = Pin->Thickness / 2;
    info.X = Pin->X;
    info.Y = Pin->Y;
  }
  if ( PCB->Data->LayerN )
  {
    n = 0;
    do
    {
      n++;
      info.layer = PCB->Data + ( n * 92 ) + 76;
      r_search( &PCB->Data->Layer->line_tree, &info.box, 0, &rubber_callback, &info.radius );
    }
    while ( PCB->Data->LayerN <= n );
  }
  return;
}
void CheckLinePointForRubberbandConnection( LayerTypePtr Layer, LineTypePtr Line, PointTypePtr LinePoint, Boolean Exact )
{
  Cardinal group;
  struct rubber_info info;
  BDimension t = -1;
  info.radius = t;
  info.line = Line;
  info.box.X1 = LinePoint->X - ( Line->Thickness / 2 );
  info.box.X2 = LinePoint->X + ( Line->Thickness / 2 );
  info.X = LinePoint->X;
  info.box.Y1 = LinePoint->Y - ( Line->Thickness / 2 );
  info.box.Y2 = ( Line->Thickness / 2 ) + LinePoint->Y;
  info.Y = LinePoint->Y;
{
  Cardinal entry;
  if ( PCB->Data->pcb->ID )
  {
    /* phantom */ LayerTypePtr layer;
    Cardinal number;
    entry = 0;
    do
    {
      number = *(int*)(number + ( entry * 4 ) + ( GetLayerGroupNumberByPointer( Layer ) * 18 * 4 ) + 7444);
      if ( PCB->Data->LayerN <= *(int*)(number + ( entry * 4 ) + ( GetLayerGroupNumberByPointer( Layer ) * 18 * 4 ) + 7444) || PCB->Data->Layer->On == 0 )
        goto B9;
      else
      {
        info.layer = PCB->Data + ( number * 92 ) + 76;
        r_search( &PCB->Data->Layer->line_tree, &info.box, 0, &rubber_callback, &info.radius );
      }
B9:;
      entry++;
    }
    while ( entry + 1 < PCB->Data->pcb->LayerGroups.Number[0] );
  }
  return;
}
}
void LookupRubberbandLines( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  int eax;
  int ecx;
  int edx;
  int ebp_88;
  switch ( Type )
  {
  case 2:
  {
    Cardinal n;
    Cardinal sn = ((int*)Ptr1);
    /* phantom */ PinTypePtr pin;
    if ( ((int*)Ptr1) )
    {
      n = 0;
      Ptr1 = Ptr1;
      while ( 1 )
      {
        CheckPinForRubberbandConnection( Ptr1[64] + ( n * 76 ) );
        sn = Ptr1[56];
        if ( Ptr1[56] == 0 || sn <= ( sn + n + 1 ) - sn )
          goto B14;
        else
        {
          sn = Ptr1[56];
        }
      }
    }
  {
B14:;
    Cardinal n;
    Cardinal sn;
    PadTypePtr pad;
    ebp_88 = 0;
    n = 0;
    while ( 1 )
    {
      sn = ((int*)Ptr1);
      do
      {
        if ( sn && n < sn )
        {
          if ( PCB->Data->pcb->ID )
          {
            do
            {
              if ( PCB->Data->LayerN <= *(int*)(PCB->Data->pcb + ( ( 0 + 1 ) * 4 ) + ( GetLayerGroupNumberByNumber( PCB->Data->LayerN + ( ( ( ((int*)Ptr1) >> ebp_88 ) ^ 7 ) & 1 ) ) * 18 * 4 ) + 7444) || PCB->Data->Layer->On == 0 )
                continue;
              else
              {
                r_search( &PCB->Data->Layer->line_tree, ebp_44, 0, &rubber_callback, ebp_60 );
              }
            }
            while ( PCB->Data->pcb->LayerGroups.Number[0] <= 0 + 1 + 1 );
          }
          sn = ((int*)Ptr1);
        }
      }
      while ( ((int*)Ptr1) != ((int*)Ptr1) );
      n++;
      ebp_88 += 104;
    }
  }
  }
    break;
  case 4:
  {
    /* phantom */ LayerTypePtr layer;
    /* phantom */ LineTypePtr line;
    if ( GetLayerNumber( &PCB->Data, &Ptr1[0] ) < PCB->Data->LayerN )
    {
      CheckLinePointForRubberbandConnection( &Ptr1[0], &Ptr2[0], &((int*)Ptr2), 0 );
      CheckLinePointForRubberbandConnection( &Ptr1[0], &Ptr2[0], &((int*)Ptr2), 0 );
    }
  }
    break;
  case 4096:
    if ( GetLayerNumber( &PCB->Data, &Ptr1[0] ) < PCB->Data->LayerN )
    {
      CheckLinePointForRubberbandConnection( &Ptr1[0], &Ptr2[0], &Ptr3[0], 1 );
    }
    break;
  case 1:
    CheckPinForRubberbandConnection( &Ptr1[0] );
    return;
    break;
  case 8:
    if ( PCB->Data->LayerN <= GetLayerNumber( &PCB->Data, &Ptr1[0] ) || PCB->Data->pcb->ID == GetLayerGroupNumberByPointer( &Ptr1[0] ) + 1844 + 1 )
    {
      return;
    }
    do
    {
      if ( PCB->Data->LayerN <= *(int*)(PCB->Data->pcb + ( 0 * 4 ) + ( GetLayerGroupNumberByPointer( &Ptr1[0] ) * 18 * 4 ) + 7444) || PCB->Data->Layer->On == 0 || *(int*)(PCB->Data + 80) + -1 == -1 )
        continue;
      else
      {
        do
        {
          if ( ( *(int*)(esi + ecx + 20) & 8224 ) == 0 )
          {
            if ( eax & 255 )
            {
              CreateNewRubberbandEntry( ebp_88, &edi, edi + 44 );
            }
            if ( eax & 255 )
            {
              CreateNewRubberbandEntry( ebp_88, &edi, edi + 64 );
              if ( ebx != -1 )
                continue;
              else
                break;
            }
          }
        }
        while ( ebx + -1 != -1 );
      }
    }
    while ( PCB->Data->pcb->LayerGroups.Number[0] <= 0 + 1 + 1 );
    break;
  }
  return;
}
void LookupRatLines( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  int eax;
  int edx;
  int ebp_60;
  switch ( Type )
  {
  case 1:
    r_search( &PCB->Data->rat_tree, &Ptr1[0], 0, &rat_callback, 256 );
    return;
    break;
  case 2:
  {
    Cardinal n;
    Cardinal sn = Ptr1[56];
    PinTypePtr pin;
    if ( Ptr1[56] )
    {
      n = 0;
      while ( 1 )
      {
        r_search( &PCB->Data->rat_tree, Ptr1[64] + ( n * 76 ), 0, &rat_callback, 256 );
        sn = Ptr1[56];
        if ( Ptr1[56] == 0 || sn <= ( sn + n + 1 ) - sn )
          goto B13;
        else
        {
          sn = Ptr1[56];
        }
      }
    }
  {
B13:;
    Cardinal n;
    Cardinal sn;
    PadTypePtr pad;
    ebp_60 = 0;
    while ( 1 )
    {
      sn = Ptr1[58];
      do
      {
        if ( sn && n < sn )
        {
          pad = ebp_60 + Ptr1[65];
          r_search( &PCB->Data->rat_tree, (int)( &pad->BoundingBox ), 0, &rat_callback, 512 );
          sn = Ptr1[58];
        }
        else
          break;
      }
      while ( Ptr1[58] != Ptr1[58] );
      n++;
      ebp_60 += 104;
    }
  }
  }
    break;
  case 4:
  {
    /* phantom */ LayerTypePtr layer;
    /* phantom */ LineTypePtr line;
    CheckLinePointForRat( &Ptr1[0], Ptr2 + 44 );
    CheckLinePointForRat( &Ptr1[0], Ptr2 + 64 );
  }
    break;
  case 4096:
    CheckLinePointForRat( &Ptr1[0], &Ptr3[0] );
    return;
    break;
  default:
    return;
    break;
  }
  return;
}
#if 0
#endif
