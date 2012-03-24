#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
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
typedef char Boolean;
typedef unsigned int Cardinal;
struct {
     LineTypePtr Line;
     Boolean Valid;
     Cardinal LineN;
     Cardinal LineMax;
     BDimension Width;
     BDimension Height;
     BDimension Delta;
  } ;
typedef struct {
     LineTypePtr Line;
     Boolean Valid;
     Cardinal LineN;
     Cardinal LineMax;
     BDimension Width;
     BDimension Height;
     BDimension Delta;
  } *SymbolTypePtr;
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
     PointType Point1;
     PointType Point2;
     char *Number;
  } ;
typedef unsigned char BYTE;
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
  } *LayerTypePtr;
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
     LineTypePtr Line;
     Boolean Valid;
     Cardinal LineN;
     Cardinal LineMax;
     BDimension Width;
     BDimension Height;
     BDimension Delta;
  } SymbolType;
struct {
     LocationType MaxHeight;
     LocationType MaxWidth;
     BoxType DefaultSymbol;
     SymbolType Symbol[256];
     Boolean Valid;
     char __pad[3];
  } ;
typedef struct {
     LocationType MaxHeight;
     LocationType MaxWidth;
     BoxType DefaultSymbol;
     SymbolType Symbol[256];
     Boolean Valid;
     char __pad[3];
  } *FontTypePtr;
typedef struct {
     char *name;
     char *need_coord_msg;
     int (*trigger_cb)( int , char **, int , int  );
     char *description;
     char *syntax;
  } HID_Action;
typedef struct PCBType *PCBTypePtr;
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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
LineTypePtr CreateNewLineInSymbol( SymbolTypePtr , LocationType , LocationType , LocationType , LocationType , BDimension  );
LineTypePtr CreateDrawnLineOnLayer( LayerTypePtr , LocationType , LocationType , LocationType , LocationType , BDimension , BDimension , FlagType  );
int FontSave( int , char **, int , int  );
int FontEdit( int , char **, int , int  );
void register_fontmode_action_list( void );
void SetFontInfo( FontTypePtr  );
int MoveLayerToGroup( int , int  );
FlagType MakeFlags( unsigned int  );
int MoveLayer( int , int  );
char *MyStrdup( char *, char * );
int hid_actionl( char *, ... );
int hid_action( char * );
void hid_register_actions( HID_Action *, int  );
void __stack_chk_fail( void );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern PCBTypePtr PCB;
extern HID_Action fontmode_action_list[2];
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
