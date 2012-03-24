#include "buffer.c.h"
static DataTypePtr Dest;
static DataTypePtr Source;
static ObjectFunctionType AddBufferFunctions = { &AddLineToBuffer, &AddTextToBuffer, &AddPolygonToBuffer, &AddViaToBuffer, &AddElementToBuffer, 0, 0, 0, 0, 0, &AddArcToBuffer, &AddRatToBuffer }
;
static ObjectFunctionType MoveBufferFunctions = { &MoveLineToBuffer, &MoveTextToBuffer, &MovePolygonToBuffer, &MoveViaToBuffer, &MoveElementToBuffer, 0, 0, 0, 0, 0, &MoveArcToBuffer, &MoveRatToBuffer }
;
static int ExtraFlag;
static char freerotatebuffer_syntax[24] = { 'F', 'r', 'e', 'e', 'R', 'o', 't', 'a', 't', 'e', 'B', 'u', 'f', 'f', 'e', 'r', '(', 'A', 'n', 'g', 'l', 'e', ')' };
static char freerotatebuffer_help[99] = { 'R', 'o', 't', 'a', 't', 'e', 's', ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'p', 'a', 's', 't', 'e', ' ', 'b', 'u', 'f', 'f', 'e', 'r', ' ', 'c', 'o', 'n', 't', 'e', 'n', 't', 's', ' ', 'b', 'y', ' ', 't', 'h', 'e', ' ', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 'd', ' ', 'a', 'n', 'g', 'l', 'e', '.', ' ', ' ', 'T', 'h', 'e', '\n', 'a', 'n', 'g', 'l', 'e', ' ', 'i', 's', ' ', 'g', 'i', 'v', 'e', 'n', ' ', 'i', 'n', ' ', 'd', 'e', 'g', 'r', 'e', 'e', 's', '.', '\n' };
HID_Action rotate_action_list[1] = { { "FreeRotateBuffer", 0, &ActionFreeRotateBuffer, &freerotatebuffer_syntax, &freerotatebuffer_help }
 };
void *AddViaToBuffer( PinTypePtr Via )
{
  CreateNewVia( &Dest->BoundingBox.X1, Via->X, Via->Y, Via->Thickness, Via->Clearance, Via->Mask, Via->DrillingHole, &Via->Name, "badarg" );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return CreateNewVia( &Dest->BoundingBox.X1, Via->X, Via->Y, Via->Thickness, Via->Clearance, Via->Mask, Via->DrillingHole, &Via->Name, "badarg" );
}
void *AddRatToBuffer( RatTypePtr Rat )
{
  CreateNewRat( &Dest->BoundingBox.X1, Rat->Point1.X, Rat->Point1.Y, Rat->Point2.X, Rat->Point2.Y, Rat->group1, Rat->group2, Rat->Thickness, "badarg" );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return CreateNewRat( &Dest->BoundingBox.X1, Rat->Point1.X, Rat->Point1.Y, Rat->Point2.X, Rat->Point2.Y, Rat->group1, Rat->group2, Rat->Thickness, "badarg" );
}
void *AddLineToBuffer( LayerTypePtr Layer, LineTypePtr Line )
{
  int eax;
  LineTypePtr line;
  /* phantom */ LayerTypePtr layer;
  if ( CreateNewLineOnLayer( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76, Line->Point1.X, Line->Point1.Y, Line->Point2.X, Line->Point2.Y, Line->Thickness, Line->Clearance, "badarg" ) && Line->Number )
  {
    line->Number = MyStrdup( &Line->Number, "AddLineToBuffer" );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return (void*)line;
}
void *AddArcToBuffer( LayerTypePtr Layer, ArcTypePtr Arc )
{
  /* phantom */ LayerTypePtr layer;
  CreateNewArcOnLayer( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76, Arc->X, Arc->Y, Arc->Width, Arc->Height, Arc->StartAngle, Arc->Delta, Arc->Thickness, Arc->Clearance, "badarg" );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return CreateNewArcOnLayer( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76, Arc->X, Arc->Y, Arc->Width, Arc->Height, Arc->StartAngle, Arc->Delta, Arc->Thickness, Arc->Clearance, "badarg" );
}
void *AddTextToBuffer( LayerTypePtr Layer, TextTypePtr Text )
{
  /* phantom */ LayerTypePtr layer;
  CreateNewText( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76, &PCB->Font, Text->X, Text->Y, Text->Direction, Text->Scale, &Text->TextString, "badarg" );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return CreateNewText( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76, &PCB->Font, Text->X, Text->Y, Text->Direction, Text->Scale, &Text->TextString, "badarg" );
}
void *AddPolygonToBuffer( LayerTypePtr Layer, PolygonTypePtr Polygon )
{
  /* phantom */ LayerTypePtr layer;
  PolygonTypePtr polygon = GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 );
  CopyPolygonLowLevel( GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 ), Polygon );
  polygon->Flags.f &= ~( ExtraFlag | 4 );
  return (void*)polygon;
}
void *AddElementToBuffer( ElementTypePtr Element )
{
  int eax;
  int edx;
  ElementTypePtr element = GetElementMemory( &Dest->BoundingBox.X1 );
  CopyElementLowLevel( &Dest->BoundingBox.X1, GetElementMemory( &Dest->BoundingBox.X1 ), Element, 0, 0, 0 );
  element->Flags.f &= ~ExtraFlag;
  if ( ExtraFlag )
  {
    Cardinal n;
    Cardinal sn = element->PinN;
    /* phantom */ PinTypePtr pin;
  {
    /* phantom */ Cardinal n;
    /* phantom */ TextTypePtr text;
    element->Name[2].Flags.f &= ~ExtraFlag;
    element->Name[1].Flags.f &= ~ExtraFlag;
    element->Name->Flags.f &= ~ExtraFlag;
    if ( sn )
    {
      n = 1;
      element->Pin->Flags.f &= ~( ExtraFlag | 4 );
      while ( element->Pin->BoundingBox.X1 = element->Pin + 76, n < sn )
      {
        n++;
      }
    }
  {
    Cardinal n;
    Cardinal sn = element->PadN;
    /* phantom */ PadTypePtr pad;
    if ( element->PadN == 0 )
    {
      return &element->BoundingBox.X1;
    }
    n = 1;
    element->Pad->Flags.f &= ~( ExtraFlag | 4 );
    while ( element->Pad->BoundingBox.X1 = element->Pad + 104, n < sn )
    {
      element->Pin[2].DrillingHole &= ~( ExtraFlag | 4 );
      n++;
    }
  }
  }
  }
  return &element->BoundingBox.X1;
}
void *MoveViaToBuffer( PinTypePtr Via )
{
  int eax;
  int ecx;
  PinTypePtr via;
  RestoreToPolygon( &Source->Name[0], 1, (void*)Via, (void*)Via );
  r_delete_entry( &Source->Text->BoundingBox.X1, (int)( &Via->BoundingBox ) );
  via = GetViaMemory( &Dest->BoundingBox.X1 );
  memcpy( via, Via, 76 );
  *(int*)GetViaMemory( &Dest->BoundingBox.X1 )/*.20*/ &= -517;
  Source->Name[0] += -1;
  if ( Source->PolygonMax != Via )
  {
    memcpy( Via, *(int*)(0), 76 );
    r_substitute( &Source->Text->BoundingBox.X1, Source->PolygonMax + ( Source->Name[0] * 76 ), (int)( &Via->BoundingBox ) );
  }
  mymemset( Source->PolygonMax + ( Source->Name[0] * 76 ), 0, 76 );
  if ( Dest->Name->BoundingBox.Y1 == 0 )
  {
    Dest->Name->BoundingBox.Y1 = r_create_tree( 0, 0, 0 );
  }
  r_insert_entry( &Dest->Name->BoundingBox.Y1, (int)( &via->BoundingBox ), 0 );
  ClearFromPolygon( &Dest->BoundingBox.X1, 1, (void*)via, (void*)via );
  return (void*)via;
}
void *MoveRatToBuffer( RatTypePtr Rat )
{
  int eax;
  int ecx;
  RatTypePtr rat;
  r_delete_entry( &Source->On, (int)( &Rat->BoundingBox ) );
  rat = GetRatMemory( &Dest->BoundingBox.X1 );
  memcpy( rat, Rat, 92 );
  *(int*)GetRatMemory( &Dest->BoundingBox.X1 )/*.20*/ &= -5;
  Source->ArcN += -1;
  if ( Source->Line != Rat )
  {
    memcpy( Rat, *(int*)(0), 92 );
    r_substitute( &Source->On, Source->Line + ( Source->ArcN * 92 ), (int)( &Rat->BoundingBox ) );
  }
  mymemset( Source->Line + ( Source->ArcN * 92 ), 0, 92 );
  if ( Dest->Name->net == 0 )
  {
    Dest->Name->net = r_create_tree( 0, 0, 0 );
  }
  r_insert_entry( &Dest->Name->net, (int)( &rat->BoundingBox ), 0 );
  return (void*)rat;
}
void *MoveLineToBuffer( LayerTypePtr Layer, LineTypePtr Line )
{
  int eax;
  LayerTypePtr lay;
  LineTypePtr line;
  RestoreToPolygon( &Source->Name[0], 4, (void*)Layer, (void*)Line );
  r_delete_entry( &Layer->line_tree, (int)( &Line->BoundingBox ) );
  lay = Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76;
  line = GetLineMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 );
  memcpy( GetLineMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 ), Line, 88 );
  *(int*)GetLineMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.20*/ &= -5;
  Layer->LineN += -1;
  if ( Layer->Line != Line )
  {
    memcpy( Line, *(int*)(0), 88 );
    r_substitute( &Layer->line_tree, Layer->Line + ( Layer->LineN * 88 ), (int)( &Line->BoundingBox ) );
  }
  mymemset( Layer->Line + ( Layer->LineN * 88 ), 0, 88 );
  if ( Dest->Name[1].net == 0 )
  {
    Dest->Name[1].net = r_create_tree( 0, 0, 0 );
  }
  r_insert_entry( &Dest->Name[1].net, GetLineMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 ), 0 );
  ClearFromPolygon( &Dest->BoundingBox.X1, 4, (void*)lay, GetLineMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 ) );
  return GetLineMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 );
}
void *MoveArcToBuffer( LayerTypePtr Layer, ArcTypePtr Arc )
{
  int eax;
  LayerTypePtr lay;
  ArcTypePtr arc;
  RestoreToPolygon( &Source->Name[0], 16384, (void*)Layer, (void*)Arc );
  r_delete_entry( &Layer->arc_tree, (int)( &Arc->BoundingBox ) );
  lay = Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76;
  arc = GetArcMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 );
  memcpy( GetArcMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 ), Arc, 68 );
  *(int*)GetArcMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.20*/ &= -5;
  Layer->ArcN += -1;
  if ( Layer->Arc != Arc )
  {
    memcpy( Arc, *(int*)(0), 68 );
    r_substitute( &Layer->arc_tree, Layer->Arc + ( Layer->ArcN * 68 ), (int)( &Arc->BoundingBox ) );
    Arc = Layer->ArcN << 6;
  }
  mymemset( Layer->Arc + ( Layer->ArcN * 68 ), 0, 68 );
  if ( Dest->Name[1].Y == 0 )
  {
    Dest->Name[1].Y = r_create_tree( 0, 0, 0 );
  }
  r_insert_entry( &Dest->Name[1].Y, GetArcMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 ), 0 );
  ClearFromPolygon( &Dest->BoundingBox.X1, 16384, (void*)lay, GetArcMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 ) );
  return GetArcMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 );
}
void *MoveTextToBuffer( LayerTypePtr Layer, TextTypePtr Text )
{
  int eax;
  TextTypePtr text;
  LayerTypePtr lay;
  r_delete_entry( &Layer->text_tree, (int)( &Text->BoundingBox ) );
  RestoreToPolygon( &Source->Name[0], 16, (void*)Layer, (void*)Text );
  lay = Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76;
  text = GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 );
  *(int*)(GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )) = Text->BoundingBox.X1;
  *(int*)GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.4*/ = Text->BoundingBox.Y1;
  *(int*)GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.8*/ = Text->BoundingBox.X2;
  *(int*)GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.12*/ = Text->BoundingBox.Y2;
  *(int*)GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.16*/ = Text->ID;
  *(int*)GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.20*/ = Text->Flags.f;
  *(int*)GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.24*/ = Text->Flags.t[0];
  *(int*)GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.28*/ = Text->Flags.t[4];
  *(int*)GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.32*/ = Text->net;
  *(int*)GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.36*/ = Text->Scale;
  *(int*)GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.40*/ = Text->X;
  *(int*)GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.44*/ = Text->Y;
  *(int*)GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.48*/ = Text->Direction;
  *(int*)GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.52*/ = Text->TextString;
  *(int*)GetTextMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.56*/ = Text->Element;
  Layer->TextN += -1;
  if ( Layer->Text != Text )
  {
    Text = &Layer->Text->BoundingBox.X1;
    Text->BoundingBox.Y1 = Layer->Text->BoundingBox.Y1;
    Text->BoundingBox.X2 = Layer->Text->BoundingBox.X2;
    Text->BoundingBox.Y2 = Layer->Text->BoundingBox.Y2;
    Text->ID = Layer->Text->ID;
    Text->Flags.f = Layer->Text->Flags.f;
    Text->Flags.t[0] = Layer->Text->Flags.t[0];
    Text->Flags.t[4] = Layer->Text->Flags.t[4];
    Text->net = Layer->Text->net;
    Text->Scale = Layer->Text->Scale;
    Text->X = Layer->Text->X;
    Text->Y = Layer->Text->Y;
    Text->Direction = Layer->Text->Direction;
    Text->TextString = Layer->Text->TextString;
    Text->Element = Layer->Text->Element;
    r_substitute( &Layer->text_tree, Layer->Text + ( Layer->TextN * 60 ), (int)( &Text->BoundingBox ) );
  }
  mymemset( Layer->Text + ( Layer->TextN * 60 ), 0, 60 );
  if ( Dest->Name[1].Scale == 0 )
  {
    Dest->Name[1].Scale = r_create_tree( 0, 0, 0 );
  }
  r_insert_entry( &Dest->Name[1].Scale, (int)( &text->BoundingBox ), 0 );
  ClearFromPolygon( &Dest->BoundingBox.X1, 16, (void*)lay, (void*)text );
  return (void*)text;
}
void *MovePolygonToBuffer( LayerTypePtr Layer, PolygonTypePtr Polygon )
{
  int eax;
  /* phantom */ LayerTypePtr lay;
  PolygonTypePtr polygon;
  r_delete_entry( &Layer->polygon_tree, (int)( &Polygon->BoundingBox ) );
  polygon = GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 );
  *(int*)(GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )) = Polygon->BoundingBox.X1;
  *(int*)GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.4*/ = Polygon->BoundingBox.Y1;
  *(int*)GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.8*/ = Polygon->BoundingBox.X2;
  *(int*)GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.12*/ = Polygon->BoundingBox.Y2;
  *(int*)GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.16*/ = Polygon->ID;
  *(int*)GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.20*/ = Polygon->Flags.f;
  *(int*)GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.24*/ = Polygon->Flags.t[0];
  *(int*)GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.28*/ = Polygon->Flags.t[4];
  *(int*)GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.32*/ = Polygon->net;
  *(int*)GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.36*/ = Polygon->PointN;
  *(int*)GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.40*/ = Polygon->PointMax;
  *(int*)GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.44*/ = Polygon->Clipped;
  *(int*)GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.48*/ = Polygon->NoHoles;
  *(int*)GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.52*/ = Polygon->NoHolesValid;
  *(int*)GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.20*/ &= -5;
  *(int*)GetPolygonMemory( Dest + ( GetLayerNumber( &Source->Name[0], Layer ) * 92 ) + 76 )/*.56*/ = Polygon->Points;
  Layer->PolygonN += -1;
  if ( Layer->Polygon != Polygon )
  {
    Polygon = &Layer->Polygon->BoundingBox.X1;
    Polygon->BoundingBox.Y1 = Layer->Polygon->BoundingBox.Y1;
    Polygon->BoundingBox.X2 = Layer->Polygon->BoundingBox.X2;
    Polygon->BoundingBox.Y2 = Layer->Polygon->BoundingBox.Y2;
    Polygon->ID = Layer->Polygon->ID;
    Polygon->Flags.f = Layer->Polygon->Flags.f;
    Polygon->Flags.t[0] = Layer->Polygon->Flags.t[0];
    Polygon->Flags.t[4] = Layer->Polygon->Flags.t[4];
    Polygon->net = Layer->Polygon->net;
    Polygon->PointN = Layer->Polygon->PointN;
    Polygon->PointMax = Layer->Polygon->PointMax;
    Polygon->Clipped = Layer->Polygon->Clipped;
    Polygon->NoHoles = Layer->Polygon->NoHoles;
    Polygon->NoHolesValid = Layer->Polygon->NoHolesValid;
    Polygon->Points = Layer->Polygon->Points;
    r_substitute( &Layer->polygon_tree, Layer->Polygon + ( Layer->PolygonN * 60 ), (int)( &Polygon->BoundingBox ) );
  }
  mymemset( Layer->Polygon + ( Layer->PolygonN * 60 ), 0, 60 );
  if ( Dest->Name[1].X == 0 )
  {
    Dest->Name[1].X = r_create_tree( 0, 0, 0 );
  }
  r_insert_entry( &Dest->Name[1].X, (int)( &polygon->BoundingBox ), 0 );
  return (void*)polygon;
}
void *MoveElementToBuffer( ElementTypePtr Element )
{
  int eax;
  int ecx;
  int edx;
  int ebp_28;
  ElementTypePtr element;
  int i;
  r_delete_element( &Source->Name[0], Element );
  element = GetElementMemory( &Dest->BoundingBox.X1 );
  memcpy( element, Element, 300 );
{
  Cardinal n;
  Cardinal sn;
  PinTypePtr pin;
  ebp_28 = *(int*)GetElementMemory( &Dest->BoundingBox.X1 )/*.224*/;
  if ( *(int*)GetElementMemory( &Dest->BoundingBox.X1 )/*.224*/ )
  {
    n = 0;
    while ( 1 )
    {
      pin = element->Pin + ( n * 76 );
      RestoreToPolygon( &Source->Name[0], 256, (void*)Element, element->Pin + ( n * 76 ) );
      sn = element->PinN;
      pin->Flags.f &= -517;
      pin->Element = element;
      if ( element->PinN == 0 || sn <= ( sn + n + 1 ) - ebp_28 )
        goto B5;
      else
      {
      }
    }
  }
{
B5:;
  Cardinal n = 0;
  Cardinal sn;
  PadTypePtr pad;
  ebp_28 = 0;
  while ( 1 )
  {
    sn = element->PadN;
    do
    {
      if ( sn && n < sn )
      {
        pad = ebp_28 + element->Pad;
        RestoreToPolygon( &Source->Name[0], 512, (void*)Element, ebp_28 + element->Pad );
        sn = element->PadN;
        pad->Flags.f &= -517;
        pad->Element = element;
      }
      else
      {
        n = 0;
      {
        /* phantom */ Cardinal n;
        /* phantom */ TextTypePtr text;
        element->Name[2].Element = element;
        element->Name[1].Element = element;
        element->Name->Element = element;
        SetElementBoundingBox( &Dest->BoundingBox.X1, element, PCB + 184 );
      {
        Cardinal n;
        Cardinal sn = element->PinN;
        /* phantom */ PinTypePtr pin;
        if ( element->PinN )
        {
          while ( 1 )
          {
            ClearFromPolygon( &Dest->BoundingBox.X1, 256, (void*)element, element->Pin + ( n * 76 ) );
            sn = element->PinN;
            if ( element->PinN == 0 || sn <= ( sn + n + 1 ) - sn )
              goto B22;
            else
            {
              sn = element->PinN;
            }
          }
        }
      {
B22:;
        Cardinal n = 0;
        Cardinal sn;
        /* phantom */ PadTypePtr pad;
        ebp_28 = element->PadN;
        while ( 1 )
        {
          sn = ebp_28;
          do
          {
            if ( sn && n < sn )
            {
              ClearFromPolygon( &Dest->BoundingBox.X1, 512, (void*)element, element->Pad + 0 );
              sn = element->PadN;
            }
            else
            {
              Source->TextN += -1;
              if ( Element == Source->ArcMax + ( ( Source->TextN + -1 ) * 300 ) )
              {
                mymemset( Source->ArcMax + ( Source->TextN * 300 ), 0, 300 );
                return (void*)element;
              }
              memcpy( Element, *(int*)(0), 300 );
              i = 0;
              r_substitute( &Source->Polygon->BoundingBox.X1, Source->ArcMax + ( Source->TextN * 300 ), (int)( &Element->BoundingBox ) );
              do
              {
                r_substitute( &Source->Name[0], i + 14, Element->BoundingBox.X1 + 60 + Source->ArcMax + ( Source->TextN * 300 ) + 36 );
                i++;
              }
              while ( i == 3 );
            {
              /* phantom */ Cardinal n;
              /* phantom */ TextTypePtr text;
              element = ebp_28;
              Element->Name[2].Element = Element;
              Element->Name[1].Element = Element;
              Element->Name->Element = Element;
            {
              Cardinal n;
              Cardinal sn;
              /* phantom */ PinTypePtr pin;
              if ( sn )
              {
                n = Element;
                n = 0;
                while ( n++, n + 1 < sn )
                {
                  *(int*)(esi + ( n * 76 ) + 68) = Element;
                }
                element = ebp_28;
              }
            {
              Cardinal n = 0;
              Cardinal sn = Element->PadN;
              /* phantom */ PadTypePtr pad;
              for ( ; sn && n < sn; n++ )
              {
                Element->Pad->Element = Element;
                // n++;
              }
            }
            }
            }
              mymemset( Source->ArcMax + ( Source->TextN * 300 ), 0, 300 );
              return (void*)element;
            }
          }
          while ( ebp_28 != element->PadN );
          n++;
        }
      }
      }
      }
      }
    }
    while ( element->PadN != element->PadN );
    n++;
    ebp_28 += 104;
  }
}
}
}
void SetBufferBoundingBox( BufferTypePtr Buffer )
{
  BoxTypePtr box;
  if ( box )
  {
    Buffer->BoundingBox.X1 = box->X1;
    Buffer->BoundingBox.Y1 = box->Y1;
    Buffer->BoundingBox.X2 = box->X2;
    Buffer->BoundingBox.Y2 = *(int*)GetDataBoundingBox( &Buffer->Data )/*.12*/;
  }
  return;
}
void ClearBuffer( BufferTypePtr Buffer )
{
  if ( Buffer && Buffer->Data )
  {
    FreeDataMemory( &Buffer->Data );
    Buffer->Data->pcb = PCB;
  }
  return;
}
void AddSelectedToBuffer( BufferTypePtr Buffer, LocationType X, LocationType Y, Boolean LeaveSelected )
{
  int ebx;
  int esi;
  int edi;
  if ( LeaveSelected == 0 )
    ExtraFlag = 64;
  HideCrosshair( 1 );
  Source = &PCB->Data->ViaN;
  Dest = &Buffer->Data->ViaN;
  SelectedOperation( &AddBufferFunctions, 0, -1 );
  if ( Y || X )
  {
    Buffer = &X;
    Buffer->Y = Y;
  }
  else
  {
    Buffer = &Crosshair.X;
    Buffer->Y = Crosshair.Y;
  }
  RestoreCrosshair( 1 );
  ExtraFlag = 0;
  return;
}
Boolean LoadElementToBuffer( BufferTypePtr Buffer, char *Name, Boolean FromFile )
{
  int eax;
  int esi;
  int edi;
  ElementTypePtr element;
  ClearBuffer( Buffer );
  if ( FromFile & 255 )
  {
    if ( ParseElementFile( &Buffer->Data, Name ) == 0 )
    {
      if ( Settings.ShowSolderSide )
        SwapBuffer( Buffer );
      SetBufferBoundingBox( Buffer );
      if ( Buffer->Data->ElementN )
      {
        Buffer = &element->net;
        Buffer->Y = Buffer->Data->Element->MarkY;
        return 1;
      }
      Buffer = 0;
      Buffer->Y = 0;
      return 1;
    }
  }
  else
  {
    if ( !ParseLibraryEntry( &Buffer->Data, Name ) && Buffer->Data->ElementN )
    {
      element = &Buffer->Data->Element;
      if ( Settings.ShowSolderSide )
      {
        MirrorElementCoordinates( &Buffer->Data, element, 0 );
      }
      SetElementBoundingBox( &Buffer->Data, element, &PCB->Font );
      Buffer = &element->MarkX;
      Buffer->Y = element->MarkY;
      SetBufferBoundingBox( Buffer );
      return 1;
    }
  }
  ClearBuffer( Buffer );
  return 1;
}
Boolean SmashBufferElement( BufferTypePtr Buffer )
{
  int eax;
  int edx;
  int ebp_124;
  ElementTypePtr element;
  /* phantom */ Cardinal group;
  LayerTypePtr clayer;
  LayerTypePtr slayer;
  if ( Buffer->Data->ElementN != 1 )
  {
    Message( "Error!  Buffer doesn't contain a single element\n" );
  }
  else
  {
    element = &Buffer->Data->Element;
    Buffer->Data->ElementN = 0;
    ClearBuffer( Buffer );
  {
    Cardinal n = element->LineN + -1;
    LineTypePtr line;
    if ( element->LineN + -1 != -1 )
    {
      n = element->LineN + -1;
      do
      {
        slayer = &line->Point2.Y;
        n += -1;
        CreateNewLineOnLayer( ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + *(int*)(Buffer + 24) + 76, line->Point1.X, line->Point1.Y, line->Point2.X, line->Thickness, 0, MakeFlags( 0 ), "badarg" );
        line->Number = MyStrdup( &element->Name[1].TextString, "SmashBuffer" );
      }
      while ( n == -1 );
      element = element;
      Buffer = Buffer;
    }
  {
    Cardinal n = element->ArcN + -1;
    ArcTypePtr arc;
    if ( element->ArcN + -1 != -1 )
    {
      n = n;
      do
      {
        slayer = &element->Arc->BoundingBox.X1;
        n += -1;
        CreateNewArcOnLayer( ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + *(int*)(Buffer + 24) + 76, element->Arc->BoundingBox.X1, element->Arc->BoundingBox.X1, element->Arc->BoundingBox.X1, element->Arc->BoundingBox.X1, element->Arc->BoundingBox.X1, element->Arc->BoundingBox.X1, 0, MakeFlags( 0 ), "badarg" );
      }
      while ( n == -1 );
      Buffer = Buffer;
    }
  {
    Cardinal n;
    Cardinal sn = element->PinN;
    PinTypePtr pin;
    if ( element->PinN )
    {
      n = 0;
      do
      {
        pin = element->Pin + ( n * 76 );
        0 = MakeFlags( element->Pin + ( n * 76 ) );
        slayer = 2;
        ebp = AddFlags( f.t[0] );
        if ( ( *(char*)(element->Pin + ( n * 76 ) + 20) & 8 ) & 255 )
        {
          ebp = AddFlags( f.t[0] );
        }
      {
        static FlagType f;
        slayer = &pin->Mask;
        CreateNewVia( &Buffer->Data, element->ArcN, pin->Y, pin->Thickness, pin->Clearance, pin->DrillingHole, pin->Number, &f.f, f.t[0] );
        sn = element->PinN;
      }
      }
      while ( element->PinN == 0 || sn <= ( sn + n + 1 ) - Buffer->X );
      Buffer = Buffer;
    }
    GetLayerGroupNumberByNumber( PCB->Data->LayerN + ( Settings.ShowSolderSide != 0 ) );
  {
    Cardinal n;
    Cardinal sn;
    PadTypePtr pad;
  {
    LineTypePtr line;
    ebp_124 = 0;
    n = 0;
    clayer = Buffer->Data + ( PCB->LayerGroups.Number[ ( GetLayerGroupNumberByNumber( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) << 4 ) + 16 ] * 92 ) + 76;
    while ( 1 )
    {
      sn = element->PadN;
      do
      {
        if ( sn == 0 || sn <= n )
        {
          element = element;
          FreeElementMemory( element );
          SaveFree( (void*)element );
        }
        else
        {
          pad = ebp_124 + element->Pad;
          slayer = &pad->Point2.Y;
          if ( CreateNewLineOnLayer( (unsigned char)( ( ( pad->Flags.f/*.1_1of4*/ >> 7 ) & 1 ) ^ 1 ) ? Buffer->Data + ( PCB->LayerGroups.Number[ ( GetLayerGroupNumberByNumber( PCB->Data->LayerN + ( Settings.ShowSolderSide != 0 ) ) << 4 ) + 16 ] * 92 ) + 76 : clayer, pad->Point1.X, pad->Point1.Y, pad->Point2.X, pad->Thickness, pad->Clearance, MakeFlags( 0 ), "badarg" ) )
          {
            line->Number = MyStrdup( &pad->Number, "SmashBuffer" );
          }
          sn = element->PadN;
        }
      }
      while ( element->PadN != element->PadN );
      n++;
      ebp_124 += 104;
    }
  }
  }
  }
  }
  }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return 0;
}
Boolean ConvertBufferToElement( BufferTypePtr Buffer )
{
  int eax;
  int ecx;
  int edx;
  int ebp_248;
  int ebp_208;
  ElementTypePtr Element;
  Cardinal group;
  Cardinal pin_n;
  Boolean hasParts;
  Boolean crooked;
  if ( Buffer->Data->pcb == 0 )
    Buffer->Data->pcb = PCB;
  ebp = MakeFlags( ~( 0 - ( ( Settings.ShowSolderSide < ( 1 & 255 ) ) & 1 ) ) & 128 );
  if ( CreateNewElement( &PCB->Data, 0, &PCB->Font, "badarg", MakeFlags( 0 ), 0, 0, 0, Buffers[ Settings.BufferNumber ].X, Buffers[ Settings.BufferNumber ].Y, 0, "badarg", MakeFlags( ~( 0 - ( ( Settings.ShowSolderSide < ( 1 & 255 ) ) & 1 ) ) & 128 ) ) )
  {
    Cardinal n;
    Cardinal sn;
    PinTypePtr via;
    pin_n = 1;
    hasParts = 0;
    ebp_248 = 1;
    n = 0;
    if ( Buffer->Data->ViaN )
    {
      while ( 1 )
      {
        via = Buffer->Data->Via + ( n * 76 );
        if ( via->Mask < via->Thickness )
          via->Mask = via->Thickness + 600;
        if ( via->Name )
        {
          char num[8];
          CreateNewPin( CreateNewElement( &PCB->Data, 0, &PCB->Font, "badarg", MakeFlags( 0 ), 0, 0, 0, Buffers[ Settings.BufferNumber ].X, Buffers[ Settings.BufferNumber ].Y, 0, "badarg", MakeFlags( ~( 0 - ( ( Settings.ShowSolderSide < ( 1 & 255 ) ) & 1 ) ) & 128 ) ), via->X, via->Y, via->Thickness, via->Clearance, via->Mask, via->DrillingHole, 0, &via->Name, "badarg" );
          sn = Buffer->Data->ViaN;
          if ( Buffer->Data->ViaN == 0 )
            break;
        }
        else
        {
          pin_n++;
          __sprintf_chk( num, 1, 8, "%d", pin_n );
          edi = MaskFlags( via->Flags.t[0] );
          CreateNewPin( ebp_220, via->X, via->Y, via->Thickness, via->Clearance, via->Mask, via->DrillingHole, 0, num, "badarg" );
          sn = Buffer->Data->ViaN;
          if ( Buffer->Data->ViaN == 0 )
            break;
        }
        n = ( sn + n + 1 ) - sn;
        if ( sn <= ( sn + n + 1 ) - Buffer->Data->ViaN )
          break;
        else
        {
        }
      }
      hasParts = 1;
    }
  {
    Cardinal entry;
    group = GetLayerGroupNumberByNumber( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) );
    group = GetLayerGroupNumberByNumber( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) + 1844;
    if ( Buffer->Data->pcb->LayerGroups.Number[0] )
    {
    {
      /* phantom */ LayerTypePtr layer;
      Cardinal number;
    {
      int x1, y1, x2, y2, w, h, t;
      entry = 0;
      crooked = 0;
      PCB->ID = PCB->Data->LayerN;
      do
      {
        number = *(int*)(*(int*)(ebp_232 + 72) + ( entry * 4 ) + ( group * 18 * 4 ) + 7444);
        if ( *(int*)(Buffer->Data->pcb + ( entry * 4 ) + ( group * 18 * 4 ) + 7444) < PCB->Data->LayerN )
        {
          Cardinal n;
          LineTypePtr line;
          h = Buffer->Data->Layer->LineN;
          n = Buffer->Data->Layer->LineN + -1;
          if ( Buffer->Data->Layer->LineN + -1 != -1 )
          {
            pin_n = ebp_248;
            w = edx + 112;
            while ( 1 )
            {
              ebp_208 = pin_n + 1;
              line = w + ( ( h + -1 ) * 88 ) + -88;
              __sprintf_chk( num, 1, 8, "%d", (int)pin_n );
              n += -1;
              CreateNewPad( ebp_220, *(int*)(ebx + 44), line->Point1.Y, line->Point2.X, line->Point2.Y, line->Thickness, line->Clearance, line->Clearance + line->Thickness, 0, line->Number == 0 ? &line->Number : ebp_268, "badarg" );
              if ( n == -1 )
              {
                ebp_248 += h;
                hasParts = 1;
              }
              else
              {
                pin_n = ebp_208;
              }
            }
          }
          n = Buffer->Data->Layer->PolygonN + -1;
          if ( Buffer->Data->Layer->PolygonN + -1 != -1 )
          {
            number = Buffer->Data + ( number * 92 ) + 120;
            ebp_208 = ( Buffer->Data->Layer->PolygonN * 60 ) + -60;
            do
            {
              polygon = ebp_208 + number;
              if ( polygon->PointN == 4 )
              {
                w = polygon;
                do
                {
                }
                while ( 1 + 1 + 1 != 4 );
                polygon = &w;
                do
                {
                  *ebp_200 = *(int*)(eax + ( ( __MOD(esi,4) ) * 20 ));
                  *(int*)(ebp_200 + 4) = *(int*)(eax + ( ( __MOD(esi,4) ) * 20 ) + 4);
                  *(int*)(ebp_200 + 8) = *(int*)(eax + ( ( __MOD(esi,4) ) * 20 ) + 8);
                  *(int*)(ebp_200 + 12) = *(int*)(eax + ( ( __MOD(esi,4) ) * 20 ) + 12);
                  *(int*)(ebp_200 + 16) = *(int*)(eax + ( ( __MOD(esi,4) ) * 20 ) + 16);
                }
                while ( ebp_120 != ebp_200 + 20 + 20 );
                if ( ebp_200 != ebp_180 )
                {
                  polygon->Points->X = ebp_200;
                  polygon->Points->Y = ebp_196;
                  polygon->Points->X2 = ebp_192;
                  polygon->Points->Y2 = ebp_188;
                  polygon->Points->ID = ebp_184;
                  polygon->Points[1].X = ebp_140;
                  polygon->Points[1].Y = ebp_136;
                  polygon->Points[1].X2 = ebp_132;
                  polygon->Points[1].Y2 = ebp_128;
                  polygon->Points[1].ID = ebp_124;
                  polygon->Points[2].X = ebp_160;
                  polygon->Points[2].Y = ebp_156;
                  polygon->Points[2].X2 = ebp_152;
                  polygon->Points[2].Y2 = ebp_148;
                  polygon->Points[2].ID = ebp_144;
                  polygon->Points[3].X = ebp_180;
                  polygon->Points[3].Y = ebp_176;
                  polygon->Points[3].X2 = ebp_172;
                  polygon->Points[3].Y2 = ebp_168;
                  polygon->Points[3].ID = ebp_164;
                }
                else
                {
                  memcpy( &polygon->Points, ebp_200, 80 );
                }
                if ( polygon->Points[1].X == polygon->Points->X && polygon->Points[2].Y == polygon->Points[1].Y && polygon->Points[3].X == polygon->Points[2].X && polygon->Points[3].Y == polygon->Points->Y )
                {
                  w = polygon->Points[2].X - polygon->Points->X;
                  t = polygon->Points[1].Y - polygon->Points[3].Y <= t - polygon->Points->X ? t - polygon->Points->X : polygon->Points[1].Y - polygon->Points[3].Y;
                  h = polygon->Points[1].Y - polygon->Points[3].Y;
                  x1 += ( polygon->Points[1].Y - y1 <= polygon->Points[2].X - x1 ? polygon->Points[2].X - x1 : polygon->Points[1].Y - y1 ) / 2;
                  y1 += ( polygon->Points[1].Y - y1 <= polygon->Points[2].X - x1 ? polygon->Points[2].X - x1 : polygon->Points[1].Y - y1 ) / 2;
                  __sprintf_chk( num, 1, 8, "%d" );
                  edi = MakeFlags( ( ( 0 - ( ( Settings.ShowSolderSide < ( 1 & 255 ) ) & 1 ) ) & -128 ) + 384 );
                  CreateNewPad( ebp_220, ebp_220, ebp_260, y1, y1 + ( h - t ), esi, Settings.Keepaway * 2, Settings.Keepaway + t, 0, num, "badarg" );
                  hasParts = 1;
                  ebp_248++;
                }
              }
              crooked = 1;
            }
            while ( n != -1 );
          }
          else
          {
          }
        }
        entry++;
      }
      while ( entry < Buffer->Data->pcb->LayerGroups.Number[0] );
    }
    }
    }
    else
      crooked = 0;
    group = GetLayerGroupNumberByNumber( PCB->Data->LayerN + ( Settings.ShowSolderSide != 0 ) );
  {
    Cardinal entry;
    if ( Buffer->Data->pcb->LayerGroups.Number[0] )
    {
    {
      /* phantom */ LayerTypePtr layer;
      Cardinal number;
    {
      Boolean warned;
      char num[8];
      Cardinal n;
      LineTypePtr line;
      entry = 0;
      n = PCB->Data;
      PCB->ID = PCB->Data->LayerN;
      do
      {
        number = *(int*)(number + ( entry * 4 ) + ( group * 18 * 4 ) + 7444);
        if ( PCB->Data->LayerN <= *(int*)(number + ( entry * 4 ) + ( group * 18 * 4 ) + 7444) || Buffer->Data->Layer->LineN + -1 == -1 )
          goto B73;
        else
        {
          pin_n = ebp_248;
          w/*.1_1of4*/ = 0;
          number = Buffer->Data + ( number * 92 ) + 112;
          while ( 1 )
          {
            ebp_208 = pin_n + 1;
            line = number + edi;
            __sprintf_chk( num, 1, 8, "%d", (int)pin_n );
            CreateNewPad( ebp_220, *(int*)(ebx + 44), line->Point1.Y, line->Point2.X, line->Point2.Y, line->Thickness, line->Clearance, line->Clearance + line->Thickness, 0, line->Number == 0 ? &line->Number : ebp_280, "badarg" );
            if ( w/*.1_1of4*/ == 0 && hasParts == 0 )
            {
              Message( "Warning: All of the pads are on the opposite\nside from the component - that's probably not what\nyou wanted\n" );
              w/*.1_1of4*/ = 1;
            }
            n += -1;
            hasParts = 1;
            if ( n + -1 == -1 )
            {
              ebp_248 += ebp_232;
              n = PCB->Data;
            }
            else
            {
              pin_n = ebp_208;
            }
          }
        }
B73:;
        entry++;
      }
      while ( entry < Buffer->Data->pcb->LayerGroups.Number[0] );
    }
    }
    }
    else
    {
    }
  {
    Cardinal n = Buffer->Data->Layer->LineN + -1;
    LineTypePtr line;
    if ( Buffer->Data->Layer->LineN + -1 != -1 )
    {
      while ( 1 )
      {
        line = esi + *(int*)(ecx + ( ( eax + ( ( edx & 255 ) == 0 ) ) * 92 ) + 112);
        if ( line->Number && *(int*)(ebp_220 + 148) == 0 )
        {
          *(int*)(ebp_220 + 148) = MyStrdup( &line->Number, "ConvertBufferToElement" );
        }
        n += -1;
        CreateNewLineInElement( ebp_220, *(int*)(edi + 44), line->Point1.Y, line->Point2.X, line->Point2.Y, line->Thickness );
        if ( n == -1 )
          break;
        else
        {
        }
      }
      hasParts = 1;
    }
  {
    Cardinal n = Buffer->Data->Layer->ArcN + -1;
    ArcTypePtr arc;
    if ( Buffer->Data->Layer->ArcN + -1 != -1 )
    {
      Element = ebp_220;
      while ( 1 )
      {
        n += -1;
        CreateNewArcInElement( Element, *(int*)(ebx + *(int*)(ecx + ( ( eax + ( ( edx & 255 ) == 0 ) ) * 92 ) + 124) + 52), *(int*)(ebx + *(int*)(ecx + ( ( arc + ( ( edx & 255 ) == 0 ) ) * 92 ) + 124) + 56), *(int*)(ebx + *(int*)(ecx + ( ( arc + ( ( edx & 255 ) == 0 ) ) * 92 ) + 124) + 44), *(int*)(ebx + *(int*)(ecx + ( ( arc + ( ( edx & 255 ) == 0 ) ) * 92 ) + 124) + 48), *(int*)(ebx + *(int*)(ecx + ( ( arc + ( ( edx & 255 ) == 0 ) ) * 92 ) + 124) + 60), *(int*)(ebx + *(int*)(ecx + ( ( arc + ( ( edx & 255 ) == 0 ) ) * 92 ) + 124) + 64), *(int*)(ebx + *(int*)(ecx + ( ( arc + ( ( edx & 255 ) == 0 ) ) * 92 ) + 124) + 36) );
        if ( n == -1 )
          goto B92;
        else
        {
        }
      }
    }
    else
    if ( hasParts == 0 )
    {
      DestroyObject( &n, 2, ebp_220, ebp_220, ebp_220 );
      Message( "There was nothing to convert!\nElements must have some silk, pads or pins.\n" );
    }
B92:;
    if ( crooked )
      Message( "There were polygons that can't be made into pins!\nSo they were not included in the element\n" );
    *(int*)(ebp_220 + 216) = Buffer->X;
    *(int*)(ebp_220 + 220) = Buffer->Y;
    if ( Settings.ShowSolderSide )
      *(int*)(esi + 20) |= 128;
    SetElementBoundingBox( &PCB->Data, ebp_220, &PCB->Font );
    ClearBuffer( Buffer );
    MoveObjectToBuffer( *(int*)(ebp_240 + 24), &PCB->Data, 2, &edi, &edi, &edi );
    SetBufferBoundingBox( Buffer );
  }
  }
  }
  }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return eax;
}
Boolean LoadLayoutToBuffer( BufferTypePtr Buffer, char *Filename )
{
  PCBTypePtr newPCB = CreateNewPCB( 0 );
  if ( ParsePCB( CreateNewPCB( 0 ), Filename ) == 0 )
  {
    ClearBuffer( Buffer );
    SaveFree( &Buffer->Data );
    Buffer->Data = newPCB->Data;
    newPCB->Data = 0;
    Buffer = &newPCB->CursorX;
    Buffer->Y = newPCB->CursorY;
    RemovePCB( newPCB );
    Buffer->Data->pcb = PCB;
    return 1;
  }
  RemovePCB( newPCB );
  Buffer->Data->pcb = PCB;
  return 0;
}
// Lost vars at line 925 through switch synthesis
void RotateBuffer( BufferTypePtr Buffer, BYTE Number )
{
  int eax;
  int ecx;
  int edx;
{
  Cardinal n;
  Cardinal sn;
  PinTypePtr via;
  if ( Buffer->Data->ViaN )
  {
    n = 0;
    while ( 1 )
    {
      via = Buffer->Data->Via + ( n * 76 );
      r_delete_entry( &Buffer->Data->via_tree, Buffer->Data->Via + ( n * 76 ) );
      dy = via->Y - Buffer->Y;
      dx = via->X - Buffer->X;
      switch ( __MOD(Number,4) )
      {
      case 1:
        dy = Buffer->X + dy;
        via->X = dy + Buffer->X;
        via->Y = Buffer->Y - dx;
        SetPinBoundingBox( via );
        r_insert_entry( &Buffer->Data->via_tree, (int)( &via->BoundingBox ), 0 );
        sn = Buffer->Data->ViaN;
        if ( Buffer->Data->ViaN == 0 || sn <= ( sn + n + 1 ) - Buffer->Data->ViaN )
        {
        }
        else
        {
        }
        break;
      case 2:
        via->X = Buffer->X - ( via->X - Buffer->X );
        via->Y = Buffer->Y - dy;
        SetPinBoundingBox( via );
        r_insert_entry( &Buffer->Data->via_tree, (int)( &via->BoundingBox ), 0 );
        sn = Buffer->Data->ViaN;
        break;
      case 3:
        via->X = Buffer->X - dy;
        via->Y = Buffer->Y + ( via->X - Buffer->X );
        SetPinBoundingBox( via );
        r_insert_entry( &Buffer->Data->via_tree, (int)( &via->BoundingBox ), 0 );
        sn = Buffer->Data->ViaN;
        break;
      default:
        SetPinBoundingBox( via );
        r_insert_entry( &Buffer->Data->via_tree, (int)( &via->BoundingBox ), 0 );
        sn = Buffer->Data->ViaN;
        break;
      }
    }
  }
  else
  {
  }
{
  Cardinal n = Buffer->Data->ElementN + -1;
  /* phantom */ ElementTypePtr element;
  if ( Buffer->Data->ElementN + -1 != -1 )
  {
    while ( 1 )
    {
      n += -1;
      RotateElementLowLevel( &Buffer->Data, ( Buffer->Data->ElementN * 300 ) + -300 + -300 + *(int*)(Buffer->Data + 32), Buffer->X, Buffer->Y, ebp_28 );
      if ( n == -1 )
        layer = &Buffer->Data->ViaN;
      else
      {
      }
    }
  }
{
  Cardinal l;
  LayerTypePtr layer;
  layer += 0;
  if ( PCB->Data->LayerN != -2 )
  {
    l = 0;
    Buffer = Buffer;
  {
    while ( n = layer->LineN + -1, layer->LineN + -1 == -1 )
    {
      l++;
      if ( PCB->Data->LayerN + 2 <= l )
      {
        Cardinal l;
        LayerTypePtr layer = *(int*)(ecx + 24) + 76;
        if ( PCB->Data->LayerN == -2 )
        {
          /* phantom */ LocationType dx;
          /* phantom */ LocationType dy;
          RotateBoxLowLevel( Buffer->X + 8, Buffer->X, *(int*)(Buffer->X + 4), ebp_28 );
          return;
        }
        l = 0;
      {
        while ( n = layer->ArcN + -1, layer->ArcN + -1 == -1 )
        {
          l++;
          if ( PCB->Data->LayerN + 2 <= l )
          {
            Cardinal l;
            LayerTypePtr layer = *(int*)(ecx + 24) + 76;
            if ( PCB->Data->LayerN == -2 )
            {
              /* phantom */ LocationType dx;
              /* phantom */ LocationType dy;
              RotateBoxLowLevel( Buffer->X + 8, Buffer->X, *(int*)(Buffer->X + 4), ebp_28 );
              return;
            }
            l = 0;
          {
            while ( n = layer->TextN + -1, layer->TextN + -1 == -1 )
            {
              l++;
              if ( PCB->Data->LayerN + 2 <= l )
              {
                Cardinal l;
                LayerTypePtr layer = *(int*)(ecx + 24) + 76;
                if ( PCB->Data->LayerN == -2 )
                {
                  /* phantom */ LocationType dx;
                  /* phantom */ LocationType dy;
                  RotateBoxLowLevel( Buffer->X + 8, Buffer->X, *(int*)(Buffer->X + 4), ebp_28 );
                  return;
                }
                l = 0;
                Buffer = &ecx;
              {
                while ( n = layer->PolygonN + -1, layer->PolygonN + -1 == -1 )
                {
                  l++;
                  if ( PCB->Data->LayerN + 2 <= l )
                    Buffer = &n;
                  else
                  {
                    layer++;
                  }
                }
                do
                {
                  polygon = layer->Polygon + ( layer->PolygonN * 60 ) + -60;
                  r_delete_entry( &layer->polygon_tree, layer->Polygon + ( layer->PolygonN * 60 ) + -60 + -60 );
                  RotatePolygonLowLevel( polygon, *ebp_44, *(int*)(ebp_44 + 4), ebp_28 );
                  r_insert_entry( &layer->polygon_tree, (int)( &polygon->BoundingBox ), 0 );
                  n += -1;
                }
                while ( n + -1 == -1 );
                l++;
              }
              }
              else
              {
                layer++;
              }
            }
            do
            {
              text = layer->Text + ( layer->TextN * 60 ) + -60;
              r_delete_entry( &layer->text_tree, layer->Text + ( layer->TextN * 60 ) + -60 + -60 );
              RotateTextLowLevel( text, *ebp_48, *(int*)(ebp_48 + 4), ebp_28 );
              r_insert_entry( &layer->text_tree, (int)( &text->BoundingBox ), 0 );
              n += -1;
            }
            while ( n + -1 == -1 );
            l++;
          }
          }
          else
          {
            layer++;
          }
        }
        do
        {
          arc = layer->Arc + ( layer->ArcN * 68 ) + -68;
          r_delete_entry( &layer->arc_tree, layer->Arc + ( layer->ArcN * 68 ) + -68 + -68 );
          RotateArcLowLevel( arc, *ebp_48, *(int*)(ebp_48 + 4), ebp_28 );
          r_insert_entry( &layer->arc_tree, (int)( &arc->BoundingBox ), 0 );
          n += -1;
        }
        while ( n + -1 == -1 );
        l++;
      }
      }
      else
      {
        layer++;
      }
    }
    do
    {
      line = layer->Line + ( layer->LineN * 88 ) + -88;
      r_delete_entry( &layer->line_tree, layer->Line + ( layer->LineN * 88 ) + -88 + -88 );
      RotateLineLowLevel( line, *ebp_48, *(int*)(ebp_48 + 4), ebp_28 );
      r_insert_entry( &layer->line_tree, (int)( &line->BoundingBox ), 0 );
      n += -1;
    }
    while ( n + -1 == -1 );
    l++;
  }
  }
}
}
}
}
Missing divisor:  0xb60b60b7(8)
Missing divisor:  0xb60b60b7(8)
void FreeRotateElementLowLevel( DataTypePtr Data, ElementTypePtr Element, LocationType X, LocationType Y, double cosa, double sina, double Angle )
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
  double (null);
  double (null);
{
  Cardinal n = Element->LineN + -1;
  LineTypePtr line;
  if ( Element->LineN + -1 != -1 )
  {
    Y = Y;
    while ( 1 )
    {
      n += -1;
      line = ( Element->LineN * 88 ) + -88 + -88 + Element->Line;
      SetLineBoundingBox( Element->Line + ( Element->LineN * 88 ) + -88 + -88 );
      if ( n == -1 )
      {
        Data = Data;
        Element = Element;
      }
      else
      {
      }
    }
  }
  else
  {
  }
{
  Cardinal n;
  Cardinal sn;
  PinTypePtr pin;
  if ( Element->PinN )
  {
    Data->ViaN = n;
    while ( 1 )
    {
      pin = Element->Pin + ( n * 76 );
      if ( Data->ViaN )
      {
        r_delete_entry( &Data->pin_tree, (int)( &pin->BoundingBox ) );
      }
      RestoreToPolygon( &Data->ViaN, 256, (void*)Element, (void*)pin );
      pin->X = (int)( ebp_64 + ( ( cosa + ( ( cosa + cosa ) * (double)( line->Point1.X - X ) ) ) * (double)( pin->X - X ) ) );
      pin->Y = (int)( ebp_80 + ( ( ( cosa + cosa ) * (double)( line->Point1.X - X ) * (double)( pin->Y - Y ) ) - ( cosa * (double)( pin->X - X ) ) ) );
      SetPinBoundingBox( pin );
      sn = Element->PinN;
      if ( Element->PinN == 0 || sn <= ( sn + n + 1 ) - Element->PinN )
        break;
      else
      {
      }
    }
  }
{
  Cardinal n = 0;
  Cardinal sn;
  PadTypePtr pad;
  while ( 1 )
  {
    sn = Element->PadN;
    do
    {
      if ( sn && n < sn )
      {
        pad = Element->Pad + ( n * 104 );
        if ( Data )
          r_delete_entry( &Data->pad_tree, (int)( &pad->BoundingBox ) );
        RestoreToPolygon( Data, 512, (void*)Element, (void*)pad );
        pad->Point1.X = (int)( ebp_64 + ( ( ebp_48 + ebp_40 ) * (double)( pad->Point1.X - ebp_52 ) ) );
        pad->Point1.Y = (int)( ebp_80 + ( ( ebp_40 * (double)( pad->Point1.Y - ebp_68 ) ) - ( ebp_48 * (double)( pad->Point1.X - ebp_52 ) ) ) );
        pad->Point2.X = (int)( ebp_64 + ( ( ebp_48 + ebp_40 ) * (double)( pad->Point2.X - ebp_52 ) ) );
        pad->Point2.Y = (int)( ebp_80 + ( ( ebp_40 * (double)( pad->Point2.Y - ebp_68 ) ) - ( ebp_48 * (double)( pad->Point2.X - ebp_52 ) ) ) );
        SetLineBoundingBox( &pad->BoundingBox.X1 );
        sn = Element->PadN;
      }
      else
      {
        Cardinal n = Element->ArcN + -1;
        /* phantom */ ArcTypePtr arc;
        if ( Element->ArcN + -1 != -1 )
        {
          Y = Y;
          do
          {
Missing divisor:  0xb60b60b7(8)
            n += -1;
            Element->Arc->BoundingBox.X1 = (int)( ebp_64 + ( ( fp7 + fp6 ) * (double)( ecx - ebp_52 ) ) );
            Element->Arc->BoundingBox.X1 = (int)( (double)( *(int*)(Element->Arc + ( Element->ArcN * 68 ) + -68 + 52 + 4) - Y ) * (double)( *(int*)(Element->Arc + ( Element->ArcN * 68 ) + -68 + 52 + 4) - Y ) );
            Element->Arc->BoundingBox.X1 = (int)( (double)( *(int*)(Element->Arc + ( Element->ArcN * 68 ) + -68 + 52 + 8) ) ) - ( ( (int)( (double)( Element->Arc->BoundingBox.X1 ) ) / 0 ) * 360 );
            Element->Arc->BoundingBox.X1 = Element->Arc + ( Element->ArcN * 68 ) + -68 + 52 + -68;
          }
          while ( n + -1 != -1 );
          Data = Data;
          Element = Element;
        }
        else
        {
        }
        Element->MarkX = (int)( (double)( X ) + ( ( (double)( *(int*)(Element->Arc + ( Element->ArcN * 68 ) + -68 + 52 + 4) - Y ) * (double)( *(int*)(Element->Arc + ( Element->ArcN * 68 ) + -68 + 52 + 4) - Y ) ) * (double)( Element->MarkY - Y ) ) );
        Element->MarkY = (int)( (double)( Y ) );
        SetElementBoundingBox( Data, Element, &PCB->Font );
        Y = Element;
        X = Element;
        Element = 2;
      }
    }
    while ( Element->PadN != Element->PadN );
    n++;
  }
}
}
}
}
Missing divisor:  0xb60b60b7(8)
void FreeRotateBuffer( BufferTypePtr Buffer, double Angle )
{
  int eax;
  int edx;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  double (null);
  double (null);
  double (null);
  double (null);
  double (null);
  double (null);
  int ebp_72;
  int ebp_64;
  /* phantom */ double cosa, sina;
  ;
{
  Cardinal n;
  Cardinal sn = Buffer->Data->ViaN;
  PinTypePtr via;
  if ( Buffer->Data->ViaN )
  {
    n = 0;
    Buffer = Buffer;
    while ( 1 )
    {
      via = Buffer->Data->Via + ( n * 76 );
      r_delete_entry( &Buffer->Data->via_tree, Buffer->Data->Via + ( n * 76 ) );
      via->X = (int)( ( ( ebp_64 + cos( ( Angle * 3.141592653590 ) / 180.000000000000 ) ) * (double)( via->X - Buffer->X ) ) + (double)( Buffer->X ) );
      via->Y = (int)( ( ( cos( ( Angle * 3.141592653590 ) / 180.000000000000 ) * (double)( via->Y - Buffer->Y ) ) - ( ebp_64 * (double)( via->X - Buffer->X ) ) ) + (double)( Buffer->Y ) );
      SetPinBoundingBox( via );
      r_insert_entry( &Buffer->Data->via_tree, (int)( &via->BoundingBox ), 0 );
      sn = Buffer->Data->ViaN;
      if ( Buffer->Data->ViaN == 0 || sn <= ( sn + n + 1 ) - ebp_72 )
      {
      }
      else
      {
      }
    }
  }
{
  Cardinal n = Buffer->Data->ElementN + -1;
  /* phantom */ ElementTypePtr element;
  if ( Buffer->Data->ElementN + -1 != -1 )
  {
    Buffer = Buffer;
    while ( 1 )
    {
      n += -1;
      FreeRotateElementLowLevel( &Buffer->Data, Buffer->Data->Element + ( Buffer->Data->ElementN * 300 ) + -300 + -300, Buffer->X, Buffer->Y, (double)( via->X - Buffer->X ), ebp_64, Angle );
      if ( n == -1 )
      {
      }
      else
      {
      }
    }
  }
{
  Cardinal l;
  LayerTypePtr layer = Buffer->Data + 76;
  if ( PCB->Data->LayerN != -2 )
  {
    l = 0;
  {
    while ( n = layer->LineN + -1, layer->LineN + -1 == -1 )
    {
      l++;
      if ( PCB->Data->LayerN + 2 <= l )
      {
        Cardinal l;
        LayerTypePtr layer = Buffer->Data + 76;
        if ( PCB->Data->LayerN != -2 )
        {
        {
          Cardinal n;
          ArcTypePtr arc;
          Buffer = Buffer;
          l = 0;
          while ( n = layer->ArcN + -1, layer->ArcN + -1 == -1 )
          {
            l++;
            if ( PCB->Data->LayerN + 2 <= l )
            {
              Cardinal l;
              LayerTypePtr layer = Buffer->Data + 76;
              if ( PCB->Data->LayerN != -2 )
              {
                l = 0;
              {
                while ( n = layer->PolygonN + -1, layer->PolygonN + -1 == -1 )
                {
                  l++;
                  if ( PCB->Data->LayerN + 2 <= l )
                  {
                    Buffer = Buffer;
                  }
                  layer++;
                }
                ebp_72 = ( layer->PolygonN * 60 ) + -60;
                do
                {
                  polygon = ebp_72 + layer->Polygon;
                  r_delete_entry( &layer->polygon_tree, ebp_72 + layer->Polygon );
                {
                  Cardinal n = polygon->PointN + -1;
                  /* phantom */ PointTypePtr point;
                  if ( polygon->PointN + -1 != -1 )
                  {
                    polygon->PointN = polygon->Points + ( polygon->PointN * 20 ) + -20;
                    do
                    {
                      n += -1;
                      polygon->Points->X = (int)( ebp_72 + ( ( ebp_72 + ebp_72 ) * (double)( *(int*)(polygon->Points + ( polygon->PointN * 20 ) + -20) - Buffer->X ) ) );
                      polygon->Points->X = (int)( 0.000000000000 - ( (double)( Buffer->X ) * (double)( *(int*)(polygon->Points + ( polygon->PointN * 20 ) + -20) - Buffer->X ) ) );
                      polygon->Points->X = polygon->Points + ( polygon->PointN * 20 ) + -20 + -20;
                    }
                    while ( n + -1 != -1 );
                  }
                  SetPolygonBoundingBox( polygon );
                  r_insert_entry( &layer->polygon_tree, (int)( &polygon->BoundingBox ), 0 );
                  n += -1;
                  ebp_72 += -60;
                }
                }
                while ( n == -1 );
                l++;
              }
              }
              else
              {
              }
            }
            else
            {
              layer++;
            }
          }
          ebp_64 = ( layer->ArcN * 68 ) + -68;
          do
          {
            arc = ebp_64 + layer->Arc;
            r_delete_entry( &layer->arc_tree, ebp_64 + layer->Arc );
Missing divisor:  0xb60b60b7(8)
            arc->X = (int)( ( ( 0.000000000000 + ebp_72 ) * (double)( arc->X - Buffer->X ) ) + (double)( Buffer->X ) );
            arc->Y = (int)( ( ( ebp_72 * (double)( arc->Y - Buffer->Y ) ) - ( 0.000000000000 * (double)( arc->X - Buffer->X ) ) ) + (double)( Buffer->Y ) );
            arc->StartAngle = (int)( Angle + (double)( arc->StartAngle ) ) - ( ( (int)( Angle + (double)( arc->StartAngle ) ) / 0 ) * 360 );
            r_insert_entry( &layer->arc_tree, (int)( &arc->BoundingBox ), 0 );
            n += -1;
            ebp_64 += -68;
          }
          while ( n == -1 );
          l++;
        }
        }
        else
        {
        }
      }
      else
      {
        layer++;
      }
    }
    while ( 1 )
    {
      line = layer->Line + ( layer->LineN * 88 ) + -88;
      r_delete_entry( &layer->line_tree, layer->Line + ( layer->LineN * 88 ) + -88 + -88 );
      line->Point1.X = (int)( ( ( ebp_136 + ebp_120 ) * (double)( line->Point1.X - *ebp_76 ) ) + (double)( *ebp_76 ) );
      line->Point1.Y = (int)( ( ( ebp_120 * (double)( line->Point1.Y - *(int*)(ebp_76 + 4) ) ) - ( ebp_136 * (double)( line->Point1.X - *ebp_76 ) ) ) + (double)( *(int*)(ebp_76 + 4) ) );
      line->Point2.X = (int)( (double)( *ebp_76 ) + ( ( ebp_136 + ebp_120 ) * (double)( line->Point2.X - *ebp_76 ) ) );
      line->Point2.Y = (int)( ( ( ebp_120 * (double)( line->Point2.Y - *(int*)(ebp_76 + 4) ) ) - ( ebp_136 * (double)( line->Point2.X - *ebp_76 ) ) ) + (double)( *(int*)(ebp_76 + 4) ) );
      SetLineBoundingBox( line );
      r_insert_entry( &layer->line_tree, (int)( &line->BoundingBox ), 0 );
      n += -1;
      if ( n == -1 )
      {
      }
      else
      {
      }
      l++;
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
int ActionFreeRotateBuffer( int argc, char **argv, int x, int y )
{
  HideCrosshair( 0 );
  FreeRotateBuffer( &Buffers[ Settings.BufferNumber ], strtod( argv[0], 0 ) );
  RestoreCrosshair( 0 );
  return 0;
}
void InitBuffers( void )
{
  /* phantom */ int i;
  Buffers->Data = CreateNewBuffer( );
  Buffers[1].Data = CreateNewBuffer( );
  Buffers[2].Data = CreateNewBuffer( );
  Buffers[3].Data = CreateNewBuffer( );
  Buffers[4].Data = CreateNewBuffer( );
  return;
}
void SwapBuffers( void )
{
  /* phantom */ int i;
  do
  {
    SwapBuffer( &eax[0].ViaN );
  }
  while ( Buffers[1].X == Progname );
}
void MirrorBuffer( BufferTypePtr Buffer )
{
  int eax;
  int ecx;
  int edx;
  int ebp_32;
  int i;
  ebp_32 = Buffer->Data;
  if ( Buffer->Data->ElementN )
    Buffer = "You can't mirror a buffer that has elements!\n";
  else
  {
    if ( PCB->Data->LayerN >= 0 )
    {
      /* phantom */ LayerTypePtr layer;
      i = 0;
      if ( Buffer->Data->Layer->TextN == 0 )
      {
        do
        {
          i++;
          if ( i + 1 <= PCB->Data->LayerN + 1 )
            continue;
        }
        while ( Buffer->Data->Layer[2].TextN );
      }
      Buffer = "You can't mirror a buffer that has text!\n";
    }
    Buffer->Y = PCB->MaxHeight - Buffer->Y;
  {
    Cardinal n;
    Cardinal sn = *ebp_32;
    /* phantom */ PinTypePtr via;
    if ( *ebp_32 )
    {
      *(int*)(*(int*)(ebp_32 + 28) + 56) = PCB->MaxHeight - *(int*)(*(int*)(ebp_32 + 28) + 56);
      n = 1;
      while ( *(int*)(*(int*)(ebp_32 + 28)) += 76, n < sn )
      {
        i = PCB->MaxHeight - i;
        n++;
      }
    }
  {
    Cardinal l;
    LayerTypePtr layer;
    ebp_32 += 76;
    if ( PCB->Data->LayerN + 2 )
    {
      l = 0;
    {
      while ( n = layer->LineN + -1, layer->LineN + -1 == -1 )
      {
        l++;
        if ( PCB->Data->LayerN + 2 <= l + 1 )
        {
        }
        else
        {
          layer++;
        }
      }
      layer->LineN = layer->Line + ( layer->LineN * 88 ) + -44;
      do
      {
        n += -1;
        layer->Line->BoundingBox.X1 = layer[1].text_tree - layer->Line->BoundingBox.X1;
        layer->Line->BoundingBox.X1 = layer[1].text_tree - layer->Line->BoundingBox.X1;
        layer->Line->BoundingBox.X1 = layer->Line + ( layer->LineN * 88 ) + -44 + -88;
      }
      while ( n + -1 != -1 );
      l++;
    }
    }
  {
    Cardinal l;
    LayerTypePtr layer;
    if ( PCB->Data->LayerN != -2 )
    {
      layer = ebp_32;
      l = 0;
    {
      while ( n = layer->ArcN + -1, layer->ArcN + -1 == -1 )
      {
        l++;
        if ( PCB->Data->LayerN + 2 <= l + 1 )
        {
          Cardinal l;
          LayerTypePtr layer = Buffer->Data + 76;
          if ( PCB->Data->LayerN == -2 )
          {
            Buffer = Buffer;
          }
          l = 0;
        {
          while ( n = layer->PolygonN + -1, layer->PolygonN + -1 == -1 )
          {
            l++;
            if ( PCB->Data->LayerN + 2 <= l )
            {
              Buffer = Buffer;
            }
            layer++;
          }
          do
          {
            Cardinal n = polygon->PointN + -1;
            /* phantom */ PointTypePtr point;
            if ( polygon->PointN + -1 != -1 )
            {
              polygon->PointN = polygon->Points + ( polygon->PointN * 20 ) + -20;
              do
              {
                n += -1;
                polygon->Points->X = PCB->MaxHeight - polygon->Points->X;
                polygon->Points->X = polygon->Points + ( polygon->PointN * 20 ) + -20 + -20;
              }
              while ( n + -1 != -1 );
            }
            SetPolygonBoundingBox( polygon );
            n += -1;
          }
          while ( n != -1 );
          l++;
        }
        }
        else
        {
          layer++;
        }
      }
      while ( 1 )
      {
        n += -1;
        arc = layer->Arc + ( layer->ArcN * 68 ) + -68;
        layer->Arc->BoundingBox.X1 = 0 - layer->Arc->BoundingBox.X1;
        layer->Arc->BoundingBox.X1 = 0 - layer->Arc->BoundingBox.X1;
        layer->Arc->BoundingBox.X1 = *(int*)(PCB + 148) - layer->Arc->BoundingBox.X1;
        SetArcBoundingBox( layer->Arc + ( layer->ArcN * 68 ) + -68 + -68 );
        if ( n == -1 )
          l = l;
        else
        {
        }
        l++;
      }
    }
    }
  }
  }
  }
  }
}
void SwapBuffer( BufferTypePtr Buffer )
{
  int eax;
  int ecx;
  int edx;
  int ebp_192;
  int ebp_184;
  int ebp_152;
  int ebp_128;
  int j, k;
  /* phantom */ Cardinal sgroup;
  Cardinal cgroup;
  LayerType swap;
{
  Cardinal n = Buffer->Data->LayerN + -1;
  ElementTypePtr element;
  if ( Buffer->Data->LayerN + -1 != -1 )
  {
    while ( 1 )
    {
      n += -1;
      element = ( Buffer->Data->LayerN * 300 ) + -300 + Buffer->Data->Element;
      r_delete_element( &Buffer->Data, Buffer->Data->Element + ( Buffer->Data->LayerN * 300 ) + -300 + -300 );
      MirrorElementCoordinates( &Buffer->Data, element, 0 );
      if ( n == -1 )
      {
        n = Buffer;
        n = Buffer->Data;
      }
      else
      {
      }
    }
  }
  Buffer->Y = PCB->MaxHeight - Buffer->Y;
{
  Cardinal n;
  Cardinal sn = n;
  PinTypePtr via;
  if ( n )
  {
    n = 0;
    edi = Buffer;
    Buffer = Buffer;
    while ( 1 )
    {
      via = Buffer->Data->Via + ( n * 76 );
      r_delete_entry( &n, n + ( n * 76 ) );
      via->Y = PCB->MaxHeight - via->Y;
      SetPinBoundingBox( via );
      r_insert_entry( &Buffer->Data->via_tree, (int)( &via->BoundingBox ), 0 );
      sn = Buffer->Data->ViaN;
      if ( Buffer->Data->ViaN == 0 || sn <= ( sn + n + 1 ) - sn )
      {
      }
      else
      {
      }
    }
  }
{
  Cardinal l;
  LayerTypePtr layer = Buffer->Data + 76;
  if ( PCB->Data->LayerN != -2 )
  {
    l = 0;
  {
    while ( n = layer->LineN + -1, layer->LineN + -1 == -1 )
    {
      l++;
      if ( PCB->Data->LayerN + 2 <= l )
      {
        Cardinal l;
        LayerTypePtr layer = Buffer->Data + 76;
        if ( PCB->Data->LayerN != -2 )
        {
          l = 0;
        {
          while ( n = layer->ArcN + -1, layer->ArcN + -1 == -1 )
          {
            l++;
            if ( PCB->Data->LayerN + 2 <= l )
            {
              Cardinal l;
              LayerTypePtr layer = Buffer->Data + 76;
              if ( PCB->Data->LayerN != -2 )
              {
                l = 0;
              {
                while ( n = layer->PolygonN + -1, layer->PolygonN + -1 == -1 )
                {
                  l++;
                  if ( PCB->Data->LayerN + 2 <= l )
                  {
                    l = Buffer->Data;
                    layer = Buffer->Data + 76;
                    if ( PCB->Data->LayerN != -2 )
                    {
                      l = 0;
                    {
                      while ( n = layer->TextN + -1, layer->TextN + -1 == -1 )
                      {
                        l++;
                        if ( PCB->Data->LayerN + 2 <= l )
                        {
                          Cardinal l = Buffer->Data;
                          LayerTypePtr layer;
                          memcpy( swap.Name, l + ( ( polygon->Points + ( polygon->PointN * 20 ) + -20 + -20 ) * 92 ) + 76, 92 );
                          memcpy( l + ( PCB->Data->LayerN * 92 ) + 76, l + ( ( PCB->Data->LayerN + 1 ) * 92 ) + 76, 92 );
                          memcpy( l + ( ( n + 1 ) * 92 ) + 76, swap.Name, 92 );
                          if ( PCB->LayerGroups.Number[ cgroup ] != PCB->LayerGroups.Number[ GetLayerGroupNumberByNumber( n ) ] || PCB == 0 )
                          {
                            SetBufferBoundingBox( Buffer );
                            return;
                          }
                        {
                          /* phantom */ int t1, t2;
                          Cardinal cnumber;
                          Cardinal snumber;
                          ebp_192 = 0;
                          ebp_184 = edx + ebx + 7444;
                          j = 0;
                          do
                          {
                            snumber = *ebp_184;
                            if ( *ebp_184 < PCB->Data->LayerN )
                            {
                              memcpy( swap.Name, Buffer->Data + ( *ebp_184 * 92 ) + 76, 92 );
                              if ( !0 )
                              {
                                k = ebp_192;
                                while ( 1 )
                              }
                              memcpy( Buffer->Data + ( snumber * 92 ) + 76, Buffer->Data + ( cnumber * 92 ) + 76, 92 );
                            {
                              Cardinal n;
                              /* phantom */ ElementTypePtr element;
                              memcpy( *(int*)(0), swap.Name, 92 );
                              n = Buffer->Data->ElementN + -1;
                              ebp_192++;
                              if ( Buffer->Data->ElementN + -1 != -1 )
                              {
                              {
                                Cardinal n;
                                Cardinal sn;
                                /* phantom */ PinTypePtr pin;
                                ebp_152 = eax + *(int*)(ebp_176 + 32) + -76;
                                do
                                {
                                  sn = *ebp_152;
                                  if ( *ebp_152 )
                                  {
                                    n = 0;
                                    do
                                    {
                                      n++;
                                    }
                                    while ( n + 1 < sn );
                                  }
                                  n += -1;
                                  ebp_152 += -300;
                                }
                                while ( n != -1 );
                              }
                              }
                            {
                              Cardinal n;
                              Cardinal sn = Buffer->Data->ViaN;
                              /* phantom */ PinTypePtr via;
                              if ( Buffer->Data->ViaN )
                              {
                                n = 0;
                                do
                                {
                                  *(char*)(Buffer->Data->Via + ( snumber >> 1 ) + 24) = ( ( ( ( 15 << ( ( cnumber & 1 ) << 2 ) ) & *(char*)(Buffer->Data->Via + ( cnumber >> 1 ) + 24) ) != 0 ) << ( ( snumber & 1 ) << 2 ) ) | ( (unsigned char)( ~( 15 << ( ( snumber & 1 ) << 2 ) ) ) & *(char*)(Buffer->Data->Via + ( snumber >> 1 ) + 24) );
                                  *(char*)(Buffer->Data->Via + ( cnumber >> 1 ) + 24) = (unsigned char)( ( ( ( 15 << ( ( snumber & 1 ) << 2 ) ) & *(char*)(Buffer->Data->Via + ( snumber >> 1 ) + 24 + 76) ) != 0 ) << ( ( cnumber & 1 ) << 2 ) ) | ( (unsigned char)( ~( 15 << ( ( cnumber & 1 ) << 2 ) ) ) & *(char*)(Buffer->Data->Via + ( cnumber >> 1 ) + 24) );
                                  *(int*)(Buffer->Data->Via + ( cnumber >> 1 ) + 24) += 76;
                                  n++;
                                }
                                while ( n + 1 < sn );
                              }
                            }
                            }
                            }
                            j++;
                            ebp_184 += 4;
                          }
                          while ( PCB->LayerGroups.Number[ cgroup ] != j );
                        }
                          SetBufferBoundingBox( Buffer );
                          return;
                        }
                        else
                        {
                          layer++;
                        }
                      }
                      layer = &n;
                      do
                      {
                        n += -1;
                        text = ( layer * 60 ) + -60 + layer->Text;
                        r_delete_entry( &layer->text_tree, PCB->Data->via_tree + ( layer * 60 ) + -60 + -60 );
                        text->Flags.f ^= 128;
                        text->Y = PCB->MaxHeight - text->Y;
                        SetTextBoundingBox( &PCB->Font, text );
                        r_insert_entry( &layer->text_tree, (int)( &text->BoundingBox ), 0 );
                      }
                      while ( n == -1 );
                      layer = layer;
                      l++;
                    }
                    }
                  }
                  else
                  {
                    layer++;
                  }
                }
                ebp_128 = ( layer->PolygonN * 60 ) + -60;
                do
                {
                  polygon = ebp_128 + layer->Polygon;
                  r_delete_entry( &layer->polygon_tree, ebp_128 + layer->Polygon );
                {
                  Cardinal n = polygon->PointN + -1;
                  /* phantom */ PointTypePtr point;
                  if ( polygon->PointN + -1 != -1 )
                  {
                    polygon->PointN = polygon->Points + ( polygon->PointN * 20 ) + -20;
                    do
                    {
                      n += -1;
                      polygon->Points->X = PCB->MaxHeight - polygon->Points->X;
                      polygon->Points->X = polygon->Points + ( polygon->PointN * 20 ) + -20 + -20;
                    }
                    while ( n + -1 != -1 );
                  }
                  SetPolygonBoundingBox( polygon );
                  r_insert_entry( &layer->polygon_tree, (int)( &polygon->BoundingBox ), 0 );
                  n += -1;
                  ebp_128 += -60;
                }
                }
                while ( n == -1 );
                l++;
              }
              }
            }
            else
            {
              layer++;
            }
          }
          layer = &n;
          do
          {
            n += -1;
            arc = ( layer * 68 ) + -68 + layer->Arc;
            r_delete_entry( &layer->arc_tree, PCB->Data->LayerN + ( layer * 68 ) + -68 + -68 );
            arc->StartAngle = 0 - arc->StartAngle;
            arc->Delta = 0 - arc->Delta;
            arc->Y = PCB->MaxHeight - arc->Y;
            SetArcBoundingBox( arc );
            r_insert_entry( &layer->arc_tree, (int)( &arc->BoundingBox ), 0 );
          }
          while ( n == -1 );
          layer = layer;
          l++;
        }
        }
      }
      else
      {
        layer++;
      }
    }
    layer = &n;
    do
    {
      n += -1;
      line = ( layer * 88 ) + -88 + *(int*)(ebp_212 + 36);
      r_delete_entry( &layer->line_tree, Buffer->Data->Rat + ( layer * 88 ) + -88 + -88 );
      line->Point2.Y = PCB->MaxHeight - line->Point2.Y;
      line->Point1.Y = PCB->MaxHeight - line->Point1.Y;
      SetLineBoundingBox( line );
      r_insert_entry( &layer->line_tree, (int)( &line->BoundingBox ), 0 );
    }
    while ( n == -1 );
    layer = layer;
    l++;
  }
  }
}
}
}
}
void *MoveObjectToBuffer( DataTypePtr Destination, DataTypePtr Src, int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  Dest = &Destination->ViaN;
  Source = &Src->ViaN;
  Type = Ptr1 = Ptr2;
  Src = &Type;
  Ptr2 = Ptr3;
  Destination = (struct {
     Cardinal ViaN;
     Cardinal ViaMax;
     Cardinal ElementN;
     Cardinal ElementMax;
     Cardinal RatN;
     Cardinal RatMax;
     int LayerN;
     PinTypePtr Via;
     ElementTypePtr Element;
     RatTypePtr Rat;
     rtree_t *via_tree;
     rtree_t *element_tree;
     rtree_t *pin_tree;
     rtree_t *pad_tree;
     rtree_t *name_tree[3];
     rtree_t *rat_tree;
     struct PCBType *pcb;
     LayerType Layer[18];
  }*)&MoveBufferFunctions.Line;
}
void *CopyObjectToBuffer( DataTypePtr Destination, DataTypePtr Src, int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  Dest = &Destination->ViaN;
  Source = &Src->ViaN;
  Type = Ptr1 = Ptr2;
  Src = &Type;
  Ptr2 = Ptr3;
  Destination = (struct {
     Cardinal ViaN;
     Cardinal ViaMax;
     Cardinal ElementN;
     Cardinal ElementMax;
     Cardinal RatN;
     Cardinal RatMax;
     int LayerN;
     PinTypePtr Via;
     ElementTypePtr Element;
     RatTypePtr Rat;
     rtree_t *via_tree;
     rtree_t *element_tree;
     rtree_t *pin_tree;
     rtree_t *pad_tree;
     rtree_t *name_tree[3];
     rtree_t *rat_tree;
     struct PCBType *pcb;
     LayerType Layer[18];
  }*)&AddBufferFunctions.Line;
}
void register_rotate_action_list( void )
{
  hid_register_actions( rotate_action_list, 1 );
  return;
}
#if 0
#endif
