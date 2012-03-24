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
enum  { Trace_Cap = 0, Square_Cap = 1, Round_Cap = 2, Beveled_Cap = 3, };
typedef struct _GdkGC GdkGC;
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
typedef struct _GtkButton GtkButton;
typedef struct _GtkBin GtkBin;
typedef struct _GtkContainer GtkContainer;
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
typedef struct _GdkDrawable GdkPixmap;
struct _GdkDrawable {
     GObject parent_instance;
  } ;
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
struct _GtkContainer {
     GtkWidget widget;
     GtkWidget *focus_child;
     guint bits_at_64;
  } ;
struct _GtkBin {
     GtkContainer container;
     GtkWidget *child;
  } ;
struct _GtkButton {
     GtkBin bin;
     GdkWindow *event_window;
     gchar *label_text;
     guint activate_timeout;
     guint bits_at_84;
  } ;
enum  { Trace_Cap = 0, Square_Cap = 1, Round_Cap = 2, Beveled_Cap = 3, };
typedef struct _GtkToggleButton GtkToggleButton;
struct _GtkToggleButton {
     GtkButton button;
     guint bits_at_88;
  } ;
typedef gint gboolean;
typedef struct _GtkEntry GtkEntry;
typedef struct _GtkIMContext GtkIMContext;
struct _GtkIMContext {
     GObject parent_instance;
  } ;
typedef struct _PangoLayout PangoLayout;
struct _PangoLayout  ;
typedef guint32 gunichar;
struct _GtkEntry {
     GtkWidget widget;
     gchar *text;
     guint bits_at_64;
     guint16 text_length;
     guint16 text_max_length;
     GdkWindow *text_area;
     GtkIMContext *im_context;
     GtkWidget *popup_menu;
     gint current_pos;
     gint selection_bound;
     PangoLayout *cached_layout;
     guint bits_at_96;
     guint button;
     guint blink_timeout;
     guint recompute_idle;
     gint scroll_offset;
     gint ascent;
     gint descent;
     guint16 x_text_size;
     guint16 x_n_bytes;
     guint16 preedit_length;
     guint16 preedit_cursor;
     gint dnd_position;
     gint drag_start_x;
     gint drag_start_y;
     gunichar invisible_char;
     gint width_chars;
  } ;
typedef float gfloat;
typedef struct _GtkTooltips GtkTooltips;
typedef struct _GtkTooltipsData GtkTooltipsData;
struct _GtkTooltipsData {
     GtkTooltips *tooltips;
     GtkWidget *widget;
     gchar *tip_text;
     gchar *tip_private;
  } ;
typedef struct _GList GList;
struct _GList {
     gpointer data;
     GList *next;
     GList *prev;
  } ;
typedef struct _GTimeVal GTimeVal;
typedef long glong;
struct _GTimeVal {
     glong tv_sec;
     glong tv_usec;
  } ;
struct _GtkTooltips {
     GtkObject parent_instance;
     GtkWidget *tip_window;
     GtkWidget *tip_label;
     GtkTooltipsData *active_tips_data;
     GList *tips_data_list;
     guint bits_at_32;
     guint bits_at_36;
     gint timer_tag;
     GTimeVal last_popdown;
  } ;
typedef struct _GtkDialog GtkDialog;
typedef struct _GtkWindow GtkWindow;
typedef struct _GtkWindowGeometryInfo GtkWindowGeometryInfo;
struct _GtkWindowGeometryInfo  ;
typedef struct _GtkWindowGroup GtkWindowGroup;
struct _GtkWindowGroup {
     GObject parent_instance;
     GSList *grabs;
  } ;
enum  { GDK_SHIFT_MASK = 1, GDK_LOCK_MASK = 2, GDK_CONTROL_MASK = 4, GDK_MOD1_MASK = 8, GDK_MOD2_MASK = 16, GDK_MOD3_MASK = 32, GDK_MOD4_MASK = 64, GDK_MOD5_MASK = 128, GDK_BUTTON1_MASK = 256, GDK_BUTTON2_MASK = 512, GDK_BUTTON3_MASK = 1024, GDK_BUTTON4_MASK = 2048, GDK_BUTTON5_MASK = 4096, GDK_SUPER_MASK = 67108864, GDK_HYPER_MASK = 134217728, GDK_META_MASK = 268435456, GDK_RELEASE_MASK = 1073741824, GDK_MODIFIER_MASK = 1543512063, };
typedef enum  { GDK_SHIFT_MASK = 1, GDK_LOCK_MASK = 2, GDK_CONTROL_MASK = 4, GDK_MOD1_MASK = 8, GDK_MOD2_MASK = 16, GDK_MOD3_MASK = 32, GDK_MOD4_MASK = 64, GDK_MOD5_MASK = 128, GDK_BUTTON1_MASK = 256, GDK_BUTTON2_MASK = 512, GDK_BUTTON3_MASK = 1024, GDK_BUTTON4_MASK = 2048, GDK_BUTTON5_MASK = 4096, GDK_SUPER_MASK = 67108864, GDK_HYPER_MASK = 134217728, GDK_META_MASK = 268435456, GDK_RELEASE_MASK = 1073741824, GDK_MODIFIER_MASK = 1543512063, } GdkModifierType;
typedef struct _GdkScreen GdkScreen;
typedef struct _cairo_font_options cairo_font_options_t;
struct _cairo_font_options  ;
struct _GdkScreen {
     GObject parent_instance;
     guint bits_at_12;
     GdkGC *normal_gcs[32];
     GdkGC *exposure_gcs[32];
     GdkGC *subwindow_gcs[32];
     cairo_font_options_t *font_options;
     double resolution;
  } ;
struct _GtkWindow {
     GtkBin bin;
     gchar *title;
     gchar *wmclass_name;
     gchar *wmclass_class;
     gchar *wm_role;
     GtkWidget *focus_widget;
     GtkWidget *default_widget;
     GtkWindow *transient_parent;
     GtkWindowGeometryInfo *geometry_info;
     GdkWindow *frame;
     GtkWindowGroup *group;
     guint16 configure_request_count;
     guint bits_at_112;
     guint bits_at_116;
     guint frame_left;
     guint frame_top;
     guint frame_right;
     guint frame_bottom;
     guint keys_changed_handler;
     GdkModifierType mnemonic_modifier;
     GdkScreen *screen;
  } ;
struct _GtkDialog {
     GtkWindow window;
     GtkWidget *vbox;
     GtkWidget *action_area;
     GtkWidget *separator;
  } ;
typedef unsigned long gulong;
typedef void (*GCallback)( void );
typedef double gdouble;
typedef struct _GtkSpinButton GtkSpinButton;
typedef struct _GtkAdjustment GtkAdjustment;
struct _GtkAdjustment {
     GtkObject parent_instance;
     gdouble lower;
     gdouble upper;
     gdouble value;
     gdouble step_increment;
     gdouble page_increment;
     gdouble page_size;
  } ;
enum  { GTK_UPDATE_ALWAYS = 0, GTK_UPDATE_IF_VALID = 1, };
typedef enum  { GTK_UPDATE_ALWAYS = 0, GTK_UPDATE_IF_VALID = 1, } GtkSpinButtonUpdatePolicy;
struct _GtkSpinButton {
     GtkEntry entry;
     GtkAdjustment *adjustment;
     GdkWindow *panel;
     guint32 timer;
     gdouble climb_rate;
     gdouble timer_step;
     GtkSpinButtonUpdatePolicy update_policy;
     guint bits_at_184;
  } ;
enum  { Trace_Cap = 0, Square_Cap = 1, Round_Cap = 2, Beveled_Cap = 3, };
enum  { Trace_Cap = 0, Square_Cap = 1, Round_Cap = 2, Beveled_Cap = 3, };
typedef struct _GdkDrawable GdkDrawable;
typedef struct _GdkCursor GdkCursor;
enum  { GDK_X_CURSOR = 0, GDK_ARROW = 2, GDK_BASED_ARROW_DOWN = 4, GDK_BASED_ARROW_UP = 6, GDK_BOAT = 8, GDK_BOGOSITY = 10, GDK_BOTTOM_LEFT_CORNER = 12, GDK_BOTTOM_RIGHT_CORNER = 14, GDK_BOTTOM_SIDE = 16, GDK_BOTTOM_TEE = 18, GDK_BOX_SPIRAL = 20, GDK_CENTER_PTR = 22, GDK_CIRCLE = 24, GDK_CLOCK = 26, GDK_COFFEE_MUG = 28, GDK_CROSS = 30, GDK_CROSS_REVERSE = 32, GDK_CROSSHAIR = 34, GDK_DIAMOND_CROSS = 36, GDK_DOT = 38, GDK_DOTBOX = 40, GDK_DOUBLE_ARROW = 42, GDK_DRAFT_LARGE = 44, GDK_DRAFT_SMALL = 46, GDK_DRAPED_BOX = 48, GDK_EXCHANGE = 50, GDK_FLEUR = 52, GDK_GOBBLER = 54, GDK_GUMBY = 56, GDK_HAND1 = 58, GDK_HAND2 = 60, GDK_HEART = 62, GDK_ICON = 64, GDK_IRON_CROSS = 66, GDK_LEFT_PTR = 68, GDK_LEFT_SIDE = 70, GDK_LEFT_TEE = 72, GDK_LEFTBUTTON = 74, GDK_LL_ANGLE = 76, GDK_LR_ANGLE = 78, GDK_MAN = 80, GDK_MIDDLEBUTTON = 82, GDK_MOUSE = 84, GDK_PENCIL = 86, GDK_PIRATE = 88, GDK_PLUS = 90, GDK_QUESTION_ARROW = 92, GDK_RIGHT_PTR = 94, GDK_RIGHT_SIDE = 96, GDK_RIGHT_TEE = 98, GDK_RIGHTBUTTON = 100, GDK_RTL_LOGO = 102, GDK_SAILBOAT = 104, GDK_SB_DOWN_ARROW = 106, GDK_SB_H_DOUBLE_ARROW = 108, GDK_SB_LEFT_ARROW = 110, GDK_SB_RIGHT_ARROW = 112, GDK_SB_UP_ARROW = 114, GDK_SB_V_DOUBLE_ARROW = 116, GDK_SHUTTLE = 118, GDK_SIZING = 120, GDK_SPIDER = 122, GDK_SPRAYCAN = 124, GDK_STAR = 126, GDK_TARGET = 128, GDK_TCROSS = 130, GDK_TOP_LEFT_ARROW = 132, GDK_TOP_LEFT_CORNER = 134, GDK_TOP_RIGHT_CORNER = 136, GDK_TOP_SIDE = 138, GDK_TOP_TEE = 140, GDK_TREK = 142, GDK_UL_ANGLE = 144, GDK_UMBRELLA = 146, GDK_UR_ANGLE = 148, GDK_WATCH = 150, GDK_XTERM = 152, GDK_LAST_CURSOR = 153, GDK_BLANK_CURSOR = -2, GDK_CURSOR_IS_PIXMAP = -1, };
typedef enum  { GDK_X_CURSOR = 0, GDK_ARROW = 2, GDK_BASED_ARROW_DOWN = 4, GDK_BASED_ARROW_UP = 6, GDK_BOAT = 8, GDK_BOGOSITY = 10, GDK_BOTTOM_LEFT_CORNER = 12, GDK_BOTTOM_RIGHT_CORNER = 14, GDK_BOTTOM_SIDE = 16, GDK_BOTTOM_TEE = 18, GDK_BOX_SPIRAL = 20, GDK_CENTER_PTR = 22, GDK_CIRCLE = 24, GDK_CLOCK = 26, GDK_COFFEE_MUG = 28, GDK_CROSS = 30, GDK_CROSS_REVERSE = 32, GDK_CROSSHAIR = 34, GDK_DIAMOND_CROSS = 36, GDK_DOT = 38, GDK_DOTBOX = 40, GDK_DOUBLE_ARROW = 42, GDK_DRAFT_LARGE = 44, GDK_DRAFT_SMALL = 46, GDK_DRAPED_BOX = 48, GDK_EXCHANGE = 50, GDK_FLEUR = 52, GDK_GOBBLER = 54, GDK_GUMBY = 56, GDK_HAND1 = 58, GDK_HAND2 = 60, GDK_HEART = 62, GDK_ICON = 64, GDK_IRON_CROSS = 66, GDK_LEFT_PTR = 68, GDK_LEFT_SIDE = 70, GDK_LEFT_TEE = 72, GDK_LEFTBUTTON = 74, GDK_LL_ANGLE = 76, GDK_LR_ANGLE = 78, GDK_MAN = 80, GDK_MIDDLEBUTTON = 82, GDK_MOUSE = 84, GDK_PENCIL = 86, GDK_PIRATE = 88, GDK_PLUS = 90, GDK_QUESTION_ARROW = 92, GDK_RIGHT_PTR = 94, GDK_RIGHT_SIDE = 96, GDK_RIGHT_TEE = 98, GDK_RIGHTBUTTON = 100, GDK_RTL_LOGO = 102, GDK_SAILBOAT = 104, GDK_SB_DOWN_ARROW = 106, GDK_SB_H_DOUBLE_ARROW = 108, GDK_SB_LEFT_ARROW = 110, GDK_SB_RIGHT_ARROW = 112, GDK_SB_UP_ARROW = 114, GDK_SB_V_DOUBLE_ARROW = 116, GDK_SHUTTLE = 118, GDK_SIZING = 120, GDK_SPIDER = 122, GDK_SPRAYCAN = 124, GDK_STAR = 126, GDK_TARGET = 128, GDK_TCROSS = 130, GDK_TOP_LEFT_ARROW = 132, GDK_TOP_LEFT_CORNER = 134, GDK_TOP_RIGHT_CORNER = 136, GDK_TOP_SIDE = 138, GDK_TOP_TEE = 140, GDK_TREK = 142, GDK_UL_ANGLE = 144, GDK_UMBRELLA = 146, GDK_UR_ANGLE = 148, GDK_WATCH = 150, GDK_XTERM = 152, GDK_LAST_CURSOR = 153, GDK_BLANK_CURSOR = -2, GDK_CURSOR_IS_PIXMAP = -1, } GdkCursorType;
struct _GdkCursor {
     GdkCursorType type;
     guint ref_count;
  } ;
enum  { GDK_X_CURSOR = 0, GDK_ARROW = 2, GDK_BASED_ARROW_DOWN = 4, GDK_BASED_ARROW_UP = 6, GDK_BOAT = 8, GDK_BOGOSITY = 10, GDK_BOTTOM_LEFT_CORNER = 12, GDK_BOTTOM_RIGHT_CORNER = 14, GDK_BOTTOM_SIDE = 16, GDK_BOTTOM_TEE = 18, GDK_BOX_SPIRAL = 20, GDK_CENTER_PTR = 22, GDK_CIRCLE = 24, GDK_CLOCK = 26, GDK_COFFEE_MUG = 28, GDK_CROSS = 30, GDK_CROSS_REVERSE = 32, GDK_CROSSHAIR = 34, GDK_DIAMOND_CROSS = 36, GDK_DOT = 38, GDK_DOTBOX = 40, GDK_DOUBLE_ARROW = 42, GDK_DRAFT_LARGE = 44, GDK_DRAFT_SMALL = 46, GDK_DRAPED_BOX = 48, GDK_EXCHANGE = 50, GDK_FLEUR = 52, GDK_GOBBLER = 54, GDK_GUMBY = 56, GDK_HAND1 = 58, GDK_HAND2 = 60, GDK_HEART = 62, GDK_ICON = 64, GDK_IRON_CROSS = 66, GDK_LEFT_PTR = 68, GDK_LEFT_SIDE = 70, GDK_LEFT_TEE = 72, GDK_LEFTBUTTON = 74, GDK_LL_ANGLE = 76, GDK_LR_ANGLE = 78, GDK_MAN = 80, GDK_MIDDLEBUTTON = 82, GDK_MOUSE = 84, GDK_PENCIL = 86, GDK_PIRATE = 88, GDK_PLUS = 90, GDK_QUESTION_ARROW = 92, GDK_RIGHT_PTR = 94, GDK_RIGHT_SIDE = 96, GDK_RIGHT_TEE = 98, GDK_RIGHTBUTTON = 100, GDK_RTL_LOGO = 102, GDK_SAILBOAT = 104, GDK_SB_DOWN_ARROW = 106, GDK_SB_H_DOUBLE_ARROW = 108, GDK_SB_LEFT_ARROW = 110, GDK_SB_RIGHT_ARROW = 112, GDK_SB_UP_ARROW = 114, GDK_SB_V_DOUBLE_ARROW = 116, GDK_SHUTTLE = 118, GDK_SIZING = 120, GDK_SPIDER = 122, GDK_SPRAYCAN = 124, GDK_STAR = 126, GDK_TARGET = 128, GDK_TCROSS = 130, GDK_TOP_LEFT_ARROW = 132, GDK_TOP_LEFT_CORNER = 134, GDK_TOP_RIGHT_CORNER = 136, GDK_TOP_SIDE = 138, GDK_TOP_TEE = 140, GDK_TREK = 142, GDK_UL_ANGLE = 144, GDK_UMBRELLA = 146, GDK_UR_ANGLE = 148, GDK_WATCH = 150, GDK_XTERM = 152, GDK_LAST_CURSOR = 153, GDK_BLANK_CURSOR = -2, GDK_CURSOR_IS_PIXMAP = -1, };
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
HID **hid_enumerate( void );
void ghid_dialog_export( void );
int ghid_attribute_dialog( HID_Attribute *, int , HID_Attr_Val *, char *, char * );
void ghid_dialog_print( HID * );
void exporter_clicked_cb( GtkButton *, HID * );
void enum_changed_cb( GtkWidget *, int * );
void set_flag_cb( GtkToggleButton *, gboolean * );
void entry_changed_cb( GtkEntry *, char ** );
void dblspinner_changed_cb( GtkWidget *, gpointer  );
void intspinner_changed_cb( GtkWidget *, gpointer  );
GtkWidget *ghid_category_vbox( GtkWidget *, gchar *, gint , gint , gboolean , gboolean  );
void ghid_spin_button( GtkWidget *, GtkWidget **, gfloat , gfloat , gfloat , gfloat , gfloat , gint , gint , void (*)( void ), gpointer , gboolean , gchar * );
void ghid_check_button_connected( GtkWidget *, GtkWidget **, gboolean , gboolean , gboolean , gboolean , gint , void (*)( void ), gpointer , gchar * );
GtkWidget *gtk_entry_new( void );
GType gtk_box_get_type( void );
gboolean gtk_toggle_button_get_active( GtkToggleButton * );
GtkTooltips *gtk_tooltips_new( void );
GtkWidget *gtk_label_new( gchar * );
void gtk_dialog_response( GtkDialog *, gint  );
GtkWidget *gtk_vbox_new( gboolean , gint  );
void gtk_entry_set_text( GtkEntry *, gchar * );
GtkWidget *gtk_combo_box_new_text( void );
int __printf_chk( int , char *, ... );
void gtk_widget_destroy( GtkWidget * );
GType gtk_dialog_get_type( void );
GtkWidget *gtk_dialog_new_with_buttons( gchar *, GtkWindow *, void *, gchar *, ... );
gchar *gtk_entry_get_text( GtkEntry * );
GType gtk_combo_box_get_type( void );
void gtk_widget_show_all( GtkWidget * );
void free( void * );
GType gtk_container_get_type( void );
char *dcgettext( char *, char *, int  );
void gtk_combo_box_set_active( void *, gint  );
GType gtk_window_get_type( void );
void gtk_tooltips_set_tip( GtkTooltips *, GtkWidget *, gchar *, gchar * );
GType gtk_entry_get_type( void );
gulong g_signal_connect_data( gpointer , gchar *, GCallback , gpointer , void *, void * );
GTypeInstance *g_type_check_instance_cast( GTypeInstance *, GType  );
gint gtk_dialog_run( GtkDialog * );
GtkWidget *gtk_hbox_new( gboolean , gint  );
void gtk_container_add( GtkContainer *, GtkWidget * );
GtkWidget *gtk_event_box_new( void );
void gtk_box_pack_start( void *, GtkWidget *, gboolean , gboolean , guint  );
GtkWidget *gtk_button_new_with_label( gchar * );
gint gtk_combo_box_get_active( void * );
void gtk_window_set_wmclass( GtkWindow *, gchar *, gchar * );
GType gtk_spin_button_get_type( void );
void gtk_combo_box_append_text( void *, gchar * );
char *__strdup( char * );
void gtk_container_set_border_width( GtkContainer *, guint  );
gdouble gtk_spin_button_get_value( GtkSpinButton * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern HID *gui;
extern HID *exporter;
extern GHidPort ghid_port;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
