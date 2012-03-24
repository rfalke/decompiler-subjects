#include "task.c.h"
void free_task( struct session *ses )
{
  if ( assert_failed == 0 )
  {
    assert_failed = ses->task.type == 0;
    if ( !(_Bool)( ses->task.type != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/task.c";
      errline = 44;
      elinks_internal( "assertion ses-&gt;task.type failed: Session has no task" );
      if ( assert_failed )
      {
      }
    }
    if ( ses->loading_uri )
    {
      done_uri( ses->loading_uri );
      ses->loading_uri = 0;
    }
    ses->task.type = TASK_NONE;
    return;
  }
  assert_failed = 0;
  return;
}
void abort_preloading( struct session *ses, int interrupt )
{
  int eax;
  if ( ses->task.type )
  {
    cancel_download( &ses->loading, interrupt );
  }
  return;
}
void ses_load( struct session *ses, struct uri *uri, unsigned char *target_frame, struct location *target_location, enum cache_mode  cache_mode, enum task_type  task_type )
{
  ses->loading.callback = &loading_callback;
  ses->loading.data = (void*)ses;
  ses->loading_uri = uri;
  ses->task.type = task_type;
  ses->task.target.frame = target_frame;
  ses->task.target.location = target_location;
  load_uri( uri, ses->referrer, &ses->loading, PRI_MAIN, cache_mode, (long long)-1 );
  return;
}
void post_yes( void *task_ )
{
  abort_preloading( &((int*)task_)[0], 0 );
  ses_load( *(int*)(task_), &((int*)task_)[1], &((int*)task_)[4], &((int*)task_)[5], ((int*)task_)[2], ((int*)task_)[3] );
  return;
}
void post_no( void *task_ )
{
  reload( &((int*)task_)[0], CACHE_MODE_NORMAL );
  task_ = &((int*)task_)[1];
}
void ses_goto( struct session *ses, struct uri *uri, unsigned char *target_frame, struct location *target_location, enum cache_mode  cache_mode, enum task_type  task_type, int redir )
{
  int eax;
  int ecx;
  int edx;
  struct task *task;
  int referrer_incomplete;
  int malicious_uri;
  int confirm_submit;
  unsigned char *m1, *message;
  if ( ( uri->bits_at_52/*.3_3of4*/ & 2 ) & 255 )
  {
    confirm_submit = 1;
    if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
    {
      if ( ses->doc_view && ses->doc_view->document && ses->doc_view->document->refresh )
        kill_document_refresh( &eax[0] );
      if ( assert_failed == 0 )
      {
        assert_failed = *(int*)(ses + 80) != 0;
        if ( ses->loading_uri )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/task.c";
          errline = 182;
          elinks_internal( "assertion !ses-&gt;loading_uri failed: Buggy URI reference counting" );
        }
      }
      if ( redir == 0 )
        ses->redirect_cnt = 0;
      if ( uri->user && uri->bits_at_40/*.3_4of4*/ && *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
      {
        if ( assert_failed == 0 )
        {
          if ( uri->user && uri->bits_at_40/*.3_4of4*/ )
            assert_failed = 0;
          else
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/task.c";
            errline = 126;
            elinks_internal( "assertion uri-&gt;user && uri-&gt;userlen failed!" );
          }
        }
        if ( memacpy( uri->user, uri->bits_at_40/*.3_4of4*/ ) )
        {
          decode_uri_for_display( memacpy( uri->user, uri->bits_at_40/*.3_4of4*/ ) );
          while ( edx & 255 )
          {
            *(int*)(ebp_72) = ebp_72;
            do
            {
            }
            while ( ( ( ( *(char*)(edi + ( edx * 2 )) & 8 ) & 255 ) || edx == '.' ) && task->ses->next );
            if ( ( 0 + 1 ) && *(char*)(( esi + eax ) - 1) == '.' )
            {
              do
              {
                if ( 0 + 1 <= 0 + 1 + 1 )
                {
                }
                else
              }
              while ( *(char*)(ecx - 2) != '.' );
              esi = esi;
            }
            if ( eax == -1 )
            {
            }
            else
            {
              malicious_uri = 1;
              referrer_incomplete = 0;
              mem_free( ebp_68 );
              if ( mem_alloc( 24 ) )
              {
                *(int*)(mem_alloc( 24 )) = ses->next;
                task->uri = uri;
                uri->object.object++;
                task->cache_mode = cache_mode;
                task->session_task.type = task_type;
                task->session_task.target.frame = target_frame;
                task->session_task.target.location = target_location;
                if ( malicious_uri )
                {
                  unsigned char *host = memacpy( uri->host, uri->bits_at_44/*.3_4of4*/ );
                  unsigned char *user = memacpy( uri->user, uri->bits_at_40/*.3_4of4*/ );
                  unsigned char *uristring;
                  message[0] = msg_text( ses->tab->term, "The URL you are about to follow might be maliciously crafted in order to confuse you. By following the URL you will be connecting to host \"%s\" as user \"%s\".\n\nDo you want to go to URL %s?" );
                  if ( host )
                    mem_free( (void*)host );
                  if ( user )
                    mem_free( (void*)user );
                  if ( uristring[0] )
                    mem_free( &uristring[0] );
                    msg_box( ses->tab->term, getml( (void*)task[0].ses ), MSGBOX_FREE_TEXT, "Warning", ALIGN_CENTER, &message[0], (void*)task[0].ses, 2 );
                    break;
                  else
                  {
                    msg_box( ses->tab->term, getml( (void*)task[0].ses ), MSGBOX_FREE_TEXT, "Warning", ALIGN_CENTER, &message[0], (void*)task[0].ses, 2 );
                    break;
                  }
                }
                else
                {
                  m1[0] = "Do you want to follow the redirect and post form data to URL %s?";
                  if ( redir == 0 && referrer_incomplete == 0 )
                    m1[0] = task_type != TASK_FORWARD ? "Do you want to post form data to URL %s?" : "Do you want to repost form data to URL %s?";
                {
                  unsigned char *uristring;
                  message[0] = msg_text( ses->tab->term, &m1[0] );
                }
                }
              }
              else
                break;
            }
          }
          mem_free( ebp_68 );
        }
      }
      if ( ( *(char*)(uri + 54) & 2 ) & 255 )
      {
        if ( ses->referrer == 0 || cached[0].next == 0 || ( ( *(char*)(find_in_cache( ses->referrer ) + 92) & 8 ) & 255 ) == 0 )
        {
          if ( get_validated_cache_entry( uri, cache_mode ) )
          {
            uri->object.object++;
            task_type = task_type;
            cache_mode = cache_mode;
            target_location = target_location;
            target_frame = target_frame;
            uri = uri;
            ses = ses;
          }
        }
      }
      if ( confirm_submit )
      {
        malicious_uri = 0;
        referrer_incomplete = 0;
      }
      else
      {
        uri->object.object++;
        task_type = task_type;
        cache_mode = cache_mode;
        target_location = target_location;
        target_frame = target_frame;
        uri = uri;
        ses = ses;
      }
    }
  }
  confirm_submit = 0;
}
struct view_state *ses_forward( struct session *ses, int loaded_in_frame )
{
  int edx;
#error unstructured control flow
}
void loading_callback( struct download *download, struct session *ses )
{
  int eax;
  int edx;
  enum do_move  d;
  if ( assert_failed == 0 )
  {
    assert_failed = ses->task.type == 0;
    if ( !(_Bool)( ses->task.type != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/task.c";
      errline = 529;
      elinks_internal( "assertion ses-&gt;task.type failed: loading_callback: no ses-&gt;task" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    if ( download )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/task.c";
      errline = 466;
      elinks_internal( "assertion download_p && *download_p failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        &download = download;
        d = DO_MOVE_ABORT;
        if ( ses->history.current + 16 )
        {
          if ( d != DO_MOVE_DONE )
          {
            if ( d == DO_MOVE_DISPLAY )
            {
              download->callback = &doc_loading_callback;
              download->data = (void*)ses[0].next;
              display_timer( &ses[0] );
              &download = download;
            }
            if ( download->state.basic < 0 )
            {
              if ( ses->task.type )
              {
                d = d;
                free_task( &ses[0] );
              }
              if ( d == DO_MOVE_DISPLAY )
              {
                doc_loading_callback( download, &ses[0] );
                &download = download;
              }
              if ( ses->task.session_task != -100000 && download->state.basic < 0 )
              {
                print_error_dialog( &ses[0], ses->task.session_task, (int)( &ses->task.target.location->download.prev->next ), (int)( ses->task.session_task ) );
                if ( d == DO_MOVE_ABORT )
                  reload( &ses[0], CACHE_MODE_NORMAL );
                  check_questions_queue( &ses[0] );
                  print_screen_status( &ses[0] );
                  return;
              }
            }
          }
        }
        else
        {
          return;
        }
      }
    }
    assert_failed = ses->loading_uri == 0;
    if ( !(_Bool)( ses->loading_uri != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/task.c";
      errline = 467;
      elinks_internal( "assertion ses-&gt;loading_uri != NULL failed: no ses-&gt;loading_uri" );
      if ( assert_failed )
      {
        assert_failed = 0;
        &download = download;
        d = DO_MOVE_ABORT;
      }
    }
    if ( ses->loading_uri->protocol == 18 )
    {
      &download = download;
      d = DO_MOVE_ABORT;
    }
    else
    {
      if ( ses->task.type != 2 )
        &download = download;
      else
      if ( download->state.basic >= 0 )
        d = DO_MOVE_ABORT;
      if ( *(int*)(eax + 12) )
      {
        if ( download->cached->redirect )
        {
          ses->redirect_cnt++;
          if ( ses->redirect_cnt <= 9 )
          {
            if ( ses->task.type == 4 && ses->history.current == 0 )
            {
            }
            else
            {
              if ( assert_failed == 0 )
              {
                assert_failed = eax == 0;
                if ( !(_Bool)( eax != 0 ) )
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/task.c";
                  errline = 415;
                  elinks_internal( "assertion compare_uri(cached-&gt;uri, ses-&gt;loading_uri, URI_BASE) failed: Redirecting using bad base URI" );
                }
              }
              if ( download->cached->redirect->protocol != 18 )
              {
                abort_loading( &ses[0], 0 );
                if ( ses->history.current )
                  download = ses->history.current + 16;
                else
                  download = 0;
                set_session_referrer( &ses[0], &ses->history.current->frames.prev[5] );
                if ( ses->task.type != 2 )
                {
                  if ( ccdep1 < ccdep2 )
                  {
                    if ( ses->task.type == 3 )
                    {
                    }
                    else
                    if ( ses->task.type == 4 )
                    {
                    }
                    d = DO_MOVE_DONE;
                    ses_goto( &ses[0], &d );
                  }
                  else
                  if ( ses->task.type == 1 )
                  {
                    *ebp_48 = ebp_48;
                    if ( eax )
                    {
                      d = DO_MOVE_ABORT;
                      eax( ses[0].next );
                      download = 0;
                      d = d;
                    }
                  }
                }
                d = DO_MOVE_DONE;
                ses_goto( &ses[0], &d );
              }
              else
                d = DO_MOVE_ABORT;
              &download = download;
            }
          }
        }
        kill_timer( &ses->display_timer );
        if ( ses->task.type == 2 )
        {
          current_frame( &ses[0] );
          if ( find_in_cache( ses->loading_uri ) == 0 )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/task.c";
            errline = 377;
            elinks_internal( "can't find cache entry" );
          }
          else
          {
            if ( get_cache_fragment( find_in_cache( ses->loading_uri ) ) && current_frame( &ses[0] ) && *(int*)(current_frame( &ses[0] ) + 20) && get_cache_fragment( find_in_cache( ses->loading_uri ) ) == 0 )
            {
              add_empty_window( ses->tab->term, &freeml );
              do_menu( ses->tab->term, ebp_32, (void*)ses[0].next, 0 );
            }
          }
        }
        else
        if ( ccdep1 < ccdep2 )
        {
          if ( ses->task.type == 3 )
          {
            ses->task.target.location = ses->history.current->prev;
            ses_history_move( &ses[0] );
            ses_forward( &ses[0], 0 );
          }
          else
          if ( ses->task.type == 4 )
            ses_history_move( &ses[0] );
        }
        else
        if ( ses->task.type == 1 && ses->task )
        {
          d = DO_MOVE_DONE;
          free_task( &ses[0] );
          reload( &ses[0], CACHE_MODE_NORMAL );
          &download = download;
        }
        if ( download->state.basic >= 0 )
        {
          if ( ses->history.current )
            download = ses->history.current + 16;
          move_download( &ses->loading, ses->history.current + 16, PRI_MAIN );
        }
        else
        if ( ses->history.current )
        {
          (ses->history.current->download.state) = ses->loading.state;
          ses->history.current->download.state.syserr = ses->loading.state.syserr;
        }
        d = DO_MOVE_DISPLAY;
        free_task( &ses[0] );
        &download = download;
      }
      else
        d = DO_MOVE_ABORT;
    }
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
void do_follow_url( struct session *ses, struct uri *uri, unsigned char *target, enum task_type  task, enum cache_mode  cache_mode, int do_referrer )
{
  int edx;
  struct uri *referrer;
  protocol_external_handler_T *external_handler;
  if ( uri->string == 0 )
  {
    assert_failed = assert_failed;
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
    print_error_dialog( &ses[0], (long long)-100003, 0, PRI_CANCEL );
    return;
  }
  else
  {
    *ebp_44 = uri[0].string;
    if ( external_handler[0] )
    {
      task = ses[0].next[0];
      cache_mode = uri[0];
      ;
    }
    if ( do_referrer && current_frame( &ses[0] ) && *(int*)(current_frame( &ses[0] ) + 20) )
      referrer = *(int*)(*(int*)(current_frame( &ses[0] ) + 20) + 184);
    else
    {
      struct document_view *doc_view;
      referrer = 0;
    }
    if ( target[0] )
    {
      strcmp( "_blank", &target[0] );
      if ( 1 )
      {
        int mode = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
        if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 3 )
        {
          *ebp_44 = uri[0].string;
          if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 && can_open_in_new( ses->tab->term ) && *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 && *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
          {
            open_uri_in_new_window( &ses[0], &edx, referrer, ses->tab->term->environment, ebp_36, ebp_32 );
            return;
          }
        }
        else
        if ( mode >= 1 )
          goto B29;
      {
B29:        struct session *new_ses;
        ses = new_ses[0].next != 0 ? &ses[0] : &new_ses[0];
      }
      }
    }
    ses->reloadlevel = cache_mode;
    if ( task != ses->task.type || compare_uri( ses->loading_uri, &uri[0], 0 ) == 0 )
    {
      abort_loading( &ses[0], 0 );
      set_session_referrer( &ses[0], referrer );
      ses_goto( &ses[0], &uri[0], &target[0], 0, cache_mode, task, 0 );
      return;
    }
    else
    {
      return;
    }
  }
}
void follow_url( struct session *ses, struct uri *uri, unsigned char *target, enum task_type  task, enum cache_mode  cache_mode, int referrer )
{
  static int follow_url_event_id = -1;
  unsigned char *uristring;
  if ( uri[0].string )
  {
    uristring = &uristring[0];
    if ( uristring[0] )
    {
      if ( follow_url_event_id == -1 )
      {
        follow_url_event_id = get_event_id( "follow-url" );
      }
      trigger_event( uristring );
      if ( uristring )
      {
        if ( uristring[0] == 0 )
        {
          mem_free( (void*)uristring );
          return;
        }
        else
        {
          uri = get_translated_uri( uristring, &ses->tab->term->cwd[0] );
          mem_free( (void*)uristring );
          do_follow_url( &ses[0], &uri[0], &target[0], task, cache_mode, referrer );
          if ( uri[0].string )
          {
            done_uri( &uri[0] );
            uri = &uri[0];
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
        return;
      }
    }
  }
  else
    uristring = 0;
  do_follow_url( &ses[0], &uri[0], &target[0], task, cache_mode, referrer );
  return;
}
void goto_uri( struct session *ses, struct uri *uri )
{
  int eax;
  int edx;
  follow_url( ses, uri, 0, TASK_FORWARD, CACHE_MODE_NORMAL, 0 );
  return;
}
void goto_uri_frame( struct session *ses, struct uri *uri, unsigned char *target, enum cache_mode  cache_mode )
{
  int eax;
  int ecx;
  int edx;
  uri = &cache_mode;
  target = 1;
  ses = 1;
}
void delayed_goto_uri_frame( void *data )
{
  struct delayed_open *deo;
  struct frame *frame;
  if ( assert_failed == 0 )
  {
    assert_failed = deo[0].ses == 0;
    if ( !(_Bool)( deo[0].ses != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/task.c";
      errline = 680;
      elinks_internal( "assertion deo failed!" );
    }
  }
  goto_uri_frame( deo->ses, deo->uri );
  done_uri( deo->uri );
  mem_free( (void*)deo->target );
  data = (void*)deo[0].ses;
}
void map_selected( struct terminal *term, void *ld_, void *ses_ )
{
  struct uri *uri = get_uri( &((int*)ld_)[0], 0 );
  goto_uri_frame( &ses_[0], get_uri( &((int*)ld_)[0], 0 ), &((int*)ld_)[1], CACHE_MODE_NORMAL );
  if ( uri[0].string )
  {
    term = &uri[0].string[0];
  }
  return;
}
void goto_url( struct session *ses, unsigned char *url )
{
  struct uri *uri = get_uri( url, 0 );
  goto_uri( ses, get_uri( url, 0 ) );
  if ( uri[0].string )
  {
    ses = &uri[0].string[0];
  }
  return;
}
struct uri *get_hooked_uri( unsigned char *uristring, struct session *ses, unsigned char *cwd )
{
  int edx;
  static int goto_url_event_id = -1;
  struct uri *uri;
  if ( stracpy( uristring ) )
  {
    uristring = &uristring[0];
    if ( goto_url_event_id == -1 )
    {
      goto_url_event_id = get_event_id( "goto-url" );
    }
    trigger_event( uristring );
    if ( uristring )
    {
      uri = 0;
      if ( uristring[0] )
      {
        get_translated_uri( uristring, cwd );
        uristring[0] = uristring;
      }
      mem_free( (void*)uristring );
      return &uri[0];
    }
  }
  return 0;
}
void goto_url_with_hook( struct session *ses, unsigned char *url )
{
  int edx;
  struct uri *uri;
  if ( url[0] && get_hooked_uri( &url[0], &ses[0], ses->tab->term + 72 ) )
  {
    goto_uri( &ses[0], get_hooked_uri( &url[0], &ses[0], ses->tab->term + 72 ) );
    ses = &uri[0].string[0];
  }
  *ebp_8 = ebx;
  return;
}
int goto_url_home( struct session *ses )
{
  unsigned char *homepage;
  homepage[0] = homepage[0];
  if ( homepage[0] == 0 )
    getenv( "WWW_HOME" );
  if ( homepage[0] && homepage[0] )
  {
    goto_url_with_hook( ses, &homepage[0] );
    return 1;
  }
  return 0;
}
void goto_imgmap( struct session *ses, struct uri *uri, unsigned char *target )
{
  int eax;
  int ecx;
  int edx;
  uri = 1;
  target = 1;
  ses = 2;
}
#if 0
#endif
