#include "heap.c.h"
static cost_t MIN_COST;
heap_t *heap_create( void )
{
  double fp7;
  /* phantom */ heap_t *heap;
  if ( MIN_COST == 0 )
    MIN_COST = -99999999999999991611392.000000000000;
  return calloc( 1, 12 );
}
void heap_destroy( heap_t **heap )
{
  int eax;
  if ( heap[0] )
  {
    free( heap[0] );
  }
  free( heap[0] );
  heap[0] = 0;
  return;
}
void heap_free( heap_t *heap, void (*freefunc)( void * ) )
{
  int eax;
  if ( heap->size )
  {
    do
    {
      if ( heap[ heap->size ].max )
      {
        freefunc( *(int*)(heap[ eax + -1 ].max) );
      }
      heap->size = heap->size + -1 + -1;
    }
    while ( heap->size + -1 + -1 );
  }
  return;
}
void heap_insert( heap_t *heap, cost_t cost, void *data )
{
  int eax;
  double fp7;
  if ( heap->max <= heap->size + 1 )
  {
    heap->max = heap->max * 2;
    if ( heap->max * 2 )
      heap->max = ( ( heap->max * 2 ) + ( heap->max << 2 ) ) << 2;
    else
      heap->max = 256;
    heap = &eax[0];
  }
  while ( heap->size++, heap[ heap->size + 1 ].max = data, heap[ heap->size + 1 ].element = &fp7, heap->element->cost = MIN_COST, heap[ &heap->size ].element->cost < heap[ &heap->size / 2 ].element->cost )
  {
    heap->element->cost = heap[ &heap->size / 2 ].element->cost;
    heap->max = heap[ &heap->size / 2 ].element->data;
  }
  heap->element->cost = heap[ &heap->size ].element->cost;
  heap->max = data;
  return;
}
void __downheap( heap_t *heap, int k )
{
  int eax;
  int edx;
  double fp6;
  double fp7;
  /* phantom */ struct heap_element v;
  if ( k <= heap->size / 2 )
  {
    while ( 1 )
    {
      j = k * 2;
      if ( heap->size <= ( k * 2 ) )
      {
        int j;
      }
      else
      if ( heap->element->cost < heap->element->cost )
      {
        j++;
        if ( heap->element->cost < heap->element->cost )
        {
          break;
        }
        else
        {
          heap->element->cost = *(long long*)(ebp_32 + heap);
          heap->max = *(int*)(ebp_32 + heap + 8);
          if ( heap->size / 2 < j )
            break;
          k = j;
        }
      }
      if ( heap->element->cost < heap->element->cost )
      {
        break;
      }
      else
      {
        heap->element->cost = *(long long*)(ebp_32 + heap);
        heap->max = *(int*)(ebp_32 + heap + 8);
      }
    }
  }
  heap->element->cost = heap->element->cost;
  heap->max = heap->max;
  return;
}
void *heap_remove_smallest( heap_t *heap )
{
  /* phantom */ struct heap_element v;
  return &heap->heap_struct;
  heap->size += -1;
  heap->heap_struct = heap->size;
  heap->heap_struct = heap->max;
  if ( heap->size + -1 > 0 )
  {
    __downheap( heap, 1 );
  }
}
void *heap_replace( heap_t *heap, cost_t cost, void *data )
{
  int eax;
  double fp7;
  if ( heap->size )
  {
    heap->max = data;
    heap->element->cost = cost;
    __downheap( heap, 0 );
    data = &heap->max;
  }
  return &heap->max;
}
int heap_is_empty( heap_t *heap )
{
  return heap->size == 0;
}
int heap_size( heap_t *heap )
{
  return heap->size;
}
#if 0
#endif
