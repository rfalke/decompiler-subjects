#include "SGML.c.h"
static int sgml_offset;
static char *entity_string;
HTCJKlang HTCJK;
BOOLEAN HTPassEightBitRaw;
BOOLEAN HTPassEightBitNum;
BOOLEAN HTPassHighCtrlRaw;
BOOLEAN HTPassHighCtrlNum;
static HTElement pool[10];
static int depth;
static int current_is_class;
static char replace_buf[64];
static BOOLEAN FoundEntity;
HTStreamClass SGMLParser;
static int TREAT_SJIS;
static int repair_JIS;
void fake_put_character( void *p, char c )
{
  return;
}
char *state_name( sgml_state n )
{
  char *result = "?";
  switch ( n )
  {
  case S_attr:
    result = "S_attr";
    break;
  case S_attr_gap:
    result = "S_attr_gap";
    break;
  case S_comment:
    result = "S_comment";
    break;
  case S_cro:
    result = "S_cro";
    break;
  case S_doctype:
    result = "S_doctype";
    break;
  case S_dollar:
    result = "S_dollar";
    break;
  case S_dollar_dq:
    result = "S_dollar_dq";
    break;
  case S_dollar_paren:
    result = "S_dollar_paren";
    break;
  case S_dollar_paren_dq:
    result = "S_dollar_paren_dq";
    break;
  case S_dollar_paren_sq:
    result = "S_dollar_paren_sq";
    break;
  case S_dollar_sq:
    result = "S_dollar_sq";
    break;
  case S_dquoted:
    result = "S_dquoted";
    break;
  case S_end:
    result = "S_end";
    break;
  case S_entity:
    result = "S_entity";
    break;
  case S_equals:
    result = "S_equals";
    break;
  case S_ero:
    result = "S_ero";
    break;
  case S_esc:
    result = "S_esc";
    break;
  case S_esc_dq:
    result = "S_esc_dq";
    break;
  case S_esc_sq:
    result = "S_esc_sq";
    break;
  case S_exclamation:
    result = "S_exclamation";
    break;
  case S_in_kanji:
    result = "S_in_kanji";
    break;
  case S_incro:
    result = "S_incro";
    break;
  case S_pi:
    result = "S_pi";
    break;
  case S_junk_tag:
    result = "S_junk_tag";
    break;
  case S_litteral:
    result = "S_litteral";
    break;
  case S_marked:
    result = "S_marked";
    break;
  case S_nonascii_text:
    result = "S_nonascii_text";
    break;
  case S_nonascii_text_dq:
    result = "S_nonascii_text_dq";
    break;
  case S_nonascii_text_sq:
    result = "S_nonascii_text_sq";
    break;
  case S_paren:
    result = "S_paren";
    break;
  case S_paren_dq:
    result = "S_paren_dq";
    break;
  case S_paren_sq:
    result = "S_paren_sq";
    break;
  case S_pcdata:
    result = "S_pcdata";
    break;
  case S_script:
    result = "S_script";
    break;
  case S_sgmlatt:
    result = "S_sgmlatt";
    break;
  case S_sgmlele:
    result = "S_sgmlele";
    break;
  case S_sgmlent:
    result = "S_sgmlent";
    break;
  case S_squoted:
    result = "S_squoted";
    break;
  case S_tag:
    result = "S_tag";
    break;
  case S_tag_gap:
    result = "S_tag_gap";
    break;
  case S_tagname_slash:
    result = "S_tagname_slash";
    break;
  case S_text:
    result = "S_text";
    break;
  case S_value:
    result = "S_value";
    break;
  default:
    break;
  }
  return result;
}
HTElement *pool_alloc( void )
{
  depth++;
  return &pool[ depth + -1 ];
}
void pool_free( HTElement *e )
{
  if ( depth > 10 && e )
  {
    free( e );
    e = 0;
  }
  depth += -1;
  return;
}
void HTMLSRC_apply_markup( HTStream *context, HTlexeme lexeme, BOOLEAN start )
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
      context->actions->start_element( context->target, ts->element, ts->value );
    else
      context->actions->end_element( context->target, ts->element, context->include );
    ts = &ts->next;
  }
  return;
}
void set_chartrans_handling( HTStream *context, HTParentAnchor *anchor, int chndl )
{
  if ( chndl < 0 )
  {
    chndl = HTAnchor_getUCLYhndl( anchor, 2 );
    if ( chndl < 0 )
    {
      chndl = HTAnchor_getUCLYhndl( anchor, 3 );
    }
    if ( chndl >= 0 )
      goto B10;
    else
      chndl = current_char_set;
B10:;
    HTAnchor_setUCInfoStage( anchor, chndl, 3, 1 );
    HTAnchor_setUCInfoStage( anchor, chndl, 2, 1 );
    context->outUCI = HTAnchor_getUCInfoStage( anchor, 2 );
    context->outUCLYhndl = HTAnchor_getUCLYhndl( &context->node_anchor, 2 );
  }
  UCSetTransParams( &context->T, context->inUCLYhndl, &context->inUCI, context->outUCLYhndl, &context->outUCI );
  if ( context->T.transp )
  {
    context->current_tag_charset = context->inUCLYhndl;
  }
  else
  if ( context->T.decode_utf8 )
  {
    context->current_tag_charset = context->inUCLYhndl;
  }
  else
  if ( context->T.do_8bitraw || context->T.use_raw_char_in )
  {
    context->current_tag_charset = context->inUCLYhndl;
  }
  else
  if ( context->T.output_utf8 || context->T.trans_from_uni )
  {
    context->current_tag_charset = UCGetLYhndl_byMIME( "utf-8" );
  }
  else
  {
    context->current_tag_charset = LATIN1;
  }
  return;
}
void change_chartrans_handling( HTStream *context )
{
  int new_LYhndl = HTAnchor_getUCLYhndl( &context->node_anchor, 1 );
  if ( context->inUCLYhndl != new_LYhndl && new_LYhndl >= 0 )
  {
    LYUCcharset *new_UCI = HTAnchor_getUCInfoStage( &context->node_anchor, 1 );
    if ( new_UCI )
    {
      LYUCcharset *next_UCI = HTAnchor_getUCInfoStage( &context->node_anchor, 2 );
      int next_LYhndl = HTAnchor_getUCLYhndl( &context->node_anchor, 2 );
      context->inUCI = new_UCI;
      context->inUCLYhndl = new_LYhndl;
      context->outUCI = next_UCI;
      context->outUCLYhndl = next_LYhndl;
      set_chartrans_handling( context, &context->node_anchor, next_LYhndl );
    }
  }
  return;
}
void handle_attribute_name( HTStream *context, char *s )
{
  HTTag *tag = &context->current_tag;
  attr *attributes = &tag->attributes;
  int high, low, i, diff;
  if ( psrc_view )
  {
    context->cur_attr_is_href = 0;
    context->cur_attr_is_name = 0;
  }
  if ( context->unknown_tag == tag )
  {
    if ( psrc_view )
    {
      *(int*)&context->current_attribute_number = 1;
    }
  }
  else
  {
    low = 0;
    high = tag->number_of_attributes;
    while ( low < high )
    {
      i = low + ( ( high - low ) / 2 );
      diff = attributes[ i ].name[0] == s[0] ? toupper( s[0] ) : attributes[ i ].name[0] - s[0];
      if ( diff )
      {
        if ( diff < 0 )
        {
          low = i + 1;
        }
        else
        {
          high = i;
        }
      }
      else
      {
        context->current_attribute_number = i;
        if ( psrc_view )
        {
          context->cur_attr_is_name = attributes[ i ].type == 1;
          context->cur_attr_is_href = attributes[ i ].type == 2;
          break;
        }
        else
        {
          context->present[ i ] = 1;
          if ( context->isa )
            context->isa->name[0] = 0;
          current_is_class = attributes[ i ].type == 4;
          if ( WWW_TraceFlag == 0 )
            break;
          fprintf( TraceFP( ), "SGML: found attribute %s, %d\n", s, current_is_class );
          break;
        }
      }
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "SGML: Unknown attribute %s for tag %s\n", s, "" );
    }
    *(int*)&context->current_attribute_number = -1;
  }
  return;
}
void handle_attribute_value( HTStream *context, char *s )
{
  if ( context->current_attribute_number != -1 )
  {
    HTSACopy_extra( &context->value[ context->current_attribute_number ], s );
    if ( current_is_class )
    {
      strncpy( class_string, s, 256 );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "SGML: class is '%s'\n", s );
      }
    }
    else
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "SGML: attribute value is '%s'\n", s );
    }
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "SGML: Attribute value %s ***ignored\n", s );
  }
  *(int*)&context->current_attribute_number = -1;
  return;
}
BOOLEAN put_special_unicodes( HTStream *context, UCode_t code )
{
  if ( context->no_lynx_specialcodes )
  {
  }
  else
  {
    if ( code == 160 )
    {
      if ( psrc_view == 0 )
        context->actions->put_character( context->target, 1, ebp_1 );
    }
    else
    if ( code == 173 )
    {
      if ( psrc_view == 0 )
        context->actions->put_character( context->target, 7 );
    }
    else
    if ( code == 8194 || code == 8201 )
    {
      if ( psrc_view == 0 )
        context->actions->put_character( context->target, 2 );
    }
    else
    if ( code == 8195 )
    {
      if ( psrc_view == 0 )
        context->actions->put_character( context->target, 2 );
    }
    else
    {
    }
  }
  return 1;
}
void put_pretty_entity( HTStream *context, int term )
{
  HTMLSRC_apply_markup( context, ebp_20, ebp_20 );
  context->actions->put_character( context->target, 38 );
  context->actions->put_string( context->target, entity_string );
  if ( term )
    context->actions->put_character( context->target, term );
  HTMLSRC_apply_markup( context, 5, 0 );
  return;
}
void put_pretty_number( HTStream *context )
{
  HTMLSRC_apply_markup( context, ebp_20, ebp_20 );
  ebp( context->target, "&#", "&#", "&#" );
  context->actions->put_string( context->target, entity_string );
  context->actions->put_character( context->target, 59 );
  HTMLSRC_apply_markup( context, 5, 0 );
  return;
}
void handle_entity( HTStream *context, char term )
{
  UCode_t code;
  long uck = -1;
  char *s = &context->string->data;
  FoundEntity = 0;
  code = HTMLGetEntityUCValue( s );
  if ( code )
  {
    if ( put_special_unicodes( context, code ) & 255 )
    {
      if ( psrc_view )
        put_pretty_entity( context, term );
      FoundEntity = 1;
      return;
    }
    else
    {
      uck = UCTransUniChar( code, context->outUCLYhndl );
      switch ( uck )
      {
      case 127:
      case 128:
      case 129:
      case 130:
      case 131:
      case 132:
      case 133:
      case 134:
      case 135:
      case 136:
      case 137:
      case 138:
      case 139:
      case 140:
      case 141:
      case 142:
      case 143:
      case 144:
      case 145:
      case 146:
      case 147:
      case 148:
      case 149:
      case 150:
      case 151:
      case 152:
      case 153:
      case 154:
      case 155:
      case 156:
      case 157:
      case 158:
      case 159:
      case 160:
      case 161:
      case 162:
      case 163:
      case 164:
      case 165:
      case 166:
      case 167:
      case 168:
      case 169:
      case 170:
      case 171:
      case 172:
      case 173:
      case 174:
      case 175:
      case 176:
      case 177:
      case 178:
      case 179:
      case 180:
      case 181:
      case 182:
      case 183:
      case 184:
      case 185:
      case 186:
      case 187:
      case 188:
      case 189:
      case 190:
      case 191:
      case 192:
      case 193:
      case 194:
      case 195:
      case 196:
      case 197:
      case 198:
      case 199:
      case 200:
      case 201:
      case 202:
      case 203:
      case 204:
      case 205:
      case 206:
      case 207:
      case 208:
      case 209:
      case 210:
      case 211:
      case 212:
      case 213:
      case 214:
      case 215:
      case 216:
      case 217:
      case 218:
      case 219:
      case 220:
      case 221:
      case 222:
      case 223:
      case 224:
      case 225:
      case 226:
      case 227:
      case 228:
      case 229:
      case 230:
      case 231:
      case 232:
      case 233:
      case 234:
      case 235:
      case 236:
      case 237:
      case 238:
      case 239:
      case 240:
      case 241:
      case 242:
      case 243:
      case 244:
      case 245:
      case 246:
      case 247:
      case 248:
      case 249:
      case 250:
      case 251:
      case 252:
      case 253:
      case 254:
      case 255:
        if ( LYlowest_eightbit[ context->outUCLYhndl ] <= uck )
        else
        {
          if ( uck == -4 || ( context->T.repl_translated_C0 && uck > 0 && uck <= 31 ) )
          {
            uck = ~UCTransUniCharStr( replace_buf, 60, code, context->outUCLYhndl, 0 ) >> 31;
            if ( uck )
            {
              if ( psrc_view )
                put_pretty_entity( context, term );
              else
                context->actions->put_string( context->target, replace_buf[0] );
              FoundEntity = 1;
            }
          }
          if ( context->T.output_utf8 && ( ( psrc_view ? UCPutUtf8_charstring( &context->target[0], &fake_put_character, code ) : UCPutUtf8_charstring( &context->target[0], &context->actions->put_character, code ) ) & 255 ) != 0 )
          {
            if ( psrc_view )
              put_pretty_entity( context, term );
            FoundEntity = 1;
          }
          else
          {
            if ( code > 31 && code <= 126 )
            {
              if ( psrc_view )
                put_pretty_entity( context, term );
              else
                context->actions->put_character( context->target, code );
              FoundEntity = 1;
            }
            else
            {
              if ( strcmp( s, "zwnj" ) == 0 || strcmp( s, "zwj" ) == 0 )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "handle_entity: Ignoring '%s'.\n", s );
                }
                if ( psrc_view )
                  put_pretty_entity( context, term );
                FoundEntity = 1;
              }
              else
              {
                if ( strcmp( s, "lrm" ) == 0 || strcmp( s, "rlm" ) == 0 )
                {
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "handle_entity: Ignoring '%s'.\n", s );
                  }
                  if ( psrc_view )
                    put_pretty_entity( context, term );
                  FoundEntity = 1;
                }
              }
            }
          }
        }
      case 32:
      case 33:
      case 34:
      case 35:
      case 36:
      case 37:
      case 38:
      case 39:
      case 40:
      case 41:
      case 42:
      case 43:
      case 44:
      case 45:
      case 46:
      case 47:
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
      case 63:
      case 64:
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
      case 72:
      case 73:
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
      case 80:
      case 81:
      case 82:
      case 83:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
      case 91:
      case 92:
      case 93:
      case 94:
      case 95:
      case 96:
      case 97:
      case 98:
      case 99:
      case 100:
      case 101:
      case 102:
      case 103:
      case 104:
      case 105:
      case 106:
      case 107:
      case 108:
      case 109:
      case 110:
      case 111:
      case 112:
      case 113:
      case 114:
      case 115:
      case 116:
      case 117:
      case 118:
      case 119:
      case 120:
      case 121:
      case 122:
      case 123:
      case 124:
      case 125:
      case 126:
        if ( psrc_view )
          put_pretty_entity( context, term );
        else
          context->actions->put_character( context->target, uck );
        FoundEntity = 1;
        break;
      default:
        break;
      }
      return;
    }
  }
  if ( psrc_view )
    HTMLSRC_apply_markup( context, 8, 1 );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "SGML: Unknown entity '%s' %ld %ld\n", s, code, uck );
  }
  context->actions->put_character( context->target, 38 );
  context->actions->put_string( context->target, s );
  if ( term )
    context->actions->put_character( context->target, term );
  if ( psrc_view )
  {
    HTMLSRC_apply_markup( context, 8, 0 );
  }
  return;
}
void handle_comment( HTStream *context )
{
  char *s = &context->string->data;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "SGML Comment:\n&lt;%s&gt;\n", s );
  }
  if ( context->csi == 0 && strncmp( s, "!--#", 4 ) == 0 && LYCheckForCSI( &context->node_anchor, &context->url ) == 1 )
  {
    LYDoCSI( &context->url, s, &context->csi );
  }
  else
  {
    LYCommentHacks( &context->node_anchor, &context->string->data );
  }
  return;
}
void handle_identifier( HTStream *context )
{
  char *s = &context->string->data;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "SGML Identifier:\n&lt;%s&gt;\n", s );
  }
  return;
}
void handle_doctype( HTStream *context )
{
  char *s = &context->string->data;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "SGML Doctype:\n&lt;%s&gt;\n", s );
  }
  if ( strstr( s, "DTD XHTML " ) )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "...processing extended HTML\n" );
    }
    context->extended_html = 1;
  }
  return;
}
void handle_marked( HTStream *context )
{
  char *s = &context->string->data;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "SGML Marked Section:\n&lt;%s&gt;\n", s );
  }
  if ( strncmp( &context->string->data, "![INCLUDE[", 10 ) == 0 )
  {
    context->string->data[ context->string->size + -3 ] = 0;
    HTSACat( &context->include, &context->string->data[10] );
  }
  else
  {
    if ( strncmp( &context->string->data, "![CDATA[", 8 ) == 0 )
    {
      context->actions->put_block( context->target, context->string->data[8], context->string->size + -11 );
    }
  }
  return;
}
void handle_processing_instruction( HTStream *context )
{
  char *s = &context->string->data;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "SGML Processing instruction:\n&lt;%s&gt;\n", s );
  }
  if ( strncmp( s, "?xml ", 5 ) == 0 )
  {
    int flag = context->T.decode_utf8;
    context->strict_xml = 1;
    if ( flag == 0 )
    {
      char *t = strstr( s, "encoding=" );
      if ( t )
      {
        t += 9;
        if ( t[0] == '"' )
          t++;
        flag = strncmp( t, "utf-8", 5 ) == 0;
      }
      if ( flag == 0 )
      {
        return;
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "...Use UTF-8 for XML\n" );
      }
      context->T.decode_utf8 = 1;
    }
  }
  return;
}
void handle_sgmlent( HTStream *context )
{
  char *s = &context->string->data;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "SGML Entity Declaration:\n&lt;%s&gt;\n", s );
  }
  return;
}
void handle_sgmlele( HTStream *context )
{
  char *s = &context->string->data;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "SGML Element Declaration:\n&lt;%s&gt;\n", s );
  }
  return;
}
void handle_sgmlatt( HTStream *context )
{
  char *s = &context->string->data;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "SGML Attribute Declaration:\n&lt;%s&gt;\n", s );
  }
  return;
}
BOOLEAN element_valid_within( HTTag *new_tag, HTTag *stacked_tag, BOOLEAN direct )
{
  TagClass usecontains;
  TagClass usecontained;
  if ( stacked_tag == 0 || new_tag == 0 )
  {
  }
  usecontains = stacked_tag->icontains;
  usecontained = new_tag->icontained;
  if ( stacked_tag == new_tag )
  {
  }
  else
  {
  }
  return 0;
}
canclose_t can_close( HTTag *new_tag, HTTag *stacked_tag )
{
  if ( stacked_tag == 0 )
  {
    return 0;
  }
  if ( stacked_tag->flags & 1 )
  {
    return 2;
  }
  if ( stacked_tag == new_tag )
  {
    return ( new_tag->canclose & 0x80000 ) != 0;
  }
  return ( new_tag->canclose & stacked_tag->tagclass ) != 0;
}
void do_close_stacked( HTStream *context )
{
  HTElement *stacked = &context->element_stack;
  HTMLElement e;
  if ( stacked )
  {
    if ( context->inSELECT && strcasecomp( &stacked->tag->name[0], "SELECT" ) == 0 )
      context->inSELECT = 0;
    e = stacked->tag - context->dtd->tags->name[0] <= 6607 ? ( ( stacked->tag - context->dtd->tags->name[0] ) >> 3 ) * -1227133513 : HTML_OBJECT;
    if ( psrc_view == 0 )
      context->actions->end_element( context->target, e, context->include, ebp_28 );
    context->element_stack = stacked->next;
    pool_free( stacked );
    context->no_lynx_specialcodes = 0;
  }
  return;
}
int is_on_stack( HTStream *context, HTTag *old_tag )
{
  HTElement *stacked = &context->element_stack;
  int i = 1;
  for ( ; stacked; i++ )
  {
    if ( stacked->tag == old_tag || stacked->tag == context->dtd->tags->name[0] + 6608 )
    {
      return i;
    }
    stacked = &stacked->next;
    // i++;
  }
  return 0;
}
void end_element( HTStream *context, HTTag *old_tag )
{
  BOOLEAN extra_action_taken = 0;
  canclose_t canclose_check = close_valid;
  int stackpos = is_on_stack( context, old_tag );
  if ( Old_DTD == 0 )
  {
    while ( canclose_check && context->element_stack && ( stackpos > 1 || ( extra_action_taken == 0 && stackpos == 0 ) ) )
    {
      if ( stackpos == 0 && ( old_tag->flags & 2 ) && ( element_valid_within( old_tag, &context->element_stack->tag, 1 ) & 255 ) )
      {
        if ( WWW_TraceFlag == 0 )
          break;
        fprintf( TraceFP( ), "SGML: &lt;/%s&gt; ignored\n", &old_tag->name[0] );
        break;
      }
      else
      {
        canclose_check = can_close( old_tag, &context->element_stack->tag );
        if ( canclose_check )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "SGML: End &lt;/%s&gt; \t&lt;- %s end &lt;/%s&gt;\n", &context->element_stack->tag->name[0], canclose_check == close_valid ? "supplied," : "***forced by", &old_tag->name[0] );
          }
          do_close_stacked( context );
          extra_action_taken = 1;
          stackpos = is_on_stack( context, old_tag );
        }
      }
    }
    if ( stackpos == 0 && old_tag->contents )
    {
      if ( WWW_TraceFlag == 0 )
      {
        return;
      }
      fprintf( TraceFP( ), "SGML: Still open %s, ***no open %s for &lt;/%s&gt;\n", "none", &old_tag->name[0], &old_tag->name[0] );
      return;
    }
    else
    if ( stackpos > 1 )
    {
      if ( WWW_TraceFlag == 0 )
      {
        return;
      }
      fprintf( TraceFP( ), "SGML: Nesting &lt;%s&gt;...&lt;%s&gt; \t&lt;- ***invalid end &lt;/%s&gt;\n", &old_tag->name[0], &context->element_stack->tag->name[0], &old_tag->name[0] );
      return;
    }
  }
  if ( context->inSELECT )
  {
    if ( strcasecomp( &old_tag->name[0], "SELECT" ) == 0 )
      context->inSELECT = 0;
    else
    {
      if ( WWW_TraceFlag == 0 )
      {
        return;
      }
      fprintf( TraceFP( ), "SGML: ***Ignoring end tag &lt;/%s&gt; in SELECT block.\n", &old_tag->name[0] );
      return;
    }
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "SGML: End &lt;/%s&gt;\n", &old_tag->name[0] );
  }
  if ( old_tag->contents == 0 )
  {
    if ( WWW_TraceFlag == 0 )
    {
      return;
    }
    fprintf( TraceFP( ), "SGML: ***Illegal end tag &lt;/%s&gt; found.\n", &old_tag->name[0] );
    return;
  }
  else
  {
    if ( context->element_stack )
    {
      int status = 0;
      HTMLElement e;
      HTElement *N = &context->element_stack;
      HTTag *t = &N->tag;
      if ( t != old_tag )
      {
        if ( context->element_stack->next )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "SGML: Found &lt;/%s&gt; when expecting &lt;/%s&gt;. &lt;/%s&gt; ***assumed.\n", &old_tag->name[0], &t->name[0], &t->name[0] );
          }
        }
        else
        if ( WWW_TraceFlag == 0 )
        {
          return;
        }
        fprintf( TraceFP( ), "SGML: Found &lt;/%s&gt; when expecting &lt;/%s&gt;. &lt;/%s&gt; ***Ignored.\n", &old_tag->name[0], &t->name[0], &old_tag->name[0] );
        return;
      }
      e = t - context->dtd->tags->name[0] <= 6607 ? ( ( t - context->dtd->tags->name[0] ) >> 3 ) * -1227133513 : HTML_OBJECT;
      if ( WWW_TraceFlag && ( ( ( WWW_TraceMask & 1 ) ^ 1 ) & 255 ) == 0 )
      {
        fprintf( TraceFP( ), "tagnum(%p) = %d\n", t, e );
      }
      if ( psrc_view == 0 )
      {
        context->actions->end_element( context->target, e, context->include );
        status = context->target;
      }
      if ( status == 700 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "SGML: Restart &lt;%s&gt;\n", &t->name[0] );
        }
        context->actions->start_element( context->target, (long long)( e ), 0 );
      }
      else
      {
        if ( status == 701 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "SGML: Continue with other content model for &lt;%s&gt;\n", &t->name[0] );
          }
          context->element_stack->tag = context->dtd->tags->name[0] + 6608;
        }
        else
        {
          context->element_stack = N->next;
          pool_free( N );
        }
      }
      context->no_lynx_specialcodes = 0;
      return;
    }
    else
    {
      if ( WWW_TraceFlag == 0 )
      {
        return;
      }
      fprintf( TraceFP( ), "SGML: Extra end tag &lt;/%s&gt; found and ignored.\n", &old_tag->name[0] );
      return;
    }
  }
}
void start_element( HTStream *context )
{
  int status;
  HTTag *new_tag = &context->current_tag;
  HTMLElement e = ( ( new_tag - context->dtd->tags->name[0] ) >> 3 ) * -1227133513;
  BOOLEAN ok = 0;
  BOOLEAN valid = 1;
  BOOLEAN direct_container = 1;
  BOOLEAN extra_action_taken = 0;
  canclose_t canclose_check = close_valid;
  if ( Old_DTD == 0 )
  {
    while ( context->element_stack && ( canclose_check == close_valid || ( canclose_check == close_error && context->element_stack->tag == new_tag ) ) )
    {
      valid = element_valid_within( new_tag, &context->element_stack->tag, direct_container );
      if ( valid == 0 )
      {
        canclose_check = can_close( new_tag, &context->element_stack->tag );
        if ( canclose_check )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "SGML: End &lt;/%s&gt; \t&lt;- %s start &lt;%s&gt;\n", &context->element_stack->tag->name[0], canclose_check == close_valid ? "supplied," : "***forced by", &new_tag->name[0] );
          }
          do_close_stacked( context );
          extra_action_taken = 1;
          if ( canclose_check == close_error )
          {
            direct_container = 0;
          }
        }
        else
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "SGML: Still open %s \t&lt;- ***invalid start &lt;%s&gt;\n", &context->element_stack->tag->name[0], &new_tag->name[0] );
        }
      }
    }
    if ( context->element_stack && valid == 0 && ( context->element_stack->tag->flags & 8 ) )
    {
      valid = element_valid_within( new_tag, &context->element_stack->tag, direct_container );
      if ( valid == 0 )
      {
        if ( WWW_TraceFlag == 0 )
        {
          return;
        }
        fprintf( TraceFP( ), "SGML: Still open %s \t&lt;- ***ignoring start &lt;%s&gt;\n", &context->element_stack->tag->name[0], &new_tag->name[0] );
        return;
      }
    }
    if ( context->element_stack && extra_action_taken == 0 && canclose_check == close_NO && valid == 0 && ( new_tag->flags & 4 ) )
    {
      BOOLEAN has_attributes = 0;
      int i = 0;
      for ( ; i < new_tag->number_of_attributes && has_attributes == 0; i++ )
      {
        has_attributes = context->present[ i ];
        // i++;
      }
      if ( has_attributes == 0 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "SGML: Still open %s, ***converting invalid &lt;%s&gt; to &lt;/%s&gt;\n", &context->element_stack->tag->name[0], &new_tag->name[0], &new_tag->name[0] );
        }
        end_element( context, new_tag );
        return;
      }
    }
    if ( context->element_stack && canclose_check == close_error )
    {
      valid = element_valid_within( new_tag, &context->element_stack->tag, direct_container );
      if ( valid == 0 && WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "SGML: Still open %s \t&lt;- ***invalid start &lt;%s&gt;\n", &context->element_stack->tag->name[0], &new_tag->name[0] );
      }
    }
  }
  if ( context->inSELECT == 0 )
  {
    if ( new_tag->name == 83 ? toupper( 83 ) == 0 : new_tag->name == 83 )
      context->inSELECT = 1;
  }
  else
  {
    if ( strcasecomp( &new_tag->name[0], "OPTION" ) )
    {
      switch ( e )
      {
      case HTML_ISINDEX:
      case HTML_KBD:
      case HTML_KEYGEN:
      case HTML_LABEL:
      case HTML_LEGEND:
      case HTML_LH:
      case HTML_LI:
      case HTML_LINK:
      case HTML_LISTING:
      case HTML_MAP:
      case HTML_MARQUEE:
      case HTML_MATH:
      case HTML_MENU:
      case HTML_META:
      case HTML_NEXTID:
      case HTML_NOFRAMES:
      case HTML_NOTE:
      case HTML_OBJECT:
      case HTML_OL:
      case HTML_OPTION:
      case HTML_OVERLAY:
      case HTML_P:
      case HTML_PARAM:
      case HTML_PLAINTEXT:
      case HTML_PRE:
      case HTML_Q:
      case HTML_S:
      case HTML_SAMP:
      case HTML_SCRIPT:
        if ( e + -65 <= 1 )
        else
        if ( ok )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "SGML: ***Faking SELECT end tag before &lt;%s&gt; start tag.\n", &new_tag->name[0] );
          }
          end_element( context, SGMLFindTag( &context->dtd, "SELECT" ) );
        }
        else
        if ( WWW_TraceFlag == 0 )
        {
          return;
        }
        fprintf( TraceFP( ), "SGML: ***Ignoring start tag &lt;%s&gt; in SELECT block.\n", &new_tag->name[0] );
        return;
      case HTML_BUTTON:
      case HTML_FIELDSET:
      case HTML_FORM:
      case HTML_INPUT:
      case HTML_SELECT:
      case HTML_TEXTAREA:
        ok = 1;
        break;
      default:
        break;
      }
    }
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "SGML: Start &lt;%s&gt;\n", &new_tag->name[0] );
  }
  context->actions->start_element( context->target, ( ( new_tag - context->dtd->tags->name[0] ) >> 3 ) * -1227133513, context->present[0], context->value[0] );
  status = context->target;
  if ( status == 701 )
  {
    new_tag = context->dtd->tags->name[0] + 6608;
  }
  if ( new_tag->contents )
  {
    HTElement *N = pool_alloc( );
    if ( N == 0 )
      outofmem( "../../../WWW/Library/Implementation/SGML.c", "start_element" );
    N->next = context->element_stack;
    N->tag = new_tag;
    context->element_stack = N;
    context->no_lynx_specialcodes = new_tag->flags & 64;
    return;
  }
  else
  {
    if ( e == HTML_META )
    {
      change_chartrans_handling( context );
    }
    return;
  }
}
HTTag *SGMLFindTag( SGML_dtd *dtd, char *s )
{
  static HTTag *last[64];
  int high, low, i, diff;
  HTTag **res = &last[ s[0] & 63 ];
  if ( res[0] )
  {
    if ( res[0] == 0 )
    {
      return 0;
    }
    if ( strcasecomp( (char*)res[0], s ) == 0 )
    {
      return res[0];
    }
  }
  low = 0;
  high = dtd->number_of_tags;
  while ( low < high )
  {
    i = low + ( ( high - low ) / 2 );
    diff = dtd->tags->name[0] == s[0] ? toupper( s[0] ) : dtd->tags->name[0] - s[0];
    if ( diff == 0 )
    {
      res[0] = dtd->tags->name[0] + ( i * 56 );
      return res[0];
    }
    if ( diff < 0 )
    {
      low = i + 1;
    }
    else
    {
      high = i;
    }
  }
  if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 1024 )
  {
    return &HTTag_unrecognized;
  }
  return 0;
}
void SGML_free( HTStream *context )
{
  int i;
  HTElement *cur;
  HTTag *t;
  if ( context->recover )
  {
    free( &context->recover );
    *(int*)&context->recover = 0;
  }
  if ( context->url )
  {
    free( &context->url );
    *(int*)&context->url = 0;
  }
  if ( context->csi )
  {
    free( &context->csi );
    *(int*)&context->csi = 0;
  }
  if ( context->include )
  {
    free( &context->include );
    *(int*)&context->include = 0;
  }
  if ( context->active_include )
  {
    free( &context->active_include );
    *(int*)&context->active_include = 0;
  }
  while ( context->element_stack )
  {
    cur = &context->element_stack;
    t = &cur->tag;
    context->element_stack = cur->next;
    pool_free( cur );
    if ( psrc_view == 0 )
    {
      ebp( context->target, t - context->dtd->tags->name[0] <= 6607 ? ( ( t - context->dtd->tags->name[0] ) >> 3 ) * -1227133513 : 79, context->include, t - context->dtd->tags->name[0] <= 6607 ? ( ( t - context->dtd->tags->name[0] ) >> 3 ) * -1227133513 : 79 );
    }
    if ( context->include )
    {
      free( &context->include );
      *(int*)&context->include = 0;
    }
  }
  context->actions->_free( context->target );
  HTChunkFree( &context->string );
  i = 0;
  for ( ; i <= 35; i++ )
  {
    if ( context->isa )
    {
      HTSAFree_extra( (char*)context->isa );
      context->isa = 0;
    }
    // i++;
  }
  if ( context )
  {
    free( context );
    context = 0;
  }
  sgml_in_psrc_was_initialized = 0;
  return;
}
void SGML_abort( HTStream *context, HTError e )
{
  int i;
  HTElement *cur;
  context->actions->_abort( context->target, e );
  if ( context->recover )
  {
    free( &context->recover );
    *(int*)&context->recover = 0;
  }
  if ( context->include )
  {
    free( &context->include );
    *(int*)&context->include = 0;
  }
  if ( context->active_include )
  {
    free( &context->active_include );
    *(int*)&context->active_include = 0;
  }
  if ( context->url )
  {
    free( &context->url );
    *(int*)&context->url = 0;
  }
  if ( context->csi )
  {
    free( &context->csi );
    *(int*)&context->csi = 0;
  }
  while ( context->element_stack )
  {
    cur = &context->element_stack;
    context->element_stack = cur->next;
    pool_free( cur );
  }
  HTChunkFree( &context->string );
  i = 0;
  for ( ; i <= 35; i++ )
  {
    if ( context->isa )
    {
      HTSAFree_extra( (char*)context->isa );
      context->isa = 0;
    }
    // i++;
  }
  if ( context )
  {
    free( context );
    context = 0;
  }
  sgml_in_psrc_was_initialized = 0;
  return;
}
void transform_tag( HTStream *context, HTChunk *string )
{
  if ( !context->strict_xml && tagname_transform != 1 )
  {
    if ( tagname_transform == 0 )
    {
      LYLowerCase( &string->data );
    }
    else
    {
      LYUpperCase( &string->data );
    }
  }
  return;
}
BOOLEAN ignore_when_empty( HTTag *tag )
{
  BOOLEAN result = 0;
  if ( !LYPreparsedSource && LYxhtml_parsing && tag->name[0] && !( tag->flags & 4 ) && tag->contents && tag->tagclass != 256 && ( tag->tagclass == 64 || ( tag->contains && tag->icontains ) ) )
    result = 1;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "SGML Do%s ignore_when_empty:%s\n", " not", "" );
  }
  return result;
}
void discard_empty( HTStream *context )
{
  static HTTag empty_tag;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "SGML discarding empty %s\n", "" );
  }
  if ( WWW_TraceFlag )
  {
    fflush( TraceFP( ) );
  }
  memset( empty_tag.name, 0, 56 );
  context->current_tag = empty_tag.name;
  context->string->size = 0;
  return;
}
BOOLEAN end_if_prettysrc( HTStream *context, HTChunk *string, char end_ch )
{
  BOOLEAN result = psrc_view;
  if ( psrc_view )
  {
    if ( context->cur_attr_is_name )
    {
      HTStartAnchor( &context->target, &string->data, 0 );
      context->actions->end_element( (long long)( context->target ), context->include );
    }
    else
    if ( context->cur_attr_is_href )
    {
      HTMLSRC_apply_markup( context, 6, 1 );
      HTStartAnchor( &context->target, 0, &string->data );
    }
    psrc_convert_string = 1;
    context->actions->put_string( context->target, string->data );
    if ( context->cur_attr_is_href )
    {
      context->actions->end_element( (long long)( context->target ), context->include );
      HTMLSRC_apply_markup( context, 6, 0 );
    }
    if ( end_ch )
      context->actions->put_character( context->target, end_ch );
    HTMLSRC_apply_markup( context, 3, 0 );
  }
  return result;
}
void SGML_character( HTStream *context, char c_in )
{
  int ah;
  int ch;
#error unstructured control flow
}
void SGML_string( HTStream *context, char *str )
{
  char *p = str;
  for ( ; p[0]; p++ )
  {
    SGML_character( context, p[0] );
    // p++;
  }
  return;
}
void SGML_write( HTStream *context, char *str, int l )
{
  char *p;
  char *e = &str[ l ];
  p = str;
  for ( ; p < e; p++ )
  {
    SGML_character( context, p[0] );
    // p++;
  }
  return;
}
HTStream *SGML_new( SGML_dtd *dtd, HTParentAnchor *anchor, HTStructured *target )
{
  HTStream *context = calloc( 1, sizeof( HTStream ) );
  if ( context == 0 )
    outofmem( "../../../WWW/Library/Implementation/SGML.c", "SGML_begin" );
  context->isa->name[0] = SGMLParser.name;
  context->string = HTChunkCreate( 128 );
  context->dtd = dtd;
  context->target = target;
  context->actions = target;
  context->unknown_tag = HTTag_unrecognized.name;
  *(int*)&context->slashedtag = 0;
  context->current_tag = context->slashedtag;
  *(int*)&context->state = 0;
  context->node_anchor = anchor;
  context->utf_buf_p = context->utf_buf[0];
  UCTransParams_clear( &context->T );
  context->inUCLYhndl = HTAnchor_getUCLYhndl( anchor, 1 );
  if ( context->inUCLYhndl < 0 )
  {
    HTAnchor_copyUCInfoStage( anchor, 1, 0, -1 );
    context->inUCLYhndl = HTAnchor_getUCLYhndl( anchor, 1 );
  }
  context->inUCI = HTAnchor_getUCInfoStage( anchor, 1 );
  set_chartrans_handling( context, anchor, -1 );
  *(int*)&context->recover = 0;
  *(int*)&context->recover_index = 0;
  *(int*)&context->include = 0;
  *(int*)&context->active_include = 0;
  *(int*)&context->include_index = 0;
  *(int*)&context->url = 0;
  *(int*)&context->csi = 0;
  *(int*)&context->csi_index = 0;
  if ( psrc_view )
  {
    psrc_view = 0;
    mark_htext_as_source = 1;
    SGML_string( context, "&lt;HTML&gt;&lt;HEAD&gt;&lt;TITLE&gt;source&lt;/TITLE&gt;&lt;/HEAD&gt;&lt;BODY&gt;&lt;PRE&gt;" );
    psrc_view = 1;
    psrc_convert_string = 0;
    sgml_in_psrc_was_initialized = 1;
  }
  sgml_offset = 0;
  return context;
}
int SGML_offset( void )
{
  return sgml_offset + psrc_view;
}
void JISx0201TO0208_EUC( unsigned char IHI, unsigned char ILO, unsigned char *OHI, unsigned char *OLO )
{
  static char *table[63] = { "。", "「", "」", "、", "・", "ヲ", "ァ", "ィ", "ゥ", "ェ", "ォ", "ャ", "ュ", "ョ", "ッ", "ー", "ア", "イ", "ウ", "エ", "オ", "カ", "キ", "ク", "ケ", "コ", "サ", "シ", "ス", "セ", "ソ", "タ", "チ", "ツ", "テ", "ト", "ナ", "ニ", "ヌ", "ネ", "ノ", "ハ", "ヒ", "フ", "ヘ", "ホ", "マ", "ミ", "ム", "メ", "モ", "ヤ", "ユ", "ヨ", "ラ", "リ", "ル", "レ", "ロ", "ワ", "ン", "゛", "゜" };
  if ( IHI == -114 && ILO < -96 && -33 <= ILO )
  {
    OHI[0] = table[ ILO + -161 ][0];
    OLO[0] = table[ ILO + -161 ][1];
  }
  else
  {
    OHI[0] = IHI;
    OLO[0] = ILO;
  }
  return;
}
int IS_SJIS_STR( unsigned char *str )
{
  unsigned char *s;
  unsigned char ch;
  int is_sjis = 0;
  s = str;
  do
  {
    ch = s[0];
    s++;
    if ( ( ( ch != 0 ) & 255 ) == 0 )
    {
      return 0;
    }
    if ( ch >= 0 )
      continue;
    else
    {
      if ( '?' <= s[0] || s[0] == 127 || s[0] < -4 )
      {
      }
      else
      {
        if ( -128 <= ch || ch < -97 )
        {
        }
        else
          is_sjis = 1;
      }
    }
  }
  while ( 0 );
  return 1;
}
unsigned char *SJIS_TO_JIS1( unsigned char HI, unsigned char LO, unsigned char *JCODE )
{
  HI -= -97 <= HI ? 113 : 177;
  HI = ( HI * 2 ) + 1;
  if ( LO < 0 )
    LO += -1;
  if ( LO < -99 )
  {
    LO += -125;
    HI++;
  }
  else
  {
    LO += -31;
  }
  JCODE[0] = HI;
  JCODE[1] = LO;
  return JCODE;
}
unsigned char *JIS_TO_SJIS1( unsigned char HI, unsigned char LO, unsigned char *SJCODE )
{
  if ( HI & 1 )
    LO += 31;
  else
    LO += 125;
  if ( LO < '~' )
    LO++;
  HI = -127 + ( ( HI + -33 ) >> 1 );
  if ( HI < -97 )
  {
    HI += 64;
  }
  SJCODE[0] = HI;
  SJCODE[1] = LO;
  return SJCODE;
}
unsigned char *EUC_TO_SJIS1( unsigned char HI, unsigned char LO, unsigned char *SJCODE )
{
  if ( HI == -114 )
    JISx0201TO0208_EUC( HI, LO, &HI, &LO );
  JIS_TO_SJIS1( HI & 127, LO & 127, SJCODE );
  return SJCODE;
}
void JISx0201TO0208_SJIS( unsigned char I, unsigned char *OHI, unsigned char *OLO )
{
  unsigned char SJCODE[2];
  JISx0201TO0208_EUC( 142, ebp_8, ebp_12, ebp_16 );
  I = OLO[0];
  I = OHI[0];
  I = SJCODE[0];
  JIS_TO_SJIS1( I & 127, I & 127, SJCODE );
  I = SJCODE[0];
  OHI[0] = SJCODE[0];
  I = SJCODE[1];
  OLO[0] = SJCODE[1];
  return;
}
unsigned char *SJIS_TO_EUC1( unsigned char HI, unsigned char LO, unsigned char *data )
{
  SJIS_TO_JIS1( HI, LO, data );
  data[0] = data[0] | -128;
  data[1] = data[1] | -128;
  return data;
}
unsigned char *SJIS_TO_EUC( unsigned char *src, unsigned char *dst )
{
  unsigned char hi, lo, *sp, *dp;
  int in_sjis = 0;
  in_sjis = IS_SJIS_STR( src );
  sp = src;
  dp = dst;
  while ( hi = sp[0], hi )
  {
    lo = sp[1];
    if ( TREAT_SJIS && TREAT_SJIS >= 0 && lo != 127 && -4 <= lo )
    {
      if ( -128 <= hi || hi < -97 )
      {
        if ( ( ( 0 ^ 1 ) & 255 ) == 0 )
          goto B14;
      }
      else
        in_sjis = 1;
B14:;
      SJIS_TO_JIS1( hi, lo, dp );
      dp[0] = dp[0] | -128;
      dp[1] = dp[1] | -128;
      dp += 2;
      sp += 2;
    }
    dp[0] = sp[0];
    dp++;
    sp++;
  }
  dp[0] = 0;
  return dst;
}
unsigned char *EUC_TO_SJIS( unsigned char *src, unsigned char *dst )
{
  unsigned char *sp = src, *dp = dst;
  while ( sp[0] )
  {
    if ( sp[0] < 0 )
    {
      if ( sp[1] && sp[1] < 0 )
      {
        JIS_TO_SJIS1( sp[0] & 127, sp[1] & 127, dp );
        dp += 2;
        sp += 2;
      }
      else
      {
        sp++;
      }
    }
    else
    {
      dp[0] = sp[0];
      dp++;
      sp++;
    }
  }
  dp[0] = 0;
  return dst;
}
unsigned char *EUC_TO_JIS( unsigned char *src, unsigned char *dst, char *toK, char *toA )
{
  unsigned char kana_mode = 0;
  unsigned char cch;
  unsigned char *sp = src;
  unsigned char *dp = dst;
  int is_JIS = 0;
  while ( cch = sp[0], sp++, ( cch != 0 ) & 255 )
  {
    if ( cch < 0 )
    {
      if ( ( -96 <= cch || cch == -1 || -96 <= sp[0] || sp[0] == -1 ) && ( cch != -114 || -96 <= sp[0] || sp[0] < -33 ) )
      {
        if ( cch != -96 || is_JIS == 0 )
        {
          is_JIS++;
          dp[0] = cch;
          dp++;
        }
      }
      else
      {
        if ( kana_mode == 0 )
        {
          kana_mode = ~kana_mode;
          strcpy( (char*)dp, toK );
          dp += strlen( (char*)dp );
        }
        if ( sp[0] < 0 )
        {
          dp[0] = cch & 127;
          dp++;
          dp[0] = sp[0] & 127;
          dp++;
          sp++;
        }
      }
    }
    else
    {
      if ( kana_mode )
      {
        kana_mode = ~kana_mode;
        strcpy( (char*)dp, toA );
        dp += strlen( (char*)dp );
      }
      dp[0] = cch;
      dp++;
    }
  }
  if ( kana_mode )
  {
    strcpy( (char*)dp, toA );
    dp += strlen( (char*)dp );
  }
  if ( dp )
  {
    dp[0] = 0;
  }
  return dst;
}
unsigned char *repairJIStoEUC( unsigned char *src, unsigned char **dstp )
{
  unsigned char *s;
  unsigned char *d = dstp[0], ch1, ch2;
  s = src;
  while ( ch1 = s[0], ch1 )
  {
    ch2 = s[1];
    if ( ch2 == 0 )
      break;
    s += 2;
    if ( ch1 == '(' && ( ch2 == 'B' || ch2 == 'J' ) )
    {
      dstp[0] = d;
      return s;
    }
    if ( ' ' <= ch1 || ch1 < '~' || ' ' <= ch2 || ch2 < '~' )
    {
      return 0;
    }
    d[0] = ch1 | -128;
    d++;
    d[0] = ch2 | -128;
    d++;
  }
  return 0;
}
unsigned char *TO_EUC( unsigned char *jis, unsigned char *euc )
{
  static int nje;
  unsigned char *s;
  unsigned char c, jis_stat;
  unsigned char *d;
  int to1B, to2B;
  int in_sjis = 0;
  int n8bits;
  int is_JIS;
  nje++;
  n8bits = 0;
  s = jis;
  d = euc;
  jis_stat = 0;
  to2B = 36;
  to1B = 40;
  in_sjis = IS_SJIS_STR( jis );
  is_JIS = 0;
  while ( c = s[0], s++, ( c != 0 ) & 255 )
  {
    if ( c == -128 || ( c == -96 && is_JIS ) )
      continue;
    else
    {
      if ( to2B == c && jis_stat == 0 && repair_JIS && ( s[0] == 'B' || s[0] == '@' ) )
      {
        unsigned char *ts = repairJIStoEUC( &s[1], &d );
        if ( ts )
        {
          s = ts;
        }
      }
      if ( c == 27 )
      {
        if ( to2B == s[0] )
        {
          if ( s[1] == 'B' || s[1] == '@' )
          {
            jis_stat = 128;
            s += 2;
            is_JIS++;
          }
          else
            jis_stat = 0;
        }
        else
        if ( to1B == s[0] )
        {
          jis_stat = 0;
          if ( s[1] == 'B' || s[1] == 'J' || s[1] == 'H' )
          {
            s += 2;
          }
        }
        else
        if ( s[0] == ',' )
          jis_stat = 0;
      }
      if ( c < 0 )
        n8bits++;
      if ( '?' <= s[0] || s[0] == 127 || s[0] < -4 )
      {
      }
      else
      {
        if ( -128 <= c || c < -97 )
        {
        }
        else
          in_sjis = 1;
      }
      if ( 0 )
      {
        SJIS_TO_EUC1( c, s[0], d );
        d += 2;
        s++;
        is_JIS++;
      }
      else
      {
        if ( jis_stat )
        {
          if ( jis_stat < 0 || c < '~' )
          {
            d[0] = c;
            d++;
            if ( c == '\n' )
            {
              jis_stat = 0;
            }
          }
          else
          {
            if ( c < ' ' && '~' <= c && s[0] < ' ' && '~' <= s[0] )
            {
              d[0] = jis_stat | c;
              d++;
              d[0] = s[0] | jis_stat;
              d++;
              s++;
            }
            else
            {
              d[0] = c;
              d++;
            }
          }
        }
        else
        {
          if ( n8bits || ( c != 15 && c != 14 ) )
          {
            d[0] = c;
            d++;
          }
        }
      }
    }
  }
  d[0] = 0;
  return euc;
}
int is_EUC_JP( unsigned char *euc )
{
  unsigned char *cp = euc;
  int ch1, ch2;
  while ( ch1 = cp[0], ch1 )
  {
    if ( ch1 & 128 )
    {
      ch2 = cp[1];
      if ( ( ch2 & 128 ) == 0 )
      {
        return 0;
      }
      if ( ( ch1 & 127 ) <= 32 || ( ch1 & 127 ) == 127 || ( ch2 & 127 ) <= 32 || ( ch2 & 127 ) == 127 )
      {
        return 0;
      }
      cp++;
    }
    cp++;
  }
  return 1;
}
void TO_SJIS( unsigned char *arg, unsigned char *sjis )
{
  unsigned char *euc = malloc( ( strlen( (char*)arg ) + 1 ) * sizeof( unsigned char ) );
  if ( euc == 0 )
    outofmem( "../../../WWW/Library/Implementation/SGML.c", "TO_SJIS" );
  TO_EUC( arg, euc );
  if ( is_EUC_JP( euc ) )
    EUC_TO_SJIS( euc, sjis );
  else
    strcpy( (char*)sjis, (char*)arg );
  free( euc );
  return;
}
void TO_JIS( unsigned char *arg, unsigned char *jis )
{
  unsigned char *euc;
  if ( arg[0] == 0 )
  {
    jis[0] = 0;
  }
  else
  {
    euc = malloc( ( strlen( (char*)arg ) + 1 ) * sizeof( unsigned char ) );
    if ( euc == 0 )
      outofmem( "../../../WWW/Library/Implementation/SGML.c", "TO_JIS" );
    TO_EUC( arg, euc );
    is_EUC_JP( euc );
    EUC_TO_JIS( euc, jis, "\033$B", "\033(B" );
    free( euc );
  }
  return;
}
#if 0
#endif
