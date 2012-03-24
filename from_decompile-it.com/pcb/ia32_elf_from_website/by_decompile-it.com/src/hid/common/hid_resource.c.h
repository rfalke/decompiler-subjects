#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct Resource Resource;
typedef struct ResourceVal ResourceVal;
struct ResourceVal {
     char *name;
     char *value;
     struct Resource *subres;
  } ;
struct Resource {
     struct Resource *parent;
     void *user_ptr;
     int flags;
     int c;
     ResourceVal *v;
  } ;
typedef struct _GtkActionGroup GtkActionGroup;
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
typedef struct _GtkActionGroupPrivate GtkActionGroupPrivate;
struct _GtkActionGroupPrivate  ;
struct _GtkActionGroup {
     GObject parent;
     GtkActionGroupPrivate *private_data;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void resource_add_val( Resource *, char *, char *, Resource * );
Resource *resource_create( Resource * );
int hid_parse_actions( char *, int (*)( char *, int , char ** ) );
int hid_actionv( char *, int , char ** );
void do_mouse_action( int , int  );
unsigned int parse_mods( char * );
Resource *res_wrap( char * );
void load_mouse_resource( Resource * );
int *__errno_location( void );
void *strtol( char *, char **, int  );
int strcasecmp( char *, char * );
char *strstr( char *, char * );
void *malloc( unsigned int  );
void *__ctype_tolower_loc( void );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
/* Warning:  conflicting decls for actions */
/* Warning:  conflicting decls for mods */
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
