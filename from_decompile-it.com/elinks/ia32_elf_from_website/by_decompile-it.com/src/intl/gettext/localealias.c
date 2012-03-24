#include "localealias.c.h"
static unsigned char *string_space;
static size_t string_space_act;
static size_t string_space_max;
static struct alias_map *map;
static size_t nmap;
static size_t maxmap;
unsigned char *_nl_expand_alias( unsigned char *name )
{
  int eax;
  int edx;
  static unsigned char *locale_alias_path = "/usr/share/locale";
  unsigned char *result;
  size_t added;
{
  struct alias_map item;
  do
  {
    nmap = nmap;
    item.alias = &name[0];
    if ( nmap && bsearch( item.alias, map, nmap, 8, &alias_compare ) )
    {
      break;
    }
    if ( locale_alias_path[0] )
    {
      do
      {
      {
        while ( locale_alias_path[0] != ':' )
        {
          if ( start[0] & 255 )
          {
            do
            {
              start[0] = start[1];
            }
            while ( start[0] != ':' && ( start[0] & 255 ) );
            start[0] = start[0];
          }
          if ( start[0] <= start[0] )
          {
            if ( start[0] == 0 )
              locale_alias_path = &start[0];
            else
            {
              edi = start[0];
            }
          }
          else
          {
            locale_alias_path = &start[0];
            if ( added )
            {
              do
              {
                nmap = nmap;
                item.alias = &name[0];
              }
              while ( added );
              if ( locale_alias_path[0] )
              {
                do
                {
                {
                  while ( locale_alias_path[0] != ':' )
                  {
                  }
                  do
                  {
                    start[0] = start[1];
                  }
                  while ( start[0] == ':' );
                  start[0] = start[0];
                }
                }
                while ( locale_alias_path[0] == 0 );
              }
              else
            }
          }
        }
        do
        {
          start[0] = start[1];
        }
        while ( start[0] == ':' );
      }
      }
      while ( locale_alias_path[0] == 0 );
    }
    result[0] = 0;
    break;
  }
  while ( added );
}
}
size_t read_alias_file( unsigned char *fname, int fname_len )
{
  int ecx;
  FILE *fp;
  size_t added;
  *(int*)(mempcpy( mem_alloc( fname_len + 14 ), &fname[0], fname_len )) = 0x636f6c2f;
  *(int*)(mempcpy( mem_alloc( fname_len + 14 ), &fname[0], fname_len ) + 4) = 0x2e656c61;
  *(int*)(mempcpy( mem_alloc( fname_len + 14 ), &fname[0], fname_len ) + 8) = 0x61696c61;
  *(short*)(mempcpy( mem_alloc( fname_len + 14 ), &fname[0], fname_len ) + 12) = 115;
  fp = fopen64( *ebp_16472, "rb" );
  mem_free( *ebp_16472 );
  added = 0;
  if ( fp[0]._flags )
  {
    while ( !( ( fp->_flags/*.1_1of4*/ & 16 ) & 255 ) && fgets_unlocked( buf, 8192, &fp[0] ) )
    {
      if ( strchr( buf, 10 ) == 0 )
      {
        do
        {
        }
        while ( !fgets_unlocked( ebp_16412, 8192, &fp[0] ) || strchr( ebp_16412, 10 ) );
      }
    {
      unsigned char altbuf[8192];
      cp[0] = buf[0];
      if ( cp[0] == '#' || ( cp[0] & 255 ) == 0 )
        continue;
      else
      {
        cp[0] = cp[0] + 1;
        if ( cp[1] )
        {
          cp[0] = 0;
          cp[0] = cp[1];
        }
        else
          cp[0] = cp[0];
        if ( ( cp[0] & 255 ) == 0 )
          continue;
        else
        {
          size_t alias_len;
          size_t value_len;
          if ( cp[1] )
          {
            if ( cp[1] == 10 )
            {
              cp[1] = 0;
              cp[1] = 10;
            }
            else
              cp[1] = 0;
          }
          if ( maxmap <= nmap )
          {
            if ( realloc( map, 800 ? 800 << 4 : 800 ) )
            {
              map = (struct sgml_node_info*)realloc( map, 800 ? 800 << 4 : 800 );
              maxmap = edx;
            }
          }
          alias_len = strlen( &cp[0] ) + 1;
          value_len = strlen( &cp[0] ) + 1;
          if ( string_space_act + value_len + alias_len <= string_space_max )
          {
          }
          else
          {
            size_t new_size = new_pool[ (unsigned char)( ( value_len + alias_len < 1024 ) ^ 1 ) ? 1024 : value_len + alias_len ];
            unsigned char *new_pool = (unsigned char*)realloc( string_space, new_pool[ (unsigned char)( ( value_len + alias_len < 1024 ) ^ 1 ) ? 1024 : value_len + alias_len ] );
            if ( new_pool )
            {
              if ( string_space == new_pool )
              {
              }
              else
            {
              size_t i;
              if ( nmap )
              {
                string_space[0] = new_pool - string_space;
                i = 0;
                do
                {
                  map->string.length += new_pool - string_space;
                  map->string.string += new_pool - string_space;
                  i++;
                }
                while ( i + 1 < nmap );
              }
              else
              {
              }
            }
              string_space_max = new_size;
              string_space = new_pool;
            }
          }
          map->string.length = memcpy( string_space + added, &cp[0] );
          string_space_act += ebp_16444;
          map->string.string = (unsigned char*)memcpy( &string_space[ ebp_16444 + string_space_act ], &cp[0] );
          string_space_act += ebp_16440;
          nmap++;
          added++;
        }
      }
    }
    }
    fclose( &fp[0] );
    if ( added )
      qsort( map, nmap, 8, &alias_compare );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return added;
}
int alias_compare( struct alias_map *map1, struct alias_map *map2 )
{
  map2 = &map2[0];
  map1 = &map1[0];
}
#if 0
#endif
