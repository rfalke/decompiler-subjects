#include "LYKeymap.c.h"
static char *pretty_html( int c );
static char *format_binding( LYKeymap_t *table, int i );
static void print_binding( HTStream *target, int i, BOOLEAN both );
static int LYLoadKeymap( char *arg, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *sink );
static void set_any_keys( ANY_KEYS *table, int size );
static void reset_any_keys( ANY_KEYS *table, int size );
static int best_reverse_keymap( int lac );
LYKeymap_t keymap[661] = { 0, 69, 22, 16, 0, 14, 23, 15, 0, 36, 31, 39, 79, 21, 39, 18, 0, 17, 98, 12, 104, 64, 38, 82, 21, 0, 0, 0, 0, 0, 0, 0, 0, 15, 62, 77, 74, 25, 0, 0, 75, 19, 20, 66, 15, 90, 16, 89, 51, 80, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 65, 32, 56, 33, 43, 78, 58, 16, 99, 63, 83, 91, 42, 43, 45, 71, 72, 73, 48, 52, 49, 57, 14, 59, 50, 95, 37, 61, 0, 46, 0, 47, 67, 11, 68, 24, 81, 76, 58, 16, 54, 63, 55, 91, 41, 43, 45, 71, 72, 73, 48, 53, 49, 57, 13, 59, 50, 95, 37, 60, 0, 46, 0, 47, 100, 102, 101, 105, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 27, 39, 37, 15, 16, 22, 23, 44, 39, 22, 23, 17, 18, 69, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0,  };
LYKeymap_t key_override[661] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 91, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 93, 0, 95, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 91, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 93, 0, 95, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  };
static Kcmd revmap[107] = { { 0, "UNMAPPED", 0,  }
, { 1, "COMMAND", "prompt for, execute a command",  }
, { 2, "1", 0,  }
, { 3, "2", 0,  }
, { 4, "3", 0,  }
, { 5, "4", 0,  }
, { 6, "5", 0,  }
, { 7, "6", 0,  }
, { 8, "7", 0,  }
, { 9, "8", 0,  }
, { 10, "9", 0,  }
, { 11, "SOURCE", "toggle source/presentation for current document",  }
, { 12, "RELOAD", "reload the current document",  }
, { 13, "QUIT", "quit the browser",  }
, { 14, "ABORT", "quit the browser unconditionally",  }
, { 15, "NEXT_PAGE", "view the next page of the document",  }
, { 16, "PREV_PAGE", "view the previous page of the document",  }
, { 17, "UP_TWO", "go back two lines in the document",  }
, { 18, "DOWN_TWO", "go forward two lines in the document",  }
, { 19, "UP_HALF", "go back half a page in the document",  }
, { 20, "DOWN_HALF", "go forward half a page in the document",  }
, { 21, "REFRESH", "refresh the screen to clear garbled text",  }
, { 22, "HOME", "go to the beginning of the current document",  }
, { 23, "END", "go to the end of the current document",  }
, { 24, "FIRST_LINK", "make the first link on the line current",  }
, { 25, "LAST_LINK", "make the last link on the line current",  }
, { 26, "PREV_LINK", "make the previous link current",  }
, { 27, "NEXT_LINK", "make the next link current",  }
, { 28, "LPOS_PREV_LINK", "make previous link current, same column for input",  }
, { 29, "LPOS_NEXT_LINK", "make next link current, same column for input",  }
, { 30, "FASTBACKW_LINK", "previous link or text area, only stops on links",  }
, { 31, "FASTFORW_LINK", "next link or text area, only stops on links",  }
, { 32, "UP_LINK", "move up the page to a previous link",  }
, { 33, "DOWN_LINK", "move down the page to another link",  }
, { 34, "RIGHT_LINK", "move right to another link",  }
, { 35, "LEFT_LINK", "move left to a previous link",  }
, { 36, "HISTORY", "display stack of currently-suspended documents",  }
, { 37, "PREV_DOC", "go back to the previous document",  }
, { 38, "NEXT_DOC", "undo going back to the previous document",  }
, { 39, "ACTIVATE", "go to the document given by the current link",  }
, { 40, "MOUSE_SUBMIT", "DO NOT MAP:  follow current link, submit",  }
, { 41, "GOTO", "go to a document given as a URL",  }
, { 42, "ECGOTO", "edit the current document's URL and go to it",  }
, { 43, "HELP", "display help on using the browser",  }
, { 44, "DWIMHELP", "display help page that may depend on context",  }
, { 45, "INDEX", "display an index of potentially useful documents",  }
, { 46, "NOCACHE", "force submission of form or link with no-cache",  }
, { 47, "INTERRUPT", "interrupt network connection or transmission",  }
, { 48, "MAIN_MENU", "return to the first screen (home page)",  }
, { 49, "OPTIONS", "display and change option settings",  }
, { 50, "INDEX_SEARCH", "allow searching of an index",  }
, { 51, "WHEREIS", "search within the current document",  }
, { 52, "PREV", "search for the previous occurence",  }
, { 53, "NEXT", "search for the next occurence",  }
, { 54, "COMMENT", "send a comment to the author of the current document",  }
, { 55, "EDIT", "edit the current document or a form's textarea",  }
, { 56, "INFO", "display information on the current document and link",  }
, { 57, "PRINT", "display choices for printing the current document",  }
, { 58, "ADD_BOOKMARK", "add to your personal bookmark list",  }
, { 59, "DEL_BOOKMARK", "delete from your personal bookmark list",  }
, { 60, "VIEW_BOOKMARK", "view your personal bookmark list",  }
, { 61, "VLINKS", "list links visited during the current Lynx session",  }
, { 62, "SHELL", "escape from the browser to the system",  }
, { 63, "DOWNLOAD", "download the current link to your computer",  }
, { 64, "TRACE_TOGGLE", "toggle tracing of browser operations",  }
, { 65, "TRACE_LOG", "view trace log if started in the current session",  }
, { 66, "IMAGE_TOGGLE", "toggle handling of all images as links",  }
, { 67, "INLINE_TOGGLE", "toggle pseudo-ALTs for inlines with no ALT string",  }
, { 68, "HEAD", "send a HEAD request for the current document or link",  }
, { 69, "DO_NOTHING", 0,  }
, { 70, "TOGGLE_HELP", "show other commands in the novice help menu",  }
, { 71, "JUMP", "go directly to a target document or action",  }
, { 72, "KEYMAP", "display the current key map",  }
, { 73, "LIST", "list the references (links) in the current document",  }
, { 74, "TOOLBAR", "go to Toolbar or Banner in the current document",  }
, { 75, "HISTORICAL", "toggle historical vs.  valid/minimal comment parsing",  }
, { 76, "MINIMAL", "toggle minimal vs.  valid comment parsing",  }
, { 77, "SOFT_DQUOTES", "toggle valid vs.  soft double-quote parsing",  }
, { 78, "RAW_TOGGLE", "toggle raw 8-bit translations or CJK mode ON or OFF",  }
, { 79, "COOKIE_JAR", "examine the Cookie Jar",  }
, { 80, "F_LINK_NUM", "invoke the 'Follow link (or page) number:' prompt",  }
, { 81, "CLEAR_AUTH", "clear all authorization info for this session",  }
, { 82, "SWITCH_DTD", "switch between two ways of parsing HTML",  }
, { 83, "ELGOTO", "edit the current link's URL or ACTION and go to it",  }
, { 84, "CHANGE_LINK", "force reset of the current link on the page",  }
, { 85, "DWIMEDIT", "use external editor for context-dependent purpose",  }
, { 86, "EDITTEXTAREA", "use an external editor to edit a form's textarea",  }
, { 87, "GROWTEXTAREA", "add 5 new blank lines to the bottom of a textarea",  }
, { 88, "INSERTFILE", "insert file into a textarea (just above cursorline)",  }
, { 89, "EXTERN_LINK", "run external program with current link",  }
, { 90, "EXTERN_PAGE", "run external program with current page",  }
, { 91, "DIRED_MENU", "display a full menu of file operations",  }
, { 92, "CREATE", "create a new file or directory",  }
, { 93, "REMOVE", "remove a file or directory",  }
, { 94, "MODIFY", "modify the name or location of a file or directory",  }
, { 95, "TAG_LINK", "tag a file or directory for later action",  }
, { 96, "UPLOAD", "upload from your computer to the current directory",  }
, { 97, "INSTALL", "install file or tagged files into a system area",  }
, { 98, "CHANGE_CENTER", "toggle center alignment in HTML TABLE",  }
, { 99, "CHDIR", "change current directory",  }
, { 100, "SHIFT_LEFT", "shift the screen left",  }
, { 101, "SHIFT_RIGHT", "shift the screen right",  }
, { 102, "LINEWRAP_TOGGLE", "toggle linewrap on/off",  }
, { 103, "PASTE_URL", "Goto the URL in the clipboard",  }
, { 104, "TO_CLIPBOARD", "link's URL to Clip Board",  }
, { 105, "NESTED_TABLES", "toggle nested-table parsing on/off",  }
, { 0, 0, "",  }
,  };
static struct {
   int key;
   char *name;
} named_keys[24] = { { 9, "&lt;tab&gt;",  }
, { 13, "&lt;return&gt;",  }
, { 27, "ESC",  }
, { 32, "&lt;space&gt;",  }
, { 60, "&lt;",  }
, { 62, "&gt;",  }
, { 127, "&lt;delete&gt;",  }
, { 256, "Up Arrow",  }
, { 257, "Down Arrow",  }
, { 258, "Right Arrow",  }
, { 259, "Left Arrow",  }
, { 260, "Page Down",  }
, { 261, "Page Up",  }
, { 262, "Home",  }
, { 263, "End",  }
, { 264, "F1",  }
, { 265, "Do key",  }
, { 266, "Find key",  }
, { 267, "Select key",  }
, { 268, "Insert key",  }
, { 269, "Remove key",  }
, { 270, "(DO_NOTHING)",  }
, { 271, "Back Tab",  }
, { 285, "mouse pseudo key",  }
,  };
static struct emap ekmap[37] = { { "NOP", 0, "Do Nothing",  }
, { "CHAR", 1, "Insert printable char",  }
, { "ENTER", 2, "Input complete, return char/lynxkeycode",  }
, { "TAB", 3, "Input complete, return TAB",  }
, { "STOP", 4, "Input deactivated",  }
, { "ABORT", 5, "Input cancelled",  }
, { "PASS", 6, "In fields: input complete, or Do Nothing",  }
, { "DELN", 7, "Delete next/curr char",  }
, { "DELP", 9, "Delete prev      char",  }
, { "DELNW", 10, "Delete next word",  }
, { "DELPW", 11, "Delete prev word",  }
, { "ERASE", 12, "Erase the line",  }
, { "BOL", 13, "Go to begin of line",  }
, { "EOL", 14, "Go to end   of line",  }
, { "FORW", 15, "Cursor forwards",  }
, { "FORW_RL", 16, "Cursor forwards or right link",  }
, { "BACK", 17, "Cursor backwards",  }
, { "BACK_LL", 18, "Cursor backwards or left link",  }
, { "FORWW", 19, "Word forward",  }
, { "BACKW", 20, "Word back",  }
, { "LOWER", 21, "Lower case the line",  }
, { "UPPER", 22, "Upper case the line",  }
, { "LKCMD", 23, "Invoke command prompt",  }
, { "AIX", 24, "Hex 97",  }
, { "DELBL", 25, "Delete back to BOL",  }
, { "DELEL", 26, "Delete thru EOL",  }
, { "SWMAP", 27, "Switch input keymap",  }
, { "TPOS", 28, "Transpose characters",  }
, { "SETM1", 29, "Set modifier 1 flag",  }
, { "SETM2", 30, "Set modifier 2 flag",  }
, { "UNMOD", 31, "Fall back to no-modifier command",  }
, { "C1CHAR", 32, "Insert C1 char if printable",  }
, { "SETMARK", 33, "emacs-like set-mark-command",  }
, { "XPMARK", 34, "emacs-like exchange-point-and-mark",  }
, { "KILLREG", 35, "emacs-like kill-region",  }
, { "YANK", 36, "emacs-like yank",  }
, { "PASTE", 37, "ClipBoard to Lynx",  }
,  };
HTProtocol LYLynxKeymap = { "LYNXKEYMAP", &LYLoadKeymap, 0,  }
;
static ANY_KEYS vms_keys_table[2] = { { 26, 14, 0,  }
, { 36, 62, 0,  }
,  };
static ANY_KEYS vi_keys_table[4] = { { 104, 37, 0,  }
, { 106, 27, 0,  }
, { 107, 26, 0,  }
, { 108, 39, 0,  }
,  };
static BOOLEAN did_vi_keys;
static ANY_KEYS emacs_keys_table[4] = { { 2, 37, 0,  }
, { 14, 27, 0,  }
, { 16, 26, 0,  }
, { 6, 39, 0,  }
,  };
static BOOLEAN did_emacs_keys;
static ANY_KEYS number_keys_table[9] = { { 49, 23, 0,  }
, { 50, 27, 0,  }
, { 51, 15, 0,  }
, { 52, 37, 0,  }
, { 53, 69, 0,  }
, { 54, 39, 0,  }
, { 55, 22, 0,  }
, { 56, 26, 0,  }
, { 57, 16, 0,  }
,  };
static BOOLEAN did_number_keys;
HTList *LYcommandList( void )
{
  static HTList *myList;
  if ( myList == 0 )
  {
    unsigned int j;
    myList = HTList_new( );
    j = 0;
    for ( ; revmap[ j ].name != 0; j++ )
    {
      if ( revmap[ j ].doc != 0 )
      {
        char *data = 0;
        HTSACopy( &data, revmap[ j ].name );
        HTList_addObject( myList, (void*)data );
      }
      //j++;
    }
  }
  return myList;
}
Kcmd *LYKeycodeToKcmd( LYKeymapCode code )
{
  unsigned int j;
  Kcmd *result = 0;
  if ( code != LYK_UNKNOWN )
  {
    j = 0;
    for ( ; revmap[ j ].name != 0; j++ )
    {
      if ( revmap[ j ].code == code )
      {
        result = &revmap[ j ];
        break;
      }
      else
      {
        //j++;
      }
    }
  }
  return result;
}
Kcmd *LYStringToKcmd( char *name )
{
  unsigned int need = strlen( name );
  unsigned int j;
  BOOLEAN exact = 0;
  Kcmd *result = 0;
  Kcmd *maybe = 0;
  if ( name != 0 && ( name[0] & 255 ) != 0 )
  {
    j = 0;
    for ( ; revmap[ j ].name != 0; j++ )
    {
      if ( strcasecomp( revmap[ j ].name, name ) == 0 )
      {
        result = &revmap[ j ];
        break;
      }
      else
      {
        if ( exact == 0 && strncasecomp( revmap[ j ].name, name, (int)need ) == 0 )
        {
          if ( maybe == 0 )
            maybe = &revmap[ j ];
          else
          if ( ( revmap[ j ].name[ need ] & 255 ) != 0 && ( maybe->name[ need ] & 255 ) != 0 )
          {
            maybe = 0;
            exact = 1;
          }
        }
        //j++;
      }
    }
  }
  return result == 0 ? maybe : result;
}
char *LYKeycodeToString( int c, BOOLEAN upper8 )
{
  static char buf[30];
  unsigned int n;
  BOOLEAN named = 0;
  n = 0;
  for ( ; n <= 23; n++ )
  {
    if ( named_keys[ n ].key == c )
    {
      named = 1;
      strcpy( buf, named_keys[ n ].name );
    }
    //n++;
  }
  if ( named == 0 )
  {
    if ( c > 32 && c <= 126 )
    {
      sprintf( buf, "%c", c );
    }
    if ( upper8 != 0 && c > 32 && c <= 255 && c <= LYlowest_eightbit[ current_char_set ] )
    {
      sprintf( buf, "%c", c );
    }
    if ( c <= 31 )
    {
      sprintf( buf, "^%c", c | 64 );
    }
    if ( c > 255 )
    {
      sprintf( buf, "key-0x%x", c );
      return buf;
    }
    else
    {
      sprintf( buf, "0x%x", c );
      return buf;
    }
  }
  else
  {
    return buf;
  }
}
int LYStringToKeycode( char *src )
{
  unsigned int n;
  int key = -1;
  int len = strlen( src );
  if ( len == 1 )
    key = src[0];
  else
  if ( len == 2 && src[0] == '^' )
    key = src[1] & 31;
  else
  if ( len > 2 && strncasecomp( src, "0x", 2 ) == 0 )
  {
    char *dst = 0;
    key = strtol( src, &dst, 0 );
    if ( dst != 0 && ( dst[0] & 255 ) != 0 )
      key = -1;
  }
  else
  if ( len > 6 && strncasecomp( src, "key-", 4 ) == 0 )
  {
    char *dst = 0;
    key = strtol( &src[4], &dst, 0 );
    if ( dst == 0 || ( dst[0] & 255 ) == 0 )
      key = -1;
  }
  if ( key < 0 )
  {
    n = 0;
    for ( ; n <= 23; n++ )
    {
      if ( strcasecomp( named_keys[ n ].name, src ) == 0 )
      {
        key = named_keys[ n ].key;
        break;
      }
      else
      {
        //n++;
      }
    }
  }
  return key;
}
char *pretty_html( int c )
{
  static struct {
     int code;
     char *name;
  } table[4] = { { 60, "&lt;",  }
, { 62, "&gt;",  }
, { 34, "&quot;",  }
, { 38, "&amp;",  }
,  };
  static char buf[30];
  char *src = LYKeycodeToString( c, 1 );
  if ( src != 0 )
  {
    char *dst = buf;
    int adj = 0;
    unsigned int n;
    BOOLEAN found;
    while ( c = src[0], src++, ( ( c != 0 ) & 255 ) != 0 )
    {
      found = 0;
      n = 0;
      for ( ; n <= 3; n++ )
      {
        if ( table[ n ].code == c )
        {
          found = 1;
          strcpy( dst, table[ n ].name );
          adj = ( strlen( dst ) + adj ) - 1;
          dst += strlen( dst );
          break;
        }
        else
        {
          //n++;
        }
      }
      if ( found == 0 )
      {
        dst[0] = c;
        dst++;
      }
    }
    adj += buf[11] - dst;
    while ( adj--, ( ( ( adj < 1 ) ^ 1 ) & 255 ) != 0 )
    {
      dst[0] = ' ';
      dst++;
    }
    dst[0] = 0;
    return buf;
  }
  else
  {
    return 0;
  }
}
char *format_binding( LYKeymap_t *table, int i )
{
  LYKeymapCode the_key = table[ i ];
  char *buf = 0;
  char *formatted;
  Kcmd *rmap = LYKeycodeToKcmd( the_key );
  if ( rmap != 0 && rmap->name != 0 && rmap->doc != 0 )
  {
    formatted = pretty_html( i - 1 );
    if ( formatted != 0 )
    {
      HTSprintf0( &buf, "%-*s %-13s %s\n", 11, formatted, rmap->name );
      return buf;
    }
  }
  return 0;
}
void print_binding( HTStream *target, int i, BOOLEAN both )
{
  char *buf;
  LYKeymapCode lac1 = LYK_UNKNOWN;
  if ( ( prev_lynx_edit_mode & 255 ) != 0 && ( no_dired_support & 255 ) == 0 )
  {
    lac1 = key_override[ i ];
    if ( lac1 != LYK_UNKNOWN )
    {
      buf = format_binding( key_override, i );
      if ( buf != 0 )
      {
        ebx( target, buf, strlen( buf ) );
        if ( buf != 0 )
        {
          free( buf );
          buf = 0;
          if ( both != 0 )
          {
            i -= 32;
            if ( ( prev_lynx_edit_mode & 255 ) != 0 && ( no_dired_support & 255 ) == 0 && ( key_override[ i ] & 65535 ) != 0 )
            {
              if ( key_override[ i ] != lac1 )
              {
                buf = format_binding( key_override, i );
                if ( buf != 0 )
                {
                  ebx( target, buf, strlen( buf ) );
                  if ( buf != 0 )
                  {
                    free( buf );
                    buf = 0;
                  }
                }
              }
            }
            else
            if ( keymap[ i ] != lac1 )
            {
              buf = format_binding( keymap, i );
              if ( buf != 0 )
              {
                ebx( target, buf, strlen( buf ) );
                if ( buf != 0 )
                {
                  free( buf );
                  buf = 0;
                }
              }
            }
          }
          return;
        }
      }
    }
  }
  buf = format_binding( keymap, i );
  if ( buf != 0 )
  {
    lac1 = keymap[ i ];
    ebx( target, buf, strlen( buf ) );
    if ( buf != 0 )
    {
      free( buf );
      buf = 0;
    }
  }
}
int lacname_to_lac( char *func )
{
  Kcmd *mp = LYStringToKcmd( func );
  return mp == 0 ? -1 : mp->code;
}
int lecname_to_lec( char *func )
{
  int i;
  struct emap *mp;
  if ( func != 0 && ( func[0] & 255 ) != 0 )
  {
    i = 0;
    mp = ekmap;
    for ( ; mp->name != 0; i++ )
    {
      if ( strcmp( mp->name, func ) == 0 )
      {
        return mp->code;
      }
      mp++;
      //i++;
    }
  }
  return -1;
}
int lkcstring_to_lkc( char *src )
{
  int ah;
  int c = -1;
  if ( strlen( src ) == 1 )
    c = src[0];
  else
  {
    if ( strlen( src ) == 2 && src[0] == '^' )
      c = src[1] & 31;
    else
    {
      if ( strlen( src ) > 1 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( src[0] * 2 )) & 2048 ) != 0 )
      {
        if ( sscanf( src, "%i", &c ) != 1 )
        {
          return -1;
        }
      }
      else
      {
        map_string_to_keysym( src, &c );
        if ( c >= 0 )
        {
          if ( ( c & 2047 ) > 255 && ( c & 1024 ) == 0 )
          {
            return -1;
          }
          c = c;
        }
      }
    }
  }
  if ( c == 27 )
    escape_bound = 1;
  if ( c < -1 )
  {
    return -1;
  }
  return c;
}
int LYLoadKeymap( char *arg, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *sink )
{
  HTFormat format_in = HTAtom_for( "text/html" );
  HTStream *target;
  char *buf = 0;
  int i;
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
    anAnchor->no_cache = 1;
    HTSprintf0( &buf, "&lt;html&gt;\n&lt;head&gt;\n&lt;title&gt;%s&lt;/title&gt;\n&lt;/head&gt;\n&lt;body&gt;\n", gettext( "Current Key Map" ) );
    ebx( target, buf, strlen( buf ) );
    HTSprintf0( &buf, "&lt;pre&gt;\n" );
    ebx( target, buf, strlen( buf ) );
    i = 98;
    for ( ; i <= 123; i++ )
    {
      print_binding( target, i, 1 );
      //i++;
    }
    i = 1;
    for ( ; i <= 660; i++ )
    {
      if ( ( i > 127 || i <= 32 || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( ( i * 2 ) - 2 )) & 1024 ) == 0 ) && ( ( LYUseMouse & 255 ) != 0 || keymap[ i ] != 84 ) )
        print_binding( target, i, 0 );
      //i++;
    }
    HTSprintf0( &buf, "&lt;/pre&gt;\n&lt;/body&gt;\n&lt;/html&gt;\n" );
    ebx( target, buf, strlen( buf ) );
    ;
  }
}
int remap( char *key, char *func, BOOLEAN for_dired )
{
  int ah;
  Kcmd *mp;
  int c;
  if ( func == 0 )
  {
    return 0;
  }
  c = lkcstring_to_lkc( key );
  if ( c < 0 )
  {
    return 0;
  }
  if ( c >= 0 )
  {
    if ( ( c & 34816 ) != 0 )
    {
      return 0;
    }
    if ( c != ( c & 2047 ) )
      c &= 2047;
  }
  if ( c + 1 > 660 )
  {
    return 0;
  }
  mp = LYStringToKcmd( func );
  if ( mp != 0 )
  {
    if ( for_dired != 0 )
      key_override[ c + 1 ] = mp->code;
    else
      keymap[ c + 1 ] = mp->code;
    return c == 0 ? mp->code : c;
  }
  else
  {
    return 0;
  }
}
void set_any_keys( ANY_KEYS *table, int size )
{
  int j = 0, k;
  for ( ; j < size; j++ )
  {
    k = table[ j ].code + 1;
    table[ j ].save = keymap[ k ];
    keymap[ k ] = table[ j ].map;
    //j++;
  }
  return;
}
void reset_any_keys( ANY_KEYS *table, int size )
{
  int j = 0, k;
  for ( ; j < size; j++ )
  {
    k = table[ j ].code + 1;
    keymap[ k ] = table[ j ].save;
    //j++;
  }
  return;
}
void set_vms_keys( void )
{
  set_any_keys( vms_keys_table, 2 );
  return;
}
void set_vi_keys( void )
{
  set_any_keys( vi_keys_table, 4 );
  did_vi_keys = 1;
  return;
}
void reset_vi_keys( void )
{
  if ( ( did_vi_keys & 255 ) != 0 )
  {
    reset_any_keys( vi_keys_table, 4 );
    did_vi_keys = 0;
  }
  return;
}
void set_emacs_keys( void )
{
  set_any_keys( emacs_keys_table, 4 );
  did_emacs_keys = 1;
  return;
}
void reset_emacs_keys( void )
{
  if ( ( did_emacs_keys & 255 ) != 0 )
  {
    reset_any_keys( emacs_keys_table, 4 );
    did_emacs_keys = 0;
  }
  return;
}
void set_numbers_as_arrows( void )
{
  set_any_keys( number_keys_table, 9 );
  did_number_keys = 1;
  return;
}
void reset_numbers_as_arrows( void )
{
  if ( ( did_number_keys & 255 ) != 0 )
  {
    reset_any_keys( number_keys_table, 9 );
    did_number_keys = 0;
  }
  return;
}
char *key_for_func( int func )
{
  static char *buf;
  int i = LYReverseKeymap( func );
  char *formatted;
  if ( i >= 0 )
  {
    formatted = LYKeycodeToString( i, 1 );
    HTSACopy( &buf, formatted == 0 ? "?" : formatted );
  }
  else
  {
    if ( buf == 0 )
    {
      HTSACopy( &buf, "" );
    }
    return buf;
  }
}
char *fmt_keys( int lkc_first, int lkc_second )
{
  char *buf = 0;
  BOOLEAN quotes = 0;
  char *fmt_first;
  char *fmt_second;
  if ( lkc_first < 0 )
  {
    return 0;
  }
  fmt_first = LYKeycodeToString( lkc_first, 1 );
  if ( fmt_first != 0 && strlen( fmt_first ) == 1 && fmt_first[0] != '\'' )
    quotes = 1;
  if ( quotes != 0 )
  {
    if ( lkc_second < 0 )
      HTSprintf0( &buf, "'%s'", fmt_first );
    else
      HTSprintf0( &buf, "'%s", fmt_first );
    return buf;
  }
  else
  {
    HTSACopy( &buf, fmt_first );
    if ( lkc_second >= 0 )
    {
      fmt_second = LYKeycodeToString( lkc_second, 1 );
      if ( fmt_second == 0 )
      {
        if ( buf != 0 )
        {
          free( buf );
          buf = 0;
        }
        return 0;
      }
      else
      {
        HTSprintf( &buf, "%s%s%s", ( strlen( fmt_second ) <= 2 || fmt_second[0] == '<' ) && ( strlen( buf ) <= 2 || *(char*)(buf + ( strlen( buf ) - 1 )) == '>' ) ? "" : " ", fmt_second, quotes == 0 ? "" : "'" );
      }
    }
    return buf;
  }
}
int best_reverse_keymap( int lac )
{
  int i = 97, c;
  for ( ; i >= 0; i = i == 122 ? 32 : i == 96 ? 123 : i == 126 ? 0 : i == 31 ? 256 : i == 659 ? 127 : i == 255 ? -1 : i + 1 )
  {
    c = i;
    if ( ( lynx_edit_mode & 255 ) != 0 && ( no_dired_support & 255 ) == 0 && lac != 0 && ( c == -1 ? key_override[0] : ( c & 34816 ) == 0 ? key_override[ ( c & 2047 ) + 1 ] : c & 255 ) == lac )
    {
      return c;
    }
    if ( lac != ( c == -1 ? keymap[0] : ( c & 34816 ) == 0 ? keymap[ ( c & 2047 ) + 1 ] : c & 255 ) )
    {
      //i = i == 122 ? 32 : i == 96 ? 123 : i == 126 ? 0 : i == 31 ? 256 : i == 659 ? 127 : i == 255 ? -1 : i + 1;
    }
    else
    {
      return c;
    }
  }
  return -1;
}
char *key_for_func_ext( int lac, int context_code )
{
  int ah;
  int lkc, modkey = -1;
  if ( context_code == 2 )
  {
    lkc = LYEditKeyForAction( lac, &modkey );
    if ( lkc >= 0 )
    {
      if ( ( lkc & 28672 ) != 0 )
      {
        return fmt_keys( modkey, lkc );
      }
      return fmt_keys( lkc, -1 );
    }
  }
  lkc = best_reverse_keymap( lac );
  if ( lkc < 0 )
  {
    return 0;
  }
  if ( context_code == 2 )
  {
    modkey = LYKeyForEditAction( 23 );
    if ( modkey < 0 )
    {
      return 0;
    }
    return fmt_keys( modkey, lkc );
  }
  else
  {
    return fmt_keys( lkc, -1 );
  }
}
BOOLEAN LYisNonAlnumKeyname( int ch, int KeyName )
{
  if ( ch < 0 || ch > 660 )
  {
  }
  else
  if ( ch >= 1 && strchr( "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", ch ) != 0 )
  {
  }
  else
  {
  }
  return 0;
}
int LYReverseKeymap( int KeyName )
{
  int i = 1;
  for ( ; i <= 660; i++ )
  {
    if ( KeyName == keymap[ i ] )
    {
      return i - 1;
    }
    //i++;
  }
  return -1;
}
