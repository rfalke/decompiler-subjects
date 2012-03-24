#include "LYShowInfo.c.h"
static int label_columns;
BOOLEAN LYVersionIsRelease( void )
{
  return 0;
}
char *LYVersionStatus( void )
{
  return ebp_4;
}
char *LYVersionDate( void )
{
  static char temp[12];
  LYstrncpy( temp, "14 Dec 2008 16:24:56 -0800", 11 );
  return temp;
}
void dt_String( FILE *fp, char *label, char *value )
{
  int have;
  int need;
  char *the_label = 0;
  char *the_value = 0;
  HTSACopy( &the_label, label );
  HTSACopy( &the_value, value );
  have = strlen( the_label );
  need = LYstrExtent( the_label, have, label_columns );
  LYEntify( &the_label, 1 );
  LYEntify( &the_value, 1 );
  fwrite( "&lt;dt&gt;", 1, 4, fp );
  while ( need++, ( need < label_columns ) & 255 )
  {
    fwrite( "&nbsp;", 1, 6, fp );
  }
  fprintf( fp, "&lt;em&gt;%s&lt;/em&gt; %s\n", the_label, the_value );
  if ( the_label )
  {
    free( the_label );
    the_label = 0;
  }
  if ( the_value )
  {
    free( the_value );
    the_value = 0;
  }
  return;
}
void dt_Number( FILE *fp0, char *label, long number, char *units )
{
  char *value = 0;
  HTSprintf( &value, "%ld %s", number, units );
  dt_String( fp0, label, value );
  if ( value )
  {
    free( value );
    value = 0;
  }
  return;
}
int LYShowInfo( DocInfo *doc, DocInfo *newdoc, char *owner_address )
{
  int eax;
  int edx;
  static char tempfile[256];
  int url_type;
  FILE *fp0;
  char *Title = 0;
  char *cp;
  char *temp = 0;
  BOOLEAN LYInfoAdvanced = user_mode == 2;
  struct stat dir_info;
  static char *name;
  if ( LYReuseTempfiles )
  {
    fp0 = LYOpenTempRewrite( tempfile, ".html", "w" );
  }
  else
  {
    LYRemoveTemp( tempfile );
    fp0 = LYOpenTemp( tempfile, ".html", "w" );
  }
  if ( fp0 == 0 )
  {
    HTAlert( gettext( "Can't open temporary file!" ) );
    return -1;
  }
  else
  {
    LYLocalFileToURL( &newdoc->address, tempfile );
    if ( nlinks > 0 && links[ doc->link ] )
    {
      url_type = is_url( links[ doc->link ].lname );
      switch ( url_type )
      {
      case 26:
      case 27:
      {
        char *last_slash = strrchr( links[ doc->link ].lname, '/' );
        int next_to_last = strlen( links[ doc->link ].lname ) + -1;
        if ( next_to_last == last_slash - links[ doc->link ].lname )
          links[ doc->link ].lname[ ebp_1152 ] = 0;
      }
        break;
      }
    }
    label_columns = 9;
    WriteInternalTitle( fp0, gettext( "Information about the current document" ) );
    fprintf( fp0, "&lt;h1&gt;%s %s (%s) (&lt;a href=\"%s\"&gt;%s&lt;/a&gt;)", "Lynx", "2.8.7dev.11", LYVersionDate( ), "http://lynx.isc.org/current/", LYVersionStatus( ) );
    fwrite( "&lt;/h1&gt;\n", 1, 6, fp0 );
    if ( lynx_edit_mode && nlinks > 0 )
    {
      fprintf( fp0, "&lt;h2&gt;%s&lt;/h2&gt;\n&lt;dl compact&gt;", gettext( "Directory that you are currently viewing" ) );
      temp = HTnameOfFile_WWW( &doc->address, 0, 1 );
      dt_String( fp0, gettext( "Name:" ), temp );
      if ( temp )
      {
        free( temp );
        temp = 0;
      }
      dt_String( fp0, gettext( "URL:" ), &doc->address );
      fwrite( "\n&lt;/dl&gt;\n", 1, 7, fp0 );
      temp = HTnameOfFile_WWW( links[ doc->link ].lname, 0, 1 );
      if ( lstat64( temp, &dir_info.st_dev ) == -1 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "lstat(%s) failed, errno=%d\n", temp, *(int*)(__errno_location( )) );
        }
        HTAlert( gettext( "Failed to obtain status of current link!" ) );
      }
      else
      {
        char modes[80];
        label_columns = 16;
        if ( ( dir_info.st_mode & 61440 ) == 16384 )
        {
          fprintf( fp0, "&lt;h2&gt;%s&lt;/h2&gt;\n&lt;dl compact&gt;", gettext( "Directory that you have currently selected" ) );
        }
        else
        if ( ( dir_info.st_mode & 61440 ) == 32768 )
        {
          fprintf( fp0, "&lt;h2&gt;%s&lt;/h2&gt;\n&lt;dl compact&gt;", gettext( "File that you have currently selected" ) );
        }
        else
        if ( ( dir_info.st_mode & 61440 ) == 40960 )
        {
          fprintf( fp0, "&lt;h2&gt;%s&lt;/h2&gt;\n&lt;dl compact&gt;", gettext( "Symbolic link that you have currently selected" ) );
        }
        else
        {
          fprintf( fp0, "&lt;h2&gt;%s&lt;/h2&gt;\n&lt;dl compact&gt;", gettext( "Item that you have currently selected" ) );
        }
        dt_String( fp0, gettext( "Full name:" ), temp );
        if ( ( dir_info.st_mode & 61440 ) == 40960 )
        {
          char buf[1024];
          int buf_size = readlink( temp, buf, 1023 );
          if ( buf_size != -1 )
            buf[ buf_size ] = 0;
          else
          {
            sprintf( buf, "%.*s", 1023, gettext( "Unable to follow link" ) );
          }
          dt_String( fp0, gettext( "Points to file:" ), buf );
        }
        name = HTAA_UidToName( (int)dir_info.st_uid );
        if ( name[0] )
        {
          dt_String( fp0, gettext( "Name of owner:" ), name );
        }
        name = HTAA_GidToName( (int)dir_info.st_gid );
        if ( name[0] )
        {
          dt_String( fp0, gettext( "Group name:" ), name );
        }
        if ( ( dir_info.st_mode & 61440 ) == 32768 )
        {
          dt_Number( fp0, gettext( "File size:" ), (int)( (long)(dir_info.st_size & 0xFFFFFFFF) ), gettext( "(bytes)" ) );
        }
        dt_String( fp0, gettext( "Creation date:" ), ctime( &dir_info.st_ctim.tv_sec ) );
        dt_String( fp0, gettext( "Last modified:" ), ctime( &dir_info.st_mtim.tv_sec ) );
        dt_String( fp0, gettext( "Last accessed:" ), ctime( &dir_info.st_atim.tv_sec ) );
        fwrite( "\n&lt;/dl&gt;\n", 1, 7, fp0 );
        label_columns = 9;
        fprintf( fp0, "&lt;h2&gt;%s&lt;/h2&gt;\n&lt;dl compact&gt;", gettext( "Access Permissions" ) );
        modes[0] = 0;
        modes[1] = 0;
        modes[2] = 0;
        if ( dir_info.st_mode & 256 )
        {
          memcpy( modes[0] + strlen( modes ) );
        }
        if ( dir_info.st_mode & 128 )
        {
          memcpy( modes[0] + strlen( modes ) );
        }
        if ( dir_info.st_mode & 64 )
        {
          if ( ( dir_info.st_mode & 61440 ) == 16384 )
          {
            memcpy( modes[0] + strlen( modes ) );
          }
          else
          {
            memcpy( modes[0] + strlen( modes ) );
            if ( dir_info.st_mode & 2048 )
            {
              memcpy( modes[0] + strlen( modes ) );
            }
          }
        }
        dt_String( fp0, gettext( "Owner:" ), &modes[2] );
        modes[0] = 0;
        modes[1] = 0;
        modes[2] = 0;
        if ( dir_info.st_mode & 32 )
        {
          memcpy( modes[0] + strlen( modes ) );
        }
        if ( dir_info.st_mode & 16 )
        {
          memcpy( modes[0] + strlen( modes ) );
        }
        if ( dir_info.st_mode & 8 )
        {
          if ( ( dir_info.st_mode & 61440 ) == 16384 )
          {
            memcpy( modes[0] + strlen( modes ) );
          }
          else
          {
            memcpy( modes[0] + strlen( modes ) );
            if ( dir_info.st_mode & 1024 )
            {
              memcpy( modes[0] + strlen( modes ) );
            }
          }
        }
        dt_String( fp0, gettext( "Group:" ), &modes[2] );
        modes[0] = 0;
        modes[1] = 0;
        modes[2] = 0;
        if ( dir_info.st_mode & 4 )
        {
          memcpy( modes[0] + strlen( modes ) );
        }
        if ( dir_info.st_mode & 2 )
        {
          memcpy( modes[0] + strlen( modes ) );
        }
        if ( dir_info.st_mode & 1 )
        {
          if ( ( dir_info.st_mode & 61440 ) == 16384 )
          {
            memcpy( modes[0] + strlen( modes ) );
          }
          else
          {
            memcpy( modes[0] + strlen( modes ) );
            if ( dir_info.st_mode & 512 )
            {
              memcpy( modes[0] + strlen( modes ) );
            }
          }
        }
        dt_String( fp0, gettext( "World:" ), &modes[2] );
        fwrite( "\n&lt;/dl&gt;\n", 1, 7, fp0 );
      }
      if ( temp )
      {
        free( temp );
        temp = 0;
      }
    }
    else
    {
      fprintf( fp0, "&lt;h2&gt;%s&lt;/h2&gt;\n&lt;dl compact&gt;", gettext( "File that you are currently viewing" ) );
      LYformTitle( &Title, &doc->title[0] );
      HTSprintf( &temp, "%s%s", Title, "" );
      dt_String( fp0, gettext( "Linkname:" ), temp );
      if ( temp )
      {
        free( temp );
        temp = 0;
      }
      dt_String( fp0, "URL:", &doc->address );
      if ( HTLoadedDocumentCharset( ) )
      {
        dt_String( fp0, gettext( "Charset:" ), HTLoadedDocumentCharset( ) );
      }
      else
      {
        LYUCcharset *p_in = HTAnchor_getUCInfoStage( HTMainAnchor, 1 );
        if ( p_in == 0 || p_in->MIMEname == 0 || p_in->MIMEname[0] == 0 || HTAnchor_getUCLYhndl( HTMainAnchor, 1 ) < 0 )
        {
          p_in = HTAnchor_getUCInfoStage( HTMainAnchor, 0 );
        }
        if ( p_in && p_in->MIMEname && p_in->MIMEname[0] && HTAnchor_getUCLYhndl( HTMainAnchor, 0 ) >= 0 )
        {
          HTSprintf( &temp, "%s %s", p_in->MIMEname, gettext( "(assumed)" ) );
          dt_String( fp0, gettext( "Charset:" ), &p_in->MIMEname );
          if ( temp )
          {
            free( temp );
            temp = 0;
          }
        }
      }
      cp = HText_getServer( );
      if ( cp && cp[0] )
      {
        dt_String( fp0, gettext( "Server:" ), cp );
      }
      cp = HText_getDate( );
      if ( cp && cp[0] )
      {
        dt_String( fp0, gettext( "Date:" ), cp );
      }
      cp = HText_getLastModified( );
      if ( cp && cp[0] )
      {
        dt_String( fp0, gettext( "Last Mod:" ), cp );
      }
      if ( LYInfoAdvanced )
      {
        if ( HTMainAnchor && HTMainAnchor->expires )
        {
          dt_String( fp0, gettext( "Expires:" ), &HTMainAnchor->expires );
        }
        if ( HTMainAnchor && HTMainAnchor->cache_control )
        {
          dt_String( fp0, gettext( "Cache-Control:" ), &HTMainAnchor->cache_control );
        }
        if ( HTMainAnchor && HTMainAnchor->content_length > 0 )
        {
          dt_Number( fp0, gettext( "Content-Length:" ), HTMainAnchor->content_length, gettext( "bytes" ) );
        }
        else
        {
          dt_Number( fp0, gettext( "Length:" ), HText_getNumOfBytes( ), gettext( "bytes" ) );
        }
        if ( HTMainAnchor && HTMainAnchor->content_language )
        {
          dt_String( fp0, gettext( "Language:" ), &HTMainAnchor->content_language );
        }
      }
      if ( doc->post_data )
      {
        fprintf( fp0, "&lt;dt&gt;&lt;em&gt;%s&lt;/em&gt; &lt;xmp&gt;%.*s&lt;/xmp&gt;\n", gettext( "Post Data:" ), 0, 0 );
        dt_String( fp0, gettext( "Post Content Type:" ), &doc->post_content_type );
      }
      dt_String( fp0, gettext( "Owner(s):" ), owner_address ? owner_address : gettext( "Owner(s):" ) );
      dt_Number( fp0, gettext( "size:" ), HText_getNumOfLines( ), gettext( "lines" ) );
      if ( lynx_mode != 2 )
      {
        if ( HTisDocumentSource( ) )
        {
        }
        else
        {
        }
      }
      else
      {
      }
      HTSACopy( &temp, gettext( "source" ) );
      if ( doc->safe )
      {
        HTSACat( &temp, gettext( ", safe" ) );
      }
      if ( doc->internal_link )
      {
        HTSACat( &temp, gettext( ", via internal link" ) );
      }
      if ( LYInfoAdvanced )
      {
        if ( HText_hasNoCacheSet( HTMainText ) & 255 )
        {
          HTSACat( &temp, gettext( ", no-cache" ) );
        }
        if ( HTAnchor_isISMAPScript( (int)( &HTMainAnchor->parent->parent ) ) & 255 )
        {
          HTSACat( &temp, gettext( ", ISMAP script" ) );
        }
        if ( doc->bookmark )
        {
          HTSACat( &temp, gettext( ", bookmark file" ) );
        }
      }
      dt_String( fp0, gettext( "mode:" ), temp );
      if ( temp )
      {
        free( temp );
        temp = 0;
      }
      fwrite( "\n&lt;/dl&gt;\n", 1, 7, fp0 );
      if ( nlinks > 0 )
      {
        fprintf( fp0, "&lt;h2&gt;%s&lt;/h2&gt;\n&lt;dl compact&gt;", gettext( "Link that you currently have selected" ) );
        dt_String( fp0, gettext( "Linkname:" ), LYGetHiliteStr( doc->link, 0 ) );
        if ( lynx_mode == 2 && links[ doc->link ].type == 1 )
        {
          if ( links[ doc->link ].l_form->submit_method )
          {
            int method = links[ doc->link ].l_form->submit_method;
            char *enctype = &links[ doc->link ].l_form->submit_enctype;
            dt_String( fp0, gettext( "Method:" ), "POST" );
            dt_String( fp0, gettext( "Enctype:" ), "application/x-www-form-urlencoded" );
          }
          if ( links[ doc->link ].l_form->submit_action )
          {
            dt_String( fp0, gettext( "Action:" ), &links[ doc->link ].l_form->submit_action );
          }
          if ( links[ doc->link ].l_form->submit_method == 0 || links[ doc->link ].l_form->submit_action == 0 )
          {
            fprintf( fp0, "&lt;dt&gt;&nbsp;%s\n", gettext( "(Form field)" ) );
          }
        }
        else
        {
          dt_String( fp0, "URL:", "" );
        }
        fwrite( "\n&lt;/dl&gt;\n", 1, 7, fp0 );
      }
      else
      {
        fprintf( fp0, "&lt;h2&gt;%s&lt;/h2&gt;", gettext( "No Links on the current page" ) );
      }
    }
    EndInternalPage( fp0 );
    LYrefresh( );
    LYCloseTemp( tempfile );
    if ( Title )
    {
      free( Title );
      Title = 0;
    }
    return 0;
  }
}
#if 0
#endif
