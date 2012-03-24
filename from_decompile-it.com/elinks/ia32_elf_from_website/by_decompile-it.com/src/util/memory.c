#include "memory.c.h"
static int alloc_try;
static int page_size;
int patience( unsigned char *of )
{
  alloc_try++;
  if ( alloc_try + 1 <= 2 )
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/memory.c";
    errline = 34;
    elinks_error( "Out of memory (%s returned NULL): retry #%d/%d, I still exercise my patience and retry tirelessly." );
    sleep( 3 );
    return alloc_try;
  }
  errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/memory.c";
  errline = 46;
  elinks_error( "Out of memory (%s returned NULL) after %d tries, I give up and try to continue. Pray for me, please." );
  alloc_try = 0;
  return 0;
}
void *mem_alloc( size_t size )
{
  if ( size )
  {
    size = size;
  {
    do
    {
      ((int*)p)[0] = malloc( size );
    }
    while ( !malloc( size ) && patience( "malloc" ) );
  }
  }
  return &((int*)p)[0];
}
void *mem_calloc( size_t count, size_t eltsize )
{
  if ( eltsize == 0 || count == 0 )
  {
    return 0;
  }
{
  do
  {
    ((int*)p)[0] = calloc( count, eltsize );
  }
  while ( !calloc( count, eltsize ) && patience( "calloc" ) );
  return &((int*)p)[0];
}
}
void mem_free( void *p )
{
  if ( p == 0 )
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/memory.c";
    errline = 90;
    p = "mem_free(NULL)";
  }
  p = &((int*)p)[0];
}
void *mem_realloc( void *p, size_t size )
{
  if ( p == 0 )
  {
    p = &size;
  }
  if ( size )
  {
    do
    {
      ((int*)p2)[0] = realloc( &((int*)p)[0], size );
    }
    while ( !realloc( &((int*)p)[0], size ) && patience( "realloc" ) );
    return &((int*)p2)[0];
  }
  else
  {
    mem_free( &((int*)p)[0] );
    return &((int*)p2)[0];
  }
}
size_t round_size( size_t size )
{
  if ( page_size == 0 )
  {
    page_size = sysconf( 30 );
  }
  if ( page_size < 1 )
  {
    page_size = 1;
  }
  return 1 * ( ( (long long)( size ) / 1 ) + 1 );
}
void *mem_mmap_alloc( size_t size )
{
  if ( size == 0 || mmap64( 0, round_size(  ), 3, 33, -1, (long long)0 ) == -1 )
  {
    void *p;
    return 0;
  }
  return mmap64( 0, round_size(  ), 3, 33, -1, (long long)0 );
}
void mem_mmap_free( void *p, size_t size )
{
  int eax;
  if ( p == 0 )
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/memory.c";
    errline = 167;
    p = "mem_mmap_free(NULL)";
  }
  p = &((int*)p)[0];
  size = round_size(  );
}
void *mem_mmap_realloc( void *p, size_t old_size, size_t new_size )
{
  int eax;
  if ( p == 0 )
  {
    p = &new_size;
  }
  if ( round_size( old_size ) != round_size( new_size ) )
  {
    if ( new_size )
    {
      void *p2;
      ((int*)p)[0] = 0;
      ((int*)p)[0] = ((int*)p2)[0] != -1 ? ((int*)p)[0] : ((int*)p2)[0];
      return &((int*)p)[0];
    }
    ((int*)p)[0] = 0;
    mem_mmap_free( &((int*)p)[0], old_size );
    return &((int*)p)[0];
  }
  else
  {
    return &((int*)p)[0];
  }
}
#if 0
#endif
