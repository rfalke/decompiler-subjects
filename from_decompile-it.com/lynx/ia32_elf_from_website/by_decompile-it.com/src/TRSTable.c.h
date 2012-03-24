#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef enum  { CS_invalid = -1, CS__new = 0, CS__0new = 1, CS__0eb = 2, CS__eb = 3, CS__0cb = 4, CS__cb = 5, CS__0ef = 6, CS__ef = 7, CS__0cf = 8, CS__cf = 9, CS__ebc = 10, CS__cbc = 11, } cellstate_t;
typedef struct _STable_rowinfo STable_rowinfo;
typedef char BOOLEAN;
typedef struct _STable_cellinfo STable_cellinfo;
struct _STable_cellinfo {
     int cLine;
     int pos;
     int len;
     int colspan;
     int alignment;
  } ;
struct _STable_rowinfo {
     int Line;
     int ncells;
     BOOLEAN fixed_line;
     enum ended_state { ROW_not_ended = 0, ROW_ended_by_endtr = 1, ROW_ended_by_splitline = 2, } ended;
     int content;
     int offset;
     int allocated;
     STable_cellinfo *cells;
     int alignment;
  } ;
typedef struct _STable_info STable_info;
typedef struct _STable_states STable_states;
struct _STable_states {
     cellstate_t prev_state;
     cellstate_t state;
     int lineno;
     int icell_core;
     int x_td;
     int pending_len;
  } ;
struct _STable_info {
     struct _STable_info *enclosing;
     struct _TextAnchor *enclosing_last_anchor_before_stbl;
     int startline;
     int nrows;
     int ncols;
     int maxlen;
     int maxpos;
     int allocated_rows;
     int allocated_sumcols;
     int ncolinfo;
     STable_cellinfo *sumcols;
     STable_rowinfo *rows;
     STable_rowinfo rowspans2eog;
     short alignment;
     short rowgroup_align;
     short pending_colgroup_align;
     int pending_colgroup_next;
     STable_states s;
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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
FILE *TraceFP( void );
char *cellstate_s( cellstate_t  );
STable_info *Stbl_startTABLE( short  );
void free_rowinfo( STable_rowinfo * );
void Stbl_free( STable_info * );
int Stbl_addCellToRow( STable_rowinfo *, STable_cellinfo *, int , STable_states *, int , int , int , int , int * );
int Stbl_reserveCellsInRow( STable_rowinfo *, int , int  );
int Stbl_finishCellInRow( STable_rowinfo *, STable_states *, int , int , int  );
int Stbl_reserveCellsInTable( STable_info *, int , int , int  );
void Stbl_cancelRowSpans( STable_info * );
int Stbl_addRowToTable( STable_info *, int , int  );
int Stbl_finishRowInTable( STable_info * );
void update_sumcols0( STable_cellinfo *, STable_rowinfo *, int , int , int , int , int  );
int get_remaining_colspan( STable_rowinfo *, STable_cellinfo *, int , int , int  );
int Stbl_fakeFinishCellInTable( STable_info *, STable_rowinfo *, int , int  );
int Stbl_addCellToTable( STable_info *, int , int , int , int , int , int , int  );
int Stbl_finishCellInTable( STable_info *, int , int , int , int  );
int Stbl_addColInfo( STable_info *, int , short , BOOLEAN  );
int Stbl_finishColGroup( STable_info * );
int Stbl_addRowGroup( STable_info *, short  );
int Stbl_finishTABLE( STable_info * );
int get_fixup_positions( STable_rowinfo *, int *, int *, STable_cellinfo * );
int Stbl_getFixupPositions( STable_info *, int , int *, int * );
void Stbl_update_enclosing( STable_info *, int , int  );
void *realloc( void *, unsigned int  );
void *calloc( unsigned int , unsigned int  );
void free( void * );
void *memcpy( void *, void *, unsigned int  );
int fprintf( FILE *, char *, ... );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN LYShowScrollbar;
extern int LYcols;
extern BOOLEAN nested_tables;
extern int LYwideLines;
extern BOOLEAN WWW_TraceFlag;
extern int WWW_TraceMask;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
