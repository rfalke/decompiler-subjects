#include "drill.c.h"
void FillDrill( DrillTypePtr Drill, ElementTypePtr Element, PinTypePtr Pin )
{
  Cardinal n;
  ElementTypeHandle ptr;
  PinTypeHandle pin;
  pin[0] = Pin;
  if ( Element )
  {
    n = Drill->ElementN + -1;
    Drill->PinCount++;
    if ( Drill->ElementN + -1 != -1 )
    {
      if ( Drill->Element[0] != Element )
      {
        do
        {
          n += -1;
          if ( n + -1 == -1 )
            goto B4;
          else
          {
          }
        }
        while ( Drill->Element[0] != Element );
      }
    }
B4:;
    n = Element;
  }
  else
    Drill->ViaCount++;
  if ( ( Pin->Flags.f/*.1_1of4*/ & 8 ) & 255 )
  {
    Drill->UnplatedCount++;
  }
  return;
}
void InitializeDrill( DrillTypePtr drill, PinTypePtr pin, ElementTypePtr element )
{
  int esi;
  int edi;
  void *ptr;
  drill = drill;
  drill->Element = 0;
  drill->ElementN = 0;
  drill->ViaCount = 0;
  drill = &pin->DrillingHole;
  drill->PinCount = 0;
  drill->UnplatedCount = 0;
  drill->ElementMax = 0;
  drill->PinN = 0;
  drill->Pin = 0;
  drill->PinMax = 0;
  ptr = (void*)pin;
  if ( element )
  {
    drill->PinCount = 1;
    ptr = (void*)element;
  }
  else
    drill->ViaCount = 1;
  if ( ( pin->Flags.f/*.1_1of4*/ & 8 ) & 255 )
  {
    drill->UnplatedCount = 1;
  }
  return;
}
int DrillQSort( void *va, void *vb )
{
  /* phantom */ DrillType *a;
  /* phantom */ DrillType *b;
  return ((int*)va) - ((int*)vb);
}
DrillInfoTypePtr GetDrillInfo( DataTypePtr top )
{
  int eax;
  int ecx;
  int edx;
  int ebp_140;
  DrillInfoTypePtr AllDrills;
  DrillTypePtr Drill;
  /* phantom */ DrillType savedrill;
  DrillType swapdrill;
  Boolean DrillFound;
  Boolean NewDrill;
{
  Cardinal n;
  ElementTypePtr element;
  DrillFound = 0;
  AllDrills = (struct {
     Cardinal DrillN;
     Cardinal DrillMax;
     DrillTypePtr Drill;
  }*)MyCalloc( 1, 12, "GetAllDrillInfo()" );
  n = top->ElementN + -1;
  if ( top->ElementN + -1 != -1 )
  {
    ebp_140 = ( top->ElementN * 300 ) + -300;
    do
    {
      Cardinal n;
      Cardinal sn;
      PinTypePtr pin;
      element = ebp_140 + top->Element;
      if ( element->PinN )
      {
        n = 0;
        while ( 1 )
        {
          pin = &element->Pin[ n ];
          if ( DrillFound == 0 )
          {
            InitializeDrill( GetDrillInfoDrillMemory( AllDrills ), pin, element );
            DrillFound = 1;
            sn = element->PinN;
            if ( element->PinN == 0 )
            {
            }
          }
          else
          {
            if ( *(int*)(0) == pin->DrillingHole )
              FillDrill( GetDrillInfoDrillMemory( AllDrills ), ebp_120, via );
            else
            {
              Cardinal n;
              DrillTypePtr drill;
              if ( AllDrills->DrillN )
              {
                drill = &AllDrills->Drill;
                if ( drill->DrillSize == pin->DrillingHole )
                  goto B13;
                else
                {
                  *(int*)&NewDrill = 0;
                  n = 0;
                  do
                  {
                    if ( drill->DrillSize <= pin->DrillingHole )
                    {
                      if ( AllDrills->DrillN == 0 )
                      {
                      }
                    }
                    else
                    {
                      if ( NewDrill & 255 )
                      {
                      }
                      else
                      {
                        InitializeDrill( &swapdrill, pin, element );
                        Drill = pin->DrillingHole + 1;
                      }
                      drill = &swapdrill;
                      drill->ElementN = swapdrill.ElementN;
                      drill->ElementMax = swapdrill.ElementMax;
                      drill->PinCount = swapdrill.PinCount;
                      drill->ViaCount = swapdrill.ViaCount;
                      drill->UnplatedCount = swapdrill.UnplatedCount;
                      drill->PinN = swapdrill.PinN;
                      drill->PinMax = swapdrill.PinMax;
                      drill->Pin = swapdrill.Pin;
                      drill->Element = swapdrill.Element;
                      swapdrill.DrillSize = drill->DrillSize;
                      swapdrill.Element = drill->Element;
                      swapdrill.Pin = drill->Pin;
                      swapdrill.PinMax = drill->PinMax;
                      swapdrill.PinN = drill->PinN;
                      swapdrill.UnplatedCount = drill->UnplatedCount;
                      swapdrill.ViaCount = drill->ViaCount;
                      swapdrill.PinCount = drill->PinCount;
                      swapdrill.ElementMax = drill->ElementMax;
                      swapdrill.ElementN = drill->ElementN;
                      *(int*)&NewDrill = 1;
                      if ( AllDrills->DrillN == 0 )
                        continue;
                    }
                    n++;
                    if ( AllDrills->DrillN <= n )
                      continue;
                    else
                    {
                      drill = AllDrills->Drill + 40;
                    }
                  }
                  while ( pin->DrillingHole != drill->DrillSize );
                }
B13:;
                FillDrill( drill, ebp_120, via );
                if ( AllDrills->Drill->DrillSize < via->DrillingHole )
                {
                  InitializeDrill( GetDrillInfoDrillMemory( AllDrills ), via, ebp_120 );
                }
              }
              if ( AllDrills->Drill->DrillSize < pin->DrillingHole )
              {
                InitializeDrill( GetDrillInfoDrillMemory( AllDrills ), via, ebp_120 );
              }
            }
            sn = element->PinN;
            if ( element->PinN )
              goto B25;
          }
B25:;
          n = ( sn + n + 1 ) - sn;
          if ( ( sn + n + 1 ) - element->PinN < sn )
            continue;
        }
      }
      n += -1;
      ebp_140 += -300;
    }
    while ( n != -1 );
  }
{
  Cardinal n;
  Cardinal sn;
  PinTypePtr via;
  if ( top->ViaN )
  {
    Drill = GetDrillInfoDrillMemory( AllDrills );
    n = 0;
    while ( 1 )
    {
      via = &top->Via[ n ];
      if ( DrillFound == 0 )
      {
        Drill = GetDrillInfoDrillMemory( AllDrills );
        *(int*)(GetDrillInfoDrillMemory( AllDrills )) = via->DrillingHole;
        FillDrill( GetDrillInfoDrillMemory( AllDrills ), 0, via );
        DrillFound = 1;
        sn = top->ViaN;
        if ( top->ViaN == 0 )
          AllDrills = AllDrills;
      }
      else
      {
        if ( via->DrillingHole != drill->DrillSize )
        {
          Cardinal n;
          DrillTypePtr drill;
          if ( AllDrills->DrillN )
          {
            drill = &AllDrills->Drill;
            n = 1;
            if ( via->DrillingHole != drill->DrillSize )
            {
              for ( ; n < AllDrills->DrillN; n++ )
              {
                drill++;
                if ( via->DrillingHole == drill[1].DrillSize )
                  goto B43;
                else
                {
                  // n++;
                }
              }
            }
B43:;
            FillDrill( drill, 0, via );
            if ( via->DrillingHole != drill->DrillSize )
              goto B39;
          }
B39:;
          Drill = GetDrillInfoDrillMemory( AllDrills );
          *(int*)(GetDrillInfoDrillMemory( AllDrills )) = via->DrillingHole;
          FillDrill( GetDrillInfoDrillMemory( AllDrills ), 0, via );
        }
        else
          FillDrill( drill, 0, via );
        sn = top->ViaN;
        if ( top->ViaN == 0 )
          continue;
      }
      n = ( sn + n + 1 ) - sn;
      if ( sn <= ( sn + n + 1 ) - top->ViaN )
        continue;
      else
      {
      }
    }
  }
  qsort( &AllDrills->Drill, AllDrills->DrillN, 40, &DrillQSort );
  return AllDrills;
}
}
}
void RoundDrillInfo( DrillInfoTypePtr d, int roundto )
{
  int eax;
  int ecx;
  int edx;
  unsigned int i;
{
  int diam1;
  /* phantom */ int diam2;
  while ( d->DrillN && i < d->DrillN + -1 )
  {
    i++;
    diam1 = roundto * ( ( d->Drill->DrillSize + ( roundto / 2 ) ) / roundto );
    if ( diam1 == roundto * ( ( d->Drill->DrillSize + ( roundto / 2 ) ) / roundto ) )
    {
      int ei, ej;
      d->Drill->ElementMax = *(int*)(d->Drill + ( ( i + 1 ) * 40 ) + 4) + d->Drill->ElementN;
      if ( d->Drill->ElementN + d->Drill->ElementN )
      {
        d->Drill->Element = MyRealloc( &d->Drill->Element, ( d->Drill->ElementN + d->Drill->ElementN ) << 2, "RoundDrillInfo" );
        if ( d->Drill->ElementN )
        {
          ei = 0;
          do
          {
            if ( d->Drill->ElementN == 0 )
              ei = *(int*)(*(int*)(eax + 36) + ( ecx << 2 ));
            else
            {
              ej = 0;
              if ( d->Drill->Element[0] != ej )
              {
                do
                {
                  ej++;
                }
                while ( ej + 1 < d->Drill->ElementN && d->Drill->Element[0] != d->Drill->Element[0] );
                if ( ej == d->Drill->ElementN )
                  ej = ej + 1 + 1;
                else
                {
                  ei++;
                }
              }
            }
            d->Drill->ElementN = eax;
          }
          while ( ei + 1 < *(int*)(ebp_28 + 4) );
          d = d;
        }
      }
      SaveFree( &d->Drill->Element );
      d->Drill->Element = 0;
      d->Drill->DrillSize += *(int*)(d->Drill + ( ( i + 1 ) * 40 ) + 24);
      d->Drill->Pin = MyRealloc( &d->Drill->DrillSize, d->Drill->DrillSize << 2, "RoundDrillInfo" );
      memcpy( d->Drill->DrillSize + ( d->Drill->DrillSize << 2 ), &d->Drill->Pin, d->Drill->PinN << 2 );
      d->Drill->DrillSize = *(int*)(( i * 40 ) + d->Drill + 24) + d->Drill->PinN;
      SaveFree( &d->Drill->Pin );
      d->Drill->DrillSize = *(int*)(( i * 40 ) + d->Drill + 12) + d->Drill->PinCount;
      d->Drill->DrillSize = *(int*)(( i * 40 ) + d->Drill + 16) + d->Drill->ViaCount;
      d->Drill->DrillSize = *(int*)(( i * 40 ) + d->Drill + 20) + d->Drill->UnplatedCount;
      d->Drill->Pin = 0;
      d->Drill->DrillSize = diam1;
      memmove( d->Drill + ( ( i + 1 ) * 40 ), d->Drill + ( i * 40 ) + 80, ( ( d->DrillN - i ) * 40 ) + -80 );
      i = i;
      d = d->DrillN + -1;
    }
    else
    {
    }
  }
  return;
}
}
void FreeDrillInfo( DrillInfoTypePtr Drills )
{
  int edx;
{
  Cardinal n;
  DrillTypePtr drill;
  if ( Drills->DrillN )
  {
    n = 0;
    do
    {
      drill = Drills->Drill + 0 + 40;
      SaveFree( &drill->Element );
      drill->Element = 0;
      SaveFree( &drill->Pin );
      drill->Pin = 0;
    }
    while ( Drills->DrillN == 0 || Drills->DrillN <= n + 1 );
  }
  SaveFree( &Drills->Drill );
  Drills->Drill = 0;
  Drills = Drills;
}
}
#if 0
#endif
