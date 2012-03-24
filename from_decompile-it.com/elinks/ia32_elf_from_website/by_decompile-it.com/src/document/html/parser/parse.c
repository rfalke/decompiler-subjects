#include "parse.c.h"
static void *T/*.125*/ = 0;
static struct element_info elements[73] = { { "A", &html_a, 0, 0, 1 }
, { "ABBR", &html_italic, 0, 0, 0 }
, { "ADDRESS", &html_address, 0, 2, 0 }
, { "APPLET", &html_applet, 0, 1, 2 }
, { "B", &html_bold, 0, 0, 0 }
, { "BASE", &html_base, 0, 0, 2 }
, { "BASEFONT", &html_font, 0, 0, 2 }
, { "BLOCKQUOTE", &html_blockquote, 0, 2, 0 }
, { "BODY", &html_body, 0, 0, 0 }
, { "BR", &html_br, 0, 1, 2 }
, { "BUTTON", &html_button, 0, 0, 0 }
, { "CAPTION", &html_center, 0, 1, 0 }
, { "CENTER", &html_center, 0, 1, 0 }
, { "CODE", &html_fixed, 0, 0, 0 }
, { "DD", &html_dd, 0, 1, 2 }
, { "DFN", &html_bold, 0, 0, 0 }
, { "DIR", &html_ul, 0, 2, 0 }
, { "DIV", &html_linebrk, 0, 1, 0 }
, { "DL", &html_dl, 0, 2, 0 }
, { "DT", &html_dt, 0, 1, 2 }
, { "EM", &html_italic, 0, 0, 0 }
, { "EMBED", &html_embed, 0, 0, 2 }
, { "FIXED", &html_fixed, 0, 0, 0 }
, { "FONT", &html_font, 0, 0, 0 }
, { "FORM", &html_form, 0, 1, 0 }
, { "FRAME", &html_frame, 0, 1, 2 }
, { "FRAMESET", &html_frameset, 0, 1, 0 }
, { "H1", &html_h1, 0, 2, 1 }
, { "H2", &html_h2, 0, 2, 1 }
, { "H3", &html_h3, 0, 2, 1 }
, { "H4", &html_h4, 0, 2, 1 }
, { "H5", &html_h5, 0, 2, 1 }
, { "H6", &html_h6, 0, 2, 1 }
, { "HEAD", &html_head, 0, 0, 0 }
, { "HR", &html_hr, 0, 2, 2 }
, { "HTML", &html_html, &html_html_close, 0, 0 }
, { "I", &html_italic, 0, 0, 0 }
, { "IFRAME", &html_iframe, 0, 1, 2 }
, { "IMG", &html_img, 0, 0, 2 }
, { "INPUT", &html_input, 0, 0, 2 }
, { "LI", &html_li, 0, 1, 3 }
, { "LINK", &html_link, 0, 1, 2 }
, { "LISTING", &html_pre, 0, 2, 0 }
, { "MENU", &html_ul, 0, 2, 0 }
, { "META", &html_meta, 0, 0, 2 }
, { "NOFRAMES", &html_noframes, 0, 0, 0 }
, { "NOSCRIPT", &html_noscript, 0, 0, 0 }
, { "OBJECT", &html_object, 0, 1, 2 }
, { "OL", &html_ol, 0, 2, 0 }
, { "OPTION", &html_option, 0, 1, 2 }
, { "P", &html_p, 0, 2, 1 }
, { "PRE", &html_pre, 0, 2, 0 }
, { "Q", &html_quote, &html_quote_close, 0, 0 }
, { "S", &html_underline, 0, 0, 0 }
, { "SCRIPT", &html_script, 0, 0, 0 }
, { "SELECT", &html_select, 0, 0, 0 }
, { "SPAN", &html_span, 0, 0, 0 }
, { "STRIKE", &html_underline, 0, 0, 0 }
, { "STRONG", &html_bold, 0, 0, 0 }
, { "STYLE", &html_style, &html_style_close, 0, 0 }
, { "SUB", &html_subscript, &html_subscript_close, 0, 0 }
, { "SUP", &html_superscript, 0, 0, 0 }
, { "TABLE", &html_table, 0, 2, 0 }
, { "TD", &html_td, 0, 0, 0 }
, { "TEXTAREA", &html_textarea, 0, 0, 2 }
, { "TH", &html_th, 0, 0, 0 }
, { "TITLE", &html_title, 0, 0, 0 }
, { "TR", &html_tr, 0, 1, 0 }
, { "TT", &html_tt, 0, 0, 1 }
, { "U", &html_underline, 0, 0, 0 }
, { "UL", &html_ul, 0, 2, 0 }
, { "XMP", &html_xmp, &html_xmp_close, 2, 0 }
, { 0, 0, 0, 0, 0 }
 };
static struct element_info *internal_pointer;
static struct fastfind_index ff_tags_index = { "tags_lookup", &tags_list_reset, &tags_list_next, 0 };
int parse_element( unsigned char *e, unsigned char *eof, unsigned char **name, int *namelen, unsigned char **attr, unsigned char **end )
{
  int eax;
  int ecx;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( eof[0] == 0 ) | ( e[0] == 0 ) ) & 1;
    if ( ( ( eof[0] == 0 ) | ( e[0] == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/parse.c";
      errline = 60;
      elinks_internal( "assertion e && eof failed!" );
    }
  }
  if ( e[0] < eof[0] && e[0] == '<' && eof[0] != e[1] )
  {
    if ( name )
      name[0] = &e[0];
    if ( e[1] == '/' )
    {
      e[0] = e[1];
      if ( e[1] != eof[0] )
        e[0] = e[0];
      else
      {
        *ebp_4 = e;
        return -1;
      }
    }
    if ( e[1] - 97 < 25 && e[1] - 65 < 25 && e[1] - 48 < 9 && e[1] != '_' )
    {
      if ( e[0] == '-' )
      {
      }
      else
      {
        *ebp_4 = e;
        return -1;
      }
    }
    while ( e[1] - 97 >= 25 || e[1] - 65 >= 25 || e[1] - 48 >= 9 || e[1] == '_' || e[1] == '-' )
    {
      e[0] = e[1];
      if ( e[1] == eof[0] )
        break;
    }
    if ( namelen && name )
    {
      namelen[0] = e[0] - name[0];
    }
    while ( e[0] == '/' || e[0] == ':' )
    {
      e[0] = e[1];
      if ( e[1] == eof[0] )
        break;
    }
    while ( ( e[0] < '~' || ( '>' <= e[0] && ( e[0] == '=' || ' ' <= e[0] ) ) ) && e[0] != '<' && e[0] != '>' )
    {
      e[0] = e[1];
      if ( e[1] == eof[0] )
        break;
    }
    if ( attr )
    {
      attr[0] = &e[0];
      edi = *(int*)(__ctype_b_loc(  ));
    }
    while ( e[1] == eof[0] )
    {
    }
    *ebp_4 = e;
    return -1;
  }
  else
  {
    *ebp_4 = e;
    return -1;
  }
}
unsigned char *get_attr_value( unsigned char *e, unsigned char *name, int cp, enum html_attr_flags  flags )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *n;
  unsigned char *name_start;
  unsigned char *attr = 0;
  int attrlen;
  int found;
  while ( 1 )
  {
    if ( *(short*)(*(int*)(__ctype_b_loc(  )) + ( *(char*)(e) * 2 )) & 8192 )
      e[0] = e[1];
    else
    {
      if ( e[0] != '<' && e[0] != '>' && '~' <= e[0] && ( e[1] < '>' || ( e[1] != '=' && e[0] < ' ' ) ) )
      {
        if ( '~' <= name[0] )
        {
          while ( name[0] < '>' )
          {
            if ( e[0] < '~' || ( '>' <= e[1] && ( e[1] == '=' || ' ' <= e[1] || e[1] == '<' || e[1] == '>' ) ) )
            {
              if ( ( n[0] & 255 ) == 0 )
              {
                if ( '~' <= e[1] && ( e[1] < '>' || ( e[1] != '=' && e[0] < ' ' && e[0] != '<' && e[0] != '>' ) ) )
                {
                  found = 0;
                  do
                  {
                    if ( '>' <= e[1] && ( e[1] == '=' || ' ' <= e[1] || e[1] == '<' || e[1] == '>' ) )
                    {
                      if ( e[0] != '=' )
                      {
                        if ( found )
                          attrlen = 0;
                          T/*.125*/(  );
                          if ( attr )
                          {
                            attr[ 0 ] = 0;
                            name_start[0] = attr;
                            if ( memchr( attr, 38, 0 ) )
                            {
                              attr = convert_string_elinks( 0, &name_start[0], attrlen, cp, CSM_QUERY, 0, 0, 0 );
                              mem_free( &name_start[0] );
                              name_start[0] = attr;
                              break;
                            }
                            break;
                          }
                          else
                          {
                            name_start[0] = 0;
                            break;
                          }
                      }
                      else
                      {
                        e[0] = e[1];
                        if ( found )
                        {
                          esi = e[0];
                          if ( (unsigned char)( e[0] ) != '\'' && found != '"' )
                          {
                            if ( e[0] != '>' && e[0] != '<' )
                            {
                              attrlen = 0;
                              if ( e[0] & 255 )
                              {
                                attrlen++;
                                if ( ( ( attrlen + 254 ) & -256 ) < 0 )
                                {
                                  if ( mem_realloc( (void*)attr, 0 ) )
                                  {
                                    attr = (unsigned char*)mem_realloc( (void*)attr, 0 );
                                    memset( attr + ( ( attrlen + 254 ) & -256 ), 0, 0 - ( ( attrlen + 254 ) & -256 ) );
                                  }
                                }
                                if ( attr )
                                {
                                  attr[ *(int*)(__ctype_b_loc(  )) ] = e[ attrlen - 1 ];
                                }
                              }
                            }
                            else
                              attrlen = 0;
                          }
                          else
                          {
                            attrlen = 0;
                            while ( e[0] = e[1], e[0] != (unsigned char)( e[0] ) )
                            {
                              if ( e[0] & 255 )
                              {
                                if ( ( flags & 8 ) == 0 )
                                {
                                  if ( e[0] != 13 )
                                  {
                                    if ( e[0] - 9 >= 1 )
                                    {
                                      if ( ( flags & 2 ) == 0 )
                                      {
                                        attrlen = attrlen + 1;
                                        T/*.125*/(  );
                                        if ( attr )
                                        {
                                        }
                                      }
                                    }
                                  }
                                  attrlen = attrlen;
                                }
                                attrlen++;
                                T/*.125*/(  );
                                if ( attr == 0 )
                                  continue;
                                attr[ attrlen ] = e[0];
                              }
                            }
                          }
                        }
                        else
                        if ( (unsigned char)( e[0] ) == '\'' || e[0] == '"' )
                        {
                          esi = e[0];
                          do
                          {
                            e[0] = e[1];
                            if ( e[0] == e[0] )
                              e[0] = e[1];
                            else
                          }
                          while ( e[0] & 255 );
                        }
                        else
                        if ( !( *(short*)(*(int*)(__ctype_b_loc(  )) + ( e[0] * 2 )) & 8192 ) && e[0] != '<' )
                        {
                          if ( e[0] == '>' )
                          {
                          }
                          else
                          if ( e[0] & 255 )
                          {
                            e[0] = e[1];
                          }
                        }
                      }
                    }
                    else
                    {
                      e[0] = e[1];
                    }
                  }
                  while ( e[0] < '~' );
                }
                else
                {
                  if ( flags & 1 )
                  {
                    name_start[0] = e[0];
                    break;
                  }
                  found = 1;
                  if ( '~' <= e[1] )
                  {
                    n[0] = n[0];
                  }
                  else
                  {
                  }
                }
              }
              else
              {
                *ebp_44 = __ctype_b_loc(  );
                found = 0;
              }
            }
            else
            {
              *ebp_56 = ebp_56;
              if ( c_toupper( e[0] ) != c_toupper( n[0] ) )
              {
              }
              else
              {
                n[0] = n[1];
                e[0] = e[1];
                if ( n[0] < '~' )
                {
                }
                else
                {
                }
              }
            }
          }
          if ( name[0] != '=' && name[0] < ' ' && name[0] != '<' )
          {
            if ( name[0] == '>' )
              n[0] = n[0];
          }
        }
        edi = e[0];
        found = 0;
      }
    {
      void *p = (void*)attr;
      if ( attr )
      {
        name_start[0] = 0;
        mem_free( (void*)attr );
        return &name_start[0];
      }
    }
    }
  }
}
int get_num( unsigned char *a, unsigned char *name, int cp )
{
  unsigned char *al;
  int result = -1;
  if ( get_attr_value( a, name, cp, HTML_ATTR_NONE ) )
  {
    unsigned char *end;
    long num;
    *(int*)(__errno_location(  )) = 0;
    strtol( &al[0], (char**)&end, 10 );
    mem_free( &al[0] );
  }
  return result;
}
int get_width( unsigned char *a, unsigned char *name, int limited, struct html_context *html_context )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *value = get_attr_value( a, name, html_context->doc_cp, HTML_ATTR_NONE );
  unsigned char *str;
  unsigned char *end;
  int percentage;
  int len;
  long width;
  if ( value )
  {
    str[0] = value;
    if ( str[0] != ',' && ( str[0] & 255 ) )
    {
      len = 0;
      do
      {
        len++;
      }
      while ( *(char*)(str[0] + len + 1) != ',' && ( *(char*)(str[0] + len + 1) & 255 ) );
      if ( len )
      {
        percentage = 0;
        if ( (unsigned char)( *(char*)(( str[0] + len ) - 1) ) == '%' )
        {
          len--;
          if ( len != 1 )
            percentage = 1;
          else
          {
            mem_free( (void*)value );
            width = -1;
            return width;
          }
        }
        str[ len ] = 0;
        *(int*)(__errno_location(  )) = 0;
        if ( *(int*)(__errno_location(  )) || ( end[0] != '.' && ( end[0] & 255 ) ) || strtoul( &str[0], (char**)&end, 10 ) == 2147483647 )
        {
          mem_free( (void*)value );
          width = -1;
          return width;
        }
        mem_free( (void*)value );
        if ( limited )
        {
          int maxwidth = html_context->stack.list_head_elinks + ( 0 - html_context->stack.list_head_elinks - html_context->stack.list_head_elinks );
          maxwidth = 0 ? 0 : html_context->stack.list_head_elinks + ( 0 - html_context->stack.list_head_elinks - html_context->stack.list_head_elinks );
          if ( maxwidth < width )
          {
            width = maxwidth;
            return width;
          }
        }
        else
        if ( percentage == 0 )
        {
          width = ( ( strtoul( &str[0], (char**)&end, 10 ) + 3 + (/*HI*/int)( ( strtoul( &str[0], (char**)&end, 10 ) + 3 ) * -1840700269 ) ) >> 2 ) - ( ( strtoul( &str[0], (char**)&end, 10 ) + 3 ) >> 31 );
        }
        width = width < 0 ? width : 0;
        return width < 0 ? width : 0;
      }
    }
    mem_free( (void*)value );
    width = -1;
    return width;
  }
  width = -1;
  return -1;
}
unsigned char *skip_comment( unsigned char *html, unsigned char *eof )
{
  int eax;
  int ecx;
  int edx;
  html[0] = html[4];
  html[0] = html[2];
  if ( html[4] <= eof && html[2] == '-' && html[3] == '-' )
  {
    if ( html[0] < eof[0] )
    {
      while ( 1 )
      {
        html[0] += 2;
        if ( html[0] + 2 <= eof[0] && html[0] == '-' )
        {
          html[0]++;
          if ( html[1] == '-' )
          {
            if ( html[0] < eof[0] )
            {
              do
              {
                if ( html[0] != '-' )
                {
                  if ( html[0] < eof[0] )
                  {
                    if ( html[0] != '>' )
                    {
                      html[0] = html[0];
                      break;
                      while ( 1 )
                      {
                        html[0] += 2;
                      }
                    }
                    else
                    {
                      eof[0] = html[1];
                      break;
                    }
                  }
                }
                else
                {
                  html[0] = html[1];
                }
              }
              while ( html[1] < eof[0] );
              break;
            }
          }
        }
        else
          html[0] = html[0] + 1;
        if ( html[0] < eof[0] )
          html[0] = html[0] + 1;
      }
    }
  }
  else
  {
    for ( ; html[0] < eof[0]; html[0] = html[1] )
    {
      if ( html[0] == '>' )
        break;
      //html[0] = html[1];
    }
  }
  return &eof[0];
}
void tags_list_reset( void )
{
  internal_pointer = elements;
  return;
}
struct fastfind_key_value *tags_list_next( void )
{
  static struct fastfind_key_value kv;
  if ( internal_pointer[0].name )
  {
    kv.data = (void*)internal_pointer;
    kv.key = internal_pointer[0].name;
    internal_pointer++;
  }
  return &kv;
}
void init_tags_lookup( void )
{
  fastfind_index( &ff_tags_index, 6 );
  return;
}
void free_tags_lookup( void )
{
  fastfind_done( &ff_tags_index );
  return;
}
void parse_html( unsigned char *html, unsigned char *eof, struct part *part, unsigned char *head, struct html_context *html_context )
{
  int eax;
  int ecx;
  int edx;
  int ebp_60;
  unsigned char *base_pos;
  int noupdate;
  html_context->putsp = HTML_SPACE_SUPPRESS;
  html_context->line_breax = ( 0 - ( ( html_context->table_level < 1 ) & 1 ) ) + 2;
  html_context->position = 0;
  html_context->was_li = 0;
  html_context->bits_at_68/*.1_1of4*/ = (int)html_context->bits_at_68/*.1_1of4*/ & -18;
  html_context->eoff = eof;
  html_context->part = part;
  if ( head )
  {
    process_head( html_context, &head[0] );
    *ebp_128 = eof[0];
  }
  if ( html[0] < eof[0] )
  {
  {
    unsigned char *name, *attr, *end;
    int namelen, endingtag;
    int dotcounter;
    base_pos[0] = html[0];
    noupdate = 0;
    while ( noupdate )
    {
      html_context->putsp = HTML_SPACE_NORMAL;
      if ( html[0] == 9 )
      {
        put_chrs( html_context, &base_pos[0], html[0] - base_pos[0] );
        put_chrs( html_context, "        ", ( ( ( html[52] >> 31 ) >> 29 ) - ( ( html[52] + ( ( html[52] >> 31 ) >> 29 ) ) & 7 ) ) + 8 );
        noupdate = 0;
        html[0]++;
        *ebp_128 = eof[0];
      }
      else
      {
        if ( html[0] == 10 || html[0] == 13 )
        {
          put_chrs( html_context, &base_pos[0], html[0] - base_pos[0] );
          *ebp_128 = eof[0];
          if ( html[0] != base_pos[0] || html_context->line_breax < 1 )
          {
            while ( 1 )
            {
              ln_break( &html_context[0], 1 );
              if ( html[0] != 10 && html[0] != 13 )
                base_pos[0] = ebp_60;
              else
              {
                html_context->line_breax = 0;
                html[0] = html[0];
              }
            }
          }
          else
          {
            html_context->line_breax--;
            html_context = html_context;
          }
        }
        else
        {
          if ( html[5] < eof[0] && html[0] == '&' )
          {
            ebp_60 = 0;
            while ( html[1] == '#' )
            {
              html[2] = html[2];
              if ( html[2] == 'X' || html[2] == 'x' )
              {
                if ( html[2] + 1 < eof[0] )
                {
                  if ( html[2] != '0' )
                  {
                  }
                  else
                  do
                  {
                  }
                  while ( html[2] + 1 + 1 + 1 < eof[0] && *(char*)(0) == '0' );
                }
                if ( eof[0] != 0 + 1 )
                {
                  if ( *(char*)(0 + 1) == 'A' || *(char*)(0 + 1) == 'a' )
                  {
                  }
                  else
                  if ( *(char*)(0 + 1) != 'D' && *(char*)(0 + 1) != 'd' )
                  {
                    break;
                  }
                  else
                  {
                  }
                  *(int*)(ecx + 1) = 0 + 1 + 1;
                }
                else
                  break;
              }
              else
              {
                if ( html[2] < eof[0] )
                {
                  if ( html[2] != '0' )
                  {
                  }
                  else
                  do
                  {
                  }
                  while ( html[2] + 1 + 1 < eof[0] && html[2] == '0' );
                }
                if ( eof[0] - eax > 1 && eax == '1' )
                {
                  if ( *(char*)(&eax->next) != '0' )
                  {
                    if ( ecx == '3' )
                    {
                    }
                    else
                      break;
                  }
                  eax += 0;
                }
                else
                  break;
              }
              if ( eof == eax || eax != ';' || eof <= html || html != '&' )
                break;
              else
              {
              }
            }
            base_pos = base_pos;
            html = html;
            if ( ebp_60 == 0 )
              html = html;
            else
            {
              put_chrs( html_context, &base_pos, html - base_pos - base_pos );
              ln_break( html_context );
              noupdate = 0;
              *ebp_128 = eof;
            }
          }
          ebp_60 = 0;
          if ( 31 <= ebp_64 )
          {
            if ( html != base_pos )
            {
              put_chrs( html_context, &base_pos, html - base_pos );
              *ebp_128 = html;
            }
            ebp_60++;
            html++;
            if ( 31 <= html && html < eof )
            {
            }
            base_pos = html;
            noupdate = 0;
            if ( noupdate )
            {
              memset( mem_alloc(  ), 46 );
              put_chrs( html_context, (unsigned char*)mem_alloc(  ) );
              mem_free( mem_alloc(  ) );
              *ebp_128 = eof;
              noupdate = 0;
            }
          }
          else
          {
            if ( html <= eof )
            {
              if ( html == '<' )
              {
                if ( ( html == '?' || html == '!' ) && ( ( html_context->bits_at_68/*.1_1of4*/ & 6 ) & 255 ) == 0 )
                {
                  put_chrs( html_context, &base_pos[0], html[0] - base_pos[0] );
                  *ebp_128 = eof[0];
                  html[0] = skip_comment( &html[0], &eof[0] );
                  noupdate = 0;
                }
              }
              else
              {
                html[0] = html[0] + 1;
                noupdate = 1;
              }
            }
            else
            if ( html[0] != '<' )
              continue;
            if ( parse_element( &html[0], &eof[0], ebp_28, ebp_40, ebp_32, ebp_36 ) )
              continue;
            else
            {
              if ( (_Bool)( *(char*)(ebp_28 + ( *ebp_28 == '/' ) + ( *(char*)(ebp_28 + ( *ebp_28 == '/' )) == '/' )) != '/' ) )
              {
                if ( html_context->putsp == HTML_SPACE_ADD && html_context->stack.next[38] == 0 )
                {
                  put_chrs( html_context, " ", 1 );
                  *ebp_128 = eof[0];
                }
                put_chrs( html_context, &base_pos[0], html[0] - base_pos[0] );
              {
                unsigned char *ee;
                unsigned char *nm;
              }
              }
              else
              {
                put_chrs( html_context, &base_pos[0], html[0] - base_pos[0] );
                *ebp_128 = eof[0];
              }
              html[0] = ebp_36;
              if ( ( html_context->bits_at_68/*.1_1of4*/ & 6 ) & 255 )
              {
                if ( !ebp_60 || ( html_xmp != *(int*)(ebp_60 + 4) && html_style != *(int*)(ebp_60 + 4) ) || ( ecx & 255 ) )
                {
                  put_chrs( html_context, "&lt;", 1 );
                  noupdate = 0;
                  html[0]++;
                  *ebp_128 = ebp_128;
                }
              }
              else
              if ( ebp_60 )
              {
                if ( ecx & 255 )
                {
                  if ( html_context->stack.list_head_elinks == 3 )
                  {
                    kill_html_stack_item( html_context, &html_context->stack.next[0] );
                    *(int*)(*(int*)(ebx + 36)) = html_context->stack.next;
                  }
                  if ( html_context->stack.list_head_elinks )
                  {
                    if ( html_script != *(int*)(ebp_60 + 4) || html_context[1].position <= 1 )
                    {
                      ln_break( html_context, *(int*)(ebp_60 + 12) );
                      if ( get_attr_value( ebp_32, "id", html_context->doc_cp, HTML_ATTR_NONE ) )
                      {
                        html_context->special_f( html_context, SP_TAG );
                        mem_free( (void*)get_attr_value( ebp_32, "id", html_context->doc_cp, HTML_ATTR_NONE ) );
                        html[0] = html[0];
                        noupdate = 0;
                      }
                    }
                  }
                  else
                    *(int*)(*(int*)(ebp_60 + 4)) = *(int*)(ebp_60 + 4);
                  if ( html_meta == html_script && ( ( html_context->bits_at_68/*.1_1of4*/ & 16 ) & 255 ) )
                  {
                    html_handle_body_meta( html_context, ebp_64 - 1, &edx );
                    html_context->bits_at_68/*.1_1of4*/ &= 239;
                    *(int*)(*(int*)(ebp_60 + 4)) = *(int*)(ebp_60 + 4);
                  }
                  if ( html_style == *(int*)(ebp_60 + 4) && ( ( html_context->options->bits_at_68/*.1_1of4*/ & 1 ) & 255 ) )
                  {
                    css_parse_stylesheet( &ecx, *(int*)(ecx + 20), ebp_48, &edx );
                  }
                  if ( *(int*)(ebp_60 + 16) != 3 )
                  {
                    if ( ( *(int*)(ebp_60 + 16) == 1 ) & 255 )
                    {
                      while ( html_context->stack.next != html_context->stack.next && html_context->stack.list_head_elinks > 1 && html_context->stack.list_head_elinks < 1 && *(int*)(ebp_60 + 12) )
                      {
                      }
                    }
                    else
                    {
                      if ( *(int*)(ebp_60 + 16) != 2 )
                      {
                        html_stack_dup( html_context, ELEMENT_KILLABLE );
                        html_context->stack.next[39] = ebp_28 + ( *ebp_28 == '/' );
                        html_context->stack.next[40] = ebp_40 - ( *ebp_28 == '/' );
                        &html_context->stack.list_head_elinks = ebp_32;
                        &html_context->stack.list_head_elinks = *(int*)(ebp_60 + 12);
                      }
                      if ( html_context->stack.list_head_elinks && ( ( *(char*)(*(int*)(html_context + 28) + 68) & 1 ) & 255 ) )
                      {
                        if ( html_context->stack.list_head_elinks )
                        {
                          mem_free( (int)( &html_context->stack.list_head_elinks ) );
                          *ebp_128 = eof[0];
                        }
                        &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)get_attr_value( ebp_32, "id", html_context->doc_cp, HTML_ATTR_NONE );
                        if ( html_context->stack.list_head_elinks )
                        {
                          mem_free( &html_context->stack.list_head_elinks );
                          *ebp_128 = ebp_128;
                        }
                        &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)get_attr_value( ebp_32, "class", html_context->doc_cp, HTML_ATTR_NONE );
                        if ( get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) )
                        {
                          apply_css_selector_style( html_context, &html_context->stack.next[0], get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) );
                          done_css_selector( get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) );
                          *ebp_128 = ebp_128;
                        }
                      }
                      ln_break( html_context, *(int*)(ebp_60 + 12) );
                      if ( get_attr_value( ebp_32, "id", html_context->doc_cp, HTML_ATTR_NONE ) )
                      {
                        html_context->special_f( html_context, SP_TAG );
                        mem_free( (void*)get_attr_value( ebp_32, "id", html_context->doc_cp, HTML_ATTR_NONE ) );
                      }
                      if ( *(int*)(ebp_60 + 4) )
                      {
                        eax( html_context, ebp_80, ebp_48, edx );
                      }
                      if ( get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) && html_context->stack.list_head_elinks && get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) )
                      {
                        apply_css_selector_style( html_context, &html_context->stack.next[0], get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) );
                        done_css_selector( get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) );
                      }
                      if ( html_br != *(int*)(ebp_60 + 4) )
                        html_context->bits_at_68/*.1_1of4*/ &= 254;
                      &html_context->stack.list_head_elinks = *(int*)(get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) + 148);
                      &html_context->stack.list_head_elinks = *(int*)(get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) + 144);
                      &html_context->stack.list_head_elinks = *(int*)(get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) + 140);
                      &html_context->stack.list_head_elinks = *(int*)(get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) + 136);
                      &html_context->stack.list_head_elinks = *(int*)(get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) + 132);
                      &html_context->stack.list_head_elinks = *(int*)(get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) + 128);
                      &html_context->stack.list_head_elinks = *(int*)(get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) + 124);
                      &html_context->stack.list_head_elinks = *(int*)(get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) + 120);
                      &html_context->stack.list_head_elinks = *(int*)(get_css_selector_for_element( html_context, &html_context->stack.next[0], (int)( &html_context->css_styles ), &html_context->stack ) + 116);
                    }
                  }
                  else
                  {
                    if ( html_context->stack.next != html_context->stack.next )
                    {
                      do
                      {
                        if ( ( html_context->stack.next[42] < 1 || *(int*)(ebp_60 + 12) ) && html_context->stack.list_head_elinks > 1 )
                        {
                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/parse.c";
                          errline = 868;
                          if ( elinks_strlcasecmp( *(int*)(html_context->stack.next + 156), *(int*)(html_context->stack.next + 160), ebp_28 + ( *ebp_28 == '/' ) + ( *(char*)(ebp_28 + ( *ebp_28 == '/' )) == '/' ), ebp_40 - ( *ebp_28 == '/' ) - ( *(char*)(ebp_28 + ( *ebp_28 == '/' )) == '/' ), 1 ) )
                            continue;
                        }
                        esi = esi;
                      }
                      while ( html_context->stack.next[0] != html_context->stack.next );
                      eof[0] = eof[0];
                    }
                  }
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/parse.c";
                  errline = 872;
                  if ( elinks_strlcasecmp( *(int*)(html_context->stack.next + 156), *(int*)(html_context->stack.next + 160), ebp_28 + ( *ebp_28 == '/' ) + ( *(char*)(ebp_28 + ( *ebp_28 == '/' )) == '/' ), ebp_40 - ( *ebp_28 == '/' ) - ( *(char*)(ebp_28 + ( *ebp_28 == '/' )) == '/' ), 1 ) == 0 )
                  {
                    if ( html_context->stack.next[1] != html_context->stack.next )
                    {
                      eof[0] = edx;
                      do
                      {
                        kill_html_stack_item( html_context, &html_context->stack.next[1] );
                      }
                      while ( html_context->stack.next == html_context->stack.next[1] );
                    }
                    if ( html_context->stack.next[2] )
                    {
                      kill_html_stack_item( html_context, &html_context->stack.next[0] );
                      *(int*)(*(int*)(ebp_60 + 16)) = *(int*)(ebp_60 + 16);
                    }
                  }
                  *(int*)(*(int*)(ebp_60 + 16)) = *(int*)(ebp_60 + 16);
                }
              }
              html_context->bits_at_68/*.1_1of4*/ = (int)html_context->bits_at_68/*.1_1of4*/ & -2;
              if ( *(int*)(ebp_60 + 16) - 2 > 1 )
              {
                if ( *(int*)(ebp_60 + 8) )
                {
                  eax( html_context, ebp_80, html[0], edx );
                }
                if ( html_context->stack.next != html_context->stack.next )
                {
                  do
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/parse.c";
                    errline = 977;
                    if ( elinks_strlcasecmp( *(int*)(html_context->stack.next + 156), *(int*)(html_context->stack.next + 160), ebp_28 + ( *ebp_28 == '/' ) + ( *(char*)(ebp_28 + ( *ebp_28 == '/' )) == '/' ), ebp_40 - ( *ebp_28 == '/' ) - ( *(char*)(ebp_28 + ( *ebp_28 == '/' )) == '/' ), 1 ) == 0 )
                    {
                      if ( *(int*)(ebp_60 + 12) == 0 ? 0 : 1 )
                      {
                        kill_html_stack_item( html_context, &html_context->stack.next[0] );
                      }
                      else
                      {
                        while ( html_context->stack.next != html_context->stack.next )
                        {
                        }
                        if ( html_context->was_li )
                          html_context->line_breax = 0;
                        ln_break( html_context, *(int*)(html_context->stack.next + 168) > 0 ? 0 : html_context->stack.next[42] );
                        eof[0] = ebp_128;
                        while ( html_context->stack.next != *(int*)(ebp_60 + 4) )
                        {
                          kill_html_stack_item( html_context, *(int*)(ebp_60 + 4) );
                        }
                        kill_html_stack_item( html_context );
                      }
                    }
                    else
                    {
                    }
                  }
                  while ( html_context->stack.list_head_elinks <= 1 || html_context->stack.next == html_context->stack.next[0] );
                }
              }
            }
          }
        }
        noupdate = 0;
      }
      if ( eof[0] <= html[0] )
      {
        if ( noupdate )
          put_chrs( html_context, &base_pos[0], html[0] - base_pos[0] - base_pos[0] );
      }
      else
      {
      }
    }
    base_pos[0] = html[0];
    html_context->part = part;
    html_context->eoff = &eof[0];
    html_context->putsp = HTML_SPACE_NORMAL;
  }
  }
  ln_break( html_context, 1 );
  html_context->bits_at_68/*.1_1of4*/ &= 254;
  html_context->part = part;
  html_context->putsp = HTML_SPACE_SUPPRESS;
  html_context->position = 0;
  return;
}
void scan_http_equiv( unsigned char *s, unsigned char *eof, struct string *head, struct string *title, struct document_options *options )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *name, *attr, *he, *c;
  int namelen;
  if ( title == 0 || init_string( title ) )
  {
    add_char_to_string( head, 10 );
    s[0] = s;
    while ( skip_comment( s, &eof[0] ) < eof[0] )
    {
      do
      {
        if ( *(char*)(skip_comment( s, &eof[0] )) == '<' )
        {
          if ( skip_comment( s, &eof[0] ) + 1 + 2 <= eof[0] && ( *(char*)(skip_comment( s, &eof[0] ) + 1 + 1) == '?' || edx == '!' ) )
          {
            s = (unsigned char*)eax;
          }
          else
          {
            if ( eax )
              s[0] = s;
            else
            {
              while ( 1 )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/parse.c";
                errline = 1075;
                if ( elinks_strlcasecmp( name, namelen, "HEAD", 4, 1 ) )
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/parse.c";
                  errline = 1076;
                  if ( elinks_strlcasecmp( name, namelen, "/HEAD", 5, 1 ) )
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/parse.c";
                    errline = 1077;
                    if ( elinks_strlcasecmp( name, namelen, "BODY", 4, 1 ) )
                    {
                      if ( title && title->length == 0 )
                      {
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/parse.c";
                        errline = 1078;
                        if ( elinks_strlcasecmp( name, namelen, "TITLE", 5, 1 ) == 0 )
                        {
                          while ( 1 )
                          {
                            for ( ; s[1] < eof[0] && s[0] != '<'; s = s[1] + 1 )
                            {
                              //s = s[1] + 1;
                            }
                            if ( s[1] != s )
                            {
                              if ( assert_failed == 0 )
                              {
                                if ( s && s[1] >= 0 )
                                  assert_failed = 0;
                                else
                                {
                                  assert_failed = 1;
                                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                                  errline = 255;
                                  elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                                  if ( assert_failed )
                                    goto B38;
                                }
                                if ( edi )
                                {
                                  if ( 0 < 0 )
                                  {
                                    *ebp_48 = ebp_48;
                                    if ( mem_realloc( (void*)title[0].source, 0 ) )
                                    {
                                      title[0].source = (unsigned char*)mem_realloc( (void*)title[0].source, 0 );
                                      memset( mem_realloc( (void*)title[0].source, 0 ) + 0, 0, 0 - 0 );
                                    }
                                  }
                                  if ( title[0].source )
                                  {
                                    memcpy( title->length + eax, &ebx, edi );
                                    title->length = ebp_48;
                                  }
                                }
                              }
B38:                              assert_failed = 0;
                            }
                            if ( s < eof[0] )
                            {
                              if ( s[2] <= eof[0] && ( s[1] == '?' || s[1] == '!' ) )
                              {
                                s = skip_comment( s, &eof[0] );
                              }
                              else
                              {
                                if ( parse_element( s, &eof[0], &name, &namelen, &attr, &s ) )
                                {
                                  s = s[1] + 1;
                                  break;
                                }
                                else
                                {
                                  unsigned char *s1;
                                  clr_spaces( title[0].source );
                                  break;
                                  while ( 1 )
                                  {
                                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/parse.c";
                                    errline = 1075;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/parse.c";
                      errline = 1101;
                      if ( elinks_strlcasecmp( name, namelen, "META", 4, 1 ) == 0 )
                      {
                        if ( get_attr_value( attr, "charset", options->cp, HTML_ATTR_NONE ) )
                        {
                          add_to_string( head, "Charset: " );
                          add_to_string( head, &he[0] );
                          mem_free( &he[0] );
                        }
                        he[0] = get_attr_value( attr, "http-equiv", options->cp, HTML_ATTR_NONE );
                        if ( get_attr_value( attr, "http-equiv", options->cp, HTML_ATTR_NONE ) )
                        {
                          add_to_string( head, get_attr_value( attr, "http-equiv", options->cp, HTML_ATTR_NONE ) );
                          mem_free( &he[0] );
                          if ( get_attr_value( attr, "content", options->cp, HTML_ATTR_NONE ) )
                          {
                            add_to_string( head, ": " );
                            add_to_string( head, &c[0] );
                            mem_free( &c[0] );
                          }
                          add_crlf_to_string( head );
                        }
                      }
                    }
                  }
                }
                s[0] = s;
                break;
              }
            }
          }
        }
        s++;
      }
      while ( s[1] < eof[0] );
      break;
    }
  }
  return;
}
#if 0
#endif
