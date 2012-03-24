#include "pov_mem.cpp.h"
using namespace std;
using namespace __debug;
using namespace pov_base;
namespace pov {
void mem_init( void )
{
  mem_stats.smallest_alloc = 65535;
  mem_stats.largest_alloc = 0;
  mem_stats.current_mem_usage = 0;
  mem_stats.largest_mem_usage = 0;
  leak_msg = 0;
  return;
}
void *pov_malloc( size_t size, char *file, int line, char *msg )
{
  int eax;
  if ( size == 0 )
  {
    Error( "Attempt to malloc zero size block (File: %s Line: %d)." );
  }
  if ( malloc( size + 8 ) == 0 )
  {
    MAError( msg, size );
    *ebp_12 = malloc( size + 8 );
  }
  *ebp_12 = size + 8;
  if ( mem_stats.smallest_alloc < 0 || ebp_12 < edx )
    mem_stats.smallest_alloc = ebp_12;
  if ( mem_stats.largest_alloc < ebp_12 )
    mem_stats.largest_alloc = ebp_12;
  mem_stats.current_mem_usage += mem_stats.largest_alloc;
  if ( mem_stats.largest_mem_usage < mem_stats.current_mem_usage + mem_stats.largest_alloc )
  {
    mem_stats.largest_mem_usage = mem_stats.largest_alloc;
  }
  return ebp_12 + 8;
}
void *pov_calloc( size_t nitems, size_t size, char *file, int line, char *msg )
{
  int eax;
  int ecx;
  int edx;
{
  void *block;
  size_t actsize;
  actsize *= nitems;
  if ( nitems * actsize == 0 )
  {
    Error( "Attempt to calloc zero size block (File: %s Line: %d)." );
    Error( "Attempt to malloc zero size block (File: %s Line: %d)." );
  }
  actsize = actsize + 8;
  if ( malloc( actsize + 8 ) == 0 )
  {
    MAError( msg, actsize );
    *ebp_28 = malloc( actsize + 8 );
  }
  *ebp_28 = file[0];
  if ( mem_stats.smallest_alloc < 0 || ebp_28 < mem_stats.smallest_alloc )
    mem_stats.smallest_alloc = ebp_28;
  if ( mem_stats.largest_alloc < ebp_28 )
    mem_stats.largest_alloc = ebp_28;
  mem_stats.current_mem_usage += mem_stats.largest_alloc;
  if ( mem_stats.largest_mem_usage < mem_stats.current_mem_usage + mem_stats.largest_alloc )
    mem_stats.largest_mem_usage = mem_stats.largest_alloc;
  ((int*)block)[0] = ebp_28 + 8;
  if ( ((int*)block)[0] )
  {
    if ( actsize >= 4 )
    {
      if ( ( ((int*)block)[0] & 1 ) & 255 )
        *(char*)(malloc( actsize + 8 ) + 8) = 0;
      if ( ( ebp_28 + 9 ) & 2 )
        ((int*)block)[0] = 0;
      memset( *(int*)(0), 0, ( actsize >> 2 ) * 4 );
      if ( ( actsize & 2 ) & 255 )
      {
        ((int*)block)[0] = 0;
        if ( actsize & 1 )
        {
          ((int*)block)[0] = 0;
          return &((int*)block)[0];
        }
      }
    }
    else
    if ( ( actsize/*.1_1of4*/ & 2 ) & 255 )
    {
      ((int*)block)[0] = 0;
    }
    actsize &= 1;
    if ( actsize & 1 )
    {
      ((int*)block)[0] = 0;
      return &((int*)block)[0];
    }
  }
  return &((int*)block)[0];
}
}
void *pov_realloc( void *ptr, size_t size, char *file, int line, char *msg )
{
  int eax;
  int ecx;
  int edx;
{
  void *block;
  size_t oldsize;
  if ( size == 0 )
  {
    if ( ((int*)ptr)[0] )
    {
      pov_free( &((int*)ptr)[0], &file[0], line );
      return 0 + 8;
    }
    return 0 + 8;
  }
  else
  {
    if ( ((int*)ptr)[0] == 0 )
    {
      line = msg;
      file = &line;
      size = file[0];
      ptr = &size;
    }
    ((int*)block)[0] = ((int*)ptr)[ -8 ];
    oldsize = ((int*)ptr)[ -8 ];
    if ( ((int*)block)[0] == 0 )
    {
      MAError( msg, size );
    }
    if ( mem_stats.smallest_alloc < 0 || size + 8 < mem_stats.smallest_alloc )
      mem_stats.smallest_alloc = size + 8;
    if ( mem_stats.largest_alloc < mem_stats.smallest_alloc )
      mem_stats.largest_alloc = mem_stats.smallest_alloc;
    mem_stats.current_mem_usage = mem_stats.largest_alloc + ( mem_stats.current_mem_usage - oldsize );
    if ( mem_stats.largest_mem_usage < mem_stats.largest_alloc + ( mem_stats.current_mem_usage - oldsize ) )
      mem_stats.largest_mem_usage = mem_stats.current_mem_usage - oldsize;
    *ebp_32 = mem_stats.largest_alloc;
    ebp_32 += 8;
    return 0 + 8;
  }
}
}
void pov_free( void *ptr, char *file, int line )
{
  int eax;
  int edx;
{
  void *block;
  if ( ptr == 0 )
  {
    Error( "Attempt to free NULL pointer (File: %s Line: %d)." );
  }
  block = &((int*)ptr)[ -8 ];
  mem_stats.current_mem_usage -= ((int*)ptr)[ -8 ];
  ptr = &((int*)ptr)[ -8 ];
}
}
void mem_mark( void )
{
  return;
}
void mem_release( void )
{
  return;
}
void mem_release_all( void )
{
  mem_stats.smallest_alloc = 65535;
  mem_stats.largest_alloc = 0;
  mem_stats.current_mem_usage = 0;
  mem_stats.largest_mem_usage = 0;
  return;
}
char *pov_strdup( char *s )
{
  int eax;
{
  char *New;
  if ( ( __MOD(s,4) ) == 0 )
    goto B2;
  else
  {
    if ( ( __MOD(s,4) ) == 2 )
      goto B4;
    else
    if ( eax < 2 )
    {
      if ( *(char*)(edi + 1 + 1) )
      {
      }
      else
      {
        if ( 0 == ( ( edi + 1 + 1 ) - s[0] ) + 1 )
        {
          Error( "Attempt to malloc zero size block (File: %s Line: %d)." );
        }
        if ( malloc( ( ( ( ( edi + 1 ) - s[0] ) + 1 + 1 ) - s[0] ) + 1 + 8 ) == 0 )
        {
          MAError( &s[0], edi );
          *ebp_28 = ebp_28;
        }
        *ebp_28 = ( ( edi + 1 ) - s[0] ) + 1 + 8;
        if ( mem_stats.smallest_alloc < 0 || ebp_28 < mem_stats.smallest_alloc )
          mem_stats.smallest_alloc = ebp_28;
        if ( mem_stats.largest_alloc < mem_stats.smallest_alloc )
          mem_stats.largest_alloc = mem_stats.smallest_alloc;
        mem_stats.current_mem_usage += mem_stats.largest_alloc;
        if ( mem_stats.largest_mem_usage < mem_stats.current_mem_usage + mem_stats.largest_alloc )
          mem_stats.largest_mem_usage = mem_stats.largest_alloc;
        New[0] = ebp_28 + 8;
        strcpy( malloc( ( ( edi + 1 ) - s[0] ) + 1 + 8 ) + 8, &s[0] );
        return &New[0];
      }
    }
    else
    if ( s[0] )
    {
    }
B4:    if ( s[1] )
    {
    }
  }
B2:  do
  {
B2:  }
  while ( ( ( s[4] - 0x1010101 ) & ~s[4] & -2139062144 ) == 0 );
  if ( ( eax & 32896 ) == 0 )
    eax[0] = eax >> 16;
}
}
void *pov_memmove( void *dest, void *src, size_t length )
{
  int eax;
  int ecx;
  int edx;
  int ebp_16;
{
  char *csrc;
  char *cdest;
  if ( src < dest && dest <= length + src )
  {
    size_t size;
    if ( length )
    {
      size = dest - src;
      do
      {
        length -= size;
        if ( size >= 4 )
        {
          if ( ( ((int*)dest)[ length - size ] & 1 ) & 255 )
          {
            ((int*)dest)[ length - size ] = ((int*)src)[ length - size ];
            ebp_16 = size - 1;
          }
          if ( ( ((int*)dest)[ length - size ] + 1 ) & 2 )
          {
            ((int*)dest)[ length - size ] = ((int*)src)[ length - size ];
            ebp_16 -= 2;
          }
          memcpy( *(int*)(0), *(int*)(0), ( ebp_16 >> 2 ) * 4 );
        }
        if ( ( ebp_16 & 2 ) & 255 )
          edi = esi;
        if ( ( ebp_16 & 1 ) & 255 )
          *(char*)(edi + 2) = *(char*)(esi + 2);
      }
      while ( length );
    }
  }
  else
  {
    if ( src <= dest || length + dest < src )
    {
      cdest[0] = dest;
      csrc[0] = src;
      if ( length >= 4 )
      {
        if ( cdest[0] & 1 )
        {
          cdest[0] = csrc[0];
          length--;
        }
        if ( ((int*)dest)[0] & 2 )
        {
          ((int*)dest)[0] = csrc[1];
          length -= 2;
        }
        memcpy( *(int*)(0), *(int*)(0), ( length >> 2 ) * 4 );
      }
      if ( ( length/*.1_1of4*/ & 2 ) & 255 )
        cdest[0] = csrc[0];
      if ( ( length/*.1_1of4*/ & 1 ) & 255 )
      {
      }
    }
    else
    {
      char *new_dest;
      size_t size;
      if ( length )
      {
        size = src - dest;
        ebp_16 = dest;
        do
        {
          new_dest[0] = ebp_16;
          csrc[0] = src + size;
          if ( length >= 4 )
          {
            if ( new_dest[0] & 1 )
            {
              new_dest[0] = csrc[0];
              length = length - size - 1;
            }
            if ( new_dest[0] & 2 )
            {
              new_dest[0] = csrc[0];
              length -= 2;
            }
            memcpy( *(int*)(0), *(int*)(0), ( length >> 2 ) * 4 );
          }
          if ( ( ebx & 2 ) & 255 )
            new_dest[0] = csrc[0];
          length &= 1;
          if ( length & 1 )
            new_dest[2] = csrc[ 2 ];
          ebp_16 += size;
          length -= size;
        }
        while ( length );
      }
    }
  }
  dest = dest;
  return dest;
}
}
size_t mem_stats_smallest_alloc( void )
{
  return mem_stats.smallest_alloc;
}
size_t mem_stats_largest_alloc( void )
{
  return mem_stats.largest_alloc;
}
size_t mem_stats_current_mem_usage( void )
{
  return mem_stats.current_mem_usage;
}
size_t mem_stats_largest_mem_usage( void )
{
  return mem_stats.largest_mem_usage;
}
}
#if 0
#endif
