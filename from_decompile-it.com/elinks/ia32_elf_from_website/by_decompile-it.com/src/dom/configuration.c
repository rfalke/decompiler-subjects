#include "configuration.c.h"
static struct dom_stack_context_info dom_config_normalizer_context = { 0, { 0, 0, 0, &dom_normalize_text, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, &dom_normalize_node_end, &dom_normalize_node_end, &dom_normalize_node_end, &dom_normalize_node_end, &dom_normalize_node_end, &dom_normalize_node_end, &dom_normalize_node_end, &dom_normalize_node_end, &dom_normalize_node_end, &dom_normalize_node_end, &dom_normalize_node_end, &dom_normalize_node_end } };
static struct dom_config_info dom_config_info[7] = { { { 14, "cdata-sections" }
, 1 }
, { { 8, "comments" }
, 2 }
, { { 26, "element-content-whitespace" }
, 4 }
, { { 8, "entities" }
, 8 }
, { { 20, "normalize-characters" }
, 16 }
, { { 7, "unknown" }
, 32 }
, { { 20, "normalize-whitespace" }
, 64 }
 };
enum dom_code  normalize_text_node_whitespace( struct dom_node *node )
{
  int edx;
  unsigned char buf[256];
  int count, i;
  unsigned char *text = node->string.string;
  if ( assert_failed == 0 )
  {
    assert_failed = node->type != 3;
    if ( node->type != 3 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/configuration.c";
      errline = 23;
      elinks_internal( "assertion node-&gt;type == DOM_NODE_TEXT failed!" );
    }
  }
{
  int j;
  i = 0;
  count = 0;
  if ( node->string.length > 0 )
  {
    do
    {
      __ctype_b_loc(  );
      do
      {
        if ( count != 1 )
        {
          count = 1;
          buf[ 0 ] = 32;
        }
        i++;
      }
      while ( 0 + 1 <= 255 && i < node->string.length );
      if ( mem_realloc( 0, 0 + 1 + 0 + 1 ) == 0 )
      {
        if ( ebp_316 )
        {
          mem_free( ebp_316 );
          if ( 0 ^ 0 )
          {
            __stack_chk_fail(  );
          }
          break;
        }
      }
      else
      {
        memcpy( ebp_312 + edi, buf, esi );
      }
    }
    while ( i < node->string.length );
  }
  if ( ( *(char*)(node[0].type + 2) & 1 ) & 255 )
  {
    if ( node->string.string )
    {
      mem_free( (void*)node->string.string );
    }
    node->string.string = 0;
    node->string.length = 0;
  }
  node->string.string = ebp_316;
  if ( 0 + 1 + 0 == -1 )
    strlen( (char*)node->string.string );
  node->string.length = strlen( 32 );
  node->bits_at_0/*.3_3of4*/ = node->bits_at_0/*.3_3of4*/ | 1;
}
}
enum dom_code  append_node_text( struct dom_config *config, struct dom_node *node )
{
  int ecx;
  struct dom_node *prev = get_dom_node_prev( &node[0] );
  struct dom_string dest;
  if ( !get_dom_node_prev( &node[0] ) || prev->type != 3 )
  {
    if ( node->type != 3 )
    {
      dest.length = 0;
      prev = 0;
    }
    else
    {
      return DOM_CODE_ALLOC_ERR;
    }
  }
  else
  if ( ( prev->bits_at_0/*.3_3of4*/ & 1 ) & 255 )
    dest.string[0] = prev->string.string;
  else
  {
    if ( mem_realloc( 0, prev->string.length ) )
    {
      memcpy( mem_realloc( 0, prev->string.length ), prev->string.string, prev->string.length );
      dest.length = prev->string.length;
      prev->string.string = dest.string;
      if ( dest.length == -1 )
      {
        strlen( (char*)dest.string );
      }
      prev->string.length = strlen( (char*)dest.string );
      prev->bits_at_0/*.3_3of4*/ |= 1;
    }
    else
    {
      return DOM_CODE_ALLOC_ERR;
    }
  }
  if ( !0 )
  {
    if ( node->type >= 4 )
    {
      *ebp_52 = node->string.length;
      if ( mem_realloc( (void*)dest.string, node->string.length + 1 ) )
      {
        memcpy( dest.length + mem_realloc( (void*)dest.string, node->string.length + 1 ), node->string.string, node->string.length );
        dest.length += node->string.length;
        if ( prev[0].type == 0 )
        {
          node = 3;
          node->data.document.children = 0;
          node->data.document_type.subset = 0;
          node->data.attribute.quoted = 0;
          node->bits_at_0/*.3_3of4*/ |= 1;
          node->string.length = dest.length;
          node->string.string = dest.string;
          if ( !( ( config->flags & 64 ) & 255 ) || node->type != 4 )
          {
            return DOM_CODE_ALLOC_ERR;
          }
          normalize_text_node_whitespace( &node[0] );
          return DOM_CODE_OK;
        }
        else
        {
          prev->string.length = dest.length;
          prev->string.string = dest.string;
          if ( ( ( config->flags & 64 ) & 255 ) && node->type != 5 )
          {
            normalize_text_node_whitespace( &prev[0] );
            return DOM_CODE_ALLOC_ERR;
          }
          return DOM_CODE_FREE_NODE;
        }
      }
    }
    else
    if ( node->type == 5 )
    {
      *ebp_52 = node->string.length;
      if ( mem_realloc( (void*)dest.string, 0 + 2 ) )
      {
        dest.string[ dest.length ] = 38;
        *ebp_52 = ebp_52;
        if ( eax )
        {
          memcpy( edx + eax, ebp_36, ecx );
          if ( eax )
          {
            dest.length = ebp_44;
            *(char*)(ebp_40 + eax + 1) = 0;
            if ( prev[0].type == 0 )
            {
              node = 3;
              node->data.document.children = 0;
              node->data.document_type.subset = 0;
              node->data.attribute.quoted = 0;
              node->bits_at_0/*.3_3of4*/ |= 1;
              node->string.length = dest.length;
              node->string.string = dest.string;
            }
            else
              prev = &prev[0];
              prev->string.length = dest.length;
              prev->string.string = dest.string;
          }
        }
      }
    }
    if ( prev[0].type )
    {
      prev->string.length = 0;
      return DOM_CODE_ALLOC_ERR;
    }
    if ( edi )
    {
      mem_free( &edi );
      return DOM_CODE_ALLOC_ERR;
    }
    return DOM_CODE_ALLOC_ERR;
  }
  errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/configuration.c";
  errline = 114;
  elinks_internal( "Cannot append from node %d" );
  dest.length = dest.length;
}
enum dom_code  dom_normalize_node_end( struct dom_stack *stack, struct dom_node *node, void *data )
{
  int eax;
  struct dom_config *config;
  enum dom_code  code;
  config[0].flags = stack->current[0].data[0];
  switch ( node->type )
  {
  case 1:
  case 2:
    if ( node->data.document_type.subset )
    {
      return DOM_CODE_OK;
    }
    return DOM_CODE_FREE_NODE;
    break;
  case 7:
    break;
  case 3:
    if ( ( ( config->flags & 4 ) & 255 ) == 0 )
    {
      if ( ( ( node->data.document.children & 1 ) & 255 ) == 0 )
      {
      }
      else
      {
        return DOM_CODE_FREE_NODE;
      }
    }
    break;
  case 8:
    if ( ( config->flags & 2 ) & 255 )
    {
      code = DOM_CODE_OK;
      return DOM_CODE_OK;
    }
    return DOM_CODE_FREE_NODE;
    break;
  case 4:
    if ( ( config->flags & 1 ) & 255 )
    {
      code = DOM_CODE_OK;
      return DOM_CODE_OK;
    }
    break;
  case 5:
    if ( ( config->flags & 8 ) & 255 )
    {
      code = DOM_CODE_OK;
      return DOM_CODE_OK;
    }
    break;
  case 0:
  case 6:
    break;
  }
}
enum dom_code  dom_normalize_text( struct dom_stack *stack, struct dom_node *node, void *data )
{
  int eax;
  if ( ( stack->current->data & 64 ) & 255 )
  {
  }
  return DOM_CODE_OK;
}
struct dom_config *add_dom_config_normalizer( struct dom_stack *stack, struct dom_config *config, enum dom_config_flag  flags )
{
  config->error_handler = 0;
  config[0].flags = flags;
  return add_dom_stack_context( stack, (void*)config, &dom_config_normalizer_context ) == 0 ? &config[0] : 0;
}
enum dom_config_flag  parse_dom_config( unsigned char *flaglist, unsigned char separator )
{
  int eax;
  int edx;
  enum dom_config_flag  flags = 0;
  if ( flaglist )
  {
    unsigned char *end;
    int length;
    do
    {
      if ( separator && separator )
      {
      }
      else
      {
        end = 0;
        length = strlen( (char*)flaglist );
      }
      do
      {
        if ( c_strncasecmp( (char*)dom_config_info[1].name.string, (char*)flaglist, length <= (int)dom_config_info[1].name.length ? dom_config_info[1].name.length : length ) == 0 && length == dom_config_info[1].name.length )
          dom_config_info[ edi ].flag = dom_config_info[ 0 + 1 ].flag;
        else
        flags |= 0;
        if ( end )
        {
          flaglist = ebp_28 + 1;
          if ( ebp_28 + 1 )
          {
            do
            {
            }
            while ( ebp_28 + 1 );
            break;
          }
          else
            break;
        }
      }
      while ( 0 + 1 + 1 != 7 );
      flags |= 0;
    }
    while ( ebp_28 + 1 );
  }
  return flags;
}
#if 0
#endif
