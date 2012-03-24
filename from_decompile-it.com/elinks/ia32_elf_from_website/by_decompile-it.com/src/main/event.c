#include "event.c.h"
static struct event *events;
static unsigned int eventssize;
static struct hash *event_hash;
int register_event( unsigned char *name )
{
  int eax;
  int edx;
  int id;
  struct event *event;
  if ( get_event_id( name ) == -1 )
  {
    if ( ( ( eventssize + 7 ) & -8 ) < ( ( eventssize + 8 ) & -8 ) )
    {
      *ebp_36 = ( ( eventssize + 8 ) & -8 ) << 4;
      if ( mem_realloc( (void*)events, ( ( eventssize + 8 ) & -8 ) << 4 ) )
      {
        events = (struct event*)mem_realloc( (void*)events, ( ( eventssize + 8 ) & -8 ) << 4 );
        memset( events + ( ( ( eventssize + 7 ) & -8 ) << 4 ), 0, ( ( ( eventssize + 8 ) & -8 ) << 4 ) - ( ( ( eventssize + 7 ) & -8 ) << 4 ) );
        event = events;
      }
    }
    if ( event[0].name )
    {
      if ( events == event[0].name )
        eventssize = eventssize;
      else
      {
        id = 0;
        if ( eventssize )
        {
        {
          while ( 1 )
          {
            if ( item[0].next )
              *(int*)(get_hash_item( event_hash, event[ id + 1 ].name, strlen( (char*)event[ id + 1 ].name ) ) + 16) = events + ( ( id + 1 ) << 4 );
            id++;
            if ( eventssize <= id + 1 )
              break;
            else
            {
              event = events;
            }
          }
          name[0] = name[0];
          id = id;
        }
        }
      }
      event = events + ( eventssize << 4 );
      event = (struct event*)memacpy( &name[0], strlen( &name[0] ) );
      *ebp_36 = strlen( &name[0] );
      if ( event[0].name )
      {
        if ( eax == 0 )
        {
          mem_free( (void*)event->name );
          event = 0;
        }
        event->handlers = 0;
        event->count = 0;
        id = eventssize;
        event->id = eventssize;
        eventssize++;
      }
    }
  }
  return id;
}
int get_event_id( unsigned char *name )
{
  int eax;
  struct hash_item *item;
  if ( assert_failed == 0 )
  {
    if ( name[0] && name[0] )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/event.c";
      errline = 125;
      elinks_internal( "assertion name && name[0] failed: Empty or missing event name" );
      if ( assert_failed == 0 )
        goto B7;
    }
B7:    if ( event_hash && item[0] )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = item->value == 0;
        if ( !(_Bool)( item->value != 0 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/event.c";
          errline = 135;
          elinks_internal( "assertion event != NULL failed: Hash item with no value" );
          if ( assert_failed )
            goto B2;
        }
        return item->value[3];
      }
    }
    else
    {
    }
  }
B2:  assert_failed = 0;
}
unsigned char *get_event_name( int id )
{
  if ( id < 0 || eventssize <= id )
  {
    return 0;
  }
  return events[ id ].name;
}
void trigger_event_va( int id, va_list ap_init )
{
  int i;
  struct event_handler *ev_handler;
  if ( id >= 0 && id < eventssize && events[ id ].count )
  {
    for ( ; ret != EVENT_HOOK_STATUS_LAST && i + 1 < events[ id ].count; ev_handler++ )
    {
      //ev_handler++;
    }
  }
  return;
}
void trigger_event( int id )
{
  int eax;
  int edx;
  trigger_event_va( id, ebp_12 );
  return;
}
void trigger_event_name( unsigned char *name )
{
  int edx;
  int id;
  get_event_id( name );
  trigger_event_va(  );
  return;
}
int register_event_hook( int id, event_hook_T callback, int priority, void *data )
{
  int eax;
  int ecx;
  int edx;
  struct event *event;
  int i;
  if ( assert_failed == 0 )
  {
    assert_failed = callback == 0;
    if ( !(_Bool)( callback != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/event.c";
      errline = 209;
      elinks_internal( "assertion callback failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    if ( id >= 0 && id < eventssize )
    {
      event = &events[ id ];
      if ( events[ id ].count == 0 )
      {
      }
      else
      {
        i = 0;
        if ( event->handlers[0].callback != callback )
        {
          do
          {
            i++;
          }
          while ( i + 1 < events[ id ].count && event->handlers[2].callback != callback );
          if ( i == events[ id ].count )
            return ( eax + 1 ) * 12;
          else
          {
          }
        }
        else
        {
        }
        memmove( event->handlers[ i + 1 ].callback, event->handlers[ i + 1 + 1 ].callback, ( events[ id ].count - ( (unsigned char)( ( i + 1 + 1 < i + 1 ) ^ 1 ) ? i + 1 : i + 1 + 1 ) ) * 12 );
        if ( event->count == 1 )
        {
        }
        else
        {
          i = 0;
          if ( priority <= event->handlers->priority )
          {
            while ( i++, i + 1 < event->count - 1 )
            {
              *(int*)(ebx + 12) = ( (unsigned char)( ( i + 1 + 1 < i + 1 ) ^ 1 ) ? i + 1 : i + 1 + 1 ) + 12;
              if ( *(int*)(12 + event->handlers + 4) < priority )
              {
              }
              else
              {
              }
            }
          }
          else
          {
          }
        }
        memmove( ecx + eax, &edi, ( ebp_36 - ebp_28 ) * 12 );
      }
    {
      struct event_handler *eh;
      if ( eh[0].callback )
      {
        event->handlers = &eh[0];
        event->count++;
      }
      memmove( event->handlers[ i + 1 ].callback, event->handlers[ i + 1 + 1 ].callback, ( events[ id ].count - ( (unsigned char)( ( i + 1 + 1 < i + 1 ) ^ 1 ) ? i + 1 : i + 1 + 1 ) ) * 12 );
    }
    }
    id = -1;
  }
  id = -1;
  assert_failed = 0;
}
void unregister_event_hook( int id, event_hook_T callback )
{
  int eax;
  int ecx;
  int edx;
  struct event *event;
  if ( assert_failed == 0 )
  {
    assert_failed = callback == 0;
    if ( !(_Bool)( callback != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/event.c";
      errline = 250;
      elinks_internal( "assertion callback failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    if ( id >= 0 && id < eventssize && event->handlers && event->count )
    {
      if ( event->handlers->callback != callback )
      {
        i = 0;
        callback[0] = callback[0];
        do
        {
          i++;
          if ( event->count <= i + 1 )
            break;
        }
        while ( event->handlers[2].callback != callback );
        event = &event[0];
        i = (unsigned char)( ( i + 1 + 1 < i + 1 ) ^ 1 ) ? i + 1 : i + 1 + 1;
      }
      else
        eax = (void*)event->handlers;
      memmove( &edx, ebp_28 + ecx, ( edi - eax ) * 12 );
      event->count--;
      if ( event->count - 1 == 0 )
      {
        mem_free( (void*)event->handlers );
        event->handlers = 0;
        return;
      }
      if ( mem_realloc( (void*)event->handlers, ( event->count - 1 ) * 12 ) )
      {
        event->handlers = (struct event_handler*)mem_realloc( (void*)event->handlers, ( event->count - 1 ) * 12 );
      }
    }
    return;
  }
  assert_failed = 0;
  return;
}
void register_event_hooks( struct event_hook_info *hooks )
{
  if ( hooks[0].name )
  {
    hooks = &hooks[0];
  {
    do
    {
      if ( id != -1 )
        register_event_hook( id, hooks->callback, hooks->priority, hooks->data );
      hooks++;
    }
    while ( hooks[1].name );
  }
  }
  return;
}
void unregister_event_hooks( struct event_hook_info *hooks )
{
  if ( hooks[0].name )
  {
    hooks = &hooks[0];
  {
    do
    {
      if ( id != -1 )
        unregister_event_hook( id, hooks->callback );
      hooks++;
    }
    while ( hooks[1].name );
  }
  }
  return;
}
void init_event( void )
{
  event_hash = init_hash8(  );
  return;
}
void done_event( void )
{
  int eax;
  int i;
  if ( eventssize )
  {
    i = 0;
  {
    do
    {
      void *p = (void*)events[ i + 1 ].handlers;
      if ( events[ 0 ].handlers )
      {
        mem_free( &((int*)p)[0] );
      }
      mem_free( (void*)events[ i + 1 ].name );
      i++;
    }
    while ( i < eventssize );
  }
  }
  if ( events )
    mem_free( (void*)events );
  events = 0;
  if ( event_hash )
  {
    free_hash( &event_hash );
  }
  eventssize = 0;
  return;
}
#if 0
#endif
