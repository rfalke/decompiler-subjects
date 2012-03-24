#include "textarea.c.h"
static struct line_info *T/*.210*/ = 0;
int textarea_editor;
struct line_info *format_text( unsigned char *text, int width, enum form_wrap  wrap, int format )
{
  struct line_info *line;
  int line_number;
  int begin;
  int pos;
  int skip;
  if ( assert_failed == 0 )
  {
    line = 0;
    assert_failed = text[0] == 0;
    if ( !(_Bool)( text[0] != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
      errline = 162;
      elinks_internal( "assertion text failed!" );
      if ( assert_failed == 0 )
      {
      }
    }
    if ( mem_realloc( (void*)line, 4096 ) )
    {
      line = (struct line_info*)mem_realloc( (void*)line, 4096 );
      if ( ( mem_realloc( (void*)line, 4096 ) & 1 ) & 255 )
        line = 0;
      if ( &line->start & 2 )
        line->start/*.2_3of4*/ = 0;
      memset( *(int*)(0), 0, ( edx >> 2 ) * 4 );
      if ( !1 )
        line = 0;
      if ( edx & 1 )
        line = 0;
      if ( line )
      {
        line_number = 0;
        begin = 0;
        pos = 0;
        while ( *(char*)(text[0] + pos) )
        {
          do
          {
            skip = 1;
            if ( *(char*)(text[0] + pos) != 10 )
            {
              if ( wrap == FORM_WRAP_NONE || pos - begin < width )
              {
                pos++;
                break;
                while ( *(char*)(text[0] + pos) )
                {
                  do
                  {
                    skip = 1;
                  }
                  while ( text[ skip + pos ] );
                  break;
                }
                break;
              }
              else
              {
                unsigned char *wrappos;
                if ( wrappos[0] )
                {
                  if ( format && wrap == FORM_WRAP_HARD )
                    wrappos[0] = 10;
                  pos = wrappos[0] - text[0];
                }
                skip = 0;
                skip/*.1_1of4*/ = wrappos[0] != 0;
              }
            }
            if ( 0 < 0 )
            {
              if ( mem_realloc( (void*)line, 0 << 4 ) )
              {
                line = (struct line_info*)mem_realloc( (void*)line, 0 << 4 );
                memset( line + ( 0 << 4 ), 0, ( 0 << 4 ) - ( 0 << 4 ) );
              }
              else
              if ( line )
              {
                mem_free( (void*)line );
                break;
              }
            }
            if ( line == 0 )
              goto B7;
            line[ line_number ].start = begin;
            line_number++;
            line[ line_number ].end = pos;
            pos += skip;
            begin = skip + pos;
          }
          while ( text[ skip + pos ] );
          break;
        }
        line[ line_number ].start = begin;
        line[ line_number ].end = pos;
        line[ line_number + 1 ].end = -1;
        line[ line_number + 1 ].start = -1;
        return line;
      }
    }
B7:    return 0;
  }
  assert_failed = 0;
  return 0;
}
int get_textarea_line_number( struct line_info *line, int cursor_position )
{
  int idx;
  if ( line->start != -1 )
  {
    idx = 0;
    do
    {
      if ( line->start <= cursor_position && cursor_position < line->end + ( ( line->end != *(int*)(line[0].start + ( ( idx + 1 + 1 ) << 4 )) ) & 255 ) )
        break;
      line++;
      idx++;
    }
    while ( line->start != -1 );
  }
  idx = -1;
  return idx;
}
int area_cursor( struct form_control *fc, struct form_state *fs, int utf8 )
{
  int eax;
  int ecx;
  int edx;
  struct line_info *line;
  int x, y;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( fs[0].form_view == 0 ) | ( fc[0].next == 0 ) ) & 1;
    if ( ( ( fs[0].form_view == 0 ) | ( fc[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
      errline = 243;
      elinks_internal( "assertion fc && fs failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( line[0].start )
    {
      if ( get_textarea_line_number( &line[0] ) == -1 )
      {
        mem_free( &line[0].start );
        return 0;
      }
      if ( utf8 )
      {
        if ( fs->state_cell )
        {
          y = y;
          x += line[ y ].last_char_width;
        }
        else
        {
          utf8_ptr2cells( &fs->value[ line[ y ].start ], &fs->value[ fs->state ] );
          ebp_28 = y;
        }
      }
      else
      {
        x = fs->state - line[ y ].start;
        if ( fc->wrap )
          x -= fc->cols == x;
      }
      mem_free( &line[0].start );
      if ( fs->vpos < ( x - fc->cols ) + 1 )
        fs->vpos = ( x - fc->cols ) + 1;
      else
      if ( x < fs->vpos )
      {
        fs->vpos = x;
        if ( fs->vypos < ( y - fc->rows ) + 1 )
        {
          fs->vypos = ( y - fc->rows ) + 1;
          y = fc->cols * ( y - ( ( y - fc->rows ) + 1 ) );
          return edx + ( eax - *(int*)(ebx + 28) );
        }
        if ( fs->vypos <= y )
        {
          y = fc->cols * ( y - fs->vypos );
          return edx + ( eax - *(int*)(ebx + 28) );
        }
        fs->vypos = y;
        return edx + ( eax - *(int*)(ebx + 28) );
      }
      if ( fs->vypos < ( y - fc->rows ) + 1 )
      {
        fs->vypos = ( y - fc->rows ) + 1;
        y = fc->cols * ( y - ( ( y - fc->rows ) + 1 ) );
        return edx + ( eax - *(int*)(ebx + 28) );
      }
    }
    else
    {
      return 0;
    }
  }
B2:  assert_failed = 0;
  return 0;
}
void draw_textarea( struct terminal *term, struct form_state *fs, struct document_view *doc_view, struct link *link )
{
  int eax;
  int ecx;
  int edx;
  int ebp_60;
  int ebp_44;
  struct line_info *line, *linex;
  struct form_control *fc;
  int vx, vy;
  int sl, ye;
  int x, y;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && term && doc_view->document && link[0] && doc_view->vs )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
      errline = 417;
      elinks_internal( "assertion term && doc_view && doc_view-&gt;document && doc_view-&gt;vs && link failed!" );
      if ( assert_failed == 0 )
        goto B10;
    }
B10:    if ( ( term->bits_at_56/*.1_1of4*/ & 2 ) & 255 )
    {
      if ( !( ( doc_view[0].next == 0 ) & 255 ) && doc_view->document && link[0] && doc_view->vs )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
        errline = 335;
        elinks_internal( "assertion term && doc_view && doc_view-&gt;document && doc_view-&gt;vs && link failed!" );
        if ( assert_failed == 0 )
          goto B50;
      }
B50:      if ( link->type > 1 )
      {
        assert_failed = link->data.name == 0;
        if ( (_Bool)( link->data.name != 0 ) )
        {
          if ( link->npoints )
          {
            area_cursor( &link->data.name[0], fs, 1 );
            if ( T/*.210*/(  ) )
            {
              vy = fs->vypos;
              if ( *(int*)(T/*.210*/(  )) != -1 && vy )
              {
                vy = vy;
                do
                {
                  vy = vy - 1;
                }
                while ( edx != 1 && ( doc_view->box.x & 255 ) );
              }
              else
                ebp_60 = T/*.210*/(  );
              linex = &doc_view->box.x;
              linex = &linex[ *(int*)(*(int*)(link + 24)) >> 4 ];
              linex -= ebp_44;
              vy = doc_view->box.y;
              vy += link->points->y;
              vy -= doc_view->vs->y;
              ye = vy + name/*union*/link->data.name/*union*/;
              if ( ( ( *(int*)(ebp_44 + 16) != -1 ) & 255 ) && vy < vy + name/*union*/link->data.name/*union*/ )
              {
                do
                {
                  if ( doc_view->box.y <= vy && vy < doc_view->box.height + doc_view->box.y && name/*union*/link->data.name/*union*/ >= 1 )
                  {
                    while ( 1 )
                    {
                      if ( ebp_44 <= eax || 0 + 1 < 0 - fs->vpos )
                      {
                      }
                      else
                      {
                      }
                      if ( *(int*)(ebp_48 + 28) <= esi && linex < utf8_cells2bytes( fs->value + *ebp_60, fs->vpos, &fs->value[ *(int*)(ebp_60 + 4) ] ) + *(int*)(doc_view->box.y + 36) )
                      {
                        linex->start = linex;
                        if ( eax == 2 )
                        {
                          draw_char_data( term, utf8_to_unicode( ebp_28 ) + 1, vy, utf8_to_unicode( ebp_28 ) );
                          *ebp_76 = utf8_to_unicode( ebp_28 ) + 1 + 1;
                        }
                        draw_char_data( term, eax, vy, ebx );
                        if ( name/*union*/link->data.name/*union*/ <= 0 + 1 + 1 )
                          goto B105;
                      }
                      else
                      {
                        if ( name/*union*/link->data.name/*union*/ <= 0 + 1 + 1 )
                          goto B105;
                      }
                      *ebp_28 = ebp_28;
                    }
                  }
B105:                  ebp_60 += 16;
                  vy++;
                  *ebp_60 = *ebp_60;
                  if ( ye <= vy )
                  {
                    mem_free( T/*.210*/(  ) );
                    break;
                  }
                  else
                  {
                  }
                }
                while ( *ebp_60 != -1 );
                doc_view = &doc_view[0];
              }
              if ( vy < ye )
              {
                esi = vy;
                do
                {
                  if ( doc_view->box.y <= vy && vy < doc_view->box.height + doc_view->box.y && name/*union*/link->data.name/*union*/ >= 1 )
                  {
                    while ( linex + 1 < doc_view->box.x || doc_view->box.width + doc_view->box.x <= linex + 1 )
                    {
                      if ( edi + 1 < *(int*)(ecx + 52) )
                        continue;
                    }
                    draw_char_data( term, linex + 1, vy, 95 );
                    *ebp_80 = link->data.name;
                  }
                }
                while ( vy + 1 + 1 < ye );
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
      }
      else
        assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
      errline = 338;
      elinks_internal( "assertion fc != NULL failed: link %d has no form control" );
      if ( assert_failed == 0 )
      {
      }
    }
    else
    {
      if ( link->type > 1 )
      {
        assert_failed = link->data.name == 0;
        if ( (_Bool)( link->data.name != 0 ) )
        {
          vx = doc_view->vs->x;
          vy = doc_view->vs->y;
          if ( link->npoints )
          {
            area_cursor( &link->data.name[0], fs, 0 );
            linex = format_text( fs->value, name/*union*/(int)( name/*union*/link->data.name/*union*/ ), name/*union*/(int)( name/*union*/link->data.name/*union*/ ), 0 );
            if ( linex )
            {
              sl = fs->vypos;
              if ( fs->vypos && ( ( linex[0].start != -1 ) & 255 ) )
              {
                line = ebp_44;
                do
                {
                  line++;
                  sl--;
                }
                while ( sl != 1 && ( ( linex[0].start != -1 ) & 255 ) );
              }
              else
              {
                linex->start = linex;
                ebp_44 = linex;
              }
              x = ( link->points->x + doc_view->box.x ) - vx;
              y = ( link->points->y + doc_view->box.y ) - vy;
              ye = *(int*)(link->data.name + 56) + ( ( link->points->y + doc_view->box.y ) - vy );
              if ( ( ( line->start != -1 ) & 255 ) && y < name/*union*/link->data.name/*union*/ + ( ( link->points->y + doc_view->box.y ) - vy ) )
              {
                *ebp_56 = doc_view->box.y;
              {
                while ( y < doc_view->box.y || doc_view->box.height + doc_view->box.y <= y || name/*union*/link->data.name/*union*/ < 1 )
                {
                  ebp_44 += 16;
                  y++;
                  if ( y + 1 < ye )
                  {
                    if ( *ebp_44 == -1 )
                      goto B33;
                    else
                    {
                      doc_view->box.y = doc_view->box.y;
                    }
                  }
                  else
                  {
                    mem_free( (void*)linex );
                    return;
                  }
                }
                vy = y;
                i = 0;
                do
                {
                  if ( doc_view->box.x <= x + i && x + i < doc_view->box.width + doc_view->box.x )
                  {
                    draw_char_data( term, xi, vy, ebp_56 );
                  }
                  i++;
                }
                while ( i + 1 < name/*union*/link->data.name/*union*/ );
                y = vy;
                ebp_44 += 16;
                y++;
              }
              }
B33:              if ( y < ye )
              {
                fc = &link->data.name[0];
              {
                do
                {
                  int i;
                  if ( doc_view->box.y <= ebp_44 && ebp_44 < doc_view->box.height + doc_view->box.y && fc->cols >= 1 )
                  {
                    i = 0;
                    fc = &x;
                  {
                    do
                    {
                      int xi;
                      if ( doc_view->box.x <= x + i && x + i < doc_view->box.width + doc_view->box.x )
                      {
                        draw_char_data( term, x + i, ebp_44, 95 );
                        fc = &fc[0];
                      }
                      i++;
                    }
                    while ( i + 1 < fc->cols );
                    fc = &x;
                  }
                  }
                  ebp_44++;
                }
                while ( ebp_44 < ye );
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
      }
      else
        assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
      errline = 427;
      elinks_internal( "assertion fc != NULL failed: link %d has no form control" );
      if ( assert_failed == 0 )
      {
        vx = doc_view->vs->x;
        vy = doc_view->vs->y;
      }
    }
  }
  assert_failed = 0;
  return;
}
unsigned char *encode_textarea( struct submitted_value *sv )
{
  int eax;
  int ecx;
  int edx;
  struct form_control *fc;
  void *blabla;
  if ( assert_failed == 0 )
  {
    if ( sv[0] && sv->value )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
      errline = 495;
      elinks_internal( "assertion sv && sv-&gt;value failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return 0;
      }
    }
    if ( ((int*)blabla)[0] )
      mem_free( &((int*)blabla)[0] );
    sv = &sv[0];
  }
  else
  {
    assert_failed = 0;
    return 0;
  }
}
void textarea_edit( int op, struct terminal *term_, struct form_state *fs_, struct document_view *doc_view_, struct link *link_ )
{
  int eax;
  int ecx;
  int edx;
  static size_t fc_maxlength;
  static struct form_state *fs;
  static struct terminal *term;
  static struct document_view *doc_view;
  static struct link *link;
  static unsigned char *fn;
  if ( assert_failed == 0 )
  {
    assert_failed = op > 1;
    if ( op > 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
      errline = 577;
      elinks_internal( "assertion op == 0 || op == 1 failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    assert_failed = ( op != 1 ) & ( term_[0].next == 0 );
    if ( ( op != 1 ) & ( term_[0].next == 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
      errline = 579;
      elinks_internal( "assertion op == 1 || term_ failed!" );
      if ( assert_failed )
        link_ = &link_[0];
    }
    if ( op == 0 )
    {
      if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) )
      {
      }
      else
      if ( ( ( term_->bits_at_56/*.1_1of4*/ & 1 ) & 255 ) == 0 )
      {
      }
      else
      if ( textarea_editor == 0 )
      {
        unsigned char *ed;
        unsigned char *ex;
        ed[0] = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
        if ( get_tempdir_filename( "elinks-area-XXXXXX" ) )
        {
          if ( safe_mkstemp( get_tempdir_filename( "elinks-area-XXXXXX" ) ) < 0 )
          {
            mem_free( &fc_maxlength );
            link_ = &link_[0];
          }
          else
          {
            if ( strlen( (char*)fs_->value ) )
            {
              *ebp_56 = fc_maxlength;
              if ( fdopen( (int)fc_maxlength, "w" ) )
              {
                *ebp_56 = ebp_56;
                if ( eax != 1 )
                  fclose( &ecx );
                else
                {
                  if ( eax )
                    goto B68;
                }
              }
B68:              unlink( &fc_maxlength );
              mem_free( &fc_maxlength );
              close( (int)fc_maxlength );
            }
            fn = get_tempdir_filename( "elinks-area-XXXXXX" );
            if ( ed[0] == 0 || ed[0] == 0 )
            {
              ed[0] = getenv( "EDITOR" );
            }
            if ( straconcat( " " ) == 0 )
              unlink( (char*)fn );
            else
            {
              fs = fs_;
              if ( doc_view_ )
                doc_view = doc_view_;
              if ( link_[0].accesskey )
              {
                link = &link_[0];
                fc_maxlength = *(int*)(( link_->type <= 1 ? 0 : link_->data.name ) + 64);
              }
              term = &term_[0];
              exec_on_terminal( &term_[0], &ex[0], "", TERM_EXEC_FG );
              mem_free( &ex[0] );
              textarea_editor = 1;
              return;
            }
          }
        }
        fn = 0;
        return;
      }
      else
      {
        return;
      }
      info_box( &term_[0], 0, "Error", ALIGN_CENTER );
      return;
    }
    else
    {
      if ( op == 1 && fs )
      {
        struct string file;
        if ( init_string( &file ) && add_file_to_string( &file, fn ) )
        {
          if ( fc_maxlength < file.length )
          {
            info_box( term, MSGBOX_FREE_TEXT, "Warning", ALIGN_CENTER, msg_text( term ) );
          }
          else
            unlink( (char*)fn );
          mem_free( (void*)fs->value );
          fs->value = file.source;
          fs->state = file.length;
          if ( doc_view && link )
            draw_form_entry( term, doc_view, link );
        }
        textarea_editor = 0;
      }
      else
      {
        return;
      }
    }
    if ( fn )
      mem_free( (void*)fn );
    fn = 0;
    fs = 0;
    return;
  }
}
void menu_textarea_edit( struct terminal *term, void *xxx, void *ses_ )
{
  int eax;
  struct document_view *doc_view;
  struct link *link;
  struct form_state *fs;
  struct form_control *fc;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( ((int*)ses_)[0] == 0 ) | ( term[0].next == 0 ) ) & 1;
    if ( ( ( ((int*)ses_)[0] == 0 ) | ( term[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
      errline = 685;
      elinks_internal( "assertion term && ses failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    doc_view = current_frame( &((int*)ses_)[0] );
    if ( assert_failed == 0 )
    {
      if ( current_frame( &((int*)ses_)[0] ) && doc_view->vs->x && doc_view->document )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
        errline = 690;
        elinks_internal( "assertion doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
        if ( assert_failed == 0 )
        {
          if ( doc_view[0].next == 0 )
          {
            return;
          }
        }
      }
      if ( doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && link[0] && fc->mode == FORM_MODE_NORMAL && fs[0] )
      {
        textarea_edit( 0, &term[0], &fs[0], &doc_view[0], &link[0] );
      }
      return;
    }
  }
  assert_failed = 0;
  return;
}
enum frame_event_status  textarea_op( struct form_state *fs, struct form_control *fc, int utf8, int (*do_op)( struct form_state *, struct line_info *, int , int  ) )
{
  int edx;
  struct line_info *line;
  int current, state;
  int state_cell;
  if ( assert_failed == 0 )
  {
    if ( fs == 0 || fc[0].next == 0 || fs->value == 0 )
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
      errline = 715;
      elinks_internal( "assertion fs && fs-&gt;value && fc failed!" );
      if ( assert_failed == 0 )
      {
        if ( utf8 )
        {
          line = T/*.210*/(  );
          if ( T/*.210*/(  ) )
          {
            state = fs->state;
            state_cell = fs->state_cell;
            if ( do_op( &fs[0], &line[0], get_textarea_line_number( &line[0], fs->state ), utf8 ) )
            {
              mem_free( &line[0].start );
              return FRAME_EVENT_OK;
            }
            mem_free( &line[0].start );
            if ( fs->state != state || fs->state_cell != state_cell )
            {
              return FRAME_EVENT_OK;
            }
            return FRAME_EVENT_OK;
          }
        }
      }
    }
    else
    {
      assert_failed = 0;
      if ( utf8 )
      {
        line = T/*.210*/(  );
      }
    }
    line = format_text( fs->value, fc->cols, fc->wrap, 0 );
    if ( format_text( fs->value, fc->cols, fc->wrap, 0 ) )
    {
      state = fs->state;
      state_cell = fs->state_cell;
    }
  }
  assert_failed = 0;
  return FRAME_EVENT_OK;
}
void new_pos( struct form_state *fs, struct line_info *line, int current, int max_cells )
{
  int ecx;
  int edx;
  unsigned char *text = &fs->value[ line[ current ].start ];
  unsigned char *end;
  int cells;
  end[0] = fs->value[ line[ current ].end ];
  if ( max_cells >= 1 )
  {
    cells = 0;
    do
    {
    }
    while ( utf8_to_unicode( &text, &end[0] ) != -3 && cells + unicode_to_cell( data ) < max_cells );
    text[0] = text;
    fs->value[0] = fs->value;
  }
  fs->state = text - fs->value;
  return;
}
int do_op_home( struct form_state *fs, struct line_info *line, int current, int utf8 )
{
  int ecx;
  int edx;
  if ( current != -1 )
  {
    if ( utf8 )
    {
      fs->state = line[ current - ( fs->state_cell != 0 ) ].start;
      return 0;
    }
    fs->state = line[ current ].start;
  }
  return 0;
}
int do_op_up( struct form_state *fs, struct line_info *line, int current, int utf8 )
{
  int edx;
  int old_state;
  if ( current != -1 )
  {
    if ( current != fs->state_cell != 0 )
    {
      if ( utf8 == 0 )
      {
        fs->state = ( fs->state + line[ current - 1 ].start ) - line[ current ].start;
        if ( line[ current - 1 ].end < ( fs->state + line[ current - 1 ].start ) - line[ current ].start )
        {
          fs->state = line[ current - 1 ].end;
          return 0;
        }
      }
      else
      {
        old_state = fs->state;
        new_pos( &fs[0], &line[0], current - 1 );
        if ( fs->state != old_state )
        {
          if ( fs->state_cell && line[ current - 2 - 1 ].start == fs->state )
          {
            fs->state_cell = utf8_prevchar( fs->value + fs->state, 1, fs->value ) - fs->value;
            return 0;
          }
          fs->state_cell = 0;
          return 0;
        }
      }
    }
    else
    {
      return 0;
    }
  }
  return 0;
}
int do_op_down( struct form_state *fs, struct line_info *line, int current, int utf8 )
{
  int edx;
  int old_state;
  if ( current != -1 )
  {
    if ( line[ ( current + 1 ) - ( fs->state_cell != 0 ) ].start != -1 )
    {
      if ( utf8 == 0 )
      {
        fs->state = ( fs->state + line[ current + 1 ].start ) - line[ current << 4 ].start;
        if ( line[ current + 1 ].end < ( fs->state + line[ current + 1 ].start ) - line[ current << 4 ].start )
        {
          fs->state = line[ current + 1 ].end;
          return 0;
        }
      }
      else
      {
        old_state = fs->state;
        if ( fs->state_cell )
        {
          new_pos( &fs[0], &line[0], current, line[ current - 1 ].last_char_width + utf8_ptr2cells( &fs->value[ line[ current - 1 ].start ], fs->value + fs->state_cell ) );
          ebp_36 = old_state;
        }
        else
        {
          int len;
          new_pos( &fs[0], &line[0], current + 1, utf8_ptr2cells( &fs->value[ line[ current << 4 ].start ], fs->value + old_state ) );
          ebp_36 = old_state;
        }
        if ( fs->state != old_state )
        {
          if ( fs->state_cell && line[ current + 1 ].start == fs->state )
          {
            fs->state_cell = utf8_prevchar( fs->value + fs->state, 1, fs->value ) - fs->value;
            return 0;
          }
          fs->state_cell = 0;
          return 0;
        }
      }
    }
    else
    {
      return 0;
    }
  }
  return 0;
}
int do_op_end( struct form_state *fs, struct line_info *line, int current, int utf8 )
{
  int ecx;
  int edx;
  if ( current == -1 )
  {
    fs->state = strlen( (char*)fs->value );
    return 0;
  }
  if ( utf8 == 0 )
  {
    fs->state = (unsigned char)( ( line[ current ].end - ( line[ current ].end == line[ current + 1 ].start ) < 0 ) ^ 1 ) ? (unsigned char)( ( line[ current ].end - ( line[ current ].end == line[ current + 1 ].start ) < 0 ) ^ 1 ) ? utf8 : line[ current ].end - ( line[ current ].end == line[ current + 1 ].start ) : line[ current ].end - ( line[ current ].end == line[ current + 1 ].start );
    return 0;
  }
  fs->state = line[ current - ( fs->state_cell != 0 ) ].end;
  if ( ( *(char*)(line + ( ( current - ( fs->state_cell != 0 ) ) << 4 ) + 12) & 2 ) & 255 )
  {
    fs->state_cell = utf8_prevchar( fs->value + line[ current - ( fs->state_cell != 0 ) ].end, 1, fs->value ) - fs->value;
  }
  fs->state_cell = 0;
  return 0;
}
int do_op_bob( struct form_state *fs, struct line_info *line, int current, int utf8 )
{
  int ecx;
  int edx;
  if ( current != -1 )
  {
    fs->state -= line[ current ].start;
    if ( line->end < fs->state - line[ current ].start )
    {
      fs->state = line->end;
    }
  }
  return 0;
}
int do_op_eob( struct form_state *fs, struct line_info *line, int current, int utf8 )
{
  int eax;
  int edx;
  if ( current == -1 )
  {
    fs->state = strlen( (char*)fs->value );
  }
{
  int last;
  get_textarea_line_number( &line[0], strlen( (char*)fs->value ) );
  if ( assert_failed == 0 )
  {
    assert_failed = last == -1;
    if ( !(_Bool)( last != -1 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
      errline = 986;
      elinks_internal( "assertion last != -1 failed: line info corrupt" );
      ebp_28 = get_textarea_line_number( &line[0], strlen( (char*)fs->value ) );
    }
  }
  fs->state = ( fs->state + line[ ebp_28 ].start ) - line[ current << 4 ].start;
  if ( line[ get_textarea_line_number( &line[0], strlen( (char*)fs->value ) ) ].end < ( fs->state + line[ get_textarea_line_number( &line[0], strlen( (char*)fs->value ) ) ].start ) - line[ current << 4 ].start )
  {
    fs->state = line[ ebp_28 ].end;
  }
}
  return 0;
}
enum frame_event_status  textarea_op_home( struct form_state *fs, struct form_control *fc, int utf8 )
{
  int ecx;
  int edx;
  fs = &do_op_home;
}
enum frame_event_status  textarea_op_up( struct form_state *fs, struct form_control *fc, int utf8 )
{
  int ecx;
  int edx;
  fs = &do_op_up;
}
enum frame_event_status  textarea_op_down( struct form_state *fs, struct form_control *fc, int utf8 )
{
  int ecx;
  int edx;
  fs = &do_op_down;
}
enum frame_event_status  textarea_op_end( struct form_state *fs, struct form_control *fc, int utf8 )
{
  int ecx;
  int edx;
  fs = &do_op_end;
}
enum frame_event_status  textarea_op_bob( struct form_state *fs, struct form_control *fc, int utf8 )
{
  int ecx;
  int edx;
  fs = &do_op_bob;
}
enum frame_event_status  textarea_op_eob( struct form_state *fs, struct form_control *fc, int utf8 )
{
  int ecx;
  int edx;
  fs = &do_op_eob;
}
enum frame_event_status  textarea_op_enter( struct form_state *fs, struct form_control *fc, int utf8 )
{
  if ( assert_failed == 0 )
  {
    if ( fs[0] && fc[0] && fs->value )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
      errline = 1091;
      elinks_internal( "assertion fs && fs-&gt;value && fc failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( fc->mode == FORM_MODE_NORMAL && strlen( (char*)fs->value ) < fc->maxlength && insert_in_string( &fs->value, fs->state, "\n", 1 ) )
    {
      fs->state++;
      return FRAME_EVENT_REFRESH;
    }
    return FRAME_EVENT_OK;
  }
B2:  assert_failed = 0;
  return FRAME_EVENT_OK;
}
int do_op_left( struct form_state *fs, struct line_info *line, int current, int utf8 )
{
  int old_state;
  int new_state;
  if ( utf8 == 0 )
  {
    fs->state = (unsigned char)( ( fs->state - 1 < 0 ) ^ 1 ) ? utf8 : fs->state - 1;
  }
  if ( fs->state_cell )
  {
    fs->state = fs->state_cell;
    fs->state_cell = 0;
    return 0;
  }
  old_state = fs->state;
  new_state -= fs->value;
  if ( old_state != new_state - fs->value )
  {
    if ( line[ current ].start == old_state && ( ( *(char*)(line[ current ].start + 12) & 1 ) & 255 ) )
    {
      fs->state_cell = new_state;
    }
    fs->state = new_state;
    return 0;
  }
  return 0;
}
int do_op_right( struct form_state *fs, struct line_info *line, int current, int utf8 )
{
  unsigned char *text;
  int old_state;
  if ( utf8 == 0 )
  {
    fs->state = strlen( (char*)fs->value ) <= fs->state + 1 ? fs->state + 1 : strlen( (char*)fs->value );
  }
  if ( fs->state_cell == 0 )
  {
    text[0] = fs->value[ fs->state ];
    text = &fs->value[ fs->state ];
    old_state = fs->state;
    utf8_to_unicode( &text, (unsigned char*)__rawmemchr( &fs->value[ fs->state ], 0 ) );
    fs->state = text - fs->value;
    if ( fs->state != text - fs->value )
    {
      if ( ( *(char*)(line + ( ( current << 4 ) << 4 ) + 12) & 2 ) & 255 )
      {
        old_state = text - fs->value != *(int*)(line + 4) ? old_state : 0;
        fs->state_cell = text - fs->value != *(int*)(line + 4) ? old_state : 0;
      }
    }
    else
    if ( ( ( line[ current << 4 ].bits_at_12/*.1_1of4*/ & 2 ) & 255 ) == 0 )
      goto B5;
  }
B5:  fs->state_cell = 0;
  return 0;
}
enum frame_event_status  textarea_op_left( struct form_state *fs, struct form_control *fc, int utf8 )
{
  int ecx;
  int edx;
  fs = &do_op_left;
}
enum frame_event_status  textarea_op_right( struct form_state *fs, struct form_control *fc, int utf8 )
{
  int ecx;
  int edx;
  fs = &do_op_right;
}
void set_textarea( struct document_view *doc_view, int direction )
{
  int eax;
  int edx;
  struct form_control *fc;
  struct form_state *fs;
  struct link *link;
  int utf8;
  if ( assert_failed == 0 )
  {
    if ( doc_view->vs == 0 )
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
      errline = 1193;
      elinks_internal( "assertion doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
      if ( assert_failed == 0 )
        goto B4;
    }
B4:    assert_failed = ( direction != 1 ) & ( direction != -1 );
    if ( ( direction != 1 ) & ( direction != -1 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
      errline = 1194;
      elinks_internal( "assertion direction == 1 || direction == -1 failed!" );
      if ( assert_failed == 0 )
        goto B5;
    }
B5:    if ( doc_view->vs->current_link >= 0 && *(int*)(*(int*)(ebp_28 + 24) + 32) < doc_view->document->nlinks && link[0] && link->type == LINK_AREA )
    {
      fc = &link->data.name[0];
      assert_failed = *(int*)(link[0].accesskey + 48) == 0;
      if ( !(_Bool)( *(int*)(link[0].accesskey + 48) != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/textarea.c";
        errline = 1202;
        elinks_internal( "assertion fc != NULL failed: link has no form control" );
        if ( assert_failed )
          goto B2;
      }
      if ( fc->mode != FORM_MODE_DISABLED && fs[0] && fs->value )
      {
        utf8 = utf8/*.1_1of4*/;
        if ( direction == 1 )
        {
          textarea_op_eob( &fs[0], &fc[0], utf8 );
          return;
        }
        else
        {
          textarea_op_bob( &fs[0], &fc[0], utf8 );
          direction = direction;
          return;
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
#if 0
#endif
