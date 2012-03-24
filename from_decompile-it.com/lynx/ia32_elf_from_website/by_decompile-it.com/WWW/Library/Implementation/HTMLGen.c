#include "HTMLGen.c.h"
char class_string[256];
static char *Style_className;
static char myHash[128];
static int hcode;
static HTStructuredClass HTMLGeneration;
static HTStructuredClass PlainToHTMLConversion;
void flush_breaks( HTStructured *me )
{
  int i = 0;
  for ( ; i <= 20; i++ )
  {
    me->line_break[ i ] = 0;
    // i++;
  }
  return;
}
void HTMLGen_flush( HTStructured *me )
{
  me->targetClass.put_block( me->target, me->buffer[0], me->write_pointer - me->buffer[0], ebp_4 );
  me->write_pointer = me->buffer[0];
  flush_breaks( me );
  *(int*)&me->cleanness = 0;
  me->delete_line_break_char[0] = 0;
  return;
}
void do_cstyle_flush( HTStructured *me )
{
  if ( me->text == 0 && LYPreparsedSource )
    me->text = HTMainText;
  if ( me->text )
  {
    HTMLGen_flush( me );
  }
  return;
}
void allow_break( HTStructured *me, int new_cleanness, BOOLEAN dlbc )
{
  if ( dlbc && me->write_pointer == me->buffer[0] )
    dlbc = 0;
  me->line_break[ new_cleanness ] = me->write_pointer;
  me->delete_line_break_char[ new_cleanness ] = dlbc;
  if ( me->cleanness <= new_cleanness && ( me->overflowed || me->buffer[0] < me->line_break[ new_cleanness ] ) )
  {
    me->cleanness = new_cleanness;
  }
  return;
}
void HTMLGen_put_character( HTStructured *me, char c )
{
  if ( me->escape_specials && 31 <= c && ( c == 1 || c == 2 || c == 7 ) )
  {
    HTMLGen_put_character( me, '&' );
    HTMLGen_put_character( me, '#' );
    HTMLGen_put_character( me, 'x' );
    switch ( c )
    {
    case 1:
      HTMLGen_put_character( me, 'A' );
      HTMLGen_put_character( me, '0' );
      c = ';';
      break;
    case 2:
      HTMLGen_put_character( me, '2' );
      HTMLGen_put_character( me, '0' );
      HTMLGen_put_character( me, '0' );
      HTMLGen_put_character( me, '2' );
      c = ';';
      break;
    case 7:
      HTMLGen_put_character( me, 'A' );
      HTMLGen_put_character( me, 'D' );
      c = ';';
      break;
    default:
      c = ';';
      break;
    }
    return;
  }
  me->write_pointer[0] = c;
  me->write_pointer++;
  if ( c == '\n' )
  {
    HTMLGen_flush( me );
  }
  else
  {
    if ( me->preformatted == 0 && ( c == ' ' || c == '\t' ) )
    {
      int new_cleanness = 3;
      if ( me->buffer[1] < me->write_pointer )
      {
        char delims[5];
        char *p;
        memcpy( delims, ",;:.", 5 );
        p = strchr( delims, me->write_pointer[ -2 ] );
        if ( p )
          new_cleanness = ( p - delims[0] ) + 6;
        if ( me->in_attrval == 0 )
          new_cleanness += 10;
      }
      allow_break( me, new_cleanness, 1 );
    }
    if ( me->write_pointer < me->buffer[ me->buffer_maxchars ] && ( me->overflowed == 0 || me->cleanness == 0 ) )
    {
      return;
    }
    if ( me->cleanness )
    {
      char line_break_char = me->line_break[ me->cleanness ][0];
      char *saved = &me->line_break[ me->cleanness ];
      if ( me->delete_line_break_char[ me->cleanness ] )
        saved++;
      me->line_break[ me->cleanness ][0] = '\n';
      me->targetClass.put_block( me->target, me->buffer[0], ( me->line_break[ me->cleanness ] - me->buffer[0] ) + 1 );
      me->line_break[ me->cleanness ][0] = line_break_char;
    {
      char *p = saved;
      char *q = &me->buffer[0];
      for ( ; p < me->write_pointer; p++ )
      {
        q[0] = p[0];
        q++;
        // p++;
      }
      *(int*)&me->cleanness = 0;
    {
      int i = 0;
      for ( ; i <= 20; i++ )
      {
        if ( me->line_break[ i ] && saved < me->line_break[ i ] )
        {
          me->line_break[ i ] += me->buffer[0] - saved;
          me->cleanness = i;
        }
        else
          me->line_break[ i ] = 0;
        // i++;
      }
      me->delete_line_break_char[0] = 0;
      me->write_pointer = me->write_pointer[ me->buffer[0] - saved ];
      me->overflowed = 0;
    }
    }
    }
    else
    {
      me->targetClass.put_block( me->target, me->buffer[0], me->buffer_maxchars );
      me->write_pointer = me->buffer[0];
      flush_breaks( me );
      me->overflowed = 1;
    }
  }
  return;
}
void HTMLGen_put_string( HTStructured *me, char *s )
{
  char *p = s;
  for ( ; p[0]; p++ )
  {
    HTMLGen_put_character( me, p[0] );
    // p++;
  }
  return;
}
void HTMLGen_write( HTStructured *me, char *s, int l )
{
  char *p = s;
  for ( ; p < s[ l ]; p++ )
  {
    HTMLGen_put_character( me, p[0] );
    // p++;
  }
  return;
}
int HTMLGen_start_element( HTStructured *me, int element_number, BOOLEAN *present, char **value, int charset, char **insert )
{
  int i;
  BOOLEAN was_preformatted = me->preformatted;
  HTTag *tag = &tags[ element_number ];
  char *title = 0;
  char *title_tmp = 0;
  if ( LYPreparsedSource )
  {
    HTSprintf( &Style_className, ";%s", tags[ element_number ].name );
    strcpy( myHash, tags[ element_number ].name );
    if ( class_string[0] )
    {
      int len = strlen( myHash );
      sprintf( &myHash[ len ], ".%.*s", 126 - len, class_string );
      HTSprintf( &Style_className, ".%s", class_string[0] );
    }
    class_string[0] = 0;
    strtolower( myHash );
    hcode = hash_code( myHash );
    strtolower( Style_className );
    if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
    {
      fprintf( TraceFP( ), "CSSTRIM:%s -&gt; %d", myHash, hcode );
      if ( hashStyles[ hcode ].code != hcode )
      {
        char *rp = strrchr( myHash, '.' );
        fprintf( TraceFP( ), " (undefined) %s\n", myHash );
        if ( rp )
        {
          int hcd;
          rp[0] = 0;
          hcd = hash_code( myHash );
          fprintf( TraceFP( ), "CSS:%s -&gt; %d", myHash, hcd );
          if ( hashStyles[ hcd ].code != hcd )
          {
            fprintf( TraceFP( ), " (undefined) %s\n", myHash );
          }
          else
          {
            fprintf( TraceFP( ), " ca=%d\n", hashStyles[ hcd ].color );
          }
        }
      }
      else
      {
        fprintf( TraceFP( ), " ca=%d\n", hashStyles[ hcode ].color );
      }
    }
    if ( displayStyles[ element_number + 8 ].color > -2 )
    {
      if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
      {
        fprintf( TraceFP( ), "CSSTRIM: start_element: top &lt;%s&gt;\n", tags[ element_number ].name );
      }
      do_cstyle_flush( me );
      _internal_HTC( &me->text, hcode, 1 );
    }
  }
  me->preformatted = 1;
  HTMLGen_put_character( me, '<' );
  HTMLGen_put_string( me, &tag->name[0] );
  if ( present )
  {
    BOOLEAN had_attr = 0;
    i = 0;
    for ( ; i < tag->number_of_attributes; i++ )
    {
      if ( present[ i ] )
      {
        had_attr = 1;
        HTMLGen_put_character( me, ' ' );
        allow_break( me, 11, 1 );
        if ( LYPreparsedSource && element_number == 69 && title == 0 && present[1] && value && value[1][0] && !present[9] && ( present[8] || present[3] ) )
        {
          if ( present[12] && value[12][0] )
          {
            HTSACopy( &title, value[12] );
            LYTrimHead( title );
            LYTrimTail( title );
          }
          if ( ( title == 0 || !title[0] ) && present[8] )
            HTSACopy( &title, value[8] );
          if ( title && title[0] )
          {
            HTSprintf0( &title_tmp, "link.%s.%s", value[1], title );
            if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
            {
              fprintf( TraceFP( ), "CSSTRIM:link=%s\n", title_tmp );
            }
            do_cstyle_flush( me );
            _internal_HTC( &me->text, hash_code( title_tmp ), 1 );
          }
        }
        HTMLGen_put_string( me, &tag->attributes[ i ].name );
        if ( value[ i ] )
        {
          me->preformatted = was_preformatted;
          me->in_attrval = 1;
          if ( strchr( value[ i ], '"' ) == 0 )
          {
            HTMLGen_put_string( me, "=\"" );
            HTMLGen_put_string( me, value[ i ] );
            HTMLGen_put_character( me, '"' );
          }
          else
          {
            if ( strchr( value[ i ], '\'' ) == 0 )
            {
              HTMLGen_put_string( me, "='" );
              HTMLGen_put_string( me, value[ i ] );
              HTMLGen_put_character( me, '\'' );
            }
            else
            {
              char *p;
              HTMLGen_put_string( me, "=\"" );
              p = value[ i ];
              for ( ; p[0]; p++ )
              {
                if ( p[0] != '"' )
                  HTMLGen_put_character( me, p[0] );
                else
                  HTMLGen_put_string( me, "&#34;" );
                // p++;
              }
              HTMLGen_put_character( me, '"' );
            }
          }
          me->preformatted = 1;
          me->in_attrval = 0;
        }
      }
      // i++;
    }
    if ( had_attr && LYPreparsedSource && element_number == 69 )
    {
      if ( title && title[0] )
      {
        do_cstyle_flush( me );
        _internal_HTC( &me->text, hash_code( title_tmp ), 0 );
        if ( title_tmp )
        {
          free( title_tmp );
          title_tmp = 0;
        }
      }
      if ( title )
      {
        free( title );
        title = 0;
      }
    }
    if ( had_attr )
      allow_break( me, 12, 0 );
  }
  HTMLGen_put_string( me, "&gt;" );
  me->preformatted = 1;
  if ( !me->preformatted && tag->contents )
  {
    if ( tags[ element_number ].contents == SGML_ELEMENT )
      allow_break( me, 15, 0 );
    else
      allow_break( me, 2, 0 );
  }
  if ( LYPreparsedSource && tags[ element_number ].contents == SGML_EMPTY && ( tags[ element_number ].flags & 16 ) == 0 )
  {
    if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
    {
      fprintf( TraceFP( ), "STYLE:begin_element:ending EMPTY element style\n" );
    }
    do_cstyle_flush( me );
    _internal_HTC( &me->text, hcode, 0 );
    TrimColorClass( tags[ element_number ].name, Style_className, &hcode );
  }
  if ( element_number == 79 && tag->contents == 1 )
  {
    if ( present == 0 )
    {
      return 701;
    }
    if ( present[8] == 0 && ( present[15] == 0 || value[15] == 0 || value[15][0] == 0 ) && ( present[17] || present[23] == 0 || value[23] == 0 || value[23][0] == 0 ) )
    {
      return 701;
    }
  }
  return 0;
}
int HTMLGen_end_element( HTStructured *me, int element_number, char **insert )
{
  if ( !me->preformatted && tags[ element_number ].contents )
  {
    if ( tags[ element_number ].contents == SGML_ELEMENT )
      allow_break( me, 14, 0 );
    else
      allow_break( me, 1, 0 );
  }
  HTMLGen_put_string( me, "&lt;/" );
  HTMLGen_put_string( me, tags[ element_number ].name );
  HTMLGen_put_character( me, '>' );
  if ( element_number == 86 )
    me->preformatted = 0;
  TrimColorClass( tags[ element_number ].name, Style_className, &hcode );
  if ( LYPreparsedSource && ( tags[ element_number ].contents || ( tags[ element_number ].flags & 16 ) ) )
  {
    if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
    {
      fprintf( TraceFP( ), "STYLE:end_element: ending non-EMPTY style\n" );
    }
    do_cstyle_flush( me );
    _internal_HTC( &me->text, hcode, 0 );
  }
  return 0;
}
int HTMLGen_put_entity( HTStructured *me, int entity_number )
{
  int eax;
  int nent = 112;
  HTMLGen_put_character( me, '&' );
  if ( entity_number < nent )
    HTMLGen_put_string( me, entities[ entity_number ] );
  HTMLGen_put_character( me, ';' );
  return 0;
}
void HTMLGen_free( HTStructured *me )
{
  me->targetClass.put_character( me->target, 10 );
  HTMLGen_flush( me );
  me->targetClass._free( me->target );
  if ( Style_className )
  {
    free( Style_className );
    Style_className = 0;
  }
  if ( me )
  {
    free( me );
    me = 0;
  }
  return;
}
void PlainToHTML_free( HTStructured *me )
{
  HTMLGen_end_element( me, ebp_20, ebp_20 );
  HTMLGen_free( me );
  return;
}
void HTMLGen_abort( HTStructured *me, HTError e )
{
  HTMLGen_free( me );
  if ( Style_className )
  {
    free( Style_className );
    Style_className = 0;
  }
  return;
}
void PlainToHTML_abort( HTStructured *me, HTError e )
{
  PlainToHTML_free( me );
  return;
}
HTStructured *HTMLGenerator( HTStream *output )
{
  HTStructured *me = malloc( ( 1 ) * sizeof( HTStructured ) );
  if ( me == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTMLGen.c", "HTMLGenerator" );
  me->isa->name[0] = HTMLGeneration.name;
  me->target = output;
  me->targetClass.name = me->target->isa;
  me->targetClass._free = me->target->target;
  me->targetClass._abort = me->target->targetClass.name;
  me->targetClass.put_character = me->target->targetClass._free;
  me->targetClass.put_string = me->target->targetClass._abort;
  me->targetClass.put_block = me->target->targetClass.put_character;
  me->write_pointer = me->buffer[0];
  flush_breaks( me );
  me->line_break[0] = me->buffer[0];
  *(int*)&me->cleanness = 0;
  me->overflowed = 0;
  me->delete_line_break_char[0] = 0;
  me->preformatted = 0;
  me->in_attrval = 0;
  if ( LYPreparsedSource == 0 )
    *(int*)&me->buffer_maxchars = 80;
  else
  if ( dump_output_width > 1 )
    me->buffer_maxchars = dump_output_width;
  else
  if ( dump_output_immediately )
    *(int*)&me->buffer_maxchars = 80;
  else
  {
    me->buffer_maxchars = ( LYcols - ( LYShowScrollbar != 0 ) ) + -1;
    if ( me->buffer_maxchars <= 37 )
      *(int*)&me->buffer_maxchars = 40;
  }
  if ( me->buffer_maxchars > 900 )
    *(int*)&me->buffer_maxchars = 78;
  if ( me->buffer_maxchars > 200 )
    *(int*)&me->buffer_maxchars = 198;
  me->escape_specials = LYPreparsedSource;
  *(int*)&me->text = 0;
  if ( Style_className )
  {
    free( Style_className );
    Style_className = 0;
  }
  class_string[0] = 0;
  return me;
}
HTStream *HTPlainToHTML( HTPresentation *pres, HTParentAnchor *anchor, HTStream *sink )
{
  HTStructured *me = malloc( ( 1 ) * sizeof( HTStructured ) );
  if ( me == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTMLGen.c", "PlainToHTML" );
  me->isa->name[0] = PlainToHTMLConversion.name;
  me->target = sink;
  me->targetClass.name = me->target->isa;
  me->targetClass._free = me->target->target;
  me->targetClass._abort = me->target->targetClass.name;
  me->targetClass.put_character = me->target->targetClass._free;
  me->targetClass.put_string = me->target->targetClass._abort;
  me->targetClass.put_block = me->target->targetClass.put_character;
  me->write_pointer = me->buffer[0];
  flush_breaks( me );
  *(int*)&me->cleanness = 0;
  me->overflowed = 0;
  me->delete_line_break_char[0] = 0;
  *(int*)&me->buffer_maxchars = 80;
  HTMLGen_put_string( me, "&lt;HTML&gt;\n&lt;BODY&gt;\n&lt;PRE&gt;\n" );
  me->preformatted = 1;
  me->escape_specials = 0;
  me->in_attrval = 0;
  return &me->isa->name[0];
}
#if 0
#endif
