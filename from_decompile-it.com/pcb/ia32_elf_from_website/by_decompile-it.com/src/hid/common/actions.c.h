#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct {
     char *name;
     char *need_coord_msg;
     int (*trigger_cb)( int , char **, int , int  );
     char *description;
     char *syntax;
  } HID_Action;
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
typedef char Boolean;
typedef int LocationType;
typedef int BDimension;
typedef struct {
     BDimension Thick;
     BDimension Diameter;
     BDimension Hole;
     BDimension Keepaway;
     char *Name;
     int index;
  } RouteStyleType;
typedef unsigned int Cardinal;
typedef struct {
     Cardinal Number[16];
     Cardinal Entries[16][18];
  } LayerGroupType;
typedef struct {
     Boolean grid_units_mm;
     int verbose;
     char *BlackColor;
     char *WhiteColor;
     char *BackgroundColor;
     char *CrosshairColor;
     char *CrossColor;
     char *ViaColor;
     char *ViaSelectedColor;
     char *PinColor;
     char *PinSelectedColor;
     char *PinNameColor;
     char *ElementColor;
     char *RatColor;
     char *InvisibleObjectsColor;
     char *InvisibleMarkColor;
     char *ElementSelectedColor;
     char *RatSelectedColor;
     char *ConnectedColor;
     char *OffLimitColor;
     char *GridColor;
     char *LayerColor[16];
     char *LayerSelectedColor[16];
     char *WarnColor;
     char *MaskColor;
     int ViaThickness;
     int ViaDrillingHole;
     int LineThickness;
     int RatThickness;
     int Keepaway;
     int MaxWidth;
     int MaxHeight;
     int TextScale;
     int AlignmentDistance;
     int Bloat;
     int Shrink;
     int minWid;
     int minSlk;
     int minDrill;
     int minRing;
     double Grid;
     double IsleArea;
     double grid_increment_mm;
     double grid_increment_mil;
     double size_increment_mm;
     double size_increment_mil;
     double line_increment_mm;
     double line_increment_mil;
     double clear_increment_mm;
     double clear_increment_mil;
     double Zoom;
     double PinoutZoom;
     int PinoutNameLength;
     int Volume;
     int CharPerLine;
     int Mode;
     int BufferNumber;
     int GridFactor;
     int BackupInterval;
     char *DefaultLayerName[16];
     char *FontCommand;
     char *FileCommand;
     char *ElementCommand;
     char *PrintFile;
     char *LibraryCommandDir;
     char *LibraryCommand;
     char *LibraryContentsCommand;
     char *LibraryTree;
     char *SaveCommand;
     char *LibraryFilename;
     char *FontFile;
     char *Groups;
     char *Routes;
     char *FilePath;
     char *RatPath;
     char *RatCommand;
     char *FontPath;
     char *PinoutFont;
     char *ElementPath;
     char *LibraryPath;
     char *Size;
     char *Media;
     char *MenuFile;
     char *BackgroundImage;
     char *ScriptFilename;
     char *ActionString;
     char *FabAuthor;
     char *InitialLayerStack;
     Boolean DumpMenuFile;
     LocationType PinoutOffsetX;
     LocationType PinoutOffsetY;
     int PinoutTextOffsetX;
     int PinoutTextOffsetY;
     RouteStyleType RouteStyle[4];
     LayerGroupType LayerGroups;
     Boolean ClearLine;
     Boolean FullPoly;
     Boolean UniqueNames;
     Boolean SnapPin;
     Boolean ShowSolderSide;
     Boolean SaveLastCommand;
     Boolean SaveInTMP;
     Boolean DrawGrid;
     Boolean RatWarn;
     Boolean StipplePolygons;
     Boolean AllDirectionLines;
     Boolean RubberBandMode;
     Boolean SwapStartDirection;
     Boolean ShowDRC;
     Boolean AutoDRC;
     Boolean ShowNumber;
     Boolean OrthogonalMoves;
     Boolean ResetAfterElement;
     Boolean liveRouting;
     Boolean RingBellWhenFinished;
     Boolean AutoPlace;
     int HistorySize;
     int init_done;
  } SettingType;
typedef struct HID_ActionContext HID_ActionContext;
struct HID_ActionContext {
     HID_Action action;
     void *context;
  } ;
typedef struct HID_ActionNode HID_ActionNode;
struct HID_ActionNode {
     struct HID_ActionNode *next;
     HID_Action *actions;
     int n;
     void *context;
     int dynamic;
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
typedef union {
     long lval;
     void *ptr;
  } hidval;
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
int hid_parse_actions( char *, int (*)( char *, int , char ** ) );
void dump_string( char , char * );
int action_sort( void *, void * );
void hid_deregister_action( char *, void ** );
HID_Action *hid_find_action( char *, void ** );
int hid_actionv( char *, int , char ** );
int hid_actionl( char *, ... );
int hid_action( char * );
void dump_actions( void );
void print_actions( void );
void hid_register_actions_context( HID_Action *, int , void *, int  );
void qsort( void *, unsigned int , unsigned int , void * );
int __fprintf_chk( void *, int , char *, ... );
void *realloc( void *, unsigned int  );
int __printf_chk( int , char *, ... );
void free( void * );
short **__ctype_b_loc( void );
unsigned int strlen( char * );
int strcasecmp( char *, char * );
unsigned int fwrite( void *, unsigned int , unsigned int , void * );
void *malloc( unsigned int  );
int fputc( int , void * );
int _IO_putc( char , void * );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern struct _IO_FILE  *stderr;
extern SettingType Settings;
extern void *hid_action_context;
extern HID_ActionNode *hid_action_nodes;
extern HID *gui;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
