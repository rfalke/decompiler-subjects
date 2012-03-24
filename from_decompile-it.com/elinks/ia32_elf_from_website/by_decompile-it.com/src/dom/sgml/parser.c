#include "parser.c.h"
static struct dom_stack_context_info sgml_parsing_context_info = { 264, { 0, 0, 0, &sgml_parsing_push, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, &sgml_parsing_pop, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
static struct dom_stack_context_info sgml_parser_context_info = { 24, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
struct dom_string *add_to_dom_string( struct dom_string *string, unsigned char *str, size_t len )
{
  if ( mem_realloc( (void*)string->string, string + len + 1 ) == 0 )
  {
    string[0].length = 0;
  }
  string->string = (unsigned char*)mem_realloc( (void*)string->string, string + len + 1 );
  memcpy( string->string + string->length, &str[0], len );
  string = string->length + len;
  return &string[0];
}
enum dom_code  call_sgml_error_function( struct dom_stack *stack, struct dom_scanner_token *token )
{
  int eax;
  struct sgml_parser *parser = &stack->contexts[0]->data[0];
  unsigned int line;
  get_sgml_parser_line_number( &stack->contexts[0]->data[0] );
  if ( assert_failed == 0 )
  {
    assert_failed = parser->error_func == 0;
    if ( !(_Bool)( parser->error_func != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/sgml/parser.c";
      errline = 165;
      elinks_internal( "assertion parser-&gt;error_func failed!" );
      ebp_12 = parser->error_func( &parser[0], &token->string.dom_string, stack );
    }
  }
  return parser->error_func( &parser[0], &token->string.dom_string, get_sgml_parser_line_number( &stack->contexts[0]->data[0] ) );
}
enum dom_code  check_sgml_incomplete( struct dom_scanner *scanner, struct dom_scanner_token *start, struct dom_scanner_token *token )
{
  int edx;
  if ( token[0].type )
  {
    if ( token->type == 279 )
    {
      token->string.length += token->string.string - start->string.string;
      token->string.string = start->string.string;
      return DOM_CODE_INDEX_SIZE_ERR;
    }
  }
  else
  if ( (unsigned char)( __MOD(*(char*)(&scanner->bits_at_24),4) ) == 3 )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = scanner->end - start->string.string == 0;
      if ( !(_Bool)( scanner->end - start->string.string != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/sgml/parser.c";
        errline = 189;
        elinks_internal( "assertion left &gt; 0 failed!" );
        start = &start[0];
      }
    }
    scanner->current = &scanner->table;
    scanner->tokens = 1;
    scanner->table->type = 279;
    scanner->table->string.string = start->string.string;
    if ( scanner->end - start->string.string == -1 )
    {
    }
    scanner->table->string.length = scanner;
    return DOM_CODE_OK;
  }
{
  size_t left;
  return DOM_CODE_OK;
}
}
enum dom_code  parse_sgml_plain( struct dom_stack *stack, struct dom_scanner *scanner )
{
  int ecx;
#error unstructured control flow
}
enum dom_code  parse_sgml( struct sgml_parser *parser, unsigned char *buf, size_t bufsize, int complete )
{
  int eax;
  struct dom_string source;
  struct dom_node *node;
  source.length = bufsize;
  source.string = buf;
  if ( complete )
    parser->flags |= SGML_PARSER_COMPLETE;
  if ( parser->root == 0 )
  {
    if ( !init_dom_node_at( 0, DOM_NODE_DOCUMENT, &parser->uri, parser->flags & 4 ) || push_dom_node( &parser->stack, init_dom_node_at( 0, DOM_NODE_DOCUMENT, &parser->uri, parser->flags & 4 ) ) )
    {
      parser->root = 0;
      return parser->code;
    }
    parser->root = init_dom_node_at( 0, DOM_NODE_TEXT, &source, 0 );
    parser->stack.states[ parser->stack.depth - 1 ].bits_at_8/*.1_1of4*/ |= 1;
  }
  if ( !node[0].type || push_dom_node( &parser->parsing, &node[0] ) )
  {
    return parser->code;
  }
  return parser->code;
}
enum dom_code  sgml_parsing_push( struct dom_stack *stack, struct dom_node *node, void *data )
{
  int eax;
  int ecx;
  int edx;
  struct sgml_parser *parser = &stack->contexts[0]->data[0];
  struct sgml_parsing_state *parsing;
  int count_lines;
  int complete = ( stack->contexts[0]->state_objects >> 1 ) & 1;
  int incremental;
  int detect_errors;
  struct dom_string *string;
  struct dom_scanner_token *token;
  count_lines = stack->contexts[0]->state_objects & 1;
  incremental = ( stack->contexts[0]->state_objects >> 2 ) & 1;
  string = &node->string;
  detect_errors = ( stack->contexts[0]->state_objects >> 3 ) & 1;
  ((int*)data)[64] = stack->contexts[0][3].data;
  if ( stack->depth > 1 && ( ( parent->bits_at_260/*.1_1of4*/ & 1 ) & 255 ) )
  {
    if ( parent->incomplete.string && parent->incomplete )
    {
      ebp_92 = stack[0].states;
      *ebp_96 = detect_errors;
      if ( mem_realloc( (void*)parent->incomplete.string, node->string.length + parent->incomplete.length + 1 ) )
      {
        string = &((int*)data)[ -16 ];
        parent->incomplete.string = (unsigned char*)mem_realloc( (void*)parent->incomplete.string, node->string.length + parent->incomplete.length + 1 );
        memcpy( parent->incomplete.string + parent->incomplete.length, node->string.string, node->string.length );
        parent->incomplete.length += node->string.length;
        *(char*)(node->string.length + *(int*)(parent[0].scanner.string + 248) + *(int*)(parent[0].scanner.string + 252)) = 0;
        *(int*)(*(char*)(esi + 260)) = (int)parent->bits_at_260/*.1_1of4*/;
        ebp_92 = stack[0].states;
        *ebp_96 = detect_errors;
      }
      else
      {
        parser->code = DOM_CODE_ALLOC_ERR;
        return DOM_CODE_OK;
      }
    }
    parent->bits_at_260/*.1_1of4*/ = (int)parent->bits_at_260/*.1_1of4*/ & -2;
    pop_dom_node( stack );
    init_dom_scanner( &parent[0].scanner, &sgml_scanner_info, string, parent->scanner.state, count_lines, complete, incremental, detect_errors );
    ebp_92 = parent[0].scanner.string;
    if ( parent->scanner.state == 1 )
    {
      *(int*)(*(int*)(esi + 16)) = parent->scanner.tokens;
      do
      {
        if ( parent->scanner.tokens >= 1 && *(int*)(parent[0].scanner.string + 12) < parent[0].scanner.string + ( parent->scanner.tokens * 20 ) + 44 )
        {
          if ( assert_failed == 0 )
          {
            assert_failed = parent->scanner.current == 0;
            if ( !(_Bool)( parent->scanner.current != 0 ) )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/sgml/parser.c";
              errline = 209;
              elinks_internal( "assertion token failed!" );
            }
          }
          switch ( parent->scanner.current->type )
          {
          case 257:
            if ( parent->scanner.tokens >= 1 && *(int*)(parent[0].scanner.string + 12) < parent[0].scanner.string + ( parent->scanner.tokens * 20 ) + 44 )
            {
              parent->scanner.current++;
              if ( parent[0].scanner.string + ( parent->scanner.tokens * 20 ) + 44 <= parent->scanner.current + 40 )
              {
                ;
              }
            }
            break;
          default:
            if ( parent->scanner.tokens >= 1 )
            {
              if ( parent[0].scanner.string + ( parent->scanner.tokens * 20 ) + 44 <= *(int*)(parent[0].scanner.string + 12) )
                continue;
              else
              {
                parent->scanner.current++;
              }
            }
            break;
          case 256:
            if ( parent->scanner.tokens >= 1 && *(int*)(parent[0].scanner.string + 12) < parent[0].scanner.string + ( parent->scanner.tokens * 20 ) + 44 )
            {
              parent->scanner.current++;
              if ( parent->scanner.current + 40 < parent[0].scanner.string + ( parent->scanner.tokens * 20 ) + 44 )
              {
                if ( parent->scanner.current + 20 < parent[0].scanner.string + ( parent->scanner.tokens * 20 ) + 44 )
                {
                  if ( ( parent->scanner.current + 20 ) && parent->scanner.current[1].type == 61 )
                  {
                    if ( parent->scanner.tokens >= 1 && *(int*)(parent[0].scanner.string + 12) < parent[0].scanner.string + ( parent->scanner.tokens * 20 ) + 44 )
                    {
                      incremental = parent->scanner.current + 20;
                      parent->scanner.current++;
                      if ( parent->scanner.current + 40 < parent[0].scanner.string + ( parent->scanner.tokens * 20 ) + 44 )
                      {
                        if ( incremental < parent[0].scanner.string + ( parent->scanner.tokens * 20 ) + 44 )
                        {
                          if ( check_sgml_incomplete( &parent[0].scanner, ebp_44, &incremental ) == DOM_CODE_OK )
                          {
                            if ( incremental == 0 || incremental == 256 || incremental == 274 )
                            {
                              if ( assert_failed == 0 )
                                assert_failed = 0;
                              if ( incremental )
                              {
                                if ( init_dom_node_at( parser->stack.states[ *(int*)(parser->stack.states + 4) - 1 ].node, DOM_NODE_ATTRIBUTE, ebp_32, -1 ) )
                                {
                                  if ( ( *(char*)(init_dom_node_at( parser->stack.states[ *(int*)(parser->stack.states + 4) - 1 ].node, DOM_NODE_ATTRIBUTE, ebp_32, -1 ) + 2) & 1 ) & 255 )
                                  {
                                    if ( eax == 0 )
                                      done_dom_node( parser->stack.states[ *(int*)(parser->stack.states + 4) - 1 ].node );
                                  }
                                  else
                                  {
                                    *(int*)(edi + 20) = incremental;
                                    if ( incremental == -1 )
                                      strlen( &incremental );
                                    *(int*)(edi + 16) = eax;
                                  }
                                }
                              }
                              else
                              {
                              }
                              *(short*)(edi + 26) = *(short*)(( bsearch( 0, &parser->stack.contexts[0]->info->push[0][0]+c, (int)( parser->stack.contexts[0]->info->push[0][0] ), 12, &sgml_info_strcmp ) != 0 ? parser->stack.contexts[0]->info->push[0] : bsearch( 0, &parser->stack.contexts[0]->info->push[0][0]+c, (int)( parser->stack.contexts[0]->info->push[0][0] ), 12, &sgml_info_strcmp ) ) + 8);
                              *(char*)(edi + 29) = ( *(char*)(edi + 29) & -5 ) | ( ( *(short*)(( eax != 0 ? ebp_92 : eax ) + 10) & 1 ) << 2 );
                              *(char*)(edi + 29) = ( ( ( *(char*)(edi + 29) & -5 ) | ( ( *(short*)(( eax != 0 ? ebp_92 : eax ) + 10) & 1 ) << 2 ) ) & -9 ) | ( ( ( *(short*)(( eax != 0 ? ebp_92 : eax ) + 10) >> 1 ) & 1 ) << 3 );
                              if ( incremental && incremental == 258 )
                                *(char*)(edi + 28) = *(char*)(*(int*)(incremental + 16) - 1);
                              if ( push_dom_node( &parser->stack, 0 ) )
                              {
                              }
                              else
                              {
                                pop_dom_node( &parser->stack );
                                if ( incremental )
                                {
                                  if ( parent->scanner.tokens >= 1 )
                                  {
                                    if ( parent[0].scanner.string + ( parent->scanner.tokens * 20 ) + 44 <= *(int*)(parent[0].scanner.string + 12) )
                                      continue;
                                    else
                                    {
                                      parent->scanner.current++;
                                      if ( parent->scanner.current + 40 < parent[0].scanner.string + ( parent->scanner.tokens * 20 ) + 44 )
                                        continue;
                                      else
                                      {
                                        ;
                                      }
                                    }
                                  }
                                }
                                else
                                {
                                  *(int*)(*(int*)(esi + 16)) = parent->scanner.tokens;
                                }
                              }
                            }
                            else
                            {
                              if ( incremental == 258 )
                              {
                              }
                              else
                                incremental = 0;
                            }
                          }
                          else
                          {
                          }
                        }
                      }
                      else
                      {
                        ;
                      }
                    }
                    incremental = 0;
                  }
                  else
                  {
                    if ( check_sgml_incomplete( &parent[0].scanner, ebp_44 ) == DOM_CODE_OK )
                      incremental = 0;
                  }
                }
              }
              else
              {
                ;
              }
            }
            break;
          case 280:
            if ( call_sgml_error_function( &parser->stack, parent->scanner.current ) == DOM_CODE_OK )
            {
            }
            break;
          case 279:
            break;
          case 270:
          case 271:
          case 272:
          case 273:
            break;
          }
          parser->code = DOM_CODE_INCOMPLETE;
          parsing = &parent[0];
          if ( complete == 0 )
          {
            if ( parser->code == DOM_CODE_INCOMPLETE )
            {
              if ( parsing->scanner.tokens < 1 || parsing->scanner.table[ parsing->scanner.tokens ].type <= parsing->scanner.current )
                token = 0;
              if ( assert_failed == 0 )
              {
                if ( !token[0].type || token->type != 279 )
                {
                  assert_failed = 1;
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/sgml/parser.c";
                  errline = 539;
                  elinks_internal( "assertion token && token-&gt;type == SGML_TOKEN_INCOMPLETE failed!" );
                  token = &token[0];
                }
                else
                  assert_failed = 0;
              }
              complete = token->string.string;
              if ( mem_realloc( 0, token->string.length + 1 ) )
              {
                memcpy( mem_realloc( 0, token->string.length + 1 ), &complete, token->string.length );
                if ( parsing->incomplete.string )
                {
                  mem_free( (void*)parsing->incomplete.string );
                  ebp_92 = ebp_92;
                }
                parsing->incomplete.length = 0;
                parsing->incomplete.string = &edx;
                if ( token->string.length == -1 )
                {
                  break;
                }
              }
              else
              {
                parser->code = DOM_CODE_ALLOC_ERR;
                break;
              }
            }
            else
            {
              if ( parsing->scanner.state == 0 )
              {
                pop_dom_node( &parser->parsing.dom_stack );
                return DOM_CODE_OK;
              }
              if ( parsing->incomplete.string )
                mem_free( (void*)parsing->incomplete.string );
              parsing->bits_at_260/*.1_1of4*/ |= 1;
              parsing->incomplete.string = 0;
              parsing->incomplete.length = 0;
              break;
            }
          }
          else
          {
            pop_dom_node( &parser->parsing.dom_stack );
            return DOM_CODE_OK;
          }
        }
        parser->code = DOM_CODE_OK;
        parsing = &parent[0];
        parser->code = parse_sgml_plain( &parser->stack, &parent[0].scanner );
      }
      while ( parent[0].scanner.string + ( parent->scanner.tokens * 20 ) + 44 <= parent->scanner.current + 40 );
      ;
    }
    else
      parsing = &parent[0];
  }
  else
  {
    init_dom_scanner( &data[0], &sgml_scanner_info, string, 0, count_lines, complete, incremental, detect_errors );
  }
  parser->code = parse_sgml_plain( &parser->stack );
}
enum dom_code  sgml_parsing_pop( struct dom_stack *stack, struct dom_node *node, void *data )
{
  struct sgml_parser *parser = &stack->contexts[0]->data[0];
  if ( ( ( parser->flags & 2 ) & 255 ) && ((int*)data)[64] < parser->stack.depth )
  {
    data = &((int*)data)[0];
    do
    {
      parser->stack.states[ parser->stack.depth - 1 ].bits_at_8/*.1_1of4*/ &= 254;
      pop_dom_node( &parser->stack );
    }
    while ( ((int*)data)[64] < parser->stack.depth );
  }
  if ( ((int*)data)[63] )
  {
    mem_free( &((int*)data)[63] );
  }
  ((int*)data)[63] = 0;
  ((int*)data)[62] = 0;
  return DOM_CODE_OK;
}
unsigned int get_sgml_parser_line_number( struct sgml_parser *parser )
{
  int eax;
  int ecx;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = ( parser->flags & 1 ) ^ 1;
    if ( ( parser->flags & 1 ) ^ 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/sgml/parser.c";
      errline = 623;
      elinks_internal( "assertion parser-&gt;flags & SGML_PARSER_COUNT_LINES failed!" );
    }
  }
  if ( parser->parsing && parser->parsing.depth )
  {
    if ( assert_failed == 0 )
      assert_failed = 0;
    if ( parser->parsing.contexts[0]->info->object_size )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = *(int*)(edx + 4) == 0;
        if ( !(_Bool)( *(int*)(edx + 4) != 0 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.h";
          errline = 198;
          elinks_internal( "assertion context-&gt;state_objects failed!" );
          *ebp_28 = ebp_28;
          *ebp_32 = ebp_32;
        }
      }
    }
    if ( assert_failed == 0 )
    {
      if ( ( ( *(char*)(*(int*)(ebp_32 + 4) + ( ebp_28 * *(int*)(parser->parsing.states + ( ( ( parser->parsing.depth * 3 ) - 3 ) << 2 ) + 4) ) + 32) & 1 ) & 255 ) && *(int*)(*(int*)(ebp_32 + 4) + ( ebp_28 * *(int*)(parser->parsing.states + ( ( ( parser->parsing.depth * 3 ) - 3 ) << 2 ) + 4) ) + 36) )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/sgml/parser.c";
        errline = 631;
        elinks_internal( "assertion pstate-&gt;scanner.count_lines && pstate-&gt;scanner.lineno failed!" );
      }
    }
    if ( *(int*)(*(int*)(ebp_32 + 4) + ( ebp_28 * *(int*)(parser->parsing.states + ( ( ( parser->parsing.depth * 3 ) - 3 ) << 2 ) + 4) ) + 12) && *(int*)(*(int*)(ebp_32 + 4) + ( ebp_28 * *(int*)(parser->parsing.states + ( ( ( parser->parsing.depth * 3 ) - 3 ) << 2 ) + 4) ) + 12) < *(int*)(ebp_32 + 4) + ( ebp_28 * *(int*)(parser->parsing.states + ( ( ( parser->parsing.depth * 3 ) - 3 ) << 2 ) + 4) ) + 244 && *(int*)(*(int*)(*(int*)(ebp_32 + 4) + ( ebp_28 * *(int*)(parser->parsing.states + ( ( ( parser->parsing.depth * 3 ) - 3 ) << 2 ) + 4) ) + 12)) == 280 )
    {
      return *(int*)(eax + 8);
    }
    return *(int*)(*(int*)(ebp_32 + 4) + ( ebp_28 * *(int*)(parser->parsing.states + ( ( ( parser->parsing.depth * 3 ) - 3 ) << 2 ) + 4) ) + 36);
  }
  else
  {
  }
}
struct sgml_parser *init_sgml_parser( enum sgml_parser_type  type, enum sgml_document_type  doctype, struct dom_string *uri, enum sgml_parser_flag  flags )
{
  struct sgml_parser *parser;
  if ( mem_calloc( 1, 80 ) )
  {
    if ( mem_realloc( (void*)parser->uri.string, parser->uri.length + uri[0].length + 1 ) )
    {
      parser->uri.string = (unsigned char*)mem_realloc( (void*)parser->uri.string, parser->uri.length + uri[0].length + 1 );
      memcpy( parser->uri.string + parser->uri.length, uri->string, uri[0].length );
      parser->uri.length += uri[0].length;
      *(char*)(uri[0].length + *(int*)(parser[0].type + 12) + *(int*)(parser[0].type + 16)) = 0;
      parser->flags = ( flags & 8 ) != 0 ? flags : flags | 1;
      parser->type = type;
      parser->info = get_sgml_info( doctype );
      init_dom_stack( &parser->stack, type == SGML_PARSER_STREAM );
      add_dom_stack_context( &parser->stack, &parser[0].type, &sgml_parser_context_info );
      init_dom_stack( &parser->parsing, DOM_STACK_FLAG_FREE_NODES );
      add_dom_stack_context( &parser->parsing, &parser[0].type, &sgml_parsing_context_info );
      return &parser[0];
    }
    parser[0].type = SGML_PARSER_STREAM;
    mem_free( &parser[0].type );
    return &parser[0];
  }
  else
  {
    return &parser[0];
  }
}
void done_sgml_parser( struct sgml_parser *parser )
{
  if ( parser->parsing.states )
  {
    do
    {
      if ( parser->parsing.depth )
      {
        pop_dom_node( &parser->parsing );
      }
      else
        break;
    }
    while ( parser->parsing.states );
  }
  done_dom_stack( &parser->parsing );
  done_dom_stack( &parser->stack );
  if ( parser->uri.string )
    mem_free( (void*)parser->uri.string );
  parser->uri.string = 0;
  parser->uri.length = 0;
  parser = &parser[0];
}
#if 0
#endif
