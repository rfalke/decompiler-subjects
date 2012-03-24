#include "djopt.c.h"
static corner_s *corners;
static corner_s *next_corner;
static line_s *lines;
static int layer_groupings[16];
static char layer_type[16];
static int autorouted_only = 1;
static char djopt_sao_syntax[14] = { 'O', 'p', 't', 'A', 'u', 't', 'o', 'O', 'n', 'l', 'y', '(', ')' };
static char djopt_sao_help[43] = { 'T', 'o', 'g', 'g', 'l', 'e', 's', ' ', 't', 'h', 'e', ' ', 'o', 'p', 't', 'i', 'm', 'i', 'z', 'e', '-', 'o', 'n', 'l', 'y', '-', 'a', 'u', 't', 'o', 'r', 'o', 'u', 't', 'e', 'd', ' ', 'f', 'l', 'a', 'g', '.' };
HID_Flag djopt_flag_list[1] = { { "optautoonly", &djopt_get_auto_only, 0 }
 };
static int solder_layer;
static int component_layer;
static char djopt_syntax[103] = { 'd', 'j', 'o', 'p', 't', '(', 'd', 'e', 'b', 'u', 'm', 'p', 'i', 'f', 'y', '|', 'u', 'n', 'j', 'a', 'g', 'g', 'y', '|', 's', 'i', 'm', 'p', 'l', 'e', '|', 'v', 'i', 'a', 'n', 'u', 'd', 'g', 'e', '|', 'v', 'i', 'a', 't', 'r', 'i', 'm', '|', 'o', 'r', 't', 'h', 'o', 'p', 'u', 'l', 'l', ')', '\n', 'd', 'j', 'o', 'p', 't', '(', 'a', 'u', 't', 'o', ')', ' ', '-', ' ', 'a', 'l', 'l', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 'a', 'b', 'o', 'v', 'e', '\n', 'd', 'j', 'o', 'p', 't', '(', 'm', 'i', 't', 'e', 'r', ')' };
static char djopt_help[51] = { 'P', 'e', 'r', 'f', 'o', 'r', 'm', ' ', 'v', 'a', 'r', 'i', 'o', 'u', 's', ' ', 'o', 'p', 't', 'i', 'm', 'i', 'z', 'a', 't', 'i', 'o', 'n', 's', ' ', 'o', 'n', ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'b', 'o', 'a', 'r', 'd' };
HID_Action djopt_action_list[2] = { { "djopt", 0, &ActionDJopt, &djopt_help, &djopt_syntax }
, { "OptAutoOnly", 0, &djopt_set_auto_only, &djopt_sao_help, &djopt_sao_syntax }
 };
int djopt_set_auto_only( int argc, char **argv, int x, int y )
{
  autorouted_only = autorouted_only == 0;
  return 0;
}
int djopt_get_auto_only( int dummy )
{
  return autorouted_only;
}
void register_djopt_flag_list( void )
{
  hid_register_flags( djopt_flag_list, 1 );
  return;
}
void dj_abort( char *msg, ... )
{
  /* phantom */ va_list a;
  __vfprintf_chk( stdout, 1, msg, ebp_12 );
  fflush( stdout );
  abort( );
}
int dist( int x1, int y1, int x2, int y2 )
{
  /* phantom */ double dx1, dy1, dx2, dy2, d;
  y1 = (int)( rint( sqrt( ( ( (double)( y1 ) - (double)( x2 ) ) * ( (double)( y1 ) - (double)( x2 ) ) ) + ( ( (double)( y1 ) - (double)( y2 ) ) * ( (double)( y1 ) - (double)( y2 ) ) ) ) ) );
  return y1;
}
int line_length( line_s *l )
{
  int eax;
  if ( l->e->x == l->s->x )
  {
    return ( ( l->s->y - l->e->y ) ^ ( ( *(int*)(l->s + 12) - *(int*)(l->e + 12) ) >> 31 ) ) - ( ( *(int*)(l->s + 12) - *(int*)(l->e + 12) ) >> 31 );
  }
  if ( l->e->y != l->s->y )
  {
    return dist( l->s->x, l->s, ecx, l->e->y );
  }
  return ( ( ( l->s->x - l->e->x ) >> 31 ) ^ ( l->s->x - l->e->x ) ) - ( ( l->s->x - l->e->x ) >> 31 );
}
int dist_ltp2( int dx, int y, int y1, int y2 )
{
  int ecx;
  if ( y < y1 )
  {
    y2 = y1;
  }
  if ( y <= y2 )
  {
    return ( dx ^ ( dx >> 31 ) ) - ( dx >> 31 );
  }
}
int sqr( int a )
{
  return a * a;
}
corner_s *other_corner( line_s *l, corner_s *c )
{
  if ( l->s == c )
  {
    return l->e;
  }
  if ( l->e != c )
  {
    dj_abort( "other_corner: neither corner passed\n" );
    return 0;
  }
  return l->s;
}
corner_s *find_corner( int x, int y, int l )
{
  corner_s *c = corners;
  if ( corners )
  {
    do
    {
      if ( c != -559038737 && c->x == x && c->y == y )
      {
        if ( c == -1 || l == -1 || l == c )
          break;
        if ( layer_groupings[ c ] == layer_groupings[ l ] )
        {
          break;
        }
      }
      c = c->next;
    }
    while ( c->next );
  }
  c = malloc( ( 1 ) * sizeof( corner_s ) );
  *(int*)malloc( 44 )/*.8*/ = x;
  *(int*)malloc( 44 )/*.12*/ = y;
  *(int*)malloc( 44 )/*.16*/ = 0;
  *(int*)malloc( 44 )/*.4*/ = corners->corner_s;
  *(int*)malloc( 44 )/*.20*/ = 0;
  *(int*)malloc( 44 )/*.24*/ = 0;
  *(int*)malloc( 44 )/*.28*/ = 0;
  *(int*)(malloc( 44 )) = l;
  *(int*)malloc( 44 )/*.36*/ = 0;
  corners = malloc( ( 1 ) * sizeof( corner_s ) );
  c->lines = (struct line_s**)malloc( 28 );
  return c;
}
void add_line_to_corner( line_s *l, corner_s *c )
{
  int ebx;
  /* phantom */ int n;
  c->lines = realloc( c->lines, ( ( c->n_lines + 8 ) & -8 ) * sizeof( struct line_s* ) );
  c->n_lines++;
  return;
}
// Lost vars at line 538 through condition folding
LineType *create_pcb_line( int layer, int x1, int y1, int x2, int y2, int thick, int clear, FlagType flags )
{
  int eax;
  char *from, *to;
  LineType *nl;
  LayerType *lyr = PCB->Data + ( layer * 92 ) + 76;
  from[0] = from[8716];
  AddObjectToCreateUndoList( 4, (void*)lyr, (void*)nl, CreateNewLineOnLayer( from[8716] + ( layer * 92 ) + 76, x1, y1, x2, y2, thick, clear, "badarg" ) );
  to[0] = *(int*)(( layer * 92 ) + 112);
  if ( from != *(int*)(( layer * 92 ) + 112) && lines )
  {
    to[0] = to - from;
    do
    {
      if ( lp != -559038737 && from <= lp->line && lp->line <= from )
        lp->line += ( to - from ) / 88;
      lp = lp->next;
    }
    while ( lp->next );
  }
  return nl;
}
void new_line( corner_s *s, corner_s *e, int layer, LineType *example )
{
  int ecx;
  /* phantom */ line_s *ls;
  if ( PCB->Data->LayerN <= layer )
  {
    dj_abort( "layer %d\n", layer );
  }
  if ( ebp_32 == 0 )
  {
    dj_abort( "NULL example passed to new_line()\n", layer );
  }
  if ( s->x == e->x && s->y == e->y )
  {
    return;
  }
{
  LineType *nl;
  *(int*)(malloc( 20 )) = layer;
  *(int*)malloc( 20 )/*.8*/ = s[0].layer;
  *(int*)malloc( 20 )/*.12*/ = e[0].layer;
  *(int*)malloc( 20 )/*.4*/ = lines;
  lines = malloc( 20 );
  if ( nl == 0 )
  {
    dj_abort( "can't create new line!" );
  }
  lines = nl;
  add_line_to_corner( &lines, s );
}
}
void add_point_to_rect( rect_s *rect, int x, int y, int w )
{
  if ( x - w < rect )
    rect = x - w;
  if ( rect->x2 < w + x + w )
    rect->x2 = x + w;
  if ( y - w < rect->y1 )
    rect->y1 = y - w;
  if ( rect->y2 < y + w )
  {
    rect->y2 = w;
  }
  return;
}
void add_line_to_rect( rect_s *rect, line_s *l )
{
  int eax;
  int ecx;
  int edx;
  int esi;
  add_point_to_rect( rect, l->s->x, l->s->y, 0 );
  add_point_to_rect( rect, l->e->x, l->e->y, 0 );
  return;
}
int corner_radius( corner_s *c )
{
  int edx;
  int diam = 0;
  int i;
  if ( c->n_lines > 0 )
  {
    i = 0;
    do
    {
      i++;
    }
    while ( c->n_lines != i + 1 );
  }
  return ( diam + 1 + 1 ) / 2;
}
void add_corner_to_rect_if( rect_s *rect, corner_s *c, rect_s *e )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int diam = corner_radius( c );
  if ( c->x < e && c->x + diam < e )
  {
    esi = c;
  }
  else
  if ( ( c->x <= e->x2 || c->x - diam <= e->x2 ) && ( e->y1 <= c->y || e->y1 <= c->y + diam ) && ( c->y <= e->y2 || c->y - diam <= e->y2 ) )
  {
    if ( c->x < e && c->y < e->y1 )
    {
      if ( diam < dist( c->x, c->y, e, e->y1 ) )
      {
        return;
      }
    }
    if ( e->x2 < c->x )
    {
      if ( c->y < e->y1 )
      {
        if ( diam < dist( dist( c->x, c->y, e, e->y1 ), c->y, e->x2, e->y1 ) )
        {
          return;
        }
      }
      else
      if ( c->x < e )
      {
        if ( e->y2 < c->y )
        {
          if ( diam < dist( c->x, c->y, e, e->y2 ) )
          {
            return;
          }
          if ( c->x <= e->x2 )
          {
            add_point_to_rect( rect, c->x, e->x1, diam );
          }
          else
          {
            if ( e->y2 < c->y )
            {
              if ( diam < dist( dist( c->x, c->y, e, e->y2 ), c->y, e->x2, e->y2 ) )
              {
                return;
              }
            }
          }
        }
        else
        {
          if ( c->x <= e->x2 )
          {
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
    if ( c->x < e )
    {
    }
    else
    {
    }
  }
  return;
}
void remove_line( line_s *l )
{
  int ecx;
  int edx;
  int i, j;
  line_s *l2;
  LineType *from = 0, *to = l->line;
  /* phantom */ LayerType *layer;
  if ( l->line )
  {
    j = PCB->Data + ( l * 92 );
    from = *(int*)(PCB->Data + ( l * 92 ) + 112) + ( ( PCB->Data->Layer->LineN + -1 ) * 88 );
    RemoveLine( PCB->Data + ( l * 92 ) + 76, to );
  }
  l2 = &lines;
  l = -559038737;
  if ( lines )
  {
    do
    {
      if ( l2 != -559038737 && l2->line == from )
      {
        l2->line = to;
        l2 = l2->next;
        if ( l2->next )
          continue;
      }
      else
      {
        l2 = l2->next;
      }
    }
    while ( l2->next );
  }
  j = 0;
  if ( l->s->n_lines > 0 )
  {
    i = 0;
    do
    {
      if ( l->s->lines[0] != l )
      {
        l->s->lines[0] = l->s->lines[0];
        j++;
      }
      i++;
    }
    while ( l->s->n_lines <= i + 1 );
  }
  l->s->n_lines = j;
  j = 0;
  if ( l->e->n_lines > 0 )
  {
    i = 0;
    do
    {
      if ( l->e->lines[0] != l )
      {
        l->e->lines[0] = l->e->lines[0];
        j++;
      }
      i++;
    }
    while ( i + 1 < l->e->n_lines );
  }
  l->e->n_lines = j;
  return;
}
void remove_via_at( corner_s *c )
{
  corner_s *cc;
  PinType *from;
  PinType *to = cc->via;
  cc = &PCB->Data->ViaN;
  from = &PCB->Data->Via[ PCB->Data->ViaN + -1 ];
  RemoveObject( 1, (void*)c->via, 0, 0 );
  cc = corners;
  c->via = 0;
  if ( corners )
  {
    do
    {
      if ( cc != -559038737 && cc->via == from )
      {
        cc->via = to;
        cc = cc->next;
        if ( cc->next == 0 )
          break;
      }
      else
      {
        cc = cc->next;
      }
    }
    while ( cc->next );
  }
  return;
}
void merge_corners( corner_s *c1, corner_s *c2 )
{
  int eax;
  int i;
  if ( 1 )
  {
    abort( );
  }
  if ( c2->n_lines > 0 )
  {
    i = 0;
    do
    {
      add_line_to_corner( c2->lines[0], c1 );
      if ( c2 == c2->lines[0]->s )
      {
        c2->lines[0]->s = c1;
        if ( c2 == c2->lines[0]->e )
        {
        }
        else
        {
          i++;
        }
      }
      else
      if ( c2 != *(int*)(*(int*)(c2->lines + edi) + 12) )
      {
        i++;
      }
      c2->lines[0]->e = c1;
      i++;
      if ( i + 1 < c2->n_lines )
        continue;
      else
        break;
    }
    while ( c2->n_lines <= i + 1 );
  }
  if ( c1->via )
  {
    if ( c2->via )
      remove_via_at( c2 );
  }
  else
  if ( c2->via )
    c1->via = c2->via;
  if ( c2->pad )
    c1->pad = c2->pad;
  if ( c2->pin )
    c1->pin = c2->pin;
  if ( c2 != c1 )
    c1 = -1;
  if ( corners == c2 )
    corners = c2->next;
  if ( corners )
  {
    while ( 1 )
    {
      if ( c2->next == -559038737 )
      {
        if ( c2->next == 0 )
          goto B28;
      }
      else
      {
        if ( c2 == c2->pin->BoundingBox.Y1 )
          c2->next = c2->next;
        if ( c2->next == 0 )
          goto B28;
      }
    }
  }
B28:;
  if ( next_corner == c2 )
    next_corner = c2->next;
  free( c2->lines );
  c2->lines = 0;
  c2 = -559038737;
  return;
}
void move_corner( corner_s *c, int x, int y )
{
  int ecx;
  int edx;
  PinType *via;
  int i;
  corner_s *pad;
  if ( c->pad || c->pin )
    dj_abort( "move_corner: has pin or pad\n" );
  pad = corners;
  if ( corners )
  {
    x = x;
    y = y;
    do
    {
      if ( pad != -559038737 && pad->x == x && pad->y == y )
      {
        if ( pad != -1 && c != -1 && pad != c && layer_groupings[ pad ] != layer_groupings[ c ] )
        {
          pad = pad->next;
          if ( pad->next == 0 )
            break;
        }
        else
        {
          c->x = x;
          via = c->via;
          c->y = y;
          if ( c->via )
            MoveObject( 1, (void*)via, (void*)via, (void*)via, x - via->X, c->y - via->Y );
          if ( c->n_lines > 0 )
          {
            i = 0;
            y = y;
            do
            {
              tl = c->lines[0]->line;
              if ( c->lines[0]->line )
              {
                MoveObject( 4096, &PCB->Data->Layer[ *(int*)(c) ].Name, (void*)tl, c == *(int*)(c + 8) ? tl + 44 : tl + 64, ebp_56, ebp_56 );
              }
              i++;
            }
            while ( i + 1 < c->n_lines );
            pad = pad;
          }
          if ( ( pad != c ) == 0 )
          {
            if ( c->n_lines <= 0 )
            {
              gui->progress( (long long)0, 0 );
              return;
            }
            i = 0;
            do
            {
              if ( c->lines[0]->e->x == c->lines[0]->s->x && c->lines[0]->e->y == c->lines[0]->s->y )
              {
                c = c;
              {
                corner_s *c2 = other_corner( &c->lines[0]->line->BoundingBox.X1, c );
                remove_line( c->lines[0] );
                if ( c2 == c )
                  break;
              }
              }
              else
              {
                i++;
              }
            }
            while ( i + 1 < c->n_lines );
          }
          merge_corners( c, c2 );
        }
      }
      else
      {
        pad = pad->next;
      }
    }
    while ( pad->next );
  }
  c->x = x;
  via = c->via;
  c->y = y;
}
int split_line( line_s *l, corner_s *c )
{
  int ecx;
  int i;
  /* phantom */ LayerType *layer;
  LineType *pcbline;
  /* phantom */ line_s *ls;
  return c;
}
int canonicalize_line( line_s *l )
{
  int ecx;
  int edx;
  corner_s *c;
  if ( l->e->x == l->s->x )
  {
    int y1 = l->s->y;
    int y2 = l->e->y;
    int x1;
    int x2 = x1 - ( l->line->Thickness / 2 );
    x2 = x1 + ( l->line->Thickness / 2 );
    if ( y2 < l->s->y )
    {
      y2 = y1 = y2;
    }
    c = corners;
    if ( corners == 0 )
    {
      return 0;
    }
    y2 = l->s;
    do
    {
      if ( c != -559038737 && y1 < c->y && c->y < y2 )
      {
        if ( c != -1 && l->s->x != -1 && l->s->x != l->e->x && layer_groupings[ l->s->x ] != layer_groupings[ l->e->x ] )
        {
        }
        else
        if ( y2 == c->x )
        {
        }
        if ( c->x < x2 && x2 < c->x && c->pad == 0 && c->pin == 0 )
        {
          move_corner( c, c, c->y );
          y2 = l->s;
          if ( y2 == c->x )
          {
          }
        }
      }
      c = c->next;
    }
    while ( c->next );
    return 0;
  }
  else
  {
    if ( l->e->y == l->s->y )
    {
      int x1;
      int x2;
      int y1;
      int y2 = x1;
      x2 = x2 - ( l->line->Thickness / 2 );
      x2 += l->line->Thickness / 2;
      if ( y2 < x1 )
      {
        y2 = x1;
        x1 = x1;
      }
      c = corners;
      if ( corners == 0 )
      {
        return 0;
      }
      y2 = l->s;
      do
      {
        if ( c != -559038737 && x1 < c->x && c->x < y2 )
        {
          if ( c != -1 && y1 != -1 && c->y != y1 && layer_groupings[ y1 ] != layer_groupings[ c->y ] )
          {
          }
          else
          if ( y2 == c->y )
          {
          }
          if ( c->y < x2 && x2 < c->y && c->pad == 0 && c->pin == 0 )
          {
            move_corner( c, c->x, c );
            y2 = l->s;
            if ( y2 == c->y )
            {
            }
          }
        }
        c = c->next;
      }
      while ( c->next );
      return 0;
    }
    else
    {
      int x1 = x1 < x1 ? x1 : x1;
      int x2 = x1 <= x1 ? x1 : x1;
      int y1;
      int y2 = y1;
      if ( y1 < l->s->y )
        y2 = l->s->y;
      c = corners;
      if ( corners == 0 )
      {
        return 0;
      }
      do
      {
        if ( c != -559038737 )
        {
          if ( c->via || c->pin )
          {
            if ( x1 < c->x && c->x < x2 && y2 < c->y && c->y < y2 )
            {
              if ( c != -1 && l != -1 && l != c && layer_groupings[ l ] != layer_groupings[ c ] )
              {
                c = c->next;
                if ( c->next == 0 )
                  break;
              }
              else
              {
                int th;
                if ( th / 2 < dist( l->s->x, l->s->y, c->x, c->y ) && y1 / 2 < dist( l->e->x, l->e->y, c->x, c->y ) )
                {
                  if ( c->pin == 0 )
                  {
                  }
                  if ( PinLineIntersect( c->via, l->line ) & 255 )
                  {
                  }
                }
              }
            }
          }
          else
          {
            c = c->next;
            if ( c->next == 0 )
            {
              break;
            }
          }
        }
        c = c->next;
      }
      while ( c->next );
      return 0;
    }
  }
}
int simple_optimizations( void )
{
  int eax;
  int ecx;
  int edx;
  corner_s *c;
  int rv = 0;
  c = corners;
  if ( corners )
  {
    do
    {
      if ( c != -559038737 && c->pad == 0 && c->pin == 0 )
      {
        if ( c->via == 0 || mem_any_set( c->via + 24, 8 ) || c->via->Mask )
        {
        }
        else
        {
          if ( c->n_lines > 1 )
          {
            if ( c->lines[1]->layer == c->lines[0] )
            {
              do
              {
                if ( c->n_lines <= 1 + 1 + 1 )
                  rv = rv;
                else
              }
              while ( c->lines[1]->layer != c->lines[0] );
              rv = rv;
            }
            else
            {
            }
          }
          if ( c->n_lines != 1 + 1 )
          {
          }
          else
          {
            remove_via_at( c );
          }
        }
        if ( c->n_lines == 2 && c->via == 0 )
        {
          if ( ( c->lines[0]->s == c ? c->x : c->lines[0]->e->x ) == ( c->lines[0]->s == c ? c->lines[0]->e->x : c->lines[0]->s->x ) )
          {
          }
          else
          if ( edx == eax )
          {
          }
          other_corner( c->lines[0], c );
          if ( ( c->lines[1]->s == other_corner( &c->lines[1]->s->next, c ) ? *(int*)other_corner( &c->lines[1]->s->next, c )/*.8*/ : c->lines[1]->e->x ) == ( c->lines[1]->s == other_corner( &c->lines[1]->s->next, c ) ? c->lines[1]->e->x : c->lines[1]->s->x ) )
          {
          }
          else
          if ( ebp_44 == ebp_36 )
          {
          }
          if ( ebp_60 == ecx && ecx != 240 )
          {
            if ( ( *(char*)(*(int*)(*(int*)(c->lines) + 16) + 20) & 64 ) & 255 )
              c->lines[1]->line->Flags.f |= 64;
            if ( ( *(char*)(*(int*)(c->lines[1] + 16) + 20) & 64 ) & 255 )
              c->lines[0]->line->Flags.f |= 64;
            rv += 0;
            move_corner( c, *(int*)(ebp_28 + 8), *(int*)(ebp_28 + 12) );
          }
        }
        rv += 0;
      }
      c = c->next;
    }
    while ( c->next );
  }
  return rv;
}
// Lost vars at line 369 through condition folding
// Lost vars at line 1258 through condition folding
int orthopull_1( corner_s *c, int fdir, int rdir, int any_sel )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  int ebp_124;
  int ebp_112;
  int ebp_96;
  int ebp_84;
  int ebp_68;
  static corner_s **cs;
  static int cm;
  static line_s **ls;
  static int lm;
  int i, li, ln, cn, snap;
  line_s *l;
  corner_s *c2, *cb;
  int adir, sdir, pull;
  int saw_sel, saw_auto;
  int max = rdir, len, r1, r2;
  rect_s rr;
  int edir, done;
  if ( cs == 0 )
  {
    cm = 10;
    cs = (corner_s**)malloc( 440 );
    lm = 10;
    ls = (line_s**)malloc( 200 );
  }
  if ( c->n_lines > 0 )
  {
    i = 0;
    c2 = &c->lines[0]->layer;
    do
    {
      if ( ecx == ebx )
      {
        o = 0;
        o/*.1_1of4*/ = edi < esi;
        o = ( ( edi < esi ) << 2 ) + 36;
        if ( max == ( ( edi < esi ) << 2 ) + 36 )
        {
          break;
        }
      }
      else
      {
        int o = 240;
        if ( ( c == c2->layer ? i + 2 : rdir ) == fdir )
        {
          o = 0;
          o/*.1_1of4*/ = ebx < ecx;
          o = ( ebx < ecx ) + 17;
        }
        if ( o == max )
        {
          break;
        }
      }
      i++;
    }
    while ( c->n_lines <= i + 1 );
  }
  sdir = 36;
  adir = 40;
  if ( fdir == 18 )
    goto B17;
  else
  {
    sdir = 17;
    adir = 18;
    if ( fdir == 40 )
      goto B17;
    else
    {
      dj_abort( "fdir not right or down\n" );
      sdir = 0;
      adir = 0;
    }
  }
B17:;
  if ( c->pad || c->pin || c->n_lines <= 1 )
  {
    return c->n_lines * pull;
  }
  ln = cn;
  if ( ln < cm )
  {
    while ( 1 )
    {
      cn = ln + 1;
      r2 = (unsigned char)( ( r1 < r2 ) ^ 1 ) ? r2 : r1;
      r1 = (unsigned char)( ( r1 < r2 ) ^ 1 ) ? r2 : r1;
      edir = c2->n_lines;
      if ( c2->n_lines > 0 )
      {
      {
        int o;
        ebp_84 = 0;
        snap = ls;
        i = 0;
        ebp_68 = c2->lines;
        done = ls[ ( ebp_96 >> 2 ) + -1 ];
        do
        {
          if ( ( l->s == c2 ? l->e->x : l->s->x ) == ( l->s == c2 ? c2->x : l->e->x ) )
          {
            o = ( ( ( l->s == c2 ? c2->y : l->e->y ) < o ) << 2 ) + 36;
            if ( fdir == ( ( ( l->s == c2 ? c2->y : l->e->y ) < o ) << 2 ) + 36 )
              goto B39;
            else
            {
              if ( o == max )
              {
                if ( done == l )
                {
                  pull = ( pull + ( o == adir ) ) - ( sdir == o );
                  i++;
                }
              }
            }
          }
          else
          if ( ( l->s == c2 ? c2->y : l->e->y ) == ( l->s == c2 ? l->e->y : l->s->y ) )
          {
            o = 0;
            o/*.1_1of4*/ = ( l->s == c2 ? c2->x : l->e->x ) < ( l->s == c2 ? l->e->x : c2->layer );
            o = ( ( l->s == c2 ? c2->x : l->e->x ) < ( l->s == c2 ? l->e->x : c2->layer ) ) + i + 2 + 2;
            if ( fdir == ( ( l->s == c2 ? c2->x : l->e->x ) < ( l->s == c2 ? l->e->x : c2->layer ) ) + i + 2 + 2 )
              goto B39;
            else
            {
            }
          }
B39:;
          if ( ebp_84 == 0 )
          {
            if ( o == max )
            {
            }
          }
        }
        while ( edir <= i + 1 );
        if ( ebp_84 )
        {
          saw_sel = ( ( (unsigned char)( *(int*)(*(int*)(ebp_84 + 16) + 20) ) & 64 ) & 255 ) == 0 ? 1 : saw_sel;
          saw_auto = (unsigned char)( ( ( *(int*)(*(int*)(ebp_84 + 16) + 20) >> 7 ) & 1 ) ^ 1 ) ? 1 : saw_auto;
          if ( lm <= ln )
          {
            lm = ebp_112;
            ls = (line_s**)realloc( &snap, ebp_124 );
          }
          c2 = other_corner( ebp_84, c2 );
          if ( c2 == 0 )
            ln = cn;
          else
          {
            if ( c2->pad || c2->pin || c2->n_lines <= 1 )
            {
              break;
            }
            ln = cn;
          }
        }
      }
      }
      if ( pull == 0 || cn <= 1 )
      {
        break;
      }
      if ( saw_sel == 0 )
      {
        if ( any_sel == 0 )
          goto B63;
      }
      else
      if ( any_sel == 0 )
        goto B63;
      else
      {
        rr.y1 = 0x7fffffff;
        rr.x1 = 0x7fffffff;
        rr.y2 = 0x80000000;
        rr.x2 = 0x80000000;
        add_point_to_rect( &rr, c->x, c->y, corner_radius( c ) );
        add_point_to_rect( &rr, c2->x, c2->y, corner_radius( c2 ) );
        adir/*.1_1of4*/ = fdir == 18;
        ebp_112 = pull >> 31;
        if ( ( pull >> 31 ) & 255 )
        {
          edir = 36;
          if ( adir/*.1_1of4*/ == 0 )
            goto B72;
          else
          {
            ebp_84 = 0;
            sdir = 0;
            max = -1;
            done = pull;
            do
            {
              ebp_68 = ebp_84 << 2;
              li = 0;
              if ( cs[0]->n_lines > 0 )
              {
                do
                {
                  if ( esi == ecx )
                    edx = ( ( edi < edx ) << 2 ) + 36;
                  else
                  if ( edx == edi )
                  {
                  }
                  else
                  {
                    li++;
                  }
                  if ( edx == edir )
                  {
                    sdir = eax;
                    if ( max <= sdir && max != -1 )
                    {
                    }
                    else
                      max = sdir;
                  }
                }
                while ( li + 1 < *(int*)(*(int*)(ebp_68 + cs) + 36) );
              }
              ebp_84++;
            }
            while ( ebp_84 < cn );
            pull = done;
            switch ( edir )
            {
            case 36:
              rr.y1 = c->y - r1 - max;
              break;
            case 40:
              rr.y2 = max + r1 + c->y;
              break;
            case 17:
              rr.x1 = c->x - r1 - max;
              break;
            default:
              break;
            case 18:
              rr.x2 = max + r1 + c->x;
              break;
            }
            cb = corners;
            snap = 0;
            rr.x1 = ( rr.x1 - PCB->Bloat ) + -2;
            rr.x2 = PCB->Bloat + rr.x2 + 2;
            rr.y1 = ( rr.y1 + -2 ) - PCB->Bloat;
            rr.y2 = PCB->Bloat + rr.y2 + 2;
            if ( corners )
            {
              int sep;
              do
              {
                if ( cb != -559038737 && ( cb->net != c->net || cb->pad ) && ( rr.x1 <= cb->x || rr.x1 <= rr.x1 + cb->x ) && ( cb->x <= rr.x2 || cb->x - rr.x2 <= rr.x2 ) && ( rr.y1 <= ebp_68 || rr.y1 <= ebp_68 + rr.y1 ) && ( ebp_68 <= rr.y2 || ebp_68 - rr.y2 <= rr.y2 ) )
                {
                  switch ( edir )
                  {
                  case 36:
                    i = 0;
                    saw_auto = cb->x;
                    do
                    {
                      ebp_84 = i << 2;
                      ebp_68 = cb;
                      if ( cb == -1 || done == -1 || done == cb->x || layer_groupings[ cs[0] ] == layer_groupings[ cb ] )
                      {
                        done = cs[ ebp_84 >> 2 ];
                        ebp_84 = PCB->Bloat;
                        oc = ~PCB->Bloat;
                        saw_auto = cb->x;
                        if ( ( cs[ ebp_84 >> 2 ]->x + oc ) - ebp_68 <= saw_auto + corner_radius( cb ) && saw_auto - corner_radius( cb ) <= ebp_68 + ebp_84 + cs[ ebp_84 >> 2 ]->x + 1 && cb->y < done && ( oc + ( ( ( cb->y - done ) ^ ( ( cb->y - done ) >> 31 ) ) - ( ( cb->y - done ) >> 31 ) ) + -1 ) - corner_radius( cb ) - ebp_68 < max )
                        {
                          max = ( oc + ( ( ( cb->y - done ) ^ ( ( cb->y - done ) >> 31 ) ) - ( ( cb->y - done ) >> 31 ) ) + -1 ) - corner_radius( cb ) - ebp_68;
                          snap = 1;
                        }
                      }
                      i++;
                    }
                    while ( i + 1 < cn );
                    if ( ln )
                    {
                      ebp_68 = cb;
                      r1/*.1_1of4*/ = cb == -1;
                      i = 0;
                      done = ls;
                      oc = &PCB->ID;
                      do
                      {
                        if ( ( done == -1 || r1/*.1_1of4*/ || ebp_68 == done || layer_groupings[ done ] == layer_groupings[ ebp_68 ] ) && cs[0]->x < saw_auto && saw_auto < cs[1]->x && ( ( ~oc[2].pad - ( done / 2 ) ) + ( ( ( cb->y - *(int*)(ebp_84 + 12) ) ^ ( ( cb->y - *(int*)(ebp_84 + 12) ) >> 31 ) ) - ( ( cb->y - *(int*)(ebp_84 + 12) ) >> 31 ) ) + -1 ) - corner_radius( cb ) < max )
                        {
                          max = ( ( ~oc[2].pad - ( done / 2 ) ) + ( ( ( cb->y - *(int*)(ebp_84 + 12) ) ^ ( ( cb->y - *(int*)(ebp_84 + 12) ) >> 31 ) ) - ( ( cb->y - *(int*)(ebp_84 + 12) ) >> 31 ) ) + -1 ) - corner_radius( cb );
                          snap = 1;
                        }
                        i++;
                      }
                      while ( ln != i + 1 );
                    }
                    break;
                  case 40:
                    i = 0;
                    saw_auto = cb->x;
                    do
                    {
                      ebp_84 = i << 2;
                      ebp_68 = cb;
                      if ( ebp_68 == -1 || cs[ ln >> 2 ] == -1 || ebp_68 == cs[ ln >> 2 ] || layer_groupings[ o ] == layer_groupings[ ebp_68 ] )
                      {
                        saw_auto = cb->x;
                        x2 = cs[ ebp_84 >> 2 ];
                        done = PCB->Bloat;
                        ebp_84 = ~PCB->Bloat;
                        if ( ( cs[ ebp_84 >> 2 ]->x + ~PCB->Bloat ) - ebp_68 <= cb->x + corner_radius( cb ) && saw_auto - corner_radius( cb ) <= ebp_68 + cs[ ebp_84 >> 2 ]->x + done + 1 && x2 < cb->y && ( ebp_84 + ( ( ( cb->y - x2 ) ^ ( ( cb->y - x2 ) >> 31 ) ) - ( ( cb->y - x2 ) >> 31 ) ) + -1 ) - corner_radius( cb ) - ebp_68 < max )
                        {
                          max = sep;
                          snap = 1;
                        }
                      }
                      i++;
                    }
                    while ( i + 1 < cn );
                    if ( ln )
                    {
                      ebp_68 = cb;
                      r1/*.1_1of4*/ = cb == -1;
                      i = 0;
                      done = ls;
                      x2 = PCB;
                      do
                      {
                        if ( ( done == -1 || r1/*.1_1of4*/ || ebp_68 == x2 || layer_groupings[ done ] == layer_groupings[ ebp_68 ] ) && cs[0]->x < saw_auto && saw_auto < cs[1]->x && ( ( ~x2 - ( done / 2 ) ) + ( ( ( cb->y - *(int*)(ebp_84 + 12) ) ^ ( ( cb->y - *(int*)(ebp_84 + 12) ) >> 31 ) ) - ( ( cb->y - *(int*)(ebp_84 + 12) ) >> 31 ) ) + -1 ) - corner_radius( cb ) < max )
                        {
                          max = sep;
                          snap = 1;
                        }
                        i++;
                      }
                      while ( ln != i + 1 );
                    }
                    break;
                  case 17:
                    i = 0;
                    do
                    {
                      ebp_84 = i << 2;
                      if ( cb == -1 || i == -1 || done == i || layer_groupings[ cs[0] ] == layer_groupings[ cb ] )
                      {
                        oc = cs[ ebp_84 >> 2 ];
                        done = PCB->Bloat;
                        ebp_84 = ~PCB->Bloat;
                        ebp_68 = cb->y;
                        if ( ( cs[ ebp_84 >> 2 ]->y + ebp_84 ) - r2 <= ebp_68 + corner_radius( cb ) )
                        {
                          done = cs[ ebp_84 >> 2 ]->y + done + 1;
                          if ( ebp_68 - corner_radius( cb ) <= r2 + cs[ ebp_84 >> 2 ]->y + done + 1 )
                          {
                            done = cb->x;
                            if ( done < oc->x && ( ebp_84 + ( ( ( done - oc->x ) ^ ( ( done - oc->x ) >> 31 ) ) - ( ( done - oc->x ) >> 31 ) ) + -1 ) - corner_radius( cb ) - r2 < max )
                            {
                              max = sep;
                              snap = 1;
                            }
                          }
                        }
                      }
                      i++;
                    }
                    while ( i + 1 < cn );
                    if ( ln )
                    {
                      r1/*.1_1of4*/ = cb == -1;
                      i = 0;
                      done = ls;
                      oc = &PCB->ID;
                      saw_auto = cb;
                      do
                      {
                        if ( ( done == -1 || r1/*.1_1of4*/ || saw_auto == ( ebp_84 + ( ( ( done - oc->x ) ^ ( ( done - oc->x ) >> 31 ) ) - ( ( done - oc->x ) >> 31 ) ) + -1 ) - corner_radius( cb ) - r2 || layer_groupings[ done ] == layer_groupings[ saw_auto ] ) && cs[0]->y < ebp_68 && ebp_68 < cs[1]->y && ( ( ~oc[2].pad - ( done / 2 ) ) + ( ( ( cb->x - *(int*)(ebp_84 + 8) ) ^ ( ( cb->x - *(int*)(ebp_84 + 8) ) >> 31 ) ) - ( ( cb->x - *(int*)(ebp_84 + 8) ) >> 31 ) ) + -1 ) - corner_radius( cb ) < max )
                        {
                          max = ( ( ~oc[2].pad - ( done / 2 ) ) + ( ( ( cb->x - *(int*)(ebp_84 + 8) ) ^ ( ( cb->x - *(int*)(ebp_84 + 8) ) >> 31 ) ) - ( ( cb->x - *(int*)(ebp_84 + 8) ) >> 31 ) ) + -1 ) - corner_radius( cb );
                          snap = 1;
                        }
                        i++;
                      }
                      while ( ln != i + 1 );
                    }
                    break;
                  case 18:
                    i = 0;
                    do
                    {
                      ebp_84 = i << 2;
                      if ( cb == -1 || i == -1 || l->e == i || layer_groupings[ cs[0] ] == layer_groupings[ cb ] )
                      {
                        oc = cs[ ebp_84 >> 2 ];
                        done = PCB->Bloat;
                        ebp_84 = ~PCB->Bloat;
                        ebp_68 = cb->y;
                        if ( ( cs[ ebp_84 >> 2 ]->y + ebp_84 ) - r2 <= ebp_68 + corner_radius( cb ) )
                        {
                          done = cs[ ebp_84 >> 2 ]->y + done + 1;
                          if ( ebp_68 - corner_radius( cb ) <= r2 + cs[ ebp_84 >> 2 ]->y + done + 1 )
                          {
                            done = cb->x;
                            if ( oc->x < done && ( ebp_84 + ( ( ( done - oc->x ) ^ ( ( done - oc->x ) >> 31 ) ) - ( ( done - oc->x ) >> 31 ) ) + -1 ) - corner_radius( cb ) - r2 < max )
                            {
                              max = sep;
                              snap = 1;
                            }
                          }
                        }
                      }
                      i++;
                    }
                    while ( i + 1 < cn );
                    if ( ln )
                    {
                      r1/*.1_1of4*/ = cb == -1;
                      i = 0;
                      done = ls;
                      oc = &PCB->ID;
                      saw_auto = cb;
                      do
                      {
                        if ( ( done == -1 || r1/*.1_1of4*/ || saw_auto == ( ebp_84 + ( ( ( done - oc->x ) ^ ( ( done - oc->x ) >> 31 ) ) - ( ( done - oc->x ) >> 31 ) ) + -1 ) - corner_radius( cb ) - r2 || layer_groupings[ done ] == layer_groupings[ saw_auto ] ) && cs[0]->y < ebp_68 && ebp_68 < cs[1]->y && ( ( ~oc[2].pad - ( *(int*)(*(int*)(done + 16) + 36) / 2 ) ) + ( ( ( cb->x - *(int*)(ebp_84 + 8) ) ^ ( ( cb->x - *(int*)(ebp_84 + 8) ) >> 31 ) ) - ( ( cb->x - *(int*)(ebp_84 + 8) ) >> 31 ) ) + -1 ) - corner_radius( cb ) < max )
                        {
                          max = ( ( ~oc[2].pad - ( done / 2 ) ) + ( ( ( cb->x - *(int*)(ebp_84 + 8) ) ^ ( ( cb->x - *(int*)(ebp_84 + 8) ) >> 31 ) ) - ( ( cb->x - *(int*)(ebp_84 + 8) ) >> 31 ) ) + -1 ) - corner_radius( cb );
                          snap = 1;
                        }
                        i++;
                      }
                      while ( ln != i + 1 );
                    }
                    break;
                  }
                }
                cb = cb->next;
              }
              while ( cb->next );
              pull = ebp_124;
            }
            l = &lines;
            if ( lines )
            {
              ln = pull;
            {
              do
              {
                int o, x1, x2, y1, y2;
                if ( l != -559038737 && l->s->net != c->net )
                {
                  x1 = l->e->x;
                  y1 = l->e->y;
                  done = l->s->y;
                  if ( l->e->x == l->s->x )
                    o = ( ( y1 < o ) << 2 ) + 36;
                  else
                  {
                    o = 240;
                    if ( y1 == done )
                    {
                      o = 0;
                      o/*.1_1of4*/ = x1 < ebp_52;
                      o = ( x1 < ebp_52 ) + 17;
                    }
                  }
                  if ( adir/*.1_1of4*/ )
                  {
                    if ( o != 40 && o != 36 )
                    {
                      if ( ebp_52 < x1 )
                      {
                        r1 = y1;
                        x2 = x1;
                      }
                      else
                      {
                        done = y1;
                        x1 = ebp_52;
                        r1 = done;
                        x2 = ebp_52;
                      }
                      if ( adir/*.1_1of4*/ )
                      {
                        if ( c->x <= x2 && ebp_52 <= c2->x )
                        {
                          switch ( edir )
                          {
                          case 36:
                            if ( done <= c->y || r1 <= c->y )
                            {
                              if ( done < r1 )
                                done = r1;
                            }
                            break;
                          case 40:
                            if ( c->y <= done || c->y <= r1 )
                            {
                              if ( r1 < done )
                                done = r1;
                            }
                            break;
                          case 17:
                            if ( x2 <= c->x || x2 <= c->x )
                            {
                              if ( x2 < x2 )
                              {
                              }
                            }
                            break;
                          case 18:
                            if ( c->x <= x2 || c->x <= x2 )
                            {
                              if ( x2 < x2 )
                              {
                              }
                            }
                            break;
                          default:
                            if ( ccdep2 < ccdep1 )
                            {
                              if ( edir == 36 )
                              {
                              }
                              else
                              {
                                if ( edir == 40 )
                                {
                                }
                              }
                            }
                            else
                            {
                              ebp_84 = l->line->Thickness;
                              ebp_68 = PCB->Bloat;
                              corner_radius( cs[0] );
                            while ( "no latch" );
                          }
                          break;
                        }
                        i = 0;
                        do
                        {
                          ebp_84 = l->line->Thickness;
                          ebp_68 = PCB->Bloat;
                          corner_radius( cs[0] );
                          if ( adir/*.1_1of4*/ )
                          {
                            if ( x2 < cs[ i ]->x || cs[ i ]->x < x2 )
                            {
                              i++;
                            }
                          }
                          else
                          if ( fdir != 40 )
                          {
                          }
                          else
                          if ( r1 < cs[0]->y || cs[0]->y < done )
                            continue;
                          if ( l != -1 && l->s != -1 && l->s != cb->layer && layer_groupings[ l->s ] != layer_groupings[ cb->layer ] )
                          {
                          }
                          else
                          {
                            switch ( edir )
                            {
                            default:
                              len = 0;
                              break;
                            case 18:
                              len = x2 - c->x;
                              break;
                            case 17:
                              len = c->x - x2;
                              break;
                            case 40:
                              len = done - c->y;
                              break;
                            case 36:
                              len = c->y - done;
                              break;
                            }
                            len = ( len - corner_radius( cs[0] ) - len ) + ( 0 - ebp_68 - ebp_84 ) + -2;
                            if ( ( len - corner_radius( cs[0] ) - len ) + ( 0 - ebp_68 - ebp_84 ) + -2 <= 0 )
                            {
                              break;
                            }
                            len = max <= len ? len : max;
                            max = max <= len ? len : max;
                          }
                        }
                        while ( cn <= i + 1 );
                      }
                    }
                  }
                }
                else
                {
                  if ( fdir == 40 )
                  {
                    if ( o + -17 + -17 > 1 )
                    {
                      if ( done < y1 )
                      {
                        r1 = y1;
                        x2 = x1;
                        if ( c->y <= r1 && done <= c2->y )
                          continue;
                      }
                    }
                  }
                  ecx = l->s->x;
                  r1 = done = y1;
                  x2 = l->s->x;
                }
                if ( fdir == 40 )
                {
                }
              }
              l = l->next;
            }
            while ( l->next );
            pull = ln;
          }
          }
          r1 = pull;
          do
          {
            ebp_68 = 0;
            done = 1;
            do
            {
              li = 0;
              if ( cs[0]->n_lines > 0 )
              {
                ln = ebp_68 << 2;
                do
                {
                  x2 = other_corner( &cs[ ln >> 2 ]->lines[0], cs[ ln >> 2 ] );
                  if ( cs[ ln >> 2 ] != l->s )
                  {
                    c2 = &l->e->x;
                    ebp_84 = l->e->y;
                  }
                  else
                  {
                    ebp_84 = cs[ ln >> 2 ]->y;
                    c2 = &cs[ ln >> 2 ]->x;
                  }
                  if ( l->s->x == c2 )
                    l->s->y = ( ( ebp_84 < l->s->y ) << 2 ) + 36;
                  else
                  if ( ebp_84 == o )
                  {
                  }
                  else
                  {
                    li++;
                  }
                  if ( edir == ( ( ebp_84 < l->s->y ) << 2 ) + 36 )
                  {
                    sdir = line_length( l );
                    if ( x2 && cs[ ln >> 2 ]->via )
                    {
                    }
                    else
                    if ( l->s->pin || l->s->pad || l->s->via )
                    {
                      if ( l->e->pin || done || l->e->via )
                      {
                        if ( sdir == max )
                          sdir = max;
                      }
                      else
                      {
                      }
                    }
                    else
                    {
                    }
                    sdir += -2 - PCB->Bloat;
                    sdir -= corner_radius( line_length( l ) );
                    sdir -= corner_radius( l->e );
                    if ( max <= sdir )
                    {
                    }
                    else
                    {
                      done = 0;
                      max = sdir;
                    }
                  }
                }
                while ( li + 1 < cs[ ln >> 2 ]->n_lines );
              }
              ebp_68++;
            }
            while ( ebp_68 < cn );
          }
          while ( done == 0 );
          pull = r1;
          if ( max <= 0 )
          {
            break;
          }
          switch ( edir )
          {
          case 36:
            sdir = c->y - max;
            if ( snap )
            {
              if ( Settings.Grid < (double)( max ) )
              {
                if ( ebp_112 == 0 )
                  rr.x1/*.1_1of4*/ = '';
                else
                {
                  rr.x1/*.1_1of4*/ = '';
                  sdir = (int)( (double)( sdir ) + ( Settings.Grid - 1.000000000000 ) );
                }
                sdir -= __MOD(sdir,(int)( Settings.Grid ));
              }
              else
              {
              }
            }
            if ( adir/*.1_1of4*/ )
            {
              if ( sdir == l->e->x )
              {
                break;
              }
            }
            else
            if ( fdir != 40 )
            {
            }
            else
            if ( sdir == cs[0]->x )
            {
              break;
            }
            i = 0;
            while ( 1 )
            {
              if ( adir/*.1_1of4*/ )
                move_corner( *(int*)(0 + 4 + cs), *(int*)(*(int*)(0 + 4 + cs) + 8), sdir );
              else
                move_corner( *(int*)(0 + cs), sdir, *(int*)(*(int*)(0 + cs) + 12) );
              i++;
              if ( cn <= i + 1 )
              {
                return pull * ( sdir - *(int*)(*(int*)(cb->layer + l->e->x) + 12) );
              }
            }
            break;
          case 40:
            sdir = max + c->y;
            break;
          case 17:
            sdir = c->x - max;
            break;
          case 18:
            sdir = max + c->x;
            break;
          default:
            break;
          }
        }
      }
B72:;
      if ( pull > 0 )
      {
        edir = 40;
        if ( adir/*.1_1of4*/ == 0 )
          goto B74;
      }
B74:;
      if ( ebp_112 )
      {
        edir = 17;
        if ( ( fdir == 40 ) & 255 )
          continue;
      }
      if ( (unsigned char)( pull > 0 ) & 255 )
      {
        edir = 18;
        if ( ( fdir == 40 ) & 255 )
          continue;
      }
      edir = 0;
    }
B63:;
    if ( saw_auto || autorouted_only == 0 )
    {
      rr.y1 = 0x7fffffff;
      rr.x1 = 0x7fffffff;
      rr.y2 = 0x80000000;
      rr.x2 = 0x80000000;
      add_point_to_rect( &rr, c->x, c->y, corner_radius( c ) );
      add_point_to_rect( &rr, c2->x, c2->y, corner_radius( c2 ) );
      adir/*.1_1of4*/ = fdir == 18;
      ebp_112 = pull >> 31;
    }
  }
}
else
{
  cm = ebp_112;
  cs = (corner_s**)realloc( cs, ebp_112 * 44 );
  while ( 1 )
  {
    cn = ln + 1;
  }
}
}
djopt.c:1665:0x80872AE: Endless loop
int orthopull( void )
{
  int eax;
  int any_sel;
  corner_s *c = corners;
  int rv = 0;
  while ( c )
  {
    if ( c == -559038737 )
    {
    }
    if ( c->pin == 0 && c->pad == 0 )
    {
      next_corner = c;
      rv += orthopull_1( c, 18, 17, any_sel );
      if ( next_corner != c )
      {
        c = next_corner;
      }
      else
      {
        c = next_corner;
        rv += orthopull_1( c, 40, 36, any_sel );
        if ( next_corner != next_corner )
          continue;
      }
    }
    c = c->next;
  }
  if ( rv )
  {
    __printf_chk( 1, "orthopull: %d mils saved\n", rv / 100 );
  }
  return rv;
}
int debumpify( void )
{
  int eax;
  int ecx;
  int edx;
  int ebp_88;
  int rv = 0;
  int any_selected;
  line_s *l = &lines, *l1, *l2;
  corner_s *c, *c1, *c2;
  rect_s rr;
  rect_s rp;
  int o, o1, o2, step, w;
  if ( lines )
  {
    while ( l == -559038737 || l->line == 0 || ( ( *(char*)(l->line + 20) & 64 ) & 255 ) == 0 )
    {
      l = l->next;
      rv = 0;
      do
      {
        if ( l != -559038737 && l->line )
        {
          if ( any_selected )
          {
            if ( ( ( *(char*)(l->line + 20) & 64 ) & 255 ) == 0 )
            {
              l = l->next;
              if ( l->next == 0 )
              {
                break;
              }
            }
          }
          else
          if ( autorouted_only == 0 || l->line->Flags.f/*.1_1of4*/ < 0 )
            goto B15;
B15:;
          if ( l->s->pin == 0 && l->s->pad == 0 )
          {
            w = l->e;
            if ( l->e->pin == 0 && l->e->pad == 0 )
            {
              c1 = &l->e->x;
              ebp_88 = l->s->x;
              if ( c1 == l->s->x )
                c2 = ( ( w < l->s->y ) << 2 ) + 36;
              else
              if ( l->s->y == w )
                c2 = ( c1 < ebp_88 ) + 17;
              if ( l->s->via == 0 )
              {
                c = 0;
                o1 = 0;
                while ( o1 < l->s->n_lines )
                {
                  l1 = &l->s->lines[0];
                  if ( l == l->s->lines[0] )
                    l1 = &c->layer;
                  else
                  if ( c )
                    goto B10;
                  c = &l1->layer;
                  o1++;
                }
                if ( c )
                {
                  o1 = c->x;
                  if ( ( c->x == l->s ? c->y : o1 ) == ebp_88 )
                    o1 = ( ( c->y < ( c->x == l2 ? c->y : o1 ) ) << 2 ) + 36;
                  else
                  {
                    o1 = 240;
                    if ( c->y == ( c->x == l->s ? c->y : o1 ) )
                      o1 = ( ebp_88 < ( c->x == l2 ? c->y : o1 ) ) + 17;
                  }
                  if ( w == 0 )
                  {
                    ebp_88 = 0;
                    l1 = &any_selected;
                    l2 = 0;
                    while ( ebp_88 < w )
                    {
                      l2 = &w;
                      if ( l == w )
                        l2 = &l2->layer;
                      else
                      if ( l2->layer )
                        any_selected = l1;
                      ebp_88++;
                      l2 = &l2->layer;
                    }
                    any_selected = l1;
                    if ( l2 )
                    {
                      if ( w == l2->s )
                      {
                        w = l2->e->x;
                        ebp_88 = l2->e->y;
                      }
                      else
                      {
                        c1 = &l2->e->x;
                        w = l2->s->x;
                        ebp_88 = l2->s->y;
                      }
                      if ( w == c1 )
                      {
                        o2 = 0;
                        o2/*.1_1of4*/ = l2->e->y < ebp_88;
                        o2 = ( ( l2->e->y < ebp_88 ) << 2 ) + 36;
                      }
                      else
                      {
                        o2 = 240;
                        if ( l2->e->y == ebp_88 )
                          o2 = ( c1 < w ) + 17;
                      }
                      if ( o2 == o1 && ( ( (unsigned char)( o1 ^ c2 ) & 240 ) & 255 ) && o1 != 240 )
                      {
                        c2 = *(int*)(&eax->n_lines);
                        rr.y1 = 0x7fffffff;
                        rr.x1 = 0x7fffffff;
                        w = PCB->Bloat;
                        rr.y2 = 0x80000000;
                        rr.x2 = 0x80000000;
                        w = w + ( *(int*)(&eax->n_lines) / 2 ) + 2;
                        add_line_to_rect( &rr, &c->layer );
                        add_line_to_rect( &rr, l2 );
                        c2 = &rr.x1;
                        c1 = &l->s->x;
                        if ( l->s->x != c2 && l->e->x != c2 )
                          rr.x1 = c2 - w;
                        c2 = &rr.x2;
                        if ( rr.x2 != c1 && l->e->x != rr.x2 )
                          rr.x2 += w;
                        c2 = &rr.y1;
                        c1 = &l->s->y;
                        if ( l->s->y != rr.y1 && l->e->y != rr.y1 )
                          rr.y1 -= w;
                        c2 = &rr.y2;
                        if ( rr.y2 != c1 && l->e->y != rr.y2 )
                          rr.y2 += w;
                        c1 = other_corner( &c->layer, l->s );
                        rp.y1 = 0x7fffffff;
                        rp.x1 = 0x7fffffff;
                        rp.y2 = 0x80000000;
                        rp.x2 = 0x80000000;
                        c = corners;
                        c2 = other_corner( l2, l->e );
                        for ( ; c;  )
                        {
                          if ( c->layer != -559038737 && l->s->net != c->net && ( l->s->layer == -1 || other_corner( l2, l->e ) == -1 || rr.y2 == other_corner( l2, l->e ) || layer_groupings[ c->layer ] == layer_groupings[ rr.y2 ] ) )
                            add_corner_to_rect_if( &rp, c, &rr );
                          c = &c->next;
                        }
                        if ( rp.x1 == 2147483647 )
                        {
                          rp.x1 = rr.x2;
                          rp.x2 = rr.x1;
                          rp.y1 = rr.y2;
                          rp.y2 = rr.y1;
                        }
                        switch ( o1 )
                        {
                        case 17:
                          ebp_88 = 0;
                          c = l->s;
                          o1 = l->s->x;
                          step = l->s->x - rp.x2 - w;
                          if ( l->s->x - rp.x2 - w > 0 )
                          {
                            rr.x1/*.1_1of4*/ = '';
                            w = (int)( Settings.Grid );
                            step -= __MOD(step,w);
                            ebp_88 = step - ( __MOD(step,w) );
                          }
                          step = ebp_88 < ( o1 - c1->x < o1 - c2->x ? o1 - c2->x : o1 - c1->x ) ? o1 - c1->x < o1 - c2->x ? o1 - c2->x : o1 - c1->x : ebp_88;
                          w = ebp_88 < ( o1 - c1->x < o1 - c2->x ? o1 - c2->x : o1 - c1->x ) ? o1 - c1->x < o1 - c2->x ? o1 - c2->x : o1 - c1->x : ebp_88;
                          if ( ( ebp_88 < ( o1 - c1->x < o1 - c2->x ? o1 - c2->x : o1 - c1->x ) ? o1 - c1->x < o1 - c2->x ? o1 - c2->x : o1 - c1->x : ebp_88 ) <= 0 )
                            goto B10;
                          else
                          {
                            move_corner( c, o1 - w, c->y );
                            move_corner( l->e, l->e->x - w, l->e->y );
                            rv += w;
                          }
                          break;
                        case 18:
                          c = l->s;
                          o1 = l->s->x;
                          step = rp.x1 - o1 - w;
                          w = 0;
                          if ( rp.x1 - o1 - w > 0 )
                          {
                            rr.x1/*.1_1of4*/ = '';
                            w = (int)( Settings.Grid );
                            step -= __MOD(step,w);
                            w = step - ( __MOD(step,w) );
                          }
                          step = w < ( c1->x - o1 < c2->x - o1 ? c2->x - o1 : c1->x - o1 ) ? c1->x - o1 < c2->x - o1 ? c2->x - o1 : c1->x - o1 : w;
                          w = w < ( c1->x - o1 < c2->x - o1 ? c2->x - o1 : c1->x - o1 ) ? c1->x - o1 < c2->x - o1 ? c2->x - o1 : c1->x - o1 : w;
                          if ( ( w < ( c1->x - o1 < c2->x - o1 ? c2->x - o1 : c1->x - o1 ) ? c1->x - o1 < c2->x - o1 ? c2->x - o1 : c1->x - o1 : w ) <= 0 )
                            goto B10;
                          else
                          {
                            move_corner( c, w + o1, c->y );
                            move_corner( l->e, l->e->x + w, l->e->y );
                            rv += w;
                          }
                          break;
                        case 36:
                          if ( rp.y2 == -2147483648 )
                            rp.y2 = rr.y1;
                          o1 = l->s->y;
                          c2 = l->s->y - c2->y;
                          c = o1 - c1->y;
                          step = o1 - c1->y <= c2 ? c2 : c;
                          step = ( o1 - c1->y <= c2 ? c2 : c ) <= o1 - step - w ? o1 - step - w : o1 - c1->y <= c2 ? c2 : c;
                          w = ( o1 - c1->y <= c2 ? c2 : c ) <= o1 - step - w ? o1 - step - w : o1 - c1->y <= c2 ? c2 : c;
                          if ( c2 != ( ( o1 - c1->y <= c2 ? c2 : c ) <= o1 - step - w ? o1 - step - w : o1 - c1->y <= c2 ? c2 : c ) && step != c )
                          {
                            if ( step > 0 )
                            {
                              rr.x1/*.1_1of4*/ = '';
                              w -= __MOD(w,(int)( Settings.Grid ));
                            }
                          }
                          if ( w > 0 )
                          {
                            move_corner( l->s, l->s->x, o1 - w );
                            move_corner( l->e, l->e->x, l->e->y - w );
                            rv += w;
                          }
                          break;
                        case 40:
                          c = l->s;
                          o1 = l->s->y;
                          step = rp.y1 - o1 - w;
                          w = 0;
                          if ( rp.y1 - o1 - w > 0 )
                          {
                            rr.x1/*.1_1of4*/ = '';
                            w = (int)( Settings.Grid );
                            step -= __MOD(step,w);
                            w = step - ( __MOD(step,w) );
                          }
                          step = w < ( c1->y - o1 < c2->y - o1 ? c2->y - o1 : c1->y - o1 ) ? c1->y - o1 < c2->y - o1 ? c2->y - o1 : c1->y - o1 : w;
                          w = w < ( c1->y - o1 < c2->y - o1 ? c2->y - o1 : c1->y - o1 ) ? c1->y - o1 < c2->y - o1 ? c2->y - o1 : c1->y - o1 : w;
                          if ( ( w < ( c1->y - o1 < c2->y - o1 ? c2->y - o1 : c1->y - o1 ) ? c1->y - o1 < c2->y - o1 ? c2->y - o1 : c1->y - o1 : w ) <= 0 )
                            goto B10;
                          else
                          {
                            move_corner( c, c->x, o1 + ( w < ( c1->y - o1 < c2->y - o1 ? c2->y - o1 : c1->y - o1 ) ? c1->y - o1 < c2->y - o1 ? c2->y - o1 : c1->y - o1 : w ) );
                            move_corner( l->e, l->e->x, l->e->y + w );
                            rv += w;
                          }
                          break;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
B10:;
        l = l->next;
      }
      while ( l->next );
    }
    any_selected = 1;
    rv = 0;
  }
  rv += simple_optimizations( );
  if ( rv )
  {
    __printf_chk( 1, "debumpify: %d mils saved\n", rv / 50 );
  }
  return rv;
}
int simple_corner( corner_s *c )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  int o1, o2;
  return c->pad == 0 && c->pin == 0 && c->via == 0 && c->n_lines == 2 ? 0 : ( 0 & 240 ) != 240;
}
int unjaggy( void )
{
  int eax;
  int ecx;
  int edx;
  int ebp_96;
  int i, r = 0, j;
  i = 0;
  do
  {
    ebp_96 = 0;
    if ( corners )
    {
      do
      {
        if ( corners->layer != -559038737 && simple_corner( corners ) && corners->lines[0]->line && corners->lines[1]->line )
        {
          if ( 0 )
          {
            if ( ( ( *(char*)(corners->lines[0]->line + 20) & 64 ) & 255 ) || ( ( *(char*)(corners->lines[1]->line + 20) & 64 ) & 255 ) )
              goto B21;
          }
          else
          if ( autorouted_only && corners->lines[0]->line->Flags.f/*.1_1of4*/ >= 0 && *(char*)(edx + 20) >= 0 )
          {
            if ( corners->next )
              continue;
          }
B21:;
          if ( edx == ecx )
          {
          }
          else
          if ( esi == eax )
          {
          }
          if ( edx == eax )
          {
          }
          else
          if ( edi == ecx )
          {
          }
          if ( eax || esi )
          {
            if ( *(int*)other_corner( simple_corner( corners ), &corners->next )/*.36*/ > 0 )
            {
              do
              {
                if ( ecx != *(int*)(edi + ( eax << 2 )) && ecx == ebx )
                {
                  if ( ebp_124 == ebp_68 )
                  {
                  }
                  else
                  if ( ebp_88 == ebp_72 )
                  {
                  }
                  if ( esi != eax + 1 )
                    continue;
                }
                else
                {
                }
              }
              while ( esi != eax + 1 );
            }
            if ( *(int*)(ebp_80 + 36) > 0 )
            {
              do
              {
                if ( ecx != *(int*)(edi + ( eax << 2 )) && ecx == ebx )
                {
                  if ( ebp_112 == ebp_64 )
                  {
                  }
                  else
                  if ( ebp_72 == ebp_68 )
                  {
                  }
                  if ( esi != eax + 1 )
                    continue;
                }
                else
                {
                }
              }
              while ( esi != eax + 1 );
            }
            if ( ebp_60 == 0 )
            {
            }
            else
            {
              add_line_to_rect( ebp_40, &corners->lines[0] );
              add_line_to_rect( ebp_40, *(int*)(*(int*)(ebx + 40) + 4) );
              if ( corners )
              {
                do
                {
                  if ( corners->next != -559038737 && *(int*)(esi + 16) != *(int*)(ebx + 16) && ( ebx == -1 || 2147483647 == -1 || edx == eax || layer_groupings[ eax ] == layer_groupings[ edx ] ) )
                  {
                    add_corner_to_rect_if( ebp_56, &corners->next, ebp_40 );
                    if ( corners->next )
                      continue;
                  }
                  else
                }
                while ( corners->next );
                if ( 0x7fffffff > 0x80000000 )
                  goto B92;
              }
B92:;
              if ( *(int*)(ebx + 8) == *(int*)(ebp_76 + 8) )
                move_corner( &ebx, *(int*)(ebp_80 + 8), *(int*)(eax + 12) );
              else
                move_corner( &ebx, edx, *(int*)(ebp_80 + 12) );
              ebp_96++;
              if ( *(int*)(ebx + 4) )
                continue;
            }
          }
        }
      }
      while ( *(int*)(ebx + 4) );
    }
    j += ebp_96;
    if ( j == 0 )
      break;
    else
    {
      i++;
      r += j;
    }
  }
  while ( i != 100 );
  if ( r )
  {
    __printf_chk( 1, "%d unjagg%s    \n", r, r == 1 ? "ies" : "y" );
  }
  return r;
}
int vianudge( void )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  double fp7;
#error unstructured control flow
}
int viatrim( void )
{
  int eax;
  int ecx;
  int edx;
  line_s *l = &lines, *l2;
  int i, rv, vrm;
  int any_sel;
  if ( lines == 0 )
  {
    rv = 0;
    vrm = simple_optimizations( );
  }
  l = &l->layer;
  do
  {
    if ( l != -559038737 && l->line && ( ( *(char*)(l->line + 20) & 64 ) & 255 ) )
      any_sel = 1;
    else
    {
      l = l->next;
    }
    rv = 0;
  {
    do
    {
      rect_s r;
      /* phantom */ int my_layer, other_layer;
      if ( l != -559038737 && l->s->via && l->e->via )
      {
        if ( any_sel )
        {
          if ( ( ( l->line->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 )
          {
            l = l->next;
            if ( l->next )
              continue;
            else
              break;
          }
        }
        else
        if ( autorouted_only == 0 || l->line->Flags.f/*.1_1of4*/ < 0 )
          goto B16;
B16:;
        if ( l->s->n_lines > 0 )
        {
          other_layer = -1;
          i = 0;
          while ( 1 )
          {
            if ( l->s->lines[0] != l )
            {
              if ( other_layer != -1 )
              {
                other_layer = *(int*)(*(int*)(edi + ( i << 2 )));
                if ( other_layer != *(int*)(*(int*)(edi + ( i << 2 ))) )
                  goto B18;
              }
              else
              {
                i++;
                other_layer = l->s->lines[0];
                if ( i + 1 < l->s->n_lines )
                  continue;
                else
                {
                  if ( other_layer == -1 )
                    goto B18;
                  else
                  {
                    r.y1 = 0x7fffffff;
                    r.x1 = 0x7fffffff;
                    r.y2 = 0x80000000;
                    r.x2 = 0x80000000;
                    add_point_to_rect( &r, l->s->x, l->s->y, l->line->Thickness );
                    add_point_to_rect( &r, l->e->x, l->e->y, l->line->Thickness );
                    l2 = &lines;
                    if ( lines )
                    {
                      do
                      {
                        if ( l2 != -559038737 && l2->s->net != l->s->net && other_layer == l2 )
                        {
                          add_point_to_rect( ebp_56, l2->s->x, l2->s->y, l2->line->Thickness / 2 );
                          add_point_to_rect( ebp_56, l2->e->x, l2->e->y, l2->line->Thickness / 2 );
                          if ( r.x1 < r.x2 && r.y1 < r.y2 )
                          {
                          }
                        }
                        l2 = l2->next;
                      }
                      while ( l2->next );
                      other_layer = other_layer;
                    }
                    if ( other_layer != l )
                    {
                      if ( lines )
                      {
                        do
                        {
                          if ( lines != -559038737 )
                          {
                            if ( PCB->Data->Layer[ l ].Line[ PCB->Data->Layer[ l ].LineN + -1 ].BoundingBox.X1 == lines )
                              lines = l->line;
                            if ( PCB->Data->Layer[ other_layer ].Line <= PCB->Data->RatMax && ( other_layer + 1 ) )
                              lines = ( ( PCB->Data->RatMax - ( other_layer + 1 ) ) & PCB->Data->Layer[ other_layer ].Line ) + -8;
                          }
                        }
                        while ( lines );
                      }
                      l = &other_layer;
                      l->line = (LineType*)MoveObjectToLayer( 4, PCB->Data + ( l * 92 ) + 76, (void*)l->line, 0, PCB->Data + ( other_layer * 92 ) + 76, PCB->Data->Layer[ other_layer ].Line );
                      rv++;
                      l = l->next;
                      if ( l->next )
                        continue;
                      else
                      {
                        vrm = simple_optimizations( );
                        if ( rv )
                        {
                          __printf_chk( 1, "viatrim: %d traces moved, %d vias removed\n", rv, simple_optimizations( ) );
                          break;
                        }
                      }
                    }
                  }
                }
              }
            }
            i++;
            if ( i + 1 < l->s->n_lines )
              continue;
            else
            {
            }
          }
        }
B18:;
        if ( l->e->n_lines > 0 )
        {
          other_layer = -1;
          i = 0;
          while ( l == l->e->lines[0] )
          {
            i++;
            if ( i + 1 < l->e->n_lines )
              continue;
          }
          if ( other_layer == -1 )
            other_layer = l->line->BoundingBox.X1;
          else
          {
            other_layer = l->e->lines[0];
            if ( l->e->lines[0] != other_layer )
              goto B10;
          }
        }
        else
          other_layer = -1;
      }
B10:;
      l = l->next;
    }
    while ( l->next );
  }
  }
  while ( l->next );
  any_sel = 0;
  rv = 0;
  return vrm + rv;
}
void classify_corner( corner_s *c, int this_net )
{
  int i;
  if ( c->net != this_net )
  {
    c->net = this_net;
    if ( c->n_lines > 0 )
    {
      i = 0;
      do
      {
        i++;
        other_corner( c->lines[0], c );
        classify_corner( c, this_net );
      }
      while ( c->n_lines <= i );
    }
  }
  return;
}
int connect_corners( corner_s *c1, corner_s *c2 )
{
  int ecx;
  /* phantom */ int layer;
  static line_s *ex;
  /* phantom */ LineType *example;
  while ( c1->n_lines <= 0 )
  {
    if ( 0 == 1 )
    {
      if ( c1->pin == 0 && c1->pad == 0 && c1->via == 0 && c1->n_lines == 1 )
      {
        int nx, ny;
        if ( c1->lines[0]->e->x == c1->lines[0]->s->x )
        {
          nx = c1->x;
          ny = c2->y;
          if ( c2->x != c1->x )
          {
            move_corner( c1, nx, ny );
            new_line( c1, c2, *(int*)(0), *(int*)(16) );
            break;
          }
        }
        else
        {
          ny = c1->y;
          nx = c2->x;
          if ( c2->y != c1->y )
          {
            move_corner( c1, nx, ny );
            new_line( c1, c2, *(int*)(0), *(int*)(16) );
            break;
          }
        }
        move_corner( c1, nx, ny );
        break;
      }
      else
      {
        corner_s *nc = find_corner( c1->x, c2->y, ex );
        new_line( c1, nc, ex, ex->line );
        new_line( nc, c2, ex, ex->line );
        break;
      }
    }
    else
    {
      c1 = c2;
    }
  }
  do
  {
    ex = *(int*)(ebp_56 + ( eax << 2 ));
    if ( ebp_52 != ex->line && ( *(int*)(*ebp_28) == -1 || ex == -1 || ex == *(int*)(*ebp_28) || layer_groupings[ ex ] == layer_groupings[ *(int*)(*ebp_28) ] ) )
      c1 = c1;
    else
  }
  while ( 0 + 1 + 1 < c1->n_lines );
  c1 = c1;
}
int ActionDJopt( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  int ebp_212;
  int ebp_208;
  int ebp_200;
  int ebp_196;
  char *arg = 0;
  int layn, saved;
  corner_s *c;
  if ( argc > 0 )
    arg = argv[0];
  hid_action( "Busy" );
  lines = 0;
  corners = 0;
  component_layer = -1;
  ebp_208 = PCB;
  solder_layer = -1;
  if ( PCB->Data->LayerN > 0 )
  {
    do
    {
      layer_type[ 0 ] = 0;
      layer_groupings[ 0 ] = 0;
    }
    while ( 0 + 1 + 1 < *(int*)(*(int*)(ebp_208 + 8716) + 24) );
    if ( *(int*)(*(int*)(ebp_208 + 8716) + 24) > 0 )
    {
      layn = 0;
      ebp_200 = component_layer;
      while ( 1 )
      {
        if ( *(int*)(ebp_208 + ( layn << 2 ) + 7380) )
        {
          ebp_196 = ebp_212 + 1;
          saved = *(int*)(*(int*)(*(int*)(edi + 8716) + 24) + 8716);
          do
          {
          }
          while ( *(int*)(ebp_208 + ( layn << 2 ) + 7380) != 0 + 1 + 1 );
          while ( *(int*)(*(int*)(ebp_208 + 8716) + 24) <= *(int*)(ebp_208 + ( layn * 72 ) + 7444) )
          {
            if ( 0 + 1 + 1 < *(int*)(ebp_208 + ( layn << 2 ) + 7380) )
              continue;
          }
          layer_type[ *(int*)(ebp_208 + ( layn * 72 ) + 7448) ] = ebp_192 | layer_type[ eax ];
          layer_groupings[ *(int*)(ebp_208 + ( layn * 72 ) + 7444) ] = layn;
        }
        else
        {
        }
        layn++;
        if ( *(int*)(*(int*)(ebp_208 + 8716) + 24) <= layn )
        {
          solder_layer = *(int*)(ebp_208 + ( layn * 72 ) + 7444);
          component_layer = ebp_200;
        }
        else
        {
        }
      }
    }
  }
{
  Cardinal n = *(int*)(*(int*)(ebp_208 + 8716) + 8) + -1;
  ElementTypePtr element;
  if ( *(int*)(*(int*)(ebp_208 + 8716) + 8) + -1 != -1 )
  {
    ebp_208 = ( *(int*)(*(int*)(ebp_208 + 8716) + 8) * 300 ) + -300;
    while ( layn == 0 )
    {
      Cardinal n;
      Cardinal sn;
      PadTypePtr pad;
      ebp_196 = 0;
      n = 0;
      ebp_200 = layn;
      while ( 1 )
      {
        sn = ebp_200;
        do
        {
          if ( sn == 0 || sn <= n )
          {
            n += -1;
            ebp_208 += -300;
            if ( n != -1 )
            {
              break;
              while ( layn == 0 )
              {
                Cardinal n;
                Cardinal sn;
                PadTypePtr pad;
                ebp_196 = 0;
                n = 0;
                ebp_200 = layn;
                while ( 1 )
                {
                  sn = ebp_200;
                  do
                  {
                  }
                  while ( ebp_200 != layn );
                  n++;
                  ebp_196 += 104;
                }
              }
              n = 0;
              while ( pin = layn + ( n * 76 ), layn == 0 || sn <= ( sn + n + 1 ) - sn )
              {
                sn = layn;
              }
            {
              Cardinal n;
              Cardinal sn;
              PadTypePtr pad;
              ebp_196 = 0;
              n = 0;
              ebp_200 = layn;
              while ( 1 )
              {
                sn = ebp_200;
                do
                {
                }
                while ( ebp_200 != layn );
              }
            }
            }
            else
              ebp_208 = PCB;
          }
          else
          {
            pad = ebp_196 + layn;
          {
            int layern = (unsigned char)( ( ( pad->Flags.f/*.1_1of4*/ >> 7 ) & 1 ) ^ 1 ) ? solder_layer : component_layer;
            /* phantom */ line_s *ls;
            *(int*)malloc( 20 )/*.4*/ = lines;
            lines = malloc( 20 );
            lines = find_corner( pad->Point1.X, pad->Point1.Y, layern );
            *(int*)find_corner( pad->Point1.X, pad->Point1.Y, layern )/*.24*/ = pad->BoundingBox.BoxType;
            lines = layern;
            lines = pad;
            lines = find_corner( pad->Point2.X, pad->Point2.Y, layern );
            *(int*)find_corner( pad->Point2.X, pad->Point2.Y, layern )/*.24*/ = pad->BoundingBox.BoxType;
            add_line_to_corner( &lines, &lines );
            lines = layern;
            lines = pad;
            add_line_to_corner( &lines, &lines );
            add_line_to_corner( &lines, &lines );
          }
          }
        }
        while ( ebp_200 != layn );
      }
    }
  }
{
  Cardinal n;
  Cardinal sn = PCB->Data->ViaN;
  PinTypePtr via;
  if ( PCB->Data->ViaN )
  {
    n = 0;
    do
    {
      c->via = via;
      sn = PCB->Data->ViaN;
    }
    while ( PCB->Data->ViaN && ( sn + n + 1 ) - PCB->Data < sn );
  }
  if ( arg && strcmp( arg, "splitlines" ) == 0 )
  {
    do
    {
      if ( lines )
      {
        do
        {
          if ( lines != -559038737 )
          {
          }
        }
        while ( lines );
      }
      else
        break;
    }
    while ( 0 );
    if ( 0 )
    {
      IncrementUndoSerialNumber( );
      return 0;
    }
  }
  else
  {
    layn = 0;
    if ( *(int*)(*(int*)(ebp_208 + 8716) + 24) > 0 )
    {
    {
      do
      {
        LayerType *layer;
        int ln;
        PCB->Data = PCB->Data + ( layn * 92 ) + 80;
        layer = PCB->Data + ( layn * 92 ) + 76;
        if ( *(int*)(*(int*)(ebp_208 + 8716) + ( layn * 92 ) + 80) )
        {
          LineType *l;
          /* phantom */ line_s *ls;
          ln = 0;
          do
          {
            l = PCB->Data->Layer->Line + ( l * 88 );
            if ( ( ( l->Flags.f/*.2_2of4*/ & 4 ) & 255 ) == 0 )
            {
              if ( l->Point2.X == l->Point1.X && l->Point2.Y == l->Point1.Y )
              {
                ln += -1;
                RemoveLine( layer, l );
              }
              else
              {
                *(int*)malloc( 20 )/*.4*/ = lines;
                lines = malloc( 20 );
                lines = find_corner( l->Point1.X, l->Point1.Y, layn );
                lines = l;
                lines = find_corner( l->Point2.X, l->Point2.Y, layn );
                add_line_to_corner( &lines, &lines );
                add_line_to_corner( &lines, &lines );
                lines = layn;
              }
            }
            ln++;
            ln = ln + 1;
          }
          while ( *ebp_196 <= ln + 1 );
        }
        layn++;
      }
      while ( layn < PCB->Data->LayerN );
    }
    }
    layn = 0;
    ebp_196 = 0;
    layer = 0;
    do
    {
      if ( ebp_212 )
      {
        while ( 1 )
        {
          if ( corners->layer != -559038737 )
          {
            ebp_208 = corners->pin;
            if ( corners->next == 0 && corners->via == 0 )
            {
              if ( *(int*)(edi + 24) == 0 )
                goto B110;
              else
              if ( *(int*)(edi + 24) )
              {
                layn = ( *(int*)(ecx + 36) / 2 ) + 1;
                ebp_200 = *(int*)(ecx + 44) <= *(int*)(ecx + 64) ? *(int*)(ecx + 64) : *(int*)(ecx + 44);
                ebp_200 -= layn;
                saved = layn + ( (unsigned char)( ( *(int*)(ecx + 44) < *(int*)(ecx + 64) ) ^ 1 ) ? *(int*)(ecx + 64) : *(int*)(ecx + 44) );
                ecx = layn + ( (unsigned char)( ( *(int*)(ecx + 48) < *(int*)(ecx + 68) ) ^ 1 ) ? *(int*)(ecx + 68) : *(int*)(ecx + 48) );
                if ( *(int*)(ecx + 64) == *(int*)(ecx + 44) )
                {
                  ebp_196 = ( ebp_192 + esi ) / 2;
                  if ( ebp_196 <= *(int*)(edi + 12) )
                  {
                  }
                }
                else
                if ( ( edx + eax ) / 2 <= *(int*)(edi + 8) )
                  ebp_200 = eax + 1;
              }
            }
            else
            {
              layn = *(int*)(ebp_208 + 36) / 2;
              ebp_200 = corners->x - layn;
              ebp_196 = layn + corners->y;
            }
            if ( PCB->Data->LayerN >= 0 )
            {
              do
              {
                *(int*)(ebp_2147483632 + ( 0 << 2 ) + -108) = layn * 2;
                *(int*)(ebp_2147483632 + ( 0 << 2 ) + -176) = 0;
              }
              while ( 0 + 1 + 1 <= PCB->Data->LayerN );
            }
            if ( ebp_212 )
            {
              ebp_212 = 0;
              do
              {
                if ( corners->layer != -559038737 )
                {
                  if ( corners != corners && corners->n_lines && corners->next == 0 && corners->pad == 0 && corners->via == 0 && ( corners->layer == -1 || layn == -1 || layn == ( *(int*)(layn + 48) == *(int*)(layn + 68) ? 240 : 16 ) || layer_groupings[ layn ] == layer_groupings[ *(int*)(layn + 48) == *(int*)(layn + 68) ? 240 : 16 ] ) && ebp_200 - ( 0 + 1 ) <= *(int*)(corners + 8) && 0 + 1 + 1 <= PCB + 0 + 1 && *(int*)(ebp_208 + ( layn * 72 ) + 7444) - corners <= *(int*)(corners + 12) && corner_radius( corners ) <= ebp_196 + corners )
                  {
                    saved = *(int*)(edi + 8);
                    if ( ebp_208 == 0 || ebp_232 <= esi + ( *(int*)(ebp_208 + 36) / 2 ) )
                    {
                      if ( corners->n_lines == 1 )
                      {
                        ebp_212++;
                        connect_corners( &edi, &ebx );
                      }
                      else
                      if ( *(int*)(ebp_2147483632 + ( *(int*)(corners) << 2 ) + -176) == 0 || corners->n_lines < *(int*)(*(int*)(ebp_2147483632 + ( *(int*)(corners) << 2 ) + -176) + 36) || ( ebp_232 < *(int*)(ebp_2147483632 + ( eax << 2 ) + -108) && corners->n_lines <= *(int*)(*(int*)(ebp_2147483632 + ( *(int*)(corners) << 2 ) + -176) + 36) ) )
                      {
                        *(int*)(ebp_2147483632 + ( corners->layer << 2 ) + -176) = corners;
                        *(int*)(ebp_2147483632 + ( corners->layer << 2 ) + -108) = ebp_232;
                      }
                    }
                  }
                  if ( !ebp_212 && corners->next == ( *(int*)(corners->next + 24) != 0 ) && PCB->Data->LayerN >= 0 )
                  {
                    do
                    {
                      if ( *(int*)(ebp_2147483632 + ( 0 << 2 ) + -176) )
                      {
                        connect_corners( &eax, &edi );
                      }
                    }
                    while ( PCB->Data->LayerN < 0 + 1 + 1 );
                  }
                }
              }
              while ( corners->next );
              ebp_212 = corners;
              if ( corners->next == 0 )
              {
                if ( 0 )
                {
                  do
                  {
                  }
                  while ( 0 );
                  if ( ebp_212 )
                  {
                    do
                    {
                      if ( *(int*)(*(int*)(ebp_212 + 4)) != -559038737 && *(int*)(*(int*)(ebp_212 + 4) + 28) == 0 && *(int*)(*(int*)(ebp_212 + 4) + 20) == 0 && *(int*)(*(int*)(ebp_212 + 4) + 24) == 0 && *(int*)(*(int*)(ebp_212 + 4) + 36) == 1 )
                      {
                        if ( edx == eax )
                          layn = ( ( esi < ecx ) << 2 ) + 36;
                        else
                        {
                          layn = 240;
                          if ( esi == ecx )
                            layn = ( edx < eax ) + 17;
                        }
                        while ( lines )
                        {
                          if ( lines != -559038737 && lines == *(int*)(*(int*)(*(int*)(*(int*)(ebp_212 + 4) + 40))) )
                          {
                            switch ( layn )
                            {
                            case 17:
                              ebp_200 = lines;
                              ebp_212 = lines;
                              if ( lines == lines && *(int*)(ebx + 8) < ecx && ebp_192 < ebp_196 + ( ( *(int*)(*(int*)(esi + 16) + 36) + *(int*)(*(int*)(edi + 16) + 36) ) / 2 ) )
                              {
                                ebp_196 = *(int*)(ebp_200 + 12);
                                if ( *(int*)(ebx + 12) <= ebp_196 )
                                {
                                }
                                else
                                if ( *(int*)(*(int*)(ebp_212 + 4) + 12) < *(int*)(ebp_212 + 12) )
                                  move_corner( &ebx, ebp_192, eax );
                                if ( edx < eax && eax < ebp_196 )
                                  continue;
                              }
                              break;
                            case 18:
                              ebp_200 = lines;
                              ebp_212 = lines;
                              if ( lines == lines && edx < *(int*)(ebx + 8) && ebp_196 - ebp_208 < lines && ( ( *(int*)(ebp_200 + 12) < *(int*)(ebx + 12) && eax < *(int*)(ebp_212 + 12) ) || ( *(int*)(ebp_212 + 12) < eax && eax < edx ) ) )
                                continue;
                              break;
                            case 36:
                              ebp_200 = lines;
                              ebp_212 = lines;
                              if ( lines == lines && *(int*)(ebx + 12) < edx && ebp_212 < ebp_196 + ( ( *(int*)(*(int*)(esi + 16) + 36) + *(int*)(*(int*)(edi + 16) + 36) ) / 2 ) )
                              {
                                if ( ( *(int*)(ebp_200 + 8) < *(int*)(ebx + 8) && edx < *(int*)(ebp_192 + 8) ) || ( *(int*)(ebp_192 + 8) < edx && edx < ecx ) )
                                  move_corner( &ebx, edx, ebp_212 );
                              }
                              break;
                            case 40:
                              ebp_200 = lines;
                              ebp_212 = lines;
                              if ( lines == lines && ebp_212 < lines && ebp_196 - ebp_208 < ebp_212 )
                              {
                              }
                              break;
                            }
                          }
                        }
                      }
                    }
                    while ( *(int*)(*(int*)(ebp_212 + 4) + 4) );
                    do
                    {
                      if ( lines )
                      {
                        do
                        {
                          if ( lines != -559038737 )
                          {
                          }
                        }
                        while ( lines );
                      }
                      else
                        break;
                    }
                    while ( 0 );
                    if ( corners )
                    {
                      do
                      {
                        if ( corners->next != -559038737 && corners->next == 0 )
                        {
                          classify_corner( &corners->next, this_net );
                          this_net++;
                          if ( corners->next )
                            continue;
                        }
                        else
                      }
                      while ( corners->next );
                    }
                    if ( arg == 0 )
                    {
                      __printf_chk( 1, "unknown command: %s\n", arg );
                      break;
                    }
                  {
                    /* phantom */ size_t __s1_len;
                    /* phantom */ size_t __s2_len;
                    if ( strcmp( arg, "debumpify" ) )
                    {
                      /* phantom */ size_t __s1_len;
                      /* phantom */ size_t __s2_len;
                      if ( strcmp( arg, "unjaggy" ) == 0 )
                      {
                        saved = unjaggy( );
                      }
                      else
                      {
                        /* phantom */ size_t __s1_len;
                        /* phantom */ size_t __s2_len;
                        if ( strcmp( arg, "simple" ) == 0 )
                        {
                          saved = simple_optimizations( );
                        }
                        else
                        {
                          /* phantom */ size_t __s1_len;
                          /* phantom */ size_t __s2_len;
                          if ( strcmp( arg, "vianudge" ) == 0 )
                          {
                            saved = vianudge( );
                          }
                          else
                          {
                            /* phantom */ size_t __s1_len;
                            /* phantom */ size_t __s2_len;
                            if ( strcmp( arg, "viatrim" ) == 0 )
                            {
                              saved = viatrim( );
                            }
                            else
                            {
                              /* phantom */ size_t __s1_len;
                              /* phantom */ size_t __s2_len;
                              if ( strcmp( arg, "orthopull" ) == 0 )
                              {
                                saved = orthopull( );
                              }
                              else
                              {
                                /* phantom */ size_t __s1_len;
                                /* phantom */ size_t __s2_len;
                                if ( strcmp( arg, "auto" ) == 0 )
                                {
                                  while ( 1 )
                                  {
                                    layn = orthopull( );
                                    if ( strcmp( arg, "auto" ) == strcmp( arg, "auto" ) + layn + unjaggy( ) + debumpify( ) + vianudge( ) + viatrim( ) || 99 + -1 == 1 )
                                      saved = eax + -1;
                                    else
                                    {
                                    }
                                  }
                                }
                                else
                                {
                                  /* phantom */ size_t __s1_len;
                                  /* phantom */ size_t __s2_len;
                                  if ( strcmp( arg, "miter" ) == 0 )
                                  {
                                    for ( ; lines;  )
                                    {
                                      if ( lines != -559038737 && lines && ( ( *(char*)(lines + 20) & 64 ) & 255 ) )
                                        arg = 1;
                                      else
                                      {
                                        lines = lines;
                                      }
                                      while ( corners )
                                      {
                                        if ( corners->layer != -559038737 )
                                        {
                                          corners->miter = 0;
                                          if ( corners->n_lines == 2 && corners->next == 0 && corners->next == 0 )
                                          {
                                            if ( corners->next != corners->next )
                                              layn = corners->next;
                                            else
                                              layn = corners->next;
                                            if ( layn == corners->next )
                                              ebp_208 = 1;
                                            else
                                            if ( corners->next != corners->next )
                                              ebp_208 = 0;
                                            else
                                              ebp_208 = 1;
                                            if ( corners->next != corners->next )
                                            {
                                              ebp_200 = corners->next;
                                              ebp_196 = corners->next;
                                              layn = corners->next;
                                            }
                                            else
                                            {
                                              ebp_196 = corners->next;
                                              ebp_200 = corners->next;
                                              layn = *(int*)(*(int*)(edi + 12) + 12);
                                            }
                                            if ( ebp_200 == ebp_192 )
                                            {
                                            }
                                            else
                                            if ( ebp_196 == layn )
                                            {
                                            }
                                            if ( ( ( esi ^ ebx ) & 240 ) && ebp_208 && ebx != 240 && *(int*)(*(int*)(edx + 16) + 36) == *(int*)(*(int*)(edi + 16) + 36) )
                                              corners->next = -1;
                                          }
                                        }
                                        corners = &corners->next;
                                      }
                                      saved = 0;
                                      while ( 1 )
                                      {
                                        ebp_196 = 0;
                                        while ( corners )
                                        {
                                          if ( corners->layer != -559038737 && corners->miter == -1 )
                                          {
                                            if ( ebx != *(int*)(*(int*)(*(int*)(ebx + 40)) + 8) )
                                              layn = *(int*)(ecx + 8);
                                            else
                                              layn = *(int*)(*(int*)(eax + 12) + 8);
                                            if ( layn == edx )
                                            {
                                            }
                                            else
                                            if ( esi == ecx )
                                            {
                                            }
                                            if ( ebx != *(int*)(*(int*)(ebp_192 + 4) + 8) )
                                              layn = *(int*)(edx + 8);
                                            else
                                              layn = *(int*)(*(int*)(esi + 12) + 8);
                                            if ( ebp_192 == layn )
                                            {
                                            }
                                            else
                                            if ( edx == ecx )
                                            {
                                            }
                                            if ( *(int*)(ebx + 24) == 0 && *(int*)(ebx + 28) == 0 && *(int*)(ebx + 20) == 0 )
                                            {
                                              if ( arg )
                                              {
                                                if ( ( ( *(char*)(*(int*)(*(int*)(*(int*)(ebx + 40)) + 16) + 20) & 64 ) & 255 ) || ( ( *(char*)(*(int*)(*(int*)(edx + 4) + 16) + 20) & 64 ) & 255 ) )
                                                  goto B369;
                                              }
                                              else
                                              if ( autorouted_only == 0 )
                                              {
                                              }
                                              else
                                              if ( *(char*)(*(int*)(*(int*)(*(int*)(*(int*)(ebp_212 + 4) + 40)) + 16) + 20) < 0 || *(char*)(*(int*)(*(int*)(*(int*)(*(int*)(ebp_212 + 4) + 40) + 4) + 16) + 20) < 0 )
                                                goto B369;
B369:;
                                              switch ( esi )
                                              {
                                                break;
                                              default:
                                                ebp_212 = esi != 40 ? 1 : ebp_212;
                                                break;
                                              case 36:
                                                ebp_212 = -1;
                                                break;
                                              case 18:
                                                break;
                                              }
                                              layn = ebp_200 <= ebp_204 ? ebp_204 : ebp_200;
                                              ebp_200 = 0 - ( ebp_212 * *(int*)(ebx + 12) );
                                              ebp_200 -= ebp_192 * *(int*)(ebx + 8);
                                              ebp_208 = *(int*)(eax + 36);
                                              while ( corners )
                                              {
                                                if ( corners->layer != -559038737 && ebp_228 != edi && edi != ebx && ebp_232 != edi && ebp_192 * *(int*)(ebx + 8) <= ebp_192 * *(int*)(edi + 8) && ecx * *(int*)(ebx + 12) <= ecx * *(int*)(edi + 12) && *(int*)(ebx + 16) != *(int*)(edi + 16) && ( corners->layer == -1 || edx == -1 || edx == eax || layer_groupings[ edx ] == layer_groupings[ eax ] ) )
                                                {
                                                  ebp_208 = corners->next;
                                                  if ( layn <= eax )
                                                  {
                                                    if ( 1 )
                                                    {
                                                      if ( *(int*)(*(int*)(ebp_212 + 4) + 32) == -1 )
                                                      {
                                                        layn = eax;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                              if ( 0 && *(int*)(0 + 32) == -1 )
                                              {
                                              }
                                              else
                                              {
                                                if ( layn <= 0 )
                                                  goto B337;
                                                else
                                                {
                                                  switch ( edi )
                                                  {
                                                    break;
                                                  case 18:
                                                    break;
                                                  case 36:
                                                    break;
                                                  default:
                                                    break;
                                                  }
                                                  if ( edi != eax )
                                                    split_line( *(int*)(*(int*)(ebx + 40)), &edi );
                                                  if ( ebp_212 != 18 )
                                                  {
                                                    if ( esi < 18 )
                                                    {
                                                      if ( ebp_212 == 36 )
                                                      {
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
                                                  move_corner( *(int*)(ebp_212 + 4), *(int*)(*(int*)(ebp_212 + 4) + 8), lines );
                                                  *(int*)(*(int*)(ebp_212 + 4) + 32) = 0;
                                                  saved++;
                                                  *(int*)(edi + 32) = 0;
                                                  ebp_196 = 1;
                                                }
                                              }
                                            }
B337:;
                                            *(int*)(ebx + 32) = 0;
                                            ebp_196 = 1;
                                          }
                                        }
                                        if ( ebp_196 && ebp_216 == 0 )
                                          continue;
                                      }
                                    }
                                    arg = 0;
                                    while ( corners )
                                    {
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      saved = debumpify( );
                    }
                    if ( lines )
                    {
                      while ( lines == -559038737 || ( lines && lines == *(int*)(*(int*)(1 + 12) + 24) ) || PCB->Data->ElementN == 0 )
                      {
                        if ( ebp_216 == 0 )
                          goto B202;
                        else
                        {
                        }
                      }
                      ebp_200 = 0;
                      do
                      {
                        if ( PCB->Data->Element->BoundingBox.X1 )
                        {
                          do
                          {
                            layn = *(int*)(ebx + 260);
                            if ( layer_type[ edi ] == ( 0 - ( ( ( *(int*)(ebx + 20) & 128 ) < ( 1 & 255 ) ) & 1 ) ) + 2 )
                            {
                              layn += ( 0 + 1 + 1 ) * 104;
                              ebp_196 = ( layn / 2 ) + 1;
                              add_point_to_rect( ebp_40, layn, layn, ebp_196 - PCB );
                              add_point_to_rect( ebp_40, layn, layn, ebp_196 - ( ( PCB->Bloat + 1 + ( ( PCB->Bloat + 1 ) >> 31 ) ) >> 1 ) );
                              arg = &lines;
                              if ( lines >= 0x7fffffff )
                              {
                                if ( lines <= 0x80000000 && arg >= 0x7fffffff && arg <= 0x80000000 && lines >= 0x7fffffff )
                                {
                                  if ( lines <= 0x80000000 && ebp_196 <= ebp_212 && ebp_212 <= ebp_208 )
                                  {
                                    if ( ( ebp_212 != arg ? 16 : 240 ) != ( *(int*)(layn + 48) == *(int*)(layn + 68) ? 240 : 16 ) )
                                    {
                                    }
                                    else
                                      remove_line( &edi );
                                  }
                                }
                                if ( 0 + 1 + 1 < *(int*)(*(int*)(( *(int*)(layn + 48) == *(int*)(layn + 68) ? 240 : 16 ) + 32) + ( ebp_200 * 300 ) + 232) )
                                  continue;
                                else
                                {
                                  break;
                                }
                              }
                            }
                          }
                          while ( esi + 1 < *(int*)(ebx + 232) );
                        }
                        ebp_200++;
                      }
                      while ( ebp_200 < PCB->Data->ElementN );
                    }
B202:;
                    if ( saved )
                    {
                      IncrementUndoSerialNumber( );
                      break;
                    }
                  }
                    __printf_chk( 1, "unknown command: %s\n", arg );
                    break;
                  }
                }
              }
              else
              {
              }
            }
          }
B110:;
        }
      }
    }
    while ( 0 );
  }
  return 0;
}
}
}
void register_djopt_action_list( void )
{
  hid_register_actions( djopt_action_list, 2 );
  return;
}
#if 0
#endif
