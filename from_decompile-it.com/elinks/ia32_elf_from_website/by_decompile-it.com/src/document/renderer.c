#include "renderer.c.h"
void render_document( struct view_state *vs, struct document_view *doc_view, struct document_options *options )
{
  int eax;
  int edx;
  unsigned char *name;
  struct document *document;
  struct cache_entry *cached;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && vs[0] && options )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/renderer.c";
      errline = 281;
      elinks_internal( "assertion vs && doc_view && options failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    name[0] = doc_view->name;
    doc_view->name = 0;
    detach_formatted( &doc_view[0] );
    doc_view->name = &name[0];
    doc_view->vs = &vs[0];
    doc_view->last_y = -1;
    doc_view->last_x = -1;
    if ( vs->doc_view )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = vs[0].doc_view != *(int*)(vs->doc_view + 24);
        if ( vs->x != vs[0].doc_view )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/renderer.c";
          errline = 313;
          elinks_internal( "assertion vs-&gt;doc_view-&gt;vs == vs failed!" );
        }
        vs->doc_view = vs->doc_view;
      }
      vs->view_state = 0;
      vs->x = 0;
      vs = 0;
    }
    vs = &doc_view[0].next[0];
    if ( find_in_cache( vs->uri ) == 0 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/renderer.c";
      errline = 326;
      elinks_internal( "document %s to format not found" );
      return;
    }
    else
    {
      if ( get_cached_document( &cached[0], options ) )
        doc_view->document = get_cached_document( &cached[0], options );
      else
      {
        document = &eax;
        if ( eax )
        {
          doc_view->document = &eax;
          if ( doc_view->session && doc_view->session->reloadlevel > 1 && vs->form_info_len >= 1 )
          {
            cached = &cached[0];
            vs = &vs[0];
            do
            {
              done_form_state( &vs->form_info );
            }
            while ( vs->form_info_len - 1 < 1 );
            cached = &cached[0];
            doc_view = &doc_view[0];
          }
          shrink_memory( 0 );
          if ( cached->uri->protocol != 4 )
          {
            if ( get_extension_from_uri( cached->uri ) )
            {
              mem_free( ebp_52 );
              if ( esi )
              {
                if ( eax )
                {
                  if ( ( document->options.bits_at_68/*.2_2of4*/ & 64 ) & 255 )
                  {
                    if ( cached->content_type == 0 || ( eax && c_strcasecmp( "application/xhtml+xml", (char*)cached->content_type ) && c_strcasecmp( "application/docbook+xml", (char*)cached->content_type ) && c_strcasecmp( "application/rss+xml", (char*)cached->content_type ) && c_strcasecmp( "application/xbel+xml", (char*)cached->content_type ) && c_strcasecmp( "application/x-xbel", (char*)cached->content_type ) && c_strcasecmp( "application/xbel", (char*)cached->content_type ) ) )
                    {
                      render_plain_document( &cached[0], &document[0], ebp_36 );
                      if ( esi )
                        done_string( ebp_36 );
                      sort_links( &document[0] );
                      if ( document->title == 0 )
                      {
                        enum uri_component  components = document->uri->protocol == 4 ? URI_PUBLIC : URI_PATH;
                        document->title = get_uri_string( document->uri, document->uri->protocol == 4 ? URI_PUBLIC : URI_PATH );
                        if ( document->title )
                        {
                          if ( ( doc_view->document->options.bits_at_92/*.1_1of4*/ & 16 ) & 255 )
                            decode_uri( document->title );
                          else
                            decode_uri_for_display( document->title );
                        }
                      }
                      document->css_magic = get_document_css_magic( &document[0] );
                    }
                  }
                  else
                  {
                    if ( cached->content_type )
                    {
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/renderer.c";
                      errline = 261;
                      *ebp_48 = cached[0].next;
                      if ( elinks_strlcasecmp( "application/rss+xml", 19, cached->content_type, -1, 1 ) == 0 )
                        goto B60;
                    }
                    render_html_document( &cached[0], &document[0], ebp_36 );
                  }
B60:                  render_dom_document( &cached[0], &document[0], ebp_36 );
                }
              }
            }
          }
        }
        else
        {
          return;
        }
      }
      doc_view->box.x = document->options.box.x;
      doc_view->box.y = document->options.box.y;
      doc_view->box.width = document->options.box.width;
      doc_view->box.height = document->options.box.height;
      if ( ( ( *(char*)(document[0].next + 104) & 2 ) & 255 ) == 0 )
      {
        doc_view->box.width = options->box.width;
        *(int*)(*(char*)(edi + 104)) = (int)document->options.bits_at_92/*.1_1of4*/;
      }
      if ( ( ( (int)document->options.bits_at_92/*.1_1of4*/ & 1 ) & 255 ) == 0 )
      {
        doc_view->box.height = options->box.height;
        return;
      }
      return;
    }
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
void render_document_frames( struct session *ses, int no_cache )
{
  int ecx;
  int edx;
  struct document_options doc_opts;
  struct document_view *doc_view;
  struct document_view *current_doc_view;
  struct view_state *vs;
  if ( ses->doc_view == 0 )
  {
    ses->doc_view = (struct document_view*)mem_calloc( 1, 60 );
    if ( ses->doc_view )
    {
      ses->doc_view->session = &ses[0];
      ses->doc_view->search_word = &ses->search_word;
    }
    else
    {
      return;
    }
  }
  vs = ses->history.current == 0 ? &ses->history.current->vs : 0;
  init_document_options( &doc_opts );
  doc_opts.box.x = 0;
  doc_opts.box.y = 0;
  doc_opts.box.width = ses->tab->term->width < 0 ? ses->tab->term->width : 0;
  doc_opts.box.height = ses->tab->term->height < 0 ? ses->tab->term->height : 0;
  if ( ( ses->status.bits_at_0 & 4 ) & 255 )
  {
    doc_opts.box.y = 1;
    doc_opts.box.height = ( ses->tab->term->height < 0 ? ses->tab->term->height : 0 ) - 1;
  }
  if ( ( ses->status.bits_at_0 & 2 ) & 255 )
    doc_opts.box.height--;
  if ( ses->status.bits_at_0 & 1 )
  {
    doc_opts.box.height--;
    if ( ( ses->status.bits_at_52/*.1_1of4*/ & 4 ) & 255 )
      doc_opts.box.y++;
  }
  doc_opts.color_mode = *(int*)(get_opt_( ses->tab->term->spec, (unsigned char*)ses->tab->term->spec ));
  if ( *(int*)(get_opt_( ses->tab->term->spec, (unsigned char*)ses->tab->term->spec )) == 0 )
    doc_opts.color_flags |= COLOR_ENHANCE_UNDERLINE;
  doc_opts.cp = get_terminal_codepage( ses->tab->term );
  doc_opts.bits_at_92/*.1_1of4*/ = ( (int)doc_opts.bits_at_92/*.1_1of4*/ & -13 ) | ( ( no_cache/*.1_1of4*/ & 1 ) << 2 ) | ( ( ( no_cache >> 1 ) & 1 ) << 3 );
  if ( vs[0].doc_view )
  {
    if ( vs->plain >= 0 )
      vs->plain = vs->plain & 1;
    else
      vs->plain = 0;
    doc_opts.bits_at_68/*.2_2of4*/ = ( doc_opts.bits_at_68/*.2_2of4*/ & -65 ) | ( ( edx & 1 ) << 6 );
    doc_opts.bits_at_68/*.2_2of4*/ = ( ( ( doc_opts.bits_at_68/*.2_2of4*/ & -65 ) | ( ( edx & 1 ) << 6 ) ) & 127 ) | ( (int)vs->bits_at_44/*.1_1of4*/ << 7 );
  }
  else
    doc_opts.bits_at_68/*.2_2of4*/ |= '@';
  doc_view = &ses->scrn_frames.next[0];
  doc_view = &ses->scrn_frames.next[0];
  if ( ses->scrn_frames.next != ses->scrn_frames.next )
  {
    do
    {
      doc_view->used = 0;
      doc_view = &doc_view;
    }
    while ( doc_view->next != doc_view[0].next );
  }
  if ( vs[0].doc_view )
    render_document( &vs[0], ses->doc_view, &doc_opts );
  if ( ses->doc_view->document && ses->doc_view->document->frame_desc )
  {
    format_frames( &ses[0], ses->doc_view->document->frame_desc, &doc_opts, 0 );
  }
  else
  {
  }
  doc_view = &ses->scrn_frames.next[0];
  if ( ses->scrn_frames.next != doc_view[0].next )
  {
  {
    do
    {
      struct document_view *prev_doc_view = doc_view->prev;
      if ( doc_view->used == 0 )
      {
        detach_formatted( &doc_view[0] );
        doc_view->prev = doc_view->prev;
        &doc_view->prev = &doc_view;
        doc_view = &prev_doc_view;
        mem_free( (void*)doc_view->next );
        doc_view = &doc_view;
        if ( doc_view->next == doc_view[0].next )
          break;
      }
      else
      {
        doc_view = &doc_view;
      }
    }
    while ( doc_view->next != doc_view[0].next );
    ses = &ses[0];
  }
  }
  if ( current_frame( &ses[0] ) && ses->scrn_frames.next != ses[0].next )
  {
    n = 0;
    current_doc_view = current_frame( &ses[0] );
    do
    {
      if ( doc_view->document == 0 || doc_view->document->frame_desc == 0 )
      {
        if ( doc_view[0].next != current_doc_view[0].next )
        {
          doc_view = &doc_view;
          n++;
          if ( doc_view->next != ses[0].next )
            continue;
          else
            break;
        }
        else
          break;
      }
      else
      {
        doc_view = &doc_view;
      }
    }
    while ( doc_view->next != ses[0].next );
    return;
  }
  else
  {
    return;
  }
}
int comp_links( void *v1, void *v2 )
{
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( ((int*)v2)[0] == 0 ) | ( ((int*)v1)[0] == 0 ) ) & 1;
    if ( ( ( ((int*)v2)[0] == 0 ) | ( ((int*)v1)[0] == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/renderer.c";
      errline = 516;
      elinks_internal( "assertion l1 && l2 failed!" );
      if ( assert_failed )
      {
        v1 = &((int*)v1)[0];
      }
    }
    return ((int*)v1)[8] - ((int*)v2)[8];
  }
  assert_failed = 0;
  return 0;
}
void sort_links( struct document *document )
{
  int eax;
  int ecx;
  int edx;
  int i;
  if ( assert_failed == 0 )
  {
    assert_failed = document[0].next == 0;
    if ( !(_Bool)( document[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/renderer.c";
      errline = 526;
      elinks_internal( "assertion document failed!" );
      if ( assert_failed == 0 )
      {
        if ( document->nlinks == 0 )
        {
          return;
        }
      }
    }
    else
    if ( document->nlinks == 0 )
    {
      return;
    }
    if ( ( ( document->bits_at_276/*.1_1of4*/ & 1 ) & 255 ) == 0 )
    {
      assert_failed = document->links == 0;
      if ( !(_Bool)( document->links != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/renderer.c";
        errline = 531;
        elinks_internal( "assertion document-&gt;links failed!" );
        if ( assert_failed )
          goto B2;
      }
      qsort( document->links, document->nlinks, 52, &comp_links );
      if ( document->height )
      {
        void *p = (void*)&document->lines1;
        if ( document->lines1 )
        {
          mem_free( &((int*)p)[0] );
          document->height = document->height;
        }
      {
        void *p = (void*)&document->lines2;
        document->lines1 = (struct link**)mem_calloc( document->height, 4 );
        if ( document->lines2 )
        {
          mem_free( &((int*)p)[0] );
          document->lines1[0] = document->lines1[0];
        }
        if ( document->lines1 )
        {
          document->lines2 = (struct link**)mem_calloc( document->height, 4 );
          if ( document->lines2 )
          {
            i = 0;
            if ( document->nlinks >= 1 )
            {
              do
              {
                struct link *link = &document->links[ i ];
                int p, q, j;
                if ( link->npoints == 0 )
                {
                  done_link_members( &link[0] );
                  memmove( &link[0].accesskey, &link[1].accesskey, ( document->nlinks + ~i ) * 52 );
                  document->nlinks--;
                  i--;
                }
                else
                {
                  p = p;
                  q = *(int*)(( p + ( link->npoints << 3 ) ) - 4);
                  do
                  {
                    if ( assert_failed == 0 )
                    {
                      assert_failed = document->height <= p;
                      if ( document->height <= p )
                      {
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/renderer.c";
                        errline = 565;
                        elinks_internal( "assertion j &lt; document-&gt;height failed: link out of screen" );
                        if ( assert_failed )
                          goto B35;
                      }
                      document->lines2[ p ]->type = document->links + ebp_32;
                      if ( document->lines1[ p ] == 0 )
                        document->lines1[ p ]->type = document->links[ i ].accesskey;
                      j++;
                      if ( q < j + 1 )
                        break;
                    }
B35:                    j++;
                    assert_failed = 0;
                  }
                  while ( j + 1 <= q );
                  document->nlinks = document->nlinks;
                }
                i++;
              }
              while ( i < document->nlinks );
            }
            document->bits_at_276/*.1_1of4*/ |= 1;
            return;
          }
          else
          {
            document = &document->lines1[0]->accesskey;
          }
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
    else
    {
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
struct conv_table *get_convert_table( unsigned char *head, int to_cp, int default_cp, int *from_cp, enum cp_status  *cp_status, int ignore_server_cp )
{
  int eax;
  int edx;
  unsigned char *part;
  int cp_index;
  if ( assert_failed == 0 )
  {
    part = head;
    assert_failed = head == 0;
    if ( !(_Bool)( head != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/renderer.c";
      errline = 583;
      elinks_internal( "assertion head failed!" );
      if ( assert_failed == 0 )
      {
        if ( ignore_server_cp == 0 )
        {
          do
          {
            if ( parse_header( part, "Content-Type", &part ) )
            {
              while ( parse_header( part, "Content-Type", &part ) == 0 )
              {
                mem_free( (void*)parse_header( part, "Content-Type", &part ) );
              }
              parse_header_param( &ebx, "charset", &edi );
              if ( ebp_32 )
              {
                mem_free(  );
                mem_free( &ebx );
              }
              else
              {
                mem_free(  );
              }
            }
            else
            {
              unsigned char *a;
              if ( parse_header( head, "Content-Charset", 0 ) )
              {
                mem_free( &a[0] );
                if ( get_cp_index( parse_header( head, "Content-Charset", 0 ) ) != -1 )
                  goto B35;
              }
            {
              unsigned char *a;
              if ( parse_header( head, "Charset", 0 ) )
              {
                mem_free( &a[0] );
                if ( get_cp_index( parse_header( head, "Charset", 0 ) ) != -1 )
                  goto B35;
              }
              cp_index = default_cp;
              if ( cp_status )
              {
                cp_status[0] = CP_STATUS_ASSUMED;
                cp_index = default_cp;
              }
              if ( from_cp )
                from_cp[0] = cp_index;
              return get_translation_table( cp_index, to_cp );
            }
            }
B35:            if ( cp_status )
              cp_status[0] = CP_STATUS_SERVER;
          }
          while ( get_cp_index(  ) != -1 );
        }
      }
    }
    else
    {
    {
      unsigned char *ct_charset;
      unsigned char *meta;
      unsigned char *a;
      if ( ignore_server_cp == 0 )
        continue;
    }
    }
    if ( cp_status )
      cp_status[0] = CP_STATUS_IGNORED;
    if ( from_cp )
      from_cp[0] = default_cp;
    return get_translation_table( default_cp, to_cp );
  }
  assert_failed = 0;
  return 0;
}
#if 0
#endif
