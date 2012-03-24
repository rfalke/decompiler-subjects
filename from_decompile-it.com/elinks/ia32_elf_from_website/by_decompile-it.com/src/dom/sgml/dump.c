#include "dump.c.h"
struct dom_stack_context_info sgml_file_dumper = { 0, { 0, &sgml_file_dumper_element_push, &sgml_file_dumper_attribute_push, &sgml_file_dumper_text_push, &sgml_file_dumper_cdata_section_push, &sgml_file_dumper_entity_ref_push, 0, &sgml_file_dumper_proc_instruction_push, &sgml_file_dumper_comment_push, 0, 0, 0, 0 }, { 0, &sgml_file_dumper_element_pop, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
enum dom_code  sgml_file_dumper_element_push( struct dom_stack *stack, struct dom_node *node, void *data )
{
  __fprintf_chk( &stack->current[0].data[0], 1, "&lt;%.*s", node->string.length, (char*)node->string.string );
  if ( node->data.document.children == 0 || node->data.document.children->size == 0 )
  {
    __fprintf_chk( &stack->current[0].data[0], 1, "&gt;" );
  }
  return DOM_CODE_OK;
}
enum dom_code  sgml_file_dumper_element_pop( struct dom_stack *stack, struct dom_node *node, void *data )
{
  __fprintf_chk( &stack->current[0].data[0], 1, "&lt;/%.*s&gt;", node->string.length, (char*)node->string.string );
  return DOM_CODE_OK;
}
enum dom_code  sgml_file_dumper_attribute_push( struct dom_stack *stack, struct dom_node *node, void *data )
{
  if ( node->parent[0] == 7 )
  {
    return DOM_CODE_OK;
  }
  __fprintf_chk( &stack->current[0].data[0], 1, " %.*s", node->string.length, (char*)node->string.string );
  if ( node->data.document.children )
  {
    if ( node->data.attribute.quoted )
      __fprintf_chk( &stack->current[0].data[0], 1, "=%c%.*s%c", node->data.attribute.quoted, node->data.document.document, (char*)node->data.document.children, node->data.attribute.quoted );
    else
    {
      __fprintf_chk( &stack->current[0].data[0], 1, "=\"%.*s\"", node->data.document.document, (char*)get_dom_node_next( &node[0] ) );
      if ( get_dom_node_next( &node[0] ) )
      {
        return DOM_CODE_OK;
      }
      __fprintf_chk( &stack->current[0].data[0], 1, "&gt;" );
      return DOM_CODE_OK;
    }
  }
  if ( get_dom_node_next( &node[0] ) == 0 )
  {
    __fprintf_chk( &stack->current[0].data[0], 1, "&gt;" );
  }
  return DOM_CODE_OK;
}
enum dom_code  sgml_file_dumper_proc_instruction_push( struct dom_stack *stack, struct dom_node *node, void *data )
{
  __fprintf_chk( &stack->current[0].data[0], 1, "&lt;?%.*s %.*s?&gt;", node->string.length, (char*)node->string.string, node->data.document.document, (char*)node->data.document.children );
  return DOM_CODE_OK;
}
enum dom_code  sgml_file_dumper_text_push( struct dom_stack *stack, struct dom_node *node, void *data )
{
  __fprintf_chk( &stack->current[0].data[0], 1, "%.*s", node->string.length, (char*)node->string.string );
  return DOM_CODE_OK;
}
enum dom_code  sgml_file_dumper_cdata_section_push( struct dom_stack *stack, struct dom_node *node, void *data )
{
  __fprintf_chk( &stack->current[0].data[0], 1, "&lt;![CDATA[%.*s]]&gt;", node->string.length, (char*)node->string.string );
  return DOM_CODE_OK;
}
enum dom_code  sgml_file_dumper_comment_push( struct dom_stack *stack, struct dom_node *node, void *data )
{
  __fprintf_chk( &stack->current[0].data[0], 1, "&lt;!--%.*s--&gt;", node->string.length, (char*)node->string.string );
  return DOM_CODE_OK;
}
enum dom_code  sgml_file_dumper_entity_ref_push( struct dom_stack *stack, struct dom_node *node, void *data )
{
  __fprintf_chk( &stack->current[0].data[0], 1, "&%.*s;", node->string.length, (char*)node->string.string );
  return DOM_CODE_OK;
}
struct dom_stack_context *add_sgml_file_dumper( struct dom_stack *stack, FILE *file )
{
  return add_dom_stack_context( stack, (void*)file, &sgml_file_dumper );
}
#if 0
#endif
