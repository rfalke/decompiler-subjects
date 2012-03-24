#include "signals.c.h"
static struct signal_info signal_info[32];
int critical_section;
static int pending_alarm;
void sig_terminate( struct terminal *term )
{
  int eax;
  unhandle_basic_signals( term );
  program.terminate = 1;
  program.retval = RET_SIGNAL;
  return;
}
void sig_intr( struct terminal *term )
{
  int eax;
  unhandle_basic_signals( term );
  if ( term == 0 )
  {
    program.terminate = 1;
    return;
  }
  register_bottom_half_do( &destroy_terminal, (void*)term[0].next );
  return;
}
void sig_ctrl_c( struct terminal *term )
{
  if ( is_blocked(  ) )
  {
    return;
  }
}
void sig_ign( void *x )
{
  return;
}
void sig_tstp( struct terminal *term )
{
  pid_t pid = getpid(  );
  block_itrm(  );
  if ( fork(  ) == 0 )
  {
    sleep( 1 );
    kill( pid, 18 );
    _exit( 0 );
  }
  term = 19;
}
void sig_cont( struct terminal *term )
{
  if ( unblock_itrm(  ) )
  {
    return;
  }
}
void sig_segv( struct terminal *term )
{
  fputc( 7, stderr );
  fflush( stderr );
  sleep( 1 );
  fwrite( "\n", 1, 2, stderr );
  fwrite( "ELinks crashed. That shouldn't happen. Please report this incident to\nthe developers. If you would like to help to debug the problem you just\nuncovered, please keep the core you just got and send the developers\nthe output of 'bt' command entered inside of gdb (which you run as:\ngdb elinks core). Thanks a lot for your cooperation!\n\n", 1, 333, stderr );
  fputs( full_static_version, stderr );
  fwrite( "\n\n", 1, 2, stderr );
  dump_backtrace( stderr, 1 );
  abort(  );
}
void handle_basic_signals( struct terminal *term )
{
  install_signal_handler( 1, &sig_intr, (void*)term, 0 );
  install_signal_handler( 2, &sig_ctrl_c, (void*)term, 0 );
  install_signal_handler( 15, &sig_terminate, (void*)term, 0 );
  install_signal_handler( 20, &sig_tstp, (void*)term, 0 );
  install_signal_handler( 21, &sig_tstp, (void*)term, 0 );
  install_signal_handler( 22, &sig_ign, (void*)term, 0 );
  install_signal_handler( 18, &sig_cont, (void*)term, 0 );
  install_signal_handler( 11, &sig_segv, (void*)term, 1 );
  return;
}
void unhandle_terminal_signals( struct terminal *term )
{
  install_signal_handler( 1, 0, 0, 0 );
  install_signal_handler( 2, 0, 0, 0 );
  install_signal_handler( 20, 0, 0, 0 );
  install_signal_handler( 21, 0, 0, 0 );
  install_signal_handler( 22, 0, 0, 0 );
  install_signal_handler( 18, 0, 0, 0 );
  install_signal_handler( 11, 0, 0, 0 );
  return;
}
void unhandle_basic_signals( struct terminal *term )
{
  install_signal_handler( 1, 0, 0, 0 );
  install_signal_handler( 2, 0, 0, 0 );
  install_signal_handler( 15, 0, 0, 0 );
  install_signal_handler( 20, 0, 0, 0 );
  install_signal_handler( 21, 0, 0, 0 );
  install_signal_handler( 22, 0, 0, 0 );
  install_signal_handler( 18, 0, 0, 0 );
  install_signal_handler( 11, 0, 0, 0 );
  return;
}
void got_signal( int sig )
{
  int eax;
  struct signal_info *s;
  int saved_errno = *(int*)(__errno_location(  ));
  if ( sig <= 31 && signal_info[ sig << 4 ] )
  {
    if ( s->critical )
    {
      edx( s->data[1] );
      *(int*)(__errno_location(  )) = saved_errno;
    }
    else
    {
      s->mask = 1;
      check_for_select_race(  );
      *(int*)(__errno_location(  )) = saved_errno;
    }
  }
  return;
}
void install_signal_handler( int sig, void (*fn)( void * ), void *data, int critical )
{
  struct sigaction sa;
  if ( assert_failed == 0 )
  {
    assert_failed = sig > 31;
    if ( sig > 31 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/osdep/signals.c";
      errline = 261;
      elinks_internal( "assertion sig &gt;= 0 && sig &lt; NUM_SIGNALS failed: bad signal number: %d" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    memset( sa.__sigaction_handler.sa_handler, 0, 140 );
    if ( fn )
    {
      sa.__sigaction_handler.sa_handler = &got_signal;
      sigfillset( sa.sa_mask.__val );
      signal_info[ sig ].handler = fn;
      signal_info[ sig ].data = data;
      signal_info[ sig ].critical = critical;
      sigaction( sig, sa.__sigaction_handler.sa_handler, 0 );
      return;
    }
    else
    {
      sa.__sigaction_handler.sa_handler = 1;
      sigfillset( sa.sa_mask.__val );
      sigaction( sig, sa.__sigaction_handler.sa_handler, 0 );
      signal_info[ sig ].handler = 0;
      signal_info->data[ sig ] = data;
      signal_info->critical = critical;
      return;
    }
  }
  assert_failed = 0;
  return;
}
void alarm_handler( void *x )
{
  pending_alarm = 0;
}
void check_for_select_race( void )
{
  if ( critical_section )
  {
    install_signal_handler( 14, &alarm_handler, 0, 1 );
    pending_alarm = 1;
    alarm( 1 );
    return;
  }
  return;
}
void uninstall_alarm( void )
{
  pending_alarm = 0;
  alarm( 0 );
  return;
}
void sig_chld( void *p )
{
  do
  {
  }
  while ( waitpid( -1, 0, 1 ) >= 1 );
  return;
}
void set_sigcld( void )
{
  install_signal_handler( 17, &sig_chld, 0, 1 );
  return;
}
void clear_signal_mask_and_handlers( void )
{
  memset( signal_info[0].handler, 0, 512 );
  return;
}
int check_signals( void )
{
  int r = 0;
  do
  {
    if ( signal_info->mask )
    {
      signal_info->mask = 0;
      if ( signal_info[ 0 >> 4 ].handler )
        eax( signal_info->data[4] );
      check_bottom_halves(  );
      r = 1;
    }
  }
  while ( 0 + 16 + 16 != 512 );
  return r;
}
#if 0
#endif
