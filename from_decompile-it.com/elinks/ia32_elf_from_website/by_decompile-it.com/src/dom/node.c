#include "node.c.h"
struct dom_node_list *add_to_dom_node_list( struct dom_node_list **list_ptr, struct dom_node *node, int position )
{
  int eax;
  int ecx;
  int edx;
  struct dom_node_list *list;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( node == 0 ) | ( list_ptr[0] == 0 ) ) & 1;
    if ( ( ( node == 0 ) | ( list_ptr[0] == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
      errline = 61;
      elinks_internal( "assertion list_ptr && node failed!" );
      list[0].size = list_ptr[0];
      if ( list_ptr[0] )
      {
        if ( ( ( list->size + 7 ) & -8 ) < ( list[1].size & -8 ) )
        {
          *ebp_36 = 0;
          list[0].size = mem_realloc( ( 36 + 1 ) * 4, 0 );
          if ( mem_realloc( ( 36 + 1 ) * 4, 0 ) )
          {
            if ( edx == 0 )
              eax = 0;
            if ( list->entries[ 0 ] & 1 )
            {
              list->entries[ 31 ] = 0;
              list->entries[ 31 ] += 0;
            }
            if ( ( &list->entries[ 0 ]->type & 2 ) & 255 )
              list->entries[ 31 ] = 0;
            do
            {
            }
            while ( eax + 4 < ebp_28 );
            edx += eax;
            if ( edi & 2 )
              edx = 0;
            if ( edi & 1 )
              edx = 0;
            list_ptr[0] = &list[0];
            if ( assert_failed == 0 )
            {
              if ( position >= 0 && list->size < position )
              {
                assert_failed = 1;
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
                errline = 67;
                elinks_internal( "assertion position &lt; 0 || position &lt;= list-&gt;size failed: position out of bound %d &gt; %zu" );
                if ( position < list->size )
                {
                  struct dom_node **offset;
                  offset[0] = list->entries[ position ];
                  memmove( list->entries[ ( position - 1 ) + 2 ], list->entries[ position ], ( list->size - position ) << 2 );
                  list->size = list->size;
                  list = list->size + 1;
                  list->entries[0] = node;
                  return &list[0];
                }
              }
              else
                assert_failed = 0;
            }
            if ( position < 0 )
            {
              position = list->size;
              list->size = list->size;
            }
            else
            {
            }
          }
          else
          {
            return &list[0];
          }
        }
        else
        {
        }
      }
      else
      {
        *ebp_36 = 0;
        list[0].size = mem_realloc( ( 36 + 1 ) * 4, 0 );
      }
    }
  }
  list[0].size = list_ptr[0];
  if ( list_ptr[0] )
  {
  }
  else
  {
    *ebp_36 = 0;
    list[0].size = mem_realloc( ( 36 + 1 ) * 4, 0 );
  }
}
void del_from_dom_node_list( struct dom_node_list *list, struct dom_node *node )
{
  int ecx;
  struct dom_node *entry;
  if ( list[0] && list )
  {
    while ( 1 )
    {
      entry = *(int*)(ebp_28 + ( ebx << 2 ));
      if ( *(int*)(ebp_28 + ( ebx << 2 )) == 0 || node[0].type != entry[0].type )
      {
        size_t successors;
        if ( edi <= ebx )
          break;
      }
      else
      {
        if ( ebx != eax )
        {
          memmove( &edx, &esi, eax << 2 );
        }
        list->size--;
        if ( edi - 1 <= ebx )
        {
          break;
        }
      }
    }
  }
  return;
}
void done_dom_node_list( struct dom_node_list *list )
{
  struct dom_node *node;
  int i;
  if ( assert_failed == 0 )
  {
    assert_failed = list[0].size == 0;
    if ( !(_Bool)( list[0].size != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
      errline = 113;
      elinks_internal( "assertion list failed!" );
    }
  }
  if ( list->size )
  {
    i = 0;
    list = &list[0];
    do
    {
      node = list->entries[ i ];
      if ( list->entries[ i ] )
        done_dom_node_data(  );
      i++;
    }
    while ( i + 1 < list->size );
    list = &list[0];
  }
  else
  {
    list = &list[0];
  }
}
int dom_node_casecmp( struct dom_node *node1, struct dom_node *node2 )
{
  int eax;
  if ( node2[0].type != node1[0].type || ( node1[0].type != 1 && node1[0].type != 2 ) || ( node1->data.document_type.subset & 65535 ) == 0 || ( node2->data.document_type.subset & 65535 ) == 0 )
  {
    if ( c_strncasecmp( (char*)node1->string.string, (char*)node2->string.string, node1->string.length <= node2->string.length ? node2->string.length : node1->string.length ) == 0 )
    {
      return node1->string.length - node2->string.length;
    }
  }
  else
  {
  }
}
int get_dom_node_map_index( struct dom_node_list *list, struct dom_node *node )
{
  int edx;
  struct dom_node *match;
  if ( assert_failed == 0 )
  {
    assert_failed = list[0].size == 0;
    if ( !(_Bool)( list[0].size != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
      errline = 171;
      elinks_internal( "assertion has_bsearch_node(search-&gt;from, search-&gt;to) failed!" );
    }
  }
  while ( 1 )
  {
    if ( assert_failed == 0 )
    {
      if ( ( 0 ? -1 : ( 0 ? -1 : esi ) + ( ( ( (unsigned char)( ccdep1 < ccdep2 ) ? edi : esi ) - ( 0 ? -1 : esi ) ) / 2 ) ) + ( ( ( (unsigned char)( ccdep1 < ccdep2 ) ? edi : ( 0 ? -1 : esi ) + ( ( ( (unsigned char)( ccdep1 < ccdep2 ) ? edi : esi ) - ( 0 ? -1 : esi ) ) / 2 ) ) - ( 0 ? -1 : ( 0 ? -1 : esi ) + ( ( ( (unsigned char)( ccdep1 < ccdep2 ) ? edi : esi ) - ( 0 ? -1 : esi ) ) / 2 ) ) ) / 2 ) < 0 || list[0].size <= ( 0 ? -1 : ( 0 ? -1 : esi ) + ( ( ( (unsigned char)( ccdep1 < ccdep2 ) ? edi : esi ) - ( 0 ? -1 : esi ) ) / 2 ) ) + ( ( ( (unsigned char)( ccdep1 < ccdep2 ) ? edi : ( 0 ? -1 : esi ) + ( ( ( (unsigned char)( ccdep1 < ccdep2 ) ? edi : esi ) - ( 0 ? -1 : esi ) ) / 2 ) ) - ( 0 ? -1 : ( 0 ? -1 : esi ) + ( ( ( (unsigned char)( ccdep1 < ccdep2 ) ? edi : esi ) - ( 0 ? -1 : esi ) ) / 2 ) ) ) / 2 ) )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
        errline = 162;
        elinks_internal( "assertion 0 &lt;= pos && pos &lt; list-&gt;size failed: pos %d" );
      }
      else
        assert_failed = 0;
    }
    match = list->entries[ ebx + ( ( list[0].size - ebx ) / 2 ) ];
    if ( dom_node_casecmp( node, list->entries[ ebx + ( ( list[0].size - ebx ) / 2 ) ] ) )
    {
      if ( ( (unsigned char)( ccdep1 < ccdep2 ) ? edi : esi ) <= ( 0 ? ebx : esi ) + 1 )
        break;
      assert_failed = assert_failed;
    }
    else
      break;
  }
  return match[0].type == 0 ? ( 0 ? -1 : esi ) + ( ( ( (unsigned char)( ccdep1 < ccdep2 ) ? edi : esi ) - ( 0 ? -1 : esi ) ) / 2 ) : edi;
}
struct dom_node *get_dom_node_map_entry( struct dom_node_list *list, enum dom_node_type  type, uint16_t subtype, struct dom_string *name )
{
  int ecx;
  int edx;
  struct dom_node node;
  do
  {
    *(int*)(( ebp_2147483632 + 0 ) - 56) = 0;
  }
  while ( 0 + 4 + 4 < 32 );
  node.type = type;
  node.string.length = name[0].length;
  node.string.string = name->string;
  if ( subtype & 65535 )
  {
    switch ( type )
    {
    case DOM_NODE_ELEMENT:
    case DOM_NODE_ATTRIBUTE:
      node.data.document_type.subset = subtype;
      break;
    case DOM_NODE_PROCESSING_INSTRUCTION:
      node.data.document_type.subset = subtype;
      break;
    }
  }
  if ( assert_failed == 0 )
  {
    assert_failed = list[0].size == 0;
    if ( !(_Bool)( list[0].size != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
      errline = 171;
      elinks_internal( "assertion has_bsearch_node(search-&gt;from, search-&gt;to) failed!" );
    }
  }
  while ( 1 )
  {
    if ( assert_failed == 0 )
    {
      if ( ( 0 ? -1 : type ) + ( ( ( (unsigned char)( ccdep1 < ccdep2 ) ? edi : esi ) - ( 0 ? -1 : type ) ) / 2 ) < 0 || list[0].size <= ( 0 ? -1 : type ) + ( ( ( (unsigned char)( ccdep1 < ccdep2 ) ? edi : esi ) - ( 0 ? -1 : type ) ) / 2 ) )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
        errline = 162;
        elinks_internal( "assertion 0 &lt;= pos && pos &lt; list-&gt;size failed: pos %d" );
      }
      else
        assert_failed = 0;
    }
    if ( dom_node_casecmp( &node, list->entries[ name[0].length + ( ( list[0].size - name[0].length ) / 2 ) ] ) )
    {
      if ( ( (unsigned char)( ccdep1 < ccdep2 ) ? edi : esi ) <= ( 0 ? ebx : esi ) + 1 )
      {
        break;
      }
      assert_failed = assert_failed;
    }
    else
      break;
  }
  return 0;
}
int get_dom_node_list_pos( struct dom_node_list *list, struct dom_node *node )
{
  int edx;
  struct dom_node *entry;
  int i;
  if ( assert_failed == 0 )
  {
    assert_failed = list[0].size == 0;
    if ( !(_Bool)( list[0].size != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
      errline = 235;
      elinks_internal( "assertion list failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( list->size )
    {
      i = 0;
      do
      {
        entry = list->entries[ i ];
        if ( list->entries[ i ] && node[0].type == entry[0].type )
          break;
        i++;
      }
      while ( i + 1 < list->size );
    }
    return -1;
  }
B2:  assert_failed = 0;
  i = -1;
  return -1;
}
int get_dom_node_list_index( struct dom_node *parent, struct dom_node *node )
{
  int eax;
  struct dom_node_list **list;
  if ( parent[0].type != 7 )
  {
    if ( ccdep1 < ccdep2 )
    {
      if ( parent[0].type != 9 )
      {
        if ( parent[0].type != 10 )
        {
          return -1;
        }
        if ( node[0].type != 6 )
        {
          if ( node[0].type != 12 )
          {
            return -1;
          }
        }
        else
          list[0] = &parent->data.document.document;
      }
      list[0] = parent + 20;
    }
    else
    if ( parent[0].type != 1 )
    {
      return -1;
    }
    list[0] = node[0].type == 2 ? parent + 16 : parent + 20;
  }
  else
  if ( node[0].type != 2 )
  {
    return -1;
  }
  list[0] = &parent->data.attribute.quoted;
  if ( list[0] && list[0] )
  {
  }
  return -1;
}
struct dom_node *get_dom_node_prev( struct dom_node *node )
{
  int eax;
  int ecx;
  int edx;
  struct dom_node_list **list;
  int index;
  if ( assert_failed == 0 )
  {
    assert_failed = node->parent == 0;
    if ( !(_Bool)( node->parent != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
      errline = 260;
      elinks_internal( "assertion node-&gt;parent failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    if ( node->parent[0] != 7 )
    {
      if ( ccdep1 < ccdep2 )
      {
        if ( node->parent[0] != 9 )
        {
          node = &node[0];
          if ( node->parent[0] != 10 )
          {
            return 0;
          }
          if ( node->type != 6 )
          {
            node = &node[0];
            if ( node->type != 12 )
              continue;
          }
          else
            list[0] = node->parent + 16;
        }
        list[0] = node->parent + 20;
      }
      else
      if ( node->parent[0] != 1 )
        continue;
      list[0] = node->type == 2 ? node->parent + 16 : node->parent + 20;
    }
    else
    {
      node = &node[0];
      if ( node->type != 2 )
        continue;
      list[0] = node->parent + 28;
    }
    if ( list[0] )
    {
      assert_failed = list[0] == 0;
      if ( !(_Bool)( list[0] != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
        errline = 268;
        elinks_internal( "assertion *list failed!" );
        if ( assert_failed )
          node = &node[0];
      }
      get_dom_node_list_pos( list[0], &node[0] );
      if ( assert_failed == 0 )
      {
        assert_failed = index >> 31;
        if ( index >> 31 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
          errline = 272;
          elinks_internal( "assertion index &gt;= 0 failed!" );
          if ( assert_failed )
            goto B2;
        }
        if ( index >= 1 )
        {
        }
      }
    }
  }
B2:  assert_failed = 0;
}
struct dom_node *get_dom_node_next( struct dom_node *node )
{
  int eax;
  int ecx;
  int edx;
  struct dom_node_list **list;
  int index;
  if ( assert_failed == 0 )
  {
    assert_failed = node->parent == 0;
    if ( !(_Bool)( node->parent != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
      errline = 287;
      elinks_internal( "assertion node-&gt;parent failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    if ( node->parent[0] != 7 )
    {
      if ( ccdep1 < ccdep2 )
      {
        if ( node->parent[0] != 9 )
        {
          node = &node[0];
          if ( node->parent[0] != 10 )
          {
            return 0;
          }
          if ( node->type != 6 )
          {
            node = &node[0];
            if ( node->type != 12 )
              continue;
          }
          else
            list[0] = node->parent + 16;
        }
        list[0] = node->parent + 20;
      }
      else
      if ( 1 )
        continue;
      list[0] = node->type == 2 ? node->parent + 16 : node->parent + 20;
    }
    else
    {
      node = &node[0];
      if ( node->type != 2 )
        continue;
      list[0] = node->parent + 28;
    }
    if ( list[0] )
    {
      assert_failed = list[0] == 0;
      if ( !(_Bool)( list[0] != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
        errline = 295;
        elinks_internal( "assertion *list failed!" );
        if ( assert_failed )
        {
        }
      }
      get_dom_node_list_pos( list[0], &node[0] );
      if ( assert_failed == 0 )
      {
        assert_failed = index >> 31;
        if ( index >> 31 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
          errline = 299;
          elinks_internal( "assertion index &gt;= 0 failed!" );
          if ( assert_failed )
            goto B2;
        }
        if ( list[0] <= index + 1 + 1 )
          continue;
        return 0;
      }
    }
  }
B2:  assert_failed = 0;
  return 0;
}
struct dom_node *get_dom_node_child( struct dom_node *parent, enum dom_node_type  type, int16_t subtype )
{
  int eax;
  int edx;
  struct dom_node_list **list;
  struct dom_node *node;
  int index;
  return *(int*)(esi + ( index << 2 ) + 4);
}
struct dom_node *init_dom_node_at( struct dom_node *parent, enum dom_node_type  type, struct dom_string *string, int allocated )
{
  int eax;
  int edx;
  struct dom_node *node;
  if ( mem_calloc( 1, 32 ) )
  {
    node->parent = &parent[0];
    node->type = type;
    if ( allocated >= 0 )
      node->bits_at_0/*.3_3of4*/ = ( *(char*)(node[0].type + 2) & -2 ) | 0;
    else
    if ( parent[0].type )
      node->bits_at_0/*.3_3of4*/ = ( node->bits_at_0/*.3_3of4*/ & -2 ) | ( parent->bits_at_0/*.3_3of4*/ & 1 );
    else
    {
    }
    if ( ( ( ( node->bits_at_0/*.3_3of4*/ & -2 ) | 0 ) & 1 ) & 255 )
    {
      *ebp_28 = string->length;
      if ( mem_realloc( (void*)node->string.string, node->string.length + string->length + 1 ) )
      {
        node->string.string = (unsigned char*)mem_realloc( (void*)node->string.string, string->string[0] + node->string.length + 1 );
        memcpy( node->string.string + node->string.length, string->string, string->string[0] );
        node->string.length += ebp_28;
      }
      else
      {
        node[0].type = 0;
        done_dom_node( &node[0] );
        return &node[0];
      }
    }
    else
    {
      node->string.string = string->string;
      if ( string->length == -1 )
      {
        parent = &parent[0];
        strlen( (char*)string->string );
      }
      node->string.length = strlen( &edx );
    }
    if ( parent[0].type == 0 )
    {
      return &node[0];
    }
  {
    struct dom_node_list **list;
    int index;
    if ( parent->type != 7 )
    {
      if ( ccdep1 < ccdep2 )
      {
        if ( parent->type != 9 )
        {
          if ( parent->type == 10 )
          {
            if ( node->type == 6 )
            {
              if ( assert_failed == 0 )
              {
                assert_failed = list[0] == 0;
                if ( !(_Bool)( list[0] != 0 ) )
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
                  errline = 395;
                  elinks_internal( "assertion list != NULL failed: Adding node %d to bad parent %d" );
                }
              }
              if ( add_to_dom_node_list( &list[0], &node[0], index ) == 0 )
              {
                node[0].type = 0;
                done_dom_node( &node[0] );
                return &node[0];
              }
              return &node[0];
            }
            else
            if ( node->type == 12 )
              goto B25;
          }
        }
B25:      }
      else
      if ( parent->type == 1 )
      {
      }
    }
    else
    if ( node->type == 2 )
      continue;
    list[0] = 0;
  }
  }
  else
  {
    return &node[0];
  }
}
void done_dom_node_data( struct dom_node *node )
{
  if ( assert_failed == 0 )
  {
    assert_failed = node[0].type == 0;
    if ( !(_Bool)( node[0].type != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
      errline = 414;
      elinks_internal( "assertion node failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    assert_failed = node->type > 12;
    if ( node->type > 12 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
      errline = 415;
      elinks_internal( "assertion node-&gt;type &lt; DOM_NODES failed!" );
    }
  }
  if ( node->type != 2 )
  {
    if ( ccdep1 < ccdep2 )
    {
      if ( node->type != 7 )
      {
        if ( node->type == 9 && node->data.document.children )
        {
          done_dom_node_list( node->data.document.children );
          if ( ( node->type & 1 ) & 255 )
          {
            if ( node->string.string )
              mem_free( (void*)node->string.string );
            node->string.string = 0;
            node->string.length = 0;
            node = 65535;
            mem_free( &node[0].type );
            return;
          }
        }
      }
      else
      {
        if ( node->data.attribute.quoted )
          done_dom_node_list( &node->data.attribute.quoted );
      }
    }
    else
    if ( node->type == 1 )
    {
      if ( node->data.document.document )
        done_dom_node_list( &node->data.document.document );
      if ( node->data.document.children )
        done_dom_node_list( node->data.document.children );
    }
  }
  if ( ( node->bits_at_0/*.3_3of4*/ & 1 ) & 255 )
  {
    if ( node->data.document.children )
    {
      mem_free( (void*)node->data.document.children );
    }
    node->data.document.children = 0;
  }
}
void done_dom_node( struct dom_node *node )
{
  int eax;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = node[0].type == 0;
    if ( !(_Bool)( node[0].type != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
      errline = 469;
      elinks_internal( "assertion node failed!" );
    }
  }
  if ( node->parent )
  {
    if ( node->parent != 7 )
    {
      if ( node->parent != 9 )
      {
        if ( node->parent == 1 )
          del_from_dom_node_list( (int)( &node->parent ), &node );
          del_from_dom_node_list( (int)( &node->parent ), &node );
        else
        {
        }
      }
      else
      {
        del_from_dom_node_list( (int)( &node->parent ), &node );
      }
    }
    else
    {
      del_from_dom_node_list( (int)( &node->parent ), &node );
    }
  }
  else
  {
  }
}
struct dom_string *get_dom_node_name( struct dom_node *node )
{
  static struct dom_string cdata_section_str = { 14, "#cdata-section" };
  static struct dom_string comment_str = { 8, "#comment" };
  static struct dom_string document_str = { 9, "#document" };
  static struct dom_string document_fragment_str = { 18, "#document-fragment" };
  static struct dom_string text_str = { 5, "#text" };
  if ( assert_failed == 0 )
  {
    assert_failed = node->type == 0;
    if ( !(_Bool)( node[0].type != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
      errline = 509;
      elinks_internal( "assertion node failed!" );
    }
  }
  switch ( ( node->type - 3 ) )
  {
  case 2:
  case 3:
  case 4:
  case 7:
    return &node->string;
    break;
  case 8:
    break;
  case 6:
    return &document_str;
    break;
  case 5:
    return &comment_str;
    break;
  case 1:
    return &cdata_section_str;
    break;
  case 0:
    return &text_str;
    break;
  }
  return &document_fragment_str;
}
struct dom_string *get_dom_node_value( struct dom_node *node )
{
  if ( assert_failed == 0 )
  {
    assert_failed = node[0].type == 0;
    if ( !(_Bool)( node[0].type != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
      errline = 542;
      elinks_internal( "assertion node failed!" );
      if ( node->type >= 8 )
      {
        switch ( node->type )
        {
        case 2:
        case 7:
          return &node->data.document.document;
          break;
        case 3:
        case 4:
        case 8:
          return &node->string;
          break;
        case 0:
        case 1:
        case 5:
        case 6:
          return 0;
          break;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  switch ( node->type )
  {
  case 2:
  case 7:
    return &node->data.document.document;
    break;
  case 3:
  case 4:
  case 8:
    return &node->string;
    break;
  case 0:
  case 1:
  case 5:
  case 6:
    return 0;
    break;
  }
}
struct dom_string *get_dom_node_type_name( enum dom_node_type  type )
{
  static struct dom_string dom_node_type_names[13] = { { 0, 0 }
, { 7, "element" }
, { 9, "attribute" }
, { 4, "text" }
, { 13, "cdata-section" }
, { 16, "entity-reference" }
, { 6, "entity" }
, { 16, "proc-instruction" }
, { 7, "comment" }
, { 8, "document" }
, { 13, "document-type" }
, { 17, "document-fragment" }
, { 8, "notation" }
 };
  if ( assert_failed == 0 )
  {
    assert_failed = type > 12;
    if ( type > 12 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/node.c";
      errline = 587;
      elinks_internal( "assertion type &lt; DOM_NODES failed!" );
      return &dom_node_type_names[ type ];
    }
  }
  return &dom_node_type_names[ type ];
}
#if 0
#endif
