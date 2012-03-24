#include "intersect.c.h"
void insertSegment( SegmentTree *st, int n, LocationType Y1, LocationType Y2 )
{
  int eax;
  int ecx;
  LocationType discriminant;
  if ( Y1 <= st->nodes && st->size <= Y2 )
  {
    st->(null)++;
    if ( st->(null) + 1 > 0 )
    {
      st->(null) = st->size - st->nodes;
      return;
    }
  }
  else
  {
    discriminant = discriminant;
    if ( Y1 < discriminant )
    {
      insertSegment( st, n * 2, Y1, Y2 );
    }
    if ( Y2 <= discriminant )
    {
    }
    else
    {
      insertSegment( st, ( n * 2 ) + 1, Y1, Y2 );
    }
    if ( *(int*)(st[ ebp_32 >> 3 ].nodes + 8) > 0 )
    {
      st->(null) = st->size - st->nodes;
      return;
    }
  }
  if ( n < st->size / 2 )
  {
  }
  st->(null) = st->size - st->nodes;
  return;
}
void deleteSegment( SegmentTree *st, int n, LocationType Y1, LocationType Y2 )
{
  int eax;
  int ecx;
  LocationType discriminant;
  if ( Y1 <= st->nodes && st->size <= Y2 )
  {
    st->(null) += -1;
    if ( st->(null) + -1 > 0 )
    {
      st->(null) = st->size - st->nodes;
      return;
    }
  }
  else
  {
    discriminant = discriminant;
    if ( Y1 < discriminant )
    {
      deleteSegment( st, n * 2, Y1, Y2 );
    }
    if ( Y2 <= discriminant )
    {
    }
    else
    {
      deleteSegment( st, ( n * 2 ) + 1, Y1, Y2 );
    }
    if ( *(int*)(st[ ebp_32 >> 3 ].nodes + 8) > 0 )
    {
      st->(null) = st->size - st->nodes;
      return;
    }
  }
  if ( n < st->size / 2 )
  {
  }
  st->(null) = st->size - st->nodes;
  return;
}
double ComputeIntersectionArea( BoxListTypePtr boxlist )
{
  int eax;
  double fp7;
  Cardinal i;
  double area;
  return 0;
}
double ComputeUnionArea( BoxListTypePtr boxlist )
{
  int eax;
  int ecx;
  int edx;
  /* phantom */ BoxTypePtr *rectLeft, *rectRight;
  Cardinal i;
  Cardinal j;
  /* phantom */ LocationList yCoords;
  SegmentTree segtree;
  static LocationType lastX;
  double area;
  if ( boxlist->BoxN == 0 )
  {
    return 0;
  }
  if ( boxlist->BoxN )
  {
    do
    {
      *(int*)(esi + ( edx << 3 ) + 4) = boxlist->Box->Y2;
    }
    while ( 0 + 1 + 1 < boxlist->BoxN );
  }
  qsort( &esi, ebp_48, 4, &comparepos );
  if ( ebp_48 > 0 )
  {
    while ( 1 )
    {
      if ( 0 + 1 )
      {
        if ( ecx == *(int*)(esi + ( eax << 2 )) )
        {
          if ( edi == eax + 1 )
          {
            if ( ebx )
            {
              do
              {
              }
              while ( eax / 2 );
            }
            else
            {
            }
            ecx = eax;
            *(int*)(ecx + 4) = edx;
            if ( ebp_48 <= edi )
            {
              do
              {
              }
              while ( edi + -1 < ebp_48 );
            }
            if ( edi > 0 )
            {
              do
              {
              }
              while ( edi != 1 );
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
      if ( edi == eax + 1 )
      {
      }
      else
      {
      }
    }
  }
  else
  {
    *(int*)MyCalloc( 2, 16, "createSegmentTree" )/*.16*/ = 10;
    *(int*)MyCalloc( 2, 16, "createSegmentTree" )/*.20*/ = 11;
  }
  segtree.size = ebp_60;
  segtree.nodes = &area & 0xFFFFFFFF;
  free( &esi );
  if ( boxlist->BoxN )
  {
    i = 0;
    do
    {
      i++;
    }
    while ( i + 1 < boxlist->BoxN );
  }
  j = 0;
  qsort( ebp_60, ecx, 4, &compareleft );
  qsort( &edi, boxlist->BoxN, 4, &compareright );
  area = 0.000000000000;
  lastX = *(int*)(*ebp_60);
  i = 0;
  if ( j < boxlist->BoxN )
  {
    do
    {
      if ( boxlist->BoxN != i )
      {
        lastX = *(int*)(*(int*)(ebp_60 + ( i << 2 )));
        if ( *(int*)(*(int*)(ebp_64 + ( j << 2 )) + 8) < *(int*)(*(int*)(ebp_60 + ( i << 2 ))) )
          lastX = ebp_48;
        else
        {
          if ( lastX != lastX )
            area += (double)( lastX - lastX ) * (double)( segtree.nodes[1].area );
          insertSegment( &segtree, 1, *(int*)(edx + 4), *(int*)(edx + 12) );
          i++;
        }
      }
      else
        lastX = *(int*)(*(int*)(ebp_64 + ( j << 2 )) + 8);
    {
      /* phantom */ BoxTypePtr b;
      if ( lastX != lastX )
        area += (double)( lastX - lastX ) * (double)( segtree.nodes[1].area );
      deleteSegment( &segtree, 1, boxlist->BoxMax, boxlist->(null) );
      j++;
    {
      /* phantom */ BoxTypePtr b;
      lastX = lastX;
    }
    }
    }
    while ( boxlist->BoxN <= j );
  }
  free( ebp_60 );
  free( &edi );
  free( segtree.nodes );
  return 0;
}
int compareleft( void *ptr1, void *ptr2 )
{
  /* phantom */ BoxTypePtr *b1, *b2;
  return ((int**)ptr1) - ((int**)ptr2);
}
int compareright( void *ptr1, void *ptr2 )
{
  /* phantom */ BoxTypePtr *b1, *b2;
  return ((int**)ptr1) - ((int**)ptr2);
}
int comparepos( void *ptr1, void *ptr2 )
{
  return ((int*)ptr1) - ((int*)ptr2);
}
#if 0
#endif
