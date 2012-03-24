#include "move.c.h"
static LocationType DeltaX;
static LocationType DeltaY;
static LayerTypePtr Dest;
static Boolean MoreToCome;
static ObjectFunctionType MoveFunctions = { &MoveLine, &MoveText, &MovePolygon, &MoveVia, &MoveElement, &MoveElementName, 0, 0, &MoveLinePoint, &MovePolygonPoint, &MoveArc, 0 }
;
static ObjectFunctionType MoveToLayerFunctions = { &MoveLineToLayer, &MoveTextToLayer, &MovePolygonToLayer, 0, 0, 0, 0, 0, 0, 0, &MoveArcToLayer, &MoveRatToLayer }
;
struct mptlc mptlc;
static char movelayer_syntax[19] = { 'M', 'o', 'v', 'e', 'L', 'a', 'y', 'e', 'r', '(', 'o', 'l', 'd', ',', 'n', 'e', 'w', ')' };
static char movelayer_help[29] = { 'M', 'o', 'v', 'e', 's', '/', 'C', 'r', 'e', 'a', 't', 'e', 's', '/', 'D', 'e', 'l', 'e', 't', 'e', 's', ' ', 'L', 'a', 'y', 'e', 'r', 's' };
HID_Action move_action_list[1] = { { "MoveLayer", 0, &MoveLayerAction, &movelayer_help, &movelayer_syntax }
 };
void MoveElementLowLevel( DataTypePtr Data, ElementTypePtr Element, LocationType DX, LocationType DY )
{
  int eax;
  int ecx;
  int edx;
  if ( Data )
  {
    r_delete_entry( &Data->element_tree, (int)( &Element->BoundingBox ) );
  }
{
  Cardinal n = Element->LineN + -1;
  LineTypePtr line;
  if ( Element->LineN + -1 != -1 )
  {
    n = n;
    do
    {
      n += -1;
      line = ( Element->LineN * 88 ) + -88 + -88 + Element->Line;
      SetLineBoundingBox( Element->Line + ( Element->LineN * 88 ) + -88 + -88 );
    }
    while ( n == -1 );
    Element = Element;
  }
{
  Cardinal n;
  Cardinal sn;
  PinTypePtr pin;
  if ( Element->PinN )
  {
    Data = Data;
    n = 0;
    Element->BoundingBox.X1 = DX;
    while ( 1 )
    {
      pin = Element->Pin + ( n * 76 );
      if ( Data )
      {
        r_delete_entry( &Data->pin_tree, (int)( &pin->BoundingBox ) );
        RestoreToPolygon( Data, 256, (void*)Element, (void*)pin );
      }
      pin->X += DX;
      pin->Y += DY;
      pin = pin->BoundingBox.X1 + DX;
      pin->BoundingBox.Y1 += DY;
      pin->BoundingBox.X2 += DX;
      pin->BoundingBox.Y2 += DY;
      if ( Data )
      {
        r_insert_entry( &Data->pin_tree, (int)( &pin->BoundingBox ), 0 );
        ClearFromPolygon( Data, 256, (void*)Element, (void*)pin );
      }
      sn = Element->PinN;
      if ( Element->PinN == 0 || sn <= ( sn + n + 1 ) - Element->PinN )
        break;
      else
      {
      }
    }
    Element = Element;
    DX = DX;
  }
{
  Cardinal n;
  Cardinal sn;
  PadTypePtr pad;
  Data = Data;
  n = 0;
  while ( 1 )
  {
    sn = Data->Layer[1].arc_tree;
    do
    {
      if ( sn == 0 || sn <= n )
      {
        DY = DY;
      {
        Cardinal n;
        /* phantom */ ArcTypePtr arc;
        *(int*)(*(int*)(esi + 248)) = Element->ArcN;
        DX = DX;
        n = Element->ArcN + -1;
        if ( Element->ArcN + -1 != -1 )
        {
          do
          {
            n += -1;
            Element->Arc->BoundingBox.X1 += DX;
            Element->Arc->BoundingBox.X1 += DY;
            Element->Arc->BoundingBox.X1 += DX;
            Element->Arc->BoundingBox.X1 += DY;
            Element->Arc->BoundingBox.X1 += DX;
            Element->Arc->BoundingBox.X1 += DY;
            Element->Arc->BoundingBox.X1 = Element->Arc + ( Element->ArcN * 68 ) + -68 + -68;
          }
          while ( n + -1 != -1 );
        }
        Data = Data;
      {
        do
        {
          Cardinal n;
          TextTypePtr text = Element->BoundingBox.X1 + 36;
          if ( Data && Data->pad_tree )
          {
            r_delete_entry( &PCB->Data->name_tree[ n ], Element->BoundingBox.X1 + 36 );
            Data = Data;
          }
          Element->Name[1].BoundingBox.X1 += DX;
          Element->Name[1].BoundingBox.Y1 += DY;
          Element->Name[1].BoundingBox.X2 += DX;
          Element->Name[1].BoundingBox.Y2 += DY;
          Element->Name[1].X += DX;
          Element->Name[1].Y += DY;
          if ( Data && Data->pad_tree )
          {
            r_insert_entry( &PCB->Data->name_tree[ n ], (int)( &text->BoundingBox ), 0 );
            Data = Data;
          }
          n += -1;
        }
        while ( n + -1 != -1 );
        Element = Element;
        Element->BoundingBox.Y1 += DY;
        Element->BoundingBox.Y2 += DY;
        Element->VBox.Y1 += DY;
        Element->VBox.Y2 += DY;
        Element->MarkY += DY;
        Element->BoundingBox.X1 += DX;
        Element->BoundingBox.X2 += DX;
        Element->VBox.X1 += DX;
        Element->VBox.X2 += DX;
        Element->MarkX += DX;
        if ( Data )
        {
          DX = 0;
          Data = &Data->element_tree->root;
        }
        break;
      }
      }
      }
      else
      {
        pad = Element->Pad + ( n * 104 );
        if ( Data )
        {
          r_delete_entry( &Data->pad_tree, (int)( &pad->BoundingBox ) );
          RestoreToPolygon( Data, 512, (void*)Element, (void*)pad );
          pad->Point1.X += DX;
          pad->Point1.Y += DY;
          pad->Point2.X += DX;
          pad->Point2.Y += DY;
          SetPadBoundingBox( pad );
          r_insert_entry( &Data->pad_tree, (int)( &pad->BoundingBox ), 0 );
          ClearFromPolygon( Data, 512, (void*)Element, (void*)pad );
          sn = Element->PadN;
        }
        else
        {
          pad->Point1.X += DX;
          pad->Point2.X += DX;
          pad->Point1.Y += DY;
          pad->Point2.Y += DY;
          SetPadBoundingBox( pad );
          sn = Element->PadN;
          if ( Element->PadN != Data->Layer[1].arc_tree )
            continue;
        }
      }
    }
    while ( Element->PadN != Data->Layer[1].arc_tree );
    n++;
  }
}
}
}
}
void *MoveElementName( ElementTypePtr Element )
{
  int eax;
  int ecx;
  int edx;
  if ( PCB->ElementOn == 0 || ( Settings.ShowSolderSide != ( ( Element->Flags.f >> 7 ) & 1 ) && PCB->InvisibleObjectsOn == 0 ) )
  {
  {
    while ( 1 )
    {
      Cardinal n;
      TextTypePtr text = Element->BoundingBox.X1 + 36;
      if ( PCB->Data->name_tree[0] )
      {
        r_delete_entry( &PCB->Data->name_tree[0], (int)( &text->BoundingBox ) );
      }
      Element->Name[1].BoundingBox.X1 += DeltaX;
      Element->Name[1].BoundingBox.Y1 += DeltaY;
      Element->Name[1].BoundingBox.X2 += DeltaX;
      Element->Name[1].BoundingBox.Y2 += DeltaY;
      Element->Name[1].X += DeltaX;
      Element->Name[1].Y += DeltaY;
      if ( PCB->Data->ViaN )
        r_insert_entry( &PCB->Data->ViaN, n + 12 + 2, text );
      n += -1;
      if ( n + -1 == -1 )
        break;
    }
    return (void*)Element;
  }
  }
  else
  {
    EraseElementName( Element );
  {
    do
    {
      Cardinal n;
      TextTypePtr text = Element->BoundingBox.X1 + 36;
      if ( PCB->Data->ViaN )
      {
        r_delete_entry( &PCB->Data->ViaN, n + 12 + 2 );
      }
      Element->Name[1].BoundingBox.X1 += DeltaX;
      Element->Name[1].BoundingBox.Y1 += DeltaY;
      Element->Name[1].BoundingBox.X2 += DeltaX;
      Element->Name[1].BoundingBox.Y2 += DeltaY;
      Element->Name[1].X += DeltaX;
      Element->Name[1].Y += DeltaY;
      if ( PCB->Data->ViaN )
        r_insert_entry( &PCB->Data->ViaN, n + 12 + 2, text );
      n += -1;
    }
    while ( n + -1 != -1 );
    Element = Element;
    DrawElementName( Element, 0 );
    Draw( );
    return (void*)Element;
  }
  }
}
void *MoveElement( ElementTypePtr Element )
{
  int eax;
  Boolean didDraw;
  if ( PCB->ElementOn && ( Settings.ShowSolderSide == ( ( Element->Flags.f >> 7 ) & 1 ) || PCB->InvisibleObjectsOn ) )
  {
    EraseElement( Element );
    MoveElementLowLevel( &PCB->Data, Element, DeltaX, DeltaY );
    DrawElementName( Element, 0 );
    DrawElementPackage( Element, 0 );
    *(int*)&didDraw = 1;
    if ( PCB->PinOn )
      DrawElementPinsAndPads( Element, 0 );
      Draw( );
      return (void*)Element;
  }
  else
  {
    if ( PCB->PinOn )
    {
      EraseElementPinsAndPads( Element );
    }
    MoveElementLowLevel( &PCB->Data, Element, DeltaX, DeltaY );
    *(int*)&didDraw = 0;
    if ( PCB->PinOn )
      DrawElementPinsAndPads( Element, 0 );
      Draw( );
      return (void*)Element;
  }
  if ( didDraw & 255 )
  {
    Draw( );
    return (void*)Element;
  }
  return (void*)Element;
}
void *MoveVia( PinTypePtr Via )
{
  int eax;
  r_delete_entry( &PCB->Data->via_tree, (int)( &Via->BoundingBox ) );
  RestoreToPolygon( &PCB->Data, 1, (void*)Via, (void*)Via );
  Via->Y += DeltaY;
  Via->BoundingBox.Y1 += DeltaY;
  Via->BoundingBox.Y2 += DeltaY;
  Via->X += DeltaX;
  Via->BoundingBox.X1 += DeltaX;
  Via->BoundingBox.X2 += DeltaX;
  if ( PCB->ViaOn )
  {
    EraseVia( Via );
  }
  r_insert_entry( &PCB->Data->via_tree, (int)( &Via->BoundingBox ), 0 );
  ClearFromPolygon( &PCB->Data, 1, (void*)Via, (void*)Via );
  if ( PCB->ViaOn )
  {
    DrawVia( Via, 0 );
    Draw( );
  }
  return (void*)Via;
}
void *MoveLine( LayerTypePtr Layer, LineTypePtr Line )
{
  if ( Layer->On )
    EraseLine( Line );
  RestoreToPolygon( &PCB->Data, 4, (void*)Layer, (void*)Line );
  r_delete_entry( &Layer->line_tree, (int)( &Line->BoundingBox ) );
  Line->Point1.X += DeltaX;
  Line->Point2.X += DeltaX;
  Line->Point1.Y += DeltaY;
  Line->Point2.Y += DeltaY;
  SetLineBoundingBox( Line );
  r_insert_entry( &Layer->line_tree, (int)( &Line->BoundingBox ), 0 );
  ClearFromPolygon( &PCB->Data, 4, (void*)Layer, (void*)Line );
  if ( Layer->On )
  {
    DrawLine( Layer, Line, 0 );
    Draw( );
  }
  return (void*)Line;
}
void *MoveArc( LayerTypePtr Layer, ArcTypePtr Arc )
{
  RestoreToPolygon( &PCB->Data, 16384, (void*)Layer, (void*)Arc );
  r_delete_entry( &Layer->arc_tree, (int)( &Arc->BoundingBox ) );
  if ( Layer->On )
  {
    EraseArc( Arc );
    Arc->X += DeltaX;
    Arc->Y += DeltaY;
    Arc = Arc->BoundingBox.X1 + DeltaX;
    Arc->BoundingBox.Y1 += DeltaY;
    Arc->BoundingBox.X2 += DeltaX;
    Arc->BoundingBox.Y2 += DeltaY;
    DrawArc( Layer, Arc, 0 );
    Draw( );
  }
  else
  {
    Arc->X += DeltaX;
    Arc->Y += DeltaY;
    Arc = Arc->BoundingBox.X1 + DeltaX;
    Arc->BoundingBox.Y1 += DeltaY;
    Arc->BoundingBox.X2 += DeltaX;
    Arc->BoundingBox.Y2 += DeltaY;
  }
  r_insert_entry( &Layer->arc_tree, (int)( &Arc->BoundingBox ), 0 );
  ClearFromPolygon( &PCB->Data, 16384, (void*)Layer, (void*)Arc );
  return (void*)Arc;
}
void *MoveText( LayerTypePtr Layer, TextTypePtr Text )
{
  RestoreToPolygon( &PCB->Data, 16, (void*)Layer, (void*)Text );
  r_delete_entry( &Layer->text_tree, (int)( &Text->BoundingBox ) );
  if ( Layer->On )
  {
    EraseText( Layer, Text );
    Text = Text->BoundingBox.X1 + DeltaX;
    Text->BoundingBox.Y1 += DeltaY;
    Text->BoundingBox.X2 += DeltaX;
    Text->BoundingBox.Y2 += DeltaY;
    Text->X += DeltaX;
    Text->Y += DeltaY;
    DrawText( Layer, Text, 0 );
    Draw( );
  }
  else
  {
    Text = Text->BoundingBox.X1 + DeltaX;
    Text->BoundingBox.Y1 += DeltaY;
    Text->BoundingBox.X2 += DeltaX;
    Text->BoundingBox.Y2 += DeltaY;
    Text->X += DeltaX;
    Text->Y += DeltaY;
  }
  r_insert_entry( &Layer->text_tree, (int)( &Text->BoundingBox ), 0 );
  ClearFromPolygon( &PCB->Data, 16, (void*)Layer, (void*)Text );
  return (void*)Text;
}
void MovePolygonLowLevel( PolygonTypePtr Polygon, LocationType DeltaX, LocationType DeltaY )
{
  int eax;
  int ecx;
  int ebx;
{
  Cardinal n = Polygon->PointN + -1;
  /* phantom */ PointTypePtr point;
  if ( Polygon->PointN + -1 != -1 )
  {
    Polygon->PointN = Polygon->Points + ( Polygon->PointN * 20 ) + -20;
    do
    {
      n += -1;
      Polygon->Points->X += DeltaX;
      Polygon->Points->X += DeltaY;
      Polygon->Points->X = Polygon->Points + ( Polygon->PointN * 20 ) + -20 + -20;
    }
    while ( n + -1 != -1 );
  }
  Polygon = Polygon->BoundingBox.X1 + DeltaX;
  Polygon->BoundingBox.Y1 += DeltaY;
  Polygon->BoundingBox.X2 += DeltaX;
  Polygon->BoundingBox.Y2 += DeltaY;
  return;
}
}
void *MovePolygon( LayerTypePtr Layer, PolygonTypePtr Polygon )
{
  if ( Layer->On )
    ErasePolygon( Polygon );
  r_delete_entry( &Layer->polygon_tree, (int)( &Polygon->BoundingBox ) );
  MovePolygonLowLevel( Polygon, DeltaX, DeltaY );
  r_insert_entry( &Layer->polygon_tree, (int)( &Polygon->BoundingBox ), 0 );
  InitClip( &PCB->Data, Layer, Polygon );
  if ( Layer->On )
  {
    DrawPolygon( Layer, Polygon, 0 );
    Draw( );
  }
  return (void*)Polygon;
}
void *MoveLinePoint( LayerTypePtr Layer, LineTypePtr Line, PointTypePtr Point )
{
  int eax;
  if ( Layer )
  {
    if ( Layer->On )
      EraseLine( Line );
    RestoreToPolygon( &PCB->Data, 4, (void*)Layer, (void*)Line );
    r_delete_entry( &Layer->line_tree, (int)( &Line->BoundingBox ) );
    Point = Point->X + DeltaX;
    Point->Y += DeltaY;
    SetLineBoundingBox( Line );
    r_insert_entry( &Layer->line_tree, (int)( &Line->BoundingBox ), 0 );
    ClearFromPolygon( &PCB->Data, 4, (void*)Layer, (void*)Line );
    if ( Layer->On )
    {
      DrawLine( Layer, Line, 0 );
      Draw( );
    }
  }
  else
  {
    if ( PCB->RatOn )
    {
      EraseRat( &Line->BoundingBox.X1 );
    }
    r_delete_entry( &PCB->Data->rat_tree, (int)( &Line->BoundingBox ) );
    Point = Point->X + DeltaX;
    Point->Y += DeltaY;
    SetLineBoundingBox( Line );
    r_insert_entry( &PCB->Data->rat_tree, (int)( &Line->BoundingBox ), 0 );
    if ( PCB->RatOn )
    {
      DrawRat( &Line->BoundingBox.X1, 0 );
      Draw( );
    }
  }
  return (void*)Line;
}
void *MovePolygonPoint( LayerTypePtr Layer, PolygonTypePtr Polygon, PointTypePtr Point )
{
  int esi;
  int edi;
  if ( Layer->On )
    ErasePolygon( Polygon );
  r_delete_entry( &Layer->polygon_tree, (int)( &Polygon->BoundingBox ) );
  Point = Point->X + DeltaX;
  Point->Y += DeltaY;
  SetPolygonBoundingBox( Polygon );
  r_insert_entry( &Layer->polygon_tree, (int)( &Polygon->BoundingBox ), 0 );
  RemoveExcessPolygonPoints( Layer, Polygon );
  InitClip( &PCB->Data, Layer, Polygon );
  if ( Layer->On )
  {
    DrawPolygon( Layer, Polygon, 0 );
    Draw( );
  }
  return (void*)Point;
}
void *MoveLineToLayerLowLevel( LayerTypePtr Source, LineTypePtr Line, LayerTypePtr Destination )
{
  LineTypePtr new;
  r_delete_entry( &Source->line_tree, (int)( &Line->BoundingBox ) );
  new = GetLineMemory( Destination );
  memcpy( GetLineMemory( Destination ), Line, 88 );
  Source->LineN += -1;
  memcpy( Line, Source->Line + ( ( Source->LineN + -1 ) * 88 ), 88 );
  r_substitute( &Source->line_tree, Source->Line + ( Source->LineN * 88 ), (int)( &Line->BoundingBox ) );
  mymemset( Source->Line + ( Source->LineN * 88 ), 0, 88 );
  if ( Destination->line_tree == 0 )
  {
    Destination->line_tree = r_create_tree( 0, 0, 0 );
  }
  r_insert_entry( &Destination->line_tree, GetLineMemory( Destination ), 0 );
  return GetLineMemory( Destination );
}
void *MoveArcToLayerLowLevel( LayerTypePtr Source, ArcTypePtr Arc, LayerTypePtr Destination )
{
  ArcTypePtr new;
  r_delete_entry( &Source->arc_tree, (int)( &Arc->BoundingBox ) );
  new = GetArcMemory( Destination );
  memcpy( GetArcMemory( Destination ), Arc, 68 );
  Source->ArcN += -1;
  memcpy( Arc, Source->Arc + ( ( Source->ArcN + -1 ) * 68 ), 68 );
  r_substitute( &Source->arc_tree, Source->Arc + ( Source->ArcN * 68 ), (int)( &Arc->BoundingBox ) );
  mymemset( Source->Arc + ( Source->ArcN * 68 ), 0, 68 );
  if ( Destination->arc_tree == 0 )
  {
    Destination->arc_tree = r_create_tree( 0, 0, 0 );
  }
  r_insert_entry( &Destination->arc_tree, GetArcMemory( Destination ), 0 );
  return GetArcMemory( Destination );
}
void *MoveArcToLayer( LayerTypePtr Layer, ArcTypePtr Arc )
{
  ArcTypePtr new;
  Message( "Sorry, the object is locked\n" );
  return 0;
}
void *MoveRatToLayer( RatTypePtr Rat )
{
  int eax;
  LineTypePtr new = CreateNewLineOnLayer( Dest, Rat->Point1.X, Rat->Point1.Y, Rat->Point2.X, Rat->Point2.Y, Settings.LineThickness, Settings.Keepaway * 2, Rat->Flags );
  if ( ( PCB->Flags.f/*.2_2of4*/ & 8 ) & 255 )
    new->Flags.f |= 32;
  if ( new )
  {
    AddObjectToCreateUndoList( 4, (void*)Dest, (void*)new, (void*)new );
    if ( PCB->RatOn )
      EraseRat( Rat );
    MoveObjectToRemoveUndoList( 32, (void*)Rat, (void*)Rat, (void*)Rat );
    DrawLine( Dest, new, 0 );
    Draw( );
    return (void*)new;
  }
}
int moveline_callback( BoxType *b, void *cl )
{
  /* phantom */ struct via_info *i;
  PinTypePtr via;
  if ( CreateNewVia( &PCB->Data, *(int*)(cl), ((int*)cl), Settings.ViaThickness, Settings.Keepaway * 2, 0, Settings.ViaDrillingHole, 0, "badarg" ) )
  {
    AddObjectToCreateUndoList( 1, CreateNewVia( &PCB->Data, *(int*)(cl), ((int*)cl), Settings.ViaThickness, Settings.Keepaway * 2, 0, Settings.ViaDrillingHole, 0, "badarg" ), CreateNewVia( &PCB->Data, *(int*)(cl), ((int*)cl), Settings.ViaThickness, Settings.Keepaway * 2, 0, Settings.ViaDrillingHole, 0, "badarg" ), CreateNewVia( &PCB->Data, *(int*)(cl), ((int*)cl), Settings.ViaThickness, Settings.Keepaway * 2, 0, Settings.ViaDrillingHole, 0, "badarg" ) );
    DrawVia( via, 0 );
  }
  __longjmp_chk( cl + 8 + 8, 1 );
}
void *MoveLineToLayer( LayerTypePtr Layer, LineTypePtr Line )
{
  struct via_info info;
  BoxType sb;
  LineTypePtr new;
  void *ptr1, *ptr2, *ptr3;
  Message( "Sorry, the object is locked\n" );
  return 0;
}
void *MoveTextToLayerLowLevel( LayerTypePtr Source, TextTypePtr Text, LayerTypePtr Destination )
{
  TextTypePtr new = GetTextMemory( Destination );
  RestoreToPolygon( &PCB->Data, 16, (void*)Source, (void*)Text );
  r_delete_entry( &Source->text_tree, (int)( &Text->BoundingBox ) );
  new = &Text->BoundingBox.X1;
  new->BoundingBox.Y1 = Text->BoundingBox.Y1;
  new->BoundingBox.X2 = Text->BoundingBox.X2;
  new->BoundingBox.Y2 = Text->BoundingBox.Y2;
  new->ID = Text->ID;
  new->Flags.f = Text->Flags.f;
  new->Flags.t[0] = Text->Flags.t[0];
  new->Flags.t[4] = Text->Flags.t[4];
  new->net = Text->net;
  new->Scale = Text->Scale;
  new->X = Text->X;
  new->Y = Text->Y;
  new->Direction = Text->Direction;
  new->TextString = Text->TextString;
  new->Element = Text->Element;
  Source->TextN += -1;
  Text->BoundingBox.X1 = Source->Text->BoundingBox.X1;
  Text->BoundingBox.Y1 = Source->Text->BoundingBox.X1;
  Text->BoundingBox.X2 = Source->Text->BoundingBox.X1;
  Text->BoundingBox.Y2 = Source->Text->BoundingBox.X1;
  Text->ID = Source->Text->BoundingBox.X1;
  Text->Flags.f = Source->Text->BoundingBox.X1;
  Text->Flags.t[0] = Source->Text->BoundingBox.X1;
  Text->Flags.t[4] = Source->Text->BoundingBox.X1;
  Text->net = Source->Text->BoundingBox.X1;
  Text->Scale = Source->Text->BoundingBox.X1;
  Text->X = Source->Text->BoundingBox.X1;
  Text->Y = Source->Text->BoundingBox.X1;
  Text->Direction = Source->Text->BoundingBox.X1;
  Text->TextString = Source->Text->BoundingBox.X1;
  Text->Element = Source->Text->BoundingBox.X1;
  r_substitute( &Source->text_tree, Source->Text + ( Source->TextN * 60 ), (int)( &Text->BoundingBox ) );
  mymemset( Source->Text + ( Source->TextN * 60 ), 0, 60 );
  if ( GetLayerGroupNumberByNumber( PCB->Data->LayerN ) == GetLayerGroupNumberByPointer( Destination ) )
    new->Flags.f |= 128;
  else
    new->Flags.f &= -129;
  SetTextBoundingBox( &PCB->Font, new );
  if ( Destination->text_tree == 0 )
  {
    Destination->text_tree = r_create_tree( 0, 0, 0 );
  }
  r_insert_entry( &Destination->text_tree, (int)( &new->BoundingBox ), 0 );
  ClearFromPolygon( &PCB->Data, 16, (void*)Destination, (void*)new );
  return (void*)new;
}
void *MoveTextToLayer( LayerTypePtr Layer, TextTypePtr Text )
{
  TextTypePtr new;
  Message( "Sorry, the object is locked\n" );
  return 0;
}
void *MovePolygonToLayerLowLevel( DataTypePtr Source, PolygonTypePtr Polygon, LayerTypePtr Destination )
{
  PolygonTypePtr new = GetPolygonMemory( Destination );
  r_delete_entry( &Source->name_tree[1], (int)( &Polygon->BoundingBox ) );
  new = &Polygon->BoundingBox.X1;
  new->BoundingBox.Y1 = Polygon->BoundingBox.Y1;
  new->BoundingBox.X2 = Polygon->BoundingBox.X2;
  new->BoundingBox.Y2 = Polygon->BoundingBox.Y2;
  new->ID = Polygon->ID;
  new->Flags.f = Polygon->Flags.f;
  new->Flags.t[0] = Polygon->Flags.t[0];
  new->Flags.t[4] = Polygon->Flags.t[4];
  new->net = Polygon->net;
  new->PointN = Polygon->PointN;
  new->PointMax = Polygon->PointMax;
  new->Clipped = Polygon->Clipped;
  new->NoHoles = Polygon->NoHoles;
  new->NoHolesValid = Polygon->NoHolesValid;
  new->Points = Polygon->Points;
  Source->ElementMax += -1;
  Polygon->BoundingBox.X1 = Source->element_tree->root;
  Polygon->BoundingBox.Y1 = Source->element_tree->root;
  Polygon->BoundingBox.X2 = Source->element_tree->root;
  Polygon->BoundingBox.Y2 = Source->element_tree->root;
  Polygon->ID = Source->element_tree->root;
  Polygon->Flags.f = Source->element_tree->root;
  Polygon->Flags.t[0] = Source->element_tree->root;
  Polygon->Flags.t[4] = Source->element_tree->root;
  Polygon->net = Source->element_tree->root;
  Polygon->PointN = Source->element_tree->root;
  Polygon->PointMax = Source->element_tree->root;
  Polygon->Clipped = Source->element_tree->root;
  Polygon->NoHoles = Source->element_tree->root;
  Polygon->NoHolesValid = Source->element_tree->root;
  Polygon->Points = Source->element_tree->root;
  r_substitute( &Source->name_tree[1], Source->element_tree + ( Source->ElementMax * 60 ), (int)( &Polygon->BoundingBox ) );
  mymemset( Source->element_tree + ( Source->ElementMax * 60 ), 0, 60 );
  if ( Destination->polygon_tree == 0 )
  {
    Destination->polygon_tree = r_create_tree( 0, 0, 0 );
  }
  r_insert_entry( &Destination->polygon_tree, (int)( &new->BoundingBox ), 0 );
  return (void*)new;
}
int mptl_pin_callback( BoxType *b, void *cl )
{
  /* phantom */ struct mptlc *d;
  /* phantom */ PinTypePtr pin;
  if ( ( b[ ( ( ((int*)cl) >> 1 ) >> 4 ) + 1 ].X2/*.1_1of4*/ & ( 15 << ( ( ((int*)cl) & 1 ) << 2 ) ) ) == 0 || ( IsPointInPolygon( b[3].Y1, b[3].X2, b[2].X2 + b[2].Y1 + 2, &((struct mptlc*)cl)->polygon ) & 255 ) == 0 )
  {
  }
  if ( ((struct mptlc*)cl)->type == 256 )
    AddObjectToFlagUndoList( 256, &b[4].Y1, (void*)b, (void*)b );
  else
    AddObjectToFlagUndoList( 1, (void*)b, (void*)b, (void*)b );
  *(char*)(b + ( ((struct mptlc*)cl)->dnum >> 1 ) + 24) = ( (unsigned char)( ~( 15 << ( ( ((struct mptlc*)cl)->dnum & 1 ) << 2 ) ) ) & *(char*)(b + ( ((struct mptlc*)cl)->dnum >> 1 ) + 24) ) | ( ( ( *(char*)(b + ( cl >> 1 ) + 24) >> (unsigned char)( ( cl & 1 ) << 2 ) ) & 15 ) << ( ( ((struct mptlc*)cl)->dnum & 1 ) << 2 ) );
  *(char*)(b + ( cl >> 1 ) + 24) &= (unsigned char)( ~( 15 << ( ( cl & 1 ) << 2 ) ) );
  return 1;
}
void *MovePolygonToLayer( LayerTypePtr Layer, PolygonTypePtr Polygon )
{
  PolygonTypePtr new;
  struct mptlc d;
  Message( "Sorry, the object is locked\n" );
  return 0;
}
void *MoveObject( int Type, void *Ptr1, void *Ptr2, void *Ptr3, LocationType DX, LocationType DY )
{
  int ebx;
  int esi;
  int edi;
  /* phantom */ void *result;
  DeltaX = DX;
  DeltaY = DY;
  AddObjectToMoveUndoList( Type, Ptr1, Ptr2, Ptr3, ebx, esi );
  Ptr3 = Ptr2;
  Ptr2 = Ptr1;
  Ptr1 = &Type;
  DX = Ptr3;
  Type = MoveFunctions.Line;
}
void *MoveObjectAndRubberband( int Type, void *Ptr1, void *Ptr2, void *Ptr3, LocationType DX, LocationType DY )
{
  RubberbandTypePtr ptr;
  void *ptr2;
  DeltaX = DX;
  DeltaY = DY;
  if ( DY == 0 && DX == 0 )
  {
    return ptr2;
  }
  ptr = Crosshair.AttachedObject.Rubberband;
  if ( Crosshair.AttachedObject.RubberbandN )
  {
    do
    {
      ptr->Line->Flags.f &= -513;
      AddObjectToMoveUndoList( 4096, &ptr->Layer->Name[0], &ptr->Line, &ptr->MovedPoint, DX, DY );
      ptr++;
      MoveLinePoint( &ptr->Layer->Name[0], &ptr->Line, &ptr->MovedPoint );
      Crosshair.AttachedObject.RubberbandN += -1;
    }
    while ( Crosshair.AttachedObject.RubberbandN + -1 == 0 );
  }
  AddObjectToMoveUndoList( Type, Ptr1, Ptr2, Ptr3, DX, DY );
  ptr2 = ObjectOperation( &MoveFunctions, Type, Ptr1, Ptr2, Ptr3 );
  IncrementUndoSerialNumber( );
  return ptr2;
}
void *MoveObjectToLayer( int Type, void *Ptr1, void *Ptr2, void *Ptr3, LayerTypePtr Target, Boolean enmasse )
{
  void *result;
  Dest = Target;
  MoreToCome = enmasse;
  result = ObjectOperation( &MoveToLayerFunctions, Type, Ptr1, Ptr2, Ptr3 );
  IncrementUndoSerialNumber( );
  return result;
}
Boolean MoveSelectedObjectsToLayer( LayerTypePtr Target )
{
  Boolean changed = Target;
  Dest = Target;
  MoreToCome = 1;
  return SelectedOperation( &MoveToLayerFunctions, 1, -1 );
}
void move_one_thermal( int old_index, int new_index, PinType *pin )
{
  int edx;
  int t1, i;
  int oi = 15, ni;
  t1 = 0;
  if ( !1 )
  {
    t1 = *(char*)(pin->BoundingBox.X1 + ( old_index / 2 ) + 24);
    oi = old_index;
    t1 = t1 >> (unsigned char)( ( __MOD(old_index,2) ) << 2 );
    t1 &= 15;
  }
  ni = new_index != -1 ? 15 : new_index;
  i = oi;
  if ( oi < ni )
  {
    do
    {
      i++;
      *(char*)(pin + ( i / 2 ) + 24) = ( (unsigned char)( ~( 15 << ( ( __MOD(i,2) ) << 2 ) ) ) & *(char*)(pin + ( i / 2 ) + 24) ) | ( ( ( *(char*)(pin + ( ( i + 1 ) / 2 ) + 24) >> (unsigned char)( ( __MOD(( i + 1 ),2) ) << 2 ) ) & 15 ) << ( ( __MOD(i,2) ) << 2 ) );
    }
    while ( i + 1 < ni );
  }
  else
  if ( ccdep2 < ccdep1 )
  {
    do
    {
      i += -1;
      *(char*)(pin + ( i / 2 ) + 24) = ( (unsigned char)( ~( 15 << ( ( __MOD(i,2) ) << 2 ) ) ) & *(char*)(pin + ( i / 2 ) + 24) ) | ( ( ( *(char*)(pin + ( ( i + -1 ) / 2 ) + 24) >> (unsigned char)( ( __MOD(( i + -1 ),2) ) << 2 ) ) & 15 ) << ( ( __MOD(i,2) ) << 2 ) );
    }
    while ( ni < i + -1 );
  }
  if ( new_index != -1 )
  {
    *(char*)(pin + ( new_index / 2 ) + 24) = ( (unsigned char)( ~( 15 << ( ( __MOD(new_index,2) ) << 2 ) ) ) & *(char*)(pin + ( new_index / 2 ) + 24) ) | ( t1 << ( ( __MOD(new_index,2) ) << 2 ) );
    return;
  }
  *(char*)(pin + ( ni / 2 ) + 24) &= (unsigned char)( ~( 15 << ( ( __MOD(ni,2) ) << 2 ) ) );
  return;
}
int MoveLayer( int old_index, int new_index )
{
  int eax;
  int ecx;
  int edx;
  int ebp_208;
  int groups[18], l, g;
  LayerType saved_layer;
  int saved_group;
  AddLayerChangeToUndoList( old_index, new_index );
  IncrementUndoSerialNumber( );
  if ( old_index >= -1 )
  {
    saved_group = PCB->Data;
    ebp_208 = PCB->Data->LayerN;
    if ( old_index < PCB->Data->LayerN )
    {
      if ( new_index < -1 || new_index > 15 || ebp_208 < new_index )
      {
        Message( "Invalid new layer %d for move: must be -1..%d\n", new_index, ebp_208 );
      }
      g = 0;
      if ( old_index != new_index )
      {
        do
        {
          if ( PCB->Font.Valid )
          {
            l = 0;
            do
            {
              groups[ PCB->LayerGroups.Entries[0][1] ] = g;
              l++;
            }
            while ( PCB->Font.Valid != l + 1 );
          }
          g++;
        }
        while ( g + 1 != 16 );
        if ( old_index == -1 )
        {
          /* phantom */ LayerTypePtr lp;
          if ( ebp_208 == 16 )
          {
            Message( "No room for new layers\n" );
          }
          memmove( saved_group + 76 + ( ( new_index + 1 ) * 92 ), saved_group + 76 + ( new_index * 92 ), ( ( ebp_208 + 2 ) - new_index ) * 92 );
          memmove( groups, &groups[ new_index ], ( ( PCB->Data->LayerN - new_index ) + 2 ) * 4 );
          PCB->Data->LayerN++;
          mymemset( saved_group + ( new_index * 92 ) + 76, 0, 92 );
          if ( PCB->Data->LayerN > 0 )
          {
            l = 0;
            do
            {
              if ( new_index <= LayerStack[ l ] )
                LayerStack[ l ]++;
              l++;
            }
            while ( PCB->Data->LayerN != l + 1 );
          }
        }
        else
        {
          if ( new_index != -1 )
          {
            ebp_208 = old_index * 92;
            memcpy( saved_layer.Name, saved_group + ( old_index * 92 ) + 76, 92 );
            saved_group = groups[ old_index ];
            if ( old_index < new_index )
            {
              memmove( ebp_208 + PCB->Data + 76, PCB->Data + 76 + ( ( old_index + 1 ) * 92 ), ( new_index - old_index ) * 92 );
              memmove( &groups[ old_index ], &groups[ old_index + 1 ], ( new_index - old_index ) << 2 );
            }
            else
            {
              memmove( PCB->Data + 76 + ( ( new_index + 1 ) * 92 ), PCB->Data + 76 + ( new_index * 92 ), ( old_index - new_index ) * 92 );
              memmove( &groups[ new_index + 1 ], &groups[ new_index ], ( old_index - new_index ) << 2 );
            }
            if ( ( PCB->Data + ( new_index * 92 ) + 76 ) & 1 )
              PCB->Data->Layer->Name = saved_layer.Name;
            if ( ( PCB->Data + ( new_index * 92 ) + 76 + 1 ) & 2 )
              PCB->Data->Layer->Name = *(short*)(ebp_2147483632 + -187);
            memcpy( *(int*)(0), *(int*)(0), ( edx >> 2 ) * 4 );
            if ( !1 )
              PCB->Data->Layer->Name = saved_layer.Name;
            if ( edx & 1 )
              PCB->Data->Layer->Name[2] = saved_layer.Name[2];
            groups[ new_index ] = saved_group;
          }
          else
          {
            memmove( saved_group + 76 + ( old_index * 92 ), saved_group + 76 + ( ( old_index + 1 ) * 92 ), ( ( ebp_208 + 1 ) - old_index ) * 92 );
            mymemset( &PCB->Data->Layer[ PCB->Data->LayerN + 1 ].Name, 0, 92 );
            memmove( &groups[ old_index ], &groups[ old_index + 1 ], ( ( PCB->Data->LayerN - old_index ) + 1 ) * 4 );
            if ( PCB->Data->LayerN > 0 )
            {
              l = 0;
              do
              {
                if ( old_index == eax )
                {
                  memmove( eax, &edi, ( ( ecx + -1 ) - l ) << 2 );
                }
                l++;
              }
              while ( l + 1 < PCB->Data->LayerN );
            }
            l = 0;
            PCB->Data->LayerN += -1;
            if ( PCB->Data->LayerN + -1 > 0 )
            {
              do
              {
                if ( old_index < LayerStack[ l ] )
                  LayerStack[ l ] += -1;
                l++;
              }
              while ( l != PCB->Data->LayerN + -1 );
            }
          }
        }
        if ( PCB->Data->ViaN )
        {
          while ( 1 )
          {
            move_one_thermal( old_index, new_index, *(int*)(new_index + 28) + ( ( ( PCB->Data->ViaN + 0 + 1 ) - l ) * 76 ) );
            if ( PCB->Data->ViaN == 0 || eax <= ( esi + eax + 1 ) - edi )
            {
            }
            else
            {
            }
          }
        }
        ebp_208 = PCB->Data->ElementN + -1;
        if ( PCB->Data->ElementN + -1 != -1 )
        {
          saved_group = ( PCB->Data->ElementN * 300 ) + -300;
          while ( saved_group == 0 )
          {
            ebp_208 += -1;
            saved_group += -300;
            if ( ebp_208 == -1 )
            {
            }
            else
            {
            }
          }
          while ( 1 )
          {
            move_one_thermal( old_index, new_index, ( ebx * 76 ) + *(int*)(esi + 256) );
            if ( *(int*)(esi + 224) == 0 || eax <= ( ebx + eax + 1 ) - edi )
            {
            }
            else
            {
            }
            ebp_208 += -1;
            saved_group += -300;
          }
        }
        g = 0;
        do
        {
          PCB->Font.Valid = 0;
          g++;
        }
        while ( g + 1 != 16 );
        if ( PCB->Data->LayerN >= -1 )
        {
        {
          do
          {
            /* phantom */ int i;
            l++;
            PCB->Font.Valid++;
          }
          while ( l + 1 <= *(int*)(ebp_208 + 24) + 1 );
        }
        }
        g = 0;
        while ( 1 )
        {
          if ( PCB->Font.Valid )
          {
            g++;
            if ( g + 1 == 16 )
            {
              hid_action( "LayersChanged" );
              gui->invalidate_all( );
              return 0;
            }
          }
          else
          {
            memmove( PCB + 7380 + ( g << 2 ), 4 + 4 + PCB + 7380, 64 - ( 4 + 4 ) );
            g++;
            memmove( PCB->LayerGroups.Entries[0][0] + esi, ebp_220 + PCB->LayerGroups.Entries[0][0], 1080 - esi );
            if ( g == 16 )
            {
              hid_action( "LayersChanged" );
              gui->invalidate_all( );
              return 0;
            }
          }
          hid_action( "LayersChanged" );
          gui->invalidate_all( );
          return 0;
        }
      }
      return 1;
    }
  }
  else
    ebp_208 = PCB->Data->LayerN;
  Message( "Invalid old layer %d for move: must be -1..%d\n", old_index, ebp_208 + -1 );
  return 1;
}
int MoveLayerAction( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  int old_index, new_index;
  int new_top;
  if ( argc != 2 )
  {
    Message( "Usage; MoveLayer(old,new)" );
  }
  else
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    /* phantom */ unsigned char *__s1;
    /* phantom */ int __result;
    if ( argv[0] != 99 || argv[0][1] )
    {
      old_index = strtol( MoveLayer( old_index, new_index ), 0, 10 );
    }
    else
    if ( PCB->SilkActive )
    {
      old_index = 0;
      old_index/*.1_1of4*/ = Settings.ShowSolderSide == 0;
      old_index = ( Settings.ShowSolderSide == 0 ) + PCB->Data->LayerN;
    }
    else
      old_index = LayerStack[0];
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    /* phantom */ unsigned char *__s1;
    /* phantom */ int __result;
    if ( argv[1][0] == argv[0] && argv[1][1] == 0 )
    {
      new_top = -1;
      new_index = new_index < 0 ? new_index : 0;
    }
    else
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      /* phantom */ unsigned char *__s1;
      /* phantom */ int __result;
      if ( argv[1][0] == 117 && argv[1][1] == 112 && argv[1][2] == 0 )
      {
        if ( new_index >= 0 )
          new_top = new_index;
        else
        {
        }
      }
      else
      {
        /* phantom */ size_t __s1_len;
        /* phantom */ size_t __s2_len;
        strcmp( "down", (char*)PCB );
        if ( !1 )
        {
          new_top = -1;
          new_index = strtol( (char*)PCB, 0, 10 );
        }
        else
        {
          if ( PCB <= new_index )
            continue;
          else
            new_top = new_index;
        }
      }
      if ( MoveLayer( old_index, new_index ) == 0 )
      {
        if ( new_index == -1 && PCB->Data->LayerN <= old_index )
        {
          new_top = old_index + -1;
          new_index = old_index + -1;
        }
        new_top = old_index == -1 ? new_top : new_index;
        if ( ( old_index == -1 ? new_top : new_index ) == -1 )
        {
          return 1;
        }
        ChangeGroupVisibility( new_index, 1, 1 );
      }
    }
    if ( MoveLayer( old_index, new_index ) == 0 )
    {
    }
  }
  }
  return 1;
}
void register_move_action_list( void )
{
  hid_register_actions( move_action_list, 1 );
  return;
}
#if 0
#endif
