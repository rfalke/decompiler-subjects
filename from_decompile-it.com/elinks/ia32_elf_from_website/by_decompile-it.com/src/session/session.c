#include "session.c.h"
struct list_head_elinks sessions = { &sessions, &sessions };
enum remote_session_flags  remote_session_flags;
static struct list_head_elinks session_info = { &session_info, &session_info };
static int session_info_id = 1;
struct list_head_elinks questions_queue = { &questions_queue, &questions_queue };
void done_session_info( struct session_info *info )
{
  info->prev = info->prev;
  &info->prev = info;
  kill_timer( &info->timer );
  if ( info->uri )
    done_uri( info->uri );
  if ( info->referrer )
    done_uri( info->referrer );
  mem_free( (void*)info[0].next );
  return;
}
void done_saved_session_info( void )
{
  if ( session_info.next != session_info.next )
  {
    do
    {
      done_session_info(  );
    }
    while ( session_info.next == session_info.next );
  }
  return;
}
void session_info_timeout( int id )
{
  int edx;
  struct session_info *info = &session_info.next[0];
  if ( session_info.next != session_info.next )
  {
    do
    {
      if ( info->id == id )
      {
        if ( sessions.next != sessions.next )
        {
          if ( info->ses != sessions.next )
          {
            do
            {
              if ( sessions.next == sessions.next )
                goto B5;
              else
              {
              }
            }
            while ( info->ses != sessions.next );
            &info->timer = 0;
          }
        }
B5:        info->ses = 0;
      }
      else
      {
        info = &info;
      }
    }
    while ( info->next != session_info.next );
  }
  return;
}
int add_session_info( struct session *ses, struct uri *uri, struct uri *referrer, enum cache_mode  cache_mode, enum task_type  task )
{
  int eax;
  struct session_info *info = (struct session_info*)mem_calloc( 1, esi );
  if ( mem_calloc( 1, esi ) )
  {
    info->id = session_info_id;
    session_info_id++;
    install_timer( &info->timer, 10000, &session_info_timeout, &session_info_id );
    info->ses = ses;
    info->task = task;
    info->cache_mode = cache_mode;
    if ( uri[0].string )
    {
      uri->object.refcount = uri->object.refcount;
      info->uri = &uri[0];
    }
    if ( referrer[0].string )
    {
      referrer->object.refcount = referrer->object.refcount;
      info->referrer = &referrer[0];
    }
    info->prev = &session_info.next[0];
    info = &session_info.next[0];
    session_info.next = (void*)info[0].next;
    info->prev = &info[0];
    return info->id;
  }
}
struct download *get_current_download( struct session *ses )
{
  struct download *download;
  if ( ses )
  {
    if ( ses->task.type == 0 )
    {
      if ( ses->history.current )
      {
        &download[0] = &download->callback[0];
        if ( download->state.basic != -100000 )
        {
          return &ses->loading;
        }
      }
    }
    else
    {
      &download[0] = &ses->loading;
      if ( download->state.basic != -100000 )
      {
        return &ses->loading;
      }
    }
  {
    struct file_to_load *ftl;
    &ftl[0] = &ses->more_files.next[0];
    if ( ses != ses->more_files.next )
    {
      do
      {
        if ( ( ( ftl->bits_at_12/*.1_1of4*/ & 1 ) & 255 ) && ftl->download.state.basic >= 0 )
          break;
        &ftl[0] = &ftl;
      }
      while ( ftl->next != ses->more_files.next );
      return &ses->loading;
    }
    else
    {
      return &ses->loading;
    }
  }
  }
  return 0;
}
void print_error_dialog( struct session *ses, struct connection_state state, struct uri *uri, enum connection_priority  priority )
{
  int edx;
  struct string msg;
  unsigned char *uristring;
  if ( priority != PRI_CSS && init_string( &msg ) )
  {
    if ( uri[0] && get_uri_string( &uri[0], URI_PUBLIC ) )
    {
      if ( ( ses->tab->term->bits_at_56/*.1_1of4*/ & 2 ) & 255 )
        decode_uri( &uristring[0] );
      else
        decode_uri_for_display( &uristring[0] );
      &ses->tab->term = ses->tab->term;
      if ( 0 != 85 )
      {
        if ( ses->tab->term && current_charset != get_terminal_codepage( ses->tab->term ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( ses->tab->term ) ) );
          current_charset = get_terminal_codepage( ses->tab->term );
        }
        gettext( "Unable to retrieve %s" );
      }
      add_format_to_string( &msg, gettext( "Unable to retrieve %s" ) );
      mem_free( &uristring[0] );
      add_to_string( &msg, ":\n\n" );
    }
    add_to_string( &msg, get_state_message( state, &state.syserr ) );
    info_box( ses->tab->term, MSGBOX_FREE_TEXT, "Error", ALIGN_CENTER, msg.source );
    return;
  }
  else
  {
    return;
  }
}
void free_files( struct session *ses )
{
  int ecx;
  int edx;
  struct file_to_load *ftl;
  do
  {
    if ( ses->more_files.next != ses->more_files.next )
    {
      do
      {
        if ( ( ( *(char*)(ses->more_files.next + 12) & 1 ) & 255 ) && ses->more_files.list_head_elinks >= 0 )
        {
          cancel_download( &ses->more_files.list_head_elinks, 0 );
        }
      }
      while ( ses->more_files.next[0] != ses->more_files.next );
    }
  {
    struct xlist_head *head = &ses->more_files.next[0], *next;
    if ( ses->more_files.next != ses->more_files.next )
    {
      head = &ses->more_files.next[0];
      do
      {
        head = &(struct xlist_head*)(head);
      }
      while ( head->next != ses->more_files.next );
    }
    head = &ses->more_files.prev[0];
    if ( ses->more_files.prev != ses->more_files.next )
    {
      do
      {
        head = head->prev;
      }
      while ( head->prev != ses->more_files.next );
    }
    next = &ses->more_files.next[0];
    if ( ses->more_files.next != ses->more_files.next )
    {
      do
      {
        next->prev = head->prev;
        &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
        mem_free( (void*)head->next );
      }
      while ( ses->more_files.next == next[0].next );
      break;
    }
  }
  }
  while ( 1 );
  ftl = &ses->more_files.next[0];
  if ( ses->more_files.next != ses->more_files.next )
  {
    do
    {
      if ( ftl->cached )
        ftl->cached->object.object--;
      if ( ftl->uri )
        done_uri( ftl->uri );
    {
      void *p = (void*)ftl->target_frame;
      if ( ftl->target_frame )
        mem_free( &((int*)p)[0] );
      ftl = &ftl;
    }
    }
    while ( ftl->next != ses->more_files.next );
    ses->more_files.next = ses->more_files.next;
  }
}
void request_frameset( struct session *ses, struct frameset_desc *frameset_desc, int depth )
{
  int ecx;
  int i;
  if ( depth <= 5 && frameset_desc->n >= 1 )
  {
    i = 0;
    do
    {
      *(int*)(*(int*)(ebx + 20)) = frameset_desc->frame_desc[1].subframe;
      if ( frameset_desc->frame_desc[1].subframe )
        request_frameset( &ses[0] );
      else
      {
        if ( frameset_desc->frame_desc[1].name && frameset_desc->frame_desc[1].uri )
        {
          if ( assert_failed == 0 )
          {
            assert_failed = ses->history.current == 0;
            if ( !(_Bool)( ses->history.current != 0 ) )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/session.c";
              errline = 339;
              elinks_internal( "assertion have_location(ses) failed: request_frame: no location" );
              if ( assert_failed )
                i = i;
            }
            if ( ses->history.current != ses->history.current->frames.next )
            {
              do
              {
                if ( eax == 0 )
                {
                  i = i;
                  if ( ses->scrn_frames.next != ses->scrn_frames.next )
                  {
                    do
                    {
                      if ( edx == *(int*)(&eax->target_frame) && ses->scrn_frames.next[0][5] )
                      {
                        request_frameset( &ses[0] );
                        i++;
                        if ( i + 1 < frameset_desc->n )
                        {
                          do
                          {
                            *(int*)(*(int*)(ebx + 20)) = frameset_desc->frame_desc[1].subframe;
                          }
                          while ( i + 1 < frameset_desc->n );
                          break;
                        }
                        else
                          break;
                      }
                      else
                    }
                    while ( ses->scrn_frames.next[0] != ses->scrn_frames.next );
                  }
                  request_additional_file( ebp_28, ebp_36, *(int*)(ebp_40 + 20), 1 );
                }
                else
                {
                }
              }
              while ( ebp_52 != ebx );
              i = i;
            }
            if ( mem_calloc( 1, 64 ) )
            {
              *(int*)(mem_calloc( 1, 64 ) + 8) = eax[0].next[0];
              if ( mem_calloc( 1, 64 ) + 8 == 0 )
                mem_free( &edx );
              else
              {
                init_vs( mem_calloc( 1, 64 ) + 16, frameset_desc->frame_desc[1].uri, -1, (struct window*)mem_calloc( 1, 64 ) );
                *(int*)(ebp_60 + 4) = ebp_40;
                *ebp_60 = *ebp_40;
                *ebp_40 = ebp_60;
                *(int*)(*ebp_60 + 4) = ebp_60;
                request_additional_file( ebp_28, ebp_36, *(int*)(ebp_60 + 20), 1 );
              }
            }
          }
          assert_failed = 0;
        }
      }
    }
    while ( i + 1 < frameset_desc->n );
    return;
  }
  else
  {
    return;
  }
}
void load_frames( struct session *ses, struct document_view *doc_view )
{
  int eax;
  struct document *document = *(int*)(ebp_12 + 20);
  if ( *(int*)(ebp_12 + 20) && document->frame_desc )
  {
    request_frameset( &ses[0] );
    if ( ses->scrn_frames.next != ses->scrn_frames.next )
    {
      do
      {
        if ( ses->scrn_frames.list_head_elinks && ses->scrn_frames.next[5] >= 1 )
        {
          do
          {
            if ( ses->scrn_frames.next[5] )
              request_additional_file( &ses[0], "" );
          }
          while ( ses->scrn_frames.next[5] <= 0 + 1 + 1 );
        }
      }
      while ( ses->scrn_frames.next != ses->scrn_frames.next );
    }
  }
  return;
}
void display_timer( struct session *ses )
{
  int eax;
  timeval_T start;
  timeval_T stop;
  timeval_T duration;
  milliseconds_T t;
  timeval_now( &start );
  draw_formatted( ses, 3 );
  timeval_now( &stop );
  timeval_sub( &duration, &start, &stop );
  install_timer( ses + 140, t <= 199 ? t : 200, &display_timer, (void*)ses );
  if ( ses->doc_view->document )
  {
    if ( ses->doc_view->document->frame_desc )
    {
      request_frameset( &ses[0] );
      if ( ses->scrn_frames.next != ses->scrn_frames.next )
      {
        do
        {
          if ( ses->scrn_frames.list_head_elinks && ses->scrn_frames.next[5] >= 1 )
          {
            do
            {
              if ( ses->scrn_frames.next[5] )
                request_additional_file( &ses[0], "" );
            }
            while ( ses->scrn_frames.next[5] <= 0 + 1 + 1 );
          }
        }
        while ( ses->scrn_frames.next != ses->scrn_frames.next );
      }
      if ( ses->doc_view->document )
        goto B10;
    }
B10:    if ( ses->doc_view->document->css_imports.size >= 1 )
    {
      do
      {
        if ( ses->doc_view->document->css_imports.uris[ 0 ] )
          request_additional_file( &ses[0], "" );
      }
      while ( ses->doc_view->document->css_imports.size <= 0 + 1 + 1 );
    }
  }
  process_file_requests( &ses[0] );
  return;
}
void check_questions_queue( struct session *ses )
{
  if ( questions_queue.next != questions_queue.next )
  {
    ses = &ses[0];
    ;
  }
  return;
}
void add_questions_entry( void (*callback)( struct session *, void * ), void *data )
{
  if ( mem_alloc( 16 ) )
  {
    *(int*)(mem_alloc( 16 ) + 8) = callback[0];
    *(int*)(mem_alloc( 16 ) + 12) = data[0];
    *(int*)(mem_alloc( 16 ) + 4) = questions_queue;
    *(int*)(mem_alloc( 16 )) = questions_queue;
    questions_queue.next = mem_alloc( 16 );
    *(int*)(*(int*)(mem_alloc( 16 )) + 4) = mem_alloc( 16 );
  }
  return;
}
int session_is_loading( struct session *ses )
{
  int eax;
  struct download *download;
  if ( get_current_download( ses ) )
  {
    if ( download->state.basic < 0 )
    {
      if ( download->cached && cache_entry_is_valid( download->cached ) )
      {
        if ( assert_failed == 0 )
        {
          assert_failed = download->cached == 0;
          if ( !(_Bool)( download->cached != 0 ) )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/session.c";
            errline = 555;
            elinks_internal( "assertion cached failed!" );
          }
        }
        if ( follow_cached_redirects( download->cached ) )
        {
          if ( *(int*)(follow_cached_redirects( download->cached ) + 28) )
          {
          }
        }
      }
    }
    return ( ( *(char*)(1 + 92) & 8 ) & 255 ) != 0;
  }
  return 0;
}
void doc_loading_callback( struct download *download, struct session *ses )
{
  int eax;
  int submit;
  if ( download->state.basic < 0 )
  {
    if ( download->cached && ( ( *(char*)(download->cached + 92) & 2 ) & 255 ) == 0 )
    {
      download->cached->object.object++;
      if ( get_cache_fragment( download->cached ) && download->cached->frag.prev == download->cached->frag.next )
      {
        if ( pre_format_html_event == -1 )
        {
          pre_format_html_event = get_event_id( "pre-format-html" );
        }
        trigger_event( pre_format_html_event );
        download->cached->bits_at_92/*.1_1of4*/ |= 2;
      }
      download->cached->object.object--;
    }
    kill_timer( &ses->display_timer );
    draw_formatted( &ses[0], 1 );
    if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
      submit = 0;
    else
    {
      submit = 0;
      if ( ses->doc_view->document->forms.next != ses->doc_view->document->forms.next )
      {
        *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) = 0;
        submit = 1;
      }
    }
    if ( ses->doc_view->document )
    {
      if ( ses->doc_view->document->frame_desc )
      {
        request_frameset( &ses[0] );
        if ( ses->scrn_frames.next != ses->scrn_frames.next )
        {
          do
          {
            if ( ses->scrn_frames.list_head_elinks && ses->scrn_frames.next[5] >= 1 )
            {
              do
              {
                if ( ses->scrn_frames.next[5] )
                  request_additional_file( &ses[0], "" );
              }
              while ( ses->scrn_frames.next[5] <= 0 + 1 + 1 );
            }
          }
          while ( ses->scrn_frames.next[0] != ses->scrn_frames.next );
        }
        if ( ses->doc_view->document )
          goto B39;
      }
B39:      if ( ses->doc_view->document->css_imports.size >= 1 )
      {
        do
        {
          if ( ses->doc_view->document->css_imports.uris[ 0 ] )
            request_additional_file( &ses[0], "" );
        }
        while ( ses->doc_view->document->css_imports.size <= 0 + 1 + 1 );
      }
    }
    process_file_requests( &ses[0] );
    start_document_refreshes( &ses[0] );
    if ( download->state.basic != -100000 )
      print_error_dialog( &ses[0], download->state, ses->doc_view->document->uri, download->pri );
  }
  else
  {
    if ( download->state.basic <= 7 || ses->display_timer )
      submit = 0;
    else
    {
      display_timer( &ses[0] );
      submit = 0;
    }
  }
  check_questions_queue( &ses[0] );
  print_screen_status( &ses[0] );
  if ( download->pri != PRI_CSS )
  {
    unsigned char *title;
    struct uri *uri;
    title[0] = ses->doc_view->document->title;
    if ( download->conn )
      uri = download->conn->proxied_uri;
    else
    if ( download->cached )
    {
    }
    if ( uri[0].string )
    {
      add_global_history_item( uri->string, &title[0], time( 0 ) );
    }
  }
  if ( submit )
  {
    download = &ses[0].next[0];
  }
  return;
}
void file_loading_callback( struct download *download, struct file_to_load *ftl )
{
  int eax;
  if ( ftl->download.cached )
  {
    if ( ftl->download.cached != ftl->cached )
    {
      if ( ftl->cached )
      {
        ftl->cached->object.object--;
        &ftl->download.cached = ftl->download.cached;
      }
      ftl->cached = ftl->download.cached;
      ftl->download.cached->object.object++;
    }
    else
    {
      if ( ftl->cached && !( ( *(char*)(ftl->cached + 92) & 4 ) & 255 ) && download->pri != PRI_CSS )
      {
        struct session *ses = ftl->ses;
        struct uri *loading_uri = ftl->ses->loading_uri;
        unsigned char *target_frame;
        ftl->ses->loading_uri = ftl->uri;
        target_frame[0] = ftl->ses->task.target.frame;
        ftl->ses->task.target.frame = ftl->target_frame;
        setup_download_handler( ftl->ses, &ftl->download, ftl->cached, 1 );
        ses->loading_uri = ses->loading_uri;
        ses->task.target.frame = ses->task.target.frame;
      }
      download = &download[0];
      ftl = &ftl->ses->next;
    }
  }
  &ftl->cached = ftl->cached;
}
struct file_to_load *request_additional_file( struct session *ses, unsigned char *name, struct uri *uri, int pri )
{
  int ecx;
  int edx;
  struct file_to_load *ftl;
  if ( uri->protocol != 18 && get_protocol_external_handler( ses->tab->term, &uri[0] ) == 0 )
  {
    ftl = &ses->more_files.next[0];
    &ftl[0] = &ses->more_files.next[0];
    if ( ses->more_files.next != ses->more_files.next )
    {
      do
      {
        if ( compare_uri( ftl->uri, &uri[0], URI_BASE ) )
        {
          if ( pri < ftl->pri )
          {
            ftl->pri = pri;
            &ftl[0] = 0;
            move_download( &ftl->download, &ftl->download, ftl->pri );
            break;
          }
        }
        else
        {
          ftl = &ftl;
        }
      }
      while ( ftl->next != ftl[0].next );
      ses = &ses[0];
      uri = &uri[0];
      name[0] = name[0];
    }
    ebp_36 = name[0];
    *ebp_40 = uri[0].string;
    &ftl[0] = (struct file_to_load*)mem_calloc( 1, 80 );
    if ( mem_calloc( 1, 80 ) )
    {
      uri->object.refcount = uri->object.object + 1;
      *(int*)(mem_calloc( 1, 80 ) + 28) = uri[0];
      ftl->download.callback = &file_loading_callback;
      ftl->download.data = (void*)ftl[0].next;
      ftl->target_frame = stracpy( &name[0] );
      ftl->ses = &ses[0];
      ftl->pri = pri;
      ftl->prev = &ftl[0];
      ftl = &ftl;
      &ftl = &ftl;
      ftl->prev = &ftl[0];
      *ebp_4 = edi;
      return &ftl[0];
    }
    *ebp_4 = edi;
    return &ftl[0];
  }
  &ftl[0] = 0;
  *ebp_4 = edi;
  return &ftl[0];
}
void load_additional_file( struct file_to_load *ftl, enum cache_mode  cache_mode )
{
  struct document_view *doc_view;
  struct uri *referrer;
  load_uri( ftl->uri, &referrer[0], &ftl->download, ftl->pri, cache_mode, (long long)-1 );
  return;
}
void process_file_requests( struct session *ses )
{
  int eax;
  if ( ( ( ses->status.bits_at_52/*.1_1of4*/ & 2 ) & 255 ) == 0 )
  {
    ses->status.bits_at_52/*.1_1of4*/ = (int)ses->status.bits_at_52/*.1_1of4*/ | 2;
  {
    struct file_to_load *ftl;
    int more;
    do
    {
      ftl = &ses->more_files.next[0];
      if ( ses->more_files.next != ses->more_files.next )
      {
        more = 0;
        do
        {
          if ( ( ( ftl->bits_at_12/*.1_1of4*/ & 1 ) & 255 ) == 0 )
          {
            ftl->bits_at_12/*.1_1of4*/ = (int)ftl->bits_at_12/*.1_1of4*/ | 1;
            load_additional_file( &ftl[0], CACHE_MODE_NORMAL );
            ftl = &ftl;
            more = 1;
            if ( ftl->next != ses->more_files.next )
              continue;
            else
              break;
          }
          else
          {
            ftl = &ftl;
          }
        }
        while ( ftl->next != ses->more_files.next );
      }
      else
        break;
    }
    while ( more );
    ses->status.bits_at_52/*.1_1of4*/ &= 253;
  }
  }
  return;
}
void dialog_goto_url_open( void *data )
{
  dialog_goto_url( &data[0], 0 );
  return;
}
struct session *init_session( struct session *base_session, struct terminal *term, struct uri *uri, int in_background )
{
  struct session *ses;
  if ( mem_calloc( 1, 224 ) )
  {
    ses->tab = init_tab( &term[0], mem_calloc( 1, 224 ), &tabwin_func );
    if ( ses->tab == 0 )
    {
      &ses[0] = 0;
      mem_free( (void*)ses[0].next );
      return sessions.next + 4;
    }
    create_history( &ses->history );
    ses->scrn_frames.prev = ses->scrn_frames.next;
    ses->scrn_frames.next = ses->scrn_frames.next;
    ses->more_files.prev = ses->more_files.next;
    ses->more_files.next = ses->more_files.next;
    ses->type_queries.prev = ses->type_queries.next;
    ses->type_queries.next = ses->type_queries.next;
    ses->task.type = TASK_NONE;
    &ses->display_timer = 0;
    init_led_panel( &ses->status.leds );
    ses->status.ssl_led = register_led( &ses[0], 0 );
    ses->status.insert_mode_led = register_led( &ses[0], 1 );
    ses->status.ecmascript_led = register_led( &ses[0], 2 );
    ses->status.bits_at_0/*.1_1of4*/ |= 120;
    ses->status.popup_led = register_led( &ses[0], 3 );
    ses->prev = &sessions.next[0];
    &ses = &sessions->next[0];
    sessions.next = (void*)ses[0].next;
    ses->prev = &ses[0];
    update_status(  );
    if ( sessions.prev == sessions.next )
    {
      if ( *(char*)(*(int*)(get_opt_( config_options, (unsigned char*)config_options ))) == 0 )
        info_box( ses->tab->term, 0, "Warning", ALIGN_CENTER, "You have an empty string in protocol.http.user_agent - this was a default value in the past, substituted by default ELinks User-Agent string. However, currently this means that NO User-Agent HEADER WILL BE SENT AT ALL - if this is really what you want, set its value to \" \", otherwise please delete the line with this setting from your configuration file (if you have no idea what I'm talking about, just do this), so that the correct default setting will be used. Apologies for any inconvience caused." );
      if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 )
      {
        *(int*)(get_opt_rec( config_options, "config.saving_style_w" ) + 32) = 1;
        option_changed( &ses[0], get_opt_rec( config_options, "config.saving_style_w" ) );
        if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) != 3 )
          info_box( ses->tab->term, 0, "Warning", ALIGN_CENTER, "You have option config.saving_style set to a de facto obsolete value. The configuration saving algorithms of ELinks were changed from the last time you upgraded ELinks. Now, only those options which you actually changed are saved to the configuration file, instead of all the options. This simplifies our situation greatly when we see that some option has an inappropriate default value or we need to change the semantics of some option in a subtle way. Thus, we recommend you change the value of config.saving_style option to 3 in order to get the \"right\" behaviour. Apologies for any inconvience caused." );
      }
      if ( first_use )
      {
        if ( uri )
        {
          first_use = 0;
          msg_box( ses->tab->term, 0, 0, "Welcome", ALIGN_CENTER, "Welcome to ELinks!\n\nPress ESC for menu. Documentation is available in Help menu.", (void*)ses[0].next, 1 );
        }
        else
        {
          first_use = 0;
          msg_box( ses->tab->term, 0, 0, "Welcome", ALIGN_CENTER, "Welcome to ELinks!\n\nPress ESC for menu. Documentation is available in Help menu.", (void*)ses[0].next, 1 );
          if ( in_background == 0 )
          {
            switch_to_tab( &term[0], get_tab_number( ses->tab ), -1 );
            if ( term->main_menu == 0 )
            {
              activate_bfu_technology( &ses[0], -1 );
              return sessions.next + 4;
            }
            return sessions.next + 4;
          }
          else
          {
          }
        }
      }
      else
      {
        if ( uri == 0 && *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
        {
          if ( get_auto_save_bookmark_foldername_utf8(  ) )
          {
            open_bookmark_folder( &ses[0], get_auto_save_bookmark_foldername_utf8(  ) );
            mem_free( (void*)get_auto_save_bookmark_foldername_utf8(  ) );
          }
        }
      }
    }
    if ( base_session[0] && base_session->history.current )
    {
      ses_load( sessions.next + 4, base_session->history.current->vs.uri, 0, 0, CACHE_MODE_ALWAYS, TASK_FORWARD );
      base_session->history.current->vs.uri->object.object++;
      if ( sessions.next[24] && sessions.next[24] && base_session->doc_view && base_session->doc_view->vs )
      {
        destroy_vs( &sessions.next[24], 1 );
        copy_vs( ebp_32, base_session->doc_view->vs );
        sessions.list_head_elinks = ebp_32;
      }
    }
    if ( uri )
      goto_uri( sessions.next + 4, uri );
    else
    {
      if ( !goto_url_home( &ses[0] ) && *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
        dialog_goto_url_open( (void*)ses[0].next );
    }
  }
  else
  {
    return sessions.next + 4;
  }
}
void init_remote_session( struct session *ses, enum remote_session_flags  *remote_ptr, struct uri *uri )
{
  int ecx;
  enum remote_session_flags  remote = remote_ptr[0];
  if ( remote_ptr[0] & 4 )
  {
    goto_uri( ses, &uri[0] );
    remote_ptr[0] = ( remote & -5 & -5 ) != 0 ? SES_REMOTE_NEW_TAB : remote & -5 & -5;
    return;
  }
  else
  {
    if ( remote & 1 )
    {
      open_uri_in_new_tab( ses, &uri[0], 0, 1 );
      remote &= SES_REMOTE_PROMPT_URL;
      if ( ( remote & 8 ) == 0 )
      {
        return;
      }
    }
    else
    if ( remote & 2 )
    {
      *ebp_12 = uri[0].string;
      if ( can_open_in_new( ses->tab->term ) )
      {
        open_uri_in_new_window( &ses[0], &uri[0], 0, ses->tab->term->environment, CACHE_MODE_NORMAL, TASK_NONE );
        return;
      }
      else
      {
        return;
      }
    }
    else
    if ( remote & 32 )
    {
      int uri_cp;
      if ( uri[0].string )
      {
        add_bookmark_cp( 0, 1, get_cp_index( "System" ), uri->string, uri->string );
        return;
      }
      return;
    }
    else
    if ( remote & 64 )
    {
      unsigned char *text;
      if ( uri[0] && text[0] )
      {
        info_box( ses->tab->term, MSGBOX_FREE_TEXT, "Error", ALIGN_CENTER, &text[0] );
        return;
      }
      else
      {
        return;
      }
    }
    else
    {
      remote &= SES_REMOTE_PROMPT_URL;
      if ( remote & 8 )
        remote = remote;
      else
      {
        return;
      }
    }
    dialog_goto_url_open( (void*)ses[0].next );
    return;
  }
}
struct string *encode_session_info( struct string *info, struct list_head_elinks *url_list )
{
  int eax;
  int ecx;
  int edx;
  struct string_list_item *url;
  if ( init_string( info ) == 0 )
  {
    return 0;
  }
  url = &url_list[0].next[0];
  if ( url_list[0].next != url_list )
  {
    do
    {
      if ( assert_failed == 0 )
      {
        if ( info[0] && edx && url->string.length + 1 >= 0 )
          assert_failed = 0;
        else
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
          errline = 255;
          elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
          if ( assert_failed )
            goto B8;
        }
        if ( url->string.length + 1 )
        {
          if ( 0 < 0 )
          {
            *ebp_36 = ebp_36;
            *ebp_40 = 0;
            if ( mem_realloc( (void*)info->source, 0 ) )
            {
              info = (struct string*)mem_realloc( (void*)info->source, 0 );
              memset( info[0].source + 0, 0, 0 - 0 );
            }
          }
          if ( info->source )
          {
            memcpy( info->length + info->source, &edx, url->string.length + 1 );
            info[ ( info->length + url->string.length + 1 ) >> 3 ].source = 0;
            info->length += url->string.length + 1;
          }
        }
        url = &url;
        if ( url->next != url_list )
          continue;
        else
          break;
      }
B8:      assert_failed = 0;
      url = &url;
    }
    while ( url->next != url_list );
  }
  return &info[0];
}
int decode_session_info( struct terminal *term, struct terminal_info *info )
{
  int eax;
  int ecx;
  int edx;
  int len = info->length;
  struct session *base_session;
  enum remote_session_flags  remote = 0;
  unsigned char *str;
  len = info->magic;
  if ( info->magic != -257 )
  {
    if ( len == -256 )
    {
      info->session_info = info->session_info;
      if ( session_info.next != session_info.next )
      {
        do
        {
          if ( info->session_info == session_info.list_head_elinks )
          {
            if ( sessions.next != sessions.next )
            {
              if ( session_info.next[4] != sessions.next )
              {
                do
                {
                  if ( sessions.next == sessions.next )
                    goto B24;
                  else
                  {
                  }
                }
                while ( session_info.next[4] != sessions.next );
                if ( init_session( &session_info.next[4], term, &session_info.next[5], 0 ) == 0 )
                {
                  done_session_info( &session_info.next[0] );
                  break;
                }
                else
                {
                  if ( session_info.next[5] && session_info.next[7] )
                  {
                    abort_loading( init_session( base_session, term, 0, 0 ), 1 );
                    *(int*)(init_session( base_session, term, 0, 0 ) + 84) = session_info.next[8];
                    set_session_referrer( init_session( base_session, term, 0, 0 ), &session_info.next[6] );
                    ses_goto( init_session( base_session, term, 0, 0 ), &session_info.next[5], 0, 0, session_info.next[8], session_info.next[7], 0 );
                  }
                  done_session_info( &session_info.next[0] );
                  return 1;
                }
              }
            }
B24:            session_info.next[4] = 0;
          }
          else
          {
          }
        }
        while ( session_info.next != session_info.next );
      }
      base_session = 0;
    }
    else
    {
      if ( len >= 1 )
      {
        base_session = 0;
        if ( len <= len - 8 )
        {
          int urilength;
          struct uri *uri;
          unsigned char *uristring;
        {
          struct session *ses;
          str = info + 320;
          while ( 1 )
          {
            if ( memacpy( str, memchr( str, 0, len ) - str ) )
            {
              mem_free( ebp_64 );
            }
            len += ~( memchr( str, 0, len ) - str );
            if ( remote )
            {
              if ( esi == 0 )
              {
                if ( len < 1 )
                {
                  if ( remote == 0 )
                  {
                    break;
                  }
                  break;
                }
                else
                {
                  str = &str[ ebp_48 + 1 ];
                }
              }
              else
                init_remote_session( base_session, &remote, eax );
            }
            else
            {
              term->windows.next = term->windows.next;
              if ( esi == 0 )
              {
                ebp_64 = term->windows.next;
              }
              if ( eax == 0 )
                len = 0;
              else
              if ( esi == 0 )
              {
                if ( assert_failed == 0 )
                  assert_failed = 0;
                else
                  assert_failed = 0;
                print_error_dialog( &sessions.next[0], (long long)-100003, 0, PRI_MAIN );
              }
              if ( edi == 0 )
                continue;
              else
              {
              }
            }
            done_uri( eax );
          }
        }
        }
      }
      base_session = 0;
      return term->windows.next != term->windows.next;
    }
  }
  else
  if ( info->session_info )
  {
    if ( sessions.next != sessions.next )
    {
      remote = info->session_info;
      if ( ( ( *(char*)(*(int*)(*(int*)(sessions.next + 8) + 20) + 56) & 1 ) & 255 ) == 0 )
      {
        do
        {
          if ( sessions.next == sessions.next )
            break;
        }
        while ( ( *(char*)(*(int*)(*(int*)(sessions.next + 8) + 20) + 56) & 1 ) & 255 );
      }
      if ( eax )
      {
        base_session = *(int*)(&eax->password);
        if ( *(int*)(&eax->password) == 0 )
        {
          return 0;
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/session.c";
    errline = 1071;
    elinks_internal( "Remote magic with no remote flags" );
    return term->windows.next != term->windows.next;
  }
  if ( len < 1 )
  {
    if ( remote == 0 )
    {
      return term->windows.next != term->windows.next;
    }
    init_remote_session( base_session, &remote, 0 );
    return term->windows.next != term->windows.next;
  }
  else
  {
  {
    int urilength;
    struct uri *uri;
    unsigned char *uristring;
  }
  }
}
void abort_loading( struct session *ses, int interrupt )
{
  if ( ses->history.current )
  {
    cancel_download( ses->history.current + 16, interrupt );
    do
    {
      if ( ses->more_files.next != ses + 24 )
      {
        do
        {
          if ( ( ( *(char*)(ses->more_files.next + 12) & 1 ) & 255 ) && ses->more_files.next[15] >= 0 )
          {
            cancel_download( ses->more_files.next + 32, interrupt );
          }
        }
        while ( ses->more_files.next[0] != ses + 24 );
      }
      else
        break;
    }
    while ( 1 );
  }
  interrupt = interrupt;
  ses = ses;
}
void reload( struct session *ses, enum cache_mode  cache_mode )
{
  int edx;
  abort_loading( ses, 0 );
  if ( cache_mode == CACHE_MODE_INCREMENT )
  {
    cache_mode = CACHE_MODE_NEVER;
    if ( ses->reloadlevel <= 3 )
    {
      cache_mode = ses->reloadlevel + 1;
      ses->reloadlevel++;
    }
  }
  else
    ses->reloadlevel = cache_mode;
  if ( ses->history.current )
  {
    struct file_to_load *ftl;
    ses->history.current->download.data = (void*)ses[0].next;
    ses->history.current->download.callback = &doc_loading_callback;
    load_uri( ses->history.current->vs.uri, ses->referrer, ses->history.current + 16, PRI_MAIN, cache_mode, (long long)-1 );
    ftl = &ses->more_files.next[0];
    if ( ses->more_files.next != ses->more_files.next )
    {
      do
      {
        if ( ( ( ftl->bits_at_12/*.1_1of4*/ & 1 ) & 255 ) == 0 || ftl->download.state.basic < 0 )
        {
          ftl->download.data = (void*)ftl[0].next;
          ftl->download.callback = &file_loading_callback;
          load_additional_file( &ftl[0], cache_mode );
          ftl = &ftl;
          if ( ftl->next != ses->more_files.next )
            continue;
          else
            break;
        }
        else
        {
          ftl = &ftl;
        }
      }
      while ( ftl->next != ses->more_files.next );
    }
  }
  return;
}
struct frame *ses_find_frame( struct session *ses, unsigned char *name )
{
  struct location *loc = ses->history.current;
  struct frame *frame;
  if ( assert_failed == 0 )
  {
    assert_failed = loc[0].next == 0;
    if ( !(_Bool)( loc[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/session.c";
      errline = 1261;
      elinks_internal( "assertion have_location(ses) failed: ses_request_frame: no location yet" );
      if ( assert_failed )
      {
        name[0] = name[0];
      }
    }
    &frame[0] = &loc->frames.prev[0];
    if ( loc->frames.prev != loc->frames.next )
    {
      do
      {
        if ( c_strcasecmp( (char*)frame->name, &name[0] ) == 0 )
          break;
        &frame[0] = frame->prev;
      }
      while ( frame->prev != loc->frames.next );
    }
    return 0;
  }
  assert_failed = 0;
  return 0;
}
void set_session_referrer( struct session *ses, struct uri *referrer )
{
  if ( ses->referrer )
    done_uri( ses->referrer );
  if ( referrer[0].string )
  {
    referrer->object.refcount = referrer->object.refcount;
  }
  ses->referrer = &referrer[0];
  return;
}
void tabwin_func( struct window *tab, struct term_event *ev )
{
  int eax;
  int ecx;
  int edx;
  struct session *ses = &tab->data[0];
  switch ( ev->ev )
  {
  case 5:
    if ( ses[0].next )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = 0;
        tab = &ses[0].next[0];
        ebp_4 = tabwin_func+9f;
        destroy_downloads(  );
        ev = 0;
        tab = &ses[0].next[0];
        ebp_4 = tabwin_func+af;
        abort_loading(  );
        tab = &ses[0].next[0];
        ebp_4 = tabwin_func+b7;
        free_files(  );
        if ( ses->doc_view )
        {
          tab = &ses->doc_view->next;
          ebp_4 = tabwin_func+c6;
          detach_formatted(  );
          tab = &ses->doc_view->next;
          ebp_4 = tabwin_func+d1;
          mem_free(  );
        }
        if ( ses->scrn_frames.next != ses->scrn_frames.next )
        {
          do
          {
            tab = &ses->scrn_frames.next[0];
            ebp_4 = tabwin_func+e8;
            detach_formatted(  );
          }
          while ( ses->scrn_frames.next == ses->scrn_frames.next[0] );
          ses->scrn_frames.next = ses->scrn_frames.next;
        }
        if ( ses->scrn_frames.next != ses->scrn_frames.next )
        {
          edx = ses->scrn_frames.next;
          do
          {
          }
          while ( ses->scrn_frames.next[0] != ses->scrn_frames.next );
        }
        if ( ses->scrn_frames.prev != ses->scrn_frames.next )
        {
          do
          {
          }
          while ( ses->scrn_frames.prev[1] != ses->scrn_frames.next );
        }
        if ( ses->scrn_frames.next != ses->scrn_frames.next )
        {
          while ( 1 )
          {
            ses->scrn_frames.next[0][1] = *(int*)(&eax->prev);
            *(int*)(*(int*)(&eax->prev)) = eax;
            tab = eax;
            ebp_4 = tabwin_func+141;
            mem_free(  );
            if ( ses->scrn_frames.next == ses->scrn_frames.next )
              ses = &ses[0];
            else
            {
              ebx = ses->scrn_frames.next;
            }
          }
        }
        tab = &ses->history.history.next[0];
        ebp_4 = tabwin_func+155;
        destroy_history(  );
        ev = 0;
        tab = &ses[0].next[0];
        ebp_4 = tabwin_func+165;
        set_session_referrer(  );
        if ( ses->loading_uri )
        {
          tab = &ses->loading_uri->string[0];
          ebp_4 = tabwin_func+174;
          done_uri(  );
        }
        tab = &ses->display_timer;
        ebp_4 = tabwin_func+188;
        kill_timer(  );
        if ( ses->type_queries.next != ses->type_queries.next )
        {
          do
          {
            tab = &ses->type_queries.next[0];
            ebp_4 = tabwin_func+1a0;
            done_type_query(  );
          }
          while ( ses->type_queries.next == ses->type_queries.next );
        }
        if ( ses->download_uri )
        {
          tab = &ses->download_uri->string[0];
          ebp_4 = tabwin_func+1b9;
          done_uri(  );
        }
        if ( ses->search_word )
        {
          tab = &ses->search_word[0];
          ebp_4 = tabwin_func+1cb;
          mem_free(  );
        }
        if ( ses->last_search_word )
        {
          tab = &ses->last_search_word[0];
          ebp_4 = tabwin_func+1dd;
          mem_free(  );
        }
        if ( ses->status.last_title )
        {
          tab = &ses->status.last_title[0];
          ebp_4 = tabwin_func+1ef;
          mem_free(  );
        }
        ses->prev = ses->prev;
        &ses->prev = &ses;
        if ( sessions->next != sessions.next )
        {
        }
        return;
      }
      else
        assert_failed = 0;
    }
    break;
  case 0:
  case 4:
    tab->bits_at_40/*.1_1of4*/ |= 1;
  case 3:
    if ( ses[0] && ses->tab == get_tab_by_number( ses->tab->term, ses->tab->term->current_tab ) )
    {
      draw_formatted( &ses[0], (int)tab->bits_at_40/*.1_1of4*/ & 1 );
      if ( ( tab->bits_at_40/*.1_1of4*/ & 1 ) & 255 )
      {
        load_frames( &ses[0], ses->doc_view );
        process_file_requests( &ses[0] );
        tab->bits_at_40/*.1_1of4*/ &= 254;
      }
    }
    else
    {
      return;
    }
    break;
  case 1:
  case 2:
    if ( ses[0].next )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = ses->tab != get_tab_by_number( ses->tab->term, ses->tab->term->current_tab );
        if ( ses->tab != get_tab_by_number( ses->tab->term, ses->tab->term->current_tab ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/session.c";
          errline = 1308;
          elinks_internal( "assertion ses-&gt;tab == get_current_tab(ses-&gt;tab-&gt;term) failed!" );
        }
      }
      ev = &ev[0];
      tab = &ses[0].next[0];
    }
    else
  default:
    return;
    break;
  }
  tab = &ses[0].next[0];
}
unsigned char *get_current_url( struct session *ses, unsigned char *str, size_t str_size )
{
  int eax;
  struct uri *uri;
  int length;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( str_size == 0 ) | ( str[0] == 0 ) ) & 1;
    if ( ( ( str_size == 0 ) | ( str[0] == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/session.c";
      errline = 1325;
      elinks_internal( "assertion str && str_size &gt; 0 failed!" );
      if ( ses->history.current )
      {
        uri[0].string = (unsigned char*)ses->history.current->vs.uri;
        if ( ses->history.current->vs.uri )
        {
          str_size = ( length <= str_size - 1 ? str_size - 1 : length ) + 1;
          str = uri->string;
          ses = &str[0];
        }
        else
        {
          return 0;
        }
      }
      else
      {
        uri[0].string = (unsigned char*)ses->loading_uri;
        if ( ses->loading_uri )
        {
          str_size = ( length <= str_size - 1 ? str_size - 1 : length ) + 1;
          str = uri->string;
          ses = &str[0];
        }
        else
        {
          return 0;
        }
      }
    }
  }
  if ( ses->history.current )
  {
    uri[0].string = (unsigned char*)ses->history.current->vs.uri;
  }
  else
  {
    uri[0].string = (unsigned char*)ses->loading_uri;
  }
}
unsigned char *get_current_title( struct session *ses, unsigned char *str, size_t str_size )
{
  int eax;
  struct document_view *doc_view;
  current_frame( ses );
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( str_size == 0 ) | ( str[0] == 0 ) ) & 1;
    if ( ( ( str_size == 0 ) | ( str[0] == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/session.c";
      errline = 1350;
      elinks_internal( "assertion str && str_size &gt; 0 failed!" );
      *ebp_12 = current_frame( ses );
    }
  }
  if ( doc_view[0] && *(int*)(*(int*)(current_frame( ses ) + 20) + 188) )
  {
    str_size = str_size;
    ses = &str[0];
    str = *(int*)(*(int*)(current_frame( ses ) + 20) + 188);
  }
  return 0;
}
unsigned char *get_current_link_url( struct session *ses, unsigned char *str, size_t str_size )
{
  int edx;
  struct link *link;
  get_current_session_link( ses );
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( str_size == 0 ) | ( str[0] == 0 ) ) & 1;
    if ( ( ( str_size == 0 ) | ( str[0] == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/session.c";
      errline = 1370;
      elinks_internal( "assertion str && str_size &gt; 0 failed!" );
      if ( get_current_session_link( ses ) == 0 )
      {
        str_size = str_size;
        return &link[0].accesskey;
      }
      else
      {
        if ( link->where == 0 )
          link->where_img[0] = link->where_img;
        str_size = str_size;
        str = link->where_img;
        ses = &str[0];
      }
    }
  }
  if ( link[0].accesskey )
  {
  }
  else
  {
    return &link[0].accesskey;
  }
}
unsigned char *get_current_link_name( struct session *ses, unsigned char *str, size_t str_size )
{
  int eax;
  struct link *link = get_current_session_link( ses );
  unsigned char *where, *name;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( str_size == 0 ) | ( str[0] == 0 ) ) & 1;
    if ( ( ( str_size == 0 ) | ( str[0] == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/session.c";
      errline = 1387;
      elinks_internal( "assertion str && str_size &gt; 0 failed!" );
      if ( link[0].accesskey == 0 )
      {
        return 0;
      }
      else
      {
        where[0] = link->where;
        if ( link->where == 0 )
        {
          where[0] = link->where_img;
          if ( get_global_history_item( link->where_img ) == 0 )
          {
            if ( link->type <= 1 )
            {
              name[0] = link->data.name;
              if ( link->data.name == 0 )
                name[0] = where[0];
              ses = &str[0];
              str = &name[0];
              str_size = str_size;
            }
            else
              name[0] = where[0];
          }
        }
        else
        {
          struct global_history_item *item;
          if ( item[0].next == 0 )
            continue;
        }
        name[0] = name[16];
        if ( name[16] == 0 )
          continue;
      }
    }
  }
  if ( link[0].accesskey )
  {
    where[0] = link->where;
  }
  else
  {
    return 0;
  }
}
struct link *get_current_link_in_view( struct document_view *doc_view )
{
  int eax;
  return 0;
}
struct link *get_current_session_link( struct session *ses )
{
  int eax;
  return 0;
}
int eat_kbd_repeat_count( struct session *ses )
{
  int count = ses->kbdprefix.repeat_count;
  ses->kbdprefix.repeat_count = 0;
  print_screen_status( ses );
  return count;
}
#if 0
#endif
