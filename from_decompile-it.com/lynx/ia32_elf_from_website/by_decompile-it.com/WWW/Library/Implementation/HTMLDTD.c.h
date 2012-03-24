#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct _HTStructured HTStructured;
typedef struct _HTStructuredClass HTStructuredClass;
typedef void *HTError;
typedef char BOOLEAN;
struct _HTStructuredClass {
     char *name;
     void (*_free)( HTStructured * );
     void (*_abort)( HTStructured *, HTError  );
     void (*put_character)( HTStructured *, char  );
     void (*put_string)( HTStructured *, char * );
     void (*put_block)( HTStructured *, char *, int  );
     int (*start_element)( HTStructured *, int , BOOLEAN *, char **, int , char ** );
     int (*end_element)( HTStructured *, int , char ** );
     int (*put_entity)( HTStructured *, int  );
  } ;
struct _HTStructured {
     HTStructuredClass *isa;
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
typedef struct _tag HTTag;
typedef struct {
     char *name;
     char type;
     char __pad[3];
  } attr;
typedef attr *AttrList;
typedef struct {
     char *name;
     AttrList list;
  } AttrType;
typedef enum  { SGML_EMPTY = 0, SGML_LITTERAL = 1, SGML_CDATA = 2, SGML_SCRIPT = 3, SGML_RCDATA = 4, SGML_MIXED = 5, SGML_ELEMENT = 6, SGML_PCDATA = 7, } SGMLContent;
typedef int TagClass;
typedef int TagFlags;
struct _tag {
     char *name;
     int name_len;
     BOOLEAN can_justify;
     AttrList attributes;
     int number_of_attributes;
     AttrType *attr_types;
     SGMLContent contents;
     TagClass tagclass;
     TagClass contains;
     TagClass icontains;
     TagClass contained;
     TagClass icontained;
     TagClass canclose;
     TagFlags flags;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
FILE *TraceFP( void );
void HTSwitchDTD( int  );
void HTStartAnchor( HTStructured *, char *, char * );
void HTStartAnchor5( HTStructured *, char *, char *, char *, int  );
void HTStartIsIndex( HTStructured *, char *, char * );
void *memcpy( void *, void *, unsigned int  );
int fprintf( FILE *, char *, ... );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
