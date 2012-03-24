#include "value.c.h"
int css_parse_color_value( struct css_property_info *propinfo, union css_property_value *value, struct scanner *scanner )
{
  int eax;
  int ecx;
  int edx;
  struct scanner_token *token;
  if ( scanner->tokens < 1 || scanner->table[ scanner->tokens ].type <= scanner->current )
    token = 0;
  if ( assert_failed == 0 )
  {
    assert_failed = propinfo->value_type != CSS_VT_COLOR;
    if ( propinfo->value_type != CSS_VT_COLOR )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
      errline = 30;
      elinks_internal( "assertion propinfo-&gt;value_type == CSS_VT_COLOR failed!" );
    }
  }
  if ( token->type != 270 )
  {
    if ( ( token->type == 268 || token->type == 256 ) && decode_color( token->string, token->length, (color_T*)value ) >= 0 )
    {
      skip_scanner_tokens( &scanner[0], token->type, token->type == 41 ? 0 : 128 );
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    int shift;
    if ( scanner->tokens >= 1 && scanner->current < scanner->table[ scanner->tokens ].type )
    {
      token = scanner->current + 16;
      scanner->current++;
      if ( scanner->current + 32 < scanner->table[ scanner->tokens ].type )
      {
        if ( token[0].type < scanner->table[ scanner->tokens ].type )
          goto B18;
      }
      else
      {
        token = scanner->info->scan( &scanner[0] );
      }
B18:      if ( token[0].type )
      {
        shift = 16;
      {
        unsigned char paskynator;
        unsigned char *nstring;
        int part;
        do
        {
          if ( token[ -16 ].type <= 1 && scanner->tokens >= 1 && scanner->current < scanner->table[ scanner->tokens ].type && scanner->current + 16 < scanner->table[ scanner->tokens ].type && scanner->current[1].type == ( ( ( 0 - ( ( shift < 1 ) & 1 ) ) & -3 ) + 44 ) && token->string != token->string )
          {
            if ( token->type == 258 )
              *(int*)(strtol( (char*)token->string, ebp_28, 10 )) = ( (/*HI*/int)( ( ( (unsigned char)( ( ( ( strtol( (char*)token->string, ebp_28, 10 ) <= 100 ? 100 : strtol( (char*)token->string, ebp_28, 10 ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : strtol( (char*)token->string, ebp_28, 10 ) <= 100 ? 100 : strtol( (char*)token->string, ebp_28, 10 ) ) * 255 ) * 0x51eb851f ) >> 5 ) - ( ( ( (unsigned char)( ( ( ( strtol( (char*)token->string, ebp_28, 10 ) <= 100 ? 100 : strtol( (char*)token->string, ebp_28, 10 ) ) >> 31 ) & 1 ) ^ 1 ) ? 0 : strtol( (char*)token->string, ebp_28, 10 ) <= 100 ? 100 : strtol( (char*)token->string, ebp_28, 10 ) ) * 255 ) >> 31 );
            else
            {
            }
            value[0].none = value[0].none | ( ( part <= 255 ? 255 : part ) << ebp_48 );
          }
          else
            value[0].none = value[0].none | ( ( part <= 255 ? 255 : part ) << ebp_48 );
            break;
        }
        while ( eax && shift >= 0 );
      }
      }
    }
    return 1;
  }
}
int css_parse_background_value( struct css_property_info *propinfo, union css_property_value *value, struct scanner *scanner )
{
  int edx;
  int success;
  if ( assert_failed == 0 )
  {
    assert_failed = propinfo->value_type != CSS_VT_COLOR;
    if ( propinfo->value_type != CSS_VT_COLOR )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
      errline = 96;
      elinks_internal( "assertion propinfo-&gt;value_type == CSS_VT_COLOR failed!" );
    }
  }
  scanner->tokens = scanner->tokens;
  success = 0;
  while ( scanner->tokens >= 1 && scanner->current < scanner->table[ scanner->tokens ].type && token->type != 125 && token->type != 123 && token->type != 59 )
  {
    if ( token->type != 44 )
    {
      if ( css_parse_color_value( &propinfo[0], value, &scanner[0] ) == 0 )
      {
        if ( scanner->tokens < 1 )
          break;
        token = scanner->current;
        if ( scanner->table[ scanner->tokens ].type <= scanner->current )
          continue;
      }
      else
      {
        success++;
        scanner->tokens = scanner->tokens;
      }
    }
    scanner->current++;
    if ( scanner->current + 32 < scanner->table[ scanner->tokens ].type )
      continue;
    else
    {
      scanner->info->scan( &scanner[0] );
      scanner->tokens = scanner->tokens;
    }
  }
  return success;
}
int css_parse_font_style_value( struct css_property_info *propinfo, union css_property_value *value, struct scanner *scanner )
{
  struct scanner_token *token;
  if ( scanner->tokens < 1 || scanner->table[ scanner->tokens ].type <= scanner->current )
    token = 0;
  if ( assert_failed == 0 )
  {
    assert_failed = propinfo->value_type != CSS_VT_FONT_ATTRIBUTE;
    if ( propinfo->value_type != CSS_VT_FONT_ATTRIBUTE )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
      errline = 127;
      elinks_internal( "assertion propinfo-&gt;value_type == CSS_VT_FONT_ATTRIBUTE failed!" );
      if ( token->type == 256 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
        errline = 131;
        if ( elinks_strlcasecmp( token->string, token->length, "italic", 6, 1 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
          errline = 132;
          if ( elinks_strlcasecmp( token->string, token->length, "oblique", 7, 1 ) )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
            errline = 135;
            if ( elinks_strlcasecmp( token->string, token->length, "underline", 9, 1 ) == 0 )
              value = value->none | 4;
              skip_scanner_tokens( &scanner[0], 256, 0 );
              return 0;
            else
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
              errline = 138;
              if ( elinks_strlcasecmp( token->string, token->length, "normal", 6, 1 ) == 0 )
                value->font_attribute.rem = value->font_attribute.rem | 2;
              else
              {
                return 0;
              }
            }
          }
        }
        value = value->none | 2;
      }
    }
  }
  if ( token->type == 256 )
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
    errline = 131;
  }
}
int css_parse_font_weight_value( struct css_property_info *propinfo, union css_property_value *value, struct scanner *scanner )
{
  int edx;
  struct scanner_token *token;
  unsigned char *nstring;
  int weight;
  if ( scanner->tokens < 1 || scanner->table[ scanner->tokens ].type <= scanner->current )
    token = 0;
  if ( assert_failed == 0 )
  {
    assert_failed = propinfo->value_type != CSS_VT_FONT_ATTRIBUTE;
    if ( propinfo->value_type != CSS_VT_FONT_ATTRIBUTE )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
      errline = 159;
      elinks_internal( "assertion propinfo-&gt;value_type == CSS_VT_FONT_ATTRIBUTE failed!" );
      if ( token->type == 256 )
        scanner = &scanner[0];
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
        errline = 162;
        if ( elinks_strlcasecmp( token->string, token->length, "bolder", 6, 1 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
          errline = 165;
          if ( elinks_strlcasecmp( token->string, token->length, "lighter", 7, 1 ) )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
            errline = 168;
            if ( elinks_strlcasecmp( token->string, token->length, "bold", 4, 1 ) )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
              errline = 171;
              if ( elinks_strlcasecmp( token->string, token->length, "normal", 6, 1 ) )
              {
                return 1;
              }
            }
          }
          value->font_attribute.rem = value->font_attribute.rem | 1;
          skip_scanner_tokens( &scanner[0], 256, 0 );
          return 1;
        }
        value = value->none | 1;
        skip_scanner_tokens( &scanner[0], 256, 0 );
        return 1;
      else
      {
        if ( token->type == 257 && token->string != nstring )
        {
          skip_scanner_tokens( &scanner[0], 257, 0 );
          if ( weight > 99 && ( weight > 900 || weight > 699 ) )
          {
            value = value->none | 1;
            return 1;
          }
          scanner = &scanner[0];
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  if ( token->type == 256 )
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
    errline = 162;
  }
  else
  {
  }
}
int css_parse_text_align_value( struct css_property_info *propinfo, union css_property_value *value, struct scanner *scanner )
{
  struct scanner_token *token;
  if ( scanner->tokens < 1 || scanner->table[ scanner->tokens ].type <= scanner->current )
    token = 0;
  if ( assert_failed == 0 )
  {
    assert_failed = propinfo->value_type != CSS_VT_TEXT_ALIGN;
    if ( propinfo->value_type != CSS_VT_TEXT_ALIGN )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
      errline = 208;
      elinks_internal( "assertion propinfo-&gt;value_type == CSS_VT_TEXT_ALIGN failed!" );
      if ( token->type == 256 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
        errline = 212;
        if ( elinks_strlcasecmp( token->string, token->length, "left", 4, 1 ) == 0 )
          value = 0;
        else
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
          errline = 215;
          if ( elinks_strlcasecmp( token->string, token->length, "right", 5, 1 ) == 0 )
            value = 2;
          else
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
            errline = 218;
            if ( elinks_strlcasecmp( token->string, token->length, "center", 6, 1 ) == 0 )
              value = 1;
            else
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
              errline = 221;
              if ( elinks_strlcasecmp( token->string, token->length, "justify", 7, 1 ) == 0 )
                value = 3;
              else
              {
                return 0;
              }
            }
          }
        }
        skip_scanner_tokens( &scanner[0], 256, 0 );
        return 0;
      }
    }
  }
  if ( token->type == 256 )
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
    errline = 212;
  }
}
int css_parse_text_decoration_value( struct css_property_info *propinfo, union css_property_value *value, struct scanner *scanner )
{
  struct scanner_token *token;
  if ( scanner->tokens < 1 || scanner->table[ scanner->tokens ].type <= scanner->current )
    token = 0;
  if ( assert_failed == 0 )
  {
    assert_failed = propinfo->value_type != CSS_VT_FONT_ATTRIBUTE;
    if ( propinfo->value_type != CSS_VT_FONT_ATTRIBUTE )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
      errline = 240;
      elinks_internal( "assertion propinfo-&gt;value_type == CSS_VT_FONT_ATTRIBUTE failed!" );
      if ( token->type == 256 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
        errline = 246;
        if ( elinks_strlcasecmp( token->string, token->length, "underline", 9, 1 ) == 0 )
          value = value->none | 4;
        else
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
          errline = 249;
          if ( elinks_strlcasecmp( token->string, token->length, "none", 4, 1 ) == 0 )
            value->font_attribute.rem = value->font_attribute.rem | 4;
          else
          {
            return 0;
          }
        }
        skip_scanner_tokens( &scanner[0], 256, 0 );
        return 0;
      }
    }
  }
  if ( token->type == 256 )
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
    errline = 246;
  }
}
int css_parse_white_space_value( struct css_property_info *propinfo, union css_property_value *value, struct scanner *scanner )
{
  struct scanner_token *token;
  if ( scanner->tokens < 1 || scanner->table[ scanner->tokens ].type <= scanner->current )
    token = 0;
  if ( assert_failed == 0 )
  {
    assert_failed = propinfo->value_type != CSS_VT_FONT_ATTRIBUTE;
    if ( propinfo->value_type != CSS_VT_FONT_ATTRIBUTE )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
      errline = 267;
      elinks_internal( "assertion propinfo-&gt;value_type == CSS_VT_FONT_ATTRIBUTE failed!" );
      if ( token->type == 256 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
        errline = 272;
        if ( elinks_strlcasecmp( token->string, token->length, "pre", 3, 1 ) == 0 )
          value = value->none | 32;
        else
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
          errline = 275;
          if ( elinks_strlcasecmp( token->string, token->length, "normal", 6, 1 ) == 0 )
            value->font_attribute.rem = value->font_attribute.rem | 32;
          else
          {
            return 0;
          }
        }
        skip_scanner_tokens( &scanner[0], 256, 0 );
        return 0;
      }
    }
  }
  if ( token->type == 256 )
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
    errline = 272;
  }
}
int css_parse_display_value( struct css_property_info *propinfo, union css_property_value *value, struct scanner *scanner )
{
  struct scanner_token *token;
  if ( scanner->tokens < 1 || scanner->table[ scanner->tokens ].type <= scanner->current )
    token = 0;
  if ( assert_failed == 0 )
  {
    assert_failed = propinfo->value_type != CSS_VT_DISPLAY;
    if ( propinfo->value_type != CSS_VT_DISPLAY )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
      errline = 293;
      elinks_internal( "assertion propinfo-&gt;value_type == CSS_VT_DISPLAY failed!" );
      if ( token->type == 256 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
        errline = 298;
        if ( elinks_strlcasecmp( token->string, token->length, "inline", 6, 1 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
          errline = 300;
          if ( elinks_strlcasecmp( token->string, token->length, "inline-block", 12, 1 ) )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
            errline = 302;
            if ( elinks_strlcasecmp( token->string, token->length, "block", 5, 1 ) == 0 )
              value = 1;
              skip_scanner_tokens( &scanner[0], 256, 0 );
              return 0;
            else
            {
              return 0;
            }
          }
        }
        value = 0;
        skip_scanner_tokens( &scanner[0], 256, 0 );
        return 0;
      }
    }
  }
  if ( token->type == 256 )
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
    errline = 298;
  }
}
int css_parse_value( struct css_property_info *propinfo, union css_property_value *value, struct scanner *scanner )
{
  struct scanner_token *token;
  if ( assert_failed == 0 )
  {
    if ( scanner[0] && value[0] && propinfo[0] )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
      errline = 320;
      elinks_internal( "assertion scanner && value && propinfo failed!" );
      if ( assert_failed )
        propinfo = &propinfo[0];
    }
    assert_failed = propinfo->parser == 0;
    if ( !(_Bool)( propinfo->parser != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/value.c";
      errline = 321;
      elinks_internal( "assertion propinfo-&gt;parser failed!" );
    }
  }
  if ( scanner->tokens >= 1 && scanner->current < scanner->table[ scanner->tokens ].type && token[0] )
  {
    scanner = &scanner[0];
    value = &value[0];
    propinfo = &propinfo[0];
    ;
  }
  return 0;
}
#if 0
#endif
