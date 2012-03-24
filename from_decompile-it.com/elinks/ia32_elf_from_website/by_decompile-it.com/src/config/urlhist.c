#include "urlhist.c.h"
struct input_history goto_url_history = { { &goto_url_history, &goto_url_history }
, 0, 0 };
static struct event_hook_info goto_url_history_hooks[2] = { { "periodic-saving", 0, &goto_url_history_write_hook, 0 }
, { 0, 0, 0, 0 }
 };
struct module goto_url_history_module = { "Goto URL History", 0, goto_url_history_hooks, 0, 0, &init_url_history, &done_url_history };
enum evhook_status  goto_url_history_write_hook( va_list ap, void *data )
{
  save_input_history( &goto_url_history, "gotohist" );
  return EVENT_HOOK_STATUS_NEXT;
}
void init_url_history( struct module *module )
{
  load_input_history( &goto_url_history, "gotohist" );
  return;
}
void done_url_history( struct module *module )
{
  save_input_history( &goto_url_history, "gotohist" );
{
  struct xlist_head *head = &goto_url_history.entries.next[0], *next;
  if ( goto_url_history.entries.next != goto_url_history.entries.next )
  {
    do
    {
      head = &(struct xlist_head*)(head);
    }
    while ( head->next != goto_url_history.entries.next );
  }
  head = &goto_url_history.entries.prev[0];
  if ( goto_url_history.entries.prev != head[0].next )
  {
    do
    {
      head = head->prev;
    }
    while ( head->prev != head[0].next );
  }
  next = &goto_url_history.entries.next[0];
  if ( head[0].next != goto_url_history.entries.next )
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
