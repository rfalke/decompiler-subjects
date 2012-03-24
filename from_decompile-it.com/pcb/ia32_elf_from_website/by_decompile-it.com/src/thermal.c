#include "thermal.c.h"
static PCBTypePtr pcb;
POLYAREA *diag_line( LocationType X, LocationType Y, BDimension l, BDimension w, Boolean rt )
{
  int eax;
  PLINE *c;
  Vector v;
  BDimension x1;
  BDimension x2;
  BDimension y1;
  BDimension y2;
  if ( rt )
  {
    x1 = (int)( (double)( l - w ) * 0.707106781187 );
    y2 = x2 = (int)( 0.707106781187 * (double)( w + l ) );
    y1 = x1;
  }
  else
  {
    x2 = (int)( (double)( w - l ) * 0.707106781187 );
    x1 = (int)( 0.707106781187 * (double)( 0 - ( w + l ) ) );
    y1 = 0 - x1;
    y2 = 0 - x2;
  }
  v[0] = X + x1;
  v[1] = y2 + Y;
  c = poly_NewContour( v );
  if ( poly_NewContour( v ) )
  {
    v[0] = X - x2;
    v[1] = Y - y1;
    poly_InclVertex( c->head.prev, poly_CreateNode( v ) );
    v[0] = X - x1;
    v[1] = Y - y2;
    poly_InclVertex( c->head.prev, poly_CreateNode( v ) );
    v[0] = X + x2;
    v[1] = y1 + Y;
    poly_InclVertex( c->head.prev, poly_CreateNode( v ) );
    ContourToPoly( c );
  }
  return ContourToPoly( c );
}
POLYAREA *square_therm( PinTypePtr pin, Cardinal style )
{
  int ecx;
#error unstructured control flow
}
POLYAREA *ThermPoly( PCBTypePtr p, PinTypePtr pin, Cardinal laynum )
{
  int eax;
  int ecx;
  int edx;
  ArcType a;
  POLYAREA *pa, *arc;
  Cardinal style = ( *(char*)(pin + ( laynum >> 1 ) + 24) >> (unsigned char)( ( laynum & 1 ) << 2 ) ) & 15;
  if ( ( ( *(char*)(pin + ( laynum >> 1 ) + 24) >> (unsigned char)( ( laynum & 1 ) << 2 ) ) & 15 ) != 3 )
  {
    pcb = p;
    if ( ( dh & 1 ) & 255 )
    {
      pa = square_therm( pin, style );
      if ( 0 ^ 0 )
      {
        __stack_chk_fail( );
      }
      return pa;
    }
    else
    if ( pin->Flags.f & 2048 )
    {
      w = (int)( 0.500000000000 * *(int*)square_therm( pin, style )/*.176*/ * (double)( pin->Clearance ) );
      m = OctagonPoly( pin->X, pin->Y, pin->Clearance + pin->Thickness );
      poly_Boolean_free( m, OctagonPoly( pin->X, pin->Y, pin->Thickness ), ebp_112, 2 );
      if ( style == 2 )
      {
        poly_Boolean_free( ebp_112, RectPoly( pin->X - ebp_148, ebp_148 + pin->X, pin->Y - ( pin->Clearance + pin->Thickness ), pin->Y + pin->Clearance + pin->Thickness ), ebp_108, 2 );
      }
      else
      if ( style != 5 )
      {
        m = diag_line( pin->X, pin->Y, pin->Clearance + pin->Thickness, w, 1 );
        poly_Boolean_free( ebp_112, m, ebp_108, 2 );
        m = diag_line( pin->X, pin->Y, pin->Clearance + pin->Thickness, w, 0 );
      }
      else
      {
        poly_Boolean_free( square_therm( pin, 5 ), RectPoly( pin->X - ( ( pin->Thickness + ( pin->Thickness >> 31 ) ) >> 1 ), pin->X + ( ( pin->Thickness + ( pin->Thickness >> 31 ) ) >> 1 ), pin->Y - ( ( pin->Thickness + ( pin->Thickness >> 31 ) ) >> 1 ), pin->Y + ( ( pin->Thickness + ( pin->Thickness >> 31 ) ) >> 1 ) ), ebp_108, 0 );
        poly_Boolean_free( ebp_112, OctagonPoly( pin->X, pin->Y, pin->Thickness ), ebp_104, 1 );
        pa = square_therm( pin, 5 );
      }
      poly_Boolean_free( OctagonPoly( pin->X, pin->Y, pin->Thickness ), m, ebp_160, ebp_156 );
      pa = ebp_112;
    }
    else
    if ( style + -1 <= 1 )
    {
      POLYAREA *m;
      /* phantom */ BDimension t;
      BDimension w = (int)( 0.500000000000 * *(double*)(&pcb->ThermScale) * (double)( pin->Clearance ) );
      pa = CirclePoly( pin->X, pin->Y, ( pin->Clearance + pin->Thickness ) / 2 );
      arc = CirclePoly( pin->X, pin->Y, pin->Thickness / 2 );
      poly_Boolean_free( CirclePoly( pin->X, pin->Y, ( pin->Clearance + pin->Thickness ) / 2 ), arc, &m, 2 );
      if ( style == 2 )
      {
        poly_Boolean_free( m, RectPoly( pin->X - ( ( pin->Clearance + pin->Thickness ) / 2 ), pin->X + ( ( pin->Clearance + pin->Thickness ) / 2 ), pin->Y - w, pin->Y + w ), &arc, 2 );
        RectPoly( pin->X - w, pin->X + w, pin->Y - ( ( pin->Clearance + pin->Thickness ) / 2 ), pin->Y + ( ( pin->Clearance + pin->Thickness ) / 2 ) );
      }
      else
      {
        poly_Boolean_free( m, diag_line( pin->X, pin->Y, ( pin->Clearance + pin->Thickness ) / 2, w, 1 ), &arc, 2 );
        diag_line( pin->X, pin->Y, ( pin->Clearance + pin->Thickness ) / 2, w, 0 );
      }
      poly_Boolean_free( arc, diag_line( pin->X, pin->Y, ( pin->Clearance + pin->Thickness ) / 2, w, 0 ), &m, 2 );
      pa = m;
    }
    else
    {
      a.X = pin->X;
      a.Y = pin->Y;
      a.Thickness = 1;
      a.Width = ( pin->Thickness / 2 ) + ( ( (unsigned char)( ( ( *(int*)(pin + 40) >> 31 ) & 1 ) ^ 1 ) ? *(int*)(pin + 40) + 3 : *(int*)(pin + 40) ) >> 2 );
      a.Height = ( pin->Thickness / 2 ) + ( ( (unsigned char)( ( ( *(int*)(pin + 40) >> 31 ) & 1 ) ^ 1 ) ? *(int*)(pin + 40) + 3 : *(int*)(pin + 40) ) >> 2 );
      a.Clearance = pin->Clearance / 2;
      a.Flags = MakeFlags( 0 );
      a.Flags.t[0] = MakeFlags( 0 );
      a.Delta = (int)( ( ( (double)( a.Clearance ) * ( ( pcb->ThermScale * 0.000000000000 ) + 1.000000000000 ) * 180.000000000000 ) / ( (double)( a.Width ) * -3.141592653590 ) ) + 90.000000000000 );
      a.StartAngle = ( style == 4 ? 45 : pin->Flags.f & 2048 ) + ( 0 - ( (int)( ( ( (double)( a.Clearance ) * ( ( pcb->ThermScale * 0.000000000000 ) + 1.000000000000 ) * 180.000000000000 ) / ( (double)( a.Width ) * -3.141592653590 ) ) + 90.000000000000 ) / 2 ) ) + 90;
      if ( ArcPoly( &a.Clearance, a.Delta ) )
      {
        a.StartAngle += 90;
        if ( arc )
        {
          arc->b = pa = arc;
          a.StartAngle += 90;
          if ( ArcPoly( &a, a.Clearance ) )
          {
            a.StartAngle += 90;
            &arc->b = arc;
            arc->b = arc->b;
            if ( ArcPoly( &a, a.Clearance ) )
            {
              &arc->b = arc;
              arc += 0;
              arc->b = &arc->b;
              arc->contours = &arc[0].f[0];
            }
          }
        }
      }
    }
  }
  pa = 0;
}
#if 0
#endif
