#include "GridText.c.h"
static pool_data *ALLOC_IN_POOL( HTPool **ppoolptr, unsigned int request );
static HTPool *POOL_NEW( void );
static void POOL_FREE( HTPool *poolptr );
static void HText_halt( void );
static BOOLEAN mem_is_avail( size_t factor, size_t bytes );
static void *LY_check_calloc( size_t nmemb, size_t size );
static int StyleToCols( HText *text, HTLine *line, int nstyle );
static void LYClearHiText( TextAnchor *a );
static void LYSetHiText( TextAnchor *a, char *text, int len );
static void LYAddHiText( TextAnchor *a, char *text, int x );
static int LYAdjHiTextPos( TextAnchor *a, int count );
static char *LYGetHiTextStr( TextAnchor *a, int count );
static int LYGetHiTextPos( TextAnchor *a, int count );
static void LYCopyHiText( TextAnchor *a, TextAnchor *b );
static void HText_getChartransInfo( HText *me );
static void PerFormInfo_free( PerFormInfo *form );
static void free_form_fields( FormInfo *input_field );
static void FormList_delete( HTList *forms );
static void ResetPartialLinenos( HText *text );
static int display_line( HTLine *line, HText *text, int scrline, char *target );
static void display_title( HText *text );
static void display_scrollbar( HText *text );
static void display_page( HText *text, int line_number, char *target );
static int set_style_by_embedded_chars( char *s, char *e, unsigned char start_c, unsigned char end_c );
static void move_anchors_in_region( HTLine *line, int line_number, TextAnchor **prev_anchor, int *prev_head_processed, int sbyte, int ebyte, int shift );
static HTLine *insert_blanks_in_line( HTLine *line, int line_number, HText *text, TextAnchor **prev_anchor, int ninserts, int *oldpos, int *newpos );
static HTStyleChange *skip_matched_and_correct_offsets( HTStyleChange *end, HTStyleChange *start, unsigned int split_pos );
static void split_line( HText *text, unsigned int split );
static void blank_lines( HText *text, int newlines );
static int HText_insertBlanksInStblLines( HText *me, int ncols );
static void free_enclosed_stbl( HText *me );
static void add_link_number( HText *text, TextAnchor *a, BOOLEAN save_position );
static BOOLEAN HText_endAnchor0( HText *text, int number, int really );
static int remove_special_attr_chars( char *buf );
static void HText_trimHightext( HText *text, BOOLEAN final, int stop_before );
static BOOLEAN same_anchor_or_field( int numberA, FormInfo *formA, int numberB, FormInfo *formB, BOOLEAN ta_same );
static BOOLEAN anchor_is_numbered( TextAnchor *Anchor_ptr );
static void write_offset( FILE *fp, HTLine *line );
static void write_hyphen( FILE *fp );
static int TrimmedLength( char *string );
static void adjust_search_result( DocInfo *doc, int tentative_result, int start_line );
static BOOLEAN anchor_has_target( TextAnchor *a, char *target );
static TextAnchor *line_num_to_anchor( int line_num );
static int line_num_in_text( HText *text, HTLine *line );
static TextAnchor *get_prev_anchor( TextAnchor *a );
static int www_search_forward( int start_line, DocInfo *doc, char *target, HTLine *line, int count );
static int www_search_backward( int start_line, DocInfo *doc, char *target, HTLine *line, int count );
static BOOLEAN useSourceCache( void );
static BOOLEAN useMemoryCache( void );
static void trace_setting_change( char *name, int prev_setting, int new_setting );
static int HText_TrueLineSize( HTLine *line, HText *text, BOOLEAN IgnoreSpaces );
static BOOLEAN HText_TrueEmptyLine( HTLine *line, HText *text, BOOLEAN IgnoreSpaces );
static void HText_AddHiddenLink( HText *text, TextAnchor *textanchor );
static char *HText_skipOptionNumPrefix( char *opname );
static double get_trans_q( int cs_from, char *givenmime );
static int find_best_target_cs( char **best_csname, int cs_from, char *acceptstring );
static void load_a_file( char *val_used, bstring **result );
static char *guess_content_type( char *filename );
static void cannot_transcode( BOOLEAN *had_warning, char *target_csname );
static unsigned int check_form_specialchars( char *value );
static void UpdateBoundary( char **Boundary, bstring *data );
static char *convert_to_base64( char *src, int len );
static char *escape_or_quote_name( char *name, QuoteData quoting, char *MultipartContentType );
static char *escape_or_quote_value( char *value, QuoteData quoting );
static int check_if_base64_needed( int submit_method, bstring *data );
static int increment_tagged_htline( HTLine *ht, TextAnchor *a, int *lx_val, int *old_val, int incr, int mode );
static void insert_new_textarea_anchor( TextAnchor **curr_anchor, HTLine **exit_htline );
static void update_subsequent_anchors( int newlines, TextAnchor *start_anchor, HTLine *start_htline, int start_tag );
static BOOLEAN IsFormsTextarea( FormInfo *form, TextAnchor *anchor_ptr );
static int finish_ExtEditForm( LinkInfo *form_link, TextAnchor *start_anchor, char *ed_temp, int orig_cnt );
static int GetColumn( void );
static BOOLEAN DidWrap( int y0, int x0 );
static void redraw_part_of_line( HTLine *line, char *str, int len, HText *text );
HText *HTMainText;
HTParentAnchor *HTMainAnchor;
char *HTAppName = "Lynx";
char *HTAppVersion = "2.8.7dev.11";
static int HTFormNumber;
static int HTFormFields;
static char *HTCurSelectGroup;
static int HTCurSelectGroupCharset = -1;
int HTCurSelectGroupType = 4;
char *HTCurSelectGroupSize;
static char *HTCurSelectedOptionValue;
char *checked_box = "[X]";
char *unchecked_box = "[ ]";
char *checked_radio = "(*)";
char *unchecked_radio = "( )";
static BOOLEAN underline_on;
static BOOLEAN bold_on;
int LYCacheSource;
int LYCacheSourceForAborted;
BOOLEAN LYShowScrollbar;
BOOLEAN LYsb_arrow = 1;
int LYsb_begin = -1;
int LYsb_end = -1;
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
static HTStyle default_style = { 0, "(Unstyled)", 0, "", 0, 1, 0, 0, 0, 0, 0, 0, 1, 65536, 0, 0, 0, 0, 0, 0, 0,  }
;
static HTList *loaded_texts;
HTList *search_queries;
static HTProtocol scm = { "source-cache-mem", 0, 0,  }
;
static int HTFormMethod;
static char *HTFormAction;
static char *HTFormEnctype;
static char *HTFormTitle;
static char *HTFormAcceptCharset;
static BOOLEAN HTFormDisabled;
static PerFormInfo *HTCurrentForm;
pool_data *ALLOC_IN_POOL( HTPool **ppoolptr, unsigned int request )
{
  HTPool *pool = ppoolptr[0];
  pool_data *ptr;
  unsigned int n;
  unsigned int j;
  if ( pool == 0 )
  {
    ptr = 0;
  }
  else
  {
    n = request;
    if ( n == 0 )
      n = 1;
    j = n & 7;
    if ( j != 0 )
      n = ( n - j ) + 8;
    n >>= 2;
    if ( pool->used + n <= 2042 )
    {
      ptr = &pool->data[ pool->used ];
      pool->used += (int)n;
    }
    else
    {
      HTPool *newpool = LY_check_calloc( 1, 8176 );
      if ( newpool == 0 )
      {
        ptr = 0;
      }
      else
      {
        newpool->prev = pool;
        newpool->used = n;
        ptr = newpool->data;
        ppoolptr[0] = newpool;
      }
    }
  }
  return ptr;
}
HTPool *POOL_NEW( void )
{
  HTPool *poolptr = LY_check_calloc( 1, 8176 );
  if ( poolptr != 0 )
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
  for ( ; cur != 0; cur = prev )
  {
    prev = cur->prev;
    free( cur );
    //cur = prev;
  }
  return;
}
void *HText_pool_calloc( HText *text, unsigned int size )
{
  return ALLOC_IN_POOL( &text->pool, size );
}
void ht_justify_cleanup( void )
{
  wait_for_this_stacked_elt = ( ok_justify & 255 ) == 0 || ( psrc_view & 255 ) != 0 ? 30002 : -1;
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
  if ( text != 0 && ((int*)text)[1] != 0 )
  {
    justify_start_position = ((int*)text)[1];
  }
  return;
}
void HText_halt( void )
{
  if ( HTFormNumber >= 1 )
    HText_DisableCurrentForm( );
  if ( HTMainText != 0 && HTMainText->halted <= 1 )
  {
    HTMainText->halted = 2;
  }
  return;
}
BOOLEAN mem_is_avail( size_t factor, size_t bytes )
{
  void *p;
  if ( bytes <= 4999 && factor != 0 )
    bytes = 5000;
  if ( factor == 0 )
    factor = 1;
  p = malloc( factor * bytes );
  if ( p != 0 )
  {
    if ( p == 0 )
      goto B9;
    else
    {
      free( p );
      p = 0;
    }
B9:  }
  else
  {
  }
  return 1;
}
void *LY_check_calloc( size_t nmemb, size_t size )
{
  int i, n;
  if ( ( mem_is_avail( 4, size * nmemb ) & 255 ) != 0 )
  {
    return calloc( nmemb, size );
  }
  n = HTList_count( loaded_texts );
  i = n - 1;
  for ( ; i >= 1; i-- )
  {
    HText *t = HTList_objectAt( loaded_texts, i );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "\nBUG *** Emergency freeing document %d/%d for '%s'%s!\n", i + 1, n, t == 0 || t->node_anchor == 0 || t->node_anchor->address == 0 ? "unknown anchor" : t->node_anchor->address, t == 0 || t->node_anchor == 0 || t->node_anchor->post_data == 0 ? "" : " with POST data" );
    }
    HTList_removeObjectAt( loaded_texts, i );
    HText_free( t );
    if ( ( mem_is_avail( 4, size * nmemb ) & 255 ) != 0 )
    {
      return calloc( nmemb, size );
    }
    //i--;
  }
  LYFakeZap( 1 );
  if ( HTMainText == 0 || HTMainText->halted <= 1 )
  {
    if ( ( mem_is_avail( 2, size * nmemb ) & 255 ) == 0 )
    {
      HText_halt( );
      if ( ( mem_is_avail( 0, 700 ) & 255 ) != 0 )
      {
        HTAlert( gettext( "Memory exhausted, display interrupted!" ) );
      }
    }
    else
    if ( ( HTMainText == 0 || HTMainText->halted == 0 ) && ( mem_is_avail( 0, 700 ) & 255 ) != 0 )
    {
      HTAlert( gettext( "Memory exhausted, will interrupt transfer!" ) );
      if ( HTMainText != 0 )
        HTMainText->halted = 1;
    }
  }
  return calloc( nmemb, size );
}
int StyleToCols( HText *text, HTLine *line, int nstyle )
{
  int result = line->offset;
  int nchars = *(short*)(line->styles + ( nstyle << 2 )) >> 2;
  char *data = &line->data[0];
  char *last = &data[ line->size ];
  int utf_extra;
  while ( nchars >= 1 && data < last )
  {
    if ( data[0] > 2 && data[0] <= 8 && data[0] != 8 )
    {
      data++;
    }
    else
    {
      utf_extra = utf8_length( text->T.output_utf8, data );
      utf_extra++;
      if ( ( ( utf_extra != 0 ) & 255 ) != 0 )
      {
        result += LYstrExtent( data, utf_extra, 2 );
        data = &data[ utf_extra ];
      }
      else
      if ( HTCJK != NOCJK && data[0] < 0 )
      {
        data += 2;
        result += 2;
      }
      else
      {
        data++;
        result++;
      }
      nchars--;
    }
  }
  return result;
}
void LYClearHiText( TextAnchor *a )
{
  if ( a->lites.hl_info != 0 )
  {
    free( a->lites.hl_info );
    a->lites.hl_info = 0;
  }
  a->lites.hl_base.hl_text = 0;
  a->lites.hl_len = 0;
  return;
}
void LYSetHiText( TextAnchor *a, char *text, int len )
{
  if ( text != 0 )
  {
    a->lites.hl_base.hl_text = ALLOC_IN_POOL( &HTMainText->pool, len + 2 );
    memcpy( a->lites.hl_base.hl_text, text, len );
    a->lites.hl_base.hl_text[ len ] = 0;
    a->lites.hl_len = 1;
  }
  return;
}
void LYAddHiText( TextAnchor *a, char *text, int x )
{
  HiliteInfo *have = a->lites.hl_info;
  unsigned int need = a->lites.hl_len - 1;
  unsigned int want;
  a->lites.hl_len = a->lites.hl_len + 1;
  want = a->lites.hl_len << 3;
  if ( have != 0 )
  {
    have = realloc( have, want );
  }
  else
  {
    have = malloc( want );
  }
  a->lites.hl_info = have;
  have[ need ].hl_text = ALLOC_IN_POOL( &HTMainText->pool, strlen( text ) + 2 );
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
  if ( count >= 1 )
    result = a->lites.hl_info[ count - 1 ].hl_text;
  else
    result = a->lites.hl_base.hl_text;
  return result == 0 ? 0 : LYSkipBlanks( result ) - result;
}
char *LYGetHiTextStr( TextAnchor *a, int count )
{
  char *result;
  if ( a->lites.hl_len <= count )
    result = 0;
  else
  if ( count >= 1 )
    result = a->lites.hl_info[ count - 1 ].hl_text;
  else
    result = a->lites.hl_base.hl_text;
  result += LYAdjHiTextPos( a, count );
  return result;
}
int LYGetHiTextPos( TextAnchor *a, int count )
{
  int result;
  if ( a->lites.hl_len <= count )
    result = -1;
  else
  if ( count >= 1 )
    result = a->lites.hl_info[ count - 1 ].hl_x;
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
    LYAddHiText( a, s, LYGetHiTextPos( b, count ) );
    count++;
  }
}
void HText_getChartransInfo( HText *me )
{
  me->UCLYhndl = HTAnchor_getUCLYhndl( me->node_anchor, 3 );
  if ( me->UCLYhndl < 0 )
  {
    int chndl = current_char_set;
    HTAnchor_setUCInfoStage( me->node_anchor, chndl, 3, 3 );
    me->UCLYhndl = HTAnchor_getUCLYhndl( me->node_anchor, 3 );
  }
  me->UCI = HTAnchor_getUCInfoStage( me->node_anchor, 3 );
  return;
}
void PerFormInfo_free( PerFormInfo *form )
{
  if ( form != 0 )
  {
    if ( form->accept_cs != 0 )
    {
      free( form->accept_cs );
      form->accept_cs = 0;
    }
    if ( form->thisacceptcs != 0 )
    {
      free( form->thisacceptcs );
      form->thisacceptcs = 0;
    }
    if ( form != 0 )
    {
      free( form );
      form = 0;
    }
  }
  return;
}
void free_form_fields( FormInfo *input_field )
{
  if ( input_field->type == 7 && input_field->select_list != 0 )
  {
    OptionType *optptr = input_field->select_list;
    OptionType *tmp;
    while ( optptr != 0 )
    {
      tmp = optptr;
      optptr = tmp->next;
      if ( tmp->name != 0 )
      {
        free( tmp->name );
        tmp->name = 0;
      }
      if ( tmp->cp_submit_value != 0 )
      {
        free( tmp->cp_submit_value );
        tmp->cp_submit_value = 0;
      }
      if ( tmp == 0 )
        continue;
      else
      {
        free( tmp );
        tmp = 0;
      }
    }
    input_field->select_list = 0;
    input_field->value = 0;
    input_field->orig_value = 0;
    input_field->cp_submit_value = 0;
    input_field->orig_submit_value = 0;
  }
  else
  {
    if ( input_field->value != 0 )
    {
      free( input_field->value );
      input_field->value = 0;
    }
    if ( input_field->orig_value != 0 )
    {
      free( input_field->orig_value );
      input_field->orig_value = 0;
    }
    if ( input_field->cp_submit_value != 0 )
    {
      free( input_field->cp_submit_value );
      input_field->cp_submit_value = 0;
    }
    if ( input_field->orig_submit_value != 0 )
    {
      free( input_field->orig_submit_value );
      input_field->orig_submit_value = 0;
    }
  }
  if ( input_field->name != 0 )
  {
    free( input_field->name );
    input_field->name = 0;
  }
  if ( input_field->submit_action != 0 )
  {
    free( input_field->submit_action );
    input_field->submit_action = 0;
  }
  if ( input_field->submit_enctype != 0 )
  {
    free( input_field->submit_enctype );
    input_field->submit_enctype = 0;
  }
  if ( input_field->submit_title != 0 )
  {
    free( input_field->submit_title );
    input_field->submit_title = 0;
  }
  if ( input_field->accept_cs != 0 )
  {
    free( input_field->accept_cs );
    input_field->accept_cs = 0;
  }
  return;
}
void FormList_delete( HTList *forms )
{
  HTList *cur = forms;
  PerFormInfo *form;
  while ( 1 )
  {
    if ( cur != 0 )
    {
      cur = cur->next;
      form = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
      if ( form == 0 )
      {
        HTList_delete( forms );
        return;
      }
      PerFormInfo_free( form );
    }
    form = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
  }
}
void ResetPartialLinenos( HText *text )
{
  if ( text != 0 )
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
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "GridText: start HText_new\n" );
  }
  if ( HTMainText != 0 )
  {
    if ( ( HText_hasUTF8OutputSet( HTMainText ) & 255 ) != 0 && ( HTLoadedDocumentEightbit( ) & 255 ) != 0 && LYCharSet_UC[ current_char_set ].enc == 7 )
      self->had_utf8 = HTMainText->has_utf8;
    else
      self->had_utf8 = HTMainText->has_utf8;
    HTMainText->has_utf8 = 0;
  }
  if ( loaded_texts == 0 )
  {
    loaded_texts = HTList_new( );
  }
  if ( anchor->document != 0 )
  {
    HTList_removeObject( loaded_texts, (int)( &anchor->document ) );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "GridText: Auto-uncaching\n" );
    }
    HTAnchor_delete_links( anchor );
    &anchor->document = 0;
    HText_free( (int)( &anchor->document ) );
    &anchor->document = 0;
  }
  HTList_addObject( loaded_texts, (void*)self );
  if ( HTCacheSize < HTList_count( loaded_texts ) )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "GridText: Freeing off cached doc.\n" );
    }
    HText_free( HTList_removeFirstObject( loaded_texts ) );
  }
  self->pool = POOL_NEW( );
  if ( self->pool == 0 )
    outofmem( "./GridText.c", "HText_New" );
  &line = line->prev = line = self->last_line = &self->temp_line->base;
  line->offset = line->size = 0;
  line->data[ line->size ] = 0;
  line->numstyles = 0;
  line->styles = stylechanges_buffers[0];
  self->Lines = 0;
  self->first_anchor = self->last_anchor = 0;
  self->last_anchor_before_split = 0;
  self->style = &default_style;
  self->top_of_screen = 0;
  self->node_anchor = anchor;
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
  self->disp_cols = LYwideLines == 0 ? (unsigned short)( LYcols ) : 1014;
  if ( anchor->bookmark != 0 || ( LYIsUIPage3( anchor->address, 4, 0 ) & 255 ) != 0 || ( LYIsUIPage3( anchor->address, 11, 0 ) & 255 ) != 0 )
    self->hiddenlinkflag = 0;
  else
    self->hiddenlinkflag = LYHiddenLinks;
  self->hidden_links = 0;
  self->no_cache = ( anchor->no_cache & 255 ) == 0 && anchor->post_data == 0 ? 0 : 1;
  self->LastChar = 0;
  self->IgnoreExcess = 0;
  self->source = ( LYpsrc & 255 ) == 0 ? WWW_SOURCE == HTOutputFormat : ( mark_htext_as_source & 255 ) == 0 && ( psrc_view & 255 ) == 0 ? 0 : 1;
  mark_htext_as_source = 0;
  HTAnchor_setDocument( anchor, (int)( &self->node_anchor->parent->parent ) );
  HTFormNumber = 0;
  HTMainText = self;
  HTMainAnchor = anchor;
  self->display_on_the_fly = 0;
  self->kcode = NOKANJI;
  self->specified_kcode = NOKANJI;
  self->detected_kcode = DET_NOTYET;
  self->SJIS_status = SJIS_state_neutral;
  self->EUC_status = EUC_state_neutral;
  self->state = S_text;
  self->kanji_buf = 0;
  self->in_sjis = 0;
  self->have_8bit_chars = 0;
  HText_getChartransInfo( self );
  UCSetTransParams( &self->T, self->UCLYhndl, self->UCI, current_char_set, &LYCharSet_UC[ current_char_set ] );
  HText_setKcode( self, anchor->charset, HTAnchor_getUCInfoStage( anchor, 3 ) );
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
  if ( ( display_partial_flag & 255 ) != 0 )
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
  if ( stream != 0 )
  {
    result->target = stream;
    result->targetClass.name = stream[0].isa->name;
    result->targetClass._free = stream[0].isa->_free;
    result->targetClass._abort = stream[0].isa->_abort;
    result->targetClass.put_character = stream[0].isa->put_character;
    result->targetClass.put_string = stream[0].isa->put_string;
    result->targetClass.put_block = stream[0].isa->put_block;
  }
  return result;
}
void HText_free( HText *self )
{
  if ( self != 0 )
  {
    while ( self->first_anchor != 0 )
    {
      TextAnchor *l = self->first_anchor;
      self->first_anchor = &l;
      if ( l->link_type == 2 && l->input_field != 0 )
        free_form_fields( l->input_field );
      if ( l->lites.hl_info == 0 )
        continue;
      else
      {
        free( l->lites.hl_info );
        *(int*)(ebp_4 + 32) = 0;
      }
    }
    FormList_delete( self->forms );
    if ( self->tabs != 0 )
    {
      HTTabID *Tab = 0;
      HTList *cur = self->tabs;
      while ( 1 )
      {
        if ( cur != 0 )
        {
          cur = cur->next;
          Tab = cur == 0 ? 0 : &(HTTabID*)(cur);
          if ( Tab != 0 )
          {
            if ( Tab->name != 0 )
            {
              free( Tab->name );
              Tab->name = 0;
            }
            if ( Tab == 0 )
              continue;
            else
            {
              free( Tab );
              Tab = 0;
            }
          }
          else
          {
            HTList_delete( self->tabs );
            self->tabs = 0;
          }
        }
        Tab = cur == 0 ? 0 : &(HTTabID*)(cur);
      }
    }
    if ( self->hidden_links != 0 )
    {
      LYFreeStringList( self->hidden_links );
      self->hidden_links = 0;
    }
    if ( self->node_anchor != 0 )
    {
      HTAnchor_resetUCInfoStage( self->node_anchor, -1, 2, 0 );
      HTAnchor_resetUCInfoStage( self->node_anchor, -1, 3, 0 );
      HTAnchor_clearSourceCache( self->node_anchor );
      HTAnchor_delete_links( self->node_anchor );
      HTAnchor_setDocument( self->node_anchor, 0 );
      if ( ( HTAnchor_delete( self->node_anchor->parent ) & 255 ) != 0 )
        HTMainAnchor = 0;
    }
    POOL_FREE( self->pool );
    if ( self != 0 )
    {
      free( self );
      self = 0;
    }
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
  if ( ( LYwideLines == 0 ? LYcols : 1014 ) <= j )
  {
    j = LYwideLines == 0 ? LYcols - 1 : 1013;
  }
  if ( ( line->size & 65535 ) == 0 )
    i = j;
  else
  {
    i = 0;
    for ( ; i < j; i++ )
    {
      waddch( LYwin, 32 );
      //i++;
    }
  }
  data = &line->data[0];
  i++;
  while ( ( LYwideLines == 0 ? LYcols : 1014 ) < i )
  {
    buffer[0] = data[0];
    if ( ( buffer[0] & 255 ) != 0 )
    {
      data++;
      for ( ; current_style < line->numstyles && line->offset + ( *(short*)(line->styles + ( current_style << 2 )) >> 2 ) + 1 <= i; current_style++ )
      {
        curses_style( *(short*)(line->styles + ( current_style << 2 ) + 2), *(char*)(line->styles + ( current_style << 2 )) & 3 );
        //current_style++;
      }
      switch ( buffer[0] )
      {
      case 8:
        if ( ( dump_output_immediately & 255 ) != 0 )
          continue;
        else
        {
          waddch( LYwin, 43 );
          i++;
        }
        break;
      case 7:
        if ( ( data[0] & 255 ) != 0 || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( LastDisplayChar * 2 )) & 8192 ) != 0 || LastDisplayChar == '-' )
          continue;
        else
        {
          buffer[0] = '-';
          if ( ( text->T.output_utf8 & 255 ) != 0 && buffer[0] < 0 )
          {
            text->has_utf8 = 1;
            utf_extra = utf8_length( text->T.output_utf8, &data[ -1 ] );
            LastDisplayChar = 'M';
          }
          if ( utf_extra != 0 )
          {
            strncpy( &buffer[1], data, utf_extra );
            buffer[ utf_extra + 1 ] = 0;
            LYwaddnstr( LYwin, buffer, strlen( buffer ) );
            buffer[1] = 0;
            data = &data[ utf_extra ];
            utf_extra = 0;
            i++;
          }
          else
          {
            if ( HTCJK != NOCJK && buffer[0] < 0 )
            {
              if ( i <= ( LYwideLines == 0 ? LYcols : 1014 ) )
              {
                buffer[1] = data[0];
                buffer[2] = 0;
                data++;
                i++;
                LYwaddnstr( LYwin, buffer, strlen( buffer ) );
                buffer[1] = 0;
                LastDisplayChar = 'M';
              {
                int y = LYwin == 0 ? -1 : LYwin->_cury, x = LYwin == 0 ? -1 : LYwin->_curx;
                if ( ( LYwideLines == 0 ? LYcols : 1014 ) <= x || x == 0 )
                  continue;
                else
                {
                }
              }
              }
            }
            else
            {
              LYwaddnstr( LYwin, buffer, strlen( buffer ) );
              LastDisplayChar = buffer[0];
            }
          }
        }
        break;
      default:
        break;
      }
    }
    waddch( LYwin, 10 );
  }
}
void display_title( HText *text )
{
  char *title = 0;
  char percent[20];
  unsigned char *tmp = 0;
  int i = 0, j = 0, toolbar = 0;
  int limit;
  if ( text != 0 )
  {
    lynx_start_title_color( );
    if ( last_colorattr_ptr >= 1 )
      curses_style( s_title, 1 );
    else
      curses_style( s_title, 2 );
    HTSACopy( &title, HTAnchor_title( text->node_anchor ) == 0 ? " " : HTAnchor_title( text->node_anchor ) );
    LYReduceBlanks( title );
    limit = LYscreenWidth( );
    if ( limit <= 9 )
      percent[0] = 0;
    else
    if ( display_lines < 1 && LYlines >= 1 && text->top_of_screen <= 99999 && text->Lines <= 999999 )
    {
      sprintf( percent, " (l%d of %d)", text->top_of_screen, text->Lines );
    }
    if ( display_lines <= text->Lines && display_lines >= 1 )
    {
      int total_pages = ( text->Lines + display_lines ) / display_lines;
      int start_of_last_page = text->Lines <= display_lines ? 0 : text->Lines - display_lines;
      if ( start_of_last_page < text->top_of_screen )
      {
        sprintf( percent, " (p%d of %d)", total_pages, total_pages );
      }
      else
      {
        sprintf( percent, " (p%d of %d)", total_pages, total_pages );
      }
    }
    else
      percent[0] = 0;
    if ( HTCJK != NOCJK && ( title[0] & 255 ) != 0 )
    {
      tmp = calloc( ( strlen( title ) * 2 ) + 256, sizeof( unsigned char ) );
      if ( tmp != 0 )
      {
        if ( kanji_code == EUC )
        {
          TO_EUC( (unsigned char*)title, tmp );
        }
        if ( kanji_code == SJIS )
        {
          TO_SJIS( (unsigned char*)title, tmp );
        }
        i = 0;
        j = 0;
        for ( ; ( title[ i ] & 255 ) != 0; i++ )
        {
          if ( title[ i ] != 27 )
          {
            tmp[ j ] = title[ i ];
            j++;
          }
          //i++;
        }
        tmp[ j ] = 0;
        HTSACopy( &title, (char*)tmp );
        if ( tmp != 0 )
        {
          free( tmp );
          tmp = 0;
        }
      }
    }
    LYmove( 0, 0 );
    LYclrtoeol( );
    if ( ( HText_hasToolbar( text ) & 255 ) != 0 )
    {
      waddch( LYwin, 35 );
      toolbar = 1;
    }
    if ( s_forw_backw != -1 && ( nhist != 0 || nhist_extra > 1 ) )
    {
      int c = nhist == 0 ? 32 : *(int*)(135965648);
      curses_style( s_forw_backw, 1 );
      if ( nhist != 0 )
      {
        waddch( LYwin, &c );
        waddch( LYwin, &c );
        waddch( LYwin, &c );
      }
      LYmove( 0, toolbar + 3 );
      if ( nhist_extra > 1 )
      {
        waddch( LYwin, *(int*)(135965644) );
        waddch( LYwin, *(int*)(135965644) );
        waddch( LYwin, *(int*)(135965644) );
      }
      curses_style( s_forw_backw, 0 );
    }
    i = limit - ( ( LYShowScrollbar & 255 ) != 0 ) - strlen( percent ) - LYstrCells( title );
    if ( i < 1 )
    {
      i = limit - ( ( LYShowScrollbar & 255 ) != 0 ) - strlen( percent ) - 3;
      if ( i < 1 )
        title[0] = 0;
      else
      {
        memcpy( title + LYstrExtent2( title, i ), "...", 4 );
      }
      i = 0;
    }
    LYmove( 0, i );
    LYwaddnstr( LYwin, title, strlen( title ) );
    if ( ( percent[0] & 255 ) != 0 )
    {
      LYwaddnstr( LYwin, percent, strlen( percent ) );
    }
    waddch( LYwin, 10 );
    if ( title != 0 )
    {
      free( title );
      title = 0;
    }
    if ( s_hot_paste != -1 )
    {
      LYmove( 0, LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) );
      curses_style( s_hot_paste, 1 );
      waddch( LYwin, *(int*)(135965644) );
      curses_style( s_hot_paste, 0 );
      LYmove( 1, 0 );
    }
    curses_style( s_title, 0 );
    lynx_stop_title_color( );
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void display_scrollbar( HText *text )
{
  int i;
  int h = display_lines - ( ( LYsb_arrow & 255 ) == 0 ? 0 : 2 );
  int off = ( LYsb_arrow & 255 ) != 0;
  int top_skip, bot_skip, sh, shown;
  LYsb_begin = LYsb_end = -1;
  if ( ( LYShowScrollbar & 255 ) != 0 && text != 0 && h > 2 && display_lines < text->Lines )
  {
    if ( text->Lines - display_lines <= text->top_of_screen )
    {
      shown = text->Lines - text->top_of_screen;
      if ( shown < 1 )
        shown = 1;
    }
    else
      shown = display_lines;
    sh = ( ( shown * h ) + ( text->Lines / 2 ) ) / text->Lines;
    if ( sh < 1 )
      sh = 1;
    if ( h - 1 <= sh )
      sh = h - 2;
    if ( text->top_of_screen == 0 )
      top_skip = 0;
    else
    if ( text->Lines + ( 1 - ( text->top_of_screen + display_lines ) ) < 1 )
      top_skip = h - sh;
    else
      top_skip = (int)( ( ( (double)( h - sh - 1 ) * (double)( text->top_of_screen ) ) / (double)( ( text->Lines - display_lines ) + 1 ) ) + 1.000000000000 );
    bot_skip = h - sh - top_skip;
    LYsb_begin = top_skip;
    LYsb_end = h - bot_skip;
    if ( ( LYsb_arrow & 255 ) != 0 )
    {
      int s = top_skip == 0 ? s_sb_naa : s_sb_aa;
      if ( last_colorattr_ptr >= 1 )
        curses_style( s, 1 );
      else
        curses_style( s, 2 );
      LYmove( 1, LYshiftWin + ( LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) ) );
      waddch( LYwin, *(int*)(135965652) );
      curses_style( s, 0 );
    }
    if ( last_colorattr_ptr >= 1 )
      curses_style( s_sb_bg, 1 );
    else
      curses_style( s_sb_bg, 2 );
    i = 1;
    for ( ; i <= h; i++ )
    {
      if ( i - 1 <= top_skip && top_skip < i )
        curses_style( s_sb_bar, 1 );
      if ( i - 1 <= h - bot_skip && h - bot_skip < i )
        curses_style( s_sb_bar, 0 );
      LYmove( off + i, LYshiftWin + ( LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) ) );
      if ( top_skip < i && i <= h - bot_skip )
      {
        waddch( LYwin, *(int*)(135965664) );
      }
      waddch( LYwin, *(int*)(135965860) );
      //i++;
    }
    curses_style( s_sb_bg, 0 );
    if ( ( LYsb_arrow & 255 ) != 0 )
    {
      int s = bot_skip == 0 ? s_sb_naa : s_sb_aa;
      if ( last_colorattr_ptr >= 1 )
        curses_style( s, 1 );
        LYmove( h + 2, LYshiftWin + ( LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) ) );
        waddch( LYwin, *(int*)(135965656) );
        curses_style( s, 0 );
        return;
      else
        curses_style( s, 2 );
        LYmove( h + 2, LYshiftWin + ( LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) ) );
        waddch( LYwin, *(int*)(135965656) );
        curses_style( s, 0 );
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
void display_page( HText *text, int line_number, char *target )
{
  static int last_nlinks;
  static int charset_last_displayed = -1;
  // static char __PRETTY_FUNCTION__[13] = { 'd', 'i', 's', 'p', 'l', 'a', 'y', '_', 'p', 'a', 'g', 'e',  };
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
    if ( ( enable_scrollback & 255 ) != 0 )
    {
      waddch( LYwin, 42 );
      LYrefresh( );
      LYclear( );
    }
    LYwaddnstr( LYwin, "\n\nError accessing document!\nNo data available!\n", 47 );
    LYrefresh( );
    nlinks = 0;
    return;
  }
  else
  {
    if ( ( display_partial & 255 ) != 0 || ( recent_sizechange & 255 ) != 0 || ( text->stale & 255 ) != 0 )
      ResetPartialLinenos( text );
    tmp[0] = tmp[1] = tmp[2] = 0;
    if ( target != 0 && ( target[0] & 255 ) == 0 )
      target = 0;
    text->page_has_target = 0;
    if ( display_lines >= 1 )
    {
      line = text->last_line->prev;
      line_number = HText_getPreferredTopLine( text, line_number );
      i = 0;
      line = &text->last_line;
      for ( ; i < line_number && text->last_line != line; line = &line )
      {
        if ( ( LYNoCore & 255 ) == 0 )
        {
          if ( line->next == 0 )
          {
            __assert_fail( "line-&gt;next != ((void *)0)", "./GridText.c", 2016, __PRETTY_FUNCTION__ );
          }
        }
        else
        if ( line->next == 0 )
        {
          if ( ( enable_scrollback & 255 ) != 0 )
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
        //line = &line;
      }
      if ( LYlowest_eightbit[ current_char_set ] <= 255 && current_char_set != charset_last_displayed && ( LYCursesON & 255 ) != 0 )
        charset_last_displayed = current_char_set;
      if ( ( enable_scrollback & 255 ) != 0 )
      {
        waddch( LYwin, 42 );
        LYrefresh( );
        LYclear( );
      }
      if ( ( text->stale & 255 ) != 0 || text->top_of_screen != line_number )
        last_colorattr_ptr = 0;
      text->top_of_screen = line_number;
      text->top_of_screen_line = line;
      if ( ( no_title & 255 ) != 0 )
      {
        LYmove( 0, 0 );
        title_lines = 0;
      }
      else
        display_title( text );
      display_flag = 1;
      if ( ( display_partial & 255 ) != 0 || text->first_lineno_last_disp_partial != line_number || text->last_lineno_last_disp_partial < line_number )
        ResetCachedStyles( );
      if ( ( display_partial & 255 ) != 0 && text->stbl != 0 )
      {
        stop_before_for_anchors = Stbl_getStartLineDeep( (int)( &text->stbl ) );
        if ( line_number + display_lines < stop_before_for_anchors )
          stop_before_for_anchors = line_number + display_lines;
      }
      else
        stop_before_for_anchors = line_number + display_lines;
      if ( line != 0 )
      {
        char *data;
        int offset, LenNeeded;
        if ( ( display_partial & 255 ) != 0 || text->first_lineno_last_disp_partial != line_number )
          text->has_utf8 = 0;
        i = 0;
        for ( ; i < display_lines; i++ )
        {
          if ( ( LYNoCore & 255 ) == 0 )
          {
            if ( line == 0 )
            {
              __assert_fail( "line != ((void *)0)", "./GridText.c", 2120, __PRETTY_FUNCTION__ );
            }
          }
          else
          if ( line == 0 )
          {
            if ( ( enable_scrollback & 255 ) != 0 )
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
          if ( ( display_partial & 255 ) == 0 && text->first_lineno_last_disp_partial == line_number && line_number + i <= text->last_lineno_last_disp_partial )
          {
            LYmove( title_lines + i + 1, 0 );
          }
          display_line( line, text, i + 1, target );
          data = &line->data[0];
          offset = line->offset;
          if ( target != 0 && ( target[0] & 255 ) != 0 )
          {
            cp = ( case_sensitive & 255 ) != 0 ? LYno_attr_mbcs_strstr( data, target, text->T.output_utf8, 1, 0, &LenNeeded ) : LYno_attr_mbcs_case_strstr( data, target, text->T.output_utf8, 1, 0, &LenNeeded );
            if ( cp != 0 && LenNeeded + line->offset <= ( LYwideLines == 0 ? LYcols : 1014 ) )
            {
              int itmp = 0;
              int written = 0;
              int x_pos = offset + ( cp - data );
              int len = strlen( target );
              size_t utf_extra = 0;
              int y;
              text->page_has_target = 1;
              LYstartTargetEmphasis( );
            }
          }
          if ( text->last_line == line )
          {
            i++;
            for ( ; i < display_lines; i++ )
            {
              LYmove( title_lines + i, 0 );
              LYclrtoeol( );
              //i++;
            }
            break;
          }
          else
          {
            if ( ( display_partial & 255 ) != 0 )
              last_disp_partial = line_number + i;
            display_flag = 1;
            line = &line;
            //i++;
          }
        }
      }
      text->next_line = line;
      text->stale = 0;
      nlinks = 0;
      Anchor_ptr = text->first_anchor;
      for ( ; Anchor_ptr != 0 && Anchor_ptr->line_num <= stop_before_for_anchors; Anchor_ptr = &Anchor_ptr )
      {
        LYFreeHilites( nlinks, last_nlinks );
        last_nlinks = nlinks;
        more_links = 0;
        if ( ( traversal & 255 ) != 0 )
        {
          if ( Anchor_ptr != 0 )
          {
            if ( Anchor_ptr->next != 0 )
              more_links = 1;
              if ( display_flag == 0 )
                LYwaddnstr( LYwin, "\n     Document is empty", 23 );
                display_scrollbar( text );
                if ( ( display_partial & 255 ) != 0 )
                {
                  if ( display_flag != 0 )
                  {
                    if ( text->top_of_screen <= last_disp_partial )
                    {
                      if ( ( enable_scrollback & 255 ) == 0 )
                      {
                        if ( ( recent_sizechange & 255 ) == 0 )
                        {
                          text->first_lineno_last_disp_partial = text->top_of_screen;
                          text->last_lineno_last_disp_partial = last_disp_partial;
                          LYrefresh( );
                          break;
                        }
                        else
                          ResetPartialLinenos( text );
                          LYrefresh( );
                          break;
                      }
                    }
                  }
                }
              else
              {
                display_scrollbar( text );
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
  for ( ; a != 0 && a->line_num <= line_number; head_processed = 0 )
  {
    int last = a->line_pos + ( ( a->extent & 65535 ) == 0 ? 0 : a->extent - 1 );
    if ( line_number - 1 <= a->line_num )
    {
      if ( a->line_num == line_number - 1 )
        last += ~line->prev;
      if ( sbyte <= last )
      {
        if ( head_processed != 0 || a->line_num != line_number || a->line_pos < ebyte )
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
    a = &a;
    //head_processed = 0;
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
  if ( line != 0 )
  {
    if ( ( line->size & 65535 ) != 0 )
    {
      if ( ninserts == 0 )
      {
        return 0;
      }
      ip = 0;
      if ( ip < ninserts )
      {
        if ( newpos[ ip ] <= oldpos[ ip ] )
          ip++;
        else
        {
          if ( newpos[ ip ] - oldpos[ ip ] <= added_chars )
            continue;
          else
            added_chars = newpos[ ip ] - oldpos[ ip ];
        }
      }
      else
      {
        if ( added_chars + line->size > 1022 )
        {
          return 0;
        }
        if ( text->last_line == line )
        {
          if ( text->temp_line->base.next == line )
            mod_line = &text->temp_line[1].base;
            if ( mod_line == 0 )
            {
              return 0;
            }
            if ( prev_anchor[0] == 0 )
              prev_anchor[0] = text->first_anchor;
              if ( prev_anchor[0] != 0 )
              {
                if ( line_number <= prev_anchor[0]->line_num )
                {
                  head_processed = 1;
                  memcpy( mod_line, line, 20 );
                  t = newdata = &mod_line->data[0];
                  ip = 0;
                  if ( ninserts < ip )
                  {
                    if ( pre < s )
                    {
                      t[0] = pre[0];
                      t++;
                      pre++;
                    }
                    else
                    {
                      if ( head_processed != 0 )
                      {
                        if ( prev_anchor[0] != 0 )
                        {
                          if ( prev_anchor[0]->line_num == line_number )
                            prev_anchor[0]->extent = shift + prev_anchor[0]->extent;
                            t[0] = 0;
                            mod_line->size = (unsigned short)( t ) - (unsigned short)( newdata );
                            return mod_line;
                        }
                      }
                    }
                  }
                  else
                  {
                    int curlim;
                    if ( ninserts <= ip )
                    {
                      if ( line->size < 1024 )
                      {
                        curlim = line->size + 1;
                        pre = s;
                        if ( ( s[0] & 255 ) != 0 )
                        {
                          if ( text != 0 )
                          {
                            if ( ( text->T.output_utf8 & 255 ) != 0 )
                            {
                              if ( s[0] < 0 )
                              {
                                if ( s[0] >= -65 )
                                  pre = &s[1];
                                  s++;
                                else
                                {
                                  if ( s[0] <= 2 )
                                  {
                                    if ( ioldc < curlim )
                                    {
                                      ioldc++;
                                      pre = &s[1];
                                    }
                                    else
                                    {
                                      if ( ip != 0 )
                                        move_anchors_in_region( line, line_number, prev_anchor, &head_processed, copied - line->data[0], pre - line->data[0], shift );
                                        if ( curlim <= ( *(short*)(mod_line->styles + ( istyle << 2 )) >> 2 ) )
                                        {
                                          if ( copied < pre )
                                          {
                                            t[0] = copied[0];
                                            t++;
                                            copied++;
                                          }
                                          else
                                          {
                                            if ( ip < ninserts )
                                            {
                                              int delta = newpos[ ip ] - oldpos[ ip ] - shift;
                                              if ( delta < 0 )
                                              {
                                                delta++;
                                                if ( ( ( ( delta >> 31 ) ^ 1 ) & 255 ) == 0 )
                                                {
                                                  if ( newdata < t )
                                                  {
                                                    if ( t[ -1 ] != ' ' )
                                                    {
                                                      delta--;
                                                      if ( ( ( ( delta < 1 ) ^ 1 ) & 255 ) != 0 )
                                                      {
                                                        t[0] = ' ';
                                                        t++;
                                                      }
                                                      else
                                                        ip++;
                                                    }
                                                    else
                                                    {
                                                      t = &t[ -1 ];
                                                      shift--;
                                                      delta++;
                                                    }
                                                  }
                                                }
                                              }
                                              else
                                                shift = newpos[ ip ] - oldpos[ ip ];
                                            }
                                            else
                                              ip++;
                                          }
                                        }
                                        else
                                        {
                                          mod_line->styles[ istyle ].bits_at_0/*.1_2of4*/ = ( *(short*)(mod_line->styles + ( istyle << 2 )) & 3 ) | ( ( (unsigned short)( shift + ( *(short*)(mod_line->styles + ( istyle << 2 )) >> 2 ) ) & 16383 ) << 2 );
                                          istyle++;
                                          if ( istyle < line->numstyles )
                                          {
                                          }
                                        }
                                      else
                                      {
                                      }
                                    }
                                  }
                                  else
                                  {
                                    if ( s[0] <= 8 )
                                      continue;
                                    else
                                    {
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
                        curlim = line->size + 1;
                        pre = s;
                      }
                    }
                    else
                    {
                      curlim = line->size + 1;
                      pre = s;
                    }
                  }
                }
                else
                {
                  head_processed = 1;
                  memcpy( mod_line, line, 20 );
                  t = newdata = &mod_line->data[0];
                  ip = 0;
                }
              }
              else
              {
                head_processed = 1;
                memcpy( mod_line, line, 20 );
                t = newdata = &mod_line->data[0];
                ip = 0;
              }
            else
            {
            }
          else
            mod_line = &text->temp_line->base;
        }
        else
        {
          mod_line = ALLOC_IN_POOL( &HTMainText->pool, added_chars + line->size + 20 );
        }
      }
    }
  }
}
HTStyleChange *skip_matched_and_correct_offsets( HTStyleChange *end, HTStyleChange *start, unsigned int split_pos )
{
  int level = 0;
  HTStyleChange *tmp = end;
  for ( ; start <= tmp; tmp -= 4 )
  {
    if ( tmp->bits_at_0/*.3_4of4*/ == end->bits_at_0/*.3_4of4*/ )
    {
      if ( ( *(char*)(tmp) & 3 ) == 0 )
        level--;
      else
      if ( (unsigned char)( *(char*)(tmp) & 3 ) == 1 )
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
    if ( split_pos < ( *(short*)(tmp) >> 2 ) )
      tmp->bits_at_0/*.1_2of4*/ = ( *(short*)(tmp) & 3 ) | ( ( (unsigned short)( split_pos ) & 16383 ) << 2 );
    //tmp -= 4;
  }
  return 0;
}
void split_line( HText *text, unsigned int split )
{
  HTStyle *style = text->style;
  int spare;
  int indent = ( text->in_line_1 & 255 ) == 0 ? text->style->leftIndent : text->style->indent1st;
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
  HTLine *previous = text->last_line;
  HTLine *line;
  if ( text->temp_line->base.next == previous )
    line = &text->temp_line[1].base;
  else
    line = &text->temp_line->base;
  if ( line != 0 )
  {
    memset( line, 0, 20 );
    ctrl_chars_on_this_line = 0;
    utfxtra_on_this_line = 0;
    text->LastChar = ' ';
    cp = &previous->data[0];
    if ( cp[0] == 5 || cp[0] == 3 )
    {
      switch ( cp[1] )
      {
      default:
        break;
      case 8:
        cp[1] = cp[0];
        cp[0] = 8;
        break;
      case 3:
      case 5:
        if ( cp[2] == 8 )
        {
          cp[2] = cp[1];
          cp[1] = cp[0];
          cp[0] = 8;
        }
        break;
      }
    }
    if ( previous->size < split )
    {
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "*** split_line: split==%u greater than last_line-&gt;size==%d !\n", split, previous->size );
      }
      if ( split > 1024 )
      {
        split = previous->size;
        cp = strrchr( &previous->data[0], 32 );
        if ( cp != 0 && cp - previous->data[0] > 1 )
          split = cp - previous->data[0];
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "                split adjusted to %u.\n", split );
        }
      }
    }
    text->Lines++;
    previous->next->prev = line;
    line->prev = previous;
    &line = &previous;
    &previous = line;
    text->last_line = line;
    line->size = 0;
    line->offset = 0;
    text->permissible_split = 0;
    line->data[0] = 0;
    alignment = style->alignment;
    if ( split != 0 )
    {
      if ( ( dump_output_immediately & 255 ) == 0 || ( use_underscore & 255 ) == 0 )
      {
        t_underline = set_style_by_embedded_chars( &previous->data[0], &previous->data[ split ], 3, 4 );
      }
      t_bold = set_style_by_embedded_chars( &previous->data[0], &previous->data[ split ], 5, 6 );
    }
    if ( ( ( dump_output_immediately & 255 ) == 0 || ( use_underscore & 255 ) == 0 ) && t_underline != 0 )
    {
      line->data[ line->size ] = 3;
      line->size = line->size + 1;
      line->data[ line->size ] = 0;
      ctrl_chars_on_this_line++;
      SpecialAttrChars++;
    }
    if ( t_bold != 0 )
    {
      line->data[ line->size ] = 5;
      line->size = line->size + 1;
      line->data[ line->size ] = 0;
      ctrl_chars_on_this_line++;
      SpecialAttrChars++;
    }
    if ( split != 0 )
    {
      char *prevdata = &previous->data[0], *linedata = &line->data[0];
      unsigned int plen;
      int i;
      prevdata[ previous->size ] = 0;
      previous->size = split;
      p = &prevdata[ split ];
      for ( ; ( ( p[0] == ' ' || p[0] == 1 ) && ( HeadTrim != 0 || text->first_anchor != 0 || ( underline_on & 255 ) != 0 || ( bold_on & 255 ) != 0 || alignment != 1 || ( style->wordWrap & 255 ) != 0 || ( style->freeFormat & 255 ) != 0 || style->spaceBefore != 0 || style->spaceAfter != 0 ) ) || p[0] == 7; HeadTrim++ )
      {
        p++;
        //HeadTrim++;
      }
      plen = strlen( p );
      if ( plen != 0 )
      {
        i = plen - 1;
        for ( ; i >= 0; i-- )
        {
          if ( p[ i ] == 3 || p[ i ] == 4 || p[ i ] == 5 || p[ i ] == 6 || p[ i ] == 7 )
            ctrl_chars_on_this_line++;
          else
          if ( ( text->T.output_utf8 & 255 ) != 0 && ( p[ i ] & 192 ) == 128 )
            utfxtra_on_this_line++;
          if ( p[ i ] == 7 && (int)text->permissible_split < i )
            text->permissible_split = i + 1;
          //i--;
        }
        ctrl_chars_on_this_line += utfxtra_on_this_line;
        strcat( linedata, p );
        line->size = plen + line->size;
      }
    }
    p = previous + ( previous->size - 1 ) + 18;
    for ( ; previous->data[0] <= p && ( p[0] == ' ' || p[0] == 1 ) && ( psrc_view & 255 ) == 0 && ( ctrl_chars_on_this_line != 0 || HeadTrim != 0 || text->first_anchor != 0 || ( underline_on & 255 ) != 0 || ( bold_on & 255 ) != 0 || alignment != 1 || ( style->wordWrap & 255 ) != 0 || ( style->freeFormat & 255 ) != 0 || style->spaceBefore != 0 || style->spaceAfter != 0 ); p = &p[ -1 ] )
    {
      //p = &p[ -1 ];
    }
    TailTrim = ( previous + ( previous->size - 1 ) + 18 ) - p;
    previous->size -= (unsigned short)( TailTrim );
    p[1] = 0;
    if ( split == 0 )
      s = TailTrim + previous->size;
    else
      s = split;
    s_post = s + HeadTrim;
    s_pre = s - TailTrim;
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "GridText: split_line(%u [now:%d]) called\n", split, s );
    }
    if ( previous->styles == stylechanges_buffers[0][0].bits_at_0 )
      line->styles = stylechanges_buffers[1];
    else
      line->styles = stylechanges_buffers[0];
    line->numstyles = 0;
  {
    HTStyleChange *from = previous->styles + ( ( previous->numstyles * 4 ) - 4 );
    HTStyleChange *to = line->styles + 252;
    HTStyleChange *scan, *at_end;
    for ( ; previous->styles <= from && line->styles <= to; from -= 4 )
    {
      to[0] = from[0];
      if ( s_post < ( *(short*)(to) >> 2 ) )
        to->bits_at_0/*.1_2of4*/ = 0;
      else
      if ( s_pre < ( *(short*)(to) >> 2 ) && ( (unsigned char)( *(char*)(to) & 3 ) == 1 || (unsigned char)( *(char*)(to) & 3 ) == 2 ) )
      {
        to->bits_at_0/*.1_2of4*/ = ( *(short*)(to) & 3 ) | ( ( ( *(short*)(to) >> 2 ) < s ? 0 : (unsigned short)( SpecialAttrChars ) & 16383 ) << 2 );
      }
      else
        break;
      to -= 4;
      //from -= 4;
    }
    scan = from;
    at_end = from;
    for ( ; previous->styles <= scan && previous->styles <= at_end; scan -= 4 )
    {
      if ( ( *(char*)(scan) & 3 ) == 0 )
      {
        scan = skip_matched_and_correct_offsets( scan, previous->styles, s_pre );
        if ( scan == 0 )
        {
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "BUG: styles improperly nested.\n" );
            break;
          }
          else
            break;
        }
      }
      else
      if ( (unsigned char)( *(char*)(scan) & 3 ) == 1 )
      {
        if ( (unsigned char)( *(char*)(at_end) & 3 ) == 1 && scan->bits_at_0/*error:'I'*/ == at_end->bits_at_0/*.3_4of4*/ && s_pre <= ( *(short*)(at_end) >> 2 ) )
          at_end -= 4;
        else
        if ( previous->styles + 252 <= at_end )
        {
          if ( ( WWW_TraceFlag & 255 ) != 0 )
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
          at_end->bits_at_0/*.1_1of4*/ = *(char*)(at_end) & -4;
          at_end->bits_at_0/*.3_4of4*/ = scan->bits_at_0/*.3_4of4*/;
          at_end->bits_at_0/*.1_2of4*/ = ( *(short*)(at_end) & 3 ) | ( ( (unsigned short)( s_pre ) & 16383 ) << 2 );
        }
        if ( to < line->styles + 252 && ( *(char*)(to + 4) & 3 ) == 0 && ( *(short*)(to + 4) >> 2 ) <= SpecialAttrChars && to[1].bits_at_0/*.3_4of4*/ == scan->bits_at_0/*.3_4of4*/ )
          to++;
        else
        {
          if ( line->styles <= to )
          {
            to[0] = scan[0];
            to->bits_at_0/*.1_2of4*/ = ( *(short*)(to) & 3 ) | ( ( (unsigned short)( SpecialAttrChars ) & 16383 ) << 2 );
            to -= 4;
          }
          else
          {
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), "BUG: style overflow after split_line.\n" );
              break;
            }
            else
              break;
          }
        }
      }
      if ( s_pre < ( *(short*)(scan) >> 2 ) )
        scan->bits_at_0/*.1_2of4*/ = ( *(short*)(scan) & 3 ) | ( ( (unsigned short)( s_pre ) & 16383 ) << 2 );
      //scan -= 4;
    }
    line->numstyles = ( ( line->styles + 252 ) - to ) >> 2;
    if ( ( line->numstyles & 65535 ) != 0 && line->numstyles >= 63 )
    {
      int n = 0;
      for ( ; n < line->numstyles; n++ )
      {
        line->styles[ n ] = to[ n ].(null);
        //n++;
      }
    }
    else
    if ( ( line->numstyles & 65535 ) == 0 )
      line->styles->bits_at_0/*.1_2of4*/ = *(short*)(line->styles) | -4;
    previous->numstyles = ( ( at_end - previous->styles ) >> 2 ) + 1;
    if ( ( previous->numstyles & 65535 ) == 0 )
      previous->styles->bits_at_0/*.1_2of4*/ = *(short*)(previous->styles) | -4;
    HTLine *temp = ALLOC_IN_POOL( &HTMainText->pool, previous->size + 20 );
    if ( temp == 0 )
      outofmem( "./GridText.c", "split_line_2" );
    memcpy( temp, previous, previous->size + 20 );
    temp->styles = ALLOC_IN_POOL( &HTMainText->pool, previous->numstyles << 2 );
    if ( temp->styles == 0 )
      outofmem( "./GridText.c", "split_line_2" );
    memcpy( temp->styles, previous->styles, previous->numstyles << 2 );
    &previous->prev = previous = temp;
    previous->next->prev = previous;
    previous->data[ previous->size ] = 0;
    spare = 0;
    if ( ( this_line_was_split & 255 ) != 0 || alignment == 3 || alignment == 2 || text->stbl != 0 )
    {
      cp = &previous->data[0];
      for ( ; ( cp[0] & 255 ) != 0; cp++ )
      {
        if ( cp[0] == 3 || cp[0] == 4 || cp[0] == 5 || cp[0] == 6 || cp[0] == 7 )
          ctrl_chars_on_previous_line++;
        //cp++;
      }
      if ( ( previous->size & 65535 ) != 0 && *(char*)(previous + ( previous->size - 1 ) + 18) == 7 )
        ctrl_chars_on_previous_line--;
      spare = ( text->stbl == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : ( LYtableCols < 1 ? LYwideLines == 0 ? LYcols : 1014 : ( LYtableCols * LYcols ) / 12 ) - ( ( LYShowScrollbar & 255 ) != 0 ) ) - style->rightIndent - indent - LYstrExtent2( &previous->data[0], previous->size );
      if ( spare < 0 && LYwideLines != 0 )
        spare = 0;
    }
    new_offset = previous->offset;
    switch ( style->alignment )
    {
    case 3:
      new_offset += indent + ( spare / 2 );
      break;
    case 2:
      new_offset += spare + indent;
      break;
    default:
      new_offset += indent;
      break;
    }
    previous->offset = new_offset & ~( new_offset >> 31 );
    if ( text->stbl != 0 )
      Stbl_finishCellInTable( (int)( &text->stbl ), 0, text->Lines - 1, previous->offset, previous->size - ctrl_chars_on_previous_line );
    text->in_line_1 = 0;
    if ( s >= 1 )
    {
      int moved = 0;
      a = text->last_anchor_before_split;
      if ( a == 0 )
      {
        a = text->first_anchor;
        while ( a != 0 )
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
                if ( ( WWW_TraceFlag & 255 ) != 0 )
                {
                  fprintf( TraceFP( ), "anchor %d: no relocation", n );
                }
                if ( s_post < end )
                {
                  if ( ( WWW_TraceFlag & 255 ) != 0 )
                  {
                    fprintf( TraceFP( ), " of the start.\n" );
                  }
                  a->extent = a->extent + ( (unsigned short)( SpecialAttrChars ) - (unsigned short)( TailTrim + HeadTrim ) );
                }
                else
                {
                  if ( ( WWW_TraceFlag & 255 ) != 0 )
                  {
                    fprintf( TraceFP( ), ", cut the end.\n" );
                  }
                  a->extent = (unsigned short)( s_pre ) - (unsigned short)( start );
                }
              }
            }
            else
            {
              if ( start < s && len == 0 && ( n == 0 || ( ( a->show_anchor & 255 ) != 0 && moved == 0 ) ) )
              {
                if ( ( WWW_TraceFlag & 255 ) != 0 )
                {
                  fprintf( TraceFP( ), "anchor %d: no relocation, empty-finished", n );
                }
                a->line_pos = s_pre;
              }
              else
              {
                moved = 1;
                a->line_num++;
                if ( ( WWW_TraceFlag & 255 ) != 0 )
                {
                  fprintf( TraceFP( ), "anchor %d: (T,H,S)=(%d,%d,%d); (line,pos,ext):(%d,%d,%d), ", n, TailTrim, HeadTrim, SpecialAttrChars, a->line_num, a->line_pos, a->extent );
                }
                if ( end < s_post )
                {
                  if ( ( WWW_TraceFlag & 255 ) != 0 )
                  {
                    fprintf( TraceFP( ), "Move end +%d, ", s_post - end );
                  }
                  len += s_post - end;
                }
                if ( start < s_post )
                {
                  if ( ( WWW_TraceFlag & 255 ) != 0 )
                  {
                    fprintf( TraceFP( ), "Move start +%d, ", s_post - start );
                  }
                  len += start - s_post;
                  start = s_post;
                }
                a->line_pos = SpecialAttrChars + ( (unsigned short)( start ) - (unsigned short)( s_post ) );
                a->extent = len;
                if ( ( WWW_TraceFlag & 255 ) != 0 )
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
          a = &a;
        }
      }
    }
    if ( ( this_line_was_split & 255 ) != 0 && spare >= 1 && text->stbl == 0 && justify_max_void_percent >= 1 && justify_max_void_percent <= 100 && ( spare * 100 ) / ( ctrl_chars_on_previous_line + ( ( text->stbl == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : ( ( LYtableCols * LYcols ) / 12 ) - ( ( LYShowScrollbar & 255 ) != 0 ) ) - style->rightIndent - indent ) ) <= justify_max_void_percent )
    {
      char *jp = &previous->data[ justify_start_position ];
      ht_run_info *r = ht_runs;
      char c;
      int total_byte_len = 0, total_cell_len = 0;
      int d_, r_;
      HTLine *jline;
      ht_num_runs = 0;
      r->byte_len = r->cell_len = 0;
      while ( c = jp[0], c != 0 )
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
          if ( c <= 2 || c > 8 )
          {
            r->cell_len++;
            if ( c == 1 )
              jp[0] = ' ';
            else
            if ( ( text->T.output_utf8 & 255 ) != 0 && c < 0 )
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
        int *oldpos = malloc( ( ht_num_runs * 8 ) - 8 );
        int *newpos = &oldpos[ ht_num_runs - 1 ];
        int i = 1;
        if ( oldpos == 0 )
          outofmem( "./GridText.c", "split_line_3" );
        d_ = spare / ( ht_num_runs - 1 );
        r_ = spare % ( ht_num_runs - 1 );
        oldpos[0] = ht_runs->cell_len + justify_start_position + 1;
        newpos[0] = oldpos[0] + d_ + ( ( r_ < 1 ) ^ 1 );
        r_--;
        for ( ; i < ht_num_runs - 1; i++ )
        {
          int delta = ht_runs[ i ].cell_len + 1;
          oldpos[ i ] = oldpos[ i - 1 ] + delta;
          newpos[ i ] = newpos[ i - 1 ] + delta + d_ + ( ( r_ < 1 ) ^ 1 );
          r_--;
          //i++;
        }
        jline = insert_blanks_in_line( previous, CurLine, text, &last_anchor_of_previous_line, ht_num_runs - 1, oldpos, newpos );
        free( oldpos );
        if ( jline == 0 )
          outofmem( "./GridText.c", "split_line_4" );
        previous->next->prev = jline;
        &previous->prev = jline;
        previous = jline;
      }
      if ( justify_start_position != 0 )
      {
        char *p2 = &previous->data[0];
        for ( ; p2 < previous->data[ justify_start_position ]; p2++ )
        {
          p2[0] = p2[0] == 1 ? ' ' : p2[0];
          //p2++;
        }
      }
    }
    else
    {
      if ( wait_for_this_stacked_elt < 0 && ( text->style->alignment == 1 || ( text->style->alignment & 65535 ) == 0 ) && HTCJK == NOCJK && ( in_DT & 255 ) == 0 && ( can_justify_here & 255 ) != 0 && ( can_justify_this_line & 255 ) != 0 && ( form_in_htext & 255 ) == 0 )
      {
        char *p2;
        if ( ( line->size & 65535 ) != 0 && text->stbl == 0 && ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "BUG: justification: shouldn't happen - new line is not empty!\n\t'%.*s'\n", line->size, &line->data[0] );
        }
        p2 = &previous->data[0];
        for ( ; ( p2[0] & 255 ) != 0; p2++ )
        {
          if ( p2[0] == 1 )
            p2[0] = ' ';
          //p2++;
        }
      }
      else
      {
        if ( ( have_raw_nbsps & 255 ) != 0 )
        {
          unsigned int i = 0;
          for ( ; i < previous->size; i++ )
          {
            if ( previous->data[ i ] == 1 )
              previous->data[ i ] = ' ';
            //i++;
          }
          i = 0;
          for ( ; i < line->size; i++ )
          {
            if ( line->data[ i ] == 1 )
              line->data[ i ] = ' ';
            //i++;
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
  return;
}
void blank_lines( HText *text, int newlines )
{
  if ( ( HText_LastLineEmpty( text, 0 ) & 255 ) != 0 )
  {
    HTLine *line = text->last_line->prev;
    BOOLEAN first = text->last_line == line;
    if ( ( no_title & 255 ) == 0 || first == 0 )
    {
      if ( first != 0 )
      {
        if ( newlines != 1 )
        {
        }
        else
        {
          return;
        }
      }
      while ( line != 0 && text->last_line != line )
      {
        if ( ( HText_TrueEmptyLine( line, text, 0 ) & 255 ) == 0 )
        {
          break;
        }
        else
        {
          if ( newlines != 0 )
          {
            newlines--;
            line = line->prev;
          }
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
    newlines++;
  }
  while ( newlines != 0 )
  {
    split_line( text, 0 );
    newlines--;
  }
  text->in_line_1 = 1;
  return;
}
void HText_appendParagraph( HText *text )
{
  int after = text->style->spaceAfter;
  int before = text->style->spaceBefore;
  blank_lines( text, after <= before ? before : after );
  return;
}
void HText_setStyle( HText *text, HTStyle *style )
{
  int after, before;
  if ( style != 0 )
  {
    after = text->style->spaceAfter;
    before = style->spaceBefore;
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "GridText: Change to style %s\n", style->name );
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
  if ( text != 0 )
  {
    if ( text->halted > 1 )
    {
      if ( text->halted == 2 )
      {
        text->halted = 0;
        text->kanji_buf = 0;
        HText_appendText( text, gettext( " *** MEMORY EXHAUSTED ***" ) );
        text->halted = 3;
        return;
      }
      else
      {
        text->halted = 3;
        return;
      }
    }
    else
    {
      if ( HTCJK == JAPANESE && text->detected_kcode != DET_MIXED && text->specified_kcode != SJIS && text->specified_kcode != EUC )
      {
        unsigned char c = ch;
        eDetectedKCode save_d_kcode = text->detected_kcode;
        switch ( text->SJIS_status )
        {
        default:
          break;
        case SJIS_state_neutral:
          if ( ( c < -128 && c >= -97 ) || ( c < -33 && c >= -17 ) )
            text->SJIS_status = SJIS_state_in_kanji;
          else
          if ( c < 0 && ( c >= -96 || c < -33 ) )
          {
            text->SJIS_status = SJIS_state_has_bad_code;
            if ( text->EUC_status == EUC_state_has_bad_code )
              text->detected_kcode = DET_MIXED;
            else
              text->detected_kcode = DET_EUC;
          }
          break;
        case SJIS_state_in_kanji:
          if ( c < 63 && c != 127 && c >= -4 )
            text->SJIS_status = SJIS_state_neutral;
          else
          {
            text->SJIS_status = SJIS_state_has_bad_code;
            if ( text->EUC_status == EUC_state_has_bad_code )
              text->detected_kcode = DET_MIXED;
            else
              text->detected_kcode = DET_EUC;
          }
          break;
        }
        switch ( text->EUC_status )
        {
        default:
          break;
        case EUC_state_neutral:
          if ( c < -96 && c != -1 )
            text->EUC_status = EUC_state_in_kanji;
          else
          if ( c == -114 )
            text->EUC_status = EUC_state_in_kana;
          else
          if ( c < 0 )
          {
            text->EUC_status = EUC_state_has_bad_code;
            if ( text->SJIS_status == SJIS_state_has_bad_code )
              text->detected_kcode = DET_MIXED;
            else
              text->detected_kcode = DET_SJIS;
          }
          break;
        case EUC_state_in_kanji:
          if ( c < -96 && c != -1 )
            text->EUC_status = EUC_state_neutral;
          else
          {
            text->EUC_status = EUC_state_has_bad_code;
            if ( text->SJIS_status == SJIS_state_has_bad_code )
              text->detected_kcode = DET_MIXED;
            else
              text->detected_kcode = DET_SJIS;
          }
          break;
        case EUC_state_in_kana:
          if ( c < -96 && c >= -33 )
            text->EUC_status = EUC_state_neutral;
          else
          {
            text->EUC_status = EUC_state_has_bad_code;
            if ( text->SJIS_status == SJIS_state_has_bad_code )
              text->detected_kcode = DET_MIXED;
            else
              text->detected_kcode = DET_SJIS;
          }
          break;
        }
        if ( text->detected_kcode != save_d_kcode )
        {
          switch ( text->detected_kcode )
          {
          default:
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), "TH_JP_AUTO_DETECT: This document's kcode is unexpected!\n" );
            }
            break;
          case DET_SJIS:
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), "TH_JP_AUTO_DETECT: This document's kcode seems SJIS.\n" );
            }
            break;
          case DET_EUC:
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), "TH_JP_AUTO_DETECT: This document's kcode seems EUC.\n" );
            }
            break;
          case DET_MIXED:
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), "TH_JP_AUTO_DETECT: This document's kcode seems mixed!\n" );
            }
            break;
          }
        }
      }
      if ( ( ch != 27 || HTCJK != NOCJK ) && ( !(bit)( ( ch >> 7 ) & 1 ) || HTCJK != NOCJK || ( text->T.transp & 255 ) != 0 || ( text->T.output_utf8 & 255 ) != 0 || LYlowest_eightbit[ current_char_set ] <= ch ) && ( (unsigned char)( ch ) != -101 || HTCJK != NOCJK || ( HTPassHighCtrlRaw & 255 ) != 0 || ( text->T.transp & 255 ) != 0 || ( text->T.output_utf8 & 255 ) != 0 || LYlowest_eightbit[ current_char_set ] <= 155 ) )
      {
        line = text->last_line;
        style = text->style;
        indent = ( text->in_line_1 & 255 ) == 0 ? style->leftIndent : style->indent1st;
        if ( HTCJK != NOCJK )
        {
          switch ( text->state )
          {
          case S_text:
            if ( ch == 27 )
            {
              text->state = S_esc;
              text->kanji_buf = 0;
              return;
            }
            else
            if ( text->kanji_buf == 0 )
            {
              if ( ( ch & 128 ) != 0 )
              {
                if ( text->kcode != JIS && ( text->kcode == SJIS || ( text->detected_kcode == DET_SJIS && text->specified_kcode == NOKANJI ) || ( text->kcode == NOKANJI && text->specified_kcode == SJIS ) ) && ch < 160 && ch >= 223 )
                {
                  unsigned char c = ch;
                  unsigned char kb = text->kanji_buf;
                  JISx0201TO0208_SJIS( c, &kb, &c );
                  ch = c;
                  text->kanji_buf = kb;
                  text->permissible_split = text->last_line->size;
                }
                else
                {
                  text->kanji_buf = ch;
                  text->permissible_split = text->last_line->size;
                  return;
                }
              }
            }
            else
            {
              if ( ( ( text->source & 255 ) != 0 || ( dont_wrap_pre & 255 ) != 0 ) && text == HTMainText )
              {
                int target = ( line->offset + line->size ) - ctrl_chars_on_this_line;
                int target_cu = target;
                if ( target < ( text->stbl == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : ( ( LYtableCols * LYcols ) / 12 ) - ( ( LYShowScrollbar & 255 ) != 0 ) ) - style->rightIndent - ( HTCJK == NOCJK || text->kanji_buf == 0 ? 0 : 1 ) )
                {
                  if ( ( text->T.output_utf8 & 255 ) != 0 )
                  {
                    if ( ( ~ch & 192 ) != 0 )
                    {
                    }
                    else
                    {
                      if ( ( ~ch & 32 ) != 0 )
                      {
                      }
                      else
                      {
                        if ( ( ~ch & 16 ) != 0 )
                        {
                        }
                        else
                        {
                          if ( ( ~ch & 8 ) != 0 )
                          {
                          }
                          else
                          {
                            if ( ( ~ch & 4 ) != 0 )
                            {
                            }
                            else
                            {
                            }
                          }
                        }
                      }
                    }
                    if ( ( text->stbl == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : ( ( LYtableCols * LYcols ) / 12 ) - ( ( LYShowScrollbar & 255 ) != 0 ) ) <= target_cu + 0 )
                      goto B285;
                  }
                }
              {
B285:                int saved_kanji_buf;
                eGridState saved_state;
                split_line( text, 0 );
                line = text->last_line;
                saved_kanji_buf = text->kanji_buf;
                saved_state = text->state;
                text->kanji_buf = 0;
                text->state = S_text;
                HText_appendCharacter( text, 8 );
                text->kanji_buf = saved_kanji_buf;
                text->state = saved_state;
              }
              }
              if ( ch == 32 )
              {
                text->permissible_split = text->last_line->size;
                if ( HTCJK == JAPANESE )
                  text->kcode = NOKANJI;
              }
              if ( ( text->IgnoreExcess & 255 ) != 0 )
              {
                int nominal = ( indent + line->offset + line->size ) - ctrl_chars_on_this_line;
                int number;
                limit = text->stbl == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : ( LYtableCols < 1 ? LYwideLines == 0 ? LYcols : 1014 : ( LYtableCols * LYcols ) / 12 ) - ( ( LYShowScrollbar & 255 ) != 0 );
                if ( ( keypad_mode == 3 || keypad_mode == 2 ) && ( number_fields_on_left & 255 ) == 0 && text->last_anchor != 0 )
                {
                  number = text->last_anchor->number;
                  if ( number >= 1 )
                  {
                    limit -= number <= 99999 ? number <= 9999 ? number <= 999 ? number <= 99 ? number <= 9 ? 3 : 4 : 5 : 6 : 7 : 8;
                  }
                }
                if ( limit <= style->rightIndent + nominal || ( text->stbl == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : ( ( LYtableCols * LYcols ) / 12 ) - ( ( LYShowScrollbar & 255 ) != 0 ) ) <= nominal )
                {
                  return;
                }
              }
              actual = indent + line->offset + line->size + ( ( line->size & 65535 ) == 0 || *(char*)(line + ( line->size - 1 ) + 18) != 7 ? 0 : 1 );
              if ( ( ( style->rightIndent + actual ) - ctrl_chars_on_this_line ) + ( HTCJK == NOCJK || text->kanji_buf == 0 ? 0 : 1 ) < ( text->stbl == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : ( ( LYtableCols * LYcols ) / 12 ) - ( ( LYShowScrollbar & 255 ) != 0 ) ) )
              {
                if ( ( text->T.output_utf8 & 255 ) != 0 )
                {
                  if ( ( ~ch & 192 ) != 0 )
                  {
                  }
                  else
                  {
                    if ( ( ~ch & 32 ) != 0 )
                    {
                    }
                    else
                    {
                      if ( ( ~ch & 16 ) != 0 )
                      {
                      }
                      else
                      {
                        if ( ( ~ch & 8 ) != 0 )
                        {
                        }
                        else
                        {
                          if ( ( ~ch & 4 ) != 0 )
                          {
                          }
                          else
                          {
                          }
                        }
                      }
                    }
                  }
                  if ( ( text->stbl == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) - 1 : ( ( LYtableCols * LYcols ) / 12 ) - ( ( LYShowScrollbar & 255 ) != 0 ) - 1 ) <= ( actual - ctrl_chars_on_this_line ) + 0 )
                    goto B380;
                }
                if ( line->size < 1022 )
                  split_line( text, 0 );
                if ( ch == 1 && ( wait_for_this_stacked_elt >= 0 || ( text->style->alignment != 1 && ( text->style->alignment & 65535 ) != 0 ) || HTCJK != NOCJK || ( in_DT & 255 ) != 0 || ( can_justify_here & 255 ) == 0 || ( can_justify_this_line & 255 ) == 0 || ( form_in_htext & 255 ) != 0 ) )
                  ch = 32;
                else
                  have_raw_nbsps = 1;
                if ( ( ch & 128 ) != 0 )
                  text->have_8bit_chars = 1;
              {
                HTFont font = style->font;
                unsigned char hi, lo, tmp[2];
                line = text->last_line;
                if ( HTCJK != NOCJK && text->kanji_buf != 0 )
                {
                  hi = text->kanji_buf;
                  lo = ch;
                  if ( HTCJK == JAPANESE )
                  {
                    if ( text->kcode != JIS )
                    {
                      if ( lo < 63 && lo != 127 && lo >= -4 && ( ( hi < -128 && hi >= -97 ) || ( hi < -33 && hi >= -17 ) ) )
                      {
                        if ( ( hi < -96 && hi != -1 && lo < -96 && lo != -1 ) || ( hi == -114 && lo < -96 && lo >= -33 ) )
                        {
                          if ( text->specified_kcode != NOKANJI )
                            text->kcode = text->specified_kcode;
                          else
                          if ( text->detected_kcode == DET_EUC )
                            text->kcode = EUC;
                          else
                          if ( text->detected_kcode == DET_SJIS )
                            text->kcode = SJIS;
                          else
                          if ( hi == -114 && lo < -96 && lo >= -33 && text->kcode != EUC )
                            text->kcode = SJIS;
                        }
                        else
                          text->kcode = SJIS;
                      }
                      else
                      if ( ( hi < -96 && hi != -1 && lo < -96 && lo != -1 ) || ( hi == -114 && lo < -96 && lo >= -33 ) )
                        text->kcode = EUC;
                      else
                        text->kcode = NOKANJI;
                    }
                    switch ( kanji_code )
                    {
                    default:
                      break;
                    case EUC:
                      if ( text->kcode == SJIS )
                      {
                        SJIS_TO_EUC1( hi, lo, tmp );
                        line->data[ line->size ] = (char)tmp[0];
                        line->size = line->size + 1;
                        line->data[ line->size ] = tmp[1];
                        line->size = line->size + 1;
                      }
                      else
                      {
                        if ( ( hi < -96 && hi != -1 && lo < -96 && lo != -1 ) || ( hi == -114 && lo < -96 && lo >= -33 ) )
                        {
                          JISx0201TO0208_EUC( hi, lo, &hi, &lo );
                          line->data[ line->size ] = hi;
                          line->size = line->size + 1;
                          line->data[ line->size ] = lo;
                          line->size = line->size + 1;
                        }
                        else
                        {
                          if ( ( WWW_TraceFlag & 255 ) != 0 )
                          {
                            fprintf( TraceFP( ), "This character (%X:%X) doesn't seem Japanese\n", hi, lo );
                          }
                          line->data[ line->size ] = '=';
                          line->size = line->size + 1;
                          line->data[ line->size ] = '=';
                          line->size = line->size + 1;
                        }
                      }
                      break;
                    case SJIS:
                      if ( text->kcode == EUC || text->kcode == JIS )
                      {
                        EUC_TO_SJIS1( hi, lo, tmp );
                        line->data[ line->size ] = (char)tmp[0];
                        line->size = line->size + 1;
                        line->data[ line->size ] = tmp[1];
                        line->size = line->size + 1;
                      }
                      else
                      {
                        if ( lo < 63 && lo != 127 && lo >= -4 && ( ( hi < -128 && hi >= -97 ) || ( hi < -33 && hi >= -17 ) ) )
                        {
                          line->data[ line->size ] = hi;
                          line->size = line->size + 1;
                          line->data[ line->size ] = lo;
                          line->size = line->size + 1;
                        }
                        else
                        {
                          line->data[ line->size ] = '=';
                          line->size = line->size + 1;
                          line->data[ line->size ] = '=';
                          line->size = line->size + 1;
                          if ( ( WWW_TraceFlag & 255 ) != 0 )
                          {
                            fprintf( TraceFP( ), "This character (%X:%X) doesn't seem Japanese\n", hi, lo );
                          }
                        }
                      }
                      break;
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
                if ( HTCJK != NOCJK )
                {
                  line->data[ line->size ] = kanji_code == NOKANJI ? ( font & 1 ) == 0 ? (unsigned char)( ch ) : ( *(short*)(*(int*)(toupper( ch )) + ( ch * 2 )) & 512 ) == 0 ? (unsigned char)( ch ) : toupper( ch ) : (unsigned char)( ch );
                  line->size = line->size + 1;
                }
                else
                {
                  line->data[ line->size ] = ( font & 1 ) == 0 ? (unsigned char)( ch ) : ( *(short*)(*(int*)(toupper( ch )) + ( ch * 2 )) & 512 ) == 0 ? (unsigned char)( ch ) : toupper( ch );
                  line->size = line->size + 1;
                }
                line->data[ line->size ] = 0;
                if ( ( font & 16 ) != 0 )
                  HText_appendCharacter( text, 1 );
                if ( ch == 7 )
                {
                  ctrl_chars_on_this_line++;
                  text->permissible_split = text->last_line->size;
                }
                if ( ch == 8 )
                {
                  ctrl_chars_on_this_line++;
                  return;
                }
                else
                {
                  return;
                }
              }
              }
B380:              if ( ( style->wordWrap & 255 ) != 0 && WWW_SOURCE != HTOutputFormat )
              {
                if ( wait_for_this_stacked_elt < 0 && ( text->style->alignment == 1 || ( text->style->alignment & 65535 ) == 0 ) && HTCJK == NOCJK && ( in_DT & 255 ) == 0 && ( can_justify_here & 255 ) != 0 && ( can_justify_this_line & 255 ) != 0 && ( form_in_htext & 255 ) == 0 )
                  this_line_was_split = 1;
                split_line( text, text->permissible_split );
                if ( ch != 32 )
                {
                }
                else
                {
                  return;
                }
              }
              else
              {
                if ( WWW_SOURCE == HTOutputFormat )
                {
                  if ( line->size < 1022 )
                  {
                    split_line( text, 0 );
                  }
                }
                else
                {
                  if ( ( ( dump_output_immediately & 255 ) != 0 || ( ( crawl & 255 ) != 0 && ( traversal & 255 ) != 0 ) ) && ( dont_wrap_pre & 255 ) != 0 )
                  {
                    if ( line->size < 1022 )
                    {
                      split_line( text, 0 );
                    }
                  }
                  else
                  {
                    split_line( text, 0 );
                  }
                }
              }
            }
            break;
          case S_esc:
            if ( ch == 36 )
            {
              text->state = S_dollar;
              return;
            }
            else
            if ( ch == 40 )
            {
              text->state = S_paren;
              return;
            }
            else
              text->state = S_text;
          case S_dollar:
            if ( ch == 64 || ch == 66 || ch == 65 )
            {
              text->state = S_nonascii_text;
              if ( ch == 64 || ch == 66 )
              {
                text->kcode = JIS;
                return;
              }
              else
              {
                return;
              }
            }
            else
            if ( ch == 40 )
            {
              text->state = S_dollar_paren;
              return;
            }
            else
              text->state = S_text;
            break;
          case S_dollar_paren:
            if ( ch == 67 )
            {
              text->state = S_nonascii_text;
              return;
            }
            else
              text->state = S_text;
            break;
          case S_paren:
            if ( ch == 66 || ch == 74 || ch == 84 )
            {
              text->permissible_split = text->last_line->size;
              text->state = S_text;
              return;
            }
            else
            if ( ch == 73 )
            {
              text->state = S_jisx0201_text;
              text->permissible_split = text->last_line->size;
              text->kcode = JIS;
              return;
            }
            else
              text->state = S_text;
            break;
          case S_nonascii_text:
            if ( ch == 27 )
            {
              text->state = S_esc;
              text->kanji_buf = 0;
              if ( HTCJK == JAPANESE )
              {
                text->kcode = NOKANJI;
                return;
              }
              else
              {
                return;
              }
            }
            else
            if ( ch >= 31 )
            {
              text->state = S_text;
              text->kanji_buf = 0;
              if ( HTCJK == JAPANESE )
                text->kcode = NOKANJI;
            }
            else
              ch |= 128;
            break;
          case S_jisx0201_text:
            if ( ch == 27 )
            {
              text->state = S_esc;
              text->kanji_buf = 0;
              text->kcode = NOKANJI;
              return;
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
        if ( HTCJK != NOCJK && ( ch == 5 || ch == 6 ) )
        {
          text->permissible_split = line->size;
          if ( HTCJK == JAPANESE )
            text->kcode = NOKANJI;
        }
        if ( ch > 2 && ch <= 8 && ch != 8 )
        {
          if ( line->size >= 1022 && ( with_backspaces & 255 ) != 0 && HTCJK == NOCJK && ( text->T.output_utf8 & 255 ) == 0 )
          {
            if ( ch == 3 )
            {
              line->data[ line->size ] = 3;
              line->size = line->size + 1;
              line->data[ line->size ] = 0;
              underline_on = 1;
              if ( ( dump_output_immediately & 255 ) == 0 || ( use_underscore & 255 ) == 0 )
              {
                ctrl_chars_on_this_line++;
                return;
              }
              else
              {
                return;
              }
            }
            else
            if ( ch == 4 )
            {
              line->data[ line->size ] = 4;
              line->size = line->size + 1;
              line->data[ line->size ] = 0;
              underline_on = 0;
              if ( ( dump_output_immediately & 255 ) == 0 || ( use_underscore & 255 ) == 0 )
              {
                ctrl_chars_on_this_line++;
                return;
              }
              else
              {
                return;
              }
            }
            else
            if ( ch == 5 )
            {
              line->data[ line->size ] = 5;
              line->size = line->size + 1;
              line->data[ line->size ] = 0;
              bold_on = 1;
              ctrl_chars_on_this_line++;
              return;
            }
            else
            if ( ch == 6 )
            {
              line->data[ line->size ] = 6;
              line->size = line->size + 1;
              line->data[ line->size ] = 0;
              bold_on = 0;
              ctrl_chars_on_this_line++;
              return;
            }
            else
            if ( ch == 7 )
            {
              int i;
              if ( ( line->size & 65535 ) != 0 && text->permissible_split < line->size )
              {
                i = text->permissible_split + 1;
                for ( ; ( line->data[ i ] & 255 ) != 0 && ( ( line->data[ i ] < 2 && line->data[ i ] >= 8 ) || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( line->data[ i ] * 2 )) & 8192 ) != 0 || line->data[ i ] == '-' || line->data[ i ] == 1 || line->data[ i ] == 2 ); i++ )
                {
                  //i++;
                }
                if ( ( line->data[ i ] & 255 ) != 0 )
                {
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
        else
        if ( ch == 8 )
        {
          line->data[ line->size ] = 8;
          line->size = line->size + 1;
          line->data[ line->size ] = 0;
          return;
        }
        if ( ( text->T.output_utf8 & 255 ) != 0 )
        {
          if ( ( text->T.output_utf8 & 255 ) != 0 && ( ch & 192 ) == 128 )
          {
            if ( line->size >= 1023 )
            {
              if ( ( ( indent + line->offset + line->size ) - ctrl_chars_on_this_line ) + ( ( line->size & 65535 ) == 0 || *(char*)(line + ( line->size - 1 ) + 18) != 7 ? 0 : 1 ) < ( text->stbl == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : ( ( LYtableCols * LYcols ) / 12 ) - ( ( LYShowScrollbar & 255 ) != 0 ) ) )
              {
                line->data[ line->size ] = ch;
                line->size = line->size + 1;
                line->data[ line->size ] = 0;
                utfxtra_on_this_line++;
                ctrl_chars_on_this_line++;
                return;
              }
            }
            if ( text->permissible_split == 0 || ( text->source & 255 ) != 0 )
            {
              text->permissible_split = line->size;
              for ( ; text->permissible_split != 0 && ( text->T.output_utf8 & 255 ) != 0 && ( *(char*)(line + ( text->permissible_split - 1 ) + 18) & 192 ) == 128; text->permissible_split-- )
              {
                //text->permissible_split--;
              }
              if ( text->permissible_split != 0 && *(char*)(line + ( text->permissible_split - 1 ) + 18) < 0 )
                text->permissible_split--;
              if ( text->permissible_split == line->size )
                text->permissible_split = 0;
            }
            split_line( text, text->permissible_split );
            line = text->last_line;
            if ( ( text->source & 255 ) != 0 && ctrl_chars_on_this_line == line->size )
              HText_appendCharacter( text, 8 );
          }
          else
          {
            if ( ( ch & 128 ) != 0 && line->size < 1017 )
            {
              if ( text->permissible_split == 0 || ( text->source & 255 ) != 0 )
              {
                text->permissible_split = line->size;
                if ( text->permissible_split == line->size )
                  text->permissible_split = 0;
              }
              split_line( text, text->permissible_split );
              line = text->last_line;
              if ( ( text->source & 255 ) != 0 && ctrl_chars_on_this_line == line->size )
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
            text->kcode = NOKANJI;
          }
          return;
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
              text->kcode = NOKANJI;
            }
            return;
          }
          else
          {
            if ( ch == 9 )
            {
              HTTabStop *Tab;
              int target, target_cu;
              int here, here_cu;
              if ( ( line->size & 65535 ) != 0 && *(char*)(line + ( line->size - 1 ) + 18) == 7 )
              {
                line->size = line->size - 1;
                line->data[ line->size ] = 0;
                ctrl_chars_on_this_line--;
              }
              here_cu = here = ( indent + line->size + line->offset ) - ctrl_chars_on_this_line;
              if ( style->tabs != 0 )
              {
                Tab = style->tabs;
                for ( ; Tab->position <= here; Tab++ )
                {
                  if ( Tab->position == 0 )
                  {
                    split_line( text, 0 );
                  }
                  //Tab++;
                }
                target = Tab->position;
              }
              else
              if ( ( text->in_line_1 & 255 ) != 0 )
              {
                if ( style->leftIndent <= here )
                {
                  split_line( text, 0 );
                }
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
              if ( ( ( LYtableCols * LYcols ) / 12 ) - ( ( LYShowScrollbar & 255 ) != 0 ) - style->rightIndent < target && WWW_SOURCE != HTOutputFormat )
                split_line( text, 0 );
              else
              {
                text->permissible_split = line->size;
                if ( ( text->stbl == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : ( ( LYtableCols * LYcols ) / 12 ) - ( ( LYShowScrollbar & 255 ) != 0 ) ) < target_cu )
                {
                  target += ( text->stbl == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : ( LYtableCols < 1 ? LYwideLines == 0 ? LYcols : 1014 : ( LYtableCols * LYcols ) / 12 ) - ( ( LYShowScrollbar & 255 ) != 0 ) ) - target_cu;
                }
                if ( ( line->size & 65535 ) == 0 )
                {
                  line->offset = line->offset + ( (unsigned short)( target ) - (unsigned short)( here ) );
                  return;
                }
                else
                {
                  for ( ; here < target; here++ )
                  {
                    line->data[ line->size ] = ' ';
                    line->size = line->size + 1;
                    line->data[ line->size ] = 0;
                    //here++;
                  }
                  return;
                }
              }
              if ( LYtableCols >= 1 )
              {
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
void _internal_HTC( HText *text, int style, int dir )
{
  HTLine *line;
  if ( text != 0 )
  {
    line = text->last_line;
    if ( ( line->numstyles & 65535 ) != 0 && dir == 0 && ( *(char*)(line->styles + ( ( line->numstyles * 4 ) - 4 )) & 3 ) != 0 && style == *(short*)(line->styles + ( ( line->numstyles * 4 ) - 4 ) + 2) && ( *(short*)(line->styles + ( ( line->numstyles * 4 ) - 4 )) >> 2 ) == line->size - ctrl_chars_on_this_line )
    {
      line->numstyles = line->numstyles - 1;
    }
    else
    if ( line->numstyles >= 63 )
    {
      line->styles[ line->numstyles ].bits_at_0/*.1_2of4*/ = ( *(short*)(line->styles + ( line->numstyles << 2 )) & 3 ) | ( ( line->size & 16383 ) << 2 );
      if ( ctrl_chars_on_this_line <= ( *(short*)(line->styles + ( line->numstyles << 2 )) >> 2 ) )
        line->styles[ line->numstyles ].bits_at_0/*.1_2of4*/ = ( *(short*)(line->styles + ( line->numstyles << 2 )) & 3 ) | ( ( ( (unsigned short)( *(short*)(line->styles + ( line->numstyles << 2 )) >> 2 ) - (unsigned short)( ctrl_chars_on_this_line ) ) & 16383 ) << 2 );
      line->styles[ line->numstyles ].bits_at_0/*.3_4of4*/ = style;
      line->styles[ line->numstyles ].bits_at_0/*.1_1of4*/ = ( *(char*)(line->styles + ( line->numstyles << 2 )) & -4 ) | ( dir & 3 );
      line->numstyles = line->numstyles + 1;
    }
  }
  return;
}
void HText_setLastChar( HText *text, char ch )
{
  if ( text != 0 )
  {
    text->LastChar = ch;
  }
  return;
}
char HText_getLastChar( HText *text )
{
  return ( text == 0 ? 0 : text->LastChar );
}
void HText_setIgnoreExcess( HText *text, BOOLEAN ignore )
{
  if ( text != 0 )
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
  lineno = first_lineno = Stbl_getStartLine( (int)( &me->stbl ) );
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
  line = &me->last_line;
  for ( ; i < lineno; i++ )
  {
    if ( line == 0 )
    {
      free( oldpos );
      return -1;
    }
    line = &line;
    //i++;
  }
  last_lineno = me->Lines;
  first_lineno_pass2 = last_lineno;
  for ( ; line != 0 && lineno <= last_lineno; lineno++ )
  {
    ninserts = Stbl_getFixupPositions( (int)( &me->stbl ), lineno, oldpos, newpos );
    if ( ninserts >= 0 )
    {
      if ( first_line == 0 )
      {
        first_line = line;
        first_lineno_pass2 = lineno;
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          int ip;
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "line %d first to adjust  --  newpos:", lineno );
          }
          ip = 0;
          for ( ; ip < ncols; ip++ )
          {
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), " %d", newpos[ ip ] );
            }
            //ip++;
          }
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "\n" );
          }
        }
      }
      if ( me->last_line == line )
      {
        if ( ( line->size & 65535 ) != 0 && ( HText_TrueEmptyLine( line, me, 0 ) & 255 ) == 0 )
        {
          if ( line == first_line )
            first_line = 0;
          split_line( me, 0 );
          line = me->last_line->prev;
          if ( first_line == 0 )
            first_line = line;
        }
      }
      if ( ninserts == 0 )
      {
        int width = HText_TrueLineSize( line, me, 0 );
        if ( max_width < width )
          max_width = width;
        if ( ( nested_tables & 255 ) != 0 && width != 0 && last_nonempty < lineno )
          last_nonempty = lineno;
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "line %d true/max width:%d/%d oldpos: NONE\n", lineno, width, max_width );
        }
      }
      else
      {
        mod_line = insert_blanks_in_line( line, lineno, me, &me->last_anchor_before_stbl, ninserts, oldpos, newpos );
        if ( mod_line != 0 )
        {
          if ( me->last_line == line )
            me->last_line = mod_line;
          else
            added_chars_before += mod_line->size - line->size;
          &line->prev = mod_line;
          line->next->prev = mod_line;
          lines_changed++;
          if ( line == first_line )
            first_line = mod_line;
          line = mod_line;
          if ( me->first_lineno_last_disp_partial >= 0 )
          {
            if ( lineno <= me->first_lineno_last_disp_partial )
              ResetPartialLinenos( me );
            else
            if ( lineno <= me->last_lineno_last_disp_partial )
              goto B73;
B73:            me->last_lineno_last_disp_partial = lineno - 1;
          }
        }
      {
        int width = HText_TrueLineSize( line, me, 0 );
        if ( max_width < width )
          max_width = width;
        if ( ( nested_tables & 255 ) != 0 && width != 0 && last_nonempty < lineno )
          last_nonempty = lineno;
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          int ip;
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "line %d true/max width:%d/%d oldpos:", lineno, width, max_width );
          }
          ip = 0;
          for ( ; ip < ninserts; ip++ )
          {
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), " %d", oldpos[ ip ] );
            }
            //ip++;
          }
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "\n" );
          }
        }
      }
      }
    }
    line = &line;
    //lineno++;
  }
  style = me->style;
  alignment = Stbl_getAlignment( (int)( &me->stbl ) );
  if ( alignment == 65535 )
    alignment = style->alignment;
  indent = style->leftIndent;
  spare = ( me->stbl == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : ( LYtableCols < 1 ? LYwideLines == 0 ? LYcols : 1014 : ( LYtableCols * LYcols ) / 12 ) - ( ( LYShowScrollbar & 255 ) != 0 ) ) - style->rightIndent - indent - max_width;
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
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "BUG: insertBlanks: resulting table too wide by %d positions!\n", spare * -1 );
    }
    indent = spare = 0;
  }
  switch ( alignment )
  {
  case 3:
    table_offset = indent + ( spare / 2 );
    break;
  case 2:
    table_offset = spare + indent;
    break;
  default:
    table_offset = indent;
    break;
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "changing offsets" );
  }
  line = first_line;
  lineno = first_lineno_pass2;
  for ( ; line != 0 && lineno <= last_lineno && me->last_line != line; lineno++ )
  {
    ninserts = Stbl_getFixupPositions( (int)( &me->stbl ), lineno, oldpos, newpos );
    if ( ninserts >= 0 && line->offset != table_offset )
    {
      if ( me->first_lineno_last_disp_partial >= 0 )
      {
        if ( lineno <= me->first_lineno_last_disp_partial )
          ResetPartialLinenos( me );
        else
        if ( lineno <= me->last_lineno_last_disp_partial )
          goto B151;
B151:        me->last_lineno_last_disp_partial = lineno - 1;
      }
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), " %d:%d", lineno, table_offset - line->offset );
      }
      line->offset = table_offset & ~( table_offset >> 31 );
    }
    line = &line;
    //lineno++;
  }
  if ( ( nested_tables & 255 ) != 0 && max_width != 0 )
    Stbl_update_enclosing( (int)( &me->stbl ), max_width, last_nonempty );
  if ( ( WWW_TraceFlag & 255 ) != 0 )
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
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "cancelStbl: ignored.\n" );
    }
  }
  else
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "cancelStbl: ok, will do.\n" );
    }
    if ( ( nested_tables & 255 ) != 0 )
    {
      STable_info *stbl = me->stbl;
      for ( ; stbl != 0; stbl = enclosing )
      {
        STable_info *enclosing = Stbl_get_enclosing( &stbl );
        Stbl_free( &stbl );
        //stbl = enclosing;
      }
    }
    else
      Stbl_free( (int)( &me->stbl ) );
    &me->stbl = 0;
  }
  return;
}
void HText_startStblTABLE( HText *me, short alignment )
{
  STable_info *current = me->stbl;
  if ( me != 0 )
  {
    if ( ( nested_tables & 255 ) != 0 )
    {
      if ( current != 0 )
      {
        split_line( me, 0 );
      }
    }
    else
    if ( me->stbl != 0 )
      HText_cancelStbl( me );
    &me->stbl = Stbl_startTABLE( alignment );
    if ( me->stbl != 0 )
    {
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "startStblTABLE: started.\n" );
      }
      if ( ( nested_tables & 255 ) != 0 )
        Stbl_set_enclosing( (int)( &me->stbl ), &current, (int)( &me->last_anchor_before_stbl->next ) );
      me->last_anchor_before_stbl = me->last_anchor;
    }
    else
    {
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "startStblTABLE: failed.\n" );
      }
    }
  }
  return;
}
void free_enclosed_stbl( HText *me )
{
  if ( me->enclosed_stbl != 0 )
  {
    HTList *list = me->enclosed_stbl;
    STable_info *stbl;
    while ( 1 )
    {
      if ( list != 0 )
      {
        list = list->next;
        stbl = list == 0 ? 0 : (list);
        if ( stbl != 0 )
        {
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "endStblTABLE: finally free %p\n", (int)( &me->stbl ) );
          }
          Stbl_free( &stbl );
        }
        else
        {
          HTList_delete( me->enclosed_stbl );
          me->enclosed_stbl = 0;
          break;
        }
      }
      stbl = list == 0 ? 0 : (list);
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
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "endStblTABLE: ignored.\n" );
    }
    free_enclosed_stbl( me );
    return 0;
  }
  else
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "endStblTABLE: ok, will try.\n" );
    }
    ncols = Stbl_finishTABLE( (int)( &me->stbl ) );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "endStblTABLE: ncols = %d.\n", ncols );
    }
    if ( ncols >= 1 )
    {
      lines_changed = HText_insertBlanksInStblLines( me, ncols );
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "endStblTABLE: changed %d lines, done.\n", lines_changed );
      }
      NumOfLines_partial -= lines_changed;
    }
    if ( ( nested_tables & 255 ) != 0 )
    {
      enclosing = Stbl_get_enclosing( (int)( &me->stbl ) );
      me->last_anchor_before_stbl = Stbl_get_last_anchor_before( (int)( &me->stbl ) );
      if ( enclosing == 0 )
      {
        Stbl_free( (int)( &me->stbl ) );
        free_enclosed_stbl( me );
      }
      else
      {
        if ( me->enclosed_stbl == 0 )
        {
          me->enclosed_stbl = HTList_new( );
        }
        HTList_addObject( me->enclosed_stbl, (int)( &me->stbl ) );
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "endStblTABLE: postpone free %p\n", (int)( &me->stbl ) );
        }
        else
          &me->stbl = &enclosing;
      }
      &me->stbl = &enclosing;
    }
    else
    {
      Stbl_free( (int)( &me->stbl ) );
      &me->stbl = 0;
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "endStblTABLE: have%s enclosing table (%p)\n", enclosing == 0 ? " NO" : "", &enclosing );
    }
    return enclosing != 0;
  }
}
void HText_startStblTR( HText *me, short alignment )
{
  if ( me != 0 && me->stbl != 0 && Stbl_addRowToTable( (int)( &me->stbl ), alignment, me->Lines ) < 0 )
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
  if ( me != 0 && me->stbl != 0 )
  {
    if ( colspan < 0 )
      colspan = 1;
    if ( colspan > 200 )
    {
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "*** COLSPAN=%d is too large, ignored!\n", colspan );
      }
      colspan = 1;
    }
    if ( rowspan > 200 )
    {
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "*** ROWSPAN=%d is too large, ignored!\n", rowspan );
      }
      rowspan = 1;
    }
    if ( Stbl_addCellToTable( (int)( &me->stbl ), colspan, rowspan, alignment, isheader, me->Lines, HText_LastLineOffset( me ), HText_LastLineSize( me, 0 ) ) < 0 )
    {
      HText_cancelStbl( me );
    }
  }
  return;
}
void HText_endStblTD( HText *me )
{
  if ( me != 0 && me->stbl != 0 && Stbl_finishCellInTable( (int)( &me->stbl ), 1, me->Lines, HText_LastLineOffset( me ), HText_LastLineSize( me, 0 ) ) < 0 )
  {
    HText_cancelStbl( me );
  }
  return;
}
void HText_startStblCOL( HText *me, int span, short alignment, BOOLEAN isgroup )
{
  if ( me != 0 && me->stbl != 0 )
  {
    if ( span < 1 )
      span = 1;
    if ( span > 200 )
    {
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "*** SPAN=%d is too large, ignored!\n", span );
      }
      span = 1;
    }
    if ( Stbl_addColInfo( (int)( &me->stbl ), span, alignment, isgroup ) < 0 )
    {
      HText_cancelStbl( me );
    }
  }
  return;
}
void HText_endStblCOLGROUP( HText *me )
{
  if ( me != 0 && me->stbl != 0 && Stbl_finishColGroup( (int)( &me->stbl ) ) < 0 )
  {
    HText_cancelStbl( me );
  }
  return;
}
void HText_startStblRowGroup( HText *me, short alignment )
{
  if ( me != 0 && me->stbl != 0 && Stbl_addRowGroup( (int)( &me->stbl ), alignment ) < 0 )
  {
    HText_cancelStbl( me );
  }
  return;
}
void add_link_number( HText *text, TextAnchor *a, BOOLEAN save_position )
{
  char marker[32];
  if ( a->number >= 1 && ( ( text->source & 255 ) == 0 || ( psrcview_no_anchor_numbering & 255 ) == 0 ) && ( keypad_mode == 1 || keypad_mode == 2 ) )
  {
    char saved_lastchar = text->LastChar;
    int saved_linenum = text->Lines;
    sprintf( marker, "[%d]", a->number );
    HText_appendText( text, marker );
    if ( saved_linenum != 0 && text->Lines != 0 && saved_lastchar != ' ' )
      text->LastChar = ']';
    if ( save_position != 0 )
    {
      a->line_num = text->Lines;
      a->line_pos = text->last_line->size;
    }
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
int HText_beginAnchor( HText *text, BOOLEAN underline, HTChildAnchor *anc )
{
  TextAnchor *a = ALLOC_IN_POOL( &HTMainText->pool, 52 );
  if ( a == 0 )
    outofmem( "./GridText.c", "HText_beginAnchor" );
  a->inUnderline = underline;
  a->sgml_offset = SGML_offset( );
  a->line_num = text->Lines;
  a->line_pos = text->last_line->size;
  if ( text->last_anchor != 0 )
    &text->last_anchor = a;
  else
    text->first_anchor = a;
  &a = 0;
  a->anchor = anc;
  a->extent = 0;
  a->link_type = 1;
  text->last_anchor = a;
  if ( HTAnchor_followLink( anc ) != 0 )
  {
    text->last_anchor_number++;
    a->number = text->last_anchor_number;
  }
  else
    a->number = 0;
  if ( ( number_links_on_left & 255 ) != 0 )
  {
    add_link_number( text, a, 1 );
  }
  return a->number;
}
BOOLEAN HText_endAnchor0( HText *text, int number, int really )
{
  TextAnchor *a;
  if ( number < 1 || text->last_anchor->number == number )
    a = text->last_anchor;
  else
  {
    a = text->first_anchor;
    for ( ; a != 0 && a->number != number; a = &a )
    {
      //a = &a;
    }
    if ( a == 0 )
      a = text->last_anchor;
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "GridText:HText_endAnchor0: number:%d link_type:%d\n", a->number, a->link_type );
  }
  if ( a->link_type == 2 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "BUG: HText_endAnchor0: internal error: last anchor was input field!\n" );
    }
  }
  else
  {
    if ( a->number != 0 )
    {
      int i, j, k, l;
      BOOLEAN remove_numbers_on_empty = ( keypad_mode != 1 && keypad_mode != 2 ) || ( text->hiddenlinkflag == 0 && ( ( LYNoISMAPifUSEMAP & 255 ) == 0 || ( text->node_anchor != 0 && text->node_anchor->bookmark != 0 ) || ( HTAnchor_isISMAPScript( HTAnchor_followLink( a->anchor ) ) & 255 ) == 0 ) ) ? 0 : 1;
      HTLine *last = text->last_line;
      HTLine *prev = text->last_line->prev;
      HTLine *start = last;
      int CurBlankExtent = 0;
      int BlankExtent = 0;
      int extent_adjust = 0;
      l = text->Lines;
      if ( a->line_num < l )
      {
        i = start->size;
        for ( ; i >= 1; i-- )
        {
          if ( ( *(short*)(*(int*)(__ctype_b_loc( ( keypad_mode != 1 && keypad_mode != 2 ) || ( text->hiddenlinkflag == 0 && ( ( LYNoISMAPifUSEMAP & 255 ) == 0 || ( text->node_anchor != 0 && text->node_anchor->bookmark != 0 ) || ( HTAnchor_isISMAPScript( HTAnchor_followLink( a->anchor ) ) & 255 ) == 0 ) ) ? 0 : 1 )) + ( *(char*)(start + ( i - 1 ) + 18) * 2 )) & 8192 ) == 0 )
          {
            while ( a->line_num < l )
            {
              extent_adjust += start->size;
              start = start->prev;
              l--;
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
            for ( ; j < last->size && ( ( last->data[ j ] > 2 && last->data[ j ] <= 8 ) || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( last->data[ j ] * 2 )) & 8192 ) != 0 || last->data[ j ] == 1 || last->data[ j ] == 2 ); j++ )
            {
              i--;
              //j++;
            }
            if ( i == 0 )
            {
              if ( last->size < a->extent )
              {
                CurBlankExtent = BlankExtent = last->size;
                while ( i == 0 && ( CurBlankExtent < a->extent || ( a->extent == CurBlankExtent && k == 0 && text->last_line != prev && ( ( prev->size & 65535 ) == 0 || *(char*)(prev + ( prev->size - 1 ) + 18) == ']' ) ) ) )
                {
                  start = prev;
                  k = j = CurBlankExtent + ( prev->size - a->extent );
                  if ( j < 0 )
                  {
                    j = 0;
                    i = prev->size;
                    while ( j < prev->size && ( ( prev->data[ j ] > 2 && prev->data[ j ] <= 8 ) || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( prev->data[ j ] * 2 )) & 8192 ) != 0 || prev->data[ j ] == 1 || prev->data[ j ] == 2 ) )
                    {
                      i--;
                      j++;
                    }
                    if ( i != 0 )
                      continue;
                    else
                    if ( a->extent <= CurBlankExtent + prev->size && ( a->extent != CurBlankExtent || k != 0 || text->last_line == prev->prev || ( ( prev->prev & 65535 ) != 0 && prev->prev != prev->prev ) ) )
                    {
                      BlankExtent = a->extent;
                      break;
                    }
                    else
                    {
                      CurBlankExtent += prev->size;
                      BlankExtent = CurBlankExtent;
                      prev = prev->prev;
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
                  break;
                }
                else
                {
                  if ( i == 0 )
                  {
                    a->show_anchor = 0;
                    if ( ( WWW_TraceFlag & 255 ) != 0 )
                    {
                      fprintf( TraceFP( ), "HText_endAnchor0: hidden (line,pos,ext,BlankExtent):(%d,%d,%d,%d)", a->line_num, a->line_pos, a->extent, BlankExtent );
                    }
                    if ( remove_numbers_on_empty != 0 )
                    {
                      int NumSize = 0;
                      TextAnchor *anc;
                      if ( start == last )
                        j = last->size - a->extent - 1;
                      else
                      {
                        prev = start->prev;
                        j = ( CurBlankExtent + ( start->size - a->extent ) ) - 1;
                      }
                      if ( j < 0 )
                        j = 0;
                      i = j;
                      if ( start->data[ j ] == ']' )
                      {
                        j--;
                        NumSize++;
                        for ( ; j >= 0; NumSize++ )
                        {
                          if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( start->data[ j ] * 2 )) & 2048 ) == 0 )
                          {
                            break;
                          }
                          else
                          {
                            j--;
                            //NumSize++;
                          }
                        }
                        while ( j < 0 )
                        {
                          j++;
                          NumSize--;
                        }
                        if ( start->data[ j ] == '[' )
                        {
                          NumSize++;
                          if ( start == last && j < (int)text->permissible_split )
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
                            //k++;
                          }
                          anc = a;
                          for ( ; anc != 0; anc = &anc )
                          {
                            if ( anc->line_num == a->line_num && NumSize <= anc->line_pos )
                              anc->line_pos -= (unsigned short)( NumSize );
                            //anc = &anc;
                          }
                          start->size = j;
                          start->data[ j ] = 0;
                          j++;
                          for ( ; j < k; j++ )
                          {
                            start->data[ j ] = 0;
                            //j++;
                          }
                        }
                        else
                        {
                          if ( prev != 0 && prev->size < 1 )
                          {
                            k = i + 1;
                            j = prev->size - 1;
                            for ( ; j >= 0 && prev->data[ j ] > 2 && prev->data[ j ] <= 8; j-- )
                            {
                              //j--;
                            }
                            i = j + 1;
                            for ( ; j >= 0; NumSize++ )
                            {
                              if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( prev->data[ j ] * 2 )) & 2048 ) == 0 )
                              {
                                break;
                              }
                              else
                              {
                                j--;
                                //NumSize++;
                              }
                            }
                            while ( j < 0 )
                            {
                              j++;
                              NumSize--;
                            }
                            if ( prev->data[ j ] == '[' )
                            {
                              NumSize++;
                              l = i - j;
                              for ( ; i < prev->size; i++ )
                              {
                                prev->data[ j ] = prev->data[ i ];
                                j++;
                                //i++;
                              }
                              prev->size = j;
                              prev->data[ j ] = 0;
                              for ( ; j < i; j++ )
                              {
                                prev->data[ j ] = 0;
                                //j++;
                              }
                              if ( start == last && text->permissible_split != 0 )
                              {
                                if ( (int)text->permissible_split < k )
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
                                //k++;
                              }
                              anc = a;
                              for ( ; anc != 0; anc = &anc )
                              {
                                if ( anc->line_num == a->line_num && i <= anc->line_pos )
                                  anc->line_pos -= (unsigned short)( i );
                                //anc = &anc;
                              }
                              start->size = j;
                              start->data[ j ] = 0;
                              j++;
                              for ( ; j < k; j++ )
                              {
                                start->data[ j ] = 0;
                                //j++;
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
                        if ( prev != 0 && prev->size < 2 )
                        {
                          j = prev->size - 1;
                          for ( ; j >= 0 && prev->data[ j ] > 2 && prev->data[ j ] <= 8; j-- )
                          {
                            //j--;
                          }
                          if ( j < 0 )
                            j = 0;
                          i = j + 1;
                          if ( j > 1 && prev->data[ j ] == ']' && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( *(char*)(prev + ( j - 1 ) + 18) * 2 )) & 2048 ) != 0 )
                          {
                            j--;
                            NumSize++;
                            k = j + 1;
                            for ( ; j >= 0; NumSize++ )
                            {
                              if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( prev->data[ j ] * 2 )) & 2048 ) == 0 )
                              {
                                break;
                              }
                              else
                              {
                                j--;
                                //NumSize++;
                              }
                            }
                            while ( j < 0 )
                            {
                              j++;
                              NumSize--;
                            }
                            if ( prev->data[ j ] == '[' )
                            {
                              NumSize++;
                              k = j + NumSize;
                              for ( ; k < prev->size; k++ )
                              {
                                prev->data[ j ] = prev->data[ k ];
                                j++;
                                //k++;
                              }
                              prev->size = j;
                              prev->data[ j ] = 0;
                              j++;
                              for ( ; j < k; j++ )
                              {
                                prev->data[ j ] = 0;
                                //j++;
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
                    if ( ( number_links_on_left & 255 ) == 0 )
                      add_link_number( text, a, 0 );
                    a->show_anchor = 1;
                    if ( BlankExtent != 0 && ( WWW_TraceFlag & 255 ) != 0 )
                    {
                      fprintf( TraceFP( ), "HText_endAnchor0: blanks (line,pos,ext,BlankExtent):(%d,%d,%d,%d)", a->line_num, a->line_pos, a->extent, BlankExtent );
                    }
                  }
                  if ( ( a->show_anchor & 255 ) == 0 )
                  {
                    a->extent = 0;
                    if ( text->hiddenlinkflag != 0 )
                    {
                      a->number = 0;
                      text->last_anchor_number--;
                      HText_AddHiddenLink( text, a );
                      if ( ( WWW_TraceFlag & 255 ) != 0 )
                      {
                        fprintf( TraceFP( ), "-&gt;[%d](%d,%d,%d,%d)\n", a->number, a->line_num, a->line_pos, a->extent, BlankExtent );
                      }
                    }
                  }
                  else
                  {
                    a->extent -= a->extent <= BlankExtent ? 0 : (unsigned short)( BlankExtent );
                  }
                  if ( BlankExtent != 0 || a->extent <= 0 || a->number < 1 )
                  {
                  }
                }
              }
              else
              {
                CurBlankExtent = BlankExtent = a->extent;
              }
            }
          }
          else
          {
            extent_adjust--;
            //i--;
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
  HText_endAnchor0( text, number, 1 );
  return;
}
BOOLEAN HText_isAnchorBlank( HText *text, int number )
{
  return HText_endAnchor0( text, number, 0 );
}
void HText_appendText( HText *text, char *str )
{
  char *p;
  if ( str != 0 && text->halted != 3 )
  {
    p = str;
    for ( ; ( p[0] & 255 ) != 0; p++ )
    {
      HText_appendCharacter( text, p[0] );
      //p++;
    }
  }
  return;
}
int remove_special_attr_chars( char *buf )
{
  char *cp;
  int soft_newline_count = 0;
  cp = buf;
  for ( ; ( cp[0] & 255 ) != 0; cp++ )
  {
    soft_newline_count += cp[0] == 8;
    if ( cp[0] <= 2 || cp[0] > 8 )
    {
      buf[0] = cp[0];
      buf++;
    }
    //cp++;
  }
  buf[0] = 0;
  return soft_newline_count;
}
void HText_endAppend( HText *text )
{
  HTLine *line_ptr;
  if ( text != 0 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "GridText: Entering HText_endAppend\n" );
    }
    split_line( text, 0 );
    if ( text->halted != 0 )
    {
      if ( text->stbl != 0 )
        HText_cancelStbl( text );
      LYFakeZap( 0 );
      text->halted = 0;
    }
    else
    if ( text->stbl != 0 )
      HText_endStblTABLE( text );
    line_ptr = &text->last_line;
    while ( ( text->last_line->data[0] & 255 ) == 0 && text->Lines > 2 )
    {
      HTLine *next_to_the_last_line = text->last_line->prev;
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "GridText: Removing bottom blank line: `%s'\n", &text->last_line->data[0] );
      }
      &next_to_the_last_line = line_ptr;
      line_ptr->prev = next_to_the_last_line;
      text->last_line = next_to_the_last_line;
      text->Lines--;
      if ( ( WWW_TraceFlag & 255 ) == 0 )
        continue;
      else
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
  if ( text != 0 )
  {
    if ( final != 0 )
    {
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "GridText: Entering HText_trimHightext (final)\n" );
      }
    }
    else
    {
      if ( stop_before < 0 || text->Lines < stop_before )
        stop_before = text->Lines;
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "GridText: Entering HText_trimHightext (partial: 0..%d/%d)\n", stop_before, text->Lines );
      }
    }
    line_ptr = &text->last_line;
    cur_line = 0;
    anchor_ptr = text->first_anchor;
    for ( ; anchor_ptr == 0; anchor_ptr = &anchor_ptr )
    {
      while ( cur_line < anchor_ptr->line_num )
      {
        int anchor_col;
        line_ptr = &line_ptr;
        cur_line++;
      }
      if ( final == 0 )
      {
        if ( cur_line < stop_before && ( anchor_ptr->line_num < text->Lines - 1 || anchor_ptr->line_pos < text->last_line->prev ) )
        {
          if ( ( anchor_ptr->extent & 65535 ) == 0 && anchor_ptr->number != 0 && ( anchor_ptr->link_type & 1 ) != 0 && ( anchor_ptr->show_anchor & 255 ) == 0 && text->last_anchor_number == anchor_ptr->number )
          {
            prev_a = anchor_ptr;
            //anchor_ptr = &anchor_ptr;
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
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "GridText: Anchor found on line:%d col:%d [%05d:%d] ext:%d\n", cur_line, anchor_ptr->line_pos, anchor_ptr->sgml_offset, anchor_ptr->number, anchor_ptr->extent );
        }
        cur_shift = 0;
        if ( ( anchor_ptr->link_type & 1 ) != 0 )
        {
          ch = line_ptr->data[ anchor_ptr->line_pos ];
          for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( ch * 2 )) & 8192 ) != 0 || ( ch < 2 && ch >= 8 ); ch = line_ptr->data[ anchor_ptr->line_pos ] )
          {
            anchor_ptr->line_pos = anchor_ptr->line_pos + 1;
            anchor_ptr->extent = anchor_ptr->extent - 1;
            cur_shift++;
            //ch = line_ptr->data[ anchor_ptr->line_pos ];
          }
        }
        if ( anchor_ptr->extent < 0 )
          anchor_ptr->extent = 0;
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "anchor text: '%s'\n", &line_ptr->data[0] );
        }
        if ( strlen( &line_ptr->data[0] ) <= anchor_ptr->line_pos )
        {
          if ( cur_line < text->Lines && ( ( anchor_ptr->extent & 65535 ) != 0 || line_ptr->size != anchor_ptr->line_pos || ( prev_a != 0 && anchor_ptr->line_num < prev_a->line_num ) ) )
          {
            anchor_ptr->line_num++;
            anchor_ptr->line_pos = 0;
            if ( ( WWW_TraceFlag & 255 ) == 0 )
              continue;
            else
            {
              fprintf( TraceFP( ), "found anchor at end of line\n" );
            }
          }
          else
          if ( ( WWW_TraceFlag & 255 ) != 0 )
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
          hilite_str = LYGetHiTextStr( anchor_ptr, 0 );
          hilite_len = strlen( hilite_str );
          actual_len = anchor_ptr->extent;
          line_ptr2 = line_ptr;
          count_line = cur_line;
          while ( hilite_len < actual_len )
          {
            HTLine *old_line_ptr2 = line_ptr2;
            count_line++;
            line_ptr2 = &line_ptr2;
            if ( final == 0 && stop_before <= count_line )
              LYClearHiText( anchor_ptr );
            else
            if ( text->last_line == old_line_ptr2 )
              break;
            if ( line_ptr2 == 0 )
              continue;
            else
            {
              char *hi_string = 0;
              int hi_offset = line_ptr2->offset;
              SNACopy( &hi_string, &line_ptr2->data[0], actual_len - hilite_len );
              actual_len -= strlen( hi_string );
              hi_offset += remove_special_attr_chars( hi_string );
              if ( ( anchor_ptr->link_type & 1 ) != 0 )
                LYTrimTrailing( hi_string );
              if ( hi_string != 0 && ( hi_string[0] & 255 ) != 0 )
              {
                LYAddHiText( anchor_ptr, hi_string, hi_offset );
              }
              if ( hilite_len < actual_len )
                LYAddHiText( anchor_ptr, "", hi_offset );
              if ( hi_string == 0 )
                continue;
              else
              {
                free( hi_string );
              }
            }
          }
          if ( final != 0 || count_line < stop_before )
          {
            hilite_str = LYGetHiTextStr( anchor_ptr, 0 );
            remove_special_attr_chars( hilite_str );
            if ( ( anchor_ptr->link_type & 1 ) != 0 )
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
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), "GridText:     add link on line %d col %d [%d] %s\n", cur_line, anchor_ptr->line_pos, anchor_ptr->number, "in HText_trimHightext" );
            }
          }
        }
      }
    }
  }
  return;
}
HTParentAnchor *HText_nodeAnchor( HText *text )
{
  return text->node_anchor;
}
HTChildAnchor *HText_childNextNumber( int number, void **prev )
{
  TextAnchor *a = &prev[0][0]/*error:'v'*/;
  if ( HTMainText == 0 || number < 1 )
  {
    return 0;
  }
  if ( number == 1 || a == 0 )
  {
    a = HTMainText->first_anchor;
    while ( a != 0 && a->number != number )
    {
      a = &a;
    }
    if ( a == 0 )
    {
      return 0;
    }
    prev = (void*)a;
    return a->anchor;
  }
}
void HText_FormDescNumber( int number, char **desc )
{
  TextAnchor *a;
  if ( desc != 0 )
  {
    if ( HTMainText == 0 || HTMainText->first_anchor == 0 || number < 1 )
    {
      desc[0] = gettext( "unknown field or link" );
    }
    else
    {
      a = HTMainText->first_anchor;
      for ( ; a != 0; a = &a )
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
          //a = &a;
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
  int on_screen = curline < scrtop || scrtop + display_lines <= curline ? 0 : 1;
  int curanchor = links[ cur ].anchor_number;
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "HTGetRelLinkNum(%d,%d,%d) -- HTMainText=%p\n", num, rel, cur, HTMainText );
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "  scrtop=%d, curline=%d, curanchor=%d, display_lines=%d, %s\n", scrtop, curline, curanchor, display_lines, on_screen == 0 ? "0" : "on_screen" );
  }
  if ( HTMainText == 0 )
  {
    return 0;
  }
  if ( rel == 0 )
  {
    return num;
  }
  if ( on_screen != 0 && curanchor != 0 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
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
    a = HTMainText->first_anchor;
    for ( ; a != 0; a = &a )
    {
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "  a-&gt;line_num=%d, a-&gt;number=%d\n", a->line_num, a->number );
      }
      if ( a->line_num < scrtop )
      {
        if ( a->number != 0 )
        {
          l = a;
          curanchor = l->number;
        }
        //a = &a;
      }
      else
        break;
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "  a=%p, l=%p, curanchor=%d\n", a, l, curanchor );
    }
    if ( on_screen != 0 )
    {
      for ( ; a != 0; a = &a )
      {
        if ( a->number != 0 )
        {
          l = a;
          curanchor = l->number;
        }
        if ( a->line_num == curline && curpos == a->line_pos )
          break;
        else
        {
          //a = &a;
        }
      }
    }
    if ( rel == 43 )
    {
      return num + curanchor;
    }
    if ( rel == 45 )
    {
      if ( l != 0 )
      {
        return ( curanchor + 1 ) - num;
      }
      for ( ; a != 0 && a->number == 0; a = &a )
      {
        //a = &a;
      }
      return a == 0 ? 0 : a->number - num;
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
  a = HTMainText->first_anchor;
  for ( ; a != 0; a = &a )
  {
    if ( ( a->show_anchor & 255 ) != 0 && ( a->link_type != 2 || a->input_field->type != 8 ) )
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
      if ( want_go != 0 || a->link_type == 2 )
      {
        if ( ( a->show_anchor & 255 ) == 0 )
        {
          return 0;
        }
        if ( anchors_this_screen >= 1 && anchors_this_screen <= nlinks && HTMainText->top_of_screen <= a->line_num && a->line_num < HTMainText->top_of_screen + display_lines )
        {
          go_line[0] = HTMainText->top_of_screen;
          if ( linknum != 0 )
            linknum[0] = anchors_this_screen - 1;
        }
        else
        {
          int max_offset = 3;
          if ( max_offset < 0 )
            max_offset = 0;
          else
          if ( display_lines <= max_offset )
            max_offset = display_lines - 1;
          go_line[0] = prev_anchor_line - max_offset;
          if ( go_line[0] <= prev_prev_anchor_line )
            go_line[0] = prev_prev_anchor_line + 1;
          if ( go_line[0] < 0 )
            go_line[0] = 0;
          if ( linknum != 0 )
            linknum[0] = anchors_this_line - 1;
        }
        return 8;
      }
      else
      {
        hightext[0] = LYGetHiTextStr( a, 0 );
        link_dest = HTAnchor_followLink( a->anchor );
      {
        char *cp_freeme = 0;
        if ( ( traversal & 255 ) != 0 )
        {
          cp_freeme = stub_HTAnchor_address( link_dest );
        }
        else
        {
          cp_freeme = HTAnchor_address( link_dest );
        }
        HTSACopy( lname, cp_freeme );
        if ( cp_freeme != 0 )
        {
          free( cp_freeme );
        }
        return 2;
      }
      }
    }
    else
    {
      //a = &a;
    }
  }
  return 0;
}
BOOLEAN same_anchor_or_field( int numberA, FormInfo *formA, int numberB, FormInfo *formB, BOOLEAN ta_same )
{
  if ( numberA >= 1 || numberB >= 1 )
  {
    if ( numberB == numberA )
    {
      return 0;
    }
    else
    if ( ta_same == 0 )
    {
      return 0;
    }
  }
  if ( formA != 0 || formB != 0 )
  {
    if ( formB == formA )
    {
      return 0;
    }
    else
    {
      if ( ta_same == 0 )
      {
        return 0;
      }
      else
      {
        if ( formA == 0 || formB == 0 )
        {
          return 0;
        }
        else
        {
          if ( formB->type != formA->type || formA->type != 9 || formB->type != 9 )
          {
            return 0;
          }
          else
          {
            if ( formB->number != formA->number )
            {
              return 0;
            }
            else
            {
              if ( formA->name == 0 || formB->name == 0 )
              {
                return 0;
              }
              else
              {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    return 0;
  }
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
    a = HTMainText->first_anchor;
    for ( ; a != 0; a = &a )
    {
      if ( a->link_type == 2 && a->input_field == links[ curlink ].l_form )
      {
        break;
      }
      else
      if ( links[ curlink ].anchor_number != 0 && links[ curlink ].anchor_number <= a->number )
        break;
      else
      {
        prev_a = a;
        //a = &a;
      }
    }
  }
  else
  {
    a = HTMainText->first_anchor;
    for ( ; a != 0; a = &a )
    {
      if ( a->link_type == 2 && a->input_field == links[ curlink ].l_form )
      {
        break;
      }
      else
      if ( links[ curlink ].anchor_number != 0 && links[ curlink ].anchor_number <= a->number )
        break;
      else
      {
        //a = &a;
      }
    }
  }
  return ( ( same_anchor_or_field( a->number, a->link_type == 2 ? a->input_field : 0, a->next->number, a->next->link_type == 2 ? a->next->input_field : 0, 1 ) & 255 ) == 0 ? 0 : 1 );
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
  a = HTMainText->first_anchor;
  for ( ; a != 0; a = &a )
  {
    if ( ( a->show_anchor & 255 ) != 0 && ( a->link_type != 2 || a->input_field->type != 8 ) )
    {
      if ( a->line_num == prev_anchor_line )
        anchors_this_line++;
      else
      {
        anchors_this_line = 1;
        prev_prev_anchor_line = prev_anchor_line;
        prev_anchor_line = a->line_num;
      }
      if ( current.anc != 0 && a != 0 )
      {
        if ( ( same_anchor_or_field( current.anc->number, current.anc->link_type == 2 ? current.anc->input_field : 0, a->number, a->link_type == 2 ? a->input_field : 0, ta_skip ) & 255 ) != 0 )
          current.anchors_this_group++;
          if ( curlink >= 0 )
          {
            if ( curlink >= 0 && a != 0 )
            {
              if ( ( same_anchor_or_field( links[ curlink ].anchor_number, links[ curlink ].type == 1 ? links[ curlink ].l_form : 0, a->number, a->link_type == 2 ? a->input_field : 0, ta_skip ) & 255 ) != 0 )
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
            if ( direction >= 1 && curlink >= 0 && previous.anc != 0 )
            {
              if ( ( same_anchor_or_field( links[ curlink ].anchor_number, links[ curlink ].type == 1 ? links[ curlink ].l_form : 0, previous.anc->number, previous.anc->link_type == 2 ? previous.anc->input_field : 0, ta_skip ) & 255 ) != 0 )
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
                  if ( previous.anc != 0 )
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
      previous.anc = current.anc;
      previous.prev_anchor_line = current.prev_anchor_line;
      previous.anchors_this_line = current.anchors_this_line;
      previous.anchors_this_group = current.anchors_this_group;
      current.anc = a;
      current.prev_anchor_line = prev_prev_anchor_line;
      current.anchors_this_line = anchors_this_line;
      current.anchors_this_group = 1;
    }
    //a = &a;
  }
  if ( group_to_go == 0 && curlink < 0 && direction < 1 )
    group_to_go = &current;
  if ( group_to_go != 0 )
  {
    a = group_to_go->anc;
    if ( a != 0 )
    {
      int max_offset;
      if ( a->line_num < HTMainText->top_of_screen && HTMainText->top_of_screen - display_lines <= a->line_num && ( ( curlink < 0 && group_to_go->anchors_this_group == 1 ) || ( direction < 0 && group_to_go != current.anc && current.anc != 0 && HTMainText->top_of_screen <= current.anc->line_num && group_to_go->anchors_this_group == 1 ) || ( a->next != 0 && HTMainText->top_of_screen <= a->next->line_num ) ) )
      {
        return 16;
      }
      if ( a->line_num <= display_lines )
        max_offset = 0;
      else
      if ( a->line_num < HTMainText->top_of_screen )
      {
        int screensback = ( ( display_lines + ( HTMainText->top_of_screen - a->line_num ) ) - 1 ) / display_lines;
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
        max_offset = display_lines - 1;
      go_line[0] = a->line_num - max_offset;
      if ( go_line[0] <= group_to_go->prev_anchor_line )
        go_line[0] = group_to_go->prev_anchor_line + 1;
      if ( go_line[0] < 0 )
        go_line[0] = 0;
      if ( linknum != 0 )
        linknum[0] = group_to_go->anchors_this_line - 1;
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
  if ( text == 0 || line_num < 0 || text->Lines < line_num || target == 0 || ( target[0] & 255 ) == 0 )
  {
  }
  else
  {
    i = 0;
    line = &text->last_line;
    for ( ; i < line_num && text->last_line != line; line = &line )
    {
      if ( line->next == 0 )
      {
        break;
      }
      else
      {
        i++;
        //line = &line;
      }
    }
    if ( line == 0 && ( line->data[0] & 255 ) != 0 )
    {
    }
    else
    {
      LineData = &line->data[0];
      LineOffset = line->offset;
      cp = ( case_sensitive & 255 ) != 0 ? LYno_attr_mbcs_strstr( LineData, target, utf_flag, 1, &HitOffset, &LenNeeded ) : LYno_attr_mbcs_case_strstr( LineData, target, utf_flag, 1, &HitOffset, &LenNeeded );
      if ( cp != 0 && LineOffset + LenNeeded <= ( LYwideLines == 0 ? LYcols : 1014 ) )
      {
        offset[0] = LineOffset + HitOffset;
        tLen[0] = LenNeeded - HitOffset;
        HTSACopy( data, cp );
        remove_special_attr_chars( data[0] );
      }
      else
      {
      }
    }
  }
  return 0;
}
int HText_getNumOfLines( void )
{
  return HTMainText == 0 ? 0 : HTMainText->Lines;
}
int HText_getNumOfBytes( void )
{
  int result = -1;
  HTLine *line = 0;
  if ( HTMainText != 0 )
  {
    line = &HTMainText->last_line;
    for ( ; HTMainText->last_line != line; line = &line )
    {
      result = result + strlen( &line->data[0] ) + 1;
      //line = &line;
    }
  }
  return result;
}
char *HText_getTitle( void )
{
  return HTMainText == 0 ? 0 : HTAnchor_title( HTMainText->node_anchor );
}
char *HText_getStyle( void )
{
  return HTMainText == 0 ? 0 : HTAnchor_style( HTMainText->node_anchor );
}
char *HText_getSugFname( void )
{
  return HTMainText == 0 ? 0 : HTAnchor_SugFname( HTMainText->node_anchor );
}
void HTCheckFnameForCompression( char **fname, HTParentAnchor *anchor, BOOLEAN strip_ok )
{
  char *fn = fname[0];
  char *dot = 0;
  char *cp = 0;
  char *suffix = "";
  CompressFileType method;
  CompressFileType second;
  if ( fn != 0 && anchor != 0 )
  {
    fn = LYPathLeaf( fn );
    if ( ( fn[0] & 255 ) != 0 )
    {
      method = HTContentToCompressType( anchor );
      if ( method != cftNone || strip_ok != 0 )
      {
        dot = strrchr( fn, 46 );
        if ( dot != 0 && strcasecomp( dot, ".tgz" ) == 0 )
        {
          if ( method == cftNone )
          {
            memcpy( dot, ".tar", 5 );
          }
          return;
        }
        else
        {
          dot = strrchr( fn, 46 );
          if ( dot != 0 )
          {
            int rootlen = 0;
            if ( HTCompressFileType( fn, ".", &rootlen ) != 0 )
            {
              if ( method == cftNone )
              {
                dot[0] = 0;
                return;
              }
              else
              {
                return;
              }
            }
            else
            {
              second = HTCompressFileType( fn, "-_", &rootlen );
              if ( second != cftNone )
              {
                cp = &fn[ rootlen ];
                if ( method == cftNone )
                {
                  if ( dot[1] == cp )
                    cp = &cp[ -1 ];
                  cp[0] = 0;
                  return;
                }
                else
                {
                  cp[0] = '.';
                  if ( second == cftCompress )
                  {
                    LYUpperCase( cp );
                  }
                  LYLowerCase( cp );
                }
              }
            }
          }
          suffix = HTCompressTypeToSuffix( method );
          if ( ( suffix[0] & 255 ) != 0 )
          {
            if ( dot == 0 )
            {
              HTSACat( fname, suffix );
            }
            dot++;
            if ( ( dot[0] & 255 ) == 0 )
            {
              HTSACat( fname, &suffix[1] );
            }
            HTSACat( fname, suffix );
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
char *HText_getLastModified( void )
{
  return HTMainText == 0 ? 0 : HTAnchor_last_modified( HTMainText->node_anchor );
}
char *HText_getDate( void )
{
  return HTMainText == 0 ? 0 : HTAnchor_date( HTMainText->node_anchor );
}
char *HText_getServer( void )
{
  return HTMainText == 0 ? 0 : HTAnchor_server( HTMainText->node_anchor );
}
void HText_pageDisplay( int line_num, char *target )
{
  if ( ( ( debug_display_partial & 255 ) != 0 || LYTraceLogFP != 0 ) && ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "GridText: HText_pageDisplay at line %d started\n", line_num );
  }
  if ( ( display_partial & 255 ) != 0 )
  {
    int stop_before = -1;
    if ( HTMainText != 0 && HTMainText->stbl != 0 )
    {
      stop_before = Stbl_getStartLineDeep( (int)( &HTMainText->stbl ) );
    }
    HText_trimHightext( HTMainText, 0, stop_before );
  }
  display_page( HTMainText, line_num - 1, target );
  if ( ( display_partial & 255 ) != 0 && ( debug_display_partial & 255 ) != 0 )
    LYSleepMsg( );
  is_www_index = HTAnchor_isIndex( HTMainAnchor );
  if ( ( ( debug_display_partial & 255 ) != 0 || LYTraceLogFP != 0 ) && ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "GridText: HText_pageDisplay finished\n" );
  }
  return;
}
BOOLEAN HText_pageHasPrevTarget( void )
{
  return ( HTMainText == 0 ? 0 : HTMainText->page_has_target );
}
int HText_closestAnchor( HText *text, int offset )
{
  int result = -1;
  int absdiff = 0;
  int newdiff;
  TextAnchor *Anchor_ptr = 0;
  TextAnchor *closest = 0;
  Anchor_ptr = text->first_anchor;
  for ( ; Anchor_ptr != 0; Anchor_ptr = &Anchor_ptr )
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
      //Anchor_ptr = &Anchor_ptr;
    }
  }
  if ( result < 0 && closest != 0 )
  {
    result = closest->number;
  }
  return result;
}
int HText_locateAnchor( HText *text, int anchor_number )
{
  int result = -1;
  TextAnchor *Anchor_ptr = 0;
  Anchor_ptr = text->first_anchor;
  for ( ; Anchor_ptr != 0; Anchor_ptr = &Anchor_ptr )
  {
    if ( Anchor_ptr->number == anchor_number )
    {
      result = Anchor_ptr->sgml_offset;
      break;
    }
    else
    {
      //Anchor_ptr = &Anchor_ptr;
    }
  }
  return result;
}
BOOLEAN anchor_is_numbered( TextAnchor *Anchor_ptr )
{
  BOOLEAN result = 0;
  if ( ( Anchor_ptr->show_anchor & 255 ) != 0 && ( ( ( Anchor_ptr->link_type & 1 ) ^ 1 ) & 255 ) == 0 )
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
  if ( anchor_number >= 0 && text != 0 )
  {
    TextAnchor *Anchor_ptr = 0;
    Anchor_ptr = text->first_anchor;
    for ( ; Anchor_ptr != 0; Anchor_ptr = &Anchor_ptr )
    {
      if ( ( anchor_is_numbered( Anchor_ptr ) & 255 ) != 0 && Anchor_ptr->number == anchor_number )
      {
        result = Anchor_ptr->line_num;
        break;
      }
      else
      {
        //Anchor_ptr = &Anchor_ptr;
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
  Anchor_ptr = text->first_anchor;
  for ( ; Anchor_ptr != 0; Anchor_ptr = &Anchor_ptr )
  {
    if ( Anchor_ptr->number == anchor_number )
    {
      result = from_top;
      break;
    }
    else
    {
      if ( ( anchor_is_numbered( Anchor_ptr ) & 255 ) != 0 && top_lineno <= Anchor_ptr->line_num )
        from_top++;
      //Anchor_ptr = &Anchor_ptr;
    }
  }
  return result;
}
int HText_LinksInLines( HText *text, int line_num, int Lines )
{
  int total = 0;
  int start = line_num - 1;
  int end = start + Lines;
  TextAnchor *Anchor_ptr = 0;
  if ( text == 0 )
  {
    return total;
  }
  Anchor_ptr = text->first_anchor;
  for ( ; Anchor_ptr != 0 && Anchor_ptr->line_num <= end; Anchor_ptr = &Anchor_ptr )
  {
    if ( start <= Anchor_ptr->line_num && Anchor_ptr->line_num < end && ( Anchor_ptr->show_anchor & 255 ) != 0 && ( Anchor_ptr->link_type != 2 || Anchor_ptr->input_field->type != 8 ) )
      total++;
    //Anchor_ptr = &Anchor_ptr;
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
  if ( ( text->stale & 255 ) != 0 )
  {
    display_page( text, text->top_of_screen, "" );
  }
  return;
}
int HText_sourceAnchors( HText *text )
{
  return text == 0 ? -1 : text->last_anchor_number;
}
BOOLEAN HText_canScrollUp( HText *text )
{
  return text->top_of_screen != 0;
}
BOOLEAN HText_canScrollDown( void )
{
  HText *text = HTMainText;
  return ( text == 0 || text->Lines < text->top_of_screen + display_lines ? 0 : 1 );
}
void HText_scrollTop( HText *text )
{
  display_page( text, 0, "" );
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
  if ( text != HTMainText )
  {
    if ( text != 0 )
      text->page_has_target = 0;
    ResetPartialLinenos( text );
    ResetPartialLinenos( HTMainText );
    if ( HTMainText != 0 )
    {
      if ( ( HText_hasUTF8OutputSet( HTMainText ) & 255 ) != 0 && ( HTLoadedDocumentEightbit( ) & 255 ) != 0 && LYCharSet_UC[ current_char_set ].enc == 7 )
        text->had_utf8 = HTMainText->has_utf8;
      else
        text->had_utf8 = 0;
      HTMainText->has_utf8 = 0;
      text->has_utf8 = 0;
    }
    HTMainText = text;
    HTMainAnchor = text->node_anchor;
    if ( loaded_texts != 0 && ( HTList_removeObject( loaded_texts, (void*)text ) & 255 ) != 0 )
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
    post_data = doc->post_data;
    if ( post_data != 0 )
    {
      address = doc->address;
      if ( address != 0 )
      {
        is_head = doc->isHEAD;
        do
        {
          if ( cur != 0 )
          {
            cur = cur->next;
            text = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
            if ( text == 0 )
            {
              break;
            }
            else
            {
            }
          }
          text = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
        }
        while ( text->node_anchor == 0 || text->node_anchor->post_data == 0 || ( HTSABEql( post_data, text->node_anchor->post_data ) & 255 ) == 0 || text->node_anchor->address == 0 || strcmp( address, text->node_anchor->address ) != 0 || text->node_anchor->isHEAD != is_head );
      }
    }
  }
  return 1;
}
BOOLEAN HTFindPoundSelector( char *selector )
{
  TextAnchor *a;
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "FindPound: searching for \"%s\"\n", selector );
  }
  a = HTMainText->first_anchor;
  for ( ; a != 0; a = &a )
  {
    if ( a->anchor != 0 && a->anchor->tag != 0 && strcmp( a->anchor->tag, selector ) == 0 )
    {
      www_search_result = a->line_num + 1;
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "FindPound: Selecting anchor [%d] at line %d\n", a->number, www_search_result );
      }
      if ( strcmp( selector, LYToolbarName ) == 0 )
        www_search_result--;
      break;
    }
    else
    {
      //a = &a;
    }
  }
  return 1;
}
BOOLEAN HText_selectAnchor( HText *text, HTChildAnchor *anchor )
{
  TextAnchor *a = text->first_anchor;
  for ( ; a != 0 && a->anchor != anchor; a = &a )
  {
    //a = &a;
  }
  if ( a == 0 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "HText: No such anchor in this text!\n" );
    }
  }
  else
  {
    if ( text != HTMainText )
    {
      HTMainText = text;
      HTMainAnchor = text->node_anchor;
    }
  {
    int l = a->line_num;
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "HText: Selecting anchor [%d] at line %d\n", a->number, l );
    }
    if ( ( text->stale & 255 ) == 0 && text->top_of_screen <= l && l < text->top_of_screen + display_lines + 1 )
    {
    }
    else
    {
      www_search_result = l - ( (/*HI*/int)( 1431655766 * display_lines ) - ( display_lines >> 31 ) );
    }
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
  HText *text = HTMainText;
  return text == 0 ? 0 : text->top_of_screen;
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
  if ( query != 0 && ( query[0] & 255 ) != 0 )
  {
    HTSACopy( &new_query, query );
    if ( search_queries == 0 )
    {
      search_queries = HTList_new( );
      HTList_addObject( search_queries, (void*)new_query );
    }
    cur = search_queries;
    do
    {
      if ( cur != 0 )
      {
        cur = cur->next;
        old = cur == 0 ? 0 : (char*)cur->object;
        if ( old != 0 )
        {
        }
        HTList_addObject( search_queries, (void*)new_query );
        break;
      }
      old = cur == 0 ? 0 : (char*)cur->object;
    }
    while ( strcmp( old, new_query ) != 0 );
    HTList_removeObject( search_queries, (void*)old );
    if ( old != 0 )
    {
      free( old );
      old = 0;
    }
  }
  else
  {
    return;
  }
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
  cp = strchr( doc->address, 63 );
  if ( cp != 0 )
  {
    PreviousSearch = 1;
    cp++;
    LYstrncpy( searchstring, cp, 255 );
    cp = searchstring;
    for ( ; ( cp[0] & 255 ) == 0; cp++ )
    {
      if ( cp[0] == '+' )
        cp[0] = ' ';
        //cp++;
      else
      {
        //cp++;
      }
    }
  }
  else
  {
    searchstring[0] = 0;
    temp[0] = 0;
    if ( ( searchstring[0] & 255 ) == 0 )
    {
      if ( HTMainAnchor->isIndexPrompt != 0 )
      {
        mustshow = 1;
        statusline( HTMainAnchor->isIndexPrompt );
      }
      else
      {
        mustshow = 1;
        gettext( "Enter a database query: " );
      }
      statusline( HTMainAnchor->isIndexPrompt );
    }
    else
    {
      mustshow = 1;
      statusline( gettext( "Edit the current query: " ) );
      QueryTotal = search_queries == 0 ? 0 : HTList_count( search_queries );
      recall = ( PreviousSearch == 0 || QueryTotal <= 1 ) && ( PreviousSearch != 0 || QueryTotal < 1 ) ? NORECALL : RECALL_URL;
      QueryNum = QueryTotal;
      ch = LYgetstr( searchstring, 0, 256, recall );
      if ( ch < 0 || ( searchstring[0] & 255 ) == 0 || ch == 256 || ch == 257 )
      {
        if ( recall != NORECALL && ch == 256 )
        {
          if ( PreviousSearch != 0 )
          {
            QueryNum = 1;
            PreviousSearch = 0;
          }
          else
            QueryNum++;
          if ( QueryTotal <= QueryNum )
            QueryNum = 0;
          cp = HTList_objectAt( search_queries, QueryNum );
          if ( cp != 0 )
          {
            LYstrncpy( searchstring, cp, 255 );
            if ( ( temp[0] & 255 ) != 0 && strcmp( temp, searchstring ) == 0 )
            {
              mustshow = 1;
              statusline( gettext( "Edit the current query: " ) );
            }
            if ( ( ( temp[0] & 255 ) != 0 && QueryTotal == 2 ) || ( ( temp[0] & 255 ) == 0 && QueryTotal == 1 ) )
            {
              mustshow = 1;
              statusline( gettext( "Edit the previous query: " ) );
            }
            mustshow = 1;
            statusline( gettext( "Edit a previous query: " ) );
          }
        }
        else
        {
          if ( recall != NORECALL && ch == 257 )
          {
            if ( PreviousSearch != 0 )
            {
              QueryNum = QueryTotal - 1;
              PreviousSearch = 0;
            }
            else
              QueryNum--;
            if ( QueryNum < 0 )
              QueryNum = QueryTotal - 1;
            cp = HTList_objectAt( search_queries, QueryNum );
            if ( cp != 0 )
            {
              LYstrncpy( searchstring, cp, 255 );
              if ( ( temp[0] & 255 ) != 0 && strcmp( temp, searchstring ) == 0 )
              {
                mustshow = 1;
                statusline( gettext( "Edit the current query: " ) );
              }
              if ( ( ( temp[0] & 255 ) != 0 && QueryTotal == 2 ) || ( ( temp[0] & 255 ) == 0 && QueryTotal == 1 ) )
              {
                mustshow = 1;
                statusline( gettext( "Edit the previous query: " ) );
              }
              mustshow = 1;
              statusline( gettext( "Edit a previous query: " ) );
            }
          }
        }
        HTInfoMsg( gettext( "Cancelled!!!" ) );
      }
      else
      {
        LYTrimLeading( searchstring );
        if ( ( searchstring[0] & 255 ) == 0 )
        {
          HTInfoMsg( gettext( "Cancelled!!!" ) );
        }
        else
        {
          LYTrimTrailing( searchstring );
          if ( ( LYforce_no_cache & 255 ) == 0 && strcmp( temp, searchstring ) == 0 )
          {
            HTUserMsg( gettext( "Use Control-R to resubmit the current query." ) );
          }
          else
          {
            HTAddSearchQuery( searchstring );
            cp = strchr( doc->address, 63 );
            if ( cp != 0 )
              cp[0] = 0;
            HTSACopy( &tmpaddress, doc->address );
            HTSACat( &tmpaddress, "?" );
            HTSACat( &tmpaddress, searchstring );
            user_message( gettext( "Getting %s" ), tmpaddress );
            LYSyslog( tmpaddress );
            if ( tmpaddress != 0 )
            {
              free( tmpaddress );
              tmpaddress = 0;
            }
            if ( cp != 0 )
              cp[0] = '?';
            if ( ( HTSearch( searchstring, HTMainAnchor ) & 255 ) != 0 )
            {
              char *cp_freeme = 0;
              if ( ( traversal & 255 ) != 0 )
              {
                cp_freeme = stub_HTAnchor_address( (int)( &HTMainAnchor->parent->parent ) );
              }
              else
              {
                cp_freeme = HTAnchor_address( (int)( &HTMainAnchor->parent->parent ) );
              }
              HTSACopy( &doc->address, cp_freeme );
              if ( cp_freeme != 0 )
              {
                free( cp_freeme );
                cp_freeme = 0;
              }
              if ( ( WWW_TraceFlag & 255 ) != 0 )
              {
                fprintf( TraceFP( ), "\ndo_www_search: newfile: %s\n", doc->address );
              }
            }
            else
            {
            }
          }
        }
      }
      if ( ( 0 ^ 0 ) != 0 )
      {
        __stack_chk_fail( );
      }
      return 1;
    }
  }
}
void write_offset( FILE *fp, HTLine *line )
{
  int i;
  if ( ( line->data[0] & 255 ) != 0 )
  {
    i = 0;
    for ( ; i < line->offset; i++ )
    {
      fputc( 32, fp );
      //i++;
    }
  }
  return;
}
void write_hyphen( FILE *fp )
{
  if ( ( dump_output_immediately & 255 ) != 0 && ( LYRawMode & 255 ) != 0 && LYlowest_eightbit[ current_char_set ] <= 173 && ( LYCharSet_UC[ current_char_set ].enc == 2 || ( LYCharSet_UC[ current_char_set ].like8859 & 128 ) != 0 ? 1 : 0 ) != 0 )
  {
    fputc( 173, fp );
  }
  fputc( 45, fp );
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
  return result;
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
  BOOLEAN bs = is_email != 0 || is_reply != 0 || text == 0 || ( with_backspaces & 255 ) == 0 || HTCJK != NOCJK || ( text->T.output_utf8 & 255 ) != 0 ? 0 : 1;
  if ( HTMainText != 0 )
  {
    line = &HTMainText->last_line;
    while ( first == 0 )
    {
      first = 0;
      if ( is_reply != 0 )
        fputc( 62, fp );
      else
      if ( is_email == 0 )
      {
        write_offset( fp, line );
        limit = TrimmedLength( &line->data[0] );
        i = 0;
        for ( ; i < limit; i++ )
        {
          int ch = line->data[ i ];
          if ( ch <= 2 || ch > 8 )
          {
            if ( in_b != 0 )
            {
              fputc( ch, fp );
              fputc( 8, fp );
              fputc( ch, fp );
            }
            if ( in_u != 0 )
            {
              fputc( 95, fp );
              fputc( 8, fp );
              fputc( ch, fp );
            }
            fputc( ch, fp );
          }
          else
          {
            if ( ch == 7 && limit <= i + 1 )
              write_hyphen( fp );
            else
            if ( ( dump_output_immediately & 255 ) == 0 )
            {
              if ( bs != 0 )
              {
                switch ( ch )
                {
                  break;
                default:
                  break;
                case 3:
                  if ( in_b == 0 )
                    in_u = 1;
                  break;
                case 4:
                  in_u = 0;
                  break;
                case 5:
                  if ( in_u != 0 )
                    in_u = 0;
                  in_b = 1;
                  break;
                case 6:
                  in_b = 0;
                  break;
                }
                //i++;
              }
            }
            if ( ( use_underscore & 255 ) != 0 )
            {
              if ( ch - 3 <= 1 )
              {
                fputc( 95, fp );
              }
            }
            else
            {
            }
          }
        }
        if ( HTMainText->last_line == line )
        {
          fputc( 10, fp );
          break;
        }
        else
        {
          line = &line;
        }
      }
      if ( strncmp( &line->data[0], "From ", 5 ) == 0 )
      {
        fputc( 62, fp );
      }
    }
  }
  else
  {
    return;
  }
}
void print_crawl_to_fd( FILE *fp, char *thelink, char *thetitle )
{
  int i;
  int first = 1;
  int limit;
  HTLine *line;
  if ( HTMainText != 0 )
  {
    line = &HTMainText->last_line;
    fprintf( fp, "THE_URL:%s\n", thelink );
    if ( thetitle != 0 )
    {
      fprintf( fp, "THE_TITLE:%s\n", thetitle );
      while ( first != 0 || line->data[0] == 8 )
        fputc( 10, fp );
        first = 0;
        write_offset( fp, line );
        limit = TrimmedLength( &line->data[0] );
        i = 0;
        for ( ; i < limit; i++ )
        {
          int ch = line->data[ i ];
          if ( ch <= 2 || ch > 8 )
          {
            fputc( ch, fp );
          }
          if ( ch == 7 && limit <= i + 1 )
            write_hyphen( fp );
          //i++;
        }
        if ( HTMainText->last_line == line )
        {
          fputc( 10, fp );
          if ( ( no_list & 255 ) == 0 && ( keypad_mode == 1 || keypad_mode == 2 ) )
          {
            printlist( fp, 0 );
            break;
          }
        }
        else
        {
          line = &line;
        }
    }
  }
  return;
}
void adjust_search_result( DocInfo *doc, int tentative_result, int start_line )
{
  if ( tentative_result >= 1 )
  {
    int anch_line = -1;
    TextAnchor *a;
    int nl_closest = -1;
    int goal = 4;
    int max_offset;
    BOOLEAN on_screen = tentative_result <= HTMainText->top_of_screen || HTMainText->top_of_screen + display_lines < tentative_result ? 0 : 1;
    if ( goal < 1 )
      goal = 1;
    else
    if ( display_lines < goal )
      goal = display_lines;
    max_offset = goal - 1;
    if ( on_screen != 0 && nlinks >= 1 )
    {
      int i = 0;
      for ( ; i < nlinks; i++ )
      {
        if ( ( doc->line + links[ i ].ly ) - 1 <= tentative_result )
          nl_closest = i;
        if ( tentative_result <= ( doc->line + links[ i ].ly ) - 1 )
          break;
        else
        {
          //i++;
        }
      }
      if ( nl_closest >= 0 && tentative_result == ( doc->line + links[ nl_closest ].ly ) - 1 )
      {
        www_search_result = doc->line;
        doc->link = nl_closest;
      }
    }
    a = HTMainText->first_anchor;
    for ( ; a != 0 && a->line_num <= tentative_result - 1; a = &a )
    {
      anch_line = a->line_num + 1;
      //a = &a;
    }
    if ( anch_line >= 0 && tentative_result - max_offset <= anch_line && ( start_line < anch_line || tentative_result <= HTMainText->top_of_screen ) )
      www_search_result = anch_line;
    else
    if ( tentative_result - start_line >= 1 && tentative_result + ~start_line <= max_offset )
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
    if ( ( ( ( case_sensitive & 255 ) != 0 ? LYno_attr_char_strstr( cp, target ) : LYno_attr_char_case_strstr( cp, target ) ) != 0 ) != 0 )
    {
      break;
    }
    else
    {
      count++;
    }
  }
  if ( a->input_field != 0 && a->input_field->value != 0 && a->input_field->type != 8 )
  {
    if ( a->input_field->type == 2 )
    {
      if ( ( ( ( case_sensitive & 255 ) != 0 ? LYno_attr_char_strstr( a->input_field->value, target ) : LYno_attr_char_case_strstr( a->input_field->value, target ) ) != 0 ) != 0 )
      {
        return 1;
      }
      else
      {
        HTSACopy( &stars, a->input_field->value );
        sp = stars;
        for ( ; ( sp[0] & 255 ) != 0; sp++ )
        {
          sp[0] = '*';
          //sp++;
        }
        if ( ( ( ( case_sensitive & 255 ) != 0 ? LYno_attr_char_strstr( stars, target ) : LYno_attr_char_case_strstr( stars, target ) ) != 0 ) != 0 )
        {
          if ( stars != 0 )
          {
            free( stars );
            stars = 0;
          }
          return 1;
        }
        else
        if ( stars != 0 )
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
        option = a->input_field->select_list;
        for ( ; option != 0; option = option->next )
        {
          if ( ( ( ( case_sensitive & 255 ) != 0 ? LYno_attr_char_strstr( option->name, target ) : LYno_attr_char_case_strstr( option->name, target ) ) != 0 ) != 0 )
          {
            break;
          }
          else
          {
            //option = option->next;
          }
        }
      }
      else
      {
        if ( a->input_field->type == 4 )
        {
          if ( a->input_field->num_value != 0 )
            cp = checked_radio;
          else
            cp = unchecked_radio;
          if ( ( ( ( case_sensitive & 255 ) != 0 ? LYno_attr_char_strstr( cp, target ) : LYno_attr_char_case_strstr( cp, target ) ) != 0 ) != 0 )
          {
            return 1;
          }
        }
        else
        {
          if ( a->input_field->type == 3 )
          {
            if ( a->input_field->num_value != 0 )
              cp = checked_box;
            else
              cp = unchecked_box;
            if ( ( ( ( case_sensitive & 255 ) != 0 ? LYno_attr_char_strstr( cp, target ) : LYno_attr_char_case_strstr( cp, target ) ) != 0 ) != 0 )
            {
              return 1;
            }
          }
          else
          {
            if ( ( ( ( case_sensitive & 255 ) != 0 ? LYno_attr_char_strstr( a->input_field->value, target ) : LYno_attr_char_case_strstr( a->input_field->value, target ) ) != 0 ) != 0 )
            {
              return 1;
            }
          }
        }
      }
    }
  }
  return 1;
}
TextAnchor *line_num_to_anchor( int line_num )
{
  TextAnchor *a;
  if ( HTMainText != 0 )
  {
    a = HTMainText->first_anchor;
    for ( ; a != 0; a = &a )
    {
      if ( line_num <= a->line_num )
      {
        break;
      }
      else
      {
        //a = &a;
      }
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
  HTLine *temp = &text->last_line;
  for ( ; temp != line; result++ )
  {
    temp = &temp;
    //result++;
  }
  return result;
}
TextAnchor *get_prev_anchor( TextAnchor *a )
{
  TextAnchor *p, *q;
  if ( a->prev == 0 )
  {
    p = HTMainText->first_anchor;
    if ( p != 0 )
    {
      while ( q = &p, q != 0 )
      {
        q->prev = p;
        p = q;
      }
    }
  }
  return a->prev;
}
int www_search_forward( int start_line, DocInfo *doc, char *target, HTLine *line, int count )
{
  int wrapped = 0;
  TextAnchor *a = line_num_to_anchor( count - 1 );
  int tentative_result = -1;
  while ( 1 )
  {
    if ( a != 0 && a->line_num == count - 1 )
    {
      if ( ( a->show_anchor & 255 ) != 0 && ( a->link_type != 2 || a->input_field->type != 8 ) && ( anchor_has_target( a, target ) & 255 ) != 0 )
        break;
      a = &a;
    }
    else
    {
      if ( ( ( ( case_sensitive & 255 ) != 0 ? LYno_attr_char_strstr( &line->data[0], target ) : LYno_attr_char_case_strstr( &line->data[0], target ) ) != 0 ) != 0 )
      {
        tentative_result = count;
        if ( tentative_result < 1 )
        {
        }
        else
          adjust_search_result( doc, tentative_result, start_line );
        return 0;
      }
      else
      if ( ( start_line == count && wrapped != 0 ) || wrapped > 1 )
      {
        HTUserMsg2( gettext( "'%s' not found!" ), target );
        return -1;
      }
      if ( HTMainText->last_line == line )
      {
        count = 0;
        wrapped++;
      }
      line = &line;
      count++;
    }
  }
  adjust_search_result( doc, count, start_line );
  return 1;
}
int www_search_backward( int start_line, DocInfo *doc, char *target, HTLine *line, int count )
{
  int wrapped = 0;
  TextAnchor *a = line_num_to_anchor( count - 1 );
  int tentative_result = -1;
  while ( 1 )
  {
    if ( a != 0 && a->line_num == count - 1 )
    {
      if ( ( a->show_anchor & 255 ) != 0 && ( a->link_type != 2 || a->input_field->type != 8 ) && ( anchor_has_target( a, target ) & 255 ) != 0 )
        break;
      a = get_prev_anchor( a );
    }
    else
    {
      if ( ( ( ( case_sensitive & 255 ) != 0 ? LYno_attr_char_strstr( &line->data[0], target ) : LYno_attr_char_case_strstr( &line->data[0], target ) ) != 0 ) != 0 )
      {
        tentative_result = count;
        if ( tentative_result < 1 )
        {
        }
        else
          adjust_search_result( doc, tentative_result, start_line );
        return 0;
      }
      else
      if ( ( start_line == count && wrapped != 0 ) || wrapped > 1 )
      {
        HTUserMsg2( gettext( "'%s' not found!" ), target );
        return -1;
      }
      if ( HTMainText->last_line->next == line )
      {
        count = line_num_in_text( HTMainText, HTMainText->last_line ) + 1;
        wrapped++;
      }
      line = line->prev;
      count--;
    }
  }
  adjust_search_result( doc, count, start_line );
  return 1;
}
void www_user_search( int start_line, DocInfo *doc, char *target, int direction )
{
  HTLine *line;
  int count;
  if ( HTMainText != 0 )
  {
    line = &HTMainText->last_line;
    if ( start_line + direction >= 1 )
    {
      count = 1;
      for ( ; start_line + direction <= count; count++ )
      {
        if ( HTMainText->last_line == line )
        {
          line = &HTMainText->last_line;
          count = 1;
        }
        else
        {
          line = &line;
          //count++;
        }
      }
    }
    else
    {
      line = HTMainText->last_line;
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
    HTSprintf0( &temp, message, argument == 0 ? "" : argument, argument == 0 ? "" : argument, argument == 0 ? "" : argument, argument == 0 ? "" : argument );
    statusline( temp );
    if ( temp != 0 )
    {
      free( temp );
    }
  }
  return;
}
char *HText_getOwner( void )
{
  return HTMainText == 0 ? 0 : HTAnchor_owner( HTMainText->node_anchor );
}
void HText_setMainTextOwner( char *owner )
{
  if ( HTMainText != 0 )
  {
    HTAnchor_setOwner( HTMainText->node_anchor, owner );
  }
  return;
}
char *HText_getRevTitle( void )
{
  return HTMainText == 0 ? 0 : HTAnchor_RevTitle( HTMainText->node_anchor );
}
char *HText_getContentBase( void )
{
  return HTMainText == 0 ? 0 : HTAnchor_content_base( HTMainText->node_anchor );
}
char *HText_getContentLocation( void )
{
  return HTMainText == 0 ? 0 : HTAnchor_content_location( HTMainText->node_anchor );
}
char *HText_getMessageID( void )
{
  return HTMainText == 0 ? 0 : HTAnchor_messageID( HTMainText->node_anchor );
}
void HTuncache_current_document( void )
{
  if ( HTMainText != 0 )
  {
    HTParentAnchor *htmain_anchor = HTMainText->node_anchor;
    if ( htmain_anchor != 0 && ( HTOutputFormat == 0 || WWW_SOURCE != HTOutputFormat ) && htmain_anchor->UCStages != 0 )
    {
      free( htmain_anchor->UCStages );
      htmain_anchor->UCStages = 0;
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "\nHTuncache.. freeing document for '%s'%s\n", htmain_anchor == 0 || htmain_anchor->address == 0 ? "unknown anchor" : htmain_anchor->address, htmain_anchor == 0 || htmain_anchor->post_data == 0 ? "" : " with POST data" );
    }
    HTList_removeObject( loaded_texts, (void*)HTMainText );
    HText_free( HTMainText );
    HTMainText = 0;
  }
  else
  if ( ( WWW_TraceFlag & 255 ) != 0 )
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
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "SourceCache: file-cache%s found\n", result == 0 ? " not" : "" );
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
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "SourceCache: memory-cache%s found\n", result == 0 ? " not" : "" );
    }
  }
  return result;
}
BOOLEAN HTreparse_document( void )
{
  BOOLEAN ok = 0;
  if ( HTMainAnchor == 0 || LYCacheSource == 0 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "HTreparse_document returns FALSE\n" );
    }
  }
  else
  {
    if ( ( useSourceCache( ) & 255 ) != 0 )
    {
      FILE *fp;
      HTFormat format;
      int ret;
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "SourceCache: Reparsing file %s\n", HTMainAnchor->source_cache_file );
      }
      if ( ( HTOutputFormat == 0 || WWW_SOURCE != HTOutputFormat ) && HTMainAnchor->UCStages != 0 )
      {
        free( HTMainAnchor->UCStages );
        HTMainAnchor->UCStages = 0;
      }
      if ( HTMainAnchor->content_type != 0 )
      {
        format = HTAtom_for( HTMainAnchor->content_type );
      }
      else
      {
        format = HTFileFormat( HTMainAnchor->source_cache_file, 0, 0 );
        format = HTCharsetFormat( format, HTMainAnchor, UCLYhndl_for_unspec );
      }
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "  Content type is \"%s\"\n", format->name );
      }
      fp = fopen64( HTMainAnchor->source_cache_file, "r" );
      if ( fp == 0 )
      {
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "  Cannot read file %s\n", HTMainAnchor->source_cache_file );
        }
        LYRemoveTemp( HTMainAnchor->source_cache_file );
        if ( HTMainAnchor->source_cache_file != 0 )
        {
          free( HTMainAnchor->source_cache_file );
          HTMainAnchor->source_cache_file = 0;
        }
      }
      else
      {
        if ( ( HText_HaveUserChangedForms( HTMainText ) & 255 ) != 0 )
        {
          HTAlert( gettext( "Reloading document.  Any form entries will be lost!" ) );
        }
        HTAnchor_setProtocol( HTMainAnchor, (void*)HTFile.name );
        ret = HTParseFile( format, HTOutputFormat, HTMainAnchor, fp, 0 );
        LYCloseInput( fp );
        if ( ret == 206 )
        {
          HTInfoMsg( gettext( "Loading incomplete." ) );
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "SourceCache: `%s' has been accessed, partial content.\n", HTLoadedDocumentURL( ) );
          }
        }
        ok = ret == 200 || ret == 206 ? 1 : 0;
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "Reparse file %s\n", ok == 0 ? "failed" : "succeeded" );
        }
      }
    }
    else
    {
      if ( ( useMemoryCache( ) & 255 ) != 0 )
      {
        HTFormat format = HTAtom_for( "text/html" );
        int ret;
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "SourceCache: Reparsing from memory chunk %p\n", HTMainAnchor->source_cache_chunk );
        }
        if ( ( HTOutputFormat == 0 || WWW_SOURCE != HTOutputFormat ) && HTMainAnchor->UCStages != 0 )
        {
          free( HTMainAnchor->UCStages );
          HTMainAnchor->UCStages = 0;
        }
        if ( HTMainAnchor->content_type != 0 )
        {
          format = HTAtom_for( HTMainAnchor->content_type );
        }
        else
        {
          format = HTCharsetFormat( format, HTMainAnchor, UCLYhndl_for_unspec );
        }
        if ( ( HText_HaveUserChangedForms( HTMainText ) & 255 ) != 0 )
        {
          HTAlert( gettext( "Reloading document.  Any form entries will be lost!" ) );
        }
        HTAnchor_setProtocol( HTMainAnchor, (void*)scm.name );
        ret = HTParseMem( format, HTOutputFormat, HTMainAnchor, HTMainAnchor->source_cache_chunk, 0 );
        ok = ret == 200;
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "Reparse memory %s\n", ok == 0 ? "failed" : "succeeded" );
        }
      }
    }
  }
  return 0;
}
BOOLEAN HTcan_reparse_document( void )
{
  BOOLEAN result = 0;
  if ( HTMainAnchor == 0 || LYCacheSource == 0 )
    result = 0;
  else
  {
    if ( ( useSourceCache( ) & 255 ) != 0 )
    {
      result = LYCanReadFile( HTMainAnchor->source_cache_file );
    }
    else
    {
      if ( ( useMemoryCache( ) & 255 ) != 0 )
        result = 1;
    }
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "HTcan_reparse_document -&gt; %d\n", result );
  }
  return result;
}
void trace_setting_change( char *name, int prev_setting, int new_setting )
{
  if ( prev_setting != new_setting && ( WWW_TraceFlag & 255 ) != 0 )
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
    if ( ( WWW_TraceFlag & 255 ) != 0 )
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
      if ( ( HTMainText->disp_lines != LYlines || HTMainText->disp_cols != ( LYwideLines == 0 ? LYcols : 1014 ) ) && ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "HTdocument_settings_changed: Screen size has changed (was %dx%d, now %dx%d)\n", HTMainText->disp_cols, HTMainText->disp_lines, LYwideLines == 0 ? LYcols : 1014, LYlines );
      }
    }
  }
  return ( HTMainText->clickable_images == clickable_images && HTMainText->pseudo_inline_alts == pseudo_inline_alts && HTMainText->verbose_img == verbose_img && HTMainText->raw_mode == LYUseDefaultRawMode && HTMainText->historical_comments == historical_comments && ( HTMainText->minimal_comments == minimal_comments || ( historical_comments & 255 ) != 0 ) && HTMainText->soft_dquotes == soft_dquotes && Old_DTD == HTMainText->old_dtd && keypad_mode == HTMainText->keypad_mode ? 0 : 1 );
}
int HTisDocumentSource( void )
{
  return HTMainText == 0 ? 0 : HTMainText->source;
}
char *HTLoadedDocumentURL( void )
{
  if ( HTMainText == 0 )
  {
    return "";
  }
  if ( HTMainText->node_anchor != 0 && HTMainText->node_anchor->address != 0 )
  {
    return HTMainText->node_anchor->address;
  }
  return "";
}
bstring *HTLoadedDocumentPost_data( void )
{
  return HTMainText == 0 || HTMainText->node_anchor == 0 || HTMainText->node_anchor->post_data == 0 ? 0 : HTMainText->node_anchor->post_data;
}
char *HTLoadedDocumentTitle( void )
{
  if ( HTMainText == 0 )
  {
    return "";
  }
  if ( HTMainText->node_anchor != 0 && HTMainText->node_anchor->title != 0 )
  {
    return HTMainText->node_anchor->title;
  }
  return "";
}
BOOLEAN HTLoadedDocumentIsHEAD( void )
{
  if ( HTMainText == 0 )
  {
  }
  else
  if ( HTMainText->node_anchor != 0 && ( HTMainText->node_anchor->isHEAD & 255 ) != 0 )
  {
  }
  else
  {
  }
  return HTMainText->node_anchor->isHEAD;
}
BOOLEAN HTLoadedDocumentIsSafe( void )
{
  if ( HTMainText == 0 )
  {
  }
  else
  if ( HTMainText->node_anchor != 0 && ( HTMainText->node_anchor->safe & 255 ) != 0 )
  {
  }
  else
  {
  }
  return HTMainText->node_anchor->safe;
}
char *HTLoadedDocumentCharset( void )
{
  if ( HTMainText == 0 )
  {
    return 0;
  }
  if ( HTMainText->node_anchor != 0 && HTMainText->node_anchor->charset != 0 )
  {
    return HTMainText->node_anchor->charset;
  }
  return 0;
}
BOOLEAN HTLoadedDocumentEightbit( void )
{
  return ( HTMainText == 0 ? 0 : HTMainText->have_8bit_chars );
}
void HText_setNodeAnchorBookmark( char *bookmark )
{
  if ( HTMainText != 0 && HTMainText->node_anchor != 0 )
  {
    HTAnchor_setBookmark( HTMainText->node_anchor, bookmark );
  }
  return;
}
char *HTLoadedDocumentBookmark( void )
{
  if ( HTMainText == 0 )
  {
    return 0;
  }
  if ( HTMainText->node_anchor != 0 && HTMainText->node_anchor->bookmark != 0 )
  {
    return HTMainText->node_anchor->bookmark;
  }
  return 0;
}
int HText_LastLineSize( HText *text, BOOLEAN IgnoreSpaces )
{
  return text == 0 || text->last_line == 0 || ( text->last_line->size & 65535 ) == 0 ? 0 : HText_TrueLineSize( text->last_line, text, IgnoreSpaces );
}
BOOLEAN HText_LastLineEmpty( HText *text, BOOLEAN IgnoreSpaces )
{
  return ( text == 0 || text->last_line == 0 || ( text->last_line->size & 65535 ) == 0 ? 1 : HText_TrueEmptyLine( text->last_line, text, IgnoreSpaces ) );
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
  line = text->last_line->prev;
  if ( line == 0 )
  {
    return 0;
  }
  return HText_TrueLineSize( line, text, IgnoreSpaces );
}
BOOLEAN HText_PreviousLineEmpty( HText *text, BOOLEAN IgnoreSpaces )
{
  HTLine *line;
  if ( text == 0 || text->last_line == 0 )
  {
  }
  else
  {
    line = text->last_line->prev;
    if ( line == 0 )
    {
    }
    else
    {
    }
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
  if ( IgnoreSpaces != 0 )
  {
    i = 0;
    for ( ; i < line->size; i++ )
    {
      if ( ( line->data[ i ] >= 2 || line->data[ i ] < 8 ) && ( text == 0 || ( text->T.output_utf8 & 255 ) == 0 || line->data[ i ] >= 0 || ( line->data[ i ] & 192 ) == 192 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( line->data[ i ] * 2 )) & 8192 ) == 0 && line->data[ i ] != 1 && line->data[ i ] != 2 )
        true_size++;
      //i++;
    }
  }
  else
  {
    i = 0;
    for ( ; i < line->size; i++ )
    {
      if ( ( line->data[ i ] <= 2 || line->data[ i ] > 8 ) && ( text == 0 || ( text->T.output_utf8 & 255 ) == 0 || line->data[ i ] >= 0 || ( line->data[ i ] & 192 ) == 192 ) )
        true_size++;
      //i++;
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
    if ( IgnoreSpaces != 0 )
    {
      i = 0;
      for ( ; i < line->size; i++ )
      {
        if ( ( line->data[ i ] >= 2 || line->data[ i ] < 8 ) && ( text == 0 || ( text->T.output_utf8 & 255 ) == 0 || line->data[ i ] >= 0 || ( line->data[ i ] & 192 ) == 192 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( line->data[ i ] * 2 )) & 8192 ) == 0 && line->data[ i ] != 1 && line->data[ i ] != 2 )
        {
          break;
        }
        else
        {
          //i++;
        }
      }
    }
    else
    {
      i = 0;
      for ( ; i < line->size; i++ )
      {
        if ( ( line->data[ i ] <= 2 || line->data[ i ] > 8 ) && ( text == 0 || ( text->T.output_utf8 & 255 ) == 0 || line->data[ i ] >= 0 || ( line->data[ i ] & 192 ) == 192 ) )
        {
          break;
        }
        else
        {
          //i++;
        }
      }
    }
  }
  return 0;
}
void HText_NegateLineOne( HText *text )
{
  if ( text != 0 )
  {
    text->in_line_1 = 0;
  }
  return;
}
BOOLEAN HText_inLineOne( HText *text )
{
  return ( text == 0 ? 1 : text->in_line_1 );
}
void HText_RemovePreviousLine( HText *text )
{
  HTLine *line, *previous;
  if ( text != 0 && text->Lines > 1 )
  {
    line = text->last_line->prev;
    previous = line->prev;
    &previous = text->last_line;
    text->last_line->prev = previous;
    text->Lines--;
  }
  return;
}
int HText_getCurrentColumn( HText *text )
{
  int column = 0;
  BOOLEAN IgnoreSpaces = 0;
  if ( text != 0 )
  {
    column = ( ( text->in_line_1 & 255 ) == 0 ? text->style->leftIndent : text->style->indent1st ) + HText_LastLineSize( text, IgnoreSpaces ) + text->last_line->offset;
  }
  return column;
}
int HText_getMaximumColumn( HText *text )
{
  int column = LYwideLines == 0 ? LYcols : 1014;
  if ( text != 0 )
  {
    column -= text->style->rightIndent;
  }
  return column;
}
void HText_setTabID( HText *text, char *name )
{
  HTTabID *Tab = 0;
  HTList *cur = text->tabs;
  HTList *last = 0;
  if ( text != 0 && name != 0 && ( name[0] & 255 ) != 0 )
  {
    if ( cur == 0 )
    {
      cur = text->tabs = HTList_new( );
    }
    else
    {
      while ( 1 )
      {
        if ( cur != 0 )
        {
          cur = cur->next;
          Tab = cur == 0 ? 0 : &(HTTabID*)(cur);
          if ( Tab != 0 )
          {
            if ( Tab->name != 0 && strcmp( Tab->name, name ) == 0 )
              break;
            last = cur;
          }
          else
          {
            if ( last != 0 )
              cur = last;
          }
        }
        Tab = cur == 0 ? 0 : &(HTTabID*)(cur);
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
  HTList *cur = text->tabs;
  if ( text != 0 && name != 0 && ( name[0] & 255 ) != 0 && cur != 0 )
  {
    do
    {
      if ( cur != 0 )
      {
        cur = cur->next;
        Tab = cur == 0 ? 0 : &(HTTabID*)(cur);
      }
    }
    while ( Tab != 0 && ( Tab->name == 0 || strcmp( Tab->name, name ) != 0 ) );
    if ( Tab != 0 )
    {
      column = Tab->column;
    }
  }
  return column;
}
void HText_AddHiddenLink( HText *text, TextAnchor *textanchor )
{
  HTAnchor *dest;
  if ( text != 0 && textanchor != 0 && textanchor->anchor != 0 )
  {
    if ( text->hidden_links == 0 )
    {
      text->hidden_links = HTList_new( );
    }
    dest = HTAnchor_followLink( textanchor->anchor );
    if ( dest != 0 && ( text->hiddenlinkflag != 2 || text->hidden_links == 0 || text->hidden_links->next == 0 ) )
    {
      HTList_appendObject( text->hidden_links, HTAnchor_address( dest ) );
    }
  }
  return;
}
int HText_HiddenLinkCount( HText *text )
{
  int count = 0;
  if ( text != 0 && text->hidden_links != 0 )
  {
    count = HTList_count( text->hidden_links );
  }
  return count;
}
char *HText_HiddenLinkAt( HText *text, int number )
{
  char *href = 0;
  if ( text != 0 && text->hidden_links != 0 && number >= 0 )
  {
    href = HTList_objectAt( text->hidden_links, number );
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
  if ( action != 0 )
  {
    if ( strncasecomp( action, "mailto:", 7 ) == 0 )
      HTFormMethod = 3;
    HTSACopy( &HTFormAction, action );
  }
  else
  {
    HTSACopy( &HTFormAction, HTLoadedDocumentURL( ) );
    if ( method != 0 && HTFormMethod != 3 && ( strcasecomp( method, "post" ) == 0 || strcasecomp( method, "pget" ) == 0 ) )
      HTFormMethod = 2;
    if ( enctype != 0 && ( enctype[0] & 255 ) != 0 )
    {
      HTSACopy( &HTFormEnctype, enctype );
      if ( HTFormMethod != 3 && strncasecomp( enctype, "multipart/form-data", 19 ) == 0 )
        HTFormMethod = 2;
    }
    else
    if ( HTFormEnctype != 0 )
    {
      free( HTFormEnctype );
      HTFormEnctype = 0;
    }
    if ( title != 0 && ( title[0] & 255 ) != 0 )
    {
      HTSACopy( &HTFormTitle, title );
    }
    if ( HTFormTitle != 0 )
    {
      free( HTFormTitle );
      HTFormTitle = 0;
    }
    if ( accept_cs != 0 )
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
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "BeginForm: action:%s Method:%d%s%s%s%s%s%s\n", HTFormAction, HTFormMethod, HTFormTitle == 0 ? "" : " Title:", HTFormTitle == 0 ? "" : HTFormTitle, HTFormEnctype == 0 ? "" : " Enctype:", HTFormEnctype == 0 ? "" : HTFormEnctype, HTFormAcceptCharset == 0 ? "" : " Accept-charset:", HTFormAcceptCharset == 0 ? "" : HTFormAcceptCharset );
    }
    return;
  }
}
void HText_endForm( HText *text )
{
  if ( HTFormFields == 1 && text != 0 && text->first_anchor != 0 )
  {
    TextAnchor *a = text->first_anchor;
    for ( ; a != 0; a = &a )
    {
      if ( a->link_type == 2 && a->input_field->number == HTFormNumber && a->input_field->type == 1 )
      {
        a->input_field->submit_action = 0;
        HTSACopy( &a->input_field->submit_action, HTFormAction );
        if ( HTFormEnctype != 0 )
          HTSACopy( &a->input_field->submit_enctype, HTFormEnctype );
        if ( HTFormTitle != 0 )
          HTSACopy( &a->input_field->submit_title, HTFormTitle );
        a->input_field->submit_method = HTFormMethod;
        a->input_field->type = 12;
        if ( ( HTFormDisabled & 255 ) != 0 )
        {
          a->input_field->disabled = 1;
          break;
        }
      }
      else
      {
        //a = &a;
      }
    }
  }
  if ( HTCurrentForm != 0 )
  {
    if ( ( HTFormDisabled & 255 ) != 0 )
      HTCurrentForm->disabled = 1;
    HTCurrentForm->accept_cs = HTFormAcceptCharset;
    HTFormAcceptCharset = 0;
    if ( text->forms == 0 )
    {
      text->forms = HTList_new( );
    }
    HTList_appendObject( text->forms, (void*)HTCurrentForm );
    HTCurrentForm = 0;
  }
  else
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "endForm:    HTCurrentForm is missing!\n" );
  }
  if ( HTCurSelectGroup != 0 )
  {
    free( HTCurSelectGroup );
    HTCurSelectGroup = 0;
  }
  if ( HTCurSelectGroupSize != 0 )
  {
    free( HTCurSelectGroupSize );
    HTCurSelectGroupSize = 0;
  }
  if ( HTCurSelectedOptionValue != 0 )
  {
    free( HTCurSelectedOptionValue );
    HTCurSelectedOptionValue = 0;
  }
  if ( HTFormAction != 0 )
  {
    free( HTFormAction );
    HTFormAction = 0;
  }
  if ( HTFormEnctype != 0 )
  {
    free( HTFormEnctype );
    HTFormEnctype = 0;
  }
  if ( HTFormTitle != 0 )
  {
    free( HTFormTitle );
    HTFormTitle = 0;
  }
  if ( HTFormAcceptCharset != 0 )
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
  if ( multiple != 0 )
    HTCurSelectGroupType = 3;
  else
    HTCurSelectGroupType = 4;
  HTSACopy( &HTCurSelectGroupSize, size );
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "HText_beginSelect: name=%s type=%d size=%s\n", HTCurSelectGroup == 0 ? "&lt;NULL&gt;" : HTCurSelectGroup, HTCurSelectGroupType, HTCurSelectGroupSize == 0 ? "&lt;NULL&gt;" : HTCurSelectGroupSize );
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "HText_beginSelect: name_cs=%d \"%s\"\n", HTCurSelectGroupCharset, HTCurSelectGroupCharset < 0 ? "&lt;UNKNOWN&gt;" : LYCharSet_UC[ HTCurSelectGroupCharset ].MIMEname );
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
  a = text->last_anchor;
  if ( a->link_type != 2 || a->input_field == 0 || a->input_field->type != 7 )
  {
    return 0;
  }
  op = a->input_field->select_list;
  for ( ; op != 0; op = op->next )
  {
    n++;
    //op = op->next;
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 )
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
    if ( cp != 0 && ( cp[0] & 255 ) != 0 )
    {
      cp++;
      if ( ( ( ( cp[0] == '(' ) ^ 1 ) & 255 ) == 0 && ( cp[0] & 255 ) != 0 )
      {
        cp++;
        if ( ( ( ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 2048 ) != 0 ) ^ 1 ) & 255 ) == 0 )
        {
          for ( ; ( cp[0] & 255 ) != 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 2048 ) != 0; cp++ )
          {
            //cp++;
          }
          if ( ( cp[0] & 255 ) != 0 )
          {
            cp++;
            if ( ( ( ( cp[0] == ')' ) ^ 1 ) & 255 ) == 0 )
            {
              int i = cp - opname;
              for ( ; i <= 4 && cp[0] == '_'; cp++ )
              {
                i++;
                //cp++;
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
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "HText_setLastOptionValue: invalid call!  value:%s!\n", value == 0 ? "&lt;NULL&gt;" : value );
      return 0;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "Entering HText_setLastOptionValue: value:\"%s\", checked:%s\n", value, checked == 0 ? "off" : "on" );
    }
    if ( ( value[0] & 255 ) != 0 )
    {
      cp = value + ( strlen( value ) - 1 );
      for ( ; value <= cp && ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 8192 ) != 0 || ( cp[0] < 2 && cp[0] >= 8 ) ); cp = &cp[ -1 ] )
      {
        //cp = &cp[ -1 ];
      }
      cp[1] = 0;
    }
    cp = value;
    for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 8192 ) != 0 || ( cp[0] < 2 && cp[0] >= 8 ); cp++ )
    {
      //cp++;
    }
    if ( HTCurSelectGroupType == 4 && ( LYSelectPopups & 255 ) != 0 && ( keypad_mode == 3 || keypad_mode == 2 ) )
    {
      cp1 = HText_skipOptionNumPrefix( cp );
      if ( cp < cp1 )
      {
        i = 0;
        j = cp1 - cp;
        for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp1[ i ] * 2 )) & 8192 ) != 0 || ( cp1[ i ] < 2 && cp1[ i ] >= 8 ); i++ )
        {
          //i++;
        }
        if ( i >= 1 )
        {
          for ( ; ( cp1[ i ] & 255 ) != 0; i++ )
          {
            cp[ j ] = cp1[ i ];
            j++;
            //i++;
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
    if ( ( LYSelectPopups & 255 ) == 0 )
    {
      HTSACopy( &text->last_anchor->input_field->value, submit_value == 0 ? cp : submit_value );
      text->last_anchor->input_field->value_cs = submit_value == 0 ? val_cs : submit_val_cs;
      HText_appendText( text, cp );
    }
    else
    {
      OptionType *op_ptr = text->last_anchor->input_field->select_list;
      OptionType *new_ptr = 0;
      BOOLEAN first_option = 0;
      LYReduceBlanks( value );
      if ( op_ptr == 0 )
      {
        if ( text->last_anchor->input_field->type != 7 )
        {
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "HText_setLastOptionValue: last input_field not F_OPTION_LIST_TYPE (%d)\n", 7 );
          }
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "                          but %d, ignoring!\n", text->last_anchor->input_field->type );
          }
          return 0;
        }
        else
        {
          new_ptr = text->last_anchor->input_field->select_list = calloc( 1, sizeof( OptionType ) );
          if ( new_ptr == 0 )
            outofmem( "./GridText.c", "HText_setLastOptionValue" );
          first_option = 1;
        }
      }
      else
      {
        for ( ; op_ptr->next != 0; op_ptr = op_ptr->next )
        {
          number++;
          //op_ptr = op_ptr->next;
        }
        number++;
        op_ptr->next = new_ptr = calloc( 1, sizeof( OptionType ) );
        if ( new_ptr == 0 )
          outofmem( "./GridText.c", "HText_setLastOptionValue" );
      }
      new_ptr->name = 0;
      new_ptr->cp_submit_value = 0;
      new_ptr->next = 0;
      cp = value;
      for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 8192 ) != 0 || ( cp[0] < 2 && cp[0] >= 8 ); cp++ )
      {
        //cp++;
      }
      i = 0;
      j = 0;
      for ( ; ( cp[ i ] & 255 ) != 0; i++ )
      {
        if ( cp[ i ] == 1 || cp[ i ] == 2 )
        {
          cp[ j ] = ' ';
          j++;
        }
        else
        if ( cp[ i ] != 7 && ( cp[ i ] >= 2 || cp[ i ] < 8 ) )
        {
          cp[ j ] = cp[ i ];
          j++;
        }
        //i++;
      }
      cp[ j ] = 0;
      if ( HTCJK != NOCJK )
      {
        if ( cp != 0 )
        {
          tmp = calloc( ( strlen( cp ) * 2 ) + 1, sizeof( unsigned char ) );
          if ( tmp != 0 )
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
              for ( ; ( cp[ i ] & 255 ) != 0; i++ )
              {
                if ( cp[ i ] != 27 )
                {
                  tmp[ j ] = cp[ i ];
                  j++;
                }
                //i++;
              }
            }
            HTSACopy( &new_ptr->name, (char*)tmp );
            if ( tmp != 0 )
            {
              free( tmp );
              tmp = 0;
            }
          }
        }
      }
      else
        HTSACopy( &new_ptr->name, cp );
      HTSACopy( &new_ptr->cp_submit_value, submit_value == 0 ? HText_skipOptionNumPrefix( new_ptr->name ) : submit_value );
      new_ptr->value_cs = submit_value == 0 ? val_cs : submit_val_cs;
      if ( first_option != 0 )
      {
        FormInfo *last_input = text->last_anchor->input_field;
        HTSACopy( &HTCurSelectedOptionValue, new_ptr->name );
        last_input->num_value = 0;
        if ( last_input->value != 0 )
        {
          free( last_input->value );
          last_input->value = 0;
        }
        if ( last_input->cp_submit_value != 0 )
        {
          free( last_input->cp_submit_value );
          last_input->cp_submit_value = 0;
        }
        last_input->value = last_input->select_list->name;
        last_input->orig_value = last_input->select_list->name;
        last_input->cp_submit_value = last_input->select_list->cp_submit_value;
        last_input->orig_submit_value = last_input->select_list->cp_submit_value;
        last_input->value_cs = new_ptr->value_cs;
      }
      else
      {
        int newlen = strlen( new_ptr->name );
        int curlen = HTCurSelectedOptionValue == 0 ? 0 : strlen( HTCurSelectedOptionValue );
        if ( curlen < newlen )
        {
          HTSACat( &HTCurSelectedOptionValue, newlen - curlen <= 1023 ? &underscore_string[ ( curlen - newlen ) + 1023 ] : underscore_string );
        }
      }
      if ( checked != 0 )
      {
        int curlen = strlen( new_ptr->name );
        int newlen = HTCurSelectedOptionValue == 0 ? 0 : strlen( HTCurSelectedOptionValue );
        FormInfo *last_input = text->last_anchor->input_field;
        last_input->num_value = number;
        last_input->value = new_ptr->name;
        last_input->orig_value = new_ptr->name;
        last_input->cp_submit_value = new_ptr->cp_submit_value;
        last_input->orig_submit_value = new_ptr->cp_submit_value;
        last_input->value_cs = new_ptr->value_cs;
        HTSACopy( &HTCurSelectedOptionValue, new_ptr->name );
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
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "HText_setLastOptionValue:%s value=\"%s\"\n", order == 3 ? " LAST_ORDER" : "", value );
        }
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "            val_cs=%d \"%s\"", val_cs, val_cs < 0 ? "&lt;UNKNOWN&gt;" : LYCharSet_UC[ val_cs ].MIMEname );
        }
        if ( submit_value != 0 )
        {
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), " (submit_val_cs %d \"%s\") submit_value%s=\"%s\"\n", submit_val_cs, submit_val_cs < 0 ? "&lt;UNKNOWN&gt;" : LYCharSet_UC[ submit_val_cs ].MIMEname, HTCurSelectGroupType == 3 ? "(ignored)" : "", submit_value );
          }
        }
        else
        {
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "\n" );
          }
        }
      }
      return ret_Value;
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
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "GridText: Entering HText_beginInput type=%s\n", I->type == 0 ? "" : I->type );
  }
  a = ALLOC_IN_POOL( &HTMainText->pool, 52 );
  f = ALLOC_IN_POOL( &HTMainText->pool, 96 );
  if ( a == 0 || f == 0 )
    outofmem( "./GridText.c", "HText_beginInput" );
  a->sgml_offset = SGML_offset( );
  a->inUnderline = underline;
  a->line_num = text->Lines;
  a->line_pos = text->last_line->size;
  if ( I->type != 0 && strcmp( I->type, "OPTION" ) == 0 && HTCurSelectGroupType == 4 && ( LYSelectPopups & 255 ) == 0 )
  {
    I->type = "RADIO";
    I->name = HTCurSelectGroup;
    I->name_cs = HTCurSelectGroupCharset;
  }
  if ( I->name != 0 && I->type != 0 && strcasecomp( I->type, "radio" ) == 0 )
  {
    if ( text->last_anchor == 0 )
      I->checked = 1;
    else
    {
      TextAnchor *b;
      int i2 = 0;
      b = text->first_anchor;
      for ( ; b != 0; b = &b )
      {
        if ( b->link_type == 2 && b->input_field->type == 4 && b->input_field->number == HTFormNumber && strcmp( b->input_field->name, I->name ) == 0 )
        {
          if ( I->checked != 0 && b->input_field->num_value != 0 )
          {
            b->input_field->num_value = 0;
            HTSACopy( &b->input_field->orig_value, "0" );
          }
          i2++;
        }
        //b = &b;
      }
      if ( i2 == 0 )
        I->checked = 1;
    }
  }
  &a = 0;
  a->anchor = 0;
  a->link_type = 2;
  a->show_anchor = 1;
  LYClearHiText( a );
  a->extent = 2;
  a->input_field = f;
  f->select_list = 0;
  f->number = HTFormNumber;
  f->disabled = ( HTFormDisabled & 255 ) == 0 && I->disabled == 0 ? 0 : 1;
  f->no_cache = 0;
  HTFormFields++;
  if ( HTFormMethod == 2 )
    f->no_cache = 1;
  if ( I->value != 0 )
    HTSACopy( &IValue, I->value );
  if ( IValue != 0 && HTCJK != NOCJK && ( I->type == 0 || strcasecomp( I->type, "hidden" ) != 0 ) )
  {
    tmp = calloc( ( strlen( IValue ) * 2 ) + 1, sizeof( unsigned char ) );
    if ( tmp != 0 )
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
        for ( ; ( IValue[ i ] & 255 ) == 0; i++ )
        {
          if ( IValue[ i ] != 27 )
          {
            tmp[ j ] = IValue[ i ];
            j++;
            //i++;
          }
          else
          {
            //i++;
          }
        }
      }
      HTSACopy( &IValue, (char*)tmp );
      if ( tmp != 0 )
      {
        free( tmp );
        tmp = 0;
      }
    }
  }
  if ( I->type != 0 && strcmp( I->type, "OPTION" ) == 0 )
  {
    cp_option = I->type;
    if ( HTCurSelectGroupType == 4 )
      I->type = "OPTION_LIST";
    else
      I->type = "CHECKBOX";
    I->name = HTCurSelectGroup;
    I->name_cs = HTCurSelectGroupCharset;
    if ( HTCurSelectGroupSize != 0 )
    {
      f->size_l = atoi( HTCurSelectGroupSize );
      if ( HTCurSelectGroupSize != 0 )
      {
        free( HTCurSelectGroupSize );
        HTCurSelectGroupSize = 0;
      }
    }
  }
  if ( I->size != 0 )
  {
    f->size = I->size;
    if ( f->size == 0 && cp_option == 0 )
      f->size = 20;
  }
  else
    f->size = 20;
  if ( I->maxlength != 0 )
  {
    f->maxlength = atoi( I->maxlength );
  }
  else
    f->maxlength = 0;
  if ( I->checked == 1 )
    f->num_value = 1;
  else
    f->num_value = 0;
  if ( I->type != 0 )
  {
    if ( strcasecomp( I->type, "password" ) == 0 )
      f->type = 2;
    else
    {
      if ( strcasecomp( I->type, "checkbox" ) == 0 )
        f->type = 3;
      else
      {
        if ( strcasecomp( I->type, "radio" ) == 0 )
          f->type = 4;
        else
        {
          if ( strcasecomp( I->type, "submit" ) == 0 )
            f->type = 5;
          else
          {
            if ( strcasecomp( I->type, "image" ) == 0 )
              f->type = 13;
            else
            {
              if ( strcasecomp( I->type, "reset" ) == 0 )
                f->type = 6;
              else
              {
                if ( strcasecomp( I->type, "OPTION_LIST" ) == 0 )
                  f->type = 7;
                else
                {
                  if ( strcasecomp( I->type, "hidden" ) == 0 )
                  {
                    f->type = 8;
                    HTFormFields--;
                    f->size = 0;
                  }
                  else
                  {
                    if ( strcasecomp( I->type, "textarea" ) == 0 )
                      f->type = 9;
                    else
                    {
                      if ( strcasecomp( I->type, "range" ) == 0 )
                        f->type = 10;
                      else
                      {
                        if ( strcasecomp( I->type, "file" ) == 0 )
                        {
                          f->type = 11;
                          if ( ( WWW_TraceFlag & 255 ) != 0 )
                          {
                            fprintf( TraceFP( ), "ok, got a file uploader\n" );
                          }
                        }
                        else
                        {
                          if ( strcasecomp( I->type, "keygen" ) == 0 )
                            f->type = 14;
                          else
                            f->type = 1;
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
    f->type = 1;
  if ( I->name != 0 )
  {
    HTSACopy( &f->name, I->name );
    f->name_cs = I->name_cs;
    if ( text->last_anchor != 0 )
      &text->last_anchor = a;
    else
      text->first_anchor = a;
    if ( IValue != 0 )
    {
      if ( f->type == 7 || f->type == 3 )
      {
        HTSACopy( &f->value, IValue );
        HTSACopy( &f->cp_submit_value, IValue );
      }
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
      if ( f->value != 0 && ( f->value[0] & 255 ) != 0 )
      {
        f->size = strlen( f->value );
      }
      else
      {
        HTSACopy( &f->value, "Reset" );
        f->size = 5;
      }
    }
    else
    if ( f->type == 13 || f->type == 5 )
    {
      if ( f->value != 0 && ( f->value[0] & 255 ) != 0 )
      {
        f->size = strlen( f->value );
      }
      else
      if ( f->type == 13 )
      {
        HTSACopy( &f->value, "[IMAGE]-Submit" );
        f->size = 14;
      }
      else
      {
        HTSACopy( &f->value, "Submit" );
        f->size = 6;
      }
      f->submit_action = 0;
      HTSACopy( &f->submit_action, HTFormAction );
      if ( HTFormEnctype != 0 )
        HTSACopy( &f->submit_enctype, HTFormEnctype );
      if ( HTFormTitle != 0 )
        HTSACopy( &f->submit_title, HTFormTitle );
      f->submit_method = HTFormMethod;
    }
    else
    if ( f->type == 4 || f->type == 3 )
    {
      f->size = 3;
      if ( IValue == 0 )
      {
        HTSACopy( &f->value, f->type == 3 ? "on" : "" );
      }
    }
    if ( IValue != 0 )
    {
      free( IValue );
      IValue = 0;
    }
    if ( f->type == 4 || f->type == 3 )
    {
      if ( f->num_value != 0 )
      {
        HTSACopy( &f->orig_value, "1" );
      }
      HTSACopy( &f->orig_value, "0" );
    }
    else
    {
      if ( f->type == 7 )
        f->orig_value = 0;
      else
        HTSACopy( &f->orig_value, f->value );
      if ( I->accept_cs != 0 )
      {
        HTSACopy( &f->accept_cs, I->accept_cs );
        LYRemoveBlanks( f->accept_cs );
        LYLowerCase( f->accept_cs );
      }
      if ( f->type <= 14 && ( ( 1 << f->type ) & 17664 ) != 0 )
        a->number = 0;
      else
      if ( keypad_mode == 3 || keypad_mode == 2 )
      {
        text->last_anchor_number++;
        a->number = text->last_anchor_number;
      }
      else
        a->number = 0;
      if ( ( keypad_mode == 3 || keypad_mode == 2 ) && a->number >= 1 )
      {
        sprintf( marker, "[%d]", a->number );
        adjust_marker = strlen( marker );
        if ( ( number_fields_on_left & 255 ) != 0 )
        {
          BOOLEAN had_bracket = f->type == 7;
          HText_appendText( text, had_bracket == 0 ? marker : &marker[1] );
          if ( had_bracket != 0 )
            HText_appendCharacter( text, 91 );
        }
        a->line_num = text->Lines;
        a->line_pos = text->last_line->size;
      }
      else
        marker[0] = 0;
      MaximumSize = ( text->stbl == 0 ? ( LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) ) + 1 : ( ( LYtableCols < 1 ? LYwideLines == 0 ? LYcols : 1014 : ( LYtableCols * LYcols ) / 12 ) - ( ( LYShowScrollbar & 255 ) != 0 ) ) + 1 ) - adjust_marker;
      if ( f->type <= 13 && ( ( 1 << f->type ) & 8802 ) != 0 )
      {
        MaximumSize += ~text->style->leftIndent - text->style->rightIndent;
        if ( keypad_mode == 3 || keypad_mode == 2 )
        {
          if ( ( number_fields_on_left & 255 ) == 0 && f->type == 1 && a->line_pos + 10 < MaximumSize )
            MaximumSize -= a->line_pos;
          else
          {
            MaximumSize -= strlen( marker );
          }
        }
        I->value = f->value;
      }
      else
        MaximumSize -= 10;
      if ( MaximumSize < 1 )
        MaximumSize = 1;
      if ( MaximumSize < f->size )
        f->size = MaximumSize;
      text->last_anchor = a;
      if ( HTCurrentForm != 0 )
      {
        if ( HTCurrentForm->first_field == 0 )
          HTCurrentForm->first_field = f;
        HTCurrentForm->last_field = f;
        HTCurrentForm->nfields++;
        if ( f->accept_cs != 0 && HTFormAcceptCharset == 0 )
          HTSACopy( &HTFormAcceptCharset, f->accept_cs );
        if ( text->forms == 0 )
        {
          text->forms = HTList_new( );
        }
      }
      else
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "beginInput: HTCurrentForm is missing!\n" );
      }
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "Input link: name=%s\nvalue=%s\nsize=%d\n", f->name, f->value == 0 ? "" : f->value, f->size );
      }
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "Input link: name_cs=%d \"%s\" (from %d \"%s\")\n", f->name_cs, f->name_cs < 0 ? "&lt;UNKNOWN&gt;" : LYCharSet_UC[ f->name_cs ].MIMEname, I->name_cs, I->name_cs < 0 ? "&lt;UNKNOWN&gt;" : LYCharSet_UC[ I->name_cs ].MIMEname );
      }
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "            value_cs=%d \"%s\" (from %d \"%s\")\n", f->value_cs, f->value_cs < 0 ? "&lt;UNKNOWN&gt;" : LYCharSet_UC[ f->value_cs ].MIMEname, I->value_cs, I->value_cs < 0 ? "&lt;UNKNOWN&gt;" : LYCharSet_UC[ I->value_cs ].MIMEname );
      }
      if ( I->size != 0 && adjust_marker < f->size )
        f->size -= adjust_marker;
    }
  }
  else
  if ( f->type == 6 || f->type == 5 || f->type == 13 )
  {
    HTSACopy( &f->name, "" );
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "GridText: No name present in input field; not displaying\n" );
  }
  if ( IValue != 0 )
  {
    free( IValue );
    IValue = 0;
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return f->size;
}
void HText_endInput( HText *text )
{
  if ( ( keypad_mode == 3 || keypad_mode == 2 ) && ( number_fields_on_left & 255 ) == 0 && text != 0 && text->last_anchor != 0 && text->last_anchor->number >= 1 )
  {
    char marker[20];
    HText_setIgnoreExcess( text, 0 );
    sprintf( marker, "[%d]", text->last_anchor->number );
    HText_appendText( text, marker );
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
double get_trans_q( int cs_from, char *givenmime )
{
  double df = 1.000000000000;
  BOOLEAN tq;
  char *p;
  if ( givenmime == 0 || ( givenmime[0] & 255 ) == 0 )
  {
  }
  else
  {
    p = strchr( givenmime, 59 );
    if ( p != 0 )
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
    else
    {
      if ( p != 0 && ( p[0] & 255 ) != 0 )
      {
        char *pair, *field = p, *pval, *ptok;
        do
        {
          pair = HTNextTok( &field, ";", "\"", 0 );
          if ( pair != 0 )
          {
            ptok = HTNextTok( &pair, "= ", 0, 0 );
            if ( ptok == 0 )
              continue;
            else
            {
              pval = HTNextField( &pair );
              if ( pval == 0 || strcasecomp( ptok, "q" ) != 0 )
                continue;
              else
                break;
            }
          }
          break;
        }
        while ( strcasecomp( ptok, "q" ) != 0 );
        df = strtod( pval, 0 );
      }
      else
      {
      }
    }
  }
  return df * (double)( tq );
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
    if ( ( field[0] & 255 ) == 0 )
      continue;
    else
    {
      q = get_trans_q( cs_from, field );
      if ( 0 != 1 )
      {
        bestq = q;
        bestmime = field;
      }
    }
  }
}
void load_a_file( char *val_used, bstring **result )
{
  FILE *fd;
  size_t bytes;
  char buffer[257];
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "Ok, about to convert %s to mime/thingy\n", val_used );
  }
  if ( ( val_used[0] & 255 ) != 0 )
  {
    fd = fopen64( val_used, "rb" );
    if ( fd == 0 )
    {
      HTAlert( gettext( "Can't open file for uploading" ) );
    }
    while ( bytes == 0 )
    {
      HTSABCat( result, buffer, (int)bytes );
    }
    LYCloseInput( fd );
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
char *guess_content_type( char *filename )
{
  HTAtom *encoding;
  char *desc;
  HTFormat format = HTFileFormat( filename, &encoding, &desc );
  return format == 0 || format->name == 0 || ( format->name[0] & 255 ) == 0 ? "text/plain" : format->name;
}
void cannot_transcode( BOOLEAN *had_warning, char *target_csname )
{
  if ( ( had_warning[0] & 255 ) == 0 )
  {
    had_warning[0] = 1;
    mustshow = 1;
    user_message( gettext( "Warning: Cannot transcode form data to charset %s!" ), target_csname == 0 ? "UNKNOWN" : target_csname );
    LYSleepAlert( );
  }
  return;
}
unsigned int check_form_specialchars( char *value )
{
  unsigned int result = 0;
  char *p = value;
  for ( ; p != 0 && ( p[0] & 255 ) != 0 && result != 3; p++ )
  {
    if ( p[0] == 1 || p[0] == 2 || p[0] == 7 )
      result |= 2;
    else
    if ( p[0] < 0 )
      result |= 1;
    //p++;
  }
  return result;
}
void UpdateBoundary( char **Boundary, bstring *data )
{
  int j;
  int have = strlen( Boundary[0] );
  int last = data == 0 ? 0 : data->len;
  char *text = data == 0 ? 0 : data->str;
  char *want = Boundary[0];
  j = 0;
  for ( ; j <= last - have; j++ )
  {
    if ( text[ j ] == want[0] && memcmp( want, &text[ j ], have ) == 0 )
    {
      char temp[2];
      temp[0] = ( *(short*)(*(int*)(__ctype_b_loc( )) + ( text[ j + have ] * 2 )) & 2048 ) == 0 ? '0' : 'a';
      temp[1] = 0;
      HTSACat( &want, temp );
      have++;
    }
    //j++;
  }
  Boundary[0] = want;
  return;
}
char *convert_to_base64( char *src, int len )
{
  static char basis_64[65] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/',  };
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
  if ( rlen != 0 )
    rlen += eollen * ( ( ( (/*HI*/int)( 1808407283 * ( rlen - 1 ) ) >> 5 ) - ( ( rlen - 1 ) >> 31 ) ) + 1 );
  dest = malloc( ( rlen + 1 ) * sizeof( char ) );
  if ( dest == 0 )
    outofmem( "./GridText.c", "convert_to_base64" );
  r = dest;
  chunk = 0;
  for ( ; len >= 1; chunk++ )
  {
    if ( chunk == 19 )
    {
      char *c = eol;
      char *e = &eol[ eollen ];
      for ( ; c < e; c++ )
      {
        r[0] = c[0];
        r++;
        //c++;
      }
      chunk = 0;
    }
    c1 = str[0];
    str++;
    c2 = str[0];
    str++;
    r[0] = basis_64[ c1 >> 2 ];
    r++;
    r[0] = basis_64[ ( c2 >> 4 ) | ( ( c1 & 3 ) << 4 ) ];
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
    len -= 3;
    //chunk++;
  }
  if ( rlen != 0 )
  {
    char *c = eol;
    char *e = &eol[ eollen ];
    for ( ; c < e; c++ )
    {
      r[0] = c[0];
      r++;
      //c++;
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
  default:
    return escaped1;
    break;
  case QUOTE_MULTI:
  case QUOTE_BASE64:
    HTSACopy( &escaped1, "Content-Disposition: form-data" );
    HTSprintf( &escaped1, "; name=\"%s\"", name );
    if ( MultipartContentType != 0 )
      HTSprintf( &escaped1, MultipartContentType, "text/plain" );
    if ( quoting == QUOTE_BASE64 )
      HTSACat( &escaped1, "\r\nContent-Transfer-Encoding: base64" );
    HTSACat( &escaped1, "\r\n\r\n" );
    break;
  case QUOTE_SPECIAL:
    escaped1 = HTEscapeSP( name, 1 );
    break;
  }
  return escaped1;
}
char *escape_or_quote_value( char *value, QuoteData quoting )
{
  char *escaped2 = 0;
  switch ( quoting )
  {
    break;
  default:
    HTSACopy( &escaped2, value == 0 ? "" : value );
    break;
  case QUOTE_BASE64:
    escaped2 = convert_to_base64( value, strlen( value ) );
    break;
  case QUOTE_SPECIAL:
    escaped2 = HTEscapeSP( value, 1 );
    break;
  }
  return escaped2;
}
int check_if_base64_needed( int submit_method, bstring *data )
{
  int width = 0;
  BOOLEAN printable = 1;
  char *text = data == 0 ? 0 : data->str;
  if ( text != 0 )
  {
    int col = 0;
    int n;
    int length = data == 0 ? 0 : data->len;
    n = 0;
    for ( ; n < length; n++ )
    {
      int ch = text[ n ];
      if ( (bit)( ( ch >> 7 ) & 1 ) || ( ch <= 31 && ch != 10 ) )
      {
        if ( ( WWW_TraceFlag & 255 ) != 0 )
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
      //n++;
    }
    if ( width < col )
      width = col;
  }
  return printable != 0 || submit_method != 3 || width <= 72 ? 0 : 1;
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
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "SubmitForm\n  link_name=%s\n  link_value=%s\n", link_name, link_value );
  }
  if ( HTMainText == 0 )
  {
    return 0;
  }
  thisform = HTList_objectAt( HTMainText->forms, form_number - 1 );
  if ( thisform == 0 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "SubmitForm: form %d not in HTMainText's list!\n", form_number );
    }
  }
  else
  if ( thisform->number != form_number )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "SubmitForm: failed sanity check, %d!=%d !\n", thisform->number, form_number );
    }
    thisform = 0;
  }
  if ( submit_item->submit_action == 0 || ( submit_item->submit_action[0] & 255 ) == 0 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "SubmitForm: no action given\n" );
    }
    return 0;
  }
  else
  {
    if ( submit_item->submit_method == 3 && strncasecomp( submit_item->submit_action, "mailto:", 7 ) != 0 )
    {
      HTAlert( gettext( "Malformed mailto form submission!  Cancelled!" ) );
      return 0;
    }
    if ( submit_item->submit_enctype != 0 && strncasecomp( submit_item->submit_enctype, "text/plain", 10 ) == 0 )
      PlainText = 1;
    else
    if ( submit_item->submit_enctype != 0 && strncasecomp( submit_item->submit_enctype, "application/sgml-form-urlencoded", 32 ) == 0 )
      SemiColon = 1;
    else
    if ( submit_item->submit_enctype != 0 && strncasecomp( submit_item->submit_enctype, "multipart/form-data", 19 ) == 0 )
      Boundary = "xnyLAaB03X";
    if ( thisform != 0 && submit_item->accept_cs != 0 && strcasecomp( submit_item->accept_cs, "UNKNOWN" ) != 0 )
    {
      have_accept_cs = 1;
      target_cs = find_best_target_cs( &thisform->thisacceptcs, current_char_set, submit_item->accept_cs );
    }
    if ( thisform != 0 && have_accept_cs == 0 && thisform->accept_cs != 0 && strcasecomp( thisform->accept_cs, "UNKNOWN" ) != 0 )
    {
      have_accept_cs = 1;
      target_cs = find_best_target_cs( &thisform->thisacceptcs, current_char_set, thisform->accept_cs );
    }
    if ( have_accept_cs != 0 && target_cs >= 0 && thisform->thisacceptcs != 0 )
      target_csname = thisform->thisacceptcs;
    if ( target_cs < 0 && HTMainText->node_anchor->charset != 0 && ( HTMainText->node_anchor->charset[0] & 255 ) != 0 )
    {
      target_cs = UCGetLYhndl_byMIME( HTMainText->node_anchor->charset );
      if ( target_cs >= 0 )
        target_csname = HTMainText->node_anchor->charset;
      else
      {
        target_cs = UCLYhndl_for_unspec;
        target_csname = LYCharSet_UC[ target_cs ].MIMEname;
      }
    }
    if ( target_cs < 0 )
      target_cs = UCLYhndl_for_unspec;
    anchor_ptr = HTMainText->first_anchor;
    for ( ; anchor_ptr == 0; anchor_ptr = &anchor_ptr )
    {
      if ( anchor_ptr->link_type == 2 )
      {
        if ( anchor_ptr->input_field->number == form_number && anchor_ptr->input_field->disabled == 0 )
        {
          FormInfo *form_ptr = anchor_ptr->input_field;
          char *val = form_ptr->cp_submit_value == 0 ? form_ptr->value : form_ptr->cp_submit_value;
          unsigned int field_is_special = check_form_specialchars( val );
          unsigned int name_is_special = check_form_specialchars( form_ptr->name );
          form_is_special = name_is_special | field_is_special;
          if ( field_is_special != 0 && target_cs >= 0 && ( ( field_is_special & 1 ) != 0 || ( LYCharSet_UC[ target_cs ].enc != 2 && ( LYCharSet_UC[ target_cs ].like8859 & 128 ) == 0 ) ) && ( UCNeedNotTranslate( form_ptr->value_cs, target_cs ) & 255 ) == 0 && ( UCCanTranslateFromTo( form_ptr->value_cs, target_cs ) & 255 ) == 0 )
          {
            if ( ( UCCanTranslateFromTo( target_cs, form_ptr->value_cs ) & 255 ) != 0 )
            {
              target_cs = form_ptr->value_cs;
              target_csname = 0;
            }
            else
              target_cs = -1;
          }
          if ( name_is_special != 0 && target_cs >= 0 && ( ( name_is_special & 1 ) != 0 || ( LYCharSet_UC[ target_cs ].enc != 2 && ( LYCharSet_UC[ target_cs ].like8859 & 128 ) == 0 ) ) && ( UCNeedNotTranslate( form_ptr->name_cs, target_cs ) & 255 ) == 0 && ( UCCanTranslateFromTo( form_ptr->name_cs, target_cs ) & 255 ) == 0 )
          {
            if ( ( UCCanTranslateFromTo( target_cs, form_ptr->name_cs ) & 255 ) != 0 )
            {
              target_cs = form_ptr->value_cs;
              target_csname = 0;
            }
            else
              target_cs = -1;
          }
          anchor_limit++;
          //anchor_ptr = &anchor_ptr;
        }
        else
        {
          if ( anchor_ptr->input_field->number <= form_number )
            continue;
        }
      }
      if ( anchor_limit != 0 )
      {
        my_data = calloc( anchor_limit, sizeof( PostData ) );
        if ( my_data == 0 )
          outofmem( "./GridText.c", "HText_SubmitForm" );
      }
      if ( target_csname == 0 && target_cs >= 0 )
      {
        if ( ( form_is_special & 1 ) != 0 )
          target_csname = LYCharSet_UC[ target_cs ].MIMEname;
        else
        if ( ( form_is_special & 2 ) != 0 )
          target_csname = LYCharSet_UC[ target_cs ].MIMEname;
        else
          target_csname = "us-ascii";
      }
      if ( submit_item->submit_method == 1 && Boundary == 0 )
      {
        char *temp = 0;
        HTSACopy( &temp, submit_item->submit_action );
        strtok( temp, "#" );
        strtok( temp, "?" );
        HTSACat( &temp, "?" );
        HTSABCat0( &my_query, temp );
      }
      if ( SemiColon == 1 )
      {
        HTSACopy( &content_type_out, "application/sgml-form-urlencoded" );
      }
      if ( PlainText == 1 )
      {
        HTSACopy( &content_type_out, "text/plain" );
      }
      if ( Boundary != 0 )
        HTSACopy( &content_type_out, "multipart/form-data" );
      else
        HTSACopy( &content_type_out, "application/x-www-form-urlencoded" );
      if ( have_accept_cs != 0 || ( form_is_special & 1 ) != 0 || ( form_is_special & 2 ) != 0 )
      {
        if ( target_cs >= 0 && target_csname != 0 )
        {
          if ( Boundary == 0 && ( ( HTMainText->node_anchor->charset != 0 && ( strcmp( HTMainText->node_anchor->charset, "iso-8859-1" ) != 0 || strcmp( target_csname, "iso-8859-1" ) != 0 ) ) || ( HTMainText->node_anchor->charset == 0 && target_cs != UCLYhndl_for_unspec ) ) )
          {
            HTSprintf( &content_type_out, "; charset=%s", target_csname );
          }
        }
        else
          cannot_transcode( &had_chartrans_warning, target_csname );
      }
      out_csname = target_csname;
      anchor_ptr = HTMainText->first_anchor;
      for ( ; anchor_ptr == 0; anchor_ptr = &anchor_ptr )
      {
        if ( anchor_ptr->link_type == 2 )
        {
          if ( anchor_ptr->input_field->number == form_number && anchor_ptr->input_field->disabled == 0 )
          {
            FormInfo *form_ptr = anchor_ptr->input_field;
            int out_cs;
            QuoteData quoting = PlainText == 0 ? Boundary == 0 ? QUOTE_SPECIAL : QUOTE_MULTI : NO_QUOTE;
            if ( form_ptr->type != 9 )
              textarea_lineno = 0;
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), "SubmitForm[%d/%d]: ", anchor_count + 1, anchor_limit );
            }
            name_used = form_ptr->name == 0 ? "" : form_ptr->name;
            switch ( form_ptr->type )
            {
            case 6:
              if ( ( WWW_TraceFlag & 255 ) != 0 )
              {
                fprintf( TraceFP( ), "reset\n" );
              }
              break;
            case 11:
              val_used = form_ptr->value == 0 ? "" : form_ptr->value;
              if ( ( WWW_TraceFlag & 255 ) != 0 )
              {
                fprintf( TraceFP( ), "I will submit %s (from %s)\n", val_used, name_used );
              }
              break;
            case 5:
            case 12:
            case 13:
              if ( form_ptr->name == 0 || ( form_ptr->name[0] & 255 ) == 0 || strcmp( form_ptr->name, link_name ) != 0 )
              {
                if ( ( WWW_TraceFlag & 255 ) != 0 )
                {
                  fprintf( TraceFP( ), "skipping submit field with " );
                }
                if ( ( WWW_TraceFlag & 255 ) != 0 )
                {
                  fprintf( TraceFP( ), "name \"%s\" for link_name \"%s\", %s.\n", form_ptr->name == 0 ? "???" : form_ptr->name, link_name == 0 ? "???" : link_name, form_ptr->name == 0 || ( form_ptr->name[0] & 255 ) == 0 ? "no field name" : "not current link" );
                }
              }
              else
              {
                if ( form_ptr->type != 12 && ( form_ptr->value == 0 || ( form_ptr->value[0] & 255 ) == 0 || strcmp( form_ptr->value, link_value ) != 0 ) )
                {
                  if ( ( WWW_TraceFlag & 255 ) != 0 )
                  {
                    fprintf( TraceFP( ), "skipping submit field with " );
                  }
                  if ( ( WWW_TraceFlag & 255 ) != 0 )
                  {
                    fprintf( TraceFP( ), "name \"%s\" for link_name \"%s\", %s!\n", form_ptr->name == 0 ? "???" : form_ptr->name, link_name == 0 ? "???" : link_name, "values are different" );
                  }
                }
                else
              }
            default:
              if ( form_ptr->cp_submit_value != 0 )
                val_used = form_ptr->cp_submit_value;
              else
                val_used = form_ptr->value;
              if ( check_form_specialchars( val_used ) != 0 )
              {
                HTSACopy( &copied_val_used, val_used );
                success = LYUCTranslateBackFormData( &copied_val_used, form_ptr->value_cs, target_cs, PlainText );
                if ( ( WWW_TraceFlag & 255 ) != 0 )
                {
                  fprintf( TraceFP( ), "field \"%s\" %d %s -&gt; %d %s %s\n", form_ptr->name == 0 ? "" : form_ptr->name, form_ptr->value_cs, form_ptr->value_cs < 0 ? "???" : LYCharSet_UC[ form_ptr->value_cs ].MIMEname, target_cs, target_csname == 0 ? "???" : target_csname, success == 0 ? "FAILED" : "OK" );
                }
                if ( success != 0 )
                  val_used = copied_val_used;
              }
              else
              {
                if ( ( WWW_TraceFlag & 255 ) != 0 )
                {
                  fprintf( TraceFP( ), "field \"%s\" %d %s OK\n", form_ptr->name == 0 ? "" : form_ptr->name, target_cs, target_csname == 0 ? "???" : target_csname );
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
              if ( Boundary != 0 )
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
                if ( strcmp( out_csname, "iso-8859-1" ) != 0 )
                  HTSprintf( &MultipartContentType, "; charset=%s", out_csname );
              }
              if ( form_ptr->type == 9 )
              {
                textarea_lineno++;
                if ( textarea_lineno > 1 && last_textarea_name != 0 && form_ptr->name != 0 && strcmp( last_textarea_name, form_ptr->name ) == 0 )
                {
                  skip_field = 0;
                  my_data[ anchor_count ].first = 1;
                  my_data[ anchor_count ].type = form_ptr->type;
                  switch ( form_ptr->type )
                  {
                  case 0:
                  case 6:
                  case 10:
                    skip_field = 1;
                    if ( skip_field == 0 )
                    {
                      HTSACopy( &my_data[ anchor_count ].name, name_used );
                      HTSACopy( &my_data[ anchor_count ].value, val_used );
                      if ( my_data[ anchor_count ].data == 0 )
                        HTSABCat0( &my_data[ anchor_count ].data, val_used );
                      my_data[ anchor_count ].quote = quoting;
                      if ( quoting == QUOTE_MULTI && check_if_base64_needed( submit_item->submit_method, my_data[ anchor_count ].data ) != 0 )
                      {
                        if ( ( WWW_TraceFlag & 255 ) != 0 )
                        {
                          fprintf( TraceFP( ), "will encode as base64\n" );
                        }
                        my_data[ anchor_count ].quote = QUOTE_BASE64;
                        escaped2 = convert_to_base64( my_data[ anchor_count ].data == 0 ? 0 : my_data[ anchor_count ].data->str, my_data[ anchor_count ].data == 0 ? 0 : my_data[ anchor_count ].data->len );
                        HTSABCopy0( &my_data[ anchor_count ].data, escaped2 );
                        if ( escaped2 != 0 )
                        {
                          free( escaped2 );
                          escaped2 = 0;
                        }
                      }
                    }
                    anchor_count++;
                    if ( copied_name_used != 0 )
                    {
                      free( copied_name_used );
                      copied_name_used = 0;
                    }
                    if ( copied_val_used != 0 )
                    {
                      free( copied_val_used );
                      copied_val_used = 0;
                      //anchor_ptr = &anchor_ptr;
                    }
                    break;
                  case 11:
                    load_a_file( val_used, &my_data[ anchor_count ]->data );
                    break;
                  case 5:
                  case 12:
                  case 13:
                    if ( form_ptr->name == 0 || ( form_ptr->name[0] & 255 ) == 0 || strcmp( form_ptr->name, link_name ) != 0 || ( form_ptr->type != 12 && ( form_ptr->value == 0 || ( form_ptr->value[0] & 255 ) == 0 || strcmp( form_ptr->value, link_value ) != 0 ) ) )
                      skip_field = 1;
                    break;
                  case 3:
                  case 4:
                    if ( form_ptr->num_value == 0 )
                      skip_field = 1;
                    break;
                  case 9:
                    if ( last_textarea_name == 0 || strcmp( last_textarea_name, form_ptr->name ) != 0 )
                    {
                      textarea_lineno = 1;
                      last_textarea_name = form_ptr->name;
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
              if ( check_form_specialchars( name_used ) != 0 )
              {
                HTSACopy( &copied_name_used, name_used );
                success = LYUCTranslateBackFormData( &copied_name_used, form_ptr->name_cs, target_cs, PlainText );
                if ( ( WWW_TraceFlag & 255 ) != 0 )
                {
                  fprintf( TraceFP( ), "name \"%s\" %d %s -&gt; %d %s %s\n", form_ptr->name == 0 ? "" : form_ptr->name, form_ptr->name_cs, form_ptr->name_cs < 0 ? "???" : LYCharSet_UC[ form_ptr->name_cs ].MIMEname, target_cs, target_csname == 0 ? "???" : target_csname, success == 0 ? "FAILED" : "OK" );
                }
                if ( success != 0 )
                  name_used = copied_name_used;
                if ( Boundary != 0 )
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
                if ( ( WWW_TraceFlag & 255 ) != 0 )
                {
                  fprintf( TraceFP( ), "name \"%s\" %d %s OK\n", form_ptr->name == 0 ? "" : form_ptr->name, target_cs, target_csname == 0 ? "???" : target_csname );
                }
                success = 1;
                if ( Boundary != 0 )
                  HTSACopy( &copied_name_used, name_used );
              }
              if ( success == 0 )
                cannot_transcode( &had_chartrans_warning, target_csname );
              if ( Boundary != 0 )
              {
                HTMake822Word( &copied_name_used, 0 );
                name_used = copied_name_used;
              }
              break;
            case 0:
            case 10:
              if ( ( WWW_TraceFlag & 255 ) != 0 )
              {
                fprintf( TraceFP( ), "What type is %d?\n", form_ptr->type );
              }
              break;
            }
          }
          else
          {
            if ( anchor_ptr->input_field->number <= form_number )
              continue;
          }
        }
        if ( copied_name_used != 0 )
        {
          free( copied_name_used );
          copied_name_used = 0;
        }
        if ( my_data != 0 )
        {
          BOOLEAN first_one = 1;
          if ( content_type_out != 0 && Boundary != 0 )
          {
            Boundary = 0;
            HTSACopy( &Boundary, "LYNX" );
            anchor_count = 0;
            for ( ; anchor_count < anchor_limit; anchor_count++ )
            {
              if ( my_data[ anchor_count ].data != 0 )
                UpdateBoundary( &Boundary, my_data[ anchor_count ].data );
              //anchor_count++;
            }
            HTSprintf( &content_type_out, "; boundary=%s", Boundary );
          }
          anchor_count = 0;
          for ( ; anchor_count < anchor_limit; anchor_count++ )
          {
            if ( my_data[ anchor_count ].name != 0 && my_data[ anchor_count ].value != 0 )
            {
              if ( ( WWW_TraceFlag & 255 ) != 0 )
              {
                fprintf( TraceFP( ), "processing [%d:%d] name=%s(first:%d, value=%s, data=%p)\n", anchor_count + 1, anchor_limit, my_data[ anchor_count ].name == 0 ? "" : my_data[ anchor_count ].name, my_data[ anchor_count ].first, my_data[ anchor_count ].value == 0 ? "" : my_data[ anchor_count ].value, my_data[ anchor_count ].data );
              }
              if ( ( my_data[ anchor_count ].first & 255 ) != 0 )
              {
                if ( first_one != 0 )
                {
                  if ( Boundary != 0 )
                    HTBprintf( &my_query, "--%s\r\n", Boundary );
                  first_one = 0;
                }
                else
                {
                  if ( PlainText != 0 )
                    HTSABCat0( &my_query, "\n" );
                  else
                  if ( SemiColon == 0 )
                  {
                    if ( Boundary != 0 )
                      HTBprintf( &my_query, "\r\n--%s\r\n", Boundary );
                    else
                      HTSABCat0( &my_query, "&" );
                  }
                  HTSABCat0( &my_query, ";" );
                  HTBprintf( &my_query, "\r\n--%s\r\n", Boundary );
                }
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
                HTBprintf( &my_query, "%s%s%s%s%s", escaped1, Boundary == 0 ? "=" : "", PlainText == 0 ? "" : "\n", escaped2, PlainText == 0 || ( escaped2[0] & 255 ) == 0 ? "" : "\n" );
                break;
              case 3:
              case 4:
                escaped1 = escape_or_quote_name( my_data[ anchor_count ].name, my_data[ anchor_count ].quote, MultipartContentType );
                escaped2 = escape_or_quote_value( val_used, my_data[ anchor_count ].quote );
                HTBprintf( &my_query, "%s%s%s%s%s", escaped1, Boundary == 0 ? "=" : "", PlainText == 0 ? "" : "\n", escaped2, PlainText == 0 || ( escaped2[0] & 255 ) == 0 ? "" : "\n" );
                break;
              case 5:
              case 12:
              case 13:
                escaped1 = escape_or_quote_name( my_data[ anchor_count ].name, my_data[ anchor_count ].quote, MultipartContentType );
                escaped2 = escape_or_quote_value( val_used, my_data[ anchor_count ].quote );
                if ( my_data[ anchor_count ].type == 13 )
                {
                  if ( Boundary != 0 )
                  {
                    *(char*)(strchr( escaped1, 61 ) + 1) = 0;
                    HTBprintf( &my_query, "%s\"%s.x\"\r\n\r\n0\r\n--%s\r\n%s\"%s.y\"\r\n\r\n0", escaped1, my_data[ anchor_count ].name, Boundary, escaped1, my_data[ anchor_count ].name );
                  }
                  HTBprintf( &my_query, "%s.x=0%s%s.y=0%s", escaped1, PlainText == 0 ? SemiColon == 0 ? "&" : ";" : "\n", escaped1, PlainText == 0 || ( escaped1[0] & 255 ) == 0 ? "" : "\n" );
                }
                else
                {
                  HTBprintf( &my_query, "%s%s%s%s%s", escaped1, Boundary == 0 ? "=" : "", PlainText == 0 ? "" : "\n", escaped2, PlainText == 0 || ( escaped2[0] & 255 ) == 0 ? "" : "\n" );
                }
                break;
              case 9:
                escaped2 = escape_or_quote_value( val_used, my_data[ anchor_count ].quote );
                if ( ( my_data[ anchor_count ].first & 255 ) != 0 )
                {
                  textarea_lineno = 1;
                  if ( PlainText != 0 )
                  {
                    if ( previous_blanks != 0 )
                    {
                      free( previous_blanks );
                      previous_blanks = 0;
                    }
                  }
                  else
                  if ( Boundary != 0 )
                    HTSACopy( &previous_blanks, "\r\n" );
                  else
                    HTSACopy( &previous_blanks, "%0d%0a" );
                  escaped1 = escape_or_quote_name( name_used, my_data[ anchor_count ].quote, MultipartContentType );
                  HTBprintf( &my_query, "%s%s%s%s%s", escaped1, Boundary == 0 ? "=" : "", PlainText == 0 ? "" : "\n", escaped2, PlainText == 0 || ( escaped2[0] & 255 ) == 0 ? "" : "\n" );
                }
                else
                {
                  char *marker = PlainText == 0 ? Boundary == 0 ? "%0d%0a" : "\r\n" : "\n";
                  if ( ( escaped2[0] & 255 ) != 0 )
                  {
                    if ( previous_blanks != 0 )
                    {
                      HTSABCat0( &my_query, previous_blanks );
                      if ( previous_blanks != 0 )
                      {
                        free( previous_blanks );
                        previous_blanks = 0;
                      }
                    }
                    HTSABCat0( &my_query, escaped2 );
                    if ( PlainText != 0 || Boundary != 0 )
                    {
                      HTSABCat0( &my_query, marker );
                    }
                    HTSACopy( &previous_blanks, marker );
                  }
                  else
                  {
                    HTSACat( &previous_blanks, marker );
                  }
                }
                break;
              case 11:
                if ( PlainText != 0 )
                  HTSACopy( &escaped1, my_data[ anchor_count ].name );
                else
                if ( Boundary == 0 )
                {
                  escaped1 = HTEscapeSP( my_data[ anchor_count ].name, 1 );
                  HTBprintf( &my_query, "%s%s%s", escaped1, Boundary == 0 ? "=" : "", PlainText == 0 ? "" : "\n" );
                  if ( my_data[ anchor_count ].data != 0 && my_data[ anchor_count ].data->len > 1 )
                  {
                    HTSABCat( &my_query, my_data[ anchor_count ].data == 0 ? 0 : my_data[ anchor_count ].data->str, my_data[ anchor_count ].data == 0 ? -1 : my_data[ anchor_count ].data->len - 1 );
                    if ( PlainText != 0 )
                      HTBprintf( &my_query, "\n" );
                    else
                  }
                  else
                }
              {
                char *t = guess_content_type( val_used );
                char *copied_fname = 0;
                HTSACopy( &escaped1, "Content-Disposition: form-data" );
                HTSprintf( &escaped1, "; name=\"%s\"", my_data[ anchor_count ].name );
                HTSACopy( &copied_fname, val_used );
                HTMake822Word( &copied_fname, 0 );
                HTSprintf( &escaped1, "; filename=\"%s\"", copied_fname );
                if ( copied_fname != 0 )
                {
                  free( copied_fname );
                  copied_fname = 0;
                }
                HTSprintf( &escaped1, "\r\nContent-Type: %s", t );
                if ( my_data[ anchor_count ].quote == QUOTE_BASE64 )
                  HTSACat( &escaped1, "\r\nContent-Transfer-Encoding: base64" );
                HTSACat( &escaped1, "\r\n\r\n" );
              }
              case 0:
              case 6:
              case 10:
                if ( escaped1 != 0 )
                {
                  free( escaped1 );
                  escaped1 = 0;
                }
                if ( escaped2 != 0 )
                {
                  free( escaped2 );
                  escaped2 = 0;
                }
                break;
              }
            }
            //anchor_count++;
          }
          if ( Boundary != 0 )
            HTBprintf( &my_query, "\r\n--%s--\r\n", Boundary );
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), "Query %d{", my_query == 0 ? 0 : my_query->len );
            }
            trace_bstring( my_query );
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), "}\n" );
            }
          }
        }
        if ( submit_item->submit_method == 3 )
        {
          HTUserMsg2( gettext( "Submitting %s" ), submit_item->submit_action );
          HTSABCat( &my_query, "", 1 );
          mailform( &submit_item->submit_action[7], submit_item->submit_title == 0 || ( submit_item->submit_title[0] & 255 ) == 0 ? HText_getTitle( ) == 0 ? "" : HText_getTitle( ) : submit_item->submit_title, my_query == 0 ? 0 : my_query->str, content_type_out );
          result = 0;
          HTSABFree( &my_query );
          if ( content_type_out != 0 )
          {
            free( content_type_out );
            content_type_out = 0;
          }
        }
        else
        {
          mustshow = 1;
          statusline( gettext( "Submitting form..." ) );
          if ( submit_item->submit_method == 2 || Boundary != 0 )
          {
            LYFreePostData( doc );
            doc->post_data = my_query;
            doc->post_content_type = content_type_out;
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), "GridText - post_data set:\n%s\n", content_type_out );
              HTSACopy( &doc->address, submit_item->submit_action );
            }
            else
            {
              HTSACopy( &doc->address, submit_item->submit_action );
            }
          }
          else
          {
            HTSABCat( &my_query, "", 1 );
            HTSACopy( &doc->address, my_query == 0 ? 0 : my_query->str );
            LYFreePostData( doc );
            if ( content_type_out != 0 )
            {
              free( content_type_out );
              content_type_out = 0;
            }
            result = 1;
          }
        }
        if ( MultipartContentType != 0 )
        {
          free( MultipartContentType );
          MultipartContentType = 0;
        }
        if ( previous_blanks != 0 )
        {
          free( previous_blanks );
          previous_blanks = 0;
        }
        if ( Boundary != 0 )
        {
          free( Boundary );
          Boundary = 0;
        }
        if ( my_data != 0 )
        {
          anchor_count = 0;
          for ( ; anchor_count < anchor_limit; anchor_count++ )
          {
            if ( my_data != 0 )
            {
              free( my_data );
              my_data = 0;
              return result;
            }
          }
        }
      }
    }
  }
}
void HText_DisableCurrentForm( void )
{
  TextAnchor *anchor_ptr;
  HTFormDisabled = 1;
  if ( HTMainText != 0 )
  {
    anchor_ptr = HTMainText->first_anchor;
    for ( ; anchor_ptr != 0; anchor_ptr = &anchor_ptr )
    {
      if ( anchor_ptr->link_type == 2 && anchor_ptr->input_field->number == HTFormNumber )
        anchor_ptr->input_field->disabled = 1;
      //anchor_ptr = &anchor_ptr;
    }
  }
  return;
}
void HText_ResetForm( FormInfo *form )
{
  TextAnchor *anchor_ptr;
  mustshow = 1;
  statusline( gettext( "Resetting form..." ) );
  if ( HTMainText != 0 )
  {
    anchor_ptr = HTMainText->first_anchor;
    for ( ; anchor_ptr == 0; anchor_ptr = &anchor_ptr )
    {
      if ( anchor_ptr->link_type == 2 )
      {
        if ( anchor_ptr->input_field->number == form->number )
        {
          if ( anchor_ptr->input_field->type == 4 || anchor_ptr->input_field->type == 3 )
          {
            if ( anchor_ptr->input_field->orig_value[0] == '0' )
              anchor_ptr->input_field->num_value = 0;
              //anchor_ptr = &anchor_ptr;
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
            HTSACopy( &anchor_ptr->input_field->value, anchor_ptr->input_field->orig_value );
        }
        else
        if ( form->number < anchor_ptr->input_field->number )
          break;
      }
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
    anchor_ptr = text->first_anchor;
    for ( ; anchor_ptr != 0; anchor_ptr = &anchor_ptr )
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
          if ( strcmp( anchor_ptr->input_field->value, anchor_ptr->input_field->orig_value ) != 0 )
          {
            break;
          }
          else
          {
            if ( strcmp( anchor_ptr->input_field->cp_submit_value, anchor_ptr->input_field->orig_submit_value ) != 0 )
            {
              break;
            }
          }
        }
        else
        {
          if ( strcmp( anchor_ptr->input_field->value, anchor_ptr->input_field->orig_value ) != 0 )
          {
            break;
          }
        }
      }
      //anchor_ptr = &anchor_ptr;
    }
  }
  return 1;
}
void HText_activateRadioButton( FormInfo *form )
{
  TextAnchor *anchor_ptr;
  int form_number = form->number;
  if ( HTMainText != 0 )
  {
    anchor_ptr = HTMainText->first_anchor;
    for ( ; anchor_ptr != 0; anchor_ptr = &anchor_ptr )
    {
      if ( anchor_ptr->link_type == 2 && anchor_ptr->input_field->type == 4 )
      {
        if ( anchor_ptr->input_field->number == form_number )
        {
          if ( strcmp( anchor_ptr->input_field->name, form->name ) == 0 && anchor_ptr->input_field->num_value != 0 )
          {
            anchor_ptr->input_field->num_value = 0;
            break;
          }
        }
        else
        if ( form_number < anchor_ptr->input_field->number )
          break;
      }
      //anchor_ptr = &anchor_ptr;
    }
    form->num_value = 1;
  }
  return;
}
char *stub_HTAnchor_address( HTAnchor *me )
{
  char *addr = 0;
  if ( me != 0 )
  {
    HTSACopy( &addr, me[0].parent->address );
  }
  return addr;
}
void HText_setToolbar( HText *text )
{
  if ( text != 0 )
  {
    text->toolbar = 1;
  }
  return;
}
BOOLEAN HText_hasToolbar( HText *text )
{
  return ( text == 0 || ( text->toolbar & 255 ) == 0 ? 0 : 1 );
}
void HText_setNoCache( HText *text )
{
  if ( text != 0 )
  {
    text->no_cache = 1;
  }
  return;
}
BOOLEAN HText_hasNoCacheSet( HText *text )
{
  return ( text == 0 || ( text->no_cache & 255 ) == 0 ? 0 : 1 );
}
BOOLEAN HText_hasUTF8OutputSet( HText *text )
{
  return ( text == 0 || ( text->T.output_utf8 & 255 ) == 0 ? 0 : 1 );
}
void HText_setKcode( HText *text, char *charset, LYUCcharset *p_in )
{
  BOOLEAN charset_explicit;
  if ( text != 0 && ( charset != 0 || p_in != 0 ) )
  {
    charset_explicit = charset != 0;
    if ( charset == 0 || ( charset[0] & 255 ) == 0 )
      charset = p_in->MIMEname;
    if ( charset != 0 && ( charset[0] & 255 ) != 0 )
    {
      if ( charset_explicit != 0 && ( strcmp( charset, "shift_jis" ) == 0 || strcmp( charset, "x-sjis" ) == 0 || strcmp( charset, "x-shift-jis" ) == 0 ) )
        text->kcode = SJIS;
      else
      if ( charset_explicit != 0 && strcmp( charset, "utf-8" ) != 0 && ( ( p_in != 0 && p_in->enc == 5 ) || strcmp( charset, "x-euc" ) == 0 || strcmp( charset, "euc-jp" ) == 0 || strncmp( charset, "x-euc-", 6 ) == 0 || strcmp( charset, "euc-kr" ) == 0 || strcmp( charset, "iso-2022-kr" ) == 0 || strcmp( charset, "big5" ) == 0 || strcmp( charset, "cn-big5" ) == 0 || strcmp( charset, "euc-cn" ) == 0 || strcmp( charset, "gb2312" ) == 0 || strncmp( charset, "cn-gb", 5 ) == 0 || strcmp( charset, "iso-2022-cn" ) == 0 ) )
        text->kcode = EUC;
      else
      {
        text->kcode = NOKANJI;
        if ( HTCJK != NOCJK && ( p_in == 0 || ( p_in->enc != 5 && p_in->enc != 7 ) ) )
          HTCJK = NOCJK;
      }
      if ( charset_explicit != 0 && strcmp( charset, "utf-8" ) != 0 )
      {
        text->specified_kcode = text->kcode;
      }
      else
      {
        if ( UCAssume_MIMEcharset != 0 )
        {
          if ( strcmp( UCAssume_MIMEcharset, "euc-jp" ) == 0 )
          {
            text->kcode = text->specified_kcode = EUC;
          }
          else
          {
            if ( strcmp( UCAssume_MIMEcharset, "shift_jis" ) == 0 )
            {
              text->kcode = text->specified_kcode = SJIS;
            }
          }
        }
      }
    }
  }
  return;
}
void HText_setBreakPoint( HText *text )
{
  if ( text != 0 )
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
  else
  {
    MTanc = HTMainText->node_anchor;
    if ( MTanc->address == 0 || anchor->address == 0 )
    {
    }
    else
    {
      if ( strchr( full_address, 35 ) == 0 )
      {
      }
      else
      {
        if ( strncasecomp( anchor->address, "LYNXIMGMAP:", 11 ) == 0 )
        {
        }
        else
        if ( anchor->isHEAD != MTanc->isHEAD )
        {
        }
        else
        {
          MTaddress = strncasecomp( MTanc->address, "LYNXIMGMAP:", 11 ) == 0 ? &MTanc->address[11] : MTanc->address;
          MTpound = trimPoundSelector( MTaddress );
          if ( strcmp( MTaddress, anchor->address ) != 0 )
          {
            if ( MTpound != 0 )
              MTpound[0] = '#';
          }
          else
          {
            if ( MTpound != 0 )
              MTpound[0] = '#';
            if ( MTanc->address == MTaddress )
            {
              if ( MTanc->post_data != 0 )
              {
                if ( anchor->post_data != 0 )
                {
                  if ( ( HTSABEql( MTanc->post_data, anchor->post_data ) & 255 ) == 0 )
                  {
                  }
                }
                else
                {
                }
              }
              else
              if ( anchor->post_data != 0 )
              {
              }
            }
          }
        }
      }
    }
  }
  return 1;
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
  if ( lx_val[0] != 0 )
  {
    nxt_anchor = st_anchor;
    for ( ; nxt_anchor != 0 && nxt_anchor->line_num == a->line_num; nxt_anchor = &nxt_anchor )
    {
      nxt_anchor->line_pos = lx_val[0] + nxt_anchor->line_pos;
      //nxt_anchor = &nxt_anchor;
    }
    fixup = lx_val;
    lx_val = 0;
    if ( st_anchor != 0 )
    {
      st_anchor = &st_anchor;
      while ( ( p & 255 ) != 0 )
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
            if ( ( t & 255 ) == 0 )
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
          if ( valid != 0 && n >= 1 )
          {
            val = atoi( p );
            if ( old_val == val || old_val == 0 )
            {
              if ( old_val != 0 )
                old_val++;
              val += incr;
              sprintf( s, "%d", val );
              new_n = strlen( s );
              s = &s[ new_n ];
              p = &p[ n ];
              new_n -= n;
              if ( new_n != 0 )
              {
                nxt_anchor = st_anchor;
                for ( ; nxt_anchor != 0 && nxt_anchor->line_num == a->line_num; nxt_anchor = &nxt_anchor )
                {
                  nxt_anchor->line_pos = new_n + nxt_anchor->line_pos;
                  //nxt_anchor = &nxt_anchor;
                }
                if ( st_anchor != 0 )
                  st_anchor = &st_anchor;
              }
            }
          }
          pre_n = strlen( p );
          post_n = strlen( &ht->next->data[0] );
          if ( plx == 0 || pre_n + post_n + 2 > 2047 )
            continue;
          else
          {
            strcpy( lx, p );
            strcat( lx, &ht->next->data[0] );
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
            if ( valid != 0 && n >= 1 && post_n + n + 2 <= 1023 )
            {
              val = atoi( lx );
              if ( old_val[0] == val || old_val[0] == 0 )
              {
                if ( old_val[0] != 0 )
                  old_val[0]++;
                val += incr;
                sprintf( lx, "%d", val );
                new_n = strlen( lx );
                strcat( lx, strchr( &ht->next->data[0], 93 ) );
                s = pre_n + strncpy( s, lx, pre_n );
                lx = &lx[ pre_n ];
                strcpy( &ht->next->data[0], lx );
                lx_val[0] = new_n - n;
                break;
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
      }
      s[0] = 0;
      n = strlen( &ht->data[0] );
      if ( mode == 1 )
        buf[ n ] = 0;
      else
      {
        if ( ht->size < strlen( buf ) )
        {
          HTLine *temp = ALLOC_IN_POOL( &HTMainText->pool, strlen( buf ) + 20 );
          if ( temp == 0 )
            outofmem( "./GridText.c", "increment_tagged_htline" );
          memcpy( temp, ht, 20 );
          temp->styles = ALLOC_IN_POOL( &HTMainText->pool, ht->numstyles << 2 );
          if ( temp->styles == 0 )
            outofmem( "./GridText.c", "increment_tagged_htline" );
          memcpy( temp->styles, ht->styles, ht->numstyles << 2 );
          &ht->prev = ht = temp;
          ht->next->prev = ht;
        }
      }
      strcpy( &ht->data[0], buf );
      if ( ( 0 ^ 0 ) != 0 )
      {
        __stack_chk_fail( );
      }
      return fixup + ( strlen( buf ) - n );
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
  htline = &HTMainText->last_line;
  i = 0;
  for ( ; anchor->line_num != i; i++ )
  {
    htline = &htline;
    if ( HTMainText->last_line == htline )
      break;
    else
    {
      //i++;
    }
  }
  l = ALLOC_IN_POOL( &HTMainText->pool, 1044 );
  a = ALLOC_IN_POOL( &HTMainText->pool, 52 );
  f = ALLOC_IN_POOL( &HTMainText->pool, 96 );
  if ( a == 0 || l == 0 || f == 0 )
    outofmem( "./GridText.c", "insert_new_textarea_anchor" );
  &a = &anchor;
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
  HTSACopy( &f->name, anchor->input_field->name );
  f->number = anchor->input_field->number;
  f->type = anchor->input_field->type;
  HTSACopy( &f->orig_value, "" );
  f->size = anchor->input_field->size;
  f->maxlength = anchor->input_field->maxlength;
  f->no_cache = anchor->input_field->no_cache;
  f->disabled = anchor->input_field->disabled;
  f->value_cs = current_char_set;
  &l = &htline;
  l->prev = htline;
  l->offset = htline->offset;
  l->size = htline->size;
  l->numstyles = htline->numstyles;
  l->styles = htline->styles;
  strcpy( &l->data[0], &htline->data[0] );
  htline->next->prev = l;
  &htline = l;
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
  &anchor = a;
  curr_anchor = a;
  exit_htline = &l;
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
  int hang_detect = 100000;
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "GridText: adjusting struct's to add %d new line(s)\n", newlines );
  }
  anchor = &start_anchor;
  for ( ; anchor == 0; anchor = &anchor )
  {
    if ( ( keypad_mode == 3 || keypad_mode == 2 ) && anchor->number != 0 )
      anchor->number += newlines;
    anchor->line_num += newlines;
    //anchor = &anchor;
  }
}
BOOLEAN IsFormsTextarea( FormInfo *form, TextAnchor *anchor_ptr )
{
  return ( anchor_ptr->link_type == 2 && anchor_ptr->input_field->type == 9 && anchor_ptr->input_field->number == form->number && strcmp( anchor_ptr->input_field->name, form->name ) == 0 ? 1 : 0 );
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
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "GridText: entered HText_ExtEditForm()\n" );
  }
  if ( stat64( ed_temp, &stat_info.st_dev ) >= 0 && ( stat_info.st_mode & 61440 ) == 32768 )
  {
    size = (unsigned int)(stat_info.st_size & 0xFFFFFFFF);
    if ( size != 0 )
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
      while ( size == 0 )
      {
        if ( ( LYtrimInputFields & 255 ) != 0 )
        {
          if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( ebuf[ size - 1 ] * 2 )) & 8192 ) == 0 )
          {
          }
          else
          {
            size--;
            ebuf[ size ] = 0;
          }
        }
        else
        {
          if ( ( ( ebuf[ size - 1 ] == 13 || ebuf[ size - 1 ] == 10 ? 1 : 0 ) & 255 ) != 0 )
            continue;
        }
        if ( ( ebuf[ size - 1 ] & 255 ) != 0 )
        {
          line = malloc( 1024 );
          if ( line == 0 )
            outofmem( "./GridText.c", "HText_ExtEditForm" );
          anchor_ptr = start_anchor;
          if ( anchor_ptr->input_field->size <= 4 || anchor_ptr->input_field->size > 1023 )
            wanted_fieldlen_wrap = 0;
          len = len_in = 0;
          lp = ebuf;
          for ( ; line_cnt <= orig_cnt || ( lp[0] & 255 ) != 0 || ( len != 0 && ( lp[0] & 255 ) == 0 ); line_cnt++ )
          {
            if ( skip_at != 0 )
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
            cp = strchr( lp, 10 );
            if ( cp != 0 )
            {
              len = len_in = cp - lp;
            }
            else
            {
              len = len_in = strlen( lp );
            }
            if ( wanted_fieldlen_wrap < 0 && wrapalert == 0 && start_anchor->input_field->size <= len0 + len )
            {
              cp = strchr( lp, 32 );
              if ( cp != 0 && cp - lp < start_anchor->input_field->size - 1 )
              {
                LYFixCursesOn( "ask for confirmation:" );
                LYerase( );
                if ( HTConfirmDefault( gettext( "Wrap lines to fit displayed area?" ), 0 ) != 0 )
                  wanted_fieldlen_wrap = start_anchor->input_field->size - 1;
                else
                  wanted_fieldlen_wrap = 0;
              }
            }
            if ( wanted_fieldlen_wrap >= 1 && wanted_fieldlen_wrap < len0 + len )
            {
              i = wanted_fieldlen_wrap - len0;
              for ( ; wanted_fieldlen_wrap / 4 <= len0 + i; i-- )
              {
                if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( lp[ i ] * 2 )) & 8192 ) != 0 )
                {
                  len = i + 1;
                  cp = &lp[ i ];
                  if ( cp[1] != 10 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[1] * 2 )) & 8192 ) != 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[2] * 2 )) & 8192 ) == 0 )
                  {
                    len++;
                    cp++;
                  }
                  if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[1] * 2 )) & 8192 ) == 0 )
                  {
                    for ( ; ( cp[0] & 255 ) != 0 && cp[0] != 13 && cp[0] != 10 && cp - lp <= len + ( ( wanted_fieldlen_wrap * 3 ) / 4 ); cp++ )
                    {
                      //cp++;
                    }
                    if ( cp[0] == 13 && cp[1] == 10 )
                      cp++;
                    if ( cp[0] == 10 && ( cp[1] == 13 || cp[1] == 10 || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[1] * 2 )) & 8192 ) == 0 ) )
                    {
                      cp[0] = ' ';
                      for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[ -1 ] * 2 )) & 8192 ) != 0; cp = &cp[ -1 ] )
                      {
                        skip_num++;
                        //cp = &cp[ -1 ];
                      }
                      skip_at = cp;
                      break;
                    }
                  }
                }
                else
                {
                  //i--;
                }
              }
            }
            if ( wanted_fieldlen_wrap >= 1 && wanted_fieldlen_wrap < len0 + len )
            {
              i = len - 1;
              for ( ; wanted_fieldlen_wrap < len0 + i + 1 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( lp[ i ] * 2 )) & 8192 ) != 0; i-- )
              {
                //i--;
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
              for ( ; i >= 1; i-- )
              {
                if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( lp[ i ] * 2 )) & 8192 ) != 0 )
                {
                  len = i;
                  break;
                }
                else
                {
                  //i--;
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
            if ( len0 + len >= 1 )
              exit_line = 0;
            else
            if ( exit_line == 0 )
              exit_line = anchor_ptr->line_num;
            lp = &lp[ len ];
            if ( ( lp[0] & 255 ) != 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( lp[0] * 2 )) & 8192 ) != 0 )
              lp++;
            end_anchor = anchor_ptr;
            anchor_ptr = &anchor_ptr;
            if ( anchor_ptr != 0 )
              match_tag = anchor_ptr->number;
            //line_cnt++;
          }
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "GridText: edited text inserted into lynx struct's\n" );
          }
          if ( newlines >= 1 )
            update_subsequent_anchors( newlines, end_anchor, htline, match_tag );
          if ( line != 0 )
          {
            free( line );
            line = 0;
          }
          if ( ebuf != 0 )
          {
            free( ebuf );
            ebuf = 0;
          }
          return exit_line - entry_line;
        }
      }
    }
  }
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
  FormInfo *form = form_link->l_form;
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "GridText: entered HText_ExtEditForm()\n" );
  }
  ed_temp = malloc( 256 );
  fp = LYOpenTemp( ed_temp, "", "w" );
  if ( fp == 0 )
  {
    if ( ed_temp != 0 )
    {
      free( ed_temp );
      ed_temp = 0;
    }
  }
  else
  {
    anchor_ptr = HTMainText->first_anchor;
    for ( ; anchor_ptr != 0; anchor_ptr = &anchor_ptr )
    {
      if ( ( IsFormsTextarea( form, anchor_ptr ) & 255 ) != 0 )
      {
        if ( firstanchor != 0 )
        {
          firstanchor = 0;
          start_anchor = anchor_ptr;
          start_line = anchor_ptr->line_num;
        }
        orig_cnt++;
        fputs( anchor_ptr->input_field->value, fp );
        fputc( 10, fp );
      }
      else
      if ( firstanchor == 0 )
        break;
      else
      {
        //anchor_ptr = &anchor_ptr;
      }
    }
    LYCloseTempFP( fp );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "GridText: TEXTAREA name=|%s| dumped to tempfile\n", form->name );
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "GridText: invoking editor (%s) on tempfile\n", editor );
    }
    ed_offset[0] = 0;
    if ( entry_line - start_line >= 1 && ( editor_can_position( ) & 255 ) != 0 )
      sprintf( ed_offset, "%d", ( entry_line - start_line ) + 1 );
    edit_temporary_file( ed_temp, ed_offset, 0 );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "GridText: returned from editor (%s)\n", editor );
    }
    if ( form->disabled != 0 )
      offset = 0;
    else
    {
      offset = finish_ExtEditForm( form_link, start_anchor, ed_temp, orig_cnt );
    }
    LYRemoveTemp( ed_temp );
    if ( ed_temp != 0 )
    {
      free( ed_temp );
      ed_temp = 0;
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "GridText: exiting HText_ExtEditForm()\n" );
    }
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return offset;
}
void HText_ExpandTextarea( LinkInfo *form_link, int newlines )
{
  TextAnchor *anchor_ptr;
  TextAnchor *end_anchor = 0;
  BOOLEAN firstanchor = 1;
  FormInfo *form = form_link->l_form;
  HTLine *htline = 0;
  int match_tag = 0;
  int i;
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "GridText: entered HText_ExpandTextarea()\n" );
  }
  if ( newlines >= 1 )
  {
    anchor_ptr = HTMainText->first_anchor;
    for ( ; anchor_ptr != 0; anchor_ptr = &anchor_ptr )
    {
      if ( ( IsFormsTextarea( form, anchor_ptr ) & 255 ) != 0 )
      {
        if ( firstanchor != 0 )
          firstanchor = 0;
        end_anchor = anchor_ptr;
      }
      else
      if ( firstanchor == 0 )
        break;
      //anchor_ptr = &anchor_ptr;
    }
    i = 1;
    for ( ; i <= newlines; i++ )
    {
      insert_new_textarea_anchor( &end_anchor, &htline );
      HTSACopy( &end_anchor->input_field->value, "" );
      if ( end_anchor->next != 0 )
        match_tag = end_anchor->next->number;
      //i++;
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "GridText: %d blank line(s) added to TEXTAREA name=|%s|\n", newlines, form->name );
    }
    update_subsequent_anchors( newlines, end_anchor, htline, match_tag );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "GridText: exiting HText_ExpandTextarea()\n" );
    }
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
  FormInfo *form = form_link->l_form;
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
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "GridText: entered HText_InsertFile()\n" );
  }
  fn = GetFileName( );
  if ( fn == 0 )
  {
    HTInfoMsg( gettext( "File insert cancelled!!!" ) );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "GridText: file insert cancelled - no filename provided\n" );
    }
    return 0;
  }
  else
  {
    if ( ( ( no_dotfiles & 255 ) != 0 || ( show_dotfiles & 255 ) == 0 ) && *(char*)(LYPathLeaf( fn )) == '.' )
    {
      HTUserMsg( gettext( "File name may not begin with a dot." ) );
      return 0;
    }
    if ( stat64( fn, &stat_info.st_dev ) >= 0 )
    {
      size = (unsigned int)(stat_info.st_size & 0xFFFFFFFF);
      if ( size != 0 )
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
        if ( fn != 0 )
        {
          free( fn );
          fn = 0;
        }
        fbuf[ size ] = 0;
        anchor_ptr = HTMainText->first_anchor;
        for ( ; anchor_ptr != 0 && ( ( IsFormsTextarea( form, anchor_ptr ) & 255 ) == 0 || anchor_ptr->line_num != entry_line ); anchor_ptr = &anchor_ptr )
        {
          prev_anchor = anchor_ptr;
          //anchor_ptr = &anchor_ptr;
        }
        htline = &HTMainText->last_line;
        i = 0;
        for ( ; anchor_ptr->line_num != i; i++ )
        {
          htline = &htline;
          if ( HTMainText->last_line == htline )
            break;
          else
          {
            //i++;
          }
        }
        l = ALLOC_IN_POOL( &HTMainText->pool, 1044 );
        a = ALLOC_IN_POOL( &HTMainText->pool, 52 );
        f = ALLOC_IN_POOL( &HTMainText->pool, 96 );
        if ( a == 0 || l == 0 || f == 0 )
          outofmem( "./GridText.c", "HText_InsertFile" );
        &a = anchor_ptr;
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
        HTSACopy( &f->name, anchor_ptr->input_field->name );
        f->number = anchor_ptr->input_field->number;
        f->type = anchor_ptr->input_field->type;
        HTSACopy( &f->orig_value, "" );
        f->size = anchor_ptr->input_field->size;
        f->maxlength = anchor_ptr->input_field->maxlength;
        f->no_cache = anchor_ptr->input_field->no_cache;
        f->disabled = anchor_ptr->input_field->disabled;
        f->value_cs = file_cs < 0 ? current_char_set : file_cs;
        l->offset = htline->offset;
        l->size = htline->size;
        l->numstyles = htline->numstyles;
        l->styles = htline->styles;
        strcpy( &l->data[0], &htline->data[0] );
        if ( HTMainText->first_anchor == anchor_ptr )
          HTMainText->first_anchor = a;
        if ( prev_anchor != 0 )
          &prev_anchor = a;
        htline = htline->prev;
        &l = &htline;
        l->prev = htline;
        htline->next->prev = l;
        htline = &htline = l;
        htline = &htline;
        anchor_ptr = a;
        newlines++;
        line = malloc( 1024 );
        if ( line == 0 )
          outofmem( "./GridText.c", "HText_InsertFile" );
        match_tag = anchor_ptr->number;
        len = 0;
        lp = fbuf;
        for ( ; ( lp & 255 ) != 0; anchor_ptr = &anchor_ptr )
        {
          cp = strchr( lp, 10 );
          if ( cp != 0 )
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
            if ( ( lp[ len ] & 255 ) != 0 )
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
          if ( ( lp[0] & 255 ) != 0 )
            lp++;
          firstanchor = 0;
          end_anchor = anchor_ptr;
          //anchor_ptr = &anchor_ptr;
        }
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "GridText: file inserted into lynx struct's\n" );
        }
        update_subsequent_anchors( newlines, end_anchor, htline, match_tag );
        if ( line != 0 )
        {
          free( line );
          line = 0;
        }
        if ( fbuf != 0 )
        {
          free( fbuf );
          fbuf = 0;
        }
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "GridText: exiting HText_InsertFile()\n" );
        }
        return newlines;
      }
    }
    HTInfoMsg( gettext( "Nothing to insert - file is 0-length." ) );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "GridText: file insert aborted - file=|%s|- was 0-length\n", fn );
    }
    if ( fn != 0 )
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
  int y = LYwin == 0 ? -1 : LYwin->_cury, x = LYwin == 0 ? -1 : LYwin->_curx;
  result = x;
  return result;
}
BOOLEAN DidWrap( int y0, int x0 )
{
  BOOLEAN result = 0;
  int y = LYwin == 0 ? -1 : LYwin->_cury, x = LYwin == 0 ? -1 : LYwin->_curx;
  if ( ( LYwideLines == 0 ? LYcols : 1014 ) <= x || ( x == 0 && y0 != y ) )
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
  int YP = LYwin == 0 ? -1 : LYwin->_cury, XP = LYwin == 0 ? -1 : LYwin->_curx;
  i = XP;
  buffer[0] = buffer[1] = buffer[2] = 0;
  data = str;
  end_of_data = &data[ len ];
  i++;
  while ( data < end_of_data )
  {
    buffer[0] = data[0];
    data++;
    tcols = GetColumn( );
    scols = StyleToCols( text, line, current_style );
    for ( ; current_style < line->numstyles && scols <= tcols; scols = StyleToCols( text, line, current_style ) )
    {
      curses_style( *(short*)(line->styles + ( current_style << 2 ) + 2), *(char*)(line->styles + ( current_style << 2 )) & 3 );
      current_style++;
      //scols = StyleToCols( text, line, current_style );
    }
    switch ( buffer[0] )
    {
    case 8:
      if ( ( dump_output_immediately & 255 ) != 0 )
        continue;
      else
      {
        waddch( LYwin, 43 );
        i++;
      }
      break;
    case 7:
      if ( ( data[0] & 255 ) != 0 || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( LastDisplayChar * 2 )) & 8192 ) != 0 || LastDisplayChar == '-' )
        continue;
      else
      {
        buffer[0] = '-';
        if ( ( text->T.output_utf8 & 255 ) != 0 && buffer[0] < 0 )
        {
          utf_extra = utf8_length( text->T.output_utf8, &data[ -1 ] );
          LastDisplayChar = 'M';
        }
        if ( utf_extra != 0 )
        {
          strncpy( &buffer[1], data, utf_extra );
          buffer[ utf_extra + 1 ] = 0;
          LYwaddnstr( LYwin, buffer, strlen( buffer ) );
          buffer[1] = 0;
          data = &data[ utf_extra ];
          utf_extra = 0;
        }
        else
        if ( HTCJK != NOCJK && buffer[0] < 0 )
        {
          if ( i <= ( LYwideLines == 0 ? LYcols : 1014 ) )
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
      break;
    default:
      break;
    }
  }
  for ( ; current_style < line->numstyles; current_style++ )
  {
    curses_style( *(short*)(line->styles + ( current_style << 2 ) + 2), *(char*)(line->styles + ( current_style << 2 )) & 3 );
    //current_style++;
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
  todr1 = HTMainText->next_line;
  while ( lines_back--, ( ( ( lines_back < 1 ) ^ 1 ) & 255 ) != 0 )
  {
    todr1 = todr1->prev;
  }
  row = links[ cur ].ly;
  if ( ( no_title & 255 ) != 0 )
    row--;
  count = 0;
  for ( ; row <= display_lines; count++ )
  {
    text = LYGetHiliteStr( cur, count );
    if ( text != 0 )
    {
      col = LYGetHilitePos( cur, count );
      LYmove( row, col );
      row++;
      redraw_part_of_line( todr1, text, strlen( text ), HTMainText );
      todr1 = &todr1;
      //count++;
    }
    else
      break;
  }
  return;
}
void HTMark_asSource( void )
{
  if ( HTMainText != 0 )
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
  return HTMainText == 0 ? -1 : HTAnchor_getUCLYhndl( HTMainText->node_anchor, 0 );
}
