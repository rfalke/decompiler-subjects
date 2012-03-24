#include "fontmode.c.h"
static char fontedit_syntax[11] = { 'F', 'o', 'n', 't', 'E', 'd', 'i', 't', '(', ')' };
static char fontedit_help[46] = { 'C', 'o', 'n', 'v', 'e', 'r', 't', ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'f', 'o', 'n', 't', ' ', 't', 'o', ' ', 'a', ' ', 'P', 'C', 'B', ' ', 'f', 'o', 'r', ' ', 'e', 'd', 'i', 't', 'i', 'n', 'g' };
static char fontsave_syntax[11] = { 'F', 'o', 'n', 't', 'S', 'a', 'v', 'e', '(', ')' };
static char fontsave_help[39] = { 'C', 'o', 'n', 'v', 'e', 'r', 't', ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'P', 'C', 'B', ' ', 'b', 'a', 'c', 'k', ' ', 't', 'o', ' ', 'a', ' ', 'f', 'o', 'n', 't' };
HID_Action fontmode_action_list[2] = { { "FontEdit", 0, &FontEdit, &fontedit_help, &fontedit_syntax }
, { "FontSave", 0, &FontSave, &fontsave_help, &fontsave_syntax }
 };
int FontEdit( int argc, char **argv, int Ux, int Uy )
{
  int eax;
  /* phantom */ FontType *font;
  /* phantom */ SymbolType *symbol;
  LayerTypePtr lfont;
  LayerTypePtr lorig;
  LayerTypePtr lwidth;
  LayerTypePtr lgrid;
  int s, l;
  if ( hid_actionl( "New", "Font", ebp_176, ebp_176 ) == 0 )
  {
    while ( PCB->Data->LayerN > 4 )
    {
      MoveLayer( 4, -1 );
    }
    MoveLayerToGroup( 0, 0 );
    MoveLayerToGroup( 1, 1 );
    MoveLayerToGroup( 2, 2 );
    MoveLayerToGroup( 3, 3 );
    PCB->MaxWidth = 180000;
    PCB->MaxHeight = 180000;
    PCB->Grid = 500.000000000000;
    PCB->Data->Layer->Name = MyStrdup( "Font", "FontEdit" );
    PCB->Data->Layer[1].Name = MyStrdup( "OrigFont", "FontEdit" );
    PCB->Data->Layer[2].Name = MyStrdup( "Width", "FontEdit" );
    PCB->Data->Layer[3].Name = MyStrdup( "Grid", "FontEdit" );
    hid_action( "PCBChanged" );
    hid_action( "LayersChanged" );
    s = 0;
    lfont = &PCB->Data->Layer;
    lorig = &PCB->Data->Layer[1];
    lwidth = &PCB->Data->Layer[2];
  {
    do
    {
      int ox = ( ( s & 15 ) + 1 ) * 10000;
      int oy = ( 1 + ( s >> 4 ) ) * 10000;
      int w, miny, maxy = PCB->Font.MaxHeight, maxx;
      if ( PCB->Font.Symbol->LineN )
      {
        l = 0;
        do
        {
          CreateDrawnLineOnLayer( lfont, ox + PCB->Font.Symbol->Line->Point1.X, oy + PCB->Font.Symbol->Line->Point1.Y, ox + PCB->Font.Symbol->Line->Point2.X, oy + PCB->Font.Symbol->Line->Point2.Y, PCB->Font.Symbol->Line->Thickness, PCB->Font.Symbol->Line->Thickness, "badarg" );
          CreateDrawnLineOnLayer( lorig, ox + PCB->Font.Symbol->Line->BoundingBox.X1, oy + PCB->Font.Symbol->Line->BoundingBox.X1, ox + PCB->Font.Symbol->Line->BoundingBox.X1, oy + PCB->Font.Symbol->Line->BoundingBox.X1, PCB->Font.Symbol->Line->BoundingBox.X1, PCB->Font.Symbol->Line->BoundingBox.X1, "badarg" );
          maxx = ( "huge", 0 );
          l++;
        }
        while ( PCB->Font.Symbol->LineN <= l );
      }
      w = ebp_100 + w + *(int*)(PCB + 28 + 232);
      CreateDrawnLineOnLayer( lwidth, w, oy + 500, w, oy + maxy, 100, 100, "badarg" );
    }
    while ( s != 256 );
    lgrid = &PCB->Data->Layer[3];
  {
    do
    {
      /* phantom */ int x;
      esi = MakeFlags( 0 );
      CreateDrawnLineOnLayer( lgrid, 10000 + 10000, 0, 10000 + 10000, PCB->MaxHeight, 100, 100, "badarg" );
    }
    while ( 10000 + 10000 == 170000 );
    lgrid = &PCB->Data->Layer[3];
  {
    do
    {
      /* phantom */ int y;
      esi = MakeFlags( 0 );
      CreateDrawnLineOnLayer( lgrid, 0, 10000 + 10000, PCB->MaxWidth, 10000 + 10000, 100, 100, "badarg" );
    }
    while ( 10000 + 10000 == 180000 );
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
Missing divisor:  0x68db8bad(12)
Missing divisor:  0x68db8bad(12)
Missing divisor:  0x68db8bad(12)
Missing divisor:  0x68db8bad(12)
Missing divisor:  0x68db8bad(12)
Missing divisor:  0x68db8bad(12)
int FontSave( int argc, char **argv, int Ux, int Uy )
{
  int eax;
  int ebp_32;
  /* phantom */ FontTypePtr font;
  /* phantom */ SymbolTypePtr symbol;
  int i;
  /* phantom */ LayerTypePtr lfont;
  /* phantom */ LayerTypePtr lwidth;
  do
  {
    PCB->Font.Symbol->LineN = 0;
    PCB->Font.Symbol->Valid = 0;
    PCB->Font.Symbol->Width = 0;
  }
  while ( 0 + 28 + 28 != 7168 );
  if ( *(int*)(ebp_48 + 80) )
  {
    ebp_32 = 0;
  {
    LineTypePtr l;
    int x1;
    int y1;
    int x2;
    int y2;
    int ox, oy, s;
    while ( 1 )
    {
Missing divisor:  0x68db8bad(12)
Missing divisor:  0x68db8bad(12)
      l = ( l * 88 ) + *(int*)(ebp_48 + 112);
      y1 = *(int*)(*(int*)(ebp_48 + 112) + ( l * 88 ));
      y2 = *(int*)(*(int*)(ebp_48 + 112) + ( l * 88 ));
      s = ( ( ( y1 + 1000 ) / 0 ) << 4 ) + ( ( *(int*)(*(int*)(ebp_48 + 112) + ( l * 88 )) + 1000 ) / 0 ) + -17;
      x2 = *(int*)(*(int*)(ebp_48 + 112) + ( l * 88 )) - ( ( ( __MOD(( ( ( ( y1 + 1000 ) / 0 ) << 4 ) + ( ( *(int*)(*(int*)(ebp_48 + 112) + ( l * 88 )) + 1000 ) / 0 ) + -17 ),16) ) + 1 ) * 10000 );
      oy = ( "huge", 0 );
      x1 = *(int*)(ebp_28 + ( ( ( ( y1 + 1000 ) / 0 ) << 4 ) * 28 ) + ( ( ( *(int*)(*(int*)(ebp_48 + 112) + ( l * 88 )) + 1000 ) / 0 ) * 28 ) + -252);
      if ( PCB->ID < l->Point1.X - ( ( ( __MOD(( ( ( ( y1 + 1000 ) / 0 ) << 4 ) + ( ( l->Point1.X + 1000 ) / 0 ) + -17 ),16) ) + 1 ) * 10000 ) )
      {
        PCB->ID = x1;
        x1 = x1;
      }
      if ( x1 < x2 )
        PCB->Font.DefaultSymbol.Y1 = x2;
      PCB->Font.MaxHeight/*.1_1of4*/ = 1;
      CreateNewLineInSymbol( PCB + ( ( ( ( ( y1 + 1000 ) / 0 ) << 4 ) + ( ( l->Point1.X + 1000 ) / 0 ) + -17 ) * 28 ) + 208, x1, y1 - oy, x2, y2 - oy, l->Thickness );
      ebp_32++;
      if ( *(int*)(ebp_48 + 80) <= ebp_32 )
        break;
      else
      {
      }
    }
  }
  }
  ebp_32 = *(int*)(ebp_48 + 264);
  if ( *(int*)(ebp_48 + 264) )
  {
    i = 0;
  {
    LineTypePtr l;
    int x1;
    /* phantom */ int y1;
    /* phantom */ int ox, oy, s;
    do
    {
Missing divisor:  0x68db8bad(12)
Missing divisor:  0x68db8bad(12)
      i++;
      x1 = *(int*)(ebp_40 + ( edi * 88 ) + 44);
      *(int*)(ebp_36 + ( ( ( ( *(int*)(ebp_40 + ( edi * 88 ) + 48) + 1000 ) / 0 ) << 4 ) * 28 ) + ( ( ( *(int*)(ebp_40 + ( edi * 88 ) + 44) + 1000 ) / 0 ) * 28 ) + -244) = x1 - ( ( ( __MOD(( ( ( ( *(int*)(ebp_40 + ( edi * 88 ) + 48) + 1000 ) / 0 ) << 4 ) + ( ( *(int*)(ebp_40 + ( edi * 88 ) + 44) + 1000 ) / 0 ) + -17 ),16) ) + 1 ) * 10000 ) - *(int*)(ebp_36 + ( ( ( ( *(int*)(ebp_40 + ( edi * 88 ) + 48) + 1000 ) / 0 ) << 4 ) * 28 ) + ( ( ( *(int*)(ebp_40 + ( edi * 88 ) + 44) + 1000 ) / 0 ) * 28 ) + -252);
    }
    while ( ebp_32 != i + 1 );
  }
  }
  SetFontInfo( ebx + 184 );
  return 0;
}
void register_fontmode_action_list( void )
{
  hid_register_actions( fontmode_action_list, 2 );
  return;
}
#if 0
#endif
