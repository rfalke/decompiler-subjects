#include "change.c.h"
static int Delta;
static int Absolute;
static char *NewName;
static ObjectFunctionType ChangeSizeFunctions = { &ChangeLineSize, &ChangeTextSize, &ChangePolyClear, &ChangeViaSize, &ChangeElementSize, &ChangeElementNameSize, &ChangePinSize, &ChangePadSize, 0, 0, &ChangeArcSize, 0 }
;
static ObjectFunctionType Change2ndSizeFunctions = { 0, 0, 0, &ChangeVia2ndSize, &ChangeElement2ndSize, 0, &ChangePin2ndSize, 0, 0, 0, 0, 0 }
;
static ObjectFunctionType ChangeThermalFunctions = { 0, 0, 0, &ChangeViaThermal, 0, 0, &ChangePinThermal, 0, 0, 0, 0, 0 }
;
static ObjectFunctionType ChangeClearSizeFunctions = { &ChangeLineClearSize, 0, 0, &ChangeViaClearSize, 0, 0, &ChangePinClearSize, &ChangePadClearSize, 0, 0, &ChangeArcClearSize, 0 }
;
static ObjectFunctionType ChangeNameFunctions = { &ChangeLineName, &ChangeTextName, 0, &ChangeViaName, &ChangeElementName, 0, &ChangePinName, &ChangePadName, 0, 0, 0, 0 }
;
static ObjectFunctionType ChangeSquareFunctions = { 0, 0, 0, 0, &ChangeElementSquare, 0, &ChangePinSquare, &ChangePadSquare, 0, 0, 0, 0 }
;
static ObjectFunctionType ChangeJoinFunctions = { &ChangeLineJoin, &ChangeTextJoin, 0, 0, 0, 0, 0, 0, 0, 0, &ChangeArcJoin, 0 }
;
static ObjectFunctionType ChangeOctagonFunctions = { 0, 0, 0, &ChangeViaOctagon, &ChangeElementOctagon, 0, &ChangePinOctagon, 0, 0, 0, 0, 0 }
;
static ObjectFunctionType ChangeMaskSizeFunctions = { 0, 0, 0, &ChangeViaMaskSize, 0, 0, &ChangePinMaskSize, &ChangePadMaskSize, 0, 0, 0, 0 }
;
static ObjectFunctionType SetSquareFunctions = { 0, 0, 0, 0, &SetElementSquare, 0, &SetPinSquare, &SetPadSquare, 0, 0, 0, 0 }
;
static ObjectFunctionType SetJoinFunctions = { &SetLineJoin, &SetTextJoin, 0, 0, 0, 0, 0, 0, 0, 0, &SetArcJoin, 0 }
;
static ObjectFunctionType SetOctagonFunctions = { 0, 0, 0, &SetViaOctagon, &SetElementOctagon, 0, &SetPinOctagon, 0, 0, 0, 0, 0 }
;
static ObjectFunctionType ClrSquareFunctions = { 0, 0, 0, 0, &ClrElementSquare, 0, &ClrPinSquare, &ClrPadSquare, 0, 0, 0, 0 }
;
static ObjectFunctionType ClrJoinFunctions = { &ClrLineJoin, &ClrTextJoin, 0, 0, 0, 0, 0, 0, 0, 0, &ClrArcJoin, 0 }
;
static ObjectFunctionType ClrOctagonFunctions = { 0, 0, 0, &ClrViaOctagon, &ClrElementOctagon, 0, &ClrPinOctagon, 0, 0, 0, 0, 0 }
;
void *ChangeViaThermal( PinTypePtr Via )
{
  int ecx;
  int edx;
  AddObjectToClearPolyUndoList( 1, (void*)Via, (void*)Via, (void*)Via, 0 );
  RestoreToPolygon( &PCB->ID, 1, PCB->SilkActive == 0 ? *(int*)(PCB + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, (void*)Via );
  AddObjectToFlagUndoList( 1, (void*)Via, (void*)Via, (void*)Via );
  if ( Delta == 0 )
  {
  }
  else
  {
  }
  AddObjectToClearPolyUndoList( 1, (void*)Via, (void*)Via, (void*)Via, 1 );
  ClearFromPolygon( &PCB->Data, 1, PCB->Data[5].name_tree[0] + ( LayerStack[0] * 92 ) + 76, (void*)Via );
  DrawVia( Via, 0 );
  return (void*)Via;
}
void *ChangePinThermal( ElementTypePtr element, PinTypePtr Pin )
{
  int ecx;
  int edx;
  AddObjectToClearPolyUndoList( 256, (void*)element, (void*)Pin, (void*)Pin, 0 );
  RestoreToPolygon( &PCB->ID, 1, PCB->SilkActive == 0 ? *(int*)(PCB + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, (void*)Pin );
  AddObjectToFlagUndoList( 256, (void*)element, (void*)Pin, (void*)Pin );
  if ( Delta == 0 )
  {
  }
  else
  {
  }
  AddObjectToClearPolyUndoList( 256, (void*)element, (void*)Pin, (void*)Pin, 1 );
  ClearFromPolygon( &PCB->Data, 1, PCB->Data[5].name_tree[0] + ( LayerStack[0] * 92 ) + 76, (void*)Pin );
  DrawPin( Pin, 0 );
  return (void*)Pin;
}
void *ChangeViaSize( PinTypePtr Via )
{
  int eax;
  int ebx;
  int esi;
  BDimension value = Absolute;
  if ( value > 0x989680 || ( ( Via->Flags.f & 8 ) & 255 ) || value <= 1999 || value <= Via->DrillingHole + 399 || Via->Thickness == value )
  {
  }
  AddObjectToSizeUndoList( 1, (void*)Via, (void*)Via, (void*)Via );
  EraseVia( Via );
  r_delete_entry( &PCB->Data->via_tree, (int)( &Via->BoundingBox ) );
  RestoreToPolygon( &PCB->Data, 256, (void*)Via, (void*)Via );
  if ( Via->Mask )
  {
    AddObjectToMaskSizeUndoList( 1, (void*)Via, (void*)Via, (void*)Via );
    Via->Mask = ( Via->Mask + value ) - Via->Thickness;
  }
  Via->Thickness = value;
  SetPinBoundingBox( Via );
  r_insert_entry( &PCB->Data->via_tree, (int)( &Via->BoundingBox ), 0 );
  ClearFromPolygon( &PCB->Data, 1, (void*)Via, (void*)Via );
  DrawVia( Via, 0 );
  return (void*)Via;
}
void *ChangeVia2ndSize( PinTypePtr Via )
{
  int eax;
  int ebx;
  int esi;
  BDimension value = Absolute;
  if ( value + -400 > 0x9894f0 || ( !( ( Via->Flags.f & 8 ) & 255 ) && Via->Thickness + -399 <= value ) || Via->DrillingHole == value )
  {
  }
  AddObjectTo2ndSizeUndoList( 1, (void*)Via, (void*)Via, (void*)Via );
  EraseVia( Via );
  Via->DrillingHole = value;
  if ( ( Via->Flags.f/*.1_1of4*/ & 8 ) & 255 )
  {
    RestoreToPolygon( &PCB->Data, 1, (void*)Via, (void*)Via );
    AddObjectToSizeUndoList( 1, (void*)Via, (void*)Via, (void*)Via );
    Via->Thickness = value;
    ClearFromPolygon( &PCB->Data, 1, (void*)Via, (void*)Via );
  }
  DrawVia( Via, 0 );
  return (void*)Via;
}
void *ChangeViaClearSize( PinTypePtr Via )
{
  int eax;
  int ecx;
  int ebx;
  int esi;
  BDimension value = Absolute;
  if ( ( Via->Flags.f & 8192 ) == 0 )
  {
    value = ( value <= 0x989680 ? 0x989680 : value ) < 0 ? value <= 0x989680 ? 10000000 : value : Via->Flags.f & 8192;
    if ( Delta < 0 )
      value = value < ( PCB->Bloat * 2 ) ? value : Via->Flags.f & 8192;
    else
    if ( !1 )
      value = value < ( PCB->Bloat * 2 ) ? value : ( PCB->Bloat + 1 ) * 2;
      if ( Via->Clearance != value )
      {
        RestoreToPolygon( &PCB->Data, 1, (void*)Via, (void*)Via );
        AddObjectToClearSizeUndoList( 1, (void*)Via, (void*)Via, (void*)Via );
        EraseVia( Via );
        r_delete_entry( &PCB->Data->via_tree, (int)( &Via->BoundingBox ) );
        Via->Clearance = value;
        SetPinBoundingBox( Via );
        r_insert_entry( &PCB->Data->via_tree, (int)( &Via->BoundingBox ), 0 );
        ClearFromPolygon( &PCB->Data, 1, (void*)Via, (void*)Via );
        DrawVia( Via, 0 );
        Via->Element = 0;
        return (void*)Via;
      }
  }
  return 0;
}
void *ChangePinSize( ElementTypePtr Element, PinTypePtr Pin )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  BDimension value = Absolute;
  if ( value <= 0x989680 && !( ( Pin->Flags.f & 8 ) & 255 ) && value > 1999 && Pin->DrillingHole + 399 < value && Pin->Thickness != value )
  {
    AddObjectToSizeUndoList( 256, (void*)Element, (void*)Pin, (void*)Pin );
    AddObjectToMaskSizeUndoList( 256, (void*)Element, (void*)Pin, (void*)Pin );
    ErasePin( Pin );
    r_delete_entry( &PCB->Data->pin_tree, (int)( &Pin->BoundingBox ) );
    RestoreToPolygon( &PCB->Data, 256, (void*)Element, (void*)Pin );
    Pin->Thickness = value;
    Pin->Mask = ( Pin->Mask + value ) - Pin->Thickness;
    SetElementBoundingBox( &PCB->Data, Element, &PCB->Font );
    ClearFromPolygon( &PCB->Data, 256, (void*)Element, (void*)Pin );
    DrawPin( Pin, 0 );
    return (void*)Pin;
  }
}
void *ChangePinClearSize( ElementTypePtr Element, PinTypePtr Pin )
{
  int eax;
  int ebx;
  int esi;
  BDimension value = Absolute;
  value = ( Pin->Clearance + Delta < ( PCB->Bloat + 1 ) * 2 ? Pin->Clearance + Delta : ( PCB->Bloat + 1 ) * 2 ) <= 0x989680 ? 0x989680 : Pin->Clearance + Delta < ( PCB->Bloat + 1 ) * 2 ? Pin->Clearance + Delta : ( PCB->Bloat + 1 ) * 2;
  if ( Pin->Clearance != ( ( Pin->Clearance + Delta < ( PCB->Bloat + 1 ) * 2 ? Pin->Clearance + Delta : ( PCB->Bloat + 1 ) * 2 ) <= 0x989680 ? 10000000 : Pin->Clearance + Delta < ( PCB->Bloat + 1 ) * 2 ? Pin->Clearance + Delta : ( PCB->Bloat + 1 ) * 2 ) )
  {
    RestoreToPolygon( &PCB->Data, 256, (void*)Element, (void*)Pin );
    AddObjectToClearSizeUndoList( 256, (void*)Element, (void*)Pin, (void*)Pin );
    ErasePin( Pin );
    r_delete_entry( &PCB->Data->pin_tree, (int)( &Pin->BoundingBox ) );
    Pin->Clearance = value;
    SetElementBoundingBox( &PCB->Data, Element, &PCB->Font );
    ClearFromPolygon( &PCB->Data, 256, (void*)Element, (void*)Pin );
    DrawPin( Pin, 0 );
    return (void*)Pin;
  }
}
void *ChangePadSize( ElementTypePtr Element, PadTypePtr Pad )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  BDimension value = Absolute;
  if ( value + -100 <= 0x98961c && Pad->Thickness != value )
  {
    AddObjectToSizeUndoList( 512, (void*)Element, (void*)Pad, (void*)Pad );
    AddObjectToMaskSizeUndoList( 512, (void*)Element, (void*)Pad, (void*)Pad );
    RestoreToPolygon( &PCB->Data, 512, (void*)Element, (void*)Pad );
    ErasePad( Pad );
    r_delete_entry( &PCB->Data->pad_tree, (int)( &Pad->BoundingBox ) );
    Pad->Thickness = value;
    Pad->Mask = ( Pad->Mask + value ) - Pad->Thickness;
    SetElementBoundingBox( &PCB->Data, Element, &PCB->Font );
    ClearFromPolygon( &PCB->Data, 512, (void*)Element, (void*)Pad );
    DrawPad( Pad, 0 );
    return (void*)Pad;
  }
}
void *ChangePadClearSize( ElementTypePtr Element, PadTypePtr Pad )
{
  int eax;
  int ebx;
  int esi;
  BDimension value = Absolute;
  value = ( Pad->Clearance + Delta < ( PCB->Bloat + 1 ) * 2 ? Pad->Clearance + Delta : ( PCB->Bloat + 1 ) * 2 ) <= 0x989680 ? 0x989680 : Pad->Clearance + Delta < ( PCB->Bloat + 1 ) * 2 ? Pad->Clearance + Delta : ( PCB->Bloat + 1 ) * 2;
  if ( value + -100 <= 0x98961c && Pad->Clearance != value )
  {
    AddObjectToClearSizeUndoList( 512, (void*)Element, (void*)Pad, (void*)Pad );
    RestoreToPolygon( &PCB->Data, 512, (void*)Element, (void*)Pad );
    ErasePad( Pad );
    r_delete_entry( &PCB->Data->pad_tree, (int)( &Pad->BoundingBox ) );
    Pad->Clearance = value;
    SetElementBoundingBox( &PCB->Data, Element, &PCB->Font );
    ClearFromPolygon( &PCB->Data, 512, (void*)Element, (void*)Pad );
    DrawPad( Pad, 0 );
    return (void*)Pad;
  }
}
void *ChangeElement2ndSize( ElementTypePtr Element )
{
  int eax;
  int edx;
  int ebx;
  int edi;
  Boolean changed;
  BDimension value;
{
  Cardinal n;
  Cardinal sn = Element->PinN;
  PinTypePtr pin;
  if ( Element->PinN )
  {
    n = 0;
    changed = 0;
    while ( 1 )
    {
      if ( value + -400 <= 0x9894f0 && ( ( ( pin->Flags.f/*.1_1of4*/ & 8 ) & 255 ) || value < pin->Thickness + -399 ) && pin->DrillingHole != value )
      {
        AddObjectTo2ndSizeUndoList( 256, (void*)Element, (void*)pin, (void*)pin );
        ErasePin( pin );
        pin->DrillingHole = value;
        DrawPin( pin, 0 );
        if ( ( pin->Flags.f/*.1_1of4*/ & 8 ) & 255 )
        {
          RestoreToPolygon( &PCB->Data, 256, (void*)Element, (void*)pin );
          AddObjectToSizeUndoList( 256, (void*)Element, (void*)pin, (void*)pin );
          pin->Thickness = value;
          ClearFromPolygon( &PCB->Data, 256, (void*)Element, (void*)pin );
          changed = 1;
          sn = Element->PinN;
        }
        else
        {
          sn = *(int*)(ebp_36 + 224);
          changed = 1;
        }
      }
      if ( sn == 0 || sn <= ( sn + n + 1 ) - Element->PinN )
        break;
      else
      {
      }
    }
    return ebp_36;
  }
  return 0;
}
}
void *ChangePin2ndSize( ElementTypePtr Element, PinTypePtr Pin )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  BDimension value = Absolute;
  if ( value + -400 > 0x9894f0 || ( !( ( Pin->Flags.f & 8 ) & 255 ) && Pin->Thickness + -399 <= value ) || Pin->DrillingHole == value )
  {
  }
  AddObjectTo2ndSizeUndoList( 256, (void*)Element, (void*)Pin, (void*)Pin );
  ErasePin( Pin );
  Pin->DrillingHole = value;
  DrawPin( Pin, 0 );
  if ( ( Pin->Flags.f/*.1_1of4*/ & 8 ) & 255 )
  {
    RestoreToPolygon( &PCB->Data, 256, (void*)Element, (void*)Pin );
    AddObjectToSizeUndoList( 256, (void*)Element, (void*)Pin, (void*)Pin );
    Pin->Thickness = value;
    ClearFromPolygon( &PCB->Data, 256, (void*)Element, (void*)Pin );
    return (void*)Pin;
  }
  return (void*)Pin;
}
void *ChangeLineSize( LayerTypePtr Layer, LineTypePtr Line )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  BDimension value = Absolute;
  if ( value + -1 <= 0x98967f && Line->Thickness != value )
  {
    AddObjectToSizeUndoList( 4, (void*)Layer, (void*)Line, (void*)Line );
    EraseLine( Line );
    r_delete_entry( &Layer->line_tree, (int)( &Line->BoundingBox ) );
    RestoreToPolygon( &PCB->Data, 4, (void*)Layer, (void*)Line );
    Line->Thickness = value;
    SetLineBoundingBox( Line );
    r_insert_entry( &Layer->line_tree, (int)( &Line->BoundingBox ), 0 );
    ClearFromPolygon( &PCB->Data, 4, (void*)Layer, (void*)Line );
    DrawLine( Layer, Line, 0 );
    return (void*)Line;
  }
}
void *ChangeLineClearSize( LayerTypePtr Layer, LineTypePtr Line )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  BDimension value = Absolute;
  if ( ( Line->Flags.f & 8224 ) != 32 || Line->Clearance == ( ( value < ( PCB->Bloat + 1 ) * 2 ? value : ( PCB->Bloat + 1 ) * 2 ) <= 0x989680 ? 10000000 : value < ( PCB->Bloat + 1 ) * 2 ? value : ( PCB->Bloat + 1 ) * 2 ) )
  {
  }
  AddObjectToClearSizeUndoList( 4, (void*)Layer, (void*)Line, (void*)Line );
  RestoreToPolygon( &PCB->Data, 4, (void*)Layer, (void*)Line );
  EraseLine( Line );
  r_delete_entry( &Layer->line_tree, (int)( &Line->BoundingBox ) );
  Line->Clearance = value;
  if ( value == 0 )
  {
    Line->Flags.f &= -33;
    Line->Clearance = 1000;
  }
  SetLineBoundingBox( Line );
  r_insert_entry( &Layer->line_tree, (int)( &Line->BoundingBox ), 0 );
  ClearFromPolygon( &PCB->Data, 4, (void*)Layer, (void*)Line );
  DrawLine( Layer, Line, 0 );
  return (void*)Line;
}
void *ChangeArcSize( LayerTypePtr Layer, ArcTypePtr Arc )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  BDimension value = Absolute;
  if ( value + -1 <= 0x98967f && Arc->Thickness != value )
  {
    AddObjectToSizeUndoList( 16384, (void*)Layer, (void*)Arc, (void*)Arc );
    EraseArc( Arc );
    r_delete_entry( &Layer->arc_tree, (int)( &Arc->BoundingBox ) );
    RestoreToPolygon( &PCB->Data, 16384, (void*)Layer, (void*)Arc );
    Arc->Thickness = value;
    SetArcBoundingBox( Arc );
    r_insert_entry( &Layer->arc_tree, (int)( &Arc->BoundingBox ), 0 );
    ClearFromPolygon( &PCB->Data, 16384, (void*)Layer, (void*)Arc );
    DrawArc( Layer, Arc, 0 );
    return (void*)Arc;
  }
}
void *ChangeArcClearSize( LayerTypePtr Layer, ArcTypePtr Arc )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  BDimension value = Absolute;
  if ( ( Arc->Flags.f & 8224 ) != 32 || Arc->Clearance == ( ( value < ( PCB->Bloat + 1 ) * 2 ? value : ( PCB->Bloat + 1 ) * 2 ) <= 0x989680 ? 10000000 : value < ( PCB->Bloat + 1 ) * 2 ? value : ( PCB->Bloat + 1 ) * 2 ) )
  {
  }
  AddObjectToClearSizeUndoList( 16384, (void*)Layer, (void*)Arc, (void*)Arc );
  EraseArc( Arc );
  r_delete_entry( &Layer->arc_tree, (int)( &Arc->BoundingBox ) );
  RestoreToPolygon( &PCB->Data, 16384, (void*)Layer, (void*)Arc );
  Arc->Clearance = value;
  if ( value == 0 )
  {
    Arc->Flags.f &= -33;
    Arc->Clearance = 1000;
  }
  SetArcBoundingBox( Arc );
  r_insert_entry( &Layer->arc_tree, (int)( &Arc->BoundingBox ), 0 );
  ClearFromPolygon( &PCB->Data, 16384, (void*)Layer, (void*)Arc );
  DrawArc( Layer, Arc, 0 );
  return (void*)Arc;
}
Missing divisor:  0xb60b60b7(5)
Missing divisor:  0xb60b60b7(5)
void *ChangeTextSize( LayerTypePtr Layer, TextTypePtr Text )
{
  int eax;
  int ecx;
  int ebx;
  int esi;
  int edi;
  BDimension value;
  if ( value + -10 <= 9990 && Text->Scale != value )
  {
    AddObjectToSizeUndoList( 16, (void*)Layer, (void*)Text, (void*)Text );
    EraseText( Layer, Text );
    r_delete_entry( &Layer->text_tree, (int)( &Text->BoundingBox ) );
    RestoreToPolygon( &PCB->Data, 16, (void*)Layer, (void*)Text );
    Text->Scale = value;
    SetTextBoundingBox( &PCB->Font, Text );
    r_insert_entry( &Layer->text_tree, (int)( &Text->BoundingBox ), 0 );
    ClearFromPolygon( &PCB->Data, 16, (void*)Layer, (void*)Text );
    DrawText( Layer, Text, 0 );
    return (void*)Text;
  }
}
void *ChangeElementSize( ElementTypePtr Element )
{
  int eax;
  int ecx;
  int ebx;
  int esi;
  int edi;
  BDimension value;
  Boolean changed;
  if ( PCB->ElementOn )
    EraseElement( Element );
{
  Cardinal n;
  LineTypePtr line;
  changed = 0;
  n = Element->LineN + -1;
  if ( Element->LineN + -1 != -1 )
  {
    line = ( line * 88 ) + -88;
    n = n;
    do
    {
      if ( value + -1 <= 0x98967f && line->Thickness != value )
      {
        AddObjectToSizeUndoList( 8192, (void*)Element, (void*)line, (void*)Element );
        changed = 1;
        line->Thickness = value;
      }
      n += -1;
    }
    while ( n + -1 != -1 );
    Element = Element;
  }
{
  Cardinal n = Element->ArcN + -1;
  ArcTypePtr arc;
  if ( Element->ArcN + -1 != -1 )
  {
    arc = ( arc * 68 ) + -68;
    do
    {
      if ( value + -1 <= 0x98967f && arc->Thickness != value )
      {
        AddObjectToSizeUndoList( 32768, (void*)Element, (void*)arc, (void*)Element );
        changed = 1;
        arc->Thickness = value;
      }
      n += -1;
    }
    while ( n + -1 != -1 );
    Element = Element;
  }
  if ( PCB->ElementOn )
    DrawElement( Element, 0 );
  return 0;
}
}
}
Missing divisor:  0xb60b60b7(5)
Missing divisor:  0xb60b60b7(5)
void *ChangeElementNameSize( ElementTypePtr Element )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  int ebp_28;
  BDimension value;
  if ( value + -10 <= 9990 )
  {
    EraseElementName( Element );
  {
    do
    {
      Cardinal n;
      TextTypePtr text;
      n += -1;
      text = ebp_36 + ( n * 60 ) + 36;
      AddObjectToSizeUndoList( 1024, (void*)Element, Element->BoundingBox.X1 + 36, Element->BoundingBox.X1 + 36 );
      r_delete_entry( &PCB->Data->ViaN, n + 12 + 2 );
      *(int*)(ebp_28 + 192) = value;
      SetTextBoundingBox( &PCB->Font, text );
      r_insert_entry( &PCB->Data->ViaN, n + 12 + 2, text );
      ebp_28 += -60;
    }
    while ( n == -1 );
    DrawElementName( Element, 0 );
    return *ebp_56;
  }
  }
  else
  {
  }
}
void *ChangeViaName( PinTypePtr Via )
{
  char *old;
  old[0] = Via->Name;
  ErasePinName( Via );
  Via->Name = NewName;
  DrawPinName( Via, 0 );
  return (void*)old;
}
void *ChangePinName( ElementTypePtr Element, PinTypePtr Pin )
{
  char *old;
  old[0] = Pin->Name;
  ErasePinName( Pin );
  Pin->Name = NewName;
  DrawPinName( Pin, 0 );
  return (void*)old;
}
void *ChangePadName( ElementTypePtr Element, PadTypePtr Pad )
{
  char *old;
  old[0] = Pad->Name;
  ErasePadName( Pad );
  Pad->Name = NewName;
  DrawPadName( Pad, 0 );
  return (void*)old;
}
void *ChangeLineName( LayerTypePtr Layer, LineTypePtr Line )
{
  char *old;
  Line->Number = NewName;
  return &Line->Number;
}
void *ChangeElementName( ElementTypePtr Element )
{
  int eax;
  int ecx;
  char *old = &Element->Name->TextString;
  return 0;
}
void *ChangeTextName( LayerTypePtr Layer, TextTypePtr Text )
{
  int esi;
  int edi;
  char *old;
  old[0] = Text->TextString;
  return 0;
}
Boolean ChangeLayoutName( char *Name )
{
  int eax;
  PCB->Name = Name;
  hid_action( "PCBChanged" );
  return 1;
}
Boolean ChangeElementSide( ElementTypePtr Element, LocationType yoff )
{
  int esi;
  return 0;
}
Boolean ChangeLayerName( LayerTypePtr Layer, char *Name )
{
  int eax;
  hid_action( "LayersChanged" );
  return 1;
}
void *ChangeLineJoin( LayerTypePtr Layer, LineTypePtr Line )
{
  int esi;
  EraseLine( Line );
  AddObjectToClearPolyUndoList( 4, (void*)Layer, (void*)Line, (void*)Line, 0 );
  RestoreToPolygon( &PCB->Data, 4, (void*)Layer, (void*)Line );
  AddObjectToFlagUndoList( 4, (void*)Layer, (void*)Line, (void*)Line );
  Line->Flags.f ^= 32;
  AddObjectToClearPolyUndoList( 4, (void*)Layer, (void*)Line, (void*)Line, 1 );
  ClearFromPolygon( &PCB->Data, 4, (void*)Layer, (void*)Line );
  DrawLine( Layer, Line, 0 );
  return (void*)Line;
}
void *SetLineJoin( LayerTypePtr Layer, LineTypePtr Line )
{
  int edx;
  if ( ( Line->Flags.f & 8224 ) == 0 )
  {
  }
  return 0;
}
void *ClrLineJoin( LayerTypePtr Layer, LineTypePtr Line )
{
  int ecx;
  if ( ( Line->Flags.f & 8224 ) == 32 )
  {
  }
  return 0;
}
void *ChangeArcJoin( LayerTypePtr Layer, ArcTypePtr Arc )
{
  int esi;
  EraseArc( Arc );
  RestoreToPolygon( &PCB->Data, 16384, (void*)Layer, (void*)Arc );
  AddObjectToClearPolyUndoList( 16384, (void*)Layer, (void*)Arc, (void*)Arc, 0 );
  AddObjectToFlagUndoList( 16384, (void*)Layer, (void*)Arc, (void*)Arc );
  Arc->Flags.f ^= 32;
  ClearFromPolygon( &PCB->Data, 16384, (void*)Layer, (void*)Arc );
  AddObjectToClearPolyUndoList( 16384, (void*)Layer, (void*)Arc, (void*)Arc, 1 );
  DrawArc( Layer, Arc, 0 );
  return (void*)Arc;
}
void *SetArcJoin( LayerTypePtr Layer, ArcTypePtr Arc )
{
  int edx;
  if ( ( Arc->Flags.f & 8224 ) == 0 )
  {
  }
  return 0;
}
void *ClrArcJoin( LayerTypePtr Layer, ArcTypePtr Arc )
{
  int ecx;
  if ( ( Arc->Flags.f & 8224 ) == 32 )
  {
  }
  return 0;
}
void *ChangeTextJoin( LayerTypePtr Layer, TextTypePtr Text )
{
  int esi;
  EraseText( Layer, Text );
  AddObjectToClearPolyUndoList( 16, (void*)Layer, (void*)Text, (void*)Text, 0 );
  RestoreToPolygon( &PCB->Data, 16, (void*)Layer, (void*)Text );
  AddObjectToFlagUndoList( 4, (void*)Layer, (void*)Text, (void*)Text );
  Text->Flags.f ^= 32;
  AddObjectToClearPolyUndoList( 16, (void*)Layer, (void*)Text, (void*)Text, 1 );
  ClearFromPolygon( &PCB->Data, 16, (void*)Layer, (void*)Text );
  DrawText( Layer, Text, 0 );
  return (void*)Text;
}
void *SetTextJoin( LayerTypePtr Layer, TextTypePtr Text )
{
  int edx;
  if ( ( Text->Flags.f & 8224 ) == 0 )
  {
  }
  return 0;
}
void *ClrTextJoin( LayerTypePtr Layer, TextTypePtr Text )
{
  int ecx;
  if ( ( Text->Flags.f & 8224 ) == 32 )
  {
  }
  return 0;
}
void *ChangeElementSquare( ElementTypePtr Element )
{
  void *ans = 0;
  return 0;
}
void *SetElementSquare( ElementTypePtr Element )
{
  void *ans = 0;
  return 0;
}
void *ClrElementSquare( ElementTypePtr Element )
{
  void *ans = 0;
  return 0;
}
void *ChangeElementOctagon( ElementTypePtr Element )
{
  void *result;
  return 0;
}
void *SetElementOctagon( ElementTypePtr Element )
{
  void *result;
  return 0;
}
void *ClrElementOctagon( ElementTypePtr Element )
{
  void *result;
  return 0;
}
void *ChangePadSquare( ElementTypePtr Element, PadTypePtr Pad )
{
  return 0;
}
void *SetPadSquare( ElementTypePtr Element, PadTypePtr Pad )
{
  int edx;
  if ( ( Pad->Flags.f & 8448 ) == 0 )
  {
  }
  return 0;
}
void *ClrPadSquare( ElementTypePtr Element, PadTypePtr Pad )
{
  int ecx;
  if ( ( Pad->Flags.f & 8448 ) == 256 )
  {
  }
  return 0;
}
void *ChangePinSquare( ElementTypePtr Element, PinTypePtr Pin )
{
  return 0;
}
void *SetPinSquare( ElementTypePtr Element, PinTypePtr Pin )
{
  int edx;
  if ( ( Pin->Flags.f & 8448 ) == 0 )
  {
  }
  return 0;
}
void *ClrPinSquare( ElementTypePtr Element, PinTypePtr Pin )
{
  int ecx;
  if ( ( Pin->Flags.f & 8448 ) == 256 )
  {
  }
  return 0;
}
void *ChangeViaOctagon( PinTypePtr Via )
{
  return 0;
}
void *SetViaOctagon( PinTypePtr Via )
{
  if ( ( Via->Flags.f & 10240 ) == 0 )
  {
  }
  return 0;
}
void *ClrViaOctagon( PinTypePtr Via )
{
  if ( ( Via->Flags.f & 10240 ) == 2048 )
  {
  }
  return 0;
}
void *ChangePinOctagon( ElementTypePtr Element, PinTypePtr Pin )
{
  return 0;
}
void *SetPinOctagon( ElementTypePtr Element, PinTypePtr Pin )
{
  int edx;
  if ( ( Pin->Flags.f & 10240 ) == 0 )
  {
  }
  return 0;
}
void *ClrPinOctagon( ElementTypePtr Element, PinTypePtr Pin )
{
  int ecx;
  if ( ( Pin->Flags.f & 10240 ) == 2048 )
  {
  }
  return 0;
}
Boolean ChangeHole( PinTypePtr Via )
{
  EraseVia( Via );
  AddObjectToFlagUndoList( 1, (void*)Via, (void*)Via, (void*)Via );
  Via->Flags.f ^= 8;
  if ( ( (unsigned char)( Via->Flags.f ^ 8 ) & 8 ) & 255 )
  {
    RestoreToPolygon( &PCB->Data, 1, (void*)Via, (void*)Via );
    AddObjectToSizeUndoList( 1, (void*)Via, (void*)Via, (void*)Via );
    Via->Mask = Via->DrillingHole;
    Via->Thickness = Via->DrillingHole;
    ClearFromPolygon( &PCB->Data, 1, (void*)Via, (void*)Via );
  }
  else
  {
    AddObjectTo2ndSizeUndoList( 1, (void*)Via, (void*)Via, (void*)Via );
    Via->DrillingHole = Via->Thickness + -400;
  }
  DrawVia( Via, 0 );
  Draw( );
  return 1;
}
Boolean ChangePaste( PadTypePtr Pad )
{
  return 0;
}
void *ChangePolyClear( LayerTypePtr Layer, PolygonTypePtr Polygon )
{
  int esi;
  return 0;
}
// Lost vars at line 1588 through condition folding
Boolean ChangeSelectedElementSide( void )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  Boolean change;
  if ( PCB->PinOn == 0 || PCB->ElementOn == 0 || PCB->Data->ElementN + -1 == -1 )
  {
    *(int*)&change = 0;
  }
  *(int*)&change = 0;
  PCB->Data->ElementN = ( PCB->Data->ElementN * 300 ) + -300;
  while ( 1 )
  {
    element = element->net + esi;
    if ( ( ( element->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 )
    {
      n += -1;
      if ( n + -1 != -1 )
        continue;
    }
    else
    {
      n += -1;
      change |= ChangeElementSide( element, 0 );
      if ( n != -1 )
        continue;
    }
    return change;
  }
}
Boolean ChangeSelectedThermals( int types, int therm_style )
{
  Boolean change;
  Delta = therm_style;
  if ( change & 255 )
  {
    Draw( );
    IncrementUndoSerialNumber( );
    return change;
  }
  return SelectedOperation( &ChangeThermalFunctions, 0, types );
}
Boolean ChangeSelectedSize( int types, LocationType Difference, Boolean fixIt )
{
  Boolean change;
  Difference = 0;
  Absolute = fixIt != 0 ? Difference : Difference;
  Delta = Difference;
  if ( change & 255 )
  {
    Draw( );
    IncrementUndoSerialNumber( );
    return change;
  }
  return SelectedOperation( &ChangeSizeFunctions, 0, types );
}
Boolean ChangeSelectedClearSize( int types, LocationType Difference, Boolean fixIt )
{
  int ecx;
  Boolean change;
  Difference = 0;
  Absolute = fixIt != 0 ? Difference : Difference;
  Delta = Difference;
  if ( change & 255 )
  {
    Draw( );
    IncrementUndoSerialNumber( );
    return change;
  }
  return SelectedOperation( &ChangeClearSizeFunctions, 0, types );
}
Boolean ChangeSelected2ndSize( int types, LocationType Difference, Boolean fixIt )
{
  Boolean change;
  Difference = 0;
  Absolute = fixIt != 0 ? Difference : Difference;
  Delta = Difference;
  if ( change & 255 )
  {
    Draw( );
    IncrementUndoSerialNumber( );
    return change;
  }
  return SelectedOperation( &Change2ndSizeFunctions, 0, types );
}
Boolean ChangeSelectedJoin( int types )
{
  Boolean change;
  if ( change & 255 )
  {
    Draw( );
    IncrementUndoSerialNumber( );
    return change;
  }
  return SelectedOperation( &ChangeJoinFunctions, 0, types );
}
Boolean SetSelectedJoin( int types )
{
  Boolean change;
  if ( change & 255 )
  {
    Draw( );
    IncrementUndoSerialNumber( );
    return change;
  }
  return SelectedOperation( &SetJoinFunctions, 0, types );
}
Boolean ClrSelectedJoin( int types )
{
  Boolean change;
  if ( change & 255 )
  {
    Draw( );
    IncrementUndoSerialNumber( );
    return change;
  }
  return SelectedOperation( &ClrJoinFunctions, 0, types );
}
Boolean ChangeSelectedSquare( int types )
{
  Boolean change;
  if ( change & 255 )
  {
    Draw( );
    IncrementUndoSerialNumber( );
    return change;
  }
  return SelectedOperation( &ChangeSquareFunctions, 0, types );
}
Boolean SetSelectedSquare( int types )
{
  Boolean change;
  if ( change & 255 )
  {
    Draw( );
    IncrementUndoSerialNumber( );
    return change;
  }
  return SelectedOperation( &SetSquareFunctions, 0, types );
}
Boolean ClrSelectedSquare( int types )
{
  Boolean change;
  if ( change & 255 )
  {
    Draw( );
    IncrementUndoSerialNumber( );
    return change;
  }
  return SelectedOperation( &ClrSquareFunctions, 0, types );
}
Boolean ChangeSelectedOctagon( int types )
{
  Boolean change;
  if ( change & 255 )
  {
    Draw( );
    IncrementUndoSerialNumber( );
    return change;
  }
  return SelectedOperation( &ChangeOctagonFunctions, 0, types );
}
Boolean SetSelectedOctagon( int types )
{
  Boolean change;
  if ( change & 255 )
  {
    Draw( );
    IncrementUndoSerialNumber( );
    return change;
  }
  return SelectedOperation( &SetOctagonFunctions, 0, types );
}
Boolean ClrSelectedOctagon( int types )
{
  Boolean change;
  if ( change & 255 )
  {
    Draw( );
    IncrementUndoSerialNumber( );
    return change;
  }
  return SelectedOperation( &ClrOctagonFunctions, 0, types );
}
// Lost vars at line 1862 through condition folding
Boolean ChangeSelectedHole( void )
{
  Boolean change;
  if ( PCB->ViaOn == 0 || PCB->Data->ViaN == 0 )
  {
    *(int*)&change = 0;
  }
  n = 0;
  *(int*)&change = 0;
  while ( 1 )
  {
    via = PCB->Data->Via + ( n * 76 );
    if ( ( ( via->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 )
    {
      sn = PCB->Data->ViaN;
      if ( PCB->Data->ViaN == 0 )
      {
        return change;
      }
    }
    else
    {
      change |= sn;
      sn = PCB->Data->ViaN;
      if ( PCB->Data->ViaN == 0 )
        continue;
    }
    n = ( sn + n + 1 ) - sn;
    if ( sn <= ( sn + n + 1 ) - sn )
      continue;
    else
    {
      sn = PCB->Data->ViaN;
    }
  }
}
Boolean ChangeSelectedPaste( void )
{
  int eax;
  int edx;
  int ebp_36;
  Boolean change;
{
  Cardinal n;
  ElementTypePtr element;
  change = 0;
  n = PCB->Data->ElementN + -1;
  if ( PCB->Data->ElementN + -1 != -1 )
  {
    ebp_36 = ( PCB->Data->ElementN * 300 ) + -300;
    while ( 1 )
    {
      Cardinal n = 0;
      Cardinal sn;
      PadTypePtr pad;
      element += PCB->Data->Element / 300;
      sn = element->PadN;
      element->PadN = element->PadN;
      for ( ; sn && n < sn;  )
      {
        pad = element->Pad + ( n * 104 );
        if ( ( ( pad->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 )
          continue;
        else
        {
          sn = element->PadN;
          change |= ChangePaste( pad );
        }
        n += sn == sn;
      }
      n += -1;
      ebp_36 += -300;
      if ( n == -1 )
      {
        if ( change == 0 )
          break;
        Draw( );
        IncrementUndoSerialNumber( );
        break;
      }
      else
      {
      }
    }
  }
  return change;
}
}
Boolean ChangeObjectSize( int Type, void *Ptr1, void *Ptr2, void *Ptr3, LocationType Difference, Boolean fixIt )
{
  Boolean change;
  Difference = 0;
  Absolute = fixIt != 0 ? Difference : Difference;
  Delta = Difference;
  change = ObjectOperation( &ChangeSizeFunctions, Type, Ptr1, Ptr2, Ptr3 ) != 0;
  if ( ObjectOperation( &ChangeSizeFunctions, Type, Ptr1, Ptr2, Ptr3 ) )
  {
    Draw( );
    IncrementUndoSerialNumber( );
  }
  return change;
}
Boolean ChangeObjectClearSize( int Type, void *Ptr1, void *Ptr2, void *Ptr3, LocationType Difference, Boolean fixIt )
{
  int ecx;
  int ebx;
  int esi;
  int edi;
  Boolean change;
  Difference = 0;
  Absolute = fixIt != 0 ? Difference : Difference;
  Delta = Difference;
  change = ObjectOperation( &ChangeClearSizeFunctions, Type, Ptr1, Ptr2, Ptr3 ) != 0;
  if ( change & 255 )
  {
    Draw( );
    IncrementUndoSerialNumber( );
  }
  return change;
}
Boolean ChangeObjectThermal( int Type, void *Ptr1, void *Ptr2, void *Ptr3, int therm_type )
{
  Boolean change;
  Absolute = therm_type;
  Delta = therm_type;
  change = ObjectOperation( &ChangeThermalFunctions, Type, Ptr1, Ptr2, Ptr3 ) != 0;
  if ( ObjectOperation( &ChangeThermalFunctions, Type, Ptr1, Ptr2, Ptr3 ) )
  {
    Draw( );
    IncrementUndoSerialNumber( );
  }
  return change;
}
Boolean ChangeObject2ndSize( int Type, void *Ptr1, void *Ptr2, void *Ptr3, LocationType Difference, Boolean fixIt, Boolean incundo )
{
  int eax;
  Boolean change;
  Difference = 0;
  Absolute = fixIt != 0 ? Difference : Difference;
  Delta = Difference;
  change = change != 0;
  if ( change )
  {
    Draw( );
    if ( incundo & 255 )
    {
      IncrementUndoSerialNumber( );
      return change;
    }
  }
  return ebp_12;
}
Boolean ChangeObjectMaskSize( int Type, void *Ptr1, void *Ptr2, void *Ptr3, LocationType Difference, Boolean fixIt )
{
  Boolean change;
  Difference = 0;
  Absolute = fixIt != 0 ? Difference : Difference;
  Delta = Difference;
  change = ObjectOperation( &ChangeMaskSizeFunctions, Type, Ptr1, Ptr2, Ptr3 ) != 0;
  if ( ObjectOperation( &ChangeMaskSizeFunctions, Type, Ptr1, Ptr2, Ptr3 ) )
  {
    Draw( );
    IncrementUndoSerialNumber( );
  }
  return change;
}
void *ChangeObjectName( int Type, void *Ptr1, void *Ptr2, void *Ptr3, char *Name )
{
  void *result;
  NewName = Name;
  result = ObjectOperation( &ChangeNameFunctions, Type, Ptr1, Ptr2, Ptr3 );
  Draw( );
  return result;
}
Boolean ChangeObjectJoin( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  if ( ObjectOperation( &ChangeJoinFunctions, Type, Ptr1, Ptr2, Ptr3 ) )
  {
    Draw( );
    IncrementUndoSerialNumber( );
  }
  return 1;
}
Boolean SetObjectJoin( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  if ( ObjectOperation( &SetJoinFunctions, Type, Ptr1, Ptr2, Ptr3 ) )
  {
    Draw( );
    IncrementUndoSerialNumber( );
  }
  return 1;
}
Boolean ClrObjectJoin( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  if ( ObjectOperation( &ClrJoinFunctions, Type, Ptr1, Ptr2, Ptr3 ) )
  {
    Draw( );
    IncrementUndoSerialNumber( );
  }
  return 1;
}
Boolean ChangeObjectSquare( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  if ( ObjectOperation( &ChangeSquareFunctions, Type, Ptr1, Ptr2, Ptr3 ) )
  {
    Draw( );
    IncrementUndoSerialNumber( );
  }
  return 1;
}
Boolean SetObjectSquare( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  if ( ObjectOperation( &SetSquareFunctions, Type, Ptr1, Ptr2, Ptr3 ) )
  {
    Draw( );
    IncrementUndoSerialNumber( );
  }
  return 1;
}
Boolean ClrObjectSquare( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  if ( ObjectOperation( &ClrSquareFunctions, Type, Ptr1, Ptr2, Ptr3 ) )
  {
    Draw( );
    IncrementUndoSerialNumber( );
  }
  return 1;
}
Boolean ChangeObjectOctagon( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  if ( ObjectOperation( &ChangeOctagonFunctions, Type, Ptr1, Ptr2, Ptr3 ) )
  {
    Draw( );
    IncrementUndoSerialNumber( );
  }
  return 1;
}
Boolean SetObjectOctagon( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  if ( ObjectOperation( &SetOctagonFunctions, Type, Ptr1, Ptr2, Ptr3 ) )
  {
    Draw( );
    IncrementUndoSerialNumber( );
  }
  return 1;
}
Boolean ClrObjectOctagon( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  if ( ObjectOperation( &ClrOctagonFunctions, Type, Ptr1, Ptr2, Ptr3 ) )
  {
    Draw( );
    IncrementUndoSerialNumber( );
  }
  return 1;
}
void *QueryInputAndChangeObjectName( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  int eax;
  int ecx;
  int edx;
  char *name;
  char msg[513];
  if ( Type != 1024 )
  {
    switch ( Type )
    {
    case 2:
      break;
    case 4:
      gui->prompt_for( "Linename:", ((char*)Ptr2)[84] == 0 ? ((char*)Ptr2)[84] : "" );
      break;
    case 1:
      gui->prompt_for( "Vianame:", ((char*)Ptr2)[60] == 0 ? ((char*)Ptr2)[60] : "" );
      break;
    case 256:
      __sprintf_chk( msg, 1, 513, "%s Pin Name:", ((char*)Ptr2)[64] == 0 ? &((char*)Ptr2)[64] : "" );
      ebp( msg[0], ((char*)Ptr2)[88] == 0 ? ((char*)Ptr2)[88] : "", gui->prompt_for );
      break;
    case 512:
      __sprintf_chk( msg, 1, 513, "%s Pad Name:", ((char*)Ptr2)[92] == 0 ? &((char*)Ptr2)[92] : "" );
      ebp( msg[0], ((char*)Ptr2)[88] == 0 ? ((char*)Ptr2)[88] : "", gui->prompt_for );
      break;
    case 16:
      gui->prompt_for( "Enter text:", ((char*)Ptr2)[52] == 0 ? ((char*)Ptr2)[52] : "" );
      break;
    default:
      Ptr3 = 0;
      if ( 0 ^ 0 )
      {
        __stack_chk_fail( );
      }
      return Ptr3;
      break;
    }
    if ( name == 0 )
      continue;
    else
    {
      /* phantom */ char *old;
      if ( ChangeObjectName( Type, Ptr1, Ptr2, Ptr3, name ) != -1 )
      {
        AddObjectToChangeNameUndoList( Type, Ptr1, Ptr2, Ptr3, (char*)ChangeObjectName( Type, Ptr1, Ptr2, Ptr3, name ) );
        IncrementUndoSerialNumber( );
      }
      Draw( );
    }
  }
  else
  {
    Ptr3 = Ptr1;
    Ptr2 = Ptr1;
  }
  if ( ((char*)Ptr2)[88] == 0 )
    goto B22;
  else
  {
  }
B22:;
  ebx( "Elementname:", ((char*)Ptr2)[88], PCB->Flags.f & 64, Ptr1 );
  Type = 2;
}
void ChangePCBSize( BDimension Width, BDimension Height )
{
  int ebx;
  int esi;
  int edi;
  PCB->MaxWidth = Width;
  PCB->MaxHeight = Height;
  if ( Settings.Mode == 5 )
    SetCrosshairRange( Buffers[ Settings.BufferNumber ].X - Buffers[ Settings.BufferNumber ].BoundingBox.X1, Buffers[ Settings.BufferNumber ].Y - Buffers[ Settings.BufferNumber ].BoundingBox.Y1, (unsigned char)( Width < 0 ) ? Width + ( Buffers[ Settings.BufferNumber ].X - Buffers[ Settings.BufferNumber ].BoundingBox.X2 ) : 0, (unsigned char)( Height < 0 ) ? Height + ( Buffers[ Settings.BufferNumber ].Y - Buffers[ Settings.BufferNumber ].BoundingBox.Y2 ) : 0 );
    Width = "PCBChanged";
  else
    SetCrosshairRange( 0, 0, Width, Height );
    Width = "PCBChanged";
}
void *ChangePadMaskSize( ElementTypePtr Element, PadTypePtr Pad )
{
  int eax;
  int edx;
  int ebx;
  int edi;
  BDimension value = Absolute;
  if ( value )
  {
    value = (unsigned char)( ( ( value >> 31 ) & 1 ) ^ 1 ) ? 0 : value;
    if ( Pad->Mask == ( (unsigned char)( ( ( value >> 31 ) & 1 ) ^ 1 ) ? 0 : value ) )
      goto B4;
    else
    {
      AddObjectToMaskSizeUndoList( 512, (void*)Element, (void*)Pad, (void*)Pad );
      ErasePad( Pad );
      r_delete_entry( &PCB->Data->pad_tree, (int)( &Pad->BoundingBox ) );
      Pad->Mask = value;
      SetElementBoundingBox( &PCB->Data, Element, &PCB->Font );
      DrawPad( Pad, 0 );
      return (void*)Pad;
    }
  }
  else
  {
    value = Pad->Mask + Delta;
    value = (unsigned char)( ( ( ( Pad->Mask + Delta ) >> 31 ) & 1 ) ^ 1 ) ? 0 : Pad->Mask + Delta;
    if ( Pad->Mask == ( (unsigned char)( ( ( ( Pad->Mask + Delta ) >> 31 ) & 1 ) ^ 1 ) ? 0 : Pad->Mask + Delta ) )
      goto B4;
  }
B4:;
  if ( !value && Pad->Mask != Pad->Thickness )
    continue;
  else
  {
    return (void*)Pad;
  }
}
void *ChangePinMaskSize( ElementTypePtr Element, PinTypePtr Pin )
{
  int eax;
  int edx;
  int ebx;
  int edi;
  BDimension value = Absolute;
  if ( value )
  {
    value = (unsigned char)( ( ( value >> 31 ) & 1 ) ^ 1 ) ? 0 : value;
    if ( Pin->Mask == ( (unsigned char)( ( ( value >> 31 ) & 1 ) ^ 1 ) ? 0 : value ) )
      goto B4;
    else
    {
      AddObjectToMaskSizeUndoList( 256, (void*)Element, (void*)Pin, (void*)Pin );
      ErasePin( Pin );
      r_delete_entry( &PCB->Data->pin_tree, (int)( &Pin->BoundingBox ) );
      Pin->Mask = value;
      SetElementBoundingBox( &PCB->Data, Element, &PCB->Font );
      DrawPin( Pin, 0 );
      return (void*)Pin;
    }
  }
  else
  {
    value = Pin->Mask + Delta;
    value = (unsigned char)( ( ( ( Pin->Mask + Delta ) >> 31 ) & 1 ) ^ 1 ) ? 0 : Pin->Mask + Delta;
    if ( Pin->Mask == ( (unsigned char)( ( ( ( Pin->Mask + Delta ) >> 31 ) & 1 ) ^ 1 ) ? 0 : Pin->Mask + Delta ) )
      goto B4;
  }
B4:;
  if ( !value && Pin->Mask != Pin->Thickness )
    continue;
  else
  {
    return (void*)Pin;
  }
}
void *ChangeViaMaskSize( PinTypePtr Via )
{
  int eax;
  int edx;
  BDimension value = Absolute;
  value = (unsigned char)( ( ( Absolute >> 31 ) & 1 ) ^ 1 ) ? 0 : Absolute;
  if ( edx != ( (unsigned char)( ( ( Absolute >> 31 ) & 1 ) ^ 1 ) ? 0 : Absolute ) )
  {
    AddObjectToMaskSizeUndoList( 1, (void*)Via, (void*)Via, (void*)Via );
    EraseVia( Via );
    r_delete_entry( &PCB->Data->via_tree, (int)( &Via->BoundingBox ) );
    Via->Mask = value;
    SetPinBoundingBox( Via );
    r_insert_entry( &PCB->Data->via_tree, (int)( &Via->BoundingBox ), 0 );
    DrawVia( Via, 0 );
  }
  return (void*)Via;
}
#if 0
#endif
