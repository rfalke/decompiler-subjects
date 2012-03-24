#include "fastfind.c.h"
int alloc_leafset( struct fastfind_info *info )
{
  if ( assert_failed == 0 )
  {
    assert_failed = info->leafsets_count > 8190;
    if ( info->leafsets_count > 8190 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/fastfind.c";
      errline = 344;
      elinks_internal( "assertion info-&gt;leafsets_count &lt; FF_MAX_LEAFSETS failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( mem_realloc( (void*)&info->leafsets, ( info->leafsets_count + 2 ) * 4 ) )
    {
      info->leafsets = (struct ff_node_c**)mem_realloc( (void*)&info->leafsets, ( info->leafsets_count + 2 ) * 4 );
      if ( mem_calloc( info->uniq_chars_count, 4 ) )
      {
        info->leafsets_count++;
        info->leafsets[ info->leafsets_count + 1 ] = (struct ff_node_c*)mem_calloc( info->uniq_chars_count, 4 );
        return 1;
      }
    }
    return 1;
  }
B2:  assert_failed = 0;
  return 0;
}
void compress_tree( struct ff_node_c *leafset, struct fastfind_info *info )
{
  int ecx;
  int cnt;
  int pos;
  int i;
  if ( assert_failed == 0 )
  {
    assert_failed = info[0].data == 0;
    if ( !(_Bool)( info[0].data != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/fastfind.c";
      errline = 412;
      elinks_internal( "assertion info failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( info->uniq_chars_count >= 1 )
    {
      i = 0;
      cnt = 0;
      pos = 0;
      do
      {
        if ( ( ( ebx & 2 ) & 255 ) == 0 )
        {
          if ( ebx & 0x1fff000 )
          {
            compress_tree( info->leafsets[ ( eax >> 12 ) & 8191 ], &info[0] );
          }
          if ( leafset & 0x1fff001 )
          {
            cnt++;
            pos = i;
          }
        }
        i++;
      }
      while ( i + 1 < info->uniq_chars_count );
      if ( cnt == 1 && !( ( *(char*)(leafset + ( pos << 2 )) & 2 ) & 255 ) && info->leafsets_count > 1 )
      {
        if ( info->leafsets[1] != leafset )
        {
          i = 1;
          leafset = leafset;
          do
          {
            i++;
            if ( info->leafsets_count <= i + 1 )
              break;
          }
          while ( info->leafsets[ i ] != leafset[0].bits_at_0 );
        }
        if ( mem_alloc( 4 ) )
        {
          *(char*)(mem_alloc( 4 )) = *(char*)(mem_alloc( 4 )) | 2;
          *(char*)(mem_alloc( 4 )) = ( ( eax | 2 ) & -2 ) | ( esi & 1 );
          *(short*)(mem_alloc( 4 )) = ( eax & 61443 ) | ( esi & 4092 );
          *(int*)(mem_alloc( 4 )) = ( eax & -33550337 ) | ( esi & 0x1fff000 );
          *(char*)(mem_alloc( 4 ) + 3) = ( ( ( ( eax & -33550337 ) | ( esi & 0x1fff000 ) ) >> 24 ) & 1 ) | ( pos/*.1_1of4*/ * 2 );
          if ( info->leafsets[ i ] )
          {
            mem_free( (void*)info->leafsets[ i ] );
          }
          info->leafsets[ i ] = (struct ff_node_c*)mem_alloc( 4 );
          return;
        }
        else
        {
          return;
        }
      }
      else
      {
        return;
      }
    }
    else
    {
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
struct fastfind_index *fastfind_index( struct fastfind_index *index, enum fastfind_flags  flags )
{
  int eax;
  int ecx;
  int edx;
  struct fastfind_key_value *p;
  struct fastfind_info *info;
  if ( assert_failed == 0 )
  {
    if ( index && index->reset && index->next )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/fastfind.c";
      errline = 448;
      elinks_internal( "assertion index && index-&gt;reset && index-&gt;next failed!" );
      if ( assert_failed == 0 )
        goto B14;
    }
B14:    index->handle = mem_calloc( 1, 680 );
    if ( index->handle )
    {
      info->min_key_len = 255;
      info->bits_at_36/*.1_1of4*/ = ( ( ( *(char*)(index->handle + 36) & -4 ) | ( flags & 1 ) | ( ( ( flags >> 2 ) & 1 ) * 2 ) ) & -5 ) | ( ( ( flags >> 1 ) & 1 ) << 2 );
      index->reset(  );
    {
      int i;
      int k;
      while ( p == 0 )
      {
        if ( assert_failed == 0 )
        {
          assert_failed = strlen( (char*)p[0].key ) - 1 > 254;
          if ( strlen( (char*)p[0].key ) - 1 > 254 )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/fastfind.c";
            errline = 461;
            elinks_internal( "assertion key_len &gt; 0 && key_len &lt;= FF_MAX_KEYLEN failed!" );
            if ( assert_failed )
              goto B2;
          }
          if ( strlen( (char*)p[0].key ) < info->min_key_len )
            info->min_key_len = strlen( (char*)p[0].key );
          if ( info->max_key_len < strlen( (char*)p[0].key ) )
            info->max_key_len = strlen( (char*)p[0].key );
          if ( strlen( (char*)p[0].key ) >= 1 )
          {
            do
            {
              if ( ( info->bits_at_36/*.1_1of4*/ & 1 ) & 255 )
              {
              }
              else
              if ( ( (int)info->bits_at_36/*.1_1of4*/ & 2 ) & 255 )
              {
              }
              else
              {
                if ( assert_failed == 0 )
                {
                  assert_failed = p->key[1] > 127;
                  if ( p->key[1] > 127 )
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/fastfind.c";
                    errline = 477;
                    elinks_internal( "assertion k &lt; FF_MAX_CHARS failed!" );
                    if ( assert_failed )
                      goto B2;
                  }
                  if ( eax == 0 || eax - ebp_28 == -1 )
                  {
                    assert_failed = info->uniq_chars_count > 127;
                    if ( info->uniq_chars_count > 127 )
                    {
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/fastfind.c";
                      errline = 481;
                      elinks_internal( "assertion info-&gt;uniq_chars_count &lt; FF_MAX_CHARS failed!" );
                      if ( assert_failed )
                        goto B2;
                    }
                    info->uniq_chars_count++;
                    if ( 0 + 1 + 1 < strlen( (char*)p[0].key ) )
                      continue;
                    else
                      break;
                  }
                  else
                  {
                  }
                }
              }
              if ( assert_failed == 0 )
              {
                assert_failed = p->key[1] > 127;
              }
            }
            while ( 0 + 1 + 1 < strlen( (char*)p[0].key ) );
          }
          info->count++;
        }
      }
      if ( info->count )
      {
        info = &info[0];
        do
        {
          info->idxtab[ 0 ] = memchr( &info->uniq_chars[0], 0 + 1, info->uniq_chars_count ) == 0 ? memchr( &info->uniq_chars[0], 0 + 1, info->uniq_chars_count ) - info->uniq_chars[0] : -1;
        }
        while ( 0 + 1 + 1 != 128 );
        if ( alloc_leafset( &info[0] ) )
        {
          info->root_leafset = info->leafsets[ info->leafsets_count ];
          if ( assert_failed == 0 )
          {
            assert_failed = info->count > 1023;
            if ( info->count > 1023 )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/fastfind.c";
              errline = 312;
              elinks_internal( "assertion info-&gt;count &lt; FF_MAX_KEYS failed!" );
              if ( assert_failed )
                goto B2;
            }
            if ( mem_calloc( info->count, 8 ) )
            {
              info = (struct fastfind_info*)mem_calloc( info->count, 8 );
              index->reset(  );
              while ( index->next(  ) == 0 )
              {
                struct ff_node_c *leafset;
                int i = 0;
                p = strlen( *(int*)(index->next(  )) );
                leafset = info->root_leafset;
                if ( p - 1 >= 1 )
                {
                  while ( 1 )
                  {
                    if ( ( info->bits_at_36/*.1_1of4*/ & 1 ) & 255 )
                    {
                    }
                    else
                    if ( ( (int)info->bits_at_36/*.1_1of4*/ & 2 ) & 255 )
                      c_toupper( *(char*)(i + *(int*)(index->next(  ))) );
                    else
                    {
                      int __res;
                      if ( *(int*)(edi + ( info->idxtab[ *(int*)(eax + ( *(char*)(ebp_40 + i) << 2 )) ] << 2 )) & 0x1fff000 )
                        eax = ( eax >> 12 ) & 8191;
                        i++;
                        leafset = info->leafsets[ ( ( info->leafsets_count/*.1_2of4*/ & 8191 ) >> 12 ) & 8191 ];
                        if ( p - 1 <= i + 1 )
                        {
                        }
                        else
                        {
                        }
                      else
                      {
                        if ( alloc_leafset( &info[0] ) )
                          leafset[0].ff_node_c = ( leafset[0].ff_node_c & -33550337 ) | ( ( info->leafsets_count/*.1_2of4*/ & 8191 ) << 12 );
                          i++;
                          leafset = info->leafsets[ ( ( info->leafsets_count/*.1_2of4*/ & 8191 ) >> 12 ) & 8191 ];
                        else
                          fastfind_done( index );
                          index = 0;
                          break;
                      }
                    }
                    if ( *(int*)(edi + ( info->idxtab[ eax ] << 2 )) & 0x1fff000 )
                      eax = ( eax >> 12 ) & 8191;
                      i++;
                      leafset = info->leafsets[ ( ( info->leafsets_count/*.1_2of4*/ & 8191 ) >> 12 ) & 8191 ];
                    else
                    {
                    }
                  }
                }
                if ( ( info->bits_at_36/*.1_1of4*/ & 1 ) & 255 )
                {
                }
                else
                if ( ( (int)info->bits_at_36/*.1_1of4*/ & 2 ) & 255 )
                {
                  c_toupper( *(char*)(*(int*)(index->next(  )) + i) );
                  *ebp_40 = ebp_40;
                }
                else
                {
                  int __res;
                  *ebp_40 = ebp_40;
                  __res = __res;
                }
                info->pointers_count++;
                info->data = *(int*)(index->next(  ) + 4);
                info->data->keylen = p;
              }
              if ( ( info->bits_at_36/*.1_1of4*/ & 4 ) & 255 )
              {
                compress_tree( info->root_leafset, &info[0] );
              }
              return index;
            }
          }
        }
      }
      else
      {
        index = 0;
        return index;
      }
    }
    }
  }
B2:  assert_failed = 0;
}
void *fastfind_search( struct fastfind_index *index, unsigned char *key, int key_len )
{
  int eax;
  int edx;
  struct ff_node_c *current;
  struct fastfind_info *info;
  if ( assert_failed == 0 )
  {
    assert_failed = index[0].comment == 0;
    if ( !(_Bool)( index[0].comment != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/fastfind.c";
      errline = 602;
      elinks_internal( "assertion index failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    info = *(int*)(ebp_40 + 12);
    assert_failed = *(int*)(ebp_40 + 12) == 0;
    if ( !(_Bool)( *(int*)(ebp_40 + 12) != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/fastfind.c";
      errline = 607;
      elinks_internal( "assertion info != NULL failed: FastFind index %s not initialized" );
      if ( assert_failed )
        goto B2;
    }
    if ( key[0] && key_len <= info->max_key_len && info->min_key_len <= key_len )
    {
      current = info->root_leafset;
      if ( ( info->bits_at_36/*.1_1of4*/ & 1 ) & 255 )
      {
        int i;
        if ( key_len >= 1 && key[0] <= 127 && info->idxtab[ lidx ] >= 0 )
        {
          i = 0;
          do
          {
            if ( ( current->bits_at_0/*.1_1of4*/ & 2 ) & 255 )
            {
              if ( info->idxtab[ *(char*)(key[0] + i) ] != ( ( current->bits_at_0/*.4_4of4*/ >> 1 ) & 255 ) )
              {
                break;
              }
            }
            else
              current = current[0].bits_at_0 + ( lidx << 2 );
            if ( ( ( (int)current[0].ff_node_c & 1 ) & 255 ) && key_len == data->keylen )
              goto B31;
          }
          while ( ( current[0].ff_node_c & 0x1fff000 ) && i + 1 < key_len && *(char*)(key[0] + i) <= 127 && info->idxtab[ *(char*)(key[0] + i) ] >= 0 );
        }
      }
      else
      if ( ( (int)info->bits_at_36/*.1_1of4*/ & 2 ) & 255 )
      {
        if ( key_len >= 1 )
        {
          do
          {
            if ( c_toupper( key[0] ) <= 127 && info->idxtab[ c_toupper( key[0] ) ] >= 0 )
            {
              if ( ( current->bits_at_0/*.1_1of4*/ & 2 ) & 255 )
              {
                if ( edx != ( current->bits_at_0/*.4_4of4*/ >> 1 ) )
                {
                  break;
                }
              }
              else
              {
                int lidx, k;
                current = current[0].bits_at_0 + ( lidx << 2 );
              }
              if ( ( ( (int)current[0].ff_node_c & 1 ) & 255 ) && key_len == data->keylen )
                goto B31;
            }
            else
              break;
          }
          while ( ( current[0].ff_node_c & 0x1fff000 ) && 0 + 1 + 1 < key_len );
        }
      }
      else
      if ( key_len >= 1 )
      {
        int i;
      {
        do
        {
          int __res;
          *ebp_36 = key[0];
          if ( *(int*)(*(int*)(__ctype_toupper_loc(  )) + ( *(char*)(key[0] + 0 + 1) << 2 )) <= 127 && info->idxtab[ *(int*)(*(int*)(__ctype_toupper_loc(  )) + ( *(char*)(key[0] + 0 + 1) << 2 )) ] >= 0 )
          {
            if ( ( current->bits_at_0/*.1_1of4*/ & 2 ) & 255 )
            {
              if ( esi != ( ( current->bits_at_0/*.4_4of4*/ >> 1 ) & 255 ) )
              {
                break;
              }
            }
            else
            {
              int lidx;
              current = current[0].bits_at_0 + ( lidx << 2 );
            }
            if ( ( ( (int)current[0].ff_node_c & 1 ) & 255 ) && key_len == data->keylen )
              goto B31;
          }
          else
            break;
        }
        while ( ( current[0].ff_node_c & 0x1fff000 ) && 0 + 1 + 1 < key_len );
      }
      }
B31:      return 0;
    }
  {
    int i;
    return 0;
  }
  }
B2:  assert_failed = 0;
  return 0;
}
void fastfind_done( struct fastfind_index *index )
{
  int eax;
  int ecx;
  struct fastfind_info *info;
  if ( assert_failed == 0 )
  {
    assert_failed = index[0].comment == 0;
    if ( !(_Bool)( index[0].comment != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/fastfind.c";
      errline = 643;
      elinks_internal( "assertion index failed!" );
      if ( assert_failed )
      {
        index = &index[0];
      }
    }
    info = &index->handle[0];
    if ( index->handle )
    {
      void *p = (void*)info->data;
      if ( info->data )
        mem_free( &((int*)p)[0] );
      if ( info->leafsets_count )
      {
        info->leafsets[0] = info->leafsets[0];
      {
        do
        {
          void *p = (void*)info->leafsets[ ((int*)p)[0] ];
          if ( info->leafsets[ ((int*)p)[0] ] )
          {
            mem_free( &((int*)p)[0] );
            info->leafsets_count = info->leafsets_count;
          }
          info->leafsets_count = eax - 1;
        }
        while ( eax - 1 );
      }
      }
      else
        info->leafsets[0] = info->leafsets[0];
    {
      void *p;
      if ( ((int*)p)[0] )
        mem_free( &((int*)p)[0] );
      mem_free( (void*)info[0].data );
      index->handle = 0;
    }
    }
    return;
  }
  assert_failed = 0;
  return;
}
#if 0
#endif
