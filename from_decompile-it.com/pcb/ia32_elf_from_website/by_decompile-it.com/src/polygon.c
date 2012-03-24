#include "polygon.c.h"
static int T/*.199*/ = 1457883477;
static Boolean inhibit;
void add_noholes_polyarea( PLINE *pline, void *user_data )
{
  /* phantom */ PolygonType *poly;
  pline->next = ((int*)user_data);
  ((int*)user_data) = pline;
  return;
}
void ComputeNoHoles( PolygonType *poly )
{
  poly_FreeContours( &poly->NoHoles );
  if ( poly->Clipped )
  {
    NoHolesPolygonDicer( poly, 0, &add_noholes_polyarea, (void*)poly );
    poly->NoHolesValid = 1;
    return;
  }
  __printf_chk( 1, "Compute_noholes caught poly-&gt;Clipped = NULL\n" );
  poly->NoHolesValid = 1;
  return;
}
POLYAREA *ContourToPoly( PLINE *contour )
{
  POLYAREA *p;
  poly_PreContour( contour, 1 );
  if ( poly_Create( ) )
  {
    poly_InclContour( poly_Create( ), contour );
  }
  return p;
}
POLYAREA *original_poly( PolygonType *p )
{
  int edx;
  int esi;
  double fp6;
  double fp7;
  PLINE *contour;
  POLYAREA *np;
  Vector v;
{
  Cardinal n;
  PointTypePtr point;
  contour = 0;
  n = p->PointN + -1;
  if ( p->PointN + -1 != -1 )
  {
    do
    {
      v[0] = *(int*)(( p->PointN * 20 ) + -20 + -20 + *(int*)(&p->Points));
      v[1] = *(int*)(( p->PointN * 20 ) + -20 + -20 + *(int*)(&p->Points) + 4);
      if ( contour == 0 )
      {
        contour = poly_NewContour( v );
        if ( poly_NewContour( v ) == 0 )
        {
          np = 0;
          break;
        }
      }
      else
      {
        poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
      }
      n += -1;
    }
    while ( n + -1 != -1 );
  }
  poly_PreContour( contour, 1 );
  if ( ( ( contour->Flags.bits_at_0/*.1_1of4*/ & 8 ) & 255 ) == 0 )
    poly_InvContour( contour );
  np = 0;
  if ( np == 0 )
  {
    return 0;
  }
  poly_InclContour( np, contour );
  np = 0;
  do
  {
    if ( 0.000000000000 <= 0.000000000000 )
    {
      if ( np != poly_Create( ) )
        continue;
      else
      {
      }
    }
    else
    if ( ebx != eax )
    {
      np->contours = *(int*)(ebx + 8);
      np = &ebx;
      n = np->contours;
      break;
    }
  }
  while ( np != poly_Create( ) );
}
}
POLYAREA *RectPoly( LocationType x1, LocationType x2, LocationType y1, LocationType y2 )
{
  PLINE *contour;
  Vector v;
  v[1] = y1;
  v[0] = x1;
  contour = poly_NewContour( v );
  if ( poly_NewContour( v ) )
  {
    v[0] = x2;
    v[1] = y1;
    poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
    v[0] = x2;
    v[1] = y2;
    poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
    v[0] = x1;
    v[1] = y2;
    poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
    ContourToPoly( contour );
  }
  return ContourToPoly( contour );
}
POLYAREA *OctagonPoly( LocationType x, LocationType y, BDimension radius )
{
  int eax;
  int edx;
  double fp0;
  double fp1;
  double fp5;
  double fp6;
  double fp7;
  PLINE *contour;
  Vector v;
  v[0] = x + (int)( 0.000000000000 < (double)( radius ) * 0.500000000000 ? ( (double)( radius ) * 0.500000000000 ) - 0.500000000000 : 0.500000000000 + ( (double)( radius ) * 0.500000000000 ) );
  v[1] = y + ( 0.000000000000 < 0.000000000000 ? (int)( ebp_56 - 0.500000000000 ) : (int)( 0.000000000000 + 0.500000000000 ) );
  contour = poly_NewContour( v );
  if ( poly_NewContour( v ) == 0 )
  {
  }
  v[0] = x + (int)( fp0 );
  if ( ( ( ( (double)( radius ) * 0.500000000000 ) <> 0.000000000000 ) & 1 ) == 0 )
  {
    v[1] = y + (int)( fp0 + 0.500000000000 );
    poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
    v[0] = ( x * 2 ) - v[0];
    poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
  }
  else
  {
    v[1] = y + (int)( fp0 - 0.500000000000 );
    poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
    v[0] = ( x * 2 ) - v[0];
    poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
  }
  v[0] = x - edx;
  if ( 0.000000000000 >= 0.000000000000 )
  {
    v[1] = y + (int)( 0.000000000000 + 0.500000000000 );
    poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
    v[1] = ( y * 2 ) - v[1];
    poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
  }
  else
  {
    v[1] = y + (int)( 0.000000000000 - 0.500000000000 );
    poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
    v[1] = ( y * 2 ) - v[1];
    poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
  }
  v[0] = x - (int)( 0.000000000000 + 0.500000000000 );
  v[1] = y - (int)( 0.000000000000 );
  poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
  v[0] = ebp_64 - v[0];
  poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
  v[0] = x + (int)( 0.000000000000 );
  v[1] = y - (int)( 0.000000000000 );
  poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
  ContourToPoly( contour );
  return ContourToPoly( contour );
}
void frac_circle( PLINE *c, LocationType X, LocationType Y, int *v, int range )
{
  int eax;
  int edx;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  double e1, e2, t1;
  int i;
  poly_InclVertex( &c->head.prev, poly_CreateNode( v ) );
  if ( range != 1 )
  {
    if ( (long long)36 / range <= 0 )
    {
      return;
    }
  }
  else
  {
  }
  i = 0;
  v[0] = v;
  do
  {
    v[0] = X + (int)( 0.000000000000 );
    v[1] = ( 0.000000000000 < ( fp7 * 0.984807753012 ) - ( fp6 * 0.173648177667 ) ? (int)( e1 - 0.500000000000 ) : (int)( e1 + 0.500000000000 ) ) + Y;
    i++;
    poly_InclVertex( c->head.prev, poly_CreateNode( v ) );
    e1 = e1;
    t1 = 0.000000000000;
  }
  while ( i < (long long)36 / range );
  return;
}
POLYAREA *CirclePoly( LocationType x, LocationType y, BDimension radius )
{
  int ebx;
  int esi;
  PLINE *contour;
  Vector v;
  if ( radius > 0 )
  {
    v[0] = x + radius;
    v[1] = y;
    if ( contour )
    {
      frac_circle( contour, x, y, v, 1 );
      ContourToPoly( contour );
      return ContourToPoly( ebp_44 );
    }
  }
  return 0;
}
POLYAREA *RoundRect( LocationType x1, LocationType x2, LocationType y1, LocationType y2, BDimension t )
{
  PLINE *contour;
  Vector v;
  v[1] = y1;
  v[0] = x1 - t;
  contour = poly_NewContour( v );
  if ( poly_NewContour( v ) )
  {
    frac_circle( contour, x1, y1, v, 4 );
    v[0] = x2;
    v[1] = y1 - t;
    poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
    frac_circle( contour, x2, y1, v, 4 );
    v[0] = x2 + t;
    v[1] = y2;
    poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
    frac_circle( contour, x2, y2, v, 4 );
    v[0] = x1;
    v[1] = y2 + t;
    poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
    frac_circle( contour, x1, y2, v, 4 );
    ContourToPoly( contour );
  }
  return ContourToPoly( contour );
}
POLYAREA *ArcPolyNoIntersect( ArcType *a, BDimension thick )
{
  double fp0;
  double fp1;
  double fp3;
  double fp7;
  PLINE *contour;
  POLYAREA *np;
  Vector v;
  BoxType *ends;
  int i, segs;
  double ang, da, rx, ry;
  long half;
  if ( thick > 0 )
  {
    if ( a->Delta < 0 )
    {
      a->StartAngle += a->Delta;
      a->Delta = 0 - a->Delta;
    }
    half = ( thick + 1 ) >> 1;
    ends = GetArcEnds( a );
    rx = (double)( a->Width - half < 0 ? a->Width - half : 0 );
    ry = (double)( a->Height - half < 0 ? a->Height - half : 0 );
    ;
    v[0] = (int)( (double)( a->X ) - ( cos( (double)( a->StartAngle ) * 0.017453292520 ) * rx ) );
    v[1] = (int)( (double)( a->Y ) + ( sin( (double)( a->StartAngle ) * 0.017453292520 ) * ry ) );
    if ( poly_NewContour( v ) )
    {
      da = (double)( a->Delta );
      segs = a->Delta / 5;
      da /= (double)( segs );
      if ( ( a->Delta / 5 ) + -1 > 0 )
      {
        i = 0;
        i = 0;
        a = &i;
        do
        {
          v[0] = (int)( (double)( a->X ) - ( ebp_56 * rx ) );
          v[1] = (int)( (double)( a->Y ) + ( ebp_48 * ry ) );
          poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
        }
        while ( i < ( a->Delta / 5 ) + -1 );
        contour = contour;
      }
      else
      {
      }
      ;
      v[0] = (int)( (double)( a->X ) - ( cos( (double)( a->Delta + a->StartAngle ) * 0.017453292520 ) * rx ) );
      v[1] = (int)( (double)( a->Y ) + ( sin( (double)( a->Delta + a->StartAngle ) * 0.017453292520 ) * ry ) );
      frac_circle( contour, ends->X2, ends->Y2, v, sin( (double)( a->Delta + a->StartAngle ) * 0.017453292520 ) );
      half = (double)( a->Width + half );
      da = -( da );
      if ( segs > 0 )
      {
        i = 0;
        while ( 1 )
        {
          i++;
          v[0] = (int)( 0.000000000000 - ( half * cos( ( (double)( a->Delta + a->StartAngle ) + da ) * 0.017453292520 ) ) );
          v[1] = (int)( (double)( a->Y ) + ( half * ( (double)( a->Y ) + ( half * sin( (double)( a->Delta + a->StartAngle ) * 0.017453292520 ) ) ) ) );
          poly_InclVertex( &ry & 0xFFFFFFFF, poly_CreateNode( v ) );
          if ( segs <= i )
            contour = &ry & 0xFFFFFFFF;
          else
          {
            ;
          }
        }
      }
      else
      {
      }
      ;
      v[0] = (int)( (double)( a->X ) );
      v[1] = (int)( (double)( a->Y ) + ( sin( (double)( a->StartAngle ) * 0.017453292520 ) * half ) );
      frac_circle( contour, ends->X1, ends->Y1, v, 2 );
      ContourToPoly( contour );
      return ContourToPoly( contour );
    }
    else
    {
    }
  }
  np = 0;
  return ContourToPoly( contour );
}
POLYAREA *ArcPoly( ArcType *a, BDimension thick )
{
  int eax;
  int edx;
  int esi;
  int edi;
  double fp7;
  /* phantom */ double delta;
  ArcType seg1;
  ArcType seg2;
  POLYAREA *tmp1, *tmp2, *res;
  if ( ( (double)( a->Width ) * 6.283185307180 * ( ( (double)( ( a->Delta ^ ( a->Delta >> 31 ) ) - ( a->Delta >> 31 ) ) / -360.000000000000 ) + 1.000000000000 ) ) - (double)( thick ) < 10.000000000000 )
  {
    /* phantom */ int half_delta;
    memcpy( &seg2.BoundingBox.X1, a, 68 );
    memcpy( &seg1.BoundingBox.X1, &seg2.BoundingBox.X1, 68 );
    seg1.Delta = a->Delta >> 1;
    seg2.Delta -= a->Delta >> 1;
    seg2.StartAngle += a->Delta >> 1;
    tmp1 = ArcPolyNoIntersect( a, thick );
    poly_Boolean_free( tmp1, ArcPolyNoIntersect( &seg2, thick ), &res, 0 );
  }
  else
    ArcPolyNoIntersect( a, thick );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return ArcPolyNoIntersect( a, thick );
}
POLYAREA *LinePoly( LineType *L, BDimension thick )
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
  double (null);
  double (null);
  double (null);
  PLINE *contour;
  POLYAREA *np;
  Vector v;
  /* phantom */ double d, dx, dy;
  long half;
  LineType _l;
  /* phantom */ LineType *l;
  memcpy( &_l.BoundingBox.X1, L, 0 );
  if ( thick > 0 )
  {
    half = ( half + 1 ) >> 1;
    if ( !( _l.Flags.f & 256 ) )
      CirclePoly( _l.Point1.X, _l.Point1.Y, half );
      if ( 0 ^ 0 )
      {
        __stack_chk_fail( );
      }
      return CirclePoly( _l.Point1.X, _l.Point1.Y, half );
    else
    {
      if ( !( "huge", 0 ) )
      {
        v[0] = (int)( (double)( _l.Flags.f & 256 ? (int)( (double)( _l.Point1.X ) - 0.000000000000 ) : _l.Point1.X ) );
        v[1] = (int)( (double)( (int)( (double)( _l.Point1.Y ) ) ) );
        dx = 0.000000000000;
        if ( poly_NewContour( v ) )
        {
          v[0] = (int)( (double)( _l.Point2.X ) );
          v[1] = (int)( 0.000000000000 - (double)( _l.Point2.Y ) );
          if ( ecx )
          {
            poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
          }
          else
          {
            frac_circle( contour, _l.Point2.X, _l.Point2.Y, v, 2 );
            dy = (double)( _l.Point2.Y );
          }
          v[0] = (int)( 0.000000000000 );
          v[1] = (int)( fp0 );
          poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
          v[0] = (int)( ebp_160 );
          v[1] = (int)( 0.000000000000 + (double)( (int)( (double)( _l.Point1.Y ) ) ) );
          if ( ebp_204 )
          {
            poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
          }
          else
            frac_circle( contour, ebp_164, esi, &edi, 2 );
          ContourToPoly( contour );
        }
        else
        {
        }
      }
      else
      {
      }
      v[0] = (int)( (double)( _l.Flags.f & 256 ? (int)( (double)( _l.Point1.X ) - 0.000000000000 ) : _l.Point1.X ) );
      v[1] = (int)( (double)( (int)( (double)( _l.Point1.Y ) ) ) );
      dx = 0.000000000000;
    }
  }
  np = 0;
}
POLYAREA *SquarePadPoly( PadType *pad, BDimension clear )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  double fp1;
  double fp6;
  double fp7;
  double (null);
  double (null);
  double (null);
  double (null);
  double (null);
  double (null);
  double (null);
  PLINE *contour;
  POLYAREA *np;
  Vector v;
  /* phantom */ double d;
  double tx, ty;
  double cx, cy;
  PadType _t;
  /* phantom */ PadType *t;
  PadType _c;
  /* phantom */ PadType *c;
  /* phantom */ int halfthick;
  /* phantom */ int halfclear;
  memcpy( &_t.BoundingBox.X1, pad, 0 );
  pad = pad;
  memcpy( &_c.BoundingBox.X1, pad, 104 );
  cy = 0.000000000000;
  if ( sqrt( ( (double)( pad->Point1.X - pad->Point2.X ) * (double)( pad->Point1.X - pad->Point2.X ) ) * 0.000000000000 ) == 0.000000000000 )
  {
    v[0] = (int)( 0.000000000000 );
    v[1] = (int)( (double)( eax ) );
    contour = poly_NewContour( v );
    np = 0;
    if ( np == 0 )
    {
    }
    else
    {
      frac_circle( contour, (int)( 0.000000000000 - fp0 ), (int)( (double)( ebp_276 ) - fp0 ), 4, 0.000000000000 );
      v[0] = (int)( (double)( (int)( (double)( ebp_268 ) + ( ( (double)( ecx ) / fp7 ) * (double)( ebp_268 - _t.Point1.X ) ) ) ) );
      v[1] = (int)( (double)( ebp_272 ) - ebp_328 );
      poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
      frac_circle( contour, (int)( ebp_392 - ebp_312 ), (int)( ebp_376 - ebp_296 ), 4, "12 # (unsigned short)( ( ( fpround & 3 ) << 10 ) | 895 )" );
      v[0] = (int)( cy + (double)( sqrt( ( (double)( pad->Point1.X - pad->Point2.X ) * (double)( pad->Point1.X - pad->Point2.X ) ) * 0.000000000000 ) ? _c.Point2.X : (int)( (double)( _c.Point2.X ) + ( ( (double)( ( clear + 1 ) / 2 ) / sqrt( ( (double)( pad->Point1.X - pad->Point2.X ) * (double)( pad->Point1.X - pad->Point2.X ) ) * 0.000000000000 ) ) * (double)( _c.Point2.X - _c.Point1.X ) ) ) ) );
      v[1] = (int)( ebp_296 + (double)( ebx ) );
      poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
      frac_circle( contour, (int)( (double)( (int)( (double)( ebp_268 ) + ( ( (double)( ecx ) / fp7 ) * (double)( ebp_268 - _t.Point1.X ) ) ) ) + cy ), (int)( 0.000000000000 ), 4, "12 # (unsigned short)( ( ( fpround & 3 ) << 10 ) | 895 )" );
      v[0] = (int)( 0.000000000000 + 0.000000000000 );
      v[1] = (int)( 0.000000000000 );
      poly_InclVertex( contour->head.prev, poly_CreateNode( v ) );
      frac_circle( contour, (int)( cy + 0.000000000000 ), (int)( 0.000000000000 ), 4, "12 # (unsigned short)( ( ( fpround & 3 ) << 10 ) | 895 )" );
      ContourToPoly( contour );
    }
    if ( 0 ^ 0 )
    {
      __stack_chk_fail( );
    }
    return 0;
  }
  else
  {
  }
{
  double a;
  v[0] = (int)( 0.000000000000 );
  v[1] = (int)( (double)( eax ) );
  contour = poly_NewContour( v );
  np = 0;
}
}
POLYAREA *PinPoly( PinType *pin, BDimension thick, BDimension clear )
{
  int ecx;
  int ch;
  int edx;
  /* phantom */ int size;
  if ( ( ch & 1 ) & 255 )
  {
    return RoundRect( *(int*)(pin + 52) - ( ( thick + 1 ) / 2 ), pin->X + ( ( thick + 1 ) / 2 ), *(int*)(pin + 56) - ( ( thick + 1 ) / 2 ), pin->Y + ( ( thick + 1 ) / 2 ), ( clear + 1 ) / 2 );
  }
  clear = ( clear + thick + 1 ) / 2;
  if ( ( ch & 8 ) & 255 )
  {
    clear = ( ( clear + thick + 1 ) / 2 ) * 2;
    thick = pin->Y;
    pin = &pin->X;
  }
  clear = ( clear + thick + 1 ) / 2;
  thick = pin->Y;
  pin = &pin->X;
}
POLYAREA *BoxPolyBloated( BoxType *box, BDimension bloat )
{
  return RectPoly( box->X1 - bloat, box->X2 + bloat, box->Y1 - bloat, box->Y2 + bloat );
}
int SubtractPin( DataType *d, PinType *pin, LayerType *l, PolygonType *p )
{
  int edx;
  int ebx;
  int esi;
  int edi;
  POLYAREA *np;
  /* phantom */ Cardinal i;
  if ( pin->Clearance )
  {
    if ( *(char*)(pin + ( GetLayerNumber( d, l ) >> 1 ) + 24) & ( 15 << ( ( GetLayerNumber( d, l ) & 1 ) << 2 ) ) )
    {
      if ( np == 0 )
      {
        return -1;
      }
    }
    else
    {
      if ( np )
      {
      }
      return -1;
    }
  }
  return -1;
}
int SubtractLine( LineType *line, PolygonType *p )
{
  int edx;
  POLYAREA *np = LinePoly( line, line->Clearance + line->Thickness );
  if ( LinePoly( line, line->Clearance + line->Thickness ) )
  {
  }
  return -1;
}
int SubtractArc( ArcType *arc, PolygonType *p )
{
  int edx;
  POLYAREA *np = ArcPoly( arc, arc->Clearance + arc->Thickness );
  if ( ArcPoly( arc, arc->Clearance + arc->Thickness ) )
  {
  }
  return -1;
}
int SubtractText( TextType *text, PolygonType *p )
{
  int edx;
  POLYAREA *np = RoundRect( PCB->Bloat + text, text->BoundingBox.X2 - PCB->Bloat, PCB->Bloat + text->BoundingBox.Y1, text->BoundingBox.Y2 - PCB->Bloat, PCB->Bloat );
  /* phantom */ BoxType *b;
  if ( RoundRect( PCB->Bloat + text, text->BoundingBox.X2 - PCB->Bloat, PCB->Bloat + text->BoundingBox.Y1, text->BoundingBox.Y2 - PCB->Bloat, PCB->Bloat ) )
  {
  }
  return -1;
}
int SubtractPad( PadType *pad, PolygonType *p )
{
  POLYAREA *np;
  if ( ( pad->Flags.f/*.2_2of4*/ & 1 ) & 255 )
  {
    if ( np )
    {
    }
  }
  else
  {
    if ( np )
    {
    }
  }
  return -1;
}
int pin_sub_callback( BoxType *b, void *cl )
{
  int eax;
  int ecx;
  /* phantom */ PinTypePtr pin;
  /* phantom */ struct cpInfo *info;
  /* phantom */ PolygonTypePtr polygon;
  if ( ((int*)cl) == b )
  {
    return 0;
  }
  if ( SubtractPin( &cl[1], &b[0].X1, &cl[2], &cl[3] ) < 0 )
  {
    cl[5] = cl + 20;
    __longjmp_chk( cl + 20 + 20, 1 );
  }
  return 1;
}
int arc_sub_callback( BoxType *b, void *cl )
{
  int edx;
  /* phantom */ ArcTypePtr arc;
  /* phantom */ struct cpInfo *info;
  /* phantom */ PolygonTypePtr polygon;
  if ( ((int*)cl) == b )
  {
    return 0;
  }
  if ( SubtractArc( &b[0].X1, &cl[3] ) < 0 )
  {
    cl[5] = cl + 20;
    __longjmp_chk( cl + 20 + 20, 1 );
  }
  return 1;
}
int pad_sub_callback( BoxType *b, void *cl )
{
  int edx;
  /* phantom */ PadTypePtr pad;
  /* phantom */ struct cpInfo *info;
  PolygonTypePtr polygon;
  if ( ((int*)cl) != b )
  {
    polygon = &cl[3];
    if ( b[1].Y1/*.1_1of4*/ >= 0 )
    {
      if ( cl[4] == 0 )
        goto B6;
    }
    else
    if ( cl[4] == 0 )
    {
      return 0;
    }
B6:;
    if ( SubtractPad( &b[0].X1, polygon ) < 0 )
    {
      cl[5] = cl + 20;
      __longjmp_chk( cl + 20 + 20, 1 );
    }
    return 1;
  }
  return 0;
}
int line_sub_callback( BoxType *b, void *cl )
{
  int edx;
  /* phantom */ LineTypePtr line;
  /* phantom */ struct cpInfo *info;
  /* phantom */ PolygonTypePtr polygon;
  if ( ((int*)cl) == b )
  {
    return 0;
  }
  if ( SubtractLine( &b[0].X1, &cl[3] ) < 0 )
  {
    cl[5] = cl + 20;
    __longjmp_chk( cl + 20 + 20, 1 );
  }
  return 1;
}
int text_sub_callback( BoxType *b, void *cl )
{
  int edx;
  /* phantom */ TextTypePtr text;
  /* phantom */ struct cpInfo *info;
  /* phantom */ PolygonTypePtr polygon;
  if ( ((int*)cl) == b )
  {
    return 0;
  }
  if ( SubtractText( &b[0].X1, &cl[3] ) < 0 )
  {
    cl[5] = cl + 20;
    __longjmp_chk( cl + 20 + 20, 1 );
  }
  return 1;
}
int clearPoly( DataTypePtr Data, LayerTypePtr Layer, PolygonType *polygon, BoxType *here, BDimension expand )
{
  int ecx;
  int edx;
  int ebp_272;
  int ebp_264;
  int ebp_248;
  int ebp_244;
  int ebp_228;
  int r;
  BoxType region;
  struct cpInfo info;
  /* phantom */ Cardinal group;
  if ( !1 && GetLayerNumber( Data, Layer ) < PCB->Data->LayerN )
  {
    GetLayerNumber( Data, Layer );
    if ( PCB->Data->LayerN )
    {
      ebp_228 = 0;
      ebp_244 = Data->pcb;
      do
      {
        if ( Data->pcb->Font.Valid )
        {
          if ( GetLayerNumber( Data, Layer ) != *(int*)(ebp_244 + 7444) )
          {
            do
            {
              region.X1 = ( here ? (unsigned char)( ( here->X1 < polygon ) ^ 1 ) ? polygon : here->X1 : polygon ) + ( 0 - expand );
              region.Y1 = expand + ( here ? (unsigned char)( ( here->Y1 < *(int*)(&polygon->BoundingBox.Y1) ) ^ 1 ) ? polygon->BoundingBox.Y1 : here->Y1 : polygon->BoundingBox.Y1 );
              region.Y2 = ( here ? here->Y2 <= *(int*)(&polygon->BoundingBox.Y2) ? polygon->BoundingBox.Y2 : here->Y2 : polygon->BoundingBox.Y2 ) - ( 0 - expand );
              info.data = Data;
              region.X2 = ( here ? here->X2 <= *(int*)(&polygon->BoundingBox.X2) ? polygon->BoundingBox.X2 : here->X2 : polygon->BoundingBox.X2 ) - ( 0 - expand );
              info.other = here;
              info.layer = Layer;
              info.solder = ebp_228 == 0;
              info.polygon = polygon;
              r = 0;
              if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
              {
                r = r_search( &info.data->via_tree, &region, 0, &pin_sub_callback, (void*)info.other );
              {
                Cardinal entry;
                r += r_search( &info.data->pin_tree, &region, 0, &pin_sub_callback, (void*)info.other );
                if ( info.data->pcb->LayerGroups.Number[0] )
                {
                  /* phantom */ LayerTypePtr layer;
                  Cardinal number;
                  entry = 0;
                  Data = info.data;
                  do
                  {
                    number = *(int*)(Data->pcb + ( entry * 4 ) + ( ebp_284 * 4 ) + 7444);
                    if ( *(int*)(Data->pcb + ( entry * 4 ) + ( ebp_228 * 18 * 4 ) + 7444) < PCB->Data->LayerN )
                    {
                    }
                    entry++;
                  }
                  while ( entry + 1 < *(int*)(Data->pcb + ( ebp_288 << 2 ) + 4) );
                  r = ebp_252;
                }
                if ( info.solder == 0 )
                {
                  ebp_264 = 0;
                  if ( PCB->Data->LayerN )
                  {
                    do
                    {
                      if ( Data->pcb->Font.Valid )
                      {
                        if ( PCB->Data->LayerN + 1 != *(int*)(ebp_272 + 7444) )
                        {
                          do
                          {
                            if ( 0 + 1 + 1 < Data->pcb->Font.Valid )
                              continue;
                          }
                          while ( Data->pcb->LayerGroups.Number[0] != PCB->Data->LayerN + 1 );
                          r = r;
                        }
                      }
                      ebp_264++;
                      ebp_272 += 72;
                    }
                    while ( ebp_264 < PCB->Data->LayerN );
                  }
                  if ( ebp_264 == ebp_228 )
                  {
                    r += r_search( &info.data->pad_tree, &region, 0, &pad_sub_callback, (void*)info.other );
                    break;
                  }
                }
                r += r_search( &info.data->pad_tree, &region, 0, &pad_sub_callback, (void*)info.other );
                break;
              }
              }
            }
            while ( *(int*)(Data->pcb + ( ebp_228 * 72 ) + 7448 + 4) == GetLayerNumber( Data, Layer ) );
            ebp_248 = Data->pcb;
            while ( 1 )
            {
              region.X1 = ( here ? (unsigned char)( ( here->X1 < polygon ) ^ 1 ) ? polygon : here->X1 : polygon ) + ( 0 - expand );
              region.Y1 = expand + ( here ? (unsigned char)( ( here->Y1 < *(int*)(&polygon->BoundingBox.Y1) ) ^ 1 ) ? polygon->BoundingBox.Y1 : here->Y1 : polygon->BoundingBox.Y1 );
              region.Y2 = ( here ? here->Y2 <= *(int*)(&polygon->BoundingBox.Y2) ? polygon->BoundingBox.Y2 : here->Y2 : polygon->BoundingBox.Y2 ) - ( 0 - expand );
              info.data = Data;
              region.X2 = ( here ? here->X2 <= *(int*)(&polygon->BoundingBox.X2) ? polygon->BoundingBox.X2 : here->X2 : polygon->BoundingBox.X2 ) - ( 0 - expand );
              info.other = here;
              info.layer = Layer;
              info.solder = ebp_228 == 0;
              info.polygon = polygon;
              r = 0;
            }
          }
        }
        ebp_228++;
        ebp_244 += 72;
      }
      while ( PCB->Data->LayerN <= ebp_228 );
    }
    else
      ebp_228 = 0;
    if ( PCB->Data->LayerN )
      continue;
    else
    {
      region.X1 = ( here ? (unsigned char)( ( here->X1 < polygon ) ^ 1 ) ? polygon : here->X1 : polygon ) + ( 0 - expand );
      region.Y1 = expand + ( here ? (unsigned char)( ( here->Y1 < *(int*)(&polygon->BoundingBox.Y1) ) ^ 1 ) ? polygon->BoundingBox.Y1 : here->Y1 : polygon->BoundingBox.Y1 );
      region.Y2 = ( here ? here->Y2 <= *(int*)(&polygon->BoundingBox.Y2) ? polygon->BoundingBox.Y2 : here->Y2 : polygon->BoundingBox.Y2 ) - ( 0 - expand );
      info.data = Data;
      region.X2 = ( here ? here->X2 <= *(int*)(&polygon->BoundingBox.X2) ? polygon->BoundingBox.X2 : here->X2 : polygon->BoundingBox.X2 ) - ( 0 - expand );
      info.other = here;
      info.layer = Layer;
      info.solder = ebp_228 == 0;
      info.polygon = polygon;
      r = 0;
    }
  }
  else
  {
    return 0;
  }
}
int Unsubtract( POLYAREA *np1, PolygonType *p )
{
  int eax;
  double fp6;
  double fp7;
  POLYAREA *merged = 0, *np;
  int x;
  if ( x )
  {
    __fprintf_chk( stderr, 1, "Error while clipping PBO_UNITE: %d\n", x );
    poly_Free( &merged );
    p->Clipped = 0;
    if ( p->NoHoles )
    {
      __printf_chk( 1, "Just leaked in Unsubtract\n" );
    }
  }
  else
  {
    if ( merged )
    {
      do
      {
        if ( 0.000000000000 <= 0.000000000000 )
        {
          if ( merged->f != merged )
            continue;
          else
          {
          }
        }
        else
        if ( merged->f != merged )
        {
          merged->contours = merged->contours = &merged->contours;
        }
      }
      while ( merged->f != merged );
    }
    p->Clipped = merged;
    if ( poly_Boolean_free( p->Clipped, original_poly( p ), ebp_16, 1 ) )
    {
      __fprintf_chk( stderr, 1, "Error while clipping PBO_ISECT: %d\n", poly_Boolean_free( p->Clipped, poly_Boolean_free( p->Clipped, np1, &merged, 0 ), ebp_16, 1 ) );
      poly_Free( ebp_16 );
      p->Clipped = 0;
      if ( p->NoHoles )
      {
        __printf_chk( 1, "Just leaked in ClipOriginal\n" );
      }
    }
    else
    {
      if ( ebp_16 )
      {
        do
        {
          if ( 0.000000000000 <= 0.000000000000 )
          {
            if ( ebp_16 != *(int*)(*ebp_16) )
              continue;
            else
            {
            }
          }
          else
          if ( *ebp_16 != ebp_16 )
          {
            *(int*)(ebp_16 + 8) = *(int*)(*ebp_16 + 8) = *(int*)(ebp_16 + 8);
            break;
          }
        }
        while ( ebp_16 != *(int*)(*ebp_16) );
      }
      p->Clipped = ebp_16;
      return 1;
    }
  }
  p->NoHoles = 0;
  return 0;
}
int InitClip( DataTypePtr Data, LayerTypePtr layer, PolygonType *p )
{
  int eax;
  int ecx;
  int edx;
  if ( inhibit == 0 )
  {
    if ( p->Clipped )
      poly_Free( &p->Clipped );
    p->Clipped = original_poly( p );
    poly_FreeContours( &p->NoHoles );
    if ( p->Clipped == 0 )
    {
      return 0;
    }
    if ( ( p->Flags.f/*.1_1of4*/ & 16 ) & 255 )
    {
      clearPoly( Data, layer, p, 0, 0 );
      return 1;
    }
    p->NoHolesValid = 0;
    return 1;
  }
  return 0;
}
Boolean RemoveExcessPolygonPoints( LayerTypePtr Layer, PolygonTypePtr Polygon )
{
  int eax;
  int edx;
  PointTypePtr pt1;
  PointTypePtr pt2;
  PointTypePtr pt3;
  Cardinal n;
  LineType line;
  Boolean changed;
  if ( !( Undoing( ) & 255 ) && Polygon->PointN )
  {
    n = 0;
    pt1 = &pt2->X;
    pt3 = pt2 + 20;
    changed = 0;
    for ( ; Polygon->PointN != n;  )
    {
      line.Point1.X = pt1->X;
      line.Point1.Y = pt1->Y;
      line.Point1.X2 = pt1->X2;
      line.Point1.Y2 = pt1->Y2;
      line.Point1.ID = pt1->ID;
      line.Point2.X = pt3->X;
      line.Point2.Y = pt3->Y;
      line.Point2.X2 = pt3->X2;
      line.Point2.Y2 = pt3->Y2;
      line.Thickness = 0;
      line.Point2.ID = pt3->ID;
      if ( IsPointOnLine( (float)( (double)( pt2->X ) ), (float)( (double)( pt2->Y ) ), 0.0, &line ) & 255 )
      {
        RemoveObject( 2048, (void*)Layer, (void*)Polygon, (void*)pt2 );
        n++;
        changed = 1;
        if ( n < Polygon->PointN )
          goto B15;
      }
      else
      {
        n++;
        if ( n + 1 < Polygon->PointN )
          goto B15;
      }
B15:;
      pt2++;
      pt3++;
      Polygon->PointN += -1;
    }
    pt3 = &Polygon->Points;
    line.Point1.X = pt1->X;
    line.Point1.Y = pt1->Y;
    line.Point1.X2 = pt1->X2;
    line.Point1.Y2 = pt1->Y2;
    line.Point1.ID = pt1->ID;
    line.Point2.X = pt3->X;
    line.Point2.Y = pt3->Y;
    line.Point2.X2 = pt3->X2;
    line.Point2.Y2 = pt3->Y2;
    line.Thickness = 0;
    line.Point2.ID = pt3->ID;
  }
  else
    changed = 0;
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return changed;
}
Cardinal GetLowestDistancePolygonPoint( PolygonTypePtr Polygon, LocationType X, LocationType Y )
{
  int eax;
  double fp0;
  double fp1;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  double mindistance;
  PointTypePtr ptr1;
  PointTypePtr ptr2;
  Cardinal n;
  Cardinal result = 0;
  ptr2 = &Polygon->Points;
  n = Polygon->PointN;
  if ( Polygon->PointN )
  {
    ptr1 = ptr2 + ( ( ( n * 5 ) + -5 ) << 2 );
  {
    double u, dx, dy;
    n = 0;
    while ( 1 )
    {
      u = (double)( ptr2->Y - ebx );
      if ( (double)( ptr2->X - ptr2->X ) == 0.000000000000 )
      {
        dx = 0.000000000000;
        dy = 0.000000000000;
        if ( 0.000000000000 == 0.000000000000 )
        {
          if ( fp6 != 0.000000000000 )
          {
            dy = dx = dy;
          }
          else
          {
            n++;
            if ( Polygon->PointN <= n + 1 )
            {
              break;
            }
            else
            {
              ptr2++;
            }
          }
        }
        else
        {
          dy = dx = dy;
        }
      }
      if ( 0.000000000000 / 0.000000000000 < 0.000000000000 )
        dy = ( (double)( X - edi ) * (double)( X - edi ) ) + ( (double)( Y - ebp_40 ) * (double)( Y - ebp_40 ) );
      else
      if ( 1.000000000000 < 0.000000000000 )
      {
      }
      else
      {
      }
      if ( ( (double)( X - edi ) * (double)( X - edi ) ) + ( (double)( Y - ebp_40 ) * (double)( Y - ebp_40 ) ) < dy )
        result = n;
      else
      {
      }
    }
  }
  }
  return result;
}
void GoToPreviousPoint( void )
{
  if ( Crosshair.AttachedPolygon.PointN == 0 )
  {
    return;
  }
  if ( Crosshair.AttachedPolygon.PointN == 1 )
  {
    Crosshair.AttachedPolygon.PointN = 0;
    Crosshair.AttachedLine.State = 0;
    addedLines = 0;
    return;
  }
{
  PointTypePtr points;
  /* phantom */ Cardinal n;
  Crosshair.AttachedPolygon.PointN += -1;
  Crosshair.AttachedLine.Point1.X = Crosshair.AttachedPolygon.Points->X;
  Crosshair.AttachedLine.Point1.Y = Crosshair.AttachedPolygon.Points->X;
}
  return;
}
// Lost vars at line 1217 through condition folding
void ClosePolygon( void )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  Cardinal n = Crosshair.AttachedPolygon.PointN;
  if ( Crosshair.AttachedPolygon.PointN <= 2 )
  {
    Message( "A polygon has to have at least 3 points\n" );
    return;
  }
  if ( !( ( PCB->Flags.f/*.2_2of4*/ & 1 ) & 255 ) && ( ( Crosshair.AttachedPolygon.Points->X - ( ( dy * 5 ) + -5 + 1 ) ) ^ Crosshair.AttachedPolygon.Points->Y ) != ( ( Crosshair.AttachedPolygon.Points->X - ( ( dy * 5 ) + -5 + 1 ) ) >> Crosshair.AttachedPolygon.Points->Y ) && 31 && ( ( Crosshair.AttachedPolygon.Points->X - ( ( dy * 5 ) + -5 + 1 ) ) >> Crosshair.AttachedPolygon.Points->Y ) )
  {
    Message( "Cannot close polygon because 45 degree lines are requested.\n" );
    return;
  }
  CopyAttachedPolygonToLayer( );
}
void CopyAttachedPolygonToLayer( void )
{
  int eax;
  int edx;
  PolygonTypePtr polygon;
  int saveID;
  ebp = MakeFlags( 0 );
  polygon = CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" );
  *(int*)(CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )) = Crosshair.AttachedPolygon;
  *(int*)CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )/*.4*/ = Crosshair.AttachedPolygon.BoundingBox.Y1;
  *(int*)CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )/*.8*/ = Crosshair.AttachedPolygon.BoundingBox.X2;
  *(int*)CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )/*.12*/ = Crosshair.AttachedPolygon.BoundingBox.Y2;
  *(int*)CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )/*.16*/ = Crosshair.AttachedPolygon.ID;
  *(int*)CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )/*.20*/ = Crosshair.AttachedPolygon.Flags;
  *(int*)CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )/*.24*/ = Crosshair.AttachedPolygon.Flags.t[0];
  *(int*)CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )/*.28*/ = Crosshair.AttachedPolygon.Flags.t[4];
  *(int*)CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )/*.32*/ = Crosshair.AttachedPolygon.net;
  *(int*)CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )/*.36*/ = Crosshair.AttachedPolygon.PointN;
  *(int*)CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )/*.40*/ = Crosshair.AttachedPolygon.PointMax;
  *(int*)CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )/*.44*/ = Crosshair.AttachedPolygon.Clipped->POLYAREA;
  *(int*)CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )/*.48*/ = Crosshair.AttachedPolygon.NoHoles->xmin;
  *(int*)CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )/*.52*/ = Crosshair.AttachedPolygon.NoHolesValid;
  *(int*)CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )/*.20*/ = Crosshair.AttachedPolygon.Flags.f | 16;
  *(int*)CreateNewPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, "badarg" )/*.56*/ = Crosshair.AttachedPolygon.Points->(null);
  if ( ( PCB->Flags.f/*.3_3of4*/ & 16 ) & 255 )
    polygon->Flags.f = Crosshair.AttachedPolygon.Flags.f | 48;
  mymemset( &Crosshair.AttachedPolygon.BoundingBox.X1, 0, 60 );
  SetPolygonBoundingBox( polygon );
  if ( PCB->SilkActive )
  {
    if ( PCB->Data->Layer->polygon_tree == 0 )
      goto B13;
    else
    {
      r_insert_entry( *(int*)(&eax[7].size), (int)( &polygon->BoundingBox ), 0 );
      InitClip( &PCB->ID, PCB->SilkActive == 0 ? *(int*)(PCB + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, polygon );
      DrawPolygon( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB + 8716) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, polygon, 0 );
      SetChangedFlag( 1 );
      Crosshair.AttachedLine.State = 0;
      addedLines = 0;
      AddObjectToCreateUndoList( 8, PCB->SilkActive == 0 ? (void*)PCB : PCB->Data + ( LayerStack[0] * 92 ) + 76, (void*)polygon, (void*)polygon );
      if ( 0 ^ 0 )
      {
        __stack_chk_fail( );
      }
    }
  }
  else
  if ( PCB->Data[5].name_tree[0][17].root == 0 )
    goto B13;
B13:;
}
int PolygonHoles( PolygonType *polygon, BoxType *range, int (*callback)( PLINE *, void * ), void *user_data )
{
  POLYAREA *pa = &polygon->Clipped;
  PLINE *pl;
  return range && ( range->X2 < pl || pl->xmax < range || range->Y2 < pl->ymin || pl->ymax < range->Y1 ) ? 0 : 1;
}
int subtract_plow( DataTypePtr Data, LayerTypePtr Layer, PolygonTypePtr Polygon, int type, void *ptr1, void *ptr2 )
{
  int eax;
  int ecx;
  int edx;
  if ( Polygon->Clipped == 0 )
  {
    return 0;
  }
  switch ( type )
  {
  case 1:
  case 256:
    SubtractPin( Data, &ptr2[0], Layer, Polygon );
    Polygon->NoHolesValid = 0;
    return 1;
    break;
  case 4:
    SubtractLine( &ptr2[0], Polygon );
    Polygon->NoHolesValid = 0;
    return 1;
    break;
  case 16384:
    SubtractArc( &ptr2[0], Polygon );
    Polygon->NoHolesValid = 0;
    return 1;
    break;
  case 512:
    SubtractPad( &ptr2[0], Polygon );
    Polygon->NoHolesValid = 0;
    return 1;
    break;
  case 16:
    SubtractText( &ptr2[0], Polygon );
    break;
  default:
    return 0;
    break;
  }
  Polygon->NoHolesValid = 0;
  return 1;
}
int add_plow( DataTypePtr Data, LayerTypePtr Layer, PolygonTypePtr Polygon, int type, void *ptr1, void *ptr2 )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  switch ( type )
  {
  case 4:
  case 16:
  case 16384:
    if ( BoxPolyBloated( &ptr2[0], 10 ) && Unsubtract( BoxPolyBloated( &ptr2[0], 10 ), Polygon ) )
    {
      clearPoly( &PCB->Data, Layer, Polygon, &ptr2[0], 20 );
    }
    else
    {
    }
    break;
  case 1:
  case 256:
  case 512:
    break;
  default:
    break;
  }
  return 1;
}
int plow_callback( BoxType *b, void *cl )
{
  int edx;
  /* phantom */ struct plow_info *plow;
  /* phantom */ PolygonTypePtr polygon;
  return cl;
}
int PlowsPolygon( DataType *Data, int type, void *ptr1, void *ptr2, int (*call_back)( DataTypePtr , LayerTypePtr , PolygonTypePtr , int , void *, void * ) )
{
  int eax;
  BoxType sb;
  int r;
  struct plow_info info;
  info.ptr2 = ptr2;
  info.ptr1 = ptr1;
  sb.X1 = ((int*)ptr2);
  info.data = Data;
  info.callback = call_back;
  sb.Y1 = ((int*)ptr2);
  sb.X2 = ((int*)ptr2);
  info.type = type;
  sb.Y2 = ((int*)ptr2);
  switch ( type )
  {
  case 1:
  case 256:
    if ( ptr2 != ptr1 && type != 256 && ptr1 )
    {
      r = 0;
      for ( ; entry < Data->pcb->LayerGroups.Number[0];  )
      {
        /* phantom */ LayerTypePtr layer;
        Cardinal number = *(int*)(Data->pcb + ( entry * 4 ) + ( number * 72 ) + 7444);
        if ( *(int*)(Data->pcb + ( entry * 4 ) + ( number * 72 ) + 7444) < PCB->Data->LayerN )
        {
          info.layer = Data + ( *(int*)(Data->pcb + ( entry * 4 ) + ( GetLayerGroupNumberByNumber( GetLayerNumber( Data, &ptr1[0] ) ) * 72 ) + 7444) * 92 ) + 76;
        }
      {
        Cardinal entry;
        entry++;
      }
      }
    }
    else
    {
      Cardinal n;
      return PCB->Data->LayerN;
    }
    break;
  case 4:
  case 16:
  case 16384:
    if ( GetLayerNumber( Data, &ptr1[0] ) < PCB->Data->LayerN )
    {
      r = 0;
      n = ptr1;
      for ( ; entry < Data->pcb->LayerGroups.Number[0];  )
      {
        /* phantom */ LayerTypePtr layer;
        Cardinal number = *(int*)(Data->pcb + ( entry * 4 ) + ( number * 72 ) + 7444);
        if ( *(int*)(Data->pcb + ( entry * 4 ) + ( number * 72 ) + 7444) < PCB->Data->LayerN )
        {
          info.layer = Data + ( *(int*)(Data->pcb + ( entry * 4 ) + ( GetLayerGroupNumberByNumber( GetLayerNumber( Data, &n ) ) * 72 ) + 7444) * 92 ) + 76;
        }
      {
        Cardinal entry;
        entry++;
      }
      }
    }
    else
    {
      Cardinal n;
      Cardinal sn;
      /* phantom */ PadTypePtr pad;
    }
    break;
  case 512:
  {
    Cardinal group;
  {
    Cardinal entry;
    if ( Data->pcb->LayerGroups.Number[0] == 0 )
    {
      Cardinal n;
      Cardinal sn;
      /* phantom */ PadTypePtr pad;
    }
  {
    /* phantom */ LayerTypePtr layer;
    Cardinal number;
    entry = 0;
    do
    {
      number = *(int*)(Data->pcb + ( entry * 4 ) + ( GetLayerGroupNumberByNumber( PCB->Data->LayerN + ( ( ( *(int*)(ptr2 + 20) >> 7 ) ^ 1 ) & 1 ) ) * 18 * 4 ) + 7444);
      if ( *(int*)(Data->pcb + ( entry * 4 ) + ( GetLayerGroupNumberByNumber( PCB->Data->LayerN + ( ( ( *(int*)(ptr2 + 20) >> 7 ) ^ 1 ) & 1 ) ) * 18 * 4 ) + 7444) < PCB->Data->LayerN )
      {
        info.layer = Data + ( *(int*)(Data->pcb + ( entry * 4 ) + ( GetLayerGroupNumberByNumber( PCB->Data->LayerN + ( ( ( *(int*)(ptr2 + 20) >> 7 ) ^ 1 ) & 1 ) ) * 18 * 4 ) + 7444) * 92 ) + 76;
        entry++;
        if ( Data->pcb->LayerGroups.Number[0] <= entry )
        {
        }
      }
      else
      {
        entry++;
      }
    }
    while ( entry + 1 < Data->pcb->LayerGroups.Number[0] );
  }
  }
  }
    break;
  case 2:
  {
    Cardinal n;
    Cardinal sn = ptr1[56];
    /* phantom */ PinTypePtr pin;
    if ( ptr1[56] )
    {
      n = 0;
      n = Data;
      do
      {
        PlowsPolygon( &n, 256, ptr1, ptr1[64] + ( n * 76 ), call_back );
      }
      while ( ptr1[56] == 0 || sn <= ( sn + n + 1 ) - call_back );
      Data = &n;
      call_back = call_back;
    }
    n = 0;
    while ( 1 )
    {
      sn = ptr1[58];
      do
      {
        if ( sn == 0 || sn <= n )
          break;
        PlowsPolygon( Data, 512, ptr1, ptr1[65] + ( n * 104 ), call_back );
        sn = ptr1[58];
      }
      while ( ptr1[58] != ptr1[58] );
      n++;
    }
  }
    break;
  default:
  {
    Cardinal n;
    Cardinal sn;
    /* phantom */ PadTypePtr pad;
  }
    break;
  }
}
void RestoreToPolygon( DataType *Data, int type, void *ptr1, void *ptr2 )
{
  int ecx;
  int edx;
  if ( type == 8 )
  {
    type = ptr1 = ptr2;
    Data = &PCB->Data;
  }
  PlowsPolygon( Data, type, ptr1, ptr2, &add_plow );
  return;
}
void ClearFromPolygon( DataType *Data, int type, void *ptr1, void *ptr2 )
{
  int ecx;
  int edx;
  if ( type == 8 )
  {
    type = ptr1 = ptr2;
    Data = &PCB->Data;
  }
  PlowsPolygon( Data, type, ptr1, ptr2, &subtract_plow );
  return;
}
Boolean isects( POLYAREA *a, PolygonTypePtr p, Boolean fr )
{
  int eax;
  int esi;
  POLYAREA *x;
  /* phantom */ Boolean ans;
  Touching( a, &p->Clipped );
  if ( fr & 255 )
  {
    x = a;
    poly_Free( &x );
  }
  return Touching( a, &p->Clipped );
}
Boolean IsPointInPolygon( LocationType X, LocationType Y, BDimension r, PolygonTypePtr p )
{
  POLYAREA *c;
  Vector v;
  v[0] = X;
  v[1] = Y;
  if ( poly_CheckInside( &p->Clipped, v ) == 0 )
  {
    if ( r > 0 && c )
    {
      isects( c, p, 1 );
    }
  }
  return isects( c, p, 1 );
}
Boolean IsPointInPolygonIgnoreHoles( LocationType X, LocationType Y, PolygonTypePtr p )
{
  Vector v;
  v[0] = X;
  v[1] = Y;
  return poly_InsideContour( &p->Clipped->contours, v );
}
Boolean IsRectangleInPolygon( LocationType X1, LocationType Y1, LocationType X2, LocationType Y2, PolygonTypePtr p )
{
  int ebx;
  int esi;
  int edi;
  POLYAREA *s;
  if ( s )
  {
    Y1 = p;
    X2 = 1;
    X1 = s;
  }
  return s;
}
void r_NoHolesPolygonDicer( POLYAREA *pa, void (*emit)( PLINE *, void * ), void *user_data )
{
  PLINE *p = &p->xmax;
  if ( p->next == 0 )
  {
    pa->contours = 0;
    edx( p, user_data );
    poly_Free( &pa );
    return;
  }
{
  POLYAREA *poly2, *left, *right;
  poly_AndSubtract_free( pa, RectPoly( pa->contours->xmin, ( p->next + p->next ) / 2, p->ymin, p->ymax ), &left, &right );
  if ( left )
  {
    do
    {
      POLYAREA *cur, *next = cur;
      cur->b = cur;
      r_NoHolesPolygonDicer( cur, emit, user_data );
    }
    while ( next == left );
  }
  if ( right )
  {
    do
    {
      POLYAREA *cur, *next = cur;
      cur->b = cur;
      r_NoHolesPolygonDicer( cur, emit, user_data );
    }
    while ( right == next );
  }
  return;
}
}
void NoHolesPolygonDicer( PolygonTypePtr p, BoxType *clip, void (*emit)( PLINE *, void * ), void *user_data )
{
  int eax;
  int ecx;
  int edx;
  POLYAREA *save = poly_Create( ), *ans = poly_Create( ), *cur, *next;
  poly_Copy1( ans, &p->Clipped );
  if ( ( clip == 0 || !cbox || r == 0 ) && save )
  {
    cur = save;
    do
    {
      next = cur;
      cur->b = cur;
      r_NoHolesPolygonDicer( cur, emit, user_data );
    }
    while ( save == next );
  }
  return;
}
Boolean MorphPolygon( LayerTypePtr layer, PolygonTypePtr poly )
{
  POLYAREA *p, *start;
  Boolean many;
  FlagType flags;
  if ( poly->Clipped )
  {
  }
  *(int*)&many = 0;
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return 0;
}
void debug_pline( PLINE *pl )
{
  VNODE *v = &pl->head;
  __fprintf_chk( stderr, 1, "\txmin %d xmax %d ymin %d ymax %d\n", pl->xmin, pl->xmax, pl->ymin, pl->ymax );
  do
  {
    __fprintf_chk( stderr, 1, "\t\tvnode: %d,%d\n", v->point[0], v->point[1] );
  }
  while ( v == v->next || v == 0 );
  return;
}
void debug_polyarea( POLYAREA *p )
{
  PLINE *pl;
  __fprintf_chk( stderr, 1, "POLYAREA %p\n", p );
  pl = &pl->xmax;
  if ( pl->xmax )
  {
    do
    {
      debug_pline( pl );
    }
    while ( pl->next == 0 );
  }
  return;
}
void debug_polygon( PolygonType *p )
{
  int i;
  POLYAREA *pa;
  __fprintf_chk( stderr, 1, "POLYGON %p  %d pts\n", p, p->PointN );
  if ( p->PointN )
  {
    i = 0;
    do
    {
      __fprintf_chk( stderr, 1, "\t%d: %d, %d\n", i, p->Points->X, p->Points->Y );
      i++;
    }
    while ( p->PointN <= i );
  }
  pa = p->Clipped;
  do
  {
    if ( pa == 0 )
      break;
    debug_polyarea( pa );
  }
  while ( p->Clipped != pa );
  return;
}
#if 0
#endif
