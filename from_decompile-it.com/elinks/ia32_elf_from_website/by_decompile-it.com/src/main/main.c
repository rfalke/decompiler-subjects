#include "main.c.h"
struct program program;
static int ac;
static unsigned char **av;
static int init_b;
void check_stdio( struct list_head_elinks *url_list )
{
  if ( assert_failed == 0 )
  {
    assert_failed = remote_session_flags != 0;
    if ( remote_session_flags )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/main.c";
      errline = 67;
      elinks_internal( "assertion !remote_session_flags failed!" );
    }
  }
  if ( isatty( 0 ) == 0 )
  {
    if ( url_list[0] && url_list->next == url_list[0].next )
    {
      *(int*)(get_opt_( config_options, (unsigned char*)config_options )) = 1;
      add_to_string_list( &url_list[0], "file:///dev/stdin", 17 );
    }
    *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) = 1;
  }
  if ( isatty( 1 ) == 0 && *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 && *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
  {
    *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) = 1;
  }
  return;
}
void init( void )
{
  int eax;
  struct list_head_elinks url_list;
  int fd;
  enum retval  ret;
  url_list.prev = url_list.next = url_list.next;
  init_osdep(  );
  if ( get_cwd(  ) == 0 || file_is_dir( get_cwd(  ) ) == 0 )
  {
    if ( getenv( "HOME" ) && file_is_dir( (unsigned char*)getenv( "HOME" ) ) )
    {
      chdir( getenv( "HOME" ) );
      if ( get_cwd(  ) == 0 )
      {
        bindtextdomain( "elinks", "/usr/share/locale" );
        textdomain( "elinks" );
        set_language( 0 );
        init_event(  );
        init_charsets_lookup(  );
        init_colors_lookup(  );
        init_modules( main_modules );
        init_options(  );
        init_static_version(  );
        register_modules_options( main_modules );
        register_modules_options( builtin_modules );
        set_sigcld(  );
        get_system_name(  );
        if ( check_terminal_pipes(  ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/main.c";
          errline = 136;
          elinks_error( gettext( "Cannot create a pipe for internal communication." ) );
          program.retval = RET_FATAL;
          program.terminate = 1;
          return;
        }
        if ( ret )
        {
          if ( ret == RET_COMMAND )
            goto B29;
          program.retval = ret;
B29:          program.terminate = 1;
          free_string_list( &url_list );
          return;
        }
        else
        {
          if ( remote_session_flags == 0 )
            check_stdio( &url_list );
          else
            program.terminate = 1;
          if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
          {
            init_home(  );
          }
          if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) || *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) || *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) || init_interlink(  ) == -1 )
          {
            load_config(  );
            update_options_visibility(  );
            parse_options( ac.source[ -1 ], &av[1], 0 );
            if ( remote_session_flags == 0 )
              check_stdio( 0 );
            init_b = 1;
            fd = -1;
            init_modules( builtin_modules );
          }
          if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) || *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) )
          {
            if ( url_list.next != url_list.next )
              dump_next( &url_list );
            else
            {
              unsigned char *arg;
              arg[0] = *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 ? arg[0] : "source";
              usrerror( gettext( "URL expected after -%s" ) );
              program.retval = RET_SYNTAX;
              program.terminate = 1;
              close_terminal_pipes(  );
              free_string_list( &url_list );
              return;
            }
          }
          else
          if ( ( (unsigned char)( remote_session_flags ) & 16 ) & 255 )
          {
            if ( fd == -1 )
            {
              usrerror( gettext( "No running ELinks found." ) );
              program.retval = RET_PING;
            }
          }
          else
          if ( fd == -1 && remote_session_flags )
          {
            usrerror( gettext( "No remote session to connect to." ) );
            program.retval = RET_REMOTE;
          }
          else
          {
            struct string info;
            struct terminal *term;
            if ( encode_session_info( &info, &url_list ) == 0 )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/main.c";
              errline = 224;
            }
            else
            {
              if ( fd != -1 )
              {
                close_terminal_pipes(  );
                handle_trm( get_input_handle(  ), get_output_handle(  ), fd, fd, get_ctl_handle(  ), (void*)info.source, info.length, remote_session_flags );
                term = 0;
              }
              else
              {
                if ( term[0].next == 0 )
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/main.c";
                  errline = 241;
                }
              }
              if ( program.terminate == 0 )
                handle_basic_signals( &term[0] );
              done_string( &info );
            }
            elinks_error( gettext(  ) );
            program.retval = RET_FATAL;
            program.terminate = 1;
          }
          if ( program.terminate )
            close_terminal_pipes(  );
          free_string_list( &url_list );
          return;
        }
      }
    }
    else
    if ( get_cwd(  ) )
    {
    }
  }
  mem_free( (void*)get_cwd(  ) );
}
void shrink_memory( int whole )
{
  shrink_dns_cache( whole );
  shrink_format_cache( whole );
  whole = whole;
}
int main( int argc, char **argv )
{
  program.terminate = 0;
  program.retval = RET_OK;
  av = (unsigned char**)argv;
  program.path = (unsigned char*)argv[0];
  ac.source = &argc;
  select_loop( &init );
  done_interlink(  );
  check_bottom_halves(  );
  abort_all_downloads(  );
  check_bottom_halves(  );
  destroy_all_terminals(  );
  check_bottom_halves(  );
  free_all_itrms(  );
  abort_all_connections(  );
  check_bottom_halves(  );
  abort_all_connections(  );
  if ( init_b )
  {
    trigger_event_name( "quit" );
    free_history_lists(  );
    done_modules( builtin_modules );
    done_saved_session_info(  );
  }
  shrink_memory( 1 );
  free_charsets_lookup(  );
  free_colors_lookup(  );
  done_modules( main_modules );
  free_conv_table(  );
  check_bottom_halves(  );
  done_home(  );
  done_state_message(  );
  done_bfu_colors(  );
  unregister_modules_options( builtin_modules );
  unregister_modules_options( main_modules );
  done_options(  );
  done_event(  );
  terminate_osdep(  );
  return program.retval;
}
#if 0
#endif
