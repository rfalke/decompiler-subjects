#include "stack.c.h"
static struct dom_stack_context_info dom_stack_walk_context_info = { 8, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
void init_dom_stack( struct dom_stack *stack, enum dom_stack_flag  flags )
{
  if ( assert_failed == 0 )
  {
    assert_failed = stack[0].states == 0;
    if ( !(_Bool)( stack[0].states != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.c";
      errline = 56;
      elinks_internal( "assertion stack failed!" );
    }
  }
  do
  {
    stack->states = 0;
  }
  while ( 0 + 4 + 4 < 24 );
  stack->flags = flags;
  return;
}
void done_dom_stack( struct dom_stack *stack )
{
  int eax;
  int i;
  if ( assert_failed == 0 )
  {
    assert_failed = stack[0].states == 0;
    if ( !(_Bool)( stack[0].states != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.c";
      errline = 68;
      elinks_internal( "assertion stack failed!" );
    }
  }
  if ( stack->contexts_size )
  {
    i = 0;
    stack = &stack[0];
  {
    do
    {
      void *p = (void*)stack->contexts[ i + 1 ]->state_objects;
      if ( stack->contexts[ 0 ]->state_objects )
      {
        mem_free( &((int*)p)[0] );
        stack->contexts[ edi ]->data = (void*)stack->contexts[ 0 ];
      }
      i++;
      mem_free( (void*)stack->contexts[ i + 1 ] );
    }
    while ( i < stack->contexts_size );
  }
  }
{
  void *p = (void*)&stack->contexts;
  if ( stack->contexts )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)stack->states;
  if ( stack->states )
    mem_free( &((int*)p)[0] );
  do
  {
    stack->states = 0;
  }
  while ( 0 + 4 + 4 < 24 );
  return;
}
}
}
struct dom_stack_context *add_dom_stack_context( struct dom_stack *stack, void *data, struct dom_stack_context_info *context_info )
{
  struct dom_stack_context *context;
  if ( ( ( stack->contexts_size + 7 ) & -8 ) < ( ( stack->contexts_size + 8 ) & -8 ) )
  {
    if ( mem_realloc( (void*)&stack->contexts, ( ( stack->contexts_size + 8 ) & -8 ) << 2 ) == 0 )
    {
      context[0].data = 0;
      return stack->contexts[ stack->contexts_size ];
    }
    stack->contexts = (struct dom_stack_context**)mem_realloc( (void*)&stack->contexts, ( ( ( stack->contexts_size + 8 ) & -8 ) << 2 ) << 2 );
    memset( stack->contexts + ( ( ( stack->contexts_size + 7 ) & -8 ) << 2 ), 0, ( ( ( stack->contexts_size + 8 ) & -8 ) << 2 ) - ( ( ( stack->contexts_size + 7 ) & -8 ) << 2 ) );
  }
  if ( stack->contexts )
  {
    if ( context[0].data )
    {
      stack->contexts[ stack->contexts_size ] = &context[0];
      stack->contexts_size++;
      context->info = context_info;
      context = &data[0];
    }
    return stack->contexts[ stack->contexts_size ];
  }
  else
  {
    context[0].data = 0;
    return stack->contexts[ stack->contexts_size ];
  }
}
void done_dom_stack_context( struct dom_stack *stack, struct dom_stack_context *context )
{
  int eax;
  int ecx;
  int edx;
  size_t i;
{
  void *p = (void*)context->state_objects;
  if ( context->state_objects )
    mem_free( &((int*)p)[0] );
  mem_free( context[0].data );
  if ( stack->contexts[ stack->contexts_size - 1 ] != context[0].data )
  {
    stack->contexts[0] = stack->contexts + ( ( stack->contexts_size << 2 ) - 8 );
    context = &context[0];
    do
    {
      i--;
    }
    while ( context[0].data != edx );
    stack->contexts_size--;
    if ( i < stack->contexts_size - 1 )
    {
      struct dom_stack_context **pos;
      pos[0] = pos[ *(int*)(stack + 12) >> 2 ];
      memmove( pos[ *(int*)(stack + 12) >> 2 ], pos[1], ( stack->contexts_size - i ) << 2 );
      return;
    }
    return;
  }
  else
  {
    stack->contexts_size--;
    return;
  }
}
}
int call_dom_stack_callbacks( struct dom_stack *stack, struct dom_stack_state *state, enum dom_stack_action  action )
{
  int free_node = 0;
  int i;
  if ( stack->contexts_size )
  {
    i = 0;
    do
    {
      if ( assert_failed == 0 )
      {
        struct dom_stack_context *context;
        dom_stack_callback_T callback;
        assert_failed = state->node > 12;
        if ( state->node > 12 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.c";
          errline = 142;
          elinks_internal( "assertion state-&gt;node-&gt;type &lt; DOM_NODES failed!" );
          if ( assert_failed )
            goto B5;
        }
        if ( callback )
        {
          void *data = 0;
          if ( context->info->object_size )
          {
            assert_failed = context->state_objects == 0;
            if ( !(_Bool)( context->state_objects != 0 ) )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.h";
              errline = 198;
              elinks_internal( "assertion context-&gt;state_objects failed!" );
            }
            data = &context->state_objects[ context->info->object_size * state->depth ];
          }
          stack->current = &context[0];
          stack->current = 0;
          free_node = callback( &state->node->type ) != DOM_CODE_FREE_NODE ? 1 : free_node;
        }
        i++;
      }
B5:      assert_failed = 0;
      free_node = 0;
      break;
    }
    while ( i + 1 < stack->contexts_size );
  }
  return free_node;
}
enum dom_code  push_dom_node( struct dom_stack *stack, struct dom_node *node )
{
  int ecx;
  int edx;
  struct dom_stack_state *state;
  int i;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( node == 0 ) | ( stack[0].states == 0 ) ) & 1;
    if ( ( ( node == 0 ) | ( stack[0].states == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.c";
      errline = 182;
      elinks_internal( "assertion stack && node failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    assert_failed = node[0].type - 1 > 11;
    if ( node[0].type - 1 > 11 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.c";
      errline = 183;
      elinks_internal( "assertion 0 &lt; node-&gt;type && node-&gt;type &lt; DOM_NODES failed!" );
    }
  }
  if ( stack->depth <= 4096 )
  {
    if ( ( ( stack->depth + 7 ) & -8 ) < ( ( stack->depth + 8 ) & -8 ) )
    {
      if ( eax )
      {
        stack = &eax[0];
        memset( stack[0].states + ( esi * 12 ), 0, edi - ( esi * 12 ) );
      }
      else
      {
        done_dom_node( node );
        return DOM_CODE_ALLOC_ERR;
      }
    }
    if ( stack->states == 0 )
    {
      done_dom_node( node );
      return DOM_CODE_ALLOC_ERR;
    }
    if ( stack->contexts_size == 0 )
    {
      state[0].node = stack->states + ( stack->depth * 12 );
      stack->states[ stack->depth ].depth = stack->depth;
      stack->states[ stack->depth ].node = node;
      stack->depth++;
      call_dom_stack_callbacks( &stack[0], stack->states + ( stack->depth * 12 ), DOM_STACK_PUSH );
      return DOM_CODE_OK;
    }
    i = 0;
  {
    do
    {
      struct dom_stack_context *context = stack->contexts[ i + 1 ];
      if ( context->info[0].object_size )
      {
        if ( ( ( stack->depth + 7 ) & -8 ) < ( ( stack->depth + 8 ) & -8 ) )
        {
          ebp_44 = context->info[0].object_size;
          *ebp_40 = ( stack->depth + 7 ) & -8;
          if ( mem_realloc( (void*)context->state_objects, context->info[0].object_size * ( ( stack->depth + 8 ) & -8 ) ) )
          {
            context->state_objects = (unsigned char*)mem_realloc( (void*)context->state_objects, context->info[0].object_size * ( ( stack->depth + 8 ) & -8 ) );
            memset( edi + 4 + ( edx * ecx ), 0, ebp_36 - ( edx * ecx ) );
          }
          else
          {
            done_dom_node( node );
            break;
          }
        }
        if ( context->state_objects[4] == 0 )
        {
          done_dom_node( node );
          break;
        }
        i++;
      }
      else
      {
        i++;
        if ( stack->contexts_size <= i + 1 )
          continue;
      }
    }
    while ( i + 1 < stack->contexts_size );
  }
  }
  else
  {
    return DOM_CODE_ALLOC_ERR;
  }
}
void pop_dom_node( struct dom_stack *stack )
{
  int eax;
  int ecx;
  int edx;
  struct dom_stack_state *state;
  int i;
  if ( assert_failed == 0 )
  {
    assert_failed = stack[0].states == 0;
    if ( !(_Bool)( stack[0].states != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.c";
      errline = 224;
      elinks_internal( "assertion stack failed!" );
    }
  }
  if ( stack && stack->depth )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = 0;
      stack->states = stack->states;
      stack->depth = stack->depth;
    }
    state = stack->states + ( ( ( stack->depth * 3 ) - 3 ) << 2 );
    if ( ( ( state->bits_at_8/*.1_1of4*/ & 1 ) & 255 ) == 0 )
    {
      if ( call_dom_stack_callbacks( &stack[0], &state[0], DOM_STACK_POP ) || ( ( stack->flags & 1 ) & 255 ) )
        done_dom_node( state->node );
      stack->depth--;
      if ( stack->contexts_size )
      {
        i = 0;
      {
        do
        {
          struct dom_stack_context *context = stack->contexts[ i ];
          if ( context->info[0].object_size )
          {
            eax = &context->info[0].object_size;
            if ( assert_failed == 0 )
            {
              assert_failed = context->state_objects == 0;
              if ( !(_Bool)( context->state_objects != 0 ) )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.h";
                errline = 198;
                elinks_internal( "assertion context-&gt;state_objects failed!" );
                *ebp_28 = context->info[0].object_size;
              }
              else
                context->info->object_size = context->info[0].object_size;
            }
            memset( context->state_objects + ( state->depth * context->info[0].object_size ), 0, context->info[0].object_size );
            i++;
          }
          else
          {
            i++;
            if ( i + 1 < stack->contexts_size )
              continue;
          }
        }
        while ( i < stack->contexts_size );
        state = &state[0];
      }
      }
      state = 0;
      state->depth = 0;
      state->bits_at_8 = 0;
      return;
    }
    else
    {
      return;
    }
  }
  else
  {
    return;
  }
}
void pop_dom_nodes( struct dom_stack *stack, enum dom_node_type  type, struct dom_string *string )
{
  struct dom_stack_state *state;
  if ( assert_failed == 0 )
  {
    assert_failed = stack[0].states == 0;
    if ( !(_Bool)( stack[0].states != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.c";
      errline = 259;
      elinks_internal( "assertion stack failed!" );
    }
  }
  if ( stack && stack->depth && state[0] )
  {
    stack = &stack[0];
    type = state[0].node[0].type;
  }
  return;
}
void pop_dom_state( struct dom_stack *stack, struct dom_stack_state *target )
{
  int eax;
  struct dom_stack_state *state;
  if ( assert_failed == 0 )
  {
    assert_failed = stack[0].states == 0;
    if ( !(_Bool)( stack[0].states != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.c";
      errline = 274;
      elinks_internal( "assertion stack failed!" );
    }
  }
  if ( target && stack && stack->depth )
  {
    while ( state = ( ( stack->depth * 12 ) - 12 - 12 ) + stack->states, state[0].node == 0 )
    {
    }
    if ( ( ( state->bits_at_8/*.1_1of4*/ & 1 ) & 255 ) == 0 )
    {
      pop_dom_node( &stack[0] );
      if ( state[0].node != target )
      {
      }
      else
      {
        return;
      }
    }
    else
    {
      return;
    }
    while ( state = ( ( stack->depth * 12 ) - 12 - 12 ) + stack->states, state[0].node == 0 )
    {
    }
  }
  else
  {
    return;
  }
}
struct dom_stack_state *search_dom_stack( struct dom_stack *stack, enum dom_node_type  type, struct dom_string *string )
{
  int edx;
  struct dom_stack_state *state;
  int pos = stack->depth - 1;
  if ( stack->depth - 1 >= 0 )
  {
    do
    {
      state[0].node = stack[0].states + ( ( stack->depth * 12 ) - 12 - 12 );
      if ( state[0] && type == parent->type && c_strncasecmp( (char*)parent->string.string, (char*)string->string, parent->string.length <= (int)string->length ? string->length : parent->string.length ) == 0 && parent->string.length == string->length )
        break;
      pos--;
    }
    while ( pos - 1 >= 0 );
  }
  state[0].node = 0;
  return &state[0];
}
void walk_dom_nodes( struct dom_stack *stack, struct dom_node *root )
{
  int eax;
  int ecx;
  int edx;
  struct dom_stack_context *context;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( root[0].type == 0 ) | ( stack[0].states == 0 ) ) & 1;
    if ( ( ( root[0].type == 0 ) | ( stack[0].states == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.c";
      errline = 364;
      elinks_internal( "assertion root && stack failed!" );
    }
  }
  if ( add_dom_stack_context( &stack[0], 0, &dom_stack_walk_context_info ) && push_dom_node( &stack[0], &root[0] ) == DOM_CODE_OK )
  {
    do
    {
      if ( stack->states )
      {
        do
        {
          if ( stack->depth )
          {
            struct dom_stack_state *state;
            struct dom_node_list *list;
            struct dom_node *node;
            if ( assert_failed == 0 )
            {
              assert_failed = 0;
              stack->states = stack->states;
              stack->depth = stack->depth;
            }
            state = stack->states + ( ( ( stack->depth * 3 ) - 3 ) << 2 );
            if ( context->info->object_size )
            {
              if ( assert_failed == 0 )
              {
                assert_failed = *(int*)(context[0].data + 4) == 0;
                if ( !(_Bool)( *(int*)(context[0].data + 4) != 0 ) )
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.h";
                  errline = 198;
                  elinks_internal( "assertion context-&gt;state_objects failed!" );
                  *ebp_32 = ebp_32;
                }
              }
              *(int*)(*(int*)(esi + 4) + ( state->depth * edx )) = ( state->depth * ebp_32 ) + *(int*)(context[0].data + 4);
            }
            list = *(int*)(*(int*)(context[0].data + 4) + ( state->depth * ebp_32 ));
            node = state->node;
            if ( state->node != 7 )
            {
              if ( ccdep1 < ccdep2 )
              {
                if ( state->node != 9 )
                {
                  if ( state->node != 10 )
                    list = &list[0];
                  else
                  {
                    if ( list[0].size == 0 )
                    {
                    }
                    if ( list[0].size != *(int*)(ebp_60 + 20) && *(int*)(ebp_60 + 16) && *(int*)(context->state_objects + ( state->depth * list[0].size ) + 4) < *(int*)(*(int*)(ebp_60 + 16)) )
                    {
                      if ( list[0].size != *(int*)(ebp_60 + 16) )
                        *ebp_28 = *(int*)(ebp_60 + 20);
                    }
                  }
                }
                else
                {
                  context = &context[0];
                  if ( list[0].size == 0 )
                  {
                    *(int*)(*(int*)(ebp_60 + 20)) = *(int*)(ebp_60 + 20);
                    context = &context[0];
                  }
                  else
                  {
                    if ( *(int*)(context->state_objects + ( state->depth * list[0].size ) + 4) < list->size )
                    {
                      struct dom_node *child = &child->string.length;
                      if ( eax == 0 )
                      {
                        do
                        {
                        }
                        while ( eax );
                        pop_dom_node( &stack[0] );
                      }
                    }
                  }
                }
              }
              else
              if ( state->node != 1 )
                list = &list[0];
              else
              {
                if ( list[0].size == 0 )
                {
                }
                if ( list[0].size != *(int*)(ebp_60 + 16) && *(int*)(ebp_60 + 20) && *(int*)(context->state_objects + ( state->depth * list[0].size ) + 4) < *(int*)(*(int*)(ebp_60 + 20)) )
                {
                  if ( list[0].size != *(int*)(ebp_60 + 20) )
                    context = &context[0];
                }
              }
              *ebp_28 = *(int*)(ebp_60 + 20);
            }
            else
            if ( list[0].size == 0 )
              *(int*)(*(int*)(ebp_60 + 28)) = *(int*)(ebp_60 + 28);
            if ( list[0].size != list[0].size )
            {
            }
            if ( context->state_objects + ( state->depth * list[0].size ) )
              list = &list[0];
          }
          else
            break;
        }
        while ( stack->states );
      }
      root = &context[0].data[0];
      stack = &stack[0];
    }
    while ( eax );
  }
  else
  {
    return;
  }
}
#if 0
#endif
