#include "select.c.h"
static struct dom_stack_context_info dom_select_context_info = { 0, { 0, &dom_select_push_element, 0, &dom_select_push_text, &dom_select_push_text, &dom_select_push_text, 0, 0, 0, 0, 0, 0, 0 }, { 0, &dom_select_pop_element, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
static struct dom_stack_context_info dom_select_data_context_info = { 4, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
enum dom_code  parse_dom_select_nth_arg( struct dom_select_nth_match *nth, struct dom_scanner *scanner )
{
  int ecx;
  int edx;
  struct dom_scanner_token *token;
  int sign;
  int number;
  if ( scanner->tokens >= 1 && scanner->current < scanner->table[ scanner->tokens ].type )
  {
    token[0].type = scanner->current + 20;
    scanner->current++;
    if ( scanner->current + 40 < scanner->table[ scanner->tokens ].type )
    {
      if ( token[0].type < scanner->table[ scanner->tokens ].type && token[0] && token->type == 40 && scanner->tokens >= 1 && scanner->current < scanner->table[ scanner->tokens ].type )
      {
        token = scanner->current + 20;
        scanner->current++;
        if ( scanner->current + 40 < scanner->table[ scanner->tokens ].type )
        {
          if ( token[0].type < scanner->table[ scanner->tokens ].type && token[0] )
          {
            switch ( token->type )
            {
            case 257:
              if ( token->string && token->string.string[0] - 48 >= 9 )
              {
                do
                {
                  token->string.string = token->string.string[1] + 1;
                  *(int*)(( edi + ebp_32 ) - 48) = ( edi + ebp_32 ) - 48;
                  token->string.length--;
                  if ( !( token->string.length - 1 ) || *(char*)(skip_dom_scanner_tokens( &scanner[0], 41, 128 )) - 48 < 9 )
                  {
                    scanner = &scanner[0];
                    number = ecx;
                    if ( ecx < 0 )
                      break;
                  }
                  else
                }
                while ( token->string.string[0] - 48 <= ( token->string.string[0] - 48 ) * 10 );
                *ebp_12 = token[0].type;
                return DOM_CODE_VALUE_ERR;
              }
              else
                number = 0;
              token = get_next_dom_scanner_token( &scanner[0] );
              if ( get_next_dom_scanner_token( &scanner[0] ) )
                sign = 1;
                if ( get_next_dom_scanner_token( &scanner[0] ) == 256 )
                {
                  number = number;
                  if ( token->string.length == 1 && c_strncasecmp( (char*)token->string.string, "n", 1 ) == 0 )
                  {
                    nth->step = sign * sign * number;
                    if ( token[0].type )
                    {
                      if ( token->type == 43 )
                      {
                        if ( token[0].type )
                        {
                          if ( token->type == 257 )
                          {
                            while ( token->string && token->string.string[0] - 48 >= 9 )
                            {
                              if ( 0 * 10 < 0 )
                                continue;
                              token->string.string++;
                              token->string.length = esi - 1;
                            }
                            if ( ( token[0].type + token->string.string[0] ) - 48 >= 0 )
                              nth->index = sign * ( ( token[0].type + token->string.string[0] ) - 48 );
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  nth->step = 0;
                  nth->index = sign * number;
                }
              break;
            default:
              number = number;
              break;
            case 256:
              if ( token->string.length == 4 )
              {
                if ( c_strncasecmp( (char*)token->string.string, "even", 4 ) )
                {
                }
                else
                {
                  nth->step = 2;
                  nth->index = 0;
                }
              }
              if ( token->string.length != 3 || c_strncasecmp( (char*)token->string.string, "odd", 3 ) )
              {
                number = -1;
                sign = 1;
              }
              else
              {
                nth->step = 2;
                nth->index = 1;
              }
              break;
            case 45:
              token = get_next_dom_scanner_token( &scanner[0] );
              if ( get_next_dom_scanner_token( &scanner[0] ) && *(int*)(get_next_dom_scanner_token( &scanner[0] )) != 256 )
                continue;
              break;
            }
            if ( skip_dom_scanner_tokens( &scanner[0], 41, 128 ) )
            {
              *ebp_12 = token[0].type;
              return DOM_CODE_VALUE_ERR;
            }
          }
        }
        else
        {
          ;
        }
      }
    }
    else
    {
      scanner->info = scanner->info;
      ;
    }
  }
  *ebp_12 = token[0].type;
  return DOM_CODE_VALUE_ERR;
}
struct dom_scanner_token *get_next_dom_scanner_token( struct dom_scanner *scanner )
{
  int edx;
  if ( scanner->tokens >= 1 && scanner->current < scanner->table[ scanner->tokens ].type )
  {
    scanner->current++;
    if ( scanner->current + 40 < scanner->table[ scanner->tokens ].type )
    {
      if ( scanner->table[ scanner->tokens ].type <= scanner->current + 20 )
      {
      }
      else
      {
        return &scanner[0].string[0];
      }
    }
    else
    {
      eax = scanner->info->scan( &scanner[0] );
      return &scanner[0].string[0];
    }
  }
  return &scanner[0].string[0];
}
enum dom_code  parse_dom_select( struct dom_select *select, struct dom_stack *stack, struct dom_string *string )
{
  struct dom_scanner scanner;
  struct dom_select_node sel;
  init_dom_scanner( &scanner, &dom_css_scanner_info, &string[0], 0, 0, 1, 0, 0 );
  memset( &sel.node.type, 0, 52 );
  while ( scanner.tokens >= 1 && scanner.current < scanner.table->type + ( scanner.tokens * 20 ) )
    break;
}
struct dom_select *init_dom_select( enum dom_select_syntax  syntax, struct dom_string *string )
{
  int eax;
  int ecx;
  int edx;
  struct dom_select *select;
  struct dom_stack stack;
  enum dom_code  code;
  select[0].selector = (struct dom_select_node*)mem_calloc( 1, esi );
  init_dom_stack( &stack, DOM_STACK_FLAG_NONE );
  code = parse_dom_select( &select[0], &stack, string );
  done_dom_stack( &stack );
  if ( code )
  {
    select[0].selector = 0;
    done_dom_select( &select[0] );
    return &select[0];
  }
  return &select[0];
}
void done_dom_select( struct dom_select *select )
{
  if ( select[0].selector )
    done_dom_node( &select[0].selector[0].node );
  select = &select[0];
}
enum dom_code  dom_select_push_element( struct dom_stack *stack, struct dom_node *node, void *data )
{
  int eax;
  int ecx;
  int edx;
  struct dom_select_data *select_data = &stack->current[0].data[0];
  struct dom_stack_state *state;
  int pos;
  if ( select_data->stack.depth )
  {
    struct dom_select_node *selector;
    pos = 0;
    do
    {
      state[0].node = select_data->stack.states->node;
      if ( state[0].node )
      {
        state->node = state->node;
        if ( assert_failed == 0 )
        {
          if ( node == 0 || node[0].type != 1 )
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/select.c";
            errline = 855;
            elinks_internal( "assertion node && node-&gt;type == DOM_NODE_ELEMENT failed!" );
            *ebp_60 = state->node;
            select_data = &select_data[0];
          }
          else
            assert_failed = 0;
        }
        if ( ( ( (unsigned char)( *(int*)(state->node + 48) ) & 8 ) & 255 ) == 0 )
        {
          if ( dom_node_casecmp( ebp_60, node ) == 0 )
          {
            if ( ( *(int*)(ebp_60 + 48) & 7 ) == 0 )
            {
              if ( ( ( *(int*)(state->node + 48) & 16 ) & 255 ) && node->parent )
              {
                if ( node->parent == 9 && node->parent <= 1 )
                {
                }
              }
              if ( ( ( *(int*)(state->node + 48) & 192 ) & 255 ) == 0 )
              {
                if ( state->dom_stack_state )
                {
                  if ( assert_failed == 0 )
                  {
                    if ( *ebp_60 != 1 || node->type != 1 )
                    {
                      assert_failed = 1;
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/select.c";
                      errline = 728;
                      elinks_internal( "assertion base-&gt;node.type == DOM_NODE_ELEMENT && node-&gt;type == DOM_NODE_ELEMENT failed!" );
                    }
                    else
                    {
                      assert_failed = 0;
                      select_data = &select_data[0];
                    }
                  }
                  if ( node->data.document.children )
                  {
                    if ( state->dom_stack_state )
                    {
                      select_data = &select_data[0];
                      do
                      {
                        if ( *(int*)(ebp_28 + ( edx << 2 ) + 4) )
                        {
                          if ( *(char*)(esi + 48) < 0 )
                          {
                            if ( node->data.document.children->size )
                            {
                              do
                              {
                                if ( node->data.document.children->entries[ 0 ] && ( ( *(char*)(node->data.document.children->dom_node_list + 0) & 29 ) & 4 ) )
                                {
                                  if ( node->data.document.children->size <= 0 + 1 )
                                    select_data = &select_data[0];
                                }
                                else
                              }
                              while ( node->data.document.children->size <= 0 + 1 + 1 );
                            }
                          }
                          else
                          {
                            if ( eax == 0 )
                              continue;
                          }
                          if ( ( ( *(char*)(esi + 48) & 1 ) & 255 ) == 0 )
                          {
                            if ( assert_failed == 0 )
                            {
                              assert_failed = *(int*)(esi + 16) == 0;
                              if ( !(_Bool)( *(int*)(esi + 16) != 0 ) )
                              {
                                errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/select.c";
                                errline = 623;
                                elinks_internal( "assertion selvalue-&gt;length failed!" );
                              }
                            }
                            if ( *(int*)(esi + 16) <= *(int*)(ebx + 16) )
                            {
                              if ( ( (unsigned char)( *(int*)(esi + 48) ) & 2 ) & 255 )
                              {
                                if ( eax == 0 )
                                {
                                  if ( !(_Bool)( *(int*)(ebx + 16) - *(int*)(esi + 16) != 0 ) )
                                  {
                                    if ( *ebp_28 <= edx + 1 )
                                    {
                                      *ebp_48 = ebp_48;
                                      select_data = &select_data[0];
                                    }
                                  }
                                }
                              }
                              else
                              {
                                if ( ( ebp_44 & 16 ) & 255 )
                                {
                                  if ( ecx != -1 )
                                  {
                                    if ( eax == 0 )
                                    {
                                    }
                                  }
                                }
                                else
                                {
                                  if ( select_data->stack.contexts_size != -1 )
                                    continue;
                                }
                                *ebp_64 = select_data->stack.contexts_size;
                                *ebp_60 = ebp_60;
                              }
                              if ( !(_Bool)( eax != 0 ) )
                              {
                              }
                            }
                          }
                        }
                      }
                      while ( *ebp_28 <= edx + 1 );
                      *ebp_48 = ebp_48;
                      select_data = &select_data[0];
                    }
                  }
                }
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/select.c";
                errline = 918;
                elinks_wdebug( "Matched element: %.*s." );
                if ( *(int*)(ebp_60 + 16) && ecx )
                {
                  do
                  {
                    if ( *(int*)(ecx + ( eax << 2 ) + 4) && edx == 1 )
                    {
                      push_dom_node( &select_data[0].stack, &edx );
                      pos++;
                      if ( pos < select_data->stack.depth )
                        continue;
                    }
                    else
                    {
                    }
                  }
                  while ( eax + 1 < ebx );
                }
              }
            }
          }
        }
        else
        if ( ( state->dom_stack_state & 7 ) == 0 )
          continue;
        if ( assert_failed == 0 )
          assert_failed = 0;
        if ( node->parent )
        {
          if ( ( *(int*)(ebp_60 + 48) & 7 ) != 1 )
          {
            if ( get_dom_node_list_index( node->parent, node ) < 1 )
              goto B4;
          }
          else
          {
          }
          if ( select_data->stack.depth - 1 >= 0 )
          {
            do
            {
              if ( ( select_data->stack.states + ( ( select_data->stack.depth * 12 ) - 12 - 12 ) ) && *(int*)(select_data->stack.depth) == *(int*)(ebp_60 + 12) )
              {
                if ( select_data->stack.contexts[0]->info->object_size )
                {
                  if ( assert_failed == 0 )
                  {
                    assert_failed = *(int*)(select_data->stack.contexts[0] + 4) == 0;
                    if ( !(_Bool)( *(int*)(select_data->stack.contexts[0] + 4) != 0 ) )
                    {
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.h";
                      errline = 198;
                      elinks_internal( "assertion context-&gt;state_objects failed!" );
                      ebp_64 = ebp_64;
                    }
                  }
                  *(int*)(*(int*)(ebp_28 + 4) + ( ebp_36 * *(int*)(eax + 4) )) = ( select_data->stack.contexts[0]->info->object_size * *(int*)(ebp_64 + 4) ) + *(int*)(select_data->stack.contexts[0] + 4);
                }
                if ( ( *(int*)(ebp_60 + 48) & 7 ) == 1 )
                {
                  if ( node->parent == ecx )
                    goto B96;
                }
                else
                if ( node->parent == *(int*)(ebp_36 + 12) )
                {
                  get_dom_node_list_index( ebp_28, ebp_36 );
                  if ( ( *(int*)(ebp_60 + 48) & 7 ) == 2 )
                  {
                    if ( ebp_44 == eax + 1 )
                      goto B96;
                  }
                  else
                  if ( eax < ebp_44 )
                    goto B96;
                }
B96:                *(int*)(edx + 48) = *(int*)(ebp_60 + 48);
              }
            }
            while ( edi - 1 >= 0 );
          }
          else
          {
            pos++;
          }
        }
      }
B4:      select_data->stack.depth = select_data->stack.depth;
    }
    while ( pos < select_data->stack.depth );
  }
  return DOM_CODE_OK;
}
enum dom_code  dom_select_pop_element( struct dom_stack *stack, struct dom_node *node, void *data )
{
  int eax;
  int ecx;
  int edx;
  int ebp_44;
  struct dom_select_data *select_data = &stack->current[0].data[0];
  struct dom_stack_state *state;
  int index = stack->current->state_objects[ -1 ];
  if ( select_data->stack.depth - 1 >= 0 )
  {
    do
    {
      state = select_data->stack.states + ( ( select_data->stack.depth * 12 ) - 12 - 12 );
      if ( select_data->stack.states + ( ( select_data->stack.depth * 12 ) - 12 ) )
      {
        if ( select_data->stack.contexts[0]->info->object_size )
        {
          if ( assert_failed == 0 )
          {
            assert_failed = *(int*)(select_data->stack.contexts[0] + 4) == 0;
            if ( !(_Bool)( *(int*)(select_data->stack.contexts[0] + 4) != 0 ) )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.h";
              errline = 198;
              elinks_internal( "assertion context-&gt;state_objects failed!" );
              *ebp_32 = select_data->stack.contexts[0]->info->object_size;
              *ebp_36 = select_data->stack.contexts[0];
            }
          }
          state->node = state->node;
          *(int*)(*(int*)(edx + 4) + ( state->depth * ecx )) = ( state->depth * ebp_32 ) + *(int*)(ebp_36 + 4);
        }
        if ( node == *(int*)(( state->depth * ebp_32 ) + *(int*)(ebp_36 + 4)) )
        {
          pop_dom_state( &select_data[0].stack, state );
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/select.c";
          errline = 946;
          elinks_wdebug( "Remove element." );
        }
      }
      ebp_44--;
    }
    while ( ebp_44 - 1 >= 0 );
    return DOM_CODE_OK;
  }
  else
  {
    return DOM_CODE_OK;
  }
}
enum dom_code  dom_select_push_text( struct dom_stack *stack, struct dom_node *node, void *data )
{
  int edx;
  struct dom_select_data *select_data = &stack->current[0].data[0];
  if ( assert_failed == 0 )
    assert_failed = 0;
  if ( select_data->stack.states[ *(int*)(select_data[0].stack.states + 4) - 1 ].node->data && select_data->stack.states[ *(int*)(select_data[0].stack.states + 4) - 1 ].node->data.document.document )
  {
    node = &node[0];
    do
    {
      if ( select_data->stack.states[ *(int*)(select_data[0].stack.states + 4) - 1 ].node->data.document.document && 0 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/select.c";
        errline = 966;
        elinks_wdebug( "Text node: %d chars" );
        if ( node->type - 3 < 2 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/select.c";
          errline = 979;
          elinks_error( "Unhandled type" );
          return DOM_CODE_OK;
        }
        break;
      }
      else
    }
    while ( eax + 1 < ebx );
  }
  errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/select.c";
  errline = 966;
  elinks_wdebug( "Text node: %d chars" );
  return DOM_CODE_OK;
}
struct dom_node_list *select_dom_nodes( struct dom_select *select, struct dom_node *root )
{
  struct dom_select_data select_data;
  struct dom_stack stack;
  do
  {
    select_data.stack.states->node = 0;
  }
  while ( 0 + 4 + 4 < 32 );
  select_data.select = &select[0];
  init_dom_stack( &stack, DOM_STACK_FLAG_NONE );
  add_dom_stack_context( &stack, (void*)select_data.stack.states, &dom_select_context_info );
  init_dom_stack( &select_data.stack, DOM_STACK_FLAG_NONE );
  add_dom_stack_context( &select_data.stack, (void*)select_data.stack.states, &dom_select_data_context_info );
  if ( push_dom_node( &select_data.stack, (int)( &select->selector->node ) ) == DOM_CODE_OK )
  {
    select_data.stack.states[ select_data.stack.depth - 1 ].bits_at_8/*.1_1of4*/ |= 1;
    walk_dom_nodes( &stack, root );
  }
  done_dom_stack( &select_data.stack );
  done_dom_stack( &stack );
  return select_data.list;
}
#if 0
#endif
