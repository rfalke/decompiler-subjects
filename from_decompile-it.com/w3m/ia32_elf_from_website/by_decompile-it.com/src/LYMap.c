#include "LYMap.c.h"
static void fill_DocAddress( DocAddress *wwwdoc, char *address, HTParentAnchor *anAnchor, HTParentAnchor **punderlying );
static HTList *get_the_list( DocAddress *wwwdoc, char *address, HTParentAnchor *anchor, HTParentAnchor **punderlying );
static int LYLoadIMGmap( char *arg, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *sink );
static HTList *LynxMaps;
BOOLEAN LYMapsOnly;
HTProtocol LYLynxIMGmap = { "LYNXIMGMAP", &LYLoadIMGmap, 0,  }
;
void ImageMapList_free( HTList *theList )
{
  LYImageMap *map;
  LYMapElement *element;
  HTList *cur = theList;
  HTList *current;
  if ( cur != 0 )
  {
    while ( 1 )
    {
      if ( cur != 0 )
      {
        cur = cur->next;
        map = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
        if ( map != 0 )
        {
          if ( map->address != 0 )
          {
            free( map->address );
            map->address = 0;
          }
          if ( map->title != 0 )
          {
            free( map->title );
            map->title = 0;
          }
          if ( map->elements != 0 )
          {
            current = map->elements;
            while ( 1 )
            {
              if ( current != 0 )
              {
                current = current->next;
                element = current == 0 ? 0 : &current->object[0]/*error:'v'*/;
                if ( element != 0 )
                {
                  if ( element->address != 0 )
                  {
                    free( element->address );
                    element->address = 0;
                  }
                  if ( element->title != 0 )
                  {
                    free( element->title );
                    element->title = 0;
                  }
                  if ( element == 0 )
                    continue;
                  else
                  {
                    free( element );
                    element = 0;
                  }
                }
                else
                {
                  HTList_delete( map->elements );
                  map->elements = 0;
                }
              }
              element = current == 0 ? 0 : &current->object[0]/*error:'v'*/;
            }
          }
          if ( map == 0 )
            continue;
          else
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
      map = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
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
  if ( address == 0 || ( address[0] & 255 ) == 0 )
  {
  }
  else
  if ( node_anchor == 0 || node_anchor->address == 0 )
  {
  }
  else
  {
    if ( LynxMaps == 0 )
    {
      LynxMaps = HTList_new( );
    }
    theList = LynxMaps;
    if ( theList != 0 )
    {
      cur = theList;
      do
      {
        if ( cur != 0 )
        {
          cur = cur->next;
          old = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
          if ( old == 0 )
            goto B11;
          else
          {
          }
        }
        old = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
      }
      while ( old->address == 0 || strcmp( old->address, address ) != 0 );
      if ( old->address != 0 )
      {
        free( old->address );
        old->address = 0;
      }
      if ( old->title != 0 )
      {
        free( old->title );
        old->title = 0;
      }
      if ( old->elements != 0 )
      {
        curele = old->elements;
        while ( 1 )
        {
          if ( curele != 0 )
          {
            curele = curele->next;
            ele = curele == 0 ? 0 : &curele->object[0]/*error:'v'*/;
            if ( ele != 0 )
            {
              if ( ele->address != 0 )
              {
                free( ele->address );
                ele->address = 0;
              }
              if ( ele->title != 0 )
              {
                free( ele->title );
                ele->title = 0;
              }
              if ( ele == 0 )
                continue;
              else
              {
                free( ele );
                ele = 0;
              }
            }
            else
            {
              HTList_delete( old->elements );
              old->elements = 0;
            }
          }
          ele = curele == 0 ? 0 : &curele->object[0]/*error:'v'*/;
        }
      }
    }
B11:    tmp = old == 0 ? calloc( 1, 12 ) : old;
    if ( tmp == 0 )
    {
      outofmem( "./LYMap.c", "LYAddImageMap" );
    }
    else
    {
      HTSACopy( &tmp->address, address );
      if ( title != 0 && ( title[0] & 255 ) != 0 )
        HTSACopy( &tmp->title, title );
      if ( tmp != old )
        HTList_addObject( theList, (void*)tmp );
    }
  }
  return 1;
}
BOOLEAN LYAddMapElement( char *map, char *address, char *title, HTParentAnchor *node_anchor, BOOLEAN intern_flag )
{
  LYMapElement *tmp = 0;
  LYImageMap *theMap = 0;
  HTList *theList = 0;
  HTList *cur = 0;
  if ( map == 0 || ( map[0] & 255 ) == 0 || address == 0 || ( address[0] & 255 ) == 0 )
  {
  }
  else
  if ( node_anchor == 0 || node_anchor->address == 0 )
  {
  }
  else
  {
    if ( LynxMaps == 0 )
      LYAddImageMap( map, 0, node_anchor );
    cur = theList = LynxMaps;
    do
    {
      if ( cur != 0 )
      {
        cur = cur->next;
        theMap = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
      }
    }
    while ( theMap != 0 && strcmp( theMap->address, map ) != 0 );
    if ( theMap == 0 )
    {
    }
    else
    {
      if ( theMap->elements == 0 )
      {
        theMap->elements = HTList_new( );
      }
      cur = theMap->elements;
      do
      {
        if ( cur != 0 )
        {
          cur = cur->next;
          tmp = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
          if ( tmp != 0 )
          {
          }
          tmp = calloc( 1, sizeof( LYMapElement ) );
          if ( tmp == 0 )
          {
            perror( "Out of memory in LYAddMapElement" );
            break;
          }
          else
          {
            HTSACopy( &tmp->address, address );
            if ( title != 0 && ( title[0] & 255 ) != 0 )
            {
              HTSACopy( &tmp->title, title );
            }
            HTSACopy( &tmp->title, address );
            HTList_appendObject( theMap->elements, (void*)tmp );
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), "LYAddMapElement\n\tmap     %s\n\taddress %s\n\ttitle   %s)\n", map == 0 ? "" : map, address == 0 ? "" : address, title == 0 ? "" : title );
            }
            break;
          }
        }
        tmp = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
      }
      while ( strcmp( tmp->address, address ) != 0 );
      if ( tmp->address != 0 )
      {
        free( tmp->address );
        tmp->address = 0;
      }
      if ( tmp->title != 0 )
      {
        free( tmp->title );
        tmp->title = 0;
      }
      HTList_removeObject( theMap->elements, (void*)tmp );
      if ( tmp != 0 )
      {
        free( tmp );
        tmp = 0;
      }
    }
  }
  return 1;
}
BOOLEAN LYHaveImageMap( char *address )
{
  LYImageMap *Map;
  HTList *cur = LynxMaps;
  if ( cur == 0 || address == 0 || ( address[0] & 255 ) == 0 )
  {
  }
  else
  {
    do
    {
      if ( cur != 0 )
      {
        cur = cur->next;
        Map = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
        if ( Map != 0 )
        {
        }
        else
        {
          break;
        }
      }
      Map = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
    }
    while ( strcmp( Map->address, address ) != 0 );
  }
  return 1;
}
void fill_DocAddress( DocAddress *wwwdoc, char *address, HTParentAnchor *anAnchor, HTParentAnchor **punderlying )
{
  HTParentAnchor *underlying;
  if ( anAnchor != 0 && anAnchor->post_data != 0 )
  {
    wwwdoc->address = address;
    wwwdoc->post_data = anAnchor->post_data;
    wwwdoc->post_content_type = anAnchor->post_content_type;
    wwwdoc->bookmark = 0;
    wwwdoc->isHEAD = 0;
    wwwdoc->safe = 0;
    underlying = HTAnchor_findAddress( wwwdoc );
    if ( ( underlying->safe & 255 ) != 0 )
      wwwdoc->safe = 1;
    if ( punderlying != 0 )
    {
      punderlying[0] = underlying;
    }
  }
  else
  {
    wwwdoc->address = address;
    wwwdoc->post_data = 0;
    wwwdoc->post_content_type = 0;
    wwwdoc->bookmark = 0;
    wwwdoc->isHEAD = 0;
    wwwdoc->safe = 0;
    if ( punderlying != 0 )
    {
      punderlying[0] = 0;
    }
  }
  return;
}
HTList *get_the_list( DocAddress *wwwdoc, char *address, HTParentAnchor *anchor, HTParentAnchor **punderlying )
{
  if ( anchor != 0 && anchor->post_data != 0 )
  {
    fill_DocAddress( wwwdoc, address, anchor, punderlying );
    if ( punderlying != 0 && punderlying[0] != 0 )
    {
      return punderlying[0]->imaps;
    }
    return anchor->imaps;
  }
  else
  {
    fill_DocAddress( wwwdoc, address, 0, punderlying );
    return LynxMaps;
  }
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
  if ( address == 0 || strchr( address, 58 ) == 0 )
  {
    HTAlert( gettext( "Misdirected client-side image MAP request!" ) );
    return -29999;
  }
  theList = get_the_list( &WWWDoc, address, anAnchor, &underlying );
  if ( ( WWWDoc.safe & 255 ) != 0 )
    anAnchor->safe = 1;
  if ( theList == 0 )
  {
    if ( anAnchor->post_data != 0 && ( WWWDoc.safe & 255 ) == 0 && ( ( underlying != 0 && underlying->document != 0 && ( LYforce_no_cache & 255 ) == 0 ) || HTConfirm( gettext( "Document from Form with POST content.  Resubmit?" ) ) != 1 ) )
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
    if ( cur != 0 )
    {
      cur = cur->next;
      theMap = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
    }
  }
  while ( theMap != 0 && strcmp( theMap->address, address ) != 0 );
  if ( theMap != 0 && HTList_count( theMap->elements ) == 0 )
  {
    if ( anAnchor->post_data == 0 )
    {
      HTSACopy( &redirecting_url, address );
      return 399;
    }
    if ( ( WWWDoc.safe & 255 ) != 0 || ( underlying->document != 0 && anAnchor->document == 0 && ( ( LYinternal_flag & 255 ) != 0 || ( LYoverride_no_cache & 255 ) != 0 ) ) )
    {
      HTSACopy( &redirecting_url, address );
      redirect_post_content = 1;
      return 399;
    }
  }
  if ( theMap == 0 || theMap->elements == 0 )
  {
    if ( anAnchor->post_data != 0 && ( WWWDoc.safe & 255 ) == 0 && ( ( underlying != 0 && underlying->document != 0 && ( LYforce_no_cache & 255 ) == 0 ) || HTConfirm( gettext( "Document from Form with POST content.  Resubmit?" ) ) != 1 ) )
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
      if ( cur != 0 )
      {
        cur = cur->next;
        theMap = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
      }
    }
    while ( theMap != 0 && strcmp( theMap->address, address ) != 0 );
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
    if ( buf != 0 )
    {
      free( buf );
      buf = 0;
    }
    return -29999;
  }
  else
  {
    if ( theMap->title != 0 && ( theMap->title[0] & 255 ) != 0 )
    {
      HTSACopy( &MapTitle, theMap->title );
    }
    if ( anAnchor->title != 0 && ( anAnchor->title[0] & 255 ) != 0 )
    {
      HTSACopy( &MapTitle, anAnchor->title );
    }
    if ( LYRequestTitle != 0 && ( LYRequestTitle[0] & 255 ) != 0 && strcasecomp( LYRequestTitle, "[USEMAP]" ) != 0 )
    {
      HTSACopy( &MapTitle, LYRequestTitle );
    }
    cp = strchr( address, 35 );
    if ( cp != 0 )
      HTSACopy( &MapTitle, &cp[1] );
    if ( MapTitle == 0 || ( MapTitle[0] & 255 ) == 0 )
    {
      HTSACopy( &MapTitle, "[USEMAP]" );
    }
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
    HTSprintf0( &buf, "&lt;%s compact&gt;\n", keypad_mode == 0 ? "ol" : "ul" );
    ebx( target, buf, strlen( buf ) );
    cur = theMap->elements;
    if ( cur != 0 )
    {
      cur = cur->next;
      tmp = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
      if ( tmp != 0 )
      {
        HTSACopy( &MapAddress, tmp->address );
        LYEntify( &MapAddress, 0 );
        ;
      }
      HTSprintf0( &buf, "&lt;/%s&gt;\n&lt;/body&gt;\n&lt;/html&gt;\n", keypad_mode == 0 ? "ol" : "ul" );
      ebx( target, buf, strlen( buf ) );
      ;
    }
    tmp = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
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
  if ( HTList_count( outer ) >= 1 )
  {
    do
    {
      if ( outer != 0 )
      {
        outer = outer->next;
        map = outer == 0 ? 0 : &outer->object[0]/*error:'v'*/;
        if ( map != 0 )
        {
          if ( only_len != 0 && ( strncmp( only, map->address, only_len ) != 0 || ( ( map->address[ only_len ] & 255 ) != 0 && map->address[ only_len ] != '#' ) ) )
            continue;
          else
          {
            fprintf( fp, "\n%s\n", map->title == 0 || ( map->title[0] & 255 ) == 0 ? "[USEMAP]" : map->title );
            fprintf( fp, "%s\n", map->address );
            inner = map->elements;
            count = 0;
            while ( 1 )
            {
              if ( inner != 0 )
              {
                inner = inner->next;
                elt = inner == 0 ? 0 : &inner->object[0]/*error:'v'*/;
                if ( elt == 0 )
                  continue;
                else
                {
                  fprintf( fp, "%4d. %s", count, elt->address );
                  fputc( 10, fp );
                  count++;
                }
              }
              elt = inner == 0 ? 0 : &inner->object[0]/*error:'v'*/;
            }
          }
        }
      }
      map = outer == 0 ? 0 : &outer->object[0]/*error:'v'*/;
    }
    while ( elt != 0 );
  }
  return;
}
