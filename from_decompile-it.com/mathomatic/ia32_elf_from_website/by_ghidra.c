typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long double    longdouble;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[40];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};


// WARNING! conflicting data type names: /DWARF/size_t - /stddef.h/size_t

typedef bool _Bool;


// WARNING! conflicting data type names: /DWARF/__off_t - /types.h/__off_t


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker

typedef struct complexs complexs, *Pcomplexs;

struct complexs {
    double re;
    double im;
};

typedef union storage_type storage_type, *Pstorage_type;

union storage_type {
    double constant;
    long variable;
    int operatr;
};

typedef struct sort_type sort_type, *Psort_type;

struct sort_type {
    long v;
    int count;
};

typedef enum language_list {
    C=1,
    JAVA=2,
    PYTHON=3
} language_list;

typedef char sign_array_type[64];

typedef struct token_type token_type, *Ptoken_type;

typedef enum kind_list {
    CONSTANT=0,
    VARIABLE=1,
    OPERATOR=2
} kind_list;

struct token_type {
    enum kind_list kind;
    int level;
    union storage_type token;
};

typedef struct winsize winsize, *Pwinsize;

struct winsize {
    ushort ws_row;
    ushort ws_col;
    ushort ws_xpixel;
    ushort ws_ypixel;
};

typedef struct com_type com_type, *Pcom_type;

struct com_type {
    char * name;
    char * secondary_name;
    int (* func)(...);
    char * usage;
    char * info;
    char * extra;
};

typedef enum anon_enum_32 {
    _ISblank=1,
    _IScntrl=2,
    _ISpunct=4,
    _ISalnum=8,
    _ISupper=256,
    _ISlower=512,
    _ISalpha=1024,
    _ISdigit=2048,
    _ISxdigit=4096,
    _ISspace=8192,
    _ISprint=16384,
    _ISgraph=32768
} anon_enum_32;


// WARNING! conflicting data type names: /DWARF/stdio.h/_IO_FILE - /stdio.h/_IO_FILE

typedef struct _IO_FILE FILE;

typedef int __jmp_buf[6];

typedef struct __jmp_buf_tag __jmp_buf_tag, *P__jmp_buf_tag;

typedef struct __sigset_t __sigset_t, *P__sigset_t;

struct __sigset_t {
    ulong __val[32];
};

struct __jmp_buf_tag {
    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    struct __sigset_t __saved_mask;
};

typedef struct __jmp_buf_tag jmp_buf[1];


// WARNING! conflicting data type names: /stdio.h/FILE - /DWARF/stdio.h/FILE

typedef int __int32_t;

typedef void (* __sighandler_t)(int);

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef int (* __compar_fn_t)(void *, void *);

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType_x86;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_x86 sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_x86 {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType_x86;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iStack_c;
  
  __gmon_start__();
  frame_dummy();
  __do_global_ctors_aux();
  return iStack_c;
}



void FUN_08048e84(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double fmod(double __x,double __y)

{
  longdouble extraout_ST0;
  
  fmod(__x,__y);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void setbuf(FILE *__stream,char *__buf)

{
  setbuf(__stream,__buf);
  return;
}



void rl_initialize(void)

{
  rl_initialize();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  qsort(__base,__nmemb,__size,__compar);
  return;
}



void write_history(void)

{
  write_history();
  return;
}



void __longjmp_chk(void)

{
                    // WARNING: Subroutine does not return
  __longjmp_chk();
}



void __fprintf_chk(void)

{
  __fprintf_chk();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



void __printf_chk(void)

{
  __printf_chk();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __isinf(double __value)

{
  int iVar1;
  
  iVar1 = __isinf(__value);
  return iVar1;
}



void read_history(void)

{
  read_history();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double strtod(char *__nptr,char **__endptr)

{
  longdouble extraout_ST0;
  
  strtod(__nptr,__endptr);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = getenv(__name);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int system(char *__command)

{
  int iVar1;
  
  iVar1 = system(__command);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double pow(double __x,double __y)

{
  longdouble extraout_ST0;
  
  pow(__x,__y);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = fgets(__s,__n,__stream);
  return pcVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void tigetnum(void)

{
  tigetnum();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double modf(double __x,double *__iptr)

{
  longdouble extraout_ST0;
  
  modf(__x,__iptr);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void perror(char *__s)

{
  perror(__s);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double exp(double __x)

{
  longdouble extraout_ST0;
  
  exp(__x);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = strtol(__nptr,__endptr,__base);
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fdopen(__fd,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = access(__name,__type);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int mkstemp(char *__template)

{
  int iVar1;
  
  iVar1 = mkstemp(__template);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = ioctl(__fd,__request);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = __ctype_b_loc();
  return ppuVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = isatty(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = _setjmp(__env);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = getopt(___argc,___argv,__shortopts);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double cos(double __x)

{
  longdouble extraout_ST0;
  
  cos(__x);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = unlink(__name);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __finite(double __value)

{
  int iVar1;
  
  iVar1 = __finite(__value);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int chdir(char *__path)

{
  int iVar1;
  
  iVar1 = chdir(__path);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double lgamma(double param_1)

{
  longdouble extraout_ST0;
  
  lgamma(param_1);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcasecmp(char *__s1,char *__s2)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void stifle_history(void)

{
  stifle_history();
  return;
}



void readline(void)

{
  readline();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double atan2(double __y,double __x)

{
  longdouble extraout_ST0;
  
  atan2(__y,__x);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __isnan(double __value)

{
  int iVar1;
  
  iVar1 = __isnan(__value);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__int32_t ** __ctype_tolower_loc(void)

{
  __int32_t **pp_Var1;
  
  pp_Var1 = __ctype_tolower_loc();
  return pp_Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = getcwd(__buf,__size);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double log(double __x)

{
  longdouble extraout_ST0;
  
  log(__x);
  return (double)extraout_ST0;
}



void using_history(void)

{
  using_history();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void __snprintf_chk(void)

{
  __snprintf_chk();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strpbrk(char *__s,char *__accept)

{
  char *pcVar1;
  
  pcVar1 = strpbrk(__s,__accept);
  return pcVar1;
}



void __memmove_chk(void)

{
  __memmove_chk();
  return;
}



void add_history(void)

{
  add_history();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double sin(double __x)

{
  longdouble extraout_ST0;
  
  sin(__x);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void __strdup(void)

{
  __strdup();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void sincos(double __x,double *__sinx,double *__cosx)

{
  sincos(__x,__sinx,__cosx);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double ceil(double __x)

{
  longdouble extraout_ST0;
  
  ceil(__x);
  return (double)extraout_ST0;
}



void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,__libc_csu_init,__libc_csu_fini,param_1,auStack_4)
  ;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0804932a)
// WARNING: Removing unreachable block (ram,0x08049330)

void __do_global_dtors_aux(void)

{
  if (completed_7065 == '\0') {
    completed_7065 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0804936f)
// WARNING: Removing unreachable block (ram,0x08049378)

void frame_dummy(void)

{
  return;
}



// WARNING: Unknown calling convention

void fphandler(int sig)

{
  return;
}



// WARNING: Unknown calling convention

void exit_program(int exit_value)

{
  int iVar1;
  
  reset_attr();
  if (html_flag != 0) {
    __printf_chk(1,"</pre>\n");
  }
  if (readline_enabled != 0) {
    iVar1 = write_history(history_filename);
    if (iVar1 != 0) {
      __fprintf_chk(stderr,1,"%s: Unable to save readline history into file \"%s\".\n",prog_name,
                    history_filename);
    }
  }
  if (((exit_value == 0) && (quiet_mode == 0)) && (html_flag == 0)) {
    __printf_chk(1,"Thank you for using Mathomatic!\n");
  }
                    // WARNING: Subroutine does not return
  exit(exit_value);
}



// WARNING: Unknown calling convention

void exithandler(int sig)

{
  exit_program(1);
  return;
}



// WARNING: Unknown calling convention

void alarmhandler(int sig)

{
  __printf_chk(1,"\nTimeout, quitting...\n");
  exit_program(1);
  return;
}



// WARNING: Unknown calling convention

void inthandler(int sig)

{
  abort_flag = abort_flag + 1;
  if (-1 < abort_flag) {
    if (abort_flag < 2) {
      __printf_chk(1,"\nUser interrupt signal received; three times quits Mathomatic.\n");
      return;
    }
    if (abort_flag == 2) {
      __printf_chk(1,"\nPress Control-C once more to quit program.\n");
      return;
    }
  }
  __printf_chk(1,"\nRepeatedly interrupted; returning to operating system...\n");
  exit_program(1);
  return;
}



// WARNING: Unknown calling convention

void usage(void)

{
  __printf_chk(1,"\nMathomatic computer algebra system version %s\n\n","15.1.1");
  __printf_chk(1,"Usage: %s [ options ] [ input_files ]\n\n",prog_name);
  __printf_chk(1,"Options:\n");
  __printf_chk(1,"  -b            Enable bold color mode.\n");
  __printf_chk(1,"  -c            Toggle color mode.\n");
  __printf_chk(1,"  -h            Display this help and exit.\n");
  __printf_chk(1,"  -m number     Specify a memory size multiplier.\n");
  __printf_chk(1,"  -q            Set quiet mode (don\'t display prompts).\n");
  __printf_chk(1,"  -r            Disable readline.\n");
  __printf_chk(1,"  -s level      Set enforced security level for session.\n");
  __printf_chk(1,"  -t            Set test mode.\n");
  __printf_chk(1,"  -u            Set unbuffered output.\n");
  __printf_chk(1,"  -v            Display version information, then exit.\n");
  __printf_chk(1,"  -w            Wide output mode, sets unlimited width.\n");
  __printf_chk(1,"  -x            Enable HTML/XHTML output mode.\n");
  __printf_chk(1,"\nPlease refer to the Mathomatic man page for more information.\n");
  __printf_chk(1,"The man page is viewed by typing \"man mathomatic\" in shell.\n");
  return;
}



// WARNING: Unknown calling convention

void resizehandler(int sig)

{
  if (screen_columns != 0) {
    get_screen_size();
  }
  return;
}



// WARNING: Unknown calling convention

int load_rc(void)

{
  int iVar1;
  char *pcVar2;
  char *cp;
  FILE *__stream;
  int iVar3;
  int iVar4;
  int rv;
  FILE *fp;
  int in_GS_OFFSET;
  char buf [4096];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  pcVar2 = getenv("HOME");
  if (pcVar2 != (char *)0x0) {
    __snprintf_chk(rc_file,0x1000,1,0x1000,"%s/%s",pcVar2,".mathomaticrc");
    __stream = fopen(rc_file,"r");
    if (__stream != (FILE *)0x0) {
      iVar4 = 1;
      while( true ) {
        pcVar2 = fgets(buf,0x1000,__stream);
        if (pcVar2 == (char *)0x0) break;
        set_error_level(pcVar2);
        iVar3 = set_options(pcVar2);
        if (iVar3 == 0) {
          iVar4 = 0;
        }
      }
      fclose(__stream);
      goto LAB_08049740;
    }
  }
  iVar4 = 1;
LAB_08049740:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar4;
}



// WARNING: Unknown calling convention

int set_signals(void)

{
  __sighandler_t p_Var1;
  __sighandler_t p_Var2;
  uint uVar3;
  int rv;
  
  p_Var1 = signal(8,fphandler);
  p_Var2 = signal(2,inthandler);
  uVar3 = 0;
  if (p_Var2 != (__sighandler_t)0xffffffff) {
    uVar3 = (uint)(p_Var1 != (__sighandler_t)0xffffffff);
  }
  p_Var1 = signal(3,inthandler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    uVar3 = 0;
  }
  p_Var1 = signal(0xf,exithandler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    uVar3 = 0;
  }
  p_Var1 = signal(1,exithandler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    uVar3 = 0;
  }
  p_Var1 = signal(0x1c,resizehandler);
  if (p_Var1 == (__sighandler_t)0xffffffff) {
    uVar3 = 0;
  }
  return uVar3;
}



// WARNING: Unknown calling convention

void main_io_loop(void)

{
  char *pcVar1;
  char *cp;
  
  while( true ) {
    default_color();
    pcVar1 = "-> ";
    if (html_flag != 0) {
      pcVar1 = "&mdash;&gt; ";
    }
    __snprintf_chk(prompt_str,0x50,1,0x50,&DAT_08071942,cur_equation + 1,pcVar1);
    pcVar1 = get_string((char *)tlhs,n_tokens << 4);
    if (pcVar1 == (char *)0x0) break;
    process(pcVar1);
  }
  return;
}



// WARNING: Unknown calling convention

int main(int argc,char **argv)

{
  bool bVar1;
  bool bVar2;
  char **ppcVar3;
  int i;
  int iVar4;
  undefined *puVar5;
  uchar *__s1;
  int iVar6;
  char *pcVar7;
  char **ppcVar8;
  int wide_flag;
  bool bVar9;
  int coption;
  double new_size;
  double dVar10;
  int boption;
  double denominator;
  double numerator;
  char *cp;
  char **local_4c;
  double local_38;
  double local_30;
  char *local_24 [2];
  
  local_24[0] = (char *)0x0;
  init_gvars();
  default_out = (FILE *)stdout;
  gfp = (FILE *)stdout;
  bVar1 = false;
  bVar2 = false;
  bVar9 = false;
  while (iVar4 = getopt(argc,argv,"s:bqrtchuvwxm:"), -1 < iVar4) {
    switch(iVar4) {
    case 0x62:
      bVar2 = true;
      break;
    case 99:
      bVar9 = (bool)(bVar9 ^ 1);
      break;
    default:
      usage();
                    // WARNING: Subroutine does not return
      exit(2);
    case 0x68:
      usage();
                    // WARNING: Subroutine does not return
      exit(0);
    case 0x6d:
      dVar10 = strtod(optarg,local_24);
      if ((((local_24[0] == (char *)0x0) || (*local_24[0] != '\0')) ||
          (dVar10 = dVar10 * 60000.0, dVar10 <= 0.0)) || (715827882.0 <= dVar10)) {
        __fprintf_chk(stderr,1,"%s: Invalid memory size multiplier specified.\n",prog_name);
                    // WARNING: Subroutine does not return
        exit(2);
      }
      n_tokens = (int)ROUND(dVar10);
      break;
    case 0x71:
      quiet_mode = 1;
      break;
    case 0x72:
      readline_enabled = 0;
      break;
    case 0x73:
      security_level = strtol(optarg,(char **)0x0,10);
      break;
    case 0x74:
      readline_enabled = 0;
      test_mode = 1;
      bVar1 = true;
      break;
    case 0x75:
      setbuf(stdout,(char *)0x0);
      setbuf(stderr,(char *)0x0);
      break;
    case 0x76:
      version_report();
                    // WARNING: Subroutine does not return
      exit(0);
    case 0x77:
      bVar1 = true;
      break;
    case 0x78:
      html_flag = 1;
      bVar1 = true;
    }
  }
  if (n_tokens < 100) {
    __fprintf_chk(stderr,1,"%s: Expression array size too small.\n",prog_name);
                    // WARNING: Subroutine does not return
    exit(2);
  }
  iVar4 = init_mem();
  if (iVar4 == 0) {
    __fprintf_chk(stderr,1,"%s: Not enough memory.\n",prog_name);
                    // WARNING: Subroutine does not return
    exit(2);
  }
  if (readline_enabled != 0) {
    local_24[0] = getenv("HOME");
    if ((local_24[0] != (char *)0x0) && (prog_name != (char *)0x0)) {
      __snprintf_chk(history_filename_storage,0x1000,1,0x1000,"%s/.%s_history",local_24[0],prog_name
                    );
      history_filename = history_filename_storage;
    }
    rl_initialize();
    using_history();
    stifle_history(500);
    rl_inhibit_completion = 1;
    if (html_flag == 0) {
      iVar4 = tigetnum("colors");
      color_flag = (int)(7 < iVar4);
    }
    read_history(history_filename);
  }
  get_screen_size();
  if (html_flag != 0) {
    __printf_chk(1);
  }
  if (test_mode == 0) {
    if (quiet_mode == 0) {
      if (1 < security_level) {
        __printf_chk(1);
      }
      __printf_chk(1,"Mathomatic version %s (www.mathomatic.org)\n","15.1.1");
      __printf_chk(1);
      __printf_chk(1,"%d equation spaces available, %ld kilobytes per equation space.\n",100,
                   (uint)(n_tokens << 5) / 1000);
      if (test_mode != 0) goto LAB_08049ceb;
    }
    iVar4 = load_rc();
    if (iVar4 == 0) {
      __fprintf_chk(stderr,1,"%s: Error loading set options from \"%s\".\n",prog_name,rc_file);
    }
  }
LAB_08049ceb:
  if (bVar1) {
    screen_columns = 0;
    screen_rows = 0;
  }
  if (bVar9) {
    color_flag = (int)(color_flag == 0);
  }
  if (bVar2) {
    color_flag = 1;
    bold_colors = 1;
  }
  if (test_mode != 0) {
    color_flag = 0;
  }
  if ((quiet_mode == 0) && (color_flag != 0)) {
    pcVar7 = " bold";
    if (bold_colors == 0) {
      pcVar7 = "";
    }
    puVar5 = &DAT_08071999;
    if (html_flag != 0) {
      puVar5 = &DAT_0807199e;
    }
    __printf_chk(1,"%s%s color mode enabled",puVar5,pcVar7);
    if (bVar2) {
      __printf_chk(1,&DAT_0807270a,puVar5,pcVar7);
    }
    else {
      __printf_chk(1,"; disable with the -c option or \"set no color\".\n",puVar5,pcVar7);
    }
  }
  iVar4 = _setjmp((__jmp_buf_tag *)jmp_save);
  if (iVar4 == 0) {
    iVar4 = set_signals();
    if (iVar4 == 0) {
      __fprintf_chk(stderr,1,"signal(2) setting failed.\n");
    }
    iVar4 = f_to_fraction(0.5,&local_30,&local_38);
    if ((((iVar4 == 0) || (local_30 != 1.0)) || (local_38 != 2.0)) ||
       (((iVar4 = f_to_fraction(0.3333333333333333,&local_30,&local_38), iVar4 == 0 ||
         (local_30 != 1.0)) || (local_38 != 3.0)))) {
      __fprintf_chk(stderr,1,"%s: Cannot convert any floating point values to fractions.\n",
                    prog_name);
      __fprintf_chk(stderr,1,"Roots will not work properly.\n");
    }
    if (optind < argc) {
      pcVar7 = argv[optind];
      if (pcVar7 != (char *)0x0) {
        ppcVar3 = argv + optind + 1;
        iVar4 = optind;
        local_4c = argv + optind;
        do {
          ppcVar8 = ppcVar3;
          if ((*pcVar7 == '-') && (pcVar7[1] == '\0')) {
            main_io_loop();
          }
          else {
            iVar6 = read_file(pcVar7);
            if (iVar6 == 0) {
              __fprintf_chk(stderr,1,"Read of file \"%s\" failed.\n",*local_4c);
              exit_program(1);
            }
          }
          iVar4 = iVar4 + 1;
          if (argc <= iVar4) break;
          pcVar7 = *ppcVar8;
          ppcVar3 = ppcVar8 + 1;
          local_4c = ppcVar8;
        } while (pcVar7 != (char *)0x0);
      }
    }
  }
  else {
    clean_up();
    if (iVar4 == 0xe) {
      error("Expression too large.");
    }
    __printf_chk(1);
  }
  main_io_loop();
  exit_program(0);
  return 0;
}



// WARNING: Unknown calling convention

void init_gvars(void)

{
  domain_check = 0;
  high_prec = 0;
  partial_flag = 1;
  symb_flag = 0;
  sign_cmp_flag = 0;
  approximate_roots = 0;
  repeat_flag = 0;
  zero_token.level = 1;
  zero_token.kind = CONSTANT;
  zero_token.token.constant = 0.0;
  one_token.level = 1;
  one_token.kind = CONSTANT;
  one_token.token.constant = 1.0;
  return;
}



// WARNING: Unknown calling convention

int next_sign(long *vp)

{
  int iVar1;
  int i;
  
  iVar1 = 1;
  if (sign_array[0] == '\0') {
    iVar1 = 0;
LAB_0804a083:
    *vp = iVar1 * 0x4000 + 4;
    sign_array[iVar1] = '\x01';
    iVar1 = 1;
  }
  else {
    do {
      if (sign_array[iVar1] == '\0') goto LAB_0804a083;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x40);
    *vp = 4;
    iVar1 = 0;
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int found_var(token_type *p1,int n,long v)

{
  int j;
  int local_14;
  
  if ((v == 0) || (n < 1)) {
    local_14 = 0;
  }
  else {
    local_14 = 0;
    j = 0;
    do {
      if (p1->kind == VARIABLE) {
        local_14 = local_14 + (uint)((p1->token).variable == v);
      }
      j = j + 1;
      p1 = p1 + 1;
    } while (j != n);
  }
  return local_14;
}



// WARNING: Unknown calling convention

int solved_equation(int i)

{
  int iVar1;
  uint uVar2;
  
  if ((((n_rhs[i] < 1) || (n_lhs[i] != 1)) || (lhs[i]->kind != VARIABLE)) ||
     (uVar2 = (lhs[i]->token).variable, (uVar2 & 0x3fff) < 5)) {
    uVar2 = 0;
  }
  else {
    iVar1 = found_var(rhs[i],n_rhs[i],uVar2);
    uVar2 = (uint)(iVar1 == 0);
  }
  return uVar2;
}



// WARNING: Unknown calling convention

int var_in_equation(int i,long v)

{
  int iVar1;
  
  if (0 < n_lhs[i]) {
    iVar1 = found_var(lhs[i],n_lhs[i],v);
    if (iVar1 != 0) {
      return 1;
    }
    if (0 < n_rhs[i]) {
      iVar1 = found_var(rhs[i],n_rhs[i],v);
      return (uint)(iVar1 != 0);
    }
  }
  return 0;
}



// WARNING: Unknown calling convention

int min_level(token_type *expression,int n)

{
  int iVar1;
  int min1;
  token_type *p1;
  token_type *ptVar2;
  token_type *ep;
  
  if (n < 2) {
    iVar1 = 1;
    if (0 < n) {
      iVar1 = expression->level;
    }
  }
  else {
    iVar1 = expression[1].level;
    for (ptVar2 = expression + 3; ptVar2 < expression + n; ptVar2 = ptVar2 + 2) {
      if (ptVar2->level < iVar1) {
        iVar1 = ptVar2->level;
      }
    }
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int level_plus_count(token_type *p1,int n1,int level)

{
  int iVar1;
  int count;
  int i;
  int iVar2;
  
  iVar1 = 0;
  if (1 < n1) {
    iVar2 = 1;
    do {
      if (p1[1].level == level) {
        iVar1 = iVar1 + (uint)(p1[1].token.variable - 1U < 2);
      }
      iVar2 = iVar2 + 2;
      p1 = p1 + 2;
    } while (iVar2 < n1);
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int level1_plus_count(token_type *p1,int n1)

{
  int iVar1;
  
  iVar1 = min_level(p1,n1);
  iVar1 = level_plus_count(p1,n1,iVar1);
  return iVar1;
}



// WARNING: Unknown calling convention

int var_count(token_type *p1,int n1)

{
  int iVar1;
  int count;
  int i;
  int iVar2;
  
  iVar1 = 0;
  if (0 < n1) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + (uint)(p1->kind == VARIABLE);
      iVar2 = iVar2 + 2;
      p1 = p1 + 2;
    } while (iVar2 < n1);
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int no_vars(token_type *source,int n,long *vp)

{
  uint uVar1;
  int j;
  int iVar2;
  int local_14;
  
  if (*vp == 0) {
    local_14 = 0;
    if (0 < n) {
      local_14 = 0;
      iVar2 = 0;
      do {
        if ((source->kind == VARIABLE) && (uVar1 = (source->token).variable, 4 < (uVar1 & 0x3fff)))
        {
          if (*vp == 0) {
            *vp = uVar1;
            local_14 = 1;
          }
          else if (uVar1 != *vp) {
            *vp = 0;
            break;
          }
        }
        iVar2 = iVar2 + 2;
        source = source + 2;
      } while (iVar2 < n);
    }
  }
  else {
    local_14 = var_count(source,n);
  }
  return (uint)(local_14 == 0);
}



// WARNING: Unknown calling convention

int exp_is_numeric(token_type *p1,int n1)

{
  int i;
  int iVar1;
  
  if (0 < n1) {
    iVar1 = 0;
    do {
      if ((p1->kind == VARIABLE) && (4 < ((p1->token).variable & 0x3fffU))) {
        return 0;
      }
      iVar1 = iVar1 + 2;
      p1 = p1 + 2;
    } while (iVar1 < n1);
  }
  return 1;
}



// WARNING: Unknown calling convention

int exp_contains_nan(token_type *p1,int n1)

{
  int iVar1;
  int i;
  
  if (0 < n1) {
    i = 0;
    do {
      if ((p1->kind == CONSTANT) && (iVar1 = __isnan((p1->token).constant), iVar1 != 0)) {
        return 1;
      }
      i = i + 2;
      p1 = p1 + 2;
    } while (i < n1);
  }
  return 0;
}



// WARNING: Unknown calling convention

int exp_contains_infinity(token_type *p1,int n1)

{
  int iVar1;
  int i;
  
  if (0 < n1) {
    i = 0;
    do {
      if ((p1->kind == CONSTANT) && (iVar1 = __finite((p1->token).constant), iVar1 == 0)) {
        return 1;
      }
      i = i + 1;
      p1 = p1 + 1;
    } while (i < n1);
  }
  return 0;
}



// WARNING: Unknown calling convention

int isdelimiter(int ch)

{
  ushort **ppuVar1;
  uint uVar2;
  
  ppuVar1 = __ctype_b_loc();
  if (((*(byte *)((int)*ppuVar1 + ch * 2 + 1) & 0x20) == 0) && (ch != 0x2c)) {
    uVar2 = (uint)(ch == 0x3d);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// WARNING: Unknown calling convention

int strcmp_tospace(char *cp1,char *cp2)

{
  char cVar1;
  int iVar2;
  char *cp2a;
  char *pcVar3;
  size_t __n;
  char *cp1a;
  char *pcVar4;
  
  cVar1 = *cp1;
  pcVar4 = cp1;
  while ((cVar1 != '\0' && (iVar2 = isdelimiter((int)cVar1), iVar2 == 0))) {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  cVar1 = *cp2;
  pcVar3 = cp2;
  while ((cVar1 != '\0' && (iVar2 = isdelimiter((int)cVar1), iVar2 == 0))) {
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  }
  __n = (int)pcVar3 - (int)cp2;
  if ((int)pcVar3 - (int)cp2 < (int)pcVar4 - (int)cp1) {
    __n = (int)pcVar4 - (int)cp1;
  }
  iVar2 = strncasecmp(cp1,cp2,__n);
  return iVar2;
}



// WARNING: Unknown calling convention

int is_all(char *cp)

{
  int iVar1;
  
  iVar1 = strcmp_tospace(cp,"all");
  return (uint)(iVar1 == 0);
}



// WARNING: Unknown calling convention

char * skip_space(char *cp)

{
  ushort **ppuVar1;
  char cVar2;
  
  if ((cp != (char *)0x0) && (cVar2 = *cp, cVar2 != '\0')) {
    ppuVar1 = __ctype_b_loc();
    do {
      if ((*(byte *)((int)*ppuVar1 + cVar2 * 2 + 1) & 0x20) == 0) {
        return cp;
      }
      cp = cp + 1;
      cVar2 = *cp;
    } while (cVar2 != '\0');
  }
  return cp;
}



// WARNING: Unknown calling convention

char * skip_param(char *cp)

{
  char cVar1;
  int iVar2;
  
  if (cp != (char *)0x0) {
    cVar1 = *cp;
    while ((cVar1 != '\0' && ((cVar1 < '\0' || (iVar2 = isdelimiter((int)cVar1), iVar2 == 0))))) {
      cp = cp + 1;
      cVar1 = *cp;
    }
    cp = skip_space(cp);
    iVar2 = isdelimiter((int)*cp);
    if (iVar2 != 0) {
      cp = skip_space(cp + 1);
    }
  }
  return cp;
}



// WARNING: Unknown calling convention

long decstrtol(char *cp,char **cpp)

{
  long lVar1;
  char *pcVar2;
  long l;
  
  lVar1 = strtol(cp,cpp,10);
  if ((cpp != (char **)0x0) && (*cpp != cp)) {
    pcVar2 = skip_space(*cpp);
    *cpp = pcVar2;
  }
  return lVar1;
}



// WARNING: Unknown calling convention

void free_result_str(void)

{
  if (result_str != (char *)0x0) {
    free(result_str);
    result_str = (char *)0x0;
  }
  result_en = -1;
  return;
}



// WARNING: Unknown calling convention

int return_result(int en)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (0 < n_lhs[en]) {
    iVar2 = list_sub(en);
    uVar1 = (uint)(iVar2 != 0);
  }
  return uVar1;
}



// WARNING: Unknown calling convention

char * get_string(char *string,int n)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *cp;
  byte bVar6;
  
  bVar6 = 0;
  if (quiet_mode != 0) {
    prompt_str[0] = '\0';
  }
  uVar5 = 0xffffffff;
  pcVar2 = prompt_str;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  input_column = ~uVar5 - 1;
  if (readline_enabled == 0) {
    if (echo_input == 0) {
      __printf_chk(1,"%s",prompt_str);
    }
  }
  else if (echo_input == 0) {
    pcVar2 = (char *)readline(prompt_str);
    if (pcVar2 == (char *)0x0) {
      if (quiet_mode == 0) {
        __printf_chk(1,"\nEnd of input.\n");
      }
      exit_program(0);
    }
    my_strlcpy(string,pcVar2,n);
    pcVar3 = skip_space(pcVar2);
    if (*pcVar3 == '\0') {
LAB_0804a712:
      free(pcVar2);
    }
    else {
      if (last_history_string != (char *)0x0) {
        iVar4 = strcmp(last_history_string,pcVar2);
        if (iVar4 == 0) goto LAB_0804a712;
      }
      add_history(pcVar2);
      last_history_string = pcVar2;
    }
    goto LAB_0804a783;
  }
  pcVar2 = fgets(string,n,stdin);
  if (pcVar2 == (char *)0x0) {
    if (quiet_mode == 0) {
      __printf_chk(1,"\nEnd of input.\n");
    }
    exit_program(0);
  }
LAB_0804a783:
  uVar5 = 0xffffffff;
  pcVar2 = string;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if ((-1 < (int)(~uVar5 - 2)) && (string[~uVar5 - 2] == '\n')) {
    string[~uVar5 - 2] = '\0';
  }
  if (((gfp != stdout) && (gfp != stderr)) || (echo_input != 0)) {
    __fprintf_chk(gfp,1,"%s%s\n",prompt_str,string);
  }
  set_error_level(string);
  abort_flag = 0;
  return string;
}



// WARNING: Unknown calling convention

int get_yes_no(void)

{
  int iVar1;
  char *cp_00;
  int iVar2;
  char *cp;
  int in_GS_OFFSET;
  char buf [4096];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  do {
    cp_00 = get_string(buf,0x1000);
    if (cp_00 == (char *)0x0) {
LAB_0804a84d:
      iVar2 = 0;
      goto LAB_0804a852;
    }
    str_tolower(cp_00);
    if (*cp_00 == 'n') goto LAB_0804a84d;
  } while (*cp_00 != 'y');
  iVar2 = 1;
LAB_0804a852:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar2;
}



// WARNING: Unknown calling convention

int get_expr(token_type *equation,int *np)

{
  int iVar1;
  char *cp;
  char *pcVar2;
  int in_GS_OFFSET;
  char buf [60000];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  do {
    pcVar2 = get_string(buf,60000);
    if (pcVar2 == (char *)0x0) goto LAB_0804a8c3;
    pcVar2 = parse_expr(equation,np,pcVar2);
  } while (pcVar2 == (char *)0x0);
  pcVar2 = (char *)(uint)(0 < *np);
LAB_0804a8c3:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (int)pcVar2;
}



// WARNING: Unknown calling convention

void copy_espace(int src,int dest)

{
  if (src != dest) {
    memmove(lhs[dest],lhs[src],n_lhs[src] << 4);
    n_lhs[dest] = n_lhs[src];
    memmove(rhs[dest],rhs[src],n_rhs[src] << 4);
    n_rhs[dest] = n_rhs[src];
  }
  return;
}



// WARNING: Unknown calling convention

void error_huge(void)

{
                    // WARNING: Subroutine does not return
  __longjmp_chk(jmp_save,0xe);
}



// WARNING: Unknown calling convention

void subst_var_with_exp(token_type *equation,int *np,token_type *expression,int len,long v)

{
  int iVar1;
  int *piVar2;
  int level;
  int k;
  int iVar3;
  token_type *__dest;
  int j;
  int iVar4;
  int local_28;
  token_type *local_24;
  token_type *local_20;
  
  if ((v != 0) && (0 < len)) {
    iVar1 = *np;
    j = iVar1 + -1;
    if (-1 < j) {
      __dest = equation + j;
      local_28 = -iVar1;
      iVar4 = len + j;
      local_24 = equation + iVar4;
      local_20 = equation + iVar1;
      do {
        if ((__dest->kind == VARIABLE) && ((__dest->token).variable == v)) {
          iVar1 = __dest->level;
          if (n_tokens < len + -1 + *np) {
            error_huge();
          }
          memmove(local_24,local_20,(local_28 + *np) * 0x10);
          *np = len + -1 + *np;
          memmove(__dest,expression,len << 4);
          if (j < iVar4) {
            piVar2 = &__dest->level;
            iVar3 = j;
            do {
              *piVar2 = *piVar2 + iVar1;
              iVar3 = iVar3 + 1;
              piVar2 = piVar2 + 4;
            } while (iVar3 < iVar4);
          }
        }
        __dest = __dest + -1;
        local_28 = local_28 + 1;
        local_24 = local_24 + -1;
        local_20 = local_20 + -1;
        iVar4 = iVar4 + -1;
        j = j + -1;
      } while (-1 < j);
    }
  }
  return;
}



// WARNING: Unknown calling convention

int alloc_espace(int i)

{
  token_type *ptVar1;
  int iVar2;
  
  if (i < 100) {
    if ((lhs[i] == (token_type *)0x0) || (rhs[i] == (token_type *)0x0)) {
      ptVar1 = (token_type *)malloc(n_tokens << 4);
      lhs[i] = ptVar1;
      if (ptVar1 == (token_type *)0x0) goto LAB_0804ab1d;
      ptVar1 = (token_type *)malloc(n_tokens << 4);
      rhs[i] = ptVar1;
      if (ptVar1 == (token_type *)0x0) {
        free(lhs[i]);
        lhs[i] = (token_type *)0x0;
        return 0;
      }
    }
    iVar2 = 1;
  }
  else {
LAB_0804ab1d:
    iVar2 = 0;
  }
  return iVar2;
}



// WARNING: Unknown calling convention

void clean_up(void)

{
  int iVar1;
  int iVar2;
  int i;
  
  init_gvars();
  if (gfp != default_out) {
    if ((gfp != stdout) && (gfp != stderr)) {
      fclose((FILE *)gfp);
    }
    gfp = default_out;
  }
  iVar1 = n_equations;
  if (0 < n_equations) {
    iVar2 = 0;
    do {
      if (n_lhs[iVar2] < 1) {
        n_lhs[iVar2] = 0;
        n_rhs[iVar2] = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != iVar1);
  }
  return;
}



// WARNING: Unknown calling convention

void get_screen_size(void)

{
  int iVar1;
  winsize ws;
  
  ws.ws_col = 0;
  ws.ws_row = 0;
  iVar1 = ioctl(1,0x5413,&ws);
  if (-1 < iVar1) {
    if (ws.ws_col != 0) {
      screen_columns = (int)ws.ws_col;
    }
    if (ws.ws_row != 0) {
      screen_rows = (int)ws.ws_row;
    }
  }
  return;
}



// WARNING: Unknown calling convention

void warning(char *str)

{
  warning_str = str;
  if (-1 < debug_level) {
    set_color(1);
    __printf_chk(1,"Warning: %s\n",str);
    default_color();
  }
  return;
}



// WARNING: Unknown calling convention

int check_divide_by_zero(double denominator)

{
  if (denominator == 0.0) {
    warning("Division by zero.");
  }
  return (uint)(denominator == 0.0);
}



// WARNING: Unknown calling convention

int alloc_next_espace(void)

{
  int n;
  int iVar1;
  int iVar2;
  int i;
  int iVar3;
  
  iVar1 = n_equations;
  if (cur_equation < n_equations) {
    iVar2 = cur_equation;
    if (n_lhs[cur_equation] == 0) {
LAB_0804ad32:
      n_rhs[iVar2] = 0;
      return iVar2;
    }
    iVar3 = 1;
    for (iVar2 = cur_equation + 1; iVar2 = iVar2 % 100, iVar2 < n_equations; iVar2 = iVar2 + 1) {
      if (n_lhs[iVar2] == 0) goto LAB_0804ad32;
      iVar3 = iVar3 + 1;
      if (iVar3 == 100) goto LAB_0804ad3f;
    }
  }
  iVar2 = alloc_espace(n_equations);
  if (iVar2 == 0) {
    warning("Memory is exhausted.");
    if (n_equations < 1) {
LAB_0804ad3f:
      iVar1 = -1;
    }
    else {
      iVar1 = 0;
      iVar2 = n_lhs[0];
      while (iVar2 != 0) {
        iVar1 = iVar1 + 1;
        if (n_equations <= iVar1) goto LAB_0804ad3f;
        iVar2 = n_lhs[iVar1];
      }
      n_rhs[iVar1] = 0;
    }
  }
  else {
    n_equations = n_equations + 1;
  }
  return iVar1;
}



// WARNING: Unknown calling convention

void error(char *str)

{
  error_str = str;
  set_color(2);
  __printf_chk(1,"%s\n",str);
  default_color();
  return;
}



// WARNING: Unknown calling convention

int extra_characters(char *cp)

{
  char *pcVar1;
  
  if ((cp != (char *)0x0) && (pcVar1 = skip_space(cp), *pcVar1 != '\0')) {
    error("Extra characters or unrecognized argument.");
    return 1;
  }
  return 0;
}



// WARNING: Unknown calling convention

int prompt_var(long *vp)

{
  int iVar1;
  char *cp;
  char *pcVar2;
  int iVar3;
  int in_GS_OFFSET;
  char buf [4096];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  while( true ) {
    my_strlcpy(prompt_str,"Enter variable: ",0x50);
    pcVar2 = get_string(buf,0x1000);
    if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) break;
    pcVar2 = parse_var2(vp,pcVar2);
    if (pcVar2 != (char *)0x0) {
      iVar3 = extra_characters(pcVar2);
      if (iVar3 == 0) {
        iVar3 = 1;
LAB_0804ae67:
        if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
          __stack_chk_fail();
        }
        return iVar3;
      }
    }
  }
  iVar3 = 0;
  goto LAB_0804ae67;
}



// WARNING: Unknown calling convention

int current_not_defined(void)

{
  int iVar1;
  int i;
  
  if (((cur_equation < 0) || (n_equations <= cur_equation)) || (iVar1 = 0, n_lhs[cur_equation] < 1))
  {
    error("No current equation or expression.");
    iVar1 = 1;
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int not_defined(int i)

{
  int iVar1;
  
  if ((i < 0) || (n_equations <= i)) {
    error("Invalid equation number.");
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
    if (n_lhs[i] < 1) {
      error("Equation space is empty.");
      iVar1 = 1;
    }
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int get_default_en(char *cp)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int i;
  
  iVar2 = cur_equation;
  if (*cp != '\0') {
    lVar1 = decstrtol(cp,&cp);
    iVar2 = extra_characters(cp);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = lVar1 + -1;
  }
  iVar3 = not_defined(iVar2);
  if (iVar3 != 0) {
    return -1;
  }
  return iVar2;
}



// WARNING: Unknown calling convention

int get_range(char **cpp,int *ip,int *jp)

{
  char *cp;
  int iVar1;
  int iVar2;
  ushort **ppuVar3;
  long lVar4;
  char *pcVar5;
  int *piVar6;
  int i;
  char *local_20 [4];
  
  local_20[0] = skip_space(*cpp);
  iVar1 = is_all(local_20[0]);
  if (iVar1 == 0) {
    ppuVar3 = __ctype_b_loc();
    if ((*(byte *)((int)*ppuVar3 + *local_20[0] * 2 + 1) & 8) == 0) {
      *ip = cur_equation;
    }
    else {
      lVar4 = strtol(local_20[0],local_20,10);
      *ip = lVar4 + -1;
    }
    iVar1 = *ip;
    if ((iVar1 < 0) || (n_equations <= iVar1)) {
      error("Invalid equation number.");
      return 0;
    }
    if (*local_20[0] != '-') {
      iVar1 = not_defined(iVar1);
      if (iVar1 != 0) {
        return 0;
      }
      *jp = *ip;
      pcVar5 = skip_space(local_20[0]);
      *cpp = pcVar5;
      return 1;
    }
    local_20[0] = local_20[0] + 1;
    if ((*(byte *)((int)*ppuVar3 + *local_20[0] * 2 + 1) & 8) == 0) {
      *jp = cur_equation;
    }
    else {
      lVar4 = strtol(local_20[0],local_20,10);
      *jp = lVar4 + -1;
    }
    iVar1 = *jp;
    if ((iVar1 < 0) || (n_equations <= iVar1)) {
      error("Invalid equation number.");
      return 0;
    }
    iVar2 = *ip;
    if (iVar1 < iVar2) {
      *ip = iVar1;
      *jp = iVar2;
    }
  }
  else {
    local_20[0] = skip_param(local_20[0]);
    *ip = 0;
    iVar2 = n_equations;
    iVar1 = n_equations + -1;
    *jp = iVar1;
    if ((0 < iVar1) && (n_lhs[iVar1] == 0)) {
      iVar2 = iVar2 + -2;
      piVar6 = n_lhs + iVar2;
      do {
        *jp = iVar2;
        if (iVar2 < 1) break;
        iVar1 = *piVar6;
        iVar2 = iVar2 + -1;
        piVar6 = piVar6 + -1;
      } while (iVar1 == 0);
    }
  }
  local_20[0] = skip_space(local_20[0]);
  iVar1 = *ip;
  if (*jp < iVar1) {
LAB_0804b120:
    error("No equations defined in specified range.");
    iVar1 = 0;
  }
  else {
    iVar2 = n_lhs[iVar1];
    piVar6 = n_lhs + iVar1 + 1;
    while (iVar2 < 1) {
      iVar1 = iVar1 + 1;
      if (*jp < iVar1) goto LAB_0804b120;
      iVar2 = *piVar6;
      piVar6 = piVar6 + 1;
    }
    *cpp = local_20[0];
    iVar1 = 1;
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int get_range_eol(char **cpp,int *ip,int *jp)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = get_range(cpp,ip,jp);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = extra_characters(*cpp);
    uVar2 = (uint)(iVar1 == 0);
  }
  return uVar2;
}



// WARNING: Unknown calling convention

int next_espace(void)

{
  int iVar1;
  int i;
  
  iVar1 = alloc_next_espace();
  if (iVar1 < 0) {
    error("Out of free equation spaces.");
    __printf_chk(1,"Use the clear command on unnecessary equations and try again.\n");
                    // WARNING: Subroutine does not return
    __longjmp_chk(jmp_save,3);
  }
  return iVar1;
}



// WARNING: Unknown calling convention

void check_err(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  if (*piVar1 == 0x21) {
    *piVar1 = 0;
    if (domain_check == 0) {
      error("Domain error in constant.");
                    // WARNING: Subroutine does not return
      __longjmp_chk(jmp_save,2);
    }
    domain_check = 0;
  }
  else if (*piVar1 == 0x22) {
    *piVar1 = 0;
    error("Overflow error in constant.");
                    // WARNING: Subroutine does not return
    __longjmp_chk(jmp_save,2);
  }
  return;
}



// WARNING: Unknown calling convention

void error_bug(char *str)

{
  error(str);
  __printf_chk(1,"Please report this bug to the maintainers,\n");
  __printf_chk(1,"along with the entry sequence that caused it.\n");
  __printf_chk(1,"Type \"help bugs\" for info on how to report bugs found in this program.\n");
                    // WARNING: Subroutine does not return
  __longjmp_chk(jmp_save,0xd);
}



// WARNING: Removing unreachable block (ram,0x0804b312)
// WARNING: Removing unreachable block (ram,0x0804b322)
// WARNING: Removing unreachable block (ram,0x0804b342)
// WARNING: Removing unreachable block (ram,0x0804b337)
// WARNING: Unknown calling convention

void clear_all(void)

{
  char *__ptr;
  int iVar1;
  int i;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  cur_equation = 0;
  piVar2 = n_lhs;
  for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  piVar2 = n_rhs;
  for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  if (var_names[0] != (char *)0x0) {
    iVar1 = 0;
    __ptr = var_names[0];
    do {
      free(__ptr);
      var_names[iVar1] = (char *)0x0;
      iVar1 = iVar1 + 1;
      __ptr = var_names[iVar1];
    } while (__ptr != (char *)0x0);
  }
  puVar3 = (undefined4 *)sign_array;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  init_gvars();
  return;
}



// WARNING: Unknown calling convention

int init_mem(void)

{
  int iVar1;
  
  scratch = (token_type *)malloc((n_tokens * 3) / 2 << 4);
  if ((((scratch != (token_type *)0x0) &&
       (tes = (token_type *)malloc(n_tokens << 4), tes != (token_type *)0x0)) &&
      (tlhs = (token_type *)malloc(n_tokens << 4), tlhs != (token_type *)0x0)) &&
     ((trhs = (token_type *)malloc(n_tokens << 4), trhs != (token_type *)0x0 &&
      (iVar1 = alloc_next_espace(), -1 < iVar1)))) {
    clear_all();
    return 1;
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b404)
// WARNING: Removing unreachable block (ram,0x0804b414)
// WARNING: Removing unreachable block (ram,0x0804b434)
// WARNING: Removing unreachable block (ram,0x0804b429)
// WARNING: Unknown calling convention

void set_sign_array(void)

{
  int iVar1;
  token_type *ptVar2;
  int iVar3;
  int j;
  int iVar4;
  int i;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)sign_array;
  for (iVar3 = 0x10; iVar1 = n_equations, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (0 < n_equations) {
    i = 0;
    do {
      iVar3 = n_lhs[i];
      if (0 < iVar3) {
        ptVar2 = lhs[i];
        iVar4 = 0;
        do {
          if ((ptVar2->kind == VARIABLE) && (((ptVar2->token).variable & 0x3fffU) == 4)) {
            sign_array[(ptVar2->token).variable >> 0xe & 0x3f] = '\x01';
          }
          iVar4 = iVar4 + 2;
          ptVar2 = ptVar2 + 2;
        } while (iVar4 < iVar3);
        iVar3 = n_rhs[i];
        if (0 < iVar3) {
          ptVar2 = rhs[i];
          iVar4 = 0;
          do {
            if ((ptVar2->kind == VARIABLE) && (((ptVar2->token).variable & 0x3fffU) == 4)) {
              sign_array[(ptVar2->token).variable >> 0xe & 0x3f] = '\x01';
            }
            iVar4 = iVar4 + 2;
            ptVar2 = ptVar2 + 2;
          } while (iVar4 < iVar3);
        }
      }
      i = i + 1;
    } while (i != iVar1);
  }
  return;
}



// WARNING: Unknown calling convention

int flip(token_type *side1p,int *side1np,token_type *side2p,int *side2np)

{
  int iVar1;
  token_type *p1;
  token_type *ptVar2;
  token_type *ep;
  
  if (0 < debug_level) {
    __fprintf_chk(gfp,1,"%s\n","Taking the reciprocal of both sides of the equation...");
  }
  if ((n_tokens < *side1np + 2) || (n_tokens < *side2np + 2)) {
    error_huge();
  }
  iVar1 = *side1np;
  p1 = side1p;
  if (side1p < side1p + iVar1) {
    do {
      p1->level = p1->level + 1;
      p1 = p1 + 1;
    } while (p1 < side1p + iVar1);
  }
  iVar1 = *side2np;
  ptVar2 = side2p;
  if (side2p < side2p + iVar1) {
    do {
      ptVar2->level = ptVar2->level + 1;
      ptVar2 = ptVar2 + 1;
    } while (ptVar2 < side2p + iVar1);
  }
  memmove(side1p + 2,side1p,*side1np << 4);
  *side1np = *side1np + 2;
  memmove(side2p + 2,side2p,*side2np << 4);
  *side2np = *side2np + 2;
  side1p->kind = one_token.kind;
  side1p->level = one_token.level;
  (side1p->token).variable = one_token.token.variable;
  *(undefined4 *)((int)&side1p->token + 4) = one_token.token._4_4_;
  side1p[1].level = 1;
  side1p[1].kind = OPERATOR;
  side1p[1].token.variable = 4;
  side2p->kind = one_token.kind;
  side2p->level = one_token.level;
  (side2p->token).variable = one_token.token.variable;
  *(undefined4 *)((int)&side2p->token + 4) = one_token.token._4_4_;
  side2p[1].level = 1;
  side2p[1].kind = OPERATOR;
  side2p[1].token.variable = 4;
  return 1;
}



// WARNING: Removing unreachable block (ram,0x0804c0dc)
// WARNING: Removing unreachable block (ram,0x0804c0e2)
// WARNING: Removing unreachable block (ram,0x0804c0e4)
// WARNING: Unknown calling convention

int g_of_f(int op,token_type *operandp,token_type *side1p,int *side1np,token_type *side2p,
          int *side2np)

{
  int iVar1;
  complexs a;
  complexs a_00;
  complexs a_01;
  complexs b;
  storage_type sVar2;
  storage_type sVar3;
  int iVar4;
  size_t __n;
  uint n;
  int *piVar5;
  int iVar6;
  token_type *p2;
  int iVar7;
  token_type *ptVar8;
  char *pcVar9;
  token_type *ptVar10;
  token_type *p1;
  token_type *ep;
  int in_GS_OFFSET;
  bool bVar11;
  ushort in_FPUStatusWord;
  token_type *local_10c;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  complexs c2;
  complexs c1;
  double local_a4;
  double local_9c;
  double denominator;
  double local_8c;
  char var_name_buf [100];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar4 = *side1np;
  if ((iVar4 == g_of_f::prev_n1) && (*side2np == g_of_f::prev_n2)) {
    repeat_count = repeat_count + 1;
    if (repeat_count < 3) goto LAB_0804b6fb;
    if (0 < debug_level) {
      __fprintf_chk(gfp,1,"%s\n","Infinite loop aborted in solve routine.");
      iVar4 = 0;
      goto LAB_0804c1aa;
    }
  }
  else {
    g_of_f::prev_n2 = *side2np;
    repeat_count = 0;
    g_of_f::prev_n1 = iVar4;
LAB_0804b6fb:
    if (op - 1U < 6) {
      ptVar10 = side1p + iVar4;
      local_100 = op;
      local_10c = operandp;
      for (p1 = operandp + 1; p1 < ptVar10; p1 = p1 + 2) {
        if (p1->level == 1) {
          if ((p1->token).variable == 5) {
            local_10c = p1 + 1;
          }
          else {
            if ((p1->token).variable != 7) break;
            local_100 = 1;
          }
        }
      }
      __n = (int)p1 - (int)local_10c;
      n = (int)__n >> 4;
      bVar11 = local_100 == 6;
      if ((!bVar11) || (local_10c != side1p)) {
        if ((local_100 == 5) &&
           (((iVar6 = get_constant(side2p,*side2np,&local_9c), iVar6 != 0 &&
             (iVar6 = get_constant(local_10c,n,&local_a4), iVar6 != 0)) &&
            (in_FPUStatusWord = in_FPUStatusWord & 0xfdff, ABS(local_a4) <= ABS(local_9c))))) {
          error("There are no possible solutions.");
          iVar4 = 0;
          goto LAB_0804c1aa;
        }
        if (0 < debug_level) {
          switch(local_100) {
          case 1:
            __fprintf_chk(gfp,1,"Subtracting");
            break;
          case 2:
            __fprintf_chk(gfp,1,"Adding");
            break;
          case 3:
            __fprintf_chk(gfp,1,"Dividing both sides of the equation by");
            break;
          case 4:
            __fprintf_chk(gfp,1,"Multiplying both sides of the equation by");
            break;
          case 5:
            __fprintf_chk(gfp,1,"Applying inverse modulus of");
            break;
          case 6:
            __fprintf_chk(gfp,1,"Raising both sides of the equation to the power of");
          }
          if (((bVar11) && (n == 1)) && (local_10c->kind == CONSTANT)) {
            __fprintf_chk(gfp,1," %.*g:\n",precision,1.0 / (local_10c->token).constant);
          }
          else {
            __fprintf_chk(gfp,1," \"");
            if (bVar11) {
              __fprintf_chk(gfp,1,&DAT_08072664);
            }
            list_proc(local_10c,n,0);
            if (local_100 == 2) {
LAB_0804bcab:
              __fprintf_chk(gfp,1,"\" to both sides of the equation:\n");
            }
            else {
              if (local_100 < 3) {
                if (local_100 == 1) {
                  __fprintf_chk(gfp,1,"\" from both sides of the equation:\n");
                  goto LAB_0804bd04;
                }
              }
              else {
                if (local_100 == 5) goto LAB_0804bcab;
                if (local_100 == 6) {
                  __fprintf_chk(gfp,1,&DAT_080779a8);
                }
              }
              __fprintf_chk(gfp,1,&DAT_08072668);
            }
          }
        }
LAB_0804bd04:
        if ((n_tokens < (int)(n + 3 + *side1np)) || (n_tokens < (int)(n + 5 + *side2np))) {
          error_huge();
        }
        iVar6 = min_level(side1p,iVar4);
        if ((iVar6 < 2) && (p2 = side1p, side1p < ptVar10)) {
          do {
            p2->level = p2->level + 1;
            p2 = p2 + 1;
          } while (p2 < ptVar10);
        }
        iVar6 = *side2np;
        iVar7 = min_level(side2p,iVar6);
        if ((iVar7 < 2) && (ptVar8 = side2p, side2p < side2p + iVar6)) {
          do {
            ptVar8->level = ptVar8->level + 1;
            ptVar8 = ptVar8 + 1;
          } while (ptVar8 < side2p + iVar6);
        }
        switch(local_100) {
        case 1:
          ptVar10->level = 1;
          ptVar10->kind = OPERATOR;
          (ptVar10->token).variable = 2;
          memmove(ptVar10 + 1,local_10c,__n);
          *side1np = n + 1 + *side1np;
          break;
        case 2:
          ptVar10->level = 1;
          ptVar10->kind = OPERATOR;
          (ptVar10->token).variable = 1;
          memmove(ptVar10 + 1,local_10c,__n);
          *side1np = n + 1 + *side1np;
          break;
        case 3:
          ptVar10->level = 1;
          ptVar10->kind = OPERATOR;
          (ptVar10->token).variable = 4;
          memmove(ptVar10 + 1,local_10c,__n);
          *side1np = n + 1 + *side1np;
          break;
        case 4:
          ptVar10->level = 1;
          ptVar10->kind = OPERATOR;
          (ptVar10->token).variable = 3;
          memmove(ptVar10 + 1,local_10c,__n);
          *side1np = n + 1 + *side1np;
          break;
        case 5:
          ptVar10->level = 1;
          ptVar10->kind = OPERATOR;
          (ptVar10->token).variable = 1;
          ptVar10[1].level = 2;
          ptVar10[1].kind = VARIABLE;
          __snprintf_chk(var_name_buf,100,1,100,"%s%.0d","integer",last_int_var);
          pcVar9 = parse_var(&ptVar10[1].token.variable,var_name_buf);
          if (pcVar9 == (char *)0x0) goto LAB_0804c1a5;
          iVar6 = last_int_var + 1;
          last_int_var = 0;
          if (-1 < iVar6) {
            last_int_var = iVar6;
          }
          ptVar10[2].level = 2;
          ptVar10[2].kind = OPERATOR;
          ptVar10[2].token.variable = 3;
          memmove(ptVar10 + 3,local_10c,__n);
          *side1np = n + 3 + *side1np;
          break;
        case 6:
          ptVar10->level = 1;
          ptVar10->kind = OPERATOR;
          (ptVar10->token).variable = 6;
          ptVar10[1].level = 2;
          ptVar10[1].kind = CONSTANT;
          ptVar10[1].token.constant = 1.0;
          ptVar10[2].level = 2;
          ptVar10[2].kind = OPERATOR;
          ptVar10[2].token.variable = 4;
          memmove(ptVar10 + 3,local_10c,__n);
          *side1np = n + 3 + *side1np;
        }
        memmove(side2p + *side2np,ptVar10,(*side1np - iVar4) * 0x10);
        *side2np = *side2np + (*side1np - iVar4);
        if (((bVar11) && (n == 1)) && (local_10c->kind == CONSTANT)) {
          f_to_fraction((local_10c->token).constant,&local_8c,&denominator);
          do {
            local_8c = local_8c - (local_8c / 2.0) * 2.0;
          } while ((in_FPUStatusWord & 0x400) != 0);
          if (local_8c == 0.0) {
            ptVar8 = side2p + *side2np;
            ptVar10 = side2p;
            if (side2p < ptVar8) {
              do {
                ptVar10->level = ptVar10->level + 1;
                ptVar10 = ptVar10 + 1;
              } while (ptVar10 < ptVar8);
              side2p = (token_type *)
                       ((int)&side2p[1].kind + ((int)&ptVar8->kind + ~(uint)side2p & 0xfffffff0));
            }
            side2p->level = 1;
            side2p->kind = OPERATOR;
            (side2p->token).variable = 3;
            side2p[1].level = 1;
            side2p[1].kind = VARIABLE;
            next_sign(&side2p[1].token.variable);
            *side2np = *side2np + 2;
          }
        }
        iVar4 = 1;
        if (local_100 - 5U < 2) {
          *side1np = (int)local_10c + (-0x10 - (int)side1p) >> 4;
          iVar4 = 1;
        }
        goto LAB_0804c1aa;
      }
      iVar4 = parse_complex(side2p,*side2np,&c1);
      if ((iVar4 != 0) && (iVar4 = parse_complex(local_10c,n,&c2), iVar4 != 0)) {
        if (0 < debug_level) {
          __fprintf_chk(gfp,1,"%s\n","Taking logarithm of both equation sides:");
        }
        piVar5 = __errno_location();
        *piVar5 = 0;
        a.re._4_4_ = c2.re._4_4_;
        a.re._0_4_ = c2.re._0_4_;
        a.im._0_4_ = c2.im._0_4_;
        a.im._4_4_ = c2.im._4_4_;
        complex_log(a);
        a_00.re._4_4_ = c1.re._4_4_;
        a_00.re._0_4_ = c1.re._0_4_;
        a_00.im._0_4_ = c1.im._0_4_;
        a_00.im._4_4_ = c1.im._4_4_;
        complex_log(a_00);
        a_01.re._4_4_ = local_e0;
        a_01.re._0_4_ = local_e4;
        a_01.im._0_4_ = local_dc;
        a_01.im._4_4_ = local_d8;
        b.re._4_4_ = local_d0;
        b.re._0_4_ = local_d4;
        b.im._0_4_ = local_cc;
        b.im._4_4_ = local_c8;
        complex_div(a_01,b);
        *side2np = 0;
        side2p->level = 1;
        side2p[*side2np].kind = CONSTANT;
        sVar2._4_4_ = local_f8;
        sVar2.variable = local_fc;
        side2p[*side2np].token = sVar2;
        iVar4 = *side2np;
        *side2np = iVar4 + 1;
        side2p[iVar4 + 1].level = 1;
        side2p[*side2np].kind = OPERATOR;
        side2p[*side2np].token.variable = 1;
        iVar4 = *side2np;
        *side2np = iVar4 + 1;
        side2p[iVar4 + 1].level = 2;
        side2p[*side2np].kind = CONSTANT;
        sVar3._4_4_ = local_f0;
        sVar3.variable = local_f4;
        side2p[*side2np].token = sVar3;
        iVar4 = *side2np;
        *side2np = iVar4 + 1;
        side2p[iVar4 + 1].level = 2;
        side2p[*side2np].kind = OPERATOR;
        side2p[*side2np].token.variable = 3;
        iVar4 = *side2np;
        *side2np = iVar4 + 1;
        side2p[iVar4 + 1].level = 2;
        side2p[*side2np].kind = VARIABLE;
        side2p[*side2np].token.variable = 3;
        *side2np = *side2np + 1;
        memmove(side1p,p1 + 1,(~n + *side1np) * 0x10);
        *side1np = *side1np + ~n;
        check_err();
        iVar4 = 1;
        goto LAB_0804c1aa;
      }
    }
  }
LAB_0804c1a5:
  iVar4 = 0;
LAB_0804c1aa:
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention

int quad_solve(long v)

{
  int *piVar1;
  token_type *ptVar2;
  bool bVar3;
  int iVar4;
  token_type *p1;
  token_type *ptVar5;
  token_type *x2p;
  int iVar6;
  int j;
  int iVar7;
  int i;
  int iVar8;
  token_type *ptVar9;
  token_type *p2;
  token_type *ptVar10;
  int iVar11;
  int iVar12;
  token_type *b2p;
  token_type *x1tp;
  size_t __n;
  int len;
  int iVar13;
  token_type *ep;
  token_type *ptVar14;
  int op2;
  long lVar15;
  int local_6a8;
  long local_6a4;
  token_type *local_6a0;
  token_type *local_69c;
  token_type *local_698;
  token_type *local_694;
  long local_688;
  int local_680;
  token_type *local_678;
  double local_674;
  double dStack_668;
  token_type x1_storage [100];
  int local_20 [4];
  
  uf_simp(trhs,&n_trhs);
  while (iVar4 = factor_plus(trhs,&n_trhs,v,0.0), iVar4 != 0) {
    simp_loop(trhs,&n_trhs);
  }
  list_debug(1,tlhs,n_tlhs,trhs,n_trhs);
  ptVar2 = trhs + n_trhs;
  local_674 = 0.0;
  bVar3 = false;
  local_678 = (token_type *)0x0;
  local_6a0 = (token_type *)0x0;
  local_69c = (token_type *)0x0;
  local_698 = (token_type *)0x0;
  local_694 = (token_type *)0x0;
  ptVar5 = trhs;
  ptVar9 = trhs;
  do {
    if (ptVar5 < ptVar2) {
      iVar4 = ptVar5->level;
      if (iVar4 != 1) goto LAB_0804c4a4;
      if (ptVar5->kind == OPERATOR) {
        if (1 < (ptVar5->token).variable - 1U) {
          return 0;
        }
        goto LAB_0804c2ef;
      }
LAB_0804c484:
      if (ptVar5->kind == OPERATOR) {
        ptVar9 = ptVar5 + 1;
        bVar3 = false;
        local_678 = (token_type *)0x0;
      }
    }
    else {
LAB_0804c2ef:
      ptVar14 = ptVar9;
      if ((int)local_678 - 3U < 2) {
        if (ptVar9 < ptVar5) {
          bVar3 = false;
          local_688 = 0;
          ptVar10 = ptVar9;
          do {
            if (ptVar10->level == 2) {
              if (ptVar10->kind == OPERATOR) {
                ptVar14 = ptVar10 + 1;
                local_688 = (ptVar10->token).variable;
                bVar3 = false;
              }
            }
            else if (ptVar10->kind == OPERATOR) {
              if ((((ptVar10->level == 3) && ((ptVar10->token).variable == 6)) && (bVar3)) &&
                 (((local_688 == 3 || (local_688 == 0)) &&
                  ((ptVar10[1].level == 3 &&
                   ((ptVar10[1].kind == CONSTANT && (local_674 < ptVar10[1].token.constant)))))))) {
                local_69c = ptVar10 + 2;
                local_6a0 = ptVar5;
                local_698 = ptVar9;
                local_694 = ptVar14;
                local_674 = ptVar10[1].token.constant;
              }
            }
            else if ((ptVar10->kind == VARIABLE) && ((ptVar10->token).variable == v)) {
              bVar3 = true;
            }
            ptVar10 = ptVar10 + 1;
          } while (ptVar10 < ptVar5);
        }
        else {
          bVar3 = false;
        }
      }
      else if ((((local_678 == (token_type *)0x6) && (bVar3)) && (ptVar5[-1].level == 2)) &&
              ((ptVar5[-1].kind == CONSTANT && (local_674 < ptVar5[-1].token.constant)))) {
        local_6a0 = ptVar5;
        local_69c = ptVar5;
        local_698 = ptVar9;
        local_694 = ptVar9;
        local_674 = ptVar5[-1].token.constant;
      }
      ptVar9 = ptVar14;
      if (ptVar2 <= ptVar5) break;
      iVar4 = ptVar5->level;
      if (iVar4 == 1) goto LAB_0804c484;
LAB_0804c4a4:
      if (ptVar5->kind == OPERATOR) {
        if (iVar4 == 2) {
          local_678 = (token_type *)(ptVar5->token).variable;
        }
      }
      else if (((local_678 == (token_type *)0x0) && (ptVar5->kind == VARIABLE)) &&
              ((ptVar5->token).variable == v)) {
        bVar3 = true;
      }
    }
    ptVar5 = ptVar5 + 1;
  } while( true );
  if (local_674 != 0.0) {
    list_var(v,0);
    __fprintf_chk(gfp,1,"Equation is a degree %.*g polynomial in (%s).\n",precision,
                  SUB84(local_674,0),(int)((ulonglong)local_674 >> 0x20),var_str);
    if ((local_698 <= trhs) || (local_6a8 = 2, local_698[-1].token.variable != 2)) {
      local_6a8 = 1;
    }
    if ((float)local_674 == 2.0) {
      local_680 = ((int)local_69c - (int)local_694 >> 4) + -2;
      if (local_680 < 0x65) {
        __memmove_chk(x1_storage,local_694,local_680 * 0x10,0x640);
LAB_0804c649:
        local_674._0_4_ = trhs;
        local_6a4 = 0;
        local_688 = 0;
        ptVar9 = trhs;
        do {
          ptVar5 = local_674._0_4_;
          if (ptVar9 < ptVar2) {
            iVar4 = ptVar9->level;
            local_678 = local_674._0_4_;
            if (iVar4 == 1) {
              if (ptVar9->kind == OPERATOR) goto LAB_0804c692;
              goto LAB_0804c7b8;
            }
LAB_0804c7db:
            if ((ptVar9->kind == OPERATOR) && (iVar4 == 2)) {
              local_688 = (ptVar9->token).variable;
              local_674._0_4_ = local_678;
            }
            else {
              local_674._0_4_ = local_678;
            }
          }
          else {
LAB_0804c692:
            iVar4 = se_compare(x1_storage,local_680,local_674._0_4_,
                               (int)ptVar9 - (int)local_674._0_4_ >> 4,local_20);
            b2p = ptVar9;
            if (iVar4 != 0) {
big_bbreak:
              if (local_6a4 < 0) {
                return 0;
              }
              if (local_6a4 < 2) {
                local_6a4 = 2;
                if (local_20[0] != 0) goto LAB_0804c862;
              }
              else {
                if (local_6a4 != 2) {
                  return 0;
                }
                if (local_20[0] == 0) goto LAB_0804c862;
              }
              local_6a4 = 1;
LAB_0804c862:
              __n = (int)local_674._0_4_ - (int)ptVar5;
              memmove(scratch,ptVar5,__n);
              iVar4 = (int)__n >> 4;
              scratch[iVar4].level = 7;
              scratch[iVar4].kind = CONSTANT;
              if (local_6a4 == 2) {
                scratch[iVar4].token.constant = -1.0;
              }
              else {
                scratch[iVar4].token.constant = 1.0;
              }
              memmove(scratch + iVar4 + 1,b2p,(int)ptVar9 - (int)b2p);
              iVar4 = iVar4 + 1 + ((int)ptVar9 - (int)b2p >> 4);
              iVar6 = min_level(scratch,iVar4);
              if (0 < iVar4) {
                iVar7 = 0;
                do {
                  scratch[iVar7].level = scratch[iVar7].level + (7 - iVar6);
                  iVar7 = iVar7 + 1;
                } while (iVar7 != iVar4);
              }
              scratch[iVar4].level = 6;
              scratch[iVar4].kind = OPERATOR;
              scratch[iVar4].token.variable = 6;
              iVar6 = iVar4 + 1;
              scratch[iVar6].level = 6;
              scratch[iVar6].kind = CONSTANT;
              scratch[iVar6].token.constant = 2.0;
              iVar6 = iVar4 + 2;
              scratch[iVar6].level = 5;
              scratch[iVar6].kind = OPERATOR;
              scratch[iVar6].token.variable = 2;
              iVar6 = iVar4 + 3;
              scratch[iVar6].level = 6;
              scratch[iVar6].kind = CONSTANT;
              scratch[iVar6].token.constant = 4.0;
              iVar6 = iVar4 + 4;
              scratch[iVar6].level = 6;
              scratch[iVar6].kind = OPERATOR;
              scratch[iVar6].token.variable = 3;
              iVar7 = iVar4 + 5;
              memmove(scratch + iVar7,local_698,(int)local_694 - (int)local_698);
              iVar6 = iVar7 + ((int)local_694 - (int)local_698 >> 4);
              scratch[iVar6].level = 7;
              scratch[iVar6].kind = CONSTANT;
              if (local_6a8 == 2) {
                scratch[iVar6].token.constant = -1.0;
              }
              else {
                scratch[iVar6].token.constant = 1.0;
              }
              memmove(scratch + iVar6 + 1,local_69c,(int)local_6a0 - (int)local_69c);
              iVar13 = iVar6 + 1 + ((int)local_6a0 - (int)local_69c >> 4);
              iVar11 = iVar13 - iVar7;
              iVar6 = min_level(scratch + iVar7,iVar11);
              if (iVar7 < iVar13) {
                iVar12 = (iVar4 + 5) * 0x10;
                iVar8 = iVar7;
                do {
                  piVar1 = (int *)((int)&scratch->level + iVar12);
                  *piVar1 = *piVar1 + (7 - iVar6);
                  iVar8 = iVar8 + 1;
                  iVar12 = iVar12 + 0x10;
                } while (iVar8 < iVar13);
              }
              scratch[iVar13].level = 6;
              scratch[iVar13].kind = OPERATOR;
              scratch[iVar13].token.variable = 3;
              ptVar9 = scratch;
              iVar6 = iVar13 + 1;
              scratch[iVar6].kind = zero_token.kind;
              ptVar9[iVar6].level = zero_token.level;
              ptVar9[iVar6].token.variable = zero_token.token.variable;
              *(undefined4 *)((int)&ptVar9[iVar6].token + 4) = zero_token.token._4_4_;
              iVar13 = iVar13 + 2;
              ptVar9 = trhs;
              ptVar5 = trhs;
              do {
                if ((ptVar2 <= ptVar5) || ((ptVar5->level == 1 && (ptVar5->kind == OPERATOR)))) {
                  if (((local_694 < ptVar9) || (ptVar5 <= local_694)) &&
                     ((local_674._0_4_ < ptVar9 || (ptVar5 <= local_674._0_4_)))) {
                    if (ptVar9 == trhs) {
                      scratch[iVar13].level = 1;
                      scratch[iVar13].kind = OPERATOR;
                      scratch[iVar13].token.variable = 1;
                      iVar13 = iVar13 + 1;
                    }
                    memmove(scratch + iVar13,ptVar9,(int)ptVar5 - (int)ptVar9);
                    iVar13 = iVar13 + ((int)ptVar5 - (int)ptVar9 >> 4);
                  }
                  ptVar9 = ptVar5;
                  if (ptVar2 <= ptVar5) {
                    if (iVar6 < iVar13) {
                      iVar8 = iVar6 * 0x10;
                      do {
                        piVar1 = (int *)((int)&scratch->level + iVar8);
                        *piVar1 = *piVar1 + 6;
                        iVar6 = iVar6 + 1;
                        iVar8 = iVar8 + 0x10;
                      } while (iVar6 < iVar13);
                    }
                    scratch[iVar13].level = 4;
                    scratch[iVar13].kind = OPERATOR;
                    scratch[iVar13].token.variable = 6;
                    iVar6 = iVar13 + 1;
                    scratch[iVar6].level = 4;
                    scratch[iVar6].kind = CONSTANT;
                    scratch[iVar6].token.constant = 0.5;
                    iVar6 = iVar13 + 2;
                    scratch[iVar6].level = 3;
                    scratch[iVar6].kind = OPERATOR;
                    scratch[iVar6].token.variable = 3;
                    iVar6 = iVar13 + 3;
                    scratch[iVar6].level = 3;
                    scratch[iVar6].kind = VARIABLE;
                    next_sign(&scratch[iVar6].token.variable);
                    iVar6 = iVar13 + 4;
                    scratch[iVar6].level = 2;
                    scratch[iVar6].kind = OPERATOR;
                    scratch[iVar6].token.variable = 2;
                    iVar6 = iVar13 + 5 + iVar4;
                    if (n_tokens < iVar11 + 3 + iVar6) {
                      error_huge();
                    }
                    memmove(scratch + iVar13 + 5,scratch,iVar4 * 0x10);
                    scratch[iVar6].level = 1;
                    scratch[iVar6].kind = OPERATOR;
                    scratch[iVar6].token.variable = 4;
                    iVar4 = iVar6 + 1;
                    scratch[iVar4].level = 2;
                    scratch[iVar4].kind = CONSTANT;
                    scratch[iVar4].token.constant = 2.0;
                    iVar4 = iVar6 + 2;
                    scratch[iVar4].level = 2;
                    scratch[iVar4].kind = OPERATOR;
                    scratch[iVar4].token.variable = 3;
                    memmove(scratch + iVar6 + 3,scratch + iVar7,iVar11 * 0x10);
                    iVar11 = iVar6 + 3 + iVar11;
                    iVar4 = found_var(scratch,iVar11,v);
                    if (iVar4 != 0) {
                      return 0;
                    }
                    memmove(tlhs,x1_storage,local_680 << 4);
                    n_tlhs = local_680;
                    simp_loop(tlhs,&n_tlhs);
                    memmove(trhs,scratch,iVar11 * 0x10);
                    n_trhs = iVar11;
                    simp_loop(trhs,&n_trhs);
                    list_debug(2,tlhs,n_tlhs,trhs,n_trhs);
                    uf_tsimp(trhs,&n_trhs);
                    simps_side(trhs,&n_trhs,0);
                    list_debug(1,tlhs,n_tlhs,trhs,n_trhs);
                    if (-1 < debug_level) {
                      __fprintf_chk(gfp,1,"%s\n","Equation was solved with the quadratic formula.");
                      return 1;
                    }
                    return 1;
                  }
                }
                ptVar5 = ptVar5 + 1;
              } while( true );
            }
            local_678 = local_674._0_4_;
            if (local_688 - 3U < 2) {
              lVar15 = 0;
              b2p = local_674._0_4_;
              do {
                if (b2p < ptVar9) {
                  if (b2p->level == 2) {
                    if (b2p->kind == OPERATOR) goto LAB_0804c718;
                    goto LAB_0804c77f;
                  }
                }
                else {
LAB_0804c718:
                  if (((lVar15 == 0) || (lVar15 == 3)) &&
                     (iVar4 = se_compare(x1_storage,local_680,local_678,
                                         (int)b2p - (int)local_678 >> 4,local_20), iVar4 != 0)) {
                    local_674._0_4_ = local_678;
                    goto big_bbreak;
                  }
                  if (ptVar9 <= b2p) break;
                  if (b2p->level == 2) {
LAB_0804c77f:
                    if (b2p->kind == OPERATOR) {
                      local_678 = b2p + 1;
                      lVar15 = (b2p->token).variable;
                    }
                  }
                }
                b2p = b2p + 1;
              } while( true );
            }
            if (ptVar2 <= ptVar9) {
              return 0;
            }
            iVar4 = ptVar9->level;
            if (iVar4 != 1) goto LAB_0804c7db;
            local_674._0_4_ = local_678;
LAB_0804c7b8:
            if (ptVar9->kind == OPERATOR) {
              local_6a4 = (ptVar9->token).variable;
              local_674._0_4_ = ptVar9 + 1;
              local_688 = 0;
            }
          }
          ptVar9 = ptVar9 + 1;
        } while( true );
      }
    }
    else {
      local_680 = (int)local_69c - (int)local_694 >> 4;
      if (local_680 < 0x65) {
        __memmove_chk(x1_storage,local_694,local_680 << 4,0x640);
        (&dStack_668)[local_680 * 2] = (&dStack_668)[local_680 * 2] * 0.5;
        goto LAB_0804c649;
      }
    }
  }
  return 0;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Unknown calling convention

int solve_sub(token_type *wantp,int wantn,token_type *leftp,int *leftnp,token_type *rightp,
             int *rightnp)

{
  double d;
  kind_list kVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  token_type *b1_1;
  token_type *p1;
  int iVar9;
  token_type *ptVar10;
  int iVar11;
  int *piVar12;
  token_type *p1_1;
  token_type *ptVar13;
  token_type *ptVar14;
  token_type *ptVar15;
  uint uVar16;
  int found;
  int zflag;
  int j;
  token_type *ep;
  int op_kind;
  token_type *ptVar17;
  token_type *p2;
  token_type *ptVar18;
  token_type *b1;
  int foundp;
  int op;
  int len2;
  int i;
  int need_flip;
  int iVar19;
  int local_80;
  int local_74;
  int local_6c;
  int local_64;
  token_type *local_54;
  long local_50;
  int local_40;
  double local_34;
  double local_2c;
  int local_20 [4];
  
  repeat_count = 0;
  n_tlhs = *leftnp;
  memmove(tlhs,leftp,n_tlhs << 4);
  n_trhs = *rightnp;
  memmove(trhs,rightp,n_trhs << 4);
  if (wantn != 1) {
    error("This program will only solve for a single variable or for zero.");
    return 0;
  }
  if ((n_tlhs < 1) || (n_trhs < 1)) {
    error("Please enter an equation or a command like \"help\".");
    return 0;
  }
  if (wantp->kind == VARIABLE) {
    local_50 = (wantp->token).variable;
    iVar8 = found_var(trhs,n_trhs,local_50);
    if ((iVar8 == 0) && (iVar8 = found_var(tlhs,n_tlhs,local_50), iVar8 == 0)) {
      error("Variable not found.");
      return 0;
    }
    local_40 = 0;
  }
  else {
    if ((wantp->kind != CONSTANT) || ((wantp->token).constant != 0.0)) {
      error("This program will only solve for a single variable or for zero.");
      return 0;
    }
    local_40 = 1;
    local_50 = 0;
  }
  uf_power(tlhs,&n_tlhs);
  uf_power(trhs,&n_trhs);
  local_64 = 1;
  bVar5 = false;
  local_74 = 0;
  bVar4 = false;
  bVar2 = false;
LAB_0804d1d6:
  list_debug(2,tlhs,n_tlhs,trhs,n_trhs);
  simps_side(tlhs,&n_tlhs,local_40);
  if (bVar2) {
    simp_loop(trhs,&n_trhs);
    uf_simp(trhs,&n_trhs);
    factorv(trhs,&n_trhs,local_50);
  }
  else {
    simps_side(trhs,&n_trhs,local_40);
  }
  list_debug(1,tlhs,n_tlhs,trhs,n_trhs);
  bVar7 = bVar4;
no_simp:
  ptVar18 = trhs;
  ptVar10 = trhs + n_trhs;
  bVar4 = bVar7;
  if (local_40 == 0) {
    if (trhs < ptVar10) {
      uVar16 = 0;
      ptVar13 = trhs;
      ptVar17 = trhs;
      do {
        if ((ptVar13->kind == VARIABLE) && ((ptVar13->token).variable == local_50)) {
          ptVar15 = trhs;
          if (uVar16 == 0) goto LAB_0804d372;
          goto LAB_0804d3a2;
        }
        if ((ptVar13->level == 1) && (ptVar13->kind == OPERATOR)) {
          uVar16 = (ptVar13->token).operatr;
          ptVar17 = ptVar13 + 1;
        }
        ptVar13 = ptVar13 + 1;
      } while (ptVar13 < ptVar10);
    }
  }
  else {
    for (; ptVar18 < ptVar10; ptVar18 = ptVar18 + 1) {
      if (((ptVar18->level == 1) && (ptVar18->kind == OPERATOR)) && ((ptVar18->token).variable == 4)
         ) {
        iVar8 = g_of_f(4,ptVar18 + 1,trhs,&n_trhs,tlhs,&n_tlhs);
        goto joined_r0x0804d3fe;
      }
    }
  }
  bVar4 = bVar5;
  if (bVar2) {
    simps_side(trhs,&n_trhs,local_40);
  }
LAB_0804d454:
  bVar2 = false;
  bVar6 = true;
LAB_0804d462:
  iVar8 = found_var(trhs,n_trhs,local_50);
  if (iVar8 != 0) {
    if (debug_level < 1) {
      return 0;
    }
    __fprintf_chk(gfp,1,"%s\n","Solve variable moved back to RHS, quitting solve routine.");
    return 0;
  }
  iVar8 = se_compare(wantp,1,tlhs,n_tlhs,local_20);
  ptVar10 = tlhs;
  bVar5 = bVar4;
  if ((iVar8 != 0) && (local_20[0] == 0)) {
    if (local_40 != 0) goto LAB_0804d509;
    if (0 < debug_level) {
      __fprintf_chk(gfp,1,"%s\n","Solve completed:");
    }
    goto LAB_0804d752;
  }
  ptVar13 = tlhs + n_tlhs;
  iVar9 = 0;
  uVar16 = 0;
  iVar8 = 0;
  local_80 = 0;
  ptVar18 = tlhs;
  ptVar17 = tlhs;
LAB_0804d816:
  if ((ptVar17 < ptVar13) && ((ptVar17->level != 1 || (ptVar17->kind != OPERATOR)))) {
    if ((ptVar17->kind == VARIABLE) && ((ptVar17->token).variable == local_50)) {
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 1;
    }
  }
  else {
    iVar19 = local_80;
    if (iVar9 == 0) {
      if ((((ptVar13 <= ptVar17) && (iVar8 == 0)) &&
          ((local_40 == 0 && ((n_tlhs < 2 && (tlhs->kind == CONSTANT)))))) ||
         (((uint)((int)ptVar17 + (-0x10 - (int)ptVar18)) < 0x10 &&
          ((((ptVar18->kind == CONSTANT && ((ptVar18->token).constant == 1.0)) &&
            (ptVar17 < ptVar13)) && ((ptVar17->token).variable == 4)))))) goto LAB_0804da13;
      if (uVar16 == 0) {
        for (; ptVar17 < ptVar13; ptVar17 = ptVar17 + 1) {
          if ((ptVar17->level == 1) && (ptVar17->kind == OPERATOR)) {
            uVar16 = (ptVar17->token).operatr;
            if ((int)uVar16 < 1) goto LAB_0804d8d3;
            if (2 < (int)uVar16) {
              if ((int)uVar16 < 5) {
                uVar16 = 3;
              }
              goto LAB_0804d8d3;
            }
            break;
          }
        }
        uVar16 = 1;
      }
LAB_0804d8d3:
      if (local_40 == 0) goto LAB_0804d920;
      if (ptVar13 <= ptVar17) {
        ptVar17 = tlhs;
        if (uVar16 != 4) {
          for (; ptVar17 < ptVar13; ptVar17 = ptVar17 + 1) {
            ptVar17->level = ptVar17->level + 1;
          }
          uVar16 = 1;
          ptVar18 = ptVar10;
        }
LAB_0804d920:
        iVar8 = g_of_f(uVar16,ptVar18,tlhs,&n_tlhs,trhs,&n_trhs);
        if (iVar8 == 0) {
          return 0;
        }
        list_debug(2,tlhs,n_tlhs,trhs,n_trhs);
        if (bVar2) {
          simp_loop(tlhs,&n_tlhs);
        }
        else {
          simps_side(tlhs,&n_tlhs,local_40);
        }
        simps_side(trhs,&n_trhs,local_40);
        list_debug(1,tlhs,n_tlhs,trhs,n_trhs);
        goto LAB_0804d462;
      }
      if ((uVar16 < 5) && ((1 << ((byte)uVar16 & 0x1f) & 0x16U) != 0)) goto LAB_0804d920;
    }
    else {
      iVar19 = iVar9 + local_80;
      if (uVar16 != 4) {
        iVar19 = local_80;
      }
LAB_0804da13:
      local_80 = iVar19;
      if (ptVar13 <= ptVar17) goto code_r0x0804da1b;
    }
    uVar16 = (ptVar17->token).operatr;
    ptVar18 = ptVar17 + 1;
    iVar9 = 0;
  }
  ptVar17 = ptVar17 + 1;
  goto LAB_0804d816;
  while ((ptVar14[1].level != 1 || (ptVar13->kind != OPERATOR))) {
LAB_0804d372:
    ptVar14 = ptVar13;
    ptVar13 = ptVar14 + 1;
    if (ptVar10 <= ptVar13) goto LAB_0804d3d0;
  }
  uVar16 = ptVar14[1].token.operatr;
  if ((int)uVar16 < 1) {
LAB_0804d3a2:
    if ((6 < uVar16) || ((1 << ((byte)uVar16 & 0x1f) & 0x58U) == 0)) goto LAB_0804d3d7;
  }
  else {
    if ((int)uVar16 < 3) {
LAB_0804d3d0:
      uVar16 = 1;
      goto LAB_0804d3d7;
    }
    if (4 < (int)uVar16) goto LAB_0804d3a2;
  }
  do {
    ptVar15->level = ptVar15->level + 1;
    ptVar15 = ptVar15 + 1;
  } while (ptVar15 < ptVar10);
  uVar16 = 1;
  ptVar17 = ptVar18;
LAB_0804d3d7:
  iVar8 = g_of_f(uVar16,ptVar17,trhs,&n_trhs,tlhs,&n_tlhs);
joined_r0x0804d3fe:
  if (iVar8 == 0) {
    return 0;
  }
  goto LAB_0804d1d6;
LAB_0804d6a4:
  ptVar10 = ptVar10 + 1;
  if (ptVar18 <= ptVar10) {
LAB_0804d65c:
    memmove(ptVar17 + 1,ptVar10,(int)ptVar18 - (int)ptVar10);
    n_trhs = n_trhs - ((int)ptVar10 - (int)(ptVar17 + 1) >> 4);
    ptVar17->kind = CONSTANT;
    (ptVar17->token).constant = 1.0;
    goto LAB_0804d509;
  }
  goto LAB_0804d64f;
code_r0x0804da1b:
  if (iVar8 == 0) {
    iVar8 = found_var(trhs,n_trhs,local_50);
    if (iVar8 != 0) {
      if (debug_level < 1) {
        return 0;
      }
      __fprintf_chk(gfp,1,"%s\n","Solve variable moved back to RHS, quitting solve routine.");
      return 0;
    }
    calc_simp(tlhs,&n_tlhs);
    calc_simp(trhs,&n_trhs);
    iVar8 = se_compare(tlhs,n_tlhs,trhs,n_trhs,local_20);
    if ((iVar8 != 0) && (local_20[0] == 0)) {
      error("This equation is an identity.");
      __printf_chk(1,"That is, the LHS is identical to the RHS.\n");
      return -1;
    }
    iVar8 = 0;
    ptVar10 = tlhs;
    goto LAB_0804db40;
  }
  if (((n_trhs == 1) && (trhs->kind == CONSTANT)) && ((trhs->token).constant == 0.0)) {
    (trhs->token).constant = 0.0;
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (iVar8 <= local_80) {
    iVar8 = flip(tlhs,&n_tlhs,trhs,&n_trhs);
    if (iVar8 == 0) {
      return 0;
    }
    list_debug(2,tlhs,n_tlhs,trhs,n_trhs);
    simps_side(tlhs,&n_tlhs,local_40);
    simps_side(trhs,&n_trhs,local_40);
    list_debug(1,tlhs,n_tlhs,trhs,n_trhs);
    goto LAB_0804d454;
  }
  if ((bVar6) && (!bVar2)) {
    if (0 < debug_level) {
      __fprintf_chk(gfp,1,"%s\n","Unfactoring...");
    }
    partial_flag = 0;
    uf_simp(tlhs,&n_tlhs);
    partial_flag = 1;
    factorv(tlhs,&n_tlhs,local_50);
    list_debug(1,tlhs,n_tlhs,trhs,n_trhs);
    bVar2 = true;
    bVar6 = false;
    goto LAB_0804d462;
  }
  if (bVar2) {
    simps_side(tlhs,&n_tlhs,local_40);
    list_debug(1,tlhs,n_tlhs,trhs,n_trhs);
    bVar2 = false;
    goto LAB_0804d462;
  }
  iVar8 = 0;
  ptVar10 = tlhs;
  ptVar18 = tlhs;
  for (iVar9 = 1; ptVar17 = ptVar18 + 2, iVar19 = iVar8, iVar9 < n_tlhs; iVar9 = iVar9 + 2) {
    if (ptVar18[1].level == 1) {
      iVar19 = ptVar18[1].token.operatr;
      if (1 < iVar19 - 3U) break;
      if (iVar8 == 0) {
        iVar8 = 3;
      }
      if (bVar3) {
        if (iVar19 == 4) {
          ptVar10 = tlhs + iVar9 + 1;
          break;
        }
        if (((ptVar17->kind == VARIABLE) && (ptVar18[2].token.variable == local_50)) &&
           ((ptVar18[2].level == 1 ||
            ((((ptVar18[2].level == 2 && (ptVar18[3].token.variable == 6)) &&
              (ptVar18[4].level == 2)) &&
             ((ptVar18[4].kind == CONSTANT && (0.0 < ptVar18[4].token.constant)))))))) {
          iVar8 = iVar19;
          ptVar10 = ptVar17;
        }
      }
      else if (iVar19 == 4) {
        ptVar18 = ptVar18 + 3;
        local_54 = (token_type *)iVar9;
        do {
          ptVar13 = ptVar18;
          local_54 = (token_type *)((int)local_54 + 2);
          if ((n_tlhs <= (int)local_54) || (ptVar13->level < 2)) goto LAB_0804df01;
          ptVar18 = ptVar13 + 2;
        } while (ptVar13->level != 2);
        if ((ptVar13->token).variable - 1U < 2) {
          iVar8 = 4;
          ptVar10 = ptVar17;
        }
      }
    }
LAB_0804df01:
    local_54 = ptVar10;
    ptVar10 = local_54;
    ptVar18 = ptVar17;
  }
  if (((bVar3) && (bVar4)) &&
     ((iVar19 == 3 && ((ptVar10->kind == VARIABLE && ((ptVar10->token).variable == local_50)))))) {
    if ((ptVar10->level != 1) &&
       ((((ptVar10->level != 2 || (ptVar10[1].token.variable != 6)) || (ptVar10[2].level != 2)) ||
        ((ptVar10[2].kind != CONSTANT || (ptVar10[2].token.constant <= 0.0)))))) {
LAB_0804e15d:
      iVar19 = 0;
      iVar8 = 0;
      for (iVar9 = 1; iVar9 < n_tlhs; iVar9 = iVar9 + 2) {
        if ((((tlhs[iVar9].token.variable == 6) &&
             (piVar12 = (int *)((int)&tlhs[2].kind + iVar19), piVar12[1] == tlhs[iVar9].level)) &&
            ((*piVar12 == 0 &&
             (((ABS(*(double *)(piVar12 + 2)) < 1.0 &&
               (iVar11 = f_to_fraction(*(double *)(piVar12 + 2),&local_2c,&local_34), iVar11 != 0))
              && (ABS(local_2c) == 1.0)))))) && (2.0 <= local_34)) {
          piVar12 = (int *)((int)&tlhs->kind + iVar19);
          local_6c = iVar9;
          while( true ) {
            local_6c = local_6c + -1;
            if ((local_6c < 0) || (piVar12[1] < tlhs[iVar9].level)) goto LAB_0804e151;
            if ((*piVar12 == 1) && (piVar12[2] == local_50)) break;
            piVar12 = piVar12 + -4;
          }
          if (iVar8 == 0) {
            iVar11 = (int)&tlhs[2].kind + iVar19;
            goto LAB_0804e153;
          }
          iVar11 = (int)&tlhs[2].kind + iVar19;
          if (ABS(*(double *)(iVar8 + 8)) < ABS(*(double *)(iVar11 + 8))) goto LAB_0804e153;
        }
LAB_0804e151:
        iVar11 = iVar8;
LAB_0804e153:
        iVar19 = iVar19 + 0x20;
        iVar8 = iVar11;
      }
      if ((bVar4) && (iVar8 != 0)) {
        local_74 = local_74 + 1;
        if (0x14 < local_74) {
          return 0;
        }
        __fprintf_chk(gfp,1,"Raising both equation sides to the power of %.*g and unfactoring...\n",
                      precision,1.0 / *(double *)(iVar8 + 8));
        d = *(double *)(iVar8 + 8);
        partial_flag = 0;
        ufactor(tlhs,&n_tlhs);
        partial_flag = 1;
        symb_flag = symblify;
        simp_ssub(tlhs,&n_tlhs,local_50,d,1,0,2);
        simp_ssub(tlhs,&n_tlhs,0,1.0,1,1,2);
        symb_flag = 0;
        goto lonely;
      }
      if (bVar7) {
        return 0;
      }
      if (0 < debug_level) {
        __fprintf_chk(gfp,1,"%s\n","Solving for zero...");
      }
      *leftnp = n_tlhs;
      memmove(leftp,tlhs,n_tlhs << 4);
      *rightnp = n_trhs;
      memmove(rightp,trhs,n_trhs << 4);
      iVar8 = solve_sub(&zero_token,1,leftp,leftnp,rightp,rightnp);
      if (iVar8 < 1) {
        return 0;
      }
      iVar8 = quad_solve(local_50);
      if (iVar8 == 0) {
        bVar5 = true;
        goto LAB_0804d1d6;
      }
      bVar7 = bVar4;
      bVar4 = true;
      goto LAB_0804d454;
    }
    __fprintf_chk(gfp,1,"Removing possible solution: \"");
    list_proc(ptVar10,1,0);
    __fprintf_chk(gfp,1,&DAT_08072705);
    local_64 = 2;
    bVar7 = false;
  }
  else {
    if (iVar19 != 4) goto LAB_0804e15d;
    bVar2 = true;
    if (0 < debug_level) {
      __fprintf_chk(gfp,1,"%s\n","Juggling...");
      bVar2 = true;
    }
  }
  iVar8 = g_of_f(iVar19,ptVar10,tlhs,&n_tlhs,trhs,&n_trhs);
  bVar4 = bVar7;
  goto joined_r0x0804d3fe;
LAB_0804db40:
  if (n_tlhs <= iVar8) goto code_r0x0804db44;
  if ((ptVar10->kind == VARIABLE) && (3 < (ptVar10->token).variable)) {
    bVar2 = true;
    goto LAB_0804db49;
  }
  iVar8 = iVar8 + 2;
  ptVar10 = ptVar10 + 2;
  goto LAB_0804db40;
lonely:
  ptVar10 = tlhs + 1;
  local_54 = (token_type *)0x0;
  bVar2 = false;
  while( true ) {
    if (tlhs + n_tlhs <= ptVar10) goto LAB_0804d1c1;
    iVar8 = ptVar10->level;
    if (iVar8 == 1) break;
    iVar9 = (int)local_54;
    if (((((ptVar10->token).variable == 6) && (iVar8 == ptVar10[1].level)) &&
        (ptVar10[1].kind == CONSTANT)) && (d == ptVar10[1].token.constant)) {
      bVar4 = false;
      ptVar18 = ptVar10;
      do {
        ptVar17 = ptVar18;
        ptVar18 = ptVar17 + -1;
        if (ptVar17[-1].level < iVar8) break;
        if ((ptVar18->kind == VARIABLE) && (local_50 == ptVar17[-1].token.variable)) {
          bVar4 = true;
        }
        ptVar17 = tlhs;
      } while (tlhs != ptVar18);
      if ((bVar4) &&
         (iVar9 = (int)ptVar10 - (int)ptVar17 >> 4, bVar2 = true, iVar9 <= (int)local_54)) {
        iVar9 = (int)local_54;
      }
    }
    local_54 = (token_type *)iVar9;
    ptVar10 = ptVar10 + 2;
  }
  iVar8 = 0;
  bVar4 = false;
  ptVar18 = ptVar10;
  while (ptVar17 = ptVar18, ptVar18 = ptVar17 + 2, ptVar18 < tlhs + n_tlhs) {
    if ((((ptVar17[2].token.variable == 6) && (ptVar17[3].level == ptVar17[2].level)) &&
        (ptVar17[3].kind == CONSTANT)) && (d == ptVar17[3].token.constant)) {
      bVar5 = false;
      for (ptVar13 = ptVar17 + 1; ptVar17[3].level <= ptVar13->level; ptVar13 = ptVar13 + -1) {
        if ((ptVar13->kind == VARIABLE) && (local_50 == (ptVar13->token).variable)) {
          bVar5 = true;
        }
        ptVar15 = tlhs;
        if (tlhs == ptVar13) goto LAB_0804e3b1;
      }
      ptVar15 = ptVar13 + 1;
LAB_0804e3b1:
      if (bVar5) {
        iVar9 = (int)ptVar18 - (int)ptVar15 >> 4;
        if (iVar8 < iVar9) {
          iVar8 = iVar9;
        }
        bVar4 = true;
      }
    }
  }
  if (((bVar2) && (bVar4)) && ((int)local_54 < iVar8)) {
    bVar2 = false;
  }
  ptVar18 = ptVar10 + 1;
  iVar8 = (ptVar10->token).operatr;
  if ((((iVar8 == 6) && (ptVar10[1].level == 1)) && (ptVar18->kind == CONSTANT)) &&
     (d == ptVar10[1].token.constant)) goto code_r0x0804e412;
  if (bVar2) {
LAB_0804e4be:
    iVar8 = g_of_f(iVar8,ptVar18,tlhs,&n_tlhs,trhs,&n_trhs);
  }
  else {
    ptVar18 = tlhs;
    if ((0xf < (uint)((int)ptVar10 + (-0x10 - (int)tlhs))) || (iVar8 != 4)) {
      if (0 < iVar8) {
        if (iVar8 < 3) {
          iVar8 = 1;
        }
        else if (iVar8 < 5) goto LAB_0804e4b7;
      }
      goto LAB_0804e4be;
    }
    if ((tlhs->kind != CONSTANT) || ((tlhs->token).constant != 1.0)) {
LAB_0804e4b7:
      iVar8 = 3;
      goto LAB_0804e4be;
    }
    iVar8 = flip(tlhs,&n_tlhs,trhs,&n_trhs);
  }
  if (iVar8 == 0) {
    return 0;
  }
  list_debug(2,tlhs,n_tlhs,trhs,n_trhs);
  simp_loop(tlhs,&n_tlhs);
  simp_loop(trhs,&n_trhs);
  list_debug(1,tlhs,n_tlhs,trhs,n_trhs);
  goto lonely;
code_r0x0804e412:
  iVar8 = g_of_f(6,ptVar18,tlhs,&n_tlhs,trhs,&n_trhs);
  if (iVar8 == 0) {
    return 0;
  }
LAB_0804d1c1:
  bVar5 = false;
  bVar4 = false;
  bVar2 = true;
  goto LAB_0804d1d6;
LAB_0804d509:
  list_debug(4,tlhs,n_tlhs,trhs,n_trhs);
  uf_power(trhs,&n_trhs);
  do {
    do {
      simp_ssub(trhs,&n_trhs,0,0.0,0,1,0);
      iVar8 = uf_power(trhs,&n_trhs);
    } while (iVar8 != 0);
    iVar8 = super_factor(trhs,&n_trhs,1);
  } while (iVar8 != 0);
  list_debug(3,tlhs,n_tlhs,trhs,n_trhs);
  ptVar18 = trhs + n_trhs;
  iVar8 = 0;
  for (ptVar10 = trhs + 1; ptVar10 < ptVar18; ptVar10 = ptVar10 + 2) {
    if (ptVar10->level == 1) {
      iVar8 = (ptVar10->token).variable;
      if (iVar8 == 4) goto no_simp;
      if (iVar8 != 3) break;
    }
  }
  ptVar17 = trhs;
  if (iVar8 == 3) {
    for (; ptVar10 = ptVar17, ptVar17 < ptVar18; ptVar17 = ptVar17 + 1) {
LAB_0804d64f:
      kVar1 = ptVar10->kind;
      if (kVar1 == OPERATOR) {
        if (ptVar10->level != 1) goto LAB_0804d6a4;
        goto LAB_0804d65c;
      }
      if ((kVar1 == CONSTANT) ||
         ((kVar1 == VARIABLE && (((ptVar10->token).variable & 0x3fffU) < 5)))) goto LAB_0804d6a4;
      for (ptVar17 = ptVar17 + 1; (ptVar17 < ptVar18 && (1 < ptVar17->level)); ptVar17 = ptVar17 + 2
          ) {
      }
    }
  }
  else if ((((iVar8 == 6) && (ptVar10[1].level == 1)) && (ptVar10[1].kind == CONSTANT)) &&
          (0.0 < ptVar10[1].token.constant)) {
    n_trhs = n_trhs + -2;
    goto LAB_0804d509;
  }
  if (0 < debug_level) {
    __fprintf_chk(gfp,1,"%s\n","Solve for zero completed:");
  }
LAB_0804d752:
  list_debug(1,tlhs,n_tlhs,trhs,n_trhs);
  memmove(leftp,tlhs,n_tlhs << 4);
  *leftnp = n_tlhs;
  memmove(rightp,trhs,n_trhs << 4);
  *rightnp = n_trhs;
  return local_64;
code_r0x0804db44:
  bVar2 = false;
LAB_0804db49:
  ptVar10 = trhs;
  for (iVar8 = 0; iVar8 < n_trhs; iVar8 = iVar8 + 2) {
    if ((ptVar10->kind == VARIABLE) && (3 < (ptVar10->token).variable)) goto LAB_0804db74;
    ptVar10 = ptVar10 + 2;
  }
  if (bVar2) {
LAB_0804db74:
    error("This equation is independent of the solve variable.");
  }
  else {
    error("There are no possible values for the solve variable.");
  }
  return -2;
}



// WARNING: Unknown calling convention

int solve_espace(int want,int have)

{
  int iVar1;
  int rv;
  
  if (n_lhs[want] == 0) {
    iVar1 = solve_sub(rhs[want],n_rhs[want],rhs[have],n_rhs + have,lhs[have],n_lhs + have);
LAB_0804e76c:
    n_lhs[want] = 0;
    n_rhs[want] = 0;
    if (0 < iVar1) goto LAB_0804e79a;
  }
  else {
    if (n_rhs[want] == 0) {
      iVar1 = solve_sub(lhs[want],n_lhs[want],lhs[have],n_lhs + have,rhs[have],n_rhs + have);
      goto LAB_0804e76c;
    }
    error("This program will only solve for a single variable or for zero.");
    n_lhs[want] = 0;
    n_rhs[want] = 0;
    iVar1 = 0;
  }
  __printf_chk(1,"Solve failed.\n");
LAB_0804e79a:
  return (uint)(0 < iVar1);
}



// WARNING: Unknown calling convention

int display_command(int i)

{
  int iVar1;
  int rows;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar2 = com_list[i].name;
  __fprintf_chk(gfp,1,"%s - %s\n",pcVar2,com_list[i].info);
  pcVar4 = com_list[i].usage;
  __fprintf_chk(gfp,1,"Usage: %s %s\n",pcVar2,pcVar4);
  pcVar3 = com_list[i].secondary_name;
  iVar1 = 3;
  if (pcVar3 != (char *)0x0) {
    __fprintf_chk(gfp,1,"Alternate name for this command: %s\n",pcVar3,pcVar4);
    iVar1 = 4;
    pcVar2 = pcVar3;
  }
  pcVar3 = com_list[i].extra;
  if (pcVar3 != (char *)0x0) {
    __fprintf_chk(gfp,1,"%s\n",pcVar3,pcVar4);
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar3;
  }
  __fprintf_chk(gfp,1,"\n",pcVar2,pcVar4);
  return iVar1;
}



// WARNING: Unknown calling convention

char * parse_var2(long *vp,char *cp)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = skip_space(cp);
  pcVar1 = parse_var(vp,pcVar1);
  pcVar2 = (char *)0x0;
  if (pcVar1 != (char *)0x0) {
    pcVar2 = skip_space(pcVar1);
  }
  return pcVar2;
}



// WARNING: Unknown calling convention

int shell_out(char *cp)

{
  int *piVar1;
  int iVar2;
  int rv;
  
  if (security_level != 0) {
    error_bug("Shelling out disabled.");
  }
  reset_attr();
  piVar1 = __errno_location();
  *piVar1 = 0;
  iVar2 = system(cp);
  __printf_chk(1,"\n");
  if (iVar2 < 0) {
    perror("system(3) call failed");
  }
  default_color();
  return iVar2;
}



// WARNING: Unknown calling convention

int parse(int n,char *cp)

{
  token_type *ptVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = parse_equation(n,cp);
  if (pcVar2 == (char *)0x0) {
    n_lhs[n] = 0;
    n_rhs[n] = 0;
    iVar3 = 0;
  }
  else {
    if (n_lhs[n] == 0) {
      if (n_rhs[n] == 0) {
        return 1;
      }
      n_lhs[n] = 1;
      ptVar1 = lhs[n];
      ptVar1->kind = zero_token.kind;
      ptVar1->level = zero_token.level;
      (ptVar1->token).variable = zero_token.token.variable;
      *(undefined4 *)((int)&ptVar1->token + 4) = zero_token.token._4_4_;
    }
    cur_equation = n;
    iVar3 = return_result(n);
  }
  return iVar3;
}



// WARNING: Removing unreachable block (ram,0x0804eca8)
// WARNING: Removing unreachable block (ram,0x0804eca4)
// WARNING: Removing unreachable block (ram,0x0804ecaa)
// WARNING: Removing unreachable block (ram,0x0804ed25)
// WARNING: Unknown calling convention

int process_parse(int n,char *cp)

{
  double dVar1;
  char cVar2;
  token_type *ptVar3;
  kind_list kVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  char *ep;
  size_t __n;
  int iVar8;
  char *cp1;
  char *pcVar9;
  int equals_flag;
  uchar *__s1;
  int i;
  ushort in_FPUStatusWord;
  
  pcVar7 = parse_equation(n,cp);
  if (pcVar7 == (char *)0x0) {
    n_lhs[n] = 0;
    n_rhs[n] = 0;
    return 0;
  }
  if (cp < pcVar7) {
    cVar2 = *cp;
    pcVar9 = cp;
    while (cVar2 != '=') {
      pcVar9 = pcVar9 + 1;
      if (pcVar7 <= pcVar9) goto LAB_0804ea3b;
      cVar2 = *pcVar9;
    }
    bVar5 = true;
  }
  else {
LAB_0804ea3b:
    bVar5 = false;
  }
  iVar8 = n_lhs[n];
  if (iVar8 == 0) {
    if (n_rhs[n] == 0) {
      if ((((*cp == '=') && (cp[1] == '\0')) && (0 < n_lhs[cur_equation])) &&
         (0 < n_rhs[cur_equation])) {
        if (-1 < debug_level) {
          __fprintf_chk(gfp,1,"%s\n","Swapping both sides of the current equation...");
        }
        iVar6 = cur_equation;
        iVar8 = n_lhs[cur_equation];
        __n = iVar8 << 4;
        memmove(tes,lhs[cur_equation],__n);
        n_lhs[iVar6] = n_rhs[iVar6];
        memmove(lhs[iVar6],rhs[iVar6],n_rhs[iVar6] << 4);
        n_rhs[iVar6] = iVar8;
        memmove(rhs[iVar6],tes,__n);
        iVar8 = return_result(cur_equation);
        return iVar8;
      }
      return 1;
    }
  }
  else if (n_rhs[n] != 0) goto return_ok;
  if ((bVar5) || (autosolve != 0)) {
    if (iVar8 == 1) {
      ptVar3 = lhs[n];
      if (ptVar3->kind == CONSTANT) {
        in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
        if ((ptVar3->token).constant == 0.0) goto LAB_0804ebf2;
      }
      else if ((ptVar3->kind == VARIABLE) && ((4 < ((ptVar3->token).variable & 0x3fffU) || (bVar5)))
              ) goto LAB_0804ebf2;
    }
    if (n_rhs[n] != 1) goto LAB_0804ec24;
    kVar4 = rhs[n]->kind;
    if (kVar4 != CONSTANT) {
      if (kVar4 == VARIABLE) goto LAB_0804ebf2;
      goto LAB_0804ec24;
    }
    if ((rhs[n]->token).constant == 0.0) {
LAB_0804ebf2:
      iVar8 = solve_espace(n,cur_equation);
      if (iVar8 == 0) {
        return 0;
      }
      iVar8 = return_result(cur_equation);
      return iVar8;
    }
  }
  else {
LAB_0804ec24:
    if (n_rhs[n] == 0) {
      if (((autoselect != 0) && (iVar8 == 1)) && (lhs[n]->kind == CONSTANT)) {
        dVar1 = (lhs[n]->token).constant;
        do {
          dVar1 = dVar1 - (dVar1 / 1.0) * 1.0;
        } while ((in_FPUStatusWord & 0x400) != 0);
        if (((dVar1 == 0.0) && (dVar1 = (lhs[n]->token).constant, 0.0 < dVar1)) &&
           (dVar1 <= (double)n_equations)) {
          cur_equation = (int)ROUND(dVar1 - 1.0);
          n_lhs[n] = 0;
          return_result((int)ROUND(dVar1 - 1.0));
          return 1;
        }
      }
      if (autocalc != 0) {
        if (n_lhs[n] != 0) {
          iVar8 = exp_is_numeric(lhs[n],n_lhs[n]);
          if (iVar8 == 0) goto return_ok;
          memmove(rhs[n],lhs[n],n_lhs[n] << 4);
          n_rhs[n] = n_lhs[n];
        }
        lhs[n]->level = 1;
        lhs[n]->kind = VARIABLE;
        parse_var(&(lhs[n]->token).variable,"answer");
        n_lhs[n] = 1;
        iVar8 = cur_equation;
        cur_equation = n;
        calculate_cmd("");
        cur_equation = iVar8;
        n_lhs[n] = 0;
        n_rhs[n] = 0;
        return 1;
      }
      goto return_ok;
    }
  }
  n_lhs[n] = 1;
  ptVar3 = lhs[n];
  ptVar3->kind = zero_token.kind;
  ptVar3->level = zero_token.level;
  (ptVar3->token).variable = zero_token.token.variable;
  *(undefined4 *)((int)&ptVar3->token + 4) = zero_token.token._4_4_;
return_ok:
  cur_equation = n;
  iVar8 = return_result(n);
  return iVar8;
}



// WARNING: Unknown calling convention

int process(char *cp)

{
  int iVar1;
  char *__s2;
  bool bVar2;
  long lVar3;
  int i;
  char *pcVar4;
  ushort **ppuVar5;
  char *filename;
  FILE *pFVar6;
  uint uVar7;
  int append_flag;
  char cVar8;
  uint uVar9;
  int rv;
  int i1;
  FILE *fp;
  int iVar10;
  int len;
  com_type *pcVar11;
  int our_repeat_flag;
  char *pcVar12;
  char *pcVar13;
  int in_GS_OFFSET;
  byte bVar14;
  int local_1040;
  int local_1034;
  char *local_1030;
  undefined4 local_1024;
  char buf2 [4096];
  
  bVar14 = 0;
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  init_gvars();
  set_sign_array();
  uVar9 = 0;
  if (cp != (char *)0x0) {
    local_1030 = skip_space(cp);
    cVar8 = *local_1030;
    if (cVar8 == '#') {
      local_1030 = local_1030 + 1;
      if ((*local_1030 == '+') || (*local_1030 == '-')) {
        lVar3 = decstrtol(local_1030,(char **)&local_1024);
        iVar10 = lVar3 + cur_equation;
      }
      else {
        lVar3 = decstrtol(local_1030,(char **)&local_1024);
        iVar10 = lVar3 + -1;
      }
      uVar9 = 1;
      if (local_1030 != local_1024) {
        if ((iVar10 < 0) || (n_equations <= iVar10)) {
          error("Equation not defined.");
          uVar9 = 0;
        }
        else {
          pcVar4 = skip_space(local_1024 + (*local_1024 == ':'));
          if (*pcVar4 == '\0') {
            cur_equation = iVar10;
            return_result(iVar10);
            uVar9 = 1;
          }
          else {
            input_column = (int)pcVar4 + (input_column - (int)cp);
            uVar9 = parse(iVar10,pcVar4);
          }
        }
      }
    }
    else if ((security_level == 0) && (cVar8 == '!')) {
      local_1024 = getenv("SHELL");
      if (local_1024 == (char *)0x0) {
        local_1024 = "/bin/sh";
      }
      iVar10 = access(local_1024,1);
      if (iVar10 == 0) {
        pcVar4 = skip_space(local_1030 + 1);
        if (*pcVar4 == '\0') {
          pcVar4 = local_1024;
        }
        iVar10 = shell_out(pcVar4);
        uVar9 = (uint)(iVar10 == 0);
      }
      else {
        error("Shell not found or not executable, check SHELL environment variable.");
        uVar9 = 0;
      }
    }
    else {
      local_1040 = 0;
      if (cVar8 != '?') {
        do {
          local_1024 = local_1030;
          cVar8 = *local_1030;
          pcVar4 = local_1030;
          if (cVar8 != '\0') {
            ppuVar5 = __ctype_b_loc();
            do {
              if ((*(byte *)((int)*ppuVar5 + cVar8 * 2 + 1) & 0x20) != 0) break;
              pcVar4 = pcVar4 + 1;
              cVar8 = *pcVar4;
              local_1024 = pcVar4;
            } while (cVar8 != '\0');
          }
          uVar9 = (int)pcVar4 - (int)local_1030;
          if ((uVar9 != 6) || (iVar10 = strncasecmp(local_1030,"repeat",6), iVar10 != 0))
          goto LAB_0804f0b4;
          local_1030 = skip_space(pcVar4);
          local_1040 = 1;
        } while( true );
      }
      pcVar4 = skip_space(local_1030 + 1);
      input_column = (int)pcVar4 + (input_column - (int)cp);
      uVar9 = help_cmd(pcVar4);
    }
  }
  goto LAB_0804f42d;
LAB_0804f0b4:
  pcVar11 = com_list;
  local_1034 = 0;
  do {
    __s2 = pcVar11->name;
    uVar7 = 0xffffffff;
    pcVar12 = __s2;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar8 = *pcVar12;
      pcVar12 = pcVar12 + (uint)bVar14 * -2 + 1;
    } while (cVar8 != '\0');
    uVar7 = ~uVar7 - 1;
    if (4 < uVar7) {
      uVar7 = 4;
    }
    if ((uVar7 <= uVar9) && (iVar10 = strncasecmp(local_1030,__s2,uVar9), iVar10 == 0)) {
LAB_0804f17c:
      local_1024 = skip_space(pcVar4);
      input_column = (int)local_1024 + (input_column - (int)cp);
      uVar9 = my_strlcpy(buf2,local_1024,0x1000);
      if (0xfff < uVar9) {
        error("Command line too long.");
        uVar9 = 0;
        goto LAB_0804f42d;
      }
      if (1 < security_level) goto LAB_0804f329;
      uVar9 = 0xffffffff;
      pcVar4 = buf2;
      goto code_r0x0804f1f4;
    }
    pcVar12 = pcVar11->secondary_name;
    if (pcVar12 != (char *)0x0) {
      uVar7 = 0xffffffff;
      pcVar13 = pcVar12;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar8 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
      } while (cVar8 != '\0');
      uVar7 = ~uVar7 - 1;
      if (4 < uVar7) {
        uVar7 = 4;
      }
      if ((uVar7 <= uVar9) && (iVar10 = strncasecmp(local_1030,pcVar12,uVar9), iVar10 == 0))
      goto LAB_0804f17c;
    }
    local_1034 = local_1034 + 1;
    pcVar11 = pcVar11 + 1;
  } while (local_1034 != 0x2a);
  if (local_1040 == 0) {
    iVar10 = next_espace();
    input_column = (int)local_1030 + (input_column - (int)cp);
    uVar9 = process_parse(iVar10,local_1030);
  }
  else {
    error("Expecting command to repeat.");
    uVar9 = 0;
  }
  goto LAB_0804f42d;
  while( true ) {
    uVar9 = uVar9 - 1;
    cVar8 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar14 * -2 + 1;
    if (cVar8 == '\0') break;
code_r0x0804f1f4:
    if (uVar9 == 0) break;
  }
  uVar9 = ~uVar9;
  i1 = uVar9 - 2;
  if (i1 < 0) {
LAB_0804f329:
    remove_trailing_spaces(buf2);
    pull_number = 1;
    repeat_flag = local_1040;
    uVar9 = (*com_list[local_1034].func)(buf2);
    repeat_flag = 0;
  }
  else {
    cVar8 = buf2[uVar9 - 2];
    pcVar4 = buf2 + (uVar9 - 3);
    while (cVar8 != '>') {
      i1 = i1 + -1;
      if (i1 < 0) goto LAB_0804f329;
      cVar8 = *pcVar4;
      pcVar4 = pcVar4 + -1;
    }
    pcVar4 = skip_space(buf2 + i1 + 1);
    if (i1 == 0) {
LAB_0804f249:
      bVar2 = false;
      iVar10 = i1;
    }
    else {
      bVar2 = true;
      iVar10 = i1 + -1;
      if (buf2[i1 + -1] != '>') goto LAB_0804f249;
    }
    buf2[iVar10] = '\0';
    if (pcVar4 == (char *)0x0) goto LAB_0804f329;
    if (bVar2) {
      pFVar6 = fopen(pcVar4,"a");
    }
    else {
      pFVar6 = fopen(pcVar4,"w");
    }
    if (pFVar6 == (FILE *)0x0) {
      error("Can\'t open redirected output file for writing.");
      uVar9 = 0;
      goto LAB_0804f42d;
    }
    if (((gfp != stdout) && (gfp != stderr)) && (gfp != default_out)) {
      fclose((FILE *)gfp);
    }
    gfp = (FILE *)pFVar6;
    remove_trailing_spaces(buf2);
    pull_number = 1;
    repeat_flag = local_1040;
    uVar9 = (*com_list[local_1034].func)(buf2);
    repeat_flag = 0;
    if (gfp != default_out) {
      if ((gfp != stdout) && (gfp != stderr)) {
        fclose((FILE *)gfp);
      }
      gfp = default_out;
    }
  }
  if ((uVar9 == 0) && (-1 < debug_level)) {
    __printf_chk(1,"Command usage: %s %s\n",__s2,com_list[local_1034].usage);
  }
LAB_0804f42d:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar9;
}



// WARNING: Unknown calling convention

int display_process(char *cp)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = 0;
  if (cp != (char *)0x0) {
    default_color();
    pcVar2 = "-> ";
    if (html_flag != 0) {
      pcVar2 = "&mdash;&gt; ";
    }
    input_column = __printf_chk(1,&DAT_08071942,cur_equation + 1,pcVar2);
    if (html_flag == 0) {
      __printf_chk(1,"%s",cp,pcVar2);
    }
    else {
      __printf_chk(1,"<b>%s</b>",cp,pcVar2);
    }
    if ((gfp != stdout) && (gfp != stderr)) {
      __fprintf_chk(gfp,1,"%d%s%s",cur_equation + 1,&DAT_08071931,cp);
    }
    set_error_level(cp);
    iVar1 = process(cp);
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int read_examples(char **cpp)

{
  char *pcVar1;
  int iVar2;
  char *cp;
  
  pcVar1 = *cpp;
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return 1;
    }
    pcVar1 = (char *)__strdup(pcVar1);
    iVar2 = display_process(pcVar1);
    if (iVar2 == 0) break;
    free(pcVar1);
    pcVar1 = cpp[1];
    cpp = cpp + 1;
  }
  return 0;
}



// WARNING: Unknown calling convention

int help_cmd(char *cp)

{
  bool bVar1;
  ushort **ppuVar2;
  int iVar3;
  int iVar4;
  char *cp1;
  char cVar5;
  com_type *pcVar6;
  size_t __n;
  int j;
  int i;
  int iVar7;
  int row;
  ulonglong uVar8;
  char *local_28;
  
  cVar5 = *cp;
  if (cVar5 != '\0') {
    ppuVar2 = __ctype_b_loc();
    local_28 = cp;
    do {
      if ((*(byte *)((int)*ppuVar2 + cVar5 * 2 + 1) & 0x20) != 0) break;
      local_28 = local_28 + 1;
      cVar5 = *local_28;
    } while (cVar5 != '\0');
    if (local_28 != cp) {
      bVar1 = false;
      do {
        pcVar6 = com_list;
        iVar7 = 0;
        do {
          iVar3 = strncasecmp(cp,pcVar6->name,(int)local_28 - (int)cp);
          if ((iVar3 == 0) ||
             ((pcVar6->secondary_name != (char *)0x0 &&
              (iVar3 = strncasecmp(cp,pcVar6->secondary_name,(int)local_28 - (int)cp), iVar3 == 0)))
             ) {
            display_command(iVar7);
            bVar1 = true;
          }
          iVar7 = iVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (iVar7 != 0x2a);
        __n = (int)local_28 - (int)cp;
        if (!bVar1) {
          iVar7 = strncasecmp(cp,"examples",__n);
          if (iVar7 == 0) {
            iVar7 = read_examples(example_strings);
            return iVar7;
          }
          iVar7 = strncasecmp(cp,"copyright",__n);
          if ((iVar7 == 0) || (iVar7 = strncasecmp(cp,"license",__n), iVar7 == 0)) {
            __fprintf_chk(gfp,1,"%s\n","Copyright and License for Mathomatic");
            __fprintf_chk(gfp,1,"%s\n","------------------------------------\n");
            __fprintf_chk(gfp,1,"%s",license_string);
            return 1;
          }
          iVar7 = strncasecmp(cp,"bugs",__n);
          if (iVar7 == 0) {
            __fprintf_chk(gfp,1,"%s\n",
                          "Report bugs on the Launchpad support website for Mathomatic:");
            __fprintf_chk(gfp,1,"%s\n","http://launchpad.net/mathomatic\n");
            __fprintf_chk(gfp,1,"%s\n",
                          "Please include the following information (from the version command):\n");
            iVar7 = version_report();
            return iVar7;
          }
          iVar7 = strncasecmp(cp,"usage",__n);
          if (iVar7 == 0) {
            __fprintf_chk(gfp,1,"%s\n","Mathomatic Command Usage Syntax");
            __fprintf_chk(gfp,1,"%s\n","-------------------------------");
            iVar7 = 0;
            iVar3 = 3;
            do {
              __fprintf_chk(gfp,1,"%s %s\n",*(undefined4 *)((int)&com_list[0].name + iVar7),
                            *(undefined4 *)((int)&com_list[0].usage + iVar7));
              iVar3 = iVar3 + 1;
              if (((gfp == stdout) && (screen_rows != 0)) && (screen_rows + -2 <= iVar3)) {
                iVar3 = pause_cmd("");
                if (iVar3 == 0) {
                  return 0;
                }
                iVar3 = 1;
              }
              iVar7 = iVar7 + 0x18;
            } while (iVar7 != 0x3f0);
            return 1;
          }
          iVar7 = strncasecmp(cp,"geometry",__n);
          if (iVar7 == 0) {
            __fprintf_chk(gfp,1,"%s\n","Commonly used standard (Euclidean) geometric formulas");
            __fprintf_chk(gfp,1,"%s\n","-----------------------------------------------------");
            __fprintf_chk(gfp,1,"%s\n","Triangle of base \"b\" and height \"h\":");
            __fprintf_chk(gfp,1,"%s\n","    area = b*h/2\n");
            __fprintf_chk(gfp,1,"%s\n","Rectangle of length \"l\" and width \"w\":");
            __fprintf_chk(gfp,1,"%s\n","    area = l*w                    perimeter = 2*l + 2*w\n");
            __fprintf_chk(gfp,1,"%s\n",
                          "Trapezoid of parallel sides \"a\" and \"b\", and \"d\" distance between them:"
                         );
            __fprintf_chk(gfp,1,"%s\n","    area = d*(a + b)/2\n");
            __fprintf_chk(gfp,1,"%s\n","Circle of radius \"r\":");
            __fprintf_chk(gfp,1,"%s\n","    area = pi*r^2                 perimeter = 2*pi*r\n");
            __fprintf_chk(gfp,1,"%s\n",
                          "Rectangular solid of length \"l\", width \"w\", and height \"h\":");
            __fprintf_chk(gfp,1,"%s\n",
                          "    volume = l*w*h                surface_area = 2*l*w + 2*l*h + 2*w*h\n"
                         );
            __fprintf_chk(gfp,1,"%s\n","Sphere of radius \"r\":");
            __fprintf_chk(gfp,1,"%s\n","    volume = 4/3*pi*r^3           surface_area = 4*pi*r^2\n"
                         );
            __fprintf_chk(gfp,1,"%s\n",
                          "Convex polygon of \"n\" sides, sum of all interior angles formula:");
            __fprintf_chk(gfp,1,"%s\n","    sum = (n - 2)*180 degrees     sum = (n - 2)*pi radians")
            ;
            return 1;
          }
          iVar7 = strncasecmp(cp,"expressions",__n);
          if ((iVar7 == 0) || (iVar7 = strncasecmp(cp,"equations",__n), iVar7 == 0)) {
            __fprintf_chk(gfp,1,"%s\n",
                          "To enter an expression or equation, simply type it in at the prompt.");
            __fprintf_chk(gfp,1,"%s\n","Operators have precedence decreasing as indicated:\n");
            __fprintf_chk(gfp,1,"%s\n","    - negate (highest precedence)");
            __fprintf_chk(gfp,1,"%s\n","    ! factorial (gamma function)");
            __fprintf_chk(gfp,1,"%s\n","    ** or ^ power (exponentiation)");
            __fprintf_chk(gfp,1,"%s\n",
                          "    * multiply      / divide        % modulus       // integral divide");
            __fprintf_chk(gfp,1,"%s\n","    + add           - subtract");
            __fprintf_chk(gfp,1,"%s\n","    = equate (lowest precedence)\n");
            __fprintf_chk(gfp,1,"%s\n",
                          "Variables consist of any combination of letters, digits, and underscores (_)."
                         );
            __fprintf_chk(gfp,1,"%s\n","Predefined variables follow:\n");
            __fprintf_chk(gfp,1,"%s\n","    sign, sign1, sign2, ... - may only be +1 or -1");
            __fprintf_chk(gfp,1,"%s\n","    integer, integer1, ... - may only be an integer value\n"
                         );
            __fprintf_chk(gfp,1,"%s\n",
                          "Absolute value notation \"|x|\" and dual polarity \"+/-x\" are understood."
                         );
            __fprintf_chk(gfp,1,"%s\n",
                          "Type \"help constants\" for information on entering constants.");
            return 1;
          }
          iVar7 = strncasecmp(cp,"constants",__n);
          if (iVar7 == 0) {
            __fprintf_chk(gfp,1,"%s\n",
                          "Constants are double precision floating point values with up to");
            __fprintf_chk(gfp,1,"%s\n",
                          "14 decimal digits accuracy.  They can be entered in standard, scientific,"
                         );
            __fprintf_chk(gfp,1,"%s\n",
                          "or hexadecimal notation.  Excepting named constants, constants always");
            __fprintf_chk(gfp,1,"%s\n","start with a decimal digit (0..9) or a period.\n");
            __fprintf_chk(gfp,1,"%s\n","Named constants follow:\n");
            __fprintf_chk(gfp,1,"%s\n","    e or e# - the universal constant e (2.7182818284...)");
            __fprintf_chk(gfp,1,"%s\n","    pi or pi# - the universal constant pi (3.1415926535...)"
                         );
            __fprintf_chk(gfp,1,"%s\n","    i or i# - the imaginary unit (square root of -1)");
            __fprintf_chk(gfp,1,"%s\n",
                          "The above constants may also be used anywhere variables are required.");
            __fprintf_chk(gfp,1,"%s\n","    inf - floating point infinity constant");
            __fprintf_chk(gfp,1,"%s\n","    nan - invalid floating point result (not enterable)\n");
            __fprintf_chk(gfp,1,"The largest value of a constant is +/-%g\n",0x7fefffffffffffff);
            __fprintf_chk(gfp,1,"The smallest value of a constant is +/-%g\n",0x10000000000000);
            return 1;
          }
          iVar7 = is_all(cp);
          if (iVar7 != 0) {
            __fprintf_chk(gfp,1,"%s\n","Mathomatic Command Summary");
            __fprintf_chk(gfp,1,"%s\n","--------------------------");
            iVar7 = 3;
            iVar3 = 0;
            do {
              iVar4 = display_command(iVar3);
              iVar7 = iVar7 + iVar4;
              if (((gfp == stdout) && (screen_rows != 0)) && (screen_rows + -5 <= iVar7)) {
                iVar7 = pause_cmd("");
                if (iVar7 == 0) {
                  return 0;
                }
                iVar7 = 1;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 != 0x2a);
            __fprintf_chk(gfp,1,"End of command list.  Total of %d different commands.\n",0x2a);
            return 1;
          }
          error("Unrecognized help topic or command.");
          return 0;
        }
        cp = skip_space(local_28);
        cVar5 = *cp;
        if (cVar5 == '\0') {
          return 1;
        }
        local_28 = cp;
        do {
          if ((*(byte *)((int)*ppuVar2 + cVar5 * 2 + 1) & 0x20) != 0) break;
          local_28 = local_28 + 1;
          cVar5 = *local_28;
        } while (cVar5 != '\0');
        if (local_28 == cp) {
          return 1;
        }
      } while( true );
    }
  }
  __fprintf_chk(gfp,1,"%s\n","Mathomatic is a Computer Algebra System (CAS) and calculator program."
               );
  __fprintf_chk(gfp,1,"%s\n","To see helpful interactive examples, type \"help examples\".");
  __fprintf_chk(gfp,1,"%s\n",
                "Type \"help equations\" for help with entering expressions and equations.");
  __fprintf_chk(gfp,1,"%s\n","Type \"help all\" for a summary and syntax of all commands.");
  __fprintf_chk(gfp,1,"%s\n","Type \"help usage\" to display the syntax of all commands.");
  __fprintf_chk(gfp,1,"%s\n",
                "\"help\" or \"?\" followed by a command name will give info on that command.");
  __fprintf_chk(gfp,1,"%s\n","Other help keywords: constants, geometry, copyright, license, bugs.\n"
               );
  uVar8 = 0x2a;
  __fprintf_chk(gfp,1,"These are the %d commands:\n",0x2a);
  pcVar6 = com_list;
  iVar7 = 0;
  do {
    if (iVar7 == (iVar7 / 5) * 5) {
      __fprintf_chk(gfp,1,"\n",uVar8);
    }
    uVar8 = ZEXT48(pcVar6->name);
    iVar3 = __fprintf_chk(gfp,1,"%s",pcVar6->name);
    for (iVar3 = 0xf - iVar3; 0 < iVar3; iVar3 = iVar3 + -1) {
      __fprintf_chk(gfp,1,&DAT_08077a28,uVar8);
    }
    iVar7 = iVar7 + 1;
    pcVar6 = pcVar6 + 1;
  } while (iVar7 != 0x2a);
  __fprintf_chk(gfp,1,"%s\n",
                "\n\nTo select an equation space, type the equation number at the main prompt.");
  __fprintf_chk(gfp,1,"%s\n",
                "To solve the current equation, type the variable name at the main prompt.");
  return 1;
}



// WARNING: Unknown calling convention

int var_is_const(long v,double *dp)

{
  if (v == 1) {
    if (dp != (double *)0x0) {
      *dp = 2.718281828459045;
      return 1;
    }
  }
  else {
    if (v != 2) {
      return 0;
    }
    if (dp != (double *)0x0) {
      *dp = 3.141592653589793;
      return 1;
    }
  }
  return 1;
}



// WARNING: Unknown calling convention

int subst_constants(token_type *equation,int *np)

{
  int iVar1;
  int i;
  int local_28;
  storage_type local_1c;
  
  local_28 = 0;
  if (0 < *np) {
    i = 0;
    do {
      if (equation->kind == VARIABLE) {
        iVar1 = var_is_const((equation->token).variable,&local_1c.constant);
        if (iVar1 != 0) {
          equation->kind = CONSTANT;
          equation->token = local_1c;
          local_28 = 1;
        }
      }
      i = i + 2;
      equation = equation + 2;
    } while (*np != i && i <= *np);
  }
  return local_28;
}



// WARNING: Unknown calling convention

int my_strlcpy(char *dest,char *src,int n)

{
  size_t sVar1;
  char cVar2;
  uint uVar3;
  size_t __n;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  pcVar4 = src;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  sVar1 = ~uVar3 - 1;
  __n = n - 1U;
  if ((int)sVar1 <= (int)(n - 1U)) {
    __n = sVar1;
  }
  memmove(dest,src,__n);
  dest[__n] = '\0';
  return sVar1;
}



// WARNING: Unknown calling convention

void remove_trailing_spaces(char *cp)

{
  char cVar1;
  ushort **ppuVar2;
  uint uVar3;
  int i;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  pcVar4 = cp;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  i = ~uVar3 - 2;
  if (-1 < i) {
    ppuVar2 = __ctype_b_loc();
    pcVar4 = cp + (~uVar3 - 1);
    do {
      if ((*(byte *)((int)*ppuVar2 + pcVar4[-1] * 2 + 1) & 0x20) == 0) {
        return;
      }
      pcVar4[-1] = '\0';
      pcVar4 = pcVar4 + -1;
      i = i + -1;
    } while (-1 < i);
  }
  return;
}



// WARNING: Unknown calling convention

void set_error_level(char *cp)

{
  char *pcVar1;
  ushort **ppuVar2;
  char cVar3;
  char *cp1;
  
  point_flag = 1;
  pcVar1 = strpbrk(cp,";\n\r\x1a");
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  remove_trailing_spaces(cp);
  cVar3 = *cp;
  if (cVar3 != '\0') {
    ppuVar2 = __ctype_b_loc();
    cp1 = cp;
    do {
      if ((*(byte *)((int)*ppuVar2 + cVar3 * 2 + 1) & 0x40) == 0) {
        point_flag = 0;
      }
      cp1 = cp1 + 1;
      cVar3 = *cp1;
    } while (cVar3 != '\0');
  }
  return;
}



// WARNING: Unknown calling convention

void binary_parenthesize(token_type *p1,int n,int i)

{
  int iVar1;
  token_type *ptVar2;
  int level;
  int j;
  int iVar3;
  token_type *ptVar4;
  int iVar5;
  token_type *ptVar6;
  
  if (((n + -1 <= i) || ((n & 1U) == 0)) || ((i & 1U) == 0)) {
    error_bug("Internal error in arguments to binary_parenthesize().");
  }
  iVar1 = p1[i].level;
  p1[i].level = iVar1 + 1;
  iVar5 = p1[i + -1].level;
  p1[i + -1].level = iVar5 + 1;
  if ((iVar1 < iVar5) && (iVar5 = i + -2, -1 < iVar5)) {
    iVar3 = p1[iVar5].level;
    if (iVar1 < iVar3) {
      ptVar4 = p1 + i + -3;
      ptVar6 = p1 + iVar5;
      do {
        ptVar2 = ptVar4;
        ptVar6->level = iVar3 + 1;
        iVar5 = iVar5 + -1;
        if (iVar5 < 0) break;
        iVar3 = ptVar2->level;
        ptVar4 = ptVar2 + -1;
        ptVar6 = ptVar2;
      } while (iVar1 < iVar3);
    }
  }
  iVar5 = p1[i + 1].level;
  p1[i + 1].level = iVar5 + 1;
  if ((iVar1 < iVar5) && (iVar5 = i + 2, iVar5 < n)) {
    iVar3 = p1[iVar5].level;
    if (iVar1 < iVar3) {
      ptVar4 = p1 + iVar5;
      ptVar6 = p1 + i + 3;
      do {
        ptVar4->level = iVar3 + 1;
        iVar5 = iVar5 + 1;
        if (n <= iVar5) {
          return;
        }
        iVar3 = ptVar6->level;
        ptVar4 = ptVar6;
        ptVar6 = ptVar6 + 1;
      } while (iVar1 < iVar3);
    }
  }
  return;
}



// WARNING: Unknown calling convention

void give_priority(token_type *equation,int *np)

{
  int i;
  int iVar1;
  int iVar2;
  storage_type *local_20;
  
  iVar2 = *np;
  if (1 < iVar2) {
    i = 1;
    do {
      if (equation[i].token.variable == 7) {
        binary_parenthesize(equation,iVar2,i);
      }
      i = i + 2;
      iVar2 = *np;
    } while (i < iVar2);
  }
  if (right_associative_power == 0) {
    iVar2 = *np;
    iVar1 = 1;
    if (iVar2 < 2) {
      return;
    }
    do {
      if (equation[iVar1].token.variable == 6) {
        binary_parenthesize(equation,iVar2,iVar1);
      }
      iVar1 = iVar1 + 2;
      iVar2 = *np;
    } while (iVar1 < iVar2);
  }
  else {
    iVar2 = iVar2 + -2;
    if (0 < iVar2) {
      local_20 = &equation[iVar2].token;
      do {
        if (local_20->variable == 6) {
          binary_parenthesize(equation,*np,iVar2);
        }
        iVar2 = iVar2 + -2;
        local_20 = local_20 + -4;
      } while (0 < iVar2);
    }
  }
  iVar2 = *np;
  iVar1 = 1;
  if (1 < iVar2) {
    do {
      if (((uint)equation[iVar1].token.variable < 10) &&
         ((1 << ((byte)equation[iVar1].token.variable & 0x1f) & 0x238U) != 0)) {
        binary_parenthesize(equation,iVar2,iVar1);
      }
      iVar1 = iVar1 + 2;
      iVar2 = *np;
    } while (iVar1 < iVar2);
  }
  return;
}



// WARNING: Unknown calling convention

void handle_negate(token_type *equation,int *np)

{
  token_type *ptVar1;
  int i;
  
  if (1 < *np) {
    i = 1;
    ptVar1 = equation;
    do {
      if ((ptVar1[1].token.variable == 8) &&
         (ptVar1[1].token.variable = 3, negate_highest_precedence != 0)) {
        binary_parenthesize(equation,*np,i);
      }
      i = i + 2;
      ptVar1 = ptVar1 + 2;
    } while (*np != i && i <= *np);
  }
  return;
}



// WARNING: Unknown calling convention

int isvarchar(int ch)

{
  char *pcVar1;
  ushort **ppuVar2;
  uint uVar3;
  
  if (ch == 0x5f) {
LAB_0805072f:
    uVar3 = 1;
  }
  else {
    if (ch != 0) {
      pcVar1 = strchr(special_variable_characters,ch);
      if (pcVar1 != (char *)0x0) goto LAB_0805072f;
    }
    ppuVar2 = __ctype_b_loc();
    uVar3 = (*ppuVar2)[ch] >> 10 & 1;
  }
  return uVar3;
}



// WARNING: Unknown calling convention

char * parse_var(long *vp,char *cp)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  ushort **ppuVar6;
  long vtmp;
  char *pcVar7;
  uint uVar8;
  int j;
  int i;
  int in_GS_OFFSET;
  byte bVar9;
  char *local_8c;
  char buf [101];
  
  bVar9 = 0;
  iVar2 = *(int *)(in_GS_OFFSET + 0x14);
  pcVar3 = strcmp;
  if (case_sensitive_flag == 0) {
    pcVar3 = strcasecmp;
  }
  iVar4 = isvarchar((int)*cp);
  if (iVar4 == 0) {
    error("Invalid variable.");
    pcVar7 = (char *)0x0;
  }
  else {
    cVar1 = *cp;
    iVar4 = 0;
    local_8c = cp;
    while ((cVar1 != '\0' && (iVar5 = isvarchar((int)cVar1), iVar5 != 0))) {
      if (iVar4 == 100) {
        error("Variable name too long.");
        pcVar7 = (char *)0x0;
        goto LAB_08050bb1;
      }
      buf[iVar4] = *local_8c;
      iVar4 = iVar4 + 1;
      local_8c = local_8c + 1;
      cVar1 = *local_8c;
    }
    buf[iVar4] = '\0';
    iVar4 = strcasecmp(buf,"inf");
    if (iVar4 == 0) {
      error("Infinity cannot be used as a variable.");
      pcVar7 = (char *)0x0;
    }
    else {
      iVar4 = strcasecmp(buf,"nan");
      if (iVar4 == 0) {
        error("NaN (Not a Number) cannot be directly entered.");
        pcVar7 = (char *)0x0;
      }
      else {
        iVar4 = (*pcVar3)(buf,&DAT_080751bf);
        if (iVar4 == 0) {
          ppuVar6 = __ctype_b_loc();
          iVar4 = 4;
          if ((*(byte *)((int)*ppuVar6 + *local_8c * 2 + 1) & 8) != 0) {
            uVar8 = strtol(local_8c,&local_8c,10);
            if (0x3e < uVar8) {
              error("Maximum subscript exceeded in special variable name.");
              pcVar7 = (char *)0x0;
              goto LAB_08050bb1;
            }
            sign_array[uVar8 + 1] = '\x01';
            iVar4 = (uVar8 + 1) * 0x4000 + 4;
          }
          *vp = iVar4;
          pcVar7 = local_8c;
        }
        else {
          iVar4 = strncasecmp(cp,"i#",2);
          if (iVar4 == 0) {
            *vp = 3;
            pcVar7 = cp + 2;
          }
          else {
            iVar4 = strncasecmp(cp,"e#",2);
            if (iVar4 == 0) {
              *vp = 1;
              pcVar7 = cp + 2;
            }
            else {
              iVar4 = strncasecmp(cp,"pi#",3);
              if (iVar4 == 0) {
                *vp = 2;
                pcVar7 = cp + 3;
              }
              else {
                cVar1 = *cp;
                iVar4 = 0;
                local_8c = cp;
                while ((cVar1 != '\0' &&
                       ((iVar5 = isvarchar((int)cVar1), iVar5 != 0 ||
                        (ppuVar6 = __ctype_b_loc(),
                        (*(byte *)((int)*ppuVar6 + *local_8c * 2 + 1) & 8) != 0))))) {
                  if (iVar4 == 100) {
                    error("Variable name too long.");
                    pcVar7 = (char *)0x0;
                    goto LAB_08050bb1;
                  }
                  buf[iVar4] = *local_8c;
                  iVar4 = iVar4 + 1;
                  local_8c = local_8c + 1;
                  cVar1 = *local_8c;
                }
                buf[iVar4] = '\0';
                iVar4 = (*pcVar3)(buf,&DAT_08077991);
                if (iVar4 == 0) {
                  *vp = 3;
                  pcVar7 = local_8c;
                }
                else {
                  iVar4 = (*pcVar3)(buf,&DAT_080779ab);
                  if (iVar4 == 0) {
                    *vp = 1;
                    pcVar7 = local_8c;
                  }
                  else {
                    iVar4 = (*pcVar3)(buf,&DAT_080779c0);
                    if (iVar4 == 0) {
                      *vp = 2;
                      pcVar7 = local_8c;
                    }
                    else {
                      iVar4 = is_all(buf);
                      if (iVar4 == 0) {
                        iVar4 = 0;
                        if (var_names[0] == (char *)0x0) {
                          iVar4 = 0;
                        }
                        else {
                          pcVar7 = var_names[0];
                          do {
                            iVar5 = (*pcVar3)(buf,pcVar7);
                            if (iVar5 == 0) {
                              iVar5 = iVar4 + 0x41;
                              if (iVar5 != 0) goto LAB_08050b51;
                              break;
                            }
                            iVar4 = iVar4 + 1;
                            pcVar7 = var_names[iVar4];
                          } while (pcVar7 != (char *)0x0);
                        }
                        if (iVar4 < 7999) {
                          uVar8 = 0xffffffff;
                          pcVar7 = buf;
                          do {
                            if (uVar8 == 0) break;
                            uVar8 = uVar8 - 1;
                            cVar1 = *pcVar7;
                            pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
                          } while (cVar1 != '\0');
                          pcVar7 = (char *)malloc(~uVar8);
                          var_names[iVar4] = pcVar7;
                          if (pcVar7 == (char *)0x0) {
                            error("Out of memory (can\'t malloc(3) variable name).");
                            pcVar7 = (char *)0x0;
                          }
                          else {
                            memmove(pcVar7,buf,~uVar8);
                            iVar5 = iVar4 + 0x41;
                            var_names[iVar4 + 1] = (char *)0x0;
LAB_08050b51:
                            *vp = iVar5;
                            pcVar7 = local_8c;
                          }
                        }
                        else {
                          error("Maximum number of variable names reached.");
                          __printf_chk(1,"Please restart or use \"clear all\".\n");
                          pcVar7 = (char *)0x0;
                        }
                      }
                      else {
                        error("\"all\" is a reserved word and may not be used as a variable name.");
                        pcVar7 = (char *)0x0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_08050bb1:
  if (iVar2 == *(int *)(in_GS_OFFSET + 0x14)) {
    return pcVar7;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention

void put_up_arrow(int cnt,char *cp)

{
  int iVar1;
  int i;
  
  iVar1 = isatty(0);
  if (((iVar1 != 0) && (point_flag != 0)) && (html_flag == 0)) {
    if (0 < cnt + input_column) {
      i = 0;
      do {
        __printf_chk(1,&DAT_08077a28);
        i = i + 1;
      } while (i < cnt + input_column);
    }
    __printf_chk(1,&DAT_080751cb);
  }
  error(cp);
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Unknown calling convention

char * parse_section(token_type *equation,int *np,char *cp,int allow_space)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  token_type *ptVar6;
  ushort **ppuVar7;
  int *piVar8;
  int iVar9;
  int cur_level;
  char *cp1;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  double d;
  double dVar15;
  int local_60;
  int local_54;
  uint local_50;
  int iStack_48;
  int abs_array [10];
  
  pcVar3 = cp;
  bVar14 = 0;
  if (cp == (char *)0x0) {
    return (char *)0x0;
  }
  local_60 = 0;
  bVar2 = false;
  local_54 = 1;
  local_50 = 0;
  do {
    uVar4 = local_50;
    if (n_tokens + -10 < (int)local_50) {
      error_huge();
    }
    pcVar5 = cp;
    cVar1 = *cp;
    if (cVar1 == ')') {
LAB_08050d7a:
      local_54 = local_54 + -1;
      if ((local_54 < 1) || ((0 < local_60 && (local_54 < (&iStack_48)[local_60])))) {
        put_up_arrow((int)cp - (int)pcVar3,"Unmatched parenthesis: too many )");
        return (char *)0x0;
      }
      if (!bVar2) goto syntax_error;
    }
    else {
      if (cVar1 < '*') {
        if (cVar1 == ' ') {
LAB_08050dc5:
          if (allow_space != 0) goto LAB_08051317;
          goto p_out;
        }
        if (cVar1 < '!') {
          if (cVar1 == '\t') goto LAB_08050dc5;
          if ((cVar1 == '\n') || (cVar1 == '\0')) goto p_out;
        }
        else if (cVar1 == '(') goto LAB_08050d42;
      }
      else {
        if (cVar1 == '=') {
p_out:
          if ((local_60 == 0) && ((local_50 == 0 || (bVar2)))) {
            if (local_54 != 1) {
              put_up_arrow((int)cp - (int)pcVar3,"Unmatched parenthesis: missing )");
              return (char *)0x0;
            }
            while (cVar1 == '=') {
              cp = cp + 1;
              cVar1 = *cp;
            }
            *np = local_50;
            if (local_50 != 0) {
              handle_negate(equation,np);
              give_priority(equation,np);
              organize(equation,np);
            }
            input_column = (int)cp + (input_column - (int)pcVar3);
            return cp;
          }
syntax_error:
          put_up_arrow((int)cp - (int)pcVar3,"Syntax error.");
          return (char *)0x0;
        }
        if (cVar1 < '>') {
          if (cVar1 == ';') goto p_out;
        }
        else {
          if (cVar1 == '{') {
LAB_08050d42:
            if (bVar2) {
              ptVar6 = equation + local_50;
              ptVar6->level = local_54;
              ptVar6->kind = OPERATOR;
              (ptVar6->token).variable = 3;
              local_50 = local_50 + 1;
              bVar2 = false;
            }
            local_54 = local_54 + 1;
            goto LAB_08051317;
          }
          if (cVar1 == '}') goto LAB_08050d7a;
        }
      }
      bVar2 = !bVar2;
      switch(cVar1) {
      case '!':
        if (bVar2) goto syntax_error;
        if ((cp[1] == '!') && (cp[2] != '!')) {
          warning("Multifactorial not implemented, using x!! = (x!)!");
        }
        ptVar6 = equation + local_50;
        ptVar6->level = local_54;
        ptVar6->kind = OPERATOR;
        (ptVar6->token).variable = 7;
        ptVar6 = equation + local_50 + 1;
        ptVar6->level = local_54;
        ptVar6->kind = CONSTANT;
        (ptVar6->token).constant = 1.0;
        local_50 = local_50 + 2;
        bVar2 = true;
        break;
      default:
        iVar9 = isvarchar((int)cVar1);
        pcVar5 = cp;
        if (iVar9 == 0) {
          put_up_arrow((int)cp - (int)pcVar3,"Unrecognized character.");
          return (char *)0x0;
        }
        if (!bVar2) {
          ptVar6 = equation + local_50;
          ptVar6->level = local_54;
          ptVar6->kind = OPERATOR;
          (ptVar6->token).variable = 3;
          local_50 = local_50 + 1;
        }
        bVar2 = !bVar2 || bVar2;
        iVar9 = strncasecmp(cp,"inf",3);
        if ((iVar9 == 0) && (iVar9 = isvarchar((int)pcVar5[3]), iVar9 == 0)) {
          equation[local_50].kind = CONSTANT;
          equation[local_50].token.constant = INFINITY;
          cp = cp + 3;
        }
        else {
          equation[local_50].kind = VARIABLE;
          cp = parse_var(&equation[local_50].token.variable,cp);
          if (cp == (char *)0x0) {
            return (char *)0x0;
          }
        }
        if (*cp == '(') {
          put_up_arrow((int)pcVar5 - (int)pcVar3,
                       "Named functions currently not implemented, except when using m4.");
          return (char *)0x0;
        }
        cp = cp + -1;
        equation[local_50].level = local_54;
        local_50 = local_50 + 1;
        break;
      case '%':
        if (bVar2) goto syntax_error;
        ptVar6 = equation + local_50;
        ptVar6->level = local_54;
        ptVar6->kind = OPERATOR;
        (ptVar6->token).variable = 5;
        local_50 = local_50 + 1;
        break;
      case '*':
        pcVar5 = cp + 1;
        if (cp[1] == '*') goto parse_power;
        if (bVar2) goto syntax_error;
        ptVar6 = equation + local_50;
        ptVar6->level = local_54;
        ptVar6->kind = OPERATOR;
        (ptVar6->token).variable = 3;
        local_50 = local_50 + 1;
        break;
      case '+':
      case '-':
        bVar12 = !bVar2;
        bVar13 = bVar12;
        if (bVar12) {
          ptVar6 = equation + local_50;
          ptVar6->level = local_54;
          ptVar6->kind = OPERATOR;
          (ptVar6->token).variable = (*cp != '+') + 1;
          local_50 = local_50 + 1;
          bVar13 = local_50 == 0;
        }
        bVar12 = bVar12 && 0xfffffffe < uVar4;
        iVar9 = 3;
        pbVar10 = (byte *)cp;
        pbVar11 = &DAT_080751ce;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          bVar12 = *pbVar10 < *pbVar11;
          bVar13 = *pbVar10 == *pbVar11;
          pbVar10 = pbVar10 + (uint)bVar14 * -2 + 1;
          pbVar11 = pbVar11 + (uint)bVar14 * -2 + 1;
        } while (bVar13);
        if ((!bVar12 && !bVar13) == bVar12) {
          ptVar6 = equation + local_50;
          ptVar6->level = local_54;
          ptVar6->kind = VARIABLE;
          next_sign(&(ptVar6->token).variable);
          ptVar6 = equation + local_50 + 1;
          ptVar6->level = local_54;
          ptVar6->kind = OPERATOR;
          (ptVar6->token).variable = 3;
          local_50 = local_50 + 2;
          cp = cp + 2;
          bVar2 = false;
        }
        else if (bVar2) goto LAB_08051121;
        break;
      case '.':
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        if (!bVar2) {
          ptVar6 = equation + local_50;
          ptVar6->level = local_54;
          ptVar6->kind = OPERATOR;
          (ptVar6->token).variable = 3;
          local_50 = local_50 + 1;
          bVar2 = true;
        }
LAB_08051121:
        if (*cp == '-') {
          if (negate_highest_precedence != 0) {
            ppuVar7 = __ctype_b_loc();
            if (((*(byte *)((int)*ppuVar7 + pcVar5[1] * 2 + 1) & 8) != 0) || (pcVar5[1] == '.'))
            goto LAB_08051195;
          }
          ptVar6 = equation + local_50;
          ptVar6->kind = CONSTANT;
          (ptVar6->token).constant = -1.0;
          ptVar6->level = local_54;
          ptVar6 = equation + local_50 + 1;
          ptVar6->kind = OPERATOR;
          (ptVar6->token).variable = 8;
          ptVar6->level = local_54;
          local_50 = local_50 + 2;
          bVar2 = false;
        }
        else {
LAB_08051195:
          piVar8 = __errno_location();
          *piVar8 = 0;
          dVar15 = strtod(pcVar5,&cp);
          if (pcVar5 == cp) goto syntax_error;
          if (*piVar8 != 0) {
            put_up_arrow((int)pcVar5 - (int)pcVar3,"Constant out of range.");
            return (char *)0x0;
          }
          ptVar6 = equation + local_50;
          ptVar6->kind = CONSTANT;
          (ptVar6->token).constant = dVar15;
          ptVar6->level = local_54;
          local_50 = local_50 + 1;
          cp = cp + -1;
        }
        break;
      case '/':
        if (bVar2) goto syntax_error;
        if (cp[1] == '/') {
          ptVar6 = equation + local_50;
          ptVar6->level = local_54;
          ptVar6->kind = OPERATOR;
          (ptVar6->token).variable = 9;
          cp = cp + 1;
        }
        else {
          ptVar6 = equation + local_50;
          ptVar6->level = local_54;
          ptVar6->kind = OPERATOR;
          (ptVar6->token).variable = 4;
        }
        local_50 = local_50 + 1;
        break;
      case '^':
parse_power:
        cp = pcVar5;
        if (bVar2) goto syntax_error;
        ptVar6 = equation + local_50;
        ptVar6->level = local_54;
        ptVar6->kind = OPERATOR;
        (ptVar6->token).variable = 6;
        local_50 = local_50 + 1;
        break;
      case '|':
        if (bVar2) {
          if (9 < local_60) {
            error("Too many nested absolute values.");
            return (char *)0x0;
          }
          local_54 = local_54 + 3;
          abs_array[local_60] = local_54;
          local_60 = local_60 + 1;
        }
        else {
          if (local_60 < 1) goto syntax_error;
          local_60 = local_60 + -1;
          iVar9 = abs_array[local_60];
          if (iVar9 != local_54) goto syntax_error;
          ptVar6 = equation + local_50;
          ptVar6->level = iVar9 + -1;
          ptVar6->kind = OPERATOR;
          (ptVar6->token).variable = 6;
          ptVar6 = equation + local_50 + 1;
          ptVar6->level = iVar9 + -1;
          ptVar6->kind = CONSTANT;
          (ptVar6->token).constant = 2.0;
          ptVar6 = equation + local_50 + 2;
          ptVar6->level = iVar9 + -2;
          ptVar6->kind = OPERATOR;
          (ptVar6->token).variable = 6;
          ptVar6 = equation + local_50 + 3;
          ptVar6->level = iVar9 + -2;
          ptVar6->kind = CONSTANT;
          (ptVar6->token).constant = 0.5;
          local_50 = local_50 + 4;
          local_54 = iVar9 + -3;
        }
        bVar2 = !bVar2;
      }
    }
LAB_08051317:
    cp = cp + 1;
  } while( true );
}



// WARNING: Unknown calling convention

void str_tolower(char *cp)

{
  ushort **ppuVar1;
  __int32_t **pp_Var2;
  char cVar3;
  
  if ((cp != (char *)0x0) && (cVar3 = *cp, cVar3 != '\0')) {
    ppuVar1 = __ctype_b_loc();
    do {
      if ((*(byte *)((int)*ppuVar1 + cVar3 * 2 + 1) & 1) != 0) {
        pp_Var2 = __ctype_tolower_loc();
        *cp = (char)(*pp_Var2)[cVar3];
      }
      cp = cp + 1;
      cVar3 = *cp;
    } while (cVar3 != '\0');
  }
  return;
}



// WARNING: Unknown calling convention

char * parse_expr(token_type *equation,int *np,char *cp)

{
  char *pcVar1;
  char *cp1;
  long lVar2;
  int i;
  int iVar3;
  char *local_20 [4];
  
  if (cp != (char *)0x0) {
    if (case_sensitive_flag == 0) {
      str_tolower(cp);
    }
    pcVar1 = skip_space(cp);
    if (*pcVar1 == '#') {
      pcVar1 = pcVar1 + 1;
      if ((*pcVar1 == '+') || (*pcVar1 == '-')) {
        lVar2 = decstrtol(pcVar1,local_20);
        iVar3 = lVar2 + cur_equation;
      }
      else {
        lVar2 = decstrtol(pcVar1,local_20);
        iVar3 = lVar2 + -1;
      }
      if ((pcVar1 == local_20[0]) || (*local_20[0] != '\0')) {
        error("Error parsing equation space number.");
        cp = (char *)0x0;
      }
      else if ((iVar3 < 0) || ((n_equations <= iVar3 || (n_lhs[iVar3] < 1)))) {
        error("No expression available in specified equation space.");
        cp = (char *)0x0;
      }
      else {
        if (n_rhs[iVar3] == 0) {
          memmove(equation,lhs[iVar3],n_lhs[iVar3] << 4);
          *np = n_lhs[iVar3];
        }
        else {
          memmove(equation,rhs[iVar3],n_rhs[iVar3] << 4);
          *np = n_rhs[iVar3];
        }
        list_proc(equation,*np,0);
        __fprintf_chk(gfp,1,"\n");
        cp = local_20[0];
      }
    }
    else {
      cp = parse_section(equation,np,cp,1);
      if (cp != (char *)0x0) {
        iVar3 = extra_characters(cp);
        if (iVar3 != 0) {
          cp = (char *)0x0;
        }
      }
    }
  }
  return cp;
}



// WARNING: Unknown calling convention

char * parse_equation(int n,char *cp)

{
  int iVar1;
  
  if (cp != (char *)0x0) {
    if (case_sensitive_flag == 0) {
      str_tolower(cp);
    }
    cp = parse_section(lhs[n],n_lhs + n,cp,1);
    if (cp != (char *)0x0) {
      cp = parse_section(rhs[n],n_rhs + n,cp,1);
      if (cp != (char *)0x0) {
        iVar1 = extra_characters(cp);
        if (iVar1 != 0) {
          cp = (char *)0x0;
        }
      }
    }
  }
  return cp;
}



// WARNING: Unknown calling convention

int vcmp(sort_type *p1,sort_type *p2)

{
  return p2->count - p1->count;
}



// WARNING: Unknown calling convention

int quit_cmd(char *cp)

{
  int iVar1;
  long exit_value;
  int ev;
  
  exit_value = 0;
  if (*cp != '\0') {
    exit_value = decstrtol(cp,&cp);
    iVar1 = extra_characters(cp);
    if (iVar1 != 0) {
      return 0;
    }
  }
  exit_program(exit_value);
  return 0;
}



// WARNING: Unknown calling convention

int fraction_cmd(char *cp)

{
  int iVar1;
  int local_14;
  int local_10;
  
  iVar1 = get_range_eol(&cp,&local_10,&local_14);
  if (iVar1 == 0) {
LAB_08051777:
    iVar1 = 0;
  }
  else {
    if (local_10 <= local_14) {
      do {
        if (n_lhs[local_10] != 0) {
          simple_frac_side(lhs[local_10],n_lhs + local_10);
          simple_frac_side(rhs[local_10],n_rhs + local_10);
          iVar1 = return_result(local_10);
          if (iVar1 == 0) goto LAB_08051777;
        }
        local_10 = local_10 + 1;
      } while (local_10 <= local_14);
    }
    iVar1 = 1;
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int unfactor_cmd(char *cp)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char *__s1;
  int iVar4;
  int iVar5;
  int quick_flag;
  int fraction_flag;
  int local_24;
  int local_20 [4];
  
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  do {
    __s1 = cp;
    iVar4 = strncasecmp(cp,"quick",4);
    if (iVar4 == 0) {
      bVar1 = true;
    }
    else {
      iVar4 = strncasecmp(__s1,"fraction",4);
      if ((iVar4 == 0) || (iVar4 = strncasecmp(__s1,"fully",4), iVar4 == 0)) {
        bVar2 = true;
      }
      else {
        iVar4 = strncasecmp(__s1,"power",4);
        if (iVar4 != 0) {
          iVar4 = get_range_eol(&cp,local_20,&local_24);
          iVar5 = 0;
          if (iVar4 != 0) {
            partial_flag = (int)!bVar2;
            if (bVar3) {
              if (local_20[0] <= local_24) {
                do {
                  if (n_lhs[local_20[0]] != 0) {
                    if (bVar1) {
                      uf_power(lhs[local_20[0]],n_lhs + local_20[0]);
                    }
                    else {
                      uf_allpower(lhs[local_20[0]],n_lhs + local_20[0]);
                    }
                    elim_loop(lhs[local_20[0]],n_lhs + local_20[0]);
                    if (n_rhs[local_20[0]] != 0) {
                      if (bVar1) {
                        uf_power(rhs[local_20[0]],n_rhs + local_20[0]);
                      }
                      else {
                        uf_allpower(rhs[local_20[0]],n_rhs + local_20[0]);
                      }
                      elim_loop(rhs[local_20[0]],n_rhs + local_20[0]);
                    }
                    iVar4 = return_result(local_20[0]);
                    if (iVar4 == 0) {
                      partial_flag = 1;
                      return 0;
                    }
                  }
                  local_20[0] = local_20[0] + 1;
                } while (local_20[0] <= local_24);
              }
            }
            else if (local_20[0] <= local_24) {
              do {
                if (n_lhs[local_20[0]] != 0) {
                  if (bVar1) {
                    uf_tsimp(lhs[local_20[0]],n_lhs + local_20[0]);
                    if (n_rhs[local_20[0]] != 0) {
                      uf_tsimp(rhs[local_20[0]],n_rhs + local_20[0]);
                    }
                  }
                  else {
                    uf_simp(lhs[local_20[0]],n_lhs + local_20[0]);
                    if (n_rhs[local_20[0]] != 0) {
                      uf_simp(rhs[local_20[0]],n_rhs + local_20[0]);
                    }
                  }
                  iVar4 = return_result(local_20[0]);
                  if (iVar4 == 0) {
                    partial_flag = 1;
                    return 0;
                  }
                }
                local_20[0] = local_20[0] + 1;
              } while (local_20[0] <= local_24);
            }
            partial_flag = 1;
            iVar5 = 1;
          }
          return iVar5;
        }
        bVar3 = true;
      }
    }
    cp = skip_param(__s1);
  } while( true );
}



// WARNING: Unknown calling convention

int skip_no(char **cpp)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = strcmp_tospace(*cpp,"no");
  if ((((iVar1 != 0) && (iVar1 = strcmp_tospace(*cpp,"not"), iVar1 != 0)) &&
      (iVar1 = strcmp_tospace(*cpp,"off"), iVar1 != 0)) &&
     (iVar1 = strcmp_tospace(*cpp,"false"), iVar1 != 0)) {
    iVar1 = strcmp_tospace(*cpp,"yes");
    if (((iVar1 != 0) && (iVar1 = strcmp_tospace(*cpp,"on"), iVar1 != 0)) &&
       (iVar1 = strcmp_tospace(*cpp,"true"), iVar1 != 0)) {
      return 0;
    }
    pcVar2 = skip_param(*cpp);
    *cpp = pcVar2;
    return 0;
  }
  pcVar2 = skip_param(*cpp);
  *cpp = pcVar2;
  return 1;
}



// WARNING: Unknown calling convention

int factor_cmd(char *cp)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *cp_00;
  int iVar4;
  int iVar5;
  int valid_range;
  ushort **ppuVar6;
  int power_flag;
  token_type **pptVar7;
  int i1;
  int *piVar8;
  token_type **pptVar9;
  int in_GS_OFFSET;
  int *local_104c;
  token_type **local_1048;
  int *local_1044;
  int *local_1040;
  double local_103c;
  char *local_1030;
  int local_102c;
  int local_1028;
  int local_1024;
  char buf [4096];
  
  local_1030 = cp;
  iVar2 = *(int *)(in_GS_OFFSET + 0x14);
  local_1040 = (int *)cp;
  iVar4 = strcmp_tospace(cp,"number");
  if (iVar4 == 0) {
    local_1030 = skip_param(local_1030);
LAB_08051c66:
LAB_08051c6c:
    if (*local_1030 != '\0') goto LAB_08051e16;
retry:
    do {
      my_strlcpy(prompt_str,"Enter integers to factor: ",0x50);
      local_1040 = (int *)get_string(buf,0x1000);
      local_1030 = (char *)local_1040;
      if (local_1040 == (int *)0x0) goto LAB_080520f4;
      if (*(char *)local_1040 == '\0') goto LAB_080520fb;
LAB_08051e16:
      while( true ) {
        cp_00 = local_1030;
        if (*local_1030 == '\0') {
          if (repeat_flag == 0) goto LAB_080520fb;
          goto LAB_08051c6c;
        }
        local_103c = strtod(local_1030,&local_1030);
        if (cp_00 == local_1030) {
          error("Integer expected.");
          goto retry;
        }
        local_1030 = skip_space(local_1030);
        cVar1 = *local_1030;
        if ((cVar1 != '\0') &&
           (ppuVar6 = __ctype_b_loc(), (*(byte *)((int)*ppuVar6 + cVar1 * 2 + 1) & 8) == 0)) {
          input_column = (int)(cp_00 + (input_column - (int)local_1040));
          local_1030 = parse_expr(tes,&n_tes,cp_00);
          if (local_1030 == (char *)0x0) goto retry;
          if (n_tes < 1) goto LAB_080520fb;
          calc_simp(tes,&n_tes);
          if ((n_tes != 1) || (tes->kind != CONSTANT)) {
            error("Integer expected.");
            goto retry;
          }
          local_103c = (tes->token).constant;
        }
        local_1030 = skip_space(local_1030);
        iVar4 = factor_one(local_103c);
        if (iVar4 == 0) break;
        display_unique();
        iVar4 = is_prime();
        if (iVar4 != 0) {
          __fprintf_chk(gfp,1,"Prime number!\n");
        }
      }
      error("Number too large to factor or not a non-zero integer.");
    } while( true );
  }
  iVar4 = strcmp_tospace(local_1030,"numbers");
  if (iVar4 == 0) {
    repeat_flag = 1;
    local_1030 = skip_param(local_1030);
    goto LAB_08051c66;
  }
  iVar4 = strcmp_tospace(local_1030,"power");
  if (iVar4 == 0) {
    local_1030 = skip_param(local_1030);
  }
  iVar5 = get_range(&local_1030,&local_1024,&local_1028);
  if (iVar5 == 0) {
    cVar1 = *local_1030;
    if ((cVar1 == '-') ||
       (ppuVar6 = __ctype_b_loc(), (*(byte *)((int)*ppuVar6 + cVar1 * 2 + 1) & 8) != 0)) {
      __printf_chk(1);
      goto LAB_08051c66;
    }
LAB_080520f4:
    iVar4 = 0;
  }
  else {
    if (iVar4 != 0) {
      do {
        local_102c = 0;
        if (*local_1030 != '\0') {
          local_1030 = parse_var2(&local_102c,local_1030);
          if (local_1030 == (char *)0x0) goto LAB_080520f4;
          if (local_102c != 0) {
            iVar4 = local_1024;
            if (local_1024 <= local_1028) {
              do {
                iVar5 = var_in_equation(iVar4,local_102c);
                if (iVar5 != 0) goto LAB_08051fe8;
                iVar4 = iVar4 + 1;
              } while (iVar4 <= local_1028);
            }
            warning("Variable not found.");
          }
        }
LAB_08051fe8:
        if (local_1024 <= local_1028) {
          piVar8 = n_lhs + local_1024;
          pptVar9 = lhs + local_1024;
          local_1044 = n_rhs + local_1024;
          local_1048 = rhs + local_1024;
          iVar4 = local_1024;
          local_1040 = piVar8;
          piVar3 = local_1044;
          do {
            if ((*piVar8 != 0) && (simpv_side(*pptVar9,local_1040,local_102c), *piVar3 != 0)) {
              simpv_side(*local_1048,local_1044,local_102c);
            }
            iVar4 = iVar4 + 1;
            piVar8 = piVar8 + 1;
            pptVar9 = pptVar9 + 1;
            local_1040 = local_1040 + 1;
            piVar3 = piVar3 + 1;
            local_1048 = local_1048 + 1;
            local_1044 = local_1044 + 1;
          } while (iVar4 <= local_1028);
        }
      } while (*local_1030 != '\0');
      if (local_1024 <= local_1028) {
        piVar8 = n_lhs + local_1024;
        do {
          if ((*piVar8 != 0) && (iVar4 = return_result(local_1024), iVar4 == 0)) goto LAB_080520f4;
          local_1024 = local_1024 + 1;
          piVar8 = piVar8 + 1;
        } while (local_1024 <= local_1028);
      }
    }
    else {
      iVar4 = extra_characters(local_1030);
      if (iVar4 != 0) goto LAB_080520f4;
      local_103c._0_4_ = local_1024;
      if (local_1024 <= local_1028) {
        local_1044 = n_lhs + local_1024;
        local_104c = n_rhs + local_1024;
        pptVar9 = rhs + local_1024;
        pptVar7 = lhs + local_1024;
        local_1048 = (token_type **)local_104c;
        local_1040 = local_1044;
        do {
          if (*local_1040 != 0) {
            factor_power(*pptVar7,local_1044);
            do {
              simp_loop(*pptVar7,local_1044);
              iVar4 = factor_power(*pptVar7,local_1044);
            } while (iVar4 != 0);
            if (*local_104c != 0) {
              factor_power(*pptVar9,(int *)local_1048);
              do {
                simp_loop(*pptVar9,(int *)local_1048);
                iVar4 = factor_power(*pptVar9,(int *)local_1048);
              } while (iVar4 != 0);
            }
            iVar4 = return_result(local_103c._0_4_);
            if (iVar4 == 0) goto LAB_080520f4;
          }
          local_103c._0_4_ = local_103c._0_4_ + 1;
          local_1040 = local_1040 + 1;
          local_104c = local_104c + 1;
          pptVar9 = pptVar9 + 1;
          local_1048 = local_1048 + 1;
          pptVar7 = pptVar7 + 1;
          local_1044 = local_1044 + 1;
        } while (local_103c._0_4_ <= local_1028);
      }
    }
LAB_080520fb:
    iVar4 = 1;
  }
  if (iVar2 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention

int echo_cmd(char *cp)

{
  __fprintf_chk(gfp,1,"%s\n",cp);
  return 1;
}



// WARNING: Unknown calling convention

void output_options(FILE *ofp)

{
  int iVar1;
  
  if (ofp != (FILE *)0x0) {
    iVar1 = precision;
    __fprintf_chk(ofp,1,"precision = %d digits\n",precision);
    if (autosolve == 0) {
      __fprintf_chk(ofp,1,&DAT_080756ec,iVar1);
    }
    __fprintf_chk(ofp,1,"autosolve\n",iVar1);
    if (autocalc == 0) {
      __fprintf_chk(ofp,1,&DAT_080756ec,iVar1);
    }
    __fprintf_chk(ofp,1,"autocalc\n",iVar1);
    if (autoselect == 0) {
      __fprintf_chk(ofp,1,&DAT_080756ec);
    }
    __fprintf_chk(ofp,1,"autoselect\n");
    iVar1 = debug_level;
    __fprintf_chk(ofp,1,"debug_level = %d\n",debug_level);
    if (case_sensitive_flag == 0) {
      __fprintf_chk(ofp,1,&DAT_080756ec,iVar1);
    }
    __fprintf_chk(ofp,1,"case_sensitive\n",iVar1);
    if (color_flag == 0) {
      __fprintf_chk(ofp,1,&DAT_080756ec,iVar1);
    }
    __fprintf_chk(ofp,1,"color\n",iVar1);
    if (bold_colors == 0) {
      __fprintf_chk(ofp,1,&DAT_080756ec);
    }
    __fprintf_chk(ofp,1,"bold_colors\n");
    if (display2d == 0) {
      __fprintf_chk(ofp,1,&DAT_080756ec);
    }
    __fprintf_chk(ofp,1,"display2d\n");
    if (preserve_surds == 0) {
      __fprintf_chk(ofp,1,&DAT_080756ec);
    }
    __fprintf_chk(ofp,1,"preserve_surds\n");
    if (rationalize_denominators == 0) {
      __fprintf_chk(ofp,1,&DAT_080756ec);
    }
    __fprintf_chk(ofp,1,"rationalize_denominators\n");
    __fprintf_chk(ofp,1,"modulus_mode = %d\n",modulus_mode);
    iVar1 = finance_option;
    __fprintf_chk(ofp,1,"finance = %d\n",finance_option);
    if (factor_int_flag == 0) {
      __fprintf_chk(ofp,1,&DAT_080756ec,iVar1);
    }
    __fprintf_chk(ofp,1,"factor_integers\n",iVar1);
    if (right_associative_power == 0) {
      __fprintf_chk(ofp,1,&DAT_080756ec,iVar1);
    }
    __fprintf_chk(ofp,1,"right_associative_power\n",iVar1);
    if (negate_highest_precedence == 0) {
      __fprintf_chk(ofp,1,&DAT_080756ec);
    }
    __fprintf_chk(ofp,1,"negate_highest_precedence\n");
    __fprintf_chk(ofp,1,"special_variable_characters = %s\n",special_variable_characters);
  }
  return;
}



// WARNING: Unknown calling convention

int save_set_options(void)

{
  int iVar1;
  FILE *ofp;
  FILE *fp;
  
  if (rc_file[0] == '\0') {
    error("Set options startup file name not set.");
    iVar1 = 0;
  }
  else {
    ofp = fopen(rc_file,"w");
    if (ofp == (FILE *)0x0) {
      error("Unable to write to set options startup file.");
      iVar1 = 0;
    }
    else {
      __fprintf_chk(ofp,1,"; Mathomatic set options loaded at startup.\n");
      __fprintf_chk(ofp,1,"; This file can be edited.\n\n");
      output_options((FILE *)ofp);
      iVar1 = fclose(ofp);
      if (iVar1 == 0) {
        __printf_chk(1,"All options saved in startup file \"%s\".\n",rc_file);
        iVar1 = 1;
      }
      else {
        error("Error saving set options.");
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int version_report(void)

{
  __fprintf_chk(gfp,1,"Mathomatic version %s\n","15.1.1");
  __fprintf_chk(gfp,1,"Compile-time defines used: ");
  __fprintf_chk(gfp,1,"UNIX ");
  __fprintf_chk(gfp,1,"READLINE ");
  __fprintf_chk(gfp,1,"\n\nThe current expression array size is %d tokens,\n",n_tokens);
  __fprintf_chk(gfp,1,"making the maximum memory usage %ld kilobytes.\n",
                (int)(((longlong)n_tokens * 0xce0 & 0xffffffffU) / 1000));
  __fprintf_chk(gfp,1,"The current security level is %d.\n",security_level);
  return 1;
}



// WARNING: Unknown calling convention

int version_cmd(char *cp)

{
  int iVar1;
  int rv;
  
  iVar1 = version_report();
  __fprintf_chk(gfp,1,"\nMathomatic is GNU LGPL version 2.1 licensed software,\n");
  __fprintf_chk(gfp,1,"meaning it is free software that comes with no warranty.\n");
  __fprintf_chk(gfp,1,"Type \"help copyright\" for the copyright and license.\n");
  __fprintf_chk(gfp,1,"\nThe newest version of Mathomatic is always available at\n");
  __fprintf_chk(gfp,1,"the Mathomatic website: http://mathomatic.org\n");
  __fprintf_chk(gfp,1,"Feedback and contributions are welcomed.\n");
  return iVar1;
}



// WARNING: Unknown calling convention

int copy_cmd(char *cp)

{
  int iVar1;
  int i1;
  char *pcVar2;
  int *piVar3;
  char *pcVar4;
  int k;
  int in_GS_OFFSET;
  char *local_90;
  int local_8c;
  int local_88;
  char exists [100];
  int local_20;
  
  local_90 = cp;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = get_range_eol(&local_90,&local_88,&local_8c);
  if (iVar1 == 0) {
LAB_08052840:
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      exists[iVar1] = '\0';
      iVar1 = iVar1 + 1;
    } while (iVar1 != 100);
    if (local_88 <= local_8c) {
      piVar3 = n_lhs + local_88;
      pcVar4 = exists + local_88;
      iVar1 = local_88;
      pcVar2 = pcVar4;
      do {
        if (0 < *piVar3) {
          *pcVar2 = '\x01';
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 1;
        pcVar2 = pcVar2 + 1;
      } while (iVar1 <= local_8c);
      do {
        if (*pcVar4 != '\0') {
          iVar1 = next_espace();
          copy_espace(local_88,iVar1);
          iVar1 = return_result(iVar1);
          if (iVar1 == 0) goto LAB_08052840;
        }
        local_88 = local_88 + 1;
        pcVar4 = pcVar4 + 1;
      } while (local_88 <= local_8c);
    }
    iVar1 = 1;
  }
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention

int replace_cmd(char *cp)

{
  storage_type *psVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int j;
  token_type *ptVar5;
  char *pcVar6;
  char *cp1;
  int iVar7;
  int found;
  int iVar8;
  int iVar9;
  long *vp;
  long v;
  int iVar10;
  int vc;
  char *local_fe0;
  int local_fd0;
  long va [1000];
  int local_20 [4];
  
  iVar4 = current_not_defined();
  iVar7 = cur_equation;
  if (iVar4 == 0) {
    if (*cp == '\0') {
      local_fe0 = cp;
      iVar4 = 0;
    }
    else {
      vp = va;
      iVar4 = 0;
      local_fe0 = cp;
      do {
        iVar10 = strcmp_tospace(local_fe0,"with");
        if (iVar10 == 0) {
          if (iVar4 == 0) {
            error("No variables specified.");
            return 0;
          }
          break;
        }
        if (iVar4 == 1000) {
          error("Too many variables specified.");
          return 0;
        }
        local_fe0 = parse_var2(vp,local_fe0);
        if (local_fe0 == (char *)0x0) goto LAB_08052d29;
        iVar10 = var_in_equation(iVar7,*vp);
        if (iVar10 == 0) {
          error("Variable not found.");
          return 0;
        }
        iVar4 = iVar4 + 1;
        vp = vp + 1;
      } while (*local_fe0 != '\0');
    }
    n_tlhs = n_lhs[iVar7];
    memmove(tlhs,lhs[iVar7],n_tlhs << 4);
    n_trhs = n_rhs[iVar7];
    memmove(trhs,rhs[iVar7],n_trhs << 4);
    local_fd0 = 0;
LAB_080529dd:
    iVar10 = -1;
    if (0 < n_lhs[iVar7]) {
      ptVar5 = lhs[iVar7];
      iVar10 = -1;
      iVar8 = 0;
      do {
        iVar9 = iVar10;
        if ((((ptVar5->kind == VARIABLE) && (iVar2 = (ptVar5->token).variable, local_fd0 < iVar2))
            && (iVar9 = iVar2, iVar10 != -1)) && (iVar10 < iVar2)) {
          iVar9 = iVar10;
        }
        iVar10 = iVar9;
        iVar8 = iVar8 + 2;
        ptVar5 = ptVar5 + 2;
      } while (iVar8 < n_lhs[iVar7]);
    }
    if (0 < n_rhs[iVar7]) {
      ptVar5 = rhs[iVar7];
      iVar9 = 0;
      iVar8 = iVar10;
      do {
        iVar10 = iVar8;
        if (((ptVar5->kind == VARIABLE) && (iVar2 = (ptVar5->token).variable, local_fd0 < iVar2)) &&
           ((iVar10 = iVar2, iVar8 != -1 && (iVar8 < iVar2)))) {
          iVar10 = iVar8;
        }
        iVar9 = iVar9 + 2;
        ptVar5 = ptVar5 + 2;
        iVar8 = iVar10;
      } while (iVar9 < n_rhs[iVar7]);
    }
    if (iVar10 != -1) {
      local_fd0 = iVar10;
      if (iVar4 != 0) goto code_r0x08052acc;
      goto LAB_08052b75;
    }
    iVar4 = 0;
    if (0 < n_tlhs) {
      do {
        ptVar5 = tlhs + iVar4;
        if ((ptVar5->kind == VARIABLE) && ((ptVar5->token).variable < 0)) {
          (ptVar5->token).variable = -(ptVar5->token).variable;
        }
        iVar4 = iVar4 + 2;
      } while (iVar4 < n_tlhs);
    }
    if (0 < n_trhs) {
      iVar4 = 0;
      do {
        ptVar5 = trhs + iVar4;
        if ((ptVar5->kind == VARIABLE) && ((ptVar5->token).variable < 0)) {
          (ptVar5->token).variable = -(ptVar5->token).variable;
        }
        iVar4 = iVar4 + 2;
      } while (iVar4 < n_trhs);
    }
    iVar4 = n_tlhs;
    n_lhs[iVar7] = n_tlhs;
    memmove(lhs[iVar7],tlhs,iVar4 << 4);
    iVar4 = n_trhs;
    n_rhs[iVar7] = n_trhs;
    memmove(rhs[iVar7],trhs,iVar4 << 4);
    simp_equation(iVar7);
    iVar7 = return_result(iVar7);
  }
  else {
LAB_08052d29:
    iVar7 = 0;
  }
  return iVar7;
code_r0x08052acc:
  if (iVar4 < 1) goto LAB_080529dd;
  bVar3 = false;
  iVar8 = 0;
  do {
    if (va[iVar8] == iVar10) {
      bVar3 = true;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != iVar4);
  if (!bVar3) goto LAB_080529dd;
  if (*local_fe0 == '\0') {
LAB_08052b75:
    list_var(iVar10,0);
    __snprintf_chk(prompt_str,0x50,1,0x50,"Enter %s: ",var_str);
    iVar8 = get_expr(scratch,local_20);
    if (iVar8 == 0) goto LAB_080529dd;
    if (local_20[0] < 1) goto LAB_08052bf9;
  }
  else {
    iVar8 = strcmp_tospace(local_fe0,"with");
    if (iVar8 != 0) goto LAB_08052d29;
    pcVar6 = skip_param(local_fe0);
    input_column = (int)pcVar6 + (input_column - (int)cp);
    pcVar6 = parse_expr(scratch,local_20,pcVar6);
    if ((pcVar6 == (char *)0x0) || (local_20[0] < 1)) goto LAB_08052d29;
  }
  iVar8 = 0;
  do {
    if (scratch[iVar8].kind == VARIABLE) {
      psVar1 = &scratch[iVar8].token;
      psVar1->variable = -psVar1->variable;
    }
    iVar8 = iVar8 + 2;
  } while (iVar8 < local_20[0]);
LAB_08052bf9:
  subst_var_with_exp(tlhs,&n_tlhs,scratch,local_20[0],iVar10);
  subst_var_with_exp(trhs,&n_trhs,scratch,local_20[0],iVar10);
  goto LAB_080529dd;
}



// WARNING: Unknown calling convention

int approximate_cmd(char *cp)

{
  char *pcVar1;
  int iVar2;
  char *cp1;
  int local_24;
  int local_20 [4];
  
  while( true ) {
    pcVar1 = cp;
    iVar2 = get_range(&cp,local_20,&local_24);
    if (iVar2 == 0) {
      return 0;
    }
    if ((*cp != '\0') && (pcVar1 == cp)) break;
    if (local_20[0] <= local_24) {
      do {
        if (n_lhs[local_20[0]] != 0) {
          subst_constants(lhs[local_20[0]],n_lhs + local_20[0]);
          subst_constants(rhs[local_20[0]],n_rhs + local_20[0]);
          approximate_roots = 1;
          simp_equation(local_20[0]);
          factorv(lhs[local_20[0]],n_lhs + local_20[0],3);
          if (n_rhs[local_20[0]] != 0) {
            factorv(rhs[local_20[0]],n_rhs + local_20[0],3);
          }
          approximate_roots = 0;
          iVar2 = return_result(local_20[0]);
          if (iVar2 == 0) {
            return 0;
          }
        }
        local_20[0] = local_20[0] + 1;
      } while (local_20[0] <= local_24);
    }
    if (*cp == '\0') {
      return 1;
    }
  }
  error("Invalid argument.");
  return 0;
}



// WARNING: Unknown calling convention

int variables_cmd(char *cp)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  token_type *ptVar6;
  int iVar7;
  int n1;
  int iVar8;
  int i1;
  token_type *p1;
  int *piVar9;
  int *piVar10;
  long v1;
  int k;
  language_list lang_code;
  code *pcVar11;
  char *pcVar12;
  int local_1f90;
  size_t local_1f88;
  int local_1f7c;
  token_type **local_1f74;
  token_type **local_1f70;
  sort_type va [1000];
  int local_24;
  int local_20 [4];
  
  iVar4 = strcmp_tospace(cp,"c");
  if ((iVar4 == 0) || (iVar4 = strcmp_tospace(cp,"c++"), iVar4 == 0)) {
    cp = skip_param(cp);
    bVar2 = false;
    local_1f90 = 1;
  }
  else {
    iVar4 = strcmp_tospace(cp,"java");
    if (iVar4 == 0) {
      cp = skip_param(cp);
      bVar2 = false;
      local_1f90 = 2;
    }
    else {
      iVar4 = strcmp_tospace(cp,"int");
      if ((iVar4 == 0) || (iVar4 = strcmp_tospace(cp,"integer"), iVar4 == 0)) {
        cp = skip_param(cp);
        bVar2 = true;
        local_1f90 = 1;
      }
      else {
        bVar2 = false;
        local_1f90 = 0;
      }
    }
  }
  iVar4 = get_range_eol(&cp,local_20,&local_24);
  iVar5 = 0;
  if (iVar4 != 0) {
    bVar3 = false;
    if (local_20[0] <= local_24) {
      piVar9 = n_lhs + local_20[0];
      local_1f70 = rhs + local_20[0];
      local_1f74 = lhs + local_20[0];
      piVar10 = n_rhs + local_20[0];
      k = local_20[0];
      do {
        iVar4 = *piVar9;
        if (0 < iVar4) {
          if (*piVar10 < 1) {
            ptVar6 = *local_1f74;
          }
          else {
            ptVar6 = *local_1f70;
            iVar4 = *piVar10;
          }
          iVar5 = 0;
          do {
            if ((ptVar6->kind == VARIABLE) && ((ptVar6->token).variable == 3)) {
              bVar3 = true;
              break;
            }
            iVar5 = iVar5 + 2;
            ptVar6 = ptVar6 + 2;
          } while (iVar5 < iVar4);
        }
        k = k + 1;
        piVar9 = piVar9 + 1;
        local_1f70 = local_1f70 + 1;
        local_1f74 = local_1f74 + 1;
        piVar10 = piVar10 + 1;
      } while (k <= local_24);
    }
    local_1f88 = 0;
    if (local_24 < local_20[0]) {
LAB_08053202:
      if (0 < (int)local_1f88) {
        pcVar11 = vcmp;
        qsort(va,local_1f88,8,vcmp);
        iVar4 = 0;
        pcVar12 = (char *)pcVar11;
        do {
          if (local_1f90 == 0) {
            list_var(va[iVar4].v,0);
            pcVar12 = var_str;
            __fprintf_chk(gfp,1,"%s\n",var_str);
          }
          else if (3 < va[iVar4].v) {
            list_var(va[iVar4].v,local_1f90);
            if (bVar3) {
              __fprintf_chk(gfp,1,"_Complex ",pcVar12);
            }
            if (bVar2) {
              pcVar12 = var_str;
              __fprintf_chk(gfp,1,"int %s;\n",var_str);
            }
            else {
              pcVar12 = var_str;
              __fprintf_chk(gfp,1,"double %s;\n",var_str);
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)local_1f88);
      }
      iVar5 = 1;
    }
    else {
      local_1f74 = (token_type **)local_20[0];
      local_1f70 = (token_type **)0x0;
      iVar5 = 0;
      local_1f7c = 0;
      iVar4 = -1;
      while( true ) {
        do {
          iVar7 = iVar4;
          iVar4 = *(int *)((int)n_lhs + local_20[0] * 4 + iVar5);
          if (0 < iVar4) {
            piVar9 = *(int **)((int)lhs + local_20[0] * 4 + iVar5);
            iVar8 = 0;
            do {
              if ((*piVar9 == 1) && (iVar1 = piVar9[2], (int)local_1f70 < iVar1)) {
                if ((iVar7 == -1) || (iVar1 < iVar7)) {
                  local_1f7c = 1;
                  iVar7 = iVar1;
                }
                else if (iVar7 == iVar1) {
                  local_1f7c = local_1f7c + 1;
                }
              }
              iVar8 = iVar8 + 2;
              piVar9 = piVar9 + 8;
            } while (iVar8 < iVar4);
            piVar9 = *(int **)((int)rhs + local_20[0] * 4 + iVar5);
            iVar4 = *(int *)((int)n_rhs + local_20[0] * 4 + iVar5);
            if (0 < iVar4) {
              iVar8 = 0;
              do {
                if ((*piVar9 == 1) && (iVar1 = piVar9[2], (int)local_1f70 < iVar1)) {
                  if ((iVar7 == -1) || (iVar1 < iVar7)) {
                    local_1f7c = 1;
                    iVar7 = iVar1;
                  }
                  else if (iVar7 == iVar1) {
                    local_1f7c = local_1f7c + 1;
                  }
                }
                iVar8 = iVar8 + 2;
                piVar9 = piVar9 + 8;
              } while (iVar8 < iVar4);
            }
          }
          local_1f74 = (token_type **)((int)local_1f74 + 1);
          iVar5 = iVar5 + 4;
          iVar4 = iVar7;
        } while ((int)local_1f74 <= local_24);
        if (iVar7 == -1) goto LAB_08053202;
        va[local_1f88].v = iVar7;
        va[local_1f88].count = local_1f7c;
        local_1f88 = local_1f88 + 1;
        if (local_1f88 == 1000) break;
        local_1f74 = (token_type **)local_20[0];
        iVar5 = 0;
        local_1f7c = 0;
        iVar4 = -1;
        local_1f70 = (token_type **)iVar7;
      }
      error("Too many variables to list.");
      iVar5 = 0;
    }
  }
  return iVar5;
}



// WARNING: Unknown calling convention

int code_cmd(char *cp)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int int_flag_00;
  int int_flag;
  language_list language_00;
  language_list language;
  char *cp1;
  int local_30;
  int local_24;
  int local_20 [4];
  
  int_flag_00 = 0;
  language_00 = C;
  do {
    iVar2 = strcmp_tospace(cp,"c");
    if ((iVar2 == 0) || (iVar2 = strcmp_tospace(cp,"c++"), iVar2 == 0)) {
      language_00 = C;
    }
    else {
      iVar2 = strcmp_tospace(cp,"java");
      if (iVar2 == 0) {
        language_00 = JAVA;
      }
      else {
        iVar2 = strcmp_tospace(cp,"python");
        if (iVar2 == 0) {
          language_00 = PYTHON;
        }
        else {
          iVar2 = strcmp_tospace(cp,"int");
          if ((iVar2 != 0) && (iVar2 = strcmp_tospace(cp,"integer"), iVar2 != 0)) {
            local_30 = 0;
            do {
              pcVar1 = cp;
              iVar2 = get_range(&cp,local_20,&local_24);
              if (iVar2 == 0) {
                return 0;
              }
              if ((*cp != '\0') && (pcVar1 == cp)) {
                error("Invalid argument.");
                return 0;
              }
              if (local_20[0] <= local_24) {
                do {
                  iVar2 = local_30;
                  if (0 < n_lhs[local_20[0]]) {
                    if (((n_rhs[local_20[0]] == 0) || (n_lhs[local_20[0]] != 1)) ||
                       (lhs[local_20[0]]->kind != VARIABLE)) {
                      warning("Can\'t make assignment statement because this is not an equation.");
                    }
                    approximate_roots = 1;
                    simp_i(lhs[local_20[0]],n_lhs + local_20[0]);
                    if (int_flag_00 != 0) {
                      uf_repeat_always(lhs[local_20[0]],n_lhs + local_20[0]);
                    }
                    if (n_rhs[local_20[0]] < 1) {
                      approximate_roots = 0;
                      make_fractions_and_group(local_20[0]);
                      if (int_flag_00 != 0) goto LAB_080535a3;
                    }
                    else {
                      simp_i(rhs[local_20[0]],n_rhs + local_20[0]);
                      if (int_flag_00 == 0) {
                        approximate_roots = 0;
                        make_fractions_and_group(local_20[0]);
                      }
                      else {
                        uf_repeat_always(rhs[local_20[0]],n_rhs + local_20[0]);
                        approximate_roots = 0;
                        make_fractions_and_group(local_20[0]);
LAB_080535a3:
                        iVar2 = int_expr(lhs[local_20[0]],n_lhs[local_20[0]]);
                        if ((iVar2 == 0) ||
                           (iVar2 = int_expr(rhs[local_20[0]],n_rhs[local_20[0]]), iVar2 == 0)) {
                          warning("Not an integer expression.");
                        }
                      }
                    }
                    iVar3 = list_c_equation(local_20[0],language_00,int_flag_00);
                    iVar2 = 1;
                    if (iVar3 < 1) {
                      iVar2 = local_30;
                    }
                  }
                  local_30 = iVar2;
                  local_20[0] = local_20[0] + 1;
                } while (local_20[0] <= local_24);
              }
              if (*cp == '\0') {
                return local_30;
              }
            } while( true );
          }
          int_flag_00 = 1;
        }
      }
    }
    cp = skip_param(cp);
  } while( true );
}



// WARNING: Unknown calling convention

int list_cmd(char *cp)

{
  char *pcVar1;
  int iVar2;
  char *cp1;
  int export_flag_00;
  int export_flag;
  int local_24;
  int local_20 [4];
  
  pcVar1 = cp;
  iVar2 = strncasecmp(cp,"gnuplot",4);
  if (iVar2 == 0) {
    cp = skip_param(pcVar1);
    export_flag_00 = 3;
  }
  else {
    iVar2 = strncasecmp(pcVar1,"export",4);
    if (iVar2 == 0) {
      cp = skip_param(pcVar1);
      export_flag_00 = 2;
    }
    else {
      iVar2 = strncasecmp(pcVar1,"maxima",4);
      export_flag_00 = 0;
      if (iVar2 == 0) {
        cp = skip_param(pcVar1);
        export_flag_00 = 1;
      }
    }
  }
  while( true ) {
    pcVar1 = cp;
    iVar2 = get_range(&cp,local_20,&local_24);
    if (iVar2 == 0) {
      return 0;
    }
    if ((*cp != '\0') && (pcVar1 == cp)) break;
    if (local_20[0] <= local_24) {
      do {
        if (0 < n_lhs[local_20[0]]) {
          list1_sub(local_20[0],export_flag_00);
        }
        local_20[0] = local_20[0] + 1;
      } while (local_20[0] <= local_24);
    }
    if (*cp == '\0') {
      return 1;
    }
  }
  error("Invalid argument.");
  return 0;
}



// WARNING: Unknown calling convention

int save_cmd(char *cp)

{
  FILE *__stream;
  int iVar1;
  int iVar2;
  int rv;
  FILE *fp;
  
  if (security_level < 2) {
    clean_up();
    if (*cp == '\0') {
      error("No file name specified.");
      iVar2 = 0;
    }
    else {
      iVar2 = access(cp,0);
      if (iVar2 == 0) {
        iVar2 = access(cp,2);
        if (iVar2 != 0) {
          error("Specified save file is not writable.");
          return 0;
        }
        __snprintf_chk(prompt_str,0x50,1,0x50,"File \"%s\" exists, overwrite (y/n)? ",cp);
        iVar2 = get_yes_no();
        if (iVar2 == 0) {
          __printf_chk(1,"Command aborted.\n");
          return 0;
        }
      }
      __stream = fopen(cp,"w");
      if (__stream == (FILE *)0x0) {
        error("Can\'t create specified save file.");
        iVar2 = 0;
      }
      else {
        high_prec = 1;
        gfp = (FILE *)__stream;
        iVar2 = list_cmd("all");
        high_prec = 0;
        gfp = default_out;
        iVar1 = fclose(__stream);
        if ((iVar1 == 0) && (iVar2 != 0)) {
          __printf_chk(1,"All equations saved in file \"%s\".\n",cp);
        }
        else {
          error("Error encountered while saving equations.");
          iVar2 = 0;
        }
      }
    }
  }
  else {
    error("Command disabled.");
    iVar2 = 0;
  }
  return iVar2;
}



// WARNING: Unknown calling convention

int clear_cmd(char *cp)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *cp1;
  int local_24;
  int local_20 [4];
  
  do {
    pcVar1 = cp;
    iVar2 = is_all(cp);
    if (iVar2 != 0) {
      clear_all();
      return 1;
    }
    iVar2 = get_range(&cp,local_20,&local_24);
    if (iVar2 == 0) {
      return 0;
    }
    if ((*cp != '\0') && (pcVar1 == cp)) {
      error("Invalid argument.");
      return 0;
    }
    if (local_20[0] <= local_24) {
      piVar3 = n_lhs + local_20[0];
      piVar4 = n_rhs + local_20[0];
      do {
        *piVar3 = 0;
        *piVar4 = 0;
        local_20[0] = local_20[0] + 1;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (local_20[0] <= local_24);
    }
  } while (*cp != '\0');
  return 1;
}



// WARNING: Unknown calling convention

int elim_sub(int i,long v)

{
  int iVar1;
  token_type want;
  
  if (i == cur_equation) {
    error("Error: source and destination are the same.");
    iVar1 = 0;
  }
  else {
    iVar1 = solved_equation(i);
    if ((iVar1 == 0) || ((lhs[i]->token).variable != v)) {
      list_var(v,0);
      __printf_chk(1,"Solving equation #%d for (%s) and substituting into the current equation...\n"
                   ,i + 1,var_str);
      want.level = 1;
      want.kind = VARIABLE;
      want.token.variable = v;
      iVar1 = solve_sub(&want,1,lhs[i],n_lhs + i,rhs[i],n_rhs + i);
      if (iVar1 < 1) {
        error("Solve failed.");
        return 0;
      }
    }
    else {
      list_var((lhs[i]->token).variable,0);
      __printf_chk(1,
                   "Substituting the RHS of equation #%d into the current equation for variable (%s)...\n"
                   ,i + 1,var_str);
    }
    subst_var_with_exp(rhs[cur_equation],n_rhs + cur_equation,rhs[i],n_rhs[i],v);
    subst_var_with_exp(lhs[cur_equation],n_lhs + cur_equation,rhs[i],n_rhs[i],v);
    simp_equation(cur_equation);
    iVar1 = 1;
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int display_fraction(double value)

{
  int rv;
  int iVar1;
  double local_1c;
  double local_14;
  
  f_to_fraction(value,&local_14,&local_1c);
  iVar1 = precision;
  __fprintf_chk(gfp,1,&DAT_080759b8,precision,value);
  if (local_1c != 1.0) {
    iVar1 = precision;
    __fprintf_chk(gfp,1," = %.*g/%.*g",precision,local_14,precision,local_1c);
    value = local_14;
  }
  __fprintf_chk(gfp,1,"\n",iVar1,value);
  return (uint)(local_1c != 1.0);
}



// WARNING: Unknown calling convention

int divide_cmd(char *cp)

{
  float fVar1;
  complexs a;
  complexs b;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int i;
  int j;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  double dVar11;
  complexs c3;
  complexs c2;
  complexs c1;
  double local_44;
  double local_3c;
  double local_34;
  int local_2c;
  int local_28;
  long local_24;
  long local_20 [4];
  
  local_20[0] = 0;
  local_28 = 0;
  local_2c = 0;
  pull_number = -1;
  if ((*cp == '\0') ||
     ((pcVar2 = parse_var2(local_20,cp), pcVar2 != (char *)0x0 &&
      (iVar3 = extra_characters(pcVar2), iVar3 == 0)))) {
    iVar3 = next_espace();
    do {
      while( true ) {
        my_strlcpy(prompt_str,"Enter dividend: ",0x50);
        iVar4 = get_expr(rhs[iVar3],&local_2c);
        if (iVar4 == 0) {
          return repeat_flag;
        }
        my_strlcpy(prompt_str,"Enter divisor: ",0x50);
        iVar4 = get_expr(lhs[iVar3],&local_28);
        if (iVar4 == 0) {
          return repeat_flag;
        }
        __fprintf_chk(gfp,1,"\n");
        calc_simp(rhs[iVar3],&local_2c);
        calc_simp(lhs[iVar3],&local_28);
        iVar4 = get_constant(lhs[iVar3],local_28,&local_3c);
        if (iVar4 != 0) {
          check_divide_by_zero(local_3c);
        }
        iVar4 = get_constant(rhs[iVar3],local_2c,&local_34);
        if ((iVar4 != 0) && (iVar4 = get_constant(lhs[iVar3],local_28,&local_3c), iVar4 != 0))
        break;
        iVar4 = parse_complex(rhs[iVar3],local_2c,&c1);
        if ((iVar4 == 0) || (iVar4 = parse_complex(lhs[iVar3],local_28,&c2), iVar4 == 0)) {
          local_24 = local_20[0];
          iVar4 = poly_div(rhs[iVar3],local_2c,lhs[iVar3],local_28,&local_24);
          if (iVar4 == 0) {
            __fprintf_chk(gfp,1,"Polynomial division failed.\n");
          }
          else {
            simp_divide(tlhs,&n_tlhs);
            simp_divide(trhs,&n_trhs);
            list_var(local_24,0);
            __fprintf_chk(gfp,1,"Polynomial division successful using base variable (%s).\n",var_str
                         );
            __fprintf_chk(gfp,1,"The quotient is:\n");
            fractions_and_group(tlhs,&n_tlhs);
            list_factor(tlhs,&n_tlhs,0);
            __fprintf_chk(gfp,1,"\n\nThe remainder is:\n");
            fractions_and_group(trhs,&n_trhs);
            list_factor(trhs,&n_trhs,0);
            __fprintf_chk(gfp,1,"\n");
          }
          __fprintf_chk(gfp,1,"\n");
          iVar4 = poly_gcd(rhs[iVar3],local_2c,lhs[iVar3],local_28,local_20[0]);
          if ((iVar4 == 0) &&
             (iVar4 = poly_gcd(lhs[iVar3],local_28,rhs[iVar3],local_2c,local_20[0]), iVar4 == 0)) {
            __fprintf_chk(gfp,1,"No univariate polynomial GCD found.\n");
          }
          else {
            simp_divide(trhs,&n_trhs);
            pcVar2 = "s";
            if (iVar4 == 1) {
              pcVar2 = "";
            }
            __fprintf_chk(gfp,1,"Polynomial GCD (%d Euclidean algorithm iteration%s):\n",iVar4,
                          pcVar2);
            fractions_and_group(trhs,&n_trhs);
            list_factor(trhs,&n_trhs,0);
            __fprintf_chk(gfp,1,"\n");
          }
        }
        else {
          a.re._4_4_ = c1.re._4_4_;
          a.re._0_4_ = c1.re._0_4_;
          a.im._0_4_ = c1.im._0_4_;
          a.im._4_4_ = c1.im._4_4_;
          b.re._4_4_ = c2.re._4_4_;
          b.re._0_4_ = c2.re._0_4_;
          b.im._0_4_ = c2.im._0_4_;
          b.im._4_4_ = c2.im._4_4_;
          complex_div(a,b);
          __fprintf_chk(gfp,1,"Result of complex number division:\n");
          __fprintf_chk(gfp,1,"%.*g %+.*g*i\n\n",precision,c3.re,precision,c3.im);
        }
joined_r0x08053f0a:
        if (repeat_flag == 0) goto LAB_080543a3;
      }
      dVar5 = gcd_verified(local_34,local_3c);
      dVar6 = modf(local_34 / local_3c,&local_44);
      dVar11 = local_34 / local_3c;
      iVar4 = precision;
      __fprintf_chk(gfp,1,&DAT_080759ac,precision,SUB84(local_34,0),
                    (int)((ulonglong)local_34 >> 0x20),precision,SUB84(local_3c,0),
                    (int)((ulonglong)local_3c >> 0x20),precision,dVar11,dVar6);
      if ((dVar5 != 0.0) && (local_3c / dVar5 != 1.0)) {
        __fprintf_chk(gfp,1," = %.*g/%.*g",precision,local_34 / dVar5,precision,local_3c / dVar5,
                      iVar4,dVar11);
      }
      dVar6 = dVar6 * local_3c;
      uVar8 = SUB84(local_44,0);
      uVar9 = (undefined4)((ulonglong)local_44 >> 0x20);
      iVar7 = precision;
      iVar10 = precision;
      __fprintf_chk(gfp,1,"\nQuotient: %.*g, Remainder: %.*g\n",precision,uVar8,uVar9,precision,
                    dVar6,iVar4,dVar11);
      local_34 = ABS(local_34);
      local_3c = ABS(local_3c);
      if (dVar5 == 0.0) {
        __fprintf_chk(gfp,1,"No GCD found.\n",iVar7,uVar8,uVar9,iVar10,dVar6,iVar4,dVar11);
        goto joined_r0x08053f0a;
      }
      __fprintf_chk(gfp,1,&DAT_080759cc,iVar7,uVar8,uVar9,iVar10,dVar6,iVar4,dVar11);
      if ((((float)dVar5 < 4.0) || (iVar4 = factor_one((double)(float)dVar5), iVar4 == 0)) ||
         (iVar4 = is_prime(), iVar4 != 0)) {
        display_fraction(dVar5);
      }
      else {
        display_unique();
      }
      dVar5 = (local_34 * local_3c) / dVar5;
      __fprintf_chk(gfp,1,"LCM = ");
      fVar1 = (float)dVar5;
      if (((fVar1 < 4.0) || (iVar4 = factor_one((double)fVar1), iVar4 == 0)) ||
         (iVar4 = is_prime(), iVar4 != 0)) {
        display_fraction(dVar5);
      }
      else {
        display_unique();
      }
    } while (repeat_flag != 0);
LAB_080543a3:
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}



// WARNING: Unknown calling convention

int compare_rhs(int i,int j,int *diff_signp)

{
  int iVar1;
  int rv;
  
  iVar1 = se_compare(rhs[i],n_rhs[i],rhs[i],n_rhs[i],diff_signp);
  if ((iVar1 == 0) || (*diff_signp != 0)) {
    error("Error in compare function or too many terms to compare.");
    iVar1 = 0;
  }
  else {
    sign_cmp_flag = 1;
    iVar1 = se_compare(rhs[i],n_rhs[i],rhs[j],n_rhs[j],diff_signp);
    sign_cmp_flag = 0;
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int compare_es(int i,int j)

{
  int iVar1;
  int rv;
  int local_10;
  
  if ((n_lhs[i] != 0) && (n_lhs[j] != 0)) {
    sign_cmp_flag = 1;
    iVar1 = se_compare(lhs[i],n_lhs[i],lhs[j],n_lhs[j],&local_10);
    sign_cmp_flag = 0;
    if ((iVar1 != 0) && (local_10 == 0)) {
      if (n_rhs[i] == 0) {
        sign_cmp_flag = 0;
        return (uint)(n_rhs[j] == 0);
      }
      if (n_rhs[j] != 0) {
        sign_cmp_flag = 1;
        iVar1 = se_compare(rhs[i],n_rhs[i],rhs[j],n_rhs[j],&local_10);
        sign_cmp_flag = 0;
        if (iVar1 != 0) {
          sign_cmp_flag = 0;
          return (uint)(local_10 == 0);
        }
      }
    }
  }
  return 0;
}



// WARNING: Unknown calling convention

int compare_cmd(char *cp)

{
  int *piVar1;
  int *piVar2;
  char *cp_00;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int i;
  int j;
  uint local_30;
  int local_20 [4];
  
  cp_00 = cp;
  iVar3 = strncasecmp(cp,"symbolic",3);
  if (iVar3 == 0) {
    cp = skip_param(cp_00);
  }
  local_30 = (uint)(iVar3 == 0);
  iVar3 = strcmp_tospace(cp,"with");
  if (iVar3 == 0) {
    cp = skip_param(cp);
  }
  lVar4 = decstrtol(cp,&cp);
  iVar3 = lVar4 + -1;
  iVar5 = not_defined(iVar3);
  if (iVar5 != 0) {
    return 0;
  }
  iVar5 = strcmp_tospace(cp,"with");
  if (iVar5 == 0) {
    cp = skip_param(cp);
  }
  iVar5 = get_default_en(cp);
  if (iVar5 < 0) {
    return 0;
  }
  if (iVar3 == iVar5) {
    error("Cannot compare an equation with itself.");
    return 0;
  }
  iVar7 = iVar5 + 1;
  __fprintf_chk(gfp,1,"Comparing #%d with #%d...\n",lVar4,iVar7);
  if (n_rhs[iVar3] == 0) {
    if (n_rhs[iVar5] == 0) {
      piVar1 = n_lhs + iVar3;
      simp_loop(lhs[iVar3],piVar1);
      piVar2 = n_lhs + iVar5;
      simp_loop(lhs[iVar5],piVar2);
      iVar6 = compare_es(iVar3,iVar5);
      if (iVar6 != 0) {
        __fprintf_chk(gfp,1,"Expressions are identical.\n",lVar4,iVar7);
        return 1;
      }
      if (-1 < debug_level) {
        __fprintf_chk(gfp,1,"%s\n","Simplifying both expressions...",iVar7);
      }
      symb_flag = local_30;
      simpa_side(lhs[iVar3],piVar1,0,1);
      simpa_side(lhs[iVar5],piVar2,0,1);
      symb_flag = 0;
      if (-1 < debug_level) {
        list_sub(iVar3);
        list_sub(iVar5);
      }
      iVar7 = compare_es(iVar3,iVar5);
      if (iVar7 == 0) {
        uf_simp(lhs[iVar3],piVar1);
        uf_simp(lhs[iVar5],piVar2);
        iVar3 = compare_es(iVar3,iVar5);
        if (iVar3 == 0) {
          __fprintf_chk(gfp,1,"Expressions differ.\n");
          return 0;
        }
        __fprintf_chk(gfp,1,"Expressions are identical.\n");
        return 1;
      }
      __fprintf_chk(gfp,1,"Expressions are identical.\n");
      return 1;
    }
LAB_0805484d:
    error("Cannot compare an equation with a non-equation.");
    return 0;
  }
  if (n_rhs[iVar5] == 0) goto LAB_0805484d;
  iVar6 = compare_es(iVar3,iVar5);
  if (iVar6 != 0) {
    __fprintf_chk(gfp,1,"Equations are identical.\n",lVar4,iVar7);
    return 1;
  }
  iVar6 = solved_equation(iVar3);
  if ((iVar6 == 0) || (iVar6 = solved_equation(iVar5), iVar6 == 0)) {
LAB_080549f8:
    if (-1 < debug_level) {
      __fprintf_chk(gfp,1,"%s\n","Solving both equations for zero and unfactoring...",iVar7);
    }
    piVar1 = n_rhs + iVar3;
    iVar7 = solve_sub(&zero_token,1,lhs[iVar3],n_lhs + iVar3,rhs[iVar3],piVar1);
    if (0 < iVar7) {
      piVar2 = n_rhs + iVar5;
      iVar7 = solve_sub(&zero_token,1,lhs[iVar5],n_lhs + iVar5,rhs[iVar5],piVar2);
      if (0 < iVar7) {
        uf_simp(rhs[iVar3],piVar1);
        uf_simp(rhs[iVar5],piVar2);
        iVar7 = compare_rhs(iVar3,iVar5,local_20);
        if (iVar7 != 0) {
          __fprintf_chk(gfp,1,"Equations are identical.\n");
          return 1;
        }
        if (-1 < debug_level) {
          __fprintf_chk(gfp,1,"%s\n","Simplifying both equations...");
        }
        symb_flag = local_30;
        simpa_side(rhs[iVar3],piVar1,0,0);
        simpa_side(rhs[iVar5],piVar2,0,0);
        symb_flag = 0;
        iVar7 = compare_rhs(iVar3,iVar5,local_20);
        if (iVar7 != 0) {
          __fprintf_chk(gfp,1,"Equations are identical.\n");
          return 1;
        }
        iVar7 = solve_sub(&zero_token,1,lhs[iVar3],n_lhs + iVar3,rhs[iVar3],piVar1);
        if ((0 < iVar7) &&
           (iVar7 = solve_sub(&zero_token,1,lhs[iVar5],n_lhs + iVar5,rhs[iVar5],piVar2), 0 < iVar7))
        {
          uf_simp(rhs[iVar3],piVar1);
          uf_simp(rhs[iVar5],piVar2);
          iVar3 = compare_rhs(iVar3,iVar5,local_20);
          if (iVar3 == 0) {
            __fprintf_chk(gfp,1,"Equations differ.\n");
            return 0;
          }
          __fprintf_chk(gfp,1,"Equations are identical.\n");
          return 1;
        }
      }
    }
  }
  else {
    piVar1 = n_rhs + iVar3;
    simp_loop(rhs[iVar3],piVar1);
    piVar2 = n_rhs + iVar5;
    simp_loop(rhs[iVar5],piVar2);
    iVar6 = compare_rhs(iVar3,iVar5,local_20);
    if (iVar6 == 0) {
      if (-1 < debug_level) {
        __fprintf_chk(gfp,1,"%s\n","Simplifying both equations...");
      }
      symb_flag = local_30;
      simpa_side(rhs[iVar3],piVar1,0,1);
      simpa_side(rhs[iVar5],piVar2,0,1);
      symb_flag = 0;
      if (-1 < debug_level) {
        list_sub(iVar3);
        list_sub(iVar5);
      }
      iVar6 = compare_rhs(iVar3,iVar5,local_20);
      if (iVar6 == 0) {
        uf_simp(rhs[iVar3],piVar1);
        uf_simp(rhs[iVar5],piVar2);
        iVar6 = compare_rhs(iVar3,iVar5,local_20);
        if (iVar6 == 0) goto LAB_080549f8;
      }
    }
    if ((local_20[0] == 0) && ((lhs[iVar3]->token).variable == (lhs[iVar5]->token).variable)) {
      __fprintf_chk(gfp,1,"Equations are identical.\n");
      return 1;
    }
    __fprintf_chk(gfp,1,"Variable (");
    list_proc(lhs[iVar3],n_lhs[iVar3],0);
    __fprintf_chk(gfp,1,") in the first equation is equal to (");
    if (local_20[0] != 0) {
      __fprintf_chk(gfp,1,"-");
    }
    list_proc(lhs[iVar5],n_lhs[iVar5],0);
    __fprintf_chk(gfp,1,") in the second equation.\n");
    if (local_20[0] == 0) {
      return 2;
    }
  }
  return 0;
}



// WARNING: Unknown calling convention

int find_more(token_type *equation,int *np,int en)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  token_type *ptVar5;
  int j;
  int iVar6;
  int level;
  int i;
  int iVar7;
  int local_34;
  int local_20 [4];
  
  if (0 < *np) {
    iVar3 = solved_equation(en);
    iVar6 = 1;
    if (iVar3 != 0) {
      while (iVar3 = *np, 1 < iVar3) {
        bVar2 = false;
        iVar7 = 1;
        do {
          j = iVar7;
          if ((iVar7 < iVar3) && (iVar6 <= equation[iVar7].level)) {
            piVar4 = &equation[iVar7 + 2].level;
            do {
              j = j + 2;
              if (iVar3 <= j) break;
              iVar1 = *piVar4;
              piVar4 = piVar4 + 8;
            } while (iVar6 <= iVar1);
          }
          if (j != iVar7) {
            local_34 = iVar7 + -1;
            ptVar5 = equation + local_34;
            iVar3 = se_compare(ptVar5,j - local_34,rhs[en],n_rhs[en],local_20);
            if (iVar3 != 0) {
              if (local_20[0] == 0) {
                memmove(equation + iVar7,equation + j,(*np - j) * 0x10);
                *np = *np + (iVar7 - j);
              }
              else {
                memmove(equation + iVar7 + 2,equation + j,(*np - j) * 0x10);
                *np = (iVar7 + 2 + *np) - j;
                iVar6 = iVar6 + 1;
                ptVar5->level = iVar6;
                ptVar5->kind = CONSTANT;
                (ptVar5->token).constant = -1.0;
                ptVar5 = equation + iVar7;
                ptVar5->level = iVar6;
                ptVar5->kind = OPERATOR;
                (ptVar5->token).variable = 3;
                local_34 = iVar7 + 1;
              }
              ptVar5 = equation + local_34;
              ptVar5->level = iVar6;
              ptVar5->kind = VARIABLE;
              (ptVar5->token).variable = (lhs[en]->token).variable;
              return 1;
            }
            bVar2 = true;
          }
          iVar7 = j + 2;
          iVar3 = *np;
        } while (iVar7 < iVar3);
        if (!bVar2) {
          return 0;
        }
        iVar6 = iVar6 + 1;
      }
    }
  }
  return 0;
}



// WARNING: Unknown calling convention

int tally_cmd(char *cp)

{
  token_type *ptVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int i;
  double local_24;
  
  iVar2 = strncasecmp(cp,"average",4);
  if (iVar2 == 0) {
    cp = skip_param(cp);
  }
  iVar3 = extra_characters(cp);
  ptVar1 = trhs;
  iVar4 = 0;
  if (iVar3 == 0) {
    trhs->kind = zero_token.kind;
    ptVar1->level = zero_token.level;
    (ptVar1->token).variable = zero_token.token.variable;
    *(undefined4 *)((int)&ptVar1->token + 4) = zero_token.token._4_4_;
    n_trhs = 1;
    __fprintf_chk(gfp,1,"Running total = ");
    list_proc(trhs,n_trhs,0);
    __fprintf_chk(gfp,1,"\n");
    local_24 = 0.0;
    while( true ) {
      __fprintf_chk(gfp,1,"\n");
      my_strlcpy(prompt_str,"Enter value: ",0x50);
      iVar3 = get_expr(tlhs,&n_tlhs);
      if (iVar3 == 0) break;
      if (n_tokens < n_trhs + n_tlhs + 1) {
        error_huge();
      }
      if (0 < n_tlhs) {
        iVar3 = 0;
        do {
          tlhs[iVar3].level = tlhs[iVar3].level + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < n_tlhs);
      }
      if (0 < n_trhs) {
        iVar3 = 0;
        do {
          trhs[iVar3].level = trhs[iVar3].level + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < n_trhs);
      }
      trhs[n_trhs].kind = OPERATOR;
      trhs[n_trhs].level = 1;
      trhs[n_trhs].token.variable = 1;
      n_trhs = n_trhs + 1;
      memmove(trhs + n_trhs,tlhs,n_tlhs << 4);
      n_trhs = n_trhs + n_tlhs;
      calc_simp(trhs,&n_trhs);
      local_24 = local_24 + 1.0;
      __fprintf_chk(gfp,1,"Running total = ");
      list_proc(trhs,n_trhs,0);
      __fprintf_chk(gfp,1,"\n");
      if ((0.0 < local_24) && (iVar2 == 0)) {
        memmove(tlhs,trhs,n_trhs << 4);
        n_tlhs = n_trhs;
        if (n_tokens < n_trhs + 2) {
          error_huge();
        }
        if (0 < n_tlhs) {
          iVar3 = 0;
          do {
            tlhs[iVar3].level = tlhs[iVar3].level + 1;
            iVar3 = iVar3 + 1;
          } while (iVar3 < n_tlhs);
        }
        tlhs[n_tlhs].kind = OPERATOR;
        tlhs[n_tlhs].level = 1;
        tlhs[n_tlhs].token.variable = 4;
        n_tlhs = n_tlhs + 1;
        tlhs[n_tlhs].kind = CONSTANT;
        tlhs[n_tlhs].level = 1;
        tlhs[n_tlhs].token.constant = local_24;
        n_tlhs = n_tlhs + 1;
        calc_simp(tlhs,&n_tlhs);
        __fprintf_chk(gfp,1,"Average = ");
        list_proc(tlhs,n_tlhs,0);
        __fprintf_chk(gfp,1,"\n");
      }
    }
    __fprintf_chk(gfp,1,"End.\n");
    iVar4 = 1;
  }
  return iVar4;
}



// WARNING: Unknown calling convention

int complex_func(char *cp,int imag_flag)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *cp_00;
  int iVar4;
  int *piVar5;
  int iVar6;
  int found_imag;
  int iVar7;
  int k;
  int iVar8;
  token_type *dest;
  int *local_58;
  token_type *local_44;
  int *local_3c;
  token_type *local_38;
  int local_34;
  long local_24;
  int local_20 [4];
  
  local_24 = 3;
  iVar3 = current_not_defined();
  iVar6 = cur_equation;
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = next_espace();
  if (n_rhs[iVar6] == 0) {
    local_38 = lhs[iVar6];
    local_3c = n_lhs;
    local_44 = lhs[iVar3];
    local_58 = n_lhs;
  }
  else {
    local_38 = rhs[iVar6];
    local_3c = n_rhs;
    local_44 = rhs[iVar3];
    local_58 = n_rhs;
  }
  local_3c = local_3c + iVar6;
  local_58 = local_58 + iVar3;
  if (*cp != '\0') {
    cp_00 = parse_var2(&local_24,cp);
    if (cp_00 == (char *)0x0) {
      return 0;
    }
    iVar4 = extra_characters(cp_00);
    if (iVar4 != 0) {
      return 0;
    }
  }
  simp_loop(local_38,local_3c);
  uf_simp(local_38,local_3c);
  factorv(local_38,local_3c,local_24);
  partial_flag = 0;
  uf_simp(local_38,local_3c);
  partial_flag = 1;
  local_20[0] = 1;
  local_44->kind = zero_token.kind;
  local_44->level = zero_token.level;
  (local_44->token).variable = zero_token.token.variable;
  *(undefined4 *)((int)&local_44->token + 4) = zero_token.token._4_4_;
  iVar4 = *local_3c;
  if (0 < iVar4) {
    bVar2 = false;
    bVar1 = false;
    local_34 = 0;
    iVar7 = 0;
    do {
      found_imag = 0;
      if (iVar7 < iVar4) {
        piVar5 = &local_38[iVar7].level;
        found_imag = 0;
        do {
          if ((*piVar5 == 1) && (((token_type *)(piVar5 + -1))->kind == OPERATOR)) {
            if (((storage_type *)(piVar5 + 1))->variable - 1U < 2) break;
          }
          else if ((((token_type *)(piVar5 + -1))->kind == VARIABLE) &&
                  (((storage_type *)(piVar5 + 1))->variable == local_24)) {
            found_imag = 1;
          }
          iVar7 = iVar7 + 1;
          piVar5 = piVar5 + 4;
        } while (iVar7 < iVar4);
        if (found_imag == 0) goto LAB_080555ca;
        bVar1 = true;
        iVar8 = iVar7;
      }
      else {
LAB_080555ca:
        bVar2 = true;
        iVar8 = iVar7;
      }
      if (found_imag == imag_flag) {
        if (local_34 == 0) {
          local_20[0] = 0;
        }
        memmove(local_44 + local_20[0],local_38 + local_34,(iVar8 - local_34) * 0x10);
        local_20[0] = local_20[0] + (iVar8 - local_34);
      }
      iVar4 = *local_3c;
      if (iVar4 <= iVar8) goto LAB_08055643;
      iVar7 = iVar8 + 1;
      local_34 = iVar8;
    } while( true );
  }
LAB_0805564f:
  warning("Expression was not a mix.");
LAB_0805565b:
  do {
    simp_loop(local_44,local_20);
    iVar4 = factor_plus(local_44,local_20,local_24,0.0);
  } while (iVar4 != 0);
  simp_divide(local_44,local_20);
  if (n_rhs[iVar6] != 0) {
    memmove(lhs[iVar3],lhs[iVar6],n_lhs[iVar6] << 4);
    n_lhs[iVar3] = n_lhs[iVar6];
  }
  *local_58 = local_20[0];
  cur_equation = iVar3;
  iVar6 = return_result(iVar3);
  return iVar6;
LAB_08055643:
  if ((bVar1) && (bVar2)) goto LAB_0805565b;
  goto LAB_0805564f;
}



// WARNING: Unknown calling convention

int imaginary_cmd(char *cp)

{
  int iVar1;
  
  iVar1 = complex_func(cp,1);
  return iVar1;
}



// WARNING: Unknown calling convention

int real_cmd(char *cp)

{
  int iVar1;
  
  iVar1 = complex_func(cp,0);
  return iVar1;
}



// WARNING: Unknown calling convention

int pause_cmd(char *cp)

{
  int iVar1;
  int iVar2;
  char *__s1;
  uint uVar3;
  char *cp1;
  int in_GS_OFFSET;
  char buf [4096];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  if (test_mode == 0) {
    iVar2 = isatty(0);
    if (iVar2 != 0) {
      if (*cp == '\0') {
        cp = "Please press the Enter key";
      }
      __snprintf_chk(prompt_str,0x50,1,0x50," ==== %s ==== ",cp);
      __s1 = get_string(buf,0x1000);
      if (__s1 != (char *)0x0) {
        iVar2 = strncasecmp(__s1,"quit",4);
        if (iVar2 != 0) {
          iVar2 = strncasecmp(__s1,"exit",4);
          uVar3 = (uint)(iVar2 != 0);
          goto LAB_08055807;
        }
      }
      uVar3 = 0;
      goto LAB_08055807;
    }
  }
  uVar3 = 1;
LAB_08055807:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



// WARNING: Unknown calling convention

int output_current_directory(FILE *ofp)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int in_GS_OFFSET;
  char buf [4096];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  if ((security_level < 3) && (ofp != (FILE *)0x0)) {
    pcVar2 = getcwd(buf,0x1000);
    if (pcVar2 != (char *)0x0) {
      __fprintf_chk(ofp,1,"directory = %s\n",buf);
      iVar3 = 1;
      goto LAB_0805588e;
    }
  }
  iVar3 = 0;
LAB_0805588e:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar3;
}



// WARNING: Unknown calling convention

int set_options(char *cp)

{
  char *pcVar1;
  int iVar2;
  char *cp1;
  char *cp_00;
  int iVar3;
  long lVar4;
  int i;
  uint uVar5;
  char *option_string;
  int negate;
  char *local_20 [4];
  
  iVar2 = quiet_mode;
LAB_080558b1:
  quiet_mode = iVar2;
  pcVar1 = skip_space(cp);
  if (*pcVar1 == '\0') {
    return 1;
  }
  cp = pcVar1;
  if ((security_level < 3) && (iVar2 = strncasecmp(pcVar1,"dir",3), iVar2 == 0)) {
    cp = skip_param(pcVar1);
    if ((*cp == '\0') && (local_20[0] = getenv("HOME"), local_20[0] != (char *)0x0)) {
      cp = local_20[0];
    }
    iVar2 = chdir(cp);
    if (iVar2 != 0) {
      error("Error changing directory.");
      return 0;
    }
    output_current_directory(stdout);
    return 1;
  }
  iVar2 = skip_no(&cp);
  pcVar1 = cp;
  cp_00 = skip_param(cp);
  cp = cp_00;
  iVar3 = strncasecmp(pcVar1,"debug",5);
  if (iVar3 == 0) {
    if (iVar2 == 0) {
      lVar4 = decstrtol(cp_00,local_20);
      if (cp == local_20[0]) {
        error("Please specify the debug level number.");
        return 0;
      }
      cp = local_20[0];
      debug_level = lVar4;
    }
    else {
      debug_level = 0;
    }
  }
  else {
    iVar3 = strncasecmp(pcVar1,"special",7);
    if (iVar3 == 0) {
      if (iVar2 != 0) {
        special_variable_characters[0] = '\0';
        return 1;
      }
      my_strlcpy(special_variable_characters,cp_00,0x100);
      return 1;
    }
    iVar3 = strncasecmp(pcVar1,"columns",6);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        lVar4 = decstrtol(cp_00,local_20);
        if ((lVar4 < 0) || (cp == local_20[0])) {
          error("Please specify how wide the screen is; 0 = infinite columns.");
          return 0;
        }
        cp = local_20[0];
        screen_columns = lVar4;
      }
      else {
        screen_columns = 0;
      }
      goto check_return;
    }
    iVar3 = strncasecmp(pcVar1,"wide",4);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        screen_columns = 0;
        screen_rows = 0;
        iVar2 = quiet_mode;
      }
      else {
        get_screen_size();
        iVar2 = quiet_mode;
      }
      goto LAB_080558b1;
    }
    iVar3 = strncasecmp(pcVar1,"precision",4);
    if (iVar3 == 0) {
      uVar5 = decstrtol(cp_00,local_20);
      if ((uVar5 < 0xf) && (cp != local_20[0])) {
        precision = uVar5;
        return 1;
      }
      error("Please specify a display precision between 0 and 14 digits.");
      return 0;
    }
    iVar3 = strcmp_tospace(pcVar1,"auto");
    if (iVar3 == 0) {
      autosolve = (int)(iVar2 == 0);
      autocalc = autosolve;
      autoselect = autosolve;
      iVar2 = quiet_mode;
      goto LAB_080558b1;
    }
    iVar3 = strncasecmp(pcVar1,"autosolve",9);
    if (iVar3 == 0) {
      autosolve = (int)(iVar2 == 0);
      iVar2 = quiet_mode;
      goto LAB_080558b1;
    }
    iVar3 = strncasecmp(pcVar1,"autocalc",8);
    if (iVar3 == 0) {
      autocalc = (int)(iVar2 == 0);
      iVar2 = quiet_mode;
      goto LAB_080558b1;
    }
    iVar3 = strncasecmp(pcVar1,"autoselect",10);
    if (iVar3 == 0) {
      autoselect = (int)(iVar2 == 0);
      iVar2 = quiet_mode;
      goto LAB_080558b1;
    }
    iVar3 = strncasecmp(pcVar1,"case",4);
    if (iVar3 == 0) {
      case_sensitive_flag = (int)(iVar2 == 0);
      iVar2 = quiet_mode;
      goto LAB_080558b1;
    }
    iVar3 = strncasecmp(pcVar1,"display2d",7);
    if (iVar3 == 0) {
      display2d = (int)(iVar2 == 0);
      iVar2 = quiet_mode;
      goto LAB_080558b1;
    }
    iVar3 = strncasecmp(pcVar1,"prompt",6);
    if (iVar3 == 0) goto LAB_080558b1;
    iVar3 = strncasecmp(pcVar1,"preserve",8);
    if (iVar3 == 0) {
      preserve_surds = (int)(iVar2 == 0);
      iVar2 = quiet_mode;
      goto LAB_080558b1;
    }
    iVar3 = strncasecmp(pcVar1,"rationalize",0xb);
    if (iVar3 == 0) {
      rationalize_denominators = (int)(iVar2 == 0);
      iVar2 = quiet_mode;
      goto LAB_080558b1;
    }
    iVar3 = strncasecmp(pcVar1,"modulus_mode",3);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        lVar4 = decstrtol(cp,local_20);
        if (((cp == local_20[0]) || (lVar4 < 0)) || (2 < lVar4)) {
          error("Please specify the modulus mode number (0, 1, or 2).");
          __printf_chk(1,"0 means modulus operator (%%) result has same sign as dividend,\n");
          __printf_chk(1,"1 means computed result always has same sign as the divisor,\n");
          __printf_chk(1,"2 means the result is always positive or zero.\n");
          __printf_chk(1,"Current value is %d.\n",modulus_mode);
          return 0;
        }
        cp = local_20[0];
        modulus_mode = lVar4;
      }
      else {
        modulus_mode = 0;
      }
      goto check_return;
    }
    iVar3 = strncasecmp(pcVar1,"color",5);
    if (iVar3 == 0) {
      reset_attr();
      color_flag = (int)(iVar2 == 0);
      iVar2 = quiet_mode;
      goto LAB_080558b1;
    }
    iVar3 = strncasecmp(pcVar1,"bold",4);
    if (iVar3 == 0) {
      reset_attr();
      bold_colors = (int)(iVar2 == 0);
      iVar2 = quiet_mode;
      goto LAB_080558b1;
    }
    iVar3 = strncasecmp(pcVar1,"finance",7);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        uVar5 = decstrtol(cp,local_20);
        if (cp == local_20[0]) {
          uVar5 = 2;
          if (*cp != '\0') {
            error("Please specify the number of digits.");
            return 0;
          }
        }
        else if (0xe < uVar5) {
          error("Minimum is 0, maximum is 14.");
          return 0;
        }
        cp = local_20[0];
        finance_option = uVar5;
      }
      else {
        finance_option = 0;
      }
    }
    else {
      iVar3 = strncasecmp(pcVar1,"factor_integers",6);
      if (iVar3 == 0) {
        factor_int_flag = (int)(iVar2 == 0);
        iVar2 = quiet_mode;
        goto LAB_080558b1;
      }
      iVar3 = strncasecmp(pcVar1,"right_associative_power",5);
      if (iVar3 == 0) {
        right_associative_power = (int)(iVar2 == 0);
        iVar2 = quiet_mode;
        goto LAB_080558b1;
      }
      iVar3 = strncasecmp(pcVar1,"negate_highest_precedence",6);
      if (iVar3 == 0) {
        negate_highest_precedence = (int)(iVar2 == 0);
        iVar2 = quiet_mode;
        goto LAB_080558b1;
      }
      if ((1 < security_level) || (iVar3 = strcmp_tospace(pcVar1,"save"), iVar3 != 0)) {
        error("Unknown set option.");
        return 0;
      }
      if (rc_file[0] == '\0') {
        error("Set options startup file name not set.");
        return 0;
      }
      if (iVar2 == 0) {
        iVar2 = save_set_options();
        if (iVar2 == 0) {
          return 0;
        }
      }
      else {
        iVar2 = unlink(rc_file);
        if (iVar2 == 0) {
          __printf_chk(1,"Set options startup file \"%s\" removed.\n",rc_file);
        }
      }
    }
  }
check_return:
  iVar2 = extra_characters(cp);
  return (uint)(iVar2 == 0);
}



// WARNING: Unknown calling convention

int set_cmd(char *cp)

{
  int iVar1;
  
  if (*cp == '\0') {
    __fprintf_chk(gfp,1,"Options are set as follows:\n\n");
    output_options(gfp);
    __fprintf_chk(gfp,1,"columns = %d\n",screen_columns);
    output_current_directory(gfp);
    iVar1 = 1;
  }
  else {
    iVar1 = set_options(cp);
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int push_en(int en)

{
  char *pcVar1;
  char *cp;
  
  if (readline_enabled != 0) {
    high_prec = 1;
    pcVar1 = list_equation(en,0);
    high_prec = 0;
    if (pcVar1 != (char *)0x0) {
      add_history(pcVar1);
      last_history_string = pcVar1;
      return 1;
    }
  }
  return 0;
}



// WARNING: Unknown calling convention

int push_cmd(char *cp)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10 [2];
  
  if (readline_enabled == 0) {
    error("Readline is currently turned off.");
    iVar1 = 0;
  }
  else {
    iVar2 = get_range_eol(&cp,local_10,&local_14);
    iVar1 = 0;
    if (iVar2 != 0) {
      if (local_10[0] <= local_14) {
        do {
          if ((n_lhs[local_10[0]] != 0) && (iVar2 = push_en(local_10[0]), iVar2 == 0)) {
            error("Push failed.");
            return 0;
          }
          local_10[0] = local_10[0] + 1;
        } while (local_10[0] <= local_14);
      }
      iVar1 = 1;
      if (-1 < debug_level) {
        __fprintf_chk(gfp,1,"%s\n","Expression pushed.  Press the UP key to access.");
        iVar1 = 1;
      }
    }
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int opt_es(token_type *equation,int *np)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int k;
  token_type *p1;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int i;
  int iVar8;
  int j;
  token_type *ptVar9;
  int found_se;
  int jj1;
  int iVar10;
  int level1;
  int level;
  int i1;
  int iVar11;
  int in_GS_OFFSET;
  int local_b4;
  int local_9c;
  int local_94;
  long local_8c;
  int local_88;
  char var_name_buf [100];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  if (0 < *np) {
    local_b4 = 1;
    while (iVar8 = *np, 1 < iVar8) {
      bVar3 = false;
      local_9c = 1;
      do {
        iVar7 = local_9c;
        if ((local_9c < iVar8) && (local_b4 < equation[local_9c].level)) {
          piVar4 = &equation[local_9c + 2].level;
          do {
            local_9c = local_9c + 2;
            if (iVar8 <= local_9c) break;
            iVar10 = *piVar4;
            piVar4 = piVar4 + 8;
          } while (local_b4 < iVar10);
        }
        if (local_9c != iVar7) {
          iVar8 = local_9c - (iVar7 + -1);
          if (6 < iVar8) {
            p1 = equation + iVar7 + -1;
            iVar10 = 1;
            while (iVar5 = *np, 1 < iVar5) {
              bVar3 = false;
              iVar11 = 1;
              do {
                jj1 = iVar11;
                if ((iVar11 < iVar5) && (iVar10 < equation[iVar11].level)) {
                  piVar4 = &equation[iVar11 + 2].level;
                  do {
                    jj1 = jj1 + 2;
                    if (iVar5 <= jj1) break;
                    iVar2 = *piVar4;
                    piVar4 = piVar4 + 8;
                  } while (iVar10 < iVar2);
                }
                if (jj1 != iVar11) {
                  if (local_9c < iVar11) {
                    local_94 = iVar11 + -1;
                    if (6 < jj1 - local_94) {
                      ptVar9 = equation + local_94;
                      iVar5 = se_compare(p1,iVar8,ptVar9,jj1 - local_94,&local_88);
                      if (iVar5 != 0) {
                        __snprintf_chk(var_name_buf,100,1,100,"temp%.0d",last_temp_var);
                        pcVar6 = parse_var(&local_8c,var_name_buf);
                        if (pcVar6 != (char *)0x0) {
                          iVar5 = last_temp_var + 1;
                          last_temp_var = 0;
                          if (-1 < iVar5) {
                            last_temp_var = iVar5;
                          }
                          iVar5 = next_espace();
                          lhs[iVar5]->level = 1;
                          lhs[iVar5]->kind = VARIABLE;
                          (lhs[iVar5]->token).variable = local_8c;
                          n_lhs[iVar5] = 1;
                          memmove(rhs[iVar5],p1,iVar8 * 0x10);
                          n_rhs[iVar5] = iVar8;
                          if (local_88 == 0) {
                            memmove(equation + iVar11,equation + jj1,(*np - jj1) * 0x10);
                            *np = *np + (iVar11 - jj1);
                          }
                          else {
                            memmove(equation + iVar11 + 2,equation + jj1,(*np - jj1) * 0x10);
                            *np = (iVar11 + 2 + *np) - jj1;
                            iVar10 = iVar10 + 1;
                            ptVar9->level = iVar10;
                            ptVar9->kind = CONSTANT;
                            (ptVar9->token).constant = -1.0;
                            ptVar9 = equation + iVar11;
                            ptVar9->level = iVar10;
                            ptVar9->kind = OPERATOR;
                            (ptVar9->token).variable = 3;
                            local_94 = iVar11 + 1;
                          }
                          ptVar9 = equation + local_94;
                          ptVar9->level = iVar10;
                          ptVar9->kind = VARIABLE;
                          (ptVar9->token).variable = local_8c;
                          memmove(equation + iVar7,equation + local_9c,(*np - local_9c) * 0x10);
                          *np = *np + (iVar7 - local_9c);
                          p1->level = local_b4;
                          p1->kind = VARIABLE;
                          (p1->token).variable = local_8c;
                          do {
                            iVar8 = find_more(equation,np,iVar5);
                          } while (iVar8 != 0);
                          simp_loop(rhs[iVar5],n_rhs + iVar5);
                          simp_loop(equation,np);
                          iVar7 = 0;
                          iVar8 = opt_en[0];
                          while (-1 < iVar8) {
                            iVar7 = iVar7 + 1;
                            iVar8 = opt_en[iVar7];
                          }
                          opt_en[iVar7] = iVar5;
                          opt_en[iVar7 + 1] = -1;
                          iVar8 = 1;
                          goto LAB_0805668c;
                        }
                        goto LAB_08056687;
                      }
                    }
                  }
                  bVar3 = true;
                }
                iVar11 = jj1 + 2;
                iVar5 = *np;
              } while (iVar11 < iVar5);
              if (!bVar3) break;
              iVar10 = iVar10 + 1;
            }
          }
          bVar3 = true;
        }
        local_9c = local_9c + 2;
        iVar8 = *np;
      } while (local_9c < iVar8);
      if (!bVar3) break;
      local_b4 = local_b4 + 1;
    }
  }
LAB_08056687:
  iVar8 = 0;
LAB_0805668c:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar8;
}



// WARNING: Unknown calling convention

int optimize_cmd(char *cp)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int j;
  int iVar5;
  int iVar6;
  int rv;
  int i;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  token_type **pptVar10;
  int *local_54;
  int local_50;
  int *local_4c;
  token_type **local_48;
  int *local_44;
  token_type **local_40;
  int local_38;
  int *local_34;
  int *local_30;
  int local_24;
  int local_20 [4];
  
  iVar4 = get_range_eol(&cp,local_20,&local_24);
  local_38 = 0;
  if (iVar4 != 0) {
    opt_en[0] = -1;
    piVar8 = n_lhs + local_20[0];
    iVar4 = local_20[0];
    for (iVar6 = local_20[0]; iVar6 <= local_24; iVar6 = iVar6 + 1) {
      if (*piVar8 != 0) {
        simp_equation(iVar6);
        iVar4 = iVar6;
      }
      piVar8 = piVar8 + 1;
    }
    local_38 = 0;
    local_24 = iVar4;
    do {
      pptVar10 = rhs + local_20[0];
      local_30 = n_rhs + local_20[0];
      bVar2 = false;
      for (iVar4 = local_20[0]; iVar6 = local_20[0], iVar4 <= local_24; iVar4 = iVar4 + 1) {
        for (; iVar6 <= local_24; iVar6 = iVar6 + 1) {
          if (iVar4 != iVar6) {
            while (iVar5 = find_more(*pptVar10,local_30,iVar6), iVar5 != 0) {
              bVar2 = true;
              local_38 = 1;
            }
          }
        }
        pptVar10 = pptVar10 + 1;
        local_30 = local_30 + 1;
      }
    } while (bVar2);
    local_54 = n_lhs + local_20[0];
    local_48 = rhs + local_20[0];
    local_44 = n_rhs + local_20[0];
    local_40 = lhs + local_20[0];
    local_50 = 0;
    local_4c = local_54;
    for (local_30 = (int *)local_20[0]; (int)local_30 <= local_24;
        local_30 = (int *)((int)local_30 + 1)) {
      if (*local_4c != 0) {
        do {
          simp_equation((int)local_30);
          bVar3 = bVar2;
          for (iVar4 = 0; -1 < opt_en[iVar4]; iVar4 = iVar4 + 1) {
            simp_equation(opt_en[iVar4]);
            if ((int *)opt_en[iVar4] != local_30) {
              while (iVar6 = find_more(*local_40,local_54,opt_en[iVar4]), iVar6 != 0) {
                bVar3 = true;
              }
              while (iVar6 = find_more(*local_48,local_44,opt_en[iVar4]), iVar6 != 0) {
                bVar3 = true;
              }
            }
          }
        } while (bVar3);
        while (iVar4 = opt_es(*local_40,local_54), iVar4 != 0) {
          local_38 = 1;
        }
        while (iVar4 = opt_es(*local_48,local_44), iVar4 != 0) {
          local_38 = 1;
        }
        if (local_38 != 0) {
          piVar8 = opt_en + local_50;
          for (local_34 = piVar8; iVar4 = local_50, piVar9 = piVar8, -1 < *local_34;
              local_34 = local_34 + 1) {
            for (; -1 < *piVar9; piVar9 = piVar9 + 1) {
              if (-1 < piVar9[1]) {
                piVar7 = opt_en + iVar4 + 1;
                do {
                  do {
                    iVar6 = find_more(rhs[*piVar7],n_rhs + *piVar7,*piVar9);
                  } while (iVar6 != 0);
                  do {
                    iVar6 = find_more(rhs[*piVar9],n_rhs + *piVar9,*piVar7);
                  } while (iVar6 != 0);
                  piVar1 = piVar7 + 1;
                  piVar7 = piVar7 + 1;
                } while (-1 < *piVar1);
              }
              iVar4 = iVar4 + 1;
            }
            do {
              iVar4 = opt_es(rhs[*local_34],n_rhs + *local_34);
            } while (iVar4 != 0);
          }
          while( true ) {
            iVar4 = *piVar8;
            piVar8 = piVar8 + 1;
            if (iVar4 < 0) break;
            list_sub(iVar4);
            local_50 = local_50 + 1;
          }
          list_sub((int)local_30);
        }
      }
      local_4c = local_4c + 1;
      local_48 = local_48 + 1;
      local_44 = local_44 + 1;
      local_40 = local_40 + 1;
      local_54 = local_54 + 1;
    }
    if (local_38 == 0) {
      error("Unable to find any repeated expressions.");
    }
  }
  return local_38;
}



// WARNING: Removing unreachable block (ram,0x08056dab)
// WARNING: Removing unreachable block (ram,0x08056db2)
// WARNING: Removing unreachable block (ram,0x08056db4)
// WARNING: Unknown calling convention

int sum_product(char *cp,int product_flag)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  int iVar5;
  int en;
  int iVar6;
  char *__nptr;
  int i;
  token_type *ptVar7;
  int ns;
  token_type *dest;
  token_type *equation;
  int in_GS_OFFSET;
  ushort in_FPUStatusWord;
  double dVar8;
  double local_105c;
  double local_1044;
  token_type *local_1038;
  char *local_1034;
  char *local_1030 [2];
  int local_1028;
  int local_1024;
  char buf [4096];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  local_1024 = 0;
  local_1030[0] = cp;
  iVar5 = current_not_defined();
  if (iVar5 == 0) {
    en = next_espace();
    iVar5 = n_rhs[cur_equation];
    if (iVar5 == 0) {
      iVar5 = n_lhs[cur_equation];
      local_1038 = lhs[cur_equation];
      equation = lhs[en];
    }
    else {
      local_1038 = rhs[cur_equation];
      equation = rhs[en];
    }
    if ((*local_1030[0] == '\0') ||
       (local_1030[0] = parse_var2(&local_1024,local_1030[0]), local_1030[0] != (char *)0x0)) {
      iVar6 = no_vars(local_1038,iVar5,&local_1024);
      if (iVar6 != 0) {
        error("Current expression contains no variables.");
        iVar5 = 0;
        goto LAB_080570a5;
      }
      if ((local_1024 != 0) || (iVar6 = prompt_var(&local_1024), iVar6 != 0)) {
        iVar6 = found_var(local_1038,iVar5,local_1024);
        if (iVar6 == 0) {
          error("Variable not found.");
          iVar5 = 0;
          goto LAB_080570a5;
        }
        if (*local_1030[0] == '\0') {
          list_var(local_1024,0);
          __snprintf_chk(prompt_str,0x50,1,0x50,"%s = ",var_str);
          local_1034 = get_string(buf,0x1000);
          if (local_1034 == (char *)0x0) goto LAB_080570a0;
        }
        else {
          if (*local_1030[0] == '=') {
            local_1030[0] = local_1030[0] + 1;
          }
          local_1034 = local_1030[0];
        }
        local_1044 = strtod(local_1034,local_1030);
        if (local_1034 == local_1030[0]) {
          error("Number expected.");
          iVar5 = 0;
          goto LAB_080570a5;
        }
        in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
        if (1000000000000000.0 <= ABS(local_1044)) {
          error("Number too large.");
          iVar5 = 0;
          goto LAB_080570a5;
        }
        local_1030[0] = skip_space(local_1030[0]);
        iVar6 = strcmp_tospace(local_1030[0],"to");
        if (iVar6 == 0) {
          local_1030[0] = skip_param(local_1030[0]);
        }
        local_1034 = local_1030[0];
        if (*local_1030[0] == '\0') {
          my_strlcpy(prompt_str,"To: ",0x50);
          local_1034 = get_string(buf,0x1000);
          if (local_1034 == (char *)0x0) goto LAB_080570a0;
        }
        dVar8 = strtod(local_1034,local_1030);
        if (local_1034 == local_1030[0]) {
          error("Number expected.");
          iVar5 = 0;
          goto LAB_080570a5;
        }
        in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
        if (1000000000000000.0 <= ABS(dVar8)) {
          error("Number too large.");
          iVar5 = 0;
          goto LAB_080570a5;
        }
        __nptr = skip_space(local_1030[0]);
        local_1030[0] = __nptr;
        if (*__nptr != '\0') {
          local_105c = strtod(__nptr,local_1030);
          if (__nptr != local_1030[0]) {
            local_105c = ABS(local_105c);
            in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
            if ((0.0 < local_105c) && (local_105c < 1000000000000000.0)) goto LAB_08056d5c;
          }
          error("Invalid step.");
          iVar5 = 0;
          goto LAB_080570a5;
        }
        local_105c = 1.0;
LAB_08056d5c:
        iVar6 = extra_characters(local_1030[0]);
        if (iVar6 == 0) {
          bVar2 = local_1044 <= dVar8;
          dVar4 = ABS(local_1044 - dVar8) / local_105c;
          do {
            dVar4 = dVar4 - (dVar4 / 1.0) * 1.0;
          } while ((in_FPUStatusWord & 0x400) != 0);
          if (dVar4 != 0.0) {
            warning("End value not reached.");
          }
          if (product_flag == 0) {
            equation->kind = zero_token.kind;
            equation->level = zero_token.level;
            (equation->token).variable = zero_token.token.variable;
            *(undefined4 *)((int)&equation->token + 4) = zero_token.token._4_4_;
          }
          else {
            equation->kind = one_token.kind;
            equation->level = one_token.level;
            (equation->token).variable = one_token.token.variable;
            *(undefined4 *)((int)&equation->token + 4) = one_token.token._4_4_;
          }
          local_1028 = 1;
          while( true ) {
            if (bVar2) {
              bVar3 = local_1044 <= dVar8;
            }
            else {
              bVar3 = dVar8 <= local_1044;
            }
            if (!bVar3) break;
            if (n_tokens < iVar5 + 1 + local_1028) {
              error_huge();
            }
            memmove(tlhs,local_1038,iVar5 << 4);
            n_tlhs = iVar5;
            if (0 < iVar5) {
              i = 0;
              do {
                ptVar7 = tlhs + i;
                if ((ptVar7->kind == VARIABLE) && ((ptVar7->token).variable == local_1024)) {
                  ptVar7->kind = CONSTANT;
                  tlhs[i].token.constant = local_1044;
                }
                i = i + 2;
              } while (i < n_tlhs);
              if (0 < n_tlhs) {
                iVar6 = 0;
                do {
                  tlhs[iVar6].level = tlhs[iVar6].level + 1;
                  iVar6 = iVar6 + 1;
                } while (iVar6 < n_tlhs);
              }
            }
            if (0 < local_1028) {
              iVar6 = 0;
              ptVar7 = equation;
              do {
                ptVar7->level = ptVar7->level + 1;
                iVar6 = iVar6 + 1;
                ptVar7 = ptVar7 + 1;
              } while (iVar6 < local_1028);
            }
            equation[local_1028].kind = OPERATOR;
            equation[local_1028].level = 1;
            if (product_flag == 0) {
              equation[local_1028].token.variable = 1;
            }
            else {
              equation[local_1028].token.variable = 3;
            }
            local_1028 = local_1028 + 1;
            memmove(equation + local_1028,tlhs,n_tlhs << 4);
            local_1028 = local_1028 + n_tlhs;
            calc_simp(equation,&local_1028);
            if (bVar2) {
              local_1044 = local_1044 + local_105c;
            }
            else {
              local_1044 = local_1044 - local_105c;
            }
          }
          if (n_rhs[cur_equation] == 0) {
            n_lhs[en] = local_1028;
          }
          else {
            n_rhs[en] = local_1028;
            memmove(lhs[en],lhs[cur_equation],n_lhs[cur_equation] << 4);
            n_lhs[en] = n_lhs[cur_equation];
          }
          iVar5 = return_result(en);
          goto LAB_080570a5;
        }
      }
    }
  }
LAB_080570a0:
  iVar5 = 0;
LAB_080570a5:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar5;
}



// WARNING: Unknown calling convention

int product_cmd(char *cp)

{
  int iVar1;
  
  iVar1 = sum_product(cp,1);
  return iVar1;
}



// WARNING: Unknown calling convention

int sum_cmd(char *cp)

{
  int iVar1;
  
  iVar1 = sum_product(cp,0);
  return iVar1;
}



// WARNING: Unknown calling convention

int solve_cmd(char *cp)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *cp1;
  int contains_infinity;
  token_type *ptVar9;
  int *np;
  int *np_00;
  int i;
  int j;
  int verify_flag;
  int once_through;
  int in_GS_OFFSET;
  token_type want;
  int local_1028;
  long local_1024;
  char buf [4096];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  if ((((cur_equation < 0) || (n_equations <= cur_equation)) || (n_lhs[cur_equation] < 1)) ||
     (n_rhs[cur_equation] < 1)) {
    error("No current equation.");
    iVar5 = 0;
    goto LAB_080575d3;
  }
  iVar5 = next_espace();
  iVar6 = strcmp_tospace(cp,"verify");
  if (iVar6 == 0) {
    cp = skip_param(cp);
  }
  iVar7 = strcmp_tospace(cp,"for");
  if (((iVar7 == 0) && (pcVar8 = skip_param(cp), *pcVar8 != '\0')) || (pcVar8 = cp, *cp != '\0')) {
LAB_080571de:
    if (iVar6 != 0) {
      pcVar8 = parse_equation(iVar5,pcVar8);
      if ((pcVar8 != (char *)0x0) && (iVar6 = solve_espace(iVar5,cur_equation), iVar6 != 0)) {
        iVar5 = return_result(cur_equation);
        goto LAB_080575d3;
      }
    }
    else {
      pcVar8 = parse_var2(&local_1024,pcVar8);
      if ((pcVar8 == (char *)0x0) || (iVar6 = extra_characters(pcVar8), iVar6 != 0))
      goto LAB_080575ce;
      copy_espace(cur_equation,iVar5);
      want.level = 1;
      want.kind = VARIABLE;
      want.token.variable = local_1024;
      iVar6 = solve_sub(&want,1,lhs[cur_equation],n_lhs + cur_equation,rhs[cur_equation],
                        n_rhs + cur_equation);
      if (0 < iVar6) {
        return_result(cur_equation);
        iVar6 = compare_es(cur_equation,iVar5);
        if (iVar6 == 0) {
          iVar6 = n_rhs[cur_equation];
          if (0 < iVar6) {
            ptVar9 = rhs[cur_equation];
            j = 0;
            do {
              if ((ptVar9->kind == VARIABLE) && (((ptVar9->token).variable & 0x3fffU) == 4)) {
                bVar4 = true;
                goto LAB_0805735a;
              }
              j = j + 2;
              ptVar9 = ptVar9 + 2;
            } while (j < iVar6);
          }
          bVar4 = false;
LAB_0805735a:
          np = n_lhs + iVar5;
          subst_var_with_exp(lhs[iVar5],np,rhs[cur_equation],iVar6,local_1024);
          np_00 = n_rhs + iVar5;
          subst_var_with_exp(rhs[iVar5],np_00,rhs[cur_equation],n_rhs[cur_equation],local_1024);
          calc_simp(lhs[iVar5],np);
          calc_simp(rhs[iVar5],np_00);
          bVar3 = false;
          while( true ) {
            iVar6 = exp_contains_infinity(lhs[iVar5],n_lhs[iVar5]);
            if ((iVar6 == 0) && (iVar6 = exp_contains_infinity(rhs[iVar5],n_rhs[iVar5]), iVar6 == 0)
               ) {
              iVar6 = se_compare(lhs[iVar5],n_lhs[iVar5],rhs[iVar5],n_rhs[iVar5],&local_1028);
              if ((iVar6 != 0) && (local_1028 == 0)) {
                if (bVar4) {
                  __printf_chk(1,"Solutions verified.\n");
                }
                else {
                  __printf_chk(1,"Solution verified.\n");
                }
                n_lhs[iVar5] = 0;
                n_rhs[iVar5] = 0;
                iVar5 = 1;
                goto LAB_080575d3;
              }
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((bVar2) || (bVar3)) break;
            symb_flag = symblify;
            simpa_side(lhs[iVar5],np,1,0);
            simpa_side(rhs[iVar5],np_00,1,0);
            symb_flag = 0;
            bVar3 = true;
          }
          error("Solution might be incorrect.");
          n_lhs[iVar5] = 0;
          n_rhs[iVar5] = 0;
          iVar5 = 2;
        }
        else {
          if (-1 < debug_level) {
            __fprintf_chk(gfp,1,"%s\n","Nothing was done, so no need to verify solution.");
          }
          n_lhs[iVar5] = 0;
          n_rhs[iVar5] = 0;
          iVar5 = 1;
        }
        goto LAB_080575d3;
      }
      __printf_chk(1,"Solve failed.\n");
    }
    n_lhs[iVar5] = 0;
    n_rhs[iVar5] = 0;
    iVar5 = 0;
  }
  else {
    my_strlcpy(prompt_str,"Enter variable to solve for: ",0x50);
    pcVar8 = get_string(buf,0x1000);
    if (pcVar8 != (char *)0x0) goto LAB_080571de;
LAB_080575ce:
    iVar5 = 0;
  }
LAB_080575d3:
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Type propagation algorithm not settling
// WARNING: Unknown calling convention

int plot_cmd(char *cp)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int free_cp;
  int in_GS_OFFSET;
  char cl [4096];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  if (security_level != 0) {
    error("Command disabled.");
    iVar4 = 0;
    goto LAB_08057879;
  }
  cVar2 = *cp;
  bVar3 = false;
  pcVar5 = cp;
  if (cVar2 == '\0') {
    iVar4 = current_not_defined();
    if (iVar4 == 0) {
      if (n_rhs[cur_equation] == 0) {
        cp = list_expression(lhs[cur_equation],n_lhs[cur_equation],3);
      }
      else {
        cp = list_expression(rhs[cur_equation],n_rhs[cur_equation],3);
      }
      if (cp != (char *)0x0) {
        cVar2 = *cp;
        if (cVar2 != '\0') {
          bVar3 = true;
          pcVar5 = cp;
          goto joined_r0x080576f2;
        }
        bVar3 = true;
        goto LAB_08057750;
      }
    }
LAB_08057874:
    iVar4 = 0;
  }
  else {
joined_r0x080576f2:
    do {
      if ((cVar2 == '\'') || (cVar2 == '\\')) {
        if (pcVar5 != (char *)0x0) {
          error("Invalid character in expression string.");
          if (!bVar3) goto LAB_08057874;
          free(cp);
          iVar4 = 0;
          goto LAB_08057879;
        }
        break;
      }
      pcVar5 = pcVar5 + 1;
      cVar2 = *pcVar5;
    } while (cVar2 != '\0');
LAB_08057750:
    pcVar5 = strchr(cp,0x79);
    if (pcVar5 == (char *)0x0) {
      __printf_chk(1,"Performing 2D plot...\n");
      __snprintf_chk(cl,0x1000,1,0x1000,"echo \'set grid; plot %s\'|gnuplot -persist",cp);
    }
    else {
      __printf_chk(1,"Performing 3D surface plot...\n");
      __snprintf_chk(cl,0x1000,1,0x1000,"echo \'set grid; splot %s\'|gnuplot -persist",cp);
    }
    if (bVar3) {
      free(cp);
    }
    iVar4 = shell_out(cl);
    if (iVar4 == 0) {
      iVar4 = 1;
      if (0 < debug_level) {
        __printf_chk(1,"Command line = \"%s\".\n",cl);
        iVar4 = 1;
      }
    }
    else {
      error("Error trying to run gnuplot.");
      __printf_chk(1,"Command line = \"%s\".\n",cl);
      iVar4 = 0;
    }
  }
LAB_08057879:
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention

int read_sub(FILE *fp)

{
  int iVar1;
  char *cp;
  int iVar2;
  char *cp_00;
  int rv;
  jmp_buf save_save;
  
  memmove(save_save,jmp_save,0x9c);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_save);
  if (iVar1 == 0) {
    while( true ) {
      cp_00 = fgets((char *)tlhs,n_tokens << 4,(FILE *)fp);
      if (cp_00 == (char *)0x0) break;
      iVar2 = display_process(cp_00);
      if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
        __longjmp_chk(jmp_save,3);
      }
    }
  }
  else {
    clean_up();
    if (iVar1 == 0xe) {
      error("Expression too large.");
    }
  }
  memmove(jmp_save,save_save,0x9c);
  return iVar1;
}



// WARNING: Unknown calling convention

int read_file(char *cp)

{
  int iVar1;
  uint uVar2;
  FILE *fp_00;
  int iVar3;
  FILE *fp;
  int rv;
  int in_GS_OFFSET;
  char buf [4096];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  if (*cp == '\0') {
    error("No file name specified.");
    uVar2 = 0;
  }
  else {
    __snprintf_chk(buf,0x1000,1,0x1000,"%s.in",cp);
    fp_00 = fopen(buf,"r");
    if (fp_00 == (FILE *)0x0) {
      fp_00 = fopen(cp,"r");
      if (fp_00 == (FILE *)0x0) {
        error("Can\'t open input file.");
        uVar2 = 0;
        goto LAB_08057a7a;
      }
    }
    else {
      cp = buf;
    }
    iVar3 = read_sub((FILE *)fp_00);
    if (iVar3 == 0) {
      if (quiet_mode == 0) {
        __printf_chk(1,"Finished reading file \"%s\".\n",cp);
      }
    }
    else {
      __printf_chk(1,"Read operation aborted.\n");
    }
    fclose(fp_00);
    uVar2 = (uint)(iVar3 == 0);
  }
LAB_08057a7a:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



// WARNING: Unknown calling convention

int read_cmd(char *cp)

{
  int iVar1;
  
  if (security_level < 3) {
    iVar1 = read_file(cp);
  }
  else {
    error("Command disabled.");
    iVar1 = 0;
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int edit_sub(char *cp)

{
  int iVar1;
  char *pcVar2;
  char *cp1;
  int iVar3;
  int in_GS_OFFSET;
  char cl [4096];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  do {
    pcVar2 = getenv("EDITOR");
    if (pcVar2 == (char *)0x0) {
      error("EDITOR environment variable not set.");
      iVar3 = 0;
      goto LAB_08057ba2;
    }
    __snprintf_chk(cl,0x1000,1,0x1000,"%s %s",pcVar2,cp);
    iVar3 = shell_out(cl);
    if (iVar3 != 0) {
      error("Error executing editor, check EDITOR environment variable.");
      __printf_chk(1,"Command line = \"%s\".\n",cl);
      iVar3 = 0;
      goto LAB_08057ba2;
    }
    clear_all();
    iVar3 = read_cmd(cp);
    if (iVar3 != 0) break;
    iVar3 = pause_cmd("Prepare to rerun the editor");
  } while (iVar3 != 0);
  iVar3 = 1;
LAB_08057ba2:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar3;
}



// WARNING: Unknown calling convention

int edit_cmd(char *cp)

{
  int iVar1;
  int fd;
  FILE *__stream;
  int iVar2;
  int rv;
  FILE *fp;
  int in_GS_OFFSET;
  char tmp_file [4096];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  if (security_level == 0) {
    clean_up();
    if (*cp == '\0') {
      my_strlcpy(tmp_file,"/tmp/mathomatic.XXXXXX",0x1000);
      iVar2 = mkstemp(tmp_file);
      if (-1 < iVar2) {
        __stream = fdopen(iVar2,"w+");
        if (__stream != (FILE *)0x0) {
          high_prec = 1;
          gfp = (FILE *)__stream;
          list_cmd("all");
          high_prec = 0;
          gfp = default_out;
          fclose(__stream);
          iVar2 = edit_sub(tmp_file);
          unlink(tmp_file);
          goto LAB_08057cdc;
        }
      }
      error("Can\'t create temporary file.");
      iVar2 = 0;
    }
    else {
      iVar2 = access(cp,6);
      if (iVar2 == 0) {
        iVar2 = edit_sub(cp);
      }
      else {
        error("You can only edit existing/writable files or all equations.");
        iVar2 = 0;
      }
    }
  }
  else {
    error("Command disabled.");
    iVar2 = 0;
  }
LAB_08057cdc:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar2;
}



// WARNING: Unknown calling convention

int display_cmd(char *cp)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *cp1;
  int local_c0;
  jmp_buf save_save;
  int local_14;
  int local_10 [2];
  
  iVar2 = strcmp_tospace(cp,"factor");
  if (iVar2 == 0) {
    cp = skip_param(cp);
  }
  local_c0 = 0;
  while( true ) {
    pcVar1 = cp;
    iVar3 = get_range(&cp,local_10,&local_14);
    if (iVar3 == 0) {
      return 0;
    }
    if ((*cp != '\0') && (pcVar1 == cp)) break;
    if (local_10[0] <= local_14) {
      do {
        iVar3 = local_c0;
        if (0 < n_lhs[local_10[0]]) {
          memmove(save_save,jmp_save,0x9c);
          iVar4 = _setjmp((__jmp_buf_tag *)jmp_save);
          if (iVar4 == 0) {
            make_fractions_and_group(local_10[0]);
            if ((iVar2 == 0) || (factor_int_flag != 0)) {
              factor_int_sub(local_10[0]);
            }
            memmove(jmp_save,save_save,0x9c);
            iVar4 = flist_equation(local_10[0]);
            iVar3 = 1;
            if (iVar4 < 1) {
              iVar3 = local_c0;
            }
          }
          else {
            memmove(jmp_save,save_save,0x9c);
            __printf_chk(1,"Skipping equation number %d.\n",local_10[0] + 1);
          }
        }
        local_c0 = iVar3;
        local_10[0] = local_10[0] + 1;
      } while (local_10[0] <= local_14);
    }
    if (*cp == '\0') {
      return local_c0;
    }
  }
  error("Invalid argument.");
  return 0;
}



// WARNING: Unknown calling convention

int eliminate_cmd(char *cp)

{
  uint uVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long v1;
  token_type *ptVar9;
  int i;
  uint uVar10;
  int n;
  long last_v;
  undefined4 *puVar11;
  int in_GS_OFFSET;
  int local_2048;
  int local_2038;
  uint local_2034;
  char *local_2030 [2];
  long va [1000];
  long local_1088;
  char buf [4096];
  char used [100];
  int local_20;
  
  local_2030[0] = cp;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  puVar11 = (undefined4 *)used;
  for (iVar8 = 0x19; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  iVar8 = current_not_defined();
  if (iVar8 == 0) {
    iVar8 = strcmp_tospace(local_2030[0],"repeat");
    if (iVar8 == 0) {
      repeat_flag = 1;
      local_2030[0] = skip_param(local_2030[0]);
    }
    if (*local_2030[0] != '\0') {
LAB_08057f75:
      pcVar3 = local_2030[0];
      local_2048 = 0;
      bVar2 = false;
      local_2038 = 0;
      iVar8 = 0;
      local_2030[0] = pcVar3;
LAB_08057fa4:
      do {
        if (local_2038 == 0) {
          if (*local_2030[0] == '\0') {
            if ((repeat_flag == 0) || (!bVar2)) goto LAB_08058156;
            bVar2 = false;
            local_2030[0] = pcVar3;
          }
          else {
            iVar5 = is_all(local_2030[0]);
            if (iVar5 == 0) {
              local_2030[0] = parse_var2(&local_1088,local_2030[0]);
              if (local_2030[0] != (char *)0x0) goto LAB_08058188;
              goto LAB_080582f5;
            }
            local_2030[0] = skip_param(local_2030[0]);
            iVar5 = n_lhs[cur_equation];
            local_2034 = 0;
            while( true ) {
              do {
                uVar4 = 0xffffffff;
                if (0 < iVar5) {
                  ptVar9 = lhs[cur_equation];
                  iVar8 = 0;
                  uVar10 = 0xffffffff;
                  do {
                    uVar4 = uVar10;
                    if ((((ptVar9->kind == VARIABLE) &&
                         (uVar1 = (ptVar9->token).variable, (int)local_2034 < (int)uVar1)) &&
                        (uVar4 = uVar1, uVar10 != 0xffffffff)) && ((int)uVar10 < (int)uVar1)) {
                      uVar4 = uVar10;
                    }
                    iVar8 = iVar8 + 2;
                    ptVar9 = ptVar9 + 2;
                    uVar10 = uVar4;
                  } while (iVar8 < iVar5);
                }
                iVar8 = 0;
                if (0 < n_rhs[cur_equation]) {
                  ptVar9 = rhs[cur_equation];
                  do {
                    uVar10 = uVar4;
                    if (((ptVar9->kind == VARIABLE) &&
                        (uVar1 = (ptVar9->token).variable, (int)local_2034 < (int)uVar1)) &&
                       ((uVar10 = uVar1, uVar4 != 0xffffffff && ((int)uVar4 < (int)uVar1)))) {
                      uVar10 = uVar4;
                    }
                    uVar4 = uVar10;
                    iVar8 = iVar8 + 2;
                    ptVar9 = ptVar9 + 2;
                  } while (iVar8 < n_rhs[cur_equation]);
                }
                if (uVar4 == 0xffffffff) goto LAB_08057fa4;
                local_2034 = uVar4;
              } while ((uVar4 & 0x3fff) < 5);
              if (999 < local_2038) break;
              va[local_2038] = uVar4;
              local_2038 = local_2038 + 1;
            }
          }
          goto LAB_08057fa4;
        }
        local_2038 = local_2038 + -1;
        local_1088 = va[local_2038];
LAB_08058188:
        iVar5 = strcmp_tospace(local_2030[0],"using");
        if (iVar5 == 0) {
          local_2030[0] = skip_param(local_2030[0]);
          lVar6 = decstrtol(local_2030[0],local_2030);
          iVar8 = lVar6 + -1;
          iVar7 = not_defined(iVar8);
          if (iVar7 != 0) goto LAB_080582f5;
        }
        iVar7 = var_in_equation(cur_equation,local_1088);
        if (iVar7 == 0) {
          if (repeat_flag == 0) {
            list_var(local_1088,0);
            __printf_chk(1,"Variable (%s) not found in current equation.\n",var_str);
          }
        }
        else if (iVar5 != 0) {
          iVar8 = cur_equation;
          if (1 < n_equations) {
            iVar5 = 1;
            do {
              iVar7 = n_equations;
              if (0 < iVar8) {
                iVar7 = iVar8;
              }
              iVar8 = iVar7 + -1;
              if (((buf[iVar7 + 0xfff] == '\0') && (n_lhs[iVar8] != 0)) &&
                 ((n_rhs[iVar8] != 0 &&
                  ((iVar7 = var_in_equation(iVar8,local_1088), iVar7 != 0 &&
                   (iVar7 = elim_sub(iVar8,local_1088), iVar7 != 0)))))) goto LAB_080582d7;
              iVar5 = iVar5 + 1;
            } while (iVar5 < n_equations);
          }
        }
        else {
          iVar5 = elim_sub(iVar8,local_1088);
          if (iVar5 != 0) {
LAB_080582d7:
            used[iVar8] = '\x01';
            local_2048 = 1;
            bVar2 = true;
          }
        }
      } while( true );
    }
    my_strlcpy(prompt_str,"Enter variables to eliminate: ",0x50);
    local_2030[0] = get_string(buf,0x1000);
    if ((local_2030[0] != (char *)0x0) && (*local_2030[0] != '\0')) goto LAB_08057f75;
  }
LAB_080582f5:
  local_2048 = 0;
  goto LAB_080582ff;
LAB_08058156:
  if (local_2048 == 0) {
    error("No substitutions made.");
  }
  else {
    local_2048 = return_result(cur_equation);
  }
LAB_080582ff:
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return local_2048;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention

int simplify_cmd(char *cp)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int k1;
  int iVar7;
  int iVar8;
  byte bVar9;
  int k;
  token_type *ptVar10;
  int frac_flag;
  int symb;
  int sign_flag;
  int i1;
  long *plVar11;
  undefined4 *puVar12;
  int in_GS_OFFSET;
  byte bVar13;
  char *pcVar14;
  int local_25c;
  int local_258;
  int local_250;
  int local_248;
  int local_244;
  char *local_240 [2];
  long previous_solution_number [100];
  int local_a8;
  int local_a4;
  sign_array_type sa_value;
  sign_array_type sa_mark;
  int local_20;
  
  bVar13 = 0;
  local_240[0] = cp;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  local_25c = 0;
  bVar3 = false;
  bVar4 = false;
  local_258 = 0;
  local_244 = 0;
  do {
    pcVar14 = local_240[0];
    iVar5 = strncasecmp(local_240[0],"sign",4);
    if (iVar5 == 0) {
      bVar3 = true;
    }
    else {
      iVar5 = strncasecmp(pcVar14,"symbolic",4);
      if (iVar5 == 0) {
        local_244 = 1;
      }
      else {
        iVar5 = strcmp_tospace(pcVar14,"quickest");
        if (iVar5 == 0) {
          bVar4 = true;
        }
        else {
          iVar5 = strcmp_tospace(local_240[0],"quick");
          if (iVar5 == 0) {
            local_258 = 1;
          }
          else {
            iVar5 = strncasecmp(local_240[0],"fraction",4);
            if (iVar5 != 0) break;
            local_25c = 1;
          }
        }
      }
    }
    local_240[0] = skip_param(local_240[0]);
  } while( true );
  iVar6 = get_range_eol(local_240,&local_a4,&local_a8);
  iVar5 = 0;
  if (iVar6 != 0) {
    symb_flag = local_244;
    if (local_a4 <= local_a8) {
      do {
        if (n_lhs[local_a4] != 0) {
          if (bVar4) {
            simp_equation(local_a4);
          }
          else {
            simpa_repeat_side(lhs[local_a4],n_lhs + local_a4,local_258,local_25c);
            simpa_repeat_side(rhs[local_a4],n_rhs + local_a4,local_258,local_25c);
          }
          iVar5 = return_result(local_a4);
          if (iVar5 == 0) {
            symb_flag = 0;
            iVar5 = 0;
            goto LAB_08058a5c;
          }
          if (bVar3) {
            k1 = 0;
            plVar11 = previous_solution_number;
            for (iVar5 = 100; iVar5 != 0; iVar5 = iVar5 + -1) {
              *plVar11 = 0;
              plVar11 = plVar11 + (uint)bVar13 * -2 + 1;
            }
            puVar12 = (undefined4 *)sa_mark;
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar12 = 0;
              puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
            }
            iVar5 = n_lhs[local_a4];
            if (0 < iVar5) {
              do {
                if ((lhs[local_a4][k1].kind == VARIABLE) &&
                   (uVar1 = lhs[local_a4][k1].token.variable, (uVar1 & 0x3fff) == 4)) {
                  sa_mark[(int)uVar1 >> 0xe & 0x3f] = '\x01';
                }
                k1 = k1 + 2;
              } while (k1 < iVar5);
            }
            iVar5 = n_rhs[local_a4];
            if (0 < iVar5) {
              iVar6 = 0;
              do {
                if ((rhs[local_a4][iVar6].kind == VARIABLE) &&
                   (uVar1 = rhs[local_a4][iVar6].token.variable, (uVar1 & 0x3fff) == 4)) {
                  sa_mark[(int)uVar1 >> 0xe & 0x3f] = '\x01';
                }
                iVar6 = iVar6 + 2;
              } while (iVar6 < iVar5);
            }
            iVar5 = 0;
            iVar6 = 0;
            do {
              iVar6 = (iVar6 + 1) - (uint)(*(char *)((int)sa_mark + iVar5) == '\0');
              iVar5 = iVar5 + 1;
            } while (iVar5 != 0x40);
            if ((iVar6 != 0) && (iVar5 = (1 << ((byte)iVar6 & 0x1f)) + -1, -1 < iVar5)) {
              local_248 = 1;
              local_250 = 0;
              do {
                iVar6 = next_espace();
                copy_espace(local_a4,iVar6);
                iVar7 = 0;
                bVar9 = 0;
                do {
                  if (*(char *)((int)sa_mark + iVar7) != '\0') {
                    sa_value[iVar7] = (byte)(local_250 >> (bVar9 & 0x1f)) & 1;
                    bVar9 = bVar9 + 1;
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 != 0x40);
                if (0 < n_lhs[iVar6]) {
                  iVar7 = 0;
                  do {
                    ptVar10 = lhs[iVar6] + iVar7;
                    if ((ptVar10->kind == VARIABLE) && (((ptVar10->token).variable & 0x3fffU) == 4))
                    {
                      if (sa_value[(ptVar10->token).variable >> 0xe & 0x3f] == '\0') {
                        ptVar10->kind = CONSTANT;
                        lhs[iVar6][iVar7].token.constant = 1.0;
                      }
                      else {
                        ptVar10->kind = CONSTANT;
                        lhs[iVar6][iVar7].token.constant = -1.0;
                      }
                    }
                    iVar7 = iVar7 + 2;
                  } while (n_lhs[iVar6] != iVar7 && iVar7 <= n_lhs[iVar6]);
                }
                if (0 < n_rhs[iVar6]) {
                  iVar7 = 0;
                  do {
                    ptVar10 = rhs[iVar6] + iVar7;
                    if ((ptVar10->kind == VARIABLE) && (((ptVar10->token).variable & 0x3fffU) == 4))
                    {
                      if (sa_value[(ptVar10->token).variable >> 0xe & 0x3f] == '\0') {
                        ptVar10->kind = CONSTANT;
                        rhs[iVar6][iVar7].token.constant = 1.0;
                      }
                      else {
                        ptVar10->kind = CONSTANT;
                        rhs[iVar6][iVar7].token.constant = -1.0;
                      }
                    }
                    iVar7 = iVar7 + 2;
                  } while (n_rhs[iVar6] != iVar7 && iVar7 <= n_rhs[iVar6]);
                }
                iVar7 = 0;
                bVar2 = false;
                do {
                  if (*(char *)((int)sa_mark + iVar7) != '\0') {
                    if (bVar2) {
                      __fprintf_chk(gfp,1,&DAT_08075f0e);
                    }
                    else {
                      __fprintf_chk(gfp,1,"Solution number %ld with ",local_248);
                    }
                    list_var(iVar7 * 0x4000 + 4,0);
                    pcVar14 = var_str;
                    __fprintf_chk(gfp,1,"%s = ",var_str);
                    if (sa_value[iVar7] == '\0') {
                      __fprintf_chk(gfp,1,&DAT_08075f2c,pcVar14);
                      bVar2 = true;
                    }
                    else {
                      __fprintf_chk(gfp,1,&DAT_08075f2b,pcVar14);
                      bVar2 = true;
                    }
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 != 0x40);
                if (bVar2) {
                  __fprintf_chk(gfp,1,&DAT_08072669);
                }
                if (bVar4) {
                  simp_equation(iVar6);
                }
                else {
                  simpa_repeat_side(lhs[iVar6],n_lhs + iVar6,local_258,local_25c);
                  simpa_repeat_side(rhs[iVar6],n_rhs + iVar6,local_258,local_25c);
                }
                iVar7 = 0;
                do {
                  if ((previous_solution_number[iVar7] != 0) &&
                     (iVar8 = compare_es(iVar7,iVar6), iVar8 != 0)) {
                    n_lhs[iVar6] = 0;
                    n_rhs[iVar6] = 0;
                    __fprintf_chk(gfp,1,"is identical to solution number %ld.\n",
                                  previous_solution_number[iVar7]);
                    break;
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 != 100);
                if (n_lhs[iVar6] != 0) {
                  list_sub(iVar6);
                  previous_solution_number[iVar6] = local_248;
                }
                local_250 = local_250 + 1;
                local_248 = local_248 + 1;
              } while (local_250 <= iVar5);
            }
          }
        }
        local_a4 = local_a4 + 1;
      } while (local_a4 <= local_a8);
    }
    symb_flag = 0;
    iVar5 = 1;
  }
LAB_08058a5c:
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention

int calculate_cmd(char *cp)

{
  storage_type *psVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  token_type *ptVar9;
  byte bVar10;
  uint v_00;
  int k;
  int k1;
  long v;
  long last_v;
  int n;
  long iterations;
  undefined4 *puVar11;
  int in_GS_OFFSET;
  byte bVar12;
  char *pcVar13;
  token_type *local_10d4;
  long local_10d0;
  int local_10c8;
  int local_10bc;
  int local_10b8;
  uint local_10b4;
  char *local_10b0 [2];
  int local_10a8;
  uint local_10a4;
  char buf [4096];
  sign_array_type sa_value;
  sign_array_type sa_mark;
  int local_20;
  
  bVar12 = 0;
  local_10b0[0] = cp;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  local_10a4 = 0;
  iVar6 = current_not_defined();
  if (iVar6 == 0) {
    local_10bc = 0;
    do {
      iVar6 = strcmp_tospace(local_10b0[0],"factor");
      if (iVar6 == 0) {
        local_10bc = 1;
      }
      else {
        iVar7 = strcmp_tospace(local_10b0[0],"repeat");
        iVar6 = cur_equation;
        if (iVar7 != 0) goto LAB_08058b19;
        repeat_flag = 1;
      }
      local_10b0[0] = skip_param(local_10b0[0]);
    } while( true );
  }
LAB_080594ce:
  iVar7 = 0;
LAB_080594da:
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar7;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
LAB_08058b19:
  local_10c8 = n_rhs[cur_equation];
  if (local_10c8 == 0) {
    local_10d4 = lhs[cur_equation];
    local_10c8 = n_lhs[cur_equation];
  }
  else {
    local_10d4 = rhs[cur_equation];
  }
  local_10d0 = 1;
  if (*local_10b0[0] != '\0') {
    local_10b0[0] = parse_var2((long *)&local_10a4,local_10b0[0]);
    if (local_10b0[0] == (char *)0x0) goto LAB_080594ce;
    iVar7 = found_var(local_10d4,local_10c8,local_10a4);
    if (iVar7 == 0) {
      error("Specified iteration variable not found.");
      iVar7 = 0;
      goto LAB_080594da;
    }
    if (*local_10b0[0] == '\0') {
      my_strlcpy(prompt_str,"Enter number of iterations: ",0x50);
      local_10b0[0] = get_string(buf,0x1000);
      if (local_10b0[0] == (char *)0x0) goto LAB_080594ce;
    }
    local_10d0 = decstrtol(local_10b0[0],local_10b0);
    if ((*local_10b0[0] != '\0') || (local_10d0 < 0)) {
      error("Positive integer required.");
      iVar7 = 0;
      goto LAB_080594da;
    }
    if (local_10d0 == 0) {
      warning("Infinite iterations.");
      local_10d0 = 0x7ffffffe;
    }
  }
  do {
    n_trhs = local_10c8;
    memmove(trhs,local_10d4,local_10c8 << 4);
    if (local_10c8 < 1) {
      bVar4 = false;
    }
    else {
      bVar4 = false;
      local_10b4 = 0;
      while( true ) {
        v_00 = 0xffffffff;
        iVar7 = 0;
        ptVar9 = local_10d4;
        do {
          uVar5 = v_00;
          if ((((ptVar9->kind == VARIABLE) &&
               (uVar2 = (ptVar9->token).variable, (int)local_10b4 < (int)uVar2)) &&
              (uVar5 = uVar2, v_00 != 0xffffffff)) && ((int)v_00 < (int)uVar2)) {
            uVar5 = v_00;
          }
          v_00 = uVar5;
          iVar7 = iVar7 + 2;
          ptVar9 = ptVar9 + 2;
        } while (iVar7 < local_10c8);
        if (v_00 == 0xffffffff) break;
        local_10b4 = v_00;
        if ((4 < (v_00 & 0x3fff)) && (v_00 != local_10a4)) {
          list_var(v_00,0);
          __snprintf_chk(prompt_str,0x50,1,0x50,"Enter %s: ",var_str);
          iVar7 = get_expr(tlhs,&n_tlhs);
          if (iVar7 != 0) {
            if (0 < n_tlhs) {
              iVar7 = 0;
              do {
                if (tlhs[iVar7].kind == VARIABLE) {
                  psVar1 = &tlhs[iVar7].token;
                  psVar1->variable = -psVar1->variable;
                }
                iVar7 = iVar7 + 2;
              } while (iVar7 < n_tlhs);
            }
            subst_var_with_exp(trhs,&n_trhs,tlhs,n_tlhs,v_00);
            bVar4 = true;
          }
        }
      }
    }
    iVar7 = 0;
    if (0 < n_trhs) {
      do {
        ptVar9 = trhs + iVar7;
        if ((ptVar9->kind == VARIABLE) && ((ptVar9->token).variable < 0)) {
          (ptVar9->token).variable = -(ptVar9->token).variable;
        }
        iVar7 = iVar7 + 2;
      } while (iVar7 < n_trhs);
    }
    if (local_10a4 != 0) {
      list_var(local_10a4,0);
      __snprintf_chk(prompt_str,0x50,1,0x50,"Enter initial %s: ",var_str);
      iVar8 = get_expr(tes,&n_tes);
      iVar7 = repeat_flag;
      if (iVar8 == 0) goto LAB_080594da;
      calc_simp(tes,&n_tes);
      memmove(tlhs,trhs,n_trhs << 4);
      n_tlhs = n_trhs;
      if (0 < local_10d0) {
        iVar7 = 0;
        do {
          memmove(trhs,tlhs,n_tlhs << 4);
          n_trhs = n_tlhs;
          subst_var_with_exp(trhs,&n_trhs,tes,n_tes,local_10a4);
          calc_simp(trhs,&n_trhs);
          iVar8 = se_compare(trhs,n_trhs,tes,n_tes,&local_10a8);
          if ((iVar8 != 0) && (local_10a8 == 0)) {
            __fprintf_chk(gfp,1,"Convergence reached after %ld iterations.\n",iVar7 + 1);
            bVar4 = true;
            goto LAB_08059077;
          }
          memmove(tes,trhs,n_trhs << 4);
          n_tes = n_trhs;
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_10d0);
      }
      bVar4 = true;
    }
LAB_08059077:
    calc_simp(trhs,&n_trhs);
    puVar11 = (undefined4 *)sa_mark;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
    }
    if (0 < n_trhs) {
      iVar7 = 0;
      ptVar9 = trhs;
      do {
        if ((ptVar9->kind == VARIABLE) && (((ptVar9->token).variable & 0x3fffU) == 4)) {
          sa_mark[(ptVar9->token).variable >> 0xe & 0x3f] = '\x01';
        }
        iVar7 = iVar7 + 2;
        ptVar9 = ptVar9 + 2;
      } while (iVar7 < n_trhs);
    }
    bVar10 = 0;
    iVar7 = 0;
    do {
      bVar10 = (bVar10 + 1) - (*(char *)((int)sa_mark + iVar7) == '\0');
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x40);
    iVar7 = 1 << (bVar10 & 0x1f);
    if (iVar7 == 1) {
      __fprintf_chk(gfp,1,"\n");
LAB_08059505:
      local_10b8 = 0;
      do {
        memmove(tlhs,trhs,n_trhs << 4);
        n_tlhs = n_trhs;
        bVar10 = 0;
        iVar8 = 0;
        do {
          if (*(char *)((int)sa_mark + iVar8) != '\0') {
            sa_value[iVar8] = (byte)(local_10b8 >> (bVar10 & 0x1f)) & 1;
            bVar10 = bVar10 + 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0x40);
        if (0 < n_trhs) {
          iVar8 = 0;
          do {
            ptVar9 = tlhs + iVar8;
            if ((ptVar9->kind == VARIABLE) && (((ptVar9->token).variable & 0x3fffU) == 4)) {
              if (sa_value[(ptVar9->token).variable >> 0xe & 0x3f] == '\0') {
                ptVar9->kind = CONSTANT;
                tlhs[iVar8].token.constant = 1.0;
              }
              else {
                ptVar9->kind = CONSTANT;
                tlhs[iVar8].token.constant = -1.0;
              }
            }
            iVar8 = iVar8 + 2;
          } while (iVar8 < n_tlhs);
        }
        bVar3 = false;
        iVar8 = 0;
        do {
          if (*(char *)((int)sa_mark + iVar8) != '\0') {
            if (bVar3) {
              __fprintf_chk(gfp,1,&DAT_08075f0e);
            }
            else {
              __fprintf_chk(gfp,1,"Solution number %ld with ",local_10b8 + 1);
            }
            list_var(iVar8 * 0x4000 + 4,0);
            pcVar13 = var_str;
            __fprintf_chk(gfp,1,"%s = ",var_str);
            if (sa_value[iVar8] == '\0') {
              __fprintf_chk(gfp,1,&DAT_08075f2c,pcVar13);
              bVar3 = true;
            }
            else {
              __fprintf_chk(gfp,1,&DAT_08075f2b,pcVar13);
              bVar3 = true;
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0x40);
        if (bVar3) {
          __fprintf_chk(gfp,1,&DAT_08072669);
        }
        calc_simp(tlhs,&n_tlhs);
        if (local_10bc != 0) {
          simp_side(tlhs,&n_tlhs);
        }
        __fprintf_chk(gfp,1,&DAT_08077a28);
        if (n_rhs[iVar6] != 0) {
          list_proc(lhs[iVar6],n_lhs[iVar6],0);
          __fprintf_chk(gfp,1,&DAT_080759cf);
        }
        list_factor(tlhs,&n_tlhs,local_10bc);
        if ((n_tlhs < 10) && (iVar8 = make_fractions(tlhs,&n_tlhs), iVar8 != 0)) {
          group_proc(tlhs,&n_tlhs);
          __fprintf_chk(gfp,1,&DAT_080759cf);
          list_factor(tlhs,&n_tlhs,local_10bc);
        }
        __fprintf_chk(gfp,1,"\n\n");
        local_10b8 = local_10b8 + 1;
      } while (local_10b8 <= iVar7 + -1);
    }
    else {
      __fprintf_chk(gfp,1,"There are %ld solutions.\n",iVar7);
      __fprintf_chk(gfp,1,"\n");
      if (-1 < iVar7 + -1) goto LAB_08059505;
    }
  } while ((bVar4) && (repeat_flag != 0));
  iVar7 = 1;
  goto LAB_080594da;
}



// WARNING: Unknown calling convention

void org_up_level(token_type *bp,token_type *ep,int level,int invert)

{
  int iVar1;
  
  if (invert == 0) {
    if (bp <= ep) {
      do {
        bp->level = bp->level + -1;
        bp = bp + 1;
      } while (bp <= ep);
    }
  }
  else if (bp <= ep) {
    do {
      iVar1 = bp->level + -1;
      bp->level = iVar1;
      if ((iVar1 == level) && (bp->kind == OPERATOR)) {
        iVar1 = (bp->token).variable;
        if (iVar1 == 2) {
          (bp->token).variable = 1;
        }
        else if (iVar1 < 3) {
          if (iVar1 == 1) {
            (bp->token).variable = 2;
          }
        }
        else if (iVar1 == 3) {
          (bp->token).variable = 4;
        }
        else if (iVar1 == 4) {
          (bp->token).variable = 3;
        }
      }
      bp = bp + 1;
    } while (bp <= ep);
  }
  return;
}



// WARNING: Unknown calling convention

int org_recurse(token_type *equation,int *np,int loc,int level,int *elocp)

{
  token_type *ptVar1;
  token_type *ptVar2;
  int sub_op;
  int iVar3;
  int invert;
  uint uVar4;
  token_type *p1;
  token_type *ptVar5;
  int iVar6;
  int min1;
  int i;
  int iVar7;
  int iVar8;
  token_type *ep;
  long local_3c;
  int local_20 [4];
  
  ptVar5 = equation + loc;
  p1 = ptVar5 + 1;
  iVar8 = ptVar5->level;
  for (ptVar2 = p1;
      (ptVar2 < equation + *np &&
      ((iVar6 = ptVar2->level, iVar7 = iVar8, iVar8 <= iVar6 || (iVar7 = iVar6, level <= iVar6))));
      ptVar2 = ptVar2 + 2) {
    iVar8 = iVar7;
  }
  iVar6 = ((int)ptVar2 - (int)equation >> 4) + -1;
  if (elocp != (int *)0x0) {
    *elocp = iVar6;
  }
  if (iVar6 == loc) {
    iVar8 = level + -1;
    if (iVar8 < 1) {
      iVar8 = 1;
    }
    ptVar5->level = iVar8;
    local_3c = 0;
  }
  else {
    ptVar1 = ptVar5;
    if (level < iVar8) {
      for (; ptVar1 < ptVar2; ptVar1 = ptVar1 + 1) {
        ptVar1->level = ptVar1->level + (level - iVar8);
      }
    }
    if (p1 < ptVar2) {
      iVar8 = ptVar5[1].level;
      while (iVar8 != level) {
        if (ptVar2 <= p1 + 2) goto LAB_080596a9;
        iVar8 = p1[2].level;
        p1 = p1 + 2;
      }
      local_3c = (p1->token).variable;
    }
    else {
LAB_080596a9:
      local_3c = 0;
    }
    if (loc <= iVar6) {
      iVar8 = loc;
      do {
        ptVar2 = equation + iVar8;
        iVar7 = iVar8;
        if ((level < ptVar2->level) &&
           (iVar3 = org_recurse(equation,np,iVar8,level + 1,local_20), iVar7 = local_20[0],
           0 < iVar3)) {
          if (iVar3 < 3) {
            if (local_3c - 1U < 2) {
              uVar4 = 0;
              if (loc <= iVar8 + -1) {
                uVar4 = (uint)(equation[iVar8 + -1].token.variable == 2);
              }
              org_up_level(ptVar2,equation + local_20[0],level,uVar4);
              iVar7 = local_20[0];
            }
          }
          else if ((iVar3 < 5) && (local_3c - 3U < 2)) {
            uVar4 = 0;
            if (loc <= iVar8 + -1) {
              uVar4 = (uint)(equation[iVar8 + -1].token.variable == 4);
            }
            org_up_level(ptVar2,equation + local_20[0],level,uVar4);
            iVar7 = local_20[0];
          }
        }
        iVar8 = iVar7 + 2;
      } while (iVar8 <= iVar6);
    }
  }
  return local_3c;
}



// WARNING: Unknown calling convention

int simpb_vcmp(sort_type *p1,sort_type *p2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = p1->v;
  uVar2 = p2->v;
  if (((uVar1 & 0x3fff) != 4) == ((uVar2 & 0x3fff) == 4)) {
    if ((uVar1 & 0x3fff) != 4) {
      return 1;
    }
  }
  else {
    if (p2->count != p1->count) {
      return p2->count - p1->count;
    }
    if ((int)uVar2 <= (int)uVar1) {
      return (uint)(uVar1 != uVar2);
    }
  }
  return -1;
}



// WARNING: Unknown calling convention

int div_imaginary(token_type *equation,int *np)

{
  int *piVar1;
  token_type *ptVar2;
  token_type *ptVar3;
  int iVar4;
  int k;
  int ilevel;
  int iVar5;
  int j;
  uint uVar6;
  int iVar7;
  int iVar8;
  int n;
  int iVar9;
  token_type *ptVar10;
  token_type *__src;
  int iVar11;
  int local_4c;
  long local_48;
  uint local_44;
  uint local_38;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  iVar8 = *np;
  if (1 < iVar8) {
    __src = equation + 1;
    local_28 = 2;
    local_24 = 1;
    do {
      if (((__src->token).variable == 4) && (iVar9 = __src->level, (int)local_28 < iVar8)) {
        iVar7 = __src[1].level;
        if (iVar9 < iVar7) {
          local_44 = local_24;
          local_2c = 0xffffffff;
          local_38 = 0xffffffff;
          local_4c = -1;
          local_48 = 0;
          ptVar3 = __src + 2;
          uVar6 = local_28;
          ptVar10 = __src + 1;
          do {
            ptVar2 = ptVar3;
            if ((ptVar10->kind == OPERATOR) && (iVar7 == iVar9 + 1)) {
              local_48 = (ptVar10->token).variable;
              local_44 = uVar6;
              if ((-1 < (int)local_2c) && ((int)local_38 < 0)) {
                local_38 = uVar6;
              }
            }
            else if ((ptVar10->kind == VARIABLE) && ((ptVar10->token).variable == 3)) {
              if (-1 < (int)local_2c) {
                local_48 = 0;
                break;
              }
              local_4c = local_44 + 1;
              local_2c = uVar6;
            }
            uVar6 = uVar6 + 1;
            if (iVar8 <= (int)uVar6) break;
            iVar7 = ptVar2->level;
            ptVar3 = ptVar2 + 1;
            ptVar10 = ptVar2;
          } while (iVar9 < iVar7);
          if ((-1 < (int)local_2c) && ((int)local_38 < 0)) {
            local_38 = uVar6;
          }
          if ((-1 < (int)local_2c) && (local_48 - 1U < 2)) {
            ptVar3 = equation + local_2c;
            iVar7 = ptVar3->level;
            iVar5 = iVar7;
            if ((iVar9 + 1 == iVar7) ||
               (((iVar5 = iVar9 + 2, iVar5 == iVar7 &&
                 (((int)local_2c <= local_4c || (equation[local_2c - 1].token.variable == 3)))) &&
                (((int)local_38 <= (int)(local_2c + 1) ||
                 (equation[local_2c + 1].token.variable - 3U < 2)))))) {
              iVar11 = ~local_24 + uVar6;
              iVar7 = local_38 - local_4c;
              if (n_tokens < iVar11 + 7 + iVar8 + iVar7) {
                error_huge();
              }
              memmove(scratch,equation + local_24 + 1,iVar11 * 0x10);
              iVar8 = ~local_24 + local_2c;
              scratch[iVar8].kind = CONSTANT;
              scratch[iVar8].token.constant = 0.0;
              if (0 < iVar11) {
                iVar8 = 0;
                do {
                  scratch[iVar8].level = scratch[iVar8].level + 2;
                  iVar8 = iVar8 + 1;
                } while (iVar8 != iVar11);
              }
              iVar4 = iVar9 + 2;
              scratch[iVar11].level = iVar4;
              scratch[iVar11].kind = OPERATOR;
              scratch[iVar11].token.variable = 6;
              iVar8 = iVar11 + 1;
              scratch[iVar8].level = iVar4;
              scratch[iVar8].kind = CONSTANT;
              scratch[iVar8].token.constant = 2.0;
              iVar8 = iVar11 + 2;
              scratch[iVar8].level = iVar9 + 1;
              scratch[iVar8].kind = OPERATOR;
              scratch[iVar8].token.variable = 1;
              iVar8 = iVar11 + 3;
              memmove(scratch + iVar8,equation + local_4c,iVar7 * 0x10);
              iVar7 = iVar8 + iVar7;
              if (iVar8 < iVar7) {
                iVar9 = (iVar11 + 3) * 0x10;
                k = iVar8;
                do {
                  piVar1 = (int *)((int)&scratch->level + iVar9);
                  *piVar1 = *piVar1 + 2;
                  k = k + 1;
                  iVar9 = iVar9 + 0x10;
                } while (k < iVar7);
              }
              scratch[iVar7].level = iVar4;
              scratch[iVar7].kind = OPERATOR;
              scratch[iVar7].token.variable = 6;
              iVar9 = iVar7 + 1;
              scratch[iVar9].level = iVar4;
              scratch[iVar9].kind = CONSTANT;
              scratch[iVar9].token.constant = 2.0;
              iVar8 = (local_2c - local_4c) + iVar8;
              scratch[iVar8].kind = CONSTANT;
              scratch[iVar8].token.constant = 1.0;
              memmove(equation + local_2c + 2,ptVar3,(*np - local_2c) * 0x10);
              *np = *np + 2;
              iVar5 = iVar5 + 1;
              ptVar3->level = iVar5;
              ptVar3->kind = CONSTANT;
              (ptVar3->token).constant = -1.0;
              ptVar3 = equation + local_2c + 1;
              ptVar3->level = iVar5;
              ptVar3->kind = OPERATOR;
              (ptVar3->token).variable = 3;
              equation[local_2c + 2].level = iVar5;
              memmove(equation + iVar7 + 2 + local_28,__src,(*np - local_24) * 0x10);
              *np = iVar7 + 3 + *np;
              memmove(equation + local_24 + 1,scratch,(iVar7 + 2) * 0x10);
              equation[iVar7 + 2 + local_28].token.variable = 3;
              return 1;
            }
          }
        }
      }
      local_24 = local_24 + 2;
      __src = __src + 2;
      local_28 = local_28 + 2;
    } while ((int)local_24 < iVar8);
  }
  return 0;
}



// WARNING: Unknown calling convention

int simp2_power(token_type *equation,int *np)

{
  int iVar1;
  token_type *ptVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  token_type *ptVar7;
  int iVar8;
  int k;
  int iVar9;
  token_type *ptVar10;
  token_type *ptVar11;
  token_type *ptVar12;
  int level;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_20;
  
  iVar3 = *np;
  local_30 = 0;
  if (1 < iVar3) {
    local_20 = 1;
    ptVar10 = equation;
    do {
      ptVar11 = ptVar10 + 2;
      if (ptVar10[1].token.variable == 6) {
        iVar1 = ptVar10[1].level;
        local_2c = local_20 + 1;
        iVar9 = local_2c;
        if ((local_2c < iVar3) && (iVar6 = ptVar10[2].level, iVar1 <= iVar6)) {
          local_34 = 0;
          local_28 = -1;
          ptVar2 = ptVar10 + 3;
          ptVar12 = ptVar11;
          do {
            ptVar7 = ptVar2;
            if (iVar1 + 1 == iVar6) {
              if (ptVar12->kind == OPERATOR) {
                local_34 = (ptVar12->token).variable;
              }
              else if ((ptVar12->kind == CONSTANT) && ((ptVar12->token).constant < 0.0)) {
                local_28 = iVar9;
              }
            }
            iVar9 = iVar9 + 1;
            if (iVar3 <= iVar9) break;
            iVar6 = ptVar7->level;
            ptVar2 = ptVar7 + 1;
            ptVar12 = ptVar7;
          } while (iVar1 <= iVar6);
        }
        else {
          local_34 = 0;
          local_28 = -1;
        }
        if (((2 < iVar9 - local_20) || (ptVar11->kind != CONSTANT)) ||
           (0.0 <= ptVar10[2].token.constant)) {
          if (-1 < local_28) {
            local_2c = local_28;
            goto LAB_08059dc0;
          }
LAB_08059eb0:
          uVar5 = 0;
        }
        else {
LAB_08059dc0:
          if ((4 < local_34) || ((1 << ((byte)local_34 & 0x1f) & 0x19U) == 0)) goto LAB_08059eb0;
          if (n_tokens < iVar3 + 2) {
            error_huge();
          }
          equation[local_2c].token.constant = -equation[local_2c].token.constant;
          iVar3 = local_20 + -2;
          if ((-1 < iVar3) && (iVar1 <= ptVar10[-1].level)) {
            piVar4 = &ptVar10[-2].level;
            do {
              iVar3 = iVar3 + -1;
              if (iVar3 < 0) break;
              iVar6 = *piVar4;
              piVar4 = piVar4 + -4;
            } while (iVar1 <= iVar6);
          }
          iVar6 = iVar3 + 1;
          if (iVar6 < iVar9) {
            piVar4 = &equation[iVar6].level;
            iVar8 = iVar6;
            do {
              *piVar4 = *piVar4 + 1;
              iVar8 = iVar8 + 1;
              piVar4 = piVar4 + 4;
            } while (iVar8 < iVar9);
          }
          ptVar10 = equation + iVar6;
          memmove(equation + iVar3 + 3,ptVar10,(*np - iVar6) * 0x10);
          *np = *np + 2;
          ptVar10->level = iVar1;
          ptVar10->kind = CONSTANT;
          (ptVar10->token).constant = 1.0;
          ptVar10 = equation + iVar3 + 2;
          ptVar10->level = iVar1;
          ptVar10->kind = OPERATOR;
          (ptVar10->token).variable = 4;
          uVar5 = 1;
        }
        local_30 = local_30 | uVar5;
      }
      local_20 = local_20 + 2;
      iVar3 = *np;
      ptVar10 = ptVar11;
    } while (local_20 < iVar3);
  }
  return local_30;
}



// WARNING: Unknown calling convention

int simp_constant_power(token_type *equation,int *np)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int i;
  token_type *__src;
  int iVar6;
  uint local_20;
  
  if ((symb_flag == 0) || (iVar4 = *np, iVar4 < 2)) {
    local_20 = 0;
  }
  else {
    __src = equation + 3;
    local_20 = 0;
    iVar6 = 3;
    do {
      if (__src[-2].token.variable == 6) {
        iVar1 = __src[-2].level;
        if ((((iVar1 == __src[-3].level) && (__src[-3].kind == CONSTANT)) &&
            (iVar2 = __src[-1].level, iVar2 == iVar1 + 1)) &&
           (((__src[-1].kind == CONSTANT && (__src[-1].token.constant != 1.0)) &&
            ((iVar6 < iVar4 && (iVar2 == __src->level)))))) {
          if ((__src->token).variable != 3) {
            if ((__src->token).variable != 4) goto LAB_08059fdd;
            if (n_tokens < iVar4 + 2) {
              error_huge();
            }
            memmove(__src + 2,__src,(*np - iVar6) * 0x10);
            *np = *np + 2;
            __src[1].level = iVar2;
            __src[1].kind = CONSTANT;
            __src[1].token.constant = 1.0;
          }
          __src->level = iVar1;
          (__src->token).variable = 6;
          __src[-3].level = __src[-3].level + 1;
          __src[-2].level = __src[-2].level + 1;
          uVar5 = 1;
        }
        else {
LAB_08059fdd:
          uVar5 = 0;
        }
        local_20 = local_20 | uVar5;
      }
      iVar4 = *np;
      __src = __src + 2;
      bVar3 = iVar6 < iVar4;
      iVar6 = iVar6 + 2;
    } while (bVar3);
  }
  return local_20;
}



// WARNING: Removing unreachable block (ram,0x0805a1ea)
// WARNING: Removing unreachable block (ram,0x0805a1e6)
// WARNING: Removing unreachable block (ram,0x0805a1ec)
// WARNING: Removing unreachable block (ram,0x0805a272)
// WARNING: Removing unreachable block (ram,0x0805a26e)
// WARNING: Removing unreachable block (ram,0x0805a274)
// WARNING: Unknown calling convention

int rationalize(token_type *equation,int *np)

{
  double dVar1;
  int iVar2;
  token_type *ptVar3;
  int j;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int k1;
  int end_loc;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  token_type *ptVar11;
  uint uVar12;
  int i1;
  int *piVar13;
  storage_type *psVar14;
  int k;
  uint uVar15;
  int iVar16;
  ushort in_FPUStatusWord;
  ushort uVar17;
  int local_50;
  int local_3c;
  int local_34;
  uint local_30;
  uint local_24;
  uint local_20;
  
  local_50 = 0;
  local_20 = 1;
  uVar8 = local_20;
LAB_0805a031:
  do {
    local_20 = uVar8;
    iVar4 = *np;
    if (iVar4 <= (int)local_20) {
      return local_50;
    }
    if (equation[local_20].token.variable == 4) {
      iVar2 = equation[local_20].level;
      uVar8 = local_20 + 2;
      if (((int)uVar8 < iVar4) && (iVar6 = equation[uVar8].level, iVar2 < iVar6)) {
        piVar7 = &equation[local_20 + 4].level;
        local_34 = 0;
        local_24 = 0xffffffff;
        iVar5 = iVar2 + 1;
        uVar10 = uVar8;
        do {
          uVar9 = uVar10;
          if ((iVar6 == iVar5) && (local_34 = local_34 + 1, (int)local_24 < 0)) {
            local_24 = uVar9;
          }
          uVar10 = uVar9 + 2;
          if (iVar4 <= (int)uVar10) break;
          iVar6 = *piVar7;
          piVar7 = piVar7 + 8;
        } while (iVar2 < iVar6);
        if ((-1 < (int)local_24) && (equation[local_24].token.variable - 1U < 2)) {
          local_30 = local_20;
          iVar4 = iVar2 + 2;
          do {
            uVar15 = local_24 - 2;
            if ((int)local_30 < (int)uVar15) {
              ptVar11 = equation + uVar15;
              if (ptVar11->level != iVar4) {
                ptVar3 = equation + (local_24 - 4);
                uVar12 = uVar15;
                do {
                  ptVar11 = ptVar3;
                  uVar12 = uVar12 - 2;
                  if ((int)uVar12 <= (int)local_30) goto LAB_0805a4c9;
                  ptVar3 = ptVar11 + -2;
                } while (ptVar11->level != iVar4);
              }
              iVar6 = (ptVar11->token).variable;
              if (2 < iVar6) {
                local_3c = 1;
                if (4 < iVar6) {
                  if (iVar6 != 6) goto LAB_0805a4c9;
                  local_3c = 2;
                }
                piVar7 = &equation[uVar15].level;
                piVar13 = &equation[local_24 - 1].level;
                uVar17 = in_FPUStatusWord;
                do {
                  iVar6 = *piVar7;
                  in_FPUStatusWord = uVar17;
                  if ((((iVar6 == iVar4) || ((iVar6 == iVar2 + 3 && (local_3c == 1)))) &&
                      (((storage_type *)(piVar7 + 1))->variable == 6)) &&
                     ((iVar6 == *piVar13 && (((token_type *)(piVar13 + -1))->kind == CONSTANT)))) {
                    dVar1 = ((storage_type *)(piVar13 + 1))->constant;
                    do {
                      dVar1 = dVar1 - (dVar1 / 1.0) * 1.0;
                    } while ((uVar17 & 0x400) != 0);
                    in_FPUStatusWord = uVar17 & 0xfdff;
                    if (dVar1 == 0.5) {
                      if ((int)uVar10 <= (int)uVar8) goto LAB_0805a2c2;
                      psVar14 = &equation[uVar8].token;
                      piVar7 = &equation[local_20 + 3].level;
                      uVar12 = uVar8;
                      goto LAB_0805a246;
                    }
                  }
                  uVar15 = uVar15 - 2;
                  piVar7 = piVar7 + -8;
                  piVar13 = piVar13 + -8;
                  uVar17 = in_FPUStatusWord;
                } while ((int)local_30 < (int)uVar15);
              }
            }
LAB_0805a4c9:
            if ((int)uVar10 <= (int)local_24) break;
            uVar15 = local_24 + 2;
            if (((int)uVar15 < (int)uVar10) && (iVar5 != equation[uVar15].level)) {
              piVar7 = &equation[local_24 + 4].level;
              do {
                uVar15 = uVar15 + 2;
                if ((int)uVar10 <= (int)uVar15) break;
                iVar6 = *piVar7;
                piVar7 = piVar7 + 8;
              } while (iVar5 != iVar6);
            }
            local_30 = local_24;
            local_24 = uVar15;
          } while( true );
        }
      }
    }
    uVar8 = local_20 + 2;
  } while( true );
LAB_0805a246:
  do {
    if (((psVar14->variable == 6) && (*(int *)((int)psVar14 + -4) == *piVar7)) &&
       (((token_type *)(piVar7 + -1))->kind == CONSTANT)) {
      dVar1 = ((storage_type *)(piVar7 + 1))->constant;
      do {
        dVar1 = dVar1 - (dVar1 / 1.0) * 1.0;
      } while ((uVar17 & 0x400) != 0);
      if (((dVar1 == 0.5) && (uVar15 != uVar12)) &&
         ((iVar4 != *(int *)((int)psVar14 + -4) || (local_34 != 1)))) goto LAB_0805a031;
    }
    uVar12 = uVar12 + 2;
    psVar14 = psVar14 + 4;
    piVar7 = piVar7 + 8;
  } while ((int)uVar12 < (int)uVar10);
LAB_0805a2c2:
  iVar5 = local_30 + 1;
  iVar16 = local_30 - local_20;
  memmove(scratch,equation + local_20 + 1,iVar16 * 0x10);
  scratch[iVar16].level = iVar4;
  scratch[iVar16].kind = CONSTANT;
  scratch[iVar16].token.constant = -1.0;
  iVar6 = iVar16 + 1;
  scratch[iVar6].level = iVar4;
  scratch[iVar6].kind = OPERATOR;
  scratch[iVar6].token.variable = 3;
  memmove(scratch + iVar16 + 2,equation + iVar5,(uVar10 - iVar5) * 0x10);
  if (0 < (int)(local_24 - iVar5)) {
    iVar6 = (iVar16 + 2) * 0x10;
    iVar4 = 0;
    do {
      piVar7 = (int *)((int)&scratch->level + iVar6);
      *piVar7 = *piVar7 + 1;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0x10;
    } while (iVar4 != local_24 - iVar5);
  }
  iVar6 = uVar9 + 4 + ~local_20;
  iVar4 = iVar6 * 2 + 2;
  if (n_tokens < iVar4 + *np) {
    error_huge();
  }
  ptVar11 = equation + uVar10;
  memmove(equation + iVar4 + uVar10,ptVar11,(*np - uVar10) * 0x10);
  *np = *np + iVar4;
  ptVar11->level = iVar2;
  ptVar11->kind = OPERATOR;
  (ptVar11->token).variable = 3;
  memmove(equation + uVar9 + 3,scratch,iVar6 * 0x10);
  iVar4 = uVar9 + 3 + iVar6;
  ptVar11 = equation + iVar4;
  ptVar11->level = iVar2;
  ptVar11->kind = OPERATOR;
  (ptVar11->token).variable = 4;
  iVar4 = iVar4 + 1;
  memmove(equation + iVar4,scratch,iVar6 * 0x10);
  uVar8 = iVar4 + iVar6;
  local_50 = 1;
  if (0 < debug_level) {
    __fprintf_chk(gfp,1,"%s\n");
    local_50 = 1;
  }
  goto LAB_0805a031;
}



// WARNING: Unknown calling convention

int order_recurse(token_type *equation,int *np,int loc,int level)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int n;
  int iVar4;
  int iVar5;
  token_type *ptVar6;
  int iVar7;
  int i;
  uint loc_00;
  int e2;
  int n2;
  int op;
  int j;
  int iVar8;
  bool bVar9;
  uint local_28;
  
  if ((loc & 1U) == 0) {
    local_28 = 0;
    uVar1 = loc;
    iVar8 = 0;
LAB_0805a67e:
    loc_00 = uVar1;
    iVar7 = *np;
    if ((int)loc_00 < iVar7) {
      ptVar6 = equation + loc_00;
      if (ptVar6->level < level) {
        if (ptVar6->kind != OPERATOR) goto corrupt;
        goto LAB_0805a68b;
      }
      if (level < ptVar6->level) {
        uVar1 = order_recurse(equation,np,loc_00,level + 1);
        local_28 = local_28 | uVar1;
        uVar1 = loc_00 + 1;
        if (((int)uVar1 < *np) && (level < equation[uVar1].level)) {
          piVar3 = &equation[loc_00 + 2].level;
          do {
            uVar1 = uVar1 + 1;
            if (*np <= (int)uVar1) break;
            iVar7 = *piVar3;
            piVar3 = piVar3 + 4;
          } while (level < iVar7);
        }
      }
      else {
        bVar9 = ptVar6->kind == OPERATOR;
        if (bVar9 != (bool)((byte)loc_00 & 1)) goto corrupt;
        iVar7 = iVar8;
        if (bVar9) {
          iVar7 = (ptVar6->token).variable;
          if (iVar7 == 0) goto corrupt;
          if (iVar8 != 0) {
            if (iVar7 < 1) goto corrupt;
            if (iVar7 < 3) {
              uVar1 = iVar8 - 1;
            }
            else {
              if (4 < iVar7) goto corrupt;
              uVar1 = iVar8 - 3;
            }
            iVar7 = iVar8;
            if (1 < uVar1) goto corrupt;
          }
        }
        uVar1 = loc_00 + 1;
        iVar8 = iVar7;
      }
      goto LAB_0805a67e;
    }
LAB_0805a68b:
    if ((loc_00 & 1) != 0) {
      if (iVar8 < 1) {
        return local_28;
      }
      if (2 < iVar8) {
        if (4 < iVar8) {
          return local_28;
        }
        iVar8 = loc + 1;
        if ((int)loc_00 <= iVar8) {
          return local_28;
        }
        piVar3 = &equation[iVar8].level;
        while ((*piVar3 != level || (((storage_type *)(piVar3 + 1))->variable != 4))) {
          iVar8 = iVar8 + 2;
          piVar3 = piVar3 + 8;
          if ((int)loc_00 <= iVar8) {
            return local_28;
          }
        }
        iVar7 = iVar8 + 2;
        do {
          while( true ) {
            if ((int)loc_00 <= iVar7) {
              return local_28;
            }
            ptVar6 = equation + iVar7;
            if ((ptVar6->level == level) && ((ptVar6->token).variable == 3)) break;
            iVar7 = iVar7 + 2;
          }
          n = iVar7 + 2;
          if ((n < (int)loc_00) && (level < equation[n].level)) {
            piVar3 = &equation[iVar7 + 4].level;
            do {
              n = n + 2;
              if ((int)loc_00 <= n) break;
              iVar4 = *piVar3;
              piVar3 = piVar3 + 8;
            } while (level < iVar4);
          }
          iVar4 = n - iVar7;
          memmove(scratch,ptVar6,iVar4 * 0x10);
          iVar5 = iVar7 - iVar8;
          ptVar6 = equation + iVar8;
          iVar8 = iVar8 + iVar4;
          memmove(equation + iVar8,ptVar6,iVar5 * 0x10);
          memmove(ptVar6,scratch,iVar4 * 0x10);
          iVar7 = iVar7 + iVar4;
          local_28 = 1;
        } while( true );
      }
      ptVar6 = equation + loc;
      if (ptVar6->kind != CONSTANT) {
        return local_28;
      }
      if (0.0 <= (ptVar6->token).constant) {
        return local_28;
      }
      if (ptVar6->level != level) {
        if (equation[loc + 1].level != level + 1) {
          return local_28;
        }
        if (1 < equation[loc + 1].token.variable - 3U) {
          return local_28;
        }
      }
      j = loc + 1;
      if ((int)loc_00 <= j) {
        return local_28;
      }
      piVar3 = &equation[j].level;
      piVar2 = piVar3;
      e2 = j;
      while ((*piVar2 != level || (((storage_type *)(piVar2 + 1))->variable != 1))) {
        e2 = e2 + 2;
        piVar2 = piVar2 + 8;
        if ((int)loc_00 <= e2) {
          return local_28;
        }
      }
      iVar8 = e2 + 1;
      while ((j < iVar7 && (iVar4 = *piVar3, piVar3 = piVar3 + 8, level < iVar4))) {
        j = j + 2;
      }
      piVar3 = &equation[e2 + 2].level;
      do {
        e2 = e2 + 2;
        if (iVar7 <= e2) break;
        iVar4 = *piVar3;
        piVar3 = piVar3 + 8;
      } while (level < iVar4);
      n2 = e2 - iVar8;
      memmove(scratch,ptVar6,(e2 - loc) * 0x10);
      memmove(equation + n2 + loc,equation + j,(iVar8 - j) * 0x10);
      memmove(ptVar6,scratch + (iVar8 - loc),n2 * 0x10);
      memmove(equation + (e2 - (j - loc)),scratch,(j - loc) * 0x10);
      return 1;
    }
  }
  else {
    local_28 = 0;
  }
corrupt:
  error_bug("Internal representation of expression is corrupt!");
  return local_28;
}



// WARNING: Unknown calling convention

int reorder(token_type *equation,int *np)

{
  int iVar1;
  
  iVar1 = order_recurse(equation,np,0,1);
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x0805ade8)
// WARNING: Removing unreachable block (ram,0x0805ada6)
// WARNING: Removing unreachable block (ram,0x0805ab24)
// WARNING: Removing unreachable block (ram,0x0805ab20)
// WARNING: Removing unreachable block (ram,0x0805ab26)
// WARNING: Removing unreachable block (ram,0x0805ad04)
// WARNING: Removing unreachable block (ram,0x0805ad00)
// WARNING: Removing unreachable block (ram,0x0805ad06)
// WARNING: Removing unreachable block (ram,0x0805ada2)
// WARNING: Removing unreachable block (ram,0x0805ade4)
// WARNING: Unknown calling convention

int elim_sign(token_type *equation,int *np)

{
  double dVar1;
  token_type *ptVar2;
  int j;
  int iVar3;
  token_type *ptVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int i;
  token_type *ptVar9;
  ushort in_FPUStatusWord;
  ushort uVar10;
  double d;
  int local_3c;
  double local_2c;
  double local_24 [2];
  
  iVar5 = *np;
  local_3c = 0;
  iVar8 = 1;
  if (1 < iVar5) {
    do {
      ptVar9 = equation + iVar8;
      iVar6 = ptVar9->level;
      uVar10 = in_FPUStatusWord;
      if ((ptVar9->token).variable == 4) {
        ptVar4 = equation + iVar8 + 1;
        iVar7 = ptVar4->level;
        if (iVar7 != iVar6) goto LAB_0805aab1;
        if ((ptVar4->kind == VARIABLE) && ((ptVar4->token).variable == 3)) {
          if (n_tokens < iVar5 + 2) {
            error_huge();
          }
          memmove(equation + iVar8 + 2,ptVar9,(*np - iVar8) * 0x10);
          *np = *np + 2;
          ptVar9->level = iVar7;
          ptVar9->kind = OPERATOR;
          (ptVar9->token).variable = 3;
          ptVar9 = equation + iVar8 + 1;
          ptVar9->level = iVar7;
          ptVar9->kind = CONSTANT;
          (ptVar9->token).constant = -1.0;
          iVar8 = iVar8 + 2;
          ptVar9 = equation + iVar8;
          ptVar9->level = iVar7;
          ptVar9->kind = OPERATOR;
          (ptVar9->token).variable = 3;
          local_3c = 1;
          uVar10 = in_FPUStatusWord;
        }
      }
      else {
LAB_0805aab1:
        if ((ptVar9->token).variable == 6) {
          ptVar4 = equation + iVar8 + 1;
          iVar5 = ptVar4->level;
          if ((iVar5 == iVar6) && (ptVar4->kind == CONSTANT)) {
            f_to_fraction((ptVar4->token).constant,local_24,&local_2c);
            dVar1 = local_24[0];
            do {
              dVar1 = dVar1 - (dVar1 / 2.0) * 2.0;
            } while ((in_FPUStatusWord & 0x400) != 0);
            uVar10 = in_FPUStatusWord & 0xfdff;
            if (dVar1 == 0.0) {
              ptVar9 = equation + iVar8 + -1;
              if (((iVar5 == ptVar9->level) && (ptVar9->kind == VARIABLE)) &&
                 ((ptVar9->token).variable == 3)) {
                ptVar9->kind = CONSTANT;
                (ptVar9->token).constant = -1.0;
                (ptVar4->token).constant = (ptVar4->token).constant * 0.5;
                local_3c = 1;
              }
              else {
                iVar6 = iVar8 + -1;
                if (-1 < iVar6) {
                  iVar7 = equation[iVar6].level;
                  if (iVar5 <= iVar7) {
                    ptVar9 = equation + iVar8 + -2;
                    iVar3 = iVar6;
                    ptVar4 = equation + iVar6;
                    do {
                      ptVar2 = ptVar9;
                      if ((iVar7 <= iVar5 + 1) && (ptVar4->kind == OPERATOR)) {
                        if ((4 < (uint)(ptVar4->token).variable) ||
                           (((1 << ((byte)(ptVar4->token).variable & 0x1f) & 0x19U) == 0 ||
                            (iVar6 < 0)))) goto LAB_0805ae26;
                        break;
                      }
                      iVar3 = iVar3 + -1;
                      if (iVar3 < 0) break;
                      iVar7 = ptVar2->level;
                      ptVar9 = ptVar2 + -1;
                      ptVar4 = ptVar2;
                    } while (iVar5 <= iVar7);
                  }
                  iVar7 = equation[iVar6].level;
                  if (iVar5 <= iVar7) {
                    ptVar9 = equation + iVar8 + -2;
                    ptVar4 = equation + iVar6;
                    do {
                      ptVar2 = ptVar9;
                      if (iVar7 <= iVar5 + 1) {
                        if ((ptVar4->kind == VARIABLE) &&
                           (((ptVar4->token).variable & 0x3fffU) == 4)) {
                          ptVar4->kind = CONSTANT;
                          (ptVar4->token).constant = 1.0;
                          local_3c = 1;
                        }
                        else if ((ptVar4->kind == CONSTANT) && ((ptVar4->token).constant < 0.0)) {
                          (ptVar4->token).constant = -(ptVar4->token).constant;
                          local_3c = 1;
                        }
                      }
                      iVar6 = iVar6 + -1;
                      if (iVar6 < 0) break;
                      iVar7 = ptVar2->level;
                      ptVar9 = ptVar2 + -1;
                      ptVar4 = ptVar2;
                    } while (iVar5 <= iVar7);
                  }
                }
              }
            }
            else {
              ptVar2 = equation + iVar8 + -1;
              if ((ptVar2->level == iVar6) && (ptVar2->kind == VARIABLE)) {
                if ((ptVar2->token).variable == 3) {
                  dVar1 = (ptVar4->token).constant;
                  do {
                    dVar1 = dVar1 - (dVar1 / 4.0) * 4.0;
                  } while ((in_FPUStatusWord & 0x400) != 0);
                  if (dVar1 == 1.0) {
                    (ptVar9->token).variable = 3;
                    (ptVar4->token).constant = 1.0;
                    local_3c = 1;
                  }
                  else if (dVar1 == 3.0) {
                    (ptVar9->token).variable = 3;
                    (ptVar4->token).constant = -1.0;
                    local_3c = 1;
                  }
                }
                else {
                  dVar1 = local_2c;
                  if (((ptVar2->token).variable & 0x3fffU) == 4) {
                    do {
                      dVar1 = dVar1 - (dVar1 / 2.0) * 2.0;
                    } while ((in_FPUStatusWord & 0x400) != 0);
                    if (dVar1 == 1.0) {
                      do {
                        local_24[0] = local_24[0] - (local_24[0] / 2.0) * 2.0;
                      } while ((in_FPUStatusWord & 0x400) != 0);
                      if (local_24[0] != (ptVar4->token).constant) {
                        (ptVar4->token).constant = local_24[0];
                        local_3c = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0805ae26:
      iVar8 = iVar8 + 2;
      iVar5 = *np;
      in_FPUStatusWord = uVar10;
    } while (iVar8 < iVar5);
  }
  return local_3c;
}



// WARNING: Removing unreachable block (ram,0x0805af35)
// WARNING: Removing unreachable block (ram,0x0805b03f)
// WARNING: Removing unreachable block (ram,0x0805b043)
// WARNING: Removing unreachable block (ram,0x0805b045)
// WARNING: Removing unreachable block (ram,0x0805af31)
// WARNING: Removing unreachable block (ram,0x0805af37)
// WARNING: Removing unreachable block (ram,0x0805afb7)
// WARNING: Removing unreachable block (ram,0x0805afb3)
// WARNING: Removing unreachable block (ram,0x0805afb9)
// WARNING: Unknown calling convention

int simp_pp(token_type *equation,int *np)

{
  double dVar1;
  token_type *ptVar2;
  token_type *ptVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  token_type *ptVar7;
  int k;
  int iVar8;
  int j;
  int iVar9;
  ushort in_FPUStatusWord;
  int local_48;
  int local_30;
  double local_2c;
  double local_24 [2];
  
  iVar8 = *np;
  local_48 = 0;
  local_30 = 1;
  if (1 < iVar8) {
    do {
      if (equation[local_30].token.variable == 6) {
        iVar5 = local_30 + 2;
        if (iVar5 < iVar8) {
          piVar4 = &equation[iVar5].level;
          iVar6 = equation[local_30].level + -1;
          iVar9 = iVar5;
LAB_0805aeab:
          if ((iVar6 != *piVar4) || (((storage_type *)(piVar4 + 1))->variable != 6)) {
            if (equation[local_30].level < *piVar4) goto code_r0x0805b0f2;
            goto LAB_0805b101;
          }
          if (symb_flag != 0) goto LAB_0805b06b;
          ptVar2 = equation + iVar9 + 1;
          if ((iVar6 == ptVar2->level) && (ptVar2->kind == CONSTANT)) {
            f_to_fraction((ptVar2->token).constant,local_24,&local_2c);
            dVar1 = local_2c;
            do {
              dVar1 = dVar1 - (dVar1 / 2.0) * 2.0;
            } while ((in_FPUStatusWord & 0x400) != 0);
            in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
            if (dVar1 != 0.0) goto LAB_0805b06b;
            if ((iVar9 == iVar5) && (equation[local_30 + 1].kind == CONSTANT)) {
              f_to_fraction(equation[local_30 + 1].token.constant,local_24,&local_2c);
              dVar1 = local_24[0];
              do {
                dVar1 = dVar1 - (dVar1 / 2.0) * 2.0;
              } while ((in_FPUStatusWord & 0x400) != 0);
              in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
              if (dVar1 != 0.0) goto LAB_0805b06b;
            }
            goto LAB_0805b101;
          }
          if ((iVar9 != iVar5) || (equation[local_30 + 1].kind != CONSTANT)) goto LAB_0805b101;
          f_to_fraction(equation[local_30 + 1].token.constant,local_24,&local_2c);
          dVar1 = local_24[0];
          do {
            dVar1 = dVar1 - (dVar1 / 2.0) * 2.0;
          } while ((in_FPUStatusWord & 0x400) != 0);
          in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
          if (dVar1 == 0.0) goto LAB_0805b101;
LAB_0805b06b:
          ((storage_type *)(piVar4 + 1))->variable = 3;
          if ((iVar9 < *np) && (iVar8 = *piVar4, iVar6 <= iVar8)) {
            ptVar2 = equation + iVar9 + 1;
            ptVar7 = (token_type *)(piVar4 + -1);
            iVar5 = iVar9;
            do {
              ptVar3 = ptVar2;
              ptVar7->level = iVar8 + 2;
              iVar5 = iVar5 + 1;
              if (*np == iVar5 || *np < iVar5) break;
              iVar8 = ptVar3->level;
              ptVar2 = ptVar3 + 1;
              ptVar7 = ptVar3;
            } while (iVar6 <= iVar8);
          }
          iVar8 = local_30 + 1;
          if (iVar8 < iVar9) {
            piVar4 = &equation[iVar8].level;
            do {
              *piVar4 = *piVar4 + 1;
              iVar8 = iVar8 + 1;
              piVar4 = piVar4 + 4;
            } while (iVar8 < iVar9);
          }
          local_30 = local_30 + -2;
          local_48 = 1;
        }
      }
LAB_0805b101:
      local_30 = local_30 + 2;
      iVar8 = *np;
    } while (local_30 < iVar8);
  }
  return local_48;
code_r0x0805b0f2:
  iVar9 = iVar9 + 2;
  piVar4 = piVar4 + 8;
  if (iVar8 <= iVar9) goto LAB_0805b101;
  goto LAB_0805aeab;
}



// WARNING: Unknown calling convention

int compare_recurse(token_type *p1,int n1,int l1,token_type *p2,int n2,int l2,int *diff_signp)

{
  double dVar1;
  double dVar2;
  int iVar3;
  kind_list kVar4;
  token_type *ptVar5;
  token_type *ptVar6;
  token_type *ptVar7;
  double dVar8;
  uint uVar9;
  token_type *pv1;
  token_type *ptVar10;
  int iVar11;
  token_type *ep1;
  int diff_op;
  int oc2;
  int l1_00;
  token_type *ep2;
  int i;
  int iVar12;
  int len;
  int iVar13;
  int in_GS_OFFSET;
  bool bVar14;
  bool bVar15;
  double c1;
  double c2;
  double d1;
  uint local_c3bc;
  long local_c39c;
  uint local_c394;
  token_type *local_c38c;
  int local_c388;
  token_type *local_c380;
  token_type *opa2 [10000];
  uint local_2734;
  char used [10000];
  
  dVar8 = epsilon;
  iVar3 = *(int *)(in_GS_OFFSET + 0x14);
  *diff_signp = 0;
  if ((n1 == 1) && (n2 == 1)) {
    kVar4 = p1->kind;
    if (kVar4 != p2->kind) goto LAB_0805b90d;
    if (kVar4 != CONSTANT) {
      if (kVar4 == VARIABLE) {
        if ((sign_cmp_flag == 0) || (((p1->token).variable & 0x3fffU) != 4)) {
          uVar9 = (uint)((p1->token).variable == (p2->token).variable);
        }
        else {
          uVar9 = (uint)(((p2->token).variable & 0x3fffU) == 4);
        }
        goto LAB_0805b925;
      }
      goto LAB_0805b90d;
    }
    dVar1 = (p1->token).constant;
    dVar2 = (p2->token).constant;
    if (dVar1 != dVar2) {
      if (-dVar2 == dVar1) {
        *diff_signp = 1;
        uVar9 = 1;
        goto LAB_0805b925;
      }
      if (ABS(dVar1) * dVar8 <= ABS(dVar1 - dVar2)) {
        if (ABS(dVar1 + dVar2) < ABS(dVar1) * dVar8) {
          *diff_signp = 1;
          uVar9 = 1;
          goto LAB_0805b925;
        }
        goto LAB_0805b90d;
      }
    }
    goto LAB_0805b920;
  }
  ptVar6 = p1 + n1;
  ptVar5 = p2 + n2;
  if (p1 + 1 < ptVar6) {
    iVar13 = p1[1].level;
    ptVar10 = p1 + 1;
    while (iVar13 != l1) {
      if (ptVar6 <= ptVar10 + 2) goto LAB_0805b292;
      iVar13 = ptVar10[2].level;
      ptVar10 = ptVar10 + 2;
    }
    local_c394 = (ptVar10->token).variable;
  }
  else {
LAB_0805b292:
    local_c394 = 0;
  }
  ptVar10 = p2 + 1;
  if (ptVar10 < ptVar5) {
    iVar13 = p2[1].level;
    ptVar7 = ptVar10;
    while (iVar13 != l2) {
      if (ptVar5 <= ptVar7 + 2) goto LAB_0805b2f5;
      iVar13 = ptVar7[2].level;
      ptVar7 = ptVar7 + 2;
    }
    local_c3bc = (ptVar7->token).variable;
    if (local_c3bc == 0) goto LAB_0805b2ff;
    switch(local_c394) {
    case 0:
      if (1 < local_c3bc - 3) goto LAB_0805b90d;
      goto LAB_0805b933;
    case 1:
    case 2:
      bVar14 = 1 < local_c3bc - 1;
      break;
    case 3:
    case 4:
      bVar14 = 1 < local_c3bc - 3;
      break;
    default:
      bVar14 = local_c394 != local_c3bc;
    }
    if (bVar14) {
      if ((((p1->kind != CONSTANT) || (p1->level != l1)) || (local_c394 != 3)) ||
         (dVar8 < ABS(ABS((p1->token).constant) - 1.0))) {
        if (((p2->kind == CONSTANT) && (p2->level == l2)) &&
           ((local_c3bc == 3 && (ABS(ABS((p2->token).constant) - 1.0) <= dVar8)))) {
          iVar13 = min_level(p2 + 2,n2 + -2);
          iVar13 = compare_recurse(p1,n1,l1,p2 + 2,n2 + -2,iVar13,diff_signp);
          if (iVar13 != 0) {
            if ((p2->token).constant < 0.0) {
              *diff_signp = *diff_signp ^ 1;
              uVar9 = 1;
              goto LAB_0805b925;
            }
            goto LAB_0805b920;
          }
        }
      }
      else {
        iVar13 = min_level(p1 + 2,n1 + -2);
        iVar13 = compare_recurse(p1 + 2,n1 + -2,iVar13,p2,n2,l2,diff_signp);
        if (iVar13 != 0) {
          if ((p1->token).constant < 0.0) {
            *diff_signp = *diff_signp ^ 1;
            uVar9 = 1;
            goto LAB_0805b925;
          }
LAB_0805b920:
          uVar9 = 1;
          goto LAB_0805b925;
        }
      }
LAB_0805b90d:
      uVar9 = 0;
LAB_0805b925:
      if (iVar3 == *(int *)(in_GS_OFFSET + 0x14)) {
        return uVar9;
      }
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
LAB_0805b933:
    opa2[0] = p2;
    used[0] = '\0';
    local_c388 = 1;
  }
  else {
LAB_0805b2f5:
    local_c3bc = 0;
LAB_0805b2ff:
    if (1 < local_c394 - 3) goto LAB_0805b90d;
    opa2[0] = p2;
    used[0] = '\0';
    local_c388 = 1;
    if (ptVar5 <= ptVar10) goto LAB_0805b58a;
    local_c388 = 1;
  }
  do {
    opa2[0] = p2;
    used[0] = '\0';
    if (ptVar10->level == l2) {
      opa2[local_c388] = ptVar10 + 1;
      used[local_c388] = '\0';
      local_c388 = local_c388 + 1;
      if (9999 < local_c388) {
        if (debug_level < 1) goto LAB_0805b90d;
        __fprintf_chk(gfp,1,"%s\n",
                      "Expression too big to compare, because MAX_COMPARE_TERMS exceeded.");
        uVar9 = 0;
        goto LAB_0805b925;
      }
    }
    ptVar10 = ptVar10 + 2;
  } while (ptVar10 < ptVar5);
LAB_0805b58a:
  opa2[0] = p2;
  used[0] = '\0';
  opa2[local_c388] = ptVar10 + 1;
  local_c39c = 0;
  bVar14 = true;
  uVar9 = 1 << ((byte)local_c394 & 0x1f);
  local_c380 = p1;
  do {
    local_c38c = local_c380 + 1;
    if ((local_c38c < ptVar6) && (l1 < local_c380[1].level)) {
      iVar13 = 1;
      ptVar5 = local_c380 + 3;
      do {
        local_c38c = ptVar5;
        iVar13 = iVar13 + 2;
        if (ptVar6 <= local_c38c) break;
        ptVar5 = local_c38c + 2;
      } while (l1 < local_c38c->level);
    }
    else {
      iVar13 = 1;
    }
    if (0 < local_c388) {
      iVar12 = 0;
      do {
        if (used[iVar12] == '\0') {
          if (local_c394 < 5) {
            if ((uVar9 & 0x19) == 0) {
              if ((uVar9 & 6) == 0) goto LAB_0805b703;
            }
            else {
              bVar15 = false;
              if (iVar12 != 0) {
                bVar15 = opa2[iVar12][-1].token.variable == 4;
              }
              if ((local_c39c == 4) != bVar15) goto LAB_0805b83a;
            }
          }
          else {
LAB_0805b703:
            if ((local_c39c == 0) != (iVar12 == 0)) goto LAB_0805b90d;
          }
          ptVar5 = opa2[iVar12];
          iVar11 = l2 + 1;
          if (ptVar5->level <= l2) {
            iVar11 = l2;
          }
          l1_00 = l1 + 1;
          if (local_c380->level <= l1) {
            l1_00 = l1;
          }
          iVar11 = compare_recurse(local_c380,iVar13,l1_00,ptVar5,
                                   ((int)opa2[iVar12 + 1] - (int)ptVar5 >> 4) + -1,iVar11,
                                   (int *)&local_2734);
          if (iVar11 != 0) {
            if (local_c394 < 5) {
              if ((uVar9 & 0x19) == 0) {
                if ((uVar9 & 6) == 0) goto LAB_0805b827;
                if (local_c39c == 2) {
                  local_2734 = (uint)(local_2734 == 0);
                }
                if ((iVar12 != 0) && (ptVar5[-1].token.variable == 2)) {
                  local_2734 = (uint)(local_2734 == 0);
                }
                if (bVar14) {
                  *diff_signp = local_2734;
                  bVar14 = false;
                }
                else if (*diff_signp != local_2734) goto LAB_0805b83a;
              }
              else {
                *diff_signp = *diff_signp ^ local_2734;
              }
            }
            else {
LAB_0805b827:
              if (local_2734 != 0) goto LAB_0805b83a;
            }
            used[iVar12] = '\x01';
            goto LAB_0805b84e;
          }
        }
LAB_0805b83a:
        iVar12 = iVar12 + 1;
      } while (iVar12 < local_c388);
    }
    if ((((1 < local_c394 - 3) || (local_c380->level != l1)) || (local_c380->kind != CONSTANT)) ||
       (dVar8 < ABS(ABS((local_c380->token).constant) - 1.0))) goto LAB_0805b90d;
    if ((local_c380->token).constant < 0.0) {
      *diff_signp = *diff_signp ^ 1;
    }
LAB_0805b84e:
    if (ptVar6 <= local_c38c) break;
    local_c39c = (local_c38c->token).variable;
    local_c380 = local_c38c + 1;
  } while( true );
  if (0 < local_c388) {
    iVar13 = 0;
    do {
      if (used[iVar13] == '\0') {
        if (((1 < local_c3bc - 3) || (ptVar6 = opa2[iVar13], ptVar6->level != l2)) ||
           ((ptVar6->kind != CONSTANT || (dVar8 < ABS(ABS((ptVar6->token).constant) - 1.0)))))
        goto LAB_0805b90d;
        if ((ptVar6->token).constant < 0.0) {
          *diff_signp = *diff_signp ^ 1;
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < local_c388);
  }
  goto LAB_0805b920;
}



// WARNING: Unknown calling convention

int se_compare(token_type *p1,int n1,token_type *p2,int n2,int *diff_signp)

{
  int iVar1;
  int l2_00;
  int l2;
  int l1;
  
  iVar1 = min_level(p1,n1);
  l2_00 = min_level(p2,n2);
  iVar1 = compare_recurse(p1,n1,iVar1,p2,n2,l2_00,diff_signp);
  return iVar1;
}



// WARNING: Unknown calling convention

int elim_k(token_type *equation,int *np)

{
  double __value;
  storage_type sVar1;
  bool bVar2;
  bool bVar3;
  token_type *ptVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  token_type *ptVar8;
  token_type *p1;
  token_type *__dest;
  token_type *p3;
  token_type *p4;
  int flag;
  token_type *p2;
  token_type *ptVar10;
  int level;
  token_type *local_60;
  token_type *local_50;
  int local_48;
  int local_40;
  token_type *local_30;
  double local_2c;
  double local_24 [2];
  token_type *ptVar9;
  
  local_48 = 0;
  __dest = equation + 1;
LAB_0805b9ec:
  while( true ) {
    while( true ) {
      ptVar10 = equation + *np;
      if (ptVar10 <= __dest) {
        return local_48;
      }
      if (__dest->kind == OPERATOR) break;
      __dest = __dest + 1;
    }
    iVar7 = __dest->level;
    if (1 < (__dest->token).variable - 1U) break;
    ptVar8 = __dest + 1;
    if ((((__dest + 2 < ptVar10) && (__dest[2].level == iVar7 + 1)) &&
        (__dest[2].token.variable - 3U < 2)) &&
       ((ptVar8->kind == CONSTANT && (__dest[1].token.constant < 0.0)))) {
      (__dest->token).variable = ((__dest->token).variable == 1) + 1;
      __dest[1].token.constant = -__dest[1].token.constant;
    }
    if ((__dest[1].level != iVar7) || (ptVar8->kind != CONSTANT)) {
LAB_0805bad7:
      local_30 = __dest + -1;
      local_40 = __dest[-1].level;
      if ((((local_40 == iVar7) && (local_30->kind == CONSTANT)) &&
          (iVar5 = __isinf(__dest[-1].token.constant), iVar5 != 0)) ||
         ((local_40 = __dest[1].level, local_40 == iVar7 &&
          (local_30 = ptVar8, ptVar8->kind == CONSTANT)))) {
        __value = (local_30->token).constant;
        iVar5 = __isinf(__value);
        if (iVar5 != 0) {
          iVar5 = __dest->level;
          bVar3 = false;
          local_60 = __dest;
          if (local_40 <= iVar5) {
            bVar3 = false;
            ptVar8 = __dest;
            do {
              if (((ptVar8->kind == CONSTANT) && (ptVar8 != local_30)) &&
                 (iVar6 = __finite((ptVar8->token).constant), iVar6 == 0)) {
                bVar3 = true;
              }
              p4 = __dest;
              local_60 = ptVar8;
              if (ptVar8 == equation) goto LAB_0805bbd2;
              local_60 = ptVar8 + -1;
              ptVar9 = ptVar8 + -1;
              ptVar8 = local_60;
            } while (iVar7 <= ptVar9->level);
          }
          local_60 = local_60 + 1;
          local_50 = __dest;
          bVar2 = bVar3;
          while (p4 = local_50, bVar3 = bVar2, local_40 <= iVar5) {
LAB_0805bbd2:
            bVar2 = bVar3;
            if ((p4->kind == CONSTANT) && (p4 != local_30)) {
              iVar5 = __finite((p4->token).constant);
              bVar2 = true;
              if (iVar5 != 0) {
                bVar2 = bVar3;
              }
            }
            local_50 = p4 + 1;
            if (ptVar10 <= local_50) break;
            iVar5 = p4[1].level;
          }
          if (!bVar2) {
            if ((local_60 < local_30) && (local_30[-1].token.variable == 2)) {
              (local_30->token).constant = -__value;
            }
            memmove(local_30 + 1,local_50,(int)ptVar10 - (int)local_50);
            iVar7 = *np - ((int)local_50 - (int)(local_30 + 1) >> 4);
            *np = iVar7;
            memmove(local_60,local_30,(int)equation + (iVar7 * 0x10 - (int)local_30));
            *np = *np - ((int)local_30 - (int)local_60 >> 4);
            return 1;
          }
        }
      }
      break;
    }
    if (__dest[1].token.constant < 0.0) {
      (__dest->token).variable = ((__dest->token).variable == 1) + 1;
      __dest[1].token.constant = -__dest[1].token.constant;
    }
    if (__dest[1].token.constant != 0.0) goto LAB_0805bad7;
    memmove(__dest,__dest + 2,(int)ptVar10 - (int)(__dest + 2));
    *np = *np + -2;
    local_48 = 1;
  }
  local_30 = __dest + -1;
  switch((__dest->token).variable) {
  case 1:
    if (((__dest[-1].level == iVar7) && (local_30->kind == CONSTANT)) &&
       (__dest[-1].token.constant == 0.0)) {
      memmove(local_30,__dest + 1,(int)ptVar10 - (int)(__dest + 1));
      *np = *np + -2;
      local_48 = 1;
      goto LAB_0805b9ec;
    }
    break;
  case 2:
    if ((((__dest[-1].level == iVar7) && (local_30->kind == CONSTANT)) &&
        (__dest[-1].token.constant == 0.0)) &&
       ((local_30 == equation || (__dest[-2].level < __dest[-1].level)))) {
      __dest[-1].token.constant = -1.0;
      (__dest->token).variable = 3;
      binary_parenthesize(equation,*np,(int)__dest - (int)equation >> 4);
      local_48 = 1;
      goto LAB_0805b9ec;
    }
    break;
  case 3:
    if ((__dest[-1].level == iVar7) && (local_30->kind == CONSTANT)) {
      if (__dest[-1].token.constant == 0.0) {
        ptVar8 = __dest + 2;
        if (ptVar8 < ptVar10) {
          iVar7 = __dest[2].level;
          ptVar9 = ptVar8;
          while ((ptVar8 = ptVar9, __dest[-1].level <= iVar7 &&
                 (ptVar8 = ptVar9 + 2, ptVar8 < ptVar10))) {
            iVar7 = ptVar9[2].level;
            ptVar9 = ptVar8;
          }
        }
        memmove(__dest,ptVar8,(int)ptVar10 - (int)ptVar8);
        *np = *np - ((int)ptVar8 - (int)__dest >> 4);
        local_48 = 1;
        goto LAB_0805b9ec;
      }
      if (ABS(__dest[-1].token.constant - 1.0) <= epsilon) {
        memmove(local_30,__dest + 1,(int)ptVar10 - (int)(__dest + 1));
        *np = *np + -2;
        local_48 = 1;
        goto LAB_0805b9ec;
      }
    }
    iVar5 = __dest[1].level;
    if ((iVar5 == iVar7) && (__dest[1].kind == CONSTANT)) {
      sVar1 = __dest[1].token;
      if (equation < local_30) {
        iVar7 = __dest[-2].level;
        ptVar10 = local_30;
        while ((local_30 = ptVar10, iVar5 <= iVar7 && (local_30 = ptVar10 + -1, equation < local_30)
               )) {
          iVar7 = ptVar10[-2].level;
          ptVar10 = local_30;
        }
      }
      if ((iVar5 != local_30->level) || (local_30->kind != CONSTANT)) {
        memmove(local_30 + 2,local_30,(int)__dest - (int)local_30);
        local_30->level = iVar5;
        local_30->kind = CONSTANT;
        local_30->token = sVar1;
        local_30[1].level = iVar5;
        local_30[1].kind = OPERATOR;
        local_30[1].token.variable = 3;
        __dest = local_30 + -1;
        if (local_30 <= equation) {
          __dest = equation + 1;
        }
        goto LAB_0805b9ec;
      }
    }
    break;
  case 4:
    if (((__dest[-1].level == iVar7) && (local_30->kind == CONSTANT)) &&
       (__dest[-1].token.constant == 0.0)) {
      ptVar8 = __dest + 2;
      if (ptVar8 < ptVar10) {
        iVar7 = __dest[2].level;
        ptVar9 = ptVar8;
        while ((ptVar8 = ptVar9, __dest[-1].level <= iVar7 &&
               (ptVar8 = ptVar9 + 2, ptVar8 < ptVar10))) {
          iVar7 = ptVar9[2].level;
          ptVar9 = ptVar8;
        }
      }
      memmove(__dest,ptVar8,(int)ptVar10 - (int)ptVar8);
      *np = *np - ((int)ptVar8 - (int)__dest >> 4);
      local_48 = 1;
      goto LAB_0805b9ec;
    }
    if (__dest[1].level == iVar7) {
      if (__dest[1].kind == CONSTANT) {
        f_to_fraction(__dest[1].token.constant,local_24,&local_2c);
        check_divide_by_zero(local_24[0]);
        __dest[1].token.constant = local_2c / local_24[0];
        (__dest->token).variable = 3;
        goto LAB_0805b9ec;
      }
      if ((__dest[1].kind == VARIABLE) && ((__dest[1].token.variable & 0x3fffU) == 4)) {
        (__dest->token).variable = 3;
        goto LAB_0805b9ec;
      }
    }
    break;
  case 5:
  case 9:
    if (((__dest[-1].level == iVar7) && (local_30->kind == CONSTANT)) &&
       (__dest[-1].token.constant == 0.0)) {
      ptVar8 = __dest + 2;
      if (ptVar8 < ptVar10) {
        iVar7 = __dest[2].level;
        ptVar9 = ptVar8;
        while ((ptVar8 = ptVar9, __dest[-1].level <= iVar7 &&
               (ptVar8 = ptVar9 + 2, ptVar8 < ptVar10))) {
          iVar7 = ptVar9[2].level;
          ptVar9 = ptVar8;
        }
      }
      memmove(__dest,ptVar8,(int)ptVar10 - (int)ptVar8);
      *np = *np - ((int)ptVar8 - (int)__dest >> 4);
      local_48 = 1;
      goto LAB_0805b9ec;
    }
    break;
  case 6:
    iVar5 = __dest[-1].level;
    if (((iVar5 == iVar7) && (local_30->kind == CONSTANT)) && (__dest[-1].token.constant == 1.0)) {
      ptVar8 = __dest + 2;
      ptVar9 = ptVar8;
      if ((ptVar8 < ptVar10) && (__dest[2].level != iVar5 && iVar5 <= __dest[2].level)) {
        do {
          ptVar9 = ptVar8 + 2;
          if (ptVar10 <= ptVar9) break;
          ptVar4 = ptVar8 + 2;
          ptVar8 = ptVar9;
        } while (iVar5 < ptVar4->level);
      }
      memmove(__dest,ptVar9,(int)ptVar10 - (int)ptVar9);
      *np = *np - ((int)ptVar9 - (int)__dest >> 4);
      local_48 = 1;
      goto LAB_0805b9ec;
    }
    ptVar8 = __dest + 1;
    iVar5 = __dest[1].level;
    if ((iVar5 == iVar7) && (ptVar8->kind == CONSTANT)) {
      if (__dest[1].token.constant == 0.0) {
        if ((equation < local_30) &&
           (ptVar9 = local_30, __dest[-2].level != iVar5 && iVar5 <= __dest[-2].level)) {
          do {
            local_30 = ptVar9 + -1;
            if (local_30 <= equation) break;
            ptVar4 = ptVar9 + -2;
            ptVar9 = local_30;
          } while (iVar5 < ptVar4->level);
        }
        memmove(local_30,ptVar8,(int)ptVar10 - (int)(__dest + 1));
        *np = *np - ((int)ptVar8 - (int)local_30 >> 4);
        (local_30->token).constant = 1.0;
        local_48 = 1;
        __dest = local_30 + 1;
        goto LAB_0805b9ec;
      }
      if (ABS(__dest[1].token.constant - 1.0) <= epsilon) {
        memmove(__dest,__dest + 2,(int)ptVar10 - (int)(__dest + 2));
        *np = *np + -2;
        local_48 = 1;
        goto LAB_0805b9ec;
      }
    }
  }
  __dest = __dest + 2;
  goto LAB_0805b9ec;
}



// WARNING: Removing unreachable block (ram,0x0805c424)
// WARNING: Removing unreachable block (ram,0x0805c420)
// WARNING: Removing unreachable block (ram,0x0805c426)
// WARNING: Removing unreachable block (ram,0x0805c488)
// WARNING: Removing unreachable block (ram,0x0805c512)
// WARNING: Removing unreachable block (ram,0x0805c50e)
// WARNING: Unknown calling convention

int calc(int *op1p,double *k1p,int op2,double k2)

{
  int *piVar1;
  int iVar2;
  int op1;
  ushort in_FPUStatusWord;
  ushort uVar3;
  double dVar4;
  double d2;
  double local_2c;
  double local_24 [2];
  
  domain_check = 0;
  piVar1 = __errno_location();
  *piVar1 = 0;
  iVar2 = 0;
  if (op1p != (int *)0x0) {
    iVar2 = *op1p;
  }
  switch(op2) {
  default:
    return 0;
  case 1:
  case 2:
    if (iVar2 == 2) {
      local_24[0] = -*k1p;
    }
    else {
      local_24[0] = *k1p;
    }
    dVar4 = ABS(local_24[0]);
    if (op2 == 1) {
      local_24[0] = k2 + local_24[0];
    }
    else {
      local_24[0] = local_24[0] - k2;
    }
    if (ABS(local_24[0]) < dVar4 * epsilon) {
      local_24[0] = 0.0;
    }
    if (iVar2 != 0) {
      if (local_24[0] < 0.0) {
        *op1p = 2;
        *k1p = -local_24[0];
        return 1;
      }
      *op1p = 1;
      *k1p = local_24[0];
      return 1;
    }
    *k1p = local_24[0];
    return 1;
  case 3:
  case 4:
    if (iVar2 == 0) {
      iVar2 = 3;
    }
    if (iVar2 == op2) {
      *k1p = k2 * *k1p;
      return 1;
    }
    if (iVar2 == 4) {
      check_divide_by_zero(*k1p);
      *k1p = k2 / *k1p;
      *op1p = 3;
      return 1;
    }
    if (op2 == 4) {
      check_divide_by_zero(k2);
      *k1p = *k1p / k2;
      return 1;
    }
    break;
  case 5:
    if (k2 == 0.0) {
      warning("Modulo 0 encountered, might be considered undefined.");
    }
    dVar4 = modf(*k1p / k2,local_24);
    dVar4 = dVar4 * k2;
    *k1p = dVar4;
    if (modulus_mode != 0) {
      if (dVar4 < 0.0) {
        *k1p = ABS(k2) + dVar4;
      }
      if (((modulus_mode == 1) && (k2 < 0.0)) && (0.0 < *k1p)) {
        *k1p = *k1p + k2;
        return 1;
      }
    }
    break;
  case 6:
    uVar3 = in_FPUStatusWord & 0xfdff;
    dVar4 = k2;
    if (*k1p < 0.0) {
      do {
        dVar4 = dVar4 - (dVar4 / 1.0) * 1.0;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (dVar4 != 0.0) {
        return 1;
      }
    }
    domain_check = 1;
    dVar4 = *k1p;
    if (dVar4 == 0.0) {
      if (k2 == 0.0) {
        warning("0^0 encountered, might be considered indeterminate.");
        local_24[0] = 1.0;
      }
      else {
LAB_0805c496:
        if (0.0 <= k2) goto LAB_0805c4bf;
        warning("Divide by zero (0 raised to negative power).");
        local_24[0] = INFINITY;
      }
    }
    else {
      if (dVar4 == 0.0) goto LAB_0805c496;
LAB_0805c4bf:
      local_24[0] = pow(dVar4,k2);
      if (((preserve_surds != 0) && (approximate_roots == 0)) && (iVar2 = __finite(k2), iVar2 != 0))
      {
        do {
          k2 = k2 - (k2 / 1.0) * 1.0;
        } while ((uVar3 & 0x400) != 0);
        if (((k2 != 0.0) && (iVar2 = f_to_fraction(*k1p,&local_2c,&d2), iVar2 != 0)) &&
           (iVar2 = f_to_fraction(local_24[0],&local_2c,&d2), iVar2 == 0)) {
          domain_check = 0;
          return 0;
        }
      }
    }
    check_err();
    if (domain_check != 0) {
      *k1p = local_24[0];
      return 1;
    }
    break;
  case 7:
    dVar4 = lgamma(*k1p + 1.0);
    dVar4 = exp(dVar4);
    if (*piVar1 != 0) {
      return 0;
    }
    *k1p = (double)signgam * dVar4;
    return 1;
  case 9:
    check_divide_by_zero(k2);
    modf(*k1p / k2,k1p);
    return 1;
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x0805c954)
// WARNING: Removing unreachable block (ram,0x0805c916)
// WARNING: Removing unreachable block (ram,0x0805c912)
// WARNING: Removing unreachable block (ram,0x0805c918)
// WARNING: Removing unreachable block (ram,0x0805c958)
// WARNING: Unknown calling convention

int const_recurse(token_type *equation,int *np,int loc,int level,int iflag)

{
  token_type *ptVar1;
  double dVar2;
  double dVar3;
  complexs a;
  bool bVar4;
  int iVar5;
  uint uVar6;
  storage_type *op1p;
  int iVar7;
  int *piVar8;
  uint loc_00;
  complexs *pcVar9;
  undefined4 *puVar10;
  byte bVar11;
  ushort in_FPUStatusWord;
  ushort uVar12;
  double *numeratorp;
  double *denominatorp;
  undefined4 uVar13;
  undefined4 uVar14;
  complexs in_stack_ffffff38;
  uint local_a0;
  double local_84;
  token_type *local_78;
  uint local_70;
  uint local_6c;
  token_type *local_68;
  int *local_64;
  token_type *local_60;
  complexs p;
  complexs cv;
  double local_34;
  double local_2c;
  double local_24 [2];
  
  bVar11 = 0;
  local_6c = 0;
  bVar4 = false;
  loc_00 = loc;
  local_70 = loc;
  do {
    if (*np <= (int)loc_00) {
LAB_0805c637:
      if (loc_00 - loc == 1) {
        iVar5 = level + -1;
        if (iVar5 < 1) {
          iVar5 = 1;
        }
        equation[loc].level = iVar5;
      }
      return local_6c;
    }
    local_68 = equation + loc_00;
    if (local_68->level < level) goto LAB_0805c637;
    if (level < local_68->level) {
      uVar6 = const_recurse(equation,np,loc_00,level + 1,iflag);
      local_6c = local_6c | uVar6;
      if (((int)loc_00 < *np) && (level < local_68->level)) {
        piVar8 = &equation[loc_00 + 1].level;
        do {
          loc_00 = loc_00 + 1;
          if (*np <= (int)loc_00) break;
          iVar5 = *piVar8;
          piVar8 = piVar8 + 4;
        } while (level < iVar5);
      }
    }
    else {
      uVar12 = in_FPUStatusWord;
      if (local_68->kind == CONSTANT) {
        if (bVar4) {
          iVar5 = equation[loc_00 - 1].token.operatr;
          local_a0 = local_70;
          local_78 = equation + local_70;
          local_24[0] = (local_78->token).constant;
          p.re = (local_68->token).constant;
          op1p = (storage_type *)0x0;
          if (loc < (int)local_70) {
            op1p = &equation[local_70 - 1].token;
          }
          uVar13 = (undefined4)((ulonglong)p.re >> 0x20);
          uVar14 = uVar13;
          iVar7 = calc(&op1p->operatr,local_24,iVar5,p.re);
          uVar12 = in_FPUStatusWord;
          if (iVar7 != 0) {
            if ((iVar5 == 6) && (domain_check == 0)) {
              denominatorp = &local_34;
              numeratorp = &local_2c;
              iVar5 = f_to_fraction(p.re,numeratorp,denominatorp);
              if (iVar5 == 0) {
                if (iflag == 0) {
                  return local_6c;
                }
                if ((preserve_surds != 0) && (approximate_roots == 0)) {
                  return local_6c;
                }
                cv.re = local_24[0];
                cv.im = 0.0;
                p.im = 0.0;
                pcVar9 = &p;
                puVar10 = (undefined4 *)&stack0xffffff38;
                local_64 = np;
                local_60 = equation;
                for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar10 = *(undefined4 *)&pcVar9->re;
                  pcVar9 = (complexs *)((int)pcVar9 + (uint)bVar11 * -8 + 4);
                  puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
                }
                pcVar9 = &cv;
                puVar10 = (undefined4 *)&stack0xffffff28;
                for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar10 = *(undefined4 *)&pcVar9->re;
                  pcVar9 = (complexs *)((int)pcVar9 + (uint)bVar11 * -8 + 4);
                  puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
                }
                a.re._4_4_ = numeratorp;
                a.re._0_4_ = uVar13;
                a.im._0_4_ = denominatorp;
                a.im._4_4_ = uVar14;
                complex_pow(a,in_stack_ffffff38);
                if (n_tokens < *local_64 + 2) {
                  error_huge();
                }
                memmove(local_60 + local_a0 + 2,local_78,(*local_64 - local_70) * 0x10);
                *local_64 = *local_64 + 2;
                local_78->level = level;
                local_78->kind = CONSTANT;
                (local_78->token).constant = cv.re;
                ptVar1 = local_60 + local_70 + 1;
                ptVar1->level = level;
                ptVar1->kind = OPERATOR;
                (ptVar1->token).variable = 1;
                iVar5 = level + 1;
                local_68->level = iVar5;
                local_68->kind = VARIABLE;
                (local_68->token).variable = 3;
                ptVar1 = local_60 + loc_00 + 1;
                ptVar1->level = iVar5;
                ptVar1->kind = OPERATOR;
                (ptVar1->token).variable = 3;
                local_60 = local_60 + loc_00 + 2;
                local_60->level = iVar5;
                local_60->kind = CONSTANT;
                (local_60->token).constant = cv.im;
                return 1;
              }
              piVar8 = __errno_location();
              *piVar8 = 0;
              local_84 = pow(-local_24[0],p.re);
              check_err();
              dVar2 = local_34;
              do {
                dVar2 = dVar2 - (dVar2 / 2.0) * 2.0;
              } while ((in_FPUStatusWord & 0x400) != 0);
              uVar12 = in_FPUStatusWord & 0xfdff;
              dVar3 = local_2c;
              if (dVar2 == 0.0) {
                if (iflag == 0) {
                  return local_6c;
                }
                if (n_tokens < *np + 2) {
                  error_huge();
                }
                memmove(equation + local_70 + 2,local_78,(*np - local_70) * 0x10);
                *np = *np + 2;
                if ((float)p.re == 0.5) {
                  iVar5 = level + 1;
                  local_78->level = iVar5;
                  local_78->kind = CONSTANT;
                  (local_78->token).constant = -local_24[0];
                  ptVar1 = equation + local_70 + 1;
                  ptVar1->level = iVar5;
                  ptVar1->kind = OPERATOR;
                  (ptVar1->token).variable = 6;
                  local_68->level = iVar5;
                  local_68->kind = CONSTANT;
                  (local_68->token).constant = 0.5;
                  ptVar1 = equation + loc_00 + 1;
                  ptVar1->level = level;
                  ptVar1->kind = OPERATOR;
                  (ptVar1->token).variable = 3;
                  ptVar1 = equation + loc_00 + 2;
                  ptVar1->level = level;
                  ptVar1->kind = VARIABLE;
                  (ptVar1->token).variable = 3;
                  return 1;
                }
                local_78->level = level;
                local_78->kind = CONSTANT;
                (local_78->token).constant = local_84;
                ptVar1 = equation + local_70 + 1;
                ptVar1->level = level;
                ptVar1->kind = OPERATOR;
                (ptVar1->token).variable = 3;
                iVar5 = level + 1;
                local_68->level = iVar5;
                local_68->kind = VARIABLE;
                (local_68->token).variable = 3;
                ptVar1 = equation + loc_00 + 1;
                ptVar1->level = iVar5;
                ptVar1->kind = OPERATOR;
                (ptVar1->token).variable = 6;
                ptVar1 = equation + loc_00 + 2;
                ptVar1->level = iVar5;
                ptVar1->kind = CONSTANT;
                (ptVar1->token).constant = p.re + p.re;
                return 1;
              }
              do {
                dVar3 = dVar3 - (dVar3 / 2.0) * 2.0;
              } while ((in_FPUStatusWord & 0x400) != 0);
              if (dVar3 != 0.0) {
                local_84 = -local_84;
              }
              local_24[0] = local_84;
            }
            (local_78->token).constant = local_24[0];
            domain_check = 0;
            memmove(equation + (loc_00 - 1),equation + loc_00 + 1,(~loc_00 + *np) * 0x10);
            *np = *np + -2;
            loc_00 = loc_00 - 2;
            local_6c = 1;
          }
        }
        else {
          bVar4 = true;
          local_70 = loc_00;
        }
      }
      loc_00 = loc_00 + 1;
      in_FPUStatusWord = uVar12;
    }
  } while( true );
}



// WARNING: Unknown calling convention

int combine_constants(token_type *equation,int *np,int iflag)

{
  int iVar1;
  
  iVar1 = const_recurse(equation,np,0,1,iflag);
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x0805cccb)
// WARNING: Removing unreachable block (ram,0x0805ccc7)
// WARNING: Removing unreachable block (ram,0x0805cccd)
// WARNING: Removing unreachable block (ram,0x0805ce96)
// WARNING: Unknown calling convention

int integer_root_simp(token_type *equation,int *np)

{
  int iVar1;
  token_type *__src;
  token_type *ptVar2;
  token_type *__dest;
  double dVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int j;
  int k;
  int iVar8;
  int root;
  int iVar9;
  int i;
  token_type *ptVar10;
  ushort in_FPUStatusWord;
  ushort uVar11;
  double dVar12;
  double local_3c;
  int local_30;
  
  iVar8 = *np;
  iVar9 = 1;
  local_30 = 0;
  if (1 < iVar8 + -2) {
    do {
      ptVar10 = equation + iVar9;
      uVar11 = in_FPUStatusWord;
      if ((ptVar10->token).variable == 6) {
        __src = equation + iVar9 + -1;
        iVar4 = __src->level;
        if (iVar4 == ptVar10->level) {
          if ((((equation[iVar9 + 2].level == iVar4 + 1) &&
               (equation[iVar9 + 2].token.variable == 4)) &&
              (ptVar2 = equation + iVar9 + 3, equation[iVar9 + 2].level == ptVar2->level)) &&
             (((__src->kind == CONSTANT && (__dest = equation + iVar9 + 1, __dest->kind == CONSTANT)
               ) && ((ptVar2->kind == CONSTANT &&
                     ((iVar1 = iVar9 + 4, iVar8 <= iVar1 || (equation[iVar1].level < iVar4)))))))) {
            dVar12 = (__dest->token).constant;
            uVar11 = in_FPUStatusWord & 0xfdff;
            if ((1.0 <= dVar12) && (dVar3 = dVar12, dVar12 <= 50.0)) {
              do {
                dVar3 = dVar3 - (dVar3 / 1.0) * 1.0;
              } while ((in_FPUStatusWord & 0x400) != 0);
              if (dVar3 == 0.0) {
                piVar6 = __errno_location();
                *piVar6 = 0;
                dVar12 = pow((__src->token).constant,dVar12);
                if (*piVar6 == 0) {
                  dVar3 = (ptVar2->token).constant;
                  uVar11 = uVar11 & 0xfdff;
                  if ((((dVar3 <= 50.0) && (2.0 <= dVar3)) &&
                      (iVar8 = (int)ROUND(dVar3), dVar3 == (double)iVar8)) &&
                     ((1 < iVar8 && (iVar7 = factor_one(dVar12), iVar5 = uno, iVar7 != 0)))) {
                    local_3c = 1.0;
                    for (iVar7 = 0; iVar7 < iVar5; iVar7 = iVar7 + 1) {
                      while (iVar8 <= ucnt[iVar7]) {
                        local_3c = local_3c * unique[iVar7];
                        ucnt[iVar7] = ucnt[iVar7] - iVar8;
                      }
                    }
                    uVar11 = uVar11 & 0xfdff;
                    if (local_3c != 1.0) {
                      if (n_tokens < *np + 2) {
                        error_huge();
                      }
                      (__dest->token).constant = 1.0;
                      dVar12 = multiply_out_unique();
                      (__src->token).constant = dVar12;
                      iVar8 = iVar9 + -1;
                      piVar6 = &equation[iVar8].level;
                      for (; iVar8 < iVar1; iVar8 = iVar8 + 1) {
                        *piVar6 = *piVar6 + 1;
                        piVar6 = piVar6 + 4;
                      }
                      memmove(__dest,__src,((*np + 1) - iVar9) * 0x10);
                      *np = *np + 2;
                      ptVar10->level = iVar4;
                      ptVar10->kind = OPERATOR;
                      (ptVar10->token).variable = 3;
                      __src->level = iVar4;
                      __src->kind = CONSTANT;
                      (__src->token).constant = local_3c;
                      iVar9 = iVar9 + 2;
                      local_30 = 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar9 = iVar9 + 2;
      iVar8 = *np;
      in_FPUStatusWord = uVar11;
    } while (iVar9 < iVar8 + -2);
  }
  return local_30;
}



// WARNING: Unknown calling convention

void organize(token_type *equation,int *np)

{
  uint uVar1;
  
  uVar1 = *np;
  if (((int)uVar1 < 1) || ((uVar1 & 1) == 0)) {
    __printf_chk(1,"Bad expression size = %d.\n",uVar1);
    error_bug("Internal error: organize() called with bad expression size.");
  }
  if (n_tokens < *np) {
    error_bug("Internal error: expression array overflow detected in organize().");
  }
  org_recurse(equation,np,0,1,(int *)0x0);
  return;
}



// WARNING: Unknown calling convention

void elim_loop(token_type *equation,int *np)

{
  int iVar1;
  
  if (abort_flag == 0) {
    list_debug(6,equation,*np,(token_type *)0x0,0);
    do {
      do {
        organize(equation,np);
        iVar1 = combine_constants(equation,np,1);
      } while (iVar1 != 0);
      iVar1 = elim_k(equation,np);
    } while ((iVar1 != 0) || (iVar1 = simp_pp(equation,np), iVar1 != 0));
    iVar1 = reorder(equation,np);
    while (iVar1 != 0) {
      organize(equation,np);
      iVar1 = elim_k(equation,np);
    }
    list_debug(5,equation,*np,(token_type *)0x0,0);
    return;
  }
  abort_flag = 0;
                    // WARNING: Subroutine does not return
  __longjmp_chk(jmp_save,0xd);
}



// WARNING: Unknown calling convention

int simp_loop(token_type *equation,int *np)

{
  int i;
  int iVar1;
  int iVar2;
  int rv;
  
  iVar2 = 0;
  do {
    do {
      while( true ) {
        do {
          elim_loop(equation,np);
          iVar1 = simp2_power(equation,np);
        } while (iVar1 != 0);
        iVar1 = factor_times(equation,np);
        if (iVar1 == 0) break;
        iVar2 = 1;
      }
      iVar1 = elim_sign(equation,np);
    } while (iVar1 != 0);
    iVar1 = subtract_itself(equation,np);
  } while (iVar1 != 0);
  return iVar2;
}



// WARNING: Unknown calling convention

void simp_divide(token_type *equation,int *np)

{
  int iVar1;
  
  do {
    do {
      simp_loop(equation,np);
      iVar1 = factor_constants(equation,np,1);
    } while (iVar1 != 0);
    iVar1 = factor_divide(equation,np,0,0.0);
  } while (iVar1 != 0);
  return;
}



// WARNING: Unknown calling convention

void factorv(token_type *equation,int *np,long v)

{
  int iVar1;
  
  if (v == 3) {
    approximate_complex_roots(equation,np);
  }
  while( true ) {
    do {
      simp_loop(equation,np);
      iVar1 = factor_plus(equation,np,v,0.0);
    } while (iVar1 != 0);
    if (v != 3) break;
    iVar1 = div_imaginary(equation,np);
    if (iVar1 == 0) {
      return;
    }
  }
  return;
}



// WARNING: Unknown calling convention

void simp_equation(int n)

{
  if (0 < n_lhs[n]) {
    simp_loop(lhs[n],n_lhs + n);
    if (n_rhs[n] != 0) {
      simp_loop(rhs[n],n_rhs + n);
    }
  }
  return;
}



// WARNING: Unknown calling convention

void simp2_divide(token_type *equation,int *np,long v,int fc_level)

{
  int iVar1;
  
  do {
    do {
      do {
        do {
          do {
            elim_loop(equation,np);
            iVar1 = simp2_power(equation,np);
          } while (iVar1 != 0);
          iVar1 = elim_sign(equation,np);
        } while (iVar1 != 0);
        iVar1 = subtract_itself(equation,np);
      } while (iVar1 != 0);
      iVar1 = factor_constants(equation,np,fc_level);
    } while (iVar1 != 0);
    iVar1 = factor_divide(equation,np,v,0.0);
  } while (iVar1 != 0);
  return;
}



// WARNING: Unknown calling convention

void simp_ssub(token_type *equation,int *np,long v,double d,int power_flag,int times_flag,
              int fc_level)

{
  int iVar1;
  
  while( true ) {
    do {
      do {
        elim_loop(equation,np);
        iVar1 = simp2_power(equation,np);
      } while (iVar1 != 0);
    } while ((((times_flag != 0) && (iVar1 = factor_times(equation,np), iVar1 != 0)) ||
             (iVar1 = elim_sign(equation,np), iVar1 != 0)) ||
            (((iVar1 = subtract_itself(equation,np), iVar1 != 0 ||
              (iVar1 = factor_constants(equation,np,fc_level), iVar1 != 0)) ||
             ((iVar1 = factor_divide(equation,np,v,d), iVar1 != 0 ||
              (iVar1 = factor_plus(equation,np,v,d), iVar1 != 0))))));
    if (power_flag == 0) break;
    iVar1 = factor_power(equation,np);
    if (iVar1 == 0) {
      return;
    }
  }
  return;
}



// WARNING: Unknown calling convention

void simpb_side(token_type *equation,int *np,int uf_power_flag,int power_flag,int fc_level)

{
  int iVar1;
  long last_v;
  token_type *ptVar2;
  int i;
  int iVar3;
  long v1;
  int iVar4;
  int iVar5;
  int local_1f64;
  size_t local_1f60;
  sort_type va [1000];
  
  simp_loop(equation,np);
  if (uf_power_flag != 0) {
    uf_allpower(equation,np);
  }
  local_1f60 = 0;
  iVar5 = 0;
  do {
    if (*np < 1) break;
    iVar4 = -1;
    local_1f64 = 0;
    iVar3 = 0;
    ptVar2 = equation;
    do {
      if ((ptVar2->kind == VARIABLE) && (iVar1 = (ptVar2->token).variable, iVar5 < iVar1)) {
        if ((iVar4 == -1) || (iVar1 < iVar4)) {
          local_1f64 = 1;
          iVar4 = iVar1;
        }
        else if (iVar4 == iVar1) {
          local_1f64 = local_1f64 + 1;
        }
      }
      iVar3 = iVar3 + 2;
      ptVar2 = ptVar2 + 2;
    } while (iVar3 < *np);
    if (iVar4 == -1) break;
    if (3 < iVar4) {
      va[local_1f60].v = iVar4;
      va[local_1f60].count = local_1f64;
      local_1f60 = local_1f60 + 1;
    }
    iVar5 = iVar4;
  } while ((int)local_1f60 < 1000);
  if (local_1f60 != 0) {
    qsort(va,local_1f60,8,simpb_vcmp);
    simp2_divide(equation,np,va[0].v,fc_level);
    if (1 < (int)local_1f60) {
      iVar5 = 1;
      do {
        iVar4 = factor_divide(equation,np,va[iVar5].v,0.0);
        if (iVar4 != 0) {
          simp2_divide(equation,np,va[iVar5].v,fc_level);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_1f60);
    }
    simp2_divide(equation,np,0,fc_level);
    iVar5 = 0;
    if (0 < (int)local_1f60) {
      do {
        while (iVar4 = factor_plus(equation,np,va[iVar5].v,0.0), iVar4 != 0) {
          simp2_divide(equation,np,0,fc_level);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_1f60);
    }
    while (iVar5 = factor_plus(equation,np,5,0.0), iVar5 != 0) {
      simp2_divide(equation,np,0,fc_level);
    }
  }
  simp_ssub(equation,np,5,0.0,power_flag,1,fc_level);
  return;
}



// WARNING: Unknown calling convention

void simple_frac_side(token_type *equation,int *np)

{
  int iVar1;
  
  if (0 < *np) {
    do {
      do {
        do {
          simp_ssub(equation,np,0,1.0,0,1,5);
          iVar1 = poly_gcd_simp(equation,np);
        } while (iVar1 != 0);
        iVar1 = uf_power(equation,np);
      } while (iVar1 != 0);
      iVar1 = super_factor(equation,np,2);
    } while (iVar1 != 0);
    list_debug(2,equation,*np,(token_type *)0x0,0);
    make_fractions(equation,np);
    uf_tsimp(equation,np);
    poly_factor(equation,np,1);
    simpb_side(equation,np,1,0,2);
    fractions_and_group(equation,np);
  }
  return;
}



// WARNING: Unknown calling convention

void simpv_side(token_type *equation,int *np,long v)

{
  if (*np != 0) {
    simp_ssub(equation,np,v,0.0,(uint)(v == 0),1,6);
  }
  return;
}



// WARNING: Unknown calling convention

void simp_side(token_type *equation,int *np)

{
  simp_ssub(equation,np,0,1.0,1,1,6);
  return;
}



// WARNING: Unknown calling convention

void calc_simp(token_type *equation,int *np)

{
  approximate_roots = 1;
  subst_constants(equation,np);
  simp_side(equation,np);
  uf_power(equation,np);
  factorv(equation,np,3);
  ufactor(equation,np);
  factorv(equation,np,3);
  uf_simp(equation,np);
  factorv(equation,np,3);
  simp_side(equation,np);
  make_fractions(equation,np);
  uf_tsimp(equation,np);
  approximate_roots = 0;
  return;
}



// WARNING: Unknown calling convention

void simps_side(token_type *equation,int *np,int zsolve)

{
  int iVar1;
  
  elim_loop(equation,np);
  simp_constant_power(equation,np);
  do {
    simp_ssub(equation,np,0,0.0,(uint)(zsolve == 0),1,6);
    iVar1 = super_factor(equation,np,0);
  } while (iVar1 != 0);
  return;
}



// WARNING: Unknown calling convention

void simp_i(token_type *equation,int *np)

{
  int iVar1;
  token_type *ptVar2;
  int iVar3;
  int i;
  
  simp_loop(equation,np);
  iVar1 = *np;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      ptVar2 = equation + iVar3;
      if ((ptVar2->kind == VARIABLE) && ((ptVar2->token).variable == 3)) {
        if (n_tokens < iVar1 + 2) {
          error_huge();
        }
        iVar1 = ptVar2->level + 1;
        memmove(equation + iVar3 + 2,ptVar2,(*np - iVar3) * 0x10);
        *np = *np + 2;
        ptVar2->level = iVar1;
        ptVar2->kind = CONSTANT;
        (ptVar2->token).constant = -1.0;
        ptVar2 = equation + iVar3 + 1;
        ptVar2->level = iVar1;
        ptVar2->kind = OPERATOR;
        (ptVar2->token).variable = 6;
        iVar3 = iVar3 + 2;
        ptVar2 = equation + iVar3;
        ptVar2->level = iVar1;
        ptVar2->kind = CONSTANT;
        (ptVar2->token).constant = 0.5;
      }
      iVar3 = iVar3 + 2;
      iVar1 = *np;
    } while (iVar3 < iVar1);
  }
  do {
    do {
      organize(equation,np);
      combine_constants(equation,np,0);
      iVar1 = elim_k(equation,np);
    } while (iVar1 != 0);
    iVar1 = simp_pp(equation,np);
  } while (((iVar1 != 0) || (iVar1 = factor_power(equation,np), iVar1 != 0)) ||
          (iVar1 = factor_times(equation,np), iVar1 != 0));
  simp_loop(equation,np);
  return;
}



// WARNING: Unknown calling convention

void simpa_side(token_type *equation,int *np,int quick_flag,int frac_flag)

{
  bool bVar1;
  int iVar2;
  int i;
  int flag;
  jmp_buf save_save;
  
  if (*np < 2) {
    return;
  }
  list_debug(2,equation,*np,(token_type *)0x0,0);
  simpb_side(equation,np,0,1,1);
  if (rationalize_denominators != 0) {
    rationalize(equation,np);
  }
  unsimp_power(equation,np);
  uf_times(equation,np);
  simp_loop(equation,np);
  uf_pplus(equation,np);
  uf_repeat(equation,np);
  do {
    elim_loop(equation,np);
    iVar2 = mod_simp(equation,np);
  } while (iVar2 != 0);
  simp_i(equation,np);
  unsimp_power(equation,np);
  uf_times(equation,np);
  simp_ssub(equation,np,0,1.0,1,1,1);
  unsimp_power(equation,np);
  uf_neg_help(equation,np);
  uf_times(equation,np);
  do {
    do {
      simp_ssub(equation,np,0,1.0,0,1,2);
      iVar2 = poly_gcd_simp(equation,np);
    } while (iVar2 != 0);
    iVar2 = uf_power(equation,np);
  } while ((iVar2 != 0) || (iVar2 = super_factor(equation,np,2), iVar2 != 0));
  unsimp_power(equation,np);
  uf_times(equation,np);
  factorv(equation,np,3);
  uf_pplus(equation,np);
  simp_ssub(equation,np,0,1.0,1,0,1);
  uf_times(equation,np);
  uf_pplus(equation,np);
  factorv(equation,np,3);
  uf_power(equation,np);
  do {
    do {
      simp_ssub(equation,np,0,1.0,0,1,6);
      iVar2 = poly_gcd_simp(equation,np);
    } while (iVar2 != 0);
    iVar2 = uf_power(equation,np);
  } while ((iVar2 != 0) || (iVar2 = super_factor(equation,np,2), iVar2 != 0));
  partial_flag = frac_flag;
  n_tlhs = *np;
  memmove(tlhs,equation,n_tlhs << 4);
  memmove(save_save,jmp_save,0x9c);
  iVar2 = _setjmp((__jmp_buf_tag *)jmp_save);
  if (iVar2 == 0) {
    if (quick_flag == 0) {
      do {
        uf_power(equation,np);
        uf_repeat(equation,np);
        iVar2 = uf_tsimp(equation,np);
      } while (iVar2 != 0);
    }
    else {
      uf_tsimp(equation,np);
    }
    memmove(jmp_save,save_save,0x9c);
  }
  else {
    memmove(jmp_save,save_save,0x9c);
    if (iVar2 == 0xd) {
                    // WARNING: Subroutine does not return
      __longjmp_chk(jmp_save,0xd);
    }
    *np = n_tlhs;
    memmove(equation,tlhs,n_tlhs << 4);
    if (0 < debug_level) {
      __fprintf_chk(gfp,1,"%s\n","Simplify not expanding fully, due to oversized expression.");
    }
    partial_flag = 1;
    uf_tsimp(equation,np);
  }
  partial_flag = 1;
  simpb_side(equation,np,1,1,2);
  if (0 < debug_level) {
    __fprintf_chk(gfp,1,"%s\n","Simplify result before applying polynomial operations:");
  }
  list_debug(1,equation,*np,(token_type *)0x0,0);
  bVar1 = false;
  do {
    while (iVar2 = poly_gcd_simp(equation,np), iVar2 == 0) {
      if (!bVar1) goto LAB_0805dff8;
LAB_0805e04a:
      if ((frac_flag != 0) || (iVar2 = div_remainder(equation,np,1,quick_flag), iVar2 == 0)) {
        simp_constant_power(equation,np);
        simp_ssub(equation,np,0,1.0,1,1,5);
        unsimp_power(equation,np);
        make_fractions(equation,np);
        factor_power(equation,np);
        uf_tsimp(equation,np);
        make_fractions(equation,np);
        uf_power(equation,np);
        integer_root_simp(equation,np);
        simpb_side(equation,np,1,1,3);
        poly_factor(equation,np,0);
        simpb_side(equation,np,1,(uint)(frac_flag == 0),2);
        return;
      }
      simpb_side(equation,np,0,1,3);
      bVar1 = false;
    }
    simpb_side(equation,np,0,1,3);
LAB_0805dff8:
    iVar2 = poly_factor(equation,np,1);
    if (iVar2 == 0) goto LAB_0805e04a;
    simpb_side(equation,np,0,1,3);
    bVar1 = true;
  } while( true );
}



// WARNING: Unknown calling convention

void simpa_repeat_side(token_type *equation,int *np,int quick_flag,int frac_flag)

{
  simpa_side(equation,np,quick_flag,frac_flag);
  if (repeat_flag != 0) {
    do {
      n_tes = *np;
      memmove(tes,equation,n_tes << 4);
      simpa_side(equation,np,quick_flag,frac_flag);
    } while (*np < n_tes);
    if (n_tes != *np) {
      *np = n_tes;
      memmove(equation,tes,n_tes << 4);
    }
  }
  return;
}



// WARNING: Unknown calling convention

int fpower_recurse(token_type *equation,int *np,int loc,int level)

{
  bool bVar1;
  token_type *ptVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int i;
  int iVar10;
  int iVar11;
  token_type *ptVar12;
  uint uVar13;
  int len;
  int iVar14;
  int iVar15;
  int k;
  uint uVar16;
  int b2;
  bool bVar17;
  uint local_88;
  int local_78;
  uint local_74;
  uint local_6c;
  int local_68;
  long local_50;
  int local_4c;
  token_type *local_3c;
  int local_30;
  uint local_20 [4];
  
  i = loc + 1;
  if (i < *np) {
    ptVar12 = equation + i;
    if (level <= ptVar12->level) {
      if (ptVar12->level != level) {
        ptVar2 = equation + loc + 3;
        do {
          ptVar12 = ptVar2;
          i = i + 2;
          if ((*np <= i) || (ptVar12->level < level)) goto LAB_0805e32a;
          ptVar2 = ptVar12 + 2;
        } while (ptVar12->level != level);
      }
      if ((ptVar12->token).variable - 3U < 2) {
        local_88 = 0;
        iVar15 = level + 1;
        iVar14 = level + 2;
        local_4c = loc;
LAB_0805e347:
        do {
          uVar13 = local_4c + 1;
          iVar10 = *np;
          uVar3 = uVar13;
          if (((int)uVar13 < iVar10) && (level < equation[uVar13].level)) {
            piVar9 = &equation[local_4c + 3].level;
            do {
              uVar3 = uVar3 + 2;
              if (iVar10 <= (int)uVar3) break;
              iVar4 = *piVar9;
              piVar9 = piVar9 + 8;
            } while (level < iVar4);
          }
          iVar4 = uVar3 - local_4c;
          uVar3 = iVar4 + local_4c;
          local_30 = uVar3 + 1;
          if ((local_30 < iVar10) && (local_3c = equation + uVar3, level <= local_3c->level)) {
LAB_0805e40b:
            uVar16 = local_30 + 1;
            uVar5 = uVar16;
            if (((int)uVar16 < iVar10) && (level < equation[uVar16].level)) {
              piVar9 = &equation[local_30 + 3].level;
              do {
                uVar5 = uVar5 + 2;
                if (iVar10 <= (int)uVar5) break;
                iVar7 = *piVar9;
                piVar9 = piVar9 + 8;
              } while (level < iVar7);
            }
            uVar5 = uVar5 - local_30;
            iVar10 = (local_3c->token).variable;
            local_50 = 3;
            local_74 = uVar13;
            piVar9 = &equation[uVar13].level;
            if (loc < local_4c) {
              local_50 = equation[local_4c + -1].token.variable;
            }
            for (; (int)local_74 < (int)uVar3; local_74 = local_74 + 2) {
              if ((iVar15 == *piVar9) && (((storage_type *)(piVar9 + 1))->variable == 6)) {
                uVar6 = uVar5 + local_30;
                if ((int)uVar16 < (int)uVar6) {
                  piVar9 = &equation[uVar16].level;
                  goto LAB_0805e4df;
                }
                break;
              }
              piVar9 = piVar9 + 8;
            }
            goto LAB_0805eabf;
          }
LAB_0805ead9:
          local_4c = iVar4 + uVar13;
        } while ((local_4c < iVar10) && (level <= equation[local_4c + -1].level));
        goto LAB_0805e334;
      }
    }
  }
LAB_0805e32a:
  local_88 = 0;
LAB_0805e334:
  do {
    do {
      while( true ) {
        iVar14 = loc;
        if ((*np <= iVar14) || (equation[iVar14].level < level)) {
          return local_88;
        }
        if (level < equation[iVar14].level) break;
        loc = iVar14 + 1;
      }
      uVar3 = fpower_recurse(equation,np,iVar14,level + 1);
      local_88 = local_88 | uVar3;
      loc = iVar14 + 1;
    } while ((*np <= loc) || (equation[loc].level <= level));
    piVar9 = &equation[iVar14 + 3].level;
    do {
      loc = loc + 2;
      if (*np <= loc) break;
      iVar14 = *piVar9;
      piVar9 = piVar9 + 8;
    } while (level < iVar14);
  } while( true );
LAB_0805e4df:
  if ((iVar15 != *piVar9) || (((storage_type *)(piVar9 + 1))->variable != 6)) {
    uVar16 = uVar16 + 2;
    piVar9 = piVar9 + 8;
    if ((int)uVar6 <= (int)uVar16) goto LAB_0805eabf;
    goto LAB_0805e4df;
  }
  iVar7 = se_compare(equation + local_74 + 1,~local_74 + uVar3,&one_token,1,(int *)local_20);
  if (iVar7 != 0) goto LAB_0805eabf;
  iVar7 = se_compare(equation + local_74 + 1,~local_74 + uVar3,equation + uVar16 + 1,~uVar16 + uVar6
                     ,(int *)local_20);
  if (iVar7 == 0) goto LAB_0805e5c2;
  local_78 = local_74 + 1;
  iVar7 = uVar16 + 1;
  local_68 = 3;
  local_74 = uVar3;
  local_6c = uVar6;
common_exponent:
  if (iVar10 == 4) {
    local_20[0] = (uint)(local_20[0] == 0);
  }
  bVar17 = local_50 != 4;
  bVar1 = local_20[0] == 0;
  iVar10 = local_78 - local_4c;
  memmove(scratch,equation + local_4c,iVar10 * 0x10);
  scratch[iVar10].level = iVar14;
  scratch[iVar10].kind = CONSTANT;
  if (local_50 == 4 && (bVar17 || bVar1)) {
    scratch[iVar10].token.constant = -1.0;
  }
  else {
    scratch[iVar10].token.constant = 1.0;
  }
  len = iVar10 + 1;
  memmove(scratch + len,equation + local_74,(uVar3 - local_74) * 0x10);
  iVar10 = len + (uVar3 - local_74);
  if (0 < iVar10) {
    iVar11 = 0;
    do {
      scratch[iVar11].level = scratch[iVar11].level + 2;
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar10);
  }
  scratch[iVar10].level = iVar14;
  scratch[iVar10].kind = OPERATOR;
  scratch[iVar10].token.variable = 3;
  iVar10 = iVar10 + 1;
  memmove(scratch + iVar10,equation + local_30,(iVar7 - local_30) * 0x10);
  iVar7 = iVar10 + (iVar7 - local_30);
  scratch[iVar7].level = iVar14;
  scratch[iVar7].kind = CONSTANT;
  if ((bVar17 || bVar1) && (local_20[0] != 0)) {
    scratch[iVar7].token.constant = -1.0;
  }
  else {
    scratch[iVar7].token.constant = 1.0;
  }
  memmove(scratch + iVar7 + 1,equation + local_6c,(uVar6 - local_6c) * 0x10);
  iVar7 = iVar7 + 1 + (uVar6 - local_6c);
  if (iVar10 < iVar7) {
    iVar11 = iVar10 * 0x10;
    do {
      piVar9 = (int *)((int)&scratch->level + iVar11);
      *piVar9 = *piVar9 + 2;
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + 0x10;
    } while (iVar10 < iVar7);
  }
  scratch[iVar7].level = iVar15;
  scratch[iVar7].kind = OPERATOR;
  scratch[iVar7].token.variable = 6;
  iVar10 = iVar7 + 1;
  if (local_68 == 4) {
    scratch[iVar10].level = iVar14;
    scratch[iVar10].kind = CONSTANT;
    scratch[iVar10].token.constant = 1.0;
    iVar10 = iVar7 + 2;
    scratch[iVar10].level = iVar14;
    scratch[iVar10].kind = OPERATOR;
    scratch[iVar10].token.variable = 4;
    iVar10 = iVar7 + 3;
  }
  iVar7 = iVar10 * 0x10;
  memmove(scratch + iVar10,equation + local_78,(local_74 - local_78) * 0x10);
  iVar11 = (local_74 - local_78) + iVar10;
  for (; iVar10 < iVar11; iVar10 = iVar10 + 1) {
    piVar9 = (int *)((int)&scratch->level + iVar7);
    *piVar9 = *piVar9 + 1;
    iVar7 = iVar7 + 0x10;
  }
  if (n_tokens < (int)((~uVar5 - iVar4) + *np + iVar11)) {
    error_huge();
  }
  if (local_50 == 4 && (bVar17 || bVar1)) {
    equation[local_4c + -1].token.variable = 3;
  }
  memmove(local_3c,equation + uVar6,(*np - uVar6) * 0x10);
  iVar10 = ~uVar5 + *np;
  *np = iVar10;
  memmove(equation + iVar11 + local_4c,equation + uVar3,(iVar10 - uVar3) * 0x10);
  *np = *np + (iVar11 - iVar4);
  memmove(equation + local_4c,scratch,iVar11 * 0x10);
  local_88 = 1;
  goto LAB_0805e347;
LAB_0805e5c2:
  while( true ) {
    local_68 = 3;
    if (equation[local_74].token.variable != 6) {
      local_68 = equation[local_74].token.variable;
    }
    local_78 = local_74 + 1;
    if ((int)uVar3 <= local_78) break;
    uVar8 = local_74 + 2;
    if ((int)uVar8 < (int)uVar3) {
      piVar9 = &equation[local_74 + 2].level;
      do {
        if ((*piVar9 == iVar14) && (((storage_type *)(piVar9 + 1))->variable - 3U < 2)) break;
        uVar8 = uVar8 + 2;
        piVar9 = piVar9 + 8;
      } while ((int)uVar8 < (int)uVar3);
    }
    local_74 = uVar8;
    iVar7 = se_compare(equation + local_78,local_74 - local_78,&one_token,1,(int *)local_20);
    uVar8 = uVar16;
    if (iVar7 == 0) {
LAB_0805e66f:
      while (iVar7 = uVar8 + 1, iVar7 < (int)uVar6) {
        local_6c = uVar8 + 2;
        if ((int)local_6c < (int)uVar6) {
          piVar9 = &equation[uVar8 + 2].level;
          do {
            if ((*piVar9 == iVar14) && (((storage_type *)(piVar9 + 1))->variable - 3U < 2)) break;
            local_6c = local_6c + 2;
            piVar9 = piVar9 + 8;
          } while ((int)local_6c < (int)uVar6);
        }
        ptVar12 = equation + uVar8;
        uVar8 = local_6c;
        if ((ptVar12->token).variable != 6) goto LAB_0805e6c6;
        if (local_68 == 3) goto LAB_0805e6d2;
      }
    }
  }
LAB_0805eabf:
  local_30 = uVar5 + 1 + local_30;
  iVar10 = *np;
  if ((iVar10 <= local_30) || (local_3c = equation + local_30 + -1, local_3c->level < level))
  goto LAB_0805ead9;
  goto LAB_0805e40b;
LAB_0805e6c6:
  if ((ptVar12->token).variable == local_68) {
LAB_0805e6d2:
    iVar11 = se_compare(equation + local_78,local_74 - local_78,equation + iVar7,local_6c - iVar7,
                        (int *)local_20);
    if (iVar11 != 0) goto common_exponent;
  }
  goto LAB_0805e66f;
}



// WARNING: Unknown calling convention

int factor_power(token_type *equation,int *np)

{
  int iVar1;
  
  iVar1 = fpower_recurse(equation,np,0,1);
  return iVar1;
}



// WARNING: Unknown calling convention

int ftimes_recurse(token_type *equation,int *np,int loc,int level)

{
  bool bVar1;
  int k;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  token_type *ptVar6;
  int iVar7;
  int len;
  int *piVar8;
  int iVar9;
  bool bVar10;
  int i;
  token_type *ptVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int i_1;
  int iVar15;
  int iVar16;
  uint local_88;
  int local_64;
  int local_5c;
  long local_54;
  token_type *local_38;
  int local_34;
  int local_20 [4];
  
  i = loc + 1;
  if (i < *np) {
    ptVar11 = equation + i;
    if (level <= ptVar11->level) {
      if (ptVar11->level != level) {
        ptVar6 = equation + loc + 3;
        do {
          ptVar11 = ptVar6;
          i = i + 2;
          if ((*np <= i) || (ptVar11->level < level)) goto LAB_0805f393;
          ptVar6 = ptVar11 + 2;
        } while (ptVar11->level != level);
      }
      local_88 = 0;
      if ((ptVar11->token).variable - 3U < 2) {
        iVar16 = level + 1;
        local_5c = loc;
LAB_0805ec48:
        do {
          iVar12 = local_5c + 1;
          iVar15 = *np;
          iVar2 = iVar12;
          if ((iVar12 < iVar15) && (level < equation[iVar12].level)) {
            piVar8 = &equation[local_5c + 3].level;
            do {
              iVar2 = iVar2 + 2;
              if (iVar15 <= iVar2) break;
              iVar3 = *piVar8;
              piVar8 = piVar8 + 8;
            } while (level < iVar3);
          }
          iVar2 = iVar2 - local_5c;
          iVar3 = iVar2 + local_5c;
          local_34 = iVar3 + 1;
          if ((local_34 < iVar15) && (local_38 = equation + iVar3, level <= local_38->level)) {
            ptVar11 = equation + local_5c;
LAB_0805ed1f:
            iVar13 = local_34 + 1;
            iVar4 = iVar13;
            if ((iVar13 < iVar15) && (level < equation[iVar13].level)) {
              piVar8 = &equation[local_34 + 3].level;
              do {
                iVar4 = iVar4 + 2;
                if (iVar15 <= iVar4) break;
                iVar14 = *piVar8;
                piVar8 = piVar8 + 8;
              } while (level < iVar14);
            }
            uVar5 = iVar4 - local_34;
            iVar15 = (local_38->token).variable;
            local_54 = 3;
            if (loc < local_5c) {
              local_54 = equation[local_5c + -1].token.variable;
            }
            if (((iVar2 != 1) || (ptVar11->kind != CONSTANT)) &&
               ((uVar5 != 1 || (equation[local_34].kind != CONSTANT)))) {
              iVar9 = uVar5 + local_34;
              ptVar6 = equation + local_34;
              iVar7 = se_compare(ptVar11,iVar2,ptVar6,uVar5,local_20);
              iVar14 = iVar9;
              iVar4 = iVar12;
              piVar8 = &equation[iVar12].level;
              if (iVar7 == 0) {
                for (; (iVar4 < iVar3 &&
                       ((iVar16 != *piVar8 || (((storage_type *)(piVar8 + 1))->variable != 6))));
                    piVar8 = piVar8 + 8) {
                  iVar4 = iVar4 + 2;
                }
                if (iVar13 < iVar9) {
                  piVar8 = &equation[iVar13].level;
                  do {
                    if ((iVar16 == *piVar8) && (((storage_type *)(piVar8 + 1))->variable == 6))
                    break;
                    iVar13 = iVar13 + 2;
                    piVar8 = piVar8 + 8;
                  } while (iVar13 < iVar9);
                }
                if ((iVar4 < iVar3) || (iVar13 < iVar9)) {
                  iVar7 = se_compare(ptVar11,iVar4 - local_5c,ptVar6,iVar13 - local_34,local_20);
                  iVar14 = iVar13;
                  if (iVar7 != 0) {
common_base:
                    if (iVar3 == iVar4) goto LAB_0805ef15;
                    local_64 = (iVar3 + -1) - iVar4;
                    goto LAB_0805ef1f;
                  }
                  if ((iVar4 < iVar3) && (iVar13 < iVar9)) {
                    iVar13 = se_compare(ptVar11,iVar2,ptVar6,iVar13 - local_34,local_20);
                    if (iVar13 != 0) goto LAB_0805ef15;
                    iVar13 = se_compare(ptVar11,iVar4 - local_5c,ptVar6,uVar5,local_20);
                    iVar14 = iVar9;
                    if (iVar13 != 0) goto common_base;
                  }
                }
              }
              else {
LAB_0805ef15:
                local_64 = 1;
                iVar4 = iVar3;
LAB_0805ef1f:
                bVar1 = local_54 != 4;
                bVar10 = local_54 == 4 && (iVar15 != 4 || bVar1);
                iVar13 = 1;
                if (iVar9 != iVar14) {
                  iVar13 = (iVar9 + -1) - iVar14;
                }
                if (((iVar14 - local_34 != 1) || (ptVar6->kind != CONSTANT)) ||
                   ((ptVar6->token).constant != -1.0)) {
                  len = ((int)((uint)bVar10 << 0x1f) >> 0x1f & 2U) +
                        ((2 - local_5c) - iVar2) + local_64 + iVar4 + iVar13;
                  if (local_20[0] != 0) {
                    if ((iVar14 - local_34 == 1) && (ptVar6->kind == CONSTANT)) goto LAB_0805f2d8;
                    iVar2 = (iVar9 + 2) - iVar14;
                    if (n_tokens < len + *np + iVar2) {
                      error_huge();
                    }
                    ptVar6 = equation + iVar9;
                    memmove(equation + iVar2 + iVar9,ptVar6,(*np - iVar9) * 0x10);
                    *np = *np + iVar2;
                    ptVar6->level = level;
                    ptVar6->kind = OPERATOR;
                    (ptVar6->token).variable = iVar15;
                    ptVar6 = equation + iVar9 + 1;
                    ptVar6->level = iVar16;
                    ptVar6->kind = CONSTANT;
                    (ptVar6->token).constant = -1.0;
                    memmove(equation + iVar9 + 2,equation + iVar14,(iVar9 - iVar14) * 0x10);
                  }
                  if (n_tokens < len + *np) {
                    error_huge();
                  }
                  ptVar6 = equation + iVar3;
                  memmove(equation + len + iVar3,ptVar6,(*np - iVar3) * 0x10);
                  *np = *np + len;
                  if (iVar3 == iVar4) {
                    if (local_5c < iVar3) {
                      piVar8 = &ptVar11->level;
                      iVar2 = local_5c;
                      do {
                        *piVar8 = *piVar8 + 1;
                        iVar2 = iVar2 + 1;
                        piVar8 = piVar8 + 4;
                      } while (iVar2 < iVar3);
                    }
                    ptVar6->level = iVar16;
                    ptVar6->kind = OPERATOR;
                    (ptVar6->token).variable = 6;
                    ptVar11 = equation + iVar3 + 1;
                    ptVar11->level = iVar16;
                    ptVar11->kind = CONSTANT;
                    (ptVar11->token).constant = 1.0;
                  }
                  iVar2 = iVar4;
                  if (bVar10) {
                    equation[local_5c + -1].token.variable = 3;
                    ptVar11 = equation + iVar4 + 1;
                    memmove(equation + iVar4 + 3,ptVar11,local_64 << 4);
                    ptVar11->level = iVar16;
                    ptVar11->kind = CONSTANT;
                    (ptVar11->token).constant = -1.0;
                    iVar2 = iVar4 + 2;
                    ptVar11 = equation + iVar2;
                    ptVar11->level = iVar16;
                    ptVar11->kind = OPERATOR;
                    (ptVar11->token).variable = 3;
                    binary_parenthesize(equation,iVar4 + 3 + local_64,iVar2);
                  }
                  local_64 = iVar2 + 1 + local_64;
                  ptVar11 = equation + local_64;
                  ptVar11->level = iVar16;
                  ptVar11->kind = OPERATOR;
                  if ((iVar15 != 4 || bVar1) && (iVar15 == 4)) {
                    (ptVar11->token).variable = 2;
                  }
                  else {
                    (ptVar11->token).variable = 1;
                  }
                  if (iVar9 == iVar14) {
                    ptVar11 = equation + local_64 + 1;
                    ptVar11->level = iVar16;
                    ptVar11->kind = CONSTANT;
                    (ptVar11->token).constant = 1.0;
                    binary_parenthesize(equation,local_64 + 2,local_64);
                  }
                  else {
                    memmove(equation + local_64 + 1,equation + len + 1 + iVar14,
                            ((iVar9 + -1) - iVar14) * 0x10);
                    binary_parenthesize(equation,(iVar9 - iVar14) + local_64,local_64);
                  }
                  memmove(equation + len + -1 + local_34,equation + iVar9 + len,
                          (*np - (iVar9 + len)) * 0x10);
                  *np = *np + ~uVar5;
                  local_88 = 1;
                  goto LAB_0805ec48;
                }
              }
            }
LAB_0805f2d8:
            local_34 = uVar5 + 1 + local_34;
            iVar15 = *np;
            if ((iVar15 <= local_34) ||
               (local_38 = equation + local_34 + -1, local_38->level < level)) goto LAB_0805f2f2;
            goto LAB_0805ed1f;
          }
LAB_0805f2f2:
          local_5c = iVar2 + iVar12;
          if ((iVar15 <= local_5c) || (equation[local_5c + -1].level < level)) break;
        } while( true );
      }
      if (local_88 != 0) {
        return 1;
      }
      goto LAB_0805f3a0;
    }
  }
LAB_0805f393:
  local_88 = 0;
LAB_0805f3a0:
  do {
    do {
      while( true ) {
        iVar16 = loc;
        if (*np <= iVar16) {
          return local_88;
        }
        if (equation[iVar16].level < level) {
          return local_88;
        }
        if (level < equation[iVar16].level) break;
        loc = iVar16 + 1;
      }
      uVar5 = ftimes_recurse(equation,np,iVar16,level + 1);
      local_88 = local_88 | uVar5;
      loc = iVar16 + 1;
    } while ((*np <= loc) || (equation[loc].level <= level));
    piVar8 = &equation[iVar16 + 3].level;
    do {
      loc = loc + 2;
      if (*np <= loc) break;
      iVar16 = *piVar8;
      piVar8 = piVar8 + 8;
    } while (level < iVar16);
  } while( true );
}



// WARNING: Unknown calling convention

int factor_times(token_type *equation,int *np)

{
  int iVar1;
  
  iVar1 = ftimes_recurse(equation,np,0,1);
  return iVar1;
}



// WARNING: Unknown calling convention

int big_fplus(token_type *equation,int level,int diff_sign,int sop1,int op1,int op2,int i1,int i2,
             int b1,int b2,int ai,int aj,int i,int j,int e1,int e2)

{
  int *piVar1;
  int k;
  int iVar2;
  int iVar3;
  int m;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int len;
  int iVar8;
  int n;
  int local_34;
  
  local_34 = 0;
  if (sop1 == 4) {
    scratch->level = level;
    scratch->kind = CONSTANT;
    (scratch->token).constant = 1.0;
    scratch[1].level = level;
    scratch[1].kind = OPERATOR;
    scratch[1].token.variable = 4;
    local_34 = 2;
  }
  iVar5 = local_34 * 0x10;
  memmove(scratch + local_34,equation + b1,(i - b1) * 0x10);
  iVar7 = (i - b1) + local_34;
  if ((b1 == i1) && (iVar2 = local_34, i == e1)) {
    for (; iVar2 < iVar7; iVar2 = iVar2 + 1) {
      piVar1 = (int *)((int)&scratch->level + iVar5);
      *piVar1 = *piVar1 + 1;
      iVar5 = iVar5 + 0x10;
    }
  }
  scratch[iVar7].level = level;
  scratch[iVar7].kind = OPERATOR;
  scratch[iVar7].token.variable = 3;
  iVar7 = iVar7 + 1;
  memmove(scratch + iVar7,equation + i1,(b1 - i1) * 0x10);
  iVar5 = iVar7 + (b1 - i1);
  scratch[iVar5].level = level;
  scratch[iVar5].kind = CONSTANT;
  if (op1 == 2) {
    scratch[iVar5].token.constant = -1.0;
  }
  else {
    scratch[iVar5].token.constant = 1.0;
  }
  memmove(scratch + iVar5 + 1,equation + i,(e1 - i) * 0x10);
  iVar5 = iVar5 + 1 + (e1 - i);
  if (iVar7 < iVar5) {
    iVar2 = iVar7 * 0x10;
    do {
      piVar1 = (int *)((int)&scratch->level + iVar2);
      *piVar1 = *piVar1 + 2;
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar7 < iVar5);
  }
  scratch[iVar5].level = level + 1;
  scratch[iVar5].kind = OPERATOR;
  scratch[iVar5].token.operatr = op2;
  iVar5 = iVar5 + 1;
  memmove(scratch + iVar5,equation + i2,(b2 - i2) * 0x10);
  iVar7 = (b2 - i2) + iVar5;
  iVar2 = i - ai;
  if (n_tokens < (2 - b2) + iVar2 * 2 + e2 + iVar7) {
    error_huge();
  }
  iVar3 = (aj - b2) + iVar7;
  iVar6 = iVar7 * 0x10;
  memmove(scratch + iVar7,equation + b2,(j - b2) * 0x10);
  iVar8 = iVar7 + (j - b2);
  m = iVar3 + 1;
  if (m < iVar8) {
    iVar4 = m * 0x10;
    do {
      piVar1 = (int *)((int)&scratch->level + iVar4);
      *piVar1 = *piVar1 + 1;
      m = m + 1;
      iVar4 = iVar4 + 0x10;
    } while (m < iVar8);
  }
  if (((diff_sign != 0) && (b2 == i2)) && (j == e2)) {
    for (; iVar7 < iVar8; iVar7 = iVar7 + 1) {
      piVar1 = (int *)((int)&scratch->level + iVar6);
      *piVar1 = *piVar1 + 1;
      iVar6 = iVar6 + 0x10;
    }
  }
  scratch[iVar8].level = scratch[iVar3].level + 1;
  scratch[iVar8].kind = OPERATOR;
  scratch[iVar8].token.variable = 2;
  iVar8 = iVar8 + 1;
  iVar6 = ~ai + i;
  memmove(scratch + iVar8,equation + ai + 1,iVar6 * 0x10);
  iVar7 = iVar8 + iVar6;
  iVar4 = min_level(equation + ai + 1,iVar6);
  iVar6 = scratch[iVar3].level;
  if (iVar8 < iVar7) {
    iVar3 = iVar8 * 0x10;
    do {
      piVar1 = (int *)((int)&scratch->level + iVar3);
      *piVar1 = *piVar1 + ((iVar6 + 2) - iVar4);
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar8 < iVar7);
  }
  if (diff_sign != 0) {
    scratch[iVar7].level = level;
    scratch[iVar7].kind = OPERATOR;
    if (sop1 == 4) {
      scratch[iVar7].token.variable = 3;
    }
    else {
      scratch[iVar7].token.variable = 4;
    }
    iVar8 = iVar7 + 1;
    scratch[iVar8].level = level + 1;
    scratch[iVar8].kind = CONSTANT;
    scratch[iVar8].token.constant = -1.0;
    memmove(scratch + iVar7 + 2,scratch + (ai - b1) + local_34,iVar2 * 0x10);
    iVar7 = iVar7 + 2 + iVar2;
  }
  memmove(scratch + iVar7,equation + j,(e2 - j) * 0x10);
  iVar7 = iVar7 + (e2 - j);
  if (iVar5 < iVar7) {
    iVar2 = iVar5 * 0x10;
    do {
      piVar1 = (int *)((int)&scratch->level + iVar2);
      *piVar1 = *piVar1 + 2;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar5 < iVar7);
  }
  return iVar7;
}



// WARNING: Removing unreachable block (ram,0x080609b2)
// WARNING: Removing unreachable block (ram,0x08060816)
// WARNING: Removing unreachable block (ram,0x08060812)
// WARNING: Removing unreachable block (ram,0x08060862)
// WARNING: Removing unreachable block (ram,0x0806085a)
// WARNING: Removing unreachable block (ram,0x08060864)
// WARNING: Removing unreachable block (ram,0x0806006a)
// WARNING: Removing unreachable block (ram,0x08060066)
// WARNING: Removing unreachable block (ram,0x0806006c)
// WARNING: Removing unreachable block (ram,0x08060091)
// WARNING: Unknown calling convention

int fplus_recurse(token_type *equation,int *np,int loc,int level,long v,double d,int whole_flag,
                 int div_only)

{
  bool bVar1;
  bool bVar2;
  storage_type sVar3;
  double dVar4;
  double dVar5;
  token_type *ptVar6;
  token_type *ptVar7;
  uint uVar8;
  token_type *ptVar9;
  int k;
  int iVar10;
  int e2;
  int iVar11;
  int iVar12;
  int ai;
  token_type *ptVar13;
  int same_flag;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int k_1;
  int iVar17;
  int m;
  int i;
  int iVar18;
  int iVar19;
  storage_type *psVar20;
  int len;
  int iVar21;
  int flag2;
  int *piVar22;
  int iVar23;
  int iVar24;
  int flag1;
  int iVar25;
  bool bVar26;
  ushort in_FPUStatusWord;
  ushort uVar27;
  double d1;
  double d2;
  int local_b0;
  uint local_a0;
  int local_70;
  int local_64;
  int local_60;
  storage_type local_5c;
  storage_type local_54;
  int local_4c;
  int local_40;
  int local_38;
  int local_34;
  storage_type local_2c;
  uint local_20 [4];
  
  i = loc + 1;
  ptVar9 = equation + i;
  while ((i < *np && (level <= ptVar9->level))) {
    if (ptVar9->level == level) {
      local_a0 = 0;
      if (1 < (ptVar9->token).variable - 1U) goto LAB_08060ada;
      iVar16 = level + 1;
      local_4c = loc;
      goto LAB_0805f945;
    }
    i = i + 2;
    ptVar9 = ptVar9 + 2;
  }
  local_a0 = 0;
LAB_08060b72:
  while ((loc < *np && (level <= equation[loc].level))) {
    if (level < equation[loc].level) {
      uVar15 = fplus_recurse(equation,np,loc,level + 1,v,d,whole_flag,div_only);
      local_a0 = local_a0 | uVar15;
      loc = loc + 1;
      piVar14 = &equation[loc].level;
      while ((loc < *np && (iVar16 = *piVar14, piVar14 = piVar14 + 8, level < iVar16))) {
        loc = loc + 2;
      }
    }
    else {
      loc = loc + 1;
    }
  }
  return local_a0;
LAB_0805f945:
  do {
    iVar21 = local_4c + 1;
    iVar24 = *np;
    iVar10 = iVar21;
    if ((iVar21 < iVar24) && (level < equation[iVar21].level)) {
      piVar14 = &equation[local_4c + 3].level;
      do {
        iVar10 = iVar10 + 2;
        if (iVar24 <= iVar10) break;
        iVar11 = *piVar14;
        piVar14 = piVar14 + 8;
      } while (level < iVar11);
    }
    iVar10 = iVar10 - local_4c;
    e2 = iVar10 + local_4c;
    iVar11 = e2 + 1;
    if (iVar11 < iVar24) {
      ptVar9 = equation + e2;
      iVar12 = ptVar9->level;
      while (level <= iVar12) {
        iVar12 = iVar11 + 1;
        if ((iVar12 < iVar24) && (level < equation[iVar12].level)) {
          piVar14 = &equation[iVar11 + 3].level;
          do {
            iVar12 = iVar12 + 2;
            if (iVar24 <= iVar12) break;
            iVar17 = *piVar14;
            piVar14 = piVar14 + 8;
          } while (level < iVar17);
        }
        uVar15 = iVar12 - iVar11;
        iVar12 = uVar15 + iVar11;
        iVar24 = (ptVar9->token).operatr;
        local_b0 = 1;
        if (loc < local_4c) {
          local_b0 = equation[local_4c + -1].token.operatr;
        }
        local_40 = local_4c + -1;
        iVar17 = iVar11 + -1;
LAB_0805facf:
        local_38 = local_40 + 1;
        if (local_38 < e2) {
          if (whole_flag == 0) {
            iVar18 = local_40 + 2;
            if (iVar18 < e2) {
              piVar14 = &equation[local_40 + 2].level;
              do {
                if ((iVar16 == *piVar14) && (((storage_type *)(piVar14 + 1))->variable - 3U < 2))
                break;
                iVar18 = iVar18 + 2;
                piVar14 = piVar14 + 8;
              } while (iVar18 < e2);
            }
          }
          else {
            iVar18 = e2;
            if ((((1 < iVar10) && (equation[local_38].kind == CONSTANT)) &&
                (iVar16 == equation[local_40 + 2].level)) &&
               (equation[local_40 + 2].token.variable - 3U < 2)) {
              local_38 = local_40 + 3;
            }
          }
          local_40 = iVar18;
          local_70 = 3;
          if (local_4c < local_38) {
            local_70 = equation[local_38 + -1].token.operatr;
          }
          if (((div_only == 0) || (local_70 == 4)) &&
             ((local_40 - local_38 != 1 ||
              ((equation[local_38].kind != CONSTANT ||
               (in_FPUStatusWord = in_FPUStatusWord & 0xfdff,
               ABS(equation[local_38].token.constant) != 1.0)))))) {
            iVar18 = iVar17;
            if ((whole_flag != 0) || ((v == 0 || (v == 5)))) {
LAB_0805fd6f:
              local_34 = iVar18 + 1;
              if (local_34 < iVar12) {
                if (whole_flag != 0) {
                  iVar19 = iVar12;
                  if ((((1 < (int)uVar15) && (equation[local_34].kind == CONSTANT)) &&
                      (iVar16 == equation[iVar18 + 2].level)) &&
                     (equation[iVar18 + 2].token.variable - 3U < 2)) {
                    local_34 = iVar18 + 3;
                  }
                  goto LAB_0805fe25;
                }
                iVar19 = iVar18 + 2;
                if (iVar19 < iVar12) {
                  piVar14 = &equation[iVar18 + 2].level;
                  do {
                    if ((iVar16 == *piVar14) && (((storage_type *)(piVar14 + 1))->variable - 3U < 2)
                       ) break;
                    iVar19 = iVar19 + 2;
                    piVar14 = piVar14 + 8;
                  } while (iVar19 < iVar12);
                }
                if (iVar11 < local_34) goto LAB_0805fe07;
                iVar18 = iVar19;
                if (local_70 != 4) goto LAB_0805fe25;
                goto LAB_0805fd6f;
              }
              goto LAB_0805facf;
            }
            in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
            if ((d == 0.0) || (d == 1.0)) {
              if (local_38 < local_40) {
                ptVar13 = equation + local_38;
                iVar19 = local_38;
                do {
                  if ((ptVar13->kind == VARIABLE) && (v == (ptVar13->token).variable))
                  goto LAB_0805fd6f;
                  iVar19 = iVar19 + 2;
                  ptVar13 = ptVar13 + 2;
                } while (iVar19 < local_40);
              }
            }
            else if (local_38 + 1 < local_40) {
              psVar20 = &equation[local_38 + 1].token;
              piVar14 = &equation[local_38 + 2].level;
              piVar22 = &equation[local_38].level;
              ptVar13 = equation + local_38 + -1;
              iVar19 = local_38;
              do {
                if ((((psVar20->variable == 6) && (*(int *)((int)psVar20 + -4) == *piVar14)) &&
                    (((token_type *)(piVar14 + -1))->kind == CONSTANT)) &&
                   ((d == ((storage_type *)(piVar14 + 1))->constant && (-1 < iVar19)))) {
                  iVar25 = *piVar22;
                  ptVar6 = (token_type *)(piVar22 + -1);
                  iVar23 = iVar19;
                  ptVar7 = ptVar13;
                  while (*(int *)((int)psVar20 + -4) <= iVar25) {
                    if ((ptVar6->kind == VARIABLE) && (v == (ptVar6->token).variable))
                    goto LAB_0805fd6f;
                    iVar23 = iVar23 + -1;
                    if (iVar23 < 0) break;
                    iVar25 = ptVar7->level;
                    ptVar6 = ptVar7;
                    ptVar7 = ptVar7 + -1;
                  }
                }
                psVar20 = psVar20 + 4;
                piVar14 = piVar14 + 8;
                piVar22 = piVar22 + 8;
                ptVar13 = ptVar13 + 2;
                iVar25 = iVar19 + 3;
                iVar19 = iVar19 + 2;
              } while (iVar25 < local_40);
            }
          }
          goto LAB_0805facf;
        }
LAB_08060a92:
        iVar11 = uVar15 + 1 + iVar11;
        iVar24 = *np;
        if (iVar24 <= iVar11) break;
        ptVar9 = equation + iVar11 + -1;
        iVar12 = ptVar9->level;
      }
    }
    local_4c = iVar10 + iVar21;
  } while ((local_4c < iVar24) && (level <= equation[local_4c + -1].level));
LAB_08060ada:
  if (local_a0 != 0) {
    return 1;
  }
  goto LAB_08060b72;
LAB_0805fe07:
  ptVar13 = equation + iVar18;
  iVar18 = iVar19;
  if (local_70 != (ptVar13->token).variable) goto LAB_0805fd6f;
LAB_0805fe25:
  iVar18 = iVar19;
  if (((iVar18 - local_34 == 1) && (equation[local_34].kind == CONSTANT)) &&
     (in_FPUStatusWord = in_FPUStatusWord & 0xfdff, ABS(equation[local_34].token.constant) == 1.0))
  goto LAB_0805fd6f;
  bVar26 = whole_flag != 0;
  bVar1 = local_4c < local_38;
  if (bVar26 && bVar1) {
    local_54 = equation[local_4c].token;
    equation[local_4c].token.constant = 1.0;
    local_38 = local_4c;
  }
  else {
    local_54.constant = 0.0;
  }
  bVar2 = iVar11 < local_34;
  if (bVar26 && bVar2) {
    local_5c = equation[iVar11].token;
    equation[iVar11].token.constant = 1.0;
    local_34 = iVar11;
  }
  else {
    local_5c.constant = 0.0;
  }
  iVar19 = se_compare(equation + local_38,local_40 - local_38,equation + local_34,iVar18 - local_34,
                      (int *)local_20);
  if (bVar26 && bVar1) {
    equation[local_4c].token.constant = (double)local_54;
    local_38 = local_38 + 2;
  }
  if (bVar26 && bVar2) {
    equation[iVar11].token.constant = (double)local_5c;
    local_34 = local_34 + 2;
  }
  if (iVar19 != 0) {
    local_2c.constant = 1.0;
    iVar19 = local_40;
    iVar25 = iVar18;
horner_factor:
    local_64 = 0;
    if (local_70 == 4) {
      scratch->level = iVar16;
      scratch->kind = CONSTANT;
      (scratch->token).constant = 1.0;
      scratch[1].level = iVar16;
      scratch[1].kind = OPERATOR;
      scratch[1].token.variable = 4;
      local_64 = 2;
    }
    iVar17 = iVar19 - local_38;
    iVar21 = local_64 * 0x10;
    memmove(scratch + local_64,equation + local_38,iVar17 * 0x10);
    local_60 = local_64 + iVar17;
    uVar27 = in_FPUStatusWord & 0xfdff;
    uVar8 = local_20[0];
    if (local_2c.constant == 1.0) {
      if ((local_4c == local_38) && (e2 == iVar19)) {
        for (; local_64 < local_60; local_64 = local_64 + 1) {
          piVar14 = (int *)((int)&scratch->level + iVar21);
          *piVar14 = *piVar14 + 1;
          iVar21 = iVar21 + 0x10;
        }
      }
    }
    else {
      for (; local_64 < local_60; local_64 = local_64 + 1) {
        piVar14 = (int *)((int)&scratch->level + iVar21);
        *piVar14 = *piVar14 + 2;
        iVar21 = iVar21 + 0x10;
      }
      scratch[local_60].level = level + 2;
      scratch[local_60].kind = OPERATOR;
      scratch[local_60].token.variable = 6;
      len = local_60 + 1;
      scratch[len].level = level + 2;
      scratch[len].kind = CONSTANT;
      scratch[len].token.constant = (double)local_2c;
      local_60 = local_60 + 2;
      sVar3 = local_2c;
      do {
        sVar3.constant = sVar3.constant - (sVar3.constant / 2.0) * 2.0;
      } while ((in_FPUStatusWord & 0x400) != 0);
      uVar8 = 0;
      if (sVar3.constant != 0.0) {
        uVar8 = local_20[0];
      }
    }
    local_20[0] = uVar8;
    scratch[local_60].level = iVar16;
    scratch[local_60].kind = OPERATOR;
    scratch[local_60].token.variable = 3;
    iVar21 = local_60 + 1;
    memmove(scratch + iVar21,equation + local_4c,(local_38 - local_4c) * 0x10);
    local_60 = iVar21 + (local_38 - local_4c);
    in_FPUStatusWord = uVar27;
    if (local_40 != iVar19) {
      iVar17 = local_60 + iVar17;
      iVar19 = local_60 * 0x10;
      memmove(scratch + local_60,equation + local_38,(local_40 - local_38) * 0x10);
      iVar23 = (local_40 - local_38) + local_60;
      if ((local_4c == local_38) && (e2 == local_40)) {
        for (; local_60 < iVar23; local_60 = local_60 + 1) {
          piVar14 = (int *)((int)&scratch->level + iVar19);
          *piVar14 = *piVar14 + 1;
          iVar19 = iVar19 + 0x10;
        }
      }
      m = iVar17 + 1;
      if (m < iVar23) {
        iVar19 = m * 0x10;
        do {
          piVar14 = (int *)((int)&scratch->level + iVar19);
          *piVar14 = *piVar14 + 1;
          m = m + 1;
          iVar19 = iVar19 + 0x10;
        } while (m < iVar23);
      }
      scratch[iVar23].level = scratch[iVar17].level + 1;
      scratch[iVar23].kind = OPERATOR;
      scratch[iVar23].token.variable = 2;
      iVar19 = iVar23 + 1;
      scratch[iVar19].level = scratch[iVar17].level + 1;
      scratch[iVar19].kind = CONSTANT;
      scratch[iVar19].token.constant = (double)local_2c;
      iVar17 = iVar23 + 2;
      scratch[iVar17].level = iVar16;
      scratch[iVar17].kind = OPERATOR;
      scratch[iVar17].token.variable = 3;
      local_60 = iVar23 + 3;
      in_FPUStatusWord = uVar27;
    }
    scratch[local_60].level = iVar16;
    scratch[local_60].kind = CONSTANT;
    if (local_b0 == 2) {
      scratch[local_60].token.constant = -1.0;
    }
    else {
      scratch[local_60].token.constant = 1.0;
    }
    memmove(scratch + local_60 + 1,equation + local_40,(e2 - local_40) * 0x10);
    iVar17 = local_60 + 1 + (e2 - local_40);
    if (iVar21 < iVar17) {
      iVar19 = iVar21 * 0x10;
      do {
        piVar14 = (int *)((int)&scratch->level + iVar19);
        *piVar14 = *piVar14 + 2;
        iVar21 = iVar21 + 1;
        iVar19 = iVar19 + 0x10;
      } while (iVar21 < iVar17);
    }
    scratch[iVar17].level = level + 2;
    scratch[iVar17].kind = OPERATOR;
    local_20[0] = iVar24 == 2 ^ local_20[0];
    if (local_20[0] == 0) {
      scratch[iVar17].token.variable = 1;
    }
    else {
      scratch[iVar17].token.variable = 2;
    }
    iVar24 = iVar17 + 1;
    if (iVar18 == iVar25) {
      if (n_tokens < (((local_34 + 1 + iVar12) - iVar11) - iVar18) + iVar24) {
        error_huge();
      }
      memmove(scratch + iVar24,equation + iVar11,(local_34 - iVar11) * 0x10);
      iVar21 = iVar24 + (local_34 - iVar11);
      scratch[iVar21].level = iVar16;
      scratch[iVar21].kind = CONSTANT;
      scratch[iVar21].token.constant = 1.0;
      iVar21 = iVar21 + 1;
    }
    else {
      if (n_tokens < (int)(iVar17 + 3 + uVar15)) {
        error_huge();
      }
      memmove(scratch + iVar24,equation + iVar11,(local_34 - iVar11) * 0x10);
      iVar21 = (local_34 - iVar11) + iVar24;
      iVar17 = (iVar25 - local_34) + iVar21;
      memmove(scratch + iVar21,equation + local_34,(iVar18 - local_34) * 0x10);
      iVar21 = (iVar18 - local_34) + iVar21;
      iVar11 = iVar17 + 1;
      if (iVar11 < iVar21) {
        iVar19 = iVar11 * 0x10;
        do {
          piVar14 = (int *)((int)&scratch->level + iVar19);
          *piVar14 = *piVar14 + 1;
          iVar11 = iVar11 + 1;
          iVar19 = iVar19 + 0x10;
        } while (iVar11 < iVar21);
      }
      scratch[iVar21].level = scratch[iVar17].level + 1;
      scratch[iVar21].kind = OPERATOR;
      scratch[iVar21].token.variable = 2;
      iVar11 = iVar21 + 1;
      scratch[iVar11].level = scratch[iVar17].level + 1;
      scratch[iVar11].kind = CONSTANT;
      scratch[iVar11].token = local_2c;
      iVar21 = iVar21 + 2;
    }
    memmove(scratch + iVar21,equation + iVar18,(iVar12 - iVar18) * 0x10);
    iVar21 = iVar21 + (iVar12 - iVar18);
    if (iVar24 < iVar21) {
      iVar11 = iVar24 * 0x10;
      do {
        piVar14 = (int *)((int)&scratch->level + iVar11);
        *piVar14 = *piVar14 + 2;
        iVar24 = iVar24 + 1;
        iVar11 = iVar11 + 0x10;
      } while (iVar24 < iVar21);
    }
end_mess:
    if (n_tokens < (int)((iVar21 - iVar10) + *np + ~uVar15)) {
      error_huge();
    }
    if (local_b0 == 2) {
      equation[local_4c + -1].token.variable = 1;
    }
    memmove(ptVar9,equation + iVar12,(*np - iVar12) * 0x10);
    iVar24 = ~uVar15 + *np;
    *np = iVar24;
    memmove(equation + iVar21 + local_4c,equation + e2,(iVar24 - e2) * 0x10);
    *np = *np + (iVar21 - iVar10);
    memmove(equation + local_4c,scratch,iVar21 << 4);
    local_a0 = 1;
    goto LAB_0805f945;
  }
  if (whole_flag != 0) goto LAB_08060a92;
  if ((div_only != 0) || (v != 0)) goto LAB_0805fd6f;
  if ((local_4c != local_38) || (iVar25 = iVar16, e2 != local_40)) {
    iVar25 = level + 2;
  }
  iVar19 = local_38 + 1;
  if (iVar19 < local_40) {
    piVar14 = &equation[iVar19].level;
    do {
      if ((*piVar14 == iVar25) && (((storage_type *)(piVar14 + 1))->variable == 6)) {
        ptVar13 = equation + iVar19 + 1;
        if ((iVar25 == ptVar13->level) && (ptVar13->kind == CONSTANT)) {
          local_54 = (storage_type)(ptVar13->token).constant;
          in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
          if (0.0 < local_54.constant) goto LAB_0806068a;
          goto LAB_0805fd6f;
        }
        local_54.constant = -1.0;
        goto LAB_0806068a;
      }
      iVar19 = iVar19 + 2;
      piVar14 = piVar14 + 8;
    } while (iVar19 < local_40);
  }
  local_54.constant = 1.0;
  iVar19 = local_40;
LAB_0806068a:
  if ((iVar11 != local_34) || (iVar23 = iVar16, iVar12 != iVar18)) {
    iVar23 = level + 2;
  }
  iVar25 = local_34 + 1;
  if (iVar25 < iVar18) {
    piVar14 = &equation[iVar25].level;
    do {
      if ((*piVar14 == iVar23) && (((storage_type *)(piVar14 + 1))->variable == 6)) {
        ptVar13 = equation + iVar25 + 1;
        if ((iVar23 == ptVar13->level) && (ptVar13->kind == CONSTANT)) {
          local_5c = (storage_type)(ptVar13->token).constant;
          in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
          if (0.0 < local_5c.constant) goto LAB_08060706;
          goto LAB_0805fd6f;
        }
        local_5c.constant = -1.0;
        goto LAB_08060706;
      }
      iVar25 = iVar25 + 2;
      piVar14 = piVar14 + 8;
    } while (iVar25 < iVar18);
  }
  local_5c.constant = 1.0;
  iVar25 = iVar18;
LAB_08060706:
  if (((((local_40 == iVar19) && (iVar18 == iVar25)) ||
       ((iVar19 - local_38 == 1 && (equation[local_38].kind == CONSTANT)))) ||
      ((uVar27 = in_FPUStatusWord & 0xfdff, d == 1.0 &&
       ((in_FPUStatusWord = uVar27, local_54.constant < 0.0 || (local_5c.constant < 0.0)))))) ||
     (iVar23 = se_compare(equation + local_38,iVar19 - local_38,equation + local_34,
                          iVar25 - local_34,(int *)local_20), in_FPUStatusWord = uVar27, iVar23 == 0
     )) goto LAB_0805fd6f;
  in_FPUStatusWord = uVar27 & 0xfdff;
  if ((0.0 < local_54.constant) || (0.0 < local_5c.constant)) {
    if (0.0 <= local_54.constant) {
      if (0.0 <= local_5c.constant) {
        local_2c = local_5c;
        if (local_54.constant <= local_5c.constant || local_5c.constant != local_54.constant) {
          local_2c = local_54;
        }
        sVar3 = local_2c;
        if (local_20[0] == 0) {
          do {
            sVar3.constant = sVar3.constant - (sVar3.constant / 1.0) * 1.0;
          } while ((uVar27 & 0x400) != 0);
          if (sVar3.constant != 0.0) {
            if (local_54.constant <= local_5c.constant) {
              local_54 = local_5c;
            }
            dVar4 = local_54.constant - local_2c.constant;
            do {
              dVar4 = dVar4 - (dVar4 / 1.0) * 1.0;
            } while ((uVar27 & 0x400) != 0);
            if (dVar4 == 0.0) goto horner_factor;
          }
        }
      }
      else {
        local_2c.constant = local_54.constant;
      }
    }
    else {
      local_2c.constant = local_5c.constant;
    }
    if (local_2c.constant < 1.0) goto LAB_0805fd6f;
    modf(local_2c.constant,&local_2c.constant);
    goto horner_factor;
  }
  dVar4 = (double)(local_40 - iVar19);
  dVar5 = (double)(iVar18 - iVar25);
  if (dVar4 != dVar5) goto LAB_080609b4;
  if (iVar19 + 2 < local_40) {
    ptVar13 = equation + iVar19 + 1;
    if ((((ptVar13->level != equation[iVar19].level + 1) ||
         (ptVar13->level != equation[iVar19 + 2].level)) || (ptVar13->kind != CONSTANT)) ||
       (1 < equation[iVar19 + 2].token.variable - 3U)) goto LAB_08060947;
    dVar4 = ABS((ptVar13->token).constant);
  }
  else {
LAB_08060947:
    dVar4 = 1.0;
  }
  if (iVar25 + 2 < iVar18) {
    ptVar13 = equation + iVar25 + 1;
    if (((ptVar13->level == equation[iVar25].level + 1) &&
        (ptVar13->level == equation[iVar25 + 2].level)) &&
       ((ptVar13->kind == CONSTANT && (equation[iVar25 + 2].token.variable - 3U < 2)))) {
      dVar5 = ABS((ptVar13->token).constant);
      goto LAB_080609b4;
    }
  }
  dVar5 = 1.0;
LAB_080609b4:
  if (dVar5 < dVar4) {
    iVar21 = big_fplus(equation,iVar16,local_20[0],local_70,iVar24,local_b0,iVar11,local_4c,local_34
                       ,local_38,iVar25,iVar19,iVar18,local_40,iVar12,e2);
  }
  else {
    iVar21 = big_fplus(equation,iVar16,local_20[0],local_70,local_b0,iVar24,local_4c,iVar11,local_38
                       ,local_34,iVar19,iVar25,local_40,iVar18,e2,iVar12);
  }
  goto end_mess;
}



// WARNING: Unknown calling convention

int factor_plus(token_type *equation,int *np,long v,double d)

{
  int iVar1;
  
  iVar1 = fplus_recurse(equation,np,0,1,v,d,0,0);
  return iVar1;
}



// WARNING: Unknown calling convention

int subtract_itself(token_type *equation,int *np)

{
  int iVar1;
  
  iVar1 = fplus_recurse(equation,np,0,1,0,0.0,1,0);
  return iVar1;
}



// WARNING: Unknown calling convention

int factor_divide(token_type *equation,int *np,long v,double d)

{
  int iVar1;
  
  iVar1 = fplus_recurse(equation,np,0,1,v,d,0,1);
  return iVar1;
}



// WARNING: Unknown calling convention

int sf_recurse(token_type *equation,int *np,int loc,int level,int start_flag)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int k;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int div_flag2;
  int iVar8;
  int iVar9;
  int *piVar10;
  int k_1;
  token_type *ptVar11;
  int iVar12;
  int i;
  token_type *ptVar13;
  int e2;
  int iVar14;
  int j;
  token_type *ptVar15;
  int iVar16;
  int iVar17;
  int np1;
  int np2;
  int len;
  int iVar18;
  int op;
  int iVar19;
  token_type *local_84;
  int local_58;
  token_type *local_4c;
  int local_48;
  token_type *local_40;
  uint local_2c;
  int local_20;
  
  if (start_flag == 0) {
    i = loc + 1;
    if (i < *np) {
      iVar16 = equation[i].level;
      if (level <= iVar16) {
        ptVar13 = equation + loc + 3;
        ptVar15 = equation + i;
        do {
          ptVar11 = ptVar13;
          if ((iVar16 == level) && ((ptVar15->token).variable == 4)) {
            start_flag = 1;
            break;
          }
          i = i + 2;
          if (*np <= i) break;
          iVar16 = ptVar11->level;
          ptVar13 = ptVar11 + 2;
          ptVar15 = ptVar11;
        } while (level <= iVar16);
      }
    }
  }
  local_2c = 0;
  local_20 = 0;
  iVar16 = loc;
LAB_08060dcd:
  iVar19 = iVar16;
  if (iVar19 < *np) {
    ptVar13 = equation + iVar19;
    if (ptVar13->level < level) goto LAB_08060de0;
    if (level < ptVar13->level) {
      uVar7 = sf_recurse(equation,np,iVar19,level + 1,start_flag);
      local_2c = local_2c | uVar7;
      iVar16 = iVar19 + 1;
      if ((iVar16 < *np) && (level < equation[iVar16].level)) {
        piVar10 = &equation[iVar19 + 3].level;
        do {
          iVar16 = iVar16 + 2;
          if (*np <= iVar16) break;
          iVar19 = *piVar10;
          piVar10 = piVar10 + 8;
        } while (level < iVar19);
      }
    }
    else {
      if (ptVar13->kind == OPERATOR) {
        local_20 = (ptVar13->token).variable;
      }
      iVar16 = iVar19 + 1;
    }
    goto LAB_08060dcd;
  }
LAB_08060de0:
  if (((local_2c != 0) || (start_flag == 0)) || (1 < local_20 - 1U)) {
    return local_2c;
  }
  iVar16 = loc + 1;
  ptVar13 = equation + loc;
  iVar19 = level + 1;
LAB_08060e3b:
  iVar18 = *np;
  iVar4 = iVar16;
  if (iVar16 < iVar18) {
    iVar5 = equation[iVar16].level;
    piVar10 = &equation[loc + 3].level;
    while ((level < iVar5 && (iVar4 = iVar4 + 2, iVar4 < iVar18))) {
      iVar5 = *piVar10;
      piVar10 = piVar10 + 8;
    }
  }
  iVar4 = iVar4 - loc;
  iVar5 = iVar4 + loc;
  local_20 = iVar5 + 1;
  if (iVar18 <= local_20) {
    return local_2c;
  }
  local_4c = equation + iVar5;
  if (local_4c->level < level) {
    return local_2c;
  }
LAB_08060eb1:
  iVar12 = local_20;
  iVar17 = local_20 + 1;
  iVar6 = iVar17;
  if ((iVar17 < iVar18) && (level < equation[iVar17].level)) {
    piVar10 = &equation[local_20 + 3].level;
    do {
      iVar6 = iVar6 + 2;
      if (iVar18 <= iVar6) break;
      iVar8 = *piVar10;
      piVar10 = piVar10 + 8;
    } while (level < iVar8);
  }
  uVar7 = iVar6 - local_20;
  e2 = uVar7 + local_20;
  lVar1 = (local_4c->token).variable;
  piVar10 = &equation[iVar16].level;
  for (local_58 = iVar16; local_58 < iVar5; local_58 = local_58 + 2) {
    if ((iVar19 == *piVar10) && (((storage_type *)(piVar10 + 1))->variable == 4)) {
      iVar18 = local_58 + 2;
      if ((iVar5 <= iVar18) || (equation[iVar18].level <= iVar19)) goto LAB_08060f8d;
      piVar10 = &equation[local_58 + 4].level;
      goto LAB_08060f7e;
    }
    piVar10 = piVar10 + 8;
  }
  bVar3 = false;
  iVar18 = local_58;
  goto LAB_08060f94;
  while (iVar6 = *piVar10, piVar10 = piVar10 + 8, iVar19 < iVar6) {
LAB_08060f7e:
    iVar18 = iVar18 + 2;
    if (iVar5 <= iVar18) break;
  }
LAB_08060f8d:
  bVar3 = true;
LAB_08060f94:
  local_58 = local_58 + 1;
  iVar6 = iVar17;
  if (iVar17 < e2) {
    piVar10 = &equation[iVar17].level;
    do {
      if ((iVar19 == *piVar10) && (((storage_type *)(piVar10 + 1))->variable == 4)) {
        iVar6 = iVar17 + 2;
        if ((e2 <= iVar6) || (equation[iVar6].level <= iVar19)) goto LAB_08061002;
        piVar10 = &equation[iVar17 + 4].level;
        goto LAB_08060ffb;
      }
      iVar17 = iVar17 + 2;
      piVar10 = piVar10 + 8;
      iVar6 = iVar17;
    } while (iVar17 < e2);
  }
  bVar2 = false;
  iVar17 = iVar6;
LAB_08061007:
  local_48 = iVar17 + 1;
  if ((bVar2) || (bVar3)) goto LAB_08061015;
  local_20 = local_20 + 1 + uVar7;
  iVar18 = *np;
  if (iVar18 <= local_20) {
    return local_2c;
  }
  local_4c = equation + local_20 + -1;
  if (local_4c->level < level) {
    return local_2c;
  }
  goto LAB_08060eb1;
  while (iVar8 = *piVar10, piVar10 = piVar10 + 8, iVar19 < iVar8) {
LAB_08060ffb:
    iVar6 = iVar6 + 2;
    if (e2 <= iVar6) break;
  }
LAB_08061002:
  bVar2 = true;
  goto LAB_08061007;
LAB_08061015:
  if ((start_flag == 2) && ((bVar3 && (bVar2)))) {
    iVar8 = iVar18 - local_58;
    ptVar15 = equation + local_58;
    iVar9 = poly2_gcd(ptVar15,iVar8,equation + local_48,iVar6 - local_48,0);
    if (iVar9 == 0) {
      iVar9 = poly2_gcd(equation + local_48,iVar6 - local_48,ptVar15,iVar8,0);
      if (iVar9 == 0) goto LAB_0806110d;
      local_84 = trhs;
      local_2c = n_trhs;
      local_40 = tlhs;
      local_20 = n_tlhs;
    }
    else {
      local_84 = tlhs;
      local_2c = n_tlhs;
      local_40 = trhs;
      local_20 = n_trhs;
    }
    if (n_tokens <
        (int)((((iVar17 + 6 + (iVar5 - loc) + e2) - iVar12) - iVar6) + local_2c + local_20 * 2)) {
      error_huge();
    }
    if (0 < (int)local_2c) {
      iVar9 = 0;
      ptVar11 = local_84;
      do {
        ptVar11->level = ptVar11->level + iVar19;
        iVar9 = iVar9 + 1;
        ptVar11 = ptVar11 + 1;
      } while (iVar9 != local_2c);
    }
    if (0 < local_20) {
      iVar9 = 0;
      ptVar11 = local_40;
      do {
        ptVar11->level = ptVar11->level + iVar19;
        iVar9 = iVar9 + 1;
        ptVar11 = ptVar11 + 1;
      } while (iVar9 != local_20);
    }
    local_58 = ~loc + local_58;
    memmove(scratch,ptVar13,local_58 * 0x10);
    memmove(scratch + local_58,equation + iVar18,(iVar5 - iVar18) * 0x10);
    local_58 = (iVar5 - iVar18) + local_58;
    scratch[local_58].level = iVar19;
    scratch[local_58].kind = OPERATOR;
    scratch[local_58].token.variable = 3;
    memmove(scratch + local_58 + 1,local_40,local_20 << 4);
    iVar18 = local_58 + 1 + local_20;
    if (0 < iVar18) {
      iVar9 = 0;
      do {
        scratch[iVar9].level = scratch[iVar9].level + 2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != iVar18);
    }
    scratch[iVar18].level = level + 2;
    scratch[iVar18].kind = OPERATOR;
    scratch[iVar18].token.variable = lVar1;
    iVar18 = iVar18 + 1;
    memmove(scratch + iVar18,equation + iVar12,(iVar17 - iVar12) * 0x10);
    iVar12 = (iVar17 - iVar12) + iVar18;
    memmove(scratch + iVar12,equation + iVar6,(e2 - iVar6) * 0x10);
    iVar12 = iVar12 + (e2 - iVar6);
    scratch[iVar12].level = iVar19;
    scratch[iVar12].kind = OPERATOR;
    scratch[iVar12].token.variable = 3;
    memmove(scratch + iVar12 + 1,local_84,local_2c << 4);
    iVar12 = iVar12 + 1 + local_2c;
    if (iVar18 < iVar12) {
      iVar6 = iVar18 * 0x10;
      do {
        piVar10 = (int *)((int)&scratch->level + iVar6);
        *piVar10 = *piVar10 + 2;
        iVar18 = iVar18 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar18 < iVar12);
    }
    scratch[iVar12].level = iVar19;
    scratch[iVar12].kind = OPERATOR;
    scratch[iVar12].token.variable = 4;
    iVar12 = iVar12 + 1;
    memmove(scratch + iVar12,ptVar15,iVar8 * 0x10);
    iVar8 = iVar12 + iVar8;
    scratch[iVar8].level = iVar19;
    scratch[iVar8].kind = OPERATOR;
    scratch[iVar8].token.variable = 3;
    memmove(scratch + iVar8 + 1,local_40,local_20 << 4);
    local_20 = iVar8 + 1 + local_20;
    if (iVar12 < local_20) {
      iVar18 = iVar12 * 0x10;
      do {
        piVar10 = (int *)((int)&scratch->level + iVar18);
        *piVar10 = *piVar10 + 1;
        iVar12 = iVar12 + 1;
        iVar18 = iVar18 + 0x10;
      } while (iVar12 < local_20);
    }
    goto end_mess;
  }
LAB_0806110d:
  iVar8 = iVar18 - local_58;
  iVar9 = iVar6 - local_48;
  if (n_tokens < (int)(uVar7 + 8 + iVar4 + iVar8 + iVar9)) {
    error_huge();
  }
  if ((!bVar3) && (loc < iVar5)) {
    piVar10 = &equation[loc].level;
    iVar14 = loc;
    do {
      *piVar10 = *piVar10 + 1;
      iVar14 = iVar14 + 1;
      piVar10 = piVar10 + 4;
    } while (iVar14 < iVar5);
  }
  if ((!bVar2) && (local_20 < e2)) {
    piVar10 = &equation[local_20].level;
    do {
      *piVar10 = *piVar10 + 1;
      local_20 = local_20 + 1;
      piVar10 = piVar10 + 4;
    } while (local_20 < e2);
  }
  local_20 = ~loc + local_58;
  memmove(scratch,ptVar13,local_20 * 0x10);
  if (bVar3) {
    memmove(scratch + local_20,equation + iVar18,(iVar5 - iVar18) * 0x10);
    local_20 = local_20 + (iVar5 - iVar18);
  }
  if (bVar2) {
    scratch[local_20].level = iVar19;
    scratch[local_20].kind = OPERATOR;
    scratch[local_20].token.variable = 3;
    len = local_20 + 1;
    memmove(scratch + len,equation + local_48,iVar9 * 0x10);
    local_20 = len + iVar9;
  }
  if (0 < local_20) {
    iVar18 = 0;
    do {
      scratch[iVar18].level = scratch[iVar18].level + 2;
      iVar18 = iVar18 + 1;
    } while (iVar18 != local_20);
  }
  scratch[local_20].level = level + 2;
  scratch[local_20].kind = OPERATOR;
  scratch[local_20].token.variable = lVar1;
  iVar18 = local_20 + 1;
  memmove(scratch + iVar18,equation + iVar12,(iVar17 - iVar12) * 0x10);
  local_20 = (iVar17 - iVar12) + iVar18;
  if (bVar2) {
    memmove(scratch + local_20,equation + iVar6,(e2 - iVar6) * 0x10);
    local_20 = local_20 + (e2 - iVar6);
  }
  if (bVar3) {
    scratch[local_20].level = iVar19;
    scratch[local_20].kind = OPERATOR;
    scratch[local_20].token.variable = 3;
    memmove(scratch + local_20 + 1,equation + local_58,iVar8 * 0x10);
    local_20 = local_20 + 1 + iVar8;
  }
  if (iVar18 < local_20) {
    iVar12 = iVar18 * 0x10;
    do {
      piVar10 = (int *)((int)&scratch->level + iVar12);
      *piVar10 = *piVar10 + 2;
      iVar18 = iVar18 + 1;
      iVar12 = iVar12 + 0x10;
    } while (iVar18 < local_20);
  }
  scratch[local_20].level = iVar19;
  scratch[local_20].kind = OPERATOR;
  scratch[local_20].token.variable = 4;
  iVar18 = local_20 + 1;
  if (bVar3) {
    memmove(scratch + iVar18,equation + local_58,iVar8 * 0x10);
    local_20 = iVar18 + iVar8;
    if (bVar2) {
      scratch[local_20].level = iVar19;
      scratch[local_20].kind = OPERATOR;
      scratch[local_20].token.variable = 3;
      iVar12 = local_20 + 1;
LAB_08061455:
      memmove(scratch + iVar12,equation + local_48,iVar9 * 0x10);
      local_20 = iVar12 + iVar9;
    }
  }
  else {
    iVar12 = iVar18;
    local_20 = iVar18;
    if (bVar2) goto LAB_08061455;
  }
  if (iVar18 < local_20) {
    iVar12 = iVar18 * 0x10;
    do {
      piVar10 = (int *)((int)&scratch->level + iVar12);
      *piVar10 = *piVar10 + 1;
      iVar18 = iVar18 + 1;
      iVar12 = iVar12 + 0x10;
    } while (iVar18 < local_20);
  }
end_mess:
  if (n_tokens < (int)((~uVar7 - iVar4) + *np + local_20)) {
    error_huge();
  }
  memmove(local_4c,equation + e2,(*np - e2) * 0x10);
  iVar18 = ~uVar7 + *np;
  *np = iVar18;
  memmove(equation + local_20 + loc,equation + iVar5,(iVar18 - iVar5) * 0x10);
  *np = *np + (local_20 - iVar4);
  memmove(ptVar13,scratch,local_20 << 4);
  local_2c = 1;
  goto LAB_08060e3b;
}



// WARNING: Unknown calling convention

void group_recurse(token_type *equation,int *np,int loc,int level)

{
  bool bVar1;
  int iVar2;
  int group_flag;
  int *piVar3;
  token_type *__src;
  int len;
  int i;
  int iVar4;
  int edi;
  int iVar5;
  int local_30;
  int local_28;
  int local_24;
  
  iVar5 = loc;
  do {
    iVar4 = iVar5;
    if ((*np <= iVar4) || (equation[iVar4].level < level)) {
      iVar5 = loc + 1;
      if (iVar5 < iVar4) {
        bVar1 = false;
        local_28 = -1;
        local_24 = iVar4;
        do {
          __src = equation + iVar5;
          iVar2 = local_28;
          if (__src->level == level) {
            if ((__src->token).variable == 4) {
              iVar2 = iVar5;
              if (-1 < local_28) {
                local_30 = iVar5 + 2;
                if (local_30 < iVar4) {
                  piVar3 = &equation[local_30].level;
                  do {
                    if ((*piVar3 == level) && (((storage_type *)(piVar3 + 1))->variable != 4))
                    break;
                    local_30 = local_30 + 2;
                    piVar3 = piVar3 + 8;
                  } while (local_30 < iVar4);
                }
                local_30 = local_30 - iVar5;
                if (iVar4 == local_24) {
                  iVar5 = iVar5 + local_30;
                  bVar1 = true;
                  iVar2 = local_28;
                  local_24 = iVar5;
                }
                else {
                  memmove(scratch,__src,local_30 * 0x10);
                  memmove(equation + local_30 + local_28,equation + local_28,
                          (iVar5 - local_28) * 0x10);
                  memmove(equation + local_28,scratch,local_30 * 0x10);
                  iVar5 = local_30 + -2 + iVar5;
                  bVar1 = true;
                  iVar2 = local_28;
                  local_24 = local_24 + local_30;
                }
              }
            }
            else if ((-1 < local_28) && (iVar4 == local_24)) {
              local_24 = iVar5;
            }
          }
          local_28 = iVar2;
          iVar5 = iVar5 + 2;
        } while (iVar5 < iVar4);
        if ((bVar1) && (local_28 = local_28 + 1, local_28 < local_24)) {
          piVar3 = &equation[local_28].level;
          do {
            if ((*piVar3 == level) && (((token_type *)(piVar3 + -1))->kind == OPERATOR)) {
              ((storage_type *)(piVar3 + 1))->variable = 3;
            }
            *piVar3 = *piVar3 + 1;
            local_28 = local_28 + 1;
            piVar3 = piVar3 + 4;
          } while (local_28 < local_24);
        }
      }
      return;
    }
    if (level < equation[iVar4].level) {
      group_recurse(equation,np,iVar4,level + 1);
      iVar5 = iVar4 + 1;
      if ((iVar5 < *np) && (level < equation[iVar5].level)) {
        piVar3 = &equation[iVar4 + 3].level;
        do {
          iVar5 = iVar5 + 2;
          if (*np <= iVar5) break;
          iVar4 = *piVar3;
          piVar3 = piVar3 + 8;
        } while (level < iVar4);
      }
    }
    else {
      iVar5 = iVar4 + 1;
    }
  } while( true );
}



// WARNING: Unknown calling convention

void group_proc(token_type *equation,int *np)

{
  group_recurse(equation,np,0,1);
  return;
}



// WARNING: Unknown calling convention

int super_factor(token_type *equation,int *np,int start_flag)

{
  int iVar1;
  int rv;
  
  group_proc(equation,np);
  iVar1 = sf_recurse(equation,np,0,1,start_flag);
  organize(equation,np);
  return iVar1;
}



// WARNING: Unknown calling convention

int fractions_and_group(token_type *equation,int *np)

{
  int iVar1;
  int rv;
  
  elim_loop(equation,np);
  iVar1 = make_fractions(equation,np);
  group_proc(equation,np);
  return iVar1;
}



// WARNING: Unknown calling convention

int make_fractions_and_group(int n)

{
  int iVar1;
  int iVar2;
  int rv;
  
  iVar2 = 0;
  if (0 < n_lhs[n]) {
    iVar2 = fractions_and_group(lhs[n],n_lhs + n);
    if (n_rhs[n] != 0) {
      iVar1 = fractions_and_group(rhs[n],n_rhs + n);
      if (iVar1 != 0) {
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}



// WARNING: Removing unreachable block (ram,0x08061d02)
// WARNING: Removing unreachable block (ram,0x08061cfe)
// WARNING: Removing unreachable block (ram,0x08061d04)
// WARNING: Unknown calling convention

int patch_root_div(token_type *equation,int *np)

{
  token_type *__dest;
  token_type *ptVar1;
  token_type *ptVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int i;
  token_type *ptVar7;
  ushort in_FPUStatusWord;
  int local_28;
  
  local_28 = 0;
  iVar6 = 1;
  if (1 < *np + -2) {
    do {
      ptVar7 = equation + iVar6;
      if ((ptVar7->token).variable == 4) {
        iVar4 = ptVar7->level;
        __dest = equation + iVar6 + 2;
        if (((__dest->token).variable == 6) && (__dest->level == iVar4 + 1)) {
          ptVar1 = equation + iVar6 + 1;
          if ((ptVar1->kind == CONSTANT) &&
             ((ptVar2 = equation + iVar6 + 3, __dest->level == ptVar2->level &&
              (ptVar2->kind == CONSTANT)))) {
            dVar3 = (ptVar1->token).constant;
            do {
              dVar3 = dVar3 - (dVar3 / 1.0) * 1.0;
            } while ((in_FPUStatusWord & 0x400) != 0);
            in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
            if (dVar3 == 0.0) {
              if (rationalize_denominators != 0) {
                dVar3 = (ptVar2->token).constant;
                iVar5 = __finite(dVar3);
                if (((iVar5 != 0) && (in_FPUStatusWord = in_FPUStatusWord & 0xfdff, 0.0 < dVar3)) &&
                   (dVar3 < 1.0)) {
                  if (n_tokens < *np + 2) {
                    error_huge();
                  }
                  (ptVar2->token).constant = (ptVar2->token).constant - 1.0;
                  memmove(__dest,ptVar7,(*np - iVar6) * 0x10);
                  *np = *np + 2;
                  ptVar7 = equation + iVar6 + 1;
                  ptVar7->level = iVar4;
                  ptVar7->kind = CONSTANT;
                  ptVar7->token = equation[iVar6 + 3].token;
                  iVar6 = iVar6 + 2;
                  local_28 = 1;
                }
              }
            }
            else {
              (ptVar7->token).variable = 3;
              (ptVar1->token).constant = 1.0 / (ptVar1->token).constant;
              local_28 = 1;
            }
          }
        }
      }
      iVar6 = iVar6 + 2;
    } while (iVar6 < *np + -2);
  }
  return local_28;
}



// WARNING: Unknown calling convention

void uf_neg_help(token_type *equation,int *np)

{
  token_type *__src;
  int iVar1;
  int iVar2;
  int i;
  token_type *ptVar3;
  
  iVar2 = *np;
  if (iVar2 != 1 && -1 < iVar2 + -1) {
    i = 0;
    do {
      ptVar3 = equation + i;
      if ((ptVar3->kind == CONSTANT) && ((ptVar3->token).constant < 0.0)) {
        __src = equation + i + 1;
        iVar1 = __src->level;
        if ((iVar1 == ptVar3->level) && ((__src->token).variable - 3U < 2)) {
          if (n_tokens < iVar2 + 2) {
            error_huge();
          }
          memmove(equation + i + 3,__src,(~i + *np) * 0x10);
          *np = *np + 2;
          (ptVar3->token).constant = -(ptVar3->token).constant;
          ptVar3 = equation + i + 1;
          ptVar3->level = iVar1;
          ptVar3->kind = OPERATOR;
          (ptVar3->token).variable = 4;
          i = i + 2;
          ptVar3 = equation + i;
          ptVar3->level = iVar1;
          ptVar3->kind = CONSTANT;
          (ptVar3->token).constant = -1.0;
        }
      }
      i = i + 2;
      iVar2 = *np;
    } while (i < iVar2 + -1);
  }
  return;
}



// WARNING: Unknown calling convention

int unsimp_power(token_type *equation,int *np)

{
  int iVar1;
  token_type *ptVar2;
  int i;
  uint uVar3;
  int iVar4;
  int iVar5;
  int j;
  int iVar6;
  token_type *__src;
  int iVar7;
  int iVar8;
  uint local_28;
  token_type *local_24;
  
  iVar8 = *np;
  local_28 = 0;
  if (1 < iVar8) {
    iVar7 = -1;
    do {
      __src = equation + 2;
      if ((equation[1].token.variable == 6) &&
         ((iVar1 = equation[1].level, iVar1 != equation[2].level || (__src->kind != CONSTANT)))) {
        if (iVar7 < 0) {
LAB_08062085:
          uVar3 = 0;
        }
        else {
          local_24 = equation + -1;
          iVar4 = equation[-1].level;
          if (iVar1 <= iVar4) {
            ptVar2 = equation + -3;
            iVar6 = iVar7;
            do {
              local_24 = ptVar2;
              iVar6 = iVar6 + -2;
              if (iVar6 < 0) goto LAB_08062085;
              iVar4 = local_24->level;
              ptVar2 = local_24 + -2;
            } while (iVar1 <= iVar4);
          }
          if ((iVar4 != iVar1 + -1) || ((local_24->token).variable != 4)) goto LAB_08062085;
          if (n_tokens < iVar8 + 2) {
            error_huge();
          }
          (local_24->token).variable = 3;
          iVar8 = iVar7 + 3;
          iVar4 = *np;
          if (iVar8 < iVar4) {
            iVar6 = equation[2].level;
            iVar5 = iVar8;
            ptVar2 = __src;
            while (iVar1 <= iVar6) {
              ptVar2->level = iVar6 + 1;
              iVar5 = iVar5 + 1;
              iVar4 = *np;
              if (iVar4 <= iVar5) break;
              iVar6 = ptVar2[1].level;
              ptVar2 = ptVar2 + 1;
            }
          }
          memmove(equation + 4,__src,(iVar4 - iVar8) * 0x10);
          *np = *np + 2;
          equation[2].level = iVar1 + 1;
          __src->kind = CONSTANT;
          equation[2].token.constant = -1.0;
          equation[3].level = iVar1 + 1;
          equation[3].kind = OPERATOR;
          equation[3].token.variable = 3;
          uVar3 = 1;
        }
        local_28 = local_28 | uVar3;
      }
      iVar1 = iVar7 + 4;
      iVar8 = *np;
      iVar7 = iVar7 + 2;
      equation = __src;
    } while (iVar1 < iVar8);
  }
  return local_28;
}



// WARNING: Removing unreachable block (ram,0x08062ab8)
// WARNING: Removing unreachable block (ram,0x08062ab4)
// WARNING: Removing unreachable block (ram,0x08062aba)
// WARNING: Unknown calling convention

int sub_ufactor(token_type *equation,int *np,int ii)

{
  double dVar1;
  token_type *ptVar2;
  int be1;
  token_type *ptVar3;
  int iVar4;
  int b2;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int i_1;
  int iVar9;
  int b1;
  token_type *ptVar10;
  int iVar11;
  int i;
  int iVar12;
  int iVar13;
  int iVar14;
  int level;
  int j;
  int len;
  int iVar15;
  ushort in_FPUStatusWord;
  ushort uVar16;
  double d2;
  double dVar17;
  int local_54;
  int local_50;
  int local_40;
  int local_2c;
  int local_28;
  
  iVar7 = *np;
  iVar11 = 1;
  local_54 = 0;
  if (1 < iVar7) {
    do {
      ptVar3 = equation + iVar11;
      iVar15 = (ptVar3->token).variable;
      uVar16 = in_FPUStatusWord;
      if (2 < iVar15) {
        if (iVar15 < 5) {
          if (ii == 1) goto LAB_08062126;
        }
        else if ((iVar15 == 6) && ((ii & 1U) == 0)) {
LAB_08062126:
          iVar6 = ptVar3->level;
          local_50 = iVar11 + -2;
          if ((-1 < local_50) && (iVar6 <= equation[local_50].level)) {
            piVar8 = &equation[iVar11 + -4].level;
            do {
              local_50 = local_50 + -2;
              if (local_50 < 0) break;
              iVar9 = *piVar8;
              piVar8 = piVar8 + -8;
            } while (iVar6 <= iVar9);
          }
          iVar4 = local_50 + 1;
          iVar9 = iVar11 + 2;
          local_40 = iVar9;
          if ((iVar9 < iVar7) && (iVar6 <= equation[iVar9].level)) {
            piVar8 = &equation[iVar11 + 4].level;
            do {
              local_40 = local_40 + 2;
              if (iVar7 <= local_40) break;
              iVar13 = *piVar8;
              piVar8 = piVar8 + 8;
            } while (iVar6 <= iVar13);
          }
          if (2 < iVar15) {
            if (iVar15 < 5) {
              if ((ii == 1) && (local_28 = local_50 + 2, local_28 < local_40)) {
LAB_0806221e:
                iVar7 = equation[local_28].level;
                if ((iVar7 != iVar6 + 1) || (1 < equation[local_28].token.variable - 1U))
                goto LAB_08062527;
                iVar15 = local_28 + -2;
                if ((iVar4 <= iVar15) && (iVar6 < equation[iVar15].level)) {
                  piVar8 = &equation[local_28 + -4].level;
                  do {
                    iVar15 = iVar15 + -2;
                    if (iVar15 < iVar4) break;
                    iVar9 = *piVar8;
                    piVar8 = piVar8 + -8;
                  } while (iVar6 < iVar9);
                }
                iVar13 = iVar15 + 1;
                iVar9 = local_28 + 2;
                if ((iVar9 < local_40) && (iVar6 < equation[iVar9].level)) {
                  piVar8 = &equation[local_28 + 4].level;
                  do {
                    iVar9 = iVar9 + 2;
                    if (local_40 <= iVar9) break;
                    iVar5 = *piVar8;
                    piVar8 = piVar8 + 8;
                  } while (iVar6 < iVar5);
                }
                if ((iVar4 < iVar13) && (equation[iVar15].token.variable == 4)) {
                  local_28 = iVar9 + -2;
                  goto LAB_08062527;
                }
                iVar15 = iVar13 - iVar4;
                iVar11 = 0;
                while( true ) {
                  iVar14 = iVar15 + iVar11;
                  iVar6 = (local_28 - iVar13) + iVar14;
                  iVar5 = (local_40 - iVar9) + iVar6;
                  if (n_tokens < iVar5 + 1) {
                    error_huge();
                  }
                  iVar12 = iVar11 * 0x10;
                  memmove(scratch + iVar11,equation + iVar4,iVar15 * 0x10);
                  for (; iVar11 < iVar14; iVar11 = iVar11 + 1) {
                    piVar8 = (int *)((int)&scratch->level + iVar12);
                    *piVar8 = *piVar8 + 1;
                    iVar12 = iVar12 + 0x10;
                  }
                  memmove(scratch + iVar14,equation + iVar13,(local_28 - iVar13) * 0x10);
                  iVar11 = iVar6 * 0x10;
                  memmove(scratch + iVar6,equation + iVar9,(local_40 - iVar9) * 0x10);
                  ptVar3 = scratch;
                  for (; scratch = ptVar3, iVar6 < iVar5; iVar6 = iVar6 + 1) {
                    piVar8 = (int *)((int)&ptVar3->level + iVar11);
                    *piVar8 = *piVar8 + 1;
                    iVar11 = iVar11 + 0x10;
                    ptVar3 = scratch;
                  }
                  if (iVar9 <= local_28) break;
                  ptVar3[iVar5].kind = equation[local_28].kind;
                  ptVar3[iVar5].level = equation[local_28].level;
                  ptVar3[iVar5].token.variable = equation[local_28].token.variable;
                  *(undefined4 *)((int)&ptVar3[iVar5].token + 4) =
                       *(undefined4 *)((int)&equation[local_28].token + 4);
                  scratch[iVar5].level = scratch[iVar5].level + -1;
                  iVar6 = local_28 + 2;
                  if ((iVar6 < iVar9) && (iVar7 != equation[iVar6].level)) {
                    piVar8 = &equation[local_28 + 4].level;
                    do {
                      iVar6 = iVar6 + 2;
                      if (iVar9 <= iVar6) break;
                      iVar11 = *piVar8;
                      piVar8 = piVar8 + 8;
                    } while (iVar7 != iVar11);
                  }
                  iVar13 = local_28 + 1;
                  iVar11 = iVar5 + 1;
                  local_28 = iVar6;
                }
                if (n_tokens < (iVar4 - local_40) + *np + iVar5) {
                  error_huge();
                }
                memmove(equation + iVar5 + iVar4,equation + local_40,(*np - local_40) * 0x10);
                *np = *np + iVar5 + (iVar4 - local_40);
                memmove(equation + iVar4,scratch,iVar5 * 0x10);
                goto LAB_08062cb6;
              }
            }
            else if (iVar15 == 6) {
              if (((ii == 2) || (ii == 0)) && (local_2c = local_50 + 2, local_2c < iVar11)) {
                ptVar10 = equation + local_2c;
                iVar7 = iVar6 + 1;
                if (ptVar10->level != iVar7) {
                  ptVar2 = equation + local_50 + 4;
                  do {
                    ptVar10 = ptVar2;
                    local_2c = local_2c + 2;
                    if (iVar11 <= local_2c) goto do_pplus;
                    ptVar2 = ptVar10 + 2;
                  } while (ptVar10->level != iVar7);
                }
                if (1 < (ptVar10->token).variable - 3U) goto do_pplus;
                iVar15 = iVar4;
                iVar6 = 0;
                while( true ) {
                  iVar9 = (local_2c - iVar15) + iVar6;
                  iVar13 = iVar9 + (local_40 - iVar11);
                  if (n_tokens < iVar13 + 1) {
                    error_huge();
                  }
                  memmove(scratch + iVar6,equation + iVar15,(local_2c - iVar15) * 0x10);
                  iVar15 = iVar9 * 0x10;
                  memmove(scratch + iVar9,ptVar3,(local_40 - iVar11) * 0x10);
                  ptVar10 = scratch;
                  for (; scratch = ptVar10, iVar9 < iVar13; iVar9 = iVar9 + 1) {
                    piVar8 = (int *)((int)&ptVar10->level + iVar15);
                    *piVar8 = *piVar8 + 1;
                    iVar15 = iVar15 + 0x10;
                    ptVar10 = scratch;
                  }
                  if (iVar11 <= local_2c) break;
                  ptVar10[iVar13].kind = equation[local_2c].kind;
                  ptVar10[iVar13].level = equation[local_2c].level;
                  ptVar10[iVar13].token.variable = equation[local_2c].token.variable;
                  *(undefined4 *)((int)&ptVar10[iVar13].token + 4) =
                       *(undefined4 *)((int)&equation[local_2c].token + 4);
                  scratch[iVar13].level = scratch[iVar13].level + -1;
                  iVar6 = local_2c + 2;
                  if ((iVar6 < iVar11) && (equation[iVar6].level != iVar7)) {
                    piVar8 = &equation[local_2c + 4].level;
                    do {
                      iVar6 = iVar6 + 2;
                      if (iVar11 <= iVar6) break;
                      iVar15 = *piVar8;
                      piVar8 = piVar8 + 8;
                    } while (iVar15 != iVar7);
                  }
                  iVar15 = local_2c + 1;
                  local_2c = iVar6;
                  iVar6 = iVar13 + 1;
                }
                if (n_tokens < (iVar4 - local_40) + *np + iVar13) {
                  error_huge();
                }
                memmove(equation + iVar13 + iVar4,equation + local_40,(*np - local_40) * 0x10);
                *np = (iVar4 - local_40) + *np + iVar13;
                memmove(equation + iVar4,scratch,iVar13 * 0x10);
LAB_08062cb6:
                local_54 = 1;
                iVar11 = local_50;
                uVar16 = in_FPUStatusWord;
              }
              else {
do_pplus:
                if (((ii == 0) || (ii == 4)) && (iVar9 < local_40)) {
                  ptVar10 = equation + iVar9;
                  iVar7 = iVar6 + 1;
                  local_2c = iVar9;
                  if (ptVar10->level != iVar7) {
                    ptVar2 = equation + iVar11 + 4;
                    do {
                      ptVar10 = ptVar2;
                      local_2c = local_2c + 2;
                      if (local_40 <= local_2c) goto do_repeat;
                      ptVar2 = ptVar10 + 2;
                    } while (iVar7 != ptVar10->level);
                  }
                  if ((ptVar10->token).variable - 1U < 2) {
                    iVar11 = iVar11 + 1;
                    iVar13 = iVar11 - iVar4;
                    iVar15 = 0;
                    while( true ) {
                      iVar9 = local_2c - iVar11;
                      if (n_tokens < (iVar9 - iVar4) + iVar15 + iVar9) {
                        error_huge();
                      }
                      iVar14 = iVar15 * 0x10;
                      memmove(scratch + iVar15,equation + iVar4,iVar13 * 0x10);
                      iVar5 = iVar15 + iVar13;
                      for (; iVar15 < iVar5; iVar15 = iVar15 + 1) {
                        piVar8 = (int *)((int)&scratch->level + iVar14);
                        *piVar8 = *piVar8 + 1;
                        iVar14 = iVar14 + 0x10;
                      }
                      memmove(scratch + iVar5,equation + iVar11,iVar9 * 0x10);
                      iVar5 = iVar5 + iVar9;
                      if (local_40 <= local_2c) break;
                      scratch[iVar5].level = iVar6;
                      scratch[iVar5].kind = OPERATOR;
                      if (equation[local_2c].token.variable == 1) {
                        scratch[iVar5].token.variable = 3;
                      }
                      else {
                        scratch[iVar5].token.variable = 4;
                      }
                      iVar9 = local_2c + 2;
                      if ((iVar9 < local_40) && (iVar7 != equation[iVar9].level)) {
                        piVar8 = &equation[local_2c + 4].level;
                        do {
                          iVar9 = iVar9 + 2;
                          if (local_40 <= iVar9) break;
                          iVar11 = *piVar8;
                          piVar8 = piVar8 + 8;
                        } while (iVar7 != iVar11);
                      }
                      iVar15 = iVar5 + 1;
                      iVar11 = local_2c + 1;
                      local_2c = iVar9;
                    }
                    if (n_tokens < (iVar4 - local_40) + *np + iVar5) {
                      error_huge();
                    }
                    memmove(equation + iVar5 + iVar4,equation + local_40,(*np - local_40) * 0x10);
                    *np = (iVar4 - local_40) + *np + iVar5;
                    memmove(equation + iVar4,scratch,iVar5 * 0x10);
                    goto LAB_08062cb6;
                  }
                }
do_repeat:
                if ((((ii == 6) || (ii == 8)) &&
                    (ptVar10 = equation + iVar11 + 1, iVar6 == ptVar10->level)) &&
                   (ptVar10->kind == CONSTANT)) {
                  dVar17 = (ptVar10->token).constant;
                  iVar7 = __finite(dVar17);
                  uVar16 = in_FPUStatusWord;
                  if ((iVar7 != 0) && (uVar16 = in_FPUStatusWord & 0xfdff, 1.0 < dVar17)) {
                    if (ii != 8) {
                      if (100.0 < dVar17) goto LAB_08062c9b;
                      if (iVar11 - iVar4 == 1) {
                        if (equation[iVar4].kind != CONSTANT) goto LAB_08062c9b;
                      }
                      else if ((1 < iVar11 - iVar4) && (dVar1 = dVar17, 2.0 < (float)dVar17)) {
                        do {
                          dVar1 = dVar1 - (dVar1 / 1.0) * 1.0;
                        } while ((in_FPUStatusWord & 0x400) != 0);
                        if (dVar1 != 0.0) goto LAB_08062c9b;
                      }
                    }
                    dVar17 = ceil(dVar17);
                    dVar17 = dVar17 - 1.0;
                    iVar7 = iVar11 - iVar4;
                    dVar1 = ((double)iVar7 + 1.0) * dVar17;
                    uVar16 = uVar16 & 0xfdff;
                    if ((double)*np + dVar1 <= (double)(n_tokens + -10)) {
                      local_2c = (int)ROUND(dVar17);
                      iVar15 = (int)ROUND(dVar1);
                      memmove(equation + iVar15 + local_40,equation + local_40,
                              (*np - local_40) * 0x10);
                      *np = *np + iVar15;
                      (ptVar10->token).constant = (ptVar10->token).constant - dVar17;
                      if (0 < local_2c) {
                        piVar8 = &equation[local_40].level;
                        ptVar2 = equation + local_40 + 1;
                        do {
                          *piVar8 = iVar6;
                          ((token_type *)(piVar8 + -1))->kind = OPERATOR;
                          ((storage_type *)(piVar8 + 1))->variable = 3;
                          memmove(ptVar2,equation + iVar4,iVar7 * 0x10);
                          piVar8 = piVar8 + (iVar7 + 1) * 4;
                          ptVar2 = ptVar2 + iVar7 + 1;
                          local_2c = local_2c + -1;
                        } while (0 < local_2c);
                      }
                      in_FPUStatusWord = uVar16 & 0xfdff;
                      if ((ptVar10->token).constant == 1.0) {
                        memmove(ptVar3,equation + local_40,(*np - local_40) * 0x10);
                        *np = *np + (iVar11 - local_40);
                      }
                      else if (iVar4 < local_40) {
                        piVar8 = &equation[iVar4].level;
                        do {
                          *piVar8 = *piVar8 + 1;
                          iVar4 = iVar4 + 1;
                          piVar8 = piVar8 + 4;
                        } while (iVar4 < local_40);
                      }
                      goto LAB_08062cb6;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_08062c9b:
      iVar11 = iVar11 + 2;
      iVar7 = *np;
      in_FPUStatusWord = uVar16;
    } while (iVar11 < iVar7);
  }
  return local_54;
LAB_08062527:
  local_28 = local_28 + 2;
  if (local_40 <= local_28) goto LAB_08062c9b;
  goto LAB_0806221e;
}



// WARNING: Unknown calling convention

void uf_repeat_always(token_type *equation,int *np)

{
  int iVar1;
  
  organize(equation,np);
  iVar1 = sub_ufactor(equation,np,8);
  if (iVar1 != 0) {
    organize(equation,np);
  }
  return;
}



// WARNING: Unknown calling convention

void uf_repeat(token_type *equation,int *np)

{
  int iVar1;
  
  organize(equation,np);
  iVar1 = sub_ufactor(equation,np,6);
  if (iVar1 != 0) {
    organize(equation,np);
  }
  patch_root_div(equation,np);
  return;
}



// WARNING: Unknown calling convention

void uf_allpower(token_type *equation,int *np)

{
  int iVar1;
  
  do {
    organize(equation,np);
    iVar1 = sub_ufactor(equation,np,0);
  } while (iVar1 != 0);
  return;
}



// WARNING: Unknown calling convention

int uf_pplus(token_type *equation,int *np)

{
  int iVar1;
  int rv;
  
  organize(equation,np);
  iVar1 = sub_ufactor(equation,np,4);
  if (iVar1 != 0) {
    organize(equation,np);
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int uf_power(token_type *equation,int *np)

{
  int iVar1;
  int rv;
  
  organize(equation,np);
  iVar1 = sub_ufactor(equation,np,2);
  if (iVar1 != 0) {
    organize(equation,np);
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int uf_times(token_type *equation,int *np)

{
  int iVar1;
  int iVar2;
  token_type *ptVar3;
  int i;
  int i_1;
  uint uVar4;
  int j;
  int iVar5;
  token_type *ptVar6;
  int level;
  int iVar7;
  uint local_24;
  
  local_24 = 0;
  do {
    organize(equation,np);
    if (partial_flag != 0) {
      reorder(equation,np);
    }
    group_proc(equation,np);
    if ((partial_flag != 0) && (1 < *np)) {
      iVar7 = 0;
      ptVar6 = equation;
      do {
        if ((ptVar6[1].token.variable == 4) && (iVar1 = ptVar6[1].level, -1 < iVar7)) {
          iVar2 = ptVar6->level;
          ptVar3 = ptVar6;
          iVar5 = iVar7;
          while (iVar1 <= iVar2) {
            ptVar3->level = iVar2 + 2;
            iVar5 = iVar5 + -1;
            if (iVar5 < 0) break;
            iVar2 = ptVar3[-1].level;
            ptVar3 = ptVar3 + -1;
          }
        }
        iVar1 = iVar7 + 3;
        iVar7 = iVar7 + 2;
        ptVar6 = ptVar6 + 2;
      } while (*np != iVar1 && iVar1 <= *np);
    }
    uVar4 = sub_ufactor(equation,np,1);
    local_24 = local_24 | uVar4;
    if (uVar4 == 0) {
      organize(equation,np);
      return local_24;
    }
  } while( true );
}



// WARNING: Unknown calling convention

int ufactor(token_type *equation,int *np)

{
  int iVar1;
  int rv;
  
  uf_repeat(equation,np);
  iVar1 = uf_times(equation,np);
  uf_allpower(equation,np);
  return iVar1;
}



// WARNING: Unknown calling convention

int uf_tsimp(token_type *equation,int *np)

{
  int iVar1;
  int iVar2;
  int rv;
  
  iVar1 = uf_times(equation,np);
  simp_loop(equation,np);
  while( true ) {
    iVar2 = uf_times(equation,np);
    if (iVar2 == 0) break;
    simp_loop(equation,np);
    iVar1 = 1;
  }
  return iVar1;
}



// WARNING: Unknown calling convention

void uf_simp_no_repeat(token_type *equation,int *np)

{
  uf_power(equation,np);
  uf_tsimp(equation,np);
  return;
}



// WARNING: Unknown calling convention

void uf_simp(token_type *equation,int *np)

{
  uf_tsimp(equation,np);
  uf_power(equation,np);
  uf_repeat(equation,np);
  uf_tsimp(equation,np);
  return;
}



// WARNING: Unknown calling convention

int vcmp(sort_type *p1,sort_type *p2)

{
  return p2->count - p1->count;
}



// WARNING: Unknown calling convention

int get_term(token_type *p1,int n1,int count,int *tp1,int *lentp1)

{
  int iVar1;
  int i;
  int no;
  int iVar2;
  int iVar3;
  int j;
  
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = 1;
  do {
    if ((n1 <= iVar1) || ((p1[1].level == 1 && (p1[1].token.variable - 1U < 2)))) {
      iVar2 = iVar2 + 1;
      if (count <= iVar2) {
        *tp1 = iVar3;
        *lentp1 = iVar1 - iVar3;
        return 1;
      }
      if (n1 <= iVar1) {
        return 0;
      }
      iVar3 = iVar1 + 1;
    }
    iVar1 = iVar1 + 2;
    p1 = p1 + 2;
  } while( true );
}



// WARNING: Unknown calling convention

void term_value(double *dp,token_type *p1,int n1,int loc)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  token_type *ptVar6;
  double *pdVar7;
  int i;
  int iVar8;
  token_type *ptVar9;
  double *pdVar10;
  int iVar11;
  int j;
  int *piVar12;
  token_type *ptVar13;
  int level;
  int k;
  int iVar14;
  int *piVar15;
  int divide_flag;
  double sub_sum;
  double sub_count;
  double d;
  int local_24;
  token_type *local_18;
  int *local_14;
  
  *dp = 0.0;
  pdVar7 = dp + 1;
  *pdVar7 = 0.0;
  pdVar10 = dp + 2;
  *pdVar10 = 0.0;
  local_24 = 0;
  iVar8 = loc;
  if (loc < n1) {
    piVar12 = &p1[loc].level;
    bVar2 = false;
    do {
      iVar11 = *piVar12;
      if (((token_type *)(piVar12 + -1))->kind == VARIABLE) {
        if (bVar2) {
          *dp = *dp - 1.0;
          *pdVar7 = *pdVar7 - (double)((storage_type *)(piVar12 + 1))->variable;
          *pdVar10 = *pdVar10 - (double)((storage_type *)(piVar12 + 1))->variable;
        }
        else {
          *dp = *dp + 1.0;
          *pdVar7 = (double)((storage_type *)(piVar12 + 1))->variable + *pdVar7;
          *pdVar10 = (double)((storage_type *)(piVar12 + 1))->variable + *pdVar10;
        }
      }
      else if (((token_type *)(piVar12 + -1))->kind == OPERATOR) {
        if ((iVar11 == 1) && (((storage_type *)(piVar12 + 1))->variable - 1U < 2)) break;
        if (((storage_type *)(piVar12 + 1))->variable == 4) {
          if ((!bVar2) || (iVar11 < local_24)) {
            bVar2 = true;
            local_24 = iVar11;
          }
        }
        else if ((bVar2) && (iVar11 <= local_24)) {
          bVar2 = false;
        }
      }
      iVar8 = iVar8 + 1;
      piVar12 = piVar12 + 4;
    } while (iVar8 < n1);
  }
  j = loc + 1;
  if (j < iVar8) {
    piVar12 = &p1[j].level;
    piVar15 = &p1[loc + 2].level;
    local_14 = &p1[loc].level;
    local_18 = p1 + loc + -1;
    bVar2 = false;
    iVar11 = loc;
    do {
      iVar14 = *piVar12;
      if (((storage_type *)(piVar12 + 1))->variable == 4) {
        if ((!bVar2) || (iVar14 < local_24)) {
          bVar2 = true;
          local_24 = iVar14;
        }
      }
      else {
        if ((bVar2) && (iVar14 <= local_24)) {
          bVar2 = false;
        }
        if (((((storage_type *)(piVar12 + 1))->variable == 6) && (iVar1 = *piVar15, iVar1 == iVar14)
            ) && (((token_type *)(piVar15 + -1))->kind == CONSTANT)) {
          dVar3 = ((storage_type *)(piVar15 + 1))->constant - 1.0;
          if ((iVar11 < loc) || (*local_14 < iVar1)) {
            dVar5 = 0.0;
            dVar4 = 0.0;
          }
          else {
            dVar5 = 0.0;
            ptVar6 = local_18;
            ptVar13 = (token_type *)(local_14 + -1);
            iVar14 = iVar11;
            dVar4 = dVar5;
            do {
              ptVar9 = ptVar6;
              if (ptVar13->kind == VARIABLE) {
                dVar5 = dVar5 + 1.0;
                dVar4 = (double)(ptVar13->token).variable + dVar4;
              }
              iVar14 = iVar14 + -1;
            } while ((loc <= iVar14) &&
                    (ptVar6 = ptVar9 + -1, ptVar13 = ptVar9, iVar1 <= ptVar9->level));
          }
          if (bVar2) {
            *dp = *dp - dVar5 * dVar3;
            *pdVar10 = *pdVar10 - dVar4 * dVar3;
          }
          else {
            *dp = dVar5 * dVar3 + *dp;
            *pdVar10 = dVar4 * dVar3 + *pdVar10;
          }
        }
      }
      piVar12 = piVar12 + 8;
      piVar15 = piVar15 + 8;
      local_14 = local_14 + 8;
      local_18 = local_18 + 2;
      iVar14 = iVar11 + 3;
      iVar11 = iVar11 + 2;
    } while (iVar14 < iVar8);
  }
  return;
}



// WARNING: Unknown calling convention

int basic_size(token_type *p1,int len)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int i;
  int constant_flag;
  int local_28;
  int local_24;
  
  iVar2 = min_level(p1,len);
  if (len < 1) {
    local_24 = len;
    local_28 = -1;
    len = 0;
  }
  else {
    local_24 = len;
    bVar1 = true;
    local_28 = -1;
    iVar3 = 0;
    do {
      if (p1->kind == OPERATOR) {
        if ((iVar2 == p1->level) && ((p1->token).variable - 3U < 2)) {
          if (bVar1) {
            local_24 = (local_28 + local_24) - iVar3;
            bVar1 = true;
            local_28 = iVar3;
          }
          else {
            bVar1 = true;
            local_28 = iVar3;
          }
        }
      }
      else if (p1->kind != CONSTANT) {
        bVar1 = false;
      }
      iVar3 = iVar3 + 1;
      p1 = p1 + 1;
    } while (iVar3 != len);
    if (!bVar1) {
      return local_24;
    }
  }
  return (local_24 + local_28) - len;
}



// WARNING: Unknown calling convention

int poly_in_v(token_type *p1,int n,long v,int allow_divides)

{
  int iVar1;
  int iVar2;
  int level;
  int iVar3;
  token_type *ptVar4;
  int n_00;
  int iVar5;
  int j;
  token_type *expression;
  token_type *ptVar6;
  int iVar7;
  int k;
  int local_28;
  token_type *local_24;
  int local_20;
  
  local_24 = p1;
  iVar5 = 0;
  local_20 = 1;
  do {
    if ((n <= local_20) || ((local_24[1].level == 1 && (local_24[1].token.variable - 1U < 2)))) {
      n_00 = local_20 - iVar5;
      expression = p1 + iVar5;
      iVar5 = min_level(expression,n_00);
      if (0 < n_00) {
        local_28 = 0;
        iVar3 = 1;
        ptVar4 = expression;
        do {
          if ((ptVar4->kind == VARIABLE) && (v == (ptVar4->token).variable)) {
            local_28 = local_28 + 1;
            if ((1 < local_28) || ((iVar1 = ptVar4->level, iVar5 != iVar1 && (iVar1 != iVar5 + 1))))
            {
              return 0;
            }
            if (1 < n_00) {
              iVar7 = 1;
              ptVar6 = expression;
              do {
                if (iVar5 == ptVar6[1].level) {
                  iVar2 = ptVar6[1].token.variable;
                  if (iVar2 == 4) {
                    if ((allow_divides == 0) && (iVar3 + -2 == iVar7)) {
                      return 0;
                    }
                  }
                  else if (iVar2 == 6) {
                    if (iVar3 != iVar7) {
                      return 0;
                    }
                  }
                  else if (iVar2 != 3) {
                    return 0;
                  }
                }
                iVar7 = iVar7 + 2;
                ptVar6 = ptVar6 + 2;
              } while (iVar7 < n_00);
            }
            if (iVar1 == iVar5 + 1) {
              if (n_00 <= iVar3) {
                return 0;
              }
              if (iVar1 != ptVar4[1].level) {
                return 0;
              }
              if (ptVar4[1].token.variable != 6) {
                return 0;
              }
            }
          }
          ptVar4 = ptVar4 + 2;
          iVar1 = iVar3 + 1;
          iVar3 = iVar3 + 2;
        } while (iVar1 < n_00);
      }
      if (n <= local_20) {
        return 1;
      }
      iVar5 = local_20 + 1;
    }
    local_20 = local_20 + 2;
    local_24 = local_24 + 2;
  } while( true );
}



// WARNING: Unknown calling convention

int smart_div(token_type *d1,int len1,token_type *d2,int len2)

{
  int *piVar1;
  bool bVar2;
  token_type *ptVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int term_size;
  int flag;
  token_type *ptVar9;
  int iVar10;
  size_t __n;
  int iVar11;
  int i;
  int iVar12;
  int j;
  int skip_count;
  int term_count;
  int iVar13;
  int iVar14;
  int sign;
  int local_1f0;
  int local_1d4;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int skip_terms [100];
  int local_24;
  int local_20 [4];
  
  memmove(trhs,d1,len1 << 4);
  n_trhs = len1;
  memmove(tlhs,d2,len2 << 4);
  n_tlhs = len2;
  uf_simp_no_repeat(trhs,&n_trhs);
  uf_simp_no_repeat(tlhs,&n_tlhs);
  if (2 < debug_level) {
    __fprintf_chk(gfp,1,"%s\n","smart_div() starts:");
  }
  list_debug(3,trhs,n_trhs,(token_type *)0x0,0);
  list_debug(3,tlhs,n_tlhs,(token_type *)0x0,0);
  bVar2 = false;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1d4 = 0;
  local_1c4 = 0;
  iVar12 = 0;
  iVar11 = 0;
  do {
    if (iVar11 < n_tlhs) {
      ptVar9 = tlhs + iVar11;
      if (ptVar9->kind == OPERATOR) {
        if ((ptVar9->level == 1) && ((ptVar9->token).variable - 1U < 2)) goto LAB_080636f1;
      }
      else if ((ptVar9->kind == VARIABLE) && ((ptVar9->token).variable != 3)) {
        bVar2 = true;
      }
    }
    else {
LAB_080636f1:
      local_1c8 = local_1c8 + 1;
      if ((bVar2) &&
         ((local_1c0 == 0 || (iVar6 = var_count(tlhs + iVar12,iVar11 - iVar12), iVar6 < local_1c4)))
         ) {
        local_1c0 = iVar11 - iVar12;
        local_1c4 = var_count(tlhs + iVar12,local_1c0);
        local_1d4 = iVar12;
      }
      if (n_tlhs <= iVar11) goto LAB_0806377f;
      iVar12 = iVar11 + 1;
      bVar2 = false;
    }
    iVar11 = iVar11 + 1;
  } while( true );
code_r0x08063a54:
  if (n_tlhs < 1) goto LAB_08063a77;
  if ((local_20[0] < 1) || (iVar14 = 2, trhs[local_20[0] + -1].token.variable != 2)) {
    iVar14 = 1;
  }
  if ((0 < local_1d4) && (divisor[local_1d4 + -1].token.variable == 2)) {
    iVar14 = (iVar14 != 2) + 1;
  }
  if (n_tokens < local_24 + 1 + local_1c0) {
    return 0;
  }
  memmove(tlhs,trhs + local_20[0],local_24 << 4);
  n_tlhs = local_24;
  if (0 < local_24) {
    iVar13 = 0;
    do {
      tlhs[iVar13].level = tlhs[iVar13].level + 1;
      iVar13 = iVar13 + 1;
    } while (iVar13 < n_tlhs);
  }
  tlhs[n_tlhs].level = 1;
  tlhs[n_tlhs].kind = OPERATOR;
  tlhs[n_tlhs].token.variable = 4;
  n_tlhs = n_tlhs + 1;
  memmove(tlhs + n_tlhs,divisor + local_1d4,local_1c0 << 4);
  iVar13 = local_1c0 + n_tlhs;
  if (n_tlhs < iVar13) {
    iVar10 = n_tlhs << 4;
    iVar8 = n_tlhs;
    n_tlhs = iVar13;
    do {
      piVar1 = (int *)((int)&tlhs->level + iVar10);
      *piVar1 = *piVar1 + 1;
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 0x10;
      iVar13 = n_tlhs;
    } while (iVar8 < n_tlhs);
  }
  n_tlhs = iVar13;
  simp_loop(tlhs,&n_tlhs);
  iVar13 = 30000;
  if (n_tokens < 0x7531) {
    iVar13 = n_tokens;
  }
  if (iVar13 < n_tlhs + n_quotient + 1) {
    return 0;
  }
  if (0 < n_tlhs) {
    iVar13 = 0;
    do {
      tlhs[iVar13].level = tlhs[iVar13].level + 1;
      iVar13 = iVar13 + 1;
    } while (iVar13 < n_tlhs);
  }
  iVar8 = n_quotient;
  quotient[n_quotient].level = 1;
  quotient[n_quotient].kind = OPERATOR;
  quotient[n_quotient].token.variable = iVar14;
  iVar13 = n_tlhs;
  n_quotient = n_quotient + 1;
  ptVar9 = quotient + n_quotient;
  __n = n_tlhs << 4;
  memmove(ptVar9,tlhs,__n);
  n_quotient = n_quotient + n_tlhs;
  if (n_tokens < n_trhs + 2 + iVar13 + n_divisor) {
    return 0;
  }
  memmove(tlhs,trhs,n_trhs << 4);
  n_tlhs = n_trhs;
  memmove(trhs + local_20[0] + 1,trhs + local_20[0] + local_24,
          (n_trhs - (local_20[0] + local_24)) * 0x10);
  ptVar3 = trhs;
  n_trhs = (n_trhs + 1) - local_24;
  trhs[local_20[0]].kind = zero_token.kind;
  ptVar3[local_20[0]].level = zero_token.level;
  ptVar3[local_20[0]].token.variable = zero_token.token.variable;
  *(undefined4 *)((int)&ptVar3[local_20[0]].token + 4) = zero_token.token._4_4_;
  if (0 < n_trhs) {
    iVar10 = 0;
    do {
      trhs[iVar10].level = trhs[iVar10].level + 1;
      iVar10 = iVar10 + 1;
    } while (iVar10 < n_trhs);
  }
  trhs[n_trhs].level = 1;
  trhs[n_trhs].kind = OPERATOR;
  if (iVar14 == 1) {
    trhs[n_trhs].token.variable = 2;
  }
  else {
    trhs[n_trhs].token.variable = 1;
  }
  n_trhs = n_trhs + 1;
  memmove(trhs + n_trhs,ptVar9,__n);
  iVar13 = n_trhs + iVar13;
  if (n_trhs < iVar13) {
    iVar10 = n_trhs << 4;
    iVar14 = n_trhs;
    n_trhs = iVar13;
    do {
      piVar1 = (int *)((int)&trhs->level + iVar10);
      *piVar1 = *piVar1 + 1;
      iVar14 = iVar14 + 1;
      iVar10 = iVar10 + 0x10;
      iVar13 = n_trhs;
    } while (iVar14 < n_trhs);
  }
  n_trhs = iVar13;
  trhs[n_trhs].level = 2;
  trhs[n_trhs].kind = OPERATOR;
  trhs[n_trhs].token.variable = 3;
  iVar13 = n_trhs + 1;
  n_trhs = iVar13;
  memmove(trhs + iVar13,divisor,local_1d4 * 0x10);
  ptVar9 = trhs;
  iVar14 = local_1d4 + n_trhs;
  n_trhs = iVar14;
  trhs[iVar14].kind = zero_token.kind;
  ptVar9[iVar14].level = zero_token.level;
  ptVar9[iVar14].token.variable = zero_token.token.variable;
  *(undefined4 *)((int)&ptVar9[iVar14].token + 4) = zero_token.token._4_4_;
  n_trhs = n_trhs + 1;
  memmove(trhs + n_trhs,divisor + iVar11,(n_divisor - iVar11) * 0x10);
  n_trhs = (n_trhs + n_divisor) - iVar11;
  if (iVar13 < n_trhs) {
    iVar14 = iVar13 * 0x10;
    do {
      piVar1 = (int *)((int)&trhs->level + iVar14);
      *piVar1 = *piVar1 + 2;
      iVar13 = iVar13 + 1;
      iVar14 = iVar14 + 0x10;
    } while (iVar13 < n_trhs);
  }
  list_debug(3,trhs,n_trhs,(token_type *)0x0,0);
  uf_tsimp(trhs,&n_trhs);
  list_debug(4,trhs,n_trhs,(token_type *)0x0,0);
  if (((n_trhs == 1) && (trhs->kind == CONSTANT)) && ((trhs->token).constant == 0.0)) goto end_div2;
  if ((local_1c8 < 2) || (n_trhs + n_quotient < iVar5 + iVar4)) {
    if ((n_trhs == 1) && (trhs->kind == CONSTANT)) goto end_div;
    local_1f0 = local_1f0 + 1;
    iVar6 = 0;
  }
  else {
    if (99 < iVar6) {
      if (local_1f0 == 0) {
        return 0;
      }
      n_quotient = iVar8;
      memmove(trhs,tlhs,n_tlhs << 4);
      n_trhs = n_tlhs;
      goto LAB_08063abc;
    }
    skip_terms[iVar6] = iVar7;
    iVar6 = iVar6 + 1;
    n_quotient = iVar8;
    memmove(trhs,tlhs,n_tlhs << 4);
    n_trhs = n_tlhs;
    if (2 < debug_level) {
      __fprintf_chk(gfp,1,"%s\n","Skipping last operation.");
    }
  }
  goto LAB_0806387b;
LAB_08063a77:
  if (0 < local_1f0) {
end_div:
    if (1 < local_1c8) {
LAB_08063abc:
      if (iVar12 + 1 <= n_trhs + n_quotient) {
        return 0;
      }
    }
end_div2:
    memmove(tlhs,quotient,n_quotient << 4);
    n_tlhs = n_quotient;
    list_debug(3,tlhs,n_quotient,(token_type *)0x0,0);
    list_debug(3,trhs,n_trhs,(token_type *)0x0,0);
    return 1;
  }
  if (local_1c8 < 2) {
    return 0;
  }
  local_1c0 = n_divisor;
  local_1d4 = 0;
  local_1c8 = 1;
  goto try_one;
LAB_0806377f:
  if (0 < local_1c0) {
    n_quotient = 1;
    quotient[0].kind = zero_token.kind;
    quotient[0].level = zero_token.level;
    quotient[0].token.variable = zero_token.token.variable;
    quotient[0].token._4_4_ = zero_token.token._4_4_;
    if (n_tlhs < 0x7531) {
      __memmove_chk(divisor,tlhs,n_tlhs << 4,480000);
      n_divisor = n_tlhs;
try_one:
      iVar12 = n_trhs;
      iVar11 = local_1c0 + local_1d4;
      local_1f0 = 0;
      iVar6 = 0;
LAB_0806387b:
      iVar14 = skip_terms[0];
      iVar5 = n_quotient;
      iVar4 = n_trhs;
      iVar13 = 1;
      do {
        iVar7 = get_term(trhs,n_trhs,iVar13,local_20,&local_24);
        if (iVar7 == 0) goto LAB_08063a77;
        if (iVar6 < 1) {
LAB_08064244:
          if (n_tokens < local_1c0 + 1 + local_24) {
            return 0;
          }
          memmove(tlhs,trhs + local_20[0],local_24 << 4);
          n_tlhs = local_24;
          if (0 < local_24) {
            iVar7 = 0;
            do {
              tlhs[iVar7].level = tlhs[iVar7].level + 1;
              iVar7 = iVar7 + 1;
            } while (iVar7 < n_tlhs);
          }
          tlhs[n_tlhs].level = 1;
          tlhs[n_tlhs].kind = OPERATOR;
          tlhs[n_tlhs].token.variable = 4;
          n_tlhs = n_tlhs + 1;
          memmove(tlhs + n_tlhs,divisor + local_1d4,local_1c0 << 4);
          iVar7 = local_1c0 + n_tlhs;
          if (n_tlhs < iVar7) {
            iVar10 = n_tlhs << 4;
            iVar8 = n_tlhs;
            n_tlhs = iVar7;
            do {
              piVar1 = (int *)((int)&tlhs->level + iVar10);
              *piVar1 = *piVar1 + 1;
              iVar8 = iVar8 + 1;
              iVar10 = iVar10 + 0x10;
              iVar7 = n_tlhs;
            } while (iVar8 < n_tlhs);
          }
          n_tlhs = iVar7;
          iVar7 = simp_loop(tlhs,&n_tlhs);
          if (iVar7 != 0) {
            iVar8 = basic_size(tlhs,n_tlhs);
            iVar10 = basic_size(trhs + local_20[0],local_24);
            iVar7 = local_20[0];
            if (iVar8 <= iVar10) goto code_r0x08063a54;
          }
        }
        else {
          iVar8 = 0;
          iVar7 = iVar14;
          while (iVar7 != local_20[0]) {
            iVar8 = iVar8 + 1;
            if (iVar6 <= iVar8) goto LAB_08064244;
            iVar7 = skip_terms[iVar8];
          }
        }
        iVar13 = iVar13 + 1;
      } while( true );
    }
  }
  return 0;
}



// WARNING: Unknown calling convention
// Local variable j:int[ECX:4] conflicts with parameter, skipped.

void save_factors(token_type *equation,int *np,int loc1,int len,int level)

{
  token_type *ptVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int i;
  
  iVar2 = n_tlhs + n_trhs + 1;
  iVar3 = iVar2 - len;
  if (n_tokens < iVar3 + *np) {
    error_huge();
  }
  memmove(equation + loc1 + iVar2,equation + len + loc1,(*np - (len + loc1)) * 0x10);
  *np = *np + iVar3;
  memmove(equation + loc1,tlhs,n_tlhs << 4);
  i = loc1 + n_tlhs;
  ptVar1 = equation + i;
  ptVar1->level = 0;
  ptVar1->kind = OPERATOR;
  (ptVar1->token).variable = 3;
  memmove(equation + i + 1,trhs,n_trhs << 4);
  iVar2 = i + 1 + n_trhs;
  if (loc1 < iVar2) {
    piVar4 = &equation[loc1].level;
    do {
      *piVar4 = *piVar4 + level;
      loc1 = loc1 + 1;
      piVar4 = piVar4 + 4;
    } while (loc1 < iVar2);
  }
  return;
}



// WARNING: Unknown calling convention

int is_integer_var(long v)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  char *cp;
  _func_int_varargs *strncmpfunc;
  
  strncmpfunc = strncasecmp;
  if (case_sensitive_flag != 0) {
    strncmpfunc = strncmp;
  }
  pcVar1 = var_name(v);
  uVar2 = 0;
  if (pcVar1 != (char *)0x0) {
    iVar3 = (*strncmpfunc)(pcVar1,"integer",7);
    uVar2 = (uint)(iVar3 == 0);
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x08064414)
// WARNING: Removing unreachable block (ram,0x08064410)
// WARNING: Removing unreachable block (ram,0x08064416)
// WARNING: Unknown calling convention

int is_integer_expr(token_type *p1,int n)

{
  double dVar1;
  kind_list kVar2;
  int iVar3;
  int i;
  ushort in_FPUStatusWord;
  
  if (0 < n) {
    i = 0;
    do {
      kVar2 = p1->kind;
      if (kVar2 == VARIABLE) {
        iVar3 = is_integer_var((p1->token).variable);
        if ((iVar3 == 0) && (((p1->token).variable & 0x3fffU) != 4)) {
          return 0;
        }
      }
      else if (kVar2 == CONSTANT) {
        dVar1 = (p1->token).constant;
        do {
          dVar1 = dVar1 - (dVar1 / 1.0) * 1.0;
        } while ((in_FPUStatusWord & 0x400) != 0);
        in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
        if (dVar1 != 0.0) {
          return 0;
        }
      }
      else if ((kVar2 == OPERATOR) && ((p1->token).variable == 4)) {
        return 0;
      }
      i = i + 1;
      p1 = p1 + 1;
    } while (i < n);
  }
  return 1;
}



// WARNING: Unknown calling convention

int remove_factors(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int j;
  int iVar4;
  int plus_flag;
  int i;
  int op;
  int k;
  bool bVar5;
  int local_24;
  int local_20;
  
  if (2 < debug_level) {
    __fprintf_chk(gfp,1,"%s\n","Entering remove_factors() with:");
  }
  list_debug(3,tlhs,n_tlhs,(token_type *)0x0,0);
  do {
    simp_ssub(tlhs,&n_tlhs,0,1.0,0,1,4);
    iVar3 = uf_power(tlhs,&n_tlhs);
  } while (iVar3 != 0);
  if (1 < n_tlhs) {
    bVar5 = false;
    bVar2 = false;
    local_24 = 0;
    local_20 = 0;
    iVar3 = 1;
    do {
      iVar1 = tlhs[iVar3].token.variable;
      if (tlhs[iVar3].level == 1) {
        if (iVar1 < 1) {
          return 0;
        }
        if (iVar1 < 3) goto LAB_080646d6;
        if (4 < iVar1) {
          return 0;
        }
        if ((bVar2) && (!bVar5)) {
          local_20 = local_20 - (uint)(0 < local_24);
          iVar4 = iVar3 - local_20;
          memmove(scratch + local_24,tlhs + local_20,iVar4 * 0x10);
          local_24 = local_24 + iVar4;
        }
        bVar5 = iVar1 == 4;
        local_20 = iVar3 + 1;
        bVar2 = false;
      }
      else if ((tlhs[iVar3].level == 2) && (iVar1 - 1U < 2)) {
LAB_080646d6:
        bVar2 = true;
      }
      iVar3 = iVar3 + 2;
    } while (iVar3 < n_tlhs);
    if ((bVar2) && (!bVar5)) {
      if (0 < local_24) {
        local_20 = local_20 + -1;
      }
      memmove(scratch + local_24,tlhs + local_20,(iVar3 - local_20) * 0x10);
      local_24 = (iVar3 - local_20) + local_24;
    }
    if (0 < local_24) {
      memmove(tlhs,scratch,local_24 << 4);
      n_tlhs = local_24;
      list_debug(3,tlhs,local_24,(token_type *)0x0,0);
      return 1;
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08064b86)
// WARNING: Removing unreachable block (ram,0x080648d2)
// WARNING: Removing unreachable block (ram,0x080648c2)
// WARNING: Removing unreachable block (ram,0x080648ca)
// WARNING: Removing unreachable block (ram,0x08064b7a)
// WARNING: Removing unreachable block (ram,0x08064b8a)
// WARNING: Unknown calling convention

int find_greatest_power(token_type *p1,int n1,long *vp1,double *pp1,int *tp1,int *lentp1,int *dcodep
                       )

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  int k;
  int iVar7;
  token_type *ptVar8;
  storage_type *psVar9;
  bool bVar10;
  int was_power;
  int iVar11;
  int flag;
  int *piVar12;
  int iVar13;
  int iVar14;
  int i;
  token_type *ptVar15;
  int divide_flag;
  int local_70;
  long local_6c;
  int local_68;
  int local_64;
  int local_5c;
  int local_58;
  int local_50;
  double va [3];
  double last_va [3];
  
  uVar6 = 0;
  do {
    *(undefined4 *)((int)last_va + uVar6) = 0;
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x18);
  *pp1 = 0.0;
  *tp1 = -1;
  local_68 = *dcodep;
  local_64 = 0;
  bVar10 = false;
  local_6c = 0;
  local_5c = 0;
  local_50 = 0;
  local_58 = 0;
  iVar14 = 1;
  ptVar15 = p1;
  do {
    if ((iVar14 < n1) &&
       ((iVar13 = ptVar15[1].token.variable, 1 < iVar13 - 1U || (ptVar15[1].level != 1)))) {
      iVar7 = ptVar15[1].level;
      if (iVar13 == 4) {
        if ((local_50 == 0) || (iVar7 < local_5c)) {
          local_50 = 1;
          local_5c = iVar7;
        }
      }
      else {
        iVar11 = local_50;
        if ((local_50 != 0) && (iVar11 = 0, local_5c < iVar7)) {
          iVar11 = local_50;
        }
        local_50 = iVar11;
        if ((((iVar13 == 6) && (ptVar15[2].kind == CONSTANT)) &&
            ((iVar13 = *vp1, iVar13 != 0 || (ptVar15[2].level == iVar7)))) &&
           ((1 < *dcodep || (local_50 == *dcodep)))) {
          dVar1 = ptVar15[2].token.constant;
          piVar12 = &ptVar15[-1].level;
          ptVar8 = ptVar15;
          iVar11 = iVar14;
          do {
            if (ptVar8->kind == VARIABLE) {
              if (iVar13 == 0) {
                if (dVar1 <= *pp1) goto LAB_08064c68;
                local_6c = (ptVar8->token).variable;
                *pp1 = dVar1;
                *tp1 = local_58;
                local_68 = local_50;
                bVar10 = true;
                break;
              }
              if (iVar13 == (ptVar8->token).variable) {
                term_value(va,p1,n1,local_58);
                dVar2 = *pp1;
                if ((dVar1 == dVar2) && (local_68 == local_50)) {
                  local_64 = local_64 + (uint)(*tp1 != local_58);
                  dVar4 = va[0];
                  dVar5 = last_va[0];
                  if (((((va[0] == last_va[0]) &&
                        (dVar4 = va[1], dVar5 = last_va[1], va[1] == last_va[1])) &&
                       (dVar4 = va[2], dVar5 = last_va[2], va[2] == last_va[2])) || (dVar5 <= dVar4)
                      ) && ((dVar1 <= dVar2 && (dVar1 != dVar2 || local_68 <= local_50)))) {
LAB_08064c68:
                    bVar10 = true;
                    break;
                  }
                }
                else {
                  if ((dVar1 <= dVar2) && (dVar1 != dVar2 || local_68 <= local_50))
                  goto LAB_08064c68;
                  local_64 = 1;
                }
                memmove(last_va,va,0x18);
                *pp1 = dVar1;
                *tp1 = local_58;
                local_68 = local_50;
                bVar10 = true;
                break;
              }
            }
            iVar11 = iVar11 + -2;
            if (iVar11 <= local_58) break;
            iVar3 = *piVar12;
            ptVar8 = ptVar8 + -2;
            piVar12 = piVar12 + -8;
          } while (iVar7 < iVar3);
        }
      }
    }
    else {
      if ((!bVar10) && ((*pp1 <= 1.0 && (local_58 < iVar14)))) {
        local_70 = 0;
        iVar13 = local_58;
        do {
          ptVar8 = p1 + iVar13;
          if (ptVar8->kind == VARIABLE) {
            if ((1 < *dcodep) || (local_70 == *dcodep)) {
              if (*vp1 == 0) {
                local_6c = (ptVar8->token).variable;
                *pp1 = 1.0;
                *tp1 = local_58;
                local_68 = local_70;
                break;
              }
              if (*vp1 == (ptVar8->token).variable) {
                term_value(va,p1,n1,local_58);
                dVar1 = *pp1;
                if ((dVar1 == 1.0) && (local_68 == local_70)) {
                  local_64 = local_64 + (uint)(*tp1 != local_58);
                  dVar2 = va[0];
                  dVar4 = last_va[0];
                  if (((((va[0] == last_va[0]) &&
                        (dVar2 = va[1], dVar4 = last_va[1], va[1] == last_va[1])) &&
                       (dVar2 = va[2], dVar4 = last_va[2], va[2] == last_va[2])) || (dVar4 <= dVar2)
                      ) && ((1.0 <= dVar1 && (dVar1 != 1.0 || local_68 <= local_70)))) break;
                }
                else {
                  if ((1.0 <= dVar1) && (dVar1 != 1.0 || local_68 <= local_70)) break;
                  local_64 = 1;
                }
                memmove(last_va,va,0x18);
                *pp1 = 1.0;
                *tp1 = local_58;
                local_68 = local_70;
                break;
              }
            }
          }
          else if (ptVar8->kind == OPERATOR) {
            if ((ptVar8->token).variable == 4) {
              if ((local_70 == 0) || (ptVar8->level < local_5c)) {
                local_5c = ptVar8->level;
                local_70 = 1;
              }
            }
            else {
              iVar7 = local_70;
              if ((local_70 != 0) && (iVar7 = 0, local_5c < ptVar8->level)) {
                iVar7 = local_70;
              }
              local_70 = iVar7;
              if ((ptVar8->token).variable == 6) {
                piVar12 = &p1[iVar13 + 2].level;
                do {
                  iVar7 = iVar13;
                  iVar13 = iVar7 + 2;
                  if (iVar14 <= iVar13) break;
                  iVar11 = *piVar12;
                  piVar12 = piVar12 + 8;
                } while (ptVar8->level < iVar11);
                iVar13 = iVar7 + 1;
              }
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar14);
      }
      if (n1 <= iVar14) break;
      local_58 = iVar14 + 1;
      bVar10 = false;
      local_50 = 0;
    }
    iVar14 = iVar14 + 2;
    ptVar15 = ptVar15 + 2;
  } while( true );
  if (*vp1 == 0) {
    *vp1 = local_6c;
  }
  iVar14 = *tp1;
  if (-1 < iVar14) {
    iVar13 = iVar14 + 1;
    if (iVar13 < n1) {
      psVar9 = &p1[iVar13].token;
      do {
        if ((psVar9->variable - 1U < 2) && (*(int *)((int)psVar9 + -4) == 1)) break;
        iVar13 = iVar13 + 2;
        psVar9 = psVar9 + 4;
      } while (iVar13 < n1);
    }
    *lentp1 = iVar13 - iVar14;
  }
  if (*dcodep == 2) {
    *dcodep = local_68;
  }
  return local_64;
}



// WARNING: Unknown calling convention

int find_highest_count(token_type *p1,int n1,token_type *p2,int n2,long *vp1)

{
  token_type *ptVar1;
  int count2;
  int iVar2;
  int i;
  int iVar3;
  int vc;
  size_t __nmemb;
  long v1;
  int iVar4;
  int local_1f94;
  int local_1f90;
  sort_type va [1000];
  double local_44;
  double local_3c;
  int len_t2;
  int t2;
  int len_t1;
  int t1;
  uint local_20 [4];
  
  if (n1 < 1) {
    __nmemb = 0;
LAB_08064dd2:
    if ((int)__nmemb < 1) {
      return 0;
    }
  }
  else {
    local_1f90 = 0;
    __nmemb = 0;
    do {
      iVar4 = -1;
      local_1f94 = 0;
      iVar3 = 0;
      ptVar1 = p1;
      do {
        if ((ptVar1->kind == VARIABLE) && (iVar2 = (ptVar1->token).variable, local_1f90 < iVar2)) {
          if ((iVar4 == -1) || (iVar2 < iVar4)) {
            local_1f94 = 1;
            iVar4 = iVar2;
          }
          else if (iVar4 == iVar2) {
            local_1f94 = local_1f94 + 1;
          }
        }
        iVar3 = iVar3 + 2;
        ptVar1 = ptVar1 + 2;
      } while (iVar3 < n1);
      if (iVar4 == -1) goto LAB_08064dd2;
      va[__nmemb].v = iVar4;
      va[__nmemb].count = local_1f94;
      __nmemb = __nmemb + 1;
      local_1f90 = iVar4;
    } while (__nmemb != 1000);
  }
  qsort(va,__nmemb,8,vcmp);
  iVar4 = 0;
  do {
    if (4 < (va[iVar4].v & 0x3fffU)) {
      *vp1 = va[iVar4].v;
      local_20[0] = 2;
      iVar3 = find_greatest_power(p1,n1,vp1,&local_3c,&t1,&len_t1,(int *)local_20);
      iVar2 = find_greatest_power(p2,n2,vp1,&local_44,&t2,&len_t2,(int *)local_20);
      if (((0.0 < local_44) && (local_44 <= local_3c)) && (iVar2 <= iVar3)) {
LAB_08064f5e:
        return va[iVar4].count;
      }
      local_20[0] = (uint)(local_20[0] == 0);
      iVar3 = find_greatest_power(p1,n1,vp1,&local_3c,&t1,&len_t1,(int *)local_20);
      iVar2 = find_greatest_power(p2,n2,vp1,&local_44,&t2,&len_t2,(int *)local_20);
      if (((0.0 < local_44) && (local_44 <= local_3c)) && (iVar2 <= iVar3)) goto LAB_08064f5e;
    }
    iVar4 = iVar4 + 1;
    if ((int)__nmemb <= iVar4) {
      return 0;
    }
  } while( true );
}



// WARNING: Unknown calling convention

int poly_div(token_type *d1,int len1,token_type *d2,int len2,long *vp)

{
  int *piVar1;
  token_type *ptVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int sum_size;
  int i;
  int rv;
  int i_1;
  int sign;
  int last_count;
  int iVar11;
  jmp_buf save_save;
  double local_4c;
  double local_44;
  double local_3c;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20 [4];
  
  iVar4 = partial_flag;
  partial_flag = 0;
  memmove(save_save,jmp_save,0x9c);
  iVar7 = _setjmp((__jmp_buf_tag *)jmp_save);
  if (iVar7 != 0) {
    memmove(jmp_save,save_save,0x9c);
    if (iVar7 != 0xd) {
      partial_flag = iVar4;
      return 0;
    }
    partial_flag = iVar4;
                    // WARNING: Subroutine does not return
    __longjmp_chk(jmp_save,0xd);
  }
  if ((len1 <= n_tokens) && (len2 <= n_tokens)) {
    if (d1 != trhs) {
      memmove(trhs,d1,len1 << 4);
      n_trhs = len1;
    }
    if (d2 != tlhs) {
      memmove(tlhs,d2,len2 << 4);
      n_tlhs = len2;
    }
    uf_simp(trhs,&n_trhs);
    uf_simp(tlhs,&n_tlhs);
    if ((*vp != 0) || (iVar7 = find_highest_count(trhs,n_trhs,tlhs,n_tlhs,vp), iVar7 != 0)) {
      if (2 < debug_level) {
        list_var(*vp,0);
        __fprintf_chk(gfp,1,"poly_div() starts using base variable (%s):\n",var_str);
        list_debug(3,trhs,n_trhs,(token_type *)0x0,0);
        list_debug(3,tlhs,n_tlhs,(token_type *)0x0,0);
      }
      local_30 = 2;
      iVar7 = find_greatest_power(trhs,n_trhs,vp,&local_3c,local_20,&local_24,(int *)&local_30);
      find_greatest_power(tlhs,n_tlhs,vp,&local_44,&local_28,&local_2c,(int *)&local_30);
      if ((local_44 <= 0.0) || (local_3c < local_44)) {
        local_30 = (uint)(local_30 == 0);
        iVar7 = find_greatest_power(trhs,n_trhs,vp,&local_3c,local_20,&local_24,(int *)&local_30);
        find_greatest_power(tlhs,n_tlhs,vp,&local_44,&local_28,&local_2c,(int *)&local_30);
        if ((local_44 <= 0.0) || (local_3c < local_44)) goto LAB_080659e9;
      }
      n_quotient = 1;
      quotient[0].kind = zero_token.kind;
      quotient[0].level = zero_token.level;
      quotient[0].token.variable = zero_token.token.variable;
      quotient[0].token._4_4_ = zero_token.token._4_4_;
      if (n_tlhs < 0x7531) {
        __memmove_chk(divisor,tlhs,n_tlhs << 4,480000);
        iVar5 = n_quotient;
        iVar3 = n_trhs;
        n_divisor = n_tlhs;
        dVar6 = local_3c;
        while( true ) {
          local_3c = dVar6;
          iVar11 = iVar7;
          if ((local_20[0] < 1) || (iVar7 = 2, trhs[local_20[0] + -1].token.variable != 2)) {
            iVar7 = 1;
          }
          if ((0 < local_28) && (*(int *)(&DAT_0816e598 + local_28 * 0x10) == 2)) {
            iVar7 = (iVar7 != 2) + 1;
          }
          if (n_tokens < local_24 + local_2c + 1) break;
          memmove(tlhs,trhs + local_20[0],local_24 << 4);
          n_tlhs = local_24;
          if (0 < local_24) {
            iVar8 = 0;
            do {
              tlhs[iVar8].level = tlhs[iVar8].level + 1;
              iVar8 = iVar8 + 1;
            } while (iVar8 < n_tlhs);
          }
          tlhs[n_tlhs].level = 1;
          tlhs[n_tlhs].kind = OPERATOR;
          tlhs[n_tlhs].token.variable = 4;
          n_tlhs = n_tlhs + 1;
          memmove(tlhs + n_tlhs,divisor + local_28,local_2c << 4);
          iVar8 = n_tlhs + local_2c;
          if (n_tlhs < iVar8) {
            iVar10 = n_tlhs << 4;
            iVar9 = n_tlhs;
            n_tlhs = iVar8;
            do {
              piVar1 = (int *)((int)&tlhs->level + iVar10);
              *piVar1 = *piVar1 + 1;
              iVar9 = iVar9 + 1;
              iVar10 = iVar10 + 0x10;
              iVar8 = n_tlhs;
            } while (iVar9 < n_tlhs);
          }
          n_tlhs = iVar8;
          iVar8 = simp_loop(tlhs,&n_tlhs);
          if (iVar8 == 0) break;
          iVar8 = 30000;
          if (n_tokens < 0x7531) {
            iVar8 = n_tokens;
          }
          if (iVar8 < n_tlhs + n_quotient + 1) break;
          if (0 < n_tlhs) {
            iVar8 = 0;
            do {
              tlhs[iVar8].level = tlhs[iVar8].level + 1;
              iVar8 = iVar8 + 1;
            } while (iVar8 < n_tlhs);
          }
          quotient[n_quotient].level = 1;
          quotient[n_quotient].kind = OPERATOR;
          quotient[n_quotient].token.variable = iVar7;
          n_quotient = n_quotient + 1;
          memmove(quotient + n_quotient,tlhs,n_tlhs << 4);
          n_quotient = n_quotient + n_tlhs;
          if (n_tokens < n_trhs + n_tlhs + 2 + n_divisor) break;
          memmove(trhs + local_20[0] + 1,trhs + local_20[0] + local_24,
                  (n_trhs - (local_20[0] + local_24)) * 0x10);
          ptVar2 = trhs;
          n_trhs = (n_trhs + 1) - local_24;
          trhs[local_20[0]].kind = zero_token.kind;
          ptVar2[local_20[0]].level = zero_token.level;
          ptVar2[local_20[0]].token.variable = zero_token.token.variable;
          *(undefined4 *)((int)&ptVar2[local_20[0]].token + 4) = zero_token.token._4_4_;
          if (0 < n_trhs) {
            iVar8 = 0;
            do {
              trhs[iVar8].level = trhs[iVar8].level + 1;
              iVar8 = iVar8 + 1;
            } while (iVar8 < n_trhs);
          }
          trhs[n_trhs].level = 1;
          trhs[n_trhs].kind = OPERATOR;
          if (iVar7 == 1) {
            trhs[n_trhs].token.variable = 2;
          }
          else {
            trhs[n_trhs].token.variable = 1;
          }
          n_trhs = n_trhs + 1;
          memmove(trhs + n_trhs,tlhs,n_tlhs << 4);
          iVar7 = n_trhs + n_tlhs;
          if (n_trhs < iVar7) {
            iVar9 = n_trhs << 4;
            iVar8 = n_trhs;
            n_trhs = iVar7;
            do {
              piVar1 = (int *)((int)&trhs->level + iVar9);
              *piVar1 = *piVar1 + 1;
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + 0x10;
              iVar7 = n_trhs;
            } while (iVar8 < n_trhs);
          }
          n_trhs = iVar7;
          trhs[n_trhs].level = 2;
          trhs[n_trhs].kind = OPERATOR;
          trhs[n_trhs].token.variable = 3;
          iVar8 = n_trhs + 1;
          n_trhs = iVar8;
          memmove(trhs + iVar8,divisor,local_28 << 4);
          ptVar2 = trhs;
          iVar7 = local_28 + n_trhs;
          n_trhs = iVar7;
          trhs[iVar7].kind = zero_token.kind;
          ptVar2[iVar7].level = zero_token.level;
          ptVar2[iVar7].token.variable = zero_token.token.variable;
          *(undefined4 *)((int)&ptVar2[iVar7].token + 4) = zero_token.token._4_4_;
          n_trhs = n_trhs + 1;
          memmove(trhs + n_trhs,divisor + local_2c + local_28,
                  (n_divisor - (local_2c + local_28)) * 0x10);
          n_trhs = ((n_trhs + n_divisor) - local_28) - local_2c;
          if (iVar8 < n_trhs) {
            iVar7 = iVar8 * 0x10;
            do {
              piVar1 = (int *)((int)&trhs->level + iVar7);
              *piVar1 = *piVar1 + 2;
              iVar8 = iVar8 + 1;
              iVar7 = iVar7 + 0x10;
            } while (iVar8 < n_trhs);
          }
          list_debug(3,trhs,n_trhs,(token_type *)0x0,0);
          uf_repeat(trhs,&n_trhs);
          uf_tsimp(trhs,&n_trhs);
          list_debug(4,trhs,n_trhs,(token_type *)0x0,0);
          iVar7 = find_greatest_power(trhs,n_trhs,vp,&local_4c,local_20,&local_24,(int *)&local_30);
          if (local_4c < local_44) {
            memmove(tlhs,quotient,n_quotient << 4);
            n_tlhs = n_quotient;
            list_debug(3,tlhs,n_quotient,(token_type *)0x0,0);
            list_debug(3,trhs,n_trhs,(token_type *)0x0,0);
            if (((n_trhs != 1) || (trhs->kind != CONSTANT)) ||
               (iVar7 = 2, (trhs->token).constant != 0.0)) {
              sum_size = iVar5 + iVar3;
              iVar7 = 1;
              if ((sum_size <= n_trhs + n_quotient) &&
                 ((n_trhs + 1 <= sum_size || (iVar7 = -2, n_trhs <= n_divisor)))) {
                iVar7 = -1;
              }
            }
            goto LAB_080659f7;
          }
          dVar6 = local_4c;
          if ((local_3c <= local_4c) &&
             ((local_3c < local_4c || (dVar6 = local_3c, iVar11 <= iVar7)))) break;
        }
      }
    }
  }
LAB_080659e9:
  iVar7 = 0;
LAB_080659f7:
  memmove(jmp_save,save_save,0x9c);
  partial_flag = iVar4;
  return iVar7;
}



// WARNING: Unknown calling convention

int do_gcd(long *vp)

{
  int i;
  int iVar1;
  int count;
  
  count = 1;
  iVar1 = len_d;
  while( true ) {
    len_d = iVar1;
    iVar1 = poly_div(trhs,n_trhs,gcd_divisor,len_d,vp);
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == 2) {
      return count;
    }
    if (n_tokens < len_d) {
      return 0;
    }
    if (30000 < n_trhs) break;
    memmove(scratch,trhs,n_trhs << 4);
    memmove(trhs,gcd_divisor,len_d << 4);
    __memmove_chk(gcd_divisor,scratch,n_trhs << 4,480000);
    iVar1 = n_trhs;
    n_trhs = len_d;
    count = count + 1;
    if (count == 0x32) {
      len_d = iVar1;
      return 0;
    }
  }
  return 0;
}



// WARNING: Unknown calling convention

int pdiv_recurse(token_type *equation,int *np,int loc,int level,int code)

{
  token_type *d2;
  bool bVar1;
  token_type *ptVar2;
  bool bVar3;
  token_type *ptVar4;
  int rv;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  int k;
  int iVar12;
  uint uVar13;
  int last_op2;
  int i;
  token_type *ptVar14;
  int len1;
  int modified;
  int power_flag;
  token_type *ptVar15;
  uint uVar16;
  token_type *local_74;
  token_type *local_6c;
  long local_64;
  int local_60;
  token_type *local_5c;
  uint local_58;
  token_type *local_54;
  token_type *local_48;
  int local_44;
  token_type *local_40;
  uint local_38;
  long local_34;
  uint local_30;
  long local_20 [4];
  
  local_44 = loc + 1;
  iVar5 = *np;
  if (local_44 < iVar5) {
    local_6c = equation + local_44;
    iVar12 = local_6c->level;
    if (level <= iVar12) {
      local_5c = equation + loc + 5;
      local_58 = ~local_44;
      ptVar14 = equation + local_44;
      local_48 = equation + loc + 3;
      do {
        if ((iVar12 == level) && ((local_6c->token).variable == 4)) {
          iVar11 = local_44 + 2;
          iVar12 = iVar11;
          if ((iVar11 < iVar5) && (level < local_48->level)) {
            piVar7 = &local_5c->level;
            do {
              iVar12 = iVar12 + 2;
              if (iVar5 <= iVar12) break;
              iVar6 = *piVar7;
              piVar7 = piVar7 + 8;
            } while (level < iVar6);
          }
          iVar5 = *np;
          if ((loc < iVar5) && (iVar6 = equation[loc].level, level <= iVar6)) {
            uVar13 = iVar12 + local_58;
            d2 = equation + local_44 + 1;
            iVar12 = 0;
            uVar8 = uVar13;
            local_74 = equation + loc + 3;
            local_60 = loc;
            local_54 = ptVar14;
            local_40 = equation + loc;
            do {
              if ((level == iVar6) && (local_40->kind == OPERATOR)) {
                iVar12 = (local_40->token).variable;
              }
              else if (iVar12 != 4) {
                iVar12 = local_60 + 1;
                if ((iVar12 < iVar5) && (iVar6 = local_54->level, level < iVar6)) {
                  local_34 = 0;
                  ptVar2 = local_74;
                  ptVar15 = local_54;
                  do {
                    ptVar4 = ptVar2;
                    if (iVar6 == level + 1) {
                      local_34 = (ptVar15->token).variable;
                    }
                    iVar12 = iVar12 + 2;
                    if (iVar5 <= iVar12) break;
                    iVar6 = ptVar4->level;
                    ptVar2 = ptVar4 + 2;
                    ptVar15 = ptVar4;
                  } while (level < iVar6);
                  if (local_34 - 1U < 2) {
                    iVar12 = iVar12 - local_60;
                    if ((iVar11 < iVar5) && (iVar6 = local_48->level, level < iVar6)) {
                      bVar1 = false;
                      local_64 = 0;
                      iVar9 = iVar11;
                      ptVar2 = local_5c;
                      ptVar15 = local_48;
                      do {
                        ptVar4 = ptVar2;
                        bVar3 = bVar1;
                        if (iVar6 == level + 3) {
                          bVar3 = true;
                          if (1 < (ptVar15->token).variable - 1U) {
                            bVar3 = bVar1;
                          }
                        }
                        else if (iVar6 == level + 2) {
                          local_64 = (ptVar15->token).variable;
                        }
                        else if (iVar6 == level + 1) {
                          if (((ptVar15->token).variable == 6) &&
                             ((local_64 - 1U < 2 || ((local_64 == 3 && (bVar1)))))) {
                            uVar8 = iVar9 + local_58;
                            uVar16 = 1;
                            goto LAB_08065dda;
                          }
                          break;
                        }
                        bVar1 = bVar3;
                        iVar9 = iVar9 + 2;
                        if (iVar5 <= iVar9) break;
                        iVar6 = ptVar4->level;
                        ptVar2 = ptVar4 + 2;
                        ptVar15 = ptVar4;
                      } while (level < iVar6);
                    }
                    uVar16 = 0;
LAB_08065dda:
                    local_38 = code;
                    do {
                      while( true ) {
                        if (uVar16 == 0) {
                          uVar8 = uVar13;
                        }
                        local_20[0] = 0;
                        if ((local_38 | uVar16) == 0) {
                          iVar5 = smart_div(local_40,iVar12,d2,uVar8);
                        }
                        else {
                          iVar5 = poly_div(local_40,iVar12,d2,uVar8,local_20);
                        }
                        cVar10 = (char)uVar16;
                        if ((((0 < iVar5) && (n_trhs == 1)) && (trhs->kind == CONSTANT)) &&
                           ((trhs->token).constant == 0.0)) break;
                        if (cVar10 == '\0') {
                          if (0 < iVar5) break;
                          goto LAB_080663d2;
                        }
LAB_08065e08:
                        uVar16 = 0;
                      }
                      if (n_tokens < (int)(uVar8 + 2 + n_tlhs + n_trhs)) {
                        error_huge();
                      }
                      if (0 < n_tlhs) {
                        iVar5 = 0;
                        do {
                          tlhs[iVar5].level = tlhs[iVar5].level + 1;
                          iVar5 = iVar5 + 1;
                        } while (iVar5 < n_tlhs);
                      }
                      tlhs[n_tlhs].level = 1;
                      tlhs[n_tlhs].kind = OPERATOR;
                      tlhs[n_tlhs].token.variable = 1;
                      n_tlhs = n_tlhs + 1;
                      if (0 < n_trhs) {
                        iVar5 = 0;
                        do {
                          trhs[iVar5].level = trhs[iVar5].level + 2;
                          iVar5 = iVar5 + 1;
                        } while (iVar5 < n_trhs);
                      }
                      memmove(tlhs + n_tlhs,trhs,n_trhs << 4);
                      n_tlhs = n_trhs + n_tlhs;
                      tlhs[n_tlhs].level = 2;
                      tlhs[n_tlhs].kind = OPERATOR;
                      tlhs[n_tlhs].token.variable = 4;
                      iVar5 = n_tlhs + 1;
                      n_tlhs = iVar5;
                      memmove(tlhs + iVar5,d2,uVar8 << 4);
                      n_tlhs = uVar8 + n_tlhs;
                      if (iVar5 < n_tlhs) {
                        iVar6 = iVar5 * 0x10;
                        do {
                          piVar7 = (int *)((int)&tlhs->level + iVar6);
                          *piVar7 = *piVar7 + 2;
                          iVar5 = iVar5 + 1;
                          iVar6 = iVar6 + 0x10;
                        } while (iVar5 < n_tlhs);
                      }
                      list_debug(3,local_40,iVar12,(token_type *)0x0,0);
                      list_debug(3,d2,uVar8,(token_type *)0x0,0);
                      simpb_side(tlhs,&n_tlhs,0,1,3);
                      list_debug(3,tlhs,n_tlhs,(token_type *)0x0,0);
                      if (cVar10 == '\0') {
                        iVar5 = var_count(tlhs,n_tlhs);
                        bVar1 = (int)(iVar12 + 1 + uVar8) <= n_tlhs;
                        iVar6 = var_count(local_40,iVar12);
                        iVar9 = var_count(d2,uVar8);
                        bVar1 = (int)(iVar5 + (uint)bVar1) <= iVar9 + iVar6;
                      }
                      else {
                        iVar5 = var_count(tlhs,n_tlhs);
                        iVar6 = var_count(local_40,iVar12);
                        bVar1 = iVar5 <= iVar6;
                      }
                      if (bVar1) {
                        if (0 < n_tlhs) {
                          iVar5 = 0;
                          do {
                            tlhs[iVar5].level = tlhs[iVar5].level + level;
                            iVar5 = iVar5 + 1;
                          } while (iVar5 < n_tlhs);
                        }
                        if (cVar10 == '\0') {
                          uVar13 = ~uVar8;
                          if (n_tokens < (int)((uVar13 - iVar12) + *np + n_tlhs)) {
                            error_huge();
                          }
                          memmove(local_6c,equation + local_44 + 1 + uVar8,
                                  ((local_58 + *np) - uVar8) * 0x10);
                          *np = *np + uVar13;
                          iVar5 = uVar13 + local_60;
                          if (local_60 <= local_44) {
                            iVar5 = local_60;
                          }
                        }
                        else {
                          if (n_tokens < (n_tlhs - iVar12) + 2 + *np) {
                            error_huge();
                          }
                          iVar11 = uVar8 + iVar11;
                          iVar5 = uVar13 + local_44;
                          if (iVar11 <= iVar5) {
                            piVar7 = &equation[iVar11].level;
                            do {
                              *piVar7 = *piVar7 + 1;
                              iVar11 = iVar11 + 1;
                              piVar7 = piVar7 + 4;
                            } while (iVar11 <= iVar5);
                          }
                          ptVar14 = equation + iVar11;
                          memmove(equation + iVar5 + 3,ptVar14,(*np - iVar11) * 0x10);
                          *np = *np + 2;
                          ptVar14->level = level + 2;
                          ptVar14->kind = OPERATOR;
                          (ptVar14->token).variable = 2;
                          ptVar14 = equation + iVar11 + 1;
                          ptVar14->level = level + 2;
                          ptVar14->kind = CONSTANT;
                          (ptVar14->token).constant = 1.0;
                          iVar5 = local_60 + 2;
                          if (local_60 <= local_44) {
                            iVar5 = local_60;
                          }
                        }
                        local_60 = iVar5;
                        memmove(equation + local_60 + n_tlhs,equation + local_60 + iVar12,
                                (*np - (local_60 + iVar12)) * 0x10);
                        *np = (*np + n_tlhs) - iVar12;
                        memmove(equation + local_60,tlhs,n_tlhs << 4);
                        if ((local_38 | uVar16) == 0) {
                          if (0 < debug_level) {
                            __fprintf_chk(gfp,1,"%s\n","Smart division successful.");
                          }
                        }
                        else if (0 < debug_level) {
                          __fprintf_chk(gfp,1,"%s\n","Polynomial division successful.");
                        }
                        list_debug(3,equation,*np,(token_type *)0x0,0);
                        return 1;
                      }
LAB_080663d2:
                      if (cVar10 != '\0') goto LAB_08065e08;
                      if (local_38 != code) break;
                      local_38 = (uint)(code == 0);
                    } while( true );
                  }
                }
                iVar12 = 4;
              }
              local_60 = local_60 + 1;
              iVar5 = *np;
              if (iVar5 <= local_60) break;
              local_40 = local_54;
              iVar6 = local_54->level;
              local_54 = local_54 + 1;
              local_74 = local_74 + 1;
            } while (level <= iVar6);
          }
        }
        local_44 = local_44 + 2;
        iVar5 = *np;
        if (iVar5 <= local_44) break;
        local_6c = local_48;
        iVar12 = local_48->level;
        local_48 = local_48 + 2;
        local_5c = local_5c + 2;
        local_58 = local_58 - 2;
      } while (level <= iVar12);
    }
  }
  local_30 = 0;
  do {
    do {
      while( true ) {
        iVar5 = loc;
        if ((*np <= iVar5) || (equation[iVar5].level < level)) {
          return local_30;
        }
        if (level < equation[iVar5].level) break;
        loc = iVar5 + 1;
      }
      uVar8 = pdiv_recurse(equation,np,iVar5,level + 1,code);
      local_30 = local_30 | uVar8;
      loc = iVar5 + 1;
    } while ((*np <= loc) || (equation[loc].level <= level));
    piVar7 = &equation[iVar5 + 3].level;
    do {
      loc = loc + 2;
      if (*np <= loc) break;
      iVar5 = *piVar7;
      piVar7 = piVar7 + 8;
    } while (level < iVar5);
  } while( true );
}



// WARNING: Unknown calling convention

int div_remainder(token_type *equation,int *np,int poly_flag,int quick_flag)

{
  int iVar1;
  int rv;
  
  if (quick_flag == 0) {
    iVar1 = pdiv_recurse(equation,np,0,1,poly_flag);
  }
  else {
    group_proc(equation,np);
    iVar1 = pdiv_recurse(equation,np,0,1,poly_flag);
    organize(equation,np);
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int mod_recurse(token_type *equation,int *np,int loc,int level)

{
  int iVar1;
  bool bVar2;
  int modified;
  int k;
  uint uVar3;
  int iVar4;
  token_type *ptVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int last_op2;
  int i4;
  int *piVar11;
  int i;
  token_type *ptVar12;
  token_type *ptVar13;
  int iVar14;
  int i5;
  token_type *ptVar15;
  int i2;
  token_type *ptVar16;
  int i1;
  uint uVar17;
  int op;
  long lVar18;
  int local_b4;
  token_type *local_a0;
  token_type *local_98;
  int *local_8c;
  uint local_88;
  int local_84;
  token_type *local_80;
  token_type *local_70;
  uint local_6c;
  uint local_64;
  token_type *local_5c;
  uint local_58;
  token_type *local_40;
  int *local_3c;
  uint local_38;
  token_type *local_34;
  token_type *local_30;
  long local_24;
  int diff_sign;
  
  local_88 = 0;
  iVar7 = loc;
LAB_080665f6:
  do {
    iVar8 = iVar7;
    iVar7 = *np;
    if ((iVar7 <= iVar8) || (equation[iVar8].level < level)) {
      if (local_88 == 0) {
        uVar17 = loc + 1;
        iVar8 = 0;
        if ((int)uVar17 < iVar7) {
          ptVar12 = equation + uVar17;
          iVar4 = ptVar12->level;
          if (level <= iVar4) {
            local_6c = ~uVar17;
            local_70 = equation + loc + 5;
            ptVar13 = ptVar12;
            local_5c = equation + loc + 3U;
            local_58 = loc + 3U;
            do {
              if ((level == iVar4) && ((ptVar13->token).variable == 5)) {
                uVar3 = local_58;
                if (((int)local_58 < iVar7) && (level < local_5c->level)) {
                  piVar9 = &local_70->level;
                  do {
                    uVar3 = uVar3 + 2;
                    if (iVar7 <= (int)uVar3) break;
                    iVar4 = *piVar9;
                    piVar9 = piVar9 + 8;
                  } while (level < iVar4);
                }
                iVar4 = uVar3 + local_6c;
                iVar7 = *np;
                if ((loc < iVar7) && (iVar6 = equation[loc].level, level <= iVar6)) {
                  ptVar13 = equation + uVar17 + 1;
                  iVar10 = 0;
                  iVar14 = level + 1;
                  local_a0 = equation + loc;
                  local_98 = equation + loc + 3U;
                  local_84 = loc;
                  local_80 = ptVar12;
                  do {
                    if ((level == iVar6) && (local_a0->kind == OPERATOR)) {
                      iVar10 = (local_a0->token).variable;
                    }
                    else if (iVar10 != 5) {
                      i2 = local_84 + 1;
                      if ((i2 < iVar7) && (iVar6 = local_80->level, level < iVar6)) {
                        lVar18 = 0;
                        ptVar16 = local_98;
                        uVar17 = i2;
                        ptVar15 = local_80;
                        local_30 = (token_type *)i2;
                        do {
                          ptVar5 = ptVar16;
                          if (iVar6 == iVar14) {
                            lVar18 = (ptVar15->token).variable;
                            local_30 = (token_type *)uVar17;
                          }
                          uVar17 = uVar17 + 2;
                          if (iVar7 <= (int)uVar17) break;
                          iVar6 = ptVar5->level;
                          ptVar16 = ptVar5 + 2;
                          ptVar15 = ptVar5;
                        } while (level < iVar6);
                        local_b4 = uVar17 - local_84;
                        if (lVar18 == 3) {
                          iVar7 = is_integer_expr(local_a0,local_b4);
                          if (iVar7 != 0) {
                            local_3c = &local_80->level;
                            local_34 = (token_type *)i2;
                            do {
                              if (((int)uVar17 <= (int)local_34) || (iVar14 == *local_3c)) {
                                if (i2 < (int)local_34) {
                                  piVar9 = &equation[i2].level;
                                  uVar3 = ~i2 + (int)local_34;
                                  local_30 = equation + i2 + 1;
                                  do {
                                    if (((*piVar9 == level + 2) &&
                                        (((storage_type *)(piVar9 + 1))->variable == 5)) &&
                                       (iVar7 = se_compare(ptVar13,iVar4,local_30,uVar3,&diff_sign),
                                       iVar7 != 0)) {
                                      memmove((token_type *)(piVar9 + -1),equation + (int)local_34,
                                              (*np - (int)local_34) * 0x10);
                                      *np = *np + ~uVar3;
                                      return 1;
                                    }
                                    i2 = i2 + 2;
                                    piVar9 = piVar9 + 8;
                                    uVar3 = uVar3 - 2;
                                    local_30 = local_30 + 2;
                                  } while (i2 < (int)local_34);
                                }
                                if ((int)uVar17 <= (int)local_34) break;
                              }
                              local_34 = (token_type *)((int)local_34 + 2);
                              local_3c = local_3c + 8;
                            } while( true );
                          }
                        }
                        else if (lVar18 < 4) {
                          if (0 < lVar18) {
                            local_64 = local_84 - 1;
                            local_8c = &local_80->level;
                            local_30 = (token_type *)i2;
                            do {
                              if (((int)uVar17 <= (int)local_30) || (iVar14 == *local_8c)) {
                                if (i2 < (int)local_30) {
                                  do {
                                    ptVar16 = equation + i2;
                                    if (ptVar16->level == level + 2) {
                                      if ((ptVar16->token).variable == 3) {
                                        i2 = (int)local_30 - 2;
                                        iVar7 = is_integer_expr(equation + local_64 + 1,
                                                                ~local_64 + (int)local_30);
                                        if ((iVar7 != 0) &&
                                           (local_38 = local_64 + 2, (int)local_38 < (int)local_30))
                                        {
                                          piVar9 = &equation[local_38].level;
                                          local_38 = ~local_38;
                                          local_34 = equation + local_64 + 3;
                                          local_40 = equation + local_64 + 6;
                                          iVar7 = local_64 + 4;
                                          local_3c = &equation[local_64 + 4].level;
                                          do {
                                            iVar6 = *piVar9;
                                            if ((iVar6 == level + 3) &&
                                               (((storage_type *)(piVar9 + 1))->variable == 5)) {
                                              iVar10 = iVar7;
                                              if ((iVar7 < (int)local_30) &&
                                                 (*local_3c != iVar6 && iVar6 <= *local_3c)) {
                                                piVar11 = &local_40->level;
                                                do {
                                                  iVar10 = iVar10 + 2;
                                                  if ((int)local_30 <= iVar10) break;
                                                  iVar1 = *piVar11;
                                                  piVar11 = piVar11 + 8;
                                                } while (iVar6 < iVar1);
                                              }
                                              iVar6 = se_compare(ptVar13,iVar4,local_34,
                                                                 local_38 + iVar10,&diff_sign);
                                              if (iVar6 != 0) {
                                                memmove((token_type *)(piVar9 + -1),
                                                        equation + iVar10,(*np - iVar10) * 0x10);
                                                *np = *np + ~(local_38 + iVar10);
                                                return 1;
                                              }
                                            }
                                            piVar9 = piVar9 + 8;
                                            local_38 = local_38 - 2;
                                            local_34 = local_34 + 2;
                                            local_3c = local_3c + 8;
                                            local_40 = local_40 + 2;
                                            bVar2 = iVar7 < (int)local_30;
                                            iVar7 = iVar7 + 2;
                                          } while (bVar2);
                                        }
                                      }
                                      else if ((ptVar16->token).variable == 5) {
                                        iVar7 = se_compare(ptVar13,iVar4,equation + i2 + 1,
                                                           ~i2 + (int)local_30,&diff_sign);
                                        if (iVar7 != 0) {
                                          memmove(ptVar16,equation + (int)local_30,
                                                  (*np - (int)local_30) * 0x10);
                                          *np = *np + ~(~i2 + (int)local_30);
                                          return 1;
                                        }
                                      }
                                    }
                                    i2 = i2 + 2;
                                  } while (i2 < (int)local_30);
                                }
                                if ((int)uVar17 <= (int)local_30) break;
                                local_64 = (uint)local_30;
                              }
                              local_30 = (token_type *)((int)local_30 + 2);
                              local_8c = local_8c + 8;
                            } while( true );
                          }
                        }
                        else if (lVar18 == 5) {
                          iVar7 = se_compare(ptVar13,iVar4,equation + (int)local_30 + 1,
                                             ~(uint)local_30 + uVar17,&diff_sign);
                          if (iVar7 != 0) {
                            memmove(equation + (int)local_30,equation + uVar17,(*np - uVar17) * 0x10
                                   );
                            *np = *np + ~(~(uint)local_30 + uVar17);
                            return 1;
                          }
                        }
                      }
                      else {
                        local_b4 = 1;
                      }
                      local_24 = 0;
                      iVar7 = poly_div(local_a0,local_b4,ptVar13,iVar4,&local_24);
                      if (iVar7 != 0) {
                        uf_pplus(tlhs,&n_tlhs);
                        iVar7 = is_integer_expr(tlhs,n_tlhs);
                        if (iVar7 != 0) {
                          if (n_tokens < (*np + n_trhs) - local_b4) {
                            error_huge();
                          }
                          if (0 < n_trhs) {
                            iVar7 = 0;
                            do {
                              trhs[iVar7].level = trhs[iVar7].level + level;
                              iVar7 = iVar7 + 1;
                            } while (iVar7 < n_trhs);
                          }
                          memmove(equation + n_trhs + local_84,equation + local_b4 + local_84,
                                  (*np - (local_b4 + local_84)) * 0x10);
                          *np = (*np + n_trhs) - local_b4;
                          memmove(local_a0,trhs,n_trhs << 4);
                          return 1;
                        }
                      }
                      iVar10 = 5;
                    }
                    local_84 = local_84 + 1;
                    iVar7 = *np;
                    if (iVar7 <= local_84) break;
                    local_a0 = local_80;
                    iVar6 = local_80->level;
                    local_80 = local_80 + 1;
                    local_98 = local_98 + 1;
                  } while (level <= iVar6);
                }
              }
              iVar7 = *np;
              if (iVar7 <= (int)local_58) {
                return 0;
              }
              iVar4 = local_5c->level;
              local_6c = local_6c - 2;
              local_70 = local_70 + 2;
              ptVar13 = local_5c;
              uVar17 = local_58;
              local_5c = local_5c + 2;
              local_58 = local_58 + 2;
            } while (level <= iVar4);
          }
        }
      }
      else {
        iVar8 = 1;
      }
      return iVar8;
    }
    if (level < equation[iVar8].level) {
      uVar17 = mod_recurse(equation,np,iVar8,level + 1);
      local_88 = local_88 | uVar17;
      iVar7 = iVar8 + 1;
      if ((iVar7 < *np) && (level < equation[iVar7].level)) {
        piVar9 = &equation[iVar8 + 3].level;
        do {
          iVar7 = iVar7 + 2;
          if (*np <= iVar7) break;
          iVar8 = *piVar9;
          piVar9 = piVar9 + 8;
        } while (level < iVar8);
      }
      goto LAB_080665f6;
    }
    iVar7 = iVar8 + 1;
  } while( true );
}



// WARNING: Unknown calling convention

int mod_simp(token_type *equation,int *np)

{
  int iVar1;
  
  iVar1 = mod_recurse(equation,np,0,1);
  return iVar1;
}



// WARNING: Unknown calling convention

int poly_gcd(token_type *larger,int llen,token_type *smaller,int slen,long v)

{
  int iVar1;
  int iVar2;
  int count;
  
  if (llen <= n_tokens) {
    iVar1 = n_tokens;
    if (30000 < n_tokens) {
      iVar1 = 30000;
    }
    if (slen <= iVar1) {
      memmove(trhs,larger,llen << 4);
      n_trhs = llen;
      memmove(tlhs,smaller,slen << 4);
      n_tlhs = slen;
      iVar1 = remove_factors();
      if ((iVar1 != 0) && (n_tlhs < 0x7531)) {
        __memmove_chk(gcd_divisor,tlhs,n_tlhs << 4,480000);
        len_d = n_tlhs;
        iVar1 = do_gcd(&v);
        if (iVar1 == 0) {
          return 0;
        }
        if (1 < iVar1) {
          if (n_tokens < len_d) {
            return 0;
          }
          memmove(tlhs,gcd_divisor,len_d << 4);
          n_tlhs = len_d;
          iVar2 = remove_factors();
          if (iVar2 == 0) {
            return 0;
          }
          if (30000 < n_tlhs) {
            return 0;
          }
          __memmove_chk(gcd_divisor,tlhs,n_tlhs << 4,480000);
          len_d = n_tlhs;
          iVar2 = poly_div(larger,llen,gcd_divisor,n_tlhs,&v);
          if (iVar2 != 2) {
            if (debug_level < 1) {
              return 0;
            }
            __fprintf_chk(gfp,1,"%s\n",
                          "Polynomial GCD found, but larger divide failed in poly_gcd().");
            return 0;
          }
        }
        if (len_d <= n_tokens) {
          memmove(trhs,gcd_divisor,len_d << 4);
          n_trhs = len_d;
          uf_simp(tlhs,&n_tlhs);
          uf_simp(trhs,&n_trhs);
          if (2 < debug_level) {
            __fprintf_chk(gfp,1,"%s\n","poly_gcd() successful.");
            return iVar1;
          }
          return iVar1;
        }
      }
    }
  }
  return 0;
}



// WARNING: Unknown calling convention

int poly2_gcd(token_type *larger,int llen,token_type *smaller,int slen,long v)

{
  token_type *ptVar1;
  int iVar2;
  int iVar3;
  int i;
  int count;
  jmp_buf save_save;
  
  if (2 < debug_level) {
    __fprintf_chk(gfp,1,"%s\n","Entering poly2_gcd():");
  }
  list_debug(3,larger,llen,(token_type *)0x0,0);
  list_debug(3,smaller,slen,(token_type *)0x0,0);
  if (llen <= n_tokens) {
    iVar2 = n_tokens;
    if (30000 < n_tokens) {
      iVar2 = 30000;
    }
    if (slen <= iVar2) {
      memmove(trhs,larger,llen << 4);
      n_trhs = llen;
      memmove(tlhs,smaller,slen << 4);
      n_tlhs = slen;
      memmove(save_save,jmp_save,0x9c);
      iVar2 = _setjmp((__jmp_buf_tag *)jmp_save);
      if (iVar2 == 0) {
        uf_simp(tlhs,&n_tlhs);
        memmove(jmp_save,save_save,0x9c);
        iVar2 = level1_plus_count(tlhs,n_tlhs);
        if ((iVar2 != 0) && (n_tlhs < 0x7531)) {
          __memmove_chk(gcd_divisor,tlhs,n_tlhs << 4,480000);
          len_d = n_tlhs;
          iVar2 = do_gcd(&v);
          ptVar1 = trhs;
          if (iVar2 == 0) {
            return 0;
          }
          if (iVar2 < 2) {
            n_trhs = 1;
            trhs->kind = one_token.kind;
            ptVar1->level = one_token.level;
            (ptVar1->token).variable = one_token.token.variable;
            *(undefined4 *)((int)&ptVar1->token + 4) = one_token.token._4_4_;
LAB_0806745b:
            if (debug_level < 3) {
              return iVar2;
            }
            __fprintf_chk(gfp,1,"%s\n","poly2_gcd() successful.");
            return iVar2;
          }
          iVar3 = level1_plus_count(gcd_divisor,len_d);
          if (iVar3 != 0) {
            iVar3 = poly_div(smaller,slen,gcd_divisor,len_d,&v);
            if (iVar3 == 2) {
              memmove(trhs,gcd_divisor,len_d << 4);
              n_trhs = len_d;
              if (n_tlhs < 0x7531) {
                __memmove_chk(gcd_divisor,tlhs,n_tlhs << 4,480000);
                len_d = n_tlhs;
                memmove(tlhs,trhs,n_trhs << 4);
                n_tlhs = n_trhs;
                iVar3 = poly_div(larger,llen,tlhs,n_trhs,&v);
                if (iVar3 == 2) {
                  memmove(trhs,gcd_divisor,len_d << 4);
                  n_trhs = len_d;
                  goto LAB_0806745b;
                }
                if (0 < debug_level) {
                  __fprintf_chk(gfp,1,"%s\n",
                                "Polynomial GCD found, but larger divide failed in poly2_gcd().");
                  return 0;
                }
              }
            }
            else if (0 < debug_level) {
              __fprintf_chk(gfp,1,"%s\n",
                            "Polynomial GCD found, but smaller divide failed in poly2_gcd().");
              return 0;
            }
          }
        }
      }
      else {
        memmove(jmp_save,save_save,0x9c);
        if (iVar2 == 0xd) {
                    // WARNING: Subroutine does not return
          __longjmp_chk(jmp_save,0xd);
        }
      }
    }
  }
  return 0;
}



// WARNING: Unknown calling convention

int polydiv_recurse(token_type *equation,int *np,int loc,int level)

{
  int iVar1;
  int iVar2;
  int len1;
  int iVar3;
  token_type *ptVar4;
  int *piVar5;
  int k;
  int last_op2;
  uint uVar6;
  int i;
  uint uVar7;
  token_type *ptVar8;
  int len2;
  uint local_50;
  int local_40;
  token_type *local_3c;
  uint local_38;
  token_type *local_34;
  token_type *local_30;
  token_type *local_28;
  uint local_24;
  int local_20;
  
  local_50 = 0;
  iVar3 = loc;
  do {
    iVar1 = iVar3;
    if ((*np <= iVar1) || (equation[iVar1].level < level)) break;
    if (level < equation[iVar1].level) {
      uVar7 = polydiv_recurse(equation,np,iVar1,level + 1);
      local_50 = local_50 | uVar7;
      iVar3 = iVar1 + 1;
      if ((iVar3 < *np) && (level < equation[iVar3].level)) {
        piVar5 = &equation[iVar1 + 3].level;
        do {
          iVar3 = iVar3 + 2;
          if (*np <= iVar3) break;
          iVar1 = *piVar5;
          piVar5 = piVar5 + 8;
        } while (level < iVar1);
      }
    }
    else {
      iVar3 = iVar1 + 1;
    }
  } while( true );
  uVar7 = loc + 1;
  do {
    iVar3 = *np;
    if ((iVar3 <= (int)uVar7) || (iVar1 = equation[uVar7].level, iVar1 < level)) {
      return local_50;
    }
    local_3c = equation + loc + 5;
    ptVar4 = equation + uVar7;
    local_38 = ~uVar7;
    local_28 = equation + loc + 3;
    local_24 = uVar7;
LAB_080675af:
    if ((level != iVar1) || ((ptVar4->token).variable != 4)) {
LAB_080678d9:
      local_24 = local_24 + 2;
      iVar3 = *np;
      if (iVar3 <= (int)local_24) {
        return local_50;
      }
      iVar1 = local_28->level;
      local_38 = local_38 - 2;
      local_3c = local_3c + 2;
      ptVar4 = local_28;
      local_28 = local_28 + 2;
      if (iVar1 < level) {
        return local_50;
      }
      goto LAB_080675af;
    }
    k = local_24 + 2;
    if ((k < iVar3) && (level < local_28->level)) {
      piVar5 = &local_3c->level;
      do {
        k = k + 2;
        if (iVar3 <= k) break;
        iVar1 = *piVar5;
        piVar5 = piVar5 + 8;
      } while (level < iVar1);
    }
    local_40 = k + local_38;
    iVar3 = *np;
    if ((iVar3 <= loc) || (iVar1 = equation[loc].level, iVar1 < level)) goto LAB_080678d9;
    last_op2 = 0;
    ptVar4 = equation + uVar7;
    local_34 = equation + loc + 3;
    local_30 = equation + loc;
    local_20 = loc;
LAB_08067637:
    ptVar8 = ptVar4;
    if ((level == iVar1) && (local_30->kind == OPERATOR)) {
      last_op2 = (local_30->token).operatr;
LAB_080678b6:
      local_20 = local_20 + 1;
      iVar3 = *np;
      if (iVar3 <= local_20) goto LAB_080678d9;
      iVar1 = ptVar8->level;
      local_34 = local_34 + 1;
      ptVar4 = ptVar8 + 1;
      local_30 = ptVar8;
      if (iVar1 < level) goto LAB_080678d9;
      goto LAB_08067637;
    }
    if (last_op2 == 4) goto LAB_080678b6;
    iVar1 = local_20 + 1;
    if ((iVar1 < iVar3) && (level < ptVar8->level)) {
      piVar5 = &local_34->level;
      do {
        iVar1 = iVar1 + 2;
        if (iVar3 <= iVar1) break;
        iVar2 = *piVar5;
        piVar5 = piVar5 + 8;
      } while (level < iVar2);
    }
    iVar1 = iVar1 - local_20;
    iVar2 = poly2_gcd(equation + local_24 + 1,local_40,local_30,iVar1,0);
    iVar3 = iVar1;
    if (iVar2 == 0) {
      iVar3 = poly2_gcd(local_30,iVar1,equation + local_24 + 1,local_40,0);
      if (iVar3 == 0) {
        last_op2 = 4;
        goto LAB_080678b6;
      }
      uVar6 = local_20 - 1;
      local_20 = local_24 + 1;
      iVar3 = local_40;
      local_40 = iVar1;
      local_24 = uVar6;
    }
    if (0 < n_tlhs) {
      iVar1 = 0;
      do {
        tlhs[iVar1].level = tlhs[iVar1].level + level;
        iVar1 = iVar1 + 1;
      } while (iVar1 < n_tlhs);
    }
    if (0 < n_trhs) {
      iVar1 = 0;
      do {
        trhs[iVar1].level = trhs[iVar1].level + level;
        iVar1 = iVar1 + 1;
      } while (iVar1 < n_trhs);
    }
    iVar1 = (n_trhs - iVar3) + *np;
    if ((n_tokens < iVar1) || (n_tokens < (iVar1 - local_40) + n_tlhs)) {
      error_huge();
    }
    memmove(equation + local_20 + n_trhs,equation + iVar3 + local_20,
            (*np - (iVar3 + local_20)) * 0x10);
    *np = (*np + n_trhs) - iVar3;
    if (local_20 < (int)local_24) {
      local_24 = (local_24 + n_trhs) - iVar3;
    }
    memmove(equation + local_20,trhs,n_trhs << 4);
    memmove(equation + local_24 + n_tlhs + 1,equation + local_24 + 1 + local_40,
            ((*np - local_40) + ~local_24) * 0x10);
    *np = (*np + n_tlhs) - local_40;
    memmove(equation + local_24 + 1,tlhs,n_tlhs << 4);
    local_50 = 1;
    if (0 < debug_level) {
      __fprintf_chk(gfp,1,"%s\n","Division simplified with polynomial GCD.");
      local_50 = 1;
    }
  } while( true );
}



// WARNING: Unknown calling convention

int poly_gcd_simp(token_type *equation,int *np)

{
  int iVar1;
  
  iVar1 = polydiv_recurse(equation,np,0,1);
  return iVar1;
}



// WARNING: Unknown calling convention

int pf_sub(token_type *equation,int *np,int loc,int len,int level,int do_repeat)

{
  int iVar1;
  token_type *p1;
  int iVar2;
  int len2;
  token_type *ptVar3;
  token_type *ptVar4;
  int lent;
  long v1;
  int i;
  int iVar5;
  int loct;
  int iVar6;
  int symbolic_modified;
  uint uVar7;
  long last_v;
  uint uVar8;
  int local_2074;
  int local_2070;
  uint local_205c;
  int local_2054;
  int local_204c;
  int local_2040;
  int local_2030;
  int local_202c;
  int local_2028;
  int local_2020;
  sort_type va [1000];
  jmp_buf save_save;
  double d;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20 [4];
  
  local_28 = 0;
  local_2c = 3;
  if (2 < debug_level) {
    __fprintf_chk(gfp,1,"%s\n","Entering pf_sub().");
  }
  iVar5 = partial_flag;
  p1 = equation + loc;
  find_greatest_power(p1,len,(long *)&local_28,&d,local_20,&local_24,&local_2c);
  if (local_28 != 0) {
    memmove(save_save,jmp_save,0x9c);
    iVar2 = _setjmp((__jmp_buf_tag *)jmp_save);
    if (iVar2 == 0) {
      local_2040 = loc;
      if (do_repeat == 0) {
LAB_0806801c:
        uVar7 = 0;
        do {
          memmove(trhs,p1,len << 4);
          n_trhs = len;
          uf_simp(trhs,&n_trhs);
          local_28 = 0xffffffff;
          uVar8 = uVar7;
          if (len < 1) {
LAB_08068485:
            uVar7 = 0;
            goto LAB_0806848a;
          }
          do {
            do {
              local_28 = 0xffffffff;
              iVar5 = 0;
              ptVar4 = p1;
              do {
                if (((ptVar4->kind == VARIABLE) &&
                    (uVar7 = (ptVar4->token).variable, (int)uVar8 < (int)uVar7)) &&
                   ((local_28 == 0xffffffff || ((int)uVar7 < (int)local_28)))) {
                  local_28 = uVar7;
                }
                uVar7 = local_28;
                iVar5 = iVar5 + 2;
                ptVar4 = ptVar4 + 2;
              } while (iVar5 < len);
              if (local_28 == 0xffffffff) goto LAB_08068485;
              iVar5 = find_greatest_power(trhs,n_trhs,(long *)&local_28,&d,local_20,&local_24,
                                          &local_2c);
              uVar8 = uVar7;
            } while (iVar5 < 2);
            memmove(tlhs,trhs,n_trhs << 4);
            n_tlhs = n_trhs;
            while (iVar5 = factor_plus(tlhs,&n_tlhs,local_28,0.0), iVar5 != 0) {
              simp_loop(tlhs,&n_tlhs);
            }
            iVar5 = find_greatest_power(tlhs,n_tlhs,(long *)&local_28,&d,local_20,&local_24,
                                        &local_2c);
          } while (iVar5 != 1);
          memmove(tlhs,tlhs + local_20[0],local_24 << 4);
          n_tlhs = local_24;
          if (2 < debug_level) {
            __fprintf_chk(gfp,1,"Trying factor: ");
            list_proc(tlhs,n_tlhs,0);
            __fprintf_chk(gfp,1,"\n");
          }
          iVar5 = poly_gcd(equation + local_2040,len,tlhs,n_tlhs,0);
        } while ((iVar5 == 0) || (iVar5 = level1_plus_count(tlhs,n_tlhs), iVar5 == 0));
        if (0 < debug_level) {
          __fprintf_chk(gfp,1,"%s\n","Symbolic polynomial factored.");
        }
        save_factors(equation,np,local_2040,len,level);
        uVar7 = 1;
LAB_0806848a:
        memmove(jmp_save,save_save,0x9c);
        local_205c = 0;
      }
      else {
        local_204c = 2;
        local_2054 = 0;
        local_2070 = 0;
        local_205c = 0;
        local_2074 = loc;
        while( true ) {
          ptVar4 = equation + local_2040;
          memmove(trhs,ptVar4,len << 4);
          n_trhs = len;
          partial_flag = 0;
          uf_simp(trhs,&n_trhs);
          partial_flag = iVar5;
          iVar2 = level1_plus_count(trhs,n_trhs);
          if (iVar2 < 2) break;
          if (n_trhs < 1) {
            local_2020 = 0;
          }
          else {
            local_202c = 0;
            local_2020 = 0;
            do {
              local_2030 = 0;
              iVar6 = -1;
              iVar2 = 0;
              ptVar3 = trhs;
              do {
                if ((ptVar3->kind == VARIABLE) &&
                   (iVar1 = (ptVar3->token).variable, local_202c < iVar1)) {
                  if ((iVar6 == -1) || (iVar1 < iVar6)) {
                    local_2030 = 1;
                    iVar6 = iVar1;
                  }
                  else if (iVar6 == iVar1) {
                    local_2030 = local_2030 + 1;
                  }
                }
                iVar2 = iVar2 + 2;
                ptVar3 = ptVar3 + 2;
              } while (iVar2 < n_trhs);
              if (iVar6 == -1) break;
              va[local_2020].v = iVar6;
              va[local_2020].count = local_2030;
              local_2020 = local_2020 + 1;
              local_202c = iVar6;
            } while (local_2020 != 1000);
          }
          list_debug(3,ptVar4,len,(token_type *)0x0,0);
          list_debug(3,trhs,n_trhs,(token_type *)0x0,0);
          if ((local_28 != 0) && (iVar2 = poly_in_v(trhs,n_trhs,local_28,1), iVar2 == 0)) {
            local_28 = 0;
          }
          if (local_2020 < 1) break;
          local_2028 = -1;
          iVar2 = 0;
          do {
            uVar7 = va[iVar2].v;
            if (4 < (uVar7 & 0x3fff)) {
              if ((local_28 == 0) && (iVar6 = poly_in_v(trhs,n_trhs,uVar7,1), iVar6 != 0)) {
                local_28 = uVar7;
              }
              if ((local_2028 < 0) || (va[iVar2].count < local_2028)) {
                local_2028 = va[iVar2].count;
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_2020);
          if ((local_2028 < 2) || (local_28 == 0)) break;
          memmove(tlhs,trhs,n_trhs << 4);
          n_tlhs = n_trhs;
          iVar2 = differentiate(tlhs,&n_tlhs,local_28);
          if (iVar2 == 0) break;
          if (2 < debug_level) {
            list_var(local_28,0);
            __fprintf_chk(gfp,1,"Differentiation successful using variable (%s).\n",var_str);
          }
          simp_loop(tlhs,&n_tlhs);
          iVar2 = 30000;
          if (n_tokens < 0x7531) {
            iVar2 = n_tokens;
          }
          if (iVar2 < n_tlhs + 2) {
LAB_0806800f:
            if (local_205c == 0) goto LAB_0806801c;
            memmove(jmp_save,save_save,0x9c);
            goto LAB_08068329;
          }
          if (0 < n_tlhs) {
            iVar2 = 0;
            do {
              tlhs[iVar2].level = tlhs[iVar2].level + 1;
              iVar2 = iVar2 + 1;
            } while (iVar2 < n_tlhs);
          }
          tlhs[n_tlhs].kind = OPERATOR;
          tlhs[n_tlhs].level = 1;
          tlhs[n_tlhs].token.variable = 3;
          n_tlhs = n_tlhs + 1;
          tlhs[n_tlhs].kind = VARIABLE;
          tlhs[n_tlhs].level = 1;
          tlhs[n_tlhs].token.variable = local_28;
          n_tlhs = n_tlhs + 1;
          uf_simp(tlhs,&n_tlhs);
          iVar2 = poly_gcd(ptVar4,len,tlhs,n_tlhs,local_28);
          if ((iVar2 == 0) || (iVar2 = level1_plus_count(tlhs,n_tlhs), iVar2 == 0))
          goto LAB_0806800f;
          save_factors(equation,np,local_2040,len,level);
          len = n_trhs;
          local_2040 = n_tlhs + 1 + local_2040;
          if (local_204c == 2) {
            if (0 < debug_level) {
              __fprintf_chk(gfp,1,"%s\n","Polynomial with repeated factor factored.");
            }
            local_2070 = n_tlhs;
            local_2074 = local_2040;
            iVar2 = local_2054;
          }
          else {
            iVar2 = n_tlhs;
            if (local_204c != 3) {
              iVar2 = local_2054;
            }
          }
          local_2054 = iVar2;
          local_204c = local_204c + 1;
          local_205c = 1;
        }
        memmove(jmp_save,save_save,0x9c);
        if (local_205c != 0) {
LAB_08068329:
          iVar5 = local_2054;
          iVar2 = local_2074;
          if (local_2054 == 0) {
            iVar5 = local_2070;
            iVar2 = loc;
          }
          iVar5 = poly_gcd(ptVar4,len,equation + iVar2,iVar5,local_28);
          if (iVar5 != 0) {
            save_factors(equation,np,local_2040,len,level);
            local_2040 = local_2040 + 1 + n_tlhs;
            len = n_trhs;
          }
          if (local_2054 == 0) {
            local_2054 = len;
            local_2074 = local_2040;
          }
          iVar5 = poly_gcd(p1,local_2070,equation + local_2074,local_2054,0);
          if (iVar5 != 0) {
            save_factors(equation,np,loc,local_2070,level);
            uVar7 = 0;
            goto LAB_08068448;
          }
        }
        uVar7 = 0;
      }
LAB_08068448:
      return local_205c | uVar7;
    }
    partial_flag = iVar5;
    memmove(jmp_save,save_save,0x9c);
    if (iVar2 == 0xd) {
                    // WARNING: Subroutine does not return
      __longjmp_chk(jmp_save,0xd);
    }
  }
  return 0;
}



// WARNING: Unknown calling convention

int pf_recurse(token_type *equation,int *np,int loc,int level,int do_repeat)

{
  token_type *ptVar1;
  token_type *ptVar2;
  uint uVar3;
  int iVar4;
  int i;
  int *piVar5;
  token_type *ptVar6;
  uint local_24;
  
  i = loc + 1;
  if (i < *np) {
    iVar4 = equation[i].level;
    if (level <= iVar4) {
      local_24 = 0;
      ptVar1 = equation + loc + 3;
      ptVar6 = equation + i;
      do {
        ptVar2 = ptVar1;
        if (iVar4 == level) {
          local_24 = (ptVar6->token).variable;
        }
        i = i + 2;
        if (*np <= i) break;
        iVar4 = ptVar2->level;
        ptVar1 = ptVar2 + 2;
        ptVar6 = ptVar2;
      } while (level <= iVar4);
      if (local_24 - 1 < 2) {
        local_24 = pf_sub(equation,np,loc,i - loc,level,do_repeat);
        goto LAB_0806855f;
      }
    }
  }
  local_24 = 0;
LAB_0806855f:
  do {
    do {
      while( true ) {
        iVar4 = loc;
        if ((*np <= iVar4) || (equation[iVar4].level < level)) {
          return local_24;
        }
        if (level < equation[iVar4].level) break;
        loc = iVar4 + 1;
      }
      uVar3 = pf_recurse(equation,np,iVar4,level + 1,do_repeat);
      local_24 = local_24 | uVar3;
      loc = iVar4 + 1;
    } while ((*np <= loc) || (equation[loc].level <= level));
    piVar5 = &equation[iVar4 + 3].level;
    do {
      loc = loc + 2;
      if (*np <= loc) break;
      iVar4 = *piVar5;
      piVar5 = piVar5 + 8;
    } while (level < iVar4);
  } while( true );
}



// WARNING: Unknown calling convention

int poly_factor(token_type *equation,int *np,int do_repeat)

{
  int iVar1;
  
  iVar1 = pf_recurse(equation,np,0,1,do_repeat);
  return iVar1;
}



// WARNING: Unknown calling convention

int limit_cmd(char *cp)

{
  int *np;
  token_type *ptVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int i;
  token_type want;
  token_type solved_v;
  int local_20 [4];
  
  local_20[0] = 0;
  iVar2 = current_not_defined();
  if (iVar2 == 0) {
    iVar2 = next_espace();
    if (n_rhs[cur_equation] == 0) {
      memmove(rhs[cur_equation],lhs[cur_equation],n_lhs[cur_equation] << 4);
      iVar3 = cur_equation;
      n_rhs[cur_equation] = n_lhs[cur_equation];
      n_lhs[iVar3] = 1;
      lhs[iVar3]->level = 1;
      lhs[cur_equation]->kind = VARIABLE;
      parse_var(&(lhs[cur_equation]->token).variable,"answer");
    }
    iVar3 = solved_equation(cur_equation);
    if (iVar3 == 0) {
      error("The current equation is not solved for a variable.");
      return 0;
    }
    ptVar1 = lhs[cur_equation];
    solved_v.kind = ptVar1->kind;
    solved_v.level = ptVar1->level;
    solved_v.token.variable = *(undefined4 *)&ptVar1->token;
    solved_v.token._4_4_ = *(undefined4 *)((int)&ptVar1->token + 4);
    pcVar4 = cp;
    if ((*cp == '\0') || (pcVar4 = parse_var2(local_20,cp), pcVar4 != (char *)0x0)) {
      iVar3 = no_vars(rhs[cur_equation],n_rhs[cur_equation],local_20);
      if (iVar3 != 0) {
        error("Current expression contains no variables.");
        return 0;
      }
      if ((local_20[0] != 0) || (iVar3 = prompt_var(local_20), iVar3 != 0)) {
        iVar3 = found_var(rhs[cur_equation],n_rhs[cur_equation],local_20[0]);
        if (iVar3 == 0) {
          error("Variable not found.");
          return 0;
        }
        if (*pcVar4 == '=') {
          pcVar4 = skip_space(pcVar4 + 1);
        }
        if (*pcVar4 == '\0') {
          list_var(local_20[0],0);
          __snprintf_chk(prompt_str,0x50,1,0x50,"as (%s) goes to: ",var_str);
          iVar3 = get_expr(tes,&n_tes);
          if (iVar3 != 0) goto LAB_08068879;
        }
        else {
          input_column = (int)pcVar4 + (input_column - (int)cp);
          pcVar4 = parse_expr(tes,&n_tes,pcVar4);
          if ((pcVar4 != (char *)0x0) && (0 < n_tes)) {
LAB_08068879:
            copy_espace(cur_equation,iVar2);
            np = n_rhs + iVar2;
            simpa_side(rhs[iVar2],np,0,0);
            simp_loop(tes,&n_tes);
            ptVar1 = tes;
            if ((n_tes == 1) &&
               ((tes->kind == CONSTANT && (1.797693134862316e+308 < (tes->token).constant)))) {
              n_tes = 1;
              tes->kind = zero_token.kind;
              ptVar1->level = zero_token.level;
              (ptVar1->token).variable = zero_token.token.variable;
              *(undefined4 *)((int)&ptVar1->token + 4) = zero_token.token._4_4_;
              ptVar1 = tlhs;
              tlhs->kind = one_token.kind;
              ptVar1->level = one_token.level;
              (ptVar1->token).variable = one_token.token.variable;
              *(undefined4 *)((int)&ptVar1->token + 4) = one_token.token._4_4_;
              tlhs[1].level = 1;
              tlhs[1].kind = OPERATOR;
              tlhs[1].token.variable = 4;
              tlhs[2].level = 1;
              tlhs[2].kind = VARIABLE;
              tlhs[2].token.variable = local_20[0];
              n_tlhs = 3;
              subst_var_with_exp(rhs[iVar2],np,tlhs,3,local_20[0]);
            }
            if (-1 < debug_level) {
              __fprintf_chk(gfp,1,"%s\n","Solving...");
            }
            want.level = 1;
            want.kind = VARIABLE;
            want.token.variable = local_20[0];
            iVar3 = solve_sub(&want,1,lhs[iVar2],n_lhs + iVar2,rhs[iVar2],np);
            if (iVar3 < 1) {
              error("Can\'t take the limit because solve failed.");
              return 0;
            }
            memmove(lhs[iVar2],tes,n_tes << 4);
            n_lhs[iVar2] = n_tes;
            symb_flag = symblify;
            simpa_side(rhs[iVar2],np,0,0);
            symb_flag = 0;
            iVar3 = exp_contains_nan(rhs[iVar2],n_rhs[iVar2]);
            if (iVar3 != 0) {
              error("Unable to take limit; result contains NaN (Not a Number).");
              return 0;
            }
            iVar3 = solve_sub(&solved_v,1,lhs[iVar2],n_lhs + iVar2,rhs[iVar2],np);
            if (iVar3 < 1) {
              error("Can\'t take the limit because solve failed.");
              return 0;
            }
            simpa_side(rhs[iVar2],np,0,0);
            iVar3 = exp_contains_nan(rhs[iVar2],n_rhs[iVar2]);
            if (iVar3 != 0) {
              error("Unable to take limit; result contains NaN (Not a Number).");
              return 0;
            }
            iVar2 = return_result(iVar2);
            return iVar2;
          }
        }
      }
    }
  }
  return 0;
}



// WARNING: Unknown calling convention

int d_recurse(token_type *equation,int *np,int loc,int level,long v)

{
  complexs a;
  storage_type sVar1;
  storage_type sVar2;
  token_type *ptVar3;
  token_type *ptVar4;
  token_type *ptVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  token_type *ptVar9;
  int i;
  int iVar10;
  uint uVar11;
  int iVar12;
  int endloc;
  uint uVar13;
  uint uVar14;
  int n;
  int j;
  int iVar15;
  int local_50;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  complexs c;
  
  ptVar3 = equation + loc;
  if (ptVar3->level < level) {
    if ((ptVar3->kind == VARIABLE) &&
       (((v == 5 && (4 < ((ptVar3->token).variable & 0x3fffU))) || ((ptVar3->token).variable == v)))
       ) {
      ptVar3->kind = CONSTANT;
      (ptVar3->token).constant = 1.0;
      return 1;
    }
    ptVar3->kind = CONSTANT;
    (ptVar3->token).constant = 0.0;
    return 1;
  }
  local_50 = loc + 1;
  iVar7 = *np;
  if (local_50 < iVar7) {
    iVar10 = equation[local_50].level;
    if (level <= iVar10) {
      local_40 = 0;
      ptVar5 = equation + loc + 3;
      ptVar9 = equation + local_50;
      uVar14 = local_50;
      do {
        uVar13 = uVar14;
        ptVar4 = ptVar5;
        if (level == iVar10) {
          if (2 < local_40) {
            error_bug(
                     "Internal error in d_recurse(): differentiating with unparenthesized operators is not allowed."
                     );
            return 0;
          }
          local_40 = (ptVar9->token).variable;
          local_50 = uVar13;
        }
        uVar14 = uVar13 + 2;
        if (iVar7 <= (int)uVar14) break;
        iVar10 = ptVar4->level;
        ptVar5 = ptVar4 + 2;
        ptVar9 = ptVar4;
      } while (level <= iVar10);
      switch(local_40) {
      case 0:
      case 1:
      case 2:
        goto switchD_08068cc2_caseD_0;
      case 3:
        if (n_tokens < (int)(iVar7 + 1 + (uVar14 - loc))) {
          error_huge();
        }
        if (loc < (int)uVar14) {
          piVar6 = &ptVar3->level;
          iVar7 = loc;
          do {
            *piVar6 = *piVar6 + 1;
            iVar7 = iVar7 + 1;
            piVar6 = piVar6 + 4;
          } while (iVar7 < (int)uVar14);
        }
        memmove(equation + uVar13 + 3,ptVar3,(*np - loc) * 0x10);
        *np = (uVar14 - loc) + 1 + *np;
        ptVar3 = equation + uVar14;
        ptVar3->level = level;
        ptVar3->kind = OPERATOR;
        (ptVar3->token).variable = 1;
        iVar7 = d_recurse(equation,np,uVar13 + 4 + (local_50 - loc),level + 2,v);
        if (iVar7 != 0) {
          iVar7 = d_recurse(equation,np,loc,level + 2,v);
          return iVar7;
        }
        break;
      case 4:
        iVar10 = uVar14 - local_50;
        if (n_tokens < (int)(iVar7 + 3 + (uVar14 - loc) + iVar10)) {
          error_huge();
        }
        if (loc < (int)uVar14) {
          piVar6 = &ptVar3->level;
          iVar7 = loc;
          do {
            *piVar6 = *piVar6 + 2;
            iVar7 = iVar7 + 1;
            piVar6 = piVar6 + 4;
          } while (iVar7 < (int)uVar14);
        }
        equation[local_50].token.variable = 3;
        j = (uVar14 - loc) + 1;
        memmove(equation + uVar13 + 3,ptVar3,(*np - loc) * 0x10);
        *np = *np + j;
        ptVar3 = equation + uVar14;
        iVar7 = level + 1;
        ptVar3->level = iVar7;
        ptVar3->kind = OPERATOR;
        (ptVar3->token).variable = 2;
        iVar15 = j + uVar14;
        ptVar3 = equation + iVar15;
        memmove(equation + iVar15 + 2 + iVar10,ptVar3,(*np - iVar15) * 0x10);
        *np = iVar10 + 2 + *np;
        ptVar3->level = level;
        ptVar3->kind = OPERATOR;
        (ptVar3->token).variable = 4;
        memmove(equation + iVar15 + 1,equation + local_50 + 1,(~local_50 + uVar14) * 0x10);
        ptVar3 = equation + iVar15 + iVar10;
        ptVar3->level = iVar7;
        ptVar3->kind = OPERATOR;
        (ptVar3->token).variable = 6;
        ptVar3 = equation + iVar15 + iVar10 + 1;
        ptVar3->level = iVar7;
        ptVar3->kind = CONSTANT;
        (ptVar3->token).constant = 2.0;
        iVar7 = d_recurse(equation,np,uVar13 + 4 + (local_50 - loc),level + 3,v);
        if (iVar7 != 0) {
          iVar7 = d_recurse(equation,np,loc,level + 3,v);
          return iVar7;
        }
        break;
      default:
        ptVar5 = ptVar3;
        iVar10 = loc;
        if (loc < (int)uVar14) {
          do {
            if (ptVar5->kind == VARIABLE) {
              if ((v == 5) && (4 < ((ptVar5->token).variable & 0x3fffU))) {
                return 0;
              }
              if ((ptVar5->token).variable == v) {
                return 0;
              }
            }
            iVar10 = iVar10 + 2;
            ptVar5 = ptVar5 + 2;
          } while (iVar10 < (int)uVar14);
        }
        memmove(equation + loc + 1,equation + uVar14,(iVar7 - uVar14) * 0x10);
        *np = (loc - uVar14) + 1 + *np;
        ptVar3->level = level;
        ptVar3->kind = CONSTANT;
        (ptVar3->token).constant = 0.0;
        return 1;
      case 6:
        if (local_50 < (int)uVar14) {
          ptVar5 = equation + local_50;
          uVar11 = local_50;
          do {
            if ((ptVar5->kind == VARIABLE) &&
               (((v == 5 && (4 < ((ptVar5->token).variable & 0x3fffU))) ||
                ((ptVar5->token).variable == v)))) {
              iVar7 = parse_complex(ptVar3,local_50 - loc,&c);
              if (iVar7 == 0) {
                return 0;
              }
              a.re._4_4_ = c.re._4_4_;
              a.re._0_4_ = c.re._0_4_;
              a.im._0_4_ = c.im._0_4_;
              a.im._4_4_ = c.im._4_4_;
              complex_log(a);
              c.re._0_4_ = local_3c;
              c.re._4_4_ = local_38;
              c.im._0_4_ = local_34;
              c.im._4_4_ = local_30;
              iVar7 = (uVar13 + 8) - local_50;
              if (n_tokens < iVar7 + *np) {
                error_huge();
              }
              ptVar5 = equation + uVar14;
              memmove(equation + iVar7 + uVar14,ptVar5,(*np - uVar14) * 0x10);
              *np = *np + iVar7;
              ptVar5->level = level;
              ptVar5->kind = OPERATOR;
              (ptVar5->token).variable = 3;
              ptVar5 = equation + uVar13 + 3;
              iVar7 = level + 1;
              ptVar5->level = iVar7;
              ptVar5->kind = CONSTANT;
              sVar1._4_4_ = c.re._4_4_;
              sVar1.variable = c.re._0_4_;
              ptVar5->token = sVar1;
              ptVar5 = equation + uVar13 + 4;
              ptVar5->level = iVar7;
              ptVar5->kind = OPERATOR;
              (ptVar5->token).variable = 1;
              ptVar5 = equation + uVar13 + 5;
              iVar10 = level + 2;
              ptVar5->level = iVar10;
              ptVar5->kind = CONSTANT;
              sVar2._4_4_ = c.im._4_4_;
              sVar2.variable = c.im._0_4_;
              ptVar5->token = sVar2;
              ptVar5 = equation + uVar13 + 6;
              ptVar5->level = iVar10;
              ptVar5->kind = OPERATOR;
              (ptVar5->token).variable = 3;
              ptVar5 = equation + uVar13 + 7;
              ptVar5->level = iVar10;
              ptVar5->kind = VARIABLE;
              (ptVar5->token).variable = 3;
              ptVar5 = equation + uVar13 + 8;
              ptVar5->level = level;
              ptVar5->kind = OPERATOR;
              (ptVar5->token).variable = 3;
              memmove(equation + uVar13 + 9,equation + local_50 + 1,(~local_50 + uVar14) * 0x10);
              if (loc < (int)uVar14) {
                piVar6 = &ptVar3->level;
                do {
                  *piVar6 = *piVar6 + 1;
                  loc = loc + 1;
                  piVar6 = piVar6 + 4;
                } while (loc < (int)uVar14);
              }
              iVar7 = d_recurse(equation,np,uVar13 + 9,iVar7,v);
              return iVar7;
            }
            uVar11 = uVar11 + 1;
            ptVar5 = ptVar5 + 1;
          } while ((int)uVar11 < (int)uVar14);
        }
        iVar7 = ~local_50 + uVar14;
        memmove(scratch,equation + local_50 + 1,iVar7 * 0x10);
        scratch[iVar7].level = level;
        scratch[iVar7].kind = OPERATOR;
        scratch[iVar7].token.variable = 3;
        iVar10 = iVar7 + 1;
        if (n_tokens < (int)((uVar14 - loc) + 2 + iVar10)) {
          error_huge();
        }
        memmove(scratch + iVar10,ptVar3,(uVar14 - loc) * 0x10);
        iVar15 = iVar7 + 2 + (local_50 - loc);
        iVar8 = iVar10;
        if (iVar10 < iVar15) {
          iVar12 = iVar10 * 0x10;
          do {
            piVar6 = (int *)((int)&scratch->level + iVar12);
            *piVar6 = *piVar6 + 1;
            iVar10 = iVar10 + 1;
            iVar12 = iVar12 + 0x10;
            iVar8 = iVar15;
          } while (iVar10 < iVar15);
        }
        iVar15 = iVar15 + iVar7;
        if (iVar8 < iVar15) {
          iVar7 = iVar8 << 4;
          do {
            piVar6 = (int *)((int)&scratch->level + iVar7);
            *piVar6 = *piVar6 + 2;
            iVar8 = iVar8 + 1;
            iVar7 = iVar7 + 0x10;
          } while (iVar8 < iVar15);
        }
        scratch[iVar15].level = level + 2;
        scratch[iVar15].kind = OPERATOR;
        scratch[iVar15].token.variable = 2;
        iVar7 = iVar15 + 1;
        scratch[iVar7].level = level + 2;
        scratch[iVar7].kind = CONSTANT;
        scratch[iVar7].token.constant = 1.0;
        iVar10 = iVar15 + 2;
        iVar7 = local_50 - loc;
        if (n_tokens < iVar7 + 1 + iVar10) {
          error_huge();
        }
        scratch[iVar10].level = level;
        scratch[iVar10].kind = OPERATOR;
        scratch[iVar10].token.variable = 3;
        iVar15 = iVar15 + 3;
        memmove(scratch + iVar15,ptVar3,iVar7 * 0x10);
        iVar7 = iVar15 + iVar7;
        if (n_tokens < (int)(((loc + *np) - uVar14) + iVar7)) {
          error_huge();
        }
        memmove(equation + loc + iVar7,equation + uVar14,(*np - uVar14) * 0x10);
        *np = *np + ((loc + iVar7) - uVar14);
        memmove(ptVar3,scratch,iVar7 * 0x10);
        iVar7 = d_recurse(equation,np,iVar15 + loc,level + 1,v);
        return iVar7;
      }
      return 0;
    }
  }
switchD_08068cc2_caseD_0:
  do {
    do {
      while( true ) {
        iVar7 = loc;
        if ((*np <= iVar7) || (equation[iVar7].level < level)) {
          return 1;
        }
        if (equation[iVar7].kind != OPERATOR) break;
        loc = iVar7 + 1;
      }
      iVar10 = d_recurse(equation,np,iVar7,level + 1,v);
      if (iVar10 == 0) {
        return 0;
      }
      loc = iVar7 + 1;
    } while ((*np <= loc) || (equation[loc].level <= level));
    piVar6 = &equation[iVar7 + 3].level;
    do {
      loc = loc + 2;
      if (*np <= loc) break;
      iVar7 = *piVar6;
      piVar6 = piVar6 + 8;
    } while (level < iVar7);
  } while( true );
}



// WARNING: Unknown calling convention

int differentiate(token_type *equation,int *np,long v)

{
  int iVar1;
  int i;
  
  organize(equation,np);
  iVar1 = *np;
  if (1 < iVar1) {
    i = 1;
    do {
      if (equation[i].token.variable - 3U < 2) {
        binary_parenthesize(equation,iVar1,i);
      }
      i = i + 2;
      iVar1 = *np;
    } while (i < iVar1);
  }
  iVar1 = d_recurse(equation,np,0,1,v);
  return iVar1;
}



// WARNING: Unknown calling convention

int taylor_cmd(char *cp)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  long l1;
  int *piVar9;
  token_type *ptVar10;
  token_type *ep;
  long n;
  int level;
  int *nps;
  int k;
  uint uVar11;
  int j;
  int i1;
  token_type *source;
  int in_GS_OFFSET;
  double d;
  int *local_1068;
  long local_1064;
  int local_104c;
  token_type *local_1048;
  char *local_1040 [3];
  int local_1034;
  int local_1030;
  int local_102c;
  char *local_1028;
  long local_1024;
  char buf [4096];
  
  local_1040[0] = cp;
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  local_1024 = 0;
  iVar4 = current_not_defined();
  if (iVar4 == 0) {
    iVar4 = strcmp_tospace(local_1040[0],"nosimplify");
    if (iVar4 == 0) {
      local_1040[0] = skip_param(local_1040[0]);
    }
    bVar3 = iVar4 != 0;
    iVar4 = next_espace();
    memmove(lhs[iVar4],lhs[cur_equation],n_lhs[cur_equation] << 4);
    n_lhs[iVar4] = n_lhs[cur_equation];
    n_rhs[iVar4] = 0;
    iVar5 = alloc_next_espace();
    n_lhs[iVar4] = 0;
    if (iVar5 < 0) {
      error("Out of free equation spaces.");
      iVar4 = 0;
      goto LAB_08069fd5;
    }
    if (n_rhs[cur_equation] == 0) {
      ptVar10 = lhs[cur_equation];
      piVar9 = n_lhs;
      local_1048 = lhs[iVar4];
      local_1068 = n_lhs;
    }
    else {
      ptVar10 = rhs[cur_equation];
      piVar9 = n_rhs;
      local_1048 = rhs[iVar4];
      local_1068 = n_rhs;
    }
    local_1068 = local_1068 + iVar4;
    piVar9 = piVar9 + cur_equation;
    if (*local_1040[0] == '\0') {
LAB_08069782:
      local_1064 = -1;
      pcVar7 = local_1040[0];
    }
    else {
      iVar6 = isvarchar((int)*local_1040[0]);
      if ((iVar6 != 0) &&
         (local_1040[0] = parse_var2(&local_1024,local_1040[0]), local_1040[0] == (char *)0x0))
      goto LAB_08069fd0;
      if (*local_1040[0] == '\0') goto LAB_08069782;
      local_1064 = decstrtol(local_1040[0],&local_1028);
      pcVar7 = skip_param(local_1040[0]);
      if ((pcVar7 != local_1028) || (local_1064 < 0)) {
        error("Positive integer required for order.");
        iVar4 = 0;
        goto LAB_08069fd5;
      }
    }
    local_1040[0] = pcVar7;
    no_vars(ptVar10,*piVar9,&local_1024);
    if ((local_1024 != 0) || (iVar6 = prompt_var(&local_1024), iVar6 != 0)) {
      iVar6 = found_var(ptVar10,*piVar9,local_1024);
      if (iVar6 == 0) {
        warning("Variable not found.");
      }
      memmove(rhs[iVar5],ptVar10,*piVar9 << 4);
      local_1030 = *piVar9;
      uf_simp(rhs[iVar5],&local_1030);
      iVar6 = differentiate(rhs[iVar5],&local_1030,local_1024);
      if (iVar6 == 0) {
        error("Differentiation failed.");
        iVar4 = 0;
        goto LAB_08069fd5;
      }
      if (*local_1040[0] == '\0') {
        list_var(local_1024,0);
        __printf_chk(1,"Taylor series expansion around %s = point.\n",var_str);
        my_strlcpy(prompt_str,"Enter point: ",0x50);
        iVar6 = get_expr(lhs[iVar5],&local_102c);
        if (iVar6 != 0) goto LAB_08069946;
      }
      else {
        input_column = (int)(local_1040[0] + (input_column - (int)cp));
        local_1040[0] = parse_expr(lhs[iVar5],&local_102c,local_1040[0]);
        if ((local_1040[0] != (char *)0x0) && (0 < local_102c)) {
LAB_08069946:
          if (local_1064 < 0) {
            my_strlcpy(prompt_str,"Enter order (number of derivatives to take): ",0x50);
            local_1028 = get_string(buf,0x1000);
            if (local_1028 == (char *)0x0) goto LAB_08069fd0;
            if (*local_1028 == '\0') {
              __printf_chk(1,"Derivatives will be taken until they reach zero...\n");
              local_1064 = 0x7ffffffe;
            }
            else {
              local_1064 = decstrtol(local_1028,local_1040);
              if ((*local_1040[0] != '\0') || (local_1064 < 0)) {
                error("Positive integer required for order.");
                iVar4 = 0;
                goto LAB_08069fd5;
              }
            }
          }
          __printf_chk(1,"Computing the Taylor series");
          if (n_rhs[cur_equation] != 0) {
            __printf_chk(1," of the RHS");
          }
          if (bVar3) {
            __printf_chk(1," and simplifying");
          }
          __printf_chk(1,"...\n");
          memmove(local_1048,ptVar10,*piVar9 << 4);
          local_1034 = *piVar9;
          local_104c = 0;
          i1 = 0;
          while( true ) {
            uVar11 = i1;
            if (i1 < local_1034) {
              do {
                ptVar10 = local_1048 + uVar11;
                if ((ptVar10->kind == VARIABLE) && ((ptVar10->token).variable == local_1024)) {
                  iVar6 = ptVar10->level;
                  if (n_tokens < local_1034 + -1 + local_102c) {
                    error_huge();
                  }
                  memmove(local_1048 + uVar11 + local_102c,local_1048 + uVar11 + 1,
                          (~uVar11 + local_1034) * 0x10);
                  local_1034 = local_102c + local_1034 + -1;
                  memmove(ptVar10,lhs[iVar5],local_102c << 4);
                  iVar8 = uVar11 + local_102c;
                  if ((int)uVar11 < iVar8) {
                    piVar9 = &ptVar10->level;
                    do {
                      *piVar9 = *piVar9 + iVar6;
                      uVar11 = uVar11 + 1;
                      piVar9 = piVar9 + 4;
                    } while ((int)uVar11 < iVar8);
                  }
                  uVar11 = iVar8 - 1;
                }
                uVar11 = uVar11 + 2;
              } while ((int)uVar11 < local_1034);
            }
            if (n_tokens < local_1034 + 7 + local_102c) {
              error_huge();
            }
            if (i1 < local_1034) {
              piVar9 = &local_1048[i1].level;
              iVar6 = i1;
              do {
                *piVar9 = *piVar9 + 1;
                iVar6 = iVar6 + 1;
                piVar9 = piVar9 + 4;
              } while (iVar6 < local_1034);
            }
            ptVar10 = local_1048 + local_1034;
            ptVar10->level = 1;
            ptVar10->kind = OPERATOR;
            (ptVar10->token).variable = 3;
            ptVar10[1].level = 3;
            ptVar10[1].kind = VARIABLE;
            ptVar10[1].token.variable = local_1024;
            ptVar10[2].level = 3;
            ptVar10[2].kind = OPERATOR;
            ptVar10[2].token.variable = 2;
            iVar6 = local_1034 + 3;
            local_1034 = iVar6;
            memmove(local_1048 + iVar6,lhs[iVar5],local_102c << 4);
            local_1034 = local_1034 + local_102c;
            if (iVar6 < local_1034) {
              piVar9 = &local_1048[iVar6].level;
              do {
                *piVar9 = *piVar9 + 3;
                iVar6 = iVar6 + 1;
                piVar9 = piVar9 + 4;
              } while (iVar6 < local_1034);
            }
            ptVar10 = local_1048 + local_1034;
            ptVar10->level = 2;
            ptVar10->kind = OPERATOR;
            (ptVar10->token).variable = 6;
            ptVar10[1].level = 2;
            ptVar10[1].kind = CONSTANT;
            ptVar10[1].token.constant = (double)local_104c;
            ptVar10[2].level = 1;
            ptVar10[2].kind = OPERATOR;
            ptVar10[2].token.variable = 4;
            if (local_104c < 2) {
              dVar2 = 1.0;
            }
            else {
              iVar6 = 2;
              dVar2 = 1.0;
              do {
                dVar2 = (double)iVar6 * dVar2;
                iVar6 = iVar6 + 1;
              } while (iVar6 <= local_104c);
            }
            ptVar10[3].level = 1;
            ptVar10[3].kind = CONSTANT;
            ptVar10[3].token.constant = dVar2;
            local_1034 = local_1034 + 4;
            if (i1 < local_1034) {
              piVar9 = &local_1048[i1].level;
              do {
                *piVar9 = *piVar9 + 1;
                i1 = i1 + 1;
                piVar9 = piVar9 + 4;
              } while (i1 < local_1034);
            }
            if (bVar3) {
              uf_simp(local_1048,&local_1034);
            }
            list_debug(1,local_1048,local_1034,(token_type *)0x0,0);
            iVar6 = exp_contains_infinity(local_1048,local_1034);
            if (iVar6 != 0) {
              error("Result invalid because it contains infinity or NaN.");
              iVar4 = 0;
              goto LAB_08069fd5;
            }
            if (local_1064 <= local_104c) break;
            if ((0 < local_104c) &&
               (iVar6 = differentiate(rhs[iVar5],&local_1030,local_1024), iVar6 == 0)) {
              error("Differentiation failed.");
              iVar4 = 0;
              goto LAB_08069fd5;
            }
            symb_flag = symblify;
            simpa_side(rhs[iVar5],&local_1030,1,1);
            iVar6 = local_1034;
            symb_flag = 0;
            if (((local_1030 == 1) && (rhs[iVar5]->kind == CONSTANT)) &&
               ((rhs[iVar5]->token).constant == 0.0)) break;
            i1 = local_1034 + 1;
            if (n_tokens < i1 + local_1030) {
              error_huge();
            }
            if (0 < iVar6) {
              iVar8 = 0;
              ptVar10 = local_1048;
              do {
                ptVar10->level = ptVar10->level + 1;
                iVar8 = iVar8 + 1;
                ptVar10 = ptVar10 + 1;
              } while (iVar8 != iVar6);
            }
            ptVar10 = local_1048 + iVar6;
            ptVar10->level = 1;
            ptVar10->kind = OPERATOR;
            (ptVar10->token).variable = 1;
            memmove(local_1048 + i1,rhs[iVar5],local_1030 << 4);
            local_1034 = i1 + local_1030;
            local_104c = local_104c + 1;
          }
          pcVar7 = "s";
          if (local_104c == 1) {
            pcVar7 = "";
          }
          __printf_chk(1,"%ld derivative%s applied.\n",local_104c,pcVar7);
          if (n_rhs[cur_equation] != 0) {
            n_lhs[iVar4] = n_lhs[cur_equation];
          }
          *local_1068 = local_1034;
          cur_equation = iVar4;
          iVar4 = return_result(iVar4);
          goto LAB_08069fd5;
        }
      }
    }
  }
LAB_08069fd0:
  iVar4 = 0;
LAB_08069fd5:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar4;
}



// WARNING: Unknown calling convention

int extrema_cmd(char *cp)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int i;
  token_type *source;
  token_type *ptVar4;
  long l1;
  long local_40;
  token_type want;
  int local_24;
  int local_20 [4];
  
  local_20[0] = 0;
  iVar1 = current_not_defined();
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = next_espace();
  if (n_rhs[cur_equation] == 0) {
    ptVar4 = lhs[cur_equation];
    local_24 = n_lhs[cur_equation];
  }
  else {
    iVar2 = solved_equation(cur_equation);
    if (iVar2 == 0) {
      error("The current equation is not solved for a variable.");
      return 0;
    }
    ptVar4 = rhs[cur_equation];
    local_24 = n_rhs[cur_equation];
  }
  if (*cp != '\0') {
    iVar2 = isvarchar((int)*cp);
    if ((iVar2 != 0) && (cp = parse_var2(local_20,cp), cp == (char *)0x0)) {
      return 0;
    }
    if (*cp != '\0') {
      local_40 = decstrtol(cp,&cp);
      if ((*cp != '\0') || (local_40 < 1)) {
        error("The order must be a positive integer.");
        return 0;
      }
      goto LAB_0806a0f1;
    }
  }
  local_40 = 1;
LAB_0806a0f1:
  iVar2 = no_vars(ptVar4,local_24,local_20);
  if (iVar2 != 0) {
    error("Current expression contains no variables.");
    return 0;
  }
  if ((local_20[0] == 0) && (iVar2 = prompt_var(local_20), iVar2 == 0)) {
    return 0;
  }
  iVar2 = found_var(ptVar4,local_24,local_20[0]);
  if (iVar2 == 0) {
    error("Variable not found; the derivative would be zero.");
    return 0;
  }
  memmove(rhs[iVar1],ptVar4,local_24 << 4);
  if (0 < local_40) {
    iVar2 = 0;
    do {
      iVar3 = differentiate(rhs[iVar1],&local_24,local_20[0]);
      if (iVar3 == 0) {
        error("Differentiation failed.");
        return 0;
      }
      simpa_side(rhs[iVar1],&local_24,1,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_40);
  }
  iVar2 = found_var(rhs[iVar1],local_24,local_20[0]);
  if (iVar2 != 0) {
    n_rhs[iVar1] = local_24;
    n_lhs[iVar1] = 1;
    ptVar4 = lhs[iVar1];
    ptVar4->kind = zero_token.kind;
    ptVar4->level = zero_token.level;
    (ptVar4->token).variable = zero_token.token.variable;
    *(undefined4 *)((int)&ptVar4->token + 4) = zero_token.token._4_4_;
    want.level = 1;
    want.kind = VARIABLE;
    want.token.variable = local_20[0];
    cur_equation = iVar1;
    iVar2 = solve_sub(&want,1,lhs[iVar1],n_lhs + iVar1,rhs[iVar1],n_rhs + iVar1);
    if (0 < iVar2) {
      simpa_side(rhs[iVar1],n_rhs + iVar1,0,0);
      iVar1 = return_result(cur_equation);
      return iVar1;
    }
    error("Solve failed.");
    return 0;
  }
  error("There are no solutions.");
  return 0;
}



// WARNING: Unknown calling convention

int derivative_cmd(char *cp)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int len;
  int *nps;
  int *piVar5;
  long l1;
  long order;
  token_type *dest;
  token_type *equation;
  token_type *source;
  token_type *source_00;
  bool bVar6;
  char *pcVar7;
  int *local_40;
  char *local_30;
  int local_24;
  int local_20 [4];
  
  local_20[0] = 0;
  iVar1 = current_not_defined();
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = solved_equation(cur_equation);
  iVar2 = strcmp_tospace(cp,"nosimplify");
  bVar6 = iVar2 == 0;
  if (bVar6) {
    cp = skip_param(cp);
  }
  iVar2 = next_espace();
  if (n_rhs[cur_equation] == 0) {
    source_00 = lhs[cur_equation];
    piVar5 = n_lhs + cur_equation;
    equation = lhs[iVar2];
    local_40 = n_lhs;
  }
  else {
    if (iVar1 == 0) {
      warning("Not a solved equation.  Only the RHS will be differentiated.");
    }
    source_00 = rhs[cur_equation];
    piVar5 = n_rhs + cur_equation;
    equation = rhs[iVar2];
    local_40 = n_rhs;
  }
  local_40 = local_40 + iVar2;
  if (*cp != '\0') {
    iVar3 = is_all(cp);
    if (iVar3 == 0) {
      iVar3 = isvarchar((int)*cp);
      if ((iVar3 != 0) && (cp = parse_var2(local_20,cp), cp == (char *)0x0)) {
        return 0;
      }
    }
    else {
      cp = skip_param(cp);
      local_20[0] = 5;
    }
    if (*cp != '\0') {
      local_30 = (char *)decstrtol(cp,&cp);
      if ((*cp != '\0') || ((int)local_30 < 1)) {
        error("The order must be a positive integer.");
        return 0;
      }
      goto LAB_0806a48d;
    }
  }
  local_30 = (char *)0x1;
LAB_0806a48d:
  iVar3 = no_vars(source_00,*piVar5,local_20);
  if (iVar3 != 0) {
    error("Current expression contains no variables; the derivative would be zero.");
    return 0;
  }
  if ((local_20[0] == 0) && (iVar3 = prompt_var(local_20), iVar3 == 0)) {
    return 0;
  }
  if ((local_20[0] != 5) && (iVar3 = found_var(source_00,*piVar5,local_20[0]), iVar3 == 0)) {
    error("Variable not found; the derivative would be zero.");
    return 0;
  }
  if (-1 < debug_level) {
    list_var(local_20[0],0);
    if (n_rhs[cur_equation] == 0) {
      pcVar7 = var_str;
      __printf_chk(1,"Differentiating with respect to (%s)",var_str);
    }
    else {
      pcVar7 = var_str;
      __printf_chk(1,"Differentiating the RHS with respect to (%s)",var_str);
    }
    if (local_30 != (char *)0x1) {
      pcVar7 = local_30;
      __printf_chk(1," %ld times",local_30);
    }
    if (bVar6) {
      __printf_chk(1,"...\n",pcVar7);
    }
    else {
      __printf_chk(1," and simplifying...\n",pcVar7);
    }
  }
  memmove(equation,source_00,*piVar5 << 4);
  local_24 = *piVar5;
  if (0 < (int)local_30) {
    iVar3 = 0;
    do {
      iVar4 = differentiate(equation,&local_24,local_20[0]);
      if (iVar4 == 0) {
        error("Differentiation failed.");
        return 0;
      }
      if (bVar6) {
        elim_loop(equation,&local_24);
      }
      else {
        simpa_side(equation,&local_24,1,0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)local_30);
  }
  *local_40 = local_24;
  if (n_rhs[cur_equation] != 0) {
    memmove(lhs[iVar2],lhs[cur_equation],n_lhs[cur_equation] << 4);
    n_lhs[iVar2] = n_lhs[cur_equation];
    if ((iVar1 != 0) && (iVar1 = isvarchar(0x27), iVar1 != 0)) {
      iVar1 = list_var((lhs[iVar2]->token).variable,0);
      if ((0 < (int)local_30) && (iVar1 < 99)) {
        pcVar7 = var_str + iVar1;
        iVar3 = 0;
        do {
          *pcVar7 = '\'';
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 1;
          pcVar7 = pcVar7 + 1;
          if ((int)local_30 <= iVar3) break;
        } while (iVar1 < 99);
      }
      var_str[iVar1] = '\0';
      parse_var(&(lhs[iVar2]->token).variable,var_str);
    }
  }
  cur_equation = iVar2;
  iVar1 = return_result(iVar2);
  return iVar1;
}



// WARNING: Unknown calling convention

int nintegrate_cmd(char *cp)

{
  bool bVar1;
  bool bVar2;
  char *cp_00;
  token_type *ptVar3;
  int iVar4;
  int en;
  int iVar5;
  token_type *ptVar6;
  int j;
  token_type *ptVar7;
  int *piVar8;
  int len;
  token_type *ptVar9;
  token_type *ep;
  uint uVar10;
  int k;
  int iVar11;
  uint uVar12;
  int i2;
  int level;
  int iVar13;
  token_type *dest;
  bool bVar14;
  uint *local_68;
  token_type *local_60;
  uint local_5c;
  token_type *local_58;
  int *local_4c;
  uint local_44;
  uint local_38;
  uint local_24;
  int local_20 [4];
  
  local_20[0] = 0;
  iVar4 = current_not_defined();
  if (iVar4 != 0) {
    return 0;
  }
  iVar4 = solved_equation(cur_equation);
  en = next_espace();
  cp_00 = cp;
  if (n_rhs[cur_equation] == 0) {
    local_58 = lhs[cur_equation];
    local_4c = n_lhs;
    local_60 = lhs[en];
    piVar8 = n_lhs;
  }
  else {
    local_58 = rhs[cur_equation];
    local_4c = n_rhs;
    local_60 = rhs[en];
    piVar8 = n_rhs;
  }
  local_4c = local_4c + cur_equation;
  local_68 = (uint *)(piVar8 + en);
  iVar5 = strncasecmp(cp,"trap",4);
  bVar14 = iVar5 == 0;
  if (bVar14) {
    cp = skip_param(cp_00);
  }
  if (*cp == '\0') {
    iVar5 = prompt_var(local_20);
    if (iVar5 == 0) {
      return 0;
    }
  }
  else {
    cp = parse_var2(local_20,cp);
    if (cp == (char *)0x0) {
      return 0;
    }
    if (*cp != '\0') {
      local_5c = decstrtol(cp,&cp);
      if (((*cp != '\0') || ((int)local_5c < 1)) || ((local_5c & 1) != 0)) {
        error("Number of partitions must be a positive, even integer.");
        return 0;
      }
      goto LAB_0806a898;
    }
  }
  local_5c = 1000;
LAB_0806a898:
  iVar5 = *local_4c;
  if (1 < iVar5) {
    iVar13 = 2;
    bVar1 = false;
    ptVar7 = local_58;
    do {
      if (((ptVar7[1].token.variable == 4) && (iVar13 < iVar5)) &&
         (ptVar7[1].level <= ptVar7[2].level)) {
        ptVar3 = ptVar7 + 3;
        ptVar9 = ptVar7 + 2;
        iVar11 = iVar13;
        bVar2 = bVar1;
        do {
          ptVar6 = ptVar3;
          bVar1 = bVar2;
          if ((ptVar9->kind == VARIABLE) && (bVar1 = true, (ptVar9->token).variable != local_20[0]))
          {
            bVar1 = bVar2;
          }
          iVar11 = iVar11 + 1;
        } while ((iVar11 < iVar5) &&
                (ptVar3 = ptVar6 + 1, ptVar9 = ptVar6, bVar2 = bVar1,
                ptVar7[1].level <= ptVar6->level));
      }
      iVar13 = iVar13 + 2;
      ptVar7 = ptVar7 + 2;
    } while (iVar13 != (iVar5 - 2U & 0xfffffffe) + 4);
    if (bVar1) {
      warning("Singularity detected, result of numerical integration might be wrong.");
    }
  }
  my_strlcpy(prompt_str,"Enter lower bound: ",0x50);
  iVar5 = get_expr(tlhs,&n_tlhs);
  if (iVar5 != 0) {
    subst_constants(tlhs,&n_tlhs);
    iVar5 = exp_contains_infinity(tlhs,n_tlhs);
    if (iVar5 != 0) {
      error("Error: Bound contains infinity.");
      return 0;
    }
    my_strlcpy(prompt_str,"Enter upper bound: ",0x50);
    iVar5 = get_expr(trhs,&n_trhs);
    if (iVar5 != 0) {
      subst_constants(trhs,&n_trhs);
      iVar5 = exp_contains_infinity(trhs,n_trhs);
      if (iVar5 != 0) {
        error("Error: Bound contains infinity.");
        return 0;
      }
      if (n_tokens < n_tlhs + n_trhs + 3) {
        error_huge();
      }
      if (n_rhs[cur_equation] == 0) {
        __printf_chk(1,"Approximating the definite integral\n");
      }
      else {
        __printf_chk(1,"Approximating the definite integral of the RHS\n");
      }
      if (bVar14) {
        __printf_chk(1,"using the trapezoid method (%d partitions)...\n",local_5c);
      }
      else {
        __printf_chk(1,"using Simpson\'s rule (%d partitions)...\n",local_5c);
      }
      subst_constants(local_58,local_4c);
      simp_loop(local_58,local_4c);
      if (0 < n_trhs) {
        j = 0;
        do {
          trhs[j].level = trhs[j].level + 2;
          j = j + 1;
        } while (j < n_trhs);
      }
      trhs[n_trhs].level = 2;
      trhs[n_trhs].kind = OPERATOR;
      trhs[n_trhs].token.variable = 2;
      iVar5 = n_trhs + 1;
      n_trhs = iVar5;
      memmove(trhs + iVar5,tlhs,n_tlhs << 4);
      n_trhs = n_trhs + n_tlhs;
      if (iVar5 < n_trhs) {
        iVar13 = iVar5 * 0x10;
        do {
          piVar8 = (int *)((int)&trhs->level + iVar13);
          *piVar8 = *piVar8 + 2;
          iVar5 = iVar5 + 1;
          iVar13 = iVar13 + 0x10;
        } while (iVar5 < n_trhs);
      }
      trhs[n_trhs].level = 1;
      trhs[n_trhs].kind = OPERATOR;
      trhs[n_trhs].token.variable = 4;
      n_trhs = n_trhs + 1;
      trhs[n_trhs].level = 1;
      trhs[n_trhs].kind = CONSTANT;
      trhs[n_trhs].token.constant = (double)local_5c;
      n_trhs = n_trhs + 1;
      simp_loop(trhs,&n_trhs);
      local_60->kind = zero_token.kind;
      local_60->level = zero_token.level;
      (local_60->token).variable = zero_token.token.variable;
      *(undefined4 *)((int)&local_60->token + 4) = zero_token.token._4_4_;
      local_24 = 1;
      if (-1 < (int)local_5c) {
        local_44 = 0;
        local_38 = 0;
        do {
          if (n_tokens < (int)(local_24 + 1 + *local_4c)) {
            error_huge();
          }
          if (0 < (int)local_24) {
            iVar5 = 0;
            ptVar7 = local_60;
            do {
              ptVar7->level = ptVar7->level + 1;
              iVar5 = iVar5 + 1;
              ptVar7 = ptVar7 + 1;
            } while (iVar5 < (int)local_24);
          }
          ptVar7 = local_60 + local_24;
          ptVar7->level = 1;
          ptVar7->kind = OPERATOR;
          (ptVar7->token).variable = 1;
          uVar12 = local_24 + 1;
          local_24 = uVar12;
          memmove(local_60 + uVar12,local_58,*local_4c << 4);
          local_24 = local_24 + *local_4c;
          if ((int)uVar12 < (int)local_24) {
            piVar8 = &local_60[uVar12].level;
            uVar10 = uVar12;
            do {
              *piVar8 = *piVar8 + 2;
              uVar10 = uVar10 + 1;
              piVar8 = piVar8 + 4;
            } while ((int)uVar10 < (int)local_24);
            if ((int)uVar12 < (int)local_24) {
              do {
                ptVar7 = local_60 + uVar12;
                if ((ptVar7->kind == VARIABLE) && ((ptVar7->token).variable == local_20[0])) {
                  iVar5 = ptVar7->level;
                  iVar13 = n_tlhs + n_trhs;
                  iVar11 = iVar13 + 2;
                  if (n_tokens < (int)(local_24 + iVar11)) {
                    error_huge();
                  }
                  memmove(local_60 + iVar13 + 3 + uVar12,local_60 + uVar12 + 1,
                          (~uVar12 + local_24) * 0x10);
                  local_24 = local_24 + iVar11;
                  memmove(ptVar7,tlhs,n_tlhs << 4);
                  iVar13 = uVar12 + n_tlhs;
                  iVar11 = iVar5 + 1;
                  if ((int)uVar12 < iVar13) {
                    piVar8 = &ptVar7->level;
                    do {
                      *piVar8 = *piVar8 + iVar11;
                      uVar12 = uVar12 + 1;
                      piVar8 = piVar8 + 4;
                    } while ((int)uVar12 < iVar13);
                  }
                  ptVar7 = local_60 + iVar13;
                  ptVar7->level = iVar11;
                  ptVar7->kind = OPERATOR;
                  (ptVar7->token).variable = 1;
                  iVar5 = iVar5 + 2;
                  ptVar7[1].level = iVar5;
                  ptVar7[1].kind = CONSTANT;
                  ptVar7[1].token.constant = (double)local_38;
                  ptVar7[2].level = iVar5;
                  ptVar7[2].kind = OPERATOR;
                  ptVar7[2].token.variable = 3;
                  iVar13 = iVar13 + 3;
                  memmove(local_60 + iVar13,trhs,n_trhs << 4);
                  iVar11 = iVar13 + n_trhs;
                  if (iVar13 < iVar11) {
                    piVar8 = &local_60[iVar13].level;
                    do {
                      *piVar8 = *piVar8 + iVar5;
                      iVar13 = iVar13 + 1;
                      piVar8 = piVar8 + 4;
                    } while (iVar13 < iVar11);
                  }
                  uVar12 = iVar11 - 1;
                }
                uVar12 = uVar12 + 2;
              } while ((int)uVar12 < (int)local_24);
            }
          }
          if ((0 < (int)local_38) && ((int)local_38 < (int)local_5c)) {
            if (n_tokens < (int)(local_24 + 2)) {
              error_huge();
            }
            ptVar7 = local_60 + local_24;
            ptVar7->level = 2;
            ptVar7->kind = OPERATOR;
            (ptVar7->token).variable = 3;
            ptVar7[1].level = 2;
            ptVar7[1].kind = CONSTANT;
            if (bVar14) {
              ptVar7[1].token.constant = 2.0;
            }
            else if ((local_38 & 1) == 0) {
              ptVar7[1].token.constant = 2.0;
            }
            else {
              ptVar7[1].token.constant = 4.0;
            }
            local_24 = local_24 + 2;
          }
          approximate_roots = 1;
          elim_loop(local_60,(int *)&local_24);
          ufactor(local_60,(int *)&local_24);
          simp_divide(local_60,(int *)&local_24);
          approximate_roots = 0;
          iVar5 = exp_contains_infinity(local_60,local_24);
          if (iVar5 != 0) {
            error("Integration failed because result contains infinity or NaN (a singularity).");
            return 0;
          }
          if (local_38 != 0) {
            if (local_38 == 1) {
              local_44 = 4;
              if (3 < (int)local_24) {
                local_44 = local_24;
              }
            }
            else {
              uVar12 = local_24;
              if ((int)local_24 < 0) {
                uVar12 = local_24 + 7;
              }
              if ((int)local_44 <= (int)uVar12 >> 3) {
                error("Integration failed.");
                return 0;
              }
            }
          }
          local_38 = local_38 + 1;
        } while ((int)local_38 <= (int)local_5c);
      }
      if (n_tokens < (int)(local_24 + n_trhs + 3)) {
        error_huge();
      }
      if (0 < (int)local_24) {
        iVar5 = 0;
        ptVar7 = local_60;
        do {
          ptVar7->level = ptVar7->level + 1;
          iVar5 = iVar5 + 1;
          ptVar7 = ptVar7 + 1;
        } while (iVar5 < (int)local_24);
      }
      ptVar7 = local_60 + local_24;
      ptVar7->level = 1;
      ptVar7->kind = OPERATOR;
      (ptVar7->token).variable = 4;
      ptVar7[1].level = 1;
      ptVar7[1].kind = CONSTANT;
      if (bVar14) {
        ptVar7[1].token.constant = 2.0;
      }
      else {
        ptVar7[1].token.constant = 3.0;
      }
      ptVar7[2].level = 1;
      ptVar7[2].kind = OPERATOR;
      ptVar7[2].token.variable = 3;
      uVar12 = local_24 + 3;
      local_24 = uVar12;
      memmove(local_60 + uVar12,trhs,n_trhs << 4);
      local_24 = n_trhs + local_24;
      if ((int)uVar12 < (int)local_24) {
        piVar8 = &local_60[uVar12].level;
        do {
          *piVar8 = *piVar8 + 1;
          uVar12 = uVar12 + 1;
          piVar8 = piVar8 + 4;
        } while ((int)uVar12 < (int)local_24);
      }
      approximate_roots = 1;
      elim_loop(local_60,(int *)&local_24);
      ufactor(local_60,(int *)&local_24);
      simp_divide(local_60,(int *)&local_24);
      approximate_roots = 0;
      __printf_chk(1,"Numerical integration successful:\n");
      *local_68 = local_24;
      if (n_rhs[cur_equation] != 0) {
        memmove(lhs[en],lhs[cur_equation],n_lhs[cur_equation] << 4);
        n_lhs[en] = n_lhs[cur_equation];
        if ((iVar4 != 0) && (iVar4 = isvarchar(0x27), iVar4 != 0)) {
          iVar4 = list_var((lhs[en]->token).variable,0);
          if ((0 < iVar4) && ((&DAT_080797ff)[iVar4] == '\'')) {
            (&DAT_080797ff)[iVar4] = 0;
          }
          parse_var(&(lhs[en]->token).variable,var_str);
        }
      }
      cur_equation = en;
      iVar4 = return_result(en);
      return iVar4;
    }
  }
  return 0;
}



// WARNING: Unknown calling convention

void make_powers(token_type *equation,int *np,long v)

{
  int iVar1;
  int i;
  int *piVar2;
  int iVar3;
  int iVar4;
  token_type *ptVar5;
  int level;
  int iVar6;
  
  iVar4 = 0;
  do {
    do {
      while( true ) {
        iVar3 = iVar4;
        iVar1 = *np;
        if (iVar1 <= iVar3) {
          return;
        }
        ptVar5 = equation + iVar3;
        iVar6 = ptVar5->level;
        if ((ptVar5->kind == OPERATOR) && ((ptVar5->token).variable == 6)) break;
        if (((ptVar5->kind == VARIABLE) && ((ptVar5->token).variable == v)) &&
           ((iVar4 = iVar3 + 1, iVar1 <= iVar4 || (equation[iVar3 + 1].token.variable != 6)))) {
          if (n_tokens < iVar1 + 2) {
            error_huge();
          }
          iVar6 = iVar6 + 1;
          ptVar5->level = iVar6;
          ptVar5 = equation + iVar4;
          memmove(equation + iVar3 + 3,ptVar5,(*np - iVar4) * 0x10);
          *np = *np + 2;
          ptVar5->level = iVar6;
          ptVar5->kind = OPERATOR;
          (ptVar5->token).variable = 6;
          iVar3 = iVar3 + 2;
          ptVar5 = equation + iVar3;
          ptVar5->level = iVar6;
          ptVar5->kind = CONSTANT;
          (ptVar5->token).constant = 1.0;
        }
        iVar4 = iVar3 + 1;
      }
      iVar4 = iVar3 + 2;
    } while ((iVar1 <= iVar4) || (equation[iVar4].level < iVar6));
    piVar2 = &equation[iVar3 + 4].level;
    do {
      iVar4 = iVar4 + 2;
      if (iVar1 <= iVar4) break;
      iVar3 = *piVar2;
      piVar2 = piVar2 + 8;
    } while (iVar6 <= iVar3);
  } while( true );
}



// WARNING: Unknown calling convention

int int_dispatch(token_type *equation,int *np,long v,_func_int_varargs *func)

{
  int iVar1;
  int i;
  int *piVar2;
  int iVar3;
  int j;
  
  make_powers(equation,np,v);
  iVar3 = 0;
  iVar1 = 1;
  if (1 < *np) {
    do {
      if ((equation[iVar1].level == 1) && (equation[iVar1].token.variable - 1U < 2)) {
        iVar1 = (*func)(equation,np,iVar3,iVar1,v);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = iVar3 + 1;
        if (*np <= iVar1) {
          return 1;
        }
        if (equation[iVar1].level != 1) {
          piVar2 = &equation[iVar3 + 3].level;
          do {
            iVar1 = iVar1 + 2;
            if (*np <= iVar1) {
              return 1;
            }
            iVar3 = *piVar2;
            piVar2 = piVar2 + 8;
          } while (iVar3 != 1);
        }
        iVar3 = iVar1 + 1;
      }
      iVar1 = iVar1 + 2;
    } while (*np != iVar1 && iVar1 <= *np);
  }
  iVar1 = (*func)(equation,np,iVar3,iVar1,v);
  return iVar1;
}



// WARNING: Unknown calling convention

int laplace_cmd(char *cp)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int n1;
  int i;
  int *piVar5;
  int *nps;
  int *local_3c;
  token_type *local_38;
  token_type *local_34;
  int local_24;
  long local_20 [4];
  
  local_20[0] = 0;
  iVar1 = current_not_defined();
  if (iVar1 == 0) {
    iVar1 = next_espace();
    if (n_rhs[cur_equation] == 0) {
      local_34 = lhs[cur_equation];
      piVar5 = n_lhs;
      local_38 = lhs[iVar1];
      local_3c = n_lhs;
    }
    else {
      local_34 = rhs[cur_equation];
      piVar5 = n_rhs;
      local_38 = rhs[iVar1];
      local_3c = n_rhs;
    }
    local_3c = local_3c + iVar1;
    piVar5 = piVar5 + cur_equation;
    iVar2 = strcmp_tospace(cp,"inverse");
    if (iVar2 == 0) {
      cp = skip_param(cp);
    }
    if (*cp == '\0') {
      pcVar3 = (char *)prompt_var(local_20);
    }
    else {
      cp = parse_var2(local_20,cp);
      pcVar3 = cp;
    }
    if ((pcVar3 != (char *)0x0) && (iVar4 = extra_characters(cp), iVar4 == 0)) {
      partial_flag = 0;
      uf_simp(local_34,piVar5);
      partial_flag = 1;
      factorv(local_34,piVar5,local_20[0]);
      memmove(local_38,local_34,*piVar5 << 4);
      local_24 = *piVar5;
      if (iVar2 == 0) {
        iVar2 = poly_in_v(local_38,local_24,local_20[0],1);
        if ((iVar2 == 0) ||
           (iVar2 = int_dispatch(local_38,&local_24,local_20[0],inv_laplace_sub), iVar2 == 0)) {
          error("Inverse Laplace failed.");
          return 0;
        }
      }
      else {
        iVar2 = poly_in_v(local_38,local_24,local_20[0],0);
        if ((iVar2 == 0) ||
           (iVar2 = int_dispatch(local_38,&local_24,local_20[0],laplace_sub), iVar2 == 0)) {
          error("Laplace failed, not a polynomial.");
          return 0;
        }
      }
      simp_loop(local_38,&local_24);
      if (n_rhs[cur_equation] != 0) {
        memmove(lhs[iVar1],lhs[cur_equation],n_lhs[cur_equation] << 4);
        n_lhs[iVar1] = n_lhs[cur_equation];
      }
      *local_3c = local_24;
      cur_equation = iVar1;
      iVar1 = return_result(iVar1);
      return iVar1;
    }
  }
  return 0;
}



// WARNING: Unknown calling convention

int laplace_sub(token_type *equation,int *np,int loc,int eloc,long v)

{
  int iVar1;
  int iVar2;
  token_type *ptVar3;
  token_type *ptVar4;
  int iVar5;
  int *piVar6;
  token_type *ptVar7;
  int iVar8;
  int j;
  int iVar9;
  int k;
  int i;
  int level;
  int iVar10;
  int iVar11;
  
  ptVar3 = equation + loc;
  iVar1 = min_level(ptVar3,eloc - loc);
  iVar2 = iVar1 + 1;
  if (loc < eloc) {
    piVar6 = &ptVar3->level;
    j = loc;
    do {
      *piVar6 = *piVar6 + 2;
      j = j + 1;
      piVar6 = piVar6 + 4;
      i = loc;
    } while (j < eloc);
    do {
      if ((ptVar3->kind == VARIABLE) && ((ptVar3->token).variable == v)) {
        iVar8 = i + 1;
        if ((eloc <= iVar8) || (equation[iVar8].token.variable != 6)) {
          return 0;
        }
        iVar8 = equation[iVar8].level;
        iVar9 = i + 2;
        iVar10 = iVar9;
        if (eloc <= iVar9) goto LAB_0806b787;
        iVar5 = equation[iVar9].level;
        if (iVar5 < iVar8) goto LAB_0806b787;
        ptVar3 = equation + i + 3;
        ptVar7 = equation + iVar9;
        goto LAB_0806b761;
      }
      i = i + 2;
      ptVar3 = ptVar3 + 2;
    } while (i < eloc);
  }
  if (n_tokens < *np + 2) {
    error_huge();
  }
  ptVar3 = equation + eloc;
  memmove(equation + eloc + 2,ptVar3,(*np - eloc) * 0x10);
  *np = *np + 2;
  ptVar3->level = iVar2;
  ptVar3->kind = OPERATOR;
  (ptVar3->token).variable = 4;
  ptVar3 = equation + eloc + 1;
  ptVar3->level = iVar2;
  ptVar3->kind = VARIABLE;
  (ptVar3->token).variable = v;
  return 1;
  while( true ) {
    iVar5 = ptVar4->level;
    ptVar3 = ptVar4 + 1;
    ptVar7 = ptVar4;
    if (iVar5 < iVar8) break;
LAB_0806b761:
    ptVar4 = ptVar3;
    ptVar7->level = iVar5 + 1;
    iVar10 = iVar10 + 1;
    if (eloc <= iVar10) break;
  }
LAB_0806b787:
  iVar5 = iVar10 - iVar9;
  if (n_tokens < iVar5 + 7 + *np) {
    error_huge();
  }
  ptVar3 = equation + iVar10;
  memmove(equation + iVar10 + 4,ptVar3,(*np - iVar10) * 0x10);
  *np = *np + 4;
  iVar8 = iVar8 + 1;
  ptVar3->level = iVar8;
  ptVar3->kind = OPERATOR;
  (ptVar3->token).variable = 1;
  ptVar3 = equation + iVar10 + 1;
  ptVar3->level = iVar8;
  ptVar3->kind = CONSTANT;
  (ptVar3->token).constant = 1.0;
  iVar11 = iVar10 + 2;
  if (iVar9 < iVar11) {
    piVar6 = &equation[i + 2].level;
    k = iVar9;
    do {
      *piVar6 = *piVar6 + 1;
      k = k + 1;
      piVar6 = piVar6 + 4;
    } while (k < iVar11);
  }
  ptVar3 = equation + iVar11;
  ptVar3->level = iVar8;
  ptVar3->kind = OPERATOR;
  (ptVar3->token).variable = 3;
  ptVar3 = equation + iVar10 + 3;
  ptVar3->level = iVar8;
  ptVar3->kind = CONSTANT;
  (ptVar3->token).constant = -1.0;
  ptVar3 = equation + eloc + 4;
  memmove(equation + eloc + 7 + iVar5,ptVar3,(*np - (eloc + 4)) * 0x10);
  *np = iVar5 + 3 + *np;
  ptVar3->level = iVar2;
  ptVar3->kind = OPERATOR;
  (ptVar3->token).variable = 3;
  memmove(equation + eloc + 5,equation + iVar9,iVar5 * 0x10);
  iVar5 = eloc + 5 + iVar5;
  ptVar3 = equation + iVar5;
  ptVar3->level = iVar1 + 2;
  ptVar3->kind = OPERATOR;
  (ptVar3->token).variable = 7;
  ptVar3 = equation + iVar5 + 1;
  ptVar3->level = iVar1 + 2;
  ptVar3->kind = CONSTANT;
  (ptVar3->token).constant = 1.0;
  return 1;
}



// WARNING: Unknown calling convention

int inv_laplace_sub(token_type *equation,int *np,int loc,int eloc,long v)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  token_type *ptVar4;
  int iVar5;
  int iVar6;
  int j;
  int i;
  token_type *ptVar7;
  int k;
  int iVar8;
  int iVar9;
  int level;
  
  ptVar4 = equation + loc;
  iVar2 = min_level(ptVar4,eloc - loc);
  if (loc < eloc) {
    piVar3 = &ptVar4->level;
    j = loc;
    do {
      *piVar3 = *piVar3 + 2;
      j = j + 1;
      piVar3 = piVar3 + 4;
      i = loc;
    } while (j < eloc);
    do {
      if ((ptVar4->kind == VARIABLE) && ((ptVar4->token).variable == v)) {
        iVar8 = i + 1;
        if (eloc <= iVar8) {
          return 0;
        }
        if (equation[iVar8].token.variable != 6) {
          return 0;
        }
        if (i + -1 <= loc) {
          return 0;
        }
        if (equation[i + -1].token.variable != 4) {
          return 0;
        }
        iVar8 = equation[iVar8].level;
        iVar5 = i + 2;
        iVar9 = iVar5;
        if (eloc <= iVar5) goto LAB_0806baa5;
        iVar6 = equation[iVar5].level;
        if (iVar6 < iVar8) goto LAB_0806baa5;
        ptVar4 = equation + iVar5;
        ptVar7 = equation + i + 3;
        goto LAB_0806ba87;
      }
      i = i + 2;
      ptVar4 = ptVar4 + 2;
    } while (i < eloc);
  }
  return 0;
  while( true ) {
    iVar6 = ptVar7->level;
    ptVar4 = ptVar7;
    ptVar7 = ptVar7 + 1;
    if (iVar6 < iVar8) break;
LAB_0806ba87:
    ptVar4->level = iVar6 + 1;
    iVar9 = iVar9 + 1;
    if (eloc <= iVar9) break;
  }
LAB_0806baa5:
  iVar6 = iVar9 - iVar5;
  if (n_tokens < iVar6 + 7 + *np) {
    error_huge();
  }
  equation[i + -1].token.variable = 3;
  ptVar4 = equation + iVar9;
  memmove(equation + iVar9 + 2,ptVar4,(*np - iVar9) * 0x10);
  *np = *np + 2;
  iVar1 = eloc + 2;
  ptVar4->level = iVar8 + 1;
  ptVar4->kind = OPERATOR;
  (ptVar4->token).variable = 2;
  ptVar4 = equation + iVar9 + 1;
  ptVar4->level = iVar8 + 1;
  ptVar4->kind = CONSTANT;
  (ptVar4->token).constant = 1.0;
  ptVar4 = equation + iVar1;
  memmove(equation + iVar6 + 5 + iVar1,ptVar4,(*np - iVar1) * 0x10);
  *np = iVar6 + 5 + *np;
  ptVar4->level = iVar2 + 1;
  ptVar4->kind = OPERATOR;
  (ptVar4->token).variable = 4;
  memmove(equation + eloc + 3,equation + iVar5,(iVar6 + 2) * 0x10);
  iVar8 = eloc + 3 + iVar6 + 2;
  ptVar4 = equation + iVar8;
  ptVar4->level = iVar2 + 2;
  ptVar4->kind = OPERATOR;
  (ptVar4->token).variable = 7;
  ptVar4 = equation + iVar8 + 1;
  ptVar4->level = iVar2 + 2;
  ptVar4->kind = CONSTANT;
  (ptVar4->token).constant = 1.0;
  return 1;
}



// WARNING: Unknown calling convention

int integrate_sub(token_type *equation,int *np,int loc,int eloc,long v)

{
  int iVar1;
  token_type *ptVar2;
  int level;
  int *piVar3;
  token_type *ptVar4;
  int iVar5;
  int iVar6;
  storage_type *psVar7;
  int div_flag;
  int iVar8;
  token_type *ptVar9;
  int j;
  int iVar10;
  int i;
  int iVar11;
  int k;
  token_type *ptVar12;
  bool bVar13;
  int local_34;
  int local_24;
  
  ptVar9 = equation + loc;
  local_24 = min_level(ptVar9,eloc - loc);
  if (loc < eloc) {
    psVar7 = &equation[loc + 1].token;
    iVar6 = loc + 1;
    local_34 = 0;
    iVar10 = local_24 + 1;
    ptVar2 = ptVar9;
    iVar5 = iVar6;
    do {
      if ((ptVar2->kind == VARIABLE) && ((ptVar2->token).variable == v)) {
        local_34 = local_34 + 1;
        if (1 < local_34) {
          return 0;
        }
        iVar11 = ptVar2->level;
        iVar8 = iVar6;
        piVar3 = &equation[iVar6].level;
        if ((local_24 != iVar11) && (iVar10 != iVar11)) {
          return 0;
        }
        for (; iVar8 < eloc; iVar8 = iVar8 + 2) {
          if (local_24 == *piVar3) {
            iVar1 = ((storage_type *)(piVar3 + 1))->variable;
            if (iVar1 < 3) {
              return 0;
            }
            if (4 < iVar1) {
              if (iVar1 != 6) {
                return 0;
              }
              if (iVar8 != iVar5) {
                return 0;
              }
            }
          }
          piVar3 = piVar3 + 8;
        }
        if (iVar10 == iVar11) {
          if (eloc <= iVar5) {
            return 0;
          }
          if (iVar10 != *(int *)((int)psVar7 + -4)) {
            return 0;
          }
          if (psVar7->variable != 6) {
            return 0;
          }
        }
      }
      ptVar2 = ptVar2 + 2;
      psVar7 = psVar7 + 4;
      iVar11 = iVar5 + 1;
      iVar5 = iVar5 + 2;
    } while (iVar11 < eloc);
    piVar3 = &ptVar9->level;
    j = loc;
    do {
      *piVar3 = *piVar3 + 2;
      j = j + 1;
      piVar3 = piVar3 + 4;
      iVar5 = loc;
    } while (j < eloc);
    do {
      if ((ptVar9->kind == VARIABLE) && ((ptVar9->token).variable == v)) {
        bVar13 = false;
        if (loc < iVar5) {
          bVar13 = equation[iVar5 + -1].token.variable == 4;
        }
        iVar6 = iVar5 + 1;
        if (eloc <= iVar6) {
          return 0;
        }
        if (equation[iVar6].token.variable != 6) {
          return 0;
        }
        iVar6 = equation[iVar6].level;
        iVar10 = iVar5 + 2;
        if (!bVar13) goto LAB_0806bedf;
        ptVar9 = equation + iVar10;
        if (((ptVar9->level == iVar6) && (ptVar9->kind == CONSTANT)) &&
           ((ptVar9->token).constant == 1.0)) {
          return 0;
        }
        if (n_tokens < *np + 2) {
          error_huge();
        }
        if ((eloc <= iVar10) || (iVar11 = ptVar9->level, iVar11 < iVar6)) goto LAB_0806be64;
        ptVar2 = equation + iVar5 + 3;
        iVar8 = iVar10;
        ptVar12 = ptVar9;
        goto LAB_0806be4a;
      }
      iVar5 = iVar5 + 2;
      ptVar9 = ptVar9 + 2;
    } while (iVar5 < eloc);
  }
  local_24 = local_24 + 1;
  if (n_tokens < *np + 2) {
    error_huge();
  }
  ptVar9 = equation + eloc;
  memmove(equation + eloc + 2,ptVar9,(*np - eloc) * 0x10);
  *np = *np + 2;
  ptVar9->level = local_24;
  ptVar9->kind = OPERATOR;
  (ptVar9->token).variable = 3;
  ptVar9 = equation + eloc + 1;
  ptVar9->level = local_24;
  ptVar9->kind = VARIABLE;
  (ptVar9->token).variable = v;
  return 1;
  while( true ) {
    iVar11 = ptVar4->level;
    ptVar2 = ptVar4 + 1;
    ptVar12 = ptVar4;
    if (iVar11 < iVar6) break;
LAB_0806be4a:
    ptVar4 = ptVar2;
    ptVar12->level = iVar11 + 1;
    iVar8 = iVar8 + 1;
    if (eloc <= iVar8) break;
  }
LAB_0806be64:
  equation[iVar5 + -1].token.variable = 3;
  memmove(equation + iVar5 + 4,ptVar9,(*np - iVar10) * 0x10);
  *np = *np + 2;
  eloc = eloc + 2;
  ptVar9->level = iVar6 + 1;
  ptVar9->kind = CONSTANT;
  (ptVar9->token).constant = -1.0;
  ptVar9 = equation + iVar5 + 3;
  ptVar9->level = iVar6 + 1;
  ptVar9->kind = OPERATOR;
  (ptVar9->token).variable = 3;
LAB_0806bedf:
  iVar11 = iVar10;
  if (iVar10 < eloc) {
    iVar8 = equation[iVar10].level;
    if (iVar6 <= iVar8) {
      ptVar9 = equation + iVar10;
      ptVar2 = equation + iVar5 + 3;
      do {
        ptVar9->level = iVar8 + 1;
        iVar11 = iVar11 + 1;
        if (eloc <= iVar11) break;
        iVar8 = ptVar2->level;
        ptVar9 = ptVar2;
        ptVar2 = ptVar2 + 1;
      } while (iVar6 <= iVar8);
    }
  }
  iVar5 = iVar11 - iVar10;
  if (n_tokens < iVar5 + 5 + *np) {
    error_huge();
  }
  ptVar9 = equation + iVar11;
  memmove(equation + iVar11 + 2,ptVar9,(*np - iVar11) * 0x10);
  *np = *np + 2;
  iVar8 = eloc + 2;
  ptVar9->level = iVar6 + 1;
  ptVar9->kind = OPERATOR;
  (ptVar9->token).variable = 1;
  ptVar9 = equation + iVar11 + 1;
  ptVar9->level = iVar6 + 1;
  ptVar9->kind = CONSTANT;
  (ptVar9->token).constant = 1.0;
  ptVar9 = equation + iVar8;
  memmove(equation + iVar5 + 3 + iVar8,ptVar9,(*np - iVar8) * 0x10);
  *np = iVar5 + 3 + *np;
  ptVar9->level = local_24 + 1;
  ptVar9->kind = OPERATOR;
  (ptVar9->token).variable = 4;
  memmove(equation + eloc + 3,equation + iVar10,(iVar5 + 2) * 0x10);
  return 1;
}



// WARNING: Removing unreachable block (ram,0x0806c2b8)
// WARNING: Removing unreachable block (ram,0x0806c2bc)
// WARNING: Removing unreachable block (ram,0x0806c2be)
// WARNING: Unknown calling convention

int integrate_cmd(char *cp)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int en;
  int iVar5;
  int iVar6;
  token_type *ptVar7;
  int len;
  int n2;
  int j;
  int definite_flag;
  token_type *dest;
  token_type *equation;
  int *piVar8;
  int *nps;
  long l1;
  int constant_flag;
  token_type *source;
  int in_GS_OFFSET;
  ushort in_FPUStatusWord;
  double dVar9;
  char *pcVar10;
  int *local_c4;
  double local_b4;
  char *local_a0 [4];
  int local_90;
  int local_8c;
  int local_88;
  char var_name_buf [100];
  
  local_a0[0] = cp;
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  local_88 = 0;
  iVar4 = current_not_defined();
  if (iVar4 == 0) {
    iVar4 = solved_equation(cur_equation);
    en = next_espace();
    bVar2 = false;
    bVar3 = false;
    do {
      iVar5 = strcmp_tospace(local_a0[0],"definite");
      if (iVar5 == 0) {
        bVar3 = true;
      }
      else {
        iVar5 = strcmp_tospace(local_a0[0],"constant");
        if (iVar5 != 0) goto LAB_0806c18c;
        bVar2 = true;
      }
      local_a0[0] = skip_param(local_a0[0]);
    } while( true );
  }
  goto LAB_0806c8c6;
LAB_0806c18c:
  if ((bVar2) && (bVar3)) {
    error("Conflicting options given.");
    iVar4 = 0;
    goto LAB_0806c8cb;
  }
  if (n_rhs[cur_equation] == 0) {
    ptVar7 = lhs[cur_equation];
    piVar8 = n_lhs;
    equation = lhs[en];
    local_c4 = n_lhs;
  }
  else {
    ptVar7 = rhs[cur_equation];
    piVar8 = n_rhs;
    equation = rhs[en];
    local_c4 = n_rhs;
  }
  local_c4 = local_c4 + en;
  piVar8 = piVar8 + cur_equation;
  if (*local_a0[0] != '\0') {
    iVar5 = isvarchar((int)*local_a0[0]);
    if ((iVar5 != 0) &&
       (local_a0[0] = parse_var2(&local_88,local_a0[0]), local_a0[0] == (char *)0x0))
    goto LAB_0806c8c6;
    if (*local_a0[0] == '\0') {
      local_b4 = 1.0;
      dVar9 = local_b4;
LAB_0806c2a9:
      do {
        dVar9 = dVar9 - (dVar9 / 1.0) * 1.0;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (dVar9 == 0.0) goto LAB_0806c2fc;
    }
    else {
      dVar9 = strtod(local_a0[0],local_a0);
      if ((*local_a0[0] == '\0') &&
         (in_FPUStatusWord = in_FPUStatusWord & 0xfdff, local_b4 = dVar9, 0.0 < dVar9))
      goto LAB_0806c2a9;
    }
    error("The order must be a positive integer.");
    iVar4 = 0;
    goto LAB_0806c8cb;
  }
  local_b4 = 1.0;
LAB_0806c2fc:
  if ((local_88 != 0) || (iVar5 = prompt_var(&local_88), iVar5 != 0)) {
    if (-1 < debug_level) {
      list_var(local_88,0);
      if (n_rhs[cur_equation] == 0) {
        pcVar10 = var_str;
        __printf_chk(1,"Integrating with respect to (%s)",var_str);
      }
      else {
        pcVar10 = var_str;
        __printf_chk(1,"Integrating the RHS with respect to (%s)",var_str);
      }
      if (local_b4 != 1.0) {
        pcVar10 = (char *)precision;
        __printf_chk(1," %.*g times",precision,local_b4);
      }
      __printf_chk(1," and simplifying...\n",pcVar10);
    }
    partial_flag = 0;
    uf_simp(ptVar7,piVar8);
    partial_flag = 1;
    factorv(ptVar7,piVar8,local_88);
    memmove(equation,ptVar7,*piVar8 << 4);
    local_8c = *piVar8;
    iVar5 = 0;
    if (0.0 < local_b4) {
      do {
        iVar6 = int_dispatch(equation,&local_8c,local_88,integrate_sub);
        if (iVar6 == 0) {
          error("Integration failed, not a polynomial.");
          iVar4 = 0;
          goto LAB_0806c8cb;
        }
        if (bVar2) {
          if (n_tokens < local_8c + 2) {
            error_huge();
          }
          if (0 < local_8c) {
            j = 0;
            ptVar7 = equation;
            do {
              ptVar7->level = ptVar7->level + 1;
              j = j + 1;
              ptVar7 = ptVar7 + 1;
            } while (j < local_8c);
          }
          equation[local_8c].kind = OPERATOR;
          equation[local_8c].level = 1;
          equation[local_8c].token.variable = 1;
          local_8c = local_8c + 1;
          equation[local_8c].kind = VARIABLE;
          equation[local_8c].level = 1;
          __snprintf_chk(var_name_buf,100,1,100,&DAT_0807754a,constant_var_number);
          pcVar10 = parse_var(&equation[local_8c].token.variable,var_name_buf);
          if (pcVar10 == (char *)0x0) goto LAB_0806c8c6;
          local_8c = local_8c + 1;
          iVar6 = constant_var_number + 1;
          constant_var_number = 1;
          if (-1 < iVar6) {
            constant_var_number = iVar6;
          }
        }
        simp_loop(equation,&local_8c);
        iVar5 = iVar5 + 1;
      } while ((double)iVar5 < local_b4);
    }
    if (!bVar3) {
LAB_0806c798:
      simpa_side(equation,&local_8c,0,0);
      *local_c4 = local_8c;
      if (n_rhs[cur_equation] != 0) {
        memmove(lhs[en],lhs[cur_equation],n_lhs[cur_equation] << 4);
        n_lhs[en] = n_lhs[cur_equation];
        if ((iVar4 != 0) && (iVar4 = isvarchar(0x27), iVar4 != 0)) {
          iVar4 = list_var((lhs[en]->token).variable,0);
          iVar5 = 0;
          for (pcVar10 = &DAT_080797ff + iVar4;
              (((double)iVar5 < local_b4 && (iVar4 != iVar5 && -1 < iVar4 - iVar5)) &&
              (*pcVar10 == '\'')); pcVar10 = pcVar10 + -1) {
            *pcVar10 = '\0';
            iVar5 = iVar5 + 1;
          }
          parse_var(&(lhs[en]->token).variable,var_str);
        }
      }
      cur_equation = en;
      iVar4 = return_result(en);
      goto LAB_0806c8cb;
    }
    my_strlcpy(prompt_str,"Enter lower bound: ",0x50);
    iVar5 = get_expr(tlhs,&n_tlhs);
    if (iVar5 != 0) {
      my_strlcpy(prompt_str,"Enter upper bound: ",0x50);
      iVar5 = get_expr(trhs,&n_trhs);
      if (iVar5 != 0) {
        memmove(scratch,equation,local_8c << 4);
        local_90 = local_8c;
        subst_var_with_exp(scratch,&local_90,tlhs,n_tlhs,local_88);
        subst_var_with_exp(equation,&local_8c,trhs,n_trhs,local_88);
        if (n_tokens < local_8c + local_90 + 1) {
          error_huge();
        }
        if (0 < local_8c) {
          iVar5 = 0;
          ptVar7 = equation;
          do {
            ptVar7->level = ptVar7->level + 1;
            iVar5 = iVar5 + 1;
            ptVar7 = ptVar7 + 1;
          } while (iVar5 < local_8c);
        }
        if (0 < local_90) {
          iVar5 = 0;
          do {
            scratch[iVar5].level = scratch[iVar5].level + 1;
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_90);
        }
        equation[local_8c].kind = OPERATOR;
        equation[local_8c].level = 1;
        equation[local_8c].token.variable = 2;
        local_8c = local_8c + 1;
        memmove(equation + local_8c,scratch,local_90 << 4);
        local_8c = local_8c + local_90;
        goto LAB_0806c798;
      }
    }
  }
LAB_0806c8c6:
  iVar4 = 0;
LAB_0806c8cb:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar4;
}



// WARNING: Unknown calling convention

int get_constant(token_type *p1,int n,double *dp)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int i;
  int level;
  int j;
  uint uVar6;
  uint local_34;
  token_type *local_30;
  double local_2c;
  double local_24 [2];
  
  if ((n < 1) || ((n & 1U) == 0)) {
    error_bug("Call to get_constant() has invalid expression length.");
  }
  if (n == 1) {
    if (p1->kind == CONSTANT) {
      *dp = (double)p1->token;
      return 1;
    }
    if (p1->kind == VARIABLE) {
      iVar2 = var_is_const((p1->token).variable,dp);
      return (uint)(iVar2 != 0);
    }
  }
  else if (2 < n) {
    local_30 = p1 + 1;
    iVar2 = p1[1].level;
    iVar3 = get_constant(p1,1,local_24);
    if (iVar3 != 0) {
      if (n < 2) {
LAB_0806cac7:
        *dp = local_24[0];
        return 1;
      }
      if ((local_30->kind == OPERATOR) && (p1[1].level <= iVar2)) {
        local_34 = 1;
        iVar2 = p1[1].level;
        do {
          uVar6 = local_34 + 2;
          if (((int)uVar6 < n) && (iVar2 < p1[uVar6].level)) {
            piVar4 = &p1[local_34 + 4].level;
            do {
              uVar6 = uVar6 + 2;
              if (n <= (int)uVar6) break;
              iVar3 = *piVar4;
              piVar4 = piVar4 + 8;
            } while (iVar2 < iVar3);
          }
          iVar5 = get_constant(p1 + local_34 + 1,uVar6 + ~local_34,&local_2c);
          iVar3 = approximate_roots;
          if (iVar5 == 0) {
            return 0;
          }
          approximate_roots = 1;
          iVar5 = calc((int *)0x0,local_24,(local_30->token).operatr,local_2c);
          if (iVar5 == 0) {
            approximate_roots = iVar3;
            return 0;
          }
          if (((local_30->token).variable == 6) && (domain_check == 0)) {
            approximate_roots = iVar3;
            return 0;
          }
          domain_check = 0;
          approximate_roots = iVar3;
          if (n <= (int)uVar6) goto LAB_0806cac7;
          local_30 = p1 + uVar6;
          if (local_30->kind != OPERATOR) {
            domain_check = 0;
            return 0;
          }
          bVar1 = iVar2 < local_30->level;
          iVar2 = local_30->level;
          local_34 = uVar6;
          if (bVar1) {
            domain_check = 0;
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}



// WARNING: Unknown calling convention

int parse_complex(token_type *p1,int n,complexs *cp)

{
  kind_list kVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int level2;
  token_type *ptVar5;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  token_type *local_38;
  int local_34;
  token_type *local_30;
  complexs c;
  
  iVar3 = get_constant(p1,n,&c.re);
  if (iVar3 != 0) {
    *(undefined4 *)&cp->re = c.re._0_4_;
    *(undefined4 *)((int)&cp->re + 4) = c.re._4_4_;
    *(undefined4 *)&cp->im = 0;
    *(undefined4 *)((int)&cp->im + 4) = 0;
    return 1;
  }
  iVar3 = min_level(p1,n);
  c.re = 0.0;
  c.im = 1.0;
  local_34 = n + -1;
  if (local_34 < 0) {
    return 0;
  }
  ptVar5 = p1 + local_34;
  local_38 = p1 + n;
  local_30 = p1 + n + -2;
  local_3c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  do {
    kVar1 = ptVar5->kind;
    if (kVar1 == VARIABLE) {
      iVar4 = var_is_const((ptVar5->token).variable,(double *)0x0);
      if (iVar4 == 0) {
        if ((ptVar5->token).variable != 3) {
          return 0;
        }
        local_40 = local_40 + 1;
      }
    }
    else if (kVar1 != CONSTANT) {
      if (kVar1 != OPERATOR) {
        return 0;
      }
      iVar4 = ptVar5->level;
      iVar2 = (ptVar5->token).variable;
      if (iVar2 == 2) {
        if (local_40 != 0) {
          c.im = -c.im;
        }
      }
      else {
        if (2 < iVar2) {
          if (iVar2 == 3) {
            local_48 = local_48 + 1;
            if (1 < local_48) {
              return 0;
            }
            if (local_30->level != iVar4) {
              return 0;
            }
            if (local_30->level != local_38->level) {
              return 0;
            }
            if ((local_30->kind == VARIABLE) && ((local_30->token).variable == 3)) {
              iVar4 = get_constant(local_38,1,&c.im);
              if (iVar4 == 0) {
                return 0;
              }
            }
            else {
              if (local_38->kind != VARIABLE) {
                return 0;
              }
              if ((local_38->token).variable != 3) {
                return 0;
              }
              iVar4 = get_constant(local_30,1,&c.im);
              if (iVar4 == 0) {
                return 0;
              }
            }
          }
          else {
            if (iVar2 != 4) {
              return 0;
            }
            local_48 = local_48 + 1;
            if (1 < local_48) {
              return 0;
            }
            if (local_30->level != iVar4) {
              return 0;
            }
            if (local_30->level != local_38->level) {
              return 0;
            }
            if (local_30->kind != VARIABLE) {
              return 0;
            }
            if ((local_30->token).variable != 3) {
              return 0;
            }
            iVar4 = get_constant(local_38,1,&c.im);
            if (iVar4 == 0) {
              return 0;
            }
            c.im = 1.0 / c.im;
          }
          goto LAB_0806cd8d;
        }
        if (iVar2 != 1) {
          return 0;
        }
      }
      local_44 = local_44 + 1;
      if (1 < local_44) {
        return 0;
      }
      if (iVar3 != iVar4) {
        return 0;
      }
      iVar4 = get_constant(p1,local_34,&c.re);
      if (iVar4 != 0) break;
      iVar4 = get_constant(local_38,local_3c,&c.re);
      if (iVar4 == 0) {
        return 0;
      }
      if ((ptVar5->token).variable == 2) {
        c.re = -c.re;
      }
    }
LAB_0806cd8d:
    local_3c = local_3c + 1;
    ptVar5 = ptVar5 + -1;
    local_38 = local_38 + -1;
    local_30 = local_30 + -1;
    local_34 = local_34 + -1;
  } while (-1 < local_34);
  if (local_40 != 1) {
    return 0;
  }
  *(undefined4 *)&cp->re = c.re._0_4_;
  *(undefined4 *)((int)&cp->re + 4) = c.re._4_4_;
  *(undefined4 *)&cp->im = c.im._0_4_;
  *(undefined4 *)((int)&cp->im + 4) = c.im._4_4_;
  return 1;
}



// WARNING: Removing unreachable block (ram,0x0806cee2)
// WARNING: Unknown calling convention

int complex_root_simp(token_type *equation,int *np)

{
  complexs a;
  complexs b;
  int iVar1;
  int j;
  int iVar2;
  int *piVar3;
  token_type *p1;
  int iVar4;
  int level;
  int iVar5;
  int i;
  token_type *ptVar6;
  int iVar7;
  int local_60;
  uint local_50;
  complexs r;
  complexs p;
  complexs c;
  
  local_60 = 0;
start_over:
  iVar2 = *np;
  if (iVar2 < 2) {
LAB_0806d02e:
    if (local_60 != 0) {
      warning("Complex number roots approximated.");
    }
    return local_60;
  }
  local_50 = 1;
  ptVar6 = equation + 2;
  do {
    if (ptVar6[-1].token.variable == 6) {
      iVar5 = ptVar6[-1].level;
      iVar1 = local_50 + 2;
      if ((iVar1 < iVar2) && (iVar5 <= ptVar6[1].level)) {
        piVar3 = &ptVar6[3].level;
        do {
          iVar1 = iVar1 + 2;
          if (iVar2 <= iVar1) break;
          iVar4 = *piVar3;
          piVar3 = piVar3 + 8;
        } while (iVar5 <= iVar4);
      }
      iVar2 = parse_complex(ptVar6,iVar1 + ~local_50,&p);
      if (iVar2 != 0) {
        iVar2 = local_50 - 1;
        if ((-1 < iVar2) && (iVar5 <= ptVar6[-2].level)) {
          piVar3 = &ptVar6[-3].level;
          do {
            iVar2 = iVar2 + -1;
            if (iVar2 < 0) break;
            iVar4 = *piVar3;
            piVar3 = piVar3 + -4;
          } while (iVar5 <= iVar4);
        }
        iVar7 = iVar2 + 1;
        p1 = equation + iVar7;
        iVar4 = parse_complex(p1,local_50 - iVar7,&c);
        if ((iVar4 != 0) &&
           (((double)CONCAT44(c.im._4_4_,c.im._0_4_) != 0.0 ||
            ((double)CONCAT44(p.im._4_4_,p.im._0_4_) != 0.0)))) break;
      }
    }
    local_50 = local_50 + 2;
    iVar2 = *np;
    ptVar6 = ptVar6 + 2;
    if (iVar2 <= (int)local_50) goto LAB_0806d02e;
  } while( true );
  iVar1 = local_50 + 1 + iVar1 + ~local_50;
  a.re._4_4_ = c.re._4_4_;
  a.re._0_4_ = c.re._0_4_;
  a.im._0_4_ = c.im._0_4_;
  a.im._4_4_ = c.im._4_4_;
  b.re._4_4_ = p.re._4_4_;
  b.re._0_4_ = p.re._0_4_;
  b.im._0_4_ = p.im._0_4_;
  b.im._4_4_ = p.im._4_4_;
  complex_pow(a,b);
  if (n_tokens < (iVar7 - iVar1) + 5 + *np) {
    error_huge();
  }
  memmove(equation + iVar2 + 6,equation + iVar1,(*np - iVar1) * 0x10);
  *np = (iVar7 - iVar1) + 5 + *np;
  p1->level = iVar5;
  p1->kind = CONSTANT;
  (p1->token).constant = r.re;
  ptVar6 = equation + iVar2 + 2;
  ptVar6->level = iVar5;
  ptVar6->kind = OPERATOR;
  (ptVar6->token).variable = 1;
  iVar5 = iVar5 + 1;
  ptVar6 = equation + iVar2 + 3;
  ptVar6->level = iVar5;
  ptVar6->kind = CONSTANT;
  (ptVar6->token).constant = r.im;
  ptVar6 = equation + iVar2 + 4;
  ptVar6->level = iVar5;
  ptVar6->kind = OPERATOR;
  (ptVar6->token).variable = 3;
  ptVar6 = equation + iVar2 + 5;
  ptVar6->level = iVar5;
  ptVar6->kind = VARIABLE;
  (ptVar6->token).variable = 3;
  local_60 = 1;
  goto start_over;
}



// WARNING: Unknown calling convention

void approximate_complex_roots(token_type *equation,int *np)

{
  int iVar1;
  
  do {
    elim_loop(equation,np);
    iVar1 = complex_root_simp(equation,np);
  } while (iVar1 != 0);
  return;
}



// WARNING: Unknown calling convention

void rect_to_polar(double x,double y,double *radiusp,double *thetap)

{
  double dVar1;
  
  *radiusp = SQRT(y * y + x * x);
  dVar1 = atan2(y,x);
  *thetap = dVar1;
  return;
}



// WARNING: Removing unreachable block (ram,0x0806d1a0)
// WARNING: Removing unreachable block (ram,0x0806d5e3)
// WARNING: Removing unreachable block (ram,0x0806d363)
// WARNING: Removing unreachable block (ram,0x0806d1a4)
// WARNING: Removing unreachable block (ram,0x0806d1a6)
// WARNING: Removing unreachable block (ram,0x0806d772)
// WARNING: Removing unreachable block (ram,0x0806d5ba)
// WARNING: Removing unreachable block (ram,0x0806d792)
// WARNING: Unknown calling convention

int roots_cmd(char *cp)

{
  int iVar1;
  char cVar2;
  complexs a;
  complexs b;
  ushort **ppuVar3;
  int *piVar4;
  int iVar5;
  int in_GS_OFFSET;
  ushort in_FPUStatusWord;
  ushort uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  double dVar14;
  double local_109c;
  double local_1094;
  double local_1084;
  char *local_107c;
  char *local_1078;
  char *local_1074;
  char *local_1070;
  char *local_1060 [3];
  complexs check;
  complexs c2;
  double local_1034;
  double local_102c;
  char buf [4096];
  
  local_1060[0] = cp;
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  local_109c = 0.0;
  do {
    if (*local_1060[0] == '\0') {
      my_strlcpy(prompt_str,"Enter root (positive integer): ",0x50);
      local_1060[0] = get_string(buf,0x1000);
      if (local_1060[0] != (char *)0x0) goto LAB_0806d12d;
LAB_0806d812:
      iVar5 = 0;
      goto LAB_0806d817;
    }
LAB_0806d12d:
    dVar7 = strtod(local_1060[0],local_1060);
    cVar2 = *local_1060[0];
    if ((((cVar2 != '\0') &&
         (ppuVar3 = __ctype_b_loc(), (*(byte *)((int)*ppuVar3 + cVar2 * 2 + 1) & 0x20) == 0)) ||
        (uVar6 = in_FPUStatusWord & 0xfdff, dVar7 < 0.0)) || (dVar8 = dVar7, 10000.0 < dVar7)) {
LAB_0806d1ca:
      __printf_chk(1,"Root must be a positive integer less than or equal to %.0f.\n",0,0x40c38800);
      iVar5 = 0;
      goto LAB_0806d817;
    }
    do {
      dVar8 = dVar8 - (dVar8 / 1.0) * 1.0;
    } while ((in_FPUStatusWord & 0x400) != 0);
    if (dVar8 != 0.0) goto LAB_0806d1ca;
    local_1060[0] = skip_space(local_1060[0]);
    if (*local_1060[0] == '\0') {
      my_strlcpy(prompt_str,"Enter real part (X): ",0x50);
      local_1060[0] = get_string(buf,0x1000);
      if (local_1060[0] == (char *)0x0) goto LAB_0806d812;
    }
    dVar8 = strtod(local_1060[0],local_1060);
    pcVar12 = local_1060[0];
    cVar2 = *local_1060[0];
    if ((cVar2 != '\0') &&
       (ppuVar3 = __ctype_b_loc(), (*(byte *)((int)*ppuVar3 + cVar2 * 2 + 1) & 0x20) == 0)) {
      error("Number expected.");
      iVar5 = 0;
      goto LAB_0806d817;
    }
    local_1060[0] = skip_space(pcVar12);
    if (*local_1060[0] == '\0') {
      my_strlcpy(prompt_str,"Enter imaginary part (Y): ",0x50);
      local_1060[0] = get_string(buf,0x1000);
      if (local_1060[0] == (char *)0x0) goto LAB_0806d812;
    }
    dVar9 = strtod(local_1060[0],local_1060);
    if (*local_1060[0] != '\0') {
      error("Number expected.");
      iVar5 = 0;
      goto LAB_0806d817;
    }
    uVar6 = uVar6 & 0xfdff;
    if ((dVar8 == 0.0) && (iVar5 = repeat_flag, dVar9 == 0.0)) goto LAB_0806d817;
    piVar4 = __errno_location();
    *piVar4 = 0;
    uVar10 = (undefined4)((ulonglong)dVar8 >> 0x20);
    rect_to_polar(dVar8,dVar9,&local_102c,&local_1034);
    in_FPUStatusWord = uVar6 & 0xfdff;
    if (dVar7 == 0.0) {
      check_err();
      dVar14 = (local_1034 * 180.0) / 3.141592653589793;
      iVar5 = precision;
      __fprintf_chk(gfp,1,
                    "\nThe polar coordinates are:\n%.*g amplitude and %.*g radians (%.*g degrees).\n\n"
                    ,precision,SUB84(local_102c,0),(int)((ulonglong)local_102c >> 0x20),precision,
                    SUB84(local_1034,0),(int)((ulonglong)local_1034 >> 0x20),precision,dVar14);
      in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
      if (dVar7 != 0.0) goto LAB_0806d494;
    }
    else {
      local_109c = pow(local_102c,1.0 / dVar7);
      check_err();
      dVar14 = (local_1034 * 180.0) / 3.141592653589793;
      iVar5 = precision;
      __fprintf_chk(gfp,1,
                    "\nThe polar coordinates are:\n%.*g amplitude and %.*g radians (%.*g degrees).\n\n"
                    ,precision,SUB84(local_102c,0),(int)((ulonglong)local_102c >> 0x20),precision,
                    SUB84(local_1034,0),(int)((ulonglong)local_1034 >> 0x20),precision,dVar14);
LAB_0806d494:
      in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
      pcVar12 = SUB84(dVar7,0);
      pcVar13 = (char *)((ulonglong)dVar7 >> 0x20);
      if (dVar9 == 0.0) {
        __fprintf_chk(gfp,1,"The %.12g roots of (%.12g)^(1/%.12g) are:\n\n",pcVar12,pcVar13,
                      SUB84(dVar8,0),uVar10,pcVar12,pcVar13,iVar5,dVar14);
      }
      else {
        __fprintf_chk(gfp,1,"The %.12g roots of (%.12g%+.12g*i)^(1/%.12g) are:\n\n",pcVar12,pcVar13,
                      SUB84(dVar8,0),uVar10,SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20),pcVar12,
                      pcVar13,(int)((ulonglong)dVar14 >> 0x20));
      }
      in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
      if (0.0 < dVar7) {
        local_1094 = 0.0;
        do {
          dVar8 = ((local_1094 + local_1094) * 3.141592653589793 + local_1034) / dVar7;
          dVar9 = cos(dVar8);
          c2.re = dVar9 * local_109c;
          dVar8 = sin(dVar8);
          c2.im = dVar8 * local_109c;
          complex_fixup(&c2);
          in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
          if ((c2.re != 0.0) || (c2.im == 0.0)) {
            pcVar12 = SUB84(c2.re,0);
            pcVar13 = (char *)((ulonglong)c2.re >> 0x20);
            __fprintf_chk(gfp,1,"%.12g ",pcVar12,pcVar13);
          }
          in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
          if (c2.im != 0.0) {
            pcVar12 = SUB84(c2.im,0);
            pcVar13 = (char *)((ulonglong)c2.im >> 0x20);
            __fprintf_chk(gfp,1,"%+.12g*i",pcVar12,pcVar13);
          }
          pcVar11 = "\n";
          __fprintf_chk(gfp,1,"\n",pcVar12,pcVar13);
          check.re._0_4_ = c2.re._0_4_;
          check.re._4_4_ = c2.re._4_4_;
          check.im._0_4_ = c2.im._0_4_;
          check.im._4_4_ = c2.im._4_4_;
          in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
          if (1.0 < dVar7) {
            local_1084 = 1.0;
            do {
              a.re._4_4_ = check.re._4_4_;
              a.re._0_4_ = check.re._0_4_;
              a.im._0_4_ = check.im._0_4_;
              a.im._4_4_ = check.im._4_4_;
              b.im._0_4_ = c2.im._0_4_;
              b.re = c2.re;
              b.im._4_4_ = c2.im._4_4_;
              pcVar11 = check.re._4_4_;
              pcVar12 = check.im._0_4_;
              pcVar13 = check.im._4_4_;
              complex_mult(a,b);
              check.re._0_4_ = local_107c;
              check.re._4_4_ = local_1078;
              check.im._0_4_ = local_1074;
              check.im._4_4_ = local_1070;
              local_1084 = local_1084 + 1.0;
              in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
            } while (local_1084 < dVar7);
          }
          complex_fixup(&check);
          __printf_chk(1,"Inverse check:");
          in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
          if (((double)CONCAT44(check.re._4_4_,check.re._0_4_) != 0.0) ||
             ((double)CONCAT44(check.im._4_4_,check.im._0_4_) == 0.0)) {
            pcVar11 = check.re._0_4_;
            pcVar12 = check.re._4_4_;
            __printf_chk(1," %.10g",check.re._0_4_);
          }
          in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
          if ((double)CONCAT44(check.im._4_4_,check.im._0_4_) != 0.0) {
            pcVar11 = check.im._0_4_;
            pcVar12 = check.im._4_4_;
            __printf_chk(1," %+.10g*i",check.im._0_4_);
          }
          __printf_chk(1,"\n\n",pcVar11);
          local_1094 = local_1094 + 1.0;
          in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
        } while (local_1094 < dVar7);
      }
    }
  } while (repeat_flag != 0);
  iVar5 = 1;
LAB_0806d817:
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention

int complex_fixup(complexs *ap)

{
  int iVar1;
  
  if (ABS(ap->re * 5e-14) <= ABS(ap->im)) {
    iVar1 = 0;
    if (ABS(ap->re) < ABS(ap->im * 5e-14)) {
      ap->re = 0.0;
      iVar1 = 1;
    }
  }
  else {
    ap->im = 0.0;
    iVar1 = 1;
  }
  return iVar1;
}



// WARNING: Unknown calling convention

complexs * complex_add(complexs a,complexs b)

{
  complexs *in_stack_00000004;
  
  in_stack_00000004->im = a.im + b.im;
  in_stack_00000004->re = a.re + b.re;
  return in_stack_00000004;
}



// WARNING: Unknown calling convention

complexs * complex_negate(complexs a)

{
  complexs *in_stack_00000004;
  
  in_stack_00000004->im = -a.im;
  in_stack_00000004->re = -a.re;
  return in_stack_00000004;
}



// WARNING: Unknown calling convention

complexs * complex_mult(complexs a,complexs b)

{
  complexs *in_stack_00000004;
  
  in_stack_00000004->im = a.im * b.re + a.re * b.im;
  in_stack_00000004->re = b.re * a.re - b.im * a.im;
  return in_stack_00000004;
}



// WARNING: Unknown calling convention

complexs * complex_div(complexs a,complexs b)

{
  double dVar1;
  double dVar2;
  complexs b_00;
  double denom;
  complexs *in_stack_00000004;
  complexs num;
  
  dVar2 = b.re;
  dVar1 = -b.im;
  b.im._0_4_ = SUB84(dVar1,0);
  b.im._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
  b_00.im._0_4_ = b.im._0_4_;
  b_00.re = dVar2;
  b_00.im._4_4_ = b.im._4_4_;
  complex_mult(a,b_00);
  dVar1 = dVar1 * dVar1 + dVar2 * dVar2;
  in_stack_00000004->im = num.im / dVar1;
  in_stack_00000004->re = num.re / dVar1;
  return in_stack_00000004;
}



// WARNING: Unknown calling convention

complexs * complex_exp(complexs a)

{
  double m;
  double dVar1;
  complexs *in_stack_00000004;
  double local_1c;
  double local_14;
  
  sincos(a.im,&local_14,&local_1c);
  dVar1 = exp(a.re);
  in_stack_00000004->im = local_14 * dVar1;
  in_stack_00000004->re = dVar1 * local_1c;
  return in_stack_00000004;
}



// WARNING: Unknown calling convention

complexs * complex_log(complexs a)

{
  double dVar1;
  double dVar2;
  complexs *in_stack_00000004;
  
  dVar1 = log(a.im * a.im + a.re * a.re);
  dVar2 = atan2(a.im,a.re);
  in_stack_00000004->im = dVar2;
  in_stack_00000004->re = dVar1 * 0.5;
  return in_stack_00000004;
}



// WARNING: Unknown calling convention

complexs * complex_pow(complexs a,complexs b)

{
  complexs a_00;
  complexs a_01;
  complexs *in_stack_00000004;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  complexs r;
  
  complex_log(a);
  a_00.re._4_4_ = local_38;
  a_00.re._0_4_ = local_3c;
  a_00.im._0_4_ = local_34;
  a_00.im._4_4_ = local_30;
  complex_mult(a_00,b);
  a_01.re._4_4_ = local_38;
  a_01.re._0_4_ = local_3c;
  a_01.im._0_4_ = local_34;
  a_01.im._4_4_ = local_30;
  complex_exp(a_01);
  r.re._0_4_ = local_3c;
  r.re._4_4_ = local_38;
  r.im._0_4_ = local_34;
  r.im._4_4_ = local_30;
  complex_fixup(&r);
  *(undefined4 *)&in_stack_00000004->re = r.re._0_4_;
  *(undefined4 *)((int)&in_stack_00000004->re + 4) = r.re._4_4_;
  *(undefined4 *)&in_stack_00000004->im = r.im._0_4_;
  *(undefined4 *)((int)&in_stack_00000004->im + 4) = r.im._4_4_;
  return in_stack_00000004;
}



// WARNING: Unknown calling convention

char * var_name(long v)

{
  char *pcVar1;
  char *cp;
  long l;
  uint uVar2;
  
  uVar2 = (v & 0x3fffU) - 0x41;
  pcVar1 = (char *)0x0;
  if (uVar2 < 8000) {
    pcVar1 = var_names[uVar2];
  }
  return pcVar1;
}



// WARNING: Unknown calling convention

void trim_zeros(char *buf)

{
  char cVar1;
  int j;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar2 = 0xffffffff;
  pcVar4 = buf;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar3 = ~uVar2 - 2;
  if (-1 < iVar3) {
    pcVar4 = buf + (~uVar2 - 1);
    do {
      if (pcVar4[-1] != '0') {
        if (pcVar4[-1] != '.') {
          return;
        }
        pcVar4[1] = '\0';
      }
      pcVar4 = pcVar4 + -1;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0806dbb2)
// WARNING: Removing unreachable block (ram,0x0806dbac)
// WARNING: Removing unreachable block (ram,0x0806dbb4)
// WARNING: Unknown calling convention

int int_expr(token_type *p1,int n)

{
  double dVar1;
  int i;
  ushort in_FPUStatusWord;
  
  if (0 < n) {
    i = 0;
    do {
      if (p1->kind == CONSTANT) {
        dVar1 = (p1->token).constant;
        do {
          dVar1 = dVar1 - (dVar1 / 1.0) * 1.0;
        } while ((in_FPUStatusWord & 0x400) != 0);
        in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
        if (dVar1 != 0.0) {
          return 0;
        }
      }
      else if ((p1->kind == VARIABLE) && ((p1->token).variable < 3)) {
        return 0;
      }
      i = i + 1;
      p1 = p1 + 1;
    } while (i < n);
  }
  return 1;
}



// WARNING: Unknown calling convention

int list_var(long v,int lang_code)

{
  bool bVar1;
  char *cp;
  char *pcVar2;
  ushort **ppuVar3;
  char cVar4;
  int from_memory;
  uint uVar5;
  int j;
  int iVar6;
  byte bVar7;
  
  bVar7 = 0;
  var_str[0] = '\0';
  switch(v & 0x3fff) {
  case 0:
    uVar5 = 0xffffffff;
    pcVar2 = var_str;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar4 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar4 != '\0');
    goto LAB_0806de2e;
  case 1:
    switch(lang_code) {
    case 0:
      pcVar2 = "e#";
      break;
    case 1:
      pcVar2 = "M_E";
      break;
    case 2:
      pcVar2 = "Math.E";
      break;
    case 3:
      pcVar2 = "math.e";
      break;
    case -3:
      bVar1 = false;
      pcVar2 = "exp(1.0)";
      goto LAB_0806dd5c;
    default:
      pcVar2 = "e";
      break;
    case -1:
      pcVar2 = "%e";
    }
    break;
  case 2:
    pcVar2 = "pi";
    switch(lang_code) {
    case 0:
      pcVar2 = "pi#";
      break;
    case 1:
      pcVar2 = "M_PI";
      break;
    case 2:
      pcVar2 = "Math.PI";
      break;
    case 3:
      pcVar2 = "math.pi";
      break;
    case -1:
      bVar1 = false;
      pcVar2 = "%pi";
      goto LAB_0806dd5c;
    }
    break;
  case 3:
    switch(lang_code) {
    case 0:
      pcVar2 = "i#";
      break;
    default:
      pcVar2 = "1.0i";
      break;
    case 3:
      pcVar2 = "1j";
      break;
    case -3:
      bVar1 = false;
      pcVar2 = "{0,1}";
      goto LAB_0806dd5c;
    case -2:
      pcVar2 = "i";
      break;
    case -1:
      pcVar2 = "%i";
    }
    break;
  case 4:
    bVar1 = false;
    pcVar2 = "sign";
    goto LAB_0806dd5c;
  case 5:
    pcVar2 = "all";
    break;
  default:
    pcVar2 = var_name(v);
    bVar1 = true;
LAB_0806dd5c:
    if (pcVar2 != (char *)0x0) goto LAB_0806dd60;
    my_strlcpy(var_str,"bad_variable",0xb4);
    goto LAB_0806ddd7;
  }
  bVar1 = false;
LAB_0806dd60:
  uVar5 = v >> 0xe & 0x3f;
  if (uVar5 == 0) {
    my_strlcpy(var_str,pcVar2,0xb4);
  }
  else {
    __snprintf_chk(var_str,0xb4,1,0xb4,&DAT_080779d3,pcVar2,uVar5 - 1);
  }
LAB_0806ddd7:
  if (((bVar1) && (lang_code != 0)) && (var_str[0] != '\0')) {
    iVar6 = 0;
    cVar4 = var_str[0];
    do {
      if ((cVar4 != '_') && (ppuVar3 = __ctype_b_loc(), (*(byte *)(*ppuVar3 + cVar4) & 8) == 0)) {
        var_str[iVar6] = '_';
      }
      cVar4 = var_str[iVar6 + 1];
      iVar6 = iVar6 + 1;
    } while (cVar4 != '\0');
  }
  uVar5 = 0xffffffff;
  pcVar2 = var_str;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar4 = *pcVar2;
    pcVar2 = pcVar2 + (uint)bVar7 * -2 + 1;
  } while (cVar4 != '\0');
LAB_0806de2e:
  return ~uVar5 - 1;
}



// WARNING: Unknown calling convention

int list_code(token_type *equation,int *np,language_list language,int int_flag)

{
  int iVar1;
  kind_list kVar2;
  int iVar3;
  int iVar4;
  token_type *ptVar5;
  int iVar6;
  int iVar7;
  int i2;
  char *cp;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  int cur_level;
  int j;
  token_type *ptVar11;
  int len;
  token_type *ptVar12;
  int in_GS_OFFSET;
  byte bVar13;
  int local_244;
  int local_22c;
  int local_228;
  int local_224;
  char buf [500];
  
  bVar13 = 0;
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar4 = min_level(equation,*np);
  iVar4 = iVar4 - (uint)(1 < *np);
  local_22c = 0;
  if (0 < *np) {
    local_244 = 0;
    local_224 = iVar4;
    do {
      ptVar5 = equation + local_244;
      uVar9 = local_224 - ptVar5->level;
      iVar10 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
      if (0 < iVar10) {
        iVar6 = local_244 + 1;
        local_228 = 1;
        do {
          if ((int)uVar9 < 1) {
            local_224 = local_224 + 1;
            if ((iVar6 < *np) &&
               (iVar7 = equation[iVar6].level, iVar3 = iVar6, ptVar11 = equation + iVar6,
               ptVar12 = equation + local_244 + 3, local_224 <= iVar7)) {
              while (local_224 != iVar7) {
                if ((*np <= iVar3 + 2) || (iVar7 = ptVar12->level, iVar7 < local_224))
                goto LAB_0806e11b;
                iVar3 = iVar3 + 2;
                ptVar11 = ptVar12;
                ptVar12 = ptVar12 + 2;
              }
              if ((ptVar11->token).variable == 6) {
                iVar7 = equation[iVar3 + -1].level;
                if ((((iVar7 == local_224) &&
                     (ptVar12 = equation + iVar3 + 1, iVar7 == ptVar12->level)) &&
                    (ptVar12->kind == CONSTANT)) && ((ptVar12->token).constant == 2.0)) {
                  (ptVar11->token).variable = 3;
                  ptVar11 = equation + iVar3 + -1;
                  for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
                    ptVar12->kind = ptVar11->kind;
                    ptVar11 = (token_type *)((int)ptVar11 + ((uint)bVar13 * -2 + 1) * 4);
                    ptVar12 = (token_type *)((int)ptVar12 + ((uint)bVar13 * -2 + 1) * 4);
                  }
                }
                else if (int_flag == 0) {
                  if (language == C) {
                    iVar7 = __fprintf_chk(gfp,1,"pow");
                    local_22c = local_22c + iVar7;
                  }
                  else if (language == JAVA) {
                    iVar7 = __fprintf_chk(gfp,1,"Math.pow");
                    local_22c = local_22c + iVar7;
                  }
                }
              }
              else if ((ptVar11->token).variable == 7) {
                iVar7 = __fprintf_chk(gfp,1,&DAT_080779f3);
                local_22c = local_22c + iVar7;
              }
            }
LAB_0806e11b:
            iVar7 = __fprintf_chk(gfp,1,"(");
            local_22c = local_22c + iVar7;
          }
          else {
            local_224 = local_224 + -1;
            iVar7 = __fprintf_chk(gfp,1,&DAT_080779a8);
            local_22c = local_22c + iVar7;
          }
          local_228 = local_228 + 1;
        } while (local_228 <= iVar10);
      }
      kVar2 = ptVar5->kind;
      if (kVar2 == VARIABLE) {
        if (((int_flag == 0) || (1 < language + 0xffffffff)) || ((ptVar5->token).variable != 3)) {
          list_var((ptVar5->token).variable,language);
          iVar10 = __fprintf_chk(gfp,1,"%s",var_str);
          local_22c = local_22c + iVar10;
        }
        else {
          iVar10 = __fprintf_chk(gfp,1,&DAT_08077a08);
          local_22c = local_22c + iVar10;
        }
      }
      else if (kVar2 == CONSTANT) {
        if ((ptVar5->token).constant == 0.0) {
          (ptVar5->token).constant = 0.0;
        }
        if (int_flag == 0) {
          __snprintf_chk(buf,500,1,500,"%#.*g",0xf,(ptVar5->token).variable,SUB84(ptVar5->token,4));
          trim_zeros(buf);
        }
        else {
          __snprintf_chk(buf,500,1,500,&DAT_080779f8,(ptVar5->token).variable,SUB84(ptVar5->token,4)
                        );
        }
        if (0.0 <= (ptVar5->token).constant) {
          iVar10 = __fprintf_chk(gfp,1,"%s",buf);
          local_22c = local_22c + iVar10;
        }
        else {
          iVar10 = __fprintf_chk(gfp,1,&DAT_08077a03,buf);
          local_22c = local_22c + iVar10;
        }
      }
      else if (kVar2 == OPERATOR) {
        switch((ptVar5->token).variable) {
        default:
          pcVar8 = "(unknown operator)";
          break;
        case 1:
          pcVar8 = " + ";
          break;
        case 2:
          pcVar8 = " - ";
          break;
        case 3:
          pcVar8 = "*";
          break;
        case 4:
        case 9:
          pcVar8 = "/";
          break;
        case 5:
          pcVar8 = " % ";
          break;
        case 6:
          if ((int_flag != 0) || (pcVar8 = ", ", language == PYTHON)) {
            pcVar8 = "**";
          }
          break;
        case 7:
          local_244 = local_244 + 1;
          pcVar8 = "";
        }
        iVar10 = __fprintf_chk(gfp,1,"%s",pcVar8);
        local_22c = local_22c + iVar10;
      }
      local_244 = local_244 + 1;
    } while (*np != local_244 && local_244 <= *np);
    for (j = local_224 - iVar4; 0 < j; j = j + -1) {
      iVar4 = __fprintf_chk(gfp,1,&DAT_080779a8);
      local_22c = local_22c + iVar4;
    }
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_22c;
}



// WARNING: Unknown calling convention

int list_c_equation(int en,language_list language,int int_flag)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int len;
  
  iVar3 = 0;
  if (0 < n_lhs[en]) {
    iVar3 = list_code(lhs[en],n_lhs + en,language,int_flag);
    if (n_rhs[en] != 0) {
      iVar1 = __fprintf_chk(gfp,1,&DAT_080759cf);
      iVar2 = list_code(rhs[en],n_rhs + en,language,int_flag);
      iVar3 = iVar3 + iVar2 + iVar1;
    }
    if (language + 0xffffffff < 2) {
      iVar1 = __fprintf_chk(gfp,1,&DAT_08077a56);
      iVar3 = iVar3 + iVar1;
    }
    __fprintf_chk(gfp,1,"\n");
  }
  return iVar3;
}



// WARNING: Unknown calling convention

void set_color(int color)

{
  if (((gfp == stdout) && (cur_color != color)) && (color_flag != 0)) {
    if (html_flag == 0) {
      __printf_chk(1,&DAT_08077a47,bold_colors,carray[color % 6]);
    }
    else {
      if (-1 < cur_color) {
        __printf_chk(1,"</font>");
      }
      if (bold_colors == 0) {
        __printf_chk(1,"<font color=\"%s\">",html_carray[color % 7]);
      }
      else {
        __printf_chk(1,"<font color=\"%s\">",bright_html_carray[color % 7]);
      }
    }
    cur_color = color;
  }
  return;
}



// WARNING: Unknown calling convention

int flist_recurse(token_type *p1,int n,int out_flag,int line,int pos,int cur_level,int *highp,
                 int *lowp)

{
  double dVar1;
  int iVar2;
  int iVar3;
  kind_list kVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int i;
  char *cp;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  token_type *ptVar15;
  int iVar16;
  uint uVar17;
  int j;
  int i1;
  int pos_00;
  int iVar18;
  int level;
  int html_out;
  int len;
  int iVar19;
  int len_div;
  int in_GS_OFFSET;
  bool bVar20;
  bool bVar21;
  uint local_244;
  uint local_23c;
  uint local_230;
  int local_228;
  uint local_224;
  int local_220;
  int local_21c;
  int local_218;
  char buf [500];
  
  iVar2 = *(int *)(in_GS_OFFSET + 0x14);
  *highp = line;
  *lowp = line;
  local_228 = 0;
  if (0 < n) {
    bVar20 = out_flag != 0;
    bVar6 = line == cur_line;
    bVar5 = bVar20 && bVar6;
    bVar21 = html_flag == 0;
    bVar7 = gfp != stdout;
    if (bVar5) {
      set_color(cur_level + -1);
      for (; cur_pos < pos; cur_pos = cur_pos + 1) {
        __fprintf_chk(gfp,1,&DAT_08077a28);
      }
    }
    local_228 = 0;
    local_230 = 0;
    local_244 = 0xffffffff;
    uVar8 = 0;
    iVar19 = cur_level;
    local_23c = n;
    do {
      do {
        ptVar15 = p1 + uVar8;
        if ((ptVar15->kind == OPERATOR) && ((ptVar15->token).variable == 4)) {
          iVar18 = ptVar15->level;
          iVar16 = uVar8 - 2;
          if ((0 < iVar16) && (iVar18 <= p1[iVar16].level)) {
            piVar10 = &p1[uVar8 - 4].level;
            do {
              iVar16 = iVar16 + -2;
              if (iVar16 < 1) break;
              iVar9 = *piVar10;
              piVar10 = piVar10 + -8;
            } while (iVar18 <= iVar9);
          }
          uVar17 = iVar16 + 1;
          if ((((int)local_244 < 0) || ((int)uVar17 < (int)local_23c)) ||
             ((uVar17 == local_23c && (local_23c = uVar17, iVar18 < p1[local_244].level)))) {
            local_244 = uVar8;
            local_23c = uVar17;
          }
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < n);
      while( true ) {
        if (local_23c == local_230) {
          local_224 = iVar19 - p1[local_244].level;
          local_220 = ((local_224 ^ (int)local_224 >> 0x1f) - ((int)local_224 >> 0x1f)) + -1;
        }
        else {
          local_224 = iVar19 - p1[local_230].level;
          local_220 = (local_224 ^ (int)local_224 >> 0x1f) - ((int)local_224 >> 0x1f);
        }
        if (0 < local_220) {
          i1 = 1;
          iVar16 = iVar19;
          do {
            local_228 = local_228 + 1;
            if ((int)local_224 < 1) {
              iVar19 = iVar16 + 1;
              if (bVar5) {
                set_color(iVar16);
                __fprintf_chk(gfp,1,"(");
              }
            }
            else {
              iVar19 = iVar16 + -1;
              if (bVar5) {
                __fprintf_chk(gfp,1,&DAT_080779a8);
                set_color(iVar16 + -2);
              }
            }
            i1 = i1 + 1;
            iVar16 = iVar19;
          } while (i1 <= local_220);
        }
        if (local_23c == local_230) break;
        ptVar15 = p1 + local_230;
        kVar4 = ptVar15->kind;
        if (kVar4 == VARIABLE) {
          iVar16 = list_var((ptVar15->token).variable,0);
          local_228 = local_228 + iVar16;
          if (bVar20 && bVar6) {
            __fprintf_chk(gfp,1,"%s",var_str);
          }
        }
        else if (kVar4 == CONSTANT) {
          dVar1 = (ptVar15->token).constant;
          if (dVar1 == 0.0) {
            dVar1 = 0.0;
            (ptVar15->token).constant = 0.0;
LAB_0806ee05:
            if (finance_option == 0) {
              if ((0.0 <= dVar1) || (negate_highest_precedence != 0)) {
                iVar16 = __snprintf_chk(buf,500,1,500,&DAT_080759b8,precision,dVar1);
                local_228 = local_228 + iVar16;
              }
              else {
                iVar16 = __snprintf_chk(buf,500,1,500,"(%.*g)",precision,dVar1);
                local_228 = local_228 + iVar16;
              }
            }
            else if (0.0 <= dVar1) {
              iVar16 = __snprintf_chk(buf,500,1,500,&DAT_08077a5f,finance_option,dVar1);
              local_228 = local_228 + iVar16;
            }
            else {
              iVar16 = __snprintf_chk(buf,500,1,500,"(%.*f)",finance_option,dVar1);
              local_228 = local_228 + iVar16;
            }
          }
          else {
            if ((dVar1 != -1.0) ||
               ((((local_230 != 0 && (ptVar15->level <= p1[local_230 - 1].level)) ||
                 (n <= (int)(local_230 + 1))) ||
                ((ptVar15->level != p1[local_230 + 1].level ||
                 (p1[local_230 + 1].token.variable != 3)))))) goto LAB_0806ee05;
            iVar16 = __snprintf_chk(buf,500,1,500,"-");
            local_228 = local_228 + iVar16;
            local_230 = local_230 + 1;
          }
          if (bVar5) {
            __fprintf_chk(gfp,1,"%s",buf);
          }
        }
        else if (kVar4 == OPERATOR) {
          switch((ptVar15->token).variable) {
          default:
            local_228 = local_228 + 0x12;
            pcVar13 = "(unknown operator)";
            break;
          case 1:
            local_228 = local_228 + 3;
            pcVar13 = " + ";
            break;
          case 2:
            pcVar13 = " &minus; ";
            if (bVar21 || bVar7) {
              pcVar13 = " - ";
            }
            local_228 = local_228 + 3;
            break;
          case 3:
            pcVar13 = "&middot;";
            if (bVar21 || bVar7) {
              pcVar13 = "*";
            }
            local_228 = local_228 + 1;
            break;
          case 4:
            local_228 = local_228 + 1;
            pcVar13 = "/";
            break;
          case 5:
            local_228 = local_228 + 3;
            pcVar13 = " % ";
            break;
          case 6:
            if (power_starstar == 0) {
              local_228 = local_228 + 1;
              pcVar13 = "^";
            }
            else {
              local_228 = local_228 + 2;
              pcVar13 = "**";
            }
            break;
          case 7:
            local_228 = local_228 + 1;
            local_230 = local_230 + 1;
            pcVar13 = "!";
            break;
          case 9:
            local_228 = local_228 + 2;
            pcVar13 = "//";
          }
          if (bVar20 && bVar6) {
            __fprintf_chk(gfp,1,"%s",pcVar13);
          }
        }
        local_230 = local_230 + 1;
        if (n <= (int)local_230) goto LAB_0806f0f3;
      }
      iVar16 = p1[local_244].level;
      pos_00 = local_228 + pos;
      iVar9 = flist_recurse(p1 + local_23c,local_244 - local_23c,0,line + 1,pos_00,iVar16,&local_218
                            ,&local_21c);
      iVar18 = local_21c;
      uVar8 = local_244 + 2;
      if (((int)uVar8 < n) && (iVar16 < p1[uVar8].level)) {
        piVar10 = &p1[local_244 + 4].level;
        do {
          uVar8 = uVar8 + 2;
          if (n <= (int)uVar8) break;
          iVar3 = *piVar10;
          piVar10 = piVar10 + 8;
        } while (iVar16 < iVar3);
      }
      iVar11 = flist_recurse(p1 + local_244 + 1,uVar8 + ~local_244,0,line + -1,pos_00,iVar16,
                             &local_218,&local_21c);
      iVar3 = local_218;
      iVar14 = iVar9;
      if (iVar9 <= iVar11) {
        iVar14 = iVar11;
      }
      iVar12 = 0;
      if (iVar9 < iVar14) {
        iVar12 = (iVar14 - iVar9) / 2;
      }
      flist_recurse(p1 + local_23c,local_244 - local_23c,out_flag,(line + 1) * 2 - iVar18,
                    iVar12 + pos_00,iVar16,&local_218,&local_21c);
      iVar18 = local_218;
      if (local_218 <= *highp) {
        iVar18 = *highp;
      }
      *highp = iVar18;
      iVar18 = local_21c;
      if (*lowp == local_21c || *lowp < local_21c) {
        iVar18 = *lowp;
      }
      *lowp = iVar18;
      if (bVar5) {
        set_color(iVar16 + -1);
        if (0 < iVar14) {
          iVar18 = 0;
          do {
            if (bVar21 || bVar7) {
              __fprintf_chk(gfp,1,"-");
            }
            else {
              __fprintf_chk(gfp,1,&DAT_08077a50);
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < iVar14);
        }
        set_color(iVar19 + -1);
      }
      iVar18 = 0;
      if (iVar11 < iVar14) {
        iVar18 = (iVar14 - iVar11) / 2;
      }
      flist_recurse(p1 + local_244 + 1,uVar8 + ~local_244,out_flag,(line + -1) * 2 - iVar3,
                    iVar18 + pos_00,iVar16,&local_218,&local_21c);
      iVar16 = local_218;
      if (local_218 <= *highp) {
        iVar16 = *highp;
      }
      *highp = iVar16;
      iVar16 = local_21c;
      if (*lowp == local_21c || *lowp < local_21c) {
        iVar16 = *lowp;
      }
      *lowp = iVar16;
      local_228 = local_228 + iVar14;
      if (n <= (int)uVar8) goto LAB_0806f0f3;
      local_244 = 0xffffffff;
      local_23c = n;
      local_230 = uVar8;
    } while( true );
  }
  goto LAB_0806f16f;
LAB_0806f0f3:
  iVar16 = iVar19 - cur_level;
  if (0 < iVar16) {
    iVar19 = iVar19 + -2;
    do {
      local_228 = local_228 + 1;
      iVar16 = iVar16 + -1;
      if (bVar20 && bVar6) {
        __fprintf_chk(gfp,1,&DAT_080779a8);
        if (iVar16 < 1) goto LAB_0806f163;
        set_color(iVar19);
      }
      else if (iVar16 < 1) goto LAB_0806f16f;
      iVar19 = iVar19 + -1;
    } while( true );
  }
  if (bVar5) {
LAB_0806f163:
    cur_pos = cur_pos + local_228;
  }
LAB_0806f16f:
  if (iVar2 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_228;
}



// WARNING: Unknown calling convention

int list_string_sub(token_type *p1,int n,int outflag,char *string,int export_flag)

{
  int iVar1;
  char cVar2;
  kind_list kVar3;
  bool bVar4;
  int iVar5;
  token_type *ptVar6;
  int len;
  uint uVar7;
  int iVar8;
  int i1;
  int iVar9;
  undefined2 *puVar10;
  char *cp;
  char *pcVar11;
  int j;
  int in_GS_OFFSET;
  bool bVar12;
  byte bVar13;
  double dVar14;
  int local_42c;
  int local_414;
  int local_410;
  char buf2 [500];
  char buf [500];
  
  bVar13 = 0;
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  bVar4 = export_flag == 0 && outflag != 0;
  if (string != (char *)0x0) {
    *string = '\0';
  }
  bVar12 = high_prec == 0;
  iVar5 = min_level(p1,n);
  local_414 = 0;
  if (0 < n) {
    local_42c = 0;
    local_410 = iVar5;
    do {
      ptVar6 = p1 + local_42c;
      uVar7 = local_410 - ptVar6->level;
      iVar8 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
      if (0 < iVar8) {
        puVar10 = (undefined2 *)(string + local_414);
        iVar9 = 1;
        do {
          local_414 = local_414 + 1;
          if ((int)uVar7 < 1) {
            local_410 = local_410 + 1;
            if (bVar4) {
              set_color(local_410 - iVar5);
            }
            if (string != (char *)0x0) {
              *puVar10 = 0x28;
            }
            if (outflag != 0) {
              __fprintf_chk(gfp,1,"%s","(");
            }
          }
          else {
            local_410 = local_410 + -1;
            if (string != (char *)0x0) {
              *puVar10 = 0x29;
            }
            if (outflag != 0) {
              __fprintf_chk(gfp,1,"%s",&DAT_080779a8);
            }
            if (bVar4) {
              set_color(local_410 - iVar5);
            }
          }
          iVar9 = iVar9 + 1;
          puVar10 = (undefined2 *)((int)puVar10 + 1);
        } while (iVar9 <= iVar8);
      }
      kVar3 = ptVar6->kind;
      if (kVar3 == VARIABLE) {
        list_var((ptVar6->token).variable,-export_flag);
        if (string != (char *)0x0) {
          strcpy(string + local_414,var_str);
        }
        if (outflag != 0) {
          __fprintf_chk(gfp,1,"%s",var_str);
        }
        uVar7 = 0xffffffff;
        pcVar11 = var_str;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        local_414 = local_414 + -1 + ~uVar7;
      }
      else if (kVar3 == CONSTANT) {
        if ((ptVar6->token).constant == 0.0) {
          (ptVar6->token).constant = 0.0;
        }
        if (export_flag == 3) {
          dVar14 = (ptVar6->token).constant;
          __snprintf_chk(buf,500,1,500,"%#.*g",0xf,dVar14);
          trim_zeros(buf);
        }
        else if ((export_flag == 0) && (high_prec == 0)) {
          if (finance_option == 0) {
            dVar14 = (ptVar6->token).constant;
            if ((0.0 <= dVar14) || (negate_highest_precedence != 0)) {
              __snprintf_chk(buf,500,1,500,&DAT_080759b8,precision,dVar14);
            }
            else {
              __snprintf_chk(buf,500,1,500,"(%.*g)",precision,dVar14);
            }
            if (string != (char *)0x0) {
              strcpy(string + local_414,buf);
            }
            if (outflag != 0) {
              __fprintf_chk(gfp,1,"%s",buf);
            }
            uVar7 = 0xffffffff;
            pcVar11 = buf;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar2 = *pcVar11;
              pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
            } while (cVar2 != '\0');
            local_414 = local_414 + -1 + ~uVar7;
            goto LAB_0806f889;
          }
          dVar14 = (ptVar6->token).constant;
          __snprintf_chk(buf,500,1,500,&DAT_08077a5f,finance_option,dVar14);
        }
        else {
          dVar14 = (ptVar6->token).constant;
          __snprintf_chk(buf,500,1,500,&DAT_080759b8,(-(uint)bVar12 & 0xfffffffb) + 0x14,dVar14);
        }
        if (0.0 <= (ptVar6->token).constant) {
          if (string != (char *)0x0) {
            strcpy(string + local_414,buf);
          }
          if (outflag != 0) {
            __fprintf_chk(gfp,1,"%s",buf);
          }
          uVar7 = 0xffffffff;
          pcVar11 = buf;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
          } while (cVar2 != '\0');
          local_414 = local_414 + -1 + ~uVar7;
        }
        else {
          __snprintf_chk(buf2,500,1,500,&DAT_08077a03,buf,dVar14);
          if (string != (char *)0x0) {
            strcpy(string + local_414,buf2);
          }
          if (outflag != 0) {
            __fprintf_chk(gfp,1,"%s",buf2);
          }
          uVar7 = 0xffffffff;
          pcVar11 = buf2;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
          } while (cVar2 != '\0');
          local_414 = local_414 + -1 + ~uVar7;
        }
      }
      else if (kVar3 == OPERATOR) {
        switch((ptVar6->token).variable) {
        default:
          pcVar11 = "(unknown operator)";
          break;
        case 1:
          pcVar11 = " + ";
          break;
        case 2:
          pcVar11 = " - ";
          break;
        case 3:
          pcVar11 = "*";
          break;
        case 4:
          pcVar11 = "/";
          break;
        case 5:
          pcVar11 = " % ";
          break;
        case 6:
          if ((power_starstar != 0) || (pcVar11 = "^", export_flag == 3)) {
            pcVar11 = "**";
          }
          break;
        case 7:
          local_42c = local_42c + 1;
          pcVar11 = "!";
          break;
        case 9:
          pcVar11 = "//";
        }
        if (string != (char *)0x0) {
          strcpy(string + local_414,pcVar11);
        }
        if (outflag != 0) {
          __fprintf_chk(gfp,1,"%s",pcVar11);
        }
        uVar7 = 0xffffffff;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        local_414 = local_414 + -1 + ~uVar7;
      }
LAB_0806f889:
      local_42c = local_42c + 1;
    } while (local_42c < n);
    j = local_410 - iVar5;
    if (0 < j) {
      puVar10 = (undefined2 *)(string + local_414);
      iVar5 = j;
      do {
        if (string != (char *)0x0) {
          *puVar10 = 0x29;
        }
        if (outflag != 0) {
          __fprintf_chk(gfp,1,"%s",&DAT_080779a8);
        }
        iVar5 = iVar5 + -1;
        if (bVar4) {
          set_color(iVar5);
        }
        puVar10 = (undefined2 *)((int)puVar10 + 1);
      } while (0 < iVar5);
      local_414 = j + local_414;
    }
  }
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return local_414;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention

int list_string(token_type *p1,int n,char *string,int export_flag)

{
  int iVar1;
  
  iVar1 = list_string_sub(p1,n,0,string,export_flag);
  return iVar1;
}



// WARNING: Unknown calling convention

char * list_expression(token_type *p1,int n,int export_flag)

{
  int len;
  int iVar1;
  char *string;
  char *cp;
  
  string = (char *)0x0;
  if (0 < n) {
    iVar1 = list_string(p1,n,(char *)0x0,export_flag);
    string = (char *)malloc(iVar1 + 1);
    if (string == (char *)0x0) {
      error("Out of memory (can\'t malloc(3)).");
    }
    else {
      list_string(p1,n,string,export_flag);
    }
  }
  return string;
}



// WARNING: Unknown calling convention

char * list_equation(int n,int export_flag)

{
  char cVar1;
  int iVar2;
  int len;
  int iVar3;
  uint uVar4;
  char *string;
  char *cp;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  string = (char *)0x0;
  if (0 < n_lhs[n]) {
    iVar2 = list_string(lhs[n],n_lhs[n],(char *)0x0,export_flag);
    if (n_rhs[n] != 0) {
      iVar3 = list_string(rhs[n],n_rhs[n],(char *)0x0,export_flag);
      iVar2 = iVar3 + iVar2 + 3;
    }
    string = (char *)malloc(iVar2 + 2);
    if (string == (char *)0x0) {
      error("Out of memory (can\'t malloc(3)).");
    }
    else {
      list_string(lhs[n],n_lhs[n],string,export_flag);
      if (n_rhs[n] != 0) {
        uVar4 = 0xffffffff;
        pcVar5 = string;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
        } while (cVar1 != '\0');
        *(undefined4 *)(string + (~uVar4 - 1)) = 0x203d20;
        uVar4 = 0xffffffff;
        pcVar5 = string;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
        } while (cVar1 != '\0');
        list_string(rhs[n],n_rhs[n],string + (~uVar4 - 1),export_flag);
      }
      if (export_flag == 1) {
        uVar4 = 0xffffffff;
        pcVar5 = string;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
        } while (cVar1 != '\0');
        *(undefined2 *)(string + (~uVar4 - 1)) = 0x3b;
      }
    }
  }
  return string;
}



// WARNING: Unknown calling convention

int list_proc(token_type *p1,int n,int export_flag)

{
  int iVar1;
  
  iVar1 = list_string_sub(p1,n,1,(char *)0x0,export_flag);
  return iVar1;
}



// WARNING: Unknown calling convention

void list_debug(int level,token_type *p1,int n1,token_type *p2,int n2)

{
  if (level <= debug_level) {
    __fprintf_chk(gfp,1,"level %d: ",level);
    list_proc(p1,n1,0);
    if ((p2 != (token_type *)0x0) && (0 < n2)) {
      __fprintf_chk(gfp,1,&DAT_080759cf,level);
      list_proc(p2,n2,0);
    }
    __fprintf_chk(gfp,1,"\n",level);
  }
  return;
}



// WARNING: Unknown calling convention

int list1_sub(int n,int export_flag)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int len;
  
  iVar3 = 0;
  if (0 < n_lhs[n]) {
    if ((export_flag == 0) && (high_prec == 0)) {
      iVar1 = __fprintf_chk(gfp,1,"#%d: ",n + 1);
    }
    else {
      iVar1 = 0;
    }
    iVar3 = list_proc(lhs[n],n_lhs[n],export_flag);
    iVar3 = iVar3 + iVar1;
    if (n_rhs[n] != 0) {
      iVar1 = __fprintf_chk(gfp,1,&DAT_080759cf);
      iVar2 = list_proc(rhs[n],n_rhs[n],export_flag);
      iVar3 = iVar3 + iVar2 + iVar1;
    }
    if (export_flag == 1) {
      iVar1 = __fprintf_chk(gfp,1,&DAT_08077a56);
      iVar3 = iVar3 + iVar1;
    }
    __fprintf_chk(gfp,1,"\n");
  }
  return iVar3;
}



// WARNING: Unknown calling convention

void default_color(void)

{
  set_color(0);
  return;
}



// WARNING: Unknown calling convention

int flist_sub(token_type *p1,int n,int out_flag,int pos,int *highp,int *lowp)

{
  int iVar1;
  int i;
  
  iVar1 = flist_recurse(p1,n,out_flag,0,pos,1,highp,lowp);
  if (out_flag != 0) {
    default_color();
  }
  return iVar1;
}



// WARNING: Unknown calling convention

int flist_equation(int n)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int len3;
  int *piVar5;
  uint uVar6;
  int sind;
  int n_00;
  int pos;
  int len;
  int len2;
  char *pcVar7;
  int in_GS_OFFSET;
  byte bVar8;
  char *pcVar9;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  char buf [50];
  
  bVar8 = 0;
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  local_58 = 0;
  local_5c = 0;
  local_70 = 0;
  if (n_lhs[n] < 1) goto LAB_0807020c;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  pcVar9 = (char *)0x32;
  local_70 = __snprintf_chk(buf,0x32,1,0x32,"#%d: ",n + 1);
  cur_line = 0;
  cur_pos = 0;
  n_00 = n_rhs[n];
  iVar3 = flist_sub(lhs[n],n_lhs[n],0,0,&local_60,&local_64);
  local_70 = local_70 + iVar3;
  iVar4 = 0;
  iVar3 = 0;
  if (n_rhs[n] != 0) {
    local_70 = local_70 + 3;
    do {
      iVar3 = flist_sub(rhs[n],n_00,0,0,&local_58,&local_5c);
      if ((((screen_columns == 0) || (gfp != stdout)) || (iVar3 + local_70 < screen_columns)) ||
         (n_00 < 1)) goto LAB_0806ff4f;
      n_00 = n_00 + -1;
      if (0 < n_00) {
        piVar5 = &rhs[n][n_00].level;
        do {
          if (((*piVar5 == 1) && (((token_type *)(piVar5 + -1))->kind == OPERATOR)) &&
             (((uint)((storage_type *)(piVar5 + 1))->variable < 6 &&
              ((1 << (*(byte *)(piVar5 + 1) & 0x1f) & 0x26U) != 0)))) break;
          n_00 = n_00 + -1;
          piVar5 = piVar5 + -4;
        } while (0 < n_00);
      }
    } while( true );
  }
  goto LAB_0806ff9b;
LAB_0806ff4f:
  if (local_60 < local_58) {
    local_60 = local_58;
  }
  if (local_5c < local_64) {
    local_64 = local_5c;
  }
  iVar4 = flist_sub(rhs[n] + n_00,n_rhs[n] - n_00,0,0,&local_68,&local_6c);
LAB_0806ff9b:
  iVar3 = iVar3 + local_70;
  local_70 = iVar4;
  if (iVar4 <= iVar3) {
    local_70 = iVar3;
  }
  if (((screen_columns == 0) || (gfp != stdout)) || (local_70 < screen_columns)) {
    __fprintf_chk(gfp,1,"\n");
    cur_line = local_60;
    if (local_64 <= local_60) {
      do {
        cur_pos = 0;
        if (cur_line == 0) {
          pcVar9 = buf;
          iVar3 = __fprintf_chk(gfp,1,"%s",pcVar9);
          cur_pos = cur_pos + iVar3;
        }
        uVar6 = 0xffffffff;
        pcVar7 = buf;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
        } while (cVar2 != '\0');
        iVar3 = flist_sub(lhs[n],n_lhs[n],1,~uVar6 - 1,&local_58,&local_5c);
        if (n_rhs[n] != 0) {
          if (cur_line == 0) {
            pcVar9 = " = ";
            iVar4 = __fprintf_chk(gfp,1,"%s",&DAT_080759cf);
            cur_pos = cur_pos + iVar4;
          }
          flist_sub(rhs[n],n_00,1,~uVar6 + 2 + iVar3,&local_58,&local_5c);
        }
        __fprintf_chk(gfp,1,"\n",pcVar9);
        cur_line = cur_line + -1;
      } while (local_64 <= cur_line);
    }
    if (n_00 < n_rhs[n]) {
      __fprintf_chk(gfp,1,"\n");
      cur_line = local_68;
      if (local_6c <= local_68) {
        do {
          cur_pos = 0;
          flist_sub(rhs[n] + n_00,n_rhs[n] - n_00,1,0,&local_58,&local_5c);
          __fprintf_chk(gfp,1,"\n");
          cur_line = cur_line + -1;
        } while (local_6c <= cur_line);
      }
    }
    __fprintf_chk(gfp,1,"\n");
  }
  else {
    local_70 = list1_sub(n,0);
    __fprintf_chk(gfp,1,"\n");
  }
LAB_0807020c:
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return local_70;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention

int list_sub(int n)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < n_lhs[n]) {
    make_fractions_and_group(n);
    if (factor_int_flag != 0) {
      factor_int_sub(n);
    }
    if (display2d == 0) {
      iVar1 = list1_sub(n,0);
    }
    else {
      iVar1 = flist_equation(n);
    }
  }
  return iVar1;
}



// WARNING: Unknown calling convention

void reset_attr(void)

{
  int iVar1;
  
  if ((color_flag != 0) && (-1 < cur_color)) {
    if (html_flag == 0) {
      __printf_chk(1,&DAT_08077a96);
    }
    else {
      __printf_chk(1,"</font>");
    }
  }
  cur_color = -1;
  iVar1 = fflush((FILE *)0x0);
  if (iVar1 != 0) {
    perror("fflush(3) call failed");
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x080703b8)
// WARNING: Removing unreachable block (ram,0x08070352)
// WARNING: Removing unreachable block (ram,0x080703b4)
// WARNING: Removing unreachable block (ram,0x080703ba)
// WARNING: Unknown calling convention

double gcd(double d1,double d2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int count;
  ushort in_FPUStatusWord;
  double remainder1;
  double larger;
  double local_14;
  
  iVar4 = __finite(d1);
  if ((iVar4 == 0) || (iVar4 = __finite(d2), iVar4 == 0)) {
    dVar3 = 0.0;
  }
  else {
    dVar1 = ABS(d1);
    dVar2 = ABS(d2);
    dVar3 = dVar2;
    if ((dVar1 != 0.0) && (dVar3 = dVar1, dVar2 != 0.0)) {
      if (dVar2 <= dVar1 || dVar1 != dVar2) {
        dVar3 = dVar2;
      }
      if (dVar2 > dVar1 || dVar1 == dVar2) {
        dVar1 = dVar2;
      }
      dVar2 = dVar1 * epsilon;
      if ((dVar3 <= dVar2) || (1000000000000000.0 <= dVar1)) {
        dVar3 = 0.0;
      }
      else {
        count = 1;
        do {
          local_14 = dVar3;
          do {
            dVar1 = dVar1 - (dVar1 / local_14) * local_14;
          } while ((in_FPUStatusWord & 0x400) != 0);
          dVar3 = ABS(dVar1);
          if ((dVar3 <= dVar2) || (ABS(local_14 - dVar3) <= dVar2)) {
            if ((dVar3 != 0.0) && (local_14 <= dVar2 * 100.0)) {
              return 0.0;
            }
            return local_14;
          }
          count = count + 1;
          in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
          dVar1 = local_14;
        } while (count != 0x32);
        dVar3 = 0.0;
      }
    }
  }
  return dVar3;
}



// WARNING: Removing unreachable block (ram,0x080704d1)
// WARNING: Removing unreachable block (ram,0x08070491)
// WARNING: Removing unreachable block (ram,0x08070495)
// WARNING: Removing unreachable block (ram,0x08070497)
// WARNING: Removing unreachable block (ram,0x080704d5)
// WARNING: Removing unreachable block (ram,0x080704d7)
// WARNING: Unknown calling convention

double gcd_verified(double d1,double d2)

{
  ushort in_FPUStatusWord;
  double dVar1;
  double local_14;
  
  local_14 = gcd(d1,d2);
  if (local_14 != 0.0) {
    dVar1 = d1 / local_14;
    do {
      dVar1 = dVar1 - (dVar1 / 1.0) * 1.0;
    } while ((in_FPUStatusWord & 0x400) != 0);
    if (dVar1 == 0.0) {
      dVar1 = d2 / local_14;
      do {
        dVar1 = dVar1 - (dVar1 / 1.0) * 1.0;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (dVar1 == 0.0) {
        dVar1 = gcd(d1 / local_14,d2 / local_14);
        if (dVar1 == 1.0) {
          return local_14;
        }
        return 0.0;
      }
    }
    local_14 = 0.0;
  }
  return local_14;
}



// WARNING: Unknown calling convention

double my_round(double d1)

{
  undefined8 local_14;
  
  local_14 = d1;
  if (d1 < 0.0) {
    modf(d1 - 0.5,(double *)&local_14);
  }
  else {
    modf(d1 + 0.5,(double *)&local_14);
  }
  return local_14;
}



// WARNING: Removing unreachable block (ram,0x080705bb)
// WARNING: Removing unreachable block (ram,0x080705c2)
// WARNING: Removing unreachable block (ram,0x080705c4)
// WARNING: Unknown calling convention

int f_to_fraction(double d,double *numeratorp,double *denominatorp)

{
  double dVar1;
  int iVar2;
  ushort in_FPUStatusWord;
  double k4;
  double dVar3;
  double local_24;
  double local_1c;
  
  *numeratorp = d;
  *denominatorp = 1.0;
  iVar2 = __finite(d);
  dVar1 = small_epsilon;
  dVar3 = d;
  if (iVar2 != 0) {
    do {
      dVar3 = dVar3 - (dVar3 / 1.0) * 1.0;
    } while ((in_FPUStatusWord & 0x400) != 0);
    if (dVar3 == 0.0) {
      return 1;
    }
    dVar3 = my_round(d);
    if ((dVar3 != 0.0) && (ABS(dVar3 - d) <= ABS(d) * dVar1)) {
      *numeratorp = dVar3;
      return 1;
    }
    dVar3 = gcd(1.0,d);
    if (epsilon < dVar3) {
      local_24 = my_round(d / dVar3);
      local_1c = my_round(1.0 / dVar3);
      if (((ABS(local_24) < 1000000000000.0) && (local_1c < 1000000000000.0)) && (2.0 <= local_1c))
      {
        dVar3 = gcd(local_24,local_1c);
        if (1.0 < dVar3) {
          local_24 = local_24 / dVar3;
          local_1c = local_1c / dVar3;
        }
        if (ABS(local_24 / local_1c - d) <= ABS(local_24 / local_1c) * small_epsilon) {
          *numeratorp = local_24;
          *denominatorp = local_1c;
          return 1;
        }
      }
    }
  }
  return 0;
}



// WARNING: Unknown calling convention

int make_fractions(token_type *equation,int *np)

{
  token_type *ptVar1;
  int iVar2;
  int iVar3;
  token_type *ptVar4;
  bool bVar5;
  int iVar6;
  token_type *ptVar7;
  int iVar8;
  int k;
  uint uVar9;
  uint uVar10;
  int i;
  int j;
  int level;
  int *piVar11;
  token_type *ptVar12;
  int local_38;
  double local_2c;
  double local_24 [2];
  
  uVar10 = 0;
  local_38 = 0;
  if (0 < *np) {
    do {
      ptVar1 = equation + uVar10;
      if (((ptVar1->kind == CONSTANT) &&
          (((iVar2 = ptVar1->level, (int)uVar10 < 1 || (equation[uVar10 - 1].level != iVar2)) ||
           (equation[uVar10 - 1].token.variable != 4)))) &&
         (iVar6 = f_to_fraction((ptVar1->token).constant,local_24,&local_2c), iVar6 != 0)) {
        if (local_2c == 1.0) {
          (ptVar1->token).constant = local_24[0];
        }
        else {
          if (n_tokens < *np + 2) {
            error_huge();
          }
          iVar6 = *np;
          bVar5 = 1 < iVar6;
          if (((int)(uVar10 + 1) < iVar6) && (iVar3 = equation[uVar10 + 1].level, iVar3 == iVar2)) {
            if (equation[uVar10 + 1].token.variable != 3) {
              bVar5 = equation[uVar10 + 1].token.variable != 4 && bVar5;
              goto LAB_0807095b;
            }
            local_38 = uVar10 + 3;
            if (local_38 < iVar6) {
              iVar8 = equation[local_38].level;
              if (iVar2 <= iVar8) {
                ptVar4 = equation + uVar10 + 5;
                ptVar12 = equation + local_38;
                do {
                  ptVar7 = ptVar4;
                  if (((iVar2 == iVar8) && ((ptVar12->token).variable == 4)) ||
                     (local_38 = local_38 + 2, iVar6 <= local_38)) break;
                  iVar8 = ptVar7->level;
                  ptVar4 = ptVar7 + 2;
                  ptVar12 = ptVar7;
                } while (iVar2 <= iVar8);
              }
            }
            if (local_24[0] == 1.0) {
              memmove(ptVar1,equation + uVar10 + 2,((local_38 - uVar10) + -2) * 0x10);
              local_38 = local_38 + -2;
            }
            else {
              (ptVar1->token).constant = local_24[0];
              memmove(equation + local_38 + 2,equation + local_38,(*np - local_38) * 0x10);
              *np = *np + 2;
            }
            ptVar1 = equation + local_38;
            ptVar1->level = iVar3;
            ptVar1->kind = OPERATOR;
            (ptVar1->token).variable = 4;
            ptVar1 = equation + local_38 + 1;
            ptVar1->level = iVar3;
            ptVar1->kind = CONSTANT;
            (ptVar1->token).constant = local_2c;
            if (local_24[0] == 1.0) {
              uVar10 = uVar10 - 2;
              local_38 = 1;
              goto LAB_080709f4;
            }
          }
          else {
LAB_0807095b:
            memmove(equation + uVar10 + 3,equation + uVar10 + 1,(~uVar10 + iVar6) * 0x10);
            *np = *np + 2;
            (ptVar1->token).constant = local_24[0];
            ptVar4 = equation + uVar10 + 1;
            ptVar4->level = iVar2;
            ptVar4->kind = OPERATOR;
            (ptVar4->token).variable = 4;
            iVar6 = uVar10 + 2;
            ptVar4 = equation + iVar6;
            ptVar4->level = iVar2;
            ptVar4->kind = CONSTANT;
            (ptVar4->token).constant = local_2c;
            if ((bVar5) && ((int)uVar10 <= iVar6)) {
              piVar11 = &ptVar1->level;
              uVar9 = uVar10;
              do {
                *piVar11 = *piVar11 + 1;
                uVar9 = uVar9 + 1;
                piVar11 = piVar11 + 4;
              } while ((int)uVar9 <= iVar6);
            }
          }
          local_38 = 1;
        }
      }
LAB_080709f4:
      uVar10 = uVar10 + 2;
    } while (*np != uVar10 && (int)uVar10 <= *np);
  }
  return local_38;
}



// WARNING: Unknown calling convention

double multiply_out_unique(void)

{
  double dVar1;
  int j;
  int iVar2;
  int i;
  double d;
  
  if (uno < 1) {
    dVar1 = 1.0;
  }
  else {
    iVar2 = 0;
    dVar1 = 1.0;
    do {
      if (0 < ucnt[iVar2]) {
        j = 0;
        do {
          dVar1 = dVar1 * unique[iVar2];
          j = j + 1;
        } while (j != ucnt[iVar2]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != uno);
  }
  return dVar1;
}



// WARNING: Unknown calling convention

int is_prime(void)

{
  uint uVar1;
  double value;
  double dVar2;
  
  dVar2 = multiply_out_unique();
  if ((dVar2 < 2.0) || (uno != 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)(ucnt[0] == 1);
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x08070e77)
// WARNING: Removing unreachable block (ram,0x08070d7d)
// WARNING: Removing unreachable block (ram,0x08070c5a)
// WARNING: Removing unreachable block (ram,0x08070f82)
// WARNING: Removing unreachable block (ram,0x08070f79)
// WARNING: Removing unreachable block (ram,0x08070f84)
// WARNING: Removing unreachable block (ram,0x08070fc2)
// WARNING: Removing unreachable block (ram,0x08070fba)
// WARNING: Removing unreachable block (ram,0x08070fc4)
// WARNING: Unknown calling convention

int fc_recurse(token_type *equation,int *np,int loc,int level,int level_code)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  token_type *ptVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  token_type *ptVar11;
  int iVar12;
  token_type *ptVar13;
  int *piVar14;
  int i;
  int j;
  storage_type *psVar15;
  int op;
  token_type *ptVar16;
  int k;
  ushort in_FPUStatusWord;
  ushort uVar17;
  ushort uVar18;
  double d;
  double dVar19;
  int local_70;
  int local_6c;
  uint local_64;
  uint local_5c;
  double local_4c;
  int local_2c;
  double local_24;
  
  local_5c = 0;
  iVar8 = loc;
  do {
    iVar9 = iVar8;
    if ((*np <= iVar9) || (equation[iVar9].level < level)) break;
    if (level < equation[iVar9].level) {
      uVar6 = fc_recurse(equation,np,iVar9,level + 1,level_code);
      local_5c = local_5c | uVar6;
      iVar8 = iVar9 + 1;
      if ((iVar8 < *np) && (level < equation[iVar8].level)) {
        piVar10 = &equation[iVar9 + 3].level;
        do {
          iVar8 = iVar8 + 2;
          if (*np <= iVar8) break;
          iVar9 = *piVar10;
          piVar10 = piVar10 + 8;
        } while (level < iVar9);
      }
    }
    else {
      iVar8 = iVar9 + 1;
    }
  } while( true );
  if (local_5c == 0) {
    uVar6 = level_code & 3;
    bVar5 = true;
    if (((uVar6 < 2) && (bVar5 = uVar6 != 0 && level == 1, uVar6 == 0 || level != 1)) ||
       (local_64 = 1, integer_coefficients == 0)) {
      local_64 = (uint)level_code >> 2 & 1;
    }
    local_6c = 0;
    local_70 = 0;
    bVar3 = true;
    bVar2 = true;
    dVar19 = 1.0;
    local_4c = 1.0;
    local_2c = loc;
LAB_08070e3e:
    iVar8 = *np;
    if (local_2c < iVar8) {
      ptVar16 = equation + local_2c;
      if (ptVar16->level < level) goto LAB_08070e65;
      if (level != ptVar16->level) {
        iVar9 = local_2c + 1;
        if (iVar9 < iVar8) {
          iVar12 = equation[iVar9].level;
          if (level < iVar12) {
            op = 0;
            ptVar13 = equation + local_2c + 3;
            ptVar11 = equation + iVar9;
            do {
              ptVar7 = ptVar13;
              if (iVar12 == level + 1) {
                op = (ptVar11->token).operatr;
              }
              iVar9 = iVar9 + 2;
              if (iVar8 <= iVar9) break;
              iVar12 = ptVar7->level;
              ptVar13 = ptVar7 + 2;
              ptVar11 = ptVar7;
            } while (level < iVar12);
            if (op - 3U < 2) {
              if (local_2c < iVar9) {
                piVar10 = &ptVar16->level;
                psVar15 = &equation[local_2c + -1].token;
                iVar8 = local_2c;
                do {
                  if ((*piVar10 == level + 1) && (((token_type *)(piVar10 + -1))->kind == CONSTANT))
                  {
                    if (local_2c == iVar9) {
                      return 0;
                    }
                    if ((local_2c < iVar8) && (psVar15->variable != 3)) {
                      return 0;
                    }
                    bVar4 = bVar3;
                    if (local_2c == loc) {
                      in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
                      bVar4 = false;
                      if (((storage_type *)(piVar10 + 1))->constant <= 0.0) {
                        bVar4 = bVar3;
                      }
                    }
                    dVar1 = ABS(((storage_type *)(piVar10 + 1))->constant);
                    local_2c = iVar9;
                    bVar3 = bVar4;
                    if (bVar2) {
                      bVar2 = false;
                      dVar19 = dVar1;
                      local_4c = dVar1;
                    }
                    else {
                      in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
                      if (dVar1 <= local_4c || local_4c != dVar1) {
                        local_4c = dVar1;
                      }
                      if ((local_64 != 0) && (dVar19 != 0.0)) {
                        dVar19 = gcd_verified(dVar1,dVar19);
                      }
                    }
                  }
                  iVar8 = iVar8 + 1;
                  piVar10 = piVar10 + 4;
                  psVar15 = psVar15 + 2;
                } while (iVar8 < iVar9);
              }
              if (local_2c == iVar9) goto LAB_08070e3e;
            }
          }
        }
        bVar4 = false;
        if (local_2c != loc) {
          bVar4 = bVar3;
        }
        bVar3 = bVar4;
        local_2c = iVar9;
        if (bVar2) {
          bVar2 = false;
          local_4c = 1.0;
          dVar19 = 1.0;
        }
        else {
          in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
          if (1.0 < local_4c) {
            local_4c = 1.0;
          }
          if ((local_64 != 0) && (dVar19 != 0.0)) {
            dVar19 = gcd_verified(1.0,dVar19);
          }
        }
        goto LAB_08070e3e;
      }
      if (ptVar16->kind == CONSTANT) {
        local_6c = local_6c + 1;
        dVar1 = (ptVar16->token).constant;
LAB_08070c0a:
        bVar4 = bVar3;
        if (local_2c == loc) {
          in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
          bVar4 = false;
          if (dVar1 <= 0.0) {
            bVar4 = bVar3;
          }
        }
        bVar3 = bVar4;
        dVar1 = ABS(dVar1);
        if (bVar2) {
          bVar2 = false;
          dVar19 = dVar1;
          local_4c = dVar1;
        }
        else {
          in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
          if (dVar1 <= local_4c || local_4c != dVar1) {
            local_4c = dVar1;
          }
          if ((local_64 != 0) && (dVar19 != 0.0)) {
            dVar19 = gcd_verified(dVar1,dVar19);
          }
        }
        local_2c = local_2c + 1;
      }
      else {
        if (ptVar16->kind != OPERATOR) {
          dVar1 = 1.0;
          goto LAB_08070c0a;
        }
        if ((ptVar16->token).variable == 1) {
          bVar3 = false;
        }
        else if ((ptVar16->token).variable != 2) {
          return 0;
        }
        local_70 = local_70 + 1;
        local_2c = local_2c + 1;
      }
      goto LAB_08070e3e;
    }
LAB_08070e65:
    if ((local_64 != 0) && (in_FPUStatusWord = in_FPUStatusWord & 0xfdff, dVar19 != 0.0)) {
      local_4c = dVar19;
    }
    if (((((!bVar2) && (local_70 != 0)) && (local_6c < 2)) &&
        ((bVar3 || (in_FPUStatusWord = in_FPUStatusWord & 0xfdff, local_4c != 1.0)))) &&
       ((uVar17 = in_FPUStatusWord & 0xfdff, local_4c != 0.0 &&
        (iVar8 = __finite(local_4c), iVar8 != 0)))) {
      if (bVar5) {
        iVar8 = loc;
        while( true ) {
          ptVar16 = equation + iVar8;
          if ((ptVar16->kind == CONSTANT) &&
             ((iVar9 = ptVar16->level, iVar9 == level ||
              (((iVar8 + 1 < *np && (iVar9 == level + 1)) &&
               ((iVar9 == equation[iVar8 + 1].level && (equation[iVar8 + 1].token.variable - 3U < 2)
                ))))))) {
            local_24 = (ptVar16->token).constant;
          }
          else {
            local_24 = 1.0;
          }
          uVar18 = uVar17;
          if ((local_64 == 0) && (uVar18 = uVar17 & 0xfdff, 1.0 <= local_4c)) break;
          uVar17 = uVar18 & 0xfdff;
          dVar19 = local_24;
          if (local_4c < 1.0) {
            do {
              dVar19 = dVar19 - (dVar19 / 1.0) * 1.0;
            } while ((uVar18 & 0x400) != 0);
            if (dVar19 != 0.0) goto LAB_08070fab;
LAB_08071028:
            local_4c = 1.0;
            goto LAB_0807102d;
          }
LAB_08070fab:
          do {
            local_24 = local_24 - (local_24 / local_4c) * local_4c;
          } while ((uVar18 & 0x400) != 0);
          if (local_24 != 0.0) goto LAB_08071028;
          iVar9 = iVar8 + 1;
          if (*np <= iVar9) goto LAB_0807102d;
          if (level < equation[iVar9].level) {
            piVar10 = &equation[iVar8 + 3].level;
            do {
              iVar9 = iVar9 + 2;
              if (*np <= iVar9) goto LAB_0807102d;
              iVar8 = *piVar10;
              piVar10 = piVar10 + 8;
            } while (level < iVar8);
          }
          if (equation[iVar9].level < level) goto LAB_0807102d;
          iVar8 = iVar9 + 1;
        }
        local_4c = 1.0;
      }
LAB_0807102d:
      if (bVar3) {
        local_4c = -local_4c;
      }
      if (local_4c != 1.0) {
        if (n_tokens < local_70 * 2 + 4 + *np) {
          error_huge();
        }
        iVar8 = *np;
        if ((loc < iVar8) && (ptVar16 = equation + loc, level <= ptVar16->level)) {
          ptVar13 = ptVar16;
          iVar9 = loc;
          do {
            if (ptVar13->kind != OPERATOR) {
              piVar10 = &equation[iVar9].level;
              piVar14 = &equation[iVar9 + 1].level;
              do {
                iVar8 = iVar9;
                *piVar10 = *piVar10 + 1;
                iVar9 = iVar8 + 1;
                if (*np <= iVar9) break;
                iVar12 = *piVar14;
                piVar10 = piVar10 + 4;
                piVar14 = piVar14 + 4;
              } while (level < iVar12);
              ptVar13 = equation + iVar9;
              memmove(equation + iVar8 + 3,ptVar13,(*np - iVar9) * 0x10);
              *np = *np + 2;
              ptVar13->level = level + 1;
              ptVar13->kind = OPERATOR;
              (ptVar13->token).variable = 4;
              iVar9 = iVar8 + 2;
              ptVar13 = equation + iVar9;
              ptVar13->level = level + 1;
              ptVar13->kind = CONSTANT;
              (ptVar13->token).constant = local_4c;
            }
            iVar9 = iVar9 + 1;
            iVar8 = *np;
          } while ((iVar9 < iVar8) && (ptVar13 = equation + iVar9, level <= ptVar13->level));
          if ((loc < iVar8) && (iVar9 = ptVar16->level, level <= iVar9)) {
            ptVar13 = equation + loc + 1;
            do {
              ptVar11 = ptVar13;
              ptVar16->level = iVar9 + 1;
              loc = loc + 1;
              iVar8 = *np;
              if (iVar8 <= loc) break;
              iVar9 = ptVar11->level;
              ptVar13 = ptVar11 + 1;
              ptVar16 = ptVar11;
            } while (level <= iVar9);
          }
        }
        ptVar16 = equation + loc;
        memmove(equation + loc + 2,ptVar16,(iVar8 - loc) * 0x10);
        *np = *np + 2;
        ptVar16->level = level;
        ptVar16->kind = OPERATOR;
        (ptVar16->token).variable = 3;
        ptVar16 = equation + loc + 1;
        ptVar16->level = level;
        ptVar16->kind = CONSTANT;
        (ptVar16->token).constant = local_4c;
        local_5c = 1;
      }
    }
  }
  else {
    local_5c = 1;
  }
  return local_5c;
}



// WARNING: Unknown calling convention

int factor_constants(token_type *equation,int *np,int level_code)

{
  int iVar1;
  
  iVar1 = 0;
  if (level_code != 3) {
    iVar1 = fc_recurse(equation,np,0,1,level_code);
  }
  return iVar1;
}



// WARNING: Unknown calling convention

void display_unique(void)

{
  uint uVar1;
  int iVar2;
  int i;
  double value;
  double dVar3;
  
  dVar3 = multiply_out_unique();
  __fprintf_chk(gfp,1,"%.0f = ",dVar3);
  iVar2 = 0;
  while (iVar2 < uno) {
    dVar3 = unique[iVar2];
    __fprintf_chk(gfp,1,&DAT_080779f8,dVar3);
    uVar1 = ucnt[iVar2];
    if (1 < (int)uVar1) {
      dVar3 = (double)(ulonglong)uVar1;
      __fprintf_chk(gfp,1,&DAT_08077c78,uVar1);
    }
    iVar2 = iVar2 + 1;
    if (iVar2 < uno) {
      __fprintf_chk(gfp,1,&DAT_08077c7c,dVar3);
    }
  }
  __fprintf_chk(gfp,1,"\n",dVar3);
  return;
}



// WARNING: Removing unreachable block (ram,0x080713ea)
// WARNING: Removing unreachable block (ram,0x080713e6)
// WARNING: Removing unreachable block (ram,0x080713ec)
// WARNING: Unknown calling convention

void try_factor(double arg)

{
  double dVar1;
  ushort in_FPUStatusWord;
  
  dVar1 = nn;
  do {
    do {
      dVar1 = dVar1 - (dVar1 / arg) * arg;
    } while ((in_FPUStatusWord & 0x400) != 0);
    in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
    if (dVar1 != 0.0) {
      return;
    }
    if ((uno < 1) || (unique[uno + -1] != arg)) {
      unique[uno] = arg;
      ucnt[uno] = 1;
      uno = uno + 1;
    }
    else {
      ucnt[uno + -1] = ucnt[uno + -1] + 1;
    }
    dVar1 = nn / arg;
    vv = SQRT(ABS(dVar1)) + 1.0;
    nn = dVar1;
  } while ((1.0 < dVar1) || (dVar1 < -1.0));
  return;
}



// WARNING: Removing unreachable block (ram,0x0807146c)
// WARNING: Removing unreachable block (ram,0x08071472)
// WARNING: Removing unreachable block (ram,0x08071474)
// WARNING: Unknown calling convention

int factor_one(double value)

{
  int i;
  ushort in_FPUStatusWord;
  double dVar1;
  double local_14;
  
  uno = 0;
  nn = value;
  if ((value != 0.0) && (dVar1 = value, ABS(value) < 1000000000000000.0)) {
    do {
      dVar1 = dVar1 - (dVar1 / 1.0) * 1.0;
    } while ((in_FPUStatusWord & 0x400) != 0);
    if (dVar1 == 0.0) {
      vv = SQRT(ABS(value)) + 1.0;
      try_factor(2.0);
      try_factor(3.0);
      try_factor(5.0);
      try_factor(7.0);
      local_14 = 1.0;
      while (local_14 <= vv) {
        i = 0;
        do {
          local_14 = local_14 + skip_multiples[i];
          try_factor(local_14);
          i = i + 1;
        } while (i != 0x30);
      }
      if (nn != 1.0) {
        try_factor(nn);
      }
      dVar1 = multiply_out_unique();
      if (dVar1 == value) {
        return 1;
      }
      error_bug("Internal error factoring integers.");
      return 1;
    }
  }
  uno = 0;
  return 0;
}



// WARNING: Unknown calling convention

int factor_int(token_type *equation,int *np)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int xsize;
  int iVar4;
  int i;
  int iVar5;
  token_type *ptVar6;
  int j;
  int local_28;
  int local_20;
  
  local_20 = 0;
  iVar4 = 0;
  if (0 < *np) {
    do {
      ptVar6 = equation + iVar4;
      if (((ptVar6->kind == CONSTANT) && (iVar2 = factor_one((ptVar6->token).constant), iVar2 != 0))
         && (0 < uno)) {
        if (uno == 1) {
          if (ucnt[0] < 2) goto LAB_08071753;
          local_28 = ptVar6->level;
        }
        else {
          local_28 = ptVar6->level;
          if (1 < uno) {
            local_28 = local_28 + (uint)(1 < *np);
          }
        }
        iVar2 = -2;
        iVar3 = 0;
        do {
          iVar1 = iVar2 + 4;
          iVar2 = iVar2 + 2;
          if (1 < ucnt[iVar3]) {
            iVar2 = iVar1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != uno);
        if ((iVar2 + *np <= n_tokens) || (error_huge(), 0 < uno)) {
          iVar3 = 0;
          iVar2 = local_28 + 1;
          do {
            iVar1 = (uint)(1 < ucnt[iVar3]) * 2;
            iVar5 = iVar1 + 2;
            if (iVar3 == 0) {
              iVar5 = iVar1;
            }
            if (iVar5 != 0) {
              memmove(equation + iVar5 + iVar4,equation + iVar4,(*np - iVar4) * 0x10);
              *np = *np + iVar5;
              if (0 < iVar3) {
                ptVar6 = equation + iVar4 + 1;
                ptVar6->kind = OPERATOR;
                ptVar6->level = local_28;
                (ptVar6->token).variable = 3;
                iVar4 = iVar4 + 2;
              }
            }
            ptVar6 = equation + iVar4;
            ptVar6->kind = CONSTANT;
            ptVar6->level = local_28;
            ptVar6->token = *(storage_type *)(unique + iVar3);
            if (1 < ucnt[iVar3]) {
              ptVar6->level = iVar2;
              ptVar6 = equation + iVar4 + 1;
              ptVar6->kind = OPERATOR;
              ptVar6->level = iVar2;
              (ptVar6->token).variable = 6;
              iVar4 = iVar4 + 2;
              ptVar6 = equation + iVar4;
              ptVar6->level = iVar2;
              ptVar6->kind = CONSTANT;
              (ptVar6->token).constant = (double)ucnt[iVar3];
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < uno);
        }
        local_20 = 1;
      }
LAB_08071753:
      iVar4 = iVar4 + 2;
    } while (*np != iVar4 && iVar4 <= *np);
  }
  return local_20;
}



// WARNING: Unknown calling convention

int list_factor(token_type *equation,int *np,int factor_flag)

{
  int iVar1;
  
  if ((factor_flag != 0) || (factor_int_flag != 0)) {
    factor_int(equation,np);
  }
  iVar1 = list_proc(equation,*np,0);
  return iVar1;
}



// WARNING: Unknown calling convention

void factor_int_sub(int n)

{
  if (0 < n_lhs[n]) {
    factor_int(lhs[n],n_lhs + n);
    factor_int(rhs[n],n_rhs + n);
  }
  return;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x0807185e)
// WARNING: Removing unreachable block (ram,0x08071860)

void __libc_csu_init(void)

{
  EVP_PKEY_CTX *in_stack_ffffffd4;
  
  _init(in_stack_ffffffd4);
  return;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x080718a1)
// WARNING: Removing unreachable block (ram,0x080718a8)

void __do_global_ctors_aux(void)

{
  return;
}



void _fini(void)

{
  __do_global_dtors_aux();
  return;
}


