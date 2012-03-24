#include "progress.c.h"
int has_progress( struct progress *progress )
{
  timeval_T current_speed_after;
  timeval_from_milliseconds( &current_speed_after, 100 );
  return ~timeval_cmp( (int)( &(timeval_T*)(progress->elapsed) ), &current_speed_after ) >> 31;
}
struct progress *init_progress( off_t start )
{
  struct progress *progress;
  if ( progress[0].elapsed.sec )
  {
    progress->start = start;
    *(int*)(mem_calloc( 1, (int)( (size_t)(start & 0xFFFFFFFF) ) ) + 100) = 0;
  }
  *ebp_4 = esi;
  return (struct progress*)mem_calloc( 1, (int)( (size_t)(start & 0xFFFFFFFF) ) );
}
void done_progress( struct progress *progress )
{
  if ( assert_failed == 0 )
  {
    assert_failed = progress->timer != 0;
    if ( progress->timer )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/progress.c";
      errline = 44;
      elinks_internal( "assertion progress-&gt;timer == TIMER_ID_UNDEF failed!" );
      progress = &progress[0];
    }
    progress = &progress[0];
  }
  else
  {
    progress = &progress[0];
  }
}
void update_progress( struct progress *progress, int loaded, off_t size, off_t pos )
{
  (progress->loaded & 0xFFFFFFFF) = loaded;
  (progress->loaded << 32) = *(int*)(ebp_4 + 12);
  (bytes_delta & 0xFFFFFFFF) = loaded - (unsigned int)(progress->last_loaded & 0xFFFFFFFF);
  (bytes_delta << 32) = *(int*)(ebp_4 + 12) - *(int*)(progress + 64) - ( ( loaded < *(int*)(progress + 60) ) & 1 );
  (progress->last_loaded & 0xFFFFFFFF) = loaded;
  off_t bytes_delta;
  timeval_T now;
  timeval_T elapsed;
  timeval_T dis_b_max;
  timeval_T dis_b_interval;
  timeval_now( &now );
  timeval_sub( &elapsed, progress + 8, &now );
  progress->last_time.sec = now.sec;
  progress->last_time.usec = now.usec;
  loaded = loaded;
  timeval_add_interval( (int)( &(timeval_T*)(progress->elapsed) ), &elapsed );
  timeval_add_interval( progress + 16, &elapsed );
  timeval_from_milliseconds( &dis_b_max, mult_ms( 100, 50 ) );
  timeval_from_milliseconds( &dis_b_interval, 100 );
  while ( timeval_cmp( progress + 16, &dis_b_max ) < 0 )
  {
    (progress->last_loaded << 32) = *(int*)(ebp_4 + 12);
    progress->cur_loaded -= progress->data_in_secs[0];
    memmove( progress + 112, progress + 116, 196 );
    progress->data_in_secs[49] = 0;
    timeval_sub_interval( progress + 16, &dis_b_interval );
  }
  progress->data_in_secs[49] += (int)(bytes_delta & 0xFFFFFFFF);
  progress->cur_loaded += bytes_delta;
  __divdi3( (unsigned int)(progress->cur_loaded & 0xFFFFFFFF) + (unsigned int)(bytes_delta & 0xFFFFFFFF), (unsigned int)(progress->cur_loaded << 32) + (unsigned int)(bytes_delta << 32) + ( ( (unsigned int)(progress->cur_loaded & 0xFFFFFFFF) + (unsigned int)(bytes_delta & 0xFFFFFFFF) < (unsigned int)(bytes_delta & 0xFFFFFFFF) ) & 1 ), 5, 0 );
  progress->current_speed = (unsigned int)(progress->cur_loaded & 0xFFFFFFFF) + (unsigned int)(bytes_delta & 0xFFFFFFFF);
  progress->pos = pos;
  progress->size = size;
  if ( ( (unsigned int)(size & 0xFFFFFFFF) & (unsigned int)(size << 32) ) != -1 && (int)(progress->size << 32) <= (int)(pos << 32) && ( ccdep2 < ccdep1 || (unsigned int)(progress->size & 0xFFFFFFFF) < (unsigned int)(pos & 0xFFFFFFFF) ) )
    progress->size = pos;
  progress->average_speed = timeval_div_off_t( progress->loaded, &progress[0].elapsed );
  if ( progress->average_speed )
  {
    __divdi3( (int)( (unsigned int)(progress->size & 0xFFFFFFFF) - (unsigned int)(progress->pos & 0xFFFFFFFF) ), (unsigned int)(progress->size << 32) - (unsigned int)(progress->pos << 32) - ( ( (unsigned int)(progress->size & 0xFFFFFFFF) < (unsigned int)(progress->pos & 0xFFFFFFFF) ) & 1 ), progress->average_speed, progress->average_speed >> 31 );
    timeval_from_seconds( &progress->estimated_time, progress->average_speed );
  }
  install_timer( progress + 100, 100, progress->timer_func, progress->timer_func_data );
  return;
}
void start_update_progress( struct progress *progress, void (*timer_func)( void * ), void *timer_func_data )
{
  if ( ( ( progress->bits_at_40/*.1_1of4*/ & 1 ) & 255 ) == 0 )
  {
    memset( ebp_336, 0, 312 );
  {
    struct progress tmp;
    tmp.start = progress->start;
    tmp.bits_at_40/*.1_1of4*/ |= 1;
    tmp.seek = progress->seek;
    memcpy( &progress[0].elapsed.sec, *(int*)(0), 312 );
  }
  }
  timeval_now( &progress->last_time );
  progress->last_loaded = progress->loaded;
  progress->timer_func = timer_func;
  progress->timer_func_data = timer_func_data;
  return;
}
#if 0
#endif
