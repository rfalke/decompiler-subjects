#include "LYList.c.h"
int showlist( DocInfo *newdoc, BOOLEAN titles )
{
  static char tempfile[256];
  static BOOLEAN last_titles = 1;
  int cnt;
  int refs, hidden_links;
  FILE *fp0;
  char *Address = 0, *Title = 0, *cp = 0;
  char *LinkTitle = 0;
  BOOLEAN intern_w_post = 0;
  char *desc = "unknown field or link";
  void *helper;
  refs = HText_sourceAnchors( HTMainText );
  hidden_links = HText_HiddenLinkCount( HTMainText );
  if ( refs <= 0 && hidden_links > 0 && LYHiddenLinks != 1 )
  {
    HTUserMsg( gettext( "There are only hidden links from this document." ) );
    return -1;
  }
  if ( refs <= 0 && hidden_links <= 0 )
  {
    HTUserMsg( gettext( "There are no references from this document." ) );
    return -1;
  }
  fp0 = InternalPageFP( tempfile, titles == last_titles );
  if ( fp0 == 0 )
  {
    return -1;
  }
  LYLocalFileToURL( &newdoc->address, tempfile );
  LYRegisterUIPage( &newdoc->address, 11 );
  last_titles = titles;
  LYforce_HTML_mode = 1;
  LYforce_no_cache = 1;
  BeginInternalPage( fp0, gettext( "List Page" ), "keystrokes/follow_help.html.gz" );
  HTSACopy( &Address, HTLoadedDocumentURL( ) );
  LYEntify( &Address, 0 );
  fprintf( fp0, "%s%s&lt;p&gt;\n", gettext( "References in " ), Address == 0 || Address[0] == 0 ? gettext( "References in " ) : Address );
  if ( Address )
  {
    free( Address );
    Address = 0;
  }
  if ( refs > 0 )
  {
    fprintf( fp0, "&lt;%s compact&gt;\n", keypad_mode ? "ul" : "ol" );
    if ( hidden_links > 0 )
    {
      fprintf( fp0, "&lt;lh&gt;&lt;em&gt;%s&lt;/em&gt;\n", gettext( "Visible links:" ) );
    }
  }
  if ( hidden_links > 0 && LYHiddenLinks == 2 )
    hidden_links = 0;
  helper = 0;
  cnt = 1;
  for ( ; cnt <= refs;  )
  {
    HTChildAnchor *child = HText_childNextNumber( cnt, &helper );
    HTAnchor *dest_intl = 0;
    HTAnchor *dest;
    HTParentAnchor *parent;
    char *address;
    char *title;
    if ( child == 0 )
    {
      if ( keypad_mode == 3 || keypad_mode == 2 )
      {
        HText_FormDescNumber( cnt, &desc );
        fprintf( fp0, "&lt;li&gt;&lt;a id=%d href=\"#%d\"&gt;form field&lt;/a&gt; = &lt;em&gt;%s&lt;/em&gt;\n", cnt, cnt, desc );
      }
    }
    else
    {
      dest = dest_intl ? dest_intl : HTAnchor_followLink( child );
      parent = HTAnchor_parent( dest );
      if ( intern_w_post == 0 && dest_intl && HTMainAnchor && HTMainAnchor->post_data && parent->post_data && ( HTSABEql( &HTMainAnchor->post_data, &parent->post_data ) & 255 ) )
        intern_w_post = 1;
      address = HTAnchor_address( dest );
      title = 0;
      if ( dest_intl )
        HTSprintf0( &LinkTitle, "(internal)" );
      else
      if ( titles && child->type && child->dest == dest && strncmp( &child->type->name, "RelTitle: ", 10 ) == 0 )
        HTSprintf0( &LinkTitle, "(%s)", child->type->name[10] );
      else
      if ( LinkTitle )
      {
        free( LinkTitle );
        LinkTitle = 0;
      }
      HTSACopy( &Address, address );
      if ( address )
      {
        free( address );
        address = 0;
      }
      LYEntify( &Address, 1 );
      if ( title && title[0] )
      {
        LYformTitle( &Title, title );
        LYEntify( &Title, 1 );
        if ( Title[0] )
        {
          cp = strchr( Address, '#' );
        }
        else
        if ( Title )
        {
          free( Title );
          Title = 0;
        }
      }
      fprintf( fp0, "&lt;li&gt;&lt;a href=\"%s\"%s&gt;%s%s%s%s%s&lt;/a&gt;\n", Address, "", "", "", Address, "", "" );
      if ( Address )
      {
        free( Address );
        Address = 0;
      }
      if ( Title )
      {
        free( Title );
        Title = 0;
      }
    }
    cnt++;
  }
  if ( LinkTitle )
  {
    free( LinkTitle );
    LinkTitle = 0;
  }
  if ( hidden_links > 0 )
  {
    if ( refs > 0 )
    {
      fprintf( fp0, "\n&lt;/%s&gt;\n\n&lt;p&gt;\n", keypad_mode ? "ul" : "ol" );
    }
    fprintf( fp0, "&lt;%s compact&gt;\n", keypad_mode ? "ul" : "ol continue" );
    fprintf( fp0, "&lt;lh&gt;&lt;em&gt;%s&lt;/em&gt;\n", gettext( "Hidden links:" ) );
  }
  cnt = 0;
  for ( ; cnt < hidden_links; cnt++ )
  {
    HTSACopy( &Address, HText_HiddenLinkAt( HTMainText, cnt ) );
    LYEntify( &Address, 0 );
    if ( Address == 0 || Address[0] == 0 )
    {
      if ( Address )
      {
        free( Address );
        Address = 0;
      }
    }
    else
    {
      fprintf( fp0, "&lt;li&gt;&lt;a href=\"%s\"&gt;%s&lt;/a&gt;\n", Address, Address );
      if ( Address )
      {
        free( Address );
        Address = 0;
      }
    }
    // cnt++;
  }
  fprintf( fp0, "\n&lt;/%s&gt;\n", keypad_mode ? "ul" : "ol" );
  EndInternalPage( fp0 );
  LYCloseTempFP( fp0 );
  if ( intern_w_post )
    newdoc->internal_link = 1;
  else
  {
    LYFreePostData( newdoc );
    newdoc->internal_link = 0;
  }
  newdoc->isHEAD = 0;
  newdoc->safe = 0;
  return 0;
}
void print_refs( FILE *fp, BOOLEAN titles, int refs )
{
  int cnt;
  char *address = 0;
  char *desc = gettext( "unknown field or link" );
  void *helper = 0;
  cnt = 1;
  for ( ; cnt <= refs;  )
  {
    HTChildAnchor *child = HText_childNextNumber( cnt, &helper );
    HTAnchor *dest;
    HTParentAnchor *parent;
    char *title;
    if ( child == 0 )
    {
      if ( keypad_mode == 3 || keypad_mode == 2 )
      {
        HText_FormDescNumber( cnt, &desc );
        fprintf( fp, "%4d. form field = %s\n", cnt, desc );
      }
    }
    else
    {
      dest = HTAnchor_followLink( child );
      if ( dest != child )
      {
        parent = HTAnchor_parent( dest );
        title = 0;
        address = HTAnchor_address( dest );
        if ( keypad_mode == 1 || keypad_mode == 2 )
          fprintf( fp, "%4d. ", cnt );
        fprintf( fp, "%s%s\n", "", address );
        if ( address )
        {
          free( address );
          address = 0;
        }
      }
    }
    cnt++;
  }
  return;
}
void print_hidden_refs( FILE *fp, int refs, int hidden_links )
{
  int cnt;
  char *address = 0;
  fprintf( fp, "%s   %s\n", "", gettext( "Hidden links:" ) );
  cnt = 0;
  for ( ; cnt < hidden_links; cnt++ )
  {
    HTSACopy( &address, HText_HiddenLinkAt( HTMainText, cnt ) );
    if ( address == 0 || address[0] == 0 )
    {
      if ( address )
      {
        free( address );
        address = 0;
      }
    }
    else
    {
      if ( keypad_mode == 1 || keypad_mode == 2 )
        fprintf( fp, "%4d. ", refs + cnt + 1 );
      fprintf( fp, "%s\n", address );
      if ( address )
      {
        free( address );
        address = 0;
      }
    }
    // cnt++;
  }
  return;
}
void printlist( FILE *fp, BOOLEAN titles )
{
  int refs = HText_sourceAnchors( HTMainText ), hidden_links;
  if ( refs > 0 || LYHiddenLinks == 1 )
  {
    hidden_links = HText_HiddenLinkCount( HTMainText );
    if ( refs > 0 || hidden_links > 0 )
    {
      switch ( keypad_mode )
      {
      case 1:
      case 2:
      case 3:
        fprintf( fp, "\n%s\n\n", gettext( "References" ) );
        if ( LYHiddenLinks == 2 )
          hidden_links = 0;
        if ( hidden_links > 0 )
        {
          fprintf( fp, "   %s\n", gettext( "Visible links" ) );
        }
        print_refs( fp, titles, refs );
        if ( hidden_links > 0 )
          print_hidden_refs( fp, refs, hidden_links );
        break;
      default:
        break;
      }
      return;
    }
  }
  LYPrintImgMaps( fp );
  return;
}
#if 0
#endif
