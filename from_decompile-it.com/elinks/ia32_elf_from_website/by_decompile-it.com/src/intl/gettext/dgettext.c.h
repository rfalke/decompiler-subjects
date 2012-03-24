#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef unsigned int size_t;
typedef enum  { EVENT_PROCESSED = 0, EVENT_NOT_PROCESSED = 1, } widget_handler_status_T;
typedef int int32_t;
typedef int32_t term_event_key_T;
typedef enum  { KBD_MOD_NONE = 0, KBD_MOD_SHIFT = 1, KBD_MOD_CTRL = 2, KBD_MOD_ALT = 4, } term_event_modifier_T;
typedef void window_handler_T( struct window *, struct term_event * );
typedef unsigned int uint32_t;
typedef uint32_t color_T;
typedef int (*change_hook_T)( struct session *, struct option_elinks *, struct option_elinks * );
typedef enum dlg_refresh_code  (*dialog_refresh_handler_T)( struct dialog_data *, void * );
typedef struct timer *timer_id_T;
typedef widget_handler_status_T widget_handler_T( struct dialog_data *, struct widget_data * );
typedef void done_handler_T( void * );
typedef long __off_t;
typedef void _IO_lock_t;
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef uint32_t unicode_val_T;
typedef unicode_val_T term_event_char_T;
typedef long __time_t;
typedef __time_t time_t;
typedef __off64_t off_t;
typedef struct SSS timeval_T;
typedef void download_callback_T( struct download *, void * );
typedef void (*menu_func_T)( struct terminal *, void *, void * );
typedef long action_id_T;
typedef enum input_line_code  (*input_line_handler_T)( struct input_line *, int  );
typedef struct _IO_FILE FILE;
typedef char *__gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef enum evhook_status  (*event_hook_T)( va_list , void * );
typedef unsigned long hash_value_T;
typedef hash_value_T (*hash_func_T)( unsigned char *, unsigned int , hash_value_T  );
typedef char XML_Char;
typedef struct XML_ParserStruct *XML_Parser;
typedef int __ssize_t;
typedef __ssize_t ssize_t;
typedef unsigned short sa_family_t;
typedef unsigned short uint16_t;
typedef uint16_t in_port_t;
typedef unsigned char uint8_t;
typedef unsigned long long __u_quad_t;
typedef __u_quad_t __dev_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef long __blksize_t;
typedef __quad_t __blkcnt64_t;
typedef __u_quad_t __ino64_t;
typedef long longptr_T;
typedef long milliseconds_T;
typedef void (*css_stylesheet_importer_T)( struct css_stylesheet *, struct uri *, unsigned char *, int  );
typedef void (*css_applier_T)( struct html_context *, struct html_element *, struct css_property * );
typedef int (*css_property_value_parser_T)( struct css_property_info *, union css_property_value *, struct scanner * );
typedef enum dom_code  (*dom_stack_callback_T)( struct dom_stack *, struct dom_node *, void * );
typedef enum dom_code  (*sgml_error_T)( struct sgml_parser *, struct dom_string *, unsigned int  );
typedef void element_handler_T( struct html_context *, unsigned char *, unsigned char *, unsigned char *, unsigned char ** );
typedef short int16_t;
typedef struct SSS bz_stream;
typedef unsigned char Byte;
typedef Byte Bytef;
typedef unsigned int uInt;
typedef unsigned long uLong;
typedef void *voidpf;
typedef voidpf (*alloc_func)( voidpf , uInt , uInt  );
typedef void (*free_func)( voidpf , voidpf  );
typedef struct z_stream_s z_stream;
typedef unsigned int nls_uint32;
typedef void *iconv_t;
typedef unsigned char transmem_block_t;
typedef union YYSTYPE YYSTYPE;
typedef char yysigned_char;
typedef long __suseconds_t;
typedef long __fd_mask;
typedef struct SSS fd_set;
typedef __mode_t mode_t;
typedef void (*select_handler_T)( void * );
typedef void (*socket_read_T)( struct socket *, struct read_buffer * );
typedef void (*socket_operation_T)( struct socket *, struct connection_state  );
typedef void protocol_handler_T( struct connection * );
typedef void (*dns_callback_T)( void *, struct sockaddr_storage *, int  );
typedef unsigned int __socklen_t;
typedef __socklen_t socklen_t;
typedef void (*socket_connect_T)( struct socket * );
typedef uint32_t in_addr_t;
typedef void (*socket_write_T)( struct socket * );
typedef struct gnutls_session_int *gnutls_session_t;
typedef struct gnutls_anon_client_credentials_st *gnutls_anon_client_credentials_t;
typedef struct gnutls_certificate_credentials_st *gnutls_certificate_credentials_t;
typedef unsigned int tcflag_t;
typedef unsigned char cc_t;
typedef unsigned int speed_t;
typedef int __pid_t;
typedef __pid_t pid_t;
typedef void (*__sighandler_t)( int  );
typedef union sigval sigval_t;
typedef long __clock_t;
typedef struct siginfo siginfo_t;
typedef struct SSS __sigset_t;
typedef struct Gpm_Connect Gpm_Connect;
typedef struct Gpm_Event Gpm_Event;
typedef __u_quad_t __rlim64_t;
typedef __rlim64_t rlim_t;
typedef void protocol_external_handler_T( struct session *, struct uri * );
typedef struct md5_context MD5_CTX;
typedef unsigned char md5_digest_bin_T[16];
typedef unsigned char md5_digest_hex_T[32];
typedef struct gss_buffer_desc_struct gss_buffer_desc;
typedef unsigned int uint_least32_t;
typedef uint_least32_t globus_uint_t;
typedef globus_uint_t OM_uint32;
typedef struct gss_ctx_id_desc_struct *gss_ctx_id_t;
typedef struct gss_name_desc_struct *gss_name_t;
typedef struct gss_OID_desc_struct *gss_OID;
typedef unsigned long VALUE;
typedef unsigned long ID;
typedef struct __dirstream DIR;
enum window_type { WINDOW_NORMAL = 0, WINDOW_TAB = 1, } ;
enum term_event_type { EVENT_INIT = 0, EVENT_KBD = 1, EVENT_MOUSE = 2, EVENT_REDRAW = 3, EVENT_RESIZE = 4, EVENT_ABORT = 5, } ;
enum option_flags { OPT_HIDDEN = 1, OPT_AUTOCREATE = 2, OPT_MUST_SAVE = 4, OPT_TOUCHED = 8, OPT_LISTBOX = 16, OPT_ALLOC = 32, OPT_SORT = 64, OPT_DELETED = 128, OPT_ALIAS_NEGATE = 256, } ;
enum option_type { OPT_BOOL = 0, OPT_INT = 1, OPT_LONG = 2, OPT_STRING = 3, OPT_CODEPAGE = 4, OPT_LANGUAGE = 5, OPT_COLOR = 6, OPT_COMMAND = 7, OPT_ALIAS = 8, OPT_TREE = 9, } ;
enum listbox_item_type { BI_LEAF = 0, BI_FOLDER = 1, BI_SEPARATOR = 2, } ;
enum term_redrawing_state { TREDRAW_READY = 0, TREDRAW_BUSY = 1, TREDRAW_DELAYED = 2, } ;
enum term_env_type { ENV_CONSOLE = 1, ENV_XWIN = 2, ENV_SCREEN = 4, ENV_OS2VIO = 8, ENV_BE = 16, ENV_TWIN = 32, ENV_WIN32 = 64, ENV_ANY = -1, } ;
enum dlg_refresh_code { REFRESH_DIALOG = 0, REFRESH_CANCEL = 1, REFRESH_NONE = 2, REFRESH_STOP = 3, } ;
enum inpfield_flags { INPFIELD_NONE = 0, INPFIELD_FLOAT = 1, INPFIELD_FLOAT2 = 2, } ;
enum format_align { ALIGN_LEFT = 0, ALIGN_CENTER = 1, ALIGN_RIGHT = 2, ALIGN_JUSTIFY = 3, } ;
enum widget_type { WIDGET_CHECKBOX = 0, WIDGET_FIELD = 1, WIDGET_FIELD_PASS = 2, WIDGET_BUTTON = 3, WIDGET_LISTBOX = 4, WIDGET_TEXT = 5, } ;
enum menu_action { ACT_MENU_NONE = 0, ACT_MENU_SCRIPTING_FUNCTION = 1, ACT_MENU_CANCEL = 2, ACT_MENU_DELETE = 3, ACT_MENU_DOWN = 4, ACT_MENU_END = 5, ACT_MENU_ENTER = 6, ACT_MENU_EXPAND = 7, ACT_MENU_HOME = 8, ACT_MENU_LEFT = 9, ACT_MENU_MARK_ITEM = 10, ACT_MENU_NEXT_ITEM = 11, ACT_MENU_PAGE_DOWN = 12, ACT_MENU_PAGE_UP = 13, ACT_MENU_PREVIOUS_ITEM = 14, ACT_MENU_REDRAW = 15, ACT_MENU_RIGHT = 16, ACT_MENU_SEARCH = 17, ACT_MENU_SELECT = 18, ACT_MENU_UNEXPAND = 19, ACT_MENU_UP = 20, } ;
enum cache_mode { CACHE_MODE_INCREMENT = -1, CACHE_MODE_ALWAYS = 0, CACHE_MODE_NORMAL = 1, CACHE_MODE_CHECK_IF_MODIFIED = 2, CACHE_MODE_FORCE_RELOAD = 3, CACHE_MODE_NEVER = 4, } ;
enum connection_basic_state { S_WAIT = 0, S_DNS = 1, S_CONN = 2, S_SSL_NEG = 3, S_SENT = 4, S_LOGIN = 5, S_GETH = 6, S_PROC = 7, S_TRANS = 8, S_QUESTIONS = 9, S_CONN_PEERS = 10, S_CONN_TRACKER = 11, S_RESUME = 12, S_ERRNO = -1, S_OK = -100000, S_INTERRUPTED = -100001, S_EXCEPT = -100002, S_INTERNAL = -100003, S_OUT_OF_MEM = -100004, S_NO_DNS = -100005, S_CANT_WRITE = -100006, S_CANT_READ = -100007, S_MODIFIED = -100008, S_BAD_URL = -100009, S_TIMEOUT = -100010, S_RESTART = -100011, S_STATE = -100012, S_WAIT_REDIR = -100013, S_LOCAL_ONLY = -100014, S_UNKNOWN_PROTOCOL = -100015, S_EXTERNAL_PROTOCOL = -100016, S_ENCODE_ERROR = -100017, S_SSL_ERROR = -100018, S_NO_FORCED_DNS = -100019, S_HTTP_ERROR = -100100, S_HTTP_204 = -100101, S_FILE_TYPE = -100200, S_FILE_ERROR = -100201, S_FILE_CGI_BAD_PATH = -100202, S_FILE_ANONYMOUS = -100203, S_FTP_ERROR = -100300, S_FTP_UNAVAIL = -100301, S_FTP_LOGIN = -100302, S_FTP_PORT = -100303, S_FTP_NO_FILE = -100304, S_FTP_FILE_ERROR = -100305, S_NNTP_ERROR = -100400, S_NNTP_NEWS_SERVER = -100401, S_NNTP_SERVER_HANG_UP = -100402, S_NNTP_GROUP_UNKNOWN = -100403, S_NNTP_ARTICLE_UNKNOWN = -100404, S_NNTP_TRANSFER_ERROR = -100405, S_NNTP_AUTH_REQUIRED = -100406, S_NNTP_ACCESS_DENIED = -100407, S_NNTP_SERVER_ERROR = -100408, S_GOPHER_CSO_ERROR = -100500, S_NO_JAVASCRIPT = -100600, S_PROXY_ERROR = -100700, S_BITTORRENT_ERROR = -100800, S_BITTORRENT_METAINFO = -100801, S_BITTORRENT_TRACKER = -100802, S_BITTORRENT_BAD_URL = -100803, S_BITTORRENT_PEER_URL = -100804, S_FSP_OPEN_SESSION_UNKN = -100900, } ;
enum connection_priority { PRI_MAIN = 0, PRI_DOWNLOAD = 0, PRI_FRAME = 1, PRI_CSS = 2, PRI_NEED_IMG = 3, PRI_IMG = 4, PRI_PRELOAD = 5, PRI_CANCEL = 6, PRIORITIES = 7, } ;
enum task_type { TASK_NONE = 0, TASK_FORWARD = 1, TASK_IMGMAP = 2, TASK_RELOAD = 3, TASK_HISTORY = 4, } ;
enum insert_mode { INSERT_MODE_LESS = 0, INSERT_MODE_ON = 1, INSERT_MODE_OFF = 2, } ;
enum navigate_mode { NAVIGATE_LINKWISE = 0, NAVIGATE_CURSOR_ROUTING = 1, } ;
enum listbox_match { LISTBOX_MATCH_OK = 0, LISTBOX_MATCH_NO = 1, LISTBOX_MATCH_IMPOSSIBLE = 2, } ;
enum delete_error { DELETE_IMPOSSIBLE = 0, DELETE_LOCKED = 1, DELETE_ERRORS = 2, } ;
enum main_action { ACT_MAIN_NONE = 0, ACT_MAIN_SCRIPTING_FUNCTION = 1, ACT_MAIN_ABORT_CONNECTION = 2, ACT_MAIN_ADD_BOOKMARK = 3, ACT_MAIN_ADD_BOOKMARK_LINK = 4, ACT_MAIN_ADD_BOOKMARK_TABS = 5, ACT_MAIN_AUTH_MANAGER = 6, ACT_MAIN_BACKSPACE_PREFIX = 7, ACT_MAIN_BOOKMARK_MANAGER = 8, ACT_MAIN_CACHE_MANAGER = 9, ACT_MAIN_CACHE_MINIMIZE = 10, ACT_MAIN_COOKIE_MANAGER = 11, ACT_MAIN_COOKIES_LOAD = 12, ACT_MAIN_COPY_CLIPBOARD = 13, ACT_MAIN_DOCUMENT_INFO = 14, ACT_MAIN_DOWNLOAD_MANAGER = 15, ACT_MAIN_EXMODE = 16, ACT_MAIN_FILE_MENU = 17, ACT_MAIN_FIND_NEXT = 18, ACT_MAIN_FIND_NEXT_BACK = 19, ACT_MAIN_FORGET_CREDENTIALS = 20, ACT_MAIN_FORMHIST_MANAGER = 21, ACT_MAIN_FRAME_EXTERNAL_COMMAND = 22, ACT_MAIN_FRAME_MAXIMIZE = 23, ACT_MAIN_FRAME_NEXT = 24, ACT_MAIN_FRAME_PREV = 25, ACT_MAIN_GOTO_URL = 26, ACT_MAIN_GOTO_URL_CURRENT = 27, ACT_MAIN_GOTO_URL_CURRENT_LINK = 28, ACT_MAIN_GOTO_URL_HOME = 29, ACT_MAIN_HEADER_INFO = 30, ACT_MAIN_HISTORY_MANAGER = 31, ACT_MAIN_HISTORY_MOVE_BACK = 32, ACT_MAIN_HISTORY_MOVE_FORWARD = 33, ACT_MAIN_JUMP_TO_LINK = 34, ACT_MAIN_KEYBINDING_MANAGER = 35, ACT_MAIN_KILL_BACKGROUNDED_CONNECTIONS = 36, ACT_MAIN_LINK_DOWNLOAD = 37, ACT_MAIN_LINK_DOWNLOAD_IMAGE = 38, ACT_MAIN_LINK_DOWNLOAD_RESUME = 39, ACT_MAIN_LINK_EXTERNAL_COMMAND = 40, ACT_MAIN_LINK_FOLLOW = 41, ACT_MAIN_LINK_FOLLOW_RELOAD = 42, ACT_MAIN_LINK_MENU = 43, ACT_MAIN_LINK_FORM_MENU = 44, ACT_MAIN_LUA_CONSOLE = 45, ACT_MAIN_MARK_GOTO = 46, ACT_MAIN_MARK_SET = 47, ACT_MAIN_MENU = 48, ACT_MAIN_MOVE_CURSOR_DOWN = 49, ACT_MAIN_MOVE_CURSOR_LEFT = 50, ACT_MAIN_MOVE_CURSOR_LINE_START = 51, ACT_MAIN_MOVE_CURSOR_RIGHT = 52, ACT_MAIN_MOVE_CURSOR_UP = 53, ACT_MAIN_MOVE_DOCUMENT_END = 54, ACT_MAIN_MOVE_DOCUMENT_START = 55, ACT_MAIN_MOVE_LINK_DOWN = 56, ACT_MAIN_MOVE_LINK_DOWN_LINE = 57, ACT_MAIN_MOVE_LINK_LEFT = 58, ACT_MAIN_MOVE_LINK_LEFT_LINE = 59, ACT_MAIN_MOVE_LINK_NEXT = 60, ACT_MAIN_MOVE_LINK_PREV = 61, ACT_MAIN_MOVE_LINK_RIGHT = 62, ACT_MAIN_MOVE_LINK_RIGHT_LINE = 63, ACT_MAIN_MOVE_LINK_UP = 64, ACT_MAIN_MOVE_LINK_UP_LINE = 65, ACT_MAIN_MOVE_PAGE_DOWN = 66, ACT_MAIN_MOVE_PAGE_UP = 67, ACT_MAIN_OPEN_LINK_IN_NEW_TAB = 68, ACT_MAIN_OPEN_LINK_IN_NEW_TAB_IN_BACKGROUND = 69, ACT_MAIN_OPEN_LINK_IN_NEW_WINDOW = 70, ACT_MAIN_OPEN_NEW_TAB = 71, ACT_MAIN_OPEN_NEW_TAB_IN_BACKGROUND = 72, ACT_MAIN_OPEN_NEW_WINDOW = 73, ACT_MAIN_OPEN_OS_SHELL = 74, ACT_MAIN_OPTIONS_MANAGER = 75, ACT_MAIN_QUIT = 76, ACT_MAIN_REALLY_QUIT = 77, ACT_MAIN_REDRAW = 78, ACT_MAIN_RELOAD = 79, ACT_MAIN_RERENDER = 80, ACT_MAIN_RESET_FORM = 81, ACT_MAIN_RESOURCE_INFO = 82, ACT_MAIN_SAVE_AS = 83, ACT_MAIN_SAVE_FORMATTED = 84, ACT_MAIN_SAVE_OPTIONS = 85, ACT_MAIN_SAVE_URL_AS = 86, ACT_MAIN_SCROLL_DOWN = 87, ACT_MAIN_SCROLL_LEFT = 88, ACT_MAIN_SCROLL_RIGHT = 89, ACT_MAIN_SCROLL_UP = 90, ACT_MAIN_SEARCH = 91, ACT_MAIN_SEARCH_BACK = 92, ACT_MAIN_SEARCH_TYPEAHEAD = 93, ACT_MAIN_SEARCH_TYPEAHEAD_LINK = 94, ACT_MAIN_SEARCH_TYPEAHEAD_TEXT = 95, ACT_MAIN_SEARCH_TYPEAHEAD_TEXT_BACK = 96, ACT_MAIN_SHOW_TERM_OPTIONS = 97, ACT_MAIN_SUBMIT_FORM = 98, ACT_MAIN_SUBMIT_FORM_RELOAD = 99, ACT_MAIN_TAB_CLOSE = 100, ACT_MAIN_TAB_CLOSE_ALL_BUT_CURRENT = 101, ACT_MAIN_TAB_EXTERNAL_COMMAND = 102, ACT_MAIN_TAB_MENU = 103, ACT_MAIN_TAB_MOVE_LEFT = 104, ACT_MAIN_TAB_MOVE_RIGHT = 105, ACT_MAIN_TAB_NEXT = 106, ACT_MAIN_TAB_PREV = 107, ACT_MAIN_TERMINAL_RESIZE = 108, ACT_MAIN_TOGGLE_CSS = 109, ACT_MAIN_TOGGLE_DISPLAY_IMAGES = 110, ACT_MAIN_TOGGLE_DISPLAY_TABLES = 111, ACT_MAIN_TOGGLE_DOCUMENT_COLORS = 112, ACT_MAIN_TOGGLE_HTML_PLAIN = 113, ACT_MAIN_TOGGLE_MOUSE = 114, ACT_MAIN_TOGGLE_NUMBERED_LINKS = 115, ACT_MAIN_TOGGLE_PLAIN_COMPRESS_EMPTY_LINES = 116, ACT_MAIN_TOGGLE_WRAP_TEXT = 117, ACT_MAIN_VIEW_IMAGE = 118, } ;
enum menu_item_flags { NO_FLAG = 0, FREE_LIST = 1, FREE_TEXT = 2, FREE_RTEXT = 4, FREE_DATA = 8, MENU_FULLNAME = 16, SUBMENU = 32, NO_INTL = 64, NO_SELECT = 128, RIGHT_INTL = 256, } ;
enum hotkey_state { HKS_SHOW = 0, HKS_IGNORE = 1, HKS_CACHED = 2, } ;
enum keymap_id { KEYMAP_INVALID = -1, KEYMAP_MAIN = 0, KEYMAP_EDIT = 1, KEYMAP_MENU = 2, KEYMAP_MAX = 3, } ;
enum input_line_code { INPUT_LINE_CANCEL = 0, INPUT_LINE_PROCEED = 1, INPUT_LINE_REWIND = 2, } ;
enum edit_action { ACT_EDIT_NONE = 0, ACT_EDIT_SCRIPTING_FUNCTION = 1, ACT_EDIT_AUTO_COMPLETE = 2, ACT_EDIT_AUTO_COMPLETE_FILE = 3, ACT_EDIT_AUTO_COMPLETE_UNAMBIGUOUS = 4, ACT_EDIT_BACKSPACE = 5, ACT_EDIT_BEGINNING_OF_BUFFER = 6, ACT_EDIT_CANCEL = 7, ACT_EDIT_COPY_CLIPBOARD = 8, ACT_EDIT_CUT_CLIPBOARD = 9, ACT_EDIT_DELETE = 10, ACT_EDIT_DOWN = 11, ACT_EDIT_END = 12, ACT_EDIT_END_OF_BUFFER = 13, ACT_EDIT_ENTER = 14, ACT_EDIT_HOME = 15, ACT_EDIT_KILL_TO_BOL = 16, ACT_EDIT_KILL_TO_EOL = 17, ACT_EDIT_KILL_WORD_BACK = 18, ACT_EDIT_LEFT = 19, ACT_EDIT_MOVE_BACKWARD_WORD = 20, ACT_EDIT_MOVE_FORWARD_WORD = 21, ACT_EDIT_NEXT_ITEM = 22, ACT_EDIT_OPEN_EXTERNAL = 23, ACT_EDIT_PASTE_CLIPBOARD = 24, ACT_EDIT_PREVIOUS_ITEM = 25, ACT_EDIT_REDRAW = 26, ACT_EDIT_RIGHT = 27, ACT_EDIT_SEARCH_TOGGLE_REGEX = 28, ACT_EDIT_UP = 29, } ;
struct _IO_FILE {
     int _flags;
     char *_IO_read_ptr;
     char *_IO_read_end;
     char *_IO_read_base;
     char *_IO_write_base;
     char *_IO_write_ptr;
     char *_IO_write_end;
     char *_IO_buf_base;
     char *_IO_buf_end;
     char *_IO_save_base;
     char *_IO_backup_base;
     char *_IO_save_end;
     struct _IO_marker *_markers;
     struct _IO_FILE *_chain;
     int _fileno;
     int _flags2;
     __off_t _old_offset;
     unsigned short _cur_column;
     char _vtable_offset;
     char _shortbuf[1];
     _IO_lock_t *_lock;
     __off64_t _offset;
     void *__pad1;
     void *__pad2;
     void *__pad3;
     void *__pad4;
     size_t __pad5;
     int _mode;
     char _unused2[40];
  } ;
struct _IO_marker {
     struct _IO_marker *_next;
     struct _IO_FILE *_sbuf;
     int _pos;
  } ;
struct _IO_FILE  ;
enum evhook_status { EVENT_HOOK_STATUS_NEXT = 0, EVENT_HOOK_STATUS_LAST = 1, } ;
enum border_char { BORDER_NONE = 0, BORDER_SULCORNER = 218, BORDER_SURCORNER = 191, BORDER_SDLCORNER = 192, BORDER_SDRCORNER = 217, BORDER_SLTEE = 180, BORDER_SRTEE = 195, BORDER_SDTEE = 194, BORDER_SUTEE = 193, BORDER_SVLINE = 179, BORDER_SHLINE = 196, BORDER_SCROSS = 197, BORDER_DULCORNER = 201, BORDER_DURCORNER = 187, BORDER_DDLCORNER = 200, BORDER_DDRCORNER = 188, BORDER_DLTEE = 185, BORDER_DRTEE = 204, BORDER_DDTEE = 203, BORDER_DUTEE = 202, BORDER_DVLINE = 186, BORDER_DHLINE = 205, BORDER_DCROSS = 206, BORDER_SDULCORNER = 213, BORDER_SDURCORNER = 184, BORDER_SDDLCORNER = 212, BORDER_SDDRCORNER = 190, BORDER_SDLTEE = 181, BORDER_SDRTEE = 198, BORDER_SDDTEE = 209, BORDER_SDUTEE = 207, BORDER_SDCROSS = 216, BORDER_DSULCORNER = 214, BORDER_DSURCORNER = 183, BORDER_DSDLCORNER = 211, BORDER_DSDRCORNER = 189, BORDER_DSLTEE = 182, BORDER_DSRTEE = 199, BORDER_DSDTEE = 210, BORDER_DSUTEE = 208, BORDER_DSCROSS = 215, } ;
enum screen_char_attr { SCREEN_ATTR_UNSEARCHABLE = 1, SCREEN_ATTR_BOLD = 8, SCREEN_ATTR_ITALIC = 16, SCREEN_ATTR_UNDERLINE = 32, SCREEN_ATTR_STANDOUT = 64, SCREEN_ATTR_FRAME = 128, } ;
enum msgbox_flags { MSGBOX_FREE_TEXT = 1, MSGBOX_NO_INTL = 2, MSGBOX_SCROLLABLE = 4, MSGBOX_NO_TEXT_INTL = 8, } ;
enum color_mode { COLOR_MODE_DUMP = -1, COLOR_MODE_MONO = 0, COLOR_MODE_16 = 1, COLOR_MODE_88 = 2, COLOR_MODE_256 = 3, COLOR_MODES = 5, } ;
enum move_bookmark_flags { MOVE_BOOKMARK_NONE = 0, MOVE_BOOKMARK_MOVED = 1, MOVE_BOOKMARK_CYCLE = 2, } ;
enum secsave_errno { SS_ERR_NONE = 0, SS_ERR_DISABLED = 1, SS_ERR_OUT_OF_MEM = 2, SS_ERR_OPEN_READ = 3, SS_ERR_OPEN_WRITE = 4, SS_ERR_STAT = 5, SS_ERR_ACCESS = 6, SS_ERR_MKSTEMP = 7, SS_ERR_RENAME = 8, SS_ERR_OTHER = 9, } ;
enum retval { RET_OK = 0, RET_ERROR = 1, RET_SIGNAL = 2, RET_SYNTAX = 3, RET_FATAL = 4, RET_PING = 5, RET_REMOTE = 6, RET_COMMAND = 7, } ;
enum remote_session_flags { SES_REMOTE_NEW_TAB = 1, SES_REMOTE_NEW_WINDOW = 2, SES_REMOTE_CURRENT_TAB = 4, SES_REMOTE_PROMPT_URL = 8, SES_REMOTE_PING = 16, SES_REMOTE_ADD_BOOKMARK = 32, SES_REMOTE_INFO_BOX = 64, } ;
enum parse_error { ERROR_NONE = 0, ERROR_COMMAND = 1, ERROR_PARSE = 2, ERROR_OPTION = 3, ERROR_VALUE = 4, ERROR_NOMEM = 5, } ;
enum kbdbind_flags { KBDB_WATERMARK = 1, KBDB_TOUCHED = 2, KBDB_DEFAULT_KEY = 4, KBDB_DEFAULT_BINDING = 8, } ;
enum stream_encoding { ENCODING_NONE = 0, ENCODING_GZIP = 1, ENCODING_BZIP2 = 2, ENCODING_LZMA = 3, ENCODING_DEFLATE = 4, ENCODINGS_KNOWN = 5, } ;
enum text_style_format { AT_BOLD = 1, AT_ITALIC = 2, AT_UNDERLINE = 4, AT_FIXED = 8, AT_GRAPHICS = 16, AT_PREFORMATTED = 32, } ;
enum color_flags { COLOR_DECREASE_LIGHTNESS = 1, COLOR_ENHANCE_UNDERLINE = 2, COLOR_INCREASE_CONTRAST = 4, COLOR_ENSURE_CONTRAST = 8, COLOR_ENSURE_INVERTED_CONTRAST = 16, } ;
enum link_type { LINK_HYPERTEXT = 0, LINK_MAP = 1, LINK_BUTTON = 2, LINK_CHECKBOX = 3, LINK_SELECT = 4, LINK_FIELD = 5, LINK_AREA = 6, } ;
enum cp_status { CP_STATUS_NONE = 0, CP_STATUS_SERVER = 1, CP_STATUS_ASSUMED = 2, CP_STATUS_IGNORED = 3, } ;
enum edit_dialog_type { EDIT_DLG_SEARCH = 0, EDIT_DLG_ADD = 1, } ;
enum pass_uri_type { PASS_URI_FRAME = 0, PASS_URI_LINK = 1, PASS_URI_TAB = 2, } ;
enum frame_event_status { FRAME_EVENT_IGNORED = 0, FRAME_EVENT_REFRESH = 1, FRAME_EVENT_OK = 2, FRAME_EVENT_SESSION_DESTROYED = 3, } ;
enum form_method { FORM_METHOD_GET = 0, FORM_METHOD_POST = 1, FORM_METHOD_POST_MP = 2, FORM_METHOD_POST_TEXT_PLAIN = 3, } ;
enum form_type { FC_TEXT = 0, FC_PASSWORD = 1, FC_FILE = 2, FC_TEXTAREA = 3, FC_CHECKBOX = 4, FC_RADIO = 5, FC_SELECT = 6, FC_SUBMIT = 7, FC_IMAGE = 8, FC_RESET = 9, FC_BUTTON = 10, FC_HIDDEN = 11, } ;
enum form_mode { FORM_MODE_NORMAL = 0, FORM_MODE_READONLY = 1, FORM_MODE_DISABLED = 2, } ;
enum form_wrap { FORM_WRAP_NONE = 0, FORM_WRAP_SOFT = 1, FORM_WRAP_HARD = 2, } ;
enum script_event_hook_type { SEVHOOK_ONCLICK = 0, SEVHOOK_ONDBLCLICK = 1, SEVHOOK_ONMOUSEOVER = 2, SEVHOOK_ONHOVER = 3, SEVHOOK_ONFOCUS = 4, SEVHOOK_ONMOUSEOUT = 5, SEVHOOK_ONBLUR = 6, } ;
enum uri_component { URI_PROTOCOL = 1, URI_IP_FAMILY = 2, URI_USER = 4, URI_PASSWORD = 8, URI_HOST = 16, URI_PORT = 32, URI_DEFAULT_PORT = 64, URI_DATA = 128, URI_FRAGMENT = 256, URI_POST = 512, URI_POST_INFO = 1024, URI_IDN = 2048, URI_PATH = 4096, URI_FILENAME = 8192, URI_QUERY = 16384, URI_SPECIAL = 28736, URI_RARE = 32320, URI_PUBLIC = -31305, URI_ORIGINAL = -32321, URI_BASE = -32065, URI_SERVER = -32705, URI_HTTP_AUTH = -32717, URI_HTTP_HOST = 2096, URI_HTTP_REFERRER_HOST = 49, URI_HTTP_REFERRER = 177, URI_HTTP_CONNECT = 112, URI_DIR_LOCATION = 2097, URI_DNS_HOST = 2064, URI_PROXY = -30529, URI_KEEPALIVE = 61, URI_FORM_GET = -28609, } ;
enum html_whitespace_state { HTML_SPACE_SUPPRESS = 0, HTML_SPACE_NORMAL = 1, HTML_SPACE_ADD = 2, } ;
enum html_element_mortality_type { ELEMENT_IMMORTAL = 0, ELEMENT_DONT_KILL = 1, ELEMENT_KILLABLE = 2, ELEMENT_WEAK = 3, } ;
enum format_list_flag { P_NONE = 0, P_NUMBER = 1, P_alpha = 2, P_ALPHA = 3, P_roman = 4, P_ROMAN = 5, P_STAR = 1, P_O = 2, P_PLUS = 3, P_LISTMASK = 7, P_COMPACT = 8, } ;
enum html_element_pseudo_class { ELEMENT_LINK = 1, ELEMENT_VISITED = 2, } ;
enum css_selector_relation { CSR_ROOT = 0, CSR_SPECIFITY = 1, CSR_ANCESTOR = 2, CSR_PARENT = 3, } ;
enum css_selector_type { CST_ELEMENT = 0, CST_ID = 1, CST_CLASS = 2, CST_PSEUDO = 3, CST_INVALID = 4, } ;
enum css_property_type { CSS_PT_NONE = 0, CSS_PT_BACKGROUND = 1, CSS_PT_BACKGROUND_COLOR = 2, CSS_PT_COLOR = 3, CSS_PT_DISPLAY = 4, CSS_PT_FONT_STYLE = 5, CSS_PT_FONT_WEIGHT = 6, CSS_PT_TEXT_ALIGN = 7, CSS_PT_TEXT_DECORATION = 8, CSS_PT_WHITE_SPACE = 9, CSS_PT_LAST = 10, } ;
enum css_property_value_type { CSS_VT_NONE = 0, CSS_VT_COLOR = 1, CSS_VT_DISPLAY = 2, CSS_VT_FONT_ATTRIBUTE = 3, CSS_VT_TEXT_ALIGN = 4, CSS_VT_LAST = 5, } ;
enum css_display { CSS_DISP_INLINE = 0, CSS_DISP_BLOCK = 1, } ;
enum css_token_type { CSS_TOKEN_IDENT = 256, CSS_TOKEN_NUMBER = 257, CSS_TOKEN_PERCENTAGE = 258, CSS_TOKEN_STRING = 259, CSS_TOKEN_ANGLE = 260, CSS_TOKEN_DIMENSION = 261, CSS_TOKEN_EM = 262, CSS_TOKEN_EX = 263, CSS_TOKEN_FREQUENCY = 264, CSS_TOKEN_LENGTH = 265, CSS_TOKEN_TIME = 266, CSS_TOKEN_HASH = 267, CSS_TOKEN_HEX_COLOR = 268, CSS_TOKEN_FUNCTION = 269, CSS_TOKEN_RGB = 270, CSS_TOKEN_URL = 271, CSS_TOKEN_AT_KEYWORD = 272, CSS_TOKEN_AT_CHARSET = 273, CSS_TOKEN_AT_FONT_FACE = 274, CSS_TOKEN_AT_IMPORT = 275, CSS_TOKEN_AT_MEDIA = 276, CSS_TOKEN_AT_PAGE = 277, CSS_TOKEN_IMPORTANT = 278, CSS_TOKEN_SELECT_SPACE_LIST = 279, CSS_TOKEN_SELECT_HYPHEN_LIST = 280, CSS_TOKEN_SELECT_BEGIN = 281, CSS_TOKEN_SELECT_END = 282, CSS_TOKEN_SELECT_CONTAINS = 283, CSS_TOKEN_GARBAGE = 284, CSS_TOKEN_SKIP = 285, CSS_TOKEN_NONE = 0, } ;
enum sgml_document_type { SGML_DOCTYPE_DOCBOOK = 0, SGML_DOCTYPE_HTML = 1, SGML_DOCTYPE_RSS = 2, SGML_DOCTYPE_XBEL = 3, SGML_DOCTYPES = 4, } ;
enum convert_string_mode { CSM_DEFAULT = 0, CSM_QUERY = 1, CSM_FORM = 2, CSM_NONE = 3, } ;
enum dom_stack_flag { DOM_STACK_FLAG_NONE = 0, DOM_STACK_FLAG_FREE_NODES = 1, } ;
enum dom_code { DOM_CODE_OK = 0, DOM_CODE_ERR = -1000, DOM_CODE_INCOMPLETE = -999, DOM_CODE_FREE_NODE = -998, DOM_CODE_ALLOC_ERR = -997, DOM_CODE_MAX_DEPTH_ERR = -996, DOM_CODE_VALUE_ERR = -995, DOM_CODE_INDEX_SIZE_ERR = 1, DOM_CODE_DOMSTRING_SIZE_ERR = 2, DOM_CODE_HIERARCHY_REQUEST_ERR = 3, DOM_CODE_WRONG_DOCUMENT_ERR = 4, DOM_CODE_INVALID_CHARACTER_ERR = 5, DOM_CODE_NO_DATA_ALLOWED_ERR = 6, DOM_CODE_NO_MODIFICATION_ALLOWED_ERR = 7, DOM_CODE_NOT_FOUND_ERR = 8, DOM_CODE_NOT_SUPPORTED_ERR = 9, DOM_CODE_INUSE_ATTRIBUTE_ERR = 10, DOM_CODE_INVALID_STATE_ERR = 11, DOM_CODE_SYNTAX_ERR = 12, DOM_CODE_INVALID_MODIFICATION_ERR = 13, DOM_CODE_NAMESPACE_ERR = 14, DOM_CODE_INVALID_ACCESS_ERR = 15, DOM_CODE_VALIDATION_ERR = 16, DOM_CODE_TYPE_MISMATCH_ERR = 17, } ;
enum dom_node_type { DOM_NODE_UNKNOWN = 0, DOM_NODE_ELEMENT = 1, DOM_NODE_ATTRIBUTE = 2, DOM_NODE_TEXT = 3, DOM_NODE_CDATA_SECTION = 4, DOM_NODE_ENTITY_REFERENCE = 5, DOM_NODE_ENTITY = 6, DOM_NODE_PROCESSING_INSTRUCTION = 7, DOM_NODE_COMMENT = 8, DOM_NODE_DOCUMENT = 9, DOM_NODE_DOCUMENT_TYPE = 10, DOM_NODE_DOCUMENT_FRAGMENT = 11, DOM_NODE_NOTATION = 12, DOM_NODES = 13, } ;
enum rss_element_type { RSS_ELEMENT_UNKNOWN = 0, RSS_ELEMENT_AUTHOR = 1, RSS_ELEMENT_CHANNEL = 2, RSS_ELEMENT_DESCRIPTION = 3, RSS_ELEMENT_GUID = 4, RSS_ELEMENT_ITEM = 5, RSS_ELEMENT_LINK = 6, RSS_ELEMENT_PUBDATE = 7, RSS_ELEMENT_TITLE = 8, RSS_ELEMENTS = 9, } ;
enum dom_config_flag { DOM_CONFIG_CDATA_SECTIONS = 1, DOM_CONFIG_COMMENTS = 2, DOM_CONFIG_ELEMENT_CONTENT_WHITESPACE = 4, DOM_CONFIG_ENTITIES = 8, DOM_CONFIG_NORMALIZE_CHARACTERS = 16, DOM_CONFIG_UNKNOWN = 32, DOM_CONFIG_NORMALIZE_WHITESPACE = 64, } ;
enum sgml_parser_type { SGML_PARSER_STREAM = 0, SGML_PARSER_TREE = 1, } ;
enum sgml_parser_flag { SGML_PARSER_COUNT_LINES = 1, SGML_PARSER_COMPLETE = 2, SGML_PARSER_INCREMENTAL = 4, SGML_PARSER_DETECT_ERRORS = 8, } ;
enum html_special_type { SP_TAG = 0, SP_FORM = 1, SP_CONTROL = 2, SP_TABLE = 3, SP_USED = 4, SP_FRAMESET = 5, SP_FRAME = 6, SP_NOWRAP = 7, SP_CACHE_CONTROL = 8, SP_CACHE_EXPIRES = 9, SP_REFRESH = 10, SP_STYLESHEET = 11, SP_COLOR_LINK_LINES = 12, SP_SCRIPT = 13, } ;
enum parse_header_param { HEADER_PARAM_FOUND = 0, HEADER_PARAM_NOT_FOUND = 1, HEADER_PARAM_OUT_OF_MEMORY = 2, } ;
enum link_state { LINK_STATE_NONE = 0, LINK_STATE_NEW = 1, LINK_STATE_SAME = 2, } ;
enum hlink_type { LT_UNKNOWN = 0, LT_START = 1, LT_PARENT = 2, LT_NEXT = 3, LT_PREV = 4, LT_CONTENTS = 5, LT_INDEX = 6, LT_GLOSSARY = 7, LT_CHAPTER = 8, LT_SECTION = 9, LT_SUBSECTION = 10, LT_APPENDIX = 11, LT_HELP = 12, LT_SEARCH = 13, LT_BOOKMARK = 14, LT_COPYRIGHT = 15, LT_AUTHOR = 16, LT_ICON = 17, LT_ALTERNATE = 18, LT_ALTERNATE_LANG = 19, LT_ALTERNATE_MEDIA = 20, LT_ALTERNATE_STYLESHEET = 21, LT_STYLESHEET = 22, } ;
enum hlink_direction { LD_UNKNOWN = 0, LD_REV = 1, LD_REL = 2, } ;
enum element_type { ET_NESTABLE = 0, ET_NON_NESTABLE = 1, ET_NON_PAIRABLE = 2, ET_LI = 3, } ;
enum html_attr_flags { HTML_ATTR_NONE = 0, HTML_ATTR_TEST = 1, HTML_ATTR_EAT_NL = 2, HTML_ATTR_LITERAL_NL = 8, } ;
enum dom_select_element_match { DOM_SELECT_RELATION_DESCENDANT = 0, DOM_SELECT_RELATION_DIRECT_CHILD = 1, DOM_SELECT_RELATION_DIRECT_ADJACENT = 2, DOM_SELECT_RELATION_INDIRECT_ADJACENT = 4, DOM_SELECT_RELATION_FLAGS = 7, DOM_SELECT_ELEMENT_UNIVERSAL = 8, DOM_SELECT_ELEMENT_ROOT = 16, DOM_SELECT_ELEMENT_EMPTY = 32, DOM_SELECT_ELEMENT_NTH_CHILD = 64, DOM_SELECT_ELEMENT_NTH_TYPE = 128, } ;
enum dom_select_attribute_match { DOM_SELECT_ATTRIBUTE_ANY = 1, DOM_SELECT_ATTRIBUTE_EXACT = 2, DOM_SELECT_ATTRIBUTE_SPACE_LIST = 4, DOM_SELECT_ATTRIBUTE_HYPHEN_LIST = 8, DOM_SELECT_ATTRIBUTE_BEGIN = 16, DOM_SELECT_ATTRIBUTE_END = 32, DOM_SELECT_ATTRIBUTE_CONTAINS = 64, DOM_SELECT_ATTRIBUTE_ID = 128, } ;
enum dom_select_text_match { DOM_SELECT_TEXT_CONTAINS = 1, } ;
enum dom_select_pseudo { DOM_SELECT_PSEUDO_UNKNOWN = 0, DOM_SELECT_PSEUDO_FIRST_LINE = 1, DOM_SELECT_PSEUDO_FIRST_LETTER = 2, DOM_SELECT_PSEUDO_SELECTION = 4, DOM_SELECT_PSEUDO_AFTER = 8, DOM_SELECT_PSEUDO_BEFORE = 16, DOM_SELECT_PSEUDO_LINK = 32, DOM_SELECT_PSEUDO_VISITED = 64, DOM_SELECT_PSEUDO_ACTIVE = 128, DOM_SELECT_PSEUDO_HOVER = 256, DOM_SELECT_PSEUDO_FOCUS = 512, DOM_SELECT_PSEUDO_TARGET = 1024, DOM_SELECT_PSEUDO_ENABLED = 2048, DOM_SELECT_PSEUDO_DISABLED = 4096, DOM_SELECT_PSEUDO_CHECKED = 8192, DOM_SELECT_PSEUDO_INDETERMINATE = 16384, DOM_SELECT_PSEUDO_CONTAINS = 10000, DOM_SELECT_PSEUDO_NTH_CHILD = 10001, DOM_SELECT_PSEUDO_NTH_LAST_CHILD = 10002, DOM_SELECT_PSEUDO_FIRST_CHILD = 10003, DOM_SELECT_PSEUDO_LAST_CHILD = 10004, DOM_SELECT_PSEUDO_ONLY_CHILD = 10005, DOM_SELECT_PSEUDO_NTH_TYPE = 10006, DOM_SELECT_PSEUDO_NTH_LAST_TYPE = 10007, DOM_SELECT_PSEUDO_FIRST_TYPE = 10008, DOM_SELECT_PSEUDO_LAST_TYPE = 10009, DOM_SELECT_PSEUDO_ONLY_TYPE = 10010, DOM_SELECT_PSEUDO_ROOT = 10011, DOM_SELECT_PSEUDO_EMPTY = 10012, } ;
enum dom_select_syntax { DOM_SELECT_SYNTAX_CSS = 0, DOM_SELECT_SYNTAX_PATH = 1, } ;
enum dom_stack_action { DOM_STACK_PUSH = 0, DOM_STACK_POP = 1, } ;
enum sgml_scanner_state { SGML_STATE_TEXT = 0, SGML_STATE_ELEMENT = 1, SGML_STATE_PROC_INST = 2, } ;
enum sgml_token_type { SGML_TOKEN_IDENT = 256, SGML_TOKEN_TAG_END = 257, SGML_TOKEN_STRING = 258, SGML_TOKEN_NOTATION = 259, SGML_TOKEN_NOTATION_COMMENT = 260, SGML_TOKEN_NOTATION_DOCTYPE = 261, SGML_TOKEN_NOTATION_ELEMENT = 262, SGML_TOKEN_NOTATION_ENTITY = 263, SGML_TOKEN_NOTATION_ATTLIST = 264, SGML_TOKEN_CDATA_SECTION = 265, SGML_TOKEN_PROCESS = 266, SGML_TOKEN_PROCESS_XML = 267, SGML_TOKEN_PROCESS_XML_STYLESHEET = 268, SGML_TOKEN_PROCESS_DATA = 269, SGML_TOKEN_ELEMENT = 270, SGML_TOKEN_ELEMENT_BEGIN = 271, SGML_TOKEN_ELEMENT_END = 272, SGML_TOKEN_ELEMENT_EMPTY_END = 273, SGML_TOKEN_ATTRIBUTE = 274, SGML_TOKEN_ENTITY = 275, SGML_TOKEN_TEXT = 276, SGML_TOKEN_SPACE = 277, SGML_TOKEN_GARBAGE = 278, SGML_TOKEN_INCOMPLETE = 279, SGML_TOKEN_ERROR = 280, SGML_TOKEN_SKIP = 281, SGML_TOKEN_NONE = 0, } ;
struct internal_state {
     int dummy;
  } ;
struct z_stream_s {
     Bytef *next_in;
     uInt avail_in;
     uLong total_in;
     Bytef *next_out;
     uInt avail_out;
     uLong total_out;
     char *msg;
     struct internal_state *state;
     alloc_func zalloc;
     free_func zfree;
     voidpf opaque;
     int data_type;
     uLong adler;
     uLong reserved;
  } ;
enum nbsp_mode { NBSP_MODE_HACK = 0, NBSP_MODE_ASCII = 1, } ;
enum utf8_step { UTF8_STEP_CHARACTERS = 0, UTF8_STEP_CELLS_FEWER = 1, UTF8_STEP_CELLS_MORE = 2, } ;
enum operator { var = 0, num = 1, lnot = 2, mult = 3, divide = 4, module = 5, plus = 6, minus = 7, less_than = 8, greater_than = 9, less_or_equal = 10, greater_or_equal = 11, equal = 12, not_equal = 13, land = 14, lor = 15, qmop = 16, } ;
struct expression {
     int nargs;
     enum operator  operation;
     union {
       unsigned long num;
       struct expression  *args[3];
    } val;
  } ;
union YYSTYPE {
     unsigned long num;
     enum operator  op;
     struct expression *exp;
  } ;
enum addr_type { ADDR_IP_CLIENT = 0, ADDR_IP_SERVER = 1, ADDR_ANY_SERVER = 2, } ;
enum select_handler_type { SELECT_HANDLER_READ = 0, SELECT_HANDLER_WRITE = 1, SELECT_HANDLER_ERROR = 2, SELECT_HANDLER_DATA = 3, } ;
enum socket_state { SOCKET_RETRY_ONCLOSE = 0, SOCKET_END_ONCLOSE = 1, SOCKET_CLOSED = 2, } ;
enum dns_result { DNS_ERROR = -1, DNS_SUCCESS = 0, DNS_ASYNC = 1, } ;
enum blacklist_flags { SERVER_BLACKLIST_NONE = 0, SERVER_BLACKLIST_HTTP10 = 1, SERVER_BLACKLIST_NO_CHARSET = 2, SERVER_BLACKLIST_NO_TLS = 4, } ;
union sigval {
     int sival_int;
     void *sival_ptr;
  } ;
struct siginfo {
     int si_signo;
     int si_errno;
     int si_code;
     union {
       int _pad[29];
       struct {
         __pid_t si_pid;
         __uid_t si_uid;
      } _kill;
       struct {
         int si_tid;
         int si_overrun;
         sigval_t si_sigval;
      } _timer;
       struct {
         __pid_t si_pid;
         __uid_t si_uid;
         sigval_t si_sigval;
      } _rt;
       struct {
         __pid_t si_pid;
         __uid_t si_uid;
         int si_status;
         __clock_t si_utime;
         __clock_t si_stime;
      } _sigchld;
       struct {
         void *si_addr;
      } _sigfault;
       struct {
         long si_band;
         int si_fd;
      } _sigpoll;
    } _sifields;
  } ;
struct Gpm_Connect {
     unsigned short eventMask;
     unsigned short defaultMask;
     unsigned short minMod;
     unsigned short maxMod;
     int pid;
     int vc;
  } ;
enum Gpm_Etype { GPM_MOVE = 1, GPM_DRAG = 2, GPM_DOWN = 4, GPM_UP = 8, GPM_SINGLE = 16, GPM_DOUBLE = 32, GPM_TRIPLE = 64, GPM_MFLAG = 128, GPM_HARD = 256, GPM_ENTER = 512, GPM_LEAVE = 1024, } ;
enum Gpm_Margin { GPM_TOP = 1, GPM_BOT = 2, GPM_LFT = 4, GPM_RGT = 8, } ;
struct Gpm_Event {
     unsigned char buttons;
     unsigned char modifiers;
     unsigned short vc;
     short dx;
     short dy;
     short x;
     short y;
     enum Gpm_Etype  type;
     int clicks;
     enum Gpm_Margin  margin;
     short wdx;
     short wdy;
  } ;
enum protocol { PROTOCOL_ABOUT = 0, PROTOCOL_BITTORRENT = 1, PROTOCOL_BITTORRENT_PEER = 2, PROTOCOL_DATA = 3, PROTOCOL_FILE = 4, PROTOCOL_FINGER = 5, PROTOCOL_FSP = 6, PROTOCOL_FTP = 7, PROTOCOL_GOPHER = 8, PROTOCOL_HTTP = 9, PROTOCOL_HTTPS = 10, PROTOCOL_JAVASCRIPT = 11, PROTOCOL_NEWS = 12, PROTOCOL_NNTP = 13, PROTOCOL_NNTPS = 14, PROTOCOL_PROXY = 15, PROTOCOL_SMB = 16, PROTOCOL_SNEWS = 17, PROTOCOL_UNKNOWN = 18, PROTOCOL_USER = 19, PROTOCOL_LUA = 20, PROTOCOL_BACKENDS = 21, } ;
enum uri_errno { URI_ERRNO_OK = 0, URI_ERRNO_EMPTY = 1, URI_ERRNO_INVALID_PROTOCOL = 2, URI_ERRNO_NO_SLASHES = 3, URI_ERRNO_TOO_MANY_SLASHES = 4, URI_ERRNO_TRAILING_DOTS = 5, URI_ERRNO_NO_HOST = 6, URI_ERRNO_NO_PORT_COLON = 7, URI_ERRNO_NO_HOST_SLASH = 8, URI_ERRNO_IPV6_SECURITY = 9, URI_ERRNO_INVALID_PORT = 10, URI_ERRNO_INVALID_PORT_RANGE = 11, } ;
struct md5_context {
     uint32_t buf[4];
     uint32_t bits[2];
     unsigned char in[64];
  } ;
enum ftp_file_type { FTP_FILE_PLAINFILE = 45, FTP_FILE_DIRECTORY = 100, FTP_FILE_SYMLINK = 108, FTP_FILE_UNKNOWN = 63, } ;
enum ftp_unix { FTP_UNIX_PERMISSIONS = 0, FTP_UNIX_SIZE = 1, FTP_UNIX_DAY = 2, FTP_UNIX_TIME = 3, FTP_UNIX_NAME = 4, } ;
struct gss_buffer_desc_struct {
     size_t length;
     void *value;
  } ;
enum uri_rewrite_option { URI_REWRITE_TREE = 0, URI_REWRITE_ENABLE_DUMB = 1, URI_REWRITE_ENABLE_SMART = 2, URI_REWRITE_DUMB_TREE = 3, URI_REWRITE_DUMB_TEMPLATE = 4, URI_REWRITE_SMART_TREE = 5, URI_REWRITE_SMART_TEMPLATE = 6, URI_REWRITE_OPTIONS = 7, } ;
enum uri_rewrite_type { URI_REWRITE_DUMB = 0, URI_REWRITE_SMART = 1, } ;
enum do_move { DO_MOVE_ABORT = 0, DO_MOVE_DISPLAY = 1, DO_MOVE_DONE = 2, } ;
enum palette_range { PALETTE_FULL = 0, PALETTE_HALF = 1, PALETTE_RANGES = 2, } ;
enum border_cross_direction { BORDER_X_RIGHT = 0, BORDER_X_LEFT = 1, BORDER_X_DOWN = 2, BORDER_X_UP = 3, } ;
enum term_mode_type { TERM_DUMB = 0, TERM_VT100 = 1, TERM_LINUX = 2, TERM_KOI8 = 3, TERM_FREEBSD = 4, } ;
enum term_exec { TERM_EXEC_BG = 0, TERM_EXEC_FG = 1, TERM_EXEC_NEWWIN = 2, } ;
enum fastfind_flags { FF_NONE = 0, FF_CASE_AWARE = 1, FF_COMPRESS = 2, FF_LOCALE_INDEP = 4, } ;
struct __dirstream  ;
enum find_error { FIND_ERROR_NONE = 0, FIND_ERROR_NO_PREVIOUS_SEARCH = 1, FIND_ERROR_HIT_TOP = 2, FIND_ERROR_HIT_BOTTOM = 3, FIND_ERROR_NOT_FOUND = 4, FIND_ERROR_MEMORY = 5, FIND_ERROR_REGEX = 6, } ;
enum typeahead_code { TYPEAHEAD_MATCHED = 0, TYPEAHEAD_ERROR = 1, TYPEAHEAD_ERROR_NO_FURTHER = 2, TYPEAHEAD_CANCEL = 3, } ;
struct complex {
     double real;
     double imaginary;
  } ;
struct box {
     int x;
     int y;
     int width;
     int height;
  } ;
struct widget_ops {
     widget_handler_T *display;
     widget_handler_T *init;
     widget_handler_T *mouse;
     widget_handler_T *kbd;
     widget_handler_T *select;
     widget_handler_T *clear;
  } ;
struct widget {
     struct widget_ops *ops;
     unsigned char *text;
     widget_handler_T *handler;
     void *data;
     int datalen;
     union {
       struct widget_info_checkbox {
         int gid;
         int gnum;
      } checkbox;
       struct widget_info_field {
         int min;
         int max;
         struct input_history *history;
         enum inpfield_flags  flags;
      } field;
       struct widget_info_button {
         int flags;
         int hotkey_pos;
         int textlen;
         int truetextlen;
         done_handler_T *done;
         void *done_data;
      } button;
       struct widget_info_text {
         enum format_align  align;
         unsigned int bits_at_4;
      } text;
    } info;
     enum widget_type  type;
  } ;
struct widget_data {
     struct widget *widget;
     unsigned char *cdata;
     struct box  box;
     union {
       struct widget_data_info_field {
         int vpos;
         int cpos;
         struct list_head_elinks {
           void *next;
           void *prev;
        } history;
         struct input_history_entry *cur_hist;
      } field;
       struct widget_data_info_checkbox {
         int checked;
      } checkbox;
       struct widget_data_info_text {
         int current;
         int lines;
         int max_width;
         int scroller_height;
         int scroller_y;
         int scroller_last_dir;
      } text;
    } info;
  } ;
struct color_pair {
     color_T background;
     color_T foreground;
  } ;
struct dialog_refresh {
     dialog_refresh_handler_T handler;
     void *data;
     timer_id_T timer;
  } ;
struct dialog_layout {
     unsigned int bits_at_0;
  } ;
struct dialog {
     unsigned char *title;
     void *udata;
     void *udata2;
     struct dialog_refresh *refresh;
     void (*layouter)( struct dialog_data * );
     widget_handler_status_T (*handle_event)( struct dialog_data * );
     void (*abort)( struct dialog_data * );
     struct dialog_layout  layout;
     int number_of_widgets;
     struct widget  widgets[1];
  } ;
struct object {
     int refcount;
  } ;
union option_value {
     struct list_head_elinks *tree;
     int number;
     long big_number;
     color_T color;
     unsigned char *(*command)( struct option_elinks *, unsigned char ***, int * );
     unsigned char *string;
  } ;
struct listbox_item {
     struct listbox_item *next;
     struct listbox_item *prev;
     struct list_head_elinks  child;
     enum listbox_item_type  type;
     int depth;
     unsigned int bits_at_24;
     void *udata;
  } ;
struct option_elinks {
     struct option_elinks *next;
     struct option_elinks *prev;
     struct object  object;
     unsigned char *name;
     enum option_flags  flags;
     enum option_type  type;
     long min;
     long max;
     union option_value  value;
     unsigned char *desc;
     unsigned char *capt;
     struct option_elinks *root;
     change_hook_T change_hook;
     struct listbox_item *box_item;
  } ;
struct terminal_screen  ;
struct menu  ;
struct terminal_interlink  ;
struct term_event_mouse {
     int x;
     int y;
     unsigned int button;
  } ;
struct terminal {
     struct terminal *next;
     struct terminal *prev;
     struct list_head_elinks  windows;
     struct option_elinks *spec;
     unsigned char *title;
     struct terminal_screen *screen;
     struct menu *main_menu;
     int fdin;
     int fdout;
     int blocked;
     int width;
     int height;
     enum term_redrawing_state  redrawing;
     unsigned int bits_at_56;
     int current_tab;
     int leds_length;
     enum term_env_type  environment;
     unsigned char cwd[256];
     struct terminal_interlink *interlink;
     struct term_event_mouse  prev_mouse_event;
  } ;
struct xlist_head {
     struct xlist_head *next;
     struct xlist_head *prev;
  } ;
struct uri {
     unsigned char *string;
     int protocol;
     int ip_family;
     unsigned char *user;
     unsigned char *password;
     unsigned char *host;
     unsigned char *port;
     unsigned char *data;
     unsigned char *fragment;
     unsigned char *post;
     unsigned int bits_at_40;
     unsigned int bits_at_44;
     unsigned int bits_at_48;
     unsigned int bits_at_52;
     struct object  object;
  } ;
struct listbox_ops_messages {
     unsigned char *cant_delete_item;
     unsigned char *cant_delete_used_item;
     unsigned char *cant_delete_folder;
     unsigned char *cant_delete_used_folder;
     unsigned char *delete_marked_items_title;
     unsigned char *delete_marked_items;
     unsigned char *delete_folder_title;
     unsigned char *delete_folder;
     unsigned char *delete_item_title;
     unsigned char *delete_item;
     unsigned char *clear_all_items_title;
     unsigned char *clear_all_items;
  } ;
struct listbox_ops {
     void (*lock)( struct listbox_item * );
     void (*unlock)( struct listbox_item * );
     int (*is_used)( struct listbox_item * );
     unsigned char *(*get_text)( struct listbox_item *, struct terminal * );
     unsigned char *(*get_info)( struct listbox_item *, struct terminal * );
     struct uri *(*get_uri)( struct listbox_item * );
     struct listbox_item *(*get_root)( struct listbox_item * );
     enum listbox_match  (*match)( struct listbox_item *, struct terminal *, unsigned char * );
     int (*can_delete)( struct listbox_item * );
     void (*delete)( struct listbox_item *, int  );
     void (*draw)( struct listbox_item *, struct listbox_context *, int , int , int  );
     struct listbox_ops_messages *messages;
  } ;
struct listbox_data {
     struct listbox_data *next;
     struct listbox_data *prev;
     struct listbox_ops *ops;
     struct listbox_item *sel;
     struct listbox_item *top;
     int sel_offset;
     struct list_head_elinks *items;
  } ;
struct hierbox_browser_button {
     unsigned char *label;
     widget_handler_T *handler;
     unsigned int bits_at_8;
  } ;
struct hierbox_browser {
     unsigned char *title;
     void (*expansion_callback)( void );
     struct hierbox_browser_button *buttons;
     size_t buttons_size;
     struct list_head_elinks  boxes;
     struct list_head_elinks  dialogs;
     struct listbox_item  root;
     struct listbox_ops *ops;
     struct listbox_data  box_data;
     unsigned int bits_at_96;
  } ;
struct window {
     struct window *next;
     struct window *prev;
     enum window_type  type;
     window_handler_T *handler;
     void *data;
     struct terminal *term;
     int xpos;
     int width;
     int x;
     int y;
     unsigned int bits_at_40;
  } ;
struct memory_list {
     int n;
     void *p[1];
  } ;
struct term_event {
     enum term_event_type  ev;
     union {
       struct term_event_mouse  mouse;
       struct term_event_keyboard {
         term_event_key_T key;
         term_event_modifier_T modifier;
      } keyboard;
       struct term_event_size {
         int width;
         int height;
      } size;
    } info;
  } ;
struct dialog_data {
     struct window *win;
     struct dialog *dlg;
     struct memory_list *ml;
     struct box  box;
     int number_of_widgets;
     int selected_widget_id;
     struct term_event *term_event;
     struct widget_data  widgets_data[1];
  } ;
struct hierbox_dialog_list_item {
     struct hierbox_dialog_list_item *next;
     struct hierbox_dialog_list_item *prev;
     struct dialog_data *dlg_data;
  } ;
struct string {
     unsigned char *source;
     int length;
  } ;
struct action {
     unsigned char *str;
     action_id_T num;
     enum keymap_id  keymap_id;
     unsigned char *desc;
     unsigned int flags;
  } ;
struct location  ;
struct ses_history {
     struct list_head_elinks  history;
     struct location *current;
  } ;
struct connection  ;
struct {
     long sec;
     long usec;
  } ;
struct cache_entry {
     struct cache_entry *next;
     struct cache_entry *prev;
     struct object  object;
     struct list_head_elinks  frag;
     struct uri *uri;
     struct uri *proxy_uri;
     struct uri *redirect;
     unsigned char *head;
     unsigned char *content_type;
     unsigned char *last_modified;
     unsigned char *etag;
     unsigned char *ssl_info;
     unsigned char *encoding_info;
     unsigned int cache_id;
     time_t seconds;
     off_t length;
     off_t data_size;
     struct listbox_item *box_item;
     timeval_T max_age;
     unsigned int bits_at_92;
     enum cache_mode  cache_mode;
  } ;
struct progress  ;
struct connection_state {
     enum connection_basic_state  basic;
     int syserr;
  } ;
struct download {
     struct download *next;
     struct download *prev;
     struct connection *conn;
     struct cache_entry *cached;
     download_callback_T *callback;
     void *data;
     struct progress *progress;
     struct connection_state  state;
     struct connection_state  prev_error;
     enum connection_priority  pri;
  } ;
struct document_view  ;
struct session_task {
     enum task_type  type;
     struct {
       unsigned char *frame;
       struct location *location;
    } target;
  } ;
struct kbdprefix {
     int repeat_count;
     enum  { KP_MARK_NOTHING = 0, KP_MARK_SET = 1, KP_MARK_GOTO = 2, } mark;
  } ;
struct led {
     unsigned int bits_at_0;
  } ;
struct led_panel {
     struct led  leds[6];
  } ;
struct session_status {
     unsigned int bits_at_0;
     unsigned char *last_title;
     unsigned int bits_at_8;
     struct led_panel  leds;
     struct led *ssl_led;
     struct led *insert_mode_led;
     struct led *ecmascript_led;
     struct led *popup_led;
     unsigned int bits_at_52;
  } ;
struct session {
     struct session *next;
     struct session *prev;
     struct window *tab;
     struct ses_history  history;
     struct list_head_elinks  more_files;
     struct download  loading;
     struct uri *loading_uri;
     enum cache_mode  reloadlevel;
     int redirect_cnt;
     struct document_view *doc_view;
     struct list_head_elinks  scrn_frames;
     struct uri *download_uri;
     struct uri *referrer;
     struct session_task  task;
     int search_direction;
     struct kbdprefix  kbdprefix;
     int exit_query;
     timer_id_T display_timer;
     enum insert_mode  insert_mode;
     enum navigate_mode  navigate_mode;
     unsigned char *search_word;
     unsigned char *last_search_word;
     struct list_head_elinks  type_queries;
     struct session_status  status;
  } ;
struct input_line {
     struct session *ses;
     input_line_handler_T handler;
     void *data;
     unsigned char buffer[256];
  } ;
struct input_history_entry {
     struct input_history_entry *next;
     struct input_history_entry *prev;
     unsigned char data[1];
     char __pad[3];
  } ;
struct secure_save_info {
     FILE *fp;
     unsigned char *file_name;
     unsigned char *tmp_file_name;
     int err;
     int secure_save;
  } ;
struct tm {
     int tm_sec;
     int tm_min;
     int tm_hour;
     int tm_mday;
     int tm_mon;
     int tm_year;
     int tm_wday;
     int tm_yday;
     int tm_isdst;
     long tm_gmtoff;
     char *tm_zone;
  } ;
struct option_info {
     struct option_elinks  option_elinks;
     unsigned char *path;
  } ;
struct event_hook_info {
     unsigned char *name;
     int priority;
     event_hook_T callback;
     void *data;
  } ;
struct module {
     unsigned char *name;
     struct option_info *options;
     struct event_hook_info *hooks;
     struct module **submodules;
     void *data;
     void (*init)( struct module * );
     void (*done)( struct module * );
  } ;
struct menu_item {
     unsigned char *text;
     unsigned char *rtext;
     enum main_action  action_id;
     menu_func_T func;
     void *data;
     enum menu_item_flags  flags;
     enum hotkey_state  hotkey_state;
     int hotkey_pos;
  } ;
struct list_menu {
     struct menu_item **stack;
     int stack_size;
  } ;
struct screen_char {
     unicode_val_T data;
     unsigned char attr;
     unsigned char color[2];
     char __pad[1];
  } ;
struct hash_item {
     struct hash_item *next;
     struct hash_item *prev;
     unsigned char *key;
     unsigned int keylen;
     void *value;
  } ;
struct bfu_color_entry {
     color_T *background;
     color_T *foreground;
     struct color_pair  colors;
  } ;
struct hash {
     unsigned int width;
     hash_func_T func;
     struct list_head_elinks  hash[1];
  } ;
struct bookmark {
     struct bookmark *next;
     struct bookmark *prev;
     struct object  object;
     struct bookmark *root;
     struct listbox_item *box_item;
     unsigned char *title;
     unsigned char *url;
     struct list_head_elinks  child;
  } ;
struct conv_table {
     int t;
     union {
       unsigned char *str;
       struct conv_table *tbl;
    } u;
  } ;
struct change_hook_info {
     unsigned char *name;
     change_hook_T change_hook;
  } ;
struct bookmark_search_ctx {
     unsigned char *url;
     unsigned char *title;
     int found;
     int offset;
     int utf8_cp;
     int system_cp;
  } ;
struct bookmarks_backend {
     unsigned char *(*filename)( int  );
     void (*read)( FILE * );
     void (*write)( struct secure_save_info *, struct list_head_elinks * );
  } ;
struct write_bookmarks_default {
     struct secure_save_info *ssi;
     int save_folder_state;
     int codepage;
     struct conv_table *conv_table;
  } ;
struct tree_node {
     unsigned char *name;
     unsigned char *text;
     struct list_head_elinks  attrs;
     struct tree_node *parent;
     struct tree_node *children;
     struct tree_node *prev;
     struct tree_node *next;
  } ;
struct attributes {
     struct attributes *next;
     struct attributes *prev;
     unsigned char *name;
     unsigned char *value;
  } ;
struct read_bookmarks_xbel {
     int utf8_cp;
  } ;
struct XML_ParserStruct  ;
struct fragment {
     struct fragment *next;
     struct fragment *prev;
     off_t offset;
     off_t length;
     off_t real_length;
     unsigned char data[1];
     char __pad[3];
  } ;
struct sockaddr_storage {
     sa_family_t ss_family;
     unsigned long __ss_align;
     char __ss_padding[120];
  } ;
struct in6_addr {
     union {
       uint8_t __u6_addr8[16];
       uint16_t __u6_addr16[8];
       uint32_t __u6_addr32[4];
    } __in6_u;
  } ;
struct sockaddr_in6 {
     sa_family_t sin6_family;
     in_port_t sin6_port;
     uint32_t sin6_flowinfo;
     struct in6_addr  sin6_addr;
     uint32_t sin6_scope_id;
  } ;
struct option_type_info {
     unsigned char *name;
     unsigned char *(*cmdline)( struct option_elinks *, unsigned char ***, int * );
     unsigned char *(*read)( struct option_elinks *, unsigned char **, int * );
     void (*write)( struct option_elinks *, struct string * );
     void (*dup)( struct option_elinks *, struct option_elinks * );
     int (*set)( struct option_elinks *, unsigned char * );
     int (*equals)( struct option_elinks *, unsigned char * );
     unsigned char *help_str;
  } ;
struct conf_parsing_pos {
     unsigned char *look;
     int line;
  } ;
struct conf_parsing_state {
     struct conf_parsing_pos  pos;
     unsigned char *mirrored;
     unsigned char *filename;
  } ;
struct parse_handler {
     unsigned char *command;
     enum parse_error  (*handler)( struct option_elinks *, struct conf_parsing_state *, struct string *, int  );
  } ;
struct kbdbind_add_hop {
     struct terminal *term;
     action_id_T action_id;
     enum keymap_id  keymap_id;
     struct term_event_keyboard  kbd;
     struct widget_data *widget_data;
  } ;
struct keybinding {
     struct keybinding *next;
     struct keybinding *prev;
     struct object  object;
     enum keymap_id  keymap_id;
     action_id_T action_id;
     struct term_event_keyboard  kbd;
     int event;
     enum kbdbind_flags  flags;
     struct listbox_item *box_item;
  } ;
struct add_option_to_tree_ctx {
     struct option_elinks *option_elinks;
     struct widget_data *widget_data;
  } ;
struct keymap {
     unsigned char *str;
     enum keymap_id  keymap_id;
     unsigned char *desc;
  } ;
struct action_list {
     struct action *actions;
     int num_actions;
  } ;
struct timespec {
     __time_t tv_sec;
     long tv_nsec;
  } ;
struct stat {
     __dev_t st_dev;
     unsigned short __pad1;
     __ino_t __st_ino;
     __mode_t st_mode;
     __nlink_t st_nlink;
     __uid_t st_uid;
     __gid_t st_gid;
     __dev_t st_rdev;
     unsigned short __pad2;
     __off64_t st_size;
     __blksize_t st_blksize;
     __blkcnt64_t st_blocks;
     struct timespec  st_atim;
     struct timespec  st_mtim;
     struct timespec  st_ctim;
     __ino64_t st_ino;
  } ;
struct program {
     int terminate;
     enum retval  retval;
     unsigned char *path;
  } ;
struct default_kb {
     struct term_event_keyboard  kbd;
     action_id_T action_id;
  } ;
struct action_alias {
     unsigned char *str;
     action_id_T action_id;
  } ;
struct named_key {
     unsigned char *str;
     term_event_key_T num;
  } ;
struct option_resolver {
     int id;
     unsigned char *name;
  } ;
struct cookie_server {
     struct cookie_server *next;
     struct cookie_server *prev;
     struct object  object;
     struct listbox_item *box_item;
     unsigned char host[1];
     char __pad[3];
  } ;
struct cookie {
     struct cookie *next;
     struct cookie *prev;
     struct object  object;
     unsigned char *name;
     unsigned char *value;
     unsigned char *path;
     unsigned char *domain;
     struct cookie_server *server;
     time_t expires;
     int secure;
     struct listbox_item *box_item;
  } ;
struct c_domain {
     struct c_domain *next;
     struct c_domain *prev;
     unsigned char domain[1];
     char __pad[3];
  } ;
struct cookie_str {
     unsigned char *str;
     unsigned char *nam_end;
     unsigned char *val_start;
     unsigned char *val_end;
  } ;
struct global_history_item {
     struct global_history_item *next;
     struct global_history_item *prev;
     struct object  object;
     struct listbox_item *box_item;
     unsigned char *title;
     unsigned char *url;
     time_t last_visit;
  } ;
struct file_download {
     struct file_download *next;
     struct file_download *prev;
     struct object  object;
     struct uri *uri;
     unsigned char *file;
     unsigned char *external_handler;
     struct session *ses;
     struct terminal *term;
     time_t remotetime;
     off_t seek;
     int handle;
     int redirect_cnt;
     int notify;
     struct download  download;
     unsigned int bits_at_104;
     struct dialog_data *dlg_data;
     struct listbox_item *box_item;
  } ;
struct listbox_context {
     struct terminal *term;
     struct listbox_item *item;
     struct listbox_data *box;
     struct dialog_data *dlg_data;
     struct widget_data *widget_data;
     int dist;
     int offset;
  } ;
struct keys_toggle_info {
     struct terminal *term;
     int toggle;
  } ;
struct open_in_new {
     enum term_env_type  env;
     unsigned char *command;
     unsigned char *text;
  } ;
struct directory_entry {
     unsigned char *attrib;
     unsigned char *name;
  } ;
struct language {
     unsigned char *name;
     unsigned char *iso639;
  } ;
struct line {
     struct screen_char *chars;
     int length;
  } ;
struct text_style {
     enum text_style_format  attr;
     color_T fg;
     color_T bg;
  } ;
struct active_link_options {
     unsigned int bits_at_0;
     color_T fg;
     color_T bg;
  } ;
struct document_options {
     enum color_mode  color_mode;
     int cp;
     int assume_cp;
     int hard_assume;
     int margin;
     int num_links_key;
     int use_document_colors;
     int meta_link_display;
     int default_form_input_size;
     struct text_style  default_style;
     color_T default_link;
     color_T default_vlink;
     color_T default_bookmark_link;
     color_T default_image_link;
     enum color_flags  color_flags;
     unsigned int bits_at_68;
     unsigned char *framename;
     struct box  box;
     unsigned int bits_at_92;
     struct active_link_options  active_link;
     struct {
       unsigned char *prefix;
       unsigned char *suffix;
       int filename_maxlen;
       int label_maxlen;
       int display_style;
       int tagging;
       unsigned int bits_at_24;
    } image_link;
  } ;
struct uri_list {
     int size;
     struct uri **uris;
  } ;
struct frame_desc  ;
struct frameset_desc  ;
struct document_refresh  ;
struct point {
     int x;
     int y;
  } ;
struct link {
     unicode_val_T accesskey;
     enum link_type  type;
     unsigned char *where;
     unsigned char *target;
     unsigned char *where_img;
     unsigned char *title;
     struct point *points;
     int npoints;
     int number;
     struct color_pair  color;
     struct list_head_elinks *event_hooks;
     union {
       unsigned char *name;
       struct form_control *form_control;
    } data;
  } ;
struct search {
     int x;
     int y;
     int n;
     unicode_val_T c;
  } ;
struct document {
     struct document *next;
     struct document *prev;
     struct object  object;
     struct document_options  options;
     struct list_head_elinks  forms;
     struct list_head_elinks  tags;
     struct list_head_elinks  nodes;
     struct uri_list  css_imports;
     unsigned long css_magic;
     struct uri *uri;
     unsigned char *title;
     struct cache_entry *cached;
     struct frame_desc *frame;
     struct frameset_desc *frame_desc;
     struct document_refresh *refresh;
     struct line *data;
     struct link *links;
     struct link **lines1;
     struct link **lines2;
     struct search *search;
     struct search **slines1;
     struct search **slines2;
     unsigned char buf[7];
     unsigned char buf_length;
     unsigned int cache_id;
     int cp;
     int width;
     int height;
     int nlinks;
     int nsearch;
     color_T bgcolor;
     enum cp_status  cp_status;
     unsigned int bits_at_276;
  } ;
struct tag {
     struct tag *next;
     struct tag *prev;
     int x;
     int y;
     unsigned char name[1];
     char __pad[3];
  } ;
struct script_event_hook {
     struct script_event_hook *next;
     struct script_event_hook *prev;
     enum script_event_hook_type  type;
     unsigned char *src;
  } ;
struct form {
     struct form *next;
     struct form *prev;
     int form_num;
     int form_end;
     unsigned char *action;
     unsigned char *name;
     unsigned char *onsubmit;
     unsigned char *target;
     enum form_method  method;
     struct list_head_elinks  items;
  } ;
struct form_control {
     struct form_control *next;
     struct form_control *prev;
     struct form *form;
     int g_ctrl_num;
     int position;
     enum form_type  type;
     enum form_mode  mode;
     unsigned char *id;
     unsigned char *name;
     unsigned char *alt;
     unsigned char *default_value;
     int default_state;
     int size;
     int cols;
     int rows;
     enum form_wrap  wrap;
     int maxlength;
     int nvalues;
     unsigned char **values;
     unsigned char **labels;
     struct menu_item *menu;
  } ;
struct form_type_name {
     enum form_type  num;
     unsigned char *name;
  } ;
struct type_query {
     struct type_query *next;
     struct type_query *prev;
     struct download  download;
     struct cache_entry *cached;
     struct session *ses;
     struct uri *uri;
     unsigned char *target_frame;
     unsigned char *external_handler;
     int block;
     unsigned int bits_at_80;
  } ;
struct css_stylesheet {
     css_stylesheet_importer_T import;
     void *import_data;
     struct list_head_elinks  selectors;
     int import_level;
  } ;
struct part  ;
struct html_context {
     struct css_stylesheet  css_styles;
     struct uri *base_href;
     unsigned char *base_target;
     struct document_options *options;
     int doc_cp;
     struct list_head_elinks  stack;
     unsigned char *eoff;
     int line_breax;
     int position;
     enum html_whitespace_state  putsp;
     int was_li;
     unsigned int quote_level;
     unsigned int bits_at_68;
     int margin;
     unsigned char *startf;
     int table_level;
     struct part *part;
     void (*put_chars_f)( struct html_context *, unsigned char *, int  );
     void (*line_break_f)( struct html_context * );
     void *(*special_f)( struct html_context *, enum html_special_type   );
  } ;
struct text_attrib {
     struct text_style  style;
     int fontsize;
     unsigned char *link;
     unsigned char *target;
     unsigned char *image;
     unsigned char *title;
     struct form_control *form;
     color_T clink;
     color_T vlink;
     color_T bookmark_link;
     color_T image_link;
     unsigned char *id;
     unsigned char *class;
     unsigned char *select;
     int select_disabled;
     unsigned int tabindex;
     unicode_val_T accesskey;
     unsigned char *onclick;
     unsigned char *ondblclick;
     unsigned char *onmouseover;
     unsigned char *onhover;
     unsigned char *onfocus;
     unsigned char *onmouseout;
     unsigned char *onblur;
  } ;
struct par_attrib {
     enum format_align  align;
     int leftmargin;
     int rightmargin;
     int width;
     int list_level;
     unsigned int list_number;
     int dd_margin;
     enum format_list_flag  flags;
     color_T bgcolor;
  } ;
struct frameset_desc  ;
struct html_element {
     struct html_element *next;
     struct html_element *prev;
     enum html_element_mortality_type  type;
     struct text_attrib  attr;
     struct par_attrib  parattr;
     int invisible;
     unsigned char *name;
     int namelen;
     unsigned char *options;
     int linebreak;
     struct frameset_desc *frameset;
     enum html_element_pseudo_class  pseudo_class;
  } ;
struct css_selector {
     struct css_selector *next;
     struct css_selector *prev;
     enum css_selector_relation  relation;
     struct list_head_elinks  leaves;
     enum css_selector_type  type;
     unsigned char *name;
     struct list_head_elinks  properties;
  } ;
union css_property_value {
     void *none;
     color_T color;
     enum css_display  display;
     struct {
       enum text_style_format  add;
       enum text_style_format  rem;
    } font_attribute;
     enum format_align  text_align;
  } ;
struct css_property {
     struct css_property *next;
     struct css_property *prev;
     enum css_property_type  type;
     enum css_property_value_type  value_type;
     union css_property_value  value;
  } ;
struct scanner_token {
     int type;
     int precedence;
     unsigned char *string;
     int length;
  } ;
struct scanner_string_mapping {
     unsigned char *name;
     int type;
     int base_type;
  } ;
union scan_table_data {
     struct {
       unsigned char *source;
       long length;
    } string;
     struct {
       unsigned char *start;
       long end;
    } range;
  } ;
struct scan_table_info {
     enum  { SCAN_RANGE = 0, SCAN_STRING = 1, SCAN_END = 2, } type;
     union scan_table_data  data;
     int bits;
  } ;
struct scanner_info {
     struct scanner_string_mapping *mappings;
     struct scan_table_info *scan_table_info;
     struct scanner_token *(*scan)( struct scanner * );
     int scan_table[256];
     unsigned int bits_at_1036;
  } ;
struct scanner {
     unsigned char *string;
     unsigned char *position;
     unsigned char *end;
     struct scanner_token *current;
     int tokens;
     struct scanner_info *info;
     int state;
     struct scanner_token  table[10];
  } ;
struct css_property_info {
     unsigned char *name;
     enum css_property_type  type;
     enum css_property_value_type  value_type;
     css_property_value_parser_T parser;
     void *parser_data;
  } ;
struct selector_pkg {
     struct selector_pkg *next;
     struct selector_pkg *prev;
     struct css_selector *selector;
  } ;
struct node {
     struct node *next;
     struct node *prev;
     struct box  box;
  } ;
struct dom_string {
     unsigned int length;
     unsigned char *string;
  } ;
struct dom_document  ;
struct dom_node_list {
     size_t size;
     struct dom_node {
       uint16_t type;
       unsigned int bits_at_0;
       struct dom_string  string;
       struct dom_node *parent;
       union dom_node_data {
         struct dom_document_node {
           struct dom_document *document;
           struct dom_node_list *children;
        } document;
         struct dom_document_type_node {
           struct dom_node_list *entities;
           struct dom_node_list *notations;
           struct dom_doctype_subset_infot *subset;
        } document_type;
         struct dom_element_node {
           struct dom_node_list *children;
           struct dom_node_list *map;
           uint16_t namespace_offset;
           uint16_t type;
        } element;
         struct dom_attribute_node {
           struct dom_string  value;
           uint16_t namespace_offset;
           uint16_t type;
           unsigned char quoted;
           unsigned int bits_at_12;
        } attribute;
         struct dom_text_node {
           unsigned int newlines;
           unsigned int bits_at_4;
        } text;
         struct dom_id {
           struct dom_string  public_id;
           struct dom_string  system_id;
        } notation;
         struct dom_id  entity;
         struct dom_proc_instruction_node {
           struct dom_string  instruction;
           uint16_t type;
           struct dom_node_list *map;
        } proc_instruction;
      } data;
    } *entries[1];
  } ;
struct dom_document_node  ;
union dom_node_data  ;
struct dom_node  ;
struct dom_renderer {
     enum sgml_document_type  doctype;
     struct document *document;
     struct conv_table *convert_table;
     enum convert_string_mode  convert_mode;
     struct uri *base_uri;
     unsigned char *source;
     unsigned char *end;
     unsigned char *position;
     int canvas_x;
     int canvas_y;
     struct screen_char  styles[13];
     struct dom_node *channel;
     struct dom_node_list *items;
     struct dom_node *item;
     struct dom_node *node;
     struct dom_string  text;
  } ;
struct dom_stack_state {
     struct dom_node *node;
     unsigned int depth;
     unsigned int bits_at_8;
  } ;
struct dom_stack_context_info {
     size_t object_size;
     dom_stack_callback_T push[13];
     dom_stack_callback_T pop[13];
  } ;
struct dom_stack_context {
     void *data;
     unsigned char *state_objects;
     struct dom_stack_context_info *info;
  } ;
struct dom_stack {
     struct dom_stack_state *states;
     size_t depth;
     enum dom_stack_flag  flags;
     struct dom_stack_context **contexts;
     size_t contexts_size;
     struct dom_stack_context *current;
  } ;
struct sgml_node_info {
     struct dom_string  string;
     uint16_t type;
     uint16_t flags;
  } ;
struct dom_scanner_token {
     int type;
     int precedence;
     unsigned int lineno;
     struct dom_string  string;
  } ;
struct sgml_parser_state {
     struct sgml_node_info *info;
     struct dom_scanner_token  end_token;
  } ;
struct dom_config {
     enum dom_config_flag  flags;
     void (*error_handler)( struct dom_config *, struct dom_error * );
  } ;
struct sgml_info {
     enum sgml_document_type  doctype;
     struct sgml_node_info *attributes;
     struct sgml_node_info *elements;
  } ;
struct sgml_parser {
     enum sgml_parser_type  type;
     enum sgml_parser_flag  flags;
     struct sgml_info *info;
     struct dom_string  uri;
     struct dom_node *root;
     enum dom_code  code;
     sgml_error_T error_func;
     struct dom_stack  stack;
     struct dom_stack  parsing;
  } ;
struct document_view {
     struct document_view *next;
     struct document_view *prev;
     unsigned char *name;
     unsigned char **search_word;
     struct session *session;
     struct document *document;
     struct view_state *vs;
     struct box  box;
     int last_x;
     int last_y;
     int depth;
     int used;
  } ;
struct form_state  ;
struct view_state {
     struct document_view *doc_view;
     struct uri *uri;
     struct list_head_elinks  forms;
     struct form_state *form_info;
     int form_info_len;
     int x;
     int y;
     int current_link;
     int old_current_link;
     int plain;
     unsigned int bits_at_44;
  } ;
struct frame {
     struct frame *next;
     struct frame *prev;
     unsigned char *name;
     int redirect_cnt;
     struct view_state  vs;
  } ;
struct frame_desc {
     struct frameset_desc *subframe;
     unsigned char *name;
     struct uri *uri;
     int width;
     int height;
  } ;
struct frameset_desc {
     int n;
     struct box  box;
     struct frame_desc  frame_desc[1];
  } ;
struct frameset_param {
     struct frameset_desc *parent;
     int x;
     int y;
     int *width;
     int *height;
  } ;
struct link_def {
     unsigned char *link;
     unsigned char *target;
  } ;
struct part {
     struct document *document;
     unsigned char *spaces;
     int spaces_len;
     unsigned char *char_width;
     struct box  box;
     int max_width;
     int xa;
     int cx;
     int cy;
     int link_num;
  } ;
struct table_cache_entry_key {
     unsigned char *start;
     unsigned char *end;
     int align;
     int margin;
     int width;
     int x;
     int link_num;
  } ;
struct table_cache_entry {
     struct table_cache_entry *next;
     struct table_cache_entry *prev;
     struct table_cache_entry_key  key;
     struct part  part;
  } ;
struct link_state_info {
     unsigned char *link;
     unsigned char *target;
     unsigned char *image;
     struct form_control *form;
  } ;
struct renderer_context {
     int last_link_to_move;
     struct tag *last_tag_to_move;
     struct tag *last_tag_for_newline;
     struct link_state_info  link_state_info;
     struct conv_table *convert_table;
     struct cache_entry *cached;
     int g_ctrl_num;
     int subscript;
     int supscript;
     unsigned int bits_at_48;
  } ;
struct table_cell {
     unsigned char *start;
     unsigned char *end;
     unsigned char *fragment_id;
     color_T bgcolor;
     int col;
     int row;
     int align;
     int valign;
     int colspan;
     int rowspan;
     int min_width;
     int max_width;
     int width;
     int height;
     int link_num;
     unsigned int bits_at_60;
  } ;
struct table_column {
     int group;
     int align;
     int valign;
     int width;
  } ;
struct html_start_end {
     unsigned char *start;
     unsigned char *end;
  } ;
struct table_elinks {
     struct part *part;
     struct table_cell *cells;
     unsigned char *fragment_id;
     color_T bgcolor;
     color_T bordercolor;
     int align;
     struct table_column *columns;
     int columns_count;
     int real_columns_count;
     int *min_cols_widths;
     int *max_cols_widths;
     int *cols_widths;
     int *cols_x;
     int cols_x_count;
     int *rows_heights;
     int cols;
     int rows;
     int real_cols;
     int real_rows;
     int border;
     int cellpadding;
     int vcellpadding;
     int cellspacing;
     int frame;
     int rules;
     int width;
     int real_width;
     int real_height;
     int min_width;
     int max_width;
     int link_num;
     unsigned int bits_at_124;
     struct html_start_end  caption;
     int caption_height;
     struct html_start_end *bad_html;
     int bad_html_size;
  } ;
struct table_frames {
     unsigned int bits_at_0;
  } ;
struct hlink {
     enum hlink_type  type;
     enum hlink_direction  direction;
     unsigned char *content_type;
     unsigned char *media;
     unsigned char *href;
     unsigned char *hreflang;
     unsigned char *title;
     unsigned char *lang;
     unsigned char *name;
  } ;
struct lt_default_name {
     enum hlink_type  type;
     unsigned char *str;
  } ;
struct element_info {
     unsigned char *name;
     element_handler_T *open;
     element_handler_T *close;
     int linebreak;
     enum element_type  type;
  } ;
struct fastfind_key_value {
     unsigned char *key;
     void *data;
  } ;
struct fastfind_index {
     unsigned char *comment;
     void (*reset)( void );
     struct fastfind_key_value *(*next)( void );
     void *handle;
  } ;
struct plain_renderer {
     struct document *document;
     unsigned char *source;
     int length;
     struct conv_table *convert_table;
     struct screen_char  template;
     int max_width;
     int lineno;
     unsigned int bits_at_32;
  } ;
struct dom_config_info {
     struct dom_string  name;
     enum dom_config_flag  flag;
  } ;
struct dom_node_search {
     struct dom_node *key;
     unsigned int from;
     unsigned int pos;
     unsigned int to;
  } ;
struct dom_scanner_string_mapping {
     struct dom_string  name;
     int type;
     int base_type;
  } ;
struct dom_scan_table_info {
     enum  { DOM_SCAN_RANGE = 0, DOM_SCAN_STRING = 1, DOM_SCAN_END = 2, } type;
     struct dom_string  data;
     int bits;
  } ;
struct dom_scanner_info {
     struct dom_scanner_string_mapping *mappings;
     struct dom_scan_table_info *scan_table_info;
     struct dom_scanner_token *(*scan)( struct dom_scanner * );
     int scan_table[256];
     unsigned int bits_at_1036;
  } ;
struct dom_scanner {
     unsigned char *string;
     unsigned char *end;
     unsigned char *position;
     struct dom_scanner_token *current;
     int tokens;
     struct dom_scanner_info *info;
     unsigned int bits_at_24;
     unsigned int found_error;
     unsigned int bits_at_32;
     unsigned int lineno;
     int state;
     struct dom_scanner_token  table[10];
  } ;
struct dom_select_nth_match {
     size_t step;
     size_t index;
  } ;
struct dom_select_node {
     struct dom_node  node;
     struct dom_select_nth_match  nth_child;
     struct dom_select_nth_match  nth_type;
     union {
       enum dom_select_element_match  element;
       enum dom_select_attribute_match  attribute;
       enum dom_select_text_match  text;
    } match;
  } ;
struct dom_select {
     struct dom_select_node *selector;
     unsigned long specificity;
     enum dom_select_pseudo  pseudo;
  } ;
struct dom_select_data {
     struct dom_stack  stack;
     struct dom_select *select;
     struct dom_node_list *list;
  } ;
struct dom_select_state {
     struct dom_node *node;
  } ;
struct dom_stack_walk_state {
     struct dom_node_list *list;
     size_t index;
  } ;
struct sgml_parsing_state {
     struct dom_scanner  scanner;
     struct dom_node *node;
     struct dom_string  incomplete;
     size_t depth;
     unsigned int bits_at_260;
  } ;
struct {
     char *next_in;
     unsigned int avail_in;
     unsigned int total_in_lo32;
     unsigned int total_in_hi32;
     char *next_out;
     unsigned int avail_out;
     unsigned int total_out_lo32;
     unsigned int total_out_hi32;
     void *state;
     void *(*bzalloc)( void *, int , int  );
     void (*bzfree)( void *, void * );
     void *opaque;
  } ;
struct bz2_enc_data {
     bz_stream fbz_stream;
     int fdread;
     int last_read;
     unsigned char buf[5000];
  } ;
struct decoding_backend {
     unsigned char *name;
     unsigned char **extensions;
     int (*open)( struct stream_encoded *, int  );
     int (*read)( struct stream_encoded *, unsigned char *, int  );
     unsigned char *(*decode_buffer)( unsigned char *, int , int * );
     void (*close)( struct stream_encoded * );
  } ;
struct z_stream_s  ;
struct deflate_enc_data {
     z_stream deflate_stream;
     int fdread;
     unsigned int bits_at_60;
     unsigned char buf[5000];
     char __pad[3];
  } ;
struct formhist_data {
     struct formhist_data *next;
     struct formhist_data *prev;
     struct object  object;
     struct list_head_elinks *submit;
     struct listbox_item *box_item;
     unsigned int bits_at_20;
     unsigned char url[1];
  } ;
struct submitted_value {
     struct submitted_value *next;
     struct submitted_value *prev;
     unsigned char *name;
     unsigned char *value;
     struct form_control *form_control;
     enum form_type  type;
     int position;
  } ;
struct table_entry {
     unsigned char c;
     uint16_t u;
  } ;
struct codepage_desc {
     unsigned char *name;
     unsigned char **aliases;
     uint16_t *highhalf;
     struct table_entry *table_elinks;
  } ;
struct entity_cache {
     unsigned int hits;
     int strlen;
     int encoding;
     unsigned char *result;
     unsigned char str[20];
  } ;
struct entity {
     char *s;
     unicode_val_T c;
  } ;
struct binding {
     struct binding *next;
     unsigned char *dirname;
     int codeset_cntr;
     unsigned char *codeset;
     unsigned char domainname[1];
     char __pad[3];
  } ;
struct loaded_l10nfile {
     unsigned char *filename;
     unsigned char *langdirname;
     int langdirnamelen;
     int decided;
     void *data;
     struct loaded_l10nfile *next;
     struct loaded_l10nfile  *successor[1];
  } ;
struct known_translation_t {
     unsigned char *domainname;
     int category;
     int counter;
     struct loaded_l10nfile *domain;
     unsigned char *translation;
     size_t translation_length;
     unsigned char msgid[1];
     char __pad[3];
  } ;
struct string_desc {
     nls_uint32 length;
     nls_uint32 offset;
  } ;
struct loaded_domain {
     unsigned char *data;
     int use_mmap;
     size_t mmap_size;
     int must_swap;
     nls_uint32 nstrings;
     struct string_desc *orig_tab;
     struct string_desc *trans_tab;
     nls_uint32 hash_size;
     nls_uint32 *hash_tab;
     int codeset_cntr;
     iconv_t conv;
     unsigned char **conv_tab;
     struct expression *plural;
     unsigned long nplurals;
  } ;
struct mo_file_header {
     nls_uint32 magic;
     nls_uint32 revision;
     nls_uint32 nstrings;
     nls_uint32 orig_tab_offset;
     nls_uint32 trans_tab_offset;
     nls_uint32 hash_tab_size;
     nls_uint32 hash_tab_offset;
  } ;
struct parse_args {
     unsigned char *cp;
     struct expression *res;
  } ;
struct alias_map {
     unsigned char *alias;
     unsigned char *value;
  } ;
union yyalloc {
     short yyss;
     YYSTYPE yyvs;
  } ;
struct event_handler {
     event_hook_T callback;
     int priority;
     void *data;
  } ;
struct event {
     unsigned char *name;
     struct event_handler *handlers;
     unsigned int count;
     int id;
  } ;
struct sockaddr {
     sa_family_t sa_family;
     char sa_data[14];
  } ;
struct socket_info {
     struct sockaddr *addr;
     int size;
     int fd;
  } ;
struct sockaddr_un {
     sa_family_t sun_family;
     char sun_path[108];
  } ;
struct timeval {
     __time_t tv_sec;
     __suseconds_t tv_usec;
  } ;
struct bottom_half {
     struct bottom_half *next;
     struct bottom_half *prev;
     select_handler_T fn;
     void *data;
  } ;
struct thread {
     select_handler_T read_func;
     select_handler_T write_func;
     select_handler_T error_func;
     void *data;
  } ;
struct {
     long sec;
     long usec;
  } ;
struct timer {
     struct timer *next;
     struct timer *prev;
     timeval_T interval;
     void (*func)( void * );
     void *data;
  } ;
struct extension {
     unsigned char ext_orig[1024];
     unsigned char ext[1024];
     unsigned char ct[1024];
  } ;
struct mime_handler {
     unsigned char *description;
     unsigned char *backend_name;
     unsigned int bits_at_8;
     unsigned char program[1];
  } ;
struct mime_backend {
     unsigned char *(*get_content_type)( unsigned char * );
     struct mime_handler *(*get_mime_handler)( unsigned char *, int  );
  } ;
struct mailcap_entry {
     struct mailcap_entry *next;
     struct mailcap_entry *prev;
     unsigned char *testcommand;
     unsigned char *description;
     unsigned int priority;
     unsigned int bits_at_20;
     unsigned char command[1];
  } ;
struct mailcap_hash_item {
     struct list_head_elinks  entries;
     unsigned char type[1];
     char __pad[3];
  } ;
struct mimetypes_entry {
     unsigned char *content_type;
     unsigned char extension[1];
     char __pad[3];
  } ;
struct {
     long sec;
     long usec;
  } ;
struct {
     long sec;
     long usec;
  } ;
struct {
     long sec;
     long usec;
  } ;
struct {
     long sec;
     long usec;
  } ;
struct progress {
     timeval_T elapsed;
     timeval_T last_time;
     timeval_T dis_b;
     timeval_T estimated_time;
     int average_speed;
     int current_speed;
     unsigned int bits_at_40;
     off_t size;
     off_t loaded;
     off_t last_loaded;
     off_t cur_loaded;
     off_t start;
     off_t pos;
     off_t seek;
     timer_id_T timer;
     void (*timer_func)( void * );
     void *timer_func_data;
     int data_in_secs[50];
  } ;
struct stream_encoded {
     enum stream_encoding  encoding;
     void *data;
  } ;
struct connect_info  ;
struct read_buffer {
     socket_read_T done;
     int length;
     int freespace;
     unsigned char data[1];
     char __pad[3];
  } ;
struct socket_operations {
     socket_operation_T set_state;
     socket_operation_T set_timeout;
     socket_operation_T retry;
     socket_operation_T done;
  } ;
struct socket {
     int fd;
     enum socket_state  state;
     void *conn;
     struct connect_info *connect_info;
     struct read_buffer *read_buffer;
     void *write_buffer;
     struct socket_operations *ops;
     socket_read_T read_done;
     void *ssl;
     unsigned int bits_at_36;
  } ;
struct connection {
     struct connection *next;
     struct connection *prev;
     struct list_head_elinks  downloads;
     struct progress *progress;
     struct uri *uri;
     struct uri *proxied_uri;
     struct uri *referrer;
     enum cache_mode  cache_mode;
     struct cache_entry *cached;
     off_t from;
     off_t received;
     off_t est_length;
     enum stream_encoding  content_encoding;
     struct stream_encoded *stream;
     void (*done)( struct connection * );
     unsigned int id;
     struct connection_state  state;
     struct connection_state  prev_error;
     struct socket *socket;
     struct socket *data_socket;
     int tries;
     timer_id_T timer;
     int stream_pipes[2];
     unsigned int bits_at_120;
     int pri[7];
     void *info;
  } ;
struct host_connection {
     struct host_connection *next;
     struct host_connection *prev;
     struct object  object;
     struct uri *uri;
  } ;
struct {
     long sec;
     long usec;
  } ;
struct {
     long sec;
     long usec;
  } ;
struct keepalive_connection {
     struct keepalive_connection *next;
     struct keepalive_connection *prev;
     struct uri *uri;
     void (*done)( struct connection * );
     timeval_T timeout;
     timeval_T creation_time;
     unsigned int bits_at_32;
     int socket;
  } ;
struct dnsquery {
     dns_callback_T done;
     void *data;
     struct sockaddr_storage *addr;
     int addrno;
     struct dnsquery **queryref;
     int h;
     unsigned char name[1];
     char __pad[3];
  } ;
struct {
     long sec;
     long usec;
  } ;
struct dnsentry {
     struct dnsentry *next;
     struct dnsentry *prev;
     struct sockaddr_storage *addr;
     int addrno;
     timeval_T creation_time;
     unsigned char name[1];
     char __pad[3];
  } ;
struct addrinfo {
     int ai_flags;
     int ai_family;
     int ai_socktype;
     int ai_protocol;
     socklen_t ai_addrlen;
     struct sockaddr *ai_addr;
     char *ai_canonname;
     struct addrinfo *ai_next;
  } ;
struct ifaddrs {
     struct ifaddrs *ifa_next;
     char *ifa_name;
     unsigned int ifa_flags;
     struct sockaddr *ifa_addr;
     struct sockaddr *ifa_netmask;
     union {
       struct sockaddr *ifu_broadaddr;
       struct sockaddr *ifu_dstaddr;
    } ifa_ifu;
     void *ifa_data;
  } ;
struct in_addr {
     in_addr_t s_addr;
  } ;
struct sockaddr_in {
     sa_family_t sin_family;
     in_port_t sin_port;
     struct in_addr  sin_addr;
     unsigned char sin_zero[8];
  } ;
struct socket_weak_ref {
     struct socket_weak_ref *next;
     struct socket_weak_ref *prev;
     struct socket *socket;
  } ;
struct write_buffer {
     socket_write_T done;
     int length;
     int pos;
     unsigned char data[1];
     char __pad[3];
  } ;
struct strerror_val {
     struct strerror_val *next;
     struct strerror_val *prev;
     unsigned char msg[1];
     char __pad[3];
  } ;
struct s_msg_dsc {
     int n;
     unsigned char *msg;
  } ;
struct gnutls_session_int  ;
struct gnutls_anon_client_credentials_st  ;
struct gnutls_certificate_credentials_st  ;
struct termios {
     tcflag_t c_iflag;
     tcflag_t c_oflag;
     tcflag_t c_cflag;
     tcflag_t c_lflag;
     cc_t c_line;
     cc_t c_cc[32];
     speed_t c_ispeed;
     speed_t c_ospeed;
  } ;
struct winsize {
     unsigned short ws_row;
     unsigned short ws_col;
     unsigned short ws_xpixel;
     unsigned short ws_ypixel;
  } ;
struct signal_info {
     void (*handler)( void * );
     void *data;
     int critical;
     int mask;
  } ;
struct {
     unsigned long __val[32];
  } ;
struct sigaction {
     union {
       __sighandler_t sa_handler;
       void (*sa_sigaction)( int , siginfo_t *, void * );
    } __sigaction_handler;
     __sigset_t sa_mask;
     int sa_flags;
     void (*sa_restorer)( void );
  } ;
struct utsname {
     char sysname[65];
     char nodename[65];
     char release[65];
     char version[65];
     char machine[65];
     char __domainname[65];
  } ;
struct interlink_event {
     enum term_event_type  ev;
     union {
       struct term_event_mouse  mouse;
       struct interlink_event_keyboard {
         int key;
         int modifier;
      } keyboard;
       struct term_event_size  size;
    } info;
  } ;
struct gpm_mouse_spec {
     int h;
     int cons;
     void (*fn)( void *, unsigned char *, int  );
     void *data;
  } ;
struct about_page {
     unsigned char *name;
     unsigned char *string;
  } ;
struct rlimit {
     rlim_t rlim_cur;
     rlim_t rlim_max;
  } ;
struct protocol_backend {
     unsigned char *name;
     int port;
     protocol_handler_T *handler;
     unsigned int bits_at_12;
  } ;
struct uri_cache_entry {
     struct uri  uri;
     unsigned char string[1];
     char __pad[3];
  } ;
struct uri_cache {
     struct hash *map;
     struct object  object;
  } ;
struct auth_entry {
     struct auth_entry *next;
     struct auth_entry *prev;
     struct object  object;
     struct uri *uri;
     unsigned char *realm;
     unsigned char *nonce;
     unsigned char *opaque;
     struct listbox_item *box_item;
     unsigned char user[40];
     unsigned char password[40];
     unsigned int bits_at_112;
  } ;
struct ftp_connection_info {
     int pending_commands;
     int opc;
     int conn_state;
     int buf_pos;
     unsigned int bits_at_16;
     unsigned char ftp_buffer[16384];
     unsigned char cmd_buffer[1];
     char __pad[2];
  } ;
struct ftp_dir_html_format {
     int libc_codepage;
     int colorize_dir;
     unsigned char dircolor[8];
  } ;
struct ftp_file_info {
     enum ftp_file_type  type;
     struct string  name;
     struct string  symlink;
     off_t size;
     time_t mtime;
     unsigned int bits_at_32;
     mode_t permissions;
  } ;
struct blacklist_entry {
     struct blacklist_entry *next;
     struct blacklist_entry *prev;
     enum blacklist_flags  flags;
     unsigned char host[1];
     char __pad[3];
  } ;
struct http_code {
     int num;
     unsigned char *str;
  } ;
struct http_error_info {
     int code;
     struct uri *uri;
  } ;
struct http_version {
     int major;
     int minor;
  } ;
struct http_connection_info {
     enum blacklist_flags  bl_flags;
     struct http_version  recv_version;
     struct http_version  sent_version;
     int close;
     int length;
     int chunk_remaining;
     int code;
  } ;
struct gss_buffer_desc_struct  ;
struct gss_buffer_desc_struct  ;
struct negotiate {
     struct negotiate *next;
     struct negotiate *prev;
     struct object  object;
     struct uri *uri;
     int type;
     OM_uint32 status;
     gss_ctx_id_t context;
     gss_name_t server_name;
     gss_buffer_desc output_token;
     gss_buffer_desc input_token;
  } ;
struct gss_OID_desc_struct {
     OM_uint32 length;
     void *elements;
  } ;
struct erb_protect_info {
     unsigned char *name;
     int argc;
     VALUE *args;
  } ;
struct lun_hop {
     struct terminal *term;
     unsigned char *ofile;
     unsigned char *file;
     void (*callback)( struct terminal *, unsigned char *, void *, int  );
     void *data;
  } ;
struct cdf_hop {
     unsigned char **real_file;
     int safe;
     void (*callback)( struct terminal *, int , void *, int  );
     void *data;
  } ;
struct cmdw_hop {
     int magic;
     struct session *ses;
     unsigned char *real_file;
  } ;
struct codw_hop {
     int magic;
     struct type_query *type_query;
     unsigned char *real_file;
     unsigned char *file;
  } ;
struct utimbuf {
     __time_t actime;
     __time_t modtime;
  } ;
struct location {
     struct location *next;
     struct location *prev;
     struct list_head_elinks  frames;
     struct download  download;
     struct view_state  vs;
  } ;
struct file_to_load {
     struct file_to_load *next;
     struct file_to_load *prev;
     struct session *ses;
     unsigned int bits_at_12;
     int pri;
     struct cache_entry *cached;
     unsigned char *target_frame;
     struct uri *uri;
     struct download  download;
  } ;
struct session_info {
     struct session_info *next;
     struct session_info *prev;
     int id;
     timer_id_T timer;
     struct session *ses;
     struct uri *uri;
     struct uri *referrer;
     enum task_type  task;
     enum cache_mode  cache_mode;
  } ;
struct questions_entry {
     struct questions_entry *next;
     struct questions_entry *prev;
     void (*callback)( struct session *, void * );
     void *data;
  } ;
struct string_list_item {
     struct string_list_item *next;
     struct string_list_item *prev;
     struct string  string;
  } ;
struct terminal_info {
     struct interlink_event  event;
     unsigned char name[32];
     unsigned char cwd[256];
     int system_env;
     int length;
     int session_info;
     int magic;
     unsigned char data[1];
     char __pad[3];
  } ;
struct task {
     struct session *ses;
     struct uri *uri;
     enum cache_mode  cache_mode;
     struct session_task  session_task;
  } ;
struct delayed_open {
     struct session *ses;
     struct uri *uri;
     unsigned char *target;
  } ;
struct rgb {
     unsigned char r;
     unsigned char g;
     unsigned char b;
     unsigned char pad;
  } ;
struct rgb_cache_entry {
     int color;
     int level;
     color_T rgb;
  } ;
struct color_mode_info {
     struct rgb *palette;
     struct {
       int bg;
       int fg;
    } palette_range[2];
  } ;
struct itrm_queue {
     unsigned char *data;
     int len;
  } ;
struct itrm_in {
     int std;
     int sock;
     int ctl;
     struct itrm_queue  queue;
  } ;
struct itrm_out {
     int std;
     int sock;
     struct itrm_queue  queue;
  } ;
struct itrm {
     struct itrm_in  in;
     struct itrm_out  out;
     timer_id_T timer;
     struct termios  t;
     void *mouse_h;
     unsigned char *orig_title;
     int verase;
     int title_codepage;
     unsigned int bits_at_116;
  } ;
struct screen_driver_opt {
     int charsets[2];
     unsigned char *frame;
     struct string *frame_seqs;
     struct string *underline;
     enum color_mode  color_mode;
     unsigned int bits_at_24;
  } ;
struct screen_driver {
     struct screen_driver *next;
     struct screen_driver *prev;
     enum term_mode_type  type;
     struct screen_driver_opt  opt;
     unsigned char name[1];
     char __pad[3];
  } ;
struct screen_state {
     unsigned char border;
     unsigned char underline;
     unsigned char bold;
     unsigned char attr;
     unsigned char color[2];
  } ;
struct ewd {
     void (*fn)( void * );
     void *data;
     unsigned int bits_at_8;
  } ;
struct color_spec {
     char *name;
     color_T rgb;
  } ;
struct ff_data {
     void *pointer;
     int keylen;
  } ;
struct ff_node_c {
     unsigned int bits_at_0;
  } ;
struct fastfind_info {
     struct ff_data *data;
     struct ff_node_c **leafsets;
     struct ff_node_c *root_leafset;
     int min_key_len;
     int max_key_len;
     int uniq_chars_count;
     int count;
     int pointers_count;
     int leafsets_count;
     unsigned int bits_at_36;
     int idxtab[128];
     unsigned char uniq_chars[128];
  } ;
struct passwd {
     char *pw_name;
     char *pw_passwd;
     __uid_t pw_uid;
     __gid_t pw_gid;
     char *pw_gecos;
     char *pw_dir;
     char *pw_shell;
  } ;
struct group {
     char *gr_name;
     char *gr_passwd;
     __gid_t gr_gid;
     char **gr_mem;
  } ;
struct __dirstream  ;
struct dirent {
     __ino64_t d_ino;
     __off64_t d_off;
     unsigned short d_reclen;
     unsigned char d_type;
     char d_name[256];
     char __pad[1];
  } ;
struct dump_output {
     size_t bufpos;
     struct string *string;
     int fd;
     unsigned char buf[65536];
  } ;
struct boundary_info {
     int count;
     int *offsets;
     unsigned char string[32];
  } ;
struct search_dlg_hop {
     void *data;
     union option_value  values[1];
  } ;
struct line_info {
     int start;
     int end;
     int last_char_width;
     int bits_at_12;
  } ;
struct form_view {
     struct form_view *next;
     struct form_view *prev;
     int form_num;
  } ;
struct form_state {
     struct form_view *form_view;
     int g_ctrl_num;
     int position;
     enum form_type  type;
     unsigned char *value;
     int state;
     int state_cell;
     int vpos;
     int vypos;
  } ;
struct terminal_screen {
     struct screen_char *image;
     struct screen_char *last_image;
     int cx;
     int cy;
     int lcx;
     int lcy;
     int dirty_from;
     int dirty_to;
  } ;
struct menu {
     struct window *win;
     struct menu_item *items;
     int size;
     int selected;
     int first;
     int last;
     struct box  box;
     int parent_x;
     int parent_y;
     int hotkeys;
     int lang;
     void *data;
  } ;
struct document_refresh {
     timer_id_T timer;
     unsigned long seconds;
     struct uri *uri;
     unsigned int bits_at_12;
  } ;
struct dom_error  ;
struct connect_info {
     struct sockaddr_storage *addr;
     int addrno;
     int triedno;
     socket_connect_T done;
     void *dnsquery;
     int port;
     int ip_family;
     struct uri *uri;
  } ;
struct gss_ctx_id_desc_struct  ;
struct gss_name_desc_struct  ;
struct terminal_interlink {
     int qlen;
     int qfreespace;
     struct {
       unicode_val_T ucs;
       int len;
       unicode_val_T min;
       term_event_modifier_T modifier;
    } utf8;
     unsigned char input_queue[1];
     char __pad[3];
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
unsigned char *dcgettext__( unsigned char *, unsigned char *, int  );
unsigned char *dgettext__( unsigned char *, unsigned char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
