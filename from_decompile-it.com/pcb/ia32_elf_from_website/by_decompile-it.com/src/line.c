#include "line.c.h"
void AdjustAttachedLine( void )
{
  /* phantom */ AttachedLineTypePtr line;
  if ( Crosshair.AttachedLine.State )
  {
    if ( Settings.Mode == 2 )
    {
      gui->control_is_pressed( );
      if ( gui )
      {
        Crosshair.AttachedLine.draw = 0;
        return;
      }
    }
    Crosshair.AttachedLine.draw = 1;
    if ( PCB->RatDraw == 0 && ( ( *(char*)(PCB + 5) & 1 ) & 255 ) == 0 )
    {
      FortyFiveLine( &Crosshair.AttachedLine );
      return;
    }
    Crosshair.AttachedLine.Point2.X = Crosshair.X;
    Crosshair.AttachedLine.Point2.Y = Crosshair.Y;
  }
  return;
}
void FortyFiveLine( AttachedLineTypePtr Line )
{
  int eax;
  int ecx;
  int esi;
  double fp7;
  LocationType dx;
  LocationType dy = Crosshair.Y - Line->Point1.Y;
  LocationType min;
  BYTE direction;
  /* phantom */ float m;
  dx = Crosshair.X - Line->Point1.X;
  if ( Line->Point1.X == Crosshair.X )
  {
    if ( dy == 0 )
    {
      return;
    }
    direction = ( ccdep1 <= ccdep2 ) << 2;
  }
  else
  {
    if ( 0.577350269000 < (double)( dy ) / (double)( dx ) )
      direction = (double)( dy ) / (double)( dx ) <= 1.732050808000;
    else
    {
      direction = 2;
      if ( (double)( dy ) / (double)( dx ) < -0.577350269000 )
        direction = ( -1.732050808000 <= (double)( dy ) / (double)( dx ) ) * 3;
      else
      {
      }
    }
    if ( dx < 0 )
      direction += 4;
  }
  min = ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 ) < ( min ^ ( min >> 31 ) ) - ( min >> 31 ) ? ( min ^ ( min >> 31 ) ) - ( min >> 31 ) : ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 );
  direction &= 255;
  switch ( direction & 255 )
  {
  case 0:
  case 4:
    Line->Point2.X = Line->Point1.X;
    Line->Point2.Y = Crosshair.Y;
    esi = direction;
    break;
  case 2:
  case 6:
    Line->Point2.X = Crosshair.X;
    Line->Point2.Y = Line->Point1.Y;
    break;
  case 1:
    Line->Point2.X = Line->Point1.X + ( ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 ) < ( min ^ ( min >> 31 ) ) - ( min >> 31 ) ? ( min ^ ( min >> 31 ) ) - ( min >> 31 ) : ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 ) );
    Line->Point2.Y = Line->Point1.Y + ( ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 ) < ( min ^ ( min >> 31 ) ) - ( min >> 31 ) ? ( min ^ ( min >> 31 ) ) - ( min >> 31 ) : ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 ) );
    break;
  case 3:
    Line->Point2.X = Line->Point1.X + min;
    Line->Point2.Y = Line->Point1.Y - min;
    break;
  case 5:
    Line->Point2.X = Line->Point1.X - min;
    Line->Point2.Y = Line->Point1.Y - min;
    break;
  case 7:
    Line->Point2.X = Line->Point1.X - ( ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 ) < ( min ^ ( min >> 31 ) ) - ( min >> 31 ) ? ( min ^ ( min >> 31 ) ) - ( min >> 31 ) : ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 ) );
    Line->Point2.Y = Line->Point1.Y + ( ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 ) < ( min ^ ( min >> 31 ) ) - ( min >> 31 ) ? ( min ^ ( min >> 31 ) ) - ( min >> 31 ) : ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 ) );
    break;
  }
  return;
}
void AdjustTwoLine( int way )
{
  int eax;
  int edx;
  int ebx;
  int edi;
  LocationType dx;
  LocationType dy;
  /* phantom */ AttachedLineTypePtr line;
  if ( Crosshair.AttachedLine.State )
  {
    gui->control_is_pressed( );
    if ( gui )
    {
      Crosshair.AttachedLine.draw = 0;
    }
    else
    {
      Crosshair.AttachedLine.draw = 1;
      if ( ( PCB->Flags.f/*.2_2of4*/ & 1 ) & 255 )
      {
        Crosshair.AttachedLine.Point2.X = Crosshair.X;
        Crosshair.AttachedLine.Point2.Y = Crosshair.Y;
      }
      else
      {
        gui->shift_is_pressed( );
        dx = Crosshair.X - Crosshair.AttachedLine.Point1.X;
        dy = Crosshair.Y - Crosshair.AttachedLine.Point1.Y;
        if ( way == 0 )
        {
          if ( ( dy ^ ( dy >> 31 ) ) - ( dy >> 31 ) < ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 ) )
          {
            Crosshair.AttachedLine.Point2.X = Crosshair.X - ( dx == 0 ? 0 - ( ( dy ^ ( dy >> 31 ) ) - ( dy >> 31 ) ) : way );
            Crosshair.AttachedLine.Point2.Y = Crosshair.AttachedLine.Point1.Y;
          }
          else
          {
            Crosshair.AttachedLine.Point2.X = Crosshair.AttachedLine.Point1.X;
            Crosshair.AttachedLine.Point2.Y = Crosshair.Y - ( dy != 0 ? way : 0 - ( ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 ) ) );
          }
        }
        else
        if ( ( dy ^ ( dy >> 31 ) ) - ( dy >> 31 ) < ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 ) )
        {
          Crosshair.AttachedLine.Point2.Y = Crosshair.Y;
          Crosshair.AttachedLine.Point2.X = Crosshair.AttachedLine.Point1.X + ( ~( 0 - ( ( dx < 1 ) & 1 ) ) * ( ( dy ^ ( dy >> 31 ) ) - ( dy >> 31 ) ) );
        }
        else
        {
          Crosshair.AttachedLine.Point2.X = Crosshair.X;
          if ( dy <= 0 )
          {
          }
          Crosshair.AttachedLine.Point2.Y = Crosshair.AttachedLine.Point1.Y + ( ( ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 ) ) * ~( 0 - ( ( dy < 1 ) & 1 ) ) );
        }
      }
    }
  }
  return;
}
int drcVia_callback( BoxType *b, void *cl )
{
  /* phantom */ PinTypePtr via;
  /* phantom */ struct drc_info *i;
  if ( !( ( b[1].Y1/*.1_1of4*/ & 4 ) & 255 ) && ( PinLineIntersect( &b[0].X1, &cl[0] ) & 255 ) )
  {
    __longjmp_chk( cl + 8 + 8, 1 );
  }
  return 1;
}
int drcPad_callback( BoxType *b, void *cl )
{
  /* phantom */ PadTypePtr pad;
  /* phantom */ struct drc_info *i;
  if ( ((int*)cl) == ( ( b[1].Y1 >> 7 ) & 1 ) && !( b[1].Y1 & 4 ) && ( LinePadIntersect( &cl[0], &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 8 + 8, 1 );
  }
  return 1;
}
int drcLine_callback( BoxType *b, void *cl )
{
  /* phantom */ LineTypePtr line;
  /* phantom */ struct drc_info *i;
  if ( !( ( b[1].Y1/*.1_1of4*/ & 4 ) & 255 ) && ( LineLineIntersect( &b[0].X1, &cl[0] ) & 255 ) )
  {
    __longjmp_chk( cl + 8 + 8, 1 );
  }
  return 1;
}
int drcArc_callback( BoxType *b, void *cl )
{
  /* phantom */ ArcTypePtr arc;
  /* phantom */ struct drc_info *i;
  if ( !( ( b[1].Y1/*.1_1of4*/ & 4 ) & 255 ) && ( LineArcIntersect( &cl[0], &b[0].X1 ) & 255 ) )
  {
    __longjmp_chk( cl + 8 + 8, 1 );
  }
  return 1;
}
// Lost vars at line 427 through loop consolidation
float drc_lines( PointTypePtr end, Boolean way )
{
  int eax;
  int ecx;
  int edx;
  double fp1;
  double fp6;
  double fp7;
  static float f, s, f2, s2, len, best;
  LocationType dx;
  LocationType dy;
  /* phantom */ LocationType temp;
  /* phantom */ LocationType last;
  LocationType length;
  /* phantom */ LocationType temp2;
  /* phantom */ LocationType last2;
  LocationType length2;
  LineType line1;
  LineType line2;
  Cardinal group;
  Cardinal comp;
  struct drc_info info;
  Boolean two_lines;
  Boolean x_is_long;
  Boolean blocker;
  /* phantom */ PointType ans;
  line2.Flags.t[0] = MakeFlags( 0 );
  line2.Flags = MakeFlags( 0 );
  line2.Flags.t[4] = MakeFlags( 0 );
  line2.Clearance = 0;
  line1.Clearance = 0;
  line1.Point1.Y = Crosshair.AttachedLine.Point1.Y;
  x_is_long = 0;
  line1.Thickness = Settings.LineThickness + ( ( PCB->Bloat + 1 ) * 2 );
  line2.Thickness = Settings.LineThickness + ( ( PCB->Bloat + 1 ) * 2 );
  line1.Point1.X = Crosshair.AttachedLine.Point1.X;
  dx = end->X - Crosshair.AttachedLine.Point1.X;
  length = ( dx ^ ( ( end->X - Crosshair.AttachedLine.Point1.X ) >> 31 ) ) - ( ( *(int*)(end) - Crosshair.AttachedLine.Point1.X ) >> 31 );
  if ( ( ( end->Y - Crosshair.AttachedLine.Point1.Y ) ^ ( ( end->Y - Crosshair.AttachedLine.Point1.Y ) >> 31 ) ) - ( ( *(int*)(end + 4) - Crosshair.AttachedLine.Point1.Y ) >> 31 ) < ( dx ^ ( ( end->X - Crosshair.AttachedLine.Point1.X ) >> 31 ) ) - ( ( *(int*)(end) - Crosshair.AttachedLine.Point1.X ) >> 31 ) )
    x_is_long = 1;
  group = GetGroupOfLayer( PCB->SilkActive == 0 ? LayerStack[0] : ( Settings.ShowSolderSide == 0 ) + PCB->Data->LayerN );
  if ( group != GetLayerGroupNumberByNumber( PCB->Data->LayerN ) )
  {
    info.solder = 0;
    comp = GetLayerGroupNumberByNumber( PCB->Data->LayerN + 1 );
  }
  else
  {
    comp = PCB->Data->LayerN + 10;
    info.solder = 1;
  }
  if ( length != -1 )
  {
    do
    {
      s *= 0.500000000000;
      if ( x_is_long )
      {
        length = length;
        if ( dx <= 0 )
          length = dx != 0 ? 0 : 0 - length;
        dx = length;
        while ( 1 )
        {
          s2 = 0.500000000000;
          f2 = 1.000000000000;
          blocker = 1;
          while ( 1 )
          {
            if ( x_is_long )
            {
              if ( end->Y - line1.Point1.Y > 0 )
                length2 = ( ( end->Y - line1.Point1.Y ) ^ ( ( end->Y - line1.Point1.Y ) >> 31 ) ) - ( ( end->Y - line1.Point1.Y ) >> 31 );
              else
              if ( !1 )
                length2 = 0 - length2;
              else
                length2 = 0;
              if ( ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 ) <= ( ( ( ( end->Y - line1.Point1.Y ) ^ ( ( end->Y - line1.Point1.Y ) >> 31 ) ) - ( ( end->Y - line1.Point1.Y ) >> 31 ) ) ^ ( ( ( ( end->Y - line1.Point1.Y ) ^ ( ( end->Y - line1.Point1.Y ) >> 31 ) ) - ( ( end->Y - line1.Point1.Y ) >> 31 ) ) >> 31 ) ) - ( ( ( ( end->Y - line1.Point1.Y ) ^ ( ( end->Y - line1.Point1.Y ) >> 31 ) ) - ( ( end->Y - line1.Point1.Y ) >> 31 ) ) >> 31 ) )
              {
              }
              else
              {
                if ( way )
                {
                  if ( dx <= 0 )
                  {
                  }
                  line1.Point2.X = edx + eax;
                  dy = length2;
                }
                else
                {
                  if ( dx <= 0 )
                  {
                  }
                  dy = 0;
                  line1.Point2.X = ( line1.Point1.X + dx ) - dy;
                }
                line1.Point2.Y = line1.Point1.Y + dy;
                line2.Point1.Y = line1.Point1.Y;
                two_lines = 1;
                line2.Point1.X = line1.Point2.X;
                line2.Point2.X = line1.Point1.X + dx;
                line2.Point2.Y = length2 + line1.Point1.Y;
                SetLineBoundingBox( &line1 );
                SetLineBoundingBox( &line2 );
                if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
                {
                  info.line = &line1;
                  r_search( &PCB->Data->via_tree, &line1.BoundingBox, 0, &drcVia_callback, (void*)info.line );
                  r_search( &PCB->Data->pin_tree, &line1.BoundingBox, 0, &drcVia_callback, (void*)info.line );
                  if ( group == comp || info.solder )
                    r_search( &PCB->Data->pad_tree, &line1.BoundingBox, 0, &drcPad_callback, (void*)info.line );
                  if ( two_lines )
                  {
                    info.line = &line2;
                    r_search( &PCB->Data->via_tree, &line2.BoundingBox, 0, &drcVia_callback, (void*)info.line );
                    r_search( &PCB->Data->pin_tree, &line2.BoundingBox, 0, &drcVia_callback, (void*)info.line );
                    if ( ( ( group == comp ) & 255 ) || info.solder )
                      r_search( &PCB->Data->pad_tree, &line2.BoundingBox, 0, &drcPad_callback, (void*)info.line );
                  }
                  if ( PCB->Data->pcb->LayerGroups.Number[ group ] )
                  {
                    entry = 0;
                    do
                    {
                      number = *(int*)(PCB->Data->pcb + ( entry * 4 ) + ( ebp_480 * 4 ) + 7444);
                      if ( *(int*)(PCB->Data->pcb + ( entry * 4 ) + ( group * 18 * 4 ) + 7444) < PCB->Data->LayerN )
                      {
                        info.line = &line1;
                        r_search( &PCB->Data->Layer->line_tree, &line1.BoundingBox, 0, &drcLine_callback, (void*)info.line );
                        r_search( &PCB->Data->Layer->arc_tree, &line1.BoundingBox, 0, &drcArc_callback, (void*)info.line );
                        if ( two_lines )
                        {
                          info.line = &line2;
                          r_search( &PCB->Data->Layer->line_tree, &line2.BoundingBox, 0, &drcLine_callback, (void*)info.line );
                          r_search( &PCB->Data->Layer->arc_tree, &line2.BoundingBox, 0, &drcArc_callback, (void*)info.line );
                        }
                      }
                      entry++;
                    }
                    while ( entry + 1 < PCB->Data->pcb->ID );
                  }
                  blocker = 0;
                  f2 += s2;
                  if ( best < ( (double)( line2.Point2.X - line1.Point1.X ) * (double)( line2.Point2.X - line1.Point1.X ) ) * 0.000000000000 )
                    best = ( (double)( line2.Point2.X - line1.Point1.X ) * (double)( line2.Point2.X - line1.Point1.X ) ) * 0.000000000000;
                  else
                  {
                  }
                }
                else
                  f2 -= s2;
                if ( f2 * (double)( ( ( end->Y - line1.Point1.Y ) ^ ( ( end->Y - line1.Point1.Y ) >> 31 ) ) - ( ( *(int*)(end + 4) - line1.Point1.Y ) >> 31 ) ) < (double)( ( ( end->Y - line1.Point1.Y ) ^ ( ( end->Y - line1.Point1.Y ) >> 31 ) ) - ( ( *(int*)(end + 4) - line1.Point1.Y ) >> 31 ) ) )
                {
                  length2 = (int)( 0.000000000000 );
                  if ( ( ( end->Y - line1.Point1.Y ) ^ ( ( end->Y - line1.Point1.Y ) >> 31 ) ) - ( ( end->Y - line1.Point1.Y ) >> 31 ) == (int)( 0.000000000000 ) )
                    goto B55;
                  else
                  {
                    s2 *= 0.500000000000;
                  }
                }
                else
                {
                  length2 = (int)( 0.000000000000 );
                  if ( length2 == (int)( 0.000000000000 ) )
                    goto B55;
                  else
                  {
                    s2 *= 0.500000000000;
                  }
                }
B55:;
                if ( blocker == 0 )
                {
                  if ( x_is_long )
                  {
                    if ( dx == line2.Point2.X - line1.Point1.X )
                      goto B61;
                  }
                  else
                  if ( length2 == line2.Point2.Y - line1.Point1.Y )
                    goto B61;
B61:;
                  f += s;
                  if ( f * (double)( length ) < (double)( length ) )
                  {
                    length = (int)( 0.000000000000 );
                    if ( length != (int)( 0.000000000000 ) )
                      continue;
                    else
                    {
                      entry = 0;
                      end->X = ( length2 ^ ( length2 >> 31 ) ) - ( length2 >> 31 );
                      end->Y = ebp_468;
                      if ( 0 ^ 0 )
                      {
                        __stack_chk_fail( );
                      }
                      break;
                    }
                  }
                  else
                  {
                    length = (int)( 0.000000000000 );
                    if ( length != (int)( 0.000000000000 ) )
                      continue;
                  }
                }
                f -= s;
              }
            }
            else
            {
              if ( dx > 0 )
                length2 = length2;
              else
              if ( !1 )
                length2 = 0 - length2;
              else
                length2 = 0;
              if ( ( length2 ^ ( length2 >> 31 ) ) - ( length2 >> 31 ) <= ( ( end->Y - line1.Point1.Y ) ^ ( ( end->Y - line1.Point1.Y ) >> 31 ) ) - ( ( end->Y - line1.Point1.Y ) >> 31 ) && x_is_long == 0 )
              {
                if ( way )
                {
                  line1.Point2.X = line1.Point1.X + length2;
                  if ( length2 <= 0 )
                  {
                  }
                }
                else
                {
                  line1.Point2.X = line1.Point1.X;
                  if ( length2 <= 0 )
                  {
                  }
                }
                line1.Point2.Y = ( length != 0 ? 0 : 0 - ( ( ( ( 0 - length2 ) >> 31 ) ^ ( 0 - length2 ) ) - ( ( 0 - length2 ) >> 31 ) ) ) + line1.Point1.Y;
                dx = length2;
                line2.Point1.Y = line1.Point1.Y;
                two_lines = 1;
                line2.Point1.X = line1.Point2.X;
                line2.Point2.X = line1.Point1.X + dx;
                line2.Point2.Y = length2 + line1.Point1.Y;
                SetLineBoundingBox( &line1 );
                SetLineBoundingBox( &line2 );
              }
              else
                dx = length2;
            }
            if ( x_is_long )
            {
              line1.Point2.X = line1.Point1.X + dx;
              if ( way )
              {
                if ( length <= 0 )
                {
                }
              }
              else
              {
              }
              line1.Point2.Y = ( length2 != 0 ? 0 : 0 - ( ( length2 ^ ( length2 >> 31 ) ) - ( length2 >> 31 ) ) ) + line1.Point1.Y;
            }
            else
            {
              line1.Point2.Y = length + line1.Point1.Y;
              if ( way )
              {
                if ( dx <= 0 )
                {
                }
              }
              else
              {
              }
              line1.Point2.X = ecx + eax;
            }
            line2.Point1.X = line1.Point1.X + dx;
            line2.Point1.Y = length2 != 0 ? 0 : 0 - ( ( length2 ^ ( length2 >> 31 ) ) - ( length2 >> 31 ) );
            line2.Point2.Y = length2 != 0 ? 0 : 0 - ( ( length2 ^ ( length2 >> 31 ) ) - ( length2 >> 31 ) );
            line2.Point2.X = line1.Point1.X + dx;
            two_lines = 0;
            SetLineBoundingBox( &line1 );
            SetLineBoundingBox( &line2 );
          }
        }
      }
      else
      {
        length = length;
        if ( length2 <= 0 )
          length = length2 != 0 ? 0 : 0 - length;
        dx = end->X - line1.Point1.X;
        break;
        while ( 1 )
        {
          s2 = 0.500000000000;
          f2 = 1.000000000000;
          blocker = 1;
          while ( 1 )
          {
          }
        }
      }
    }
    while ( length != (int)( 0.000000000000 ) );
  }
  else
    best = 0.000000000000;
}
void EnforceLineDRC( void )
{
  int eax;
  int edx;
  double fp7;
  PointType r45;
  PointType rs;
  Boolean shift;
  float r1, r2;
  gui->mod1_is_pressed( );
  if ( gui == 0 )
  {
    gui->control_is_pressed( );
    if ( gui == 0 && PCB->RatDraw == 0 && ( PCB->SilkActive == 0 ? LayerStack[0] : ( Settings.ShowSolderSide == 0 ) + PCB->Data->LayerN ) < PCB )
    {
      r45.X = Crosshair.X;
      rs.X = Crosshair.X;
      r45.Y = Crosshair.Y;
      rs.Y = Crosshair.Y;
      gui->shift_is_pressed( (float)( drc_lines( &r45, 1 ) ) );
      if ( shift & 255 )
      {
        if ( ( ( (float)( drc_lines( &rs, 0 ) ) < (float)( drc_lines( &r45, 1 ) ) ) & 255 ) == 0 )
          goto B20;
        else
        {
          if ( PCB->Clipping )
          {
            PCB->Clipping = ~( 0 - ( ( ( gui & 255 ) < ( 1 & 255 ) ) & 1 ) ) + 2;
          }
          Crosshair.X = r45.X;
          Crosshair.Y = r45.Y;
          return;
        }
      }
      else
      if ( ( ( (float)( drc_lines( &rs, 0 ) ) < (float)( drc_lines( &r45, 1 ) ) ) & 255 ) == 0 )
      {
      }
B20:;
      if ( PCB->Clipping )
      {
        PCB->Clipping = ( 0 - ( ( ( gui & 255 ) < ( 1 & 255 ) ) & 1 ) ) + 2;
      }
      Crosshair.X = rs.X;
      Crosshair.Y = rs.Y;
      return;
    }
  }
  return;
}
#if 0
#endif
