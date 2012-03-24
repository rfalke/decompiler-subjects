#include "blacklist.c.h"
static struct list_head_elinks blacklist = { &blacklist, &blacklist };
struct blacklist_entry *get_blacklist_entry( struct uri *uri )
{
  struct blacklist_entry *entry;
  if ( assert_failed == 0 )
  {
    if ( uri && uri->bits_at_44/*.3_4of4*/ )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/http/blacklist.c";
      errline = 33;
      elinks_internal( "assertion uri && uri-&gt;hostlen &gt; 0 failed!" );
      if ( assert_failed )
        goto B2;
    }
    &entry[0] = &blacklist.next[0];
    if ( blacklist.next != blacklist.next )
    {
      do
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/http/blacklist.c";
        errline = 37;
        if ( elinks_strlcasecmp( &entry->host[0], -1, uri->host, uri->bits_at_44/*.3_4of4*/, 1 ) == 0 )
          break;
        &entry[0] = &entry;
      }
      while ( entry->next == blacklist.next );
    }
    return 0;
  }
B2:  assert_failed = 0;
  &entry[0] = 0;
  return &entry[0];
}
void add_blacklist_entry( struct uri *uri, enum blacklist_flags  flags )
{
  int eax;
  struct blacklist_entry *entry;
  if ( entry[0].next )
  {
    entry->flags |= flags;
  }
  else
  {
    if ( mem_alloc( uri->bits_at_44/*.3_4of4*/ + 16 ) )
    {
      *(int*)(mem_alloc( uri->bits_at_44/*.3_4of4*/ + 16 ) + 8) = flags;
      safe_strncpy( mem_alloc( uri->bits_at_44/*.3_4of4*/ + 16 ) + 12, uri->host, uri->bits_at_44/*.3_4of4*/ + 1 );
      *(int*)(mem_alloc( uri->bits_at_44/*.3_4of4*/ + 16 ) + 4) = blacklist;
      *(int*)(mem_alloc( uri->bits_at_44/*.3_4of4*/ + 16 )) = blacklist;
      blacklist.next = mem_alloc( uri->bits_at_44/*.3_4of4*/ + 16 );
      *(int*)(*(int*)(mem_alloc( uri->bits_at_44/*.3_4of4*/ + 16 )) + 4) = mem_alloc( uri->bits_at_44/*.3_4of4*/ + 16 );
    }
  }
  return;
}
void del_blacklist_entry( struct uri *uri, enum blacklist_flags  flags )
{
  int eax;
  struct blacklist_entry *entry;
  if ( entry[0].next )
  {
    entry->flags &= ~flags;
    if ( ( entry->flags & ~flags ) == 0 )
    {
      entry->prev = entry->prev;
      &entry->prev = &entry;
      uri = &entry->next[0];
    }
  }
  return;
}
enum blacklist_flags  get_blacklist_flags( struct uri *uri )
{
  int eax;
  struct blacklist_entry *entry = get_blacklist_entry( uri );
  return entry->flags;
}
void free_blacklist( void )
{
{
  struct xlist_head *head = &blacklist.next[0], *next;
  if ( blacklist.next != blacklist.next )
  {
    do
    {
      head = &(struct xlist_head*)(head);
    }
    while ( head->next != blacklist.next );
  }
  head = &blacklist.prev[0];
  if ( blacklist.prev != head[0].next )
  {
    do
    {
      head = head->prev;
    }
    while ( head->prev != head[0].next );
  }
  next = &blacklist.next[0];
  if ( head[0].next != blacklist.next )
  {
    next = &next[0];
    do
    {
      next->prev = head->prev;
      &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
      mem_free( (void*)head->next );
    }
    while ( next[0].next == head[0].next );
  }
  return;
}
}
#if 0
#endif
