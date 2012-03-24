#include "puller.c.h"
static jmp_buf abort_buf;
static int multi;
static int line_exact;
static int arc_exact;
static LineTypePtr the_line;
static ArcTypePtr the_arc;
static double arc_dist;
static int x;
static int y;
static int cx;
static int cy;
static int ex;
static int ey;
static char puller_syntax[9] = { 'P', 'u', 'l', 'l', 'e', 'r', '(', ')' };
static char puller_help[33] = { 'P', 'u', 'l', 'l', ' ', 'a', 'n', ' ', 'a', 'r', 'c', '-', 'l', 'i', 'n', 'e', ' ', 'j', 'u', 'n', 'c', 't', 'i', 'o', 'n', ' ', 't', 'i', 'g', 'h', 't', '.' };
static char globalpuller_syntax[15] = { 'G', 'l', 'o', 'b', 'a', 'l', 'P', 'u', 'l', 'l', 'e', 'r', '(', ')' };
static char globalpuller_help[23] = { 'P', 'u', 'l', 'l', ' ', 'a', 'l', 'l', ' ', 't', 'r', 'a', 'c', 'e', 's', ' ', 't', 'i', 'g', 'h', 't', '.' };
static int nloops;
static int npulled;
static Extra multi_next;
static Extra *lines;
static Extra *arcs;
static int nlines;
static int narcs;
static int max_lines;
static int max_arcs;
static int did_something;
static int current_is_component;
static int current_is_solder;
static Extra *last_pextra;
static ArcTypePtr start_arc;
static LineTypePtr start_line;
static LineTypePtr end_line;
static ArcTypePtr end_arc;
static Extra *start_extra;
static Extra *end_extra;
static Extra *sarc_extra;
static Extra *earc_extra;
static void *start_pinpad;
static void *end_pinpad;
static int thickness;
static double se_sign;
static double sa_sign;
static double ea_sign;
static double best_angle;
static double start_angle;
static double end_dist;
static int sa_r;
static int ea_r;
static int sa_x;
static int sa_y;
static int fx;
static int fy;
static int fr;
static int fp;
static End *fp_end;
static double fa;
HID_Action puller_action_list[2] = { { "Puller", "Click on a line-arc intersection or line segment", &Puller, &puller_help, &puller_syntax }
, { "GlobalPuller", 0, &GlobalPuller, &globalpuller_help, &globalpuller_syntax }
 };
double dist( int x1, int y1, int x2, int y2 )
{
  int eax;
  /* phantom */ double dx;
  /* phantom */ double dy;
  /* phantom */ double dist;
  return 0;
}
int within( int x1, int y1, int x2, int y2, int r )
{
  int ebx;
  return ( ( (double)( r / 2 ) <> dist( x1, y1, x2, y2 ) ) & 1 ) == 0;
}
int arc_endpoint_is( ArcTypePtr a, int angle, int x, int y )
{
  int ecx;
  int ax, ay = a->Y;
  ax = a->X;
  if ( angle == ( ( ( angle + (/*HI*/int)( angle * 0xb60b60b7 ) ) >> 6 ) - ( angle >> 31 ) ) * 90 )
  {
    /* phantom */ int ai;
    switch ( __MOD(( ( ( angle + (/*HI*/int)( angle * 0xb60b60b7 ) ) >> 6 ) - ( angle >> 31 ) ),4) )
    {
    default:
      ax -= a->Width;
      break;
    case 1:
      ay += a->Height;
      break;
    case 2:
      ax += a->Width;
      break;
    case 3:
      ay -= a->Height;
      break;
    }
  }
  else
  {
    ;
  {
    /* phantom */ double rad;
    ax = (int)( (double)( ax ) - ( cos( ( (double)( angle ) * 3.141592653590 ) / 180.000000000000 ) * (double)( a->Width ) ) );
    ay = (int)( (double)( ay ) + ( sin( ( (double)( angle ) * 3.141592653590 ) / 180.000000000000 ) * (double)( a->Width ) ) );
  }
  }
  arc_dist = dist( ax, ay, x, y );
  if ( arc_exact )
  {
    return 2.000000000000 < arc_dist;
  }
  return (double)( a->Thickness / 2 ) < arc_dist;
}
double dist_lp( int x1, int y1, int x2, int y2, int px, int py )
{
  int ebx;
  int esi;
  int edi;
  double den;
  /* phantom */ double rv;
  return 0;
}
double dist_lsp( int x1, int y1, int x2, int y2, int px, int py )
{
  int eax;
  int edx;
  double fp7;
  double d;
  if ( 0.000000000000 <= ( (double)( x2 - x1 ) * (double)( x2 - x1 ) ) * 0.000000000000 )
  {
    if ( ( (double)( x1 - x2 ) * (double)( x1 - x2 ) ) * 0.000000000000 < 0.000000000000 )
    {
      y2 = py;
    }
    return 0;
  }
  else
  {
    y2 = py;
  }
}
int line_callback( BoxType *b, void *cl )
{
  int eax;
  int ecx;
  int edx;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ LineTypePtr l;
  double d1, d2, t;
  dist( b[4].X1, b[4].Y1, x, y );
  if ( 2.000000000000 <= dist( b[2].Y2, b[3].X1, x, y ) )
  {
    if ( 0.000000000000 <= dist( b[4].X1, b[4].Y1, x, y ) )
    {
      if ( line_exact )
      {
        if ( 0.000000000000 < 2.000000000000 )
        {
          if ( the_line )
          {
            multi = 1;
          }
          the_line = &b[0].X1;
          return 1;
        }
        else
        {
          if ( 2.000000000000 <= dist( b[4].X1, b[4].Y1, x, y ) )
          {
            return 1;
          }
        }
      }
      else
      if ( 0.000000000000 < (double)( b[2].Y1 / 2 ) )
      {
      }
      else
      {
      }
    }
  }
  else
    t = 0.000000000000;
  if ( line_exact == 0 )
  {
    line_exact = 1;
    the_line = 0;
  }
}
int arc_callback( BoxType *b, void *cl )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  /* phantom */ ArcTypePtr a;
  if ( arc_endpoint_is( &b->X1, b[3].Y2, x, y ) == 0 && arc_endpoint_is( &b[0].X1, b[4].X1 + b[3].Y2, x, y ) == 0 )
  {
    return 1;
  }
  if ( arc_dist < 2.000000000000 )
  {
    if ( arc_exact == 0 )
      arc_exact = 1;
      the_arc = &b[0].X1;
      return 1;
  }
  else
  if ( arc_exact == 0 )
    goto B7;
  else
  {
    return 1;
  }
B7:;
  if ( the_arc )
    multi = 1;
}
int find_pair( int Px, int Py )
{
  BoxType spot;
  x = Px;
  y = Py;
  multi = 0;
  arc_exact = 0;
  line_exact = 0;
  the_line = 0;
  the_arc = 0;
  spot.X1 = Px + -1;
  spot.Y1 = Py + -1;
  spot.X2 = Px + 1;
  spot.Y2 = Py + 1;
  r_search( *(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 52), &spot, 0, &line_callback, PCB->SilkActive == 0 ? *(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + ( LayerStack[0] * 92 ) + 76 : *(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(*(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + 24) ) * 92 ) + 76 );
  r_search( *(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 64), &spot, 0, &arc_callback, PCB->SilkActive == 0 ? *(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + ( LayerStack[0] * 92 ) + 76 : *(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(*(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 8716) + 24) ) * 92 ) + 76 );
  if ( the_line == 0 || the_arc == 0 || multi )
  {
    x = Px;
    y = Py;
  }
  return 0;
}
int Puller( int argc, char **argv, int Ux, int Uy )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  double fp7;
  double arc_angle, line_angle, rel_angle, base_angle;
  double tangent;
  int new_delta_angle;
  if ( find_pair( Crosshair.X, Crosshair.Y ) || find_pair( Ux, Uy ) )
  {
    if ( within( the_line->Point1.X, the_line->Point1.Y, x, y, the_line->Thickness ) )
    {
      ex = the_line->Point2.X;
      ey = the_line->Point2.Y;
      the_line->Point1.X = the_line->Point2.X = the_line->Point1.X;
      the_line->Point2.Y = the_line->Point1.Y = the_line->Point2.Y;
    }
    else
    {
      if ( within( the_line->Point2.X, the_line->Point2.Y, x, y, the_line->Thickness ) == 0 )
      {
      }
    }
    ey = the_line->Point2.Y;
    ex = the_line->Point2.X;
    cx = the_arc->X;
    cy = the_arc->Y;
    if ( arc_endpoint_is( the_arc, the_arc->StartAngle, x, y ) )
    {
      ChangeArcAngles( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, the_arc, the_arc->Delta + the_arc->StartAngle, 0 - the_arc->Delta );
    }
    else
    {
      if ( arc_endpoint_is( the_arc, the_arc->Delta + the_arc->StartAngle, x, y ) == 0 )
      {
      }
    }
    if ( within( cx, cy, ex, ey, the_arc->Width * 2 ) == 0 )
    {
      atan2( (double)( ey - y ), (double)( x - ex ) );
      *(double*)(acos( (double)( the_arc->Width ) / dist( cx, cy, ex, ey ) )) = ( 180.000000000000 * acos( (double)( the_arc->Width ) / dist( cx, cy, ex, ey ) ) ) / 3.141592653590;
      new_delta_angle = (int)( ( ( atan2( (double)( ey - cy ), (double)( cx - ex ) ) * 180.000000000000 ) / 3.141592653590 ) - ( ( 180.000000000000 * acos( (double)( the_arc->Width ) / dist( cx, cy, ex, ey ) ) ) / 3.141592653590 ) - (double)( *(int*)(the_arc + 60) ) );
      ChangeArcAngles( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB + 8716) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, the_arc, the_arc->StartAngle, new_delta_angle );
      ;
      x = (int)( (double)( *(int*)(the_arc + 52) ) + 0.500000000000 );
      y = (int)( (double)( *(int*)(the_arc + 56) ) + ( sin( ( (double)( the_arc->Delta + the_arc->StartAngle ) * 3.141592653590 ) / 180.000000000000 ) * (double)( *(int*)(the_arc + 48) ) ) + 0.500000000000 );
      MoveObject( 4096, PCB->SilkActive ? *(int*)(PCB + 8716) + ( ( ( ( Settings.ShowSolderSide == 0 ) & 255 ) + *(int*)(*(int*)(PCB + 8716) + 24) ) * 92 ) + 76 : PCB->Data + ( LayerStack[0] * 92 ) + 76, (void*)the_line, the_line + 64, (int)( (double)( *(int*)(the_arc + 52) ) + 0.500000000000 ) - the_line->Point2.X, (int)( (double)( *(int*)(the_arc + 56) ) + ( sin( ( (double)( the_arc->Delta + the_arc->StartAngle ) * 3.141592653590 ) / 180.000000000000 ) * (double)( *(int*)(the_arc + 48) ) ) + 0.500000000000 ) - the_line->Point2.Y );
      gui->invalidate_all( );
      IncrementUndoSerialNumber( );
      return 1;
    }
  }
  return 1;
}
puller.c:694:0x80B7BF3: sincos:  literal arg 1:  eax:{ }
puller.c:694:0x80B7BF3: sincos:  literal arg 2:  edx:{ }
void fix_arc_extra( ArcTypePtr a, Extra *e )
{
  double (null);
  ;
  e->start.x = (int)( (double)( a->X ) - ( ( (double)( a->Width ) * ebp_40 ) + 0.500000000000 ) );
  e->start.y = (int)( 0.500000000000 + (double)( a->Y ) );
  ;
  e->end.x = (int)( sin( 0.000000000000 / (double)( a->Y ) ) - ( 0.500000000000 + ( (double)( a->Width ) * ebp_40 ) ) );
  e->end.y = (int)( (double)( a->Y ) + 0.500000000000 + ( 0.000000000000 * ebp_32 ) );
  return;
}
(e>>3) * 0xd1745d1c...
(e>>3) * 0xd1745d1c...
int find_pair_line_callback( BoxType *b, void *cl )
{
  int ecx;
  int ebx;
  /* phantom */ LineTypePtr line;
  /* phantom */ FindPairCallbackStruct *fpcs;
  if ( ((int*)cl) != b && ( ( b[2].Y2 <= cl[1] + 2 && cl[1] + -2 <= b[2].Y2 && b[3].X1 <= cl[2] + 2 && cl[2] + -2 <= b[3].X1 ) || ( b[4].X1 <= cl[1] + 2 && cl[1] + -2 <= b[4].X1 && b[4].Y1 <= cl[2] + 2 && cl[2] + -2 <= b[4].Y1 ) ) )
  {
    if ( *(int*)(cl[4]) )
    {
      *(int*)(cl[4]) = multi_next;
    }
    else
    {
(e>>3) * 0xd1745d1c...
      *(int*)(cl[4]) = lines + ( b - *(int*)(( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 36) );
    }
  }
  return 0;
}
(e>>2) * 0xf0f0f0f4...
int find_pair_arc_callback( BoxType *b, void *cl )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  /* phantom */ ArcTypePtr arc;
  Extra *e;
  /* phantom */ FindPairCallbackStruct *fpcs;
  if ( cl != b )
  {
(e>>2) * 0xf0f0f0f4...
    e = arcs + ( b - e );
    if ( e->start.x <= cl[1] + 2 && cl[1] + -2 <= e->start.x )
    {
      if ( cl[2] + 2 < e->start.y )
      {
      }
      else
      if ( e->start.y < cl[2] + -2 )
        goto B7;
      else
      {
        ((int*)cl) = *(int*)(*(int*)(cl + 16)) == 0 ? multi_next.start.next : e;
      }
    }
B7:;
    if ( e->end.x <= cl[1] + 2 && cl[1] + -2 <= e->end.x && e->end.y <= cl[2] + 2 && cl[2] + -2 <= e->end.y )
    {
      ((int*)cl) = *(int*)(*(int*)(cl + 16)) == 0 ? multi_next.start.next : e;
    }
  }
  return 0;
}
void find_pairs_1( void *me, Extra **e, int x, int y )
{
  int eax;
  int esi;
  FindPairCallbackStruct fpcs;
  BoxType b;
  if ( e[0] == 0 )
  {
    b.X1 = x + -10;
    b.X2 = x + 10;
    fpcs.me = me;
    fpcs.extra_ptr = e;
    fpcs.x = x;
    b.Y1 = y + -10;
    fpcs.y = y;
    b.Y2 = y + 10;
    r_search( &PCB->Data->Layer->line_tree, &b, 0, &find_pair_line_callback, fpcs.me );
    r_search( *(int*)(( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB + 8716) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 64), &b, 0, &find_pair_arc_callback, fpcs.me );
  }
  return;
}
int check_point_in_pin( PinTypePtr pin, int x, int y, End *e )
{
  int eax;
  int ecx;
  int edx;
  int esi;
  int edi;
  double fp7;
  /* phantom */ int inside_p;
  /* phantom */ int t;
  if ( ( pin->Flags.f/*.2_2of4*/ & 1 ) & 255 )
  {
    if ( pin->X - ( ( pin->Thickness + 1 ) / 2 ) <= x && x <= ( ( pin->Thickness + 1 ) / 2 ) + pin && pin->Y - ( ( pin->Thickness + 1 ) / 2 ) <= ebp_20 && ebp_20 <= ( ( pin->Thickness + 1 ) / 2 ) + x )
      goto B8;
    else
    {
      return 1;
    }
  }
  else
  {
    if ( fp7 < (double)( esi ) )
    {
      return 1;
    }
  }
B8:;
  e->bits_at_8 = e->bits_at_8 | 1;
  if ( x == pin->X && y == pin->Y )
    e->bits_at_8 = e->bits_at_8 | 3;
  e->pin = pin;
  return 1;
}
(e>>3) * 0xd1745d1c...
(e>>3) * 0xd1745d1c...
int find_pair_pinline_callback( BoxType *b, void *cl )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  /* phantom */ LineTypePtr line;
  /* phantom */ PinTypePtr pin;
  Extra *e;
  int hits = check_point_in_pin( &cl[0], b[2].Y2, b[3].X1, e + ( b - *(int*)(( *(char*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 39) == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 36) ) );
  if ( hits + check_point_in_pin( &cl[0], b[4].X1, b[4].Y1, &e->end.next ) == 0 )
  {
    hits = b[2].Y2;
    if ( (double)( cl[9] / 2 ) <= dist_lsp( hits, b[3].X1, b[4].X1, b[4].Y1, cl[13], cl[14] ) )
    {
      if ( e == 0 )
        goto B11;
      else
      {
        if ( e->start.next == e )
          &e->end.next = &multi_next;
        if ( e == e->end.next )
          e->end = multi_next;
      }
B11:;
      e = &multi_next;
      if ( e->end.next )
      {
        if ( e->end.next == e )
          &e->end.next = &multi_next;
        if ( e == e->end.next )
        {
          &e->end.next = &multi_next;
        }
      }
      e->end.next = &multi_next;
      return 0;
    }
  }
  return 0;
}
(e>>2) * 0xf0f0f0f4...
(e>>2) * 0xf0f0f0f4...
int find_pair_pinarc_callback( BoxType *b, void *cl )
{
  int eax;
  int ecx;
  int edx;
(e>>2) * 0xf0f0f0f4...
  /* phantom */ ArcTypePtr arc;
  /* phantom */ PinTypePtr pin;
  Extra *e;
  /* phantom */ int hits;
  e += ( b - *(int*)(( *(char*)(PCB + 39) == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB + 8716) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 48) ) / 52;
  check_point_in_pin( &cl[0], e->start.x, e->start.y, e + ( b - PCB->Data->Layer->Arc ) );
  check_point_in_pin( &cl[0], arcs[3].data, arcs[3].next, arcs + 24 );
  return 0;
}
int check_point_in_pad( PadTypePtr pad, int x, int y, End *e )
{
  int ecx;
  double fp7;
  int inside_p;
  /* phantom */ int t;
  __printf_chk( 1, "pad %d,%d - %d,%d t %d  vs  %d,%d\n", pad->Point1.X, pad->Point1.Y, pad->Point2.X, pad->Point2.Y, pad->Thickness, x, y );
  if ( ( pad->Flags.f/*.2_2of4*/ & 1 ) & 255 )
  {
    if ( x < ( pad->Point2.X - ( ( pad->Thickness + 1 ) / 2 ) < pad->Point1.X - ( ( pad->Thickness + 1 ) / 2 ) ? pad->Point1.X - ( ( pad->Thickness + 1 ) / 2 ) : pad->Point2.X - ( ( pad->Thickness + 1 ) / 2 ) ) || ( ( ( pad->Thickness + 1 ) / 2 ) + pad->Point1.X < pad->Point2.X + ( ( pad->Thickness + 1 ) / 2 ) ? ( ( pad->Thickness + 1 ) / 2 ) + pad->Point1.X : pad->Point2.X + ( ( pad->Thickness + 1 ) / 2 ) ) < x || y < ( pad->Point2.Y - ( ( pad->Thickness + 1 ) / 2 ) < pad->Point1.Y - ( ( pad->Thickness + 1 ) / 2 ) ? pad->Point1.Y - ( ( pad->Thickness + 1 ) / 2 ) : pad->Point2.Y - ( ( pad->Thickness + 1 ) / 2 ) ) )
    {
      __printf_chk( 1, " - inside_p = %d\n", 0 );
      return 0;
    }
    inside_p = y <= ( inside_p + pad->Point1.Y < pad->Point2.Y + inside_p ? inside_p + pad->Point1.Y : pad->Point2.Y + inside_p );
    __printf_chk( 1, " - inside_p = %d\n", y <= ( inside_p + pad->Point1.Y < pad->Point2.Y + inside_p ? inside_p + pad->Point1.Y : pad->Point2.Y + inside_p ) );
    if ( inside_p == 0 )
    {
      return 0;
    }
    e->bits_at_8 = e->bits_at_8 | 1;
    if ( pad->Point1.X == x && y == pad->Point1.Y )
      e->bits_at_8 = e->bits_at_8 | 3;
    if ( pad->Point2.X == x && y == pad->Point2.Y )
    {
      e->bits_at_8 = e->bits_at_8 | 1 | 2;
    }
    e->bits_at_8 = e->bits_at_8 | 1 | 2 | 4;
    e->pin = pad;
    return 1;
  }
  else
  {
    if ( pad->Point2.X == pad->Point1.X )
    {
      if ( pad->Point1.X - ( ( pad->Thickness + 1 ) / 2 ) <= x && x <= pad->Point1.X + ( ( pad->Thickness + 1 ) / 2 ) )
      {
        if ( y < ( pad->Point1.Y <= pad->Point2.Y ? pad->Point2.Y : pad->Point1.Y ) || ( (unsigned char)( ( pad->Point1.Y < pad->Point2.Y ) ^ 1 ) ? pad->Point2.Y : pad->Point1.Y ) < y )
        {
          if ( (double)( ( pad->Thickness + 1 ) / 2 ) <= dist( pad->Point1.X, pad->Point1.Y, x, y ) )
          {
          }
          else
          {
            if ( dist( pad->Point2.X, pad->Point2.Y, x, y ) < (double)( ( pad->Thickness + 1 ) / 2 ) )
            {
              return 0;
            }
          }
        }
      }
    }
    else
    if ( ( pad->Point2.X <= pad->Point1.X ? pad->Point1.X : pad->Point2.X ) <= x && x <= ( pad->Point2.X < pad->Point1.X ? pad->Point2.X : pad->Point1.X ) )
    {
      if ( y < pad->Point1.Y - ( ( pad->Thickness + 1 ) / 2 ) || pad->Point1.Y + ( ( pad->Thickness + 1 ) / 2 ) < y )
        continue;
    }
  }
  return 0;
}
(e>>3) * 0xd1745d1c...
int find_pair_padline_callback( BoxType *b, void *cl )
{
  int eax;
  int ecx;
  int edx;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ LineTypePtr line;
  /* phantom */ PadTypePtr pad;
  Extra *e;
  int hits;
  double t;
  /* phantom */ int intersect;
  double p1_d, p2_d;
  if ( cl[5] < 0 )
  {
    if ( current_is_solder == 0 )
    {
      return 0;
    }
  }
  else
  if ( current_is_component == 0 )
  {
    return 0;
  }
(e>>3) * 0xd1745d1c...
  e = lines + ( b - *(int*)(( *(char*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 39) == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 36) );
  hits = eax;
  if ( hits + check_point_in_pad( &cl[0], b[4].X1, b[4].Y1, &e->end.next ) == 0 )
  {
    hits = cl[12];
    t = ( (double)( b[3].X1 - b[4].Y1 ) * (double)( b[3].X1 - b[4].Y1 ) ) - ( (double)( hits - cl[17] ) * (double)( b[2].Y2 - b[4].X1 ) );
    if ( ( ( (double)( b[3].X1 - b[4].Y1 ) * (double)( b[3].X1 - b[4].Y1 ) ) - ( (double)( hits - cl[17] ) * (double)( b[2].Y2 - b[4].X1 ) ) ) || ( ( (double)( b[3].X1 - b[4].Y1 ) * (double)( b[3].X1 - b[4].Y1 ) ) - ( (double)( hits - cl[17] ) * (double)( b[2].Y2 - b[4].X1 ) ) ) )
    {
      p1_d = ( (double)( cl[17] ) * (double)( cl[11] ) ) - ( (double)( cl[16] ) * (double)( hits ) );
      if ( (double)( cl[11] <= cl[16] ? cl[16] : cl[11] ) <= ( ( (double)( b[2].Y2 - b[4].X1 ) * ( ( (double)( cl[17] ) * (double)( cl[11] ) ) - ( (double)( cl[16] ) * (double)( hits ) ) ) ) - ( p1_d * ( ( (double)( b[4].Y1 ) * (double)( b[2].Y2 ) ) - ( (double)( b[4].X1 ) * (double)( b[3].X1 ) ) ) ) ) / t )
      {
        if ( p2_d <= (double)( (unsigned char)( ( cl[11] < cl[16] ) ^ 1 ) ? cl[16] : cl[11] ) )
        {
          if ( (double)( hits <= cl[17] ? cl[17] : hits ) <= ( ( p1_d * (double)( b[3].X1 - b[4].Y1 ) ) - ( (double)( hits - cl[17] ) * ( ( (double)( b[4].Y1 ) * (double)( b[2].Y2 ) ) - ( (double)( b[4].X1 ) * (double)( b[3].X1 ) ) ) ) ) / t )
          {
            if ( ( ( p1_d * (double)( b[3].X1 - b[4].Y1 ) ) - ( (double)( hits - cl[17] ) * ( ( (double)( b[4].Y1 ) * (double)( b[2].Y2 ) ) - ( (double)( b[4].X1 ) * (double)( b[3].X1 ) ) ) ) ) / t <= (double)( (unsigned char)( ( hits < cl[17] ) ^ 1 ) ? cl[17] : hits ) )
            {
              if ( (double)( b[2].Y2 <= b[4].X1 ? b[4].X1 : b[2].Y2 ) <= p2_d )
              {
                if ( p2_d <= (double)( (unsigned char)( ( b[2].Y2 < b[4].X1 ) ^ 1 ) ? b[4].X1 : b[2].Y2 ) )
                {
                  if ( (double)( b[3].X1 <= b[4].Y1 ? b[4].Y1 : b[3].X1 ) <= ( ( p1_d * p2_d ) - ( (double)( hits - cl[17] ) * ( ( (double)( b[4].Y1 ) * (double)( b[2].Y2 ) ) - ( (double)( b[4].X1 ) * (double)( b[3].X1 ) ) ) ) ) / t )
                  {
                    if ( ( ( p1_d * p2_d ) - ( (double)( hits - cl[17] ) * ( ( (double)( b[4].Y1 ) * (double)( b[2].Y2 ) ) - ( (double)( b[4].X1 ) * (double)( b[3].X1 ) ) ) ) ) / t <= (double)( (unsigned char)( ( b[3].X1 < b[4].Y1 ) ^ 1 ) ? b[4].Y1 : b[3].X1 ) )
                    {
                      hits = b[2].Y2;
                      if ( e == 0 )
                        goto B36;
                      else
                      {
                        if ( e->start.next == e )
                          e->start.next = multi_next;
                        if ( e == e->end.next )
                          &e->end.next = &multi_next;
                      }
B36:;
                      e = &multi_next;
                      if ( e->end.next )
                      {
                        if ( e->end.next == e )
                          &e->end.next = &multi_next;
                        if ( e == e->end.next )
                        {
                          &e->end.next = &multi_next;
                        }
                      }
                      e->end.next = &multi_next;
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
    hits = b[2].Y2;
    dist_lsp( hits, b[3].X1, b[4].X1, b[4].Y1, ((int*)cl), cl[17] );
    if ( dist_lsp( b[2].Y2, b[3].X1, b[4].X1, b[4].Y1, cl[11], hits ) < (double)( ( cl[9] + 1 ) / 2 ) )
    {
    }
    else
    {
      if ( (double)( ( cl[9] + 1 ) / 2 ) <= dist_lsp( hits, b[3].X1, b[4].X1, b[4].Y1, ((int*)cl), cl[17] ) )
      {
        return 0;
      }
    }
  }
  else
  {
    return 0;
  }
}
(e>>2) * 0xf0f0f0f4...
int find_pair_padarc_callback( BoxType *b, void *cl )
{
  int eax;
  int ecx;
  int edx;
  /* phantom */ ArcTypePtr arc;
  /* phantom */ PadTypePtr pad;
  Extra *e;
  /* phantom */ int hits;
  if ( cl[5] < 0 )
  {
    if ( current_is_solder == 0 )
    {
      return 0;
    }
  }
  else
  if ( current_is_component == 0 )
  {
    return 0;
  }
(e>>2) * 0xf0f0f0f4...
  e = arcs + ( b - *(int*)(( *(char*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 39) == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 48) );
  check_point_in_pad( &cl[0], e->start.x, e->start.y, arcs + ( b - *(int*)(( *(char*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 39) == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 48) ) );
  check_point_in_pad( &cl[0], e->end.x, e->end.y, e->start.next + 24 );
  return 0;
}
void print_extra( Extra *e, Extra *prev )
{
  int ecx;
  int edx;
  /* phantom */ int which;
  if ( last_pextra != e )
  {
    if ( e->end.next != last_pextra )
      __printf_chk( 1, "%10p %10p %10p :", e, e, e->end.next );
    else
      __printf_chk( 1, "%10p %10p \033[33m%10p\033[0m :", e, e, last_pextra );
  }
  else
    __printf_chk( 1, "%10p \033[33m%10p\033[0m %10p :", e, e, e->end.next );
  last_pextra = e;
  __printf_chk( 1, " %c%c", ( ( 0 - ( ( ( e->bits_at_48 & 2 ) < ( 1 & 255 ) ) & 1 ) ) & -55 ) + 100, ( ( 0 - ( ( ( e->bits_at_48 & 1 ) < ( 1 & 255 ) ) & 1 ) ) & -57 ) + 102 );
  __printf_chk( 1, " s:%s%s%s%s", ( ( e->start.bits_at_8 & 1 ) & 255 ) == 0 ? "I" : "-", ( ( e->start.bits_at_8 & 2 ) & 255 ) == 0 ? "A" : "-", ( ( e->start.bits_at_8 & 4 ) & 255 ) != 0 ? "-" : "P", ( ( e->start.bits_at_8 & 8 ) & 255 ) != 0 ? "-" : "p" );
  __printf_chk( 1, " e:%s%s%s%s ", ( ( e->end.bits_at_8 & 1 ) & 255 ) != 0 ? "-" : "I", ( ( e->end.bits_at_8 & 2 ) & 255 ) == 0 ? "A" : "-", ( ( e->end.bits_at_8 & 4 ) & 255 ) == 0 ? "P" : "-", ( ( e->end.bits_at_8 & 8 ) & 255 ) == 0 ? "p" : "-" );
  if ( ( ( e - lines ) >> 2 ) * 0xc4ec4ec5 < nlines )
  {
    LineTypePtr line;
    __printf_chk( 1, " %4d L %d,%d-%d,%d", ( ( ( PCB->Data->ViaN + ( ( ( e - lines ) >> 2 ) * 0xb13b13b8 ) ) - PCB->Data->ViaN ) >> 3 ) * 0xba2e8ba3, PCB->Data->(null), PCB->Data->(null), PCB->Data->(null), PCB->Data->(null) );
    __printf_chk( 1, "  %s %p %s %p\n", ( ( e->start.bits_at_8 & 4 ) & 255 ) != 0 ? "pin" : "pad", e->start.pin, ( ( e->end.bits_at_8 & 4 ) & 255 ) != 0 ? "pin" : "pad", e->end.pin );
    return;
  }
  else
  {
    if ( ( ( e - arcs ) >> 2 ) * 0xc4ec4ec5 < narcs )
    {
      ArcTypePtr arc = *(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB + 8716) : ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + ( PCB->SilkActive == 0 ? LayerStack[0] * 92 : PCB->Data ) + 124) + ( ( ( e - arcs ) >> 2 ) * 0xc4ec4ec5 * 68 );
      __printf_chk( 1, " %4d A %d,%d-%d,%d", ( ( ( PCB->Data->Layer->Arc + ( ( ( e - arcs ) >> 2 ) * 0xc4ec4ec5 * 68 ) ) - PCB->Data->Layer->Arc ) >> 2 ) * 0xf0f0f0f1, e->start.x, e->start.y, e->end.x, e->end.y );
      __printf_chk( 1, " at %d,%d ang %ld,%ld\n", arc->X, arc->Y, arc->StartAngle, arc->Delta );
      return;
    }
    else
    {
      if ( multi_next.start.next != e )
      {
        __printf_chk( 1, "-- Unknown extra: %p\n", e );
      }
      else
      {
        __printf_chk( 1, "-- Multi-next\n" );
      }
      return;
    }
  }
}
(e>>3) * 0xd1745d1c...
(e>>3) * 0xd1745d1c...
(e>>3) * 0xd1745d1c...
void reverse_line( LineTypePtr line )
{
  int edx;
  Extra *e;
  int x, y;
  End etmp;
  if ( PCB->SilkActive )
(e>>3) * 0xd1745d1c...
  {
(e>>3) * 0xd1745d1c...
    y = line->Point1.Y;
    e = lines + ( line - PCB->Data->Layer->Line );
    PCB->ID = PCB->Data + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(*(int*)(PCB + 8716) + 24) ) * 92 ) + 76;
    x = line->Point1.X;
  }
  else
(e>>3) * 0xd1745d1c...
  {
(e>>3) * 0xd1745d1c...
    y = line->Point1.Y;
    e = lines + ( line - PCB->Data->Layer->Line );
    x = line->Point1.X;
    PCB->ID = PCB->Data + ( LayerStack[0] * 92 ) + 76;
  }
  MoveObject( 4096, PCB->Data + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(*(int*)(PCB + 8716) + 24) ) * 92 ) + 76, (void*)line, line + 44, ebp_80 - x, ebp_124 - y );
  MoveObject( 4096, PCB->Data + ( LayerStack[0] * 92 ) + 76, (void*)line, line + 64, x - line->Point2.X, edi - line->Point2.Y );
  x = e->start.y;
  etmp.x = e->start.x;
  etmp.next = e;
  etmp.pin = e->start.pin;
  etmp.waiting_for = e->start.waiting_for;
  etmp.bits_at_8 = e->start.bits_at_8;
  etmp.y = x;
  e = e->end.next;
  e->start.pin = e->end.pin;
  e->start.bits_at_8 = e->end.bits_at_8;
  e->start.x = e->end.x;
  e->start.y = e->end.y;
  e->start.waiting_for = e->end.waiting_for;
  e->end.next = etmp.next;
  e->end.pin = etmp.pin;
  e->end.bits_at_8 = etmp.bits_at_8;
  e->end.x = etmp.x;
  e->end.y = etmp.y;
  e->end.waiting_for = etmp.waiting_for;
  return;
}
(e>>2) * 0xf0f0f0f4...
(e>>2) * 0xf0f0f0f4...
void reverse_arc( ArcTypePtr arc )
{
  int ecx;
(e>>2) * 0xf0f0f0f4...
  Extra *e = arcs + ( arc - *(int*)(( PCB->SilkActive == 0 ? *(int*)(PCB + 8716) : ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + e + 124) );
  End etmp;
  ChangeArcAngles( e + ( PCB->SilkActive == 0 ? *(int*)(PCB + 8716) : ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, arc, arc->Delta + arc->StartAngle, 0 - arc->Delta );
  etmp.next = e;
  etmp.pin = e->start.pin;
  etmp.bits_at_8 = e->start.bits_at_8;
  etmp.waiting_for = e->start.waiting_for;
  etmp.y = e->start.y;
  etmp.x = e->start.x;
  e = e->end.next;
  e->start.pin = e->end.pin;
  e->start.bits_at_8 = e->end.bits_at_8;
  e->start.x = e->end.x;
  e->start.y = e->end.y;
  e->start.waiting_for = e->end.waiting_for;
  e->end.next = etmp.next;
  e->end.pin = etmp.pin;
  e->end.bits_at_8 = etmp.bits_at_8;
  e->end.x = etmp.x;
  e->end.y = etmp.y;
  e->end.waiting_for = etmp.waiting_for;
  return;
}
int gp_point_force( int x, int y, int t, End *e, int esa, int eda, int force, char *name )
{
  int ecx;
  double fp0;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  int ebp_32;
  double r, a, d;
  int scx, scy, sr;
  double base_angle, rel_angle, point_angle;
  if ( start_arc )
  {
    sr = start_arc->Width;
    scx = start_arc->X;
    scy = start_arc->Y;
  }
  else
  {
    sr = 0;
    scx = start_line->Point1.X;
    scy = start_line->Point1.Y;
  }
  ebp_32 = t + thickness;
  r = (double)( ebp_32 );
  if ( (double)( sr ) - r <= dist( scx, scy, x, y ) )
  {
    if ( sr || r <= dist( scx, scy, x, y ) )
    {
      ebp_32 = x - scx;
      ebp_32 = y - scy;
      atan2( (double)( y - scy ), (double)( x - scx ) );
      base_angle = ( ( base_angle * sa_sign ) - r ) / base_angle;
      if ( 1.000000000000 < ( ( base_angle * sa_sign ) - r ) / base_angle )
      {
      }
      else
      if ( base_angle < -1.000000000000 )
      {
      }
      else
      {
        *(double*)(asin( base_angle )) = atan2( (double)( y - scy ), (double)( x - scx ) ) + ( se_sign * asin( base_angle ) );
        if ( eda )
        {
          double pa;
          double sa;
          double da;
          ebp_32 = 180 - esa;
          ebp_32 = 0 - eda;
          sa = ( (double)( ebp_32 ) * 3.141592653590 ) / 180.000000000000;
          if ( sa < atan2( (double)( y - scy ), (double)( x - scx ) ) + ( se_sign * asin( base_angle ) ) + ( base_angle * 3.141592653590 * -0.500000000000 ) )
          {
            point_angle = 0.000000000000;
            for ( ; sa + sa + 6.283185307180 < sa + 6.283185307180;  )
            {
              point_angle = sa;
            }
            point_angle = base_angle;
            base_angle = sa;
          }
          else
            sa = 0.000000000000;
          if ( sa < sa )
          {
            point_angle = sa;
            while ( point_angle = point_angle - point_angle, point_angle = point_angle, sa < point_angle - point_angle )
            {
            }
            base_angle = ( point_angle - point_angle ) + a;
          }
          else
            base_angle = point_angle;
          if ( sa < a )
          {
          }
        }
        point_angle = point_angle - start_angle;
        if ( 3.141592653590 < point_angle - start_angle )
        {
          do
          {
          }
          while ( 3.141592653590 < ( ( point_angle - start_angle ) + 0xabbbd2e8 ) - 6.283185307180 );
        }
        if ( fp7 < -3.141592653590 )
        {
          do
          {
          }
          while ( fp7 + fp5 < -3.141592653590 );
        }
        if ( force )
          a = 0.000000000000;
        else
        if ( fp7 * base_angle < -0.007000000000 )
        {
        {
          /* phantom */ double new_r;
          scx/*.1_1of4*/ = '';
          ebp_32 = (int)( dist_lp( start_line->Point1.X, start_line->Point1.Y, start_line->Point2.X, start_line->Point2.Y, x, y ) - (double)( thickness ) );
          ebp_32 += -1;
          if ( (double)( ebp_32 ) < (double)( t ) )
          {
            ebp_32 = (int)( (double)( ebp_32 ) );
            gp_point_force( x, y, ebp_32, e, esa, eda, 1, __FUNCTION__ );
            return 0;
          }
        }
        }
        else
        {
        }
        if ( base_angle != base_angle * best_angle )
        {
        }
        else
        if ( !0 )
        {
        {
          double old_d;
          double new_d;
          if ( dist( start_line->Point1.X, start_line->Point1.Y, x, y ) <= dist( start_line->Point1.X, start_line->Point1.Y, fx, fy ) )
          {
            return 0;
          }
          else
          {
            best_angle = atan2( (double)( y - scy ), (double)( x - scx ) );
            fx = x;
            fy = y;
            scx/*.1_1of4*/ = '';
            fr = (int)( r );
            fa = r;
            fp = e ? ( e->bits_at_8 >> 3 ) & 1 : 0;
            fp_end = e;
            return 0;
          }
        }
        }
        else
        {
        }
        if ( base_angle < base_angle )
        {
          best_angle = atan2( (double)( y - scy ), (double)( x - scx ) );
          fx = x;
          fy = y;
          scx/*.1_1of4*/ = '';
          fr = (int)( r );
          fa = r;
          fp = e ? ( e->bits_at_8 >> 3 ) & 1 : 0;
          fp_end = e;
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
  else
  {
  }
  return 0;
}
int gp_point_2( int x, int y, int t, End *e, int esa, int eda, char *func )
{
  int ecx;
  double fp6;
  double fp7;
  /* phantom */ double sc, ec;
  double sd, ed;
  if ( sa_y != y )
  {
    if ( t >= 0 )
    {
      if ( se_sign * ( ( (double)( end_line->Point2.X - start_line->Point1.X ) * (double)( end_line->Point2.X - start_line->Point1.X ) ) - ( (double)( end_line->Point2.Y - start_line->Point1.Y ) * (double)( end_line->Point2.Y - start_line->Point1.Y ) ) ) <= 0.000000000000 )
      {
        if ( 0.000000000000 <= ( (double)( end_line->Point2.X - start_line->Point1.X ) * (double)( x - start_line->Point1.X ) ) + ( (double)( end_line->Point2.Y - start_line->Point1.Y ) * 0.000000000000 ) )
        {
        }
        if ( ( (double)( start_line->Point1.X - end_line->Point2.X ) * (double)( start_line->Point1.X - end_line->Point2.X ) ) * 0.000000000000 < 0.000000000000 && dist_lp( start_line->Point1.X, y, end_line->Point2.X, end_line->Point2.Y, x, y ) <= (double)( t + thickness ) )
        {
          return gp_point_force( x, y, t, e, esa, eda, 0, func );
        }
      }
      else
      if ( 0.000000000000 < sd * ( ( (double)( y - start_line->Point1.Y ) * (double)( *(int*)(start_line + 64) - start_line->Point1.X ) ) - ( (double)( x - start_line->Point1.X ) * (double)( *(int*)(start_line + 68) - start_line->Point1.Y ) ) ) )
      {
      }
      if ( sd * ( ( (double)( end_line->Point2.X - *(int*)(end_line + 44) ) * (double)( end_line->Point2.X - *(int*)(end_line + 44) ) ) - ( (double)( end_line->Point2.Y - *(int*)(end_line + 48) ) * (double)( end_line->Point2.Y - *(int*)(end_line + 48) ) ) ) <= 0.000000000000 )
      {
        return gp_point_force( x, y, t, e, esa, eda, 0, func );
      }
    }
  }
  return 0;
}
(e>>3) * 0xd1745d1c...
int gp_line_cb( BoxType *b, void *cb )
{
  int eax;
  int ecx;
  int edx;
  /* phantom */ LineTypePtr l;
  Extra *e;
  if ( start_line != b && end_line != b && ( ( e->bits_at_48 & 2 ) & 255 ) == 0 )
  {
    if ( e == 0 || narcs <= ( ( e - arcs ) >> 2 ) * 0xc4ec4ec5 )
      gp_point_2( b[2].Y2, b[3].X1, b[2].Y1 / 2, &e[0].start, 0, 0, __FUNCTION__ );
    if ( e->end.next == 0 || narcs <= ( ( e->end.next - arcs ) >> 2 ) * 0xc4ec4ec5 )
    {
      gp_point_2( b[4].X1, b[4].Y1, b[2].Y1 / 2, &e->end.next + 24, 0, 0, __FUNCTION__ );
    }
  }
  return 0;
}
(e>>2) * 0xf0f0f0f4...
int gp_arc_cb( BoxType *b, void *cb )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  /* phantom */ ArcTypePtr a;
  Extra *e;
  if ( start_arc != b && end_arc != b && ( ( e->bits_at_48 & 2 ) & 255 ) == 0 )
  {
    gp_point_2( b[3].Y1, b[3].X2, b[2].Y2 + ( b[2].Y1 / 2 ), 0, b[3].Y2, b[4].X1, __FUNCTION__ );
    if ( start_arc && b[3].Y1 == start_arc->X && b[3].X2 == start_arc->Y )
    {
    }
    if ( ( end_arc == 0 || b[3].Y1 == end_arc->X || b[3].X2 == end_arc->Y ) && e == 0 && e->end.next == 0 )
    {
      gp_point_2( e->start.x, e->start.y, b[2].Y1 / 2, 0, 0, 0, __FUNCTION__ );
      gp_point_2( e->end.x, e->end.y, b[2].Y1 / 2, 0, 0, 0, __FUNCTION__ );
    }
  }
  return 0;
}
int gp_text_cb( BoxType *b, void *cb )
{
  int eax;
  int edx;
  /* phantom */ TextTypePtr t;
  gp_point_2( b->X1, b->Y1, ecx, 0, 0, 0, __FUNCTION__ );
  gp_point_2( b->X1, b->Y2, 0, 0, 0, 0, __FUNCTION__ );
  gp_point_2( b->X2, b->Y2, 0, 0, 0, 0, __FUNCTION__ );
  gp_point_2( b->X2, b->Y1, 0, 0, 0, 0, __FUNCTION__ );
  return 0;
}
int gp_poly_cb( BoxType *b, void *cb )
{
  int eax;
  int edx;
  int i;
  /* phantom */ PolygonTypePtr p;
  if ( b[2].Y1 )
  {
    i = 0;
    do
    {
      i++;
      gp_point_2( b[3].X2, b[3].X2, 0, 0, 0, 0, __FUNCTION__ );
    }
    while ( b[2].Y1 <= i );
  }
  return 0;
}
int gp_pin_cb( BoxType *b, void *cb )
{
  int eax;
  int ecx;
  int edx;
  /* phantom */ PinTypePtr p;
  /* phantom */ int t2;
  if ( start_pinpad != b && end_pinpad != b )
  {
    if ( b[1].Y1 & 2304 )
    {
      gp_point_2( b[3].Y1 - ( ( b[2].Y1 + 1 ) / 2 ), b[3].X2 - ( ( b[2].Y1 + 1 ) / 2 ), 0, 0, 0, 0, __FUNCTION__ );
      gp_point_2( b[3].Y1 - ( ( b[2].Y1 + 1 ) / 2 ), b[3].X2 + ( ( b[2].Y1 + 1 ) / 2 ), 0, 0, 0, 0, __FUNCTION__ );
      gp_point_2( b[3].Y1 + ( ( b[2].Y1 + 1 ) / 2 ), b[3].X2 + ( ( b[2].Y1 + 1 ) / 2 ), 0, 0, 0, 0, __FUNCTION__ );
      gp_point_2( b[3].Y1 + ( ( b[2].Y1 + 1 ) / 2 ), b[3].X2 - ( ( b[2].Y1 + 1 ) / 2 ), 0, 0, 0, 0, __FUNCTION__ );
      return 0;
    }
    gp_point_2( b[3].Y1, b[3].X2, ( b[2].Y1 + 1 ) / 2, 0, 0, 0, __FUNCTION__ );
  }
  return 0;
}
int gp_pad_cb( BoxType *b, void *cb )
{
  int eax;
  int ecx;
  int edx;
  int esi;
  /* phantom */ PadTypePtr p;
  /* phantom */ int t2;
  if ( start_pinpad != b && end_pinpad != b )
  {
    if ( b[1].Y1/*.1_1of4*/ < 0 )
    {
      if ( current_is_solder == 0 )
      {
        return 0;
      }
    }
    else
    if ( current_is_component == 0 )
    {
      return 0;
    }
    if ( ( b[1].Y1 & 2304 ) == 0 )
    {
      gp_point_2( b[2].Y2, b[3].X1, ( b[2].Y1 + 1 ) / 2, 0, 0, 0, __FUNCTION__ );
      gp_point_2( b[4].X1, b[4].Y1, ( b[2].Y1 + 1 ) / 2, 0, 0, 0, __FUNCTION__ );
    }
    if ( b[4].X1 == b[2].Y2 )
    {
      int y1 = ( b[3].X1 <= b[4].Y1 ? b[4].Y1 : b[3].X1 ) - ( ( b[2].Y1 + 1 ) / 2 );
      int y2 = ( ( b[2].Y1 + 1 ) / 2 ) + ( (unsigned char)( ( b[3].X1 < b[4].Y1 ) ^ 1 ) ? b[4].Y1 : b[3].X1 );
      gp_point_2( b[2].Y2 - ( ( b[2].Y1 + 1 ) / 2 ), ( b[3].X1 <= b[4].Y1 ? b[4].Y1 : b[3].X1 ) - ( ( b[2].Y1 + 1 ) / 2 ), 0, 0, 0, 0, __FUNCTION__ );
      gp_point_2( b[2].Y2 - ( ( b[2].Y1 + 1 ) / 2 ), y2, 0, 0, 0, 0, __FUNCTION__ );
      gp_point_2( b[2].Y2 + ( ( b[2].Y1 + 1 ) / 2 ), y1, 0, 0, 0, 0, __FUNCTION__ );
      gp_point_2( b[2].Y2 + ( ( b[2].Y1 + 1 ) / 2 ), y2, 0, 0, 0, 0, __FUNCTION__ );
    }
  {
    int x1 = ( b[4].X1 <= b[2].Y2 ? b[2].Y2 : b[4].X1 ) - ( ( b[2].Y1 + 1 ) / 2 );
    int x2 = ( ( b[2].Y1 + 1 ) / 2 ) + ( (unsigned char)( ( b[4].X1 < b[2].Y2 ) ^ 1 ) ? b[2].Y2 : b[4].X1 );
    gp_point_2( ( b[4].X1 <= b[2].Y2 ? b[2].Y2 : b[4].X1 ) - ( ( b[2].Y1 + 1 ) / 2 ), b[3].X1 - ( ( b[2].Y1 + 1 ) / 2 ), 0, 0, 0, 0, __FUNCTION__ );
    gp_point_2( x2, b[3].X1 - ( ( b[2].Y1 + 1 ) / 2 ), 0, 0, 0, 0, __FUNCTION__ );
    gp_point_2( x1, b[3].X1 + ( ( b[2].Y1 + 1 ) / 2 ), 0, 0, 0, 0, __FUNCTION__ );
    gp_point_2( x2, b[3].X1 + ( ( b[2].Y1 + 1 ) / 2 ), 0, 0, 0, 0, __FUNCTION__ );
  }
  }
  return 0;
}
void adjust_pointers_1( Extra *old, Extra *new, int num, Extra *l, int n )
{
  int edx;
  /* phantom */ int delta;
  /* phantom */ long cdelta;
  Extra *last = old + ( num * 52 );
  int i;
  if ( n > 0 )
  {
    i = 0;
    do
    {
      if ( l->start.waiting_for && old < l[1].start.waiting_for && l[1].start.waiting_for < &last[1].start.next )
        l->start.waiting_for = ( new - old ) + l[1].start.waiting_for;
      if ( l->end.waiting_for && old < l[1].end.waiting_for && l[1].end.waiting_for < &last[1].start.next )
        l->end.waiting_for = ( new - old ) + l[1].end.waiting_for;
      if ( old <= l->start.next && l->start.next < last )
        l->start.next = l->start.next + ( ( ( new - old ) >> 2 ) << 2 );
      if ( old <= l->end.next && l[1].end.next < last )
        l->end = l[1].end.next + ( ( ( new - old ) >> 2 ) << 2 );
      i++;
      l->start.next = l + 52;
    }
    while ( n != i + 1 );
  }
  return;
}
void adjust_pointers( Extra *old, Extra *new, int num )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  adjust_pointers_1( old, new, num, lines, nlines );
  adjust_pointers_1( old, new, num, &arcs->data[0], narcs );
  return;
}
void unlink_extras( Extra *e )
{
  int edx;
  if ( e )
  {
    if ( e->start.next == e )
      e->start.next = e->end;
      if ( e->end.next )
      {
        if ( e->end.next == e )
        {
          &e->end.next = e;
        }
        else
        if ( e->end.next != e )
        {
          __fprintf_chk( stderr, 1, " - %p doesn't point to me!\n", ebp_12 );
          abort( );
        }
        else
        {
          &e->end.next = e;
        }
      }
      e->end.next = 0;
      e = 0;
      return;
    else
    if ( e->end.next != e )
    {
      __fprintf_chk( stderr, 1, " - %p doesn't point to me!\n", ebp_12 );
      abort( );
    }
    else
      e->end = e->end;
  }
}
(e>>3) * 0xd1745d1c...
(e>>3) * 0xd1745d1c...
void mark_line_for_deletion( LineTypePtr l )
{
  int ecx;
  int edx;
(e>>3) * 0xd1745d1c...
  Extra *e = lines + ( e - *(int*)(( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 36) );
  if ( ( e->bits_at_48 & 2 ) & 255 )
  {
    __fprintf_chk( stderr, 1, "double delete?\n" );
    abort( );
  }
  e->bits_at_48 = e->bits_at_48 | 2;
}
(e>>2) * 0xf0f0f0f4...
(e>>2) * 0xf0f0f0f4...
void mark_arc_for_deletion( ArcTypePtr a )
{
  int edx;
(e>>2) * 0xf0f0f0f4...
  Extra *e = arcs + ( e - *(int*)(( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 48) );
}
(e>>3) * 0xd1745d1c...
(e>>3) * 0xd1745d1c...
puller.c:2445:0x80BA8B3: sincos:  literal arg 2:  esi:{ }
(e>>2) * 0xf0f0f0f4...
(e>>2) * 0xf0f0f0f4...
(e>>2) * 0xf0f0f0f4...
(e>>2) * 0xf0f0f0f4...
(e>>2) * 0xf0f0f0f4...
(e>>2) * 0xf0f0f0f4...
(e>>2) * 0xf0f0f0f4...
(e>>3) * 0xd1745d1c...
(e>>3) * 0xd1745d1c...
(e>>3) * 0xd1745d1c...
(e>>3) * 0xd1745d1c...
(e>>3) * 0xd1745d1c...
(e>>3) * 0xd1745d1c...
(e>>3) * 0xd1745d1c...
(e>>2) * 0xf0f0f0f4...
(e>>2) * 0xf0f0f0f4...
(e>>3) * 0xd1745d1c...
(e>>2) * 0xf0f0f0f4...
void maybe_pull_1( LineTypePtr line )
{
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
  int ebp_64;
#error unstructured control flow
}
void validate_pair( Extra *e, End *end )
{
  int eax;
  int ebx;
  int esi;
  if ( end && end->next->start.next != e && end->next != e )
  {
    __fprintf_chk( stderr, 1, "no backlink!\n" );
    print_extra( e, 0 );
    print_extra( end->next, 0 );
    abort( );
  }
  return;
}
(e>>2) * 0xf0f0f0f4...
(e>>2) * 0xf0f0f0f4...
(e>>3) * 0xd1745d1c...
(e>>2) * 0xf0f0f0f4...
(e>>2) * 0xf0f0f0f4...
(e>>3) * 0xd1745d1c...
(e>>3) * 0xd1745d1c...
(e>>3) * 0xd1745d1c...
(e>>2) * 0xf0f0f0f4...
(e>>2) * 0xf0f0f0f4...
(e>>3) * 0xd1745d1c...
int GlobalPuller( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  int ebp_192;
  int ebp_112;
  int ebp_100;
  int ebp_96;
  int ebp_92;
  int ebp_88;
  int ebp_84;
  int ebp_80;
  int ebp_76;
  int ebp_72;
  int ebp_68;
  int ebp_64;
  int ebp_60;
  int ebp_48;
  int ebp_44;
  int i;
  int select_flags;
  setbuf( stdout, 0 );
  nloops = 0;
  npulled = 0;
  if ( argc > 0 )
  {
    __printf_chk( 1, "puller! %s\n", argv[0] );
    select_flags = ( 0 - ( ( strcasecmp( argv[0], "selected" ) < 1 ) & 1 ) ) & 64;
    select_flags = strcasecmp( argv[0], "found" ) != 0 ? 4 : select_flags;
  }
  else
  {
    __printf_chk( 1, "puller! %s\n", "" );
    select_flags = 0;
  }
  __printf_chk( 1, "optimizing...\n" );
  current_is_solder = ebx == eax;
  current_is_component = ebx == eax;
  nlines = *(int*)(( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 4);
  max_lines = *(int*)(( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 4);
  lines = calloc( *(int*)(( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 4), sizeof( Extra ) );
  narcs = *(int*)(( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 16);
  max_arcs = *(int*)(( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 16);
  arcs = (GList*)calloc( *(int*)(( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 16), 52 );
  __printf_chk( 1, "pairing...\n" );
  if ( *(int*)(( PCB->SilkActive ? *(int*)(PCB + 8716) + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(*(int*)(PCB + 8716) + 24) ) * 92 ) + 76 : PCB->Data + ( LayerStack[0] * 92 ) + 76 ) + 16) + -1 != -1 )
  {
    while ( 1 )
    {
(e>>2) * 0xf0f0f0f4...
      fix_arc_extra( esi + *(int*)(edx + eax + 124), arcs + ( ( esi + *(int*)(edx + eax + 124) ) - *(int*)(edx + eax + 124) ) );
      if ( ebx == -1 )
      {
      }
      else
      {
      }
    }
  }
  if ( *(int*)(( PCB->SilkActive & 255 ? PCB->Data + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(PCB->Data + 24) ) * 92 ) + 76 : PCB->Data + ( LayerStack[0] * 92 ) + 76 ) + 4) + -1 != -1 )
  {
    while ( 1 )
    {
      PCB->Data->ViaN = *(int*)(PCB->Data + ( PCB->SilkActive & 255 ? ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 : LayerStack[0] * 92 ) + 112);
      if ( *(int*)(( *(int*)(( PCB->SilkActive & 255 ? PCB->Data + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(PCB->Data + 24) ) * 92 ) + 76 : PCB->Data + ( LayerStack[0] * 92 ) + 76 ) + 4) * 88 ) + -88 + *(int*)(PCB->Data + ( PCB->SilkActive & 255 ? ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 : LayerStack[0] * 92 ) + 112) + 44) < 0 )
        goto B48;
      else
      {
(e>>3) * 0xd1745d1c...
        find_pairs_1( &ebx, ebp_136 + ( ebp_140 - edx ), ecx, *(int*)(ebx + 48) );
        find_pairs_1( &ebx, ebp_132 + 24, *(int*)(ebx + 64), *(int*)(ebx + 68) );
      }
B48:;
      if ( edi + -1 == -1 )
        break;
      else
      {
      }
    }
  }
  ebp_64 = *(int*)(( PCB->SilkActive & 255 ? PCB->Data + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(PCB->Data + 24) ) * 92 ) + 76 : PCB->Data + ( LayerStack[0] * 92 ) + 76 ) + 16) + -1;
  if ( *(int*)(( PCB->SilkActive & 255 ? PCB->Data + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(PCB->Data + 24) ) * 92 ) + 76 : PCB->Data + ( LayerStack[0] * 92 ) + 76 ) + 16) + -1 != -1 )
  {
    while ( 1 )
    {
(e>>2) * 0xf0f0f0f4...
      if ( ( *(char*)(arcs + ( ( ( *(int*)(( PCB->SilkActive & 255 ? PCB->Data + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(PCB->Data + 24) ) * 92 ) + 76 : PCB->Data + ( LayerStack[0] * 92 ) + 76 ) + 16) * 68 ) + -68 + *(int*)(PCB->Data + ( PCB->SilkActive & 255 ? ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 : LayerStack[0] * 92 ) + 124) ) - *(int*)(PCB->Data + ( PCB->SilkActive & 255 ? ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 : LayerStack[0] * 92 ) + 124) ) + 48) & 2 ) & 255 )
      {
        ebp_64 += -1;
        if ( ebp_64 != -1 )
          continue;
      }
      else
      {
        find_pairs_1( &esi, &ebx, *(int*)(ebx + 12), *(int*)(ebx + 16) );
        find_pairs_1( &esi, ebx + 24, *(int*)(ebx + 36), *(int*)(ebx + 40) );
        ebp_64 += -1;
        if ( ebp_64 != -1 )
          continue;
      }
    }
  }
  ebp_68 = PCB->Data->ElementN + -1;
  if ( PCB->Data->ElementN + -1 != -1 )
  {
    ebp_84 = ( PCB->Data->ElementN * 300 ) + -300;
    while ( *(int*)(ebp_84 + *(int*)(PCB->Data + 32) + 224) == 0 )
    {
      ebp_68 += -1;
      ebp_84 += -300;
      if ( ebp_68 == -1 )
      {
      }
      else
      {
      }
    }
    while ( 1 )
    {
      r_search( *(int*)(eax + 52), ebp_40, 0, &find_pair_pinline_callback, &ebx );
      r_search( *(int*)(eax + 64), ebp_40, 0, &find_pair_pinarc_callback, &ebx );
      if ( *(int*)(ebp_84 + PCB->Data->Element + 224) == 0 || *(int*)(ebp_84 + PCB->Data->Element + 224) <= ( ( ( 0 + *(int*)(ebp_84 + PCB->Data->Element + 224) + 1 ) - ebp_52 ) + *(int*)(ebp_84 + PCB->Data->Element + 224) + 1 ) - ebp_52 )
        goto B71;
      else
      {
      }
B71:;
      ebp_68 += -1;
      ebp_84 += -300;
    }
  }
  if ( PCB->Data->ViaN )
  {
    while ( 1 )
    {
      r_search( *(int*)(eax + 52), &edi, 0, &find_pair_pinline_callback, &ebx );
      r_search( *(int*)(eax + 64), &edi, 0, &find_pair_pinarc_callback, &ebx );
      if ( PCB->Data->ViaN == 0 || PCB->Data->ViaN <= ( ( ( 0 + PCB->Data->ViaN + 1 ) - ebp_116 ) + PCB->Data->ViaN + 1 ) - ebp_116 )
        goto B87;
      else
      {
      }
    }
  }
B87:;
  ebp_72 = PCB->Data->ElementN + -1;
  if ( PCB->Data->ElementN + -1 != -1 )
  {
    ebp_88 = ( PCB->Data->ElementN * 300 ) + -300;
    do
    {
      ebp_48 = 0;
      ebp_44 = 0;
      while ( 1 )
      {
        do
        {
          if ( *(int*)(PCB->Data->Element + ebp_88 + 232) == 0 || *(int*)(PCB->Data->Element + ebp_88 + 232) <= ebp_44 )
          {
            ebp_72 += -1;
            ebp_88 += -300;
            if ( ebp_72 != -1 )
            {
              do
              {
                ebp_48 = 0;
                ebp_44 = 0;
                while ( 1 )
                {
                  do
                  {
                  }
                  while ( *(int*)(PCB->Data->Element + ebp_88 + 232) != *(int*)(PCB->Data->Element + ebp_88 + 232) );
                  ebp_44++;
                  ebp_48 += 104;
                }
              }
              while ( ebp_72 == -1 );
            }
            else
            {
              if ( nlines > 0 )
              {
                do
                {
                  if ( multi_next.start.next == lines->start.next )
                  {
                    lines->start.next = 0;
                    if ( lines->end.next != multi_next.start.next )
                      continue;
                  }
                  else
                  if ( PCB->PrintFilename != multi_next.start.next )
                    continue;
                  lines[1].end = 0;
                  if ( 0 + 1 + 1 < nlines )
                    continue;
                  else
                  {
                    if ( narcs > 0 )
                    {
                      do
                      {
                        if ( multi_next.start.next == arcs->data[0] )
                        {
                          arcs->data[0] = 0;
                          if ( arcs[2].data != multi_next.start.next )
                            continue;
                        }
                        else
                        if ( lines[1].end.next != multi_next.start.next )
                          continue;
                        arcs[6].next = 0;
                        if ( 0 + 1 + 1 < narcs )
                          continue;
                        else
                        {
                          if ( nlines > 0 )
                          {
                            do
                            {
                              validate_pair( lines + 0, lines + 0 );
                              validate_pair( lines + 0 + 52, lines + 0 + 52 + 24 );
                            }
                            while ( 0 + 1 < nlines );
                          }
                          if ( narcs > 0 )
                          {
                            do
                            {
                              validate_pair( arcs + 0, arcs + 0 );
                              validate_pair( 0 + 52 + arcs, 0 + 52 + arcs + 24 );
                            }
                            while ( 0 + 1 < narcs );
                          }
                          if ( nlines > 0 )
                          {
                            i = 0;
                            ebp_192 = lines;
                            do
                            {
                              if ( PCB->SilkActive )
                              {
                                if ( select_flags != ( select_flags & PCB->Data->Layer->Line->Flags.f ) )
                                {
                                  i++;
                                  ebp_192 += 52;
                                }
                              }
                              else
                              if ( select_flags != ( select_flags & *(int*)(0 + 88 + *(int*)(*(int*)(PCB + 8716) + ( LayerStack[0] * 92 )) + 20) ) )
                                continue;
                              *(char*)(ebp_192 + 8) |= 8;
                              lines[1].end.bits_at_8 |= 8;
                            }
                            while ( nlines <= i + 1 );
                            ebp_112 = 0;
                            ebp_92 = 0;
                            do
                            {
                              if ( *(int*)(lines + 0) && lines->end.next == *(int*)(lines + 0) )
                              {
                                lines->end = 0;
                                mark_line_for_deletion( ebp_112 + *(int*)(( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB + 8716) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 36) );
                              }
                              if ( ( ( *(char*)(lines + 0 + 8) & 2 ) & 255 ) && ( ( *(char*)(lines + 0 + 32) & 1 ) & 255 ) && lines->end.pin == lines->start.pin )
                              {
                                lines->end.bits_at_8 = lines->end.bits_at_8 & -2;
                                if ( lines->end.next )
                                {
                                  while ( 1 )
                                  {
                                    if ( edx != eax )
                                    {
                                      arc->net &= -2;
                                      if ( ( ( *(char*)(arc->BoundingBox.X1 + 8) & 1 ) & 255 ) == 0 )
                                      {
                                      }
                                    }
                                    else
                                    {
                                      *(char*)(eax + 8) &= 254;
                                      if ( ( ( *(char*)(eax + 32) & 1 ) & 255 ) == 0 )
                                      {
                                      }
                                    }
                                    if ( *(int*)(edx + 4) == *(int*)(ecx + 4) )
                                    {
                                      *(char*)(edx + 8) = ebx & -2;
                                      if ( edx == 0 )
                                        continue;
                                      else
                                      {
                                      }
                                    }
                                    else
                                    {
                                    }
                                  }
                                }
                              }
                              if ( ( ( *(char*)(lines + 0 + 32) & 2 ) & 255 ) && ( ( *(char*)(lines + 0 + 8) & 1 ) & 255 ) && lines->end.pin == lines->start.pin )
                              {
                                lines->start.bits_at_8 = lines->start.bits_at_8 & -2;
                                if ( *(int*)(lines + 0) )
                                {
                                  while ( ( ( *(char*)(edx + 8) & 1 ) & 255 ) && *(int*)(edx + 4) == *(int*)(ecx + 4) )
                                  {
                                    *(char*)(edx + 8) = ebx & -2;
                                    if ( edx == 0 )
                                      break;
                                    else
                                    {
                                    }
                                  }
                                }
                              }
                              ebp_92++;
                              ebp_112 += 88;
                            }
                            while ( nlines <= ebp_92 );
                            if ( nlines > 0 )
                            {
                              do
                              {
                                if ( ( *(char*)(lines + 8) & 1 ) & 255 )
                                  lines->start.next = 0;
                                if ( ( *(char*)(lines + 32) & 1 ) & 255 )
                                  lines->end = 0;
                              }
                              while ( nlines <= 0 + 1 + 1 );
                              if ( nlines > 0 )
                              {
                                ebp_100 = 0;
                                ebp_76 = 0;
                                ebp_60 = lines;
                                do
                                {
                                  if ( *ebp_60 )
                                  {
                                    while ( ebx == *(int*)(ecx + 4) )
                                    {
                                      lines[1].end.pin = *(int*)(ebp_60 + 28);
                                      lines[1].end.bits_at_8 = ( *(char*)(ebp_60 + 32) & 4 ) | ( *(char*)(lines + 52 + 24 + 8) & -5 );
                                      if ( nlines == 0 )
                                        break;
                                      else
                                      {
                                      }
                                    }
                                  }
                                  if ( *(int*)(ebp_100 + lines + 24) )
                                  {
                                    while ( ebx == *(int*)(ecx + 4) )
                                    {
                                      *(int*)(ecx + 4) = *(int*)(ebp_100 + lines + 4);
                                      *(char*)(ecx + 8) = esi | ( *(char*)(ecx + 8) & -5 );
                                      if ( edi == 0 )
                                        break;
                                      else
                                      {
                                      }
                                    }
                                  }
                                  ebp_76++;
                                  ebp_100 += 52;
                                  ebp_60 += 52;
                                }
                                while ( nlines <= ebp_76 );
                              }
                            }
                          }
                          __printf_chk( 1, "pulling...\n" );
                          if ( _setjmp( &abort_buf[0].__jmpbuf[0] ) == 0 )
                          {
                            did_something = 1;
                          {
                            Cardinal n;
                            LineTypePtr line;
                            do
                            {
                              nloops++;
                              __fprintf_chk( stderr, 1, "%6d loops, %d pulled   \r", nloops + 1, npulled );
                              did_something = 0;
                              if ( PCB->SilkActive )
                              {
                                n = PCB->Data->Layer->LineN + -1;
                                if ( PCB->Data->Layer->LineN + -1 == -1 )
                                  break;
                              }
                              else
                              {
                                n = PCB->Data[5].name_tree[0]->root + -1;
                                if ( PCB->Data[5].name_tree[0]->root + -1 == -1 )
                                  break;
                              }
                              while ( 1 )
                              {
                                if ( PCB->SilkActive & 255 )
                                  line = ( PCB->Data * 88 ) + -88 + -88 + PCB->Data->Layer->Line;
                                else
                                {
                                  line = ( PCB->Data->ViaN * 88 ) + -88 + PCB->Data->Layer->Line;
                                {
                                  Extra *e;
                                }
                                }
(e>>3) * 0xd1745d1c...
                                e = lines + ( e - line[99].BoundingBox.Y1 );
                                if ( ( ( e->bits_at_48 & 2 ) & 255 ) == 0 )
                                {
                                  if ( e )
                                  {
                                    if ( e->end.next == 0 )
                                    {
                                      e->end.bits_at_8 &= 247;
                                      if ( e && ( ( e - lines ) >> 2 ) * 0xc4ec4ec5 < nlines )
                                      {
                                        reverse_line( line );
                                        maybe_pull_1( line );
                                      }
                                      else
                                        e->start.bits_at_8 &= 247;
                                    }
                                  }
                                  else
                                  if ( e->end.next )
                                    goto B201;
B201:;
                                  if ( ( ( e->end.next - lines ) >> 2 ) * 0xc4ec4ec5 < nlines )
                                  {
                                    maybe_pull_1( line );
                                  }
                                  else
                                  {
                                    e->end.bits_at_8 &= 247;
                                  }
                                }
                                n += -1;
                                if ( n + -1 == -1 )
                                {
                                  if ( did_something )
                                  {
                                    do
                                    {
                                      nloops++;
                                      __fprintf_chk( stderr, 1, "%6d loops, %d pulled   \r", nloops + 1, npulled );
                                    }
                                    while ( did_something == 0 );
                                  }
                                  else
                                  {
                                    ebp_80 = *(int*)(( PCB->SilkActive ? *(int*)(PCB + 8716) + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(*(int*)(PCB + 8716) + 24) ) * 92 ) + 76 : PCB->Data + ( LayerStack[0] * 92 ) + 76 ) + 4) + -1;
                                    if ( *(int*)(( PCB->SilkActive ? *(int*)(PCB + 8716) + ( ( ( Settings.ShowSolderSide == 0 ) + *(int*)(*(int*)(PCB + 8716) + 24) ) * 92 ) + 76 : PCB->Data + ( LayerStack[0] * 92 ) + 76 ) + 4) + -1 >= 0 )
                                    {
                                    {
                                      LineTypePtr line;
                                      while ( 1 )
                                      {
(e>>3) * 0xd1745d1c...
                                        if ( ( *(char*)(ebp_120 + ( edi - *(int*)(ebp_128 + 36) ) + 48) & 2 ) & 255 )
                                        {
                                          RemoveLine( &eax[0], line );
                                        }
                                        ebp_80 += -1;
                                        if ( ebp_80 + -1 < 0 )
                                          break;
                                        else
                                        {
                                        }
                                      }
                                    }
                                    }
                                    ebp_96 = *(int*)(ecx + 16) + -1;
                                    if ( *(int*)(ecx + 16) + -1 < 0 )
                                    {
                                      free( lines );
                                      free( arcs );
                                      arcs = 0;
                                      lines = 0;
                                      max_arcs = 0;
                                      max_lines = 0;
                                      narcs = 0;
                                      nlines = 0;
                                      IncrementUndoSerialNumber( );
                                      return 0;
                                    }
                                    while ( ( ( *(char*)(arcs + ( ( ebx + *(int*)(eax + arc + 124) ) - *(int*)(eax + arc + 124) ) + 48) & 2 ) & 255 ) == 0 )
                                    {
                                      ebp_96 += -1;
                                      if ( ebp_96 + -1 < 0 )
                                      {
                                        free( lines );
                                        free( arcs );
                                        arcs = 0;
                                        lines = 0;
                                        max_arcs = 0;
                                        max_lines = 0;
                                        narcs = 0;
                                        nlines = 0;
                                        IncrementUndoSerialNumber( );
                                        return 0;
                                      }
                                    }
                                    RemoveArc( &eax[0], arc );
                                    ebp_96 += -1;
                                    free( lines );
                                    free( arcs );
                                    arcs = 0;
                                    lines = 0;
                                    max_arcs = 0;
                                    max_lines = 0;
                                    narcs = 0;
                                    nlines = 0;
                                    IncrementUndoSerialNumber( );
                                    return 0;
                                  }
                                }
                                else
                                {
                                }
                              }
                            }
                            while ( did_something == 0 );
                          }
                          }
                        }
                      }
                      while ( narcs <= 0 + 1 + 1 );
                    }
                  }
                }
                while ( nlines <= 0 + 1 + 1 );
              }
            }
          }
          else
          {
            r_search( *(int*)(( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data->ElementN + 8716) + 76 : PCB->Data->ElementN + ( ( PCB->Data->ElementN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 52), ebp_40, 0, &find_pair_padline_callback, *(int*)(PCB->Data + 28) + ( ( ( PCB->Data->ViaN + 0 + 1 ) - PCB->Data->ViaN ) * 76 ) );
            r_search( *(int*)(( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB + 8716) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76 ) + 64), ebp_40, 0, &find_pair_padarc_callback, *(int*)(PCB->Data + 28) + ( ( ( PCB->Data->ViaN + 0 + 1 ) - PCB->Data->ViaN ) * 76 ) );
          }
        }
        while ( *(int*)(PCB->Data->Element + ebp_88 + 232) != *(int*)(PCB->Data->Element + ebp_88 + 232) );
      }
    }
    while ( ebp_72 == -1 );
  }
}
void register_puller_action_list( void )
{
  hid_register_actions( puller_action_list, 2 );
  return;
}
#if 0
#endif
