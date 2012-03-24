#include "download.c.h"
struct list_head_elinks downloads = { &downloads, &downloads };
static struct SSS known_types[9] = { { "text/html", 0 }
, { "text/plain", 1 }
, { "application/xhtml+xml", 0 }
, { "application/docbook+xml", 1 }
, { "application/rss+xml", 0 }
, { "application/xbel+xml", 1 }
, { "application/xbel", 1 }
, { "application/x-xbel", 1 }
, { 0, 1 }
 };
int download_is_progressing( struct download *download )
{
  if ( download == 0 || download->state.basic != 8 )
  {
    return 0;
  }
  return has_progress( &download->progress->estimated_time.sec ) != 0;
}
int are_there_downloads( void )
{
  struct file_download *file_download;
  &file_download[0] = &downloads.next[0];
  if ( downloads.next != downloads.next )
  {
    do
    {
      if ( file_download->external_handler == 0 )
        break;
      &file_download[0] = &file_download;
    }
    while ( file_download->next != downloads.next );
  }
  return 0;
}
struct file_download *init_file_download( struct uri *uri, struct session *ses, unsigned char *file, int fd )
{
  struct file_download *file_download;
  if ( mem_calloc( 1, 116 ) )
  {
    file_download->uri = get_composed_uri( uri, URI_BASE );
    if ( file_download->uri == 0 )
    {
      &file_download[0] = 0;
      mem_free( (void*)file_download[0].next );
      return downloads.next + 4;
    }
    init_download_display( &file_download[0] );
    file_download->file = file;
    file_download->download.callback = &download_data;
    file_download->download.data = (void*)file_download[0].next;
    file_download->ses = &ses[0];
    file_download->handle = fd;
    file_download->term = ses->tab->term;
    file_download->prev = &downloads.next[0];
    &file_download = &downloads->next[0];
    downloads.next = (void*)file_download[0].next;
    file_download->prev = &file_download[0];
    return downloads.next + 4;
  }
  else
  {
    return downloads.next + 4;
  }
}
void abort_download( struct file_download *file_download )
{
  int eax;
  done_download_display( file_download );
  if ( file_download->ses )
    check_questions_queue( file_download->ses );
  if ( file_download->dlg_data )
    cancel_dialog( file_download->dlg_data, 0 );
  cancel_download( &file_download->download, ( (int)file_download->bits_at_104/*.1_1of4*/ >> 1 ) & 1 );
  if ( file_download->uri )
    done_uri( file_download->uri );
  if ( file_download->handle != -1 )
    close( file_download->handle );
{
  void *p = (void*)file_download->external_handler;
  if ( file_download->external_handler )
    mem_free( &((int*)p)[0] );
  if ( file_download->file )
  {
    if ( ( file_download->bits_at_104/*.1_1of4*/ & 1 ) & 255 )
    {
      unlink( (char*)file_download->file );
      file_download->file[0] = file_download->file;
    }
    mem_free( (void*)file_download->file );
    file_download->prev = file_download->prev;
    &file_download->prev = &file_download;
    file_download = &file_download;
  }
  else
  {
    file_download->prev = file_download->prev;
    &file_download->prev = &file_download;
    file_download = &file_download;
  }
}
}
void kill_downloads_to_file( unsigned char *file )
{
  struct file_download *file_download = &downloads->next[0];
  if ( downloads.next != downloads.next )
  {
    do
    {
      if ( strcmp( (char*)file_download->file, &file[0] ) == 0 )
      {
        file_download = file_download->prev;
        abort_download( (int)( &file_download ) );
        file_download = &file_download;
        if ( file_download->next != downloads.next )
          continue;
        else
          break;
      }
      else
      {
        file_download = &file_download;
      }
    }
    while ( file_download->next != downloads.next );
  }
  return;
}
void abort_all_downloads( void )
{
  if ( downloads.next != downloads.next )
  {
    do
    {
      abort_download( &downloads.next[0] );
    }
    while ( downloads.next == downloads.next );
  }
  return;
}
void destroy_downloads( struct session *ses )
{
  int edx;
  struct file_download *file_download, *next;
  struct session *s = &sessions.next[0];
  if ( sessions.next != sessions.next )
  {
    do
    {
      if ( ses[0].next != s[0].next && ses->tab->term == s->tab->term )
      {
        file_download = &downloads.next[0];
        if ( downloads.next != downloads.next )
        {
          do
          {
            if ( file_download->ses == ses[0].next )
            {
              file_download->ses = &s[0];
              file_download = &file_download;
              if ( file_download->next == downloads.next )
              {
                next = &next[0];
                break;
              }
            }
            else
            {
              file_download = &file_download;
            }
          }
          while ( file_download->next != downloads.next );
          break;
        }
        else
          break;
      }
      else
      {
        s = &s;
      }
    }
    while ( s->next != sessions.next );
  }
  file_download = &downloads.next[0];
  next = &downloads.next[0];
  if ( downloads.next != downloads.next )
  {
    for ( ; file_download->ses != ses[0].next; next = &s[0].next[0] )
    {
      next = &next;
      file_download = &next;
      if ( next->next == downloads.next )
        break;
      //next = &s[0].next[0];
    }
    if ( file_download->external_handler == 0 )
      file_download->ses = 0;
    else
    {
      abort_download( &file_download[0] );
    }
  }
  else
  {
    return;
  }
}
void detach_downloads_from_terminal( struct terminal *term )
{
  int edx;
  struct file_download *file_download, *next;
  if ( assert_failed == 0 )
  {
    assert_failed = term[0].next == 0;
    if ( !(_Bool)( term[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/download.c";
      errline = 227;
      elinks_internal( "assertion term != NULL failed!" );
      if ( assert_failed )
      {
        term = &term[0];
      }
    }
    file_download = &downloads.next[0];
    next = &downloads.next[0];
    if ( downloads.next != downloads.next )
    {
      while ( 1 )
      {
        if ( file_download->term == term[0].next )
        {
          if ( file_download->external_handler == 0 )
          {
            file_download->term = 0;
            if ( file_download->ses && term[0].next == file_download->ses->tab->term )
              file_download->ses = 0;
          }
          else
          {
            abort_download( &file_download[0] );
            next = &file_download;
            file_download = &next;
            if ( downloads->next == next[0].next )
              break;
            next = &next[0];
          }
        }
        next = &next;
        file_download = &next;
        if ( downloads->next == next[0].next )
          break;
        next = &next[0];
      }
    }
    return;
  }
  assert_failed = 0;
  return;
}
void download_error_dialog( struct file_download *file_download, int saved_errno )
{
  struct terminal *term;
  strerror( saved_errno );
  term = file_download->term;
  if ( file_download->ses )
  {
    info_box( &term[0], MSGBOX_FREE_TEXT, "Download error", ALIGN_CENTER );
  }
  return;
}
void abort_download_and_beep( struct file_download *file_download, struct terminal *term )
{
  if ( term[0] && file_download->notify + *(int*)(get_opt_( config_options, (unsigned char*)config_options )) > 1 )
    beep_terminal( &term[0] );
  abort_download( &file_download[0] );
  return;
}
void download_data_store( struct download *download, struct file_download *file_download )
{
  struct terminal *term = file_download->term;
  assert_terminal_ptr_not_dangling( file_download->term );
  if ( assert_failed )
  {
    assert_failed = 0;
    file_download->term = 0;
    abort_download( &file_download[0] );
    term = &term[0];
    return;
  }
  else
  {
    if ( term[0].next == 0 )
    {
      abort_download( &file_download[0] );
      term = &term[0];
      return;
    }
    else
    {
      if ( download->state.basic >= 0 )
      {
        if ( file_download->dlg_data )
        {
          redraw_dialog( file_download->dlg_data, 1 );
          return;
        }
        else
        {
          return;
        }
      }
      else
      {
        if ( file_download->dlg_data != -100000 )
        {
          unsigned char *url = get_uri_string( file_download->uri, URI_PUBLIC );
          struct connection_state state = download->state;
          state.syserr = download->state.syserr;
          abort_download_and_beep( &file_download[0], &term[0] );
          if ( url )
          {
            info_box( &term[0], MSGBOX_FREE_TEXT, "Download error", ALIGN_CENTER );
            mem_free( (void*)url );
            return;
          }
          else
          {
            return;
          }
        }
        else
        {
          if ( file_download->external_handler )
          {
            close( file_download->handle );
            file_download->handle = -1;
            exec_on_terminal( &term[0], file_download->external_handler, file_download->file, ( (int)file_download->bits_at_104/*.1_1of4*/ >> 2 ) & 1 );
            file_download->bits_at_104/*.1_1of4*/ &= 254;
            abort_download_and_beep( &file_download[0], &term[0] );
            return;
          }
          else
          {
            if ( file_download->notify )
            {
              unsigned char *url;
              url[0] = get_uri_string( file_download->uri, URI_PUBLIC );
              done_download_display( &file_download[0] );
              if ( url[0] )
              {
                info_box( &term[0], MSGBOX_FREE_TEXT, "Download", ALIGN_CENTER );
                mem_free( &url[0] );
              }
            }
            if ( file_download->remotetime && *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
            {
              struct utimbuf foo;
              foo.modtime = file_download->remotetime;
              foo.actime = file_download->remotetime;
              utime( (char*)file_download->file, &foo.actime );
            }
            abort_download_and_beep( &file_download[0], &term[0] );
            return;
          }
        }
      }
    }
  }
}
void download_data( struct download *download, struct file_download *file_download )
{
  int eax;
  int ecx;
  int edx;
  struct cache_entry *cached = download->cached;
  if ( download->cached && download->state.basic > 7 )
  {
    if ( cached->last_modified )
    {
      file_download->remotetime = parse_date( &cached->last_modified, 0, 0, 1 );
    }
    if ( cached->redirect )
    {
      file_download->redirect_cnt++;
      if ( file_download->redirect_cnt <= 9 )
      {
        cancel_download( &file_download->download, 0 );
        if ( assert_failed == 0 )
        {
          assert_failed = compare_uri( cached->uri, file_download->uri, 0 ) == 0;
          if ( !(_Bool)( compare_uri( cached->uri, file_download->uri, 0 ) != 0 ) )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/download.c";
            errline = 421;
            elinks_internal( "assertion compare_uri(cached-&gt;uri, file_download-&gt;uri, 0) failed: Redirecting using bad base URI" );
          }
        }
        done_uri( file_download->uri );
        cached->redirect->object.object = cached->redirect->object.refcount;
        file_download->uri = cached->redirect;
        if ( assert_failed == 0 )
          assert_failed = 0;
        else
          assert_failed = 0;
        file_download->download.state.basic = S_INTERNAL;
        file_download->download.state.syserr = 0;
        if ( file_download->dlg_data )
          redraw_dialog( file_download->dlg_data, 1 );
        load_uri( file_download->uri, cached->uri, &file_download->download, PRI_MAIN, CACHE_MODE_NORMAL, download->progress->start );
        return;
      }
    }
    if ( file_download->download.progress && file_download->download.progress->seek )
    {
      file_download->seek = file_download->download.progress->seek;
      file_download->download.progress->seek = (long long)0;
      lseek64( file_download->handle, file_download->seek, 0 );
      if ( lseek64( file_download->handle, file_download->seek, 0 ) < 0 )
      {
        download_error_dialog( &file_download[0], *(int*)(__errno_location(  )) );
        detach_connection( download, file_download->seek );
        download = &file_download[0].next[0];
      }
    }
    if ( cached->frag.next != cached->frag.next )
    {
      do
      {
        if ( (unsigned int)(file_download->seek << 32) - cached->frag.list_head_elinks - ( ( (unsigned int)(file_download->seek & 0xFFFFFFFF) < *(int*)(cached->frag.next + 8) ) & 1 ) >= 0 && ( (unsigned int)(file_download->seek << 32) + ( file_download->download.progress >> 31 ) + ( ( (unsigned int)(file_download->seek & 0xFFFFFFFF) + (unsigned int)(file_download->seek & 0xFFFFFFFF) + file_download->download.progress < (unsigned int)(file_download->seek & 0xFFFFFFFF) + file_download->download.progress ) & 1 ) ) - *(int*)(cached->frag.next + 12) - ( ( (unsigned int)(file_download->seek & 0xFFFFFFFF) + file_download->download.progress < *(int*)(cached->frag.next + 8) ) & 1 ) <= cached->frag.list_head_elinks && ( ccdep1 < ccdep2 || eax < ecx ) )
        {
          do
          {
            if ( eax == -1 )
            {
            }
            else
              file_download->seek += eax;
              if ( file_download->handle + 12 != cached->frag.next[0] )
              {
                do
                {
                }
                while ( file_download->handle + 12 != cached->frag.next[0] );
                detach_connection( download, file_download->seek + __errno_location(  ) );
              }
              else
                detach_connection( download, file_download->seek + __errno_location(  ) );
          }
          while ( *(int*)(__errno_location(  )) != 4 );
          download_error_dialog( &file_download[0] );
          detach_connection( download, file_download->seek );
          download = &file_download[0].next[0];
        }
        else
        {
        }
      }
      while ( file_download->handle + 12 != cached->frag.next[0] );
      detach_connection( download, file_download->seek + __errno_location(  ) );
    }
    else
    {
      detach_connection( download, file_download->seek + __errno_location(  ) );
    }
  }
  else
  {
  }
}
void lun_alternate( void *lun_hop_ )
{
  struct lun_hop *lun_hop;
  lun_hop->callback( lun_hop->term, lun_hop->file, lun_hop->data, 0 );
{
  void *p = (void*)lun_hop->ofile;
  if ( lun_hop->ofile )
    mem_free( &((int*)p)[0] );
  lun_hop_ = (void*)lun_hop[0].term;
}
}
void lun_cancel( void *lun_hop_ )
{
  struct lun_hop *lun_hop;
  lun_hop->callback( lun_hop->term, 0, lun_hop->data, 0 );
{
  void *p = (void*)lun_hop->ofile;
  if ( lun_hop->ofile )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)lun_hop->file;
  if ( lun_hop->file )
    mem_free( &((int*)p)[0] );
  lun_hop_ = (void*)lun_hop[0].term;
}
}
}
void lun_overwrite( void *lun_hop_ )
{
  struct lun_hop *lun_hop;
  lun_hop->callback( lun_hop->term, lun_hop->ofile, lun_hop->data, 0 );
{
  void *p = (void*)lun_hop->file;
  if ( lun_hop->file )
    mem_free( &((int*)p)[0] );
  lun_hop_ = (void*)lun_hop[0].term;
}
}
void lun_resume( void *lun_hop_ )
{
  int eax;
  struct lun_hop *lun_hop;
  struct cdf_hop *cdf_hop = &((int*)lun_hop_)[4];
  *(int*)(lun_hop->data) = ((int*)lun_hop_)[4];
  if ( *(int*)(cdf_hop->data) == 1 )
  {
    struct cmdw_hop *cmdw_hop;
    if ( mem_calloc( 1, 12 ) == 0 )
    {
      lun_hop_ = (void*)lun_hop[0].term;
    }
  {
    struct codw_hop *codw_hop = &cdf_hop->data[0];
    struct type_query *type_query = &cdf_hop->data[1];
    cmdw_hop->magic = 0;
    cmdw_hop->ses = &cdf_hop->data[1];
    cdf_hop->data[1] = cdf_hop->data[1];
    cdf_hop->data[1]++;
    if ( type_query->external_handler && codw_hop->file )
    {
      mem_free( &((int*)p)[0] );
      type_query = &type_query[0];
    }
    tp_cancel( (void*)type_query[0].next );
    mem_free( (void*)codw_hop );
    cdf_hop = &cmdw_hop->real_file[0];
    cdf_hop->data = &cmdw_hop[0].magic;
    cdf_hop->callback = &common_download_do;
    *(int*)(lun_hop->data) = lun_hop->data;
  }
  }
  lun_hop->callback( lun_hop->term, lun_hop->ofile, lun_hop->data, 1 );
{
  void *p = (void*)lun_hop->file;
  if ( lun_hop->file )
    mem_free( &((int*)p)[0] );
  lun_hop_ = (void*)lun_hop[0].term;
}
}
void create_download_file_do( struct terminal *term, unsigned char *file, void *data, int resume )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *wd;
  int h = -1;
  int saved_errno;
  int sf = ((int*)data)[1];
  if ( file )
  {
    wd = get_cwd(  );
    set_cwd( term + 72 );
    mkalldirs( &file[0] );
    if ( resume == 0 )
    {
    }
    h = open64( &file[0], ( ( 0 - ( ( ( ( sf != 0 ) & 255 ) < ( 1 & 255 ) ) & 1 ) ) & -128 ) + 705, ( ( 0 - ( ( sf < 1 ) & 1 ) ) & 54 ) + 384 );
    saved_errno = *(int*)(__errno_location(  ));
    if ( wd )
    {
      set_cwd( wd );
      mem_free( (void*)wd );
    }
    if ( h == -1 )
    {
      info_box( term, MSGBOX_FREE_TEXT, "Download error", ALIGN_CENTER, msg_text( term, "Could not create file '%s':\n%s" ) );
      mem_free( &file[0] );
      ((int*)data)[2]( term, h, ((int*)data)[3], resume );
      term = &((int*)data)[0];
    }
    else
    {
      set_bin( h );
      if ( ((int*)data)[1] == 0 )
      {
        unsigned char *download_dir;
        int i;
        wd = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
        safe_strncpy( *(int*)(get_opt_( config_options, (unsigned char*)config_options )), &file[0], 1024 );
        saved_errno = strlen( (char*)wd );
        if ( saved_errno >= 0 && *(char*)(wd + saved_errno) != '/' )
        {
          do
          {
            i--;
            if ( i - 1 == -1 )
            {
              h = h;
              saved_errno = -1;
            }
            else
          }
          while ( *(char*)(edx - 1) != '/' );
          saved_errno = i - 1;
          h = h;
        }
        wd[ saved_errno + 1 ] = 0;
      }
      if ( ((int*)data)[0] )
        *(int*)(((int*)data)[0]) = file[0];
      else
      {
        file[0] = file[0];
        mem_free( &file[0] );
      }
    }
  }
}
void create_download_file( struct terminal *term, unsigned char *fi, unsigned char **real_file, int safe, int resume, void (*callback)( struct terminal *, int , void *, int  ), void *data )
{
  int ecx;
  int edx;
  unsigned char *wd;
  if ( mem_calloc( 1, 16 ) == 0 )
  {
    safe = 0;
    real_file = ((int*)data)[0];
    fi = -1;
    term = &term[0];
    ;
  }
  *(int*)(mem_calloc( 1, 16 )) = real_file[0][0];
  *(int*)(mem_calloc( 1, 16 ) + 4) = safe;
  *(int*)(mem_calloc( 1, 16 ) + 12) = ((int*)data)[0];
  *(int*)(mem_calloc( 1, 16 ) + 8) = callback[0];
  wd[0] = get_cwd(  );
  set_cwd( &term->cwd[0] );
  eax = (struct dialog_data*)expand_tilde( fi );
  if ( resume )
  {
    create_download_file_do( &term[0], expand_tilde( fi ), mem_calloc( 1, 16 ), resume );
    if ( wd[0] )
    {
      set_cwd( &wd[0] );
      term = &wd[0];
    }
    return;
  }
  else
  {
    *ebp_48 = ebp_48;
    if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 )
      create_download_file_do( &term[0], &edx, &ebx, 0 );
    else
    {
      *ebp_48 = ebp_48;
      if ( eax )
      {
        info_box( &term[0], MSGBOX_FREE_TEXT, "Download error", ALIGN_CENTER );
      }
      else
      {
        *ebp_48 = ebp_48;
        if ( eax && ecx != 1 )
        {
          if ( edx != eax )
          {
            *ebp_48 = ebp_48;
            if ( mem_calloc( 1, 20 ) == 0 )
              mem_free( ebp_28 );
            else
            {
              *(int*)(mem_calloc( 1, 20 )) = term[0];
              *(int*)(mem_calloc( 1, 20 ) + 4) = edx;
              *(int*)(mem_calloc( 1, 20 ) + 16) = mem_calloc( 1, 16 );
              *(int*)(mem_calloc( 1, 20 ) + 12) = create_download_file_do;
              *(int*)(mem_calloc( 1, 20 ) + 8) = ebp_28;
              msg_box( &term[0], 0, MSGBOX_FREE_TEXT, "File exists", ALIGN_CENTER, msg_text( &term[0], "This file already exists:\n%s\n\nThe alternative filename is:\n%s" ), mem_calloc( 1, 20 ), 4 );
            }
          }
        }
        else
        if ( ebp_28 != edx )
          mem_free( &edx );
        create_download_file_do( &term[0], ebp_28, &ebx, 0 );
      }
      mem_free( ebp_48 );
      create_download_file_do( &term[0], 0, mem_calloc( 1, 16 ), 0 );
    }
    if ( wd[0] )
    {
      set_cwd( &wd[0] );
      term = &wd[0];
    }
    return;
  }
}
unsigned char *subst_file( unsigned char *prog, unsigned char *file )
{
  int ecx;
  struct string name;
  int input = 1;
  if ( init_string( &name ) )
  {
    while ( prog[0] )
    {
      do
      {
        if ( prog[0] != '%' )
        {
          do
          {
            prog[0] += 0 + 1 + 1;
          }
          while ( prog[0] != '%' && ( prog[0] & 255 ) );
        }
        if ( assert_failed == 0 )
        {
          if ( 0 + 1 >= 0 )
            assert_failed = 0;
          else
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
            errline = 255;
            elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
            if ( assert_failed )
            {
            }
          }
          if ( 0 + 1 )
          {
            name.length = name.length + 255;
            if ( 0 < 0 )
            {
              *ebp_56 = 0;
              if ( mem_realloc( (void*)name.source, 0 ) )
              {
                name.source = (unsigned char*)mem_realloc( (void*)name.source, 0 );
                memset( &name.source[0], 0, 0 - 0 );
              }
            }
            if ( name.source )
            {
              memcpy( name.length + name.source, &prog[0], name.source[1] );
              name.source[ name.length + 0 + 1 ] = 0;
              name.length += 0 + 1;
            }
          }
          if ( prog[0] == '%' )
          {
            prog[0] = prog[0] + 1;
            add_shell_quoted_to_string( &name, &file[0], strlen( &file[0] ) );
            input = 0;
            break;
          {
            while ( prog[0] )
            {
              do
              {
              }
              while ( prog[0] & 255 );
              break;
            }
            break;
          }
          }
          else
          {
          }
        }
        assert_failed = 0;
        if ( prog[0] == '%' )
        {
          prog[0] = prog[0] + 1;
          add_shell_quoted_to_string( &name, &file[0], strlen( &file[0] ) );
          input = 0;
          break;
        {
          while ( prog[0] )
          {
            do
            {
            }
            while ( prog[0] & 255 );
            break;
          }
          break;
        }
        }
        else
        {
        }
      }
      while ( prog[0] & 255 );
      break;
    }
    if ( input && init_string( &s ) )
    {
      add_to_string( &prog[0], "/bin/cat " );
      add_shell_quoted_to_string( &prog[0], &file[0], ~strlen( &file[0] ) - 1 );
      add_to_string( &prog[0], " | " );
      add_string_to_string( &prog[0], &name );
      done_string( &name );
      return s.source;
    }
    return s.source;
  }
  else
  {
    return s.source;
  }
}
void common_download_do( struct terminal *term, int fd, void *data, int resume )
{
  struct file_download *file_download;
  unsigned char *file;
  struct session *ses;
  struct stat buf;
  file[0] = ((int*)data)[2];
  ses = &((int*)data)[1];
  mem_free( data );
  if ( file[0] && !__fxstat64( 3, fd, &buf.st_dev ) && init_file_download( ses->download_uri, &ses[0], &file[0], fd ) )
  {
    if ( resume )
      file_download->seek = buf.st_size;
    display_download( ses->tab->term, &file_download[0], &ses[0] );
    load_uri( file_download->uri, ses->referrer, &file_download->download, PRI_MAIN, CACHE_MODE_NORMAL, file_download->seek );
    return;
  }
  else
  {
    return;
  }
}
void common_download( struct session *ses, unsigned char *file, int resume )
{
  if ( ses->download_uri && mem_calloc( 1, 12 ) )
  {
    *(int*)(mem_calloc( 1, 12 ) + 4) = ses[0];
    *(int*)(mem_calloc( 1, 12 )) = 0;
    kill_downloads_to_file( &file[0] );
    create_download_file( ses->tab->term, &file[0], mem_calloc( 1, 12 ) + 8, 0, resume, &common_download_do, mem_calloc( 1, 12 ) );
  }
  return;
}
void start_download( void *ses, unsigned char *file )
{
  int eax;
  int edx;
}
void resume_download( void *ses, unsigned char *file )
{
  int eax;
  int edx;
}
void continue_download_do( struct terminal *term, int fd, void *data, int resume )
{
  int edx;
  struct codw_hop *codw_hop;
  struct file_download *file_download;
  struct type_query *type_query;
  if ( assert_failed == 0 )
  {
    assert_failed = codw_hop[0].magic == 0;
    if ( !(_Bool)( codw_hop[0].magic != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/download.c";
      errline = 889;
      elinks_internal( "assertion codw_hop failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    assert_failed = codw_hop->type_query == 0;
    if ( !(_Bool)( codw_hop->type_query != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/download.c";
      errline = 890;
      elinks_internal( "assertion codw_hop-&gt;type_query failed!" );
      if ( assert_failed == 0 )
        goto B5;
    }
B5:    assert_failed = codw_hop->type_query->uri == 0;
    if ( !(_Bool)( codw_hop->type_query->uri != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/download.c";
      errline = 891;
      elinks_internal( "assertion codw_hop-&gt;type_query-&gt;uri failed!" );
      if ( assert_failed == 0 )
        goto B7;
    }
B7:    assert_failed = codw_hop->type_query->ses == 0;
    if ( !(_Bool)( codw_hop->type_query->ses != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/download.c";
      errline = 892;
      elinks_internal( "assertion codw_hop-&gt;type_query-&gt;ses failed!" );
    }
  }
  type_query = codw_hop->type_query;
  if ( codw_hop->real_file && init_file_download( type_query->uri, type_query->ses, codw_hop->real_file, fd ) )
  {
    if ( type_query->external_handler )
    {
      file_download->bits_at_104/*.1_1of4*/ |= 1;
      file_download->external_handler = subst_file(  );
      mem_free( (void*)codw_hop->file );
      if ( type_query->external_handler )
        mem_free( (void*)type_query->external_handler );
      type_query->external_handler = 0;
    }
    file_download->bits_at_104/*.1_1of4*/ = ( *(char*)(file_download[0].next + 104) & -5 ) | ( ( type_query->block != 0 ) << 2 );
    display_download( term, &file_download[0], type_query->ses );
    move_download( &type_query->download, &file_download->download, PRI_MAIN );
    done_type_query( &type_query[0] );
    term = &codw_hop[0].magic;
  }
  else
  {
    if ( type_query->external_handler && codw_hop->file )
      mem_free( &((int*)p)[0] );
    tp_cancel( (void*)type_query[0].next );
    term = &codw_hop[0].magic;
  }
}
void continue_download( void *data, unsigned char *file )
{
  struct codw_hop *codw_hop;
  if ( mem_calloc( 1, 16 ) )
  {
    if ( ((int*)data)[18] )
    {
      if ( tempnam( 0, "elinks" ) )
      {
        if ( init_string( ebp_32 ) == 0 )
          free( codw_hop->file );
        else
        {
          add_to_string( ebp_32, (unsigned char*)tempnam( 0, "elinks" ) );
          free( tempnam( 0, "elinks" ) );
          if ( get_extension_from_uri( &((int*)data)[16] ) )
          {
            add_shell_safe_to_string( ebp_32, get_extension_from_uri( &((int*)data)[16] ), strlen( (char*)get_extension_from_uri( &((int*)data)[16] ) ) );
            mem_free( (void*)get_extension_from_uri( &((int*)data)[16] ) );
          }
          file[0] = ebp_32;
          if ( ebp_32 == 0 )
            goto B9;
        }
      }
B9:      mem_free( &codw_hop[0].magic );
    }
    codw_hop->type_query = &((int*)data)[0];
    codw_hop->file = &file[0];
    codw_hop->magic = 1;
    kill_downloads_to_file( &file[0] );
    create_download_file( &((int*)data)[15], &file[0], &codw_hop->real_file, ((int*)data)[18] != 0, 0, &continue_download_do, &codw_hop[0].magic );
    return;
  }
  tp_cancel( &((int*)data)[0] );
  return;
}
void done_type_query( struct type_query *type_query )
{
  cancel_download( &type_query->download, 0 );
  type_query->cached->object.object--;
  done_uri( type_query->uri );
{
  void *p = (void*)type_query->external_handler;
  if ( type_query->external_handler )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)type_query->target_frame;
  if ( type_query->target_frame )
    mem_free( &((int*)p)[0] );
  type_query->prev = type_query->prev;
  &type_query->prev = &type_query;
  type_query = &type_query;
}
}
}
void tp_cancel( void *data )
{
  cancel_download( &((int*)data), 1 );
  data = data;
}
void tp_save( struct type_query *type_query )
{
  if ( type_query->external_handler )
    mem_free( (void*)type_query->external_handler );
  type_query->external_handler = 0;
  query_file( type_query->ses, type_query->uri, (void*)type_query[0].next, &continue_download, &tp_cancel, 1 );
  return;
}
widget_handler_status_T tp_show_header( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  struct type_query *type_query;
  cached_header_dialog( &widget_data->box.y, &widget_data->box.y );
  return 0;
}
void tp_display( struct type_query *type_query )
{
  int edx;
  struct view_state *vs;
  struct session *ses = type_query->ses;
  struct uri *loading_uri = type_query->ses->loading_uri;
  unsigned char *target_frame;
  type_query->ses->loading_uri = type_query->uri;
  target_frame[0] = type_query->ses->task.target.frame;
  type_query->ses->task.target.frame = type_query->target_frame;
  if ( vs[0].doc_view )
    vs->plain = 1;
  ses->loading_uri = ses->loading_uri;
  ses->task.target.frame = &target_frame[0];
  ses->history.current->download.data = (void*)ses[0].next;
  ses->history.current->download.callback = &doc_loading_callback;
  move_download( &type_query->download, &ses->history.current->download, PRI_MAIN );
  display_timer( &ses[0] );
  type_query = &type_query[0];
}
void tp_open( struct type_query *type_query )
{
  int eax;
  int edx;
  if ( type_query->external_handler == 0 || type_query->external_handler[0] == 0 )
  {
    type_query = &type_query[0];
  }
  if ( type_query->uri->protocol == 4 && ( ( type_query->bits_at_80/*.1_1of4*/ & 1 ) & 255 ) == 0 )
  {
    unsigned char *file;
    unsigned char *handler;
    if ( get_uri_string( type_query->uri, URI_PATH ) )
    {
      decode_uri( get_uri_string( type_query->uri, URI_PATH ) );
      handler[0] = subst_file( type_query->external_handler, &file[0] );
      mem_free( &file[0] );
      if ( handler[0] )
      {
        exec_on_terminal( type_query->ses->tab->term, &handler[0], "", type_query->block != 0 );
        mem_free( &handler[0] );
      }
    }
    type_query = &type_query[0];
  }
  else
  {
    continue_download( (void*)type_query[0].next, "" );
    return;
  }
}
int setup_download_handler( struct session *ses, struct download *loading, struct cache_entry *cached, int frame )
{
  int eax;
  int edx;
  struct mime_handler *handler;
  struct view_state *vs;
  struct type_query *type_query;
  unsigned char *ctype;
  int plaintext;
  int ret;
  int i;
  if ( get_content_type( cached ) && *(char*)(get_content_type( cached )) )
  {
    if ( "text/html" )
    {
      i = 0;
      type_query = &cached[0].next[0];
      i = 0;
      do
      {
        if ( c_strcasecmp( &ctype[0], (char*)known_types[ i + 1 ].type ) == 0 )
          plaintext = (int)known_types[ plaintext ].bits_at_4/*.1_1of4*/ & 1;
          frame = frame;
          vs = ses_forward( &ses[0], frame );
          ret = 0;
          if ( ret )
          {
            vs->plain = plaintext;
            break;
          }
        else
        {
          i++;
        }
      }
      while ( known_types[ i + 1 ].type );
      cached = &type_query->next;
    }
    handler = get_mime_type_handler( ses->tab->term->environment & 2, ctype[0] );
    if ( handler || strlen( &ctype[0] ) <= 3 || c_strncasecmp( &ctype[0], "text", 4 ) )
    {
      if ( ses->type_queries.next != ses->type_queries.next )
      {
        type_query = &ctype[0];
        do
        {
          if ( eax )
            ret = 0;
            if ( handler )
            {
              mem_free( (void*)handler );
              *ebp_68 = ret;
              break;
            }
            else
              break;
          else
        }
        while ( ses->type_queries.next[0] != ses->type_queries.next );
        ebx = i;
        cached = &cached[0];
        ctype[0] = type_query;
      }
      type_query = (struct type_query*)mem_calloc( 1, 84 );
      if ( type_query )
      {
        ses->loading_uri->object.object = ses->loading_uri->object.refcount;
        type_query->uri = ses->loading_uri;
        type_query->ses = &ses[0];
        if ( ses->task.target.frame )
        {
          stracpy( ses->task.target.frame );
          *ebp_68 = ebp_68;
        }
        type_query->target_frame = stracpy( ses->task.target.frame );
        type_query->cached = &cached[0];
        type_query->bits_at_80/*.1_1of4*/ = ( (int)type_query->bits_at_80/*.1_1of4*/ & -2 ) | ( ( (int)cached->bits_at_92/*.1_1of4*/ >> 6 ) & 1 );
        cached->object.refcount = cached->object.refcount;
        move_download( loading, &type_query->download, PRI_MAIN );
        if ( assert_failed == 0 )
          assert_failed = 0;
        else
          assert_failed = 0;
        loading->state.basic = S_INTERNAL;
        loading->state.syserr = 0;
        type_query->prev = &edx;
        &type_query[0] = &edx;
        edx = type_query;
        type_query->prev = type_query;
        if ( type_query->external_handler )
          mem_free( (void*)type_query->external_handler );
        type_query->external_handler = 0;
        if ( handler )
        {
          type_query->block = ( (int)handler->bits_at_8/*.1_1of4*/ >> 1 ) & 1;
          if ( ( ( handler->bits_at_8/*.1_1of4*/ & 1 ) & 255 ) == 0 )
          {
            type_query->external_handler = stracpy( handler + 9 );
            tp_open( type_query );
            ret = 1;
            mem_free( (void*)handler );
            *ebp_68 = ret;
            return ebp_68;
          }
          else
          {
          }
        }
        else
        {
        }
        if ( mem_calloc( 1, 2468 ) )
        {
          if ( init_string( ebp_32 ) )
          {
            add_mime_filename_to_string( ebp_32, type_query->uri );
            if ( ( *(char*)(type_query->ses->tab->term + 56) & 2 ) & 255 )
              decode_uri_string( ebp_32 );
            else
              decode_uri_string_for_display( ebp_32 );
          }
          if ( ebp_28 )
          {
            if ( 0 != 87 )
            {
              if ( type_query->ses->tab->term && current_charset != get_terminal_codepage( type_query->ses->tab->term ) )
              {
                bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( type_query->ses->tab->term ) ) );
                current_charset = get_terminal_codepage( type_query->ses->tab->term );
              }
              gettext( "What would you like to do with the file '%s' (type: %s%s%s)?" );
            }
            __snprintf_chk( mem_calloc( 1, 2468 ) + 420, 1024, 1, -1, (char*)gettext( "What would you like to do with the file '%s' (type: %s%s%s)?" ), ebp_32, ctype[0], handler->description != 0 ? "" : "; ", handler[0].description );
          }
          else
          {
            if ( 0 != 87 )
            {
              if ( type_query->ses->tab->term && current_charset != get_terminal_codepage( type_query->ses->tab->term ) )
              {
                bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( type_query->ses->tab->term ) ) );
                current_charset = get_terminal_codepage( type_query->ses->tab->term );
              }
              gettext( "What would you like to do with the file (type: %s%s%s)?" );
            }
            __snprintf_chk( mem_calloc( 1, 2468 ) + 420, 1024, 1, -1, (char*)gettext( "What would you like to do with the file (type: %s%s%s)?" ), ctype[0], handler->description != 0 ? "" : "; ", handler[0].description );
          }
          done_string( ebp_32 );
          if ( 'W' )
          {
            if ( type_query->ses->tab->term && current_charset != get_terminal_codepage( type_query->ses->tab->term ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( type_query->ses->tab->term ) ) );
              current_charset = get_terminal_codepage( type_query->ses->tab->term );
            }
          }
          *(char*)(mem_calloc( 1, 2468 ) + 28) |= 6;
          *(int*)(mem_calloc( 1, 2468 ) + 16) = generic_dialog_layouter;
          *(int*)(mem_calloc( 1, 2468 )) = ebp_56;
          *(int*)(mem_calloc( 1, 2468 ) + 8) = type_query->next;
          add_dlg_text( (struct dialog*)mem_calloc( 1, 2468 ), mem_calloc( 1, 2468 ) + 420, ALIGN_LEFT, 0 );
          if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
          {
            if ( mem_calloc( 1, 1024 ) )
            {
              if ( handler )
                safe_strncpy( (unsigned char*)mem_calloc( 1, 1024 ), handler + 9, 1024 );
              if ( 0 != 80 )
              {
                if ( type_query->ses->tab->term && current_charset != get_terminal_codepage( type_query->ses->tab->term ) )
                {
                  bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( type_query->ses->tab->term ) ) );
                  current_charset = get_terminal_codepage( type_query->ses->tab->term );
                }
                gettext( "Program ('%' will be replaced by the filename)" );
              }
              add_dlg_field_do( (struct dialog*)mem_calloc( 1, 2468 ), WIDGET_FIELD, gettext( "Program ('%' will be replaced by the filename)" ), 0, 0, 0, 1024, mem_calloc( 1, 1024 ), 0, INPFIELD_NONE );
              type_query->external_handler = (unsigned char*)mem_calloc( 1, 1024 );
              if ( 0 != 66 )
              {
                if ( type_query->ses->tab->term && current_charset != get_terminal_codepage( type_query->ses->tab->term ) )
                {
                  bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( type_query->ses->tab->term ) ) );
                  current_charset = get_terminal_codepage( type_query->ses->tab->term );
                }
                gettext( "Block the terminal" );
              }
              add_dlg_radio_do( (struct dialog*)mem_calloc( 1, 2468 ), gettext( "Block the terminal" ), 0, 0, &type_query->block );
            }
            else
            {
              mem_free( mem_calloc( 1, 2468 ) );
              ret = 1;
            }
          }
          else
          {
            if ( handler )
            {
              if ( 0 != 84 )
              {
                if ( type_query->ses->tab->term && current_charset != get_terminal_codepage( type_query->ses->tab->term ) )
                {
                  bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( type_query->ses->tab->term ) ) );
                  current_charset = get_terminal_codepage( type_query->ses->tab->term );
                }
                gettext( "The file will be opened with the program '%s'." );
              }
              __snprintf_chk( ebp_44, 1024, 1, -1, (char*)eax, handler + 9 );
              add_dlg_text( &esi, ebp_44, ALIGN_LEFT, 0 );
              type_query->external_handler = stracpy( handler + 9 );
              if ( type_query->external_handler == 0 )
                mem_free( mem_calloc( 1, 2468 ) );
                ret = 1;
                mem_free( (void*)handler );
                *ebp_68 = ret;
                return ebp_68;
            }
            else
            {
            }
          }
          if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 || handler )
          {
            if ( 0 != 126 )
            {
              if ( type_query->ses->tab->term && current_charset != get_terminal_codepage( type_query->ses->tab->term ) )
              {
                bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( type_query->ses->tab->term ) ) );
                current_charset = get_terminal_codepage( type_query->ses->tab->term );
              }
              gettext( "~Open" );
            }
            add_dlg_button_do( (struct dialog*)mem_calloc( 1, 2468 ), gettext( "~Open" ), 1, &ok_dialog, 0, &tp_open, (void*)type_query );
          }
          else
          {
          }
          if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
          {
            if ( 0 != 83 )
            {
              if ( type_query->ses->tab->term && current_charset != get_terminal_codepage( type_query->ses->tab->term ) )
              {
                bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( type_query->ses->tab->term ) ) );
                current_charset = get_terminal_codepage( type_query->ses->tab->term );
              }
              gettext( "Sa~ve" );
            }
            add_dlg_button_do( (struct dialog*)mem_calloc( 1, 2468 ), gettext( "Sa~ve" ), 1, &ok_dialog, 0, &tp_save, (void*)type_query );
          }
          else
          {
          }
          if ( 0 != 126 )
          {
            if ( type_query->ses->tab->term && current_charset != get_terminal_codepage( type_query->ses->tab->term ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( type_query->ses->tab->term ) ) );
              current_charset = get_terminal_codepage( type_query->ses->tab->term );
            }
            gettext( "~Display" );
          }
          add_dlg_button_do( (struct dialog*)mem_calloc( 1, 2468 ), gettext( "~Display" ), 1, &ok_dialog, 0, &tp_display, (void*)type_query );
          if ( type_query->cached && type_query->cached->head )
          {
            if ( 0 != 83 )
            {
              if ( type_query->ses->tab->term && current_charset != get_terminal_codepage( type_query->ses->tab->term ) )
              {
                bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( type_query->ses->tab->term ) ) );
                current_charset = get_terminal_codepage( type_query->ses->tab->term );
              }
              gettext( "Show ~header" );
            }
            add_dlg_button_do( (struct dialog*)mem_calloc( 1, 2468 ), gettext( "Show ~header" ), 1, &tp_show_header, (void*)type_query, 0, 0 );
          }
          else
          {
          }
          if ( 0 != 126 )
          {
            if ( type_query->ses->tab->term && current_charset != get_terminal_codepage( type_query->ses->tab->term ) )
            {
              bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( type_query->ses->tab->term ) ) );
              current_charset = get_terminal_codepage( type_query->ses->tab->term );
            }
            gettext( "~Cancel" );
          }
          add_dlg_button_do( (struct dialog*)mem_calloc( 1, 2468 ), gettext( "~Cancel" ), 2, &ok_dialog, 0, &tp_cancel, (void*)type_query );
          if ( assert_failed == 0 )
          {
            assert_failed = 7 != *(int*)(mem_calloc( 1, 2468 ) + 32);
            if ( ebx != *(int*)(esi + 32) )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/session/download.c";
              errline = 1248;
              elinks_internal( "assertion widgets == (dlg)-&gt;number_of_widgets failed!" );
            }
          }
          if ( getml( mem_calloc( 1, 2468 ) ) == 0 )
          {
            mem_free( mem_calloc( 1, 2468 ) );
            ret = 1;
          }
          else
          {
            if ( eax )
            {
              select_widget_by_id( &eax[0], ebp_44 );
              ret = 1;
            }
          }
        }
        ret = 1;
      }
      else
        ret = 0;
    }
  }
  plaintext = 1;
  frame = frame;
  vs = ses_forward( &ses[0], frame );
  ret = 0;
}
#if 0
#endif
