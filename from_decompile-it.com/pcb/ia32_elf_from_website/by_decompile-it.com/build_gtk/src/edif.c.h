#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct Context Context;
struct UsedCar {
     struct UsedCar *Next;
     short Code;
     char __pad[2];
  } ;
union {
     int Single;
     struct UsedCar *Used;
  } ;
struct ContextCar {
     struct ContextCar *Next;
     struct Context *Context;
     union {
       int Single;
       struct UsedCar *Used;
    } u;
  } ;
struct Token {
     char *Name;
     int Code;
     struct Token *Next;
  } ;
struct TokenCar {
     struct TokenCar *Next;
     struct Token *Token;
  } ;
struct Context {
     char *Name;
     short Code;
     short Flags;
     struct ContextCar *Context;
     struct TokenCar *Token;
     struct Context *Next;
  } ;
typedef struct _pair_list pair_list;
typedef struct _str_pair str_pair;
struct _str_pair {
     char *str1;
     char *str2;
     struct _str_pair *next;
  } ;
struct _pair_list {
     char *name;
     str_pair *list;
  } ;
typedef struct _IO_FILE FILE;
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
typedef unsigned int Cardinal;
struct {
     char *ListEntry;
     char *AllocatedMemory;
     char *Template;
     char *Package;
     char *Value;
     char *Description;
  } ;
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
struct {
     char *ListEntry;
     char *AllocatedMemory;
     char *Template;
     char *Package;
     char *Value;
     char *Description;
  } ;
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
struct {
     char *ListEntry;
     char *AllocatedMemory;
     char *Template;
     char *Package;
     char *Value;
     char *Description;
  } ;
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
struct {
     Cardinal MenuN;
     Cardinal MenuMax;
     LibraryMenuTypePtr Menu;
  } ;
typedef struct {
     Cardinal MenuN;
     Cardinal MenuMax;
     LibraryMenuTypePtr Menu;
  } *LibraryTypePtr;
typedef struct PCBType *PCBTypePtr;
typedef struct {
     unsigned long f;
     unsigned char t[8];
  } FlagType;
typedef char Boolean;
typedef int LocationType;
typedef struct BoxType BoxType;
struct BoxType {
     LocationType X1;
     LocationType Y1;
     LocationType X2;
     LocationType Y2;
  } ;
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
typedef struct rtree rtree_t;
struct rtree {
     struct rtree_node *root;
     int size;
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
typedef unsigned short yytype_uint16;
typedef unsigned char yytype_uint8;
typedef short yytype_int16;
typedef struct Token Token;
typedef struct Tie Tie;
struct Tie {
     short *Enable;
     short Origin;
     short EnableSize;
  } ;
typedef struct Binder Binder;
struct Binder {
     short *Follower;
     short Origin;
     short FollowerSize;
  } ;
typedef struct Keyword Keyword;
struct Keyword {
     struct Keyword *Next;
     char *String;
  } ;
typedef struct ContextCar ContextCar;
typedef struct Bucket Bucket;
struct Bucket {
     struct Bucket *Next;
     int Index;
     char Data[64];
  } ;
typedef union YYSTYPE YYSTYPE;
union YYSTYPE {
     char *s;
     pair_list *pl;
     str_pair *ps;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
Context *FindContext( int  );
void EnterKeyword( char * );
pair_list *new_pair_list( str_pair * );
str_pair *new_str_pair( char *, char * );
void str_pair_free( str_pair * );
void pair_list_free( pair_list * );
void define_pcb_net( str_pair *, pair_list * );
int edifparse( void );
void ParseEDIF( char *, FILE * );
LibraryEntryTypePtr GetLibraryEntryMemory( LibraryMenuTypePtr  );
LibraryMenuTypePtr GetLibraryMenuMemory( LibraryTypePtr  );
int __fprintf_chk( void *, int , char *, ... );
int _IO_getc( void * );
int ungetc( int , void * );
void *strtol( char *, char **, int  );
void *__ctype_toupper_loc( void );
void free( void * );
short **__ctype_b_loc( void );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
void *fopen( char *, char * );
char *strcpy( char *, char * );
void *malloc( unsigned int  );
int __sprintf_chk( char *, int , unsigned int , char *, ... );
char *__strdup( char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern PCBTypePtr PCB;
extern int edifchar;
extern YYSTYPE ediflval;
extern int edifnerrs;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
