#include "polygon1.c.h"
Vector vect_zero;
VNODE *node_add( VNODE *dest, int *po, int *new_point )
{
  int ebx;
  int esi;
  VNODE *p;
  if ( dest->point[0] != po[0] )
  {
    if ( dest->point[0] != po[0] )
    {
      if ( p == 0 )
      {
        dest = 0;
        return dest;
      }
      new_point[0] += 5;
      p->Flags.bits_at_0/*.1_1of4*/ &= 248;
      p = dest;
      p->prev = dest;
      dest = p;
      dest = p;
      p->cvc_next = 0;
      p->cvc_prev = 0;
      dest->prev = p;
      return dest;
    }
  }
  else
  if ( dest->point[1] == po[1] )
  {
    return dest;
  }
  if ( dest->point[0] != po[0] )
    continue;
  if ( po[1] == dest->point[1] )
  {
    new_point[0] = new_point[1];
    dest = dest;
    return dest;
  }
}
CVCList *insert_descriptor( VNODE *a, char poly, char side, CVCList *start )
{
  int eax;
  double fp5;
  double fp6;
  double fp7;
#error unstructured control flow
}
CVCList *add_descriptors( PLINE *pl, char poly, CVCList *list )
{
  int eax;
  int edx;
  VNODE *node = &pl->head.next;
  do
  {
    if ( node->cvc_prev )
    {
      node->cvc_prev = insert_descriptor( node, poly, 'P', list );
      if ( &node->cvc_prev == 0 )
        break;
      node->cvc_next = list;
      if ( list == 0 )
      {
        break;
      }
    }
  }
  while ( node != node->next );
  return &node->cvc_next;
}
int adjust_tree( rtree_t *tree, struct seg *s )
{
  /* phantom */ struct seg *q;
  if ( malloc( 24 ) )
  {
    *(int*)malloc( 24 )/*.16*/ = s->v->VNODE;
    *(int*)malloc( 24 )/*.20*/ = s->p->xmin;
    *(int*)(malloc( 24 )) = s->v->point[0] <= s->v->point[0] ? s->v->point[0] : s->v->point[0];
    *(int*)malloc( 24 )/*.8*/ = ( (unsigned char)( ( s->v->point[0] < s->v->point[0] ) ^ 1 ) ? s->v->point[0] : s->v->point[0] ) + 1;
    *(int*)malloc( 24 )/*.4*/ = s->v->point[1] <= s->v->point[1] ? s->v->point[1] : s->v->point[1];
    *(int*)malloc( 24 )/*.12*/ = ( (unsigned char)( ( s->v->point[1] < s->v->point[1] ) ^ 1 ) ? s->v->point[1] : s->v->point[1] ) + 1;
    r_insert_entry( tree, (BoxType*)malloc( 24 ), 1 );
    if ( malloc( 24 ) )
    {
      *(int*)malloc( 24 )/*.20*/ = s->p->xmin;
      *(int*)malloc( 24 )/*.16*/ = s->v->next;
      *(int*)(malloc( 24 )) = s->v->point[0] <= s->v->next->point[0] ? s->v->next->point[0] : s->v->point[0];
      *(int*)malloc( 24 )/*.8*/ = ( (unsigned char)( ( s->v->point[0] < s->v->next->point[0] ) ^ 1 ) ? s->v->next->point[0] : s->v->point[0] ) + 1;
      *(int*)malloc( 24 )/*.4*/ = s->v->point[1] <= s->v->next->point[1] ? s->v->next->point[1] : s->v->point[1];
      *(int*)malloc( 24 )/*.12*/ = ( (unsigned char)( ( s->v->point[1] < s->v->next->point[1] ) ^ 1 ) ? s->v->next->point[1] : s->v->point[1] ) + 1;
      r_insert_entry( tree, (BoxType*)malloc( 24 ), 1 );
      r_delete_entry( tree, &s[0].box );
      return 0;
    }
  }
  return 1;
}
int seg_in_region( BoxType *b, void *cl )
{
  int eax;
  int edx;
  double fp5;
  double fp6;
  double fp7;
  /* phantom */ struct info *i;
  double y1, y2;
  if ( ((int*)cl) || ((int*)cl) )
  {
    if ( (double)( b->Y2 ) < ((struct info*)cl)->b + ( ((int*)cl) * (double)( b->X2 ) ) < ((struct info*)cl)->b + ( ((int*)cl) * (double)( b ) ) ? ((struct info*)cl)->b + ( ((int*)cl) * (double)( b->X2 ) ) : ((struct info*)cl)->b + ( ((int*)cl) * (double)( b ) ) )
    {
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
int seg_in_seg( BoxType *b, void *cl )
{
  int eax;
  int ecx;
  int edx;
  int ebp_60;
  /* phantom */ struct info *i;
  /* phantom */ struct seg *s;
  Vector s1;
  Vector s2;
  int cnt = vect_inters2( b[1].X1 + 24, b[1].X1 + 24, &((int*)cl), &((int*)cl), s1, s2 ), res;
  if ( cnt )
  {
    if ( ((struct info*)cl)->touch == 0 )
    {
      ((struct info*)cl)->s->p->Flags.bits_at_0/*.1_1of4*/ = ( ((struct info*)cl)->s->p->Flags.bits_at_0/*.1_1of4*/ & -8 ) | 3;
      b[1].Y1/*.1_1of4*/ = ( b[1].Y1/*.1_1of4*/ & -8 ) | 3;
      do
      {
        if ( node_add( ebp_60, cnt > 1 ? s1 : s2, ebp_28 ) == 0 || edi == 0 )
        {
          break;
        }
        res = 0 * 2;
        *(int*)node_add( ebp_60, cnt > 1 ? s1 : s2, ebp_28 )/*.20*/ = -1;
        *(int*)node_add( ebp_60, cnt > 1 ? s1 : s2, ebp_28 )/*.16*/ = -1;
        *(int*)(edi + 20) = -1;
        *(int*)(edi + 16) = -1;
        if ( ( 0 * 2 ) < 0 )
        {
          break;
        }
        if ( res & 2 )
        {
          ebp_60 = *(int*)(cnt > 1 ? s1 : s2);
          *(int*)(((struct info*)cl)->s->p) = ebp_60 <= *(int*)(((struct info*)cl)->s->p) ? *(int*)(((struct info*)cl)->s->p) : ebp_60;
          ((struct info*)cl)->s->p->xmax = (unsigned char)( ( ebp_60 < ((struct info*)cl)->s->p->xmax ) ^ 1 ) ? ((struct info*)cl)->s->p->xmax : ebp_60;
          ((struct info*)cl)->s->p->ymin = *(int*)(( cnt > 1 ? s1[0] : s2[0] ) + 4) <= ((struct info*)cl)->s->p->ymin ? ((struct info*)cl)->s->p->ymin : *(int*)(( cnt > 1 ? s1[0] : s2[0] ) + 4);
          ((struct info*)cl)->s->p->ymax = (unsigned char)( ( *(int*)(( cnt > 1 ? s1[0] : s2[0] ) + 4) + 1 < ((struct info*)cl)->s->p->ymax ) ^ 1 ) ? ((struct info*)cl)->s->p->ymax : *(int*)(( cnt > 1 ? s1[0] : s2[0] ) + 4) + 1;
          ebp_60++;
          if ( adjust_tree( &((struct info*)cl)->s->p->tree, &((struct info*)cl)->s ) )
          {
            break;
          }
        }
        if ( res & 1 )
        {
          b[1].Y1 = *(int*)(cnt > 1 ? s1 : s2) <= b[1].Y1 ? b[1].Y1 : *(int*)(cnt > 1 ? s1 : s2);
          b[1].Y1 = *(int*)(cnt > 1 ? s1 : s2) + 1 < b[1].Y1 ? *(int*)(cnt > 1 ? s1 : s2) + 1 : b[1].Y1;
          b[1].Y1 = *(int*)(( cnt > 1 ? s1[0] : s2[0] ) + 4) <= b[1].Y1 ? b[1].Y1 : *(int*)(( cnt > 1 ? s1[0] : s2[0] ) + 4);
          b[1].Y1 = (unsigned char)( ( *(int*)(( cnt > 1 ? s1[0] : s2[0] ) + 4) + 1 < b[1].Y1 ) ^ 1 ) ? b[1].Y1 : *(int*)(( cnt > 1 ? s1[0] : s2[0] ) + 4) + 1;
          if ( adjust_tree( &((struct info*)cl)->tree, &b->X1 ) )
          {
            break;
          }
        }
        res = __MOD(res,4);
        if ( __MOD(res,4) )
          __longjmp_chk( cl + 28 + 28, 1 );
        else
        {
          cnt += -1;
        }
      }
      while ( cnt != 1 );
    }
    __longjmp_chk( adjust_tree( &((struct info*)cl)->tree, &b->X1 ), 99 );
  }
  return 1;
}
void *make_edge_tree( PLINE *pb )
{
  /* phantom */ struct seg *s;
  VNODE *bv;
  rtree_t *ans = r_create_tree( 0, 0, 0 );
  bv = &pb->head.next;
  do
  {
    malloc( 24 );
    if ( bv->point[0] < bv->point[0] )
    {
      *(int*)(malloc( 24 )) = bv->point[0];
      *(int*)malloc( 24 )/*.8*/ = bv->point[0] + 1;
      if ( bv->point[1] < bv->point[1] )
        goto B6;
      else
      {
        *(int*)malloc( 24 )/*.12*/ = bv->point[1] + 1;
        *(int*)malloc( 24 )/*.4*/ = bv->point[1];
        *(int*)malloc( 24 )/*.16*/ = bv[0].next[0];
        *(int*)malloc( 24 )/*.20*/ = pb[0].xmin;
        r_insert_entry( ans, (BoxType*)r_create_tree( 0, 0, 0 ), 1 );
      }
    }
    else
    {
      *(int*)malloc( 24 )/*.8*/ = bv->point[0] + 1;
      *(int*)(malloc( 24 )) = bv->point;
      if ( bv->point[1] < bv->point[1] )
        goto B6;
      else
      {
        *(int*)malloc( 24 )/*.12*/ = bv->point[1] + 1;
        *(int*)malloc( 24 )/*.4*/ = bv->point[1];
        *(int*)malloc( 24 )/*.16*/ = bv[0].next[0];
        *(int*)malloc( 24 )/*.20*/ = pb[0].xmin;
        r_insert_entry( ans, (BoxType*)r_create_tree( 0, 0, 0 ), 1 );
      }
    }
B6:;
    *(int*)malloc( 24 )/*.4*/ = bv->point[1];
    *(int*)malloc( 24 )/*.12*/ = bv->point[1] + 1;
    *(int*)malloc( 24 )/*.16*/ = bv[0].next[0];
    *(int*)malloc( 24 )/*.20*/ = pb[0].xmin;
    r_insert_entry( ans, (BoxType*)r_create_tree( 0, 0, 0 ), 1 );
  }
  while ( bv == &pb->head.next );
  return (void*)ans;
}
int get_seg( BoxType *b, void *cl )
{
  /* phantom */ struct info *i;
  /* phantom */ struct seg *s;
  if ( ((int*)cl) == b[1].X1 )
  {
    ((int*)cl) = b;
    __longjmp_chk( cl + 184, 1 );
  }
  return 0;
}
int intersect( jmp_buf *jb, POLYAREA *b, POLYAREA *a, int add )
{
  int eax;
  int edx;
  double fp6;
  double fp7;
  PLINE *pa, *pb;
  PLINE *rtree_over;
  PLINE *looping_over;
  VNODE *av;
  struct info info;
  BoxType box;
  info.touch = add == 0 ? 0 : jb;
  _setjmp( &info.env[0].__jmpbuf[0] );
  pb = b->contours;
  if ( a->contours )
  {
  {
    do
    {
      /* phantom */ int found_overlapping_a_b_contour;
      if ( pb )
      {
        pa = a->contours;
        do
        {
          if ( pb <= a->contours->xmax && pa <= pb->xmax && pb->ymin <= pa->ymax )
          {
            if ( pb->ymax < pa->ymin )
            {
            }
            else
            {
              looping_over = *(int*)(a->contours->next + 52) < pb->Count ? pb : &a->contours->next;
              rtree_over = *(int*)(a->contours->next + 52) < pb->Count ? &a->contours->next : pb;
              av = ( *(int*)(a->contours->next + 52) < pb->Count ? pb : a->contours->next ) + 20;
            {
              do
              {
                double dx;
                info.v = av;
                if ( (double)( av->point[0] - av->point[0] ) == 0.000000000000 )
                {
                  if ( (double)( av->point[0] - av->point[0] ) == 0.000000000000 )
                    info.m = 0.000000000000;
                    box = av->point;
                    box.X2 = av->point[0] + 1;
                    box.Y1 = av->point[1];
                    box.Y2 = av->point[1] + 1;
                    if ( _setjmp( &info.sego[0].__jmpbuf[0] ) == 0 )
                      r_search( &looping_over->tree, &box, 0, &get_seg, &info.m );
                    info.tree = &rtree_over->tree;
                    if ( rtree_over->tree && r_search( &rtree_over->tree, (int)( &info.s->box ), &seg_in_region, &seg_in_seg, &info.m ) )
                    {
                      break;
                    }
                    av = &av->next;
                  else
                  {
                  }
                }
                else
                {
                }
                info->m = (double)( *(int*)(av->next + 28) - av->point[1] ) / (double)( av->point[0] - av->point[0] );
                info.b = (double)( av->point[1] ) - ( ( (double)( *(int*)(av->next + 28) - av->point[1] ) / (double)( av->point[0] - av->point[0] ) ) * (double)( av->point[0] ) );
                box = av->point;
                box.X2 = av->point[0] + 1;
                box.Y1 = av->point[1];
                box.Y2 = av->point[1] + 1;
              }
              while ( av->next != ( *(int*)(a->contours->next + 52) < pb->Count ? pb : a->contours->next ) + 20 );
              pb = pb->next;
              if ( *(int*)(*(int*)(ebp_388 + 16) + 16) == 0 )
              {
                break;
              }
            {
              do
              {
                /* phantom */ int found_overlapping_a_b_contour;
              }
              while ( *(int*)(*(int*)(ebp_388 + 16) + 16) );
            }
            }
            }
          }
          pb = pb->next;
        }
        while ( pb->next );
      }
      pb = b->contours;
    }
    while ( *(int*)(*(int*)(ebp_388 + 16) + 16) );
  }
  }
  return 2;
}
void M_POLYAREA_intersect( jmp_buf *e, POLYAREA *afst, POLYAREA *bfst, int add )
{
  int eax;
  int ecx;
  int edx;
#error unstructured control flow
}
BOOLp M_POLYAREA_label( POLYAREA *afst, POLYAREA *b, BOOLp touch )
{
  int eax;
#error unstructured control flow
}
void PutContour( jmp_buf *e, PLINE *cntr, POLYAREA **contours, PLINE **holes, PLINE *parent )
{
  int eax;
  int edx;
  int ebx;
  int edi;
  e[0][0].__jmpbuf[0] = e;
  cntr->next = 0;
  if ( ( cntr->Flags.bits_at_0/*.1_1of4*/ & 8 ) & 255 )
  {
    if ( contours[0] == 0 )
    {
      contours[0] = malloc( ( 1 ) * sizeof( POLYAREA ) );
      if ( contours )
        contours[1] = contours[0];
        contours[1]->contours->xmin = &cntr[0].xmin;
        cntr->next = 0;
    }
    else
    {
      if ( malloc( 12 ) == 0 )
      {
        __longjmp_chk( e, 2 );
      }
      *(int*)(malloc( 12 )) = contours[0]->POLYAREA;
      *(int*)malloc( 12 )/*.4*/ = contours[1]->f;
      contours->f = malloc( ( 1 ) * sizeof( POLYAREA ) );
      contours = malloc( ( 1 ) * sizeof( POLYAREA ) );
      contours->contours->xmin = &cntr[0].xmin;
      cntr->next = 0;
    }
    __longjmp_chk( e, 2 );
  }
  else
  if ( parent )
  {
    cntr->next = parent->next;
    parent->next = cntr;
  }
  else
  {
    cntr->next = holes[0];
    holes[0] = cntr;
  }
  return;
}
int heap_it( BoxType *b, void *cl )
{
  /* phantom */ heap_t *heap;
  /* phantom */ PLINE *p;
  if ( b[3].Y1 )
  {
    heap_insert( &cl[0], b[3].X2, (void*)b );
    return 1;
  }
  return 0;
}
void InsertHoles( jmp_buf *e, POLYAREA *dest, PLINE **src )
{
  POLYAREA *curc;
  PLINE *curh, *container, *tmp;
  heap_t *heap;
  rtree_t *tree;
  if ( src[0] )
  {
    if ( dest->f )
    {
      curc = dest;
      tree = r_create_tree( 0, 0, 0 );
      while ( 1 )
      {
        r_insert_entry( tree, &curc->contours->xmin, 0 );
        curc = curc;
        if ( curc == dest )
        {
          curh = src[0];
          curh = src[0];
          if ( src[0] )
          {
            do
            {
              src[0] = src[0]->next;
              heap = heap_create( );
              r_search( tree, &curh->xmin, 0, &heap_it, &heap );
              if ( heap_is_empty( &heap ) == 0 )
              {
                tmp = (PLINE*)heap_remove_smallest( &heap );
                if ( heap_is_empty( &heap ) == 0 )
                {
                  for ( ; poly_ContourInContour( tmp, curh ) == 0;  )
                  {
                    if ( heap_is_empty( &heap ) == 0 )
                    {
                      tmp = (PLINE*)heap_remove_smallest( &heap );
                    }
                    else
                      heap_destroy( &heap );
                      curh->next = 0;
                      poly_DelContour( &curh );
                      __longjmp_chk( e, 3 );
                  }
                }
                heap_destroy( &heap );
                if ( tmp == 0 )
                {
                  curh->next = 0;
                  poly_DelContour( &curh );
                  __longjmp_chk( e, 3 );
                }
                else
                {
                  tmp = tmp->next;
                  curh->next = dest[1].b = &curh->xmin;
                  curh = src[0];
                  curh = src[0];
                }
              }
              poly_DelContour( &curh );
            }
            while ( src[0] == 0 );
          }
          r_destroy_tree( &tree );
          break;
        }
        else
        {
        }
      }
    }
    __longjmp_chk( e, 3 );
  }
  return;
}
int UniteS_Rule( VNODE *cur, DIRECTION *initdir )
{
  initdir[0] = FORW;
  return ( cur->Flags.bits_at_0/*.1_1of4*/ & 7 ) + -2 >= 1;
}
int IsectS_Rule( VNODE *cur, DIRECTION *initdir )
{
  initdir[0] = FORW;
  return ( ( (unsigned char)( cur->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 3 ) | ( (unsigned char)( cur->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 1 ) ) & 1;
}
int SubS_Rule( VNODE *cur, DIRECTION *initdir )
{
  initdir[0] = FORW;
  return ( ( (unsigned char)( cur->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 4 ) | ( (unsigned char)( cur->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 2 ) ) & 1;
}
int XorS_Rule( VNODE *cur, DIRECTION *initdir )
{
  int ecx;
  if ( (unsigned char)( cur->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 1 )
  {
    initdir[0] = BACKW;
    return 1;
  }
  return 0;
}
int IsectJ_Rule( char p, VNODE *v, DIRECTION *cdir )
{
  return ( ( (unsigned char)( v->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 3 ) | ( (unsigned char)( v->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 1 ) ) & 1;
}
int UniteJ_Rule( char p, VNODE *v, DIRECTION *cdir )
{
  return ( v->Flags.bits_at_0/*.1_1of4*/ & 7 ) + -2 >= 1;
}
int XorJ_Rule( char p, VNODE *v, DIRECTION *cdir )
{
  int ecx;
  if ( (unsigned char)( v->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 1 )
  {
    cdir[0] = BACKW;
    return 1;
  }
  return 0;
}
int SubJ_Rule( char p, VNODE *v, DIRECTION *cdir )
{
  int eax;
  int edx;
  if ( p == 'B' )
  {
    if ( (unsigned char)( (int)v->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 1 )
    {
      cdir[0] = BACKW;
      return 1;
    }
  }
  else
  if ( p != 'A' )
  {
  }
  else
  if ( (unsigned char)( (int)v->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 2 )
  {
    cdir[0] = FORW;
    return 1;
  }
  if ( ( v->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 4 )
  {
    if ( p == 'A' )
    {
      cdir[0] = FORW;
      return 1;
    }
    cdir[0] = BACKW;
    return 1;
  }
  else
  {
    return 1;
  }
}
int jump( VNODE **cur, DIRECTION *cdir, J_Rule rule )
{
  int eax;
  CVCList *d, *start;
  VNODE *e;
  DIRECTION new;
  if ( cur[4] == 0 )
  {
    return ( ( *(char*)(cur[0]->prev + 12) >> 3 ) & 1 ) ^ 1;
  }
  else
  {
    while ( 1 )
    {
      e = d->parent;
      if ( d->side == 'P' )
        e = e->prev;
      new = cdir[0];
      if ( ( ( e->Flags.bits_at_0/*.1_1of4*/ & 8 ) & 255 ) == 0 )
      {
        ebp( d->poly, e, new, ebp_48 );
        if ( d->poly )
        {
          if ( d->side != 'N' )
          {
            if ( d->side == 'P' && new == BACKW )
            {
            }
          }
          else
          if ( new == FORW )
          {
          }
          cdir[0] = FORW;
          cur = &d->parent;
          break;
        }
      }
      d = d->prev;
      if ( d->prev == d->angle )
        break;
    }
    return 1;
  }
}
void Collect1( jmp_buf *e, VNODE *cur, DIRECTION dir, POLYAREA **contours, PLINE **holes, J_Rule j_rule )
{
  int eax;
  int ecx;
  int edx;
  PLINE *p = 0;
  /* phantom */ int errc;
  while ( jump( ebp_32, ebp_36, j_rule ) == 0 )
  {
    if ( p == 0 )
    {
      p = eax;
      if ( p == 0 )
      {
        __longjmp_chk( e, 2 );
      }
      if ( *(int*)(( ebp_36 == 0 ? cur : *(int*)(&cur->prev) ) + 8) )
        *(char*)(&eax->ymax) |= 8;
    }
    else
    {
      if ( eax )
        poly_InclVertex( &p->head.prev, &eax[0].xmin );
      else
      if ( p == 0 )
      {
        __longjmp_chk( e, 2 );
      }
      poly_DelContour( &p );
    }
  }
  if ( p )
  {
    poly_PreContour( p, 1 );
    if ( p->Count > 2 )
    {
      PutContour( e, &dir, contours, holes, 0 );
      return;
    }
    poly_DelContour( &p );
  }
  return;
}
void Collect( jmp_buf *e, PLINE *a, POLYAREA **contours, PLINE **holes, S_Rule s_rule, J_Rule j_rule )
{
  int eax;
  int ecx;
  int edx;
  VNODE *cur = &a->head.next, *other;
  DIRECTION dir;
  do
  {
    if ( s_rule( &e[0][0].__jmpbuf[0], &a[0].xmin ) && ( ( cur->Flags.bits_at_0/*.1_1of4*/ & 8 ) & 255 ) == 0 )
      Collect1( e, cur, dir, contours, holes, j_rule );
    other = cur;
    if ( cur->cvc_prev && jump( &other, &dir, j_rule ) )
    {
      Collect1( e, other, dir, contours, holes, j_rule );
    }
    else
    if ( cur->next == cur )
      break;
  }
  while ( cur->next != cur );
  return;
}
void M_POLYAREA_Collect( jmp_buf *e, POLYAREA *afst, POLYAREA **contours, PLINE **holes, int action, BOOLp maybe )
{
  int eax;
  int ecx;
  int edx;
  POLYAREA *a = afst;
  PLINE **cur, **next, *parent;
  do
  {
  }
  while ( afst != a );
  do
  {
    if ( maybe == 0 || (unsigned char)( (int)parent->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 3 )
      parent = 0;
    cur = afst + 8;
    while ( cur[0] )
    {
      do
      {
        parent = parent->xmin != cur[0] ? 0 : &parent->xmin;
        if ( (unsigned char)( *(char*)(cur[0] + 68) & 7 ) == 3 )
        {
          switch ( action )
          {
          case 0:
            Collect( e, cur[0], contours, holes, ebp_68, ebp_64 );
            break;
          case 1:
            Collect( e, cur[0], contours, holes, &IsectS_Rule, &IsectJ_Rule );
            break;
          case 3:
            Collect( e, cur[0], contours, holes, &XorS_Rule, &XorJ_Rule );
            break;
          case 2:
            Collect( e, cur[0], contours, holes, ebp_68, ebp_64 );
            break;
          }
        }
        else
        {
          switch ( action )
          {
          case 1:
            if ( ( (int)cur[0]->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 1 )
            {
              cur[0] = cur[0]->next;
              cur[0]->next = 0;
            }
            break;
          case 3:
            if ( ( (int)cur[0]->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 1 )
            {
              cur[0] = cur[0]->next;
              cur[0]->next = 0;
              poly_InvContour( cur[0] );
            }
            else
          case 2:
            if ( ( (int)cur[0]->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 2 )
            {
              cur[0] = cur[0]->next;
              cur[0]->next = 0;
              PutContour( e, cur[0], contours, holes, parent );
              break;
            }
            break;
          case 0:
            if ( ( (int)cur[0]->Flags.bits_at_0/*.1_1of4*/ & 7 ) == 2 )
            {
              cur[0] = cur[0]->next;
              cur[0]->next = 0;
              PutContour( e, cur[0], contours, holes, parent );
              break;
            }
            break;
          }
          PutContour( e, cur[0], contours, holes, 0 );
        }
        cur = cur[0] + 16;
      }
      while ( cur[0] );
      break;
    }
  }
  while ( afst->f != afst );
  return;
}
BOOLp Touching( POLYAREA *a, POLYAREA *b )
{
  int eax;
  int ecx;
  int edx;
  jmp_buf e;
  int code;
  if ( code == 0 )
  {
    M_POLYAREA_intersect( &e, a, b, 0 );
    if ( M_POLYAREA_label( a, b, 1 ) == 0 )
    {
      return M_POLYAREA_label( b, a, 1 ) != 0;
    }
  }
  else
  {
  }
  return eax;
}
int poly_Boolean( POLYAREA *a_org, POLYAREA *b_org, POLYAREA **res, int action )
{
  POLYAREA *a = 0, *b = 0;
  if ( poly_M_Copy0( &a, a_org ) && poly_M_Copy0( &b, b_org ) )
  {
    return poly_Boolean_free( a, b, res, action );
  }
  return 2;
}
int poly_Boolean_free( POLYAREA *ai, POLYAREA *bi, POLYAREA **res, int action )
{
  int eax;
  int ecx;
  int edx;
  POLYAREA *a, *b;
  PLINE *p, *holes = 0;
  jmp_buf e;
  int code;
  a = ai;
  b = bi;
  res = 0;
  if ( ai == 0 )
  {
    switch ( action )
    {
    default:
      if ( b == 0 )
      {
        switch ( action )
        {
        case 0:
        case 2:
        case 3:
          code = 0;
          res = ai;
          break;
        case 1:
          if ( ai )
          {
            code = 0;
            poly_Free( &a );
          }
          break;
        default:
          if ( _setjmp( &e->__jmpbuf[0] ) == 0 )
          {
            M_POLYAREA_intersect( &e, a, b, 1 );
            M_POLYAREA_label( a, b, 0 );
            M_POLYAREA_label( b, a, 0 );
            M_POLYAREA_Collect( &e, a, res, &holes, action, b->f == b && b->contours->next == 0 ? (unsigned char)( *(char*)(ai + 68) & 7 ) != 3 : 0 );
            poly_Free( &a );
            do
            {
              while ( ecx )
              {
                do
                {
                  if ( (unsigned char)( *(char*)(ecx + 68) & 7 ) != 3 )
                  {
                    if ( ( *(char*)(ecx + 68) & 7 ) == 1 )
                    {
                      if ( action == 1 )
                        goto B55;
                      else
                      if ( action <= 3 )
                      {
                        poly_InvContour( &edx );
                      }
B55:;
                      ebx = *(int*)(edx + 16);
                      *(char*)(edx + 68) &= 248;
                      *(int*)(edx + 16) = 0;
                      PutContour( &e, &edx, res, &holes, 0 );
                    }
                    else
                    {
                      if ( ( *(char*)(ecx + 68) & 7 ) == 2 )
                      {
                        if ( action == 0 || action == 3 )
                        {
                          ebx = *(int*)(edx + 16);
                          *(char*)(edx + 68) &= 248;
                          *(int*)(edx + 16) = 0;
                          PutContour( &e, &edx, res, &holes, 0 );
                          break;
                        }
                        else
                        {
                        }
                      }
                    }
                  }
                }
                while ( ebx );
                break;
              }
            }
            while ( b == b->f );
            code = code;
            poly_Free( &b );
            InsertHoles( &e, res[0], &holes );
          }
          p = holes;
          p = holes;
          if ( holes )
          {
            do
            {
              holes = &holes->next;
              poly_DelContour( &p );
            }
            while ( holes == 0 );
          }
          if ( code )
          {
            poly_Free( res );
            return code;
          }
          return code;
          break;
        }
        return code;
      }
      break;
    case 0:
    case 3:
      code = 0;
      res[0] = bi;
      break;
    case 1:
    case 2:
      if ( b )
      {
        code = 0;
        poly_Free( &b );
      }
      break;
      break;
    }
    return code;
  }
  code = 0;
  return code;
}
int poly_AndSubtract_free( POLYAREA *ai, POLYAREA *bi, POLYAREA **aandb, POLYAREA **aminusb )
{
  int eax;
  int ecx;
  int edx;
  POLYAREA *a, *b;
  PLINE *p, *holes = 0;
  jmp_buf e;
  int code;
  a = ai;
  b = bi;
  aandb[0] = 0;
  aminusb[0] = 0;
  if ( _setjmp( &e[0].__jmpbuf[0] ) == 0 )
  {
    M_POLYAREA_intersect( &e, a, b, 1 );
    M_POLYAREA_label( a, b, 0 );
    M_POLYAREA_label( b, a, 0 );
    M_POLYAREA_Collect( &e, a, aandb, &holes, 1, 0 );
    InsertHoles( &e, aandb[0], &holes );
    p = holes;
    p = holes;
    if ( holes )
    {
      do
      {
        holes = &holes->next;
        poly_DelContour( &p );
      }
      while ( holes == 0 );
    }
    do
    {
      if ( a->contours )
      {
        do
        {
          do
          {
            *(char*)(eax + 12) &= -9;
          }
          while ( ecx != eax );
        }
        while ( a->contours->next == 0 );
      }
    }
    while ( a->f != a );
    do
    {
      if ( b->contours )
      {
        do
        {
          do
          {
            *(char*)(eax + 12) &= -9;
          }
          while ( edx != eax );
        }
        while ( b->contours->next == 0 );
      }
    }
    while ( b->f != b );
    holes = 0;
    M_POLYAREA_Collect( &e, a, aminusb, &holes, 2, 0 );
    InsertHoles( &e, aminusb[0], &holes );
    poly_Free( &a );
    poly_Free( &b );
  }
  p = holes;
  p = holes;
  if ( holes )
  {
    do
    {
      holes = &holes->next;
      poly_DelContour( &p );
    }
    while ( holes == 0 );
  }
  if ( code )
  {
    poly_Free( aandb );
    poly_Free( aminusb );
  }
  return code;
}
VNODE *poly_CreateNode( int *v )
{
  /* phantom */ VNODE *res;
  /* phantom */ int *c;
  if ( calloc( 1, 32 ) )
  {
    *(int*)calloc( 1, 32 )/*.24*/ = v[0];
    *(int*)calloc( 1, 32 )/*.28*/ = v[1];
  }
  return (VNODE*)calloc( 1, 32 );
}
void poly_IniContour( PLINE *c )
{
  if ( c )
  {
    c->head.prev = &c->head.next;
    &c->head = &c->head.next;
    c->ymin = 0x7fffffff;
    c = 2147483647;
    c->ymax = 0x80000000;
    c->xmax = 0x80000000;
  }
  return;
}
PLINE *poly_NewContour( int *v )
{
  /* phantom */ PLINE *res;
  if ( calloc( 1, 72 ) )
  {
    *(int*)calloc( 1, 72 )/*.24*/ = calloc( 1, 72 ) + 20;
    *(int*)calloc( 1, 72 )/*.4*/ = 0x7fffffff;
    *(int*)(calloc( 1, 72 )) = 0x7fffffff;
    *(int*)calloc( 1, 72 )/*.12*/ = 0x80000000;
    *(int*)calloc( 1, 72 )/*.8*/ = 0x80000000;
    if ( v )
    {
      *(int*)calloc( 1, 72 )/*.44*/ = v[0];
      *(int*)(calloc( 1, 72 )) = v[0];
      *(int*)calloc( 1, 72 )/*.8*/ = v[0] + 1;
      *(int*)calloc( 1, 72 )/*.48*/ = v[1];
      *(int*)calloc( 1, 72 )/*.4*/ = v[1];
      *(int*)calloc( 1, 72 )/*.12*/ = v[1] + 1;
    }
  }
  return (PLINE*)calloc( 1, 72 );
}
void poly_ClrContour( PLINE *c )
{
  VNODE *cur = &c->head;
  if ( c->head.next != c->head.next )
  {
    do
    {
      poly_ExclVertex( &c->head );
      free( &c->head.next );
      cur = &c->head;
    }
    while ( c->head.next == cur->next );
  }
  c->head.prev = &cur->next;
  &c->head = &cur->next;
  c->ymin = 0x7fffffff;
  c = 2147483647;
  c->ymax = 0x80000000;
  c->xmax = 0x80000000;
  return;
}
void poly_DelContour( PLINE **c )
{
  int eax;
  VNODE *cur, *prev;
  if ( c[0] )
  {
    cur = c[0]->head.prev;
    if ( c[0]->head.prev != c[0] + 20 )
    {
      do
      {
        prev = cur->prev;
        if ( cur->cvc_next )
        {
          free( cur->cvc_next );
          free( cur->cvc_prev );
        }
        cur = prev;
        free( cur );
      }
      while ( c[5] != prev );
    }
    if ( c[0]->head.cvc_next )
    {
      free( c[0]->head.cvc_next );
      free( &c[9]->xmin );
    }
    if ( c[0]->tree )
    {
      rtree_t *r;
      r_destroy_tree( &r );
    }
    free( c[0] );
    c[0] = 0;
  }
  return;
}
void poly_PreContour( PLINE *C, BOOLp optimize )
{
  int eax;
  double fp7;
  double area;
  VNODE *p, *c;
  /* phantom */ Vector p1;
  /* phantom */ Vector p2;
  if ( optimize && C->head.next != C->head.next )
  {
    p = &C->head;
    while ( 1 )
    {
      c = &c->next;
      if ( !( ( (double)( *(int*)(c->next + 24) - p->point[0] ) * (double)( *(int*)(c->next + 24) - p->point[0] ) ) - ( (double)( c->point[0] - *(int*)(c->next + 24) ) * (double)( c->point[0] - *(int*)(c->next + 24) ) ) ) )
      {
        poly_ExclVertex( &c->next );
        c = p;
        free( c );
        c = p;
        p = &c->next;
        if ( C->head.next == p )
        {
        }
        else
        {
        }
      }
      else
      {
        p = &c->next;
        if ( C->head.next == c )
        {
        }
        else
        {
        }
      }
      C = C;
    }
  }
  C->Count = 0;
  C->xmax = C->head.point[0];
  C = &C->head.point[0];
  C->ymax = C->head.point[1];
  C->ymin = C->head.point[1];
  if ( C->head.next != C->head.prev )
  {
    c = &C->head;
    while ( C = C->head.point[0] <= c->point[0] ? &c->point[0] : &C->head.point[0], C->xmax = (unsigned char)( ( c->point[0] + 1 < ( (unsigned char)( ( c->point[0] + 1 < C->head.point[0] ) ^ 1 ) ? C->head.point[0] : c->point[0] + 1 ) ) ^ 1 ) ? (unsigned char)( ( c->point[0] + 1 < C->head.point[0] ) ^ 1 ) ? C->head.point[0] : c->point[0] + 1 : c->point[0] + 1, C->ymin = c->point[1] <= ( c->point[1] <= C->head.point[1] ? C->head.point[1] : c->point[1] ) ? c->point[1] <= C->head.point[1] ? C->head.point[1] : c->point[1] : c->point[1], C->Count++, C->ymax = c->point[1] + 1 < ( c->point[1] + 1 < C->head.point[1] ? c->point[1] + 1 : C->head.point[1] ) ? c->point[1] + 1 : c->point[1] + 1 < C->head.point[1] ? c->point[1] + 1 : C->head.point[1], c = c, C->head.next != c )
    {
    }
    if ( 0.000000000000 < 0.000000000000 )
    {
    }
  }
  else
  {
  }
  C->area = fp7;
  if ( C->Count > 2 )
    C->Flags.bits_at_0/*.1_1of4*/ = ( (int)C->Flags.bits_at_0/*.1_1of4*/ & -9 ) | ( ( eax ^ 1 ) << 3 );
  C->tree = (rtree_t*)make_edge_tree( C );
  return;
}
int flip_cb( BoxType *b, void *cl )
{
  /* phantom */ struct seg *s;
  b[1].X1 = b[1].X1;
  return 1;
}
void poly_InvContour( PLINE *c )
{
  int eax;
  VNODE *cur = &c->head, *next;
  /* phantom */ int r;
  do
  {
    next = cur;
    cur = cur->prev;
  }
  while ( c->head.next != cur );
  c->Flags.bits_at_0/*.1_1of4*/ = ( (int)c->Flags.bits_at_0/*.1_1of4*/ & -9 ) | ( ( ( ( (int)c->Flags.bits_at_0/*.1_1of4*/ >> 3 ) & 1 ) ^ 1 ) << 3 );
  if ( c->tree )
  {
    r_search( c->tree, 0, 0, &flip_cb, 0 );
  }
  return;
}
void poly_ExclVertex( VNODE *node )
{
  if ( node->cvc_next )
  {
    free( &node->cvc_next );
    free( node->cvc_prev );
  }
  &node->prev = node;
  return;
}
void poly_InclVertex( VNODE *after, VNODE *node )
{
  int ebx;
  int esi;
  int edi;
  double fp7;
  double a, b;
  node->prev = after;
  node->next = after->next;
  after->next = node;
  after->prev = node;
  if ( node->prev != node && abs( ( (double)( node->point[1] - *(int*)(node->prev + 28) ) * (double)( node->point[1] - *(int*)(node->prev + 28) ) ) - ( (double)( node->point[0] - *(int*)(node->prev + 24) ) * (double)( node->point[0] - *(int*)(node->prev + 24) ) ) ) < 0.000000010000 )
  {
    /* phantom */ VNODE *t;
    node->prev = node;
    node->prev = &node->prev;
    after = &node->prev;
  }
  return;
}
BOOLp poly_CopyContour( PLINE **dst, PLINE *src )
{
  int eax;
  int edx;
  VNODE *cur, *newnode;
  dst[0] = 0;
  dst[0] = poly_NewContour( &src->head.point );
  if ( dst )
  {
    dst[13] = &src->Count;
    dst[17] = ( *(char*)(dst + 68) & -9 ) | ( (int)src->Flags.bits_at_0/*.1_1of4*/ & 8 );
    cur = &src->head;
    dst[14] = &src->area & 0xFFFFFFFF;
    dst[0] = src;
    dst[2] = &src->xmax;
    dst[1] = &src->ymin;
    dst[3] = &src->ymax;
    if ( src != src->head.next )
    {
      do
      {
        if ( newnode == 0 )
          break;
        poly_InclVertex( &dst[6]->xmin, newnode );
      }
      while ( src != cur );
    }
    dst[0]->tree = (rtree_t*)make_edge_tree( dst[0] );
    return 1;
  }
  return 0;
}
BOOLp poly_Copy0( POLYAREA **dst, POLYAREA *src )
{
  int ebx;
  int esi;
  dst[0] = 0;
  if ( src )
  {
    dst[0] = calloc( 1, sizeof( POLYAREA ) );
    if ( dst )
    {
      dst = dst;
    }
  }
  return 0;
}
BOOLp poly_Copy1( POLYAREA *dst, POLYAREA *src )
{
  PLINE *cur, **last;
  dst->contours = 0;
  last[0] = &dst->contours;
  dst->b = dst;
  cur = &src->contours;
  if ( src->contours )
  {
    do
    {
      if ( poly_CopyContour( last, cur ) == 0 )
        break;
      cur = cur->next;
      last[0] = last[4];
    }
    while ( cur->next );
  }
  return 1;
}
void poly_M_Incl( POLYAREA **list, POLYAREA *a )
{
  int eax;
  if ( list[0] == 0 )
  {
    a->b = a;
    list[0] = a;
    return;
  }
  a = list[0];
  a->b = list[1]->f;
  list[0]->b = a;
  &list[0]->b = a;
  return;
}
BOOLp poly_M_Copy0( POLYAREA **dst, POLYAREA *srcfst )
{
  POLYAREA *src;
  POLYAREA *di;
  dst = 0;
  if ( srcfst )
  {
    src = srcfst;
    do
    {
      di = poly_Create( );
      if ( poly_Create( ) == 0 || poly_Copy1( poly_Create( ), src ) == 0 )
        break;
      if ( dst == 0 )
      {
        di->b = di;
        dst[0] = di;
        if ( srcfst == src )
        {
          break;
        }
      }
      else
      {
        di = dst;
        di->b = dst[1]->f;
        dst = di;
        dst->f = di;
      }
    }
    while ( srcfst != src );
    return 1;
  }
  return 0;
}
BOOLp poly_InclContour( POLYAREA *p, PLINE *c )
{
  int edx;
  PLINE *tmp;
  if ( c && p )
  {
    if ( ( c->Flags.bits_at_0/*.1_1of4*/ & 8 ) & 255 )
    {
      if ( p->contours == 0 )
      {
        p->contours = c;
        return 1;
      }
    }
    else
    if ( p->contours->xmax )
    {
      tmp = &p->contours->next;
      c->next = p->contours->next = c;
      return 1;
    }
  }
  return 0;
}
int crossing( BoxType *b, void *cl )
{
  /* phantom */ struct seg *s;
  /* phantom */ struct pip *p;
  if ( b[1].X1 <= ((int*)cl) )
  {
    if ( ((int*)cl) < b[1].X1 )
    {
      /* phantom */ Vector v1;
      /* phantom */ Vector v2;
      long long cross;
      if ( cross )
      {
        if ( (int)(cross << 32) >= 0 )
        {
          if ( (cross << 32) == 0 )
          {
            if ( (unsigned int)(cross & 0xFFFFFFFF) <= 0 )
            {
              return 1;
            }
          }
          cl = &((int*)cl);
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    if ( ((int*)cl) < b[1].X1 )
    {
      return 1;
    }
  {
    /* phantom */ Vector v1;
    /* phantom */ Vector v2;
    long long cross;
    if ( cross == 0 )
    {
      *(int*)(cl) = 1;
      __longjmp_chk( cl + 12, 1 );
    }
    if ( (int)(cross << 32) < 0 )
    {
      cl = &((int*)cl);
    }
    return 1;
  }
  }
  *(int*)(cl) = 1;
  __longjmp_chk( cl + 12, 1 );
}
int poly_InsideContour( PLINE *c, int *p )
{
  int eax;
  struct pip info;
  BoxType ray;
  if ( c->xmin <= p[0] && c->ymin <= p[1] && p[0] <= c->xmax && p[1] <= c->ymax )
  {
    ray.Y1 = p[1];
    info.p[1] = p[1];
    ray.Y2 = p[1] + 1;
    info.f = 0;
    ray.X1 = p[0];
    info.p[0] = p[0];
    ray.X2 = 0x7fffffff;
    if ( _setjmp( &info.env[0].__jmpbuf[0] ) == 0 )
    {
      r_search( &c->tree, &ray, 0, &crossing, &info.f );
      return info.f;
    }
  }
  else
  {
  }
}
BOOLp poly_CheckInside( POLYAREA *p, int *v0 )
{
  int eax;
  PLINE *cur;
  if ( v0 && p && p->contours && poly_InsideContour( p->contours, v0 ) )
  {
    do
    {
      if ( cur->next == 0 )
        break;
    }
    while ( poly_InsideContour( cur, v0 ) );
  }
  return 0;
}
BOOLp poly_M_CheckInside( POLYAREA *p, int *v0 )
{
  int ebx;
  int esi;
  POLYAREA *cur;
  return poly_CheckInside( cur, v0 ) ? 1 : 0;
}
int poly_ContourInContour( PLINE *poly, PLINE *inner )
{
  if ( poly->xmin <= inner->xmin && poly->ymin <= inner->ymin && inner->xmax <= poly->xmax && inner->ymax <= poly->ymax )
  {
    inner = &inner->head.point[0] + 44;
  }
  return 0;
}
void poly_Init( POLYAREA *p )
{
  p->b = p;
  p->contours = 0;
  return;
}
POLYAREA *poly_Create( void )
{
  /* phantom */ POLYAREA *res;
  if ( malloc( 12 ) )
  {
    *(int*)malloc( 12 )/*.4*/ = malloc( 12 );
    *(int*)malloc( 12 )/*.8*/ = 0;
  }
  return (POLYAREA*)malloc( 12 );
}
void poly_FreeContours( PLINE **pline )
{
  PLINE *pl = pline[0];
  pl = pline[0];
  if ( pline[0] )
  {
    do
    {
      pline[0] = pline[0]->next;
      poly_DelContour( &pl );
    }
    while ( pline[0] == 0 );
  }
  return;
}
void poly_Free( POLYAREA **p )
{
  POLYAREA *cur;
  if ( p[0] )
  {
    cur = p[0];
    if ( p[0] != p[0] )
    {
      while ( 1 )
      {
        poly_FreeContours( &cur->contours );
        &cur->b = cur;
        free( cur );
        cur = p[0];
        if ( p == cur->f )
          goto B6;
        else
        {
          cur = cur;
        }
      }
    }
B6:;
    cur->contours = &cur->contours;
    poly_FreeContours( &cur->contours + 8 );
    free( p[0] );
    p[0] = 0;
  }
  return;
}
BOOLp inside_sector( VNODE *pn, int *p2 )
{
  int eax;
  int ecx;
  double fp7;
  /* phantom */ Vector cdir;
  /* phantom */ Vector ndir;
  /* phantom */ Vector pdir;
  int p_c = 0, n_c, p_n;
  p_c/*.1_1of4*/ = ( ( ( ( (double)( pn->point[0] - pn->prev ) * (double)( pn->point[0] - pn->prev ) ) - ( (double)( p_c - pn->point[0] ) * (double)( p_c - pn->point[0] ) ) ) <> 0.000000000000 ) & 1 ) == 0;
  n_c = 0;
  n_c/*.1_1of4*/ = ( ( ( ( (double)( p2[1] - pn->point[1] ) * (double)( p2[1] - pn->point[1] ) ) - ( (double)( p_c - pn->point[0] ) * (double)( p_c - pn->point[0] ) ) ) <> 0.000000000000 ) & 1 ) == 0;
  p_n = 0;
  p_n/*.1_1of4*/ = ( ( ( ( (double)( pn->point[0] - pn->prev ) * (double)( pn->point[0] - pn->prev ) ) - ( (double)( pn->point[0] - pn->point[0] ) * (double)( pn->point[0] - pn->point[0] ) ) ) <> 0.000000000000 ) & 1 ) == 0;
  if ( p_n == 0 || p_n == 0 )
  {
    n_c = p_n == 0 ? 0 : n_c | p_c | n_c;
    return p_n == 0 ? 0 : n_c | p_c | n_c;
  }
  return p_c;
}
BOOLp poly_ChkContour( PLINE *a )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  VNODE *a1, *a2, *hit1, *hit2;
  Vector i1;
  Vector i2;
  int icnt;
  do
  {
    a1 = hit2;
    hit2 = hit2;
    for ( ; a->head.next != hit2;  )
    {
      if ( hit2 != a1->next )
      {
        if ( hit2 != hit2 )
        {
          hit2 = &hit2->next;
          if ( hit2->next != a1->next )
          {
            if ( hit2 == hit2 )
              hit2 = a1;
            else
            {
              if ( icnt > 0 )
              {
                if ( icnt == 1 )
                {
                  hit1 = a1;
                  if ( ( (double)( i1 - a1->point[0] ) * (double)( i1[0] - a1->point[0] ) ) * 0.000000000000 < 0.000000010000 )
                  {
                  }
                  else
                  {
                    hit1 = a1;
                    if ( 0.000000010000 <= ( (double)( i1[0] - hit1->point[0] ) * (double)( i1[0] - hit1->point[0] ) ) * 0.000000000000 )
                      break;
                  }
                  if ( ( (double)( i1[0] - hit2->point[0] ) * (double)( i1[0] - hit2->point[0] ) ) + ( (double)( i1[1] - *(int*)(hit2->next + 24 + 4) ) * (double)( i1 - *(int*)(hit2->next + 24 + 4) ) ) < 0.000000010000 )
                  {
                  }
                  else
                  {
                    hit2 = &hit2->next;
                    if ( 0.000000010000 <= ( (double)( i1 - hit2->point[0] ) * (double)( i1[0] - hit2->point[0] ) ) * 0.000000000000 )
                      break;
                  }
                  if ( inside_sector( &hit1->next, hit2->prev + 24 ) == 0 && inside_sector( hit1, &hit2->point ) == 0 && inside_sector( hit2, hit1->prev + 24 ) == 0 && inside_sector( hit2, &hit1->point ) == 0 )
                    goto B16;
                }
              }
B16:;
              a1 = hit2;
            }
          }
          else
            hit2 = hit2;
        }
        else
          a1 = hit2;
      }
      else
        hit2 = &a1->next;
      a1 = hit2 = a1;
      hit2 = a1;
    }
  }
  while ( a->head.next == a1 );
  return 0;
}
BOOLp poly_Valid( POLYAREA *p )
{
  PLINE *c;
  if ( p && p->contours && ( ( *(char*)(p->contours + 68) & 8 ) & 255 ) && poly_ChkContour( p->contours ) == 0 )
  {
    c = &p->contours->next;
    if ( p->contours->next == 0 )
    {
    }
    else
    do
    {
      if ( ( ( c->Flags.bits_at_0/*.1_1of4*/ & 8 ) & 255 ) || poly_ChkContour( c ) || poly_ContourInContour( p->contours, c ) == 0 )
      {
        break;
      }
      c = c->next;
    }
    while ( c->next );
    return 1;
  }
  return 1;
}
void vect_init( int *v, double x, double y )
{
  v[0] = (int)( x );
  v[1] = (int)( y );
  return;
}
int vect_equal( int *v1, int *v2 )
{
  if ( v2[0] == v1[0] )
  {
    return v2[1] == v1[1];
  }
  return 0;
}
void vect_sub( int *res, int *v1, int *v2 )
{
  *ebp_8 = *ebp_12 - *ebp_16;
  *(int*)(ebp_8 + 4) = *(int*)(ebp_12 + 4) - *(int*)(ebp_16 + 4);
  return;
}
void vect_min( int *v1, int *v2, int *v3 )
{
  int eax;
  int ecx;
  v1[0] = *(int*)(v3) <= *(int*)(v2) ? v2[0] : v3[0];
  v1[1] = *(int*)(v3 + 4) <= *(int*)(v2 + 4) ? v2[1] : v3[1];
  return;
}
void vect_max( int *v1, int *v2, int *v3 )
{
  int eax;
  int ecx;
  v1[0] = (unsigned char)( ( *(int*)(v3) < *(int*)(v2) ) ^ 1 ) ? v2[0] : v3[0];
  v1[1] = (unsigned char)( ( *(int*)(v3 + 4) < *(int*)(v2 + 4) ) ^ 1 ) ? v2[1] : v3[1];
  return;
}
double vect_len2( int *v )
{
  return 0;
}
double vect_dist2( int *v1, int *v2 )
{
  return 0;
}
double vect_det2( int *v1, int *v2 )
{
  return 0;
}
int vect_inters2( int *p1, int *p2, int *q1, int *q2, int *S1, int *S2 )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  int edi;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  double s, t, deel;
  double rpx, rpy, rqx, rqy;
  if ( ( q2[0] <= q1[0] ? q1[0] : q2[0] ) <= ( (unsigned char)( ( p2[0] < p1[0] ) ^ 1 ) ? p1[0] : p2[0] ) && ( p2[0] <= p1[0] ? p1[0] : p2[0] ) <= ( (unsigned char)( ( q2[0] < q1[0] ) ^ 1 ) ? q1[0] : q2[0] ) && ( q2[1] <= q1[1] ? q1[1] : q2[1] ) <= ( p2[1] < p1[1] ? p2[1] : p1[1] ) && ( p1[1] < p2[1] ? p2[1] : p1[1] ) <= ( (unsigned char)( ( q2[1] < q1[1] ) ^ 1 ) ? q1[1] : q2[1] ) )
  {
    if ( ( (double)( p2[1] - p1[1] ) * (double)( p2[1] - p1[1] ) ) - ( (double)( p2[0] - p1[0] ) * (double)( p2[0] - p1[0] ) ) == 0.000000000000 )
    {
      if ( ( (double)( ebp_48 - esi ) * (double)( ebp_48 - esi ) ) - ( (double)( ebx - edx ) * (double)( ebx - edx ) ) == 0.000000000000 )
      {
      {
        double dc1, dc2, d1, d2, h;
        /* phantom */ Vector hp1;
        /* phantom */ Vector hq1;
        /* phantom */ Vector hp2;
        /* phantom */ Vector hq2;
        /* phantom */ Vector q1p1;
        /* phantom */ Vector q1q2;
        if ( rpx == ( (double)( q1[0] - p1[0] ) * (double)( q1[0] - p1[0] ) ) - ( (double)( q1[0] - q2[0] ) * (double)( q1[0] - q2[0] ) ) )
        {
          if ( rpx == ( (double)( eax - edx ) * (double)( eax - edx ) ) - ( (double)( eax - ecx ) * (double)( eax - ecx ) ) )
          {
            deel = ( (double)( p1[0] - p2[0] ) * (double)( p1[0] - p2[0] ) ) * 0.000000000000;
            if ( (double)( p1[0] - p2[0] ) <= 0.000000000000 )
            {
              if ( rpx <= 0.000000000000 )
              {
                rpx = 0.000000000000;
                if ( rpx < rqy )
                  goto B22;
              }
              else
                rpx = 0.000000000000;
              rpx = -( rpx );
            }
            else
            {
              s = 0.000000000000;
              rpx = 0.000000000000;
            }
B22:;
            s = (double)( p1[0] - q1[0] ) * (double)( p1[0] - q1[0] );
            if ( (double)( p1[0] - q1[0] ) <= 0.000000000000 )
            {
              rqx = 0.000000000000;
              if ( 0.000000000000 <= deel )
              {
                rqx = s;
                if ( rqx < rqy )
                  goto B29;
              }
              else
                rqx = s;
              rqx = -( rqx );
            }
            else
              rqx = s;
B29:;
            deel = (double)( p1[0] - q2[0] ) * (double)( p1[0] - q2[0] );
            if ( (double)( p1[0] - q2[0] ) <= 0.000000000000 )
            {
              rqy = 0.000000000000;
              if ( 0.000000000000 <= 0.000000000000 )
              {
                rqy = deel;
                if ( s <= rqy )
                  goto B34;
              }
              else
                rqy = deel;
B34:;
              rqy = -( rqy );
            }
            else
              rqy = deel;
            s = 0.000000000000;
            if ( rpx < s )
            {
              rqx = rqy;
              if ( s <= rqx )
              {
                if ( rpx < rqx )
                {
                  S1[0] = 0.000000000000 <= rpx ? p2[0] : p1[0];
                  S1[1] = 0.000000000000 <= rpx ? p2[1] : p1[1];
                  S2[0] = q2[0];
                  S2[1] = q2[1];
                }
                else
                {
                  S1[0] = q2[0];
                  S1[1] = q2[1];
                  S2[0] = q1[0];
                  S2[1] = q1[1];
                }
              }
              else
              {
              }
            }
            else
            if ( rpx <= rqy )
            {
              rpx = rqx;
              if ( rqx < rpx )
              {
                S1[1] = p2[1];
                S1[0] = p2[0];
                S2[1] = p2[1];
                S2[0] = p2[0];
              }
              else
              {
                S1[0] = p2[0];
                S1[1] = p2[1];
                S2[0] = q1[0];
                S2[1] = q1[1];
              }
            }
            else
            {
            }
            if ( S2[0] != S1[0] || S2[1] != S1[1] )
            {
            }
            return 2;
          }
          else
          {
          }
        }
        else
        {
        }
      }
      }
      else
        deel = 0.000000000000;
    }
    else
      deel = 0.000000000000;
    if ( q1[0] != p1[0] || q1[1] != p1[1] )
    {
      if ( p2[0] == q1[0] && p2[1] == q1[1] )
      {
      }
      else
      {
        if ( q2[0] != p1[0] || q2[1] != p1[1] )
        {
          if ( q2[0] == p2[0] && p2[1] == q2[1] )
          {
          }
          else
          {
            if ( ( ( s * (double)( p1[0] - q1[0] ) ) + ( rqy * (double)( q1[1] - p1[1] ) ) ) / deel < 0.000000000000 )
            {
            }
            else
            {
              if ( 1.000000000000 < 1.000000000000 )
              {
              }
              else
              {
                rpx = ( (double)( p1[0] - 2 ) * rqx ) + ( (double)( q1[1] - p1[1] ) * rpx );
                if ( ( ( (double)( p1[0] - 2 ) * rqx ) + ( (double)( q1[1] - p1[1] ) * rpx ) ) / deel < 0.000000000000 )
                {
                }
                else
                {
                  rpx = rqx = deel = rqx;
                  if ( rpx < rqx )
                  {
                  }
                  else
                  {
                    rqy = s;
                    rqx = rqy * rpx;
                    S1[0] = q1[0] + (int)( rqy );
                    S1[1] = edx + eax;
                    return 2;
                  }
                }
              }
            }
          }
        }
        else
        {
        }
        S1[0] = q2[0];
        S1[1] = q2[1];
        return 2;
      }
    }
    else
    {
    }
    S1[0] = q1[0];
    S1[1] = q1[1];
    return 2;
  }
  return 2;
}
#if 0
#endif
