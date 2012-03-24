#include "crosshair.c.h"
static Boolean CrosshairStack[16];
static int CrosshairStackLocation;
void XORPolygon( PolygonTypePtr polygon, LocationType dx, LocationType dy )
{
  int ecx;
  int i;
  if ( polygon->PointN != 1 )
  {
    i = 0;
    do
    {
      i++;
      gui->draw_line( Crosshair.GC, dx + polygon->Points->X, dy + polygon->Points->Y, dx + polygon->Points->X );
    }
    while ( polygon->PointN + -1 <= i );
    dy = dy;
    if ( i != 1 )
    {
      gui->draw_line( Crosshair.GC, dx + polygon->Points->X, dy + polygon->Points->Y, dx + polygon->Points->X );
    }
  }
  return;
}
void XORDrawAttachedArc( BDimension thick )
{
  int eax;
  int ecx;
  int edx;
  ArcType arc;
  BoxTypePtr bx;
  LocationType wx = Crosshair.X - Crosshair.AttachedBox.Point1.X;
  LocationType wy = Crosshair.Y - Crosshair.AttachedBox.Point1.Y;
  int sa, dir;
  /* phantom */ BDimension wid;
  if ( Crosshair.AttachedBox.Point1.Y != Crosshair.Y || wx )
  {
    arc.X = Crosshair.AttachedBox.Point1.X;
    arc.Y = Crosshair.AttachedBox.Point1.Y;
    if ( Crosshair.AttachedBox.otherway )
    {
      if ( ( wy ^ ( wy >> 31 ) ) - ( wy >> 31 ) <= ( wx ^ ( wx >> 31 ) ) - ( wx >> 31 ) )
        goto B6;
      else
      {
        if ( wy >= 0 )
        {
          sa = -90;
          arc.Y += ebp_108;
        }
        else
        {
          sa = 90;
          arc.Y -= ( wx ^ ( wx >> 31 ) ) - ( wx >> 31 );
        }
        dir = ( ( wx >> 31 ) | 1 ) == ( ( wy >> 31 ) | 1 ) ? 90 : -90;
        arc.StartAngle = sa;
        arc.Delta = dir;
        arc.Height = ( wy ^ ( wy >> 31 ) ) - ( wy >> 31 );
        arc.Width = ( wy ^ ( wy >> 31 ) ) - ( wy >> 31 );
        gui->draw_arc( Crosshair.GC, arc.X, arc.Width + ( thick / 2 ) );
        if ( pixel_slop < thick / 2 )
        {
          gui->draw_arc( Crosshair.GC, arc.X, arc.Width - ( thick / 2 ) );
          if ( dir > 0 )
          {
            ecx( Crosshair.GC, bx->X1, *(int*)GetArcEnds( &arc )/*.4*/, bx );
          }
          else
          if ( !1 )
          {
            ecx( Crosshair.GC, bx->X1, sa );
          }
          else
          {
            ecx( Crosshair.GC, bx->X1, *(int*)GetArcEnds( &arc )/*.4*/, bx );
          }
          ebx( Crosshair.GC, *(int*)GetArcEnds( &arc )/*.8*/, bx->Y2, bx / 2 );
        }
      }
    }
    else
    if ( ( wy ^ ( wy >> 31 ) ) - ( wy >> 31 ) <= ( wx ^ ( wx >> 31 ) ) - ( wx >> 31 ) )
    {
    }
B6:;
    if ( wx >= 0 )
    {
      arc.X += ( wy ^ ( wy >> 31 ) ) - ( wy >> 31 );
      sa = 0;
    }
    else
    {
      arc.X -= ( wy ^ ( wy >> 31 ) ) - ( wy >> 31 );
      sa = 180;
    }
    dir = 1 == ( ( wy >> 31 ) | 1 ) ? -90 : 90;
    arc.StartAngle = sa;
    arc.Delta = dir;
    arc.Height = ( wy ^ ( wy >> 31 ) ) - ( wy >> 31 );
    arc.Width = ( wy ^ ( wy >> 31 ) ) - ( wy >> 31 );
    gui->draw_arc( Crosshair.GC, arc.X, arc.Width + ( thick / 2 ) );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void XORDrawAttachedLine( LocationType x1, LocationType y1, LocationType x2, LocationType y2, BDimension thick )
{
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  LocationType dx = x2 - x1;
  LocationType dy = y2 - y1;
  LocationType ox;
  LocationType oy;
  float h;
  if ( y2 == y1 && dx == 0 )
    h = 0.000000000000;
  else
  if ( dy > 0 )
  {
    ox = (int)( 0.000000000000 + h );
    if ( dx > 0 )
      h = 0.000000000000;
    else
    if ( !1 )
      h = 0.000000000000;
    else
      h = 0.000000000000;
    oy = (int)( -( 0.500000000000 ) );
    gui->draw_line( Crosshair.GC, x1 + ox, y1 + (int)( -( 0.500000000000 ) ), x2 + ox );
    if ( pixel_slop <= ( ox ^ ( ox >> 31 ) ) - ( ox >> 31 ) )
    {
    }
    else
    if ( pixel_slop <= ( oy ^ ( oy >> 31 ) ) - ( oy >> 31 ) )
    {
    }
    else
    {
      return;
    }
  {
    LocationType angle = (int)( fp1 * 57.295779000000 );
    gui->draw_line( Crosshair.GC, x1 - ox, y1 - oy, x2 - ox );
    gui->draw_arc( Crosshair.GC, x1, thick / 2, thick / 2 );
    gui->draw_arc( Crosshair.GC, x2, y2, thick / 2 );
    return;
  }
  }
  else
  if ( !1 )
    h = -0.500000000000;
  else
  {
  }
  h = 0.000000000000;
  fp5 = 0.000000000000;
}
void XORDrawElement( ElementTypePtr Element, LocationType DX, LocationType DY )
{
  int ebp_48;
  if ( Element->ArcN )
  {
  }
  else
  if ( Element->LineN == 0 )
  {
    gui->draw_line( Crosshair.GC, Element->BoundingBox.X1 + DX, Element->BoundingBox.Y1 + DY, Element->BoundingBox.X1 + DX );
    gui->draw_line( Crosshair.GC, Element->BoundingBox.X1 + DX, Element->BoundingBox.Y2 + DY, Element->BoundingBox.X2 + DX );
    gui->draw_line( Crosshair.GC, Element->BoundingBox.X2 + DX, Element->BoundingBox.Y2 + DY, Element->BoundingBox.X2 + DX );
    gui->draw_line( Crosshair.GC, Element->BoundingBox.X2 + DX, Element->BoundingBox.Y1 + DY, Element->BoundingBox.X1 + DX );
  {
    Cardinal n;
    Cardinal sn = Element->PinN;
    PinTypePtr pin;
    if ( Element->PinN )
    {
      n = 0;
      do
      {
        gui->draw_arc( Crosshair.GC, Element->Pin->X + DX, Element->Pin->Y + DY, Element->Pin->Thickness / 2 );
      }
      while ( Element->PinN == 0 || sn <= ( sn + n + 1 ) - DY );
      DX = DX;
      DY = DY;
    }
  {
    Cardinal n;
    Cardinal sn;
    PadTypePtr pad;
    ebp_48 = 0;
    n = 0;
    while ( 1 )
    {
      sn = Element->PadN;
      do
      {
        if ( sn && n < sn )
        {
          pad = ebp_48 + Element->Pad;
          if ( Settings.ShowSolderSide != ( ( pad->Flags.f >> 7 ) & 1 ) && PCB->InvisibleObjectsOn == 0 )
            continue;
          else
          {
            if ( pad->Point2.X != pad->Point1.X )
            {
              if ( pad->Point2.Y != pad->Point1.Y )
              {
                gui->draw_line( Crosshair.GC, ebp_116, ebp_112, ebp_108 );
                sn = Element->PadN;
              }
              else
              {
              }
            }
            else
            {
            }
          {
            int minx = DX + ( pad->Point2.X <= pad->Point1.X ? pad->Point1.X : pad->Point2.X ) + ( 0 - ( minx / 2 ) ), miny, maxx = DX + ( (unsigned char)( ( pad->Point2.X < maxx ) ^ 1 ) ? maxx : pad->Point2.X ) + ( ( pad->Thickness + ( *(int*)(pad->BoundingBox.X1 + 36) >> 31 ) ) >> 1 ), maxy;
            miny = DY + ( 0 - ( pad->Thickness / 2 ) ) + ( pad->Point1.Y < pad->Point1.Y ? pad->Point1.Y : pad->Point1.Y );
            maxy = DY + ( ( pad->Thickness + ( *(int*)(pad->BoundingBox.X1 + 36) >> 31 ) ) >> 1 ) + ( pad->Point1.Y < pad->Point1.Y ? pad->Point1.Y : pad->Point1.Y );
            gui->draw_line( Crosshair.GC, DX + ( n <= n ? n : n ) + ( 0 - ( minx / 2 ) ), DY + ( 0 - ( DX / 2 ) ) + ( Element->PinN < pad->Point1.Y ? pad->Point1.Y : Element->PinN ), DY + ( 0 - ( DX / 2 ) ) + ( Element->PinN < pad->Point1.Y ? pad->Point1.Y : Element->PinN ) );
            gui->draw_line( Crosshair.GC, minx, DY + ( 0 - ( minx / 2 ) ) + ( pad->Point1.Y < pad->Point1.Y ? pad->Point1.Y : pad->Point1.Y ), minx );
            gui->draw_line( Crosshair.GC, DX + ( (unsigned char)( ( pad->Point2.X < maxx ) ^ 1 ) ? maxx : pad->Point2.X ) + ( ( minx + ( *(int*)(minx + 36) >> 31 ) ) >> 1 ), DY + ( 0 - ( minx / 2 ) ) + ( pad->Point1.Y < pad->Point1.Y ? pad->Point1.Y : pad->Point1.Y ), DX + ( (unsigned char)( ( pad->Point2.X < maxx ) ^ 1 ) ? maxx : pad->Point2.X ) + ( ( minx + ( *(int*)(minx + 36) >> 31 ) ) >> 1 ) );
            gui->draw_line( Crosshair.GC, ebp_116, ebp_112, ebp_108 );
            sn = Element->PadN;
          }
          }
        }
        else
        {
          DX = DX;
          DY = DY;
          gui->draw_line( Crosshair.GC, DX + Element->MarkX + -1000, DY + Element->MarkY, DX + Element->MarkX );
          gui->draw_line( Crosshair.GC, Element->MarkX + DX + 1000, Element->MarkY + DY, Element->MarkX + DX );
          gui->draw_line( Crosshair.GC, Element->MarkX + DX + -1000, Element->MarkY + DY, Element->MarkX + DX );
          DY = Element->MarkY + DY;
          gui->draw_line( Crosshair.GC, Element->MarkX + DX + 1000, Element->MarkY + DY, Element->MarkX + DX );
          return;
        }
      }
      while ( Element->PadN != sn );
      n++;
      ebp_48 += 104;
    }
  }
  }
  }
{
  Cardinal n = Element->LineN + -1;
  LineTypePtr line;
  if ( Element->LineN + -1 != -1 )
  {
    n = n;
    do
    {
      n += -1;
      gui->draw_line( Crosshair.GC, DX + *(int*)(( Element->LineN * 88 ) + -88 + -88 + *(int*)(Element + 264) + 44), DY + *(int*)(( Element->LineN * 88 ) + -88 + -88 + *(int*)(Element + 264) + 48), DX + *(int*)(( Element->LineN * 88 ) + -88 + -88 + *(int*)(Element + 264) + 64) );
    }
    while ( n == -1 );
    Element = Element;
    DY = DY;
  }
{
  Cardinal n = Element->ArcN + -1;
  ArcTypePtr arc;
  if ( Element->ArcN + -1 != -1 )
  {
    n = n;
    do
    {
      n += -1;
      gui->draw_arc( Crosshair.GC, DX + *(int*)(( Element->ArcN * 68 ) + -68 + -68 + *(int*)(Element + 268) + 52), DY + *(int*)(( Element->ArcN * 68 ) + -68 + -68 + *(int*)(Element + 268) + 56), *(int*)(( Element->ArcN * 68 ) + -68 + -68 + *(int*)(Element + 268) + 44) );
    }
    while ( n == -1 );
    Element = Element;
    DY = DY;
  }
}
}
}
void DrawAttached( Boolean BlockToo )
{
  int eax;
  int ecx;
  int edx;
  int ebp_36;
  BDimension s;
  switch ( Settings.Mode )
  {
  case 106:
    if ( Crosshair.AttachedObject.Type )
    {
      gui->draw_line( Crosshair.GC, *(int*)(Crosshair.AttachedObject.Ptr3), Crosshair.AttachedObject.Ptr3[1], Crosshair.AttachedObject.Ptr2[11] );
      gui->draw_line( Crosshair.GC, *(int*)(Crosshair.AttachedObject.Ptr3), Crosshair.AttachedObject.Ptr3[1], Crosshair.AttachedObject.Ptr2[16] );
    }
    break;
  default:
    if ( eax < 106 )
    {
      if ( Crosshair.AttachedBox.State == 109 )
      {
        if ( Crosshair.AttachedBox.State == 0 )
        {
          if ( BlockToo && Crosshair.AttachedBox.State == 2 )
          {
            /* phantom */ LocationType x1;
            /* phantom */ LocationType y1;
            /* phantom */ LocationType x2;
            /* phantom */ LocationType y2;
            gui->draw_rect( Crosshair.GC, Crosshair.AttachedBox.Point1.X, Crosshair.AttachedBox.Point1.Y, Crosshair.AttachedBox.Point2.X );
            return;
          }
          return;
        }
        else
        {
          XORDrawAttachedArc( Settings.LineThickness );
          if ( ( PCB->Flags.f/*.1_1of4*/ & 8 ) & 255 )
          {
            gui->set_color( Crosshair.GC, Settings.CrossColor );
            XORDrawAttachedArc( Settings.LineThickness + ( ( PCB->Bloat + 1 ) * 2 ) );
            gui->set_color( Crosshair.GC, Settings.CrosshairColor );
          }
        }
      }
    }
    else
    {
      if ( Settings.Mode >= 104 )
      {
        ebp_36 = Crosshair.Y - Crosshair.AttachedObject.Y;
        switch ( Crosshair.AttachedObject.Type )
        {
          if ( ccdep2 < ccdep1 )
          {
            if ( Crosshair.AttachedObject.Type == 8 )
              XORPolygon( &Crosshair.AttachedObject.Ptr2[0], Crosshair.X - Crosshair.AttachedObject.X, ebp_36 );
            else
            {
              if ( Crosshair.AttachedObject.Type == 16 )
              {
                gui->draw_rect( Crosshair.GC, ( Crosshair.X - Crosshair.AttachedObject.X ) + *(int*)(Crosshair.AttachedObject.Ptr2), Crosshair.AttachedObject.Ptr2[1] + ebp_36, Crosshair.AttachedObject.Ptr2[2] + ( Crosshair.X - Crosshair.AttachedObject.X ) );
              }
            }
          }
          else
          {
            if ( Crosshair.AttachedObject.Type == 1 )
            {
              gui->draw_arc( Crosshair.GC, Crosshair.AttachedObject.Ptr2[13] + ( Crosshair.X - Crosshair.AttachedObject.X ), ebp_80, ebp_76 );
            }
            else
            {
              if ( Crosshair.AttachedObject.Type == 2 )
                XORDrawElement( &Crosshair.AttachedObject.Ptr2[0], Crosshair.X - Crosshair.AttachedObject.X, ebp_36 );
            }
          }
          break;
        default:
          if ( eax < 2048 )
          {
            if ( Crosshair.AttachedObject.Type == 4096 )
            {
              if ( Crosshair.AttachedObject.Ptr3 == Crosshair.AttachedObject.Ptr2 + 44 )
                XORDrawAttachedLine( ( Crosshair.X - Crosshair.AttachedObject.X ) + *(int*)(Crosshair.AttachedObject.Ptr3), ebp_36 + Crosshair.AttachedObject.Ptr3[1], Crosshair.AttachedObject.Ptr2[16], Crosshair.AttachedObject.Ptr2[17], Crosshair.AttachedObject.Ptr2[9] );
              else
                XORDrawAttachedLine( ( Crosshair.X - Crosshair.AttachedObject.X ) + *(int*)(Crosshair.AttachedObject.Ptr3), ebp_36 + Crosshair.AttachedObject.Ptr3[1], Crosshair.AttachedObject.Ptr2[11], Crosshair.AttachedObject.Ptr2[12], Crosshair.AttachedObject.Ptr2[9] );
            }
            else
            {
              if ( Crosshair.AttachedObject.Type == 16384 )
              {
                gui->draw_arc( Crosshair.GC, Crosshair.AttachedObject.Ptr2[13] + ( Crosshair.X - Crosshair.AttachedObject.X ), ebp_80, ebp_76 );
              }
            }
          }
          else
          {
            if ( Crosshair.AttachedObject.Type == 512 )
              continue;
            else
            {
              if ( Crosshair.AttachedObject.Type == 1024 )
                gui->draw_line( Crosshair.GC, Crosshair.AttachedObject.Ptr1[54], Crosshair.X );
                gui->draw_rect( Crosshair.GC, ( Crosshair.X - Crosshair.AttachedObject.X ) + *(int*)(Crosshair.AttachedObject.Ptr2), Crosshair.AttachedObject.Ptr2[1] + ebp_36, Crosshair.AttachedObject.Ptr2[2] + ( Crosshair.X - Crosshair.AttachedObject.X ) );
            }
          }
          break;
        case 4:
          XORDrawAttachedLine( Crosshair.AttachedObject.Ptr2[11] + ( Crosshair.X - Crosshair.AttachedObject.X ), Crosshair.AttachedObject.Ptr2[12] + ebp_36, Crosshair.AttachedObject.Ptr2[16] + ( Crosshair.X - Crosshair.AttachedObject.X ), Crosshair.AttachedObject.Ptr2[17] + ebp_36, Crosshair.AttachedObject.Ptr2[9] );
          break;
        case 2048:
          if ( Crosshair.AttachedObject.Ptr2[14] == Crosshair.AttachedObject.Ptr3 )
            *(int*)(Crosshair.AttachedObject.Ptr2) = Crosshair.AttachedObject.Ptr3[0];
          else
          if ( Crosshair.AttachedObject.Ptr3 == Crosshair.AttachedObject.Ptr2[14] + ( ( Crosshair.AttachedObject.Ptr2[9] + -1 ) * 20 ) )
          {
          }
          else
          {
          }
          gui->draw_line( Crosshair.GC, *(int*)(Crosshair.AttachedObject.Ptr2), Crosshair.AttachedObject.Ptr2[1], ( Crosshair.X - Crosshair.AttachedObject.X ) + *(int*)(Crosshair.AttachedObject.Ptr3) );
          gui->draw_line( Crosshair.GC, ( Crosshair.X - Crosshair.AttachedObject.X ) + *(int*)(Crosshair.AttachedObject.Ptr3), ebp_36 + Crosshair.AttachedObject.Ptr3[1], Crosshair.AttachedObject.Ptr3[5] );
          break;
        case 256:
          break;
        }
        if ( Crosshair.AttachedObject.RubberbandN )
        {
          while ( ( (unsigned char)( *(int*)(*(int*)(Crosshair.AttachedObject.Rubberband + 12 + 4) + 20) ) & 2 ) & 255 )
          {
            if ( Crosshair.AttachedObject.RubberbandN + -1 == 1 )
            {
              if ( Crosshair.AttachedBox.State == 1 )
              {
                /* phantom */ LocationType x1;
                /* phantom */ LocationType y1;
                /* phantom */ LocationType x2;
                /* phantom */ LocationType y2;
                gui->draw_rect( Crosshair.GC, Crosshair.AttachedBox.Point1.X, Crosshair.AttachedBox.Point1.Y, Crosshair.AttachedBox.Point2.X );
                break;
              }
            }
            else
            {
            }
          }
          if ( ( ah & 2 ) & 255 )
          {
            XORDrawAttachedLine( *(int*)(Crosshair.AttachedObject.Rubberband[1].Line + 44), *(int*)(Crosshair.AttachedObject.Rubberband[1].Line + 44 + 4), ( Crosshair.X - Crosshair.AttachedObject.X ) + *(int*)(edx + 64), ebp_36 + *(int*)(edx + 64 + 4), *(int*)(edx + 36) );
          }
          else
          if ( Crosshair.AttachedObject.Rubberband[1].MovedPoint == Crosshair.AttachedObject.Rubberband[1].Line + 44 )
            XORDrawAttachedLine( Crosshair.AttachedObject.Rubberband[1].Line->Point1.X + ( Crosshair.X - Crosshair.AttachedObject.X ), ebp_36 + Crosshair.AttachedObject.Rubberband[1].Line->Point1.Y, Crosshair.AttachedObject.Rubberband[1].Line->Point2.X + ( Crosshair.X - Crosshair.AttachedObject.X ), ebp_36 + Crosshair.AttachedObject.Rubberband[1].Line->Point2.Y, Crosshair.AttachedObject.Rubberband[1].Line->Thickness );
        }
      }
    }
    break;
  case 1:
    gui->draw_arc( Crosshair.GC, Crosshair.X, Settings.ViaThickness / 2 );
    if ( ( PCB->Flags.f/*.1_1of4*/ & 8 ) & 255 )
    {
      s = PCB->Bloat + ( Settings.ViaThickness / 2 ) + 1;
      gui->set_color( Crosshair.GC, Settings.CrossColor );
      gui->draw_arc( Crosshair.GC, Crosshair.X, s );
    }
    break;
  case 4:
    if ( Crosshair.AttachedLine.State )
      gui->draw_line( Crosshair.GC, Crosshair.AttachedLine.Point1.X, Crosshair.AttachedLine.Point1.Y, Crosshair.AttachedLine.Point2.X );
    if ( Crosshair.AttachedPolygon.PointN > 1 )
      XORPolygon( &Crosshair.AttachedPolygon, 0, 0 );
    break;
  case 2:
    if ( Crosshair.AttachedLine.State && Crosshair.AttachedLine.draw )
    {
      XORDrawAttachedLine( Crosshair.AttachedLine.Point1.X, Crosshair.AttachedLine.Point1.Y, Crosshair.AttachedLine.Point2.X, Crosshair.AttachedLine.Point2.Y, PCB->RatDraw == 0 ? 10 : Settings.LineThickness );
      if ( PCB->Clipping )
      {
        XORDrawAttachedLine( Crosshair.AttachedLine.Point2.X, Crosshair.AttachedLine.Point2.Y, Crosshair.X, Crosshair.Y, *(char*)(PCB + 40) == 0 ? 10 : Settings.LineThickness );
      }
      if ( ( *(char*)(PCB + 4) & 8 ) & 255 )
      {
        gui->set_color( Crosshair.GC, Settings.CrossColor );
        XORDrawAttachedLine( Crosshair.AttachedLine.Point1.X, Crosshair.AttachedLine.Point1.Y, Crosshair.AttachedLine.Point2.X, Crosshair.AttachedLine.Point2.Y, Settings.LineThickness + ( ( PCB->Bloat + 1 ) * 2 ) );
        if ( PCB->Clipping )
        {
          XORDrawAttachedLine( Crosshair.AttachedLine.Point2.X, Crosshair.AttachedLine.Point2.Y, Crosshair.X, Crosshair.Y, Settings.LineThickness + ( ( PCB->Bloat + 1 ) * 2 ) );
        }
      }
    }
    break;
  case 5:
    if ( PCB->Data->LayerN != -2 )
    {
      ebp_36 = 0;
      do
      {
        if ( PCB->Data->Layer->On )
        {
          if ( Buffers[ Settings.BufferNumber + 0 ].Data->ViaN + -1 != -1 )
          {
            do
            {
              gui->draw_line( Crosshair.GC, ( Crosshair.X - Buffers[ Settings.BufferNumber ].X ) + *(int*)(*(int*)(( ebp_36 * 92 ) + 112) + ( Buffers[ Settings.BufferNumber + 0 ].Data->ViaN * 88 ) + -132), ( Crosshair.Y - Buffers[ Settings.BufferNumber ].Y ) + *(int*)(*(int*)(( ebp_36 * 92 ) + 112) + ( Buffers[ Settings.BufferNumber + 0 ].Data->ViaN * 88 ) + -128), ( Crosshair.X - Buffers[ Settings.BufferNumber ].X ) + *(int*)(*(int*)(( ebp_36 * 92 ) + 112) + ( Buffers[ Settings.BufferNumber + 0 ].Data->ViaN * 88 ) + -112) );
            }
            while ( ebx == -1 );
          }
          if ( Buffers[ Settings.BufferNumber + 0 ].Data->Layer->ArcN + -1 != -1 )
          {
            do
            {
              gui->draw_arc( Crosshair.GC, esi + *(int*)(*ebp_32 + edi + 52), ebp_28 + *(int*)(*ebp_32 + edi + 56), *(int*)(*ebp_32 + edi + 44) );
            }
            while ( ebx == -1 );
          }
          if ( Buffers[ Settings.BufferNumber + 0 ].Data->Layer->TextN + -1 != -1 )
          {
            do
            {
              gui->draw_rect( Crosshair.GC, esi + *(int*)(*ebp_28 + edi), edx + *(int*)(*ebp_28 + edi + 4), esi + *(int*)(*ebp_28 + edi + 8) );
            }
            while ( ebx == -1 );
          }
          if ( Buffers[ Settings.BufferNumber + 0 ].Data->Layer->PolygonN + -1 != -1 )
          {
            do
            {
              XORPolygon( *ebp_32 + edi, ebp_28, esi );
            }
            while ( ebx == -1 );
          }
        }
        ebp_36++;
      }
      while ( PCB->Data->LayerN + 2 <= ebp_36 );
    }
    if ( PCB->PinOn && PCB->ElementOn && Buffers[ Settings.BufferNumber + 0 ].Data->ElementN + -1 != -1 )
    {
      while ( 1 )
      {
        if ( Settings.ShowSolderSide != ( ( *(int*)(( Buffers[ Settings.BufferNumber + 0 ].Data->ElementN * 300 ) + -300 + *(int*)(Buffers[ Settings.BufferNumber + 0 ].Data + 32) + 20) >> 7 ) & 1 ) && PCB->InvisibleObjectsOn == 0 )
          goto B107;
        else
          XORDrawElement( &Buffers[ Settings.BufferNumber + 0 ].Data->ViaN, Crosshair.X - Buffers[ Settings.BufferNumber ].X, Crosshair.X - Buffers[ Settings.BufferNumber ].X );
B107:;
        if ( Buffers[ Settings.BufferNumber + 0 ].Data->ElementN + -1 + -1 + -1 == -1 )
          break;
        else
        {
        }
      }
    }
    if ( PCB->ViaOn && Buffers[ Settings.BufferNumber + 0 ].Data->ViaN )
    {
      do
      {
        gui->draw_arc( Crosshair.GC, Buffers[ Settings.BufferNumber + 0 ].Data->Via->BoundingBox.X1 + ( Crosshair.X - Buffers[ Settings.BufferNumber ].X ), Buffers[ Settings.BufferNumber + 0 ].Data->Via->BoundingBox.X1 + ( Crosshair.X - Buffers[ Settings.BufferNumber ].X ), Buffers[ Settings.BufferNumber + 0 ].Data->Via->BoundingBox.X1 / 2 );
      }
      while ( Buffers[ Settings.BufferNumber + 0 ].Data->ViaN == 0 || Buffers[ Settings.BufferNumber + 0 ].Data->ViaN <= ( Buffers[ Settings.BufferNumber + 0 ].Data->ViaN + ( ( Buffers[ Settings.BufferNumber + 0 ].Data->ViaN + 0 + 1 ) - Buffers[ Settings.BufferNumber + 0 ].Data->ViaN ) + 1 ) - ( Crosshair.X - Buffers[ Settings.BufferNumber ].X ) );
    }
    break;
  }
}
void CrosshairOn( Boolean BlockToo )
{
  int eax;
  if ( 1 )
  {
    BlockToo = BlockToo;
    Crosshair.On = 1;
    DrawAttached( BlockToo );
    *(int*)&BlockToo = 1;
  }
  return;
}
void CrosshairOff( Boolean BlockToo )
{
  int eax;
  if ( !1 )
  {
    BlockToo = BlockToo;
    Crosshair.On = 0;
    DrawAttached( BlockToo );
    *(int*)&BlockToo = 1;
  }
  return;
}
void HideCrosshair( Boolean BlockToo )
{
  int eax;
  int edx;
  if ( CrosshairStackLocation > 15 )
  {
    __fprintf_chk( stderr, 1, "Error: CrosshairStackLocation overflow\n" );
    return;
  }
  BlockToo = BlockToo;
  CrosshairStack[ CrosshairStackLocation ] = Crosshair.On;
  BlockToo = BlockToo;
  CrosshairStackLocation++;
}
void RestoreCrosshair( Boolean BlockToo )
{
  int eax;
  int edx;
  if ( CrosshairStackLocation <= 0 )
  {
    __fprintf_chk( stderr, 1, "Error: CrosshairStackLocation underflow\n" );
    return;
  }
  CrosshairStackLocation += -1;
  if ( CrosshairStackLocation/*.1_1of4*/ )
  {
    BlockToo = BlockToo;
    BlockToo = BlockToo;
  }
  BlockToo = BlockToo;
  BlockToo = BlockToo;
}
void FitCrosshairIntoGrid( LocationType X, LocationType Y )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  double fp5;
  double fp6;
  double fp7;
  LocationType x2 = PCB->MaxWidth;
  LocationType y2 = PCB->MaxHeight;
  LocationType x0;
  LocationType y0;
  void *ptr1, *ptr2, *ptr3;
  int ans;
  Crosshair.X = Crosshair.MaxX < ( X < Crosshair.MinX ? X : Crosshair.MinX ) ? X < Crosshair.MinX ? X : Crosshair.MinX : Crosshair.MaxX;
  Crosshair.Y = Crosshair.MaxY < ( Y < Crosshair.MinY ? Y : Crosshair.MinY ) ? Y < Crosshair.MinY ? Y : Crosshair.MinY : Crosshair.MaxY;
  if ( PCB->RatDraw || ( ( *(char*)(PCB + 5) & 16 ) & 255 ) )
  {
    if ( ans == 0 )
    {
      if ( PCB->RatDraw == 0 )
      {
        if ( ans == 0 )
        {
          if ( PCB->RatDraw == 0 )
            SearchScreen( Crosshair.X, Crosshair.Y, 2, &ptr1, &ptr2, &ptr3 );
        }
      }
    }
    if ( Settings.Mode == 104 )
    {
      if ( Crosshair.AttachedObject.Type != 1 )
      {
        y0 = -600;
        if ( ( 0 & 255 ) == 0 )
        {
          if ( Crosshair.X < 0 || x2 < Crosshair.X )
          {
            if ( (double)( x2 + 1 ) <= PCB->Grid )
            {
              x2 = Crosshair.Y;
              if ( Crosshair.Y >= 0 )
              {
                if ( y2 < Crosshair.Y )
                {
                  if ( (double)( y2 + 1 ) <= 0.000000000000 )
                  {
                    y2 = (int)( ( 0.500000000000 * (double)( (int)( ( 0.000000000000 - (double)( *(int*)(PCB + 140) ) ) / 0.000000000000 ) ) ) + 0.500000000000 + (double)( *(int*)(PCB + 140) ) );
                    if ( Marked.status )
                    {
                      if ( PCB->Flags.f/*.1_2of4*/ < 0 )
                      {
                        /* phantom */ int dx;
                        /* phantom */ int dy;
                        y0 = ( ( Crosshair.X - Marked.X ) ^ ( ( Crosshair.X - Marked.X ) >> 31 ) ) - ( ( Crosshair.X - Marked.X ) >> 31 ) <= ( ( x2 - Marked.Y ) ^ ( ( x2 - Marked.Y ) >> 31 ) ) - ( ( x2 - Marked.Y ) >> 31 ) ? Marked.Y : y2;
                      }
                    }
                    y0 = y2;
                  }
                  else
                    y2 /= 2;
                    if ( Marked.status )
                    {
                    }
                }
                else
                  y2 = (int)( ( 0.500000000000 * (double)( (int)( (double)( x2 - *(int*)(PCB + 140) ) / 0.000000000000 ) ) ) + 0.500000000000 + (double)( *(int*)(PCB + 140) ) );
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
          x2 = Crosshair.Y;
          if ( Crosshair.Y >= 0 )
          {
          }
        }
        if ( ans & 512 )
        {
          PadTypePtr pad;
          LocationType px = ((int*)ptr2);
          LocationType py;
          x2 = ((int*)ptr2) - Crosshair.X;
          y2 = ((int*)ptr2) - Crosshair.Y;
          py = ( (double)( x2 ) * (double)( x2 ) ) + ( (double)( y2 ) * (double)( y2 ) ) <= ( (double)( ((int*)ptr2) - Crosshair.X ) * (double)( ((int*)ptr2) - Crosshair.X ) ) * 0.000000000000 ? ((int*)ptr2) : ((int*)ptr2);
          px = ( (double)( x2 ) * (double)( x2 ) ) + ( (double)( y2 ) * (double)( y2 ) ) <= ( (double)( ((int*)ptr2) - Crosshair.X ) * (double)( ((int*)ptr2) - Crosshair.X ) ) * 0.000000000000 ? ((int*)ptr2) : ((int*)ptr2);
          gui->shift_is_pressed( );
          if ( gui )
          {
          }
          else
          {
            if ( py >= 0 && px >= 0 )
            {
              Crosshair.X = px;
              Crosshair.Y = py;
            }
            if ( Settings.Mode == 110 )
            {
              if ( ans == 0 )
              {
                hid_action( "PointCursor" );
              }
              else
              {
                if ( ( ( ((int*)ptr2) & 64 ) & 255 ) == 0 )
                  hid_actionl( "PointCursor", (long long)( "True" ) );
              }
            }
            if ( Settings.Mode == 2 && Crosshair.AttachedLine.State && PCB->Flags.f/*.1_1of4*/ < 0 )
              EnforceLineDRC( );
            gui->set_crosshair( Crosshair.X, 0, ebp_76 );
            return;
          }
        }
        else
        if ( ans & 257 )
        {
          pin = &ptr2[0];
          gui->shift_is_pressed( );
          if ( gui == 0 )
          {
            x0 = y0;
            y0 = pin->Y;
          }
          else
          {
            x0 = pin->X;
            y0 = pin->Y;
          }
        }
        else
        {
          if ( ( ans/*.1_1of4*/ & 16 ) & 255 )
          {
            PointTypePtr pnt;
            x0 = ((int*)ptr3);
            y0 = ((int*)ptr3);
            y2 = ( ( ( x2 - Marked.Y ) ^ ( ( x2 - Marked.Y ) >> 31 ) ) - ( ( x2 - Marked.Y ) >> 31 ) < ( ( Crosshair.X - Marked.X ) ^ ( ( Crosshair.X - Marked.X ) >> 31 ) ) - ( ( Crosshair.X - Marked.X ) >> 31 ) ? Marked.X : (int)( 0.500000000000 + ( (double)( (int)( ( (double)( Crosshair.X - *(int*)(PCB + 136) ) + ( *(double*)(PCB + 152) * 0.500000000000 ) ) / *(double*)(PCB + 152) ) ) * *(double*)(PCB + 152) ) + (double)( *(int*)(PCB + 136) ) ) ) - Crosshair.X;
            x2 = ((int*)ptr3) - Crosshair.Y;
            y2 = y2 * y2;
            x2 = x2 * x2;
            if ( ( ( y0 - Crosshair.Y ) * ( y0 - Crosshair.Y ) ) + ( y2 * y2 ) <= x2 + ( ( ((int*)ptr3) - Crosshair.X ) * ( ((int*)ptr3) - Crosshair.X ) ) )
              goto B46;
          }
          else
          if ( ( ( ans/*.1_1of4*/ & 2 ) & 255 ) == 0 || ( (double)( (int)( 0.500000000000 + ( (double)( (int)( ( (double)( Crosshair.X - *(int*)(PCB + 136) ) + ( *(double*)(PCB + 152) * 0.500000000000 ) ) / *(double*)(PCB + 152) ) ) * *(double*)(PCB + 152) ) + (double)( *(int*)(PCB + 136) ) ) - Crosshair.X ) * (double)( (int)( 0.500000000000 + ( (double)( (int)( ( (double)( Crosshair.X - *(int*)(PCB + 136) ) + ( *(double*)(PCB + 152) * 0.500000000000 ) ) / *(double*)(PCB + 152) ) ) * *(double*)(PCB + 152) ) + (double)( *(int*)(PCB + 136) ) ) - Crosshair.X ) ) * 0.000000000000 <= ( (double)( ((int*)ptr1) - Crosshair.X ) * (double)( ((int*)ptr1) - Crosshair.X ) ) * 0.000000000000 )
            goto B46;
        {
B46:;
          ElementTypePtr el;
          y0 = y0;
          x0 = ( ( x2 - Marked.Y ) ^ ( ( x2 - Marked.Y ) >> 31 ) ) - ( ( x2 - Marked.Y ) >> 31 ) < ( ( Crosshair.X - Marked.X ) ^ ( ( Crosshair.X - Marked.X ) >> 31 ) ) - ( ( Crosshair.X - Marked.X ) >> 31 ) ? Marked.X : (int)( 0.500000000000 + ( (double)( (int)( ( (double)( Crosshair.X - *(int*)(PCB + 136) ) + ( *(double*)(PCB + 152) * 0.500000000000 ) ) / *(double*)(PCB + 152) ) ) * *(double*)(PCB + 152) ) + (double)( *(int*)(PCB + 136) ) );
        }
        }
        if ( ( (double)( px - Crosshair.X ) * (double)( px - Crosshair.X ) ) + ( (double)( py - Crosshair.Y ) * (double)( py - Crosshair.Y ) ) < ( fp7 * fp7 ) + ( fp6 * fp6 ) )
          continue;
        else
          x0 = ( ( x2 - Marked.Y ) ^ ( ( x2 - Marked.Y ) >> 31 ) ) - ( ( x2 - Marked.Y ) >> 31 ) < ( ( Crosshair.X - Marked.X ) ^ ( ( Crosshair.X - Marked.X ) >> 31 ) ) - ( ( Crosshair.X - Marked.X ) >> 31 ) ? Marked.X : (int)( 0.500000000000 + ( (double)( (int)( ( (double)( Crosshair.X - *(int*)(PCB + 136) ) + ( *(double*)(PCB + 152) * 0.500000000000 ) ) / *(double*)(PCB + 152) ) ) * *(double*)(PCB + 152) ) + (double)( *(int*)(PCB + 136) ) );
      }
      else
      if ( ( ans & 257 ) == 0 )
      {
        y0 = -600;
      }
      ans = 0;
      y0 = -600;
    }
  }
  if ( Settings.Mode == 104 )
  {
  }
}
void MoveCrosshairRelative( LocationType DeltaX, LocationType DeltaY )
{
  DeltaY += Crosshair.Y;
  DeltaX += Crosshair.X;
}
Boolean MoveCrosshairAbsolute( LocationType X, LocationType Y )
{
  int esi;
  int edi;
  LocationType x = Crosshair.X;
  LocationType y = Crosshair.Y;
  LocationType z;
  FitCrosshairIntoGrid( X, Y );
  if ( Crosshair.X != x || Crosshair.Y != y )
  {
    Crosshair.X = x;
    z = Crosshair.Y;
    Crosshair.Y = y;
    HideCrosshair( 0 );
    Crosshair.X = Crosshair.X;
    Crosshair.Y = z;
  }
  return 1;
}
void SetCrosshairRange( LocationType MinX, LocationType MinY, LocationType MaxX, LocationType MaxY )
{
  Crosshair.MinY = (unsigned char)( ( ( MinY >> 31 ) & 1 ) ^ 1 ) ? 0 : MinY;
  Crosshair.MinX = MinX < 0 ? MinX : 0;
  Crosshair.MaxX = MaxX <= PCB->MaxWidth ? PCB->MaxWidth : MaxX;
  Crosshair.MaxY = MaxY <= PCB->MaxHeight ? PCB->MaxHeight : MaxY;
  MinY = 0;
  MinX = 0;
}
void DrawMark( Boolean ifvis )
{
  if ( ifvis == 0 || Marked )
  {
    gui->draw_line( Crosshair.GC, Marked.X + -5000, Marked.Y + -5000, Marked.X + 5000 );
    gui->draw_line( Crosshair.GC, Marked.X + 5000, Marked.Y + -5000, Marked.X + -5000 );
    return;
  }
  return;
}
void InitCrosshair( void )
{
  gui->make_gc( );
  &Crosshair.GC = &gui->struct_size;
  gui->set_color( gui, Settings.CrosshairColor );
  gui->set_draw_xor( Crosshair.GC, 1 );
  gui->set_line_cap( (long long)( Crosshair.GC ) );
  gui->set_line_width( Crosshair.GC, 1 );
  CrosshairStack[0] = 1;
  Crosshair.On = 0;
  Crosshair.MinY = 0;
  Crosshair.MinX = 0;
  CrosshairStackLocation = 1;
  Crosshair.shape = Basic_Crosshair_Shape;
  Crosshair.MaxX = PCB->MaxWidth;
  Marked.status = 0;
  Crosshair.MaxY = PCB->MaxHeight;
  return;
}
void DestroyCrosshair( void )
{
  CrosshairOff( 1 );
  FreePolygonMemory( &Crosshair.AttachedPolygon );
  gui->destroy_gc( Crosshair.GC );
  return;
}
#if 0
#endif
