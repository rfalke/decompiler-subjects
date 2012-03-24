#include "create.c.h"
static int ID = 1;
DataTypePtr CreateNewBuffer( void )
{
  /* phantom */ DataTypePtr data;
  *(int*)MyCalloc( 1, 1732, "CreateNewBuffer()" )/*.72*/ = PCB->ID;
  return MyCalloc( 1, 1732, "CreateNewBuffer()" );
}
void pcb_colors_from_settings( PCBTypePtr ptr )
{
  int ecx;
  int edx;
  int i;
  ptr->ConnectedColor = Settings.ConnectedColor;
  ptr->ElementColor = Settings.ElementColor;
  ptr->RatColor = Settings.RatColor;
  ptr->InvisibleObjectsColor = Settings.InvisibleObjectsColor;
  ptr->InvisibleMarkColor = Settings.InvisibleMarkColor;
  ptr->ElementSelectedColor = Settings.ElementSelectedColor;
  ptr->RatSelectedColor = Settings.RatSelectedColor;
  ptr->PinColor = Settings.PinColor;
  ptr->PinSelectedColor = Settings.PinSelectedColor;
  ptr->PinNameColor = Settings.PinNameColor;
  ptr->ViaColor = Settings.ViaColor;
  ptr->ViaSelectedColor = Settings.ViaSelectedColor;
  ptr->WarnColor = Settings.WarnColor;
  ptr->MaskColor = Settings.MaskColor;
  i = 0;
  do
  {
    ptr->Data->Layer->Color = Settings.LayerColor[ i ];
    i++;
    ptr->Data->Layer->SelectedColor = Settings.LayerSelectedColor[ i ];
  }
  while ( i + 1 != 16 );
  if ( Settings.ShowSolderSide )
  {
    ptr->Data->Layer->Color = Settings.InvisibleObjectsColor;
    ptr->Data->Layer->SelectedColor = Settings.ElementSelectedColor;
  }
  else
  {
    ptr->Data->Layer->Color = Settings.ElementColor;
    ptr->Data->Layer->SelectedColor = Settings.ElementSelectedColor;
  }
  ptr->Data->Layer->Color = Settings.ElementColor;
  ptr->Data->Layer->SelectedColor = ptr->Data + ( ( PCB->Data->LayerN + 1 ) * 92 ) + 152;
  return;
}
PCBTypePtr CreateNewPCB( Boolean SetDefaultNames )
{
  int eax;
  double fp7;
  PCBTypePtr ptr = (struct PCBType*)MyCalloc( 1, 8720, "CreateNewPCB()" );
  int i;
  *(int*)CreateNewBuffer( )/*.72*/ = ptr->ID;
  ptr->Data = CreateNewBuffer( );
  ptr->ThermStyle = 4;
  ptr->IsleArea = 200000000.000000000000;
  ptr->SilkActive = 0;
  ptr->RatDraw = 0;
  ptr->Flags.f |= 64;
  if ( Settings.ShowNumber )
    ptr->Flags.f |= 65;
  if ( Settings.AllDirectionLines )
    ptr->Flags.f |= 256;
  ptr->Clipping = 1;
  if ( Settings.RubberBandMode )
    ptr->Flags.f |= 16;
  if ( Settings.SwapStartDirection )
    ptr->Flags.f |= 512;
  if ( Settings.UniqueNames )
    ptr->Flags.f |= 1024;
  if ( Settings.SnapPin )
    ptr->Flags.f |= 4096;
  if ( Settings.ClearLine )
    ptr->Flags.f |= 2048;
  if ( Settings.FullPoly )
    ptr->Flags.f |= 1048576;
  if ( Settings.OrthogonalMoves )
    ptr->Flags.f |= 32768;
  if ( Settings.liveRouting )
    ptr->Flags.f |= 65536;
  if ( Settings.ShowDRC )
    ptr->Flags.f |= 8;
  if ( Settings.AutoDRC )
    ptr->Flags.f |= 128;
  memcpy( ptr + 7380, Settings.LayerGroups.Number, 1216 );
  ptr->Grid = Settings.Grid;
{
  do
  {
    Cardinal n;
    /* phantom */ RouteStyleTypePtr style;
    ptr->RouteStyle->Thick = *(int*)(Settings.RouteStyle->Thick + 0);
    ptr->RouteStyle->Diameter = *(int*)(Settings.RouteStyle->Diameter + 0);
    ptr->RouteStyle->Hole = *(int*)(Settings.RouteStyle->Hole + 0);
    ptr->RouteStyle->Keepaway = *(int*)(Settings.RouteStyle->Keepaway + 0);
    ptr->RouteStyle->index = n;
    ptr->RouteStyle->Name = *(int*)(Settings.RouteStyle->Name + 0);
    n++;
  }
  while ( n + 1 != 4 );
  i = 0;
  hid_action( "RouteStylesChanged" );
  ptr->MaxWidth = Settings.MaxWidth;
  ptr->Zoom = Settings.Zoom;
  ptr->MaxHeight = Settings.MaxHeight;
  ptr->ThermScale = 0.500000000000;
  ptr = &ID;
  ptr->Bloat = Settings.Bloat;
  ptr->Shrink = Settings.Shrink;
  ptr->minWid = Settings.minWid;
  ptr->minSlk = Settings.minSlk;
  ptr->minDrill = Settings.minDrill;
  ptr->minRing = Settings.minRing;
  ID++;
  do
  {
    i++;
    ptr->Data->Layer->Name = MyStrdup( Settings.DefaultLayerName[ i ], "CreateNewPCB()" );
  }
  while ( i + 1 != 16 );
  return &ptr->ID;
}
}
int CreateNewPCBPost( PCBTypePtr pcb, int use_defaults )
{
  int ebx;
  int esi;
  int edi;
  pcb_colors_from_settings( pcb );
  if ( use_defaults && ParseGroupString( Settings.Groups, pcb + 7380, 8 ) == 0 )
  {
    pcb->Data->Layer->Name = MyStrdup( "silk", "CreateNewPCB()" );
    pcb->Data->Layer->Name = MyStrdup( "silk", "CreateNewPCB()" );
  }
  return 0;
}
PinTypePtr CreateNewVia( DataTypePtr Data, LocationType X, LocationType Y, BDimension Thickness, BDimension Clearance, BDimension Mask, BDimension DrillingHole, char *Name, FlagType Flags )
{
  int eax;
  int ah;
  double fp7;
  PinTypePtr Via;
{
  Cardinal n;
  Cardinal sn = Data->ViaN;
  /* phantom */ PinTypePtr via;
  if ( Data->ViaN )
  {
    n = 0;
    do
    {
      if ( (double)( ( Thickness / 2 ) + ( *(int*)(Data->Via + 76 + 36) / 2 ) ) * (double)( ( Thickness / 2 ) + ( *(int*)(Data->Via + 76 + 36) / 2 ) ) <= ( (double)( *(int*)(Data->Via + 76 + 52) - X ) * (double)( *(int*)(Data->Via + 76 + 52) - X ) ) * 0.000000000000 )
      {
        Via = 0;
        Message( "Dropping via at (%d, %d) because it would overlap with the viaat (%d, %d)\n", X / 100, Y / 100, Data->Via[1].X / 100, Via / 100 );
        break;
      }
      n++;
      Data->Via->BoundingBox.X1 = Data->Via + 76;
    }
    while ( n + 1 < sn );
  }
  if ( GetViaMemory( Data ) )
  {
    Via->X = X;
    Via->Y = Y;
    Via->Thickness = Thickness;
    Via->Clearance = Clearance;
    Via->Mask = Mask;
    Via->DrillingHole = vendorDrillMap( DrillingHole );
    if ( Via != DrillingHole )
      Message( "Mapped via drill hole to %.2f mils from %.2f mils per vendor table\n", 0.010000000000 * (double)( Via + 48 ), (double)( DrillingHole ) * 0.010000000000 );
    Via->Name = MyStrdup( Name, "CreateNewVia()" );
    Via->Flags.t[7] = Flags.t[7];
    Via->Flags.t[6] = Flags.t[6];
    Via->Flags.t[5] = Flags.t[5];
    Via->Flags.t[4] = Flags.t[4];
    Via->Flags.t[3] = Flags.t[3];
    Via->Flags.t[2] = Flags.t[2];
    Via->Flags.t[1] = Flags.t[1];
    Via->Flags.t[0] = Flags.t[0];
    Via->ID = ID;
    Via->Flags.f = Flags.f | 2;
    ID++;
    if ( !( ( (unsigned char)( Flags.f | 2 ) & 8 ) & 255 ) && Via->Thickness <= Via->DrillingHole + 399 )
    {
      Via->Thickness = Via->DrillingHole + 400;
      Message( "Increased via thickness to %.2f mils to allow enough copper at (%.2f,%.2f).\n", 0.010000000000 * (double)( Via->DrillingHole + 400 ), (double)( Via->X ) * 0.010000000000, (double)( Via->Y ) * 0.010000000000 );
    }
    SetPinBoundingBox( Via );
    if ( Data->via_tree == 0 )
    {
      Data->via_tree = r_create_tree( 0, 0, 0 );
    }
    r_insert_entry( &Data->via_tree, (int)( &Via->BoundingBox ), 0 );
  }
  return Via;
}
}
int line_callback( BoxType *b, void *cl )
{
  int eax;
  int ecx;
  int edx;
#error unstructured control flow
}
LineTypePtr CreateDrawnLineOnLayer( LayerTypePtr Layer, LocationType X1, LocationType Y1, LocationType X2, LocationType Y2, BDimension Thickness, BDimension Clearance, FlagType Flags )
{
  struct line_info info;
  BoxType search;
  search.X1 = X2 <= X1 ? X1 : X2;
  search.X2 = (unsigned char)( ( X2 < X1 ) ^ 1 ) ? X1 : X2;
  search.Y1 = Y2 <= Y1 ? Y1 : Y2;
  search.Y2 = (unsigned char)( ( Y2 < Y1 ) ^ 1 ) ? Y1 : Y2;
  if ( ( Y2 <= Y1 ? Y1 : Y2 ) == ( (unsigned char)( ( Y2 < Y1 ) ^ 1 ) ? Y1 : Y2 ) )
  {
    search.Y2 = ( Y2 <= Y1 ? Y1 : Y2 ) + 1;
    if ( ( (unsigned char)( ( X2 < X1 ) ^ 1 ) ? X1 : X2 ) == ( X2 <= X1 ? X1 : X2 ) )
      goto B4;
    else
    {
      info.test.Thickness = 0;
      info.X1 = X1;
      info.X2 = X2;
      info.Y1 = Y1;
      info.Y2 = Y2;
      info.Thickness = Thickness;
      info.Flags.f = Flags.f;
      info.Flags.t[0] = Flags.t[0];
      info.Flags.t[4] = Flags.t[4];
      info.ans = 0;
      info.test.Flags = MakeFlags( 0 );
      info.test.Flags.t[0] = MakeFlags( 0 );
      if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
        r_search( &Layer->line_tree, &search, 0, &line_callback, &info.X1 );
      else
      if ( info.ans != -1 )
      {
        if ( info.ans )
        {
          MoveObjectToRemoveUndoList( 4, (void*)Layer, (void*)info.ans, (void*)info.ans );
          X1 = info.test.Point1.X;
          X2 = info.test.Point2.X;
          Y1 = info.test.Point1.Y;
          Y2 = info.test.Point2.Y;
        }
      }
      else
      {
        if ( 0 ^ 0 )
        {
          __stack_chk_fail( );
        }
        return &eax;
      }
      CreateNewLineOnLayer( Layer, X1, Y1, X2, Y2, Thickness, Clearance, "badarg" );
    }
  }
  else
  if ( ( (unsigned char)( ( X2 < X1 ) ^ 1 ) ? X1 : X2 ) == ( X2 <= X1 ? X1 : X2 ) )
    goto B4;
B4:;
  search.X2 = ( X2 <= X1 ? X1 : X2 ) + 1;
}
LineTypePtr CreateNewLineOnLayer( LayerTypePtr Layer, LocationType X1, LocationType Y1, LocationType X2, LocationType Y2, BDimension Thickness, BDimension Clearance, FlagType Flags )
{
  LineTypePtr Line;
  if ( GetLineMemory( Layer ) )
  {
    Line->Flags.t[7] = Flags.t[7];
    Line->Flags.t[6] = Flags.t[6];
    Line->ID = ID;
    Line->Point1.ID = ID + 1;
    Line->Point2.ID = ID + 2;
    Line->Flags.t[5] = Flags.t[5];
    Line->Flags.t[4] = Flags.t[4];
    Line->Flags.t[3] = Flags.t[3];
    Line->Flags.t[2] = Flags.t[2];
    Line->Flags.t[1] = Flags.t[1];
    Line->Flags.t[0] = Flags.t[0];
    Line->Flags.f = Flags.f & -17;
    Line->Thickness = Thickness;
    Line->Clearance = Clearance;
    Line->Point1.X = X1;
    Line->Point1.Y = Y1;
    Line->Point2.X = X2;
    Line->Point2.Y = Y2;
    ID += 3;
    SetLineBoundingBox( Line );
    if ( Layer->line_tree == 0 )
    {
      Layer->line_tree = r_create_tree( 0, 0, 0 );
    }
    r_insert_entry( Layer + 52, (int)( &Line->BoundingBox ), 0 );
  }
  return Line;
}
RatTypePtr CreateNewRat( DataTypePtr Data, LocationType X1, LocationType Y1, LocationType X2, LocationType Y2, Cardinal group1, Cardinal group2, BDimension Thickness, FlagType Flags )
{
  RatTypePtr Line;
  if ( GetRatMemory( Data ) )
  {
    Line->Flags.t[7] = Flags.t[7];
    Line->Flags.t[6] = Flags.t[6];
    Line->ID = ID;
    Line->Point1.ID = ID + 1;
    Line->Point2.ID = ID + 2;
    Line->Flags.t[5] = Flags.t[5];
    Line->Flags.t[4] = Flags.t[4];
    Line->Flags.t[3] = Flags.t[3];
    Line->Flags.t[2] = Flags.t[2];
    Line->Flags.t[1] = Flags.t[1];
    Line->Flags.t[0] = Flags.t[0];
    Line->Flags.f = Flags.f | 16;
    Line->Thickness = Thickness;
    Line->Point1.X = X1;
    Line->Point1.Y = Y1;
    Line->Point2.X = X2;
    Line->Point2.Y = Y2;
    ID += 3;
    Line->group1 = group1;
    Line->group2 = group2;
    SetLineBoundingBox( &Line->BoundingBox.X1 );
    if ( Data->rat_tree == 0 )
    {
      Data->rat_tree = r_create_tree( 0, 0, 0 );
    }
    r_insert_entry( Data + 68, (int)( &Line->BoundingBox ), 0 );
  }
  return Line;
}
Missing divisor:  0xb60b60b7(8)
Missing divisor:  0xb60b60b7(8)
ArcTypePtr CreateNewArcOnLayer( LayerTypePtr Layer, LocationType X1, LocationType Y1, BDimension width, BDimension height, int sa, int dir, BDimension Thickness, BDimension Clearance, FlagType Flags )
{
  int eax;
  int ecx;
  ArcTypePtr Arc;
{
  Cardinal n = Layer->ArcN + -1;
  /* phantom */ ArcTypePtr arc;
  if ( Layer->ArcN + -1 != -1 )
  {
Missing divisor:  0xb60b60b7(8)
    do
    {
      if ( X1 == *(int*)(Layer->Arc[ Layer->ArcN + -1 ].X + -68) && Y1 == *(int*)(Layer->Arc[ Layer->ArcN + -1 ].X + -68 + 4) && width == *(int*)(Layer->Arc[ Layer->ArcN + -1 ].X + -68 + -8) && ( sa + 360 ) - ( ( ( sa + 360 ) / 0 ) * 360 ) == ( *(int*)(Layer->Arc[ Layer->ArcN + -1 ].X + -68 + 8) + 360 ) - ( ( ( *(int*)(Layer->Arc[ Layer->ArcN + -1 ].X + -68 + 8) + 360 ) / 0 ) * 360 ) && dir == *(int*)(Layer->Arc[ Layer->ArcN + -1 ].X + -68 + 12) )
      {
        Arc = 0;
        break;
      }
      n += -1;
      Layer->Arc[ Layer->ArcN + -1 ].X += -68;
    }
    while ( n + -1 != -1 );
  }
  return Arc;
}
}
PolygonTypePtr CreateNewPolygonFromRectangle( LayerTypePtr Layer, LocationType X1, LocationType Y1, LocationType X2, LocationType Y2, FlagType Flags )
{
  int edi;
  PolygonTypePtr polygon;
  if ( CreateNewPolygon( Layer, "badarg" ) )
  {
    CreateNewPointInPolygon( polygon, X1, Y1 );
    CreateNewPointInPolygon( polygon, X2, Y1 );
    CreateNewPointInPolygon( polygon, X2, Y2 );
    CreateNewPointInPolygon( polygon, X1, Y2 );
    SetPolygonBoundingBox( polygon );
    if ( Layer->polygon_tree == 0 )
    {
      Layer->polygon_tree = r_create_tree( 0, 0, 0 );
    }
    r_insert_entry( Layer + 60, (int)( &polygon->BoundingBox ), 0 );
  }
  return polygon;
}
TextTypePtr CreateNewText( LayerTypePtr Layer, FontTypePtr PCBFont, LocationType X, LocationType Y, BYTE Direction, int Scale, char *TextString, FlagType Flags )
{
  TextTypePtr text;
  if ( GetTextMemory( Layer ) )
  {
    text->X = X;
    text->Y = Y;
    text->Direction = Direction;
    text->Flags.t[7] = Flags.t[7];
    text->Flags.t[6] = Flags.t[6];
    text->Flags.t[5] = Flags.t[5];
    text->Flags.t[4] = Flags.t[4];
    text->Flags.t[3] = Flags.t[3];
    text->Flags.t[2] = Flags.t[2];
    text->Flags.t[1] = Flags.t[1];
    text->Flags.t[0] = Flags.t[0];
    text->Flags.f = Flags.f;
    text->Scale = Scale;
    text->TextString = MyStrdup( TextString, "CreateNewText()" );
    SetTextBoundingBox( PCBFont, text );
    text->ID = ID;
    ID++;
    if ( Layer->text_tree == 0 )
    {
      Layer->text_tree = r_create_tree( 0, 0, 0 );
    }
    r_insert_entry( Layer + 56, (int)( &text->BoundingBox ), 0 );
  }
  return text;
}
PolygonTypePtr CreateNewPolygon( LayerTypePtr Layer, FlagType Flags )
{
  int ebx;
  int esi;
  int edi;
  PolygonTypePtr polygon = Flags.t[1];
  polygon = &Layer->Name[0];
  polygon->Flags.t[7] = Flags.t[7];
  polygon->Flags.t[6] = Flags.t[6];
  polygon->Flags.t[5] = Flags.t[5];
  polygon->Flags.t[4] = Flags.t[4];
  polygon->Clipped = 0;
  polygon->NoHoles = 0;
  polygon->Flags.t[3] = Flags.t[3];
  polygon->Flags.t[2] = Flags.t[2];
  polygon->Flags.t[1] = Flags.t[1];
  polygon->Flags.t[0] = Flags.t[0];
  polygon->Flags.f = Flags.f;
  polygon->ID = ID;
  polygon->NoHolesValid = 0;
  return GetPolygonMemory( Layer );
  ID++;
}
PointTypePtr CreateNewPointInPolygon( PolygonTypePtr Polygon, LocationType X, LocationType Y )
{
  PointTypePtr point = &Polygon->BoundingBox.X1;
  point = &X;
  point->Y = Y;
  point->ID = ID;
  return GetPointMemoryInPolygon( Polygon );
  ID++;
}
ElementTypePtr CreateNewElement( DataTypePtr Data, ElementTypePtr Element, FontTypePtr PCBFont, FlagType Flags, char *Description, char *NameOnPCB, char *Value, LocationType TextX, LocationType TextY, BYTE Direction, int TextScale, FlagType TextFlags, Boolean uniqueName )
{
  int eax;
  int ecx;
  int edx;
  if ( Element == 0 )
  {
    Element = GetElementMemory( Data );
  }
  TextScale = (unsigned char)( ( TextScale < 10 ) ^ 1 ) ? 10 : TextScale;
  AddTextToElement( Element + 36, PCBFont, TextX, TextY, Direction, Description, (unsigned char)( ( TextScale < 10 ) ^ 1 ) ? 10 : TextScale, "badarg" );
  if ( uniqueName )
  {
    NameOnPCB = UniqueElementName( Data, NameOnPCB );
  }
  AddTextToElement( Element + 96, PCBFont, TextX, TextY, ebp_44, NameOnPCB, TextScale, "badarg" );
  AddTextToElement( Element + 156, PCBFont, TextX, TextY, ebp_44, Value, TextScale, "badarg" );
  Element->Name->Element = Element;
  Element->Name[1].Element = Element;
  Element->Name[2].Element = Element;
  Element->Flags.t[7] = Flags.t[7];
  Element->Flags.t[6] = Flags.t[6];
  Element->Flags.t[5] = Flags.t[5];
  Element->Flags.t[4] = Flags.t[4];
  Element->Flags.t[3] = Flags.t[3];
  Element->Flags.t[2] = Flags.t[2];
  Element->Flags.t[1] = Flags.t[1];
  Element->Flags.t[0] = Flags.t[0];
  Element->Flags.f = Flags.f;
  Element->ID = ID;
  ID++;
  return Element;
}
Missing divisor:  0xb60b60b7(8)
Missing divisor:  0xb60b60b7(8)
Missing divisor:  0xb60b60b7(8)
ArcTypePtr CreateNewArcInElement( ElementTypePtr Element, LocationType X, LocationType Y, BDimension Width, BDimension Height, int Angle, int Delta, BDimension Thickness )
{
  int ecx;
  int edx;
  ArcTypePtr arc;
  if ( Element->ArcMax <= Element->ArcN )
  {
    Element->ArcMax += 5;
    Element->Arc = MyRealloc( &Element->Arc, ( Element->ArcMax + 5 ) * 68, "CreateNewArcInElement()" );
    mymemset( Element + 268 + ( Element->ArcN * 68 ), 0, 340 );
  }
Missing divisor:  0xb60b60b7(8)
  Delta -= ( Delta / 0 ) * 360;
  if ( Delta - ( ( Delta / 0 ) * 360 ) == 0 )
    Delta/*.1_2of4*/ = 360;
  else
  if ( ccdep1 < ccdep2 )
  {
    Angle += Delta;
    Delta = 0 - Delta;
  }
Missing divisor:  0xb60b60b7(8)
  Angle -= ( Angle / 0 ) * 360;
  Element->ArcN++;
  Element->ArcMax = X;
  Element->Pad = Angle;
  Element->Line = Delta;
  Element->Pin = Y;
  Element->LineMax = Width;
  Element->PadMax = Thickness;
  Element->ArcN = Height;
  Element->MarkX = ID;
  ID++;
  return Element + 268 + ( Element->ArcN * 68 );
}
LineTypePtr CreateNewLineInElement( ElementTypePtr Element, LocationType X1, LocationType Y1, LocationType X2, LocationType Y2, BDimension Thickness )
{
  int edx;
  int edi;
  LineTypePtr line = 0;
  line = &Element->Line;
  if ( Thickness )
  {
    if ( Element->LineMax <= Element->LineN )
    {
      Element->LineMax += 10;
      Element->Line = MyRealloc( (void*)line, ( Element->LineMax + 10 ) * 88, "CreateNewLineInElement()" );
      line = (struct {
         BoxType BoundingBox;
         long ID;
         FlagType Flags;
         struct LibraryEntryType *net;
         BDimension Thickness;
         BDimension Clearance;
         PointType Point1;
         PointType Point2;
         char *Number;
      }*)MyRealloc( (void*)line, ( Element->LineMax + 10 ) * 88, "CreateNewLineInElement()" );
      mymemset( Element + 264 + ( Element->LineN * 88 ), 0, 880 );
    }
    Element->LineN++;
    line = line->BoundingBox.X1 + ( Element->LineN * 88 );
    line->Point1.X = X1;
    line->Point1.Y = Y1;
    line->Point2.X = X2;
    line->Thickness = Thickness;
    line->Point2.Y = Y2;
    line->Flags = MakeFlags( 0 );
    line->Flags.t[0] = MakeFlags( 0 );
    line->ID = ID;
    ID++;
  }
  return line->BoundingBox.X1 + ( Element->LineN * 88 );
}
PinTypePtr CreateNewPin( ElementTypePtr Element, LocationType X, LocationType Y, BDimension Thickness, BDimension Clearance, BDimension Mask, BDimension DrillingHole, char *Name, char *Number, FlagType Flags )
{
  int ah;
  PinTypePtr pin = GetPinMemory( Element );
  *(int*)GetPinMemory( Element )/*.52*/ = X;
  *(int*)GetPinMemory( Element )/*.56*/ = Y;
  *(int*)GetPinMemory( Element )/*.36*/ = Thickness;
  *(int*)GetPinMemory( Element )/*.40*/ = Clearance;
  *(int*)GetPinMemory( Element )/*.44*/ = Mask;
  pin->Name = MyStrdup( Name, "CreateNewPin()" );
  pin->Element = Element;
  pin->Flags.t[7] = Flags.t[7];
  pin->Number = MyStrdup( Number, "CreateNewPin()" );
  pin->Flags.t[6] = Flags.t[6];
  pin->Flags.t[5] = Flags.t[5];
  pin->Flags.t[4] = Flags.t[4];
  pin->Flags.t[3] = Flags.t[3];
  pin->Flags.t[2] = Flags.t[2];
  pin->Flags.t[1] = Flags.t[1];
  pin->Flags.t[0] = Flags.t[0];
  pin->Flags.f = Flags.f | 1;
  pin->ID = ID;
  ID++;
  pin->DrillingHole = vendorDrillMap( DrillingHole );
  if ( ( vendorIsElementMappable( pin + 68 ) & 255 ) == 0 )
  {
    pin->DrillingHole = DrillingHole;
  }
  if ( pin->DrillingHole <= 1999 )
  {
    if ( Name == 0 || Name[0] == 0 )
      Name = "(unknown)";
    if ( Number == 0 || Number[0] == 0 )
      Number = "(unknown)";
    Message( "Did not map pin #%s (%s) drill hole because %6.2f mil is below the minimum allowed size\n", Number, Name, (double)( pin->DrillingHole ) * 0.010000000000 );
    pin->DrillingHole = DrillingHole;
    return pin;
  }
  else
  {
    if ( pin->DrillingHole > 0x989680 )
    {
      if ( Name == 0 || Name[0] == 0 )
        Name = "(unknown)";
      if ( Number == 0 || Number[0] == 0 )
        Number = "(unknown)";
      Message( "Did not map pin #%s (%s) drill hole because %6.2f mil is above the maximum allowed size\n", Number, Name, (double)( pin->DrillingHole ) * 0.010000000000 );
      pin->DrillingHole = DrillingHole;
      return pin;
    }
    else
    {
      if ( !( ( pin->Flags.f/*.1_1of4*/ & 8 ) & 255 ) && pin->Thickness + -399 <= pin->DrillingHole )
      {
        if ( Name == 0 || Name[0] == 0 )
          Name = "(unknown)";
        if ( Number == 0 || Number[0] == 0 )
          Number = "(unknown)";
        Message( "Did not map pin #%s (%s) drill hole because %6.2f mil does not leave enough copper\n", Number, Name, (double)( pin->DrillingHole ) * 0.010000000000 );
        pin->DrillingHole = DrillingHole;
      }
      else
      {
        if ( pin->DrillingHole != DrillingHole )
        {
          Message( "Mapped pin drill hole to %.2f mils from %.2f mils per vendor table\n", 0.010000000000 * (double)( pin->DrillingHole ), (double)( DrillingHole ) * 0.010000000000 );
          return &pin->BoundingBox.X1;
        }
      }
    }
  }
  return &pin->BoundingBox.X1;
}
PadTypePtr CreateNewPad( ElementTypePtr Element, LocationType X1, LocationType Y1, LocationType X2, LocationType Y2, BDimension Thickness, BDimension Clearance, BDimension Mask, char *Name, char *Number, FlagType Flags )
{
  PadTypePtr pad = GetPadMemory( Element );
  if ( X2 < X1 || ( Y2 < Y1 && X2 == X1 ) )
  {
    pad->Point1.X = X2;
    pad->Point1.Y = Y2;
    pad->Point2.X = X1;
    pad->Point2.Y = Y1;
  }
  else
  {
    pad->Point1.X = X1;
    pad->Point1.Y = Y1;
    pad->Point2.X = X2;
    pad->Point2.Y = Y2;
  }
  pad->Thickness = Thickness;
  pad->Clearance = Clearance;
  pad->Mask = Mask;
  pad->Name = MyStrdup( Name, "CreateNewPad()" );
  pad->Number = MyStrdup( Number, "CreateNewPad()" );
  pad->Flags.t[7] = Flags.t[7];
  pad->Flags.t[6] = Flags.t[6];
  pad->Flags.t[5] = Flags.t[5];
  pad->Flags.t[4] = Flags.t[4];
  pad->Flags.t[3] = Flags.t[3];
  pad->Flags.t[2] = Flags.t[2];
  pad->Flags.t[1] = Flags.t[1];
  pad->Flags.t[0] = Flags.t[0];
  pad->Flags.f = Flags.f;
  pad->ID = ID;
  pad->Element = Element;
  ID++;
  return &pad->BoundingBox.X1;
}
void AddTextToElement( TextTypePtr Text, FontTypePtr PCBFont, LocationType X, LocationType Y, BYTE Direction, char *TextString, int Scale, FlagType Flags )
{
  SaveFree( &Text->TextString );
  Text->TextString = 0;
  Text->Flags.t[7] = Flags.t[7];
  Text->Direction = Direction;
  Text->Flags.t[6] = Flags.t[6];
  Text->X = X;
  Text->Flags.t[5] = Flags.t[5];
  Text->Flags.t[4] = Flags.t[4];
  Text->Y = Y;
  Text->Flags.t[3] = Flags.t[3];
  Text->Flags.t[2] = Flags.t[2];
  Text->Flags.t[1] = Flags.t[1];
  Text->Flags.t[0] = Flags.t[0];
  Text->Flags.f = Flags.f;
  Text->Scale = Scale;
  Text->TextString = TextString == 0 || TextString[0] == 0 ? 0 : MyStrdup( TextString, "AddTextToElement()" );
  SetTextBoundingBox( PCBFont, Text );
  Text->ID = ID;
  ID++;
  return;
}
LineTypePtr CreateNewLineInSymbol( SymbolTypePtr Symbol, LocationType X1, LocationType Y1, LocationType X2, LocationType Y2, BDimension Thickness )
{
  int edx;
  LineTypePtr line = &Symbol->Line->BoundingBox.X1;
  if ( Symbol->LineMax <= Symbol->LineN )
  {
    Symbol->LineMax += 10;
    Symbol = (struct {
       LineTypePtr Line;
       Boolean Valid;
       Cardinal LineN;
       Cardinal LineMax;
       BDimension Width;
       BDimension Height;
       BDimension Delta;
    }*)MyRealloc( (void*)line, ( Symbol->LineMax + 10 ) * 88, "CreateNewLineInSymbol()" );
    line = (struct {
       BoxType BoundingBox;
       long ID;
       FlagType Flags;
       struct LibraryEntryType *net;
       BDimension Thickness;
       BDimension Clearance;
       PointType Point1;
       PointType Point2;
       char *Number;
    }*)MyRealloc( (void*)line, ( Symbol->LineMax + 10 ) * 88, "CreateNewLineInSymbol()" );
    mymemset( &Symbol->Line->BoundingBox.X1, 0, 880 );
  }
  Symbol->LineN++;
  line->Point1.X = X1;
  line->Point1.Y = Y1;
  line->Point2.X = X2;
  line->Point2.Y = Y2;
  line->Thickness = Thickness;
  return line->BoundingBox.X1 + ( Symbol->LineN * 88 );
}
void CreateDefaultFont( void )
{
  if ( ParseFont( &PCB->Font, Settings.FontFile ) )
  {
    Message( "Can't find font-symbol-file '%s'\n", Settings.FontFile );
    return;
  }
  return;
}
RubberbandTypePtr CreateNewRubberbandEntry( LayerTypePtr Layer, LineTypePtr Line, PointTypePtr MovedPoint )
{
  RubberbandTypePtr ptr;
  Line->Flags.f ^= 512;
  ptr = &Layer->Name[0];
  ptr->Line = Line;
  ptr->MovedPoint = MovedPoint;
  return GetRubberbandMemory( );
}
LibraryMenuTypePtr CreateNewNet( LibraryTypePtr lib, char *name, char *style )
{
  int eax;
  int ebx;
  int edi;
  LibraryMenuTypePtr menu;
  char temp[64];
  __sprintf_chk( temp, 1, 64, "  %s", name );
  menu = GetLibraryMenuMemory( lib );
  menu->flag = 1;
  menu = (struct {
     char *Name;
     char *directory;
     char *Style;
     Cardinal EntryN;
     Cardinal EntryMax;
     LibraryEntryTypePtr Entry;
     char flag;
     char internal;
     char __pad[2];
  }*)MyStrdup( temp, "CreateNewNet()" );
  if ( style )
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    strcmp( style, "(unknown)" );
    if ( 1 )
      *(int*)&menu->Style = 0;
      if ( 0 ^ 0 )
      {
        __stack_chk_fail( );
      }
      return menu;
  }
  menu->Style = MyStrdup( style, "CreateNewNet()" );
}
LibraryEntryTypePtr CreateNewConnection( LibraryMenuTypePtr net, char *conn )
{
  LibraryEntryTypePtr entry = GetLibraryEntryMemory( net );
  entry = (struct {
     char *ListEntry;
     char *AllocatedMemory;
     char *Template;
     char *Package;
     char *Value;
     char *Description;
  }*)MyStrdup( conn, "CreateNewConnection()" );
  return entry;
}
AttributeTypePtr CreateNewAttribute( AttributeListTypePtr list, char *name, char *value )
{
  int esi;
  int edi;
  if ( list->Number < list->Max )
  {
  }
  else
  {
    list->Max += 10;
    list->List = MyRealloc( &list->List, ( list->Max + 10 ) << 3, "CreateNewAttribute" );
  }
  list->List->name[0] = MyStrdup( name, "CreateNewAttribute" );
  list->List->value = MyStrdup( value, "CreateNewAttribute" );
  list = list->Number + 1;
  return *(int*)(list + 8) + ( list->Number << 3 );
}
#if 0
#endif
