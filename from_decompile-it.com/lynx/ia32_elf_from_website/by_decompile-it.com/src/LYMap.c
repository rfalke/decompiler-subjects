#include "LYMap.c.h"
static HTList *LynxMaps;
BOOLEAN LYMapsOnly;
HTProtocol LYLynxIMGmap;
void ImageMapList_free( HTList *theList )
{
  LYImageMap *map;
  LYMapElement *element;
  HTList *cur = theList;
  HTList *current;
  if ( cur )
  {
    while ( 1 )
    {
      if ( cur )
      {
        cur = &cur->next;
        map = 0;
        if ( map )
        {
          if ( map->address[0] )
          {
            free( &map->address[0] );
            *(int*)&map->address[0] = 0;
          }
          if ( map->title )
          {
            free( &map->title );
            *(int*)&map->title = 0;
          }
          if ( map->elements )
          {
            current = &map->elements;
            while ( 1 )
            {
              if ( current )
              {
                current = &current->next;
                element = 0;
                if ( element )
                {
                  if ( element->address[0] )
                  {
                    free( &element->address[0] );
                    *(int*)&element->address[0] = 0;
                  }
                  if ( element->title )
                  {
                    free( &element->title );
                    *(int*)&element->title = 0;
                  }
                  if ( element )
                  {
                    free( element );
                    element = 0;
                  }
                }
                else
                {
                  HTList_delete( &map->elements );
                  *(int*)&map->elements = 0;
                }
              }
              element = 0;
            }
          }
          if ( map )
          {
            free( map );
            map = 0;
          }
        }
        else
        {
          HTList_delete( theList );
          break;
        }
      }
      map = 0;
    }
  }
  return;
}
BOOLEAN LYAddImageMap( char *address, char *title, HTParentAnchor *node_anchor )
{
  LYImageMap *tmp = 0;
  LYImageMap *old = 0;
  HTList *cur = 0;
  HTList *theList = 0;
  HTList *curele = 0;
  LYMapElement *ele = 0;
  if ( address == 0 || address[0] == 0 )
  {
  }
  if ( node_anchor == 0 || node_anchor->address == 0 )
  {
  }
  if ( LynxMaps == 0 )
  {
    LynxMaps = HTList_new( );
  }
  theList = LynxMaps;
  if ( theList )
  {
    cur = theList;
    do
    {
      if ( cur )
      {
        cur = &cur->next;
        old = 0;
        if ( old == 0 )
          goto B12;
        else
        {
        }
      }
      old = 0;
    }
    while ( old->address[0] == 0 || strcmp( &old->address[0], address ) );
    if ( old->address[0] )
    {
      free( &old->address[0] );
      *(int*)&old->address[0] = 0;
    }
    if ( old->title )
    {
      free( &old->title );
      *(int*)&old->title = 0;
    }
    if ( old->elements )
    {
      curele = &old->elements;
      while ( 1 )
      {
        if ( curele )
        {
          curele = &curele->next;
          ele = 0;
          if ( ele )
          {
            if ( ele->address[0] )
            {
              free( &ele->address[0] );
              *(int*)&ele->address[0] = 0;
            }
            if ( ele->title )
            {
              free( &ele->title );
              *(int*)&ele->title = 0;
            }
            if ( ele )
            {
              free( ele );
              ele = 0;
            }
          }
          else
          {
            HTList_delete( &old->elements );
            *(int*)&old->elements = 0;
          }
        }
        ele = 0;
      }
    }
  }
B12:;
  tmp = old ? old : (LYImageMap*)calloc( 1, 12 );
  if ( tmp == 0 )
  {
    outofmem( "./LYMap.c", "LYAddImageMap" );
  }
  HTSACopy( &tmp->address, address );
  if ( title && title[0] )
    HTSACopy( &tmp->title, title );
  if ( tmp != old )
    HTList_addObject( theList, (void*)tmp );
  return 1;
}
BOOLEAN LYAddMapElement( char *map, char *address, char *title, HTParentAnchor *node_anchor, BOOLEAN intern_flag )
{
  LYMapElement *tmp = 0;
  LYImageMap *theMap = 0;
  HTList *theList = 0;
  HTList *cur = 0;
  if ( map == 0 || map[0] == 0 || address == 0 || address[0] == 0 )
  {
  }
  if ( node_anchor == 0 || node_anchor->address == 0 )
  {
  }
  if ( LynxMaps == 0 )
    LYAddImageMap( map, 0, node_anchor );
  cur = theList = LynxMaps;
  do
  {
    if ( cur )
    {
      cur = &cur->next;
      theMap = 0;
    }
  }
  while ( theMap && strcmp( &theMap->address[0], map ) );
  if ( theMap == 0 )
  {
  }
  if ( theMap->elements == 0 )
  {
    theMap->elements = HTList_new( );
  }
  cur = &theMap->elements;
  do
  {
    if ( cur )
    {
      cur = &cur->next;
      tmp = 0;
      if ( tmp )
      {
      }
      tmp = calloc( 1, sizeof( LYMapElement ) );
      if ( tmp == 0 )
      {
        perror( "Out of memory in LYAddMapElement" );
        break;
      }
      HTSACopy( &tmp->address, address );
      if ( title && title[0] )
        HTSACopy( &tmp->title, title );
      else
        HTSACopy( &tmp->title, address );
      HTList_appendObject( &theMap->elements, (void*)tmp );
      if ( WWW_TraceFlag == 0 )
      {
        break;
      }
      fprintf( TraceFP( ), "LYAddMapElement\n\tmap     %s\n\taddress %s\n\ttitle   %s)\n", "", "", "" );
      break;
    }
    tmp = 0;
  }
  while ( strcmp( &tmp->address[0], address ) );
  if ( tmp->address[0] )
  {
    free( &tmp->address[0] );
    *(int*)&tmp->address[0] = 0;
  }
  if ( tmp->title )
  {
    free( &tmp->title );
    *(int*)&tmp->title = 0;
  }
  HTList_removeObject( &theMap->elements, (void*)tmp );
  if ( tmp )
  {
    free( tmp );
    tmp = 0;
  }
  return 1;
}
BOOLEAN LYHaveImageMap( char *address )
{
  int eax;
  LYImageMap *Map;
  HTList *cur = LynxMaps;
  if ( cur == 0 || address == 0 || address[0] == 0 )
  {
  }
  else
  {
    do
    {
      if ( cur )
      {
        cur = &cur->next;
        Map = 0;
        if ( Map )
        {
        }
        else
        {
          break;
        }
      }
      Map = 0;
    }
    while ( strcmp( &Map->address[0], address ) );
  }
  return 1;
}
void fill_DocAddress( DocAddress *wwwdoc, char *address, HTParentAnchor *anAnchor, HTParentAnchor **punderlying )
{
  HTParentAnchor *underlying;
  if ( anAnchor && anAnchor->post_data )
  {
    wwwdoc->address[0] = address;
    wwwdoc->post_data = anAnchor->post_data;
    wwwdoc->post_content_type = anAnchor->post_content_type;
    *(int*)&wwwdoc->bookmark = 0;
    wwwdoc->isHEAD = 0;
    wwwdoc->safe = 0;
    underlying = HTAnchor_findAddress( wwwdoc );
    if ( underlying->safe )
      wwwdoc->safe = 1;
    if ( punderlying )
    {
      punderlying[0] = underlying;
    }
  }
  else
  {
    wwwdoc->address[0] = address;
    *(int*)&wwwdoc->post_data = 0;
    *(int*)&wwwdoc->post_content_type = 0;
    *(int*)&wwwdoc->bookmark = 0;
    wwwdoc->isHEAD = 0;
    wwwdoc->safe = 0;
    if ( punderlying )
    {
      punderlying[0] = 0;
    }
  }
  return;
}
HTList *get_the_list( DocAddress *wwwdoc, char *address, HTParentAnchor *anchor, HTParentAnchor **punderlying )
{
  if ( anchor == 0 || anchor->post_data == 0 )
  {
    fill_DocAddress( wwwdoc, address, 0, punderlying );
    return LynxMaps;
  }
  fill_DocAddress( wwwdoc, address, anchor, punderlying );
  if ( punderlying && punderlying[0] )
  {
    return punderlying[0]->imaps;
  }
  return &anchor->imaps;
}
int LYLoadIMGmap( char *arg, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *sink )
{
  HTFormat format_in = HTAtom_for( "text/html" );
  HTStream *target = 0;
  char *buf = 0;
  LYMapElement *tmp = 0;
  LYImageMap *theMap = 0;
  char *MapTitle = 0;
  char *MapAddress = 0;
  HTList *theList;
  HTList *cur = 0;
  char *address = 0;
  char *cp = 0;
  DocAddress WWWDoc;
  HTParentAnchor *underlying;
  BOOLEAN old_cache_setting = LYforce_no_cache;
  BOOLEAN old_reloading = reloading;
  HTFormat old_format_out = HTOutputFormat;
  if ( strncasecomp( arg, "LYNXIMGMAP:", 11 ) == 0 )
    address = &arg[11];
  if ( address == 0 || strchr( address, ':' ) == 0 )
  {
    HTAlert( gettext( "Misdirected client-side image MAP request!" ) );
    return -29999;
  }
  theList = get_the_list( &WWWDoc, address, anAnchor, &underlying );
  if ( WWWDoc.safe )
    anAnchor->safe = 1;
  if ( theList == 0 )
  {
    if ( anAnchor->post_data && !WWWDoc.safe && ( ( underlying && underlying->document && !LYforce_no_cache ) || HTConfirm( gettext( "Document from Form with POST content.  Resubmit?" ) ) != 1 ) )
    {
      HTAlert( gettext( "Image map from POST response not available!" ) );
      return -29999;
    }
    LYforce_no_cache = 1;
    reloading = 1;
    HTOutputFormat = HTAtom_for( "www/present" );
    LYMapsOnly = 1;
    if ( ( HTLoadAbsolute( &WWWDoc ) & 255 ) == 0 )
    {
      LYforce_no_cache = old_cache_setting;
      reloading = old_reloading;
      HTOutputFormat = old_format_out;
      LYMapsOnly = 0;
      HTAlert( gettext( "Client-side image MAP is not accessible!" ) );
      return -29999;
    }
    LYforce_no_cache = old_cache_setting;
    reloading = old_reloading;
    HTOutputFormat = old_format_out;
    LYMapsOnly = 0;
    theList = get_the_list( &WWWDoc, address, anAnchor, &underlying );
  }
  if ( theList == 0 )
  {
    HTAlert( gettext( "No client-side image MAPs are available!" ) );
    return -29999;
  }
  cur = theList;
  do
  {
    if ( cur )
    {
      cur = &cur->next;
      theMap = 0;
    }
  }
  while ( theMap && strcmp( &theMap->address[0], address ) );
  if ( theMap && HTList_count( &theMap->elements ) == 0 )
  {
    if ( anAnchor->post_data == 0 )
    {
      HTSACopy( &redirecting_url, address );
      return 399;
    }
    if ( WWWDoc.safe || ( underlying->document && anAnchor->document == 0 && ( LYinternal_flag || LYoverride_no_cache ) ) )
    {
      HTSACopy( &redirecting_url, address );
      redirect_post_content = 1;
      return 399;
    }
  }
  if ( theMap == 0 || theMap->elements == 0 )
  {
    if ( anAnchor->post_data && !WWWDoc.safe && ( ( underlying && underlying->document && !LYforce_no_cache ) || HTConfirm( gettext( "Document from Form with POST content.  Resubmit?" ) ) != 1 ) )
    {
      HTAlert( gettext( "Image map from POST response not available!" ) );
      return -29999;
    }
    LYforce_no_cache = 1;
    reloading = 1;
    HTOutputFormat = HTAtom_for( "www/present" );
    LYMapsOnly = 1;
    if ( ( HTLoadAbsolute( &WWWDoc ) & 255 ) == 0 )
    {
      LYforce_no_cache = old_cache_setting;
      reloading = old_reloading;
      HTOutputFormat = old_format_out;
      LYMapsOnly = 0;
      HTAlert( gettext( "Client-side image MAP is not accessible!" ) );
      return -29999;
    }
    LYforce_no_cache = old_cache_setting;
    reloading = old_reloading;
    HTOutputFormat = old_format_out;
    LYMapsOnly = 0;
    cur = get_the_list( &WWWDoc, address, anAnchor, &underlying );
    do
    {
      if ( cur )
      {
        cur = &cur->next;
        theMap = 0;
      }
    }
    while ( theMap && strcmp( &theMap->address[0], address ) );
    if ( theMap == 0 || theMap->elements == 0 )
    {
      HTAlert( gettext( "Client-side image MAP is not available!" ) );
      return -29999;
    }
  }
  anAnchor->no_cache = 1;
  target = HTStreamStack( format_in, format_out, &sink[0]._HTStream, anAnchor );
  if ( target == 0 || target == 0 )
  {
    HTSprintf0( &buf, gettext( "Sorry, no known way of converting %s to %s." ), format_in->name, format_out->name );
    HTAlert( buf );
    if ( buf )
    {
      free( buf );
      buf = 0;
    }
    return -29999;
  }
  else
  {
    if ( theMap->title && theMap->title[0] )
      HTSACopy( &MapTitle, &theMap->title );
    else
    if ( anAnchor->title && anAnchor->title[0] )
      HTSACopy( &MapTitle, &anAnchor->title );
    else
    if ( LYRequestTitle && LYRequestTitle[0] && strcasecomp( LYRequestTitle, "[USEMAP]" ) )
      HTSACopy( &MapTitle, LYRequestTitle );
    else
    {
      cp = strchr( address, '#' );
      if ( cp )
        HTSACopy( &MapTitle, &cp[1] );
    }
    if ( MapTitle == 0 || MapTitle[0] == 0 )
      HTSACopy( &MapTitle, "[USEMAP]" );
    else
      LYEntify( &MapTitle, 1 );
    HTSprintf0( &buf, "&lt;html&gt;\n&lt;head&gt;\n" );
    ebx( target, buf, strlen( buf ) );
    HTSprintf0( &buf, "&lt;META %s content=\"text/html;charset=%s\"&gt;\n", "http-equiv=\"content-type\"", LYCharSet_UC[ current_char_set ].MIMEname );
    ebx( target, buf, strlen( buf ) );
    HTSprintf0( &buf, "&lt;title&gt;%s&lt;/title&gt;\n", MapTitle );
    ebx( target, buf, strlen( buf ) );
    HTSprintf0( &buf, "&lt;/head&gt;\n&lt;body&gt;\n" );
    ebx( target, buf, strlen( buf ) );
    HTSprintf0( &buf, "&lt;h1&gt;&lt;em&gt;%s&lt;/em&gt;&lt;/h1&gt;\n", MapTitle );
    ebx( target, buf, strlen( buf ) );
    HTSACopy( &MapAddress, address );
    LYEntify( &MapAddress, 0 );
    HTSprintf0( &buf, "&lt;h2&gt;&lt;em&gt;MAP:&lt;/em&gt;&nbsp;%s&lt;/h2&gt;\n", MapAddress );
    ebx( target, buf, strlen( buf ) );
    HTSprintf0( &buf, "&lt;%s compact&gt;\n", keypad_mode ? "ul" : "ol" );
    ebx( target, buf, strlen( buf ) );
    cur = &theMap->elements;
    if ( cur )
    {
      cur = &cur->next;
      tmp = 0;
      if ( tmp )
      {
        HTSACopy( &MapAddress, &tmp->address[0] );
        LYEntify( &MapAddress, 0 );
        ;
      }
      HTSprintf0( &buf, "&lt;/%s&gt;\n&lt;/body&gt;\n&lt;/html&gt;\n", keypad_mode ? "ul" : "ol" );
      ebx( target, buf, strlen( buf ) );
      ;
    }
    tmp = 0;
  }
}
void LYPrintImgMaps( FILE *fp )
{
  char *only = HTLoadedDocumentURL( );
  int only_len = strlen( only );
  HTList *outer = LynxMaps;
  HTList *inner;
  LYImageMap *map;
  LYMapElement *elt;
  int count;
  if ( HTList_count( outer ) > 0 )
  {
    do
    {
      if ( outer )
      {
        outer = &outer->next;
        map = 0;
        if ( map == 0 )
          break;
        if ( only_len && ( strncmp( only, &map->address[0], only_len ) || ( *(char*)(map->address[0] + only_len) && *(char*)(map->address[0] + only_len) != '#' ) ) )
          continue;
        else
        {
          fprintf( fp, "\n%s\n", "[USEMAP]" );
          fprintf( fp, "%s\n", &map->address[0] );
          inner = &map->elements;
          count = 0;
          while ( 1 )
          {
            if ( inner )
            {
              inner = &inner->next;
              elt = 0;
              if ( elt )
              {
                fprintf( fp, "%4d. %s", count, &elt->address[0] );
                fputc( 10, fp );
                count++;
              }
            }
            elt = 0;
          }
        }
      }
      map = 0;
    }
    while ( elt );
  }
  return;
}
#if 0
#endif
