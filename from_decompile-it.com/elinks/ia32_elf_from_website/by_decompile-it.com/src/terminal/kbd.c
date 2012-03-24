#include "kbd.c.h"
struct itrm *ditrm;
int is_blocked( void )
{
  int eax;
  return ditrm ? (int)ditrm->bits_at_116/*.1_1of4*/ & 1 : 0;
}
void free_all_itrms( void )
{
  if ( ditrm )
  {
    free_itrm( ditrm );
  }
  return;
}
void itrm_queue_write( struct itrm *itrm )
{
  int eax;
  int edx;
  int written;
  int qlen = (unsigned char)( ( itrm->out.queue.len < 128 ) ^ 1 ) ? itrm->out.queue.len : 128;
  if ( assert_failed == 0 )
  {
    assert_failed = qlen == 0;
    if ( !(_Bool)( qlen != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/kbd.c";
      errline = 85;
      elinks_internal( "assertion qlen failed: event queue empty" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    if ( written < 1 )
    {
      if ( !1 )
      {
        itrm = &itrm[0];
      }
      return;
    }
    else
    {
      itrm->out.queue.len -= written;
      if ( itrm->out.queue.len - written == 0 )
      {
        set_handlers( itrm->out.sock, get_handler( itrm->out.sock, SELECT_HANDLER_READ ), 0, get_handler( itrm->out.sock, SELECT_HANDLER_ERROR ), get_handler( itrm->out.sock, SELECT_HANDLER_DATA ) );
        return;
      }
      else
      {
        if ( assert_failed == 0 )
        {
          assert_failed = itrm->out.queue.len - written < 1;
          if ( itrm->out.queue.len - written < 1 )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/kbd.c";
            errline = 103;
            elinks_internal( "assertion itrm-&gt;out.queue.len &gt; 0 failed!" );
            itrm->out.queue.len = itrm->out.queue.len;
            *ebp_28 = written;
          }
          else
            itrm->out.queue.len = itrm->out.queue.len;
        }
        memmove( itrm->out.queue.data, itrm->out.queue.data + itrm->out.queue.data + written, itrm->out.queue.len );
        return;
      }
    }
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
void set_kbd_interlink_event( struct interlink_event *ev, int key, term_event_modifier_T modifier )
{
  ev->info.mouse.button = 0;
  ev = 1;
  ev->info.mouse.y = modifier;
  return;
}
void itrm_queue_event( struct itrm *itrm, unsigned char *data, int len )
{
  int edx;
  int w;
  if ( len )
  {
    if ( itrm->out.queue.len == 0 && can_write( itrm->out.sock ) )
    {
      if ( write( itrm->out.sock, &data[0], len ) < 1 )
      {
        data = &itrm[0].in.std;
        itrm = &free_itrm;
      }
    }
    else
      w = 0;
    if ( w < len )
    {
      int left;
      left -= w;
      *ebp_28 = data;
      if ( mem_realloc( (void*)itrm->out.queue.data, itrm->out.queue.len + ( left - w ) ) == 0 )
      {
        itrm = &itrm[0];
      }
      itrm->out.queue.data = (unsigned char*)mem_realloc( (void*)itrm->out.queue.data, itrm->out.queue.len + ( left - w ) );
      memcpy( itrm->out.queue.len + itrm->out.queue.data, data + w + data, left );
      itrm->out.queue.len += left;
      set_handlers( itrm->out.sock, get_handler( itrm->out.sock, SELECT_HANDLER_READ ), &itrm_queue_write, &free_itrm, &itrm[0].in.std );
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
void kbd_ctrl_c( void )
{
  struct interlink_event ev;
  if ( ditrm )
  {
    ev.info.mouse.x = 512;
    ev.info.mouse.button = 0;
    ev.ev = EVENT_KBD;
    ev.info.mouse.y = 0;
    itrm_queue_event( ditrm, &ev.ev, 16 );
  }
  return;
}
void send_init_sequence( int h, int altscreen )
{
  hard_write( h, "\033)0\0337", 5 );
  if ( altscreen )
    hard_write( h, "\033[?47h", 6 );
  send_mouse_init_sequence( h );
  return;
}
void send_done_sequence( int h, int altscreen )
{
  hard_write( h, "\033[2J", 4 );
  send_mouse_done_sequence( h );
  if ( altscreen )
    hard_write( h, "\033[?47l", 6 );
  hard_write( h, "\0338\r ", 5 );
  return;
}
void resize_terminal( void )
{
  ev.info.mouse.x = width;
  struct interlink_event ev;
  int width, height;
  get_terminal_size( ditrm->out.std, &width, &height );
  ev.info.mouse.button = 0;
  ev.ev = EVENT_RESIZE;
  ev.info.mouse.y = height;
  itrm_queue_event( ditrm, &ev.ev, 16 );
  return;
}
void get_terminal_name( unsigned char *name )
{
  int ecx;
  int edx;
  int i;
  if ( ( name & 1 ) & 255 )
  {
    name[0] = name[1];
    name[0] = 0;
    if ( ( (unsigned char)( name + 1 ) & 2 ) & 255 )
    {
    }
    else
    {
      do
      {
        name[0] = 0;
      }
      while ( 0 + 4 + 4 < ( 31 & -4 ) );
      name[0] = name[ 0 + 4 ];
      if ( ( ecx & 2 ) & 255 )
      {
        name[0] = 0;
        name[0] = name[2];
      }
      if ( ecx & 1 )
        name[0] = 0;
      if ( edi && edi )
      {
        i = 0;
        do
        {
          i++;
          name[0] = edx;
        }
        while ( i + 1 <= 30 && ( edx & 255 ) );
      }
      return;
    }
  }
  else
  if ( ( ( name[0] & 2 ) & 255 ) == 0 )
    continue;
  name[0] = 0;
  name[0] = name[2];
}
int setraw( struct itrm *itrm, int save_orig )
{
  struct termios t;
  memset( &t.c_iflag, 0, 60 );
  if ( tcgetattr( itrm->in.ctl, &t.c_iflag ) == 0 )
  {
    if ( save_orig )
    {
      itrm->t.c_iflag = t.c_iflag;
      itrm->t.c_oflag = t.c_oflag;
      itrm->t.c_cflag = t.c_cflag;
      itrm->t.c_lflag = t.c_lflag;
      itrm->t.c_line = t.c_line;
      itrm->t.c_cc[3] = t.c_cc[3];
      itrm->t.c_cc[7] = t.c_cc[7];
      itrm->t.c_cc[11] = t.c_cc[11];
      itrm->t.c_cc[15] = t.c_cc[15];
      itrm->t.c_cc[19] = t.c_cc[19];
      itrm->t.c_cc[23] = t.c_cc[23];
      itrm->t.c_cc[27] = t.c_cc[27];
      itrm->t.c_cc[31] = t.c_cc[31];
      itrm->t.c_ispeed = t.c_ispeed;
      itrm->t.c_ospeed = t.c_ospeed;
    }
    if ( t.c_cc[2] == 0 )
      itrm->verase = -1;
    else
      itrm->verase = tcsetattr( itrm->in.ctl, 0, &t.c_iflag );
    elinks_cfmakeraw( &t );
    t.c_lflag |= 257;
    t.c_oflag |= 1;
    if ( 0 ^ 0 )
    {
      __stack_chk_fail(  );
    }
    return -1;
  }
}
void handle_trm( int std_in, int std_out, int sock_in, int sock_out, int ctl_in, void *init_string, int init_len, int remote )
{
  int eax;
  int edx;
  struct itrm *itrm;
  struct terminal_info info;
  unsigned char *ts;
  memset( &info.event.ev, 0, 324 );
  get_terminal_size( ctl_in, &info.event.info.mouse.x, &info.event.info.mouse.y );
  info.event.ev = EVENT_INIT;
  info.system_env = get_system_env(  );
  info.length = init_len;
  if ( remote )
  {
    info.session_info = remote;
    info.magic = -257;
  }
  else
  {
    info.magic = -256;
    info.session_info = *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options ));
  }
  if ( mem_calloc( 1, 120 ) )
  {
    itrm->in.queue.data = (unsigned char*)mem_calloc( 1, 64 );
    if ( itrm->in.queue.data == 0 )
      mem_free( &itrm[0].in.std );
    else
    {
      ditrm = &itrm[0];
      itrm->in.std = std_in;
      itrm->out.std = std_out;
      itrm->in.sock = sock_in;
      itrm->out.sock = sock_out;
      itrm->timer = 0;
      itrm->in.ctl = ctl_in;
      itrm->bits_at_116/*.1_1of4*/ = ( *(char*)(itrm[0].in.std + 116) & -9 ) | ( ( remote != 0 ) << 3 );
      ditrm->title_codepage = get_cp_index( "ISO-8859-1" );
      if ( ( info.system_env/*.1_1of4*/ & 6 ) & 255 )
        ditrm->bits_at_116/*.1_1of4*/ |= 2;
      if ( remote == 0 )
      {
        if ( ctl_in >= 0 )
          setraw( ditrm, 1 );
        send_init_sequence( std_out, ( *(char*)(&ditrm->bits_at_116) >> 1 ) & 1 );
        handle_terminal_resize( ctl_in, &resize_terminal );
        enable_mouse(  );
        handle_itrm_stdin( ditrm );
      }
      else
      if ( std_in >= 0 )
        handle_itrm_stdin( &itrm[0] );
      if ( std_out != sock_in )
        set_handlers( sock_in, &in_sock, 0, &free_itrm, (void*)ditrm );
      get_terminal_name( &info.name[0] );
      if ( get_cwd(  ) )
      {
        __memcpy_chk( &info.cwd[0], &ts[0], strlen( (char*)get_cwd(  ) ) < 256 ? 256 : strlen( (char*)get_cwd(  ) ), 276 );
        mem_free( &ts[0] );
      }
      itrm_queue_event( ditrm, &info.event.ev, 320 );
      itrm_queue_event( ditrm, (unsigned char*)init_string, init_len );
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
void unblock_itrm_x( void *h )
{
  close_handle( h );
  if ( ditrm )
  {
    unblock_itrm(  );
  }
  return;
}
int unblock_itrm( void )
{
  int eax;
  int edx;
  if ( ditrm )
  {
    if ( ditrm->in.ctl >= 0 )
    {
      if ( setraw(  ) == 0 )
        ditrm = ditrm;
    }
    ditrm->bits_at_116/*.1_1of4*/ &= 254;
    send_init_sequence( ditrm->out.std, ( (int)ditrm->bits_at_116/*.1_1of4*/ >> 1 ) & 1 );
    handle_itrm_stdin( ditrm );
    resume_mouse( ditrm->mouse_h );
    handle_terminal_resize( ditrm->in.ctl, &resize_terminal );
    unblock_stdin(  );
    return 0;
  }
  return -1;
}
void block_itrm( void )
{
  int eax;
  int edx;
  if ( ditrm )
  {
    ditrm->bits_at_116/*.1_1of4*/ |= 1;
    block_stdin(  );
    kill_timer( &ditrm->timer );
    ditrm->in.queue.len = 0;
    unhandle_terminal_resize( ditrm->in.ctl );
    send_done_sequence( ditrm->out.std, ( (int)ditrm->bits_at_116/*.1_1of4*/ >> 1 ) & 1 );
    tcsetattr( ditrm->in.ctl, 0, &ditrm->t.c_iflag );
    unhandle_itrm_stdin( ditrm );
    suspend_mouse( ditrm->mouse_h );
  }
  return;
}
void free_itrm( struct itrm *itrm )
{
  int eax;
  int edx;
  if ( itrm )
  {
    if ( ( ( itrm->bits_at_116/*.1_1of4*/ & 8 ) & 255 ) == 0 )
    {
      if ( itrm->orig_title && itrm->orig_title[0] )
        set_window_title( itrm->orig_title, itrm->title_codepage );
      else
      if ( ( (int)itrm->bits_at_116/*.1_1of4*/ & 4 ) & 255 )
      {
        unsigned char title[32];
        get_terminal_name( title );
        if ( title[0] )
        {
          set_window_title( title, get_cp_index( "US-ASCII" ) );
        }
      }
      unhandle_terminal_resize( itrm->in.ctl );
      disable_mouse(  );
      send_done_sequence( itrm->out.std, ( (int)itrm->bits_at_116/*.1_1of4*/ >> 1 ) & 1 );
      tcsetattr( itrm->in.ctl, 0, &itrm->t.c_iflag );
    }
    if ( itrm->orig_title )
      mem_free( (void*)itrm->orig_title );
    itrm->orig_title = 0;
    if ( ( itrm->bits_at_116/*.1_1of4*/ & 8 ) & 255 )
    {
      if ( itrm->in.std < 0 )
      {
        set_handlers( itrm->in.sock, 0, 0, 0, 0 );
        set_handlers( itrm->out.std, 0, 0, 0, 0 );
        set_handlers( itrm->out.sock, 0, 0, 0, 0 );
        kill_timer( &itrm->timer );
        if ( itrm[0].in.std == ditrm )
          ditrm = 0;
      {
        void *p = (void*)itrm->out.queue.data;
        if ( itrm->out.queue.data )
          mem_free( &((int*)p)[0] );
      {
        void *p = (void*)itrm->in.queue.data;
        if ( itrm->in.queue.data )
          mem_free( &((int*)p)[0] );
        mem_free( &itrm[0].in.std );
      }
      }
      }
    }
    else
      itrm->in.std = itrm->in.std;
    set_handlers( itrm->in.std, 0, 0, 0, 0 );
    set_handlers( itrm->in.sock, 0, 0, 0, 0 );
    set_handlers( itrm->out.std, 0, 0, 0, 0 );
    set_handlers( itrm->out.sock, 0, 0, 0, 0 );
    kill_timer( &itrm->timer );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
void dispatch_special( unsigned char *text )
{
  int eax;
  int edx;
  if ( text[0] != 2 )
  {
    if ( text[0] != 3 )
    {
      if ( text[0] == 1 )
      {
        if ( ditrm )
        {
          if ( ( ( *(char*)(ditrm + 116) & 8 ) & 255 ) == 0 )
          {
            if ( ditrm->orig_title == 0 )
            {
              ditrm->orig_title = get_window_title(  );
            }
            ditrm->bits_at_116/*.1_1of4*/ = (int)ditrm->bits_at_116/*.1_1of4*/ | 4;
            set_window_title( &text[1], ditrm ? *(int*)(ditrm + 112) : get_cp_index( "US-ASCII" ) );
            return;
          }
          else
          {
            return;
          }
        }
        get_cp_index( "US-ASCII" );
        set_window_title( &text[1], ditrm ? *(int*)(ditrm + 112) : get_cp_index( "US-ASCII" ) );
        return;
      }
      else
      {
        return;
      }
    }
    else
    {
      if ( ditrm )
      {
        int cp;
        if ( cp == -1 )
        {
          get_cp_index( "US-ASCII" );
        }
        ditrm->title_codepage = cp;
        return;
      }
      else
      {
        return;
      }
    }
  }
  else
  {
    if ( ditrm == 0 || ( ( *(char*)(ditrm + 116) & 8 ) & 255 ) == 0 )
    {
      if ( assert_failed == 0 )
      {
        if ( text[1] && text[1] )
          assert_failed = 0;
        else
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/kbd.c";
          errline = 471;
          elinks_internal( "assertion text && *text failed!" );
          if ( assert_failed )
            goto B19;
        }
        while ( 1 )
        {
          if ( eax )
          {
            *(char*)(strchr( &edx, 44 )) = 0;
            *(int*)(( ebp_2147483632 + ( 0 << 2 ) ) - 40) = strtol( &edx, 0, 10 );
            if ( strchr( &edx, 44 ) + 1 )
            {
              if ( 0 + 1 + 1 != 4 )
                continue;
            }
            else
            {
              ebx = ebx;
              if ( 0 + 1 + 1 != 4 )
                continue;
            }
          }
          else
          if ( 0 == 3 )
          {
            ebx = ebx;
            if ( 0 + 1 + 1 != 4 )
              continue;
          }
          else
            break;
          resize_window( ebp_40, ebp_36, ebp_32, ebp_28 );
        }
      }
B19:      assert_failed = 0;
      return;
    }
    else
    {
      return;
    }
  }
}
void in_sock( struct itrm *itrm )
{
  int eax;
  int ecx;
  int edx;
  struct string path;
  struct string delete;
  int fg;
  ssize_t bytes_read;
  ssize_t i;
  ssize_t p;
  unsigned char buf[16384];
  if ( read( itrm->in.sock, buf, 16384 ) >= 1 )
  {
    do
    {
      i = 0;
      if ( buf[0] )
      {
        do
        {
          i++;
          if ( bytes_read <= i + 1 )
          {
            if ( ditrm == 0 || ( ( *(char*)(ditrm + 116) & 1 ) & 255 ) == 0 )
            {
              want_draw(  );
              hard_write( itrm->out.std, buf, bytes_read );
              done_draw(  );
              if ( 0 ^ 0 )
              {
                __stack_chk_fail(  );
              }
              break;
            }
          }
          else
        }
        while ( *(char*)(i + buf[0]) );
        if ( i )
        {
          if ( ditrm == 0 || ( ( *(char*)(ditrm + 116) & 1 ) & 255 ) == 0 )
          {
            want_draw(  );
            hard_write( itrm->out.std, buf, i );
            done_draw(  );
          }
        }
        else
        {
        }
      }
      else
      {
      }
      if ( assert_failed == 0 )
      {
        assert_failed = edx < 1;
        if ( 16384 - ( i + 1 + 1 ) < 1 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/kbd.c";
          errline = 573;
          elinks_internal( "assertion ITRM_OUT_QUEUE_SIZE - i &gt; 0 failed!" );
          *ebp_16468 = i + 1 + 1;
          *ebp_16464 = 16384 - ( i + 1 + 1 );
        }
      }
      bytes_read -= i + 1;
      __memmove_chk( &edi, edi + ecx, eax, 16384 );
    {
      unsigned char cc;
      if ( bytes_read >= 1 )
        p = 1;
      else
      {
        if ( hard_read( itrm->in.sock, ebp_16413, 1 ) >= 1 )
          p = 0;
      }
      if ( init_string( &path ) )
      {
        while ( 1 )
        {
          if ( bytes_read <= p )
          {
            if ( hard_read( itrm->in.sock, ebp_16413, 1 ) >= 1 )
            {
              if ( buf[0] )
              {
                add_char_to_string( &path, ebp_16413 );
              }
            }
          }
          else
          {
            unsigned char cc;
            p++;
            if ( buf[ p ] )
            {
              add_char_to_string( &path, ebp_16413 );
            }
          }
          if ( init_string( &delete ) == 0 )
          {
            done_string( &path );
            p = p;
          }
          else
          {
            while ( 1 )
            {
              if ( bytes_read <= p )
              {
                if ( hard_read( itrm->in.sock, ebp_16413, 1 ) >= 1 )
                {
                  if ( buf[ p ] )
                  {
                    add_char_to_string( &delete, buf[ p ] );
                  }
                }
              }
              else
              {
                unsigned char cc;
                p++;
                if ( buf[ p ] )
                {
                  add_char_to_string( &delete, buf[ p ] );
                }
              }
              if ( path.source[0] )
              {
                int blockh;
                unsigned char *param;
                int path_len, del_len, param_len;
                fg = buf[0];
                if ( ditrm && ( ( *(char*)(ditrm + 116) & 1 ) & 255 ) && buf[0] )
                {
                  if ( delete.source[0] )
                    unlink( (char*)delete.source );
                }
                else
                {
                  *ebp_16468 = path.length;
                  if ( mem_alloc( path.length + delete.length + 3 ) )
                  {
                    *(char*)(mem_alloc( path.length + delete.length + 3 )) = buf[0];
                    memcpy( path.source, path.length + 1, path.length );
                    memcpy( path.length + mem_alloc( path.length + delete.length + 3 ) + 2, delete.source, delete.length + 1 );
                    *ebp_16464 = mem_alloc( path.length + delete.length + 3 );
                    if ( fg == 1 )
                    {
                      block_itrm(  );
                      *ebp_16464 = buf[0];
                    }
                    mem_free( ebp_16464 );
                    if ( ebp_16464 == -1 )
                    {
                      if ( fg == 1 )
                        unblock_itrm(  );
                    }
                    else
                    {
                      if ( fg == 1 )
                        set_handlers( eax, &unblock_itrm_x, 0, &unblock_itrm_x, &eax );
                      else
                      {
                        set_handlers( eax, &close_handle, 0, &close_handle, &eax );
                        p = p;
                      }
                    }
                  }
                }
              }
              else
                dispatch_special( delete.source );
              done_string( &path );
              done_string( &delete );
              if ( assert_failed )
              {
              }
              else
              {
                assert_failed = 16384 - p < 1;
                if ( 16384 - p < 1 )
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/kbd.c";
                  errline = 665;
                  elinks_internal( "assertion ITRM_OUT_QUEUE_SIZE - p &gt; 0 failed!" );
                  *ebp_16464 = 16384 - p;
                }
              }
              bytes_read -= p;
              __memmove_chk( buf, p + buf[0], 16384 - p, 16384 );
              if ( bytes_read >= 1 )
              {
                do
                {
                  i = 0;
                }
                while ( bytes_read >= 1 );
              }
              else
              {
              }
            }
          }
        }
      }
    }
    }
    while ( bytes_read >= 1 );
  }
  free_itrm( itrm );
}
void set_kbd_event( struct itrm *itrm, struct interlink_event *ev, int key, term_event_modifier_T modifier )
{
  int ecx;
  if ( itrm->verase == key )
  {
    key = 257;
  }
  else
  {
    switch ( key )
    {
    case 127:
      key = 265;
      break;
    case 10:
    case 13:
      key = 256;
      break;
    case 9:
      key = 258;
      break;
    case 27:
      key = 259;
      break;
    default:
      if ( key <= 31 )
      {
        key += 64;
        modifier |= KBD_MOD_CTRL;
        ev->info.mouse.y = 0;
        ev->info.mouse.button = 0;
        ev = 1;
        if ( key + 64 < -255 )
        {
          key = 0 - key;
        }
        ev->info.mouse.y = modifier;
        return;
      }
      break;
    }
  }
  ev->info.mouse.y = 0;
  ev->info.mouse.button = 0;
  ev->info.mouse.y = modifier;
  ev = 1;
  return;
}
void kbd_timeout( struct itrm *itrm )
{
  int eax;
  int ecx;
  int edx;
  struct interlink_event ev;
  int el;
  itrm->timer = 0;
  if ( assert_failed == 0 )
  {
    assert_failed = itrm->in.queue.len == 0;
    if ( !(_Bool)( itrm->in.queue.len != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/kbd.c";
      errline = 1021;
      elinks_internal( "assertion itrm-&gt;in.queue.len failed: timeout on empty queue" );
      if ( assert_failed == 0 )
      {
        assert_failed = (int)itrm->bits_at_116/*.1_1of4*/ & 1;
        if ( ( (int)itrm->bits_at_116/*.1_1of4*/ & 1 ) == 0 )
        {
          if ( can_read( itrm->in.std ) )
          {
            in_kbd( &itrm[0] );
            return;
          }
          if ( itrm->in.queue.len > 1 )
          {
            if ( itrm->in.queue.data[0] == 27 )
            {
              el = 2;
              set_kbd_event( &itrm[0], &ev, itrm->in.queue.data[1], 4 );
              itrm_queue_event( &itrm[0], &ev.ev, 16 );
              itrm->in.queue.len -= el;
              if ( itrm->in.queue.len - el )
              {
                memmove( itrm->in.queue.data, itrm->in.queue.data + itrm->in.queue.data + el, itrm->in.queue.len - el );
              }
              do
              {
              }
              while ( process_queue( &itrm[0] ) );
              return;
            }
          }
          else
          {
          }
          el = 1;
          set_kbd_event( &itrm[0], &ev, itrm->in.queue.data[0], 0 );
          itrm_queue_event( &itrm[0], &ev.ev, 16 );
          itrm->in.queue.len -= el;
        }
      }
      else
      {
        assert_failed = 0;
        return;
      }
    }
    else
    {
      assert_failed = (int)itrm->bits_at_116/*.1_1of4*/ & 1;
      if ( ( (int)itrm->bits_at_116/*.1_1of4*/ & 1 ) == 0 )
        continue;
    }
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/kbd.c";
    errline = 1022;
    elinks_internal( "assertion !itrm-&gt;blocked failed!" );
    if ( assert_failed )
    {
      assert_failed = 0;
      return;
    }
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
int process_queue( struct itrm *itrm )
{
  int ecx;
  int edx;
  struct interlink_event ev;
  int el = 0;
  if ( itrm->in.queue.len )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = (int)itrm->bits_at_116/*.1_1of4*/ & 1;
      if ( (int)itrm->bits_at_116/*.1_1of4*/ & 1 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/kbd.c";
        errline = 1060;
        elinks_internal( "assertion !itrm-&gt;blocked failed!" );
        if ( assert_failed )
        {
          assert_failed = 0;
          el = 0;
          return el;
        }
      }
      ev.info.mouse.x = -1;
      ev.info.mouse.button = 0;
      ev.ev = EVENT_KBD;
      ev.info.mouse.y = 0;
      if ( itrm->in.queue.data[0] == 27 )
      {
        if ( itrm->in.queue.len > 1 )
        {
          if ( itrm->in.queue.data[1] == '[' )
          {
            el = el;
            if ( itrm->in.queue.len != 2 )
            {
              if ( itrm->in.queue.data[2] != '[' )
              {
                while ( *(char*)(itrm->in.queue.data[1] + el) < '/' && '?' <= *(char*)(itrm->in.queue.data[1] + el) )
                {
                  if ( itrm->in.queue.len <= 2 + 1 + 1 )
                    goto B53;
                  else
                  {
                  }
B53:                  if ( itrm->in.queue.len != 64 )
                    goto B31;
                  if ( edx - 64 >= 62 )
                  {
                    if ( itrm->in.queue.data[2] - 48 >= 9 )
                    {
                      *ebp_52 = ebp_52;
                      do
                      {
                      }
                      while ( *(char*)(ecx + 3) - 48 >= 9 );
                    }
                    if ( ebp_48 != esi )
                      el = 2 + 1 + 1;
                    else
                    {
                      el++;
                      switch ( edx )
                      {
                      case 25:
                        break;
                      case 3:
                        break;
                      case 2:
                        break;
                      case 57:
                        if ( eax != 220 )
                        {
                          el = el;
                          if ( ccdep2 < ccdep1 )
                          {
                            switch ( eax )
                            {
                            case 247:
                              memset( &ev.ev, 0, 16 );
                              ev.ev = EVENT_KBD;
                              ev.info.mouse.x = 0 - 261;
                              ev.info.mouse.y = 0;
                              break;
                            case 222:
                              break;
                            case 249:
                              ev.info.mouse.button = 0;
                              ev.ev = EVENT_KBD;
                              ev.info.mouse.x = 0 - 261;
                              ev.info.mouse.y = 0;
                              break;
                            }
                          }
                          else
                          {
                            el = el;
                            if ( eax == 214 )
                            {
                            }
                            else
                            {
                              el = el;
                              if ( eax == 216 )
                                el = el;
                            }
                          }
                        }
                        else
                        {
                        }
                        break;
                      case 61:
                        switch ( eax )
                        {
                        case 27:
                          break;
                        case 28:
                          break;
                        case 30:
                          break;
                        case 31:
                          break;
                        case 0:
                        case 6:
                          break;
                        case 33:
                          break;
                        case 32:
                          break;
                        case 10:
                          break;
                        case 16:
                          break;
                        case 24:
                          break;
                        case 25:
                          break;
                        default:
                          break;
                        case 2:
                          break;
                        case 5:
                          break;
                        case 11:
                          break;
                        case 1:
                          break;
                        case 12:
                          break;
                        case 13:
                          break;
                        case 14:
                          break;
                        case 17:
                          break;
                        case 18:
                          break;
                        case 19:
                          break;
                        case 20:
                          break;
                        case 22:
                          break;
                        case 23:
                          break;
                        case 4:
                          break;
                        case 3:
                        case 7:
                          break;
                        }
                        break;
                      case 17:
                        resize_terminal(  );
                        break;
                      case 12:
                        el = eax;
                      default:
                        break;
                      case 1:
                        break;
                      case 6:
                        break;
                      case 7:
                        break;
                      case 13:
                        break;
                      case 11:
                        break;
                      case 14:
                        break;
                      case 15:
                        break;
                      case 16:
                        break;
                      case 18:
                        break;
                      case 19:
                        break;
                      case 20:
                        break;
                      case 21:
                        break;
                      case 22:
                        break;
                      case 23:
                        break;
                      case 8:
                        break;
                      case 5:
                      case 36:
                        break;
                      case 0:
                        break;
                      }
                    }
                    if ( el )
                    {
                    }
                  }
                }
                if ( 2 + 1 < itrm->in.queue.len )
                {
                  if ( edx < 31 && '/' <= edx )
                  {
                    do
                    {
                      if ( ecx <= esi + 1 )
                        continue;
                      else
                    }
                    while ( 31 <= *(char*)(2 + 1 + itrm->in.queue.data + 1) || *(char*)(2 + 1 + itrm->in.queue.data) < '/' );
                  }
                }
              }
              else
              if ( itrm->in.queue.len != 3 && itrm->in.queue.data[3] < '@' && 'L' <= itrm->in.queue.data[3] )
              {
                el = 4;
                set_kbd_interlink_event( &ev, -223 - itrm->in.queue.data[3], 0 );
              }
            }
          }
          else
          {
            if ( itrm->in.queue.data[1] == 'O' )
            {
              if ( assert_failed == 0 )
              {
                assert_failed = 0;
                assert_failed = itrm->in.queue.data[0] != 27;
                if ( itrm->in.queue.data[0] != 27 )
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/kbd.c";
                  errline = 933;
                  elinks_internal( "assertion itrm-&gt;in.queue.data[0] == ASCII_ESC failed!" );
                  if ( assert_failed == 0 )
                    goto B58;
                }
B58:                assert_failed = itrm->in.queue.data[1] != 'O';
                if ( itrm->in.queue.data[1] != 'O' )
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/kbd.c";
                  errline = 934;
                  elinks_internal( "assertion itrm-&gt;in.queue.data[1] == 0x4F failed!" );
                  if ( assert_failed )
                    goto B57;
                }
                if ( itrm->in.queue.len > 2 )
                {
                  if ( itrm->in.queue.data[2] - 33 >= 93 )
                  {
                    if ( itrm->in.queue.data[2] != 'M' )
                    {
                      if ( ccdep1 < ccdep2 )
                      {
                        if ( itrm->in.queue.data[2] != 'S' )
                        {
                          if ( ccdep1 < ccdep2 )
                          {
                            el = el;
                            if ( itrm->in.queue.data[2] != 'X' )
                            {
                              el = el;
                              if ( !0 && itrm->in.queue.data[2] - 106 >= 15 )
                              {
                              }
                              else
                                el = 3;
                            }
                            else
                            {
                            }
                          }
                          else
                          {
                            el = el;
                            if ( itrm->in.queue.data[2] != 'Q' )
                            {
                              el = el;
                              if ( ccdep2 <= ccdep1 )
                              {
                                if ( itrm->in.queue.data[2] == 'P' )
                                {
                                }
                              }
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
                      else
                      if ( itrm->in.queue.data[2] != 'D' )
                      {
                        if ( ccdep1 < ccdep2 )
                        {
                          if ( itrm->in.queue.data[2] != 'H' )
                          {
                            if ( itrm->in.queue.data[2] != 'I' )
                            {
                              if ( itrm->in.queue.data[2] == 'F' )
                              {
                              }
                            }
                            else
                            {
                            }
                          }
                          else
                            el = el;
                        }
                        else
                        {
                          el = el;
                          if ( itrm->in.queue.data[2] != 'B' )
                          {
                            el = el;
                            if ( ccdep2 <= ccdep1 )
                            {
                              el = el;
                              if ( itrm->in.queue.data[2] == 'A' )
                                el = el;
                            }
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
                    else
                    {
                    }
                    ev.info.mouse.y = 0;
                  }
                }
              }
B57:              ev.info.mouse.x = itrm->in.queue.data[2] - 64;
              assert_failed = 0;
            }
            else
            {
              el = el;
              if ( itrm->in.queue.data[1] == 27 )
              {
                if ( itrm->in.queue.len != 2 )
                {
                  if ( itrm->in.queue.data[2] == 'O' || itrm->in.queue.data[2] == '[' )
                  {
                    el = 1;
                    set_kbd_event( &itrm[0], &ev, 27, 0 );
                  }
                  else
                  {
                    el = 2;
                    set_kbd_event( &itrm[0], &ev, 27, 4 );
                  }
                }
              }
              else
              {
                el = 2;
                set_kbd_event( &itrm[0], &ev, itrm->in.queue.data[1], 4 );
              }
            }
          }
          el = 2;
          set_kbd_event( &itrm[0], &ev, itrm->in.queue.data[1], 4 );
        }
B31:        el = -1;
      }
      else
      {
        if ( ( itrm->in.queue.data[0] & 255 ) == 0 )
        {
          static struct term_event_keyboard os2xtd[256] = { { -1, 0 }
, { -1, 0 }
, { 32, 2 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -257, 4 }
, { -1, 0 }
, { 81, 4 }
, { 87, 4 }
, { 69, 4 }
, { 82, 4 }
, { 84, 4 }
, { 89, 4 }
, { 85, 4 }
, { 73, 4 }
, { 79, 4 }
, { 80, 4 }
, { 91, 4 }
, { 93, 4 }
, { -256, 4 }
, { -1, 0 }
, { 65, 4 }
, { 83, 4 }
, { 68, 4 }
, { 70, 4 }
, { 71, 4 }
, { 72, 4 }
, { 74, 4 }
, { 75, 4 }
, { 76, 4 }
, { 59, 4 }
, { 39, 4 }
, { 96, 4 }
, { -1, 0 }
, { 92, 4 }
, { 90, 4 }
, { 88, 4 }
, { 67, 4 }
, { 86, 4 }
, { 66, 4 }
, { 78, 4 }
, { 77, 4 }
, { 44, 4 }
, { 46, 4 }
, { 47, 4 }
, { -1, 0 }
, { 42, 4 }
, { -1, 0 }
, { 32, 4 }
, { -1, 0 }
, { -288, 0 }
, { -289, 0 }
, { -290, 0 }
, { -291, 0 }
, { -292, 0 }
, { -293, 0 }
, { -294, 0 }
, { -295, 0 }
, { -296, 0 }
, { -297, 0 }
, { -1, 0 }
, { -1, 0 }
, { -266, 0 }
, { -262, 0 }
, { -268, 0 }
, { 45, 4 }
, { -260, 0 }
, { 53, 0 }
, { -261, 0 }
, { 43, 4 }
, { -267, 0 }
, { -263, 0 }
, { -269, 0 }
, { -264, 0 }
, { -265, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -288, 2 }
, { -289, 2 }
, { -290, 2 }
, { -291, 2 }
, { -292, 2 }
, { -293, 2 }
, { -294, 2 }
, { -295, 2 }
, { -296, 2 }
, { -297, 2 }
, { -288, 4 }
, { -289, 4 }
, { -290, 4 }
, { -291, 4 }
, { -292, 4 }
, { -293, 4 }
, { -294, 4 }
, { -295, 4 }
, { -296, 4 }
, { -297, 4 }
, { -1, 0 }
, { -260, 2 }
, { -261, 2 }
, { -267, 2 }
, { -269, 2 }
, { -266, 2 }
, { 49, 4 }
, { 50, 4 }
, { 51, 4 }
, { 52, 4 }
, { 53, 4 }
, { 54, 4 }
, { 55, 4 }
, { 56, 4 }
, { 57, 4 }
, { 48, 4 }
, { 45, 4 }
, { 61, 4 }
, { -268, 2 }
, { -298, 0 }
, { -299, 0 }
, { -1, 0 }
, { -1, 0 }
, { -298, 2 }
, { -299, 2 }
, { -298, 4 }
, { -299, 4 }
, { -262, 2 }
, { 45, 2 }
, { 53, 2 }
, { 43, 2 }
, { -263, 2 }
, { -264, 2 }
, { -265, 2 }
, { -258, 2 }
, { -1, 0 }
, { -1, 0 }
, { -266, 4 }
, { -262, 4 }
, { -268, 4 }
, { -1, 0 }
, { -260, 4 }
, { -1, 0 }
, { -261, 4 }
, { -1, 0 }
, { -267, 4 }
, { -263, 4 }
, { -269, 4 }
, { -264, 4 }
, { -265, 4 }
, { -1, 0 }
, { -258, 4 }
, { -256, 4 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
, { -1, 0 }
 };
          el = -1;
          if ( itrm->in.queue.len > 1 )
          {
            el = 2;
            set_kbd_interlink_event( &ev, os2xtd[ *(char*)(itrm->in.queue.data + 1) ].key, os2xtd[ *(char*)(itrm->in.queue.data + 1) ].modifier );
          }
          else
          {
            if ( ev.info.mouse.x != -1 )
              itrm_queue_event( &itrm[0], &ev.ev, 16 );
            if ( el == -1 )
            {
              el = 0;
              install_timer( &itrm->timer, 200, &kbd_timeout, &itrm[0].in.std );
              return el;
            }
          }
        }
        else
        {
          el = 1;
          set_kbd_event( &itrm[0], &ev, itrm->in.queue.data[0], 0 );
        }
      }
      if ( ev.ev != 2 )
      {
      }
      itrm_queue_event( &itrm[0], &ev.ev, 16 );
    }
    else
    {
      assert_failed = 0;
      el = 0;
      return el;
    }
  }
  if ( assert_failed == 0 )
  {
    assert_failed = itrm->in.queue.len < el;
    if ( itrm->in.queue.len < el )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/kbd.c";
      errline = 1169;
      elinks_internal( "assertion itrm-&gt;in.queue.len &gt;= el failed: event queue underflow" );
      if ( assert_failed )
        el = el;
        assert_failed = 0;
        itrm->in.queue.len = 0;
        handle_itrm_stdin( &itrm[0] );
        return el;
    }
    itrm->in.queue.len -= el;
    if ( itrm->in.queue.len - el )
    {
      memmove( itrm->in.queue.data, itrm->in.queue.data + el, itrm->in.queue.len - el );
      if ( itrm->in.queue.len <= 63 )
        continue;
      return el;
    }
  }
  else
  {
    assert_failed = 0;
    itrm->in.queue.len = 0;
  }
}
void in_kbd( struct itrm *itrm )
{
  int eax;
  int r;
  if ( can_read( itrm[0].in.std ) )
  {
    kill_timer( &itrm->timer );
    if ( itrm->in.queue.len <= 63 )
    {
      if ( r < 1 )
      {
        itrm = &itrm[0];
      }
      itrm->in.queue.len += read( itrm->in.std, itrm->in.queue.data + itrm->in.queue.len, 64 - itrm->in.queue.len );
      if ( itrm->in.queue.len + read( itrm->in.std, itrm->in.queue.data + itrm->in.queue.len, 64 - itrm->in.queue.len ) > 64 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/kbd.c";
        errline = 1210;
        elinks_error( gettext( "Too many bytes read from the itrm!" ) );
        itrm->in.queue.len = 64;
      }
      do
      {
      }
      while ( process_queue( &itrm[0] ) && process_queue( &itrm[0] ) );
    }
    else
    {
      unhandle_itrm_stdin( &itrm[0] );
      do
      {
      }
      while ( process_queue( &itrm[0] ) );
      return;
    }
  }
  return;
}
void handle_itrm_stdin( struct itrm *itrm )
{
  int eax;
  if ( assert_failed == 0 )
  {
    assert_failed = itrm->in.std >> 31;
    if ( itrm->in.std >> 31 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/kbd.c";
      errline = 1224;
      elinks_internal( "assertion itrm-&gt;in.std &gt;= 0 failed!" );
      if ( assert_failed )
        goto B2;
    }
    set_handlers( itrm, &in_kbd, 0, &free_itrm, &itrm[0].in.std );
    return;
  }
B2:  assert_failed = 0;
  return;
}
void unhandle_itrm_stdin( struct itrm *itrm )
{
  int eax;
  if ( assert_failed == 0 )
  {
    assert_failed = itrm->in.std >> 31;
    if ( itrm->in.std >> 31 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/kbd.c";
      errline = 1237;
      elinks_internal( "assertion itrm-&gt;in.std &gt;= 0 failed!" );
      if ( assert_failed )
        goto B2;
    }
    set_handlers( itrm, 0, 0, &free_itrm, &itrm[0].in.std );
    return;
  }
B2:  assert_failed = 0;
  return;
}
#if 0
#endif
