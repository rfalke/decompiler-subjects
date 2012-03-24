#include "memlist.c.h"
struct memory_list *getml( void *p )
{
  int ecx;
  int edx;
  struct memory_list *ml;
  va_list ap;
  void *q;
  int n;
  ml[0].n = 0;
  if ( p )
  {
    if ( ebp_12 )
    {
      do
      {
        n++;
      }
      while ( *(int*)(( ebp_12 + ( ( n + 1 ) << 2 ) ) - 4) );
    }
    if ( ml[0].n )
    {
      ml = 1;
      __builtin_va_start( ap, ml );
      ml->p[0] = &((int*)p)[0];
      if ( ebp_12 )
      {
        do
        {
          ap[0] = ap[4];
          ml[1].n = ((int*)q)[0];
          ml = 1 + 1 + 1;
          ((int*)q)[0] = ap[0];
        }
        while ( *(int*)(ap - 4) );
        return (struct memory_list*)mem_alloc( ap[0] );
      }
    }
  }
  return (struct memory_list*)mem_alloc( ecx );
}
void add_to_ml( struct memory_list **ml )
{
  int ecx;
  int edx;
  va_list ap;
  void *q;
  int n;
  if ( ebp_12 )
  {
    n = 0;
    do
    {
      n++;
    }
    while ( *(int*)(ebp_12 + ( ( n + 1 ) << 2 )) );
    if ( n )
    {
      if ( ml[0] == 0 )
      {
        ml[0] = (struct memory_list*)mem_alloc( ( ( ( n + 2 ) * 4 ) + 2 ) * 4 );
        if ( ml[0] )
          ml[0] = 0;
      }
      else
      {
        if ( mem_realloc( (void*)ml[0], ( ( ml[0] + n + 1 ) * 4 ) + 8 ) )
          ml[0] = (struct memory_list*)mem_realloc( (void*)ml[0], ( ( ml[0] + n + 1 ) * 4 ) + 8 );
      }
      __builtin_va_start( ap, ap );
      if ( ebp_12 )
      {
        do
        {
          ap[0] = ap[4];
          ml[ ml[0] + 1 ] = &((int*)q)[0];
          ml[0] += 0;
          q = &ap[0];
        }
        while ( *(int*)(ap - 4) );
      }
    }
  }
  return;
}
void add_one_to_ml( struct memory_list **ml, void *p )
{
  int eax;
  if ( p )
  {
    if ( ml[0] == 0 )
    {
      ml[0] = (struct memory_list*)mem_alloc( 12 );
      if ( ml[0] )
      {
        ml[0] = ml[0] = 0;
      }
    }
    else
    {
      struct memory_list *nml;
      if ( nml[0].n )
        ml[0] = &nml[0];
    }
    ml[ ml[0] ]->p[0] = &((int*)p)[0];
    ml[0] += 0;
  }
  return;
}
void freeml( struct memory_list *ml )
{
  int i;
  if ( ml )
  {
    if ( ml->n >= 1 )
    {
      i = 0;
      do
      {
        i++;
        mem_free( ml->p[ i ] );
      }
      while ( ml->n <= i );
      ml = &ml[0];
    }
    else
    {
      ml = &ml[0];
    }
  }
  else
  {
    return;
  }
}
#if 0
#endif
