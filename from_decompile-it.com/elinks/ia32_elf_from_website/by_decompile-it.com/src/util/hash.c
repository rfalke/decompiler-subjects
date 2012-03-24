#include "hash.c.h"
struct hash *init_hash8( void )
{
  if ( assert_failed == 0 )
  {
    assert_failed = 0;
    if ( mem_alloc( 2056 ) )
    {
      *(int*)(mem_alloc( 2056 )) = 8;
      *(int*)(mem_alloc( 2056 ) + 4) = strhash;
      do
      {
        *(int*)(mem_alloc( 2056 ) + 12) = mem_alloc( 2056 ) + 8 + 0;
        *(int*)(mem_alloc( 2056 ) + 8) += 0;
      }
      while ( 0 + 8 + 8 != 2048 );
    }
    return (struct hash*)mem_alloc( 2056 );
  }
  else
  {
    assert_failed = 0;
    return 0;
  }
}
void free_hash( struct hash **hashp )
{
  int edx;
  unsigned int i;
  if ( assert_failed == 0 )
  {
    if ( hashp && hashp[0] )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/hash.c";
      errline = 67;
      elinks_internal( "assertion hashp && *hashp failed!" );
      if ( assert_failed )
        goto B2;
    }
    i = 0;
    if ( 1 << hashp[0] )
    {
    {
      do
      {
        struct xlist_head *head = &hashp[0]->hash->next[0], *next;
        if ( *(int*)(hashp[0] + ( i << 3 ) + 8) != hashp[0] + 8 + ( i << 3 ) )
        {
          head = &head[0];
          do
          {
            head = &(struct xlist_head*)(head);
          }
          while ( head->next != hashp[0] + 8 + ( i << 3 ) );
        }
        if ( hashp[0] + 8 + ( i << 3 ) != *(int*)(hashp[0] + ( i << 3 ) + 12) )
        {
          do
          {
            head = head->prev;
          }
          while ( head->prev != hashp[0] + 8 + ( i << 3 ) );
        }
        next = &(struct xlist_head*)(head);
        if ( head->next != ( i << 3 ) + hashp[0] + 8 )
        {
          do
          {
            next->prev = head->prev;
            &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
            mem_free( (void*)head->next );
          }
          while ( next[0].next == ( i << 3 ) + hashp[0] + 8 );
        }
        i++;
      }
      while ( i < ( 1 << hashp[0] ) );
    }
    }
    mem_free( (void*)hashp[0] );
    hashp[0] = 0;
    return;
  }
B2:  assert_failed = 0;
  return;
}
struct hash_item *add_hash_item( struct hash *hash, unsigned char *key, unsigned int keylen, void *value )
{
  hash_value_T hashval;
  struct hash_item *item;
  if ( mem_alloc( 20 ) )
  {
    item->key = &key[0];
    item->keylen = keylen;
    item->value = value;
    item->prev = &hash->hash[ hash->func( &key[0], keylen, -559038737 ) & ( ( 1 << hash->width ) - 1 ) ].next[0];
    &item = &hash->hash[ hash->func( &key[0], keylen, -559038737 ) & ( ( 1 << hash->width ) - 1 ) ].next[0];
    hash->hash->next = (void*)item[0].next;
    item->prev = &item[0];
  }
  return hash->hash[ hash->func( &key[0], keylen, -559038737 ) & ( ( 1 << hash->width ) - 1 ) ].next + 4;
}
struct hash_item *get_hash_item( struct hash *hash, unsigned char *key, unsigned int keylen )
{
  int ecx;
  int edx;
  struct hash_item *item;
  hash_value_T hashval;
  &item[0] = &hash->hash[ item[0].next & ( ( 1 << *(int*)(hash) ) - 1 ) ].next[0];
  if ( *(int*)(hash + ( ( hash->func( key, keylen, -559038737 ) & ( ( 1 << *(int*)(hash) ) - 1 ) ) << 3 ) + 8) != hash + ( ( hash->func( key, keylen, -559038737 ) & ( ( 1 << hash->width ) - 1 ) ) << 3 ) + 8 )
  {
    do
    {
      if ( item->keylen == keylen )
      {
        strcmp( (char*)item->key, (char*)key );
        if ( 1 )
        {
          return hash + ( ( hash->func( key, keylen, -559038737 ) & ( ( 1 << hash->width ) - 1 ) ) << 3 );
        }
      }
      &item[0] = &item;
    }
    while ( ebp_32 != item->next );
  }
  &item[0] = 0;
}
void del_hash_item( struct hash *hash, struct hash_item *item )
{
  if ( assert_failed == 0 )
  {
    assert_failed = item[0].next == 0;
    if ( !(_Bool)( item[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/hash.c";
      errline = 139;
      elinks_internal( "assertion item failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    item->prev = item->prev;
    &item->prev = &item;
    hash = &item->next[0];
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
hash_value_T strhash( unsigned char *k, unsigned int length, hash_value_T initval )
{
  int eax;
  hash_value_T h;
  unsigned int i;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( length == 0 ) | ( k[0] == 0 ) ) & 1;
    if ( ( ( length == 0 ) | ( k[0] == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/hash.c";
      errline = 162;
      elinks_internal( "assertion k && length &gt; 0 failed!" );
      if ( assert_failed )
      {
        length = length;
      }
    }
    i = 0;
    do
    {
      h = ( h * 31 ) + k[ i ];
    }
    while ( length != i + 1 && length != i + 2 && length != i + 3 && length != i + 4 && length != i + 5 && length != i + 6 && length != i + 7 && length != i + 8 );
    return eax;
  }
  assert_failed = 0;
  return initval;
}
#if 0
#endif
