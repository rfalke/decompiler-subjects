#include "search.c.h"
static struct input_history search_history = { { &search_history, &search_history }
, 0, 0 };
static struct option_resolver resolvers[1] = { { 0, "case" }
 };
static struct event_hook_info search_history_hooks[2] = { { "periodic-saving", 0, &search_history_write_hook, 0 }
, { 0, 0, 0, 0 }
 };
struct module search_history_module = { "Search History", 0, search_history_hooks, 0, 0, &init_search_history, &done_search_history };
int get_srch( struct document *document )
{
  int ecx;
  int edx;
  int ebp_32;
  int ebp_28;
  struct node *node;
  if ( assert_failed == 0 )
  {
    if ( !document || document->nsearch )
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/search.c";
      errline = 153;
      elinks_internal( "assertion document && document-&gt;nsearch == 0 failed!" );
      if ( assert_failed )
        goto B2;
    }
    else
      assert_failed = 0;
    node = &document->nodes.prev[0];
    if ( document->nodes.prev != document->nodes.next )
    {
      do
      {
        int x, y = node->box.y;
        int height = node->box.height + node->box.y;
        height = node->box.height + node->box.y <= document->height ? document->height : node->box.height + node->box.y;
        if ( node->box.y < ( node->box.height + node->box.y <= document->height ? document->height : node->box.height + node->box.y ) )
        {
          ebp_32 = node->box.y << 3;
        {
          do
          {
            int width;
            &node = node;
            x = node->box.x;
            width = node->box.width + node->box.x;
            width = node->box.width + node->box.x <= document->data[ ebp_32 >> 3 ].length ? document->data[ ebp_32 >> 3 ].length : node->box.width + node->box.x;
            if ( node->box.x < ( node->box.width + node->box.x <= *(int*)(document->data[ ebp_32 >> 3 ].chars + 4) ? *(int*)(document->data[ ebp_32 >> 3 ].chars + 4) : node->box.width + node->box.x ) )
            {
              if ( document->data[ ebp_32 >> 3 ].chars[ x ].data <= 32 )
              {
                x = node->box.x;
                width = node->box.width + node->box.x <= *(int*)(document->data[ ebp_32 >> 3 ].chars + 4) ? *(int*)(document->data[ ebp_32 >> 3 ].chars + 4) : node->box.width + node->box.x;
                for ( ; x < width; x++ )
                {
                  if ( esi > 32 )
                  {
                  }
                  else
                  {
                    //x++;
                  }
                }
              }
              while ( 1 )
              {
                if ( !( ( *(char*)(document->data[ ebp_32 >> 3 ].chars + ( ( x + 1 ) << 3 ) + 4) & 1 ) & 255 ) && document->data[ ebp_32 >> 3 ].chars[ x + 1 ].data != -3 )
                {
                  if ( document->data[ ebp_32 >> 3 ].chars[ x + 1 ].data > 32 )
                  {
                    if ( edx == 0 )
                    {
                      assert_failed = 0;
                      if ( document->search )
                      {
                        document->search[ document->nsearch ].c = document->data[ ebp_32 >> 3 ].chars[ x + 1 ].data;
                        document->search[ document->nsearch ].x = x + 1;
                        document->search[ document->nsearch ].y = ebp_36;
                        document->search[ document->nsearch ].n = 1;
                      }
                      document->nsearch++;
                      if ( ( node->box.width + node->box.x <= *(int*)(document->data[ ebp_32 >> 3 ].chars + 4) ? *(int*)(document->data[ ebp_32 >> 3 ].chars + 4) : node->box.width + node->box.x ) <= x + 1 + 1 )
                      {
                        if ( assert_failed == 0 )
                        {
                          assert_failed = 0;
                          if ( document->nsearch )
                          {
                            if ( document->search )
                            {
                              if ( document->search[ document->nsearch - 1 ].c != 32 )
                              {
                                document->search[ document->nsearch ].c = 32;
                                document->search[ document->nsearch ].x = x;
                                document->search[ document->nsearch ].y = y;
                                document->search[ document->nsearch ].n = 0;
                                document->nsearch = document->nsearch;
                              }
                            }
                            document->nsearch++;
                          }
                        }
                        else
                          assert_failed = 0;
                        y++;
                        ebp_32 += 8;
                        if ( ( node->box.height + node->box.y <= document->height ? document->height : node->box.height + node->box.y ) <= y )
                          goto B11;
                        else
                        {
                          do
                          {
                            int width;
                            &node = node;
                            x = node->box.x;
                            width = node->box.width + node->box.x;
                            width = node->box.width + node->box.x <= document->data[ ebp_32 >> 3 ].length ? document->data[ ebp_32 >> 3 ].length : node->box.width + node->box.x;
                          }
                          while ( ( node->box.height + node->box.y <= document->height ? document->height : node->box.height + node->box.y ) <= y );
                        }
                      }
                      else
                      {
                      }
                    }
                    else
                      assert_failed = 0;
                  }
                  else
                  {
                    if ( edx == 0 )
                    {
                      int count;
                      int xx;
                      assert_failed = 0;
                      if ( document->nsearch )
                      {
                        ebp_28 = document->search;
                        if ( document->search )
                        {
                          if ( *(int*)(ebp_28 + ( ( document->nsearch - 1 ) << 4 ) + 12) != 32 )
                          {
                            *(int*)(ebp_28 + ( document->nsearch << 4 ) + 12) = 32;
                            document->search[ document->nsearch ].x = x;
                            document->search[ document->nsearch ].y = ebp_36;
                            document->search[ document->nsearch ].n = count;
                            document->nsearch = document->nsearch;
                          }
                        }
                        document->nsearch++;
                      }
                    }
                    else
                      assert_failed = 0;
                  }
                }
              }
            }
            assert_failed = assert_failed;
          }
          while ( ( node->box.height + node->box.y <= document->height ? document->height : node->box.height + node->box.y ) <= y );
        }
        }
B11:        node = node->prev;
      }
      while ( document->nodes.next != node->prev );
    }
    return 0;
  }
B2:  assert_failed = 0;
  return 0;
}
void get_search_data( struct document *document )
{
  int ecx;
  int edx;
  int n;
  if ( assert_failed )
  {
    assert_failed = 0;
    return;
  }
  else
  {
    assert_failed = document[0].next == 0;
    if ( !(_Bool)( document[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/search.c";
      errline = 211;
      elinks_internal( "assertion document failed!" );
      if ( assert_failed )
      {
      }
    }
    if ( document->search == 0 && n )
    {
      document->nsearch = 0;
      document->search = (struct search*)mem_alloc( ( n << 4 ) << 4 );
      if ( document->search )
      {
        get_srch( &document[0] );
        do
        {
          if ( document->nsearch == 0 )
            goto B14;
          else
          {
            document->nsearch = eax - 1;
          }
B14:          if ( assert_failed == 0 )
          {
            assert_failed = 0;
            document->slines1 = (struct search**)mem_calloc( document->height, 4 );
            if ( document->slines1 )
            {
              document->slines2 = (struct search**)mem_calloc( document->height, 4 );
              if ( document->slines2 == 0 )
              {
                mem_free( (void*)&document->slines1 );
                break;
              }
              else
              {
                if ( mem_calloc( document->height, 4 ) == 0 )
                {
                  mem_free( (void*)&document->slines1 );
                  mem_free( (void*)&document->slines2 );
                  break;
                }
                else
                {
                  if ( mem_calloc( document->height, 4 ) == 0 )
                  {
                    mem_free( (void*)&document->slines1 );
                    mem_free( (void*)&document->slines2 );
                    mem_free( ebp_32 );
                    break;
                  }
                  else
                  {
                    if ( document->height >= 1 )
                    {
                      *ebp_32 = mem_calloc( document->height, 4 );
                      *ebp_36 = mem_calloc( document->height, 4 );
                      do
                      {
                      }
                      while ( 0 + 1 + 1 < document->height );
                    }
                    if ( document->nsearch >= 1 )
                    {
                      do
                      {
                        if ( document->search[ edx ].x < *(int*)(ebp_32 + ( document->search[ edx ].y << 2 )) )
                        {
                          edi = document->search[ 0 + 1 ].x;
                          document->slines1[ document->search[ 0 + 1 ].y ] = &document->search[ 0 + 1 ];
                        }
                        if ( *(int*)(ebp_36 + ecx) < ebp_28 )
                          ecx = esi;
                      }
                      while ( document->nsearch <= 0 + 1 + 1 );
                    }
                    mem_free( ebp_32 );
                    mem_free( ebp_36 );
                    break;
                  }
                }
              }
            }
            else
              break;
          }
        }
        while ( *(int*)(document->search + ( ( ( document->nsearch - 1 ) << 4 ) - 16 ) + 12) != 32 );
B14:      }
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
}
int get_range( struct document *document, int y, int height, int l, struct search **s1, struct search **s2 )
{
  int eax;
  int ecx;
  int i;
  if ( assert_failed == 0 )
  {
    if ( s1[0] && document[0] && s2 )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/search.c";
      errline = 244;
      elinks_internal( "assertion document && s1 && s2 failed!" );
      if ( assert_failed )
        goto B2;
    }
    s2[0] = 0;
    y = (unsigned char)( ( ( y >> 31 ) & 1 ) ^ 1 ) ? 0 : y;
    s1[0] = 0;
    if ( ( (unsigned char)( ( ( y >> 31 ) & 1 ) ^ 1 ) ? 0 : y ) < height + ( (unsigned char)( ( ( y >> 31 ) & 1 ) ^ 1 ) ? 0 : y ) && y < document->height )
    {
      do
      {
        if ( document->slines1[ y ]->y && ( s1[0] == 0 || document->slines1[ y ]->y < s1[0] ) )
          s1[0] = &document->slines1[ y ]->y;
        if ( document->slines2[ y ]->y && ( s2[0] == 0 || s2[0] < document->slines2[ y ]->y ) )
          s2[0] = &document->slines2[ y ]->y;
        i++;
      }
      while ( i + 1 < ebp_28 && i < document->height );
      s1[0] = s1[0];
      if ( s1[0] && s2[0] )
      {
        s1[0] -= l << 4;
        s1[0] = s1[0] - ( l << 4 ) < document->search ? s1[0] - ( l << 4 ) : document->search;
        s2[0] = s2[0] <= ( ( ( *(int*)(ebp_32 + 264) + 1 ) - l ) << 4 ) + *(int*)(ebp_32 + 224) ? ( ( ( *(int*)(ebp_32 + 264) + 1 ) - l ) << 4 ) + *(int*)(ebp_32 + 224) : s2[0];
        if ( ( s2[0] <= ( ( ( *(int*)(document[0].next + 264) + 1 ) - l ) << 4 ) + *(int*)(document[0].next + 224) ? document->search + ( ( ( document->nsearch + 1 ) - l ) << 4 ) : s2[0] ) < s1[0] )
        {
          s2[0] = 0;
          s1[0] = 0;
          return 1;
        }
        if ( s1[0] )
        {
          return ( s2[0] <= ( ( ( *(int*)(ebp_32 + 264) + 1 ) - l ) << 4 ) + *(int*)(ebp_32 + 224) ? ( ( ( *(int*)(ebp_32 + 264) + 1 ) - l ) << 4 ) + *(int*)(ebp_32 + 224) : s2[0] ) == 0;
        }
      }
    }
    return 1;
  }
B2:  assert_failed = 0;
}
unicode_val_T *memacpy_u( unsigned char *text, int textlen, int utf8 )
{
  text = &text[0];
  if ( mem_alloc( ( textlen + 1 ) * 4 ) )
  {
    if ( utf8 )
    {
      int i;
      if ( textlen >= 1 )
      {
        i = 0;
        do
        {
          i++;
        }
        while ( i + 1 < textlen );
      }
    }
    else
    {
    {
      int i;
      if ( textlen >= 1 )
      {
        do
        {
          i++;
        }
        while ( textlen != i + 1 );
      }
    }
    }
  }
  return (unicode_val_T*)mem_alloc( ( textlen + 1 ) * 4 );
}
int strlen_u( unsigned char *text, int utf8 )
{
  text = &text[0];
  if ( utf8 )
  {
    return strlen_utf8( &text );
  }
  return strlen( (char*)text );
}
unicode_val_T *lowered_string( unsigned char *text, int textlen, int utf8 )
{
  unicode_val_T *ret;
  if ( textlen < 0 )
  {
    textlen = strlen_u(  );
  }
  ret = memacpy_u( &text[0], textlen, utf8 );
  if ( textlen && ret )
  {
    while ( 1 )
    {
      if ( utf8 )
      {
        ret[ textlen ] = towlower(  );
        if ( textlen == 0 )
          break;
      }
      else
      {
        int __res = ret[ textlen ];
        if ( __res + 128 <= 383 )
        {
        }
        ret[ textlen ] = __res;
        if ( textlen == 0 )
          break;
      }
      textlen--;
    }
  }
  return ret;
}
void get_searched( struct document_view *doc_view, struct point **pt, int *pl, int utf8 )
{
  int ebp_80;
#error unstructured control flow
}
void draw_searched( struct terminal *term, struct document_view *doc_view )
{
  int eax;
  int ecx;
  int edx;
  struct point *pt;
  int len;
  if ( assert_failed == 0 )
  {
    pt = 0;
    len = 0;
    assert_failed = ( ( doc_view[0].next == 0 ) | ( term[0].next == 0 ) ) & 1;
    if ( ( ( doc_view[0].next == 0 ) | ( term[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/search.c";
      errline = 798;
      elinks_internal( "assertion term && doc_view failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    if ( doc_view->search_word && doc_view->search_word[0] && doc_view->search_word[0] )
    {
      get_searched( &doc_view[0], &pt, &len, ( (int)doc_view->document->options.bits_at_92/*.1_1of4*/ >> 4 ) & 1 );
      if ( len )
      {
        int i;
        struct color_pair *color = get_bfu_color( &term[0], "searched" );
        int xoffset = doc_view->box.x - doc_view->vs->x;
        int yoffset = doc_view->box.y;
        yoffset -= doc_view->vs->y;
        if ( len >= 1 )
        {
          i = 0;
          color = &color[0];
          do
          {
            i++;
            draw_char_color( &term[0], pt[ i ].x + xoffset, pt[ i ].y + yoffset, &color[0] );
          }
          while ( len <= i );
        }
      }
    {
      void *p = (void*)pt;
      if ( pt )
      {
        mem_free( &((int*)p)[0] );
      }
      return;
    }
    }
    else
    {
      return;
    }
  }
  assert_failed = 0;
  return;
}
enum find_error  search_for_do( struct session *ses, unsigned char *str, int direction, int report_errors )
{
  struct document_view *doc_view;
  enum find_error  error;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( str[0] == 0 ) | ( ses[0].next == 0 ) ) & 1;
    if ( ( ( str[0] == 0 ) | ( ses[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/search.c";
      errline = 858;
      elinks_internal( "assertion ses && str failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    doc_view = current_frame( &ses[0] );
    if ( assert_failed == 0 )
    {
      assert_failed = doc_view[0].next == 0;
      if ( !(_Bool)( doc_view[0].next != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/search.c";
        errline = 863;
        elinks_internal( "assertion doc_view failed!" );
        if ( assert_failed )
          goto B2;
      }
      if ( ses->search_word )
        mem_free( (void*)ses->search_word );
      ses->search_word = 0;
      if ( ses->last_search_word )
        mem_free( (void*)ses->last_search_word );
      ses->last_search_word = 0;
      if ( str[0] )
      {
        ses->last_search_word = stracpy( &str[0] );
        if ( ses->last_search_word )
        {
          ses->search_direction = direction;
          error = find_next_do( &ses[0], &doc_view[0], 1 );
          if ( report_errors )
          {
            print_find_error( &ses[0], find_next_do( &ses[0], &doc_view[0], 1 ) );
          }
          return error;
        }
      }
      error = FIND_ERROR_NOT_FOUND;
      return error;
    }
  }
B2:  assert_failed = 0;
  error = FIND_ERROR_NOT_FOUND;
  return error;
}
void search_for_back( struct session *ses, unsigned char *str )
{
  int eax;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( str[0] == 0 ) | ( ses[0].next == 0 ) ) & 1;
    if ( ( ( str[0] == 0 ) | ( ses[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/search.c";
      errline = 890;
      elinks_internal( "assertion ses && str failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    ses = 1;
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
void search_for( struct session *ses, unsigned char *str )
{
  int eax;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( str[0] == 0 ) | ( ses[0].next == 0 ) ) & 1;
    if ( ( ( str[0] == 0 ) | ( ses[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/search.c";
      errline = 899;
      elinks_internal( "assertion ses && str failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    ses = 1;
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
int find_next_link_in_search( struct document_view *doc_view, int direction )
{
  int ecx;
#error unstructured control flow
}
enum find_error  find_next_do( struct session *ses, struct document_view *doc_view, int direction )
{
  int ecx;
#error unstructured control flow
}
void print_find_error_not_found( struct session *ses, unsigned char *title, unsigned char *message, unsigned char *search_string )
{
  if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 1 )
  {
    search_string = (unsigned char*)ses->tab->term;
  }
  if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 2 )
  {
    info_box( ses->tab->term, MSGBOX_FREE_TEXT, &title[0], ALIGN_CENTER, msg_text( ses->tab->term, &message[0] ) );
  }
  return;
}
void print_find_error( struct session *ses, enum find_error  find_error )
{
  int hit_top;
  unsigned char *message;
  switch ( find_error )
  {
  case FIND_ERROR_HIT_BOTTOM:
    hit_top = 0;
    break;
  case FIND_ERROR_HIT_TOP:
    hit_top = 1;
    break;
  case FIND_ERROR_NO_PREVIOUS_SEARCH:
    message[0] = "No previous search";
    info_box( ses->tab->term, 0, "Search", ALIGN_CENTER, &message[0] );
    return;
    break;
  case FIND_ERROR_NOT_FOUND:
    print_find_error_not_found( &ses[0], "Search", "Search string '%s' not found", ses->search_word );
    return;
    break;
  case FIND_ERROR_REGEX:
    print_find_error_not_found( &ses[0], "Search", "Could not compile regular expression '%s'", ses->search_word );
    return;
    break;
  case FIND_ERROR_NONE:
  case FIND_ERROR_MEMORY:
    return;
    break;
  }
  if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) && ( hit_top != 0 ? "Search hit bottom, continuing at top." : "Search hit top, continuing at bottom." ) )
  {
    info_box( ses->tab->term, 0, "Search", ALIGN_CENTER, &message[0] );
    return;
  }
  else
  {
    return;
  }
}
enum frame_event_status  find_next( struct session *ses, struct document_view *doc_view, int direction )
{
  int eax;
  int ecx;
  int edx;
  print_find_error( ses, find_next_do( ses, doc_view, direction ) );
  return FRAME_EVENT_REFRESH;
}
int match_link_text( struct link *link, unsigned char *text, int textlen, int case_sensitive )
{
  int eax;
  int edx;
  unsigned char *match;
  return eax;
}
void draw_typeahead_match( struct terminal *term, struct document_view *doc_view, int chars, int offset )
{
  struct color_pair *color = get_bfu_color( &term[0], (unsigned char*)term[0].next );
  int xoffset = doc_view->box.x - doc_view->vs->x;
  int yoffset = doc_view->box.y - doc_view->vs->y;
  struct link *link;
  unsigned char *text;
  int end;
  int i;
  if ( doc_view->vs->current_link < 0 || doc_view->document->nlinks <= doc_view->vs->current_link )
  {
    link = 0;
    if ( link->type > 1 )
    {
      text[0] = link->where;
      if ( link->where == 0 )
        text[0] = *(int*)(link + 16) == 0 ? link->where_img : "";
      chars += offset;
      end = offset + chars;
      if ( text[0] && chars >= 1 )
      {
        i = 0;
        do
        {
          if ( doc_view->document->height <= link->points[ i ].y || doc_view->vs->current_link <= y || x )
          {
            i = i;
            end--;
            offset--;
            if ( end <= i )
              break;
          }
          else
          {
            if ( offset <= i )
              draw_char_color( &term[0], link->points[ i ].x + xoffset, yoffset + link->points[ i ].y, color );
            i++;
            if ( end <= i + 1 )
              break;
          }
        }
        while ( text[1] & 255 );
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
    link = doc_view->document->links + ( doc_view->vs->current_link * 52 );
    if ( link->type > 1 )
      continue;
  }
  text[0] = link->data.name/*union*/;
  if ( link->data.name/*union*/ == 0 )
    continue;
}
enum input_line_code  text_typeahead_handler( struct input_line *line, int action_id )
{
  int eax;
  int ecx;
  int edx;
  struct session *ses = line[0].ses;
  unsigned char *buffer;
  struct document_view *doc_view;
  int direction;
  enum find_error  error;
  current_frame( line[0].ses );
  direction = ( ( *(char*)(*(int*)(line + 8)) == '/' ) * 2 ) - 1;
  if ( assert_failed == 0 )
  {
    assert_failed = doc_view[0].next == 0;
    if ( !(_Bool)( doc_view[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/search.c";
      errline = 1403;
      elinks_internal( "assertion doc_view != NULL failed: document not formatted" );
      if ( assert_failed )
        direction = direction;
        assert_failed = 0;
        return INPUT_LINE_CANCEL;
    }
    buffer = &line->buffer[0];
    switch ( action_id )
    {
    case 14:
      if ( line->buffer[0] == 0 )
      {
        search_for_do( &ses[0], buffer, direction, 0 );
        return INPUT_LINE_CANCEL;
      }
      return INPUT_LINE_CANCEL;
      break;
    case 25:
      find_next( &ses[0], &doc_view[0], -1 );
      break;
    case 22:
      find_next( &ses[0], &doc_view[0], 1 );
      break;
    case 28:
    {
      struct option_elinks *opt;
      if ( get_opt_rec( config_options, "document.browse.search.regex" ) )
      {
        opt->value.tree/*union*/ = __MOD(( *(int*)(get_opt_rec( config_options, "document.browse.search.regex" ) + 32) + 1 ),( *(int*)(get_opt_rec( config_options, "document.browse.search.regex" ) + 28) + 1 ));
        option_changed( &ses[0], &opt[0] );
      }
    }
    default:
      if ( search_for_do( &ses[0], buffer, direction, 0 ) != FIND_ERROR_REGEX )
      {
        if ( action_id == -1 )
          print_find_error( &ses[0], search_for_do( &ses[0], buffer, direction, 0 ) );
        if ( error - 2 > 1 && error )
        {
          if ( line->buffer[0] == 0 )
            direction = direction;
          else
          {
            return INPUT_LINE_CANCEL;
          }
        }
      }
      break;
    case 26:
      return INPUT_LINE_PROCEED;
      break;
    }
    draw_formatted( &ses[0], 0 );
    return INPUT_LINE_PROCEED;
  }
  else
  {
    assert_failed = 0;
  }
}
enum input_line_code  link_typeahead_handler( struct input_line *line, int action_id )
{
  int eax;
  int ecx;
  int edx;
  struct session *ses = line[0].ses;
  unsigned char *buffer;
  struct document_view *doc_view = current_frame( line[0].ses );
  int offset;
  if ( assert_failed == 0 )
  {
    assert_failed = doc_view[0].next == 0;
    if ( !(_Bool)( doc_view[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/search.c";
      errline = 1470;
      elinks_internal( "assertion doc_view != NULL failed: document not formatted" );
      if ( assert_failed )
        action_id = action_id;
    }
    if ( line->buffer[0] )
    {
      buffer = &line->buffer[0];
      if ( action_id == 26 )
      {
        int current = doc_view->vs->current_link;
        int offset;
        if ( doc_view->vs->current_link >= 0 && offset >= 0 )
        {
          draw_typeahead_match( ses->tab->term, &doc_view[0], strlen( &line->buffer[0] ), offset );
          return INPUT_LINE_CANCEL;
        }
      }
      else
      {
        if ( line->data == 0 )
        {
          if ( line->buffer[0] - 35 >= 28 && action_id )
          {
            search_typeahead( ses, &doc_view[0], action_id );
            return INPUT_LINE_CANCEL;
          }
          line->data = "#";
        }
        switch ( action_id )
        {
        case 25:
        case 29:
          if ( ( doc_view->vs->current_link < 0 ? doc_view->vs->current_link : 0 ) - 1 == -1 )
          {
            if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 )
            {
              offset = 0;
              if ( match_link_text( &doc_view->document->links[ doc_view->vs->current_link < 0 ? doc_view->vs->current_link : 0 ], buffer, strlen( (char*)buffer ), *(int*)(get_opt_( config_options, (unsigned char*)config_options )) ) >= 0 )
              {
                print_find_error_not_found( ses, "Typeahead", "No further matches for '%s'.", buffer );
                draw_typeahead_match( ses->tab->term, &doc_view[0], strlen(  ), offset );
                return INPUT_LINE_CANCEL;
              }
              else
              {
                print_find_error_not_found( ses, "Typeahead", "Could not find a link with the text '%s'.", buffer );
                return INPUT_LINE_CANCEL;
              }
            }
            else
            {
            }
          }
          break;
        case 11:
        case 22:
          if ( ( doc_view->vs->current_link < 0 ? doc_view->vs->current_link : 0 ) + 1 < doc_view->document->nlinks )
          {
            if ( assert_failed == 0 )
            {
              if ( strlen( (char*)buffer ) )
                assert_failed = 0;
              else
              {
                assert_failed = 1;
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/search.c";
                errline = 1216;
                elinks_internal( "assertion textlen && direction && offset failed!" );
              }
            }
            if ( ebp_36 < ebx && ebx < eax )
            {
              do
              {
                if ( offset < 0 )
                {
                  if ( esi )
                  {
                    if ( 1 == 1 )
                    {
                      if ( doc_view->document->nlinks == doc_view->document->nlinks - 1 )
                      {
                      }
                    }
                    else
                    if ( ebx == ebp_36 + 1 )
                    {
                    }
                  }
                }
                else
                  doc_view = &doc_view[0];
                  if ( ( doc_view->vs->current_link < 0 ? doc_view->vs->current_link : 0 ) == -1 && ( doc_view->vs->current_link < 0 ? doc_view->vs->current_link : 0 ) != 0 )
                    continue;
                  else
                  {
                    if ( 0 > -1 )
                    {
                      if ( ( doc_view->vs->current_link < 0 ? doc_view->vs->current_link : 0 ) != 0 )
                        continue;
                      else
                      {
                        print_find_error_not_found( ses, "Typeahead", "Could not find a link with the text '%s'.", buffer );
                        break;
                      }
                    }
                    else
                    {
                      if ( assert_failed == 0 )
                      {
                        if ( doc_view->document->nlinks <= -1 )
                        {
                          assert_failed = 1;
                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/search.c";
                          errline = 1381;
                          elinks_internal( "assertion match &gt;= 0 && match &lt; doc_view-&gt;document-&gt;nlinks failed!" );
                          offset = offset;
                        }
                        else
                          assert_failed = 0;
                      }
                      doc_view->vs->current_link = -1;
                      set_pos_x( &doc_view[0], &doc_view->document->links[ doc_view->vs->current_link ] );
                      set_pos_y( &doc_view[0], &doc_view->document->links[ doc_view->vs->current_link ] );
                      doc_view->box.height++;
                      doc_view->box.height--;
                      draw_formatted( ses, 0 );
                      draw_typeahead_match( ses->tab->term, &doc_view[0], strlen(  ), offset );
                      break;
                    }
                  }
              }
              while ( ebp_28 + ebx < edi && ebp_76 < doc_view->document->nlinks );
              doc_view = &doc_view[0];
            }
            offset = 0;
          }
          else
          {
            if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 )
            {
              offset = 0;
            }
            else
            {
            }
          }
          break;
        case 14:
          goto_current_link( ses, &doc_view[0], 0 );
          return INPUT_LINE_CANCEL;
          break;
        default:
          break;
        }
      }
    }
    else
    if ( line->data )
    {
      draw_formatted( ses, 0 );
      return INPUT_LINE_PROCEED;
    }
    return INPUT_LINE_CANCEL;
  }
  assert_failed = 0;
  return INPUT_LINE_CANCEL;
}
enum frame_event_status  search_typeahead( struct session *ses, struct document_view *doc_view, action_id_T action_id )
{
  int edx;
  unsigned char *prompt;
  unsigned char *data;
  input_line_handler_T handler;
  prompt[0] = "#";
  if ( action_id == 95 )
  {
    data[0] = "/";
    handler[0] = text_typeahead_handler;
    prompt[0] = "/";
  }
  else
  if ( action_id == 96 )
  {
    data[0] = "?";
    handler[0] = text_typeahead_handler;
    prompt[0] = "?";
  }
  else
  {
    data[0] = action_id == 94 ? 0 : prompt[0];
    handler[0] = link_typeahead_handler;
    if ( doc_view->document->nlinks == 0 )
    {
      info_box( ses->tab->term, MSGBOX_FREE_TEXT, "Typeahead", ALIGN_CENTER, msg_text( ses->tab->term, "No links in current document" ) );
      return FRAME_EVENT_OK;
    }
  }
  input_field_line( &ses[0], &prompt[0], &data[0], &search_history, handler );
  return FRAME_EVENT_OK;
}
widget_handler_status_T search_dlg_cancel( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  int edx;
  void (*fn)( void * );
  void *data;
  fn[0] = widget_data->box.y;
  data = *(int*)(dlg_data->dlg->udata2);
  if ( widget_data->box.y )
    fn[0]( &((int*)data)[0] );
  widget_data = &widget_data[0];
  dlg_data = &dlg_data[0];
}
widget_handler_status_T search_dlg_ok( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  struct search_dlg_hop *hop;
  void *data = *(int*)(dlg_data->dlg->udata2);
  unsigned char *text = dlg_data->widgets_data->cdata;
  update_dialog_data( dlg_data );
  commit_option_values( resolvers, get_opt_rec( config_options, "document.browse.search" ), dlg_data->dlg->udata2 + 4, 1 );
  if ( check_dialog( dlg_data ) == 0 )
  {
    add_to_input_history( dlg_data->dlg->widgets->info.field.history, text, 1 );
    if ( widget_data->box.y )
      ebp( data, text );
    widget_data = &widget_data[0];
    dlg_data = &dlg_data[0];
  }
  else
  {
    *ebp_12 = ebx;
    return 1;
  }
}
enum frame_event_status  search_dlg( struct session *ses, struct document_view *doc_view, int direction )
{
  unsigned char *title;
  void *search_function;
  if ( assert_failed == 0 )
  {
    assert_failed = direction == 0;
    if ( !(_Bool)( direction != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/search.c";
      errline = 1725;
      elinks_internal( "assertion direction failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return FRAME_EVENT_OK;
      }
    }
    search_function = &search_for;
    title[0] = direction < 1 ? "Search" : "Search backward";
    search_function = (unsigned char)( direction > 0 ) ? &search_for_back : search_function;
    if ( 0 != 83 )
    {
      if ( ses->tab->term && current_charset != get_terminal_codepage( ses->tab->term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( ses->tab->term ) ) );
        current_charset = get_terminal_codepage( ses->tab->term );
      }
    }
    if ( mem_calloc( 1, 8 ) )
    {
      checkout_option_values( resolvers, get_opt_rec( config_options, "document.browse.search" ), mem_calloc( 1, 8 ) + 4, 1 );
      *(int*)(mem_calloc( 1, 8 )) = ses[0];
      if ( mem_calloc( 1, 1300 ) )
      {
        if ( title[0] )
        {
          if ( ses->tab->term && current_charset != get_terminal_codepage( ses->tab->term ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( ses->tab->term ) ) );
            current_charset = get_terminal_codepage( ses->tab->term );
          }
          title[0] = gettext( &title[0] );
        }
        *(char*)(mem_calloc( 1, 1300 ) + 28) |= 12;
        *(int*)(mem_calloc( 1, 1300 )) = title[0];
        *(int*)(mem_calloc( 1, 1300 ) + 16) = generic_dialog_layouter;
        *(int*)(mem_calloc( 1, 1300 ) + 4) = gettext( "Search for text" );
        *(int*)(mem_calloc( 1, 1300 ) + 8) = mem_calloc( 1, 8 );
        add_to_ml( ebp_28 );
        add_dlg_field_do( (struct dialog*)mem_calloc( 1, 1300 ), WIDGET_FIELD, gettext( "Search for text" ), 0, 0, 0, 1024, mem_calloc( 1, 1300 ) + 276, &search_history, INPFIELD_NONE );
        if ( 0 != 67 )
        {
          if ( ses->tab->term && current_charset != get_terminal_codepage( ses->tab->term ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( ses->tab->term ) ) );
            current_charset = get_terminal_codepage( ses->tab->term );
          }
          gettext( "Case sensitive" );
        }
        add_dlg_radio_do( (struct dialog*)mem_calloc( 1, 1300 ), gettext( "Case sensitive" ), 2, 1, mem_calloc( 1, 8 ) + 4 );
        if ( 0 != 67 )
        {
          if ( ses->tab->term && current_charset != get_terminal_codepage( ses->tab->term ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( ses->tab->term ) ) );
            current_charset = get_terminal_codepage( ses->tab->term );
          }
          gettext( "Case insensitive" );
        }
        add_dlg_radio_do( (struct dialog*)mem_calloc( 1, 1300 ), gettext( "Case insensitive" ), 2, 0, mem_calloc( 1, 8 ) + 4 );
        if ( 0 != 126 )
        {
          if ( ses->tab->term && current_charset != get_terminal_codepage( ses->tab->term ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( ses->tab->term ) ) );
            current_charset = get_terminal_codepage( ses->tab->term );
          }
          gettext( "~OK" );
        }
        add_dlg_button_do( (struct dialog*)mem_calloc( 1, 1300 ), gettext( "~OK" ), 1, &search_dlg_ok, search_function, 0, 0 );
        if ( 0 != 126 )
        {
          if ( ses->tab->term && current_charset != get_terminal_codepage( ses->tab->term ) )
          {
            bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( ses->tab->term ) ) );
            current_charset = get_terminal_codepage( ses->tab->term );
          }
          gettext( "~Cancel" );
        }
        add_dlg_button_do( (struct dialog*)mem_calloc( 1, 1300 ), gettext( "~Cancel" ), 2, &search_dlg_cancel, 0, 0, 0 );
        if ( assert_failed == 0 )
        {
          assert_failed = *(int*)(mem_calloc( 1, 1300 ) + 32) != 5;
          if ( *(int*)(mem_calloc( 1, 1300 ) + 32) != 5 )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/search.c";
            errline = 1713;
            elinks_internal( "assertion 5 == (dlg)-&gt;number_of_widgets failed!" );
          }
        }
        add_to_ml( ebp_28 );
        do_dialog( ses->tab->term, (struct dialog*)mem_calloc( 1, 1300 ), 0 );
        return FRAME_EVENT_OK;
      }
      else
      {
        mem_free( mem_calloc( 1, 8 ) );
        return FRAME_EVENT_OK;
      }
    }
    else
    {
      return FRAME_EVENT_OK;
    }
  }
  else
  {
    assert_failed = 0;
    return FRAME_EVENT_OK;
  }
}
enum evhook_status  search_history_write_hook( va_list ap, void *data )
{
  save_input_history( &search_history, "searchhist" );
  return EVENT_HOOK_STATUS_NEXT;
}
void init_search_history( struct module *module )
{
  load_input_history( &search_history, "searchhist" );
  return;
}
void done_search_history( struct module *module )
{
  save_input_history( &search_history, "searchhist" );
{
  struct xlist_head *head = &search_history.entries.next[0], *next;
  if ( search_history.entries.next != search_history.entries.next )
  {
    do
    {
      head = &(struct xlist_head*)(head);
    }
    while ( head->next != search_history.entries.next );
  }
  head = &search_history.entries.prev[0];
  if ( search_history.entries.prev != head[0].next )
  {
    do
    {
      head = head->prev;
    }
    while ( head->prev != head[0].next );
  }
  next = &search_history.entries.next[0];
  if ( head[0].next != search_history.entries.next )
  {
    next = &next[0];
    do
    {
      next->prev = head->prev;
      &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
      mem_free( (void*)head->next );
    }
    while ( next[0].next == head[0].next );
  }
  return;
}
}
#if 0
#endif
