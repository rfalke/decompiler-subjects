#include "LYHistory.c.h"
static void trace_history( char *tag );
static void clean_extra_history( void );
static int are_identical( HistInfo *doc, DocInfo *doc1 );
static void to_stack( char *str );
static int LYLoadMESSAGES( char *arg, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *sink );
HTList *Visited_Links;
int Visited_Links_As = 6;
static VisitedLink *PrevVisitedLink;
static VisitedLink *PrevActiveVisitedLink;
static VisitedLink Latest_first;
static VisitedLink Latest_last;
static VisitedLink *Latest_tree;
static VisitedLink *First_tree;
static VisitedLink *Last_by_first;
int nhist_extra;
static char *buffstack[40];
static int topOfStack;
HTProtocol LYLynxStatusMessages = { "LYNXMESSAGES", &LYLoadMESSAGES, 0,  }
;
void trace_history( char *tag )
{
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    if ( ( WWW_TraceFlag & 255 ) == 0 )
      goto B3;
    else
    {
      fprintf( TraceFP( ), "HISTORY %s %d/%d (%d extra)\n", tag, nhist, size_history, nhist_extra );
    }
B3:    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fflush( TraceFP( ) );
    }
  }
  return;
}
void LYAddVisitedLink( DocInfo *doc )
{
  VisitedLink *tmp;
  HTList *cur;
  char *title = doc->title == 0 ? gettext( "(No title.)" ) : doc->title;
  if ( doc->address == 0 || ( doc->address[0] & 255 ) == 0 )
  {
    PrevVisitedLink = 0;
  }
  else
  {
    if ( doc->post_data != 0 || ( doc->isHEAD & 255 ) != 0 || doc->bookmark != 0 || strncmp( doc->address, "LYNX", 4 ) == 0 || strncmp( doc->address, "file://localhost/", 17 ) == 0 )
    {
      int related = 1;
      if ( ( LYIsUIPage3( doc->address, 0, 1 ) & 255 ) == 0 && ( LYIsUIPage3( doc->address, 5, 1 ) & 255 ) == 0 && ( LYIsUIPage3( doc->address, 3, 1 ) & 255 ) == 0 && strncasecomp( doc->address, "LYNXMESSAGES:", 13 ) != 0 )
      {
        related = 0;
        if ( related != 0 || ( LYIsUIPage3( doc->address, 8, 1 ) & 255 ) != 0 || ( LYIsUIPage3( doc->address, 10, 1 ) & 255 ) != 0 || ( LYIsUIPage3( doc->address, 9, 1 ) & 255 ) != 0 || ( LYIsUIPage3( doc->address, 2, 1 ) & 255 ) != 0 || ( LYIsUIPage3( doc->address, 1, 1 ) & 255 ) != 0 || ( LYIsUIPage3( doc->address, 7, 1 ) & 255 ) != 0 || strncasecomp( doc->address, "LYNXKEYMAP:", 11 ) == 0 || ( LYIsUIPage3( doc->address, 4, 1 ) & 255 ) != 0 || ( LYIsUIPage3( doc->address, 12, 1 ) & 255 ) != 0 || ( LYIsUIPage3( doc->address, 6, 1 ) & 255 ) != 0 || strncasecomp( doc->address, "LYNXCOOKIE:", 11 ) == 0 || ( LYIsUIPage3( doc->address, 13, 1 ) & 255 ) != 0 )
          goto B18;
      }
B18:      if ( related == 0 )
      {
        PrevVisitedLink = 0;
      }
    }
    if ( Visited_Links == 0 )
    {
      Visited_Links = HTList_new( );
      Latest_last.prev_latest = &Latest_first;
      Latest_first.next_latest = &Latest_last;
      Latest_last.next_latest = 0;
      Latest_first.prev_latest = 0;
      Last_by_first = Latest_tree = First_tree = 0;
    }
    cur = Visited_Links;
    do
    {
      if ( cur != 0 )
      {
        cur = cur->next;
        tmp = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
        if ( tmp != 0 )
        {
        }
        else
        {
          tmp = calloc( 1, sizeof( VisitedLink ) );
          if ( tmp == 0 )
            outofmem( "./LYHistory.c", "LYAddVisitedLink" );
          HTSACopy( &tmp->address, doc->address );
          LYformTitle( &tmp->title, title );
          HTList_appendObject( Visited_Links, (void*)tmp );
          tmp->prev_first = Last_by_first;
          Last_by_first = tmp;
          if ( PrevVisitedLink != 0 )
          {
            VisitedLink *a = PrevVisitedLink;
            VisitedLink *b = a->next_tree;
            int l = PrevVisitedLink->level;
            for ( ; b != 0 && l < b->level; b = b->next_tree )
            {
              a = b;
              //b = b->next_tree;
            }
            if ( b == 0 )
              Latest_tree = tmp;
            tmp->next_tree = a->next_tree;
            a->next_tree = tmp;
            tmp->level = PrevVisitedLink->level + 1;
          }
          else
          {
            if ( Latest_tree != 0 )
              Latest_tree->next_tree = tmp;
            tmp->level = 0;
            tmp->next_tree = 0;
            Latest_tree = tmp;
          }
          PrevVisitedLink = PrevActiveVisitedLink = tmp;
          if ( First_tree == 0 )
            First_tree = tmp;
          Latest_last.prev_latest->next_latest = tmp;
          tmp->prev_latest = Latest_last.prev_latest;
          tmp->next_latest = &Latest_last;
          Latest_last.prev_latest = tmp;
          break;
        }
      }
      tmp = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
    }
    while ( strcmp( tmp->address == 0 ? "" : tmp->address, doc->address == 0 ? "" : doc->address ) != 0 );
    PrevVisitedLink = PrevActiveVisitedLink = tmp;
    if ( tmp->next_latest != Latest_last.title )
    {
      &tmp->prev_latest = (char*)tmp->next_latest;
      &tmp->next_latest = (char*)tmp->prev_latest;
      Latest_last.prev_latest->next_latest = tmp;
      tmp->prev_latest = Latest_last.prev_latest;
      tmp->next_latest = &Latest_last;
      Latest_last.prev_latest = tmp;
    }
  }
  return;
}
BOOLEAN LYwouldPush( char *title, char *docurl )
{
  BOOLEAN rc = 0;
  if ( docurl != 0 )
  {
    size_t ulen;
    if ( strncmp( docurl, "file://localhost/", 17 ) == 0 )
    {
      ulen = strlen( docurl );
      if ( ulen <= 5 || strcmp( &docurl[ ulen - 5 ], ".html" ) != 0 )
        goto B9;
    }
B9:    return 1;
  }
  if ( docurl != 0 )
  {
    rc = ( LYIsUIPage3( docurl, 0, 1 ) & 255 ) == 0 && ( LYIsUIPage3( docurl, 2, 1 ) & 255 ) == 0 && ( LYIsUIPage3( docurl, 8, 1 ) & 255 ) == 0 && ( LYIsUIPage3( docurl, 10, 1 ) & 255 ) == 0 && ( LYIsUIPage3( docurl, 9, 1 ) & 255 ) == 0 ? 1 : 0;
  }
  else
  {
    rc = strcmp( title, gettext( "History Page" ) ) == 0 || strcmp( title, gettext( "Printing Options" ) ) == 0 || strcmp( title, gettext( "File Management Options" ) ) == 0 || strcmp( title, gettext( "Upload Options" ) ) == 0 || strcmp( title, gettext( "File Permission Options" ) ) == 0 ? 0 : 1;
  }
  return 1;
}
void LYFreePostData( DocInfo *doc )
{
  HTSABFree( &doc->post_data );
  if ( doc->post_content_type != 0 )
  {
    free( doc->post_content_type );
    doc->post_content_type = 0;
  }
  return;
}
void LYFreeDocInfo( DocInfo *doc )
{
  if ( doc->title != 0 )
  {
    free( doc->title );
    doc->title = 0;
  }
  if ( doc->address != 0 )
  {
    free( doc->address );
    doc->address = 0;
  }
  if ( doc->bookmark != 0 )
  {
    free( doc->bookmark );
    doc->bookmark = 0;
  }
  LYFreePostData( doc );
  return;
}
void clean_extra_history( void )
{
  trace_history( "clean_extra_history" );
  nhist += nhist_extra;
  for ( ; nhist_extra >= 1; nhist_extra-- )
  {
    nhist--;
    LYFreeDocInfo( &history[ nhist ].hdoc );
    //nhist_extra--;
  }
  trace_history( "...clean_extra_history" );
  return;
}
int are_identical( HistInfo *doc, DocInfo *doc1 )
{
  return strcmp( doc1->address, doc->hdoc.address ) != 0 || ( HTSABEql( doc1->post_data, doc->hdoc.post_data ) & 255 ) == 0 ? 0 : 1;
}
void LYAllocHistory( int entries )
{
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "LYAllocHistory %d vs %d\n", entries, size_history );
  }
  if ( size_history <= entries + 1 )
  {
    unsigned int want;
    int save = size_history;
    size_history = ( entries * 2 ) + 4;
    want = size_history * 44;
    if ( history == 0 )
    {
      history = malloc( want );
    }
    else
    {
      history = realloc( history, want );
    }
    if ( history == 0 )
    {
      outofmem( "./LYHistory.c", "LYAllocHistory" );
    }
    while ( save < size_history )
    {
      memset( history[ save ].hdoc.title, 0, 44 );
      save++;
    }
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "...LYAllocHistory %d vs %d\n", entries, size_history );
    return;
  }
  else
  {
    return;
  }
}
int LYpush( DocInfo *doc, BOOLEAN force_push )
{
  if ( ( doc->address[0] & 255 ) == 0 )
  {
    return 0;
  }
  if ( force_push == 0 && ( LYwouldPush( doc->title, doc->address ) & 255 ) == 0 )
  {
    if ( ( LYforce_no_cache & 255 ) == 0 )
      LYoverride_no_cache = 1;
    return 0;
  }
  else
  {
    if ( nhist >= 1 && are_identical( &history[ nhist - 1 ], doc ) != 0 && history[ nhist - 1 ].hdoc.internal_link == doc->internal_link )
    {
      history[ nhist - 1 ].hdoc.link = doc->link;
      history[ nhist - 1 ].hdoc.line = doc->line;
      return 0;
    }
    if ( nhist_extra >= 1 && are_identical( &history[ nhist ], doc ) != 0 )
    {
      history[ nhist ].hdoc.link = doc->link;
      history[ nhist ].hdoc.line = doc->line;
      nhist_extra--;
      LYAllocHistory( nhist );
      nhist++;
      trace_history( "LYpush: just move the cursor" );
      return 1;
    }
    clean_extra_history( );
    LYAllocHistory( nhist );
    history[ nhist ].hdoc.link = doc->link;
    history[ nhist ].hdoc.line = doc->line;
    history[ nhist ].hdoc.title = 0;
    LYformTitle( &history[ nhist ].hdoc.title, doc->title );
    history[ nhist ].hdoc.address = 0;
    HTSACopy( &history[ nhist ].hdoc.address, doc->address );
    history[ nhist ].hdoc.post_data = 0;
    HTSABCopy( &history[ nhist ].hdoc.post_data, doc->post_data == 0 ? 0 : doc->post_data->str, doc->post_data == 0 ? 0 : doc->post_data->len );
    history[ nhist ].hdoc.post_content_type = 0;
    HTSACopy( &history[ nhist ].hdoc.post_content_type, doc->post_content_type );
    history[ nhist ].hdoc.bookmark = 0;
    HTSACopy( &history[ nhist ].hdoc.bookmark, doc->bookmark );
    history[ nhist ].hdoc.isHEAD = doc->isHEAD;
    history[ nhist ].hdoc.safe = doc->safe;
    history[ nhist ].hdoc.internal_link = 0;
    history[ nhist ].intern_seq_start = -1;
    if ( ( doc->internal_link & 255 ) != 0 )
    {
      if ( nhist >= 1 )
      {
        DocAddress WWWDoc;
        HTParentAnchor *thisparent, *thatparent = 0;
        WWWDoc.address = doc->address;
        WWWDoc.post_data = doc->post_data;
        WWWDoc.post_content_type = doc->post_content_type;
        WWWDoc.bookmark = doc->bookmark;
        WWWDoc.isHEAD = doc->isHEAD;
        WWWDoc.safe = doc->safe;
        thisparent = HTAnchor_findAddress( &WWWDoc );
        if ( thisparent != 0 )
        {
          if ( strncasecomp( history[ nhist - 1 ].hdoc.address, "LYNXIMGMAP:", 11 ) == 0 && strncasecomp( doc->address, "LYNXIMGMAP:", 11 ) != 0 )
            WWWDoc.address = &history[ nhist - 1 ].hdoc.address[11];
          else
          {
            if ( strncasecomp( doc->address, "LYNXIMGMAP:", 11 ) == 0 && strncasecomp( history[ nhist - 1 ].hdoc.address, "LYNXIMGMAP:", 11 ) != 0 )
            {
              char *temp = 0;
              HTSACopy( &temp, "LYNXIMGMAP:" );
              HTSACat( &temp, &doc->address[11] );
              WWWDoc.address = temp;
              WWWDoc.post_content_type = history[ nhist - 1 ].hdoc.post_content_type;
              WWWDoc.bookmark = history[ nhist - 1 ].hdoc.bookmark;
              WWWDoc.isHEAD = history[ nhist - 1 ].hdoc.isHEAD;
              WWWDoc.safe = history[ nhist - 1 ].hdoc.safe;
              thatparent = HTAnchor_findAddress( &WWWDoc );
              if ( temp != 0 )
              {
                free( temp );
                temp = 0;
              }
            }
            else
              WWWDoc.address = history[ nhist - 1 ].hdoc.address;
          }
          if ( thatparent == 0 )
          {
            WWWDoc.post_data = history[ nhist - 1 ].hdoc.post_data;
            WWWDoc.post_content_type = history[ nhist - 1 ].hdoc.post_content_type;
            WWWDoc.bookmark = history[ nhist - 1 ].hdoc.bookmark;
            WWWDoc.isHEAD = history[ nhist - 1 ].hdoc.isHEAD;
            WWWDoc.safe = history[ nhist - 1 ].hdoc.safe;
            thatparent = HTAnchor_findAddress( &WWWDoc );
          }
          if ( thisparent == thatparent && ( HTMainText == 0 || thisparent == HTMainAnchor ) )
          {
            history[ nhist ].hdoc.internal_link = 1;
            history[ nhist ].intern_seq_start = history[ nhist - 1 ].intern_seq_start < 0 ? nhist - 1 : history[ nhist - 1 ].intern_seq_start;
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), "\nLYpush: pushed as internal link, OK\n" );
            }
          }
        }
      }
      if ( ( history[ nhist ].hdoc.internal_link & 255 ) == 0 && ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "\nLYpush: push as internal link requested, %s\n", "but didn't check out!" );
      }
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "\nLYpush[%d]: address:%s\n        title:%s\n", nhist, doc->address, doc->title );
    }
    nhist++;
    return 1;
  }
}
void LYpop( DocInfo *doc )
{
  if ( nhist >= 1 )
  {
    clean_extra_history( );
    nhist--;
    LYFreeDocInfo( doc );
    doc->title = history[ nhist ].hdoc.title;
    doc->address = history[ nhist ].hdoc.address;
    doc->post_data = history[ nhist ].hdoc.post_data;
    doc->post_content_type = history[ nhist ].hdoc.post_content_type;
    doc->bookmark = history[ nhist ].hdoc.bookmark;
    doc->isHEAD = history[ nhist ].hdoc.isHEAD;
    doc->link = history[ nhist ].hdoc.link;
    doc->line = history[ nhist ].hdoc.line;
    doc->internal_link = history[ nhist ].hdoc.internal_link;
    doc->style = history[ nhist ].hdoc.style;
    LYSetNewline( doc->line );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "LYpop[%d]: address:%s\n     title:%s\n", nhist, doc->address, doc->title );
    }
  }
  return;
}
void LYhist_prev( DocInfo *doc )
{
  trace_history( "LYhist_prev" );
  if ( nhist >= 1 && ( nhist_extra != 0 || nhist < size_history ) )
  {
    nhist--;
    nhist_extra++;
    LYpop_num( nhist, doc );
    trace_history( "...LYhist_prev" );
  }
  return;
}
void LYhist_prev_register( DocInfo *doc )
{
  trace_history( "LYhist_prev_register" );
  if ( nhist > 1 )
  {
    if ( nhist_extra != 0 )
    {
      history[ nhist ].hdoc.link = doc->link;
      history[ nhist ].hdoc.line = doc->line;
    }
    else
    {
      if ( LYpush( doc, 0 ) != 0 )
      {
        nhist--;
        nhist_extra++;
      }
    }
    trace_history( "...LYhist_prev_register" );
  }
  return;
}
int LYhist_next( DocInfo *doc, DocInfo *newdoc )
{
  if ( nhist_extra <= 1 )
  {
    return 0;
  }
  history[ nhist ].hdoc.link = doc->link;
  history[ nhist ].hdoc.line = doc->line;
  LYAllocHistory( nhist );
  nhist++;
  nhist_extra--;
  LYpop_num( nhist, newdoc );
  return 1;
}
void LYpop_num( int number, DocInfo *doc )
{
  if ( number >= 0 && number < nhist_extra + nhist )
  {
    doc->link = history[ number ].hdoc.link;
    doc->line = history[ number ].hdoc.line;
    HTSACopy( &doc->title, history[ number ].hdoc.title );
    HTSACopy( &doc->address, history[ number ].hdoc.address );
    HTSABCopy( &doc->post_data, history[ number ].hdoc.post_data == 0 ? 0 : history[ number ].hdoc.post_data->str, history[ number ].hdoc.post_data == 0 ? 0 : history[ number ].hdoc.post_data->len );
    HTSACopy( &doc->post_content_type, history[ number ].hdoc.post_content_type );
    HTSACopy( &doc->bookmark, history[ number ].hdoc.bookmark );
    doc->isHEAD = history[ number ].hdoc.isHEAD;
    doc->safe = history[ number ].hdoc.safe;
    doc->internal_link = history[ number ].hdoc.internal_link;
    LYSetNewline( doc->line );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "LYpop_num(%d)\n", number );
      }
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "  link    %d\n", doc->link );
      }
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "  line    %d\n", doc->line );
      }
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "  title   %s\n", doc->title == 0 ? "" : doc->title );
      }
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "  address %s\n", doc->address == 0 ? "" : doc->address );
      }
    }
  }
  return;
}
int showhistory( char **newfile )
{
  static char tempfile[256];
  char *Title = 0;
  int x = 0;
  FILE *fp0 = InternalPageFP( tempfile, 1 );
  if ( fp0 == 0 )
  {
    return -1;
  }
  LYLocalFileToURL( newfile, tempfile );
  LYforce_HTML_mode = 1;
  LYforce_no_cache = 1;
  BeginInternalPage( fp0, gettext( "History Page" ), "keystrokes/history_help.html.gz" );
  fprintf( fp0, "&lt;p align=right&gt; &lt;a href=\"%s\"&gt;[%s]&lt;/a&gt;\n", "LYNXMESSAGES:", gettext( "Your recent statusline messages" ) );
  fwrite( "&lt;pre&gt;\n", 1, 6, fp0 );
  fprintf( fp0, "&lt;em&gt;%s&lt;/em&gt;\n", gettext( "You selected:" ) );
  x = ( nhist_extra + nhist ) - 1;
  for ( ; x < 0; x-- )
  {
    if ( history[ x ].hdoc.title != 0 )
    {
      HTSACopy( &Title, history[ x ].hdoc.title );
      LYEntify( &Title, 1 );
      LYTrimLeading( Title );
      LYTrimTrailing( Title );
      if ( ( Title[0] & 255 ) == 0 )
      {
        HTSACopy( &Title, gettext( "(No title.)" ) );
      }
    }
    else
    {
      HTSACopy( &Title, gettext( "(No title.)" ) );
    }
    fprintf( fp0, "%s&lt;em&gt;%d&lt;/em&gt;. &lt;tab id=t%d&gt;&lt;a href=\"%s%d\"&gt;%s&lt;/a&gt;\n", x <= 99 ? x <= 9 ? "  " : " " : "", x, x, "LYNXHIST:", x, Title );
    if ( history[ x ].hdoc.address != 0 )
    {
      HTSACopy( &Title, history[ x ].hdoc.address );
      LYEntify( &Title, 1 );
    }
    HTSACopy( &Title, gettext( "(no address)" ) );
    if ( ( history[ x ].hdoc.internal_link & 255 ) != 0 )
    {
      if ( history[ x ].intern_seq_start == history[ nhist - 1 ].intern_seq_start )
      {
        HTSACat( &Title, gettext( " (internal)" ) );
      }
      HTSACat( &Title, gettext( " (was internal)" ) );
    }
    fprintf( fp0, "&lt;tab to=t%d&gt;%s\n", x, Title );
    //x--;
  }
}
BOOLEAN historytarget( DocInfo *newdoc )
{
  int number;
  DocAddress WWWDoc;
  HTParentAnchor *tmpanchor;
  HText *text;
  BOOLEAN treat_as_intern = 0;
  if ( newdoc == 0 || newdoc->address == 0 || strlen( newdoc->address ) <= 9 || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( newdoc->address[9] * 2 )) & 2048 ) == 0 )
  {
  }
  else
  {
    number = atoi( &newdoc->address[9] );
    if ( nhist_extra + nhist < number || number < 0 )
    {
    }
    else
    {
      if ( HTMainText != 0 && nhist >= 1 && strcmp( HTLoadedDocumentTitle( ), gettext( "History Page" ) ) == 0 && ( LYIsUIPage3( HTLoadedDocumentURL( ), 0, 0 ) & 255 ) != 0 && strcmp( HTLoadedDocumentURL( ), history[ nhist - 1 ].hdoc.address ) != 0 )
        HTuncache_current_document( );
      LYpop_num( number, newdoc );
      if ( ( ( ( newdoc->internal_link & 255 ) == 0 || history[ number ].intern_seq_start != history[ nhist - 1 ].intern_seq_start ) && ( nhist - 1 <= number || ( history[ nhist - 1 ].hdoc.internal_link & 255 ) == 0 || history[ nhist - 1 ].intern_seq_start != number ) ) || ( LYforce_no_cache == 1 && ( LYoverride_no_cache & 255 ) == 0 ) )
        newdoc->internal_link = 0;
      if ( newdoc->post_data != 0 )
      {
        WWWDoc.address = newdoc->address;
        WWWDoc.post_data = newdoc->post_data;
        WWWDoc.post_content_type = newdoc->post_content_type;
        WWWDoc.bookmark = newdoc->bookmark;
        WWWDoc.isHEAD = newdoc->isHEAD;
        WWWDoc.safe = newdoc->safe;
        tmpanchor = HTAnchor_findAddress( &WWWDoc );
        text = HTAnchor_document( tmpanchor );
        if ( ( ( ( LYresubmit_posts == 1 || ( LYforce_no_cache == 1 && ( LYoverride_no_cache & 255 ) == 0 ) ) && ( treat_as_intern == 0 || ( reloading & 255 ) != 0 ) ) || text == 0 ) && ( strncasecomp( newdoc->address, "LYNXIMGMAP:", 11 ) == 0 || HTConfirm( gettext( "Document from Form with POST content.  Resubmit?" ) ) == 1 ) )
        {
          LYforce_no_cache = 1;
          LYoverride_no_cache = 0;
        }
        else
        if ( text != 0 )
        {
          LYforce_no_cache = 0;
          LYoverride_no_cache = 1;
        }
        else
        {
          HTInfoMsg( gettext( "Cancelled!!!" ) );
        }
      }
      if ( number != 0 )
      {
        HTSACat( &newdoc->title, gettext( " (From History)" ) );
      }
    }
  }
  return 0;
}
int LYShowVisitedLinks( char **newfile )
{
  static char tempfile[256];
  char *Title = 0;
  char *Address = 0;
  int x, tot;
  FILE *fp0;
  VisitedLink *vl;
  HTList *cur = Visited_Links;
  int offset;
  int ret = 0;
  char *arrow, *post_arrow;
  if ( cur == 0 )
  {
    return -1;
  }
  fp0 = InternalPageFP( tempfile, 1 );
  if ( fp0 == 0 )
  {
    return -1;
  }
  LYLocalFileToURL( newfile, tempfile );
  LYRegisterUIPage( newfile[0], 5 );
  LYforce_HTML_mode = 1;
  LYforce_no_cache = 1;
  BeginInternalPage( fp0, gettext( "Visited Links Page" ), "keystrokes/visited_help.html.gz" );
  fprintf( fp0, "&lt;form action=\"%s\" method=\"post\"&gt;\n", "LYNXOPTIONS:" );
  LYMenuVisitedLinks( fp0, 0 );
  fwrite( "&lt;input type=\"submit\" value=\"Accept Changes\"&gt;\n", 1, 45, fp0 );
  fwrite( "&lt;/form&gt;\n", 1, 8, fp0 );
  fwrite( "&lt;P&gt;\n", 1, 4, fp0 );
  fwrite( "&lt;pre&gt;\n", 1, 6, fp0 );
  fprintf( fp0, "&lt;em&gt;%s&lt;/em&gt;\n", gettext( "You visited (POSTs, bookmark, menu and list files excluded):" ) );
  if ( ( Visited_Links_As & 4 ) != 0 )
  {
    tot = x = HTList_count( Visited_Links );
  }
  else
  {
    tot = x = -1;
  }
  if ( ( Visited_Links_As & 1 ) != 0 )
  {
    vl = First_tree;
    while ( vl != 0 )
    {
      post_arrow = arrow = "";
      if ( ( Visited_Links_As & 4 ) != 0 )
        x--;
      else
        x++;
      if ( vl == PrevActiveVisitedLink )
      {
        if ( ( Visited_Links_As & 4 ) != 0 )
          ret = ( tot - x ) + 2;
        else
          ret = x + 3;
      }
      if ( vl == PrevActiveVisitedLink )
      {
        post_arrow = "&lt;A NAME=current&gt;&lt;/A&gt;";
        arrow = vl->level == 0 || ( ( ( Visited_Links_As & 1 ) ^ 1 ) & 255 ) != 0 ? "=&gt;" : "==&gt;";
        HTSACat( newfile, "#current" );
      }
      if ( ( Visited_Links_As & 1 ) != 0 )
      {
        offset = vl->level * 2;
        if ( offset > 24 )
          offset = ( offset + 24 ) / 2;
        if ( ( LYcols * 3 ) / 4 < offset )
          offset = ( LYcols * 3 ) / 4;
      }
      else
      {
        offset = x <= 99 ? x <= 9 ? 2 : 1 : 0;
      }
      if ( vl->title != 0 && ( vl->title[0] & 255 ) != 0 )
      {
        HTSACopy( &Title, vl->title );
        LYEntify( &Title, 1 );
        LYTrimLeading( Title );
        LYTrimTrailing( Title );
        if ( ( Title[0] & 255 ) == 0 )
        {
          HTSACopy( &Title, gettext( "(No title.)" ) );
        }
      }
      else
      {
        HTSACopy( &Title, gettext( "(No title.)" ) );
      }
      if ( vl->address != 0 && ( vl->address[0] & 255 ) != 0 )
      {
        HTSACopy( &Address, vl->address );
        LYEntify( &Address, 0 );
        fprintf( fp0, "%-*s%s&lt;em&gt;%d&lt;/em&gt;. &lt;tab id=t%d&gt;&lt;a href=\"%s\"&gt;%s&lt;/a&gt;\n", offset, arrow, post_arrow, x, x, Address, Title );
      }
      fprintf( fp0, "%-*s%s&lt;em&gt;%d&lt;/em&gt;. &lt;tab id=t%d&gt;&lt;em&gt;%s&lt;/em&gt;\n", offset, arrow, post_arrow, x, x, Title );
      if ( Address != 0 )
      {
        HTSACopy( &Address, vl->address );
        LYEntify( &Address, 1 );
      }
      fprintf( fp0, "&lt;tab to=t%d&gt;%s\n", x, Address == 0 ? gettext( "(no address)" ) : Address );
      if ( ( Visited_Links_As & 1 ) == 0 )
      {
        if ( ( Visited_Links_As & 2 ) != 0 )
        {
          if ( ( Visited_Links_As & 4 ) != 0 )
            vl = vl->prev_latest;
          else
            vl = vl->next_latest;
          if ( vl == Latest_last.title || vl == Latest_first.title )
          {
            vl = 0;
          }
        }
        else
        {
          if ( ( Visited_Links_As & 4 ) != 0 )
          {
            vl = vl->prev_first;
          }
          else
          {
            if ( cur != 0 )
            {
              cur = cur->next;
              vl = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
            }
            vl = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
          }
        }
      }
      else
      {
        vl = vl->next_tree;
      }
    }
    fwrite( "&lt;/pre&gt;\n", 1, 7, fp0 );
    EndInternalPage( fp0 );
    LYCloseTempFP( fp0 );
    if ( Title != 0 )
    {
      free( Title );
      Title = 0;
    }
    if ( Address != 0 )
    {
      free( Address );
      Address = 0;
    }
    return ret;
  }
  else
  {
    if ( ( Visited_Links_As & 2 ) != 0 )
    {
      if ( ( Visited_Links_As & 4 ) != 0 )
        vl = Latest_last.prev_latest;
      else
        vl = Latest_first.next_latest;
      if ( vl == Latest_last.title || vl == Latest_first.title )
      {
        vl = 0;
      }
    }
    else
    {
      if ( ( Visited_Links_As & 4 ) != 0 )
      {
        vl = Last_by_first;
      }
      else
      {
        if ( cur != 0 )
        {
          cur = cur->next;
          vl = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
        }
        vl = cur == 0 ? 0 : &cur->object[0]/*error:'v'*/;
      }
    }
  }
}
void to_stack( char *str )
{
  if ( topOfStack > 39 )
    topOfStack = 0;
  if ( buffstack[ topOfStack ] != 0 )
  {
    free( buffstack[ topOfStack ] );
    buffstack[ topOfStack ] = 0;
  }
  buffstack[ topOfStack ] = str;
  topOfStack++;
  if ( topOfStack > 39 )
  {
    topOfStack = 0;
  }
  return;
}
void LYstatusline_messages_on_exit( char **buf )
{
  int i;
  HTSACat( buf, "\n" );
  i = topOfStack - 1;
  while ( i++, i <= 39 )
  {
    if ( buffstack[ i ] == 0 )
      continue;
    else
    {
      HTSACat( buf, buffstack[ i ] );
      HTSACat( buf, "\n" );
    }
  }
  i = -1;
  while ( i++, i < topOfStack )
  {
    if ( buffstack[ i ] == 0 )
      continue;
    else
    {
      HTSACat( buf, buffstack[ i ] );
      HTSACat( buf, "\n" );
    }
  }
  return;
}
void LYstore_message2( char *message, char *argument )
{
  if ( message != 0 )
  {
    char *temp = 0;
    HTSprintf0( &temp, message, argument == 0 ? "" : argument, argument == 0 ? "" : argument, argument == 0 ? "" : argument, argument == 0 ? "" : argument );
    to_stack( temp );
  }
  return;
}
void LYstore_message( char *message )
{
  if ( message != 0 )
  {
    char *temp = 0;
    HTSACopy( &temp, message );
    to_stack( temp );
  }
  return;
}
int LYLoadMESSAGES( char *arg, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *sink )
{
  HTFormat format_in = HTAtom_for( "text/html" );
  HTStream *target = 0;
  char *buf = 0;
  int nummsg = 0;
  int i;
  char *temp = 0;
  i = 40;
  while ( i--, i < 0 )
  {
    if ( buffstack[ i ] != 0 )
    {
      nummsg++;
    }
  }
}
