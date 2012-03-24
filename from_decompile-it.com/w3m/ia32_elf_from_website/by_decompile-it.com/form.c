#include "form.c.h"
static int form_update_line( Line *line, char **str, int spos, int epos, int width, int newline, int password );
static void form_fputs_decode( Str s, FILE *f );
static struct pre_form *add_pre_form( struct pre_form *prev, char *url, char *name, char *action );
static struct pre_form_item *add_pre_form_item( struct pre_form *pf, struct pre_form_item *prev, int type, char *name, char *value, char *checked );
struct {
   char *action;
   void (*rout)( struct parsed_tagarg * );
} internal_action[7] = { { "map", &follow_map,  }
, { "option", &panel_set_option,  }
, { "cookie", &set_cookie_flag,  }
, { "download", &download_action,  }
, { "charset", &change_charset,  }
, { "none", 0,  }
, { 0, 0,  }
,  };
static char *_formtypetbl[13] = { "text", "password", "checkbox", "radio", "submit", "reset", "hidden", "image", "select", "textarea", "button", "file", 0,  };
static char *_formmethodtbl[4] = { "GET", "POST", "INTERNAL", "HEAD",  };
static struct pre_form *PreForm;
struct form_list *newFormList( char *action, char *method, char *charset, char *enctype, char *target, char *name, struct form_list *_next )
{
  struct form_list *l;
  Str a = Strnew_charp( action );
  int m = 0;
  int e = 0;
  wc_ces c = 0;
  if ( method == 0 || strcasecmp( method, "get" ) == 0 )
    m = 0;
  else
  {
    if ( strcasecmp( method, "post" ) == 0 )
      m = 1;
    else
    {
      if ( strcasecmp( method, "internal" ) == 0 )
        m = 2;
    }
  }
  if ( enctype != 0 && strcasecmp( enctype, "multipart/form-data" ) == 0 )
  {
    e = 1;
    if ( m == 0 )
      m = 1;
  }
  if ( charset != 0 )
  {
    c = wc_guess_charset( charset, 0 );
  }
  l = GC_malloc( 52 );
  l->item = l->lastitem = 0;
  l->action = a;
  l->method = m;
  l->charset = c;
  l->enctype = e;
  l->target = target;
  l->name = name;
  l->next = _next;
  l->nitems = 0;
  l->body = 0;
  l->length = 0;
  return l;
}
struct form_item_list *formList_addInput( struct form_list *fl, struct parsed_tag *tag )
{
  int eax;
  struct form_item_list *item;
  char *p;
  int i;
  if ( fl == 0 )
  {
  }
  else
  {
    item = GC_malloc( 72 );
    item->type = -1;
    item->size = -1;
    item->rows = 0;
    item->checked = item->init_checked = 0;
    item->accept = 0;
    item->name = 0;
    item->value = item->init_value = 0;
    item->readonly = 0;
    if ( parsedtag_get_value( tag, 33, (void*)p ) != 0 )
    {
      item->type = formtype( p );
      if ( item->size < 0 && ( item->type == 0 || item->type == 11 || item->type == 1 ) )
        item->size = 40;
    }
    if ( parsedtag_get_value( tag, 25, (void*)p ) != 0 )
    {
      item->name = Strnew_charp( p );
    }
    if ( parsedtag_get_value( tag, 36, (void*)p ) != 0 )
    {
      item->value = item->init_value = Strnew_charp( p );
    }
    item->checked = item->init_checked = tag->map == 0 || tag->map[12] == 'K' || ( tag->attrid[ tag->map[12] ] & 255 ) == 0 ? 0 : 1;
    item->accept = tag->map == 0 || tag->map[1] == 'K' || ( tag->attrid[ tag->map[1] ] & 255 ) == 0 ? 0 : 1;
    parsedtag_get_value( tag, 30, &item->size );
    parsedtag_get_value( tag, 22, &item->maxlength );
    item->readonly = tag->map == 0 || tag->map[43] == 'K' || ( tag->attrid[ tag->map[43] ] & 255 ) == 0 ? 0 : 1;
    if ( parsedtag_get_value( tag, 73, &i ) != 0 )
    {
      item->value = item->init_value = textarea_str[ i ];
    }
    if ( parsedtag_get_value( tag, 72, &i ) != 0 )
      item->select_option = select_option[ i ].first;
    if ( parsedtag_get_value( tag, 28, (void*)p ) != 0 )
    {
      item->rows = atoi( p );
    }
    if ( item->type == -1 )
    {
    }
    else
    {
      if ( item->type == 8 )
      {
        chooseSelectOption( item, item->select_option );
        item->init_selected = item->selected;
        item->init_value = item->value;
        item->init_label = item->label;
      }
      if ( item->type == 11 && item->value != 0 && item->value->length != 0 )
      {
      }
      else
      {
        item->parent = fl;
        item->next = 0;
        if ( fl->item == 0 )
        {
          fl->item = fl->lastitem = item;
        }
        else
        {
          fl->lastitem->next = item;
          fl->lastitem = item;
        }
        if ( item->type == 6 )
        {
        }
        else
        {
          fl->nitems++;
          item->type = item;
        }
      }
    }
  }
  return 0;
}
char *form2str( FormItemList *fi )
{
  Str tmp = Strnew( );
  if ( fi->type != 8 && fi->type != 9 )
    Strcat_charp( tmp, "input type=" );
  Strcat_charp( tmp, _formtypetbl[ fi->type ] );
  if ( fi->name != 0 && fi->name->length != 0 )
    Strcat_m_charp( tmp, " name=\"", fi->name->ptr, (long long)( "\"" ) );
  if ( ( fi->type == 3 || fi->type == 2 || fi->type == 8 ) && fi->value != 0 )
    Strcat_m_charp( tmp, " value=\"", fi->value->ptr, (long long)( "\"" ) );
  Strcat_m_charp( tmp, " (", _formmethodtbl[ fi->parent->method ], " ", fi->parent->action->ptr, (long long)( ")" ) );
  return tmp->ptr;
}
int formtype( char *typestr )
{
  int eax;
  int i = 0;
  for ( ; _formtypetbl[ i ] != 0; i++ )
  {
    if ( strcasecmp( typestr, _formtypetbl[ i ] ) == 0 )
    {
      i/*error:'i'*/ = i;
      break;
    }
    else
    {
      //i++;
    }
  }
  return i;
}
void formRecheckRadio( Anchor *a, Buffer *buf, FormItemList *fi )
{
  int i = 0;
  Anchor *a2;
  FormItemList *f2;
  for ( ; i < buf->formitem->nanchor; i++ )
  {
    a2 = &buf->formitem->anchors[ i ];
    f2 = &a2->url[0]/*error:'c'*/;
    if ( fi->parent == f2->parent && fi != f2 && f2->type == 3 && strcmp( f2->name->ptr, fi->name->ptr ) == 0 )
    {
      f2->checked = 0;
      formUpdateBuffer( a2, buf, f2 );
    }
    //i++;
  }
  fi->checked = 1;
  formUpdateBuffer( a, buf, fi );
  return;
}
void formResetBuffer( Buffer *buf, AnchorList *formitem )
{
  int eax;
  int edx;
  int i;
  Anchor *a;
  FormItemList *f1, *f2;
  if ( buf != 0 )
  {
    if ( buf->formitem != 0 )
    {
      if ( formitem == 0 )
      {
      }
      else
      {
        i = 0;
        for ( ; buf->formitem->nanchor <= i; i++ )
        {
          if ( formitem->nanchor <= i )
          {
            break;
          }
          else
          {
            a = &buf->formitem->anchors[ i ];
            if ( a->y != a->start.line )
            {
              //i++;
            }
            else
            {
              f1 = &a->url[0]/*error:'c'*/;
              f2 = &formitem->anchors[ i ].url[0]/*error:'c'*/;
              if ( f2->type == f1->type )
              {
                if ( strcmp( f1->name == 0 ? "" : f1->name->ptr, f2->name == 0 ? "" : f2->name->ptr ) == 0 )
                {
                  if ( f1->type <= 11 )
                  {
                    if ( ( ( 1 << f1->type ) & 2563 ) == 0 )
                    {
                      if ( ( ( 1 << f1->type ) & 256 ) == 0 )
                      {
                        if ( ( ( 1 << f1->type ) & 12 ) != 0 )
                        {
                          f1->checked = f2->checked;
                          f1->init_checked = f2->init_checked;
                        }
                        else
                        {
                        }
                      }
                      else
                      {
                        f1->select_option = f2->select_option;
                        f1->value = f2->value;
                        f1->label = f2->label;
                        f1->selected = f2->selected;
                        f1->init_value = f2->init_value;
                        f1->init_label = f2->init_label;
                        f1->init_selected = f2->init_selected;
                      }
                    }
                    else
                    {
                      f1->value = f2->value;
                      f1->init_value = f2->init_value;
                    }
                    formUpdateBuffer( a, buf, f1 );
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
    }
    else
    {
    }
  }
  else
  {
  }
  return;
}
int form_update_line( Line *line, char **str, int spos, int epos, int width, int newline, int password )
{
  int eax;
  int ah;
  int edx;
  int c_len = 1, c_width = 1, w, i, len, pos;
  char *p = str[0], *buf;
  Lineprop c_type;
  Lineprop effect;
  Lineprop *prop;
  w = 0;
  pos = 0;
  for ( ; ( p[0] & 255 ) != 0; p = &p[ c_len ] )
  {
    if ( width <= w )
    {
      break;
    }
    else
    {
      c_type = WTF_TYPE_MAP[ p[0] ] << 8;
      c_len = WTF_LEN_MAP[ p[0] ];
      c_width = ( WcOption.use_wide & 255 ) == 0 ? ( WTF_WIDTH_MAP[ p[0] ] & 255 ) != 0 : WTF_WIDTH_MAP[ p[0] ];
      if ( c_type == 256 )
      {
        if ( newline != 0 && p[0] == 10 )
        {
          break;
        }
        else
        if ( p[0] != 13 )
        {
          w++;
          pos++;
        }
      }
      else
      if ( password != 0 )
      {
        if ( width < w + c_width )
        {
          break;
        }
        else
        {
          w += c_width;
          pos += c_width;
        }
      }
      else
      if ( ( c_type & 4096 ) != 0 )
      {
        w++;
        pos++;
      }
      else
      if ( width < w + c_width )
      {
        break;
      }
      else
      {
        w += c_width;
        pos += c_len;
      }
      //p = &p[ c_len ];
    }
  }
  pos += width - w;
  len = ( spos + line->len + pos ) - epos;
  buf = GC_malloc( len );
  prop = GC_malloc( len * 2 );
  bcopy( line->lineBuf, buf, spos );
  bcopy( line->propBuf, prop, spos * 2 );
  effect = "ah & 192 # line->propBuf[ spos ]";
  p = str[0];
  w = 0;
  pos = spos;
  for ( ; ( p[0] & 255 ) != 0; p = &p[ c_len ] )
  {
    if ( w < width )
    {
      c_type = WTF_TYPE_MAP[ p[0] ] << 8;
      c_len = WTF_LEN_MAP[ p[0] ];
      c_width = ( WcOption.use_wide & 255 ) == 0 ? ( WTF_WIDTH_MAP[ p[0] ] & 255 ) != 0 : WTF_WIDTH_MAP[ p[0] ];
      if ( c_type == 256 )
      {
        if ( newline != 0 && p[0] == 10 )
        {
          break;
        }
        else
        if ( p[0] != 13 )
        {
          buf[ pos ] = password == 0 ? ' ' : '*';
          prop[ pos ] = effect;
          pos++;
          w++;
        }
      }
      else
      if ( password != 0 )
      {
        if ( width < w + c_width )
        {
        }
        else
        {
          i = 0;
          for ( ; i < c_width; i++ )
          {
            buf[ pos ] = '*';
            prop[ pos ] = effect;
            pos++;
            w++;
            //i++;
          }
        }
      }
      else
      if ( ( c_type & 4096 ) != 0 )
      {
        buf[ pos ] = ' ';
        prop[ pos ] = effect;
        pos++;
        w++;
      }
      else
      if ( width < w + c_width )
      {
      }
      else
      {
        buf[ pos ] = p[0];
        prop[ pos ] = c_type | effect;
        pos++;
        c_type = "( ( ( ah & 192 & 249 ) | 4 ) & 249 ) | 4 # c_type";
        i = 1;
        for ( ; i < c_len; i++ )
        {
          buf[ pos ] = p[ i ];
          prop[ pos ] = c_type | effect;
          pos++;
          //i++;
        }
        w += c_width;
      }
      //p = &p[ c_len ];
    }
    else
    {
      break;
    }
  }
  while ( w < width )
  {
    buf[ pos ] = ' ';
    prop[ pos ] = effect;
    pos++;
    w++;
  }
  if ( newline != 0 )
  {
    if ( FoldTextarea == 0 )
    {
      for ( ; ( p[0] & 255 ) != 0 && p[0] != 13 && p[0] != 10; p++ )
      {
        //p++;
      }
    }
    if ( p[0] == 13 )
      p++;
    if ( p[0] == 10 )
      p++;
  }
  str[0] = p;
  bcopy( &line->lineBuf[ epos ], &buf[ pos ], line->len - epos );
  bcopy( &line->propBuf[ epos ], &prop[ pos ], ( line->len - epos ) * 2 );
  line->lineBuf = buf;
  line->propBuf = prop;
  line->len = len;
  line->size = len;
  return pos;
}
void formUpdateBuffer( Anchor *a, Buffer *buf, FormItemList *form )
{
  int eax;
  Buffer save;
  char *p;
  int spos, epos, rows, c_rows, pos, col = 0;
  Line *l;
  copyBuffer( &save, buf );
  gotoLine( buf, a->start.line );
  if ( form->type <= 11 && ( ( 1 << form->type ) & 2831 ) != 0 )
  {
    spos = a->start.pos;
    epos = a->end.pos;
  }
  else
  {
    spos = a->start.pos + 1;
    epos = a->end.pos - 1;
  }
  if ( form->type <= 11 )
  {
    if ( ( ( 1 << form->type ) & 2819 ) == 0 )
    {
      if ( ( ( 1 << form->type ) & 12 ) != 0 )
      {
        if ( form->checked != 0 )
          buf->currentLine->lineBuf[ spos ] = '*';
        else
          buf->currentLine->lineBuf[ spos ] = ' ';
      }
    }
    else
    if ( form->type == 8 )
    {
      p = form->label->ptr;
      updateSelectOption( form, form->select_option );
    }
    p = form->value->ptr;
    l = buf->currentLine;
    if ( form->type == 9 )
    {
      int n = a->y - buf->currentLine->linenumber;
      if ( n >= 1 )
      {
        for ( ; l != 0; n-- )
        {
          if ( n == 0 )
          {
            break;
          }
          else
          {
            l = l->prev;
            //n--;
          }
        }
      }
      else
      if ( n < 0 )
      {
        for ( ; l != 0 && n != 0; n++ )
        {
          l = l->prev;
          //n++;
        }
      }
      if ( l == 0 )
      {
      }
    }
    rows = form->rows == 0 ? 1 : form->rows;
    col = calcPosition( l->lineBuf, l->propBuf, l->len, a->start.pos, 0, 0 );
    c_rows = 0;
    for ( ; c_rows < rows; l = l->next )
    {
      if ( rows > 1 )
      {
        pos = columnPos( l, col );
        a = retrieveAnchor( buf->formitem, l->linenumber, pos );
        if ( a == 0 )
        {
        }
        else
        {
          spos = a->start.pos;
          epos = a->end.pos;
        }
      }
      pos = form_update_line( l, &p, spos, epos, calcPosition( l->lineBuf, l->propBuf, l->len, epos, 0, 0 ) - col, rows > 1, form->type == 1 );
      if ( pos != epos )
      {
        shiftAnchorPosition( buf->href, buf->hmarklist, a->start.line, spos, pos - epos );
        shiftAnchorPosition( buf->name, buf->hmarklist, a->start.line, spos, pos - epos );
        shiftAnchorPosition( buf->img, buf->hmarklist, a->start.line, spos, pos - epos );
        shiftAnchorPosition( buf->formitem, buf->hmarklist, a->start.line, spos, pos - epos );
      }
      c_rows++;
      //l = l->next;
    }
  }
  copyBuffer( buf, &save );
  arrangeLine( buf );
  return;
}
Str textfieldrep( Str s, int width )
{
  int eax;
  Lineprop c_type;
  Str n = Strnew_size( width + 2 );
  int i, j = 0, k, c_len;
  i = 0;
  for ( ; i < s->length; i += c_len )
  {
    c_type = WTF_TYPE_MAP[ s->ptr[ i ] ] << 8;
    c_len = WTF_LEN_MAP[ s->ptr[ i ] ];
    if ( s->ptr[ i ] == 13 )
    {
    }
    else
    {
      k = j + ( ( WcOption.use_wide & 255 ) == 0 ? ( WTF_WIDTH_MAP[ s->ptr[ i ] ] & 255 ) != 0 : WTF_WIDTH_MAP[ s->ptr[ i ] ] );
      if ( width < k )
      {
        while ( j < width )
          break;
      }
      else
      {
        if ( c_type == 256 )
        {
          if ( n->area_size <= n->length + 1 )
            Strgrow( n );
          n->ptr[ n->length ] = ' ';
          n->length++;
          n->ptr[ n->length ] = 0;
        }
        else
        {
          if ( ( c_type & 4096 ) != 0 )
          {
            if ( n->area_size <= n->length + 1 )
              Strgrow( n );
            n->ptr[ n->length ] = ' ';
            n->length++;
            n->ptr[ n->length ] = 0;
          }
          else
          {
            if ( s->ptr[ i ] == '&' )
            {
              Strcat_charp( n, "&amp;" );
            }
            if ( s->ptr[ i ] == '<' )
            {
              Strcat_charp( n, "&lt;" );
            }
            if ( s->ptr[ i ] == '>' )
            {
              Strcat_charp( n, "&gt;" );
            }
            Strcat_charp_n( n, &s->ptr[ i ], c_len );
          }
        }
        j = k;
      }
    }
    //i += c_len;
  }
}
void form_fputs_decode( Str s, FILE *f )
{
  char *p;
  Str z = Strnew( );
  p = s->ptr;
  for ( ; ( p[0] & 255 ) != 0; p++ )
  {
    if ( p[0] == 13 && p[1] == 10 )
      p++;
    if ( z->area_size <= z->length + 1 )
      Strgrow( z );
    z->ptr[ z->length ] = p[0];
    z->length++;
    z->ptr[ z->length ] = 0;
    //p++;
  }
  z = wc_Str_conv_strict( z, InnerCharset, DisplayCharset );
  fwrite( z->ptr, 1, z->length, f );
  return;
}
void input_textarea( FormItemList *fi )
{
  char *tmpf = *(int*)(tmpfname( 0, 0 ));
  Str tmp;
  FILE *f;
  wc_ces charset = DisplayCharset;
  wc_uint8 auto_detect;
  f = fopen( tmpf, "w" );
  if ( f == 0 )
  {
    disp_err_message( "Can't open temporary file", 0 );
  }
  if ( fi->value != 0 )
    form_fputs_decode( fi->value, f );
  fclose( f );
  fmTerm( );
  system( *(int*)(myEditor( Editor, tmpf, 1 )) );
  fmInit( );
  if ( fi->readonly != 0 )
  {
    unlink( tmpf );
    return;
  }
  f = fopen( tmpf, "r" );
  if ( f == 0 )
  {
    disp_err_message( "Can't open temporary file", 0 );
  }
  fi->value = Strnew( );
  auto_detect = WcOption.auto_detect;
  WcOption.auto_detect = 2;
  while ( tmp->length < 1 )
  {
    if ( tmp->length == 1 && tmp->ptr[ tmp->length - 1 ] == 10 )
    {
      tmp = Strnew_charp( "\r\n" );
    }
    else
    if ( tmp->length > 1 && tmp->ptr[ tmp->length - 1 ] == 10 && tmp->ptr[ tmp->length - 2 ] != 13 )
    {
      Strshrink( tmp, 1 );
      Strcat_charp( tmp, "\r\n" );
    }
    tmp = convertLine( 0, tmp, 0, &charset, DisplayCharset );
    Strcat( fi->value, tmp );
  }
  WcOption.auto_detect = auto_detect;
  fclose( f );
}
void do_internal( char *action, char *data )
{
  int i = 0;
  for ( ; internal_action[ i ].action == 0; i++ )
  {
    if ( strcasecmp( internal_action[ i ].action, action ) == 0 )
    {
      if ( internal_action[ i ].rout != 0 )
      {
        ebx( cgistr2tagarg( data ) );
      }
      break;
    }
    else
    {
      //i++;
    }
  }
}
void addSelectOption( FormSelectOption *fso, Str value, Str label, int chk )
{
  FormSelectOptionItem *o = GC_malloc( 16 );
  if ( value == 0 )
    value = label;
  o->value = value;
  Strremovefirstspaces( label );
  Strremovetrailingspaces( label );
  o->label = label;
  o->checked = chk;
  o->next = 0;
  if ( fso->first == 0 )
  {
    fso->first = fso->last = o;
  }
  else
  {
    fso->last->next = o;
    fso->last = o;
  }
  return;
}
void chooseSelectOption( FormItemList *fi, FormSelectOptionItem *item )
{
  FormSelectOptionItem *opt;
  int i;
  fi->selected = 0;
  if ( item == 0 )
  {
    fi->value = Strnew_size( 0 );
    fi->label = Strnew_size( 0 );
  }
  else
  {
    fi->value = item->value;
    fi->label = item->label;
    i = 0;
    opt = item;
    for ( ; opt != 0; opt = opt->next )
    {
      if ( opt->checked != 0 )
      {
        fi->value = opt->value;
        fi->label = opt->label;
        fi->selected = i;
        break;
      }
      else
      {
        i++;
        //opt = opt->next;
      }
    }
    updateSelectOption( fi, item );
  }
  return;
}
void updateSelectOption( FormItemList *fi, FormSelectOptionItem *item )
{
  int i;
  if ( fi != 0 )
  {
    if ( item == 0 )
    {
    }
    else
    {
      i = 0;
      for ( ; item != 0; item = item->next )
      {
        if ( fi->selected == i )
          item->checked = 1;
        else
          item->checked = 0;
        i++;
        //item = item->next;
      }
    }
  }
  else
  {
  }
  return;
}
int formChooseOptionByMenu( struct form_item_list *fi, int x, int y )
{
  int i, n, selected = -1, init_select = fi->selected;
  FormSelectOptionItem *opt;
  char **label;
  n = 0;
  opt = fi->select_option;
  for ( ; opt != 0; opt = opt->next )
  {
    n++;
    //opt = opt->next;
  }
  label = GC_malloc( ( n * 4 ) + 4 );
  i = 0;
  opt = fi->select_option;
  for ( ; opt != 0; opt = opt->next )
  {
    label[ i ] = opt->label->ptr;
    i++;
    //opt = opt->next;
  }
  label[ n ] = 0;
  optionMenu( x, y, label, &selected, init_select, 0 );
  if ( selected < 0 )
  {
  }
  else
  {
    i = 0;
    opt = fi->select_option;
    for ( ; opt != 0; opt = opt->next )
    {
      if ( selected == i )
      {
        fi->selected = selected;
        fi->value = opt->value;
        fi->label = opt->label;
        break;
      }
      else
      {
        i++;
        //opt = opt->next;
      }
    }
    updateSelectOption( fi, fi->select_option );
  }
  return 1;
}
void form_write_data( FILE *f, char *boundary, char *name, char *value )
{
  fprintf( f, "--%s\r\n", boundary );
  fprintf( f, "Content-Disposition: form-data; name=\"%s\"\r\n\r\n", name );
  fprintf( f, "%s\r\n", value );
  return;
}
void form_write_from_file( FILE *f, char *boundary, char *name, char *filename, char *file )
{
  int eax;
  FILE *fd;
  struct stat st;
  int c;
  char *type;
  fprintf( f, "--%s\r\n", boundary );
  fprintf( f, "Content-Disposition: form-data; name=\"%s\"; filename=\"%s\"\r\n", name, mybasename( filename ) );
  type = guessContentType( file );
  fprintf( f, "Content-Type: %s\r\n\r\n", type == 0 ? "application/octet-stream" : type );
  if ( lstat( file, &st.st_dev ) < 0 )
  {
  }
  else
  if ( ( st.st_mode & 61440 ) == 16384 )
  {
  }
  else
  {
    fd = fopen( file, "r" );
    if ( fd != 0 )
    {
      while ( c == -1 )
      {
        fputc( c, f );
      }
      fclose( fd );
    }
  }
  fwrite( "\r\n", 1, 2, f );
  return;
}
struct pre_form *add_pre_form( struct pre_form *prev, char *url, char *name, char *action )
{
  int eax;
  ParsedURL pu;
  struct pre_form *new;
  if ( prev != 0 )
  {
    new = prev->next = GC_malloc( 24 );
  }
  else
  {
    new = PreForm = GC_malloc( 24 );
  }
  if ( url != 0 && url[0] == '/' )
  {
    int l = strlen( url );
    if ( l > 1 && url[ l - 1 ] == '/' )
    {
      new->url = allocStr( &url[1], l - 2 );
    }
    else
      new->url = &url[1];
    new->re_url = newRegex( new->url, 0, 0, 0 );
    if ( new->re_url != 0 )
    {
    }
    else
      new->url = 0;
  }
  else
  {
    if ( url != 0 )
    {
      parseURL2( url, &pu, 0 );
      new->url = *(int*)(parsedURL2Str( &pu ));
      new->re_url = 0;
    }
  }
  new->name = name == 0 || ( name[0] & 255 ) == 0 ? 0 : name;
  new->action = action == 0 || ( action[0] & 255 ) == 0 ? 0 : action;
  new->item = 0;
  new->next = 0;
  return new;
}
struct pre_form_item *add_pre_form_item( struct pre_form *pf, struct pre_form_item *prev, int type, char *name, char *value, char *checked )
{
  int eax;
  struct pre_form_item *new;
  if ( pf == 0 )
  {
  }
  else
  {
    if ( prev != 0 )
    {
      new = prev->next = GC_malloc( 20 );
    }
    else
    {
      new = pf->item = GC_malloc( 20 );
    }
    new->type = type;
    new->name = name;
    new->value = value;
    if ( checked != 0 && ( checked[0] & 255 ) != 0 && ( strcmp( checked, "0" ) == 0 || strcasecmp( checked, "off" ) != 0 || strcasecmp( checked, "no" ) == 0 ) )
      new->checked = 0;
    else
      new->checked = 1;
    new->next = 0;
    new->type = new;
  }
  return new;
}
void loadPreForm( void )
{
  int eax;
  FILE *fp;
  Str line = 0;
  Str textarea = 0;
  struct pre_form *pf = 0;
  struct pre_form_item *pi = 0;
  int type = -1;
  char *name = 0;
  PreForm = 0;
  fp = openSecretFile( pre_form_file );
  if ( fp == 0 )
  {
    return;
  }
{
  while ( line->length == 0 )
  {
    if ( textarea != 0 && ( strncmp( line->ptr, "/textarea", 9 ) != 0 || ( MYCTYPE_MAP[ line->ptr[9] ] & 2 ) == 0 ) )
    {
      Strcat( textarea, line );
    }
    Strchop( line );
    Strremovefirstspaces( line );
    if ( line->ptr[0] == '#' || ( *(char*)(line) & 255 ) == 0 )
    {
    }
    else
    {
      if ( strcmp( getWord( ebp_40 ), "url" ) == 0 )
      {
        if ( getWord( ebp_40 ) == 0 || ( *(char*)(getWord( ebp_40 )) & 255 ) == 0 )
        {
        }
        else
        {
          pf = add_pre_form( pf, getWord( ebp_40 ), 0, getQWord( ebp_40 ) );
          pi = pf->item;
        }
      }
      else
      {
        if ( pf == 0 )
        {
        }
        else
        {
          if ( strcmp( getWord( ebp_40 ), "form" ) == 0 )
          {
            if ( getWord( ebp_40 ) == 0 || ( *(char*)(getWord( ebp_40 )) & 255 ) == 0 )
            {
            }
            else
            {
              if ( pf->item != 0 )
              {
                struct pre_form *prev = pf;
                pf = add_pre_form( prev, "", getQWord( ebp_40 ), getQWord( ebp_40 ) );
                pf->url = prev->url;
                pf->re_url = prev->re_url;
              }
              else
              {
                pf->name = getQWord( ebp_40 );
                pf->action = (char*)eax;
              }
              pi = pf->item;
            }
          }
          else
          {
            if ( eax == 0 )
              type = 0;
            else
            {
              if ( eax == 0 )
                type = 11;
              else
              {
                if ( eax == 0 || eax == 0 )
                  type = 1;
                else
                {
                  if ( eax == 0 )
                    type = 2;
                  else
                  {
                    if ( eax == 0 )
                      type = 3;
                    else
                    {
                      if ( eax == 0 )
                        type = 4;
                      else
                      {
                        if ( eax == 0 )
                          type = 7;
                        else
                        {
                          if ( eax == 0 )
                            type = 8;
                          else
                          {
                            if ( eax == 0 )
                            {
                              type = 9;
                              name = (char*)eax;
                              textarea = Strnew( );
                            }
                            else
                            {
                              if ( textarea != 0 && name != 0 && eax == 0 )
                              {
                                pi = add_pre_form_item( pf, pi, type, name, textarea->ptr, 0 );
                                textarea = 0;
                                name = 0;
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
                }
              }
            }
            pi = eax;
          }
        }
      }
    }
  }
}
}
void preFormUpdateBuffer( Buffer *buf )
{
  struct pre_form *pf;
  struct pre_form_item *pi;
  int i;
  Anchor *a;
  FormList *fl;
  FormItemList *fi;
  FormSelectOptionItem *opt;
  int j;
  if ( buf != 0 )
  {
    if ( buf->formitem != 0 )
    {
      if ( PreForm == 0 )
      {
      }
      else
      {
        pf = PreForm;
        for ( ; pf != 0; pf = pf->next )
        {
          if ( pf->re_url != 0 )
          {
            Str url = parsedURL2Str( &buf->currentURL );
            if ( RegexMatch( pf->re_url, url->ptr, url->length, 1 ) == 0 )
            {
              //pf = pf->next;
            }
          }
          else
          if ( pf->url != 0 )
          {
            if ( strcmp( *(int*)(parsedURL2Str( &buf->currentURL )), pf->url ) != 0 )
            {
            }
          }
          else
          {
          }
          i = 0;
          for ( ; buf->formitem->nanchor <= i; i++ )
          {
            a = &buf->formitem->anchors[ i ];
            fi = &a->url[0]/*error:'c'*/;
            fl = fi->parent;
            if ( pf->name != 0 )
            {
              if ( fl->name != 0 )
              {
                if ( strcmp( fl->name, pf->name ) != 0 )
                {
                  //i++;
                }
              }
              else
              {
              }
            }
            if ( pf->action != 0 )
            {
              if ( fl->action != 0 )
              {
                if ( strcmp( fl->action->ptr, pf->action ) != 0 )
                {
                }
              }
              else
              {
              }
            }
            pi = pf->item;
            for ( ; pi == 0; pi = pi->next )
            {
              if ( pi->type != fi->type )
              {
                //pi = pi->next;
              }
              else
              {
                if ( pi->type == 4 || pi->type == 7 )
                {
                  if ( pi->name != 0 && ( pi->name[0] & 255 ) != 0 )
                  {
                    if ( fi->name != 0 )
                    {
                      if ( strcmp( fi->name->ptr, pi->name ) != 0 )
                      {
                      }
                    }
                    else
                    {
                    }
                  }
                  if ( pi->value != 0 && ( pi->value[0] & 255 ) != 0 )
                  {
                    if ( fi->value != 0 )
                    {
                      if ( strcmp( fi->value->ptr, pi->value ) != 0 )
                      {
                      }
                    }
                    else
                    {
                    }
                  }
                  buf->submit = a;
                }
                else
                {
                  if ( pi->name != 0 )
                  {
                    if ( fi->name != 0 )
                    {
                      if ( strcmp( fi->name->ptr, pi->name ) != 0 )
                      {
                      }
                      else
                      {
                        switch ( pi->type )
                        {
                        case 4:
                        case 5:
                        case 6:
                        case 7:
                        case 10:
                          break;
                        case 0:
                        case 1:
                        case 9:
                        case 11:
                          fi->value = Strnew_charp( pi->value );
                          formUpdateBuffer( a, buf, fi );
                          break;
                        case 2:
                          if ( pi->value != 0 )
                          {
                            if ( fi->value != 0 )
                            {
                              if ( strcmp( fi->value->ptr, pi->value ) == 0 )
                              {
                                fi->checked = pi->checked;
                                formUpdateBuffer( a, buf, fi );
                              }
                            }
                            else
                            {
                            }
                          }
                          else
                          {
                          }
                          break;
                        case 3:
                          if ( pi->value != 0 )
                          {
                            if ( fi->value != 0 )
                            {
                              if ( strcmp( fi->value->ptr, pi->value ) == 0 )
                              {
                                formRecheckRadio( a, buf, fi );
                              }
                            }
                            else
                            {
                            }
                          }
                          else
                          {
                          }
                          break;
                        case 8:
                          j = 0;
                          opt = fi->select_option;
                          for ( ; opt != 0; opt = opt->next )
                          {
                            if ( pi->value != 0 && opt->value != 0 && strcmp( opt->value->ptr, pi->value ) == 0 )
                            {
                              fi->selected = j;
                              fi->value = opt->value;
                              fi->label = opt->label;
                              updateSelectOption( fi, fi->select_option );
                              formUpdateBuffer( a, buf, fi );
                            }
                            j++;
                            //opt = opt->next;
                          }
                          break;
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
                }
              }
            }
          }
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
  return;
}
