#include "rtree.c.h"
void adjust_bounds( struct rtree_node *node )
{
  int edx;
  /* phantom */ int i;
  if ( ( node->flags.bits_at_0/*.1_1of4*/ & 1 ) & 255 )
  {
    node = node->u.kids[1];
    node->box.Y1 = node->u.kids[2];
    node->box.X2 = node->u.kids[3];
    node->box.Y2 = node->u.kids[4];
    do
    {
      if ( node->u.kids[5] == 0 )
        break;
      if ( node->u.kids[6] < node )
        node = node->u.kids[6];
      if ( node->box.X2 < node->u.rects[1].bounds.X2 )
        node->box.X2 = node->u.rects[2].bounds.X2;
      if ( node->u.rects[1].bounds.Y1 < node->box.Y1 )
        node->box.Y1 = node->u.rects[2].bounds.Y1;
      if ( node->box.Y2 < node->u.rects[1].bounds.Y2 )
        node->box.Y2 = node->u.rects[2].bounds.Y2;
    }
    while ( &node->u.rects[4].bounds.Y2 != &node->flags.bits_at_0 + 20 );
  }
  else
  {
    node = &node->u.kids[0]->box.X1;
    node->box.Y1 = node->u.kids[0]->box.Y1;
    node->box.X2 = node->u.kids[0]->box.X2;
    node->box.Y2 = node->u.kids[0]->box.Y2;
    do
    {
      if ( node->u.kids[1] == 0 )
        break;
      if ( node->u.kids[2] < node )
        node = node->u.kids[2];
      if ( node->box.X2 < node->u.kids[2] )
        node->box.X2 = node->u.kids[2];
      if ( node->u.kids[2] < node->box.Y1 )
        node->box.Y1 = node->u.kids[2];
      if ( node->box.Y2 < node->u.kids[2] )
        node->box.Y2 = node->u.kids[2];
    }
    while ( &node->u.kids[0] != &node->box.Y1 + 4 );
    return;
  }
  return;
}
rtree_t *r_create_tree( BoxType **boxlist, int N, int manage )
{
  /* phantom */ rtree_t *rtree;
  /* phantom */ struct rtree_node *node;
  int i;
  *(int*)calloc( 1, 164 )/*.20*/ |= 1;
  *(int*)calloc( 1, 164 )/*.16*/ = 0;
  *(int*)(calloc( 1, 8 )) = calloc( 1, 164 );
  if ( N > 0 )
  {
    i = 0;
    do
    {
      r_insert_entry( &ebx, boxlist[0], manage );
    }
    while ( N <= i + 1 );
  }
  return &ebx;
}
void __r_destroy_tree( struct rtree_node *node )
{
  int ecx;
  int i = 0, flag;
  if ( ( node->flags.bits_at_0/*.1_1of4*/ & 1 ) & 255 )
  {
    flag = 1;
    if ( node->u.kids[0] )
    {
      do
      {
        if ( flag & ( node->flags.(null) >> 1 ) )
        {
          free( &i );
        }
        if ( &node->u.rects[4].bounds.Y2 == &node->flags.bits_at_0 + 20 )
        {
          free( node );
          return;
        }
        flag <<= 1;
      }
      while ( node->u.kids[5] );
    }
  }
  else
  do
  {
    if ( node->u.kids[0] == 0 )
    {
      free( node );
      return;
    }
    i++;
    __r_destroy_tree( node );
  }
  while ( i != 6 );
  free( node );
  return;
}
void r_destroy_tree( rtree_t **rtree )
{
  int eax;
  __r_destroy_tree( rtree[0]->root );
  free( rtree[0] );
  rtree[0] = 0;
  return;
}
int __r_search( struct rtree_node *node, BoxType *query, r_arg *arg )
{
  int ecx;
  int edx;
  if ( ( node->flags.bits_at_0/*.1_1of4*/ & 1 ) & 255 )
  {
    /* phantom */ int i;
    if ( arg->found_it )
    {
      int seen;
      if ( node->u.kids[0] == 0 )
      {
        seen = 0;
        return 0;
      }
      seen = 0;
      do
      {
        if ( node->u.kids[1] < query->X2 && query < node->u.kids[3] && node->u.kids[2] < query->Y2 )
        {
          if ( node->u.kids[4] <= query->Y1 )
          {
          }
          else
          {
            ;
          }
        }
      }
      while ( node->u.rects[2].bptr );
      return seen;
    }
    else
    {
      int seen;
      if ( node->u.kids[0] == 0 )
      {
        seen = 0;
        return 0;
      }
      seen = 0;
      do
      {
        node->box.X1 = node + 20;
      }
      while ( node->u.rects[2].bptr );
      return seen;
    }
  }
  else
  if ( arg )
  {
    int seen;
    struct rtree_node **n;
    n[0] = &node->u.kids[0];
    if ( node->u.kids[0] == 0 )
    {
      seen = 0;
      return 0;
    }
    seen = 0;
    do
    {
      if ( node->u.kids[0]->box.X1 < query->X2 && query < node->u.kids[0]->box.X2 && node->u.kids[0]->box.Y1 < query->Y2 )
      {
        if ( node->u.kids[0]->box.Y2 <= query->Y1 )
          n[0] = n[0];
        else
        {
          if ( arg( ) )
          {
          }
        }
      }
      n[0] = n + 4;
    }
    while ( n[0] );
    return seen;
  }
  else
  {
    int seen;
    struct rtree_node **n = &node->u.kids[0];
    if ( node->u.kids[0] )
    {
      seen = 0;
      do
      {
        if ( node->u.kids[0]->box.X1 < query->X2 && query < node->u.kids[0]->box.X2 && node->u.kids[0]->box.Y1 < query->Y2 )
        {
          if ( node->u.kids[0]->box.Y2 <= query->Y1 )
          {
          }
          else
          {
            seen += __r_search( n[0], query, arg );
          }
        }
        n++;
      }
      while ( n[0] );
      seen = seen;
      return seen;
    }
  }
  seen = 0;
  return 0;
}
int r_search( rtree_t *rtree, BoxType *query, int (*check_region)( BoxType *, void * ), int (*found_rectangle)( BoxType *, void * ), void *cl )
{
  int ecx;
  int edx;
  int ebx;
  int esi;
  r_arg arg;
  if ( rtree && rtree->size > 0 )
  {
    if ( query == 0 )
    {
      arg.check_it = check_region;
      arg.found_it = found_rectangle;
      arg.closure = cl;
      __r_search( &rtree->root->box.X1, &rtree->root->box.X1, &arg );
      return __r_search( 0, query, &arg );
    }
    if ( rtree->root < query->X2 && query < rtree[1].root && rtree->size < query->Y2 )
    {
      if ( rtree[1].size <= query->Y1 )
        check_region = check_region;
      else
      {
        arg.closure = cl;
        arg.check_it = check_region;
        arg.found_it = found_rectangle;
        __r_search( rtree->root, query, &arg );
        return __r_search( 0, query, &arg );
      }
    }
  }
  return __r_search( 0, query, &arg );
}
int __r_region_is_empty_rect_in_reg( BoxType *box, void *cl )
{
  /* phantom */ jmp_buf *envp;
  __longjmp_chk( &cl[0], 1 );
}
int r_region_is_empty( rtree_t *rtree, BoxType *region )
{
  jmp_buf env;
  /* phantom */ int r;
  if ( _setjmp( &env[0].__jmpbuf[0] ) == 0 )
  {
    r_search( rtree, region, 0, &__r_region_is_empty_rect_in_reg, env[0].__jmpbuf );
    return 1;
  }
  return 0;
}
struct rtree_node *find_clusters( struct rtree_node *node )
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
  float total_a, total_b = 0.500000000000;
  float a_X, a_Y, b_X, b_Y;
  Boolean belong[7];
  struct centroid center[7];
  int clust_a, clust_b, tries;
  int a_manage, b_manage;
  int i, old_ax, old_ay, old_bx, old_by;
  /* phantom */ struct rtree_node *new_node;
  BoxType *b;
  a_Y/*.1_1of4*/ = node->flags.bits_at_0/*.1_1of4*/ & 1;
  i = 0;
  do
  {
    a_X = b;
    i++;
    center[0].x = total_b * (double)( b[ b->X2 >> 4 ].X1 );
    b_X = *(int*)(b->X1 + 12) + b->Y1;
    center->y = total_b * (double)( b_X );
    center->area = ( (double)( *(int*)(b->X1 + 8) - a_X ) * (double)( *(int*)(b->X1 + 8) - a_X ) ) + 1.000000000000;
  }
  while ( i + 1 != 7 );
  total_b = center[6].y;
  if ( center[0].x != center[6].x )
  {
  }
  else
  if ( !0 )
  {
    tries = 0;
    while ( 1 )
    {
      clust_b = 0;
      clust_a = 0;
      b_Y = (float)( fp5 );
      while ( 1 )
      {
        b_Y = (double)( clust_b + 3 ) * ( ( ( (float)( b_Y ) - center[1].x ) * ( (float)( b_Y ) - center[1].x ) ) + ( ( b_Y - center->y ) * ( b_Y - center->y ) ) );
        if ( ( ( ( center[0].x - center[1].x ) * ( center[0].x - center[1].x ) ) + ( ( total_b - b_Y ) * ( total_b - b_Y ) ) ) * (double)( clust_a + 3 ) < (double)( clust_b + 3 ) * ( ( ( center[6].x - center[1].x ) * ( center[6].x - center[1].x ) ) + ( ( b_Y - b_Y ) * ( b_Y - b_Y ) ) ) )
        {
          /* phantom */ float dist1, dist2;
          belong[1] = 1;
          clust_a++;
          if ( ebp_32 == center[1].x )
          {
          }
          else
          {
            b_Y = center[1].y;
          }
        }
        else
        {
          belong[0] = 0;
          clust_b++;
          if ( ebp_32 == center[2].x )
          {
          }
          else
          {
            b_Y = center[1].y;
          }
        }
        if ( clust_a == 7 )
          belong[3] = 0;
        else
        if ( clust_b == 7 )
          belong[3] = 1;
        i = 0;
        b_X = 0.000000000000;
        a_Y = 0.000000000000;
        a_X = 0.000000000000;
        while ( 1 )
        {
          if ( belong[ i ] )
          {
            center[1].x = center[2].x;
            i++;
            a_X += ( center[1].x + center[1].area ) * *(float*)(center[1].x + 8);
            a_Y += fp5 * *(float*)(eax + 8);
            if ( i + 1 != 7 )
            {
              b_Y = center[1].y;
              total_b = 0.000000000000;
            }
          }
          else
          {
            i++;
            b_X += fp4 * *(float*)(eax + 8);
            b_Y += 0.000000000000 * center[1].area * center[1].area;
            if ( i + 1 != 7 )
            {
            }
            else
            {
            }
          }
          b_Y = b_X / fp5;
          b_Y = a_Y / ( center[1].x + center[1].area );
          if ( !(_Bool)( 1 ) )
            total_b = center[1].x + center[1].area;
          else
          {
            fp6 = b_Y = 0.000000000000;
            if ( !(_Bool)( 1 ) )
            {
            }
            else
            if ( !(_Bool)( 1 ) )
            {
            }
            else
            if ( !(_Bool)( 1 ) )
            {
              b_Y = b_Y = fp1;
            }
            else
            {
              *(int*)calloc( 1, 164 )/*.16*/ = node->parent;
              *(int*)calloc( 1, 164 )/*.20*/ = ( *(int*)calloc( 1, 164 )/*.20*/ & -2 ) | ( node->flags.bits_at_0/*.1_1of4*/ & 1 );
              if ( node->flags.bits_at_0/*.1_1of4*/ & 1 )
              {
                i = 0;
                clust_a = 0;
                tries = 1;
                a_Y = 0.0;
                a_X = 0.0;
                b_X = 0.0;
                while ( 1 )
                {
                  if ( belong[ i ] )
                  {
                    int flag, a_flag, b_flag;
                    node->box.Y1 = *(int*)(edx + 24);
                    node->box.X2 = *(int*)(edx + 28);
                    node->box.Y2 = *(int*)(edx + 32);
                    node->parent = *(int*)(edx + 36);
                    node->box.X1 = *(int*)(edx + 40);
                    clust_a++;
                    i++;
                    tries <<= 1;
                    a_X = ( flag & ( node->flags.(null) >> 1 ) ) != 0 ? a_X : tries | a_X;
                    if ( i + 1 != 7 )
                    {
                      flag <<= 1;
                    }
                  }
                  else
                  {
                    *(int*)(ebp_160 + ( b_X * 20 ) + 24) = *(int*)(edx + 24);
                    *(int*)(ebp_160 + ( b_X * 20 ) + 28) = *(int*)(edx + 28);
                    *(int*)(ebp_160 + ( b_X * 20 ) + 32) = *(int*)(edx + 32);
                    *(int*)(ebp_160 + ( b_X * 20 ) + 36) = *(int*)(edx + 36);
                    *(int*)(ebp_160 + ( b_X * 20 ) + 40) = *(int*)(edx + 40);
                    i++;
                    b_X++;
                    b_flag <<= 1;
                    a_Y = ( flag & ( node->flags.(null) >> 1 ) ) != 0 ? a_Y : b_flag | a_Y;
                    if ( i + 1 != 7 )
                    {
                      flag <<= 1;
                    }
                  }
                }
              }
              else
              {
                i = 0;
                clust_b = 0;
                clust_a = 0;
                do
                {
                  if ( belong[ i ] == 0 )
                  {
                    i++;
                    return node->u.kids[0];
                    node->u.kids[0]->parent = ebx;
                    clust_b++;
                    if ( i + 1 != 7 )
                      continue;
                    else
                      break;
                  }
                  else
                  {
                    i++;
                    clust_a++;
                  }
                }
                while ( i + 1 != 7 );
              }
              node->flags.(null) = ( node->flags.(null) & 1 ) | ( ( a_X & 0x7fffffff ) * 2 );
              return ( *(int*)(ebx + 20) & 1 ) | ( ecx * 2 );
            }
          }
          tries++;
          if ( tries != 6 )
          {
            total_b = 0.000000000000;
            break;
            while ( 1 )
            {
              clust_b = 0;
              clust_a = 0;
              b_Y = (float)( fp5 );
              while ( 1 )
              {
                b_Y = (double)( clust_b + 3 ) * ( ( ( (float)( b_Y ) - center[1].x ) * ( (float)( b_Y ) - center[1].x ) ) + ( ( b_Y - center->y ) * ( b_Y - center->y ) ) );
              }
            }
          }
          else
          {
            *(int*)calloc( 1, 164 )/*.16*/ = node->parent;
            *(int*)calloc( 1, 164 )/*.20*/ = ( *(int*)calloc( 1, 164 )/*.20*/ & -2 ) | ( node->flags.bits_at_0/*.1_1of4*/ & 1 );
          }
        }
      }
    }
  }
  else
  {
  }
  total_b = center->y;
  tries = 0;
  while ( 1 )
  {
    clust_b = 0;
    clust_a = 0;
    b_Y = (float)( fp5 );
    while ( 1 )
    {
      b_Y = (double)( clust_b + 3 ) * ( ( ( (float)( b_Y ) - center[1].x ) * ( (float)( b_Y ) - center[1].x ) ) + ( ( b_Y - center->y ) * ( b_Y - center->y ) ) );
    }
  }
}
void __r_insert_node( struct rtree_node *node, BoxType *query, int manage, Boolean force )
{
  int ecx;
  int edx;
  double fp6;
  double fp7;
  int ebp_32;
  while ( ( ( node->flags.bits_at_0/*.1_1of4*/ & 1 ) & 255 ) == 0 )
  {
    int i;
    struct rtree_node *best_node;
    double score, best_score;
    if ( force & 255 )
    {
      if ( query < node )
        node = &query->X1;
      if ( node->box.X2 < query->X2 )
        node->box.X2 = query->X2;
      if ( query->Y1 < node->box.Y1 )
        node->box.Y1 = query->Y1;
      if ( node->box.Y2 < query->Y2 )
        node->box.Y2 = query->Y2;
    }
    i = 0;
    do
    {
      if ( node->u.kids[0] )
      {
        if ( query < node->u.kids[0]->box.X1 || node->u.kids[0]->box.X2 < query->X2 || query->Y1 < node->u.kids[0]->box.Y1 || node->u.kids[0]->box.Y2 < query->Y2 )
        {
          i++;
        }
        else
        {
          *(int*)&force = 0;
          while ( ( ( node->flags.bits_at_0/*.1_1of4*/ & 1 ) & 255 ) == 0 )
          {
            int i;
            struct rtree_node *best_node;
            double score, best_score;
          }
        {
          /* phantom */ int _boolean_var_;
          i = 0;
          if ( manage )
          {
          {
            do
            {
              int flag;
            }
            while ( node->u && i + 1 != 6 );
            node->flags.(null) = ( node->flags.(null) & 1 ) | ( ( flag | ( node->flags.(null) >> 1 ) ) * 2 );
          }
          }
          else
          do
          {
            if ( node->u.kids[0] == 0 )
              goto B12;
            else
            {
              i++;
            }
          }
          while ( i + 1 != 6 );
          node->u.rects[6].bptr = query;
          node->u.rects[6].bounds.X1 = query;
          node->u.rects[6].bounds.Y1 = query->Y1;
          node->u.rects[6].bounds.X2 = query->X2;
          node->u.rects[6].bounds.Y2 = query->Y2;
          if ( force & 255 )
          {
            if ( query < node )
              node = &query->X1;
            if ( node->box.X2 < query->X2 )
              node->box.X2 = query->X2;
            if ( query->Y1 < node->box.Y1 )
              node->box.Y1 = query->Y1;
            if ( node->box.Y2 < query->Y2 )
              node->box.Y2 = query->Y2;
          }
          if ( i <= 5 )
            break;
          find_clusters( node );
          node = node->parent;
          if ( node->parent == 0 )
            goto B36;
          else
          {
            do
            {
              do
              {
                if ( node->u.kids[0] == 0 )
                  break;
              }
              while ( 0 + 1 + 1 != 6 );
              node->u.kids[6] = find_clusters( node );
              find_clusters( node );
              node = node->parent;
            }
            while ( *(int*)(*ebp_88 + 16) == 0 );
          }
B36:;
          memcpy( calloc( 1, 164 ), *(int*)(0), 164 );
          if ( ( ( *(int*)calloc( 1, 164 )/*.20*/ & 1 ) & 255 ) == 0 )
          {
            do
            {
              if ( *(int*)(node + ( i << 2 ) + 24 + ( 41 << 2 ) + 24) )
                *(int*)(esi + 16) = calloc( 1, 164 );
            }
            while ( 41 + 1 + 1 != 6 );
            *(char*)(*ebp_88 + 20) &= 254;
            *(int*)(*ebp_88 + 20) &= 1;
            *(int*)(*ebp_88 + 28) = &node->flags.bits_at_0 + 16;
            *(int*)(edx + 16) = *ebp_88;
            *(int*)(*ebp_88 + 24) = edx;
            node->u.rects[1].bounds.Y1 = *ebp_88;
            *(int*)(*ebp_88 + 32) = 0;
            *(int*)(*ebp_88 + 36) = 0;
            *(int*)(*ebp_88 + 40) = 0;
            *(int*)(*ebp_88 + 44) = 0;
            *(int*)(*ebp_88 + 48) = 0;
          }
          else
          {
            *(char*)(*ebp_88 + 20) &= 254;
            *(int*)(*ebp_88 + 20) &= 1;
            *(int*)(*ebp_88 + 28) = &node->flags.bits_at_0 + 16;
            *(int*)(edx + 16) = *ebp_88;
            *(int*)(*ebp_88 + 24) = edx;
            node->u.rects[1].bounds.Y1 = *ebp_88;
            *(int*)(*ebp_88 + 32) = 0;
            *(int*)(*ebp_88 + 36) = 0;
            *(int*)(*ebp_88 + 40) = 0;
            *(int*)(*ebp_88 + 44) = 0;
            *(int*)(*ebp_88 + 48) = 0;
          }
B12:;
          node->u.kids[1] = &query->X1;
          node->u.kids[2] = &query->Y1;
          node->u.kids[3] = &query->X2;
          node->u.kids[4] = &query->Y2;
          if ( i == 0 )
          {
            node = &query->X1;
            node->box.Y1 = query->Y1;
            node->box.X2 = query->X2;
            node->box.Y2 = query->Y2;
            break;
          }
          else
          {
          }
        }
        }
      }
      else
      if ( i <= 5 && ( ( *(char*)(node->u.kids[0] + 20) & 1 ) & 255 ) )
      {
        *(int*)calloc( 1, 164 )/*.20*/ |= 1;
        *(int*)calloc( 1, 164 )/*.16*/ = node[0].box.X1;
        *(int*)calloc( 1, 164 )/*.24*/ = query[0].X1;
        *(int*)calloc( 1, 164 )/*.28*/ = query->BoxType;
        *(int*)calloc( 1, 164 )/*.32*/ = query->Y1;
        *(int*)calloc( 1, 164 )/*.36*/ = query->X2;
        *(int*)calloc( 1, 164 )/*.4*/ = query->Y1;
        *(int*)(calloc( 1, 164 )) = query->BoxType;
        *(int*)calloc( 1, 164 )/*.8*/ = query->X2;
        *(int*)calloc( 1, 164 )/*.40*/ = query->Y2;
      {
        /* phantom */ int _boolean_var_;
        node->u.kids[3] = &query->Y2;
        if ( manage == 0 )
          break;
        node->u.kids[5] = ( node->u.kids[5] & 1 ) | 2;
        break;
      }
      }
      else
      {
        /* phantom */ struct rtree_node *new_node;
      }
      ebp_32 = node->u.kids[0]->box.X2;
      ebp_32 = 1;
      do
      {
        best_node = node->u.kids[0];
        if ( node->u.kids[0] )
        {
          ebp_32++;
        }
        else
        {
        }
        query = query;
        *(int*)&force = 1;
        break;
        while ( ( ( node->flags.bits_at_0/*.1_1of4*/ & 1 ) & 255 ) == 0 )
        {
          int i;
          struct rtree_node *best_node;
          double score, best_score;
        }
      }
      while ( ebp_32 != 6 );
      query = query;
      *(int*)&force = 1;
      break;
      while ( ( ( node->flags.bits_at_0/*.1_1of4*/ & 1 ) & 255 ) == 0 )
      {
        int i;
        struct rtree_node *best_node;
        double score, best_score;
      }
    }
    while ( i + 1 != 6 );
    ebp_32 = node->u.kids[0]->box.X2;
    ebp_32 = 1;
    do
    {
      best_node = node->u.kids[0];
    }
    while ( ebp_32 != 6 );
  }
}
void r_insert_entry( rtree_t *rtree, BoxType *which, int man )
{
  int ecx;
  __r_insert_node( &rtree->root->box.X1, which, man, 1 );
  rtree->size++;
  return;
}
Boolean __r_delete( struct rtree_node *node, BoxType *query )
{
  int eax;
  int ecx;
  int edx;
  int i, flag, mask, a;
  if ( node->box.X1 <= query->X1 && node->box.Y1 <= query->Y1 && query->X2 <= node->box.X2 && query->Y2 <= node->box.Y2 )
  {
    while ( ( ( node->flags.bits_at_0/*.1_1of4*/ & 1 ) & 255 ) == 0 )
    {
      mask = node;
      i = 0;
      do
      {
        if ( node->u.kids[0] == query )
        {
          free( query );
          if ( i <= 5 )
          {
            i = i + 1;
            if ( node->u.kids[1] )
            {
              do
              {
                if ( i + 1 + 1 <= 5 )
                {
                  i = i + 1 + 1;
                  node->u.kids[1] = node->u.kids[2];
                }
                else
                  break;
              }
              while ( node->u.kids[3] );
            }
          }
          if ( node->u.kids[0] == 0 )
          {
            node = node->parent;
            if ( node->parent == 0 )
            {
              mask/*.1_1of4*/ |= 1;
              mask = 0;
              mask = 0;
              mask = 0;
              mask = 0;
              mask = 0;
              mask = 0;
              break;
            }
            if ( node <= mask && node->box.Y1 <= mask && mask <= node->box.X2 && mask <= node->box.Y2 )
            {
              query = &mask;
              break;
              while ( ( ( node->flags.bits_at_0/*.1_1of4*/ & 1 ) & 255 ) == 0 )
              {
                mask = node;
                i = 0;
                do
                {
                }
                while ( i + 1 != 6 );
              }
              a = 1;
              mask = 0;
              i = 0;
              do
              {
                if ( node->u.kids[0] == 0 )
                {
                  break;
                }
                if ( query == node->u.kids[5] )
                  goto B15;
                else
                {
                  i++;
                  node += 0;
                  mask |= a;
                  a <<= 1;
                }
B15:;
                if ( a & ( node->flags.(null) >> 1 ) )
                {
                  free( node->u.rects[6].bptr );
                }
                node->flags.(null) = ( node->flags.(null) & 1 ) | ( ( ( ( ( node->flags.(null) >> 1 ) & ( ~mask * 2 ) ) >> 1 ) | ( mask & ( node->flags.(null) >> 1 ) ) ) * 2 );
                if ( i <= 5 )
                {
                  mask = ( i + 1 ) * 20;
                  node->u.kids[0] = node->u.kids[0];
                  node->u.kids[2] = node->u.kids[2];
                  node->u.kids[3] = node->u.kids[3];
                  node->u.kids[4] = node->u.kids[4];
                  if ( node->u.kids[0] )
                  {
                    do
                    {
                      if ( i + 1 + 1 <= 5 )
                      {
                        i = i + 1 + 1;
                        *(int*)(node + mask + 28) = *(int*)(node + mask + 48);
                        *(int*)(node + mask + 24) = *(int*)(node + mask + 44);
                        *(int*)(node + mask + 32) = *(int*)(node + mask + 52);
                        *(int*)(node + mask + 36) = *(int*)(node + mask + 56);
                        *(int*)(node + mask + 40) = *(int*)(node + mask + 60);
                      }
                      else
                        break;
                    }
                    while ( *(int*)(node + mask + 64) );
                  }
                }
                if ( node->u.kids[0] )
                {
                  do
                  {
                    adjust_bounds( node );
                  }
                  while ( node->parent == 0 );
                  break;
                }
                else
                {
                  if ( node->parent )
                  {
                    __r_delete( node->parent, &node[0].box );
                    break;
                  }
                }
              }
              while ( i + 1 != 6 );
              if ( node->u.rects[6].bptr == 0 )
                break;
B15:;
            }
          }
          else
          {
            node = &mask;
            do
            {
              adjust_bounds( node );
            }
            while ( node->parent == 0 );
            break;
          }
        }
        else
        {
          if ( node->u.kids[0] == 0 )
            break;
          if ( ( __r_delete( node->u.kids[0], query ) & 255 ) == 0 )
          {
            i++;
          }
        }
      }
      while ( i + 1 != 6 );
    }
  }
}
Boolean r_delete_entry( rtree_t *rtree, BoxType *box )
{
  Boolean r;
  if ( r & 255 )
  {
    rtree->size += -1;
  }
  return __r_delete( &rtree->root->box.X1, box );
}
int __r_sub( struct rtree_node *node, BoxType *b, BoxType *a, jmp_buf *e )
{
  int edx;
  int i = 0;
  if ( ( node->flags.bits_at_0/*.1_1of4*/ & 1 ) & 255 )
  {
    i = 0;
    do
    {
      if ( b == node->u.kids[0] )
      {
        __longjmp_chk( e, 1 );
      }
      i++;
      node += 0;
    }
    while ( i + 1 != 6 );
  }
  else
  {
    while ( 1 )
      break;
  }
  return 1;
}
void r_substitute( rtree_t *rtree, BoxType *before, BoxType *after )
{
  jmp_buf env;
  if ( before != after && _setjmp( &env[0].__jmpbuf[0] ) == 0 )
  {
    __r_sub( &rtree->root->box.X1, before, after, &env );
    return;
  }
  return;
}
#if 0
#endif
