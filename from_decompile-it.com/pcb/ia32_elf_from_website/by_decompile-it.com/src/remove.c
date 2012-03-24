#include "remove.c.h"
static ObjectFunctionType RemoveFunctions = { &RemoveLine, &RemoveText, &RemovePolygon, &RemoveVia, &RemoveElement, 0, 0, 0, &RemoveLinePoint, &RemovePolygonPoint, &RemoveArc, &RemoveRat }
;
static ObjectFunctionType DestroyFunctions = { &DestroyLine, &DestroyText, &DestroyPolygon, &DestroyVia, &DestroyElement, 0, 0, 0, 0, &DestroyPolygonPoint, &DestroyArc, &DestroyRat }
;
static DataTypePtr DestroyTarget;
static Boolean Bulk;
void RemovePCB( PCBTypePtr Ptr )
{
  ClearUndoList( 1 );
  FreePCBMemory( Ptr );
  Ptr = Ptr;
}
void *DestroyVia( PinTypePtr Via )
{
  int eax;
  int edx;
  int edi;
  r_delete_entry( &DestroyTarget->via_tree, (int)( &Via->BoundingBox ) );
  SaveFree( &Via->Name );
  Via->Name = 0;
  DestroyTarget->ViaN += -1;
  if ( DestroyTarget->Via[ DestroyTarget->ViaN + -1 ].BoundingBox.X1 != Via )
  {
    memcpy( Via, *(int*)(0), 76 );
    r_substitute( &DestroyTarget->via_tree, DestroyTarget->Via + ( DestroyTarget->ViaN * 76 ), (int)( &Via->BoundingBox ) );
  }
  mymemset( DestroyTarget->Via + ( DestroyTarget->ViaN * 76 ), 0, 76 );
  return 0;
}
void *DestroyLine( LayerTypePtr Layer, LineTypePtr Line )
{
  int eax;
  int edi;
  r_delete_entry( &Layer->line_tree, (int)( &Line->BoundingBox ) );
  SaveFree( &Line->Number );
  Layer->LineN += -1;
  Line->Number = 0;
  if ( Layer->Line != Line )
  {
    memcpy( Line, *(int*)(0), 88 );
    r_substitute( &Layer->line_tree, Layer->Line + ( Layer->LineN * 88 ), (int)( &Line->BoundingBox ) );
  }
  mymemset( Layer->Line + ( Layer->LineN * 88 ), 0, 88 );
  return 0;
}
void *DestroyArc( LayerTypePtr Layer, ArcTypePtr Arc )
{
  int eax;
  int edi;
  r_delete_entry( &Layer->arc_tree, (int)( &Arc->BoundingBox ) );
  Layer->ArcN += -1;
  if ( Layer->Arc != Arc )
  {
    memcpy( Arc, *(int*)(0), 68 );
    r_substitute( &Layer->arc_tree, Layer->Arc + ( Layer->ArcN * 68 ), (int)( &Arc->BoundingBox ) );
    Arc = Layer->ArcN << 6;
  }
  mymemset( Layer->Arc + ( Layer->ArcN * 68 ), 0, 68 );
  return 0;
}
void *DestroyPolygon( LayerTypePtr Layer, PolygonTypePtr Polygon )
{
  int eax;
  r_delete_entry( &Layer->polygon_tree, (int)( &Polygon->BoundingBox ) );
  FreePolygonMemory( Polygon );
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
  return 0;
}
void *DestroyPolygonPoint( LayerTypePtr Layer, PolygonTypePtr Polygon, PointTypePtr Point )
{
  int eax;
  PointTypePtr ptr;
  if ( Polygon->PointN <= 3 )
  {
  }
  r_delete_entry( &Layer->polygon_tree, (int)( &Polygon->BoundingBox ) );
  ptr = Point + 20;
  if ( Polygon->Points != Point + 20 )
  {
    while ( Point = &ptr->X, Point->Y = ptr->Y, Point->X2 = ptr->X2, Point->Y2 = ptr->Y2, Point->ID = ptr->ID, ptr = ptr->X + 20, Point = &ptr->X, ptr->X != Polygon->Points + ( Polygon->PointN * 20 ) )
    {
      ptr = &ptr->X;
    }
  }
  Polygon->PointN += -1;
  SetPolygonBoundingBox( Polygon );
  r_insert_entry( &Layer->polygon_tree, (int)( &Polygon->BoundingBox ), 0 );
  InitClip( &PCB->Data, Layer, Polygon );
  return (void*)Polygon;
}
void *DestroyText( LayerTypePtr Layer, TextTypePtr Text )
{
  int eax;
  SaveFree( &Text->TextString );
  Text->TextString = 0;
  r_delete_entry( &Layer->text_tree, (int)( &Text->BoundingBox ) );
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
  return 0;
}
void *DestroyElement( ElementTypePtr Element )
{
  int eax;
  int ecx;
  int edx;
#error unstructured control flow
}
void *DestroyRat( RatTypePtr Rat )
{
  int eax;
  int edx;
  int ebx;
  int edi;
  if ( DestroyTarget->rat_tree )
  {
    r_delete_entry( &DestroyTarget->rat_tree, (int)( &Rat->BoundingBox ) );
  }
  DestroyTarget->RatN += -1;
  if ( DestroyTarget->Rat != Rat )
  {
    memcpy( Rat, *(int*)(0), 92 );
    r_substitute( &DestroyTarget->rat_tree, DestroyTarget->Rat + ( DestroyTarget->RatN * 92 ), (int)( &Rat->BoundingBox ) );
  }
  mymemset( DestroyTarget->Rat + ( DestroyTarget->RatN * 92 ), 0, 92 );
  return 0;
}
void *RemoveVia( PinTypePtr Via )
{
  int eax;
  if ( PCB->ViaOn )
  {
    EraseVia( Via );
    if ( Bulk == 0 )
    {
      Draw( );
    }
  }
  MoveObjectToRemoveUndoList( 1, (void*)Via, (void*)Via, (void*)Via );
  return 0;
}
void *RemoveRat( RatTypePtr Rat )
{
  int eax;
  if ( PCB->RatOn )
  {
    EraseRat( Rat );
    if ( Bulk == 0 )
    {
      Draw( );
    }
  }
  MoveObjectToRemoveUndoList( 32, (void*)Rat, (void*)Rat, (void*)Rat );
  return 0;
}
int remove_point( BoxType *b, void *cl )
{
  /* phantom */ LineType *line;
  /* phantom */ struct rlp_info *info;
  if ( ((int*)cl) == b )
  {
    return 0;
  }
  if ( b[2].Y2 == *(int*)(((LineType*)cl)[1].Point2.X2) && b[3].X1 == ((LineType*)cl)[1].Point2.X2 )
  {
    ((LineType*)cl)[1].Point2.Y = b;
    ((LineType*)cl)[1].Point2.X2 = b + 44;
    __longjmp_chk( &cl[0], 1 );
  }
  if ( b[4].X1 == *(int*)(((LineType*)cl)[1].Point2.X2) && b[4].Y1 == ((LineType*)cl)[1].Point2.X2 )
  {
    ((LineType*)cl)[1].Point2.Y = b;
    ((LineType*)cl)[1].Point2.X2 = b + 64;
    __longjmp_chk( &cl[0], 1 );
  }
  return 0;
}
void *RemoveLinePoint( LayerTypePtr Layer, LineTypePtr Line, PointTypePtr Point )
{
  /* phantom */ PointType other;
  struct rlp_info info;
  info.line = Line;
  info.point = Point;
  if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
  {
    r_search( &Layer->line_tree, &Point->X, 0, &remove_point, info.env[0].__jmpbuf );
    return RemoveLine( Layer, Line );
  }
  MoveObject( 4096, (void*)Layer, (void*)info.line, (void*)info.point, ( Line->Point1.X == Point ? Line->Point2.X : Line->Point1.X ) - Point->X, ( Line->Point1.X == Point ? Line->Point2.Y : Line->Point1.Y ) - Point->Y );
  return RemoveLine( Layer, Line );
}
void *RemoveLine( LayerTypePtr Layer, LineTypePtr Line )
{
  int ebx;
  if ( Layer->On )
  {
    EraseLine( Line );
    if ( Bulk == 0 )
      Draw( );
  }
  MoveObjectToRemoveUndoList( 4, (void*)Layer, (void*)Line, (void*)Line );
  return 0;
}
void *RemoveArc( LayerTypePtr Layer, ArcTypePtr Arc )
{
  int ebx;
  if ( Layer->On )
  {
    EraseArc( Arc );
    if ( Bulk == 0 )
      Draw( );
  }
  MoveObjectToRemoveUndoList( 16384, (void*)Layer, (void*)Arc, (void*)Arc );
  return 0;
}
void *RemoveText( LayerTypePtr Layer, TextTypePtr Text )
{
  int esi;
  if ( Layer->On )
  {
    EraseText( Layer, Text );
    if ( Bulk == 0 )
      Draw( );
  }
  MoveObjectToRemoveUndoList( 16, (void*)Layer, (void*)Text, (void*)Text );
  return 0;
}
void *RemovePolygon( LayerTypePtr Layer, PolygonTypePtr Polygon )
{
  int ebx;
  if ( Layer->On )
  {
    ErasePolygon( Polygon );
    if ( Bulk == 0 )
      Draw( );
  }
  MoveObjectToRemoveUndoList( 8, (void*)Layer, (void*)Polygon, (void*)Polygon );
  return 0;
}
void *RemovePolygonPoint( LayerTypePtr Layer, PolygonTypePtr Polygon, PointTypePtr Point )
{
  int eax;
  int edx;
  PointTypePtr ptr;
  Cardinal index;
  if ( Polygon->PointN <= 3 )
  {
  }
  if ( Layer->On )
  {
    ErasePolygon( Polygon );
  }
{
  Cardinal n;
  /* phantom */ PointTypePtr point;
  if ( Polygon->PointN + -1 == -1 )
    goto B7;
  else
  {
    if ( Polygon->Points != Point )
    {
      n = Polygon->PointN + -1;
      do
      {
        n += -1;
        if ( n + -1 == -1 )
          goto B7;
        else
      }
      while ( Point != Polygon->Points + ( Polygon->PointN * 20 ) + -40 + -20 );
    }
    index = n;
    AddObjectToRemovePointUndoList( 2048, (void*)Layer, (void*)Polygon, index );
    r_delete_entry( &Layer->polygon_tree, (int)( &Polygon->BoundingBox ) );
    ptr = Point + 20;
    if ( Polygon->Points != Point + 20 )
    {
      while ( Point = &ptr->X, Point->Y = ptr->Y, Point->X2 = ptr->X2, Point->Y2 = ptr->Y2, Point->ID = ptr->ID, ptr = ptr->X + 20, Point = &ptr->X, ptr->X != Polygon->Points + ( Polygon->PointN * 20 ) )
      {
        ptr = &ptr->X;
      }
    }
    Polygon->PointN += -1;
    SetPolygonBoundingBox( Polygon );
    r_insert_entry( &Layer->polygon_tree, (int)( &Polygon->BoundingBox ), 0 );
    RemoveExcessPolygonPoints( Layer, Polygon );
    InitClip( &PCB->Data, Layer, Polygon );
    if ( Layer->On )
    {
      DrawPolygon( Layer, Polygon, 0 );
      if ( Bulk == 0 )
      {
        Draw( );
      }
    }
    return 0;
  }
B7:;
  index = 0;
  AddObjectToRemovePointUndoList( 2048, (void*)Layer, (void*)Polygon, index );
  r_delete_entry( &Layer->polygon_tree, (int)( &Polygon->BoundingBox ) );
  ptr = Point + 20;
}
}
void *RemoveElement( ElementTypePtr Element )
{
  int edx;
  if ( ( PCB->ElementOn || PCB->PinOn ) && ( Settings.ShowSolderSide == ( ( Element->Flags.f >> 7 ) & 1 ) || PCB->InvisibleObjectsOn ) )
  {
    EraseElement( Element );
    if ( Bulk == 0 )
      Draw( );
  }
  MoveObjectToRemoveUndoList( 2, (void*)Element, (void*)Element, (void*)Element );
  return 0;
}
Boolean RemoveSelected( void )
{
  Bulk = 1;
  if ( SelectedOperation( &RemoveFunctions, 0, -1 ) & 255 )
  {
    IncrementUndoSerialNumber( );
    Draw( );
    Bulk = 0;
    return 1;
  }
  Bulk = 0;
  return 0;
}
void *RemoveObject( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  void *ptr = &Type;
  return ObjectOperation( &RemoveFunctions, Type, Ptr1, Ptr2, Ptr3 );
}
Boolean DeleteRats( Boolean selected )
{
  int edx;
  Boolean changed;
{
  Cardinal n;
  RatTypePtr line;
  Bulk = 1;
  n = PCB->Data->RatN + -1;
  if ( PCB->Data->RatN + -1 != -1 )
  {
    *(int*)&changed = 0;
    while ( 1 )
    {
      line = line->Thickness + ( PCB->Data->RatN * 92 ) + -92 + -92;
      if ( ( selected & 255 ) && ( ( line->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 )
        goto B7;
      else
      {
        RemoveRat( line );
        *(int*)&changed = 1;
      }
B7:;
      n += -1;
      if ( n + -1 == -1 )
        break;
      else
      {
      }
    }
    Bulk = 0;
    if ( ( changed & 255 ) == 0 )
    {
      return 1;
    }
    Draw( );
    IncrementUndoSerialNumber( );
    *(int*)&changed = 1;
  }
  else
  {
    Bulk = 0;
    *(int*)&changed = 0;
  }
  return 1;
}
}
void *DestroyObject( DataTypePtr Target, int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  DestroyTarget = Target;
  Target = (struct {
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
  }*)&DestroyFunctions.Line;
}
#if 0
#endif
