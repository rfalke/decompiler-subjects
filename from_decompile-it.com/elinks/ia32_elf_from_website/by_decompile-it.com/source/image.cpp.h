#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
namespace pov {
typedef float COLOUR[5];
typedef unsigned int Instruction;
typedef void *(*FNCODE_PRIVATE_COPY_METHOD)( void * );
typedef void (*FNCODE_PRIVATE_DESTROY_METHOD)( void * );
typedef int TOKEN;
typedef unsigned int FUNCTION;
typedef struct ExprNodeStruct ExprNode;
}
typedef long __off_t;
typedef void _IO_lock_t;
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef unsigned int size_t;
typedef struct _IO_FILE FILE;
typedef struct POVMSData POVMSObject;
typedef struct POVMSData *POVMSObjectPtr;
typedef struct POVMSData POVMSAttribute;
typedef struct POVMSData POVMSAttributeList;
typedef void *POVMSContext;
typedef int __ssize_t;
typedef __ssize_t ssize_t;
typedef struct Path Path;
typedef struct PathList PathList;
typedef int __jmp_buf[6];
typedef struct __jmp_buf_tag jmp_buf[1];
typedef struct Config Config;
typedef long __time_t;
typedef long __suseconds_t;
namespace pov {
typedef double VECTOR[3];
typedef struct Warps_Struct WARP;
typedef struct Pattern_Struct TPATTERN;
typedef struct Blend_Map_Struct BLEND_MAP;
typedef struct Density_file_Data_Struct DENSITY_FILE_DATA;
typedef struct Density_file_Struct DENSITY_FILE;
typedef double UV_VECT[2];
typedef struct Image_Colour_Struct IMAGE_COLOUR;
typedef struct Image8_Line_Struct IMAGE8_LINE;
typedef struct Image16_Line_Struct IMAGE16_LINE;
typedef struct Image_Struct IMAGE;
typedef struct Pigment_Struct PIGMENT;
typedef struct Object_Struct OBJECT;
typedef struct Media_Struct IMEDIA;
typedef struct Interior_Struct INTERIOR;
typedef struct Ray_Struct RAY;
typedef struct istack_struct ISTACK;
typedef int (*ALL_INTERSECTIONS_METHOD)( OBJECT *, RAY *, ISTACK * );
typedef int (*INSIDE_METHOD)( double *, OBJECT * );
typedef struct istk_entry INTERSECTION;
typedef void (*NORMAL_METHOD)( double *, OBJECT *, INTERSECTION * );
typedef void (*UVCOORD_METHOD)( double *, OBJECT *, INTERSECTION * );
typedef void *(*COPY_METHOD)( OBJECT * );
typedef double MATRIX[4][4];
typedef struct Transform_Struct TRANSFORM;
typedef void (*TRANSLATE_METHOD)( OBJECT *, double *, TRANSFORM * );
typedef void (*ROTATE_METHOD)( OBJECT *, double *, TRANSFORM * );
typedef void (*SCALE_METHOD)( OBJECT *, double *, TRANSFORM * );
typedef void (*TRANSFORM_METHOD)( OBJECT *, TRANSFORM * );
typedef void (*INVERT_METHOD)( OBJECT * );
typedef void (*DESTROY_METHOD)( OBJECT * );
typedef struct Method_Struct METHODS;
typedef struct Texture_Struct TEXTURE;
typedef struct Tnormal_Struct TNORMAL;
typedef float RGB[3];
typedef struct Finish_Struct FINISH;
typedef struct Light_Source_Struct LIGHT_SOURCE;
typedef float BBOX_VAL;
typedef BBOX_VAL BBOX_VECT[3];
typedef struct Bounding_Box_Struct BBOX;
typedef struct BBox_Tree_Struct BBOX_TREE;
typedef struct Project_Struct PROJECT;
typedef struct Project_Tree_Node_Struct PROJECT_TREE_NODE;
typedef struct Blend_Map_Entry BLEND_MAP_ENTRY;
typedef struct Camera_Struct CAMERA;
typedef struct Turb_Struct TURB;
typedef struct Fog_Struct FOG;
typedef struct Rainbow_Struct RAINBOW;
typedef struct Skysphere_Struct SKYSPHERE;
typedef struct light_group_light_struct LIGHT_GROUP_LIGHT;
typedef struct Frame_Struct FRAME;
}
typedef __time_t time_t;
namespace pov {
typedef enum shellret { IGNORE_RET = 0, QUIT_RET = 1, USER_RET = 2, FATAL_RET = 3, SKIP_ONCE_RET = 4, ALL_SKIP_RET = 5, } SHELLRET;
typedef struct shelldata SHELLDATA;
typedef struct OPTIONS_STRUCT Opts;
}
typedef char *XPointer;
typedef struct _XExtData XExtData;
typedef unsigned long VisualID;
typedef struct _XDisplay Display;
typedef unsigned long XID;
typedef XID Window;
typedef unsigned long Time;
typedef XID Drawable;
typedef unsigned long Atom;
typedef XID Colormap;
typedef union _XEvent XEvent;
typedef XID KeySym;
typedef XID Pixmap;
typedef XID Cursor;
typedef XID Font;
typedef unsigned long Pixel;
typedef int (*XpmAllocColorFunc)( Display *, Colormap , char *, struct XColor *, void * );
typedef int (*XpmFreeColorsFunc)( Display *, Colormap , Pixel *, int , void * );
typedef struct _XGC *GC;
typedef struct _XImage XImage;
namespace pov {
typedef int INT;
typedef unsigned char UTINY;
typedef long LONG;
typedef unsigned short UWORD;
typedef unsigned long ULONG;
typedef unsigned short HF_VAL;
}
typedef struct jpeg_common_struct *j_common_ptr;
typedef unsigned char JSAMPLE;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef unsigned int JDIMENSION;
typedef short JCOEF;
typedef JCOEF JBLOCK[64];
typedef JBLOCK *JBLOCKROW;
typedef JBLOCKROW *JBLOCKARRAY;
typedef struct jvirt_sarray_control *jvirt_sarray_ptr;
typedef int boolean;
typedef struct jvirt_barray_control *jvirt_barray_ptr;
typedef unsigned char JOCTET;
typedef struct jpeg_compress_struct *j_compress_ptr;
typedef unsigned short UINT16;
typedef unsigned char UINT8;
typedef struct jpeg_marker_struct *jpeg_saved_marker_ptr;
typedef struct jpeg_decompress_struct *j_decompress_ptr;
typedef struct png_struct_def png_struct;
typedef png_struct *png_structp;
typedef char *png_const_charp;
typedef void (*png_error_ptr)( png_structp , png_const_charp  );
typedef void *png_voidp;
typedef unsigned char png_byte;
typedef png_byte *png_bytep;
typedef size_t png_size_t;
typedef void (*png_rw_ptr)( png_structp , png_bytep , png_size_t  );
typedef unsigned long png_uint_32;
typedef struct png_row_info_struct png_row_info;
typedef png_row_info *png_row_infop;
typedef void (*png_user_transform_ptr)( png_structp , png_row_infop , png_bytep  );
typedef unsigned char Byte;
typedef Byte Bytef;
typedef unsigned int uInt;
typedef unsigned long uLong;
typedef void *voidpf;
typedef voidpf (*alloc_func)( voidpf , uInt , uInt  );
typedef void (*free_func)( voidpf , voidpf  );
typedef struct z_stream_s z_stream;
typedef struct png_color_struct png_color;
typedef png_color *png_colorp;
typedef unsigned short png_uint_16;
typedef struct png_color_16_struct png_color_16;
typedef void (*png_flush_ptr)( png_structp  );
typedef png_uint_16 **png_uint_16pp;
typedef struct png_color_8_struct png_color_8;
typedef void (*png_read_status_ptr)( png_structp , png_uint_32 , int  );
typedef void (*png_write_status_ptr)( png_structp , png_uint_32 , int  );
typedef char *png_charp;
typedef struct png_text_struct png_text;
typedef png_text *png_textp;
typedef struct png_time_struct png_time;
typedef long png_int_32;
typedef png_uint_16 *png_uint_16p;
typedef char **png_charpp;
typedef struct png_unknown_chunk_t png_unknown_chunk;
typedef png_unknown_chunk *png_unknown_chunkp;
typedef struct png_sPLT_entry_struct png_sPLT_entry;
typedef png_sPLT_entry *png_sPLT_entryp;
typedef struct png_sPLT_struct png_sPLT_t;
typedef png_sPLT_t *png_sPLT_tp;
typedef png_byte **png_bytepp;
typedef png_int_32 png_fixed_point;
typedef struct png_info_struct png_info;
typedef png_info *png_infop;
typedef void (*png_progressive_info_ptr)( png_structp , png_infop  );
typedef void (*png_progressive_row_ptr)( png_structp , png_bytep , png_uint_32 , int  );
typedef void (*png_progressive_end_ptr)( png_structp , png_infop  );
typedef int (*png_user_chunk_ptr)( png_structp , png_unknown_chunkp  );
typedef png_voidp (*png_malloc_ptr)( png_structp , png_size_t  );
typedef void (*png_free_ptr)( png_structp , png_voidp  );
namespace pov {
typedef struct MemStats_Struct MEMSTATS;
typedef long long COUNTER;
typedef enum STATS { Number_Of_Pixels = 0, Number_Of_Pixels_Supersampled = 1, Number_Of_Samples = 2, Number_Of_Rays = 3, Calls_To_DNoise = 4, Calls_To_Noise = 5, ADC_Saves = 6, Istack_overflows = 7, Ray_RBezier_Tests = 8, Ray_RBezier_Tests_Succeeded = 9, Ray_Bicubic_Tests = 10, Ray_Bicubic_Tests_Succeeded = 11, Ray_Blob_Tests = 12, Ray_Blob_Tests_Succeeded = 13, Blob_Element_Tests = 14, Blob_Element_Tests_Succeeded = 15, Blob_Bound_Tests = 16, Blob_Bound_Tests_Succeeded = 17, Ray_Box_Tests = 18, Ray_Box_Tests_Succeeded = 19, Ray_Cone_Tests = 20, Ray_Cone_Tests_Succeeded = 21, Ray_CSG_Intersection_Tests = 22, Ray_CSG_Intersection_Tests_Succeeded = 23, Ray_CSG_Merge_Tests = 24, Ray_CSG_Merge_Tests_Succeeded = 25, Ray_CSG_Union_Tests = 26, Ray_CSG_Union_Tests_Succeeded = 27, Ray_Disc_Tests = 28, Ray_Disc_Tests_Succeeded = 29, Ray_Fractal_Tests = 30, Ray_Fractal_Tests_Succeeded = 31, Ray_HField_Tests = 32, Ray_HField_Tests_Succeeded = 33, Ray_HField_Box_Tests = 34, Ray_HField_Box_Tests_Succeeded = 35, Ray_HField_Triangle_Tests = 36, Ray_HField_Triangle_Tests_Succeeded = 37, Ray_HField_Block_Tests = 38, Ray_HField_Block_Tests_Succeeded = 39, Ray_HField_Cell_Tests = 40, Ray_HField_Cell_Tests_Succeeded = 41, Ray_IsoSurface_Tests = 42, Ray_IsoSurface_Tests_Succeeded = 43, Ray_IsoSurface_Bound_Tests = 44, Ray_IsoSurface_Bound_Tests_Succeeded = 45, Ray_IsoSurface_Cache = 46, Ray_IsoSurface_Cache_Succeeded = 47, Ray_Lathe_Tests = 48, Ray_Lathe_Tests_Succeeded = 49, Lathe_Bound_Tests = 50, Lathe_Bound_Tests_Succeeded = 51, Ray_Mesh_Tests = 52, Ray_Mesh_Tests_Succeeded = 53, Ray_Plane_Tests = 54, Ray_Plane_Tests_Succeeded = 55, Ray_Polygon_Tests = 56, Ray_Polygon_Tests_Succeeded = 57, Ray_Prism_Tests = 58, Ray_Prism_Tests_Succeeded = 59, Prism_Bound_Tests = 60, Prism_Bound_Tests_Succeeded = 61, Ray_Parametric_Tests = 62, Ray_Parametric_Tests_Succeeded = 63, Ray_Par_Bound_Tests = 64, Ray_Par_Bound_Tests_Succeeded = 65, Ray_Quadric_Tests = 66, Ray_Quadric_Tests_Succeeded = 67, Ray_Poly_Tests = 68, Ray_Poly_Tests_Succeeded = 69, Ray_Sphere_Tests = 70, Ray_Sphere_Tests_Succeeded = 71, Ray_Sphere_Sweep_Tests = 72, Ray_Sphere_Sweep_Tests_Succeeded = 73, Ray_Superellipsoid_Tests = 74, Ray_Superellipsoid_Tests_Succeeded = 75, Ray_Sor_Tests = 76, Ray_Sor_Tests_Succeeded = 77, Sor_Bound_Tests = 78, Sor_Bound_Tests_Succeeded = 79, Ray_Torus_Tests = 80, Ray_Torus_Tests_Succeeded = 81, Torus_Bound_Tests = 82, Torus_Bound_Tests_Succeeded = 83, Ray_Triangle_Tests = 84, Ray_Triangle_Tests_Succeeded = 85, Ray_TTF_Tests = 86, Ray_TTF_Tests_Succeeded = 87, Bounding_Region_Tests = 88, Bounding_Region_Tests_Succeeded = 89, Clipping_Region_Tests = 90, Clipping_Region_Tests_Succeeded = 91, Ray_IsoSurface_Find_Root = 92, Ray_Function_VM_Calls = 93, Ray_Function_VM_Instruction_Est = 94, VBuffer_Tests = 95, VBuffer_Tests_Succeeded = 96, LBuffer_Tests = 97, LBuffer_Tests_Succeeded = 98, Media_Samples = 99, Media_Intervals = 100, Reflected_Rays_Traced = 101, Refracted_Rays_Traced = 102, Transmitted_Rays_Traced = 103, Internal_Reflected_Rays_Traced = 104, Shadow_Cache_Hits = 105, Shadow_Rays_Succeeded = 106, Shadow_Ray_Tests = 107, nChecked = 108, nEnqueued = 109, totalQueues = 110, totalQueueResets = 111, totalQueueResizes = 112, Polynomials_Tested = 113, Roots_Eliminated = 114, MemStat_Smallest_Alloc = 115, MemStat_Largest_Alloc = 116, MemStat_Largest_Mem_Usage = 117, Number_Of_Photons_Shot = 118, Number_Of_Photons_Stored = 119, Number_Of_Global_Photons_Stored = 120, Number_Of_Media_Photons_Stored = 121, Priority_Queue_Add = 122, Priority_Queue_Remove = 123, Gather_Performed_Count = 124, Gather_Expanded_Count = 125, MaxStat = 126, } Stats;
typedef struct intersection_stats_info INTERSECTION_STATS_INFO;
}
typedef struct POVMSData *POVMSAttributeListPtr;
typedef char *__gnuc_va_list;
typedef __gnuc_va_list va_list;
namespace pov {
typedef struct ot_id_struct OT_ID;
typedef struct ot_block_struct OT_BLOCK;
typedef struct ot_node_struct OT_NODE;
typedef struct byte_xyz BYTE_XYZ;
typedef struct wt_avg_struct WT_AVG;
typedef float SNGL_VECT[3];
typedef unsigned char SMALL_COLOUR[4];
typedef struct photon_struct PHOTON;
typedef PHOTON *PHOTON_BLOCK;
typedef struct photon_map_struct PHOTON_MAP;
typedef struct photon_options_struct PHOTON_OPTIONS;
typedef struct Vec2_Struct VEC2;
typedef struct Pixel_Struct PIXEL;
typedef struct pix pix;
typedef struct Reserved_Word_Struct RESERVED_WORD;
typedef struct Sym_Table_Entry SYM_ENTRY;
typedef struct Sym_Table_Struct SYM_TABLE;
typedef enum cond_type { ROOT_COND = 0, WHILE_COND = 1, IF_TRUE_COND = 2, IF_FALSE_COND = 3, ELSE_COND = 4, SWITCH_COND = 5, CASE_TRUE_COND = 6, CASE_FALSE_COND = 7, SKIP_TIL_END_COND = 8, INVOKING_MACRO_COND = 9, DECLARING_MACRO_COND = 10, } COND_TYPE;
typedef struct Pov_Macro_Struct POV_MACRO;
typedef struct Cond_Stack_Entry CS_ENTRY;
typedef struct Data_File_Struct DATA_FILE;
typedef struct Pov_Array_Struct POV_ARRAY;
typedef struct Pov_Param_Struct POV_PARAM;
typedef double EXPRESS[5];
typedef unsigned char BYTE;
typedef unsigned short USHORT;
typedef short SHORT;
typedef struct GlyphStruct *GlyphPtr;
typedef short FWord;
typedef struct KernData_struct KernData;
typedef struct KernStruct TTKernTable;
typedef struct KernTableStruct KernTables;
typedef unsigned short uFWord;
typedef struct longHorMertric longHorMetric;
typedef struct FontFileInfoStruct FontFileInfo;
typedef struct TrueTypeFont_Struct TTF;
typedef int Fixed;
typedef struct CSG_Struct CSG;
typedef struct StageName_Struct STAGENAME;
typedef enum shelltype { PRE_SCENE_SHL = 0, PRE_FRAME_SHL = 1, POST_FRAME_SHL = 2, POST_SCENE_SHL = 3, USER_ABORT_SHL = 4, FATAL_SHL = 5, MAX_SHL = 6, } SHELLTYPE;
typedef struct Qelem_Struct QELEM;
typedef struct Priority_Queue_Struct PRIORITY_QUEUE;
typedef struct Project_Queue_Struct PROJECT_QUEUE;
typedef struct Box_Struct BOX;
typedef short HF_Normals[3];
typedef struct HField_Normal_Struct HFIELD_NORMAL;
typedef struct HField_Block_Struct HFIELD_BLOCK;
typedef struct HField_Data_Struct HFIELD_DATA;
typedef struct HField_Struct HFIELD;
typedef int VECTORI[3];
typedef struct Rayinfo_Struct RAYINFO;
typedef struct Project_Tree_Leaf_Struct PROJECT_TREE_LEAF;
typedef FUNCTION *FUNCTION_PTR;
typedef struct Spline_Entry SPLINE_ENTRY;
typedef struct Spline_Struct SPLINE;
typedef double (*Sys1)( double  );
typedef double (*Sys2)( double , double  );
typedef struct FunctionEntry_Struct FunctionEntry;
typedef struct StackFrame_Struct StackFrame;
typedef struct FPUContext_Struct FPUContext;
typedef struct cmplx CMPLX;
typedef void (*COMPLEX_FUNCTION_METHOD)( CMPLX *, CMPLX * );
typedef struct Fractal_Struct FRACTAL;
typedef void (*NORMAL_CALC_METHOD)( double *, int , FRACTAL * );
typedef int (*ITERATION_METHOD)( double *, FRACTAL * );
typedef int (*D_ITERATION_METHOD)( double *, FRACTAL *, double * );
typedef int (*F_BOUND_METHOD)( RAY *, FRACTAL *, double *, double * );
typedef struct Light_Tested_Struct LIGHT_TESTED;
typedef struct ComTexData_Struct ComTexData;
typedef struct Light_List_Struct LIGHT_LIST;
typedef struct Lit_Interval_Struct LIT_INTERVAL;
typedef struct Media_Interval_Struct MEDIA_INTERVAL;
typedef struct Blob_Element_Struct BLOB_ELEMENT;
typedef struct Blob_Interval_Struct BLOB_INTERVAL;
typedef struct BSphere_Tree_Struct BSPHERE_TREE;
typedef struct Blob_Data_Struct BLOB_DATA;
typedef struct Blob_Struct BLOB;
typedef struct Mesh_Triangle_Struct MESH_TRIANGLE;
typedef double VECTOR_4D[4];
typedef struct Hash_Table_Struct HASH_TABLE;
typedef struct UV_Hash_Table_Struct UV_HASH_TABLE;
typedef struct Mesh_Data_Struct MESH_DATA;
typedef struct Mesh_Struct MESH;
typedef struct Material_Struct MATERIAL;
typedef struct Blob_List_Struct BLOB_LIST;
typedef struct IsoSurface_Struct ISOSURFACE;
typedef struct PrecompParValues_Struct PRECOMP_PAR_DATA;
typedef struct Parametric_Struct PARAMETRIC;
typedef struct Sphere_Struct SPHERE;
typedef struct Sphere_Sweep_Sphere_Struct SPHSWEEP_SPH;
typedef struct Sphere_Sweep_Segment_Struct SPHSWEEP_SEG;
typedef struct Sphere_Sweep_Struct SPHERE_SWEEP;
typedef struct Plane_Struct PLANE;
typedef struct Cone_Struct CONE;
typedef struct Disc_Struct DISC;
typedef struct Quadric_Struct QUADRIC;
typedef struct Poly_Struct POLY;
typedef struct Torus_Struct TORUS;
typedef struct Lathe_Spline_Entry_Struct LATHE_SPLINE_ENTRY;
typedef struct BCyl_Intersection_Struct BCYL_INT;
typedef struct BCyl_Entry_Struct BCYL_ENTRY;
typedef struct BCyl_Struct BCYL;
typedef struct Lathe_Spline_Struct LATHE_SPLINE;
typedef struct Lathe_Struct LATHE;
typedef struct Polygon_Data_Struct POLYGON_DATA;
typedef struct Polygon_Struct POLYGON;
typedef struct Prism_Spline_Entry_Struct PRISM_SPLINE_ENTRY;
typedef struct Prism_Spline_Struct PRISM_SPLINE;
typedef struct Prism_Intersection_Structure PRISM_INT;
typedef struct Prism_Struct PRISM;
typedef struct Sor_Spline_Entry_Struct SOR_SPLINE_ENTRY;
typedef struct Sor_Spline_Struct SOR_SPLINE;
typedef struct Sor_Struct SOR;
typedef struct Superellipsoid_Struct SUPERELLIPSOID;
typedef struct Bezier_Node_Struct BEZIER_NODE;
typedef double WEIGHTS[4][4];
typedef struct Bicubic_Patch_Struct BICUBIC_PATCH;
typedef struct Triangle_Struct TRIANGLE;
typedef struct Smooth_Triangle_Struct SMOOTH_TRIANGLE;
typedef struct Black_Hole_Warp BLACK_HOLE;
typedef struct Repeat_Warp REPEAT;
typedef struct Cylindrical_Warp CYLW;
typedef struct Spherical_Warp SPHEREW;
typedef struct Toroidal_Warp TOROIDAL;
typedef struct Planar_Warp PLANARW;
typedef struct p polynomial;
typedef struct Sphere_Sweep_Intersection_Structure SPHSWEEP_INT;
}
typedef void *thandle_t;
typedef unsigned short uint16;
typedef void *tdata_t;
typedef unsigned int uint32;
typedef uint32 toff_t;
typedef struct tiff TIFF;
typedef short int16;
typedef int int32;
typedef int32 tsize_t;
namespace pov {
typedef struct Trans_Warp TRANS;
typedef struct Bezier_Vertices_Struct BEZIER_VERTICES;
typedef struct Bezier_Child_Struct BEZIER_CHILDREN;
typedef struct Cone_Intersection_Structure CONE_INT;
typedef struct Chunk_Header_Struct CHUNK_HEADER;
typedef struct Compound_Object_Struct COMPOUND_OBJECT;
}
typedef struct POVMSNode POVMSNode;
typedef struct POVMS_Sys_QueueDataNode_Default POVMS_Sys_QueueDataNode_Default;
typedef struct POVMS_Sys_QueueNode_Default POVMS_Sys_QueueNode_Default;
typedef struct POVMSReceiveHandlerNode POVMSReceiveHandlerNode;
typedef struct POVMSContextData POVMSContextData;
typedef struct POVMSData *POVMSAttributePtr;
namespace pov_frontend {
enum EngineState { kUnknown = 0, kReady = 1, kStartRequested = 2, kRendering = 3, kStopRequested = 4, } ;
}
namespace pov {
struct ExprNodeStruct {
     struct ExprNodeStruct *parent;
     struct ExprNodeStruct *child;
     struct ExprNodeStruct *prev;
     struct ExprNodeStruct *next;
     int stage;
     int op;
     union {
       char *variable;
       struct {
         char *name;
         TOKEN token;
         FUNCTION fn;
      } call;
       unsigned int trap;
       double number;
       char __pad[4];
    } ;
  } ;
}
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
struct POVMSData {
     unsigned int type;
     int size;
     union {
       void *ptr;
       struct POVMSData *items;
       struct POVMSNode *root;
    } ;
  } ;
struct POVMSData  ;
struct POVMSData  ;
struct Path {
     char *str;
     bool descend;
     bool writable;
     struct Path *next;
  } ;
struct PathList {
     Path *first;
     Path *last;
  } ;
enum FileIO { IO_UNSET = 0, IO_NONE = 1, IO_READONLY = 2, IO_RESTRICTED = 3, IO_UNKNOWN = 4, } ;
enum ShellOut { SHL_UNSET = 0, SHL_ALLOWED = 1, SHL_FORBIDDEN = 2, SHL_UNKNOWN = 3, } ;
struct __sigset_t {
     unsigned long __val[32];
  } ;
struct __jmp_buf_tag {
     __jmp_buf __jmpbuf;
     int __mask_was_saved;
     struct __sigset_t  __saved_mask;
  } ;
struct Config {
     char *home;
     char *sysconf;
     char *userconf;
     char *conf;
     char *sysini;
     char *sysini_old;
     char *userini;
     char *userini_old;
     enum FileIO  file_io;
     enum ShellOut  shellout;
     PathList *permitted_paths;
  } ;
namespace pov {
struct Warps_Struct {
     unsigned short Warp_Type;
     WARP *Prev_Warp;
     WARP *Next_Warp;
  } ;
struct Pattern_Struct {
     unsigned short Type;
     unsigned short Wave_Type;
     unsigned short Flags;
     int References;
     float Frequency;
     float Phase;
     float Exponent;
     WARP *Warps;
     TPATTERN *Next;
     BLEND_MAP *Blend_Map;
     union {
       DENSITY_FILE *Density_File;
       IMAGE *Image;
       VECTOR Gradient;
       float Agate_Turb_Scale;
       short Num_of_Waves;
       short Iterations;
       short Arms;
       struct {
         float Mortar;
         VECTOR Size;
      } Brick;
       struct {
         float Control0;
         float Control1;
      } Quilted;
       struct {
         double Size;
         double UseCoords;
         VECTOR Metric;
      } Facets;
       struct {
         VECTOR Form;
         VECTOR Metric;
         double Offset;
         double Dim;
         short IsSolid;
         VECTOR *cv;
         int lastseed;
         VECTOR lastcenter;
      } Crackle;
       struct {
         VECTOR Slope_Vector;
         VECTOR Altit_Vector;
         short Slope_Base;
         short Altit_Base;
         double Slope_Len;
         double Altit_Len;
         UV_VECT Slope_Mod;
         UV_VECT Altit_Mod;
      } Slope;
       struct {
         UV_VECT Coord;
         short Iterations;
         short interior_type;
         short exterior_type;
         double efactor;
         double ifactor;
         int Exponent;
         char __pad[4];
      } Fractal;
       struct {
         void *Fn;
         void *Data;
      } Function;
       PIGMENT *Pigment;
       OBJECT *Object;
    } Vals;
  } ;
struct Blend_Map_Struct {
     int Users;
     short Number_Of_Entries;
     char Transparency_Flag;
     char Type;
     BLEND_MAP_ENTRY *Blend_Map_Entries;
  } ;
struct Density_file_Data_Struct {
     int References;
     char *Name;
     int Sx;
     int Sy;
     int Sz;
     int Type;
     union {
       unsigned char *Density8;
       unsigned short *Density16;
       unsigned int *Density32;
    } ;
  } ;
struct Density_file_Struct {
     int Interpolation;
     DENSITY_FILE_DATA *Data;
  } ;
struct Image_Colour_Struct {
     unsigned short Red;
     unsigned short Green;
     unsigned short Blue;
     unsigned short Filter;
     unsigned short Transmit;
  } ;
struct Image8_Line_Struct {
     unsigned char *red;
     unsigned char *green;
     unsigned char *blue;
     unsigned char *transm;
  } ;
struct Image16_Line_Struct {
     unsigned short *red;
     unsigned short *green;
     unsigned short *blue;
     unsigned short *transm;
  } ;
struct Image_Struct {
     int References;
     int Map_Type;
     int File_Type;
     int Image_Type;
     int Interpolation_Type;
     int iwidth;
     int iheight;
     short Colour_Map_Size;
     char Once_Flag;
     char Use_Colour_Flag;
     VECTOR Gradient;
     float width;
     float height;
     UV_VECT Offset;
     double AllFilter;
     double AllTransmit;
     IMAGE_COLOUR *Colour_Map;
     void *Object;
     union {
       IMAGE8_LINE *rgb8_lines;
       IMAGE16_LINE *rgb16_lines;
       unsigned short **gray16_lines;
       unsigned char **map_lines;
    } data;
     char __pad[4];
  } ;
struct Pigment_Struct {
     unsigned short Type;
     unsigned short Wave_Type;
     unsigned short Flags;
     int References;
     float Frequency;
     float Phase;
     float Exponent;
     WARP *Warps;
     TPATTERN *Next;
     BLEND_MAP *Blend_Map;
     union {
       DENSITY_FILE *Density_File;
       IMAGE *Image;
       VECTOR Gradient;
       float Agate_Turb_Scale;
       short Num_of_Waves;
       short Iterations;
       short Arms;
       struct {
         float Mortar;
         VECTOR Size;
      } Brick;
       struct {
         float Control0;
         float Control1;
      } Quilted;
       struct {
         double Size;
         double UseCoords;
         VECTOR Metric;
      } Facets;
       struct {
         VECTOR Form;
         VECTOR Metric;
         double Offset;
         double Dim;
         short IsSolid;
         VECTOR *cv;
         int lastseed;
         VECTOR lastcenter;
      } Crackle;
       struct {
         VECTOR Slope_Vector;
         VECTOR Altit_Vector;
         short Slope_Base;
         short Altit_Base;
         double Slope_Len;
         double Altit_Len;
         UV_VECT Slope_Mod;
         UV_VECT Altit_Mod;
      } Slope;
       struct {
         UV_VECT Coord;
         short Iterations;
         short interior_type;
         short exterior_type;
         double efactor;
         double ifactor;
         int Exponent;
         char __pad[4];
      } Fractal;
       struct {
         void *Fn;
         void *Data;
      } Function;
       PIGMENT *Pigment;
       OBJECT *Object;
    } Vals;
     COLOUR Colour;
     char __pad[4];
  } ;
struct Bounding_Box_Struct {
     BBOX_VECT Lower_Left;
     BBOX_VECT Lengths;
  } ;
struct Object_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
  } ;
struct Media_Struct {
     int Type;
     int Intervals;
     int Min_Samples;
     int Max_Samples;
     int Sample_Method;
     double Jitter;
     int is_constant;
     double Eccentricity;
     double sc_ext;
     int use_absorption;
     int use_emission;
     int use_extinction;
     int use_scattering;
     COLOUR Absorption;
     COLOUR Emission;
     COLOUR Extinction;
     COLOUR Scattering;
     double Ratio;
     double Confidence;
     double Variance;
     double *Sample_Threshold;
     double AA_Threshold;
     int AA_Level;
     int ignore_photons;
     PIGMENT *Density;
     IMEDIA *Next_Media;
  } ;
struct Interior_Struct {
     int References;
     int hollow;
     int Disp_NElems;
     float IOR;
     float Dispersion;
     float Caustics;
     float Old_Refract;
     float Fade_Distance;
     float Fade_Power;
     COLOUR Fade_Colour;
     IMEDIA *IMedia;
  } ;
struct Ray_Struct {
     VECTOR Initial;
     VECTOR Direction;
     int Index;
     unsigned int Optimisiation_Flags;
     INTERIOR *Interiors[100];
  } ;
struct istk_entry {
     double Depth;
     VECTOR IPoint;
     VECTOR INormal;
     VECTOR PNormal;
     UV_VECT Iuv;
     OBJECT *Object;
     int i1;
     int i2;
     double d1;
     double d2;
     double u;
     double v;
     double d3;
     double d4;
     double w1;
     double w2;
     double w3;
     void *Pointer;
     void *Csg;
  } ;
struct istack_struct {
     struct istack_struct *next;
     struct istk_entry *istack;
     unsigned int max_entries;
     unsigned int top_entry;
  } ;
struct istk_entry  ;
struct Transform_Struct {
     MATRIX matrix;
     MATRIX inverse;
  } ;
struct Method_Struct {
     ALL_INTERSECTIONS_METHOD All_Intersections_Method;
     INSIDE_METHOD Inside_Method;
     NORMAL_METHOD Normal_Method;
     UVCOORD_METHOD UVCoord_Method;
     COPY_METHOD Copy_Method;
     TRANSLATE_METHOD Translate_Method;
     ROTATE_METHOD Rotate_Method;
     SCALE_METHOD Scale_Method;
     TRANSFORM_METHOD Transform_Method;
     INVERT_METHOD Invert_Method;
     DESTROY_METHOD Destroy_Method;
  } ;
struct Texture_Struct {
     unsigned short Type;
     unsigned short Wave_Type;
     unsigned short Flags;
     int References;
     float Frequency;
     float Phase;
     float Exponent;
     WARP *Warps;
     TPATTERN *Next;
     BLEND_MAP *Blend_Map;
     union {
       DENSITY_FILE *Density_File;
       IMAGE *Image;
       VECTOR Gradient;
       float Agate_Turb_Scale;
       short Num_of_Waves;
       short Iterations;
       short Arms;
       struct {
         float Mortar;
         VECTOR Size;
      } Brick;
       struct {
         float Control0;
         float Control1;
      } Quilted;
       struct {
         double Size;
         double UseCoords;
         VECTOR Metric;
      } Facets;
       struct {
         VECTOR Form;
         VECTOR Metric;
         double Offset;
         double Dim;
         short IsSolid;
         VECTOR *cv;
         int lastseed;
         VECTOR lastcenter;
      } Crackle;
       struct {
         VECTOR Slope_Vector;
         VECTOR Altit_Vector;
         short Slope_Base;
         short Altit_Base;
         double Slope_Len;
         double Altit_Len;
         UV_VECT Slope_Mod;
         UV_VECT Altit_Mod;
      } Slope;
       struct {
         UV_VECT Coord;
         short Iterations;
         short interior_type;
         short exterior_type;
         double efactor;
         double ifactor;
         int Exponent;
         char __pad[4];
      } Fractal;
       struct {
         void *Fn;
         void *Data;
      } Function;
       PIGMENT *Pigment;
       OBJECT *Object;
    } Vals;
     TEXTURE *Next_Material;
     PIGMENT *Pigment;
     TNORMAL *Tnormal;
     FINISH *Finish;
     TEXTURE *Materials;
     int Num_Of_Mats;
  } ;
struct Tnormal_Struct {
     unsigned short Type;
     unsigned short Wave_Type;
     unsigned short Flags;
     int References;
     float Frequency;
     float Phase;
     float Exponent;
     WARP *Warps;
     TPATTERN *Next;
     BLEND_MAP *Blend_Map;
     union {
       DENSITY_FILE *Density_File;
       IMAGE *Image;
       VECTOR Gradient;
       float Agate_Turb_Scale;
       short Num_of_Waves;
       short Iterations;
       short Arms;
       struct {
         float Mortar;
         VECTOR Size;
      } Brick;
       struct {
         float Control0;
         float Control1;
      } Quilted;
       struct {
         double Size;
         double UseCoords;
         VECTOR Metric;
      } Facets;
       struct {
         VECTOR Form;
         VECTOR Metric;
         double Offset;
         double Dim;
         short IsSolid;
         VECTOR *cv;
         int lastseed;
         VECTOR lastcenter;
      } Crackle;
       struct {
         VECTOR Slope_Vector;
         VECTOR Altit_Vector;
         short Slope_Base;
         short Altit_Base;
         double Slope_Len;
         double Altit_Len;
         UV_VECT Slope_Mod;
         UV_VECT Altit_Mod;
      } Slope;
       struct {
         UV_VECT Coord;
         short Iterations;
         short interior_type;
         short exterior_type;
         double efactor;
         double ifactor;
         int Exponent;
         char __pad[4];
      } Fractal;
       struct {
         void *Fn;
         void *Data;
      } Function;
       PIGMENT *Pigment;
       OBJECT *Object;
    } Vals;
     float Amount;
     float Delta;
  } ;
struct Finish_Struct {
     float Diffuse;
     float Brilliance;
     float Specular;
     float Roughness;
     float Phong;
     float Phong_Size;
     float Irid;
     float Irid_Film_Thickness;
     float Irid_Turb;
     float Temp_Caustics;
     float Temp_IOR;
     float Temp_Dispersion;
     float Temp_Refract;
     float Reflect_Exp;
     float Crand;
     float Metallic;
     RGB Ambient;
     RGB Reflection_Max;
     RGB Reflection_Min;
     float Reflection_Falloff;
     int Reflection_Type;
     float Reflect_Metallic;
     int Conserve_Energy;
  } ;
struct Bounding_Box_Struct  ;
struct Light_Source_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     OBJECT *Children;
     COLOUR Colour;
     VECTOR Direction;
     VECTOR Center;
     VECTOR Points_At;
     VECTOR Axis1;
     VECTOR Axis2;
     double Coeff;
     double Radius;
     double Falloff;
     double Fade_Distance;
     double Fade_Power;
     LIGHT_SOURCE *Next_Light_Source;
     unsigned char Light_Type;
     unsigned char Area_Light;
     unsigned char Jitter;
     bool Orient;
     bool Circular;
     unsigned char Track;
     unsigned char Parallel;
     unsigned char Photon_Area_Light;
     int Area_Size1;
     int Area_Size2;
     int Adaptive_Level;
     int Media_Attenuation;
     int Media_Interaction;
     COLOUR **Light_Grid;
     OBJECT *Shadow_Cached_Object;
     OBJECT *Projected_Through_Object;
     BLEND_MAP *blend_map;
     PROJECT_TREE_NODE *Light_Buffer[6];
  } ;
struct Bounding_Box_Struct  ;
struct Bounding_Box_Struct  ;
struct BBox_Tree_Struct {
     short Infinite;
     short Entries;
     BBOX BBox;
     BBOX_TREE **Node;
  } ;
struct Project_Struct {
     int x1;
     int y1;
     int x2;
     int y2;
  } ;
struct Project_Struct  ;
struct Project_Tree_Node_Struct {
     unsigned short is_leaf;
     BBOX_TREE *Node;
     PROJECT Project;
     unsigned short Entries;
     PROJECT_TREE_NODE **Entry;
  } ;
struct Blend_Map_Entry {
     float value;
     unsigned char Same;
     union {
       COLOUR Colour;
       PIGMENT *Pigment;
       TNORMAL *Tnormal;
       TEXTURE *Texture;
       UV_VECT Point_Slope;
       char __pad[4];
    } Vals;
  } ;
struct Camera_Struct {
     VECTOR Location;
     VECTOR Direction;
     VECTOR Up;
     VECTOR Right;
     VECTOR Sky;
     VECTOR Look_At;
     VECTOR Focal_Point;
     double Focal_Distance;
     double Aperture;
     int Blur_Samples;
     double Confidence;
     double Variance;
     int Type;
     double Angle;
     double H_Angle;
     double V_Angle;
     TNORMAL *Tnormal;
     TRANSFORM *Trans;
  } ;
struct Turb_Struct {
     unsigned short Warp_Type;
     WARP *Prev_Warp;
     WARP *Next_Warp;
     VECTOR Turbulence;
     int Octaves;
     float Lambda;
     float Omega;
     char __pad[4];
  } ;
struct Fog_Struct {
     int Type;
     double Distance;
     double Alt;
     double Offset;
     COLOUR Colour;
     VECTOR Up;
     TURB *Turb;
     float Turb_Depth;
     FOG *Next;
     char __pad[4];
  } ;
struct Rainbow_Struct {
     double Distance;
     double Jitter;
     double Angle;
     double Width;
     double Arc_Angle;
     double Falloff_Angle;
     double Falloff_Width;
     VECTOR Antisolar_Vector;
     VECTOR Up_Vector;
     VECTOR Right_Vector;
     PIGMENT *Pigment;
     RAINBOW *Next;
  } ;
struct Skysphere_Struct {
     int Count;
     PIGMENT **Pigments;
     TRANSFORM *Trans;
  } ;
struct light_group_light_struct {
     LIGHT_SOURCE *Light;
     LIGHT_GROUP_LIGHT *Next;
  } ;
struct Frame_Struct {
     CAMERA *Camera;
     int Screen_Height;
     int Screen_Width;
     int Number_Of_Light_Sources;
     LIGHT_SOURCE *Light_Sources;
     OBJECT *Objects;
     double Atmosphere_IOR;
     double Atmosphere_Dispersion;
     double Antialias_Threshold;
     COLOUR Background_Colour;
     COLOUR Ambient_Light;
     COLOUR Irid_Wavelengths;
     IMEDIA *Atmosphere;
     FOG *Fog;
     RAINBOW *Rainbow;
     SKYSPHERE *Skysphere;
     LIGHT_GROUP_LIGHT *Light_Group_Lights;
  } ;
enum FRAMETYPE { FT_SINGLE_FRAME = 0, FT_MULTIPLE_FRAME = 1, } ;
enum Histogram_Types { CSV = 0, SYS = 1, PPM = 2, TARGA = 3, PNG = 4, NONE = 5, } ;
struct shelldata {
     SHELLRET Ret;
     int Inverse;
     char Command[250];
     char __pad[2];
  } ;
struct FRAMESEQ {
     enum FRAMETYPE  FrameType;
     double Clock_Value;
     int FrameNumber;
     int InitialFrame;
     double InitialClock;
     int FinalFrame;
     int FrameNumWidth;
     double FinalClock;
     int SubsetStartFrame;
     double SubsetStartPercent;
     int SubsetEndFrame;
     double SubsetEndPercent;
     bool Field_Render_Flag;
     bool Odd_Field_Flag;
     char __pad[6];
  } ;
}
struct POVMSData  ;
namespace pov {
struct OPTIONS_STRUCT {
     unsigned int Options;
     char DisplayFormat;
     char PaletteOption;
     char OutputFormat;
     int OutputQuality;
     int Output_File_Type;
     char Input_File_Name[4096];
     char Output_File_Name[4096];
     char Output_Path[4096];
     char Output_Numbered_Name[4096];
     char Scene_Name[4096];
     float DisplayGamma;
     float GammaFactor;
     unsigned int Quality_Flags;
     int AntialiasDepth;
     double Antialias_Threshold;
     double JitterScale;
     int Abort_Test_Counter;
     char *Library_Paths[25];
     int Library_Path_Index;
     int First_Column;
     int Last_Column;
     double First_Column_Percent;
     double Last_Column_Percent;
     int First_Line;
     int Last_Line;
     double First_Line_Percent;
     double Last_Line_Percent;
     int Language_Version;
     bool Use_Slabs;
     long BBox_Threshold;
     int Quality;
     int PreviewGridSize_Start;
     int PreviewGridSize_End;
     struct FRAMESEQ  FrameSeq;
     double Radiosity_Brightness;
     long Radiosity_Count;
     double Radiosity_Dist_Max;
     double Radiosity_Error_Bound;
     double Radiosity_Gray;
     double Radiosity_Low_Error_Factor;
     double Radiosity_Min_Reuse;
     long Radiosity_Nearest_Count;
     int Radiosity_Recursion_Limit;
     long Radiosity_Quality;
     int Radiosity_File_ReadOnContinue;
     int Radiosity_File_SaveWhileRendering;
     int Radiosity_File_AlwaysReadAtStart;
     int Radiosity_File_KeepOnAbort;
     int Radiosity_File_KeepAlways;
     int Radiosity_Preview_Done;
     double Real_Radiosity_Error_Bound;
     double Maximum_Sample_Brightness;
     double Radiosity_ADC_Bailout;
     int Radiosity_Use_Normal;
     int Radiosity_Use_Media;
     char *Radiosity_Load_File_Name;
     char *Radiosity_Save_File_Name;
     int Radiosity_Add_On_Final_Trace;
     bool Radiosity_Enabled;
     double radPretraceStart;
     double radPretraceEnd;
     int histogram_x;
     int histogram_y;
     bool histogram_on;
     enum Histogram_Types  histogram_type;
     int histogram_file_type;
     char Histogram_File_Name[4096];
     SHELLDATA Shellouts[6];
     char Ini_Output_File_Name[4096];
     char Header_File_Name[4096];
     int Tracing_Method;
     int Do_Stats;
     unsigned long Preview_RefCon;
     int Warning_Level;
     int String_Encoding;
     int Noise_Generator;
     POVMSAttributeList Declared_Variables;
  } ;
}
struct _XExtData {
     int number;
     struct _XExtData *next;
     int (*free_private)( struct _XExtData * );
     XPointer private_data;
  } ;
struct _XDisplay  ;
struct XAnyEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window window;
  } ;
struct XKeyEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window window;
     Window root;
     Window subwindow;
     Time time;
     int x;
     int y;
     int x_root;
     int y_root;
     unsigned int state;
     unsigned int keycode;
     int same_screen;
  } ;
struct XButtonEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window window;
     Window root;
     Window subwindow;
     Time time;
     int x;
     int y;
     int x_root;
     int y_root;
     unsigned int state;
     unsigned int button;
     int same_screen;
  } ;
struct XMotionEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window window;
     Window root;
     Window subwindow;
     Time time;
     int x;
     int y;
     int x_root;
     int y_root;
     unsigned int state;
     char is_hint;
     int same_screen;
  } ;
struct XCrossingEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window window;
     Window root;
     Window subwindow;
     Time time;
     int x;
     int y;
     int x_root;
     int y_root;
     int mode;
     int detail;
     int same_screen;
     int focus;
     unsigned int state;
  } ;
struct XFocusChangeEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window window;
     int mode;
     int detail;
  } ;
struct XExposeEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window window;
     int x;
     int y;
     int width;
     int height;
     int count;
  } ;
struct XGraphicsExposeEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Drawable drawable;
     int x;
     int y;
     int width;
     int height;
     int count;
     int major_code;
     int minor_code;
  } ;
struct XNoExposeEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Drawable drawable;
     int major_code;
     int minor_code;
  } ;
struct XVisibilityEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window window;
     int state;
  } ;
struct XCreateWindowEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window parent;
     Window window;
     int x;
     int y;
     int width;
     int height;
     int border_width;
     int override_redirect;
  } ;
struct XDestroyWindowEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window event;
     Window window;
  } ;
struct XUnmapEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window event;
     Window window;
     int from_configure;
  } ;
struct XMapEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window event;
     Window window;
     int override_redirect;
  } ;
struct XMapRequestEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window parent;
     Window window;
  } ;
struct XReparentEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window event;
     Window window;
     Window parent;
     int x;
     int y;
     int override_redirect;
  } ;
struct XConfigureEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window event;
     Window window;
     int x;
     int y;
     int width;
     int height;
     int border_width;
     Window above;
     int override_redirect;
  } ;
struct XGravityEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window event;
     Window window;
     int x;
     int y;
  } ;
struct XResizeRequestEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window window;
     int width;
     int height;
  } ;
struct XConfigureRequestEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window parent;
     Window window;
     int x;
     int y;
     int width;
     int height;
     int border_width;
     Window above;
     int detail;
     unsigned long value_mask;
  } ;
struct XCirculateEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window event;
     Window window;
     int place;
  } ;
struct XCirculateRequestEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window parent;
     Window window;
     int place;
  } ;
struct XPropertyEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window window;
     Atom atom;
     Time time;
     int state;
  } ;
struct XSelectionClearEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window window;
     Atom selection;
     Time time;
  } ;
struct XSelectionRequestEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window owner;
     Window requestor;
     Atom selection;
     Atom target;
     Atom property;
     Time time;
  } ;
struct XSelectionEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window requestor;
     Atom selection;
     Atom target;
     Atom property;
     Time time;
  } ;
struct XColormapEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window window;
     Colormap colormap;
     int c_new;
     int state;
  } ;
struct XClientMessageEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window window;
     Atom message_type;
     int format;
     union {
       char b[20];
       short s[10];
       long l[5];
    } data;
  } ;
struct XMappingEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window window;
     int request;
     int first_keycode;
     int count;
  } ;
struct XErrorEvent {
     int type;
     Display *display;
     XID resourceid;
     unsigned long serial;
     unsigned char error_code;
     unsigned char request_code;
     unsigned char minor_code;
     char __pad[1];
  } ;
struct XKeymapEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     Window window;
     char key_vector[32];
  } ;
struct XGenericEvent {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     int extension;
     int evtype;
  } ;
struct XGenericEventCookie {
     int type;
     unsigned long serial;
     int send_event;
     Display *display;
     int extension;
     int evtype;
     unsigned int cookie;
     void *data;
  } ;
union _XEvent {
     int type;
     struct XAnyEvent  xany;
     struct XKeyEvent  xkey;
     struct XButtonEvent  xbutton;
     struct XMotionEvent  xmotion;
     struct XCrossingEvent  xcrossing;
     struct XFocusChangeEvent  xfocus;
     struct XExposeEvent  xexpose;
     struct XGraphicsExposeEvent  xgraphicsexpose;
     struct XNoExposeEvent  xnoexpose;
     struct XVisibilityEvent  xvisibility;
     struct XCreateWindowEvent  xcreatewindow;
     struct XDestroyWindowEvent  xdestroywindow;
     struct XUnmapEvent  xunmap;
     struct XMapEvent  xmap;
     struct XMapRequestEvent  xmaprequest;
     struct XReparentEvent  xreparent;
     struct XConfigureEvent  xconfigure;
     struct XGravityEvent  xgravity;
     struct XResizeRequestEvent  xresizerequest;
     struct XConfigureRequestEvent  xconfigurerequest;
     struct XCirculateEvent  xcirculate;
     struct XCirculateRequestEvent  xcirculaterequest;
     struct XPropertyEvent  xproperty;
     struct XSelectionClearEvent  xselectionclear;
     struct XSelectionRequestEvent  xselectionrequest;
     struct XSelectionEvent  xselection;
     struct XColormapEvent  xcolormap;
     struct XClientMessageEvent  xclient;
     struct XMappingEvent  xmapping;
     struct XErrorEvent  xerror;
     struct XKeymapEvent  xkeymap;
     struct XGenericEvent  xgeneric;
     struct XGenericEventCookie  xcookie;
     long pad[24];
  } ;
struct _XImage {
     int width;
     int height;
     int xoffset;
     int format;
     char *data;
     int byte_order;
     int bitmap_unit;
     int bitmap_bit_order;
     int bitmap_pad;
     int depth;
     int bytes_per_line;
     int bits_per_pixel;
     unsigned long red_mask;
     unsigned long green_mask;
     unsigned long blue_mask;
     XPointer obdata;
     struct funcs {
       struct _XImage *(*create_image)( struct _XDisplay *, struct Visual *, unsigned int , int , int , char *, unsigned int , unsigned int , int , int  );
       int (*destroy_image)( struct _XImage * );
       unsigned long (*get_pixel)( struct _XImage *, int , int  );
       int (*put_pixel)( struct _XImage *, int , int , unsigned long  );
       struct _XImage *(*sub_image)( struct _XImage *, int , int , unsigned int , unsigned int  );
       int (*add_pixel)( struct _XImage *, long  );
    } f;
  } ;
struct funcs  ;
struct _XImage  ;
enum J_COLOR_SPACE { JCS_UNKNOWN = 0, JCS_GRAYSCALE = 1, JCS_RGB = 2, JCS_YCbCr = 3, JCS_CMYK = 4, JCS_YCCK = 5, } ;
enum J_DCT_METHOD { JDCT_ISLOW = 0, JDCT_IFAST = 1, JDCT_FLOAT = 2, } ;
enum J_DITHER_MODE { JDITHER_NONE = 0, JDITHER_ORDERED = 1, JDITHER_FS = 2, } ;
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
struct png_row_info_struct {
     png_uint_32 width;
     png_uint_32 rowbytes;
     png_byte color_type;
     png_byte bit_depth;
     png_byte channels;
     png_byte pixel_depth;
  } ;
struct png_color_16_struct {
     png_byte index;
     png_uint_16 red;
     png_uint_16 green;
     png_uint_16 blue;
     png_uint_16 gray;
  } ;
struct png_color_16_struct  ;
struct png_color_8_struct {
     png_byte red;
     png_byte green;
     png_byte blue;
     png_byte gray;
     png_byte alpha;
  } ;
struct png_color_8_struct  ;
struct png_color_16_struct  ;
struct png_struct_def {
     jmp_buf jmpbuf;
     png_error_ptr error_fn;
     png_error_ptr warning_fn;
     png_voidp error_ptr;
     png_rw_ptr write_data_fn;
     png_rw_ptr read_data_fn;
     png_voidp io_ptr;
     png_user_transform_ptr read_user_transform_fn;
     png_user_transform_ptr write_user_transform_fn;
     png_voidp user_transform_ptr;
     png_byte user_transform_depth;
     png_byte user_transform_channels;
     png_uint_32 mode;
     png_uint_32 flags;
     png_uint_32 transformations;
     z_stream zstream;
     png_bytep zbuf;
     png_size_t zbuf_size;
     int zlib_level;
     int zlib_method;
     int zlib_window_bits;
     int zlib_mem_level;
     int zlib_strategy;
     png_uint_32 width;
     png_uint_32 height;
     png_uint_32 num_rows;
     png_uint_32 usr_width;
     png_uint_32 rowbytes;
     png_uint_32 irowbytes;
     png_uint_32 iwidth;
     png_uint_32 row_number;
     png_bytep prev_row;
     png_bytep row_buf;
     png_bytep sub_row;
     png_bytep up_row;
     png_bytep avg_row;
     png_bytep paeth_row;
     png_row_info row_info;
     png_uint_32 idat_size;
     png_uint_32 crc;
     png_colorp palette;
     png_uint_16 num_palette;
     png_uint_16 num_trans;
     png_byte chunk_name[5];
     png_byte compression;
     png_byte filter;
     png_byte interlaced;
     png_byte pass;
     png_byte do_filter;
     png_byte color_type;
     png_byte bit_depth;
     png_byte usr_bit_depth;
     png_byte pixel_depth;
     png_byte channels;
     png_byte usr_channels;
     png_byte sig_bytes;
     png_uint_16 filler;
     png_byte background_gamma_type;
     float background_gamma;
     png_color_16 background;
     png_color_16 background_1;
     png_flush_ptr output_flush_fn;
     png_uint_32 flush_dist;
     png_uint_32 flush_rows;
     int gamma_shift;
     float gamma;
     float screen_gamma;
     png_bytep gamma_table;
     png_bytep gamma_from_1;
     png_bytep gamma_to_1;
     png_uint_16pp gamma_16_table;
     png_uint_16pp gamma_16_from_1;
     png_uint_16pp gamma_16_to_1;
     png_color_8 sig_bit;
     png_color_8 shift;
     png_bytep trans;
     png_color_16 trans_values;
     png_read_status_ptr read_row_fn;
     png_write_status_ptr write_row_fn;
     png_progressive_info_ptr info_fn;
     png_progressive_row_ptr row_fn;
     png_progressive_end_ptr end_fn;
     png_bytep save_buffer_ptr;
     png_bytep save_buffer;
     png_bytep current_buffer_ptr;
     png_bytep current_buffer;
     png_uint_32 push_length;
     png_uint_32 skip_length;
     png_size_t save_buffer_size;
     png_size_t save_buffer_max;
     png_size_t buffer_size;
     png_size_t current_buffer_size;
     int process_mode;
     int cur_palette;
     png_size_t current_text_size;
     png_size_t current_text_left;
     png_charp current_text;
     png_charp current_text_ptr;
     png_bytep palette_lookup;
     png_bytep dither_index;
     png_uint_16p hist;
     png_byte heuristic_method;
     png_byte num_prev_filters;
     png_bytep prev_filters;
     png_uint_16p filter_weights;
     png_uint_16p inv_filter_weights;
     png_uint_16p filter_costs;
     png_uint_16p inv_filter_costs;
     png_charp time_buffer;
     png_uint_32 free_me;
     png_voidp user_chunk_ptr;
     png_user_chunk_ptr read_user_chunk_fn;
     int num_chunk_list;
     png_bytep chunk_list;
     png_byte rgb_to_gray_status;
     png_uint_16 rgb_to_gray_red_coeff;
     png_uint_16 rgb_to_gray_green_coeff;
     png_uint_16 rgb_to_gray_blue_coeff;
     png_uint_32 mng_features_permitted;
     png_fixed_point int_gamma;
     png_byte filter_type;
     png_byte mmx_bitdepth_threshold;
     png_uint_32 mmx_rowbytes_threshold;
     png_uint_32 asm_flags;
     png_voidp mem_ptr;
     png_malloc_ptr malloc_fn;
     png_free_ptr free_fn;
     png_bytep big_row_buf;
     png_bytep dither_sort;
     png_bytep index_to_palette;
     png_bytep palette_to_index;
  } ;
struct png_row_info_struct  ;
struct z_stream_s  ;
struct png_color_struct {
     png_byte red;
     png_byte green;
     png_byte blue;
  } ;
struct png_color_16_struct  ;
struct png_color_8_struct  ;
struct png_text_struct {
     int compression;
     png_charp key;
     png_charp text;
     png_size_t text_length;
  } ;
struct png_time_struct {
     png_uint_16 year;
     png_byte month;
     png_byte day;
     png_byte hour;
     png_byte minute;
     png_byte second;
     char __pad[1];
  } ;
struct png_unknown_chunk_t {
     png_byte name[5];
     png_byte *data;
     png_size_t size;
     png_byte location;
     char __pad[3];
  } ;
struct png_sPLT_entry_struct {
     png_uint_16 red;
     png_uint_16 green;
     png_uint_16 blue;
     png_uint_16 alpha;
     png_uint_16 frequency;
  } ;
struct png_sPLT_struct {
     png_charp name;
     png_byte depth;
     png_sPLT_entryp entries;
     png_int_32 nentries;
  } ;
struct png_time_struct  ;
struct png_color_8_struct  ;
struct png_color_16_struct  ;
struct png_color_16_struct  ;
struct png_info_struct {
     png_uint_32 width;
     png_uint_32 height;
     png_uint_32 valid;
     png_uint_32 rowbytes;
     png_colorp palette;
     png_uint_16 num_palette;
     png_uint_16 num_trans;
     png_byte bit_depth;
     png_byte color_type;
     png_byte compression_type;
     png_byte filter_type;
     png_byte interlace_type;
     png_byte channels;
     png_byte pixel_depth;
     png_byte spare_byte;
     png_byte signature[8];
     float gamma;
     png_byte srgb_intent;
     int num_text;
     int max_text;
     png_textp text;
     png_time mod_time;
     png_color_8 sig_bit;
     png_bytep trans;
     png_color_16 trans_values;
     png_color_16 background;
     png_int_32 x_offset;
     png_int_32 y_offset;
     png_byte offset_unit_type;
     png_uint_32 x_pixels_per_unit;
     png_uint_32 y_pixels_per_unit;
     png_byte phys_unit_type;
     png_uint_16p hist;
     float x_white;
     float y_white;
     float x_red;
     float y_red;
     float x_green;
     float y_green;
     float x_blue;
     float y_blue;
     png_charp pcal_purpose;
     png_int_32 pcal_X0;
     png_int_32 pcal_X1;
     png_charp pcal_units;
     png_charpp pcal_params;
     png_byte pcal_type;
     png_byte pcal_nparams;
     png_uint_32 free_me;
     png_unknown_chunkp unknown_chunks;
     png_size_t unknown_chunks_num;
     png_charp iccp_name;
     png_charp iccp_profile;
     png_uint_32 iccp_proflen;
     png_byte iccp_compression;
     png_sPLT_tp splt_palettes;
     png_uint_32 splt_palettes_num;
     png_byte scal_unit;
     double scal_pixel_width;
     double scal_pixel_height;
     png_charp scal_s_width;
     png_charp scal_s_height;
     png_bytepp row_pointers;
     png_fixed_point int_gamma;
     png_fixed_point int_x_white;
     png_fixed_point int_y_white;
     png_fixed_point int_x_red;
     png_fixed_point int_y_red;
     png_fixed_point int_x_green;
     png_fixed_point int_y_green;
     png_fixed_point int_x_blue;
     png_fixed_point int_y_blue;
  } ;
namespace pov {
struct MemStats_Struct {
     size_t smallest_alloc;
     size_t largest_alloc;
     size_t current_mem_usage;
     size_t largest_mem_usage;
  } ;
struct intersection_stats_info {
     int povms_id;
     Stats stat_test_id;
     Stats stat_suc_id;
     char *infotext;
  } ;
struct ot_id_struct {
     int x;
     int y;
     int z;
     int Size;
  } ;
struct ot_block_struct {
     OT_BLOCK *next;
     VECTOR Point;
     VECTOR S_Normal;
     float drdx;
     float dgdx;
     float dbdx;
     float drdy;
     float dgdy;
     float dbdy;
     float drdz;
     float dgdz;
     float dbdz;
     RGB Illuminance;
     float Harmonic_Mean_Distance;
     float Nearest_Distance;
     VECTOR To_Nearest_Surface;
     short Bounce_Depth;
     char __pad[6];
  } ;
struct ot_id_struct  ;
struct ot_node_struct {
     OT_ID Id;
     OT_BLOCK *Values;
     OT_NODE *Kids[8];
  } ;
struct byte_xyz {
     unsigned char x;
     unsigned char y;
     unsigned char z;
  } ;
struct wt_avg_struct {
     COLOUR Weights_Times_Illuminances;
     double Weights;
     int Weights_Count;
     int Good_Count;
     VECTOR P;
     VECTOR N;
     double Current_Error_Bound;
     float Weight_Times_Illuminance[20][5];
     double Weight[20];
     double Distance[20];
     int Close_Count;
     char __pad[4];
  } ;
struct photon_struct {
     SNGL_VECT Loc;
     SMALL_COLOUR Colour;
     unsigned char info;
     char theta;
     char phi;
     char __pad[1];
  } ;
struct photon_map_struct {
     PHOTON_BLOCK *head;
     int numBlocks;
     int numPhotons;
     double minGatherRad;
     double minGatherRadMult;
     double gatherRadStep;
     int gatherNumSteps;
     char __pad[4];
  } ;
struct photon_map_struct  ;
struct photon_map_struct  ;
struct photon_options_struct {
     int photonsEnabled;
     double surfaceSeparation;
     double globalSeparation;
     double expandTolerance;
     int minExpandCount;
     int Max_Trace_Level;
     double ADC_Bailout;
     double jitter;
     double autoStopPercent;
     int minGatherCount;
     int maxGatherCount;
     char *fileName;
     int saveFile;
     int loadFile;
     PHOTON_MAP photonMap;
     int hitObject;
     double photonSpread;
     double photonDepth;
     OBJECT *photonObject;
     double *cosTheta;
     double *sinTheta;
     PHOTON **photonGatherList;
     double *photonDistances;
     int passThruThis;
     int passThruPrev;
     unsigned int lightFlags;
     unsigned int objectFlags;
     LIGHT_SOURCE *Light;
     bool Light_Is_Global;
     PHOTON_MAP mediaPhotonMap;
     double mediaSpacingFactor;
     int maxMediaSteps;
     int surfaceCount;
     int globalCount;
     int photonReflectionBlur;
  } ;
struct Vec2_Struct {
     double x;
     double y;
  } ;
struct Pixel_Struct {
     int active;
     COLOUR Colour;
  } ;
struct pix {
     double blue;
     double green;
     double red;
     double transm;
  } ;
struct Reserved_Word_Struct {
     TOKEN Token_Number;
     char *Token_Name;
  } ;
struct Sym_Table_Entry {
     SYM_ENTRY *next;
     char *Token_Name;
     void *Data;
     TOKEN Token_Number;
  } ;
struct Sym_Table_Struct {
     char *Table_Name;
     SYM_ENTRY *Table[257];
  } ;
}
namespace pov_base {
struct FilePos {
     unsigned long offset;
     int lineno;
  } ;
}
namespace pov {
struct Pov_Macro_Struct {
     char *Macro_Name;
     char *Macro_Filename;
     struct pov_base::FilePos  Macro_File_Pos;
     long Macro_End;
     int Num_Of_Pars;
     char *Par_Name[56];
  } ;
}
namespace pov_base {
struct ITextStream {
     char *name( void );
  } ;
}
namespace pov {
struct Cond_Stack_Entry {
     COND_TYPE Cond_Type;
     double Switch_Value;
     struct ITextStream *While_File;
     struct ITextStream *Macro_File;
     char *Macro_Return_Name;
     int Macro_Same_Flag;
     POV_MACRO *PMac;
     struct pov_base::FilePos  File_Pos;
     char __pad[4];
  } ;
}
namespace pov_base {
struct OTextStream {
     char *name( void );
  } ;
}
namespace pov {
struct Data_File_Struct {
     struct ITextStream *In_File;
     struct OTextStream *Out_File;
     bool R_Flag;
     char __pad[3];
  } ;
struct Pov_Array_Struct {
     int Dims;
     int Type;
     int Total;
     int Sizes[5];
     int Mags[5];
     void **DataPtrs;
  } ;
struct Pov_Param_Struct {
     int *NumberPtr;
     void **DataPtr;
     int Table_Index;
  } ;
struct KernData_struct {
     USHORT left;
     USHORT right;
     FWord value;
  } ;
struct KernStruct {
     USHORT coverage;
     USHORT nPairs;
     KernData *kern_pairs;
  } ;
struct KernTableStruct {
     USHORT nTables;
     TTKernTable *tables;
  } ;
struct longHorMertric {
     uFWord advanceWidth;
     FWord lsb;
  } ;
}
namespace pov_base {
struct IStream {
     int Read_Byte( void );
  } ;
}
namespace pov {
struct KernTableStruct  ;
struct FontFileInfoStruct {
     char *filename;
     struct IStream *fp;
     USHORT platformID[4];
     USHORT specificID[4];
     ULONG cmap_table_offset;
     ULONG glyf_table_offset;
     USHORT numGlyphs;
     USHORT unitsPerEm;
     SHORT indexToLocFormat;
     ULONG *loca_table;
     GlyphPtr glyphs;
     KernTables kerning_tables;
     USHORT numberOfHMetrics;
     longHorMetric *hmtx_table;
     ULONG glyphIDoffset;
     USHORT segCount;
     USHORT searchRange;
     USHORT entrySelector;
     USHORT rangeShift;
     USHORT *startCount;
     USHORT *endCount;
     USHORT *idDelta;
     USHORT *idRangeOffset;
     struct FontFileInfoStruct *next;
  } ;
struct Bounding_Box_Struct  ;
struct TrueTypeFont_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     void *glyph;
     double depth;
  } ;
struct Bounding_Box_Struct  ;
struct CSG_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     OBJECT *Children;
     int do_split;
  } ;
struct StageName_Struct {
     int stage_id;
     char *stage_name;
  } ;
struct Qelem_Struct {
     double Depth;
     BBOX_TREE *Node;
     char __pad[4];
  } ;
struct Priority_Queue_Struct {
     unsigned int QSize;
     unsigned int Max_QSize;
     QELEM *Queue;
  } ;
struct Project_Queue_Struct {
     unsigned int QSize;
     unsigned int Max_QSize;
     PROJECT_TREE_NODE **Queue;
  } ;
struct Bounding_Box_Struct  ;
struct Box_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     double bounds[2][3];
  } ;
struct HField_Normal_Struct {
     double fx;
     double fz;
     VECTOR normal;
  } ;
struct HField_Block_Struct {
     int xmin;
     int xmax;
     int zmin;
     int zmax;
     double ymin;
     double ymax;
  } ;
struct HField_Data_Struct {
     int References;
     int cache_pos;
     int Normals_Height;
     int max_x;
     int max_z;
     HF_VAL min_y;
     HF_VAL max_y;
     int block_max_x;
     int block_max_z;
     int block_width_x;
     int block_width_z;
     HF_VAL **Map;
     HF_Normals **Normals;
     HFIELD_NORMAL Normal_Cache[16];
     HFIELD_BLOCK **Block;
     char __pad[4];
  } ;
struct Bounding_Box_Struct  ;
struct HField_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     VECTOR bounding_corner1;
     VECTOR bounding_corner2;
     HFIELD_DATA *Data;
     char __pad[4];
  } ;
struct Rayinfo_Struct {
     VECTOR slab_num;
     VECTOR slab_den;
     VECTORI nonzero;
     VECTORI positive;
  } ;
struct Project_Struct  ;
struct Project_Tree_Leaf_Struct {
     unsigned short is_leaf;
     BBOX_TREE *Node;
     PROJECT Project;
     char __pad[16];
  } ;
struct Spline_Entry {
     double par;
     double vec[5];
     double coeff[5];
  } ;
struct Spline_Struct {
     int Number_Of_Entries;
     int Type;
     int Max_Entries;
     SPLINE_ENTRY *SplineEntries;
     int Coeffs_Computed;
     int Terms;
     bool Cache_Valid;
     int Cache_Type;
     double Cache_Point;
     EXPRESS Cache_Data;
  } ;
struct FunctionCode {
     Instruction *program;
     unsigned int program_size;
     unsigned char return_size;
     unsigned char parameter_cnt;
     unsigned char localvar_cnt;
     unsigned int localvar_pos[56];
     char *localvar[56];
     char *parameter[56];
     char *name;
     char *filename;
     struct pov_base::FilePos  filepos;
     unsigned int flags;
     FNCODE_PRIVATE_COPY_METHOD private_copy_method;
     FNCODE_PRIVATE_DESTROY_METHOD private_destroy_method;
     void *private_data;
  } ;
struct FunctionEntry_Struct {
     struct FunctionCode  fn;
     unsigned int reference_count;
  } ;
struct StackFrame_Struct {
     unsigned int pc;
     FUNCTION fn;
  } ;
struct FPUContext_Struct {
     struct FPUContext_Struct *next;
     StackFrame *pstackbase;
     double *dblstackbase;
     unsigned int maxdblstacksize;
  } ;
struct cmplx {
     double x;
     double y;
  } ;
struct Bounding_Box_Struct  ;
struct cmplx  ;
struct Fractal_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     VECTOR Center;
     double Julia_Parm[4];
     double Slice[4];
     double SliceDist;
     double Exit_Value;
     int n;
     double Precision;
     int Inverted;
     int Algebra;
     int Sub_Type;
     CMPLX exponent;
     NORMAL_CALC_METHOD Normal_Calc_Method;
     ITERATION_METHOD Iteration_Method;
     D_ITERATION_METHOD D_Iteration_Method;
     F_BOUND_METHOD F_Bound_Method;
     COMPLEX_FUNCTION_METHOD Complex_Function_Method;
     double Radius_Squared;
  } ;
struct Light_Tested_Struct {
     int Tested;
     COLOUR Colour;
  } ;
struct ComTexData_Struct {
     ComTexData *previous;
     ComTexData *next;
     double ListWeight[100];
     double ListNormal[100][3];
     float ListReflec[100][5];
     float ListReflEx[100];
  } ;
struct Light_List_Struct {
     bool active;
     double s0;
     double s1;
     LIGHT_SOURCE *Light;
     char __pad[4];
  } ;
struct Lit_Interval_Struct {
     int lit;
     double s0;
     double s1;
     double ds;
  } ;
struct Media_Interval_Struct {
     int lit;
     int samples;
     double s0;
     double s1;
     double ds;
     COLOUR od;
     COLOUR te;
     COLOUR te2;
     char __pad[4];
  } ;
struct Blob_Element_Struct {
     short Type;
     int index;
     VECTOR O;
     double len;
     double rad2;
     double c[3];
     double f[5];
     TEXTURE *Texture;
     TRANSFORM *Trans;
  } ;
struct Blob_Interval_Struct {
     int type;
     double bound;
     BLOB_ELEMENT *Element;
     char __pad[4];
  } ;
struct BSphere_Tree_Struct {
     short Entries;
     VECTOR C;
     double r2;
     BSPHERE_TREE **Node;
     char __pad[4];
  } ;
struct Blob_Data_Struct {
     int References;
     int Number_Of_Components;
     double Threshold;
     BLOB_ELEMENT *Entry;
     BLOB_INTERVAL *Intervals;
     BSPHERE_TREE *Tree;
     char __pad[4];
  } ;
struct Bounding_Box_Struct  ;
struct Blob_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     BLOB_DATA *Data;
     TEXTURE **Element_Texture;
     BSPHERE_TREE **Queue;
     unsigned int Max_Queue_Size;
  } ;
struct Mesh_Triangle_Struct {
     unsigned int bits_at_0;
     long Normal_Ind;
     long P1;
     long P2;
     long P3;
     long Texture;
     long Texture2;
     long Texture3;
     long N1;
     long N2;
     long N3;
     long UV1;
     long UV2;
     long UV3;
     float Distance;
     SNGL_VECT Perp;
  } ;
struct Hash_Table_Struct {
     int Index;
     SNGL_VECT P;
     HASH_TABLE *Next;
  } ;
struct UV_Hash_Table_Struct {
     int Index;
     UV_VECT P;
     UV_HASH_TABLE *Next;
     char __pad[4];
  } ;
struct Mesh_Data_Struct {
     int References;
     long Number_Of_UVCoords;
     long Number_Of_Normals;
     long Number_Of_Triangles;
     long Number_Of_Vertices;
     SNGL_VECT *Normals;
     SNGL_VECT *Vertices;
     UV_VECT *UVCoords;
     MESH_TRIANGLE *Triangles;
     BBOX_TREE *Tree;
     VECTOR Inside_Vect;
  } ;
struct Bounding_Box_Struct  ;
struct Mesh_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     MESH_DATA *Data;
     long Number_Of_Textures;
     TEXTURE **Textures;
     short has_inside_vector;
     char __pad[2];
  } ;
struct Material_Struct {
     TEXTURE *Texture;
     INTERIOR *Interior;
     TEXTURE *Interior_Texture;
  } ;
struct Blob_Element_Struct  ;
struct Blob_List_Struct {
     BLOB_ELEMENT elem;
     BLOB_LIST *next;
     char __pad[4];
  } ;
struct Bounding_Box_Struct  ;
struct ISO_Max_Gradient {
     unsigned int refcnt;
     double max_gradient;
     double gradient;
     double eval_max;
     double eval_cnt;
     double eval_gradient_sum;
     double eval_var;
  } ;
struct IsoSurface_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     FUNCTION_PTR Function;
     double max_gradient;
     double gradient;
     double threshold;
     double accuracy;
     double eval_param[3];
     int max_trace;
     int Inv3;
     bool closed;
     bool eval;
     int container_shape;
     union {
       struct {
         VECTOR center;
         double radius;
      } sphere;
       struct {
         VECTOR corner1;
         VECTOR corner2;
      } box;
    } container;
     VECTOR P;
     VECTOR D;
     double Vlength;
     double tl;
     double fmax;
     struct ISO_Max_Gradient *mginfo;
     bool cache;
     char __pad[3];
  } ;
struct PrecompParValues_Struct {
     int use;
     int depth;
     char flags;
     double *Low[3];
     double *Hi[3];
  } ;
struct Bounding_Box_Struct  ;
struct Parametric_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     FUNCTION_PTR Function[3];
     double umin;
     double umax;
     double vmin;
     double vmax;
     double accuracy;
     double max_gradient;
     int Inverted;
     int container_shape;
     union {
       struct {
         VECTOR center;
         double radius;
      } sphere;
       struct {
         VECTOR corner1;
         VECTOR corner2;
      } box;
    } container;
     PRECOMP_PAR_DATA *PData;
     double last_u;
     double last_v;
  } ;
struct Bounding_Box_Struct  ;
struct Sphere_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     VECTOR Center;
     double Radius;
  } ;
struct Sphere_Sweep_Sphere_Struct {
     VECTOR Center;
     double Radius;
  } ;
struct Sphere_Sweep_Segment_Struct {
     SPHSWEEP_SPH Closing_Sphere[2];
     double Center_Deriv[2][3];
     double Radius_Deriv[2];
     int Num_Coefs;
     double Center_Coef[4][3];
     double Radius_Coef[4];
  } ;
struct Bounding_Box_Struct  ;
struct Sphere_Sweep_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     int Interpolation;
     int Num_Modeling_Spheres;
     SPHSWEEP_SPH *Modeling_Sphere;
     int Num_Spheres;
     SPHSWEEP_SPH *Sphere;
     int Num_Segments;
     SPHSWEEP_SEG *Segment;
     double Depth_Tolerance;
  } ;
struct Bounding_Box_Struct  ;
struct Plane_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     VECTOR Normal_Vector;
     double Distance;
  } ;
struct Bounding_Box_Struct  ;
struct Cone_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     VECTOR apex;
     VECTOR base;
     double apex_radius;
     double base_radius;
     double dist;
  } ;
struct Bounding_Box_Struct  ;
struct Disc_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     VECTOR center;
     VECTOR normal;
     double d;
     double iradius2;
     double oradius2;
  } ;
struct Bounding_Box_Struct  ;
struct Quadric_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     VECTOR Square_Terms;
     VECTOR Mixed_Terms;
     VECTOR Terms;
     double Constant;
     bool Automatic_Bounds;
     char __pad[7];
  } ;
struct Bounding_Box_Struct  ;
struct Poly_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     int Order;
     double *Coeffs;
  } ;
struct Bounding_Box_Struct  ;
struct Torus_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     double R;
     double r;
  } ;
struct Lathe_Spline_Entry_Struct {
     UV_VECT A;
     UV_VECT B;
     UV_VECT C;
     UV_VECT D;
  } ;
struct BCyl_Intersection_Struct {
     int n;
     double d[2];
     double w[2];
  } ;
struct BCyl_Entry_Struct {
     short r1;
     short r2;
     short h1;
     short h2;
  } ;
struct BCyl_Struct {
     int number;
     short nradius;
     short nheight;
     double *radius;
     double *height;
     BCYL_INT *rint;
     BCYL_INT *hint;
     BCYL_INT *intervals;
     BCYL_ENTRY *entry;
  } ;
struct Lathe_Spline_Struct {
     int References;
     LATHE_SPLINE_ENTRY *Entry;
     BCYL *BCyl;
  } ;
struct Bounding_Box_Struct  ;
struct Lathe_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     int Spline_Type;
     int Number;
     LATHE_SPLINE *Spline;
     double Height1;
     double Height2;
     double Radius1;
     double Radius2;
  } ;
struct Polygon_Data_Struct {
     int References;
     int Number;
     UV_VECT *Points;
  } ;
struct Bounding_Box_Struct  ;
struct Polygon_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     VECTOR S_Normal;
     POLYGON_DATA *Data;
     char __pad[4];
  } ;
struct Prism_Spline_Entry_Struct {
     double x1;
     double y1;
     double x2;
     double y2;
     double v1;
     double u2;
     double v2;
     UV_VECT A;
     UV_VECT B;
     UV_VECT C;
     UV_VECT D;
  } ;
struct Prism_Spline_Struct {
     int References;
     PRISM_SPLINE_ENTRY *Entry;
  } ;
struct Prism_Intersection_Structure {
     double d;
     double w;
     int n;
     int t;
  } ;
struct Bounding_Box_Struct  ;
struct Prism_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     int Number;
     int Spline_Type;
     int Sweep_Type;
     double Height1;
     double Height2;
     double x1;
     double y1;
     double x2;
     double y2;
     PRISM_SPLINE *Spline;
     PRISM_INT *Intersections;
     double u1;
     double v1;
     double u2;
     double v2;
  } ;
struct Sor_Spline_Entry_Struct {
     double A;
     double B;
     double C;
     double D;
  } ;
struct Sor_Spline_Struct {
     int References;
     SOR_SPLINE_ENTRY *Entry;
     BCYL *BCyl;
  } ;
struct Bounding_Box_Struct  ;
struct Sor_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     int Number;
     SOR_SPLINE *Spline;
     double Height1;
     double Height2;
     double Radius1;
     double Radius2;
     double Base_Radius_Squared;
     double Cap_Radius_Squared;
  } ;
struct Bounding_Box_Struct  ;
struct Superellipsoid_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     VECTOR Power;
  } ;
struct Bezier_Node_Struct {
     int Node_Type;
     VECTOR Center;
     double Radius_Squared;
     int Count;
     void *Data_Ptr;
  } ;
struct Bounding_Box_Struct  ;
struct Bicubic_Patch_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     int Patch_Type;
     int U_Steps;
     int V_Steps;
     double Control_Points[4][4][3];
     double ST[4][2];
     VECTOR Bounding_Sphere_Center;
     double Bounding_Sphere_Radius;
     double Flatness_Value;
     double accuracy;
     BEZIER_NODE *Node_Tree;
     WEIGHTS *Weights;
  } ;
struct Bounding_Box_Struct  ;
struct Triangle_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     VECTOR Normal_Vector;
     double Distance;
     unsigned int bits_at_112;
     VECTOR P1;
     VECTOR P2;
     VECTOR P3;
  } ;
struct Bounding_Box_Struct  ;
struct Smooth_Triangle_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     VECTOR Normal_Vector;
     double Distance;
     unsigned int bits_at_112;
     VECTOR P1;
     VECTOR P2;
     VECTOR P3;
     VECTOR N1;
     VECTOR N2;
     VECTOR N3;
     VECTOR Perp;
  } ;
struct Black_Hole_Warp {
     unsigned short Warp_Type;
     WARP *Prev_Warp;
     WARP *Next_Warp;
     VECTOR Center;
     VECTOR Repeat_Vector;
     VECTOR Uncertainty_Vector;
     double Strength;
     double Radius;
     double Radius_Squared;
     double Inverse_Radius;
     double Power;
     short Inverted;
     short Type;
     short Repeat;
     short Uncertain;
  } ;
struct Repeat_Warp {
     unsigned short Warp_Type;
     WARP *Prev_Warp;
     WARP *Next_Warp;
     int Axis;
     float Width;
     VECTOR Flip;
     VECTOR Offset;
  } ;
struct Cylindrical_Warp {
     unsigned short Warp_Type;
     WARP *Prev_Warp;
     WARP *Next_Warp;
     VECTOR Orientation_Vector;
     double DistExp;
  } ;
struct Spherical_Warp {
     unsigned short Warp_Type;
     WARP *Prev_Warp;
     WARP *Next_Warp;
     VECTOR Orientation_Vector;
     double DistExp;
  } ;
struct Toroidal_Warp {
     unsigned short Warp_Type;
     WARP *Prev_Warp;
     WARP *Next_Warp;
     VECTOR Orientation_Vector;
     double DistExp;
     double MajorRadius;
  } ;
struct Planar_Warp {
     unsigned short Warp_Type;
     WARP *Prev_Warp;
     WARP *Next_Warp;
     VECTOR Orientation_Vector;
     double OffSet;
  } ;
struct p {
     int ord;
     double coef[16];
  } ;
struct Sphere_Sweep_Intersection_Structure {
     double t;
     VECTOR Point;
     VECTOR Normal;
  } ;
}
struct tiff  ;
namespace pov {
struct Transform_Struct  ;
struct Trans_Warp {
     unsigned short Warp_Type;
     WARP *Prev_Warp;
     WARP *Next_Warp;
     TRANSFORM Trans;
  } ;
struct Bezier_Vertices_Struct {
     float uvbnds[4];
     double Vertices[4][3];
  } ;
struct Bezier_Child_Struct {
     BEZIER_NODE *Children[4];
  } ;
struct Cone_Intersection_Structure {
     double d;
     int t;
     char __pad[4];
  } ;
struct Chunk_Header_Struct {
     int name;
     int size;
  } ;
struct Bounding_Box_Struct  ;
struct Compound_Object_Struct {
     METHODS *Methods;
     int Type;
     OBJECT *Sibling;
     TEXTURE *Texture;
     TEXTURE *Interior_Texture;
     INTERIOR *Interior;
     OBJECT *Bound;
     OBJECT *Clip;
     LIGHT_SOURCE *LLights;
     BBOX BBox;
     TRANSFORM *Trans;
     TRANSFORM *UV_Trans;
     float Ph_Density;
     unsigned int Flags;
     OBJECT *Children;
  } ;
}
struct POVMSNode {
     struct POVMSNode *last;
     struct POVMSNode *next;
     unsigned int key;
     struct POVMSData  data;
  } ;
struct POVMS_Sys_QueueDataNode_Default {
     struct POVMS_Sys_QueueDataNode_Default *next;
     void *data;
     int len;
  } ;
struct POVMS_Sys_QueueNode_Default {
     int magic;
     int entries;
     POVMS_Sys_QueueDataNode_Default *first;
     POVMS_Sys_QueueDataNode_Default *last;
  } ;
struct POVMSReceiveHandlerNode {
     struct POVMSReceiveHandlerNode *last;
     struct POVMSReceiveHandlerNode *next;
     unsigned int handledclass;
     unsigned int handledid;
     void *handlerprivatedata;
     int (*handler)( POVMSObjectPtr , POVMSObjectPtr , int , void * );
  } ;
struct POVMSData  ;
struct POVMSContextData {
     int valid;
     POVMSReceiveHandlerNode *receivehandlerroot;
     POVMS_Sys_QueueNode_Default *queue;
     POVMSObject result;
  } ;
struct complex {
     double real;
     double imaginary;
  } ;
namespace pov_frontend {
struct RenderFrontend {
     enum EngineState  GetState( void );
  } ;
}
namespace pov_base {
struct IOBase {
     bool operator!( void );
  } ;
}
namespace pov {
struct Image_File_Class {
  protected:
    bool valid;
 public:
    Image_File_Class( struct Image_File_Class & );
     Image_File_Class( void );
     virtual ~Image_File_Class();
     virtual void Write_Line( COLOUR * );
     virtual int Read_Line( COLOUR * );
     virtual int Line( void );
     virtual int Width( void );
     virtual int Height( void );
     bool Valid( void );
     char __pad[3];
  } ;
}
namespace pov_base {
struct OStream  ;
}
namespace pov {
struct JPEG_Image {
 // none:
    // struct Image_File_Class  __inherit__;
 private:
    char *filename;
     int mode;
     int width;
     int height;
     int buffer_size;
     char *buffer;
     struct IStream *in_file;
     struct OStream *out_file;
 public:
    JPEG_Image( struct JPEG_Image & );
     JPEG_Image( char *, int , int , int , int  );
     virtual ~JPEG_Image();
     virtual void Write_Line( COLOUR * );
     virtual int Read_Line( COLOUR * );
     virtual int Line( void );
     virtual int Width( void );
     virtual int Height( void );
  } ;
}
namespace pov_base {
struct OStream {
     struct OStream  &flush( void );
  } ;
}
namespace pov {
struct PNG_Image {
 // none:
    // struct Image_File_Class  __inherit__;
 private:
    char *filename;
     int mode;
     int width;
     int height;
     int initial_line_number;
 public:
    PNG_Image( struct PNG_Image & );
     PNG_Image( char *, int , int , int , int  );
     virtual ~PNG_Image();
     virtual void Write_Line( COLOUR * );
     virtual int Read_Line( COLOUR * );
     virtual int Line( void );
     virtual int Width( void );
     virtual int Height( void );
  } ;
struct PPM_Image {
 // none:
    // struct Image_File_Class  __inherit__;
 private:
    char *filename;
     int mode;
     int width;
     int height;
     int line_number;
     struct IStream *in_file;
     struct OStream *out_file;
 public:
    PPM_Image( struct PPM_Image & );
     PPM_Image( char *, int , int , int , int  );
     virtual ~PPM_Image();
     virtual void Write_Line( COLOUR * );
     virtual int Read_Line( COLOUR * );
     virtual int Line( void );
     virtual int Width( void );
     virtual int Height( void );
  } ;
struct Targa_Image {
 // none:
    // struct Image_File_Class  __inherit__;
 private:
    char *filename;
     int mode;
     int width;
     int height;
     int line_number;
     struct IStream *in_file;
     struct OStream *out_file;
 public:
    Targa_Image( struct Targa_Image & );
     Targa_Image( char *, int , int , int , int  );
     virtual ~Targa_Image();
     virtual void Write_Line( COLOUR * );
     virtual int Read_Line( COLOUR * );
     virtual int Line( void );
     virtual int Width( void );
     virtual int Height( void );
 private:
    void Write_Pixel( double , double , double , double  );
  } ;
}
namespace pov_base {
struct TextStreamBuffer  ;
}
namespace pov {
struct DebugTextStreamBuffer {
 // none:
    // struct pov_base::TextStreamBuffer  __inherit__;
 public:
    DebugTextStreamBuffer( struct DebugTextStreamBuffer & );
     DebugTextStreamBuffer( void );
     virtual ~DebugTextStreamBuffer();
 protected:
    virtual void lineoutput( char *, unsigned int  );
     virtual void directoutput( char *, unsigned int  );
 public:
    char __pad[24];
  } ;
struct FNCode {
 private:
    struct FunctionCode *function;
     unsigned int max_program_size;
     unsigned int max_stack_size;
     unsigned int stack_pointer;
     unsigned int parameter_stack_pointer;
     int level;
 public:
    FNCode( struct FunctionCode *, bool , char * );
     void Parameter( void );
     void Compile( ExprNode * );
     void SetFlag( unsigned int , char * );
 private:
    FNCode( void );
     FNCode( struct FNCode & );
     void compile_recursive( ExprNode * );
     void compile_member( char * );
     void compile_call( ExprNode *, FUNCTION , int , char * );
     void compile_select( ExprNode * );
     void compile_seq_op( ExprNode *, unsigned int , double  );
     void compile_float_function_call( ExprNode *, FUNCTION , char * );
     void compile_vector_function_call( ExprNode *, FUNCTION , char * );
     void compile_inline( struct FunctionCode * );
     void compile_variable( char * );
     void compile_parameters( void );
     unsigned int compile_push_result( void );
     void compile_pop_result( unsigned int  );
     unsigned int compile_instruction( unsigned int , unsigned int , unsigned int , unsigned int  );
     unsigned int compile_instruction( unsigned int , unsigned int , unsigned int , unsigned int , unsigned int  );
  } ;
}
namespace pov_base {
struct PlatformBase {
      PlatformBase( void );
     virtual ~PlatformBase();
     virtual struct IStream *CreateIStream( unsigned int  );
     virtual struct OStream *CreateOStream( unsigned int  );
     struct PlatformBase  &GetPlatformBaseReference( void );
  } ;
template <class X> struct Pointer;
template <>
struct Pointer<pov_base::OStream> {
 private:
    struct OStream *ptr;
 public:
    Pointer( struct OStream * );
     Pointer( struct OStream & );
     ~Pointer();
     struct Pointer<pov_base::OStream>  &operator=( struct Pointer<pov_base::OStream> & );
     struct OStream  &operator*( void );
     struct OStream *operator->( void );
     struct OStream *get( void );
     struct OStream *release( void );
     void reset( struct OStream * );
     bool operator==( void * );
     bool operator!=( void * );
  } ;
template <class X> struct Pointer;
template <>
struct Pointer<pov_base::IStream> {
 private:
    struct IStream *ptr;
 public:
    Pointer( struct IStream * );
     Pointer( struct IStream & );
     ~Pointer();
     struct Pointer<pov_base::IStream>  &operator=( struct Pointer<pov_base::IStream> & );
     struct IStream  &operator*( void );
     struct IStream *operator->( void );
     struct IStream *get( void );
     struct IStream *release( void );
     void reset( struct IStream * );
     bool operator==( void * );
     bool operator!=( void * );
  } ;
}
struct POVMS_Container {
  protected:
    struct POVMSData  data;
 public:
    POVMS_Container( struct POVMS_Container & );
     struct POVMS_Container  &operator=( struct POVMS_Container & );
     POVMS_Container( void );
     virtual ~POVMS_Container();
     unsigned int Type( void );
     long Size( void );
     bool IsNull( void );
 protected:
    void DetachData( void );
  } ;
struct POVMSData  ;
struct POVMS_Object {
 // none:
    // struct POVMS_Container  __inherit__;
 public:
    POVMS_Object( unsigned int  );
     POVMS_Object( POVMSObject & );
     POVMS_Object( POVMSObjectPtr  );
     POVMS_Object( struct POVMS_Object & );
     virtual ~POVMS_Object();
     struct POVMS_Object  &operator=( struct POVMS_Object & );
     void Get( unsigned int , struct POVMS_Attribute & );
     void Get( unsigned int , struct POVMS_List & );
     void Get( unsigned int , struct POVMS_Object & );
     void Set( unsigned int , struct POVMS_Attribute & );
     void Set( unsigned int , struct POVMS_List & );
     void Set( unsigned int , struct POVMS_Object & );
     void Remove( unsigned int  );
     bool Exist( unsigned int  );
     void Merge( struct POVMS_Object & );
     POVMSObject &operator*( void );
     POVMSObjectPtr operator->( void );
     POVMSObject operator()( void );
     void SetString( unsigned int , char * );
     void SetInt( unsigned int , int  );
     void SetLong( unsigned int , long long  );
     void SetFloat( unsigned int , float  );
     void SetBool( unsigned int , int  );
     void SetType( unsigned int , unsigned int  );
     int GetStringLength( unsigned int  );
     int GetString( unsigned int , char *, int  );
     int GetInt( unsigned int  );
     long long GetLong( unsigned int  );
     float GetFloat( unsigned int  );
     int GetBool( unsigned int  );
     unsigned int GetType( unsigned int  );
 private:
    bool ReadHeader( unsigned char *, int & );
     bool ReadObject( unsigned char *, int  );
     bool WriteHeader( unsigned char *, int & );
     bool WriteObject( unsigned char *, int  );
  } ;
struct POVMS_Message {
 // none:
    // struct POVMS_Object  __inherit__;
 public:
    POVMS_Message( unsigned int , unsigned int , unsigned int  );
     POVMS_Message( POVMSObject & );
     POVMS_Message( POVMSObjectPtr  );
     POVMS_Message( struct POVMS_Object & );
     POVMS_Message( struct POVMS_Message & );
     struct POVMS_Message  &operator=( struct POVMS_Message & );
     unsigned int GetClass( void );
     unsigned int GetIdentifier( void );
     void *GetSourceAddress( void );
     void *GetDestinationAddress( void );
     void SetDestinationAddress( void * );
     virtual ~POVMS_Message();
  } ;
struct HandlerOO {
      HandlerOO( struct HandlerOO & );
     HandlerOO( void );
     virtual void Call( struct POVMS_Message &, struct POVMS_Message &, int  );
  } ;
struct Handler {
      Handler( struct Handler & );
     Handler( void );
     virtual void Call( POVMSObjectPtr , POVMSObjectPtr , int  );
  } ;
struct HandlerNode {
     struct HandlerNode *last;
     struct HandlerNode *next;
     unsigned int hclass;
     unsigned int hid;
     struct HandlerOO *handleroo;
     struct Handler *handler;
  } ;
struct POVMS_MessageReceiver {
  private:
    POVMSContext context;
     struct HandlerNode *receivers;
 protected:
    POVMS_MessageReceiver( POVMSContext  );
     virtual ~POVMS_MessageReceiver();
     void InstallFront( unsigned int , unsigned int , void (*)( struct POVMS_Message &, struct POVMS_Message &, int , void * ), void * );
     void InstallFront( unsigned int , unsigned int , void (*)( POVMSObjectPtr , POVMSObjectPtr , int , void * ), void * );
     void InstallBack( unsigned int , unsigned int , void (*)( struct POVMS_Message &, struct POVMS_Message &, int , void * ), void * );
     void InstallBack( unsigned int , unsigned int , void (*)( POVMSObjectPtr , POVMSObjectPtr , int , void * ), void * );
     void Remove( unsigned int , unsigned int  );
 private:
    POVMS_MessageReceiver( void );
     POVMS_MessageReceiver( struct POVMS_MessageReceiver & );
     struct POVMS_MessageReceiver  &operator=( struct POVMS_MessageReceiver & );
     int ReceiveHandler( POVMSObjectPtr , POVMSObjectPtr , int , void * );
     void AddNodeFront( unsigned int , unsigned int , struct HandlerOO *, struct Handler * );
     void AddNodeBack( unsigned int , unsigned int , struct HandlerOO *, struct Handler * );
     void RemoveNode( struct HandlerNode * );
  } ;
namespace pov_base {
struct INI_Parser_Table {
     char *keyword;
     unsigned int key;
     unsigned int type;
  } ;
struct Cmd_Parser_Table {
     char *command;
     unsigned int key;
     unsigned int type;
     unsigned int is_switch;
  } ;
struct ProcessOptions {
  private:
    struct INI_Parser_Table *parse_ini_table;
     struct Cmd_Parser_Table *parse_cmd_table;
 public:
    ProcessOptions( struct ProcessOptions & );
     ProcessOptions( struct INI_Parser_Table *, struct Cmd_Parser_Table * );
     ~ProcessOptions();
     int ParseFile( char *, POVMSObjectPtr  );
     int ParseString( char *, POVMSObjectPtr , bool  );
     int WriteFile( char *, POVMSObjectPtr  );
     int WriteFile( struct OTextStream *, POVMSObjectPtr  );
 protected:
    virtual int ReadSpecialOptionHandler( struct INI_Parser_Table *, char *, POVMSObjectPtr  );
     virtual int ReadSpecialSwitchHandler( struct Cmd_Parser_Table *, char *, POVMSObjectPtr , bool  );
     virtual int WriteSpecialOptionHandler( struct INI_Parser_Table *, POVMSObjectPtr , struct OTextStream * );
     virtual bool WriteOptionFilter( struct INI_Parser_Table * );
     virtual bool ProcessUnknownSwitch( char *, char *, POVMSObjectPtr  );
     virtual int ProcessUnknownString( char *, POVMSObjectPtr  );
     virtual struct ITextStream *OpenFileForRead( char *, POVMSObjectPtr  );
     virtual struct OTextStream *OpenFileForWrite( char *, POVMSObjectPtr  );
     virtual void ParseError( char * );
     virtual void ParseErrorAt( struct ITextStream *, char * );
     virtual void WriteError( char * );
 private:
    int Output_INI_Option( struct INI_Parser_Table *, POVMSObjectPtr , struct OTextStream * );
     int Parse_INI_Specification( char *, char &, char & );
     int Parse_INI_Skip_Space( struct ITextStream *, bool  );
     int Parse_INI_Skip_Line( struct ITextStream * );
     int Parse_INI_Option( struct ITextStream *, POVMSObjectPtr  );
     int Parse_INI_Switch( struct ITextStream *, int , POVMSObjectPtr  );
     char *Parse_INI_String( struct ITextStream *, int , bool  );
     bool Parse_INI_String_Smartmode( struct ITextStream * );
     int Parse_CL( char *, POVMSObjectPtr , bool  );
     void Parse_CL_Skip_Space( char & );
     int Parse_CL_Switch( char &, int , POVMSObjectPtr , bool  );
     int Parse_CL_Option( char &, POVMSObjectPtr , bool  );
     char *Parse_CL_String( char &, int  );
     int Process_INI_Option( struct INI_Parser_Table *, char *, POVMSObjectPtr  );
     int Process_Switch( struct Cmd_Parser_Table *, char *, POVMSObjectPtr , bool  );
     bool Matches( char *, char * );
     bool IsTrue( char * );
     bool IsFalse( char * );
  } ;
struct TextStreamBuffer {
  private:
    char *buffer;
     unsigned int boffset;
     unsigned int bsize;
     unsigned int wrap;
     unsigned int curline;
 public:
    TextStreamBuffer( struct TextStreamBuffer & );
     TextStreamBuffer( size_t , unsigned int  );
     virtual ~TextStreamBuffer();
     void printf( char * );
     void print( char * );
     void puts( char * );
     void putc( int  );
     void printfile( char *, unsigned long , int  );
     void printfile( FILE *, int  );
     void flush( void );
 protected:
    virtual void lineoutput( char *, unsigned int  );
     virtual void directoutput( char *, unsigned int  );
     virtual void rawoutput( char *, unsigned int  );
 private:
    void lineflush( void );
     void directflush( char *, unsigned int  );
  } ;
struct DefaultPlatformBase {
 // none:
    // struct PlatformBase  __inherit__;
 public:
    DefaultPlatformBase( struct DefaultPlatformBase & );
     DefaultPlatformBase( void );
     virtual ~DefaultPlatformBase();
     virtual struct IStream *CreateIStream( unsigned int  );
     virtual struct OStream *CreateOStream( unsigned int  );
     char __pad[4];
  } ;
}
namespace pov_frontend {
struct DefaultRenderFrontend {
 // none:
    // struct RenderFrontend  __inherit__;
 public:
    DefaultRenderFrontend( struct DefaultRenderFrontend & );
     DefaultRenderFrontend( POVMSContext , void * );
     virtual ~DefaultRenderFrontend();
     void BannerPrintf( char * );
     void BannerFlush( void );
     void PrintHelpScreens( void );
     void PrintUsage( int  );
 protected:
    virtual void OpenStreams( bool  );
     virtual void CloseStreams( void );
  } ;
struct DefaultStreamBuffer {
 // none:
    // struct pov_base::TextStreamBuffer  __inherit__;
 private:
    struct OStream *handle;
     bool linebuffermode;
     bool inhibitmode;
 public:
    DefaultStreamBuffer( struct DefaultStreamBuffer & );
     DefaultStreamBuffer( struct OStream *, bool , bool  );
     virtual ~DefaultStreamBuffer();
 protected:
    virtual void lineoutput( char *, unsigned int  );
     virtual void directoutput( char *, unsigned int  );
 public:
    char __pad[2];
  } ;
struct MessageOutput {
 // none:
    // struct POVMS_MessageReceiver  __inherit__;
 protected:
    struct pov_base::TextStreamBuffer  *streams[8];
     char *streamnames[8];
     bool consoleoutput[8];
 private:
    unsigned int output_string_buffer_size;
     char *output_string_buffer;
     char status_string_buffer[80];
 public:
    MessageOutput( struct MessageOutput & );
     MessageOutput( POVMSContext  );
     virtual ~MessageOutput();
 protected:
    virtual void OpenStreams( bool  );
     virtual void CloseStreams( void );
     void Printfile( int , char *, unsigned long , int  );
     void Printf( int , char * );
     void Flush( int  );
     void InitInfo( POVMSObjectPtr , POVMSObjectPtr , int  );
     void RenderOptions( POVMSObjectPtr , POVMSObjectPtr , int  );
     void RenderStarted( POVMSObjectPtr , POVMSObjectPtr , int  );
     void FrameStatistics( POVMSObjectPtr , POVMSObjectPtr , int  );
     void ParseStatistics( POVMSObjectPtr , POVMSObjectPtr , int  );
     void RenderStatistics( POVMSObjectPtr , POVMSObjectPtr , int  );
     void RenderDone( POVMSObjectPtr , POVMSObjectPtr , int  );
     void Progress( POVMSObjectPtr , POVMSObjectPtr , int  );
     void Warning( POVMSObjectPtr , POVMSObjectPtr , int  );
     void Error( POVMSObjectPtr , POVMSObjectPtr , int  );
     void FatalError( POVMSObjectPtr , POVMSObjectPtr , int  );
     void DebugInfo( POVMSObjectPtr , POVMSObjectPtr , int  );
     void FileMessage( int , POVMSObjectPtr  );
     char *GetOptionSwitchString( POVMSObjectPtr , unsigned int , bool  );
  } ;
}
template <class X> struct MemberHandler;
template <>
struct MemberHandler<pov_frontend::MessageOutput> {
 // none:
    // struct Handler  __inherit__;
 private:
    struct {
       void (*__pfn)( struct POVMSData *, struct POVMSData *, int  );
       int __delta;
    } handlerptr;
     struct MessageOutput *classptr;
 public:
    MemberHandler( struct MemberHandler<pov_frontend::MessageOutput> & );
     MemberHandler( void );
     MemberHandler( struct MessageOutput *, struct SSS  );
     virtual void Call( struct POVMSData *, struct POVMSData *, int  );
  } ;
namespace pov_frontend {
struct ProcessRenderOptions {
 // none:
    // struct pov_base::ProcessOptions  __inherit__;
 public:
    ProcessRenderOptions( struct ProcessRenderOptions & );
     ProcessRenderOptions( void );
     ~ProcessRenderOptions();
 protected:
    virtual int ReadSpecialOptionHandler( struct INI_Parser_Table *, char *, POVMSObjectPtr  );
     virtual int ReadSpecialSwitchHandler( struct Cmd_Parser_Table *, char *, POVMSObjectPtr , bool  );
     virtual int WriteSpecialOptionHandler( struct INI_Parser_Table *, POVMSObjectPtr , struct OTextStream * );
     virtual bool WriteOptionFilter( struct INI_Parser_Table * );
     virtual int ProcessUnknownString( char *, POVMSObjectPtr  );
     virtual struct ITextStream *OpenFileForRead( char *, POVMSObjectPtr  );
     virtual struct OTextStream *OpenFileForWrite( char *, POVMSObjectPtr  );
     struct ITextStream *OpenINIFileStream( char *, unsigned int , char *, POVMSObjectPtr  );
 public:
    char __pad[12];
  } ;
}
template <class X> struct MemberHandlerOO;
template <>
struct MemberHandlerOO<pov_frontend::RenderFrontend> {
 // none:
    // struct HandlerOO  __inherit__;
 private:
    struct {
       void (*__pfn)( struct POVMS_Message &, struct POVMS_Message &, int  );
       int __delta;
    } handlerptr;
     struct RenderFrontend *classptr;
 public:
    MemberHandlerOO( struct MemberHandlerOO<pov_frontend::RenderFrontend> & );
     MemberHandlerOO( void );
     MemberHandlerOO( struct RenderFrontend *, struct SSS  );
     virtual void Call( struct POVMS_Message &, struct POVMS_Message &, int  );
  } ;
namespace __debug {
struct nothrow_t {
     char __pad[1];
  } ;
}
struct timeval {
     __time_t tv_sec;
     __suseconds_t tv_usec;
  } ;
struct Visual {
     XExtData *ext_data;
     VisualID visualid;
     int c_class;
     unsigned long red_mask;
     unsigned long green_mask;
     unsigned long blue_mask;
     int bits_per_rgb;
     int map_entries;
  } ;
struct XVisualInfo {
     struct Visual *visual;
     VisualID visualid;
     int screen;
     int depth;
     int c_class;
     unsigned long red_mask;
     unsigned long green_mask;
     unsigned long blue_mask;
     int colormap_size;
     int bits_per_rgb;
  } ;
struct XColor {
     unsigned long pixel;
     unsigned short red;
     unsigned short green;
     unsigned short blue;
     char flags;
     char pad;
  } ;
struct XSetWindowAttributes {
     Pixmap background_pixmap;
     unsigned long background_pixel;
     Pixmap border_pixmap;
     unsigned long border_pixel;
     int bit_gravity;
     int win_gravity;
     int backing_store;
     unsigned long backing_planes;
     unsigned long backing_pixel;
     int save_under;
     long event_mask;
     long do_not_propagate_mask;
     int override_redirect;
     Colormap colormap;
     Cursor cursor;
  } ;
struct XSizeHints {
     long flags;
     int x;
     int y;
     int width;
     int height;
     int min_width;
     int min_height;
     int max_width;
     int max_height;
     int width_inc;
     int height_inc;
     struct {
       int x;
       int y;
    } min_aspect;
     struct {
       int x;
       int y;
    } max_aspect;
     int base_width;
     int base_height;
     int win_gravity;
  } ;
struct XWMHints {
     long flags;
     int input;
     int initial_state;
     Pixmap icon_pixmap;
     Window icon_window;
     int icon_x;
     int icon_y;
     Pixmap icon_mask;
     XID window_group;
  } ;
struct XClassHint {
     char *res_name;
     char *res_class;
  } ;
struct XGCValues {
     int function;
     unsigned long plane_mask;
     unsigned long foreground;
     unsigned long background;
     int line_width;
     int line_style;
     int cap_style;
     int join_style;
     int fill_style;
     int fill_rule;
     int arc_mode;
     Pixmap tile;
     Pixmap stipple;
     int ts_x_origin;
     int ts_y_origin;
     Font font;
     int subwindow_mode;
     int graphics_exposures;
     int clip_x_origin;
     int clip_y_origin;
     Pixmap clip_mask;
     int dash_offset;
     char dashes;
     char __pad[3];
  } ;
struct XpmColorSymbol {
     char *name;
     char *value;
     Pixel pixel;
  } ;
struct XpmExtension {
     char *name;
     unsigned int nlines;
     char **lines;
  } ;
struct XpmColor {
     char *string;
     char *symbolic;
     char *m_color;
     char *g4_color;
     char *g_color;
     char *c_color;
  } ;
struct XpmAttributes {
     unsigned long valuemask;
     struct Visual *visual;
     Colormap colormap;
     unsigned int depth;
     unsigned int width;
     unsigned int height;
     unsigned int x_hotspot;
     unsigned int y_hotspot;
     unsigned int cpp;
     Pixel *pixels;
     unsigned int npixels;
     struct XpmColorSymbol *colorsymbols;
     unsigned int numsymbols;
     char *rgb_fname;
     unsigned int nextensions;
     struct XpmExtension *extensions;
     unsigned int ncolors;
     struct XpmColor *colorTable;
     char *hints_cmt;
     char *colors_cmt;
     char *pixels_cmt;
     unsigned int mask_pixel;
     int exactColors;
     unsigned int closeness;
     unsigned int red_closeness;
     unsigned int green_closeness;
     unsigned int blue_closeness;
     int color_key;
     Pixel *alloc_pixels;
     int nalloc_pixels;
     int alloc_close_colors;
     int bitmap_format;
     XpmAllocColorFunc alloc_color;
     XpmFreeColorsFunc free_colors;
     void *color_closure;
  } ;
struct _XGC  ;
struct jpeg_error_mgr {
     void (*error_exit)( j_common_ptr  );
     void (*emit_message)( j_common_ptr , int  );
     void (*output_message)( j_common_ptr  );
     void (*format_message)( j_common_ptr , char * );
     void (*reset_error_mgr)( j_common_ptr  );
     int msg_code;
     union {
       int i[8];
       char s[80];
    } msg_parm;
     int trace_level;
     long num_warnings;
     char **jpeg_message_table;
     int last_jpeg_message;
     char **addon_message_table;
     int first_addon_message;
     int last_addon_message;
  } ;
struct jpeg_memory_mgr {
     void *(*alloc_small)( j_common_ptr , int , size_t  );
     void *(*alloc_large)( j_common_ptr , int , size_t  );
     JSAMPARRAY (*alloc_sarray)( j_common_ptr , int , JDIMENSION , JDIMENSION  );
     JBLOCKARRAY (*alloc_barray)( j_common_ptr , int , JDIMENSION , JDIMENSION  );
     jvirt_sarray_ptr (*request_virt_sarray)( j_common_ptr , int , boolean , JDIMENSION , JDIMENSION , JDIMENSION  );
     jvirt_barray_ptr (*request_virt_barray)( j_common_ptr , int , boolean , JDIMENSION , JDIMENSION , JDIMENSION  );
     void (*realize_virt_arrays)( j_common_ptr  );
     JSAMPARRAY (*access_virt_sarray)( j_common_ptr , jvirt_sarray_ptr , JDIMENSION , JDIMENSION , boolean  );
     JBLOCKARRAY (*access_virt_barray)( j_common_ptr , jvirt_barray_ptr , JDIMENSION , JDIMENSION , boolean  );
     void (*free_pool)( j_common_ptr , int  );
     void (*self_destruct)( j_common_ptr  );
     long max_memory_to_use;
     long max_alloc_chunk;
  } ;
struct jpeg_progress_mgr {
     void (*progress_monitor)( j_common_ptr  );
     long pass_counter;
     long pass_limit;
     int completed_passes;
     int total_passes;
  } ;
struct jpeg_destination_mgr {
     JOCTET *next_output_byte;
     size_t free_in_buffer;
     void (*init_destination)( j_compress_ptr  );
     boolean (*empty_output_buffer)( j_compress_ptr  );
     void (*term_destination)( j_compress_ptr  );
  } ;
struct JQUANT_TBL {
     UINT16 quantval[64];
     boolean sent_table;
  } ;
struct jpeg_component_info {
     int component_id;
     int component_index;
     int h_samp_factor;
     int v_samp_factor;
     int quant_tbl_no;
     int dc_tbl_no;
     int ac_tbl_no;
     JDIMENSION width_in_blocks;
     JDIMENSION height_in_blocks;
     int DCT_scaled_size;
     JDIMENSION downsampled_width;
     JDIMENSION downsampled_height;
     boolean component_needed;
     int MCU_width;
     int MCU_height;
     int MCU_blocks;
     int MCU_sample_width;
     int last_col_width;
     int last_row_height;
     struct JQUANT_TBL *quant_table;
     void *dct_table;
  } ;
struct JHUFF_TBL {
     UINT8 bits[17];
     UINT8 huffval[256];
     boolean sent_table;
  } ;
struct jpeg_scan_info {
     int comps_in_scan;
     int component_index[4];
     int Ss;
     int Se;
     int Ah;
     int Al;
  } ;
struct jpeg_comp_master  ;
struct jpeg_c_main_controller  ;
struct jpeg_c_prep_controller  ;
struct jpeg_c_coef_controller  ;
struct jpeg_marker_writer  ;
struct jpeg_color_converter  ;
struct jpeg_downsampler  ;
struct jpeg_forward_dct  ;
struct jpeg_entropy_encoder  ;
struct jpeg_compress_struct {
     struct jpeg_error_mgr *err;
     struct jpeg_memory_mgr *mem;
     struct jpeg_progress_mgr *progress;
     void *client_data;
     boolean is_decompressor;
     int global_state;
     struct jpeg_destination_mgr *dest;
     JDIMENSION image_width;
     JDIMENSION image_height;
     int input_components;
     enum J_COLOR_SPACE  in_color_space;
     double input_gamma;
     int data_precision;
     int num_components;
     enum J_COLOR_SPACE  jpeg_color_space;
     struct jpeg_component_info *comp_info;
     struct JQUANT_TBL  *quant_tbl_ptrs[4];
     struct JHUFF_TBL  *dc_huff_tbl_ptrs[4];
     struct JHUFF_TBL  *ac_huff_tbl_ptrs[4];
     UINT8 arith_dc_L[16];
     UINT8 arith_dc_U[16];
     UINT8 arith_ac_K[16];
     int num_scans;
     struct jpeg_scan_info *scan_info;
     boolean raw_data_in;
     boolean arith_code;
     boolean optimize_coding;
     boolean CCIR601_sampling;
     int smoothing_factor;
     enum J_DCT_METHOD  dct_method;
     unsigned int restart_interval;
     int restart_in_rows;
     boolean write_JFIF_header;
     UINT8 JFIF_major_version;
     UINT8 JFIF_minor_version;
     UINT8 density_unit;
     UINT16 X_density;
     UINT16 Y_density;
     boolean write_Adobe_marker;
     JDIMENSION next_scanline;
     boolean progressive_mode;
     int max_h_samp_factor;
     int max_v_samp_factor;
     JDIMENSION total_iMCU_rows;
     int comps_in_scan;
     struct jpeg_component_info  *cur_comp_info[4];
     JDIMENSION MCUs_per_row;
     JDIMENSION MCU_rows_in_scan;
     int blocks_in_MCU;
     int MCU_membership[10];
     int Ss;
     int Se;
     int Ah;
     int Al;
     struct jpeg_comp_master *master;
     struct jpeg_c_main_controller *main;
     struct jpeg_c_prep_controller *prep;
     struct jpeg_c_coef_controller *coef;
     struct jpeg_marker_writer *marker;
     struct jpeg_color_converter *cconvert;
     struct jpeg_downsampler *downsample;
     struct jpeg_forward_dct *fdct;
     struct jpeg_entropy_encoder *entropy;
     struct jpeg_scan_info *script_space;
     int script_space_size;
  } ;
struct jpeg_source_mgr {
     JOCTET *next_input_byte;
     size_t bytes_in_buffer;
     void (*init_source)( j_decompress_ptr  );
     boolean (*fill_input_buffer)( j_decompress_ptr  );
     void (*skip_input_data)( j_decompress_ptr , long  );
     boolean (*resync_to_restart)( j_decompress_ptr , int  );
     void (*term_source)( j_decompress_ptr  );
  } ;
struct POV_JPEG_Write_Buffer {
     struct jpeg_error_mgr  jerr;
     struct jpeg_source_mgr  jsrc;
     struct jpeg_destination_mgr  jdest;
     jmp_buf setjmp_buffer;
     char buffer[1024];
     JSAMPROW row_pointer[1];
     int row_stride;
     struct jpeg_compress_struct  cinfo;
     struct OStream *file;
     char __pad[4];
  } ;
struct jpeg_decomp_master  ;
struct jpeg_d_main_controller  ;
struct jpeg_d_coef_controller  ;
struct jpeg_d_post_controller  ;
struct jpeg_input_controller  ;
struct jpeg_marker_reader  ;
struct jpeg_entropy_decoder  ;
struct jpeg_inverse_dct  ;
struct jpeg_upsampler  ;
struct jpeg_color_deconverter  ;
struct jpeg_color_quantizer  ;
struct jpeg_decompress_struct {
     struct jpeg_error_mgr *err;
     struct jpeg_memory_mgr *mem;
     struct jpeg_progress_mgr *progress;
     void *client_data;
     boolean is_decompressor;
     int global_state;
     struct jpeg_source_mgr *src;
     JDIMENSION image_width;
     JDIMENSION image_height;
     int num_components;
     enum J_COLOR_SPACE  jpeg_color_space;
     enum J_COLOR_SPACE  out_color_space;
     unsigned int scale_num;
     unsigned int scale_denom;
     double output_gamma;
     boolean buffered_image;
     boolean raw_data_out;
     enum J_DCT_METHOD  dct_method;
     boolean do_fancy_upsampling;
     boolean do_block_smoothing;
     boolean quantize_colors;
     enum J_DITHER_MODE  dither_mode;
     boolean two_pass_quantize;
     int desired_number_of_colors;
     boolean enable_1pass_quant;
     boolean enable_external_quant;
     boolean enable_2pass_quant;
     JDIMENSION output_width;
     JDIMENSION output_height;
     int out_color_components;
     int output_components;
     int rec_outbuf_height;
     int actual_number_of_colors;
     JSAMPARRAY colormap;
     JDIMENSION output_scanline;
     int input_scan_number;
     JDIMENSION input_iMCU_row;
     int output_scan_number;
     JDIMENSION output_iMCU_row;
     int (*coef_bits)[64];
     struct JQUANT_TBL  *quant_tbl_ptrs[4];
     struct JHUFF_TBL  *dc_huff_tbl_ptrs[4];
     struct JHUFF_TBL  *ac_huff_tbl_ptrs[4];
     int data_precision;
     struct jpeg_component_info *comp_info;
     boolean progressive_mode;
     boolean arith_code;
     UINT8 arith_dc_L[16];
     UINT8 arith_dc_U[16];
     UINT8 arith_ac_K[16];
     unsigned int restart_interval;
     boolean saw_JFIF_marker;
     UINT8 JFIF_major_version;
     UINT8 JFIF_minor_version;
     UINT8 density_unit;
     UINT16 X_density;
     UINT16 Y_density;
     boolean saw_Adobe_marker;
     UINT8 Adobe_transform;
     boolean CCIR601_sampling;
     jpeg_saved_marker_ptr marker_list;
     int max_h_samp_factor;
     int max_v_samp_factor;
     int min_DCT_scaled_size;
     JDIMENSION total_iMCU_rows;
     JSAMPLE *sample_range_limit;
     int comps_in_scan;
     struct jpeg_component_info  *cur_comp_info[4];
     JDIMENSION MCUs_per_row;
     JDIMENSION MCU_rows_in_scan;
     int blocks_in_MCU;
     int MCU_membership[10];
     int Ss;
     int Se;
     int Ah;
     int Al;
     int unread_marker;
     struct jpeg_decomp_master *master;
     struct jpeg_d_main_controller *main;
     struct jpeg_d_coef_controller *coef;
     struct jpeg_d_post_controller *post;
     struct jpeg_input_controller *inputctl;
     struct jpeg_marker_reader *marker;
     struct jpeg_entropy_decoder *entropy;
     struct jpeg_inverse_dct *idct;
     struct jpeg_upsampler *upsample;
     struct jpeg_color_deconverter *cconvert;
     struct jpeg_color_quantizer *cquantize;
  } ;
struct POV_JPEG_Read_Buffer {
     struct jpeg_error_mgr  jerr;
     struct jpeg_source_mgr  jsrc;
     struct jpeg_destination_mgr  jdest;
     jmp_buf setjmp_buffer;
     char buffer[1024];
     JSAMPROW row_pointer[1];
     int row_stride;
     struct jpeg_decompress_struct  cinfo;
     struct IStream *file;
     char __pad[4];
  } ;
namespace pov {
struct mem_node {
     size_t size;
  } ;
}
namespace pov_base {
struct POV_File_Extensions {
     char *ext[4];
  } ;
}
namespace pov {
struct Token_Struct {
     TOKEN Token_Id;
     TOKEN Function_Id;
     struct pov_base::FilePos  Token_File_Pos;
     int Token_Col_No;
     int Table_Index;
     char *Token_String;
     double Token_Float;
     int Unget_Token;
     int End_Of_File;
     struct ITextStream *FileHandle;
     void *Data;
     int *NumberPtr;
     void **DataPtr;
     bool is_array_elem;
     char __pad[7];
  } ;
struct InputFileData {
     struct ITextStream *In_File;
     bool R_Flag;
     char __pad[3];
  } ;
struct longDateTime {
     ULONG bc;
     ULONG ad;
  } ;
struct sfnt_FontHeader {
     Fixed version;
     Fixed fontRevision;
     ULONG checkSumAdjustment;
     ULONG magicNumber;
     USHORT flags;
     USHORT unitsPerEm;
     struct longDateTime  created;
     struct longDateTime  modified;
     FWord xMin;
     FWord yMin;
     FWord xMax;
     FWord yMax;
     USHORT macStyle;
     USHORT lowestRecPPEM;
     SHORT fontDirectionHint;
     SHORT indexToLocFormat;
     SHORT glyphDataFormat;
     char __pad[2];
  } ;
struct GlyphHeader {
     SHORT numContours;
     SHORT xMin;
     SHORT yMin;
     SHORT xMax;
     SHORT yMax;
  } ;
struct GlyphOutline {
     struct GlyphHeader  header;
     USHORT numPoints;
     USHORT *endPoints;
     BYTE *flags;
     double *x;
     double *y;
     USHORT myMetrics;
     char __pad[2];
  } ;
struct sfnt_OffsetTable {
     Fixed version;
     USHORT numTables;
     USHORT searchRange;
     USHORT entrySelector;
     USHORT rangeShift;
  } ;
struct sfnt_TableDirectory {
     BYTE tag[4];
     ULONG checkSum;
     ULONG offset;
     ULONG length;
  } ;
struct sfnt_platformEntry {
     USHORT platformID;
     USHORT specificID;
     ULONG offset;
  } ;
struct sfnt_mappingTable {
     USHORT format;
     USHORT length;
     USHORT version;
  } ;
struct Opcode {
     char *name;
     unsigned int code;
     int type;
  } ;
struct Trap {
     double (*fn)( double *, unsigned int  );
     unsigned int parameter_cnt;
  } ;
struct TrapS {
     void (*fn)( double *, unsigned int , unsigned int  );
     unsigned int parameter_cnt;
  } ;
}
struct tiff  ;
namespace pov {
struct ISO_Pair {
     double t;
     double f;
  } ;
struct ExprParserErrorEntry {
     int stage;
     char *expected;
  } ;
struct ExprParserTableEntry {
     int stage;
     TOKEN token;
     bool (*operation)( ExprNode &, int , int  );
     int next;
     int op;
  } ;
}
struct POVMS_Attribute {
 // none:
    // struct POVMS_Container  __inherit__;
 public:
    POVMS_Attribute( void );
     POVMS_Attribute( char * );
     POVMS_Attribute( int  );
     POVMS_Attribute( long long  );
     POVMS_Attribute( float  );
     POVMS_Attribute( bool  );
     POVMS_Attribute( unsigned int  );
     POVMS_Attribute( POVMSAttribute & );
     POVMS_Attribute( struct POVMS_Attribute & );
     virtual ~POVMS_Attribute();
     struct POVMS_Attribute  &operator=( struct POVMS_Attribute & );
     void Get( unsigned int , void *, int * );
     void Set( unsigned int , void *, int  );
  } ;
struct POVMS_List {
 // none:
    // struct POVMS_Container  __inherit__;
 public:
    POVMS_List( void );
     POVMS_List( POVMSAttributeList & );
     POVMS_List( struct POVMS_List & );
     virtual ~POVMS_List();
     struct POVMS_List  &operator=( struct POVMS_List & );
     void Append( struct POVMS_Attribute & );
     void Append( struct POVMS_List & );
     void Append( struct POVMS_Object & );
     void GetNth( int , struct POVMS_Attribute & );
     void GetNth( int , struct POVMS_List & );
     void GetNth( int , struct POVMS_Object & );
     void SetNth( int , struct POVMS_Attribute & );
     void SetNth( int , struct POVMS_List & );
     void SetNth( int , struct POVMS_Object & );
     void RemoveNth( int  );
     void Clear( void );
  } ;
struct jpeg_comp_master  ;
struct jpeg_c_main_controller  ;
struct jpeg_c_prep_controller  ;
struct jpeg_c_coef_controller  ;
struct jpeg_marker_writer  ;
struct jpeg_color_converter  ;
struct jpeg_downsampler  ;
struct jpeg_forward_dct  ;
struct jpeg_entropy_encoder  ;
namespace pov {
struct Contour {
     BYTE inside_flag;
     USHORT count;
     BYTE *flags;
     double *x;
     double *y;
  } ;
struct GlyphStruct {
     struct GlyphHeader  header;
     USHORT glyph_index;
     struct Contour *contours;
     USHORT unitsPerEm;
     GlyphPtr next;
     USHORT c;
     USHORT myMetrics;
  } ;
}
struct _XDisplay  ;
struct jpeg_common_struct {
     struct jpeg_error_mgr *err;
     struct jpeg_memory_mgr *mem;
     struct jpeg_progress_mgr *progress;
     void *client_data;
     boolean is_decompressor;
     int global_state;
  } ;
struct jpeg_marker_struct {
     jpeg_saved_marker_ptr next;
     UINT8 marker;
     unsigned int original_length;
     unsigned int data_length;
     JOCTET *data;
  } ;
struct jpeg_decomp_master  ;
struct jpeg_d_main_controller  ;
struct jpeg_d_coef_controller  ;
struct jpeg_d_post_controller  ;
struct jpeg_input_controller  ;
struct jpeg_marker_reader  ;
struct jpeg_entropy_decoder  ;
struct jpeg_inverse_dct  ;
struct jpeg_upsampler  ;
struct jpeg_color_deconverter  ;
struct jpeg_color_quantizer  ;
struct jvirt_sarray_control  ;
struct jvirt_barray_control  ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
namespace pov {
void no_interpolation( IMAGE *, double , double , float *, int * );
void Destroy_Image( IMAGE * );
IMAGE *Create_Image( void );
HF_VAL image_height_at( IMAGE *, int , int  );
int planar_image_map( double *, IMAGE *, double *, double * );
int map( double *, TPATTERN *, double *, double * );
void Interp( IMAGE *, double , double , float *, int * );
TEXTURE *material_map( double *, TEXTURE * );
int image_map( double *, PIGMENT *, float * );
void bump_map( double *, TNORMAL *, double * );
double image_pattern( double *, TPATTERN * );
void pov_free( void *, char *, int  );
void *pov_calloc( size_t , size_t , char *, int , char * );
int Error( char * );
}
double fmod( double , double  );
double asin( double  );
double acos( double  );
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
