#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct DBusConnection DBusConnection;
struct DBusConnection  ;
enum  { DBUS_DISPATCH_DATA_REMAINS = 0, DBUS_DISPATCH_COMPLETE = 1, DBUS_DISPATCH_NEED_MEMORY = 2, };
typedef enum  { DBUS_DISPATCH_DATA_REMAINS = 0, DBUS_DISPATCH_COMPLETE = 1, DBUS_DISPATCH_NEED_MEMORY = 2, } DBusDispatchStatus;
typedef union {
     long lval;
     void *ptr;
  } hidval;
typedef struct DBusTimeout DBusTimeout;
struct DBusTimeout  ;
typedef unsigned int dbus_uint32_t;
typedef dbus_uint32_t dbus_bool_t;
typedef struct DBusWatch DBusWatch;
struct DBusWatch  ;
enum  { DBUS_DISPATCH_DATA_REMAINS = 0, DBUS_DISPATCH_COMPLETE = 1, DBUS_DISPATCH_NEED_MEMORY = 2, };
enum  { DBUS_DISPATCH_DATA_REMAINS = 0, DBUS_DISPATCH_COMPLETE = 1, DBUS_DISPATCH_NEED_MEMORY = 2, };
struct _IO_marker {
     struct _IO_marker *_next;
     struct _IO_FILE *_sbuf;
     int _pos;
  } ;
typedef long __off_t;
typedef void _IO_lock_t;
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef unsigned int size_t;
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
typedef struct {
     int int_value;
     char *str_value;
     double real_value;
  } HID_Attr_Val;
typedef struct {
     char *name;
     char *help_text;
     enum  { HID_Label = 0, HID_Integer = 1, HID_Real = 2, HID_String = 3, HID_Boolean = 4, HID_Enum = 5, HID_Mixed = 6, HID_Path = 7, } type;
     int min_val;
     int max_val;
     HID_Attr_Val default_val;
     char **enumerations;
     void *value;
     int hash;
  } HID_Attribute;
typedef struct hid_gc_struct *hidGC;
enum  { Trace_Cap = 0, Square_Cap = 1, Round_Cap = 2, Beveled_Cap = 3, };
typedef enum  { Trace_Cap = 0, Square_Cap = 1, Round_Cap = 2, Beveled_Cap = 3, } EndCapStyle;
typedef struct polygon_st PolygonType;
typedef struct BoxType BoxType;
typedef int LocationType;
struct BoxType {
     LocationType X1;
     LocationType Y1;
     LocationType X2;
     LocationType Y2;
  } ;
typedef struct {
     unsigned long f;
     unsigned char t[8];
  } FlagType;
typedef unsigned int Cardinal;
typedef struct POLYAREA POLYAREA;
typedef struct PLINE PLINE;
typedef struct VNODE VNODE;
struct {
     unsigned int bits_at_0;
  } ;
typedef struct CVCList CVCList;
struct CVCList {
     double angle;
     VNODE *parent;
     CVCList *prev;
     CVCList *next;
     CVCList *head;
     char poly;
     char side;
     char __pad[2];
  } ;
typedef int vertex[2];
typedef vertex Vector;
struct VNODE {
     VNODE *next;
     VNODE *prev;
     VNODE *shared;
     struct {
       unsigned int bits_at_0;
    } Flags;
     CVCList *cvc_prev;
     CVCList *cvc_next;
     Vector point;
  } ;
typedef struct rtree rtree_t;
struct rtree {
     struct rtree_node *root;
     int size;
  } ;
struct {
     unsigned int bits_at_0;
  } ;
struct PLINE {
     int xmin;
     int ymin;
     int xmax;
     int ymax;
     PLINE *next;
     VNODE head;
     unsigned int Count;
     double area;
     rtree_t *tree;
     struct {
       unsigned int bits_at_0;
    } Flags;
  } ;
struct POLYAREA {
     POLYAREA *f;
     POLYAREA *b;
     PLINE *contours;
  } ;
struct {
     LocationType X;
     LocationType Y;
     LocationType X2;
     LocationType Y2;
     long ID;
  } ;
typedef struct {
     LocationType X;
     LocationType Y;
     LocationType X2;
     LocationType Y2;
     long ID;
  } *PointTypePtr;
struct polygon_st {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     Cardinal PointN;
     Cardinal PointMax;
     POLYAREA *Clipped;
     PLINE *NoHoles;
     int NoHolesValid;
     PointTypePtr Points;
  } ;
typedef char *__gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef struct drc_violation_st DrcViolationType;
struct drc_violation_st {
     char *title;
     char *explanation;
     int x;
     int y;
     int angle;
     int have_measured;
     double measured_value;
     double required_value;
     int value_digits;
     char *value_units;
     int object_count;
     long *object_id_list;
     int *object_type_list;
  } ;
typedef struct {
     int log_drc_overview;
     int log_drc_violations;
     void (*reset_drc_dialog_message)( void );
     void (*append_drc_violation)( DrcViolationType * );
     int (*throw_drc_dialog)( void );
  } HID_DRC_GUI;
typedef struct {
     int struct_size;
     char *name;
     char *description;
     char bits_at_12;
     HID_Attribute *(*get_export_options)( int * );
     void (*do_export)( HID_Attr_Val * );
     void (*parse_arguments)( int *, char *** );
     void (*invalidate_wh)( int , int , int , int , int  );
     void (*invalidate_lr)( int , int , int , int , int  );
     void (*invalidate_all)( void );
     int (*set_layer)( char *, int , int  );
     hidGC (*make_gc)( void );
     void (*destroy_gc)( hidGC  );
     void (*use_mask)( int  );
     void (*set_color)( hidGC , char * );
     void (*set_line_cap)( hidGC , EndCapStyle  );
     void (*set_line_width)( hidGC , int  );
     void (*set_draw_xor)( hidGC , int  );
     void (*set_draw_faded)( hidGC , int  );
     void (*set_line_cap_angle)( hidGC , int , int , int , int  );
     void (*draw_line)( hidGC , int , int , int , int  );
     void (*draw_arc)( hidGC , int , int , int , int , int , int  );
     void (*draw_rect)( hidGC , int , int , int , int  );
     void (*fill_circle)( hidGC , int , int , int  );
     void (*fill_polygon)( hidGC , int , int *, int * );
     void (*fill_pcb_polygon)( hidGC , PolygonType *, BoxType * );
     void (*thindraw_pcb_polygon)( hidGC , PolygonType *, BoxType * );
     void (*fill_rect)( hidGC , int , int , int , int  );
     void (*calibrate)( double , double  );
     int (*shift_is_pressed)( void );
     int (*control_is_pressed)( void );
     int (*mod1_is_pressed)( void );
     void (*get_coords)( char *, int *, int * );
     void (*set_crosshair)( int , int , int  );
     hidval (*add_timer)( void (*)( hidval  ), unsigned long , hidval  );
     void (*stop_timer)( hidval  );
     hidval (*watch_file)( int , unsigned int , void (*)( hidval , int , unsigned int , hidval  ), hidval  );
     void (*unwatch_file)( hidval  );
     hidval (*add_block_hook)( void (*)( hidval  ), hidval  );
     void (*stop_block_hook)( hidval  );
     void (*log)( char * );
     void (*logv)( char *, va_list  );
     int (*confirm_dialog)( char * );
     int (*close_confirm_dialog)( void );
     void (*report_dialog)( char *, char * );
     char *(*prompt_for)( char *, char * );
     char *(*fileselect)( char *, char *, char *, char *, char *, int  );
     int (*attribute_dialog)( HID_Attribute *, int , HID_Attr_Val *, char *, char * );
     void (*show_item)( void * );
     void (*beep)( void );
     int (*progress)( int , int , char * );
     HID_DRC_GUI *drc_gui;
  } HID;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void dispatch_status_changed( DBusConnection *, DBusDispatchStatus , void * );
void pcb_dbus_connection_finish_with_mainloop( DBusConnection * );
void pcb_dbus_connection_setup_with_mainloop( DBusConnection * );
void block_hook_cb( hidval  );
void timeout_remove( DBusTimeout *, void * );
dbus_bool_t timeout_add( DBusTimeout *, void * );
void timeout_toggled( DBusTimeout *, void * );
void timeout_handler_dbus_freed( void * );
void io_watch_handler_dbus_freed( void * );
void watch_remove( DBusWatch *, void * );
dbus_bool_t watch_add( DBusWatch *, void * );
void watch_toggled( DBusWatch *, void * );
void timeout_handler_cb( hidval  );
void io_watch_handler_cb( hidval , int , unsigned int , hidval  );
int __fprintf_chk( void *, int , char *, ... );
void dbus_watch_set_data( DBusWatch *, void *, void * );
dbus_bool_t dbus_watch_get_enabled( DBusWatch * );
int dbus_watch_get_unix_fd( DBusWatch * );
unsigned int dbus_watch_get_flags( DBusWatch * );
void dbus_connection_set_dispatch_status_function( DBusConnection *, void *, void *, void * );
void free( void * );
dbus_bool_t dbus_timeout_handle( DBusTimeout * );
dbus_bool_t dbus_connection_set_watch_functions( DBusConnection *, void *, void *, void *, void *, void * );
DBusDispatchStatus dbus_connection_get_dispatch_status( DBusConnection * );
DBusDispatchStatus dbus_connection_dispatch( DBusConnection * );
void *malloc( unsigned int  );
dbus_bool_t dbus_connection_set_timeout_functions( DBusConnection *, void *, void *, void *, void *, void * );
dbus_bool_t dbus_watch_handle( DBusWatch *, unsigned int  );
dbus_bool_t dbus_timeout_get_enabled( DBusTimeout * );
void dbus_timeout_set_data( DBusTimeout *, void *, void * );
int dbus_timeout_get_interval( DBusTimeout * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stderr;
extern HID *gui;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
