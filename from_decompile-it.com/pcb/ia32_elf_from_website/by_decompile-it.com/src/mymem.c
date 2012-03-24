#include "mymem.c.h"
RubberbandTypePtr GetRubberbandMemory( void )
{
  int eax;
  RubberbandTypePtr ptr = Crosshair.AttachedObject.Rubberband;
  if ( Crosshair.AttachedObject.RubberbandMax <= Crosshair.AttachedObject.RubberbandN )
  {
    Crosshair.AttachedObject.RubberbandMax += 100;
    ptr = (struct {
       LayerTypePtr Layer;
       LineTypePtr Line;
       PointTypePtr MovedPoint;
    }*)MyRealloc( (void*)ptr, ( Crosshair.AttachedObject.RubberbandMax + 100 ) * 12, "GetRubberbandMemory()" );
    Crosshair.AttachedObject.Rubberband = (struct {
       LayerTypePtr Layer;
       LineTypePtr Line;
       PointTypePtr MovedPoint;
    }*)MyRealloc( (void*)ptr, ( Crosshair.AttachedObject.RubberbandMax + 100 ) * 12, "GetRubberbandMemory()" );
    mymemset( Crosshair.AttachedObject.Rubberband + ( Crosshair.AttachedObject.RubberbandN * 12 ), 0, 1200 );
    return &Crosshair.AttachedObject.RubberbandN;
  }
  Crosshair.AttachedObject.RubberbandN = MyRealloc( (void*)ptr, ( Crosshair.AttachedObject.RubberbandMax + 100 ) * 12, "GetRubberbandMemory()" ) + 1;
}
void **GetPointerMemory( PointerListTypePtr list )
{
  int eax;
  int esi;
  void **ptr;
  ptr[0] = &list->Ptr;
  if ( list->PtrMax <= list->PtrN )
  {
    list->PtrMax = ( list->PtrMax + 50 ) * 2;
    list->Ptr = MyRealloc( &ptr, ( list->PtrMax + 50 ) << 3, "GetPointerMemory()" );
    ptr[0] = MyRealloc( &ptr, ( list->PtrMax + 50 ) << 3, "GetPointerMemory()" );
    mymemset( list + 8 + ( list->PtrN << 2 ), 0, ( list->PtrMax - list->PtrN ) << 2 );
    return &list->PtrN;
  }
  list->PtrN++;
}
void FreePointerListMemory( PointerListTypePtr list )
{
  SaveFree( &list->Ptr );
  list->Ptr = 0;
  mymemset( (void*)list, 0, 12 );
  return;
}
BoxTypePtr GetBoxMemory( BoxListTypePtr Boxes )
{
  int eax;
  BoxTypePtr box = &Boxes->Box;
  if ( Boxes->BoxMax <= Boxes->BoxN )
  {
    Boxes->BoxMax = ( Boxes->BoxMax + 50 ) * 2;
    Boxes->Box = MyRealloc( (void*)box, ( Boxes->BoxMax + 50 ) << 5, "GetBoxMemory()" );
    box = (struct BoxType*)MyRealloc( (void*)box, ( Boxes->BoxMax + 50 ) << 5, "GetBoxMemory()" );
    mymemset( Boxes + 8 + ( Boxes->BoxN << 4 ), 0, ( Boxes->BoxMax - Boxes->BoxN ) << 4 );
    return &Boxes->BoxN;
  }
  Boxes = Boxes->BoxN + 1;
}
ConnectionTypePtr GetConnectionMemory( NetTypePtr Net )
{
  int eax;
  int esi;
  ConnectionTypePtr con = &Net->Connection;
  if ( Net->ConnectionMax <= Net->ConnectionN )
  {
    Net->ConnectionMax += 100;
    Net->Connection = MyRealloc( (void*)con, ( Net->ConnectionMax + 100 ) * 28, "GetConnectionMemory()" );
    con = (struct {
       LocationType X;
       LocationType Y;
       long type;
       void *ptr1;
       void *ptr2;
       Cardinal group;
       LibraryMenuType *menu;
    }*)MyRealloc( (void*)con, ( Net->ConnectionMax + 100 ) * 28, "GetConnectionMemory()" );
    mymemset( Net + 8 + ( Net->ConnectionN * 28 ), 0, 2800 );
    return &Net->ConnectionN;
  }
  Net->ConnectionN++;
}
NetTypePtr GetNetMemory( NetListTypePtr Netlist )
{
  int eax;
  int esi;
  NetTypePtr net = &Netlist->Net;
  if ( Netlist->NetMax <= Netlist->NetN )
  {
    Netlist->NetMax += 100;
    Netlist->Net = MyRealloc( (void*)net, ( Netlist->NetMax + 100 ) << 4, "GetNetMemory()" );
    net = (struct {
       Cardinal ConnectionN;
       Cardinal ConnectionMax;
       ConnectionTypePtr Connection;
       RouteStyleTypePtr Style;
    }*)MyRealloc( (void*)net, ( Netlist->NetMax + 100 ) << 4, "GetNetMemory()" );
    mymemset( Netlist + 8 + ( Netlist->NetN << 4 ), 0, 1600 );
    return &Netlist->NetN;
  }
  Netlist->NetN++;
}
NetListTypePtr GetNetListMemory( NetListListTypePtr Netlistlist )
{
  int eax;
  int esi;
  NetListTypePtr netlist = &Netlistlist->NetList;
  if ( Netlistlist->NetListMax <= Netlistlist->NetListN )
  {
    Netlistlist->NetListMax += 100;
    Netlistlist->NetList = MyRealloc( (void*)netlist, ( Netlistlist->NetListMax + 100 ) * 12, "GetNetListMemory()" );
    netlist = (struct {
       Cardinal NetN;
       Cardinal NetMax;
       NetTypePtr Net;
    }*)MyRealloc( (void*)netlist, ( Netlistlist->NetListMax + 100 ) * 12, "GetNetListMemory()" );
    mymemset( Netlistlist + 8 + ( Netlistlist->NetListN * 12 ), 0, 1200 );
    return &Netlistlist->NetListN;
  }
  Netlistlist->NetListN++;
}
// Lost vars at line 206 through condition folding
PinTypePtr GetPinMemory( ElementTypePtr Element )
{
  int eax;
  int ecx;
  int edx;
  PinTypePtr pin;
  Boolean onBoard;
  if ( Element->PinMax <= Element->PinN )
  {
    if ( PCB->Data->pin_tree && sn )
    {
      pin = &Element->Pin;
      n = 0;
      *(int*)&onBoard = 0;
      for ( ; Element->PinN && ( sn + n + 1 ) - sn < sn;  )
      {
        pin = &Element->Pin;
      }
      Element->PinMax += 20;
      Element->Pin = MyRealloc( &Element->Pin, ( Element->PinMax + 20 ) * 76, "GetPinMemory()" );
      mymemset( Element + 256 + ( Element->PinN * 76 ), 0, 1520 );
      if ( (unsigned char)( onBoard ) == 0 )
      {
        return Element->PinN + 1;
      }
    {
      Cardinal n = 0;
      Cardinal sn;
      /* phantom */ PinTypePtr pin;
      if ( Element->PinN == 0 )
      {
        Element->PinN = sn + 1;
      }
      while ( 1 )
      {
        r_insert_entry( &PCB->Data->pin_tree, Element->Pin + ( n * 76 ), 0 );
        sn = Element->PinN;
        if ( Element->PinN == 0 )
        {
          sn = 0;
          break;
        }
        n++;
        if ( sn <= n + ( MyRealloc( &Element->Pin, ( Element->PinMax + 20 ) * 76, "GetPinMemory()" ) - Element->PinN ) )
          break;
      }
    }
    }
    else
    {
      Element->PinMax += 20;
      Element->Pin = MyRealloc( &Element->Pin, ( Element->PinMax + 20 ) * 76, "GetPinMemory()" );
      mymemset( Element + 256 + ( Element->PinN * 76 ), 0, 1520 );
      sn = Element->PinN;
    }
  }
  Element->PinN = sn + 1;
}
// Lost vars at line 244 through condition folding
PadTypePtr GetPadMemory( ElementTypePtr Element )
{
  int ebp_28;
  PadTypePtr pad = &Element->Pad;
  Boolean onBoard;
  if ( Element->PadMax <= Element->PadN )
  {
    if ( PCB->Data->pad_tree )
    {
      *(int*)&onBoard = 0;
      for ( ; Element->PadN && n < sn;  )
      {
        onBoard = ( r_delete_entry( &PCB->Data->pad_tree, Element->Pad + ( n * 104 ) ) & 255 ) != 0 ? onBoard : 1;
        n += ebp_28 == Element->PadN;
      }
      Element->PadMax += 20;
      Element->Pad = MyRealloc( (void*)pad, ( Element->PadMax + 20 ) * 104, "GetPadMemory()" );
      pad = (struct {
         BoxType BoundingBox;
         long ID;
         FlagType Flags;
         struct LibraryEntryType *net;
         BDimension Thickness;
         BDimension Clearance;
         PointType Point1;
         PointType Point2;
         BDimension Mask;
         char *Name;
         char *Number;
         void *Element;
         void *Spare;
      }*)MyRealloc( (void*)pad, ( Element->PadMax + 20 ) * 104, "GetPadMemory()" );
      mymemset( &pad[ Element->PadN ].BoundingBox.X1, 0, 2080 );
      if ( onBoard )
      {
        Cardinal n = 0;
        Cardinal sn;
        /* phantom */ PadTypePtr pad;
        ebp_28 = 0;
        while ( 1 )
        {
          sn = Element->PadN;
          do
          {
            if ( sn == 0 || sn <= n )
              break;
            r_insert_entry( &PCB->Data->pad_tree, ebp_28 + Element->Pad, 0 );
            sn = Element->PadN;
          }
          while ( Element->PadN != Element->PadN );
          n++;
          ebp_28 += 104;
        }
      }
    }
    else
    {
      Element->PadMax += 20;
      Element->Pad = MyRealloc( (void*)pad, ( Element->PadMax + 20 ) * 104, "GetPadMemory()" );
      pad = (struct {
         BoxType BoundingBox;
         long ID;
         FlagType Flags;
         struct LibraryEntryType *net;
         BDimension Thickness;
         BDimension Clearance;
         PointType Point1;
         PointType Point2;
         BDimension Mask;
         char *Name;
         char *Number;
         void *Element;
         void *Spare;
      }*)MyRealloc( (void*)pad, ( Element->PadMax + 20 ) * 104, "GetPadMemory()" );
      mymemset( &pad[ Element->PadN ].BoundingBox.X1, 0, 2080 );
    }
    sn = Element->PadN;
  }
  Element->PadN = sn + 1;
  return &pad[ sn ];
}
PinTypePtr GetViaMemory( DataTypePtr Data )
{
  int eax;
  int ecx;
  PinTypePtr via = &Data->Via;
  if ( Data->ViaMax <= Data->ViaN )
  {
    Data->ViaMax += 2000;
    if ( Data->via_tree )
    {
      r_destroy_tree( Data + 40 );
    }
    Data->Via = MyRealloc( (void*)via, Data->ViaMax * 76, "GetViaMemory()" );
    via = (struct {
       BoxType BoundingBox;
       long ID;
       FlagType Flags;
       struct LibraryEntryType *net;
       BDimension Thickness;
       BDimension Clearance;
       BDimension Mask;
       BDimension DrillingHole;
       LocationType X;
       LocationType Y;
       char *Name;
       char *Number;
       void *Element;
       void *Spare;
    }*)MyRealloc( (void*)via, Data->ViaMax * 76, "GetViaMemory()" );
    mymemset( &via[ Data->ViaN ].BoundingBox.X1, 0, 152000 );
  {
    Cardinal n;
    Cardinal sn = Data->ViaN;
    /* phantom */ PinTypePtr via;
    Data->via_tree = r_create_tree( 0, 0, 0 );
    if ( Data->ViaN == 0 )
    {
      Data = sn + 1;
      return &via[ Data->ViaN ];
    }
    n = 0;
    while ( 1 )
    {
      r_insert_entry( &Data->via_tree, Data->Via + ( n * 76 ), 0 );
      sn = Data->ViaN;
      if ( Data->ViaN == 0 || sn <= n + 1 )
        break;
      sn = sn;
    }
  }
  }
  Data = sn + 1;
  return &via[ Data->ViaN ];
}
RatTypePtr GetRatMemory( DataTypePtr Data )
{
  int eax;
  int edx;
  RatTypePtr rat = &Data->Rat;
  if ( Data->RatMax <= Data->RatN )
  {
    Data->RatMax += 2000;
    if ( Data->rat_tree )
    {
      r_destroy_tree( Data + 68 );
    }
    Data->Rat = MyRealloc( (void*)rat, Data->RatMax * 92, "GetRatMemory()" );
    rat = (struct {
       BoxType BoundingBox;
       long ID;
       FlagType Flags;
       struct LibraryEntryType *net;
       BDimension Thickness;
       BDimension Clearance;
       PointType Point1;
       PointType Point2;
       Cardinal group1;
       Cardinal group2;
    }*)MyRealloc( (void*)rat, Data->RatMax * 92, "GetRatMemory()" );
    mymemset( Data + 36 + ( Data->RatN * 92 ), 0, 184000 );
  {
    Cardinal n = Data->RatN + -1;
    /* phantom */ RatTypePtr line;
    Data->rat_tree = r_create_tree( 0, 0, 0 );
    if ( Data->RatN + -1 == -1 )
    {
      Data->RatN++;
      return rat->BoundingBox.X1 + ( Data->RatN * 92 );
    }
    Data->RatN = ( Data->RatN * 92 ) + -92;
    while ( 1 )
    {
      n += -1;
      r_insert_entry( &Data->rat_tree, Data->Rat + ( Data->RatN * 92 ) + -92, 0 );
      if ( n == -1 )
      {
        break;
      }
    }
  }
  }
  Data->RatN++;
  return rat->BoundingBox.X1 + ( Data->RatN * 92 );
}
LineTypePtr GetLineMemory( LayerTypePtr Layer )
{
  int eax;
  int edx;
  LineTypePtr line = &Layer->Line;
  if ( Layer->LineMax <= Layer->LineN )
  {
    Layer->LineMax += 16;
    if ( Layer->line_tree )
    {
      r_destroy_tree( Layer + 52 );
    }
    Layer->Line = MyRealloc( (void*)line, Layer->LineMax * 88, "GetLineMemory()" );
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
    }*)MyRealloc( (void*)line, Layer->LineMax * 88, "GetLineMemory()" );
    mymemset( Layer + 36 + ( Layer->LineN * 88 ), 0, 880000 );
  {
    Cardinal n = Layer->LineN + -1;
    /* phantom */ LineTypePtr line;
    Layer->line_tree = r_create_tree( 0, 0, 0 );
    if ( Layer->LineN + -1 == -1 )
    {
      Layer->LineN++;
      return line->BoundingBox.X1 + ( Layer->LineN * 88 );
    }
    Layer->LineN = ( Layer->LineN * 88 ) + -88;
    while ( 1 )
    {
      n += -1;
      r_insert_entry( &Layer->line_tree, Layer->Line + ( Layer->LineN * 88 ) + -88, 0 );
      if ( n == -1 )
      {
        break;
      }
    }
  }
  }
  Layer->LineN++;
  return line->BoundingBox.X1 + ( Layer->LineN * 88 );
}
ArcTypePtr GetArcMemory( LayerTypePtr Layer )
{
  int eax;
  int edx;
  ArcTypePtr arc = &Layer->Arc;
  if ( Layer->ArcMax <= Layer->ArcN )
  {
    Layer->ArcMax += -24;
    if ( Layer->arc_tree )
    {
      r_destroy_tree( Layer + 64 );
    }
    Layer->Arc = MyRealloc( (void*)arc, Layer->ArcMax * 68, "GetArcMemory()" );
    arc = (struct {
       BoxType BoundingBox;
       long ID;
       FlagType Flags;
       struct LibraryEntryType *net;
       BDimension Thickness;
       BDimension Clearance;
       LocationType Width;
       LocationType Height;
       LocationType X;
       LocationType Y;
       long StartAngle;
       long Delta;
    }*)MyRealloc( (void*)arc, Layer->ArcMax * 68, "GetArcMemory()" );
    mymemset( Layer + 48 + ( Layer->ArcN * 68 ), 0, 68000 );
  {
    Cardinal n = Layer->ArcN + -1;
    /* phantom */ ArcTypePtr arc;
    Layer->arc_tree = r_create_tree( 0, 0, 0 );
    if ( Layer->ArcN + -1 == -1 )
    {
      Layer->ArcN++;
      return &arc->BoundingBox.X1;
    }
    Layer->ArcN = ( Layer->ArcN * 68 ) + -68;
    while ( 1 )
    {
      n += -1;
      r_insert_entry( &Layer->arc_tree, Layer->Arc + ( Layer->ArcN * 68 ) + -68, 0 );
      if ( n == -1 )
      {
        return &Layer->ArcN;
      }
    }
  }
  }
  Layer->ArcN++;
}
TextTypePtr GetTextMemory( LayerTypePtr Layer )
{
  int eax;
  int edx;
  TextTypePtr text = &Layer->Text;
  if ( Layer->TextMax <= Layer->TextN )
  {
    Layer->TextMax += '2';
    if ( Layer->text_tree )
    {
      r_destroy_tree( Layer + 56 );
    }
    Layer->Text = MyRealloc( (void*)text, Layer->TextMax * 60, "GetTextMemory()" );
    text = (struct {
       BoxType BoundingBox;
       long ID;
       FlagType Flags;
       struct LibraryEntryType *net;
       BDimension Scale;
       LocationType X;
       LocationType Y;
       BYTE Direction;
       char *TextString;
       void *Element;
    }*)MyRealloc( (void*)text, Layer->TextMax * 60, "GetTextMemory()" );
    mymemset( Layer + 40 + ( Layer->TextN * 60 ), 0, 3000 );
  {
    Cardinal n = Layer->TextN + -1;
    /* phantom */ TextTypePtr text;
    Layer->text_tree = r_create_tree( 0, 0, 0 );
    if ( Layer->TextN + -1 == -1 )
    {
      Layer->TextN++;
      return text->BoundingBox.X1 + ( Layer->TextN * 60 );
    }
    Layer->TextN = ( Layer->TextN * 60 ) + -60;
    while ( 1 )
    {
      n += -1;
      r_insert_entry( &Layer->text_tree, Layer->Text + ( Layer->TextN * 60 ) + -60, 0 );
      if ( n == -1 )
      {
        break;
      }
    }
  }
  }
  Layer->TextN++;
  return text->BoundingBox.X1 + ( Layer->TextN * 60 );
}
PolygonTypePtr GetPolygonMemory( LayerTypePtr Layer )
{
  int eax;
  int edx;
  PolygonTypePtr polygon = &Layer->Polygon;
  if ( Layer->PolygonMax <= Layer->PolygonN )
  {
    Layer->PolygonMax += '\n';
    if ( Layer->polygon_tree )
    {
      r_destroy_tree( Layer + 60 );
    }
    Layer->Polygon = MyRealloc( (void*)polygon, Layer->PolygonMax * 60, "GetPolygonMemory()" );
    polygon = (struct polygon_st*)MyRealloc( (void*)polygon, Layer->PolygonMax * 60, "GetPolygonMemory()" );
    mymemset( Layer + 44 + ( Layer->PolygonN * 60 ), 0, 600 );
  {
    Cardinal n = Layer->PolygonN + -1;
    /* phantom */ PolygonTypePtr polygon;
    Layer->polygon_tree = r_create_tree( 0, 0, 0 );
    if ( Layer->PolygonN + -1 == -1 )
    {
      Layer->PolygonN++;
      return polygon->BoundingBox.X1 + ( Layer->PolygonN * 60 );
    }
    Layer->PolygonN = ( Layer->PolygonN * 60 ) + -60;
    while ( 1 )
    {
      n += -1;
      r_insert_entry( &Layer->polygon_tree, Layer->Polygon + ( Layer->PolygonN * 60 ) + -60, 0 );
      if ( n == -1 )
      {
        break;
      }
    }
  }
  }
  Layer->PolygonN++;
  return polygon->BoundingBox.X1 + ( Layer->PolygonN * 60 );
}
PointTypePtr GetPointMemoryInPolygon( PolygonTypePtr Polygon )
{
  int eax;
  int esi;
  PointTypePtr points = &Polygon->Points;
  if ( Polygon->PointMax <= Polygon->PointN )
  {
    Polygon->PointMax += 10;
    Polygon->Points = MyRealloc( (void*)points, ( Polygon->PointMax + 10 ) * 20, "GetPointMemoryInPolygon()" );
    points = (struct {
       LocationType X;
       LocationType Y;
       LocationType X2;
       LocationType Y2;
       long ID;
    }*)MyRealloc( (void*)points, ( Polygon->PointMax + 10 ) * 20, "GetPointMemoryInPolygon()" );
    mymemset( Polygon + 56 + ( Polygon->PointN * 20 ), 0, 200 );
    return &Polygon->PointN;
  }
  Polygon->PointN++;
}
ElementTypePtr GetElementMemory( DataTypePtr Data )
{
  int eax;
  int edx;
  int ebp_32;
  ElementTypePtr element = &Data->Element;
  int i;
  if ( Data->ElementMax <= Data->ElementN )
  {
    Data->ElementMax += 50;
    if ( Data->element_tree )
    {
      r_destroy_tree( Data + 44 );
    }
    i = 0;
    Data->Element = MyRealloc( (void*)element, Data->ElementMax * 300, "GetElementMemory()" );
    element = (struct {
       BoxType BoundingBox;
       long ID;
       FlagType Flags;
       struct LibraryEntryType *net;
       TextType Name[3];
       LocationType MarkX;
       LocationType MarkY;
       Cardinal PinN;
       Cardinal PinMax;
       Cardinal PadN;
       Cardinal PadMax;
       Cardinal LineN;
       Cardinal LineMax;
       Cardinal ArcN;
       Cardinal ArcMax;
       PinTypePtr Pin;
       PadTypePtr Pad;
       LineTypePtr Line;
       ArcTypePtr Arc;
       BoxType VBox;
       AttributeListType Attributes;
    }*)MyRealloc( (void*)element, Data->ElementMax * 300, "GetElementMemory()" );
    mymemset( &element[ Data->ElementN ].BoundingBox.X1, 0, 15000 );
    Data->element_tree = r_create_tree( 0, 0, 0 );
    do
    {
      if ( Data->pad_tree )
        r_destroy_tree( Data + ( i << 2 ) + 56 );
      Data->pad_tree = r_create_tree( 0, 0, 0 );
      i++;
    }
    while ( i + 1 != 3 );
  {
    Cardinal n = Data->ElementN + -1;
    ElementTypePtr element;
    if ( Data->ElementN + -1 == -1 )
    {
      Data->ElementN++;
      return &element[ Data->ElementN ];
    }
    ebp_32 = ( Data->ElementN * 300 ) + -300;
    do
    {
      element = ebp_32 + Data->Element;
      r_insert_entry( &Data->element_tree, ebp_32 + Data->Element, 0 );
    {
      Cardinal n;
      Cardinal sn = element->PinN;
      /* phantom */ PinTypePtr pin;
      if ( element->PinN )
      {
        n = 0;
        element->Pin->Element = element;
        while ( n++, n + 1 < sn )
        {
          element->Pin->Element = element;
        }
      }
    {
      Cardinal n;
      Cardinal sn = element->PadN;
      /* phantom */ PadTypePtr pad;
      n = 0;
      for ( ; sn && n < sn; n++ )
      {
        element->Pad->Element = element;
        // n++;
      }
      n = 2;
    {
      do
      {
        Cardinal n;
        /* phantom */ TextTypePtr text;
        element->Name[2].Element = element;
        n += -1;
        r_insert_entry( &Data->pad_tree, element->BoundingBox.X1 + 36, 0 );
      }
      while ( n == -1 );
      n += -1;
      ebp_32 += -300;
    }
    }
    }
    }
    while ( n == -1 );
    return &Data->ElementN;
  }
  }
  Data->ElementN++;
}
LibraryMenuTypePtr GetLibraryMenuMemory( LibraryTypePtr lib )
{
  int eax;
  int esi;
  LibraryMenuTypePtr menu = &lib->Menu;
  if ( lib->MenuMax <= lib->MenuN )
  {
    lib->MenuMax += 10;
    lib->Menu = MyRealloc( (void*)menu, ( lib->MenuMax + 10 ) * 28, "GetLibraryMenuMemory()" );
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
    }*)MyRealloc( (void*)menu, ( lib->MenuMax + 10 ) * 28, "GetLibraryMenuMemory()" );
    mymemset( lib + 8 + ( lib->MenuN * 28 ), 0, 280 );
    return &lib->MenuN;
  }
  lib->MenuN++;
}
LibraryEntryTypePtr GetLibraryEntryMemory( LibraryMenuTypePtr Menu )
{
  int eax;
  int esi;
  LibraryEntryTypePtr entry = &Menu->Entry;
  if ( Menu->EntryMax <= Menu->EntryN )
  {
    Menu->EntryMax += 20;
    Menu->Entry = MyRealloc( (void*)entry, ( Menu->EntryMax + 20 ) * 24, "GetLibraryEntryMemory()" );
    entry = (struct {
       char *ListEntry;
       char *AllocatedMemory;
       char *Template;
       char *Package;
       char *Value;
       char *Description;
    }*)MyRealloc( (void*)entry, ( Menu->EntryMax + 20 ) * 24, "GetLibraryEntryMemory()" );
    mymemset( Menu + 20 + ( Menu->EntryN * 24 ), 0, 480 );
    return &Menu->EntryN;
  }
  Menu->EntryN++;
}
ElementTypeHandle GetDrillElementMemory( DrillTypePtr Drill )
{
  int eax;
  int esi;
  ElementTypePtr *element;
  element[0] = &Drill->Element[0];
  if ( Drill->ElementMax <= Drill->ElementN )
  {
    Drill->ElementMax += 50;
    Drill->Element = MyRealloc( (void*)&element, ( Drill->ElementMax + 50 ) << 2, "GetDrillElementMemory()" );
    element[0] = (struct {
       BoxType BoundingBox;
       long ID;
       FlagType Flags;
       struct LibraryEntryType *net;
       TextType Name[3];
       LocationType MarkX;
       LocationType MarkY;
       Cardinal PinN;
       Cardinal PinMax;
       Cardinal PadN;
       Cardinal PadMax;
       Cardinal LineN;
       Cardinal LineMax;
       Cardinal ArcN;
       Cardinal ArcMax;
       PinTypePtr Pin;
       PadTypePtr Pad;
       LineTypePtr Line;
       ArcTypePtr Arc;
       BoxType VBox;
       AttributeListType Attributes;
    }*)MyRealloc( (void*)&element, ( Drill->ElementMax + 50 ) << 2, "GetDrillElementMemory()" );
    mymemset( Drill + 36 + ( Drill->ElementN << 2 ), 0, 200 );
    return &Drill->ElementN;
  }
  Drill->ElementN++;
}
PinTypeHandle GetDrillPinMemory( DrillTypePtr Drill )
{
  int eax;
  int esi;
  PinTypePtr *pin;
  pin[0] = &Drill->Pin[0];
  if ( Drill->PinMax <= Drill->PinN )
  {
    Drill->PinMax += 100;
    Drill->Pin = MyRealloc( (void*)&pin, ( Drill->PinMax + 100 ) << 2, "GetDrillPinMemory()" );
    pin[0] = (struct {
       BoxType BoundingBox;
       long ID;
       FlagType Flags;
       struct LibraryEntryType *net;
       BDimension Thickness;
       BDimension Clearance;
       BDimension Mask;
       BDimension DrillingHole;
       LocationType X;
       LocationType Y;
       char *Name;
       char *Number;
       void *Element;
       void *Spare;
    }*)MyRealloc( (void*)&pin, ( Drill->PinMax + 100 ) << 2, "GetDrillPinMemory()" );
    mymemset( Drill + 32 + ( Drill->PinN << 2 ), 0, 400 );
    return &Drill->PinN;
  }
  Drill->PinN++;
}
DrillTypePtr GetDrillInfoDrillMemory( DrillInfoTypePtr DrillInfo )
{
  int eax;
  int esi;
  DrillTypePtr drill = &DrillInfo->Drill;
  if ( DrillInfo->DrillMax <= DrillInfo->DrillN )
  {
    DrillInfo->DrillMax += 30;
    DrillInfo->Drill = MyRealloc( (void*)drill, ( DrillInfo->DrillMax + 30 ) * 40, "GetDrillInfoDrillMemory()" );
    drill = (struct {
       BDimension DrillSize;
       Cardinal ElementN;
       Cardinal ElementMax;
       Cardinal PinCount;
       Cardinal ViaCount;
       Cardinal UnplatedCount;
       Cardinal PinN;
       Cardinal PinMax;
       PinTypePtr *Pin;
       ElementTypePtr *Element;
    }*)MyRealloc( (void*)drill, ( DrillInfo->DrillMax + 30 ) * 40, "GetDrillInfoDrillMemory()" );
    mymemset( DrillInfo + 8 + ( DrillInfo->DrillN * 40 ), 0, 1200 );
    return &DrillInfo->DrillN;
  }
  DrillInfo->DrillN++;
}
void *MyCalloc( size_t Number, size_t Size, char *Text )
{
  void *p;
  Number = Number == 0 ? Number : 1;
  Size = Size == 0 ? Size : 1;
  if ( p == 0 )
  {
    Text[0] = Text == 0 ? Text : "(unknown)";
    MyFatal( "out of memory during malloc() in '%s'()\n", Text == 0 ? Text : "(unknown)" );
    return p;
  }
  return calloc( Number == 0 ? Number : 1, Size == 0 ? Size : 1 );
}
void *MyMalloc( size_t Size, char *Text )
{
  void *p;
  Size = Size == 0 ? Size : 1;
  if ( p == 0 )
  {
    Text[0] = Text == 0 ? Text : "(unknown)";
    MyFatal( "out of memory during malloc() in '%s'()\n", Text == 0 ? Text : "(unknown)" );
    return p;
  }
  return calloc( 1, Size == 0 ? Size : 1 );
}
void *MyRealloc( void *Ptr, size_t Size, char *Text )
{
  int eax;
  void *p;
  Size = Size == 0 ? Size : 1;
  if ( p == 0 )
  {
    Text[0] = Text == 0 ? Text : "(unknown)";
    MyFatal( "out of memory during realloc() in '%s'()\n", Text == 0 ? Text : "(unknown)" );
    return p;
  }
  return Ptr ? realloc( Ptr, Size ) : calloc( 1, Size );
}
char *MyStrdup( char *S, char *Text )
{
  char *p;
  *(int*)&p[0] = 0;
  if ( S && p == 0 )
  {
    Text[0] = Text == 0 ? Text : "(unknown)";
    MyFatal( "out of memory during g_strdup() in '%s'\n", Text == 0 ? Text : "(unknown)" );
    return p;
  }
  return __strdup( S );
}
void FreePolygonMemory( PolygonTypePtr Polygon )
{
  if ( Polygon )
  {
    SaveFree( &Polygon->Points );
    Polygon->Points = 0;
    if ( Polygon->Clipped )
      poly_Free( Polygon + 44 );
    poly_FreeContours( Polygon + 48 );
    mymemset( (void*)Polygon, 0, 60 );
  }
  return;
}
void FreeBoxListMemory( BoxListTypePtr Boxlist )
{
  if ( Boxlist )
  {
    SaveFree( &Boxlist->Box );
    Boxlist->Box = 0;
    mymemset( (void*)Boxlist, 0, 12 );
  }
  return;
}
void FreeNetListMemory( NetListTypePtr Netlist )
{
  if ( Netlist )
  {
    Cardinal n = Netlist->NetN + -1;
    /* phantom */ NetTypePtr net;
    if ( Netlist->NetN + -1 != -1 )
    {
      do
      {
        n += -1;
        FreeNetMemory( Netlist->Net + ( ( Netlist->NetN + 0xfffffff ) << 4 ) + -16 );
      }
      while ( n == -1 );
    }
    SaveFree( &Netlist->Net );
    Netlist->Net = 0;
    mymemset( (void*)Netlist, 0, 12 );
  }
  return;
}
void FreeNetListListMemory( NetListListTypePtr Netlistlist )
{
  if ( Netlistlist )
  {
    Cardinal n = Netlistlist->NetListN + -1;
    /* phantom */ NetListTypePtr netlist;
    if ( Netlistlist->NetListN + -1 != -1 )
    {
      do
      {
        n += -1;
        FreeNetListMemory( Netlistlist->NetList + ( Netlistlist->NetListN * 12 ) + -12 + -12 );
      }
      while ( n == -1 );
    }
    SaveFree( &Netlistlist->NetList );
    Netlistlist->NetList = 0;
    mymemset( (void*)Netlistlist, 0, 12 );
  }
  return;
}
void FreeNetMemory( NetTypePtr Net )
{
  if ( Net )
  {
    SaveFree( &Net->Connection );
    Net->Connection = 0;
    mymemset( (void*)Net, 0, 16 );
  }
  return;
}
void FreeAttributeListMemory( AttributeListTypePtr list )
{
  int i;
  if ( list > 0 )
  {
    i = 0;
    do
    {
      i++;
      SaveFree( &list->List->name[0] );
      SaveFree( &list->List->value );
    }
    while ( list->Number <= i );
  }
  SaveFree( &list->List );
  list->List = 0;
  list->Max = 0;
  return;
}
void FreeElementMemory( ElementTypePtr Element )
{
  int eax;
  int ebp_28;
  if ( Element )
  {
    /* phantom */ Cardinal n;
    /* phantom */ char *textstring;
    SaveFree( &Element->Name[2].TextString );
    SaveFree( &Element->Name[1].TextString );
    SaveFree( &Element->Name->TextString );
  {
    Cardinal n;
    Cardinal sn;
    PinTypePtr pin;
    ebp_28 = Element->PinN;
    if ( Element->PinN )
    {
      n = 0;
      while ( 1 )
      {
        pin = Element->Pin + ( n * 76 );
        SaveFree( &pin->Name );
        pin->Name = 0;
        SaveFree( &pin->Number );
        sn = Element->PinN;
        pin->Number = 0;
        if ( Element->PinN == 0 || sn <= ( sn + n + 1 ) - ebp_28 )
          goto B7;
        else
        {
        }
      }
    }
  {
B7:;
    Cardinal n = 0;
    Cardinal sn;
    PadTypePtr pad;
    ebp_28 = 0;
    while ( 1 )
    {
      sn = Element->PadN;
      do
      {
        if ( sn && n < sn )
        {
          pad = ebp_28 + Element->Pad;
          SaveFree( &pad->Name );
          pad->Name = 0;
          SaveFree( &pad->Number );
          sn = Element->PadN;
          pad->Number = 0;
        }
        else
        {
          SaveFree( &Element->Pin );
          Element->Pin = 0;
          SaveFree( &Element->Pad );
          Element->Pad = 0;
          SaveFree( &Element->Line );
          Element->Line = 0;
          SaveFree( &Element->Arc );
          Element->Arc = 0;
          FreeAttributeListMemory( Element + 288 );
          mymemset( (void*)Element, 0, 300 );
          break;
        }
      }
      while ( Element->PadN != Element->PadN );
      n++;
      ebp_28 += 104;
    }
  }
  }
  }
  return;
}
void FreePCBMemory( PCBTypePtr PCBPtr )
{
  int eax;
  /* phantom */ int i;
  if ( PCBPtr == 0 )
  {
    __fprintf_chk( stderr, 1, "Warning:  Tried to FreePCBMemory(null)\n" );
    return;
  }
  SaveFree( &PCBPtr->Name );
  PCBPtr->Name = 0;
  SaveFree( &PCBPtr->Filename );
  PCBPtr->Filename = 0;
  SaveFree( &PCBPtr->PrintFilename );
  PCBPtr->PrintFilename = 0;
  if ( PCBPtr->Data )
  {
    FreeDataMemory( &PCBPtr->Data );
  }
  SaveFree( &PCBPtr->Data );
  PCBPtr->Data = 0;
  do
  {
    SaveFree( &PCBPtr->Font.Symbol->Line );
  }
  while ( 0 + 28 + 28 == 7168 );
  FreeLibraryMemory( PCBPtr + 8692 );
  FreeAttributeListMemory( PCBPtr + 8704 );
  mymemset( (void*)PCBPtr, 0, 8720 );
  return;
}
void FreeDataMemory( DataTypePtr Data )
{
  int eax;
  int ecx;
  LayerTypePtr layer;
  int i;
  if ( Data )
  {
    Cardinal n;
    Cardinal sn = Data->ViaN;
    PinTypePtr via;
    if ( Data->ViaN )
    {
      n = 0;
      Data = Data;
      while ( 1 )
      {
        via = Data->Via + ( n * 76 );
        SaveFree( &via->Name );
        sn = Data->ViaN;
        via->Name = 0;
        if ( Data->ViaN == 0 || sn <= ( sn + n + 1 ) - sn )
          goto B4;
        else
        {
        }
      }
    }
  {
B4:;
    Cardinal n = Data->ElementN + -1;
    /* phantom */ ElementTypePtr element;
    if ( Data->ElementN + -1 != -1 )
    {
      Data = Data;
      do
      {
        n += -1;
        FreeElementMemory( Data->Element + ( Data->ElementN * 300 ) + -300 + -300 );
      }
      while ( n == -1 );
    }
    i = 0;
    layer = &Data->Layer;
    while ( 1 )
    {
      FreeAttributeListMemory( layer + 80 );
    {
      Cardinal n = layer->TextN + -1;
      TextTypePtr text;
      if ( layer->TextN + -1 != -1 )
      {
        do
        {
          n += -1;
          text = ( layer->TextN * 60 ) + -60 + -60 + layer->Text;
          SaveFree( &text->TextString );
        }
        while ( n == -1 );
        layer = layer;
      }
      if ( layer->Name[0] )
      {
        SaveFree( &layer->Name[0] );
        layer = 0;
      }
    {
      Cardinal n = layer->LineN + -1;
      LineTypePtr line;
      if ( layer->LineN + -1 != -1 )
      {
        do
        {
          line = layer->Line + ( layer->LineN * 88 ) + -88 + -88;
          if ( line->Number == 0 )
            goto B24;
          else
          {
            SaveFree( &line->Number );
            line->Number = 0;
          }
B24:;
          n += -1;
        }
        while ( n + -1 != -1 );
        layer = layer;
      }
      else
      {
      }
      SaveFree( &layer->Line );
      *(int*)&layer->Line = 0;
      SaveFree( &layer->Arc );
      *(int*)&layer->Arc = 0;
      SaveFree( &layer->Text );
    {
      Cardinal n;
      /* phantom */ PolygonTypePtr polygon;
      *(int*)&layer->Text = 0;
      n = layer->PolygonN + -1;
      if ( layer->PolygonN + -1 != -1 )
      {
        do
        {
          n += -1;
          FreePolygonMemory( layer->Polygon + ( layer->PolygonN * 60 ) + -60 + -60 );
        }
        while ( n == -1 );
      }
      SaveFree( &layer->Polygon );
      *(int*)&layer->Polygon = 0;
      if ( layer->line_tree )
        r_destroy_tree( layer + 52 );
      if ( layer->arc_tree )
        r_destroy_tree( layer + 64 );
      if ( layer->text_tree )
        r_destroy_tree( layer + 56 );
      if ( layer->polygon_tree )
        r_destroy_tree( layer + 60 );
      i++;
      if ( i == 18 )
      {
        if ( Data->element_tree )
          r_destroy_tree( Data + 44 );
        if ( Data->name_tree[0] == 0 )
          goto B54;
        else
          r_destroy_tree( Data + 56 );
B54:;
        if ( Data->name_tree[1] == 0 )
          goto B56;
        else
          r_destroy_tree( Data + 60 );
B56:;
        if ( Data->name_tree[2] )
          r_destroy_tree( Data + 64 );
        if ( Data->via_tree )
          r_destroy_tree( Data + 40 );
        if ( Data->pin_tree )
          r_destroy_tree( Data + 48 );
        if ( Data->pad_tree )
          r_destroy_tree( Data + 52 );
        if ( Data->rat_tree )
          r_destroy_tree( Data + 68 );
        mymemset( (void*)Data, 0, 1732 );
        break;
      }
      else
      {
        layer++;
      }
    }
    }
    }
    }
  }
  }
  else
  {
    __fprintf_chk( stderr, 1, "Warning:  Tried to FreeDataMemory(null)\n" );
  }
  return;
}
void FreeLibraryMemory( LibraryTypePtr lib )
{
  int edx;
  int ebp_36;
{
  Cardinal l = lib->MenuN + -1;
  LibraryMenuTypePtr menu;
  if ( lib->MenuN + -1 != -1 )
  {
    ebp_36 = ( lib->MenuN * 28 ) + -28;
    do
    {
      Cardinal n;
      LibraryEntryTypePtr entry;
      menu = ebp_36 + lib->Menu;
      n = *(int*)(ebp_36 + lib->Menu + 12) + -1;
      if ( menu->EntryN + -1 != -1 )
      {
        do
        {
          n += -1;
          entry = menu->Entry + ( *(int*)(ebp_36 + lib->Menu + 12) * 24 ) + -24 + -24;
          SaveFree( &entry->AllocatedMemory );
          SaveFree( &entry->ListEntry[0] );
        }
        while ( n == -1 );
      }
      SaveFree( &menu->Entry );
      SaveFree( &menu->Name[0] );
      l += -1;
      ebp_36 += -28;
    }
    while ( l != -1 );
  }
  SaveFree( &lib->Menu );
  mymemset( (void*)lib, 0, 12 );
  return;
}
}
void SaveFree( void *Ptr )
{
  if ( Ptr )
  {
  }
  return;
}
void DSAddCharacter( DynamicStringTypePtr Ptr, char Char )
{
  int edx;
  int esi;
  int edi;
  size_t position;
  if ( Ptr->Data )
  {
    if ( Ptr->MaxLength <= strlen( &Ptr->Data ) + 1 )
    {
      Ptr = strlen( &Ptr->Data ) + 513;
      Ptr->Data = MyRealloc( &Ptr->Data, strlen( &Ptr->Data ) + 513, "ReallocDS()" );
    }
  }
  else
  {
    Ptr = 513;
    position = 0;
    Ptr->Data = MyRealloc( 0, 513, "ReallocDS()" );
    *(char*)(MyRealloc( 0, 513, "ReallocDS()" )) = 0;
  }
  *(char*)(Ptr + 4 + position) = Char;
  return;
}
void DSAddString( DynamicStringTypePtr Ptr, char *S )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  int edi;
  size_t position = 0;
  if ( Ptr->Data )
  {
    position = strlen( &Ptr->Data );
  }
  if ( S == 0 || S[0] == 0 )
  {
    return;
  }
  *(int*)(strlen( S )) = position + strlen( S ) + 1;
  if ( Ptr->Data )
  {
    if ( Ptr->MaxLength <= position + strlen( S ) + 1 )
    {
      Ptr = position + strlen( S ) + 1 + 512;
      Ptr->Data = MyRealloc( &Ptr->Data, position + strlen( S ) + 1 + 512, "ReallocDS()" );
    }
  }
  else
  {
    Ptr = position + strlen( S ) + 1 + 512;
    Ptr->Data = MyRealloc( 0, position + strlen( S ) + 1 + 512, "ReallocDS()" );
    *(char*)(MyRealloc( 0, position + strlen( S ) + 1 + 512, "ReallocDS()" )) = 0;
  }
  position = position + MyRealloc( &Ptr->Data, position + strlen( S ) + 1 + 512, "ReallocDS()" );
  Ptr = position + MyRealloc( &Ptr->Data, position + strlen( S ) + 1 + 512, "ReallocDS()" );
}
void DSClearString( DynamicStringTypePtr Ptr )
{
  if ( Ptr->Data )
  {
    Ptr->Data[0] = 0;
  }
  return;
}
char *StripWhiteSpaceAndDup( char *S )
{
  int eax;
  int edx;
  int esi;
  char *p1, *p2;
  size_t length;
  if ( S && S[0] && p2 )
  {
    p2 = (char*)MyRealloc( 0, length + 1, "StripWhiteSpace()" );
    strncpy( (char*)MyRealloc( 0, length + 1, "StripWhiteSpace()" ), p1, length );
    p2 = 0;
  }
  p2 = 0;
  return p2;
}
#if 0
#endif
