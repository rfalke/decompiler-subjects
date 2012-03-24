#include "GridText.c.h"
HText *HTMainText;
HTParentAnchor *HTMainAnchor;
char *HTAppName;
char *HTAppVersion;
static int HTFormNumber;
static int HTFormFields;
static char *HTCurSelectGroup;
static int HTCurSelectGroupCharset;
int HTCurSelectGroupType;
char *HTCurSelectGroupSize;
static char *HTCurSelectedOptionValue;
char *checked_box;
char *unchecked_box;
char *checked_radio;
char *unchecked_radio;
static BOOLEAN underline_on;
static BOOLEAN bold_on;
int LYCacheSource;
int LYCacheSourceForAborted;
BOOLEAN LYShowScrollbar;
BOOLEAN LYsb_arrow;
int LYsb_begin;
int LYsb_end;
static HTStyleChange stylechanges_buffers[2][64];
BOOLEAN can_justify_here;
BOOLEAN can_justify_here_saved;
BOOLEAN can_justify_this_line;
int wait_for_this_stacked_elt;
BOOLEAN form_in_htext;
BOOLEAN in_DT;
static int justify_start_position;
static int ht_num_runs;
static ht_run_info ht_runs[1024];
static BOOLEAN this_line_was_split;
static TextAnchor *last_anchor_of_previous_line;
static BOOLEAN have_raw_nbsps;
static char underscore_string[1025];
char star_string[1025];
static int ctrl_chars_on_this_line;
static int utfxtra_on_this_line;
static HTStyle default_style;
static HTList *loaded_texts;
HTList *search_queries;
static HTProtocol scm;
static int HTFormMethod;
static char *HTFormAction;
static char *HTFormEnctype;
static char *HTFormTitle;
static char *HTFormAcceptCharset;
static BOOLEAN HTFormDisabled;
static PerFormInfo *HTCurrentForm;
pool_data *ALLOC_IN_POOL( HTPool **ppoolptr, unsigned int request )
{
  static HTPool *pool;
  pool_data *ptr;
  unsigned int n;
  unsigned int j;
  pool = ppoolptr[0];
  if ( pool == 0 )
  {
    ptr = 0;
  }
  n = request;
  if ( n == 0 )
    n = 1;
  j = n & 7;
  if ( j )
    n = ( n - j ) + 8;
  n >>= 2;
  if ( pool->used + n <= 2042 )
  {
    ptr = pool->data;
    pool->used += n;
  }
{
  HTPool *newpool = (HTPool*)LY_check_calloc( 1, 8176 );
  if ( newpool == 0 )
  {
    ptr = 0;
  }
  newpool->prev = pool;
  newpool->used = n;
  ptr = newpool->data;
  ppoolptr[0] = newpool;
}
  return ptr;
}
HTPool *POOL_NEW( void )
{
  HTPool *poolptr = (HTPool*)LY_check_calloc( 1, 8176 );
  if ( poolptr )
  {
    poolptr->prev = 0;
    poolptr->used = 0;
  }
  return poolptr;
}
void POOL_FREE( HTPool *poolptr )
{
  HTPool *cur = poolptr;
  HTPool *prev;
  for ( ; cur;  )
  {
    prev = &cur->prev;
    free( cur );
    cur = prev;
  }
  return;
}
void *HText_pool_calloc( HText *text, unsigned int size )
{
  return ALLOC_IN_POOL( &text->pool, size );
}
void ht_justify_cleanup( void )
{
  wait_for_this_stacked_elt = !ok_justify || psrc_view ? 30002 : -1;
  can_justify_here = 1;
  can_justify_this_line = 1;
  form_in_htext = 0;
  last_anchor_of_previous_line = 0;
  this_line_was_split = 0;
  in_DT = 0;
  have_raw_nbsps = 0;
  return;
}
void mark_justify_start_position( void *text )
{
  if ( text && ((int*)text) )
  {
    justify_start_position = ((int*)text);
  }
  return;
}
void HText_halt( void )
{
  if ( HTFormNumber > 0 )
    HText_DisableCurrentForm( );
  if ( HTMainText && HTMainText->halted <= 1 )
  {
    HTMainText->halted = 2;
  }
  return;
}
BOOLEAN mem_is_avail( size_t factor, size_t bytes )
{
  void *p;
  if ( bytes <= 4999 && factor )
    bytes = 5000;
  if ( factor == 0 )
    factor = 1;
  p = malloc( factor * bytes );
  if ( p )
  {
    if ( p == 0 )
      goto B10;
    else
    {
      free( p );
      p = 0;
    }
B10:;
  }
  else
  {
  }
  return 0;
}
void *LY_check_calloc( size_t nmemb, size_t size )
{
  int i, n;
  if ( mem_is_avail( 4, size * nmemb ) & 255 )
  {
  }
  n = HTList_count( loaded_texts );
  i = n + -1;
  for ( ; i > 0;  )
  {
    HText *t = (HText*)HTList_objectAt( loaded_texts, i );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "\nBUG *** Emergency freeing document %d/%d for '%s'%s!\n", i + 1, n, "unknown anchor", "" );
    }
    HTList_removeObjectAt( loaded_texts, i );
    HText_free( t );
    if ( mem_is_avail( 4, size * nmemb ) & 255 )
    {
      break;
    }
    i += -1;
  }
  LYFakeZap( 1 );
  if ( HTMainText == 0 || HTMainText->halted <= 1 )
  {
    if ( ( mem_is_avail( 2, size * nmemb ) & 255 ) == 0 )
    {
      HText_halt( );
      if ( mem_is_avail( 0, 700 ) & 255 )
      {
        HTAlert( gettext( "Memory exhausted, display interrupted!" ) );
      }
    }
    else
    if ( ( HTMainText == 0 || HTMainText->halted == 0 ) && ( mem_is_avail( 0, 700 ) & 255 ) )
    {
      HTAlert( gettext( "Memory exhausted, will interrupt transfer!" ) );
      if ( HTMainText )
        HTMainText->halted = 1;
    }
  }
  return calloc( nmemb, size );
}
int StyleToCols( HText *text, HTLine *line, int nstyle )
{
  int result = line->offset;
  int nchars = line->styles[ nstyle ].bits_at_0/*.1_2of4*/ >> 2;
  char *data = &line->data[0];
  char *last = &data[ line->size ];
  int utf_extra;
  while ( nchars > 0 && data < last )
  {
    if ( 2 < data[0] && data[0] <= 8 && data[0] != 8 )
    {
      data++;
    }
    else
    {
      utf_extra = utf8_length( text->T.output_utf8, data );
      utf_extra++;
      if ( ( utf_extra != 0 ) & 255 )
      {
        result += LYstrExtent( data, utf_extra, 2 );
        data = &data[ utf_extra ];
      }
      else
      if ( HTCJK && data[0] < 0 )
      {
        data += 2;
        result += 2;
      }
      else
      {
        data++;
        result++;
      }
      nchars += -1;
    }
  }
  return result;
}
void LYClearHiText( TextAnchor *a )
{
  if ( a->lites.hl_info )
  {
    free( &a->lites.hl_info );
    a->lites = 0;
  }
  a->lites.hl_base = 0;
  a->lites.hl_len = 0;
  return;
}
void LYSetHiText( TextAnchor *a, char *text, int len )
{
  if ( text )
  {
    a->lites.hl_base = ALLOC_IN_POOL( &HTMainText->pool, len + 2 );
    memcpy( &a->lites.hl_base.hl_text, text, len );
    a->lites.hl_base.hl_text[ len ] = 0;
    a->lites.hl_len = 1;
  }
  return;
}
void LYAddHiText( TextAnchor *a, char *text, int x )
{
  HiliteInfo *have = &a->lites.hl_info;
  unsigned int need = a->lites.hl_len + -1;
  unsigned int want;
  a->lites.hl_len = a->lites.hl_len + 1;
  want = a->lites.hl_len << 3;
  if ( have )
  {
    have = (HiliteInfo*)realloc( have, want );
  }
  else
  {
    have = (HiliteInfo*)malloc( want );
  }
  a->lites = have;
  have[ need ].hl_text = (char*)ALLOC_IN_POOL( &HTMainText->pool, strlen( text ) + 2 );
  strcpy( have[ need ].hl_text, text );
  have[ need ].hl_x = x;
  return;
}
int LYAdjHiTextPos( TextAnchor *a, int count )
{
  char *result;
  if ( a->lites.hl_len <= count )
    result = 0;
  else
  if ( count > 0 )
    result = &a->lites.hl_info[ count + -1 ].hl_text;
  else
    result = &a->lites.hl_base.hl_text;
  return 0;
}
char *LYGetHiTextStr( TextAnchor *a, int count )
{
  char *result;
  if ( a->lites.hl_len <= count )
    result = 0;
  else
  if ( count > 0 )
    result = &a->lites.hl_info[ count + -1 ].hl_text;
  else
    result = &a->lites.hl_base.hl_text;
  result += LYAdjHiTextPos( a, count );
  return result;
}
int LYGetHiTextPos( TextAnchor *a, int count )
{
  int result;
  if ( a->lites.hl_len <= count )
    result = -1;
  else
  if ( count > 0 )
    result = a->lites.hl_info[ count + -1 ].hl_x;
  else
    result = a->line_pos;
  result += LYAdjHiTextPos( a, count );
  return result;
}
void LYCopyHiText( TextAnchor *a, TextAnchor *b )
{
  int count;
  char *s;
  LYClearHiText( a );
  count = 0;
  while ( s == 0 )
  {
    if ( count == 0 )
    {
      LYSetHiText( a, s, strlen( s ) );
    }
    else
    {
      LYAddHiText( a, s, LYGetHiTextPos( b, count ) );
    }
    count++;
  }
  return;
}
void HText_getChartransInfo( HText *me )
{
  me->UCLYhndl = HTAnchor_getUCLYhndl( &me->node_anchor->parent->parent, 3 );
  if ( me->UCLYhndl < 0 )
  {
    int chndl = current_char_set;
    HTAnchor_setUCInfoStage( &me->node_anchor->parent->parent, chndl, 3, 3 );
    me->UCLYhndl = HTAnchor_getUCLYhndl( &me->node_anchor->parent->parent, 3 );
  }
  me->UCI = HTAnchor_getUCInfoStage( &me->node_anchor->parent->parent, 3 );
  return;
}
void PerFormInfo_free( PerFormInfo *form )
{
  if ( form )
  {
    if ( form->accept_cs )
    {
      free( &form->accept_cs );
      form->accept_cs = 0;
    }
    if ( form->thisacceptcs )
    {
      free( &form->thisacceptcs );
      form->thisacceptcs = 0;
    }
    if ( form == 0 )
    {
      return;
    }
    free( form );
    form = 0;
  }
  return;
}
void free_form_fields( FormInfo *input_field )
{
  if ( input_field->type == 7 && input_field->select_list )
  {
    OptionType *optptr = &input_field->select_list;
    OptionType *tmp;
    while ( optptr )
    {
      tmp = optptr;
      optptr = &tmp->next;
      if ( tmp->name[0] )
      {
        free( &tmp->name[0] );
        *(int*)&tmp->name[0] = 0;
      }
      if ( tmp->cp_submit_value )
      {
        free( &tmp->cp_submit_value );
        *(int*)&tmp->cp_submit_value = 0;
      }
      if ( tmp )
      {
        free( tmp );
        tmp = 0;
      }
    }
    *(int*)&input_field->select_list = 0;
    *(int*)&input_field->value = 0;
    *(int*)&input_field->orig_value = 0;
    *(int*)&input_field->cp_submit_value = 0;
    *(int*)&input_field->orig_submit_value = 0;
  }
  else
  {
    if ( input_field->value )
    {
      free( &input_field->value );
      *(int*)&input_field->value = 0;
    }
    if ( input_field->orig_value )
    {
      free( &input_field->orig_value );
      *(int*)&input_field->orig_value = 0;
    }
    if ( input_field->cp_submit_value )
    {
      free( &input_field->cp_submit_value );
      *(int*)&input_field->cp_submit_value = 0;
    }
    if ( input_field->orig_submit_value )
    {
      free( &input_field->orig_submit_value );
      *(int*)&input_field->orig_submit_value = 0;
    }
  }
  if ( input_field->name[0] )
  {
    free( &input_field->name[0] );
    *(int*)&input_field->name[0] = 0;
  }
  if ( input_field->submit_action )
  {
    free( &input_field->submit_action );
    *(int*)&input_field->submit_action = 0;
  }
  if ( input_field->submit_enctype )
  {
    free( &input_field->submit_enctype );
    *(int*)&input_field->submit_enctype = 0;
  }
  if ( input_field->submit_title )
  {
    free( &input_field->submit_title );
    *(int*)&input_field->submit_title = 0;
  }
  if ( input_field->accept_cs )
  {
    free( &input_field->accept_cs );
    *(int*)&input_field->accept_cs = 0;
  }
  return;
}
void FormList_delete( HTList *forms )
{
  HTList *cur = forms;
  PerFormInfo *form;
  while ( 1 )
  {
    if ( cur )
    {
      cur = &cur->next;
      form = 0;
      if ( form == 0 )
      {
        HTList_delete( forms );
        return;
      }
      PerFormInfo_free( form );
    }
    form = 0;
  }
}
void ResetPartialLinenos( HText *text )
{
  if ( text )
  {
    text->first_lineno_last_disp_partial = -1;
    text->last_lineno_last_disp_partial = -1;
  }
  return;
}
HText *HText_new( HTParentAnchor *anchor )
{
  HTLine *line = 0;
  HText *self = calloc( 1, sizeof( HText ) );
  if ( self == 0 )
  {
    return self;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "GridText: start HText_new\n" );
  }
  if ( HTMainText )
  {
    if ( ( HText_hasUTF8OutputSet( HTMainText ) & 255 ) && ( HTLoadedDocumentEightbit( ) & 255 ) && LYCharSet_UC[ current_char_set ].enc == 7 )
      self->had_utf8 = HTMainText->has_utf8;
    else
      self->had_utf8 = HTMainText->has_utf8;
    HTMainText->has_utf8 = 0;
  }
  if ( loaded_texts == 0 )
  {
    loaded_texts = HTList_new( );
  }
  if ( anchor->document )
  {
    HTList_removeObject( loaded_texts, &anchor->document );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "GridText: Auto-uncaching\n" );
    }
    HTAnchor_delete_links( anchor );
    anchor->document = 0;
    HText_free( &anchor->document );
    anchor->document = 0;
  }
  HTList_addObject( loaded_texts, (void*)self );
  if ( HTCacheSize < HTList_count( loaded_texts ) )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "GridText: Freeing off cached doc.\n" );
    }
    HText_free( (HText*)HTList_removeFirstObject( loaded_texts ) );
  }
  self->pool = POOL_NEW( );
  if ( self->pool == 0 )
    outofmem( "./GridText.c", "HText_New" );
  self->last_line = self->temp_line;
  line->next = line->prev = line = &self->last_line;
  line->offset = line->size = 0;
  line->data[ line->size ] = 0;
  line->numstyles = 0;
  line->styles = stylechanges_buffers;
  self->Lines = 0;
  self->first_anchor = self->last_anchor = 0;
  self->last_anchor_before_split = 0;
  self->style = default_style;
  self->top_of_screen = 0;
  self->node_anchor->parent->parent = anchor;
  self->last_anchor_number = 0;
  self->stale = 1;
  self->toolbar = 0;
  self->tabs = 0;
  self->clickable_images = clickable_images;
  self->pseudo_inline_alts = pseudo_inline_alts;
  self->verbose_img = verbose_img;
  self->raw_mode = LYUseDefaultRawMode;
  self->historical_comments = historical_comments;
  self->minimal_comments = minimal_comments;
  self->soft_dquotes = soft_dquotes;
  self->old_dtd = Old_DTD;
  self->keypad_mode = keypad_mode;
  self->disp_lines = LYlines;
  self->disp_cols = LYwideLines ? 1014 : (unsigned short)( LYcols );
  if ( anchor->bookmark || ( LYIsUIPage3( &anchor->address, 4, 0 ) & 255 ) || ( LYIsUIPage3( &anchor->address, 11, 0 ) & 255 ) )
    self->hiddenlinkflag = 0;
  else
    self->hiddenlinkflag = LYHiddenLinks;
  self->hidden_links = 0;
  self->no_cache = 0;
  self->LastChar = 0;
  self->IgnoreExcess = 0;
  self->source = WWW_SOURCE == HTOutputFormat;
  mark_htext_as_source = 0;
  HTAnchor_setDocument( anchor, (int)( &self->node_anchor->parent->parent ) );
  HTFormNumber = 0;
  HTMainText = self;
  HTMainAnchor = anchor;
  self->display_on_the_fly = 0;
  self->kcode = 0;
  self->specified_kcode = 0;
  self->detected_kcode = 2;
  self->SJIS_status = 0;
  self->EUC_status = 0;
  self->state = 0;
  self->kanji_buf = 0;
  self->in_sjis = 0;
  self->have_8bit_chars = 0;
  HText_getChartransInfo( self );
  UCSetTransParams( &self->T, self->UCLYhndl, &self->UCI, current_char_set, &LYCharSet_UC[ current_char_set ] );
  HText_setKcode( self, &anchor->charset, HTAnchor_getUCInfoStage( anchor, 3 ) );
  if ( underscore_string[0] != '.' )
  {
    memset( underscore_string, 46, 1023 );
    underscore_string[1023] = 0;
    underscore_string[1024] = 0;
    memset( star_string, 95, 1023 );
    star_string[1023] = 0;
    star_string[1024] = 0;
  }
  underline_on = 0;
  bold_on = 0;
  if ( display_partial_flag )
  {
    display_partial = 1;
    NumOfLines_partial = 0;
  }
  ResetPartialLinenos( self );
  ht_justify_cleanup( );
  return self;
}
HText *HText_new2( HTParentAnchor *anchor, HTStream *stream )
{
  HText *result = HText_new( anchor );
  if ( stream )
  {
    result->target = stream;
    result->targetClass = stream[0];
    result->targetClass._free = stream[0]._HTStream;
    result->targetClass._abort = stream[0]._HTStream;
    result->targetClass.put_character = stream[0]._HTStream;
    result->targetClass.put_string = stream[0]._HTStream;
    result->targetClass.put_block = stream[0]._HTStream;
  }
  return result;
}
void HText_free( HText *self )
{
  if ( self )
  {
    while ( self->first_anchor )
    {
      TextAnchor *l = &self->first_anchor;
      self->first_anchor = l->next;
      if ( l->link_type == 2 && l->input_field )
        free_form_fields( &l->input_field );
      if ( l->lites.hl_info )
      {
        free( &l->lites.hl_info );
        *(int*)(ebp_4 + 32) = 0;
      }
    }
    FormList_delete( &self->forms );
    if ( self->tabs )
    {
      HTTabID *Tab = 0;
      HTList *cur = &self->tabs;
      while ( 1 )
      {
        if ( cur )
        {
          cur = &cur->next;
          Tab = 0;
          if ( Tab )
          {
            if ( Tab->name[0] )
            {
              free( &Tab->name[0] );
              *(int*)&Tab->name[0] = 0;
            }
            if ( Tab )
            {
              free( Tab );
              Tab = 0;
            }
          }
          else
          {
            HTList_delete( &self->tabs );
            self->tabs = 0;
          }
        }
        Tab = 0;
      }
    }
    if ( self->hidden_links )
    {
      LYFreeStringList( &self->hidden_links );
      self->hidden_links = 0;
    }
    if ( self->node_anchor->parent->parent )
    {
      HTAnchor_resetUCInfoStage( &self->node_anchor->parent->parent, -1, 2, 0 );
      HTAnchor_resetUCInfoStage( &self->node_anchor->parent->parent, -1, 3, 0 );
      HTAnchor_clearSourceCache( &self->node_anchor->parent->parent );
      HTAnchor_delete_links( &self->node_anchor->parent->parent );
      HTAnchor_setDocument( &self->node_anchor->parent->parent, 0 );
      if ( HTAnchor_delete( self->node_anchor[0].parent ) & 255 )
        HTMainAnchor = 0;
    }
    POOL_FREE( &self->pool );
    if ( self == 0 )
    {
      return;
    }
    free( self );
    self = 0;
  }
  return;
}
int display_line( HTLine *line, HText *text, int scrline, char *target )
{
  int i, j;
  char buffer[7];
  char *data;
  size_t utf_extra = 0;
  char LastDisplayChar = ' ';
  int current_style = 0;
  LYmove( scrline, 0 );
  buffer[0] = buffer[1] = buffer[2] = 0;
  LYclrtoeol( );
  j = line->offset;
  if ( ( LYwideLines ? 1014 : LYcols ) <= j )
  {
    j = LYwideLines ? 1013 : LYcols + -1;
  }
  if ( ( line->size & 65535 ) == 0 )
    i = j;
  else
  {
    i = 0;
    for ( ; i < j; i++ )
    {
      waddch( LYwin, 32 );
      // i++;
    }
  }
  data = &line->data[0];
  i++;
  while ( ( LYwideLines ? 1014 : LYcols ) < i )
  {
    buffer[0] = data[0];
    if ( buffer[0] )
    {
      data++;
      for ( ; current_style < line->numstyles && line->offset + ( line->styles[ current_style ].bits_at_0/*.1_2of4*/ >> 2 ) + 1 <= i; current_style++ )
      {
        curses_style( line->styles[ current_style ].bits_at_0/*.3_4of4*/, __MOD(line->styles[ current_style ].bits_at_0/*.1_1of4*/,4) );
        // current_style++;
      }
      if ( buffer[0] == 7 )
      {
        if ( !data[0] && !( *(short*)(*(int*)(__ctype_b_loc( )) + ( LastDisplayChar * 2 )) & 8192 ) && LastDisplayChar != '-' )
          buffer[0] = '-';
      }
      else
      if ( buffer[0] == 8 )
      {
        if ( dump_output_immediately )
          continue;
        else
        {
          waddch( LYwin, 43 );
          i++;
        }
      }
      if ( text->T.output_utf8 && buffer[0] < 0 )
      {
        text->has_utf8 = 1;
        utf_extra = utf8_length( text->T.output_utf8, &data[ -1 ] );
        LastDisplayChar = 'M';
      }
      if ( utf_extra )
      {
        strncpy( &buffer[1], data, utf_extra );
        buffer[ utf_extra + 1 ] = 0;
        LYwaddnstr( LYwin, buffer, strlen( buffer ) );
        buffer[1] = 0;
        data = &data[ utf_extra ];
        utf_extra = 0;
      }
      else
      if ( HTCJK && buffer[0] < 0 )
      {
        if ( i <= ( LYwideLines ? 1014 : LYcols ) )
        {
          buffer[1] = data[0];
          buffer[2] = 0;
          data++;
          i++;
          LYwaddnstr( LYwin, buffer, strlen( buffer ) );
          buffer[1] = 0;
          LastDisplayChar = 'M';
        {
          int y = -1, x = -1;
          if ( ( LYwideLines ? 1014 : LYcols ) <= x || x == 0 )
            continue;
        }
        }
      }
      else
      {
        LYwaddnstr( LYwin, buffer, strlen( buffer ) );
        LastDisplayChar = buffer[0];
      }
      i++;
    }
    else
      break;
  }
  waddch( LYwin, 10 );
  for ( ; current_style < line->numstyles; current_style++ )
  {
    curses_style( line->styles[ current_style ].bits_at_0/*.3_4of4*/, __MOD(line->styles[ current_style ].bits_at_0/*.1_1of4*/,4) );
    // current_style++;
  }
  return 0;
}
void display_title( HText *text )
{
  char *title = 0;
  char percent[20];
  unsigned char *tmp = 0;
  int i = 0, j = 0, toolbar = 0;
  int limit;
  if ( text )
  {
    lynx_start_title_color( );
    if ( last_colorattr_ptr > 0 )
      curses_style( s_title, 1 );
    else
      curses_style( s_title, 2 );
    HTSACopy( &title, " " );
    LYReduceBlanks( title );
    limit = LYscreenWidth( );
    if ( limit <= 9 )
      percent[0] = 0;
    else
    if ( display_lines <= 0 && LYlines > 0 && text->top_of_screen <= 0x1869f && text->Lines <= 0xf423f )
      sprintf( percent, " (l%d of %d)", text->top_of_screen, text->Lines );
    else
    if ( display_lines <= text->Lines && display_lines > 0 )
    {
      int total_pages = ( text->Lines + display_lines ) / display_lines;
      int start_of_last_page = 0;
      sprintf( percent, " (p%d of %d)", text->top_of_screen <= start_of_last_page ? ( text->top_of_screen + display_lines ) / display_lines : total_pages, total_pages );
    }
    else
      percent[0] = 0;
    if ( HTCJK && title[0] )
    {
      tmp = calloc( ( strlen( title ) + 128 ) * 2, sizeof( unsigned char ) );
      if ( tmp )
      {
        if ( kanji_code == EUC )
          TO_EUC( (unsigned char*)title, tmp );
        else
        if ( kanji_code == SJIS )
          TO_SJIS( (unsigned char*)title, tmp );
        else
        {
          i = 0;
          j = 0;
          for ( ; title[ i ] == 0; i++ )
          {
            if ( title[ i ] != 27 )
            {
              tmp[ j ] = title[ i ];
              j++;
            }
            // i++;
          }
        }
        HTSACopy( &title, (char*)tmp );
        if ( tmp )
        {
          free( tmp );
          tmp = 0;
        }
      }
    }
    LYmove( 0, 0 );
    LYclrtoeol( );
    if ( HText_hasToolbar( text ) & 255 )
    {
      waddch( LYwin, 35 );
      toolbar = 1;
    }
    if ( s_forw_backw != -1 && ( nhist || nhist_extra > 1 ) )
    {
      int c = 32;
      curses_style( s_forw_backw, 1 );
      if ( nhist )
      {
        waddch( LYwin, c );
        waddch( LYwin, c );
        waddch( LYwin, c );
      }
      else
        LYmove( 0, toolbar + 3 );
      if ( nhist_extra > 1 )
      {
        waddch( LYwin, *(int*)(135965644) );
        waddch( LYwin, *(int*)(135965644) );
        waddch( LYwin, *(int*)(135965644) );
      }
      curses_style( s_forw_backw, 0 );
    }
    i = limit - ( LYShowScrollbar != 0 ) - strlen( percent ) - LYstrCells( title );
    if ( i <= 0 )
    {
      i = ( limit - ( LYShowScrollbar != 0 ) - strlen( percent ) ) + -3;
      if ( i <= 0 )
        title[0] = 0;
      else
      {
        memcpy( title + LYstrExtent2( title, i ), "...", 4 );
      }
      i = 0;
    }
    LYmove( 0, i );
    LYwaddnstr( LYwin, title, strlen( title ) );
    if ( percent[0] )
    {
      LYwaddnstr( LYwin, percent, strlen( percent ) );
    }
    waddch( LYwin, 10 );
    if ( title )
    {
      free( title );
      title = 0;
    }
    if ( s_hot_paste != -1 )
    {
      LYmove( 0, LYcols - ( LYShowScrollbar != 0 ) );
      curses_style( s_hot_paste, 1 );
      waddch( LYwin, *(int*)(135965644) );
      curses_style( s_hot_paste, 0 );
      LYmove( 1, 0 );
    }
    curses_style( s_title, 0 );
    lynx_stop_title_color( );
  }
  return;
}
void display_scrollbar( HText *text )
{
  int eax;
  int i;
  int h = display_lines + 0;
  int off = LYsb_arrow != 0;
  int top_skip, bot_skip, sh, shown;
  LYsb_begin = LYsb_end = -1;
  if ( LYShowScrollbar && text && h > 2 && display_lines < text->Lines )
  {
    if ( text->Lines - display_lines <= text->top_of_screen )
    {
      shown = text->Lines - text->top_of_screen;
      if ( shown <= 0 )
        shown = 1;
    }
    else
      shown = display_lines;
    sh = ( ( shown * h ) + ( text->Lines / 2 ) ) / text->Lines;
    if ( sh <= 0 )
      sh = 1;
    if ( h + -1 <= sh )
      sh = h + -2;
    if ( text->top_of_screen == 0 )
      top_skip = 0;
    else
    if ( text->Lines + ( 1 - ( text->top_of_screen + display_lines ) ) <= 0 )
      top_skip = h - sh;
    else
      top_skip = (int)( ( ( (double)( ( h - sh ) + -1 ) * (double)( ( h - sh ) + -1 ) ) / (double)( ( text->Lines - display_lines ) + 1 ) ) + 1.000000000000 );
    bot_skip = h - sh - top_skip;
    LYsb_begin = top_skip;
    LYsb_end = h - bot_skip;
    if ( LYsb_arrow )
    {
      int s = s_sb_naa;
      if ( last_colorattr_ptr > 0 )
        curses_style( s, 1 );
      else
        curses_style( s, 2 );
      LYmove( 1, LYshiftWin + ( LYcols - ( LYShowScrollbar != 0 ) ) );
      waddch( LYwin, *(int*)(135965652) );
      curses_style( s, 0 );
    }
    if ( last_colorattr_ptr > 0 )
      curses_style( s_sb_bg, 1 );
    else
      curses_style( s_sb_bg, 2 );
    i = 1;
    for ( ; i <= h; i++ )
    {
      if ( i + -1 <= top_skip && top_skip < i )
        curses_style( s_sb_bar, 1 );
      if ( i + -1 <= h - bot_skip && h - bot_skip < i )
        curses_style( s_sb_bar, 0 );
      LYmove( off + i, LYshiftWin + ( LYcols - ( LYShowScrollbar != 0 ) ) );
      if ( top_skip < i && i <= h - bot_skip )
        waddch( LYwin, *(int*)(135965664) );
      else
        waddch( LYwin, *(int*)(135965860) );
      // i++;
    }
    curses_style( s_sb_bg, 0 );
    if ( LYsb_arrow == 0 )
    {
      return;
    }
  {
    int s = s_sb_naa;
    if ( last_colorattr_ptr > 0 )
      curses_style( s, 1 );
    else
      curses_style( s, 2 );
    LYmove( h + 2, LYshiftWin + ( LYcols - ( LYShowScrollbar != 0 ) ) );
    waddch( LYwin, *(int*)(135965656) );
    curses_style( s, 0 );
  }
  }
  return;
}
void display_page( HText *text, int line_number, char *target )
{
  static int last_nlinks;
  static int charset_last_displayed = -1;
  HTLine *line = 0;
  int i;
  int title_lines = 1;
  char *cp;
  char tmp[7];
  TextAnchor *Anchor_ptr = 0;
  int stop_before_for_anchors;
  FormInfo *FormInfo_ptr;
  BOOLEAN display_flag = 0;
  HTAnchor *link_dest;
  HTAnchor *link_dest_intl = 0;
  int last_disp_partial = -1;
  lynx_mode = 1;
  if ( text == 0 )
  {
    if ( enable_scrollback )
    {
      waddch( LYwin, 42 );
      LYrefresh( );
      LYclear( );
    }
    LYwaddnstr( LYwin, "\n\nError accessing document!\nNo data available!\n", 47 );
    LYrefresh( );
    nlinks = 0;
  }
  else
  {
    if ( display_partial || recent_sizechange || text->stale )
      ResetPartialLinenos( text );
    tmp[0] = tmp[1] = tmp[2] = 0;
    if ( target && target[0] == 0 )
      target = 0;
    text->page_has_target = 0;
    if ( display_lines <= 0 )
    {
      return;
    }
    line = &text->last_line->prev;
    line_number = HText_getPreferredTopLine( text, line_number );
    i = 0;
    line = &text->last_line->next;
    for ( ; i < line_number && text->last_line != line;  )
    {
      if ( LYNoCore == 0 )
      {
        if ( line->next == 0 )
        {
          __assert_fail( "line-&gt;next != ((void *)0)", "./GridText.c", 2016, __PRETTY_FUNCTION__ );
        }
      }
      else
      if ( line->next == 0 )
      {
        if ( enable_scrollback )
        {
          waddch( LYwin, 42 );
          LYrefresh( );
          LYclear( );
        }
        LYwaddnstr( LYwin, "\n\nError drawing page!\nBad HText structure!\n", 43 );
        LYrefresh( );
        nlinks = 0;
        break;
      }
      i++;
      line = &line->next;
    }
    if ( LYlowest_eightbit[ current_char_set ] <= 255 && current_char_set != charset_last_displayed && LYCursesON )
      charset_last_displayed = current_char_set;
    if ( enable_scrollback )
    {
      waddch( LYwin, 42 );
      LYrefresh( );
      LYclear( );
    }
    if ( text->stale || text->top_of_screen != line_number )
      last_colorattr_ptr = 0;
    text->top_of_screen = line_number;
    text->top_of_screen_line = line;
    if ( no_title )
    {
      LYmove( 0, 0 );
      title_lines = 0;
    }
    else
      display_title( text );
    display_flag = 1;
    if ( display_partial || text->first_lineno_last_disp_partial != line_number || text->last_lineno_last_disp_partial < line_number )
      ResetCachedStyles( );
    if ( display_partial && text->stbl )
    {
      stop_before_for_anchors = Stbl_getStartLineDeep( &text->stbl );
      if ( line_number + display_lines < stop_before_for_anchors )
        stop_before_for_anchors = line_number + display_lines;
    }
    else
      stop_before_for_anchors = line_number + display_lines;
    if ( line )
    {
      char *data;
      int offset, LenNeeded;
      if ( display_partial || text->first_lineno_last_disp_partial != line_number )
        text->has_utf8 = 0;
      i = 0;
      for ( ; i < display_lines; i++ )
      {
        if ( LYNoCore == 0 )
        {
          if ( line == 0 )
          {
            __assert_fail( "line != ((void *)0)", "./GridText.c", 2120, __PRETTY_FUNCTION__ );
          }
        }
        else
        if ( line == 0 )
        {
          if ( enable_scrollback )
          {
            waddch( LYwin, 42 );
            LYrefresh( );
            LYclear( );
          }
          LYwaddnstr( LYwin, "\n\nError drawing page!\nBad HText structure!\n", 43 );
          LYrefresh( );
          nlinks = 0;
          break;
        }
        if ( display_partial == 0 && text->first_lineno_last_disp_partial == line_number && line_number + i <= text->last_lineno_last_disp_partial )
          LYmove( title_lines + i + 1, 0 );
        else
          display_line( line, text, i + 1, target );
        data = &line->data[0];
        offset = line->offset;
        while ( target && target[0] )
        {
          cp = case_sensitive ? LYno_attr_mbcs_strstr( data, target, text->T.output_utf8, 1, 0, &LenNeeded ) : LYno_attr_mbcs_case_strstr( data, target, text->T.output_utf8, 1, 0, &LenNeeded );
          if ( cp && LenNeeded + line->offset <= ( LYwideLines ? 1014 : LYcols ) )
          {
            int itmp = 0;
            int written = 0;
            int x_pos = offset + ( cp - data );
            int len = strlen( target );
            size_t utf_extra = 0;
            int y;
            text->page_has_target = 1;
            LYstartTargetEmphasis( );
            for ( ; written < len; itmp++ )
            {
              tmp[0] = data[ itmp ];
              if ( tmp[0] )
              {
                if ( 2 < tmp[0] && tmp[0] <= 8 && tmp[0] != 8 )
                  x_pos += -1;
                else
                if ( cp <= data[ itmp ] )
                {
                  if ( data[ itmp ] == cp )
                    LYmove( title_lines + i, x_pos );
                  utf_extra = utf8_length( text->T.output_utf8, &data[ itmp ] );
                  if ( utf_extra )
                  {
                    strncpy( &tmp[1], &line->__pad[ itmp ], utf_extra );
                    tmp[ utf_extra + 1 ] = 0;
                    itmp += (int)utf_extra;
                    LYwaddnstr( LYwin, tmp, strlen( tmp ) );
                    tmp[1] = 0;
                    written = written + utf_extra + 1;
                    utf_extra = 0;
                  }
                  else
                  {
                    if ( HTCJK && tmp[0] < 0 )
                    {
                      itmp++;
                      tmp[1] = data[ itmp ];
                      LYwaddnstr( LYwin, tmp, strlen( tmp ) );
                      tmp[1] = 0;
                      written += 2;
                    }
                    else
                    {
                      LYwaddnstr( LYwin, tmp, strlen( tmp ) );
                      written++;
                    }
                  }
                }
                // itmp++;
              }
              else
                break;
            }
            LYstopTargetEmphasis( );
            y = -1;
            offset = -1;
            data = &data[ itmp ];
            LYmove( title_lines + i + 1, 0 );
          }
        }
        if ( text->last_line == line )
        {
          i++;
          for ( ; i < display_lines; i++ )
          {
            LYmove( title_lines + i, 0 );
            LYclrtoeol( );
            // i++;
          }
          break;
        }
        else
        {
          if ( display_partial )
            last_disp_partial = line_number + i;
          display_flag = 1;
          line = &line->next;
          // i++;
        }
      }
    }
    text->next_line = line;
    text->stale = 0;
    nlinks = 0;
    Anchor_ptr = &text->first_anchor;
    for ( ; Anchor_ptr && Anchor_ptr->line_num <= stop_before_for_anchors;  )
    {
      if ( line_number <= Anchor_ptr->line_num && Anchor_ptr->line_num < stop_before_for_anchors )
      {
        char *hi_string = LYGetHiTextStr( Anchor_ptr, 0 );
        if ( Anchor_ptr->show_anchor && hi_string && hi_string[0] && ( ( ( Anchor_ptr->link_type & 1 ) ^ 1 ) & 255 ) == 0 )
        {
          int count = 0;
          char *s;
          while ( count == 0 )
          {
            if ( s )
            {
              if ( count )
              {
                LYAddHilite( nlinks, s, LYGetHiTextPos( Anchor_ptr, count ) );
              }
              count++;
            }
            else
            {
              links[ nlinks ].inUnderline = Anchor_ptr->inUnderline;
              links[ nlinks ].sgml_offset = Anchor_ptr->sgml_offset;
              links[ nlinks ].anchor_number = Anchor_ptr->number;
              links[ nlinks ].anchor_line_num = Anchor_ptr->line_num;
              link_dest = HTAnchor_followLink( &Anchor_ptr->anchor );
            {
              char *cp_AnchorAddress = 0;
              if ( traversal )
              {
                cp_AnchorAddress = stub_HTAnchor_address( link_dest );
              }
              else
              {
                cp_AnchorAddress = HTAnchor_address( link_dest );
              }
              if ( links[ nlinks ].lname )
              {
                free( links[ nlinks ].lname );
                links[ nlinks ].lname = 0;
              }
              if ( cp_AnchorAddress )
                links[ nlinks ].lname = cp_AnchorAddress;
              else
                HTSACopy( &links[ nlinks ].lname, empty_string );
              links[ nlinks ].lx = Anchor_ptr->line_pos;
              links[ nlinks ].ly = ( Anchor_ptr->line_num + 1 ) - line_number;
              if ( link_dest_intl )
                links[ nlinks ].type = 6;
              else
                links[ nlinks ].type = 2;
              links[ nlinks ].target = empty_string;
              links[ nlinks ].l_form = 0;
              nlinks++;
              display_flag = 1;
            }
            }
          }
          LYSetHilite( nlinks, s );
        }
        else
        {
          if ( Anchor_ptr->link_type == 2 && Anchor_ptr->input_field->type != 8 )
          {
            lynx_mode = 2;
            FormInfo_ptr = &Anchor_ptr->input_field;
            links[ nlinks ].sgml_offset = Anchor_ptr->sgml_offset;
            links[ nlinks ].anchor_number = Anchor_ptr->number;
            links[ nlinks ].anchor_line_num = Anchor_ptr->line_num;
            links[ nlinks ].l_form = FormInfo_ptr;
            links[ nlinks ].lx = Anchor_ptr->line_pos;
            links[ nlinks ].ly = ( Anchor_ptr->line_num + 1 ) - line_number;
            links[ nlinks ].type = 1;
            links[ nlinks ].inUnderline = Anchor_ptr->inUnderline;
            links[ nlinks ].target = empty_string;
            HTSACopy( &links[ nlinks ].lname, empty_string );
            if ( FormInfo_ptr->type == 4 )
            {
              LYSetHilite( nlinks, unchecked_radio );
            }
            else
            if ( FormInfo_ptr->type == 3 )
            {
              LYSetHilite( nlinks, unchecked_box );
            }
            else
            if ( FormInfo_ptr->type == 2 )
            {
              LYSetHilite( nlinks, LYstrCells( &FormInfo_ptr->value ) <= 1023 ? &star_string[ 1023 - LYstrCells( &FormInfo_ptr->value ) ] : star_string );
            }
            else
              LYSetHilite( nlinks, &FormInfo_ptr->value );
            nlinks++;
            LYhighlight( 0, nlinks + -1, target );
            display_flag = 1;
          }
          else
          {
            if ( hi_string && hi_string[0] && WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "\nGridText: Not showing link, hightext=%s\n", hi_string );
            }
          }
        }
      }
      if ( nlinks == 1024 )
      {
        if ( LYCursesON )
        {
          HTAlert( gettext( "Maximum links per page exceeded!  Use half-page or two-line scrolling." ) );
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "\ndisplay_page: MAXLINKS reached.\n" );
          break;
        }
        else
          break;
      }
      else
      {
        Anchor_ptr = &Anchor_ptr->next;
      }
    }
    LYFreeHilites( nlinks, last_nlinks );
    last_nlinks = nlinks;
    more_links = 0;
    if ( traversal && Anchor_ptr && Anchor_ptr->next )
      more_links = 1;
    if ( display_flag == 0 )
      LYwaddnstr( LYwin, "\n     Document is empty", 23 );
    display_scrollbar( text );
    if ( display_partial && display_flag && text->top_of_screen <= last_disp_partial && enable_scrollback == 0 && recent_sizechange == 0 )
    {
      text->first_lineno_last_disp_partial = text->top_of_screen;
      text->last_lineno_last_disp_partial = last_disp_partial;
    }
    else
      ResetPartialLinenos( text );
    LYrefresh( );
  }
  return;
}
void HText_beginAppend( HText *text )
{
  text->permissible_split = 0;
  text->in_line_1 = 1;
  return;
}
int set_style_by_embedded_chars( char *s, char *e, unsigned char start_c, unsigned char end_c )
{
  int ret = 0;
  do
  {
    e = &e[ -1 ];
    if ( e < s || e[0] == end_c )
      break;
  }
  while ( start_c != e[0] );
  ret = 1;
  return ret;
}
void move_anchors_in_region( HTLine *line, int line_number, TextAnchor **prev_anchor, int *prev_head_processed, int sbyte, int ebyte, int shift )
{
  TextAnchor *a;
  int head_processed = prev_head_processed;
  a = prev_anchor;
  for ( ; a && a->line_num <= line_number;  )
  {
    int last = a->line_pos + 0;
    if ( line_number + -1 <= a->line_num )
    {
      if ( a->line_num == line_number + -1 )
        last += ~line->prev;
      if ( sbyte <= last )
      {
        if ( head_processed || a->line_num != line_number || a->line_pos < ebyte )
        {
          if ( head_processed == 0 && a->line_num == line_number && sbyte <= a->line_pos )
          {
            a->line_pos = shift + a->line_pos;
            a->extent -= (unsigned short)( shift );
            head_processed = 1;
          }
          if ( last < ebyte )
            a->extent = shift + a->extent;
          else
            break;
        }
        else
          break;
      }
    }
    a = &a->next;
    head_processed = 0;
  }
  prev_anchor = a;
  prev_head_processed = head_processed;
  return;
}
HTLine *insert_blanks_in_line( HTLine *line, int line_number, HText *text, TextAnchor **prev_anchor, int ninserts, int *oldpos, int *newpos )
{
  int ioldc = 0;
  int ip;
  int istyle = 0;
  int added_chars = 0;
  int shift = 0;
  int head_processed;
  HTLine *mod_line;
  char *newdata;
  char *s = &line->data[0];
  char *pre = s;
  char *copied = &line->data[0], *t;
  if ( line == 0 || ( line->size & 65535 ) == 0 || ninserts == 0 )
  {
    return 0;
  }
  ip = 0;
  for ( ; ip < ninserts; ip++ )
  {
    if ( oldpos[ ip ] < newpos[ ip ] && added_chars < newpos[ ip ] - oldpos[ ip ] )
      added_chars = newpos[ ip ] - oldpos[ ip ];
    // ip++;
  }
  if ( added_chars + line->size > 1022 )
  {
    return 0;
  }
  if ( text->last_line == line )
  {
    if ( text->temp_line->base.next == line )
      mod_line = &text->temp_line[1].base;
    else
      mod_line = &text->temp_line->base;
  }
  else
  {
    mod_line = (HTLine*)ALLOC_IN_POOL( &HTMainText->pool, added_chars + line->size + 20 );
  }
  if ( mod_line == 0 )
  {
    return 0;
  }
  if ( prev_anchor[0] == 0 )
    prev_anchor[0] = &text->first_anchor;
  head_processed = 0;
  memcpy( mod_line, line, 20 );
  t = newdata = &mod_line->data[0];
  ip = 0;
  for ( ; ip <= ninserts;  )
  {
    int curlim = ip < ninserts ? oldpos[ ip ] : 1025;
    pre = s;
    for ( ; s[0]; s++ )
    {
      if ( text && text->T.output_utf8 && s[0] < 0 && -65 <= s[0] )
        pre = &s[1];
      else
      if ( s[0] <= 2 || 8 < s[0] )
      {
        if ( ioldc < curlim )
        {
          ioldc++;
          pre = &s[1];
        }
        else
          break;
      }
      // s++;
    }
    if ( ip )
    {
      move_anchors_in_region( line, line_number, prev_anchor, &head_processed, copied - line->data[0], pre - line->data[0], shift );
    }
    while ( istyle < line->numstyles && ( mod_line->styles[ istyle ].bits_at_0/*.1_2of4*/ >> 2 ) < curlim )
    {
      mod_line->styles[ istyle ] = ( __MOD(mod_line->styles[ istyle ].bits_at_0/*.1_2of4*/,4) ) | ( ( (unsigned short)( shift + ( mod_line->styles[ istyle ].bits_at_0/*.1_2of4*/ >> 2 ) ) & 16383 ) << 2 );
      istyle++;
    }
    for ( ; copied < pre; copied++ )
    {
      t[0] = copied[0];
      t++;
      // copied++;
    }
    if ( ip < ninserts )
    {
      int delta = newpos[ ip ] - oldpos[ ip ] - shift;
      if ( delta < 0 )
      {
        while ( delta++, !( ( ( delta >> 31 ) ^ 1 ) & 255 ) && newdata < t && t[ -1 ] == ' ' )
        {
          t = &t[ -1 ];
          shift += -1;
        }
        while ( delta += -1, ( delta > 0 ) & 255 )
        {
          t[0] = ' ';
          t++;
        }
      }
      else
      {
        shift = newpos[ ip ] - oldpos[ ip ];
      }
    }
    ip++;
  }
  for ( ; pre < s; pre++ )
  {
    t[0] = pre[0];
    t++;
    // pre++;
  }
  if ( head_processed && prev_anchor[0] && prev_anchor[0]->line_num == line_number )
    prev_anchor[0]->extent = shift + prev_anchor[0]->extent;
  t[0] = 0;
  mod_line->size = (unsigned short)( t ) - (unsigned short)( newdata );
  return mod_line;
}
HTStyleChange *skip_matched_and_correct_offsets( HTStyleChange *end, HTStyleChange *start, unsigned int split_pos )
{
  int level = 0;
  HTStyleChange *tmp = end;
  for ( ; start <= tmp;  )
  {
    if ( tmp->bits_at_0/*.3_4of4*/ == end->bits_at_0/*.3_4of4*/ )
    {
      if ( ( ( __MOD(tmp->bits_at_0/*.1_1of4*/,4) ) & 255 ) == 0 )
        level += -1;
      else
      if ( (unsigned char)( __MOD(tmp->bits_at_0/*.1_1of4*/,4) ) == 1 )
      {
        level++;
        if ( level == 0 )
        {
          return tmp;
        }
      }
      else
      {
        return 0;
      }
    }
    if ( split_pos < ( tmp->bits_at_0/*.1_2of4*/ >> 2 ) )
      tmp->bits_at_0/*.1_2of4*/ = ( __MOD(tmp->bits_at_0/*.1_2of4*/,4) ) | ( ( (unsigned short)( split_pos ) & 16383 ) << 2 );
    tmp += -193;
  }
  return 0;
}
void split_line( HText *text, unsigned int split )
{
  HTStyle *style = &text->style;
  int spare;
  int indent = text->style->leftIndent;
  int new_offset;
  short alignment;
  TextAnchor *a;
  int CurLine = text->Lines;
  int HeadTrim = 0;
  int SpecialAttrChars = 0;
  int TailTrim = 0;
  int s, s_post, s_pre, t_underline = underline_on, t_bold = bold_on;
  char *p;
  char *cp;
  int ctrl_chars_on_previous_line = 0;
  HTLine *previous = &text->last_line;
  HTLine *line;
  if ( text->temp_line->base.next == previous )
    line = &text->temp_line[1].base;
  else
    line = &text->temp_line->base;
  if ( line )
  {
    memset( line, 0, 20 );
    ctrl_chars_on_this_line = 0;
    utfxtra_on_this_line = 0;
    text->LastChar = 32;
    cp = &previous->data[0];
    if ( cp[0] == 5 || cp[0] == 3 )
    {
      switch ( cp[1] )
      {
      case 8:
        cp[0] = 8;
        break;
      case 3:
      case 5:
        if ( cp[2] == 8 )
        {
          cp[2] = cp[1];
          cp[0] = 8;
        }
        break;
      }
    }
    if ( previous->size < split )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "*** split_line: split==%u greater than last_line-&gt;size==%d !\n", split, previous->size );
      }
      if ( split > 1024 )
      {
        split = previous->size;
        cp = strrchr( &previous->data[0], ' ' );
        if ( cp && cp - previous->data[0] > 1 )
          split = cp - previous->data[0];
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "                split adjusted to %u.\n", split );
        }
      }
    }
    text->Lines++;
    previous->prev = line;
    line->prev = previous;
    line->next = previous->next;
    previous->next = line;
    text->last_line = line;
    line->size = 0;
    line->offset = 0;
    text->permissible_split = 0;
    line->data[0] = 0;
    alignment = style->alignment;
    if ( split )
    {
      if ( dump_output_immediately == 0 || use_underscore == 0 )
      {
        t_underline = set_style_by_embedded_chars( &previous->data[0], &previous->data[ split ], 3, 4 );
      }
      t_bold = set_style_by_embedded_chars( &previous->data[0], &previous->data[ split ], 5, 6 );
    }
    if ( ( !dump_output_immediately || !use_underscore ) && t_underline )
    {
      line->data[ line->size ] = 3;
      line->size = line->size + 1;
      line->data[ line->size ] = 0;
      ctrl_chars_on_this_line++;
      SpecialAttrChars++;
    }
    if ( t_bold )
    {
      line->data[ line->size ] = 5;
      line->size = line->size + 1;
      line->data[ line->size ] = 0;
      ctrl_chars_on_this_line++;
      SpecialAttrChars++;
    }
    if ( split )
    {
      char *prevdata = &previous->data[0], *linedata = &line->data[0];
      unsigned int plen;
      int i;
      prevdata[ previous->size ] = 0;
      previous->size = split;
      p = &prevdata[ split ];
      for ( ; ( ( p[0] == ' ' || p[0] == 1 ) && ( HeadTrim || text->first_anchor || underline_on || bold_on || alignment != 1 || style->wordWrap || style->freeFormat || style->spaceBefore || style->spaceAfter ) ) || p[0] == 7; HeadTrim++ )
      {
        p++;
        // HeadTrim++;
      }
      plen = strlen( p );
      if ( plen )
      {
        i = plen + -1;
        for ( ; i >= 0;  )
        {
          if ( p[ i ] == 3 || p[ i ] == 4 || p[ i ] == 5 || p[ i ] == 6 || p[ i ] == 7 )
            ctrl_chars_on_this_line++;
          else
          if ( text->T.output_utf8 && ( p[ i ] & 192 ) == 128 )
            utfxtra_on_this_line++;
          if ( p[ i ] == 7 && text->permissible_split < i )
            text->permissible_split = i + 1;
          i += -1;
        }
        ctrl_chars_on_this_line += utfxtra_on_this_line;
        strcat( linedata, p );
        line->size = plen + line->size;
      }
    }
    p = previous + previous->size + -1 + 18;
    for ( ; previous->data[0] <= p && ( p[0] == ' ' || p[0] == 1 ) && !psrc_view && ( ctrl_chars_on_this_line || HeadTrim || text->first_anchor || underline_on || bold_on || alignment != 1 || style->wordWrap || style->freeFormat || style->spaceBefore || style->spaceAfter );  )
    {
      p = &p[ -1 ];
    }
    TailTrim = ( previous + previous->size + -1 + 18 ) - p;
    previous->size -= (unsigned short)( TailTrim );
    p[1] = 0;
    if ( split == 0 )
      s = TailTrim + previous->size;
    else
      s = split;
    s_post = s + HeadTrim;
    s_pre = s - TailTrim;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "GridText: split_line(%u [now:%d]) called\n", split, s );
    }
    if ( previous->styles == stylechanges_buffers[0][0].bits_at_0 )
      line->styles = stylechanges_buffers[1];
    else
      line->styles = stylechanges_buffers;
    line->numstyles = 0;
  {
    HTStyleChange *from = previous->styles + ( ( previous->numstyles + -1 ) << 2 );
    HTStyleChange *to = line->styles + 252;
    HTStyleChange *scan, *at_end;
    for ( ; previous->styles <= from && line->styles <= to;  )
    {
      to->bits_at_0 = from->bits_at_0;
      if ( s_post < ( to->bits_at_0/*.1_2of4*/ >> 2 ) )
        to->bits_at_0/*.1_2of4*/ = ( __MOD(to->bits_at_0/*.1_2of4*/,4) ) | ( ( (unsigned short)( ( (unsigned short)( SpecialAttrChars ) - (unsigned short)( s_post ) ) + ( to->bits_at_0/*.1_2of4*/ >> 2 ) ) & 16383 ) << 2 );
      else
      if ( s_pre < ( to->bits_at_0/*.1_2of4*/ >> 2 ) && ( (unsigned char)( __MOD(to->bits_at_0/*.1_1of4*/,4) ) == 1 || (unsigned char)( __MOD(to->bits_at_0/*.1_1of4*/,4) ) == 2 ) )
      {
        to->bits_at_0/*.1_2of4*/ = ( __MOD(to->bits_at_0/*.1_2of4*/,4) ) | ( 0 << 2 );
      }
      else
        break;
      to += -193;
      from += -193;
    }
    scan = from;
    at_end = from;
    for ( ; previous->styles <= scan && previous->styles <= at_end;  )
    {
      if ( ( ( __MOD(scan->bits_at_0/*.1_1of4*/,4) ) & 255 ) == 0 )
      {
        scan = skip_matched_and_correct_offsets( scan, &previous->styles, s_pre );
        if ( scan == 0 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "BUG: styles improperly nested.\n" );
            break;
          }
          else
            break;
        }
      }
      else
      if ( (unsigned char)( __MOD(scan->bits_at_0/*.1_1of4*/,4) ) == 1 )
      {
        if ( (unsigned char)( __MOD(at_end->bits_at_0/*.1_1of4*/,4) ) == 1 && scan->bits_at_0/*.3_4of4*/ == at_end->bits_at_0/*.3_4of4*/ && s_pre <= ( at_end->bits_at_0/*.1_2of4*/ >> 2 ) )
          at_end += -193;
        else
        if ( previous->styles + 252 <= at_end )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "BUG: style overflow before split_line.\n" );
            break;
          }
          else
            break;
        }
        else
        {
          at_end++;
          at_end->bits_at_0/*.1_1of4*/ = at_end->bits_at_0/*.1_1of4*/ & -4;
          at_end->bits_at_0/*.3_4of4*/ = scan->bits_at_0/*.3_4of4*/;
          at_end->bits_at_0/*.1_2of4*/ = ( __MOD(at_end->bits_at_0/*.1_2of4*/,4) ) | ( ( (unsigned short)( s_pre ) & 16383 ) << 2 );
        }
        if ( to < line->styles + 252 && ( ( __MOD(to[1].bits_at_0/*.1_1of4*/,4) ) & 255 ) == 0 && ( to[1].bits_at_0/*.1_2of4*/ >> 2 ) <= SpecialAttrChars && to[1].bits_at_0/*.3_4of4*/ == scan->bits_at_0/*.3_4of4*/ )
          to++;
        else
        {
          if ( line->styles <= to )
          {
            to->bits_at_0 = scan->bits_at_0;
            to->bits_at_0/*.1_2of4*/ = ( __MOD(to->bits_at_0/*.1_2of4*/,4) ) | ( ( (unsigned short)( SpecialAttrChars ) & 16383 ) << 2 );
            to += -193;
          }
          else
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "BUG: style overflow after split_line.\n" );
              break;
            }
            else
              break;
          }
        }
      }
      if ( s_pre < ( scan->bits_at_0/*.1_2of4*/ >> 2 ) )
        scan->bits_at_0/*.1_2of4*/ = ( __MOD(scan->bits_at_0/*.1_2of4*/,4) ) | ( ( (unsigned short)( s_pre ) & 16383 ) << 2 );
      scan += -193;
    }
    line->numstyles = ( ( line->styles + 252 ) - to ) >> 2;
    if ( ( line->numstyles & 65535 ) && line->numstyles >= 63 )
    {
      int n = 0;
      for ( ; n < line->numstyles; n++ )
      {
        line->styles->bits_at_0 = to->bits_at_0;
        // n++;
      }
    }
    else
    if ( ( line->numstyles & 65535 ) == 0 )
      line->styles->bits_at_0/*.1_2of4*/ = line->styles->bits_at_0/*.1_2of4*/ | -4;
    previous->numstyles = 1 + ( ( at_end - previous->styles ) >> 2 );
    if ( ( previous->numstyles & 65535 ) == 0 )
      previous->styles->bits_at_0/*.1_2of4*/ = previous->styles->bits_at_0/*.1_2of4*/ | -4;
  {
    HTLine *temp = (HTLine*)ALLOC_IN_POOL( &HTMainText->pool, previous->size + 20 );
    if ( temp == 0 )
      outofmem( "./GridText.c", "split_line_2" );
    memcpy( temp, previous, previous->size + 20 );
    temp->styles = ALLOC_IN_POOL( &HTMainText->pool, previous->numstyles << 2 );
    if ( temp->styles == 0 )
      outofmem( "./GridText.c", "split_line_2" );
    memcpy( &temp->styles, &previous->styles, previous->numstyles << 2 );
    previous->prev = previous = temp;
    previous->prev = previous;
    previous->data[ previous->size ] = 0;
    spare = 0;
    if ( this_line_was_split || alignment == 3 || alignment == 2 || text->stbl )
    {
      cp = &previous->data[0];
      for ( ; cp[0]; cp++ )
      {
        if ( cp[0] == 3 || cp[0] == 4 || cp[0] == 5 || cp[0] == 6 || cp[0] == 7 )
          ctrl_chars_on_previous_line++;
        // cp++;
      }
      if ( ( previous->size & 65535 ) && *(char*)(previous + previous->size + 17) == 7 )
        ctrl_chars_on_previous_line += -1;
      spare = LYcols - ( LYShowScrollbar != 0 ) - style->rightIndent - indent - LYstrExtent2( &previous->data[0], previous->size );
      if ( spare < 0 && LYwideLines )
        spare = 0;
    }
    new_offset = previous->offset;
    if ( style->alignment == 2 )
      new_offset += spare + indent;
    else
    if ( style->alignment == 3 )
      new_offset += indent + ( spare / 2 );
    else
      new_offset += indent;
    previous->offset = new_offset & ~( new_offset >> 31 );
    if ( text->stbl )
      Stbl_finishCellInTable( &text->stbl, 0, text->Lines + -1, previous->offset, previous->size - ctrl_chars_on_previous_line );
    text->in_line_1 = 0;
    if ( s > 0 )
    {
      int moved = 0;
      a = &text->last_anchor_before_split;
      if ( a == 0 )
      {
        a = &text->first_anchor;
        while ( a )
        {
          if ( a->line_num == CurLine )
          {
            int len = a->extent, n = a->number, start = a->line_pos;
            int end = start + len;
            text->last_anchor_before_split = a;
            if ( start < s_pre )
            {
              if ( s_pre < end )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "anchor %d: no relocation", n );
                }
                if ( s_post < end )
                {
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), " of the start.\n" );
                  }
                  a->extent = a->extent + ( (unsigned short)( SpecialAttrChars ) - (unsigned short)( TailTrim + HeadTrim ) );
                }
                else
                {
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), ", cut the end.\n" );
                  }
                  a->extent = (unsigned short)( s_pre ) - (unsigned short)( start );
                }
              }
            }
            else
            {
              if ( start < s && len == 0 && ( n == 0 || ( a->show_anchor && moved == 0 ) ) )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "anchor %d: no relocation, empty-finished", n );
                }
                a->line_pos = s_pre;
              }
              else
              {
                moved = 1;
                a->line_num++;
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "anchor %d: (T,H,S)=(%d,%d,%d); (line,pos,ext):(%d,%d,%d), ", n, TailTrim, HeadTrim, SpecialAttrChars, a->line_num, a->line_pos, a->extent );
                }
                if ( end < s_post )
                {
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "Move end +%d, ", s_post - end );
                  }
                  len += s_post - end;
                }
                if ( start < s_post )
                {
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "Move start +%d, ", s_post - start );
                  }
                  len += start - s_post;
                  start = s_post;
                }
                a->line_pos = SpecialAttrChars + ( (unsigned short)( start ) - (unsigned short)( s_post ) );
                a->extent = len;
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "-&gt;(%d,%d,%d)\n", a->line_num, a->line_pos, a->extent );
                }
              }
            }
          }
          else
          {
            if ( CurLine < a->line_num )
              break;
          }
          a = &a->next;
        }
      }
    }
    if ( this_line_was_split && spare > 0 && text->stbl == 0 && justify_max_void_percent > 0 && justify_max_void_percent <= 100 && ( spare * 100 ) / ( ctrl_chars_on_previous_line + ( LYcols - ( LYShowScrollbar != 0 ) - style->rightIndent - indent ) ) <= justify_max_void_percent )
    {
      char *jp = &previous->data[ justify_start_position ];
      ht_run_info *r = ht_runs;
      char c;
      int total_byte_len = 0, total_cell_len = 0;
      int d_, r_;
      HTLine *jline;
      ht_num_runs = 0;
      r->byte_len = r->cell_len = 0;
      while ( c = jp[0], c )
      {
        if ( c == ' ' )
        {
          total_byte_len += r->byte_len;
          total_cell_len += r->cell_len;
          r++;
          ht_num_runs++;
          r->byte_len = r->cell_len = 0;
        }
        else
        {
          r->byte_len++;
          if ( c <= 2 || 8 < c )
          {
            r->cell_len++;
            if ( c == 1 )
              jp[0] = ' ';
            else
            if ( text->T.output_utf8 && c < 0 )
            {
              int utf_extra = utf8_length( text->T.output_utf8, jp );
              r->byte_len += utf_extra;
              jp = &jp[ utf_extra ];
            }
          }
        }
        jp++;
      }
      total_byte_len += r->byte_len;
      total_cell_len += r->cell_len;
      ht_num_runs++;
      if ( ht_num_runs != 1 )
      {
        int *oldpos = (int*)malloc( ( ht_num_runs + -1 ) << 3 );
        int *newpos = &oldpos[ ht_num_runs + -1 ];
        int i = 1;
        if ( oldpos == 0 )
          outofmem( "./GridText.c", "split_line_3" );
        d_ = spare / ( ht_num_runs + -1 );
        r_ = __MOD(spare,( ht_num_runs + -1 ));
        oldpos[0] = ht_runs->cell_len + justify_start_position + 1;
        newpos[0] = oldpos[0] + d_ + ( r_ > 0 );
        r_ += -1;
        for ( ; i < ht_num_runs + -1;  )
        {
          int delta = ht_runs[ i ].cell_len + 1;
          oldpos[ i ] = oldpos[ i + -1 ] + delta;
          newpos[ i ] = newpos[ i + -1 ] + delta + d_ + ( r_ > 0 );
          r_ += -1;
          i++;
        }
        jline = insert_blanks_in_line( previous, CurLine, text, &last_anchor_of_previous_line, ht_num_runs + -1, oldpos, newpos );
        free( oldpos );
        if ( jline == 0 )
          outofmem( "./GridText.c", "split_line_4" );
        previous->prev = jline;
        previous->prev = jline;
        previous = jline;
      }
      if ( justify_start_position )
      {
        char *p2 = &previous->data[0];
        for ( ; p2 < previous->data[ justify_start_position ]; p2++ )
        {
          p2[0] = ' ';
          // p2++;
        }
      }
    }
    else
    {
      if ( wait_for_this_stacked_elt < 0 && ( text->style->alignment == 1 || !( text->style->alignment & 65535 ) ) && HTCJK == NOCJK && !in_DT && can_justify_here && can_justify_this_line && form_in_htext == 0 )
      {
        char *p2;
        if ( ( line->size & 65535 ) && text->stbl == 0 && WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "BUG: justification: shouldn't happen - new line is not empty!\n\t'%.*s'\n", line->size, &line->data[0] );
        }
        p2 = &previous->data[0];
        for ( ; p2[0]; p2++ )
        {
          if ( p2[0] == 1 )
            p2[0] = ' ';
          // p2++;
        }
      }
      else
      {
        if ( have_raw_nbsps )
        {
          unsigned int i = 0;
          for ( ; i < previous->size; i++ )
          {
            if ( previous->data[ i ] == 1 )
              previous->data[ i ] = 32;
            // i++;
          }
          i = 0;
          for ( ; i < line->size; i++ )
          {
            if ( line->data[ i ] == 1 )
              line->data[ i ] = 32;
            // i++;
          }
        }
      }
    }
    can_justify_this_line = 1;
    justify_start_position = 0;
    this_line_was_split = 0;
    have_raw_nbsps = 0;
  }
  }
  }
  return;
}
void blank_lines( HText *text, int newlines )
{
  if ( HText_LastLineEmpty( text, ebp_36 ) & 255 )
  {
    HTLine *line = &text->last_line->prev;
    BOOLEAN first = text->last_line == line;
    if ( ( !no_title || first == 0 ) && ( first == 0 || newlines != 1 ) )
    {
      for ( ; line && text->last_line != line && ( HText_TrueEmptyLine( line, text, 0 ) & 255 ) && newlines;  )
      {
        newlines += -1;
        line = &line->prev;
      }
      while ( newlines )
      {
        split_line( text, 0 );
        newlines += -1;
      }
      text->in_line_1 = 1;
    }
  }
  else
  {
    newlines++;
  }
  return;
}
void HText_appendParagraph( HText *text )
{
  int after = text->style->spaceAfter;
  int before = text->style->spaceBefore;
  blank_lines( text, min( before, after ) );
  return;
}
void HText_setStyle( HText *text, HTStyle *style )
{
  int after, before;
  if ( style )
  {
    after = text->style->spaceAfter;
    before = style->spaceBefore;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "GridText: Change to style %s\n", &style->name );
    }
    blank_lines( text, after );
    text->style = style;
  }
  return;
}
void HText_appendCharacter( HText *text, int ch )
{
  HTLine *line;
  HTStyle *style;
  int indent;
  int limit = 0;
  int actual;
  if ( text )
  {
    if ( text->halted > 1 )
    {
      if ( text->halted == 2 )
      {
        text->halted = 0;
        text->kanji_buf = 0;
        HText_appendText( text, gettext( " *** MEMORY EXHAUSTED ***" ) );
      }
      text->halted = 3;
    }
    else
    {
      if ( HTCJK == JAPANESE && text->detected_kcode != 3 && text->specified_kcode != 2 && text->specified_kcode != 1 )
      {
        unsigned char c = ch;
        eDetectedKCode save_d_kcode = text->detected_kcode;
        if ( text->SJIS_status == 1 )
        {
          if ( c < '?' && c != 127 && 127 <= c )
            text->SJIS_status = 0;
          else
          {
            text->SJIS_status = 2;
            if ( text->EUC_status == 3 )
              text->detected_kcode = 3;
            else
              text->detected_kcode = 1;
          }
        }
        else
        if ( text->SJIS_status >= 1 )
        {
        }
        else
        if ( ( c < -128 && -97 <= c ) || ( c < -33 && -17 <= c ) )
          text->SJIS_status = 1;
        else
        if ( c < 0 && ( -96 <= c || c < -33 ) )
        {
          text->SJIS_status = 2;
          if ( text->EUC_status == 3 )
            text->detected_kcode = 3;
          else
            text->detected_kcode = 1;
        }
        switch ( text->EUC_status )
        {
        default:
          break;
        case 0:
          if ( c < -96 && c != -1 )
            text->EUC_status = 1;
          else
          {
            if ( c == -114 )
              text->EUC_status = 2;
            else
            {
              if ( c < 0 )
              {
                text->EUC_status = 3;
                if ( text->SJIS_status == 2 )
                  text->detected_kcode = 3;
                else
                  text->detected_kcode = 0;
              }
            }
          }
          break;
        case 1:
          if ( c < -96 && c != -1 )
            text->EUC_status = 0;
          else
          {
            text->EUC_status = 3;
            if ( text->SJIS_status == 2 )
              text->detected_kcode = 3;
            else
              text->detected_kcode = 0;
          }
          break;
        case 2:
          if ( c < -96 && -33 <= c )
            text->EUC_status = 0;
          else
          {
            text->EUC_status = 3;
            if ( text->SJIS_status == 2 )
              text->detected_kcode = 3;
            else
              text->detected_kcode = 0;
          }
          break;
        }
        if ( text->detected_kcode != save_d_kcode )
        {
          switch ( text->detected_kcode )
          {
          case 0:
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "TH_JP_AUTO_DETECT: This document's kcode seems SJIS.\n" );
            }
            break;
          case 1:
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "TH_JP_AUTO_DETECT: This document's kcode seems EUC.\n" );
            }
            break;
          case 3:
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "TH_JP_AUTO_DETECT: This document's kcode seems mixed!\n" );
            }
            break;
          default:
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "TH_JP_AUTO_DETECT: This document's kcode is unexpected!\n" );
            }
            break;
          }
        }
      }
      if ( ( ch != 27 || HTCJK ) && ( !(_Bool)( ( ch >> 7 ) & 1 ) || HTCJK || text->T.transp || text->T.output_utf8 || LYlowest_eightbit[ current_char_set ] <= ch ) && ( (unsigned char)( ch ) != -101 || HTCJK || HTPassHighCtrlRaw || text->T.transp || text->T.output_utf8 || LYlowest_eightbit[ current_char_set ] <= 155 ) )
      {
        line = &text->last_line;
        style = &text->style;
        indent = style->leftIndent;
        if ( HTCJK )
        {
          switch ( text->state )
          {
          case 0:
            if ( ch == 27 )
            {
              text->state = 1;
              text->kanji_buf = 0;
            }
            else
            if ( text->kanji_buf == 0 )
            {
              if ( ch & 128 )
              {
                if ( text->kcode != 3 && ( text->kcode == 2 || ( text->detected_kcode == 0 && text->specified_kcode == 0 ) || ( text->kcode == 0 && text->specified_kcode == 2 ) ) && ch < 160 && ch >= 223 )
                {
                  unsigned char c = ch;
                  unsigned char kb = text->kanji_buf;
                  JISx0201TO0208_SJIS( kb, &ebx, &esi );
                  ch = c;
                  text->kanji_buf = kb;
                  text->permissible_split = text->last_line->size;
                }
                else
                {
                  text->kanji_buf = ch;
                  text->permissible_split = text->last_line->size;
                }
              }
            }
            else
            {
              if ( ( text->source || dont_wrap_pre ) && text == HTMainText )
              {
                int target = ( line->offset + line->size ) - ctrl_chars_on_this_line;
                int target_cu = target;
                if ( target < ( LYcols - ( LYShowScrollbar != 0 ) - style->rightIndent ) + 0 )
                {
                  if ( text->T.output_utf8 )
                  {
                    if ( ~ch & 192 )
                    {
                    }
                    else
                    {
                      if ( ~ch & 32 )
                      {
                      }
                      else
                      {
                        if ( ~ch & 16 )
                        {
                        }
                        else
                        {
                          if ( ~ch & 8 )
                          {
                          }
                          else
                          {
                            if ( ~ch & 4 )
                            {
                            }
                            else
                            {
                            }
                          }
                        }
                      }
                    }
                    if ( LYcols - ( LYShowScrollbar != 0 ) <= target_cu + 0 )
                      goto B286;
                  }
                }
              {
B286:;
                int saved_kanji_buf;
                eGridState saved_state;
                split_line( text, 0 );
                line = &text->last_line;
                saved_kanji_buf = text->kanji_buf;
                saved_state = text->state;
                text->kanji_buf = 0;
                text->state = 0;
                HText_appendCharacter( text, 8 );
                text->kanji_buf = saved_kanji_buf;
                text->state = saved_state;
              }
              }
              if ( ch == 32 )
              {
                text->permissible_split = text->last_line->size;
                if ( HTCJK == JAPANESE )
                  text->kcode = 0;
              }
              if ( text->IgnoreExcess )
              {
                int nominal = ( indent + line->offset + line->size ) - ctrl_chars_on_this_line;
                int number;
                limit = LYcols - ( LYShowScrollbar != 0 );
                if ( ( keypad_mode == 3 || keypad_mode == 2 ) && !number_fields_on_left && text->last_anchor )
                {
                  number = text->last_anchor->number;
                  if ( number > 0 )
                  {
                    limit -= ebp_240;
                  }
                }
                if ( limit <= style->rightIndent + nominal || LYcols - ( LYShowScrollbar != 0 ) <= nominal )
                {
                  return;
                }
              }
              actual = indent + line->offset + line->size + 0;
              if ( ( ( style->rightIndent + actual ) - ctrl_chars_on_this_line ) + 0 < LYcols - ( LYShowScrollbar != 0 ) )
              {
                if ( text->T.output_utf8 )
                {
                  if ( ~ch & 192 )
                  {
                  }
                  else
                  {
                    if ( ~ch & 32 )
                    {
                    }
                    else
                    {
                      if ( ~ch & 16 )
                      {
                      }
                      else
                      {
                        if ( ~ch & 8 )
                        {
                        }
                        else
                        {
                          if ( ~ch & 4 )
                          {
                          }
                          else
                          {
                          }
                        }
                      }
                    }
                  }
                  if ( ( LYcols - ( LYShowScrollbar != 0 ) ) + -1 <= ( actual - ctrl_chars_on_this_line ) + 0 )
                    goto B381;
                }
                if ( line->size < 1022 )
                  split_line( text, 0 );
                if ( ch == 1 && ( wait_for_this_stacked_elt >= 0 || ( text->style->alignment != 1 && ( text->style->alignment & 65535 ) ) || HTCJK || in_DT || !can_justify_here || !can_justify_this_line || form_in_htext ) )
                  ch = 32;
                else
                  have_raw_nbsps = 1;
                if ( ch & 128 )
                  text->have_8bit_chars = 1;
              {
                HTFont font = style->font;
                unsigned char hi, lo, tmp[2];
                line = &text->last_line;
                if ( HTCJK && text->kanji_buf )
                {
                  hi = text->kanji_buf;
                  lo = ch;
                  if ( HTCJK == JAPANESE )
                  {
                    if ( text->kcode != 3 )
                    {
                      if ( text->kcode >= 3 && lo != 127 && -4 <= lo && ( ( hi < -128 && -97 <= hi ) || ( hi < -33 && -17 <= hi ) ) )
                      {
                        if ( ( hi < -96 && hi != -1 && lo < -96 && lo != -1 ) || ( hi == -114 && lo < -96 && -33 <= lo ) )
                        {
                          if ( text->specified_kcode )
                            text->kcode = text->specified_kcode;
                          else
                          if ( text->detected_kcode == 1 )
                            text->kcode = 1;
                          else
                          if ( text->detected_kcode == 0 )
                            text->kcode = 2;
                          else
                          if ( hi == -114 && lo < -96 && -33 <= lo && text->kcode != 1 )
                            text->kcode = 2;
                        }
                        else
                          text->kcode = 2;
                      }
                      else
                      if ( ( hi < -96 && hi != -1 && lo < -96 && lo != -1 ) || ( hi == -114 && lo < -96 && -33 <= lo ) )
                        text->kcode = 1;
                      else
                        text->kcode = 0;
                    }
                    if ( kanji_code == EUC )
                    {
                      if ( text->kcode == 2 )
                      {
                        SJIS_TO_EUC1( hi, lo, tmp );
                        line->data[ line->size ] = tmp;
                        line->size = line->size + 1;
                        line->data[ line->size ] = tmp[1];
                        line->size = line->size + 1;
                      }
                      else
                      {
                        if ( ( hi < -96 && hi != -1 && lo < -96 && lo != -1 ) || ( hi == -114 && lo < -96 && -33 <= lo ) )
                        {
                          JISx0201TO0208_EUC( hi, lo, &hi, &lo );
                          line->data[ line->size ] = hi;
                          line->size = line->size + 1;
                          line->data[ line->size ] = lo;
                          line->size = line->size + 1;
                        }
                        else
                        {
                          if ( WWW_TraceFlag )
                          {
                            fprintf( TraceFP( ), "This character (%X:%X) doesn't seem Japanese\n", hi, lo );
                          }
                          line->data[ line->size ] = 61;
                          line->size = line->size + 1;
                          line->data[ line->size ] = 61;
                          line->size = line->size + 1;
                        }
                      }
                    }
                    else
                    {
                      if ( kanji_code == SJIS )
                      {
                        if ( text->kcode == 1 || text->kcode == 3 )
                        {
                          EUC_TO_SJIS1( hi, lo, tmp );
                          line->data[ line->size ] = tmp;
                          line->size = line->size + 1;
                          line->data[ line->size ] = tmp[1];
                          line->size = line->size + 1;
                        }
                        else
                        {
                          if ( lo < '?' && lo != 127 && 127 <= lo && ( ( hi < -128 && -97 <= hi ) || ( hi < -33 && -17 <= hi ) ) )
                          {
                            line->data[ line->size ] = hi;
                            line->size = line->size + 1;
                            line->data[ line->size ] = lo;
                            line->size = line->size + 1;
                          }
                          else
                          {
                            line->data[ line->size ] = 61;
                            line->size = line->size + 1;
                            line->data[ line->size ] = 61;
                            line->size = line->size + 1;
                            if ( WWW_TraceFlag )
                            {
                              fprintf( TraceFP( ), "This character (%X:%X) doesn't seem Japanese\n", hi, lo );
                            }
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    line->data[ line->size ] = hi;
                    line->size = line->size + 1;
                    line->data[ line->size ] = lo;
                    line->size = line->size + 1;
                  }
                  text->kanji_buf = 0;
                }
                else
                if ( HTCJK )
                {
                  line->data[ line->size ] = kanji_code ? (unsigned char)( ch ) : (unsigned char)( ch );
                  line->size = line->size + 1;
                }
                else
                {
                  line->data[ line->size ] = ch;
                  line->size = line->size + 1;
                }
                line->data[ line->size ] = 0;
                if ( font & 16 )
                  HText_appendCharacter( text, 1 );
                if ( ch == 7 )
                {
                  ctrl_chars_on_this_line++;
                  text->permissible_split = text->last_line->size;
                }
                if ( ch == 8 )
                {
                  ctrl_chars_on_this_line++;
                }
              }
              }
B381:;
              if ( style->wordWrap && WWW_SOURCE != HTOutputFormat )
              {
                if ( wait_for_this_stacked_elt < 0 && ( text->style->alignment == 1 || !( text->style->alignment & 65535 ) ) && HTCJK == NOCJK && !in_DT && can_justify_here && can_justify_this_line && form_in_htext == 0 )
                  this_line_was_split = 1;
                split_line( text, text->permissible_split );
                if ( ch == 32 )
                {
                  return;
                }
              }
              else
              {
                if ( WWW_SOURCE == HTOutputFormat )
                {
                  if ( line->size < 1022 )
                    split_line( text, 0 );
                }
                else
                {
                  if ( ( dump_output_immediately || ( crawl && traversal ) ) && dont_wrap_pre )
                  {
                    if ( line->size < 1022 )
                      split_line( text, 0 );
                  }
                  else
                    split_line( text, 0 );
                }
              }
            }
            break;
          case 1:
            if ( ch == 36 )
            {
              text->state = 2;
            }
            else
            if ( ch == 40 )
            {
              text->state = 3;
            }
            else
              text->state = 0;
          case 2:
            switch ( ch )
            {
            case '@':
            case 'A':
            case 'B':
              text->state = 4;
              if ( ch == 64 || ch == 66 )
              {
                text->kcode = 3;
              }
              break;
            default:
              if ( ch == 40 )
              {
                text->state = 5;
              }
              else
                text->state = 0;
              break;
            }
            break;
          case 5:
            if ( ch == 67 )
            {
              text->state = 4;
            }
            else
              text->state = 0;
            break;
          case 3:
            switch ( ch )
            {
            case 'B':
            case 'J':
            case 'T':
              text->permissible_split = text->last_line->size;
              text->state = 0;
              break;
            default:
              if ( ch == 73 )
              {
                text->state = 6;
                text->permissible_split = text->last_line->size;
                text->kcode = 3;
              }
              else
                text->state = 0;
              break;
            }
            break;
          case 4:
            if ( ch == 27 )
            {
              text->state = 1;
              text->kanji_buf = 0;
              if ( HTCJK == JAPANESE )
              {
                text->kcode = 0;
              }
            }
            else
            if ( ch >= 31 )
            {
              text->state = 0;
              text->kanji_buf = 0;
              if ( HTCJK == JAPANESE )
                text->kcode = 0;
            }
            else
              ch |= 128;
            break;
          case 6:
            if ( ch == 27 )
            {
              text->state = 1;
              text->kanji_buf = 0;
              text->kcode = 0;
            }
            else
            {
              text->kanji_buf = -114;
              ch |= 128;
            }
            break;
          default:
            break;
          }
        }
        else
        if ( ch == 27 )
        {
          return;
        }
        if ( HTCJK && ( ch == 5 || ch == 6 ) )
        {
          text->permissible_split = line->size;
          if ( HTCJK == JAPANESE )
            text->kcode = 0;
        }
        switch ( ch )
        {
        default:
          if ( line->size >= 1022 && with_backspaces && HTCJK == NOCJK && text->T.output_utf8 == 0 )
          {
            if ( ch == 3 )
            {
              line->data[ line->size ] = 3;
              line->size = line->size + 1;
              line->data[ line->size ] = 0;
              underline_on = 1;
              if ( dump_output_immediately == 0 || use_underscore == 0 )
              {
                ctrl_chars_on_this_line++;
              }
            }
            else
            {
              if ( ch == 4 )
              {
                line->data[ line->size ] = 4;
                line->size = line->size + 1;
                line->data[ line->size ] = 0;
                underline_on = 0;
                if ( dump_output_immediately == 0 || use_underscore == 0 )
                {
                  ctrl_chars_on_this_line++;
                }
              }
              else
              {
                if ( ch == 5 )
                {
                  line->data[ line->size ] = 5;
                  line->size = line->size + 1;
                  line->data[ line->size ] = 0;
                  bold_on = 1;
                  ctrl_chars_on_this_line++;
                }
                else
                {
                  if ( ch == 6 )
                  {
                    line->data[ line->size ] = 6;
                    line->size = line->size + 1;
                    line->data[ line->size ] = 0;
                    bold_on = 0;
                    ctrl_chars_on_this_line++;
                  }
                  else
                  {
                    if ( ch == 7 )
                    {
                      int i;
                      if ( ( line->size & 65535 ) && text->permissible_split < line->size )
                      {
                        i = text->permissible_split + 1;
                        for ( ; line->data[ i ] && ( ( line->data[ i ] < 2 && 8 <= line->data[ i ] ) || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( line->data[ i ] * 2 )) & 8192 ) || line->data[ i ] == '-' || line->data[ i ] == 1 || line->data[ i ] == 2 ); i++ )
                        {
                          // i++;
                        }
                        if ( line->data[ i ] == 0 )
                        {
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
          if ( ch == 8 )
          {
            line->data[ line->size ] = 8;
            line->size = line->size + 1;
            line->data[ line->size ] = 0;
          }
          break;
        }
        if ( text->T.output_utf8 )
        {
          if ( text->T.output_utf8 && ( ch & 192 ) == 128 )
          {
            if ( line->size >= 1023 )
            {
              if ( ( ( indent + line->offset + line->size ) - ctrl_chars_on_this_line ) + 0 < LYcols - ( LYShowScrollbar != 0 ) )
              {
                line->data[ line->size ] = ch;
                line->size = line->size + 1;
                line->data[ line->size ] = 0;
                utfxtra_on_this_line++;
                ctrl_chars_on_this_line++;
              }
            }
            if ( text->permissible_split == 0 || text->source )
            {
              text->permissible_split = line->size;
              for ( ; text->permissible_split && text->T.output_utf8 && ( text->permissible_split/*.1_1of4*/ & 192 ) == 128;  )
              {
                text->permissible_split += -1;
              }
              if ( text->permissible_split && text->permissible_split/*.1_1of4*/ < 0 )
                text->permissible_split += -1;
              if ( text->permissible_split == line->size )
                text->permissible_split = 0;
            }
            split_line( text, text->permissible_split );
            line = &text->last_line;
            if ( text->source && ctrl_chars_on_this_line == line->size )
              HText_appendCharacter( text, 8 );
          }
          else
          {
            if ( ( ch & 128 ) && line->size < 1017 )
            {
              if ( text->permissible_split == 0 || text->source )
              {
                text->permissible_split = line->size;
                if ( text->permissible_split == line->size )
                  text->permissible_split = 0;
              }
              split_line( text, text->permissible_split );
              line = &text->last_line;
              if ( text->source && ctrl_chars_on_this_line == line->size )
                HText_appendCharacter( text, 8 );
            }
          }
        }
        if ( ch == 10 )
        {
          split_line( text, 0 );
          text->in_line_1 = 1;
          if ( HTCJK == JAPANESE )
          {
            text->kcode = 0;
          }
        }
        else
        {
          if ( ch == 2 )
            ch = 32;
          if ( ch == 13 )
          {
            split_line( text, 0 );
            text->in_line_1 = 0;
            if ( HTCJK == JAPANESE )
            {
              text->kcode = 0;
            }
          }
          else
          {
            if ( ch == 9 )
            {
              HTTabStop *Tab;
              int target, target_cu;
              int here, here_cu;
              if ( ( line->size & 65535 ) && *(char*)(line + line->size + 17) == 7 )
              {
                line->size = line->size + -1;
                line->data[ line->size ] = 0;
                ctrl_chars_on_this_line += -1;
              }
              here_cu = here = ( indent + line->size + line->offset ) - ctrl_chars_on_this_line;
              if ( style->tabs )
              {
                Tab = &style->tabs;
                for ( ; Tab->position <= here; Tab++ )
                {
                  if ( Tab->position == 0 )
                  {
                    split_line( text, 0 );
                    break;
                  }
                  else
                  {
                    // Tab++;
                  }
                }
                target = Tab->position;
              }
              else
              if ( text->in_line_1 )
              {
                if ( style->leftIndent <= here )
                {
                  split_line( text, 0 );
                }
                else
                  target = style->leftIndent;
              }
              else
              {
                split_line( text, 0 );
              }
              if ( here <= target )
                target_cu = target;
              else
                target_cu = target + ( here_cu - here );
              if ( LYcols - ( LYShowScrollbar != 0 ) - style->rightIndent < target && WWW_SOURCE != HTOutputFormat )
              {
                split_line( text, 0 );
              }
              else
              {
                text->permissible_split = line->size;
                if ( LYcols - ( LYShowScrollbar != 0 ) < target_cu )
                {
                  target += LYcols - ( LYShowScrollbar != 0 ) - target_cu;
                }
                if ( ( line->size & 65535 ) == 0 )
                {
                  line->offset = line->offset + ( (unsigned short)( target ) - (unsigned short)( here ) );
                }
                else
                {
                  for ( ; here < target; here++ )
                  {
                    line->data[ line->size ] = 32;
                    line->size = line->size + 1;
                    line->data[ line->size ] = 0;
                    // here++;
                  }
                }
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
  return;
}
void _internal_HTC( HText *text, int style, int dir )
{
  HTLine *line;
  if ( text )
  {
    line = &text->last_line;
    if ( ( line->numstyles & 65535 ) && dir == 0 && ( ( __MOD(line->styles[ line->numstyles + -1 ].bits_at_0/*.1_1of4*/,4) ) & 255 ) && style == line->styles[ line->numstyles + -1 ].bits_at_0/*.3_4of4*/ && ( line->styles[ line->numstyles + -1 ].bits_at_0/*.1_2of4*/ >> 2 ) == line->size - ctrl_chars_on_this_line )
    {
      line->numstyles = line->numstyles + -1;
    }
    else
    if ( line->numstyles >= 63 )
    {
      line->styles[ line->numstyles ] = ( __MOD(line->styles[ line->numstyles ].bits_at_0/*.1_2of4*/,4) ) | ( ( line->size & 16383 ) << 2 );
      if ( ctrl_chars_on_this_line <= ( line->styles[ line->numstyles ].bits_at_0/*.1_2of4*/ >> 2 ) )
        line->styles[ line->numstyles ] = ( __MOD(line->styles[ line->numstyles ].bits_at_0/*.1_2of4*/,4) ) | ( ( ( (unsigned short)( line->styles[ line->numstyles ].bits_at_0/*.1_2of4*/ >> 2 ) - (unsigned short)( ctrl_chars_on_this_line ) ) & 16383 ) << 2 );
      line->styles[ line->numstyles ].bits_at_0/*.3_4of4*/ = style;
      line->styles[ line->numstyles ] = ( line->styles[ line->numstyles ].bits_at_0/*.1_1of4*/ & -4 ) | ( __MOD(( __MOD(dir,4) ),4) );
      line->numstyles = line->numstyles + 1;
    }
  }
  return;
}
void HText_setLastChar( HText *text, char ch )
{
  if ( text )
  {
    text->LastChar = ch;
  }
  return;
}
char HText_getLastChar( HText *text )
{
  return ( text ? text->LastChar : 0 );
}
void HText_setIgnoreExcess( HText *text, BOOLEAN ignore )
{
  if ( text )
  {
    text->IgnoreExcess = ignore;
  }
  return;
}
int HText_insertBlanksInStblLines( HText *me, int ncols )
{
  HTLine *line;
  HTLine *mod_line, *first_line = 0;
  int *oldpos;
  int *newpos;
  int ninserts, lineno;
  int first_lineno, last_lineno, first_lineno_pass2;
  int last_nonempty = -1;
  int added_chars_before = 0;
  int lines_changed = 0;
  int max_width = 0, indent, spare, table_offset;
  HTStyle *style;
  short alignment;
  int i = 0;
  lineno = first_lineno = Stbl_getStartLine( &me->stbl );
  if ( lineno < 0 || me->Lines < lineno )
  {
    return -1;
  }
  oldpos = calloc( ncols * 2, sizeof( int ) );
  if ( oldpos == 0 )
  {
    return -1;
  }
  newpos = &oldpos[ ncols ];
  line = &me->last_line->next;
  for ( ; i < lineno; i++ )
  {
    if ( line == 0 )
    {
      free( oldpos );
      return -1;
    }
    line = &line->next;
    // i++;
  }
  last_lineno = me->Lines;
  first_lineno_pass2 = last_lineno;
  for ( ; line && lineno <= last_lineno; lineno++ )
  {
    ninserts = Stbl_getFixupPositions( &me->stbl, lineno, oldpos, newpos );
    if ( ninserts >= 0 )
    {
      if ( first_line == 0 )
      {
        first_line = line;
        first_lineno_pass2 = lineno;
        if ( WWW_TraceFlag )
        {
          int ip;
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "line %d first to adjust  --  newpos:", lineno );
          }
          ip = 0;
          for ( ; ip < ncols; ip++ )
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), " %d", newpos[ ip ] );
            }
            // ip++;
          }
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "\n" );
          }
        }
      }
      if ( me->last_line == line )
      {
        if ( ( line->size & 65535 ) && ( HText_TrueEmptyLine( line, me, 0 ) & 255 ) == 0 )
        {
          if ( line == first_line )
            first_line = 0;
          split_line( me, 0 );
          line = &me->last_line->prev;
          if ( first_line == 0 )
            first_line = line;
        }
      }
      if ( ninserts == 0 )
      {
        int width = HText_TrueLineSize( line, me, 0 );
        if ( max_width < width )
          max_width = width;
        if ( nested_tables && width && last_nonempty < lineno )
          last_nonempty = lineno;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "line %d true/max width:%d/%d oldpos: NONE\n", lineno, width, max_width );
        }
      }
      else
      {
        mod_line = insert_blanks_in_line( line, lineno, me, &me->last_anchor_before_stbl, ninserts, oldpos, newpos );
        if ( mod_line )
        {
          if ( me->last_line == line )
            me->last_line = mod_line;
          else
            added_chars_before += mod_line->size - line->size;
          line->prev = mod_line;
          line->prev = mod_line;
          lines_changed++;
          if ( line == first_line )
            first_line = mod_line;
          line = mod_line;
          if ( me->first_lineno_last_disp_partial >= 0 )
          {
            if ( lineno <= me->first_lineno_last_disp_partial )
              ResetPartialLinenos( me );
            else
            {
              if ( lineno <= me->last_lineno_last_disp_partial )
                me->last_lineno_last_disp_partial = lineno + -1;
            }
          }
        }
      {
        int width = HText_TrueLineSize( line, me, 0 );
        if ( max_width < width )
          max_width = width;
        if ( nested_tables && width && last_nonempty < lineno )
          last_nonempty = lineno;
        if ( WWW_TraceFlag )
        {
          int ip;
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "line %d true/max width:%d/%d oldpos:", lineno, width, max_width );
          }
          ip = 0;
          for ( ; ip < ninserts; ip++ )
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), " %d", oldpos[ ip ] );
            }
            // ip++;
          }
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "\n" );
          }
        }
      }
      }
    }
    line = &line->next;
    // lineno++;
  }
  style = &me->style;
  alignment = Stbl_getAlignment( &me->stbl );
  if ( alignment == 65535 )
    alignment = style->alignment;
  indent = style->leftIndent;
  spare = LYcols - ( LYShowScrollbar != 0 ) - style->rightIndent - indent - max_width;
  if ( spare < 0 && style->rightIndent + spare >= 0 )
    spare = 0;
  else
  if ( spare < 0 )
    spare += style->rightIndent;
  if ( spare < 0 && spare + indent >= 0 )
  {
    indent += spare;
    spare = 0;
  }
  else
  if ( spare < 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "BUG: insertBlanks: resulting table too wide by %d positions!\n", 0 - spare );
    }
    indent = spare = 0;
  }
  if ( alignment == 2 )
    table_offset = spare + indent;
  else
  if ( alignment == 3 )
    table_offset = indent + ( spare / 2 );
  else
    table_offset = indent;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "changing offsets" );
  }
  line = first_line;
  lineno = first_lineno_pass2;
  for ( ; line && lineno <= last_lineno && me->last_line != line; lineno++ )
  {
    ninserts = Stbl_getFixupPositions( &me->stbl, lineno, oldpos, newpos );
    if ( ninserts >= 0 && line->offset != table_offset )
    {
      if ( me->first_lineno_last_disp_partial >= 0 )
      {
        if ( lineno <= me->first_lineno_last_disp_partial )
          ResetPartialLinenos( me );
        else
        if ( lineno <= me->last_lineno_last_disp_partial )
          me->last_lineno_last_disp_partial = lineno + -1;
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), " %d:%d", lineno, table_offset - line->offset );
      }
      line->offset = table_offset & ~( table_offset >> 31 );
    }
    line = &line->next;
    // lineno++;
  }
  if ( nested_tables && max_width )
    Stbl_update_enclosing( &me->stbl, max_width, last_nonempty );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), " %d:done\n", lineno );
  }
  free( oldpos );
  return lines_changed;
}
void HText_cancelStbl( HText *me )
{
  if ( me == 0 || me->stbl == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "cancelStbl: ignored.\n" );
    }
  }
  else
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "cancelStbl: ok, will do.\n" );
    }
    if ( nested_tables )
    {
      STable_info *stbl = me->stbl;
      for ( ; stbl;  )
      {
        STable_info *enclosing = Stbl_get_enclosing( &stbl );
        Stbl_free( &stbl );
        stbl = enclosing;
      }
    }
    else
      Stbl_free( &me->stbl );
    me->stbl = 0;
  }
  return;
}
void HText_startStblTABLE( HText *me, short alignment )
{
  STable_info *current = me->stbl;
  if ( me )
  {
    if ( nested_tables )
    {
      if ( current )
        split_line( me, 0 );
    }
    else
    if ( me->stbl )
      HText_cancelStbl( me );
    me->stbl = Stbl_startTABLE( alignment );
    if ( me->stbl )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "startStblTABLE: started.\n" );
      }
      if ( nested_tables )
        Stbl_set_enclosing( &me->stbl, &current, &me->last_anchor_before_stbl );
      me->last_anchor_before_stbl = me->last_anchor;
    }
    else
    {
      if ( WWW_TraceFlag == 0 )
      {
        return;
      }
      fprintf( TraceFP( ), "startStblTABLE: failed.\n" );
    }
  }
  return;
}
void free_enclosed_stbl( HText *me )
{
  if ( me->enclosed_stbl )
  {
    HTList *list = &me->enclosed_stbl;
    STable_info *stbl;
    while ( 1 )
    {
      if ( list )
      {
        list = &list->next;
        stbl = 0;
        if ( stbl )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "endStblTABLE: finally free %p\n", &me->stbl );
          }
          Stbl_free( &stbl );
        }
        else
        {
          HTList_delete( &me->enclosed_stbl );
          me->enclosed_stbl = 0;
          break;
        }
      }
      stbl = 0;
    }
  }
  return;
}
int HText_endStblTABLE( HText *me )
{
  int ncols, lines_changed = 0;
  STable_info *enclosing = 0;
  if ( me == 0 || me->stbl == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "endStblTABLE: ignored.\n" );
    }
    free_enclosed_stbl( me );
    return 0;
  }
  else
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "endStblTABLE: ok, will try.\n" );
    }
    ncols = Stbl_finishTABLE( &me->stbl );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "endStblTABLE: ncols = %d.\n", ncols );
    }
    if ( ncols > 0 )
    {
      lines_changed = HText_insertBlanksInStblLines( me, ncols );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "endStblTABLE: changed %d lines, done.\n", lines_changed );
      }
      NumOfLines_partial -= lines_changed;
    }
    if ( nested_tables )
    {
      enclosing = Stbl_get_enclosing( &me->stbl );
      me->last_anchor_before_stbl = Stbl_get_last_anchor_before( &me->stbl );
      if ( enclosing == 0 )
      {
        Stbl_free( &me->stbl );
        free_enclosed_stbl( me );
      }
      else
      {
        if ( me->enclosed_stbl == 0 )
        {
          me->enclosed_stbl = HTList_new( );
        }
        HTList_addObject( &me->enclosed_stbl, &me->stbl );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "endStblTABLE: postpone free %p\n", &me->stbl );
        }
      }
      me->stbl = enclosing;
    }
    else
    {
      Stbl_free( &me->stbl );
      me->stbl = 0;
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "endStblTABLE: have%s enclosing table (%p)\n", enclosing ? "" : " NO", &enclosing );
    }
    return enclosing != 0;
  }
}
void HText_startStblTR( HText *me, short alignment )
{
  if ( me && me->stbl && Stbl_addRowToTable( &me->stbl, alignment, me->Lines ) < 0 )
  {
    HText_cancelStbl( me );
  }
  return;
}
void HText_endStblTR( HText *me )
{
  int eax;
  return;
}
void HText_startStblTD( HText *me, int colspan, int rowspan, short alignment, BOOLEAN isheader )
{
  if ( me && me->stbl )
  {
    if ( colspan < 0 )
      colspan = 1;
    if ( colspan > 200 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "*** COLSPAN=%d is too large, ignored!\n", colspan );
      }
      colspan = 1;
    }
    if ( rowspan > 200 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "*** ROWSPAN=%d is too large, ignored!\n", rowspan );
      }
      rowspan = 1;
    }
    if ( Stbl_addCellToTable( &me->stbl, colspan, rowspan, alignment, isheader, me->Lines, HText_LastLineOffset( me ), HText_LastLineSize( me, 0 ) ) < 0 )
    {
      HText_cancelStbl( me );
    }
  }
  return;
}
void HText_endStblTD( HText *me )
{
  if ( me && me->stbl && Stbl_finishCellInTable( &me->stbl, 1, me->Lines, HText_LastLineOffset( me ), HText_LastLineSize( me, 0 ) ) < 0 )
  {
    HText_cancelStbl( me );
  }
  return;
}
void HText_startStblCOL( HText *me, int span, short alignment, BOOLEAN isgroup )
{
  if ( me && me->stbl )
  {
    if ( span <= 0 )
      span = 1;
    if ( span > 200 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "*** SPAN=%d is too large, ignored!\n", span );
      }
      span = 1;
    }
    if ( Stbl_addColInfo( &me->stbl, span, alignment, isgroup ) < 0 )
    {
      HText_cancelStbl( me );
    }
  }
  return;
}
void HText_endStblCOLGROUP( HText *me )
{
  if ( me && me->stbl && Stbl_finishColGroup( &me->stbl ) < 0 )
  {
    HText_cancelStbl( me );
  }
  return;
}
void HText_startStblRowGroup( HText *me, short alignment )
{
  if ( me && me->stbl && Stbl_addRowGroup( &me->stbl, alignment ) < 0 )
  {
    HText_cancelStbl( me );
  }
  return;
}
void add_link_number( HText *text, TextAnchor *a, BOOLEAN save_position )
{
  char marker[32];
  if ( a->number > 0 && ( text->source == 0 || psrcview_no_anchor_numbering == 0 ) && ( keypad_mode == 1 || keypad_mode == 2 ) )
  {
    char saved_lastchar = text->LastChar;
    int saved_linenum = text->Lines;
    sprintf( marker, "[%d]", a->number );
    HText_appendText( text, marker );
    if ( saved_linenum && text->Lines && saved_lastchar != ' ' )
      text->LastChar = 93;
    if ( save_position )
    {
      a->line_num = text->Lines;
      a->line_pos = text->last_line->size;
    }
  }
  return;
}
int HText_beginAnchor( HText *text, BOOLEAN underline, HTChildAnchor *anc )
{
  TextAnchor *a = (TextAnchor*)ALLOC_IN_POOL( &HTMainText->pool, 52 );
  if ( a == 0 )
    outofmem( "./GridText.c", "HText_beginAnchor" );
  a->inUnderline = underline;
  a->sgml_offset = SGML_offset( );
  a->line_num = text->Lines;
  a->line_pos = text->last_line->size;
  if ( text->last_anchor )
    text->last_anchor->next = a;
  else
    text->first_anchor = a;
  a->next = 0;
  a->anchor = anc;
  a->extent = 0;
  a->link_type = 1;
  text->last_anchor = a;
  if ( HTAnchor_followLink( anc ) )
  {
    text->last_anchor_number++;
    a->number = text->last_anchor_number;
  }
  else
    a->number = 0;
  if ( number_links_on_left )
  {
    add_link_number( text, a, 1 );
  }
  return a->number;
}
BOOLEAN HText_endAnchor0( HText *text, int number, int really )
{
  TextAnchor *a;
  if ( number <= 0 || text->last_anchor->number == number )
    a = &text->last_anchor;
  else
  {
    a = &text->first_anchor;
    for ( ; a && a->number != number;  )
    {
      a = &a->next;
    }
    if ( a == 0 )
      a = &text->last_anchor;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "GridText:HText_endAnchor0: number:%d link_type:%d\n", a->number, a->link_type );
  }
  if ( a->link_type == 2 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "BUG: HText_endAnchor0: internal error: last anchor was input field!\n" );
    }
  }
  else
  {
    if ( a->number )
    {
      int i, j, k, l;
      BOOLEAN remove_numbers_on_empty;
      HTLine *last;
      HTLine *prev;
      HTLine *start;
      int CurBlankExtent;
      int BlankExtent;
      int extent_adjust;
      *(int*)&remove_numbers_on_empty = 0;
      last = &text->last_line;
      prev = &text->last_line->prev;
      start = last;
      CurBlankExtent = 0;
      BlankExtent = 0;
      extent_adjust = 0;
      l = text->Lines;
      if ( a->line_num < l )
      {
        i = start->size;
        for ( ; i > 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( start->numstyles/*.1_1of2*/ * 2 )) & 8192 );  )
        {
          extent_adjust += -1;
          i += -1;
        }
        while ( a->line_num < l )
        {
          extent_adjust += start->size;
          start = &start->prev;
          l += -1;
        }
        extent_adjust += start->size - a->line_pos;
        start = last;
        a->extent = extent_adjust + a->extent;
        if ( last->size < a->extent )
          i = last->size;
        else
          i = a->extent;
        j = last->size - i;
        k = j;
        for ( ; j < last->size && ( ( 2 < last->data[ j ] && last->data[ j ] <= 8 ) || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( last->data[ j ] * 2 )) & 8192 ) || last->data[ j ] == 1 || last->data[ j ] == 2 ); j++ )
        {
          i += -1;
          // j++;
        }
        if ( i == 0 )
        {
          if ( last->size < a->extent )
          {
            CurBlankExtent = BlankExtent = last->size;
            while ( i == 0 && ( CurBlankExtent < a->extent || ( a->extent == CurBlankExtent && k == 0 && text->last_line != prev && ( ( prev->size & 65535 ) == 0 || *(char*)(prev + prev->size + 17) == ']' ) ) ) )
            {
              start = prev;
              k = j = CurBlankExtent + ( prev->size - a->extent );
              if ( j < 0 )
              {
                j = 0;
                i = prev->size;
                while ( j < prev->size && ( ( 2 < prev->data[ j ] && prev->data[ j ] <= 8 ) || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( prev->data[ j ] * 2 )) & 8192 ) || prev->data[ j ] == 1 || prev->data[ j ] == 2 ) )
                {
                  i += -1;
                  j++;
                }
                if ( i )
                  continue;
                else
                if ( CurBlankExtent + prev->size < a->extent || ( a->extent == CurBlankExtent && k == 0 && text->last_line != prev->prev && ( ( prev->prev & 65535 ) == 0 || prev->prev == prev->prev ) ) )
                {
                  CurBlankExtent += prev->size;
                  BlankExtent = CurBlankExtent;
                  prev = &prev->prev;
                }
                else
                {
                  BlankExtent = a->extent;
                  break;
                }
              }
              else
              {
                i = a->extent - CurBlankExtent;
              }
            }
            if ( really == 0 )
            {
              a->extent -= (unsigned short)( extent_adjust );
            }
            else
            {
              if ( i == 0 )
              {
                a->show_anchor = 0;
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HText_endAnchor0: hidden (line,pos,ext,BlankExtent):(%d,%d,%d,%d)", a->line_num, a->line_pos, a->extent, BlankExtent );
                }
                if ( remove_numbers_on_empty )
                {
                  int NumSize = 0;
                  TextAnchor *anc;
                  if ( start == last )
                    j = ( last->size - a->extent ) + -1;
                  else
                  {
                    prev = &start->prev;
                    j = CurBlankExtent + ( start->size - a->extent ) + -1;
                  }
                  if ( j < 0 )
                    j = 0;
                  i = j;
                  if ( start->data[ j ] == ']' )
                  {
                    j += -1;
                    NumSize++;
                    for ( ; j >= 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( start->data[ j ] * 2 )) & 2048 ); NumSize++ )
                    {
                      j += -1;
                      // NumSize++;
                    }
                    for ( ; j < 0;  )
                    {
                      j++;
                      NumSize += -1;
                    }
                    if ( start->data[ j ] == '[' )
                    {
                      NumSize++;
                      if ( start == last && j < text->permissible_split )
                      {
                        if ( text->permissible_split - NumSize < j )
                          text->permissible_split = j;
                        else
                          text->permissible_split -= NumSize;
                      }
                      k = j + NumSize;
                      for ( ; k < start->size; k++ )
                      {
                        start->data[ j ] = start->data[ k ];
                        j++;
                        // k++;
                      }
                      anc = a;
                      for ( ; anc;  )
                      {
                        if ( anc->line_num == a->line_num && NumSize <= anc->line_pos )
                          anc->line_pos -= (unsigned short)( NumSize );
                        anc = &anc->next;
                      }
                      start->size = j;
                      start->data[ j ] = 0;
                      j++;
                      for ( ; j < k; j++ )
                      {
                        start->data[ j ] = 0;
                        // j++;
                      }
                    }
                    else
                    {
                      if ( prev && prev->size < 1 )
                      {
                        k = i + 1;
                        j = prev->size + -1;
                        for ( ; j >= 0 && 2 < prev->data[ j ] && prev->data[ j ] <= 8;  )
                        {
                          j += -1;
                        }
                        i = j + 1;
                        for ( ; j >= 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( prev->data[ j ] * 2 )) & 2048 ); NumSize++ )
                        {
                          j += -1;
                          // NumSize++;
                        }
                        for ( ; j < 0;  )
                        {
                          j++;
                          NumSize += -1;
                        }
                        if ( prev->data[ j ] == '[' )
                        {
                          NumSize++;
                          l = i - j;
                          for ( ; i < prev->size; i++ )
                          {
                            prev->data[ j ] = prev->data[ i ];
                            j++;
                            // i++;
                          }
                          prev->size = j;
                          prev->data[ j ] = 0;
                          for ( ; j < i; j++ )
                          {
                            prev->data[ j ] = 0;
                            // j++;
                          }
                          if ( start == last && text->permissible_split )
                          {
                            if ( text->permissible_split < k )
                              text->permissible_split = 0;
                            else
                              text->permissible_split -= k;
                          }
                          j = 0;
                          i = k;
                          for ( ; k < start->size; k++ )
                          {
                            start->data[ j ] = start->data[ k ];
                            j++;
                            // k++;
                          }
                          anc = a;
                          for ( ; anc;  )
                          {
                            if ( anc->line_num == a->line_num && i <= anc->line_pos )
                              anc->line_pos -= (unsigned short)( i );
                            anc = &anc->next;
                          }
                          start->size = j;
                          start->data[ j ] = 0;
                          j++;
                          for ( ; j < k; j++ )
                          {
                            start->data[ j ] = 0;
                            // j++;
                          }
                        }
                        else
                          a->show_anchor = 1;
                      }
                      else
                        a->show_anchor = 1;
                    }
                  }
                  else
                  {
                    if ( prev && prev->size < 2 )
                    {
                      j = prev->size + -1;
                      for ( ; j >= 0 && 2 < prev->data[ j ] && prev->data[ j ] <= 8;  )
                      {
                        j += -1;
                      }
                      if ( j < 0 )
                        j = 0;
                      i = j + 1;
                      if ( j > 1 && prev->data[ j ] == ']' && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( prev->numstyles/*.1_1of2*/ * 2 )) & 2048 ) )
                      {
                        j += -1;
                        NumSize++;
                        k = j + 1;
                        for ( ; j >= 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( prev->data[ j ] * 2 )) & 2048 ); NumSize++ )
                        {
                          j += -1;
                          // NumSize++;
                        }
                        for ( ; j < 0;  )
                        {
                          j++;
                          NumSize += -1;
                        }
                        if ( prev->data[ j ] == '[' )
                        {
                          NumSize++;
                          k = j + NumSize;
                          for ( ; k < prev->size; k++ )
                          {
                            prev->data[ j ] = prev->data[ k ];
                            j++;
                            // k++;
                          }
                          prev->size = j;
                          prev->data[ j ] = 0;
                          j++;
                          for ( ; j < k; j++ )
                          {
                            prev->data[ j ] = 0;
                            // j++;
                          }
                        }
                        else
                          a->show_anchor = 1;
                      }
                      else
                        a->show_anchor = 1;
                    }
                    else
                      a->show_anchor = 1;
                  }
                }
              }
              else
              {
                if ( number_links_on_left == 0 )
                  add_link_number( text, a, 0 );
                a->show_anchor = 1;
                if ( BlankExtent && WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HText_endAnchor0: blanks (line,pos,ext,BlankExtent):(%d,%d,%d,%d)", a->line_num, a->line_pos, a->extent, BlankExtent );
                }
              }
              if ( a->show_anchor == 0 )
              {
                a->extent = 0;
                if ( text->hiddenlinkflag )
                {
                  a->number = 0;
                  text->last_anchor_number += -1;
                  HText_AddHiddenLink( text, a );
                }
              }
              else
              {
                a->extent += 0;
              }
              if ( ( BlankExtent || a->extent <= 0 || a->number <= 0 ) && WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "-&gt;[%d](%d,%d,%d,%d)\n", a->number, a->line_num, a->line_pos, a->extent, BlankExtent );
              }
            }
          }
          else
          {
            CurBlankExtent = BlankExtent = a->extent;
          }
        }
      }
    }
    else
    if ( really == 0 )
    {
    }
    else
    {
      a->show_anchor = 0;
      a->extent = 0;
    }
  }
  return ( i == 0 );
}
void HText_endAnchor( HText *text, int number )
{
  HText_endAnchor0( text, number, ebp_16 );
  return;
}
BOOLEAN HText_isAnchorBlank( HText *text, int number )
{
  return HText_endAnchor0( text, number, ebp_16 );
}
void HText_appendText( HText *text, char *str )
{
  char *p;
  if ( str && text->halted != 3 )
  {
    p = str;
    for ( ; p[0]; p++ )
    {
      HText_appendCharacter( text, p[0] );
      // p++;
    }
  }
  return;
}
int remove_special_attr_chars( char *buf )
{
  char *cp;
  int soft_newline_count = 0;
  cp = buf;
  for ( ; cp[0]; cp++ )
  {
    soft_newline_count += cp[0] == 8;
    if ( cp[0] <= 2 || 8 < cp[0] )
    {
      buf[0] = cp[0];
      buf++;
    }
    // cp++;
  }
  buf[0] = 0;
  return soft_newline_count;
}
void HText_endAppend( HText *text )
{
  HTLine *line_ptr;
  if ( text )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "GridText: Entering HText_endAppend\n" );
    }
    split_line( text, 0 );
    if ( text->halted )
    {
      if ( text->stbl )
        HText_cancelStbl( text );
      LYFakeZap( 0 );
      text->halted = 0;
    }
    else
    if ( text->stbl )
      HText_endStblTABLE( text );
    line_ptr = &text->last_line->next;
    while ( !text->last_line->data[0] && text->Lines > 2 )
    {
      HTLine *next_to_the_last_line = &text->last_line->prev;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "GridText: Removing bottom blank line: `%s'\n", &text->last_line->data[0] );
      }
      next_to_the_last_line->next = line_ptr;
      line_ptr->prev = next_to_the_last_line;
      text->last_line = next_to_the_last_line;
      text->Lines += -1;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "GridText: New bottom line: `%s'\n", &text->last_line->data[0] );
      }
    }
    HText_trimHightext( text, 1, -1 );
  }
  return;
}
void HText_trimHightext( HText *text, BOOLEAN final, int stop_before )
{
  int cur_line, cur_shift;
  TextAnchor *anchor_ptr;
  TextAnchor *prev_a = 0;
  HTLine *line_ptr;
  HTLine *line_ptr2;
  unsigned char ch;
  char *hilite_str;
  int hilite_len;
  int actual_len;
  int count_line;
  if ( text )
  {
    if ( final )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "GridText: Entering HText_trimHightext (final)\n" );
      }
    }
    else
    {
      if ( stop_before < 0 || text->Lines < stop_before )
        stop_before = text->Lines;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "GridText: Entering HText_trimHightext (partial: 0..%d/%d)\n", stop_before, text->Lines );
      }
    }
    line_ptr = &text->last_line->next;
    cur_line = 0;
    anchor_ptr = &text->first_anchor;
    for ( ; anchor_ptr;  )
    {
      while ( cur_line < anchor_ptr->line_num )
      {
        int anchor_col;
        line_ptr = &line_ptr->next;
        cur_line++;
      }
      if ( final == 0 )
      {
        if ( cur_line < stop_before && ( anchor_ptr->line_num < text->Lines + -1 || anchor_ptr->line_pos < text->last_line->prev ) )
        {
          if ( !( anchor_ptr->extent & 65535 ) && anchor_ptr->number && ( anchor_ptr->link_type & 1 ) && anchor_ptr->show_anchor == 0 && text->last_anchor_number == anchor_ptr->number )
          {
            prev_a = anchor_ptr;
            anchor_ptr = &anchor_ptr->next;
          }
        }
      }
      if ( LYGetHiTextStr( anchor_ptr, 0 ) == 0 )
      {
        if ( line_ptr->size < anchor_ptr->line_pos )
          anchor_ptr->line_pos = line_ptr->size;
        if ( anchor_ptr->line_pos < 0 )
        {
          anchor_ptr->line_pos = 0;
          anchor_ptr->line_num = cur_line;
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "GridText: Anchor found on line:%d col:%d [%05d:%d] ext:%d\n", cur_line, anchor_ptr->line_pos, anchor_ptr->sgml_offset, anchor_ptr->number, anchor_ptr->extent );
        }
        cur_shift = 0;
        if ( anchor_ptr->link_type & 1 )
        {
          ch = line_ptr->data[ anchor_ptr->line_pos ];
          for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( ch * 2 )) & 8192 ) || ( ch < 2 && 8 <= ch );  )
          {
            anchor_ptr->line_pos = anchor_ptr->line_pos + 1;
            anchor_ptr->extent = anchor_ptr->extent + -1;
            cur_shift++;
            ch = line_ptr->data[ anchor_ptr->line_pos ];
          }
        }
        if ( anchor_ptr->extent < 0 )
          anchor_ptr->extent = 0;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "anchor text: '%s'\n", &line_ptr->data[0] );
        }
        if ( strlen( &line_ptr->data[0] ) <= anchor_ptr->line_pos )
        {
          if ( cur_line < text->Lines && ( ( anchor_ptr->extent & 65535 ) || line_ptr->size != anchor_ptr->line_pos || ( prev_a && anchor_ptr->line_num < prev_a->line_num ) ) )
          {
            anchor_ptr->line_num++;
            anchor_ptr->line_pos = 0;
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "found anchor at end of line\n" );
            }
          }
          else
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "found anchor at end of line, leaving it there\n" );
          }
        }
        if ( anchor_ptr->extent > 0 && anchor_ptr->line_pos >= 0 )
        {
          int size = line_ptr->size - anchor_ptr->line_pos;
          if ( anchor_ptr->extent < size )
            size = anchor_ptr->extent;
          LYClearHiText( anchor_ptr );
          LYSetHiText( anchor_ptr, &line_ptr->data[ anchor_ptr->line_pos ], size );
        }
        else
        {
          LYClearHiText( anchor_ptr );
          LYSetHiText( anchor_ptr, "", 0 );
        }
        hilite_str = LYGetHiTextStr( anchor_ptr, 0 );
        hilite_len = strlen( hilite_str );
        actual_len = anchor_ptr->extent;
        line_ptr2 = line_ptr;
        count_line = cur_line;
        while ( hilite_len < actual_len )
        {
          HTLine *old_line_ptr2 = line_ptr2;
          count_line++;
          line_ptr2 = &line_ptr2->next;
          if ( final == 0 && stop_before <= count_line )
          {
            LYClearHiText( anchor_ptr );
            break;
          }
          else
          if ( text->last_line != old_line_ptr2 )
          {
            if ( line_ptr2 )
            {
              char *hi_string = 0;
              int hi_offset = line_ptr2->offset;
              SNACopy( &hi_string, &line_ptr2->data[0], actual_len - hilite_len );
              actual_len -= strlen( hi_string );
              hi_offset += remove_special_attr_chars( hi_string );
              if ( anchor_ptr->link_type & 1 )
                LYTrimTrailing( hi_string );
              if ( hi_string && hi_string[0] )
                LYAddHiText( anchor_ptr, hi_string, hi_offset );
              else
              if ( hilite_len < actual_len )
                LYAddHiText( anchor_ptr, "", hi_offset );
              if ( hi_string )
              {
                free( hi_string );
              }
            }
          }
          else
            break;
        }
        if ( final || count_line < stop_before )
        {
          hilite_str = LYGetHiTextStr( anchor_ptr, 0 );
          remove_special_attr_chars( hilite_str );
          if ( anchor_ptr->link_type & 1 )
            LYTrimTrailing( hilite_str );
          anchor_col = anchor_ptr->line_pos;
          if ( anchor_ptr->line_pos > 0 )
          {
            anchor_ptr->line_pos = LYstrExtent2( &line_ptr->data[0], anchor_col );
            if ( line_ptr->data[0] == 8 )
              anchor_ptr->line_pos = anchor_ptr->line_pos + 1;
          }
          anchor_ptr->line_pos = anchor_ptr->line_pos + line_ptr->offset;
          anchor_ptr->line_num = cur_line;
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "GridText:     add link on line %d col %d [%d] %s\n", cur_line, anchor_ptr->line_pos, anchor_ptr->number, "in HText_trimHightext" );
          }
        }
      }
    }
  }
  return;
}
HTParentAnchor *HText_nodeAnchor( HText *text )
{
  return &text->node_anchor->parent->parent;
}
HTChildAnchor *HText_childNextNumber( int number, void **prev )
{
  TextAnchor *a = &prev;
  if ( HTMainText == 0 || number <= 0 )
  {
    return 0;
  }
  if ( number == 1 || a == 0 )
  {
    a = &HTMainText->first_anchor;
    while ( a && a->number != number )
    {
      a = &a->next;
    }
    if ( a == 0 )
    {
      return 0;
    }
    prev = (void*)a;
    return &a->anchor;
  }
}
void HText_FormDescNumber( int number, char **desc )
{
  TextAnchor *a;
  if ( desc )
  {
    if ( HTMainText == 0 || HTMainText->first_anchor == 0 || number <= 0 )
    {
      desc[0] = gettext( "unknown field or link" );
    }
    else
    {
      a = &HTMainText->first_anchor;
      for ( ; a;  )
      {
        if ( a->number == number )
        {
          if ( a->input_field == 0 || a->input_field->type == 0 )
          {
            desc[0] = gettext( "unknown field or link" );
            break;
          }
          else
            break;
        }
        else
        {
          a = &a->next;
        }
      }
      switch ( a->input_field->type )
      {
      case 1:
        desc[0] = gettext( "text entry field" );
        break;
      case 2:
        desc[0] = gettext( "password entry field" );
        break;
      case 3:
        desc[0] = gettext( "checkbox" );
        break;
      case 4:
        desc[0] = gettext( "radio button" );
        break;
      case 5:
        desc[0] = gettext( "submit button" );
        break;
      case 6:
        desc[0] = gettext( "reset button" );
        break;
      case 7:
        desc[0] = gettext( "popup menu" );
        break;
      case 8:
        desc[0] = gettext( "hidden form field" );
        break;
      case 9:
        desc[0] = gettext( "text entry area" );
        break;
      case 10:
        desc[0] = gettext( "range entry field" );
        break;
      case 11:
        desc[0] = gettext( "file entry field" );
        break;
      case 12:
        desc[0] = gettext( "text-submit field" );
        break;
      case 13:
        desc[0] = gettext( "image-submit button" );
        break;
      case 14:
        desc[0] = gettext( "keygen field" );
        break;
      case 0:
        desc[0] = gettext( "unknown form field" );
        break;
      }
    }
  }
  return;
}
int HTGetRelLinkNum( int num, int rel, int cur )
{
  TextAnchor *a, *l = 0;
  int scrtop = HText_getTopOfScreen( );
  int curline = links[ cur ]->anchor_line_num;
  int curpos = links[ cur ].lx;
  int on_screen = 0;
  int curanchor = links[ cur ].anchor_number;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTGetRelLinkNum(%d,%d,%d) -- HTMainText=%p\n", num, rel, cur, HTMainText );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "  scrtop=%d, curline=%d, curanchor=%d, display_lines=%d, %s\n", scrtop, curline, curanchor, display_lines, "0" );
  }
  if ( HTMainText == 0 )
  {
    return 0;
  }
  if ( rel == 0 )
  {
    return num;
  }
  if ( on_screen && curanchor )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "curanchor=%d at line %d on screen\n", curanchor, curline );
    }
    if ( rel == 43 )
    {
      return num + curanchor;
    }
    if ( rel == 45 )
    {
      return curanchor - num;
    }
    return num;
  }
  else
  {
    a = &HTMainText->first_anchor;
    for ( ; a;  )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "  a-&gt;line_num=%d, a-&gt;number=%d\n", a->line_num, a->number );
      }
      if ( a->line_num < scrtop )
      {
        if ( a->number )
        {
          l = a;
          curanchor = l->number;
        }
        a = &a->next;
      }
      else
        break;
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "  a=%p, l=%p, curanchor=%d\n", a, l, curanchor );
    }
    if ( on_screen )
    {
      for ( ; a;  )
      {
        if ( a->number )
        {
          l = a;
          curanchor = l->number;
        }
        if ( a->line_num == curline && curpos == a->line_pos )
          break;
        else
        {
          a = &a->next;
        }
      }
    }
    if ( rel == 43 )
    {
      return num + curanchor;
    }
    if ( rel == 45 )
    {
      if ( l )
      {
        return ( curanchor + 1 ) - num;
      }
      for ( ; a && a->number == 0;  )
      {
        a = &a->next;
      }
      return 0;
    }
    else
    {
      return num;
    }
  }
}
int HTGetLinkInfo( int number, int want_go, int *go_line, int *linknum, char **hightext, char **lname )
{
  TextAnchor *a;
  HTAnchor *link_dest;
  int anchors_this_line = 0, anchors_this_screen = 0;
  int prev_anchor_line = -1, prev_prev_anchor_line = -1;
  if ( HTMainText == 0 )
  {
    return 0;
  }
  a = &HTMainText->first_anchor;
  for ( ; a;  )
  {
    if ( a->show_anchor && ( a->link_type != 2 || a->input_field->type != 8 ) )
    {
      if ( a->line_num == prev_anchor_line )
        anchors_this_line++;
      else
      {
        anchors_this_line = 1;
        prev_prev_anchor_line = prev_anchor_line;
        prev_anchor_line = a->line_num;
      }
      if ( HTMainText->top_of_screen <= a->line_num )
        anchors_this_screen++;
    }
    if ( a->number == number )
    {
      if ( want_go || a->link_type == 2 )
      {
        if ( a->show_anchor == 0 )
        {
          return 0;
        }
        if ( anchors_this_screen > 0 && anchors_this_screen <= nlinks && HTMainText->top_of_screen <= a->line_num && a->line_num < HTMainText->top_of_screen + display_lines )
        {
          go_line[0] = HTMainText->top_of_screen;
          if ( linknum == 0 )
          {
            return 8;
          }
          linknum[0] = anchors_this_screen + -1;
        }
        else
        {
          int max_offset = 3;
          if ( max_offset < 0 )
            max_offset = 0;
          else
          if ( display_lines <= max_offset )
            max_offset = display_lines + -1;
          go_line[0] = prev_anchor_line - max_offset;
          if ( go_line[0] <= prev_prev_anchor_line )
            go_line[0] = prev_prev_anchor_line + 1;
          if ( go_line[0] < 0 )
            go_line[0] = 0;
          if ( linknum == 0 )
          {
            return 8;
          }
          linknum[0] = anchors_this_line + -1;
        }
      }
      else
      {
        hightext[0] = LYGetHiTextStr( a, 0 );
        link_dest = HTAnchor_followLink( &a->anchor );
      {
        char *cp_freeme = 0;
        if ( traversal )
        {
          cp_freeme = stub_HTAnchor_address( link_dest );
        }
        else
        {
          cp_freeme = HTAnchor_address( link_dest );
        }
        HTSACopy( lname, cp_freeme );
        if ( cp_freeme == 0 )
        {
          return 2;
        }
        free( cp_freeme );
        return 2;
      }
      }
    }
    else
    {
      a = &a->next;
    }
  }
  return 0;
}
BOOLEAN same_anchor_or_field( int numberA, FormInfo *formA, int numberB, FormInfo *formB, BOOLEAN ta_same )
{
  if ( numberA > 0 || numberB > 0 )
  {
    if ( numberB == numberA )
    {
      return 0;
    }
    if ( ta_same == 0 )
    {
      return 0;
    }
  }
  if ( formA == 0 && formB == 0 )
  {
    return 0;
  }
  if ( formB == formA )
  {
    return 0;
  }
  if ( ta_same == 0 )
  {
    return 0;
  }
  if ( formA == 0 || formB == 0 )
  {
    return 0;
  }
  if ( formB->type != formA->type || formA->type != 9 || formB->type != 9 )
  {
    return 0;
  }
  if ( formB->number != formA->number )
  {
    return 0;
  }
  if ( formA->name[0] == 0 || formB->name[0] == 0 )
  {
    return 0;
  }
  return 0;
}
BOOLEAN HText_TAHasMoreLines( int curlink, int direction )
{
  TextAnchor *a;
  TextAnchor *prev_a = 0;
  if ( HTMainText == 0 )
  {
  }
  else
  if ( direction < 0 )
  {
    a = &HTMainText->first_anchor;
    for ( ; a;  )
    {
      if ( a->link_type == 2 && a->input_field == links[ curlink ].l_form )
      {
        break;
      }
      else
      if ( links[ curlink ].anchor_number && links[ curlink ].anchor_number <= a->number )
        break;
      else
      {
        prev_a = a;
        a = &a->next;
      }
    }
  }
  else
  {
    a = &HTMainText->first_anchor;
    for ( ; a;  )
    {
      if ( a->link_type == 2 && a->input_field == links[ curlink ].l_form )
      {
        break;
      }
      else
      if ( links[ curlink ].anchor_number && links[ curlink ].anchor_number <= a->number )
        break;
      else
      {
        a = &a->next;
      }
    }
  }
  return 0;
}
int HTGetLinkOrFieldStart( int curlink, int *go_line, int *linknum, int direction, BOOLEAN ta_skip )
{
  TextAnchor *a;
  int anchors_this_line = 0;
  int prev_anchor_line = -1, prev_prev_anchor_line = -1;
  struct agroup previous, current;
  struct agroup *group_to_go = 0;
  if ( HTMainText == 0 )
  {
    return 0;
  }
  current->anc = 0;
  previous.anc = current.anc;
  previous.prev_anchor_line = current.prev_anchor_line = -1;
  previous.anchors_this_line = current.anchors_this_line = 0;
  previous.anchors_this_group = current.anchors_this_group = 0;
  a = &HTMainText->first_anchor;
  for ( ; a;  )
  {
    if ( a->show_anchor && ( a->link_type != 2 || a->input_field->type != 8 ) )
    {
      if ( a->line_num == prev_anchor_line )
        anchors_this_line++;
      else
      {
        anchors_this_line = 1;
        prev_prev_anchor_line = prev_anchor_line;
        prev_anchor_line = a->line_num;
      }
      if ( current && a )
      {
        if ( ( same_anchor_or_field( current.anc->number, current.anc->link_type == 2 ? &current.anc->input_field : 0, a->number, a->link_type == 2 ? &a->input_field : 0, ta_skip ) & 255 ) == 0 )
          goto B15;
        else
          current.anchors_this_group++;
          if ( curlink >= 0 )
          {
            if ( curlink >= 0 && a )
            {
              if ( same_anchor_or_field( links[ curlink ].anchor_number, links[ curlink ].type == 1 ? links[ curlink ].l_form : 0, a->number, a->link_type == 2 ? &a->input_field : 0, ta_skip ) & 255 )
              {
                if ( direction == -1 )
                {
                  group_to_go = &previous;
                  break;
                }
                else
                {
                  if ( direction == 0 )
                  {
                    group_to_go = &current;
                    break;
                  }
                }
              }
            }
            if ( direction > 0 && curlink >= 0 && previous )
            {
              if ( same_anchor_or_field( links[ curlink ].anchor_number, links[ curlink ].type == 1 ? links[ curlink ].l_form : 0, previous.anc->number, previous.anc->link_type == 2 ? &previous.anc->input_field : 0, ta_skip ) & 255 )
              {
                group_to_go = &current;
                break;
              }
            }
          }
          else
          {
            if ( HTMainText->top_of_screen <= a->line_num )
            {
              if ( direction < 0 )
              {
                group_to_go = &previous;
                break;
              }
              else
              {
                if ( direction == 0 )
                {
                  if ( previous.anc )
                  {
                    group_to_go = &previous;
                    break;
                  }
                  else
                  {
                    group_to_go = &current;
                    break;
                  }
                }
                else
                {
                  group_to_go = &current;
                  break;
                }
              }
            }
          }
      }
B15:;
      previous.anc = current.anc;
      previous.prev_anchor_line = current.prev_anchor_line;
      previous.anchors_this_line = current.anchors_this_line;
      previous.anchors_this_group = current.anchors_this_group;
      current.anc = a;
      current.prev_anchor_line = prev_prev_anchor_line;
      current.anchors_this_line = anchors_this_line;
      current.anchors_this_group = 1;
    }
    a = &a->next;
  }
  if ( group_to_go == 0 && curlink < 0 && direction <= 0 )
    group_to_go = &current;
  if ( group_to_go )
  {
    a = &group_to_go->anc->next;
    if ( a )
    {
      int max_offset;
      if ( a->line_num < HTMainText->top_of_screen && HTMainText->top_of_screen - display_lines <= a->line_num && ( ( curlink < 0 && group_to_go->anchors_this_group == 1 ) || ( direction < 0 && group_to_go != current.anc && current && HTMainText->top_of_screen <= current.anc->line_num && group_to_go->anchors_this_group == 1 ) || ( a->next && HTMainText->top_of_screen <= a->line_num ) ) )
      {
        return 16;
      }
      if ( a->line_num <= display_lines )
        max_offset = 0;
      else
      if ( a->line_num < HTMainText->top_of_screen )
      {
        int screensback = ( display_lines + ( HTMainText->top_of_screen - a->line_num ) + -1 ) / display_lines;
        max_offset = a->line_num + ( ( screensback * display_lines ) - HTMainText->top_of_screen );
      }
      else
      if ( HTMainText->Lines - a->line_num <= display_lines )
        max_offset = a->line_num + display_lines + ~HTMainText->Lines;
      else
      if ( HTMainText->top_of_screen + display_lines <= a->line_num )
      {
        int screensahead = ( a->line_num - HTMainText->top_of_screen ) / display_lines;
        max_offset = a->line_num - HTMainText->top_of_screen - ( screensahead * display_lines );
      }
      else
        max_offset = 3;
      if ( max_offset < 0 )
        max_offset = 0;
      else
      if ( display_lines <= max_offset )
        max_offset = display_lines + -1;
      go_line[0] = a->line_num - max_offset;
      if ( go_line[0] <= group_to_go->prev_anchor_line )
        go_line[0] = group_to_go->prev_anchor_line + 1;
      if ( go_line[0] < 0 )
        go_line[0] = 0;
      if ( linknum )
        linknum[0] = group_to_go->anchors_this_line + -1;
      return 8;
    }
  }
  return 0;
}
BOOLEAN HText_getFirstTargetInLine( HText *text, int line_num, BOOLEAN utf_flag, int *offset, int *tLen, char **data, char *target )
{
  HTLine *line;
  char *LineData;
  int LineOffset, HitOffset, LenNeeded, i;
  char *cp;
  if ( text == 0 || line_num < 0 || text->Lines < line_num || target == 0 || target[0] == 0 )
  {
  }
  i = 0;
  line = &text->last_line->next;
  for ( ; i < line_num && text->last_line != line;  )
  {
    if ( line->next == 0 )
    {
      break;
    }
    i++;
    line = &line->next;
  }
  if ( line == 0 && line->data[0] )
  {
  }
  LineData = &line->data[0];
  LineOffset = line->offset;
  cp = case_sensitive ? LYno_attr_mbcs_strstr( LineData, target, utf_flag, 1, &HitOffset, &LenNeeded ) : LYno_attr_mbcs_case_strstr( LineData, target, utf_flag, 1, &HitOffset, &LenNeeded );
  if ( cp && LineOffset + LenNeeded <= ( LYwideLines ? 1014 : LYcols ) )
  {
    offset[0] = LineOffset + HitOffset;
    tLen[0] = LenNeeded - HitOffset;
    HTSACopy( data, cp );
    remove_special_attr_chars( data[0] );
  }
  return 1;
}
int HText_getNumOfLines( void )
{
  return 0;
}
int HText_getNumOfBytes( void )
{
  int result = -1;
  HTLine *line = 0;
  if ( HTMainText )
  {
    line = &HTMainText->last_line->next;
    for ( ; HTMainText->last_line != line;  )
    {
      result = result + strlen( &line->data[0] ) + 1;
      line = &line->next;
    }
  }
  return result;
}
char *HText_getTitle( void )
{
  return 0;
}
char *HText_getStyle( void )
{
  return 0;
}
char *HText_getSugFname( void )
{
  return 0;
}
void HTCheckFnameForCompression( char **fname, HTParentAnchor *anchor, BOOLEAN strip_ok )
{
  char *fn = fname;
  char *dot = 0;
  char *cp = 0;
  char *suffix = "";
  CompressFileType method;
  CompressFileType second;
  if ( fn && anchor )
  {
    fn = LYPathLeaf( fn );
    if ( fn )
    {
      method = HTContentToCompressType( anchor );
      if ( method || strip_ok )
      {
        dot = strrchr( fn, '.' );
        if ( dot && strcasecomp( dot, ".tgz" ) == 0 )
        {
          if ( method == cftNone )
          {
            memcpy( dot, ".tar", 5 );
          }
        }
        else
        {
          dot = strrchr( fn, '.' );
          if ( dot )
          {
            int rootlen = 0;
            if ( HTCompressFileType( fn, ".", &rootlen ) )
            {
              if ( method == cftNone )
              {
                dot = 0;
              }
            }
            else
            {
              second = HTCompressFileType( fn, "-_", &rootlen );
              if ( second )
              {
                cp = &fn[ rootlen ];
                if ( method == cftNone )
                {
                  if ( dot == cp )
                    cp = &cp[ -1 ];
                  cp = 0;
                }
                else
                {
                  cp = '.';
                  if ( second == cftCompress )
                  {
                    LYUpperCase( cp );
                  }
                  else
                  {
                    LYLowerCase( cp );
                  }
                }
              }
            }
          }
          suffix = HTCompressTypeToSuffix( method );
          if ( suffix == 0 )
          {
            return;
          }
          if ( dot == 0 )
          {
            HTSACat( fname, suffix );
          }
          else
          {
            dot++;
            if ( dot == 0 )
            {
              HTSACat( fname, &suffix );
            }
            else
            {
              HTSACat( fname, suffix );
            }
          }
        }
      }
    }
  }
  return;
}
char *HText_getLastModified( void )
{
  return 0;
}
char *HText_getDate( void )
{
  return 0;
}
char *HText_getServer( void )
{
  return 0;
}
void HText_pageDisplay( int line_num, char *target )
{
  if ( ( debug_display_partial || LYTraceLogFP ) && WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "GridText: HText_pageDisplay at line %d started\n", line_num );
  }
  if ( display_partial )
  {
    int stop_before = -1;
    if ( HTMainText && HTMainText->stbl )
    {
      stop_before = Stbl_getStartLineDeep( &HTMainText->stbl );
    }
    HText_trimHightext( HTMainText, 0, stop_before );
  }
  display_page( HTMainText, line_num + -1, target );
  if ( display_partial && debug_display_partial )
    LYSleepMsg( );
  is_www_index = HTAnchor_isIndex( HTMainAnchor );
  if ( ( debug_display_partial || LYTraceLogFP ) && WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "GridText: HText_pageDisplay finished\n" );
  }
  return;
}
BOOLEAN HText_pageHasPrevTarget( void )
{
  return ( HTMainText ? HTMainText->page_has_target : 0 );
}
int HText_closestAnchor( HText *text, int offset )
{
  int result = -1;
  int absdiff = 0;
  int newdiff;
  TextAnchor *Anchor_ptr = 0;
  TextAnchor *closest = 0;
  Anchor_ptr = &text->first_anchor;
  for ( ; Anchor_ptr;  )
  {
    if ( Anchor_ptr->sgml_offset == offset )
    {
      result = Anchor_ptr->number;
      break;
    }
    else
    {
      newdiff = ( Anchor_ptr->sgml_offset - offset ) ^ ( ( Anchor_ptr->sgml_offset - offset ) >> 31 );
      newdiff -= ( Anchor_ptr->sgml_offset - offset ) >> 31;
      if ( absdiff == 0 || newdiff < absdiff )
      {
        absdiff = newdiff;
        closest = Anchor_ptr;
      }
      Anchor_ptr = &Anchor_ptr->next;
    }
  }
  if ( result < 0 && closest )
  {
    result = closest->number;
  }
  return result;
}
int HText_locateAnchor( HText *text, int anchor_number )
{
  int result = -1;
  TextAnchor *Anchor_ptr = 0;
  Anchor_ptr = &text->first_anchor;
  for ( ; Anchor_ptr;  )
  {
    if ( Anchor_ptr->number == anchor_number )
    {
      result = Anchor_ptr->sgml_offset;
      break;
    }
    else
    {
      Anchor_ptr = &Anchor_ptr->next;
    }
  }
  return result;
}
BOOLEAN anchor_is_numbered( TextAnchor *Anchor_ptr )
{
  BOOLEAN result = 0;
  if ( Anchor_ptr->show_anchor && ( ( ( Anchor_ptr->link_type & 1 ) ^ 1 ) & 255 ) == 0 )
  {
    result = 1;
  }
  else
  if ( Anchor_ptr->link_type == 2 && Anchor_ptr->input_field->type != 8 )
  {
    result = 1;
  }
  return result;
}
int HText_getAbsLineNumber( HText *text, int anchor_number )
{
  int result = -1;
  if ( anchor_number >= 0 && text )
  {
    TextAnchor *Anchor_ptr = 0;
    Anchor_ptr = &text->first_anchor;
    for ( ; Anchor_ptr;  )
    {
      if ( ( anchor_is_numbered( Anchor_ptr ) & 255 ) && Anchor_ptr->number == anchor_number )
      {
        result = Anchor_ptr->line_num;
        break;
      }
      else
      {
        Anchor_ptr = &Anchor_ptr->next;
      }
    }
  }
  return result;
}
int HText_anchorRelativeTo( HText *text, int top_lineno, int anchor_number )
{
  int result = 0;
  int from_top = 0;
  TextAnchor *Anchor_ptr = 0;
  Anchor_ptr = &text->first_anchor;
  for ( ; Anchor_ptr;  )
  {
    if ( Anchor_ptr->number == anchor_number )
    {
      result = from_top;
      break;
    }
    else
    {
      if ( ( anchor_is_numbered( Anchor_ptr ) & 255 ) && top_lineno <= Anchor_ptr->line_num )
        from_top++;
      Anchor_ptr = &Anchor_ptr->next;
    }
  }
  return result;
}
int HText_LinksInLines( HText *text, int line_num, int Lines )
{
  int total = 0;
  int start = line_num + -1;
  int end = start + Lines;
  TextAnchor *Anchor_ptr = 0;
  if ( text == 0 )
  {
    return total;
  }
  Anchor_ptr = &text->first_anchor;
  for ( ; Anchor_ptr && Anchor_ptr->line_num <= end;  )
  {
    if ( start <= Anchor_ptr->line_num && Anchor_ptr->line_num < end && Anchor_ptr->show_anchor && ( Anchor_ptr->link_type != 2 || Anchor_ptr->input_field->type != 8 ) )
      total++;
    Anchor_ptr = &Anchor_ptr->next;
  }
  return total;
}
void HText_setStale( HText *text )
{
  text->stale = 1;
  return;
}
void HText_refresh( HText *text )
{
  if ( text->stale )
  {
    display_page( text, text->top_of_screen, "" );
  }
  return;
}
int HText_sourceAnchors( HText *text )
{
  return -1;
}
BOOLEAN HText_canScrollUp( HText *text )
{
  return text->top_of_screen != 0;
}
BOOLEAN HText_canScrollDown( void )
{
  int eax;
  HText *text = HTMainText;
  return 0;
}
void HText_scrollTop( HText *text )
{
  display_page( text, ebp_20, ebp_20 );
  return;
}
void HText_scrollDown( HText *text )
{
  display_page( text, text->top_of_screen + display_lines, "" );
  return;
}
void HText_scrollUp( HText *text )
{
  display_page( text, text->top_of_screen - display_lines, "" );
  return;
}
void HText_scrollBottom( HText *text )
{
  display_page( text, text->Lines - display_lines, "" );
  return;
}
BOOLEAN HText_select( HText *text )
{
  int eax;
  if ( text != HTMainText )
  {
    if ( text )
      text->page_has_target = 0;
    ResetPartialLinenos( text );
    ResetPartialLinenos( HTMainText );
    if ( HTMainText )
    {
      if ( ( HText_hasUTF8OutputSet( HTMainText ) & 255 ) && ( HTLoadedDocumentEightbit( ) & 255 ) && LYCharSet_UC[ current_char_set ].enc == 7 )
        text->had_utf8 = HTMainText->has_utf8;
      else
        text->had_utf8 = 0;
      HTMainText->has_utf8 = 0;
      text->has_utf8 = 0;
    }
    HTMainText = text;
    HTMainAnchor = &text->node_anchor->parent->parent;
    if ( loaded_texts && ( HTList_removeObject( loaded_texts, (void*)text ) & 255 ) )
    {
      HTList_addObject( loaded_texts, (void*)text );
    }
  }
  return 1;
}
BOOLEAN HText_POSTReplyLoaded( DocInfo *doc )
{
  HText *text = 0;
  HTList *cur = loaded_texts;
  bstring *post_data;
  char *address;
  BOOLEAN is_head;
  if ( cur == 0 || doc == 0 )
  {
  }
  else
  {
    post_data = &doc->post_data;
    if ( post_data )
    {
      address = &doc->address;
      if ( address == 0 )
        goto B6;
      else
      {
        is_head = doc->isHEAD;
        do
        {
          if ( cur )
          {
            cur = &cur->next;
            text = 0;
            if ( text == 0 )
            {
              break;
            }
            else
            {
            }
          }
          text = 0;
        }
        while ( text->node_anchor->parent->parent == 0 || text->temp_line->base.styles == 0 || !( HTSABEql( post_data, &text->temp_line->base.styles[0].(null) ) & 255 ) || text->temp_line->base.offset == 0 || strcmp( address, &text->temp_line->base.offset ) || text->temp_line->data[57] != is_head );
      }
    }
B6:;
  }
  return 1;
}
BOOLEAN HTFindPoundSelector( char *selector )
{
  TextAnchor *a;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "FindPound: searching for \"%s\"\n", selector );
  }
  a = &HTMainText->first_anchor;
  for ( ; a;  )
  {
    if ( a->anchor && a->anchor->tag && strcmp( &a->anchor->tag, selector ) == 0 )
    {
      www_search_result = a->line_num + 1;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "FindPound: Selecting anchor [%d] at line %d\n", a->number, www_search_result );
      }
      if ( strcmp( selector, LYToolbarName ) == 0 )
        www_search_result += -1;
      break;
    }
    else
    {
      a = &a->next;
    }
  }
  return 0;
}
BOOLEAN HText_selectAnchor( HText *text, HTChildAnchor *anchor )
{
  TextAnchor *a = &text->first_anchor;
  for ( ; a && a->anchor != anchor;  )
  {
    a = &a->next;
  }
  if ( a == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HText: No such anchor in this text!\n" );
    }
  }
  else
  {
    if ( text != HTMainText )
    {
      HTMainText = text;
      HTMainAnchor = &text->node_anchor->parent->parent;
    }
  {
    int l = a->line_num;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HText: Selecting anchor [%d] at line %d\n", a->number, l );
    }
    if ( !text->stale && text->top_of_screen <= l && l < text->top_of_screen + display_lines + 1 )
    {
    }
    www_search_result = l - ( display_lines / 3 );
  }
  }
  return 1;
}
void HText_applyStyle( HText *me, HTStyle *style )
{
  return;
}
void HText_updateStyle( HText *me, HTStyle *style )
{
  return;
}
HTStyle *HText_selectionStyle( HText *me, HTStyleSheet *sheet )
{
  return 0;
}
void HText_replaceSel( HText *me, char *aString, HTStyle *aStyle )
{
  return;
}
void HTextApplyToSimilar( HText *me, HTStyle *style )
{
  return;
}
void HTextSelectUnstyled( HText *me, HTStyleSheet *sheet )
{
  return;
}
void HText_unlinkSelection( HText *me )
{
  return;
}
HTAnchor *HText_referenceSelected( HText *me )
{
  return 0;
}
int HText_getTopOfScreen( void )
{
  int eax;
  HText *text = HTMainText;
  return 0;
}
int HText_getLines( HText *text )
{
  return text->Lines;
}
int HText_getPreferredTopLine( HText *text, int line_number )
{
  int last_screen = text->Lines + ( 2 - display_lines );
  if ( text->Lines < display_lines )
  {
    line_number = 0;
  }
  else
  if ( text->Lines < line_number )
  {
    line_number = last_screen;
  }
  else
  if ( line_number < 0 )
  {
    line_number = 0;
  }
  return line_number;
}
HTAnchor *HText_linkSelTo( HText *me, HTAnchor *anchor )
{
  return 0;
}
void HTSearchQueries_free( void )
{
  LYFreeStringList( search_queries );
  search_queries = 0;
  return;
}
void HTAddSearchQuery( char *query )
{
  char *new_query = 0;
  char *old;
  HTList *cur;
  if ( query && query[0] )
  {
    HTSACopy( &new_query, query );
    if ( search_queries == 0 )
    {
      search_queries = HTList_new( );
      HTList_addObject( search_queries, (void*)new_query );
    }
    else
    {
      cur = search_queries;
      do
      {
        if ( cur )
        {
          cur = &cur->next;
          old = 0;
          if ( old )
          {
          }
          HTList_addObject( search_queries, (void*)new_query );
          break;
        }
        old = 0;
      }
      while ( strcmp( old, new_query ) );
      HTList_removeObject( search_queries, (void*)old );
      if ( old )
      {
        free( old );
        old = 0;
      }
    }
  }
  return;
}
int do_www_search( DocInfo *doc )
{
  int eax;
  char searchstring[256], temp[256], *cp, *tmpaddress = 0;
  int ch;
  RecallType recall;
  int QueryTotal;
  int QueryNum;
  BOOLEAN PreviousSearch = 0;
  cp = strchr( &doc->address, '?' );
  if ( cp )
  {
    PreviousSearch = 1;
    cp++;
    LYstrncpy( searchstring, cp, 255 );
    cp = searchstring;
    for ( ; cp[0] == 0; cp++ )
    {
      if ( cp[0] == '+' )
        cp[0] = ' ';
      // cp++;
    }
  }
  else
  {
    searchstring[0] = 0;
    temp[0] = 0;
  }
  if ( searchstring[0] == 0 )
  {
    if ( HTMainAnchor->isIndexPrompt )
    {
      mustshow = 1;
      statusline( &HTMainAnchor->isIndexPrompt );
    }
    else
    {
      mustshow = 1;
      statusline( gettext( "Enter a database query: " ) );
    }
  }
  else
  {
    mustshow = 1;
    statusline( gettext( "Edit the current query: " ) );
  }
  QueryTotal = 0;
  recall = NORECALL;
  QueryNum = QueryTotal;
  while ( ch < 0 || searchstring[0] == 0 || ch == 256 || ch == 257 )
  {
    if ( recall && ch == 256 )
    {
      if ( PreviousSearch )
      {
        QueryNum = 1;
        PreviousSearch = 0;
      }
      else
        QueryNum++;
      if ( QueryTotal <= QueryNum )
        QueryNum = 0;
      cp = (char*)HTList_objectAt( search_queries, QueryNum );
      if ( cp )
      {
        LYstrncpy( searchstring, cp, 255 );
        if ( temp[0] && strcmp( temp, searchstring ) == 0 )
        {
          mustshow = 1;
          statusline( gettext( "Edit the current query: " ) );
        }
        else
        {
          if ( ( temp[0] && QueryTotal == 2 ) || ( temp[0] == 0 && QueryTotal == 1 ) )
          {
            mustshow = 1;
            statusline( gettext( "Edit the previous query: " ) );
          }
          else
          {
            mustshow = 1;
            statusline( gettext( "Edit a previous query: " ) );
          }
        }
      }
    }
    else
    {
      if ( recall && ch == 257 )
      {
        if ( PreviousSearch )
        {
          QueryNum = QueryTotal + -1;
          PreviousSearch = 0;
        }
        else
          QueryNum += -1;
        if ( QueryNum < 0 )
          QueryNum = QueryTotal + -1;
        cp = (char*)HTList_objectAt( search_queries, QueryNum );
        if ( cp )
        {
          LYstrncpy( searchstring, cp, 255 );
          if ( temp[0] && strcmp( temp, searchstring ) == 0 )
          {
            mustshow = 1;
            statusline( gettext( "Edit the current query: " ) );
          }
          else
          {
            if ( ( temp[0] && QueryTotal == 2 ) || ( temp[0] == 0 && QueryTotal == 1 ) )
            {
              mustshow = 1;
              statusline( gettext( "Edit the previous query: " ) );
            }
            else
            {
              mustshow = 1;
              statusline( gettext( "Edit a previous query: " ) );
            }
          }
        }
      }
    }
    HTInfoMsg( gettext( "Cancelled!!!" ) );
    return 3;
  }
  LYTrimLeading( searchstring );
  if ( searchstring[0] == 0 )
  {
    HTInfoMsg( gettext( "Cancelled!!!" ) );
    return 3;
  }
  else
  {
    LYTrimTrailing( searchstring );
    if ( LYforce_no_cache == 0 && strcmp( temp, searchstring ) == 0 )
    {
      HTUserMsg( gettext( "Use Control-R to resubmit the current query." ) );
      return 3;
    }
    else
    {
      HTAddSearchQuery( searchstring );
      cp = strchr( &doc->address, '?' );
      if ( cp )
        cp[0] = 0;
      HTSACopy( &tmpaddress, &doc->address );
      HTSACat( &tmpaddress, "?" );
      HTSACat( &tmpaddress, searchstring );
      user_message( gettext( "Getting %s" ), tmpaddress );
      LYSyslog( tmpaddress );
      if ( tmpaddress )
      {
        free( tmpaddress );
        tmpaddress = 0;
      }
      if ( cp )
        cp[0] = '?';
      if ( HTSearch( searchstring, HTMainAnchor ) & 255 )
      {
        char *cp_freeme = 0;
        if ( traversal )
        {
          cp_freeme = stub_HTAnchor_address( (int)( &HTMainAnchor->parent->parent ) );
        }
        else
        {
          cp_freeme = HTAnchor_address( (int)( &HTMainAnchor->parent->parent ) );
        }
        HTSACopy( &doc->address, cp_freeme );
        if ( cp_freeme )
        {
          free( cp_freeme );
          cp_freeme = 0;
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "\ndo_www_search: newfile: %s\n", &doc->address );
        }
        return 1;
      }
      else
        return 0;
    }
  }
}
void write_offset( FILE *fp, HTLine *line )
{
  int i;
  if ( line->data[0] )
  {
    i = 0;
    for ( ; i < line->offset; i++ )
    {
      fputc( 32, fp );
      // i++;
    }
  }
  return;
}
void write_hyphen( FILE *fp )
{
  if ( dump_output_immediately && LYRawMode && LYlowest_eightbit[ current_char_set ] <= 173 && ( LYCharSet_UC[ current_char_set ].enc == 2 || ( LYCharSet_UC->codepage & 128 ) ? 1 : 0 ) )
  {
    fputc( 173, fp );
  }
  else
  {
    fputc( 45, fp );
  }
  return;
}
int TrimmedLength( char *string )
{
  int result = strlen( string );
  if ( HTisDocumentSource( ) == 0 )
  {
    int adjust;
    unsigned int ch;
    return result;
  }
}
void print_wwwfile_to_fd( FILE *fp, BOOLEAN is_email, BOOLEAN is_reply )
{
  int i;
  int first = 1;
  int limit;
  HTLine *line;
  HText *text = HTMainText;
  BOOLEAN in_b = 0;
  BOOLEAN in_u = 0;
  BOOLEAN bs;
  *(int*)&bs = 0;
  if ( HTMainText )
  {
    line = &HTMainText->last_line->next;
    while ( 1 )
    {
      if ( first )
      {
        first = 0;
        if ( is_reply )
          fputc( 62, fp );
        else
        if ( is_email && strncmp( &line->data[0], "From ", 5 ) == 0 )
          fputc( 62, fp );
      }
      else
      if ( line->data[0] != 8 )
      {
        fputc( 10, fp );
        if ( is_reply )
          fputc( 62, fp );
        else
        if ( is_email && strncmp( &line->data[0], "From ", 5 ) == 0 )
          fputc( 62, fp );
      }
      write_offset( fp, line );
      limit = TrimmedLength( &line->data[0] );
      i = 0;
      for ( ; i < limit;  )
      {
        int ch = line->data[ i ];
        if ( ch <= 2 || ch > 8 )
        {
          if ( in_b )
          {
            fputc( ch, fp );
            fputc( 8, fp );
            fputc( ch, fp );
          }
          else
          {
            if ( in_u )
            {
              fputc( 95, fp );
              fputc( 8, fp );
              fputc( ch, fp );
            }
            else
              fputc( ch, fp );
          }
        }
        else
        if ( ch == 7 && limit <= i + 1 )
          write_hyphen( fp );
        else
        if ( dump_output_immediately && use_underscore )
        {
          if ( ch + -3 <= 1 )
            fputc( 95, fp );
        }
        else
        if ( bs )
        {
          switch ( ch )
          {
          case 3:
            if ( in_b == 0 )
              in_u = 1;
            break;
          case 4:
            in_u = 0;
            break;
          case 5:
            if ( in_u )
              in_u = 0;
            in_b = 1;
            break;
          case 6:
            in_b = 0;
            break;
          }
        }
        i++;
      }
      if ( HTMainText->last_line == line )
      {
        fputc( 10, fp );
        break;
      }
      else
      {
        line = &line->next;
      }
    }
  }
  return;
}
void print_crawl_to_fd( FILE *fp, char *thelink, char *thetitle )
{
  int i;
  int first = 1;
  int limit;
  HTLine *line;
  if ( HTMainText )
  {
    line = &HTMainText->last_line->next;
    fprintf( fp, "THE_URL:%s\n", thelink );
    if ( thetitle )
    {
      fprintf( fp, "THE_TITLE:%s\n", thetitle );
      while ( first || line->data[0] == 8 )
      {
        first = 0;
        write_offset( fp, line );
        limit = TrimmedLength( &line->data[0] );
        i = 0;
        for ( ; i < limit;  )
        {
          int ch = line->data[ i ];
          if ( ch <= 2 || ch > 8 )
            fputc( ch, fp );
          else
          if ( ch == 7 && limit <= i + 1 )
            write_hyphen( fp );
          i++;
        }
        if ( HTMainText->last_line == line )
        {
          fputc( 10, fp );
          if ( no_list == 0 && ( keypad_mode == 1 || keypad_mode == 2 ) )
          {
            printlist( fp, 0 );
            break;
          }
        }
        else
        {
          line = &line->next;
        }
      }
      fputc( 10, fp );
      first = 0;
      write_offset( fp, line );
      limit = TrimmedLength( &line->data[0] );
      i = 0;
    }
  }
  return;
}
void adjust_search_result( DocInfo *doc, int tentative_result, int start_line )
{
  if ( tentative_result > 0 )
  {
    int anch_line = -1;
    TextAnchor *a;
    int nl_closest = -1;
    int goal = 4;
    int max_offset;
    BOOLEAN on_screen;
    *(int*)&on_screen = 0;
    if ( goal <= 0 )
      goal = 1;
    else
    if ( display_lines < goal )
      goal = display_lines;
    max_offset = goal + -1;
    if ( on_screen && nlinks > 0 )
    {
      int i = 0;
      for ( ; i < nlinks; i++ )
      {
        if ( doc->line + links[ i ].ly + -1 <= tentative_result )
          nl_closest = i;
        if ( tentative_result <= doc->line + links[ i ].ly + -1 )
          break;
        else
        {
          // i++;
        }
      }
      if ( nl_closest >= 0 && tentative_result == doc->line + links[ nl_closest ].ly + -1 )
      {
        www_search_result = doc->line;
        doc->link = nl_closest;
      }
    }
    a = &HTMainText->first_anchor;
    for ( ; a && a->line_num <= tentative_result + -1;  )
    {
      anch_line = a->line_num + 1;
      a = &a->next;
    }
    if ( anch_line >= 0 && tentative_result - max_offset <= anch_line && ( start_line < anch_line || tentative_result <= HTMainText->top_of_screen ) )
      www_search_result = anch_line;
    else
    if ( tentative_result - start_line > 0 && tentative_result + ~start_line <= max_offset )
      www_search_result = start_line + 1;
    else
    if ( HTMainText->top_of_screen < tentative_result && tentative_result <= start_line && tentative_result <= HTMainText->top_of_screen + goal )
      www_search_result = HTMainText->top_of_screen + 1;
    else
    if ( tentative_result <= goal )
      www_search_result = 1;
    else
      www_search_result = tentative_result - max_offset;
    if ( doc->line == www_search_result && nl_closest >= 0 )
    {
      doc->link = nl_closest;
    }
  }
  return;
}
BOOLEAN anchor_has_target( TextAnchor *a, char *target )
{
  OptionType *option;
  char *stars = 0, *sp;
  char *cp;
  int count = 0;
  while ( cp == 0 )
  {
    if ( ( case_sensitive ? LYno_attr_char_strstr( cp, target ) : LYno_attr_char_case_strstr( cp, target ) ) != 0 )
    {
      break;
    }
    else
    {
      count++;
    }
  }
  if ( a->input_field && a->input_field->value && a->input_field->type != 8 )
  {
    if ( a->input_field->type == 2 )
    {
      if ( ( case_sensitive ? LYno_attr_char_strstr( &a->input_field->value, target ) : LYno_attr_char_case_strstr( &a->input_field->value, target ) ) != 0 )
      {
        return 0;
      }
      else
      {
        HTSACopy( &stars, &a->input_field->value );
        sp = stars;
        for ( ; sp[0]; sp++ )
        {
          sp[0] = '*';
          // sp++;
        }
        if ( ( case_sensitive ? LYno_attr_char_strstr( stars, target ) : LYno_attr_char_case_strstr( stars, target ) ) != 0 )
        {
          if ( stars )
          {
            free( stars );
            stars = 0;
          }
          return 0;
        }
        else
        if ( stars )
        {
          free( stars );
          stars = 0;
        }
      }
    }
    else
    {
      if ( a->input_field->type == 7 )
      {
        option = &a->input_field->select_list;
        for ( ; option;  )
        {
          if ( ( case_sensitive ? LYno_attr_char_strstr( &option->name[0], target ) : LYno_attr_char_case_strstr( &option->name[0], target ) ) != 0 )
          {
            break;
          }
          else
          {
            option = &option->next;
          }
        }
      }
      else
      {
        if ( a->input_field->type == 4 )
        {
          if ( a->input_field->num_value )
            cp = checked_radio;
          else
            cp = unchecked_radio;
          if ( ( case_sensitive ? LYno_attr_char_strstr( cp, target ) : LYno_attr_char_case_strstr( cp, target ) ) != 0 )
          {
            return 0;
          }
        }
        else
        {
          if ( a->input_field->type == 3 )
          {
            if ( a->input_field->num_value )
              cp = checked_box;
            else
              cp = unchecked_box;
            if ( ( case_sensitive ? LYno_attr_char_strstr( cp, target ) : LYno_attr_char_case_strstr( cp, target ) ) != 0 )
            {
              return 0;
            }
          }
          else
          {
            if ( ( case_sensitive ? LYno_attr_char_strstr( &a->input_field->value, target ) : LYno_attr_char_case_strstr( &a->input_field->value, target ) ) != 0 )
            {
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}
TextAnchor *line_num_to_anchor( int line_num )
{
  TextAnchor *a;
  if ( HTMainText )
  {
    a = &HTMainText->first_anchor;
    for ( ; a && a->line_num < line_num;  )
    {
      a = &a->next;
    }
  }
  else
  {
    a = 0;
  }
  return a;
}
int line_num_in_text( HText *text, HTLine *line )
{
  int result = 1;
  HTLine *temp = &text->last_line->next;
  for ( ; temp != line; result++ )
  {
    temp = &temp->next;
    // result++;
  }
  return result;
}
TextAnchor *get_prev_anchor( TextAnchor *a )
{
  TextAnchor *p, *q;
  if ( a->prev == 0 )
  {
    p = &HTMainText->first_anchor;
    if ( p )
    {
      while ( q = &p->next, q )
      {
        q->prev = p;
        p = q;
      }
    }
  }
  return &a->prev;
}
int www_search_forward( int start_line, DocInfo *doc, char *target, HTLine *line, int count )
{
  int wrapped = 0;
  TextAnchor *a = line_num_to_anchor( count + -1 );
  int tentative_result = -1;
  while ( 1 )
  {
    if ( a && a->line_num == count + -1 )
    {
      if ( a->show_anchor && ( a->link_type != 2 || a->input_field->type != 8 ) && ( anchor_has_target( a, target ) & 255 ) )
        break;
      a = &a->next;
    }
    else
    {
      if ( ( case_sensitive ? LYno_attr_char_strstr( &line->data[0], target ) : LYno_attr_char_case_strstr( &line->data[0], target ) ) != 0 )
      {
        tentative_result = count;
        if ( tentative_result <= 0 )
        {
          return 0;
        }
        adjust_search_result( doc, tentative_result, start_line );
        return 0;
      }
      else
      if ( ( start_line == count && wrapped ) || wrapped > 1 )
      {
        HTUserMsg2( gettext( "'%s' not found!" ), target );
        return -1;
      }
      if ( HTMainText->last_line == line )
      {
        count = 0;
        wrapped++;
      }
      line = &line->next;
      count++;
    }
  }
  adjust_search_result( doc, count, start_line );
  return 1;
}
int www_search_backward( int start_line, DocInfo *doc, char *target, HTLine *line, int count )
{
  int wrapped = 0;
  TextAnchor *a = line_num_to_anchor( count + -1 );
  int tentative_result = -1;
  while ( 1 )
  {
    if ( a && a->line_num == count + -1 )
    {
      if ( a->show_anchor && ( a->link_type != 2 || a->input_field->type != 8 ) && ( anchor_has_target( a, target ) & 255 ) )
        break;
      a = get_prev_anchor( a );
    }
    else
    {
      if ( ( case_sensitive ? LYno_attr_char_strstr( &line->data[0], target ) : LYno_attr_char_case_strstr( &line->data[0], target ) ) != 0 )
      {
        tentative_result = count;
        if ( tentative_result <= 0 )
        {
          return 0;
        }
        adjust_search_result( doc, tentative_result, start_line );
        return 0;
      }
      else
      if ( ( start_line == count && wrapped ) || wrapped > 1 )
      {
        HTUserMsg2( gettext( "'%s' not found!" ), target );
        return -1;
      }
      if ( HTMainText->last_line->next == line )
      {
        count = line_num_in_text( HTMainText, &HTMainText->last_line ) + 1;
        wrapped++;
      }
      line = &line->prev;
      count += -1;
    }
  }
  adjust_search_result( doc, count, start_line );
  return 1;
}
void www_user_search( int start_line, DocInfo *doc, char *target, int direction )
{
  HTLine *line;
  int count;
  if ( HTMainText )
  {
    line = &HTMainText->last_line->next;
    if ( start_line + direction > 0 )
    {
      count = 1;
      for ( ; count < start_line + direction; count++ )
      {
        if ( HTMainText->last_line == line )
        {
          line = &HTMainText->last_line->next;
          count = 1;
          break;
        }
        else
        {
          line = &line->next;
          // count++;
        }
      }
    }
    else
    {
      line = &HTMainText->last_line;
      count = line_num_in_text( HTMainText, line );
    }
    if ( direction >= 0 )
    {
      www_search_forward( start_line, doc, target, line, count );
    }
    else
    {
      www_search_backward( start_line, doc, target, line, count );
    }
  }
  return;
}
void user_message( char *message, char *argument )
{
  if ( message == 0 )
  {
    mustshow = 0;
  }
  else
  {
    char *temp = 0;
    HTSprintf0( &temp, message, "", "", "", "" );
    statusline( temp );
    if ( temp )
    {
      free( temp );
    }
  }
  return;
}
char *HText_getOwner( void )
{
  return 0;
}
void HText_setMainTextOwner( char *owner )
{
  if ( HTMainText )
  {
    HTAnchor_setOwner( &HTMainText->node_anchor->parent->parent, owner );
  }
  return;
}
char *HText_getRevTitle( void )
{
  return 0;
}
char *HText_getContentBase( void )
{
  return 0;
}
char *HText_getContentLocation( void )
{
  return 0;
}
char *HText_getMessageID( void )
{
  return 0;
}
void HTuncache_current_document( void )
{
  if ( HTMainText )
  {
    HTParentAnchor *htmain_anchor = &HTMainText->node_anchor->parent->parent;
    if ( htmain_anchor && ( HTOutputFormat == 0 || WWW_SOURCE != HTOutputFormat ) && htmain_anchor->UCStages )
    {
      free( &htmain_anchor->UCStages );
      htmain_anchor->UCStages = 0;
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "\nHTuncache.. freeing document for '%s'%s\n", "unknown anchor", "" );
    }
    HTList_removeObject( loaded_texts, (void*)HTMainText );
    HText_free( HTMainText );
    HTMainText = 0;
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTuncache.. HTMainText already is NULL!\n" );
  }
  return;
}
BOOLEAN useSourceCache( void )
{
  BOOLEAN result = 0;
  if ( LYCacheSource == 1 )
  {
    result = HTMainAnchor->source_cache_file != 0;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "SourceCache: file-cache%s found\n", " not" );
    }
  }
  return result;
}
BOOLEAN useMemoryCache( void )
{
  BOOLEAN result = 0;
  if ( LYCacheSource == 2 )
  {
    result = HTMainAnchor->source_cache_chunk != 0;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "SourceCache: memory-cache%s found\n", " not" );
    }
  }
  return result;
}
BOOLEAN HTreparse_document( void )
{
  BOOLEAN ok = 0;
  if ( HTMainAnchor == 0 || LYCacheSource == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTreparse_document returns FALSE\n" );
    }
  }
  else
  {
    if ( useSourceCache( ) & 255 )
    {
      FILE *fp;
      HTFormat format;
      int ret;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "SourceCache: Reparsing file %s\n", &HTMainAnchor->source_cache_file );
      }
      if ( ( HTOutputFormat == 0 || WWW_SOURCE != HTOutputFormat ) && HTMainAnchor->UCStages )
      {
        free( &HTMainAnchor->UCStages );
        HTMainAnchor->UCStages = 0;
      }
      if ( HTMainAnchor->content_type )
      {
        format = HTAtom_for( &HTMainAnchor->content_type );
      }
      else
      {
        format = HTFileFormat( &HTMainAnchor->source_cache_file, 0, 0 );
        format = HTCharsetFormat( format, HTMainAnchor, UCLYhndl_for_unspec );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "  Content type is \"%s\"\n", &format->name );
      }
      fp = fopen64( &HTMainAnchor->source_cache_file, "r" );
      if ( fp == 0 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "  Cannot read file %s\n", &HTMainAnchor->source_cache_file );
        }
        LYRemoveTemp( &HTMainAnchor->source_cache_file );
        if ( HTMainAnchor->source_cache_file )
        {
          free( &HTMainAnchor->source_cache_file );
          HTMainAnchor->source_cache_file = 0;
        }
      }
      else
      {
        if ( HText_HaveUserChangedForms( HTMainText ) & 255 )
        {
          HTAlert( gettext( "Reloading document.  Any form entries will be lost!" ) );
        }
        HTAnchor_setProtocol( HTMainAnchor, (void*)HTFile.name );
        ret = HTParseFile( format, HTOutputFormat, HTMainAnchor, fp, 0 );
        LYCloseInput( fp );
        if ( ret == 206 )
        {
          HTInfoMsg( gettext( "Loading incomplete." ) );
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "SourceCache: `%s' has been accessed, partial content.\n", HTLoadedDocumentURL( ) );
          }
        }
        ok = ret == 200 || ret == 206 ? 1 : 0;
        if ( WWW_TraceFlag == 0 )
        {
        }
        fprintf( TraceFP( ), "Reparse file %s\n", "failed" );
      }
    }
    else
    {
      if ( useMemoryCache( ) & 255 )
      {
        HTFormat format = HTAtom_for( "text/html" );
        int ret;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "SourceCache: Reparsing from memory chunk %p\n", &HTMainAnchor->source_cache_chunk );
        }
        if ( ( HTOutputFormat == 0 || WWW_SOURCE != HTOutputFormat ) && HTMainAnchor->UCStages )
        {
          free( &HTMainAnchor->UCStages );
          HTMainAnchor->UCStages = 0;
        }
        if ( HTMainAnchor->content_type )
        {
          format = HTAtom_for( &HTMainAnchor->content_type );
        }
        else
        {
          format = HTCharsetFormat( format, HTMainAnchor, UCLYhndl_for_unspec );
        }
        if ( HText_HaveUserChangedForms( HTMainText ) & 255 )
        {
          HTAlert( gettext( "Reloading document.  Any form entries will be lost!" ) );
        }
        HTAnchor_setProtocol( HTMainAnchor, (void*)scm.name );
        ret = HTParseMem( format, HTOutputFormat, HTMainAnchor, &HTMainAnchor->source_cache_chunk, 0 );
        ok = ret == 200;
        if ( WWW_TraceFlag == 0 )
        {
        }
        fprintf( TraceFP( ), "Reparse memory %s\n", "failed" );
      }
    }
  }
  return ok;
}
BOOLEAN HTcan_reparse_document( void )
{
  BOOLEAN result = 0;
  if ( HTMainAnchor == 0 || LYCacheSource == 0 )
    result = 0;
  else
  {
    if ( useSourceCache( ) & 255 )
    {
      result = LYCanReadFile( &HTMainAnchor->source_cache_file );
    }
    else
    {
      if ( useMemoryCache( ) & 255 )
        result = 1;
    }
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTcan_reparse_document -&gt; %d\n", result );
  }
  return result;
}
void trace_setting_change( char *name, int prev_setting, int new_setting )
{
  if ( prev_setting != new_setting && WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTdocument_settings_changed: %s setting has changed (was %d, now %d)\n", name, prev_setting, new_setting );
  }
  return;
}
BOOLEAN HTdocument_settings_changed( void )
{
  if ( HTMainText == 0 || ( HTcan_reparse_document( ) & 255 ) == 0 )
  {
  }
  else
  {
    if ( WWW_TraceFlag )
    {
      trace_setting_change( "CLICKABLE_IMAGES", HTMainText->clickable_images, clickable_images );
      trace_setting_change( "PSEUDO_INLINE_ALTS", HTMainText->pseudo_inline_alts, pseudo_inline_alts );
      trace_setting_change( "VERBOSE_IMG", HTMainText->verbose_img, verbose_img );
      trace_setting_change( "RAW_MODE", HTMainText->raw_mode, LYUseDefaultRawMode );
      trace_setting_change( "HISTORICAL_COMMENTS", HTMainText->historical_comments, historical_comments );
      trace_setting_change( "MINIMAL_COMMENTS", HTMainText->minimal_comments, minimal_comments );
      trace_setting_change( "SOFT_DQUOTES", HTMainText->soft_dquotes, soft_dquotes );
      trace_setting_change( "OLD_DTD", HTMainText->old_dtd, Old_DTD );
      trace_setting_change( "KEYPAD_MODE", HTMainText->keypad_mode, keypad_mode );
      if ( ( HTMainText->disp_lines != LYlines || LYwideLines != HTMainText->disp_cols ) && WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTdocument_settings_changed: Screen size has changed (was %dx%d, now %dx%d)\n", HTMainText->disp_cols, HTMainText->disp_lines, LYwideLines ? 1014 : LYcols, LYlines );
      }
    }
  }
  return 0;
}
int HTisDocumentSource( void )
{
  return 0;
}
char *HTLoadedDocumentURL( void )
{
  if ( HTMainText == 0 )
  {
    return "";
  }
  if ( HTMainText->node_anchor->parent->parent && HTMainText->temp_line->base.offset )
  {
    return &HTMainText->temp_line->base.offset;
  }
  return "";
}
bstring *HTLoadedDocumentPost_data( void )
{
  return 0;
}
char *HTLoadedDocumentTitle( void )
{
  if ( HTMainText == 0 )
  {
    return "";
  }
  if ( HTMainText->node_anchor->parent->parent && HTMainText->temp_line->data[24] )
  {
    return &HTMainText->temp_line->data[24];
  }
  return "";
}
BOOLEAN HTLoadedDocumentIsHEAD( void )
{
  if ( HTMainText == 0 )
  {
  }
  else
  if ( HTMainText->node_anchor->parent->parent && HTMainText->temp_line->data[57] )
  {
  }
  else
  {
  }
  return HTMainText->temp_line->data[57];
}
BOOLEAN HTLoadedDocumentIsSafe( void )
{
  if ( HTMainText == 0 )
  {
  }
  else
  if ( HTMainText->node_anchor->parent->parent && HTMainText->temp_line->data[58] )
  {
  }
  else
  {
  }
  return HTMainText->temp_line->data[58];
}
char *HTLoadedDocumentCharset( void )
{
  if ( HTMainText == 0 )
  {
    return 0;
  }
  if ( HTMainText->node_anchor->parent->parent && HTMainText->temp_line->data[8] )
  {
    return &HTMainText->temp_line->data[8];
  }
  return 0;
}
BOOLEAN HTLoadedDocumentEightbit( void )
{
  return ( HTMainText ? HTMainText->have_8bit_chars : 0 );
}
void HText_setNodeAnchorBookmark( char *bookmark )
{
  if ( HTMainText && HTMainText->node_anchor->parent->parent )
  {
    HTAnchor_setBookmark( &HTMainText->node_anchor->parent->parent, bookmark );
  }
  return;
}
char *HTLoadedDocumentBookmark( void )
{
  if ( HTMainText == 0 )
  {
    return 0;
  }
  if ( HTMainText->node_anchor->parent->parent && HTMainText->temp_line->data[0] )
  {
    return &HTMainText->temp_line->data[0];
  }
  return 0;
}
int HText_LastLineSize( HText *text, BOOLEAN IgnoreSpaces )
{
  return text == 0 || text->last_line == 0 || ( text->last_line->size & 65535 ) == 0 ? 0 : HText_TrueLineSize( &text->last_line, text, IgnoreSpaces );
}
BOOLEAN HText_LastLineEmpty( HText *text, BOOLEAN IgnoreSpaces )
{
  return ( text == 0 || text->last_line == 0 || ( text->last_line->size & 65535 ) == 0 ? 1 : HText_TrueEmptyLine( &text->last_line, text, IgnoreSpaces ) );
}
int HText_LastLineOffset( HText *text )
{
  return text == 0 || text->last_line == 0 ? 0 : text->last_line->offset;
}
int HText_PreviousLineSize( HText *text, BOOLEAN IgnoreSpaces )
{
  HTLine *line;
  if ( text == 0 || text->last_line == 0 )
  {
    return 0;
  }
  line = &text->last_line->prev;
  if ( line == 0 )
  {
    return 0;
  }
}
BOOLEAN HText_PreviousLineEmpty( HText *text, BOOLEAN IgnoreSpaces )
{
  HTLine *line;
  if ( text == 0 || text->last_line == 0 )
  {
  }
  line = &text->last_line->prev;
  if ( line == 0 )
  {
  }
  return HText_TrueEmptyLine( line, text, IgnoreSpaces );
}
int HText_TrueLineSize( HTLine *line, HText *text, BOOLEAN IgnoreSpaces )
{
  size_t i;
  int true_size = 0;
  if ( line == 0 || ( line->size & 65535 ) == 0 )
  {
    return 0;
  }
  if ( IgnoreSpaces )
  {
    i = 0;
    for ( ; i < line->size; i++ )
    {
      if ( ( 2 <= line->data[ i ] || line->data[ i ] < 8 ) && ( text == 0 || !text->T.output_utf8 || line->data[ i ] >= 0 || ( line->data[ i ] & 192 ) == 192 ) && !( *(short*)(*(int*)(__ctype_b_loc( )) + ( line->data[ i ] * 2 )) & 8192 ) && line->data[ i ] != 1 && line->data[ i ] != 2 )
        true_size++;
      // i++;
    }
  }
  else
  {
    i = 0;
    for ( ; i < line->size; i++ )
    {
      if ( ( line->data[ i ] <= 2 || 8 < line->data[ i ] ) && ( text == 0 || !text->T.output_utf8 || line->data[ i ] >= 0 || ( line->data[ i ] & 192 ) == 192 ) )
        true_size++;
      // i++;
    }
  }
  return true_size;
}
BOOLEAN HText_TrueEmptyLine( HTLine *line, HText *text, BOOLEAN IgnoreSpaces )
{
  size_t i;
  if ( line == 0 || ( line->size & 65535 ) == 0 )
  {
  }
  else
  {
    if ( IgnoreSpaces )
    {
      i = 0;
      for ( ; i < line->size; i++ )
      {
        if ( ( 2 <= line->data[ i ] || line->data[ i ] < 8 ) && ( text == 0 || !text->T.output_utf8 || line->data[ i ] >= 0 || ( line->data[ i ] & 192 ) == 192 ) && !( *(short*)(*(int*)(__ctype_b_loc( )) + ( line->data[ i ] * 2 )) & 8192 ) && line->data[ i ] != 1 && line->data[ i ] != 2 )
        {
          break;
        }
        else
        {
          // i++;
        }
      }
    }
    else
    {
      i = 0;
      for ( ; i < line->size; i++ )
      {
        if ( ( line->data[ i ] <= 2 || 8 < line->data[ i ] ) && ( text == 0 || !text->T.output_utf8 || line->data[ i ] >= 0 || ( line->data[ i ] & 192 ) == 192 ) )
        {
          break;
        }
        else
        {
          // i++;
        }
      }
    }
  }
  return 0;
}
void HText_NegateLineOne( HText *text )
{
  if ( text )
  {
    text->in_line_1 = 0;
  }
  return;
}
BOOLEAN HText_inLineOne( HText *text )
{
  return 1;
}
void HText_RemovePreviousLine( HText *text )
{
  HTLine *line, *previous;
  if ( text && text->Lines > 1 )
  {
    line = &text->last_line->prev;
    previous = &line->prev;
    previous->next = text->last_line;
    text->last_line->prev = previous;
    text->Lines += -1;
  }
  return;
}
int HText_getCurrentColumn( HText *text )
{
  int column = 0;
  BOOLEAN IgnoreSpaces = 0;
  if ( text )
  {
    column = text->style->leftIndent + HText_LastLineSize( text, IgnoreSpaces ) + text->last_line->offset;
  }
  return column;
}
int HText_getMaximumColumn( HText *text )
{
  int column = LYwideLines ? 1014 : LYcols;
  if ( text )
  {
    column -= text->style->rightIndent;
  }
  return column;
}
void HText_setTabID( HText *text, char *name )
{
  HTTabID *Tab = 0;
  HTList *cur = &text->tabs;
  HTList *last = 0;
  if ( text && name && name[0] )
  {
    if ( cur == 0 )
    {
      text->tabs = HTList_new( );
      cur = &text->tabs;
    }
    else
    {
      while ( 1 )
      {
        if ( cur )
        {
          cur = &cur->next;
          Tab = 0;
          if ( Tab )
          {
            if ( Tab->name[0] && strcmp( &Tab->name[0], name ) == 0 )
              break;
            last = cur;
          }
          else
          {
            if ( last )
              cur = last;
          }
        }
        Tab = 0;
      }
    }
    if ( Tab == 0 )
    {
      Tab = calloc( 1, sizeof( HTTabID ) );
      if ( Tab == 0 )
        outofmem( "./GridText.c", "HText_setTabID" );
      HTList_addObject( cur, (void*)Tab );
      HTSACopy( &Tab->name, name );
    }
    Tab->column = HText_getCurrentColumn( text );
  }
  return;
}
int HText_getTabIDColumn( HText *text, char *name )
{
  int column = 0;
  HTTabID *Tab;
  HTList *cur = &text->tabs;
  if ( text && name && name[0] && cur )
  {
    do
    {
      if ( cur )
      {
        cur = &cur->next;
        Tab = 0;
      }
    }
    while ( Tab && ( Tab->name[0] == 0 || strcmp( &Tab->name[0], name ) ) );
    if ( Tab )
    {
      column = Tab->column;
    }
  }
  return column;
}
void HText_AddHiddenLink( HText *text, TextAnchor *textanchor )
{
  HTAnchor *dest;
  if ( text && textanchor && textanchor->anchor )
  {
    if ( text->hidden_links == 0 )
    {
      text->hidden_links = HTList_new( );
    }
    dest = HTAnchor_followLink( &textanchor->anchor );
    if ( dest && ( text->hiddenlinkflag != 2 || text->hidden_links == 0 || text->hidden_links->next == 0 ) )
    {
      HTList_appendObject( &text->hidden_links, (void*)HTAnchor_address( dest ) );
    }
  }
  return;
}
int HText_HiddenLinkCount( HText *text )
{
  int count = 0;
  if ( text && text->hidden_links )
  {
    count = HTList_count( &text->hidden_links );
  }
  return count;
}
char *HText_HiddenLinkAt( HText *text, int number )
{
  char *href = 0;
  if ( text && text->hidden_links && number >= 0 )
  {
    href = (char*)HTList_objectAt( &text->hidden_links, number );
  }
  return href;
}
void HText_beginForm( char *action, char *method, char *enctype, char *title, char *accept_cs )
{
  PerFormInfo *newform;
  HTFormMethod = 1;
  HTFormNumber++;
  HTFormFields = 0;
  HTFormDisabled = 0;
  if ( action )
  {
    if ( strncasecomp( action, "mailto:", 7 ) == 0 )
      HTFormMethod = 3;
    HTSACopy( &HTFormAction, action );
  }
  else
  {
    HTSACopy( &HTFormAction, HTLoadedDocumentURL( ) );
  }
  if ( method && HTFormMethod != 3 && ( strcasecomp( method, "post" ) == 0 || strcasecomp( method, "pget" ) == 0 ) )
    HTFormMethod = 2;
  if ( enctype && enctype[0] )
  {
    HTSACopy( &HTFormEnctype, enctype );
    if ( HTFormMethod != 3 && strncasecomp( enctype, "multipart/form-data", 19 ) == 0 )
      HTFormMethod = 2;
  }
  else
  if ( HTFormEnctype )
  {
    free( HTFormEnctype );
    HTFormEnctype = 0;
  }
  if ( title && title[0] )
    HTSACopy( &HTFormTitle, title );
  else
  if ( HTFormTitle )
  {
    free( HTFormTitle );
    HTFormTitle = 0;
  }
  if ( accept_cs )
  {
    HTSACopy( &HTFormAcceptCharset, accept_cs );
    LYRemoveBlanks( HTFormAcceptCharset );
    LYLowerCase( HTFormAcceptCharset );
  }
  newform = calloc( 1, sizeof( PerFormInfo ) );
  if ( newform == 0 )
    outofmem( "./GridText.c", "HText_beginForm" );
  newform->number = HTFormNumber;
  PerFormInfo_free( HTCurrentForm );
  HTCurrentForm = newform;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "BeginForm: action:%s Method:%d%s%s%s%s%s%s\n", HTFormAction, HTFormMethod, "", "", "", "", "", "" );
  }
  return;
}
void HText_endForm( HText *text )
{
  if ( HTFormFields == 1 && text && text->first_anchor )
  {
    TextAnchor *a = &text->first_anchor;
    for ( ; a;  )
    {
      if ( a->link_type == 2 && a->input_field->number == HTFormNumber && a->input_field->type == 1 )
      {
        a->input_field->submit_action = 0;
        HTSACopy( &a->input_field->submit_action, HTFormAction );
        if ( HTFormEnctype )
          HTSACopy( &a->input_field->submit_enctype, HTFormEnctype );
        if ( HTFormTitle )
          HTSACopy( &a->input_field->submit_title, HTFormTitle );
        a->input_field->submit_method = HTFormMethod;
        a->input_field->type = 12;
        if ( HTFormDisabled )
        {
          a->input_field->disabled = 1;
          break;
        }
      }
      else
      {
        a = &a->next;
      }
    }
  }
  if ( HTCurrentForm )
  {
    if ( HTFormDisabled )
      HTCurrentForm->disabled = 1;
    HTCurrentForm->accept_cs = HTFormAcceptCharset;
    HTFormAcceptCharset = 0;
    if ( text->forms == 0 )
    {
      text->forms = HTList_new( );
    }
    HTList_appendObject( &text->forms, (void*)HTCurrentForm );
    HTCurrentForm = 0;
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "endForm:    HTCurrentForm is missing!\n" );
  }
  if ( HTCurSelectGroup )
  {
    free( HTCurSelectGroup );
    HTCurSelectGroup = 0;
  }
  if ( HTCurSelectGroupSize )
  {
    free( HTCurSelectGroupSize );
    HTCurSelectGroupSize = 0;
  }
  if ( HTCurSelectedOptionValue )
  {
    free( HTCurSelectedOptionValue );
    HTCurSelectedOptionValue = 0;
  }
  if ( HTFormAction )
  {
    free( HTFormAction );
    HTFormAction = 0;
  }
  if ( HTFormEnctype )
  {
    free( HTFormEnctype );
    HTFormEnctype = 0;
  }
  if ( HTFormTitle )
  {
    free( HTFormTitle );
    HTFormTitle = 0;
  }
  if ( HTFormAcceptCharset )
  {
    free( HTFormAcceptCharset );
    HTFormAcceptCharset = 0;
  }
  HTFormFields = 0;
  HTFormDisabled = 0;
  return;
}
void HText_beginSelect( char *name, int name_cs, BOOLEAN multiple, char *size )
{
  HTSACopy( &HTCurSelectGroup, name );
  HTCurSelectGroupCharset = name_cs;
  if ( multiple )
    HTCurSelectGroupType = 3;
  else
    HTCurSelectGroupType = 4;
  HTSACopy( &HTCurSelectGroupSize, size );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HText_beginSelect: name=%s type=%d size=%s\n", "&lt;NULL&gt;", HTCurSelectGroupType, "&lt;NULL&gt;" );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HText_beginSelect: name_cs=%d \"%s\"\n", HTCurSelectGroupCharset, "&lt;UNKNOWN&gt;" );
  }
  return;
}
int HText_getOptionNum( HText *text )
{
  TextAnchor *a;
  OptionType *op;
  int n = 1;
  if ( text == 0 || text->last_anchor == 0 )
  {
    return 0;
  }
  a = &text->last_anchor;
  if ( a->link_type != 2 || a->input_field == 0 || a->input_field->type != 7 )
  {
    return 0;
  }
  op = &a->input_field->select_list;
  for ( ; op;  )
  {
    n++;
    op = &op->next;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HText_getOptionNum: Got number '%d'.\n", n );
  }
  return n;
}
char *HText_skipOptionNumPrefix( char *opname )
{
  if ( keypad_mode == 3 || keypad_mode == 2 )
  {
    char *cp = opname;
    if ( cp && cp[0] )
    {
      cp++;
      if ( !( ( ( cp[0] == '(' ) ^ 1 ) & 255 ) && cp[0] )
      {
        cp++;
        if ( ( ( ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 2048 ) != 0 ) ^ 1 ) & 255 ) == 0 )
        {
          for ( ; cp[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 2048 ); cp++ )
          {
            // cp++;
          }
          if ( cp[0] )
          {
            cp++;
            if ( ( ( ( cp[0] == ')' ) ^ 1 ) & 255 ) == 0 )
            {
              int i = cp - opname;
              for ( ; i <= 4 && cp[0] == '_'; cp++ )
              {
                i++;
                // cp++;
              }
              if ( i <= 4 )
                cp = opname;
                return cp;
            }
          }
          cp = opname;
        }
      }
    }
    cp = opname;
  }
  else
  {
    return opname;
  }
}
char *HText_setLastOptionValue( HText *text, char *value, char *submit_value, int order, BOOLEAN checked, int val_cs, int submit_val_cs )
{
  char *cp, *cp1;
  char *ret_Value = 0;
  unsigned char *tmp = 0;
  int number = 0, i, j;
  if ( value == 0 || text == 0 || text->last_anchor == 0 || text->last_anchor->input_field == 0 || text->last_anchor->link_type != 2 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HText_setLastOptionValue: invalid call!  value:%s!\n", "&lt;NULL&gt;" );
    }
    return 0;
  }
  else
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Entering HText_setLastOptionValue: value:\"%s\", checked:%s\n", value, "off" );
    }
    if ( value[0] )
    {
      cp = value + strlen( value ) + -1;
      for ( ; value <= cp && ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 8192 ) || ( cp[0] < 2 && 8 <= cp[0] ) );  )
      {
        cp = &cp[ -1 ];
      }
      cp[1] = 0;
    }
    cp = value;
    for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 8192 ) || ( cp[0] < 2 && 8 <= cp[0] ); cp++ )
    {
      // cp++;
    }
    if ( HTCurSelectGroupType == 4 && LYSelectPopups && ( keypad_mode == 3 || keypad_mode == 2 ) )
    {
      cp1 = HText_skipOptionNumPrefix( cp );
      if ( cp < cp1 )
      {
        i = 0;
        j = cp1 - cp;
        for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp1[ i ] * 2 )) & 8192 ) || ( cp1[ i ] < 2 && 8 <= cp1[ i ] ); i++ )
        {
          // i++;
        }
        if ( i > 0 )
        {
          for ( ; cp1[ i ]; i++ )
          {
            cp[ j ] = cp1[ i ];
            j++;
            // i++;
          }
          cp[ j ] = 0;
        }
      }
    }
    if ( HTCurSelectGroupType == 3 )
    {
      HTSACopy( &text->last_anchor->input_field->value, cp );
      text->last_anchor->input_field->value_cs = val_cs;
      HText_appendText( text, cp );
    }
    else
    if ( LYSelectPopups == 0 )
    {
      HTSACopy( &text->last_anchor->input_field->value, cp );
      text->last_anchor->input_field->value_cs = val_cs;
      HText_appendText( text, cp );
    }
    else
    {
      OptionType *op_ptr = &text->last_anchor->input_field->select_list;
      OptionType *new_ptr = 0;
      BOOLEAN first_option = 0;
      LYReduceBlanks( value );
      if ( op_ptr == 0 )
      {
        if ( text->last_anchor->input_field->type != 7 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HText_setLastOptionValue: last input_field not F_OPTION_LIST_TYPE (%d)\n", 7 );
          }
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "                          but %d, ignoring!\n", text->last_anchor->input_field->type );
          }
          return 0;
        }
        else
        {
          text->last_anchor->input_field->select_list = calloc( 1, 16 );
          new_ptr = &text->last_anchor->input_field->select_list;
          if ( new_ptr == 0 )
            outofmem( "./GridText.c", "HText_setLastOptionValue" );
          first_option = 1;
        }
      }
      else
      {
        for ( ; op_ptr->next;  )
        {
          number++;
          op_ptr = &op_ptr->next;
        }
        number++;
        op_ptr->next = new_ptr = calloc( 1, sizeof( OptionType ) );
        if ( new_ptr == 0 )
          outofmem( "./GridText.c", "HText_setLastOptionValue" );
      }
      *(int*)&new_ptr->name[0] = 0;
      *(int*)&new_ptr->cp_submit_value = 0;
      *(int*)&new_ptr->next = 0;
      cp = value;
      for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 8192 ) || ( cp[0] < 2 && 8 <= cp[0] ); cp++ )
      {
        // cp++;
      }
      i = 0;
      j = 0;
      for ( ; cp[ i ]; i++ )
      {
        if ( cp[ i ] == 1 || cp[ i ] == 2 )
        {
          cp[ j ] = ' ';
          j++;
        }
        else
        if ( cp[ i ] != 7 && ( 2 <= cp[ i ] || cp[ i ] < 8 ) )
        {
          cp[ j ] = cp[ i ];
          j++;
        }
        // i++;
      }
      cp[ j ] = 0;
      if ( HTCJK )
      {
        if ( cp )
        {
          tmp = calloc( ( strlen( cp ) * 2 ) + 1, sizeof( unsigned char ) );
          if ( tmp )
          {
            if ( tmp == 0 )
              outofmem( "./GridText.c", "HText_setLastOptionValue" );
            if ( kanji_code == EUC )
            {
              TO_EUC( (unsigned char*)cp, tmp );
              val_cs = current_char_set;
            }
            else
            if ( kanji_code == SJIS )
            {
              TO_SJIS( (unsigned char*)cp, tmp );
              val_cs = current_char_set;
            }
            else
            {
              i = 0;
              j = 0;
              for ( ; cp[ i ]; i++ )
              {
                if ( cp[ i ] != 27 )
                {
                  tmp[ j ] = cp[ i ];
                  j++;
                }
                // i++;
              }
            }
            HTSACopy( &new_ptr->name, (char*)tmp );
            if ( tmp )
            {
              free( tmp );
              tmp = 0;
            }
          }
        }
      }
      else
        HTSACopy( &new_ptr->name, cp );
      HTSACopy( &new_ptr->cp_submit_value, submit_value ? submit_value : HText_skipOptionNumPrefix( &new_ptr->name[0] ) );
      new_ptr->value_cs = val_cs;
      if ( first_option )
      {
        FormInfo *last_input = &text->last_anchor->input_field;
        HTSACopy( &HTCurSelectedOptionValue, &new_ptr->name[0] );
        *(int*)&last_input->num_value = 0;
        if ( last_input->value )
        {
          free( &last_input->value );
          *(int*)&last_input->value = 0;
        }
        if ( last_input->cp_submit_value )
        {
          free( &last_input->cp_submit_value );
          *(int*)&last_input->cp_submit_value = 0;
        }
        last_input->value = last_input->select_list->name[0];
        last_input->orig_value = last_input->select_list->name[0];
        last_input->cp_submit_value = last_input->select_list->cp_submit_value;
        last_input->orig_submit_value = last_input->select_list->cp_submit_value;
        last_input->value_cs = new_ptr->value_cs;
      }
      else
      {
        int newlen = strlen( &new_ptr->name[0] );
        int curlen = 0;
        if ( curlen < newlen )
        {
          HTSACat( &HTCurSelectedOptionValue, newlen - curlen <= 1023 ? &underscore_string[ ( curlen - newlen ) + 1023 ] : underscore_string );
        }
      }
      if ( checked )
      {
        int curlen = strlen( &new_ptr->name[0] );
        int newlen = 0;
        FormInfo *last_input = &text->last_anchor->input_field;
        last_input->num_value = number;
        last_input->value = new_ptr->name[0];
        last_input->orig_value = new_ptr->name[0];
        last_input->cp_submit_value = new_ptr->cp_submit_value;
        last_input->orig_submit_value = new_ptr->cp_submit_value;
        last_input->value_cs = new_ptr->value_cs;
        HTSACopy( &HTCurSelectedOptionValue, &new_ptr->name[0] );
        if ( curlen < newlen )
        {
          HTSACat( &HTCurSelectedOptionValue, newlen - curlen <= 1023 ? &underscore_string[ ( curlen - newlen ) + 1023 ] : underscore_string );
        }
      }
      if ( order == 3 )
      {
        if ( HTCurSelectedOptionValue == 0 )
          HTSACopy( &HTCurSelectedOptionValue, "" );
        text->last_anchor->input_field->size = strlen( HTCurSelectedOptionValue );
        ret_Value = HTCurSelectedOptionValue;
      }
    }
    if ( WWW_TraceFlag )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HText_setLastOptionValue:%s value=\"%s\"\n", order == 3 ? " LAST_ORDER" : "", value );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "            val_cs=%d \"%s\"", val_cs, "&lt;UNKNOWN&gt;" );
      }
      if ( submit_value )
      {
        if ( WWW_TraceFlag == 0 )
        {
          return ret_Value;
        }
        fprintf( TraceFP( ), " (submit_val_cs %d \"%s\") submit_value%s=\"%s\"\n", submit_val_cs, "&lt;UNKNOWN&gt;", HTCurSelectGroupType == 3 ? "(ignored)" : "", submit_value );
      }
      else
      {
        if ( WWW_TraceFlag == 0 )
        {
          return ret_Value;
        }
        fprintf( TraceFP( ), "\n" );
      }
    }
  }
}
int HText_beginInput( HText *text, BOOLEAN underline, InputFieldData *I )
{
  int eax;
  TextAnchor *a;
  FormInfo *f;
  char *cp_option = 0;
  char *IValue = 0;
  unsigned char *tmp = 0;
  int i, j;
  int adjust_marker = 0;
  int MaximumSize;
  char marker[16];
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "GridText: Entering HText_beginInput type=%s\n", "" );
  }
  a = (TextAnchor*)ALLOC_IN_POOL( &HTMainText->pool, 52 );
  f = (FormInfo*)ALLOC_IN_POOL( &HTMainText->pool, 96 );
  if ( a == 0 || f == 0 )
    outofmem( "./GridText.c", "HText_beginInput" );
  a->sgml_offset = SGML_offset( );
  a->inUnderline = underline;
  a->line_num = text->Lines;
  a->line_pos = text->last_line->size;
  if ( I->type && strcmp( &I->type, "OPTION" ) == 0 && HTCurSelectGroupType == 4 && LYSelectPopups == 0 )
  {
    I->type = "RADIO";
    I->name = HTCurSelectGroup;
    I->name_cs = HTCurSelectGroupCharset;
  }
  if ( I->name && I->type && strcasecomp( &I->type, "radio" ) == 0 )
  {
    if ( text->last_anchor == 0 )
      *(int*)&I->checked = 1;
    else
    {
      TextAnchor *b;
      int i2 = 0;
      b = &text->first_anchor;
      for ( ; b;  )
      {
        if ( b->link_type == 2 && b->input_field->type == 4 && b->input_field->number == HTFormNumber && strcmp( &b->input_field->name[0], &I->name ) == 0 )
        {
          if ( I->checked && b->input_field->num_value )
          {
            b->input_field->num_value = 0;
            HTSACopy( &b->input_field->orig_value, "0" );
            break;
          }
          else
            i2++;
        }
        b = &b->next;
      }
      if ( i2 == 0 )
        *(int*)&I->checked = 1;
      b = &b->next;
    }
  }
  a->next = 0;
  a->anchor = 0;
  a->link_type = 2;
  a->show_anchor = 1;
  LYClearHiText( a );
  a->extent = 2;
  a->input_field = f;
  *(int*)&f->select_list = 0;
  f->number = HTFormNumber;
  *(int*)&f->disabled = 0;
  f->no_cache = 0;
  HTFormFields++;
  if ( HTFormMethod == 2 )
    f->no_cache = 1;
  if ( I->value )
    HTSACopy( &IValue, &I->value );
  if ( IValue && HTCJK && ( I->type == 0 || strcasecomp( &I->type, "hidden" ) ) )
  {
    tmp = calloc( ( strlen( IValue ) * 2 ) + 1, sizeof( unsigned char ) );
    if ( tmp )
    {
      if ( kanji_code == EUC )
      {
        TO_EUC( (unsigned char*)IValue, tmp );
        I->value_cs = current_char_set;
      }
      else
      if ( kanji_code == SJIS )
      {
        TO_SJIS( (unsigned char*)IValue, tmp );
        I->value_cs = current_char_set;
      }
      else
      {
        i = 0;
        j = 0;
        for ( ; IValue[ i ] == 0; i++ )
        {
          if ( IValue[ i ] != 27 )
          {
            tmp[ j ] = IValue[ i ];
            j++;
          }
          // i++;
        }
      }
      HTSACopy( &IValue, (char*)tmp );
      if ( tmp )
      {
        free( tmp );
        tmp = 0;
      }
    }
  }
  if ( I->type && strcmp( &I->type, "OPTION" ) == 0 )
  {
    cp_option = &I->type;
    if ( HTCurSelectGroupType == 4 )
      I->type = "OPTION_LIST";
    else
      I->type = "CHECKBOX";
    I->name = HTCurSelectGroup;
    I->name_cs = HTCurSelectGroupCharset;
    if ( HTCurSelectGroupSize )
    {
      f->size_l = atoi( HTCurSelectGroupSize );
      if ( HTCurSelectGroupSize )
      {
        free( HTCurSelectGroupSize );
        HTCurSelectGroupSize = 0;
      }
    }
  }
  if ( I->size )
  {
    f->size = I->size;
    if ( f->size == 0 && cp_option == 0 )
      *(int*)&f->size = 20;
  }
  else
    *(int*)&f->size = 20;
  if ( I->maxlength )
  {
    f->maxlength = atoi( &I->maxlength );
  }
  else
    *(int*)&f->maxlength = 0;
  if ( I->checked == 1 )
    *(int*)&f->num_value = 1;
  else
    *(int*)&f->num_value = 0;
  if ( I->type )
  {
    if ( strcasecomp( &I->type, "password" ) == 0 )
      *(int*)&f->type = 2;
    else
    {
      if ( strcasecomp( &I->type, "checkbox" ) == 0 )
        *(int*)&f->type = 3;
      else
      {
        if ( strcasecomp( &I->type, "radio" ) == 0 )
          *(int*)&f->type = 4;
        else
        {
          if ( strcasecomp( &I->type, "submit" ) == 0 )
            *(int*)&f->type = 5;
          else
          {
            if ( strcasecomp( &I->type, "image" ) == 0 )
              *(int*)&f->type = 13;
            else
            {
              if ( strcasecomp( &I->type, "reset" ) == 0 )
                *(int*)&f->type = 6;
              else
              {
                if ( strcasecomp( &I->type, "OPTION_LIST" ) == 0 )
                  *(int*)&f->type = 7;
                else
                {
                  if ( strcasecomp( &I->type, "hidden" ) == 0 )
                  {
                    *(int*)&f->type = 8;
                    HTFormFields += -1;
                    *(int*)&f->size = 0;
                  }
                  else
                  {
                    if ( strcasecomp( &I->type, "textarea" ) == 0 )
                      *(int*)&f->type = 9;
                    else
                    {
                      if ( strcasecomp( &I->type, "range" ) == 0 )
                        *(int*)&f->type = 10;
                      else
                      {
                        if ( strcasecomp( &I->type, "file" ) == 0 )
                        {
                          *(int*)&f->type = 11;
                          if ( WWW_TraceFlag )
                          {
                            fprintf( TraceFP( ), "ok, got a file uploader\n" );
                          }
                        }
                        else
                        {
                          if ( strcasecomp( &I->type, "keygen" ) == 0 )
                            *(int*)&f->type = 14;
                          else
                            *(int*)&f->type = 1;
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
    }
  }
  else
    *(int*)&f->type = 1;
  if ( I->name )
  {
    HTSACopy( &f->name, &I->name );
    f->name_cs = I->name_cs;
  }
  else
  {
    switch ( f->type )
    {
    case 5:
    case 6:
    case '\r':
      HTSACopy( &f->name, "" );
      break;
    default:
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "GridText: No name present in input field; not displaying\n" );
      }
      if ( IValue )
      {
        free( IValue );
        IValue = 0;
      }
      return 0;
      break;
    }
  }
  if ( text->last_anchor )
    text->last_anchor->next = a;
  else
    text->first_anchor = a;
  if ( IValue )
  {
    if ( f->type == 7 || f->type == 3 )
    {
      HTSACopy( &f->value, IValue );
      HTSACopy( &f->cp_submit_value, IValue );
    }
    else
      HTSACopy( &f->value, IValue );
    f->value_cs = I->value_cs;
  }
  else
  if ( f->type != 7 )
  {
    HTSACopy( &f->value, "" );
    f->value_cs = current_char_set;
  }
  if ( f->type == 6 )
  {
    if ( f->value && f->value[0] )
    {
      f->size = strlen( &f->value );
    }
    else
    {
      HTSACopy( &f->value, "Reset" );
      *(int*)&f->size = 5;
    }
  }
  else
  if ( f->type == 13 || f->type == 5 )
  {
    if ( f->value && f->value[0] )
    {
      f->size = strlen( &f->value );
    }
    else
    if ( f->type == 13 )
    {
      HTSACopy( &f->value, "[IMAGE]-Submit" );
      *(int*)&f->size = 14;
    }
    else
    {
      HTSACopy( &f->value, "Submit" );
      *(int*)&f->size = 6;
    }
    *(int*)&f->submit_action = 0;
    HTSACopy( &f->submit_action, HTFormAction );
    if ( HTFormEnctype )
      HTSACopy( &f->submit_enctype, HTFormEnctype );
    if ( HTFormTitle )
      HTSACopy( &f->submit_title, HTFormTitle );
    f->submit_method = HTFormMethod;
  }
  else
  if ( f->type == 4 || f->type == 3 )
  {
    *(int*)&f->size = 3;
    if ( IValue == 0 )
    {
      HTSACopy( &f->value, f->type == 3 ? "on" : "" );
    }
  }
  if ( IValue )
  {
    free( IValue );
    IValue = 0;
  }
  if ( f->type == 4 || f->type == 3 )
  {
    if ( f->num_value )
      HTSACopy( &f->orig_value, "1" );
    else
      HTSACopy( &f->orig_value, "0" );
  }
  else
  if ( f->type == 7 )
    *(int*)&f->orig_value = 0;
  else
    HTSACopy( &f->orig_value, &f->value );
  if ( I->accept_cs )
  {
    HTSACopy( &f->accept_cs, &I->accept_cs );
    LYRemoveBlanks( &f->accept_cs );
    LYLowerCase( &f->accept_cs );
  }
  if ( f->type <= 14 && ( ( 1 << f->type ) & 17664 ) )
    a->number = 0;
  else
  if ( keypad_mode == 3 || keypad_mode == 2 )
  {
    text->last_anchor_number++;
    a->number = text->last_anchor_number;
  }
  else
    a->number = 0;
  if ( ( keypad_mode == 3 || keypad_mode == 2 ) && a->number > 0 )
  {
    sprintf( marker, "[%d]", a->number );
    adjust_marker = strlen( marker );
    if ( number_fields_on_left )
    {
      BOOLEAN had_bracket = f->type == 7;
      HText_appendText( text, marker );
      if ( had_bracket )
        HText_appendCharacter( text, 91 );
    }
    a->line_num = text->Lines;
    a->line_pos = text->last_line->size;
  }
  else
    marker[0] = 0;
  MaximumSize = ( ( LYcols - ( LYShowScrollbar != 0 ) ) + 1 ) - adjust_marker;
  if ( f->type <= 13 && ( ( 1 << f->type ) & 8802 ) )
  {
    MaximumSize += ~text->style->leftIndent - text->style->rightIndent;
    if ( keypad_mode == 3 || keypad_mode == 2 )
    {
      if ( number_fields_on_left == 0 && f->type == 1 && a->line_pos + 10 < MaximumSize )
        MaximumSize -= a->line_pos;
      else
      {
        MaximumSize -= strlen( marker );
      }
    }
    I->value = f->value;
  }
  else
    MaximumSize += -10;
  if ( MaximumSize <= 0 )
    MaximumSize = 1;
  if ( MaximumSize < f->size )
    f->size = MaximumSize;
  text->last_anchor = a;
  if ( HTCurrentForm )
  {
    if ( HTCurrentForm->first_field == 0 )
      HTCurrentForm->first_field = f;
    HTCurrentForm->last_field = f;
    HTCurrentForm->nfields++;
    if ( f->accept_cs && HTFormAcceptCharset == 0 )
      HTSACopy( &HTFormAcceptCharset, &f->accept_cs );
    if ( text->forms == 0 )
    {
      text->forms = HTList_new( );
    }
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "beginInput: HTCurrentForm is missing!\n" );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Input link: name=%s\nvalue=%s\nsize=%d\n", &f->name[0], "", f->size );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Input link: name_cs=%d \"%s\" (from %d \"%s\")\n", f->name_cs, "&lt;UNKNOWN&gt;", I->name_cs, "&lt;UNKNOWN&gt;" );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "            value_cs=%d \"%s\" (from %d \"%s\")\n", f->value_cs, "&lt;UNKNOWN&gt;", I->value_cs, "&lt;UNKNOWN&gt;" );
  }
  if ( I->size && adjust_marker < f->size )
    f->size -= adjust_marker;
  return f->size;
}
void HText_endInput( HText *text )
{
  if ( ( keypad_mode == 3 || keypad_mode == 2 ) && !number_fields_on_left && text && text->last_anchor && text->last_anchor->number > 0 )
  {
    char marker[20];
    HText_setIgnoreExcess( text, 0 );
    sprintf( marker, "[%d]", text->last_anchor->number );
    HText_appendText( text, marker );
  }
  return;
}
double get_trans_q( int cs_from, char *givenmime )
{
  double df = 1.000000000000;
  BOOLEAN tq;
  char *p;
  if ( givenmime == 0 || givenmime[0] == 0 )
  {
  }
  p = strchr( givenmime, ';' );
  if ( p )
  {
    p[0] = 0;
    p++;
  }
  if ( strcmp( givenmime, "*" ) == 0 )
  {
    tq = UCCanTranslateFromTo( cs_from, UCGetLYhndl_byMIME( "utf-8" ) );
  }
  else
  {
    tq = UCCanTranslateFromTo( cs_from, UCGetLYhndl_byMIME( givenmime ) );
  }
  if ( tq == 0 )
  {
  }
  if ( p == 0 || p[0] == 0 )
  {
  }
{
  char *pair, *field = p, *pval, *ptok;
  do
  {
    pair = HTNextTok( &field, ";", "\"", 0 );
    if ( pair == 0 )
    {
      break;
    }
    ptok = HTNextTok( &pair, "= ", 0, 0 );
    if ( ptok )
    {
      pval = HTNextField( &pair );
      if ( pval == 0 || strcasecomp( ptok, "q" ) )
        continue;
      else
        break;
    }
    break;
  }
  while ( strcasecomp( ptok, "q" ) );
  df = strtod( pval, 0 );
}
  return (double)( tq );
}
int find_best_target_cs( char **best_csname, int cs_from, char *acceptstring )
{
  char *paccept = 0;
  double bestq = -1.000000000000;
  char *bestmime = 0;
  char *field, *nextfield;
  HTSACopy( &paccept, acceptstring );
  nextfield = paccept;
  while ( field == 0 )
  {
    double q;
    if ( field[0] )
    {
      q = get_trans_q( cs_from, field );
      if ( bestq < q )
      {
        bestq = q;
        bestmime = field;
      }
    }
  }
  if ( bestmime )
  {
    if ( strcmp( bestmime, "*" ) == 0 )
      HTSACopy( best_csname, "utf-8" );
    else
      HTSACopy( best_csname, bestmime );
    if ( paccept )
    {
      free( paccept );
      paccept = 0;
    }
    if ( 0.000000000000 < bestq )
    {
    }
    return -1;
  }
  else
  {
    if ( paccept )
    {
      free( paccept );
      paccept = 0;
    }
    return -1;
  }
}
void load_a_file( char *val_used, bstring **result )
{
  FILE *fd;
  size_t bytes;
  char buffer[257];
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Ok, about to convert %s to mime/thingy\n", val_used );
  }
  if ( val_used[0] )
  {
    fd = fopen64( val_used, "rb" );
    if ( fd == 0 )
    {
      HTAlert( gettext( "Can't open file for uploading" ) );
    }
    else
    {
      while ( bytes == 0 )
      {
        HTSABCat( result, buffer, (int)bytes );
      }
      LYCloseInput( fd );
    }
  }
  return;
}
char *guess_content_type( char *filename )
{
  HTAtom *encoding;
  char *desc;
  HTFormat format = HTFileFormat( filename, &encoding, &desc );
  return "text/plain";
}
void cannot_transcode( BOOLEAN *had_warning, char *target_csname )
{
  if ( had_warning[0] == 0 )
  {
    had_warning[0] = 1;
    mustshow = 1;
    user_message( gettext( "Warning: Cannot transcode form data to charset %s!" ), "UNKNOWN" );
    LYSleepAlert( );
  }
  return;
}
unsigned int check_form_specialchars( char *value )
{
  unsigned int result = 0;
  char *p = value;
  for ( ; p && p[0] && result != 3; p++ )
  {
    if ( p[0] == 1 || p[0] == 2 || p[0] == 7 )
      result |= 2;
    else
    if ( p[0] < 0 )
      result |= 1;
    // p++;
  }
  return result;
}
void UpdateBoundary( char **Boundary, bstring *data )
{
  int j;
  int have = strlen( Boundary[0] );
  int last = 0;
  char *text = 0;
  char *want = Boundary[0];
  j = 0;
  for ( ; j <= last - have; j++ )
  {
    if ( text[ j ] == want[0] && memcmp( want, &text[ j ], have ) == 0 )
    {
      char temp[2];
      temp[0] = '0';
      temp[1] = 0;
      HTSACat( &want, temp );
      have++;
    }
    // j++;
  }
  Boundary[0] = want;
  return;
}
char *convert_to_base64( char *src, int len )
{
  static char basis_64[65] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/' };
  char *dest;
  int rlen;
  unsigned char c1, c2, c3;
  char *eol;
  char *r;
  char *str = src;
  int eollen;
  int chunk;
  eol = "\n";
  eollen = 1;
  rlen = ( ( len + 2 ) / 3 ) << 2;
  if ( rlen )
    rlen += eollen * ( ( ( (/*HI*/int)( 0x6bca1af3 * ( rlen + -1 ) ) >> 5 ) - ( ( rlen + -1 ) >> 31 ) ) + 1 );
  dest = malloc( ( rlen + 1 ) * sizeof( char ) );
  if ( dest == 0 )
    outofmem( "./GridText.c", "convert_to_base64" );
  r = dest;
  chunk = 0;
  for ( ; len > 0; chunk++ )
  {
    if ( chunk == 19 )
    {
      char *c = eol;
      char *e = &eol[ eollen ];
      for ( ; c < e; c++ )
      {
        r[0] = c[0];
        r++;
        // c++;
      }
      chunk = 0;
    }
    c1 = str[0];
    str++;
    c2 = str[0];
    str++;
    r[0] = basis_64[ c1 >> 2 ];
    r++;
    r[0] = basis_64[ ( c2 >> 4 ) | ( ( __MOD(c1,4) ) << 4 ) ];
    r++;
    if ( len > 2 )
    {
      c3 = str[0];
      str++;
      r[0] = basis_64[ ( c3 >> 6 ) | ( ( c2 & 15 ) << 2 ) ];
      r++;
      r[0] = basis_64[ c3 & 63 ];
      r++;
    }
    else
    if ( len == 2 )
    {
      r[0] = basis_64[ ( c2 & 15 ) << 2 ];
      r++;
      r[0] = '=';
      r++;
    }
    else
    {
      r[0] = '=';
      r++;
      r[0] = '=';
      r++;
    }
    len += -3;
    // chunk++;
  }
  if ( rlen )
  {
    char *c = eol;
    char *e = &eol[ eollen ];
    for ( ; c < e; c++ )
    {
      r[0] = c[0];
      r++;
      // c++;
    }
  }
  r[0] = 0;
  return dest;
}
char *escape_or_quote_name( char *name, QuoteData quoting, char *MultipartContentType )
{
  char *escaped1 = 0;
  switch ( quoting )
  {
  case NO_QUOTE:
    HTSACopy( &escaped1, name );
    break;
  case QUOTE_MULTI:
  case QUOTE_BASE64:
    HTSACopy( &escaped1, "Content-Disposition: form-data" );
    HTSprintf( &escaped1, "; name=\"%s\"", name );
    if ( MultipartContentType )
      HTSprintf( &escaped1, MultipartContentType, "text/plain" );
    if ( quoting == QUOTE_BASE64 )
      HTSACat( &escaped1, "\r\nContent-Transfer-Encoding: base64" );
    HTSACat( &escaped1, "\r\n\r\n" );
    break;
  case QUOTE_SPECIAL:
    escaped1 = HTEscapeSP( name, 1 );
    break;
  default:
    break;
  }
  return escaped1;
}
char *escape_or_quote_value( char *value, QuoteData quoting )
{
  char *escaped2 = 0;
  switch ( quoting )
  {
    HTSACopy( &escaped2, "" );
    break;
  case QUOTE_BASE64:
    escaped2 = convert_to_base64( value, strlen( value ) );
    break;
  case QUOTE_SPECIAL:
    escaped2 = HTEscapeSP( value, 1 );
    break;
  default:
    break;
  }
  return escaped2;
}
int check_if_base64_needed( int submit_method, bstring *data )
{
  int width = 0;
  BOOLEAN printable = 1;
  char *text = 0;
  if ( text )
  {
    int col = 0;
    int n;
    int length = 0;
    n = 0;
    for ( ; n < length;  )
    {
      int ch = text[ n ];
      if ( (_Bool)( ( ch >> 7 ) & 1 ) || ( ch <= 31 && ch != 10 ) )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "nonprintable %d:%#x\n", n, ch );
        }
        printable = 0;
      }
      if ( ch == 10 || ch == 13 )
      {
        if ( width < col )
          width = col;
        col = 0;
      }
      else
        col++;
      n++;
    }
    if ( width < col )
      width = col;
  }
  return 0;
}
int HText_SubmitForm( FormInfo *submit_item, DocInfo *doc, char *link_name, char *link_value )
{
  BOOLEAN had_chartrans_warning = 0;
  BOOLEAN have_accept_cs = 0;
  BOOLEAN success;
  BOOLEAN PlainText = 0;
  BOOLEAN SemiColon = 0;
  BOOLEAN skip_field = 0;
  char *out_csname;
  char *target_csname = 0;
  PerFormInfo *thisform;
  PostData *my_data = 0;
  TextAnchor *anchor_ptr;
  bstring *my_query = 0;
  char *Boundary = 0;
  char *MultipartContentType = 0;
  char *content_type_out = 0;
  char *copied_name_used = 0;
  char *copied_val_used = 0;
  char *escaped1 = 0;
  char *escaped2 = 0;
  char *last_textarea_name = 0;
  char *name_used = "";
  char *previous_blanks = 0;
  char *val_used = "";
  int anchor_count = 0;
  int anchor_limit = 0;
  int form_number = submit_item->number;
  int result = 0;
  int target_cs = -1;
  int textarea_lineno = 0;
  unsigned int form_is_special = 0;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "SubmitForm\n  link_name=%s\n  link_value=%s\n", link_name, link_value );
  }
  if ( HTMainText == 0 )
  {
    return 0;
  }
  thisform = (PerFormInfo*)HTList_objectAt( &HTMainText->forms, form_number + -1 );
  if ( thisform == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "SubmitForm: form %d not in HTMainText's list!\n", form_number );
    }
  }
  else
  if ( thisform->number != form_number )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "SubmitForm: failed sanity check, %d!=%d !\n", thisform->number, form_number );
    }
    thisform = 0;
  }
  if ( submit_item->submit_action == 0 || submit_item->submit_action[0] == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "SubmitForm: no action given\n" );
    }
    return 0;
  }
  else
  {
    if ( submit_item->submit_method == 3 && strncasecomp( &submit_item->submit_action, "mailto:", 7 ) )
    {
      HTAlert( gettext( "Malformed mailto form submission!  Cancelled!" ) );
      return 0;
    }
    if ( submit_item->submit_enctype && strncasecomp( &submit_item->submit_enctype, "text/plain", 10 ) == 0 )
      PlainText = 1;
    else
    if ( submit_item->submit_enctype && strncasecomp( &submit_item->submit_enctype, "application/sgml-form-urlencoded", 32 ) == 0 )
      SemiColon = 1;
    else
    if ( submit_item->submit_enctype && strncasecomp( &submit_item->submit_enctype, "multipart/form-data", 19 ) == 0 )
      Boundary = "xnyLAaB03X";
    if ( thisform && submit_item->accept_cs && strcasecomp( &submit_item->accept_cs, "UNKNOWN" ) )
    {
      have_accept_cs = 1;
      target_cs = find_best_target_cs( &thisform->thisacceptcs, current_char_set, &submit_item->accept_cs );
    }
    if ( thisform && have_accept_cs == 0 && thisform->accept_cs && strcasecomp( &thisform->accept_cs, "UNKNOWN" ) )
    {
      have_accept_cs = 1;
      target_cs = find_best_target_cs( &thisform->thisacceptcs, current_char_set, &thisform->accept_cs );
    }
    if ( have_accept_cs && target_cs >= 0 && thisform->thisacceptcs )
      target_csname = &thisform->thisacceptcs;
    if ( target_cs < 0 && HTMainText->temp_line->data[8] && HTMainText->temp_line->data[8] )
    {
      target_cs = UCGetLYhndl_byMIME( &HTMainText->temp_line->data[8] );
      if ( target_cs >= 0 )
        target_csname = &HTMainText->temp_line->data[8];
      else
      {
        target_cs = UCLYhndl_for_unspec;
        target_csname = LYCharSet_UC[ target_cs ].MIMEname;
      }
    }
    if ( target_cs < 0 )
      target_cs = UCLYhndl_for_unspec;
    anchor_ptr = &HTMainText->first_anchor;
    for ( ; anchor_ptr;  )
    {
      if ( anchor_ptr->link_type == 2 )
      {
        if ( anchor_ptr->input_field->number == form_number && anchor_ptr->input_field->disabled == 0 )
        {
          FormInfo *form_ptr = &anchor_ptr->input_field;
          char *val = &form_ptr->value;
          unsigned int field_is_special = check_form_specialchars( val );
          unsigned int name_is_special = check_form_specialchars( &form_ptr->name[0] );
          form_is_special = name_is_special | field_is_special;
          if ( field_is_special && target_cs >= 0 && ( ( field_is_special & 1 ) || ( LYCharSet_UC[ target_cs ].enc != 2 && ( LYCharSet_UC->codepage & 128 ) == 0 ) ) && ( UCNeedNotTranslate( form_ptr->value_cs, target_cs ) & 255 ) == 0 && ( UCCanTranslateFromTo( form_ptr->value_cs, target_cs ) & 255 ) == 0 )
          {
            if ( UCCanTranslateFromTo( target_cs, form_ptr->value_cs ) & 255 )
            {
              target_cs = form_ptr->value_cs;
              target_csname = 0;
            }
            else
              target_cs = -1;
          }
          if ( name_is_special && target_cs >= 0 && ( ( name_is_special & 1 ) || ( LYCharSet_UC[ target_cs ].enc != 2 && ( LYCharSet_UC->codepage & 128 ) == 0 ) ) && ( UCNeedNotTranslate( form_ptr->name_cs, target_cs ) & 255 ) == 0 && ( UCCanTranslateFromTo( form_ptr->name_cs, target_cs ) & 255 ) == 0 )
          {
            if ( UCCanTranslateFromTo( target_cs, form_ptr->name_cs ) & 255 )
            {
              target_cs = form_ptr->value_cs;
              target_csname = 0;
            }
            else
              target_cs = -1;
          }
          anchor_limit++;
        }
        else
        {
          if ( form_number < anchor_ptr->input_field->number )
            break;
        }
      }
      anchor_ptr = &anchor_ptr->next;
    }
    if ( anchor_limit )
    {
      my_data = calloc( anchor_limit, sizeof( PostData ) );
      if ( my_data == 0 )
        outofmem( "./GridText.c", "HText_SubmitForm" );
    }
    if ( target_csname == 0 && target_cs >= 0 )
    {
      if ( form_is_special & 1 )
        target_csname = LYCharSet_UC[ target_cs ].MIMEname;
      else
      if ( form_is_special & 2 )
        target_csname = LYCharSet_UC[ target_cs ].MIMEname;
      else
        target_csname = "us-ascii";
    }
    if ( submit_item->submit_method == 1 && Boundary == 0 )
    {
      char *temp = 0;
      HTSACopy( &temp, &submit_item->submit_action );
      strtok( temp, "#" );
      strtok( temp, "?" );
      HTSACat( &temp, "?" );
      HTSABCat0( &my_query, temp );
    }
    else
    {
      if ( SemiColon == 1 )
        HTSACopy( &content_type_out, "application/sgml-form-urlencoded" );
      else
      if ( PlainText == 1 )
        HTSACopy( &content_type_out, "text/plain" );
      else
      if ( Boundary )
        HTSACopy( &content_type_out, "multipart/form-data" );
      else
        HTSACopy( &content_type_out, "application/x-www-form-urlencoded" );
      if ( have_accept_cs || ( form_is_special & 1 ) || ( form_is_special & 2 ) )
      {
        if ( target_cs >= 0 && target_csname )
        {
          if ( Boundary == 0 && ( ( HTMainText->temp_line->data[8] && ( strcmp( &HTMainText->temp_line->data[8], "iso-8859-1" ) || strcmp( target_csname, "iso-8859-1" ) ) ) || ( HTMainText->temp_line->data[8] == 0 && target_cs != UCLYhndl_for_unspec ) ) )
            HTSprintf( &content_type_out, "; charset=%s", target_csname );
        }
        else
          cannot_transcode( &had_chartrans_warning, target_csname );
      }
    }
    out_csname = target_csname;
    anchor_ptr = &HTMainText->first_anchor;
    for ( ; anchor_ptr;  )
    {
      if ( anchor_ptr->link_type == 2 )
      {
        if ( anchor_ptr->input_field->number == form_number && anchor_ptr->input_field->disabled == 0 )
        {
          FormInfo *form_ptr = &anchor_ptr->input_field;
          int out_cs;
          QuoteData quoting = PlainText == 0 ? QUOTE_SPECIAL : NO_QUOTE;
          if ( form_ptr->type != 9 )
            textarea_lineno = 0;
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "SubmitForm[%d/%d]: ", anchor_count + 1, anchor_limit );
          }
          name_used = "";
          switch ( form_ptr->type )
          {
          case 6:
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "reset\n" );
            }
            break;
          case '':
            val_used = "";
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "I will submit %s (from %s)\n", val_used, name_used );
            }
            break;
          case 5:
          case '':
          case '\r':
            if ( form_ptr->name[0] == 0 || !form_ptr->name || strcmp( &form_ptr->name[0], link_name ) )
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "skipping submit field with " );
              }
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "name \"%s\" for link_name \"%s\", %s.\n", "???", "???", "no field name" );
              }
            }
            else
            {
              if ( form_ptr->type != 12 && ( form_ptr->value == 0 || !form_ptr->value[0] || strcmp( &form_ptr->value, link_value ) ) )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "skipping submit field with " );
                }
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "name \"%s\" for link_name \"%s\", %s!\n", "???", "???", "values are different" );
                }
              }
              else
            }
          default:
            if ( form_ptr->cp_submit_value )
              val_used = &form_ptr->cp_submit_value;
            else
              val_used = &form_ptr->value;
            if ( check_form_specialchars( val_used ) )
            {
              HTSACopy( &copied_val_used, val_used );
              success = LYUCTranslateBackFormData( &copied_val_used, form_ptr->value_cs, target_cs, PlainText );
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "field \"%s\" %d %s -&gt; %d %s %s\n", "", form_ptr->value_cs, "???", target_cs, "???", "FAILED" );
              }
              if ( success )
                val_used = copied_val_used;
            }
            else
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "field \"%s\" %d %s OK\n", "", target_cs, "???" );
              }
              success = 1;
            }
            if ( success == 0 )
            {
              cannot_transcode( &had_chartrans_warning, target_csname );
              out_cs = form_ptr->value_cs;
            }
            else
              out_cs = target_cs;
            if ( out_cs >= 0 )
              out_csname = LYCharSet_UC[ out_cs ].MIMEname;
            if ( Boundary )
            {
              HTSACopy( &MultipartContentType, "\r\nContent-Type: %s" );
              if ( success == 0 && form_ptr->value_cs < 0 )
                out_csname = "UNKNOWN-8BIT";
              else
              if ( success == 0 )
                target_csname = 0;
              else
              if ( target_csname == 0 )
                target_csname = LYCharSet_UC[ target_cs ].MIMEname;
              if ( strcmp( out_csname, "iso-8859-1" ) )
                HTSprintf( &MultipartContentType, "; charset=%s", out_csname );
            }
            if ( form_ptr->type == 9 )
            {
              textarea_lineno++;
              if ( textarea_lineno > 1 && last_textarea_name && form_ptr->name[0] && strcmp( last_textarea_name, &form_ptr->name[0] ) == 0 )
              {
                skip_field = 0;
                my_data[ anchor_count ].first = 1;
                my_data[ anchor_count ].type = form_ptr->type;
                switch ( form_ptr->type )
                {
                case 0:
                case 6:
                case '\n':
                  skip_field = 1;
                  if ( skip_field == 0 )
                  {
                    HTSACopy( &my_data[ anchor_count ].name, name_used );
                    HTSACopy( &my_data[ anchor_count ].value, val_used );
                    if ( my_data[ anchor_count ].data == 0 )
                      HTSABCat0( &my_data[ anchor_count ].data, val_used );
                    my_data[ anchor_count ].quote = quoting;
                    if ( quoting == QUOTE_MULTI && check_if_base64_needed( submit_item->submit_method, my_data[ anchor_count ].data ) )
                    {
                      if ( WWW_TraceFlag )
                      {
                        fprintf( TraceFP( ), "will encode as base64\n" );
                      }
                      my_data[ anchor_count ].quote = QUOTE_BASE64;
                      escaped2 = convert_to_base64( 0, 0 );
                      HTSABCopy0( &my_data[ anchor_count ].data, escaped2 );
                      if ( escaped2 )
                      {
                        free( escaped2 );
                        escaped2 = 0;
                      }
                    }
                  }
                  anchor_count++;
                  if ( copied_name_used )
                  {
                    free( copied_name_used );
                    copied_name_used = 0;
                  }
                  if ( copied_val_used )
                  {
                    free( copied_val_used );
                    copied_val_used = 0;
                  }
                  break;
                case '':
                  load_a_file( val_used, &my_data[ anchor_count ].data );
                  break;
                case 5:
                case '':
                case '\r':
                  if ( form_ptr->name[0] == 0 || !form_ptr->name || strcmp( &form_ptr->name[0], link_name ) || ( form_ptr->type != 12 && ( form_ptr->value == 0 || !form_ptr->value[0] || strcmp( &form_ptr->value, link_value ) ) ) )
                    skip_field = 1;
                  break;
                case 3:
                case 4:
                  if ( form_ptr->num_value == 0 )
                    skip_field = 1;
                  break;
                case '\t':
                  if ( last_textarea_name == 0 || strcmp( last_textarea_name, &form_ptr->name[0] ) )
                  {
                    textarea_lineno = 1;
                    last_textarea_name = &form_ptr->name[0];
                  }
                  else
                    my_data[ anchor_count ].first = 0;
                  break;
                case 1:
                case 2:
                case 7:
                case 8:
                  break;
                }
              }
            }
            if ( check_form_specialchars( name_used ) )
            {
              HTSACopy( &copied_name_used, name_used );
              success = LYUCTranslateBackFormData( &copied_name_used, form_ptr->name_cs, target_cs, PlainText );
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "name \"%s\" %d %s -&gt; %d %s %s\n", "", form_ptr->name_cs, "???", target_cs, "???", "FAILED" );
              }
              if ( success )
                name_used = copied_name_used;
              if ( Boundary )
              {
                if ( success == 0 )
                {
                  HTSACopy( &MultipartContentType, "" );
                  target_csname = 0;
                }
                else
                {
                  if ( target_csname == 0 )
                    target_csname = LYCharSet_UC[ target_cs ].MIMEname;
                }
              }
            }
            else
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "name \"%s\" %d %s OK\n", "", target_cs, "???" );
              }
              success = 1;
              if ( Boundary )
                HTSACopy( &copied_name_used, name_used );
            }
            if ( success == 0 )
              cannot_transcode( &had_chartrans_warning, target_csname );
            if ( Boundary )
            {
              HTMake822Word( &copied_name_used, 0 );
              name_used = copied_name_used;
            }
            break;
          case 0:
          case '\n':
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "What type is %d?\n", form_ptr->type );
            }
            break;
          }
        }
        else
        {
          if ( form_number < anchor_ptr->input_field->number )
            break;
        }
      }
      anchor_ptr = &anchor_ptr->next;
    }
    if ( copied_name_used )
    {
      free( copied_name_used );
      copied_name_used = 0;
    }
    if ( my_data )
    {
      BOOLEAN first_one = 1;
      if ( content_type_out && Boundary )
      {
        Boundary = 0;
        HTSACopy( &Boundary, "LYNX" );
        anchor_count = 0;
        for ( ; anchor_count < anchor_limit; anchor_count++ )
        {
          if ( my_data[ anchor_count ]->data )
            UpdateBoundary( &Boundary, my_data[ anchor_count ].data );
          // anchor_count++;
        }
        HTSprintf( &content_type_out, "; boundary=%s", Boundary );
      }
      anchor_count = 0;
      for ( ; anchor_count < anchor_limit; anchor_count++ )
      {
        if ( my_data[ anchor_count ].name && my_data[ anchor_count ].value )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "processing [%d:%d] name=%s(first:%d, value=%s, data=%p)\n", anchor_count + 1, anchor_limit, "", my_data[ anchor_count ].first, "", my_data[ anchor_count ].data );
          }
          if ( my_data[ anchor_count ].first )
          {
            if ( first_one )
            {
              if ( Boundary )
                HTBprintf( &my_query, "--%s\r\n", Boundary );
              first_one = 0;
            }
            else
            if ( PlainText )
              HTSABCat0( &my_query, "\n" );
            else
            if ( SemiColon )
              HTSABCat0( &my_query, ";" );
            else
            if ( Boundary )
              HTBprintf( &my_query, "\r\n--%s\r\n", Boundary );
            else
              HTSABCat0( &my_query, "&" );
          }
          HTSABCat( &my_data[ anchor_count ].data, "", 1 );
          name_used = my_data[ anchor_count ].name;
          val_used = my_data[ anchor_count ].value;
          switch ( my_data[ anchor_count ].type )
          {
          case 1:
          case 2:
          case 7:
          case 8:
            escaped1 = escape_or_quote_name( my_data[ anchor_count ].name, my_data[ anchor_count ].quote, MultipartContentType );
            escaped2 = escape_or_quote_value( val_used, my_data[ anchor_count ].quote );
            HTBprintf( &my_query, "%s%s%s%s%s", escaped1, "=", "", escaped2, "" );
            if ( escaped1 )
            {
              free( escaped1 );
              escaped1 = 0;
            }
            if ( escaped2 )
            {
              free( escaped2 );
              escaped2 = 0;
            }
            break;
          case 3:
          case 4:
            escaped1 = escape_or_quote_name( my_data[ anchor_count ].name, my_data[ anchor_count ].quote, MultipartContentType );
            escaped2 = escape_or_quote_value( val_used, my_data[ anchor_count ].quote );
            HTBprintf( &my_query, "%s%s%s%s%s", escaped1, "=", "", escaped2, "" );
            break;
          case 5:
          case 12:
          case 13:
            escaped1 = escape_or_quote_name( my_data[ anchor_count ].name, my_data[ anchor_count ].quote, MultipartContentType );
            escaped2 = escape_or_quote_value( val_used, my_data[ anchor_count ].quote );
            if ( my_data[ anchor_count ].type == 13 )
            {
              if ( Boundary )
              {
                *(int*)strchr( escaped1, '=' )/*.1*/ = 0;
                HTBprintf( &my_query, "%s\"%s.x\"\r\n\r\n0\r\n--%s\r\n%s\"%s.y\"\r\n\r\n0", escaped1, my_data[ anchor_count ].name, Boundary, escaped1, my_data[ anchor_count ].name );
              }
              else
              {
                HTBprintf( &my_query, "%s.x=0%s%s.y=0%s", escaped1, PlainText == 0 ? "&" : "\n", escaped1, "" );
              }
            }
            else
            {
              HTBprintf( &my_query, "%s%s%s%s%s", escaped1, "=", "", escaped2, "" );
            }
            break;
          case 9:
            escaped2 = escape_or_quote_value( val_used, my_data[ anchor_count ].quote );
            if ( my_data[ anchor_count ].first )
            {
              textarea_lineno = 1;
              if ( PlainText )
              {
                if ( previous_blanks )
                {
                  free( previous_blanks );
                  previous_blanks = 0;
                }
              }
              else
              if ( Boundary )
                HTSACopy( &previous_blanks, "\r\n" );
              else
                HTSACopy( &previous_blanks, "%0d%0a" );
              escaped1 = escape_or_quote_name( name_used, my_data[ anchor_count ].quote, MultipartContentType );
              HTBprintf( &my_query, "%s%s%s%s%s", escaped1, "=", "", escaped2, "" );
            }
            else
            {
              char *marker = PlainText == 0 ? "%0d%0a" : "\n";
              if ( escaped2[0] )
              {
                if ( previous_blanks )
                {
                  HTSABCat0( &my_query, previous_blanks );
                  if ( previous_blanks )
                  {
                    free( previous_blanks );
                    previous_blanks = 0;
                  }
                }
                HTSABCat0( &my_query, escaped2 );
                if ( PlainText || Boundary )
                  HTSABCat0( &my_query, marker );
                else
                  HTSACopy( &previous_blanks, marker );
              }
              else
                HTSACat( &previous_blanks, marker );
            }
            break;
          case 11:
            if ( PlainText )
              HTSACopy( &escaped1, my_data[ anchor_count ].name );
            else
            if ( Boundary )
            {
              char *t = guess_content_type( val_used );
              char *copied_fname = 0;
              HTSACopy( &escaped1, "Content-Disposition: form-data" );
              HTSprintf( &escaped1, "; name=\"%s\"", my_data[ anchor_count ].name );
              HTSACopy( &copied_fname, val_used );
              HTMake822Word( &copied_fname, 0 );
              HTSprintf( &escaped1, "; filename=\"%s\"", copied_fname );
              if ( copied_fname )
              {
                free( copied_fname );
                copied_fname = 0;
              }
              HTSprintf( &escaped1, "\r\nContent-Type: %s", t );
              if ( my_data[ anchor_count ].quote == QUOTE_BASE64 )
                HTSACat( &escaped1, "\r\nContent-Transfer-Encoding: base64" );
              HTSACat( &escaped1, "\r\n\r\n" );
            }
            else
            {
              escaped1 = HTEscapeSP( my_data[ anchor_count ].name, 1 );
            }
            HTBprintf( &my_query, "%s%s%s", escaped1, "=", "" );
            if ( my_data[ anchor_count ].data && my_data[ anchor_count ].data->len > 1 )
            {
              HTSABCat( &my_query, 0, -1 );
              if ( PlainText )
                HTBprintf( &my_query, "\n" );
            }
            break;
          case 0:
          case 6:
          case 10:
            break;
          }
        }
        // anchor_count++;
      }
      if ( Boundary )
        HTBprintf( &my_query, "\r\n--%s--\r\n", Boundary );
      if ( WWW_TraceFlag )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Query %d{", 0 );
        }
        trace_bstring( my_query );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "}\n" );
        }
      }
    }
    if ( submit_item->submit_method == 3 )
    {
      HTUserMsg2( gettext( "Submitting %s" ), &submit_item->submit_action );
      HTSABCat( &my_query, "", 1 );
      mailform( &submit_item->submit_action[7], submit_item->submit_title == 0 || submit_item->submit_title[0] == 0 ? "" : &submit_item->submit_title, 0, content_type_out );
      result = 0;
      HTSABFree( &my_query );
      if ( content_type_out )
      {
        free( content_type_out );
        content_type_out = 0;
      }
    }
    else
    {
      mustshow = 1;
      statusline( gettext( "Submitting form..." ) );
      if ( submit_item->submit_method == 2 || Boundary )
      {
        LYFreePostData( doc );
        doc->post_data = my_query;
        doc->post_content_type = content_type_out;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "GridText - post_data set:\n%s\n", content_type_out );
        }
        HTSACopy( &doc->address, &submit_item->submit_action );
      }
      else
      {
        HTSABCat( &my_query, "", 1 );
        HTSACopy( &doc->address, 0 );
        LYFreePostData( doc );
        if ( content_type_out )
        {
          free( content_type_out );
          content_type_out = 0;
        }
      }
      result = 1;
    }
    if ( MultipartContentType )
    {
      free( MultipartContentType );
      MultipartContentType = 0;
    }
    if ( previous_blanks )
    {
      free( previous_blanks );
      previous_blanks = 0;
    }
    if ( Boundary )
    {
      free( Boundary );
      Boundary = 0;
    }
    if ( my_data )
    {
      anchor_count = 0;
      for ( ; anchor_count < anchor_limit; anchor_count++ )
      {
        if ( my_data[ anchor_count ].name )
        {
          free( my_data[ anchor_count ].name );
          my_data[ anchor_count ].name = 0;
        }
        if ( my_data[ anchor_count ].value )
        {
          free( my_data[ anchor_count ].value );
          my_data[ anchor_count ].value = 0;
        }
        HTSABFree( &my_data[ anchor_count ].data );
        // anchor_count++;
      }
      if ( my_data == 0 )
      {
        return result;
      }
      free( my_data );
      my_data = 0;
    }
  }
}
void HText_DisableCurrentForm( void )
{
  TextAnchor *anchor_ptr;
  HTFormDisabled = 1;
  if ( HTMainText )
  {
    anchor_ptr = &HTMainText->first_anchor;
    for ( ; anchor_ptr;  )
    {
      if ( anchor_ptr->link_type == 2 && anchor_ptr->input_field->number == HTFormNumber )
        anchor_ptr->input_field->disabled = 1;
      anchor_ptr = &anchor_ptr->next;
    }
  }
  return;
}
void HText_ResetForm( FormInfo *form )
{
  TextAnchor *anchor_ptr;
  mustshow = 1;
  statusline( gettext( "Resetting form..." ) );
  if ( HTMainText )
  {
    anchor_ptr = &HTMainText->first_anchor;
    for ( ; anchor_ptr;  )
    {
      if ( anchor_ptr->link_type == 2 )
      {
        if ( anchor_ptr->input_field->number == form->number )
        {
          if ( anchor_ptr->input_field->type == 4 || anchor_ptr->input_field->type == 3 )
          {
            if ( anchor_ptr->input_field->orig_value[0] == '0' )
              anchor_ptr->input_field->num_value = 0;
            else
              anchor_ptr->input_field->num_value = 1;
          }
          else
          if ( anchor_ptr->input_field->type == 7 )
          {
            anchor_ptr->input_field->value = anchor_ptr->input_field->orig_value;
            anchor_ptr->input_field->cp_submit_value = anchor_ptr->input_field->orig_submit_value;
          }
          else
            HTSACopy( &anchor_ptr->input_field->value, &anchor_ptr->input_field->orig_value );
        }
        else
        if ( form->number < anchor_ptr->input_field->number )
          break;
      }
      anchor_ptr = &anchor_ptr->next;
    }
  }
  return;
}
BOOLEAN HText_HaveUserChangedForms( HText *text )
{
  TextAnchor *anchor_ptr;
  if ( text == 0 )
  {
  }
  else
  {
    anchor_ptr = &text->first_anchor;
    for ( ; anchor_ptr;  )
    {
      if ( anchor_ptr->link_type == 2 )
      {
        if ( anchor_ptr->input_field->type == 4 || anchor_ptr->input_field->type == 3 )
        {
          if ( ( anchor_ptr->input_field->orig_value[0] == '0' && anchor_ptr->input_field->num_value == 1 ) || ( anchor_ptr->input_field->orig_value[0] != '0' && anchor_ptr->input_field->num_value == 0 ) )
          {
            break;
          }
        }
        else
        if ( anchor_ptr->input_field->type == 7 )
        {
          if ( strcmp( &anchor_ptr->input_field->value, &anchor_ptr->input_field->orig_value ) )
          {
            break;
          }
          else
          {
            if ( strcmp( &anchor_ptr->input_field->cp_submit_value, &anchor_ptr->input_field->orig_submit_value ) )
            {
              break;
            }
          }
        }
        else
        {
          if ( strcmp( &anchor_ptr->input_field->value, &anchor_ptr->input_field->orig_value ) )
          {
            break;
          }
        }
      }
      anchor_ptr = &anchor_ptr->next;
    }
  }
  return 1;
}
void HText_activateRadioButton( FormInfo *form )
{
  TextAnchor *anchor_ptr;
  int form_number = form->number;
  if ( HTMainText )
  {
    anchor_ptr = &HTMainText->first_anchor;
    for ( ; anchor_ptr;  )
    {
      if ( anchor_ptr->link_type == 2 && anchor_ptr->input_field->type == 4 )
      {
        if ( anchor_ptr->input_field->number == form_number )
        {
          if ( !strcmp( &anchor_ptr->input_field->name[0], &form->name[0] ) && anchor_ptr->input_field->num_value )
          {
            anchor_ptr->input_field->num_value = 0;
            break;
          }
        }
        else
        if ( form_number < anchor_ptr->input_field->number )
          break;
      }
      anchor_ptr = &anchor_ptr->next;
    }
    *(int*)&form->num_value = 1;
  }
  return;
}
char *stub_HTAnchor_address( HTAnchor *me )
{
  char *addr = 0;
  if ( me )
  {
    HTSACopy( &addr, &me[0]._HTAnchor );
  }
  return addr;
}
void HText_setToolbar( HText *text )
{
  if ( text )
  {
    text->toolbar = 1;
  }
  return;
}
BOOLEAN HText_hasToolbar( HText *text )
{
  return 0;
}
void HText_setNoCache( HText *text )
{
  if ( text )
  {
    text->no_cache = 1;
  }
  return;
}
BOOLEAN HText_hasNoCacheSet( HText *text )
{
  return 0;
}
BOOLEAN HText_hasUTF8OutputSet( HText *text )
{
  return 0;
}
void HText_setKcode( HText *text, char *charset, LYUCcharset *p_in )
{
  BOOLEAN charset_explicit;
  if ( text && ( charset || p_in ) )
  {
    charset_explicit = charset != 0;
    if ( charset == 0 || charset[0] == 0 )
      charset = &p_in->MIMEname;
    if ( charset == 0 || charset[0] == 0 )
    {
      return;
    }
    if ( charset_explicit && ( strcmp( charset, "shift_jis" ) == 0 || strcmp( charset, "x-sjis" ) == 0 || strcmp( charset, "x-shift-jis" ) == 0 ) )
      text->kcode = 2;
    else
    if ( charset_explicit && strcmp( charset, "utf-8" ) && ( ( p_in && p_in->enc == 5 ) || strcmp( charset, "x-euc" ) == 0 || strcmp( charset, "euc-jp" ) == 0 || strncmp( charset, "x-euc-", 6 ) == 0 || strcmp( charset, "euc-kr" ) == 0 || strcmp( charset, "iso-2022-kr" ) == 0 || strcmp( charset, "big5" ) == 0 || strcmp( charset, "cn-big5" ) == 0 || strcmp( charset, "euc-cn" ) == 0 || strcmp( charset, "gb2312" ) == 0 || strncmp( charset, "cn-gb", 5 ) == 0 || strcmp( charset, "iso-2022-cn" ) == 0 ) )
      text->kcode = 1;
    else
    {
      text->kcode = 0;
      if ( HTCJK && ( p_in == 0 || ( p_in->enc != 5 && p_in->enc != 7 ) ) )
        HTCJK = NOCJK;
    }
    if ( charset_explicit && strcmp( charset, "utf-8" ) )
    {
      text->specified_kcode = text->kcode;
    }
    else
    {
      if ( UCAssume_MIMEcharset == 0 )
      {
        return;
      }
      if ( strcmp( UCAssume_MIMEcharset, "euc-jp" ) == 0 )
      {
        text->kcode = text->specified_kcode = 1;
      }
      else
      {
        if ( strcmp( UCAssume_MIMEcharset, "shift_jis" ) == 0 )
        {
          text->kcode = text->specified_kcode = 2;
        }
      }
    }
  }
  return;
}
void HText_setBreakPoint( HText *text )
{
  if ( text )
  {
    text->permissible_split = text->last_line->size;
  }
  return;
}
BOOLEAN HText_AreDifferent( HTParentAnchor *anchor, char *full_address )
{
  HTParentAnchor *MTanc;
  char *MTaddress;
  char *MTpound;
  if ( HTMainText == 0 || anchor == 0 || full_address == 0 )
  {
  }
  MTanc = &HTMainText->node_anchor->parent->parent;
  if ( MTanc->address == 0 || anchor->address == 0 )
  {
  }
  if ( strchr( full_address, '#' ) == 0 )
  {
  }
  if ( strncasecomp( &anchor->address, "LYNXIMGMAP:", 11 ) == 0 )
  {
  }
  if ( anchor->isHEAD != MTanc->isHEAD )
  {
  }
  MTaddress = strncasecomp( &MTanc->address, "LYNXIMGMAP:", 11 ) ? &MTanc->address : &MTanc->address[11];
  MTpound = trimPoundSelector( MTaddress );
  if ( strcmp( MTaddress, &anchor->address ) )
  {
    if ( MTpound )
      MTpound[0] = '#';
  }
  else
  {
    if ( MTpound )
      MTpound[0] = '#';
    if ( MTanc->address == MTaddress )
    {
      if ( MTanc->post_data )
      {
        if ( anchor->post_data == 0 )
        {
        }
        if ( ( HTSABEql( &MTanc->post_data, &anchor->post_data ) & 255 ) == 0 )
        {
        }
      }
      else
      if ( anchor->post_data )
      {
      }
    }
  }
  return 0;
}
int increment_tagged_htline( HTLine *ht, TextAnchor *a, int *lx_val, int *old_val, int incr, int mode )
{
  int eax;
  char buf[1024];
  char lxbuf[2048];
  TextAnchor *st_anchor = a;
  TextAnchor *nxt_anchor;
  char *p = &ht->data[0];
  char *s = buf;
  char *lx = lxbuf;
  char *t;
  BOOLEAN plx = 0;
  BOOLEAN valid;
  int val;
  int n;
  int new_n;
  int pre_n;
  int post_n;
  int fixup = 0;
  if ( lx_val[0] )
  {
    nxt_anchor = st_anchor;
    for ( ; nxt_anchor && nxt_anchor->line_num == a->line_num;  )
    {
      nxt_anchor->line_pos = lx_val[0] + nxt_anchor->line_pos;
      nxt_anchor = &nxt_anchor->next;
    }
    fixup = lx_val;
    lx_val = 0;
    if ( st_anchor )
    {
      st_anchor = &st_anchor->next;
      while ( p == 0 )
      {
        if ( p == '[' )
        {
          s = p;
          s++;
          p++;
          t = p;
          n = 0;
          valid = 1;
          while ( t != ']' )
          {
            if ( t == 0 )
            {
              valid = 0;
              plx = 1;
              break;
            }
            else
            {
              t++;
              if ( ( ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( t * 2 )) & 2048 ) != 0 ) & 255 ) == 0 )
              {
                valid = 0;
                break;
              }
              else
              {
                n++;
              }
            }
          }
          if ( valid && n > 0 )
          {
            val = atoi( p );
            if ( old_val == val || old_val == 0 )
            {
              if ( old_val )
                old_val++;
              val += incr;
              sprintf( s, "%d", val );
              new_n = strlen( s );
              s = &s[ new_n ];
              p = &p[ n ];
              new_n -= n;
              if ( new_n )
              {
                nxt_anchor = st_anchor;
                for ( ; nxt_anchor && nxt_anchor->line_num == a->line_num;  )
                {
                  nxt_anchor->line_pos = new_n + nxt_anchor->line_pos;
                  nxt_anchor = &nxt_anchor->next;
                }
                if ( st_anchor )
                  st_anchor = &st_anchor->next;
              }
            }
          }
          pre_n = strlen( p );
          post_n = strlen( &ht->data[0] );
          if ( plx == 0 || pre_n + post_n + 2 > 2047 )
            continue;
          else
          {
            strcpy( lx, p );
            strcat( lx, &ht->data[0] );
            t = lx;
            n = 0;
            valid = 1;
            while ( t[0] != ']' )
            {
              t++;
              if ( ( ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( t[0] * 2 )) & 2048 ) != 0 ) & 255 ) == 0 )
              {
                valid = 0;
                break;
              }
              else
              {
                n++;
              }
            }
            if ( valid && n > 0 && post_n + n + 2 <= 1023 )
            {
              val = atoi( lx );
              if ( old_val[0] == val || old_val[0] == 0 )
              {
                if ( old_val[0] )
                  old_val[0]++;
                val += incr;
                sprintf( lx, "%d", val );
                new_n = strlen( lx );
                strcat( lx, strchr( &ht->data[0], ']' ) );
                s = pre_n + strncpy( s, lx, pre_n );
                lx = &lx[ pre_n ];
                strcpy( &ht->data[0], lx );
                lx_val[0] = new_n - n;
              }
            }
          }
        }
        else
        {
          s[0] = p[0];
          s++;
          p++;
        }
        s[0] = 0;
        n = strlen( &ht->data[0] );
        if ( mode == 1 )
          buf[ n ] = 0;
        else
        {
          if ( strlen( buf ) <= ht->size )
          {
            strcpy( &ht->data[0], buf );
            return fixup + ( strlen( buf ) - n );
          }
        {
          HTLine *temp = (HTLine*)ALLOC_IN_POOL( &HTMainText->pool, strlen( buf ) + 20 );
          if ( temp == 0 )
            outofmem( "./GridText.c", "increment_tagged_htline" );
          memcpy( temp, ht, 20 );
          temp->styles = ALLOC_IN_POOL( &HTMainText->pool, ht->numstyles << 2 );
          if ( temp->styles == 0 )
            outofmem( "./GridText.c", "increment_tagged_htline" );
          memcpy( &temp->styles, &ht->styles, ht->numstyles << 2 );
          ht->prev = ht = temp;
          ht->prev = ht;
        }
        }
      }
    }
  }
}
void insert_new_textarea_anchor( TextAnchor **curr_anchor, HTLine **exit_htline )
{
  TextAnchor *anchor = curr_anchor[0];
  HTLine *htline;
  TextAnchor *a = 0;
  FormInfo *f = 0;
  HTLine *l = 0;
  int curr_tag = 0;
  int lx = 0;
  int i;
  htline = &HTMainText->last_line->next;
  i = 0;
  for ( ; anchor->line_num != i; i++ )
  {
    htline = &htline->next;
    if ( HTMainText->last_line == htline )
      break;
    else
    {
      // i++;
    }
  }
  l = (HTLine*)ALLOC_IN_POOL( &HTMainText->pool, 1044 );
  a = (TextAnchor*)ALLOC_IN_POOL( &HTMainText->pool, 52 );
  f = (FormInfo*)ALLOC_IN_POOL( &HTMainText->pool, 96 );
  if ( a == 0 || l == 0 || f == 0 )
    outofmem( "./GridText.c", "insert_new_textarea_anchor" );
  a->next = anchor->next;
  a->number = anchor->number;
  a->line_pos = anchor->line_pos;
  a->extent = anchor->extent;
  a->sgml_offset = SGML_offset( );
  a->line_num = anchor->line_num + 1;
  LYCopyHiText( a, anchor );
  a->link_type = anchor->link_type;
  a->input_field = f;
  a->show_anchor = anchor->show_anchor;
  a->inUnderline = anchor->inUnderline;
  a->expansion_anch = 1;
  a->anchor = 0;
  HTSACopy( &f->name, &anchor->input_field->name[0] );
  f->number = anchor->input_field->number;
  f->type = anchor->input_field->type;
  HTSACopy( &f->orig_value, "" );
  f->size = anchor->input_field->size;
  f->maxlength = anchor->input_field->maxlength;
  f->no_cache = anchor->input_field->no_cache;
  f->disabled = anchor->input_field->disabled;
  f->value_cs = current_char_set;
  l->next = htline->next;
  l->prev = htline;
  l->offset = htline->offset;
  l->size = htline->size;
  l->numstyles = htline->numstyles;
  l->styles = htline->styles;
  strcpy( &l->data[0], &htline->data[0] );
  htline->prev = l;
  htline->next = l;
  if ( keypad_mode == 3 || keypad_mode == 2 )
  {
    a->number++;
    increment_tagged_htline( l, a, &lx, &curr_tag, 1, 1 );
  }
  if ( HTMainText->last_anchor == anchor )
    HTMainText->last_anchor = a;
  if ( HTMainText->last_line == htline )
  {
    HTMainText->last_line = l;
  }
  anchor->next = a;
  curr_anchor = a;
  exit_htline = &l->next;
  return;
}
void update_subsequent_anchors( int newlines, TextAnchor *start_anchor, HTLine *start_htline, int start_tag )
{
  TextAnchor *anchor;
  HTLine *htline = start_htline;
  int line_adj = 0;
  int tag_adj = 0;
  int lx = 0;
  int hang = 0;
  int hang_detect = 0x186a0;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "GridText: adjusting struct's to add %d new line(s)\n", newlines );
  }
  anchor = &start_anchor->next;
  for ( ; anchor;  )
  {
    if ( ( keypad_mode == 3 || keypad_mode == 2 ) && anchor->number )
      anchor->number += newlines;
    anchor->line_num += newlines;
    anchor = &anchor->next;
  }
  if ( keypad_mode == 3 || keypad_mode == 2 )
  {
    anchor = &start_anchor->next;
    for ( ; HTMainText->last_line->next != htline;  )
    {
      for ( ; anchor && anchor->number != start_tag;  )
      {
        hang++;
        if ( anchor->next != anchor && hang < hang_detect )
          continue;
        else
        {
          HTAlert( gettext( "Hang Detect: TextAnchor struct corrupted - suggest aborting!" ) );
        }
      }
      if ( anchor )
      {
        line_adj = increment_tagged_htline( htline, anchor, &lx, &start_tag, newlines, 0 );
        htline->size = line_adj + htline->size;
        tag_adj += line_adj;
        htline = &htline->next;
      }
    }
  }
  nlinks += newlines;
  HTMainText->Lines += newlines;
  HTMainText->last_anchor_number += newlines;
  more_text = HText_canScrollDown( );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "GridText: TextAnchor and HTLine struct's adjusted\n" );
  }
  return;
}
BOOLEAN IsFormsTextarea( FormInfo *form, TextAnchor *anchor_ptr )
{
  return ( anchor_ptr->link_type == 2 && anchor_ptr->input_field->type == 9 && anchor_ptr->input_field->number == form->number && strcmp( &anchor_ptr->input_field->name[0], &form->name[0] ) == 0 ? 1 : 0 );
}
int finish_ExtEditForm( LinkInfo *form_link, TextAnchor *start_anchor, char *ed_temp, int orig_cnt )
{
  int edx;
  struct stat stat_info;
  size_t size;
  FILE *fp;
  TextAnchor *anchor_ptr;
  TextAnchor *end_anchor = 0;
  BOOLEAN wrapalert = 0;
  int entry_line = form_link->anchor_line_num;
  int exit_line = 0;
  int line_cnt = 1;
  HTLine *htline = 0;
  char *ebuf;
  char *line;
  char *lp;
  char *cp;
  int match_tag = 0;
  int newlines = 0;
  int len, len0, len_in;
  int wanted_fieldlen_wrap = -1;
  char *skip_at = 0;
  int skip_num = 0, i;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "GridText: entered HText_ExtEditForm()\n" );
  }
  if ( stat64( ed_temp, &stat_info.st_dev ) >= 0 && ( stat_info.st_mode & 61440 ) == 32768 )
  {
    size = (unsigned int)(stat_info.st_size & 0xFFFFFFFF);
    if ( size == 0 )
      goto B7;
    else
    {
      ebuf = calloc( size + 1, sizeof( char ) );
      if ( ebuf == 0 )
      {
        HTAlwaysAlert( 0, gettext( "Not enough memory for file!" ) );
        return 0;
      }
      fp = fopen64( ed_temp, "r" );
      size = fread( ebuf, 1, size, fp );
      LYCloseInput( fp );
      ebuf[ size ] = 0;
      while ( size )
      {
        if ( LYtrimInputFields )
        {
          if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( ebuf[ size + -1 ] * 2 )) & 8192 ) == 0 )
            goto B33;
          else
          {
            size += -1;
            ebuf[ size ] = 0;
          }
        }
        else
        {
          if ( ( ebuf[ size + -1 ] == '\r' || ebuf[ size + -1 ] == '\n' ? 1 : 0 ) == 0 )
            goto B33;
        }
B33:;
        if ( ebuf[ size + -1 ] == 0 )
          continue;
        else
          break;
      }
      line = (char*)malloc( 1024 );
      if ( line == 0 )
        outofmem( "./GridText.c", "HText_ExtEditForm" );
      anchor_ptr = start_anchor;
      if ( anchor_ptr->input_field->size <= 4 || anchor_ptr->input_field->size > 1023 )
        wanted_fieldlen_wrap = 0;
      len = len_in = 0;
      lp = ebuf;
      for ( ; line_cnt <= orig_cnt || lp[0] || ( len && lp[0] == 0 ); line_cnt++ )
      {
        if ( skip_at )
        {
          len0 = skip_at - lp;
          strncpy( line, lp, len0 );
          line[ len0 ] = 0;
          lp = &skip_at[ skip_num ];
          skip_at = 0;
          skip_num = 0;
        }
        else
          len0 = 0;
        line[ len0 ] = 0;
        cp = strchr( lp, '\n' );
        if ( cp )
        {
          len = len_in = cp - lp;
        }
        else
        {
          len = len_in = strlen( lp );
        }
        if ( wanted_fieldlen_wrap < 0 && wrapalert == 0 && start_anchor->input_field->size <= len0 + len )
        {
          cp = strchr( lp, ' ' );
          if ( cp && cp - lp < start_anchor->input_field->size + -1 )
          {
            LYFixCursesOn( "ask for confirmation:" );
            LYerase( );
            if ( HTConfirmDefault( gettext( "Wrap lines to fit displayed area?" ), 0 ) )
              wanted_fieldlen_wrap = start_anchor->input_field->size + -1;
            else
              wanted_fieldlen_wrap = 0;
          }
        }
        if ( wanted_fieldlen_wrap > 0 && wanted_fieldlen_wrap < len0 + len )
        {
          i = wanted_fieldlen_wrap - len0;
          for ( ; wanted_fieldlen_wrap / 4 <= len0 + i;  )
          {
            if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( lp[ i ] * 2 )) & 8192 )
            {
              len = i + 1;
              cp = &lp[ i ];
              if ( cp[1] != '\n' && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[1] * 2 )) & 8192 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[2] * 2 )) & 8192 ) == 0 )
              {
                len++;
                cp++;
              }
              if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[1] * 2 )) & 8192 ) == 0 )
              {
                for ( ; cp[0] && cp[0] != '\r' && cp[0] != '\n' && cp - lp <= len + ( ( wanted_fieldlen_wrap * 3 ) / 4 ); cp++ )
                {
                  // cp++;
                }
                if ( cp[0] == '\r' && cp[1] == '\n' )
                  cp++;
                if ( cp[0] == '\n' && ( cp[1] == '\r' || cp[1] == '\n' || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[1] * 2 )) & 8192 ) == 0 ) )
                {
                  cp[0] = ' ';
                  for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[ -1 ] * 2 )) & 8192;  )
                  {
                    skip_num++;
                    cp = &cp[ -1 ];
                  }
                  skip_at = cp;
                  break;
                }
              }
            }
            else
            {
              i += -1;
            }
          }
        }
        if ( wanted_fieldlen_wrap > 0 && wanted_fieldlen_wrap < len0 + len )
        {
          i = len + -1;
          for ( ; wanted_fieldlen_wrap < len0 + i + 1 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( lp[ i ] * 2 )) & 8192 );  )
          {
            i += -1;
          }
          if ( wanted_fieldlen_wrap < len0 + i + 1 )
            len = wanted_fieldlen_wrap - len0;
        }
        if ( len0 + len > 1023 )
        {
          if ( wrapalert == 0 )
          {
            LYFixCursesOn( "show alert:" );
            HTAlert( gettext( "Very long lines have been wrapped!" ) );
            wrapalert = 1;
          }
          i = 1023 - len0;
          for ( ; i > 0;  )
          {
            if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( lp[ i ] * 2 )) & 8192 )
            {
              len = i;
              break;
            }
            else
            {
              i += -1;
            }
          }
          if ( len0 + len > 1023 )
            len = 1023 - len0;
        }
        strncat( line, lp, len );
        line[ len0 + len ] = 0;
        if ( orig_cnt < line_cnt )
        {
          insert_new_textarea_anchor( &end_anchor, &htline );
          anchor_ptr = end_anchor;
          newlines++;
        }
        HTSACopy( &anchor_ptr->input_field->value, line );
        if ( len0 + len > 0 )
          exit_line = 0;
        else
        if ( exit_line == 0 )
          exit_line = anchor_ptr->line_num;
        lp = &lp[ len ];
        if ( lp[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( lp[0] * 2 )) & 8192 ) )
          lp++;
        end_anchor = anchor_ptr;
        anchor_ptr = &anchor_ptr->next;
        if ( anchor_ptr )
          match_tag = anchor_ptr->number;
        // line_cnt++;
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "GridText: edited text inserted into lynx struct's\n" );
      }
      if ( newlines > 0 )
        update_subsequent_anchors( newlines, end_anchor, htline, match_tag );
      if ( line )
      {
        free( line );
        line = 0;
      }
      if ( ebuf )
      {
        free( ebuf );
        ebuf = 0;
      }
      return exit_line - entry_line;
    }
  }
B7:;
  size = 0;
  ebuf = calloc( 1, sizeof( char ) );
  if ( ebuf == 0 )
  {
    outofmem( "./GridText.c", "HText_ExtEditForm" );
  }
}
int HText_ExtEditForm( LinkInfo *form_link )
{
  int eax;
  char *ed_temp;
  FILE *fp;
  TextAnchor *anchor_ptr;
  TextAnchor *start_anchor = 0;
  BOOLEAN firstanchor = 1;
  char ed_offset[10];
  int start_line = 0;
  int entry_line = form_link->anchor_line_num;
  int orig_cnt = 0;
  int offset;
  FormInfo *form = &form_link->l_form;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "GridText: entered HText_ExtEditForm()\n" );
  }
  ed_temp = (char*)malloc( 256 );
  fp = LYOpenTemp( ed_temp, "", "w" );
  if ( fp == 0 )
  {
    if ( ed_temp )
    {
      free( ed_temp );
      ed_temp = 0;
    }
    return 0;
  }
  else
  {
    anchor_ptr = &HTMainText->first_anchor;
    for ( ; anchor_ptr == 0;  )
    {
      if ( IsFormsTextarea( form, anchor_ptr ) & 255 )
      {
        if ( firstanchor )
        {
          firstanchor = 0;
          start_anchor = anchor_ptr;
          start_line = anchor_ptr->line_num;
        }
        orig_cnt++;
        fputs( &anchor_ptr->input_field->value, fp );
        fputc( 10, fp );
        anchor_ptr = &anchor_ptr->next;
      }
      else
      if ( firstanchor )
        continue;
      LYCloseTempFP( fp );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "GridText: TEXTAREA name=|%s| dumped to tempfile\n", &form->name[0] );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "GridText: invoking editor (%s) on tempfile\n", editor );
      }
      ed_offset[0] = 0;
      if ( entry_line - start_line > 0 && ( editor_can_position( ) & 255 ) )
        sprintf( ed_offset, "%d", ( entry_line - start_line ) + 1 );
      edit_temporary_file( ed_temp, ed_offset, 0 );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "GridText: returned from editor (%s)\n", editor );
      }
      if ( form->disabled )
        offset = 0;
      else
      {
        offset = finish_ExtEditForm( form_link, start_anchor, ed_temp, orig_cnt );
      }
      LYRemoveTemp( ed_temp );
      if ( ed_temp )
      {
        free( ed_temp );
        ed_temp = 0;
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "GridText: exiting HText_ExtEditForm()\n" );
      }
      return offset;
    }
  }
}
void HText_ExpandTextarea( LinkInfo *form_link, int newlines )
{
  TextAnchor *anchor_ptr;
  TextAnchor *end_anchor = 0;
  BOOLEAN firstanchor = 1;
  FormInfo *form = &form_link->l_form;
  HTLine *htline = 0;
  int match_tag = 0;
  int i;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "GridText: entered HText_ExpandTextarea()\n" );
  }
  if ( newlines > 0 )
  {
    anchor_ptr = &HTMainText->first_anchor;
    for ( ; anchor_ptr;  )
    {
      if ( IsFormsTextarea( form, anchor_ptr ) & 255 )
      {
        if ( firstanchor )
          firstanchor = 0;
        end_anchor = anchor_ptr;
      }
      else
      if ( firstanchor == 0 )
        break;
      anchor_ptr = &anchor_ptr->next;
    }
    i = 1;
    for ( ; i <= newlines; i++ )
    {
      insert_new_textarea_anchor( &end_anchor, &htline );
      HTSACopy( &end_anchor->input_field->value, "" );
      if ( end_anchor->next )
        match_tag = end_anchor->number;
      // i++;
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "GridText: %d blank line(s) added to TEXTAREA name=|%s|\n", newlines, &form->name[0] );
    }
    update_subsequent_anchors( newlines, end_anchor, htline, match_tag );
    if ( WWW_TraceFlag == 0 )
    {
      return;
    }
    fprintf( TraceFP( ), "GridText: exiting HText_ExpandTextarea()\n" );
  }
  return;
}
int HText_InsertFile( LinkInfo *form_link )
{
  int edx;
  struct stat stat_info;
  size_t size;
  FILE *fp;
  char *fn;
  TextAnchor *anchor_ptr;
  TextAnchor *prev_anchor = 0;
  TextAnchor *end_anchor = 0;
  BOOLEAN firstanchor = 1;
  BOOLEAN truncalert = 0;
  FormInfo *form = &form_link->l_form;
  HTLine *htline = 0;
  TextAnchor *a = 0;
  FormInfo *f = 0;
  HTLine *l = 0;
  char *fbuf;
  char *line;
  char *lp;
  char *cp;
  int entry_line = form_link->anchor_line_num;
  int file_cs;
  int match_tag = 0;
  int newlines = 0;
  int len;
  int i;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "GridText: entered HText_InsertFile()\n" );
  }
  fn = GetFileName( );
  if ( fn == 0 )
  {
    HTInfoMsg( gettext( "File insert cancelled!!!" ) );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "GridText: file insert cancelled - no filename provided\n" );
    }
    return 0;
  }
  else
  {
    if ( ( no_dotfiles || show_dotfiles == 0 ) && *(char*)(LYPathLeaf( fn )) == '.' )
    {
      HTUserMsg( gettext( "File name may not begin with a dot." ) );
      return 0;
    }
    if ( stat64( fn, &stat_info.st_dev ) >= 0 )
    {
      size = (unsigned int)(stat_info.st_size & 0xFFFFFFFF);
      if ( size == 0 )
        goto B23;
      else
      {
        fbuf = calloc( size + 1, sizeof( char ) );
        if ( fbuf == 0 )
        {
          free( fn );
          HTAlert( gettext( "Not enough memory for file!" ) );
          return 0;
        }
        LYGetFileInfo( fn, 0, 0, 0, 0, 0, &file_cs );
        fp = fopen64( fn, "r" );
        if ( fp == 0 )
        {
          free( fbuf );
          free( fn );
          HTAlert( gettext( "Can't open file for reading." ) );
          return 0;
        }
        size = fread( fbuf, 1, size, fp );
        LYCloseInput( fp );
        if ( fn )
        {
          free( fn );
          fn = 0;
        }
        fbuf[ size ] = 0;
        anchor_ptr = &HTMainText->first_anchor;
        for ( ; anchor_ptr && ( !( IsFormsTextarea( form, anchor_ptr ) & 255 ) || anchor_ptr->line_num != entry_line );  )
        {
          prev_anchor = anchor_ptr;
          anchor_ptr = &anchor_ptr->next;
        }
        htline = &HTMainText->last_line->next;
        i = 0;
        for ( ; anchor_ptr->line_num != i; i++ )
        {
          htline = &htline->next;
          if ( HTMainText->last_line == htline )
            break;
          else
          {
            // i++;
          }
        }
        l = (HTLine*)ALLOC_IN_POOL( &HTMainText->pool, 1044 );
        a = (TextAnchor*)ALLOC_IN_POOL( &HTMainText->pool, 52 );
        f = (FormInfo*)ALLOC_IN_POOL( &HTMainText->pool, 96 );
        if ( a == 0 || l == 0 || f == 0 )
          outofmem( "./GridText.c", "HText_InsertFile" );
        a->next = anchor_ptr;
        a->number = anchor_ptr->number;
        a->line_pos = anchor_ptr->line_pos;
        a->extent = anchor_ptr->extent;
        a->sgml_offset = SGML_offset( );
        a->line_num = anchor_ptr->line_num;
        LYCopyHiText( a, anchor_ptr );
        a->link_type = anchor_ptr->link_type;
        a->input_field = f;
        a->show_anchor = anchor_ptr->show_anchor;
        a->inUnderline = anchor_ptr->inUnderline;
        a->expansion_anch = 1;
        a->anchor = 0;
        HTSACopy( &f->name, &anchor_ptr->input_field->name[0] );
        f->number = anchor_ptr->input_field->number;
        f->type = anchor_ptr->input_field->type;
        HTSACopy( &f->orig_value, "" );
        f->size = anchor_ptr->input_field->size;
        f->maxlength = anchor_ptr->input_field->maxlength;
        f->no_cache = anchor_ptr->input_field->no_cache;
        f->disabled = anchor_ptr->input_field->disabled;
        f->value_cs = current_char_set;
        l->offset = htline->offset;
        l->size = htline->size;
        l->numstyles = htline->numstyles;
        l->styles = htline->styles;
        strcpy( &l->data[0], &htline->data[0] );
        if ( HTMainText->first_anchor == anchor_ptr )
          HTMainText->first_anchor = a;
        if ( prev_anchor )
          prev_anchor->next = a;
        htline = &htline->prev;
        l->next = htline->next;
        l->prev = htline;
        htline->prev = l;
        htline->next = l;
        htline = &htline->next;
        htline = &htline->next;
        anchor_ptr = a;
        newlines++;
        line = (char*)malloc( 1024 );
        if ( line == 0 )
          outofmem( "./GridText.c", "HText_InsertFile" );
        match_tag = anchor_ptr->number;
        len = 0;
        lp = fbuf;
        for ( ; lp;  )
        {
          cp = strchr( lp, '\n' );
          if ( cp )
            len = cp - lp;
          else
          {
            len = strlen( lp );
          }
          if ( len > 1023 )
          {
            if ( truncalert == 0 )
            {
              HTAlert( gettext( "Very long lines have been truncated!" ) );
              truncalert = 1;
            }
            len = 1023;
            if ( lp[ len ] )
              lp[ len + 1 ] = 0;
          }
          strncpy( line, lp, len );
          line[ len ] = 0;
          if ( firstanchor == 0 )
          {
            insert_new_textarea_anchor( &end_anchor, &htline );
            anchor_ptr = end_anchor;
            newlines++;
          }
          HTSACopy( &anchor_ptr->input_field->value, line );
          if ( file_cs >= 0 )
            anchor_ptr->input_field->value_cs = file_cs;
          lp = &lp[ len ];
          if ( lp[0] )
            lp++;
          firstanchor = 0;
          end_anchor = anchor_ptr;
          anchor_ptr = &anchor_ptr->next;
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "GridText: file inserted into lynx struct's\n" );
        }
        update_subsequent_anchors( newlines, end_anchor, htline, match_tag );
        if ( line )
        {
          free( line );
          line = 0;
        }
        if ( fbuf )
        {
          free( fbuf );
          fbuf = 0;
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "GridText: exiting HText_InsertFile()\n" );
        }
        return newlines;
      }
    }
B23:;
    HTInfoMsg( gettext( "Nothing to insert - file is 0-length." ) );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "GridText: file insert aborted - file=|%s|- was 0-length\n", fn );
    }
    if ( fn )
    {
      free( fn );
      fn = 0;
    }
    return 0;
  }
}
int GetColumn( void )
{
  int result;
  int y = -1, x = -1;
  result = x;
  return result;
}
BOOLEAN DidWrap( int y0, int x0 )
{
  BOOLEAN result = 0;
  int y = -1, x = -1;
  if ( ( LYwideLines ? 1014 : LYcols ) <= x || ( x == 0 && y0 != y ) )
  {
    result = 1;
  }
  return result;
}
void redraw_part_of_line( HTLine *line, char *str, int len, HText *text )
{
  int i;
  char buffer[7];
  char *data, *end_of_data;
  size_t utf_extra = 0;
  int current_style = 0;
  int tcols, scols;
  char LastDisplayChar = ' ';
  int YP = -1, XP = -1;
  i = XP;
  buffer = buffer = buffer = 0;
  data = str;
  end_of_data = &data[ len ];
  i++;
  while ( data < end_of_data )
  {
    buffer = data;
    data++;
    tcols = GetColumn( );
    scols = StyleToCols( text, line, current_style );
    for ( ; current_style < line->numstyles && scols <= tcols;  )
    {
      curses_style( line->styles[ current_style ].bits_at_0/*.3_4of4*/, __MOD(line->styles[ current_style ].bits_at_0/*.1_1of4*/,4) );
      current_style++;
      scols = StyleToCols( text, line, current_style );
    }
    if ( buffer[0] == 7 )
    {
      if ( !data[0] && !( *(short*)(*(int*)(__ctype_b_loc( )) + ( LastDisplayChar * 2 )) & 8192 ) && LastDisplayChar != '-' )
        buffer[0] = '-';
    }
    else
    if ( buffer[0] == 8 )
    {
      if ( dump_output_immediately )
        continue;
      else
      {
        waddch( LYwin, 43 );
        i++;
      }
    }
    if ( text->T.output_utf8 && buffer[0] < 0 )
    {
      utf_extra = utf8_length( text->T.output_utf8, &data[ -1 ] );
      LastDisplayChar = 'M';
    }
    if ( utf_extra )
    {
      strncpy( &buffer[1], data, utf_extra );
      buffer[ utf_extra + 1 ] = 0;
      LYwaddnstr( LYwin, buffer, strlen( buffer ) );
      buffer[1] = 0;
      data = &data[ utf_extra ];
      utf_extra = 0;
    }
    else
    if ( HTCJK && buffer[0] < 0 )
    {
      if ( i <= ( LYwideLines ? 1014 : LYcols ) )
      {
        buffer[1] = data[0];
        buffer[2] = 0;
        data++;
        i++;
        LYwaddnstr( LYwin, buffer, strlen( buffer ) );
        buffer[1] = 0;
        LastDisplayChar = 'M';
      }
    }
    else
    {
      LYwaddnstr( LYwin, buffer, strlen( buffer ) );
      LastDisplayChar = buffer[0];
    }
    if ( ( DidWrap( YP, XP ) & 255 ) == 0 )
    {
      i++;
    }
  }
  for ( ; current_style < line->numstyles; current_style++ )
  {
    curses_style( line->styles[ current_style ].bits_at_0/*.3_4of4*/, __MOD(line->styles[ current_style ].bits_at_0/*.1_1of4*/,4) );
    // current_style++;
  }
  return;
}
void redraw_lines_of_link( int cur )
{
  HTLine *todr1;
  int lines_back;
  int row, col, count;
  char *text;
  if ( HTMainText->next_line == HTMainText->last_line )
    lines_back = HTMainText->Lines + ( 1 - links[ cur ].ly - HTMainText->top_of_screen );
  else
    lines_back = display_lines + ( 1 - links[ cur ].ly );
  todr1 = &HTMainText->next_line;
  while ( lines_back += -1, ( lines_back > 0 ) & 255 )
  {
    todr1 = &todr1->prev;
  }
  row = links[ cur ].ly;
  if ( no_title )
    row += -1;
  count = 0;
  for ( ; row <= display_lines; count++ )
  {
    text = LYGetHiliteStr( cur, count );
    if ( text == 0 )
      break;
    col = LYGetHilitePos( cur, count );
    LYmove( row, col );
    row++;
    redraw_part_of_line( todr1, text, strlen( text ), HTMainText );
    todr1 = &todr1->next;
    // count++;
  }
  return;
}
void HTMark_asSource( void )
{
  if ( HTMainText )
  {
    HTMainText->source = 1;
  }
  return;
}
HTkcode HText_getKcode( HText *text )
{
  return text->kcode;
}
void HText_updateKcode( HText *text, HTkcode kcode )
{
  text->kcode = kcode;
  return;
}
HTkcode HText_getSpecifiedKcode( HText *text )
{
  return text->specified_kcode;
}
void HText_updateSpecifiedKcode( HText *text, HTkcode kcode )
{
  text->specified_kcode = kcode;
  return;
}
int HTMainText_Get_UCLYhndl( void )
{
  return -1;
}
#if 0
#endif
