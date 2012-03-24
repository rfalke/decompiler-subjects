#include "cache.c.h"
static struct list_head_elinks cache_entries = { &cache_entries, &cache_entries };
static unsigned long long cache_size;
static int id_counter = 1;
unsigned long long get_cache_size( void )
{
  return cache_size;
}
int get_cache_entry_used_count( void )
{
  int eax;
  struct cache_entry *cached;
  int i;
  &cached[0] = &cache_entries.next[0];
  i = 0;
  if ( cache_entries.next != cache_entries.next )
  {
    do
    {
      &cached[0] = &cached;
      i += cached->object.refcount != 0;
    }
    while ( cached->next != cache_entries.next );
  }
  return 0;
}
int get_cache_entry_loading_count( void )
{
  struct cache_entry *cached;
  int i = 0;
  cached = &cache_entries.next[0];
  if ( cache_entries.next != cache_entries.next )
  {
    do
    {
      cached = &cached;
      i += is_entry_used( &cached );
    }
    while ( cached->next != cache_entries.next );
  }
  return i;
}
struct cache_entry *find_in_cache( struct uri *uri )
{
  int eax;
  struct cache_entry *cached;
  &cached[0] = &cache_entries.next[0];
  if ( cache_entries.next != cache_entries.next )
  {
    do
    {
      struct uri *c_uri;
      if ( ( ( cached->bits_at_92/*.1_1of4*/ & 16 ) & 255 ) && compare_uri( &c_uri[0], &uri[0], URI_BASE ) )
      {
        if ( cached[0].next != cache_entries.next )
        {
          cached->prev = cached->prev;
          &cached->prev = &cached;
          cached->prev = &cache_entries.next[0];
          cached = &cache_entries.next[0];
          cache_entries.next = (void*)cached[0].next;
          cached->prev = &cached[0];
          break;
        }
      }
      else
      {
        &cached = &cached;
      }
    }
    while ( cached->next != cache_entries.next );
    uri = &uri[0];
  }
  &cached[0] = 0;
  return &cached[0];
}
struct cache_entry *get_cache_entry( struct uri *uri )
{
  struct cache_entry *cached;
  &cached[0] = find_in_cache( uri );
  if ( assert_failed == 0 )
  {
    assert_failed = uri->fragment != 0;
    if ( uri->fragment )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/cache/cache.c";
      errline = 131;
      elinks_internal( "assertion !uri-&gt;fragment failed: Fragment in URI (%s)" );
    }
  }
  if ( cached[0].next == 0 )
  {
    shrink_memory( 0 );
    if ( mem_calloc( 1, 100 ) )
    {
      *(int*)(mem_calloc( 1, 100 ) + 20) = get_proxied_uri( &uri[0] );
      if ( mem_calloc( 1, 100 ) + 20 )
      {
        *(int*)(mem_calloc( 1, 100 ) + 24) = get_proxy_uri( &uri[0], 0 );
        if ( mem_calloc( 1, 100 ) + 24 == 0 )
          done_uri( *(int*)(mem_calloc( 1, 100 ) + 20) );
        else
        {
          *(char*)(mem_calloc( 1, 100 ) + 92) |= 24;
          &cached[0] = (struct cache_entry*)mem_calloc( 1, 100 );
          *(int*)(mem_calloc( 1, 100 ) + 16) = mem_calloc( 1, 100 ) + 12;
          *(int*)(mem_calloc( 1, 100 ) + 12) = mem_calloc( 1, 100 ) + 12;
          *(int*)(mem_calloc( 1, 100 ) + 56) = id_counter;
          *(int*)(mem_calloc( 1, 100 ) + 80) = add_listbox_item( &cache_browser, 0, BI_LEAF, mem_calloc( 1, 100 ), 1 );
          *(int*)(mem_calloc( 1, 100 ) + 4) = cache_entries;
          *(int*)(mem_calloc( 1, 100 )) = cache_entries;
          cache_entries.next = mem_calloc( 1, 100 );
          *(int*)(*(int*)(mem_calloc( 1, 100 )) + 4) = mem_calloc( 1, 100 );
          id_counter++;
          return &cached[0];
        }
      }
      mem_free( mem_calloc( 1, 100 ) );
      return &cached[0];
    }
    else
    {
      return &cached[0];
    }
  }
  else
  {
    return &cached[0];
  }
}
struct cache_entry *get_validated_cache_entry( struct uri *uri, enum cache_mode  cache_mode )
{
  int eax;
  struct cache_entry *cached;
  if ( cache_mode <= 1 )
  {
    if ( find_in_cache( uri ) )
    {
      if ( ( ( *(char*)(find_in_cache( uri ) + 92) & 8 ) & 255 ) == 0 )
      {
        if ( cache_mode && cached->cache_mode == CACHE_MODE_NEVER )
        {
        }
        else
        {
          if ( cached->redirect )
          {
            if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
              return (int)cached->bits_at_92/*.1_1of4*/;
          }
          if ( ( (int)cached->bits_at_92/*.1_1of4*/ & 1 ) & 255 )
          {
            timeval_now( ebp_16 );
            if ( timeval_cmp( &cached->max_age, ebp_16 ) < 1 )
              goto B21;
          }
          if ( cached->cache_mode <= 2 )
          {
            if ( cached->last_modified == 0 && cached->etag == 0 )
            {
            }
            if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) >= 0 && cached->seconds < time( 0 ) )
              goto B2;
          }
          else
          {
          }
        }
B21:        if ( cached->object.object == 0 )
        {
          delete_cache_entry( &cached[0] );
        }
      }
    }
    else
    {
    }
  }
B2:  &cached[0] = 0;
}
int cache_entry_is_valid( struct cache_entry *cached )
{
  int edx;
  struct cache_entry *valid_cached;
  &valid_cached[0] = &cache_entries.next[0];
  if ( cache_entries.next != cache_entries.next )
  {
    if ( valid_cached[0].next != cached[0].next )
    {
      do
      {
        &valid_cached[0] = &valid_cached;
        if ( valid_cached->next != cache_entries.next )
          continue;
      }
      while ( valid_cached[0].next != cached[0].next );
    }
    return 1;
  }
  return 0;
}
int get_cache_entry_count( void )
{
  int eax;
  if ( cache_entries.next != cache_entries.next )
  {
    do
    {
    }
    while ( cache_entries.next != cache_entries.next );
  }
  return 0 + 1;
}
struct cache_entry *follow_cached_redirects( struct cache_entry *cached )
{
  int redirects;
  if ( cached && cached->redirect )
  {
    do
    {
      if ( find_in_cache( cached->redirect ) == 0 || cached->redirect == 0 )
        break;
      redirects++;
    }
    while ( redirects + 1 != 11 );
    &cached[0] = 0;
  }
  return 0;
}
struct cache_entry *get_redirected_cache_entry( struct uri *uri )
{
  struct cache_entry *cached;
  if ( cached[0].next )
  {
    uri = &cached[0].next[0];
  }
  return &cached[0];
}
struct fragment *frag_alloc( size_t size )
{
  struct fragment *f;
  if ( mem_mmap_alloc( size + 35 ) )
  {
    memset( mem_mmap_alloc( size + 35 ), 0, size + 35 );
  }
  return &f[0];
}
void remove_overlaps( struct cache_entry *cached, struct fragment *f, int *trunc )
{
  off_t f_end_offset;
  cached += 0;
  if ( cached->frag.next != f->next )
  {
    f_end_offset = f->length + f->offset;
    if ( (int)(f->offset << 32) <= (int)(f_end_offset << 32) )
    {
      if ( ccdep1 <= ccdep2 )
      {
        if ( (unsigned int)(f->offset & 0xFFFFFFFF) < (unsigned int)(f->offset & 0xFFFFFFFF) + (unsigned int)(f->length & 0xFFFFFFFF) )
        {
          while ( 1 )
          {
            if ( (int)(f_end_offset << 32) <= (unsigned int)(f->length << 32) + (unsigned int)(f->offset << 32) + ( ( (unsigned int)(f->offset & 0xFFFFFFFF) + *(int*)(f->next + 16) < *(int*)(f->next + 16) ) & 1 ) && ( ccdep1 < ccdep2 || (unsigned int)(f_end_offset & 0xFFFFFFFF) < (unsigned int)(f->offset & 0xFFFFFFFF) + *(int*)(ebx + 16) ) )
            {
              nf = (struct fragment*)mem_mmap_realloc( ebp_76, *(int*)(ebp_76 + 24) + 35, ( (unsigned int)(end_offset & 0xFFFFFFFF) - (unsigned int)(f->offset & 0xFFFFFFFF) ) + 35 );
              if ( mem_mmap_realloc( ebp_76, *(int*)(ebp_76 + 24) + 35, ( (unsigned int)(end_offset & 0xFFFFFFFF) - (unsigned int)(f->offset & 0xFFFFFFFF) ) + 35 ) )
              {
                *(int*)(*(int*)(mem_mmap_realloc( ebp_76, *(int*)(ebp_76 + 24) + 35, ( (unsigned int)(end_offset & 0xFFFFFFFF) - (unsigned int)(f->offset & 0xFFFFFFFF) ) + 35 ) + 4)) = nf[0];
                nf->prev = &nf[0];
                strcmp( &nf->data[0], nf->data[0] + ( (unsigned int)(nf->offset & 0xFFFFFFFF) - (unsigned int)(nf->offset & 0xFFFFFFFF) ) );
                if ( !1 )
                  trunc[0] = 1;
                (cached->data_size & 0xFFFFFFFF) = ( (unsigned int)(end_offset & 0xFFFFFFFF) - (unsigned int)(f_end_offset & 0xFFFFFFFF) ) + (unsigned int)(cached->data_size & 0xFFFFFFFF);
                memcpy( nf->data[0] + (unsigned int)(nf->length & 0xFFFFFFFF), nf->data[0] + ( (unsigned int)(f_end_offset & 0xFFFFFFFF) - (unsigned int)(nf->offset & 0xFFFFFFFF) ), (int)( (unsigned int)(end_offset & 0xFFFFFFFF) - (unsigned int)(f_end_offset & 0xFFFFFFFF) ) );
                if ( assert_failed == 0 )
                {
                  (cached->data_size << 32) = end_offset + (unsigned int)(cached->data_size << 32) + ( (unsigned int)(end_offset << 32) - (unsigned int)(f_end_offset << 32) - ( ( (unsigned int)(end_offset & 0xFFFFFFFF) < (unsigned int)(f_end_offset & 0xFFFFFFFF) ) & 1 ) );
                  assert_failed = ( end_offset + (unsigned int)(cached->data_size << 32) + ( (unsigned int)(end_offset << 32) - (unsigned int)(f_end_offset << 32) - ( ( (unsigned int)(end_offset & 0xFFFFFFFF) < (unsigned int)(f_end_offset & 0xFFFFFFFF) ) & 1 ) ) ) >> 31;
                  if ( ( end_offset + (unsigned int)(cached->data_size << 32) + ( (unsigned int)(end_offset << 32) - (unsigned int)(f_end_offset << 32) - ( ( (unsigned int)(end_offset & 0xFFFFFFFF) < (unsigned int)(f_end_offset & 0xFFFFFFFF) ) & 1 ) ) ) >> 31 )
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/cache/cache.c";
                    errline = 261;
                    elinks_internal( (int)( &(unsigned char*)(cached->data_size & 0xFFFFFFFF) ) );
                    if ( assert_failed )
                      goto B28;
                  }
                  cache_size += end_offset - f_end_offset;
                  assert_failed = 0;
                  nf->real_length = end_offset - nf->offset;
                  nf->length = end_offset - nf->offset;
                  (end_offset & 0xFFFFFFFF) = ( 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) + *(int*)(cached[0].next + 72);
                  (end_offset << 32) = ( 0 - ( (unsigned int)(f->length << 32) + ( ( *(int*)(f->next + 16) > 0 ) & 1 ) ) ) + *(int*)(cached[0].next + 76) + ( ( ( 0 - *(int*)(f->next + 16) ) + *(int*)(cached[0].next + 72) < 0 - *(int*)(f->next + 16) ) & 1 );
                  (cached->data_size & 0xFFFFFFFF) = ( 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) + *(int*)(cached[0].next + 72);
                  if ( assert_failed == 0 )
                  {
                    (cached->data_size << 32) = ( 0 - ( (unsigned int)(f->length << 32) + ( ( *(int*)(f->next + 16) > 0 ) & 1 ) ) ) + *(int*)(cached[0].next + 76) + ( ( ( 0 - *(int*)(f->next + 16) ) + *(int*)(cached[0].next + 72) < 0 - *(int*)(f->next + 16) ) & 1 );
                    assert_failed = (end_offset << 32) >> 31;
                    if ( (end_offset << 32) >> 31 )
                    {
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/cache/cache.c";
                      errline = 261;
                      elinks_internal( (int)( &(unsigned char*)(cached->data_size & 0xFFFFFFFF) ) );
                      if ( assert_failed )
                        goto B23;
                    }
                    (cache_size & 0xFFFFFFFF) = ( 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) + (unsigned int)(cache_size & 0xFFFFFFFF);
                    (cache_size << 32) = (unsigned int)(cache_size << 32) + ( 0 - ( (unsigned int)(f->length << 32) + ( ( *(int*)(f->next + 16) > 0 ) & 1 ) ) ) + ( ( ( 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) + (unsigned int)(cache_size & 0xFFFFFFFF) < (unsigned int)(cache_size & 0xFFFFFFFF) ) & 1 );
                    assert_failed = 0;
                    f->next->prev = f->prev;
                    &f->prev = &f;
                    mem_mmap_free( (void*)f->next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35 );
                    if ( nf->next == cached->frag.next || (int)(f_end_offset << 32) < (int)(nf->offset << 32) || ( ccdep1 <= ccdep2 && (unsigned int)(f_end_offset & 0xFFFFFFFF) <= (unsigned int)(nf->offset & 0xFFFFFFFF) ) )
                      break;
                  }
B23:                  (cache_size & 0xFFFFFFFF) = ( 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) + (unsigned int)(cache_size & 0xFFFFFFFF);
                  assert_failed = 0;
                  cached->data_size = (long long)0;
                  if ( assert_failed == 0 )
                    (cache_size << 32) = (unsigned int)(cache_size << 32) + ( 0 - ( (unsigned int)(f->length << 32) + ( ( *(int*)(f->next + 16) > 0 ) & 1 ) ) ) + ( ( ( 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) + (unsigned int)(cache_size & 0xFFFFFFFF) < (unsigned int)(cache_size & 0xFFFFFFFF) ) & 1 );
                    assert_failed = 0;
                    f->next->prev = f->prev;
                    &f->prev = &f;
                    mem_mmap_free( (void*)f->next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35 );
                  else
                  {
                    assert_failed = 0;
                    cache_size = 0;
                    f->next->prev = f->prev;
                    &f->prev = &f;
                    mem_mmap_free( (void*)f->next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35 );
                  }
                }
B28:                assert_failed = 0;
                cached->data_size = (long long)0;
                cache_size += end_offset - f_end_offset;
                if ( assert_failed == 0 )
                  assert_failed = 0;
                  nf->real_length = end_offset - nf->offset;
                  nf->length = end_offset - nf->offset;
                else
                {
                  assert_failed = 0;
                  cache_size = 0;
                  nf->real_length = end_offset - nf->offset;
                  nf->length = end_offset - nf->offset;
                }
              }
            }
            else
            {
              strcmp( f->next + 32, nf[0].next + ( (unsigned int)(f->offset & 0xFFFFFFFF) - *(int*)(ebp_76 + 8) ) + 32 );
              if ( !1 )
                trunc[0] = 1;
            }
          }
        }
      }
      else
      {
      }
    }
  }
  return;
}
int add_fragment( struct cache_entry *cached, off_t offset, unsigned char *data, ssize_t length )
{
  int eax;
  int ecx;
  int edx;
  struct fragment *f, *nf;
  int trunc;
  off_t end_offset;
  return 0;
}
struct fragment *get_cache_fragment( struct cache_entry *cached )
{
  int eax;
  int ecx;
  int edx;
  struct fragment *first_frag, *adj_frag, *frag, *new_frag;
  int new_frag_len;
  if ( cached->frag.next != cached->frag.next && ( cached->frag.list_head_elinks | (unsigned int)(first_frag->offset & 0xFFFFFFFF) ) == 0 )
  {
    if ( cached->frag.prev != cached->frag.next )
    {
      new_frag = &cached->frag.next[0];
      if ( cached->frag.next != cached->frag.next && (unsigned int)(new_frag->offset & 0xFFFFFFFF) + ( 0 - new_frag->prev - new_frag->prev ) < 1 )
      {
        if ( 1 )
        {
          adj_frag = new_frag;
          do
          {
            adj_frag = &adj_frag;
            if ( adj_frag->next != cached->frag.next )
            {
              if ( (unsigned int)(adj_frag->offset & 0xFFFFFFFF) + ( 0 - adj_frag->prev - adj_frag->prev ) >= 1 )
              {
                if ( adj_frag->next == new_frag )
                  break;
              }
              else
            }
            new_frag_len = 0;
            if ( adj_frag[0].next != cached->frag.next )
            {
              frag = new_frag;
              &frag[0] = &cached->frag.next[0];
              new_frag = &cached->frag.next[0];
              while ( new_frag_len += (int)(frag->length & 0xFFFFFFFF), frag[0].next != adj_frag[0].next )
              {
                frag = &frag;
              }
              &first_frag = &first_frag;
            }
            *ebp_40 = new_frag_len;
            new_frag = frag_alloc(  );
            if ( new_frag == 0 )
            {
              if ( new_frag->length == 0 )
                goto B1;
            }
            else
            {
              new_frag->length = new_frag_len;
              new_frag->real_length = new_frag_len;
              if ( adj_frag[0].next != new_frag )
              {
                new_frag_len = 0;
                new_frag_len = 0;
                do
                {
                  memcpy( new_frag_len + new_frag + 32, &frag->data[0], (int)( (unsigned int)(frag->length & 0xFFFFFFFF) ) );
                  frag = new_frag->prev;
                  new_frag_len += (int)(new_frag->length & 0xFFFFFFFF);
                  new_frag->prev = new_frag->prev;
                  &new_frag->prev = new_frag;
                  mem_mmap_free( (void*)new_frag, (unsigned int)(frag->real_length & 0xFFFFFFFF) + 35 );
                  frag = &new_frag->prev;
                }
                while ( new_frag->prev == adj_frag->next );
              }
              &new_frag[0] = &cached->frag.next[0];
              &first_frag[0] = new_frag;
              new_frag->prev = &cached->frag.next[0];
              cached->frag.next = (void*)new_frag;
              new_frag->prev = new_frag;
              break;
            }
          }
          while ( !1 );
        }
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/cache/cache.c";
        errline = 506;
        elinks_internal( "fragments overlap" );
        &first_frag[0] = 0;
        return &first_frag[0];
      }
      else
      {
        return &first_frag[0];
      }
    }
    else
    {
      return &first_frag[0];
    }
  }
B1:  &first_frag[0] = 0;
  return &first_frag[0];
}
void truncate_entry( struct cache_entry *cached, off_t offset, int final )
{
  struct fragment *f;
  if ( (int)(offset << 32) <= (int)(cached->length << 32) )
  {
    if ( ccdep1 <= ccdep2 )
    {
      if ( offset < (unsigned int)(cached->length & 0xFFFFFFFF) )
      {
      }
    }
    cached->bits_at_92/*.1_1of4*/ |= 8;
    cached->length = offset;
  }
  f = &cached->frag.next[0];
  if ( cached->frag.next != cached->frag.next )
  {
    cached = &cached[0];
  {
    do
    {
      off_t size = offset - f->offset;
      if ( assert_failed == 0 )
      {
        assert_failed = (f->length << 32) >> 31;
        if ( (f->length << 32) >> 31 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/cache/cache.c";
          errline = 580;
          elinks_internal( "assertion f-&gt;length &gt;= 0 failed!" );
        }
      }
      if ( (int)(size << 32) < (int)(f->length << 32) || ( (f->length << 32) == (size << 32) && ebp_52 < (unsigned int)(f->length & 0xFFFFFFFF) ) )
      {
        if ( size >= 0 )
        {
          if ( ccdep1 <= ccdep2 )
          {
            if ( size >= 1 )
              f = &f[0];
          }
          (cached->data_size & 0xFFFFFFFF) = (unsigned int)(cached->data_size & 0xFFFFFFFF) + ( size - (unsigned int)(f->length & 0xFFFFFFFF) );
          if ( assert_failed == 0 )
          {
            (cached->data_size << 32) = (unsigned int)(cached->data_size << 32) + ( size - (unsigned int)(f->length << 32) - ( ( size < (unsigned int)(f->length & 0xFFFFFFFF) ) & 1 ) ) + ( ( (unsigned int)(cached->data_size & 0xFFFFFFFF) + ( size - (unsigned int)(f->length & 0xFFFFFFFF) ) < size - (unsigned int)(f->length & 0xFFFFFFFF) ) & 1 );
            assert_failed = ebp_44 >> 31;
            if ( ebp_44 >> 31 )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/cache/cache.c";
              errline = 261;
              elinks_internal( (int)( &(unsigned char*)(cached->data_size & 0xFFFFFFFF) ) );
              if ( assert_failed )
                goto B21;
            }
            (cache_size & 0xFFFFFFFF) = (unsigned int)(cache_size & 0xFFFFFFFF) + ( f->next - cached );
            (cache_size << 32) = ebp_28 + (unsigned int)(cache_size << 32) + ( ( ebp_32 + (unsigned int)(cache_size & 0xFFFFFFFF) < (unsigned int)(cache_size & 0xFFFFFFFF) ) & 1 );
            assert_failed = 0;
            (f->length & 0xFFFFFFFF) = size;
            if ( final && mem_mmap_realloc( (void*)f[0].next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35, size + 35 ) )
              (f->length << 32) = size;
            {
              *(int*)(*(int*)(mem_mmap_realloc( (void*)f[0].next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35, size + 35 )) + 4) = mem_mmap_realloc( (void*)f[0].next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35, size + 35 );
              *(int*)(*(int*)(mem_mmap_realloc( (void*)f[0].next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35, size + 35 ) + 4)) = mem_mmap_realloc( (void*)f[0].next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35, size + 35 );
              *(int*)(mem_mmap_realloc( (void*)f[0].next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35, size + 35 ) + 24) = *(int*)(mem_mmap_realloc( (void*)f[0].next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35, size + 35 ) + 16);
              *(int*)(mem_mmap_realloc( (void*)f[0].next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35, size + 35 ) + 28) = *(int*)(mem_mmap_realloc( (void*)f[0].next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35, size + 35 ) + 20);
              f = *(int*)(mem_mmap_realloc( (void*)f[0].next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35, size + 35 ));
            }
            else
              f = &f;
          }
B21:          (cache_size & 0xFFFFFFFF) = ( size - (unsigned int)(f->length & 0xFFFFFFFF) ) + (unsigned int)(cache_size & 0xFFFFFFFF);
          assert_failed = 0;
          cached->data_size = (long long)0;
          if ( assert_failed == 0 )
            (cache_size << 32) = ebp_28 + (unsigned int)(cache_size << 32) + ( ( ebp_32 + (unsigned int)(cache_size & 0xFFFFFFFF) < (unsigned int)(cache_size & 0xFFFFFFFF) ) & 1 );
            assert_failed = 0;
            (f->length & 0xFFFFFFFF) = size;
          else
            (f->length << 32) = size;
          {
            assert_failed = 0;
            cache_size = 0;
            (f->length & 0xFFFFFFFF) = size;
          }
        }
        if ( cached->frag.next != f[0].next )
        {
          while ( 1 )
          {
            (f->length << 32) = size;
            (cached->data_size & 0xFFFFFFFF) = ( 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) + (unsigned int)(cached->data_size & 0xFFFFFFFF);
            if ( assert_failed == 0 )
            {
              (cached->data_size << 32) = ( 0 - ( (unsigned int)(f->length << 32) + ( ( (unsigned int)(f->length & 0xFFFFFFFF) > 0 ) & 1 ) ) ) + *(int*)(cached[0].next + 76) + ( ( ( 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) + *(int*)(cached[0].next + 72) < 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) & 1 );
              assert_failed = ( ( 0 - ( (unsigned int)(f->length << 32) + ( ( (unsigned int)(f->length & 0xFFFFFFFF) > 0 ) & 1 ) ) ) + *(int*)(ebp_48 + 76) + ( ( ( 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) + *(int*)(ebp_48 + 72) < 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) & 1 ) ) >> 31;
              if ( ( ( 0 - ( (unsigned int)(f->length << 32) + ( ( (unsigned int)(f->length & 0xFFFFFFFF) > 0 ) & 1 ) ) ) + *(int*)(ebp_48 + 76) + ( ( ( 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) + *(int*)(ebp_48 + 72) < 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) & 1 ) ) >> 31 )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/cache/cache.c";
                errline = 261;
                elinks_internal( "assertion cached-&gt;data_size &gt;= 0 failed: cache entry data_size underflow: %ld" );
                if ( assert_failed )
                  goto B29;
              }
              (cache_size & 0xFFFFFFFF) = ebp_52 + (unsigned int)(cache_size & 0xFFFFFFFF);
              (cache_size << 32) = (unsigned int)(cache_size << 32) + ebp_56 + ( ( ebp_52 + (unsigned int)(cache_size & 0xFFFFFFFF) < (unsigned int)(cache_size & 0xFFFFFFFF) ) & 1 );
              assert_failed = 0;
              f->prev = f->prev;
              &f->prev = &f;
              mem_mmap_free( (void*)f->next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35 );
              if ( size == cached->frag.next )
                break;
              f = &size;
            }
B29:            (cache_size & 0xFFFFFFFF) = ebp_52 + (unsigned int)(cache_size & 0xFFFFFFFF);
            assert_failed = 0;
            cached->data_size = (long long)0;
            if ( assert_failed == 0 )
              (cache_size << 32) = (unsigned int)(cache_size << 32) + ebp_56 + ( ( ebp_52 + (unsigned int)(cache_size & 0xFFFFFFFF) < (unsigned int)(cache_size & 0xFFFFFFFF) ) & 1 );
              assert_failed = 0;
              f->prev = f->prev;
              &f->prev = &f;
              mem_mmap_free( (void*)f->next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35 );
            else
            {
              assert_failed = 0;
              cache_size = 0;
              f->prev = f->prev;
              &f->prev = &f;
              mem_mmap_free( (void*)f->next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35 );
            }
          }
        }
        else
          break;
      }
      else
      {
        f = &f;
      }
    }
    while ( cached->frag.next != f->next );
  }
  }
  return;
}
void free_entry_to( struct cache_entry *cached, off_t offset )
{
  int eax;
  int edx;
  struct fragment *f = &cached->frag.next[0];
  if ( cached->frag.next != cached->frag.next )
  {
    do
    {
      if ( (unsigned int)(f->length << 32) + (unsigned int)(f->offset << 32) + ( ( (unsigned int)(f->length & 0xFFFFFFFF) + (unsigned int)(f->offset & 0xFFFFFFFF) < (unsigned int)(f->length & 0xFFFFFFFF) ) & 1 ) <= (int)(offset << 32) && ( ccdep1 < ccdep2 || (unsigned int)(f->length & 0xFFFFFFFF) + (unsigned int)(f->offset & 0xFFFFFFFF) <= (unsigned int)(offset & 0xFFFFFFFF) ) )
      {
        (cached->data_size & 0xFFFFFFFF) = (unsigned int)(cached->data_size & 0xFFFFFFFF) + ( 0 - (unsigned int)(f->length & 0xFFFFFFFF) );
        if ( assert_failed == 0 )
        {
          (cached->data_size << 32) = (unsigned int)(cached->data_size << 32) + ( 0 - ( (unsigned int)(f->length << 32) + ( ( (unsigned int)(f->length & 0xFFFFFFFF) > 0 ) & 1 ) ) ) + ( ( (unsigned int)(cached->data_size & 0xFFFFFFFF) + ( 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) < 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) & 1 );
          assert_failed = ( (unsigned int)(cached->data_size << 32) + ( 0 - ( (unsigned int)(f->length << 32) + ( ( (unsigned int)(f->length & 0xFFFFFFFF) > 0 ) & 1 ) ) ) + ( ( (unsigned int)(cached->data_size & 0xFFFFFFFF) + ( 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) < 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) & 1 ) ) >> 31;
          if ( ( (unsigned int)(cached->data_size << 32) + ( 0 - ( (unsigned int)(f->length << 32) + ( ( (unsigned int)(f->length & 0xFFFFFFFF) > 0 ) & 1 ) ) ) + ( ( (unsigned int)(cached->data_size & 0xFFFFFFFF) + ( 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) < 0 - (unsigned int)(f->length & 0xFFFFFFFF) ) & 1 ) ) >> 31 )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/cache/cache.c";
            errline = 261;
            elinks_internal( "assertion cached-&gt;data_size &gt;= 0 failed: cache entry data_size underflow: %ld" );
            if ( assert_failed )
            {
            }
          }
          (cache_size & 0xFFFFFFFF) = ebp_60 + (unsigned int)(cache_size & 0xFFFFFFFF);
          (cache_size << 32) = (unsigned int)(cache_size << 32) + ebp_64 + ( ( ebp_60 + (unsigned int)(cache_size & 0xFFFFFFFF) < (unsigned int)(cache_size & 0xFFFFFFFF) ) & 1 );
          assert_failed = 0;
          f = f->prev;
          f->prev = f->prev;
          &f->prev = &f;
          mem_mmap_free( (void*)f->next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35 );
        }
        (cache_size & 0xFFFFFFFF) = eax + (unsigned int)(cache_size & 0xFFFFFFFF);
        assert_failed = 0;
        cached->data_size = (long long)0;
        if ( assert_failed == 0 )
          (cache_size << 32) = (unsigned int)(cache_size << 32) + edx + ( ( eax + (unsigned int)(cache_size & 0xFFFFFFFF) < (unsigned int)(cache_size & 0xFFFFFFFF) ) & 1 );
          assert_failed = 0;
          f = f->prev;
          f->prev = f->prev;
          &f->prev = &f;
          mem_mmap_free( (void*)f->next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35 );
        else
        {
          assert_failed = 0;
          cache_size = 0;
          f = f->prev;
          f->prev = f->prev;
          &f->prev = &f;
          mem_mmap_free( (void*)f->next, (unsigned int)(f->real_length & 0xFFFFFFFF) + 35 );
        }
      }
      else
      {
        if ( (int)(f->offset << 32) <= (int)(offset << 32) && ( ccdep1 < ccdep2 || (unsigned int)(f->offset & 0xFFFFFFFF) < (unsigned int)(offset & 0xFFFFFFFF) ) )
        {
          (size << 32) = (unsigned int)(offset << 32) - (unsigned int)(size << 32) - ( ( (unsigned int)(offset & 0xFFFFFFFF) < (unsigned int)(size & 0xFFFFFFFF) ) & 1 );
          (cached->data_size & 0xFFFFFFFF) = (unsigned int)(cached->data_size & 0xFFFFFFFF) + ( 0 - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) ) );
          off_t size;
          if ( assert_failed == 0 )
          {
            (cached->data_size << 32) = (unsigned int)(cached->data_size << 32) + ( 0 - ( ( (unsigned int)(offset << 32) - (unsigned int)(size << 32) - ( ( (unsigned int)(offset & 0xFFFFFFFF) < (unsigned int)(size & 0xFFFFFFFF) ) & 1 ) ) + ( ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) > 0 ) & 1 ) ) ) + ( ( (unsigned int)(cached->data_size & 0xFFFFFFFF) + ( 0 - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) ) ) < 0 - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) ) ) & 1 );
            assert_failed = ( (unsigned int)(cached->data_size << 32) + ( 0 - ( ( (unsigned int)(offset << 32) - (unsigned int)(size << 32) - ( ( (unsigned int)(offset & 0xFFFFFFFF) < (unsigned int)(size & 0xFFFFFFFF) ) & 1 ) ) + ( ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) > 0 ) & 1 ) ) ) + ( ( (unsigned int)(cached->data_size & 0xFFFFFFFF) + ( 0 - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) ) ) < 0 - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) ) ) & 1 ) ) >> 31;
            if ( ( (unsigned int)(cached->data_size << 32) + ( 0 - ( ( (unsigned int)(offset << 32) - (unsigned int)(size << 32) - ( ( (unsigned int)(offset & 0xFFFFFFFF) < (unsigned int)(size & 0xFFFFFFFF) ) & 1 ) ) + ( ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) > 0 ) & 1 ) ) ) + ( ( (unsigned int)(cached->data_size & 0xFFFFFFFF) + ( 0 - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) ) ) < 0 - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) ) ) & 1 ) ) >> 31 )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/cache/cache.c";
              errline = 261;
              elinks_internal( (int)( &(unsigned char*)(cached->data_size & 0xFFFFFFFF) ) );
              if ( assert_failed )
                goto B17;
            }
            (cache_size & 0xFFFFFFFF) = ( 0 - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) ) ) + (unsigned int)(cache_size & 0xFFFFFFFF);
            (cache_size << 32) = ( 0 - ( ( (unsigned int)(offset << 32) - (unsigned int)(size << 32) - ( ( (unsigned int)(offset & 0xFFFFFFFF) < (unsigned int)(size & 0xFFFFFFFF) ) & 1 ) ) + ( ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) > 0 ) & 1 ) ) ) + (unsigned int)(cache_size << 32) + ( ( ( 0 - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) ) ) + (unsigned int)(cache_size & 0xFFFFFFFF) < (unsigned int)(cache_size & 0xFFFFFFFF) ) & 1 );
            assert_failed = 0;
            (f->length << 32) = (unsigned int)(f->length << 32) - (unsigned int)(size << 32) - ( ( (unsigned int)(f->length & 0xFFFFFFFF) < (unsigned int)(size & 0xFFFFFFFF) ) & 1 );
            (f->length & 0xFFFFFFFF) = (unsigned int)(f->length & 0xFFFFFFFF) - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(f->offset & 0xFFFFFFFF) );
            memmove( &f->data[0], &f->data[ (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(f->offset & 0xFFFFFFFF) ], (int)( (unsigned int)(f->length & 0xFFFFFFFF) - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(f->offset & 0xFFFFFFFF) ) ) );
            f->offset = offset;
          }
B17:          (cache_size & 0xFFFFFFFF) = ( 0 - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) ) ) + (unsigned int)(cache_size & 0xFFFFFFFF);
          assert_failed = 0;
          cached->data_size = (long long)0;
          if ( assert_failed == 0 )
            (cache_size << 32) = ( 0 - ( ( (unsigned int)(offset << 32) - (unsigned int)(size << 32) - ( ( (unsigned int)(offset & 0xFFFFFFFF) < (unsigned int)(size & 0xFFFFFFFF) ) & 1 ) ) + ( ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) > 0 ) & 1 ) ) ) + (unsigned int)(cache_size << 32) + ( ( ( 0 - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(size & 0xFFFFFFFF) ) ) + (unsigned int)(cache_size & 0xFFFFFFFF) < (unsigned int)(cache_size & 0xFFFFFFFF) ) & 1 );
            assert_failed = 0;
            (f->length << 32) = (unsigned int)(f->length << 32) - (unsigned int)(size << 32) - ( ( (unsigned int)(f->length & 0xFFFFFFFF) < (unsigned int)(size & 0xFFFFFFFF) ) & 1 );
            (f->length & 0xFFFFFFFF) = (unsigned int)(f->length & 0xFFFFFFFF) - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(f->offset & 0xFFFFFFFF) );
            memmove( &f->data[0], &f->data[ (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(f->offset & 0xFFFFFFFF) ], (int)( (unsigned int)(f->length & 0xFFFFFFFF) - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(f->offset & 0xFFFFFFFF) ) ) );
            f->offset = offset;
          else
          {
            assert_failed = 0;
            cache_size = 0;
            (f->length << 32) = (unsigned int)(f->length << 32) - (unsigned int)(size << 32) - ( ( (unsigned int)(f->length & 0xFFFFFFFF) < (unsigned int)(size & 0xFFFFFFFF) ) & 1 );
            (f->length & 0xFFFFFFFF) = (unsigned int)(f->length & 0xFFFFFFFF) - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(f->offset & 0xFFFFFFFF) );
            memmove( &f->data[0], &f->data[ (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(f->offset & 0xFFFFFFFF) ], (int)( (unsigned int)(f->length & 0xFFFFFFFF) - ( (unsigned int)(offset & 0xFFFFFFFF) - (unsigned int)(f->offset & 0xFFFFFFFF) ) ) );
            f->offset = offset;
          }
        }
        else
          break;
      }
      f = &f;
    }
    while ( cached->frag.next != f->next );
  }
  return;
}
void delete_entry_content( struct cache_entry *cached )
{
  int eax;
  int edx;
  cached->data_size = (long long)0;
  if ( assert_failed )
  {
    (cache_size & 0xFFFFFFFF) = ( 0 - (unsigned int)(cached->data_size & 0xFFFFFFFF) ) + (unsigned int)(cache_size & 0xFFFFFFFF);
    assert_failed = 0;
    cached->data_size = (long long)0;
    if ( assert_failed )
      (cache_size << 32) = (unsigned int)(cache_size << 32) + ( 0 - ( (unsigned int)(cached->data_size << 32) + ( ( (unsigned int)(cached->data_size & 0xFFFFFFFF) > 0 ) & 1 ) ) ) + ( ( ( 0 - (unsigned int)(cached->data_size & 0xFFFFFFFF) ) + (unsigned int)(cache_size & 0xFFFFFFFF) < (unsigned int)(cache_size & 0xFFFFFFFF) ) & 1 );
    {
      assert_failed = 0;
      cache_size = 0;
      if ( cached->frag.next != cached->frag.next )
      {
        do
        {
          cached->frag.next[1] = cached->frag.prev;
          cached->frag.prev[0] = cached->frag.next;
          mem_mmap_free( cached->frag.next, cached->frag.list_head_elinks + 35 );
        }
        while ( cached->frag.next == cached->frag.next );
      }
      cached->cache_id = id_counter;
      id_counter++;
      cached->bits_at_92/*.1_1of4*/ |= 8;
      cached->length = (long long)0;
      if ( cached->last_modified )
        mem_free( (void*)cached->last_modified );
      cached->last_modified = 0;
      if ( cached->etag )
      {
        mem_free( (void*)cached->etag );
      }
      cached->etag = 0;
      return;
    }
  }
  else
    (cache_size & 0xFFFFFFFF) = ( 0 - (unsigned int)(cached->data_size & 0xFFFFFFFF) ) + (unsigned int)(cache_size & 0xFFFFFFFF);
  {
    (cache_size << 32) = (unsigned int)(cache_size << 32) + ( 0 - ( (unsigned int)(cached->data_size << 32) + ( ( (unsigned int)(cached->data_size & 0xFFFFFFFF) > 0 ) & 1 ) ) ) + ( ( ( 0 - (unsigned int)(cached->data_size & 0xFFFFFFFF) ) + (unsigned int)(cache_size & 0xFFFFFFFF) < (unsigned int)(cache_size & 0xFFFFFFFF) ) & 1 );
    (cache_size & 0xFFFFFFFF) = ( 0 - (unsigned int)(cached->data_size & 0xFFFFFFFF) ) + (unsigned int)(cache_size & 0xFFFFFFFF);
  }
  (cache_size << 32) = (unsigned int)(cache_size << 32) + ( 0 - ( (unsigned int)(cached->data_size << 32) + ( ( (unsigned int)(cached->data_size & 0xFFFFFFFF) > 0 ) & 1 ) ) ) + ( ( ( 0 - (unsigned int)(cached->data_size & 0xFFFFFFFF) ) + (unsigned int)(cache_size & 0xFFFFFFFF) < (unsigned int)(cache_size & 0xFFFFFFFF) ) & 1 );
  assert_failed = 0;
}
void delete_cache_entry( struct cache_entry *cached )
{
  cached->prev = cached->prev;
  &cached->prev[0] = &cached[0];
  if ( assert_failed == 0 )
  {
    assert_failed = cached->object.refcount != 0;
    if ( cached->object.refcount )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/cache/cache.c";
      errline = 656;
      elinks_internal( "assertion !is_object_used(cached) failed: deleting locked cache entry" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    assert_failed = is_entry_used( &cached[0] ) != 0;
    if ( is_entry_used( &cached[0] ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/cache/cache.c";
      errline = 657;
      elinks_internal( "assertion !is_entry_used(cached) failed: deleting loading cache entry" );
    }
  }
  delete_entry_content( &cached[0] );
  if ( cached->box_item )
    done_listbox_item( &cache_browser, cached->box_item );
  if ( cached->uri )
    done_uri( cached->uri );
  if ( cached->proxy_uri )
    done_uri( cached->proxy_uri );
  if ( cached->redirect )
    done_uri( cached->redirect );
  if ( cached->head )
    mem_free( (void*)cached->head );
  if ( cached->content_type )
    mem_free( (void*)cached->content_type );
  if ( cached->last_modified )
    mem_free( (void*)cached->last_modified );
  if ( cached->ssl_info )
    mem_free( (void*)cached->ssl_info );
  if ( cached->encoding_info )
    mem_free( (void*)cached->encoding_info );
  if ( cached->etag )
    mem_free( (void*)cached->etag );
  cached = &cached[0];
}
void normalize_cache_entry( struct cache_entry *cached, off_t truncate_length )
{
  int eax;
  int edx;
  if ( (int)(truncate_length << 32) >= 0 )
  {
    truncate_entry( &cached[0] );
    cached->bits_at_92/*.1_1of4*/ &= 245;
    cached->seconds = time( 0 );
  }
  return;
}
struct uri *redirect_cache( struct cache_entry *cached, unsigned char *location, int get, int incomplete )
{
  int eax;
  int edx;
  unsigned char *uristring;
  if ( incomplete == 0 && location[0] == '/' && location[1] == 0 )
  {
    if ( uristring[0] )
    {
      uristring = &uristring[0];
      add_to_strn( &uristring, &location[0] );
      uristring[0] = uristring;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    uristring = join_urls( cached->uri, &location[0] );
  }
  if ( uristring )
  {
    if ( cached->uri->post && get == 0 && ( ( cached->bits_at_92/*.1_1of4*/ & 4 ) & 255 ) == 0 )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = strchr( (char*)uristring, 1 ) != 0;
        if ( strchr( (char*)uristring, 1 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/cache/cache.c";
          errline = 738;
          elinks_internal( "assertion !strchr(uristring, POST_CHAR) failed!" );
        }
        cached->uri->post[0] = cached->uri->post;
      }
      add_to_strn( &uristring, cached->uri->post - 1 );
    }
    if ( cached->redirect )
      done_uri( cached->redirect );
    cached->redirect = get_uri( uristring, 0 );
    cached->bits_at_92/*.1_1of4*/ = ( (int)cached->bits_at_92/*.1_1of4*/ & -5 ) | ( ( get/*.1_1of4*/ & 1 ) << 2 );
    if ( incomplete >= 0 )
      cached->bits_at_92/*.1_1of4*/ = ( ( ( (int)cached->bits_at_92/*.1_1of4*/ & -5 ) | ( ( get/*.1_1of4*/ & 1 ) << 2 ) ) & -9 ) | ( ( incomplete & 1 ) << 3 );
    mem_free( (void*)uristring );
    return cached->redirect;
  }
  else
  {
    return 0;
  }
}
void garbage_collection( int whole )
{
  int eax;
  int ecx;
  int edx;
#error unstructured control flow
}
#if 0
#endif
