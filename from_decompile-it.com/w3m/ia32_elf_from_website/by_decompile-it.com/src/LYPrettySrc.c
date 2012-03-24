#include "LYPrettySrc.c.h"
static int html_src_tag_index( char *tagname );
static void append_close_tag( char *tagname, HT_tagspec **head, HT_tagspec **tail );
static void append_open_tag( char *tagname, char *classname, HT_tagspec **head, HT_tagspec **tail );
static void failed_init( char *tag, int lexeme );
BOOLEAN psrc_convert_string;
BOOLEAN psrc_view;
BOOLEAN LYpsrc;
BOOLEAN sgml_in_psrc_was_initialized;
BOOLEAN psrc_nested_call;
BOOLEAN psrc_first_tag;
BOOLEAN mark_htext_as_source;
BOOLEAN psrcview_no_anchor_numbering;
static char *HTL_tagspecs_defaults[12] = { "span.htmlsrc_comment:!span", "span.htmlsrc_tag:!span", "span.htmlsrc_attrib:!span", "span.htmlsrc_attrval:!span", "span.htmlsrc_abracket:!span", "span.htmlsrc_entity:!span", "span.htmlsrc_href:!span", "span.htmlsrc_entire:!span", "span.htmlsrc_badseq:!span", "span.htmlsrc_badtag:!span", "span.htmlsrc_badattr:!span", "span.htmlsrc_sgmlspecial:!span",  };
char *HTL_tagspecs[12];
HT_tagspec *lexeme_start[12];
HT_tagspec *lexeme_end[12];
int tagname_transform = 2;
int attrname_transform = 2;
int html_src_tag_index( char *tagname )
{
  HTTag *tag = SGMLFindTag( &HTML_dtd, tagname );
  return tag == 0 || tag == HTTag_unrecognized.name ? -1 : ( ( tag - tags[0].name ) >> 3 ) * -1227133513;
}
void append_close_tag( char *tagname, HT_tagspec **head, HT_tagspec **tail )
{
  int idx = html_src_tag_index( tagname ), nattr;
  HTTag *tag = &tags[ idx ];
  HT_tagspec *subj;
  nattr = tag->number_of_attributes;
  if ( idx == -1 )
  {
    fprintf( *(int*)(135965404), "internal error: previous check didn't find bad HTML tag %s", tagname );
    exit_immediately( 1 );
  }
  subj = calloc( 1, sizeof( HT_tagspec ) );
  subj->element = idx;
  subj->present = calloc( nattr, sizeof( BOOLEAN ) );
  subj->value = calloc( nattr, sizeof( char* ) );
  subj->start = 0;
  subj->class_name = 0;
  if ( head[0] == 0 )
  {
    head[0] = subj;
    tail[0] = subj;
  }
  else
  {
    &tail[0] = subj;
    tail = subj;
  }
  return;
}
void append_open_tag( char *tagname, char *classname, HT_tagspec **head, HT_tagspec **tail )
{
  HT_tagspec *subj;
  HTTag *tag;
  int hcode;
  append_close_tag( tagname, head, tail );
  subj = tail;
  subj->start = 1;
  tag = &tags[ subj->element ];
  hcode = hash_code_lowercase_on_fly( tagname );
  if ( classname != 0 && ( classname[0] & 255 ) != 0 )
  {
    hcode = hash_code_aggregate_char( '.', hcode );
    hcode = hash_code_aggregate_lower_str( classname, hcode );
    HTSACopy( &subj->class_name, classname );
  }
  HTSACopy( &subj->class_name, "" );
  subj->style = hcode;
  return;
}
int html_src_parse_tagspec( char *ts, HTlexeme lexeme, BOOLEAN checkonly, BOOLEAN isstart )
{
  BOOLEAN stop = 0;
  BOOLEAN code = 0;
  char *p = ts;
  char *tagstart = 0;
  char *tagend = 0;
  char *classstart;
  char *classend;
  char save, save1;
  char after_excl = 0;
  html_src_check_state state = HTSRC_CK_normal;
  HT_tagspec *head = 0;
  HT_tagspec *tail = 0;
  HT_tagspec **slot = ( isstart == 0 ? lexeme_end[0] : lexeme_start[0] ) + ( lexeme << 2 );
  for ( ; stop == 0; p++ )
  {
    switch ( state )
    {
      break;
    default:
      switch ( p[0] )
      {
        if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 1024 ) == 0 && p[0] != '_' )
        {
          if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
          {
            fprintf( TraceFP( ), "no name starting at column %d:\n\t%s\n", p[1] - ts, ts );
          }
          stop = 1;
        }
        else
        {
          tagstart = p;
          for ( ; ( p[0] & 255 ) != 0 && ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 8 ) != 0 || p[0] == '_' ); p++ )
          {
            //p++;
          }
          tagend = p;
          p = &p[ -1 ];
          state = HTSRC_CK_after_tagname;
        }
        break;
      default:
        break;
      case 0:
        stop = 1;
        code = 1;
        break;
      case 33:
        if ( state == HTSRC_CK_seen_excl )
        {
          if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
          {
            fprintf( TraceFP( ), "second '!' at column %d:\n\t%s\n", p[1] - ts, ts );
          }
          stop = 1;
        }
        else
        {
          state = HTSRC_CK_seen_excl;
          after_excl = 1;
        }
        break;
      }
      //p++;
      break;
    case HTSRC_CK_after_tagname:
      switch ( p[0] )
      {
        if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
        {
          fprintf( TraceFP( ), "unexpected char '%c' after tagname at column %d:\n\t%s\n", p[0], p[1] - ts, ts );
        }
        stop = 1;
        break;
      default:
        break;
      case 0:
        stop = 1;
        code = 1;
        save = tagend[0];
        tagend[0] = 0;
        classstart = 0;
        if ( checkonly != 0 )
        {
          int idx = html_src_tag_index( tagstart );
          if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
          {
            fprintf( TraceFP( ), "tag index(%s) = %d\n", tagstart, idx );
          }
          tagend[0] = save;
          if ( idx == -1 )
            stop = 1;
        }
        else
        if ( after_excl != 0 )
          append_close_tag( tagstart, &head, &tail );
        else
          append_open_tag( tagstart, 0, &head, &tail );
        state = HTSRC_CK_normal;
        after_excl = 0;
        break;
      case 9:
      case 32:
        save = tagend[0];
        tagend[0] = 0;
        classstart = 0;
        break;
      case 46:
        if ( after_excl != 0 )
        {
          if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
          {
            fprintf( TraceFP( ), "dot after '!' at column %d:\n\t%s\n", p[1] - ts, ts );
          }
          stop = 1;
        }
        else
          state = HTSRC_CK_seen_dot;
        break;
      }
      break;
    case HTSRC_CK_seen_dot:
      if ( p[0] != 9 && p[0] != 32 )
      {
        if ( p[0] == 0 )
        {
          if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
          {
            fprintf( TraceFP( ), "expected text after dot at column %d:\n\t%s\n", p[1] - ts, ts );
          }
          stop = 1;
        }
        else
        {
          if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 1024 ) == 0 && p[0] != '_' )
          {
            if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
            {
              fprintf( TraceFP( ), "no name starting at column %d:\n\t%s\n", p[1] - ts, ts );
            }
            stop = 1;
          }
          else
          {
            classstart = p;
            for ( ; ( p[0] & 255 ) != 0 && ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 8 ) != 0 || p[0] == '_' ); p++ )
            {
              //p++;
            }
            classend = p;
            p = &p[ -1 ];
            save = classend[0];
            classend[0] = 0;
            save1 = tagend[0];
            tagend[0] = 0;
            if ( checkonly != 0 )
            {
              int idx = html_src_tag_index( tagstart );
              tagend[0] = save1;
              classend[0] = save;
              if ( idx == -1 )
              {
                return 0;
              }
            }
            else
              append_open_tag( tagstart, classstart, &head, &tail );
            state = HTSRC_CK_normal;
            after_excl = 0;
          }
        }
      }
      break;
    }
  }
  if ( code != 0 && checkonly == 0 )
    slot[0] = head;
  return code;
}
void html_src_clean_item( HTlexeme l )
{
  int i;
  if ( HTL_tagspecs[ l ] != 0 && HTL_tagspecs[ l ] != 0 )
  {
    free( HTL_tagspecs[ l ] );
    HTL_tagspecs[ l ] = 0;
  }
  i = 0;
  for ( ; i <= 1; i++ )
  {
    HT_tagspec *cur;
    HT_tagspec **pts = ( i == 0 ? lexeme_end[0] : lexeme_start[0] ) + ( l << 2 );
    HT_tagspec *ts = pts[0];
    pts[0] = 0;
    while ( ts != 0 )
    {
      if ( ts->present != 0 )
      {
        free( ts->present );
        ts->present = 0;
      }
      if ( ts->value != 0 )
      {
        free( ts->value );
        ts->value = 0;
      }
      if ( ( ts->start & 255 ) != 0 && ts->class_name != 0 )
      {
        free( ts->class_name );
        ts->class_name = 0;
      }
      cur = ts;
      ts = &ts;
      if ( cur == 0 )
        continue;
      else
      {
        free( cur );
        cur = 0;
      }
    }
    //i++;
  }
  return;
}
void html_src_clean_data( void )
{
  int i = 0;
  for ( ; i <= 11; i++ )
  {
    html_src_clean_item( i );
    //i++;
  }
  return;
}
void html_src_on_lynxcfg_reload( void )
{
  html_src_clean_data( );
  HTMLSRC_init_caches( 1 );
  return;
}
void failed_init( char *tag, int lexeme )
{
  fprintf( *(int*)(135965404), gettext( "parse-error while caching %s tagspec of lexeme %d\n" ), tag, lexeme );
  fprintf( *(int*)(135965404), gettext( "Use -trace -trace-mask=8 to see details in log.\n" ) );
  exit_immediately( 1 );
  return;
}
void HTMLSRC_init_caches( BOOLEAN dont_exit )
{
  int i;
  char *p;
  char buf[1000];
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
  {
    fprintf( TraceFP( ), "HTMLSRC_init_caches(%d tagspecs)\n", 12 );
  }
  i = 0;
  for ( ; i <= 11; i++ )
  {
    LYstrncpy( buf, HTL_tagspecs[ i ] == 0 ? HTL_tagspecs_defaults[ i ] : HTL_tagspecs[ i ], 999 );
    HTSACopy( &HTL_tagspecs[ i ], buf );
    if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
    {
      fprintf( TraceFP( ), "parsing lexeme %d: %s\n", i + 1, buf );
    }
    p = strchr( buf, 58 );
    if ( p != 0 )
      p = 0;
    if ( html_src_parse_tagspec( buf, i, 0, 1 ) == 0 && dont_exit == 0 )
      failed_init( "1st", i );
    if ( html_src_parse_tagspec( &p, i, 0, 0 ) == 0 && dont_exit == 0 )
      failed_init( "2nd", i );
    //i++;
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
