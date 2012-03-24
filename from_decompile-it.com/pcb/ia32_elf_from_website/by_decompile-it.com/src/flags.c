#include "flags.c.h"
HID_Flag flags_flag_list[70] = { { "style", &FlagCurrentStyle, 0 }
, { "grid", &FlagGrid, 0 }
, { "gridsize", &FlagGridSize, 0 }
, { "elementname", &FlagElementName, 0 }
, { "have_regex", &FlagHaveRegex, 0 }
, { "silk_shown", &FlagLayerShown, -6 }
, { "pins_shown", &FlagLayerShown, -5 }
, { "rats_shown", &FlagLayerShown, -4 }
, { "vias_shown", &FlagLayerShown, -3 }
, { "back_shown", &FlagLayerShown, -2 }
, { "mask_shown", &FlagLayerShown, -1 }
, { "silk_active", &FlagLayerActive, -6 }
, { "rats_active", &FlagLayerActive, -4 }
, { "mode", &FlagMode, -1 }
, { "nomode", &FlagMode, 0 }
, { "arcmode", &FlagMode, 109 }
, { "arrowmode", &FlagMode, 110 }
, { "copymode", &FlagMode, 105 }
, { "insertpointmode", &FlagMode, 106 }
, { "linemode", &FlagMode, 2 }
, { "lockmode", &FlagMode, 111 }
, { "movemode", &FlagMode, 104 }
, { "pastebuffermode", &FlagMode, 5 }
, { "polygonmode", &FlagMode, 4 }
, { "rectanglemode", &FlagMode, 3 }
, { "removemode", &FlagMode, 103 }
, { "rotatemode", &FlagMode, 102 }
, { "rubberbandmovemode", &FlagMode, 107 }
, { "textmode", &FlagMode, 6 }
, { "thermalmode", &FlagMode, 108 }
, { "viamode", &FlagMode, 1 }
, { "shownumber", &FlagTESTFLAG, 1 }
, { "localref", &FlagTESTFLAG, 2 }
, { "checkplanes", &FlagTESTFLAG, 4 }
, { "showdrc", &FlagTESTFLAG, 8 }
, { "rubberband", &FlagTESTFLAG, 16 }
, { "description", &FlagTESTFLAG, 32 }
, { "nameonpcb", &FlagTESTFLAG, 64 }
, { "autodrc", &FlagTESTFLAG, 128 }
, { "alldirection", &FlagTESTFLAG, 256 }
, { "swapstartdir", &FlagTESTFLAG, 512 }
, { "uniquename", &FlagTESTFLAG, 1024 }
, { "clearnew", &FlagTESTFLAG, 2048 }
, { "snappin", &FlagTESTFLAG, 4096 }
, { "showmask", &FlagTESTFLAG, 8192 }
, { "thindraw", &FlagTESTFLAG, 16384 }
, { "orthomove", &FlagTESTFLAG, 32768 }
, { "liveroute", &FlagTESTFLAG, 65536 }
, { "thindrawpoly", &FlagTESTFLAG, 131072 }
, { "locknames", &FlagTESTFLAG, 262144 }
, { "onlynames", &FlagTESTFLAG, 524288 }
, { "newfullpoly", &FlagTESTFLAG, 1048576 }
, { "hidenames", &FlagTESTFLAG, 2097152 }
, { "fullpoly", &FlagSETTINGS, 1913 }
, { "grid_units_mm", &FlagSETTINGS, 0 }
, { "clearline", &FlagSETTINGS, 1912 }
, { "uniquenames", &FlagSETTINGS, 1914 }
, { "showsolderside", &FlagSETTINGS, 1916 }
, { "savelastcommand", &FlagSETTINGS, 1917 }
, { "saveintmp", &FlagSETTINGS, 1918 }
, { "drawgrid", &FlagSETTINGS, 1919 }
, { "ratwarn", &FlagSETTINGS, 1920 }
, { "stipplepolygons", &FlagSETTINGS, 1921 }
, { "alldirectionlines", &FlagSETTINGS, 1922 }
, { "rubberbandmode", &FlagSETTINGS, 1923 }
, { "swapstartdirection", &FlagSETTINGS, 1924 }
, { "showdrcmode", &FlagSETTINGS, 1925 }
, { "resetafterelement", &FlagSETTINGS, 1929 }
, { "ringbellwhenfinished", &FlagSETTINGS, 1931 }
, { "buffer", &FlagBuffer, 0 }
 };
int FlagCurrentStyle( int dummy )
{
  int eax;
  int ecx;
  int ebx;
  int esi;
  int edi;
  Cardinal n;
  /* phantom */ RouteStyleTypePtr style;
{
  Cardinal n = 0;
  /* phantom */ RouteStyleTypePtr style;
  do
  {
    if ( Settings.LineThickness == PCB->RouteStyle->Thick && Settings.ViaThickness == PCB->RouteStyle[1].Diameter && Settings.ViaDrillingHole == PCB->RouteStyle[1].Hole && Settings.Keepaway == PCB->RouteStyle[1].Keepaway )
    {
      return n + 1;
    }
    n++;
    PCB += 0;
  }
  while ( n + 1 != 4 );
}
}
int FlagGrid( int dummy )
{
  return PCB->Grid < 1.000000000000;
}
int FlagGridSize( int dummy )
{
  double fp6;
  return (int)( 0.000000000000 );
}
int FlagBuffer( int dummy )
{
  return Settings.BufferNumber + 1;
}
int FlagElementName( int dummy )
{
  int eax;
  return ( (unsigned char)( PCB->Flags.f ) & 64 ) & 255 ? ( ( 0 - ( ( ( PCB->Flags.f & 32 ) < 1 ) & 1 ) ) & 2 ) + 1 : 2;
}
int FlagTESTFLAG( int bit )
{
  return ( PCB->Flags.f & bit ) != 0;
}
int FlagSETTINGS( int ofs )
{
  return Settings.grid_units_mm;
}
int FlagMode( int x )
{
  if ( x == -1 )
  {
    return Settings.Mode;
  }
  return Settings.Mode == x;
}
int FlagHaveRegex( int x )
{
  return 1;
}
int FlagLayerShown( int n )
{
  switch ( n + 6 )
  {
  case 0:
    return PCB->ElementOn;
    break;
  case 1:
    return PCB->PinOn;
    break;
  case 2:
    return PCB->RatOn;
    break;
  case 3:
    return PCB->ViaOn;
    break;
  case 4:
    return PCB->InvisibleObjectsOn;
    break;
  case 5:
    break;
  default:
    if ( n < 0 || PCB->Data->LayerN <= n )
    {
      return 0;
    }
    return PCB->Data->Layer->On;
    break;
  }
  return ( PCB->Flags.f >> 13 ) & 1;
}
int FlagLayerActive( int n )
{
  int eax;
  int current_layer = -4;
  return n == current_layer;
}
void register_flags_flag_list( void )
{
  hid_register_flags( flags_flag_list, 70 );
  return;
}
#if 0
#endif
