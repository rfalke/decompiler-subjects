#include "draw.c.h"
static BoxType Block;
static Boolean Gathering = 1;
static int Erasing;
static int doing_pinout;
static int doing_assy;
static BoxType *clip_box;
static void *T/*.296*/ = 0;
void SetPVColor( PinTypePtr Pin, int Type )
{
  int eax;
  char *color;
  if ( Type == 1 )
  {
    if ( doing_pinout == 0 && ( Pin->Flags.f & 580 ) )
    {
      if ( ( ( Pin->BoundingBox.X1 & 2 ) & 255 ) == 0 )
      {
        if ( ( Pin->Flags.f & 64 ) & 255 )
          color[0] = PCB->ViaSelectedColor;
          gui->set_color( Output.fgGC, color );
          return;
      }
      else
        color[0] = PCB->WarnColor;
    }
    else
      color[0] = PCB->ViaColor;
  }
  else
  if ( doing_pinout == 0 && ( Pin->Flags.f & 580 ) )
  {
    if ( ( Pin->BoundingBox.X1 & 2 ) & 255 )
      color[0] = PCB->WarnColor;
    else
    if ( ( Pin->Flags.f & 64 ) & 255 )
      color[0] = PCB->PinSelectedColor;
  }
  else
    color[0] = PCB->PinColor;
  color[0] = PCB->ConnectedColor;
}
void UpdateAll( void )
{
  ;
}
void Draw( void )
{
  render = 1;
  HideCrosshair( 1 );
  gui->invalidate_lr( Block.X1, Block.X2, Block.Y1, Block.Y2 );
  RestoreCrosshair( 1 );
  Block.Y2 = 0;
  Block.X2 = 0;
  Block.Y1 = 0;
  Block.X1 = 0;
  return;
}
void RedrawOutput( BoxTypePtr area )
{
  gui->invalidate_all( );
  Gathering = 1;
  render = 0;
  return;
}
void ClearAndRedrawOutput( void )
{
  render = 1;
  Gathering = 0;
  ;
}
int backE_callback( BoxType *b, void *cl )
{
  int ecx;
  /* phantom */ ElementTypePtr element;
  if ( Settings.ShowSolderSide != ( ( b[1].Y1 >> 7 ) & 1 ) )
  {
    DrawElementPackage( &b[0].X1, 0 );
  }
  return 1;
}
int backN_callback( BoxType *b, void *cl )
{
  /* phantom */ TextTypePtr text;
  ElementTypePtr element = &b[3].X2;
  if ( Settings.ShowSolderSide != ( ( element->Flags.f >> 7 ) & 1 ) && ( element->Flags.f & 16 ) == 0 )
  {
    DrawElementName( element, 0 );
    return 0;
  }
  return 0;
}
int backPad_callback( BoxType *b, void *cl )
{
  int ecx;
  /* phantom */ PadTypePtr pad;
  if ( Settings.ShowSolderSide != ( ( b[1].Y1 >> 7 ) & 1 ) )
  {
    DrawPad( &b[0].X1, 0 );
  }
  return 1;
}
int frontE_callback( BoxType *b, void *cl )
{
  int ecx;
  /* phantom */ ElementTypePtr element;
  if ( Settings.ShowSolderSide == ( ( b[1].Y1 >> 7 ) & 1 ) )
  {
    DrawElementPackage( &b[0].X1, 0 );
    return 1;
  }
  return 1;
}
int EMark_callback( BoxType *b, void *cl )
{
  int eax;
  int ecx;
  int edx;
  /* phantom */ ElementTypePtr element;
  if ( ( ( ( ( b[1].Y1 >> 7 ) & 1 ) != Settings.ShowSolderSide ) & 255 ) && PCB->InvisibleObjectsOn == 0 )
  {
    return 1;
  }
  edx( Output.fgGC, ( ( ( b[1].Y1 >> 7 ) & 1 ) != Settings.ShowSolderSide ) & 255 ? PCB->InvisibleMarkColor : PCB->ElementColor );
  gui->set_line_cap( (long long)( Output.fgGC ), ebp_28, ebp_28 );
  gui->set_line_width( (long long)( Output.fgGC ) );
  gui->draw_line( Output.fgGC, b[13].X2 - ( ( ( b[16].Y1 + ( b[16].Y1 >> 31 ) ) >> 1 ) >= 1000 ? ( b[16].Y1 + ( b[16].Y1 >> 31 ) ) >> 1 : 1000 ), b[13].Y2, b[13].X2 );
  gui->draw_line( Output.fgGC, b[13].X2 + ( ( ( b[16].Y1 + ( b[16].Y1 >> 31 ) ) >> 1 ) >= 1000 ? ( b[16].Y1 + ( b[16].Y1 >> 31 ) ) >> 1 : 1000 ), b[13].Y2, b[13].X2 );
  gui->draw_line( Output.fgGC, b[13].X2 - ( ( ( b[16].Y1 + ( b[16].Y1 >> 31 ) ) >> 1 ) >= 1000 ? ( b[16].Y1 + ( b[16].Y1 >> 31 ) ) >> 1 : 1000 ), b[13].Y2, b[13].X2 );
  gui->draw_line( Output.fgGC, b[13].X2 + ( ( ( b[16].Y1 + ( b[16].Y1 >> 31 ) ) >> 1 ) >= 1000 ? ( b[16].Y1 + ( b[16].Y1 >> 31 ) ) >> 1 : 1000 ), b[13].Y2, b[13].X2 );
  return 1;
}
int frontN_callback( BoxType *b, void *cl )
{
  /* phantom */ TextTypePtr text;
  ElementTypePtr element = &b[3].X2;
  if ( ( ( element->Flags.f >> 7 ) & 1 ) == Settings.ShowSolderSide && ( element->Flags.f & 16 ) == 0 )
  {
    DrawElementName( element, 0 );
    return 0;
  }
  return 0;
}
int hole_callback( BoxType *b, void *cl )
{
  int eax;
  /* phantom */ PinTypePtr pin;
  /* phantom */ int plated;
  if ( cl )
  {
    if ( *(int*)(cl) )
    {
      if ( cl == 1 )
      {
        if ( ( b[1].Y1/*.1_1of4*/ & 8 ) & 255 )
        {
          return 1;
        }
        if ( ( PCB->Flags.f/*.2_2of4*/ & 64 ) & 255 )
        {
          if ( ( ( (unsigned char)( b[1].Y1 ) & 8 ) & 255 ) == 0 )
          {
            gui->set_line_cap( Output.fgGC, 2 );
            gui->set_line_width( (long long)( Output.fgGC ) );
            gui->draw_arc( Output.fgGC, b[3].Y1, b[3].X1 / 2 );
            if ( ( ( (unsigned char)( b[1].Y1 ) & 8 ) & 255 ) == 0 )
            {
              return 1;
            }
            if ( ( ah & 2 ) & 255 )
            {
            }
            else
            if ( ( cl & 64 ) & 255 )
            {
            }
            else
            {
            }
            gui->set_color( Output.fgGC, Settings.BlackColor );
            gui->set_line_cap( Output.fgGC, 2 );
            gui->set_line_width( (long long)( Output.fgGC ) );
            gui->draw_arc( Output.fgGC, b[3].Y1, b[3].X1 / 2 );
            return 1;
          }
          else
          {
          }
        }
        else
          gui->fill_circle( Output.bgGC, b[3].Y1, b[3].X1 / 2 );
      }
    }
    else
    if ( ( ( b[1].Y1/*.1_1of4*/ & 8 ) & 255 ) == 0 )
    {
      return 1;
    }
  }
  if ( ( PCB->Flags.f/*.2_2of4*/ & 64 ) & 255 )
  {
  }
  else
    gui->fill_circle( Output.bgGC, b[3].Y1, b[3].X1 / 2 );
}
int hole_counting_callback( BoxType *b, void *cl )
{
  int eax;
  /* phantom */ PinTypePtr pin;
  /* phantom */ HoleCountStruct *hcs;
  if ( ( b[1].Y1/*.1_1of4*/ & 8 ) & 255 )
  {
    ((int*)cl) = cl[1] + 1;
    return 1;
  }
  *(int*)(cl) = ((int*)cl);
  return 1;
}
int rat_callback( BoxType *b, void *cl )
{
  DrawRat( &b->X1, 0 );
  return 1;
}
int lowvia_callback( BoxType *b, void *cl )
{
  /* phantom */ PinTypePtr via;
  if ( b[2].Y2 == 0 )
  {
    T/*.296*/( );
  }
  return 1;
}
void PrintAssembly( BoxType *drawn_area, int side_group, int swap_ident )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  /* phantom */ int save_swap;
  drawn_area = drawn_area;
  gui->set_draw_faded( Output.fgGC, 1, drawn_area, esi );
  Settings.ShowSolderSide = swap_ident;
  DrawLayerGroup( side_group, drawn_area );
  r_search( &PCB->Data->via_tree, drawn_area, 0, &lowvia_callback, 0 );
  DrawTop( drawn_area );
  gui->set_draw_faded( (long long)( Output.fgGC ) );
  DrawSilk( swap_ident, swap_ident == 0, drawn_area );
  Settings.ShowSolderSide = drawn_area;
  return;
}
int via_callback( BoxType *b, void *cl )
{
  /* phantom */ PinTypePtr via;
  if ( b[2].Y2 )
  {
    T/*.296*/( );
  }
  return 1;
}
int pin_callback( BoxType *b, void *cl )
{
  int eax;
  if ( Gathering == 0 )
    SetPVColor( &b[0].X1, 256 );
  DrawPinOrViaLowLevel( &b[0].X1, 0 );
  if ( ( b[1].Y1 & 40 ) != 32 )
  {
    return 1;
  }
  DrawPinOrViaNameLowLevel( &b[0].X1 );
  return 1;
}
int pad_callback( BoxType *b, void *cl )
{
  int ecx;
  /* phantom */ PadTypePtr pad;
  if ( Settings.ShowSolderSide == ( ( b[1].Y1 >> 7 ) & 1 ) )
  {
    DrawPad( &b[0].X1, 0 );
    return 1;
  }
  return 1;
}
void DrawTop( BoxType *screen )
{
  if ( PCB->PinOn || doing_assy )
  {
    r_search( &PCB->Data->pin_tree, screen, 0, &pin_callback, 0 );
    r_search( &PCB->Data->pad_tree, screen, 0, &pad_callback, 0 );
  }
  if ( PCB->ViaOn || doing_assy )
  {
    r_search( &PCB->Data->via_tree, screen, 0, &via_callback, 0 );
    r_search( &PCB->Data->via_tree, screen, 0, &hole_callback, 0 );
  }
  if ( PCB->PinOn || doing_assy )
  {
    r_search( &PCB->Data->pin_tree, screen, 0, &hole_callback, 0 );
  }
  return;
}
int clearPin_callback( BoxType *b, void *cl )
{
  int eax;
  int ecx;
  int edx;
  int dh;
  int ebx;
  int edi;
  /* phantom */ PinTypePtr pin;
  /* phantom */ struct pin_info *i;
  if ( ((int*)cl) == 0 || b[2].Y2 / 2 == 0 )
  {
    return 1;
  }
  if ( ( dh & 1 ) & 255 )
  {
    if ( PCB->Flags.f & 0x24000 )
    {
      gui->set_line_cap( Output.pmGC, 2, ( ( b[2].Y2 / 2 ) * 2 ) + ( b[3].X2 - ( b[2].Y2 / 2 ) ) );
      gui->set_line_width( (long long)( Output.pmGC ) );
      gui->draw_line( Output.pmGC, ( ( b[2].Y2 / 2 ) * 2 ) + ( *(int*)(( b[3].X2 - ( b[2].Y2 / 2 ) ) + 52) - ( b[2].Y2 / 2 ) ), ( ( b[2].Y2 / 2 ) * 2 ) + ( b[3].X2 - ( b[2].Y2 / 2 ) ), ( ( b[2].Y2 / 2 ) * 2 ) + ( *(int*)(( b[3].X2 - ( b[2].Y2 / 2 ) ) + 52) - ( b[2].Y2 / 2 ) ) );
      gui->draw_line( Output.pmGC, b[3].Y1 - ( b[2].Y2 / 2 ), ( ( b[2].Y2 / 2 ) * 2 ) + ( b[3].X2 - ( b[2].Y2 / 2 ) ), b[3].Y1 - ( b[2].Y2 / 2 ) );
      gui->draw_line( Output.pmGC, ( ( b[2].Y2 / 2 ) * 2 ) + ( *(int*)(( b[3].X2 - ( b[2].Y2 / 2 ) ) + 52) - ( b[2].Y2 / 2 ) ), ( ( b[2].Y2 / 2 ) * 2 ) + ( b[3].X2 - ( b[2].Y2 / 2 ) ), b[3].Y1 - ( b[2].Y2 / 2 ) );
      gui->draw_line( Output.pmGC, ( ( b[2].Y2 / 2 ) * 2 ) + ( *(int*)(( b[3].X2 - ( b[2].Y2 / 2 ) ) + 52) - ( b[2].Y2 / 2 ) ), b[3].X2 - ( b[2].Y2 / 2 ), b[3].Y1 - ( b[2].Y2 / 2 ) );
    }
    gui->fill_rect( Output.pmGC, b[3].Y1 - ( b[2].Y2 / 2 ), b[3].X2 - ( b[2].Y2 / 2 ), ( ( b[2].Y2 / 2 ) * 2 ) + ( *(int*)(( b[3].X2 - ( b[2].Y2 / 2 ) ) + 52) - ( b[2].Y2 / 2 ) ) );
  }
  else
  if ( ( dh & 8 ) & 255 )
  {
    gui->set_line_cap( Output.pmGC, 2, b[2].Y2 / 2 );
    gui->set_line_width( Output.pmGC, ( b[2].X2 + b[2].Y1 ) - b[3].X1 );
    DrawSpecialPolygon( gui, &Output.pmGC, b[3].Y1, b[3].X2, ( b[2].Y2 / 2 ) * 2 );
  }
  if ( PCB->Flags.f & 0x24000 )
  {
    gui->draw_arc( Output.pmGC, b[3].Y1, b[2].Y2 / 2 );
  }
  gui->fill_circle( Output.pmGC, b[3].Y1, b[2].Y2 / 2 );
  return 1;
}
int poly_callback( BoxType *b, void *cl )
{
  int eax;
  /* phantom */ struct pin_info *i;
  if ( b[2].Y2 == 0 )
    goto B2;
  else
  if ( Gathering )
  {
    Block.X1 = Block.X1 <= b ? b : Block.X1;
    Block.X2 = (unsigned char)( ( Block.X2 < b->X2 ) ^ 1 ) ? b->X2 : Block.X2;
    Block.Y1 = Block.Y1 <= b->Y1 ? b->Y1 : Block.Y1;
    Block.Y2 = (unsigned char)( ( Block.Y2 < b->Y2 ) ^ 1 ) ? b->Y2 : Block.Y2;
  }
  else
  {
    if ( ( (unsigned char)( b[1].Y1 ) & 64 ) & 255 )
      color = &((int*)cl);
    else
    if ( b[1].Y1 & 4 )
      color = &PCB->ConnectedColor;
    else
      color = &((int*)cl);
    gui->set_color( Output.fgGC, ((int*)cl) );
    if ( gui->thindraw_pcb_polygon == 0 || ( PCB->Flags.f & 0x24000 ) == 0 )
    {
      ;
    }
    edx( Output.fgGC, b, clip_box );
    if ( gui->thindraw_pcb_polygon && ( ( PCB->Flags.f/*.1_1of4*/ & 4 ) & 255 ) )
    {
    }
  }
B2:;
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return 1;
}
int clearPad_callback( BoxType *b, void *cl )
{
  int eax;
  /* phantom */ PadTypePtr pad;
  if ( b[1].Y1/*.1_1of4*/ >= 0 )
  {
    if ( Settings.ShowSolderSide )
    {
      return 1;
    }
  }
  else
  if ( Settings.ShowSolderSide == 0 )
  {
    return 1;
  }
  DrawPadLowLevel( &Output.pmGC, &b[0].X1, 1, 1 );
  return 1;
}
void DrawSilk( int new_swap, int layer, BoxTypePtr drawn_area )
{
  int eax;
  /* phantom */ int save_swap;
  Settings.ShowSolderSide = new_swap/*.1_1of4*/;
  DrawLayer( &PCB->Data->Layer[ PCB->Data->LayerN + layer ], drawn_area );
  r_search( &PCB->Data->element_tree, drawn_area, 0, &frontE_callback, 0 );
  r_search( &PCB->Data->pad_tree, drawn_area, 0, &frontN_callback, 0 );
  Settings.ShowSolderSide = Settings.ShowSolderSide;
  return;
}
void DrawMask( BoxType *screen )
{
  int edx;
  struct pin_info info;
  /* phantom */ int thin;
  /* phantom */ OutputType *out;
  info.arg = 1;
  if ( PCB->Flags.f & 0x24000 )
  {
    gui->set_color( Output.pmGC, *(int*)(gui + 96), ebp_8 );
    r_search( &PCB->Data->pin_tree, screen, 0, &clearPin_callback, &info.arg );
    r_search( &PCB->Data->via_tree, screen, 0, &clearPin_callback, &info.arg );
    r_search( &PCB->Data->pad_tree, screen, 0, &clearPad_callback, &info.arg );
    gui->set_color( Output.pmGC, "erase" );
    return;
  }
  if ( ( gui->bits_at_12 & 8 ) & 255 )
  {
    ;
  }
  ;
}
int line_callback( BoxType *b, void *cl )
{
  DrawLine( &cl[0], &b->X1, 0 );
  return 1;
}
int arc_callback( BoxType *b, void *cl )
{
  DrawArc( &cl[0], &b->X1, 0 );
  return 1;
}
int text_callback( BoxType *b, void *cl )
{
  int eax;
  int ebx;
  gui->set_color( Output.fgGC, ( b[1].Y1/*.1_1of4*/ & 64 ) & 255 ? cl[19] : cl[18] );
  DrawTextLowLevel( &b->X1, PCB->Data->Layer[ PCB->Data->LayerN + ( ( Settings.ShowSolderSide == 0 ) & 255 ) ].Name == cl || cl == PCB->Data + ( ( PCB->Data->LayerN + ( ( ( Settings.ShowSolderSide & 255 ) != 0 ) & 255 ) ) * 92 ) + 76 ? PCB->minSlk : PCB->minWid );
  return 1;
}
void DrawLayer( LayerTypePtr Layer, BoxType *screen )
{
  struct pin_info info;
  info.arg = 0;
  info.Layer = Layer;
  clip_box = screen;
  r_search( &Layer->polygon_tree, screen, 0, &poly_callback, &info.arg );
  r_search( &Layer->line_tree, screen, 0, &line_callback, (void*)Layer );
  r_search( &Layer->arc_tree, screen, 0, &arc_callback, (void*)Layer );
  r_search( &Layer->text_tree, screen, 0, &text_callback, (void*)Layer );
  clip_box = 0;
  return;
}
int DrawLayerGroup( int group, BoxType *screen )
{
  int eax;
  int ecx;
  int edx;
  int ebp_48;
  int i, rv = 1;
  /* phantom */ int layernum;
  struct pin_info info;
  LayerTypePtr Layer;
  int n_entries;
  static Cardinal *layers;
  layers[0] = PCB->LayerGroups.Number[ ( layers << 4 ) + 16 ];
  n_entries = PCB->LayerGroups.Number[ layers ];
  clip_box = screen;
  i = PCB->LayerGroups.Number[ layers ] + -1;
  if ( PCB->LayerGroups.Number[ layers ] + -1 >= 0 )
  {
    ebp_48 = PCB->LayerGroups.Number[ ( group << 4 ) + 16 ] + ( ( PCB->LayerGroups.Number[ layers ] + -1 ) << 2 );
    while ( 1 )
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      strcmp( "outline", &PCB->Data->Layer->Name );
      if ( 1 )
        goto B7;
      else
      {
        /* phantom */ size_t __s1_len;
        /* phantom */ size_t __s2_len;
        strcmp( "route", &PCB->Data->Layer->Name );
        if ( 1 )
          goto B7;
        else
        {
          if ( *ebp_48 < PCB->Data->LayerN && PCB->Data->Layer->On )
          {
            Layer = PCB->Data + ( *ebp_48 * 92 ) + 76;
            if ( PCB->Data->Layer->PolygonN )
            {
              info.arg = 1;
              info.Layer = Layer;
              r_search( &PCB->Data->Layer->polygon_tree, screen, 0, &poly_callback, &info.arg );
              info.arg = 0;
            }
            if ( ( *(char*)(PCB + 4) & 4 ) & 255 )
            {
            }
            else
            {
              r_search( &PCB->Data->Layer->line_tree, screen, 0, &line_callback, (void*)Layer );
              r_search( &PCB->Data->Layer->arc_tree, screen, 0, &arc_callback, (void*)Layer );
              r_search( &PCB->Data->Layer->text_tree, screen, 0, &text_callback, (void*)Layer );
            }
          }
          ebp_48 += -4;
          i += -1;
          if ( i + -1 < 0 )
            break;
        }
      }
B7:;
      rv = 0;
    }
  }
  rv = n_entries < 2 ? 1 : rv;
  return n_entries < 2 ? 1 : rv;
}
void DrawSpecialPolygon( HID *hid, hidGC DrawGC, LocationType X, LocationType Y, int Thickness )
{
  double fp5;
  double fp7;
  static FloatPolyType p[8] = { { 0.500000000000, -0.207106781000 }
, { 0.207106781000, -0.500000000000 }
, { -0.207106781000, -0.500000000000 }
, { -0.500000000000, -0.207106781000 }
, { -0.500000000000, 0.207106781000 }
, { -0.207106781000, 0.500000000000 }
, { 0.207106781000, 0.500000000000 }
, { 0.500000000000, 0.207106781000 }
 };
  static int special_size;
  static int scaled_x[8];
  static int scaled_y[8];
  int polygon_x[9];
  int polygon_y[9];
  int i;
  if ( special_size != Thickness )
  {
    special_size = Thickness;
    do
    {
      scaled_x[ 0 >> 2 ] = (int)( 0.000000000000 );
      scaled_y[ 0 >> 2 ] = (int)( 0.000000000000 );
    }
    while ( 0 + 4 + 4 != 32 );
  }
  i = 0;
  do
  {
    polygon_x[0] = scaled_x[ i ] + X;
    polygon_y[0] = scaled_y[ i ] + Y;
    i++;
  }
  while ( i + 1 != 8 );
  if ( ( PCB->Flags.f/*.2_2of4*/ & 64 ) & 255 )
  {
    int i;
    ;
  }
  ;
}
void DrawPinOrViaLowLevel( PinTypePtr Ptr, Boolean drawHole )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  if ( !1 )
  {
    Block.X1 = Block.X1 <= Ptr ? Ptr : Block.X1;
    Block.X2 = (unsigned char)( ( Block.X2 < Ptr->BoundingBox.X2 ) ^ 1 ) ? Ptr->BoundingBox.X2 : Block.X2;
    Block.Y1 = Block.Y1 <= Ptr->BoundingBox.Y1 ? Ptr->BoundingBox.Y1 : Block.Y1;
    Block.Y2 = (unsigned char)( ( Block.Y2 < Ptr->BoundingBox.Y2 ) ^ 1 ) ? Ptr->BoundingBox.Y2 : Block.Y2;
  }
  else
  {
    if ( ( (unsigned char)( *(int*)(&Ptr->Flags.f) ) & 8 ) & 255 )
    {
      if ( ( drawHole & 255 ) == 0 )
      {
        return;
      }
      gui->fill_circle( Output.bgGC, Ptr->X, Ptr->Thickness / 2 );
      gui->set_line_cap( Output.fgGC, 2 );
      gui->set_line_width( (long long)( Output.fgGC ) );
    }
    else
    {
      if ( ( ah & 1 ) & 255 )
      {
        int l = Ptr->X + ( 0 - ( Ptr->Thickness / 2 ) ), r, t, b = Ptr->Y + ( 0 - ( Ptr->Thickness / 2 ) );
        r = Ptr->Thickness + Ptr->X + ( 0 - ( Ptr->Thickness / 2 ) );
        t = Ptr->Thickness + Ptr->Y + ( 0 - ( Ptr->Thickness / 2 ) );
        if ( ( PCB->Flags.f/*.2_2of4*/ & 64 ) & 255 )
        {
          gui->set_line_cap( Output.fgGC, 2, r, b );
          gui->set_line_width( (long long)( Output.fgGC ) );
          gui->draw_line( Output.fgGC, r, t, r );
          gui->draw_line( Output.fgGC, l, t, l );
          gui->draw_line( Output.fgGC, r, t, l );
          gui->draw_line( Output.fgGC, r, b, l );
        }
        else
          gui->fill_rect( Output.fgGC, l, b, r );
      }
      else
      if ( ( ah & 8 ) & 255 )
      {
        gui->set_line_cap( Output.fgGC, 2 );
        gui->set_line_width( Output.fgGC, ( Ptr->Thickness - Ptr->DrillingHole ) / 2 );
        DrawSpecialPolygon( gui, &Output.fgGC, Ptr->X, Ptr->Y, Ptr->Thickness );
      }
      else
      if ( ( PCB->Flags.f/*.2_2of4*/ & 64 ) & 255 )
      {
        gui->set_line_cap( Output.fgGC, 2, ebp_12, ebp_8 );
        gui->set_line_width( (long long)( Output.fgGC ) );
        gui->draw_arc( Output.fgGC, Ptr->X, Ptr->Thickness / 2 );
      }
      else
        gui->fill_circle( Output.fgGC, Ptr->X, Ptr->Thickness / 2 );
      if ( ( drawHole & 255 ) == 0 )
      {
        return;
      }
      if ( ( PCB->Flags.f/*.2_2of4*/ & 64 ) & 255 )
      {
        gui->set_line_cap( Output.fgGC, 2 );
        gui->set_line_width( (long long)( Output.fgGC ) );
      }
      else
      {
        gui->fill_circle( Output.bgGC, Ptr->X, Ptr->DrillingHole / 2 );
      }
    }
    gui->draw_arc( Output.fgGC, Ptr->X, 0 );
  }
  return;
}
void ClearPin( PinTypePtr Pin, int Type, int unused )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  /* phantom */ BDimension half;
  if ( Gathering )
  {
    Block.X1 = Block.X1 <= Pin->BoundingBox.X1 ? Pin->BoundingBox.X1 : Block.X1;
    Block.X2 = (unsigned char)( ( Block.X2 < Pin->BoundingBox.X2 ) ^ 1 ) ? Pin->BoundingBox.X2 : Block.X2;
    Block.Y1 = Block.Y1 <= Pin->BoundingBox.Y1 ? Pin->BoundingBox.Y1 : Block.Y1;
    Block.Y2 = (unsigned char)( ( Block.Y2 < Pin->BoundingBox.Y2 ) ^ 1 ) ? Pin->BoundingBox.Y2 : Block.Y2;
    return;
  }
  else
  {
    Pin->Clearance = ( Pin->Clearance + Pin->Thickness ) / 2;
    if ( ( ah & 1 ) & 255 )
    {
      int l, r, t, b = Pin->Y - ( ( Pin->Clearance + Pin->Thickness ) / 2 );
      gui->fill_rect( Output.pmGC, Pin->X - ( ( Pin->Clearance + Pin->Thickness ) / 2 ), Pin->Y - ( ( Pin->Clearance + Pin->Thickness ) / 2 ), ( ( ( Pin->Clearance + Pin->Thickness ) / 2 ) * 2 ) + ( Pin->X - ( ( Pin->Clearance + Pin->Thickness ) / 2 ) ) );
    }
    else
    if ( ( ah & 8 ) & 255 )
    {
      gui->set_line_cap( Output.pmGC, 2, ebp_12, ebp_8 );
      gui->set_line_width( Output.pmGC, ( ( Pin->Clearance + Pin->Thickness ) - Pin->DrillingHole ) / 2 );
      DrawSpecialPolygon( gui, &Output.pmGC, Pin->X, Pin->Y, ( ( Pin->Clearance + Pin->Thickness ) / 2 ) * 2 );
    }
    else
      gui->fill_circle( Output.pmGC, Pin->X, ( Pin->Clearance + Pin->Thickness ) / 2 );
    if ( ( ( Pin->Flags.f/*.1_1of4*/ & 1 ) & 255 ) == 0 )
    {
      if ( PCB->ViaOn == 0 )
      {
        return;
      }
      if ( Type == 1 )
      {
        SetPVColor( Pin, Type );
      }
    }
    else
    if ( PCB->PinOn == 0 )
    {
      return;
    }
    if ( Type == 1 )
    {
      SetPVColor( Pin, Type );
    }
    if ( Type == 256 )
    {
      SetPVColor( Pin, Type );
    }
    return;
  }
}
void DrawPinOrViaNameLowLevel( PinTypePtr Ptr )
{
  int ecx;
  int edx;
  char *name;
  /* phantom */ BoxType box;
  Boolean vert;
  TextType text;
  name[0] = Ptr->Name;
  vert = ( Ptr->Flags.f >> 14 ) & 1;
  if ( ( Ptr->Flags.f >> 14 ) & 1 )
  {
    if ( Gathering )
    {
      Block.X1 = ( Ptr->X + Settings.PinoutTextOffsetY ) - ( Ptr->Thickness / 2 ) <= Block.X1 ? Block.X1 : ( Ptr->X + Settings.PinoutTextOffsetY ) - ( Ptr->Thickness / 2 );
      Block.X2 = ( Ptr->X + Settings.PinoutTextOffsetY ) - ( Ptr->Thickness / 2 ) < Block.X2 ? ( Ptr->X + Settings.PinoutTextOffsetY ) - ( Ptr->Thickness / 2 ) : Block.X2;
      Block.Y1 = Ptr->Y + ( 0 - ( Ptr->DrillingHole / 2 ) - Settings.PinoutTextOffsetX ) <= Block.Y1 ? Block.Y1 : Ptr->Y + ( 0 - ( Ptr->DrillingHole / 2 ) - Settings.PinoutTextOffsetX );
      Block.Y2 = Ptr->Y + ( 0 - ( Ptr->DrillingHole / 2 ) - Settings.PinoutTextOffsetX ) < Block.Y2 ? Ptr->Y + ( 0 - ( Ptr->DrillingHole / 2 ) - Settings.PinoutTextOffsetX ) : Block.Y2;
      if ( 0 ^ 0 )
      {
        __stack_chk_fail( );
      }
      return;
    }
  }
  else
  if ( Gathering )
  {
    Block.X1 = ( Ptr->X + Settings.PinoutTextOffsetY ) - ( Ptr->Thickness / 2 ) <= Block.X1 ? Block.X1 : ( Ptr->X + Settings.PinoutTextOffsetY ) - ( Ptr->Thickness / 2 );
    Block.X2 = ( Ptr->X + Settings.PinoutTextOffsetY ) - ( Ptr->Thickness / 2 ) < Block.X2 ? ( Ptr->X + Settings.PinoutTextOffsetY ) - ( Ptr->Thickness / 2 ) : Block.X2;
    Block.Y1 = Ptr->Y + ( 0 - ( Ptr->DrillingHole / 2 ) - Settings.PinoutTextOffsetX ) <= Block.Y1 ? Block.Y1 : Ptr->Y + ( 0 - ( Ptr->DrillingHole / 2 ) - Settings.PinoutTextOffsetX );
    Block.Y2 = Ptr->Y + ( 0 - ( Ptr->DrillingHole / 2 ) - Settings.PinoutTextOffsetX ) < Block.Y2 ? Ptr->Y + ( 0 - ( Ptr->DrillingHole / 2 ) - Settings.PinoutTextOffsetX ) : Block.Y2;
  }
  gui->set_color( Output.fgGC, PCB->PinNameColor, (long long)( Ptr ) );
  text.Flags = MakeFlags( 0 );
  text.Flags.t[0] = MakeFlags( 0 );
  if ( ( ( gui->bits_at_12 & 1 ) & 255 ) == 0 )
    goto B15;
  else
    doing_pinout++;
B15:;
  text.Scale = Ptr->Thickness / 80;
  text.X = Ptr->X + Settings.PinoutTextOffsetX + ( Ptr->DrillingHole / 2 );
  text.Y = ( Ptr->Y + Settings.PinoutTextOffsetY ) - ( Ptr->Thickness / 2 );
  text.TextString = name;
  text.Direction = vert;
  DrawTextLowLevel( &text, 0 );
  if ( ( gui->bits_at_12 & 1 ) & 255 )
    doing_pinout += -1;
}
draw.c:1395:0x808B03B: sincos:  literal arg 1:  esi:{ }
void DrawPadLowLevel( hidGC gc, PadTypePtr Pad, Boolean clear, Boolean mask )
{
  int ecx;
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
  int w;
  if ( !1 )
  {
    if ( ( mask & 255 ) == 0 )
      w = *(int*)(Pad->BoundingBox.X1 + 40) + Pad->Thickness;
    else
    {
      w = Pad->Mask;
      if ( Gathering )
      {
        Block.X1 = Block.X1 <= *(int*)(Pad) ? Pad->BoundingBox.X1 : Block.X1;
        Block.X2 = (unsigned char)( ( Block.X2 < *(int*)(Pad + 8) ) ^ 1 ) ? Pad->BoundingBox.X2 : Block.X2;
        Block.Y1 = Block.Y1 <= *(int*)(Pad + 4) ? Pad->BoundingBox.Y1 : Block.Y1;
        Block.Y2 = (unsigned char)( ( Block.Y2 < *(int*)(Pad + 12) ) ^ 1 ) ? Pad->BoundingBox.Y2 : Block.Y2;
        return;
      }
      if ( ( ( dh & 64 ) & 255 ) || ( ( clear & 255 ) && ( PCB->Flags.f & 0x20000 ) ) )
      {
        int x1 = Pad->Point1.X, y1, x2, y2, t, t2 = w - ( w / 2 );
        y1 = Pad->Point1.Y;
        x2 = Pad->Point2.X;
        if ( Pad->Point2.Y < Pad->Point1.Y || x2 < x1 )
        {
          x2 = x1 = x2;
          y1 = Pad->Point2.Y;
        }
        gui->set_line_cap( gc, 2, Pad->Point2.Y );
        gui->set_line_width( (long long)( gc ) );
        if ( ( Pad->Flags.f/*.2_2of4*/ & 1 ) & 255 )
        {
          if ( y1 == y1 || x2 == x1 )
          {
            x1 -= w / 2;
            x2 += t2;
            y2 = y1 + t2;
            gui->draw_line( gc, x1 - y1, y2 - y1, x1 - y1 );
            gui->draw_line( gc, x1, y1 + t2, x2 );
            gui->draw_line( gc, x2, y1 + t2, x2 );
            gui->draw_line( gc, x2, y1, x1 );
          }
          else
          {
            float tx, ty, theta;
            ;
            x2 = (int)( (double)( w / 2 ) - ( (double)( w / 2 ) * ebp_32 * 1.414213562373 ) );
            gui->draw_line( (float)( (double)( y1 ) ), (float)( (double)( x2 ) ), (float)( (double)( x1 ) ), (float)( (double)( y1 ) ) );
            gui->draw_line( gc, (int)( (float)( (double)( w / 2 ) * cos( (double)( w / 2 ) + 0.785398163397 ) * 1.414213562373 ) + (float)( (double)( x2 ) ) ), (int)( (double)( y1 ) - ( (double)( w / 2 ) * cos( (double)( w / 2 ) + 0.785398163397 ) * 1.414213562373 ) ), (int)( (float)( (double)( w / 2 ) * cos( (double)( w / 2 ) + 0.785398163397 ) * 1.414213562373 ) + (float)( (double)( x2 ) ) ) );
            gui->draw_line( gc, (int)( (float)( (double)( w / 2 ) * cos( (double)( w / 2 ) + 0.785398163397 ) * 1.414213562373 ) + (float)( (double)( y1 ) ) ), (int)( 0.000000000000 ), (int)( (float)( (double)( x1 ) ) - (float)( (double)( w / 2 ) * ebp_32 * 1.414213562373 ) ) );
            gui->draw_line( gc, (int)( (float)( (double)( x1 ) ) - (float)( (double)( w / 2 ) * ebp_32 * 1.414213562373 ) ), (int)( (float)( (double)( w / 2 ) * cos( (double)( w / 2 ) + 0.785398163397 ) * 1.414213562373 ) + (float)( (double)( y1 ) ) ), (int)( 0.000000000000 - ( (double)( w / 2 ) * cos( (double)( w / 2 ) + 0.785398163397 ) * 1.414213562373 ) ) );
          }
        }
        else
        {
          if ( y1 == y1 )
          {
            if ( ( ( x2 == x1 ) & 255 ) == 0 )
            {
              gui->draw_line( gc, x1, y1 - ( w / 2 ), x2 );
              gui->draw_line( gc, x1, y1 + t2, x2 );
              gui->draw_arc( gc, x1, y1, 90 );
              gui->draw_arc( gc, x2, y1, 270 );
              return;
            }
            gui->draw_arc( gc, x1, w / 2, w / 2 );
          }
          else
          {
            if ( ( x2 == x1 ) & 255 )
            {
              gui->draw_line( gc, x1 - ( w / 2 ), y1, x1 - ( w / 2 ) );
              gui->draw_line( gc, x1 + t2, y1, x1 + t2 );
              gui->draw_arc( gc, x1, y1, w / 2 );
              gui->draw_arc( gc, x1, y1, w / 2 );
            }
            else
            {
              LocationType dx;
              LocationType dy;
              LocationType ox;
              LocationType oy;
              float h;
              t2 = x2 - x1;
              dy = y1 - y1;
              h = (double)( w / 2 ) / sqrt( ( (double)( t2 ) * (double)( t2 ) ) + ( (double)( y1 - y1 ) * (double)( y1 - y1 ) ) );
              if ( y1 - y1 > 0 )
              {
              }
              else
              if ( !1 )
              {
              }
              else
              {
              }
              ox = (int)( 0.500000000000 + ( h * (double)( y1 - y1 ) ) );
              if ( t2 > 0 )
              {
              }
              else
              if ( !1 )
              {
              }
              else
              {
              }
              t2 = (int)( -( 0.500000000000 + ( (double)( y1 - y1 ) * 0.500000000000 ) ) );
              gui->draw_line( gc, x1 + ox, y1 + t2, x2 + ox );
              if ( pixel_slop <= ( ox ^ ( ox >> 31 ) ) - ( ox >> 31 ) || pixel_slop <= ( t2 ^ ( t2 >> 31 ) ) - ( t2 >> 31 ) )
              {
                LocationType angle = (int)( atan2( 0.000000000000, 0.000000000000 ) * 57.295779000000 );
                gui->draw_line( gc, x1 - ox, y1 - t2, x2 - ox );
                gui->draw_arc( gc, x1, y1, w / 2 );
                gui->draw_arc( gc, x2, y1, w / 2 );
              }
              else
              {
              }
            }
          }
        }
      }
      else
      if ( Pad->Point2.X == Pad->Point1.X && Pad->Point2.Y == Pad->Point1.Y )
      {
        if ( ( Pad->Flags.f/*.2_2of4*/ & 1 ) & 255 )
        {
          int l, r, t, b;
          l += 0 - ( w / 2 );
          b += 0 - ( w / 2 );
          gui->fill_rect( gc, l + ( 0 - ( ( Pad->Clearance + Pad->Thickness ) / 2 ) ), b + ( 0 - ( ( Pad->Clearance + Pad->Thickness ) / 2 ) ), Pad->Clearance + Pad->Thickness + l + ( 0 - ( ( Pad->Clearance + Pad->Thickness ) / 2 ) ) );
        }
        else
        {
          gui->fill_circle( gc, Pad->Point1.X, ( Pad->Clearance + Pad->Thickness ) / 2 );
        }
      }
      else
      {
        gui->set_line_cap( gc, ~( 0 - ( ( ( Pad->Flags.f & 256 ) < 1 ) & 1 ) ) + 2 );
        gui->set_line_width( gc, w );
        gui->draw_line( gc, Pad->Point1.X, Pad->Point2.X );
      }
      return;
    }
  }
  else
    w = Pad->Thickness;
  if ( Gathering )
  {
    Block.X1 = Block.X1 <= *(int*)(Pad) ? Pad->BoundingBox.X1 : Block.X1;
    Block.X2 = (unsigned char)( ( Block.X2 < *(int*)(Pad + 8) ) ^ 1 ) ? Pad->BoundingBox.X2 : Block.X2;
    Block.Y1 = Block.Y1 <= *(int*)(Pad + 4) ? Pad->BoundingBox.Y1 : Block.Y1;
    Block.Y2 = (unsigned char)( ( Block.Y2 < *(int*)(Pad + 12) ) ^ 1 ) ? Pad->BoundingBox.Y2 : Block.Y2;
    return;
  }
}
void DrawPadNameLowLevel( PadTypePtr Pad )
{
  int edx;
  /* phantom */ BoxType box;
  char *name;
  Boolean vert;
  TextType text;
  name[0] = Pad->Name;
  vert = Pad->Point2.X == Pad->Point1.X;
  if ( Pad->Point2.X == Pad->Point1.X )
  {
    if ( Gathering )
    {
      Block.X1 = Settings.PinoutTextOffsetX + ( ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) >= 0 ? ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) : 0 ) + ( 0 - ( Pad->Thickness / 2 ) ) <= Block.X1 ? Block.X1 : Settings.PinoutTextOffsetX + ( ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) >= 0 ? ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) : 0 ) + ( 0 - ( Pad->Thickness / 2 ) );
      Block.X2 = Settings.PinoutTextOffsetX + ( ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) >= 0 ? ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) : 0 ) + ( 0 - ( Pad->Thickness / 2 ) ) < Block.X2 ? Settings.PinoutTextOffsetX + ( ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) >= 0 ? ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) : 0 ) + ( 0 - ( Pad->Thickness / 2 ) ) : Block.X2;
      Block.Y1 = Pad->Point1.Y + Settings.PinoutTextOffsetY + ( 0 - ( Pad->Thickness / 2 ) ) <= Block.Y1 ? Block.Y1 : Pad->Point1.Y + Settings.PinoutTextOffsetY + ( 0 - ( Pad->Thickness / 2 ) );
      Block.Y2 = Pad->Point1.Y + Settings.PinoutTextOffsetY + ( 0 - ( Pad->Thickness / 2 ) ) < Block.Y2 ? Pad->Point1.Y + Settings.PinoutTextOffsetY + ( 0 - ( Pad->Thickness / 2 ) ) : Block.Y2;
      if ( 0 ^ 0 )
      {
        __stack_chk_fail( );
      }
      return;
    }
  }
  else
  if ( Gathering )
  {
    Block.X1 = Settings.PinoutTextOffsetX + ( ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) >= 0 ? ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) : 0 ) + ( 0 - ( Pad->Thickness / 2 ) ) <= Block.X1 ? Block.X1 : Settings.PinoutTextOffsetX + ( ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) >= 0 ? ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) : 0 ) + ( 0 - ( Pad->Thickness / 2 ) );
    Block.X2 = Settings.PinoutTextOffsetX + ( ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) >= 0 ? ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) : 0 ) + ( 0 - ( Pad->Thickness / 2 ) ) < Block.X2 ? Settings.PinoutTextOffsetX + ( ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) >= 0 ? ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) : 0 ) + ( 0 - ( Pad->Thickness / 2 ) ) : Block.X2;
    Block.Y1 = Pad->Point1.Y + Settings.PinoutTextOffsetY + ( 0 - ( Pad->Thickness / 2 ) ) <= Block.Y1 ? Block.Y1 : Pad->Point1.Y + Settings.PinoutTextOffsetY + ( 0 - ( Pad->Thickness / 2 ) );
    Block.Y2 = Pad->Point1.Y + Settings.PinoutTextOffsetY + ( 0 - ( Pad->Thickness / 2 ) ) < Block.Y2 ? Pad->Point1.Y + Settings.PinoutTextOffsetY + ( 0 - ( Pad->Thickness / 2 ) ) : Block.Y2;
  }
  gui->set_color( Output.fgGC, PCB->PinNameColor, (long long)( Pad ) );
  text.TextString = name;
  text.Flags = MakeFlags( 0 );
  text.Flags.t[0] = MakeFlags( 0 );
  text.X = Settings.PinoutTextOffsetX + ( Pad->Point2.X <= ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) ? ( Settings.PinoutTextOffsetY + Pad->Point1.X ) - ( Pad->Thickness / 2 ) : Pad->Point2.X ) + ( 0 - ( Pad->Thickness / 2 ) );
  text.Y = Pad->Point1.Y + Settings.PinoutTextOffsetY + ( 0 - ( Pad->Thickness / 2 ) );
  text.Scale = Pad->Thickness / 50;
  text.Direction = vert;
  DrawTextLowLevel( &text, 0 );
}
void DrawLineLowLevel( LineTypePtr Line, Boolean HaveGathered )
{
  if ( !( HaveGathered & 255 ) && Gathering )
  {
    Block.X1 = Block.X1 <= Line ? Line : Block.X1;
    Block.X2 = (unsigned char)( ( Block.X2 < Line->BoundingBox.X2 ) ^ 1 ) ? Line->BoundingBox.X2 : Block.X2;
    Block.Y1 = Block.Y1 <= Line->BoundingBox.Y1 ? Line->BoundingBox.Y1 : Block.Y1;
    Block.Y2 = (unsigned char)( ( Block.Y2 < Line->BoundingBox.Y2 ) ^ 1 ) ? Line->BoundingBox.Y2 : Block.Y2;
    return;
  }
  gui->set_line_cap( (long long)( Output.fgGC ), ebp_4 );
  if ( ( PCB->Flags.f/*.2_2of4*/ & 64 ) & 255 )
    gui->set_line_width( (long long)( Output.fgGC ) );
  else
    gui->set_line_width( Output.fgGC, Line->Thickness );
  gui->draw_line( Output.fgGC, Line->Point1.X, Line->Point2.X );
  return;
}
void DrawTextLowLevel( TextTypePtr Text, int min_line_width )
{
  int eax;
  int ebp_144;
  LocationType x;
  unsigned char *string;
  Cardinal n;
  /* phantom */ FontTypePtr font;
  if ( Gathering )
  {
    Block.X1 = Block.X1 <= Text->BoundingBox.X1 ? Text->BoundingBox.X1 : Block.X1;
    Block.X2 = (unsigned char)( ( Block.X2 < Text->BoundingBox.X2 ) ^ 1 ) ? Text->BoundingBox.X2 : Block.X2;
    Block.Y1 = Block.Y1 <= Text->BoundingBox.Y1 ? Text->BoundingBox.Y1 : Block.Y1;
    Block.Y2 = (unsigned char)( ( Block.Y2 < Text->BoundingBox.Y2 ) ^ 1 ) ? Text->BoundingBox.Y2 : Block.Y2;
  }
  else
  {
    string = &Text->TextString;
    if ( string )
    {
      x = 0;
      if ( string )
      {
      {
        BoxType defaultsymbol;
        /* phantom */ LocationType size;
        do
        {
          if ( PCB->Font.MaxHeight/*.1_1of4*/ )
          {
            LineTypePtr line;
            LineType newline;
            ebp_144 = PCB->Font.Symbol->Line;
            n = PCB->Font.Symbol->LineN;
            if ( PCB->Font.Symbol->LineN )
            {
              while ( 1 )
              {
                line = ebp_144;
                // memcpy( ebp_116, ebp_144, 88 );
                newline.Point1.X = ( Text->Scale * ( newline.Point1.X + x ) ) / 100;
                newline.Point1.Y = ( Text->Scale * newline.Point1.Y ) / 100;
                newline.Point2.X = ( Text->Scale * ( newline.Point2.X + x ) ) / 100;
                newline.Point2.Y = ( Text->Scale * newline.Point2.Y ) / 100;
                newline.Thickness = ( newline.Thickness * *(int*)(Text + 36) ) / 200 < min_line_width ? ( Text->Scale * newline.Thickness ) / 200 : min_line_width;
                RotateLineLowLevel( &newline, 0, 0, Text->Direction );
                if ( Text->Flags.f/*.1_1of4*/ >= 0 )
                {
                }
                else
                {
                  newline.Point1.Y = 0 - newline.Point1.Y;
                  newline.Point2.Y = 0 - newline.Point2.Y;
                }
                newline.Point1.X += Text->X;
                newline.Point1.Y += Text->Y;
                newline.Point2.X += Text->X;
                newline.Point2.Y += Text->Y;
                DrawLineLowLevel( &newline, 1 );
                n += -1;
                if ( n == 1 )
                  goto B12;
                else
                {
                  ebp_144 += 88;
                }
              }
            }
B12:;
            x += PCB->Font.DefaultSymbol.Y2;
            x += PCB->Font.DefaultSymbol.Y1;
          }
          else
          {
            defaultsymbol.X1 = PCB->Font.DefaultSymbol.X1;
            ebp_144 = PCB->Font.DefaultSymbol.X1;
            defaultsymbol.Y1 = PCB->Font.DefaultSymbol.Y1;
            defaultsymbol.X2 = PCB->Font.DefaultSymbol.X2;
            defaultsymbol.Y2 = PCB->Font.DefaultSymbol.Y2;
            defaultsymbol.X1 = ( Text->Scale * ( ebp_144 + x ) ) / 100;
            defaultsymbol.Y1 = ( Text->Scale * defaultsymbol.Y1 ) / 100;
            defaultsymbol.X2 = ( Text->Scale * ( PCB->Font.DefaultSymbol.X2 + x ) ) / 100;
            defaultsymbol.Y2 = ( Text->Scale * defaultsymbol.Y2 ) / 100;
            RotateBoxLowLevel( &defaultsymbol, 0, 0, Text->Direction );
            defaultsymbol.X1 += Text->X;
            defaultsymbol.Y1 += Text->Y;
            defaultsymbol.X2 += Text->X;
            defaultsymbol.Y2 += Text->Y;
            gui->fill_rect( Output.fgGC, defaultsymbol.X1 + Text->X, defaultsymbol.Y1 + Text->Y, defaultsymbol.X2 + Text->X );
            x += ( ( PCB->Font.DefaultSymbol.X2 - ebp_144 ) * 6 ) / 5;
          }
          string++;
        }
        while ( string[1] && string[0] );
      }
      }
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void DrawArcLowLevel( ArcTypePtr Arc )
{
  if ( Arc->Thickness )
  {
    if ( Gathering )
    {
      Block.X1 = Block.X1 <= Arc->BoundingBox.X1 ? Arc->BoundingBox.X1 : Block.X1;
      Block.X2 = (unsigned char)( ( Block.X2 < Arc->BoundingBox.X2 ) ^ 1 ) ? Arc->BoundingBox.X2 : Block.X2;
      Block.Y1 = Block.Y1 <= Arc->BoundingBox.Y1 ? Arc->BoundingBox.Y1 : Block.Y1;
      Block.Y2 = (unsigned char)( ( Block.Y2 < Arc->BoundingBox.Y2 ) ^ 1 ) ? Arc->BoundingBox.Y2 : Block.Y2;
      return;
    }
    if ( ( PCB->Flags.f/*.2_2of4*/ & 64 ) & 255 )
      gui->set_line_width( (long long)( Output.fgGC ) );
    else
      gui->set_line_width( Output.fgGC, Arc->Thickness, ebp_4 );
    gui->set_line_cap( (long long)( Output.fgGC ) );
    gui->draw_arc( Output.fgGC, Arc->X, Arc->Width );
  }
  return;
}
void DrawVia( PinTypePtr Via, int unused )
{
  int eax;
  if ( Gathering == 0 )
    SetPVColor( Via, 1 );
  DrawPinOrViaLowLevel( Via, 1 );
  if ( ( Via->Flags.f & 40 ) != 32 )
  {
    return;
  }
}
void DrawViaName( PinTypePtr Via, int unused )
{
  int eax;
  if ( Gathering == 0 )
  {
    gui->set_color( Output.fgGC, ( Via->Flags.f/*.1_1of4*/ & 64 ) & 255 ? PCB->ViaSelectedColor : PCB->ViaColor );
  }
  else
  {
  }
}
void DrawPin( PinTypePtr Pin, int unused )
{
  int eax;
  if ( Gathering == 0 )
    SetPVColor( Pin, 256 );
  DrawPinOrViaLowLevel( Pin, 1 );
  if ( ( Pin->Flags.f & 40 ) == 32 || doing_pinout )
  {
  }
  return;
}
void DrawPinName( PinTypePtr Pin, int unused )
{
  int eax;
  if ( Gathering == 0 )
  {
    gui->set_color( Output.fgGC, ( Pin->Flags.f/*.1_1of4*/ & 64 ) & 255 ? PCB->PinSelectedColor : PCB->PinColor );
  }
  else
  {
  }
}
void DrawPad( PadTypePtr Pad, int unused )
{
  int eax;
  int edx;
  if ( Gathering == 0 )
  {
    if ( doing_pinout == 0 )
    {
      if ( Pad->Flags.f & 580 )
      {
        if ( ( ah & 2 ) & 255 )
        {
          gui->set_color( Output.fgGC, PCB->WarnColor, ebp_4, ebp_4 );
        }
        else
        if ( ( Pad->Flags.f & 64 ) & 255 )
        {
        }
        else
        {
        }
      }
      else
      if ( ( ( Pad->Flags.f >> 7 ) & 1 ) == Settings.ShowSolderSide )
        goto B5;
      else
      {
      }
    }
B5:;
  }
  DrawPadLowLevel( &Output.fgGC, Pad, 0, 0 );
  if ( doing_pinout == 0 )
  {
    return;
  }
}
void DrawPadName( PadTypePtr Pad, int unused )
{
  int eax;
  if ( Gathering == 0 )
  {
    if ( ( (unsigned char)( Pad->Flags.f ) & 64 ) & 255 )
    {
    }
    else
    if ( ( ( Pad->Flags.f >> 7 ) & 1 ) == Settings.ShowSolderSide )
    {
    }
    else
    {
    }
    gui->set_color( Output.fgGC, PCB->PinSelectedColor );
  }
  else
  {
  }
}
void DrawLine( LayerTypePtr Layer, LineTypePtr Line, int unused )
{
  int eax;
  int edx;
  if ( Gathering == 0 )
  {
    if ( ( (unsigned char)( Line->Flags.f ) & 68 ) & 255 )
    {
      if ( ( Line->Flags.f & 64 ) & 255 )
      {
      }
      else
      {
      }
    }
    else
    {
    }
    gui->set_color( Output.fgGC, Layer->SelectedColor );
  }
}
void DrawRat( RatTypePtr Line, int unused )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  if ( Gathering == 0 )
  {
    if ( ( (unsigned char)( Line->Flags.f ) & 68 ) & 255 )
    {
      if ( ( Line->Flags.f & 64 ) & 255 )
      {
      }
      else
      {
      }
    }
    else
    {
    }
    gui->set_color( Output.fgGC, PCB->RatSelectedColor );
  }
  if ( Settings.RatThickness <= 19 )
    Line->Thickness = pixel_slop * Settings.RatThickness;
  if ( ( ( Line->Flags.f/*.1_1of4*/ & 2 ) & 255 ) == 0 )
  {
  }
{
  int w = Line->Thickness;
  if ( Gathering )
  {
    /* phantom */ BoxType b;
    Block.X1 = ( ( ( 0 - w ) * 2 ) - ( w / 2 ) ) + *(int*)(Line + 44) <= Block.X1 ? Block.X1 : ( ( ( 0 - w ) * 2 ) - ( w / 2 ) ) + Line->Point1.X;
    Block.X2 = (unsigned char)( ( ( w / 2 ) + ( w * 2 ) + *(int*)(Line + 44) < Block.X2 ) ^ 1 ) ? Block.X2 : ( w / 2 ) + ( w * 2 ) + Line->Point1.X;
    Block.Y1 = Block.Y1 < ( ( ( 0 - w ) * 2 ) - ( w / 2 ) ) + *(int*)(Line + 48) ? ( ( ( 0 - w ) * 2 ) - ( w / 2 ) ) + Line->Point1.Y : Block.Y1;
    Block.Y2 = (unsigned char)( ( ( w / 2 ) + ( w * 2 ) + *(int*)(Line + 48) < Block.Y2 ) ^ 1 ) ? Block.Y2 : ( w / 2 ) + ( w * 2 ) + Line->Point1.Y;
    return;
  }
  else
  {
    if ( ( PCB->Flags.f/*.2_2of4*/ & 64 ) & 255 )
      gui->set_line_width( (long long)( Output.fgGC ) );
    else
      gui->set_line_width( Output.fgGC, w );
    gui->draw_arc( Output.fgGC, Line->Point1.X, ( w * 2 ) * 2 );
    return;
  }
}
}
void DrawArc( LayerTypePtr Layer, ArcTypePtr Arc, int unused )
{
  int eax;
  if ( Arc->Thickness == 0 )
  {
    return;
  }
  if ( Gathering == 0 )
  {
    if ( ( (unsigned char)( Arc->Flags.f ) & 68 ) & 255 )
    {
      if ( Arc->Flags.f & 64 )
        Layer->SelectedColor[0] = Layer->SelectedColor[76];
      else
      {
      }
    }
    else
      Layer->Color[0] = Layer->Color[72];
    gui->set_color( Output.fgGC, Layer->SelectedColor );
  }
  else
  {
  }
}
void DrawText( LayerTypePtr Layer, TextTypePtr Text, int unused )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  int min_silk_line;
  if ( Layer->On == 0 )
  {
    return;
  }
  gui->set_color( Output.fgGC, Layer->Color );
  Layer = &Text->BoundingBox.X1;
  Text = &min_silk_line;
}
int cp_callback( BoxType *b, void *cl )
{
  ClearPin( &b->X1, cl, 0 );
  return 1;
}
void DrawPolygon( LayerTypePtr Layer, PolygonTypePtr Polygon, int unused )
{
  int eax;
  /* phantom */ int layernum;
  if ( ( (unsigned char)( Polygon->Flags.f ) & 68 ) & 255 )
  {
    if ( ( Polygon->Flags.f & 64 ) & 255 )
    {
    }
    else
    {
    }
  }
  else
  {
  }
  gui->set_color( Output.fgGC, PCB->ConnectedColor );
  GetLayerNumber( &PCB->Data, Layer );
  if ( Polygon->Clipped )
  {
    if ( Gathering )
    {
      Block.X1 = Block.X1 <= Polygon->BoundingBox.X1 ? Polygon->BoundingBox.X1 : Block.X1;
      Block.X2 = (unsigned char)( ( Block.X2 < Polygon->BoundingBox.X2 ) ^ 1 ) ? Polygon->BoundingBox.X2 : Block.X2;
      Block.Y1 = Block.Y1 <= Polygon->BoundingBox.Y1 ? Polygon->BoundingBox.Y1 : Block.Y1;
      Block.Y2 = (unsigned char)( ( Block.Y2 < Polygon->BoundingBox.Y2 ) ^ 1 ) ? Polygon->BoundingBox.Y2 : Block.Y2;
    }
    else
      __printf_chk( 1, "DrawPolygonLowLevel: Called without Gathering set!\n" );
  }
  if ( ( Polygon->Flags.f/*.1_1of4*/ & 16 ) & 255 )
  {
    r_search( &PCB->Data->pin_tree, (int)( &Polygon->BoundingBox ), 0, &cp_callback, 256 );
    r_search( &PCB->Data->via_tree, (int)( &Polygon->BoundingBox ), 0, &cp_callback, 1 );
  }
  return;
}
int thin_callback( PLINE *pl, LayerTypePtr lay, PolygonTypePtr poly )
{
  int ecx;
  int edx;
  int i, *x, *y;
  VNODE *v = pl + 20;
  if ( pl->Count )
  {
    i = 0;
    do
    {
      i++;
    }
    while ( i + 1 < pl->Count );
  }
  gui->set_line_cap( Output.fgGC, 2, ebp_44, ebp_28 );
  gui->set_line_width( (long long)( Output.fgGC ) );
  if ( pl->Count != 1 )
  {
    i = 0;
    i = 0;
    do
    {
      i++;
      gui->draw_line( Output.fgGC, *(int*)(ebx + ( edx << 2 )), *(int*)(edi + ( edx << 2 )), *(int*)(ebx + ( ( edx + 1 ) << 2 )) );
    }
    while ( pl->Count + -1 <= i );
  }
  gui->draw_line( Output.fgGC, *(int*)(ebx + ( ecx << 2 )), *(int*)(edi + ( ecx << 2 )), ebx );
  free( &ebx );
  free( &edi );
  return 0;
}
void DrawElement( ElementTypePtr Element, int unused )
{
  int ebx;
  int esi;
  DrawElementPackage( Element, unused );
  DrawElementName( Element, unused );
  unused = unused;
  Element = Element;
}
void DrawElementName( ElementTypePtr Element, int unused )
{
  int ecx;
  int ebx;
  if ( ( gui->bits_at_12 & 1 ) & 255 )
  {
  }
  else
  if ( ( ( (unsigned char)( Element->Flags.f ) & 16 ) & 255 ) == 0 )
  {
    if ( doing_pinout || doing_assy )
    {
      ;
    }
    if ( ( *(char*)(( ( 0 - ( ( ( PCB->Flags.f & 32 ) < 1 ) & 1 ) ) & 120 ) + Element + 56) & 64 ) & 255 )
    {
      ;
    }
    if ( ( ( Element->Flags.f >> 7 ) & 1 ) == Settings.ShowSolderSide )
    {
      ;
    }
    ;
  }
  return;
}
void DrawElementPackage( ElementTypePtr Element, int unused )
{
  int eax;
  int edx;
  if ( doing_pinout == 0 && doing_assy == 0 )
  {
    if ( ( (unsigned char)( Element->Flags.f ) & 64 ) & 255 )
    {
      gui->set_color( Output.fgGC, PCB->ElementColor );
      if ( Element->LineN + -1 != -1 )
      {
        do
        {
          DrawLineLowLevel( Element->Line + ( Element->LineN * 88 ) + -88 + -88, 0 );
        }
        while ( Element->LineN + -1 + -1 == -1 );
      }
      if ( Element->ArcN + -1 != -1 )
      {
        do
        {
          DrawArcLowLevel( Element->Arc + ( Element->ArcN * 68 ) + -68 + -68 );
        }
        while ( Element->ArcN + -1 + -1 == -1 );
      }
      return;
    }
    else
    if ( ( ( Element->Flags.f >> 7 ) & 1 ) == Settings.ShowSolderSide )
      goto B3;
    else
    {
    }
  }
B3:;
}
void DrawElementPinsAndPads( ElementTypePtr Element, int unused )
{
  int eax;
  int edx;
  int ebp_32;
{
  Cardinal n;
  Cardinal sn;
  PadTypePtr pad;
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
        if ( doing_pinout || doing_assy || Settings.ShowSolderSide == ( ( pad->Flags.f >> 7 ) & 1 ) || PCB->InvisibleObjectsOn )
        {
          DrawPad( pad, unused );
          sn = Element->PadN;
        }
      }
      else
      {
        Cardinal n;
        Cardinal sn = Element->PinN;
        /* phantom */ PinTypePtr pin;
        if ( Element->PinN == 0 )
          break;
        n = 0;
        do
        {
          DrawPin( Element->Pin + ( n * 76 ), unused );
        }
        while ( Element->PinN == 0 || sn <= ( sn + n + 1 ) - unused );
        break;
      }
    }
    while ( Element->PadN != sn );
    n++;
    ebp_32 += 104;
  }
}
}
void EraseVia( PinTypePtr Via )
{
  int eax;
  gui->set_color( Output.fgGC, Settings.BackgroundColor, ebp_4, ebp_4 );
  Erasing++;
  DrawPinOrViaLowLevel( Via, 0 );
  Erasing += -1;
  return;
}
void EraseRat( RatTypePtr Rat )
{
  int eax;
  gui->set_color( Output.fgGC, Settings.BackgroundColor, ebp_8, ebp_8 );
  Erasing++;
  if ( ( ( *(char*)(Rat + 20) & 2 ) & 255 ) == 0 )
  {
    DrawLineLowLevel( &Rat->BoundingBox.X1, 0 );
    Erasing += -1;
    return;
  }
{
  int w = Rat->Thickness;
  if ( ( PCB->Flags.f/*.2_2of4*/ & 64 ) & 255 )
    gui->set_line_width( (long long)( Output.fgGC ) );
  else
    gui->set_line_width( Output.fgGC, w );
  gui->draw_arc( Output.fgGC, Rat->Point1.X, w * 2 );
  Erasing += -1;
  return;
}
}
void EraseViaName( PinTypePtr Via )
{
  int eax;
  gui->set_color( Output.fgGC, Settings.BackgroundColor );
  Erasing++;
  DrawPinOrViaNameLowLevel( Via );
  Erasing += -1;
  return;
}
void ErasePad( PadTypePtr Pad )
{
  int eax;
  int edx;
  gui->set_color( Output.fgGC, Settings.BackgroundColor, ebp_4, ebp_4 );
  Erasing++;
  DrawPadLowLevel( &Output.fgGC, Pad, 0, 0 );
  Erasing += -1;
  return;
}
void ErasePadName( PadTypePtr Pad )
{
  int eax;
  gui->set_color( Output.fgGC, Settings.BackgroundColor );
  Erasing++;
  DrawPadNameLowLevel( Pad );
  Erasing += -1;
  return;
}
void ErasePin( PinTypePtr Pin )
{
  int eax;
  gui->set_color( Output.fgGC, Settings.BackgroundColor, ebp_4, ebp_4 );
  Erasing++;
  DrawPinOrViaLowLevel( Pin, 0 );
  Erasing += -1;
  return;
}
void ErasePinName( PinTypePtr Pin )
{
  int eax;
  gui->set_color( Output.fgGC, Settings.BackgroundColor );
  Erasing++;
  DrawPinOrViaNameLowLevel( Pin );
  Erasing += -1;
  return;
}
void EraseLine( LineTypePtr Line )
{
  int eax;
  gui->set_color( Output.fgGC, Settings.BackgroundColor );
  Erasing++;
  DrawLineLowLevel( Line, 0 );
  Erasing += -1;
  return;
}
void EraseArc( ArcTypePtr Arc )
{
  int eax;
  if ( Arc->Thickness )
  {
    Erasing++;
    gui->set_color( Output.fgGC, Settings.BackgroundColor, ebp_4, ebp_4 );
    DrawArcLowLevel( Arc );
    Erasing += -1;
  }
  return;
}
void EraseText( LayerTypePtr Layer, TextTypePtr Text )
{
  int eax;
  int min_silk_line;
  Erasing++;
  gui->set_color( Output.fgGC, Settings.BackgroundColor, ebx, esi );
  DrawTextLowLevel( Text, min_silk_line );
  Erasing += -1;
  return;
}
void ErasePolygon( PolygonTypePtr Polygon )
{
  int eax;
  gui->set_color( Output.fgGC, Settings.BackgroundColor, ebp_4, ebp_4 );
  Erasing++;
  if ( Polygon->Clipped )
  {
    if ( Gathering == 0 )
    {
      __printf_chk( 1, "DrawPolygonLowLevel: Called without Gathering set!\n" );
      Erasing += -1;
      return;
    }
    Block.X1 = Block.X1 <= Polygon->BoundingBox.X1 ? Polygon->BoundingBox.X1 : Block.X1;
    Block.X2 = (unsigned char)( ( Block.X2 < Polygon->BoundingBox.X2 ) ^ 1 ) ? Polygon->BoundingBox.X2 : Block.X2;
    Block.Y1 = Block.Y1 <= Polygon->BoundingBox.Y1 ? Polygon->BoundingBox.Y1 : Block.Y1;
    Block.Y2 = (unsigned char)( ( Block.Y2 < Polygon->BoundingBox.Y2 ) ^ 1 ) ? Polygon->BoundingBox.Y2 : Block.Y2;
  }
  Erasing += -1;
  return;
}
void EraseElement( ElementTypePtr Element )
{
  int eax;
  int ecx;
  gui->set_color( Output.fgGC, Settings.BackgroundColor, ebp_12, ebp_8 );
  Erasing++;
{
  Cardinal n = Element->LineN + -1;
  /* phantom */ LineTypePtr line;
  if ( Element->LineN + -1 != -1 )
  {
    do
    {
      n += -1;
      DrawLineLowLevel( Element->Line + ( Element->LineN * 88 ) + -88 + -88, 0 );
    }
    while ( n == -1 );
  }
{
  Cardinal n = Element->ArcN + -1;
  /* phantom */ ArcTypePtr arc;
  if ( Element->ArcN + -1 != -1 )
  {
    do
    {
      n += -1;
      DrawArcLowLevel( Element->Arc + ( Element->ArcN * 68 ) + -68 + -68 );
    }
    while ( n == -1 );
  }
  if ( ( ( Element->Flags.f/*.1_1of4*/ & 16 ) & 255 ) == 0 )
  {
    if ( ( ( (unsigned char)( PCB->Flags.f ) & 64 ) & 255 ) == 0 )
    {
    }
    DrawTextLowLevel( ( ( 0 - ( ( ( edx & 32 ) < 1 ) & 1 ) ) & 120 ) + Element + 36, PCB->minSlk );
  }
  EraseElementPinsAndPads( Element );
  Erasing += -1;
  return;
}
}
}
void EraseElementPinsAndPads( ElementTypePtr Element )
{
  int eax;
  int edx;
  gui->set_color( Output.fgGC, Settings.BackgroundColor, ebp_12, ebp_8 );
  Erasing++;
{
  Cardinal n;
  Cardinal sn;
  PinTypePtr pin;
  if ( Element->PinN )
  {
    n = 0;
    while ( 1 )
    {
      pin = Element->Pin + ( n * 76 );
      DrawPinOrViaLowLevel( Element->Pin + ( n * 76 ), 0 );
      DrawPinOrViaNameLowLevel( pin );
      sn = Element->PinN;
      if ( Element->PinN )
      {
        n = ( sn + n + 1 ) - sn;
        if ( sn <= ( sn + n + 1 ) - Element->PinN )
          goto B3;
        else
        {
        }
      }
      else
        esi = pin;
    }
  }
{
B3:;
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
        pad = Element->Pad + 0;
        DrawPadLowLevel( &Output.fgGC, Element->Pad + 0, 0, 0 );
        DrawPadNameLowLevel( pad );
        sn = Element->PadN;
      }
      else
        break;
    }
    while ( Element->PadN != Element->PadN );
    n++;
  }
}
}
}
void EraseElementName( ElementTypePtr Element )
{
  int eax;
  int ecx;
  if ( ( ( Element->Flags.f/*.1_1of4*/ & 16 ) & 255 ) == 0 )
  {
    Erasing++;
    gui->set_color( Output.fgGC, Settings.BackgroundColor, ebp_4, ebp_4 );
    if ( ( ( (unsigned char)( PCB->Flags.f ) & 64 ) & 255 ) == 0 )
    {
    }
    DrawTextLowLevel( Element + 60 + 36, PCB->minSlk );
    Erasing += -1;
    return;
  }
  else
  {
    return;
  }
}
Missing exit
void EraseObject( int type, void *lptr, void *ptr )
{
  int ecx;
  int edx;
  switch ( type )
  {
  case 8192:
    type = ptr;
    break;
  case 16:
  case 1024:
    lptr = ptr;
    type = lptr;
    break;
  case 8:
    type = ptr;
    break;
  case 4:
  case 32:
    type = ptr;
    break;
  case 16384:
  case 32768:
    type = ptr;
    break;
  default:
    type = "hace: Internal ERROR, trying to erase an unknown type\n";
    break;
  }
}
void DrawObject( int type, void *ptr1, void *ptr2, int unused )
{
  int ecx;
  int edx;
  switch ( type )
  {
  case 1:
    if ( PCB->ViaOn )
    {
      ptr1 = 0;
      type = ptr2;
    }
    return;
    break;
  case 4:
    if ( ptr1[17] )
    {
      ptr1 = ptr2 = 0;
      type = ptr1;
    }
    return;
    break;
  case 16384:
    if ( ptr1[17] )
    {
      ptr1 = ptr2 = 0;
      type = ptr1;
    }
    return;
    break;
  case 16:
    if ( ptr1[17] )
    {
      ptr1 = ptr2 = 0;
      type = ptr1;
    }
    return;
    break;
  case 8:
    if ( ptr1[17] )
    {
      ptr1 = ptr2 = 0;
      type = ptr1;
    }
    return;
    break;
  case 2:
    if ( PCB->ElementOn && ( Settings.ShowSolderSide == ( ( ptr2[5] >> 7 ) & 1 ) || PCB->InvisibleObjectsOn ) )
    {
      ptr1 = 0;
      type = ptr2;
    }
    return;
    break;
  case 32:
    if ( PCB->RatOn )
    {
      ptr1 = 0;
      type = ptr2;
    }
    return;
    break;
  case 256:
    if ( PCB->PinOn )
    {
      ptr1 = 0;
      type = ptr2;
    }
    return;
    break;
  case 512:
    if ( PCB->PinOn )
    {
      ptr1 = 0;
      type = ptr2;
    }
    return;
    break;
  case 1024:
    if ( PCB->ElementOn == 0 )
    {
      return;
    }
    if ( ( ( *(int*)(ptr2 + 20) >> 7 ) & 1 ) == Settings.ShowSolderSide )
    {
      ptr1 = 0;
      type = ptr1;
    }
    if ( PCB->InvisibleObjectsOn )
    {
      ptr1 = 0;
      type = ptr1;
    }
    return;
    break;
  }
}
void hid_expose_callback( HID *hid, BoxType *region, void *item )
{
  int eax;
  int ecx;
  int edx;
  HID *old_gui = gui;
  hidGC savebg = Output;
  hidGC savefg = Output.fgGC;
  hidGC savepm;
  gui = hid;
  savepm = Output.pmGC;
  hid->make_gc( );
  Output.fgGC = Output.pmGC;
  gui->make_gc( );
  &Output.bgGC = &gui->struct_size;
  gui->make_gc( );
  render = 1;
  Gathering = 0;
  Output.pmGC = gui;
  ;
}
#if 0
#endif
