#include "terminal.c.h"
struct list_head_elinks terminals = { &terminals, &terminals };
static int terminal_pipe[2];
static struct module *terminal_submodules[2] = { &terminal_screen_module, 0 };
struct module terminal_module = { "Terminal", 0, 0, terminal_submodules, 0, 0, 0 };
void redraw_terminal( struct terminal *term )
{
  ev.info.mouse.x = term->width;
  struct term_event ev;
  ev.info.mouse.button = 0;
  ev.ev = EVENT_REDRAW;
  ev.info.mouse.y = term->height;
  term_send_event( term, &ev );
  return;
}
void redraw_terminal_cls( struct terminal *term )
{
  ev.info.mouse.x = term->width;
  struct term_event ev;
  ev.info.mouse.button = 0;
  ev.ev = EVENT_RESIZE;
  ev.info.mouse.y = term->height;
  term_send_event( term, &ev );
  return;
}
void cls_redraw_all_terminals( void )
{
  struct terminal *term = &terminals.next[0];
  if ( terminals.next != terminals.next )
  {
    do
    {
      redraw_terminal_cls( &term[0] );
    }
    while ( term->next == terminals.next );
  }
  return;
}
struct terminal *init_term( int fdin, int fdout )
{
  int eax;
  int ecx;
  int edx;
  unsigned char name[41];
  struct terminal *term;
  name[0] = 1836213620;
  name[4] = 1818324585;
  name[8] = 46;
  name[12] = 0;
  if ( ( (unsigned char)( name[13] ) & 2 ) & 255 )
    name[13] = 0;
  do
  {
    name[13] = 0;
  }
  while ( 0 + 4 + 4 < ( ( 28 - 2 ) & -4 ) );
  name[13] += 0 + 4;
  if ( ( 28 & 2 ) & 255 )
    name[13] = 0;
  if ( 28 & 1 )
    name[13] = 0;
  if ( mem_calloc( 1, 344 ) )
  {
    term->screen = init_screen(  );
    if ( term->screen == 0 )
    {
      term = 0;
      mem_free( (void*)term[0].next );
    }
    else
    {
      term->fdout = fdout;
      term->windows.prev = term->windows.next;
      term->windows.next = term->windows.next;
      term->fdin = fdin;
      term->blocked = -1;
      term->bits_at_56/*.1_1of4*/ = ( *(char*)(term[0].next + 56) & -2 ) | ( fdout == get_output_handle(  ) );
      get_terminal_name( &name[9] );
      term->spec = get_opt_rec( config_options, name );
      term->prev = &terminals.next[0];
      &term = &terminals->next[0];
      terminals.next = (void*)term[0].next;
      term->prev = &term[0];
      *(int*)(get_opt_rec( config_options, name ) + 8)++;
      set_handlers( fdin, &in_term, 0, &destroy_terminal, terminals.next + 4 );
    }
  }
  else
  {
    program.terminate = 0;
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return terminals.next + 4;
}
int get_terminal_codepage( struct terminal *term )
{
  return *(int*)(get_opt_( term->spec, (unsigned char*)term->spec ));
}
void redraw_all_terminals( void )
{
  struct terminal *term = &terminals.next[0];
  if ( terminals.next != terminals.next )
  {
    do
    {
      redraw_screen( &term[0] );
    }
    while ( term->next == terminals.next );
  }
  return;
}
void destroy_terminal( struct terminal *term )
{
  bookmark_auto_save_tabs( term );
  detach_downloads_from_terminal( term );
  term->current_tab = 0;
  if ( term->windows.next != term->windows.next )
  {
    do
    {
      delete_window( &term->windows.next[0] );
    }
    while ( term->windows.next == term->windows.next );
  }
{
  void *p = (void*)term->title;
  if ( term->title )
    mem_free( &((int*)p)[0] );
  if ( term->screen )
    done_screen( term->screen );
  set_handlers( term->fdin, 0, 0, 0, 0 );
{
  void *p = &term->interlink;
  if ( term->interlink )
    mem_free( &((int*)p)[0] );
  if ( term->blocked != -1 )
  {
    close( term->blocked );
    set_handlers( term->blocked, 0, 0, 0, 0 );
  }
  term->prev = term->prev;
  &term->prev = &term;
  close( term->fdin );
  if ( term->fdout != 1 )
  {
    if ( term->fdout != term->fdin )
      close( term->fdout );
  }
  else
  {
    unhandle_terminal_signals( &term[0] );
    free_all_itrms(  );
    if ( terminals.next != terminals.next && fork(  ) )
    {
      exit( 0 );
    }
  }
  term->spec->object.object--;
  mem_free( (void*)term[0].next );
  program.terminate = 0;
  return;
}
}
}
void destroy_all_terminals( void )
{
  if ( terminals.next != terminals.next )
  {
    do
    {
      destroy_terminal( &terminals.next[0] );
    }
    while ( terminals.next == terminals.next );
  }
  return;
}
void exec_thread( unsigned char *path, int p )
{
  if ( path[0] == 2 )
    setpgid( 0, 0 );
  exe( &path[1] );
  if ( path[ strlen( &path[1] ) + 2 ] )
  {
    path += strlen( &path[1] ) + 2;
  }
  return;
}
void close_handle( void *h )
{
  close( h );
  set_handlers( h, 0, 0, 0, 0 );
  return;
}
void unblock_terminal( struct terminal *term )
{
  close_handle( &term->blocked );
  term->blocked = -1;
  set_handlers( term->fdin, &in_term, 0, &destroy_terminal, (void*)term );
  unblock_itrm(  );
  redraw_terminal_cls( term );
  if ( textarea_editor )
  {
    textarea_edit( 1, 0, 0, 0, 0 );
  }
  return;
}
void assert_terminal_ptr_not_dangling( struct terminal *suspect )
{
  struct terminal *term;
  if ( suspect )
  {
    term = &terminals.next[0];
    if ( terminals.next != terminals.next )
    {
      do
      {
        if ( term[0].next == suspect[0].next )
          break;
        term = &term;
      }
      while ( term->next != terminals.next );
    }
    if ( assert_failed == 0 )
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/terminal.c";
      errline = 242;
      suspect = "assertion 0 failed: Dangling pointer to struct terminal";
    }
  }
  return;
}
void exec_on_terminal( struct terminal *term, unsigned char *path, unsigned char *delete, enum term_exec  fg )
{
  int ecx;
  int edx;
  if ( path )
  {
    if ( path[0] == 0 )
    {
      return;
    }
  }
  else
    path[0] = "";
  if ( ( *(char*)(term + 56) & 1 ) & 255 )
  {
    if ( path[0] == 0 )
    {
      term = &delete[0];
    }
    if ( fg && is_blocked(  ) )
    {
      term = &delete[0];
    }
    *ebp_44 = strlen( &path[0] );
    if ( mem_alloc( strlen( &delete[0] ) + strlen( &path[0] ) + 3 ) )
    {
      edx = fg;
      memcpy( edx + 1, &path[0], ecx + 1 );
      memcpy( ebp_44 + ebp_40 + 2, &delete[0], ebp_36 + 1 );
      *ebp_40 = ebp_40;
      if ( fg == TERM_EXEC_FG )
      {
        block_itrm(  );
        *ebp_40 = ebp_40;
      }
      mem_free( ebp_40 );
      if ( ebx == -1 )
      {
        if ( fg != TERM_EXEC_FG )
        {
          return;
        }
      }
      else
      {
        if ( fg == TERM_EXEC_FG )
        {
          term->blocked = ebx;
          set_handlers( term + 40, &unblock_terminal, 0, &unblock_terminal, (void*)term );
          set_handlers( term->fdin, 0, 0, &destroy_terminal, (void*)term );
          return;
        }
        else
        {
          set_handlers( ebx, &close_handle, 0, &close_handle, &ebx );
          return;
        }
      }
    }
    else
    {
      return;
    }
  }
  else
  {
    *ebp_44 = strlen( &path[0] );
    if ( mem_alloc( strlen( &delete[0] ) + strlen( &path[0] ) + 4 ) )
    {
      *(char*)(mem_alloc( strlen( &delete[0] ) + strlen( &path[0] ) + 4 )) = 0;
      *(char*)(edx + 1) = fg;
      memcpy( edx + 2, &path[0], ecx + 1 );
      memcpy( ebp_44 + ebp_40 + 3, &delete[0], ebp_36 + 1 );
      hard_write( *(int*)(ebp_28 + 36), ebp_40, ebp_32 );
      term = ebp_40;
    }
    return;
  }
}
void exec_shell( struct terminal *term )
{
  unsigned char *sh;
  if ( can_open_os_shell( term->environment ) && sh[0] && sh[0] )
  {
    exec_on_terminal( &term[0], &sh[0], "", TERM_EXEC_FG );
    return;
  }
  return;
}
void do_terminal_function( struct terminal *term, unsigned char code, unsigned char *data )
{
  if ( mem_alloc( strlen( (char*)data ) + 2 ) )
  {
    *(char*)(mem_alloc( strlen( (char*)data ) + 2 )) = code;
    memcpy( mem_alloc( strlen( (char*)data ) + 2 ) + 1, &data[0], strlen( (char*)data ) + 1 );
    exec_on_terminal( term, 0, (unsigned char*)mem_alloc( strlen( (char*)data ) + 2 ), TERM_EXEC_BG );
    term = (struct terminal*)mem_alloc( strlen( (char*)data ) + 2 );
  }
  return;
}
int set_terminal_title( struct terminal *term, unsigned char *title )
{
  int from_cp;
  int to_cp;
  unsigned char *converted;
  if ( term->title == 0 || strcmp( &title[0], (char*)term->title ) )
  {
    from_cp = get_terminal_codepage( &term[0] );
    if ( *(int*)(get_opt_( term->spec, (unsigned char*)term->spec )) )
    {
      to_cp = get_cp_index( "ISO-8859-1" );
    }
    else
    {
      if ( *(int*)(get_opt_( term->spec, (unsigned char*)term->spec )) )
      {
        to_cp = get_cp_index( "UTF-8" );
      }
      else
      {
        struct conv_table *convert_table;
        to_cp = from_cp;
        converted[0] = 0;
        if ( term->title )
          mem_free( (void*)term->title );
        term->title = stracpy( &title[0] );
        do_terminal_function( &term[0], 3, get_cp_mime_name( to_cp ) );
        if ( converted[0] )
        {
          do_terminal_function( &term[0], 1, &converted[0] );
          mem_free( &converted[0] );
        }
        do_terminal_function( &term[0], 1, &title[0] );
      }
    }
    if ( to_cp != from_cp )
    {
      if ( get_translation_table( from_cp, to_cp ) && convert_string_elinks( get_translation_table( from_cp, to_cp ), &title[0], strlen( &title[0] ), to_cp, CSM_NONE, 0, 0, 0 ) )
      {
      }
      else
      {
      }
    }
    else
    {
      struct conv_table *convert_table;
      to_cp = from_cp;
      converted[0] = 0;
    }
  }
  return 0;
}
int check_terminal_pipes( void )
{
  return c_pipe( terminal_pipe );
}
void close_terminal_pipes( void )
{
  close( terminal_pipe[0] );
  close( terminal_pipe[1] );
  return;
}
struct terminal *attach_terminal( int in, int out, int ctl, void *info, int len )
{
  int eax;
  struct terminal *term;
  if ( set_nonblocking_fd( terminal_pipe[0] ) >= 0 && set_nonblocking_fd( terminal_pipe[1] ) >= 0 )
  {
    handle_trm( in, out, out, terminal_pipe[1], ctl, info, len, 0 );
    if ( term[0].next == 0 )
    {
      close_terminal_pipes(  );
      return &term[0];
    }
  }
  else
  {
    &term[0] = 0;
  }
}
#if 0
#endif
