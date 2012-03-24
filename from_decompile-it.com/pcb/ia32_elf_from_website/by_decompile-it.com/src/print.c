#include "print.c.h"
void fab_line( int x1, int y1, int x2, int y2 )
{
  gui->draw_line( Output.fgGC, x1, y1, x2 );
  return;
}
void fab_circle( int x, int y, int r )
{
  int ebx;
  gui->draw_arc( Output.fgGC, y, r );
  gui->draw_arc( Output.fgGC, x, y, r );
  return;
}
void text_at( int x, int y, int align, char *fmt, ... )
{
  int eax;
  int ecx;
  int edx;
  char tmp[512];
  int w, i;
  TextType t;
  /* phantom */ va_list a;
  /* phantom */ FontTypePtr font;
  __vsprintf_chk( tmp, 1, 512, fmt, ebp_24 );
  t.Direction = 0;
  t.TextString = tmp;
  t.Scale = 150;
  t.Flags = MakeFlags( 0 );
  t.Flags.t[0] = MakeFlags( 0 );
  if ( tmp[0] )
  {
    w = 0;
    do
    {
      w = PCB->Font.DefaultSymbol.Y2 + w + *(int*)(PCB + ( tmp[0] * 28 ) + 224);
      tmp[1]++;
    }
    while ( tmp[2] );
  }
  else
  {
  }
  t.Y = y;
  t.X = 0 ? 0 : x + ( 0 - ( ( ( ( w * 150 ) / 100 ) * ( __MOD(align,4) ) ) / 2 ) );
  DrawTextLowLevel( &t, 0 );
  align &= 8;
  if ( align & 8 )
    fab_line( t.X, t.Y + ( ( PCB->Font.MaxHeight * 150 ) / 100 ) + 1000, t.X + ( ( w * 150 ) / 100 ), t.Y + ( ( PCB->Font.MaxHeight * 150 ) / 100 ) + 1000 );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void drill_sym( int idx, int x, int y )
{
  int ecx;
  int edx;
  int ebp_32;
  int ebp_28;
  /* phantom */ int type;
  int size = ( (/*HI*/int)( idx * size ) >> 1 ) - ( idx >> 31 );
  int s2 = ( ( ( (/*HI*/int)( idx * size ) >> 1 ) - ( idx >> 31 ) ) + 1 ) * 1600;
  int i;
  switch ( idx - ( ( ( (/*HI*/int)( idx * size ) >> 1 ) - ( idx >> 31 ) ) * 5 ) )
  {
  case 0:
    fab_line( ebp_28, ebp_32, ebp_28, ebp_32 + s2 );
    fab_line( ebp_28, ebp_32, ebp_28 + ( ( s2 * 13 ) / 15 ), ebp_32 - ( s2 >> 1 ) );
    fab_line( ebp_28, ebp_32, ebp_28 + ( ( ( s2 * 13 ) >> 31 ) - ( ( ( s2 * 13 ) + (/*HI*/int)( ( s2 * 13 ) * 0x88888889 ) ) >> 3 ) ), ebp_32 - ( s2 >> 1 ) );
    if ( size <= 0 )
    {
      return;
    }
    i = 1;
    do
    {
      i++;
      fab_circle( ebp_28, ebp_32, 1600 + 1600 );
    }
    while ( size < i );
    return;
    break;
  case 1:
    fab_line( ebp_28, ebp_32 - s2, ebp_28, ebp_32 + s2 );
    fab_line( ebp_28 - s2, ebp_32, ebp_28 + s2, ebp_32 );
    if ( size <= 0 )
    {
      return;
    }
    ebp_28 += 1600;
    ebp_32 = 1;
    do
    {
      fab_line( ebp_28 + -1600, ebp_32 + -1600, ebp_28, ebp_32 + -1600 );
      fab_line( ebp_28 + -1600, ebp_32 + -1600, ebp_28 + -1600, ebp_32 + 1600 );
      fab_line( ebp_28 + -1600 + -1600, ebp_32 + 1600, ebp_28, ebp_32 + 1600 );
      fab_line( ebp_28, ebp_32 + -1600 + -1600, ebp_28, ebp_32 + 1600 + 1600 );
      ebp_32++;
      ebp_28 += 1600;
    }
    while ( size < ebp_32 );
    return;
    break;
  case 2:
    fab_line( ebp_28 + ( 0 - ( ( s2 * 3 < 0 ? s2 * 3 : ( s2 * 3 ) + 3 ) >> 2 ) ), ebp_32 + ( 0 - ( ( s2 * 3 < 0 ? s2 * 3 : ( s2 * 3 ) + 3 ) >> 2 ) ), ebp_28 + ( ( s2 * 3 < 0 ? s2 * 3 : ( s2 * 3 ) + 3 ) >> 2 ), ebp_32 + ( ( s2 * 3 < 0 ? s2 * 3 : ( s2 * 3 ) + 3 ) >> 2 ) );
    fab_line( ebp_28 + ( 0 - ( ( ( ebp_32 + ( ( s2 * 3 < 0 ? s2 * 3 : ( s2 * 3 ) + 3 ) >> 2 ) ) * 3 < 0 ? ( ebp_32 + ( ( s2 * 3 < 0 ? s2 * 3 : ( s2 * 3 ) + 3 ) >> 2 ) ) * 3 : ( ( ebp_32 + ( ( s2 * 3 < 0 ? s2 * 3 : ( s2 * 3 ) + 3 ) >> 2 ) ) * 3 ) + 3 ) >> 2 ) ), ebp_32 + ( ( s2 * 3 < 0 ? s2 * 3 : ( s2 * 3 ) + 3 ) >> 2 ), ebp_28 + ( ( ( ebp_32 + ( ( s2 * 3 < 0 ? s2 * 3 : ( s2 * 3 ) + 3 ) >> 2 ) ) * 3 < 0 ? ( ebp_32 + ( ( s2 * 3 < 0 ? s2 * 3 : ( s2 * 3 ) + 3 ) >> 2 ) ) * 3 : ( ( ebp_32 + ( ( s2 * 3 < 0 ? s2 * 3 : ( s2 * 3 ) + 3 ) >> 2 ) ) * 3 ) + 3 ) >> 2 ), ebp_32 + ( 0 - ( ( ( ebp_32 + ( ( s2 * 3 < 0 ? s2 * 3 : ( s2 * 3 ) + 3 ) >> 2 ) ) * 3 < 0 ? ( ebp_32 + ( ( s2 * 3 < 0 ? s2 * 3 : ( s2 * 3 ) + 3 ) >> 2 ) ) * 3 : ( ( ebp_32 + ( ( s2 * 3 < 0 ? s2 * 3 : ( s2 * 3 ) + 3 ) >> 2 ) ) * 3 ) + 3 ) >> 2 ) ) );
    if ( size <= 0 )
    {
      return;
    }
    ebp_28 += 1600;
    ebp_32 = 1;
    do
    {
      fab_line( ebp_28 + -1600, ebp_32 + -1600, ebp_28, ebp_32 + -1600 );
      fab_line( ebp_28 + -1600, ebp_32 + -1600, ebp_28 + -1600, ebp_32 + 1600 );
      fab_line( ebp_28 + -1600 + -1600, ebp_32 + 1600, ebp_28, ebp_32 + 1600 );
      fab_line( ebp_28, ebp_32 + -1600 + -1600, ebp_28, ebp_32 + 1600 + 1600 );
      ebp_32++;
      ebp_28 += 1600;
    }
    while ( size < ebp_32 );
    return;
    break;
  case 3:
    i = 0;
    if ( size < 0 )
    {
      return;
    }
    do
    {
      i++;
      fab_circle( ebp_28, ebp_32, 800 + 1600 );
    }
    while ( size < i );
    break;
  case 4:
    if ( size + 1 <= 0 )
    ebp_28 += 1600;
    ebp_32 = 1;
    do
    {
      fab_line( ebp_28 + -1600, ebp_32 + -1600, ebp_28, ebp_32 + -1600 );
      fab_line( ebp_28 + -1600, ebp_32 + -1600, ebp_28 + -1600, ebp_32 + 1600 );
      fab_line( ebp_28 + -1600 + -1600, ebp_32 + 1600, ebp_28, ebp_32 + 1600 );
      fab_line( ebp_28, ebp_32 + -1600 + -1600, ebp_28, ebp_32 + 1600 + 1600 );
      ebp_32++;
      ebp_28 += 1600;
    }
    while ( size + 1 < ebp_32 );
  default:
    return;
    break;
  }
  return;
}
int PrintFab_overhang( void )
{
  int eax;
  int edx;
  DrillInfoTypePtr AllDrills;
  int ds = AllDrills->DrillN;
  if ( AllDrills->DrillN + -1 >= 0 )
  {
    ds = 0;
    do
    {
      ds = ( ds + ( ( *(int*)(AllDrills->Drill + ( ds * 40 ) + -40 + 16 + 4) < *(int*)(AllDrills->Drill + ( ds * 40 ) + -40 + 16) + *(int*)(AllDrills->Drill + ( ds * 40 ) + -40 + 16 + -4) ) & 1 ) + 1 ) - ( ( *(int*)(AllDrills->Drill + ( ds * 40 ) + -40 + 16 + 4) < 1 ) & 1 );
    }
    while ( AllDrills->DrillN + -1 + -1 + -1 >= 0 );
    if ( ds > 3 )
    {
      return ( ds * 15000 ) + 30000;
    }
  }
  return 0x15f90;
}
void PrintFab( void )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  double fp7;
  int ebp_144;
  int ebp_136;
  /* phantom */ PinType tmp_pin;
  DrillInfoTypePtr AllDrills;
  int i, n, yoff, total_drills, ds;
  time_t currenttime;
  char utcTime[64];
  ebp = MakeFlags( 0 );
  AllDrills = GetDrillInfo( &PCB->Data );
  RoundDrillInfo( AllDrills, 100 );
  yoff = 0xfffedb08;
  ebp_136 = 0;
  if ( AllDrills->DrillN + -1 >= 0 )
  {
    ds = 0;
    AllDrills->DrillN = ds + ( AllDrills->DrillN * 40 ) + -40 + 16;
    do
    {
      ds = ( ds + ( ( *(int*)(ds + ( AllDrills->DrillN * 40 ) + -40 + 16 + 4) < *(int*)(ds + ( AllDrills->DrillN * 40 ) + -40 + 16) + *(int*)(ds + ( AllDrills->DrillN * 40 ) + -40 + 16 + -4) ) & 1 ) + 1 ) - ( ( *(int*)(ds + ( AllDrills->DrillN * 40 ) + -40 + 16 + 4) < 1 ) & 1 );
      ds = ds + ( AllDrills->DrillN * 40 ) + -40 + 16 + -40;
      *(int*)(AllDrills->DrillN + -1) += -1;
    }
    while ( AllDrills->DrillN + -1 + -1 + -1 >= 0 );
    yoff = -15000;
    if ( ds <= 3 )
      yoff = ( ds * 15000 ) + 0xfffedb08;
    else
    {
      gui->set_line_width( Output.fgGC, 800, ebp_136, ebp_136 );
      total_drills = 0;
      n = AllDrills->DrillN + -1;
      if ( AllDrills->DrillN + -1 >= 0 )
      {
        ebp_144 = ( AllDrills->DrillN * 40 ) + -40;
      {
        do
        {
          gui->set_color( Output.fgGC, PCB->PinColor, ebp_137, ebp_137 );
          if ( drill->PinN )
          {
            i = 0;
            do
            {
              unplated_sym = ( ( drill->Pin[0]->Flags.f/*.1_1of4*/ & 8 ) & 255 ) == 0 ? ebp_136 : plated_sym;
              i++;
              drill_sym( ( ( drill->Pin[0]->Flags.f/*.1_1of4*/ & 8 ) & 255 ) == 0 ? ebp_136 : plated_sym, drill->Pin[0]->X, drill->Pin[0]->Y );
            }
            while ( drill->PinN <= i );
          }
          if ( plated_sym != -1 )
          {
            drill_sym( plated_sym, 15000, yoff + 3750 );
            text_at( 0x20f58, yoff, 200, "YES" );
            text_at( 0x17ed0, yoff, 200, "%d", ( drill->ViaCount + drill->PinCount ) - drill->UnplatedCount );
            if ( ebp_136 != -1 )
              yoff += -15000;
            else
            {
              gui->set_color( Output.fgGC, PCB->ElementColor );
              text_at( 45000, yoff, 200, "%0.3f" );
              if ( ( ( ebp_136 != -1 ) & ( plated_sym != -1 ) ) == 0 )
              {
              }
              else
                text_at( 45000, yoff + 15000, 200, "%0.3f" );
              total_drills += drill->ViaCount;
              yoff += -15000;
              total_drills += drill->PinCount;
              ebp_144 += -40;
              n += -1;
            }
          }
          else
          if ( ebp_136 != -1 )
          {
          }
          drill_sym( ebp_136, 15000, yoff + 3750 );
          text_at( 0x222e0, yoff, 200, "NO" );
          text_at( 0x17ed0, yoff, 200, "%d", drill->UnplatedCount );
        }
        while ( n + -1 < 0 );
      }
      }
      i = 0;
      gui->set_color( Output.fgGC, PCB->ElementColor );
      text_at( 0, yoff, 900, "Symbol" );
      text_at( 41000, yoff, 900, "Diam. (Inch)" );
      text_at( 0x17318, yoff, 900, "Count" );
      text_at( 0x1fbd0, yoff, 900, "Plated?" );
      text_at( 0, yoff + -15000, 0, "There are %d different drill sizes used in this layout, %d holes total", AllDrills->DrillN, total_drills );
      currenttime = time( 0 );
    {
      /* phantom */ char *fmt;
      strftime( utcTime, 64, "%c UTC", gmtime( &currenttime ) );
      yoff = PCB->Data;
      if ( PCB->Data->LayerN > 0 )
      {
      {
        do
        {
          /* phantom */ LayerType *l;
          if ( PCB->Data->Layer && ( PCB->Data->Layer->LineN || PCB->Data->Layer[1].ArcN ) && ( strcasecmp( "route", &PCB->Data->Layer[1].Name ) == 0 || strcasecmp( "outline", &PCB->Data->Layer[1].Name ) == 0 ) )
          {
            /* phantom */ LayerTypePtr layer;
            gui->set_line_width( Output.fgGC, 1000 );
          {
            Cardinal n = yoff + -1;
            LineTypePtr line;
            if ( yoff + -1 != -1 )
            {
              do
              {
                n += -1;
                gui->draw_line( Output.fgGC, *(long long*)(( yoff * 88 ) + -88 + -88 + *(int*)(yoff + ( i * 92 ) + 112) + 44), *(int*)(( yoff * 88 ) + -88 + -88 + *(int*)(yoff + ( i * 92 ) + 112) + 64) );
              }
              while ( n == -1 );
              i = i;
            }
          {
            Cardinal n = yoff + -1;
            ArcTypePtr arc;
            if ( yoff + -1 != -1 )
            {
              do
              {
                n += -1;
                gui->draw_arc( Output.fgGC, *(long long*)(( yoff * 68 ) + -68 + -68 + *(int*)(yoff + ( i * 92 ) + 124) + 52), *(int*)(( yoff * 68 ) + -68 + -68 + *(int*)(yoff + ( i * 92 ) + 124) + 44) );
              }
              while ( n == -1 );
              i = i;
            }
          {
            Cardinal n = yoff + -1;
            /* phantom */ TextTypePtr text;
            if ( yoff + -1 != -1 )
            {
              do
              {
                n += -1;
                DrawTextLowLevel( esi + edi, 0 );
              }
              while ( n == -1 );
            }
            gui->set_line_width( Output.fgGC, 800 );
            text_at( PCB->MaxWidth / 2, PCB->MaxHeight + 2000, 1, "Board outline is the centerline of this path" );
            text_at( 0x30d40, -30000, 0, "Date: %s", utcTime[0] );
            text_at( 0x30d40, -45000, 0, "Author: %s" );
            if ( PCB->Name == 0 || PCB->Name[0] == 0 )
            {
            }
            text_at( 0x30d40, -60000, 0, "Title: %s - Fabrication Drawing", PCB->Name );
            if ( ebp_28 ^ 0 )
            {
              __stack_chk_fail( );
            }
            break;
          }
          }
          }
          }
          else
          {
            i++;
          }
        }
        while ( PCB->Data->LayerN <= i + 1 );
      }
      }
      if ( PCB->Data->LayerN == i )
      {
        gui->set_line_width( Output.fgGC, 1000 );
        gui->draw_line( (long long)( Output.fgGC ), 0, PCB->MaxWidth );
        gui->draw_line( (long long)( Output.fgGC ), (long long)0 );
        gui->draw_line( Output.fgGC, (long long)( PCB->MaxWidth ), PCB->MaxWidth );
        gui->draw_line( (long long)( Output.fgGC ), PCB->MaxHeight, PCB->MaxWidth );
        gui->set_line_width( Output.fgGC, 800 );
        text_at( 0x30d40, -15000, 0, "Maximum Dimensions: %d mils wide, %d mils high", ( (/*HI*/int)( PCB->MaxHeight * 0x51eb851f ) >> 5 ) - ( PCB->MaxHeight >> 31 ) );
        text_at( PCB->MaxWidth / 2, PCB->MaxHeight + 2000, 1, "Board outline is the centerline of this 10 mil rectangle - 0,0 to %d,%d mils", ( (/*HI*/int)( PCB->MaxWidth * 0x51eb851f ) >> 5 ) - ( PCB->MaxWidth >> 31 ), ( (/*HI*/int)( PCB->MaxHeight * 0x51eb851f ) >> 5 ) - ( PCB->MaxHeight >> 31 ) );
        text_at( 0x30d40, -30000, 0, "Date: %s", utcTime[0] );
        text_at( 0x30d40, -45000, 0, "Author: %s" );
      }
      else
      {
        /* phantom */ LayerTypePtr layer;
        gui->set_line_width( Output.fgGC, 1000 );
      }
    }
    }
  }
  gui->set_line_width( Output.fgGC, 800, ebp_136, ebp_136 );
  total_drills = 0;
  n = AllDrills->DrillN + -1;
}
#if 0
#endif
