#include "rotate.c.h"
static LocationType CenterX;
static LocationType CenterY;
static BYTE Number;
static ObjectFunctionType RotateFunctions = { 0, &RotateText, 0, 0, &RotateElement, &RotateElementName, 0, 0, &RotateLinePoint, 0, &RotateArc, 0 }
;
void RotatePointLowLevel( PointTypePtr Point, LocationType X, LocationType Y, BYTE Number )
{
  int ecx;
  int edx;
  int ebx;
{
  LocationType dx = Point->X - X;
  LocationType dy = Point->Y - Y;
  switch ( __MOD(Number,4) )
  {
  case 1:
    dy = dy + X;
    Point = dy + X;
    Point->Y = Y - dx - dx;
    break;
  case 3:
    Point = X - dy - dy;
    Point->Y = Y + dx + Y;
    break;
  case 2:
    Point = X - dx - dx;
    Point->Y = Y - dy - dy;
    break;
  default:
    break;
  }
  return;
}
}
void RotateLineLowLevel( LineTypePtr Line, LocationType X, LocationType Y, BYTE Number )
{
  int eax;
  int ecx;
  int ebx;
  int esi;
  int edi;
{
  LocationType dx;
  LocationType dy = Line->Point1.Y - Y;
  dx = Line->Point1.X - X;
  switch ( __MOD(Number,4) )
  {
  case 1:
    Line->Point1.Y = Y - dx;
    Line->Point1.X = ebp_28 + X;
    dx = Line->Point2.X - X;
    dy = Line->Point2.Y - Y;
    X += dy;
    Y -= dx;
    Line->Point2.X = dy + X;
    Line->Point2.Y = Y - dx;
    if ( dy + X == dy + X + X )
    {
      if ( Y - dx <= Y - dx )
      {
      }
    {
      /* phantom */ LocationType t;
      Line->Point1.Y = Y - dx;
      Line->Point2.Y = Y - edi;
    }
    }
    else
    {
      if ( Y != Y - dx || dy + X + X <= dy + X )
      {
      }
    {
      /* phantom */ LocationType t;
      Line->Point2.X = ebp_28 + X;
      Line->Point1.X = dy;
    }
    }
    break;
  default:
  {
    LocationType dx = Line->Point2.X - X;
    LocationType dy = Line->Point2.Y - Y;
    switch ( __MOD(Number,4) )
    {
    case 1:
      X += dy;
      Y -= dx;
      Line->Point2.X = dy + X;
      Line->Point2.Y = Y - dx;
      break;
    case 2:
      X -= dx;
      Y -= dy;
      Line->Point2.X = X - dx;
      Line->Point2.Y = Y - dy;
      if ( X - dx == X - dx )
      {
      }
      else
      {
      }
      break;
    case 3:
      X -= dy;
      Y += dx;
      Line->Point2.X = X - dy;
      Line->Point2.Y = dx + Y;
      break;
    default:
      break;
    }
  }
    break;
  case 2:
    Line->Point1.X = X - dx;
    dx = Line->Point2.X - X;
    Line->Point1.Y = Y - ( dy + X );
    dy = Line->Point2.Y - Y;
    break;
  case 3:
    Line->Point1.Y = dx + Y;
    dx = Line->Point2.X - X;
    Line->Point1.X = X - ( dy + X );
    dy = Line->Point2.Y - Y;
    break;
  }
}
}
void RotateTextLowLevel( TextTypePtr Text, LocationType X, LocationType Y, BYTE Number )
{
  int eax;
  int ecx;
  int edx;
  int esi;
  int edi;
  BYTE number;
  RotateBoxLowLevel( (int)( &Text->BoundingBox ), X, Y, Number );
{
  LocationType dx;
  LocationType dy = Text->Y - Y;
  dx = Text->X - X;
  switch ( __MOD(Number,4) )
  {
  case 1:
    Text->X = dy + X;
    Text->Y = Y - dx;
    break;
  case 3:
    Text->X = X - dy - dy;
    Text->Y = ( Text->X - X ) + Y;
    break;
  case 2:
    Text->X = X - dx - ( Text->X - X );
    Text->Y = Y - dy;
    break;
  default:
    break;
  }
  Text->Direction = __MOD(( Text->Direction + (unsigned char)( number ) ),4);
  return;
}
}
// Lost vars at line 169 through switch synthesis
void RotatePolygonLowLevel( PolygonTypePtr Polygon, LocationType X, LocationType Y, BYTE Number )
{
  int eax;
  int ecx;
  int edx;
{
  Cardinal n = Polygon->PointN + -1;
  /* phantom */ PointTypePtr point;
  if ( Polygon->PointN + -1 != -1 )
  {
    Polygon->PointN = ( Polygon->PointN * 20 ) + -20 + Polygon->Points;
    do
    {
      dx = *(int*)(( Polygon->PointN * 20 ) + -20 + Polygon->Points + -20) - X;
      dy = *(int*)(( Polygon->PointN * 20 ) + -20 + Polygon->Points + -16) - Y;
      switch ( __MOD(Number,4) )
      {
      default:
        n += -1;
        *(int*)(( Polygon->PointN * 20 ) + -20 + Polygon->Points + -20) += -20;
        break;
      case 1:
        *(int*)(( Polygon->PointN * 20 ) + -20 + Polygon->Points + -20) = ebp_16 + dy;
        *(int*)(( Polygon->PointN * 20 ) + -20 + Polygon->Points + -16) = Y - dx;
        break;
      case 2:
        n += -1;
        Polygon->Points->X = X - dx;
        *(int*)(( Polygon->PointN * 20 ) + -20 + Polygon->Points + 4) = Y - dy;
        Polygon->Points->X = ( Polygon->PointN * 20 ) + -20 + Polygon->Points + -20;
        if ( n + -1 == -1 )
          break;
        break;
      case 3:
        *(int*)(( Polygon->PointN * 20 ) + -20 + Polygon->Points + -20) = X - dy;
        *(int*)(( Polygon->PointN * 20 ) + -20 + Polygon->Points + -16) = dx + Y;
        break;
      }
    }
    while ( n + -1 == -1 );
  }
  else
  {
  }
  Number = Number;
  X = X;
  Polygon = Polygon;
}
}
void *RotateText( LayerTypePtr Layer, TextTypePtr Text )
{
  EraseText( Layer, Text );
  RestoreToPolygon( &PCB->Data, 16, (void*)Layer, (void*)Text );
  r_delete_entry( &Layer->text_tree, (int)( &Text->BoundingBox ) );
  RotateTextLowLevel( Text, CenterX, CenterY, Number );
  r_insert_entry( &Layer->text_tree, (int)( &Text->BoundingBox ), 0 );
  ClearFromPolygon( &PCB->Data, 16, (void*)Layer, (void*)Text );
  DrawText( Layer, Text, 0 );
  Draw( );
  return (void*)Text;
}
Missing divisor:  0xb60b60b7(8)
Missing divisor:  0xb60b60b7(8)
void RotateArcLowLevel( ArcTypePtr Arc, LocationType X, LocationType Y, BYTE Number )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  int edi;
Missing divisor:  0xb60b60b7(8)
  BDimension save;
{
  LocationType dx = Arc->X - X;
  LocationType dy;
  Arc->StartAngle = ( Arc->StartAngle + ( Number * 90 ) ) - ( dy * 360 );
  dy = Arc->Y - Y;
  switch ( __MOD(Number,4) )
  {
  case 1:
    Arc->X = dy + X;
    Arc->Y = Y - dx;
    if ( Number != 3 )
    {
      if ( Number == 1 )
      {
        save = Arc->Width;
        Arc->Width = Arc->Height = Arc->Width;
        Number = Number;
        X = X;
      }
      else
      {
        Number = Number;
        X = X;
      }
    }
    break;
  case 3:
    Arc->Y = Y + dx + Y;
    Arc->X = X - dy;
    if ( Number != 3 )
    {
    }
    break;
  case 2:
    Arc->X = X - ( Arc->X - X );
    Arc->Y = Y - dy;
    break;
  default:
    break;
  }
}
}
// Lost vars at line 245 through switch synthesis
void RotateElementLowLevel( DataTypePtr Data, ElementTypePtr Element, LocationType X, LocationType Y, BYTE Number )
{
  int eax;
  int ecx;
  int edx;
{
  do
  {
    Cardinal n;
    TextTypePtr text = Element->BoundingBox.X1 + 36;
    if ( Data && Data->pad_tree )
      r_delete_entry( &Data->pad_tree, (int)( &text->BoundingBox ) );
    n += -1;
    RotateTextLowLevel( text, X, Y, Number );
  }
  while ( n != -1 );
  Element = Element;
{
  Cardinal n = Element->LineN + -1;
  /* phantom */ LineTypePtr line;
  if ( Element->LineN + -1 != -1 )
  {
    do
    {
      n += -1;
      RotateLineLowLevel( Element->Line + ( Element->LineN * 88 ) + -88 + -88, X, Y, Number );
    }
    while ( n == -1 );
    Data = Data;
  }
{
  Cardinal n;
  Cardinal sn;
  PinTypePtr pin;
  if ( Element->PinN )
  {
    Data->ViaN = n = 0;
    while ( 1 )
    {
      pin = Element->Pin + ( n * 76 );
      if ( Data->ViaN )
      {
        r_delete_entry( &Data->pin_tree, (int)( &pin->BoundingBox ) );
      }
      RestoreToPolygon( &Data->ViaN, 256, (void*)Element, (void*)pin );
      dx = pin->X - X;
      dy = pin->Y - Y;
      switch ( __MOD(Number,4) )
      {
      default:
        sn = Element->PinN;
        if ( Element->PinN )
        {
          n = ( sn + n + 1 ) - sn;
          if ( sn <= ( sn + n + 1 ) - Element->PinN )
            break;
          else
          {
          }
        }
        break;
      case 1:
        dy = X + dy;
        pin->X = dy + X;
        pin->Y = Y - dx;
        break;
      case 2:
        pin->X = X - dx;
        pin->Y = Y - dy;
        sn = Element->PinN;
        if ( Element->PinN )
        {
          n = ( sn + n + 1 ) - sn;
        }
        break;
      case 3:
        pin->X = X - dy;
        pin->Y = Y + dx;
        break;
      }
      break;
    }
    Data = &edx;
  }
  else
  {
  }
{
  Cardinal n = 0;
  Cardinal sn;
  PadTypePtr pad;
  dx = Element->PadN;
  while ( 1 )
  {
    sn = dx;
    do
    {
      if ( sn && n < sn )
      {
        pad = Element->Pad + ( n * 104 );
        if ( Data )
          r_delete_entry( &Data->pad_tree, (int)( &pad->BoundingBox ) );
        RestoreToPolygon( Data, 512, (void*)Element, (void*)pad );
        RotateLineLowLevel( &pad->BoundingBox.X1, X, Y, Number );
        sn = Element->PadN;
      }
      else
      {
        Cardinal n = Element->ArcN + -1;
        /* phantom */ ArcTypePtr arc;
        if ( Element->ArcN + -1 != -1 )
        {
          do
          {
            n += -1;
            RotateArcLowLevel( Element->Arc + ( Element->ArcN * 68 ) + -68 + -68, X, Y, Number );
          }
          while ( n == -1 );
          Data = Data;
          Element = Element;
        }
      {
        LocationType dx = Element->MarkX - X;
        LocationType dy = Element->MarkY - Y;
        switch ( __MOD(Number,4) )
        {
        case 1:
          Element->MarkX = X + ( Element->MarkY - Y );
          Element->MarkY = Y - dx;
          SetElementBoundingBox( Data, Element, &PCB->Font );
          Y = Element;
          X = Element;
          Element = 2;
          break;
        case 3:
          dx = Y + dx;
          Element->MarkX = X - dy;
          Element->MarkY = dx + Y;
          SetElementBoundingBox( Data, Element, &PCB->Font );
          Y = Element;
          X = Element;
          Element = 2;
          break;
        case 2:
          Element->MarkX = X - dx;
          Element->MarkY = Y - dy;
          SetElementBoundingBox( Data, Element, &PCB->Font );
          Y = Element;
          X = Element;
          Element = 2;
          break;
        default:
          SetElementBoundingBox( Data, Element, &PCB->Font );
          Y = Element;
          X = Element;
          Element = 2;
          break;
        }
      }
      }
    }
    while ( Element->PadN != dx );
    n++;
  }
}
}
}
}
}
void *RotateLinePoint( LayerTypePtr Layer, LineTypePtr Line, PointTypePtr Point )
{
  EraseLine( Line );
  if ( Layer )
  {
    RestoreToPolygon( &PCB->Data, 4, (void*)Layer, (void*)Line );
    r_delete_entry( &Layer->line_tree, (int)( &Line->BoundingBox ) );
    RotatePointLowLevel( Point, CenterX, CenterY, Number );
    SetLineBoundingBox( Line );
    r_insert_entry( &Layer->line_tree, (int)( &Line->BoundingBox ), 0 );
    ClearFromPolygon( &PCB->Data, 4, (void*)Layer, (void*)Line );
    DrawLine( Layer, Line, 0 );
    Draw( );
    return (void*)Line;
  }
  r_delete_entry( &PCB->Data->rat_tree, (int)( &Line->BoundingBox ) );
  RotatePointLowLevel( Point, CenterX, CenterY, Number );
  SetLineBoundingBox( Line );
  r_insert_entry( &PCB->Data->rat_tree, (int)( &Line->BoundingBox ), 0 );
  DrawRat( &Line->BoundingBox.X1, 0 );
  Draw( );
  return (void*)Line;
}
void *RotateArc( LayerTypePtr Layer, ArcTypePtr Arc )
{
  EraseArc( Arc );
  r_delete_entry( &Layer->arc_tree, (int)( &Arc->BoundingBox ) );
  RotateArcLowLevel( Arc, CenterX, CenterY, Number );
  r_insert_entry( &Layer->arc_tree, (int)( &Arc->BoundingBox ), 0 );
  DrawArc( Layer, Arc, 0 );
  Draw( );
  return (void*)Arc;
}
void *RotateElement( ElementTypePtr Element )
{
  EraseElement( Element );
  RotateElementLowLevel( &PCB->Data, Element, CenterX, CenterY, Number );
  DrawElement( Element, 0 );
  Draw( );
  return (void*)Element;
}
void *RotateElementName( ElementTypePtr Element )
{
  EraseElementName( Element );
{
  do
  {
    Cardinal n;
    TextTypePtr text;
    n += -1;
    text = &Element->Name[ n ];
    r_delete_entry( &PCB->Data->ViaN, n + 12 + 2 );
    RotateTextLowLevel( text, CenterX, CenterY, Number );
    r_insert_entry( &PCB->Data->ViaN, n + 12 + 2, text );
  }
  while ( n == -1 );
  DrawElementName( Element, 0 );
  Draw( );
  return (void*)Element;
}
}
void RotateBoxLowLevel( BoxTypePtr Box, LocationType X, LocationType Y, BYTE Number )
{
  int ecx;
  int edx;
  int ebx;
  int esi;
  LocationType x1 = Box->X1;
  LocationType y1 = Box->Y1;
  LocationType x2 = Box->X2;
  LocationType y2 = Box->Y2;
{
  LocationType dx = x1 - X;
  LocationType dy = y1 - Y;
  switch ( __MOD(Number,4) )
  {
  case 1:
    x2 -= X;
    y2 -= Y;
    x1 = dy + X;
    y1 = Y - dx;
    dy = y2 - Y;
    dx = x2 - X;
    x2 = dy + X;
    y2 = Y - dx;
    Box = x1 <= x2 ? &x2 : &x1;
    Box->Y1 = y1 <= y2 ? y2 : y1;
    Box->X2 = (unsigned char)( ( x1 < x2 ) ^ 1 ) ? x2 : x1;
    Box->Y2 = (unsigned char)( ( y1 < y2 ) ^ 1 ) ? y2 : y1;
    return;
    break;
  default:
  {
    LocationType dx = x2 - X;
    LocationType dy = y2 - Y;
    switch ( __MOD(Number,4) )
    {
    case 1:
      x2 = dy + X;
      y2 = Y - dx;
      Box = x1 <= x2 ? &x2 : &x1;
      Box->Y1 = y1 <= y2 ? y2 : y1;
      Box->X2 = (unsigned char)( ( x1 < x2 ) ^ 1 ) ? x2 : x1;
      Box->Y2 = (unsigned char)( ( y1 < y2 ) ^ 1 ) ? y2 : y1;
      return;
      break;
    case 2:
      break;
    case 3:
      x2 = X - dy;
      y2 = dx + Y;
      Box = x1 <= x2 ? &x2 : &x1;
      Box->Y1 = y1 <= y2 ? y2 : y1;
      Box->X2 = (unsigned char)( ( x1 < x2 ) ^ 1 ) ? x2 : x1;
      Box->Y2 = (unsigned char)( ( y1 < y2 ) ^ 1 ) ? y2 : y1;
      return;
      break;
    default:
      Box = x1 <= x2 ? &x2 : &x1;
      Box->Y1 = y1 <= y2 ? y2 : y1;
      Box->X2 = (unsigned char)( ( x1 < x2 ) ^ 1 ) ? x2 : x1;
      Box->Y2 = (unsigned char)( ( y1 < y2 ) ^ 1 ) ? y2 : y1;
      return;
      break;
    }
    x2 = X - dx;
    y2 = Y - dy;
    Box = x1 <= x2 ? &x2 : &x1;
    Box->Y1 = y1 <= y2 ? y2 : y1;
    Box->X2 = (unsigned char)( ( x1 < x2 ) ^ 1 ) ? x2 : x1;
    Box->Y2 = (unsigned char)( ( y1 < y2 ) ^ 1 ) ? y2 : y1;
    return;
  }
    break;
  case 2:
    x2 -= X;
    y2 -= Y;
    x1 = X - dx;
    y1 = Y - dy;
    dx = x2 - X;
    dy = y2 - Y;
    break;
  case 3:
    x2 -= X;
    y2 -= Y;
    x1 = X - dy;
    y1 = dx + Y;
    dy = y2 - Y;
    dx = x2 - X;
    break;
  }
}
}
void *RotateObject( int Type, void *Ptr1, void *Ptr2, void *Ptr3, LocationType X, LocationType Y, BYTE Steps )
{
  int eax;
  int ecx;
  int edx;
  RubberbandTypePtr ptr;
  void *ptr2;
  Boolean changed;
  *(int*)&changed = 0;
  Number = Steps;
  ptr = Crosshair.AttachedObject.Rubberband;
  CenterX = X;
  CenterY = Y;
  if ( Crosshair.AttachedObject.RubberbandN )
  {
    while ( 1 )
    {
      ptr->Line->Flags.f &= -513;
      AddObjectToRotateUndoList( 4096, &ptr->Layer->Name[0], &ptr->Line, &ptr->MovedPoint, X, Y, Steps );
      EraseLine( &ptr->Line );
      if ( ptr->Layer->Name[0] )
      {
        RestoreToPolygon( &PCB->Data, 4, eax, &ptr->Line );
        r_delete_entry( &ptr[4].Line->BoundingBox.X1, &ptr->Line->BoundingBox );
      }
      else
        r_delete_entry( &PCB->Data->rat_tree, &ptr->Line->BoundingBox );
      RotatePointLowLevel( &ptr->MovedPoint, CenterX, CenterY, Steps );
      SetLineBoundingBox( &ptr->Line );
      if ( ptr->Layer->Name[0] )
      {
        r_insert_entry( &ptr->(null), &ptr->Line->BoundingBox, 0 );
        ClearFromPolygon( &PCB->Data, 4, &ptr->Layer->Name[0], &ptr->Line );
        DrawLine( &ptr->Layer->Name[0], &ptr->Line, 0 );
      }
      else
      {
        r_insert_entry( &PCB->Data->rat_tree, &ptr->Line->BoundingBox, 0 );
        DrawRat( &ptr->Line->BoundingBox.X1, 0 );
      }
      Crosshair.AttachedObject.RubberbandN += -1;
      if ( Crosshair.AttachedObject.RubberbandN + -1 == 0 )
      {
        Steps = Number;
        *(int*)&changed = 1;
        Y = CenterY;
        X = CenterX;
      }
      else
      {
        Y = CenterY;
        ptr++;
        X = CenterX;
      }
    }
  }
  Steps = Steps;
  AddObjectToRotateUndoList( Type, Ptr1, Ptr2, Ptr3, X, Y, Steps );
  if ( ptr2 || ( changed & 255 ) )
  {
    Draw( );
    IncrementUndoSerialNumber( );
    return ptr2;
  }
  return ObjectOperation( &RotateFunctions, Type, Ptr1, Ptr2, Ptr3 );
}
void RotateScreenObject( LocationType X, LocationType Y, BYTE Steps )
{
  int edi;
  int type;
  void *ptr1, *ptr2, *ptr3;
  if ( type )
  {
    Message( "Sorry, the object is locked\n" );
  }
  return;
}
#if 0
#endif
