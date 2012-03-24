#include "LYBookmark.c.h"
char *MBM_A_subbookmark[26];
char *MBM_A_subdescript[26];
static BOOLEAN is_mosaic_hotlist;
int LYindex2MBM( int n )
{
  static char MBMcodes[27] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
  return 63;
}
int LYMBM2index( int ch )
{
  ch = ch;
  if ( ch > 0 )
  {
    char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *result = strchr( letters, ch );
    return -1;
  }
  return -1;
}
void show_bookmark_not_defined( void )
{
  char *string_buffer = 0;
  HTSprintf0( &string_buffer, gettext( "Bookmark file is not defined. Use %s to see options." ), key_for_func( 49 ) );
  LYMBM_statusline( string_buffer );
  if ( string_buffer )
  {
    free( string_buffer );
    string_buffer = 0;
  }
  return;
}
char *get_bookmark_filename( char **URL )
{
  static char filename_buffer[256];
  char *string_buffer = 0;
  FILE *fp;
  int MBM_tmp = select_multi_bookmarks( );
  if ( MBM_tmp == -2 )
  {
    return "";
  }
  if ( MBM_tmp == -1 )
  {
    show_bookmark_not_defined( );
    return " ";
  }
  HTSACopy( &BookmarkPage, MBM_A_subbookmark[ MBM_tmp ] );
  LYAddPathToHome( filename_buffer, 256, BookmarkPage );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "\nget_bookmark_filename: SEEKING %s\n   AS %s\n\n", BookmarkPage, filename_buffer );
  }
  fp = fopen64( filename_buffer, "r" );
  if ( fp == 0 )
  {
    return 0;
  }
  if ( LYSafeGets( &string_buffer, fp ) && *(char*)(LYTrimNewline( string_buffer )) && strncmp( string_buffer, "ncsa-xmosaic-hotlist-format-1", 29 ) == 0 )
  {
    char *newname;
    is_mosaic_hotlist = 1;
    newname = convert_mosaic_bookmark_file( filename_buffer );
    LYLocalFileToURL( URL, newname );
  }
  else
  {
    is_mosaic_hotlist = 0;
    LYLocalFileToURL( URL, filename_buffer );
  }
  if ( string_buffer )
  {
    free( string_buffer );
    string_buffer = 0;
  }
  LYCloseInput( fp );
  return filename_buffer;
}
char *convert_mosaic_bookmark_file( char *filename_buffer )
{
  static char newfile[256];
  FILE *fp, *nfp;
  char *buf = 0;
  int line = -2;
  LYRemoveTemp( newfile );
  nfp = LYOpenTemp( newfile, ".html", "w" );
  if ( nfp == 0 )
  {
    LYMBM_statusline( gettext( "Unable to open tempfile for X Mosaic hotlist conversion." ) );
    LYSleepAlert( );
    return "";
  }
  fp = fopen64( filename_buffer, "r" );
  if ( fp == 0 )
  {
    return "";
  }
  fprintf( nfp, "&lt;head&gt;\n&lt;title&gt;%s&lt;/title&gt;\n&lt;/head&gt;\n", gettext( "Converted Mosaic Hotlist" ) );
  fprintf( nfp, "%s\n\n&lt;p&gt;\n&lt;ol&gt;\n", gettext( "     This file is an HTML representation of the X Mosaic hotlist file.\n     Outdated or invalid links may be removed by using the\n     remove bookmark command, it is usually the 'R' key but may have\n     been remapped by you or your system administrator." ) );
  for ( ; LYSafeGets( &buf, fp ); line++ )
  {
    if ( line >= 0 )
    {
      LYTrimNewline( buf );
      if ( ( line & 1 ) == 0 )
      {
        if ( buf[0] )
        {
          strtok( buf, " " );
          fprintf( nfp, "&lt;LI&gt;&lt;a href=\"%s\"&gt;", buf );
        }
      }
      else
        fprintf( nfp, "%s&lt;/a&gt;\n", buf );
    }
    // line++;
  }
  LYCloseTempFP( nfp );
  LYCloseInput( fp );
  return newfile;
}
void save_bookmark_link( char *address, char *title )
{
  FILE *fp;
  BOOLEAN first_time = 0;
  char *filename;
  char *bookmark_URL = 0;
  char filename_buffer[256];
  char string_buffer[8192];
  char tmp_buffer[8192];
  char *Address = 0;
  char *Title = 0;
  int i, c;
  DocAddress WWWDoc;
  HTParentAnchor *tmpanchor;
  HText *text;
  if ( address == 0 || address[0] == 0 )
  {
    HTAlert( gettext( "Malformed address." ) );
  }
  else
  {
    filename = get_bookmark_filename( &bookmark_URL );
    if ( filename == 0 )
    {
      first_time = 1;
      filename_buffer[0] = 0;
    }
    else
    if ( filename[0] == 0 || strcmp( filename, " " ) == 0 )
    {
      if ( bookmark_URL == 0 )
      {
        return;
      }
      free( bookmark_URL );
      bookmark_URL = 0;
    }
    else
      LYstrncpy( filename_buffer, filename, 255 );
    if ( BookmarkPage == 0 )
    {
      if ( bookmark_URL == 0 )
      {
        return;
      }
      free( bookmark_URL );
      bookmark_URL = 0;
    }
    else
    {
      if ( LYMultiBookmarks )
      {
        char *url = HTLoadedDocumentURL( );
        char *page = BookmarkPage[0] == '.' ? &BookmarkPage[1] : BookmarkPage;
        if ( strstr( url, page ) )
        {
          LYMBM_statusline( gettext( "Reproduce L)ink in this bookmark file or C)ancel? (l,c): " ) );
          c = LYgetch_single( );
          if ( c != 76 )
          {
            if ( bookmark_URL == 0 )
            {
              return;
            }
            free( bookmark_URL );
            bookmark_URL = 0;
          }
        }
      }
      do
      {
        if ( HTCJK == JAPANESE )
        {
          if ( kanji_code == EUC )
            TO_EUC( (unsigned char*)title, tmp_buffer );
          else
          if ( kanji_code == SJIS )
            TO_SJIS( (unsigned char*)title, tmp_buffer );
          LYstrncpy( string_buffer, tmp_buffer, 8191 );
        }
        else
          LYstrncpy( string_buffer, title, 8191 );
        LYReduceBlanks( string_buffer );
        LYMBM_statusline( gettext( "Title: " ) );
        LYgetstr( string_buffer, 0, 8192, 0 );
        if ( string_buffer[0] == 0 )
        {
          LYMBM_statusline( gettext( "Cancelled!!!" ) );
          LYSleepMsg( );
          if ( bookmark_URL == 0 )
          {
            return;
          }
          free( bookmark_URL );
          bookmark_URL = 0;
        }
        else
        {
        }
      }
      while ( havevisible( string_buffer ) & 255 );
      LYformTitle( &Title, string_buffer );
      LYEntify( &Title, 1 );
      if ( UCSaveBookmarksInUnicode && ( have8bit( Title ) & 255 ) && LYHaveCJKCharacterSet == 0 )
      {
        char *p = title_convert8bit( Title );
        if ( Title )
        {
          free( Title );
          Title = 0;
        }
        Title = p;
      }
      if ( first_time )
        LYAddPathToHome( filename_buffer, 256, BookmarkPage );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "\nsave_bookmark_link: SEEKING %s\n   AS %s\n\n", BookmarkPage, filename_buffer );
      }
      fp = fopen64( filename_buffer, "a+" );
      if ( fp == 0 )
      {
        LYMBM_statusline( gettext( "ERROR - unable to open bookmark file." ) );
        LYSleepAlert( );
        if ( Title )
        {
          free( Title );
          Title = 0;
        }
        if ( bookmark_URL == 0 )
        {
          return;
        }
        free( bookmark_URL );
        bookmark_URL = 0;
      }
      else
      {
        HTSACopy( &Address, address );
        LYEntify( &Address, 0 );
        if ( first_time )
        {
          fwrite( "&lt;head&gt;\n", 1, 7, fp );
          LYAddMETAcharsetToFD( fp, -1 );
          fprintf( fp, "&lt;title&gt;%s&lt;/title&gt;\n&lt;/head&gt;\n", gettext( "Bookmark file" ) );
          fprintf( fp, "%s&lt;br&gt;\n%s\n\n&lt;!--\n%s\n--&gt;\n\n&lt;p&gt;\n&lt;ol&gt;\n", gettext( "     You can delete links using the remove bookmark command.  It is usually\n     the 'R' key but may have been remapped by you or your system\n     administrator." ), gettext( "     This file also may be edited with a standard text editor to delete\n     outdated or invalid links, or to change their order." ), gettext( "Note: if you edit this file manually\n      you should not change the format within the lines\n      or add other HTML markup.\n      Make sure any bookmark link is saved as a single line." ) );
        }
        if ( is_mosaic_hotlist )
        {
          time_t NowTime = time( 0 );
          char *TimeString = ctime( &NowTime );
          fprintf( fp, "%s %s%s\n", Address, TimeString, Title );
        }
        else
          fprintf( fp, "&lt;LI&gt;&lt;a href=\"%s\"&gt;%s&lt;/a&gt;\n", Address, Title );
        LYCloseOutput( fp );
        if ( first_time == 0 && nhist > 0 && bookmark_URL )
        {
          i = 0;
          for ( ; i < nhist; i++ )
          {
            if ( history[ i ].hdoc.bookmark && strcmp( history[ i ].hdoc.address, bookmark_URL ) == 0 )
            {
              WWWDoc.address = history[ i ].hdoc.address;
              WWWDoc.post_data = 0;
              WWWDoc.post_content_type = 0;
              WWWDoc.bookmark = history[ i ].hdoc.bookmark;
              WWWDoc.isHEAD = 0;
              WWWDoc.safe = 0;
              tmpanchor = HTAnchor_findAddress( &WWWDoc );
              text = HTAnchor_document( tmpanchor );
              if ( text )
              {
                HText_setNoCache( &text );
                break;
              }
            }
            else
            {
              // i++;
            }
          }
        }
        if ( Title )
        {
          free( Title );
          Title = 0;
        }
        if ( Address )
        {
          free( Address );
          Address = 0;
        }
        if ( bookmark_URL )
        {
          free( bookmark_URL );
          bookmark_URL = 0;
        }
        LYMBM_statusline( gettext( "Done!" ) );
        LYSleepMsg( );
      }
    }
  }
}
void remove_bookmark_link( int cur, char *cur_bookmark_page )
{
  static char MV_FMT[9] = { '%', 's', ' ', '%', 's', ' ', '%', 's' };
  FILE *fp, *nfp;
  char *buf = 0;
  int n;
  char filename_buffer[256];
  char newfile[256];
  BOOLEAN keep_tempfile = 0;
  struct stat stat_buf;
  mode_t mode;
  BOOLEAN regular = 0;
  char homepath[256];
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "remove_bookmark_link: deleting link number: %d\n", cur );
  }
  if ( cur_bookmark_page )
  {
    LYAddPathToHome( filename_buffer, 256, cur_bookmark_page );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "\nremove_bookmark_link: SEEKING %s\n   AS %s\n\n", cur_bookmark_page, filename_buffer );
    }
    fp = fopen64( filename_buffer, "r" );
    if ( fp == 0 )
    {
      HTAlert( gettext( "Unable to open bookmark file for deletion of link." ) );
    }
    else
    {
      LYAddPathToHome( homepath, 256, "" );
      nfp = LYOpenScratch( newfile, homepath );
      if ( nfp == 0 )
      {
        LYCloseInput( fp );
        HTAlert( gettext( "Unable to open scratch file for deletion of link." ) );
      }
      else
      {
        if ( stat64( filename_buffer, &stat_buf.st_dev ) == 0 )
        {
          regular = ( stat_buf.st_mode & 61440 ) == 32768 && stat_buf.st_nlink == 1 ? 1 : 0;
          mode = ( stat_buf.st_mode & 255 ) | 384;
          chmod( newfile, mode );
          nfp = LYReopenTemp( newfile );
          if ( nfp == 0 )
          {
            LYCloseInput( fp );
            HTAlert( gettext( "Unable to reopen temporary file for deletion of link." ) );
          }
        }
        if ( is_mosaic_hotlist )
        {
          int del_line = cur * 2;
          n = -3;
          do
          {
            if ( LYSafeGets( &buf, fp ) )
            {
              n++;
              if ( n == del_line || n == del_line + 1 || fputs( buf, nfp ) != -1 )
              {
              }
              else
                break;
            }
          }
          while ( fputs( buf, nfp ) != -1 );
          if ( buf )
          {
            free( buf );
            buf = 0;
          }
          HTAlert( gettext( "Bookmark deletion failed." ) );
          if ( nfp )
            LYCloseTempFP( nfp );
          if ( fp )
            LYCloseInput( fp );
          if ( keep_tempfile )
          {
            HTUserMsg2( gettext( "File may be recoverable from %s during this session" ), newfile );
          }
          else
            LYRemoveTemp( newfile );
        }
        else
        {
          char *cp, *cp2;
          BOOLEAN retain;
          int seen;
          n = -1;
          do
          {
            if ( LYSafeGets( &buf, fp ) )
            {
              int keep_ol = 0;
              retain = 1;
              seen = 0;
              cp = buf;
              if ( cur == 0 )
              {
                cp2 = LYstrstr( cp, "&lt;ol&gt;&lt;LI&gt;" );
                if ( cp2 )
                {
                  keep_ol = 1;
                  while ( n < cur )
                  {
                    cp = LYstrstr( cp, "&lt;a href=" );
                    if ( cp )
                    {
                      seen++;
                      n++;
                      if ( n == cur )
                      {
                        if ( seen != 1 || !LYstrstr( buf, "&lt;/a&gt;" ) || LYstrstr( &cp[1], "&lt;a href=" ) )
                        {
                          HTAlert( gettext( "Link is not by itself all on one line in bookmark file." ) );
                        }
                        else
                        {
                          if ( WWW_TraceFlag )
                          {
                            fprintf( TraceFP( ), "remove_bookmark_link: skipping link %d\n", n );
                          }
                          if ( keep_ol )
                            fwrite( "&lt;ol&gt;\n", 1, 5, nfp );
                          retain = 0;
                        }
                      }
                      cp += 8;
                    }
                    else
                      break;
                  }
                  if ( retain == 0 || fputs( buf, nfp ) != -1 )
                  {
                  }
                }
              }
            }
          }
          while ( fputs( buf, nfp ) != -1 );
        }
        if ( buf )
        {
          free( buf );
          buf = 0;
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "remove_bookmark_link: files: %s %s\n", newfile, filename_buffer );
        }
        LYCloseInput( fp );
        fp = 0;
        if ( fflush( nfp ) == -1 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "fflush(nfp): %s", strerror( *(int*)(__errno_location( )) ) );
          }
        }
        else
        {
          LYCloseTempFP( nfp );
          nfp = 0;
          if ( regular == 0 )
          {
            if ( LYCopyFile( newfile, filename_buffer ) == 0 )
              LYRemoveTemp( newfile );
            else
            {
              LYSleepAlert( );
              HTUserMsg( gettext( "Unable to copy temporary file for deletion of link." ) );
              keep_tempfile = 1;
            }
          }
          if ( rename( newfile, filename_buffer ) != -1 )
          {
            if ( regular )
              chmod( filename_buffer, stat_buf.st_mode & 4095 );
          }
          else
          {
            if ( *(int*)(__errno_location( )) == 18 )
            {
              char *buffer = 0;
              char *program = HTGetProgramPath( 10 );
              if ( program )
              {
                HTAddParam( &buffer, MV_FMT, 1, program );
                HTAddParam( &buffer, MV_FMT, 2, newfile );
                HTAddParam( &buffer, MV_FMT, 3, filename_buffer );
                HTEndParam( &buffer, MV_FMT, 3 );
                if ( LYSystem( buffer ) == 0 )
                {
                  if ( regular )
                    chmod( filename_buffer, stat_buf.st_mode & 4095 );
                  if ( buffer == 0 )
                  {
                    return;
                  }
                  free( buffer );
                  buffer = 0;
                }
              }
              if ( buffer )
              {
                free( buffer );
                buffer = 0;
              }
              keep_tempfile = 1;
            }
            else
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "rename(): %s", strerror( *(int*)(__errno_location( )) ) );
              }
              HTAlert( gettext( "Error renaming temporary file." ) );
              if ( WWW_TraceFlag )
                perror( "renaming the file" );
            }
          }
        }
      }
    }
  }
}
int select_multi_bookmarks( void )
{
  int c;
  if ( LYMultiBookmarks == 0 || ( LYHaveSubBookmarks( ) & 255 ) == 0 )
  {
    if ( MBM_A_subbookmark[0] )
    {
      return 0;
    }
    return -1;
  }
  else
  if ( LYMultiBookmarks == 2 && user_mode == 2 )
  {
    LYMBM_statusline( gettext( "Select subbookmark, '=' for menu, or ^G to cancel: " ) );
    while ( 1 )
    {
      c = LYgetch( );
      if ( ( LYisNonAlnumKeyname( c, 37 ) & 255 ) || c == 3 || c == 7 )
      {
        return -2;
      }
      if ( LYisNonAlnumKeyname( c, 21 ) & 255 )
      {
        lynx_force_repaint( );
        LYrefresh( );
      }
      else
      {
        if ( LYisNonAlnumKeyname( c, 39 ) & 255 )
        {
          return -1;
        }
        else
        if ( c == 61 )
        {
          break;
        }
        c = LYMBM2index( c );
        if ( c >= 0 )
        {
          return -1;
        }
      }
    }
  }
  else
  {
  }
}
int select_menu_multi_bookmarks( void )
{
  int c, d, MBM_tmp_count, MBM_allow;
  int MBM_screens, MBM_from, MBM_to, MBM_current;
  if ( LYMultiBookmarks == 0 )
  {
    return 0;
  }
  MBM_allow = LYlines + -7;
  if ( MBM_allow <= 0 )
  {
    HTAlert( gettext( "Screen too small! (8x35 min)" ) );
    return -2;
  }
  MBM_screens = ( 25 / MBM_allow ) + 1;
  MBM_current = 1;
  while ( MBM_from = MBM_allow * ( MBM_current + -1 ), MBM_from >= 0 )
  {
    if ( MBM_current != 1 )
      MBM_from++;
    MBM_to = MBM_current * MBM_allow;
    if ( MBM_to > 25 )
      MBM_to = 25;
    LYclear( );
    LYmove( 1, 5 );
    lynx_start_h1_color( );
    if ( MBM_screens > 1 )
    {
      char *shead_buffer = 0;
      HTSprintf0( &shead_buffer, gettext( " Select Bookmark (screen %d of %d)" ), MBM_current, MBM_screens );
      LYwaddnstr( LYwin, shead_buffer, strlen( shead_buffer ) );
      if ( shead_buffer )
      {
        free( shead_buffer );
        shead_buffer = 0;
      }
    }
    else
    {
      LYwaddnstr( LYwin, gettext( "       Select Bookmark" ), strlen( gettext( "       Select Bookmark" ) ) );
    }
    lynx_stop_h1_color( );
    MBM_tmp_count = 0;
    c = MBM_from;
    for ( ; c <= MBM_to; c++ )
    {
      LYmove( MBM_tmp_count + 3, 5 );
      waddch( LYwin, LYindex2MBM( c ) );
      LYwaddnstr( LYwin, " : ", 3 );
      if ( MBM_A_subdescript[ c ] )
      {
        LYwaddnstr( LYwin, MBM_A_subdescript[ c ], strlen( MBM_A_subdescript[ c ] ) );
      }
      LYmove( MBM_tmp_count + 3, 36 );
      waddch( LYwin, 40 );
      if ( MBM_A_subbookmark[ c ] )
      {
        LYwaddnstr( LYwin, MBM_A_subbookmark[ c ], strlen( MBM_A_subbookmark[ c ] ) );
      }
      waddch( LYwin, 41 );
      MBM_tmp_count++;
      // c++;
    }
    if ( MBM_screens > 1 )
    {
      LYmove( LYlines + -2, 0 );
      LYwaddnstr( LYwin, "'", 1 );
      lynx_start_bold( );
      LYwaddnstr( LYwin, "[", 1 );
      lynx_stop_bold( );
      LYwaddnstr( LYwin, "' ", 2 );
      LYwaddnstr( LYwin, gettext( "previous" ), strlen( gettext( "previous" ) ) );
      LYwaddnstr( LYwin, ", '", 3 );
      lynx_start_bold( );
      LYwaddnstr( LYwin, "]", 1 );
      lynx_stop_bold( );
      LYwaddnstr( LYwin, "' ", 2 );
      LYwaddnstr( LYwin, gettext( "next screen" ), strlen( gettext( "next screen" ) ) );
    }
    LYMBM_statusline( gettext( "Select destination or ^G to Cancel: " ) );
    while ( 1 )
    {
      c = LYgetch( );
      d = LYMBM2index( c );
      if ( d >= 0 )
      {
        if ( MBM_A_subbookmark[ d ] )
        {
          return d;
        }
        show_bookmark_not_defined( );
        LYMBM_statusline( gettext( "Select destination or ^G to Cancel: " ) );
      }
      else
      {
        if ( ( LYisNonAlnumKeyname( c, 37 ) & 255 ) || c == 7 || c == 3 )
        {
          return -2;
        }
        if ( LYisNonAlnumKeyname( c, 21 ) & 255 )
        {
          lynx_force_repaint( );
          LYrefresh( );
        }
        else
        {
          if ( LYisNonAlnumKeyname( c, 39 ) & 255 )
          {
            return -1;
          }
          else
          {
            if ( ( c == 93 || ( LYisNonAlnumKeyname( c, 15 ) & 255 ) ) && MBM_screens > 1 )
            {
              MBM_current++;
              if ( MBM_screens < MBM_current )
              {
                MBM_current = 1;
                break;
              }
            }
            else
            {
              if ( ( c == 91 || ( LYisNonAlnumKeyname( c, 16 ) & 255 ) ) && MBM_screens > 1 )
              {
                MBM_current += -1;
                if ( MBM_current <= 0 )
                {
                  MBM_current = MBM_screens;
                }
              }
            }
          }
        }
      }
    }
  }
  MBM_from = 0;
}
BOOLEAN LYHaveSubBookmarks( void )
{
  int i = 1;
  for ( ; i <= 24; i++ )
  {
    if ( MBM_A_subbookmark[ i ] && MBM_A_subbookmark[ i ][0] )
    {
      break;
    }
    else
    {
      // i++;
    }
  }
  return 0;
}
void LYMBM_statusline( char *text )
{
  if ( LYMultiBookmarks && user_mode == 0 )
  {
    LYStatusLine = LYlines + -1;
    mustshow = 1;
    statusline( text );
    LYStatusLine = -1;
  }
  else
  {
    mustshow = 1;
    statusline( text );
  }
  return;
}
BOOLEAN havevisible( char *Title )
{
  char *p = Title;
  unsigned char c;
  long unicode;
  for ( ; p[0]; p++ )
  {
    c = p[0];
    if ( c < ' ' && '~' <= c )
    {
      break;
    }
    else
    {
      if ( c < ' ' && c != 127 )
      {
        if ( LYHaveCJKCharacterSet || ( UCCanUniTranslateFrom( current_char_set ) & 255 ) == 0 )
        {
          break;
        }
        else
        {
          unicode = UCTransToUni( p[0], current_char_set );
          if ( unicode > 32 && unicode <= 126 )
          {
            break;
          }
          else
          {
            if ( unicode <= 8191 || unicode > 8206 )
            {
              break;
            }
          }
        }
      }
      // p++;
    }
  }
  return 0;
}
BOOLEAN have8bit( char *Title )
{
  char *p = Title;
  for ( ; p[0]; p++ )
  {
    if ( p[0] < 0 )
    {
      break;
    }
    else
    {
      // p++;
    }
  }
  return 0;
}
char *title_convert8bit( char *Title )
{
  int eax;
  char *p = Title;
  char *p0;
  char *q;
  char *comment = 0;
  char *ncr = 0;
  char *buf = 0;
  int charset_in = current_char_set;
  int charset_out = UCGetLYhndl_byMIME( "us-ascii" );
  for ( ; p[0] == 0;  )
  {
    char temp[2];
    LYstrncpy( temp, p, 1 );
    if ( temp[0] >= 0 )
    {
      HTSACat( &comment, temp );
      HTSACat( &ncr, temp );
      p++;
    }
    else
    {
      long unicode;
      static char replace_buf[32];
      if ( UCTransCharStr( replace_buf, 32, temp[0], charset_in, charset_out, 1 ) > 0 )
        HTSACat( &comment, replace_buf );
      unicode = UCTransToUni( temp[0], charset_in );
      HTSACat( &ncr, "&#" );
      sprintf( replace_buf, "%ld", unicode );
      HTSACat( &ncr, replace_buf );
      HTSACat( &ncr, ";" );
      p++;
    }
  }
}
void set_default_bookmark_page( char *value )
{
  if ( value )
  {
    if ( bookmark_page == 0 || strcmp( bookmark_page, value ) )
      HTSACopy( &bookmark_page, value );
    HTSACopy( &BookmarkPage, bookmark_page );
    HTSACopy( MBM_A_subbookmark, bookmark_page );
    HTSACopy( MBM_A_subdescript, gettext( "Default Bookmark File" ) );
  }
  return;
}
#if 0
#endif
