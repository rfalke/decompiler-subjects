#include "search.c.h"
static float PosX;
static float PosY;
static BDimension SearchRadius;
static BoxType SearchBox;
static LayerTypePtr SearchLayer;
int pinorvia_callback( BoxType *box, void *cl )
{
  /* phantom */ struct ans_info *i;
  /* phantom */ PinTypePtr pin;
  if ( !( ((int*)cl) & box[1].Y1 ) && ( IsPointOnPin( PosX, PosY, (float)( (double)( SearchRadius ) ), &box[0].X1 ) & 255 ) )
  {
    *(int*)(cl) = box[4].Y1 == 0 ? box[4].Y1 : box;
    ((int*)cl) = box;
    ((int*)cl) = box;
    __longjmp_chk( cl + 20, 1 );
  }
  return 0;
}
Boolean SearchViaByLocation( int locked, PinTypePtr *Via, PinTypePtr *Dummy1, PinTypePtr *Dummy2 )
{
  struct ans_info info;
  if ( PCB->ViaOn )
  {
    info.ptr1 = (void**)Via;
    info.locked = ( 0 - ( ( ( locked & 0x10000 ) < 1 ) & 1 ) ) & 8192;
    info.ptr2 = (void**)Dummy1;
    info.ptr3 = (void**)Dummy2;
    if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
    {
      r_search( &PCB->Data->via_tree, &SearchBox, 0, &pinorvia_callback, &info.ptr1 );
      return 0;
    }
  }
  return 1;
}
Boolean SearchPinByLocation( int locked, ElementTypePtr *Element, PinTypePtr *Pin, PinTypePtr *Dummy )
{
  struct ans_info info;
  if ( PCB->PinOn )
  {
    info.ptr1 = (void**)Element;
    info.locked = ( 0 - ( ( ( locked & 0x10000 ) < 1 ) & 1 ) ) & 8192;
    info.ptr2 = (void**)Pin;
    info.ptr3 = (void**)Dummy;
    if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
    {
      r_search( &PCB->Data->pin_tree, &SearchBox, 0, &pinorvia_callback, &info.ptr1 );
      return 0;
    }
  }
  return 1;
}
int pad_callback( BoxType *b, void *cl )
{
  /* phantom */ PadTypePtr pad;
  /* phantom */ struct ans_info *i;
  if ( !( ((int*)cl) & b[1].Y1 ) && ( Settings.ShowSolderSide == ( ( b[1].Y1 >> 7 ) & 1 ) || cl[3] ) && ( IsPointInPad( (int)( PosX ), (int)( PosY ), SearchRadius, &b[0].X1 ) & 255 ) )
  {
    *(int*)(cl) = b[6].X1;
    ((int*)cl) = b;
    ((int*)cl) = b;
    __longjmp_chk( cl + 20, 1 );
  }
  return 0;
}
Boolean SearchPadByLocation( int locked, ElementTypePtr *Element, PadTypePtr *Pad, PadTypePtr *Dummy, Boolean BackToo )
{
  int eax;
  int edi;
  struct ans_info info;
  if ( PCB->PinOn )
  {
    if ( ( BackToo & 255 ) == 0 )
      goto B4;
    else
    {
    }
B4:;
    info.locked = ( 0 - ( ( ( locked & 0x10000 ) < 1 ) & 1 ) ) & 8192;
    info.ptr1 = (void**)Element;
    info.ptr2 = (void**)Pad;
    info.BackToo = *(char*)(esi + 37) != 0;
    info.ptr3 = (void**)Dummy;
    if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
    {
      r_search( &PCB->Data->pad_tree, &SearchBox, 0, &pad_callback, &info.ptr1 );
    }
  }
  return 0;
}
int line_callback( BoxType *box, void *cl )
{
  /* phantom */ struct line_info *i;
  /* phantom */ LineTypePtr l;
  if ( !( ((int*)cl) & box[1].Y1 ) && ( IsPointInPad( (int)( PosX ), (int)( PosY ), SearchRadius, &box[0].X1 ) & 255 ) )
  {
    ((int*)cl) = box;
    __longjmp_chk( cl + 12, 1 );
  }
  return 0;
}
Boolean SearchLineByLocation( int locked, LayerTypePtr *Layer, LineTypePtr *Line, LineTypePtr *Dummy )
{
  int eax;
  struct line_info info;
  info.locked = ( 0 - ( ( ( locked & 0x10000 ) < 1 ) & 1 ) ) & 8192;
  info.Line = Line;
  Layer[0] = SearchLayer;
  info.Point = (PointTypePtr*)Dummy;
  if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
  {
    r_search( &SearchLayer->line_tree, &SearchBox, 0, &line_callback, (void*)&info.Line );
    return 0;
  }
  return 1;
}
int rat_callback( BoxType *box, void *cl )
{
  int eax;
  double fp7;
  /* phantom */ LineTypePtr line;
  /* phantom */ struct ans_info *i;
  if ( !( ((int*)cl) & box[1].Y1 ) && ( ( ( box[1].Y1 & 2 ) & 255 ? ( ( ( (double)( SearchRadius + ( box[2].Y1 * 2 ) ) * (double)( SearchRadius + ( box[2].Y1 * 2 ) ) ) <> ( ( ( (double)( box[2].Y2 ) - PosX ) * ( (double)( box[2].Y2 ) - PosX ) ) + ( ( (double)( box[3].X1 ) - PosY ) * ( (double)( box[3].X1 ) - PosY ) ) ) ) & 1 ) == 0 : ( box[1].Y1 & 255 ) != 0 ) & 255 ) )
  {
    ((int*)cl) = box;
    ((int*)cl) = box;
    __longjmp_chk( cl + 20, 1 );
  }
  return 0;
}
Boolean SearchRatLineByLocation( int locked, RatTypePtr *Line, RatTypePtr *Dummy1, RatTypePtr *Dummy2 )
{
  int eax;
  struct ans_info info;
  info.ptr1 = (void**)Line;
  info.locked = ( 0 - ( 0 & 1 ) ) & 8192;
  info.ptr2 = (void**)Dummy1;
  info.ptr3 = (void**)Dummy2;
  if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
  {
    r_search( &PCB->Data->rat_tree, &SearchBox, 0, &rat_callback, &info.ptr1 );
    return 0;
  }
  return 1;
}
int arc_callback( BoxType *box, void *cl )
{
  /* phantom */ struct arc_info *i;
  /* phantom */ ArcTypePtr a;
  if ( !( ((int*)cl) & box[1].Y1 ) && ( IsPointOnArc( PosX, PosY, (float)( (double)( SearchRadius ) ), &box[0].X1 ) & 255 ) )
  {
    ((int*)cl) = box;
    __longjmp_chk( cl + 8, 1 );
  }
  return 0;
}
Boolean SearchArcByLocation( int locked, LayerTypePtr *Layer, ArcTypePtr *Arc, ArcTypePtr *Dummy )
{
  int eax;
  struct arc_info info;
  info.locked = ( 0 - ( ( ( locked & 0x10000 ) < 1 ) & 1 ) ) & 8192;
  info.Arc = Arc;
  Layer[0] = SearchLayer;
  info.Dummy = Dummy;
  if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
  {
    r_search( &SearchLayer->arc_tree, &SearchBox, 0, &arc_callback, (void*)&info.Arc );
    return 0;
  }
  return 1;
}
int text_callback( BoxType *box, void *cl )
{
  double fp7;
  /* phantom */ TextTypePtr text;
  /* phantom */ struct ans_info *i;
  if ( ( ((int*)cl) & box[1].Y1 ) == 0 )
  {
    if ( PosX <= (double)( box ) )
    {
      if ( (double)( box->X2 ) <= PosX )
      {
        if ( PosY <= (double)( box->Y1 ) )
        {
          if ( (double)( box->Y2 ) <= PosY )
          {
            ((int*)cl) = box;
            ((int*)cl) = box;
            __longjmp_chk( cl + 20, 1 );
          }
        }
        else
        {
        }
      }
    }
    else
    {
    }
  }
  return 0;
}
Boolean SearchTextByLocation( int locked, LayerTypePtr *Layer, TextTypePtr *Text, TextTypePtr *Dummy )
{
  int eax;
  struct ans_info info;
  info.locked = ( 0 - ( ( ( locked & 0x10000 ) < 1 ) & 1 ) ) & 8192;
  Layer[0] = SearchLayer;
  info.ptr2 = (void**)Text;
  info.ptr3 = (void**)Dummy;
  if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
  {
    r_search( &SearchLayer->text_tree, &SearchBox, 0, &text_callback, &info.ptr1 );
  }
  return 0;
}
int polygon_callback( BoxType *box, void *cl )
{
  /* phantom */ PolygonTypePtr polygon;
  /* phantom */ struct ans_info *i;
  if ( !( ((int*)cl) & box[1].Y1 ) && ( IsPointInPolygon( (int)( PosX ), (int)( PosY ), SearchRadius, &box[0].X1 ) & 255 ) )
  {
    ((int*)cl) = box;
    ((int*)cl) = box;
    __longjmp_chk( cl + 20, 1 );
  }
  return 0;
}
Boolean SearchPolygonByLocation( int locked, LayerTypePtr *Layer, PolygonTypePtr *Polygon, PolygonTypePtr *Dummy )
{
  int eax;
  struct ans_info info;
  info.locked = ( 0 - ( ( ( locked & 0x10000 ) < 1 ) & 1 ) ) & 8192;
  Layer[0] = SearchLayer;
  info.ptr2 = (void**)Polygon;
  info.ptr3 = (void**)Dummy;
  if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
  {
    r_search( &SearchLayer->polygon_tree, &SearchBox, 0, &polygon_callback, &info.ptr1 );
  }
  return 0;
}
int linepoint_callback( BoxType *b, void *cl )
{
  double fp4;
  double fp6;
  double fp7;
  /* phantom */ LineTypePtr line;
  /* phantom */ struct line_info *i;
  int ret_val = 0;
  float d;
  if ( ( ((int*)cl) & b[1].Y1 ) == 0 )
  {
    if ( cl[2] <= ( ( PosX - (double)( b[2].Y2 ) ) * ( PosX - (double)( b[2].Y2 ) ) ) + ( ( PosY - (double)( b[3].X1 ) ) * ( PosY - (double)( b[3].X1 ) ) ) )
    {
    }
    else
    {
      cl[2] = PosX;
      *(int*)(cl) = b;
      *(int*)(cl[1]) = &b[2].Y2;
      ret_val = 1;
    }
    if ( ( ( cl[2] - (double)( b[4].X1 ) ) * ( cl[2] - (double)( b[4].X1 ) ) ) + ( ( cl[2] - (double)( b[4].Y1 ) ) * ( cl[2] - (double)( b[4].Y1 ) ) ) < PosY )
    {
      cl[2] = fp7;
      *(int*)(cl) = b;
      *(int*)(cl[1]) = b + 64;
      ret_val = 1;
    }
    else
    {
    }
  }
  return 1;
}
int name_callback( BoxType *box, void *cl )
{
  int ebx;
  double fp7;
  /* phantom */ TextTypePtr text;
  /* phantom */ struct ans_info *i;
  /* phantom */ ElementTypePtr element;
  float newarea;
  if ( ( ((int*)cl) & box[1].Y1 ) == 0 && ( Settings.ShowSolderSide == ( ( *(int*)(box[3].X2 + 20) >> 7 ) & 1 ) || cl[3] ) && ( box[3].X2 & 16 ) == 0 )
  {
    if ( PosX <= (double)( box ) )
    {
      if ( (double)( box->X2 ) <= PosX )
      {
        if ( PosY <= (double)( box->Y1 ) )
        {
          if ( (double)( box->Y2 ) <= PosY )
          {
            if ( (double)( box->X2 - box ) * (double)( box->X2 - box ) < cl[4] )
            {
              cl[4] = (double)( box->X2 - box ) * (double)( box->X2 - box );
              *(int*)(cl) = box[3].X2;
              ((int*)cl) = box;
              ((int*)cl) = box;
              return 0;
            }
            else
            {
              return 0;
            }
          }
        }
        else
        {
        }
      }
    }
    else
    {
    }
  }
  return 0;
}
Boolean SearchElementNameByLocation( int locked, ElementTypePtr *Element, TextTypePtr *Text, TextTypePtr *Dummy, Boolean BackToo )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  struct ans_info info;
  if ( PCB->ElementOn )
  {
    if ( BackToo & 255 )
    {
    }
    if ( ( PCB->Flags.f & 64 ) == 0 )
    {
    }
    info.ptr1 = (void**)Element;
    info.locked = ( 0 - ( ( ( locked & 0x10000 ) < 1 ) & 1 ) ) & 8192;
    info.ptr2 = (void**)Text;
    info.ptr3 = (void**)Dummy;
    info.area = 100000000376832.000000000000;
    info.BackToo = *(char*)(( ( 0 - ( ( ( edi & 32 ) < 1 ) & 1 ) ) & 2 ) + 37) != 0;
    *(char*)(r_search( *(int*)(*(int*)(( ( 0 - ( ( ( edi & 32 ) < 1 ) & 1 ) ) & 2 ) + 8716) + ( ( ( 0 - ( ( ( edi & 32 ) < 1 ) & 1 ) ) & 2 ) << 2 ) + 56), &SearchBox, 0, &name_callback, &info.ptr1 )) = locked != 0;
    return r_search( *(int*)(*(int*)(( ( 0 - ( ( ( edi & 32 ) < 1 ) & 1 ) ) & 2 ) + 8716) + ( ( ( 0 - ( ( ( edi & 32 ) < 1 ) & 1 ) ) & 2 ) << 2 ) + 56), &SearchBox, 0, &name_callback, &info.ptr1 ) != 0;
  }
}
int element_callback( BoxType *box, void *cl )
{
  double fp7;
  /* phantom */ ElementTypePtr element;
  /* phantom */ struct ans_info *i;
  float newarea;
  if ( !( ((int*)cl) & box[1].Y1 ) && ( Settings.ShowSolderSide == ( ( box[1].Y1 >> 7 ) & 1 ) || cl[3] ) )
  {
    if ( PosX <= (double)( box[17].X1 ) )
    {
      if ( (double)( box[17].X2 ) <= PosX )
      {
        if ( PosY <= (double)( box[17].Y1 ) )
        {
          if ( (double)( box[17].Y2 ) <= PosY )
          {
            if ( (double)( box[17].X2 - box[17].X1 ) * (double)( box[17].X2 - box[17].X1 ) < cl[4] )
            {
              ((int*)cl) = (double)( box[17].X2 - box[17].X1 ) * (double)( box[17].X2 - box[17].X1 );
              ((int*)cl) = box;
              ((int*)cl) = box;
              return 0;
            }
          }
        }
        else
        {
        }
      }
    }
    else
    {
    }
  }
  return 0;
}
Boolean SearchElementByLocation( int locked, ElementTypePtr *Element, ElementTypePtr *Dummy1, ElementTypePtr *Dummy2, Boolean BackToo )
{
  int eax;
  int esi;
  int edi;
  struct ans_info info;
  if ( PCB->ElementOn == 0 || PCB->PinOn == 0 )
  {
  }
  if ( BackToo & 255 )
  {
  }
  info.ptr1 = (void**)Element;
  info.ptr3 = (void**)Dummy2;
  info.locked = ( 0 - ( ( ( locked & 0x10000 ) < 1 ) & 1 ) ) & 8192;
  info.BackToo = *(char*)(PCB + 37) != 0;
  info.ptr2 = (void**)Dummy1;
  info.area = 100000000376832.000000000000;
  return 0 != 0;
}
Boolean IsPointOnPin( float X, float Y, float Radius, PinTypePtr pin )
{
  double fp5;
  double fp6;
  double fp7;
  if ( ( pin->Flags.f/*.2_2of4*/ & 1 ) & 255 )
  {
    BoxType b;
    /* phantom */ BDimension t;
    b.X1 = pin->X - ( pin->Thickness / 2 );
    b.X2 = pin->X + ( pin->Thickness / 2 );
    b.Y1 = pin->Y - ( pin->Thickness / 2 );
    b.Y2 = ( pin->Thickness / 2 ) + *(int*)(pin + 56);
    return ( IsPointInBox( (int)( 0.000000000000 ), (int)( X ), &b, (int)( Radius ) ) & 255 ) != 0;
  }
  return ( ( ( ( Radius + (double)( *(int*)(pin + 36) / 2 ) ) * ( Radius + (double)( *(int*)(pin + 36) / 2 ) ) ) <> ( ( ( (double)( *(int*)(pin + 52) ) - X ) * ( (double)( *(int*)(pin + 52) ) - X ) ) + ( ( (double)( *(int*)(pin + 56) ) - Y ) * ( (double)( *(int*)(pin + 56) ) - Y ) ) ) ) & 1 ) == 0;
}
Boolean IsPointOnLineEnd( LocationType X, LocationType Y, RatTypePtr Line )
{
  if ( Line->Point1.X == X )
  {
    if ( Line->Point1.Y != Y && Line->Point2.X == X )
    {
      return Line->Point2.Y == Y;
    }
    return 0;
  }
  else
  if ( Line->Point2.X == X )
  {
    return Line->Point2.Y == Y;
  }
  return 0;
  return Line->Point2.Y == Y;
}
Boolean IsPointOnLine( float X, float Y, float Radius, LineTypePtr Line )
{
  int eax;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  float dx, dy, dx1 = ( ( (double)( Line->Thickness ) + 1.000000000000 ) * 0.500000000000 ) + Radius + Y, dy1, l, d, r;
  if ( (double)( Line->Point1.Y <= Line->Point2.Y ? Line->Point2.Y : Line->Point1.Y ) <= ( ( (double)( Line->Thickness ) + 1.000000000000 ) * 0.500000000000 ) + Radius + Y )
  {
    dx1 = (double)( (unsigned char)( ( Line->Point1.Y < Line->Point2.Y ) ^ 1 ) ? Line->Point2.Y : Line->Point1.Y );
    if ( Y - l <= (double)( (unsigned char)( ( Line->Point1.Y < Line->Point2.Y ) ^ 1 ) ? Line->Point2.Y : Line->Point1.Y ) )
    {
      l = (double)( Line->Point1.Y ) - Y;
      if ( ( (double)( *(int*)(Line + 64) - *(int*)(Line + 44) ) * (double)( *(int*)(Line + 64) - *(int*)(Line + 44) ) ) * 0.000000000000 )
      {
        if ( ( ( l * dx1 ) - ( ( (double)( Line->Point1.X ) - X ) * dy1 ) ) * ( ( l * dx1 ) - ( ( (double)( Line->Point1.X ) - X ) * dy1 ) ) <= ( (double)( *(int*)(Line + 64) - *(int*)(Line + 44) ) * (double)( *(int*)(Line + 64) - *(int*)(Line + 44) ) ) * 0.000000000000 * (float)( l * l ) )
        {
          dx1 = ( (double)( *(int*)(Line + 64) - *(int*)(Line + 44) ) * (double)( *(int*)(Line + 64) - *(int*)(Line + 44) ) ) * 0.000000000000;
          dy1 = (double)( Line->Point1.X ) - X;
          if ( -( ( ( (double)( Line->Point1.X ) - X ) * dx1 ) + ( l * dy1 ) ) <= 0.000000000000 )
          {
            if ( dx1 < dx1 )
            {
              dx1 = dy1 = dx1;
            }
            else
            {
              return 0;
            }
          }
          else
          {
            l = dx1 = -( ( ( (double)( Line->Point1.X ) - X ) * dx1 ) + ( l * dy1 ) );
          }
          if ( dy1 < 0.000000000000 )
          {
          }
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
      return ( ( (float)( l * l ) <> ( ( l * l ) + ( dx1 * dx1 ) ) ) & 1 ) == 0;
    }
    else
    {
    }
  }
  else
  {
  }
  return 0;
}
Boolean IsLineInRectangle( LocationType X1, LocationType Y1, LocationType X2, LocationType Y2, LineTypePtr Line )
{
  int eax;
  LineType line;
  if ( X1 < Line->Point1.X && Line->Point1.X < X2 && Y1 < Line->Point1.Y && Line->Point1.Y < Y2 )
  {
  }
  else
  {
    line.Thickness = 0;
    line.Point2.Y = Y1;
    line.Point1.Y = Y1;
    line.Flags = MakeFlags( 0 );
    line.Point1.X = X1;
    line.Point2.X = X2;
    line.Flags.t[0] = MakeFlags( 0 );
    if ( ( LineLineIntersect( &line, Line ) & 255 ) == 0 )
    {
      line.Point1.X = X2;
      line.Point1.Y = Y1;
      line.Point2.Y = Y2;
      if ( ( LineLineIntersect( &line, Line ) & 255 ) == 0 )
      {
        line.Point2.X = X2;
        line.Point1.Y = Y2;
        line.Point1.X = X1;
        if ( ( LineLineIntersect( &line, Line ) & 255 ) == 0 )
        {
          line.Point1.Y = Y1;
          line.Point2.X = X1;
          line.Point2.Y = Y2;
          if ( 0 ^ 0 )
          {
            __stack_chk_fail( );
          }
          return 1;
        }
      }
    }
  }
}
int IsPointInQuadrangle( PointType *p, PointTypePtr l )
{
  int eax;
  int ecx;
  int edx;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ int dx, dy, x, y;
  float prod0, prod1;
  if ( ebp_20 * edi == 1 )
  {
    return 0;
  }
  if ( ( (double)( l->Y - p[1].Y ) + prod1 ) * (double)( p[1].X - *(int*)(&p[2].X) ) < 0.000000000000 )
  {
    return edi;
  }
  else
  {
    return edi;
  }
  return edi;
}
Boolean IsLineInQuadrangle( PointType *p, LineTypePtr Line )
{
  int eax;
  int edx;
  int edi;
  LineType line;
  if ( IsPointInQuadrangle( p, &Line->Point1 ) == 0 && IsPointInQuadrangle( p, Line + 64 ) == 0 )
  {
    line.Thickness = 0;
    line.Flags = MakeFlags( 0 );
    line.Flags.t[0] = MakeFlags( 0 );
    line.Point1.X = p;
    line.Point1.Y = p->Y;
    line.Point2.X = p[1].X;
    line.Point2.Y = p[1].Y;
    if ( ( LineLineIntersect( &line, Line ) & 255 ) == 0 )
    {
      line.Point1.X = p[2].X;
      line.Point1.Y = p[2].Y;
      if ( ( LineLineIntersect( &line, Line ) & 255 ) == 0 )
      {
        line.Point2.X = p[3].X;
        line.Point2.Y = p[3].Y;
        if ( ( LineLineIntersect( &line, Line ) & 255 ) == 0 )
        {
          line.Point1.X = p;
          line.Point1.Y = p->Y;
          if ( 0 ^ 0 )
          {
            __stack_chk_fail( );
          }
          return 1;
        }
      }
    }
  }
}
Boolean IsArcInRectangle( LocationType X1, LocationType Y1, LocationType X2, LocationType Y2, ArcTypePtr Arc )
{
  int eax;
  LineType line;
  line.Thickness = 0;
  line.Point2.Y = Y1;
  line.Point1.Y = Y1;
  line.Flags = MakeFlags( 0 );
  line.Point2.X = X2;
  line.Flags.t[0] = MakeFlags( 0 );
  line.Point1.X = X1;
  if ( ( LineArcIntersect( &line, Arc ) & 255 ) == 0 )
  {
    line.Point2.X = X2;
    line.Point1.X = X2;
    line.Point1.Y = Y1;
    line.Point2.Y = Y2;
    if ( ( LineArcIntersect( &line, Arc ) & 255 ) == 0 )
    {
      line.Point2.X = X2;
      line.Point2.Y = Y2;
      line.Point1.Y = Y2;
      line.Point1.X = X1;
      if ( ( LineArcIntersect( &line, Arc ) & 255 ) == 0 )
      {
        line.Point1.Y = Y1;
        line.Point2.X = X1;
        line.Point1.X = X1;
        line.Point2.Y = Y2;
        if ( 0 ^ 0 )
        {
          __stack_chk_fail( );
        }
        return 1;
      }
    }
  }
}
Boolean IsPointInPad( LocationType X, LocationType Y, BDimension Radius, PadTypePtr Pad )
{
  int eax;
  int ecx;
  int edx;
  double fp2;
  double fp3;
  double fp5;
  double fp6;
  double fp7;
  double r, Sin, Cos;
  /* phantom */ LocationType x;
  /* phantom */ BDimension t2;
  BDimension range;
  PadType pad;
  memcpy( &pad.BoundingBox.X1, Pad, 104 );
  X = (int)( ( Sin * (double)( X - pad.Point1.X ) ) + ( r * (double)( Y - pad.Point1.Y ) ) );
  Y = (int)( 0.000000000000 );
  if ( ( Pad->Flags.f/*.2_2of4*/ & 1 ) & 255 )
  {
    X += ( Pad->Thickness + 1 + ( ( Pad->Thickness + 1 ) >> 31 ) ) >> 1;
    Y = ( Y ^ ( Y >> 31 ) ) - ( Y >> 31 );
    if ( X + ( ( Pad->Thickness + 1 + ( ( Pad->Thickness + 1 ) >> 31 ) ) >> 1 ) > 0 )
    {
      if ( Cos + (double)( Pad->Thickness ) < (double)( X ) )
      {
        range = Y - ( ( Pad->Thickness + 1 + ( ( Pad->Thickness + 1 ) >> 31 ) ) >> 1 );
        if ( 0 ^ 0 )
        {
          __stack_chk_fail( );
        }
        return eax;
      }
      else
      {
        if ( Y <= ( ( Pad->Thickness + 1 + ( ( Pad->Thickness + 1 ) >> 31 ) ) >> 1 ) )
          range = (int)( (double)( X ) - Cos );
        else
        {
          if ( Radius >= 0 )
            Cos = ( (double)( ( ( Pad->Thickness + 1 + ( ( Pad->Thickness + 1 ) >> 31 ) ) >> 1 ) - Y ) * (double)( ( ( Pad->Thickness + 1 + ( ( Pad->Thickness + 1 ) >> 31 ) ) >> 1 ) - Y ) ) + ( ( (double)( X ) - Cos ) * ( (double)( X ) - Cos ) );
          else
          {
          }
        }
      }
    }
    else
    if ( Y <= ( ( Pad->Thickness + 1 + ( ( Pad->Thickness + 1 ) >> 31 ) ) >> 1 ) )
      range = 0 - X;
    else
    if ( Radius >= 0 )
      Cos = (double)( Radius );
  }
  else
  {
    Y = ( Y ^ ( Y >> 31 ) ) - ( Y >> 31 );
    if ( X <= 0 )
    {
      if ( ( ( Pad->Thickness + 1 + ( ( Pad->Thickness + 1 ) >> 31 ) ) >> 1 ) >= 0 )
        Cos = (double)( ( Pad->Thickness + 1 + ( ( Pad->Thickness + 1 ) >> 31 ) ) >> 1 );
    }
    else
    if ( (double)( X ) <= (double)( X ) )
    {
      if ( ( ( Pad->Thickness + 1 + ( ( Pad->Thickness + 1 ) >> 31 ) ) >> 1 ) >= 0 )
        Cos = ( ( (double)( X ) - Cos ) * ( (double)( X ) - Cos ) ) + ( (double)( Y ) * (double)( Y ) );
      else
      {
      }
    }
    else
    {
      range = Y - ( ( Pad->Thickness + 1 + ( ( Pad->Thickness + 1 ) >> 31 ) ) >> 1 );
    }
  }
  Cos = Cos * Cos * Cos * Cos;
}
Boolean IsPointInBox( LocationType X, LocationType Y, BoxTypePtr box, BDimension Radius )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int edi;
  double fp6;
  double fp7;
  BDimension width;
  BDimension height;
  BDimension range;
  X -= box->X1;
  Y -= box->Y1;
  height = box->Y2 - box->Y1;
  if ( X - box->X1 > 0 )
  {
    width -= box->X1;
    if ( width - box->X1 <= X )
    {
      if ( Y < 0 )
      {
        if ( Radius < 0 )
        {
          return 0;
        }
        return (double)( Radius ) * (double)( Radius ) < ( (double)( Radius ) * (double)( Radius ) * (double)( Radius ) * (double)( Radius ) ) + ( (double)( X ) * (double)( X ) );
      }
      else
      {
        if ( height < Y )
        {
          if ( Radius < 0 )
          {
          }
        }
        else
          range = X - width;
      }
    }
    else
    {
      if ( Y < 0 )
        range = 0 - Y;
      else
      {
        if ( Y <= height )
        {
        }
        range = Y - height;
      }
    }
  }
  else
  {
    if ( Y < 0 )
    {
      if ( Radius < 0 )
      {
      }
    }
    else
    if ( height < Y )
    {
      if ( Radius < 0 )
      {
      }
      Y -= height;
    }
    else
      range = 0 - X;
  }
  return range < Radius;
}
Boolean IsPointOnArc( float X, float Y, float Radius, ArcTypePtr Arc )
{
  int eax;
  int edx;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  float x, y, dx, dy = Radius, r1, r2, a, d, l;
  float pdx, pdy;
  int ang1, ang2, delta;
  int startAngle, arcDelta;
  if ( !( ( ( X - (double)( Arc->X ) ) * ( X - (double)( Arc->X ) ) ) + ( ( Y - (double)( Arc->Y ) ) * ( Y - (double)( Arc->Y ) ) ) ) )
  {
    l = 0.000000000000;
    dx = 0.000000000000;
    dy = (double)( Arc->Width );
    return ( ( ( dy + ( (double)( Arc->Thickness ) * 0.500000000000 ) ) <> (double)( Arc->Width ) ) & 1 ) == 0;
  }
  dy = ( 0.500000000000 * ( ( (double)( Arc->Width ) * (double)( Arc->Width ) ) - ( ( dy + ( (double)( Arc->Thickness ) * 0.500000000000 ) ) * ( dy + ( (double)( Arc->Thickness ) * 0.500000000000 ) ) ) ) ) / 0.000000000000;
  if ( ( ( ( (double)( Arc->Width ) * (double)( Arc->Width ) ) / 0.000000000000 ) - ( ( ( 0.500000000000 * ( ( (double)( Arc->Width ) * (double)( Arc->Width ) ) - ( ( dy + ( (double)( Arc->Thickness ) * 0.500000000000 ) ) * ( dy + ( (double)( Arc->Thickness ) * 0.500000000000 ) ) ) ) ) / 0.000000000000 ) * ( ( 0.500000000000 * ( ( (double)( Arc->Width ) * (double)( Arc->Width ) ) - ( ( dy + ( (double)( Arc->Thickness ) * 0.500000000000 ) ) * ( dy + ( (double)( Arc->Thickness ) * 0.500000000000 ) ) ) ) ) / 0.000000000000 ) ) ) + 0.000010000000 < 0.000000000000 )
  {
  }
  if ( dx == sqrt( dx ) )
  {
    if ( dx != sqrt( dx ) )
      l = 0.000000000000;
    else
      dx = 0.000000000000;
      startAngle = Arc->StartAngle;
      dy *= y;
      arcDelta = Arc->Delta;
      y *= -0.000000000000;
      l = pdx;
      pdx *= dy;
      dx *= pdx;
      if ( Arc->StartAngle < 0 )
      {
        do
        {
          startAngle += 360;
        }
        while ( startAngle < 0 );
      }
      if ( arcDelta < 0 && startAngle + arcDelta < 0 )
      {
        do
        {
          startAngle += 360;
          if ( startAngle < 0 )
          {
            startAngle += 360;
          }
        }
        while ( startAngle >= 0 );
      }
      ang1 = (int)( dy * 57.295779513082 );
      dy = pdx;
      y = y;
      pdx = dy;
      if ( (int)( dy * 57.295779513082 ) < 0 )
        ang1 += 360;
      ang2 = (int)( atan2( dy - y, -( pdx - dx ) ) * 57.295779513082 );
      if ( (int)( atan2( dy - y, -( pdx - dx ) ) * 57.295779513082 ) < 0 )
        ang2 += 360;
      delta -= ang1;
      if ( delta < 0 && delta + ang1 < 0 )
      {
        do
        {
          ang1 += 360;
        }
        while ( ang1 < 0 && ang1 < 0 );
      }
      if ( startAngle <= ang1 )
      {
        if ( ang1 <= startAngle + arcDelta )
        {
        }
        if ( ang1 <= startAngle )
          goto B33;
        else
        {
          if ( startAngle + arcDelta > 359 && ang1 < startAngle + arcDelta + -359 )
          {
          }
          if ( ( delta - ang1 <= 180 ? delta <= -181 ? delta : delta + 360 : delta + -360 ) + ang1 > 359 )
          {
          }
        }
      }
B33:;
      if ( startAngle <= delta + ang1 )
      {
      }
  }
  else
    l = 0.000000000000;
  sqrtf( (float)( dx ) );
  l = y;
  dx = dy;
  startAngle = Arc->StartAngle;
  dy *= y;
  arcDelta = Arc->Delta;
  y *= -0.000000000000;
  l = pdx;
  pdx *= dy;
  dx *= pdx;
}
// Lost vars at line 1280 through condition folding
int SearchObjectByLocation( int Type, void **Result1, void **Result2, void **Result3, LocationType X, LocationType Y, BDimension Radius )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  int ebp_236;
  int ebp_232;
  void *r1, *r2, *r3;
  /* phantom */ void **pr1, **pr2, **pr3;
  int i;
  float HigherBound;
  int HigherAvail;
  int locked;
  PosX = (double)( X );
  locked = Type & 0x10000;
  PosY = (double)( Y );
  SearchRadius = Radius;
  if ( Radius )
  {
    SearchBox.X1 = X - Radius;
    SearchBox.Y1 = Y - Radius;
    SearchBox.X2 = X + Radius;
    SearchBox.Y2 = Radius + Y;
  }
  else
  {
    SearchBox.X1 = X;
    SearchBox.Y1 = Y;
    SearchBox.X2 = X + 1;
    SearchBox.Y2 = Y + 1;
  }
  Type = ( PCB->Flags.f & 0x240000 ) == 0 ? Type & -1041 : Type;
  Type = ( PCB->Flags.f & 0x80000 ) == 0 ? ( ( PCB->Flags.f & 0x240000 ) == 0 ? Type & -1041 : Type ) & 1040 : Type;
  Type = ( PCB->Flags.f & 0x24000 ) == 0 ? ( ( PCB->Flags.f & 0x80000 ) == 0 ? ( ( PCB->Flags.f & 0x240000 ) == 0 ? Type & -1041 : Type ) & 1040 : Type ) & -9 : Type;
  if ( ( ( ( ( PCB->Flags.f & 0x24000 ) == 0 ? ( ( PCB->Flags.f & 0x80000 ) == 0 ? ( ( PCB->Flags.f & 0x240000 ) == 0 ? Type & -1041 : Type ) & 1040 : Type ) & -9 : Type ) & 32 ) == 0 || PCB->RatOn == 0 || ( SearchRatLineByLocation( locked, (RatTypePtr*)Result1, (RatTypePtr*)Result2, (RatTypePtr*)Result3 ) & 255 ) == 0 ) && ( ( ( Type/*.1_1of4*/ & 1 ) & 255 ) == 0 || ( SearchViaByLocation( locked, (PinTypePtr*)Result1, (PinTypePtr*)Result2, (PinTypePtr*)Result3 ) & 255 ) == 0 ) )
  {
    if ( Type & 256 )
    {
      HigherAvail = 256;
      if ( SearchPinByLocation( locked, &r1[0], &r2[0], &r3[0] ) & 255 )
        HigherBound = 0.000000000000;
        if ( PCB->Data->LayerN >= -1 )
        {
          i = -1;
          do
          {
            if ( i == -1 )
              SearchLayer = PCB->Data + ( ( PCB->Data->LayerN + ( ( Settings.ShowSolderSide == 0 ) & 255 ) ) * 92 ) + 76;
            else
            if ( i < PCB->Data->LayerN )
              SearchLayer = PCB->Data + ( LayerStack[ i ] * 92 ) + 76;
            else
            {
              SearchLayer = PCB->Data + ( ( PCB->Data->LayerN + ( ( Settings.ShowSolderSide != 0 ) & 255 ) ) * 92 ) + 76;
              if ( PCB->InvisibleObjectsOn == 0 )
              {
                i++;
              }
            }
            if ( PCB->Data->Layer->On )
            {
              if ( ( HigherAvail & 768 ) == 0 )
              {
                if ( Type & 2048 )
                {
                  Result1[0] = PCB->Data + ( LayerStack[ i ] * 92 ) + 76;
                  ebp_232 = PCB->Data->Layer->PolygonN + -1;
                  if ( Result1[3] + -1 != -1 )
                  {
                    Result3[0] = &Result3;
                    ebp_236 = ( PCB->Data->Layer->PolygonN * 60 ) + -60;
                    while ( 1 )
                    {
                      if ( *(int*)(ebp_236 + *(int*)(PCB->Data + ( LayerStack[ i ] * 92 ) + 76 + 44) + 36) + -1 != -1 )
                      {
                        while ( 1 )
                        {
                          if ( ( ( (double)( *(int*)(( *(int*)(ebp_236 + *(int*)(PCB->Data + ( LayerStack[ i ] * 92 ) + 76 + 44) + 36) * 20 ) + -20 + *(int*)(ebp_236 + PCB->Data->Layer->Polygon + 56)) ) - PosY ) * ( (double)( *(int*)(( *(int*)(ebp_236 + *(int*)(PCB->Data + ( LayerStack[ i ] * 92 ) + 76 + 44) + 36) * 20 ) + -20 + *(int*)(ebp_236 + PCB->Data->Layer->Polygon + 56)) ) - PosY ) ) + ( ( (double)( *(int*)(( *(int*)(ebp_236 + *(int*)(PCB->Data + ( LayerStack[ i ] * 92 ) + 76 + 44) + 36) * 20 ) + -20 + *(int*)(ebp_236 + PCB->Data->Layer->Polygon + 56) + 4) ) - PosX ) * ( (double)( *(int*)(( *(int*)(ebp_236 + *(int*)(PCB->Data + ( LayerStack[ i ] * 92 ) + 76 + 44) + 36) * 20 ) + -20 + *(int*)(ebp_236 + PCB->Data->Layer->Polygon + 56) + 4) ) - PosX ) ) < PosY )
                          {
                            Result3[0] = &eax;
                            Result2[0] = ebp_236 + PCB->Data->Layer->Polygon;
                          }
                          else
                          {
                          }
                          if ( *(int*)(ebp_236 + *(int*)(PCB->Data + ( LayerStack[ i ] * 92 ) + 76 + 44) + 36) + -1 + -1 + -1 == -1 )
                            goto B39;
                          else
                          {
                          }
                        }
                      }
                      else
                      {
                      }
B39:;
                      ebp_232 += -1;
                      ebp_236 += -60;
                      if ( ebp_232 == -1 )
                      {
                        if ( 1 & 255 )
                        {
                          break;
                        }
                      }
                      else
                      {
                      }
                    }
                  }
                }
                if ( Type & 4096 )
                {
                  Result1[0] = PCB->Data + ( ( PCB->Data->LayerN + ( ( Settings.ShowSolderSide != 0 ) & 255 ) ) * 92 ) + 76;
                  Result3 = 0;
                  if ( r_search( &PCB->Data->Layer->line_tree, &SearchBox, 0, &linepoint_callback, &Result2 ) == 0 )
                    goto B55;
                  else
                    break;
                }
B55:;
                if ( ( Type & 4 ) && ( SearchLineByLocation( locked, (LayerTypePtr*)Result1, (LineTypePtr*)Result2, (LineTypePtr*)Result3 ) & 255 ) )
                {
                  break;
                }
                if ( ( Type & 16384 ) && ( SearchArcByLocation( locked, (LayerTypePtr*)Result1, (ArcTypePtr*)Result2, (ArcTypePtr*)Result3 ) & 255 ) )
                {
                  break;
                }
                if ( ( ( Type/*.1_1of4*/ & 16 ) & 255 ) && ( SearchTextByLocation( locked, (LayerTypePtr*)Result1, (TextTypePtr*)Result2, (TextTypePtr*)Result3 ) & 255 ) )
                {
                  break;
                }
              }
              if ( ( Type & 8 ) == 0 || ( SearchPolygonByLocation( locked, (LayerTypePtr*)Result1, (PolygonTypePtr*)Result2, (PolygonTypePtr*)Result3 ) & 255 ) == 0 )
              {
              }
              else
              {
                Result3[0] = &Result3;
                if ( HigherAvail == 0 || (double)( Result2[0][2] - Result2[0] ) * (double)( Result2[0][2] - Result2[0] ) <= HigherBound )
                {
                  break;
                }
              }
            }
          }
          while ( i <= PCB->Data->LayerN );
          Result3[0] = &Result3;
        }
        if ( HigherAvail & 256 )
        {
          Result1[0] = r1;
          Result2[0] = r2;
          Result3[0] = r3;
        }
        if ( HigherAvail & 512 )
        {
          Result1[0] = r1;
          Result2[0] = r2;
          Result3[0] = r3;
        }
        if ( HigherAvail & 1024 )
        {
          Result1[0] = r1;
          Result2[0] = r2;
          Result3[0] = r3;
        }
        if ( ( HigherAvail/*.1_1of4*/ & 2 ) & 255 )
        {
          Result1[0] = r1;
          Result2[0] = r2;
          Result3[0] = r3;
        }
        if ( PCB->InvisibleObjectsOn == 0 || ( ( ( Type & 512 ) == 0 || ( SearchPadByLocation( locked, (ElementTypePtr*)Result1, (PadTypePtr*)Result2, (PadTypePtr*)Result3, 1 ) & 255 ) == 0 ) && ( ( Type & 1024 ) == 0 || ( SearchElementNameByLocation( locked, (ElementTypePtr*)Result1, (TextTypePtr*)Result2, (TextTypePtr*)Result3, 1 ) & 255 ) == 0 ) && ( ( ( Type/*.1_1of4*/ & 2 ) & 255 ) == 0 || ( SearchElementByLocation( locked, (ElementTypePtr*)Result1, (ElementTypePtr*)Result2, (ElementTypePtr*)Result3, 1 ) & 255 ) == 0 ) ) )
        {
        }
    }
    if ( ( Type & 512 ) && ( SearchPadByLocation( locked, &r1[0], &r2[0], &r3[0], 0 ) & 255 ) )
      HigherAvail = 512;
      HigherBound = 0.000000000000;
    else
    {
      if ( ( Type & 1024 ) && ( SearchElementNameByLocation( locked, &r1[0], &r2[0], &r3[0], 0 ) & 255 ) )
      {
        /* phantom */ BoxTypePtr box;
        HigherAvail = 1024;
        HigherBound = (double)( ((int*)r2) - ((int*)r2) ) * (double)( ((int*)r2) - ((int*)r2) );
      }
      else
      {
        if ( ( ( Type/*.1_1of4*/ & 2 ) & 255 ) && ( SearchElementByLocation( locked, &r1[0], &r2[0], &r3[0], 0 ) & 255 ) )
        {
          HigherAvail = 2;
          HigherBound = (double)( ((int*)r1) - ((int*)r1) );
          HigherBound *= (double)( ((int*)r1) - ((int*)r1) );
        }
        else
        {
          /* phantom */ BoxTypePtr box;
          HigherAvail = 0;
          HigherBound = 0.000000000000;
        }
      }
    }
  }
  return 32;
}
// Lost vars at line 1433 through condition folding
int SearchObjectByID( DataTypePtr Base, void **Result1, void **Result2, void **Result3, int ID, int type )
{
  int eax;
  int ecx;
  int edx;
  int ebp_52;
  int ebp_48;
  if ( type == 4096 || type == 4 )
  {
    Cardinal l;
    LayerTypePtr layer = &Base->Layer;
    polygon = PCB->Data->LayerN + 2;
    if ( PCB->Data->LayerN + 2 )
    {
      n = 0;
    {
      while ( n = layer->LineN + -1, layer->LineN + -1 == -1 )
      {
        n++;
        if ( n < polygon )
        {
          layer++;
        }
        Result1[0] = (void*)layer;
        break;
      }
      line = layer->Line + ( n * 88 );
      if ( line->ID == ID )
      {
        Result1[0] = (void*)layer;
        Result3[0] = (void*)line;
        Result2[0] = (void*)line;
        return 4;
      }
      if ( line->Point1.ID == ID )
      {
        Result1[0] = (void*)layer;
        Result2[0] = (void*)line;
        Result3[0] = line->BoundingBox.X1 + 44;
        return 4096;
      }
      if ( line->Point2.ID == ID )
      {
        Result1[0] = (void*)layer;
        Result2[0] = (void*)line;
        Result3[0] = line->BoundingBox.X1 + 64;
        return 4096;
      }
      do
      {
        n += -1;
        if ( n + -1 == -1 )
        {
          n++;
        }
        else
        {
          line = layer->Line + ( layer->LineN * 88 ) + -176 + -88;
          if ( ID == layer->Line->BoundingBox.X1 )
            break;
          if ( ID == layer->Line->BoundingBox.X1 )
          {
            Result1[0] = (void*)layer;
            break;
          }
        }
      }
      while ( layer->Line->BoundingBox.X1 != ID );
      Result1[0] = (void*)layer;
      Result2[0] = (void*)line;
      Result3[0] = line->BoundingBox.X1 + 64;
      return 4096;
      Result1[0] = (void*)layer;
      Result2[0] = (void*)line;
      Result3[0] = line->BoundingBox.X1 + 44;
      return 4096;
      Result1[0] = (void*)layer;
      Result3[0] = (void*)line;
      Result2[0] = (void*)line;
      return 4;
    }
    }
  }
  if ( type == 16384 )
  {
    Cardinal l;
    LayerTypePtr layer = &Base->Layer;
    polygon = PCB->Data->LayerN + 2;
    if ( PCB->Data->LayerN + 2 )
    {
      n = 0;
    {
      while ( n = layer->ArcN + -1, layer->ArcN + -1 == -1 )
      {
        n++;
        if ( n < polygon )
        {
          layer++;
        }
        else
        {
          if ( type == 4096 )
          {
            n = Base->RatN + -1;
            if ( Base->RatN + -1 != -1 )
            {
              if ( line->ID == ID )
              {
                Result3[0] = (void*)line;
                Result2[0] = (void*)line;
                Result1[0] = (void*)line;
                break;
              }
              if ( line->Point1.ID == ID )
              {
                Result1[0] = 0;
                break;
              }
              if ( line->Point2.ID == ID )
              {
                Result1[0] = 0;
                break;
              }
              do
              {
                n += -1;
                if ( n + -1 != -1 )
                {
                  line = Base->Rat + ( Base->RatN * 92 ) + -184 + -92;
                  if ( ID == Base->Rat->BoundingBox.X1 )
                  {
                    Result3[0] = (void*)line;
                    Result2[0] = (void*)line;
                    Result1[0] = (void*)line;
                    break;
                  }
                  if ( ID == Base->Rat->BoundingBox.X1 )
                  {
                    Result1[0] = 0;
                    break;
                  }
                }
                else
                {
                  n = Base->ElementN + -1;
                  if ( Base->ElementN + -1 == -1 )
                  {
                    Message( "hace: Internal error, search for ID %d failed\n", ID, ebp_56, polygon->Points, type == 4096, type == 2048, type == 2048, ebp_36 );
                    break;
                  }
                  if ( ID == Base->Element->ID )
                  {
                    Result3[0] = (void*)element;
                    Result2[0] = (void*)element;
                    Result1[0] = (void*)element;
                    break;
                  }
                  do
                  {
                    if ( type == 8192 )
                    {
                      Cardinal n = element->LineN + -1;
                      LineTypePtr line;
                      if ( element->LineN + -1 != -1 )
                      {
                        line = element->Line + ( n * 88 );
                        if ( line->ID == ID )
                        {
                          Result1[0] = (void*)element;
                          Result3[0] = (void*)line;
                          Result2[0] = (void*)line;
                          break;
                        }
                        do
                        {
                          n += -1;
                          if ( n + -1 == -1 )
                            goto B80;
                          else
                          {
                            line = element->Line + ( element->LineN * 88 ) + -176;
                          }
                        }
                        while ( element->Line->BoundingBox.X1 != ID );
                        Result1[0] = (void*)element;
                        Result3[0] = (void*)line;
                        Result2[0] = (void*)line;
                        break;
                      }
                    }
                    else
                    {
                      if ( type == 32768 )
                      {
                        Cardinal n = element->ArcN + -1;
                        ArcTypePtr arc;
                        if ( element->ArcN + -1 != -1 )
                        {
                          arc = element->Arc + ( n * 68 );
                          if ( arc->ID == ID )
                          {
                            Result1[0] = (void*)element;
                            Result3[0] = (void*)arc;
                            Result2[0] = (void*)arc;
                            break;
                          }
                          do
                          {
                            n += -1;
                            if ( n + -1 == -1 )
                              goto B80;
                            else
                            {
                              arc = element->Arc + ( line->BoundingBox.X1 * 68 ) + -136;
                            }
                          }
                          while ( element->Arc->BoundingBox.X1 != ID );
                          Result1[0] = (void*)element;
                          Result3[0] = (void*)arc;
                          Result2[0] = (void*)arc;
                          break;
                        }
                      }
                      else
                      {
                        if ( type == 1024 )
                        {
                          /* phantom */ Cardinal n;
                          TextTypePtr text = element + 156;
                          if ( element->Name[2].ID == ID || element->Name[1].ID == ID || element->Name->ID == ID )
                          {
                            Result1[0] = (void*)element;
                            Result3[0] = (void*)text;
                            Result2[0] = (void*)text;
                            break;
                          }
                          n += -1;
                          if ( n == -1 )
                          {
                            Message( "hace: Internal error, search for ID %d failed\n", ID, ebp_56, polygon->Points, type == 4096, type == 2048, type == 2048, ebp_36 );
                            break;
                          }
                          element = ebp_36;
                          Result1[0] = (void*)element;
                          Result3[0] = (void*)pad;
                          Result2[0] = (void*)pad;
                          break;
                        }
                        else
                        {
                          if ( type == 256 )
                          {
                            sn = Base->Element->net;
                            if ( Base->Element->net )
                            {
                              pin = &Base->Element->net;
                              if ( pin->ID == ID )
                              {
                                Result1[0] = (void*)element;
                                Result3[0] = (void*)pin;
                                Result2[0] = (void*)pin;
                                break;
                              }
                              n = 1;
                              polygon = Base->Element->net + ( ( Base->ElementN + -1 ) * 300 );
                              for ( ; n < sn; n++ )
                              {
                                pin++;
                                if ( ID == pin[1].ID )
                                  element = ebp_32;
                                else
                                {
                                  // n++;
                                }
                              }
                              Result1[0] = (void*)element;
                              Result3[0] = (void*)pin;
                              Result2[0] = (void*)pin;
                              break;
                            }
                          }
                        }
                      }
                    }
B80:;
                    if ( type == 512 )
                    {
                      Cardinal n;
                      Cardinal sn;
                      PadTypePtr pad;
                      polygon = &element->PadN;
                      if ( element->PadN )
                      {
                        pad = &element->Pad;
                        if ( pad->ID == ID )
                        {
                          Result1[0] = (void*)element;
                          Result3[0] = (void*)pad;
                          Result2[0] = (void*)pad;
                          break;
                        }
                        n = 1;
                        for ( ; n < polygon; n++ )
                        {
                          pad++;
                          if ( ID == pad[1].ID )
                          {
                            Result1[0] = (void*)element;
                            Result3[0] = (void*)pad;
                            Result2[0] = (void*)pad;
                            break;
                          }
                          // n++;
                        }
                        Result1[0] = (void*)element;
                        Result3[0] = (void*)pad;
                        Result2[0] = (void*)pad;
                        break;
                      }
                    }
                  }
                  while ( element->ID != ID );
                  Result3[0] = (void*)element;
                  Result2[0] = (void*)element;
                  Result1[0] = (void*)element;
                  break;
                }
              }
              while ( Base->Rat->BoundingBox.X1 != ID );
              Result1[0] = 0;
              break;
              Result1[0] = 0;
              break;
              Result3[0] = (void*)line;
              Result2[0] = (void*)line;
              Result1[0] = (void*)line;
              break;
            }
          }
        }
        Result1[0] = (void*)layer;
        Result3[0] = (void*)arc;
        Result2[0] = (void*)arc;
        break;
      }
      arc = layer->Arc + ( n * 68 );
      if ( arc->ID == ID )
      {
        Result1[0] = (void*)layer;
        Result3[0] = (void*)arc;
        Result2[0] = (void*)arc;
      {
        Cardinal n;
        Cardinal sn;
        PinTypePtr pin;
        return 16384;
      }
      }
      do
      {
        n += -1;
        if ( n + -1 == -1 )
        {
          n++;
        }
        else
        {
          arc = layer->Arc + ( layer->ArcN * 68 ) + -136;
        }
      }
      while ( layer->Arc->BoundingBox.X1 != ID );
      Result1[0] = (void*)layer;
      Result3[0] = (void*)arc;
      Result2[0] = (void*)arc;
    {
      Cardinal n;
      Cardinal sn;
      PinTypePtr pin;
      return 16384;
    }
    }
    }
  }
  else
  {
    if ( type == 16 )
    {
      Cardinal l;
      LayerTypePtr layer = &Base->Layer;
      polygon = PCB->Data->LayerN + 2;
      if ( PCB->Data->LayerN + 2 )
      {
        n = 0;
      {
        while ( n = layer->TextN + -1, layer->TextN + -1 == -1 )
        {
          n++;
          if ( n < polygon )
          {
            layer++;
          }
          Result1[0] = (void*)layer;
          Result3[0] = (void*)text;
          Result2[0] = (void*)text;
          break;
        }
        text = layer->Text + ( n * 60 );
        if ( text->ID == ID )
        {
          Result1[0] = (void*)layer;
          Result3[0] = (void*)text;
          Result2[0] = (void*)text;
          return 16;
        }
        do
        {
          n += -1;
          if ( n + -1 == -1 )
          {
            n++;
          }
          else
          {
            text = layer->Text + ( layer->TextN * 60 ) + -120;
          }
        }
        while ( layer->Text->BoundingBox.X1 != ID );
        Result1[0] = (void*)layer;
        Result3[0] = (void*)text;
        Result2[0] = (void*)text;
        return 16;
      }
      }
    }
  }
  if ( type == 2048 || type == 8 )
  {
    Cardinal l;
    LayerTypePtr layer = &Base->Layer;
    if ( PCB->Data->LayerN + 2 )
    {
      l = 0;
    {
      while ( n = layer->PolygonN + -1, layer->PolygonN + -1 == -1 )
      {
        ebp_52++;
        if ( ebp_52 < PCB->Data->LayerN + 2 )
        {
          ebp_48 += 92;
        }
        Result1[0] = (void*)layer;
        Result2[0] = (void*)polygon;
        Result3[0] = (void*)point;
        break;
      }
      polygon = layer->Polygon + ( ( layer->PolygonN + -1 ) * 60 );
      if ( ID == layer->Polygon->ID )
      {
        Result1[0] = ebp_48;
        Result3[0] = ebp_32;
        Result2[0] = ebp_32;
        return 16;
      }
      do
      {
        if ( type == 2048 && polygon->PointN + -1 != -1 )
        {
          point = &polygon->Points[ n ];
          if ( point->ID == ID )
          {
            Result1[0] = (void*)layer;
            Result2[0] = (void*)polygon;
            Result3[0] = (void*)point;
            break;
          }
          do
          {
            n += -1;
            if ( n + -1 == -1 )
              goto B19;
            else
            {
              point = polygon->Points + ( polygon->PointN * 20 ) + -40;
            }
          }
          while ( polygon->Points->X != ID );
          Result1[0] = (void*)layer;
          Result2[0] = (void*)polygon;
          Result3[0] = (void*)point;
          break;
        }
B19:;
        n += -1;
        if ( n == -1 )
        {
          ebp_52++;
        }
        else
        {
          polygon = layer->Polygon + ( layer->PolygonN * 60 ) + -120;
        }
        Result1[0] = (void*)layer;
        Result2[0] = (void*)polygon;
        Result3[0] = (void*)point;
        break;
      }
      while ( polygon->ID != ID );
      Result1[0] = ebp_48;
      Result3[0] = ebp_32;
      Result2[0] = ebp_32;
      return 16;
    }
    }
  }
  if ( type == 1 )
  {
    Cardinal n;
    Cardinal sn = Base->ViaN;
    PinTypePtr via;
    if ( Base->ViaN )
    {
      via = &Base->Via;
      n = 1;
      if ( via->ID != ID )
      {
        for ( ; n < sn; n++ )
        {
          via++;
          if ( ID == via[1].ID )
          {
            Result3[0] = (void*)via;
            Result2[0] = (void*)via;
            Result1[0] = (void*)via;
            break;
          }
          // n++;
        }
      }
      Result3[0] = (void*)via;
      Result2[0] = (void*)via;
      Result1[0] = (void*)via;
      return 16;
    }
  }
  else
  {
    if ( type != 32 )
      continue;
    n = Base->RatN + -1;
  }
}
ElementTypePtr SearchElementByName( DataTypePtr Base, char *Name )
{
  int eax;
  ElementTypePtr result;
{
  Cardinal n = Base->ElementN + -1;
  /* phantom */ ElementTypePtr element;
  if ( Base->ElementN + -1 != -1 )
  {
    do
    {
      if ( *(int*)(( Base->ElementN * 300 ) + -300 + Base->Element + 148) && Name && Base == 0 )
        break;
      n += -1;
    }
    while ( n + -1 != -1 );
  }
  return 0;
}
}
int SearchScreen( LocationType X, LocationType Y, int Type, void **Result1, void **Result2, void **Result3 )
{
  int ans = pixel_slop * 5;
  ans = Type;
  return SearchObjectByLocation( Type, Result1, Result2, Result3, X, Y, ebp_16 );
}
#if 0
#endif
