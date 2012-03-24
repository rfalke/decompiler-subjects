#include "timer.c.h"
static timer_id_T periodic_save_timer;
struct module periodic_saving_module = { "Periodic Saving", 0, 0, 0, 0, &init_timer, &done_timer };
void periodic_save_handler( void *xxx )
{
  static int periodic_save_event_id = -1;
  milliseconds_T interval;
  if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
  {
    if ( periodic_save_event_id == -1 )
    {
      periodic_save_event_id = get_event_id( "periodic-saving" );
    }
    else
      trigger_event( periodic_save_event_id );
    if ( interval == 0 )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = periodic_save_timer != 0;
        if ( periodic_save_timer )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/timer.c";
          errline = 42;
          xxx = "assertion periodic_save_timer == TIMER_ID_UNDEF failed!";
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
      install_timer( &periodic_save_timer, interval, &periodic_save_handler, 0 );
      return;
    }
  }
  else
  {
    return;
  }
}
int periodic_save_change_hook( struct session *ses, struct option_elinks *current, struct option_elinks *changed )
{
  if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
  {
    kill_timer( &periodic_save_timer );
    periodic_save_handler( 0 );
  }
  return 0;
}
void init_timer( struct module *module )
{
  static struct change_hook_info timer_change_hooks[2] = { { "infofiles.save_interval", &periodic_save_change_hook }
, { 0, 0 }
 };
  register_change_hooks( timer_change_hooks );
  module = 0;
}
void done_timer( struct module *module )
{
  module = &periodic_save_timer;
}
#if 0
#endif
