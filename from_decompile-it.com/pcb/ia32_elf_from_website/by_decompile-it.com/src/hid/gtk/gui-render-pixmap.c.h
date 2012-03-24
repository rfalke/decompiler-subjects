#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
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
typedef struct _GdkDrawable GdkPixmap;
typedef struct _GObject GObject;
typedef struct _GTypeInstance GTypeInstance;
typedef struct _GTypeClass GTypeClass;
typedef unsigned int gsize;
typedef gsize GType;
struct _GTypeClass {
     GType g_type;
  } ;
struct _GTypeInstance {
     GTypeClass *g_class;
  } ;
typedef unsigned int guint;
typedef struct _GData GData;
struct _GData  ;
struct _GObject {
     GTypeInstance g_type_instance;
     guint ref_count;
     GData *qdata;
  } ;
struct _GdkDrawable {
     GObject parent_instance;
  } ;
typedef struct _GdkDrawable GdkDrawable;
typedef struct _GdkGC GdkGC;
typedef int gint;
typedef struct _GdkColormap GdkColormap;
typedef struct _GdkColor GdkColor;
typedef unsigned int guint32;
typedef unsigned short guint16;
struct _GdkColor {
     guint32 pixel;
     guint16 red;
     guint16 green;
     guint16 blue;
     char __pad[2];
  } ;
typedef struct _GdkVisual GdkVisual;
enum  { GDK_VISUAL_STATIC_GRAY = 0, GDK_VISUAL_GRAYSCALE = 1, GDK_VISUAL_STATIC_COLOR = 2, GDK_VISUAL_PSEUDO_COLOR = 3, GDK_VISUAL_TRUE_COLOR = 4, GDK_VISUAL_DIRECT_COLOR = 5, };
typedef enum  { GDK_VISUAL_STATIC_GRAY = 0, GDK_VISUAL_GRAYSCALE = 1, GDK_VISUAL_STATIC_COLOR = 2, GDK_VISUAL_PSEUDO_COLOR = 3, GDK_VISUAL_TRUE_COLOR = 4, GDK_VISUAL_DIRECT_COLOR = 5, } GdkVisualType;
enum  { GDK_LSB_FIRST = 0, GDK_MSB_FIRST = 1, };
typedef enum  { GDK_LSB_FIRST = 0, GDK_MSB_FIRST = 1, } GdkByteOrder;
struct _GdkVisual {
     GObject parent_instance;
     GdkVisualType type;
     gint depth;
     GdkByteOrder byte_order;
     gint colormap_size;
     gint bits_per_rgb;
     guint32 red_mask;
     gint red_shift;
     gint red_prec;
     guint32 green_mask;
     gint green_shift;
     gint green_prec;
     guint32 blue_mask;
     gint blue_shift;
     gint blue_prec;
  } ;
typedef void *gpointer;
struct _GdkColormap {
     GObject parent_instance;
     gint size;
     GdkColor *colors;
     GdkVisual *visual;
     gpointer windowing_data;
  } ;
struct _GdkGC {
     GObject parent_instance;
     gint clip_x_origin;
     gint clip_y_origin;
     gint ts_x_origin;
     gint ts_y_origin;
     GdkColormap *colormap;
  } ;
typedef gint gboolean;
typedef struct PCBType *PCBTypePtr;
typedef char Boolean;
typedef int BDimension;
typedef struct {
     LocationType X;
     LocationType Y;
     LocationType X2;
     LocationType Y2;
     long ID;
  } PointType;
struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Thickness;
     BDimension Clearance;
     PointType Point1;
     PointType Point2;
     char *Number;
  } ;
typedef struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Thickness;
     BDimension Clearance;
     PointType Point1;
     PointType Point2;
     char *Number;
  } *LineTypePtr;
typedef struct {
     LineTypePtr Line;
     Boolean Valid;
     Cardinal LineN;
     Cardinal LineMax;
     BDimension Width;
     BDimension Height;
     BDimension Delta;
  } SymbolType;
typedef struct {
     LocationType MaxHeight;
     LocationType MaxWidth;
     BoxType DefaultSymbol;
     SymbolType Symbol[256];
     Boolean Valid;
     char __pad[3];
  } FontType;
typedef struct {
     Cardinal Number[16];
     Cardinal Entries[16][18];
  } LayerGroupType;
typedef struct {
     BDimension Thick;
     BDimension Diameter;
     BDimension Hole;
     BDimension Keepaway;
     char *Name;
     int index;
  } RouteStyleType;
struct {
     char *ListEntry;
     char *AllocatedMemory;
     char *Template;
     char *Package;
     char *Value;
     char *Description;
  } ;
typedef struct {
     char *ListEntry;
     char *AllocatedMemory;
     char *Template;
     char *Package;
     char *Value;
     char *Description;
  } *LibraryEntryTypePtr;
struct {
     char *Name;
     char *directory;
     char *Style;
     Cardinal EntryN;
     Cardinal EntryMax;
     LibraryEntryTypePtr Entry;
     char flag;
     char internal;
     char __pad[2];
  } ;
typedef struct {
     char *Name;
     char *directory;
     char *Style;
     Cardinal EntryN;
     Cardinal EntryMax;
     LibraryEntryTypePtr Entry;
     char flag;
     char internal;
     char __pad[2];
  } *LibraryMenuTypePtr;
typedef struct {
     Cardinal MenuN;
     Cardinal MenuMax;
     LibraryMenuTypePtr Menu;
  } LibraryType;
typedef struct {
     char *name;
     char *value;
  } AttributeType;
typedef struct {
     int Number;
     int Max;
     AttributeType *List;
  } AttributeListType;
struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Thickness;
     BDimension Clearance;
     BDimension Mask;
     BDimension DrillingHole;
     LocationType X;
     LocationType Y;
     char *Name;
     char *Number;
     void *Element;
     void *Spare;
  } ;
typedef struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Thickness;
     BDimension Clearance;
     BDimension Mask;
     BDimension DrillingHole;
     LocationType X;
     LocationType Y;
     char *Name;
     char *Number;
     void *Element;
     void *Spare;
  } *PinTypePtr;
typedef unsigned char BYTE;
typedef struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Scale;
     LocationType X;
     LocationType Y;
     BYTE Direction;
     char *TextString;
     void *Element;
  } TextType;
struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Thickness;
     BDimension Clearance;
     BDimension Mask;
     BDimension DrillingHole;
     LocationType X;
     LocationType Y;
     char *Name;
     char *Number;
     void *Element;
     void *Spare;
  } ;
struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Thickness;
     BDimension Clearance;
     PointType Point1;
     PointType Point2;
     BDimension Mask;
     char *Name;
     char *Number;
     void *Element;
     void *Spare;
  } ;
typedef struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Thickness;
     BDimension Clearance;
     PointType Point1;
     PointType Point2;
     BDimension Mask;
     char *Name;
     char *Number;
     void *Element;
     void *Spare;
  } *PadTypePtr;
struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Thickness;
     BDimension Clearance;
     PointType Point1;
     PointType Point2;
     char *Number;
  } ;
struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Thickness;
     BDimension Clearance;
     LocationType Width;
     LocationType Height;
     LocationType X;
     LocationType Y;
     long StartAngle;
     long Delta;
  } ;
typedef struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Thickness;
     BDimension Clearance;
     LocationType Width;
     LocationType Height;
     LocationType X;
     LocationType Y;
     long StartAngle;
     long Delta;
  } *ArcTypePtr;
struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     TextType Name[3];
     LocationType MarkX;
     LocationType MarkY;
     Cardinal PinN;
     Cardinal PinMax;
     Cardinal PadN;
     Cardinal PadMax;
     Cardinal LineN;
     Cardinal LineMax;
     Cardinal ArcN;
     Cardinal ArcMax;
     PinTypePtr Pin;
     PadTypePtr Pad;
     LineTypePtr Line;
     ArcTypePtr Arc;
     BoxType VBox;
     AttributeListType Attributes;
  } ;
typedef struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     TextType Name[3];
     LocationType MarkX;
     LocationType MarkY;
     Cardinal PinN;
     Cardinal PinMax;
     Cardinal PadN;
     Cardinal PadMax;
     Cardinal LineN;
     Cardinal LineMax;
     Cardinal ArcN;
     Cardinal ArcMax;
     PinTypePtr Pin;
     PadTypePtr Pad;
     LineTypePtr Line;
     ArcTypePtr Arc;
     BoxType VBox;
     AttributeListType Attributes;
  } *ElementTypePtr;
struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Thickness;
     BDimension Clearance;
     PointType Point1;
     PointType Point2;
     Cardinal group1;
     Cardinal group2;
  } ;
typedef struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Thickness;
     BDimension Clearance;
     PointType Point1;
     PointType Point2;
     Cardinal group1;
     Cardinal group2;
  } *RatTypePtr;
struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Thickness;
     BDimension Clearance;
     PointType Point1;
     PointType Point2;
     char *Number;
  } ;
struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Scale;
     LocationType X;
     LocationType Y;
     BYTE Direction;
     char *TextString;
     void *Element;
  } ;
typedef struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Scale;
     LocationType X;
     LocationType Y;
     BYTE Direction;
     char *TextString;
     void *Element;
  } *TextTypePtr;
typedef struct polygon_st *PolygonTypePtr;
struct {
     BoxType BoundingBox;
     long ID;
     FlagType Flags;
     struct LibraryEntryType *net;
     BDimension Thickness;
     BDimension Clearance;
     LocationType Width;
     LocationType Height;
     LocationType X;
     LocationType Y;
     long StartAngle;
     long Delta;
  } ;
typedef struct {
     char *Name;
     Cardinal LineN;
     Cardinal TextN;
     Cardinal PolygonN;
     Cardinal ArcN;
     Cardinal LineMax;
     Cardinal TextMax;
     Cardinal PolygonMax;
     Cardinal ArcMax;
     LineTypePtr Line;
     TextTypePtr Text;
     PolygonTypePtr Polygon;
     ArcTypePtr Arc;
     rtree_t *line_tree;
     rtree_t *text_tree;
     rtree_t *polygon_tree;
     rtree_t *arc_tree;
     Boolean On;
     char *Color;
     char *SelectedColor;
     AttributeListType Attributes;
  } LayerType;
struct {
     Cardinal ViaN;
     Cardinal ViaMax;
     Cardinal ElementN;
     Cardinal ElementMax;
     Cardinal RatN;
     Cardinal RatMax;
     int LayerN;
     PinTypePtr Via;
     ElementTypePtr Element;
     RatTypePtr Rat;
     rtree_t *via_tree;
     rtree_t *element_tree;
     rtree_t *pin_tree;
     rtree_t *pad_tree;
     rtree_t *name_tree[3];
     rtree_t *rat_tree;
     struct PCBType *pcb;
     LayerType Layer[18];
  } ;
typedef struct {
     Cardinal ViaN;
     Cardinal ViaMax;
     Cardinal ElementN;
     Cardinal ElementMax;
     Cardinal RatN;
     Cardinal RatMax;
     int LayerN;
     PinTypePtr Via;
     ElementTypePtr Element;
     RatTypePtr Rat;
     rtree_t *via_tree;
     rtree_t *element_tree;
     rtree_t *pin_tree;
     rtree_t *pad_tree;
     rtree_t *name_tree[3];
     rtree_t *rat_tree;
     struct PCBType *pcb;
     LayerType Layer[18];
  } *DataTypePtr;
struct PCBType {
     long ID;
     FlagType Flags;
     char *Name;
     char *Filename;
     char *PrintFilename;
     char *Netlistname;
     char ThermStyle;
     Boolean Changed;
     Boolean ViaOn;
     Boolean ElementOn;
     Boolean RatOn;
     Boolean InvisibleObjectsOn;
     Boolean PinOn;
     Boolean SilkActive;
     Boolean RatDraw;
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
     char *WarnColor;
     char *MaskColor;
     long CursorX;
     long CursorY;
     long Clipping;
     int Bloat;
     int Shrink;
     int minWid;
     int minSlk;
     int minDrill;
     int minRing;
     int GridOffsetX;
     int GridOffsetY;
     int MaxWidth;
     int MaxHeight;
     double Grid;
     double Zoom;
     double IsleArea;
     double ThermScale;
     FontType Font;
     LayerGroupType LayerGroups;
     RouteStyleType RouteStyle[4];
     LibraryType NetlistLib;
     AttributeListType Attributes;
     DataTypePtr Data;
  } ;
enum  { Trace_Cap = 0, Square_Cap = 1, Round_Cap = 2, Beveled_Cap = 3, };
typedef char gchar;
struct hid_gc_struct {
     HID *me_pointer;
     GdkGC *gc;
     gchar *colorname;
     gint width;
     gint cap;
     gint join;
     gchar xor;
     gchar erase;
     gint mask_seq;
  } ;
enum  { Trace_Cap = 0, Square_Cap = 1, Round_Cap = 2, Beveled_Cap = 3, };
typedef struct _GtkWidget GtkWidget;
typedef struct _GtkObject GtkObject;
typedef struct _GObject GInitiallyUnowned;
struct _GtkObject {
     GInitiallyUnowned parent_instance;
     guint32 flags;
  } ;
typedef unsigned char guint8;
typedef struct _GtkStyle GtkStyle;
typedef struct _PangoFontDescription PangoFontDescription;
struct _PangoFontDescription  ;
typedef struct _GdkFont GdkFont;
enum  { GDK_FONT_FONT = 0, GDK_FONT_FONTSET = 1, };
typedef enum  { GDK_FONT_FONT = 0, GDK_FONT_FONTSET = 1, } GdkFontType;
struct _GdkFont {
     GdkFontType type;
     gint ascent;
     gint descent;
  } ;
typedef struct _GtkRcStyle GtkRcStyle;
enum  { GTK_RC_FG = 1, GTK_RC_BG = 2, GTK_RC_TEXT = 4, GTK_RC_BASE = 8, };
typedef enum  { GTK_RC_FG = 1, GTK_RC_BG = 2, GTK_RC_TEXT = 4, GTK_RC_BASE = 8, } GtkRcFlags;
typedef struct _GArray GArray;
struct _GArray {
     gchar *data;
     guint len;
  } ;
typedef struct _GSList GSList;
struct _GSList {
     gpointer data;
     GSList *next;
  } ;
struct _GtkRcStyle {
     GObject parent_instance;
     gchar *name;
     gchar *bg_pixmap_name[5];
     PangoFontDescription *font_desc;
     GtkRcFlags color_flags[5];
     GdkColor fg[5];
     GdkColor bg[5];
     GdkColor text[5];
     GdkColor base[5];
     gint xthickness;
     gint ythickness;
     GArray *rc_properties;
     GSList *rc_style_lists;
     GSList *icon_factories;
     guint bits_at_320;
  } ;
struct _GtkStyle {
     GObject parent_instance;
     GdkColor fg[5];
     GdkColor bg[5];
     GdkColor light[5];
     GdkColor dark[5];
     GdkColor mid[5];
     GdkColor text[5];
     GdkColor base[5];
     GdkColor text_aa[5];
     GdkColor black;
     GdkColor white;
     PangoFontDescription *font_desc;
     gint xthickness;
     gint ythickness;
     GdkGC *fg_gc[5];
     GdkGC *bg_gc[5];
     GdkGC *light_gc[5];
     GdkGC *dark_gc[5];
     GdkGC *mid_gc[5];
     GdkGC *text_gc[5];
     GdkGC *base_gc[5];
     GdkGC *text_aa_gc[5];
     GdkGC *black_gc;
     GdkGC *white_gc;
     GdkPixmap *bg_pixmap[5];
     gint attach_count;
     gint depth;
     GdkColormap *colormap;
     GdkFont *private_font;
     PangoFontDescription *private_font_desc;
     GtkRcStyle *rc_style;
     GSList *styles;
     GArray *property_cache;
     GSList *icon_factories;
  } ;
typedef struct _GtkRequisition GtkRequisition;
struct _GtkRequisition {
     gint width;
     gint height;
  } ;
typedef struct _GdkRectangle GdkRectangle;
struct _GdkRectangle {
     gint x;
     gint y;
     gint width;
     gint height;
  } ;
typedef GdkRectangle GtkAllocation;
typedef struct _GdkDrawable GdkWindow;
struct _GtkWidget {
     GtkObject object;
     guint16 private_flags;
     guint8 state;
     guint8 saved_state;
     gchar *name;
     GtkStyle *style;
     GtkRequisition requisition;
     GtkAllocation allocation;
     GdkWindow *window;
     GtkWidget *parent;
  } ;
typedef struct _GdkCursor GdkCursor;
enum  { GDK_X_CURSOR = 0, GDK_ARROW = 2, GDK_BASED_ARROW_DOWN = 4, GDK_BASED_ARROW_UP = 6, GDK_BOAT = 8, GDK_BOGOSITY = 10, GDK_BOTTOM_LEFT_CORNER = 12, GDK_BOTTOM_RIGHT_CORNER = 14, GDK_BOTTOM_SIDE = 16, GDK_BOTTOM_TEE = 18, GDK_BOX_SPIRAL = 20, GDK_CENTER_PTR = 22, GDK_CIRCLE = 24, GDK_CLOCK = 26, GDK_COFFEE_MUG = 28, GDK_CROSS = 30, GDK_CROSS_REVERSE = 32, GDK_CROSSHAIR = 34, GDK_DIAMOND_CROSS = 36, GDK_DOT = 38, GDK_DOTBOX = 40, GDK_DOUBLE_ARROW = 42, GDK_DRAFT_LARGE = 44, GDK_DRAFT_SMALL = 46, GDK_DRAPED_BOX = 48, GDK_EXCHANGE = 50, GDK_FLEUR = 52, GDK_GOBBLER = 54, GDK_GUMBY = 56, GDK_HAND1 = 58, GDK_HAND2 = 60, GDK_HEART = 62, GDK_ICON = 64, GDK_IRON_CROSS = 66, GDK_LEFT_PTR = 68, GDK_LEFT_SIDE = 70, GDK_LEFT_TEE = 72, GDK_LEFTBUTTON = 74, GDK_LL_ANGLE = 76, GDK_LR_ANGLE = 78, GDK_MAN = 80, GDK_MIDDLEBUTTON = 82, GDK_MOUSE = 84, GDK_PENCIL = 86, GDK_PIRATE = 88, GDK_PLUS = 90, GDK_QUESTION_ARROW = 92, GDK_RIGHT_PTR = 94, GDK_RIGHT_SIDE = 96, GDK_RIGHT_TEE = 98, GDK_RIGHTBUTTON = 100, GDK_RTL_LOGO = 102, GDK_SAILBOAT = 104, GDK_SB_DOWN_ARROW = 106, GDK_SB_H_DOUBLE_ARROW = 108, GDK_SB_LEFT_ARROW = 110, GDK_SB_RIGHT_ARROW = 112, GDK_SB_UP_ARROW = 114, GDK_SB_V_DOUBLE_ARROW = 116, GDK_SHUTTLE = 118, GDK_SIZING = 120, GDK_SPIDER = 122, GDK_SPRAYCAN = 124, GDK_STAR = 126, GDK_TARGET = 128, GDK_TCROSS = 130, GDK_TOP_LEFT_ARROW = 132, GDK_TOP_LEFT_CORNER = 134, GDK_TOP_RIGHT_CORNER = 136, GDK_TOP_SIDE = 138, GDK_TOP_TEE = 140, GDK_TREK = 142, GDK_UL_ANGLE = 144, GDK_UMBRELLA = 146, GDK_UR_ANGLE = 148, GDK_WATCH = 150, GDK_XTERM = 152, GDK_LAST_CURSOR = 153, GDK_BLANK_CURSOR = -2, GDK_CURSOR_IS_PIXMAP = -1, };
typedef enum  { GDK_X_CURSOR = 0, GDK_ARROW = 2, GDK_BASED_ARROW_DOWN = 4, GDK_BASED_ARROW_UP = 6, GDK_BOAT = 8, GDK_BOGOSITY = 10, GDK_BOTTOM_LEFT_CORNER = 12, GDK_BOTTOM_RIGHT_CORNER = 14, GDK_BOTTOM_SIDE = 16, GDK_BOTTOM_TEE = 18, GDK_BOX_SPIRAL = 20, GDK_CENTER_PTR = 22, GDK_CIRCLE = 24, GDK_CLOCK = 26, GDK_COFFEE_MUG = 28, GDK_CROSS = 30, GDK_CROSS_REVERSE = 32, GDK_CROSSHAIR = 34, GDK_DIAMOND_CROSS = 36, GDK_DOT = 38, GDK_DOTBOX = 40, GDK_DOUBLE_ARROW = 42, GDK_DRAFT_LARGE = 44, GDK_DRAFT_SMALL = 46, GDK_DRAPED_BOX = 48, GDK_EXCHANGE = 50, GDK_FLEUR = 52, GDK_GOBBLER = 54, GDK_GUMBY = 56, GDK_HAND1 = 58, GDK_HAND2 = 60, GDK_HEART = 62, GDK_ICON = 64, GDK_IRON_CROSS = 66, GDK_LEFT_PTR = 68, GDK_LEFT_SIDE = 70, GDK_LEFT_TEE = 72, GDK_LEFTBUTTON = 74, GDK_LL_ANGLE = 76, GDK_LR_ANGLE = 78, GDK_MAN = 80, GDK_MIDDLEBUTTON = 82, GDK_MOUSE = 84, GDK_PENCIL = 86, GDK_PIRATE = 88, GDK_PLUS = 90, GDK_QUESTION_ARROW = 92, GDK_RIGHT_PTR = 94, GDK_RIGHT_SIDE = 96, GDK_RIGHT_TEE = 98, GDK_RIGHTBUTTON = 100, GDK_RTL_LOGO = 102, GDK_SAILBOAT = 104, GDK_SB_DOWN_ARROW = 106, GDK_SB_H_DOUBLE_ARROW = 108, GDK_SB_LEFT_ARROW = 110, GDK_SB_RIGHT_ARROW = 112, GDK_SB_UP_ARROW = 114, GDK_SB_V_DOUBLE_ARROW = 116, GDK_SHUTTLE = 118, GDK_SIZING = 120, GDK_SPIDER = 122, GDK_SPRAYCAN = 124, GDK_STAR = 126, GDK_TARGET = 128, GDK_TCROSS = 130, GDK_TOP_LEFT_ARROW = 132, GDK_TOP_LEFT_CORNER = 134, GDK_TOP_RIGHT_CORNER = 136, GDK_TOP_SIDE = 138, GDK_TOP_TEE = 140, GDK_TREK = 142, GDK_UL_ANGLE = 144, GDK_UMBRELLA = 146, GDK_UR_ANGLE = 148, GDK_WATCH = 150, GDK_XTERM = 152, GDK_LAST_CURSOR = 153, GDK_BLANK_CURSOR = -2, GDK_CURSOR_IS_PIXMAP = -1, } GdkCursorType;
struct _GdkCursor {
     GdkCursorType type;
     guint ref_count;
  } ;
enum  { GDK_X_CURSOR = 0, GDK_ARROW = 2, GDK_BASED_ARROW_DOWN = 4, GDK_BASED_ARROW_UP = 6, GDK_BOAT = 8, GDK_BOGOSITY = 10, GDK_BOTTOM_LEFT_CORNER = 12, GDK_BOTTOM_RIGHT_CORNER = 14, GDK_BOTTOM_SIDE = 16, GDK_BOTTOM_TEE = 18, GDK_BOX_SPIRAL = 20, GDK_CENTER_PTR = 22, GDK_CIRCLE = 24, GDK_CLOCK = 26, GDK_COFFEE_MUG = 28, GDK_CROSS = 30, GDK_CROSS_REVERSE = 32, GDK_CROSSHAIR = 34, GDK_DIAMOND_CROSS = 36, GDK_DOT = 38, GDK_DOTBOX = 40, GDK_DOUBLE_ARROW = 42, GDK_DRAFT_LARGE = 44, GDK_DRAFT_SMALL = 46, GDK_DRAPED_BOX = 48, GDK_EXCHANGE = 50, GDK_FLEUR = 52, GDK_GOBBLER = 54, GDK_GUMBY = 56, GDK_HAND1 = 58, GDK_HAND2 = 60, GDK_HEART = 62, GDK_ICON = 64, GDK_IRON_CROSS = 66, GDK_LEFT_PTR = 68, GDK_LEFT_SIDE = 70, GDK_LEFT_TEE = 72, GDK_LEFTBUTTON = 74, GDK_LL_ANGLE = 76, GDK_LR_ANGLE = 78, GDK_MAN = 80, GDK_MIDDLEBUTTON = 82, GDK_MOUSE = 84, GDK_PENCIL = 86, GDK_PIRATE = 88, GDK_PLUS = 90, GDK_QUESTION_ARROW = 92, GDK_RIGHT_PTR = 94, GDK_RIGHT_SIDE = 96, GDK_RIGHT_TEE = 98, GDK_RIGHTBUTTON = 100, GDK_RTL_LOGO = 102, GDK_SAILBOAT = 104, GDK_SB_DOWN_ARROW = 106, GDK_SB_H_DOUBLE_ARROW = 108, GDK_SB_LEFT_ARROW = 110, GDK_SB_RIGHT_ARROW = 112, GDK_SB_UP_ARROW = 114, GDK_SB_V_DOUBLE_ARROW = 116, GDK_SHUTTLE = 118, GDK_SIZING = 120, GDK_SPIDER = 122, GDK_SPRAYCAN = 124, GDK_STAR = 126, GDK_TARGET = 128, GDK_TCROSS = 130, GDK_TOP_LEFT_ARROW = 132, GDK_TOP_LEFT_CORNER = 134, GDK_TOP_RIGHT_CORNER = 136, GDK_TOP_SIDE = 138, GDK_TOP_TEE = 140, GDK_TREK = 142, GDK_UL_ANGLE = 144, GDK_UMBRELLA = 146, GDK_UR_ANGLE = 148, GDK_WATCH = 150, GDK_XTERM = 152, GDK_LAST_CURSOR = 153, GDK_BLANK_CURSOR = -2, GDK_CURSOR_IS_PIXMAP = -1, };
typedef double gdouble;
typedef struct {
     GtkWidget *top_window;
     GtkWidget *drawing_area;
     GdkPixmap *pixmap;
     GdkPixmap *mask;
     GdkDrawable *drawable;
     gint width;
     gint height;
     GdkGC *bg_gc;
     GdkGC *offlimits_gc;
     GdkGC *mask_gc;
     GdkGC *u_gc;
     GdkGC *grid_gc;
     GdkColor bg_color;
     GdkColor offlimits_color;
     GdkColor grid_color;
     GdkColormap *colormap;
     GdkCursor *X_cursor;
     GdkCursorType X_cursor_shape;
     gboolean has_entered;
     gboolean panning;
     gdouble zoom;
     gint view_x0;
     gint view_y0;
     gint view_width;
     gint view_height;
     gint view_x;
     gint view_y;
     gint x_crosshair;
     gint y_crosshair;
  } GHidPort;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void hid_expose_callback( HID *, BoxType *, void * );
GdkPixmap *ghid_render_pixmap( int , int , double , int , int , int  );
void gdk_draw_rectangle( GdkDrawable *, GdkGC *, gboolean , gint , gint , gint , gint  );
GdkPixmap *gdk_pixmap_new( GdkDrawable *, gint , gint , gint  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern PCBTypePtr PCB;
extern int ghid_flip_x;
extern int ghid_flip_y;
extern HID ghid_hid;
extern GHidPort *gport;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
