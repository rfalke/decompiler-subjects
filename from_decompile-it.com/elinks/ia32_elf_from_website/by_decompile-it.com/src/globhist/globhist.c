#include "globhist.c.h"
struct input_history global_history = { { &global_history, &global_history }
, 0, 0 };
struct list_head_elinks global_history_reap_list = { &global_history_reap_list, &global_history_reap_list };
unsigned char *gh_last_searched_title;
unsigned char *gh_last_searched_url;
static struct option_info global_history_options[6] = { { { 0, 0, { 0 }
, "global", 0, 9, 0, 0, { 0, 135455523, 135455547, 0, 0, 0 }
, "Global history options.", "Global history", 0, 0, 0 }
, "document.history" }
, { { 0, 0, { 0 }
, "enable", 0, 0, 0, 1, { 0, 135389384, 135427955, 0, 0, 0 }
, "Enable global history (\"history of all pages visited\").", "Enable", 0, 0, 0 }
, "document.history.global" }
, { { 0, 0, { 0 }
, "max_items", 0, 1, 1, 2147483647, { 0, 135389440, 135455596, 0, 0, 0 }
, "Maximum number of entries in the global history.", "Maximum number of entries", 0, 0, 0 }
, "document.history.global" }
, { { 0, 0, { 0 }
, "display_type", 0, 1, 0, 1, { 0, 135389492, 135455635, 0, 0, 0 }
, "What to display in global history dialog:\n0 is URLs\n1 is page titles", "Display style", 0, 0, 0 }
, "document.history.global" }
, { { 0, 0, { 0 }
, "write_interval", 0, 8, 0, 23, { "infofiles.save_interval", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "document.history.global" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
static struct hash *globhist_cache;
static int globhist_cache_entries;
struct event_hook_info global_history_hooks[2] = { { "periodic-saving", 0, &global_history_write_hook, 0 }
, { 0, 0, 0, 0 }
 };
struct module global_history_module = { "Global History", global_history_options, global_history_hooks, 0, 0, &init_global_history, &done_global_history };
void reap_deleted_globhist_items( void )
{
  int eax;
  struct global_history_item *history_item = &global_history_reap_list.next[0], *next = &global_history_reap_list.next[0];
  if ( global_history_reap_list.next != global_history_reap_list.next )
  {
    while ( 1 )
    {
      if ( history_item->object.refcount )
      {
        next = &next;
        history_item = &next;
        if ( next->next == global_history_reap_list.next )
          break;
      }
      else
      {
        history_item->prev = history_item->prev;
        &history_item->prev = &history_item;
        mem_free( (void*)history_item->title );
        mem_free( (void*)history_item->url );
        history_item = &next[0];
        mem_free( (void*)history_item[0].next );
        next = &next;
        if ( next->next == global_history_reap_list.next )
          break;
      }
      next = &next;
    }
  }
  return;
}
void delete_global_history_item( struct global_history_item *history_item )
{
  history_item->prev = history_item->prev;
  &history_item->prev[0] = &history_item[0];
  global_history.size--;
  if ( ( ( global_history.bits_at_12/*.1_1of4*/ & 2 ) & 255 ) == 0 )
    global_history.bits_at_12/*.1_1of4*/ = (int)global_history.bits_at_12/*.1_1of4*/ | 1;
  if ( globhist_cache && get_hash_item( globhist_cache, history_item->url, strlen( (char*)history_item->url ) ) )
  {
    del_hash_item( globhist_cache, get_hash_item( globhist_cache, history_item->url, strlen( (char*)history_item->url ) ) );
    globhist_cache_entries--;
  }
  done_listbox_item( &globhist_browser, history_item->box_item );
  history_item->box_item = 0;
  history_item->prev = &global_history_reap_list.next[0];
  history_item = &global_history_reap_list.next[0];
  global_history_reap_list.next = (void*)history_item[0].next;
  history_item->prev = &history_item[0];
  return;
}
struct global_history_item *get_global_history_item( unsigned char *url )
{
  struct hash_item *item;
  if ( url && globhist_cache && item[0] )
  {
    return &item->value[4];
  }
  *ebp_8 = ebx;
  return 0;
}
void add_global_history_item( unsigned char *url, unsigned char *title, time_t vtime )
{
  int eax;
  struct global_history_item *history_item;
  int max_globhist_items;
  if ( url && global_history_options[1].option_elinks.value )
  {
    max_globhist_items = global_history_options[2].option_elinks.value.tree;
    if ( history_item[0].next )
      delete_global_history_item( &history_item[0] );
    if ( max_globhist_items <= global_history.size )
    {
      do
      {
        *(int*)(global_history.entries.prev) = global_history.entries.prev;
        if ( global_history.entries.prev == global_history.entries.next )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/globhist/globhist.c";
          errline = 233;
          elinks_internal( "global history is empty" );
          global_history.size = 0;
          return;
        }
        delete_global_history_item( get_global_history_item( &url[0] ) );
      }
      while ( global_history.size < max_globhist_items );
    }
    reap_deleted_globhist_items(  );
    if ( mem_calloc( 1, 28 ) )
    {
      history_item->last_visit = vtime;
      history_item->title = stracpy( title != 0 ? "" : title );
      if ( history_item->title )
      {
        sanitize_title( history_item->title );
        history_item->url = stracpy( &url[0] );
        if ( history_item->url )
        {
          if ( sanitize_url( history_item->url ) == 0 )
          {
            if ( history_item->url )
              goto B29;
          }
          else
          {
            history_item->box_item = add_listbox_item( &globhist_browser, 0, BI_LEAF, (void*)history_item[0].next, 1 );
            if ( history_item->box_item == 0 )
              history_item->url[0] = history_item->url;
            else
            {
              history_item->prev = &global_history.entries.next[0];
              &history_item = &global_history->entries.next[0];
              global_history.entries.next = (void*)history_item[0].next;
              history_item->prev = &history_item[0];
              global_history.size++;
              if ( ( ( global_history.bits_at_12/*.1_1of4*/ & 2 ) & 255 ) == 0 )
                global_history.bits_at_12/*.1_1of4*/ = add_hash_item( &url[0], &max_globhist_items, add_listbox_item( &globhist_browser, 0, BI_LEAF, (void*)history_item[0].next, 1 ), global_history.entries.next + 4 ) | 1;
              if ( globhist_cache == 0 )
              {
                ebp_4 = add_global_history_item+200;
                globhist_cache = init_hash8(  );
                if ( globhist_cache )
                  goto B34;
              }
B34:              if ( globhist_cache_entries < max_globhist_items && add_hash_item( globhist_cache, &global_history.entries.next[6], strlen( &global_history.entries.next[6] ), global_history.entries.next + 4 ) )
              {
                globhist_cache_entries++;
              }
            }
          }
B29:          mem_free( (void*)history_item->url );
        }
        mem_free( (void*)history_item->title );
      }
      url = (unsigned char*)history_item[0].next;
    }
  }
  return;
}
int globhist_simple_search( unsigned char *search_url, unsigned char *search_title )
{
  int eax;
  struct global_history_item *history_item;
  if ( search_title && search_url[0] )
  {
    if ( gh_last_searched_title )
      mem_free( (void*)gh_last_searched_title );
    gh_last_searched_title = stracpy( &search_title[0] );
    if ( gh_last_searched_title )
    {
      if ( gh_last_searched_url )
        mem_free( (void*)gh_last_searched_url );
      gh_last_searched_url = stracpy( &search_url[0] );
      if ( gh_last_searched_url )
      {
        if ( search_title[0] == 0 && search_url[0] == 0 )
        {
          &history_item[0] = &global_history.entries.next[0];
          if ( global_history.entries.next != global_history.entries.next )
          {
            search_title[0] = search_title[0];
            do
            {
              history_item->box_item->bits_at_24/*.1_1of4*/ |= 2;
              &history_item[0] = &history_item;
            }
            while ( history_item->next != global_history.entries.next );
            return 1;
          }
        }
        else
        {
          history_item = &global_history.entries.next[0];
          if ( global_history.entries.next != global_history.entries.next )
          {
            while ( 1 )
            {
              if ( ( ( search_title[0] & 255 ) && strcasestr( (char*)history_item->title, &search_title[0] ) ) || ( search_url[0] && c_strcasestr( (char*)history_item->url, &search_url[0] ) ) )
              {
                history_item->box_item->bits_at_24/*.1_1of4*/ |= 2;
                history_item = &history_item;
                if ( history_item->next == global_history.entries.next )
                  goto B17;
              }
              else
              {
                history_item->box_item->bits_at_24/*.1_1of4*/ &= 253;
                history_item = &history_item;
                if ( history_item->next == global_history.entries.next )
                  goto B17;
              }
            }
          }
        }
B17:        return 1;
      }
    }
  }
  return 0;
}
void read_global_history( void )
{
  unsigned char in_buffer[3072];
  unsigned char *file_name;
  FILE *f;
  if ( global_history_options[1].option_elinks.value && *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 && ( elinks_home == 0 || straconcat( elinks_home ) ) )
  {
    f = fopen64( &file_name[0], "rb" );
    if ( elinks_home )
      mem_free( &file_name[0] );
    if ( f )
    {
      global_history.bits_at_12/*.1_1of4*/ |= 2;
      while ( fgets( in_buffer, 3072, f ) == 0 )
      {
        unsigned char *url;
        if ( strchr( in_buffer, 9 ) == 0 )
          continue;
        else
        {
          url[0] = strchr( in_buffer, 9 ) + 1;
          *(char*)(strchr( in_buffer, 9 )) = 0;
          if ( strchr( strchr( in_buffer, 9 ) + 1, 9 ) == 0 )
            continue;
          else
          {
            *(char*)(strchr( strchr( in_buffer, 9 ) + 1, 9 )) = 0;
            if ( eax == 0 )
              continue;
            else
            {
              eax = 0;
              add_global_history_item( &url[0], &ebx, eax );
            }
          }
        }
      }
      global_history.bits_at_12/*.1_1of4*/ &= 253;
      fclose( f );
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
void write_global_history( void )
{
  struct global_history_item *history_item;
  unsigned char *file_name;
  struct secure_save_info *ssi;
  if ( ( ( global_history.bits_at_12/*.1_1of4*/ & 1 ) & 255 ) && elinks_home && global_history_options[1].option_elinks.value && *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 && straconcat( elinks_home ) )
  {
    ssi = secure_open( straconcat( elinks_home ) );
    mem_free( &file_name[0] );
    if ( ssi[0].fp )
    {
      history_item = &global_history.entries.prev[0];
      if ( global_history.entries.prev != global_history.entries.next )
      {
        do
        {
        }
        while ( secure_fprintf( &ssi[0], "%s\t%s\t%ld\n" ) >= 0 && history_item->prev != global_history.entries.next );
      }
      if ( secure_close( &ssi[0] ) == 0 )
      {
        global_history.bits_at_12/*.1_1of4*/ &= 254;
      }
    }
  }
  *ebp_8 = ebx;
  return;
}
enum evhook_status  global_history_write_hook( va_list ap, void *data )
{
  write_global_history(  );
  return EVENT_HOOK_STATUS_NEXT;
}
void init_global_history( struct module *module )
{
}
void done_global_history( struct module *module )
{
  write_global_history(  );
  if ( globhist_cache )
  {
    free_hash( &globhist_cache );
    globhist_cache_entries = 0;
  }
  while ( global_history.entries.next != global_history.entries.next )
  {
    delete_global_history_item( &eax );
  }
  reap_deleted_globhist_items(  );
{
  void *p = (void*)gh_last_searched_title;
  if ( gh_last_searched_title )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)gh_last_searched_url;
  if ( gh_last_searched_url )
  {
    module = &((int*)p)[0];
  }
  return;
}
}
}
#if 0
#endif
