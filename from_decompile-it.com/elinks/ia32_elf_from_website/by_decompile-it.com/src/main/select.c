#include "select.c.h"
static struct thread threads[1024];
static fd_set w_read;
static fd_set w_write;
static fd_set w_error;
static fd_set x_read;
static fd_set x_write;
static fd_set x_error;
static int w_max;
static struct list_head_elinks bottom_halves = { &bottom_halves, &bottom_halves };
int get_file_handles_count( void )
{
  int eax;
  int i = 0;
  do
  {
    if ( threads[ 0 >> 4 ].read_func == 0 && threads->write_func[0] == 0 && threads->error_func[0] == 0 )
    {
      if ( 0 + 16 + 16 != 16384 )
        continue;
    }
    else
    {
      i++;
    }
  }
  while ( 0 + 16 + 16 != 16384 );
  return i;
}
int register_bottom_half_do( select_handler_T fn, void *data )
{
  struct bottom_half *bh = &bottom_halves.next[0];
  if ( bottom_halves.next != bottom_halves.next )
  {
    do
    {
      if ( bh->fn == fn && bh->data == ((int*)data)[0] )
        fn[0] = fn[0];
        break;
      else
      {
        bh = &bh;
      }
    }
    while ( bh->next != bottom_halves.next );
  }
  if ( mem_alloc( 16 ) )
  {
    *(int*)(mem_alloc( 16 ) + 8) = fn[0];
    *(int*)(mem_alloc( 16 ) + 12) = ((int*)data)[0];
    *(int*)(mem_alloc( 16 ) + 4) = bh[0];
    *(int*)(mem_alloc( 16 )) = bh->bottom_half;
    bh = (struct bottom_half*)mem_alloc( 16 );
    *(int*)(*(int*)(mem_alloc( 16 )) + 4) = mem_alloc( 16 );
    return 0;
  }
  else
  {
    return 0;
  }
}
void check_bottom_halves( void )
{
  if ( bottom_halves.next != bottom_halves.next )
  {
  {
    do
    {
      struct bottom_half *bh = &bottom_halves.prev[0];
      select_handler_T fn;
      void *data = &bottom_halves.prev[3];
      fn[0] = bottom_halves.prev[2];
      *(int*)(bottom_halves.prev[1]) = *(int*)(bottom_halves.prev);
      mem_free( bottom_halves.prev );
      fn( &((int*)data)[0] );
    }
    while ( bottom_halves.next == bottom_halves.next );
  }
  }
  return;
}
select_handler_T get_handler( int fd, enum select_handler_type  tp )
{
  if ( assert_failed == 0 )
  {
    assert_failed = fd > 1023;
    if ( fd > 1023 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/select.c";
      errline = 128;
      elinks_internal( "assertion fd &gt;= 0 && fd &lt; FD_SETSIZE failed: get_handler: handle %d &gt;= FD_SETSIZE %d" );
      if ( assert_failed == 0 )
      {
        if ( tp != SELECT_HANDLER_WRITE )
        {
          if ( !0 )
          {
            fd = fd;
            if ( tp == SELECT_HANDLER_ERROR )
            {
              return threads[ fd ].error_func;
            }
            fd = fd;
            if ( tp == SELECT_HANDLER_DATA )
            {
              return threads[ fd ].data;
            }
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/select.c";
            errline = 138;
            elinks_internal( "get_handler: bad type %d" );
            return 0;
          }
          else
          {
            return threads[ fd ].read_func;
          }
        }
        else
        {
          fd = fd;
        }
      }
    }
    else
    if ( tp != SELECT_HANDLER_WRITE )
    {
    }
    return threads[ fd ].write_func;
  }
  assert_failed = 0;
  return 0;
}
void set_handlers( int fd, select_handler_T read_func, select_handler_T write_func, select_handler_T error_func, void *data )
{
  int eax;
  int ecx;
  if ( assert_failed == 0 )
  {
    assert_failed = fd > 1023;
    if ( fd > 1023 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/select.c";
      errline = 149;
      elinks_internal( "assertion fd &gt;= 0 && fd &lt; FD_SETSIZE failed: set_handlers: handle %d &gt;= FD_SETSIZE %d" );
      if ( assert_failed )
      {
        write_func[0] = write_func[0];
      }
    }
    threads[ fd ].read_func = read_func;
    threads[ fd ].write_func = write_func;
    threads[ fd ].error_func = error_func;
    threads[ fd ].data = data;
    if ( read_func )
    {
      w_read.__fds_bits[ ( (unsigned char)( ( ( fd >> 31 ) & 1 ) ^ 1 ) ? fd + 31 : fd ) >> 5 ] |= 1 << ( __MOD(fd,32) );
      if ( write_func )
      {
        w_write.__fds_bits[ ( (unsigned char)( ( ( fd >> 31 ) & 1 ) ^ 1 ) ? fd + 31 : fd ) >> 5 ] |= 1 << ( __MOD(fd,32) );
        if ( error_func )
          w_error.__fds_bits[ ( (unsigned char)( ( ( fd >> 31 ) & 1 ) ^ 1 ) ? fd + 31 : fd ) >> 5 ] |= 1 << ( __MOD(fd,32) );
          if ( write_func || read_func || error_func )
          {
            if ( w_max <= fd )
            {
              w_max = fd + 1 + 1;
            }
          }
          else
          if ( fd == w_max - 1 )
          {
            int i;
            i -= 2;
            if ( i - 2 >= 0 )
            {
              do
              {
              }
              while ( ( ( ( ( *(char*)(ebp_44 + ( ( i & 31 ) >> 3 )) >> (unsigned char)( i & 7 ) ) & 1 ) >> 0 ) & 1 ) != 1 && ( ( ( ( *(char*)(ebp_44 + ( ( i & 31 & 31 ) >> 3 )) >> (unsigned char)( i & 31 & 7 ) ) & 1 ) >> 0 ) & 1 ) != 1 && ( ( ( ( *(char*)(ebp_44 + ( ( i & 31 & 31 ) >> 3 )) >> (unsigned char)( i & 31 & 7 ) ) & 1 ) >> 0 ) & 1 ) != 1 && i - 1 != -1 );
            }
            w_max = i + 1 + 1;
          }
          return;
        else
        {
          w_error.__fds_bits[ ( (unsigned char)( ( ( fd >> 31 ) & 1 ) ^ 1 ) ? fd + 31 : fd ) >> 5 ] &= ~( 1 << ( __MOD(fd,32) ) );
          x_error.__fds_bits[ ( (unsigned char)( ( ( fd >> 31 ) & 1 ) ^ 1 ) ? fd + 31 : fd ) >> 5 ] &= ~( 1 << ( __MOD(fd,32) ) );
        }
      }
    }
    else
    {
      w_read.__fds_bits[ ( (unsigned char)( ( ( fd >> 31 ) & 1 ) ^ 1 ) ? fd + 31 : fd ) >> 5 ] &= ~( 1 << ( __MOD(fd,32) ) );
      x_read.__fds_bits[ ( (unsigned char)( ( ( fd >> 31 ) & 1 ) ^ 1 ) ? fd + 31 : fd ) >> 5 ] &= ~( 1 << ( __MOD(fd,32) ) );
      if ( write_func == 0 )
        write_func[0] = write_func[0];
      else
      {
        w_write.__fds_bits[ ( (unsigned char)( ( ( fd >> 31 ) & 1 ) ^ 1 ) ? fd + 31 : fd ) >> 5 ] |= 1 << ( __MOD(fd,32) );
      }
    }
    w_write.__fds_bits[ ( (unsigned char)( ( ( fd >> 31 ) & 1 ) ^ 1 ) ? fd + 31 : fd ) >> 5 ] &= ~( 1 << ( __MOD(fd,32) ) );
    x_write.__fds_bits[ ( (unsigned char)( ( ( fd >> 31 ) & 1 ) ^ 1 ) ? fd + 31 : fd ) >> 5 ] &= ~( 1 << ( __MOD(fd,32) ) );
    if ( error_func == 0 )
      write_func[0] = write_func[0];
      w_error.__fds_bits[ ( (unsigned char)( ( ( fd >> 31 ) & 1 ) ^ 1 ) ? fd + 31 : fd ) >> 5 ] &= ~( 1 << ( __MOD(fd,32) ) );
      x_error.__fds_bits[ ( (unsigned char)( ( ( fd >> 31 ) & 1 ) ^ 1 ) ? fd + 31 : fd ) >> 5 ] &= ~( 1 << ( __MOD(fd,32) ) );
    else
      w_error.__fds_bits[ ( (unsigned char)( ( ( fd >> 31 ) & 1 ) ^ 1 ) ? fd + 31 : fd ) >> 5 ] |= 1 << ( __MOD(fd,32) );
  }
  assert_failed = 0;
  return;
}
void select_loop( void (*init)( void ) )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  timeval_T last_time;
  int select_errors;
{
  int __d0, __d1;
  w_read.__fds_bits[0] = w_read.__fds_bits[0];
  clear_signal_mask_and_handlers(  );
  memset( *(int*)(0), 0, 128 );
{
  int __d0, __d1 = w_write.__fds_bits[0];
  __d0 = 32;
  memset( w_write.__fds_bits, 0, 32 * 4 );
{
  int __d0, __d1 = w_error.__fds_bits[0];
  __d0 = 32;
  memset( w_error.__fds_bits, 0, 32 * 4 );
  w_max = 0;
  timeval_now( &last_time );
  signal( 13, 1 );
  init(  );
  check_bottom_halves(  );
  select_errors = 0;
  while ( program.terminate == 0 )
  {
    do
    {
      struct timeval *timeout;
      int n, i, has_timer;
      timeval_T t;
      check_signals(  );
      check_timers( &last_time );
      redraw_all_terminals(  );
      memcpy( *(int*)(0), *(int*)(0), 128 );
      memcpy( x_write.__fds_bits, w_write.__fds_bits, 128 );
      memcpy( x_error.__fds_bits, w_error.__fds_bits, 128 );
      if ( !program.terminate && ( get_next_timer_time( &t ) || w_max ) )
      {
        critical_section = 1;
        if ( check_signals(  ) == 0 )
        {
          if ( has_timer )
          {
            timeval_limit_to_zero_or_one( ebp_40 );
            *ebp_40 = ebp_40;
          }
          if ( select( w_max, &x_read, &x_write, &x_error, ebp_40 ) < 0 )
          {
            int errno_from_select = *(int*)(__errno_location(  ));
            critical_section = 0;
            uninstall_alarm(  );
            if ( errno_from_select == 4 )
              continue;
            else
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/select.c";
              errline = 279;
              elinks_error( gettext( "The call to %s failed: %d (%s)" ) );
              select_errors++;
              if ( select_errors <= 10 )
                continue;
              else
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/select.c";
                errline = 282;
                elinks_internal( gettext( "%d select() failures." ) );
              }
            }
          }
          else
          {
            critical_section = 0;
            uninstall_alarm(  );
            check_signals(  );
            check_timers( &last_time );
            if ( select( w_max, &x_read, &x_write, &x_error, ebp_40 ) && w_max >= 1 )
            {
            {
              do
              {
                int k = 0;
                if ( ( ( ( ( *(char*)(ebp_92 + ( ( ( __MOD(( 0 + 1 ),32) ) & 31 ) >> 3 )) >> (unsigned char)( ( __MOD(( 0 + 1 ),32) ) & 7 ) ) & 1 ) >> 0 ) & 1 ) == 1 && threads->data[1] )
                {
                  ecx( threads->data[4], threads->data + 16 );
                  check_bottom_halves(  );
                  k = 1;
                }
                if ( ( ( ( ( *(char*)(ebp_92 + ( ( ( __MOD(( 0 + 1 ),32) ) & 31 ) >> 3 )) >> (unsigned char)( ( __MOD(( 0 + 1 ),32) ) & 7 ) ) & 1 ) >> 0 ) & 1 ) == 1 && threads->data[2] )
                {
                  ecx( edx, edx );
                  check_bottom_halves(  );
                  k = 1;
                }
                if ( ( ( ( ( *(char*)(ebp_92 + ( ( ( __MOD(( 0 + 1 ),32) ) & 31 ) >> 3 )) >> (unsigned char)( ( __MOD(( 0 + 1 ),32) ) & 7 ) ) & 1 ) >> 0 ) & 1 ) == 1 && *(int*)(edx - 4) )
                {
                  ecx( edx, edx );
                  check_bottom_halves(  );
                }
              }
              while ( ebp_44 == eax || w_max <= 0 + 1 + 1 );
            }
            }
            select_errors = 0;
            break;
          }
        }
        else
        {
          critical_section = 0;
        }
      }
      else
        break;
    }
    while ( program.terminate == 0 );
    break;
  }
  return;
}
}
}
}
int can_read_or_write( int fd, int write )
{
  int ebx;
  int edi;
  struct timeval tv;
  fd_set fds;
  fd_set *rfds;
  fd_set *wfds;
  int __d0, __d1;
{
  int __d0, __d1;
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  memset( fds.__fds_bits, 0, 128 );
  rfds[0].__fds_bits[0] = write == 0 ? rfds[0].__fds_bits[0] : fds.__fds_bits[0];
  wfds = write != 0 ? &rfds[0] : &fds;
  fds.__fds_bits[ ( (unsigned char)( ( ( fd >> 31 ) & 1 ) ^ 1 ) ? fd + 31 : fd ) >> 5 ] |= 1 << ( __MOD(fd,32) );
  return select( fd + 1, write == 0 ? &rfds[0] : &fds, 0, &tv.tv_sec );
}
}
int can_read( int fd )
{
}
int can_write( int fd )
{
}
#if 0
#endif
