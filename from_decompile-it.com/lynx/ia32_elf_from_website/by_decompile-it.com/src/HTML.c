#include "HTML.c.h"
static HTStyleSheet *styleSheet;
static HTStyle *styles[149];
static HTStyle *default_style;
char *LYToolbarName;
static char *Style_className;
static char *Style_className_end;
static unsigned int Style_className_len;
static int hcode;
HTStructuredClass HTMLPresentation;
BOOLEAN source_cache_file_error;
static HTStreamClass PassThruCache;
void strtolower( char *i )
{
  if ( i )
  {
    for ( ; i[0]; i++ )
    {
      i[0] = i[0];
      // i++;
    }
  }
  return;
}
void actually_set_style( HTStructured *me )
{
  if ( me->text == 0 )
  {
    LYGetChartransInfo( me );
    UCSetTransParams( &me->T, me->UCLYhndl, &me->UCI, HTAnchor_getUCLYhndl( &me->node_anchor, 3 ), HTAnchor_getUCInfoStage( &me->node_anchor, 3 ) );
    me->text = HText_new2( &me->node_anchor, &me->target->isa->name[0] );
    HText_beginAppend( &me->text );
    HText_setStyle( &me->text, &me->new_style );
    me->in_word = 0;
    LYCheckForContentBase( me );
  }
  else
  {
    HText_setStyle( &me->text, &me->new_style );
  }
  me->old_style = me->new_style;
  me->style_change = 0;
  return;
}
void change_paragraph_style( HTStructured *me, HTStyle *style )
{
  if ( me->new_style != style )
  {
    me->style_change = 1;
    me->new_style = style;
  }
  me->in_word = 0;
  return;
}
BOOLEAN LYBadHTML( HTStructured *me )
{
  if ( WWW_TraceFlag == 0 && me->inBadHTML == 0 )
  {
    HTUserMsg( gettext( "** Bad HTML!!  Use -trace to diagnose. **" ) );
    me->inBadHTML = 1;
  }
  return 1;
}
void HTML_put_character( HTStructured *me, char c )
{
  if ( LYMapsOnly == 0 || me->sp->tag_number == 79 )
  {
    if ( me->lastraw == 13 && c == '\n' )
    {
      *(int*)&me->lastraw = -1;
    }
    else
    {
      me->lastraw = c;
      if ( c == '\r' )
        c = '\n';
      switch ( me->sp->tag_number + -28 )
      {
      case 82:
        if ( c == 7 )
        {
          return;
        }
        if ( c != '\n' && c != '\t' && c != '\r' )
        {
          HTChunkPutc( &me->title, c );
        }
        else
        {
          HTChunkPutc( &me->title, ' ' );
        }
        break;
      case 70:
        HTChunkPutc( &me->style_block, c );
        break;
      case 62:
        HTChunkPutc( &me->script, c );
        break;
      case 51:
        HTChunkPutc( &me->object, c );
        break;
      case 77:
        HTChunkPutc( &me->textarea, c );
        break;
      case 53:
      case 63:
        HTChunkPutc( &me->option, c );
        break;
      case 45:
        HTChunkPutc( &me->math, c );
        break;
      default:
        if ( me->inSELECT && me->sp->tag_number )
        {
          HTChunkPutc( &me->option, c );
        }
        else
        {
          switch ( me->sp->tag_number )
          {
          case 'V':
            if ( c != '\r' && ( c != '\n' || !me->inLABEL || me->inP ) && ( c != '\n' || me->inPRE ) )
            {
              me->inP = 1;
              me->inLABEL = 0;
              HText_appendCharacter( &me->text, c );
            }
            me->inPRE = 1;
            break;
          case 'F':
          case 'U':
          case 'u':
            if ( c != '\r' )
            {
              me->inP = 1;
              me->inLABEL = 0;
              HText_appendCharacter( &me->text, c );
            }
            break;
          default:
            if ( me->sp->_stack_element == 37 )
            {
              if ( c != '\r' && ( c != '\n' || !me->inLABEL || me->inP ) && ( c != '\n' || me->inPRE ) )
              {
                me->inP = 1;
                me->inLABEL = 0;
                HText_appendCharacter( &me->text, c );
              }
              me->inPRE = 1;
            }
            else
            {
              if ( me->sp->_stack_element == 38 || me->sp->_stack_element == 36 )
              {
                if ( c != '\r' )
                {
                  me->inP = 1;
                  me->inLABEL = 0;
                  HText_appendCharacter( &me->text, c );
                }
              }
              else
              {
                if ( me->style_change )
                {
                  if ( c == '\n' || c == ' ' )
                  {
                    return;
                  }
                  if ( me->style_change )
                    actually_set_style( me );
                }
                if ( c == '\n' )
                {
                  if ( me->in_word )
                  {
                    if ( HText_getLastChar( &me->text ) != ' ' )
                    {
                      me->inP = 1;
                      me->inLABEL = 0;
                      HText_appendCharacter( &me->text, 32 );
                    }
                    me->in_word = 0;
                  }
                }
                else
                {
                  if ( c == ' ' || c == '\t' )
                  {
                    if ( HText_getLastChar( &me->text ) != ' ' )
                    {
                      me->inP = 1;
                      me->inLABEL = 0;
                      HText_appendCharacter( &me->text, 32 );
                    }
                  }
                  else
                  {
                    if ( c != '\r' )
                    {
                      me->inP = 1;
                      me->inLABEL = 0;
                      HText_appendCharacter( &me->text, c );
                      me->in_word = 1;
                    }
                  }
                }
              }
            }
            break;
          }
          if ( c == '\n' || c == '\t' )
          {
            HText_setLastChar( &me->text, ' ' );
          }
          else
          {
            if ( c == '\r' && HText_getLastChar( &me->text ) == ' ' )
            {
              HText_setLastChar( &me->text, ' ' );
            }
            else
            {
              HText_setLastChar( &me->text, c );
            }
          }
        }
        break;
      case 0:
        break;
      }
    }
  }
  return;
}
void HTML_put_string( HTStructured *me, char *s )
{
  char *translated_string = 0;
  if ( s && ( LYMapsOnly == 0 || me->sp->tag_number == 79 ) )
  {
    if ( psrc_convert_string )
    {
      HTSACopy( &translated_string, s );
      LYUCTranslateHTMLString( &translated_string, me->tag_charset, current_char_set, 1, 1, 0, 0 );
      s = translated_string;
    }
    switch ( me->sp->tag_number + -28 )
    {
    case 82:
      HTChunkPuts( &me->title, s );
      if ( psrc_convert_string == 0 )
      {
        return;
      }
      psrc_convert_string = 0;
      if ( translated_string == 0 )
      {
        return;
      }
      free( translated_string );
      translated_string = 0;
      break;
    case 70:
      HTChunkPuts( &me->style_block, s );
      break;
    case 62:
      HTChunkPuts( &me->script, s );
      break;
    case 42:
    case 57:
    case 58:
    case 89:
      HText_appendText( &me->text, s );
      break;
    case 51:
      HTChunkPuts( &me->object, s );
      break;
    case 77:
      HTChunkPuts( &me->textarea, s );
      break;
    case 53:
    case 63:
      HTChunkPuts( &me->option, s );
      break;
    case 45:
      HTChunkPuts( &me->math, s );
      break;
    default:
      if ( me->sp->_stack_element == 0 )
      {
        if ( psrc_view )
        {
          for ( ; s[0]; s++ )
          {
            HTML_put_character( me, s[0] );
            // s++;
          }
        }
        else
          HText_appendText( &me->text, s );
      }
      else
      {
        char *p = s;
        char c;
        if ( me->style_change )
        {
          for ( ; p[0] && ( p[0] == '\n' || p[0] == '\r' || p[0] == ' ' || p[0] == '\t' ); p++ )
          {
            // p++;
          }
          if ( p[0] )
          {
            if ( me->style_change )
            {
              actually_set_style( me );
            }
          }
        }
        while ( p[0] )
        {
          if ( p[0] == '\r' && p[1] != '\n' )
            c = '\n';
          else
            c = p[0];
          if ( me->style_change )
          {
            if ( c != '\n' && c != ' ' && c != '\t' )
            {
              if ( me->style_change )
                actually_set_style( me );
            }
            else
            {
              p++;
            }
          }
          if ( c == '\n' )
          {
            if ( me->in_word )
            {
              if ( HText_getLastChar( &me->text ) != ' ' )
                HText_appendCharacter( &me->text, 32 );
              me->in_word = 0;
            }
          }
          else
          {
            if ( c == ' ' || c == '\t' )
            {
              if ( HText_getLastChar( &me->text ) != ' ' )
                HText_appendCharacter( &me->text, 32 );
            }
            else
            {
              if ( c != '\r' )
              {
                HText_appendCharacter( &me->text, c );
                me->in_word = 1;
              }
            }
          }
          if ( c == '\n' || c == '\t' )
            HText_setLastChar( &me->text, ' ' );
          else
          {
            if ( c == '\r' && HText_getLastChar( &me->text ) == ' ' )
              HText_setLastChar( &me->text, ' ' );
            else
              HText_setLastChar( &me->text, c );
          }
        }
      }
      break;
    case 0:
      break;
    }
  }
  return;
}
void HTML_write( HTStructured *me, char *s, int l )
{
  char *p;
  char *e = &s[ l ];
  if ( LYMapsOnly == 0 || me->sp->tag_number == 79 )
  {
    p = s;
    for ( ; p < e; p++ )
    {
      HTML_put_character( me, p[0] );
      // p++;
    }
  }
  return;
}
void addClassName( char *prefix, char *actual, int length )
{
  int offset = strlen( prefix );
  unsigned int have = Style_className_end - Style_className;
  unsigned int need = offset + length + 1;
  if ( Style_className_len <= need + have )
  {
    Style_className_len += ( ( need + have ) * 2 ) + 1024;
    if ( Style_className == 0 )
    {
      Style_className = malloc( ( Style_className_len ) * sizeof( char ) );
    }
    else
    {
      Style_className = realloc( Style_className, ( Style_className_len ) * sizeof( char ) );
    }
    if ( Style_className == 0 )
      outofmem( "./HTML.c", "addClassName" );
    Style_className_end = &Style_className[ have ];
  }
  if ( offset )
    strcpy( Style_className_end, prefix );
  if ( length )
    memcpy( &Style_className_end[ offset ], actual, length );
  Style_className_end[ offset + length ] = 0;
  strtolower( Style_className_end );
  Style_className_end = &Style_className_end[ offset + length ];
  return;
}
void HTMLSRC_apply_markup( HTStructured *context, HTlexeme lexeme, BOOLEAN start, int tag_charset )
{
  HT_tagspec *ts = lexeme_end;
  for ( ; ts;  )
  {
    if ( ts->start )
    {
      current_tag_style = ts->style;
      force_current_tag_style = 1;
      forced_classname = &ts->class_name;
      force_classname = 1;
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "SRCSTOP %d\n", lexeme );
    }
    if ( ts->start )
      HTML_start_element( context, ts->element, &ts->present, &ts->value, tag_charset, 0 );
    else
      HTML_end_element( context, ts->element, 0 );
    ts = &ts->next;
  }
  return;
}
void LYStartArea( HTStructured *obj, char *href, char *alt, char *title, int tag_charset )
{
  BOOLEAN new_present[18];
  char *new_value[18];
  int i = 0;
  for ( ; i <= 17; i++ )
  {
    new_present[ i ] = 0;
    // i++;
  }
  if ( alt )
  {
    new_present = 1;
    new_value = alt;
  }
  if ( title && title )
  {
    new_present = 1;
    new_value = title;
  }
  if ( href )
  {
    new_present = 1;
    new_value = href;
  }
  obj->targetClass._abort( &obj->isa->name[0], 5 );
  return;
}
void LYHandleFIG( HTStructured *me, BOOLEAN *present, char **value, BOOLEAN isobject, BOOLEAN imagemap, char *id, char *src, BOOLEAN convert, BOOLEAN start, BOOLEAN *intern_flag )
{
  if ( start == 1 )
  {
    me->inFIG = 1;
    if ( me->inA )
    {
      if ( tags->contents )
        me->skip_stack++;
      HTML_end_element( me, 0, 0 );
    }
    if ( isobject == 0 )
    {
      LYEnsureDoubleSpace( me );
      LYResetParagraphAlignment( me );
      me->inFIGwithP = 1;
    }
    else
    {
      me->inFIGwithP = 0;
      HTML_put_character( me, ' ' );
    }
    if ( id && id[0] )
    {
      if ( present && convert )
        LYCheckForID( me, present, value, 6 );
      else
        LYHandleID( me, id );
    }
    me->in_word = 0;
    me->inP = 0;
    if ( clickable_images == 0 || src == 0 || src[0] == 0 )
    {
      return;
    }
  {
    char *href = 0;
    HTSACopy( &href, src );
    *(int*)&intern_flag[0] = 0;
    LYLegitimizeHREF( me, &href, 1, 1 );
    if ( href[0] )
    {
      me->CurrentA = HTAnchor_findChildAndLink( &me->node_anchor, 0, href, 0 );
      HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
      if ( me->inBoldH == 0 )
        HText_appendCharacter( &me->text, 5 );
      HTML_put_string( me, "[FIGURE]" );
      if ( me->inBoldH == 0 )
        HText_appendCharacter( &me->text, 6 );
      HText_endAnchor( &me->text, 0 );
      HTML_put_character( me, '-' );
      HTML_put_character( me, ' ' );
      me->in_word = 0;
    }
    if ( href == 0 )
    {
      return;
    }
    free( href );
    href = 0;
  }
  }
  else
  {
    if ( me->inFIGwithP )
      LYEnsureDoubleSpace( me );
    else
      HTML_put_character( me, ' ' );
    LYResetParagraphAlignment( me );
    me->inFIGwithP = 0;
    me->inFIG = 0;
    change_paragraph_style( me, &me->sp->style->next );
    if ( me->List_Nesting_Level < 0 )
    {
      return;
    }
    if ( me->style_change )
      actually_set_style( me );
    HText_NegateLineOne( &me->text );
  }
  return;
}
void clear_objectdata( HTStructured *me )
{
  if ( me )
  {
    HTChunkClear( &me->object );
    me->object_started = 0;
    me->object_declare = 0;
    me->object_shapes = 0;
    me->object_ismap = 0;
    if ( me->object_usemap )
    {
      free( &me->object_usemap );
      *(int*)&me->object_usemap = 0;
    }
    if ( me->object_id )
    {
      free( &me->object_id );
      *(int*)&me->object_id = 0;
    }
    if ( me->object_title )
    {
      free( &me->object_title );
      *(int*)&me->object_title = 0;
    }
    if ( me->object_data )
    {
      free( &me->object_data );
      *(int*)&me->object_data = 0;
    }
    if ( me->object_type )
    {
      free( &me->object_type );
      *(int*)&me->object_type = 0;
    }
    if ( me->object_classid )
    {
      free( &me->object_classid );
      *(int*)&me->object_classid = 0;
    }
    if ( me->object_codebase )
    {
      free( &me->object_codebase );
      *(int*)&me->object_codebase = 0;
    }
    if ( me->object_codetype )
    {
      free( &me->object_codetype );
      *(int*)&me->object_codetype = 0;
    }
    if ( me->object_name == 0 )
    {
      return;
    }
    free( &me->object_name );
    *(int*)&me->object_name = 0;
  }
  return;
}
int HTML_start_element( HTStructured *me, int element_number, BOOLEAN *present, char **value, int tag_charset, char **include )
{
  int eax;
  int ebp_324;
  char *alt_string = 0;
  char *id_string = 0;
  char *newtitle = 0;
  char **pdoctitle = 0;
  char *href = 0;
  char *map_href = 0;
  char *title = 0;
  char *I_value = 0;
  char *I_name = 0;
  char *temp = 0;
  char *Base = 0;
  int dest_char_set = -1;
  HTParentAnchor *dest = 0;
  BOOLEAN dest_ismap = 0;
  HTChildAnchor *ID_A = 0;
  int url_type = 0, i = 0;
  char *cp = 0;
  HTMLElement ElementNumber = element_number;
  BOOLEAN intern_flag = 0;
  short stbl_align = -1;
  int status = 0;
  char *class_name;
  int class_used = 0;
  if ( psrc_view && sgml_in_psrc_was_initialized == 0 && psrc_nested_call == 0 )
  {
    if ( psrc_first_tag )
    {
      psrc_first_tag = 0;
      psrc_nested_call = 1;
      HTML_start_element( me, 17, 0, 0, tag_charset, 0 );
      HTML_start_element( me, 86, 0, 0, tag_charset, 0 );
      HTMLSRC_apply_markup( me, 7, 1, tag_charset );
      psrc_nested_call = 0;
    }
    psrc_nested_call = 1;
    HTMLSRC_apply_markup( me, 4, 1, tag_charset );
    HTML_put_character( me, '<' );
    HTMLSRC_apply_markup( me, 4, 0, tag_charset );
    HTMLSRC_apply_markup( me, 1, 1, tag_charset );
    if ( tagname_transform )
      HTML_put_string( me, tags[ element_number ].name );
    else
    {
      LYstrncpy( ebp_216, tags[ element_number ].name, 199 );
      LYLowerCase( ebp_216 );
      HTML_put_string( me, ebp_216 );
    }
    if ( present )
    {
      i = 0;
      for ( ; i < tags[ element_number + 0 ].number_of_attributes; i++ )
      {
        if ( present[ i ] )
        {
          HTML_put_character( me, ' ' );
          HTMLSRC_apply_markup( me, 2, 1, tag_charset );
          if ( attrname_transform )
            HTML_put_string( me, &tags[ element_number + 0 ].attributes->name[0] );
          else
          {
            LYstrncpy( ebp_216, &tags[ element_number + 0 ].attributes->name[0], 199 );
            LYLowerCase( ebp_216 );
            HTML_put_string( me, ebp_216 );
          }
          if ( value[ i ] )
          {
            HTML_put_character( me, '=' );
            HTMLSRC_apply_markup( me, 2, 0, tag_charset );
            HTMLSRC_apply_markup( me, 3, 1, tag_charset );
            HTML_put_character( me, 39 );
            if ( tags[ element_number + 0 ].attributes->type == 1 )
            {
              HTStartAnchor( &me->isa->name[0], value[ i ], 0 );
              HTML_end_element( me, 0, 0 );
            }
            else
            if ( tags[ element_number + 0 ].attributes->type == 2 )
            {
              HTMLSRC_apply_markup( me, 6, 1, tag_charset );
              HTStartAnchor( &me->isa->name[0], 0, value[ i ] );
            }
            if ( 0 != 2 )
              HTML_put_string( me, value[ i ] );
            else
            {
              ebp_324 = value[ i ];
              for ( ; *ebp_324; ebp_324++ )
              {
                if ( *ebp_324 != '"' )
                  HTML_put_character( me, *ebp_324 );
                else
                  HTML_put_string( me, "&#34;" );
                // ebp_324++;
              }
            }
            if ( tags[ element_number + 0 ].attributes->type == 2 )
            {
              HTML_end_element( me, 0, 0 );
              HTMLSRC_apply_markup( me, 6, 0, tag_charset );
            }
            HTML_put_character( me, 39 );
            HTMLSRC_apply_markup( me, 3, 0, tag_charset );
          }
        }
        // i++;
      }
    }
    HTMLSRC_apply_markup( me, 1, 0, tag_charset );
    HTMLSRC_apply_markup( me, 4, 1, tag_charset );
    HTML_put_character( me, '>' );
    HTMLSRC_apply_markup( me, 4, 0, tag_charset );
    psrc_nested_call = 0;
    return 0;
  }
  else
  {
    if ( LYMapsOnly )
    {
      return 0;
    }
    else
    if ( me->text == 0 && me->style_change )
      actually_set_style( me );
  {
    int j;
    if ( me->tag_charset != ( tag_charset < 0 ? me->UCLYhndl : tag_charset ) || tag_charset < 0 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "me-&gt;tag_charset: %d -&gt; %d", me->tag_charset, tag_charset < 0 ? me->UCLYhndl : tag_charset );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), " (me-&gt;UCLYhndl: %d, tag_charset: %d)\n", me->UCLYhndl, tag_charset );
      }
      me->tag_charset = tag_charset < 0 ? me->UCLYhndl : tag_charset;
    }
    addClassName( ";", tags[ element_number ].name, tags[ element_number ].name_len );
    class_name = class_string;
    force_classname = 0;
    if ( force_current_tag_style == 0 )
    {
      current_tag_style = class_name[0] ? -1 : cached_tag_styles[ element_number ];
    }
    else
      force_current_tag_style = 0;
    if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
    {
      fprintf( TraceFP( ), "CSS.elt:&lt;%s&gt;\n", tags[ element_number ].name );
    }
    if ( current_tag_style == -1 )
    {
      hcode = hash_code_lowercase_on_fly( tags[ element_number ].name );
      if ( class_name[0] )
      {
        hcode = hash_code_aggregate_char( '.', hcode );
        hcode = hash_code_aggregate_lower_str( class_name, hcode );
        if ( hashStyles[ hcode ].name == 0 )
        {
          hcode = hcode;
          if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
          {
            fprintf( TraceFP( ), "STYLE.start_element: &lt;%s&gt; (class &lt;%s&gt; not configured), hcode=%d.\n", tags[ element_number ].name, class_name, hcode );
          }
        }
        else
        {
          addClassName( ".", class_name, strlen( class_name ) );
          if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
          {
            fprintf( TraceFP( ), "STYLE.start_element: &lt;%s&gt;.&lt;%s&gt;, hcode=%d.\n", tags[ element_number ].name, class_name, hcode );
          }
          class_used = 1;
        }
      }
      class_string[0] = 0;
    }
    else
    {
      if ( class_name[0] )
      {
        addClassName( ".", class_name, strlen( class_name ) );
        class_string[0] = 0;
      }
      hcode = current_tag_style;
      if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
      {
        fprintf( TraceFP( ), "STYLE.start_element: &lt;%s&gt;, hcode=%d.\n", tags[ element_number ].name, hcode );
      }
      current_tag_style = -1;
    }
    if ( class_used == 0 && ElementNumber == HTML_INPUT )
    {
      hcode = hash_code_aggregate_lower_str( ".type.", hcode );
      hcode = hash_code_aggregate_lower_str( value[31], hcode );
      if ( hashStyles[ hcode ].name == 0 )
      {
        hcode = hcode;
        if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
        {
          fprintf( TraceFP( ), "STYLE.start_element: type &lt;%s&gt; not configured.\n", value[31] );
        }
      }
      else
      {
        addClassName( ".type.", value[31], strlen( value[31] ) );
        if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
        {
          fprintf( TraceFP( ), "STYLE.start_element: &lt;%s&gt;.type.&lt;%s&gt;, hcode=%d.\n", tags[ element_number ].name, value[31], hcode );
        }
      }
    }
    _internal_HTC( &me->text, hcode, 1 );
    switch ( ElementNumber )
    {
    case HTML_BASE:
      if ( present && present[1] && !local_host_only && value[1] && value[1][0] )
      {
        char *base = 0;
        char *related = 0;
        HTSACopy( &base, value[1] );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "*HTML_BASE: initial href=`%s'\n", "" );
        }
        url_type = LYLegitimizeHREF( me, &base, 1, 1 );
        if ( url_type == 0 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTML: BASE '%s' is not an absolute URL.\n", "" );
          }
          if ( me->inBadBASE == 0 )
          {
            HTAlert( gettext( "HREF in BASE tag is not an absolute URL." ) );
          }
          me->inBadBASE = 1;
        }
        if ( url_type == 39 )
        {
          temp = base;
          base = HTParse( &base[11], "", 29 );
          if ( temp )
          {
            free( temp );
            temp = 0;
          }
        }
        related = &me->node_anchor->address;
        temp = HTParse( base, related, 17 );
        HTSACopy( &me->base_href, temp );
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
        temp = HTParse( base, "", 9 );
        if ( strncmp( temp, "//", 2 ) == 0 )
        {
          HTSACat( &me->base_href, temp );
          if ( strcmp( &me->base_href, "file://" ) == 0 )
            HTSACat( &me->base_href, "localhost" );
        }
        else
        if ( ( me->base_href[0] == 'f' || me->base_href[0] == 'F' ) && strncasecomp( &me->base_href, "file:", 5 ) == 0 )
          HTSACat( &me->base_href, "//localhost" );
        else
        {
          if ( strcmp( &me->base_href, "news:" ) )
          {
            if ( temp )
            {
              free( temp );
              temp = 0;
            }
            temp = HTParse( related, "", 9 );
            HTSACat( &me->base_href, temp );
          }
        }
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
        temp = HTParse( base, "", 5 );
        if ( temp[0] )
        {
          if ( strchr( temp, '?' ) )
            *(char*)(strchr( temp, '?' )) = 0;
          if ( strrchr( temp, '/' ) )
            *(int*)strrchr( temp, '/' )/*.1*/ = 0;
          HTSACat( &me->base_href, temp );
        }
        else
        {
          if ( strcmp( &me->base_href, "news:" ) == 0 )
            HTSACat( &me->base_href, "*" );
          else
          {
            if ( strncasecomp( &me->base_href, "news:", 5 ) == 0 || strncasecomp( &me->base_href, "nntp:", 5 ) == 0 || strncasecomp( &me->base_href, "snews:", 6 ) == 0 )
              HTSACat( &me->base_href, "/*" );
            else
              HTSACat( &me->base_href, "/" );
          }
        }
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
        if ( base )
        {
          free( base );
          base = 0;
        }
        me->inBASE = 1;
        me->node_anchor->inBASE = 1;
        HTSACopy( &me->node_anchor->content_base, &me->base_href );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "*HTML_BASE: final href=`%s'\n", &me->base_href );
          if ( ElementNumber > 117 || tags[ ElementNumber ].contents )
          {
            if ( me->skip_stack > 0 )
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "HTML:begin_element: internal call (level %d), leaving on stack - `%s'\n", me->skip_stack, "(null)" );
              }
              me->skip_stack += -1;
              return status;
            }
            else
            if ( me->sp == me->stack->style )
            {
              if ( me->stack_overrun == 0 )
              {
                HTAlert( gettext( "Maximum nesting of HTML elements exceeded." ) );
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTML: ****** Maximum nesting of %d tags exceeded!\n", 800 );
                }
                me->stack_overrun = 1;
              }
              return -1;
            }
            else
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "HTML:begin_element[%d]: adding style to stack - %s (%s)\n", ( me->stack[799].style - me->sp ) >> 3, "(null)", tags[ ElementNumber ].name );
              }
              me->sp = me->sp[ -1 ].style;
              me->sp->tag_number = ElementNumber;
              if ( wait_for_this_stacked_elt < 0 && tags[ ElementNumber ].can_justify == 0 )
                wait_for_this_stacked_elt = 800 + ( ( me->stack->style - me->sp ) >> 3 );
            }
          }
          if ( in_DT && ElementNumber == HTML_DD )
            in_DT = 0;
          else
          if ( ElementNumber == HTML_DT )
            in_DT = 1;
          if ( tags[ element_number ].contents == SGML_EMPTY && ( tags[ element_number ].flags & 16 ) == 0 )
          {
            if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
            {
              fprintf( TraceFP( ), "STYLE.begin_element:ending \"EMPTY\" element style\n" );
            }
            _internal_HTC( &me->text, hcode, 0 );
            FastTrimColorClass( tags[ element_number ].name, tags[ element_number ].name_len, Style_className, &Style_className_end, &hcode );
          }
          return status;
        }
      }
      break;
    case HTML_META:
    {
      char *p;
      if ( present )
        LYHandleMETA( me, present, value, include );
    }
      break;
    case HTML_TITLE:
      HTChunkClear( &me->title );
      break;
    case HTML_LINK:
      intern_flag = 0;
      if ( present && present[3] )
      {
        *(int*)&intern_flag = 0;
        if ( value[3] == 0 || value[3][0] == 0 )
        {
          Base = &me->node_anchor->address;
          HTSACopy( &href, Base );
        }
        else
        {
          HTSACopy( &href, value[3] );
          url_type = LYLegitimizeHREF( me, &href, 1, 1 );
          Base = &me->node_anchor->address;
        {
          char *free_me = href;
          href = HTParse( href, Base, 31 );
          if ( free_me )
          {
            free( free_me );
          }
        }
        }
        if ( present && ( ( present[9] && value[9] && ( strcasecomp( "made", value[9] ) == 0 || strcasecomp( "owner", value[9] ) == 0 ) ) || ( present[8] && value[8] && strcasecomp( "author", value[8] ) == 0 ) ) )
        {
          HTAnchor_setOwner( &me->node_anchor, href );
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTML: DOC OWNER '%s' found\n", href );
          }
          if ( href )
          {
            free( href );
            href = 0;
          }
          if ( present && present[12] && value[12] && value[12][0] )
          {
            HTSACopy( &title, value[12] );
            LYUCTranslateHTMLString( &title, me->tag_charset, current_char_set, 1, 1, 0, 0 );
            LYTrimHead( title );
            LYTrimTail( title );
            if ( title[0] )
              HTAnchor_setRevTitle( &me->node_anchor, title );
            if ( title )
            {
              free( title );
              title = 0;
            }
          }
        }
        else
        {
          if ( present && present[8] && value[8] )
          {
            if ( strcasecomp( value[8], "Home" ) == 0 || strcasecomp( value[8], "ToC" ) == 0 || strcasecomp( value[8], "Contents" ) == 0 || strcasecomp( value[8], "Index" ) == 0 || strcasecomp( value[8], "Glossary" ) == 0 || strcasecomp( value[8], "Copyright" ) == 0 || strcasecomp( value[8], "Help" ) == 0 || strcasecomp( value[8], "Search" ) == 0 || strcasecomp( value[8], "Bookmark" ) == 0 || strcasecomp( value[8], "Banner" ) == 0 || strcasecomp( value[8], "Top" ) == 0 || strcasecomp( value[8], "Origin" ) == 0 || strcasecomp( value[8], "Navigator" ) == 0 || strcasecomp( value[8], "Disclaimer" ) == 0 || strcasecomp( value[8], "Author" ) == 0 || strcasecomp( value[8], "Editor" ) == 0 || strcasecomp( value[8], "Publisher" ) == 0 || strcasecomp( value[8], "Trademark" ) == 0 || strcasecomp( value[8], "Hotlist" ) == 0 || strcasecomp( value[8], "Begin" ) == 0 || strcasecomp( value[8], "First" ) == 0 || strcasecomp( value[8], "End" ) == 0 || strcasecomp( value[8], "Last" ) == 0 || strcasecomp( value[8], "Documentation" ) == 0 || strcasecomp( value[8], "Biblioentry" ) == 0 || strcasecomp( value[8], "Bibliography" ) == 0 || strcasecomp( value[8], "Start" ) == 0 || strcasecomp( value[8], "Appendix" ) == 0 )
            {
              HTSACopy( &title, value[8] );
              pdoctitle = &title;
            }
            else
            {
              if ( strcasecomp( value[8], "Up" ) == 0 || strcasecomp( value[8], "Next" ) == 0 || strcasecomp( value[8], "Previous" ) == 0 || strcasecomp( value[8], "Prev" ) == 0 || strcasecomp( value[8], "Child" ) == 0 || strcasecomp( value[8], "Sibling" ) == 0 || strcasecomp( value[8], "Parent" ) == 0 || strcasecomp( value[8], "Meta" ) == 0 || strcasecomp( value[8], "URC" ) == 0 || strcasecomp( value[8], "Pointer" ) == 0 || strcasecomp( value[8], "Translation" ) == 0 || strcasecomp( value[8], "Definition" ) == 0 || strcasecomp( value[8], "Alternate" ) == 0 || strcasecomp( value[8], "Section" ) == 0 || strcasecomp( value[8], "Subsection" ) == 0 || strcasecomp( value[8], "Chapter" ) == 0 )
              {
                HTSACopy( &title, value[8] );
                if ( intern_flag == 0 )
                {
                  HTSACopy( &temp, "RelTitle: " );
                  HTSACat( &temp, value[8] );
                }
              }
              else
              {
                if ( strcasecomp( value[8], "citehost" ) == 0 )
                {
                  HTAnchor_setCitehost( &me->node_anchor, href );
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "HTML: citehost '%s' found\n", href );
                  }
                  if ( href )
                  {
                    free( href );
                    href = 0;
                  }
                }
                else
                {
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "HTML: LINK with REL=\"%s\" ignored.\n", value[8] );
                  }
                  if ( href )
                  {
                    free( href );
                    href = 0;
                  }
                }
              }
            }
          }
        }
      }
      else
      if ( present && present[8] && value[8] )
      {
        if ( strcasecomp( value[8], "Home" ) == 0 )
          HTSACopy( &href, LynxHome );
        else
        {
          if ( strcasecomp( value[8], "Help" ) == 0 )
            HTSACopy( &href, helpfile );
          else
          {
            if ( strcasecomp( value[8], "Index" ) == 0 )
              HTSACopy( &href, indexfile );
            else
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "HTML: LINK with REL=\"%s\" and no HREF ignored.\n", value[8] );
              }
            }
          }
        }
        HTSACopy( &title, value[8] );
        pdoctitle = &title;
      }
      if ( href )
      {
        if ( present && present[12] && value[12] && value[12][0] )
        {
          HTSACopy( &title, value[12] );
          LYUCTranslateHTMLString( &title, me->tag_charset, current_char_set, 1, 1, 0, 0 );
          LYTrimHead( title );
          LYTrimTail( title );
          pdoctitle = &title;
          if ( temp )
          {
            free( temp );
            temp = 0;
          }
        }
        if ( title == 0 || title[0] == 0 )
        {
          if ( href )
          {
            free( href );
            href = 0;
          }
          if ( title )
          {
            free( title );
            title = 0;
          }
        }
        else
        {
          if ( me->inA )
          {
            if ( tags->contents )
              me->skip_stack++;
            HTML_end_element( me, 0, include );
          }
          me->CurrentA = HTAnchor_findChildAndLink( &me->node_anchor, 0, href, ebp_960 );
          if ( temp )
          {
            free( temp );
            temp = 0;
          }
          dest = HTAnchor_parent( HTAnchor_followLink( &me->CurrentA ) );
          if ( dest )
          {
            if ( pdoctitle && HTAnchor_title( dest ) == 0 )
              HTAnchor_setTitle( dest, pdoctitle[0] );
            if ( me->node_anchor == dest )
              dest = 0;
            if ( present[0] && value[0] && value[0] )
            {
              dest_char_set = UCGetLYhndl_byMIME( value[0] );
              if ( dest_char_set < 0 )
                dest_char_set = UCLYhndl_for_unrec;
            }
            if ( dest && dest_char_set >= 0 )
              HTAnchor_setUCInfoStage( dest, dest_char_set, 1, 2 );
          }
          if ( me->style_change )
            actually_set_style( me );
          if ( ( HText_hasToolbar( &me->text ) & 255 ) == 0 )
          {
            ID_A = HTAnchor_findChildAndLink( &me->node_anchor, LYToolbarName, 0, 0 );
            if ( ID_A )
            {
              HText_appendCharacter( &me->text, 35 );
              HText_setLastChar( &me->text, ' ' );
              HText_beginAnchor( &me->text, me->inUnderline, ID_A );
              HText_endAnchor( &me->text, 0 );
              HText_setToolbar( &me->text );
              HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
              if ( me->inBoldH == 0 )
                HText_appendCharacter( &me->text, 5 );
              if ( present && present[1] && value[1] && value[1][0] )
              {
                char *tmp = 0;
                HTSprintf0( &tmp, "link.%s.%s", value[1], title );
                if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
                {
                  fprintf( TraceFP( ), "STYLE.link: using style &lt;%s&gt;\n", tmp );
                }
                _internal_HTC( &me->text, hash_code( tmp ), 1 );
                HTML_put_string( me, title );
                HTML_put_string( me, " (" );
                HTML_put_string( me, value[1] );
                HTML_put_string( me, ")" );
                _internal_HTC( &me->text, hash_code( tmp ), 0 );
                if ( tmp )
                {
                  free( tmp );
                  tmp = 0;
                }
              }
              else
                HTML_put_string( me, title );
              if ( me->inBoldH == 0 )
                HText_appendCharacter( &me->text, 6 );
              HText_endAnchor( &me->text, 0 );
            }
          }
          HTML_put_character( me, ' ' );
          HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
        }
      }
      if ( href )
      {
        free( href );
        href = 0;
      }
      if ( title )
      {
        free( title );
        title = 0;
      }
      break;
    case HTML_ISINDEX:
      if ( present && ( ( present[3] && value[3] ) || ( present[0] && value[0] ) ) )
      {
        if ( present[3] && value[3] )
          HTSACopy( &href, value[3] );
        else
          HTSACopy( &href, value[0] );
        LYLegitimizeHREF( me, &href, 1, 1 );
        Base = &me->node_anchor->address;
      {
        char *free_me = href;
        href = HTParse( href, Base, 31 );
        if ( free_me )
        {
          free( free_me );
        }
        HTAnchor_setIndex( &me->node_anchor, href );
        if ( href )
        {
          free( href );
          href = 0;
        }
      }
      }
      else
      {
        Base = &me->node_anchor->address;
        HTAnchor_setIndex( &me->node_anchor, Base );
      }
      if ( present && present[6] && value[6] && value[6][0] )
      {
        HTSACopy( &temp, value[6] );
        LYUCTranslateHTMLString( &temp, me->tag_charset, current_char_set, 1, 1, 0, 0 );
        LYTrimHead( temp );
        LYTrimTail( temp );
        if ( temp[0] )
        {
          HTSACat( &temp, " " );
          HTAnchor_setPrompt( &me->node_anchor, temp );
        }
        else
        {
          HTAnchor_setPrompt( &me->node_anchor, gettext( "Enter a database query: " ) );
        }
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
      }
      else
      {
        HTAnchor_setPrompt( &me->node_anchor, gettext( "Enter a database query: " ) );
      }
      break;
    case HTML_STYLE:
      HTChunkClear( &me->style_block );
      break;
    case HTML_SCRIPT:
      HTChunkClear( &me->script );
      break;
    case HTML_BODY:
      LYCheckForID( me, present, value, 6 );
      if ( HText_hasToolbar( &me->text ) & 255 )
        HText_appendParagraph( &me->text );
      break;
    case HTML_FRAME:
      if ( present && present[6] && value[6] && value[6][0] )
      {
        HTSACopy( &id_string, value[6] );
        LYUCTranslateHTMLString( &id_string, me->tag_charset, current_char_set, 1, 1, 0, 0 );
        LYTrimHead( id_string );
        LYTrimTail( id_string );
      }
      if ( present && present[9] && value[9] && value[9][0] )
      {
        HTSACopy( &href, value[9] );
        LYLegitimizeHREF( me, &href, 1, 1 );
        if ( me->inA )
        {
          if ( tags->contents )
            me->skip_stack++;
          HTML_end_element( me, 0, include );
        }
        me->CurrentA = HTAnchor_findChildAndLink( &me->node_anchor, 0, href, 0 );
        can_justify_here_saved = can_justify_here;
        can_justify_here = 0;
        LYEnsureSingleSpace( me );
        if ( me->inUnderline == 0 )
          HText_appendCharacter( &me->text, 3 );
        HTML_put_string( me, "FRAME:" );
        if ( me->inUnderline == 0 )
          HText_appendCharacter( &me->text, 4 );
        HTML_put_character( me, ' ' );
        me->in_word = 0;
        LYCheckForID( me, present, value, 2 );
        HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
        if ( me->inBoldH == 0 )
          HText_appendCharacter( &me->text, 5 );
        HTML_put_string( me, href );
        if ( href )
        {
          free( href );
          href = 0;
        }
        if ( me->inBoldH == 0 )
          HText_appendCharacter( &me->text, 6 );
        HText_endAnchor( &me->text, 0 );
        LYEnsureSingleSpace( me );
        can_justify_here = can_justify_here_saved;
      }
      else
        LYCheckForID( me, present, value, 2 );
      if ( id_string )
      {
        free( id_string );
        id_string = 0;
      }
      break;
    case HTML_NOFRAMES:
      LYEnsureDoubleSpace( me );
      LYResetParagraphAlignment( me );
      break;
    case HTML_IFRAME:
      if ( present && present[8] && value[8] && value[8][0] )
      {
        HTSACopy( &id_string, value[8] );
        LYUCTranslateHTMLString( &id_string, me->tag_charset, current_char_set, 1, 1, 0, 0 );
        LYTrimHead( id_string );
        LYTrimTail( id_string );
      }
      if ( present && present[10] && value[10] && value[10][0] )
      {
        HTSACopy( &href, value[10] );
        LYLegitimizeHREF( me, &href, 1, 1 );
        if ( me->inA )
          HTML_end_element( me, 0, include );
        me->CurrentA = HTAnchor_findChildAndLink( &me->node_anchor, 0, href, 0 );
        LYEnsureDoubleSpace( me );
        can_justify_here_saved = can_justify_here;
        can_justify_here = 0;
        LYResetParagraphAlignment( me );
        if ( me->inUnderline == 0 )
          HText_appendCharacter( &me->text, 3 );
        HTML_put_string( me, "IFRAME:" );
        if ( me->inUnderline == 0 )
          HText_appendCharacter( &me->text, 4 );
        HTML_put_character( me, ' ' );
        me->in_word = 0;
        LYCheckForID( me, present, value, 4 );
        HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
        if ( me->inBoldH == 0 )
          HText_appendCharacter( &me->text, 5 );
        HTML_put_string( me, href );
        if ( href )
        {
          free( href );
          href = 0;
        }
        if ( me->inBoldH == 0 )
          HText_appendCharacter( &me->text, 6 );
        HText_endAnchor( &me->text, 0 );
        LYEnsureSingleSpace( me );
        can_justify_here = can_justify_here_saved;
      }
      else
        LYCheckForID( me, present, value, 4 );
      if ( id_string )
      {
        free( id_string );
        id_string = 0;
      }
      break;
    case HTML_BANNER:
    case HTML_MARQUEE:
      change_paragraph_style( me, styles[9] );
      if ( me->style_change )
        actually_set_style( me );
      if ( me->sp->tag_number == ElementNumber )
        LYEnsureDoubleSpace( me );
      if ( ( HText_hasToolbar( &me->text ) & 255 ) == 0 && HText_getLines( &me->text ) < display_lines / 2 )
      {
        ID_A = HTAnchor_findChildAndLink( &me->node_anchor, LYToolbarName, 0, 0 );
        if ( ID_A )
        {
          HText_beginAnchor( &me->text, me->inUnderline, ID_A );
          HText_endAnchor( &me->text, 0 );
          HText_setToolbar( &me->text );
        }
      }
      LYCheckForID( me, present, value, 3 );
      break;
    case HTML_CENTER:
    case HTML_DIV:
      if ( me->Division_Level <= 798 )
        me->Division_Level++;
      else
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTML: ****** Maximum nesting of %d divisions exceeded!\n", 800 );
      }
      if ( me->inP )
        LYEnsureSingleSpace( me );
      if ( ElementNumber == HTML_CENTER )
      {
        me->DivisionAlignments[ me->Division_Level ] = 3;
        change_paragraph_style( me, styles[146] );
        if ( me->style_change )
          actually_set_style( me );
        me->current_default_alignment = styles[146]->alignment;
      }
      else
      {
        if ( me->List_Nesting_Level >= 0 && ( present == 0 || !present[0] || value[0] == 0 || ( strcasecomp( value[0], "center" ) && strcasecomp( value[0], "right" ) ) ) )
        {
          if ( present && present[0] )
            *(int*)&me->current_default_alignment = 1;
          else
          if ( me->Division_Level == 0 )
            *(int*)&me->current_default_alignment = 1;
          else
          {
            *(int*)&me->current_default_alignment = 1;
          }
          LYHandlePlike( me, present, value, include, 0, 1 );
          me->DivisionAlignments[ me->Division_Level ] = me->current_default_alignment;
        }
        else
        {
          if ( present && present[0] && value[0] && value[0] )
          {
            if ( strcasecomp( value[0], "center" ) == 0 )
            {
              me->DivisionAlignments[ me->Division_Level ] = 3;
              change_paragraph_style( me, styles[146] );
              if ( me->style_change )
                actually_set_style( me );
              me->current_default_alignment = styles[146]->alignment;
            }
            else
            {
              if ( strcasecomp( value[0], "right" ) == 0 )
              {
                me->DivisionAlignments[ me->Division_Level ] = 2;
                change_paragraph_style( me, styles[148] );
                if ( me->style_change )
                  actually_set_style( me );
                me->current_default_alignment = styles[148]->alignment;
              }
              else
              {
                me->DivisionAlignments[ me->Division_Level ] = 1;
                change_paragraph_style( me, styles[147] );
                if ( me->style_change )
                  actually_set_style( me );
                me->current_default_alignment = styles[147]->alignment;
              }
            }
          }
          else
          {
            me->DivisionAlignments[ me->Division_Level ] = 1;
            change_paragraph_style( me, styles[147] );
            if ( me->style_change )
              actually_set_style( me );
            me->current_default_alignment = styles[147]->alignment;
          }
        }
      }
      LYCheckForID( me, present, value, 4 );
      break;
    case HTML_H1:
    case HTML_H2:
    case HTML_H3:
    case HTML_H4:
    case HTML_H5:
    case HTML_H6:
      if ( me->List_Nesting_Level >= 0 )
      {
        switch ( me->sp->tag_number )
        {
        case '!':
        case 'D':
        case 'J':
        case 'P':
        case 'r':
          if ( tags[67].contents == SGML_EMPTY )
            ElementNumber = HTML_LH;
          else
          {
            me->new_style = me->sp->style->next;
            ElementNumber = me->sp->tag_number;
            if ( me->style_change )
              actually_set_style( me );
          }
          if ( me->inP || me->in_word )
          {
            HText_appendParagraph( &me->text );
            HTML_put_character( me, 1 );
            HText_setLastChar( &me->text, ' ' );
            me->in_word = 0;
            me->inP = 0;
          }
          LYCheckForID( me, present, value, 5 );
          break;
        default:
          if ( present && present[0] && value[0] && value[0] )
          {
            if ( strcasecomp( value[0], "center" ) == 0 )
              change_paragraph_style( me, styles[143] );
            else
            {
              if ( strcasecomp( value[0], "right" ) == 0 )
                change_paragraph_style( me, styles[145] );
              else
              {
                if ( strcasecomp( value[0], "left" ) == 0 || strcasecomp( value[0], "justify" ) == 0 )
                  change_paragraph_style( me, styles[144] );
                else
                  change_paragraph_style( me, styles[ ElementNumber ] );
              }
            }
          }
          else
          if ( me->Division_Level >= 0 )
          {
            if ( me->DivisionAlignments[ me->Division_Level ] == 3 )
              change_paragraph_style( me, styles[143] );
            else
            if ( me->DivisionAlignments[ me->Division_Level ] == 1 )
              change_paragraph_style( me, styles[144] );
            else
            if ( me->DivisionAlignments[ me->Division_Level ] == 2 )
              change_paragraph_style( me, styles[145] );
          }
          else
            change_paragraph_style( me, styles[ ElementNumber ] );
          if ( me->style_change )
            actually_set_style( me );
          LYCheckForID( me, present, value, 5 );
          if ( ( bold_headers == 1 || ( ElementNumber == HTML_H1 && bold_H1 == 1 ) ) && ( styles[ ElementNumber ]->font & 2 ) )
          {
            if ( me->inBoldA == 0 && me->inBoldH == 0 )
              HText_appendCharacter( &me->text, 5 );
            me->inBoldH = 1;
          }
          break;
        }
      }
      break;
    case HTML_P:
      LYHandlePlike( me, present, value, include, 0, 1 );
      LYCheckForID( me, present, value, 4 );
      break;
    case HTML_BR:
      if ( me->style_change )
        actually_set_style( me );
      LYCheckForID( me, present, value, 3 );
      if ( ( LYCollapseBRs == 0 && ( HText_PreviousLineEmpty( &me->text, 0 ) & 255 ) == 0 ) || ( HText_LastLineEmpty( &me->text, 0 ) & 255 ) == 0 )
      {
        HText_setLastChar( &me->text, ' ' );
        HText_appendCharacter( &me->text, 13 );
      }
      me->in_word = 0;
      me->inP = 0;
      break;
    case HTML_WBR:
      if ( me->style_change )
        actually_set_style( me );
      LYCheckForID( me, present, value, 3 );
      HText_setBreakPoint( &me->text );
      break;
    case HTML_HY:
    case HTML_SHY:
      if ( me->style_change )
        actually_set_style( me );
      LYCheckForID( me, present, value, 3 );
      HText_appendCharacter( &me->text, 7 );
      break;
    case HTML_HR:
    {
      int width;
      if ( me->style_change )
        actually_set_style( me );
      if ( ( HText_LastLineEmpty( &me->text, 0 ) & 255 ) == 0 )
      {
        HText_setLastChar( &me->text, ' ' );
        HText_appendCharacter( &me->text, 13 );
      }
      else
      {
        if ( HText_PreviousLineEmpty( &me->text, 0 ) & 255 )
          HText_RemovePreviousLine( &me->text );
      }
      me->in_word = 0;
      me->inP = 0;
      LYCheckForID( me, present, value, 4 );
      if ( present && present[0] && value[0] )
      {
        if ( strcasecomp( value[0], "right" ) == 0 )
          me->sp->_stack_element = 2;
        else
        {
          if ( strcasecomp( value[0], "left" ) == 0 )
            me->sp->_stack_element = 1;
          else
            me->sp->_stack_element = 3;
        }
      }
      else
        me->sp->_stack_element = 3;
      width = LYcols - ( LYShowScrollbar != 0 ) - me->new_style->leftIndent - me->new_style->rightIndent;
      if ( present && present[12] && value[12] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[12][0] * 2 )) & 2048 ) && *(char*)(value[12] + strlen( value[12] ) + -1) == '%' )
      {
        char *percent = 0;
        int Percent, Width;
        HTSACopy( &percent, value[12] );
        Percent = atoi( percent );
        if ( Percent > 100 || Percent <= 0 )
          width += -5;
        else
        {
          Width = ( (/*HI*/int)( 0x51eb851f * ( width * Percent ) ) >> 5 ) - ( ( width * Percent ) >> 31 );
          if ( Width <= 0 )
            width = 1;
          else
            width = Width;
        }
        if ( percent )
        {
          free( percent );
          percent = 0;
        }
      }
      else
        width += -5;
      i = 0;
      for ( ; i < width; i++ )
      {
        HTML_put_character( me, '_' );
        // i++;
      }
      HText_appendCharacter( &me->text, 13 );
      me->in_word = 0;
      me->inP = 0;
      if ( me->List_Nesting_Level < 0 && me->Division_Level >= 0 )
        me->sp->_stack_element = me->DivisionAlignments[ me->Division_Level ];
      else
      if ( me->sp->_stack_element == 47 || me->sp->_stack_element == 41 )
        me->sp->_stack_element = 3;
      else
      if ( me->sp->_stack_element == 49 )
        me->sp->_stack_element = 2;
      else
        me->sp->_stack_element = 1;
      if ( me->List_Nesting_Level >= 0 || me->sp->tag_number == 3 )
      {
        HText_setLastChar( &me->text, ' ' );
        HText_appendCharacter( &me->text, 13 );
      }
      else
        HText_appendParagraph( &me->text );
    }
      break;
    case HTML_TAB:
      if ( present == 0 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTML: TAB tag has no attributes.  Ignored.\n" );
        }
      }
      else
      {
        HText_cancelStbl( &me->text );
        if ( me->style_change )
          actually_set_style( me );
        can_justify_this_line = 0;
        if ( present[0] && value[0] && ( strcasecomp( value[0], "left" ) || ( present[10] == 0 && present[6] == 0 ) ) )
        {
          HTML_put_character( me, ' ' );
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTML: ALIGN not 'left'.  Using space instead of TAB.\n" );
          }
        }
        else
        {
          if ( !( LYoverride_default_alignment( me ) & 255 ) && me->current_default_alignment != 1 )
          {
            HTML_put_character( me, ' ' );
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTML: Not HT_LEFT.  Using space instead of TAB.\n" );
            }
          }
          else
          if ( ( present[10] && value[10] && value[10][0] ) || ( present[6] && value[6] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[6][0] * 2 )) & 2048 ) ) )
          {
            int column, target = -1;
            int enval = 2;
            column = HText_getCurrentColumn( &me->text );
            if ( present[10] && value[10] && value[10][0] )
            {
              HTSACopy( &temp, value[10] );
              LYUCTranslateHTMLString( &temp, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
              if ( temp[0] )
              {
                target = HText_getTabIDColumn( &me->text, temp );
              }
            }
            else
            if ( ( temp == 0 || !temp[0] ) && present[6] && value[6] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[6][0] * 2 )) & 2048 ) )
            {
              target = (int)( ( (double)( atoi( value[6] ) ) / (double)( enval ) ) + 0.500000000000 );
            }
            if ( temp )
            {
              free( temp );
              temp = 0;
            }
            if ( target < column || HText_getMaximumColumn( &me->text ) < target )
            {
              HTML_put_character( me, ' ' );
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "HTML: Column out of bounds.  Using space instead of TAB.\n" );
              }
            }
            else
            {
              i = column;
              for ( ; i < target; i++ )
              {
                HText_appendCharacter( &me->text, 32 );
                // i++;
              }
              HText_setLastChar( &me->text, ' ' );
            }
          }
        }
        me->in_word = 0;
        if ( present[5] && value[5] && value[5][0] )
        {
          HTSACopy( &temp, value[5] );
          LYUCTranslateHTMLString( &temp, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
          if ( temp[0] )
            HText_setTabID( &me->text, temp );
          if ( temp )
          {
            free( temp );
            temp = 0;
          }
        }
      }
      break;
    case HTML_FONT:
      me->inFONT = 1;
      break;
    case HTML_B:
    case HTML_BLINK:
    case HTML_CITE:
    case HTML_EM:
    case HTML_I:
    case HTML_STRONG:
    case HTML_U:
      if ( me->style_change )
        actually_set_style( me );
      me->Underline_Level++;
      LYCheckForID( me, present, value, 3 );
      if ( me->inBoldA == 1 || me->inBoldH == 1 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Underline Level is %d\n", me->Underline_Level );
        }
      }
      else
      {
        if ( me->inUnderline == 0 )
        {
          HText_appendCharacter( &me->text, 3 );
          me->inUnderline = 1;
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Beginning underline\n" );
          }
        }
        else
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Underline Level is %d\n", me->Underline_Level );
          }
        }
      }
      break;
    default:
      LYCheckForID( me, present, value, 3 );
      break;
    case HTML_SUP:
      HText_appendCharacter( &me->text, 94 );
      LYCheckForID( me, present, value, 3 );
      break;
    case HTML_SUB:
      HText_appendCharacter( &me->text, 91 );
      LYCheckForID( me, present, value, 3 );
      break;
    case HTML_DEL:
    case HTML_S:
    case HTML_STRIKE:
      LYCheckForID( me, present, value, 3 );
      if ( me->inUnderline == 0 )
        HText_appendCharacter( &me->text, 3 );
      HTML_put_string( me, "[DEL:" );
      if ( me->inUnderline == 0 )
        HText_appendCharacter( &me->text, 4 );
      HTML_put_character( me, ' ' );
      me->in_word = 0;
      break;
    case HTML_INS:
      LYCheckForID( me, present, value, 3 );
      if ( me->inUnderline == 0 )
        HText_appendCharacter( &me->text, 3 );
      HTML_put_string( me, "[INS:" );
      if ( me->inUnderline == 0 )
        HText_appendCharacter( &me->text, 4 );
      HTML_put_character( me, ' ' );
      me->in_word = 0;
      break;
    case HTML_Q:
      LYCheckForID( me, present, value, 3 );
      if ( ( me->Quote_Level & 1 ) == 0 )
        HTML_put_character( me, '"' );
      else
        HTML_put_character( me, '`' );
      me->Quote_Level++;
      break;
    case HTML_PRE:
      me->inPRE = 0;
    case HTML_LISTING:
    case HTML_PLAINTEXT:
    case HTML_XMP:
      change_paragraph_style( me, styles[ ElementNumber ] );
      if ( me->style_change )
        actually_set_style( me );
      LYCheckForID( me, present, value, 3 );
      if ( me->comment_end )
        HText_appendText( &me->text, &me->comment_end );
      break;
    case HTML_BLOCKQUOTE:
    case HTML_BQ:
      change_paragraph_style( me, styles[ ElementNumber ] );
      if ( me->style_change )
        actually_set_style( me );
      if ( me->sp->tag_number == ElementNumber )
        LYEnsureDoubleSpace( me );
      LYCheckForID( me, present, value, 4 );
      break;
    case HTML_NOTE:
      change_paragraph_style( me, styles[ ElementNumber ] );
      if ( me->style_change )
        actually_set_style( me );
      if ( me->sp->tag_number == ElementNumber )
        LYEnsureDoubleSpace( me );
      LYCheckForID( me, present, value, 3 );
    {
      char *note = 0;
      if ( present && present[0] && value[0] && ( strcasecomp( value[0], "CAUTION" ) == 0 || strcasecomp( value[0], "WARNING" ) == 0 ) )
      {
        HTSACopy( &note, value[0] );
        LYUpperCase( note );
        HTSACat( &note, ":" );
      }
      else
      if ( present && present[6] && value[6] && ( strcasecomp( value[6], "CAUTION" ) == 0 || strcasecomp( value[6], "WARNING" ) == 0 ) )
      {
        HTSACopy( &note, value[6] );
        LYUpperCase( note );
        HTSACat( &note, ":" );
      }
      else
        HTSACopy( &note, "NOTE:" );
      if ( me->inUnderline == 0 )
        HText_appendCharacter( &me->text, 3 );
      HTML_put_string( me, note );
      if ( me->inUnderline == 0 )
        HText_appendCharacter( &me->text, 4 );
      HTML_put_character( me, ' ' );
      mark_justify_start_position( &me->text );
      if ( note )
      {
        free( note );
      }
      mark_justify_start_position( &me->text );
      me->inLABEL = 1;
      me->in_word = 0;
      me->inP = 0;
    }
      break;
    case HTML_ADDRESS:
      change_paragraph_style( me, styles[ ElementNumber ] );
      if ( me->style_change )
        actually_set_style( me );
      if ( me->sp->tag_number == ElementNumber )
        LYEnsureDoubleSpace( me );
      LYCheckForID( me, present, value, 3 );
      break;
    case HTML_DL:
      me->List_Nesting_Level++;
      if ( me->List_Nesting_Level <= 0 )
      {
        change_paragraph_style( me, styles[35] );
      }
      else
      if ( me->List_Nesting_Level > 5 )
      {
        change_paragraph_style( me, styles[136] );
      }
      else
      {
        change_paragraph_style( me, styles[ me->List_Nesting_Level + 130 ] );
      }
      if ( me->style_change )
        actually_set_style( me );
      LYCheckForID( me, present, value, 4 );
      break;
    case HTML_DLC:
      me->List_Nesting_Level++;
      if ( me->List_Nesting_Level <= 0 )
        change_paragraph_style( me, styles[36] );
      else
      if ( me->List_Nesting_Level > 5 )
        change_paragraph_style( me, styles[142] );
      else
        change_paragraph_style( me, styles[ me->List_Nesting_Level + 136 ] );
      if ( me->style_change )
        actually_set_style( me );
      LYCheckForID( me, present, value, 4 );
      break;
    case HTML_DT:
      LYCheckForID( me, present, value, 3 );
      if ( me->style_change == 0 )
      {
        BOOLEAN in_line_1 = HText_inLineOne( &me->text );
        HTCoord saved_spaceBefore = me->sp->_stack_element;
        HTCoord saved_spaceAfter = me->sp->_stack_element;
        if ( in_line_1 )
        {
          me->sp->_stack_element = 0;
          me->sp->_stack_element = 0;
        }
        HText_appendParagraph( &me->text );
        me->sp->_stack_element = saved_spaceBefore;
        me->sp->_stack_element = saved_spaceAfter;
        me->in_word = 0;
        me->sp->_stack_element = 1;
      }
      me->inP = 0;
      break;
    case HTML_DD:
      LYCheckForID( me, present, value, 3 );
      HText_setLastChar( &me->text, ' ' );
      if ( me->style_change == 0 )
      {
        if ( ( HText_LastLineEmpty( &me->text, 0 ) & 255 ) == 0 )
          HText_appendCharacter( &me->text, 13 );
        else
          HText_NegateLineOne( &me->text );
      }
      else
      {
        if ( me->style_change )
          actually_set_style( me );
        HText_appendCharacter( &me->text, 9 );
      }
      me->sp->_stack_element = 1;
      me->in_word = 0;
      me->inP = 0;
      break;
    case HTML_OL:
      me->OL_Type[ me->List_Nesting_Level <= 10 ? me->List_Nesting_Level + 1 : 11 ] = '1';
      if ( present && ( present[7] || present[8] ) )
      {
        int seqnum;
        if ( present[7] && value[7] && value[7][0] )
        {
          seqnum = atoi( value[7] );
        }
        else
        if ( present[8] && value[8] && value[8][0] )
        {
          seqnum = atoi( value[8] );
        }
        else
          seqnum = 1;
        if ( present[11] && value[11] )
        {
          if ( value[11][0] == 'A' )
          {
            me->OL_Type[ me->List_Nesting_Level <= 10 ? me->List_Nesting_Level + 1 : 11 ] = 'A';
            if ( seqnum <= 0 )
              seqnum = 1;
          }
          else
          if ( value[11][0] == 'a' )
          {
            me->OL_Type[ me->List_Nesting_Level <= 10 ? me->List_Nesting_Level + 1 : 11 ] = 'a';
            if ( seqnum <= 0 )
              seqnum = 1;
          }
          else
          if ( value[11][0] == 'I' )
          {
            me->OL_Type[ me->List_Nesting_Level <= 10 ? me->List_Nesting_Level + 1 : 11 ] = 'I';
            if ( seqnum <= 0 )
              seqnum = 1;
          }
          else
          if ( value[11][0] == 'i' )
          {
            me->OL_Type[ me->List_Nesting_Level <= 10 ? me->List_Nesting_Level + 1 : 11 ] = 'i';
            if ( seqnum <= 0 )
              seqnum = 1;
          }
          else
          if ( seqnum <= OL_VOID )
            seqnum = OL_VOID + 1;
        }
        else
        if ( seqnum <= OL_VOID )
          seqnum = OL_VOID + 1;
        me->OL_Counter[ me->List_Nesting_Level <= 10 ? me->List_Nesting_Level + 1 : 11 ] = seqnum;
      }
      else
      if ( present && present[3] )
      {
        me->OL_Counter[ me->List_Nesting_Level <= 10 ? me->List_Nesting_Level + 1 : 11 ] = OL_CONTINUE;
      }
      else
      {
        me->OL_Counter[ me->List_Nesting_Level <= 10 ? me->List_Nesting_Level + 1 : 11 ] = 1;
        if ( present && present[11] && value[11] )
        {
          if ( value[11][0] == 'A' )
          {
            me->OL_Type[ me->List_Nesting_Level <= 10 ? me->List_Nesting_Level + 1 : 11 ] = 'A';
          }
          else
          if ( value[11][0] == 'a' )
          {
            me->OL_Type[ me->List_Nesting_Level <= 10 ? me->List_Nesting_Level + 1 : 11 ] = 'a';
          }
          else
          if ( value[11][0] == 'I' )
          {
            me->OL_Type[ me->List_Nesting_Level <= 10 ? me->List_Nesting_Level + 1 : 11 ] = 'I';
          }
          else
          if ( value[11][0] == 'i' )
          {
            me->OL_Type[ me->List_Nesting_Level <= 10 ? me->List_Nesting_Level + 1 : 11 ] = 'i';
          }
        }
      }
      me->List_Nesting_Level++;
      if ( me->List_Nesting_Level <= 0 )
        change_paragraph_style( me, styles[ ElementNumber ] );
      else
      if ( me->List_Nesting_Level > 5 )
        change_paragraph_style( me, styles[124] );
      else
        change_paragraph_style( me, styles[ me->List_Nesting_Level + 118 ] );
      if ( me->style_change )
        actually_set_style( me );
      LYCheckForID( me, present, value, 5 );
      break;
    case HTML_UL:
      me->List_Nesting_Level++;
      if ( me->List_Nesting_Level <= 0 )
      {
        if ( ( present == 0 || !present[8] ) && ( present == 0 || !present[12] || value[12] == 0 || strcasecomp( value[12], "PLAIN" ) ) )
          change_paragraph_style( me, styles[ ElementNumber ] );
        else
        {
          change_paragraph_style( me, styles[33] );
          ElementNumber = HTML_DIR;
        }
      }
      else
      if ( me->List_Nesting_Level > 5 )
      {
        if ( ( present == 0 || !present[8] ) && ( present == 0 || !present[12] || value[12] == 0 || strcasecomp( value[12], "PLAIN" ) ) )
          change_paragraph_style( me, styles[124] );
        else
        {
          change_paragraph_style( me, styles[130] );
          ElementNumber = HTML_DIR;
        }
      }
      else
      if ( ( present == 0 || !present[8] ) && ( present == 0 || !present[12] || value[12] == 0 || strcasecomp( value[12], "PLAIN" ) ) )
        change_paragraph_style( me, styles[ me->List_Nesting_Level + 118 ] );
      else
      {
        change_paragraph_style( me, styles[ me->List_Nesting_Level + 124 ] );
        ElementNumber = HTML_DIR;
      }
      if ( me->style_change )
        actually_set_style( me );
      LYCheckForID( me, present, value, 5 );
      break;
    case HTML_DIR:
    case HTML_MENU:
      me->List_Nesting_Level++;
      if ( me->List_Nesting_Level <= 0 )
        change_paragraph_style( me, styles[ ElementNumber ] );
      else
      if ( me->List_Nesting_Level > 5 )
        change_paragraph_style( me, styles[130] );
      else
        change_paragraph_style( me, styles[ me->List_Nesting_Level + 124 ] );
      if ( me->style_change )
        actually_set_style( me );
      LYCheckForID( me, present, value, 5 );
      break;
    case HTML_LH:
      if ( me->style_change )
        actually_set_style( me );
      HText_appendParagraph( &me->text );
      LYCheckForID( me, present, value, 3 );
      HTML_put_character( me, 1 );
      HText_setLastChar( &me->text, ' ' );
      me->in_word = 0;
      me->inP = 0;
      break;
    case HTML_LI:
      if ( me->style_change )
        actually_set_style( me );
      HText_appendParagraph( &me->text );
      me->sp->_stack_element = 1;
      LYCheckForID( me, present, value, 4 );
    {
      int surrounding_tag_number = me->sp->tag_number;
      if ( surrounding_tag_number == 68 && me->sp < me->stack[799].style )
        surrounding_tag_number = me->sp[1].tag_number;
      if ( surrounding_tag_number == 80 )
      {
        char number_string[20];
        int counter = 11, seqnum;
        char seqtype;
        if ( present && present[11] && value[11] )
        {
          if ( value[11][0] == '1' )
            me->OL_Type[ counter ] = '1';
          else
          if ( value[11][0] == 'A' )
            me->OL_Type[ counter ] = 'A';
          else
          if ( value[11][0] == 'a' )
            me->OL_Type[ counter ] = 'a';
          else
          if ( value[11][0] == 'I' )
            me->OL_Type[ counter ] = 'I';
          else
          if ( value[11][0] == 'i' )
            me->OL_Type[ counter ] = 'i';
        }
        if ( present && present[12] && value[12] && value[12][0] && ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[12][0] * 2 )) & 2048 ) || ( value[12][0] == '-' && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[12][1] * 2 )) & 2048 ) ) ) )
        {
          seqnum = atoi( value[12] );
          if ( seqnum <= OL_VOID )
            seqnum = OL_VOID + 1;
          seqtype = me->OL_Type[ counter ];
          if ( seqtype != '1' && seqnum <= 0 )
            seqnum = 1;
          me->OL_Counter[ counter ] = seqnum + 1;
        }
        else
        if ( OL_VOID <= me->OL_Counter[ counter ] )
        {
          seqnum = me->OL_Counter[ counter ];
          me->OL_Counter[ counter ]++;
          seqtype = me->OL_Type[ counter ];
          if ( seqtype != '1' && seqnum <= 0 )
          {
            seqnum = 1;
            me->OL_Counter[ counter ] = seqnum + 1;
          }
        }
        else
        {
          seqnum = me->Last_OL_Count + 1;
          seqtype = me->Last_OL_Type;
          i = counter + -1;
          for ( ; i >= 0;  )
          {
            if ( OL_VOID < me->OL_Counter[ i ] )
            {
              seqnum = me->OL_Counter[ i ];
              me->OL_Counter[ i ]++;
              seqtype = me->OL_Type[ i ];
              i = 0;
            }
            i += -1;
          }
        }
        if ( seqtype == 'A' )
        {
          sprintf( number_string, LYUppercaseA_OL_String( seqnum ) );
        }
        else
        if ( seqtype == 'a' )
        {
          sprintf( number_string, LYLowercaseA_OL_String( seqnum ) );
        }
        else
        if ( seqtype == 'I' )
        {
          sprintf( number_string, LYUppercaseI_OL_String( seqnum ) );
        }
        else
        if ( seqtype == 'i' )
        {
          sprintf( number_string, LYLowercaseI_OL_String( seqnum ) );
        }
        else
          sprintf( number_string, "%2d.", seqnum );
        me->Last_OL_Count = seqnum;
        me->Last_OL_Type = seqtype;
        i = 0;
        for ( ; number_string[ i ]; i++ )
        {
          if ( number_string[ i ] == ' ' )
            HTML_put_character( me, 1 );
          else
            HTML_put_character( me, number_string[ i ] );
          // i++;
        }
        HTML_put_character( me, 1 );
        HText_setLastChar( &me->text, ' ' );
      }
      else
      {
        if ( surrounding_tag_number == 114 )
        {
          HTML_put_character( me, 1 );
          HTML_put_character( me, 1 );
          switch ( me->List_Nesting_Level - ( ( ( ( me->List_Nesting_Level + (/*HI*/int)( -1840700269 * me->List_Nesting_Level ) ) >> 2 ) - ( me->List_Nesting_Level >> 31 ) ) * 7 ) )
          {
          case 0:
            HTML_put_character( me, '*' );
            HTML_put_character( me, 1 );
            HText_setLastChar( &me->text, ' ' );
            break;
          case 1:
            HTML_put_character( me, '+' );
            break;
          case 2:
            HTML_put_character( me, 'o' );
            break;
          case 3:
            HTML_put_character( me, '#' );
            break;
          case 4:
            HTML_put_character( me, '@' );
            break;
          case 5:
            HTML_put_character( me, '-' );
            break;
          case 6:
            HTML_put_character( me, '=' );
            break;
          default:
            break;
          }
        }
        else
        {
          HTML_put_character( me, 1 );
          HTML_put_character( me, 1 );
          HText_setLastChar( &me->text, ' ' );
        }
      }
      mark_justify_start_position( &me->text );
      me->in_word = 0;
      me->inP = 0;
    }
      break;
    case HTML_SPAN:
      LYCheckForID( me, present, value, 3 );
      break;
    case HTML_BDO:
      LYCheckForID( me, present, value, 3 );
      break;
    case HTML_SPOT:
      LYCheckForID( me, present, value, 3 );
      break;
    case HTML_FN:
      change_paragraph_style( me, styles[ ElementNumber ] );
      if ( me->style_change )
        actually_set_style( me );
      if ( me->sp->tag_number == ElementNumber )
        LYEnsureDoubleSpace( me );
      LYCheckForID( me, present, value, 3 );
      if ( me->inUnderline == 0 )
        HText_appendCharacter( &me->text, 3 );
      HTML_put_string( me, "FOOTNOTE:" );
      if ( me->inUnderline == 0 )
        HText_appendCharacter( &me->text, 4 );
      HTML_put_character( me, ' ' );
      mark_justify_start_position( &me->text );
      me->inLABEL = 1;
      me->in_word = 0;
      me->inP = 0;
      break;
    case HTML_A:
      if ( me->map_address && present && present[4] )
      {
        LYStartArea( me, 0, 0, 0, tag_charset );
      }
      if ( LYMapsOnly )
        return 0;
      else
      {
        if ( me->inA )
        {
          if ( tags->contents )
            me->skip_stack++;
          HTML_end_element( me, 0, include );
        }
        me->inA = 1;
        if ( present && present[8] && value[8] && value[8][0] )
          HTSACopy( &id_string, value[8] );
        else
        if ( present && present[12] && value[12] && value[12][0] )
          HTSACopy( &id_string, value[12] );
        if ( id_string )
          LYUCTranslateHTMLString( &id_string, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
        if ( present && present[6] )
        {
          me->inBoldA = 1;
          if ( value[6] == 0 || value[6][0] == 0 )
            HTSACopy( &href, "#" );
          else
            HTSACopy( &href, value[6] );
          *(int*)&intern_flag = 0;
          if ( intern_flag )
            LYUCTranslateHTMLString( &href, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
          else
          {
            url_type = LYLegitimizeHREF( me, &href, 1, 1 );
            if ( url_type == 0 && strncmp( href, "/foo/..", 7 ) == 0 && ( strncasecomp( &me->node_anchor->address, "ftp:", 4 ) == 0 || ( ( me->node_anchor->address[0] == 'f' || me->node_anchor->address[0] == 'F' ) && strncasecomp( &me->node_anchor->address, "file:", 5 ) == 0 ) ) )
            {
              i = 0;
              while ( href[ i ] = href[ i + 7 ], href[ i ] )
              {
                i++;
              }
            }
          }
          if ( present[9] )
            intern_flag = 0;
        }
        else
        if ( bold_name_anchors == 1 )
          me->inBoldA = 1;
        if ( present && present[23] && value[23] )
        {
          HTSACopy( &temp, value[23] );
          if ( !intern_flag && !strcasecomp( value[23], &HTInternalLink->name ) && !( LYIsUIPage3( &me->node_anchor->address, 4, 0 ) & 255 ) && !( LYIsUIPage3( &me->node_anchor->address, 11, 0 ) & 255 ) && strncasecomp( &me->node_anchor->address, "LYNXIMGMAP:", 11 ) )
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTML: Found invalid HREF=\"%s\" TYPE=\"%s\"!\n", href, temp );
            }
            if ( temp )
            {
              free( temp );
              temp = 0;
            }
          }
        }
        me->CurrentA = HTAnchor_findChildAndLink( &me->node_anchor, id_string, href, ebp_860 );
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
        if ( id_string )
        {
          free( id_string );
          id_string = 0;
        }
        if ( me->CurrentA && present )
        {
          if ( present[22] && value[22] && value[22][0] )
          {
            HTSACopy( &title, value[22] );
            LYUCTranslateHTMLString( &title, me->tag_charset, current_char_set, 1, 1, 0, 0 );
            LYTrimHead( title );
            LYTrimTail( title );
            if ( !title[0] && title )
            {
              free( title );
              title = 0;
            }
          }
          if ( present[9] )
            dest_ismap = 1;
          if ( present[1] && value[1] && value[1][0] )
          {
            HTSACopy( &temp, value[1] );
            LYUCTranslateHTMLString( &temp, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
            dest_char_set = UCGetLYhndl_byMIME( temp );
            if ( dest_char_set < 0 )
              dest_char_set = UCLYhndl_for_unrec;
          }
          if ( title || dest_ismap == 1 || dest_char_set >= 0 )
          {
            dest = HTAnchor_parent( HTAnchor_followLink( &me->CurrentA ) );
          }
          if ( dest && title && HTAnchor_title( dest ) == 0 )
            HTAnchor_setTitle( dest, title );
          if ( dest && dest_ismap )
            dest->isISMAPScript = 1;
          if ( dest && me->node_anchor != dest && dest_char_set >= 0 )
          {
            HTAnchor_setUCInfoStage( dest, dest_char_set, 0, 1 );
            HTAnchor_setUCInfoStage( dest, dest_char_set, 1, 2 );
          }
          if ( temp )
          {
            free( temp );
            temp = 0;
          }
          dest = 0;
          dest_ismap = 0;
          if ( title )
          {
            free( title );
            title = 0;
          }
        }
        me->CurrentANum = HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
        if ( me->inBoldA == 1 && me->inBoldH == 0 )
          HText_appendCharacter( &me->text, 5 );
        if ( href == 0 && force_empty_hrefless_a )
        {
          if ( tags->contents )
            me->skip_stack++;
          HTML_end_element( me, 0, include );
        }
        if ( href )
        {
          free( href );
          href = 0;
        }
      }
      break;
    case HTML_IMG:
      if ( me->inA && me->CurrentA )
      {
        dest = HTAnchor_parent( HTAnchor_followLink( &me->CurrentA ) );
        if ( dest )
        {
          if ( dest->isISMAPScript == 1 )
          {
            dest_ismap = 1;
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTML: '%s' is an ISMAP script\n", &dest->address );
            }
          }
          else
          if ( present && present[9] )
          {
            dest_ismap = 1;
            dest->isISMAPScript = 1;
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTML: Designating '%s' as an ISMAP script\n", &dest->address );
            }
          }
        }
      }
      intern_flag = 0;
      if ( present && present[19] && value[19] && value[19][0] )
      {
        HTSACopy( &map_href, value[19] );
        *(int*)&intern_flag = 0;
        url_type = LYLegitimizeHREF( me, &map_href, 1, 1 );
        if ( !strchr( map_href, '#' ) && map_href )
        {
          free( map_href );
          map_href = 0;
        }
      }
      if ( map_href )
      {
        Base = &me->node_anchor->address;
      {
        char *free_me = map_href;
        map_href = HTParse( map_href, Base, 31 );
        if ( free_me )
        {
          free( free_me );
        }
        HTSACopy( &temp, "LYNXIMGMAP:" );
        HTSACat( &temp, map_href );
        HTSACopy( &map_href, temp );
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
      }
      }
      if ( LYNoISMAPifUSEMAP && map_href && dest_ismap )
      {
        dest_ismap = 0;
        dest = 0;
      }
      if ( present && present[17] && value[17] && value[17][0] )
      {
        HTSACopy( &title, value[17] );
        LYUCTranslateHTMLString( &title, me->tag_charset, current_char_set, 1, 1, 0, 0 );
        LYTrimHead( title );
        LYTrimTail( title );
        if ( !title[0] && title )
        {
          free( title );
          title = 0;
        }
      }
      if ( present && present[1] && value[1] && ( !clickable_images || ( ( clickable_images || map_href ) && value[1][0] ) ) )
      {
        HTSACopy( &alt_string, value[1] );
        LYUCTranslateHTMLString( &alt_string, me->tag_charset, current_char_set, 1, me->UsePlainSpace, me->HiddenValue, 0 );
        if ( clickable_images || map_href )
        {
          LYTrimHead( alt_string );
          LYTrimTail( alt_string );
          if ( alt_string[0] == 0 )
          {
            if ( map_href )
            {
              if ( title )
              {
              }
              else
              {
                temp = MakeNewMapValue( value, "USEMAP" );
              }
              HTSACopy( &alt_string, title );
              if ( temp )
              {
                free( temp );
                temp = 0;
              }
            }
            else
            {
              if ( dest_ismap )
              {
                if ( title )
                {
                }
                else
                {
                  temp = MakeNewMapValue( value, "ISMAP" );
                }
                HTSACopy( &alt_string, title );
                if ( temp )
                {
                  free( temp );
                  temp = 0;
                }
              }
              else
              {
                if ( me->inA == 1 && dest )
                {
                  if ( title )
                  {
                  }
                  else
                  {
                    if ( verbose_img )
                    {
                      newtitle = MakeNewTitle( value, 15 );
                    }
                    else
                    {
                    }
                  }
                  HTSACopy( &alt_string, title );
                }
                else
                {
                  if ( title )
                  {
                  }
                  else
                  {
                    if ( present && present[10] )
                    {
                    }
                    else
                    {
                      if ( verbose_img )
                      {
                        newtitle = MakeNewTitle( value, 15 );
                      }
                      else
                      {
                      }
                    }
                  }
                  HTSACopy( &alt_string, title );
                }
              }
            }
          }
        }
      }
      else
      if ( map_href )
      {
        if ( title )
        {
        }
        else
        {
          temp = MakeNewMapValue( value, "USEMAP" );
        }
        HTSACopy( &alt_string, title );
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
      }
      else
      if ( dest_ismap == 1 || ( me->inA && present && present[9] ) )
      {
        if ( title )
        {
        }
        else
        {
          temp = MakeNewMapValue( value, "ISMAP" );
        }
        HTSACopy( &alt_string, title );
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
      }
      else
      if ( me->inA == 1 && dest )
      {
        if ( title )
        {
        }
        else
        {
          if ( verbose_img )
          {
            newtitle = MakeNewTitle( value, 15 );
          }
          else
          {
          }
        }
        HTSACopy( &alt_string, title );
      }
      else
      {
        if ( pseudo_inline_alts || clickable_images )
        {
          if ( title )
          {
          }
          else
          {
            if ( present && present[10] )
            {
            }
            else
            {
              if ( verbose_img )
              {
                newtitle = MakeNewTitle( value, 15 );
              }
              else
              {
              }
            }
          }
          HTSACopy( &alt_string, title );
        }
        else
        {
          HTSACopy( &alt_string, "" );
        }
      }
      if ( !alt_string[0] && map_href )
      {
        temp = MakeNewMapValue( value, "USEMAP" );
        HTSACopy( &alt_string, temp );
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTML IMG: USEMAP=%d ISMAP=%d ANCHOR=%d PARA=%d\n", map_href != 0, dest_ismap == 1, me->inA, me->inP );
      }
      if ( present && present[8] && value[8] && value[8][0] )
      {
        HTSACopy( &id_string, value[8] );
        LYUCTranslateHTMLString( &id_string, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
        if ( !id_string[0] && id_string )
        {
          free( id_string );
          id_string = 0;
        }
      }
      if ( clickable_images && present && present[15] && value[15] && value[15][0] )
      {
        HTSACopy( &href, value[15] );
        LYLegitimizeHREF( me, &href, 1, 1 );
        if ( me->inA )
        {
          if ( map_href )
          {
            if ( dest_ismap )
            {
              HTML_put_character( me, ' ' );
              me->in_word = 0;
              temp = MakeNewMapValue( value, "ISMAP" );
              HTML_put_string( me, temp );
              if ( temp )
              {
                free( temp );
                temp = 0;
              }
            }
            else
            if ( dest )
            {
              HTML_put_character( me, ' ' );
              me->in_word = 0;
              HTML_put_string( me, "[LINK]" );
            }
            if ( me->inBoldA == 1 && me->inBoldH == 0 )
              HText_appendCharacter( &me->text, 6 );
            me->inBoldA = 0;
            HText_endAnchor( &me->text, me->CurrentANum );
            *(int*)&me->CurrentANum = 0;
            if ( dest_ismap || dest )
              HTML_put_character( me, '-' );
            if ( id_string )
            {
              ID_A = HTAnchor_findChildAndLink( &me->node_anchor, id_string, 0, 0 );
              if ( ID_A )
              {
                HText_beginAnchor( &me->text, me->inUnderline, ID_A );
                HText_endAnchor( &me->text, 0 );
              }
            }
            me->CurrentA = HTAnchor_findChildAndLink( &me->node_anchor, 0, map_href, 0 );
            if ( me->CurrentA && title )
            {
              dest = HTAnchor_parent( HTAnchor_followLink( &me->CurrentA ) );
              if ( dest && HTAnchor_title( dest ) == 0 )
                HTAnchor_setTitle( dest, title );
            }
            me->CurrentANum = HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
            if ( me->inBoldA == 0 && me->inBoldH == 0 )
              HText_appendCharacter( &me->text, 5 );
            me->inBoldA = 1;
          }
          else
          {
            HTML_put_character( me, ' ' );
            me->in_word = 0;
          }
          HTML_put_string( me, alt_string );
          if ( me->inBoldA == 1 && me->inBoldH == 0 )
            HText_appendCharacter( &me->text, 6 );
          me->inBoldA = 0;
          HText_endAnchor( &me->text, me->CurrentANum );
          *(int*)&me->CurrentANum = 0;
          HTML_put_character( me, '-' );
          if ( newtitle )
          {
            free( newtitle );
            newtitle = 0;
          }
          if ( present && present[10] )
          {
          }
          else
          {
            if ( verbose_img )
            {
              newtitle = MakeNewTitle( value, 15 );
            }
            else
            {
            }
          }
          HTSACopy( &alt_string, newtitle );
          if ( id_string && map_href == 0 )
          {
            ID_A = HTAnchor_findChildAndLink( &me->node_anchor, id_string, 0, 0 );
            if ( ID_A )
            {
              HText_beginAnchor( &me->text, me->inUnderline, ID_A );
              HText_endAnchor( &me->text, 0 );
            }
          }
        }
        else
        if ( map_href )
        {
          HTML_put_character( me, ' ' );
          me->in_word = 0;
          if ( id_string )
          {
            ID_A = HTAnchor_findChildAndLink( &me->node_anchor, id_string, 0, 0 );
            if ( ID_A )
            {
              HText_beginAnchor( &me->text, me->inUnderline, ID_A );
              HText_endAnchor( &me->text, 0 );
            }
          }
          me->CurrentA = HTAnchor_findChildAndLink( &me->node_anchor, 0, map_href, 0 );
          if ( me->CurrentA && title )
          {
            dest = HTAnchor_parent( HTAnchor_followLink( &me->CurrentA ) );
            if ( dest && HTAnchor_title( dest ) == 0 )
              HTAnchor_setTitle( dest, title );
          }
          me->CurrentANum = HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
          if ( me->inBoldA == 0 && me->inBoldH == 0 )
            HText_appendCharacter( &me->text, 5 );
          me->inBoldA = 1;
          HTML_put_string( me, alt_string );
          if ( me->inBoldA == 1 && me->inBoldH == 0 )
            HText_appendCharacter( &me->text, 6 );
          me->inBoldA = 0;
          HText_endAnchor( &me->text, me->CurrentANum );
          *(int*)&me->CurrentANum = 0;
          HTML_put_character( me, '-' );
          if ( newtitle )
          {
            free( newtitle );
            newtitle = 0;
          }
          if ( present && present[10] )
          {
          }
          else
          {
            if ( verbose_img )
            {
              newtitle = MakeNewTitle( value, 15 );
            }
            else
            {
            }
          }
          HTSACopy( &alt_string, "(IMAGE)" );
        }
        else
        {
          HTML_put_character( me, ' ' );
          me->in_word = 0;
          if ( id_string )
          {
            ID_A = HTAnchor_findChildAndLink( &me->node_anchor, id_string, 0, 0 );
            if ( ID_A )
            {
              HText_beginAnchor( &me->text, me->inUnderline, ID_A );
              HText_endAnchor( &me->text, 0 );
            }
          }
        }
        me->CurrentA = HTAnchor_findChildAndLink( &me->node_anchor, 0, href, 0 );
        if ( href )
        {
          free( href );
          href = 0;
        }
        me->CurrentANum = HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
        if ( me->inBoldH == 0 )
          HText_appendCharacter( &me->text, 5 );
        HTML_put_string( me, alt_string );
        if ( me->inA == 0 )
        {
          if ( me->inBoldH == 0 )
            HText_appendCharacter( &me->text, 6 );
          HText_endAnchor( &me->text, me->CurrentANum );
          *(int*)&me->CurrentANum = 0;
          HTML_put_character( me, ' ' );
          me->in_word = 0;
        }
        else
        {
          HTML_put_character( me, ' ' );
          me->in_word = 0;
          me->inBoldA = 1;
        }
      }
      else
      if ( map_href )
      {
        if ( me->inA )
        {
          if ( dest_ismap )
          {
            HTML_put_character( me, ' ' );
            me->in_word = 0;
            temp = MakeNewMapValue( value, "ISMAP" );
            HTML_put_string( me, temp );
            if ( temp )
            {
              free( temp );
              temp = 0;
            }
          }
          else
          if ( dest )
          {
            HTML_put_character( me, ' ' );
            me->in_word = 0;
            HTML_put_string( me, "[LINK]" );
          }
          if ( me->inBoldA == 1 && me->inBoldH == 0 )
            HText_appendCharacter( &me->text, 6 );
          me->inBoldA = 0;
          HText_endAnchor( &me->text, me->CurrentANum );
          *(int*)&me->CurrentANum = 0;
          if ( dest_ismap || dest )
            HTML_put_character( me, '-' );
        }
        else
        {
          HTML_put_character( me, ' ' );
          me->in_word = 0;
        }
        me->CurrentA = HTAnchor_findChildAndLink( &me->node_anchor, 0, map_href, 0 );
        if ( me->CurrentA && title )
        {
          dest = HTAnchor_parent( HTAnchor_followLink( &me->CurrentA ) );
          if ( dest && HTAnchor_title( dest ) == 0 )
            HTAnchor_setTitle( dest, title );
        }
        me->CurrentANum = HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
        if ( me->inBoldA == 0 && me->inBoldH == 0 )
          HText_appendCharacter( &me->text, 5 );
        me->inBoldA = 1;
        HTML_put_string( me, alt_string );
        if ( me->inA == 0 )
        {
          if ( me->inBoldA == 1 && me->inBoldH == 0 )
            HText_appendCharacter( &me->text, 6 );
          me->inBoldA = 0;
          HText_endAnchor( &me->text, me->CurrentANum );
          *(int*)&me->CurrentANum = 0;
        }
      }
      else
      {
        HTML_put_character( me, ' ' );
        me->in_word = 0;
        if ( id_string )
        {
          ID_A = HTAnchor_findChildAndLink( &me->node_anchor, id_string, 0, 0 );
          if ( ID_A )
          {
            HText_beginAnchor( &me->text, me->inUnderline, ID_A );
            HText_endAnchor( &me->text, 0 );
          }
        }
        HTML_put_string( me, alt_string );
        HTML_put_character( me, ' ' );
        me->in_word = 0;
      }
      if ( map_href )
      {
        free( map_href );
        map_href = 0;
      }
      if ( alt_string )
      {
        free( alt_string );
        alt_string = 0;
      }
      if ( id_string )
      {
        free( id_string );
        id_string = 0;
      }
      if ( title )
      {
        free( title );
        title = 0;
      }
      if ( newtitle )
      {
        free( newtitle );
        newtitle = 0;
      }
      dest = 0;
      dest_ismap = 0;
      break;
    case HTML_MAP:
      if ( present && present[5] && value[5] && value[5][0] )
        HTSACopy( &id_string, value[5] );
      else
      if ( present && present[3] && value[3] && value[3][0] )
        HTSACopy( &id_string, value[3] );
      if ( id_string )
      {
        LYUCTranslateHTMLString( &id_string, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
        if ( !id_string[0] && id_string )
        {
          free( id_string );
          id_string = 0;
        }
      }
      if ( LYMapsOnly == 0 )
        LYHandleID( me, id_string );
      if ( id_string )
      {
        HTSACopy( &me->map_address, &me->node_anchor->address );
        cp = strchr( &me->map_address, '#' );
        if ( cp )
          cp[0] = 0;
        HTSACat( &me->map_address, "#" );
        HTSACat( &me->map_address, id_string );
        if ( id_string )
        {
          free( id_string );
          id_string = 0;
        }
        if ( present && present[7] && value[7] && value[7][0] )
        {
          HTSACopy( &title, value[7] );
          LYUCTranslateHTMLString( &title, me->tag_charset, current_char_set, 1, 1, 0, 0 );
          LYTrimHead( title );
          LYTrimTail( title );
          if ( !title[0] && title )
          {
            free( title );
            title = 0;
          }
        }
        LYAddImageMap( &me->map_address, title, &me->node_anchor );
        if ( title )
        {
          free( title );
          title = 0;
        }
      }
      break;
    case HTML_AREA:
      if ( me->map_address && present && present[6] && value[6] && value[6][0] )
      {
        HTSACopy( &href, value[6] );
        *(int*)&intern_flag = 0;
        url_type = LYLegitimizeHREF( me, &href, 1, 1 );
        Base = &me->node_anchor->address;
      {
        char *free_me = href;
        href = HTParse( href, Base, 31 );
        if ( free_me )
        {
          free( free_me );
        }
        if ( present[1] && value[1] && value[1][0] )
          HTSACopy( &alt_string, value[1] );
        else
        if ( present[17] && value[17] && value[17][0] )
          HTSACopy( &alt_string, value[17] );
        if ( alt_string )
        {
          LYUCTranslateHTMLString( &alt_string, me->tag_charset, current_char_set, 1, me->UsePlainSpace, me->HiddenValue, 0 );
          LYTrimHead( alt_string );
          LYTrimTail( alt_string );
          if ( alt_string[0] == 0 )
            HTSACopy( &alt_string, href );
        }
        else
          HTSACopy( &alt_string, href );
        LYAddMapElement( &me->map_address, href, alt_string, &me->node_anchor, intern_flag );
        if ( href )
        {
          free( href );
          href = 0;
        }
        if ( alt_string )
        {
          free( alt_string );
          alt_string = 0;
        }
      }
      }
      break;
    case HTML_BODYTEXT:
      LYCheckForID( me, present, value, 4 );
      break;
    case HTML_TEXTFLOW:
      LYCheckForID( me, present, value, 4 );
      break;
    case HTML_FIG:
      if ( present )
      {
        LYHandleFIG( me, present, value, present[8], present[7], 0, 0, 1, 1, &intern_flag );
      }
      else
        LYHandleFIG( me, 0, 0, 0, 0, 0, 0, 1, 1, &intern_flag );
      break;
    case HTML_OBJECT:
      if ( me->object_started == 0 )
      {
        if ( present )
        {
          if ( present[8] )
            me->object_declare = 1;
          if ( present[17] )
            me->object_shapes = 1;
          if ( present[13] )
            me->object_ismap = 1;
          if ( present[23] && value[23] && value[23][0] )
          {
            HTSACopy( &me->object_usemap, value[23] );
            LYUCTranslateHTMLString( &me->object_usemap, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
            if ( !me->object_usemap[0] && me->object_usemap )
            {
              free( &me->object_usemap );
              *(int*)&me->object_usemap = 0;
            }
          }
          if ( present[12] && value[12] && value[12][0] )
          {
            HTSACopy( &me->object_id, value[12] );
            LYUCTranslateHTMLString( &me->object_id, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
            if ( !me->object_id[0] && me->object_id )
            {
              free( &me->object_id );
              *(int*)&me->object_id = 0;
            }
          }
          if ( present[21] && value[21] && value[21][0] )
          {
            HTSACopy( &me->object_title, value[21] );
            LYUCTranslateHTMLString( &me->object_title, me->tag_charset, current_char_set, 1, 1, 0, 0 );
            LYTrimHead( &me->object_title );
            LYTrimTail( &me->object_title );
            if ( me->object_title == 0 && me->object_title )
            {
              free( &me->object_title );
              *(int*)&me->object_title = 0;
            }
          }
          if ( present[7] && value[7] && value[7][0] )
          {
            HTSACopy( &me->object_data, value[7] );
            LYUCTranslateHTMLString( &me->object_data, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
            if ( !me->object_data[0] && me->object_data )
            {
              free( &me->object_data );
              *(int*)&me->object_data = 0;
            }
          }
          if ( present[22] && value[22] && value[22][0] )
          {
            HTSACopy( &me->object_type, value[22] );
            LYUCTranslateHTMLString( &me->object_type, me->tag_charset, current_char_set, 1, 1, 0, 0 );
            LYTrimHead( &me->object_type );
            LYTrimTail( &me->object_type );
            if ( me->object_type == 0 && me->object_type )
            {
              free( &me->object_type );
              *(int*)&me->object_type = 0;
            }
          }
          if ( present[4] && value[4] && value[4][0] )
          {
            HTSACopy( &me->object_classid, value[4] );
            LYUCTranslateHTMLString( &me->object_classid, me->tag_charset, current_char_set, 1, 1, 0, 0 );
            LYTrimHead( &me->object_classid );
            LYTrimTail( &me->object_classid );
            if ( me->object_classid == 0 && me->object_classid )
            {
              free( &me->object_classid );
              *(int*)&me->object_classid = 0;
            }
          }
          if ( present[5] && value[5] && value[5][0] )
          {
            HTSACopy( &me->object_codebase, value[5] );
            LYUCTranslateHTMLString( &me->object_codebase, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
            if ( !me->object_codebase[0] && me->object_codebase )
            {
              free( &me->object_codebase );
              *(int*)&me->object_codebase = 0;
            }
          }
          if ( present[6] && value[6] && value[6][0] )
          {
            HTSACopy( &me->object_codetype, value[6] );
            LYUCTranslateHTMLString( &me->object_codetype, me->tag_charset, current_char_set, 1, 1, 0, 0 );
            LYTrimHead( &me->object_codetype );
            LYTrimTail( &me->object_codetype );
            if ( me->object_codetype == 0 && me->object_codetype )
            {
              free( &me->object_codetype );
              *(int*)&me->object_codetype = 0;
            }
          }
          if ( present[15] && value[15] && value[15][0] )
          {
            HTSACopy( &me->object_name, value[15] );
            LYUCTranslateHTMLString( &me->object_name, me->tag_charset, current_char_set, 1, 1, 0, 0 );
            LYTrimHead( &me->object_name );
            LYTrimTail( &me->object_name );
            if ( me->object_name == 0 && me->object_name )
            {
              free( &me->object_name );
              *(int*)&me->object_name = 0;
            }
          }
        }
        if ( present == 0 || ( me->object_declare == 0 && me->object_name == 0 && me->object_shapes == 0 && me->object_usemap == 0 ) )
        {
          if ( LYMapsOnly == 0 )
          {
            if ( ( !clickable_images || me->object_data == 0 || me->object_data == 0 || me->object_classid || me->object_codebase || me->object_codetype ) && me->object_data )
            {
              free( &me->object_data );
              *(int*)&me->object_data = 0;
            }
            if ( me->object_data )
            {
              HTStartAnchor5( &me->isa->name[0], 0, value[7], value[22], tag_charset );
              if ( me->object_type && strncasecomp( &me->object_type, "image/", 6 ) == 0 )
                HTML_put_string( me, "(IMAGE)" );
              else
                HTML_put_string( me, "(OBJECT)" );
              HTML_end_element( me, 0, 0 );
            }
            else
            {
              if ( me->object_id )
                LYHandleID( me, &me->object_id );
            }
          }
          clear_objectdata( me );
          status = 701;
          if ( me->sp->tag_number == 41 && me->objects_figged_open > 0 )
            ElementNumber = 149;
          else
          {
            me->objects_mixed_open++;
            if ( tags[79].contents )
              me->skip_stack++;
          }
        }
        else
        {
          if ( me->object_declare == 0 && me->object_name == 0 && me->object_shapes == 1 )
          {
            LYHandleFIG( me, present, value, 1, 1, &me->object_id, 0, 0, 1, &intern_flag );
            clear_objectdata( me );
            status = 701;
            me->objects_figged_open++;
            ElementNumber = HTML_FIG;
          }
          else
            me->object_started = 1;
        }
      }
      break;
    case HTML_OVERLAY:
      if ( clickable_images && me->inFIG && present && present[5] && value[5] && value[5][0] )
      {
        HTSACopy( &href, value[5] );
        LYLegitimizeHREF( me, &href, 1, 1 );
        if ( href[0] )
        {
          if ( me->inA )
          {
            if ( tags->contents )
              me->skip_stack++;
            HTML_end_element( me, 0, include );
          }
          me->CurrentA = HTAnchor_findChildAndLink( &me->node_anchor, 0, href, 0 );
          HTML_put_character( me, ' ' );
          HText_appendCharacter( &me->text, 43 );
          me->CurrentANum = HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
          if ( me->inBoldH == 0 )
            HText_appendCharacter( &me->text, 5 );
          HTML_put_string( me, "[OVERLAY]" );
          if ( me->inBoldH == 0 )
            HText_appendCharacter( &me->text, 6 );
          HText_endAnchor( &me->text, me->CurrentANum );
          HTML_put_character( me, ' ' );
          me->in_word = 0;
        }
        if ( href )
        {
          free( href );
          href = 0;
        }
      }
      break;
    case HTML_APPLET:
      me->inAPPLET = 1;
      me->inAPPLETwithP = 0;
      HTML_put_character( me, ' ' );
      if ( present && present[10] && value[10] && value[10][0] )
        HTSACopy( &id_string, value[10] );
      else
      if ( present && present[12] && value[12] && value[12][0] )
        HTSACopy( &id_string, value[12] );
      if ( id_string )
      {
        LYUCTranslateHTMLString( &id_string, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
        LYHandleID( me, id_string );
        if ( id_string )
        {
          free( id_string );
          id_string = 0;
        }
      }
      me->in_word = 0;
      if ( present && present[1] && value[1] && ( !clickable_images || ( clickable_images && value[1][0] ) ) )
      {
        HTSACopy( &alt_string, value[1] );
        LYUCTranslateHTMLString( &alt_string, me->tag_charset, current_char_set, 1, me->UsePlainSpace, me->HiddenValue, 0 );
        if ( clickable_images )
        {
          LYTrimHead( alt_string );
          LYTrimTail( alt_string );
          if ( alt_string[0] == 0 )
            HTSACopy( &alt_string, "[APPLET]" );
        }
      }
      else
      if ( clickable_images )
        HTSACopy( &alt_string, "[APPLET]" );
      else
        HTSACopy( &alt_string, "" );
      if ( clickable_images && present && present[4] && value[4] && value[4][0] )
      {
        char *base = 0;
        Base = &me->node_anchor->address;
        if ( present[5] && value[5] && value[5][0] )
        {
          HTSACopy( &base, value[5] );
          LYRemoveBlanks( base );
          LYUCTranslateHTMLString( &base, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
          if ( base[0] == 0 )
            HTSACopy( &base, "/" );
          LYAddHtmlSep( &base );
          LYLegitimizeHREF( me, &base, 1, 0 );
        {
          char *free_me = base;
          base = HTParse( base, Base, 31 );
          if ( free_me )
          {
            free( free_me );
          }
        }
        }
        HTSACopy( &href, value[4] );
        LYLegitimizeHREF( me, &href, 1, 0 );
      {
        char *free_me = href;
        href = HTParse( href, Base, 31 );
        if ( free_me )
        {
          free( free_me );
        }
        if ( base )
        {
          free( base );
          base = 0;
        }
        if ( href[0] )
        {
          if ( me->inA )
          {
            if ( me->inBoldA == 1 && me->inBoldH == 0 )
              HText_appendCharacter( &me->text, 6 );
            HText_endAnchor( &me->text, me->CurrentANum );
            HTML_put_character( me, '-' );
          }
          me->CurrentA = HTAnchor_findChildAndLink( &me->node_anchor, 0, href, 0 );
          me->CurrentANum = HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
          if ( me->inBoldH == 0 )
            HText_appendCharacter( &me->text, 5 );
          HTML_put_string( me, alt_string );
          if ( me->inA == 0 )
          {
            if ( me->inBoldH == 0 )
              HText_appendCharacter( &me->text, 6 );
            HText_endAnchor( &me->text, me->CurrentANum );
            *(int*)&me->CurrentANum = 0;
          }
          HTML_put_character( me, ' ' );
          me->in_word = 0;
        }
        if ( href )
        {
          free( href );
          href = 0;
        }
      }
      }
      else
      if ( alt_string[0] )
      {
        HTML_put_string( me, alt_string );
        HTML_put_character( me, ' ' );
        me->in_word = 0;
      }
      if ( alt_string )
      {
        free( alt_string );
        alt_string = 0;
      }
      if ( id_string )
      {
        free( id_string );
        id_string = 0;
      }
      break;
    case HTML_BGSOUND:
      if ( clickable_images && present && present[6] && value[6] && value[6][0] )
      {
        HTSACopy( &href, value[6] );
        LYLegitimizeHREF( me, &href, 1, 1 );
        if ( href[0] == 0 )
        {
          if ( href )
          {
            free( href );
            href = 0;
          }
        }
        else
        {
          if ( me->inA )
          {
            if ( me->inBoldA == 1 && me->inBoldH == 0 )
              HText_appendCharacter( &me->text, 6 );
            HText_endAnchor( &me->text, me->CurrentANum );
            HTML_put_character( me, '-' );
          }
          else
          {
            HTML_put_character( me, ' ' );
            me->in_word = 0;
          }
          me->CurrentA = HTAnchor_findChildAndLink( &me->node_anchor, 0, href, 0 );
          me->CurrentANum = HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
          if ( me->inBoldH == 0 )
            HText_appendCharacter( &me->text, 5 );
          HTML_put_string( me, "[BGSOUND]" );
          if ( me->inA == 0 )
          {
            if ( me->inBoldH == 0 )
              HText_appendCharacter( &me->text, 6 );
            HText_endAnchor( &me->text, me->CurrentANum );
            *(int*)&me->CurrentANum = 0;
          }
          HTML_put_character( me, ' ' );
          me->in_word = 0;
          if ( href )
          {
            free( href );
            href = 0;
          }
        }
      }
      break;
    case HTML_EMBED:
      if ( pseudo_inline_alts || clickable_images )
        HTML_put_character( me, ' ' );
      if ( present && present[7] && value[7] && value[7][0] )
        HTSACopy( &id_string, value[7] );
      else
      if ( present && present[12] && value[12] && value[12][0] )
        HTSACopy( &id_string, value[12] );
      if ( id_string )
      {
        LYUCTranslateHTMLString( &id_string, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
        LYHandleID( me, id_string );
        if ( id_string )
        {
          free( id_string );
          id_string = 0;
        }
      }
      if ( pseudo_inline_alts || clickable_images )
        me->in_word = 0;
      if ( present && present[1] && value[1] && ( !clickable_images || ( clickable_images && value[1][0] ) ) )
      {
        HTSACopy( &alt_string, value[1] );
        LYUCTranslateHTMLString( &alt_string, me->tag_charset, current_char_set, 1, me->UsePlainSpace, me->HiddenValue, 0 );
        if ( clickable_images )
        {
          LYTrimHead( alt_string );
          LYTrimTail( alt_string );
          if ( alt_string[0] == 0 )
            HTSACopy( &alt_string, "[EMBED]" );
        }
      }
      else
      if ( pseudo_inline_alts || clickable_images )
        HTSACopy( &alt_string, "[EMBED]" );
      else
        HTSACopy( &alt_string, "" );
      if ( clickable_images && present && present[15] && value[15] && value[15][0] )
      {
        HTSACopy( &href, value[15] );
        LYLegitimizeHREF( me, &href, 1, 1 );
        if ( href[0] )
        {
          if ( me->inA )
          {
            if ( me->inBoldA == 1 && me->inBoldH == 0 )
              HText_appendCharacter( &me->text, 6 );
            HText_endAnchor( &me->text, me->CurrentANum );
            HTML_put_character( me, '-' );
          }
          me->CurrentA = HTAnchor_findChildAndLink( &me->node_anchor, 0, href, 0 );
          me->CurrentANum = HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
          if ( me->inBoldH == 0 )
            HText_appendCharacter( &me->text, 5 );
          HTML_put_string( me, alt_string );
          if ( me->inBoldH == 0 )
            HText_appendCharacter( &me->text, 6 );
          if ( me->inA == 0 )
          {
            if ( me->inBoldH == 0 )
              HText_appendCharacter( &me->text, 6 );
            HText_endAnchor( &me->text, me->CurrentANum );
            *(int*)&me->CurrentANum = 0;
          }
          HTML_put_character( me, ' ' );
          me->in_word = 0;
        }
        if ( href )
        {
          free( href );
          href = 0;
        }
      }
      else
      if ( alt_string[0] )
      {
        HTML_put_string( me, alt_string );
        HTML_put_character( me, ' ' );
        me->in_word = 0;
      }
      if ( alt_string )
      {
        free( alt_string );
        alt_string = 0;
      }
      if ( id_string )
      {
        free( id_string );
        id_string = 0;
      }
      break;
    case HTML_CREDIT:
      LYEnsureDoubleSpace( me );
      LYResetParagraphAlignment( me );
      me->inCREDIT = 1;
      LYCheckForID( me, present, value, 3 );
      if ( me->inUnderline == 0 )
        HText_appendCharacter( &me->text, 3 );
      HTML_put_string( me, "CREDIT:" );
      if ( me->inUnderline == 0 )
        HText_appendCharacter( &me->text, 4 );
      HTML_put_character( me, ' ' );
      mark_justify_start_position( &me->text );
      if ( me->inFIG )
        me->inFIGwithP = 1;
      if ( me->inAPPLET )
        me->inAPPLETwithP = 1;
      me->inLABEL = 1;
      me->in_word = 0;
      me->inP = 0;
      break;
    case HTML_CAPTION:
      LYEnsureDoubleSpace( me );
      LYResetParagraphAlignment( me );
      me->inCAPTION = 1;
      LYCheckForID( me, present, value, 5 );
      if ( me->inUnderline == 0 )
        HText_appendCharacter( &me->text, 3 );
      HTML_put_string( me, "CAPTION:" );
      if ( me->inUnderline == 0 )
        HText_appendCharacter( &me->text, 4 );
      HTML_put_character( me, ' ' );
      mark_justify_start_position( &me->text );
      if ( me->inFIG )
        me->inFIGwithP = 1;
      if ( me->inAPPLET )
        me->inAPPLETwithP = 1;
      me->inLABEL = 1;
      me->in_word = 0;
      me->inP = 0;
      break;
    case HTML_FORM:
    {
      char *action = 0;
      char *method = 0;
      char *enctype = 0;
      char *accept_cs = 0;
      HTChildAnchor *source;
      HTAnchor *link_dest;
      if ( me->inFORM )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTML: Missing FORM end tag.  Faking it!\n" );
        }
        if ( tags[44].contents )
          me->skip_stack++;
        HTML_end_element( me, 44, include );
      }
      me->inFORM = 1;
      form_in_htext = 1;
      if ( present && present[1] )
      {
        accept_cs = "UNKNOWN";
      }
      Base = &me->node_anchor->address;
      if ( present && present[2] && value[2] )
      {
        HTSACopy( &action, value[2] );
        LYLegitimizeHREF( me, &action, 1, 1 );
      {
        char *free_me = action;
        action = HTParse( action, Base, 31 );
        if ( free_me )
        {
          free( free_me );
          free_me = 0;
        }
      }
      }
      else
        HTSACopy( &action, Base );
      source = HTAnchor_findChildAndLink( &me->node_anchor, 0, action, 0 );
      link_dest = HTAnchor_followLink( source );
      if ( link_dest )
      {
        char *cp_freeme = HTAnchor_address( link_dest );
        if ( cp_freeme )
        {
          HTSACopy( &action, cp_freeme );
          if ( cp_freeme )
          {
            free( cp_freeme );
            cp_freeme = 0;
          }
        }
        else
          HTSACopy( &action, "" );
      }
      if ( present && present[9] )
      {
        HTSACopy( &method, "GET" );
      }
      if ( present && present[6] && value[6] && value[6][0] )
      {
        HTSACopy( &enctype, value[6] );
        LYLowerCase( enctype );
      }
      if ( present )
      {
        if ( present[16] && value[16] && value[16][0] )
          HTSACopy( &title, value[16] );
        else
        if ( present[14] && value[14] && value[14][0] )
          HTSACopy( &title, value[14] );
        if ( title && title[0] )
        {
          LYUCTranslateHTMLString( &title, me->tag_charset, current_char_set, 1, 1, 0, 0 );
          LYTrimHead( title );
          LYTrimTail( title );
          if ( !title[0] && title )
          {
            free( title );
            title = 0;
          }
        }
      }
      HText_beginForm( action, method, enctype, title, accept_cs );
      if ( action )
      {
        free( action );
        action = 0;
      }
      if ( method )
      {
        free( method );
        method = 0;
      }
      if ( enctype )
      {
        free( enctype );
        enctype = 0;
      }
      if ( title )
      {
        free( title );
        title = 0;
      }
      LYCheckForID( me, present, value, 7 );
    }
      break;
    case HTML_FIELDSET:
      LYEnsureDoubleSpace( me );
      LYResetParagraphAlignment( me );
      LYCheckForID( me, present, value, 3 );
      break;
    case HTML_LEGEND:
      LYEnsureDoubleSpace( me );
      LYResetParagraphAlignment( me );
      LYCheckForID( me, present, value, 5 );
      break;
    case HTML_LABEL:
      LYCheckForID( me, present, value, 5 );
      break;
    case HTML_KEYGEN:
      LYCheckForID( me, present, value, 3 );
      break;
    case HTML_BUTTON:
    {
      InputFieldData I;
      int chars;
      I.align = 0;
      I.accept = 0;
      I.checked = 0;
      I.iclass = 0;
      I.disabled = 0;
      I.error = 0;
      I.height = 0;
      I.id = 0;
      I.lang = 0;
      I.max = 0;
      I.maxlength = 0;
      I.md = 0;
      I.min = 0;
      I.name = 0;
      I.size = 0;
      I.src = 0;
      I.type = 0;
      I.value = 0;
      I.width = 0;
      I.accept_cs = 0;
      I.name_cs = me->tag_charset;
      I.value_cs = me->tag_charset;
      if ( me->style_change )
        actually_set_style( me );
      if ( present && present[13] && value[13] && ( strcasecomp( value[13], "submit" ) == 0 || strcasecomp( value[13], "reset" ) == 0 ) )
      {
        I.type = value[13];
        if ( !me->inFORM && ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Bad HTML: BUTTON tag not within FORM tag\n" );
        }
        if ( me->sp->tag_number != 86 && !me->inPRE && me->sp->_stack_element )
        {
          HTML_put_character( me, ' ' );
          me->in_word = 0;
        }
        else
        {
          if ( ( LYcols - ( LYShowScrollbar != 0 ) ) + -6 < HText_LastLineSize( &me->text, 0 ) )
          {
            HTML_put_character( me, '\n' );
            me->in_word = 0;
          }
        }
        HTML_put_character( me, '(' );
        if ( present == 0 || present[7] == 0 || value[7] == 0 )
          I.name = "";
        else
        {
          if ( strchr( value[7], '&' ) == 0 )
            I.name = value[7];
          else
          {
            HTSACopy( &I_name, value[7] );
            LYUCTranslateHTMLString( &I_name, me->tag_charset, me->tag_charset, 0, 0, 1, 0 );
            I.name = I_name;
          }
        }
        if ( present && present[14] && value[14] && value[14][0] )
        {
          HTSACopy( &I_value, value[14] );
          me->UsePlainSpace = 1;
          LYUCTranslateHTMLString( &I_value, me->tag_charset, current_char_set, 1, 1, me->HiddenValue, 0 );
          me->UsePlainSpace = 0;
          I.value = I_value;
          LYReduceBlanks( I.value );
        }
        if ( present && present[4] )
          I.disabled = 1;
        if ( present && present[1] && value[1] && value[1][0] )
          I.iclass = value[1];
        if ( present && present[5] && value[5] && value[5][0] )
        {
          I.id = value[5];
          LYCheckForID( me, present, value, 5 );
        }
        if ( present && present[6] && value[6] && value[6][0] )
          I.lang = value[6];
        chars = HText_beginInput( &me->text, me->inUnderline, &I );
        if ( me->sp->tag_number == 86 || me->sp->_stack_element == 0 )
        {
          while ( I.value[ i ] )
          {
            HTML_put_character( me, I.value[ i ] );
            i++;
          }
        }
        else
        {
          i = 0;
          for ( ; I.value[ i ]; i++ )
          {
            HTML_put_character( me, 1 );
            // i++;
          }
          while ( i++, ( i < chars ) & 255 )
          {
            HTML_put_character( me, 1 );
          }
        }
        HTML_put_character( me, ')' );
        if ( me->sp->tag_number != 86 && me->sp->_stack_element )
        {
          HTML_put_character( me, ' ' );
          me->in_word = 0;
        }
        if ( I_value )
        {
          free( I_value );
          I_value = 0;
        }
        if ( I_name )
        {
          free( I_name );
          I_name = 0;
        }
      }
      else
        HTML_put_string( me, " [BUTTON] " );
    }
      break;
    case HTML_INPUT:
    {
      InputFieldData I;
      int chars;
      BOOLEAN UseALTasVALUE = 0;
      BOOLEAN HaveSRClink = 0;
      char *ImageSrc = 0;
      BOOLEAN IsSubmitOrReset = 0;
      HTkcode kcode = NOKANJI;
      HTkcode specified_kcode = NOKANJI;
      memset( I.accept, 0, 88 );
      I.name_cs = me->tag_charset;
      I.value_cs = me->tag_charset;
      if ( me->style_change )
        actually_set_style( me );
      if ( me->sp->tag_number != 86 && !me->inPRE && me->sp->_stack_element )
      {
        HTML_put_character( me, ' ' );
        me->in_word = 0;
      }
      else
      {
        if ( ( LYcols - ( LYShowScrollbar != 0 ) ) + -6 < HText_LastLineSize( &me->text, 0 ) )
        {
          HTML_put_character( me, '\n' );
          me->in_word = 0;
        }
      }
      if ( present && present[31] && value[31] && value[31][0] )
      {
        char *not_impl = 0;
        char *usingval = 0;
        I.type = value[31];
        if ( strcasecomp( I.type, "range" ) == 0 )
        {
          if ( present[18] && value[18] && value[18][0] )
            I.min = value[18];
          if ( present[15] && value[15] && value[15][0] )
            I.max = value[15];
          not_impl = "[RANGE Input]";
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTML: Ignoring TYPE=\"range\"\n" );
          }
        }
        else
        {
          if ( strcasecomp( I.type, "file" ) == 0 )
          {
            if ( present[0] && value[0] && value[0] )
              I.accept = value[0];
          }
          else
          {
            if ( strcasecomp( I.type, "button" ) == 0 )
              HTML_put_string( me, "[BUTTON] " );
          }
          if ( not_impl )
          {
            if ( me->inUnderline == 0 )
              HText_appendCharacter( &me->text, 3 );
            HTML_put_string( me, not_impl );
            if ( usingval )
            {
              HTML_put_string( me, usingval );
              if ( usingval )
              {
                free( usingval );
                usingval = 0;
              }
            }
            else
              HTML_put_string( me, " (not implemented)" );
            if ( me->inUnderline == 0 )
              HText_appendCharacter( &me->text, 4 );
          }
        }
      }
      if ( !me->inFORM && ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Bad HTML: INPUT tag not within FORM tag\n" );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Ok, we're trying type=[%s]\n", "(null)" );
      }
      if ( me->inTEXTAREA && ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Bad HTML: Missing TEXTAREA end tag.\n" );
      }
      if ( me->inSELECT )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTML: Missing SELECT end tag, faking it...\n" );
        }
        if ( me->sp->tag_number != 91 && tags[91].contents )
          me->skip_stack++;
        HTML_end_element( me, 91, include );
      }
      if ( present == 0 || present[19] == 0 || value[19] == 0 || value[19][0] == 0 )
        I.name = "";
      else
      {
        if ( strchr( value[19], '&' ) == 0 )
          I.name = value[19];
        else
        {
          HTSACopy( &I_name, value[19] );
          LYUCTranslateHTMLString( &I_name, me->tag_charset, me->tag_charset, 0, 0, 1, 0 );
          I.name = I_name;
        }
      }
      if ( present && present[4] && value[4] && value[4][0] && I.type && strcasecomp( I.type, "image" ) == 0 && ( present == 0 || present[33] == 0 || value[33] == 0 || value[33][0] == 0 ) )
        UseALTasVALUE = 1;
      if ( verbose_img && !clickable_images && present && present[27] && value[27] && value[27][0] && I.type && strcasecomp( I.type, "image" ) == 0 )
      {
        ImageSrc = MakeNewImageValue( value );
      }
      else
      if ( clickable_images == 1 && present && present[27] && value[27] && value[27][0] && I.type && strcasecomp( I.type, "image" ) == 0 )
      {
        HTSACopy( &href, value[27] );
        LYLegitimizeHREF( me, &href, 1, 1 );
        if ( href[0] )
        {
          if ( me->inA )
          {
            if ( tags->contents )
              me->skip_stack++;
            HTML_end_element( me, 0, include );
          }
          me->CurrentA = HTAnchor_findChildAndLink( &me->node_anchor, 0, href, 0 );
          HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
          if ( me->inBoldH == 0 )
            HText_appendCharacter( &me->text, 5 );
          if ( verbose_img )
          {
            newtitle = MakeNewTitle( value, 27 );
          }
          else
          {
          }
          HTML_put_string( me, "[IMAGE]" );
          if ( newtitle )
          {
            free( newtitle );
            newtitle = 0;
          }
          if ( me->inBoldH == 0 )
            HText_appendCharacter( &me->text, 6 );
          HText_endAnchor( &me->text, 0 );
          HTML_put_character( me, '-' );
          HaveSRClink = 1;
        }
        if ( href )
        {
          free( href );
          href = 0;
        }
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "2.Ok, we're trying type=[%s] (present=%p)\n", "(null)", present );
      }
      if ( UseALTasVALUE == 1 || ( present && present[33] && value[33] && ( value[33][0] || ( I.type && ( strcasecomp( I.type, "checkbox" ) == 0 || strcasecomp( I.type, "radio" ) == 0 ) ) ) ) )
      {
        int CurrentCharSet = current_char_set;
        BOOLEAN CurrentEightBitRaw = HTPassEightBitRaw;
        BOOLEAN CurrentUseDefaultRawMode = LYUseDefaultRawMode;
        HTCJKlang CurrentHTCJK = HTCJK;
        if ( I.type && strcasecomp( I.type, "hidden" ) == 0 )
        {
          me->HiddenValue = 1;
          current_char_set = LATIN1;
          LYUseDefaultRawMode = 1;
          HTMLSetCharacterHandling( current_char_set );
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "3.Ok, we're trying type=[%s]\n", "(null)" );
        }
        if ( I.type == 0 )
          me->UsePlainSpace = 1;
        else
        {
          if ( strcasecomp( I.type, "text" ) == 0 || strcasecomp( I.type, "file" ) == 0 || strcasecomp( I.type, "submit" ) == 0 || strcasecomp( I.type, "image" ) == 0 || strcasecomp( I.type, "reset" ) == 0 )
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "normal field type: %s\n", "(null)" );
            }
            me->UsePlainSpace = 1;
          }
        }
        HTSACopy( &I_value, UseALTasVALUE == 1 ? value[4] : value[33] );
        if ( me->UsePlainSpace && me->HiddenValue == 0 )
          I.value_cs = current_char_set;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "4.Ok, we're trying type=[%s]\n", "(null)" );
        }
        LYUCTranslateHTMLString( &I_value, me->tag_charset, I.value_cs, 0, me->UsePlainSpace, me->HiddenValue, 0 );
        I.value = I_value;
        if ( me->UsePlainSpace == 1 )
          LYReduceBlanks( I.value );
        me->UsePlainSpace = 0;
        if ( I.type && strcasecomp( I.type, "hidden" ) == 0 )
        {
          me->HiddenValue = 0;
          current_char_set = CurrentCharSet;
          LYUseDefaultRawMode = CurrentUseDefaultRawMode;
          HTMLSetCharacterHandling( current_char_set );
          HTPassEightBitRaw = CurrentEightBitRaw;
          HTCJK = CurrentHTCJK;
        }
      }
      else
      if ( HaveSRClink == 1 )
      {
        HTSACopy( &I_value, "Submit" );
        I.value = I_value;
      }
      else
      if ( ImageSrc )
        I.value = ImageSrc;
      if ( present && present[25] )
        I.disabled = 1;
      if ( present && present[5] )
        I.checked = 1;
      if ( present && present[26] && value[26] && value[26][0] )
      {
        I.size = atoi( value[26] );
      }
      if ( I.size > 1024 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Limited I.size to %d, was %d\n", 1024, I.size );
        }
        I.size = 1024;
      }
      if ( present && present[16] && value[16] && value[16][0] )
        I.maxlength = value[16];
      if ( present && present[9] )
        I.disabled = 1;
      if ( present && present[1] )
      {
        I.accept_cs = "UNKNOWN";
      }
      if ( present && present[3] && value[3] && value[3][0] )
        I.align = value[3];
      if ( present && present[6] && value[6] && value[6][0] )
        I.iclass = value[6];
      if ( present && present[10] && value[10] && value[10][0] )
        I.error = value[10];
      if ( present && present[11] && value[11] && value[11][0] )
        I.height = value[11];
      if ( present && present[34] && value[34] && value[34][0] )
        I.width = value[34];
      if ( present && present[12] && value[12] && value[12][0] )
      {
        I.id = value[12];
        LYCheckForID( me, present, value, 12 );
      }
      if ( present && present[14] && value[14] && value[14][0] )
        I.lang = value[14];
      if ( present && present[17] && value[17] && value[17][0] )
        I.md = value[17];
      chars = HText_beginInput( &me->text, me->inUnderline, &I );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "I.%s have %d chars, or something\n", "(null)", chars );
      }
      if ( I.type && ( strcasecomp( I.type, "submit" ) == 0 || strcasecomp( I.type, "reset" ) == 0 || strcasecomp( I.type, "image" ) == 0 ) )
        IsSubmitOrReset = 1;
      if ( I.type && chars == 3 && strcasecomp( I.type, "radio" ) == 0 )
      {
        HTML_put_string( me, "(_)" );
        HText_endInput( &me->text );
        chars = 0;
        me->in_word = 1;
        if ( me->sp->tag_number != 86 && me->sp->_stack_element )
        {
          HTML_put_character( me, ' ' );
          me->in_word = 0;
        }
      }
      else
      if ( I.type && chars == 3 && strcasecomp( I.type, "checkbox" ) == 0 )
      {
        HTML_put_string( me, "[_]" );
        HText_endInput( &me->text );
        chars = 0;
        me->in_word = 1;
        if ( me->sp->tag_number != 86 && me->sp->_stack_element )
        {
          HTML_put_character( me, ' ' );
          me->in_word = 0;
        }
      }
      else
      if ( ( me->sp->tag_number == 86 || !me->sp->_stack_element ) && chars > 6 && IsSubmitOrReset == 0 )
      {
        i = 0;
        for ( ; i <= 5; i++ )
        {
          HTML_put_character( me, '_' );
          chars += -1;
          // i++;
        }
        HText_setIgnoreExcess( &me->text, 1 );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "I.%s, %d\n", "(null)", IsSubmitOrReset );
      }
      if ( IsSubmitOrReset == 0 )
      {
        if ( chars > 0 )
        {
          for ( ; chars > 0;  )
          {
            HTML_put_character( me, '_' );
            chars += -1;
          }
          HText_endInput( &me->text );
        }
      }
      else
      {
        if ( HTCJK == JAPANESE )
        {
          kcode = HText_getKcode( &me->text );
          HText_updateKcode( &me->text, kanji_code );
          specified_kcode = HText_getSpecifiedKcode( &me->text );
          HText_updateSpecifiedKcode( &me->text, kanji_code );
        }
        if ( me->sp->tag_number == 86 || me->sp->_stack_element == 0 )
        {
          while ( I.value[ i ] )
          {
            HTML_put_character( me, I.value[ i ] );
            i++;
          }
        }
        else
        {
          i = 0;
          for ( ; I.value[ i ]; i++ )
          {
            HTML_put_character( me, 1 );
            // i++;
          }
          while ( i++, ( i < chars ) & 255 )
          {
            HTML_put_character( me, 1 );
          }
        }
        if ( HTCJK == JAPANESE )
        {
          HText_updateKcode( &me->text, kcode );
          HText_updateSpecifiedKcode( &me->text, specified_kcode );
        }
      }
      if ( chars )
        HText_endInput( &me->text );
      HText_setIgnoreExcess( &me->text, 0 );
      if ( ImageSrc )
      {
        free( ImageSrc );
        ImageSrc = 0;
      }
      if ( I_value )
      {
        free( I_value );
        I_value = 0;
      }
      if ( I_name )
      {
        free( I_name );
        I_name = 0;
      }
    }
      break;
    case HTML_TEXTAREA:
      if ( me->inFORM == 0 )
      {
        if ( ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Bad HTML: TEXTAREA start tag not within FORM tag\n" );
        }
      }
      else
      {
        me->inTEXTAREA = 1;
        HTChunkClear( &me->textarea );
        if ( present && present[11] && value[11] )
        {
          HTSACopy( &me->textarea_name, value[11] );
          me->textarea_name_cs = me->tag_charset;
          if ( strchr( value[11], '&' ) )
            LYUCTranslateHTMLString( &me->textarea_name, me->tag_charset, me->tag_charset, 0, 0, 1, 0 );
        }
        else
          HTSACopy( &me->textarea_name, "" );
        if ( present && present[0] )
        {
          if ( value[0] )
          {
            HTSACopy( &me->textarea_accept_cs, value[0] );
            LYUCTranslateHTMLString( &me->textarea_accept_cs, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
          }
          else
            HTSACopy( &me->textarea_accept_cs, "UNKNOWN" );
        }
        else
        if ( me->textarea_accept_cs )
        {
          free( &me->textarea_accept_cs );
          *(int*)&me->textarea_accept_cs = 0;
        }
        if ( present && present[5] && value[5] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[5][0] * 2 )) & 2048 ) )
        {
          me->textarea_cols = atoi( value[5] );
        }
        else
        {
          int width = LYcols - ( LYShowScrollbar != 0 ) - me->new_style->leftIndent - me->new_style->rightIndent;
          if ( dump_output_immediately )
          {
            width = 60;
          }
          if ( width > 1 && ( width + -1 ) * 6 < 1021 - me->new_style->leftIndent - me->new_style->rightIndent )
            me->textarea_cols = width;
          else
            *(int*)&me->textarea_cols = 60;
        }
        if ( LYcols - ( LYShowScrollbar != 0 ) < me->textarea_cols )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Limited me-&gt;textarea_cols to %d, was %d\n", LYcols - ( LYShowScrollbar != 0 ), me->textarea_cols );
          }
          me->textarea_cols = LYcols - ( LYShowScrollbar != 0 );
        }
        if ( present && present[18] && value[18] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[18][0] * 2 )) & 2048 ) )
        {
          me->textarea_rows = atoi( value[18] );
        }
        else
          *(int*)&me->textarea_rows = 4;
        if ( LYlines * 3 < me->textarea_rows )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Limited me-&gt;textarea_rows to %d, was %d\n", LYlines * 3, me->textarea_rows );
          }
          me->textarea_rows = LYlines * 3;
        }
        *(int*)&me->textarea_disabled = 0;
        if ( present && present[17] )
          *(int*)&me->textarea_disabled = 1;
        if ( present && present[7] )
          *(int*)&me->textarea_disabled = 1;
        if ( present && present[9] && value[9] && value[9][0] )
        {
          HTSACopy( &id_string, value[9] );
          LYUCTranslateHTMLString( &id_string, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
          if ( id_string )
          {
            ID_A = HTAnchor_findChildAndLink( &me->node_anchor, id_string, 0, 0 );
            if ( ID_A )
            {
              HText_beginAnchor( &me->text, me->inUnderline, ID_A );
              HText_endAnchor( &me->text, 0 );
              HTSACopy( &me->textarea_id, id_string );
              if ( id_string )
              {
                free( id_string );
                id_string = 0;
              }
            }
          }
          if ( me->textarea_id )
          {
            free( &me->textarea_id );
            *(int*)&me->textarea_id = 0;
          }
        }
        else
        {
          if ( me->textarea_id )
          {
            free( &me->textarea_id );
            *(int*)&me->textarea_id = 0;
          }
        }
      }
      break;
    case HTML_SELECT:
      if ( me->inSELECT )
      {
        if ( ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Bad HTML: SELECT start tag in SELECT element.  Faking SELECT end tag. *****\n" );
        }
        if ( me->sp->tag_number != 91 && tags[91].contents )
          me->skip_stack++;
        HTML_end_element( me, 91, include );
      }
      LYHandleSELECT( me, present, value, include, 1 );
      break;
    case HTML_OPTION:
    {
      InputFieldData I;
      if ( me->inSELECT == 0 )
      {
        if ( ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Bad HTML: OPTION tag not within SELECT tag\n" );
        }
      }
      else
      {
        if ( me->first_option == 0 )
        {
          HTChunkTerminate( &me->option );
          HText_setLastOptionValue( &me->text, &me->option.data, &me->LastOptionValue, 2, me->LastOptionChecked, me->UCLYhndl, me->tag_charset );
        }
        if ( me->first_option || HTCurSelectGroupType == 3 || LYSelectPopups == 0 )
        {
          if ( HTCurSelectGroupType == 3 || LYSelectPopups == 0 )
            LYEnsureSingleSpace( me );
          else
          {
            HText_appendCharacter( &me->text, 91 );
            me->in_word = 1;
          }
          I.align = 0;
          I.accept = 0;
          I.checked = 0;
          I.iclass = 0;
          I.disabled = 0;
          I.error = 0;
          I.height = 0;
          I.id = 0;
          I.lang = 0;
          I.max = 0;
          I.maxlength = 0;
          I.md = 0;
          I.min = 0;
          I.name = 0;
          I.size = 0;
          I.src = 0;
          I.type = 0;
          I.value = 0;
          I.width = 0;
          I.accept_cs = 0;
          I.name_cs = -1;
          I.value_cs = current_char_set;
          I.type = "OPTION";
          if ( ( present && present[8] ) || ( me->first_option && LYSelectPopups == 0 && HTCurSelectGroupType == 4 ) )
            I.checked = 1;
          if ( present && present[12] && value[12] )
          {
            HTSACopy( &I_value, value[12] );
            me->HiddenValue = 1;
            LYUCTranslateHTMLString( &I_value, me->tag_charset, me->tag_charset, 0, me->UsePlainSpace, me->HiddenValue, 0 );
            I.value_cs = me->tag_charset;
            me->HiddenValue = 0;
            I.value = I_value;
          }
          if ( me->select_disabled || ( present && present[3] ) )
            I.disabled = 1;
          if ( present && present[5] && value[5] && value[5][0] )
          {
            ID_A = HTAnchor_findChildAndLink( &me->node_anchor, value[5], 0, 0 );
            if ( ID_A )
            {
              HText_beginAnchor( &me->text, me->inUnderline, ID_A );
              HText_endAnchor( &me->text, 0 );
              I.id = value[5];
            }
          }
          HText_beginInput( &me->text, me->inUnderline, &I );
          if ( HTCurSelectGroupType == 3 )
          {
            HText_appendCharacter( &me->text, 91 );
            HText_appendCharacter( &me->text, 95 );
            HText_appendCharacter( &me->text, 93 );
            HText_appendCharacter( &me->text, 32 );
            HText_setLastChar( &me->text, ' ' );
            me->in_word = 0;
          }
          else
          {
            if ( LYSelectPopups == 0 )
            {
              HText_appendCharacter( &me->text, 40 );
              HText_appendCharacter( &me->text, 95 );
              HText_appendCharacter( &me->text, 41 );
              HText_appendCharacter( &me->text, 32 );
              HText_setLastChar( &me->text, ' ' );
              me->in_word = 0;
            }
          }
        }
        HTChunkClear( &me->option );
        if ( ( present && present[8] ) || ( me->first_option && LYSelectPopups == 0 && HTCurSelectGroupType == 4 ) )
          me->LastOptionChecked = 1;
        else
          me->LastOptionChecked = 0;
        me->first_option = 0;
        if ( present && present[12] && value[12] )
        {
          if ( I_value == 0 )
          {
            HTSACopy( &I_value, value[12] );
            me->HiddenValue = 1;
            LYUCTranslateHTMLString( &I_value, me->tag_charset, me->tag_charset, 0, me->UsePlainSpace, me->HiddenValue, 0 );
            me->HiddenValue = 0;
          }
          HTSACopy( &me->LastOptionValue, I_value );
        }
        else
          HTSACopy( &me->LastOptionValue, &me->option.data );
        if ( HTCurSelectGroupType == 4 && LYSelectPopups && ( keypad_mode == 3 || keypad_mode == 2 ) )
        {
          char marker[8];
          int opnum = HText_getOptionNum( &me->text );
          if ( opnum > 0 && opnum <= 0x1869f )
          {
            sprintf( marker, "(%d)", opnum );
            HTML_put_string( me, marker );
            i = strlen( marker );
            for ( ; i <= 4; i++ )
            {
              HTML_put_character( me, '_' );
              // i++;
            }
          }
        }
        if ( I_value )
        {
          free( I_value );
          I_value = 0;
        }
      }
    }
      break;
    case HTML_TABLE:
      if ( nested_tables == 0 )
        HText_cancelStbl( &me->text );
      if ( me->inA )
      {
        if ( tags->contents )
          me->skip_stack++;
        HTML_end_element( me, 0, include );
      }
      if ( me->Underline_Level > 0 )
      {
        if ( tags[113].contents )
          me->skip_stack++;
        HTML_end_element( me, 113, include );
      }
      me->inTABLE = 1;
      if ( me->sp->_stack_element == 37 )
      {
        if ( me->style_change )
          actually_set_style( me );
        LYCheckForID( me, present, value, 12 );
      }
      else
      {
        if ( me->Division_Level <= 798 )
          me->Division_Level++;
        else
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTML: ****** Maximum nesting of %d divisions/tables exceeded!\n", 800 );
        }
        if ( present && present[0] && value[0] && value[0] )
        {
          if ( strcasecomp( value[0], "center" ) == 0 )
          {
            if ( no_table_center )
            {
              me->DivisionAlignments[ me->Division_Level ] = 1;
              change_paragraph_style( me, styles[147] );
              if ( me->style_change )
                actually_set_style( me );
              me->current_default_alignment = styles[147]->alignment;
            }
            else
            {
              me->DivisionAlignments[ me->Division_Level ] = 3;
              change_paragraph_style( me, styles[146] );
              if ( me->style_change )
                actually_set_style( me );
              me->current_default_alignment = styles[146]->alignment;
            }
            stbl_align = 3;
          }
          else
          {
            if ( strcasecomp( value[0], "right" ) == 0 )
            {
              me->DivisionAlignments[ me->Division_Level ] = 2;
              change_paragraph_style( me, styles[148] );
              if ( me->style_change )
                actually_set_style( me );
              me->current_default_alignment = styles[148]->alignment;
              stbl_align = 2;
            }
            else
            {
              me->DivisionAlignments[ me->Division_Level ] = 1;
              change_paragraph_style( me, styles[147] );
              if ( me->style_change )
                actually_set_style( me );
              me->current_default_alignment = styles[147]->alignment;
              if ( strcasecomp( value[0], "left" ) == 0 || strcasecomp( value[0], "justify" ) == 0 )
                stbl_align = 1;
            }
          }
        }
        else
        {
          me->DivisionAlignments[ me->Division_Level ] = 1;
          change_paragraph_style( me, styles[147] );
          if ( me->style_change )
            actually_set_style( me );
          me->current_default_alignment = styles[147]->alignment;
        }
        LYCheckForID( me, present, value, 12 );
        HText_startStblTABLE( &me->text, stbl_align );
      }
      break;
    case HTML_TR:
      if ( me->inA )
      {
        if ( tags->contents )
          me->skip_stack++;
        HTML_end_element( me, 0, include );
      }
      if ( me->Underline_Level > 0 )
      {
        if ( tags[113].contents )
          me->skip_stack++;
        HTML_end_element( me, 113, include );
      }
      if ( me->style_change )
        actually_set_style( me );
      if ( ( HText_LastLineEmpty( &me->text, 0 ) & 255 ) == 0 )
      {
        HText_setLastChar( &me->text, ' ' );
        HText_appendCharacter( &me->text, 13 );
      }
      me->in_word = 0;
      if ( me->sp->_stack_element == 37 )
      {
        LYCheckForID( me, present, value, 7 );
        me->inP = 0;
      }
      else
      {
        if ( LYoverride_default_alignment( me ) & 255 )
          me->sp->_stack_element = styles[ me->sp->tag_number ]->alignment;
        else
        if ( me->List_Nesting_Level >= 0 || ( me->Division_Level < 0 && ( me->sp->_stack_element == 0 || me->sp->_stack_element == 37 ) ) )
          me->sp->_stack_element = 1;
        else
          me->sp->_stack_element = me->current_default_alignment;
        if ( present && present[0] && value[0] )
        {
          if ( !strcasecomp( value[0], "center" ) && ( me->List_Nesting_Level < 0 || me->inP ) )
          {
            if ( no_table_center )
              me->sp->_stack_element = 1;
            else
              me->sp->_stack_element = 3;
            stbl_align = 3;
          }
          else
          {
            if ( !strcasecomp( value[0], "right" ) && ( me->List_Nesting_Level < 0 || me->inP ) )
            {
              me->sp->_stack_element = 2;
              stbl_align = 2;
            }
            else
            {
              if ( strcasecomp( value[0], "left" ) == 0 || strcasecomp( value[0], "justify" ) == 0 )
              {
                me->sp->_stack_element = 1;
                stbl_align = 1;
              }
            }
          }
        }
        LYCheckForID( me, present, value, 7 );
        me->inP = 0;
        HText_startStblTR( &me->text, stbl_align );
      }
      break;
    case HTML_TBODY:
    case HTML_TFOOT:
    case HTML_THEAD:
      HText_endStblTR( &me->text );
      if ( me->inA )
      {
        if ( tags->contents )
          me->skip_stack++;
        HTML_end_element( me, 0, include );
      }
      if ( me->Underline_Level > 0 )
      {
        if ( tags[113].contents )
          me->skip_stack++;
        HTML_end_element( me, 113, include );
      }
      if ( me->style_change )
        actually_set_style( me );
      if ( me->inTABLE )
      {
        if ( present && present[0] && value[0] )
        {
          if ( strcasecomp( value[0], "center" ) == 0 )
            stbl_align = 3;
          else
          {
            if ( strcasecomp( value[0], "right" ) == 0 )
              stbl_align = 2;
            else
            {
              if ( strcasecomp( value[0], "left" ) == 0 || strcasecomp( value[0], "justify" ) == 0 )
                stbl_align = 1;
            }
          }
        }
        HText_startStblRowGroup( &me->text, stbl_align );
      }
      LYCheckForID( me, present, value, 7 );
      break;
    case HTML_COL:
    case HTML_COLGROUP:
      if ( me->inA )
      {
        if ( tags->contents )
          me->skip_stack++;
        HTML_end_element( me, 0, include );
      }
      if ( me->Underline_Level > 0 )
      {
        if ( tags[113].contents )
          me->skip_stack++;
        HTML_end_element( me, 113, include );
      }
      if ( me->style_change )
        actually_set_style( me );
      if ( me->inTABLE )
      {
        if ( present && present[8] && value[8] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[8][0] * 2 )) & 2048 ) )
        {
        }
        if ( present && present[0] && value[0] )
        {
          if ( strcasecomp( value[0], "center" ) == 0 )
            stbl_align = 3;
          else
          {
            if ( strcasecomp( value[0], "right" ) == 0 )
              stbl_align = 2;
            else
            {
              if ( strcasecomp( value[0], "left" ) == 0 || strcasecomp( value[0], "justify" ) == 0 )
                stbl_align = 1;
            }
          }
        }
        HText_startStblCOL( &me->text, atoi( value[8] ), stbl_align, ElementNumber == HTML_COLGROUP );
      }
      LYCheckForID( me, present, value, 6 );
      break;
    case HTML_TD:
    case HTML_TH:
      if ( me->inA )
      {
        if ( tags->contents )
          me->skip_stack++;
        HTML_end_element( me, 0, include );
      }
      if ( me->Underline_Level > 0 )
      {
        if ( tags[113].contents )
          me->skip_stack++;
        HTML_end_element( me, 113, include );
      }
      if ( me->style_change )
        actually_set_style( me );
      LYCheckForID( me, present, value, 14 );
      HTML_put_character( me, ' ' );
      if ( present && present[9] && value[9] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[9][0] * 2 )) & 2048 ) )
      {
      }
      if ( present && present[17] && value[17] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[17][0] * 2 )) & 2048 ) )
      {
      }
      if ( present && present[1] && value[1] )
      {
        if ( strcasecomp( value[1], "center" ) == 0 )
          stbl_align = 3;
        else
        {
          if ( strcasecomp( value[1], "right" ) == 0 )
            stbl_align = 2;
          else
          {
            if ( strcasecomp( value[1], "left" ) == 0 || strcasecomp( value[1], "justify" ) == 0 )
              stbl_align = 1;
          }
        }
      }
      HText_startStblTD( &me->text, atoi( value[9] ), atoi( value[17] ), stbl_align, ElementNumber == HTML_TH );
      me->in_word = 0;
      break;
    case HTML_MATH:
      HTChunkClear( &me->math );
      LYCheckForID( me, present, value, 3 );
      break;
    case HTML_BASEFONT:
    case HTML_COMMENT:
    case HTML_FRAMESET:
    case HTML_HEAD:
    case HTML_HTML:
    case HTML_NEXTID:
    case HTML_PARAM:
      break;
    }
  }
  }
}
int HTML_end_element( HTStructured *me, int element_number, char **include )
{
  int eax;
  int i = 0;
  int status = 0;
  char *temp = 0, *cp = 0;
  BOOLEAN BreakFlag = 0;
  BOOLEAN intern_flag = 0;
  BOOLEAN skip_stack_requested = 0;
  BOOLEAN reached_awaited_stacked_elt = 0;
  if ( psrc_view && sgml_in_psrc_was_initialized == 0 && psrc_nested_call == 0 )
  {
    HTTag *tag = &tags[ element_number ];
    char buf[200];
    int tag_charset = 0;
    psrc_nested_call = 1;
    HTMLSRC_apply_markup( me, 4, 1, tag_charset );
    HTML_put_string( me, "&lt;/" );
    HTMLSRC_apply_markup( me, 4, 0, tag_charset );
    HTMLSRC_apply_markup( me, 1, 1, tag_charset );
    if ( tagname_transform )
      HTML_put_string( me, &tag->name[0] );
    else
    {
      LYstrncpy( buf, &tag->name[0], 199 );
      LYLowerCase( buf );
      HTML_put_string( me, buf );
    }
    HTMLSRC_apply_markup( me, 1, 0, tag_charset );
    HTMLSRC_apply_markup( me, 4, 1, tag_charset );
    HTML_put_character( me, '>' );
    HTMLSRC_apply_markup( me, 4, 0, tag_charset );
    psrc_nested_call = 0;
    return 0;
  }
  else
  {
    if ( ( me->stack[799].style <= me->sp || me->sp->tag_number != element_number ) && tags[ element_number ].contents && WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTML: end of element %s when expecting end of %s\n", tags[ element_number ].name, "none" );
    }
    if ( LYMapsOnly && element_number != 71 && element_number != 5 && element_number != 79 )
      return 0;
    else
    {
      if ( tags[ element_number ].contents )
      {
        skip_stack_requested = me->skip_stack > 0;
        if ( me->sp->tag_number != element_number && me->skip_stack <= 0 && tags[67].contents )
        {
          BreakFlag = 1;
        }
        if ( me->skip_stack == 0 && element_number == 79 && me->sp->tag_number == 149 && me->sp < me->stack[799].style )
          me->sp->tag_number = 79;
        if ( me->skip_stack > 0 )
        {
          if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
          {
            fprintf( TraceFP( ), "HTML:end_element: Internal call (level %d), leaving on stack - %s\n", me->skip_stack, "(null)" );
          }
          me->skip_stack += -1;
        }
        else
        {
          if ( element_number == 79 && me->sp->tag_number != 79 && me->sp->tag_number != 149 && me->objects_mixed_open > 0 && ( me->objects_figged_open <= 0 || me->sp->tag_number != 41 ) )
          {
            if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
            {
              fprintf( TraceFP( ), "HTML:end_element[%d]: %s (level %d), %s - %s\n", ( me->stack[799].style - me->sp ) >> 3, "Special OBJECT handling", me->objects_mixed_open, "leaving on stack", "(null)" );
            }
            me->objects_mixed_open += -1;
          }
          else
          {
            if ( me->stack_overrun == 1 && me->sp->tag_number != element_number )
              return 0;
            else
            {
              if ( element_number == 91 && me->sp->tag_number != 91 )
                return 0;
              else
              {
                if ( me->sp->tag_number != element_number && tags[67].contents == SGML_EMPTY )
                {
                  switch ( element_number )
                  {
                  case '/':
                  case '0':
                  case '1':
                  case '2':
                  case '3':
                  case '4':
                    return 0;
                    break;
                  default:
                    if ( me->sp < me->stack[799].style )
                    {
                      if ( wait_for_this_stacked_elt == 800 + ( ( me->stack->style - me->sp ) >> 3 ) )
                        reached_awaited_stacked_elt = 1;
                      if ( element_number == 79 && me->sp->tag_number == 41 && me->objects_figged_open > 0 )
                      {
                        if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
                        {
                          fprintf( TraceFP( ), "HTML:end_element[%d]: %s (level %d), %s - %s\n", ( me->stack[799].style - me->sp ) >> 3, "Special OBJECT-&gt;FIG handling", me->objects_figged_open, "treating as end FIG", "(null)" );
                        }
                        me->objects_figged_open += -1;
                        element_number = 41;
                      }
                      me->sp += 8;
                      if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
                      {
                        fprintf( TraceFP( ), "HTML:end_element[%d]: Popped style off stack - %s\n", ( me->stack[799].style - me->sp ) >> 3, "(null)" );
                      }
                    }
                    else
                    {
                      if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
                      {
                        fprintf( TraceFP( ), "Stack underflow error!  Tried to pop off more styles than exist in stack\n" );
                      }
                    }
                    break;
                  }
                }
              }
            }
          }
        }
      }
      if ( BreakFlag == 1 )
      {
        if ( reached_awaited_stacked_elt )
          wait_for_this_stacked_elt = -1;
        return 0;
      }
      else
      {
        if ( me->inTEXTAREA && element_number != 105 && ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Bad HTML: Missing TEXTAREA end tag\n" );
        }
        if ( me->text == 0 && !LYMapsOnly && me->style_change )
          actually_set_style( me );
        switch ( element_number )
        {
        case 55:
          if ( ( me->inA || me->inSELECT || me->inTEXTAREA ) && ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Bad HTML: %s%s%s%s%s not closed before HTML end tag *****\n", "", "", "", "", "" );
            if ( reached_awaited_stacked_elt )
              wait_for_this_stacked_elt = -1;
            if ( me->xinclude )
            {
              HText_appendText( &me->text, " *** LYNX ERROR ***\rUnparsed data:\r" );
              HText_appendText( &me->text, &me->xinclude );
              if ( me->xinclude )
              {
                free( &me->xinclude );
                *(int*)&me->xinclude = 0;
              }
            }
            if ( skip_stack_requested == 0 )
            {
              FastTrimColorClass( tags[ element_number ].name, tags[ element_number ].name_len, Style_className, &Style_className_end, &hcode );
              if ( tags[ element_number ].contents || ( tags[ element_number ].flags & 16 ) )
              {
                if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
                {
                  fprintf( TraceFP( ), "STYLE.end_element: ending non-\"EMPTY\" style &lt;%s...&gt;\n", tags[ element_number ].name );
                }
                _internal_HTC( &me->text, hcode, 0 );
              }
            }
            return status;
          }
          break;
        case 53:
          if ( me->inBASE && ( ( LYIsUIPage3( &me->node_anchor->address, 4, 0 ) & 255 ) || ( LYIsUIPage3( &me->node_anchor->address, 11, 0 ) & 255 ) ) )
            HTSACopy( &me->node_anchor->content_base, &me->base_href );
          if ( HText_hasToolbar( &me->text ) & 255 )
            HText_appendParagraph( &me->text );
          break;
        case 110:
          HTChunkTerminate( &me->title );
          HTAnchor_setTitle( &me->node_anchor, &me->title.data );
          HTChunkClear( &me->title );
          if ( me->node_anchor->bookmark && me->node_anchor->bookmark[0] && ( LYMultiBookmarks || ( bookmark_page && bookmark_page[0] && strcmp( &me->node_anchor->bookmark, bookmark_page ) ) ) )
          {
            if ( include == 0 )
              include = me->xinclude;
            i = 0;
            for ( ; i <= 25; i++ )
            {
              if ( MBM_A_subbookmark[ i ] && strcmp( MBM_A_subbookmark[ i ], &me->node_anchor->bookmark ) == 0 )
              {
                HTSACat( include, "&lt;H2&gt;&lt;EM&gt;" );
                HTSACat( include, gettext( "Description:" ) );
                HTSACat( include, "&lt;/EM&gt; " );
                HTSACopy( &temp, gettext( "Description:" ) );
                LYEntify( &temp, 1 );
                HTSACat( include, temp );
                HTSACat( include, "&lt;BR&gt;&lt;EM&gt;&nbsp;&nbsp;&nbsp;" );
                HTSACat( include, gettext( "Filepath:" ) );
                HTSACat( include, "&lt;/EM&gt; " );
                HTSACopy( &temp, gettext( "Filepath:" ) );
                LYEntify( &temp, 1 );
                HTSACat( include, temp );
                if ( temp )
                {
                  free( temp );
                  temp = 0;
                }
                HTSACat( include, "&lt;/H2&gt;" );
              }
              else
              {
                // i++;
              }
            }
          }
          break;
        case 98:
          HTChunkTerminate( &me->style_block );
          if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
          {
            fprintf( TraceFP( ), "HTML: STYLE content =\n%s\n", &me->style_block.data );
          }
          HTChunkClear( &me->style_block );
          break;
        case 90:
          HTChunkTerminate( &me->script );
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTML: SCRIPT content =\n%s\n", &me->script.data );
          }
          HTChunkClear( &me->script );
          break;
        case 17:
          if ( ( me->inA || me->inSELECT || me->inTEXTAREA ) && ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Bad HTML: %s%s%s%s%s not closed before BODY end tag *****\n", "", "", "", "", "" );
          }
          break;
        case 46:
          change_paragraph_style( me, &me->sp->style->next );
          break;
        case 58:
        case 77:
          LYEnsureDoubleSpace( me );
          LYResetParagraphAlignment( me );
          change_paragraph_style( me, &me->sp->style->next );
          break;
        case 3:
        case 9:
        case 16:
        case 19:
        case 72:
          change_paragraph_style( me, &me->sp->style->next );
          if ( me->style_change )
            actually_set_style( me );
          if ( me->sp->tag_number == element_number )
            LYEnsureDoubleSpace( me );
          if ( me->List_Nesting_Level >= 0 )
            HText_NegateLineOne( &me->text );
          break;
        case 23:
        case 34:
          if ( me->Division_Level >= 0 )
            me->Division_Level += -1;
          if ( me->Division_Level >= 0 && me->sp->_stack_element != me->DivisionAlignments[ me->Division_Level ] )
          {
            if ( me->inP )
              LYEnsureSingleSpace( me );
            me->sp->_stack_element = me->DivisionAlignments[ me->Division_Level ];
          }
          change_paragraph_style( me, &me->sp->style->next );
          if ( me->style_change )
          {
            actually_set_style( me );
            if ( me->List_Nesting_Level >= 0 )
              HText_NegateLineOne( &me->text );
          }
          else
          if ( me->inP )
            LYEnsureSingleSpace( me );
          me->current_default_alignment = me->sp->_stack_element;
          break;
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
          if ( me->Division_Level >= 0 )
            me->sp->_stack_element = me->DivisionAlignments[ me->Division_Level ];
          else
          if ( me->sp->_stack_element == 47 || me->sp->_stack_element == 41 )
            me->sp->_stack_element = 3;
          else
          if ( me->sp->_stack_element == 49 )
            me->sp->_stack_element = 2;
          else
            me->sp->_stack_element = 1;
          change_paragraph_style( me, &me->sp->style->next );
          if ( me->style_change )
            actually_set_style( me );
          if ( styles[ element_number ]->font & 2 )
          {
            if ( me->inBoldA == 0 && me->inBoldH == 1 )
              HText_appendCharacter( &me->text, 6 );
            me->inBoldH = 0;
          }
          if ( me->List_Nesting_Level >= 0 )
            HText_NegateLineOne( &me->text );
          if ( me->Underline_Level > 0 && me->inUnderline == 0 )
          {
            HText_appendCharacter( &me->text, 3 );
            me->inUnderline = 1;
          }
          break;
        case 83:
          LYHandlePlike( me, 0, 0, include, 0, 0 );
          break;
        case 43:
          me->inFONT = 0;
          break;
        case 8:
        case 15:
        case 24:
        case 38:
        case 57:
        case 97:
        case 113:
          if ( me->Underline_Level > 0 )
          {
            me->Underline_Level += -1;
            if ( me->inUnderline && me->Underline_Level <= 0 )
            {
              HText_appendCharacter( &me->text, 4 );
              me->inUnderline = 0;
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "Ending underline\n" );
              }
            }
            else
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "Underline Level is %d\n", me->Underline_Level );
              }
            }
          }
          break;
        case 99:
          HText_appendCharacter( &me->text, 93 );
          break;
        case 31:
        case 88:
        case 96:
          HTML_put_character( me, ' ' );
          if ( me->inUnderline == 0 )
            HText_appendCharacter( &me->text, 3 );
          HTML_put_string( me, ":DEL]" );
          if ( me->inUnderline == 0 )
            HText_appendCharacter( &me->text, 4 );
          HTML_put_character( me, ' ' );
          me->in_word = 0;
          break;
        case 61:
          HTML_put_character( me, ' ' );
          if ( me->inUnderline == 0 )
            HText_appendCharacter( &me->text, 3 );
          HTML_put_string( me, ":INS]" );
          if ( me->inUnderline == 0 )
            HText_appendCharacter( &me->text, 4 );
          HTML_put_character( me, ' ' );
          me->in_word = 0;
          break;
        case 87:
          if ( me->Quote_Level > 0 )
            me->Quote_Level += -1;
          if ( ( me->Quote_Level & 1 ) == 0 )
            HTML_put_character( me, '"' );
          else
            HTML_put_character( me, '\'' );
          break;
        case 86:
          HText_appendCharacter( &me->text, 10 );
          me->inPRE = 0;
        case 70:
        case 85:
        case 117:
          if ( me->comment_start )
            HText_appendText( &me->text, &me->comment_start );
          change_paragraph_style( me, &me->sp->style->next );
          if ( me->List_Nesting_Level >= 0 )
          {
            if ( me->style_change )
              actually_set_style( me );
            HText_NegateLineOne( &me->text );
          }
          break;
        case 42:
        case 78:
          change_paragraph_style( me, &me->sp->style->next );
          if ( me->style_change )
            actually_set_style( me );
          if ( me->sp->tag_number == element_number )
            LYEnsureDoubleSpace( me );
          if ( me->List_Nesting_Level >= 0 )
            HText_NegateLineOne( &me->text );
          me->inLABEL = 0;
          break;
        case 80:
          me->OL_Counter[ 11 ] = OL_VOID;
        case 33:
        case 35:
        case 74:
        case 114:
          me->List_Nesting_Level += -1;
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTML_end_element: Reducing List Nesting Level to %d\n", me->List_Nesting_Level );
          }
          if ( element_number == 35 )
            in_DT = 0;
          change_paragraph_style( me, &me->sp->style->next );
          if ( me->style_change )
            actually_set_style( me );
          if ( me->List_Nesting_Level >= 0 )
            LYEnsureSingleSpace( me );
          break;
        case 0:
          if ( me->inA )
          {
            me->inA = 0;
            if ( hidden_link_marker && hidden_link_marker[0] && ( HText_isAnchorBlank( &me->text, me->CurrentANum ) & 255 ) )
              HText_appendText( &me->text, hidden_link_marker );
            if ( me->style_change )
              actually_set_style( me );
            if ( me->inBoldA == 1 && me->inBoldH == 0 )
              HText_appendCharacter( &me->text, 6 );
            HText_endAnchor( &me->text, me->CurrentANum );
            *(int*)&me->CurrentANum = 0;
            me->inBoldA = 0;
            if ( me->Underline_Level > 0 && me->inUnderline == 0 )
            {
              HText_appendCharacter( &me->text, 3 );
              me->inUnderline = 1;
            }
          }
          break;
        case 71:
          if ( me->map_address )
          {
            free( &me->map_address );
            *(int*)&me->map_address = 0;
          }
          break;
        case 18:
          change_paragraph_style( me, &me->sp->style->next );
          break;
        case 106:
          change_paragraph_style( me, &me->sp->style->next );
          break;
        case 41:
          LYHandleFIG( me, 0, 0, 0, 0, 0, 0, 0, 0, &intern_flag );
          break;
        case 79:
        {
          int s = 0, e = 0;
          char *start = 0, *first_end = 0, *last_end = 0;
          char *first_map = 0, *last_map = 0;
          BOOLEAN have_param = 0;
          char *data = 0;
          HTChunkTerminate( &me->object );
          data = &me->object.data;
          for ( ; cp;  )
          {
            if ( strncmp( cp, "&lt;!--", 4 ) == 0 )
            {
              cp = data = LYFindEndOfComment( cp );
            }
            else
            if ( s == 0 && !strncasecomp( cp, "&lt;PARAM", 6 ) && !( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[6] * 2 )) & 8 ) && cp[6] != '_' && cp[6] != '-' && cp[6] != '.' && cp[6] != ':' )
              have_param = 1;
            else
            {
              if ( !strncasecomp( cp, "&lt;OBJECT", 7 ) && !( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[7] * 2 )) & 8 ) && cp[7] != '_' && cp[7] != '-' && cp[7] != '.' && cp[7] != ':' )
              {
                if ( s == 0 )
                  start = cp;
                s++;
              }
              else
              {
                if ( !strncasecomp( cp, "&lt;/OBJECT", 8 ) && !( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[8] * 2 )) & 8 ) && cp[8] != '_' && cp[8] != '-' && cp[8] != '.' && cp[8] != ':' )
                {
                  if ( e == 0 )
                    first_end = cp;
                  last_end = cp;
                  e++;
                }
                else
                {
                  if ( !strncasecomp( cp, "&lt;MAP", 4 ) && !( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[4] * 2 )) & 8 ) && cp[4] != '_' && cp[4] != '-' && cp[4] != '.' && cp[4] != ':' )
                  {
                    if ( first_map == 0 )
                      first_map = cp;
                    last_map = cp;
                  }
                  else
                  {
                    if ( !strncasecomp( cp, "&lt;/MAP", 5 ) && !( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[5] * 2 )) & 8 ) && cp[5] != '_' && cp[5] != '-' && cp[5] != '.' && cp[5] != ':' )
                      last_map = cp;
                  }
                }
              }
            }
            cp++;
            data = cp;
          }
          if ( s < e )
          {
            if ( ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "Bad HTML: Unmatched OBJECT start and end tags.  Discarding content:\n%s\n", &me->object.data );
            }
          }
          else
          if ( e < s )
          {
            if ( !me->object_declare && me->object_name == 0 && ( !me->object_shapes || LYMapsOnly ) && ( me->object_usemap == 0 || LYMapsOnly ) && ( !clickable_images || LYMapsOnly || me->object_data == 0 || have_param || me->object_classid || me->object_codebase || me->object_codetype ) )
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "%s:\n%s\n", "HTML: Nested OBJECT tags.  Recycling incomplete contents", &me->object.data );
              }
              status = 701;
              me->object.size += -1;
              HTChunkPuts( &me->object, "&lt;/OBJECT&gt;" );
              if ( include == 0 )
                include = me->xinclude;
              SNACat( include, &me->object.data, me->object.size );
              clear_objectdata( me );
              HTML_start_element( me, 79, 0, 0, me->tag_charset, include );
            }
            else
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "HTML: Nested OBJECT tags.  Recycling.\n" );
              }
              status = 700;
              me->object.size += -1;
              HTChunkPuts( &me->object, "&lt;/OBJECT&gt;" );
              if ( LYMapsOnly == 0 )
                change_paragraph_style( me, &me->sp->style->next );
            }
          }
          else
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTML:OBJECT content:\n%s\n", &me->object.data );
            }
            if ( me->object_declare == 1 )
            {
              if ( me->object_id && me->object_id[0] && LYMapsOnly == 0 )
                LYHandleID( me, &me->object_id );
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "HTML: DECLAREd OBJECT.  Ignoring!\n" );
              }
            }
            else
            {
              if ( me->object_name && LYMapsOnly == 0 )
              {
                if ( me->object_id && me->object_id[0] )
                  LYHandleID( me, &me->object_id );
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTML: NAMEd OBJECT.  Ignoring!\n" );
                }
              }
              else
              {
                if ( s > 0 )
                {
                  if ( start && first_end && start < first_end )
                  {
                    if ( LYMapsOnly )
                    {
                      if ( LYMapsOnly && ( last_map == 0 || last_map < first_end ) )
                        first_end[0] = 0;
                      else
                        e = 0;
                      data = 0;
                      if ( LYMapsOnly && ( first_map == 0 || start < first_map ) )
                        HTSACopy( &data, start );
                      else
                        HTSACopy( &data, &me->object.data );
                      if ( e > 0 )
                      {
                        i = e;
                        for ( ; i > 0;  )
                        {
                          HTSACat( &data, "&lt;/OBJECT&gt;" );
                          i += -1;
                        }
                      }
                      if ( include == 0 )
                        include = me->xinclude;
                      HTSACat( include, data );
                      if ( WWW_TraceFlag )
                      {
                        fprintf( TraceFP( ), "HTML: Recycling nested OBJECT%s.\n", "" );
                      }
                      if ( data )
                      {
                        free( data );
                        data = 0;
                      }
                    }
                  }
                  else
                  {
                    if ( ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "Bad HTML: Unmatched OBJECT start and end tags.  Discarding content.\n" );
                    }
                  }
                }
                if ( me->object_shapes == 1 && LYMapsOnly == 0 )
                {
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "HTML: OBJECT has SHAPES.  Converting to FIG.\n" );
                  }
                  if ( include == 0 )
                    include = me->xinclude;
                  HTSACat( include, "&lt;FIG ISOBJECT IMAGEMAP" );
                  if ( me->object_ismap == 1 )
                    HTSACat( include, " IMAGEMAP" );
                  if ( me->object_id )
                  {
                    HTSACat( include, " ID=\"" );
                    HTSACat( include, &me->object_id );
                    HTSACat( include, "\"" );
                  }
                  if ( me->object_data && me->object_classid == 0 )
                  {
                    HTSACat( include, " SRC=\"" );
                    HTSACat( include, &me->object_data );
                    HTSACat( include, "\"" );
                  }
                  HTSACat( include, "&gt;" );
                  me->object.size += -1;
                  HTChunkPuts( &me->object, "&lt;/FIG&gt;" );
                  HTChunkTerminate( &me->object );
                  HTSACat( include, &me->object.data );
                }
                else
                {
                  if ( me->object_usemap && LYMapsOnly == 0 )
                  {
                    if ( WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "HTML: OBJECT has USEMAP.  Converting to IMG.\n" );
                    }
                    if ( include == 0 )
                      include = me->xinclude;
                    HTSACat( include, "&lt;IMG ISOBJECT" );
                    if ( me->object_id )
                    {
                      HTSACat( include, " ID=\"" );
                      HTSACat( include, &me->object_id );
                      HTSACat( include, "\"" );
                    }
                    if ( me->object_data && me->object_classid == 0 )
                    {
                      HTSACat( include, " SRC=\"" );
                      HTSACat( include, &me->object_data );
                      HTSACat( include, "\"" );
                    }
                    if ( me->object_title )
                    {
                      HTSACat( include, " TITLE=\"" );
                      HTSACat( include, &me->object_title );
                      HTSACat( include, "\" ALT=\"" );
                      HTSACat( include, &me->object_title );
                      HTSACat( include, "\"" );
                    }
                    if ( me->object_usemap )
                    {
                      HTSACat( include, " USEMAP=\"" );
                      HTSACat( include, &me->object_usemap );
                      if ( me->object_ismap == 1 )
                        HTSACat( include, "\" ISMAP&gt;" );
                      else
                        HTSACat( include, "\"&gt;" );
                    }
                    else
                      HTSACat( include, "&gt;" );
                    if ( first_map )
                    {
                      if ( s == 0 )
                      {
                        HTSACat( include, &me->object.data );
                        if ( WWW_TraceFlag )
                        {
                          fprintf( TraceFP( ), "HTML: MAP found, recycling object contents.\n" );
                        }
                      }
                      else
                      {
                        data = 0;
                        if ( last_map < start )
                        {
                          start[0] = 0;
                          i = 0;
                        }
                        else
                        if ( last_map < first_end )
                        {
                          first_end[0] = 0;
                          i = e;
                        }
                        else
                        if ( last_map < last_end )
                        {
                          last_end[0] = 0;
                          i = 1;
                        }
                        else
                          i = 0;
                        if ( last_end < first_map )
                        {
                          HTSACopy( &data, "&lt;OBJECT&gt;&lt;" );
                          HTSACat( &data, &last_end[1] );
                          i = 0;
                          while ( i > 0 )
                          {
                            HTSACat( &data, "&lt;/OBJECT&gt;" );
                            i += -1;
                          }
                          if ( WWW_TraceFlag )
                          {
                            fprintf( TraceFP( ), "%s:\n%s\n", "HTML: MAP and nested OBJECT tags.  Recycling parts", data );
                          }
                          HTSACat( include, data );
                          if ( data )
                          {
                            free( data );
                            data = 0;
                          }
                        }
                        else
                        {
                          if ( start < first_map )
                          {
                            HTSACopy( &data, start );
                          }
                          else
                          {
                            HTSACopy( &data, &me->object.data );
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    if ( me->object_id && me->object_id[0] && LYMapsOnly == 0 )
                      LYHandleID( me, &me->object_id );
                    if ( me->object.size > 1 )
                    {
                      if ( include == 0 )
                        include = me->xinclude;
                      HTSACat( include, &me->object.data );
                    }
                    if ( clickable_images && !LYMapsOnly && me->object_data && have_param == 0 && me->object_classid == 0 && me->object_codebase == 0 && me->object_codetype == 0 )
                    {
                      if ( include == 0 )
                        include = me->xinclude;
                      if ( me->inA )
                        HTSACat( include, "&lt;/A&gt;" );
                      HTSACat( include, " -&lt;A HREF=\"" );
                      HTSACat( include, &me->object_data );
                      HTSACat( include, "\"&gt;" );
                      if ( me->object_type && strncasecomp( &me->object_type, "image/", 6 ) == 0 )
                        HTSACat( include, "(IMAGE)" );
                      else
                        HTSACat( include, "(OBJECT)" );
                      HTSACat( include, "&lt;/A&gt; " );
                    }
                  }
                }
              }
            }
          }
          clear_objectdata( me );
          if ( LYMapsOnly == 0 )
            change_paragraph_style( me, &me->sp->style->next );
        }
          break;
        case 4:
          if ( me->inAPPLETwithP )
            LYEnsureDoubleSpace( me );
          else
            HTML_put_character( me, ' ' );
          LYResetParagraphAlignment( me );
          me->inAPPLETwithP = 0;
          me->inAPPLET = 0;
          change_paragraph_style( me, &me->sp->style->next );
          break;
        case 22:
          LYEnsureDoubleSpace( me );
          LYResetParagraphAlignment( me );
          me->inCAPTION = 0;
          change_paragraph_style( me, &me->sp->style->next );
          me->inLABEL = 0;
          break;
        case 29:
          LYEnsureDoubleSpace( me );
          LYResetParagraphAlignment( me );
          me->inCREDIT = 0;
          change_paragraph_style( me, &me->sp->style->next );
          me->inLABEL = 0;
          break;
        case 44:
          if ( !me->inFORM && ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Bad HTML: Unmatched FORM end tag\n" );
          }
          form_in_htext = 0;
          if ( me->inSELECT )
          {
            if ( ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "Bad HTML: Open SELECT at FORM end. Faking SELECT end tag. *****\n" );
            }
            if ( me->sp->tag_number != 91 && tags[91].contents )
              me->skip_stack++;
            HTML_end_element( me, 91, include );
          }
          me->inFORM = 0;
          HText_endForm( &me->text );
          if ( me->List_Nesting_Level < 0 || me->inP )
            LYEnsureSingleSpace( me );
          break;
        case 40:
          LYEnsureDoubleSpace( me );
          LYResetParagraphAlignment( me );
          change_paragraph_style( me, &me->sp->style->next );
          break;
        case 66:
          LYEnsureDoubleSpace( me );
          LYResetParagraphAlignment( me );
          change_paragraph_style( me, &me->sp->style->next );
          break;
        case 105:
        {
          InputFieldData I;
          int chars;
          char *data;
          if ( me->inTEXTAREA == 0 )
          {
            if ( ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "Bad HTML: Unmatched TEXTAREA end tag\n" );
            }
          }
          else
          {
            me->inTEXTAREA = 0;
            memset( I.accept, 0, 88 );
            I.value_cs = current_char_set;
            if ( me->style_change )
              actually_set_style( me );
            HTML_put_character( me, ' ' );
            me->in_word = 0;
            HText_appendCharacter( &me->text, 13 );
            HTChunkTerminate( &me->textarea );
            if ( temp )
            {
              free( temp );
              temp = 0;
            }
            I.type = "textarea";
            I.size = me->textarea_cols;
            I.name = &me->textarea_name;
            I.name_cs = me->textarea_name_cs;
            I.accept_cs = &me->textarea_accept_cs;
            *(int*)&me->textarea_accept_cs = 0;
            I.disabled = me->textarea_disabled;
            I.id = &me->textarea_id;
            me->UsePlainSpace = 1;
            if ( tags[ element_number ].contents == SGML_LITTERAL )
              LYUCTranslateHTMLString( &me->textarea.data, me->UCLYhndl, current_char_set, 0, me->UsePlainSpace, me->HiddenValue, 0 );
            else
              LYUCFullyTranslateString( &me->textarea.data, me->UCLYhndl, current_char_set, 0, 0, me->UsePlainSpace, me->HiddenValue, 0, 0 );
            data = &me->textarea.data;
            if ( data[0] )
            {
              cp = data + strlen( data ) + -1;
              for ( ; data <= cp && cp[0] == '\n';  )
              {
                cp[0] = 0;
                cp = &cp[ -1 ];
              }
              for ( ; data[0] == '\n'; data++ )
              {
                // data++;
              }
            }
            cp = strchr( data, '\n' );
            if ( cp )
            {
              cp[0] = 0;
              HTSACopy( &temp, data );
              cp[0] = '\n';
              data = &cp[1];
            }
            else
            {
              if ( data[0] )
                HTSACopy( &temp, data );
              else
              if ( temp )
              {
                free( temp );
                temp = 0;
              }
              data = "";
            }
            i = 0;
            for ( ; i < me->textarea_rows;  )
            {
              int j = 0;
              for ( ; temp && temp[ j ]; j++ )
              {
                if ( temp[ j ] == '\r' )
                {
                  temp[ j ] = 0;
                }
                // j++;
              }
              I.value = temp;
              chars = HText_beginInput( &me->text, me->inUnderline, &I );
              for ( ; chars > 0;  )
              {
                HTML_put_character( me, '_' );
                chars += -1;
              }
              HText_appendCharacter( &me->text, 13 );
              if ( data[0] )
              {
                if ( data[0] == '\n' )
                {
                  if ( temp )
                  {
                    free( temp );
                    temp = 0;
                  }
                  data++;
                }
                else
                {
                  cp = strchr( data, '\n' );
                  if ( cp )
                  {
                    cp[0] = 0;
                    HTSACopy( &temp, data );
                    cp[0] = '\n';
                    data = &cp[1];
                  }
                  else
                  {
                    HTSACopy( &temp, data );
                    data = "";
                  }
                }
              }
              else
              if ( temp )
              {
                free( temp );
                temp = 0;
              }
              i++;
            }
            while ( data[0] || temp )
            {
              int j = 0;
              for ( ; temp && temp[ j ]; j++ )
              {
                if ( temp[ j ] == '\r' )
                {
                  temp[ j ] = 0;
                }
                // j++;
              }
              I.value = temp;
              chars = HText_beginInput( &me->text, me->inUnderline, &I );
              chars = me->textarea_cols;
              for ( ; chars > 0;  )
              {
                HTML_put_character( me, '_' );
                chars += -1;
              }
              HText_appendCharacter( &me->text, 13 );
              if ( data[0] == '\n' )
              {
                if ( temp )
                {
                  free( temp );
                  temp = 0;
                }
                data++;
              }
              else
              {
                cp = strchr( data, '\n' );
                if ( cp )
                {
                  cp[0] = 0;
                  HTSACopy( &temp, data );
                  cp[0] = '\n';
                  data = &cp[1];
                }
                else
                {
                  if ( data[0] )
                  {
                    HTSACopy( &temp, data );
                    data = "";
                  }
                  else
                  {
                    if ( temp )
                    {
                      free( temp );
                      temp = 0;
                    }
                  }
                }
              }
            }
            if ( temp )
            {
              free( temp );
              temp = 0;
            }
            cp = 0;
            me->UsePlainSpace = 0;
            HTChunkClear( &me->textarea );
            if ( me->textarea_name )
            {
              free( &me->textarea_name );
              *(int*)&me->textarea_name = 0;
            }
            *(int*)&me->textarea_name_cs = -1;
            if ( me->textarea_id )
            {
              free( &me->textarea_id );
              *(int*)&me->textarea_id = 0;
            }
          }
        }
          break;
        case 91:
        {
          char *ptr;
          if ( me->inSELECT == 0 )
          {
            if ( ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "Bad HTML: Unmatched SELECT end tag *****\n" );
            }
          }
          else
          {
            me->inSELECT = 0;
            me->select_disabled = 0;
            if ( !me->inFORM && ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "Bad HTML: SELECT end tag not within FORM element *****\n" );
            }
            HTChunkTerminate( &me->option );
            ptr = HText_setLastOptionValue( &me->text, &me->option.data, &me->LastOptionValue, 3, me->LastOptionChecked, me->UCLYhndl, me->tag_charset );
            if ( me->LastOptionValue )
            {
              free( &me->LastOptionValue );
              *(int*)&me->LastOptionValue = 0;
            }
            me->LastOptionChecked = 0;
            if ( HTCurSelectGroupType == 3 || LYSelectPopups == 0 )
              LYEnsureSingleSpace( me );
            else
            if ( ptr && ( me->sp->tag_number == 86 || me->inPRE == 1 || !me->sp->_stack_element ) && strlen( ptr ) > 6 )
            {
              i = 0;
              for ( ; i <= 5; i++ )
              {
                if ( ptr[0] == ' ' )
                  HText_appendCharacter( &me->text, 1 );
                else
                  HText_appendCharacter( &me->text, ptr[0] );
                ptr++;
                // i++;
              }
              HText_setIgnoreExcess( &me->text, 1 );
              while ( ptr && ptr[0] )
              {
                if ( ptr[0] == ' ' )
                  HText_appendCharacter( &me->text, 1 );
                else
                {
                  HTkcode kcode = NOKANJI;
                  HTkcode specified_kcode = NOKANJI;
                  if ( HTCJK == JAPANESE )
                  {
                    kcode = HText_getKcode( &me->text );
                    HText_updateKcode( &me->text, kanji_code );
                    specified_kcode = HText_getSpecifiedKcode( &me->text );
                    HText_updateSpecifiedKcode( &me->text, kanji_code );
                  }
                  HText_appendCharacter( &me->text, ptr[0] );
                  if ( HTCJK == JAPANESE )
                  {
                    HText_updateKcode( &me->text, kcode );
                    HText_updateSpecifiedKcode( &me->text, specified_kcode );
                  }
                }
                ptr++;
              }
              if ( me->first_option == 0 )
              {
                HText_appendCharacter( &me->text, 93 );
                HText_endInput( &me->text );
                HText_setLastChar( &me->text, ']' );
                me->in_word = 1;
              }
              HText_setIgnoreExcess( &me->text, 0 );
            }
            HTChunkClear( &me->option );
            if ( me->Underline_Level > 0 && me->inUnderline == 0 )
            {
              HText_appendCharacter( &me->text, 3 );
              me->inUnderline = 1;
            }
            if ( me->needBoldH == 1 && me->inBoldH == 0 )
            {
              HText_appendCharacter( &me->text, 5 );
              me->inBoldH = 1;
              me->needBoldH = 0;
            }
          }
        }
          break;
        case 102:
          if ( nested_tables == 0 )
            me->inTABLE = 0;
          if ( me->sp->_stack_element != 37 )
          {
            if ( me->Division_Level >= 0 )
              me->Division_Level += -1;
            if ( me->Division_Level >= 0 )
              me->sp->_stack_element = me->DivisionAlignments[ me->Division_Level ];
            change_paragraph_style( me, &me->sp->style->next );
            if ( me->style_change )
              actually_set_style( me );
            if ( nested_tables )
            {
              me->inTABLE = HText_endStblTABLE( &me->text );
            }
            else
              HText_endStblTABLE( &me->text );
            me->current_default_alignment = me->sp->_stack_element;
            if ( me->List_Nesting_Level >= 0 )
              HText_NegateLineOne( &me->text );
          }
          break;
        case 111:
          HText_endStblTR( &me->text );
          if ( ( HText_LastLineEmpty( &me->text, 0 ) & 255 ) == 0 )
          {
            HText_setLastChar( &me->text, ' ' );
            HText_appendCharacter( &me->text, 13 );
          }
          me->in_word = 0;
          break;
        case 27:
          if ( me->inTABLE )
            HText_endStblCOLGROUP( &me->text );
          break;
        case 104:
        case 108:
          HText_endStblTD( &me->text );
          break;
        case 73:
          HTChunkPutc( &me->math, ' ' );
          HTChunkTerminate( &me->math );
          if ( me->math.size > 2 )
          {
            LYEnsureSingleSpace( me );
            if ( me->inUnderline == 0 )
              HText_appendCharacter( &me->text, 3 );
            HTML_put_string( me, "[MATH:" );
            HText_appendCharacter( &me->text, 4 );
            HTML_put_character( me, ' ' );
            HTML_put_string( me, &me->math.data );
            HText_appendCharacter( &me->text, 3 );
            HTML_put_string( me, ":MATH]" );
            if ( me->inUnderline == 0 )
              HText_appendCharacter( &me->text, 4 );
            LYEnsureSingleSpace( me );
          }
          HTChunkClear( &me->math );
          break;
        default:
          change_paragraph_style( me, &me->sp->style->next );
          break;
        case 1:
        case 2:
        case 6:
        case 7:
        case 12:
        case 14:
        case 21:
        case 25:
        case 30:
        case 32:
        case 37:
        case 63:
        case 65:
        case 67:
        case 68:
        case 82:
        case 89:
        case 93:
        case 94:
        case 100:
        case 103:
        case 107:
        case 109:
        case 112:
        case 115:
          break;
        }
      }
    }
  }
}
int HTML_put_entity( HTStructured *me, int entity_number )
{
  int eax;
  int nent = 112;
  if ( entity_number < nent )
  {
    HTML_put_string( me, p_entity_values[ entity_number ] );
    return 0;
  }
  return -4;
}
void HTML_free( HTStructured *me )
{
  char *include = 0;
  if ( LYMapsOnly && me->text == 0 )
  {
    if ( me->base_href )
    {
      free( &me->base_href );
      *(int*)&me->base_href = 0;
    }
    if ( me->map_address )
    {
      free( &me->map_address );
      *(int*)&me->map_address = 0;
    }
    clear_objectdata( me );
    if ( me->xinclude )
    {
      free( &me->xinclude );
      *(int*)&me->xinclude = 0;
    }
    if ( me == 0 )
    {
      return;
    }
    free( me );
    me = 0;
  }
  else
  {
    if ( me->style_change )
      actually_set_style( me );
    if ( me->comment_end )
      HTML_put_string( me, &me->comment_end );
    if ( me->text )
    {
      if ( me->inUnderline )
      {
        HText_appendCharacter( &me->text, 4 );
        me->inUnderline = 0;
        *(int*)&me->Underline_Level = 0;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTML_free: Ending underline\n" );
        }
      }
      if ( me->inA )
      {
        HTML_end_element( me, 0, &include );
        me->inA = 0;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTML_free: Ending HTML_A\n" );
        }
      }
      if ( me->inFONT )
      {
        HTML_end_element( me, 43, &include );
        me->inFONT = 0;
      }
      if ( me->inFORM )
      {
        HTML_end_element( me, 44, &include );
        me->inFORM = 0;
      }
      if ( me->option.size > 0 )
      {
        if ( ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Bad HTML: SELECT or OPTION not ended properly *****\n" );
        }
        HTChunkTerminate( &me->option );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTML_free: ***** leftover option data: %s\n", &me->option.data );
        }
        HTML_put_string( me, &me->option.data );
        HTChunkClear( &me->option );
      }
      if ( me->textarea.size > 0 )
      {
        if ( ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Bad HTML: TEXTAREA not used properly *****\n" );
        }
        HTChunkTerminate( &me->textarea );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTML_free: ***** leftover textarea data: %s\n", &me->textarea.data );
        }
        HTML_put_string( me, &me->textarea.data );
        HTChunkClear( &me->textarea );
      }
      if ( !dump_output_immediately && HText_sourceAnchors( &me->text ) <= 0 && HText_HiddenLinkCount( &me->text ) > 0 )
      {
        HTML_start_element( me, 83, 0, 0, -1, &include );
        HTML_put_character( me, '[' );
        HTML_start_element( me, 38, 0, 0, -1, &include );
        HTML_put_string( me, gettext( "Document has only hidden links.  Use the 'l'ist command." ) );
        HTML_end_element( me, 38, &include );
        HTML_put_character( me, ']' );
        HTML_end_element( me, 83, &include );
      }
      if ( me->xinclude )
      {
        HText_appendText( &me->text, " *** LYNX ERROR ***\rUnparsed data:\r" );
        HText_appendText( &me->text, &me->xinclude );
        if ( me->xinclude )
        {
          free( &me->xinclude );
          *(int*)&me->xinclude = 0;
        }
      }
      HText_endAppend( &me->text );
    }
    if ( me->option.size > 0 )
    {
      if ( ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Bad HTML: SELECT or OPTION not ended properly *****\n" );
      }
      if ( WWW_TraceFlag )
      {
        HTChunkTerminate( &me->option );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTML_free: ***** leftover option data: %s\n", &me->option.data );
        }
      }
      HTChunkClear( &me->option );
    }
    if ( me->textarea.size > 0 )
    {
      if ( ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Bad HTML: TEXTAREA not used properly *****\n" );
      }
      if ( WWW_TraceFlag )
      {
        HTChunkTerminate( &me->textarea );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTML_free: ***** leftover textarea data: %s\n", &me->textarea.data );
        }
      }
      HTChunkClear( &me->textarea );
    }
    if ( me->target )
      me->targetClass._free( me->target );
    if ( me->sp && me->sp->style->next && me->sp->tag_number )
    {
      switch ( me->sp->_stack_element )
      {
      case 1:
      case 41:
      case 47:
        me->sp->_stack_element = 3;
        break;
      default:
        if ( me->sp->_stack_element == 3 || me->sp->_stack_element == 49 )
          me->sp->_stack_element = 2;
        else
          me->sp->_stack_element = 1;
        break;
      }
      styles[86]->alignment = 1;
    }
    if ( me->base_href )
    {
      free( &me->base_href );
      *(int*)&me->base_href = 0;
    }
    if ( me->map_address )
    {
      free( &me->map_address );
      *(int*)&me->map_address = 0;
    }
    if ( me->LastOptionValue )
    {
      free( &me->LastOptionValue );
      *(int*)&me->LastOptionValue = 0;
    }
    clear_objectdata( me );
    if ( me == 0 )
    {
      return;
    }
    free( me );
    me = 0;
  }
  return;
}
void HTML_abort( HTStructured *me, HTError e )
{
  char *include = 0;
  if ( me->text )
  {
    if ( me->inUnderline )
    {
      HText_appendCharacter( &me->text, 4 );
      me->inUnderline = 0;
      *(int*)&me->Underline_Level = 0;
    }
    if ( me->inA )
    {
      HTML_end_element( me, 0, &include );
      me->inA = 0;
    }
    if ( me->inFONT )
    {
      HTML_end_element( me, 43, &include );
      me->inFONT = 0;
    }
    if ( me->inFORM )
    {
      HTML_end_element( me, 44, &include );
      me->inFORM = 0;
    }
    HText_endAppend( &me->text );
  }
  if ( me->option.size > 0 )
  {
    if ( WWW_TraceFlag )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTML_abort: SELECT or OPTION not ended properly *****\n" );
      }
      HTChunkTerminate( &me->option );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTML_abort: ***** leftover option data: %s\n", &me->option.data );
      }
    }
    HTChunkClear( &me->option );
  }
  if ( me->textarea.size > 0 )
  {
    if ( WWW_TraceFlag )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTML_abort: TEXTAREA not used properly *****\n" );
      }
      HTChunkTerminate( &me->textarea );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTML_abort: ***** leftover textarea data: %s\n", &me->textarea.data );
      }
    }
    HTChunkClear( &me->textarea );
  }
  if ( me->target )
    me->targetClass._abort( me->target, e );
  if ( me->sp && me->sp->style->next && me->sp->tag_number )
  {
    switch ( me->sp->_stack_element )
    {
    case 1:
    case 41:
    case 47:
      me->sp->_stack_element = 3;
      break;
    default:
      if ( me->sp->_stack_element == 3 || me->sp->_stack_element == 49 )
        me->sp->_stack_element = 2;
      else
        me->sp->_stack_element = 1;
      break;
    }
    styles[86]->alignment = 1;
  }
  if ( me->base_href )
  {
    free( &me->base_href );
    *(int*)&me->base_href = 0;
  }
  if ( me->map_address )
  {
    free( &me->map_address );
    *(int*)&me->map_address = 0;
  }
  if ( me->textarea_name )
  {
    free( &me->textarea_name );
    *(int*)&me->textarea_name = 0;
  }
  if ( me->textarea_accept_cs )
  {
    free( &me->textarea_accept_cs );
    *(int*)&me->textarea_accept_cs = 0;
  }
  if ( me->textarea_id )
  {
    free( &me->textarea_id );
    *(int*)&me->textarea_id = 0;
  }
  if ( me->LastOptionValue )
  {
    free( &me->LastOptionValue );
    *(int*)&me->LastOptionValue = 0;
  }
  if ( me->xinclude )
  {
    free( &me->xinclude );
    *(int*)&me->xinclude = 0;
  }
  clear_objectdata( me );
  if ( me )
  {
    free( me );
    me = 0;
  }
  return;
}
void get_styles( void )
{
  int eax;
  HTStyle **st = 0;
  styleSheet = DefaultStyle( &st );
  default_style = st[0];
  styles[47] = st[41];
  styles[48] = st[42];
  styles[49] = st[43];
  styles[50] = st[44];
  styles[51] = st[45];
  styles[52] = st[46];
  styles[143] = st[47];
  styles[144] = st[48];
  styles[145] = st[49];
  styles[146] = st[1];
  styles[147] = st[2];
  styles[148] = st[3];
  styles[35] = st[22];
  styles[131] = st[23];
  styles[132] = st[24];
  styles[133] = st[25];
  styles[134] = st[26];
  styles[135] = st[27];
  styles[136] = st[28];
  styles[114] = styles[80] = st[8];
  styles[119] = st[9];
  styles[120] = st[10];
  styles[121] = st[11];
  styles[122] = st[12];
  styles[123] = st[13];
  styles[124] = st[14];
  styles[74] = styles[33] = st[15];
  styles[125] = st[16];
  styles[126] = st[17];
  styles[127] = st[18];
  styles[128] = st[19];
  styles[129] = st[20];
  styles[130] = st[21];
  styles[36] = st[29];
  styles[137] = st[30];
  styles[138] = st[31];
  styles[139] = st[32];
  styles[140] = st[33];
  styles[141] = st[34];
  styles[142] = st[35];
  styles[3] = st[39];
  styles[9] = st[4];
  styles[16] = st[5];
  styles[19] = st[6];
  styles[42] = st[7];
  styles[78] = st[40];
  styles[85] = styles[117] = st[36];
  styles[86] = st[37];
  styles[70] = st[38];
  return;
}
HTStyle *LYstyles( int style_number )
{
  if ( styles[ style_number ] == 0 )
  {
    get_styles( );
  }
  return styles[ style_number ];
}
HTStructured *HTML_new( HTParentAnchor *anchor, HTFormat format_out, HTStream *stream )
{
  HTStructured *me;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "start HTML_new\n" );
  }
  if ( format_out != HTAtom_for( "text/plain" ) && format_out != HTAtom_for( "www/present" ) )
  {
    HTStream *intermediate = HTStreamStack( HTAtom_for( "text/html" ), format_out, &stream->isa->name[0], anchor );
    if ( intermediate )
    {
      return me;
    }
    fprintf( stderr, "\n** Internal error: can't parse HTML to %s\n", &format_out->name );
    exit_immediately( 1 );
  }
  me = calloc( 1, sizeof( HTStructured ) );
  if ( me == 0 )
    outofmem( "./HTML.c", "HTML_new" );
  get_styles( );
  me->isa->name[0] = HTMLPresentation.name;
  me->node_anchor = anchor;
  *(int*)&me->CurrentA = 0;
  *(int*)&me->CurrentANum = 0;
  *(int*)&me->base_href = 0;
  *(int*)&me->map_address = 0;
  HTChunkInit( &me->title, 128 );
  HTChunkInit( &me->object, 128 );
  me->object_started = 0;
  me->object_declare = 0;
  me->object_shapes = 0;
  me->object_ismap = 0;
  *(int*)&me->object_id = 0;
  *(int*)&me->object_title = 0;
  *(int*)&me->object_data = 0;
  *(int*)&me->object_type = 0;
  *(int*)&me->object_classid = 0;
  *(int*)&me->object_codebase = 0;
  *(int*)&me->object_codetype = 0;
  *(int*)&me->object_usemap = 0;
  *(int*)&me->object_name = 0;
  HTChunkInit( &me->option, 128 );
  me->first_option = 1;
  *(int*)&me->LastOptionValue = 0;
  me->LastOptionChecked = 0;
  me->select_disabled = 0;
  HTChunkInit( &me->textarea, 128 );
  *(int*)&me->textarea_name = 0;
  *(int*)&me->textarea_name_cs = -1;
  *(int*)&me->textarea_accept_cs = 0;
  *(int*)&me->textarea_cols = 0;
  *(int*)&me->textarea_rows = 4;
  *(int*)&me->textarea_disabled = 0;
  *(int*)&me->textarea_id = 0;
  HTChunkInit( &me->math, 128 );
  HTChunkInit( &me->style_block, 128 );
  HTChunkInit( &me->script, 128 );
  *(int*)&me->text = 0;
  me->style_change = 1;
  me->new_style = default_style;
  *(int*)&me->old_style = 0;
  *(int*)&me->current_default_alignment = 1;
  me->sp = me->stack[799].style;
  *(int*)&me->skip_stack = 0;
  me->sp->tag_number = -1;
  me->sp->style->next = default_style;
  me->sp->_stack_element = 1;
  me->stack_overrun = 0;
  *(int*)&me->Division_Level = -1;
  *(int*)&me->Underline_Level = 0;
  *(int*)&me->Quote_Level = 0;
  me->UsePlainSpace = 0;
  me->HiddenValue = 0;
  *(int*)&me->lastraw = -1;
  *(int*)&me->List_Nesting_Level = -1;
  LYZero_OL_Counter( me );
  *(int*)&me->Last_OL_Count = 0;
  me->Last_OL_Type = '1';
  me->inA = 0;
  me->inAPPLET = 0;
  me->inAPPLETwithP = 0;
  me->inBadBASE = 0;
  me->inBadHREF = 0;
  me->inBadHTML = 0;
  me->inBASE = 0;
  me->node_anchor->inBASE = 0;
  me->inBoldA = 0;
  me->inBoldH = 0;
  me->inCAPTION = 0;
  me->inCREDIT = 0;
  me->inFIG = 0;
  me->inFIGwithP = 0;
  me->inFONT = 0;
  me->inFORM = 0;
  me->inLABEL = 0;
  me->inP = 0;
  me->inPRE = 0;
  me->inSELECT = 0;
  me->inTABLE = 0;
  me->inUnderline = 0;
  me->needBoldH = 0;
  *(int*)&me->comment_start = 0;
  *(int*)&me->comment_end = 0;
  addClassName( "", "", 0 );
  class_string[0] = 0;
  LYGetChartransInfo( me );
  UCTransParams_clear( &me->T );
  me->inUCLYhndl = HTAnchor_getUCLYhndl( &me->node_anchor, 1 );
  if ( me->inUCLYhndl < 0 )
  {
    me->inUCLYhndl = HTAnchor_getUCLYhndl( &me->node_anchor, 0 );
    me->inUCI = HTAnchor_getUCInfoStage( &me->node_anchor, 0 );
  }
  else
  {
    me->inUCI = HTAnchor_getUCInfoStage( &me->node_anchor, 1 );
  }
  me->outUCI = HTAnchor_getUCInfoStage( &me->node_anchor, 2 );
  me->outUCLYhndl = HTAnchor_getUCLYhndl( &me->node_anchor, 2 );
  me->target = stream;
  if ( stream )
  {
    me->targetClass.name = stream->isa;
    me->targetClass._free = stream->anchor;
    me->targetClass._abort = stream->fp;
    me->targetClass.put_character = stream->filename;
    me->targetClass.put_string = stream->chunk;
    me->targetClass.put_block = stream->last_chunk;
  }
  return me;
}
void CacheThru_do_free( HTStream *me )
{
  if ( me->anchor->source_cache_file )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "SourceCacheWriter: Removing previous file %s\n", &me->anchor->source_cache_file );
    }
    LYRemoveTemp( &me->anchor->source_cache_file );
    if ( me->anchor->source_cache_file )
    {
      free( &me->anchor->source_cache_file );
      me->anchor->source_cache_file = 0;
    }
  }
  if ( me->anchor->source_cache_chunk )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "SourceCacheWriter: Removing previous memory chunk %p\n", &me->anchor->source_cache_chunk );
    }
    HTChunkFree( &me->anchor->source_cache_chunk );
    me->anchor->source_cache_chunk = 0;
  }
  if ( me->fp )
  {
    fflush( &me->fp );
    if ( ferror( &me->fp ) )
      *(int*)&me->status = -1;
    LYCloseTempFP( &me->fp );
    if ( me->status == 0 )
    {
      char *cp_freeme = 0;
      me->anchor->source_cache_file = me->filename;
      if ( WWW_TraceFlag )
      {
        cp_freeme = HTAnchor_address( &me->anchor->parent->parent );
        fprintf( TraceFP( ), "SourceCacheWriter: Committing file %s for URL %s to anchor\n", &me->filename, cp_freeme );
      }
      if ( cp_freeme )
      {
        free( cp_freeme );
        cp_freeme = 0;
      }
    }
    else
    {
      if ( source_cache_file_error == 0 )
      {
        HTAlert( gettext( "Source cache error - disk full?" ) );
        source_cache_file_error = 1;
      }
      LYRemoveTemp( &me->filename );
      me->anchor->source_cache_file = 0;
    }
  }
  else
  if ( me->status )
  {
    if ( me->chunk )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "SourceCacheWriter: memory chunk %p had errors.\n", &me->chunk );
      }
      HTChunkFree( &me->chunk );
      *(int*)&me->last_chunk = 0;
      me->chunk = me->last_chunk;
    }
    HTAlert( gettext( "Source cache error - not enough memory!" ) );
  }
  if ( me->chunk )
  {
    char *cp_freeme = 0;
    me->anchor->source_cache_chunk = me->chunk;
    if ( WWW_TraceFlag )
    {
      cp_freeme = HTAnchor_address( &me->anchor->parent->parent );
      fprintf( TraceFP( ), "SourceCacheWriter: Committing memory chunk %p for URL %s to anchor\n", &me->chunk, cp_freeme );
    }
    if ( cp_freeme == 0 )
    {
      return;
    }
    free( cp_freeme );
  }
  return;
}
void CacheThru_free( HTStream *me )
{
  CacheThru_do_free( me );
  me->actions->_free( me->target );
  if ( me )
  {
    free( me );
    me = 0;
  }
  return;
}
void CacheThru_abort( HTStream *me, HTError e )
{
  if ( me->fp )
    LYCloseTempFP( &me->fp );
  if ( LYCacheSourceForAborted == 0 )
  {
    if ( me->filename )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "SourceCacheWriter: Removing active file %s\n", &me->filename );
      }
      LYRemoveTemp( &me->filename );
      if ( me->filename )
      {
        free( &me->filename );
        *(int*)&me->filename = 0;
      }
    }
    if ( me->chunk )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "SourceCacheWriter: Removing active memory chunk %p\n", &me->chunk );
      }
      HTChunkFree( &me->chunk );
    }
  }
  else
  {
    *(int*)&me->status = 0;
    CacheThru_do_free( me );
  }
  me->actions->_abort( me->target, e );
  if ( me )
  {
    free( me );
    me = 0;
  }
  return;
}
void CacheThru_put_character( HTStream *me, char c_in )
{
  if ( me->status == 0 )
  {
    if ( me->fp )
      fputc( c_in, &me->fp );
    else
    if ( me->chunk )
    {
      me->last_chunk = HTChunkPutc2( &me->last_chunk, c_in );
      if ( me->last_chunk == 0 || me->last_chunk->allocated == 0 )
        *(int*)&me->status = -1;
    }
  }
  me->actions->put_character( me->target, c_in );
  return;
}
void CacheThru_put_string( HTStream *me, char *str )
{
  if ( me->status == 0 )
  {
    if ( me->fp )
      fputs( str, &me->fp );
    else
    if ( me->chunk )
    {
      me->last_chunk = HTChunkPuts2( &me->last_chunk, str );
      if ( me->last_chunk == 0 || me->last_chunk->allocated == 0 )
        *(int*)&me->status = -1;
    }
  }
  me->actions->put_string( me->target, str );
  return;
}
void CacheThru_write( HTStream *me, char *str, int l )
{
  if ( me->status == 0 && l )
  {
    if ( me->fp )
    {
      fwrite( str, 1, l, &me->fp );
      if ( ferror( &me->fp ) )
        *(int*)&me->status = -1;
    }
    else
    if ( me->chunk )
    {
      me->last_chunk = HTChunkPutb2( &me->last_chunk, str, l );
      if ( me->last_chunk == 0 || me->last_chunk->allocated == 0 )
        *(int*)&me->status = -1;
    }
  }
  me->actions->put_block( me->target, str, l );
  return;
}
HTStream *CacheThru_new( HTParentAnchor *anchor, HTStream *target )
{
  int eax;
  char *cp_freeme = 0;
  char filename[256];
  HTStream *stream = 0;
  HTProtocol *p = &anchor->protocol[0];
  if ( LYCacheSource == 0 )
    return target;
  else
  {
    if ( strcmp( &p->name[0], "http" ) && strcmp( &p->name[0], "https" ) )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "SourceCacheWriter: Protocol is \"%s\"; not cached\n", &p->name[0] );
      }
      return target;
    }
    else
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "start CacheThru_new\n" );
      }
      stream = malloc( ( 1 ) * sizeof( HTStream ) );
      if ( stream == 0 )
        outofmem( "./HTML.c", "CacheThru_new" );
      stream->isa->name[0] = PassThruCache.name;
      stream->anchor = anchor;
      *(int*)&stream->fp = 0;
      *(int*)&stream->filename = 0;
      *(int*)&stream->chunk = 0;
      stream->target = target;
      stream->actions = target->isa->name[0];
      *(int*)&stream->status = 0;
      if ( LYCacheSource == 1 )
      {
        if ( anchor->source_cache_file && WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "SourceCacheWriter: If successful, will replace source cache file %s\n", &anchor->source_cache_file );
        }
        stream->fp = LYOpenTemp( filename, ".html", "wb" );
        if ( stream->fp == 0 )
        {
          if ( WWW_TraceFlag )
          {
            cp_freeme = HTAnchor_address( (int)( &anchor->parent->parent ) );
            fprintf( TraceFP( ), "SourceCacheWriter: Cannot open source cache file for URL %s\n", cp_freeme );
          }
          if ( stream )
          {
            free( stream );
            stream = 0;
          }
          if ( cp_freeme )
          {
            free( cp_freeme );
            cp_freeme = 0;
          }
          return target;
        }
        else
        {
          HTSACopy( &stream->filename, filename );
          if ( WWW_TraceFlag )
          {
            cp_freeme = HTAnchor_address( (int)( &anchor->parent->parent ) );
            fprintf( TraceFP( ), "SourceCacheWriter: Caching source for URL %s in file %s\n", cp_freeme, filename );
          }
          if ( cp_freeme )
          {
            free( cp_freeme );
            cp_freeme = 0;
          }
        }
      }
      if ( LYCacheSource == 2 )
      {
        if ( anchor->source_cache_chunk && WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "SourceCacheWriter: If successful, will replace memory chunk %p\n", &anchor->source_cache_chunk );
        }
        stream->chunk = stream->last_chunk = HTChunkCreateMayFail( 4096, 1 );
        if ( stream->chunk == 0 )
          *(int*)&stream->status = -1;
        if ( WWW_TraceFlag )
        {
          cp_freeme = HTAnchor_address( (int)( &anchor->parent->parent ) );
          fprintf( TraceFP( ), "SourceCacheWriter: Caching source for URL %s in memory chunk %p\n", cp_freeme, &stream->chunk );
        }
        if ( cp_freeme )
        {
          free( cp_freeme );
          cp_freeme = 0;
        }
      }
      return stream;
    }
  }
}
HTStream *HTMLToPlain( HTPresentation *pres, HTParentAnchor *anchor, HTStream *sink )
{
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTMLToPlain calling CacheThru_new\n" );
  }
  return CacheThru_new( anchor, SGML_new( &HTML_dtd, anchor, HTML_new( anchor, &pres->rep_out, sink ) ) );
}
HTStream *HTMLParsedPresent( HTPresentation *pres, HTParentAnchor *anchor, HTStream *sink )
{
  HTStream *intermediate = sink;
  if ( intermediate == 0 )
  {
    int old_parser_cset = HTAnchor_getUCLYhndl( anchor, 1 );
    int structured_cset = HTAnchor_getUCLYhndl( anchor, 2 );
    if ( structured_cset < 0 )
    {
      structured_cset = HTAnchor_getUCLYhndl( anchor, 3 );
    }
    if ( structured_cset >= 0 )
      goto B17;
    else
      structured_cset = current_char_set;
B17:;
    HTAnchor_setUCInfoStage( anchor, structured_cset, 1, 5 );
    if ( pres->rep_out == WWW_SOURCE )
    {
      intermediate = HTStreamStack( HTAtom_for( "text/plain" ), HTAtom_for( "www/present" ), 0, anchor );
    }
    else
    {
      intermediate = HTStreamStack( HTAtom_for( "text/plain" ), &pres->rep_out, 0, anchor );
    }
    if ( structured_cset != old_parser_cset )
    {
      HTAnchor_resetUCInfoStage( anchor, old_parser_cset, 1, 0 );
      if ( old_parser_cset >= 0 )
        HTAnchor_setUCInfoStage( anchor, old_parser_cset, 1, 2 );
    }
  }
  if ( intermediate == 0 )
  {
    return 0;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTMLParsedPresent calling CacheThru_new\n" );
  }
}
HTStream *HTMLToC( HTPresentation *pres, HTParentAnchor *anchor, HTStream *sink )
{
  HTStructured *html;
  if ( sink )
    sink = sink->chunk( );
  html = HTML_new( anchor, HTAtom_for( "text/plain" ), sink );
  html->comment_start = "/* ";
  html->comment_end = " */\n";
  if ( sink == 0 )
    HTML_put_string( html, &html->comment_start );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTMLToC calling CacheThru_new\n" );
  }
  return CacheThru_new( anchor, SGML_new( &HTML_dtd, anchor, &html->isa->name[0] ) );
}
HTStream *HTMLPresent( HTPresentation *pres, HTParentAnchor *anchor, HTStream *sink )
{
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTMLPresent calling CacheThru_new\n" );
  }
  return CacheThru_new( anchor, SGML_new( &HTML_dtd, anchor, HTML_new( anchor, HTAtom_for( "www/present" ), 0 ) ) );
}
int HTLoadError( HTStream *sink, int number, char *message )
{
  HTAlert( message );
  return 0 - number;
}
char *MakeNewTitle( char **value, int src_type )
{
  char *ptr;
  char *newtitle = 0;
  HTSACopy( &newtitle, "[" );
  if ( value && value[ src_type ] )
  {
    ptr = strrchr( value[ src_type ], '/' );
  }
  else
    ptr = 0;
  if ( ptr == 0 )
    HTSACat( &newtitle, value[ src_type ] );
  else
    HTSACat( &newtitle, &ptr[1] );
  HTSACat( &newtitle, "]" );
  return newtitle;
}
char *MakeNewImageValue( char **value )
{
  char *ptr;
  char *newtitle = 0;
  HTSACopy( &newtitle, "[" );
  ptr = 0;
  if ( ptr == 0 )
    HTSACat( &newtitle, value[27] );
  else
    HTSACat( &newtitle, &ptr[1] );
  HTSACat( &newtitle, "]-Submit" );
  return newtitle;
}
char *MakeNewMapValue( char **value, char *mapstr )
{
  char *ptr;
  char *newtitle = 0;
  HTSACopy( &newtitle, "[" );
  HTSACat( &newtitle, mapstr );
  if ( verbose_img && value[15] && value[15][0] )
  {
    HTSACat( &newtitle, ":" );
    ptr = strrchr( value[15], '/' );
    if ( ptr == 0 )
      HTSACat( &newtitle, value[15] );
    else
      HTSACat( &newtitle, &ptr[1] );
  }
  HTSACat( &newtitle, "]" );
  return newtitle;
}
#if 0
#endif
