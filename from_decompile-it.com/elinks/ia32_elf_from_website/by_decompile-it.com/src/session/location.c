#include "location.c.h"
void copy_location( struct location *dst, struct location *src )
{
  struct frame *frame;
  dst->frames.prev = dst + 8;
  dst->frames.next = dst + 8;
  frame = &src->frames.prev[0];
  if ( src->frames.prev != src + 8 )
  {
    frame = &frame[0];
    do
    {
      if ( mem_calloc( 1, 64 ) )
      {
        *(int*)(mem_calloc( 1, 64 ) + 8) = stracpy( frame->name );
        if ( mem_calloc( 1, 64 ) + 8 == 0 )
        {
          dst = (struct location*)mem_calloc( 1, 64 );
        }
        *(int*)(mem_calloc( 1, 64 ) + 12) = 0;
        copy_vs( mem_calloc( 1, 64 ) + 16, &frame->vs );
        *(int*)(mem_calloc( 1, 64 )) = *(int*)(mem_calloc( 1, 64 ) + 4) = dst + 8;
        *(int*)(mem_calloc( 1, 64 ) + 4) = mem_calloc( 1, 64 );
        *(int*)(*(int*)(mem_calloc( 1, 64 )) + 4) = mem_calloc( 1, 64 );
      }
      frame = frame->prev;
    }
    while ( frame->prev != src + 8 );
    src += 0;
    dst += 0;
  }
  else
  {
    src += 0;
    dst += 0;
  }
}
void destroy_location( struct location *loc )
{
  int ecx;
  int edx;
  struct frame *frame = &loc->frames.next[0];
  if ( loc->frames.next != loc->frames.next )
  {
    do
    {
      destroy_vs( &frame->vs, 1 );
      mem_free( (void*)frame->name );
      frame = &frame;
    }
    while ( frame->next == loc->frames.next );
    loc->frames.next = loc->frames.next;
  }
{
  struct xlist_head *head = &loc->frames.next[0], *next;
  head = &loc->frames.next[0];
  if ( loc->frames.next != loc->frames.next )
  {
    do
    {
      head = &(struct xlist_head*)(head);
    }
    while ( head->next != loc->frames.next );
  }
  head = &loc->frames.prev[0];
  if ( loc->frames.prev != loc->frames.next )
  {
    do
    {
      head = head->prev;
    }
    while ( head->prev != loc->frames.next );
  }
  next = &loc->frames.next[0];
  if ( loc->frames.next != loc->frames.next )
  {
    &(struct xlist_head*)(next) = &next;
    while ( 1 )
    {
      next->prev = head->prev;
      &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
      mem_free( (void*)head->next );
      next = &(struct xlist_head*)(head);
      head = &next;
      if ( loc->frames.next == next[0].next )
        goto B12;
      next = &next[0];
    }
  }
B12:  destroy_vs( &loc->vs, 1 );
  loc = &loc[0];
}
}
#if 0
#endif
