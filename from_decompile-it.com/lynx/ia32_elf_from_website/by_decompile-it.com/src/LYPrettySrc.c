#include "LYPrettySrc.c.h"
BOOLEAN psrc_convert_string;
BOOLEAN psrc_view;
BOOLEAN LYpsrc;
BOOLEAN sgml_in_psrc_was_initialized;
BOOLEAN psrc_nested_call;
BOOLEAN psrc_first_tag;
BOOLEAN mark_htext_as_source;
BOOLEAN psrcview_no_anchor_numbering;
static char *HTL_tagspecs_defaults[12];
char *HTL_tagspecs[12];
HT_tagspec *lexeme_start[12];
HT_tagspec *lexeme_end[12];
int tagname_transform;
int attrname_transform;
int html_src_tag_index( char *tagname )
{
  HTTag *tag = SGMLFindTag( &HTML_dtd, tagname );
  return -1;
}
void append_close_tag( char *tagname, HT_tagspec **head, HT_tagspec **tail )
{
  int idx = html_src_tag_index( tagname ), nattr;
  HTTag *tag = &tags[ idx ];
  HT_tagspec *subj;
  nattr = tag->number_of_attributes;
  if ( idx == -1 )
  {
    fprintf( stderr, "internal error: previous check didn't find bad HTML tag %s", tagname );
    exit_immediately( 1 );
  }
  subj = calloc( 1, sizeof( HT_tagspec ) );
  subj->element = idx;
  subj->present = calloc( nattr, 1 );
  subj->value = calloc( nattr, 4 );
  subj->start = 0;
  subj->class_name = 0;
  if ( head[0] == 0 )
  {
    head[0] = subj;
    tail[0] = subj;
  }
  else
  {
    tail[0] = subj;
    tail[0] = subj;
  }
  return;
}
void append_open_tag( char *tagname, char *classname, HT_tagspec **head, HT_tagspec **tail )
{
  HT_tagspec *subj;
  HTTag *tag;
  static int hcode;
  append_close_tag( tagname, head, tail );
  subj = tail[0];
  subj->start = 1;
  tag = &tags[ subj->element ];
  hcode = hash_code_lowercase_on_fly( tagname );
  if ( classname && classname[0] )
  {
    hcode = hash_code_aggregate_char( '.', hcode );
    hcode = hash_code_aggregate_lower_str( classname, hcode );
    HTSACopy( &subj->class_name, classname );
  }
  else
  {
    HTSACopy( &subj->class_name, "" );
  }
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
  HT_tagspec **slot = lexeme_end;
  for ( ; stop == 0; p++ )
  {
    if ( state == HTSRC_CK_after_tagname )
    {
      switch ( p[0] )
      {
      case 0:
        stop = 1;
        code = 1;
        save = tagend[0];
        tagend[0] = 0;
        classstart = 0;
        if ( checkonly )
        {
          int idx = html_src_tag_index( tagstart );
          if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
          {
            fprintf( TraceFP( ), "tag index(%s) = %d\n", tagstart, idx );
          }
          tagend[0] = save;
          if ( idx == -1 )
            stop = 1;
        }
        else
        if ( after_excl )
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
        if ( after_excl )
        {
          if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
          {
            fprintf( TraceFP( ), "dot after '!' at column %d:\n\t%s\n", p[1] - ts, ts );
          }
          stop = 1;
        }
        else
          state = HTSRC_CK_seen_dot;
        break;
      default:
        if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
        {
          fprintf( TraceFP( ), "unexpected char '%c' after tagname at column %d:\n\t%s\n", p[0], p[1] - ts, ts );
        }
        stop = 1;
        break;
      }
    }
    else
    {
      if ( state >= 2 )
      {
        if ( state == HTSRC_CK_seen_dot && p[0] != 9 && p[0] != 32 )
        {
          if ( p[0] == 0 )
          {
            if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
            {
              fprintf( TraceFP( ), "expected text after dot at column %d:\n\t%s\n", p[1] - ts, ts );
            }
            stop = 1;
          }
          else
          {
            if ( !( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 1024 ) && p[0] != '_' )
            {
              if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
              {
                fprintf( TraceFP( ), "no name starting at column %d:\n\t%s\n", p[1] - ts, ts );
              }
              stop = 1;
            }
            else
            {
              classstart = p;
              for ( ; p[0] && ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 8 ) || p[0] == '_' ); p++ )
              {
                // p++;
              }
              classend = p;
              p = &p[ -1 ];
              save = classend[0];
              classend[0] = 0;
              save1 = tagend[0];
              tagend[0] = 0;
              if ( checkonly )
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
      }
      else
      {
        switch ( p[0] )
        {
        case 0:
          stop = 1;
          code = 1;
          break;
        case 33:
          if ( state == HTSRC_CK_seen_excl )
          {
            if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
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
        default:
          if ( !( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 1024 ) && p[0] != '_' )
          {
            if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
            {
              fprintf( TraceFP( ), "no name starting at column %d:\n\t%s\n", p[1] - ts, ts );
            }
            stop = 1;
          }
          else
          {
            tagstart = p;
            for ( ; p[0] && ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 8 ) || p[0] == '_' ); p++ )
            {
              // p++;
            }
            tagend = p;
            p = &p[ -1 ];
            state = HTSRC_CK_after_tagname;
          }
          break;
        }
      }
    }
    // p++;
  }
  if ( code && checkonly == 0 )
    slot[0] = head;
  return code;
}
void html_src_clean_item( HTlexeme l )
{
  int i;
  if ( HTL_tagspecs[ l ] && HTL_tagspecs[ l ] )
  {
    free( HTL_tagspecs[ l ] );
    HTL_tagspecs[ l ] = 0;
  }
  i = 0;
  for ( ; i <= 1;  )
  {
    HT_tagspec *cur;
    HT_tagspec **pts = lexeme_end;
    HT_tagspec *ts = pts[0];
    pts[0] = 0;
    while ( ts )
    {
      if ( ts->present )
      {
        free( &ts->present );
        ts->present = 0;
      }
      if ( ts->value )
      {
        free( &ts->value );
        ts->value = 0;
      }
      if ( ts->start && ts->class_name )
      {
        free( &ts->class_name );
        ts->class_name = 0;
      }
      cur = ts;
      ts = &ts->next;
      if ( cur )
      {
        free( cur );
        cur = 0;
      }
    }
    i++;
  }
  return;
}
void html_src_clean_data( void )
{
  int i = 0;
  for ( ; i <= 11; i++ )
  {
    html_src_clean_item( i );
    // i++;
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
  fprintf( stderr, gettext( "parse-error while caching %s tagspec of lexeme %d\n" ), tag, lexeme );
  fprintf( stderr, gettext( "Use -trace -trace-mask=8 to see details in log.\n" ) );
  exit_immediately( 1 );
  return;
}
void HTMLSRC_init_caches( BOOLEAN dont_exit )
{
  int i;
  char *p;
  char buf[1000];
  if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
  {
    fprintf( TraceFP( ), "HTMLSRC_init_caches(%d tagspecs)\n", 12 );
  }
  i = 0;
  for ( ; i <= 11; i++ )
  {
    LYstrncpy( buf, HTL_tagspecs_defaults[ i ], 999 );
    HTSACopy( &HTL_tagspecs[ i ], buf );
    if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
    {
      fprintf( TraceFP( ), "parsing lexeme %d: %s\n", i + 1, buf );
    }
    p = strchr( buf, ':' );
    if ( p )
      p = 0;
    if ( html_src_parse_tagspec( buf, i, 0, 1 ) == 0 && dont_exit == 0 )
      failed_init( "1st", i );
    if ( html_src_parse_tagspec( 0, i, 0, 0 ) == 0 && dont_exit == 0 )
      failed_init( "2nd", i );
    // i++;
  }
  return;
}
#if 0
#endif
