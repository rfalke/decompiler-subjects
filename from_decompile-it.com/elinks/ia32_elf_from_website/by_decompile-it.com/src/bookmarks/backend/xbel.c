#include "xbel.c.h"
static struct tree_node *root_node;
static struct tree_node *current_node;
static int readok = 1;
struct bookmarks_backend xbel_bookmarks_backend = { &filename_bookmarks_xbel, &read_bookmarks_xbel, &write_bookmarks_xbel };
void read_bookmarks_xbel( FILE *f )
{
  int eax;
  int edx;
  unsigned char in_buffer[8192];
  XML_Parser p;
  int done;
  struct read_bookmarks_xbel preload;
  readok = 0;
  p = XML_ParserCreate( 0 );
  if ( p == 0 )
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/bookmarks/backend/xbel.c";
    errline = 105;
    elinks_error( gettext( "read_bookmarks_xbel(): Error in XML_ParserCreate()" ) );
  }
  else
  {
    XML_SetElementHandler( &p, &on_element_open, &on_element_close );
    XML_SetCharacterDataHandler( &p, &on_text );
  {
    do
    {
      if ( ferror( &f[0] ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/bookmarks/backend/xbel.c";
        errline = 116;
        elinks_error( gettext( "read_bookmarks_xbel(): Error reading %s" ) );
      }
      else
      {
        done = feof( &f[0] );
        *ebp_8240 = feof( &f[0] );
        if ( XML_Parse( &p, in_buffer, len, feof( &f[0] ) ) == 0 )
        {
          usrerror( gettext( "Parse error while processing XBEL bookmarks in %s at line %d column %d:\n%s" ) );
        }
        else
      }
      XML_ParserFree( &p );
      free_xbeltree( root_node );
    }
    while ( done );
    preload.utf8_cp = get_cp_index( "UTF-8" );
    readok = xbeltree_to_bookmarks_list( &preload, root_node->children, 0 );
  }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
void write_bookmarks_xbel( struct secure_save_info *ssi, struct list_head_elinks *bookmarks_list )
{
  int eax;
  int edx;
  int folder_state = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  secure_fputs( ssi, "&lt;?xml version=\"1.0\" encoding=\"UTF-8\"?&gt;\n&lt;!DOCTYPE xbel PUBLIC \"+//IDN python.org//DTD XML Bookmark Exchange Language 1.0//EN//XML\"\n\t\t       \"http://www.python.org/topics/xml/dtds/xbel-1.0.dtd\"&gt;\n\n&lt;xbel&gt;\n\n\n" );
  write_bookmarks_list( ssi, bookmarks_list, 0, folder_state );
  ssi = ssi;
  bookmarks_list = "\n&lt;/xbel&gt;\n";
}
unsigned char *filename_bookmarks_xbel( int writing )
{
  if ( writing == 0 || readok )
  {
    return "bookmarks.xbel";
  }
  return 0;
}
void print_xml_entities( struct secure_save_info *ssi, unsigned char *str )
{
  struct string entitized;
  entitized.source = 0;
  entitized.length = 0;
  if ( init_string( &entitized ) && add_html_to_string( &entitized, &str[0], strlen( &str[0] ) ) )
    secure_fputs( &ssi[0], (char*)entitized.source );
  else
  {
    secsave_errno = SS_ERR_OUT_OF_MEM;
    ssi->err = 12;
  }
  done_string( &entitized );
  return;
}
void write_bookmarks_list( struct secure_save_info *ssi, struct list_head_elinks *bookmarks_list, int n, int folder_state )
{
  int ecx;
  struct bookmark *bm = &bookmarks_list->next[0];
  if ( bookmarks_list != bookmarks_list )
  {
    do
    {
      if ( n + 1 >= 1 )
      {
        do
        {
          secure_fputs( &ssi[0], "    " );
        }
        while ( n + 1 <= 0 + 1 );
        bm = &bm[0];
      }
      if ( bm->box_item->type == BI_FOLDER )
      {
        if ( folder_state && ( ( *(char*)(bm->box_item + 24) & 1 ) & 255 ) )
        {
          secure_fputs( &ssi[0], "&lt;folder folded=\"" );
        }
        else
        {
          secure_fputs( &ssi[0], "&lt;folder folded=\"" );
        }
        secure_fputs( &ssi[0], "no" );
        secure_fputs( &ssi[0], "\"&gt;\n" );
        if ( n + 2 >= 1 )
        {
          do
          {
            secure_fputs( &ssi[0], "    " );
          }
          while ( n + 2 <= 0 + 1 );
          bm = &bm[0];
        }
        secure_fputs( &ssi[0], "&lt;title&gt;" );
        print_xml_entities( &ssi[0], bm->title );
        secure_fputs( &ssi[0], "&lt;/title&gt;\n" );
        if ( bm->child.next != bm->child.next )
          write_bookmarks_list( &ssi[0] );
        if ( esi >= 1 )
        {
          do
          {
            secure_fputs( &ssi[0], "    " );
          }
          while ( esi <= ebx );
          bm = &bm[0];
        }
        secure_fputs( &ssi[0], "&lt;/folder&gt;\n\n" );
      }
      else
      {
        if ( bm->box_item->type == BI_LEAF )
        {
          secure_fputs( &ssi[0], "&lt;bookmark href=\"" );
          print_xml_entities( &ssi[0], bm->url );
          secure_fputs( &ssi[0], "\"&gt;\n" );
          if ( n + 2 >= 1 )
          {
            do
            {
              secure_fputs( &ssi[0], "    " );
            }
            while ( n + 2 <= 0 + 1 );
            bm = &bm[0];
          }
          secure_fputs( &ssi[0], "&lt;title&gt;" );
          print_xml_entities( &ssi[0], bm->title );
          secure_fputs( &ssi[0], "&lt;/title&gt;\n" );
          if ( esi >= 1 )
          {
            do
            {
              secure_fputs( &ssi[0], "    " );
            }
            while ( esi <= ebx );
            bm = &bm[0];
          }
          secure_fputs( &ssi[0], "&lt;/bookmark&gt;\n\n" );
        }
        else
        {
          if ( bm->box_item->type == BI_SEPARATOR )
            secure_fputs( &ssi[0], "&lt;separator/&gt;\n\n" );
          bm = &bm;
        }
      }
    }
    while ( bookmarks_list->next != bm->next );
    return;
  }
  else
  {
    return;
  }
}
void on_element_open( void *data, char *name, char **attr )
{
  int eax;
  struct tree_node *node = current_node;
  node = (struct tree_node*)mem_calloc( 1, 32 );
  if ( mem_calloc( 1, 32 ) )
  {
    node = node[0].name == 0 ? &node[0] : (struct tree_node*)mem_calloc( 1, 32 );
    *(int*)(mem_calloc( 1, 32 ) + 16) = node[0].name == 0 ? node[0] : mem_calloc( 1, 32 );
    node->attrs.prev = mem_calloc( 1, 32 ) + 8;
    node->attrs.next = mem_calloc( 1, 32 ) + 8;
    if ( root_node )
    {
      if ( current_node->children )
      {
        node->next = current_node->children = &node[0];
        &current_node->children = 0;
      }
      else
        current_node->children = &node[0];
    }
    else
      root_node = &node[0];
    current_node = &node[0];
    node = (struct tree_node*)stracpy( (unsigned char*)name );
    if ( current_node[0].name == 0 )
    {
      data = (void*)current_node;
    }
    for ( ; attr[0] == 0; node->text = (unsigned char*)mem_calloc( 1, 16 ) )
    {
      unsigned char *name;
      unsigned char *value;
      name[0] = stracpy( (unsigned char*)attr[0] );
      stracpy( (unsigned char*)attr[1] );
      if ( mem_calloc( 1, 16 ) )
      {
        if ( name[0] == 0 || value[0] == 0 )
        {
          if ( mem_calloc( 1, 16 ) )
          {
            mem_free( mem_calloc( 1, 16 ) );
          }
        }
        else
        {
          *(int*)(mem_calloc( 1, 16 ) + 8) = name[0];
          attr[0] = attr[2];
          *(int*)(mem_calloc( 1, 16 ) + 12) = stracpy( (unsigned char*)attr[1] );
          *(int*)(mem_calloc( 1, 16 )) = *(int*)(current_node->attrs.prev);
          *(int*)(mem_calloc( 1, 16 ) + 4) = current_node->attrs.prev[0];
          *(int*)(current_node->attrs.prev) = mem_calloc( 1, 16 );
          //node->text = (unsigned char*)mem_calloc( 1, 16 );
        }
      }
      if ( name[0] )
      {
        mem_free( &name[0] );
        *ebp_32 = ebp_32;
      }
      if ( stracpy( (unsigned char*)attr[1] ) )
        mem_free( (void*)stracpy( (unsigned char*)attr[1] ) );
    }
  }
  return;
}
void on_element_close( void *data, char *name )
{
  current_node = current_node->parent;
  return;
}
void on_text( void *data, XML_Char *text, int len )
{
  char *tmp;
  int len2;
  if ( len )
  {
    len2 = 0;
    if ( current_node->text )
    {
      len2 = strlen( (char*)current_node->text );
    }
    if ( mem_realloc( (void*)current_node->text, len2 + len + 1 ) )
    {
      strncpy( len2 + mem_realloc( (void*)current_node->text, len2 + len + 1 ), text, len );
      tmp[ len2 + len ] = 0;
      if ( mem_alloc( strlen( &tmp[0] ) + 1 ) )
      {
        if ( strlen( &tmp[0] ) >= 1 )
        {
          do
          {
            if ( tmp[0] - 9 >= 23 && ( ( 1 << ( tmp[0] - 9 ) ) & 0x800013 ) )
            {
              if ( esi == 0 )
              {
              }
              if ( ebp_28 != eax + 1 )
                continue;
            }
            else
            {
            }
          }
          while ( ebp_28 != eax + 1 );
          tmp[0] = tmp[0];
        }
        current_node->text = ebp_32;
        data = &tmp[0];
      }
      else
      {
        current_node->text = ebp_32;
        data = &tmp[0];
      }
    }
  }
  return;
}
int xbeltree_to_bookmarks_list( struct read_bookmarks_xbel *preload, struct tree_node *node, struct bookmark *current_parent )
{
  static struct bookmark *lastbm;
  struct bookmark *tmp;
  struct tree_node *title;
  if ( node[0].name )
  {
    do
    {
      strcmp( "bookmark", (char*)node->name );
      if ( !1 )
      {
        strcmp( "folder", (int)( &node->next ) );
        if ( !1 )
        {
          strcmp( "separator", (int)( &node->next ) );
          if ( 1 )
          {
            if ( tmp->next )
            {
              tmp->root = &current_parent[0];
              lastbm = &tmp[0];
            }
            else
              break;
          }
        }
        else
        {
          unsigned char *folded;
          title = &node->next;
          if ( node->next )
          {
            do
            {
              strcmp( (char*)title->name, "title" );
            }
            while ( 1 || title->next == 0 );
          }
          if ( preload != current_charset )
          {
            bind_textdomain_codeset( "elinks", eax );
            current_charset = preload;
          }
          if ( title[0].name == 0 || title->text == 0 )
            gettext( "No title" );
          if ( add_bookmark( &current_parent[0], 0, title->text, 0 ) == 0 )
            break;
          if ( node->next != node->next )
          {
            do
            {
              strcmp( &edx, *(int*)(eax + 8) );
              if ( (unsigned char)( ccdep2 < ccdep1 ) == 0 )
              {
                folded = folded;
                if ( folded && folded == 110 && folded == 111 && *(char*)(folded + 2) == 0 )
                {
                  *(char*)(*(int*)(ebp_36 + 16) + 24) |= 1;
                  break;
                }
                else
                  break;
              }
              else
            }
            while ( ebp_44 == eax );
          }
          lastbm = ebp_36;
          lastbm = ebp_36;
        }
      }
      else
      {
        unsigned char *href;
        title = node->children;
        if ( node->children )
        {
          do
          {
            strcmp( (char*)title->name, "title" );
          }
          while ( 1 || title->next == 0 );
        }
        if ( node->attrs.next != node->attrs.next )
        {
          do
          {
            strcmp( &edx, *(int*)(eax + 8) );
            if ( 1 )
            {
              title = &title[0];
              href[0] = *(int*)(eax + 12);
              if ( preload != current_charset )
              {
                bind_textdomain_codeset( "elinks", eax );
                current_charset = preload;
              }
              if ( href[0] == 0 )
              {
              }
              if ( title[0].name == 0 || title->text == 0 )
                gettext( "No title" );
              if ( tmp[0].next )
              {
                tmp->root = &current_parent[0];
                lastbm = &tmp[0];
              }
              else
                break;
            }
            else
          }
          while ( ebp_44 == eax );
          title = ebp_36;
        }
      }
      if ( node->children )
      {
        int ret;
        struct bookmark *parent_for_nested;
        strcmp( "folder", (int)( &node->next ) );
        parent_for_nested = 1 ? &current_parent : lastbm;
        if ( ret == 0 )
          break;
      }
      else
      {
      }
    }
    while ( node->next == 0 );
    return 1;
  }
  else
  {
    return 1;
  }
}
void free_xbeltree( struct tree_node *node )
{
  struct tree_node *next_node;
  if ( node->name )
  {
    next_node = &next_node[0];
    do
    {
      if ( node->children )
        free_xbeltree(  );
      next_node = node->next;
      free_node( &node[0] );
      node = &next_node[0];
    }
    while ( next_node[0].name );
  }
  return;
}
void free_node( struct tree_node *node )
{
  int ecx;
  struct attributes *attribute = &node->attrs.next[0];
  if ( node->attrs.next != &node->attrs.next )
  {
    do
    {
      mem_free( (void*)attribute->name );
      mem_free( (void*)attribute->value );
      attribute = &attribute;
    }
    while ( attribute->next == &node->attrs.next );
  }
{
  struct xlist_head *head = &node->attrs.next[0], *next;
  head = &node->attrs.next[0];
  if ( node->attrs.next != &node->attrs.next )
  {
    do
    {
      head = &(struct xlist_head*)(head);
    }
    while ( head->next != &node->attrs.next );
  }
  head = &node->attrs.prev[0];
  if ( node->attrs.prev != head[0].next )
  {
    do
    {
      head = head->prev;
    }
    while ( head->prev != head[0].next );
  }
  next = &node->attrs.next[0];
  if ( node->attrs.next != head[0].next )
  {
    &(struct xlist_head*)(next) = &next;
    while ( 1 )
    {
      *(int*)(*ebp_32 + 4) = head->prev;
      &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
      mem_free( (void*)head->next );
      *ebp_32 = next->next;
      head = &next[0];
      if ( next[0].next == head[0].next )
        goto B13;
      else
      {
        next = *ebp_32;
      }
    }
  }
{
B13:  void *p = (void*)node->name;
  if ( node->name )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)node->text;
  if ( node->text )
    mem_free( &((int*)p)[0] );
  mem_free( (void*)node[0].name );
  return;
}
}
}
}
#if 0
#endif
