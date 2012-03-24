#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct _GtsFifo GtsFifo;
typedef struct _GList GList;
typedef void *gpointer;
struct _GList {
     gpointer data;
     GList *next;
     GList *prev;
  } ;
struct _GtsFifo {
     GList *head;
     GList *tail;
  } ;
typedef int gint;
typedef gint (*GtsFunc)( gpointer , gpointer  );
typedef gint gboolean;
typedef unsigned int guint;
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
typedef unsigned int gsize;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void gts_fifo_foreach( GtsFifo *, GtsFunc , gpointer  );
gboolean gts_fifo_is_empty( GtsFifo * );
gpointer gts_fifo_top( GtsFifo * );
void gts_fifo_reverse( GtsFifo * );
void gts_fifo_destroy( GtsFifo * );
guint gts_fifo_size( GtsFifo * );
gpointer gts_fifo_pop( GtsFifo * );
void gts_fifo_push( GtsFifo *, gpointer  );
void gts_fifo_write( GtsFifo *, FILE * );
GtsFifo *gts_fifo_new( void );
void g_free( gpointer  );
int __fprintf_chk( void *, int , char *, ... );
void g_list_free( GList * );
gpointer g_malloc( gsize  );
guint g_list_length( GList * );
void g_return_if_fail_warning( char *, char *, char * );
GList *g_list_remove_link( GList *, GList * );
void g_list_free_1( GList * );
GList *g_list_reverse( GList * );
GList *g_list_prepend( GList *, gpointer  );
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
