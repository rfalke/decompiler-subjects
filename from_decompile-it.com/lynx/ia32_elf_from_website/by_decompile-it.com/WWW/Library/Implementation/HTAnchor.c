#include "HTAnchor.c.h"
static HTList adult_table[1001];
unsigned short HASH_FUNCTION( char *cp_address )
{
  unsigned short hash;
  unsigned char *p = (unsigned char*)cp_address;
  hash = 0;
  for ( ; p; p++ )
  {
    hash = ( ( hash * 3 ) + p ) - ( ( ( (/*HI*/int)( 0x4178749f * ( ( hash * 3 ) + p ) ) >> 8 ) - ( ( ( hash * 3 ) + p ) >> 31 ) ) * 1001 );
    // p++;
  }
  return hash;
}
HTParentAnchor0 *HTParentAnchor0_new( char *address, unsigned short hash )
{
  HTParentAnchor0 *newAnchor = calloc( 1, sizeof( HTParentAnchor0 ) );
  if ( newAnchor == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTAnchor.c", "HTParentAnchor0_new" );
  HTSACopy( &newAnchor->address, address );
  newAnchor->adult_hash = hash;
  return newAnchor;
}
HTParentAnchor *HTParentAnchor_new( HTParentAnchor0 *parent )
{
  HTParentAnchor *newAnchor = calloc( 1, sizeof( HTParentAnchor ) );
  if ( newAnchor == 0 )
  {
    outofmem( "../../../WWW/Library/Implementation/HTAnchor.c", "HTParentAnchor_new" );
  }
  newAnchor->parent->parent = parent;
  parent->info = newAnchor;
  newAnchor->address = parent->address;
  newAnchor->isISMAPScript = 0;
  newAnchor->isHEAD = 0;
  newAnchor->safe = 0;
  newAnchor->no_cache = 0;
  newAnchor->inBASE = 0;
  newAnchor->content_length = 0;
  return newAnchor;
}
HTChildAnchor *HTChildAnchor_new( HTParentAnchor0 *parent )
{
  HTChildAnchor *p = calloc( 1, sizeof( HTChildAnchor ) );
  if ( p == 0 )
  {
    outofmem( "../../../WWW/Library/Implementation/HTAnchor.c", "HTChildAnchor_new" );
  }
  p->parent->parent = parent;
  return p;
}
HTChildAnchor *HText_pool_ChildAnchor_new( HTParentAnchor *parent )
{
  HTChildAnchor *p = (HTChildAnchor*)HText_pool_calloc( &parent->document, 32 );
  if ( p == 0 )
  {
    outofmem( "../../../WWW/Library/Implementation/HTAnchor.c", "HText_pool_ChildAnchor_new" );
  }
  p->parent->parent = parent->parent->parent;
  return p;
}
BOOLEAN HTSEquivalent( char *s, char *t )
{
  if ( s == 0 || t == 0 )
  {
  }
  for ( ; s && t; t++ )
  {
    if ( t != s )
    {
      break;
    }
    s++;
    // t++;
  }
  return ( t == s );
}
BOOLEAN HTBEquivalent( bstring *s, bstring *t )
{
  if ( s && t )
  {
    if ( 0 == 0 )
    {
      int j;
      int len = 0;
      j = 0;
      for ( ; j < len; j++ )
      {
        if ( *(char*)(0 + j) != *(char*)(0 + j) )
        {
          break;
        }
        // j++;
      }
      return 1;
    }
  }
  return 1;
}
int compare_anchors( void *l, void *r )
{
  char *a = &((int*)l);
  char *b = &((int*)r);
  return strcmp( a, b );
}
HTChildAnchor *HTAnchor_findNamedChild( HTParentAnchor0 *parent, char *tag )
{
  HTChildAnchor *child;
  if ( parent && tag && tag )
  {
    if ( parent->children )
    {
      HTChildAnchor sample;
      sample.tag = tag;
      child = (HTChildAnchor*)HTBTree_search( &parent->children, (void*)sample.parent );
      if ( child )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Child anchor %p of parent %p with name `%s' already exists.\n", child, parent, tag );
        }
        return child;
      }
      else
        HTChildAnchor_new( parent );
    }
    else
    {
      parent->children = HTBTree_new( &compare_anchors );
      HTChildAnchor_new( parent );
    }
    child = HTChildAnchor_new( parent );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTAnchor: New Anchor %p named `%s' is child of %p\n", child, "", &child->parent->parent );
    }
    HTSACopy( &child->tag, tag );
    HTBTree_add( &parent->children, (void*)child );
    return child;
  }
  else
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTAnchor_findNamedChild called with NULL parent.\n" );
    }
    return 0;
  }
}
HTChildAnchor *HTAnchor_addChild( HTParentAnchor *parent )
{
  HTChildAnchor *child;
  if ( parent == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTAnchor_addChild called with NULL parent.\n" );
    }
    return 0;
  }
  else
  {
    child = HText_pool_ChildAnchor_new( parent );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTAnchor: New unnamed Anchor %p is child of %p\n", child, &child->parent->parent );
    }
    child->tag = 0;
    HTList_linkObject( &parent->children_notag, (void*)child, &child->_add_children_notag );
    return child;
  }
}
HTChildAnchor *HTAnchor_findChildAndLink( HTParentAnchor *parent, char *tag, char *href, HTLinkType *ltype )
{
  HTChildAnchor *child;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Entered HTAnchor_findChildAndLink:  tag=`%s',%s href=`%s'\n", "", ltype == HTInternalLink ? " (internal link)" : "", "" );
  }
  if ( tag && tag[0] )
  {
    child = HTAnchor_findNamedChild( &parent->parent->parent, tag );
  }
  else
  {
    child = HTAnchor_addChild( parent );
  }
  if ( href && href )
  {
    char *fragment = 0;
    HTParentAnchor0 *dest;
    if ( ltype == HTInternalLink && href == '#' )
      dest = &parent->parent->parent;
    else
    {
      char *relative_to = &parent->address;
      DocAddress parsed_doc;
      parsed_doc.address = HTParse( href, relative_to, 29 );
      parsed_doc.post_data = 0;
      parsed_doc.post_content_type = 0;
      if ( ltype && parent->post_data && ltype == HTInternalLink )
      {
        parsed_doc.post_data = &parent->post_data;
        parsed_doc.post_content_type = &parent->post_content_type;
      }
      parsed_doc.bookmark = 0;
      parsed_doc.isHEAD = 0;
      parsed_doc.safe = 0;
      dest = HTAnchor_findAddress_in_adult_table( &parsed_doc );
      if ( parsed_doc.address )
      {
        free( parsed_doc.address );
      }
    }
    fragment = href[0] == '#' ? &href[1] : HTParseAnchor( href );
    if ( fragment[0] )
    {
      dest = (HTParentAnchor0*)HTAnchor_findNamedChild( dest, fragment );
    }
    if ( tag && tag[0] && child->dest )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "*** Duplicate ChildAnchor %p named `%s'", child, tag );
      }
      if ( child->dest == dest && child->type == ltype )
      {
        HTAnchor_link( child, (int)( &dest->parent ), ltype );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), ", different dest %p or type, creating unnamed child\n", &child->dest );
      }
      child = HTAnchor_addChild( parent );
    }
  }
  return child;
}
HTParentAnchor *HTAnchor_findAddress( DocAddress *newdoc )
{
  char *tag = HTParseAnchor( &newdoc->address[0] );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Entered HTAnchor_findAddress\n" );
  }
  if ( tag[0] == 0 )
  {
  }
{
  DocAddress parsed_doc;
  HTParentAnchor0 *foundParent;
  HTChildAnchor *foundAnchor;
  parsed_doc.address = HTParse( &newdoc->address[0], "", 29 );
  parsed_doc.post_data = &newdoc->post_data;
  parsed_doc.post_content_type = &newdoc->post_content_type;
  parsed_doc.bookmark = &newdoc->bookmark;
  parsed_doc.isHEAD = newdoc->isHEAD;
  parsed_doc.safe = newdoc->safe;
  foundParent = HTAnchor_findAddress_in_adult_table( &parsed_doc );
  foundAnchor = HTAnchor_findNamedChild( foundParent, tag );
  if ( parsed_doc.address )
  {
    free( parsed_doc.address );
    parsed_doc.address = 0;
  }
}
  return HTAnchor_parent( (HTAnchor*)HTAnchor_findAddress_in_adult_table( newdoc ) );
}
HTParentAnchor0 *HTAnchor_findAddress_in_adult_table( DocAddress *newdoc )
{
  unsigned short hash;
  HTList *adults;
  HTList *grownups;
  HTParentAnchor0 *foundAnchor;
  BOOLEAN need_extra_info;
  *(int*)&need_extra_info = 0;
  hash = HASH_FUNCTION( &newdoc->address[0] );
  grownups = adults = &adult_table[ hash ];
  do
  {
    if ( grownups )
    {
      grownups = &grownups->next;
      foundAnchor = 0;
      if ( foundAnchor )
      {
      }
      else
      {
        foundAnchor = HTParentAnchor0_new( &newdoc->address[0], hash );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "New anchor %p has hash %d and address `%s'\n", foundAnchor, hash, &newdoc->address[0] );
        }
        if ( need_extra_info == 0 )
        {
          HTList_linkObject( adults, (void*)foundAnchor, &foundAnchor->_add_adult );
          return foundAnchor;
        }
      {
        HTParentAnchor *p = HTParentAnchor_new( foundAnchor );
        if ( newdoc->post_data )
        {
          HTSABCopy( &p->post_data, 0, 0 );
        }
        if ( newdoc->post_content_type )
          HTSACopy( &p->post_content_type, &newdoc->post_content_type );
        if ( newdoc->bookmark )
          HTSACopy( &p->bookmark, &newdoc->bookmark );
        p->isHEAD = newdoc->isHEAD;
        *(char*)(ebp_28 + 86) = newdoc->safe;
      }
        HTList_linkObject( adults, (void*)foundAnchor, &foundAnchor->_add_adult );
        return foundAnchor;
      }
    }
    foundAnchor = 0;
  }
  while ( !( HTSEquivalent( &foundAnchor->address, &newdoc->address[0] ) & 255 ) || ( ( foundAnchor->info || need_extra_info ) && ( foundAnchor->info == 0 || !( HTBEquivalent( &foundAnchor->info->post_data, &newdoc->post_data ) & 255 ) || foundAnchor->info->isHEAD != newdoc->isHEAD ) ) );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Anchor %p with address `%s' already exists.\n", foundAnchor, &newdoc->address[0] );
  }
  return foundAnchor;
}
HTParentAnchor *HTAnchor_findSimpleAddress( char *url )
{
  DocAddress urldoc;
  urldoc.address = url;
  urldoc.post_data = 0;
  urldoc.post_content_type = 0;
  urldoc.bookmark = 0;
  urldoc.isHEAD = 0;
  urldoc.safe = 0;
  return HTAnchor_findAddress( &urldoc );
}
BOOLEAN HTAnchor_link( HTChildAnchor *child, HTAnchor *destination, HTLinkType *type )
{
  if ( child == 0 || destination == 0 )
  {
  }
  else
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Linking child %p to anchor %p\n", child, destination );
    }
    if ( child->dest )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "*** child anchor already has destination, exiting!\n" );
      }
    }
    else
    {
      child->dest = destination;
      child->type = type;
      if ( destination->parent->parent != child->parent->parent )
        HTList_linkObject( destination->parent->parent + 16, (void*)child, &child->_add_sources );
    }
  }
  return 1;
}
void deleteLinks( HTChildAnchor *me )
{
  if ( me->dest )
  {
    HTParentAnchor0 *parent = &me->dest->parent->parent;
    me->dest = 0;
    if ( me->parent->parent != parent && parent->sources.next )
      HTList_unlinkObject( &parent->sources, (void*)me );
    if ( me->parent->parent != parent && parent->underway == 0 && ( parent->info == 0 || parent->info->document == 0 ) )
      HTAnchor_delete( parent );
    me->type = 0;
  }
  return;
}
BOOLEAN HTAnchor_delete( HTParentAnchor0 *me )
{
  HTBTElement *ele;
  HTChildAnchor *child;
  if ( me == 0 )
  {
  }
  if ( me->underway || ( me->info && me->info->document ) )
  {
  }
  me->underway = 1;
  if ( me->children )
  {
    ele = HTBTree_next( &me->children, 0 );
    for ( ; ele;  )
    {
      child = &ele->object[0];
      if ( child->dest )
        deleteLinks( child );
      ele = HTBTree_next( &me->children, ele );
    }
  }
  me->underway = 0;
  if ( me->sources.next )
  {
  }
  if ( me->children )
  {
    ele = HTBTree_next( &me->children, 0 );
    for ( ; ele;  )
    {
      child = &ele->object[0];
      if ( child->tag )
      {
        free( &child->tag );
        child->tag = 0;
      }
      if ( child )
      {
        free( child );
        child = 0;
      }
      ele = HTBTree_next( &me->children, ele );
    }
    HTBTree_free( &me->children );
  }
  if ( me->info )
  {
    HTParentAnchor_free( &me->info );
    if ( me->info )
    {
      free( &me->info );
      me->info = 0;
    }
  }
  HTList_unlinkObject( &adult_table[ me->adult_hash ], (void*)me );
  if ( me->address )
  {
    free( &me->address );
    me->address = 0;
  }
  if ( me )
  {
    free( me );
    me = 0;
  }
  return 1;
}
void HTAnchor_delete_links( HTParentAnchor *me )
{
  HTList *cur;
  HTChildAnchor *child;
  if ( me && me->document )
  {
    &(HTAtom*)me->format->next = 1;
    if ( me->children_notag.next )
    {
      cur = &me->children_notag;
      while ( child == 0 )
      {
        deleteLinks( child );
      }
    }
    &(HTAtom*)me->format->next = 0;
  }
  return;
}
void HTParentAnchor_free( HTParentAnchor *me )
{
  if ( me->methods )
  {
    HTList_delete( &me->methods );
    me->methods = 0;
  }
  if ( me->charset )
  {
    free( &me->charset );
    me->charset = 0;
  }
  if ( me->isIndexAction )
  {
    free( &me->isIndexAction );
    me->isIndexAction = 0;
  }
  if ( me->isIndexPrompt )
  {
    free( &me->isIndexPrompt );
    me->isIndexPrompt = 0;
  }
  if ( me->title )
  {
    free( &me->title );
    me->title = 0;
  }
  if ( me->physical )
  {
    free( &me->physical );
    me->physical = 0;
  }
  HTSABFree( &me->post_data );
  if ( me->post_content_type )
  {
    free( &me->post_content_type );
    me->post_content_type = 0;
  }
  if ( me->bookmark )
  {
    free( &me->bookmark );
    me->bookmark = 0;
  }
  if ( me->owner )
  {
    free( &me->owner );
    me->owner = 0;
  }
  if ( me->RevTitle )
  {
    free( &me->RevTitle );
    me->RevTitle = 0;
  }
  if ( me->citehost )
  {
    free( &me->citehost );
    me->citehost = 0;
  }
  HTAnchor_clearSourceCache( me );
  if ( me->FileCache )
  {
    FILE *fd = fopen64( &me->FileCache, "r" );
    if ( fd )
    {
      fclose( fd );
      remove( &me->FileCache );
    }
    if ( me->FileCache )
    {
      free( &me->FileCache );
      me->FileCache = 0;
    }
  }
  if ( me->SugFname )
  {
    free( &me->SugFname );
    me->SugFname = 0;
  }
  if ( me->cache_control )
  {
    free( &me->cache_control );
    me->cache_control = 0;
  }
  if ( me->content_type_params )
  {
    free( &me->content_type_params );
    me->content_type_params = 0;
  }
  if ( me->content_type )
  {
    free( &me->content_type );
    me->content_type = 0;
  }
  if ( me->content_language )
  {
    free( &me->content_language );
    me->content_language = 0;
  }
  if ( me->content_encoding )
  {
    free( &me->content_encoding );
    me->content_encoding = 0;
  }
  if ( me->content_base )
  {
    free( &me->content_base );
    me->content_base = 0;
  }
  if ( me->content_disposition )
  {
    free( &me->content_disposition );
    me->content_disposition = 0;
  }
  if ( me->content_location )
  {
    free( &me->content_location );
    me->content_location = 0;
  }
  if ( me->content_md5 )
  {
    free( &me->content_md5 );
    me->content_md5 = 0;
  }
  if ( me->message_id )
  {
    free( &me->message_id );
    me->message_id = 0;
  }
  if ( me->subject )
  {
    free( &me->subject );
    me->subject = 0;
  }
  if ( me->date )
  {
    free( &me->date );
    me->date = 0;
  }
  if ( me->expires )
  {
    free( &me->expires );
    me->expires = 0;
  }
  if ( me->last_modified )
  {
    free( &me->last_modified );
    me->last_modified = 0;
  }
  if ( me->ETag )
  {
    free( &me->ETag );
    me->ETag = 0;
  }
  if ( me->server )
  {
    free( &me->server );
    me->server = 0;
  }
  if ( me->style )
  {
    free( &me->style );
    me->style = 0;
  }
  if ( me->UCStages )
  {
    free( &me->UCStages );
    me->UCStages = 0;
  }
  ImageMapList_free( &me->imaps );
  return;
}
void HTAnchor_clearSourceCache( HTParentAnchor *me )
{
  if ( me->source_cache_file )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "SourceCache: Removing file %s\n", &me->source_cache_file );
    }
    LYRemoveTemp( &me->source_cache_file );
    if ( me->source_cache_file )
    {
      free( &me->source_cache_file );
      me->source_cache_file = 0;
    }
  }
  if ( me->source_cache_chunk )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "SourceCache: Removing memory chunk %p\n", &me->source_cache_chunk );
    }
    HTChunkFree( &me->source_cache_chunk );
    me->source_cache_chunk = 0;
  }
  return;
}
HTParentAnchor *HTAnchor_parent( HTAnchor *me )
{
  if ( me == 0 )
  {
    return 0;
  }
  if ( me[0]._HTAnchor )
  {
    return &me[0]._HTAnchor;
  }
}
void HTAnchor_setDocument( HTParentAnchor *me, HyperDoc *doc )
{
  if ( me )
  {
    me->document = doc;
  }
  return;
}
HyperDoc *HTAnchor_document( HTParentAnchor *me )
{
  return 0;
}
char *HTAnchor_address( HTAnchor *me )
{
  char *addr = 0;
  if ( me )
  {
    if ( me->parent->parent == me || me[0]->_HTAnchor == me || me[1]._HTAnchor == 0 )
    {
      HTSACopy( &addr, &me[0]._HTAnchor );
    }
    HTSprintf0( &addr, "%s#%s", me[0]._HTAnchor, me[1]._HTAnchor );
  }
  return addr;
}
void HTAnchor_setFormat( HTParentAnchor *me, HTFormat form )
{
  if ( me )
  {
    me->format = form;
  }
  return;
}
HTFormat HTAnchor_format( HTParentAnchor *me )
{
  return 0;
}
void HTAnchor_setIndex( HTParentAnchor *me, char *address )
{
  if ( me )
  {
    me->isIndex = 1;
    HTSACopy( &me->isIndexAction, address );
  }
  return;
}
void HTAnchor_setPrompt( HTParentAnchor *me, char *prompt )
{
  if ( me )
  {
    HTSACopy( &me->isIndexPrompt, prompt );
  }
  return;
}
BOOLEAN HTAnchor_isIndex( HTParentAnchor *me )
{
  return 0;
}
BOOLEAN HTAnchor_isISMAPScript( HTAnchor *me )
{
  return 0;
}
char *HTAnchor_style( HTParentAnchor *me )
{
  return 0;
}
void HTAnchor_setStyle( HTParentAnchor *me, char *style )
{
  if ( me )
  {
    HTSACopy( &me->style, style );
  }
  return;
}
char *HTAnchor_title( HTParentAnchor *me )
{
  return 0;
}
void HTAnchor_setTitle( HTParentAnchor *me, char *title )
{
  int i;
  if ( me )
  {
    if ( title )
    {
      HTSACopy( &me->title, title );
      i = 0;
      for ( ; me->title[ i ]; i++ )
      {
        if ( me->title[ i ] == 1 || me->title[ i ] == 2 )
          me->title[ i ] = 32;
        // i++;
      }
    }
    else
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTAnchor_setTitle: New title is NULL! " );
      }
      if ( me->title )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Old title was \"%s\".\n", &me->title );
        }
        if ( me->title == 0 )
        {
          return;
        }
        free( &me->title );
        me->title = 0;
      }
      else
      {
        if ( WWW_TraceFlag == 0 )
        {
          return;
        }
        fprintf( TraceFP( ), "Old title was NULL.\n" );
      }
    }
  }
  return;
}
void HTAnchor_appendTitle( HTParentAnchor *me, char *title )
{
  int i;
  if ( me )
  {
    HTSACat( &me->title, title );
    i = 0;
    for ( ; me->title[ i ]; i++ )
    {
      if ( me->title[ i ] == 1 || me->title[ i ] == 2 )
        me->title[ i ] = 32;
      // i++;
    }
  }
  return;
}
char *HTAnchor_bookmark( HTParentAnchor *me )
{
  return 0;
}
void HTAnchor_setBookmark( HTParentAnchor *me, char *bookmark )
{
  if ( me )
  {
    HTSACopy( &me->bookmark, bookmark );
  }
  return;
}
char *HTAnchor_owner( HTParentAnchor *me )
{
  return 0;
}
void HTAnchor_setOwner( HTParentAnchor *me, char *owner )
{
  if ( me )
  {
    HTSACopy( &me->owner, owner );
  }
  return;
}
char *HTAnchor_RevTitle( HTParentAnchor *me )
{
  return 0;
}
void HTAnchor_setRevTitle( HTParentAnchor *me, char *title )
{
  int i;
  if ( me )
  {
    HTSACopy( &me->RevTitle, title );
    i = 0;
    for ( ; me->RevTitle[ i ]; i++ )
    {
      if ( me->RevTitle[ i ] == 1 || me->RevTitle[ i ] == 2 )
        me->RevTitle[ i ] = 32;
      // i++;
    }
  }
  return;
}
char *HTAnchor_citehost( HTParentAnchor *me )
{
  return 0;
}
void HTAnchor_setCitehost( HTParentAnchor *me, char *citehost )
{
  if ( me )
  {
    HTSACopy( &me->citehost, citehost );
  }
  return;
}
char *HTAnchor_SugFname( HTParentAnchor *me )
{
  return 0;
}
char *HTAnchor_content_type_params( HTParentAnchor *me )
{
  return 0;
}
char *HTAnchor_content_encoding( HTParentAnchor *me )
{
  return 0;
}
char *HTAnchor_content_type( HTParentAnchor *me )
{
  return 0;
}
char *HTAnchor_last_modified( HTParentAnchor *me )
{
  return 0;
}
char *HTAnchor_date( HTParentAnchor *me )
{
  return 0;
}
char *HTAnchor_server( HTParentAnchor *me )
{
  return 0;
}
BOOLEAN HTAnchor_safe( HTParentAnchor *me )
{
  return 0;
}
char *HTAnchor_content_base( HTParentAnchor *me )
{
  return 0;
}
char *HTAnchor_content_location( HTParentAnchor *me )
{
  return 0;
}
char *HTAnchor_messageID( HTParentAnchor *me )
{
  return 0;
}
BOOLEAN HTAnchor_setMessageID( HTParentAnchor *me, char *messageid )
{
  if ( me == 0 || messageid == 0 || messageid[0] == 0 )
  {
  }
  HTSACopy( &me->message_id, messageid );
  return 1;
}
char *HTAnchor_subject( HTParentAnchor *me )
{
  return 0;
}
BOOLEAN HTAnchor_setSubject( HTParentAnchor *me, char *subject )
{
  if ( me == 0 || subject == 0 || subject[0] == 0 )
  {
  }
  HTSACopy( &me->subject, subject );
  return 1;
}
HTAnchor *HTAnchor_followLink( HTChildAnchor *me )
{
  return &me->dest;
}
HTAnchor *HTAnchor_followTypedLink( HTChildAnchor *me, HTLinkType *type )
{
  return me->type == type ? &me->dest : 0;
}
HTList *HTAnchor_methods( HTParentAnchor *me )
{
  if ( me->methods == 0 )
  {
    me->methods = HTList_new( );
  }
  return &me->methods;
}
void *HTAnchor_protocol( HTParentAnchor *me )
{
  return &me->protocol;
}
void HTAnchor_setProtocol( HTParentAnchor *me, void *protocol )
{
  me->protocol = protocol;
  return;
}
char *HTAnchor_physical( HTParentAnchor *me )
{
  return &me->physical;
}
void HTAnchor_setPhysical( HTParentAnchor *me, char *physical )
{
  if ( me )
  {
    HTSACopy( &me->physical, physical );
  }
  return;
}
LYUCcharset *HTAnchor_getUCInfoStage( HTParentAnchor *me, int which_stage )
{
  if ( me && me->UCStages == 0 )
  {
    int i;
    int chndl = UCLYhndl_for_unspec;
    UCAnchorInfo *stages = calloc( 1, sizeof( UCAnchorInfo ) );
    if ( stages == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTAnchor.c", "HTAnchor_getUCInfoStage" );
    i = 0;
    for ( ; i <= 3; i++ )
    {
      stages->s->C.MIMEname = "";
      stages->s->LYhndl = -1;
      // i++;
    }
    if ( me->charset )
    {
      chndl = UCGetLYhndl_byMIME( &me->charset );
      if ( chndl < 0 )
        chndl = UCLYhndl_for_unrec;
      if ( chndl < 0 )
        chndl = UCLYhndl_for_unspec;
    }
    memcpy( &stages->s->C.UChndl, &LYCharSet_UC[ chndl ].UChndl, 32 );
    stages->s->lock = 1;
    stages->s->LYhndl = chndl;
    me->UCStages = stages;
  }
  return 0;
}
int HTAnchor_getUCLYhndl( HTParentAnchor *me, int which_stage )
{
  if ( me )
  {
    if ( me->UCStages == 0 )
      HTAnchor_getUCInfoStage( me, which_stage );
    return -1;
  }
  return -1;
}
LYUCcharset *HTAnchor_setUCInfoStage( HTParentAnchor *me, int LYhndl, int which_stage, int set_by )
{
  if ( me )
  {
    LYUCcharset *p = HTAnchor_getUCInfoStage( me, which_stage );
    if ( me->UCStages->s[0].lock <= which_stage )
    {
      me->UCStages = set_by;
      me->UCStages->s->LYhndl = LYhndl;
      if ( LYhndl >= 0 )
        memcpy( p, &LYCharSet_UC[ LYhndl ].UChndl, 32 );
      else
        p->UChndl = -1;
      return p;
    }
  }
  return 0;
}
LYUCcharset *HTAnchor_resetUCInfoStage( HTParentAnchor *me, int LYhndl, int which_stage, int set_by )
{
  int ohandle;
  if ( me == 0 || me->UCStages == 0 )
  {
    return 0;
  }
  me->UCStages = set_by;
  ohandle = me->UCStages->s->LYhndl;
  me->UCStages->s->LYhndl = LYhndl;
  return &me->UCStages->s->C;
}
LYUCcharset *HTAnchor_copyUCInfoStage( HTParentAnchor *me, int to_stage, int from_stage, int set_by )
{
  if ( me )
  {
    LYUCcharset *p_from = HTAnchor_getUCInfoStage( me, from_stage );
    LYUCcharset *p_to = HTAnchor_getUCInfoStage( me, to_stage );
    if ( set_by == -1 )
      set_by = me->UCStages;
    if ( set_by == 0 )
      set_by = 1;
    if ( me->UCStages->s[0].lock <= to_stage )
    {
      me->UCStages = set_by;
      me->UCStages->s->LYhndl = me->UCStages->s->LYhndl;
      if ( p_to != p_from )
        memcpy( p_to, p_from, 32 );
      return p_to;
    }
  }
  return 0;
}
#if 0
#endif
