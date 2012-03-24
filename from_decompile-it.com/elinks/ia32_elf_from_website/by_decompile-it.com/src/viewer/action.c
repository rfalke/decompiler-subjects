#include "action.c.h"
void goto_url_action( struct session *ses, unsigned char *(*get_url)( struct session *, unsigned char *, size_t  ) )
{
  unsigned char url[1024];
  if ( get_url[0] == 0 || get_url[0]( &ses[0], url, 1024 ) == 0 )
    url[0] = 0;
  dialog_goto_url( &ses[0], url );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
enum frame_event_status  do_action( struct session *ses, enum main_action  action_id, int verbose )
{
  int eax;
  enum frame_event_status  status;
  struct terminal *term = ses->tab->term;
  struct document_view *doc_view = current_frame( ses );
  struct link *link;
  if ( action_id != -1 )
  {
    if ( current_frame( ses ) == 0 || doc_view->vs == 0 )
    {
      if ( get_action( KEYMAP_MAIN, action_id ) == 0 || ( ( *(char*)(get_action( KEYMAP_MAIN, action_id ) + 18) & 2 ) & 255 ) == 0 )
        link = 0;
        if ( !get_action( KEYMAP_MAIN, action_id ) || !( ( *(char*)(get_action( KEYMAP_MAIN, action_id ) + 18) & 4 ) & 255 ) || ses->history.current )
        {
          if ( !get_action( KEYMAP_MAIN, action_id ) || !( ( *(char*)(get_action( KEYMAP_MAIN, action_id ) + 18) & 16 ) & 255 ) || link[0] )
          {
            if ( get_action( KEYMAP_MAIN, action_id ) )
            {
            }
            if ( ( get_action( KEYMAP_MAIN, action_id ) && ( ( *(char*)(get_action( KEYMAP_MAIN, action_id ) + 18) & 1 ) & 255 ) == 0 ) || *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 )
            {
              doc_view = &doc_view[0];
              switch ( action_id )
              {
              case ACT_MAIN_ABORT_CONNECTION:
                abort_loading( &ses[0], 1 );
                print_screen_status( &ses[0] );
                status = FRAME_EVENT_OK;
                if ( ses->insert_mode == INSERT_MODE_ON )
                {
                  if ( doc_view[0].next )
                  {
                    term = &doc_view->vs->current_link;
                    if ( doc_view->vs->current_link >= 0 )
                    {
                      if ( doc_view->document->nlinks <= term )
                        term = 0;
                        if ( link[0].accesskey != term )
                          ses->insert_mode = INSERT_MODE_OFF;
                          if ( 0 )
                          {
                            refresh_view( &ses[0], &doc_view[0], 0 );
                            status = FRAME_EVENT_REFRESH;
                            return FRAME_EVENT_OK;
                          }
                          else
                          {
                            return FRAME_EVENT_OK;
                          }
                      else
                        term = doc_view->document->links + ( term * 52 );
                    }
                  }
                }
                break;
              case ACT_MAIN_ADD_BOOKMARK:
                launch_bm_add_doc_dialog( term, 0, &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_ADD_BOOKMARK_LINK:
                launch_bm_add_link_dialog( term, 0, &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_ADD_BOOKMARK_TABS:
                bookmark_terminal_tabs_dialog( term );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_AUTH_MANAGER:
                auth_manager( &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_BACKSPACE_PREFIX:
                if ( ses->kbdprefix.repeat_count )
                {
                  draw_formatted( &ses[0], 0 );
                  ses->kbdprefix.repeat_count /= 10;
                  if ( ses->kbdprefix.repeat_count / 10 )
                    highlight_links_with_prefixes_that_start_with_n( term, &doc_view[0], ses->kbdprefix.repeat_count / 10 );
                    print_screen_status( &ses[0] );
                    status = FRAME_EVENT_SESSION_DESTROYED;
                    return FRAME_EVENT_OK;
                  else
                  {
                    print_screen_status( &ses[0] );
                    status = FRAME_EVENT_SESSION_DESTROYED;
                    return FRAME_EVENT_OK;
                  }
                }
                else
                  status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_BOOKMARK_MANAGER:
                bookmark_manager( &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_CACHE_MANAGER:
                cache_manager( &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_COOKIES_LOAD:
                if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
                {
                  load_cookies(  );
                  status = FRAME_EVENT_OK;
                }
                break;
              case ACT_MAIN_COOKIE_MANAGER:
                cookie_manager( &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_COPY_CLIPBOARD:
                copy_current_link_to_clipboard( &ses[0], &doc_view[0], 0 );
                if ( status != FRAME_EVENT_SESSION_DESTROYED )
                {
                }
                else
                {
                  return FRAME_EVENT_OK;
                }
                break;
              case ACT_MAIN_DOCUMENT_INFO:
                document_info_dialog( &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_DOWNLOAD_MANAGER:
                download_manager( &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_FILE_MENU:
                activate_bfu_technology( &ses[0], 0 );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_FIND_NEXT:
                find_next( &ses[0], &doc_view[0], 1 );
                break;
              case ACT_MAIN_FIND_NEXT_BACK:
                find_next( &ses[0], &doc_view[0], -1 );
                break;
              case ACT_MAIN_FORGET_CREDENTIALS:
                free_auth(  );
              case ACT_MAIN_CACHE_MINIMIZE:
                shrink_memory( 1 );
                break;
              case ACT_MAIN_FORMHIST_MANAGER:
                formhist_manager( &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_FRAME_EXTERNAL_COMMAND:
                pass_uri_to_command( &ses[0], &doc_view[0], 0 );
                break;
              case ACT_MAIN_FRAME_NEXT:
                next_frame( &ses[0] );
                draw_formatted( &ses[0], 0 );
                break;
              case ACT_MAIN_FRAME_MAXIMIZE:
                set_frame( &ses[0], &doc_view[0], 0 );
                break;
              case ACT_MAIN_FRAME_PREV:
                next_frame( &ses[0] );
                draw_formatted( &ses[0], 0 );
                break;
              case ACT_MAIN_GOTO_URL:
                goto_url_action( &ses[0], 0 );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_GOTO_URL_CURRENT:
                goto_url_action( &ses[0], &get_current_url );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_GOTO_URL_CURRENT_LINK:
                goto_url_action( &ses[0], &get_current_link_url );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_GOTO_URL_HOME:
                goto_url_home( &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_HEADER_INFO:
                protocol_header_dialog( &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_HISTORY_MANAGER:
                history_manager( &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_HISTORY_MOVE_BACK:
              {
                int count;
                go_history_by_n( &ses[0], (unsigned char)( count > 0 ) ? -1 : 0 - count );
                status = FRAME_EVENT_OK;
              }
                break;
              case ACT_MAIN_HISTORY_MOVE_FORWARD:
              {
                int count = count < 1 ? count : 1;
                go_history_by_n( &ses[0], count < 1 ? count : 1 );
                status = FRAME_EVENT_OK;
              }
                break;
              case ACT_MAIN_KEYBINDING_MANAGER:
                keybinding_manager( &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_KILL_BACKGROUNDED_CONNECTIONS:
                abort_background_connections(  );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_LINK_DOWNLOAD:
              case ACT_MAIN_LINK_DOWNLOAD_IMAGE:
              case ACT_MAIN_LINK_DOWNLOAD_RESUME:
                download_link( &ses[0], &doc_view[0], action_id );
                break;
              case ACT_MAIN_LINK_EXTERNAL_COMMAND:
                pass_uri_to_command( &ses[0], &doc_view[0], 1 );
                break;
              case ACT_MAIN_LINK_FOLLOW:
                enter( &ses[0], &doc_view[0], 0 );
                break;
              case ACT_MAIN_LINK_FOLLOW_RELOAD:
                enter( &ses[0], &doc_view[0], 1 );
                break;
              case ACT_MAIN_LINK_MENU:
                link_menu( term, 0, (void*)ses[0].next );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_LINK_FORM_MENU:
                link_form_menu( &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_MARK_SET:
                status = FRAME_EVENT_REFRESH;
                ses->kbdprefix.mark = KP_MARK_SET;
                break;
              case ACT_MAIN_MARK_GOTO:
                status = FRAME_EVENT_REFRESH;
                ses->kbdprefix.mark = KP_MARK_GOTO;
                break;
              case ACT_MAIN_MENU:
                activate_bfu_technology( &ses[0], -1 );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_MOVE_CURSOR_UP:
                move_cursor_up( &ses[0], &doc_view[0] );
                break;
              case ACT_MAIN_MOVE_CURSOR_DOWN:
                move_cursor_down( &ses[0], &doc_view[0] );
                break;
              case ACT_MAIN_MOVE_CURSOR_LEFT:
                move_cursor_left( &ses[0], &doc_view[0] );
                doc_view = &doc_view[0];
                break;
              case ACT_MAIN_MOVE_CURSOR_RIGHT:
                move_cursor_right( &ses[0], &doc_view[0] );
                break;
              case ACT_MAIN_MOVE_CURSOR_LINE_START:
                move_cursor_line_start( &ses[0], &doc_view[0] );
                break;
              case ACT_MAIN_MOVE_LINK_DOWN:
                move_link_dir( &ses[0], &doc_view[0], 0, 1 );
                break;
              case ACT_MAIN_MOVE_LINK_DOWN_LINE:
                move_link_down_line( &ses[0], &doc_view[0] );
                break;
              case ACT_MAIN_MOVE_LINK_LEFT:
                move_link_dir( &ses[0], &doc_view[0], -1, 0 );
                break;
              case ACT_MAIN_MOVE_LINK_LEFT_LINE:
                move_link_prev_line( &ses[0], &doc_view[0] );
                break;
              case ACT_MAIN_MOVE_LINK_NEXT:
                move_link( &ses[0], &doc_view[0], 1, doc_view->document->nlinks - 1, 0 );
                break;
              case ACT_MAIN_MOVE_LINK_PREV:
                move_link( &ses[0], &doc_view[0], -1, 0, doc_view->document->nlinks - 1 );
                break;
              case ACT_MAIN_MOVE_LINK_RIGHT:
                move_link_dir( &ses[0], &doc_view[0], 1, 0 );
                break;
              case ACT_MAIN_MOVE_LINK_RIGHT_LINE:
                move_link_next_line( &ses[0], &doc_view[0] );
                doc_view = &doc_view[0];
                break;
              case ACT_MAIN_MOVE_LINK_UP:
                move_link_dir( &ses[0], &doc_view[0], 0, -1 );
                break;
              case ACT_MAIN_MOVE_LINK_UP_LINE:
                move_link_up_line( &ses[0], &doc_view[0] );
                break;
              case ACT_MAIN_MOVE_PAGE_DOWN:
                move_page_down( &ses[0], &doc_view[0] );
                break;
              case ACT_MAIN_MOVE_PAGE_UP:
                move_page_up( &ses[0], &doc_view[0] );
                break;
              case ACT_MAIN_MOVE_DOCUMENT_START:
                move_document_start( &ses[0], &doc_view[0] );
                break;
              case ACT_MAIN_MOVE_DOCUMENT_END:
                move_document_end( &ses[0], &doc_view[0] );
                break;
              case ACT_MAIN_OPEN_LINK_IN_NEW_TAB:
                open_current_link_in_new_tab( &ses[0], 0 );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_OPEN_LINK_IN_NEW_TAB_IN_BACKGROUND:
                open_current_link_in_new_tab( &ses[0], 1 );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_OPEN_LINK_IN_NEW_WINDOW:
                open_in_new_window( term, &send_open_in_new_window, (void*)ses[0].next );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_OPEN_NEW_TAB:
                open_uri_in_new_tab( &ses[0], 0 );
                break;
              case ACT_MAIN_EXMODE:
              case ACT_MAIN_JUMP_TO_LINK:
              case ACT_MAIN_LUA_CONSOLE:
                break;
              case ACT_MAIN_OPEN_NEW_TAB_IN_BACKGROUND:
                open_uri_in_new_tab( &ses[0], 0 );
                break;
              case ACT_MAIN_OPEN_NEW_WINDOW:
                open_in_new_window( term, &send_open_new_window, (void*)ses[0].next );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_OPEN_OS_SHELL:
                exec_shell( term );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_OPTIONS_MANAGER:
                options_manager( &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_QUIT:
                exit_prog( &ses[0], 1 );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_REALLY_QUIT:
                exit_prog( &ses[0], 0 );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_REDRAW:
                redraw_terminal_cls( term );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_RELOAD:
                reload( &ses[0], CACHE_MODE_INCREMENT );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_RERENDER:
                draw_formatted( &ses[0], 2 );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_RESET_FORM:
                reset_form( &ses[0], &doc_view[0], 0 );
                break;
              case ACT_MAIN_RESOURCE_INFO:
                resource_info( term );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_SAVE_AS:
                save_as( &ses[0], &doc_view[0], 0 );
                break;
              case ACT_MAIN_SAVE_FORMATTED:
                save_formatted_dlg( &ses[0], &doc_view[0], 0 );
                break;
              case ACT_MAIN_SAVE_OPTIONS:
                write_config( term );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_SAVE_URL_AS:
                save_url_as( &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_SCROLL_DOWN:
                scroll_down( &ses[0], &doc_view[0] );
                break;
              case ACT_MAIN_SCROLL_LEFT:
                scroll_left( &ses[0], &doc_view[0] );
                break;
              case ACT_MAIN_SCROLL_RIGHT:
                scroll_right( &ses[0], &doc_view[0] );
                break;
              case ACT_MAIN_SCROLL_UP:
                scroll_up( &ses[0], &doc_view[0] );
                break;
              case ACT_MAIN_SEARCH:
                search_dlg( &ses[0], &doc_view[0], 1 );
                break;
              case ACT_MAIN_SEARCH_BACK:
                search_dlg( &ses[0], &doc_view[0], -1 );
                break;
              case ACT_MAIN_SEARCH_TYPEAHEAD:
              case ACT_MAIN_SEARCH_TYPEAHEAD_LINK:
              case ACT_MAIN_SEARCH_TYPEAHEAD_TEXT:
              case ACT_MAIN_SEARCH_TYPEAHEAD_TEXT_BACK:
                search_typeahead( &ses[0], &doc_view[0], action_id );
                break;
              case ACT_MAIN_SHOW_TERM_OPTIONS:
                terminal_options( term, 0, &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_SUBMIT_FORM:
                submit_form( &ses[0], &doc_view[0], 0 );
                break;
              case ACT_MAIN_SUBMIT_FORM_RELOAD:
                submit_form( &ses[0], &doc_view[0], 1 );
                break;
              case ACT_MAIN_TAB_CLOSE:
                close_tab( term, &ses[0] );
                status = FRAME_EVENT_SESSION_DESTROYED;
                return FRAME_EVENT_OK;
                break;
              case ACT_MAIN_TAB_CLOSE_ALL_BUT_CURRENT:
                close_all_tabs_but_current( &ses[0] );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_TAB_EXTERNAL_COMMAND:
                pass_uri_to_command( &ses[0], &doc_view[0], 2 );
                break;
              case ACT_MAIN_TAB_MOVE_LEFT:
                move_current_tab( &ses[0], -1 );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_TAB_MOVE_RIGHT:
                move_current_tab( &ses[0], 1 );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_TAB_MENU:
                if ( assert_failed == 0 )
                {
                  assert_failed = ses->tab != get_tab_by_number( term, term->current_tab );
                  if ( ses->tab != get_tab_by_number( term, term->current_tab ) )
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/action.c";
                    errline = 561;
                    elinks_internal( "assertion ses-&gt;tab == get_current_tab(term) failed!" );
                  }
                }
                break;
              case ACT_MAIN_TAB_NEXT:
                switch_current_tab( &ses[0], 1 );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_TAB_PREV:
                switch_current_tab( &ses[0], -1 );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_TERMINAL_RESIZE:
                resize_terminal_dialog( term );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_TOGGLE_CSS:
                toggle_document_option( &ses[0], "document.css.enable" );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_TOGGLE_DISPLAY_IMAGES:
                toggle_document_option( &ses[0], "document.browse.images.show_as_links" );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_TOGGLE_DISPLAY_TABLES:
                toggle_document_option( &ses[0], "document.html.display_tables" );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_TOGGLE_DOCUMENT_COLORS:
                toggle_document_option( &ses[0], "document.colors.use_document_colors" );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_TOGGLE_HTML_PLAIN:
                toggle_plain_html( &ses[0], ses->doc_view, 0 );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_TOGGLE_MOUSE:
                toggle_mouse(  );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_TOGGLE_NUMBERED_LINKS:
                toggle_document_option( &ses[0], "document.browse.links.numbering" );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_TOGGLE_PLAIN_COMPRESS_EMPTY_LINES:
                toggle_document_option( &ses[0], "document.plain.compress_empty_lines" );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_TOGGLE_WRAP_TEXT:
                toggle_wrap_text( &ses[0], ses->doc_view, 0 );
                status = FRAME_EVENT_OK;
                break;
              case ACT_MAIN_VIEW_IMAGE:
                view_image( &ses[0], &doc_view[0], 0 );
                break;
              case ACT_MAIN_NONE:
              case ACT_MAIN_SCRIPTING_FUNCTION:
                break;
              }
              if ( ( ses->status.bits_at_0 & 1 ) & 255 )
              {
                tab_menu( &ses[0], ses->tab->xpos, term->height - 1 - ( ( ses->status.bits_at_0 >> 1 ) & 1 ), 1 );
                status = FRAME_EVENT_OK;
              }
              else
              {
                tab_menu( &ses[0], 0, 0, 0 );
                status = FRAME_EVENT_OK;
              }
            }
          }
        }
        else
        {
          return FRAME_EVENT_OK;
        }
    }
    else
    {
      if ( !get_action( KEYMAP_MAIN, action_id ) || !( ( *(char*)(get_action( KEYMAP_MAIN, action_id ) + 18) & 8 ) & 255 ) || try_jump_to_link_number( &ses[0], &doc_view[0] ) )
      {
      }
    }
    link = 0;
    status = FRAME_EVENT_OK;
    if ( ses->insert_mode == INSERT_MODE_ON )
    {
    }
  }
  else
    link = 0;
  status = FRAME_EVENT_IGNORED;
  if ( verbose )
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/action.c";
    errline = 635;
    elinks_internal( "No action handling defined for '%s'." );
    status = FRAME_EVENT_IGNORED;
  }
}
#if 0
#endif
