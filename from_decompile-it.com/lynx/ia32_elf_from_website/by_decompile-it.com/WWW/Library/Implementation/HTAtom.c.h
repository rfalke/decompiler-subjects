#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct _HTList HTList;
struct _HTList {
     void *object;
     HTList *next;
  } ;
typedef struct _HTAtom HTAtom;
struct _HTAtom {
     HTAtom *next;
     char *name;
  } ;
typedef char BOOLEAN;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void outofmem( char *, char * );
HTAtom *HTAtom_for( char * );
BOOLEAN mime_match( char *, char * );
HTList *HTAtom_templateMatches( char * );
HTList *HTList_new( void );
void HTList_addObject( HTList *, void * );
int strcasecomp( char *, char * );
char *HTSACopy( char **, char * );
char *strchr( char *, char  );
unsigned int strlen( char * );
char *strcpy( char *, char * );
void *malloc( unsigned int  );
int strcmp( char *, char * );
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
