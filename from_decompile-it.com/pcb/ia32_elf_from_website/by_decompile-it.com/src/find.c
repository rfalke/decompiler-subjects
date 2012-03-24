#include "find.c.h"
static DrcViolationType *T/*.475*/ = 0;
static char drc_dialog_message[289];
static float fBloat;
static LocationType Bloat;
static int TheFlag = 4;
static int OldFlag = 4;
static void *thing_ptr1;
static void *thing_ptr2;
static void *thing_ptr3;
static int thing_type;
static Boolean User;
static Boolean drc;
static Boolean IsBad;
static Cardinal drcerr_count;
static Cardinal TotalP;
static Cardinal TotalV;
static Cardinal NumberOfPads[2];
static ListType LineList[16];
static ListType PolygonList[16];
static ListType ArcList[16];
static ListType PadList[2];
static ListType RatList;
static ListType PVList;
void pcb_drc_violation_free( DrcViolationType *violation )
{
  free( violation );
  free( violation->explanation );
  free( violation );
  return;
}
void append_drc_dialog_message( char *fmt, ... )
{
  int eax;
  int edx;
  size_t len = drc_dialog_message[0];
  /* phantom */ size_t remained;
  /* phantom */ va_list ap;
  do
  {
    len += 4;
  }
  while ( ( ( len + 0xfefefeff ) & ~len & 0x80808080 ) == 0 );
  __vsnprintf_chk( &drc_dialog_message[ ( ( ( ( len + 0xfefefeff ) & ~len & 0x80808080 & 32896 ) == 0 ? len : len + 2 ) + -3 ) - ( 0 & 1 ) - drc_dialog_message[0] ], 288 - ( ( ( ( ( len + 0xfefefeff ) & ~len & 0x80808080 & 32896 ) == 0 ? len : len + 2 ) + -3 ) - ( 0 & 1 ) - drc_dialog_message[0] ), 1, -1, fmt, ebp_12 );
  return;
}
void append_drc_violation( DrcViolationType *violation )
{
  int edx;
  double fp4;
  double fp5;
  if ( gui->drc_gui )
  {
    ;
  }
  append_drc_dialog_message( "%s\n", "%s\n", violation );
  append_drc_dialog_message( "near (%.*f, %.*f)\n", Settings.grid_units_mm == 0 ? 2 : 4, 0.000000000000, Settings.grid_units_mm == 0 ? 2 : 4, 0.000000000000 );
  LocateError( ebp_12, ebp_16 );
  if ( thing_type == 8 || thing_type == 16384 || thing_type == 4 )
  {
    ChangeGroupVisibility( GetLayerNumber( &PCB->Data, &thing_ptr1[0] ), 1, 1 );
  }
  CenterDisplay( ebp_12, ebp_16, 0 );
  if ( gui->drc_gui == 0 || gui->drc_gui->log_drc_violations )
  {
    Message( "WARNING!  Design Rule error - %s\n", violation );
    Message( "near location (%.*f, %.*f)\n", Settings.grid_units_mm == 0 ? 2 : 4, 0.000000000000, Settings.grid_units_mm == 0 ? 2 : 4, 0.000000000000 );
  }
  return;
}
int throw_drc_dialog( void )
{
  int r;
  if ( gui->drc_gui )
  {
    ;
  }
  append_drc_dialog_message( "Press Next to continue DRC checking" );
  gui->confirm_dialog( drc_dialog_message[0], "Cancel", "Next" );
  drc_dialog_message[0] = 0;
  r = gui;
  if ( gui->drc_gui )
  {
    ;
  }
  return r;
}
Boolean LinePadIntersect( LineTypePtr Line, PadTypePtr Pad )
{
}
Boolean ArcPadIntersect( ArcTypePtr Arc, PadTypePtr Pad )
{
  Arc = &Pad->BoundingBox.X1;
  Pad = &Arc->BoundingBox.X1;
}
Boolean ADD_PV_TO_LIST( PinTypePtr Pin )
{
  if ( User )
  {
    if ( Pin->Element == 0 )
    {
    }
    AddObjectToFlagUndoList( 1, (void*)Pin, (void*)Pin, (void*)Pin );
  }
  Pin->Flags.f |= TheFlag;
  PVList.Data[ PVList.Number ] = (void*)Pin;
  PVList.Number++;
  if ( drc && ( ( Pin->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 )
  {
    thing_ptr2 = (void*)Pin;
    thing_ptr3 = (void*)Pin;
    thing_type = 256;
    thing_ptr1 = &Pin->Element;
    if ( Pin->Element == 0 )
    {
      thing_ptr1 = (void*)Pin;
      thing_type = 1;
    }
  }
  else
  {
  }
  return 0;
}
Boolean ADD_PAD_TO_LIST( Cardinal L, PadTypePtr Pad )
{
  int eax;
  int edx;
  if ( User )
  {
    AddObjectToFlagUndoList( 512, &Pad->Element, (void*)Pad, (void*)Pad );
  }
  Pad->Flags.f |= TheFlag;
  PadList[ ebp_12 ].Data[ PadList[ ebp_12 ].Number ] = (void*)Pad;
  PadList[ ebp_12 ].Number++;
  if ( drc == 0 || ( ( Pad->Flags.f/*.1_1of4*/ & 64 ) & 255 ) )
  {
    return 0;
  }
  thing_type = 512;
  thing_ptr2 = (void*)Pad;
  thing_ptr3 = (void*)Pad;
  thing_ptr1 = &Pad->Element;
  return 1;
}
Boolean ADD_LINE_TO_LIST( Cardinal L, LineTypePtr Ptr )
{
  int eax;
  int edx;
  if ( User )
  {
    AddObjectToFlagUndoList( 4, &PCB->Data->Layer[ L ].Name, (void*)Ptr, (void*)Ptr );
  }
  Ptr->Flags.f |= TheFlag;
  LineList[ L ].Data[ LineList[ L ].Number ] = (void*)Ptr;
  LineList[ L ].Number++;
  if ( drc == 0 || ( ( Ptr->Flags.f/*.1_1of4*/ & 64 ) & 255 ) )
  {
    return 0;
  }
  thing_ptr2 = (void*)Ptr;
  thing_ptr3 = (void*)Ptr;
  thing_type = 4;
  thing_ptr1 = &PCB->Data->Layer[ L ].Name;
  return 1;
}
Boolean ADD_ARC_TO_LIST( Cardinal L, ArcTypePtr Ptr )
{
  int eax;
  int edx;
  if ( User )
  {
    AddObjectToFlagUndoList( 16384, &PCB->Data->Layer[ L ].Name, (void*)Ptr, (void*)Ptr );
  }
  Ptr->Flags.f |= TheFlag;
  ArcList[ L ].Data[ ArcList[ L ].Number ] = (void*)Ptr;
  ArcList[ L ].Number++;
  if ( drc == 0 || ( ( Ptr->Flags.f/*.1_1of4*/ & 64 ) & 255 ) )
  {
    return 0;
  }
  thing_ptr2 = (void*)Ptr;
  thing_ptr3 = (void*)Ptr;
  thing_type = 16384;
  thing_ptr1 = &PCB->Data->Layer[ L ].Name;
  return 1;
}
Boolean ADD_RAT_TO_LIST( RatTypePtr Ptr )
{
  int eax;
  if ( User )
  {
    AddObjectToFlagUndoList( 32, (void*)Ptr, (void*)Ptr, (void*)Ptr );
  }
  RatList.Data[ RatList.Number ] = (void*)Ptr;
  Ptr->Flags.f |= TheFlag;
  RatList.Number++;
  if ( drc == 0 || ( ( Ptr->Flags.f | TheFlag ) & 64 ) )
  {
    return 0;
  }
  thing_ptr1 = (void*)Ptr;
  thing_ptr2 = (void*)Ptr;
  thing_ptr3 = (void*)Ptr;
  thing_type = 32;
  return 1;
}
Boolean ADD_POLYGON_TO_LIST( Cardinal L, PolygonTypePtr Ptr )
{
  int eax;
  int edx;
  if ( User )
  {
    AddObjectToFlagUndoList( 8, &PCB->Data->Layer[ L ].Name, (void*)Ptr, (void*)Ptr );
  }
  Ptr->Flags.f |= TheFlag;
  PolygonList[ L ].Data[ PolygonList[ L ].Number ] = (void*)Ptr;
  PolygonList[ L ].Number++;
  if ( drc == 0 || ( ( Ptr->Flags.f/*.1_1of4*/ & 64 ) & 255 ) )
  {
    return 0;
  }
  thing_ptr2 = (void*)Ptr;
  thing_ptr3 = (void*)Ptr;
  thing_type = 8;
  thing_ptr1 = &PCB->Data->Layer[ L ].Name;
  return 1;
}
Boolean PinLineIntersect( PinTypePtr PV, LineTypePtr Line )
{
  int ecx;
  int edx;
  double fp7;
  if ( ( PV->Flags.f/*.2_2of4*/ & 1 ) & 255 )
  {
    return IsLineInRectangle( ( 0 - ( ( PV->Thickness + 1 ) / 2 ) ) + *(int*)(PV + 52), ( 0 - ( ( PV->Thickness + 1 ) / 2 ) ) + *(int*)(PV + 56), ( ( PV->Thickness + 1 ) / 2 ) + PV->X, ( ( PV->Thickness + 1 ) / 2 ) + PV->Y, Line );
  }
  return IsPointInPad( PV->X, PV->Y, 0, &Line->BoundingBox.X1 );
}
Boolean BoxBoxIntersection( BoxTypePtr b1, BoxTypePtr b2 )
{
  if ( b1->X1 <= b2->X2 && b2->X1 <= b1->X2 && b1->Y1 <= b2->Y2 )
  {
    b1 = b2->Y1 <= b1->Y2;
    return b2->Y1 <= b1->Y2;
  }
  b1 = 0;
  return 0;
}
void FreeLayoutLookupMemory( void )
{
  Cardinal i;
  if ( PCB->Data->LayerN )
  {
    i = 0;
    do
    {
      SaveFree( *(int*)(LineList[0].Data + 0) );
      i++;
      *(int*)(LineList[0].Data + 0) = 0;
      SaveFree( *(int*)(ArcList[0].Data + 0) );
      *(int*)(ArcList[0].Data + 0) = 0;
      SaveFree( *(int*)(PolygonList[0].Data + 0) );
      *(int*)(PolygonList[0].Data + 0) = 0;
    }
    while ( PCB->Data->LayerN <= i );
  }
  SaveFree( &PVList.Data );
  PVList.Data = 0;
  SaveFree( &RatList.Data );
  RatList.Data = 0;
  return;
}
void FreeComponentLookupMemory( void )
{
  SaveFree( &PadList[0].Data );
  PadList[0].Data = 0;
  SaveFree( &PadList[1].Data );
  PadList[1].Data = 0;
  return;
}
void InitComponentLookup( void )
{
  int eax;
  int ecx;
  /* phantom */ Cardinal i;
{
  Cardinal n;
  /* phantom */ ElementTypePtr element;
  NumberOfPads[0] = 0;
  NumberOfPads[1] = 0;
  n = PCB->Data->ElementN + -1;
  if ( n != -1 )
  {
  {
    do
    {
      Cardinal n;
      Cardinal sn = PCB->Data->Element->BoundingBox.X1;
      /* phantom */ PadTypePtr pad;
      if ( PCB->Data->Element->BoundingBox.X1 )
      {
        n = 0;
        do
        {
          n++;
          eax += 104;
        }
        while ( n + 1 < sn );
      }
      n += -1;
    }
    while ( n != -1 );
    NumberOfPads[0] = 0 + 1;
    NumberOfPads[1] = 0;
  }
  }
  PadList->Location = 0;
  PadList->DrawLocation = 0;
  PadList->Number = 0;
  PadList[0].Data = MyCalloc( NumberOfPads[0], 4, "InitComponentLookup()" );
  PadList->Size = NumberOfPads[0];
  PadList[1].Location = 0;
  PadList[1].DrawLocation = 0;
  PadList[1].Number = 0;
  PadList[1].Data = MyCalloc( NumberOfPads[1], 4, "InitComponentLookup()" );
  PadList[1].Size = NumberOfPads[1];
  return;
}
}
void InitLayoutLookup( void )
{
  Cardinal i;
  if ( PCB->Data->LayerN )
  {
    i = 0;
    do
    {
      if ( PCB->Data->Layer->LineN )
      {
        if ( PCB->Data->Layer->ArcN )
        {
          if ( PCB->Data->Layer->PolygonN )
          {
          }
          else
          {
            i++;
            *(int*)(LineList->Location + 0) = 0;
            *(int*)(LineList->DrawLocation + 0) = 0;
            *(int*)(LineList->Number + 0) = 0;
            *(int*)(ArcList->Location + 0) = 0;
            *(int*)(ArcList->DrawLocation + 0) = 0;
            *(int*)(ArcList->Number + 0) = 0;
            *(int*)(PolygonList->Location + 0) = 0;
            *(int*)(PolygonList->DrawLocation + 0) = 0;
            *(int*)(PolygonList->Number + 0) = 0;
          }
        }
      }
      else
    {
      /* phantom */ LayerTypePtr layer;
      if ( PCB->Data->Layer->ArcN )
      {
      }
    }
      if ( PCB->Data->Layer->PolygonN )
      {
      }
    }
    while ( i + 1 < PCB->Data->LayerN );
  }
  if ( *(int*)(edi + ( i * 92 ) + ( i * 92 ) + 48) )
    TotalP = *(int*)(*(int*)(edi + ( i * 92 ) + 48) + 4);
  else
    TotalP = 0;
  if ( PCB->Data->via_tree )
    TotalV = PCB->Data->via_tree->size;
  else
    TotalV = 0;
  PVList.Location = 0;
  PVList.DrawLocation = 0;
  PVList.Number = 0;
  PVList.Data = &eax;
  PVList.Size = TotalV + TotalP;
  RatList.Data = MyCalloc( PCB->Data->RatN, 4, "InitLayoutLookup()" );
  RatList.Location = 0;
  RatList.DrawLocation = 0;
  RatList.Number = 0;
  RatList.Size = PCB->Data->RatN;
  return;
}
int LOCtoPVline_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  /* phantom */ LineTypePtr line;
  /* phantom */ struct pv_info *i;
  if ( !( b[1].Y1 & TheFlag ) && ( PinLineIntersect( cl + 4, &b[0].X1 ) & 255 ) && ( ADD_LINE_TO_LIST( cl, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 80 + 80, 1 );
  }
  return 0;
}
int LOCtoPVarc_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  double fp6;
  double fp7;
  /* phantom */ ArcTypePtr arc;
  /* phantom */ struct pv_info *i;
  if ( !( b[1].Y1 & TheFlag ) && ( ( ( IsPointOnArc( (float)( (double)( cl[14] ) ), (float)( (double)( cl[15] ) ), (float)( 0.000000000000 ), &b[0].X1 ) & 255 ) != 0 ) & 255 ) && ( ADD_ARC_TO_LIST( cl, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 80 + 80, 1 );
  }
  return 0;
}
int LOCtoPVpad_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  /* phantom */ PadTypePtr pad;
  /* phantom */ struct pv_info *i;
  if ( !( b[1].Y1 & TheFlag ) && ( IsPointInPad( cl[14], cl[15], (unsigned char)( cl[10] / 2 < 0 ) ? Bloat + ( cl[10] / 2 ) : b[1].Y1 & TheFlag, &b[0].X1 ) & 255 ) && ( ADD_PAD_TO_LIST( ( ( b[1].Y1 >> 7 ) ^ 1 ) & 1, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 80 + 80, 1 );
  }
  return 0;
}
int LOCtoPVrat_callback( BoxType *b, void *cl )
{
  int eax;
  int esi;
  /* phantom */ RatTypePtr rat;
  /* phantom */ struct pv_info *i;
  if ( !( b[1].Y1 & TheFlag ) && ( IsPointOnLineEnd( cl[14], cl[15], &b[0].X1 ) & 255 ) && ( ADD_RAT_TO_LIST( &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 80 + 80, 1 );
  }
  return 0;
}
int LOCtoPVpoly_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int dh;
  int ebx;
  double fp7;
  /* phantom */ PolygonTypePtr polygon;
  /* phantom */ struct pv_info *i;
  if ( ( b[1].Y1 & TheFlag ) == 0 && ( ( *(char*)(cl + ( cl >> 1 ) + 28) & ( 15 << ( ( cl & 1 ) << 2 ) ) ) || ( b[1].Y1 & 16 ) == 0 || cl[11] == 0 ) )
  {
    float wide;
    if ( ( ( dh & 1 ) & 255 ) == 0 )
    {
      if ( ( dh & 8 ) & 255 )
      {
      {
        POLYAREA *oct;
        if ( ( isects( OctagonPoly( cl[14], cl[15], cl[10] / 2 ), &b[0].X1, 1 ) & 255 ) == 0 )
        {
          return 0;
        }
      }
      }
      else
      {
        if ( ( IsPointInPolygon( cl[14], cl[15], (int)( ( (double)( cl[10] ) * 0.500000000000 ) + fBloat <= 0.000000000000 ? ( (double)( cl[10] ) * 0.500000000000 ) + fBloat : 0.000000000000 ), &b[0].X1 ) & 255 ) == 0 )
        {
          return 0;
        }
      }
    }
    else
    {
    {
      /* phantom */ LocationType x1;
      /* phantom */ LocationType x2;
      /* phantom */ LocationType y1;
      /* phantom */ LocationType y2;
      if ( ( IsRectangleInPolygon( cl[14] + ( 0 - ( ( cl[10] + Bloat + 1 ) / 2 ) ), cl[15] + ( 0 - ( ( cl[10] + Bloat + 1 ) / 2 ) ), cl[14] + ( ( cl[10] + Bloat + 1 ) / 2 ), cl[15] + ( ( cl[10] + Bloat + 1 ) / 2 ), &b[0].X1 ) & 255 ) == 0 )
      {
        return 0;
      }
    }
    }
    if ( ADD_POLYGON_TO_LIST( cl, &b[0].X1 ) & 255 )
    {
      __longjmp_chk( cl + 80 + 80, 1 );
    }
  }
  return 0;
}
Boolean LookupLOConnectionsToPVList( Boolean AndRats )
{
  int eax;
  Cardinal layer;
  struct pv_info info;
  if ( PVList.Location < PVList.Number )
  {
    do
    {
      memcpy( &info.pv.BoundingBox.X1, PVList.Data[ PVList.Location ], 76 );
      if ( Bloat > 0 )
      {
        info.pv.BoundingBox.X1 -= Bloat;
        info.pv.BoundingBox.X2 += Bloat;
        info.pv.BoundingBox.Y1 -= Bloat;
        info.pv.BoundingBox.Y2 += Bloat;
      }
      if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
      {
        r_search( &PCB->Data->pad_tree, &info.pv.BoundingBox, 0, &LOCtoPVpad_callback, &info.layer );
        if ( PCB->Data->LayerN )
        {
          layer = 0;
          do
          {
            info.layer = layer;
            if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
            {
              r_search( &PCB->Data->Layer[ layer ].line_tree, &info.pv.BoundingBox, 0, &LOCtoPVline_callback, &info.layer );
              if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
              {
                r_search( &PCB->Data->Layer[ layer ].arc_tree, &info.pv.BoundingBox, 0, &LOCtoPVarc_callback, &info.layer );
                if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
                {
                  r_search( &PCB->Data->Layer[ layer ].polygon_tree, &info.pv.BoundingBox, 0, &LOCtoPVpoly_callback, &info.layer );
                  layer++;
                }
              }
            }
          }
          while ( PCB->Data->LayerN <= layer );
        }
        if ( AndRats )
        {
          if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
            r_search( &PCB->Data->rat_tree, &info.pv.BoundingBox, 0, &LOCtoPVrat_callback, &info.layer );
        }
        PVList.Location++;
      }
      if ( 0 ^ 0 )
      {
        __stack_chk_fail( );
      }
      break;
    }
    while ( PVList.Number <= PVList.Location + 1 );
  }
}
int pv_pv_callback( BoxType *b, void *cl )
{
  int eax;
  int ah;
  int esi;
  int edi;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
#error unstructured control flow
}
Boolean LookupPVConnectionsToPVList( void )
{
  int eax;
  int edx;
  Cardinal save_place;
  struct pv_info info;
  if ( PVList.Location < PVList.Number )
  {
    save_place = PVList.Location;
    do
    {
      memcpy( &info.pv.BoundingBox.X1, PVList.Data[ PVList.Location + 1 ], 76 );
      if ( Bloat > 0 )
      {
        info.pv.BoundingBox.X1 -= Bloat;
        info.pv.BoundingBox.X2 += Bloat;
        info.pv.BoundingBox.Y1 -= Bloat;
        info.pv.BoundingBox.Y2 += Bloat;
      }
      if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
      {
        r_search( &PCB->Data->via_tree, &info.pv.BoundingBox, 0, &pv_pv_callback, &info.layer );
        if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
        {
          r_search( &PCB->Data->pin_tree, &info.pv.BoundingBox, 0, &pv_pv_callback, &info.layer );
          save_place = PVList.Location + 1;
          PVList.Location++;
        }
      }
      if ( 0 ^ 0 )
      {
        __stack_chk_fail( );
      }
      break;
    }
    while ( PVList.Number <= PVList.Location + 1 );
  }
  PVList.Location = PVList.Location;
}
int pv_line_callback( BoxType *b, void *cl )
{
  int eax;
  int ah;
  int esi;
#error unstructured control flow
}
int pv_pad_callback( BoxType *b, void *cl )
{
  int eax;
  int ah;
  int esi;
  /* phantom */ PinTypePtr pv;
  /* phantom */ struct lo_info *i;
  if ( ( b[1].Y1 & TheFlag ) || ( IsPointInPad( b[3].Y1, b[3].X2, (unsigned char)( b[2].Y1 / 2 < 0 ) ? Bloat + ( b[2].Y1 / 2 ) : b[1].Y1 & TheFlag, cl + 92 ) & 255 ) == 0 )
  {
    return 0;
  }
  if ( ( (unsigned char)( b[1].Y1 ) & 8 ) & 255 )
  {
    b[1].Y1 = b[1].Y1;
    Settings.RatWarn = 1;
    Message( "WARNING: Hole too close to pad.\n" );
  }
  if ( ADD_PV_TO_LIST( &b[0].X1 ) & 255 )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
int pv_arc_callback( BoxType *b, void *cl )
{
  int eax;
  int ah;
  int esi;
  double fp6;
  double fp7;
  /* phantom */ PinTypePtr pv;
  /* phantom */ struct lo_info *i;
  if ( ( b[1].Y1 & TheFlag ) == 0 )
  {
    if ( ( ah & 1 ) & 255 )
    {
    }
    else
    {
    }
    if ( ( ( ( IsPointOnArc( (float)( (double)( b[3].Y1 ) ), (float)( (double)( b[3].X2 ) ), (float)( 0.000000000000 ), cl + 196 ) & 255 ) != 0 ) & 255 ) == 0 )
    {
      return 0;
    }
    if ( ( (unsigned char)( b[1].Y1 ) & 8 ) & 255 )
    {
      b[1].Y1 = IsArcInRectangle( b[3].Y1 - ( (unsigned char)( ( b[2].Y1 + 1 ) / 2 < 0 ) ? Bloat + ( ( b[2].Y1 + 1 ) / 2 ) : b[1].Y1 & TheFlag ), b[3].X2 - ( (unsigned char)( ( b[2].Y1 + 1 ) / 2 < 0 ) ? Bloat + ( ( b[2].Y1 + 1 ) / 2 ) : b[1].Y1 & TheFlag ), b[3].Y1 + ( (unsigned char)( ( b[2].Y1 + 1 ) / 2 < 0 ) ? Bloat + ( ( b[2].Y1 + 1 ) / 2 ) : b[1].Y1 & TheFlag ), b[3].X2 + ( (unsigned char)( ( b[2].Y1 + 1 ) / 2 < 0 ) ? Bloat + ( ( b[2].Y1 + 1 ) / 2 ) : b[1].Y1 & TheFlag ), cl + 196 );
      Settings.RatWarn = 1;
      Message( "WARNING: Hole touches arc.\n" );
    }
    if ( ADD_PV_TO_LIST( &b[0].X1 ) & 255 )
    {
      __longjmp_chk( cl + 416 + 416, 1 );
    }
  }
  return 0;
}
int pv_poly_callback( BoxType *b, void *cl )
{
  int eax;
  int esi;
  /* phantom */ PinTypePtr pv;
  /* phantom */ struct lo_info *i;
  if ( ( b[1].Y1 & TheFlag ) == 0 && ( ( *(char*)(b + ( cl >> 1 ) + 24) & ( 15 << ( ( cl & 1 ) << 2 ) ) ) || ( ( cl[71] & 16 ) & 255 ) == 0 || b[2].X2 == 0 ) )
  {
    if ( ( ah & 1 ) & 255 )
    {
      /* phantom */ LocationType x1;
      /* phantom */ LocationType x2;
      /* phantom */ LocationType y1;
      /* phantom */ LocationType y2;
      if ( ( IsRectangleInPolygon( b[3].Y1 + ( 0 - ( ( b[2].Y1 + Bloat + 1 ) / 2 ) ), b[3].X2 + ( 0 - ( ( b[2].Y1 + Bloat + 1 ) / 2 ) ), b[3].Y1 + ( ( b[2].Y1 + Bloat + 1 ) / 2 ), b[3].X2 + ( ( b[2].Y1 + Bloat + 1 ) / 2 ), cl + 264 ) & 255 ) == 0 )
      {
        return 0;
      }
    }
    else
    if ( ( ah & 8 ) & 255 )
    {
      POLYAREA *oct;
      if ( ( isects( OctagonPoly( b[3].Y1, b[3].X2, b[2].Y1 / 2 ), cl + 264, 1 ) & 255 ) == 0 )
      {
        return 0;
      }
    }
    else
    {
      if ( ( IsPointInPolygon( b[3].Y1, b[3].X2, (int)( ( (double)( b[2].Y1 ) * 0.500000000000 ) + fBloat ), "12 # (unsigned short)( ( ( fpround & 3 ) << 10 ) | 895 )" ) & 255 ) == 0 )
      {
        return 0;
      }
    }
    if ( ADD_PV_TO_LIST( &b[0].X1 ) & 255 )
    {
      __longjmp_chk( cl + 416 + 416, 1 );
    }
  }
  return 0;
}
int pv_rat_callback( BoxType *b, void *cl )
{
  int eax;
  /* phantom */ PinTypePtr pv;
  /* phantom */ struct lo_info *i;
  if ( !( b[1].Y1 & TheFlag ) && ( IsPointOnLineEnd( b[3].Y1, b[3].X2, &((int*)cl) ) & 255 ) )
  {
    ADD_PV_TO_LIST( &b[0].X1 );
    return 0;
  }
  return 0;
}
Boolean LookupPVConnectionsToLOList( Boolean AndRats )
{
  int eax;
  int ecx;
  int edx;
  int ebp_628;
  int ebp_620;
  Cardinal layer;
  struct lo_info info;
  if ( PCB->Data->LayerN )
  {
    ebp_620 = 0;
    layer = 0;
    do
    {
      if ( TotalP + TotalV == 0 )
      {
      }
      else
      {
        if ( *(int*)(LineList->Location + ebp_620) < *(int*)(LineList->Number + ebp_620) )
        {
          do
          {
            memcpy( &info.line.BoundingBox.X1, *(int*)(*(int*)(LineList[0].Data + ebp_620) + ( ( *(int*)(LineList->Location + ebp_620) + 1 ) << 2 )), 88 );
            if ( Bloat > 0 )
            {
              info.line.BoundingBox.X1 -= Bloat;
              info.line.BoundingBox.X2 += Bloat;
              info.line.BoundingBox.Y1 -= Bloat;
              info.line.BoundingBox.Y2 += Bloat;
            }
            if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
            {
              r_search( &PCB->Data->via_tree, &info.line.BoundingBox, 0, &pv_line_callback, &info.layer );
              if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
              {
                r_search( &PCB->Data->pin_tree, &info.line.BoundingBox, 0, &pv_line_callback, &info.layer );
              }
              else
              {
                if ( 0 ^ 0 )
                {
                  __stack_chk_fail( );
                }
                break;
              }
            }
          }
          while ( *(int*)(LineList->Number + ebp_620) <= *(int*)(LineList->Location + ebp_620) + 1 );
        }
        if ( *(int*)(ArcList->Location + ebp_620) < *(int*)(ArcList->Number + ebp_620) )
        {
          do
          {
            memcpy( &info.arc.BoundingBox.X1, *(int*)(*(int*)(ArcList[0].Data + ebp_620) + ( ( *(int*)(ArcList->Location + ebp_620) + 1 ) << 2 )), 68 );
            if ( Bloat > 0 )
            {
              info.arc.BoundingBox.X1 -= Bloat;
              info.arc.BoundingBox.X2 += Bloat;
              info.arc.BoundingBox.Y1 -= Bloat;
              info.arc.BoundingBox.Y2 += Bloat;
            }
            if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
            {
              r_search( &PCB->Data->via_tree, &info.arc.BoundingBox, 0, &pv_arc_callback, &info.layer );
              if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
              {
                r_search( &PCB->Data->pin_tree, &info.arc.BoundingBox, 0, &pv_arc_callback, &info.layer );
              }
            }
          }
          while ( *(int*)(ArcList->Number + ebp_620) <= *(int*)(ArcList->Location + ebp_620) + 1 );
        }
        info.layer = layer;
        if ( *(int*)(PolygonList->Location + ebp_620) < *(int*)(PolygonList->Number + ebp_620) )
        {
          do
          {
            info.polygon.BoundingBox.X1 = *(int*)(*(int*)(*(int*)(PolygonList[0].Data + ebp_620) + ( ( *(int*)(PolygonList->Location + ebp_620) + 1 ) << 2 )));
            info.polygon.BoundingBox.Y1 = *(int*)(*(int*)(*(int*)(PolygonList[0].Data + ebp_620) + ( ( *(int*)(PolygonList->Location + ebp_620) + 1 ) << 2 )) + 4);
            info.polygon.BoundingBox.X2 = *(int*)(*(int*)(*(int*)(PolygonList[0].Data + ebp_620) + ( ( *(int*)(PolygonList->Location + ebp_620) + 1 ) << 2 )) + 8);
            info.polygon.BoundingBox.Y2 = *(int*)(*(int*)(*(int*)(PolygonList[0].Data + ebp_620) + ( ( *(int*)(PolygonList->Location + ebp_620) + 1 ) << 2 )) + 12);
            info.polygon.ID = *(int*)(*(int*)(*(int*)(PolygonList[0].Data + ebp_620) + ( ( *(int*)(PolygonList->Location + ebp_620) + 1 ) << 2 )) + 16);
            info.polygon.Flags.f = *(int*)(*(int*)(*(int*)(PolygonList[0].Data + ebp_620) + ( ( *(int*)(PolygonList->Location + ebp_620) + 1 ) << 2 )) + 20);
            info.polygon.Flags.t[0] = *(int*)(*(int*)(*(int*)(PolygonList[0].Data + ebp_620) + ( ( *(int*)(PolygonList->Location + ebp_620) + 1 ) << 2 )) + 24);
            info.polygon.Flags.t[4] = *(int*)(*(int*)(*(int*)(PolygonList[0].Data + ebp_620) + ( ( *(int*)(PolygonList->Location + ebp_620) + 1 ) << 2 )) + 28);
            info.polygon.net = *(int*)(*(int*)(*(int*)(PolygonList[0].Data + ebp_620) + ( ( *(int*)(PolygonList->Location + ebp_620) + 1 ) << 2 )) + 32);
            info.polygon.PointN = *(int*)(*(int*)(*(int*)(PolygonList[0].Data + ebp_620) + ( ( *(int*)(PolygonList->Location + ebp_620) + 1 ) << 2 )) + 36);
            info.polygon.PointMax = *(int*)(*(int*)(*(int*)(PolygonList[0].Data + ebp_620) + ( ( *(int*)(PolygonList->Location + ebp_620) + 1 ) << 2 )) + 40);
            info.polygon.Clipped = *(int*)(*(int*)(*(int*)(PolygonList[0].Data + ebp_620) + ( ( *(int*)(PolygonList->Location + ebp_620) + 1 ) << 2 )) + 44);
            info.polygon.NoHoles = *(int*)(*(int*)(*(int*)(PolygonList[0].Data + ebp_620) + ( ( *(int*)(PolygonList->Location + ebp_620) + 1 ) << 2 )) + 48);
            info.polygon.NoHolesValid = *(int*)(*(int*)(*(int*)(PolygonList[0].Data + ebp_620) + ( ( *(int*)(PolygonList->Location + ebp_620) + 1 ) << 2 )) + 52);
            info.polygon.Points = *(int*)(*(int*)(*(int*)(PolygonList[0].Data + ebp_620) + ( ( *(int*)(PolygonList->Location + ebp_620) + 1 ) << 2 )) + 56);
            if ( Bloat > 0 )
            {
              info.polygon.BoundingBox.X1 -= Bloat;
              info.polygon.BoundingBox.X2 += Bloat;
              info.polygon.BoundingBox.Y1 -= Bloat;
              info.polygon.BoundingBox.Y2 += Bloat;
            }
            if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
            {
              r_search( &PCB->Data->via_tree, &info.polygon.BoundingBox, 0, &pv_poly_callback, &info.layer );
              if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
              {
                r_search( &PCB->Data->pin_tree, &info.polygon.BoundingBox, 0, &pv_poly_callback, &info.layer );
              }
            }
          }
          while ( *(int*)(PolygonList->Location + ebp_620) + 1 < *(int*)(PolygonList->Number + ebp_620) );
        }
      }
      layer++;
      ebp_620 += 20;
    }
    while ( layer < PCB->Data->LayerN );
  }
  else
  {
  }
  ebp_628 = 0;
  do
  {
    if ( TotalP + TotalV == 0 )
    {
    }
    else
    if ( *(int*)(PadList->Location + ebp_628) < *(int*)(PadList->Number + ebp_628) )
    {
      do
      {
        memcpy( &info.pad.BoundingBox.X1, *(int*)(*(int*)(PadList[0].Data + ebp_628) + ( ( *(int*)(PadList->Location + ebp_628) + 1 ) << 2 )), 104 );
        if ( Bloat > 0 )
        {
          info.pad.BoundingBox.X1 -= Bloat;
          info.pad.BoundingBox.X2 += Bloat;
          info.pad.BoundingBox.Y1 -= Bloat;
          info.pad.BoundingBox.Y2 += Bloat;
        }
        if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
        {
          r_search( &PCB->Data->via_tree, &info.pad.BoundingBox, 0, &pv_pad_callback, &info.layer );
          if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
          {
            r_search( &PCB->Data->pin_tree, &info.pad.BoundingBox, 0, &pv_pad_callback, &info.layer );
          }
        }
      }
      while ( *(int*)(PadList->Number + ebp_628) <= *(int*)(PadList->Location + ebp_628) + 1 );
    }
    ebp_628 += 20;
  }
  while ( ebp_628 != 40 );
  if ( TotalV + TotalP == 0 )
    RatList.Location = RatList.Number;
  if ( AndRats == 0 || RatList.Number <= RatList.Location )
    goto B69;
  else
  {
    do
    {
      memcpy( &info.rat.BoundingBox.X1, RatList.Data[ RatList.Location ], 92 );
      r_search( &PCB->Data->via_tree, &info.rat.Clearance, 0, &info.rat.Clearance, info.rat.Point1.Y + -1 );
      r_search( &info.rat.Point1.ID, 0, &info.rat.Point1.ID, info.rat.Point2.Y + -1, &info.rat.Point2.X );
      r_search( &PCB->Data->pin_tree, &info.rat.Clearance, 0, &info.rat.Clearance, info.rat.Point1.Y + -1 );
      r_search( &PCB->Data->pin_tree, &info.rat.Point1.ID, &info.rat.Point1.ID, info.rat.Point2.Y + -1, &info.rat.Point2.X );
      RatList.Location++;
    }
    while ( RatList.Number <= RatList.Location + 1 );
  }
B69:;
}
int pv_touch_callback( BoxType *b, void *cl )
{
  /* phantom */ PinTypePtr pin;
  /* phantom */ struct lo_info *i;
  if ( !( b[1].Y1 & TheFlag ) && ( PinLineIntersect( &b[0].X1, cl + 4 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
Boolean PVTouchesLine( LineTypePtr line )
{
  struct lo_info info;
  line = 0;
  memcpy( &info.line.BoundingBox.X1, *(int*)(0), 0 );
  if ( Bloat > 0 )
  {
    info.line.BoundingBox.X1 -= Bloat;
    info.line.BoundingBox.X2 += Bloat;
    info.line.BoundingBox.Y1 -= Bloat;
    info.line.BoundingBox.Y2 += Bloat;
  }
  if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
  {
    r_search( &PCB->Data->via_tree, &info.line.BoundingBox, 0, &pv_touch_callback, &info.layer );
    if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
    {
      r_search( &PCB->Data->pin_tree, &info.line.BoundingBox, 0, &pv_touch_callback, &info.layer );
      if ( line ^ 0 )
      {
        __stack_chk_fail( );
      }
      return 1;
    }
  }
}
void form_slanted_rectangle( PointType *p, LineTypePtr l )
{
  int ecx;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  int dX, dY = l->Point2.Y - l->Point1.Y;
  int w = l->Thickness;
  double dwx, dwy;
  if ( l->Point2.Y == l->Point1.Y )
  {
  }
  else
  {
    dX -= l->Point1.X;
    if ( l->Point1.X == dX )
    {
      dwy = (double)( w / 2 );
    }
    else
    {
      /* phantom */ double r;
    }
  }
  p = (int)( (double)( w ) / ( sqrt( ( (double)( dX ) * (double)( dX ) ) * 0.000000000000 ) * 0.000000000000 ) );
  p->Y = (int)( (double)( l->Point1.Y ) - ( (double)( w ) / ( sqrt( ( (double)( dX ) * (double)( dX ) ) * 0.000000000000 ) * 0.000000000000 ) ) );
  p[1].X = (int)( (double)( l->Point1.X ) );
  p[1].Y = (int)( (double)( l->Point1.Y ) );
  p[2].X = (int)( (double)( l->Point2.X ) );
  p[2].Y = (int)( (double)( l->Point2.Y ) );
  p[3].X = (int)( (double)( l->Point2.X ) );
  p[3].Y = (int)( (double)( l->Point2.Y ) );
  return;
}
Boolean LineLineIntersect( LineTypePtr Line1, LineTypePtr Line2 )
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
  float dx, dy, dx1, dy1, s, r;
  if ( ( Line1->Flags.f/*.2_2of4*/ & 1 ) & 255 )
  {
    PointType p[4];
    form_slanted_rectangle( p, Line1 );
    return IsLineInQuadrangle( p, Line2 );
  }
  if ( Line2->Flags.f & 256 )
  {
    PointType p[4];
    form_slanted_rectangle( p, Line2 );
    return IsLineInQuadrangle( p, Line1 );
  }
  r = ( (double)( Line1->Point1.Y - Line2->Point1.Y ) * (double)( Line1->Point2.X - Line1->Point1.X ) ) - ( (double)( Line1->Point1.X - Line2->Point1.X ) * (double)( Line1->Point1.X - Line2->Point1.X ) );
  if ( ( (double)( Line2->Point2.Y - Line2->Point1.Y ) * (double)( Line1->Point2.X - Line1->Point1.X ) ) - ( (double)( Line2->Point2.X - Line2->Point1.X ) * (double)( Line1->Point2.Y - Line1->Point1.Y ) ) == 0.000000000000 )
  {
    if ( ( (double)( Line2->Point2.Y - Line2->Point1.Y ) * (double)( Line1->Point2.X - Line1->Point1.X ) ) - ( (double)( Line2->Point2.X - Line2->Point1.X ) * (double)( Line1->Point2.Y - Line1->Point1.Y ) ) == 0.000000000000 )
    {
    {
      float distance;
      if ( s != (double)( Line1->Point2.X - Line1->Point1.X ) )
        dy = s;
      else
      if ( !0 )
      {
        dy = s = dy;
        if ( dy != (double)( Line1->Point2.X - Line1->Point1.X ) )
        {
          dy = dx = dy;
        }
        else
        if ( !0 )
        {
          IsPointInPad( Line1->Point1.X, Line1->Point1.Y, (unsigned char)( *(int*)(Line1 + 36) / 2 < 0 ) ? Bloat + ( Line1->Thickness / 2 ) : Line2->Flags.f & 256, &Line2->BoundingBox.X1 );
          return eax;
        }
        dy = dx = dy;
      }
      else
        dy = s;
      if ( ( dy * dy ) / ( ( dx * dx ) + ( dy * dy ) ) <= ( ( (double)( Line2->Thickness + Line1->Thickness ) * 0.500000000000 ) + fBloat <= 0.000000000000 ? ( (double)( Line2->Thickness + Line1->Thickness ) * 0.500000000000 ) + fBloat : 0.000000000000 ) * ( ( (double)( Line2->Thickness + Line1->Thickness ) * 0.500000000000 ) + fBloat <= 0.000000000000 ? ( (double)( Line2->Thickness + Line1->Thickness ) * 0.500000000000 ) + fBloat : 0.000000000000 ) )
      {
        if ( ( IsPointInPad( Line2->Point1.X, Line2->Point1.Y, (unsigned char)( Line2->Thickness / 2 < 0 ) ? Bloat + ( Line2->Thickness / 2 ) : 0, &Line1->BoundingBox.X1 ) & 255 ) == 0 && ( IsPointInPad( Line2->Point2.X, Line2->Point2.Y, (unsigned char)( Line2->Thickness / 2 < 0 ) ? Bloat + ( Line2->Thickness / 2 ) : 0, &Line1->BoundingBox.X1 ) & 255 ) == 0 )
        {
          if ( ( IsPointInPad( Line1->Point1.X, Line1->Point1.Y, (unsigned char)( Line1->Thickness / 2 < 0 ) ? Bloat + ( Line1->Thickness / 2 ) : 0, &Line2->BoundingBox.X1 ) & 255 ) == 0 )
          {
            return eax;
          }
          return eax;
        }
        else
        {
          return 1;
        }
      }
      else
      {
        return eax;
      }
    }
    }
    else
    {
      dy = s;
      s = ( (double)( Line2->Point2.Y - Line2->Point1.Y ) * (double)( Line1->Point2.X - Line1->Point1.X ) ) - ( (double)( Line2->Point2.X - Line2->Point1.X ) * (double)( Line1->Point2.Y - Line1->Point1.Y ) );
      dx = 0.000000000000;
    }
  }
  else
  {
    dy = s;
    s = ( (double)( Line2->Point2.Y - Line2->Point1.Y ) * (double)( Line1->Point2.X - Line1->Point1.X ) ) - ( (double)( Line2->Point2.X - Line2->Point1.X ) * (double)( Line1->Point2.Y - Line1->Point1.Y ) );
    dx = 0.000000000000;
  }
  if ( ( ( s * dy ) - ( r * (float)( (double)( Line2->Point2.Y - Line2->Point1.Y ) ) ) ) / (double)( Line2->Point2.X - Line2->Point1.X ) <= r )
  {
    if ( 1.000000000000 <= 1.000000000000 )
    {
      dx = dy;
      dy = s;
      if ( dy <= r )
      {
        if ( dy <= dy )
        {
          return 1;
        }
      }
      else
      {
      }
      if ( dy < 0.000000000000 )
      {
        IsPointInPad( Line2->Point1.X, Line2->Point1.Y, (int)( ( (double)( Line2->Thickness ) * 0.500000000000 ) + fBloat ), &Line1->BoundingBox.X1 );
        return eax;
      }
      else
      {
        IsPointInPad( Line2->Point2.X, Line2->Point2.Y, (int)( ( (double)( Line2->Thickness ) * 0.500000000000 ) + fBloat ), &Line1->BoundingBox.X1 );
        return eax;
      }
    }
    else
    {
    }
  }
  else
  {
  }
  if ( dy <= 0.000000000000 )
  {
    dx = 0.000000000000;
    if ( 0.000000000000 <= 0.000000000000 )
    {
      if ( dy < dx )
      {
        IsPointInPad( Line1->Point1.X, Line1->Point1.Y, (int)( ( (double)( Line1->Thickness ) * 0.500000000000 ) + fBloat ), &Line2->BoundingBox.X1 );
        return eax;
      }
      else
      {
        IsPointInPad( Line1->Point2.X, Line1->Point2.Y, (int)( ( (double)( Line1->Thickness ) * 0.500000000000 ) + fBloat ), &Line2->BoundingBox.X1 );
        return eax;
      }
    }
    else
    {
    }
  }
  else
    dx = 0.000000000000;
  if ( ( IsPointInPad( Line1->Point1.X, Line1->Point1.Y, (int)( ( (double)( Line1->Thickness ) * 0.500000000000 ) + fBloat ), "12 # (unsigned short)( ( ( fpround & 3 ) << 10 ) | 895 )" ) & 255 ) == 0 && ( IsPointInPad( Line1->Point2.X, Line1->Point2.Y, (int)( ( (double)( Line1->Thickness ) * 0.500000000000 ) + fBloat ), "12 # (unsigned short)( ( ( fpround & 3 ) << 10 ) | 895 )" ) & 255 ) == 0 && ( IsPointInPad( Line2->Point1.X, Line2->Point1.Y, (int)( ( (double)( Line2->Thickness ) * 0.500000000000 ) + fBloat ), "12 # (unsigned short)( ( ( fpround & 3 ) << 10 ) | 895 )" ) & 255 ) == 0 )
  {
    IsPointInPad( Line2->Point2.X, Line2->Point2.Y, (int)( ( (double)( Line2->Thickness ) * 0.500000000000 ) + fBloat ), "12 # (unsigned short)( ( ( fpround & 3 ) << 10 ) | 895 )" );
    return eax;
  }
  return 1;
}
Boolean LineArcIntersect( LineTypePtr Line, ArcTypePtr Arc )
{
  int eax;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  float dx = (double)( Line->Point2.X - Line->Point1.X ), dy, dx1 = (double)( Line->Point1.X - Arc->X ), dy1 = (double)( Line->Point1.Y - Arc->Y ), l = ( dx * dx ) + ( (double)( Line->Point2.Y - Line->Point1.Y ) * (double)( Line->Point2.Y - Line->Point1.Y ) ), d, r, r2 = 0.500000000000, Radius;
  BoxTypePtr box;
  if ( ( "huge", 0 ) )
  {
    r2 = 0.000000000000;
    r = 0.000000000000;
    dy = r + ( r2 * (double)( Line->Thickness ) );
    r = r;
    if ( ( IsPointOnArc( (float)( (double)( Line->Point1.X ) ), (float)( (double)( Line->Point1.Y ) ), (float)( r2 ), &Line->Point1.X ) & 255 ) == 0 )
    {
      dy = 0.000000000000;
      r2 = ( (double)( Line->Thickness ) * 0.500000000000 ) + fBloat;
      r = r;
      if ( ( IsPointOnArc( (float)( (double)( Line->Point2.X ) ), (float)( (double)( Line->Point2.Y ) ), (float)( r2 ), Arc ) & 255 ) == 0 )
      {
        r2 = 0.000000000000;
        if ( l == 0.000000000000 )
        {
        }
        else
        {
          if ( r == sqrt( r ) )
          {
            if ( r != sqrt( r ) )
              r2 = 0.000000000000;
            else
              r = 0.000000000000;
              if ( ( r + -( dx * dx1 ) ) / l <= 0.000000000000 )
              {
                if ( 0.000000000000 < 0.000000000000 )
                {
                }
                else
                {
                  r = r2;
                  r2 = r2;
                  if ( ( IsPointOnArc( (float)( (double)( Line->Point1.X ) + ( dy * dx ) ), (float)( (double)( Line->Point1.Y ) + ( sqrtf( (float)( (double)( Line->Point2.Y - Line->Point1.Y ) ) ) * dy ) ), (float)( ( (double)( Line->Thickness ) * 0.500000000000 ) + fBloat ), Arc ) & 255 ) == 0 )
                  {
                  }
                  else
                  {
                  }
                }
              }
              else
              {
              }
              if ( ( r2 - r ) / l <= 0.000000000000 )
              {
                if ( r2 < 1.000000000000 )
                {
                }
                else
                {
                  dy = ( (double)( Line->Thickness ) * 0.500000000000 ) + fBloat;
                  if ( ( IsPointOnArc( (float)( (double)( Line->Point1.X ) + ( r * dx ) ), (float)( (double)( Line->Point1.Y ) + ( r * r ) ), (float)( r2 ), Arc ) & 255 ) == 0 )
                    goto B47;
                }
              }
              else
              {
              }
B47:;
              box = GetArcEnds( Arc );
              dy = 0.500000000000;
              if ( IsPointInPad( box->X1, box->Y1, (int)( ( (double)( Arc->Thickness ) * 0.500000000000 ) + fBloat ), &box->X1 ) & 255 )
              {
              }
              return 0;
          }
          else
            r2 = 0.000000000000;
          sqrtf( (float)( r ) );
          r2 = 0.000000000000;
          r = r;
        }
      }
      else
      {
      }
    }
    else
    {
    }
    return 1;
  }
  else
  {
  }
  return 0;
}
int LOCtoArcLine_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  /* phantom */ LineTypePtr line;
  /* phantom */ struct lo_info *i;
  if ( !( b[1].Y1 & TheFlag ) && ( LineArcIntersect( &b[0].X1, cl + 196 ) & 255 ) && ( ADD_LINE_TO_LIST( cl, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
int LOCtoArcArc_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ ArcTypePtr arc;
  /* phantom */ struct lo_info *i;
  if ( b[2].Y1 == 0 || ( b[1].Y1 & TheFlag ) )
  {
    return 0;
  }
  if ( !( (double)( b[2].Y1 ) * 0.500000000000 ) && 0.500000000000 == 0.000000000000 )
  {
    if ( (double)( cl[60] ) - 0.000000000000 <= (double)( b[2].Y2 ) - 0.000000000000 )
    {
      if ( (double)( b[2].Y2 ) + 0 <= 0.000000000000 )
      {
        if ( cl[49] <= b[ ( (unsigned char)( b[2].Y1 < 0 ) ? b[2].Y1 + Bloat : 0 ) >> 4 ].X1 && b <= cl[51] && cl[50] <= b->Y1 + ( (unsigned char)( b[2].Y1 < 0 ) ? b[2].Y1 + Bloat : 0 ) )
        {
          if ( cl[52] < b->Y1 )
          {
          }
        }
        if ( cl[49] <= b->X2 + ( (unsigned char)( b[2].Y1 < 0 ) ? b[2].Y1 + Bloat : 0 ) && b->X2 <= cl[51] && cl[50] <= b->Y2 + ( (unsigned char)( b[2].Y1 < 0 ) ? b[2].Y1 + Bloat : 0 ) && b->Y2 <= cl[52] )
          goto B24;
        else
        {
          return 0;
        }
      }
      else
      {
      }
    }
    else
    {
    }
    if ( (double)( cl[60] ) + 0.000000000000 <= (double)( cl[60] ) + 0.000000000000 )
    {
      if ( 0.000000000000 < 0.000000000000 + 0.000000000000 )
      {
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    if ( ( ( ( ( 0.000000000000 + (double)( cl[60] ) ) * ( 0.000000000000 + (double)( cl[60] ) ) ) / 0.000000000000 ) - ( ( ( 0.500000000000 * ( ( ( 0.000000000000 + (double)( cl[60] ) ) * ( 0.000000000000 + (double)( cl[60] ) ) ) - ( 0.000000000000 * 0.000000000000 ) ) ) / 0.000000000000 ) * ( ( 0.500000000000 * ( ( ( 0.000000000000 + (double)( cl[60] ) ) * ( 0.000000000000 + (double)( cl[60] ) ) ) - ( 0.000000000000 * 0.000000000000 ) ) ) / 0.000000000000 ) ) ) + 0.000010000000 <= ( ( ( ( 0.000000000000 + (double)( cl[60] ) ) * ( 0.000000000000 + (double)( cl[60] ) ) ) / 0.000000000000 ) - ( ( ( 0.500000000000 * ( ( ( 0.000000000000 + (double)( cl[60] ) ) * ( 0.000000000000 + (double)( cl[60] ) ) ) - ( 0.000000000000 * 0.000000000000 ) ) ) / 0.000000000000 ) * ( ( 0.500000000000 * ( ( ( 0.000000000000 + (double)( cl[60] ) ) * ( 0.000000000000 + (double)( cl[60] ) ) ) - ( 0.000000000000 * 0.000000000000 ) ) ) / 0.000000000000 ) ) ) + 0.000010000000 )
    {
      if ( sqrt( ( ( ( ( 0.000000000000 + (double)( cl[60] ) ) * ( 0.000000000000 + (double)( cl[60] ) ) ) / 0.000000000000 ) - ( ( ( 0.500000000000 * ( ( ( 0.000000000000 + (double)( cl[60] ) ) * ( 0.000000000000 + (double)( cl[60] ) ) ) - ( 0.000000000000 * 0.000000000000 ) ) ) / 0.000000000000 ) * ( ( 0.500000000000 * ( ( ( 0.000000000000 + (double)( cl[60] ) ) * ( 0.000000000000 + (double)( cl[60] ) ) ) - ( 0.000000000000 * 0.000000000000 ) ) ) / 0.000000000000 ) ) ) + 0.000010000000 ) == sqrt( ( ( ( ( 0.000000000000 + (double)( cl[60] ) ) * ( 0.000000000000 + (double)( cl[60] ) ) ) / 0.000000000000 ) - ( ( ( 0.500000000000 * ( ( ( 0.000000000000 + (double)( cl[60] ) ) * ( 0.000000000000 + (double)( cl[60] ) ) ) - ( 0.000000000000 * 0.000000000000 ) ) ) / 0.000000000000 ) * ( ( 0.500000000000 * ( ( ( 0.000000000000 + (double)( cl[60] ) ) * ( 0.000000000000 + (double)( cl[60] ) ) ) - ( 0.000000000000 * 0.000000000000 ) ) ) / 0.000000000000 ) ) ) + 0.000010000000 ) )
      {
        if ( fp7 != sqrt( fp7 ) )
        {
        }
        else
        {
          fp6 *= (double)( edi );
          if ( (double)( cl[49] ) < ( fp6 * (double)( edx ) ) + ( (double)( edi ) * fp6 * (double)( edx ) ) )
          {
          }
          else
          if ( (double)( cl[51] ) <= fp1 )
          {
            if ( fp6 - ebp_36 <= (double)( cl[50] ) )
            {
              if ( (double)( cl[52] ) <= ebp_40 )
              {
                if ( ebp_48 <= (double)( b ) )
                {
                  if ( (double)( b->X2 ) <= fp1 )
                  {
                    if ( ebp_40 <= (double)( b->Y1 ) )
                    {
                      if ( fp1 < (double)( b->Y2 ) )
                      {
                      }
                      else
                      {
                      }
                    }
                    else
                    {
                    }
                  }
                  else
                  {
                  }
                }
                else
                {
                }
              }
              else
              {
              }
            }
            else
            {
            }
          }
          else
          {
          }
          if ( fp4 < fp2 - fp3 )
          {
          }
          else
          if ( (double)( cl[51] ) <= fp4 )
          {
            fp4 += ebp_36;
            if ( fp4 + ebp_36 <= (double)( cl[50] ) )
            {
              if ( (double)( cl[52] ) <= fp4 )
              {
                if ( fp6 <= (double)( b ) )
                {
                  if ( (double)( b->X2 ) <= fp6 )
                  {
                    if ( fp6 <= (double)( b->Y1 ) )
                    {
                      if ( fp6 < (double)( b->Y2 ) )
                      {
                      }
                      else
                      {
                      }
                    }
                    else
                    {
                    }
                  }
                  else
                  {
                  }
                }
                else
                {
                }
              }
              else
              {
              }
            }
            else
            {
            }
          }
          else
          {
          }
          if ( IsPointOnArc( (float)( (double)( *(int*)(GetArcEnds( cl + 196 )) ) ), (float)( (double)( *(int*)GetArcEnds( cl + 196 )/*.4*/ ) ), b, *(int*)GetArcEnds( &b[0].X1 )/*.4*/ ) & 255 )
          {
          }
          else
          {
            if ( IsPointOnArc( (float)( (double)( *(int*)GetArcEnds( cl + 196 )/*.8*/ ) ), (float)( (double)( *(int*)GetArcEnds( cl + 196 )/*.12*/ ) ), (float)( ( (double)( cl[58] ) * 0.500000000000 ) + fBloat ), &b[0].X1 ) & 255 )
            {
            }
            else
            {
              if ( eax & 255 )
              {
              }
              else
              {
                if ( ( eax & 255 ) == 0 )
                {
                  return 0;
                }
              }
            }
          }
        }
      }
      else
      {
      }
      sqrtf( (float)( 0.000000000000 ) );
      fp6 *= (double)( edi );
    }
    else
    {
      return 0;
    }
  }
B24:;
  if ( ADD_ARC_TO_LIST( cl, &b[0].X1 ) & 255 )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
int LOCtoArcPad_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  /* phantom */ PadTypePtr pad;
  /* phantom */ struct lo_info *i;
  if ( !( b[1].Y1 & TheFlag ) && cl == ( ( ( b[1].Y1 >> 7 ) ^ 1 ) & 1 ) && ( LineArcIntersect( &b[0].X1, cl + 196 ) & 255 ) && ( ADD_PAD_TO_LIST( cl, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
Boolean LookupLOConnectionsToArc( ArcTypePtr Arc, Cardinal LayerGroup )
{
  int eax;
  int edx;
  Cardinal entry;
  /* phantom */ LocationType xlow;
  /* phantom */ LocationType xhigh;
  struct lo_info info;
  memcpy( &info.arc.BoundingBox.X1, Arc, 0 );
  if ( Bloat > 0 )
  {
    info.arc.BoundingBox.X1 -= Bloat;
    info.arc.BoundingBox.X2 += Bloat;
    info.arc.BoundingBox.Y1 -= Bloat;
    info.arc.BoundingBox.Y2 += Bloat;
  }
  if ( PCB->ID == LayerGroup + 1844 + 1 )
    goto B5;
  else
  {
    Cardinal layer;
    Cardinal i;
    entry = 0;
    do
    {
      layer = *(int*)(PCB + ( entry * 4 ) + ( LayerGroup * 18 * 4 ) + 7444);
      if ( *(int*)(PCB + ( entry * 4 ) + ( LayerGroup * 18 * 4 ) + 7444) < PCB->Data->LayerN )
      {
        PolygonTypePtr polygon;
        info.layer = *(int*)(PCB + ( entry * 4 ) + ( LayerGroup * 18 * 4 ) + 7444);
        if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
        {
          r_search( &PCB->Data->Layer[ layer ].line_tree, &info.arc.BoundingBox, 0, &LOCtoArcLine_callback, &info.layer );
          if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
          {
            r_search( &PCB->Data->Layer[ layer ].arc_tree, &info.arc.BoundingBox, 0, &LOCtoArcArc_callback, &info.layer );
            polygon = &PCB->Data->Layer->Polygon;
            if ( PCB->Data->Layer->PolygonN )
            {
              i = 0;
              for ( ; ( polygon->Flags.f & TheFlag ) || ( IsArcInPolygon( &Arc->BoundingBox.X1, polygon ) & 255 ) == 0 || ( ADD_POLYGON_TO_LIST( layer, polygon ) & 255 ) == 0; polygon++ )
              {
                i++;
                if ( PCB->Data->Layer->PolygonN <= i + 1 )
                  goto B22;
                else
                {
                  // polygon++;
                }
              }
            }
B22:;
            entry++;
            if ( PCB->Font.Valid <= entry )
              break;
          }
        }
      }
      else
      {
        info.layer = layer + -1;
        if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
        {
          r_search( &PCB->Data->pad_tree, &info.arc.BoundingBox, 0, &LOCtoArcPad_callback, &info.layer );
          entry++;
        }
      }
      if ( 0 ^ 0 )
      {
        __stack_chk_fail( );
      }
      break;
    }
    while ( entry < PCB->ID );
  }
B5:;
}
int LOCtoLineLine_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  /* phantom */ LineTypePtr line;
  /* phantom */ struct lo_info *i;
  if ( !( b[1].Y1 & TheFlag ) && ( LineLineIntersect( cl + 4, &b[0].X1 ) & 255 ) && ( ADD_LINE_TO_LIST( cl, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
int LOCtoLineArc_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  /* phantom */ ArcTypePtr arc;
  /* phantom */ struct lo_info *i;
  if ( b[2].Y1 && !( b[1].Y1 & TheFlag ) && ( LineArcIntersect( cl + 4, &b[0].X1 ) & 255 ) && ( ADD_ARC_TO_LIST( cl, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
int LOCtoLineRat_callback( BoxType *b, void *cl )
{
  int edx;
  int ebx;
  /* phantom */ RatTypePtr rat;
  /* phantom */ struct lo_info *i;
  if ( !( b[1].Y1 & TheFlag ) && ( ( b[5].Y1 == cl && ( ( cl[12] == b[2].Y2 && cl[13] == b[3].X1 ) || ( cl[17] == b[2].Y2 && cl[18] == b[3].X1 ) ) ) || ( b[5].X2 == cl && ( ( b[4].X1 == cl[12] && b[4].Y1 == cl[13] ) || ( cl[17] == b[4].X1 && cl[18] == b[4].Y1 ) ) ) ) && ( ADD_RAT_TO_LIST( &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
int LOCtoLinePad_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  /* phantom */ PadTypePtr pad;
  /* phantom */ struct lo_info *i;
  if ( !( b[1].Y1 & TheFlag ) && cl == ( ( ( b[1].Y1 >> 7 ) ^ 1 ) & 1 ) && ( LineLineIntersect( cl + 4, &b[0].X1 ) & 255 ) && ( ADD_PAD_TO_LIST( cl, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
Boolean LookupLOConnectionsToLine( LineTypePtr Line, Cardinal LayerGroup, Boolean PolysTo )
{
  int eax;
  int edx;
  Cardinal entry;
  struct lo_info info;
  memcpy( &info.line.BoundingBox.X1, Line, 88 );
  info.layer = LayerGroup;
  if ( Bloat > 0 )
  {
    info.line.BoundingBox.X1 -= Bloat;
    info.line.BoundingBox.X2 += Bloat;
    info.line.BoundingBox.Y1 -= Bloat;
    info.line.BoundingBox.Y2 += Bloat;
  }
  if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
  {
    r_search( &PCB->Data->rat_tree, &info.line.BoundingBox, 0, &LOCtoLineRat_callback, &info.layer );
    if ( PCB->LayerGroups.Number[ LayerGroup ] == 0 )
      goto B11;
    else
    {
      Cardinal layer;
      entry = 0;
      do
      {
        layer = *(int*)(PCB + ( entry * 4 ) + ( LayerGroup * 18 * 4 ) + 7444);
        if ( *(int*)(PCB + ( entry * 4 ) + ( LayerGroup * 18 * 4 ) + 7444) < PCB->Data->LayerN )
        {
          PolygonTypePtr polygon;
          info.layer = *(int*)(PCB + ( entry * 4 ) + ( LayerGroup * 18 * 4 ) + 7444);
          if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
          {
            r_search( &PCB->Data->Layer[ layer ].line_tree, &info.line.BoundingBox, 0, &LOCtoLineLine_callback, &info.layer );
            if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
            {
              r_search( &PCB->Data->Layer[ layer ].arc_tree, &info.line.BoundingBox, 0, &LOCtoLineArc_callback, &info.layer );
              if ( PolysTo )
              {
                Cardinal i;
                polygon = &PCB->Data->Layer->Polygon;
                if ( PCB->Data->Layer->PolygonN )
                {
                  i = 0;
                  for ( ; ( polygon->Flags.f & TheFlag ) || ( IsLineInPolygon( &Line->BoundingBox.X1, polygon ) & 255 ) == 0 || ( ADD_POLYGON_TO_LIST( layer, polygon ) & 255 ) == 0; polygon++ )
                  {
                    i++;
                    if ( PCB->Data->Layer->PolygonN <= i + 1 )
                    {
                      entry++;
                      if ( PCB->Font.Valid <= entry )
                        goto B11;
                      else
                      {
                        do
                        {
                          layer = *(int*)(PCB + ( entry * 4 ) + ( LayerGroup * 18 * 4 ) + 7444);
                        }
                        while ( entry < PCB->Font.Valid );
                      }
                    }
                    else
                    {
                      // polygon++;
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          info.layer = layer - ADD_POLYGON_TO_LIST( layer, polygon );
          if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
            r_search( &PCB->Data->pad_tree, &info.line.BoundingBox, 0, &LOCtoLinePad_callback, &info.layer );
        }
      }
      while ( entry < PCB->Font.Valid );
    }
B11:;
    if ( 0 ^ 0 )
    {
      __stack_chk_fail( );
    }
    return 1;
  }
}
int LOT_Linecallback( BoxType *b, void *cl )
{
  /* phantom */ LineTypePtr line;
  /* phantom */ struct lo_info *i;
  if ( !( b[1].Y1 & TheFlag ) && ( LineLineIntersect( cl + 4, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
int LOT_Arccallback( BoxType *b, void *cl )
{
  /* phantom */ ArcTypePtr arc;
  /* phantom */ struct lo_info *i;
  if ( b[2].Y1 && !( b[1].Y1 & TheFlag ) && ( LineArcIntersect( cl + 4, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
int LOT_Padcallback( BoxType *b, void *cl )
{
  /* phantom */ PadTypePtr pad;
  /* phantom */ struct lo_info *i;
  if ( !( b[1].Y1 & TheFlag ) && cl == ( ( ( b[1].Y1 >> 7 ) ^ 1 ) & 1 ) && ( LineLineIntersect( cl + 4, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
Boolean LOTouchesLine( LineTypePtr Line, Cardinal LayerGroup )
{
  int eax;
  Cardinal entry;
  Cardinal i;
  struct lo_info info;
  memcpy( &info.line.BoundingBox.X1, Line, 0 );
  if ( Bloat > 0 )
  {
    info.line.BoundingBox.X1 -= Bloat;
    info.line.BoundingBox.X2 += Bloat;
    info.line.BoundingBox.Y1 -= Bloat;
    info.line.BoundingBox.Y2 += Bloat;
  }
  if ( PCB->ID == LayerGroup + 1844 + 1 )
    goto B5;
  else
  {
    Cardinal layer;
    entry = 0;
    do
    {
      layer = *(int*)(PCB + ( entry * 4 ) + ( LayerGroup * 18 * 4 ) + 7444);
      if ( *(int*)(PCB + ( entry * 4 ) + ( LayerGroup * 18 * 4 ) + 7444) < PCB->Data->LayerN )
      {
        PolygonTypePtr polygon;
        if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
        {
          r_search( &PCB->Data->Layer[ layer ].line_tree, &info.line.BoundingBox, 0, &LOT_Linecallback, &info.layer );
          if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
          {
            r_search( &PCB->Data->Layer[ layer ].arc_tree, &info.line.BoundingBox, 0, &LOT_Arccallback, &info.layer );
            polygon = &PCB->Data->Layer->Polygon;
            if ( PCB->Data->Layer->PolygonN )
            {
              i = 0;
              for ( ; ( polygon->Flags.f & TheFlag ) || ( IsLineInPolygon( &Line->BoundingBox.X1, polygon ) & 255 ) == 0; polygon++ )
              {
                i++;
                if ( PCB->Data->Layer->PolygonN <= i + 1 )
                  goto B22;
                else
                {
                  // polygon++;
                }
              }
            }
B22:;
            entry++;
            if ( PCB->Font.Valid <= entry )
              break;
          }
        }
      }
      else
      {
        info.layer = layer + -1;
        if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
        {
          r_search( &PCB->Data->pad_tree, &info.line.BoundingBox, 0, &LOT_Padcallback, &info.layer );
          entry++;
        }
      }
      if ( 0 ^ 0 )
      {
        __stack_chk_fail( );
      }
      break;
    }
    while ( entry < PCB->ID );
  }
B5:;
}
int LOCtoRat_callback( BoxType *b, void *cl )
{
  int eax;
  int ebx;
#error unstructured control flow
}
int PolygonToRat_callback( BoxType *b, void *cl )
{
  int eax;
  int ebx;
  /* phantom */ PolygonTypePtr polygon;
  /* phantom */ struct rat_info *i;
  if ( !( b[1].Y1 & TheFlag ) && b[2].Y2 && b[2].Y2 == *(int*)(cl[1]) && b[2].Y2 == cl[1] && ( ADD_POLYGON_TO_LIST( cl, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 8 + 8, 1 );
  }
  return 0;
}
int LOCtoPad_callback( BoxType *b, void *cl )
{
  int ebx;
  /* phantom */ PadTypePtr pad;
  /* phantom */ struct rat_info *i;
  if ( !( b[1].Y1 & TheFlag ) && cl == ( ( ( b[1].Y1 >> 7 ) ^ 1 ) & 1 ) && ( ( b[2].Y2 == *(int*)(cl[1]) && cl[1] == b[3].X1 ) || ( b[4].X1 == *(int*)(cl[1]) && cl[1] == b[4].Y1 ) ) && ( ADD_PAD_TO_LIST( eax, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 8 + 8, 1 );
  }
  return 0;
}
Boolean LookupLOConnectionsToRatEnd( PointTypePtr Point, Cardinal LayerGroup )
{
  Cardinal entry;
  struct rat_info info;
  info.Point = Point;
  if ( PCB->ID )
  {
    Cardinal layer;
    entry = 0;
    do
    {
      layer = *(int*)(PCB + ( entry * 4 ) + ( LayerGroup * 18 * 4 ) + 7444);
      if ( *(int*)(PCB + ( entry * 4 ) + ( LayerGroup * 18 * 4 ) + 7444) < PCB->Data->LayerN )
      {
        info.layer = *(int*)(Point + ( entry * 4 ) + ( ebp_216 * 4 ) + 7444);
        if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
        {
          r_search( &PCB->Data->Layer[ layer ].line_tree, Point->X + -1, 0, &LOCtoRat_callback, &info.layer );
          if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
            r_search( &PCB->Data->Layer[ layer ].polygon_tree, Point->X + -1, 0, &PolygonToRat_callback, &info.layer );
        }
        else
          break;
      }
      else
      {
        info.layer = layer - PCB->Data->LayerN;
        if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
          r_search( &PCB->Data->pad_tree, Point->X + -1, 0, &LOCtoPad_callback, &info.layer );
        else
          break;
      }
      entry++;
    }
    while ( entry < PCB->ID );
  }
  return 0;
}
int LOCtoPadLine_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  /* phantom */ LineTypePtr line;
  /* phantom */ struct lo_info *i;
  if ( !( b[1].Y1 & TheFlag ) && ( LineLineIntersect( &b[0].X1, cl + 92 ) & 255 ) && ( ADD_LINE_TO_LIST( cl, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
int LOCtoPadArc_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  /* phantom */ ArcTypePtr arc;
  /* phantom */ struct lo_info *i;
  if ( b[2].Y1 && !( b[1].Y1 & TheFlag ) && ( LineArcIntersect( cl + 92, &b[0].X1 ) & 255 ) && ( ADD_ARC_TO_LIST( cl, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
int LOCtoPadPoly_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  /* phantom */ PolygonTypePtr polygon;
  /* phantom */ struct lo_info *i;
  if ( !( b[1].Y1 & TheFlag ) && !( ( b[1].Y1 & 16 ) & 255 ) && ( IsLineInPolygon( cl + 92, &b[0].X1 ) & 255 ) && ( ADD_POLYGON_TO_LIST( cl, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
int LOCtoPadRat_callback( BoxType *b, void *cl )
{
  int edx;
  int ebx;
  /* phantom */ RatTypePtr rat;
  /* phantom */ struct lo_info *i;
  if ( !( b[1].Y1 & TheFlag ) && ( ( b[5].Y1 == cl && ( ( cl[34] == b[2].Y2 && cl[35] == b[3].X1 ) || ( cl[39] == b[2].Y2 && cl[40] == b[3].X1 ) ) ) || ( b[5].X2 == cl && ( ( cl[34] == b[4].X1 && cl[35] == b[4].Y1 ) || ( cl[39] == b[4].X1 && cl[40] == b[4].Y1 ) ) ) ) && ( ADD_RAT_TO_LIST( &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
int LOCtoPadPad_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  /* phantom */ PadTypePtr pad;
  /* phantom */ struct lo_info *i;
  if ( !( b[1].Y1 & TheFlag ) && cl == ( ( ( b[1].Y1 >> 7 ) ^ 1 ) & 1 ) && ( LineLineIntersect( &b[0].X1, cl + 92 ) & 255 ) && ( ADD_PAD_TO_LIST( cl, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
Boolean LookupLOConnectionsToPad( PadTypePtr Pad, Cardinal LayerGroup )
{
  int eax;
  int edx;
  Cardinal entry;
  struct lo_info info;
  if ( ( ( Pad->Flags.f/*.2_2of4*/ & 1 ) & 255 ) == 0 )
    LookupLOConnectionsToLine( &Pad->BoundingBox.X1, LayerGroup, 0 );
  else
  {
    memcpy( &info.pad.BoundingBox.X1, Pad, 104 );
    if ( Bloat > 0 )
    {
      info.pad.BoundingBox.X1 -= Bloat;
      info.pad.BoundingBox.X2 += Bloat;
      info.pad.BoundingBox.Y1 -= Bloat;
      info.pad.BoundingBox.Y2 += Bloat;
    }
    info.layer = LayerGroup;
    if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
    {
      r_search( &PCB->Data->rat_tree, &info.pad.BoundingBox, 0, &LOCtoPadRat_callback, &info.layer );
      if ( PCB->LayerGroups.Number[ info.layer ] == 0 )
        goto B14;
      else
      {
        Cardinal layer;
        entry = 0;
        do
        {
          layer = *(int*)(PCB + ( entry * 4 ) + ( info.layer * 18 * 4 ) + 7444);
          if ( *(int*)(PCB + ( entry * 4 ) + ( info.layer * 18 * 4 ) + 7444) < PCB->Data->LayerN )
          {
            info.layer = *(int*)(1 + ( entry * 4 ) + ( ebp_612 * 4 ) + 7444);
            if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
            {
              r_search( &PCB->Data->Layer[ layer ].line_tree, &info.pad.BoundingBox, 0, &LOCtoPadLine_callback, &info.layer );
              if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
              {
                r_search( &PCB->Data->Layer[ layer ].arc_tree, &info.pad.BoundingBox, 0, &LOCtoPadArc_callback, &info.layer );
                if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
                  r_search( &PCB->Data->Layer[ layer ].polygon_tree, &info.pad.BoundingBox, 0, &LOCtoPadPoly_callback, &info.layer );
              }
            }
          }
          else
          {
            info.layer = layer - PCB->Data->LayerN;
            if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
              r_search( &PCB->Data->pad_tree, &info.pad.BoundingBox, 0, &LOCtoPadPad_callback, &info.layer );
          }
          entry++;
        }
        while ( entry < PCB->ID );
      }
B14:;
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return 1;
}
int LOCtoPolyLine_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  /* phantom */ LineTypePtr line;
  /* phantom */ struct lo_info *i;
  if ( !( b[1].Y1 & TheFlag ) && ( IsLineInPolygon( &b[0].X1, cl + 264 ) & 255 ) && ( ADD_LINE_TO_LIST( cl, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
int LOCtoPolyArc_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  /* phantom */ ArcTypePtr arc;
  /* phantom */ struct lo_info *i;
  if ( b[2].Y1 && !( b[1].Y1 & TheFlag ) && ( IsArcInPolygon( &b[0].X1, cl + 264 ) & 255 ) && ( ADD_ARC_TO_LIST( cl, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
int LOCtoPolyPad_callback( BoxType *b, void *cl )
{
  int eax;
  int edx;
  int ebx;
  /* phantom */ PadTypePtr pad;
  /* phantom */ struct lo_info *i;
  if ( !( b[1].Y1 & TheFlag ) && cl == ( ( ( b[1].Y1 >> 7 ) ^ 1 ) & 1 ) && ( IsLineInPolygon( &b[0].X1, cl + 264 ) & 255 ) && ( ADD_PAD_TO_LIST( cl, &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 416 + 416, 1 );
  }
  return 0;
}
int LOCtoPolyRat_callback( BoxType *b, void *cl )
{
  int edx;
  int ebx;
  /* phantom */ RatTypePtr rat;
  /* phantom */ struct lo_info *i;
  if ( ( b[1].Y1 & TheFlag ) == 0 )
  {
    if ( cl[77] != b[2].Y2 || cl[77] != b[3].X1 || b[5].Y1 != cl )
    {
      if ( b[4].X1 == cl[77] && b[4].Y1 == cl[77] && b[5].X2 == cl )
      {
      }
    }
    if ( ADD_RAT_TO_LIST( &b[0].X1 ) & 255 )
    {
      __longjmp_chk( cl + 416 + 416, 1 );
    }
  }
  return 0;
}
Boolean LookupLOConnectionsToPolygon( PolygonTypePtr Polygon, Cardinal LayerGroup )
{
  int eax;
  int edx;
  Cardinal entry;
  struct lo_info info;
  if ( Polygon->Clipped )
  {
    info.polygon.BoundingBox.X1 = Polygon->BoundingBox.X1;
    info.polygon.BoundingBox.Y1 = Polygon->BoundingBox.Y1;
    info.polygon.BoundingBox.X2 = Polygon->BoundingBox.X2;
    info.polygon.BoundingBox.Y2 = Polygon->BoundingBox.Y2;
    info.polygon.ID = Polygon->ID;
    info.polygon.Flags.f = Polygon->Flags.f;
    info.polygon.Flags.t[0] = Polygon->Flags.t[0];
    info.polygon.Flags.t[4] = Polygon->Flags.t[4];
    info.polygon.net = Polygon->net;
    info.polygon.PointN = Polygon->PointN;
    info.polygon.PointMax = Polygon->PointMax;
    info.polygon.Clipped = &Polygon->Clipped;
    info.polygon.NoHoles = &Polygon->NoHoles;
    info.polygon.NoHolesValid = Polygon->NoHolesValid;
    info.polygon.Points = &Polygon->Points;
    if ( Bloat > 0 )
    {
      info.polygon.BoundingBox.X1 -= Bloat;
      info.polygon.BoundingBox.X2 += Bloat;
      info.polygon.BoundingBox.Y1 -= Bloat;
      info.polygon.BoundingBox.Y2 += Bloat;
    }
    info.layer = LayerGroup;
    if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
    {
      r_search( &PCB->Data->rat_tree, &info.polygon.BoundingBox, 0, &LOCtoPolyRat_callback, &info.layer );
      if ( PCB->LayerGroups.Number[ info.layer ] == 0 )
        goto B2;
      else
      {
        Cardinal layer;
        Cardinal i;
        entry = 0;
        do
        {
          layer = *(int*)(PCB + ( entry * 4 ) + ( info.layer * 18 * 4 ) + 7444);
          if ( layer < PCB->Data->LayerN )
          {
            PolygonTypePtr polygon = &PCB->Data->Layer->Polygon;
            if ( PCB->Data->Layer[ layer ].PolygonN )
            {
              i = 0;
              for ( ; ( polygon->Flags.f & TheFlag ) || ( IsPolygonInPolygon( polygon, Polygon ) & 255 ) == 0 || ( ADD_POLYGON_TO_LIST( layer, polygon ) & 255 ) == 0; polygon++ )
              {
                i++;
                if ( PCB->Data->Layer->PolygonN <= i + 1 )
                  goto B16;
                else
                {
                  // polygon++;
                }
              }
            }
B16:;
            info.layer = layer;
            if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
            {
              r_search( &PCB->Data->Layer[ layer ].line_tree, &info.polygon.BoundingBox, 0, &LOCtoPolyLine_callback, &info.layer );
              if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
                r_search( &PCB->Data->Layer[ layer ].arc_tree, &info.polygon.BoundingBox, 0, &LOCtoPolyArc_callback, &info.layer );
            }
          }
          else
          {
            if ( ( ( *(char*)(Polygon + 20) & 16 ) & 255 ) == 0 )
            {
              info.layer = layer - *(int*)(*(int*)_setjmp( &info.env[0].__jmpbuf[0] )/*.8716*/ + 24);
              if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
                r_search( &PCB->Data->pad_tree, &info.polygon.BoundingBox, 0, &LOCtoPolyPad_callback, &info.layer );
            }
          }
          entry++;
        }
        while ( entry < PCB->ID );
      }
    }
    if ( 0 ^ 0 )
    {
      __stack_chk_fail( );
    }
    return 1;
  }
B2:;
}
Boolean IsArcInPolygon( ArcTypePtr Arc, PolygonTypePtr Polygon )
{
  int eax;
  /* phantom */ BoxTypePtr Box;
  return 0;
}
Boolean IsLineInPolygon( LineTypePtr Line, PolygonTypePtr Polygon )
{
  int eax;
  int esi;
  int edi;
  /* phantom */ BoxTypePtr Box;
  POLYAREA *lp;
  if ( ( Polygon->Flags.f/*.1_1of4*/ & 16 ) & 255 )
  {
  }
  else
  if ( Polygon->Clipped )
  {
    if ( ( Line->Flags.f/*.2_2of4*/ & 1 ) & 255 )
    {
      if ( Line->Point2.X != Line->Point1.X )
      {
        if ( Line->Point2.Y == Line->Point1.Y )
        {
        }
      }
      else
      {
      }
    {
      /* phantom */ BDimension wid;
      /* phantom */ LocationType x1;
      /* phantom */ LocationType x2;
      /* phantom */ LocationType y1;
      /* phantom */ LocationType y2;
      IsRectangleInPolygon( ( Line->Point2.X <= Line->Point1.X ? Line->Point1.X : Line->Point2.X ) - ( ( Bloat + Line->Thickness + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ), ( Line->Point1.Y <= Line->Point1.Y ? Line->Point1.Y : Line->Point1.Y ) - ( ( Bloat + Line->Thickness + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ), ( (unsigned char)( ( Line->Point2.X < Line->Point1.X ) ^ 1 ) ? Line->Point1.X : Line->Point2.X ) + ( ( Bloat + Line->Thickness + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ), ( (unsigned char)( ( Line->Point1.Y < Line->Point1.Y ) ^ 1 ) ? Line->Point1.Y : Line->Point1.Y ) + ( ( Bloat + Line->Thickness + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ), Line->Thickness + Bloat + 1 );
      return IsRectangleInPolygon( ( ecx <= Polygon->Clipped->contours ? Polygon->Clipped->contours : ecx ) - ( ( Bloat + *(int*)(Line + 36) + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ), ( Polygon->Clipped <= 0 ? 0 : Polygon->Clipped ) - ( ( Bloat + *(int*)(Line + 36) + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ), ( ( Bloat + *(int*)(Line + 36) + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ) + ( (unsigned char)( ( ecx < Polygon->Clipped->contours ) ^ 1 ) ? Polygon->Clipped->contours : ecx ), ( (unsigned char)( ( Polygon->Clipped < 0 ) ^ 1 ) ? 0 : Polygon->Clipped ) + ( ( Bloat + *(int*)(Line + 36) + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ), Bloat + *(int*)(Line + 36) + 1 );
    }
    }
    if ( Line->BoundingBox.X1 <= Bloat + Polygon->Clipped->contours->xmax && Polygon->Clipped->contours->xmin - Bloat <= Line->BoundingBox.X2 && Line->BoundingBox.Y1 <= Bloat + Polygon->Clipped->contours->ymax && Polygon->Clipped->contours->ymin - Bloat <= Line->BoundingBox.Y2 && lp )
    {
      isects( lp, Polygon, 1 );
      return IsRectangleInPolygon( ( ecx <= Polygon->Clipped->contours ? Polygon->Clipped->contours : ecx ) - ( ( Bloat + *(int*)(Line + 36) + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ), ( Polygon->Clipped <= 0 ? 0 : Polygon->Clipped ) - ( ( Bloat + *(int*)(Line + 36) + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ), ( ( Bloat + *(int*)(Line + 36) + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ) + ( (unsigned char)( ( ecx < Polygon->Clipped->contours ) ^ 1 ) ? Polygon->Clipped->contours : ecx ), ( (unsigned char)( ( Polygon->Clipped < 0 ) ^ 1 ) ? 0 : Polygon->Clipped ) + ( ( Bloat + *(int*)(Line + 36) + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ), Bloat + *(int*)(Line + 36) + 1 );
    }
  }
  return IsRectangleInPolygon( ( ecx <= Polygon->Clipped->contours ? Polygon->Clipped->contours : ecx ) - ( ( Bloat + *(int*)(Line + 36) + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ), ( Polygon->Clipped <= 0 ? 0 : Polygon->Clipped ) - ( ( Bloat + *(int*)(Line + 36) + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ), ( ( Bloat + *(int*)(Line + 36) + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ) + ( (unsigned char)( ( ecx < Polygon->Clipped->contours ) ^ 1 ) ? Polygon->Clipped->contours : ecx ), ( (unsigned char)( ( Polygon->Clipped < 0 ) ^ 1 ) ? 0 : Polygon->Clipped ) + ( ( Bloat + *(int*)(Line + 36) + 1 + ( ( Bloat + *(int*)(Line + 36) + 1 ) >> 31 ) ) >> 1 ), Bloat + *(int*)(Line + 36) + 1 );
}
Boolean IsPadInPolygon( PadTypePtr pad, PolygonTypePtr polygon )
{
}
// Lost vars at line 2663 through condition folding
Boolean IsPolygonInPolygon( PolygonTypePtr P1, PolygonTypePtr P2 )
{
  int edx;
  int ebx;
  int esi;
  if ( P1->Clipped && P2->Clipped && P1->Clipped->contours->xmin - Bloat <= P2->Clipped->contours->xmax && P2->Clipped->contours->xmin <= P1->Clipped->contours->xmax + Bloat && P1->Clipped->contours->ymin - Bloat <= P2->Clipped->contours->ymax && P2->Clipped->contours->ymin <= P1->Clipped->contours->ymax + Bloat )
  {
    if ( ( isects( &P1->Clipped, P2, 0 ) & 255 ) == 0 )
    {
      if ( Bloat <= 0 || P1->Clipped->contours == 0 )
        goto B2;
      else
      {
        while ( P2->Clipped->contours->xmax < c - Bloat || c->xmax + Bloat < P2->Clipped->contours->xmin || P2->Clipped->contours->ymax < c->ymin - Bloat )
        {
          c = c->next;
          if ( c->next == 0 )
            goto B2;
          else
          {
          }
        }
        if ( c->ymax + Bloat < P2->Clipped->contours->ymin )
        {
        }
        else
        {
          line.Point1.X = c->head.point[0];
          line.Thickness = Bloat * 2;
          line.Clearance = 0;
          line.Point1.Y = c->head.point[1];
          line.Flags = MakeFlags( 0 );
          line.Flags.t[0] = MakeFlags( 0 );
          v = &c->head;
          if ( c->head.next != &c->head.next )
          {
            do
            {
              line.Point2.X = v->point[0];
              line.Point2.Y = v->point[1];
              SetLineBoundingBox( &line );
              if ( ( IsLineInPolygon( &line, P2 ) & 255 ) == 0 )
              {
                line.Point1.X = line.Point2.X;
                line.Point1.Y = line.Point2.Y;
              }
            }
            while ( v == &c->head.next );
            c = c;
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
B2:;
}
void PrintElementNameList( ElementTypePtr Element, FILE *FP )
{
  int edi;
  static DynamicStringType cname;
  static DynamicStringType pname;
  static DynamicStringType vname;
  CreateQuotedString( &cname, *(int*)(&Element->Name->TextString) == 0 ? Element->Name->TextString : "" );
  CreateQuotedString( &pname, Element->Name[1].TextString == 0 ? &Element->Name[1].TextString : "" );
  CreateQuotedString( &vname, Element->Name[2].TextString == 0 ? &Element->Name[2].TextString : "" );
  __fprintf_chk( FP, 1, "(%s %s %s)\n", cname.Data, pname.Data, vname.Data );
  return;
}
void PrintConnectionElementName( ElementTypePtr Element, FILE *FP )
{
  int eax;
  int edx;
  int esi;
  fwrite( "Element", 1, 7, FP );
  PrintElementNameList( Element, FP );
  fwrite( "{\n", 1, 2, FP );
  return;
}
void PrintConnectionListEntry( char *ObjName, ElementTypePtr Element, Boolean FirstOne, FILE *FP )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  int edi;
  static DynamicStringType oname;
  CreateQuotedString( &oname, ObjName );
  if ( FirstOne & 255 )
  {
    __fprintf_chk( FP, 1, "\t%s\n\t{\n", oname.Data );
  }
  else
  {
    __fprintf_chk( FP, 1, "\t\t%s ", oname.Data );
    if ( Element == 0 )
    {
      fwrite( "(__VIA__)\n", 1, 10, FP );
    }
    else
    {
    }
  }
  return;
}
void PrintPadConnections( Cardinal Layer, FILE *FP, Boolean IsFirst )
{
  int edx;
  Cardinal i;
  PadTypePtr ptr;
  if ( PadList[ Layer ].Number )
  {
    if ( IsFirst & 255 )
    {
      ptr = *(int*)(*(int*)(PadList[0].Data + edi + 4));
      if ( *(int*)(*(int*)(PadList[0].Data + edi + 4 + 4)) )
      {
        if ( ptr->Name[88] == 0 || ptr->Name[0] == 0 )
        {
        }
        PrintConnectionListEntry( &ptr->Name, 0, 1, FP );
      }
      else
      {
        __printf_chk( 1, "Skipping NULL ptr in 1st part of PrintPadConnections\n" );
      }
    }
    i = ( IsFirst & 255 ) != 0;
    if ( ( ( i & 255 ) != 0 ) < PadList[ Layer ].Number )
    {
      do
      {
        ptr = &PadList->Data[1][0];
        if ( PadList->Data[0] )
          PrintConnectionListEntry( *(int*)(PadList->Data[1] + 88) == 0 ? &PadList->Data[1][22] : "", &PadList->Data[1][24], 0, FP );
        else
          __printf_chk( 1, "Skipping NULL ptr in 2nd part of PrintPadConnections\n" );
        i++;
      }
      while ( i + 1 < PadList->Number );
    }
  }
  return;
}
void PrintPinConnections( FILE *FP, Boolean IsFirst )
{
  Cardinal i;
  PinTypePtr pv;
  if ( PVList.Number )
  {
    if ( IsFirst & 255 )
    {
      PrintConnectionListEntry( PVList.Data[0][15] == 0 ? &PVList.Data[0][15] : "", 0, 1, FP );
    }
    i/*.1_1of4*/ = ( IsFirst & 255 ) != 0;
    i = ( (int)i/*.1_1of4*/ & 255 ) != 0;
    if ( ( ( (int)i/*.1_1of4*/ & 255 ) != 0 ) < PVList.Number )
    {
      do
      {
        PrintConnectionListEntry( *(int*)(*(int*)(PVList.Data + ( i << 2 )) + 60) == 0 ? &PVList.(null) : "", &PVList.(null), 0, FP );
      }
      while ( PVList.Number <= i + 1 );
    }
  }
  return;
}
Boolean DoIt( Boolean AndRats, Boolean AndDraw )
{
  int eax;
  int ecx;
  int edx;
  int ebp_248;
  int ebp_244;
  int ebp_236;
  Boolean new;
  do
  {
    new = LookupPVConnectionsToPVList( );
    if ( ( new & 255 ) == 0 )
    {
      ebp_244 = AndRats;
      new = LookupLOConnectionsToPVList( AndRats );
      if ( ( new & 255 ) == 0 )
      {
        if ( PCB->Data->LayerN )
        {
          do
          {
            *(int*)(ebp_2147483632 + ( 0 << 2 ) + -96) = *(int*)(LineList->Location + 0);
          }
          while ( PCB->Data->LayerN != 0 + 1 + 1 );
        }
        do
        {
          if ( AndRats && RatList.Location < RatList.Number )
          {
            do
            {
              if ( LookupLOConnectionsToRatEnd( RatList.Location + 44, RatList.Location ) & 255 )
              {
                new = 1;
              }
              else
              {
                if ( LookupLOConnectionsToRatEnd( RatList.Location + 64, RatList.Location ) & 255 )
                  continue;
                else
              }
            }
            while ( RatList.Number <= RatList.Location + 1 + 1 );
          }
          if ( PCB->Data->LayerN )
          {
            do
            {
              new = 0 + 1 + 1844;
              if ( PCB->Font.Valid )
              {
                ebp_236 = 0;
                while ( 1 )
                {
                  if ( *(int*)(PCB + ( ebp_236 * 4 ) + ( 0 * 18 * 4 ) + 7444) < *(int*)(*(int*)(( 0 * 18 ) + 8716) + 24) )
                  {
                    ebp_248 = *(int*)(( 0 * 18 ) + ( ebp_236 * 4 ) + ( 0 * 18 * 4 ) + 7444) << 2;
                    if ( *(int*)(ebp_96 + ( *(int*)(( 0 * 18 ) + ( ebp_236 * 4 ) + ( 0 * 18 * 4 ) + 7444) << 2 )) < LineList->DrawLocation )
                    {
                      do
                      {
                        if ( eax & 255 )
                          continue;
                        else
                        {
                          esi++;
                        }
                      }
                      while ( *(int*)(LineList->Number + ebx) <= esi + 1 );
                    }
                    if ( *(int*)(ebp_248 + ebp_224) < ArcList[ *(int*)(( 0 * 18 ) + ( ebp_236 * 4 ) + ( 0 * 18 * 4 ) + 7444) ].Number )
                    {
                      do
                      {
                        if ( eax & 255 )
                          continue;
                        else
                      }
                      while ( *(int*)(ArcList->Number + esi) <= ebx + 1 );
                    }
                    if ( *(int*)(ebp_248 + ebp_160) < PolygonList[ *(int*)(( 0 * 18 ) + ( ebp_236 * 4 ) + ( 0 * 18 * 4 ) + 7444) ].Number )
                    {
                      do
                      {
                        if ( eax & 255 )
                          continue;
                        else
                        {
                        }
                      }
                      while ( *(int*)(PolygonList->Number + ebx) <= esi + 1 );
                    }
                  }
                  else
                  {
                    if ( ebp_240 - eax > 1 )
                      Message( "bad layer number %d max_layer=%d in find.c\n", edx, eax, ebp_264 );
                      new = LookupPVConnectionsToLOList( ebp_244 );
                    else
                    {
                      if ( PadList[ edx ].Number <= *(int*)(ebp_32 + ( edx << 2 )) )
                      {
                        ebp_236++;
                        if ( PCB->Flags.f <= ebp_236 )
                        {
                        }
                        else
                        {
                        }
                      }
                      else
                      {
                        do
                        {
                          if ( eax & 255 )
                            continue;
                          else
                          {
                            ebx++;
                          }
                        }
                        while ( *(int*)(PadList->Number + esi) <= ebx + 1 );
                      }
                    }
                  }
                  ebp_236++;
                }
              }
            }
            while ( PCB->Data->LayerN <= 0 + 1 + 1 );
          }
          else
          {
          }
          ebp_236 = eax + 2;
          if ( eax + 2 )
          {
            ebp_248 = 0 * -20;
            do
            {
              if ( 0 + 1 < 0 )
              {
                if ( ebx & 255 )
                {
                  if ( *(int*)(LineList->Number + 0) <= *(int*)(ebp_2147483632 + ( 0 << 2 ) + -96) && *(int*)(ArcList->Number + 0) <= *(int*)(ebp_2147483632 + ( 0 << 2 ) + -224) )
                  {
                  }
                  else
                  {
                  }
                }
              }
              else
              if ( (unsigned char)( ( *(int*)(ebp_2147483632 + ( 0 << 2 ) + -160) < *(int*)(PolygonList->Number + 0) ) ^ 1 ) & 255 )
              {
              }
            }
            while ( ebp_236 <= 0 + 1 + 1 );
          }
        }
        while ( 0 & 255 );
        new = LookupPVConnectionsToLOList( ebp_244 );
      }
    }
    if ( AndDraw == 0 )
      goto B5;
    else
    {
      ebp_244 = PCB->Data->LayerN + -1;
      if ( PCB->Data->LayerN + -1 != -1 )
      {
        ebp_248 = LayerStack[ PCB->Data->LayerN + -1 ];
        while ( ebp_236 = *ebp_248 * 92, PCB->Data->Layer->On == 0 )
        {
          ebp_244 += -1;
          ebp_248 += -4;
          if ( ebp_244 == -1 )
            goto B23;
          else
          {
          }
        }
        if ( LineList[ *ebp_248 ].DrawLocation < LineList[ *ebp_248 ].Number )
        {
          ebp_236 += 64;
          while ( 1 )
          {
            DrawLine( ebp_236 + PCB->Data + 12, &LineList->Data[1][0], 0 );
            if ( LineList->Number <= LineList[ *ebp_248 ].DrawLocation + 1 )
            {
            }
            else
            {
            }
          }
        }
        LineList[ *ebp_248 ].DrawLocation = *(int*)(LineList->Number + LineList[ *ebp_248 ].Number);
        ebp_236 = *ebp_248 * 20;
        if ( ArcList[ *ebp_248 ].DrawLocation < ArcList[ *ebp_248 ].Number )
        {
          ebp_236 = ( *ebp_248 * 92 ) + 64;
          while ( 1 )
          {
            DrawArc( ebp_236 + PCB->Data + 12, *(int*)(*(int*)(ArcList[0].Data + ebp_236) + ( ArcList[ *ebp_248 ].DrawLocation << 2 ) + 4), 0 );
            if ( *(int*)(ArcList->Number + ebp_236) <= ArcList[ *ebp_248 ].DrawLocation + 1 )
            {
            }
            else
            {
            }
          }
        }
        ArcList[ *ebp_248 ].DrawLocation = *(int*)(ArcList->Number + ebp_236);
        if ( PolygonList[ *ebp_248 ].DrawLocation < PolygonList[ *ebp_248 ].Number )
        {
          ebp_236 = ( *ebp_248 * 92 ) + 64;
          while ( 1 )
          {
            DrawPolygon( ebp_236 + PCB->Data + 12, &PolygonList->Data[1][0], 0 );
            if ( PolygonList->Number <= PolygonList[ *ebp_248 ].DrawLocation + 1 )
            {
            }
            else
            {
            }
          }
        }
        PolygonList[ *ebp_248 ].DrawLocation = PolygonList->Number;
        ebp_244 += -1;
        ebp_248 += -4;
      }
B23:;
      if ( PCB->PinOn )
      {
        do
        {
          if ( *(int*)(PadList->DrawLocation + 0) < *(int*)(PadList->Number + 0) )
          {
            do
            {
              DrawPad( *(int*)(esi + *(int*)(PadList[0].Data + edi)), 0 );
            }
            while ( *(int*)(PadList->DrawLocation + 0 + 20) + 1 < *(int*)(PadList->Number + 0) );
          }
          *(int*)(PadList->DrawLocation + 0) = *(int*)(PadList->Number + 0 + 20);
        }
        while ( 0 + 20 + 20 != 40 );
        if ( PVList.DrawLocation < PVList.Number )
        {
          do
          {
            if ( ( *(char*)(PVList.Data[ PVList.DrawLocation + 1 ] + 20) & 1 ) & 255 )
            {
              if ( PCB->PinOn )
              {
                DrawPin( &RatList.Number, 0 );
              }
            }
            else
            if ( PCB->ViaOn )
            {
              DrawVia( &PVList.Data[ PVList.DrawLocation ][0], 0 );
            }
            PVList.DrawLocation++;
          }
          while ( PVList.Number <= PVList.DrawLocation + 1 );
        }
      }
      else
      if ( PVList.DrawLocation < PVList.Number )
        continue;
      if ( PCB->RatOn )
      {
        if ( RatList.DrawLocation < RatList.Number )
        {
          do
          {
            DrawRat( &RatList.Location, 0 );
          }
          while ( RatList.DrawLocation + 1 < RatList.Number );
        }
        RatList.DrawLocation = RatList.Number;
      }
    }
B5:;
    if ( new == 0 )
    {
      if ( AndRats == 0 )
      {
        if ( (unsigned char)( ( PVList.Location < PVList.Number ) ^ 1 ) & ( PCB->Data->LayerN > 0 ) & 255 )
        {
          do
          {
            if ( *(int*)(LineList->Location + 0) < *(int*)(LineList->Number + 0) || *(int*)(ArcList->Location + 0) < *(int*)(ArcList->Number + 0) || *(int*)(PolygonList->Location + 0) < *(int*)(PolygonList->Number + 0) )
              continue;
            else
            {
            }
          }
          while ( PCB->Data->LayerN <= 0 + 1 + 1 );
        }
      }
      else
      if ( ( (unsigned char)( ( PVList.Location < PVList.Number ) ^ 1 ) & 255 ) && RatList.Number <= RatList.Location )
      {
        if ( ( PCB->Data->LayerN > 0 ) & 255 )
        {
          do
          {
          }
          while ( PCB->Data->LayerN <= 0 + 1 + 1 );
        }
      }
      if ( ( 1 & 255 ) == 0 )
        continue;
    }
    if ( AndDraw == 0 )
      break;
    Draw( );
    break;
  }
  while ( *(int*)(PolygonList->Number + 0) <= *(int*)(PolygonList->Location + 0) );
}
Boolean lineClear( LineTypePtr line, Cardinal group )
{
  int eax;
  int edx;
  if ( ( LOTouchesLine( line, group ) & 255 ) == 0 )
  {
  }
  return ( PVTouchesLine( line ) & 255 ) == 0;
}
Boolean PrepareNextLoop( FILE *FP )
{
  int edx;
  /* phantom */ Cardinal layer;
  if ( PCB->Data->LayerN )
  {
    do
    {
      *(int*)(LineList->Number + 0) = 0;
      *(int*)(LineList->Location + 0) = 0;
      *(int*)(ArcList->Number + 0) = 0;
      *(int*)(ArcList->Location + 0) = 0;
      *(int*)(PolygonList->Number + 0) = 0;
      *(int*)(PolygonList->Location + 0) = 0;
    }
    while ( 0 * 20 != 0 + 20 + 20 );
  }
  PadList->Number = 0;
  PadList->Location = 0;
  PadList[1].Number = 0;
  PadList[1].Location = 0;
  PVList.Location = 0;
  PVList.Number = 0;
  RatList.Location = 0;
  RatList.Number = 0;
  return 0;
}
Boolean PrintElementConnections( ElementTypePtr Element, FILE *FP, Boolean AndDraw )
{
  int ebp_32;
  PrintConnectionElementName( Element, FP );
{
  Cardinal n;
  Cardinal sn;
  PinTypePtr pin;
  if ( Element->PinN )
  {
    n = 0;
    ebp_32 = AndDraw;
    while ( 1 )
    {
      pin = Element->Pin + ( n * 76 );
      if ( pin->Flags.f & TheFlag )
      {
        PrintConnectionListEntry( *(int*)(&Element->Name->Flags.t[0]) == 0 ? &Element->Name->Flags.t[0] : "", 0, 1, FP );
        fwrite( "\t\t__CHECKED_BEFORE__\n\t}\n", 1, 24, FP );
      }
      else
      {
        if ( ( ADD_PV_TO_LIST( pin ) & 255 ) == 0 )
        {
          DoIt( 1, ebp_32 );
          PrintPinConnections( FP, 1 );
          PrintPadConnections( 1, FP, 0 );
          PrintPadConnections( 0, FP, 0 );
          fwrite( "\t}\n", 1, 3, FP );
          if ( PrepareNextLoop( FP ) & 255 )
            break;
        }
        else
          break;
      }
      sn = Element->PinN;
      if ( Element->PinN == 0 || sn <= ( sn + n + 1 ) - Element->PinN )
        goto B3;
      else
      {
      }
    }
  }
{
B3:;
  Cardinal n;
  Cardinal sn;
  PadTypePtr pad;
{
  Cardinal layer;
  ebp_32 = 0;
  n = 0;
  while ( 1 )
  {
    sn = Element->PadN;
    do
    {
      if ( sn && n < sn )
      {
        pad = ebp_32 + Element->Pad;
        pad->Flags.f = *(int*)(ebp_32 + Element->Pad + 20);
        if ( pad->Flags.f & TheFlag )
        {
          PrintConnectionListEntry( *(int*)(FP->_flags + 88) == 0 ? &FP->__pad2 : "", 0, 1, FP );
          fwrite( "\t\t__CHECKED_BEFORE__\n\t}\n", 1, 24, FP );
          sn = Element->PadN;
        }
        else
        {
          layer = ( ( layer >> 7 ) ^ 1 ) & 1;
          if ( ( ADD_PAD_TO_LIST( ( ( layer >> 7 ) ^ 1 ) & 1, pad ) & 255 ) == 0 )
          {
            DoIt( 1, AndDraw );
            PrintPadConnections( layer, FP, 1 );
            PrintPadConnections( layer ^ 1, FP, 0 );
            PrintPinConnections( FP, 0 );
            fwrite( "\t}\n", 1, 3, FP );
            if ( PrepareNextLoop( FP ) & 255 )
              break;
            sn = Element->PadN;
            if ( Element->PadN != Element->PadN )
              continue;
          }
          else
            break;
        }
      }
      else
      {
        fwrite( "}\n\n", 1, 3, FP );
        return 0;
      }
    }
    while ( Element->PadN != Element->PadN );
    n++;
    ebp_32 += 104;
  }
}
}
}
}
void LookupElementConnections( ElementTypePtr Element, FILE *FP )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  User = 1;
  TheFlag = 4;
  ResetConnections( eax );
  InitConnectionLookup( );
  PrintElementConnections( Element, FP, 1 );
  SetChangedFlag( 1 );
  if ( Settings.RingBellWhenFinished )
    gui->beep( );
  FreeConnectionLookupMemory( );
  IncrementUndoSerialNumber( );
  User = 0;
}
void LookupConnectionsToAllElements( FILE *FP )
{
  int eax;
  int edx;
  User = 0;
  TheFlag = 4;
  ResetConnections( eax );
  InitConnectionLookup( );
{
  Cardinal n = PCB->Data->ElementN + -1;
  /* phantom */ ElementTypePtr element;
  if ( PCB->Data->ElementN + -1 != -1 )
  {
    while ( ( PrintElementConnections( PCB->Data->Element + ( PCB->Data->ElementN * 300 ) + -300 + -300, FP, 0 ) & 255 ) == 0 )
    {
      int i;
      fputc( 35, FP );
      i = Settings.CharPerLine;
      if ( Settings.CharPerLine )
      {
        do
        {
          fputc( 61, FP );
        }
        while ( i == 1 );
      }
      fputc( 10, FP );
      if ( n != 1 && Settings.ResetAfterElement )
      {
        n += -1;
        ResetConnections( 0 );
        if ( n == -1 )
          break;
      }
      else
      {
        n += -1;
        if ( n + -1 == -1 )
          break;
      }
    }
  }
  if ( Settings.RingBellWhenFinished )
    gui->beep( );
  ResetConnections( 0 );
  FreeConnectionLookupMemory( );
}
}
Boolean ListStart( int type, void *ptr1, void *ptr2, void *ptr3 )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  int edi;
  DumpList( );
  switch ( type )
  {
  default:
    esi = ptr2;
    break;
  case 1:
  case 256:
    break;
  case 32:
    break;
  case 4:
  {
    int layer = PCB->Data;
    GetLayerNumber( &PCB->Data, &ptr1[0] );
    layer = ( layer/*.1_1of4*/ & 255 ) != 0;
  }
    break;
  case 16384:
  {
    int layer = PCB->Data;
    GetLayerNumber( &PCB->Data, &ptr1[0] );
    layer = ( layer/*.1_1of4*/ & 255 ) != 0;
  }
    break;
  case 8:
  {
    int layer = PCB->Data;
    GetLayerNumber( &PCB->Data, &ptr1[0] );
    layer = ( layer/*.1_1of4*/ & 255 ) != 0;
  }
    break;
  case 512:
  {
    /* phantom */ PadTypePtr pad;
  }
    break;
  }
  return ( layer/*.1_1of4*/ & 255 ) != 0;
}
void LookupConnection( LocationType X, LocationType Y, Boolean AndDraw, BDimension Range, int which_flag )
{
  int eax;
  int ecx;
  int edx;
  void *ptr1, *ptr2, *ptr3;
  char *name;
  int type;
  if ( SearchObjectByLocation( 768, &ptr1, &ptr2, &ptr3, X, Y, Range ) == 0 )
  {
    if ( SearchObjectByLocation( 16429, &ptr1, &ptr2, &ptr3, X, Y, Range ) && ( ( SearchObjectByLocation( 16429, &ptr1, &ptr2, &ptr3, X, Y, Range ) & 16396 ) == 0 || laynum < PCB->Data->LayerN ) )
      goto B9;
    else
    {
      return;
    }
  }
  else
  {
    hid_actionl( "NetlistShow", (long long)( ConnectionName( type, ptr1, ptr2 ) ) );
  }
B9:;
  TheFlag = which_flag;
  User = AndDraw;
  InitConnectionLookup( );
  ListStart( type, ptr1, ptr2, ptr3 );
  AndDraw = AndDraw;
  DoIt( 1, AndDraw );
  if ( User )
    IncrementUndoSerialNumber( );
  User = 0;
  if ( AndDraw )
  {
    Draw( );
    if ( Settings.RingBellWhenFinished )
      gui->beep( );
  }
  FreeConnectionLookupMemory( );
  return;
}
void RatFindHook( int type, void *ptr1, void *ptr2, void *ptr3, Boolean undo, Boolean AndRats )
{
  int eax;
  int ecx;
  int edx;
  AndRats = AndRats;
  User = undo;
  DumpList( );
  ListStart( type, ptr1, ptr2, ptr3 );
  DoIt( AndRats, 0 );
  User = 0;
  return;
}
void LookupUnusedPins( FILE *FP )
{
  int eax;
  int edx;
  int ebp_52;
  User = 1;
  SaveUndoSerialNumber( );
  ResetConnections( 1 );
  RestoreUndoSerialNumber( );
  InitConnectionLookup( );
{
  Cardinal n = PCB->Data->ElementN + -1;
  ElementTypePtr element;
  if ( PCB->Data->ElementN + -1 != -1 )
  {
    ebp_52 = ( PCB->Data->ElementN * 300 ) + -300;
    while ( 1 )
    {
      element = ebp_52 + PCB->Data->Element;
      if ( *(int*)(ebp_52 + *(int*)(PCB->Data + 32) + 224) )
      {
        while ( !( ( (unsigned char)( element->Pin[ ( element->PinN + 0 + 1 ) - *(int*)(ebp_52 + *(int*)(element->PinN + 32) + 224) ].Flags.f ) & 8 ) & 255 ) && FP && ( PCB->Data->ElementN & TheFlag ) == 0 )
        {
          if ( element->PinN )
          {
            if ( *(int*)(ebp_52 + *(int*)(element->PinN + 32) + 224) <= ( ( ( 0 + element->PinN + 1 ) - *(int*)(ebp_52 + *(int*)(element->PinN + 32) + 224) ) + *(int*)(ebp_52 + *(int*)(element->PinN + 32) + 224) + 1 ) - *(int*)(ebp_52 + *(int*)(element->PinN + 32) + 224) )
              goto B13;
            else
            {
            }
          }
        }
      }
      else
      {
      }
B13:;
      while ( element->PadN && 0 + ( element->PadN == element->PadN ) < element->PadN )
      {
        if ( FP && ( element->Pad[ 0 + ( element->PadN == element->PadN ) ].Flags.f & TheFlag ) == 0 )
        {
          if ( ( ADD_PAD_TO_LIST( ( ( element->Pad[ 0 + ( element->PadN == element->PadN ) ].Flags.f >> 7 ) ^ 1 ) & 1, &element->Pad[ 0 + ( element->PadN == element->PadN ) ] ) & 255 ) == 0 )
          {
            DoIt( 1, 1 );
            if ( PVList.Number )
            {
              do
              {
              }
              while ( PVList.Number != 0 + 1 + 1 );
            }
            if ( ( PadList[1].Number + PadList->Number + PVList.Number ) - ( ( *(int*)(*(int*)(PVList.Data + ( 0 << 2 )) + 68) < 1 ) & 1 ) == 1 )
            {
              if ( 0 )
                PrintConnectionElementName( element, FP );
              CreateQuotedString( &oname, *(int*)(element->Pad[ 0 + ( element->PadN == element->PadN ) ].BoundingBox.X1 + 88) == 0 ? &element->Pad[ 0 + ( element->PadN == element->PadN ) + 0 ].Name : "" );
              __fprintf_chk( FP, 1, "\t%s\n", oname.Data );
              element->Pad[ 0 + ( element->PadN == element->PadN ) + 0 ].Flags.f |= 64;
              DrawPad( &element->Pad[ 0 + ( element->PadN == element->PadN ) ], 0 );
              if ( ( PrepareNextLoop( FP ) & 255 ) == 0 )
                goto B65;
            }
            else
            {
              if ( ( PrepareNextLoop( FP ) & 255 ) == 0 )
                goto B65;
            }
B65:;
          }
        }
      }
      if ( 0 == 0 )
      {
        fwrite( "}\n\n", 1, 3, FP );
        fputc( 35, FP );
        if ( Settings.CharPerLine )
        {
          FP = FP;
          do
          {
            fputc( 61, FP );
          }
          while ( Settings.CharPerLine + -1 == 1 );
        }
        fputc( 10, FP );
      }
      n += -1;
      ebp_52 += -300;
      if ( n == -1 )
        goto B6;
      else
      {
      }
    }
  }
B6:;
  if ( Settings.RingBellWhenFinished )
    gui->beep( );
  FreeConnectionLookupMemory( );
  IncrementUndoSerialNumber( );
  User = 0;
}
}
void ResetFoundPinsViasAndPads( Boolean AndDraw )
{
  int eax;
  int ebp_40;
  Boolean change;
{
  Cardinal n;
  Cardinal sn;
  PinTypePtr via;
  change = 0;
  sn = PCB->Data->ViaN;
  if ( PCB->Data->ViaN )
  {
    n = 0;
    while ( 1 )
    {
      via = PCB->Data->Via + ( n * 76 );
      if ( ( via->Flags.f & TheFlag ) == 0 )
        goto B6;
      else
      if ( AndDraw )
      {
        AddObjectToFlagUndoList( 1, (void*)via, (void*)via, (void*)via );
        via->Flags.f &= ~TheFlag;
        DrawVia( via, 0 );
        change = 1;
        sn = PCB->Data->ViaN;
        if ( PCB->Data->ViaN )
        {
          n = ( sn + n + 1 ) - sn;
          if ( sn <= ( sn + n + 1 ) - sn )
            goto B3;
          else
          {
            sn = sn;
          }
        }
      }
      else
      {
        via->Flags.f &= ~TheFlag;
        change = 1;
      }
B6:;
      sn = PCB->Data->ViaN;
      if ( PCB->Data->ViaN )
      {
        n = ( sn + n + 1 ) - sn;
      }
    }
  }
{
B3:;
  Cardinal n = PCB->Data->ElementN + -1;
  ElementTypePtr element;
  if ( PCB->Data->ElementN + -1 != -1 )
  {
    ebp_40 = ( PCB->Data->ElementN * 300 ) + -300;
    while ( element = ebp_40 + PCB->Data->Element, element->PinN == 0 )
    {
      Cardinal n = 0;
      Cardinal sn;
      PadTypePtr pad;
      for ( ; sn && n < sn;  )
      {
        pad = element->Pad + ( n * 104 );
        if ( ( pad->Flags.f & TheFlag ) == 0 )
          continue;
        else
        if ( AndDraw )
        {
          AddObjectToFlagUndoList( 512, (void*)element, (void*)pad, (void*)pad );
          pad->Flags.f &= ~TheFlag;
          DrawPad( pad, 0 );
          sn = element->PadN;
          change = 1;
        }
        else
        {
          pad->Flags.f &= ~TheFlag;
          change = 1;
        }
        n += element->PadN == sn;
      }
      n += -1;
      ebp_40 += -300;
      if ( n == -1 )
        goto B13;
      else
      {
      }
    }
    n = 0;
    while ( 1 )
    {
      pin = element->Pin + ( n * 76 );
      if ( ( pin->Flags.f & TheFlag ) == 0 )
        goto B20;
      else
      if ( AndDraw )
      {
        AddObjectToFlagUndoList( 256, (void*)element, (void*)pin, (void*)pin );
        pin->Flags.f &= ~TheFlag;
        DrawPin( pin, 0 );
        sn = element->PinN;
        change = 1;
        if ( element->PinN )
        {
          n = ( sn + n + 1 ) - sn;
          if ( sn <= ( sn + n + 1 ) - element->PinN )
            continue;
          else
          {
          }
        }
        else
        {
        }
      }
      else
      {
        pin->Flags.f &= ~TheFlag;
        change = 1;
      }
B20:;
      if ( sn )
      {
        n = ( sn + n + 1 ) - sn;
      }
    }
  }
B13:;
  if ( change )
  {
    SetChangedFlag( 1 );
    if ( AndDraw )
    {
      IncrementUndoSerialNumber( );
    }
  }
  return;
}
}
}
void ResetFoundLinesAndPolygons( Boolean AndDraw )
{
  int eax;
  int ecx;
  int edx;
  Boolean change;
{
  Cardinal n;
  RatTypePtr line;
  change = 0;
  n = PCB->Data->RatN + -1;
  if ( PCB->Data->RatN + -1 != -1 )
  {
    while ( 1 )
    {
      line = ( PCB->Data->RatN * 92 ) + -92 + -92 + PCB->Data->Rat;
      if ( ( line->Flags.f & TheFlag ) == 0 )
        goto B6;
      else
      if ( AndDraw )
      {
        n += -1;
        AddObjectToFlagUndoList( 32, (void*)line, (void*)line, (void*)line );
        line->Flags.f &= ~TheFlag;
        DrawRat( line, 0 );
        change = 1;
        if ( n == -1 )
        {
        }
        else
        {
        }
      }
      else
      {
        line->Flags.f &= ~TheFlag;
        change = 1;
      }
B6:;
      n += -1;
      if ( n + -1 == -1 )
      {
      }
      else
      {
      }
    }
  }
{
  Cardinal l;
  LayerTypePtr layer = PCB->Data + 76;
  if ( PCB->Data->LayerN )
  {
    l = 0;
  {
    while ( n = layer->LineN + -1, layer->LineN + -1 == -1 )
    {
      l++;
      if ( PCB->Data->LayerN <= l )
      {
        Cardinal l;
        LayerTypePtr layer;
        layer += 0;
        if ( PCB->Data->LayerN )
        {
          l = 0;
        {
          while ( n = layer->ArcN + -1, layer->ArcN + -1 == -1 )
          {
            l++;
            if ( PCB->Data->LayerN <= l )
            {
              Cardinal l;
              LayerTypePtr layer = PCB->Data + 76;
              if ( PCB->Data->LayerN )
              {
                l = 0;
              {
                while ( n = layer->PolygonN + -1, layer->PolygonN + -1 == -1 )
                {
                  l++;
                  if ( PCB->Data->LayerN <= l )
                    goto B14;
                  else
                  {
                    layer++;
                  }
                }
                do
                {
                  polygon = layer->Polygon + ( layer->PolygonN * 60 ) + -60 + -60;
                  if ( ( polygon->Flags.f & TheFlag ) == 0 )
                    goto B52;
                  else
                  if ( AndDraw )
                  {
                    n += -1;
                    AddObjectToFlagUndoList( 8, (void*)layer, (void*)polygon, (void*)polygon );
                    polygon->Flags.f &= ~TheFlag;
                    DrawPolygon( layer, polygon, 0 );
                    change = 1;
                  }
                  else
                  {
                    polygon->Flags.f &= ~TheFlag;
                    change = 1;
                  }
B52:;
                  n += -1;
                  if ( n + -1 != -1 )
                    continue;
                  else
                  {
                    l++;
                  }
                }
                while ( n != -1 );
                l++;
              }
              }
            }
            else
            {
              layer++;
            }
          }
          do
          {
            arc = layer->Arc + ( layer->ArcN * 68 ) + -68 + -68;
            if ( ( arc->Flags.f & TheFlag ) == 0 )
              goto B37;
            else
            if ( AndDraw )
            {
              n += -1;
              AddObjectToFlagUndoList( 16384, (void*)layer, (void*)arc, (void*)arc );
              arc->Flags.f &= ~TheFlag;
              DrawArc( layer, arc, 0 );
              change = 1;
            }
            else
            {
              arc->Flags.f &= ~TheFlag;
              change = 1;
            }
B37:;
            n += -1;
            if ( n + -1 != -1 )
              continue;
            else
            {
              l++;
            }
          }
          while ( n != -1 );
          l++;
        }
        }
      }
      else
      {
        layer++;
      }
    }
    do
    {
      line = layer->Line + ( layer->LineN * 88 ) + -88 + -88;
      if ( ( line->Flags.f & TheFlag ) == 0 )
        goto B20;
      else
      if ( AndDraw )
      {
        n += -1;
        AddObjectToFlagUndoList( 4, (void*)layer, (void*)line, (void*)line );
        line->Flags.f &= ~TheFlag;
        DrawLine( layer, line, 0 );
        change = 1;
      }
      else
      {
        line->Flags.f &= ~TheFlag;
        change = 1;
      }
B20:;
      n += -1;
      if ( n + -1 != -1 )
        continue;
      else
      {
        l++;
      }
    }
    while ( n != -1 );
    l++;
  }
  }
B14:;
  if ( change )
  {
    SetChangedFlag( 1 );
    if ( AndDraw )
    {
      IncrementUndoSerialNumber( );
    }
  }
  return;
}
}
}
void ResetConnections( Boolean AndDraw )
{
  if ( AndDraw & 255 )
  {
    SaveUndoSerialNumber( );
    ResetFoundPinsViasAndPads( 0 );
    RestoreUndoSerialNumber( );
    ResetFoundLinesAndPolygons( 0 );
    return;
  }
  ResetFoundPinsViasAndPads( 0 );
  ResetFoundLinesAndPolygons( 0 );
  return;
}
void DumpList( void )
{
  int edx;
  /* phantom */ Cardinal i;
  PadList->Number = 0;
  PadList->Location = 0;
  PadList->DrawLocation = 0;
  PadList[1].Number = 0;
  PadList[1].Location = 0;
  PadList[1].DrawLocation = 0;
  PVList.Number = 0;
  PVList.Location = 0;
  if ( PCB->Data->LayerN )
  {
    do
    {
      *(int*)(LineList->Location + 0) = 0;
      *(int*)(LineList->DrawLocation + 0) = 0;
      *(int*)(LineList->Number + 0) = 0;
      *(int*)(ArcList->Location + 0) = 0;
      *(int*)(ArcList->DrawLocation + 0) = 0;
      *(int*)(ArcList->Number + 0) = 0;
      *(int*)(PolygonList->Location + 0) = 0;
      *(int*)(PolygonList->DrawLocation + 0) = 0;
      *(int*)(PolygonList->Number + 0) = 0;
    }
    while ( 0 * 20 != 0 + 20 + 20 );
  }
  RatList.Number = 0;
  RatList.Location = 0;
  RatList.DrawLocation = 0;
  return;
}
Boolean DRCFind( int What, void *ptr1, void *ptr2, void *ptr3 )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  LocationType x;
  LocationType y;
  int object_count;
  long *object_id_list;
  int *object_type_list;
  DrcViolationType *violation;
  if ( PCB->Shrink )
  {
    Bloat = 0 - PCB->Shrink;
    fBloat = (double)( 0 - PCB->Shrink );
    TheFlag = 4160;
    ListStart( What, ptr1, ptr2, ptr3 );
    DoIt( 1, 0 );
    DumpList( );
    TheFlag = 4;
    ListStart( What, ptr1, ptr2, ptr3 );
    Bloat = 0;
    fBloat = 0.0;
    drc = 1;
    if ( DoIt( 1, 0 ) & 255 )
    {
      DumpList( );
      TheFlag = 68;
      ResetConnections( 0 );
      User = 1;
      drc = 0;
      Bloat = 0 - PCB->Shrink;
      fBloat = (double)( 0 - PCB->Shrink );
      TheFlag = 64;
      RestoreUndoSerialNumber( );
      ListStart( What, ptr1, ptr2, ptr3 );
      DoIt( 1, 1 );
      DumpList( );
      ListStart( What, ptr1, ptr2, ptr3 );
      TheFlag = 4;
      Bloat = 0;
      fBloat = 0.0;
      drc = 1;
      DoIt( 1, 1 );
      DumpList( );
      drcerr_count++;
      User = 0;
      drc = 0;
      LocateError( &x, &y );
      BuildObjectList( &object_count, &object_id_list, &object_type_list );
      y = T/*.475*/( );
      violation = "Potential for broken trace";
      append_drc_violation( "Potential for broken trace" );
      pcb_drc_violation_free( violation );
      free( object_id_list );
      free( object_type_list );
      if ( throw_drc_dialog( ) == 0 )
      {
        return 1;
      }
      IncrementUndoSerialNumber( );
      Undo( 1 );
    }
    DumpList( );
  }
  drc = 0;
  ResetConnections( 0 );
  TheFlag = 4;
  ListStart( What, ptr1, ptr2, ptr3 );
  Bloat = PCB->Bloat;
  fBloat = (double)( PCB->Bloat );
  drc = 1;
  while ( ( DoIt( 1, 0 ) & 255 ) == 0 )
  {
    DumpList( );
    TheFlag = 68;
    ResetConnections( 0 );
    User = 1;
    drc = 0;
    Bloat = 0;
    fBloat = 0.0;
    RestoreUndoSerialNumber( );
    TheFlag = 64;
    ListStart( What, ptr1, ptr2, ptr3 );
    DoIt( 1, 1 );
    DumpList( );
    TheFlag = 4;
    ListStart( What, ptr1, ptr2, ptr3 );
    Bloat = PCB->Bloat;
    fBloat = (double)( PCB->Bloat );
    drc = 1;
    DoIt( 1, 1 );
    DumpList( );
    drcerr_count++;
    LocateError( &x, &y );
    BuildObjectList( &object_count, &object_id_list, &object_type_list );
    y = T/*.475*/( );
    violation = "Copper areas too close";
    append_drc_violation( "Copper areas too close" );
    pcb_drc_violation_free( violation );
    free( object_id_list );
    free( object_type_list );
    User = 0;
    drc = 0;
    if ( throw_drc_dialog( ) == 0 )
      break;
    IncrementUndoSerialNumber( );
    Undo( 1 );
    TheFlag |= 64;
    Bloat = 0;
    fBloat = 0.0;
    ListStart( thing_type, thing_ptr1, thing_ptr2, thing_ptr3 );
    DoIt( 1, 1 );
    DumpList( );
    drc = 1;
    Bloat = PCB->Bloat;
    fBloat = (double)( PCB->Bloat );
    ListStart( What, ptr1, ptr2, ptr3 );
  }
  drc = 0;
  DumpList( );
  TheFlag = 68;
  ResetConnections( 0 );
  return 0;
}
void SaveFindFlag( int NewFlag )
{
  OldFlag = TheFlag;
  TheFlag = NewFlag;
  return;
}
void RestoreFindFlag( void )
{
  TheFlag = OldFlag;
  return;
}
int drc_callback( DataTypePtr data, LayerTypePtr layer, PolygonTypePtr polygon, int type, void *ptr1, void *ptr2 )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  char *message;
  LocationType x;
  LocationType y;
  int object_count;
  long *object_id_list;
  int *object_type_list;
  DrcViolationType *violation;
  /* phantom */ LineTypePtr line;
  /* phantom */ ArcTypePtr arc;
  /* phantom */ PinTypePtr pin;
  /* phantom */ PadTypePtr pad;
  thing_type = type;
  thing_ptr1 = ptr1;
  thing_ptr2 = ptr2;
  thing_ptr3 = ptr2;
  switch ( type )
  {
  case 4:
    if ( ( PCB->Bloat * 2 ) <= ((char*)ptr2)[40] )
    {
      return 0;
    }
    AddObjectToFlagUndoList( 4, ptr1, ptr2, ptr2 );
    ((char*)ptr2)[20] |= TheFlag;
    message = "Line with insufficient clearance inside polygon\n";
    break;
  case 16384:
    if ( ((char*)ptr2)[40] < ( PCB->Bloat * 2 ) )
    {
      AddObjectToFlagUndoList( 16384, ptr1, ptr2, ptr2 );
      ((char*)ptr2)[20] |= TheFlag;
      message = "Arc with insufficient clearance inside polygon\n";
    }
    else
    {
      return 0;
    }
    break;
  case 512:
    if ( ( PCB->Bloat * 2 ) <= ((char*)ptr2)[40] || ( IsLineInPolygon( &ptr2[0], polygon ) & 255 ) == 0 )
    {
      return 0;
    }
    AddObjectToFlagUndoList( 512, ptr1, ptr2, ptr2 );
    ((char*)ptr2)[20] |= TheFlag;
    message = "Pad with insufficient clearance inside polygon\n";
    break;
  case 256:
    if ( ((char*)ptr2)[40] < ( PCB->Bloat * 2 ) )
    {
      AddObjectToFlagUndoList( 256, ptr1, ptr2, ptr2 );
      ((char*)ptr2)[20] |= TheFlag;
      message = "Pin with insufficient clearance inside polygon\n";
    }
    else
    {
      return 0;
    }
    break;
  case 1:
    if ( ((char*)ptr2)[40] && ((char*)ptr2)[40] < ( PCB->Bloat * 2 ) )
    {
      AddObjectToFlagUndoList( 1, ptr1, ptr2, ptr2 );
      ((char*)ptr2)[20] |= TheFlag;
      message = "Via with insufficient clearance inside polygon\n";
    }
    else
    {
      return 0;
    }
    break;
  default:
    Message( "hace: Bad Plow object in callback\n" );
    return 0;
    break;
  }
  AddObjectToFlagUndoList( 8, (void*)layer, (void*)polygon, (void*)polygon );
  *(int*)(ebp_64 + 20) |= 4;
  DrawPolygon( layer, ebp_64, 0 );
  DrawObject( type, ptr1, ptr2, 0 );
  drcerr_count++;
  LocateError( &x, &y );
  BuildObjectList( &object_count, &object_id_list, &object_type_list );
  y = T/*.475*/( );
  violation = &message[0];
  append_drc_violation( &message[0] );
  pcb_drc_violation_free( violation );
  free( object_id_list );
  free( object_type_list );
  if ( throw_drc_dialog( ) == 0 )
  {
    IsBad = 1;
    return 1;
  }
  IncrementUndoSerialNumber( );
  Undo( 1 );
  return 0;
}
int DRCAll( void )
{
  int eax;
  int ecx;
  int edx;
  int dh;
  double fp4;
  double fp5;
  double fp6;
  int ebp_84;
  int ebp_80;
  int ebp_76;
  int ebp_68;
  LocationType x;
  LocationType y;
  int object_count;
  long *object_id_list;
  int *object_type_list;
  DrcViolationType *violation;
  int tmpcnt;
  int nopastecnt;
  drc_dialog_message[0] = 0;
  if ( gui->drc_gui )
  {
    ;
  }
  IsBad = 0;
  drcerr_count = 0;
  SaveStackAndVisibility( );
  ResetStackAndVisibility( );
  hid_action( "LayersChanged" );
  InitConnectionLookup( );
  TheFlag = 4164;
  ResetConnections( 1 );
{
  Cardinal n;
  ElementTypePtr element;
  User = 0;
  n = PCB->Data->ElementN + -1;
  if ( PCB->Data->ElementN + -1 != -1 )
  {
    nopastecnt = 0;
    ebp_76 = ( PCB->Data->ElementN * 300 ) + -300;
    while ( element = ebp_76 + PCB->Data->Element, element->PinN == 0 )
    {
      if ( IsBad == 0 )
      {
        Cardinal n = 0;
        Cardinal sn;
        PadTypePtr pad;
        for ( ; sn && n < sn;  )
        {
          pad = element->Pad + ( n * 104 );
          nopastecnt = ( nopastecnt + 1 ) - ( ( ( element->Pad->Flags.f & 8 ) < 1 ) & 1 );
          if ( ( ( dh & 16 & 16 & 16 ) & 255 ) == 0 )
          {
            if ( ( DRCFind( 512, (void*)element, (void*)pad, (void*)pad ) & 255 ) == 0 )
              sn = element->PadN;
            else
            {
              Cardinal n;
              Cardinal sn;
              PinTypePtr via;
              IsBad = 1;
              TheFlag = 4096;
              ResetConnections( 0 );
              TheFlag = 64;
              if ( IsBad == 0 )
              {
                Cardinal l;
                LayerTypePtr layer = &PCB->Data->Layer;
                if ( PCB->Data->LayerN )
                {
                  l = 0;
                {
                  while ( 1 )
                  {
                    Cardinal n = layer->LineN + -1;
                    LineTypePtr line;
                    if ( layer->LineN + -1 != -1 )
                    {
                      while ( 1 )
                      {
                        line = layer->Line + ( layer->LineN * 88 ) + -88 + -88;
                        PlowsPolygon( &PCB->Data[5].name_tree[0]->root, 4, (void*)layer, layer->Line + ( layer->LineN * 88 ) + -88, &drc_callback );
                        if ( IsBad == 0 )
                        {
                          if ( PCB->minWid <= line->Thickness )
                          {
                            n += -1;
                            if ( n != -1 )
                            {
                              PCB = &PCB->Data->ViaN;
                            }
                          }
                          else
                          {
                            AddObjectToFlagUndoList( 4, (void*)layer, (void*)line, (void*)line );
                            line->Flags.f |= TheFlag;
                            DrawLine( layer, line, 0 );
                            drcerr_count++;
                            thing_ptr1 = (void*)layer;
                            thing_ptr2 = (void*)line;
                            thing_ptr3 = (void*)line;
                            thing_type = 4;
                            LocateError( &x, &y );
                            BuildObjectList( &object_count, &object_id_list, &object_type_list );
                            ebp_76 = object_id_list;
                            ebp_68 = object_count;
                            y = T/*.475*/( );
                            violation = "Line width is too thin";
                            append_drc_violation( "Line width is too thin" );
                            pcb_drc_violation_free( violation );
                            free( object_id_list );
                            free( object_type_list );
                            if ( throw_drc_dialog( ) == 0 )
                              IsBad = 1;
                            else
                            {
                              IncrementUndoSerialNumber( );
                              Undo( 0 );
                              n += -1;
                              if ( n != -1 )
                              {
                                PCB = &PCB->Data->ViaN;
                              }
                            }
                          }
                          PCB = &PCB->Data->ViaN;
                        }
                        ebp_80++;
                        if ( ebp_80 < PCB->Data->LayerN )
                        {
                          layer++;
                          break;
                        {
                          while ( 1 )
                          {
                            Cardinal n = layer->LineN + -1;
                            LineTypePtr line;
                          }
                        }
                        }
                        else
                        {
                          if ( IsBad == 0 )
                          {
                            Cardinal l;
                            LayerTypePtr layer = PCB->Data[5].name_tree[0] + 76;
                            if ( PCB->Data->LayerN )
                            {
                              l = 0;
                            {
                              while ( n = layer->ArcN + -1, layer->ArcN + -1 == -1 )
                              {
                                l++;
                                if ( PCB->Data[5].name_tree[0][3].root <= l )
                                {
                                  if ( IsBad == 0 )
                                    goto B46;
                                }
                                else
                                {
                                  layer++;
                                }
                              }
                              while ( 1 )
                              {
                                arc = layer->Arc + ( layer->ArcN * 68 ) + -68 + -68;
                                PlowsPolygon( &PCB->Data[5].name_tree[0]->root, 16384, (void*)layer, layer->Arc + ( layer->ArcN * 68 ) + -68, &drc_callback );
                                if ( IsBad == 0 )
                                {
                                  if ( PCB->minWid <= arc->Thickness )
                                  {
                                    n += -1;
                                    if ( n != -1 )
                                    {
                                      PCB = &PCB->Data->ViaN;
                                    }
                                  }
                                  else
                                  {
                                    AddObjectToFlagUndoList( 16384, (void*)layer, (void*)arc, (void*)arc );
                                    arc->Flags.f |= TheFlag;
                                    DrawArc( layer, arc, 0 );
                                    drcerr_count++;
                                    thing_ptr1 = (void*)layer;
                                    thing_ptr2 = (void*)arc;
                                    thing_ptr3 = (void*)arc;
                                    thing_type = 16384;
                                    LocateError( &x, &y );
                                    BuildObjectList( &object_count, &object_id_list, &object_type_list );
                                    ebp_76 = object_id_list;
                                    ebp_68 = object_count;
                                    y = T/*.475*/( );
                                    violation = "Arc width is too thin";
                                    append_drc_violation( "Arc width is too thin" );
                                    pcb_drc_violation_free( violation );
                                    free( object_id_list );
                                    free( object_type_list );
                                    if ( throw_drc_dialog( ) == 0 )
                                      IsBad = 1;
                                    else
                                    {
                                      IncrementUndoSerialNumber( );
                                      Undo( 0 );
                                      n += -1;
                                      if ( n != -1 )
                                      {
                                        PCB = &PCB->Data->ViaN;
                                      }
                                    }
                                  }
                                  PCB = &PCB->Data->ViaN;
                                }
                              }
                            }
                            }
                          }
                        }
                      }
                    }
                    l++;
                    if ( PCB->Data->LayerN <= l )
                    {
                    }
                    else
                    {
                      layer++;
                    }
                  }
                }
                }
B46:;
                l = PCB->Data[5].name_tree[0][1].root + -1;
                if ( PCB->Data[5].name_tree[0][1].root + -1 != -1 )
                {
                  ebp_84 = ( PCB->Data[5].name_tree[0][1].root * 300 ) + -300;
                  while ( element = ebp_84 + PCB->Data->Element, element->PinN = *(int*)(ebp_84 + *(int*)(PCB->Data + 32) + 224), n = *(int*)(ebp_84 + *(int*)(PCB->Data + 32) + 224), element->PinN == 0 )
                  {
                    l += -1;
                    ebp_84 += -300;
                    if ( l == -1 )
                    {
                      if ( IsBad == 0 )
                      {
                      {
                        Cardinal n = PCB->Data->ElementN + -1;
                        ElementTypePtr element;
                        if ( n != -1 )
                        {
                          ebp_84 = n * 300;
                          while ( 1 )
                          {
                            Cardinal n;
                            Cardinal sn;
                            PadTypePtr pad;
                            element += PCB->Data->Element / 300;
                            n = 0;
                            ebp_68 = element->PadN;
                            while ( 1 )
                            {
                              sn = ebp_68;
                              do
                              {
                                if ( sn && n < sn )
                                {
                                  pad = element->Pad + 0;
                                  PlowsPolygon( &PCB->Data, 512, (void*)element, element->Pad + 0, &drc_callback );
                                  if ( IsBad == 0 )
                                  {
                                    if ( pad->Thickness < PCB->minWid )
                                    {
                                      AddObjectToFlagUndoList( 512, (void*)element, (void*)pad, (void*)pad );
                                      pad->Flags.f |= TheFlag;
                                      DrawPad( pad, 0 );
                                      drcerr_count++;
                                      thing_ptr1 = (void*)element;
                                      thing_ptr2 = (void*)pad;
                                      thing_ptr3 = (void*)pad;
                                      thing_type = 512;
                                      LocateError( &x, &y );
                                      BuildObjectList( &object_count, &object_id_list, &object_type_list );
                                      ebp_76 = object_count;
                                      y = T/*.475*/( );
                                      violation = "Pad is too thin";
                                      append_drc_violation( "Pad is too thin" );
                                      pcb_drc_violation_free( violation );
                                      free( object_id_list );
                                      free( object_type_list );
                                      if ( throw_drc_dialog( ) == 0 )
                                        IsBad = 1;
                                      else
                                      {
                                        IncrementUndoSerialNumber( );
                                        Undo( 0 );
                                        sn = element->PadN;
                                        if ( ebp_68 != element->PadN )
                                          continue;
                                      }
                                    }
                                    else
                                    {
                                      sn = element->PadN;
                                    }
                                  }
                                }
                                n += -1;
                                ebp_84 += -300;
                                if ( n != -1 )
                                {
                                  break;
                                  while ( 1 )
                                  {
                                    Cardinal n;
                                    Cardinal sn;
                                    PadTypePtr pad;
                                    element += PCB->Data->Element / 300;
                                    n = 0;
                                    ebp_68 = element->PadN;
                                    while ( 1 )
                                    {
                                      sn = ebp_68;
                                    }
                                  }
                                }
                                else
                                {
                                  if ( IsBad == 0 )
                                  {
                                  }
                                }
                              }
                              while ( ebp_68 != element->PadN );
                              n++;
                            }
                          }
                        }
                      }
                      }
                    }
                    else
                    {
                    }
                  }
                  n = 0;
                  while ( 1 )
                  {
                    pin = element->Pin + ( n * 76 );
                    PlowsPolygon( &PCB->Data[5].name_tree[0]->root, 256, (void*)element, element->Pin + ( n * 76 ), &drc_callback );
                    if ( IsBad == 0 )
                    {
                      if ( ( ( pin->Flags.f/*.1_1of4*/ & 8 ) & 255 ) == 0 )
                      {
                        ebp_76 = pin->Thickness - pin->DrillingHole;
                        if ( ebp_76 < ( PCB->minRing * 2 ) )
                        {
                          AddObjectToFlagUndoList( 256, (void*)element, (void*)pin, (void*)pin );
                          pin->Flags.f |= TheFlag;
                          DrawPin( pin, 0 );
                          drcerr_count++;
                          thing_ptr1 = (void*)element;
                          thing_ptr2 = (void*)pin;
                          thing_ptr3 = (void*)pin;
                          thing_type = 256;
                          LocateError( &x, &y );
                          BuildObjectList( &object_count, &object_id_list, &object_type_list );
                          ebp_76 = object_id_list;
                          ebp_68 = object_count;
                          y = T/*.475*/( );
                          violation = "Pin annular ring too small";
                          append_drc_violation( "Pin annular ring too small" );
                          violation = "Pin annular ring too small";
                          pcb_drc_violation_free( "Pin annular ring too small" );
                          free( object_id_list );
                          free( object_type_list );
                          if ( throw_drc_dialog( ) )
                          {
                            IncrementUndoSerialNumber( );
                            Undo( 0 );
                          }
                          else
                            IsBad = 1;
                        }
                        else
                        if ( pin->DrillingHole < PCB->minDrill )
                        {
                          AddObjectToFlagUndoList( 256, (void*)element, (void*)pin, (void*)pin );
                          pin->Flags.f |= TheFlag;
                          DrawPin( pin, 0 );
                          drcerr_count++;
                          thing_ptr1 = (void*)element;
                          thing_ptr2 = (void*)pin;
                          thing_ptr3 = (void*)pin;
                          thing_type = 256;
                          LocateError( &x, &y );
                          BuildObjectList( &object_count, &object_id_list, &object_type_list );
                          ebp_76 = object_id_list;
                          ebp_68 = object_count;
                          y = T/*.475*/( );
                          violation = "Pin drill size is too small";
                          append_drc_violation( "Pin drill size is too small" );
                          pcb_drc_violation_free( violation );
                          free( object_id_list );
                          free( object_type_list );
                          if ( throw_drc_dialog( ) )
                          {
                            IncrementUndoSerialNumber( );
                            Undo( 0 );
                            if ( element->PinN )
                            {
                              n = ( sn + n + 1 ) - n;
                              if ( sn <= ( sn + n + 1 ) - n )
                                continue;
                              else
                              {
                                n = sn;
                              }
                            }
                          }
                          else
                            IsBad = 1;
                        }
                        else
                        {
                          if ( element->PinN )
                          {
                            n = ( sn + n + 1 ) - n;
                          }
                        }
                      }
                      else
                      {
                      }
                      if ( pin->DrillingHole < PCB->minDrill )
                      {
                        AddObjectToFlagUndoList( 256, (void*)element, (void*)pin, (void*)pin );
                        pin->Flags.f |= TheFlag;
                        DrawPin( pin, 0 );
                        drcerr_count++;
                        thing_ptr1 = (void*)element;
                        thing_ptr2 = (void*)pin;
                        thing_ptr3 = (void*)pin;
                        thing_type = 256;
                        LocateError( &x, &y );
                        BuildObjectList( &object_count, &object_id_list, &object_type_list );
                        ebp_76 = object_id_list;
                        ebp_68 = object_count;
                        y = T/*.475*/( );
                        violation = "Pin drill size is too small";
                        append_drc_violation( "Pin drill size is too small" );
                        pcb_drc_violation_free( violation );
                        free( object_id_list );
                        free( object_type_list );
                      }
                      else
                      {
                      }
                    }
                  }
                }
                sn = PCB->Data->ViaN;
                if ( PCB->Data[5].name_tree[0]->root )
                {
                  n = 0;
                  while ( 1 )
                  {
                    via = PCB->Data->Via + ( n * 76 );
                    PlowsPolygon( &PCB->Data[5].name_tree[0]->root, 1, PCB->Data[5].name_tree[0][3].size + ( n * 76 ), PCB->Data[5].name_tree[0][3].size + ( n * 76 ), &drc_callback );
                    if ( IsBad == 0 )
                    {
                      if ( ( ( via->Flags.f/*.1_1of4*/ & 8 ) & 255 ) == 0 )
                      {
                        ebp_68 = via->Thickness - via->DrillingHole;
                        if ( via->Thickness - via->DrillingHole < ( PCB->minRing * 2 ) )
                        {
                          AddObjectToFlagUndoList( 1, (void*)via, (void*)via, (void*)via );
                          via->Flags.f |= TheFlag;
                          DrawVia( via, 0 );
                          drcerr_count++;
                          thing_ptr1 = (void*)via;
                          thing_ptr2 = (void*)via;
                          thing_ptr3 = (void*)via;
                          thing_type = 1;
                          LocateError( &x, &y );
                          BuildObjectList( &object_count, &object_id_list, &object_type_list );
                          ebp_76 = object_id_list;
                          n = object_count;
                          y = T/*.475*/( );
                          violation = "Via annular ring too small";
                          append_drc_violation( "Via annular ring too small" );
                          violation = "Via annular ring too small";
                          pcb_drc_violation_free( "Via annular ring too small" );
                          free( object_id_list );
                          free( object_type_list );
                          if ( throw_drc_dialog( ) )
                          {
                            IncrementUndoSerialNumber( );
                            Undo( 0 );
                          }
                          else
                            IsBad = 1;
                        }
                        else
                        if ( via->DrillingHole < PCB->minDrill )
                        {
                          AddObjectToFlagUndoList( 1, (void*)via, (void*)via, (void*)via );
                          via->Flags.f |= TheFlag;
                          DrawVia( via, 0 );
                          drcerr_count++;
                          thing_ptr1 = (void*)via;
                          thing_ptr2 = (void*)via;
                          thing_ptr3 = (void*)via;
                          thing_type = 1;
                          LocateError( &x, &y );
                          BuildObjectList( &object_count, &object_id_list, &object_type_list );
                          n = object_count;
                          y = T/*.475*/( );
                          violation = "Via drill size is too small";
                          append_drc_violation( "Via drill size is too small" );
                          pcb_drc_violation_free( violation );
                          free( object_id_list );
                          free( object_type_list );
                          if ( throw_drc_dialog( ) == 0 )
                            IsBad = 1;
                          else
                          {
                            IncrementUndoSerialNumber( );
                            Undo( 0 );
                            if ( PCB->Data->ViaN )
                            {
                              n = ( sn + n + 1 ) - sn;
                              if ( sn <= ( sn + n + 1 ) - PCB->ID )
                                goto B45;
                              else
                              {
                              }
                            }
                          }
                        }
                        else
                        {
                          if ( PCB->Data->ViaN )
                          {
                            n = ( sn + n + 1 ) - sn;
                          }
                        }
                      }
                      else
                      {
                      }
                      if ( via->DrillingHole < PCB->minDrill )
                      {
                        AddObjectToFlagUndoList( 1, (void*)via, (void*)via, (void*)via );
                        via->Flags.f |= TheFlag;
                        DrawVia( via, 0 );
                        drcerr_count++;
                        thing_ptr1 = (void*)via;
                        thing_ptr2 = (void*)via;
                        thing_ptr3 = (void*)via;
                        thing_type = 1;
                        LocateError( &x, &y );
                        BuildObjectList( &object_count, &object_id_list, &object_type_list );
                        n = object_count;
                        y = T/*.475*/( );
                        violation = "Via drill size is too small";
                        append_drc_violation( "Via drill size is too small" );
                        pcb_drc_violation_free( violation );
                        free( object_id_list );
                        free( object_type_list );
                      }
                      else
                      {
                      }
                    }
                  }
                }
              }
B45:;
              FreeConnectionLookupMemory( );
              Bloat = 0;
              fBloat = 0.0;
              TheFlag = 64;
              if ( IsBad == 0 )
              {
                Cardinal l = 0;
                LayerTypePtr layer;
                n = PCB->Data->Layer[ PCB->Data->LayerN ].Name;
              {
                while ( n = n + -1, n + -1 == -1 )
                {
                  l++;
                  if ( l == 2 )
                    goto B107;
                  else
                  {
                    n += 92;
                  }
                }
                do
                {
                  line = n + ( n * 88 ) + -88 + -88;
                  if ( line->Thickness < PCB->minSlk )
                  {
                    line->Flags.f |= TheFlag;
                    DrawLine( &n, line, 0 );
                    thing_ptr1 = &n;
                    drcerr_count++;
                    thing_ptr2 = (void*)line;
                    thing_ptr3 = (void*)line;
                    thing_type = 4;
                    LocateError( &x, &y );
                    BuildObjectList( &object_count, &object_id_list, &object_type_list );
                    ebp_76 = object_id_list;
                    ebp_68 = object_count;
                    y = T/*.475*/( );
                    violation = "Silk line is too thin";
                    append_drc_violation( "Silk line is too thin" );
                    pcb_drc_violation_free( violation );
                    free( object_id_list );
                    free( object_type_list );
                    if ( throw_drc_dialog( ) == 0 )
                    {
                      IsBad = 1;
                    }
                  }
                  n += -1;
                }
                while ( n + -1 != -1 );
              }
              }
B107:;
              TheFlag = 64;
              if ( IsBad == 0 )
              {
                Cardinal n = PCB->Data->ElementN + -1;
                ElementTypePtr element;
                if ( PCB->Data->ElementN + -1 != -1 )
                {
                  ebp_68 = ( PCB->Data->ElementN * 300 ) + -300;
                  while ( element = ebp_68 + PCB->Data->Element, element->LineN + -1 == -1 )
                  {
                    n += -1;
                    ebp_68 += -300;
                    if ( n == -1 )
                    {
                      if ( IsBad )
                        goto B120;
                      RestoreStackAndVisibility( );
                      hid_action( "LayersChanged" );
                      gui->invalidate_all( );
                      if ( nopastecnt )
                        Message( "Warning:  %d pad%s the nopaste flag set.\n", nopastecnt, nopastecnt != 1 ? " has" : "s have" );
                      if ( IsBad )
                        break;
                      break;
                    }
                    else
                    {
                    }
                  }
                  tmpcnt = 0;
                  element->LineN = element->Line + ( element->LineN * 88 ) + -52;
                  do
                  {
                    n += -1;
                    tmpcnt += *(int*)(element->Line + ( element->LineN * 88 ) + -52) < PCB->minSlk;
                    element->Line->BoundingBox.X1 = element->Line + ( element->LineN * 88 ) + -52 + -88;
                  }
                  while ( n + -1 != -1 );
                  if ( tmpcnt )
                  {
                    /* phantom */ char *title;
                    char *name;
                    /* phantom */ char *buffer;
                    /* phantom */ int buflen;
                    element->Flags.f |= TheFlag;
                    DrawElement( element, 0 );
                    drcerr_count++;
                    thing_ptr1 = (void*)element;
                    thing_ptr2 = (void*)element;
                    thing_ptr3 = (void*)element;
                    thing_type = 2;
                    LocateError( &x, &y );
                    BuildObjectList( &object_count, &object_id_list, &object_type_list );
                    name[0] = element->Name[1].TextString;
                    *ebp_136 = calloc( 1, element->Name[1].TextString == 0 || name[0] == 0 ? 64 : strlen( name ) + 55 );
                    __snprintf_chk( (char*)calloc( 1, element->Name[1].TextString == 0 || name[0] == 0 ? 64 : strlen( name ) + 55 ), element->Name[1].TextString == 0 || name[0] == 0 ? 64 : strlen( name ) + 55, 1, -1, "Element %s has %i silk lines which are too thin", name, tmpcnt );
                    y = T/*.475*/( );
                    violation = *ebp_136;
                    free( *ebp_136 );
                    append_drc_violation( violation );
                    pcb_drc_violation_free( violation );
                    free( object_id_list );
                    free( object_type_list );
                    if ( throw_drc_dialog( ) == 0 )
                      IsBad = 1;
                  }
                }
              }
B120:;
              IncrementUndoSerialNumber( );
            }
          }
          n += element->PadN == sn;
        }
        if ( IsBad )
          continue;
        else
        {
          n += -1;
          ebp_76 += -300;
          if ( n == -1 )
          {
          }
          else
          {
          }
        }
      }
    }
    n = 0;
    while ( 1 )
    {
      pin = element->Pin + ( n * 76 );
      if ( ( pin->Flags.f/*.2_2of4*/ & 16 ) & 255 )
      {
        if ( element->PinN == 0 )
          continue;
      }
      else
      {
        if ( ( DRCFind( 256, (void*)element, (void*)pin, (void*)pin ) & 255 ) == 0 )
        {
          sn = element->PinN;
          if ( element->PinN == 0 )
            continue;
        }
      }
      n = ( sn + n + 1 ) - sn;
      if ( sn <= ( sn + n + 1 ) - element->PinN )
        continue;
      else
      {
        sn = element->PinN;
      }
    }
  }
  else
  {
    nopastecnt = 0;
    if ( IsBad == 0 )
      goto B305;
  }
B305:;
  sn = PCB->Data->ViaN;
  if ( PCB->Data->ViaN )
  {
    n = 0;
    while ( 1 )
    {
      via = PCB->Data->Via + ( n * 76 );
      if ( ( via->Flags.f/*.2_2of4*/ & 16 ) & 255 )
      {
        sn = PCB->Data->ViaN;
        if ( PCB->Data->ViaN == 0 )
        {
          TheFlag = 4096;
          ResetConnections( 0 );
          TheFlag = 64;
        }
      }
      else
      {
        if ( ( DRCFind( 1, (void*)via, (void*)via, (void*)via ) & 255 ) == 0 )
        {
          if ( PCB->Data->ViaN == 0 )
            continue;
        }
      }
      n = ( sn + n + 1 ) - sn;
      if ( sn <= ( sn + n + 1 ) - PCB->Data->ViaN )
        continue;
      else
      {
      }
    }
  }
  TheFlag = 4096;
  ResetConnections( 0 );
  TheFlag = 64;
}
}
void LocateError( LocationType *x, LocationType *y )
{
  int eax;
  switch ( thing_type )
  {
  case 8:
    x[0] = ((int*)thing_ptr3) / ((int*)thing_ptr3);
    break;
  case 1:
  case 256:
  case 16384:
  {
    PinTypePtr pin = &thing_ptr3[0];
    x[0] = ((int*)thing_ptr3);
    y[0] = ((int*)thing_ptr3);
  }
  case 4:
  case 512:
  {
    PadTypePtr pad = &thing_ptr3[0];
    x[0] = ((int*)thing_ptr3) / ((int*)thing_ptr3);
  }
    break;
  case 2:
  {
    ElementTypePtr element = &thing_ptr3[0];
    x[0] = ((int*)thing_ptr3);
    y[0] = ((int*)thing_ptr3);
    return;
  }
    break;
    return;
    break;
  default:
    return;
    break;
  }
{
  PolygonTypePtr polygon;
  y[0] = ( pad->Point2.Y + pad->Point1.Y ) / 2;
  return;
}
}
void BuildObjectList( int *object_count, long **object_id_list, int **object_type_list )
{
  int esi;
  object_count[0] = 0;
  object_id_list[0] = 0;
  switch ( thing_type )
  {
  case 256:
    object_type_list[0] = &object_type_list;
    object_count[0] = 1;
    object_id_list[0] = calloc( 1, sizeof( long ) );
    object_type_list[0] = calloc( 1, sizeof( int ) );
    object_id_list[0] = &((int*)thing_ptr3);
    object_count[0] = thing_type;
    break;
  case 4:
    object_type_list[0] = &object_type_list;
    object_count[0] = 1;
    object_id_list[0] = calloc( 1, sizeof( long ) );
    object_type_list[0] = calloc( 1, sizeof( int ) );
    object_id_list[0] = &((int*)thing_ptr3);
    object_count[0] = thing_type;
    break;
  default:
    object_count[0] = 1;
    object_id_list[0] = calloc( 1, sizeof( long ) );
    object_type_list[0] = calloc( 1, sizeof( int ) );
    object_id_list[0] = &((int*)thing_ptr3);
    object_count[0] = thing_type;
    break;
  case 0:
//  case 4:
//  case 256:
    break;
  }
  return;
}
void InitConnectionLookup( void )
{
  InitComponentLookup( );
}
void FreeConnectionLookupMemory( void )
{
  FreeComponentLookupMemory( );
}
#if 0
#endif
