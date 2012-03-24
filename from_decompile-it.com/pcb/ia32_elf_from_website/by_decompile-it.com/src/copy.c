#include "copy.c.h"
static LocationType DeltaX;
static LocationType DeltaY;
static ObjectFunctionType CopyFunctions = { &CopyLine, &CopyText, &CopyPolygon, &CopyVia, &CopyElement, 0, 0, 0, 0, 0, &CopyArc, 0 }
;
PolygonTypePtr CopyPolygonLowLevel( PolygonTypePtr Dest, PolygonTypePtr Src )
{
{
  Cardinal n = Src->PointN + -1;
  PointTypePtr point;
  if ( Src->PointN + -1 != -1 )
  {
    do
    {
      n += -1;
      CreateNewPointInPolygon( Dest, Src->Points->X, Src->Points->X );
    }
    while ( n == -1 );
  }
  SetPolygonBoundingBox( Dest );
  Dest->Flags.f = Src->Flags.f;
  Dest->Flags.t[0] = Src->Flags.t[0];
  Dest->Flags.f &= -5;
  Dest->Flags.t[4] = Src->Flags.t[4];
  return Dest;
}
}
ElementTypePtr CopyElementLowLevel( DataTypePtr Data, DataTypePtr Dest, ElementTypePtr Src, Boolean uniqueName, LocationType dx, LocationType dy )
{
  int eax;
  int edx;
  int i;
  if ( Dest )
  {
    FreeElementMemory( &Dest->ViaN );
  }
  ebp = MaskFlags( Src->Name->Flags.t[0] );
  if ( eax )
  {
    Cardinal n = Src->LineN + -1;
    LineTypePtr line;
    if ( Src->LineN + -1 != -1 )
    {
      n = Src->LineN + -1;
      do
      {
        n += -1;
        CreateNewLineInElement( ebp_96, dx + *(int*)(ebx + *(int*)(ebp_92 + 264) + 44), edx + *(int*)(ebx + *(int*)(ebp_92 + 264) + 48), dx + *(int*)(ebx + *(int*)(ebp_92 + 264) + 64), edx + *(int*)(ebx + *(int*)(ebp_92 + 264) + 68), *(int*)(ebx + *(int*)(ebp_92 + 264) + 36) );
      }
      while ( n == -1 );
      Src = Src;
      dy = dy;
    }
  {
    Cardinal n;
    Cardinal sn = Src->PinN;
    PinTypePtr pin;
    if ( Src->PinN )
    {
      n = 0;
      do
      {
        CreateNewPin( ebp_96, ebp_92 + *(int*)(ebp_124 + 52), ebp_100 + *(int*)(ebp_124 + 56), *(int*)(ebp_124 + 36), *(int*)(ebp_124 + 40), *(int*)(ebp_124 + 44), *(int*)(ebp_124 + 48), *(int*)(ebp_124 + 60), *(int*)(ebp_124 + 64), "badarg" );
        sn = Src->PinN;
      }
      while ( Src->PinN == 0 || sn <= ( sn + n + 1 ) - dy );
      dx = dx;
      dy = dy;
    }
  {
    Cardinal n = 0;
    Cardinal sn;
    PadTypePtr pad;
    while ( 1 )
    {
      sn = Src->PadN;
      do
      {
        if ( sn && n < sn )
        {
          pad = Src->Pad + ( n * 104 );
          CreateNewPad( ebp_96, dx + *(int*)(ebp_124 + 44), dy + *(int*)(ebp_124 + 48), dx + *(int*)(ebp_124 + 64), dy + *(int*)(ebp_124 + 68), *(int*)(ebp_124 + 36), *(int*)(ebp_124 + 40), *(int*)(ebp_124 + 84), *(int*)(ebp_124 + 88), *(int*)(ebp_124 + 92), "badarg" );
          sn = Src->PadN;
        }
        else
        {
          Cardinal n = Src->ArcN + -1;
          ArcTypePtr arc;
          if ( Src->ArcN + -1 != -1 )
          {
            n = n;
            do
            {
              n += -1;
              CreateNewArcInElement( ebp_96, dx + *(int*)(ebx + *(int*)(ebp_92 + 268) + 52), ebp_100 + *(int*)(ebx + *(int*)(ebp_92 + 268) + 56), *(int*)(ebx + *(int*)(ebp_92 + 268) + 44), *(int*)(ebx + *(int*)(ebp_92 + 268) + 48), *(int*)(ebx + *(int*)(ebp_92 + 268) + 60), *(int*)(ebx + *(int*)(ebp_92 + 268) + 64), *(int*)(ebx + *(int*)(ebp_92 + 268) + 36) );
            }
            while ( n == -1 );
            Src = Src;
            dy = dy;
          }
          if ( Src->Attributes.Number > 0 )
          {
            i = 0;
            do
            {
              i++;
              CreateNewAttribute( &esi, &Src->Attributes.List->name[0], &Src->Attributes.List->value );
            }
            while ( Src->Attributes.Number <= i );
            dx = dx;
            dy = dy;
          }
          dx = Src->MarkX + dx;
          dy = Src->MarkY + dy;
          *(int*)(ebp_96 + 216) = Src->MarkX + dx;
          *(int*)(ebp_96 + 220) = Src->MarkY + dy;
          SetElementBoundingBox( ebp_108, ebp_96, &PCB->Font );
        }
      }
      while ( Src->PadN != Src->PadN );
      n++;
    }
  }
  }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return &eax[0].name[0];
}
void *CopyVia( PinTypePtr Via )
{
  int eax;
  PinTypePtr via = CreateNewVia( &PCB->Data, DeltaX + Via->X, DeltaY + Via->Y, Via->Thickness, Via->Clearance, Via->Mask, Via->DrillingHole, &Via->Name, "badarg" );
  if ( CreateNewVia( &PCB->Data, DeltaX + Via->X, DeltaY + Via->Y, Via->Thickness, Via->Clearance, Via->Mask, Via->DrillingHole, &Via->Name, "badarg" ) )
  {
    DrawVia( via, 0 );
    AddObjectToCreateUndoList( 1, (void*)via, (void*)via, (void*)via );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return (void*)via;
}
void *CopyLine( LayerTypePtr Layer, LineTypePtr Line )
{
  int eax;
  LineTypePtr line = CreateDrawnLineOnLayer( Layer, DeltaX + Line->Point1.X, DeltaY + Line->Point1.Y, DeltaX + Line->Point2.X, DeltaY + Line->Point2.Y, Line->Thickness, Line->Clearance, "badarg" );
  if ( CreateDrawnLineOnLayer( Layer, DeltaX + Line->Point1.X, DeltaY + Line->Point1.Y, DeltaX + Line->Point2.X, DeltaY + Line->Point2.Y, Line->Thickness, Line->Clearance, "badarg" ) )
  {
    if ( Line->Number )
    {
      line->Number = MyStrdup( &Line->Number, "CopyLine" );
    }
    DrawLine( Layer, line, 0 );
    AddObjectToCreateUndoList( 4, (void*)Layer, (void*)line, (void*)line );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return (void*)line;
}
void *CopyArc( LayerTypePtr Layer, ArcTypePtr Arc )
{
  int eax;
  ArcTypePtr arc = CreateNewArcOnLayer( Layer, DeltaX + Arc->X, DeltaY + Arc->Y, Arc->Width, Arc->Height, Arc->StartAngle, Arc->Delta, Arc->Thickness, Arc->Clearance, "badarg" );
  if ( CreateNewArcOnLayer( Layer, DeltaX + Arc->X, DeltaY + Arc->Y, Arc->Width, Arc->Height, Arc->StartAngle, Arc->Delta, Arc->Thickness, Arc->Clearance, "badarg" ) )
  {
    DrawArc( Layer, arc, 0 );
    AddObjectToCreateUndoList( 16384, (void*)Layer, (void*)arc, (void*)arc );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return (void*)arc;
}
void *CopyText( LayerTypePtr Layer, TextTypePtr Text )
{
  int eax;
  TextTypePtr text = CreateNewText( Layer, &PCB->Font, DeltaX + Text->X, DeltaY + Text->Y, Text->Direction, Text->Scale, &Text->TextString, "badarg" );
  DrawText( Layer, CreateNewText( Layer, &PCB->Font, DeltaX + Text->X, DeltaY + Text->Y, Text->Direction, Text->Scale, &Text->TextString, "badarg" ), 0 );
  AddObjectToCreateUndoList( 16, (void*)Layer, (void*)text, (void*)text );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return (void*)text;
}
void *CopyPolygon( LayerTypePtr Layer, PolygonTypePtr Polygon )
{
  int eax;
  PolygonTypePtr polygon = CreateNewPolygon( Layer, "badarg" );
  CopyPolygonLowLevel( CreateNewPolygon( Layer, "badarg" ), Polygon );
  MovePolygonLowLevel( polygon, DeltaX, DeltaY );
  if ( Layer->polygon_tree == 0 )
  {
    Layer->polygon_tree = r_create_tree( 0, 0, 0 );
  }
  r_insert_entry( &Layer->polygon_tree, (int)( &polygon->BoundingBox ), 0 );
  InitClip( &PCB->Data, Layer, polygon );
  DrawPolygon( Layer, polygon, 0 );
  AddObjectToCreateUndoList( 8, (void*)Layer, (void*)polygon, (void*)polygon );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return (void*)polygon;
}
void *CopyElement( ElementTypePtr Element )
{
  int eax;
  /* phantom */ Boolean didDraw;
  ElementTypePtr element = CopyElementLowLevel( *(int*)(PCB + 8716), ebp_36, Element, ebp_28, ebp_24, ebp_20 );
  AddObjectToCreateUndoList( 2, CopyElementLowLevel( *(int*)(PCB + 8716), ebp_36, Element, ebp_28, ebp_24, ebp_20 ), CopyElementLowLevel( *(int*)(PCB + 8716), ebp_36, Element, ebp_28, ebp_24, ebp_20 ), CopyElementLowLevel( *(int*)(PCB + 8716), ebp_36, Element, ebp_28, ebp_24, ebp_20 ) );
  if ( PCB->ElementOn && ( Settings.ShowSolderSide == ( ( element->Flags.f >> 7 ) & 1 ) || PCB->InvisibleObjectsOn ) )
  {
    DrawElementName( element, 0 );
    DrawElementPackage( element, 0 );
  }
  if ( PCB->PinOn )
  {
    DrawElementPinsAndPads( element, 0 );
  }
  return (void*)element;
}
// Lost vars at line 359 through condition folding
// Lost vars at line 374 through condition folding
Boolean CopyPastebufferToLayout( LocationType X, LocationType Y )
{
  int eax;
  int edx;
  Cardinal i;
  Boolean changed;
  DeltaY = Y - Buffers[ Settings.BufferNumber ].Y;
  DeltaX = X - Buffers[ Settings.BufferNumber ].X;
  if ( PCB->Data->LayerN != -2 )
  {
    i = 0;
  {
    while ( PCB->Data->Layer->On == 0 )
    {
      i++;
      if ( PCB->Data->LayerN + 2 <= i )
        goto B2;
      else
      {
      }
    }
    destlayer = PCB->Data + ( i * 92 ) + 76;
    if ( 0 )
    {
    }
    else
    if ( Buffers[ Settings.BufferNumber ].Data->Layer->LineN == 0 )
    {
      if ( *(int*)(( i * 92 ) + 92) == 0 && *(int*)(( i * 92 ) + 88) == 0 )
      {
      {
        Cardinal n = Buffers[ *(int*)(1 + 92) ].Data->Layer->TextN + -1;
        /* phantom */ TextTypePtr text;
        if ( Buffers[ *(int*)(1 + 92) ].Data->Layer->TextN + -1 != -1 )
        {
          do
          {
            n += -1;
            CopyText( destlayer, *ebp_28 + edi );
          }
          while ( n == -1 );
        }
      {
        Cardinal n = *(int*)(ebp_36 + ( i * 92 ) + 88) + -1;
        /* phantom */ PolygonTypePtr polygon;
        if ( *(int*)(ebp_36 + ( i * 92 ) + 88) + -1 != -1 )
        {
          do
          {
            n += -1;
            CopyPolygon( destlayer, *ebp_28 + edi );
          }
          while ( n == -1 );
        }
        i++;
      }
      }
      }
      else
      {
        Cardinal n;
        /* phantom */ LineTypePtr line;
      {
        Cardinal n = *(int*)(1 + 92) + -1;
        /* phantom */ ArcTypePtr arc;
        if ( Buffers[ *(int*)(1 + 92) ].Data->Layer->ArcN + -1 != -1 )
        {
          do
          {
            n += -1;
            CopyArc( destlayer, *ebp_28 + edi );
          }
          while ( n == -1 );
        }
      {
        Cardinal n = Buffers[ *(int*)(1 + 92) ].Data->Layer->TextN + -1;
        /* phantom */ TextTypePtr text;
      }
      }
      }
    }
    n = edi + -1;
    if ( edi + -1 == -1 )
    {
      Cardinal n;
      /* phantom */ LineTypePtr line;
    {
      Cardinal n = *(int*)(1 + 92) + -1;
      /* phantom */ ArcTypePtr arc;
    }
    }
    else
    {
      do
      {
        n += -1;
        CopyLine( destlayer, *ebp_28 + edi );
      }
      while ( n == -1 );
    {
      Cardinal n = *(int*)(1 + 92) + -1;
      /* phantom */ ArcTypePtr arc;
    }
    }
  }
  }
B2:;
  if ( PCB->PinOn && PCB->ElementOn && Buffers[ Settings.BufferNumber ].Data->ElementN + -1 != -1 )
  {
    changed = ( *(int*)(( i * 92 ) + 84) != 0 );
    while ( 1 )
    {
      element = ( Buffers[ Settings.BufferNumber ].Data->ElementN * 300 ) + -300 + -300 + Buffers[ Settings.BufferNumber ].Data->Element;
      if ( Settings.ShowSolderSide != ( ( element->Flags.f >> 7 ) & 1 ) && PCB->InvisibleObjectsOn == 0 )
        goto B38;
      else
      {
        *(int*)&changed = 1;
        CopyElement( element );
      }
B38:;
      n += -1;
      if ( n + -1 == -1 )
        break;
      else
      {
      }
    }
  }
  if ( PCB->ViaOn && sn )
  {
    n = 0;
    while ( 1 )
    {
      CopyVia( Buffers[ Settings.BufferNumber ].Data->Via + ( n * 76 ) );
      sn = Buffers[ Settings.BufferNumber ].Data->ViaN;
      if ( Buffers[ Settings.BufferNumber ].Data->ViaN == 0 || sn <= ( sn + n + 1 ) - Buffers[ Settings.BufferNumber ].Data->ViaN )
        goto B43;
      else
      {
        sn = Buffers[ Settings.BufferNumber ].Data->ViaN;
      }
    }
  }
B43:;
  if ( (unsigned char)( changed ) | ( Buffers[ Settings.BufferNumber ].Data->ViaN != 0 ) )
  {
    Draw( );
    IncrementUndoSerialNumber( );
  }
  return ( (unsigned char)( changed ) | ( Buffers[ Settings.BufferNumber ].Data->ViaN != 0 ) );
}
void *CopyObject( int Type, void *Ptr1, void *Ptr2, void *Ptr3, LocationType DX, LocationType DY )
{
  void *ptr;
  DeltaX = DX;
  DeltaY = DY;
  ptr = ObjectOperation( &CopyFunctions, Type, Ptr1, Ptr2, Ptr3 );
  IncrementUndoSerialNumber( );
  return ptr;
}
#if 0
#endif
