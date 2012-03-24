#include "history.c.h"
void create_history( struct ses_history *history )
{
  history->history.prev = (void*)history;
  history[0].history.next = (void*)history;
  history->current = 0;
  return;
}
void destroy_history( struct ses_history *history )
{
  if ( history[0].history.next != history )
  {
    do
    {
      history->history.next[1] = history->history.prev;
      history->history.prev[0] = history->history.next;
      destroy_location( &history[0].history.next[0] );
    }
    while ( history[0].history.next == history->history.next );
  }
  history->current = 0;
  return;
}
void clean_unhistory( struct ses_history *history )
{
  int eax;
  if ( history->current )
  {
    for ( ; history->current[0].next != history[0].history.next; &history->current = history->current )
    {
      eax[4] = *(int*)(eax);
      destroy_location( &eax[0] );
      //&history->current = history->current;
    }
  }
  return;
}
void add_to_history( struct ses_history *history, struct location *loc )
{
  int eax;
  if ( history->current == 0 )
  {
    loc->prev = &history[0].history.next[0];
    loc = &history->history.next[0];
    history = &loc[0].next[0];
    loc->prev = &loc[0];
    history->current = &loc[0];
    return;
  }
  loc = &history->current;
  loc->prev = history->current;
  &history->current = &loc;
  loc->prev = &loc[0];
  history->current = &loc[0];
  return;
}
void del_from_history( struct ses_history *history, struct location *loc )
{
  if ( history->current == loc )
  {
    history->current = history->current->prev;
    if ( history[0].history.next == history->current->prev )
    {
    }
    else
    {
      loc->prev = loc->prev;
      &loc->prev = &loc;
      return;
    }
  }
  else
  if ( history->current != history[0].history.next )
  {
    loc->prev = loc->prev;
    &loc->prev = &loc;
    return;
  }
  history->current = loc->next != history[0].history.next ? 0 : &loc;
  loc->prev = loc->prev;
  &loc->prev = &loc;
  return;
}
void ses_history_move( struct session *ses )
{
  free_files( ses );
  if ( ses->search_word )
    mem_free( (void*)ses->search_word );
  ses->search_word = 0;
  if ( ses->history.current && ses->task.target.location && ses->task.target.location != ses->history.history.next )
  {
    ses->history.current = ses->task.target.location;
    if ( compare_uri( ses->history.current->vs.uri, ses->loading_uri, 0 ) == 0 )
    {
      if ( ses->history.current == ses->history.current )
        ses->history.current = ses->history.current->prev;
      if ( ses->history.history.next == ses->history.current->prev )
        ses->history.current = ses->history.current != ses->history.history.next ? 0 : ses->history.current;
      ses->history.current->prev = ses->history.current->prev;
      &ses->history.current->prev = ses->history.current;
      destroy_location( ses->history.current );
      ses_forward( &ses[0], 0 );
      if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
      {
        ses += 0;
      }
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
void go_history( struct session *ses, struct location *loc )
{
  ses->reloadlevel = CACHE_MODE_NORMAL;
  if ( ses->task.type )
  {
    abort_loading( &ses[0], 0 );
    print_screen_status( &ses[0] );
    ses = &ses[0];
    loc = 1;
  }
  if ( ses->history.current && ses->history.history.next != loc[0].next )
  {
    abort_loading( &ses[0], 0 );
    set_session_referrer( &ses[0], 0 );
    ses_goto( &ses[0], loc->vs.uri, 0, &loc[0], CACHE_MODE_ALWAYS, TASK_HISTORY, 0 );
  }
  return;
}
void go_history_by_n( struct session *ses, int n )
{
  int eax;
  int ecx;
  struct location *loc = ses->history.current;
  if ( ses->history.current )
  {
    if ( n >= 1 )
    {
      n--;
      while ( loc = &loc, ses->history.history.next == loc->next )
      {
        if ( n == 0 )
          &loc = &loc;
          n = loc->next;
          ses = &ses[0];
        else
        {
          n--;
          loc = &loc[0];
        }
      }
    }
    else
    {
      for ( ; n + 1; loc = &loc[0] )
      {
        loc = loc->prev;
        if ( ses->history.history.next == ses->history.current->prev )
          continue;
        //loc = &loc[0];
      }
      n = loc[0].next;
      ses = &ses[0];
    }
  }
  else
  {
    return;
  }
}
void go_back( struct session *ses )
{
  go_history_by_n( ses, -1 );
  return;
}
void go_unback( struct session *ses )
{
  go_history_by_n( ses, 1 );
  return;
}
#if 0
#endif
