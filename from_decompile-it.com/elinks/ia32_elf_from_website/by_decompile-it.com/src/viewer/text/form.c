#include "form.c.h"
struct submitted_value *init_submitted_value( unsigned char *name, unsigned char *value, enum form_type  type, struct form_control *fc, int position )
{
  struct submitted_value *sv;
  if ( mem_alloc( 28 ) )
  {
    sv->value = stracpy( value );
    if ( sv->value )
    {
      sv->name = stracpy( name );
      if ( sv->name == 0 )
        mem_free( (void*)sv->value );
      else
      {
        sv->type = type;
        sv->form_control = fc;
        sv->position = position;
        return &sv[0];
      }
    }
    &sv[0] = 0;
    mem_free( (void*)sv[0].next );
    return &sv[0];
  }
  else
  {
    return &sv[0];
  }
}
void done_submitted_value( struct submitted_value *sv )
{
  if ( sv )
  {
    void *p = (void*)sv->value;
    if ( sv->value )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)sv->name;
    if ( sv->name )
      mem_free( &((int*)p)[0] );
    sv = &sv[0];
  }
  }
  else
  {
    return;
  }
}
unsigned char *_( unsigned char *msg, struct terminal *term )
{
  if ( msg[0] && msg )
  {
    if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
      current_charset = get_terminal_codepage( &term[0] );
    }
    msg[0] = gettext( &msg[0] );
  }
  return &msg[0];
}
void fixup_select_state( struct form_control *fc, struct form_state *fs )
{
  int i;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( fs[0].form_view == 0 ) | ( fc[0].next == 0 ) ) & 1;
    if ( ( ( fs[0].form_view == 0 ) | ( fc[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 101;
      elinks_internal( "assertion fc && fs failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( fs->state < 0 )
    {
    }
    else
    if ( fc->nvalues <= fs->state )
    {
    }
    else
    {
      if ( strcmp( (char*)fc->values[ fs->state ], (char*)fs->value ) == 0 )
      {
        return;
      }
    }
    if ( esi >= 1 )
    {
      i = 0;
      do
      {
        if ( strcmp( (char*)fc->values[ i ], (char*)fs->value ) == 0 )
          break;
        i++;
      }
      while ( i + 1 < fc->nvalues );
    }
    fs->state = 0;
    if ( fs->value )
      mem_free( (void*)fs->value );
    fs->value = eax;
    return;
  }
B2:  assert_failed = 0;
  return;
}
void selected_item( struct terminal *term, void *item_, void *ses_ )
{
  int eax;
  int ecx;
  int edx;
  struct document_view *doc_view;
  struct link *link;
  struct form_state *fs;
  struct form_control *fc;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( ((int*)ses_)[0] == 0 ) | ( term == 0 ) ) & 1;
    if ( ( ( ((int*)ses_)[0] == 0 ) | ( term == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 133;
      elinks_internal( "assertion term && ses failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    doc_view = current_frame( &((int*)ses_)[0] );
    if ( assert_failed == 0 )
    {
      if ( current_frame( &((int*)ses_)[0] ) && doc_view->vs && doc_view->document->options.assume_cp )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
        errline = 137;
        elinks_internal( "assertion doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
        if ( assert_failed == 0 )
        {
          if ( doc_view[0].next == 0 )
          {
            return;
          }
        }
      }
      if ( doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && link[0] && link->type == LINK_SELECT )
      {
        fc = &link->data.name[0];
        if ( find_form_state( &doc_view[0], &link->data.name[0] ) )
        {
          if ( ((int*)item_)[0] >= 0 && ((int*)item_)[0] < fc->nvalues )
          {
            *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 20) = ((int*)item_)[0];
            if ( *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 16) )
            {
              mem_free( *(int*)(find_form_state( &doc_view[0], &link->data.name[0] ) + 16) );
              fc = &fc[0];
              fs = &fs[0];
            }
            fs->value = stracpy( fc->values[ ((int*)item_)[0] ] );
            fc = &fc[0];
          }
          fixup_select_state( &fc[0] );
        }
        item_ = (void*)doc_view[0].next;
        term = &((int*)ses_)[0];
        ses_ = 0;
      }
      else
      {
        return;
      }
    }
  }
  assert_failed = 0;
  return;
}
void *mem_align_alloc__( void **ptr, size_t old, size_t new, size_t objsize, size_t mask )
{
  int ecx;
  if ( ( ( old + mask ) & ~mask ) < ( ( new + mask ) & ~mask ) )
  {
    *ebp_28 = objsize * ( ( new + mask ) & ~mask );
    if ( mem_realloc( ptr[0], objsize * ( ( new + mask ) & ~mask ) ) )
    {
      ptr[0] = mem_realloc( ptr[0], objsize * ( ( new + mask ) & ~mask ) );
      memset( ptr[0] + ( objsize * ( ( old + mask ) & ~mask ) ), 0, ( objsize * ( ( new + mask ) & ~mask ) ) - ( objsize * ( ( old + mask ) & ~mask ) ) );
    }
    else
    {
      return 0;
    }
  }
  return 0;
}
void init_form_state( struct document_view *doc_view, struct form_control *fc, struct form_state *fs )
{
  int eax;
  int doc_cp, viewer_cp;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( fs[0].form_view == 0 ) | ( fc[0].next == 0 ) ) & 1;
    if ( ( ( fs[0].form_view == 0 ) | ( fc[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 163;
      elinks_internal( "assertion fc && fs failed!" );
      if ( assert_failed )
        goto B2;
    }
    doc_cp = *(int*)(*(int*)(ebp_36 + 20) + 248);
    viewer_cp = get_terminal_codepage( *(int*)(*(int*)(*(int*)(ebp_36 + 16) + 8) + 20) );
    if ( fs->value )
      mem_free( (void*)fs->value );
    fs->value = 0;
    switch ( fc->type )
    {
    case FC_TEXT:
    case FC_PASSWORD:
      if ( get_form_history_value( fc->form->action, fc->name ) )
      {
        stracpy( get_form_history_value( fc->form->action, fc->name ) );
      }
      fs->value = stracpy( get_form_history_value( fc->form->action, fc->name ) );
      if ( fs->value == 0 )
      else
        strlen( (char*)fs->value );
        fs->state = strlen( (char*)fs->value );
        if ( fc->type == FC_TEXTAREA )
          fs->state_cell = 0;
    case FC_TEXTAREA:
      fs->value = convert_string_elinks( get_translation_table( doc_cp, viewer_cp ), fc->default_value, strlen( (char*)fc->default_value ), viewer_cp, CSM_FORM, &fs->state, 0, 0 );
      if ( fs->value )
        strlen( (char*)fs->value );
      fs->state = strlen( (char*)fs->value );
      break;
    case FC_FILE:
      fs->state = 0;
      fs->value = stracpy( "" );
      break;
    case FC_SELECT:
      fs->value = convert_string_elinks( get_translation_table( doc_cp, viewer_cp ), fc->default_value, strlen( (char*)fc->default_value ), viewer_cp, CSM_FORM, &fs->state, 0, 0 );
      fs->state = fc->default_state;
      break;
    case FC_CHECKBOX:
    case FC_RADIO:
      fs->state = fc->default_state;
    case FC_SUBMIT:
    case FC_IMAGE:
    case FC_RESET:
    case FC_BUTTON:
    case FC_HIDDEN:
      fs->value = stracpy( fc->default_value );
    default:
      return;
      break;
    }
    fs->vpos = 0;
    return;
  }
B2:  assert_failed = 0;
  return;
}
struct form_state *find_form_state( struct document_view *doc_view, struct form_control *fc )
{
  int eax;
  int ecx;
  struct view_state *vs;
  struct form_state *fs;
  int n;
  if ( assert_failed == 0 )
  {
    if ( doc_view && fc[0] && doc_view->vs )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 235;
      elinks_internal( "assertion doc_view && doc_view-&gt;vs && fc failed!" );
      if ( assert_failed )
        goto B2;
    }
    vs = doc_view->vs;
    n = fc->g_ctrl_num;
    if ( fc->g_ctrl_num < doc_view->vs->form_info_len )
      fs[0].form_view = doc_view->vs->form_info->form_view;
    else
    {
      int nn = n + 1;
      if ( mem_align_alloc__( &vs->form_info[0].form_view[0].next[0] ) )
      {
        vs->form_info = (struct form_state*)mem_align_alloc__( &vs->form_info[0].form_view[0].next[0] );
        vs->form_info_len = nn;
      }
      else
      {
        return &fs[0];
      }
    }
    fs[0].form_view = fs[ n ].form_view;
    if ( fs->form_view == 0 || fc->form->form_num != fs->position || fc->g_ctrl_num != fs->g_ctrl_num || fc->position != fs->position || fc->type != fs->type )
    {
      void *p = (void*)fs->value;
      if ( fs->value )
        mem_free( &((int*)p)[0] );
      memset( fs[0].form_view, 0, 36 );
      fs->form_view = find_form_view_in_vs( doc_view->vs, fc->form->form_num );
      fs->g_ctrl_num = fc->g_ctrl_num;
      fs->position = fc->position;
      fs->type = fc->type;
      init_form_state( doc_view, &fc[0], &fs[0] );
      return &fs[0];
    }
    else
    {
      return &fs[0];
    }
  }
B2:  assert_failed = 0;
  fs[0].form_view = 0;
  return &fs[0];
}
struct string *add_bytes_to_string__( struct string *string, unsigned char *bytes, int length )
{
  if ( assert_failed == 0 )
  {
    if ( bytes[0] && string[0] && length >= 0 )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
      errline = 255;
      elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
      if ( assert_failed )
        goto B2;
    }
    if ( length )
    {
      if ( mem_align_alloc__( (void**)&string[0].source, string->length, string->length + length + 1, 1, 255 ) )
      {
        memcpy( string[ string->length >> 3 ].source, &bytes[0], length );
        string[ ( string->length + length ) >> 3 ].source = 0;
        string->length += length;
        return &string[0];
      }
      string[0].source = 0;
      return &string[0];
    }
    else
    {
      return &string[0];
    }
  }
B2:  assert_failed = 0;
  string[0].source = 0;
  length = length;
  return &string[0];
}
struct form_control *find_form_control( struct document *document, struct form_state *fs )
{
  struct form *form = &document->forms.next[0];
  struct form_control *fc;
  if ( document->forms.next != document->forms.next )
  {
    if ( form->form_num == fs->position )
    {
      &fc[0] = &form->items.next[0];
      if ( form->items.next != form->items.next )
      {
        do
        {
          if ( fc->g_ctrl_num == fs->g_ctrl_num && fc->position == fs->position && fc->type == fs->type )
            break;
          &fc[0] = &fc;
        }
        while ( fc->next != form->items.next );
      }
      return 0;
    }
    else
    {
      do
      {
        form = &form;
        if ( form->next != document->forms.next )
          continue;
      }
      while ( fs->position != form->form_num );
    }
  }
  form = 0;
}
struct form_view *find_form_view_in_vs( struct view_state *vs, int form_num )
{
  struct form_view *fv;
  if ( assert_failed == 0 )
  {
    assert_failed = vs[0].doc_view == 0;
    if ( !(_Bool)( vs[0].doc_view != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 308;
      elinks_internal( "assertion vs failed!" );
    }
  }
  &fv[0] = &vs->forms.next[0];
  if ( vs->forms.next != vs->forms.next )
  {
    do
    {
      if ( fv->form_num == form_num )
        break;
      &fv[0] = &fv;
    }
    while ( fv->next != vs->forms.next );
  }
  fv->form_num = form_num;
  fv->prev = &vs->forms.next[0];
  fv = &vs->forms.next[0];
  vs->forms.next = (void*)fv[0].next;
  fv->prev = &fv[0];
  return mem_calloc( 1, 12 );
}
struct form_view *find_form_view( struct document_view *doc_view, struct form *form )
{
  form = &form->form_num;
  doc_view = doc_view->vs->doc_view;
}
struct form *find_form_by_form_view( struct document *document, struct form_view *fv )
{
  struct form *form;
  &form[0] = &document->forms.next[0];
  if ( document->forms.next != document->forms.next )
  {
    if ( fv->form_num != form->form_num )
    {
      do
      {
        &form[0] = &form;
        if ( form->next != document->forms.next )
          continue;
      }
      while ( fv->form_num != form->form_num );
      return &form;
    }
    else
    {
      return &form;
    }
  }
  return &form;
}
void done_form_state( struct form_state *fs )
{
{
  void *p = (void*)fs->value;
  if ( fs->value )
  {
    fs = &((int*)p)[0];
  }
  return;
}
}
void done_form_view( struct form_view *fv )
{
}
name/*union*/int get_current_state( struct session *ses )
{
  int eax;
  int edx;
  struct document_view *doc_view;
  struct link *link;
  struct form_state *fs;
  if ( assert_failed == 0 )
  {
    assert_failed = ses[0].next == 0;
    if ( !(_Bool)( ses[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 369;
      elinks_internal( "assertion ses failed!" );
      if ( assert_failed )
      {
      }
    }
    current_frame( &ses[0] );
    if ( assert_failed == 0 )
    {
      if ( doc_view[0] && doc_view->vs && doc_view->document )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
        errline = 373;
        elinks_internal( "assertion doc_view && doc_view-&gt;vs && doc_view-&gt;document failed!" );
        if ( assert_failed == 0 )
        {
          if ( doc_view[0].next == 0 )
          {
            return -1;
          }
        }
      }
      if ( doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && link[0] && link->type == LINK_SELECT && fs[0] )
      {
        return -1;
      }
      return -1;
    }
  }
  assert_failed = 0;
  return -1;
}
void draw_form_entry( struct terminal *term, struct document_view *doc_view, struct link *link )
{
  int eax;
  int ecx;
  int edx;
  struct form_state *fs;
  struct form_control *fc;
  struct view_state *vs;
  int dx, dy;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && term && doc_view->document && link[0] && doc_view->vs )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 394;
      elinks_internal( "assertion term && doc_view && doc_view-&gt;document && doc_view-&gt;vs && link failed!" );
      if ( assert_failed == 0 )
        goto B11;
    }
B11:    if ( link->type > 1 )
    {
      assert_failed = link->data.name == 0;
      if ( (_Bool)( link->data.name != 0 ) )
      {
        fs = find_form_state( &doc_view[0], &link->data.name[0] );
        if ( fs )
        {
          dx = doc_view->box.x - doc_view->vs->x;
          dy = doc_view->box.y - doc_view->vs->y;
name/*union*/          switch ( name/*union*/link->data.name/*union*/ )
          {
          case name/*union*/0:
          case name/*union*/1:
          case name/*union*/2:
            if ( link->npoints && doc_view->box.y <= link->points->y + dy && link->points->y + dy < doc_view->box.height + doc_view->box.y )
            {
              if ( ( ( term->bits_at_56/*.1_1of4*/ & 2 ) & 255 ) == 0 )
              {
                if ( fs->vpos < ( fs->state + 1 ) - *(int*)(0 + 48) )
                  fs->vpos = ( fs->state + 1 ) - *(int*)(0 + 48);
                else
                if ( fs->vpos <= fs->state )
                {
                }
                else
                  fs->vpos = fs->state;
                if ( link >= 1 )
                {
                  dy = ~strlen( (char*)fs->value ) - 1 - ( fs + 28 );
                  fc = 0;
                  while ( ebx < doc_view->box.x || doc_view->box.width + edx <= ebx )
                  {
                    if ( fc->size <= 0 + 1 + 1 )
                      break;
                  }
                  dx = fs->value;
                  if ( fs->value == 0 || dy <= 0 + 1 || 0 - strlen( (char*)fs->value ) > 0 )
                  {
                  }
                  else
                  if ( fc->type != FC_PASSWORD )
                  {
                  }
                  draw_char_data( term, link->points->x + dx, link->points->y + dy, *(char*)(dx + strlen( (char*)fs->value ) + 0) );
                  fc = &fc[0];
                }
                else
                {
                  return;
                }
              }
              else
              {
                for ( ; fs->value; fs->vpos = ptr - fs->value )
                {
                  strlen( (char*)fs->value );
                  if ( fs->state < 0 )
                    fs->state = 0;
                  else
                  if ( fs->state <= strlen( "" ) )
                  {
                  }
                  else
                    fs->state = strlen( &cells );
                  if ( fs->vpos < 0 )
                    fs->vpos = 0;
                  else
                  if ( fs->state < fs->vpos )
                    fs->vpos = fs->state;
                  dx = 0;
                  while ( dx < *(int*)(0 + 48) )
                  {
                    unicode_val_T data;
                    int cells, cell;
                    unsigned char *maybe_in_view = "" + fs->vpos;
                    dy = *(int*)(0 + 48);
                    if ( eax + dx <= *(int*)(ebp_52 + 48) )
                    {
                      if ( doc_view->box.x <= link->points->x + dx + dx && cells + link->points->x + dx + dx <= doc_view->box.width + doc_view->box.x )
                      {
                        cell = 1;
                        draw_char_data( term, ebp_56, ebp_68, esi );
                        if ( cells > 1 )
                        {
                          dx = doc_view[0].next;
                          cell = cell;
                          do
                          {
                            draw_char_data( term, cell + link->points->x + dx + dx, link->points->y + dy, -3 );
                            cell++;
                          }
                          while ( cells <= cell );
                          doc_view = &dx;
                          dx += unicode_to_cell( cell );
                        }
                        else
                        {
                        }
                      }
                      else
                      {
                      }
                    }
                    if ( cells >= 1 )
                    {
                      cell = 0;
                      cells = cells;
                      do
                      {
                        if ( doc_view->box.x <= cell + link->points->x + dx + dx && doc_view->box.x < doc_view->box.width + link->points->x + dx + dx && dx + cell < dy )
                        {
                          draw_char_data( term, edx, ebp_68, 32 );
                          *ebp_84 = cells;
                          dy = *(int*)(0 + 48);
                        }
                        cell++;
                      }
                      while ( cell + 1 < cells );
                    }
                  }
                  fs->value[0] = fs->value;
                  if ( ebp_56 && fs->value && link->points[ fs ].y + dy < fs->state + fs->value )
                  {
                    unsigned char *ptr = &ptr[0];
                    int cells = *(int*)(0 + 48);
                    ptr = utf8_step_backward( ptr, fs->value, cells - ( utf8_to_unicode( &ptr ) == -3 ), *(int*)(0 + 20) != 1, 0 );
                    if ( fs->vpos == ptr - fs->value )
                      break;
                    //fs->vpos = ptr - fs->value;
                  }
                  else
                    break;
                }
                strlen( (char*)fs->value );
              }
            }
            else
            {
              return;
            }
            break;
          case name/*union*/3:
            draw_textarea( term, fs, &doc_view[0], &link[0] );
            return;
            break;
          case name/*union*/4:
          case name/*union*/5:
          {
            unsigned char *s;
            unsigned char *text, *end, *last_in_view;
            int len;
            int i, x, y;
            if ( link->npoints > 1 && doc_view->box.x <= x + dx && doc_view->box.y <= y + dy && x < doc_view->box.width + doc_view->box.x && y < doc_view->box.height + doc_view->box.y )
            {
              draw_char_data( term, x, y, ( ( 0 - ( ( fs->state < 1 ) & 1 ) ) & -56 ) + 88 );
            }
            return;
          }
            break;
          case name/*union*/6:
            fixup_select_state( 0, fs );
            if ( ( ( term->bits_at_56/*.1_1of4*/ & 2 ) & 255 ) == 0 )
            {
              if ( *(int*)(*(int*)(0 + 76) + ( fs->state << 2 )) )
              {
              }
              if ( link->npoints >= 1 )
              {
                link = &link[0];
                do
                {
                  if ( doc_view->box.x <= link->points[ 0 ].x + dx && doc_view->box.y <= link->points[ 0 + 1 ].y + dy && link->points[ 0 + 1 ].x + dx < doc_view->box.width + doc_view->box.x && ebp_56 < doc_view->box.height + fs->vpos )
                  {
                    draw_char_data( term, eax, ebp_56, edx );
                  }
                }
                while ( 0 + 1 + 1 < link->npoints );
              }
              else
            }
            else
            {
              if ( link->npoints >= 1 )
              {
              {
                unicode_val_T data;
                int cell;
                &doc_view = &doc_view;
                do
                {
                  if ( link->points[ edi ].x + dx < *(int*)(edx + 28) || doc_view->box.x + dy < doc_view->box.y || doc_view->box.width + utf8_ptr2cells( "", (unsigned char*)__rawmemchr( "", 0 ) ) <= doc_view || doc_view->box.y + doc_view->box.height <= link->points[ fs ].y + dy )
                  {
                  }
                  else
                  {
                    if ( ebp_56 <= edi )
                    {
                    }
                    else
                    {
                      *ebp_84 = doc_view[0].next;
                      *ebp_88 = ebp_88;
                      if ( eax == 2 )
                      {
                        if ( edi < ebp_56 )
                        {
                          fs = ebx + 1;
                          draw_char_data( term, ebx, ebp_68, ecx );
                          *ebp_84 = doc_view[0].next;
                        }
                        else
                        {
                        }
                      }
                    }
                    draw_char_data( term, ebx, ebp_68, ecx );
                  }
                }
                while ( link->npoints <= 0 + 1 );
              }
              }
              else
            }
          default:
            return;
            break;
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
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
    errline = 398;
    elinks_internal( "assertion fc != NULL failed: link %d has no form control" );
    if ( assert_failed == 0 )
    {
      fs = find_form_state( &doc_view[0], &link->data.name[0] );
    }
  }
  assert_failed = 0;
  return;
}
void draw_forms( struct terminal *term, struct document_view *doc_view )
{
  int eax;
  struct link *l1, *l2;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( doc_view[0].next == 0 ) | ( term[0].next == 0 ) ) & 1;
    if ( ( ( doc_view[0].next == 0 ) | ( term[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 638;
      elinks_internal( "assertion term && doc_view failed!" );
      if ( assert_failed )
        goto B2;
    }
    l1 = get_first_link( &doc_view[0] );
    if ( l2[0].accesskey == 0 || l1[0].accesskey == 0 )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = ( ( l2[0].accesskey != 0 ) | ( l1[0].accesskey != 0 ) ) & 1;
        if ( ( ( l2[0].accesskey != 0 ) | ( l1[0].accesskey != 0 ) ) & 1 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
          errline = 645;
          elinks_internal( "assertion !l1 && !l2 failed: get_first_link == %p, get_last_link == %p" );
        }
        return;
      }
      else
      {
        return;
      }
    }
    else
    {
      while ( 1 )
      {
        if ( l1->type > 1 && l1->data )
        {
          draw_form_entry( &term[0], &doc_view[0], &l1[0] );
          l2 = &l2[0];
        }
        if ( l2[0].accesskey <= l1[0].accesskey )
          break;
        l1++;
      }
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
void done_submitted_value_list( struct list_head_elinks *list )
{
  struct submitted_value *sv;
  if ( assert_failed == 0 )
  {
    assert_failed = list[0].next == 0;
    if ( !(_Bool)( list[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 665;
      elinks_internal( "assertion list failed!" );
      if ( assert_failed )
      {
        list = &list[0];
      }
    }
    sv = &list->next[0];
    if ( list->next != list[0].next )
    {
      list = &list[0];
      do
      {
        sv = sv->prev;
        sv->next->prev = sv->prev;
        &sv->prev = &sv;
        done_submitted_value( &list->next[0] );
      }
      while ( list[0].next == sv->next );
    }
    return;
  }
  assert_failed = 0;
  return;
}
unsigned char *encode_crlf( struct submitted_value *sv )
{
  int ecx;
  int edx;
  struct string newtext;
  int i;
  if ( assert_failed == 0 )
  {
    if ( sv[0] && sv->value )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 804;
      elinks_internal( "assertion sv && sv-&gt;value failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( init_string( &newtext ) )
    {
      if ( sv->value[0] )
      {
        i = 0;
        do
        {
          if ( i/*.1_1of4*/ == sv->value )
          {
            if ( sv->value[ i ] == 10 )
            {
              i++;
            }
          }
          else
          if ( sv->value[0] != 10 )
          {
            add_char_to_string( &newtext, sv->value[0] );
            sv->value[0] = sv->value;
          }
          add_crlf_to_string( &newtext );
          i++;
          if ( sv->value[ i ] )
            continue;
          else
            break;
        }
        while ( i/*.1_1of4*/ );
      }
      return newtext.source;
    }
    else
    {
      return 0;
    }
  }
B2:  assert_failed = 0;
  return 0;
}
void encode_multipart( struct session *ses, struct list_head_elinks *l, struct string *data, struct boundary_info *boundary, int cp_from, int cp_to )
{
  struct conv_table *convert_table;
  struct submitted_value *sv;
  if ( assert_failed == 0 )
  {
    if ( l[0] && ses[0] && boundary && data[0] )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 985;
      elinks_internal( "assertion ses && l && data && boundary failed!" );
      if ( assert_failed )
        assert_failed = 0;
        if ( 0 ^ 0 )
        {
          __stack_chk_fail(  );
        }
        return;
    }
    boundary = boundary;
    memset( boundary, 0, 40 );
    boundary->string[0] = 808464432;
    boundary->string[4] = 808464432;
    boundary->string[8] = 808464432;
    boundary->string[12] = 808464432;
    boundary->string[16] = 808464432;
    boundary->string[20] = 808464432;
    boundary->string[24] = 808464432;
    boundary->string[28] = 808464432;
    sv = &l->next[0];
    if ( l->next != l[0].next )
    {
      convert_table = 0;
      do
      {
        add_to_string( &data[0], "--" );
        if ( 0 < 0 )
        {
          if ( mem_realloc( (void*)boundary->offsets, 0 << 2 ) )
          {
            boundary->offsets = (int*)mem_realloc( (void*)boundary->offsets, 0 << 2 );
            memset( boundary + 4 + ( 0 << 2 ), 0, ( 0 << 2 ) - ( 0 << 2 ) );
          }
          else
          {
            if ( assert_failed == 0 )
            {
              if ( data[0].source )
                assert_failed = 0;
              else
              {
                assert_failed = 1;
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                errline = 255;
                elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                if ( assert_failed )
                  goto B23;
              }
              if ( 0 < 0 )
              {
                if ( mem_realloc( (void*)data->source, 0 ) )
                {
                  data = (struct string*)mem_realloc( (void*)data->source, 0 );
                  memset( data[0].source + 0, 0, 0 - 0 );
                }
                else
                {
                  add_crlf_to_string( &data[0] );
                  add_to_string( &data[0], "Content-Disposition: form-data; name=\"" );
                  add_to_string( &data[0], sv->name );
                  add_char_to_string( &data[0], 34 );
                  if ( sv->type == FC_FILE )
                  {
                    int fh;
                    unsigned char buffer[1024];
                    add_to_string( &data[0], "; filename=\"" );
                    add_to_string( &data[0], get_filename_position( sv->value ) );
                    add_char_to_string( &data[0], 34 );
                    if ( strrchr( (char*)sv->value, 46 ) && type[0] )
                    {
                      add_crlf_to_string( &data[0] );
                      add_to_string( &data[0], "Content-Type: " );
                      add_to_string( &data[0], &type[0] );
                      mem_free( &type[0] );
                    }
                    add_crlf_to_string( &data[0] );
                    add_crlf_to_string( &data[0] );
                    if ( sv->value[0] )
                    {
                      unsigned char *filename;
                      if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) )
                      {
                        *(int*)(__errno_location(  )) = 1;
                      }
                      else
                      {
                        if ( filename[0] )
                        {
                          fh = open64( &filename[0], 0 );
                          mem_free( &filename[0] );
                          if ( fh != -1 )
                          {
                            set_bin( fh );
                          {
                            while ( read( fh, buffer, 1024 ) == -1 )
                            {
                              if ( read( fh, buffer, 1024 ) )
                              {
                                if ( assert_failed == 0 )
                                {
                                  if ( data[0] && read( fh, buffer, 1024 ) >= 0 )
                                    assert_failed = 0;
                                  else
                                  {
                                    assert_failed = 1;
                                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                                    errline = 255;
                                    elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                                    if ( assert_failed )
                                      goto B110;
                                  }
                                  if ( ( ( data->length + 255 ) & -256 ) < 0 )
                                  {
                                    if ( mem_realloc( (void*)data->source, data->length + data->length ) == 0 )
                                      continue;
                                    else
                                    {
                                      data = (struct string*)mem_realloc( (void*)data->source, data->length + data->length );
                                      memset( data[0].source + ( ( data->length + 255 ) & -256 ), 0, 0 - ( ( data->length + 255 ) & -256 ) );
                                    }
                                  }
                                  if ( data->source == 0 )
                                    continue;
                                  else
                                  {
                                    memcpy( data->length + data->source, buffer, __result );
                                    data[ ( data->length + __result ) >> 3 ].source = 0;
                                    data->length += __result;
                                  }
                                }
B110:                                assert_failed = 0;
                              }
                              else
                              {
                                sv = &sv[0];
                                close( data->length << 2 );
                              }
                            }
                            if ( *(int*)(__errno_location(  )) == 4 )
                              continue;
                            else
                            {
                              sv = &sv[0];
                              close( fh );
                            }
                          }
                          }
                        }
                      }
                    {
                      void *p = (void*)boundary->offsets;
                      if ( boundary->offsets )
                        mem_free( &((int*)p)[0] );
                      done_string( &data[0] );
                      info_box( ses->tab->term, MSGBOX_FREE_TEXT, "Error while posting form", ALIGN_CENTER, msg_text( ses->tab->term, "Could not load file %s: %s" ) );
                    }
                    }
                  }
                  else
                  {
                    add_crlf_to_string( &data[0] );
                    add_crlf_to_string( &data[0] );
                    if ( sv->type == FC_TEXTAREA || sv->type <= 1 )
                    {
                      unsigned char *p;
                      if ( convert_table == 0 )
                      {
                        convert_table = get_translation_table( cp_from, cp_to );
                      }
                      if ( p[0] )
                      {
                        add_to_string( &data[0], &p[0] );
                        mem_free( &p[0] );
                      }
                    }
                    else
                      add_to_string( &data[0], sv->value );
                  }
                  add_crlf_to_string( &data[0] );
                  sv = &sv;
                }
              }
              if ( data->source )
              {
                data->length = boundary->string[4];
                data->length = boundary->string[8];
                data->length = boundary->string[12];
                data->length = boundary->string[16];
                data->length = boundary->string[20];
                data->length = boundary->string[24];
                data->length = boundary->string[28];
                data->string = 0;
                data->length += 32;
              }
            }
B23:            assert_failed = 0;
            sv = &sv[0];
          }
        }
        if ( boundary->offsets )
        {
          boundary->offsets[ boundary->count ] = data->length;
          boundary->count++;
        }
      }
      while ( l[0].next == sv->next );
    }
    add_to_string( &data[0], "--" );
    if ( ( ( boundary->count + 255 ) & -256 ) < ( ( boundary->count + 256 ) & -256 ) )
    {
      if ( mem_realloc( (void*)boundary->offsets, ( ( boundary->count + 256 ) & -256 ) << 2 ) )
      {
        boundary->offsets = (int*)eax;
        memset( boundary + 4 + ( ( ( boundary->count + 255 ) & -256 ) << 2 ), 0, ( ( ( boundary->count + 256 ) & -256 ) << 2 ) - ( ( ( boundary->count + 255 ) & -256 ) << 2 ) );
      }
      else
      {
        if ( assert_failed == 0 )
        {
          if ( data[0].source )
            assert_failed = 0;
          else
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
            errline = 255;
            elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
            if ( assert_failed )
              goto B46;
          }
          if ( mem_align_alloc__( (void**)&data[0].source, data->length, data->length + 33, 1, 255 ) )
          {
            data[ data->length >> 3 ].source = &boundary->string[0];
            data[ data->length >> 3 ].source[4] = boundary->string[4];
            data[ data->length >> 3 ].source[8] = boundary->string[8];
            data[ data->length >> 3 ].source[12] = boundary->string[12];
            data[ data->length >> 3 ].source[16] = boundary->string[16];
            data[ data->length >> 3 ].source[20] = boundary->string[20];
            data[ data->length >> 3 ].source[24] = boundary->string[24];
            data[ data->length >> 3 ].source[28] = boundary->string[28];
            data->string = 0;
            data->length += 32;
          }
          add_to_string( &data[0], "--\r\n" );
          if ( boundary->count - 1 >= 1 )
          {
            convert_table = &data[0].source[0];
            boundary = boundary;
            do
            {
              if ( convert_table[0].t + *(int*)(ebx + ( ecx << 2 )) + 72 <= ( convert_table[0].t + *(int*)(ebx + ( ( ecx + 1 ) << 2 )) ) - 34 )
              {
                do
                {
                  strcmp( ebp_1088, &edx );
                  if ( (unsigned char)( ccdep2 < ccdep1 ) == 0 )
                  {
                    do
                    {
                      *(char*)(boundary[0].count + edx + 8) = boundary->string[ edx ] + 1;
                      if ( '8' <= boundary->string[ edx ] )
                      {
                      }
                      else
                      {
                        boundary->string[23] = '0';
                      }
                    }
                    while ( edx - 1 != -1 );
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
                    errline = 925;
                    elinks_internal( "Form data boundary counter overflow" );
                    if ( boundary->offsets )
                      mem_free( (void*)boundary->offsets );
                  }
                  else
                }
                while ( ebp_1076 < edx + 1 );
              }
            }
            while ( ecx < ebp_1080 - 1 );
            data = &convert_table->t;
          }
          else
          {
          }
          if ( boundary->count >= 1 )
          {
            boundary = boundary;
            while ( data[ *(int*)(boundary->offsets + ( ( 0 + 1 ) << 2 )) >> 3 ].source = &boundary->string[0], data[ *(int*)(boundary->offsets + ( ( 0 + 1 ) << 2 )) >> 3 ].source[4] = boundary->string[4], data[ *(int*)(boundary->offsets + ( ( 0 + 1 ) << 2 )) >> 3 ].source[8] = boundary->string[8], data[ *(int*)(boundary->offsets + ( ( 0 + 1 ) << 2 )) >> 3 ].source[12] = boundary->string[12], data[ *(int*)(boundary->offsets + ( ( 0 + 1 ) << 2 )) >> 3 ].source[16] = boundary->string[16], data[ *(int*)(boundary->offsets + ( ( 0 + 1 ) << 2 )) >> 3 ].source[20] = boundary->string[20], data[ *(int*)(boundary->offsets + ( ( 0 + 1 ) << 2 )) >> 3 ].source[24] = boundary->string[24], data[ *(int*)(boundary->offsets + ( ( 0 + 1 ) << 2 )) >> 3 ].source[28] = boundary->string[28], 0 + 1 + 1 < boundary->count )
            {
            }
          }
        }
B46:        assert_failed = 0;
      }
    }
    if ( boundary->offsets )
    {
      boundary->offsets[ boundary->count ] = data->length;
      boundary->count++;
    }
  }
  else
    assert_failed = 0;
}
void do_reset_form( struct document_view *doc_view, struct form *form )
{
  int eax;
  int ecx;
  int edx;
  struct form_control *fc;
  if ( assert_failed == 0 )
  {
    if ( doc_view[0] && doc_view->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 1196;
      elinks_internal( "assertion doc_view && doc_view-&gt;document failed!" );
      if ( assert_failed )
        doc_view = &doc_view[0];
    }
    fc = &form->items.next[0];
    if ( form != form->items.next )
    {
      doc_view = &doc_view[0];
    {
      do
      {
        if ( fs[0].form_view )
          init_form_state( &doc_view[0], &fc[0], find_form_state( &doc_view[0], &fc[0] ) );
        fc = &fc;
      }
      while ( fc->next != form + 36 );
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
enum frame_event_status  reset_form( struct session *ses, struct document_view *doc_view, int a )
{
  int eax;
  int edx;
  struct link *link;
  if ( doc_view && doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && link[0] )
  {
    do_reset_form( &doc_view[0], name/*union*/(int)( name/*union*/&link->data.name/*union*/ ) );
    draw_forms( ses->tab->term, &doc_view[0] );
  }
  return FRAME_EVENT_OK;
}
struct uri *get_form_uri( struct session *ses, struct document_view *doc_view, struct form_control *fc )
{
  int eax;
  int ecx;
  int edx;
  struct boundary_info boundary;
  struct list_head_elinks submit;
  struct string data;
  struct string go;
  int cp_from, cp_to;
  struct uri *uri;
  struct form *form;
  submit.prev = submit.next = submit.next;
  if ( assert_failed == 0 )
  {
    if ( 0 && ses->tab && ses->tab->term )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 1233;
      elinks_internal( "assertion ses && ses-&gt;tab && ses-&gt;tab-&gt;term failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        uri[0].string = 0;
        if ( 0 ^ 0 )
        {
          __stack_chk_fail(  );
        }
        return 0;
      }
    }
    if ( doc_view && fc[0] && doc_view->document && fc->form )
    {
      assert_failed = 0;
      form = fc->form;
      if ( fc->type == FC_RESET )
      {
      }
      else
      {
        if ( form->action && init_string( &data ) )
        {
          if ( assert_failed == 0 )
          {
            if ( doc_view && fc->form )
              assert_failed = 0;
            else
            {
              assert_failed = 1;
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
              errline = 778;
              elinks_internal( "assertion doc_view && fc && fc-&gt;form && list failed!" );
              if ( assert_failed )
                goto B27;
            }
            if ( fc->form->items.next == fc->form->items.next )
            {
              do
              {
                submit.next = submit.next;
                while ( fc->form != submit.prev )
                {
                  do
                  {
                    if ( submit.next == submit.next || submit.list_head_elinks <= *(int*)(*(int*)(submit.prev) + 24) )
                    {
                      return &edx;
                    }
                    else
                    {
                      submit.prev[0] = submit.next;
                      submit.prev = *(int*)(submit.prev);
                      submit.next[1] = submit.next = *(int*)(*(int*)(submit.prev));
                    }
                  }
                  while ( submit.prev[1] != submit.prev + 4 );
                  break;
                }
                if ( submit.prev != submit.prev )
                {
                  do
                  {
                    if ( edx != ebx && *(int*)(ecx + 24) < *(int*)(edx + 24) )
                    {
                      *(int*)(ecx + 4) = *(int*)(edx + 4);
                      return &edx;
                      return &ecx;
                      return &ecx;
                      ecx = edx;
                      return &edx;
                    }
                    else
                      return &edx;
                  }
                  while ( eax != *(int*)(ecx + 4) );
                }
              }
              while ( 1 == 0 );
              cp_from = get_terminal_codepage( ses->tab->term );
              cp_to = doc_view->document->cp;
              if ( form->method != FORM_METHOD_POST_MP )
              {
                if ( 0 )
                {
                  if ( assert_failed == 0 )
                  {
                    assert_failed = 0;
                    if ( submit.next != submit.next )
                    {
                      while ( 1 )
                      {
                        encode_uri_string( &data, &submit.next[2], strlen( &submit.next[2] ), 1 );
                        add_char_to_string( &data, 61 );
                        if ( submit.next[5] == 3 )
                        {
                          if ( encode_textarea( &submit.next[0] ) == 0 )
                          {
                            if ( submit.next == submit.next )
                              goto B64;
                            else
                            {
                              add_char_to_string( &data, 38 );
                            }
                          }
                          else
                          {
                            if ( ebp_108 == 0 )
                            {
                              ebp_136 = ebp_136;
                            }
                            mem_free( ebp_136 );
                          }
                        }
                        else
                        {
                          if ( submit.next[5] <= 1 )
                          {
                            if ( ebp_108 == 0 )
                            {
                            }
                          }
                          else
                          {
                            if ( get_uri( go.source, 0 ) == 11 )
                            {
                            }
                            else
                            {
                            }
                          }
                        }
                        if ( form->action == 0 )
                          continue;
                        else
                        {
                          encode_uri_string( &data, form->action, strlen( (char*)form->action ), 1 );
                          mem_free( strlen( (char*)form->action ) );
                        }
                      }
                    }
                  }
                }
                else
                {
                  if ( form->method == FORM_METHOD_POST_TEXT_PLAIN )
                  {
                    if ( assert_failed == 0 )
                    {
                      assert_failed = 0;
                      cp_from = submit.next;
                      if ( submit.next != ses + 4 )
                      {
                        do
                        {
                          cp_to = cp_from;
                          add_to_string( &data, &cp_from );
                          add_char_to_string( &data, 61 );
                          if ( cp_from != 3 )
                          {
                            if ( ccdep1 < ccdep2 )
                            {
                              if ( cp_from == 11 )
                              {
                                cp_to = encode_crlf( &cp_from );
                                if ( cp_to == 0 )
                                {
                                  add_crlf_to_string( &data );
                                  ebp_136 = ebp_136;
                                  cp_from = cp_from;
                                }
                              }
                              else
                              {
                                if ( cp_to )
                                {
                                  if ( cp_to/*.1_1of4*/ )
                                  {
                                    do
                                    {
                                      if ( eax == 13 || eax == 10 )
                                      {
                                        if ( assert_failed == 0 )
                                        {
                                          assert_failed = 0;
                                          data.length = data.length + 259;
                                          if ( 0 < 0 )
                                          {
                                            *ebp_140 = 0;
                                            if ( mem_realloc( (void*)data.source, 0 ) )
                                            {
                                              data.source = (unsigned char*)mem_realloc( (void*)data.source, 0 );
                                              memset( data.source + 0, 0, 0 - 0 );
                                            }
                                          }
                                          if ( data.source )
                                            data.length += 3;
                                        }
                                        else
                                        {
                                          assert_failed = 0;
                                          if ( cp_to/*.1_1of4*/ )
                                            continue;
                                          else
                                            break;
                                        }
                                      }
                                      else
                                      {
                                        add_char_to_string( &data, eax );
                                      }
                                    }
                                    while ( cp_to/*.1_1of4*/ );
                                  }
                                  if ( cp_from != cp_to )
                                  {
                                    mem_free( &cp_to );
                                    ebp_136 = ebp_136;
                                  }
                                }
                              }
                            }
                            else
                            if ( cp_from <= 1 )
                            {
                              cp_to = convert_string_elinks( get_translation_table( cp_from, cp_to ), &cp_to, strlen( &cp_to ), -1, CSM_FORM, 0, 0, 0 );
                              if ( 0 )
                              {
                                mem_free( 0 );
                              }
                            }
                          }
                          else
                          {
                            cp_to = encode_textarea( &cp_from );
                            if ( cp_to == 0 )
                              continue;
                          }
                          cp_to = convert_string_elinks( get_translation_table( cp_from, cp_to ), &cp_to, strlen( &cp_to ), -1, CSM_FORM, 0, 0, 0 );
                        }
                        while ( cp_from == ses + 4 );
                      }
                    }
                  }
                }
                assert_failed = 0;
              }
              else
                encode_multipart( ses, ses + 4, &data, &boundary, cp_from, cp_to );
B64:              if ( data && *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
                memorize_form( ses, ses + 4, form );
              done_submitted_value_list( &submit );
              if ( data.source == 0 || init_string( &go ) == 0 )
              {
                done_string( &data );
                uri[0].string = 0;
              }
              else
              {
                if ( form->method == FORM_METHOD_GET )
                {
                  if ( strchr( (char*)form->action, 35 ) )
                    add_bytes_to_string__( &go, form->action, strchr( (char*)form->action, 35 ) - form->action );
                  else
                    add_to_string( &go, form->action );
                  if ( strchr( (char*)go.source, 63 ) )
                    add_char_to_string( &go, 38 );
                  else
                    add_char_to_string( &go, 63 );
                  add_string_to_string( &go, &data );
                  if ( strchr( (char*)form->action, 35 ) )
                    add_to_string( &go, (unsigned char*)strchr( (char*)form->action, 35 ) );
                }
                else
                {
                  if ( form->method <= 3 )
                  {
                    int i;
                    add_to_string( &go, form->action );
                    add_char_to_string( &go, 1 );
                    if ( form->method == FORM_METHOD_POST )
                      add_to_string( &go, "application/x-www-form-urlencoded\n" );
                    else
                    if ( form->method == FORM_METHOD_POST_TEXT_PLAIN )
                    {
                      add_to_string( &go, "text/plain\n" );
                      add_to_string( &go, data.source );
                    }
                    else
                    {
                      add_to_string( &go, "multipart/form-data; boundary=" );
                      add_bytes_to_string__( &go, &boundary.string[0], 32 );
                      add_char_to_string( &go, 10 );
                    }
                    if ( data.length >= 1 )
                    {
                      i = 0;
                    {
                      do
                      {
                        unsigned char p[3];
                        elinks_ulongcat( i + 1, ebp_71, 0, *(char*)(i + data.source), 2, 48, 16 );
                        i++;
                        add_to_string( &go, ebp_71 );
                      }
                      while ( data.length <= i );
                    }
                    }
                  }
                }
                done_string( &data );
                done_string( &go );
                if ( get_uri( go.source, 0 ) )
                  uri->bits_at_52/*.3_3of4*/ |= 2;
              }
            }
            else
            {
              do
              {
                if ( ( fc->form->items.next == fc[0].next || fc->form->items.next[5] - 7 > 3 ) && fc->form->items.next[8] && *(char*)(fc->form->items.next[8]) )
                {
                  if ( find_form_state( doc_view, &fc->form->items.next[0] ) )
                  {
                    if ( assert_failed == 0 )
                      assert_failed = 0;
                    cp_from = fc->form->items.next[8];
                    cp_to = fc->form->items.next[4];
                    switch ( fc->form->items.next[5] )
                    {
                    case 4:
                    case 5:
                      if ( *(int*)(ecx + 20) )
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                    case 7:
                    case 9:
                    case 10:
                    case 11:
                      if ( eax )
                      {
                        *(int*)(init_submitted_value( &cp_from, *(int*)(ebp_140 + 16), FC_SELECT, &fc->form->items.next[0], cp_to ) + 4) = ebx;
                        *(int*)(init_submitted_value( &cp_from, *(int*)(ebp_140 + 16), FC_SELECT, &fc->form->items.next[0], cp_to )) = ebx;
                        ebx = init_submitted_value( &cp_from, *(int*)(ebp_140 + 16), FC_SELECT, &fc->form->items.next[0], cp_to );
                        *(int*)(*(int*)(init_submitted_value( &cp_from, *(int*)(ebp_140 + 16), FC_SELECT, &fc->form->items.next[0], cp_to )) + 4) = init_submitted_value( &cp_from, *(int*)(ebp_140 + 16), FC_SELECT, &fc->form->items.next[0], cp_to );
                        fc->form = fc->form;
                      }
                      break;
                    case 6:
                      if ( fc->form->items.next[17] )
                      {
                        fixup_select_state( &esi, &ecx );
                        if ( eax )
                        {
                          *(int*)(init_submitted_value( &cp_from, *(int*)(ebp_140 + 16), FC_SELECT, &fc->form->items.next[0], cp_to ) + 4) = ebx;
                          *(int*)(init_submitted_value( &cp_from, *(int*)(ebp_140 + 16), FC_SELECT, &fc->form->items.next[0], cp_to )) = ebx;
                          ebx = init_submitted_value( &cp_from, *(int*)(ebp_140 + 16), FC_SELECT, &fc->form->items.next[0], cp_to );
                          *(int*)(*(int*)(init_submitted_value( &cp_from, *(int*)(ebp_140 + 16), FC_SELECT, &fc->form->items.next[0], cp_to )) + 4) = init_submitted_value( &cp_from, *(int*)(ebp_140 + 16), FC_SELECT, &fc->form->items.next[0], cp_to );
                          fc->form = fc->form;
                        }
                      }
                      break;
                    case 8:
                      if ( straconcat( &cp_from ) )
                      {
                        mem_free( (void*)straconcat( &cp_from ) );
                        if ( ebp_136 )
                        {
                          return &submit.next[0];
                          return &ebx;
                          ebx = eax;
                          return &eax[0].next[0];
                        }
                        if ( straconcat( &fc->form->items.next[8] ) )
                        {
                          mem_free( ebp_136 );
                          if ( ebp_136 )
                          {
                            return &ebx;
                            return &ebx;
                            ebx = eax;
                            return &eax[0].next[0];
                          }
                        }
                      }
                    default:
                      break;
                    }
                    *(int*)(init_submitted_value( &cp_from, *(int*)(ebp_140 + 16), FC_SELECT, &fc->form->items.next[0], cp_to ) + 4) = ebx;
                    *(int*)(init_submitted_value( &cp_from, *(int*)(ebp_140 + 16), FC_SELECT, &fc->form->items.next[0], cp_to )) = ebx;
                    ebx = init_submitted_value( &cp_from, *(int*)(ebp_140 + 16), FC_SELECT, &fc->form->items.next[0], cp_to );
                    *(int*)(*(int*)(init_submitted_value( &cp_from, *(int*)(ebp_140 + 16), FC_SELECT, &fc->form->items.next[0], cp_to )) + 4) = init_submitted_value( &cp_from, *(int*)(ebp_140 + 16), FC_SELECT, &fc->form->items.next[0], cp_to );
                    fc->form = fc->form;
                  }
                  fc->form = fc->form;
                }
              }
              while ( fc->form != fc->form->items.next[0] );
            }
          }
B27:          assert_failed = 0;
          cp_from = get_terminal_codepage( ses->tab->term );
          cp_to = doc_view->document->cp;
        }
        else
          uri[0].string = 0;
      }
    }
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 1235;
      elinks_internal( "assertion doc_view && doc_view-&gt;document && fc && fc-&gt;form failed!" );
      if ( assert_failed )
        continue;
      else
      {
        form = fc->form;
        if ( fc->type != FC_RESET )
        {
        }
      }
    }
    do_reset_form( doc_view, fc->form );
    uri[0].string = 0;
  }
}
enum frame_event_status  submit_form( struct session *ses, struct document_view *doc_view, int do_reload )
{
  goto_current_link( ses, doc_view, do_reload );
  return FRAME_EVENT_OK;
}
void submit_given_form( struct session *ses, struct document_view *doc_view, struct form *form, int do_reload )
{
  int ecx;
  if ( form->items.next != form->items.next && form->items && uri[0] )
  {
    goto_uri_frame( &ses[0], &uri[0], form->target, mode );
    ses = &uri[0].string[0];
  }
  return;
}
void auto_submit_form( struct session *ses )
{
  struct document *document;
  if ( ses->doc_view->document->forms.next != ses->doc_view->document->forms.next )
  {
    submit_given_form( &ses[0], ses->doc_view, &ses->doc_view->document->forms.next[0], 0 );
  }
  return;
}
void set_file_form_state( struct terminal *term, void *filename_, void *fs_ )
{
  if ( ((int*)fs_)[4] )
    mem_free( &((int*)fs_)[4] );
  ((int*)fs_)[4] = ((int*)filename_)[0];
  ((int*)fs_)[5] = strlen( &((int*)filename_)[0] );
  term = &term[0];
}
void file_form_menu( struct terminal *term, void *path_, void *fs_ )
{
  auto_complete_file( term, 0, (unsigned char*)path_, &set_file_form_state, &file_form_menu, fs_ );
  return;
}
enum frame_event_status  field_op( struct session *ses, struct document_view *doc_view, struct link *link, struct term_event *ev )
{
  int eax;
  int ecx;
  int ch;
  int edx;
  struct form_control *fc;
  struct form_state *fs;
  unsigned char *text;
  enum frame_event_status  status;
  unsigned char *ctext;
  int utf8;
  if ( assert_failed == 0 )
  {
    if ( doc_view && ev[0] && link[0] )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 1463;
      elinks_internal( "assertion ses && doc_view && link && ev failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        status = FRAME_EVENT_OK;
        return FRAME_EVENT_OK;
      }
    }
    if ( link->type > 1 )
    {
      fc = &link->data.name[0];
      assert_failed = link->data.name == 0;
      if ( (_Bool)( link->data.name != 0 ) )
      {
        if ( fc->mode != FORM_MODE_DISABLED && ev->ev == 1 && ses->insert_mode != INSERT_MODE_OFF )
        {
          *(int*)(ebp_60) = ebp_60;
          if ( find_form_state( doc_view, &fc[0] ) && *(int*)(find_form_state( doc_view, &fc[0] ) + 16) )
          {
            utf8 = utf8/*.1_1of4*/;
            switch ( kbd_action( KEYMAP_EDIT, 0, &ev[0].ev ) )
            {
            case 21:
              __ctype_b_loc(  );
              if ( ebx & 255 )
              {
                fs = find_form_state( doc_view, &fc[0] );
                fs->state = edx + 1;
                *(int*)(find_form_state( doc_view, &fc[0] ) + 20) = edx + 1;
                status = FRAME_EVENT_REFRESH;
                return FRAME_EVENT_OK;
              }
              break;
            case 19:
              if ( fc->type == FC_TEXTAREA )
              {
                textarea_op_left( find_form_state( doc_view, &fc[0] ), &fc[0], utf8 );
                return FRAME_EVENT_OK;
              }
              link = &link[0];
              if ( utf8 )
              {
                *(int*)(find_form_state( doc_view, &fc[0] ) + 20) = utf8_prevchar( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) + *(int*)(find_form_state( doc_view, &fc[0] ) + 20), 1, *(int*)(find_form_state( doc_view, &fc[0] ) + 16) ) - *(int*)(find_form_state( doc_view, &fc[0] ) + 16);
                status = FRAME_EVENT_REFRESH;
                return FRAME_EVENT_OK;
              }
              status = FRAME_EVENT_REFRESH;
              *(int*)(find_form_state( doc_view, &fc[0] ) + 20) = (unsigned char)( ( *(int*)(find_form_state( doc_view, &fc[0] ) + 20) - 1 < 0 ) ^ 1 ) ? (unsigned char)( ( *(int*)(find_form_state( doc_view, &fc[0] ) + 20) - 1 < 0 ) ^ 1 ) ? utf8 : *(int*)(find_form_state( doc_view, &fc[0] ) + 20) - 1 : *(int*)(find_form_state( doc_view, &fc[0] ) + 20) - 1;
              return FRAME_EVENT_OK;
              break;
            case 27:
              if ( fc->type == FC_TEXTAREA )
              {
                textarea_op_right( find_form_state( doc_view, &fc[0] ), &fc[0], utf8 );
                return FRAME_EVENT_OK;
              }
              link = &link[0];
              if ( utf8 )
              {
                unsigned char *text;
                *ebp_48 = find_form_state( doc_view, &fc[0] );
                text = *(int*)(find_form_state( doc_view, &fc[0] ) + 16) + *(int*)(find_form_state( doc_view, &fc[0] ) + 20);
                utf8_to_unicode( &text, (unsigned char*)__rawmemchr( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) + *(int*)(find_form_state( doc_view, &fc[0] ) + 20), 0 ) );
                *(int*)(find_form_state( doc_view, &fc[0] ) + 20) = text - *(int*)(find_form_state( doc_view, &fc[0] ) + 16);
                status = FRAME_EVENT_REFRESH;
                return FRAME_EVENT_OK;
              }
              *(int*)(find_form_state( doc_view, &fc[0] ) + 20) = *(int*)(find_form_state( doc_view, &fc[0] ) + 20) + 1 < strlen( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) ) ? strlen( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) ) : *(int*)(find_form_state( doc_view, &fc[0] ) + 20) + 1;
              status = FRAME_EVENT_REFRESH;
              return FRAME_EVENT_OK;
              break;
            case 15:
              if ( fc->type == FC_TEXTAREA )
              {
                textarea_op_home( find_form_state( doc_view, &fc[0] ), &fc[0], utf8 );
                return FRAME_EVENT_OK;
              }
              status = FRAME_EVENT_REFRESH;
              *(int*)(find_form_state( doc_view, &fc[0] ) + 20) = 0;
              return FRAME_EVENT_OK;
              break;
            case 29:
              if ( fc->type == FC_TEXTAREA )
              {
                textarea_op_up( find_form_state( doc_view, &fc[0] ), &fc[0], utf8 );
                return FRAME_EVENT_OK;
              }
              status = FRAME_EVENT_IGNORED;
              return FRAME_EVENT_OK;
              break;
            case 11:
              if ( fc->type == FC_TEXTAREA )
              {
                textarea_op_down( find_form_state( doc_view, &fc[0] ), &fc[0], utf8 );
                return FRAME_EVENT_OK;
              }
              break;
            case 12:
              if ( fc->type == FC_TEXTAREA )
              {
                textarea_op_end( find_form_state( doc_view, &fc[0] ), &fc[0], utf8 );
                return FRAME_EVENT_OK;
              }
              *(int*)(find_form_state( doc_view, &fc[0] ) + 20) = strlen( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) );
              status = FRAME_EVENT_REFRESH;
              return FRAME_EVENT_OK;
              break;
            case 6:
              if ( fc->type == FC_TEXTAREA )
              {
                textarea_op_bob( find_form_state( doc_view, &fc[0] ), &fc[0], utf8 );
                *(int*)(find_form_state( doc_view, &fc[0] ) + 24) = 0;
                return FRAME_EVENT_OK;
              }
              status = FRAME_EVENT_REFRESH;
              *(int*)(find_form_state( doc_view, &fc[0] ) + 20) = 0;
              return FRAME_EVENT_OK;
              break;
            case 13:
              if ( fc->type == FC_TEXTAREA )
              {
                textarea_op_eob( find_form_state( doc_view, &fc[0] ), &fc[0], utf8 );
                return FRAME_EVENT_OK;
              }
              *(int*)(find_form_state( doc_view, &fc[0] ) + 20) = strlen( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) );
              status = FRAME_EVENT_REFRESH;
              return FRAME_EVENT_OK;
              break;
            case 23:
              if ( fc->mode == FORM_MODE_NORMAL )
              {
                if ( fc->type == FC_TEXTAREA )
                {
                  textarea_edit( 0, ses->tab->term, find_form_state( doc_view, &fc[0] ), doc_view, &link[0] );
                  status = FRAME_EVENT_REFRESH;
                  return FRAME_EVENT_OK;
                }
              }
              break;
            case 8:
              *ebp_104 = *(int*)(find_form_state( doc_view, &fc[0] ) + 16);
              set_clipboard_text( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) );
              status = FRAME_EVENT_OK;
              return FRAME_EVENT_OK;
              break;
            case 9:
              set_clipboard_text( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) );
              if ( fc->mode == FORM_MODE_NORMAL )
                *(char*)(*(int*)(find_form_state( doc_view, &fc[0] ) + 16)) = 0;
              *(int*)(find_form_state( doc_view, &fc[0] ) + 20) = 0;
              if ( fc->type == FC_TEXTAREA )
              {
                status = 0;
                status = FRAME_EVENT_REFRESH;
                return FRAME_EVENT_OK;
              }
              break;
            case 24:
              if ( fc->mode == FORM_MODE_NORMAL && get_clipboard_text(  ) )
              {
                if ( strlen( (char*)get_clipboard_text(  ) ) <= fc->maxlength && strlen( (char*)get_clipboard_text(  ) ) )
                {
                  *(int*)(find_form_state( doc_view, &fc[0] ) + 16) = eax;
                  memmove( ebp_48 + 16, &text[0], edi );
                  *(int*)(find_form_state( doc_view, &fc[0] ) + 20) = ~strlen( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) ) - 1;
                  if ( utf8 && fc->type == FC_TEXTAREA )
                    *(int*)(find_form_state( doc_view, &fc[0] ) + 24) = 0;
                }
                mem_free( &text[0] );
                status = FRAME_EVENT_REFRESH;
                return FRAME_EVENT_OK;
              }
              break;
            case 14:
              if ( fc->type == FC_TEXTAREA )
              {
                textarea_op_enter( find_form_state( doc_view, &fc[0] ), &fc[0], utf8 );
                return FRAME_EVENT_OK;
              }
              if ( ( has_form_submit( fc->form ) && *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 ) || goto_current_link( &ses[0], doc_view, 0 ) )
              {
                if ( ses->insert_mode == INSERT_MODE_ON )
                {
                  ses->insert_mode = INSERT_MODE_OFF;
                  status = FRAME_EVENT_OK;
                  return FRAME_EVENT_OK;
                }
              }
              break;
            case 5:
              if ( fc->mode == FORM_MODE_NORMAL )
              {
                if ( *(int*)(find_form_state( doc_view, &fc[0] ) + 20) )
                {
                  if ( utf8 )
                  {
                    unsigned char *new_value;
                    new_value[0] = eax;
                    *(int*)(find_form_state( doc_view, &fc[0] ) + 20) = eax - *(int*)(ebp_48 + 16);
                    if ( esi != eax - *(int*)(ebp_48 + 16) )
                    {
                      if ( fc->type == FC_TEXTAREA )
                        *(int*)(find_form_state( doc_view, &fc[0] ) + 24) = 0;
                      memmove( &new_value[0], &esi, ~ecx );
                      status = FRAME_EVENT_REFRESH;
                      return FRAME_EVENT_OK;
                    }
                  }
                  else
                  {
                    memmove( esi - 1, &esi, ~ecx );
                    *(int*)(find_form_state( doc_view, &fc[0] ) + 20)--;
                    status = FRAME_EVENT_REFRESH;
                    return FRAME_EVENT_OK;
                  }
                }
              }
              break;
            case 10:
              if ( fc->mode == FORM_MODE_NORMAL )
              {
                *ebp_60 = utf8;
                if ( *(int*)(find_form_state( doc_view, &fc[0] ) + 20) < strlen( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) ) )
                {
                  if ( utf8 )
                  {
                    unsigned char *end;
                    unsigned char *text;
                    text[0] = text[ *(int*)(find_form_state( doc_view, &fc[0] ) + 16) ];
                    end[0] = *(int*)(find_form_state( doc_view, &fc[0] ) + 16) + strlen( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) );
                    text = &text[ *(int*)(find_form_state( doc_view, &fc[0] ) + 16) ];
                    utf8_to_unicode( &text, *(int*)(find_form_state( doc_view, &fc[0] ) + 16) + strlen( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) ) );
                    if ( text[0] != text )
                    {
                      memmove( &text[0], text, ( end[0] - text - text ) + 1 );
                      status = FRAME_EVENT_REFRESH;
                      return FRAME_EVENT_OK;
                    }
                  }
                  else
                  {
                    text[0] = *(int*)(find_form_state( doc_view, &fc[0] ) + 16) + *(int*)(find_form_state( doc_view, &fc[0] ) + 20);
                    memmove( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) + *(int*)(find_form_state( doc_view, &fc[0] ) + 20), &text[1], strlen( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) ) - *(int*)(find_form_state( doc_view, &fc[0] ) + 20) );
                    status = FRAME_EVENT_REFRESH;
                    return FRAME_EVENT_OK;
                  }
                }
              }
              break;
            case 16:
              fc->mode = fc->mode;
              if ( fc->mode == FORM_MODE_NORMAL )
              {
                if ( *(int*)(find_form_state( doc_view, &fc[0] ) + 20) >= 1 )
                {
                  text[0] = *(int*)(find_form_state( doc_view, &fc[0] ) + 16);
                  memmove( &esi, &edi, eax + 1 );
                  *(int*)(find_form_state( doc_view, &fc[0] ) + 20) = esi - *(int*)(ebp_48 + 16);
                  if ( utf8 && fc->type == FC_TEXTAREA )
                  {
                    *(int*)(find_form_state( doc_view, &fc[0] ) + 24) = 0;
                    status = FRAME_EVENT_REFRESH;
                    return FRAME_EVENT_OK;
                  }
                }
              }
              break;
            case 17:
              if ( fc->mode == 0 )
              {
                if ( *(char*)(*(int*)(find_form_state( doc_view, &fc[0] ) + 16) + *(int*)(find_form_state( doc_view, &fc[0] ) + 20)) )
                {
                  if ( eax == 0 )
                  {
                    return FRAME_EVENT_OK;
                  }
                  text[0] = (unsigned char)( esi ) != 10 ? eax + 1 : eax;
                  memmove( &ebx, &text[0], ~ecx );
                  status = FRAME_EVENT_REFRESH;
                  return FRAME_EVENT_OK;
                }
              }
              break;
            case 18:
              if ( fc->mode == FORM_MODE_NORMAL )
              {
                if ( *(int*)(find_form_state( doc_view, &fc[0] ) + 20) >= 1 )
                {
                  if ( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) < *(int*)(find_form_state( doc_view, &fc[0] ) + 16) + *(int*)(find_form_state( doc_view, &fc[0] ) + 20) )
                  {
                    text[0] = edi;
                    text[0] = *(int*)(find_form_state( doc_view, &fc[0] ) + 16);
                    text[0] = eax - 1;
                    if ( ebp_52 < eax )
                    {
                      text[0] = *(int*)(find_form_state( doc_view, &fc[0] ) + 16);
                    }
                  }
                  else
                  {
                    text[0] = find_form_state( doc_view, &fc[0] );
                    edi = find_form_state( doc_view, &fc[0] );
                  }
                  if ( text[0] == 10 )
                    text[0] = ses != ( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) + *(int*)(find_form_state( doc_view, &fc[0] ) + 20) ) - 1 ? ( *(int*)(find_form_state( doc_view, &fc[0] ) + 16) + *(int*)(find_form_state( doc_view, &fc[0] ) + 20) ) - 1 : ses + 1;
                  memmove( &text[0], &edi, eax + 1 );
                  status = FRAME_EVENT_REFRESH;
                  *(int*)(find_form_state( doc_view, &fc[0] ) + 20) = text[0] - *(int*)(find_form_state( doc_view, &fc[0] ) + 16) - *(int*)(find_form_state( doc_view, &fc[0] ) + 16);
                  return FRAME_EVENT_OK;
                }
              }
              break;
            case 20:
              if ( *(int*)(find_form_state( doc_view, &fc[0] ) + 20) >= 1 )
              {
                __ctype_b_loc(  );
                fs = find_form_state( doc_view, &fc[0] );
                text[0] = *(int*)(find_form_state( doc_view, &fc[0] ) + 16);
                if ( *(int*)(find_form_state( doc_view, &fc[0] ) + 20) >= 1 )
                {
                  fs = find_form_state( doc_view, &fc[0] );
                  text[0] = *(int*)(find_form_state( doc_view, &fc[0] ) + 16);
                }
              }
              break;
            case 2:
              if ( fc->type == FC_FILE && fc->mode == FORM_MODE_NORMAL )
              {
                file_form_menu( ses->tab->term, *(int*)(find_form_state( doc_view, &fc[0] ) + 16), (void*)find_form_state( doc_view, &fc[0] ) );
                status = FRAME_EVENT_REFRESH;
                return FRAME_EVENT_OK;
              }
              break;
            case 7:
              if ( ses->insert_mode == INSERT_MODE_ON )
              {
                ses->insert_mode = INSERT_MODE_OFF;
                status = FRAME_EVENT_REFRESH;
                return FRAME_EVENT_OK;
              }
              break;
            case 26:
              redraw_terminal_cls( ses->tab->term );
              status = FRAME_EVENT_OK;
              return FRAME_EVENT_OK;
              break;
            default:
              if ( ev->info.mouse.x > 31 && ev->info.mouse.y == 0 )
              {
                if ( fc->mode == FORM_MODE_NORMAL && ( link + ~ev[0] ) - 1 <= fc->maxlength && find_form_state( doc_view, &fc[0] ) )
                {
                  *(int*)(find_form_state( doc_view, &fc[0] ) + 20) = esi + *(int*)(ebp_48 + 20);
                  if ( fc->type != FC_TEXTAREA )
                    continue;
                  *(int*)(find_form_state( doc_view, &fc[0] ) + 24) = 0;
                  status = FRAME_EVENT_REFRESH;
                  return FRAME_EVENT_OK;
                }
              }
              break;
            }
          }
          status = FRAME_EVENT_OK;
          return FRAME_EVENT_OK;
        }
      }
    }
    else
    {
      assert_failed = 1;
      fc = 0;
    }
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
    errline = 1467;
    elinks_internal( "assertion fc != NULL failed: link has no form control" );
    if ( assert_failed )
      link = &link[0];
    else
    {
    }
  }
}
unsigned char *get_form_label( struct form_control *fc )
{
  if ( assert_failed == 0 )
  {
    assert_failed = fc->form == 0;
    if ( !(_Bool)( fc->form != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 1873;
      elinks_internal( "assertion fc-&gt;form failed!" );
      if ( fc->type <= 10 )
      {
        switch ( fc->type )
        {
        case FC_RESET:
          return "Reset form";
          break;
        case FC_BUTTON:
          return "Harmless button";
          break;
        case FC_SUBMIT:
        case FC_IMAGE:
          if ( fc->form->action )
          {
            return *(int*)(fc->form + 32) != 0 ? "Submit form to" : "Post form to";
          }
          break;
        case FC_RADIO:
          return "Radio button";
          break;
        case FC_CHECKBOX:
          return "Checkbox";
          break;
        case FC_SELECT:
          return "Select field";
          break;
        case FC_TEXT:
          return "Text field";
          break;
        case FC_TEXTAREA:
          return "Text area";
          break;
        case FC_FILE:
          return "File upload";
          break;
        case FC_PASSWORD:
          return "Password field";
          break;
        default:
          break;
        }
        return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  switch ( fc->type )
  {
  case FC_RESET:
    return "Reset form";
    break;
  case FC_BUTTON:
    return "Harmless button";
    break;
  case FC_SUBMIT:
  case FC_IMAGE:
    break;
  case FC_RADIO:
    return "Radio button";
    break;
  case FC_CHECKBOX:
    return "Checkbox";
    break;
  case FC_SELECT:
    return "Select field";
    break;
  case FC_TEXT:
    return "Text field";
    break;
  case FC_TEXTAREA:
    return "Text area";
    break;
  case FC_FILE:
    return "File upload";
    break;
  case FC_PASSWORD:
    return "Password field";
    break;
  default:
    break;
  }
  return 0;
}
void add_form_attr_to_string( struct string *string, struct terminal *term, unsigned char *name, unsigned char *value )
{
  add_to_string( &string[0], ", " );
  if ( name[0] && name[0] )
  {
    if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
      current_charset = get_terminal_codepage( &term[0] );
    }
    name[0] = gettext( &name[0] );
  }
  add_to_string( &string[0], &name[0] );
  if ( value )
  {
    add_char_to_string( &string[0], 32 );
    add_to_string( &string[0], value );
  }
  return;
}
unsigned char *get_form_info( struct session *ses, struct document_view *doc_view )
{
  int eax;
  int edx;
  struct terminal *term = ses->tab->term;
  struct link *link;
  struct form_control *fc;
  unsigned char *label, *key;
  struct string str;
  if ( assert_failed == 0 )
  {
    assert_failed = link[0].accesskey == 0;
    if ( !(_Bool)( link[0].accesskey != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 1928;
      elinks_internal( "assertion link failed!" );
    }
  }
  fc = 0;
  if ( get_form_label( &fc[0] ) && init_string( &str ) )
  {
    if ( label[0] )
    {
      if ( term && current_charset != get_terminal_codepage( term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
        ebp_52 = label[0];
        current_charset = get_terminal_codepage( term );
      }
      label[0] = gettext( &label[0] );
    }
    add_to_string( &str, &label[0] );
    if ( link->type != LINK_BUTTON && fc->name && fc->name[0] )
      add_form_attr_to_string( &str, term, "name", fs->value );
    if ( fc->type <= 8 )
    {
      if ( ( ( 1 << fc->type ) & 384 ) == 0 )
      {
        if ( ( ( ( 1 << fc->type ) & 48 ) & 255 ) == 0 )
        {
          if ( ( ( 1 << fc->type ) & 15 ) & 255 )
          {
            struct uri *uri;
            unsigned char *uristring;
            if ( fc->mode )
              add_form_attr_to_string( &str, term, "read only", 0 );
            if ( ses->insert_mode == INSERT_MODE_OFF )
            {
              if ( get_keystroke( 14, KEYMAP_EDIT ) )
              {
                label[0] = fc->mode == 0 ? "press %s to navigate" : "press %s to edit";
                add_to_string( &str, " (" );
                add_format_to_string( &str, _( fc->mode == 0 ? "press %s to navigate" : "press %s to edit", term ) );
                add_char_to_string( &str, 41 );
                mem_free( &key[0] );
                if ( link->accesskey )
                {
                  if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
                  {
                    add_to_string( &str, " (" );
                  {
                    struct term_event_keyboard kbd;
                    kbd.modifier = KBD_MOD_ALT;
                    kbd.key = link->accesskey;
                    add_keystroke_to_string( &str, &kbd, 0 );
                    add_char_to_string( &str, 41 );
                    return str.source;
                  }
                  }
                }
              }
            }
            else
            {
              if ( fc->type != FC_TEXTAREA )
              {
                if ( assert_failed == 0 )
                {
                  assert_failed = fc->form == 0;
                  if ( !(_Bool)( fc->form != 0 ) )
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
                    errline = 1990;
                    elinks_internal( "assertion fc-&gt;form failed!" );
                  }
                }
                if ( fc->form->action && ( !has_form_submit( fc->form ) || *(int*)(get_opt_( config_options, (unsigned char*)config_options )) ) && get_uri( fc->form->action, 0 ) )
                {
                  uristring = get_uri_string( get_uri( fc->form->action, 0 ), URI_PUBLIC );
                  done_uri( &uri[0] );
                  if ( uristring )
                  {
                    if ( get_keystroke( 14, KEYMAP_EDIT ) == 0 )
                      mem_free( ebp_44 );
                    else
                    {
                      label[0] = label[8] != 0 ? "press %s to submit to %s" : "press %s to post to %s";
                      add_to_string( &str, " (" );
                      add_format_to_string( &str, _( &label[0], term ) );
                      mem_free( (void*)uristring );
                      mem_free( &key[0] );
                      add_char_to_string( &str, 41 );
                      esi = uri[0].string;
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          struct form_state *fs;
          fs[0].form_view = &fs->value[0];
          if ( fs->value && fs )
          {
            fs[0].form_view = &str.source[0];
            add_form_attr_to_string( &str, term, "value", (unsigned char*)fs[0].form_view );
          }
        }
      }
      else
      {
        add_char_to_string( &str, 32 );
        if ( assert_failed == 0 )
        {
          assert_failed = fc->form == 0;
          if ( !(_Bool)( fc->form != 0 ) )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
            errline = 2029;
            elinks_internal( "assertion fc-&gt;form failed!" );
          }
          add_string_uri_to_string( &str, fc->form->action, URI_PUBLIC );
        }
      }
    }
  }
  else
  {
  }
}
void link_form_menu_func( struct terminal *term, void *link_number_, void *ses_ )
{
  struct document_view *doc_view;
  int link_number = ((int*)link_number_)[0];
  mem_free( link_number_ );
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( ((int*)ses_)[0] == 0 ) | ( term[0].next == 0 ) ) & 1;
    if ( ( ( ((int*)ses_)[0] == 0 ) | ( term[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 2060;
      elinks_internal( "assertion term && ses failed!" );
      if ( assert_failed == 0 )
        goto B4;
    }
B4:    if ( current_frame( &((int*)ses_)[0] ) )
    {
      if ( assert_failed == 0 )
      {
        if ( *(int*)(current_frame( &((int*)ses_)[0] ) + 24) && doc_view->document )
          assert_failed = 0;
        else
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
          errline = 2066;
          elinks_internal( "assertion doc_view-&gt;vs && doc_view-&gt;document failed!" );
          if ( assert_failed )
            link_number = link_number;
        }
        jump_to_link_number( &((int*)ses_)[0], &doc_view[0], link_number );
        link_number_ = (void*)doc_view[0].next;
        term = &((int*)ses_)[0];
        ses_ = 0;
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
void link_form_menu( struct session *ses )
{
  int eax;
  struct document_view *doc_view;
  struct link *link;
  struct menu_item *mi;
  struct form_control *fc;
  struct form *form;
  if ( assert_failed == 0 )
  {
    assert_failed = ses == 0;
    if ( !(_Bool)( ses != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
      errline = 2082;
      elinks_internal( "assertion ses failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    doc_view = current_frame( ses );
    if ( doc_view )
    {
      if ( assert_failed == 0 )
      {
        if ( doc_view->vs && doc_view->document )
          assert_failed = 0;
        else
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
          errline = 2088;
          elinks_internal( "assertion doc_view-&gt;vs && doc_view-&gt;document failed!" );
          if ( assert_failed )
            continue;
        }
        if ( doc_view->vs->current_link >= 0 && doc_view->vs->current_link < doc_view->document->nlinks && link[0] )
        {
          assert_failed = link->type <= 1;
          if ( link->type <= 1 )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
            errline = 2094;
            elinks_internal( "assertion link_is_form(link) failed!" );
          }
          if ( link->type > 1 && link->data )
          {
            form = &fc->form->form_num;
            if ( new_menu( 67 ) )
            {
              mi = new_menu( 67 );
              fc = &form->items.next[0];
              if ( form->items.next != form->items.next )
              {
                do
                {
                  switch ( fc->type )
                  {
                  case FC_HIDDEN:
                    fc = &fc;
                    if ( form->items.next == fc->next )
                    {
                      break;
                    }
                    break;
                  case FC_SUBMIT:
                  case FC_IMAGE:
                    break;
                  case FC_HIDDEN:
                  {
                    unsigned char *text;
                    unsigned char *rtext;
                    int link_number;
                    struct string str;
                    text[0] = get_form_label( &fc[0] );
                  }
                    break;
                  }
                  link_number = get_form_control_link( doc_view->document, &fc[0] );
                  if ( get_form_control_link( doc_view->document, &fc[0] ) >= 0 && init_string( &str ) )
                  {
                    if ( assert_failed == 0 )
                    {
                      assert_failed = text[0] == 0;
                      if ( !(_Bool)( text[0] != 0 ) )
                      {
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/form.c";
                        errline = 2131;
                        elinks_internal( "assertion text failed!" );
                      }
                    }
                    &ses->tab->term = ses->tab->term;
                    if ( text[0] && text[0] )
                    {
                      if ( ses->tab->term && current_charset != get_terminal_codepage( ses->tab->term ) )
                      {
                        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( ses->tab->term ) ) );
                        current_charset = get_terminal_codepage( ses->tab->term );
                      }
                      text[0] = gettext( &text[0] );
                    }
                    add_to_string( &str, &text[0] );
                    rtext[0] = fc->name;
                    if ( fc->name == 0 )
                    {
                    }
                    if ( mem_alloc( 4 ) )
                      *(int*)(mem_alloc( 4 )) = link_number;
                    add_to_menu( &mi, str.source, &rtext[0], ACT_MAIN_NONE, &link_form_menu_func, mem_alloc( 4 ), FREE_DATA );
                  }
                  fc = &fc;
                }
                while ( form->items.next == fc->next );
                mi->text = (unsigned char*)mi;
              }
              do_menu( ses->tab->term, mi, (void*)ses, 1 );
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
#if 0
#endif
