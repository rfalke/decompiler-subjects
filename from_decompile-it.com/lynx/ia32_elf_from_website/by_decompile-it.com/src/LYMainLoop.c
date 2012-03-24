#include "LYMainLoop.c.h"
HTLinkType *HTInternalLink;
HTAtom *WWW_SOURCE;
HTList *Goto_URLs;
char *LYRequestTitle;
char *LYRequestReferer;
static char prev_target[1024];
BOOLEAN display_partial;
int NumOfLines_partial;
static int Newline;
static DocInfo newdoc;
static DocInfo curdoc;
static char *traversal_host;
static char *traversal_link_to_add;
static char *owner_address;
static char *ownerS_address;
static BOOLEAN textinput_activated;
static BOOLEAN from_source_cache;
int sametext( char *een, char *twee )
{
  return 1;
}
void TracelogOpenFailed( void )
{
  WWW_TraceFlag = 0;
  if ( LYCursesON )
  {
    HTUserMsg( gettext( "Trace Log open failed.  Trace off!" ) );
  }
  else
  {
    fprintf( stderr, "%s\n", gettext( "Trace Log open failed.  Trace off!" ) );
    exit_immediately( 1 );
  }
  return;
}
BOOLEAN LYReopenTracelog( BOOLEAN *trace_flag_ptr )
{
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "\nTurning off TRACE for fetch of log.\n" );
  }
  LYCloseTracelog( );
  LYTraceLogFP = LYAppendToTxtFile( LYTraceLogPath );
  if ( LYTraceLogFP == 0 )
  {
    TracelogOpenFailed( );
  }
  else
  {
    if ( WWW_TraceFlag )
    {
      WWW_TraceFlag = 0;
      trace_flag_ptr[0] = 1;
    }
  }
  return 1;
}
void turn_trace_back_on( BOOLEAN *trace_flag_ptr )
{
  if ( trace_flag_ptr[0] == 1 )
  {
    WWW_TraceFlag = 1;
    trace_flag_ptr[0] = 0;
    fwrite( "Turning TRACE back on.\n\n", 1, 24, TraceFP( ) );
  }
  return;
}
FILE *TraceFP( void )
{
  return stderr;
}
BOOLEAN LYOpenTraceLog( void )
{
  if ( WWW_TraceFlag && LYUseTraceLog && LYTraceLogFP == 0 )
  {
    LYTraceLogFP = LYNewTxtFile( LYTraceLogPath );
    if ( LYTraceLogFP == 0 )
    {
      TracelogOpenFailed( );
      return 1;
    }
    fflush( stdout );
    fflush( stderr );
    fprintf( TraceFP( ), "\t\t%s (%s)\n\n", gettext( "Lynx Trace Log" ), "2.8.7dev.11" );
    if ( LYValidate )
    {
      if ( LYRestricted && had_restrictions_default )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Validate and some anonymous restrictions are set.\n" );
        }
      }
      else
      if ( had_restrictions_default )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Validate restrictions set, restriction \"default\" was given.\n" );
        }
      }
      else
      if ( LYRestricted )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Validate restrictions set, additional anonymous restrictions ignored.\n" );
        }
      }
      else
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Validate restrictions are set.\n" );
      }
    }
    else
    if ( LYRestricted )
    {
      if ( had_restrictions_all )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Anonymous restrictions set, restriction \"all\" was given.\n" );
        }
      }
      else
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Anonymous restrictions are set.\n" );
      }
    }
    else
    if ( had_restrictions_all && had_restrictions_default )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Restrictions \"all\" and \"default\" were given.\n" );
      }
    }
    else
    if ( had_restrictions_default )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Restriction \"default\" was given.\n" );
      }
    }
    else
    if ( had_restrictions_all && WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "\"all\" restrictions are set.\n" );
    }
  }
  return 1;
}
void LYCloseTracelog( void )
{
  if ( LYTraceLogFP )
  {
    fflush( stdout );
    fflush( stderr );
    fclose( LYTraceLogFP );
    LYTraceLogFP = 0;
  }
  return;
}
void handle_LYK_TRACE_TOGGLE( void )
{
  WWW_TraceFlag = WWW_TraceFlag == 0;
  if ( LYOpenTraceLog( ) & 255 )
  {
    HTUserMsg( WWW_TraceFlag ? gettext( "Trace ON!" ) : gettext( "Trace OFF!" ) );
  }
  return;
}
void LYSetNewline( int value )
{
  Newline = value;
  return;
}
int LYGetNewline( void )
{
  return Newline;
}
void LYChgNewline( int adjust )
{
  Newline += adjust;
  return;
}
BOOLEAN reparse_document( void )
{
  BOOLEAN result;
  from_source_cache = 1;
  result = HTreparse_document( );
  if ( result )
  {
    from_source_cache = 1;
  }
  else
  {
    from_source_cache = 0;
  }
  return result;
}
BOOLEAN reparse_or_reload( int *cmd )
{
  if ( reparse_document( ) & 255 )
  {
  }
  cmd[0] = 12;
  return 1;
}
void set_address( DocInfo *doc, char *address )
{
  HTSACopy( &doc->address, address );
  return;
}
void copy_address( DocInfo *dst, DocInfo *src )
{
  HTSACopy( &dst->address, &src->address );
  return;
}
void free_address( DocInfo *doc )
{
  if ( doc->address )
  {
    free( &doc->address );
    *(int*)&doc->address = 0;
  }
  return;
}
void move_address( DocInfo *dst, DocInfo *src )
{
  copy_address( dst, src );
  free_address( src );
  return;
}
BOOLEAN LYMainLoop_pageDisplay( int line_num )
{
  int eax;
  char *pound;
  int prev_newline = Newline;
  Newline = line_num;
  if ( !from_source_cache && display_partial && newdoc.line == 1 && line_num == 1 && prev_newline == 1 )
  {
    pound = strchr( newdoc.address, '#' );
    if ( pound && pound[0] && pound[1] )
    {
      if ( ( HTFindPoundSelector( &pound[1] ) & 255 ) == 0 )
      {
        Newline = prev_newline;
        return 1;
      }
      Newline = www_search_result;
    }
  }
  HText_pageDisplay( Newline, prev_target );
  return 1;
}
BOOLEAN set_curdoc_link( int nextlink )
{
  BOOLEAN result = 0;
  if ( curdoc.link != nextlink && nextlink >= 0 && nextlink < nlinks )
  {
    if ( curdoc.link >= 0 && curdoc.link < nlinks )
    {
      LYhighlight( 0, curdoc.link, prev_target );
      result = 1;
    }
    curdoc.link = nextlink;
  }
  return result;
}
void goto_line( int nextline )
{
  int eax;
  int n;
  int old_link = newdoc.link;
  newdoc.link = 0;
  n = 0;
  for ( ; n < nlinks; n++ )
  {
    if ( nextline == links[ n ].anchor_line_num + 1 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "top_of_screen %d\n", HText_getTopOfScreen( ) + 1 );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "goto_line(%d) -&gt; link %d -&gt; %d\n", nextline, old_link, n );
      }
      newdoc.link = n;
      break;
    }
    else
    {
      // n++;
    }
  }
  return;
}
void set_curdoc_link_by_mouse( int nextlink )
{
  if ( set_curdoc_link( nextlink ) & 255 )
  {
    LYhighlight( 1, nextlink, prev_target );
    LYmsec_delay( 20 );
  }
  return;
}
int do_change_link( void )
{
  int mouse_tmp = get_mouse_link( );
  if ( mouse_tmp != -1 )
  {
    if ( mouse_tmp < 0 || nlinks <= mouse_tmp )
    {
      char *msgtmp = 0;
      HTSprintf0( &msgtmp, gettext( "Internal error: Invalid mouse link %d!" ), mouse_tmp, ebp_20 );
      HTAlert( msgtmp );
      if ( msgtmp )
      {
        free( msgtmp );
        msgtmp = 0;
      }
      return -1;
    }
    else
      set_curdoc_link_by_mouse( mouse_tmp );
  }
  return 0;
}
void do_check_goto_URL( char *user_input_buffer, char **old_user_input, BOOLEAN *force_load )
{
  static BOOLEAN always = 1;
  static struct {
     char *name;
     BOOLEAN *flag;
  } table[29] = { { "file:", &no_file_url }
, { "file:", &no_goto_file }
, { "lynxexec:", &no_goto_lynxexec }
, { "lynxprog:", &no_goto_lynxprog }
, { "lynxcgi:", &no_goto_lynxcgi }
, { "cso:", &no_goto_cso }
, { "finger:", &no_goto_finger }
, { "ftp:", &no_goto_ftp }
, { "gopher:", &no_goto_gopher }
, { "http:", &no_goto_http }
, { "https:", &no_goto_https }
, { "mailto:", &no_goto_mailto }
, { "rlogin:", &no_goto_rlogin }
, { "telnet:", &no_goto_telnet }
, { "tn3270:", &no_goto_tn3270 }
, { "wais:", &no_goto_wais }
, { "bibp:", &no_goto_bibp }
, { "news:", &no_goto_news }
, { "nntp:", &no_goto_nntp }
, { "snews:", &no_goto_snews }
, { "lynxexec:", &local_exec_on_local_files }
, { "lynxprog:", &local_exec_on_local_files }
, { "LYNXCFG:", &no_goto_configinfo }
, { "LYNXCOMPILEOPTS:", &no_goto_configinfo }
, { "LYNXCOOKIE:", &always }
, { "LYNXDIRED:", &always }
, { "LYNXDOWNLOAD:", &always }
, { "LYNXOPTIONS:", &always }
, { "LYNXPRINT:", &always }
 };
  unsigned int n;
  BOOLEAN found = 0;
  if ( user_input_buffer[0] == '#' )
  {
    if ( user_input_buffer[1] && ( HTFindPoundSelector( &user_input_buffer[1] ) & 255 ) )
    {
      HTAddGotoURL( user_input_buffer );
      trimPoundSelector( curdoc.address );
      HTSACat( &curdoc.address, user_input_buffer );
    }
  }
  else
  {
    HTSACopy( old_user_input, user_input_buffer );
    LYEnsureAbsoluteURL( old_user_input, "", 1 );
    sprintf( user_input_buffer, "%.*s", 1023, old_user_input[0] );
    if ( old_user_input[0] )
    {
      free( old_user_input[0] );
      old_user_input[0] = 0;
    }
    n = 0;
    for ( ; n <= 28; n++ )
    {
      if ( table[ n ].flag[0] && strncmp( user_input_buffer, table[ n ].name, strlen( table[ n ].name ) ) == 0 )
      {
        found = 1;
        HTUserMsg2( gettext( "You are not allowed to goto \"%s\" URLs" ), table[ n ].name );
        break;
      }
      else
      {
        // n++;
      }
    }
    if ( found == 0 )
    {
      if ( LYValidate && strncasecomp( user_input_buffer, "http:", 5 ) && strncasecomp( user_input_buffer, "https:", 6 ) )
      {
        HTUserMsg( gettext( "Goto a non-http URL is disallowed!" ) );
      }
      else
      {
        set_address( &newdoc, user_input_buffer );
        newdoc.isHEAD = 0;
        if ( are_different( &curdoc, &newdoc ) )
        {
          HTSACopy( &newdoc.title, gettext( "A URL specified by the user" ) );
          LYFreePostData( &newdoc );
          if ( newdoc.bookmark )
          {
            free( newdoc.bookmark );
            newdoc.bookmark = 0;
          }
          newdoc.safe = 0;
          newdoc.internal_link = 0;
          force_load[0] = 1;
          if ( lynx_edit_mode && LYAutoUncacheDirLists > 1 )
            HTuncache_current_document( );
        }
        LYUserSpecifiedURL = 1;
        HTAddGotoURL( newdoc.address );
      }
    }
  }
  return;
}
BOOLEAN do_check_recall( int ch, char *user_input_buffer, char **old_user_input, int URLTotal, int *URLNum, RecallType recall, BOOLEAN *FirstURLRecall )
{
  char *cp;
  BOOLEAN ret = 0;
  if ( old_user_input[0] == 0 )
  {
    HTSACopy( old_user_input, "" );
    do
    {
      LYTrimAllStartfile( user_input_buffer );
      if ( !user_input_buffer[0] && ( recall == NORECALL || ( ch != 256 && ch != 257 ) ) )
      {
        LYstrncpy( user_input_buffer, old_user_input[0], 1023 );
        if ( old_user_input[0] )
        {
          free( old_user_input[0] );
          old_user_input[0] = 0;
        }
        HTInfoMsg( gettext( "Cancelled!!!" ) );
        ret = 0;
        break;
      }
      else
      {
        if ( recall && ch == 256 )
        {
          if ( FirstURLRecall[0] )
          {
            FirstURLRecall[0] = 0;
            URLNum[0] = 0;
          }
          else
            URLNum[0]++;
          if ( URLTotal <= URLNum[0] )
            URLNum[0] = 0;
          cp = (char*)HTList_objectAt( Goto_URLs, URLNum[0] );
          if ( cp )
          {
            LYstrncpy( user_input_buffer, cp, 1023 );
            if ( goto_buffer && old_user_input[0] && strcmp( old_user_input[0], user_input_buffer ) == 0 )
            {
              mustshow = 1;
              statusline( gettext( "Edit the current Goto URL: " ) );
            }
            else
            if ( ( goto_buffer && URLTotal == 2 ) || ( goto_buffer == 0 && URLTotal == 1 ) )
            {
              mustshow = 1;
              statusline( gettext( "Edit the previous Goto URL: " ) );
            }
            else
            {
              mustshow = 1;
              statusline( gettext( "Edit a previous Goto URL: " ) );
            }
            ch = LYgetstr( user_input_buffer, 0, 1024, recall );
            if ( ch >= 0 )
              continue;
            else
            {
              LYstrncpy( user_input_buffer, old_user_input[0], 1023 );
              if ( old_user_input[0] )
              {
                free( old_user_input[0] );
                old_user_input[0] = 0;
              }
              HTInfoMsg( gettext( "Cancelled!!!" ) );
              ret = 0;
              break;
            }
          }
        }
        else
        {
          if ( recall && ch == 257 )
          {
            if ( FirstURLRecall[0] )
            {
              FirstURLRecall[0] = 0;
              URLNum[0] = URLTotal + -1;
            }
            else
              URLNum[0] += -1;
            if ( URLNum[0] < 0 )
              URLNum[0] = URLTotal + -1;
            cp = (char*)HTList_objectAt( Goto_URLs, URLNum[0] );
            if ( cp )
            {
              LYstrncpy( user_input_buffer, cp, 1023 );
              if ( goto_buffer && old_user_input[0] && strcmp( old_user_input[0], user_input_buffer ) == 0 )
              {
                mustshow = 1;
                statusline( gettext( "Edit the current Goto URL: " ) );
              }
              else
              if ( ( goto_buffer && URLTotal == 2 ) || ( goto_buffer == 0 && URLTotal == 1 ) )
              {
                mustshow = 1;
                statusline( gettext( "Edit the previous Goto URL: " ) );
              }
              else
              {
                mustshow = 1;
                statusline( gettext( "Edit a previous Goto URL: " ) );
              }
              ch = LYgetstr( user_input_buffer, 0, 1024, recall );
            }
          }
          else
          {
            ret = 1;
            break;
          }
        }
      }
    }
    while ( ch < 0 );
    LYstrncpy( user_input_buffer, old_user_input[0], 1023 );
    if ( old_user_input[0] )
    {
      free( old_user_input[0] );
      old_user_input[0] = 0;
    }
    HTInfoMsg( gettext( "Cancelled!!!" ) );
    ret = 0;
    return ret;
  }
}
void do_cleanup_after_delete( void )
{
  HTuncache_current_document( );
  move_address( &newdoc, &curdoc );
  newdoc.line = curdoc.line;
  if ( curdoc.link == nlinks + -1 )
  {
    newdoc.link = curdoc.link + -1;
  }
  else
  {
    newdoc.link = curdoc.link;
  }
  return;
}
int find_link_near_col( int col, int delta )
{
  int eax;
  int i = curdoc.link;
  for ( ; (unsigned char)( ~i >> 31 );  )
  {
    if ( delta * ( links[ i ].ly - links[ curdoc.link ].ly ) > 0 )
    {
      int cy = links[ i ].ly, best = -1, dist = 0xf4240;
      while ( 1 )
      {
        if ( delta > 0 )
        {
          if ( i < nlinks )
            goto B15;
          else
          {
            return best;
          }
        }
        else
        if ( i < 0 )
        {
          return best;
        }
B15:;
        if ( links[ i ].ly == cy )
        {
          int cx = links[ i ].lx;
          char *text = LYGetHiliteStr( i, 0 );
          if ( text )
          {
            cx += strlen( text ) >> 1;
          }
          cx -= col;
          if ( cx < 0 )
            cx = 0 - cx;
          if ( cx < dist )
          {
            dist = cx;
            best = i;
          }
          i += delta;
        }
      }
    }
    else
    {
      i += delta;
    }
  }
  return -1;
}
int DoTraversal( int c, BOOLEAN *crawl_ok )
{
  BOOLEAN rlink_rejected = 0;
  BOOLEAN rlink_exists;
  BOOLEAN rlink_allowed;
  *(int*)&rlink_exists = 0;
  if ( rlink_exists )
  {
    rlink_rejected = lookup_reject( links[ curdoc.link ].lname );
    if ( rlink_rejected == 0 && traversal_host && links[ curdoc.link ] )
    {
      if ( strncasecomp( links[ curdoc.link ].lname, "LYNXIMGMAP:", 11 ) )
      {
        rlink_allowed = strncmp( traversal_host, links[ curdoc.link ].lname, strlen( traversal_host ) ) == 0;
      }
      else
      {
        rlink_allowed = strncmp( traversal_host, &links[ curdoc.link ].lname[11], strlen( traversal_host ) ) == 0;
      }
    }
    else
      rlink_allowed = 0;
  }
  else
    rlink_allowed = 0;
  if ( rlink_exists && rlink_allowed )
  {
    if ( lookup_link( links[ curdoc.link ].lname ) & 255 )
    {
      if ( more_links || ( curdoc.link >= 0 && curdoc.link < nlinks + -1 ) )
        c = 257;
      else
      {
        if ( strcmp( curdoc.title, "Entry into main screen" ) == 0 || nhist <= 0 )
        {
          if ( dump_output_immediately == 0 )
          {
            cleanup( );
            exit_immediately( 1 );
          }
          c = -1;
        }
        else
          c = 259;
      }
    }
    else
    {
      HTSACopy( &traversal_link_to_add, links[ curdoc.link ].lname );
      if ( strncasecomp( traversal_link_to_add, "LYNXIMGMAP:", 11 ) )
        crawl_ok[0] = 1;
      c = 258;
    }
  }
  else
  {
    if ( rlink_exists )
      add_to_reject_list( links[ curdoc.link ].lname );
    if ( more_links || ( curdoc.link >= 0 && curdoc.link < nlinks + -1 ) )
      c = 257;
    else
    {
      if ( strcmp( curdoc.title, "Entry into main screen" ) == 0 || nhist <= 0 )
      {
        if ( dump_output_immediately == 0 )
        {
          cleanup( );
          exit_immediately( 1 );
        }
        c = -1;
      }
      else
        c = 259;
    }
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "DoTraversal(%d:%d) -&gt; %s\n", 0, nlinks, LYKeycodeToString( c, 0 ) );
  }
  return c;
}
int handle_LYK_ACTIVATE( int *c, int cmd, BOOLEAN *try_internal, BOOLEAN *refresh_screen, BOOLEAN *force_load, int real_cmd )
{
  int ecx;
  if ( do_change_link( ) == -1 )
  {
    LYforce_no_cache = 0;
    reloading = 0;
    return 1;
  }
  if ( nlinks > 0 )
  {
    if ( links[ curdoc.link ].type == 1 )
    {
      if ( real_cmd == 39 && textfields_need_activation )
      {
        switch ( links[ curdoc.link ].l_form->type )
        {
        case 1:
        case 2:
        case '\t':
        case '':
        case '':
          textinput_activated = 1;
          // memcpy( ebp_136, links[ curdoc.link ].lname, 17 * 4 );
          show_main_statusline( );
          textfields_need_activation = textfields_activation_option;
          return 0;
          break;
        default:
          if ( links[ curdoc.link ].l_form->disabled == 1 )
          {
            HTOutputFormat = HTAtom_for( "www/present" );
            LYforce_no_cache = 0;
            reloading = 0;
            return 0;
          }
          if ( links[ curdoc.link ].l_form->submit_action == 0 || links[ curdoc.link ].l_form->submit_action[0] == 0 )
          {
            HTUserMsg( gettext( "** Bad HTML!!  No form action defined. **" ) );
            HTOutputFormat = HTAtom_for( "www/present" );
            LYforce_no_cache = 0;
            reloading = 0;
            return 0;
          }
          if ( links[ curdoc.link ].l_form->submit_method == 3 && no_mail )
          {
            HTAlert( gettext( "Mail disallowed!  Cannot submit." ) );
            HTOutputFormat = HTAtom_for( "www/present" );
            LYforce_no_cache = 0;
            reloading = 0;
            return 0;
          }
          if ( no_file_url && ( links[ curdoc.link ].l_form->submit_action[0] == 'f' || links[ curdoc.link ].l_form->submit_action[0] == 'F' ) && strncasecomp( &links[ curdoc.link ].l_form->submit_action, "file:", 5 ) == 0 )
          {
            HTAlert( gettext( "file: ACTIONs are disallowed!" ) );
            HTOutputFormat = HTAtom_for( "www/present" );
            LYforce_no_cache = 0;
            reloading = 0;
            return 0;
          }
          if ( strncasecomp( &links[ curdoc.link ].l_form->submit_action, "LYNXCOOKIE:", 11 ) == 0 || ( strncasecomp( &links[ curdoc.link ].l_form->submit_action, "LYNXDIRED:", 10 ) == 0 && ( no_dired_support || strncasecomp( &links[ curdoc.link ].l_form->submit_action[10], "//PERMIT_LOCATION", 17 ) || ( LYIsUIPage3( curdoc.address, 9, 1 ) & 255 ) == 0 ) ) || strncasecomp( &links[ curdoc.link ].l_form->submit_action, "LYNXDOWNLOAD:", 13 ) == 0 || strncasecomp( &links[ curdoc.link ].l_form->submit_action, "LYNXHIST:", 9 ) == 0 || strncasecomp( &links[ curdoc.link ].l_form->submit_action, "LYNXKEYMAP:", 11 ) == 0 || strncasecomp( &links[ curdoc.link ].l_form->submit_action, "LYNXIMGMAP:", 11 ) == 0 || strncasecomp( &links[ curdoc.link ].l_form->submit_action, "LYNXPRINT:", 10 ) == 0 || ( ( links[ curdoc.link ].l_form->submit_action[0] == 'l' || links[ curdoc.link ].l_form->submit_action[0] == 'L' ) && strncasecomp( &links[ curdoc.link ].l_form->submit_action, "lynxexec:", 9 ) == 0 ) || ( ( links[ curdoc.link ].l_form->submit_action[0] == 'l' || links[ curdoc.link ].l_form->submit_action[0] == 'L' ) && strncasecomp( &links[ curdoc.link ].l_form->submit_action, "lynxprog:", 9 ) == 0 ) )
          {
            HTAlert( gettext( "This special URL cannot be a form ACTION!" ) );
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "LYMainLoop: Rejected '%s'\n", &links[ curdoc.link ].l_form->submit_action );
            }
            HTOutputFormat = HTAtom_for( "www/present" );
            LYforce_no_cache = 0;
            reloading = 0;
            return 0;
          }
          else
          {
            if ( check_realm )
              LYPermitURL = 1;
            if ( no_filereferer == 1 && ( curdoc.address[0] == 'f' || curdoc.address[0] == 'F' ) && strncasecomp( curdoc.address, "file:", 5 ) == 0 )
              LYNoRefererForThis = 1;
            if ( links[ curdoc.link ].l_form->submit_method != 3 )
            {
              HTSACopy( &newdoc.title, LYGetHiliteStr( curdoc.link, 0 ) );
            }
          }
          break;
        }
      }
    }
    else
    {
      if ( no_file_url && ( links[ curdoc.link ].lname[0] == 'f' || links[ curdoc.link ].lname[0] == 'F' ) && strncasecomp( links[ curdoc.link ].lname, "file:", 5 ) == 0 )
      {
        if ( ( ( curdoc.address[0] != 'f' && curdoc.address[0] != 'F' ) || strncasecomp( curdoc.address, "file:", 5 ) ) && ( ( strncasecomp( curdoc.address, "LYNXKEYMAP:", 11 ) && strncasecomp( curdoc.address, "LYNXCOOKIE:", 11 ) ) || strncmp( links[ curdoc.link ].lname, helpfilepath, strlen( helpfilepath ) ) ) )
        {
          HTAlert( gettext( "file: URLs via served links are disallowed!" ) );
          reloading = 0;
          return 0;
        }
        if ( curdoc.bookmark )
        {
          HTAlert( gettext( "file: URLs via bookmarks are disallowed!" ) );
          reloading = 0;
          return 0;
        }
      }
      if ( strncasecomp( links[ curdoc.link ].lname, "LYNXCOOKIE:", 11 ) == 0 )
      {
        if ( strcmp( "", gettext( "Cookie Jar" ) ) == 0 && strncasecomp( curdoc.address, "LYNXCOOKIE:", 11 ) == 0 )
          goto B132;
        else
        {
          HTAlert( gettext( "This special URL is not allowed in external documents!" ) );
          HTOutputFormat = HTAtom_for( "www/present" );
          LYforce_no_cache = 0;
          reloading = 0;
          return 0;
        }
      }
B132:;
      if ( ( strncasecomp( links[ curdoc.link ].lname, "LYNXDIRED:", 10 ) == 0 && ( LYIsUIPage3( curdoc.address, 8, 1 ) & 255 ) == 0 && ( LYIsUIPage3( curdoc.address, 9, 1 ) & 255 ) == 0 && ( LYIsUIPage3( curdoc.address, 10, 1 ) & 255 ) == 0 ) || ( strncasecomp( links[ curdoc.link ].lname, "LYNXDOWNLOAD:", 13 ) == 0 && ( LYIsUIPage3( curdoc.address, 1, 1 ) & 255 ) == 0 ) || ( strncasecomp( links[ curdoc.link ].lname, "LYNXHIST:", 9 ) == 0 && ( LYIsUIPage3( curdoc.address, 0, 1 ) & 255 ) == 0 && ( LYIsUIPage3( curdoc.address, 4, 1 ) & 255 ) == 0 && ( LYIsUIPage3( curdoc.address, 11, 1 ) & 255 ) == 0 ) || ( strncasecomp( links[ curdoc.link ].lname, "LYNXPRINT:", 10 ) == 0 && ( LYIsUIPage3( curdoc.address, 2, 1 ) & 255 ) == 0 ) )
      {
        HTAlert( gettext( "This special URL is not allowed in external documents!" ) );
        HTOutputFormat = HTAtom_for( "www/present" );
        LYforce_no_cache = 0;
        reloading = 0;
        return 0;
      }
      if ( run_external( links[ curdoc.link ].lname, 1 ) & 255 )
      {
        refresh_screen[0] = 1;
        return 0;
      }
      set_address( &newdoc, links[ curdoc.link ].lname );
      HTSACopy( &newdoc.title, LYGetHiliteStr( curdoc.link, 0 ) );
      if ( are_different( &curdoc, &newdoc ) )
      {
        LYFreePostData( &newdoc );
        if ( newdoc.bookmark )
        {
          free( newdoc.bookmark );
          newdoc.bookmark = 0;
        }
        if ( strncasecomp( newdoc.address, "LYNXMESSAGES:", 13 ) == 0 )
          LYforce_no_cache = 1;
      }
      if ( !no_jump && lynxjumpfile && curdoc.address && strcmp( lynxjumpfile, curdoc.address ) == 0 )
      {
        LYJumpFileURL = 1;
        LYUserSpecifiedURL = 1;
      }
      else
      if ( ( curdoc && ( ( LYIsUIPage3( curdoc.address, 0, 1 ) & 255 ) || !strcmp( curdoc.title, gettext( "History Page" ) ) ) ) || curdoc.bookmark || ( lynxjumpfile && strcmp( lynxjumpfile, curdoc.address ) == 0 ) )
        LYUserSpecifiedURL = 1;
      else
      if ( no_filereferer == 1 && ( curdoc.address[0] == 'f' || curdoc.address[0] == 'F' ) && strncasecomp( curdoc.address, "file:", 5 ) == 0 )
        LYNoRefererForThis = 1;
      newdoc.link = 0;
      force_load[0] = 1;
      psrc_view = 0;
      if ( lynx_edit_mode )
      {
        if ( LYAutoUncacheDirLists > 1 )
          HTuncache_current_document( );
        HTUnEscapeSome( newdoc.address, "/" );
        if ( strcasecomp( newdoc.address, "file://localhost/" ) )
          strip_trailing_slash( newdoc.address );
      }
      if ( strncasecomp( curdoc.address, "LYNXCOOKIE:", 11 ) == 0 )
        HTuncache_current_document( );
    }
  }
  return 0;
}
void handle_LYK_ADD_BOOKMARK( BOOLEAN *refresh_screen, int *old_c, int real_c )
{
  int c;
  if ( LYValidate )
  {
    if ( old_c[0] == real_c )
    {
      return;
    }
    old_c[0] = real_c;
    HTUserMsg( gettext( "Bookmark features are currently disabled." ) );
  }
  else
  {
    if ( !( LYIsUIPage3( curdoc.address, 0, 1 ) & 255 ) && !( LYIsUIPage3( curdoc.address, 3, 1 ) & 255 ) && !( LYIsUIPage3( curdoc.address, 2, 1 ) & 255 ) && !( LYIsUIPage3( curdoc.address, 8, 1 ) & 255 ) && !( LYIsUIPage3( curdoc.address, 9, 1 ) & 255 ) && !( LYIsUIPage3( curdoc.address, 10, 1 ) & 255 ) && !( LYIsUIPage3( curdoc.address, 1, 1 ) & 255 ) && strncasecomp( curdoc.address, "LYNXCOOKIE:", 11 ) && !( LYIsUIPage3( curdoc.address, 7, 1 ) & 255 ) && ( nlinks <= 0 || ( links[ curdoc.link ] && strncasecomp( links[ curdoc.link ].lname, "LYNXHIST:", 9 ) && strncasecomp( links[ curdoc.link ].lname, "LYNXPRINT:", 10 ) && strncasecomp( links[ curdoc.link ].lname, "LYNXDIRED:", 10 ) && strncasecomp( links[ curdoc.link ].lname, "LYNXDOWNLOAD:", 13 ) && strncasecomp( links[ curdoc.link ].lname, "LYNXCOOKIE:", 11 ) && strncasecomp( links[ curdoc.link ].lname, "LYNXPRINT:", 10 ) ) ) )
    {
      if ( nlinks > 0 )
      {
        if ( curdoc.post_data == 0 && curdoc.bookmark == 0 && ( LYIsUIPage3( curdoc.address, 4, 1 ) & 255 ) == 0 && ( LYIsUIPage3( curdoc.address, 11, 1 ) & 255 ) == 0 && ( LYIsUIPage3( curdoc.address, 5, 1 ) & 255 ) == 0 )
        {
          mustshow = 1;
          statusline( gettext( "Save D)ocument or L)ink to bookmark file or C)ancel? (d,l,c): " ) );
          c = LYgetch_single( );
          if ( c == 68 )
          {
            save_bookmark_link( curdoc.address, curdoc.title );
            refresh_screen[0] = 1;
          }
        }
        else
        {
          if ( LYMultiBookmarks == 0 && curdoc.bookmark && strstr( curdoc.address, bookmark_page[0] == '.' ? &bookmark_page[1] : bookmark_page ) )
          {
            mustshow = 1;
            statusline( gettext( "Reproduce L)ink in this bookmark file or C)ancel? (l,c): " ) );
          }
          else
          if ( curdoc.post_data && links[ curdoc.link ].type == 6 )
          {
            HTUserMsg( gettext( "Documents from forms with POST content cannot be saved as bookmarks." ) );
          }
          else
          {
            mustshow = 1;
            statusline( gettext( "Save L)ink to bookmark file or C)ancel? (l,c): " ) );
          }
          c = LYgetch_single( );
        }
        if ( c == 76 )
        {
          if ( curdoc.post_data && links[ curdoc.link ].type == 6 )
          {
            HTUserMsg( gettext( "Documents from forms with POST content cannot be saved as bookmarks." ) );
          }
          else
          {
            if ( links[ curdoc.link ].type != 1 )
            {
              save_bookmark_link( links[ curdoc.link ].lname, LYGetHiliteStr( curdoc.link, 0 ) );
              refresh_screen[0] = 1;
            }
            else
            {
              HTUserMsg( gettext( "Cannot save form fields/links" ) );
            }
          }
        }
      }
      else
      if ( curdoc.post_data )
      {
        HTUserMsg( gettext( "Documents from forms with POST content cannot be saved as bookmarks." ) );
      }
      else
      if ( curdoc.bookmark )
      {
        HTUserMsg( gettext( "There are no links in this bookmark file!" ) );
      }
      else
      {
        mustshow = 1;
        statusline( gettext( "Save D)ocument to bookmark file or C)ancel? (d,c): " ) );
        if ( LYgetch_single( ) == 68 )
        {
          save_bookmark_link( curdoc.address, curdoc.title );
          refresh_screen[0] = 1;
        }
      }
      if ( curdoc.bookmark && BookmarkPage && strcmp( curdoc.bookmark, BookmarkPage ) == 0 )
      {
        HTuncache_current_document( );
        move_address( &newdoc, &curdoc );
        HTSACopy( &newdoc.bookmark, curdoc.bookmark );
        newdoc.line = curdoc.line;
        newdoc.link = curdoc.link;
        newdoc.internal_link = 0;
      }
    }
    else
    {
      if ( old_c[0] == real_c )
      {
        return;
      }
      old_c[0] = real_c;
      HTUserMsg( gettext( "History, showinfo, menu and list files cannot be saved as bookmarks." ) );
    }
  }
  return;
}
void handle_LYK_CLEAR_AUTH( int *old_c, int real_c )
{
  if ( old_c[0] != real_c )
  {
    old_c[0] = real_c;
    if ( HTConfirm( gettext( "Clear all authorization info for this session?" ) ) & 255 )
    {
      if ( authentication_info[0] )
      {
        free( authentication_info[0] );
        authentication_info[0] = 0;
      }
      if ( authentication_info[1] )
      {
        free( authentication_info[1] );
        authentication_info[1] = 0;
      }
      if ( proxyauth_info[0] )
      {
        free( proxyauth_info[0] );
        proxyauth_info[0] = 0;
      }
      if ( proxyauth_info[1] )
      {
        free( proxyauth_info[1] );
        proxyauth_info[1] = 0;
      }
      HTClearHTTPAuthInfo( );
      HTClearNNTPAuthInfo( );
      HTClearFTPPassword( );
      HTUserMsg( gettext( "Authorization info cleared." ) );
    }
    else
    {
      HTUserMsg( gettext( "Cancelled!!!" ) );
    }
  }
  return;
}
int handle_LYK_COMMAND( char *user_input_buffer )
{
  int ch;
  Kcmd *mp;
  char *src, *tmp;
  user_input_buffer[0] = 0;
  mustshow = 1;
  statusline( ": " );
  if ( LYgetstr( user_input_buffer, 0, 1024, 2 ) < 0 )
  {
    return 0;
  }
  src = LYSkipBlanks( user_input_buffer );
  tmp = LYSkipNonBlanks( src );
  tmp[0] = 0;
  mp = LYStringToKcmd( src );
  ch = 0;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYK_COMMAND(%s.%s) = %d\n", src, tmp, ch );
  }
  if ( ch == 0 )
  {
    return 0;
  }
  else
  {
    return ch;
  }
}
void handle_LYK_COMMENT( BOOLEAN *refresh_screen, char **owner_address_p, int *old_c, int real_c )
{
  int c;
  if ( owner_address_p[0] == 0 && strncasecomp( curdoc.address, "http", 4 ) )
  {
    if ( old_c[0] != real_c )
    {
      old_c[0] = real_c;
      HTUserMsg( gettext( "No owner is defined for this file so you cannot send a comment" ) );
    }
  }
  else
  if ( no_mail )
  {
    if ( old_c[0] == real_c )
    {
      return;
    }
    old_c[0] = real_c;
    HTUserMsg( gettext( "Mail is disallowed so you cannot send a comment" ) );
  }
  else
  {
    if ( HTConfirmDefault( gettext( "Do you wish to send a comment?" ), 0 ) )
    {
      if ( owner_address_p[0] == 0 )
      {
        char *address = 0;
        char *temp = HTParse( curdoc.address, "", 4 );
        char *cp;
        if ( temp )
        {
          HTUnEscape( temp );
          if ( temp[0] == '~' && strlen( temp ) > 1 )
          {
            cp = strchr( &temp[1], '/' );
            if ( cp )
              cp[0] = 0;
            HTSACopy( &address, "mailto:" );
            HTSACat( &address, &temp[1] );
            HTSACat( &address, "@" );
          }
          if ( temp )
          {
            free( temp );
            temp = 0;
          }
        }
        if ( address == 0 )
          HTSACopy( &address, "mailto:WebMaster@" );
        temp = HTParse( curdoc.address, "", 8 );
        HTSACat( &address, temp );
        HTSprintf0( &temp, gettext( "No owner is defined. Use %s?" ), address );
        c = HTConfirmDefault( temp, 0 );
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
        if ( c == 1 )
        {
          HTSACopy( owner_address_p, address );
          if ( address )
          {
            free( address );
            address = 0;
          }
        }
        else
        {
          if ( address == 0 )
          {
            return;
          }
          free( address );
          address = 0;
        }
      }
      if ( is_url( owner_address_p[0] ) != 16 )
      {
        set_address( &newdoc, owner_address_p[0] );
        newdoc.internal_link = 0;
      }
      else
      {
        char *kp = HText_getRevTitle( );
        char *id = HText_getMessageID( );
        char *tmptitle = 0;
        if ( kp == 0 && HTMainAnchor )
        {
          kp = HTAnchor_subject( HTMainAnchor );
          if ( kp && kp[0] && strncasecomp( kp, "Re: ", 4 ) )
          {
            HTSACopy( &tmptitle, "Re: " );
            HTSACat( &tmptitle, kp );
            kp = tmptitle;
          }
        }
        if ( strchr( owner_address_p[0], ':' ) )
        {
          reply_by_mail( strchr( owner_address_p[0], ':' ) + 1, curdoc.address, "", id );
        }
        else
        {
          reply_by_mail( owner_address_p[0], curdoc.address, "", id );
        }
        if ( tmptitle )
        {
          free( tmptitle );
          tmptitle = 0;
        }
        refresh_screen[0] = 1;
      }
    }
  }
  return;
}
BOOLEAN handle_LYK_COOKIE_JAR( int *cmd )
{
  if ( strncasecomp( curdoc.address, "LYNXCOOKIE:", 11 ) == 0 )
  {
    cmd[0] = 37;
  }
  set_address( &newdoc, "LYNXCOOKIE:/" );
  LYFreePostData( &newdoc );
  if ( newdoc.bookmark )
  {
    free( newdoc.bookmark );
    newdoc.bookmark = 0;
  }
  newdoc.isHEAD = 0;
  newdoc.safe = 0;
  newdoc.internal_link = 0;
  LYforce_no_cache = 1;
  if ( LYValidate || check_realm )
    LYPermitURL = 1;
  return 1;
}
void handle_LYK_CREATE( void )
{
  if ( lynx_edit_mode && !no_dired_support && local_create( &curdoc ) > 0 )
  {
    if ( LYAutoUncacheDirLists > 0 )
      HTuncache_current_document( );
    move_address( &newdoc, &curdoc );
    LYFreePostData( &newdoc );
    if ( newdoc.bookmark )
    {
      free( newdoc.bookmark );
      newdoc.bookmark = 0;
    }
    newdoc.isHEAD = 0;
    newdoc.safe = 0;
    newdoc.line = curdoc.line;
    newdoc.link = curdoc.link & ~( curdoc.link >> 31 );
    LYclear( );
  }
  return;
}
void handle_LYK_DEL_BOOKMARK( BOOLEAN *refresh_screen, int *old_c, int real_c )
{
  if ( curdoc.bookmark )
  {
    if ( HTConfirmDefault( gettext( "Do you really want to delete this link from your bookmark file?" ), 0 ) == 1 )
    {
      remove_bookmark_link( links[ curdoc.link ].anchor_number + -1, curdoc.bookmark );
      do_cleanup_after_delete( );
    }
  }
  else
  {
    refresh_screen[0] = 1;
    if ( old_c[0] != real_c )
    {
      old_c[0] = real_c;
      lynx_force_repaint( );
    }
  }
  return;
}
void handle_LYK_DIRED_MENU( BOOLEAN *refresh_screen, int *old_c, int real_c )
{
  if ( lynx_edit_mode && no_dired_support == 0 && ( LYIsUIPage3( curdoc.address, 8, 1 ) & 255 ) == 0 )
  {
    if ( strcmp( "", gettext( "File Management Options" ) ) )
    {
      dired_options( &curdoc, &newdoc.address );
      refresh_screen[0] = 1;
    }
  }
  return;
}
int handle_LYK_DOWNLOAD( int *cmd, int *old_c, int real_c )
{
  static DocInfo temp;
  if ( LYValidate || ( no_download && !override_no_download && no_disk_save ) )
  {
    if ( old_c[0] != real_c )
    {
      old_c[0] = real_c;
      HTUserMsg( gettext( "The 'd'ownload command is currently disabled." ) );
    }
    return 0;
  }
  else
  {
    if ( LYIsUIPage3( curdoc.address, 1, 1 ) & 255 )
    {
      return 0;
    }
    if ( do_change_link( ) == -1 )
    {
      return 1;
    }
    if ( nlinks > 0 )
    {
      if ( links[ curdoc.link ].type == 1 )
      {
        switch ( links[ curdoc.link ].l_form->type )
        {
        case 5:
        case '':
        case '\r':
          if ( links[ curdoc.link ].l_form->submit_method == 3 )
          {
            if ( old_c[0] != real_c )
            {
              old_c[0] = real_c;
              HTUserMsg( gettext( "Form has a mailto action!  Cannot download." ) );
            }
            return 0;
          }
          else
          {
            if ( strncasecomp( &links[ curdoc.link ].l_form->submit_action, "LYNXOPTIONS:", 12 ) == 0 )
            {
              if ( old_c[0] != real_c )
              {
                old_c[0] = real_c;
                HTUserMsg( gettext( "This special URL cannot be downloaded!" ) );
              }
              return 0;
            }
            else
            {
              HTOutputFormat = HTAtom_for( "www/download" );
              LYforce_no_cache = 1;
              cmd[0] = 39;
              return 2;
            }
          }
          break;
        default:
          if ( old_c[0] == real_c )
          {
            return 0;
          }
          old_c[0] = real_c;
          HTUserMsg( gettext( "You cannot download an input field." ) );
          break;
        }
      }
      else
      {
        if ( strncasecomp( curdoc.address, "LYNXCOOKIE:", 11 ) == 0 )
        {
          if ( old_c[0] == real_c )
          {
            return 0;
          }
          old_c[0] = real_c;
          HTUserMsg( gettext( "You cannot download cookies." ) );
        }
        else
        {
          if ( LYIsUIPage3( curdoc.address, 2, 1 ) & 255 )
          {
            if ( old_c[0] == real_c )
            {
              return 0;
            }
            old_c[0] = real_c;
            HTUserMsg( gettext( "You cannot download a printing option." ) );
          }
          else
          {
            if ( LYIsUIPage3( curdoc.address, 10, 1 ) & 255 )
            {
              if ( old_c[0] == real_c )
              {
                return 0;
              }
              old_c[0] = real_c;
              HTUserMsg( gettext( "You cannot download an upload option." ) );
            }
            else
            {
              if ( LYIsUIPage3( curdoc.address, 9, 1 ) & 255 )
              {
                if ( old_c[0] == real_c )
                {
                  return 0;
                }
                old_c[0] = real_c;
                HTUserMsg( gettext( "You cannot download an permit option." ) );
              }
              else
              {
                if ( lynx_edit_mode && no_dired_support == 0 && strstr( links[ curdoc.link ].lname, "/SugFile=" ) == 0 )
                {
                  copy_address( &temp, &newdoc );
                  set_address( &newdoc, links[ curdoc.link ].lname );
                  if ( LYdownload_options( &newdoc.address, links[ curdoc.link ].lname ) < 0 )
                    copy_address( &newdoc, &temp );
                  else
                    newdoc.internal_link = 0;
                  LYFreeDocInfo( &temp );
                }
                else
                {
                  if ( ( LYIsUIPage3( curdoc.address, 0, 1 ) & 255 ) && strncasecomp( links[ curdoc.link ].lname, "LYNXHIST:", 9 ) == 0 )
                  {
                    int number = atoi( &links[ curdoc.link ].lname[9] );
                    if ( nhist <= number || number < 0 )
                    {
                      HTUserMsg( gettext( "This special URL cannot be downloaded!" ) );
                      return 0;
                    }
                    if ( history[ number ].hdoc.post_data && history[ number ].hdoc.safe != 1 && ( HTConfirm( gettext( "Document from Form with POST content.  Resubmit?" ) ) & 255 ) == 0 )
                    {
                      HTInfoMsg( gettext( "Cancelled!!!" ) );
                      return 0;
                    }
                    copy_address( &newdoc, &history[ number ].hdoc );
                    HTSACopy( &newdoc.title, LYGetHiliteStr( curdoc.link, 0 ) );
                    HTSACopy( &newdoc.bookmark, history[ number ].hdoc.bookmark );
                    LYFreePostData( &newdoc );
                    if ( history[ number ].hdoc.post_data )
                    {
                      HTSABCopy( &newdoc.post_data, 0, 0 );
                    }
                    if ( history[ number ].hdoc.post_content_type )
                      HTSACopy( &newdoc.post_content_type, history[ number ].hdoc.post_content_type );
                    newdoc.isHEAD = history[ number ].hdoc.isHEAD;
                    newdoc.safe = history[ number ].hdoc.safe;
                    newdoc.internal_link = 0;
                    newdoc.link = user_mode == 0;
                    HTOutputFormat = HTAtom_for( "www/download" );
                    LYUserSpecifiedURL = 1;
                    LYforce_no_cache = 1;
                  }
                  else
                  {
                    if ( strncmp( links[ curdoc.link ].lname, "data:", 5 ) == 0 )
                    {
                      if ( old_c[0] == real_c )
                      {
                        return 0;
                      }
                      old_c[0] = real_c;
                      HTAlert( gettext( "Unsupported data: URL!  Use SHOWINFO, for now." ) );
                    }
                    else
                    {
                      if ( strncasecomp( links[ curdoc.link ].lname, "LYNXCOOKIE:", 11 ) == 0 || strncasecomp( links[ curdoc.link ].lname, "LYNXDIRED:", 10 ) == 0 || strncasecomp( links[ curdoc.link ].lname, "LYNXDOWNLOAD:", 13 ) == 0 || strncasecomp( links[ curdoc.link ].lname, "LYNXPRINT:", 10 ) == 0 || strncasecomp( links[ curdoc.link ].lname, "LYNXOPTIONS:", 12 ) == 0 || strncasecomp( links[ curdoc.link ].lname, "LYNXHIST:", 9 ) == 0 || strncasecomp( links[ curdoc.link ].lname, "LYNXHIST:", 9 ) == 0 || strncasecomp( links[ curdoc.link ].lname, "LYNXCOMPILEOPTS:", 16 ) == 0 || ( ( links[ curdoc.link ].lname[0] == 'l' || links[ curdoc.link ].lname[0] == 'L' ) && strncasecomp( links[ curdoc.link ].lname, "lynxexec:", 9 ) == 0 ) || ( ( links[ curdoc.link ].lname[0] == 'l' || links[ curdoc.link ].lname[0] == 'L' ) && strncasecomp( links[ curdoc.link ].lname, "lynxprog:", 9 ) == 0 ) )
                      {
                        HTUserMsg( gettext( "This special URL cannot be downloaded!" ) );
                      }
                      else
                      {
                        if ( strncasecomp( links[ curdoc.link ].lname, "mailto:", 7 ) == 0 )
                        {
                          HTUserMsg( gettext( "You cannot download a mailto: link." ) );
                        }
                        else
                        {
                          if ( local_host_only && ( LYisLocalHost( links[ curdoc.link ].lname ) & 255 ) == 0 && ( LYisLocalAlias( links[ curdoc.link ].lname ) & 255 ) == 0 )
                          {
                            HTUserMsg( gettext( "Only files and servers on the local host can be accessed." ) );
                          }
                          else
                          {
                            set_address( &newdoc, links[ curdoc.link ].lname );
                            HTSACopy( &newdoc.title, LYGetHiliteStr( curdoc.link, 0 ) );
                            if ( are_different( &curdoc, &newdoc ) )
                            {
                              LYFreePostData( &newdoc );
                              if ( newdoc.bookmark )
                              {
                                free( newdoc.bookmark );
                                newdoc.bookmark = 0;
                              }
                              newdoc.isHEAD = 0;
                              newdoc.safe = 0;
                            }
                            newdoc.internal_link = 0;
                            newdoc.link = user_mode == 0;
                            HTOutputFormat = HTAtom_for( "www/download" );
                            LYforce_no_cache = 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    if ( old_c[0] != real_c )
    {
      old_c[0] = real_c;
      HTUserMsg( gettext( "Nothing to download." ) );
    }
  }
}
void handle_LYK_DOWN_xxx( int *old_c, int real_c, int scroll_by )
{
  int i;
  if ( more_text )
  {
    Newline += scroll_by;
    if ( nlinks > 0 && curdoc.link >= 0 && scroll_by < links[ curdoc.link ].ly )
    {
      newdoc.link = curdoc.link;
      i = 0;
      for ( ; links[ i ].ly <= scroll_by; i++ )
      {
        newdoc.link += -1;
        // i++;
      }
    }
  }
  else
  if ( old_c[0] != real_c )
  {
    old_c[0] = real_c;
    HTInfoMsg( gettext( "You are already at the end of this document." ) );
  }
  return;
}
void handle_LYK_DOWN_HALF( int *old_c, int real_c )
{
  handle_LYK_DOWN_xxx( old_c, real_c, ebp_16 );
  return;
}
void handle_LYK_DOWN_LINK( int *follow_col, int *old_c, int real_c )
{
  if ( curdoc.link < nlinks + -1 )
  {
    int newlink;
    if ( follow_col[0] == -1 )
    {
      char *text = LYGetHiliteStr( curdoc.link, 0 );
      follow_col[0] = links[ curdoc.link ].lx;
      if ( text )
      {
        follow_col[0] += strlen( text ) >> 1;
      }
    }
    newlink = find_link_near_col( follow_col[0], 1 );
    if ( newlink >= 0 )
    {
      set_curdoc_link( newlink );
    }
    else
    {
      if ( more_text )
      {
        Newline += display_lines;
      }
      else
      {
        if ( old_c[0] == real_c )
        {
          return;
        }
        old_c[0] = real_c;
        HTUserMsg( gettext( "There are no links below this line of the document." ) );
      }
    }
  }
  else
  {
    if ( more_text )
    {
      Newline += display_lines;
    }
    else
    {
      if ( old_c[0] == real_c )
      {
        return;
      }
      old_c[0] = real_c;
      HTInfoMsg( gettext( "You are already at the end of this document." ) );
    }
  }
  return;
}
void handle_LYK_DOWN_TWO( int *old_c, int real_c )
{
  handle_LYK_DOWN_xxx( old_c, real_c, ebp_16 );
  return;
}
int handle_LYK_DWIMEDIT( int *cmd, int *old_c, int real_c )
{
  if ( nlinks > 0 && links[ curdoc.link ].type == 1 && links[ curdoc.link ].l_form->type == 9 )
  {
    cmd[0] = 86;
    return 2;
  }
  if ( nlinks > 0 && links[ curdoc.link ].type == 1 && links[ curdoc.link ].l_form->type == 1 )
  {
    HTUserMsg( gettext( "This field cannot be (e)dited with an external editor." ) );
    return 1;
  }
  if ( no_editor == 0 )
  {
    return 0;
  }
  if ( old_c[0] != real_c )
  {
    old_c[0] = real_c;
    HTUserMsg( gettext( "External editing is currently disabled." ) );
  }
  return 1;
}
int handle_LYK_ECGOTO( int *ch, char *user_input_buffer, char **old_user_input, int *old_c, int real_c )
{
  if ( no_goto && LYValidate == 0 )
  {
    if ( old_c[0] != real_c )
    {
      old_c[0] = real_c;
      HTUserMsg( gettext( "Goto a random URL is disallowed!" ) );
    }
    return 0;
  }
  else
  {
    if ( ( LYIsUIPage3( curdoc.address, 8, 1 ) & 255 ) || ( LYIsUIPage3( curdoc.address, 9, 1 ) & 255 ) || ( LYIsUIPage3( curdoc.address, 10, 1 ) & 255 ) )
    {
      if ( old_c[0] != real_c )
      {
        old_c[0] = real_c;
        HTUserMsg( gettext( "You cannot edit File Management URLs" ) );
      }
      return 0;
    }
    else
    {
      HTSACopy( old_user_input, user_input_buffer );
      LYstrncpy( user_input_buffer, curdoc.address, 1023 );
      if ( curdoc.post_data )
      {
        HTAlert( gettext( "Current document has POST data." ) );
      }
      mustshow = 1;
      statusline( gettext( "Edit this document's URL: " ) );
      ch[0] = LYgetstr( user_input_buffer, 0, 1024, 1 );
      if ( ch[0] >= 0 && user_input_buffer[0] && strcmp( user_input_buffer, curdoc.address ) )
      {
        LYTrimAllStartfile( user_input_buffer );
        if ( user_input_buffer[0] )
        {
          return 2;
        }
      }
      HTInfoMsg( gettext( "Cancelled!!!" ) );
      LYstrncpy( user_input_buffer, old_user_input[0], 1023 );
      if ( old_user_input[0] )
      {
        free( old_user_input[0] );
        old_user_input[0] = 0;
      }
      return 0;
    }
  }
}
void handle_LYK_EDIT( int *old_c, int real_c )
{
  char *cp;
  char *tp = 0;
  struct stat dir_info;
  if ( no_editor )
  {
    if ( old_c[0] == real_c )
    {
      return;
    }
    old_c[0] = real_c;
    HTUserMsg( gettext( "The 'e'dit command is currently disabled." ) );
  }
  else
  if ( lynx_edit_mode && editor && editor[0] && no_dired_support == 0 )
  {
    if ( nlinks > 0 )
    {
      cp = links[ curdoc.link ].lname;
      if ( is_url( cp ) == 3 )
      {
        cp = HTnameOfFile_WWW( cp, 0, 1 );
        HTSACopy( &tp, cp );
        if ( cp )
        {
          free( cp );
          cp = 0;
        }
        if ( stat64( tp, &dir_info.st_dev ) == -1 )
        {
          HTAlert( gettext( "System error - failure to get status." ) );
        }
        else
        if ( ( dir_info.st_mode & 61440 ) == 32768 )
        {
          HTSACopy( &tp, links[ curdoc.link ].lname );
          HTUnEscapeSome( tp, "/" );
          if ( edit_current_file( tp, curdoc.link, Newline ) )
          {
            if ( LYAutoUncacheDirLists > 0 )
              HTuncache_current_document( );
            move_address( &newdoc, &curdoc );
            newdoc.line = curdoc.line;
            newdoc.link = curdoc.link;
            LYclear( );
          }
        }
        if ( tp == 0 )
        {
          return;
        }
        free( tp );
        tp = 0;
      }
    }
  }
  else
  {
    if ( editor && editor[0] )
    {
      if ( edit_current_file( newdoc.address, curdoc.link, Newline ) == 0 )
      {
        return;
      }
      HTuncache_current_document( );
      LYforce_no_cache = 1;
      free_address( &curdoc );
      newdoc.line = curdoc.line;
      newdoc.link = curdoc.link;
      LYclear( );
    }
    else
    {
      if ( old_c[0] == real_c )
      {
        return;
      }
      old_c[0] = real_c;
      HTUserMsg( gettext( "No editor is defined!" ) );
    }
  }
  return;
}
void handle_LYK_DWIMHELP( char **cshelpfile )
{
  if ( curdoc.link >= 0 && curdoc.link < nlinks && links[ curdoc.link ].type == 1 && links[ curdoc.link ].l_form->disabled == 0 )
  {
    cshelpfile[0] = LYLineeditHelpURL( );
  }
  return;
}
void handle_LYK_EDIT_TEXTAREA( BOOLEAN *refresh_screen, int *old_c, int real_c )
{
  int n;
  if ( no_editor )
  {
    if ( old_c[0] != real_c )
    {
      old_c[0] = real_c;
      HTUserMsg( gettext( "External editing is currently disabled." ) );
    }
  }
  else
  if ( editor == 0 || editor[0] == 0 )
  {
    if ( old_c[0] != real_c )
    {
      old_c[0] = real_c;
      HTUserMsg( gettext( "No editor is defined!" ) );
    }
  }
  else
  if ( links[ curdoc.link ].type == 1 && links[ curdoc.link ].l_form->type == 9 )
  {
    stop_curses( );
    n = HText_ExtEditForm( &links[ curdoc.link ] );
    start_curses( );
    refresh_screen[0] = 1;
  }
  else
  {
    HTInfoMsg( gettext( "Not in a TEXTAREA; cannot use external editor." ) );
  }
  return;
}
int handle_LYK_ELGOTO( int *ch, char *user_input_buffer, char **old_user_input, int *old_c, int real_c )
{
  if ( no_goto && LYValidate == 0 )
  {
    if ( old_c[0] != real_c )
    {
      old_c[0] = real_c;
      HTUserMsg( gettext( "Goto a random URL is disallowed!" ) );
    }
    return 0;
  }
  else
  {
    if ( nlinks <= 0 || curdoc.link < 0 || ( links[ curdoc.link ].type == 1 && links[ curdoc.link ].l_form->type != 5 && links[ curdoc.link ].l_form->type != 13 && links[ curdoc.link ].l_form->type != 12 ) )
    {
      if ( old_c[0] != real_c )
      {
        old_c[0] = real_c;
        HTUserMsg( gettext( "You are not on a form submission button or normal link." ) );
      }
      return 0;
    }
    else
    {
      if ( links[ curdoc.link ].type == 1 && ( links[ curdoc.link ].l_form->submit_action == 0 || links[ curdoc.link ].l_form->submit_action[0] == 0 ) )
      {
        if ( old_c[0] != real_c )
        {
          old_c[0] = real_c;
          HTUserMsg( gettext( "** Bad HTML!!  No form action defined. **" ) );
        }
        return 0;
      }
      else
      {
        if ( !strncasecomp( links[ curdoc.link ].lname, "LYNXDIRED:", 10 ) || ( LYIsUIPage3( curdoc.address, 8, 1 ) & 255 ) || ( LYIsUIPage3( curdoc.address, 9, 1 ) & 255 ) || ( LYIsUIPage3( curdoc.address, 10, 1 ) & 255 ) )
        {
          if ( old_c[0] != real_c )
          {
            old_c[0] = real_c;
            HTUserMsg( gettext( "You cannot edit File Management URLs" ) );
          }
          return 0;
        }
        else
        {
          HTSACopy( old_user_input, user_input_buffer );
          LYstrncpy( user_input_buffer, links[ curdoc.link ].type == 1 ? &links[ curdoc.link ].l_form->submit_action : links[ curdoc.link ].lname, 1023 );
          mustshow = 1;
          statusline( gettext( "Edit the current link's URL: " ) );
          ch[0] = LYgetstr( user_input_buffer, 0, 1024, 1 );
          if ( ch[0] >= 0 && user_input_buffer[0] && strcmp( user_input_buffer, links[ curdoc.link ].type == 1 ? &links[ curdoc.link ].l_form->submit_action : links[ curdoc.link ].lname ) )
          {
            LYTrimAllStartfile( user_input_buffer );
            if ( user_input_buffer[0] )
            {
              return 2;
            }
          }
          HTInfoMsg( gettext( "Cancelled!!!" ) );
          LYstrncpy( user_input_buffer, old_user_input[0], 1023 );
          if ( old_user_input[0] )
          {
            free( old_user_input[0] );
            old_user_input[0] = 0;
          }
          return 0;
        }
      }
    }
  }
}
void handle_LYK_EXTERN_LINK( BOOLEAN *refresh_screen )
{
  if ( nlinks > 0 && links[ curdoc.link ] )
  {
    run_external( links[ curdoc.link ].lname, 0 );
    refresh_screen[0] = 1;
  }
  return;
}
void handle_LYK_EXTERN_PAGE( BOOLEAN *refresh_screen )
{
  if ( curdoc.address )
  {
    run_external( curdoc.address, 0 );
    refresh_screen[0] = 1;
  }
  return;
}
BOOLEAN handle_LYK_FASTBACKW_LINK( int *cmd, int *old_c, int real_c )
{
  int samepage = 0, nextlink = curdoc.link;
  int res;
  int code = 0;
  if ( nlinks > 1 )
  {
    if ( links[ curdoc.link ].type == 1 && links[ curdoc.link ].l_form->type == 9 )
    {
      int thisgroup = links[ curdoc.link ].l_form->number;
      char *thisname = &links[ curdoc.link ].l_form->name[0];
      if ( curdoc.link > 0 && ( links->type != 1 || links->l_form->type != 9 || links->l_form->number != thisgroup || sametext( &links->l_form->name[0], thisname ) == 0 ) )
      {
        do
        {
          nextlink += -1;
        }
        while ( links[ nextlink ].type == 1 && links[ nextlink ].l_form->type == 9 && links[ nextlink ].l_form->number == thisgroup && sametext( &links[ nextlink ].l_form->name[0], thisname ) );
        samepage = 1;
      }
      else
      if ( !more_text && Newline == 1 && links->type == 1 && links->l_form->type == 9 && links->l_form->number == thisgroup && sametext( &links->l_form->name[0], thisname ) && ( links[ nlinks + -1 ].type != 1 || links[ nlinks + -1 ].l_form->type != 9 || links[ nlinks + -1 ].l_form->number != thisgroup || sametext( &links[ nlinks + -1 ].l_form->name[0], thisname ) == 0 ) )
      {
        nextlink = nlinks + -1;
        samepage = 1;
      }
      else
      if ( !more_text && Newline == 1 && curdoc.link > 0 )
      {
        nextlink = 0;
        samepage = 1;
      }
    }
    else
    if ( curdoc.link > 0 )
    {
      nextlink += -1;
      samepage = 1;
    }
    else
    if ( more_text == 0 && Newline == 1 )
    {
      nextlink = nlinks + -1;
      samepage = 1;
    }
  }
  if ( samepage )
  {
    if ( nextlink > 0 && links[ nextlink ].type == 1 && links[ nextlink ].l_form->type == 9 )
    {
      int thisgroup = links[ nextlink ].l_form->number;
      char *thisname = &links[ nextlink ].l_form->name[0];
      if ( links->type == 1 && links->l_form->type == 9 && links->l_form->number == thisgroup && sametext( &links->l_form->name[0], thisname ) )
        nextlink = 0;
      else
      for ( ; nextlink > 1 && links[ nextlink + -1 ].type == 1 && links[ nextlink + -1 ].l_form->type == 9 && links[ nextlink + -1 ].l_form->number == thisgroup && sametext( &links[ nextlink + -1 ].l_form->name[0], thisname );  )
      {
        nextlink += -1;
      }
    }
    set_curdoc_link( nextlink );
  }
  else
  {
    if ( Newline > 1 )
    {
      res = HTGetLinkOrFieldStart( curdoc.link, &Newline, &newdoc.link, -1, 1 );
      if ( res )
      {
        if ( res == 16 )
        {
          if ( nlinks > 0 )
            curdoc.link = 0;
          cmd[0] = 26;
          code = 1;
        }
        else
        {
          Newline++;
        }
      }
    }
    if ( old_c[0] != real_c )
    {
      old_c[0] = real_c;
      HTInfoMsg( gettext( "There are no links above this line of the document." ) );
    }
  }
  return code;
}
void handle_LYK_FASTFORW_LINK( int *old_c, int real_c )
{
  int samepage = 0, nextlink = curdoc.link;
  if ( nlinks > 1 )
  {
    if ( links[ curdoc.link ].type == 1 && links[ curdoc.link ].l_form->type == 9 )
    {
      int thisgroup = links[ curdoc.link ].l_form->number;
      char *thisname = &links[ curdoc.link ].l_form->name[0];
      if ( curdoc.link < nlinks + -1 && ( links[ nlinks + -1 ].type != 1 || links[ nlinks + -1 ].l_form->type != 9 || links[ nlinks + -1 ].l_form->number != thisgroup || sametext( &links[ nlinks + -1 ].l_form->name[0], thisname ) == 0 ) )
      {
        do
        {
          nextlink++;
        }
        while ( links[ nextlink ].type == 1 && links[ nextlink ].l_form->type == 9 && links[ nextlink ].l_form->number == thisgroup && sametext( &links[ nextlink ].l_form->name[0], thisname ) );
        samepage = 1;
      }
      else
      if ( !more_text && Newline == 1 && curdoc.link > 0 )
      {
        nextlink = 0;
        samepage = 1;
      }
    }
    else
    if ( curdoc.link < nlinks + -1 )
    {
      nextlink++;
      samepage = 1;
    }
    else
    if ( !more_text && Newline == 1 && curdoc.link > 0 )
    {
      nextlink = 0;
      samepage = 1;
    }
  }
  if ( samepage )
  {
    set_curdoc_link( nextlink );
  }
  else
  if ( more_text == 0 && Newline == 1 && curdoc.link == nlinks + -1 )
  {
    set_curdoc_link( 0 );
  }
  else
  if ( more_text && HTGetLinkOrFieldStart( curdoc.link, &Newline, &newdoc.link, 1, 1 ) )
  {
    Newline++;
  }
  else
  if ( old_c[0] != real_c )
  {
    old_c[0] = real_c;
    HTInfoMsg( gettext( "There are no links below this line of the document." ) );
  }
  return;
}
void handle_LYK_FIRST_LINK( void )
{
  int eax;
  int i = curdoc.link;
  do
  {
    i += -1;
  }
  while ( i >= 0 && links[ i ].ly == links[ curdoc.link ].ly );
  set_curdoc_link( i + 1 );
  return;
}
BOOLEAN handle_LYK_GOTO( int *ch, char *user_input_buffer, char **old_user_input, RecallType *recall, int *URLTotal, int *URLNum, BOOLEAN *FirstURLRecall, int *old_c, int real_c )
{
  if ( no_goto && LYValidate == 0 )
  {
    if ( old_c[0] != real_c )
    {
      old_c[0] = real_c;
      HTUserMsg( gettext( "Goto a random URL is disallowed!" ) );
    }
  }
  else
  {
    HTSACopy( old_user_input, user_input_buffer );
    if ( goto_buffer == 0 )
      user_input_buffer[0] = 0;
    URLTotal[0] = 0;
    if ( goto_buffer && user_input_buffer[0] )
    {
      recall[0] = URLTotal[0] > 1;
      URLNum[0] = 0;
      FirstURLRecall[0] = 0;
    }
    else
    {
      recall[0] = URLTotal[0] > 0;
      URLNum[0] = URLTotal[0];
      FirstURLRecall[0] = 1;
    }
    mustshow = 1;
    statusline( gettext( "URL to open: " ) );
    ch[0] = LYgetstr( user_input_buffer, 0, 1024, recall[0] );
    if ( ch[0] < 0 )
    {
      LYstrncpy( user_input_buffer, old_user_input[0], 1023 );
      if ( old_user_input[0] )
      {
        free( old_user_input[0] );
        old_user_input[0] = 0;
      }
      HTInfoMsg( gettext( "Cancelled!!!" ) );
    }
    else
    {
    }
  }
  return 1;
}
void handle_LYK_GROW_TEXTAREA( BOOLEAN *refresh_screen )
{
  if ( links[ curdoc.link ].type == 1 && links[ curdoc.link ].l_form->type == 9 )
  {
    HText_ExpandTextarea( &links[ curdoc.link ], 5 );
    refresh_screen[0] = 1;
  }
  else
  {
    HTInfoMsg( gettext( "Not in a TEXTAREA; cannot use command." ) );
  }
  return;
}
BOOLEAN handle_LYK_HEAD( int *cmd )
{
  int c;
  if ( nlinks > 0 && ( links[ curdoc.link ].type != 1 || links[ curdoc.link ].l_form->type == 5 || links[ curdoc.link ].l_form->type == 13 || links[ curdoc.link ].l_form->type == 12 ) )
  {
    mustshow = 1;
    statusline( gettext( "Send HEAD request for D)ocument or L)ink, or C)ancel? (d,l,c): " ) );
    c = LYgetch_single( );
    if ( c == 68 )
    {
      char *scheme = &curdoc.address[11];
      if ( LYCanDoHEAD( scheme ) != 1 )
      {
        HTUserMsg( gettext( "Sorry, the document is not an http URL." ) );
      }
      else
      {
        if ( curdoc.post_data && curdoc.safe != 1 && ( HTConfirm( gettext( "Document from POST action, HEAD may not be understood.  Proceed?" ) ) & 255 ) == 0 )
        {
          HTInfoMsg( gettext( "Cancelled!!!" ) );
        }
        else
        {
          HEAD_request = 1;
          LYforce_no_cache = 1;
          HTSACopy( &newdoc.title, curdoc.title );
          if ( HTLoadedDocumentIsHEAD( ) & 255 )
          {
            HText_setNoCache( HTMainText );
            free_address( &curdoc );
          }
          else
            HTSACat( &newdoc.title, " - HEAD" );
        }
      }
    }
    else
    {
      if ( c == 76 )
      {
        if ( links[ curdoc.link ].type != 1 && strncmp( links[ curdoc.link ].lname, "http", 4 ) && strncmp( links[ curdoc.link ].lname, "LYNXIMGMAP:http", 15 ) && LYCanDoHEAD( links[ curdoc.link ].lname ) != 1 && ( links[ curdoc.link ].type != 6 || curdoc.address == 0 || strncmp( curdoc.address, "http", 4 ) ) )
        {
          HTUserMsg( gettext( "Sorry, the link is not an http URL." ) );
        }
        else
        {
          if ( links[ curdoc.link ].type == 1 && links[ curdoc.link ].l_form->disabled )
          {
            HTUserMsg( gettext( "Sorry, the ACTION for this form is disabled." ) );
          }
          else
          {
            if ( links[ curdoc.link ].type == 1 && links[ curdoc.link ].l_form->submit_action && ( ( links[ curdoc.link ].l_form->submit_action[0] != 'l' && links[ curdoc.link ].l_form->submit_action[0] != 'L' ) || strncasecomp( &links[ curdoc.link ].l_form->submit_action, "lynxcgi:", 8 ) ) && strncmp( &links[ curdoc.link ].l_form->submit_action, "http", 4 ) )
            {
              HTUserMsg( gettext( "Sorry, the ACTION for this form is not an http URL." ) );
            }
            else
            {
              if ( links[ curdoc.link ].type == 1 && links[ curdoc.link ].l_form->submit_method == 2 && ( HTConfirm( gettext( "Form submit action is POST, HEAD may not be understood.  Proceed?" ) ) & 255 ) == 0 )
              {
                HTInfoMsg( gettext( "Cancelled!!!" ) );
              }
              else
              {
                HEAD_request = 1;
                LYforce_no_cache = 1;
                cmd[0] = 39;
                return 0;
              }
            }
          }
        }
      }
    }
  }
  else
  if ( curdoc.post_data && curdoc.safe != 1 && ( HTConfirm( gettext( "Document from POST action, HEAD may not be understood.  Proceed?" ) ) & 255 ) == 0 )
  {
    HTInfoMsg( gettext( "Cancelled!!!" ) );
  }
  else
  {
    if ( nlinks > 0 )
    {
      mustshow = 1;
      statusline( gettext( "Send HEAD request for D)ocument, or C)ancel? (d,c): " ) );
      c = LYgetch_single( );
    }
    else
      c = 68;
    if ( c == 68 )
    {
      char *scheme = &curdoc.address[11];
      if ( LYCanDoHEAD( scheme ) != 1 )
      {
        HTUserMsg( gettext( "Sorry, the document is not an http URL." ) );
      }
      else
      {
        HEAD_request = 1;
        LYforce_no_cache = 1;
        HTSACopy( &newdoc.title, curdoc.title );
        if ( HTLoadedDocumentIsHEAD( ) & 255 )
        {
          HText_setNoCache( HTMainText );
          free_address( &curdoc );
        }
        else
          HTSACat( &newdoc.title, " - HEAD" );
      }
    }
  }
  return 0;
}
void handle_LYK_HELP( char **cshelpfile )
{
  char *my_value = 0;
  if ( cshelpfile[0] == 0 )
    cshelpfile[0] = helpfile;
  HTSACopy( &my_value, cshelpfile[0] );
  LYEnsureAbsoluteURL( &my_value, cshelpfile[0], 0 );
  if ( strcmp( curdoc.address, my_value ) )
  {
    set_address( &newdoc, my_value );
    HTSACopy( &newdoc.title, gettext( "Help Screen" ) );
    LYFreePostData( &newdoc );
    if ( newdoc.bookmark )
    {
      free( newdoc.bookmark );
      newdoc.bookmark = 0;
    }
    newdoc.isHEAD = 0;
    newdoc.safe = 0;
    newdoc.internal_link = 0;
  }
  if ( my_value )
  {
    free( my_value );
    my_value = 0;
  }
  cshelpfile[0] = 0;
  return;
}
void handle_LYK_HISTORICAL( void )
{
  if ( ( HTcan_reparse_document( ) & 255 ) == 0 )
  {
    if ( curdoc.post_data && curdoc.safe != 1 && ( confirm_post_resub( curdoc.address, 0, 0, 0 ) & 255 ) == 0 )
    {
      HTInfoMsg( gettext( "Document will not be reloaded!" ) );
    }
    else
    {
      HText_setNoCache( HTMainText );
      move_address( &newdoc, &curdoc );
      newdoc.line = curdoc.line;
      newdoc.link = curdoc.link;
    }
  }
  historical_comments = historical_comments == 0;
  if ( minimal_comments )
  {
    HTAlert( historical_comments ? gettext( "Historical comment parsing ON (Minimal is overridden)!" ) : gettext( "Historical comment parsing OFF (Minimal is in effect)!" ) );
  }
  else
  {
    HTAlert( historical_comments ? gettext( "Historical comment parsing ON (Valid is overridden)!" ) : gettext( "Historical comment parsing OFF (Valid is in effect)!" ) );
  }
  reparse_document( );
  return;
}
BOOLEAN handle_LYK_HISTORY( BOOLEAN ForcePush )
{
  if ( curdoc && ( LYIsUIPage3( curdoc.address, 0, 1 ) & 255 ) == 0 )
  {
    if ( WWW_TraceFlag && !LYUseTraceLog && LYCursesON )
    {
      LYmove( LYlines + -1, ( LYcols - ( LYShowScrollbar != 0 ) ) + -1 );
      LYrefresh( );
    }
    LYpush( &curdoc, ForcePush );
    if ( showhistory( &newdoc.address ) < 0 )
    {
      LYpop( &curdoc );
    }
    LYRegisterUIPage( newdoc.address, 0 );
    HTSACopy( &newdoc.title, gettext( "History Page" ) );
    LYFreePostData( &newdoc );
    if ( newdoc.bookmark )
    {
      free( newdoc.bookmark );
      newdoc.bookmark = 0;
    }
    newdoc.isHEAD = 0;
    newdoc.safe = 0;
    newdoc.internal_link = 0;
    newdoc.link = 1;
    free_address( &curdoc );
    if ( LYValidate || check_realm )
      LYPermitURL = 1;
  }
  else
  {
  }
  return 0;
}
BOOLEAN handle_LYK_IMAGE_TOGGLE( int *cmd )
{
  clickable_images = clickable_images == 0;
  HTUserMsg( clickable_images ? gettext( "Links will be included for all images!  Reloading..." ) : gettext( "Standard image handling restored!  Reloading..." ) );
  return reparse_or_reload( cmd );
}
void handle_LYK_INDEX( int *old_c, int real_c )
{
  if ( strcmp( curdoc.address, indexfile ) )
  {
    if ( indexfile[0] == 0 )
    {
      if ( old_c[0] != real_c )
      {
        old_c[0] = real_c;
        HTUserMsg( gettext( "No index is currently available." ) );
      }
    }
    else
    {
      set_address( &newdoc, indexfile );
      HTSACopy( &newdoc.title, gettext( "System Index" ) );
      LYFreePostData( &newdoc );
      if ( newdoc.bookmark )
      {
        free( newdoc.bookmark );
        newdoc.bookmark = 0;
      }
      newdoc.isHEAD = 0;
      newdoc.safe = 0;
      newdoc.internal_link = 0;
    }
  }
  return;
}
void handle_LYK_INDEX_SEARCH( BOOLEAN *force_load, BOOLEAN ForcePush, int *old_c, int real_c )
{
  if ( is_www_index )
  {
    newdoc.isHEAD = 0;
    newdoc.safe = 0;
    if ( do_www_search( &newdoc ) == 1 )
    {
      if ( WWW_TraceFlag && !LYUseTraceLog && LYCursesON )
      {
        LYmove( LYlines + -1, ( LYcols - ( LYShowScrollbar != 0 ) ) + -1 );
        LYrefresh( );
      }
      LYpush( &curdoc, ForcePush );
      copy_address( &curdoc, &newdoc );
      HTSABCopy( &newdoc.post_data, 0, 0 );
      HTSACopy( &newdoc.post_content_type, curdoc.post_content_type );
      newdoc.internal_link = 0;
      curdoc.line = -1;
      Newline = 0;
    }
    else
    {
      if ( use_this_url_instead )
      {
        HTUserMsg2( gettext( "Using %s" ), use_this_url_instead );
        HTSACopy( &newdoc.title, "A URL specified by redirection" );
        set_address( &newdoc, use_this_url_instead );
        LYFreePostData( &newdoc );
        if ( newdoc.bookmark )
        {
          free( newdoc.bookmark );
          newdoc.bookmark = 0;
        }
        newdoc.isHEAD = 0;
        newdoc.safe = 0;
        newdoc.internal_link = 0;
        if ( use_this_url_instead )
        {
          free( use_this_url_instead );
          use_this_url_instead = 0;
        }
        force_load[0] = 1;
      }
      else
      {
        copy_address( &newdoc, &curdoc );
        HTSABCopy( &newdoc.post_data, 0, 0 );
        HTSACopy( &newdoc.post_content_type, curdoc.post_content_type );
        HTSACopy( &newdoc.bookmark, curdoc.bookmark );
        newdoc.isHEAD = curdoc.isHEAD;
        newdoc.safe = curdoc.safe;
        newdoc.internal_link = curdoc.internal_link;
      }
    }
  }
  else
  if ( old_c[0] != real_c )
  {
    old_c[0] = real_c;
    HTUserMsg( gettext( "Not a searchable indexed document -- press '/' to search for a text string" ) );
  }
  return;
}
BOOLEAN handle_LYK_INFO( int *cmd )
{
  if ( ( LYIsUIPage3( curdoc.address, 3, 1 ) & 255 ) == 0 )
  {
    if ( do_change_link( ) != -1 && LYShowInfo( &curdoc, &newdoc, owner_address ) >= 0 )
    {
      LYRegisterUIPage( newdoc.address, 3 );
      HTSACopy( &newdoc.title, gettext( "Information about the current document" ) );
      LYFreePostData( &newdoc );
      if ( newdoc.bookmark )
      {
        free( newdoc.bookmark );
        newdoc.bookmark = 0;
      }
      newdoc.isHEAD = 0;
      newdoc.safe = 0;
      newdoc.internal_link = 0;
      LYforce_no_cache = 1;
      if ( LYValidate || check_realm )
        LYPermitURL = 1;
    }
  }
  else
  {
    cmd[0] = 37;
  }
  return 1;
}
BOOLEAN handle_LYK_INLINE_TOGGLE( int *cmd )
{
  pseudo_inline_alts = pseudo_inline_alts == 0;
  HTUserMsg( pseudo_inline_alts ? gettext( "Pseudo_ALTs will be inserted for inlines without ALT strings!  Reloading..." ) : gettext( "Inlines without an ALT string specified will be ignored!  Reloading..." ) );
  return reparse_or_reload( cmd );
}
void handle_LYK_INSERT_FILE( BOOLEAN *refresh_screen, int *old_c, int real_c )
{
  int n;
  if ( links[ curdoc.link ].type == 1 && links[ curdoc.link ].l_form->type == 9 )
  {
    if ( no_file_url || no_goto_file || HTDirAccess == 0 || HTDirAccess == 1 )
    {
      if ( old_c[0] != real_c )
      {
        old_c[0] = real_c;
        if ( no_goto_file )
        {
          HTUserMsg2( gettext( "You are not allowed to goto \"%s\" URLs" ), "file:" );
        }
        else
        {
          HTUserMsg( gettext( "Access to local files denied." ) );
        }
        HTInfoMsg( gettext( "File insert cancelled!!!" ) );
      }
    }
    else
    {
      n = HText_InsertFile( &links[ curdoc.link ] );
      refresh_screen[0] = 1;
    }
  }
  else
  {
    HTInfoMsg( gettext( "Not in a TEXTAREA; cannot use command." ) );
  }
  return;
}
BOOLEAN handle_LYK_JUMP( int c, char *user_input_buffer, char **old_user_input, RecallType *recall, BOOLEAN *FirstURLRecall, int *URLNum, int *URLTotal, int *ch, int *old_c, int real_c )
{
  char *ret;
  if ( no_jump || JThead == 0 )
  {
    if ( old_c[0] == real_c )
    {
      return 0;
    }
    old_c[0] = real_c;
    if ( no_jump )
    {
      HTUserMsg( gettext( "Jumping to a shortcut URL is disallowed!" ) );
    }
    HTUserMsg( gettext( "No jump file is currently available." ) );
  }
  else
  {
    LYJumpFileURL = 1;
    ret = LYJump( c );
    if ( ret == 0 )
    {
      LYJumpFileURL = 0;
    }
    ret = HTParse( ret, startfile, 31 );
    if ( ( LYTrimStartfile( ret ) & 255 ) == 0 )
      LYRemoveBlanks( user_input_buffer );
    set_address( &newdoc, ret );
    HTSACopy( &lynxjumpfile, ret );
    LYFreePostData( &newdoc );
    if ( newdoc.bookmark )
    {
      free( newdoc.bookmark );
      newdoc.bookmark = 0;
    }
    newdoc.isHEAD = 0;
    newdoc.safe = 0;
    newdoc.internal_link = 0;
    if ( ret )
    {
      free( ret );
      ret = 0;
    }
    LYUserSpecifiedURL = 1;
  }
  return 0;
}
void handle_LYK_KEYMAP( BOOLEAN *vi_keys_flag, BOOLEAN *emacs_keys_flag, int *old_c, int real_c )
{
  if ( old_c[0] != real_c )
  {
    old_c[0] = real_c;
    set_address( &newdoc, "LYNXKEYMAP:" );
    HTSACopy( &newdoc.title, gettext( "Current Key Map" ) );
    LYFreePostData( &newdoc );
    if ( newdoc.bookmark )
    {
      free( newdoc.bookmark );
      newdoc.bookmark = 0;
    }
    newdoc.isHEAD = 0;
    newdoc.safe = 0;
    newdoc.internal_link = 0;
    if ( vi_keys_flag[0] != vi_keys || emacs_keys_flag[0] != emacs_keys )
    {
      LYforce_no_cache = 1;
      vi_keys_flag[0] = vi_keys;
      emacs_keys_flag[0] = emacs_keys;
    }
    if ( no_dired_support == 0 )
      prev_lynx_edit_mode = lynx_edit_mode;
    LYforce_no_cache = 1;
  }
  return;
}
void handle_LYK_LAST_LINK( void )
{
  int eax;
  int i = curdoc.link;
  do
  {
    i++;
  }
  while ( i < nlinks && links[ i ].ly == links[ curdoc.link ].ly );
  set_curdoc_link( i + -1 );
  return;
}
void handle_LYK_LEFT_LINK( void )
{
  if ( curdoc.link > 0 && links[ curdoc.link ].ly == links[ curdoc.link + -1 ].ly )
  {
    set_curdoc_link( curdoc.link + -1 );
  }
  return;
}
BOOLEAN handle_LYK_LIST( int *cmd )
{
  if ( !strcmp( "", gettext( "List Page" ) ) && ( LYIsUIPage3( curdoc.address, 4, 1 ) & 255 ) )
  {
    cmd[0] = 37;
  }
  if ( showlist( &newdoc, 1 ) < 0 )
  {
  }
  HTSACopy( &newdoc.title, gettext( "List Page" ) );
  if ( LYValidate || check_realm )
  {
    LYPermitURL = 1;
    HTSACopy( &lynxlistfile, newdoc.address );
  }
  return 0;
}
void handle_LYK_MAIN_MENU( int *old_c, int real_c )
{
  if ( strcmp( curdoc.address, homepage ) )
  {
    if ( HTConfirmDefault( gettext( "Do you really want to go to the Main screen?" ), 0 ) == 1 )
    {
      set_address( &newdoc, homepage );
      HTSACopy( &newdoc.title, gettext( "Entry into main screen" ) );
      LYFreePostData( &newdoc );
      if ( newdoc.bookmark )
      {
        free( newdoc.bookmark );
        newdoc.bookmark = 0;
      }
      newdoc.isHEAD = 0;
      newdoc.safe = 0;
      newdoc.internal_link = 0;
      LYhighlight( 0, curdoc.link, prev_target );
      if ( lynx_edit_mode && LYAutoUncacheDirLists > 1 )
      {
        HTuncache_current_document( );
      }
    }
  }
  else
  if ( old_c[0] != real_c )
  {
    old_c[0] = real_c;
    HTUserMsg( gettext( "You are already at main screen!" ) );
  }
  return;
}
void handle_LYK_MINIMAL( void )
{
  if ( historical_comments == 0 && ( HTcan_reparse_document( ) & 255 ) == 0 )
  {
    if ( curdoc.post_data && curdoc.safe != 1 && ( confirm_post_resub( curdoc.address, 0, 0, 0 ) & 255 ) == 0 )
    {
      HTInfoMsg( gettext( "Document will not be reloaded!" ) );
    }
    else
    {
      HText_setNoCache( HTMainText );
      move_address( &newdoc, &curdoc );
      newdoc.line = curdoc.line;
      newdoc.link = curdoc.link;
    }
  }
  minimal_comments = minimal_comments == 0;
  if ( historical_comments == 0 )
  {
    HTAlert( minimal_comments ? gettext( "Minimal comment parsing ON (and in effect)!" ) : gettext( "Minimal comment parsing OFF (Valid is in effect)!" ) );
  }
  else
  {
    HTAlert( minimal_comments ? gettext( "Minimal comment parsing ON (but Historical is in effect)!" ) : gettext( "Minimal comment parsing OFF (Historical is in effect)!" ) );
  }
  reparse_document( );
  return;
}
void handle_LYK_MODIFY( BOOLEAN *refresh_screen )
{
  if ( lynx_edit_mode && nlinks > 0 && no_dired_support == 0 )
  {
    int ret = local_modify( &curdoc, &newdoc.address );
    if ( ret == -99 )
    {
      refresh_screen[0] = 1;
    }
    else
    if ( ret )
    {
      if ( LYAutoUncacheDirLists > 0 )
        HTuncache_current_document( );
      move_address( &newdoc, &curdoc );
      LYFreePostData( &newdoc );
      if ( newdoc.bookmark )
      {
        free( newdoc.bookmark );
        newdoc.bookmark = 0;
      }
      newdoc.isHEAD = 0;
      newdoc.safe = 0;
      newdoc.internal_link = 0;
      newdoc.line = curdoc.line;
      newdoc.link = curdoc.link;
      LYclear( );
    }
  }
  return;
}
BOOLEAN handle_LYK_NESTED_TABLES( int *cmd )
{
  nested_tables = nested_tables == 0;
  HTUserMsg( nested_tables ? gettext( "Parsing nested-tables toggled ON!  Reloading..." ) : gettext( "Parsing nested-tables toggled OFF!  Reloading..." ) );
  return reparse_or_reload( cmd );
}
BOOLEAN handle_LYK_OPTIONS( int *cmd, BOOLEAN *refresh_screen )
{
  if ( LYUseFormsOptions == 0 )
  {
    BOOLEAN LYUseDefaultRawMode_flag = LYUseDefaultRawMode;
    BOOLEAN LYSelectPopups_flag = LYSelectPopups;
    BOOLEAN verbose_img_flag = verbose_img;
    BOOLEAN keypad_mode_flag = keypad_mode;
    BOOLEAN show_dotfiles_flag = show_dotfiles;
    BOOLEAN user_mode_flag = user_mode;
    int CurrentAssumeCharSet_flag = UCLYhndl_for_unspec;
    int CurrentCharSet_flag = current_char_set;
    int HTfileSortMethod_flag = HTfileSortMethod;
    char *CurrentUserAgent = 0;
    char *CurrentNegoLanguage = 0;
    char *CurrentNegoCharset = 0;
    HTSACopy( &CurrentUserAgent, "" );
    HTSACopy( &CurrentNegoLanguage, "" );
    HTSACopy( &CurrentNegoCharset, "" );
    LYoptions( );
    if ( keypad_mode_flag != keypad_mode || ( user_mode_flag != user_mode && ( user_mode_flag == 0 || user_mode == 0 ) ) || ( ( HTfileSortMethod_flag != HTfileSortMethod || show_dotfiles_flag != show_dotfiles ) && ( ( ( curdoc.address[0] == 'f' || curdoc.address[0] == 'F' ) && !strncasecomp( curdoc.address, "file:", 5 ) ) || !strncasecomp( curdoc.address, "ftp:", 4 ) ) ) || current_char_set != CurrentCharSet_flag || UCLYhndl_for_unspec != CurrentAssumeCharSet_flag || verbose_img_flag != verbose_img || LYUseDefaultRawMode_flag != LYUseDefaultRawMode || LYSelectPopups_flag != LYSelectPopups || ( ( strcmp( CurrentUserAgent, "" ) || strcmp( CurrentNegoLanguage, "" ) || strcmp( CurrentNegoCharset, "" ) ) && ( strncmp( curdoc.address, "http", 4 ) == 0 || ( ( curdoc.address[0] == 'l' || curdoc.address[0] == 'L' ) && strncasecomp( curdoc.address, "lynxcgi:", 8 ) == 0 ) ) ) )
    {
      BOOLEAN canreparse_post = 0;
      if ( curdoc.post_data && curdoc.safe != 1 )
      {
        canreparse_post = HTcan_reparse_document( );
        if ( canreparse_post == 0 && ( confirm_post_resub( curdoc.address, curdoc.title, 2, 1 ) & 255 ) == 0 )
        {
          HTInfoMsg( gettext( "Document will not be reloaded!" ) );
        }
      }
      copy_address( &newdoc, &curdoc );
      if ( ( strcmp( CurrentUserAgent, "" ) || strcmp( CurrentNegoLanguage, "" ) || strcmp( CurrentNegoCharset, "" ) ) && ( strncmp( curdoc.address, "http", 4 ) == 0 || 0 == 0 ) )
        reloading = 1;
      if ( HTisDocumentSource( ) )
        srcmode_for_next_retrieval( 1 );
      if ( !reloading && ( reparse_document( ) & 255 ) )
      {
        if ( CurrentUserAgent )
        {
          free( CurrentUserAgent );
          CurrentUserAgent = 0;
        }
        if ( CurrentNegoLanguage )
        {
          free( CurrentNegoLanguage );
          CurrentNegoLanguage = 0;
        }
        if ( CurrentNegoCharset )
        {
          free( CurrentNegoCharset );
          CurrentNegoCharset = 0;
        }
      }
      else
      {
        if ( canreparse_post && ( confirm_post_resub( curdoc.address, curdoc.title, 2, 1 ) & 255 ) == 0 )
        {
          if ( HTisDocumentSource( ) )
            srcmode_for_next_retrieval( 0 );
          if ( CurrentUserAgent )
          {
            free( CurrentUserAgent );
            CurrentUserAgent = 0;
          }
          if ( CurrentNegoLanguage )
          {
            free( CurrentNegoLanguage );
            CurrentNegoLanguage = 0;
          }
          if ( CurrentNegoCharset )
          {
            free( CurrentNegoCharset );
            CurrentNegoCharset = 0;
          }
        }
        else
        {
          HEAD_request = HTLoadedDocumentIsHEAD( );
          HText_setNoCache( HTMainText );
          newdoc.line = curdoc.line;
          newdoc.link = curdoc.link;
          LYforce_no_cache = 1;
          free_address( &curdoc );
        }
      }
    }
    if ( CurrentUserAgent )
    {
      free( CurrentUserAgent );
      CurrentUserAgent = 0;
    }
    if ( CurrentNegoLanguage )
    {
      free( CurrentNegoLanguage );
      CurrentNegoLanguage = 0;
    }
    if ( CurrentNegoCharset )
    {
      free( CurrentNegoCharset );
      CurrentNegoCharset = 0;
    }
    refresh_screen[0] = 1;
  }
  else
  {
    if ( ( LYIsUIPage3( curdoc.address, 7, 1 ) & 255 ) == 0 )
    {
      set_address( &newdoc, "LYNXOPTIONS:/" );
      LYFreePostData( &newdoc );
      if ( newdoc.bookmark )
      {
        free( newdoc.bookmark );
        newdoc.bookmark = 0;
      }
      newdoc.isHEAD = 0;
      newdoc.safe = 0;
      newdoc.internal_link = 0;
      LYforce_no_cache = 1;
      if ( LYValidate || check_realm )
        LYPermitURL = 1;
    }
    else
    {
      cmd[0] = 37;
    }
  }
  return 1;
}
void handle_NEXT_DOC( void )
{
  if ( LYhist_next( &curdoc, &newdoc ) )
  {
    free_address( &curdoc );
  }
  else
  {
    HTUserMsg( gettext( "No next document present" ) );
  }
  return;
}
void handle_LYK_NEXT_LINK( int c, int *old_c, int real_c )
{
  if ( curdoc.link < nlinks + -1 )
  {
    LYhighlight( 0, curdoc.link, prev_target );
    if ( links[ curdoc.link ].type == 1 && links[ curdoc.link ].l_form->type == 9 && c == 9 )
    {
      int thisgroup = links[ curdoc.link ].l_form->number;
      char *thisname = &links[ curdoc.link ].l_form->name[0];
      do
      {
        curdoc.link++;
      }
      while ( curdoc.link < nlinks + -1 && links[ curdoc.link ].type == 1 && links[ curdoc.link ].l_form->type == 9 && links[ curdoc.link ].l_form->number == thisgroup && sametext( &links[ curdoc.link ].l_form->name[0], thisname ) );
    }
    else
    {
      curdoc.link++;
    }
  }
  else
  if ( more_text == 0 && Newline == 1 && curdoc.link == nlinks + -1 )
  {
    set_curdoc_link( 0 );
  }
  else
  if ( more_text )
  {
    Newline += display_lines;
  }
  else
  if ( old_c[0] != real_c )
  {
    old_c[0] = real_c;
    HTInfoMsg( gettext( "You are already at the end of this document." ) );
  }
  return;
}
void handle_LYK_NEXT_PAGE( int *old_c, int real_c )
{
  if ( more_text )
  {
    Newline += display_lines;
  }
  else
  if ( curdoc.link < nlinks + -1 )
  {
    set_curdoc_link( nlinks + -1 );
  }
  else
  if ( old_c[0] != real_c )
  {
    old_c[0] = real_c;
    HTInfoMsg( gettext( "You are already at the end of this document." ) );
  }
  return;
}
BOOLEAN handle_LYK_NOCACHE( int *old_c, int real_c )
{
  if ( nlinks > 0 )
  {
    if ( links[ curdoc.link ].type == 1 && links[ curdoc.link ].l_form->type != 5 && links[ curdoc.link ].l_form->type != 13 && links[ curdoc.link ].l_form->type != 12 )
    {
      if ( old_c[0] != real_c )
      {
        old_c[0] = real_c;
        HTUserMsg( gettext( "You are not on a form submission button or normal link." ) );
      }
      return 1;
    }
    else
    {
      LYforce_no_cache = 1;
      reloading = 1;
    }
  }
  return 1;
}
void handle_LYK_PREV_LINK( int *arrowup, int *old_c, int real_c )
{
  if ( curdoc.link > 0 )
  {
    set_curdoc_link( curdoc.link + -1 );
  }
  else
  if ( more_text == 0 && curdoc.link == 0 && Newline == 1 )
  {
    set_curdoc_link( nlinks + -1 );
  }
  else
  if ( curdoc.line > 1 )
  {
    int scrollamount = Newline <= display_lines ? Newline + -1 : display_lines;
    Newline -= scrollamount;
    if ( scrollamount < display_lines && nlinks > 0 && curdoc.link == 0 && scrollamount + links->ly + -1 <= display_lines )
    {
      newdoc.link = HText_LinksInLines( HTMainText, 1, scrollamount ) + -1;
    }
    else
    {
      arrowup[0] = 1;
    }
  }
  else
  if ( old_c[0] != real_c )
  {
    old_c[0] = real_c;
    HTInfoMsg( gettext( "You are already at the beginning of this document." ) );
  }
  return;
}
int handle_PREV_DOC( int *cmd, int *old_c, int real_c )
{
  if ( nhist > 0 )
  {
    DocAddress WWWDoc;
    HTParentAnchor *tmpanchor;
    HText *text;
    BOOLEAN conf = 0;
    BOOLEAN first = 1;
    HTLastConfirmCancelled( );
    while ( nhist > 0 )
    {
      conf = 0;
      if ( history[ nhist + -1 ].hdoc.post_data )
      {
        WWWDoc.address = history[ nhist + -1 ].hdoc.address;
        WWWDoc.post_data = history[ nhist + -1 ].hdoc.post_data;
        WWWDoc.post_content_type = history[ nhist + -1 ].hdoc.post_content_type;
        WWWDoc.bookmark = history[ nhist + -1 ].hdoc.bookmark;
        WWWDoc.isHEAD = history[ nhist + -1 ].hdoc.isHEAD;
        WWWDoc.safe = history[ nhist + -1 ].hdoc.safe;
        tmpanchor = HTAnchor_findAddress( &WWWDoc );
        if ( ( HTAnchor_safe( tmpanchor ) & 255 ) == 0 )
        {
          text = HTAnchor_document( tmpanchor );
          if ( text == 0 )
          {
            if ( strncasecomp( WWWDoc.address, "LYNXIMGMAP:", 11 ) )
            {
              conf = confirm_post_resub( WWWDoc.address, history[ nhist + -1 ].hdoc.title, 0, 0 );
              if ( conf == 0 )
              {
                if ( HTLastConfirmCancelled( ) & 255 )
                {
                  if ( first || curdoc.internal_link == 0 )
                  {
                    cmd[0] = 69;
                    return 2;
                  }
                  free_address( &curdoc );
                  cmd[0] = 69;
                  return 2;
                }
                else
                {
                  if ( nhist == 1 )
                  {
                    HTInfoMsg( gettext( "Cancelled!!!" ) );
                    old_c[0] = 0;
                    cmd[0] = 69;
                    return 2;
                  }
                  HTUserMsg2( gettext( "Skipping %s" ), WWWDoc.address );
                  do
                  {
                    LYpop( &curdoc );
                  }
                  while ( nhist > 1 && are_different( &history[ nhist + -1 ].hdoc, &curdoc ) == 0 );
                  first = 0;
                }
              }
            }
          }
          if ( LYresubmit_posts && conf == 0 && ( are_different( &history[ nhist + -1 ].hdoc, &curdoc ) || are_different( &history[ nhist + -1 ].hdoc, &newdoc ) ) && ( confirm_post_resub( WWWDoc.address, history[ nhist + -1 ].hdoc.title, 2, 2 ) & 255 ) == 0 )
            continue;
          else
          {
            if ( conf )
            {
              LYforce_no_cache = 1;
              break;
            }
          }
        }
        else
          break;
      }
      else
        break;
    }
    if ( first == 0 )
      curdoc.internal_link = 0;
    LYhist_prev_register( &curdoc );
    free_address( &newdoc );
    if ( lynx_edit_mode && LYAutoUncacheDirLists > 1 )
      HTuncache_current_document( );
  }
  else
  if ( child_lynx == 1 )
  {
    return 1;
  }
  if ( old_c[0] != real_c )
  {
    old_c[0] = real_c;
    HTUserMsg( gettext( "You are already at the first document" ) );
  }
  return 0;
}
void handle_LYK_PREV_PAGE( int *old_c, int real_c )
{
  if ( Newline > 1 )
  {
    Newline -= display_lines;
  }
  else
  if ( curdoc.link > 0 )
  {
    set_curdoc_link( 0 );
  }
  else
  if ( old_c[0] != real_c )
  {
    old_c[0] = real_c;
    HTInfoMsg( gettext( "You are already at the beginning of this document." ) );
  }
  return;
}
void handle_LYK_PRINT( BOOLEAN *ForcePush, int *old_c, int real_c )
{
  if ( LYValidate )
  {
    if ( old_c[0] == real_c )
    {
      return;
    }
    old_c[0] = real_c;
    HTUserMsg( gettext( "The 'p'rint command is currently disabled." ) );
  }
  else
  {
    if ( !( LYIsUIPage3( curdoc.address, 2, 1 ) & 255 ) && print_options( &newdoc.address, curdoc.address, HText_getNumOfLines( ) ) >= 0 )
    {
      LYRegisterUIPage( newdoc.address, 2 );
      HTSACopy( &newdoc.title, gettext( "Printing Options" ) );
      LYFreePostData( &newdoc );
      if ( newdoc.bookmark )
      {
        free( newdoc.bookmark );
        newdoc.bookmark = 0;
      }
      newdoc.isHEAD = 0;
      newdoc.safe = 0;
      ForcePush[0] = 1;
      if ( check_realm )
      {
        LYPermitURL = 1;
      }
    }
  }
  return;
}
BOOLEAN handle_LYK_QUIT( void )
{
  int c;
  if ( LYQuitDefaultYes == 1 )
  {
    c = HTConfirmDefault( gettext( "Are you sure you want to quit?" ), 1 );
  }
  else
  {
    c = HTConfirmDefault( gettext( "Are you sure you want to quit?" ), 0 );
  }
  if ( LYQuitDefaultYes == 1 )
  {
    if ( c )
    {
      return 0;
    }
    HTInfoMsg( gettext( "Excellent!!!" ) );
  }
  else
  if ( c == 1 )
  {
    return 0;
  }
  HTInfoMsg( gettext( "Excellent!!!" ) );
  return 0;
}
BOOLEAN handle_LYK_RAW_TOGGLE( int *cmd )
{
  if ( HTLoadedDocumentCharset( ) )
  {
    HTUserMsg( gettext( "charset for this document specified explicitly, sorry..." ) );
  }
  LYUseDefaultRawMode = LYUseDefaultRawMode == 0;
  HTUserMsg( LYRawMode ? gettext( "Raw 8-bit or CJK mode toggled OFF!  Reloading..." ) : gettext( "Raw 8-bit or CJK mode toggled ON!  Reloading..." ) );
  HTMLSetCharacterHandling( current_char_set );
  return gettext( "charset for this document specified explicitly, sorry..." );
}
void handle_LYK_RELOAD( int real_cmd )
{
  if ( curdoc.post_data && curdoc.safe != 1 && ( HTConfirm( gettext( "Document from Form with POST content.  Resubmit?" ) ) & 255 ) == 0 )
  {
    HTInfoMsg( gettext( "Cancelled!!!" ) );
  }
  else
  {
    if ( HTisDocumentSource( ) )
    {
      forced_UCLYhdnl = HTMainText_Get_UCLYhndl( );
      if ( forced_UCLYhdnl >= 0 )
        force_old_UCLYhndl_on_reload = 1;
      srcmode_for_next_retrieval( 1 );
    }
    HEAD_request = HTLoadedDocumentIsHEAD( );
    HText_setNoCache( HTMainText );
    newdoc.line = curdoc.line;
    newdoc.link = curdoc.link;
    free_address( &curdoc );
    if ( real_cmd == 12 )
    {
      reloading = 1;
    }
  }
  return;
}
void handle_LYK_REMOVE( BOOLEAN *refresh_screen )
{
  if ( lynx_edit_mode && nlinks > 0 && no_dired_support == 0 )
  {
    int linkno = curdoc.link;
    local_remove( &curdoc );
    if ( LYAutoUncacheDirLists > 0 )
    {
      do_cleanup_after_delete( );
    }
    else
    if ( curdoc.link != linkno )
    {
      refresh_screen[0] = 1;
    }
  }
  return;
}
void handle_LYK_RIGHT_LINK( void )
{
  if ( curdoc.link < nlinks + -1 && links[ curdoc.link ].ly == links[ curdoc.link + 1 ].ly )
  {
    set_curdoc_link( curdoc.link + 1 );
  }
  return;
}
void handle_LYK_SHELL( BOOLEAN *refresh_screen, int *old_c, int real_c )
{
  static char *shell;
  if ( no_shell == 0 )
  {
    stop_curses( );
    printf( "%s\r\n", gettext( "Spawning your default shell.  Use 'exit' to return to Lynx.\n" ) );
    if ( shell == 0 )
    {
      HTSACopy( &shell, LYSysShell( ) );
    }
    LYSystem( shell );
    start_curses( );
    refresh_screen[0] = 1;
  }
  else
  {
    if ( old_c[0] == real_c )
    {
      return;
    }
    old_c[0] = real_c;
    HTUserMsg( gettext( "Spawning is currently disabled." ) );
  }
  return;
}
void handle_LYK_SOFT_DQUOTES( void )
{
  if ( ( HTcan_reparse_document( ) & 255 ) == 0 )
  {
    if ( curdoc.post_data && curdoc.safe != 1 && ( confirm_post_resub( curdoc.address, 0, 1, 1 ) & 255 ) == 0 )
    {
      HTInfoMsg( gettext( "Document will not be reloaded!" ) );
    }
    else
    {
      HText_setNoCache( HTMainText );
      move_address( &newdoc, &curdoc );
      newdoc.line = curdoc.line;
      newdoc.link = curdoc.link;
    }
  }
  soft_dquotes = soft_dquotes == 0;
  HTUserMsg( soft_dquotes ? gettext( "Soft double-quote parsing ON!" ) : gettext( "Soft double-quote parsing OFF!" ) );
  reparse_document( );
  return;
}
int wrap_reparse_document( void )
{
  int result;
  int anchor_number = -1;
  int old_line_num = HText_getAbsLineNumber( HTMainText, anchor_number );
  int old_from_top = ( old_line_num - Newline ) + 1;
  int old_offset = -1;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "original anchor %d, topline %d, link %d, offset %d\n", anchor_number, old_line_num, curdoc.link, old_offset );
  }
  result = reparse_document( );
  if ( result && old_offset >= 0 )
  {
    int new_anchor = HText_closestAnchor( HTMainText, old_offset );
    int new_lineno = HText_getAbsLineNumber( HTMainText, new_anchor );
    int top_lineno;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "old anchor %d -&gt; new anchor %d\n", anchor_number, new_anchor );
    }
    if ( new_lineno - old_from_top < 0 )
      old_from_top = new_lineno;
    top_lineno = HText_getPreferredTopLine( HTMainText, new_lineno - old_from_top ) + 1;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "preferred top %d\n", top_lineno );
    }
    if ( top_lineno == Newline )
    {
      newdoc.link = curdoc.link;
    }
    Newline = top_lineno;
    curdoc.link = newdoc.link = HText_anchorRelativeTo( HTMainText, top_lineno + -1, new_anchor );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "adjusted anchor %d, topline %d, link %d, offset %d\n", new_anchor, top_lineno, curdoc.link, HText_locateAnchor( HTMainText, new_anchor ) );
    }
  }
  return result;
}
void handle_LYK_SOURCE( char **ownerS_address_p )
{
  BOOLEAN canreparse_post = 0;
  if ( curdoc.post_data && curdoc.safe != 1 )
  {
    canreparse_post = HTcan_reparse_document( );
    if ( canreparse_post == 0 && ( ( curdoc.isHEAD ? confirm_post_resub( curdoc.address, curdoc.title, 1, 1 ) : HTConfirm( gettext( "Document from Form with POST content.  Resubmit?" ) ) ) & 255 ) == 0 )
    {
      HTInfoMsg( gettext( "Cancelled!!!" ) );
      return;
    }
  }
  if ( HTisDocumentSource( ) )
    srcmode_for_next_retrieval( -1 );
  else
  {
    if ( HText_getOwner( ) )
    {
      HTSACopy( ownerS_address_p, HText_getOwner( ) );
    }
    LYUCPushAssumed( HTMainAnchor );
    srcmode_for_next_retrieval( 1 );
  }
  if ( wrap_reparse_document( ) )
  {
    HTOutputFormat = HTAtom_for( "www/present" );
    if ( psrc_view )
      HTMark_asSource( );
    psrc_view = 0;
    if ( ownerS_address_p[0] )
    {
      free( ownerS_address_p[0] );
      ownerS_address_p[0] = 0;
    }
    LYUCPopAssumed( );
    HTMLSetCharacterHandling( current_char_set );
    return;
  }
  else
  {
    if ( canreparse_post )
    {
      srcmode_for_next_retrieval( 0 );
      LYUCPopAssumed( );
      return;
    }
    else
    {
      if ( curdoc.title )
        HTSACopy( &newdoc.title, curdoc.title );
      free_address( &curdoc );
      LYforce_no_cache = 1;
      return;
    }
  }
}
void handle_LYK_SWITCH_DTD( void )
{
  BOOLEAN canreparse = 0;
  canreparse = HTcan_reparse_document( );
  if ( canreparse == 0 )
  {
    if ( curdoc.post_data && curdoc.safe != 1 && ( confirm_post_resub( curdoc.address, 0, 1, 1 ) & 255 ) == 0 )
    {
      HTInfoMsg( gettext( "Document will not be reloaded!" ) );
    }
    else
    {
      if ( HTisDocumentSource( ) && LYPreparsedSource )
        srcmode_for_next_retrieval( 1 );
      HText_setNoCache( HTMainText );
      move_address( &newdoc, &curdoc );
      newdoc.line = curdoc.line;
      newdoc.link = curdoc.link;
    }
  }
  Old_DTD = Old_DTD == 0;
  HTSwitchDTD( Old_DTD == 0 );
  HTUserMsg( Old_DTD ? gettext( "Now using TagSoup parsing of HTML." ) : gettext( "Now using SortaSGML parsing of HTML!" ) );
  if ( canreparse )
  {
    if ( HTisDocumentSource( ) && LYPreparsedSource )
      srcmode_for_next_retrieval( 1 );
    if ( ( reparse_document( ) & 255 ) == 0 )
    {
      srcmode_for_next_retrieval( 0 );
    }
  }
  return;
}
void handle_LYK_TAG_LINK( void )
{
  if ( lynx_edit_mode && nlinks > 0 && !no_dired_support && strcmp( LYGetHiliteStr( curdoc.link, 0 ), ".." ) )
  {
    if ( dir_list_style == 2 )
    {
      if ( strcmp( LYGetHiliteStr( curdoc.link, 0 ), "../" ) == 0 )
      {
        return;
      }
    }
    else
    {
      if ( strncmp( LYGetHiliteStr( curdoc.link, 0 ), "Up to ", 6 ) == 0 )
      {
        return;
      }
    }
  {
    HTList *t1 = tagged;
    char *tagname = 0;
    BOOLEAN found = 0;
    do
    {
      if ( t1 )
      {
        t1 = &t1->next;
        tagname = 0;
        if ( tagname )
        {
        }
        if ( found == 0 )
        {
          if ( tagged == 0 )
          {
            tagged = HTList_new( );
          }
          tagname = 0;
          HTSACopy( &tagname, links[ curdoc.link ].lname );
          HTList_addObject( tagged, (void*)tagname );
          tagflag( 1, curdoc.link );
        }
        if ( curdoc.link < nlinks + -1 )
        {
          set_curdoc_link( curdoc.link + 1 );
          break;
        }
        else
        {
          if ( more_text == 0 && Newline == 1 && curdoc.link == nlinks + -1 )
          {
            set_curdoc_link( 0 );
            break;
          }
          else
          {
            if ( more_text == 0 )
              break;
            Newline += display_lines;
            break;
          }
        }
      }
      tagname = 0;
    }
    while ( strcmp( links[ curdoc.link ].lname, tagname ) );
    found = 1;
    HTList_removeObject( tagged, (void*)tagname );
    if ( tagname )
    {
      free( tagname );
      tagname = 0;
    }
    tagflag( 0, curdoc.link );
  }
  }
  return;
}
void handle_LYK_TOGGLE_HELP( void )
{
  if ( user_mode == 0 )
  {
    toggle_novice_line( );
    noviceline( more_text );
  }
  return;
}
void handle_LYK_TOOLBAR( BOOLEAN *try_internal, BOOLEAN *force_load, int *old_c, int real_c )
{
  char *cp;
  char *toolbar = 0;
  if ( ( HText_hasToolbar( HTMainText ) & 255 ) == 0 )
  {
    if ( old_c[0] != real_c )
    {
      old_c[0] = real_c;
      HTUserMsg( gettext( "Document has no Toolbar links or Banner." ) );
    }
  }
  else
  if ( old_c[0] != real_c )
  {
    old_c[0] = real_c;
    cp = trimPoundSelector( curdoc.address );
    HTSprintf0( &toolbar, "%s#%s", curdoc.address, LYToolbarName );
    if ( cp )
      cp[0] = '#';
    set_address( &newdoc, toolbar );
    if ( toolbar )
    {
      free( toolbar );
      toolbar = 0;
    }
    try_internal[0] = 1;
    force_load[0] = 1;
  }
  return;
}
void handle_LYK_TRACE_LOG( BOOLEAN *trace_flag_ptr )
{
  if ( LYTraceLogFP == 0 )
  {
    HTUserMsg( gettext( "No trace log has been started for this session." ) );
  }
  else
  {
    if ( !( LYIsUIPage3( curdoc.address, 13, 1 ) & 255 ) && ( LYReopenTracelog( trace_flag_ptr ) & 255 ) )
    {
      LYLocalFileToURL( &newdoc.address, LYTraceLogPath );
      LYRegisterUIPage( newdoc.address, 13 );
      HTSACopy( &newdoc.title, gettext( "Lynx Trace Log" ) );
      LYFreePostData( &newdoc );
      if ( newdoc.bookmark )
      {
        free( newdoc.bookmark );
        newdoc.bookmark = 0;
      }
      newdoc.isHEAD = 0;
      newdoc.safe = 0;
      newdoc.internal_link = 0;
      if ( LYValidate || check_realm )
        LYPermitURL = 1;
      LYforce_no_cache = 1;
    }
  }
  return;
}
void handle_LYK_UPLOAD( void )
{
  if ( !( LYIsUIPage3( curdoc.address, 10, 1 ) & 255 ) && lynx_edit_mode && no_dired_support == 0 )
  {
    LYUpload_options( &newdoc.address, curdoc.address );
    HTSACopy( &newdoc.title, gettext( "Upload Options" ) );
    LYFreePostData( &newdoc );
    if ( newdoc.bookmark )
    {
      free( newdoc.bookmark );
      newdoc.bookmark = 0;
    }
    newdoc.isHEAD = 0;
    newdoc.safe = 0;
    newdoc.internal_link = 0;
    if ( LYAutoUncacheDirLists > 0 )
    {
      HTuncache_current_document( );
    }
  }
  return;
}
void handle_LYK_UP_xxx( int *arrowup, int *old_c, int real_c, int scroll_by )
{
  if ( Newline > 1 )
  {
    if ( Newline - scroll_by <= 0 )
      scroll_by = Newline + -1;
    Newline -= scroll_by;
    if ( nlinks <= 0 || curdoc.link < 0 )
    {
      return;
    }
    if ( links[ curdoc.link ].ly + scroll_by <= display_lines )
    {
      newdoc.link = curdoc.link + HText_LinksInLines( HTMainText, Newline, scroll_by );
    }
    else
    {
      arrowup[0] = 1;
    }
  }
  else
  if ( old_c[0] != real_c )
  {
    old_c[0] = real_c;
    HTInfoMsg( gettext( "You are already at the beginning of this document." ) );
  }
  return;
}
void handle_LYK_UP_HALF( int *arrowup, int *old_c, int real_c )
{
  handle_LYK_UP_xxx( arrowup, old_c, real_c, ebp_12 );
  return;
}
void handle_LYK_UP_LINK( int *follow_col, int *arrowup, int *old_c, int real_c )
{
  if ( curdoc.link > 0 && ( links[ curdoc.link ].ly != links->ly || HText_LinksInLines( HTMainText, 1, Newline + -1 ) == 0 ) )
  {
    int newlink;
    if ( follow_col[0] == -1 )
    {
      char *text = LYGetHiliteStr( curdoc.link, 0 );
      follow_col[0] = links[ curdoc.link ].lx;
      if ( text )
      {
        follow_col[0] += strlen( text ) >> 1;
      }
    }
    newlink = find_link_near_col( follow_col[0], -1 );
    if ( newlink >= 0 )
    {
      set_curdoc_link( newlink );
    }
    else
    {
      if ( old_c[0] == real_c )
      {
        return;
      }
      old_c[0] = real_c;
      HTUserMsg( gettext( "There are no links above this line of the document." ) );
    }
  }
  else
  if ( curdoc.line > 1 && Newline > 1 )
  {
    int scrollamount = Newline <= display_lines ? Newline + -1 : display_lines;
    Newline -= scrollamount;
    if ( scrollamount < display_lines && nlinks > 0 && curdoc.link >= 0 && scrollamount + links->ly + -1 <= display_lines )
    {
      newdoc.link = HText_LinksInLines( HTMainText, 1, scrollamount ) + -1;
    }
    else
    {
      arrowup[0] = 1;
    }
  }
  else
  if ( old_c[0] != real_c )
  {
    old_c[0] = real_c;
    HTInfoMsg( gettext( "You are already at the beginning of this document." ) );
  }
  return;
}
void handle_LYK_UP_TWO( int *arrowup, int *old_c, int real_c )
{
  handle_LYK_UP_xxx( arrowup, old_c, real_c, ebp_12 );
  return;
}
void handle_LYK_VIEW_BOOKMARK( BOOLEAN *refresh_screen, int *old_c, int real_c )
{
  char *cp;
  if ( LYValidate )
  {
    if ( old_c[0] != real_c )
    {
      old_c[0] = real_c;
      HTUserMsg( gettext( "Bookmark features are currently disabled." ) );
    }
  }
  else
  {
    cp = get_bookmark_filename( &newdoc.address );
    if ( cp )
    {
      if ( cp[0] == 0 || strcmp( cp, " " ) == 0 || strcmp( curdoc.address, newdoc.address ) == 0 )
      {
        if ( LYMultiBookmarks )
        {
          refresh_screen[0] = 1;
        }
      }
      else
      {
        LYforce_no_cache = 1;
        HTSACopy( &newdoc.title, gettext( "Bookmark file" ) );
        HTSACopy( &newdoc.bookmark, BookmarkPage );
        LYFreePostData( &newdoc );
        newdoc.isHEAD = 0;
        newdoc.safe = 0;
        newdoc.internal_link = 0;
      }
    }
    else
    if ( old_c[0] != real_c )
    {
      old_c[0] = real_c;
      LYMBM_statusline( gettext( "Unable to open bookmark file, use 'a' to save a link first" ) );
      LYSleepAlert( );
      if ( LYMultiBookmarks )
      {
        refresh_screen[0] = 1;
      }
    }
  }
  return;
}
BOOLEAN handle_LYK_VLINKS( int *cmd, BOOLEAN *newdoc_link_is_absolute )
{
  int c;
  if ( LYIsUIPage3( curdoc.address, 5, 1 ) & 255 )
  {
    cmd[0] = 37;
  }
  c = LYShowVisitedLinks( &newdoc.address );
  if ( c < 0 )
  {
    HTUserMsg( gettext( "No previously visited links available!" ) );
  }
  HTSACopy( &newdoc.title, gettext( "Visited Links Page" ) );
  LYFreePostData( &newdoc );
  if ( newdoc.bookmark )
  {
    free( newdoc.bookmark );
    newdoc.bookmark = 0;
  }
  newdoc.isHEAD = 0;
  newdoc.safe = 0;
  newdoc.internal_link = 0;
  if ( c > 0 )
  {
    newdoc_link_is_absolute[0] = 1;
    newdoc.link = c + -1;
  }
  if ( LYValidate || check_realm )
  {
    LYPermitURL = 1;
    HTSACopy( &lynxlinksfile, newdoc.address );
  }
  return 0;
}
void handle_LYK_WHEREIS( int cmd, BOOLEAN *refresh_screen )
{
  BOOLEAN have_target_onscreen;
  BOOLEAN found;
  int oldcur;
  char *remember_old_target;
  *(int*)&have_target_onscreen = 0;
  oldcur = curdoc.link;
  remember_old_target = 0;
  if ( have_target_onscreen )
    HTSACopy( &remember_old_target, prev_target );
  else
    HTSACopy( &remember_old_target, "" );
  if ( cmd == 51 )
    prev_target = 0;
  found = textsearch( &curdoc, prev_target, 1023, 0 );
  if ( www_search_result >= 0 && curdoc.line != www_search_result )
    refresh_screen[0] = 1;
  else
  if ( found == 0 )
    refresh_screen[0] = have_target_onscreen;
  else
  if ( have_target_onscreen == 0 && found )
    refresh_screen[0] = 1;
  else
  if ( curdoc.line == www_search_result && curdoc.link == oldcur && curdoc.link >= 0 && nlinks > 0 && display_lines / 3 <= links[ curdoc.link ].ly )
    refresh_screen[0] = 1;
  else
  if ( ( case_sensitive && strcmp( prev_target, remember_old_target ) ) || ( !case_sensitive && strcasecomp8( prev_target, remember_old_target ) ) )
    refresh_screen[0] = 1;
  if ( remember_old_target )
  {
    free( remember_old_target );
    remember_old_target = 0;
  }
  return;
}
void handle_LYK_digit( int c, BOOLEAN *force_load, char *user_input_buffer, int *old_c, int real_c, BOOLEAN *try_internal )
{
  int lindx = 0;
  int number;
  char *temp = 0;
  number = curdoc.line;
  switch ( follow_link_number( c, lindx, &newdoc, &number ) )
  {
  case 1:
    set_address( &newdoc, links[ lindx ].lname );
    HTSACopy( &newdoc.title, LYGetHiliteStr( lindx, 0 ) );
    if ( are_different( &curdoc, &newdoc ) )
    {
      LYFreePostData( &newdoc );
      if ( newdoc.bookmark )
      {
        free( newdoc.bookmark );
        newdoc.bookmark = 0;
      }
      newdoc.isHEAD = 0;
      newdoc.safe = 0;
      if ( strncasecomp( newdoc.address, "LYNXMESSAGES:", 13 ) == 0 )
        LYforce_no_cache = 1;
    }
    newdoc.internal_link = 0;
    force_load[0] = 1;
    break;
  case 2:
    Newline = newdoc.line;
    newdoc.line = 1;
    if ( curdoc.line != Newline || nlinks <= 0 || curdoc.link < 0 )
    {
      return;
    }
    if ( newdoc.link == curdoc.link )
    {
      HTSACopy( &temp, user_input_buffer );
      sprintf( user_input_buffer, gettext( "Link number %d already is current." ), number );
      HTUserMsg( user_input_buffer );
      LYstrncpy( user_input_buffer, temp, 1023 );
      if ( temp == 0 )
      {
        return;
      }
      free( temp );
      temp = 0;
    }
    else
    {
      set_curdoc_link( newdoc.link );
      newdoc.link = 0;
    }
    break;
  case 3:
    Newline = newdoc.line;
    newdoc.line = 1;
    if ( curdoc.line == Newline )
    {
      if ( Newline <= 1 )
      {
        HTInfoMsg( gettext( "You are already at the beginning of this document." ) );
      }
      else
      {
        if ( more_text == 0 )
        {
          HTInfoMsg( gettext( "You are already at the end of this document." ) );
        }
        else
        {
          HTSACopy( &temp, user_input_buffer );
          sprintf( user_input_buffer, gettext( "You are already at page %d of this document." ), number );
          HTUserMsg( user_input_buffer );
          LYstrncpy( user_input_buffer, temp, 1023 );
          if ( temp == 0 )
          {
            return;
          }
          free( temp );
          temp = 0;
        }
      }
    }
    break;
  case 5:
    old_c[0] = real_c;
    HTUserMsg( gettext( "You have entered an invalid link number." ) );
    break;
  }
  return;
}
void handle_LYK_CHDIR( void )
{
  int eax;
  static char buf[256];
  char *p = 0;
  if ( no_chdir )
  {
    HTUserMsg( gettext( "Changing working-directory is currently disabled." ) );
  }
  else
  {
    mustshow = 1;
    statusline( gettext( "cd to:" ) );
    if ( LYgetstr( buf, 0, 255, 0 ) < 0 || buf[0] == 0 )
    {
      HTInfoMsg( gettext( "Cancelled!!!" ) );
    }
    else
    {
      if ( buf[0] == '~' && ( buf[1] == '/' || buf[1] == 0 ) )
      {
        HTSprintf0( &p, "%s%s", Home_Dir( ), buf[1] );
      }
      else
        HTSACopy( &p, buf );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "changing directory to '%s'\n", p );
      }
      if ( chdir( p ) )
      {
        switch ( *(int*)(__errno_location( )) )
        {
        case 13:
          HTInfoMsg( gettext( "Could not access directory." ) );
          break;
        case 2:
          HTInfoMsg( gettext( "No such directory" ) );
          break;
        case 20:
          HTInfoMsg( gettext( "A component of path is not a directory" ) );
          break;
        default:
          HTInfoMsg( gettext( "failed to change directory" ) );
          break;
        }
      }
      else
      if ( !no_dired_support && ( lynx_edit_mode || ( LYIsUIPage3( curdoc.address, 8, 1 ) & 255 ) ) )
      {
        char buf2[256];
        char *addr = 0;
        Current_Dir( buf2 );
        LYLocalFileToURL( &addr, buf2 );
        newdoc.address = addr;
        newdoc.isHEAD = 0;
        HTSACopy( &newdoc.title, gettext( "A URL specified by the user" ) );
        LYFreePostData( &newdoc );
        if ( newdoc.bookmark )
        {
          free( newdoc.bookmark );
          newdoc.bookmark = 0;
        }
        newdoc.safe = 0;
        newdoc.internal_link = 0;
        if ( lynx_edit_mode && LYAutoUncacheDirLists > 1 )
          HTuncache_current_document( );
      }
      else
      {
        HTInfoMsg( gettext( "Done!" ) );
      }
      if ( p == 0 )
      {
        return;
      }
      free( p );
      p = 0;
    }
  }
}
int repeat_to_delta( int n )
{
  int eax;
  int threshold = LYcols / 3;
  for ( ; threshold > 0;  )
  {
    if ( threshold <= n )
    {
      n = threshold;
      break;
    }
    else
    {
      threshold = ( threshold * 2 ) / 3;
    }
  }
  return n;
}
void handle_LYK_SHIFT_LEFT( BOOLEAN *flag, int count )
{
  if ( LYwideLines == 0 )
  {
    HTAlert( gettext( "Shifting is disabled while line-wrap is in effect" ) );
  }
  else
  {
    if ( LYshiftWin > 0 )
    {
      LYshiftWin -= repeat_to_delta( count );
      flag[0] = 1;
    }
    if ( LYshiftWin < 0 )
    {
      LYshiftWin = 0;
    }
  }
  return;
}
void handle_LYK_SHIFT_RIGHT( BOOLEAN *flag, int count )
{
  if ( LYwideLines == 0 )
  {
    HTAlert( gettext( "Shifting is disabled while line-wrap is in effect" ) );
  }
  else
  {
    LYshiftWin += repeat_to_delta( count );
    flag[0] = 1;
  }
  return;
}
BOOLEAN handle_LYK_LINEWRAP_TOGGLE( int *cmd, BOOLEAN *flag )
{
  static char *choices[9] = { "Try to fit screen width", "No line wrap in columns", "Wrap columns at screen width", "Wrap columns at 3/4 screen width", "Wrap columns at 2/3 screen width", "Wrap columns at 1/2 screen width", "Wrap columns at 1/3 screen width", "Wrap columns at 1/4 screen width", 0 };
  static int wrap[8] = { 0, 0, 12, 9, 8, 6, 4, 3 };
  int c;
  if ( stdscr == LYwin )
  {
  }
  c = popup_choice( LYwideLines == 0, ( LYlines / 2 ) + -2, ( ( LYcols - ( LYShowScrollbar != 0 ) ) / 2 ) + -6, choices, 8, 0, 1 );
  if ( term_options )
  {
  }
  LYwideLines = c;
  LYtableCols = wrap[ c ];
  if ( LYwideLines == 0 )
    LYshiftWin = 0;
  flag[0] = 1;
  HTUserMsg( LYwideLines ? gettext( "Linewrap OFF!" ) : gettext( "Linewrap ON!" ) );
  return popup_choice( LYwideLines == 0, ( LYlines / 2 ) + -2, ( ( LYcols - ( LYShowScrollbar != 0 ) ) / 2 ) + -6, choices, 8, 0, 1 );
}
int mainloop( void )
{
  int eax;
  int ecx;
#error unstructured control flow
}
int are_different( DocInfo *doc1, DocInfo *doc2 )
{
  char *cp1, *cp2;
  if ( doc1->address == 0 || doc2->address == 0 )
  {
    return 1;
  }
  if ( doc2->isHEAD != doc1->isHEAD )
  {
    return 1;
  }
  cp1 = trimPoundSelector( &doc1->address );
  cp2 = trimPoundSelector( &doc2->address );
  if ( strcmp( &doc1->address, &doc2->address ) )
  {
    if ( cp1 )
      cp1[0] = '#';
    if ( cp2 )
      cp2[0] = '#';
    return 1;
  }
  else
  {
    if ( cp1 )
      cp1[0] = '#';
    if ( cp2 )
      cp2[0] = '#';
    if ( doc1->post_data )
    {
      if ( doc2->post_data == 0 )
      {
        return 1;
      }
      if ( ( HTSABEql( &doc1->post_data, &doc2->post_data ) & 255 ) == 0 )
      {
        return 1;
      }
    }
    else
    if ( doc2->post_data )
    {
      return 1;
    }
    return 0;
  }
}
void HTAddGotoURL( char *url )
{
  char *copy = 0;
  char *old;
  HTList *cur;
  if ( url && url[0] )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTAddGotoURL %s\n", url );
    }
    HTSACopy( &copy, url );
    if ( Goto_URLs == 0 )
    {
      Goto_URLs = HTList_new( );
      HTList_addObject( Goto_URLs, (void*)copy );
    }
    else
    {
      cur = Goto_URLs;
      do
      {
        if ( cur )
        {
          cur = &cur->next;
          old = 0;
          if ( old )
          {
          }
          HTList_addObject( Goto_URLs, (void*)copy );
          break;
        }
        old = 0;
      }
      while ( strcmp( old, copy ) );
      HTList_removeObject( Goto_URLs, (void*)old );
      if ( old )
      {
        free( old );
        old = 0;
      }
    }
  }
  return;
}
void show_main_statusline( LinkInfo curlink, int for_what )
{
  int eax;
  if ( user_mode == 0 && for_what != 2 )
    noviceline( more_text );
  if ( HTisDocumentSource( ) )
  {
    mustshow = 1;
    statusline( gettext( "Currently viewing document source.  Press '\\' to return to rendered version." ) );
  }
  else
  if ( lynx_mode == 2 && nlinks > 0 && ( user_mode != 2 || ( curlink.type & 2 ) == 0 ) )
  {
    if ( curlink.type == 1 )
      show_formlink_statusline( curlink.l_form, for_what );
    else
    {
      statusline( gettext( "(NORMAL LINK)   Use right-arrow or &lt;return&gt; to activate." ) );
    }
    if ( is_www_index )
    {
      char *indx = gettext( "-index-" );
      LYmove( LYlines + -1, LYcols - ( LYShowScrollbar != 0 ) - strlen( indx ) );
      lynx_start_reverse( );
      LYwaddnstr( LYwin, indx, strlen( indx ) );
      lynx_stop_reverse( );
    }
  }
  else
  {
    if ( user_mode == 2 && nlinks > 0 )
    {
      char *cp = 0;
      if ( curlink.type == 6 && strncasecomp( curlink.lname, "LYNXIMGMAP:", 11 ) )
      {
        cp = strchr( curlink.lname, '#' );
      }
      if ( cp == 0 )
        cp = curlink.lname;
      status_link( cp, more_text, is_www_index );
    }
    else
    {
      if ( is_www_index && more_text )
      {
        char buf[128];
        sprintf( buf, gettext( "--More--  This is a searchable index.  Use %s to search." ), key_for_func( 50 ) );
        mustshow = 1;
        statusline( buf );
      }
      else
      {
        if ( is_www_index )
        {
          char buf[128];
          sprintf( buf, gettext( "This is a searchable index.  Use %s to search." ), key_for_func( 50 ) );
          mustshow = 1;
          statusline( buf );
        }
        else
        {
          if ( more_text )
          {
            if ( user_mode == 0 )
            {
              mustshow = 1;
              statusline( gettext( "-- press space for next page --" ) );
            }
            else
            {
              mustshow = 1;
              statusline( gettext( "-- press space for more, use arrow keys to move, '?' for help, 'q' to quit." ) );
            }
          }
          else
          {
            mustshow = 1;
            statusline( gettext( "Commands: Use arrow keys to move, '?' for help, 'q' to quit, '&lt;-' to go back." ) );
          }
        }
      }
    }
  }
  if ( LYShowCursor == 0 )
    LYmove( LYlines + -1, ( LYcols - ( LYShowScrollbar != 0 ) ) + -1 );
  return;
}
void repaint_main_statusline( int for_what )
{
  int ecx;
  if ( curdoc.link >= 0 && curdoc.link < nlinks )
  {
    // memcpy( ebp_104, links[ curdoc.link ].lname, 17 * 4 );
    show_main_statusline( );
  }
  return;
}
void form_noviceline( int disabled )
{
  LYmove( LYlines + -2, 0 );
  LYclrtoeol( );
  if ( disabled == 0 )
  {
    LYwaddnstr( LYwin, gettext( "            Enter text into the field by typing on the keyboard              " ), strlen( gettext( "            Enter text into the field by typing on the keyboard              " ) ) );
  }
  LYmove( LYlines + -1, 0 );
  LYclrtoeol( );
  if ( disabled == 0 )
  {
    if ( EditBinding( 21 ) == 12 )
    {
      LYwaddnstr( LYwin, gettext( "    Ctrl-U to delete all text in field, [Backspace] to delete a character    " ), strlen( gettext( "    Ctrl-U to delete all text in field, [Backspace] to delete a character    " ) ) );
    }
    else
    {
      if ( EditBinding( 21 ) == 25 )
      {
        LYwaddnstr( LYwin, gettext( "      Ctrl-U to delete text in field, [Backspace] to delete a character    " ), strlen( gettext( "      Ctrl-U to delete text in field, [Backspace] to delete a character    " ) ) );
      }
      else
      {
        char *temp = 0;
        char *erasekey = fmt_keys( LYKeyForEditAction( 12 ), -1 );
        if ( erasekey )
        {
          HTSprintf0( &temp, gettext( "    %s to delete all text in field, [Backspace] to delete a character    " ), erasekey );
        }
        else
        {
          erasekey = fmt_keys( LYKeyForEditAction( 25 ), -1 );
          if ( erasekey )
          {
            HTSprintf0( &temp, gettext( "      %s to delete text in field, [Backspace] to delete a character    " ), erasekey );
          }
        }
        if ( temp )
        {
          LYwaddnstr( LYwin, temp, strlen( temp ) );
          if ( temp )
          {
            free( temp );
            temp = 0;
          }
        }
        if ( erasekey == 0 )
        {
          return;
        }
        free( erasekey );
      }
    }
  }
  return;
}
void exit_immediately_with_error_message( int state, BOOLEAN first_file )
{
  char *buf = 0;
  char *buf2 = 0;
  if ( first_file )
    LYstatusline_messages_on_exit( &buf2 );
  if ( state == 0 )
  {
    HTSprintf0( &buf, "%s\n%s %s\n", "", gettext( "lynx: Can't access startfile" ), buf2 == 0 || strstr( buf2, gettext( "Can't Access" ) ) == 0 ? startfile : "", buf2 == 0 || strstr( buf2, gettext( "Can't Access" ) ) == 0 ? startfile : "", buf2 == 0 || strstr( buf2, gettext( "Can't Access" ) ) == 0 ? startfile : "", gettext( "lynx: Can't access startfile" ), "", "", "" );
  }
  if ( state == 3 )
  {
    HTSprintf0( &buf, "%s\n%s\n%s\n", "", gettext( "lynx: Start file could not be found or is not text/html or text/plain" ), gettext( "      Exiting..." ) );
  }
  if ( buf2 )
  {
    free( buf2 );
    buf2 = 0;
  }
  if ( dump_output_immediately == 0 )
    cleanup( );
  if ( dump_output_immediately == 0 )
    fputs( buf, stdout );
  else
    fputs( buf, stderr );
  if ( buf )
  {
    free( buf );
    buf = 0;
  }
  if ( dump_output_immediately == 0 )
  {
    exit_immediately( 1 );
  }
  return;
}
void status_link( char *curlink_name, BOOLEAN show_more, BOOLEAN show_indx )
{
  char format[1024];
  int prefix = 0;
  int length;
  format[0] = 0;
  if ( show_more && nomore == 0 )
  {
    sprintf( format, "%.*s ", 1022, gettext( "-more-" ) );
    prefix = strlen( format );
  }
  if ( show_indx )
  {
    sprintf( &format[ prefix ], "%.*s ", 1022 - prefix, gettext( "-index-" ) );
  }
  prefix = strlen( format );
  length = strlen( curlink_name );
  if ( ( LYcols - ( LYShowScrollbar != 0 ) ) + -1 < prefix || prefix > 1022 )
  {
    mustshow = 1;
    user_message( "%s", format );
  }
  else
  {
    sprintf( &format[ prefix ], "%%.%ds", ( ( LYcols - ( LYShowScrollbar != 0 ) ) + -1 ) - prefix );
    if ( ( LYcols - ( LYShowScrollbar != 0 ) ) + -1 < prefix + length && long_url_ok )
    {
      char *buf = 0;
      int cut_from_pos;
      int cut_to_pos;
      int n;
      HTSACopy( &buf, curlink_name );
      cut_to_pos = length + -2;
      for ( ; cut_to_pos > 0 && buf[ cut_to_pos ] != '/';  )
      {
        cut_to_pos += -1;
      }
      cut_from_pos = cut_to_pos + -4;
      for ( ; cut_from_pos > 0 && ( buf[ cut_from_pos ] != '/' || ( LYcols - ( LYShowScrollbar != 0 ) ) + -1 <= prefix + cut_from_pos + 4 + ( length - cut_to_pos ) );  )
      {
        cut_from_pos += -1;
      }
      if ( cut_from_pos > 0 )
      {
        n = 1;
        for ( ; n <= 3; n++ )
        {
          buf[ n + cut_from_pos ] = '.';
          // n++;
        }
        n = 0;
        for ( ; n + cut_to_pos <= length; n++ )
        {
          buf[ n + cut_from_pos + 4 ] = buf[ n + cut_to_pos ];
          // n++;
        }
      }
      mustshow = 1;
      user_message( format, buf );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "lastline = %s\n", buf );
      }
      if ( buf == 0 )
      {
        return;
      }
      free( buf );
      buf = 0;
    }
    else
    {
      mustshow = 1;
      user_message( format, curlink_name );
    }
  }
}
char *LYDownLoadAddress( void )
{
  return "";
}
#if 0
#endif
