typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
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
typedef int    wchar_t;
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
    char _unused2[56];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct stat64 stat64, *Pstat64;

typedef ulonglong __u_quad_t;

typedef __u_quad_t __dev_t;

typedef ulong __ino_t;

typedef uint __mode_t;

typedef uint __nlink_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef __quad_t __blkcnt64_t;

typedef struct timespec timespec, *Ptimespec;

typedef __u_quad_t __ino64_t;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat64 {
    __dev_t st_dev;
    uint __pad1;
    __ino_t __st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    uint __pad2;
    __off64_t st_size;
    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    __ino64_t st_ino;
};

typedef struct timezone timezone, *Ptimezone;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef __time_t time_t;

typedef int __clockid_t;

typedef __clockid_t clockid_t;

typedef struct timeval timeval, *Ptimeval;

typedef long __suseconds_t;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

typedef struct timezone * __timezone_ptr_t;

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char * tm_zone;
};

typedef struct sigaction sigaction, *Psigaction;

typedef union _union_1048 _union_1048, *P_union_1048;

typedef struct siginfo siginfo, *Psiginfo;

typedef struct siginfo siginfo_t;

typedef struct __sigset_t __sigset_t, *P__sigset_t;

typedef void (* __sighandler_t)(int);

typedef union _union_1028 _union_1028, *P_union_1028;

typedef struct _struct_1029 _struct_1029, *P_struct_1029;

typedef struct _struct_1030 _struct_1030, *P_struct_1030;

typedef struct _struct_1031 _struct_1031, *P_struct_1031;

typedef struct _struct_1032 _struct_1032, *P_struct_1032;

typedef struct _struct_1033 _struct_1033, *P_struct_1033;

typedef struct _struct_1034 _struct_1034, *P_struct_1034;

typedef int __pid_t;

typedef union sigval sigval, *Psigval;

typedef union sigval sigval_t;

typedef long __clock_t;

struct _struct_1034 {
    long si_band;
    int si_fd;
};

struct __sigset_t {
    ulong __val[32];
};

struct _struct_1033 {
    void * si_addr;
};

union sigval {
    int sival_int;
    void * sival_ptr;
};

struct _struct_1032 {
    __pid_t si_pid;
    __uid_t si_uid;
    int si_status;
    __clock_t si_utime;
    __clock_t si_stime;
};

struct _struct_1031 {
    __pid_t si_pid;
    __uid_t si_uid;
    sigval_t si_sigval;
};

struct _struct_1029 {
    __pid_t si_pid;
    __uid_t si_uid;
};

struct _struct_1030 {
    int si_tid;
    int si_overrun;
    sigval_t si_sigval;
};

union _union_1028 {
    int _pad[29];
    struct _struct_1029 _kill;
    struct _struct_1030 _timer;
    struct _struct_1031 _rt;
    struct _struct_1032 _sigchld;
    struct _struct_1033 _sigfault;
    struct _struct_1034 _sigpoll;
};

struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    union _union_1028 _sifields;
};

union _union_1048 {
    __sighandler_t sa_handler;
    void (* sa_sigaction)(int, siginfo_t *, void *);
};

struct sigaction {
    union _union_1048 __sigaction_handler;
    struct __sigset_t sa_mask;
    int sa_flags;
    void (* sa_restorer)(void);
};

typedef struct __jmp_buf_tag __jmp_buf_tag, *P__jmp_buf_tag;

typedef int __jmp_buf[6];

struct __jmp_buf_tag {
    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    struct __sigset_t __saved_mask;
};

typedef struct _IO_FILE FILE;

typedef uint wint_t;

typedef struct __sigset_t sigset_t;

typedef int __ssize_t;

typedef __ssize_t ssize_t;

typedef int __int32_t;

typedef struct passwd passwd, *Ppasswd;

struct passwd {
    char * pw_name;
    char * pw_passwd;
    __uid_t pw_uid;
    __gid_t pw_gid;
    char * pw_gecos;
    char * pw_dir;
    char * pw_shell;
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef int nl_item;

typedef struct dirent64 dirent64, *Pdirent64;

struct dirent64 {
    __ino64_t d_ino;
    __off64_t d_off;
    ushort d_reclen;
    uchar d_type;
    char d_name[256];
};

typedef struct __dirstream __dirstream, *P__dirstream;

struct __dirstream {
};

typedef struct __dirstream DIR;

typedef struct __mbstate_t __mbstate_t, *P__mbstate_t;

typedef union _union_27 _union_27, *P_union_27;

union _union_27 {
    uint __wch;
    char __wchb[4];
};

struct __mbstate_t {
    int __count;
    union _union_27 __value;
};

typedef struct __mbstate_t mbstate_t;

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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
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

typedef struct lconv lconv, *Plconv;

struct lconv {
    char * decimal_point;
    char * thousands_sep;
    char * grouping;
    char * int_curr_symbol;
    char * currency_symbol;
    char * mon_decimal_point;
    char * mon_thousands_sep;
    char * mon_grouping;
    char * positive_sign;
    char * negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

typedef struct group group, *Pgroup;

struct group {
    char * gr_name;
    char * gr_passwd;
    __gid_t gr_gid;
    char * * gr_mem;
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  if (PTR___gmon_start___08061fec != (undefined *)0x0) {
    __gmon_start__();
  }
  FUN_0804bec0();
  iVar1 = FUN_0805a000();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__int32_t ** __ctype_toupper_loc(void)

{
  __int32_t **pp_Var1;
  
  pp_Var1 = (__int32_t **)(*(code *)PTR___ctype_toupper_loc_08062000)();
  return pp_Var1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062008)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*_DAT_0806200c)();
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062010)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __mempcpy_chk(void)

{
  (*_DAT_08062014)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

passwd * getpwuid(__uid_t __uid)

{
  passwd *ppVar1;
  
  ppVar1 = (passwd *)(*_DAT_08062018)();
  return ppVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void _exit(int __status)

{
  (*_DAT_08062020)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062024)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int dirfd(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062028)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int wcwidth(wchar_t __c)

{
  int iVar1;
  
  iVar1 = (*_DAT_0806202c)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*_DAT_08062030)();
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int _setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062034)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void free(void *__ptr)

{
                    // WARNING: Could not recover jumptable at 0x080495c0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_08062038)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*_DAT_0806203c)();
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int mbsinit(mbstate_t *__ps)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062040)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __strtoull_internal(void)

{
  (*_DAT_08062044)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062048)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*_DAT_08062050)();
  return p_Var1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062054)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062058)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _obstack_newchunk(void)

{
  (*_DAT_0806205c)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void dcgettext(void)

{
  (*_DAT_08062060)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*_DAT_08062064)();
  return tVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

char * stpcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*_DAT_08062068)();
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stack_chk_fail(void)

{
  (*_DAT_0806206c)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _obstack_begin(void)

{
  (*_DAT_08062070)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigismember(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigismember_08062074)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int fflush_unlocked(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*_DAT_0806207c)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int iswcntrl(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062080)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void textdomain(void)

{
  (*_DAT_08062084)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*_DAT_08062088)();
  return sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int fnmatch(char *__pattern,char *__name,int __flags)

{
  int iVar1;
  
  iVar1 = (*_DAT_0806208c)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int iswprint(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062090)();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_08062094)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*_DAT_0806209c)();
  return sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int __fxstat64(int __ver,int __fildes,stat64 *__stat_buf)

{
  int iVar1;
  
  iVar1 = (*_DAT_080620a0)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

size_t __ctype_get_mb_cur_max(void)

{
  size_t sVar1;
  
  sVar1 = (*_DAT_080620a4)();
  return sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*_DAT_080620a8)();
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fpending(void)

{
  (*_DAT_080620ac)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

size_t wcstombs(char *__s,wchar_t *__pwcs,size_t __n)

{
  size_t sVar1;
  
  sVar1 = (*_DAT_080620b0)();
  return sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

size_t mbrtowc(wchar_t *__pwc,char *__s,size_t __n,mbstate_t *__p)

{
  size_t sVar1;
  
  sVar1 = (*_DAT_080620b4)();
  return sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cxa_atexit(void)

{
  (*_DAT_080620b8)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void error(void)

{
  (*_DAT_080620bc)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*_DAT_080620c4)();
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*_DAT_080620c8)();
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void lgetfilecon(void)

{
  (*_DAT_080620cc)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * malloc(size_t __size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x08049820. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*_DAT_080620d0)();
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __freading(void)

{
  (*_DAT_080620d4)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __memcpy_chk(void)

{
  (*_DAT_080620d8)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __gmon_start__(void)

{
  (*_DAT_080620dc)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
  (*_DAT_080620e0)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int fputs_unlocked(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*_DAT_080620e4)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = (*_DAT_080620e8)();
  return sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void getopt_long(void)

{
  (*_DAT_080620ec)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void getfilecon(void)

{
  (*_DAT_080620f0)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*_DAT_080620f4)();
  return ptVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*_DAT_080620f8)();
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*_DAT_080620fc)();
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*_DAT_08062100)();
  return sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __libc_start_main(void)

{
  (*_DAT_08062104)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int sigaddset(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062108)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*_DAT_0806210c)();
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*_DAT_08062110)();
  return piVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

__pid_t tcgetpgrp(int __fd)

{
  __pid_t _Var1;
  
  _Var1 = (*_DAT_08062114)();
  return _Var1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*_DAT_08062118)();
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_0806211c)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite_unlocked(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*_DAT_08062124)();
  return sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __printf_chk(void)

{
  (*_DAT_08062128)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void * mempcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*_DAT_0806212c)();
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int wcswidth(wchar_t *__s,size_t __n)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062130)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int sigemptyset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062134)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

char * nl_langinfo(nl_item __item)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*_DAT_08062138)();
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*_DAT_0806213c)();
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void acl_extended_file_nofollow(void)

{
  (*_DAT_08062140)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*_DAT_08062144)();
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int __overflow(_IO_FILE *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062148)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

size_t mbstowcs(wchar_t *__pwcs,char *__s,size_t __n)

{
  size_t sVar1;
  
  sVar1 = (*_DAT_0806214c)();
  return sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

lconv * localeconv(void)

{
  lconv *plVar1;
  
  plVar1 = (lconv *)(*_DAT_08062150)();
  return plVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void freecon(void)

{
  (*_DAT_08062154)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  __off64_t _Var1;
  
  _Var1 = (*_DAT_08062158)();
  return _Var1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*_DAT_0806215c)();
  return pdVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fprintf_chk(void)

{
  (*_DAT_08062160)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062164)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062168)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void bindtextdomain(void)

{
  (*_DAT_0806216c)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062170)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062174)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
  (*_DAT_08062178)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int __xstat64(int __ver,char *__filename,stat64 *__stat_buf)

{
  int iVar1;
  
  iVar1 = (*_DAT_0806217c)();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __lxstat64(int __ver,char *__filename,stat64 *__stat_buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR___lxstat64_08062180)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*_DAT_08062188)();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*_DAT_0806218c)();
  return pDVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

group * getgrgid(__gid_t __gid)

{
  group *pgVar1;
  
  pgVar1 = (group *)(*_DAT_08062190)();
  return pgVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

__int32_t ** __ctype_tolower_loc(void)

{
  __int32_t **pp_Var1;
  
  pp_Var1 = (__int32_t **)(*_DAT_08062194)();
  return pp_Var1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
  (*_DAT_08062198)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*_DAT_0806219c)();
  return ppuVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*_DAT_080621a0)();
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __sprintf_chk(void)

{
  (*_DAT_080621a4)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08049b80(int param_1,undefined4 *param_2)

{
  byte bVar1;
  void *pvVar2;
  longlong lVar3;
  char **ppcVar4;
  char **ppcVar5;
  _IO_FILE *p_Var6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  int *piVar13;
  DIR *__dirp;
  undefined4 *puVar14;
  undefined4 *puVar15;
  dirent64 *pdVar16;
  __pid_t _Var17;
  int iVar18;
  size_t sVar19;
  int iVar20;
  void *pvVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined *puVar25;
  char *pcVar26;
  int iVar27;
  undefined *puVar28;
  int in_GS_OFFSET;
  bool bVar29;
  byte bVar30;
  longlong lVar31;
  undefined **ppuVar32;
  char **local_3d0;
  char *local_3cc;
  undefined local_3b4 [132];
  int local_330;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8 [4];
  ushort local_2b8;
  ushort local_2b6;
  uint local_2b0;
  undefined *local_2ac;
  byte *local_2a8;
  undefined *local_2a4;
  undefined local_2a0 [652];
  undefined4 local_14;
  
  bVar30 = 0;
  local_14 = *(undefined4 *)(in_GS_OFFSET + 0x14);
  FUN_080555d0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/share/locale");
  textdomain("coreutils");
  DAT_080622cc = 2;
  FUN_08059fc0(&LAB_08051fd0);
  DAT_08062348 = 0;
  DAT_0806234c = '\x01';
  DAT_08062350 = (char **)0x0;
  DAT_08062354 = 0x80000000;
  DAT_08062358 = 0xffffffff;
  DAT_080624e4 = 0;
  if (DAT_080622c0 == 2) {
    DAT_08062360 = 2;
    FUN_08056430(0,5);
  }
  else if (DAT_080622c0 == 3) {
    DAT_08062360 = 0;
    FUN_08056430(0,5);
  }
  else {
    if (DAT_080622c0 != 1) {
switchD_0804b8b3_caseD_8049c48:
                    // WARNING: Subroutine does not return
      abort();
    }
    iVar10 = isatty(1);
    if (iVar10 == 0) {
      DAT_08062360 = 1;
    }
    else {
      DAT_08062360 = 2;
      DAT_080624e4 = 1;
    }
  }
  DAT_080624e8 = 0;
  DAT_0806244c = 0;
  DAT_080624ec = 0;
  DAT_080624ed = 0;
  DAT_08062451 = '\0';
  DAT_08062408 = 0;
  DAT_080624ee = 0;
  DAT_08062400 = 1;
  DAT_0806240c = '\0';
  DAT_08062404 = '\0';
  DAT_080624f0 = 0;
  DAT_080624f4 = (char **)0x0;
  DAT_080624f8 = (char **)0x0;
  DAT_08062450 = '\0';
  pcVar11 = getenv("QUOTING_STYLE");
  if (pcVar11 != (char *)0x0) {
    iVar10 = FUN_08051c00(pcVar11,&PTR_s_literal_0805d800,&DAT_0805d7e0,4);
    if (iVar10 < 0) {
      uVar22 = FUN_08056780(pcVar11);
      uVar23 = dcgettext(0,"ignoring invalid value of environment variable QUOTING_STYLE: %s",5);
      error(0,0,uVar23,uVar22);
    }
    else {
      FUN_08056430(0,*(undefined4 *)(&DAT_0805d7e0 + iVar10 * 4));
    }
  }
  pcVar11 = getenv("LS_BLOCK_SIZE");
  FUN_08054660(pcVar11,&DAT_080624fc,&DAT_08062500);
  if ((pcVar11 != (char *)0x0) || (pcVar11 = getenv("BLOCK_SIZE"), pcVar11 != (char *)0x0)) {
    DAT_080622a0 = DAT_08062500;
    DAT_080622a4 = DAT_08062504;
  }
  DAT_08062508 = 0x50;
  pcVar11 = getenv("COLUMNS");
  uVar12 = DAT_08062508;
  if (((pcVar11 != (char *)0x0) && (*pcVar11 != '\0')) &&
     ((iVar10 = FUN_08058c50(pcVar11,0,0,&local_2b0,0), iVar10 != 0 ||
      (uVar12 = local_2b0, local_2b0 == 0)))) {
    uVar22 = FUN_08056780(pcVar11);
    uVar23 = dcgettext(0,"ignoring invalid width in environment variable COLUMNS: %s",5);
    error(0,0,uVar23,uVar22);
    uVar12 = DAT_08062508;
  }
  DAT_08062508 = uVar12;
  iVar10 = ioctl(1,0x5413,&local_2b8);
  if ((iVar10 != -1) && (local_2b6 != 0)) {
    DAT_08062508 = (uint)local_2b6;
  }
  pcVar11 = getenv("TABSIZE");
  DAT_0806250c = 8;
  if (pcVar11 != (char *)0x0) {
    iVar10 = FUN_08058c50(pcVar11,0,0,&local_2b0,0);
    if (iVar10 == 0) {
      DAT_0806250c = local_2b0;
    }
    else {
      uVar22 = FUN_08056780(pcVar11);
      uVar23 = dcgettext(0,"ignoring invalid tab size in environment variable TABSIZE: %s",5);
      error(0,0,uVar23,uVar22);
    }
  }
  local_2ac = (undefined *)0xffffffff;
  ppuVar32 = &PTR_s_all_0805ad40;
  iVar10 = getopt_long(param_1,param_2,"abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1",
                       &PTR_s_all_0805ad40,&local_2ac);
  if (iVar10 != -1) {
    uVar12 = iVar10 + 0x83;
    if (0x112 < uVar12) {
      uVar12 = FUN_080513a0(2);
    }
                    // WARNING: Could not recover jumptable at 0x08049ec8. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)(&PTR_LAB_0805a874)[uVar12])();
    return;
  }
  DAT_08062514 = 1;
  if (2 < DAT_08062508) {
    DAT_08062514 = DAT_08062508 / 3;
  }
  DAT_080624e0 = FUN_080563c0(0);
  iVar10 = FUN_08056410(DAT_080624e0);
  if (iVar10 == 5) {
    FUN_08056450(DAT_080624e0,0x20,1);
  }
  if (1 < DAT_08062408) {
    pcVar11 = "Richard M. Stallman" + DAT_08062408 + 0x12;
    cVar9 = "Richard M. Stallman"[DAT_08062408 + 0x12];
    while (cVar9 != '\0') {
      pcVar11 = pcVar11 + 1;
      FUN_08056450(DAT_080624e0,(int)cVar9,1);
      cVar9 = *pcVar11;
    }
  }
  DAT_08062518 = FUN_080563c0(0);
  FUN_08056450(DAT_08062518,0x3a,1);
  if ((DAT_08062455 != '\0') && (DAT_08062360 != 0)) {
    DAT_08062455 = '\0';
  }
  if (DAT_080624e8 - 1U < 2) {
    if (DAT_08062360 == 0) goto LAB_0804aba7;
    DAT_0806244c = 4;
  }
  if (DAT_08062360 == 0) {
LAB_0804aba7:
    pcVar11 = getenv("TIME_STYLE");
    bVar29 = pcVar11 == (char *)0x0;
    local_3cc = "locale";
    if (!bVar29) {
      local_3cc = pcVar11;
    }
LAB_0804abd1:
    iVar10 = 6;
    pcVar11 = local_3cc;
    pcVar26 = "posix-";
    do {
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      bVar29 = *pcVar11 == *pcVar26;
      pcVar11 = pcVar11 + (uint)bVar30 * -2 + 1;
      pcVar26 = pcVar26 + (uint)bVar30 * -2 + 1;
    } while (bVar29);
    if (bVar29) {
      cVar9 = FUN_08052890(2);
      if (cVar9 != '\0') goto code_r0x0804abcc;
      goto LAB_0804a6ee;
    }
    if (*local_3cc == '+') {
      local_3cc = local_3cc + 1;
      pcVar26 = strchr(local_3cc,10);
      pcVar11 = local_3cc;
      if (pcVar26 != (char *)0x0) {
        pcVar11 = strchr(pcVar26 + 1,10);
        if (pcVar11 != (char *)0x0) {
          ppuVar32 = (undefined **)FUN_080556c0(local_3cc);
          uVar22 = dcgettext(0,"invalid time style format %s",5);
          error(2,0,uVar22,ppuVar32);
        }
        *pcVar26 = '\0';
        pcVar11 = pcVar26 + 1;
      }
LAB_0804b681:
      PTR_s__b__e__H__M_080622b0 = pcVar11;
      PTR_s__b__e__Y_080622ac = local_3cc;
      pcVar11 = strstr(PTR_s__b__e__Y_080622ac,"%b");
      if (pcVar11 == (char *)0x0) goto LAB_0804ac4f;
    }
    else {
      ppuVar32 = (undefined **)&DAT_0805b124;
      iVar10 = FUN_08051ee0("time style",local_3cc,&PTR_s_full_iso_0805b110,&DAT_0805b124,4,
                            PTR_LAB_080622c8);
      iVar10 = *(int *)(&DAT_0805b124 + iVar10 * 4);
      if (iVar10 == 1) {
        PTR_s__b__e__H__M_080622b0 = &DAT_0805a278;
        PTR_s__b__e__Y_080622ac = &DAT_0805a278;
      }
      else {
        if (iVar10 != 0) {
          if (iVar10 == 2) {
            PTR_s__b__e__Y_080622ac = s__Y__m__d_0805a287;
            PTR_s__b__e__H__M_080622b0 = &DAT_0805a27b;
            local_3cc = PTR_s__b__e__Y_080622ac;
            pcVar11 = PTR_s__b__e__H__M_080622b0;
          }
          else {
            local_3cc = PTR_s__b__e__Y_080622ac;
            pcVar11 = PTR_s__b__e__H__M_080622b0;
            if ((iVar10 == 3) &&
               (cVar9 = FUN_08052890(2), local_3cc = PTR_s__b__e__Y_080622ac,
               pcVar11 = PTR_s__b__e__H__M_080622b0, cVar9 != '\0')) {
              PTR_s__b__e__Y_080622ac = (undefined *)dcgettext(0,PTR_s__b__e__Y_080622ac,2);
              pcVar11 = (char *)dcgettext(0,PTR_s__b__e__H__M_080622b0,2);
              local_3cc = PTR_s__b__e__Y_080622ac;
            }
          }
          goto LAB_0804b681;
        }
        PTR_s__b__e__H__M_080622b0 = s__Y__m__d__H__M__S__N__z_0805a260;
        PTR_s__b__e__Y_080622ac = s__Y__m__d__H__M__S__N__z_0805a260;
      }
LAB_0804ac4f:
      pcVar11 = strstr(PTR_s__b__e__H__M_080622b0,"%b");
      if (pcVar11 == (char *)0x0) goto LAB_0804a6ee;
    }
    DAT_0806251c = 5;
    do {
      uVar12 = DAT_0806251c;
      iVar10 = 0x2000e;
      DAT_0806251c = 0;
      puVar28 = &DAT_08062520;
      do {
        local_2ac = (undefined *)uVar12;
        pcVar11 = nl_langinfo(iVar10);
        ppuVar32 = &local_2ac;
        uVar24 = FUN_08054ce0(pcVar11,puVar28,0xa1,&local_2ac,0,0);
        if (0xa0 < uVar24) {
          DAT_0806251c = 0;
          goto LAB_0804b750;
        }
        puVar25 = local_2ac;
        if (local_2ac <= DAT_0806251c) {
          puVar25 = (undefined *)DAT_0806251c;
        }
        iVar10 = iVar10 + 1;
        puVar28 = puVar28 + 0xa1;
        DAT_0806251c = (uint)puVar25;
      } while (iVar10 != 0x2001a);
    } while (puVar25 < uVar12);
    if (puVar25 == (undefined *)0x0) {
LAB_0804b750:
      uVar22 = dcgettext(0,"error initializing month strings",5);
      error(0,0,uVar22);
    }
  }
LAB_0804a6ee:
  iVar10 = optind;
  if (DAT_0806235c != '\0') {
    local_2a8 = (byte *)getenv("LS_COLORS");
    if ((local_2a8 != (byte *)0x0) && (*local_2a8 != 0)) {
      local_2b8 = 0x3f3f;
      iVar27 = 0;
      local_2b6 = local_2b6 & 0xff00;
      DAT_08062cac = (undefined *)FUN_08058bd0(local_2a8);
      uVar12 = 0;
      local_2a4 = DAT_08062cac;
LAB_0804b8aa:
      if (uVar12 < 6) {
switchD_0804b8b3_switchD:
        do {
          switch((&switchD_0804b8b3::switchdataD_0805acc0)[uVar12]) {
          case (undefined *)0x8049c48:
            goto switchD_0804b8b3_caseD_8049c48;
          case (undefined *)0x804ba7a:
            uVar22 = dcgettext(0,"unparsable value for LS_COLORS environment variable",5);
            error(0,0,uVar22,ppuVar32);
            free(DAT_08062cac);
            pvVar21 = (void *)DAT_08062cb0;
            while (pvVar21 != (void *)0x0) {
              pvVar2 = *(void **)((int)pvVar21 + 0x10);
              free(pvVar21);
              pvVar21 = pvVar2;
            }
            DAT_0806235c = '\0';
LAB_0804bb2c:
            if ((_DAT_08062218 == 6) &&
               (iVar27 = strncmp(PTR_s_01_36_0806221c,"target",6), iVar27 == 0)) {
              DAT_0806235d = '\x01';
            }
            goto LAB_0804ad68;
          case (undefined *)0x804bad3:
            goto switchD_0804b8b3_caseD_804bad3;
          case (undefined *)0x804bb6a:
            bVar1 = *local_2a8;
            local_2a8 = local_2a8 + 1;
            if (bVar1 == 0x3d) {
              for (iVar20 = 0; (&PTR_DAT_0805b140)[iVar20] != (char *)0x0; iVar20 = iVar20 + 1) {
                iVar18 = strcmp((char *)&local_2b8,(&PTR_DAT_0805b140)[iVar20]);
                if (iVar18 == 0) {
                  (&PTR_DAT_080621e4)[iVar20 * 2] = local_2a4;
                  cVar9 = FUN_0804c010(&DAT_080621e0 + iVar20 * 8);
                  uVar12 = 0;
                  if (cVar9 != '\0') goto switchD_0804b8b3_switchD;
                  break;
                }
              }
              ppuVar32 = (undefined **)FUN_08056780(&local_2b8);
              uVar22 = dcgettext(0,"unrecognized prefix: %s",5);
              error(0,0,uVar22,ppuVar32);
            }
            uVar12 = 5;
            break;
          case (undefined *)0x804bb8d:
            uVar12 = 5;
            bVar1 = *local_2a8;
            if (bVar1 != 0) {
              local_2a8 = local_2a8 + 1;
              uVar12 = 2;
              local_2b8 = local_2b8 & 0xff | (ushort)bVar1 << 8;
            }
            break;
          case (undefined *)0x804bbee:
            bVar1 = *local_2a8;
            if (bVar1 == 0x2a) {
              iVar27 = FUN_08058a70(0x14);
              local_2a8 = local_2a8 + 1;
              iVar20 = iVar27;
              *(int *)(iVar27 + 0x10) = DAT_08062cb0;
              DAT_08062cb0 = iVar20;
              *(undefined **)(iVar27 + 4) = local_2a4;
              cVar9 = FUN_0804c010(iVar27);
              uVar12 = (-(uint)(cVar9 == '\0') & 2) + 3;
              goto LAB_0804b8aa;
            }
            if (bVar1 == 0x3a) {
              local_2a8 = local_2a8 + 1;
              goto LAB_0804b8aa;
            }
            if (bVar1 == 0) goto LAB_0804bb2c;
            local_2a8 = local_2a8 + 1;
            uVar12 = 1;
            local_2b8 = local_2b8 & 0xff00 | (ushort)bVar1;
          }
        } while( true );
      }
      goto switchD_0804b8b3_caseD_8049c48;
    }
LAB_0804ad68:
    if (DAT_0806235c != '\0') {
      cVar9 = FUN_0804bf90();
      if (((cVar9 != '\0') || ((cVar9 = FUN_0804bf90(), cVar9 != '\0' && (DAT_0806235d != '\0'))))
         || ((cVar9 = FUN_0804bf90(), cVar9 != '\0' && (DAT_08062360 == 0)))) {
        DAT_08062364 = 1;
      }
      _Var17 = tcgetpgrp(1);
      if (-1 < _Var17) {
        iVar27 = 0;
        sigemptyset((sigset_t *)&DAT_08062380);
        do {
          iVar20 = (&DAT_0805ace0)[iVar27];
          sigaction(iVar20,(sigaction *)0x0,(sigaction *)local_3b4);
          if (local_3b4._0_4_ != (undefined *)0x1) {
            sigaddset((sigset_t *)&DAT_08062380,iVar20);
          }
          iVar27 = iVar27 + 1;
        } while (iVar27 != 0xc);
        iVar20 = 0;
        puVar14 = &DAT_08062380;
        puVar15 = (undefined4 *)(local_3b4 + 4);
        for (iVar27 = 0x20; iVar27 != 0; iVar27 = iVar27 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + (uint)bVar30 * -2 + 1;
          puVar15 = puVar15 + (uint)bVar30 * -2 + 1;
        }
        local_330 = 0x10000000;
        do {
          iVar27 = (&DAT_0805ace0)[iVar20];
          iVar18 = sigismember((sigset_t *)&DAT_08062380,iVar27);
          if (iVar18 != 0) {
            local_3b4._0_4_ = &LAB_0804cf70;
            if (iVar27 != 0x14) {
              local_3b4._0_4_ = &LAB_0804bf70;
            }
            sigaction(iVar27,(sigaction *)local_3b4,(sigaction *)0x0);
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 != 0xc);
      }
    }
  }
  if (((DAT_08062400 == 1) && (DAT_08062400 = 2, DAT_08062404 == '\0')) && (DAT_08062408 != 3)) {
    DAT_08062400 = (-(uint)(DAT_08062360 == 0) & 0xfffffffe) + 4;
  }
  if (DAT_0806240c != '\0') {
    DAT_08062410 = FUN_08053140(0x1e,0,&LAB_0804bef0,&LAB_0804bf20,&LAB_0804c000);
    if (DAT_08062410 == 0) {
LAB_0804b9fd:
                    // WARNING: Subroutine does not return
      FUN_08058c00();
    }
    _obstack_begin(&DAT_08062420,0,0,malloc,free);
  }
  if (((DAT_0806244c == 2) || (DAT_0806244c == 4)) ||
     ((DAT_08062360 == 0 || ((DAT_08062450 != '\0' || (DAT_08062451 != '\0')))))) {
    DAT_08062452 = 1;
LAB_0804a739:
    DAT_08062454 = 0;
  }
  else {
    DAT_08062454 = 1;
    DAT_08062452 = 0;
    if ((((DAT_0806240c == '\0') && (DAT_0806235c == '\0')) && (DAT_08062408 == 0)) &&
       (DAT_08062453 == '\0')) goto LAB_0804a739;
  }
  if (DAT_08062455 != '\0') {
    _obstack_begin(&DAT_08062460,0,0,malloc,free);
    _obstack_begin(&DAT_080624a0,0,0,malloc,free);
  }
  _DAT_080624cc = 100;
  DAT_080624d0 = FUN_08058a70(0x3200);
  DAT_080624d4 = 0;
  FUN_0804c320();
  iVar27 = param_1 - iVar10;
  if (iVar27 < 1) {
    if (DAT_08062404 == '\0') {
      FUN_0804c2b0();
    }
    else {
      FUN_0804eb40("");
    }
  }
  else {
    do {
      iVar10 = iVar10 + 1;
      FUN_0804eb40("");
    } while (iVar10 < param_1);
  }
  if (DAT_080624d4 != 0) {
    FUN_0804c3f0();
    if (DAT_08062404 == '\0') {
      FUN_0804c810();
    }
    if (DAT_080624d4 != 0) {
      FUN_0804fa80();
      p_Var6 = stdout;
      local_3d0 = DAT_08062350;
      if (DAT_08062350 != (char **)0x0) {
        pcVar11 = stdout->_IO_write_ptr;
        if (pcVar11 < stdout->_IO_write_end) {
          *pcVar11 = '\n';
          p_Var6->_IO_write_ptr = pcVar11 + 1;
        }
        else {
          __overflow(stdout,10);
        }
        DAT_080624d8 = DAT_080624d8 + 1;
        local_3d0 = DAT_08062350;
      }
      goto LAB_0804a7d0;
    }
  }
  local_3d0 = DAT_08062350;
  if (((iVar27 < 2) && (DAT_08062350 != (char **)0x0)) && (DAT_08062350[3] == (char *)0x0)) {
    DAT_0806234c = '\0';
  }
LAB_0804a7d0:
  while (DAT_08062350 = local_3d0, local_3d0 != (char **)0x0) {
    while ((DAT_08062350 = (char **)local_3d0[3], DAT_08062410 == 0 || (*local_3d0 != (char *)0x0)))
    {
      pcVar11 = *local_3d0;
      piVar13 = __errno_location();
      *piVar13 = 0;
      __dirp = opendir(pcVar11);
      if (__dirp == (DIR *)0x0) {
        dcgettext(0,"cannot open directory %s",5);
        FUN_0804d570();
      }
      else if (DAT_08062410 == 0) {
LAB_0804a93a:
        p_Var6 = stdout;
        if ((DAT_0806240c != '\0') || (DAT_0806234c != '\0')) {
          if (DAT_080622bc == '\0') {
            pcVar26 = stdout->_IO_write_ptr;
            if (pcVar26 < stdout->_IO_write_end) {
              *pcVar26 = '\n';
              p_Var6->_IO_write_ptr = pcVar26 + 1;
            }
            else {
              __overflow(stdout,10);
            }
            DAT_080624d8 = DAT_080624d8 + 1;
          }
          DAT_080622bc = '\0';
          if (DAT_08062455 != '\0') {
            fwrite_unlocked(&DAT_0805a0a9,1,2,stdout);
            DAT_080624d8 = DAT_080624d8 + 2;
            if (DAT_08062455 != '\0') {
              if (_DAT_080624b0 < DAT_080624ac + 1) {
                _obstack_newchunk(&DAT_080624a0,4);
              }
              *DAT_080624ac = DAT_080624d8;
              DAT_080624ac = DAT_080624ac + 1;
            }
          }
          iVar10 = FUN_0804cbf0(0);
          DAT_080624d8 = DAT_080624d8 + iVar10;
          if (DAT_08062455 != '\0') {
            if (_DAT_080624b0 < DAT_080624ac + 1) {
              _obstack_newchunk(&DAT_080624a0,4);
            }
            *DAT_080624ac = DAT_080624d8;
            DAT_080624ac = DAT_080624ac + 1;
          }
          fwrite_unlocked(&DAT_0805a2d4,1,2,stdout);
          DAT_080624d8 = DAT_080624d8 + 2;
        }
        FUN_0804c320();
        lVar3 = 0;
LAB_0804aa28:
        do {
          *piVar13 = 0;
          pdVar16 = readdir64(__dirp);
          if (pdVar16 != (dirent64 *)0x0) {
            ppcVar5 = DAT_080624f4;
            if (DAT_080624f0 != 2) {
              if (pdVar16->d_name[0] == '.') {
                if (DAT_080624f0 == 0) goto LAB_0804aa28;
                cVar9 = pdVar16->d_name[1];
                if (cVar9 == '.') {
                  cVar9 = pdVar16->d_name[2];
                }
                if (cVar9 == '\0') goto LAB_0804aa28;
              }
              else {
                ppcVar4 = DAT_080624f8;
                if (DAT_080624f0 == 0) {
                  for (; ppcVar5 = DAT_080624f4, ppcVar4 != (char **)0x0;
                      ppcVar4 = (char **)ppcVar4[1]) {
                    iVar10 = fnmatch(*ppcVar4,pdVar16->d_name,4);
                    if (iVar10 == 0) goto LAB_0804aa28;
                  }
                }
              }
            }
            for (; ppcVar5 != (char **)0x0; ppcVar5 = (char **)ppcVar5[1]) {
              iVar10 = fnmatch(*ppcVar5,pdVar16->d_name,4);
              if (iVar10 == 0) goto LAB_0804aa28;
            }
            lVar31 = FUN_0804eb40(pcVar11);
            lVar3 = lVar31 + lVar3;
            if ((((DAT_08062360 == 1) && (DAT_0806244c == -1)) && (DAT_08062451 == '\0')) &&
               (DAT_0806240c == '\0')) {
              FUN_0804c3f0();
              FUN_0804fa80();
              FUN_0804c320();
            }
            goto LAB_0804aa28;
          }
          if (*piVar13 == 0) break;
          dcgettext(0,"reading directory %s",5);
          FUN_0804d570();
        } while (*piVar13 == 0x4b);
        iVar10 = closedir(__dirp);
        if (iVar10 != 0) {
          dcgettext(0,"closing directory %s",5);
          FUN_0804d570();
        }
        FUN_0804c3f0();
        if (DAT_0806240c != '\0') {
          FUN_0804c810();
        }
        if ((DAT_08062360 == 0) || (DAT_08062451 != '\0')) {
          if (DAT_08062455 != '\0') {
            fwrite_unlocked(&DAT_0805a0a9,1,2,stdout);
            DAT_080624d8 = DAT_080624d8 + 2;
          }
          pcVar11 = (char *)dcgettext(0,"total",5);
          fputs_unlocked(pcVar11,stdout);
          sVar19 = strlen(pcVar11);
          p_Var6 = stdout;
          DAT_080624d8 = DAT_080624d8 + sVar19;
          pcVar11 = stdout->_IO_write_ptr;
          if (pcVar11 < stdout->_IO_write_end) {
            *pcVar11 = ' ';
            p_Var6->_IO_write_ptr = pcVar11 + 1;
          }
          else {
            __overflow(stdout,0x20);
          }
          DAT_080624d8 = DAT_080624d8 + 1;
          pcVar11 = (char *)FUN_08053850(lVar3,local_2a0,DAT_080624fc,0x200,0,DAT_08062500,
                                         DAT_08062504);
          fputs_unlocked(pcVar11,stdout);
          sVar19 = strlen(pcVar11);
          p_Var6 = stdout;
          DAT_080624d8 = DAT_080624d8 + sVar19;
          pcVar11 = stdout->_IO_write_ptr;
          if (pcVar11 < stdout->_IO_write_end) {
            *pcVar11 = '\n';
            p_Var6->_IO_write_ptr = pcVar11 + 1;
          }
          else {
            __overflow(stdout,10);
          }
          DAT_080624d8 = DAT_080624d8 + 1;
        }
        if (DAT_080624d4 != 0) {
          FUN_0804fa80();
        }
      }
      else {
        iVar10 = dirfd(__dirp);
        if (iVar10 < 0) {
          iVar10 = __xstat64(3,pcVar11,(stat64 *)&local_328);
          cVar9 = (char)((uint)iVar10 >> 0x18);
        }
        else {
          iVar10 = __fxstat64(3,iVar10,(stat64 *)&local_328);
          cVar9 = (char)((uint)iVar10 >> 0x18);
        }
        uVar8 = local_2cc;
        uVar7 = local_2d0;
        uVar23 = local_324;
        uVar22 = local_328;
        if (cVar9 < '\0') {
          dcgettext(0,"cannot determine device and inode of %s",5);
          FUN_0804d570();
          closedir(__dirp);
        }
        else {
          puVar14 = (undefined4 *)FUN_08058a70(0x10);
          puVar14[1] = uVar8;
          *puVar14 = uVar7;
          puVar14[3] = uVar23;
          puVar14[2] = uVar22;
          puVar15 = (undefined4 *)FUN_080536d0(DAT_08062410,puVar14);
          if (puVar15 == (undefined4 *)0x0) goto LAB_0804b9fd;
          if (puVar14 == puVar15) {
            puVar14 = DAT_0806242c;
            if (DAT_08062430 - (int)DAT_0806242c < 0x10) {
              _obstack_newchunk(&DAT_08062420,0x10);
              puVar14 = DAT_0806242c;
            }
            DAT_0806242c = puVar14 + 4;
            puVar14[3] = local_324;
            puVar14[2] = local_328;
            puVar14[1] = local_2cc;
            *puVar14 = local_2d0;
            goto LAB_0804a93a;
          }
          free(puVar14);
          uVar22 = FUN_08056980(pcVar11);
          uVar23 = dcgettext(0,"%s: not listing already-listed directory",5);
          error(0,0,uVar23,uVar22);
          closedir(__dirp);
          DAT_08062348 = 2;
        }
      }
      free(*local_3d0);
      free(local_3d0[1]);
      free(local_3d0);
      local_3d0 = DAT_08062350;
      DAT_0806234c = '\x01';
      if (DAT_08062350 == (char **)0x0) goto LAB_0804b0fa;
    }
    if ((uint)((int)DAT_0806242c - _DAT_08062428) < 0x10) {
                    // WARNING: Subroutine does not return
      __assert_fail("sizeof (struct dev_ino) <= __extension__ ({ struct obstack const *__o = (&dev_ino_obstack); (unsigned) (__o->next_free - __o->object_base); })"
                    ,"ls.c",0x3d5,"dev_ino_pop");
    }
    if (DAT_08062430 - (int)DAT_0806242c < -0x10) {
      _obstack_newchunk(&DAT_08062420,0xfffffff0);
    }
    DAT_0806242c = DAT_0806242c + -4;
    puVar14 = DAT_0806242c;
    puVar15 = local_2c8;
    for (iVar10 = 4; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + (uint)bVar30 * -2 + 1;
      puVar15 = puVar15 + (uint)bVar30 * -2 + 1;
    }
    pvVar21 = (void *)FUN_08053710(DAT_08062410,local_2c8);
    if (pvVar21 == (void *)0x0) {
                    // WARNING: Subroutine does not return
      __assert_fail("found","ls.c",0x59d,"main");
    }
    free(pvVar21);
    free(*local_3d0);
    free(local_3d0[1]);
    free(local_3d0);
    local_3d0 = DAT_08062350;
  }
LAB_0804b0fa:
  if (DAT_0806235c != '\0') {
    if ((DAT_080624dc != '\0') &&
       (((_DAT_080621e0 != 2 || (iVar10 = memcmp(PTR_DAT_080621e4,&DAT_0805a307,2), iVar10 != 0)) ||
        ((_DAT_080621e8 != 1 || (*PTR_DAT_080621ec != 'm')))))) {
      FUN_0804d9d0();
    }
    iVar10 = 0;
    fflush_unlocked(stdout);
    do {
      iVar27 = (&DAT_0805ace0)[iVar10];
      iVar20 = sigismember((sigset_t *)&DAT_08062380,iVar27);
      if (iVar20 != 0) {
        signal(iVar27,(__sighandler_t)0x0);
      }
      iVar10 = iVar10 + 1;
      iVar27 = DAT_08062340;
    } while (iVar10 != 0xc);
    for (; iVar27 != 0; iVar27 = iVar27 + -1) {
      raise(0x13);
    }
    if (DAT_08062344 != 0) {
      raise(DAT_08062344);
    }
  }
  if (DAT_08062455 != '\0') {
    FUN_0804ca20();
    FUN_0804ca20();
    iVar10 = FUN_08056410(DAT_080624e0);
    __printf_chk(1,"//DIRED-OPTIONS// --quoting-style=%s\n",(&PTR_s_literal_0805d800)[iVar10]);
  }
  if (DAT_08062410 != 0) {
    iVar10 = FUN_08052d20(DAT_08062410);
    if (iVar10 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("hash_get_n_entries (active_dir_set) == 0","ls.c",0x5dc,"main");
    }
    FUN_080532b0(DAT_08062410);
  }
                    // WARNING: Subroutine does not return
  exit(DAT_08062348);
code_r0x0804abcc:
  bVar29 = local_3cc + 6 == (char *)0x0;
  local_3cc = local_3cc + 6;
  goto LAB_0804abd1;
switchD_0804b8b3_caseD_804bad3:
  bVar1 = *local_2a8;
  local_2a8 = local_2a8 + 1;
  uVar12 = 5;
  if (bVar1 == 0x3d) goto code_r0x0804baf4;
  goto switchD_0804b8b3_switchD;
code_r0x0804baf4:
  *(undefined **)(iVar27 + 0xc) = local_2a4;
  cVar9 = FUN_0804c010(iVar27 + 8);
  uVar12 = -(uint)(cVar9 == '\0') & 5;
  goto LAB_0804b8aa;
}



void entry(void)

{
  __libc_start_main(FUN_08049b80);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0804be8a)
// WARNING: Removing unreachable block (ram,0x0804be90)

void FUN_0804be60(void)

{
  if (DAT_08062328 == '\0') {
    DAT_08062328 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0804bed8)

void FUN_0804bec0(void)

{
  return;
}



bool __regparm3 FUN_0804bf90(int param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = *(int *)(&DAT_080621e0 + param_1 * 8);
  bVar1 = false;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      return *(&PTR_DAT_080621e4)[param_1 * 2] != '0';
    }
    bVar5 = iVar2 == 2;
    bVar1 = true;
    if (bVar5) {
      iVar2 = 2;
      pcVar3 = (&PTR_DAT_080621e4)[param_1 * 2];
      pcVar4 = "00";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pcVar3 == *pcVar4;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      return !bVar5;
    }
  }
  return bVar1;
}



uint __regparm3 FUN_0804c010(byte **param_1_00,byte **param_2,char param_3,int *param_1)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar7 = 0;
  iVar6 = 0;
  pbVar5 = *param_1_00;
  pbVar3 = *param_2;
  uVar2 = 0;
  do {
    if (uVar7 == 2) {
      for (; (byte)(*pbVar3 - 0x30) < 8; pbVar3 = pbVar3 + 1) {
        uVar2 = (*pbVar3 - 0x30) + uVar2 * 8;
      }
switchD_0804c125_caseD_a:
      *pbVar5 = (byte)uVar2;
      bVar4 = *pbVar3;
      pbVar5 = pbVar5 + 1;
      iVar6 = iVar6 + 1;
      cVar1 = bVar4 - 0x3d;
      bVar9 = cVar1 == '\0';
      if (!bVar9) goto LAB_0804c04a;
LAB_0804c0c6:
      if (param_3 == '\0') {
LAB_0804c173:
        do {
          pbVar3 = pbVar3 + 1;
          *pbVar5 = bVar4;
          iVar6 = iVar6 + 1;
          pbVar5 = pbVar5 + 1;
LAB_0804c040:
          while( true ) {
            bVar4 = *pbVar3;
            cVar1 = bVar4 - 0x3d;
            bVar9 = bVar4 == 0x3d;
            if (bVar9) goto LAB_0804c0c6;
LAB_0804c04a:
            if (bVar9 || SBORROW1(bVar4,'=') != cVar1 < '\0') {
              if ((bVar4 != 0) && (bVar4 != 0x3a)) goto LAB_0804c173;
              uVar7 = 5;
              goto LAB_0804c194;
            }
            if (bVar4 == 0x5c) {
              pbVar3 = pbVar3 + 1;
              goto LAB_0804c133;
            }
            if (bVar4 != 0x5e) goto LAB_0804c173;
            pbVar3 = pbVar3 + 1;
            bVar4 = *pbVar3;
joined_r0x0804c0f9:
            if ((byte)(bVar4 - 0x40) < 0x3f) break;
            if (bVar4 != 0x3f) {
              uVar2 = 0;
              goto LAB_0804c08a;
            }
            *pbVar5 = 0x7f;
            iVar6 = iVar6 + 1;
            pbVar5 = pbVar5 + 1;
          }
          bVar4 = bVar4 & 0x1f;
        } while( true );
      }
      uVar2 = 1;
      goto LAB_0804c08a;
    }
    if (2 < uVar7) {
      if (uVar7 != 3) {
        if (uVar7 != 4) goto LAB_0804c040;
        bVar4 = *pbVar3;
        goto joined_r0x0804c0f9;
      }
LAB_0804c112:
      uVar8 = (uint)*pbVar3;
      uVar7 = uVar8 - 0x30;
      if ((byte)uVar7 < 0x37) {
        do {
                    // WARNING: Could not find normalized switch variable to match jumptable
          switch(uVar7 & 0xff) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
            uVar2 = (uVar8 - 0x30) + uVar2 * 0x10;
            uVar8 = (uint)pbVar3[1];
            uVar7 = uVar8 - 0x30;
            bVar4 = (byte)uVar7;
            break;
          default:
            goto switchD_0804c125_caseD_a;
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
            uVar2 = (uVar8 - 0x37) + uVar2 * 0x10;
            uVar8 = (uint)pbVar3[1];
            uVar7 = uVar8 - 0x30;
            bVar4 = (byte)uVar7;
            break;
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
            goto switchD_0804c125_caseD_31;
          }
          pbVar3 = pbVar3 + 1;
          if (0x36 < bVar4) break;
        } while( true );
      }
      goto switchD_0804c125_caseD_a;
    }
    if (uVar7 != 1) goto LAB_0804c040;
LAB_0804c133:
    uVar7 = (uint)*pbVar3;
    switch(uVar7) {
    case 0:
      uVar7 = 6;
      goto LAB_0804c14a;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
      uVar2 = uVar7 - 0x30;
      uVar7 = 2;
      goto LAB_0804c14a;
    case 0x3f:
      uVar7 = 0x7f;
      break;
    case 0x58:
    case 0x78:
      uVar7 = 3;
      uVar2 = 0;
      goto LAB_0804c14a;
    case 0x5f:
      uVar7 = 0x20;
      break;
    case 0x61:
      uVar7 = 7;
      break;
    case 0x62:
      uVar7 = 8;
      break;
    case 0x65:
      uVar7 = 0x1b;
      break;
    case 0x66:
      uVar7 = 0xc;
      break;
    case 0x6e:
      uVar7 = 10;
      break;
    case 0x72:
      uVar7 = 0xd;
      break;
    case 0x74:
      uVar7 = 9;
      break;
    case 0x76:
      uVar7 = 0xb;
    }
    uVar2 = uVar7;
    *pbVar5 = (byte)uVar2;
    iVar6 = iVar6 + 1;
    pbVar5 = pbVar5 + 1;
    uVar7 = 0;
LAB_0804c14a:
    pbVar3 = pbVar3 + 1;
  } while (uVar7 < 5);
LAB_0804c194:
  uVar2 = uVar2 & 0xffffff00 | (uint)(uVar7 != 6);
LAB_0804c08a:
  *param_1_00 = pbVar5;
  *param_2 = pbVar3;
  *param_1 = iVar6;
  return uVar2;
switchD_0804c125_caseD_31:
  pbVar3 = pbVar3 + 1;
  uVar2 = (uVar8 - 0x57) + uVar2 * 0x10;
  goto LAB_0804c112;
}



void __regparm3 FUN_0804c2b0(int param_1,int param_2,undefined param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_08058a70(0x10);
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_08058bd0(param_2);
  }
  puVar1[1] = uVar2;
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = FUN_08058bd0(param_1);
  }
  *puVar1 = uVar2;
  *(undefined *)(puVar1 + 2) = param_3;
  puVar1[3] = DAT_08062350;
  DAT_08062350 = puVar1;
  return;
}



void FUN_0804c320(void)

{
  void **ppvVar1;
  uint uVar2;
  
  if (DAT_080624d4 != 0) {
    uVar2 = 0;
    do {
      ppvVar1 = *(void ***)(DAT_08062cb4 + uVar2 * 4);
      free(*ppvVar1);
      free(ppvVar1[1]);
      if ((undefined *)ppvVar1[0x1c] != &DAT_080622b4) {
        freecon(ppvVar1[0x1c]);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_080624d4);
  }
  DAT_080624d4 = 0;
  DAT_08062cb8 = 0;
  DAT_08062cbc = 0;
  DAT_08062cc0 = 0;
  DAT_08062cc4 = 0;
  DAT_08062cc8 = 0;
  DAT_08062ccc = 0;
  DAT_08062cd0 = 0;
  DAT_08062cd4 = 0;
  DAT_08062cd8 = 0;
  DAT_08062cdc = 0;
  DAT_08062ce0 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0804c3f0(void)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = DAT_080624d4;
  if (_DAT_08062ce4 < (DAT_080624d4 >> 1) + DAT_080624d4) {
    free(DAT_08062cb4);
    if (0x15555555 < uVar1) {
                    // WARNING: Subroutine does not return
      FUN_08058c00();
    }
    DAT_08062cb4 = (void *)FUN_08058a70(uVar1 * 0xc);
    _DAT_08062ce4 = DAT_080624d4 * 3;
  }
  pvVar2 = DAT_08062cb4;
  uVar1 = DAT_080624d4;
  if (DAT_080624d4 != 0) {
    uVar3 = 0;
    iVar6 = DAT_080624d0;
    do {
      *(int *)((int)pvVar2 + uVar3 * 4) = iVar6;
      uVar3 = uVar3 + 1;
      iVar6 = iVar6 + 0x80;
    } while (uVar3 != uVar1);
  }
  if (DAT_0806244c != -1) {
    iVar4 = _setjmp((__jmp_buf_tag *)&DAT_08062d00);
    pvVar2 = DAT_08062cb4;
    uVar1 = DAT_080624d4;
    iVar6 = DAT_0806244c;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      if (DAT_0806244c == 3) {
                    // WARNING: Subroutine does not return
        __assert_fail("sort_type != sort_version","ls.c",0xd63,"sort_files");
      }
      uVar3 = 0;
      iVar4 = DAT_080624d0;
      if (DAT_080624d4 != 0) {
        do {
          *(int *)((int)pvVar2 + uVar3 * 4) = iVar4;
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + 0x80;
        } while (uVar3 != uVar1);
      }
      iVar4 = 1;
    }
    iVar5 = 0;
    if (iVar6 == 4) {
      iVar5 = DAT_080624e8;
    }
    FUN_080555b0(pvVar2,uVar1,
                 (&PTR_LAB_0805b1c0)
                 [(uint)DAT_08062453 + ((uint)DAT_080624ec + (iVar4 + (iVar5 + iVar6) * 2) * 2) * 2]
                );
  }
  return;
}



void __regparm3 FUN_0804c810(int param_1)

{
  char **ppcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  void *__ptr;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((param_1 != 0) && (DAT_08062410 != 0)) {
    FUN_0804c2b0();
  }
  iVar7 = DAT_080624d4 * 4;
  iVar6 = DAT_080624d4;
LAB_0804c86b:
  do {
    iVar3 = DAT_08062cb4;
    iVar7 = iVar7 + -4;
    if (iVar6 == 0) {
      iVar5 = 0;
      iVar7 = iVar6;
      if (DAT_080624d4 != 0) {
        do {
          iVar5 = *(int *)(iVar3 + iVar7 * 4);
          iVar2 = *(int *)(iVar5 + 0x68);
          *(int *)(iVar3 + iVar6 * 4) = iVar5;
          iVar7 = iVar7 + 1;
          iVar5 = iVar6 + (uint)(iVar2 != 9);
          iVar6 = iVar5;
        } while (iVar7 != DAT_080624d4);
      }
      DAT_080624d4 = iVar5;
      return;
    }
    iVar6 = iVar6 + -1;
    ppcVar1 = *(char ***)(DAT_08062cb4 + iVar7);
  } while (ppcVar1[0x1a] != (char *)0x9 && ppcVar1[0x1a] != (char *)0x3);
  if (param_1 != 0) goto code_r0x0804c89c;
  goto LAB_0804c850;
code_r0x0804c89c:
  pcVar4 = (char *)FUN_080520b0(*ppcVar1);
  if ((*pcVar4 != '.') ||
     (pcVar4[(pcVar4[1] == '.') + 1] != '/' && pcVar4[(pcVar4[1] == '.') + 1] != '\0')) {
    if (**ppcVar1 == '/') {
LAB_0804c850:
      FUN_0804c2b0();
      pcVar4 = ppcVar1[0x1a];
    }
    else {
      __ptr = (void *)FUN_080522e0(param_1,*ppcVar1,0);
      FUN_0804c2b0();
      free(__ptr);
      pcVar4 = ppcVar1[0x1a];
    }
    if (pcVar4 == (char *)0x9) {
      free(*ppcVar1);
    }
  }
  goto LAB_0804c86b;
}



_IO_FILE * __regparm3 FUN_0804c970(_IO_FILE *param_1,_IO_FILE *param_2)

{
  char *pcVar1;
  _IO_FILE *p_Var2;
  uint uVar3;
  
  if (param_2 <= param_1) {
    return param_1;
  }
  do {
    while ((uVar3 = DAT_0806250c, p_Var2 = stdout, DAT_0806250c != 0 &&
           ((uint)((int)&param_1->_flags + 1U) / DAT_0806250c < (uint)param_2 / DAT_0806250c))) {
      pcVar1 = stdout->_IO_write_ptr;
      if (pcVar1 < stdout->_IO_write_end) {
        *pcVar1 = '\t';
        p_Var2->_IO_write_ptr = pcVar1 + 1;
      }
      else {
        __overflow(stdout,9);
        uVar3 = DAT_0806250c;
      }
      p_Var2 = (_IO_FILE *)((uint)param_1 / uVar3);
      param_1 = (_IO_FILE *)((int)param_1 + (uVar3 - (uint)param_1 % uVar3));
LAB_0804c9bd:
      if (param_2 <= param_1) {
        return p_Var2;
      }
    }
    param_1 = (_IO_FILE *)((int)&param_1->_flags + 1);
    pcVar1 = stdout->_IO_write_ptr;
    if (stdout->_IO_write_end <= pcVar1) {
      p_Var2 = (_IO_FILE *)__overflow(stdout,0x20);
      goto LAB_0804c9bd;
    }
    *pcVar1 = ' ';
    p_Var2->_IO_write_ptr = pcVar1 + 1;
    if (param_2 <= param_1) {
      return p_Var2;
    }
  } while( true );
}



void __regparm3 FUN_0804ca20(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  _IO_FILE *p_Var4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0xc);
  iVar2 = *(int *)(param_2 + 8);
  uVar6 = (uint)(iVar1 - iVar2) >> 2;
  if (uVar6 != 0) {
    if (iVar1 == iVar2) {
      *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) | 2;
    }
    uVar5 = iVar1 + *(uint *)(param_2 + 0x18) & ~*(uint *)(param_2 + 0x18);
    *(uint *)(param_2 + 0xc) = uVar5;
    if (*(int *)(param_2 + 0x10) - *(int *)(param_2 + 4) < (int)(uVar5 - *(int *)(param_2 + 4))) {
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0x10);
    }
    uVar5 = 0;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
    fputs_unlocked(param_1,stdout);
    do {
      iVar1 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      __printf_chk(1,&DAT_0805a08a,*(undefined4 *)(iVar2 + iVar1));
      p_Var4 = stdout;
    } while (uVar5 != uVar6);
    pcVar3 = stdout->_IO_write_ptr;
    if (pcVar3 < stdout->_IO_write_end) {
      *pcVar3 = '\n';
      p_Var4->_IO_write_ptr = pcVar3 + 1;
    }
    else {
      __overflow(stdout,10);
    }
  }
  return;
}



void __regparm3 FUN_0804cae0(char *param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  _IO_FILE *p_Var2;
  int iVar3;
  size_t sVar4;
  
  if (param_1 == (char *)0x0) {
    __printf_chk(1,"%*lu ",param_3,param_2);
  }
  else {
    iVar3 = FUN_08055350(param_1,0);
    iVar3 = param_3 - iVar3;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    fputs_unlocked(param_1,stdout);
    sVar4 = strlen(param_1);
    param_3 = iVar3 + sVar4;
    do {
      p_Var2 = stdout;
      pcVar1 = stdout->_IO_write_ptr;
      if (pcVar1 < stdout->_IO_write_end) {
        *pcVar1 = ' ';
        p_Var2->_IO_write_ptr = pcVar1 + 1;
      }
      else {
        __overflow(stdout,0x20);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  DAT_080624d8 = param_3 + 1 + DAT_080624d8;
  return;
}



void __regparm3 FUN_0804cba0(undefined4 param_1,undefined4 param_2,int param_3)

{
  if ((param_3 != 0) && (DAT_080624ed == '\0')) {
    FUN_08054860(param_1);
    FUN_0804cae0();
    return;
  }
  FUN_0804cae0();
  return;
}



mbstate_t * __regparm3
FUN_0804cbf0(undefined4 param_1_00,undefined4 param_2,undefined4 param_3,mbstate_t **param_1)

{
  char cVar1;
  undefined4 uVar2;
  mbstate_t *pmVar3;
  size_t sVar4;
  int iVar5;
  ushort **ppuVar6;
  mbstate_t *pmVar7;
  size_t sVar8;
  mbstate_t **ppmVar9;
  mbstate_t *pmVar10;
  int in_GS_OFFSET;
  undefined4 uStack8304;
  mbstate_t *local_206c;
  byte *local_2068 [6];
  mbstate_t mStack8272;
  undefined4 local_2044;
  mbstate_t *local_2040;
  mbstate_t **local_203c;
  mbstate_t *local_2038;
  mbstate_t *local_2034;
  mbstate_t *local_2030;
  undefined4 local_202c;
  mbstate_t local_2028 [1024];
  mbstate_t local_28;
  int local_20;
  
  ppmVar9 = &local_206c;
  local_203c = param_1;
  local_2068[2] = (byte *)0xffffffff;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  local_2068[0] = (byte *)0x2000;
  uStack8304 = 0x804cc44;
  local_206c = local_2028;
  local_2068[1] = (byte *)param_2;
  local_2068[3] = (byte *)param_3;
  local_2044 = param_2;
  pmVar3 = (mbstate_t *)FUN_08056510();
  uVar2 = local_2044;
  local_2038 = local_2028;
  if ((mbstate_t *)0x1fff < pmVar3) {
    iVar5 = -((uint)((int)&pmVar3[3].__value + 3U) & 0xfffffff0);
    ppmVar9 = (mbstate_t **)((int)&local_206c + iVar5);
    local_2038 = (mbstate_t *)((int)&mStack8272 + iVar5);
    *(undefined4 *)((int)local_2068 + iVar5 + 0xc) = param_3;
    *(undefined4 *)((int)local_2068 + iVar5 + 8) = 0xffffffff;
    *(undefined4 *)((int)local_2068 + iVar5 + 4) = uVar2;
    *(undefined **)((int)local_2068 + iVar5) = (undefined *)((int)&pmVar3->__count + 1);
    *(mbstate_t **)((int)&local_206c + iVar5) = (mbstate_t *)((int)&mStack8272 + iVar5);
    *(undefined4 *)((int)&uStack8304 + iVar5) = 0x804ce5e;
    FUN_08056510();
  }
  if (DAT_080624e4 == '\0') {
    if (local_203c != (mbstate_t **)0x0) {
      ppmVar9[-1] = (mbstate_t *)0x804cc79;
      sVar4 = __ctype_get_mb_cur_max();
      pmVar10 = local_2038;
      if (sVar4 < 2) {
        local_2030 = (mbstate_t *)0x0;
        pmVar10 = (mbstate_t *)((int)&pmVar3->__count + (int)&local_2038->__count);
        if (local_2038 < pmVar10) {
          ppmVar9[-1] = (mbstate_t *)0x804ce86;
          ppuVar6 = __ctype_b_loc();
          local_2030 = (mbstate_t *)0x0;
          pmVar7 = local_2038;
          do {
            local_2030 = (mbstate_t *)
                         ((int)&local_2030->__count +
                         (uint)(((*ppuVar6)[*(byte *)&pmVar7->__count] & 0x4000) != 0));
            pmVar7 = (mbstate_t *)((int)&pmVar7->__count + 1);
          } while (pmVar7 != pmVar10);
        }
      }
      else {
        ppmVar9[2] = (mbstate_t *)0x0;
        ppmVar9[1] = pmVar3;
        *ppmVar9 = pmVar10;
        ppmVar9[-1] = (mbstate_t *)0x804cc9c;
        local_2030 = (mbstate_t *)FUN_08055160();
      }
    }
  }
  else {
    ppmVar9[-1] = (mbstate_t *)0x804cd07;
    sVar4 = __ctype_get_mb_cur_max();
    if (sVar4 < 2) {
      local_2030 = pmVar3;
      pmVar10 = (mbstate_t *)((int)&pmVar3->__count + (int)&local_2038->__count);
      if (local_2038 < pmVar10) {
        ppmVar9[-1] = (mbstate_t *)0x804cf3c;
        ppuVar6 = __ctype_b_loc();
        pmVar7 = local_2038;
        do {
          if ((*(byte *)((int)*ppuVar6 + (uint)*(byte *)&pmVar7->__count * 2 + 1) & 0x40) == 0) {
            *(undefined *)&pmVar7->__count = 0x3f;
          }
          pmVar7 = (mbstate_t *)((int)&pmVar7->__count + 1);
        } while (pmVar7 != pmVar10);
        local_2030 = pmVar3;
      }
    }
    else {
      local_2034 = (mbstate_t *)((int)&local_2038->__count + (int)&pmVar3->__count);
      local_2030 = (mbstate_t *)0x0;
      pmVar3 = (mbstate_t *)0x0;
      pmVar10 = local_2038;
      pmVar7 = local_2038;
      if (local_2038 < local_2034) {
        do {
          cVar1 = *(char *)&pmVar10->__count;
          if (cVar1 < '`') {
            if ((cVar1 < 'A') &&
               ((cVar1 < ' ' || (('#' < cVar1 && (0x1a < (byte)(cVar1 - 0x25U)))))))
            goto LAB_0804cd78;
LAB_0804cedc:
            *(char *)&pmVar7->__count = cVar1;
            pmVar10 = (mbstate_t *)((int)&pmVar10->__count + 1);
            pmVar7 = (mbstate_t *)((int)&pmVar7->__count + 1);
            local_2030 = (mbstate_t *)((int)&local_2030->__count + 1);
          }
          else {
            if ((byte)(cVar1 + 0x9fU) < 0x1e) goto LAB_0804cedc;
LAB_0804cd78:
            local_28.__count = 0;
            local_28.__value = 0;
            do {
              ppmVar9[3] = &local_28;
              pmVar3 = local_2034;
              ppmVar9[1] = pmVar10;
              *ppmVar9 = (mbstate_t *)&local_202c;
              ppmVar9[2] = (mbstate_t *)((int)pmVar3 - (int)pmVar10);
              ppmVar9[-1] = (mbstate_t *)0x804cdad;
              sVar4 = mbrtowc(&(*ppmVar9)->__count,(char *)ppmVar9[1],(size_t)ppmVar9[2],ppmVar9[3])
              ;
              if (sVar4 == 0xffffffff) {
                *(undefined *)&pmVar7->__count = 0x3f;
                pmVar10 = (mbstate_t *)((int)&pmVar10->__count + 1);
                pmVar7 = (mbstate_t *)((int)&pmVar7->__count + 1);
                local_2030 = (mbstate_t *)((int)&local_2030->__count + 1);
                break;
              }
              if (sVar4 == 0xfffffffe) {
                *(undefined *)&pmVar7->__count = 0x3f;
                local_2030 = (mbstate_t *)((int)&local_2030->__count + 1);
                pmVar3 = (mbstate_t *)((int)pmVar7 + (1 - (int)local_2038));
                goto LAB_0804cca2;
              }
              if (sVar4 == 0) {
                sVar4 = 1;
              }
              *ppmVar9 = (mbstate_t *)local_202c;
              ppmVar9[-1] = (mbstate_t *)0x804cdd9;
              iVar5 = wcwidth((wchar_t)*ppmVar9);
              if (iVar5 < 0) {
                *(undefined *)&pmVar7->__count = 0x3f;
                pmVar7 = (mbstate_t *)((int)&pmVar7->__count + 1);
                local_2030 = (mbstate_t *)((int)&local_2030->__count + 1);
              }
              else {
                sVar8 = 0;
                do {
                  *(undefined *)((int)&pmVar7->__count + sVar8) =
                       *(undefined *)((int)&pmVar10->__count + sVar8);
                  sVar8 = sVar8 + 1;
                } while (sVar4 != sVar8);
                local_2030 = (mbstate_t *)((int)&local_2030->__count + iVar5);
                pmVar7 = (mbstate_t *)((int)&pmVar7->__count + sVar4);
              }
              pmVar10 = (mbstate_t *)((int)&pmVar10->__count + sVar4);
              *ppmVar9 = &local_28;
              ppmVar9[-1] = (mbstate_t *)0x804ce0b;
              iVar5 = mbsinit(*ppmVar9);
            } while (iVar5 == 0);
          }
        } while (pmVar10 < local_2034);
        pmVar3 = (mbstate_t *)((int)pmVar7 - (int)local_2038);
      }
    }
  }
LAB_0804cca2:
  pmVar10 = local_2038;
  if (local_2040 != (mbstate_t *)0x0) {
    ppmVar9[2] = pmVar3;
    ppmVar9[1] = (mbstate_t *)0x1;
    ppmVar9[3] = local_2040;
    *ppmVar9 = pmVar10;
    ppmVar9[-1] = (mbstate_t *)0x804ccd0;
    fwrite_unlocked(*ppmVar9,(size_t)ppmVar9[1],(size_t)ppmVar9[2],(FILE *)ppmVar9[3]);
  }
  if (local_203c != (mbstate_t **)0x0) {
    *local_203c = local_2030;
  }
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    ppmVar9[-1] = (mbstate_t *)&UNK_0804cf6e;
    __stack_chk_fail();
  }
  return pmVar3;
}



byte __regparm3 FUN_0804d260(char param_1,uint param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  
  bVar2 = param_3 == 5;
  if (param_1 != '\0') {
    bVar2 = (param_2 & 0xf000) == 0x8000;
  }
  if (bVar2) {
    bVar1 = 0;
    if ((param_1 != '\0') && (DAT_08062408 == 3)) {
      return ~-((param_2 & 0x49) == 0) & 0x2a;
    }
  }
  else {
    if (param_1 == '\0') {
      bVar2 = param_3 == 9 || param_3 == 3;
    }
    else {
      bVar2 = (param_2 & 0xf000) == 0x4000;
    }
    bVar1 = 0x2f;
    if ((!bVar2) && (bVar1 = 0, DAT_08062408 != 1)) {
      bVar2 = param_3 == 6;
      if (param_1 != '\0') {
        bVar2 = (param_2 & 0xf000) == 0xa000;
      }
      bVar1 = 0x40;
      if (!bVar2) {
        bVar2 = param_3 == 1;
        if (param_1 != '\0') {
          bVar2 = (param_2 & 0xf000) == 0x1000;
        }
        bVar1 = 0x7c;
        if (!bVar2) {
          bVar2 = param_3 == 7;
          if (param_1 != '\0') {
            bVar2 = (param_2 & 0xf000) == 0xc000;
          }
          bVar1 = -bVar2 & 0x3d;
        }
      }
    }
  }
  return bVar1;
}



uint FUN_0804d3a0(void)

{
  char *pcVar1;
  char cVar2;
  _IO_FILE *p_Var3;
  _IO_FILE *p_Var4;
  
  p_Var3 = (_IO_FILE *)FUN_0804d260();
  p_Var4 = stdout;
  cVar2 = (char)p_Var3;
  if (cVar2 != '\0') {
    pcVar1 = stdout->_IO_write_ptr;
    if (pcVar1 < stdout->_IO_write_end) {
      *pcVar1 = cVar2;
      p_Var4->_IO_write_ptr = pcVar1 + 1;
    }
    else {
      p_Var4 = (_IO_FILE *)__overflow(stdout,(uint)p_Var3 & 0xff);
    }
    DAT_080624d8 = DAT_080624d8 + 1;
    p_Var3 = p_Var4;
  }
  return (uint)p_Var3 & 0xffffff00 | (uint)(cVar2 != '\0');
}



int __regparm3 FUN_0804d3f0(int param_1)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  int in_GS_OFFSET;
  int local_2a0;
  undefined local_29c [652];
  int local_10;
  
  iVar5 = 0;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  if ((DAT_080624ee != '\0') && (iVar5 = DAT_08062cbc + 1, DAT_08062360 == 4)) {
    pcVar4 = (char *)FUN_08054c60(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                                  local_29c);
    sVar3 = strlen(pcVar4);
    iVar5 = sVar3 + 1;
  }
  if (DAT_08062451 != '\0') {
    iVar2 = DAT_08062cc0 + 1;
    if ((DAT_08062360 == 4) && (iVar2 = 2, *(char *)(param_1 + 0x74) != '\0')) {
      pcVar4 = (char *)FUN_08053850(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                                    local_29c,DAT_080624fc,0x200,0,DAT_08062500,DAT_08062504);
      sVar3 = strlen(pcVar4);
      iVar2 = sVar3 + 1;
    }
    iVar5 = iVar5 + iVar2;
  }
  if (DAT_08062450 != '\0') {
    sVar3 = DAT_08062cd4;
    if (DAT_08062360 == 4) {
      sVar3 = strlen(*(char **)(param_1 + 0x70));
    }
    iVar5 = iVar5 + sVar3 + 1;
  }
  FUN_0804cbf0(&local_2a0);
  iVar5 = iVar5 + local_2a0;
  if (DAT_08062408 != 0) {
    cVar1 = FUN_0804d260();
    iVar5 = iVar5 + (uint)(cVar1 != '\0');
  }
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void __regparm3 FUN_0804d570(char param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_08056980(param_3);
  piVar2 = __errno_location();
  error(0,*piVar2,param_2,uVar1);
  if (param_1 == '\0') {
    if (DAT_08062348 == 0) {
      DAT_08062348 = 1;
    }
    return;
  }
  DAT_08062348 = 2;
  return;
}



void __regparm3 FUN_0804d600(undefined4 param_1)

{
  int in_GS_OFFSET;
  char local_1b [11];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  __sprintf_chk(local_1b,1,0xb,&DAT_0805a08b,param_1);
  strlen(local_1b);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int __regparm3 FUN_0804d660(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_080624ed == '\0') {
    iVar1 = FUN_08054860(param_1);
    if (iVar1 != 0) {
      iVar2 = FUN_08055350(iVar1,0);
      iVar1 = 0;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      return iVar1;
    }
  }
  iVar1 = FUN_0804d600();
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0804d7a0(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0;
  (*_DAT_080620c0)();
  return;
}



void FUN_0804d940(void)

{
  if (DAT_080621f4 != 0) {
    FUN_0804d980();
    return;
  }
  FUN_0804d980();
  FUN_0804d980();
  FUN_0804d980();
  return;
}



void __regparm3 FUN_0804d980(size_t *param_1)

{
  if (DAT_080624dc == '\0') {
    DAT_080624dc = '\x01';
    FUN_0804d940();
  }
  fwrite_unlocked((void *)param_1[1],*param_1,1,stdout);
  return;
}



void FUN_0804d9d0(void)

{
  FUN_0804d980();
  FUN_0804d980();
  return;
}



int __regparm3 FUN_0804d9f0(char **param_1_00,char param_2,int param_3,uint param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  char *__s;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  sigset_t local_9c;
  
  bVar13 = false;
  if (DAT_0806235c == '\0') goto joined_r0x0804da1e;
  if (param_2 == '\0') {
    __s = *param_1_00;
    if (DAT_0806235d == '\0') {
      uVar6 = (uint)*(byte *)((int)param_1_00 + 0x75);
    }
    else {
      uVar6 = 0;
      if (*(char *)((int)param_1_00 + 0x75) != '\0') {
        pcVar9 = param_1_00[0x1b];
        uVar6 = 1;
        goto LAB_0804dc79;
      }
    }
    pcVar9 = param_1_00[6];
LAB_0804dc79:
    if (*(char *)(param_1_00 + 0x1d) == '\0') {
      iVar2 = *(int *)(&DAT_0805b2a0 + (int)param_1_00[0x1a] * 4);
      if (iVar2 == 5) goto LAB_0804dc96;
    }
    else {
      uVar5 = (uint)pcVar9 & 0xf000;
      if (uVar5 == 0x8000) {
        if (((uint)pcVar9 & 0x800) != 0) {
          cVar1 = FUN_0804bf90();
          iVar2 = 0x10;
          if (cVar1 != '\0') goto LAB_0804daea;
        }
        if (((uint)pcVar9 & 0x400) != 0) {
          cVar1 = FUN_0804bf90();
          iVar2 = 0x11;
          if (cVar1 != '\0') goto LAB_0804daea;
        }
        cVar1 = FUN_0804bf90();
        if ((cVar1 == '\0') || (iVar2 = 0x15, *(char *)(param_1_00 + 0x1f) == '\0')) {
          if (((uint)pcVar9 & 0x49) != 0) {
            cVar1 = FUN_0804bf90();
            iVar2 = 0xe;
            if (cVar1 != '\0') goto LAB_0804daea;
          }
          if ((char *)0x1 < param_1_00[7]) {
            cVar1 = FUN_0804bf90();
            iVar2 = 0x16;
            if (cVar1 != '\0') goto LAB_0804daea;
          }
LAB_0804dc96:
          sVar4 = strlen(__s);
          for (puVar7 = DAT_08062cb0; puVar7 != (uint *)0x0; puVar7 = (uint *)puVar7[4]) {
            uVar6 = *puVar7;
            if ((uVar6 <= sVar4) &&
               (iVar2 = strncmp(__s + (sVar4 - uVar6),(char *)puVar7[1],uVar6), iVar2 == 0)) {
              puVar7 = puVar7 + 2;
              goto LAB_0804daf1;
            }
          }
          iVar2 = 5;
        }
      }
      else if (uVar5 == 0x4000) {
        if (((uint)pcVar9 & 0x202) == 0x202) {
          cVar1 = FUN_0804bf90();
          iVar2 = 0x14;
          if (cVar1 != '\0') goto LAB_0804daea;
        }
        if (((uint)pcVar9 & 2) != 0) {
          cVar1 = FUN_0804bf90();
          iVar2 = 0x13;
          if (cVar1 != '\0') goto LAB_0804daea;
        }
        iVar2 = 6;
        if (((uint)pcVar9 & 0x200) != 0) {
          cVar1 = FUN_0804bf90();
          iVar2 = (-(uint)(cVar1 == '\0') & 0xfffffff4) + 0x12;
        }
      }
      else if (uVar5 == 0xa000) {
        bVar13 = false;
        bVar12 = uVar6 == 0;
        iVar2 = 7;
        if (bVar12) {
          iVar8 = 6;
          iVar2 = 0xd;
          pbVar10 = PTR_s_01_36_0806221c;
          pbVar11 = (byte *)"target";
          do {
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            bVar13 = *pbVar10 < *pbVar11;
            bVar12 = *pbVar10 == *pbVar11;
            pbVar10 = pbVar10 + 1;
            pbVar11 = pbVar11 + 1;
          } while (bVar12);
          if ((!bVar13 && !bVar12) != bVar13) {
            iVar2 = (-(uint)(DAT_0806224c == 0) & 0xfffffffa) + 0xd;
          }
        }
      }
      else {
        iVar2 = 8;
        if (((uVar5 != 0x1000) && (iVar2 = 9, uVar5 != 0xc000)) && (iVar2 = 10, uVar5 != 0x6000)) {
          iVar2 = (uint)(uVar5 != 0x2000) * 2 + 0xb;
        }
      }
    }
  }
  else {
    uVar6 = 0;
    __s = param_1_00[1];
    pcVar9 = param_1_00[0x1b];
    if (*(char *)((int)param_1_00 + 0x75) != '\0') goto LAB_0804dc79;
    iVar2 = 0xc;
    if (DAT_08062244 == 0) {
      uVar6 = 0xffffffff;
      goto LAB_0804dc79;
    }
  }
LAB_0804daea:
  puVar7 = (uint *)(&DAT_080621e0 + iVar2 * 8);
LAB_0804daf1:
  if (puVar7[1] == 0) {
    cVar1 = FUN_0804bf90();
    bVar13 = cVar1 != '\0';
  }
  else {
    cVar1 = FUN_0804bf90();
    if (cVar1 != '\0') {
      FUN_0804d9d0();
    }
    bVar13 = true;
    FUN_0804d980();
    FUN_0804d980();
    FUN_0804d980();
  }
joined_r0x0804da1e:
  if (param_3 == 0) {
    iVar2 = FUN_0804cbf0(0);
    DAT_080624d8 = DAT_080624d8 + iVar2;
  }
  else {
    if (DAT_08062455 != '\0') {
      piVar3 = *(int **)(param_3 + 0xc);
      if (*(int **)(param_3 + 0x10) < piVar3 + 1) {
        _obstack_newchunk(param_3,4);
        piVar3 = *(int **)(param_3 + 0xc);
      }
      *piVar3 = DAT_080624d8;
      *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 4;
    }
    iVar2 = FUN_0804cbf0(0);
    DAT_080624d8 = DAT_080624d8 + iVar2;
    if (DAT_08062455 != '\0') {
      piVar3 = *(int **)(param_3 + 0xc);
      if (*(int **)(param_3 + 0x10) < piVar3 + 1) {
        _obstack_newchunk(param_3,4);
        piVar3 = *(int **)(param_3 + 0xc);
      }
      *piVar3 = DAT_080624d8;
      *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 4;
    }
  }
  if (bVar13) {
    while ((DAT_08062344 != 0 || (DAT_08062340 != 0))) {
      if (DAT_080624dc != '\0') {
        FUN_0804d9d0();
      }
      fflush_unlocked(stdout);
      sigprocmask(0,(sigset_t *)&DAT_08062380,&local_9c);
      iVar8 = DAT_08062344;
      if (DAT_08062340 == 0) {
        signal(DAT_08062344,(__sighandler_t)0x0);
      }
      else {
        DAT_08062340 = DAT_08062340 + -1;
        iVar8 = 0x13;
      }
      raise(iVar8);
      sigprocmask(2,&local_9c,(sigset_t *)0x0);
    }
    FUN_0804d940();
    if (param_1 / DAT_08062508 != (iVar2 + -1 + param_1) / DAT_08062508) {
      FUN_0804d980();
      return iVar2;
    }
  }
  return iVar2;
}



void FUN_0804df20(void)

{
  char cVar1;
  
  if (DAT_0806235c != '\0') {
    cVar1 = FUN_0804bf90();
    if (cVar1 != '\0') {
      FUN_0804d980();
      FUN_0804d980();
      FUN_0804d980();
      return;
    }
  }
  return;
}



int __regparm3 FUN_0804df70(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int in_GS_OFFSET;
  undefined local_29c [652];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  FUN_0804df20();
  if (DAT_080624ee != '\0') {
    puVar1 = &DAT_0805a095;
    if (*(char *)(param_1 + 0x74) != '\0') {
      if ((*(uint *)(param_1 + 100) | *(uint *)(param_1 + 0x60)) != 0) {
        puVar1 = (undefined1 *)
                 FUN_08054c60(*(uint *)(param_1 + 0x60),*(uint *)(param_1 + 100),local_29c);
      }
    }
    uVar2 = 0;
    if (DAT_08062360 != 4) {
      uVar2 = DAT_08062cbc;
    }
    __printf_chk(1,&DAT_0805a0b1,uVar2,puVar1);
  }
  if (DAT_08062451 != '\0') {
    puVar1 = &DAT_0805a095;
    if (*(char *)(param_1 + 0x74) != '\0') {
      puVar1 = (undefined1 *)
               FUN_08053850(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                            local_29c,DAT_080624fc,0x200,0,DAT_08062500,DAT_08062504);
    }
    uVar2 = 0;
    if (DAT_08062360 != 4) {
      uVar2 = DAT_08062cc0;
    }
    __printf_chk(1,&DAT_0805a0b1,uVar2,puVar1);
  }
  if (DAT_08062450 != '\0') {
    uVar2 = 0;
    if (DAT_08062360 != 4) {
      uVar2 = DAT_08062cd4;
    }
    __printf_chk(1,&DAT_0805a0b1,uVar2,*(undefined4 *)(param_1 + 0x70));
  }
  iVar3 = FUN_0804d9f0(param_2);
  if (DAT_08062408 != 0) {
    uVar4 = FUN_0804d3a0();
    iVar3 = iVar3 + (uVar4 & 0xff);
  }
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void __regparm3 FUN_0804e120(undefined4 param_1_00,char *param_2,int param_3,undefined4 param_1)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  int in_GS_OFFSET;
  char local_125 [261];
  int local_20;
  
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  pcVar4 = param_2;
  if (DAT_0806251c != 0) {
    pcVar1 = strstr(param_2,"%b");
    if (pcVar1 != (char *)0x0) {
      sVar2 = strlen(param_2);
      if (sVar2 < 0x66) {
        pcVar4 = local_125;
        pcVar3 = (char *)__mempcpy_chk(pcVar4,param_2,(int)pcVar1 - (int)param_2,0x105);
        pcVar3 = stpcpy(pcVar3,&DAT_08062520 + *(int *)(param_3 + 0x10) * 0xa1);
        strcpy(pcVar3,pcVar1 + 2);
      }
    }
  }
  FUN_08058320(param_1_00,0x3e9,pcVar4,param_3,0,param_1);
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Could not reconcile some variable overlaps

void __regparm3 FUN_0804e240(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  size_t sVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  tm *ptVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  int in_GS_OFFSET;
  int local_1284;
  int local_1274;
  int local_1270;
  time_t local_126c;
  char local_1265 [3643];
  undefined local_42a [1001];
  undefined local_41 [21];
  char local_2c;
  undefined4 local_2b;
  undefined4 local_27;
  ushort local_23;
  undefined local_21;
  int local_20;
  
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  if (*(char *)(param_1 + 0x74) == '\0') {
    local_2b = 0x3f3f3f3f;
    local_27 = 0x3f3f3f3f;
    local_2c = "?pcdb-lswd"[*(int *)(param_1 + 0x68)];
    local_23 = 0x3f3f;
    local_21 = 0;
    if (DAT_08062cb8 != '\0') goto LAB_0804e62e;
LAB_0804e288:
    local_23 = local_23 & 0xff;
LAB_0804e290:
    if (DAT_080624e8 == 1) goto LAB_0804e660;
LAB_0804e29e:
    if (DAT_080624e8 == 0) {
      local_1270 = *(int *)(param_1 + 0x54);
      local_1274 = *(int *)(param_1 + 0x50);
    }
    else {
      if (DAT_080624e8 != 2) {
                    // WARNING: Subroutine does not return
        abort();
      }
      local_1270 = *(int *)(param_1 + 0x4c);
      local_1274 = *(int *)(param_1 + 0x48);
    }
  }
  else {
    FUN_080522d0(param_1 + 8,&local_2c);
    if (DAT_08062cb8 == '\0') goto LAB_0804e288;
LAB_0804e62e:
    if (*(int *)(param_1 + 0x78) == 1) {
      local_23 = CONCAT11(0x2e,(undefined)local_23);
      goto LAB_0804e290;
    }
    if (*(int *)(param_1 + 0x78) != 2) goto LAB_0804e290;
    local_23 = CONCAT11(0x2b,(undefined)local_23);
    if (DAT_080624e8 != 1) goto LAB_0804e29e;
LAB_0804e660:
    local_1270 = *(int *)(param_1 + 0x5c);
    local_1274 = *(int *)(param_1 + 0x58);
  }
  pcVar11 = local_1265;
  if (DAT_080624ee != '\0') {
    puVar2 = &DAT_0805a095;
    if (*(char *)(param_1 + 0x74) != '\0') {
      if ((*(uint *)(param_1 + 100) | *(uint *)(param_1 + 0x60)) != 0) {
        puVar2 = (undefined1 *)
                 FUN_08054c60(*(uint *)(param_1 + 0x60),*(uint *)(param_1 + 100),local_42a);
      }
    }
    __sprintf_chk(local_1265,1,0xe3b,&DAT_0805a0b1,DAT_08062cbc,puVar2);
    sVar3 = strlen(local_1265);
    pcVar11 = local_1265 + sVar3;
  }
  if (DAT_08062451 != '\0') {
    pcVar13 = "?";
    if (*(char *)(param_1 + 0x74) != '\0') {
      pcVar13 = (char *)FUN_08053850(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44)
                                     ,local_42a,DAT_080624fc,0x200,0,DAT_08062500,DAT_08062504);
    }
    iVar8 = DAT_08062cc0;
    iVar4 = FUN_08055350(pcVar13,0);
    if (0 < iVar8 - iVar4) {
      pcVar5 = pcVar11 + (iVar8 - iVar4);
      do {
        *pcVar11 = ' ';
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 != pcVar5);
    }
    do {
      pcVar5 = pcVar11;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar11 = pcVar5 + 1;
      *pcVar5 = cVar1;
    } while (cVar1 != '\0');
    *pcVar5 = ' ';
  }
  puVar2 = &DAT_0805a095;
  if (*(char *)(param_1 + 0x74) != '\0') {
    puVar2 = (undefined1 *)FUN_08054c60(*(undefined4 *)(param_1 + 0x1c),0,local_42a);
  }
  __sprintf_chk(pcVar11,1,0xffffffff,"%s %*s ",&local_2c,DAT_08062cc4,puVar2);
  sVar3 = strlen(pcVar11);
  pcVar11 = pcVar11 + sVar3;
  if (DAT_08062455 != '\0') {
    fwrite_unlocked(&DAT_0805a0a9,1,2,stdout);
    DAT_080624d8 = DAT_080624d8 + 2;
  }
  if ((((DAT_080622a8 != '\0') || (DAT_080622a9 != '\0')) || (DAT_08062510 != '\0')) ||
     (DAT_08062450 != '\0')) {
    fputs_unlocked(local_1265,stdout);
    DAT_080624d8 = pcVar11 + ((int)DAT_080624d8 - (int)local_1265);
    if (DAT_080622a8 != '\0') {
      FUN_0804cba0();
    }
    if (DAT_080622a9 != '\0') {
      if ((*(char *)(param_1 + 0x74) != '\0') && (DAT_080624ed == '\0')) {
        FUN_080549f0(*(undefined4 *)(param_1 + 0x24));
      }
      FUN_0804cae0();
    }
    if (DAT_08062510 != '\0') {
      FUN_0804cba0();
    }
    pcVar11 = local_1265;
    if (DAT_08062450 != '\0') {
      FUN_0804cae0();
    }
  }
  pcVar13 = "?";
  if (*(char *)(param_1 + 0x74) == '\0') {
LAB_0804e4cc:
    iVar8 = DAT_08062ce0;
    iVar4 = FUN_08055350(pcVar13,0);
    if (0 < iVar8 - iVar4) {
      pcVar5 = pcVar11 + (iVar8 - iVar4);
      do {
        *pcVar11 = ' ';
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 != pcVar5);
    }
    do {
      pcVar5 = pcVar11;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar11 = pcVar5 + 1;
      *pcVar5 = cVar1;
    } while (cVar1 != '\0');
    *pcVar5 = ' ';
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x18) & 0xf000;
    if ((uVar6 != 0x6000) && (uVar6 != 0x2000)) {
      pcVar13 = (char *)FUN_08053850(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38)
                                     ,local_42a,DAT_080624fc,1,0,DAT_080622a0,DAT_080622a4);
      goto LAB_0804e4cc;
    }
    iVar12 = ((-2 - DAT_08062cd8) - DAT_08062cdc) + DAT_08062ce0;
    uVar9 = FUN_08054c60(CONCAT31((uint3)((uint)*(undefined4 *)(param_1 + 0x28) >> 0x14) |
                                  (uint3)((uint)(*(int *)(param_1 + 0x2c) << 0x14) >> 8),
                                  *(undefined *)(param_1 + 0x28)),0,local_41);
    iVar8 = DAT_08062cdc;
    uVar10 = FUN_08054c60(*(uint *)(param_1 + 0x2c) & 0xfffff000 |
                          *(uint *)(param_1 + 0x28) >> 8 & 0xfff,0,local_42a);
    iVar4 = 0;
    if (-1 < iVar12) {
      iVar4 = iVar12;
    }
    __sprintf_chk(pcVar11,1,0xffffffff,&DAT_0805a0ac,iVar4 + DAT_08062cd8,uVar10,iVar8,uVar9);
    pcVar11 = pcVar11 + DAT_08062ce0 + 1;
  }
  puVar2 = &DAT_0805a095;
  ptVar7 = localtime(&local_1274);
  *pcVar11 = '\x01';
  if (*(char *)(param_1 + 0x74) != '\0') {
    if (ptVar7 != (tm *)0x0) {
      local_1284 = DAT_08062358;
      if ((DAT_08062354 < local_1274) ||
         ((DAT_08062354 <= local_1274 && (DAT_08062358 - local_1270 < 0)))) {
        FUN_08052840(&DAT_08062354);
        local_1284 = DAT_08062358;
      }
      DAT_08062358 = local_1284;
      iVar8 = FUN_0804e120(local_1270);
      if ((iVar8 != 0) || (*pcVar11 == '\0')) {
        pcVar13 = pcVar11 + iVar8;
        *pcVar13 = ' ';
        pcVar11 = pcVar13 + 1;
        pcVar13[1] = '\0';
        goto LAB_0804e575;
      }
      puVar2 = &DAT_0805a095;
      if (*(char *)(param_1 + 0x74) == '\0') goto LAB_0804e536;
    }
    puVar2 = (undefined1 *)FUN_08054b80(local_1274,local_1274 >> 0x1f,local_41);
  }
LAB_0804e536:
  if (DAT_080622b8 < 0) {
    local_126c = 0;
    ptVar7 = localtime(&local_126c);
    if (ptVar7 != (tm *)0x0) {
      iVar8 = FUN_0804e120(0);
      if (iVar8 != 0) {
        DAT_080622b8 = FUN_08055160(local_42a,iVar8,0);
      }
      if (-1 < DAT_080622b8) goto LAB_0804e543;
    }
    DAT_080622b8 = 0;
  }
LAB_0804e543:
  __sprintf_chk(pcVar11,1,0xffffffff,&DAT_0805a0b1,DAT_080622b8,puVar2);
  sVar3 = strlen(pcVar11);
  pcVar11 = pcVar11 + sVar3;
LAB_0804e575:
  iVar4 = (int)pcVar11 - (int)local_1265;
  fputs_unlocked(local_1265,stdout);
  DAT_080624d8 = DAT_080624d8 + iVar4;
  iVar8 = FUN_0804d9f0(iVar4);
  if (*(int *)(param_1 + 0x68) == 6) {
    if (*(int *)(param_1 + 4) != 0) {
      fwrite_unlocked(&DAT_0805a0b6,1,4,stdout);
      DAT_080624d8 = DAT_080624d8 + 4;
      FUN_0804d9f0(iVar4 + 4 + iVar8);
      if (DAT_08062408 != 0) {
        FUN_0804d3a0();
      }
    }
  }
  else if (DAT_08062408 != 0) {
    FUN_0804d3a0();
  }
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 __regparm3 FUN_0804eb40(char *param_1_00,char *param_2,char param_3,undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  int *piVar7;
  size_t sVar8;
  char **ppcVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  char **ppcVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  char *pcVar19;
  int in_GS_OFFSET;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  uint local_344;
  char acStack832 [4];
  char *local_33c;
  undefined4 *local_338;
  char *local_334;
  undefined4 *local_330;
  char local_324 [16];
  uint local_314;
  char local_2c1 [652];
  char local_35 [21];
  int local_20;
  
  bVar22 = 0;
  ppcVar16 = (char **)&stack0xfffffc94;
  local_33c = param_2;
  acStack832[3] = param_3;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  local_334 = param_1_00;
  local_338 = param_1;
  if (DAT_080624d4 == _DAT_080624cc) {
    if (0xffffff < DAT_080624d4) {
                    // WARNING: Subroutine does not return
      FUN_08058c00();
    }
    DAT_080624d0 = FUN_08058aa0();
    _DAT_080624cc = _DAT_080624cc << 1;
  }
  local_330 = (undefined4 *)(DAT_080624d4 * 0x80 + DAT_080624d0);
  bVar20 = ((uint)local_330 & 1) != 0;
  uVar15 = 0x80;
  puVar18 = local_330;
  if (bVar20) {
    *(undefined *)local_330 = 0;
    uVar15 = 0x7f;
    puVar18 = (undefined4 *)((int)local_330 + 1);
  }
  if (((uint)puVar18 & 2) != 0) {
    *(undefined2 *)puVar18 = 0;
    uVar15 = uVar15 - 2;
    puVar18 = (undefined4 *)((int)puVar18 + 2);
  }
  for (uVar13 = uVar15 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar18 = 0;
    puVar18 = puVar18 + (uint)bVar22 * -2 + 1;
  }
  if ((uVar15 & 2) != 0) {
    *(undefined2 *)puVar18 = 0;
    puVar18 = (undefined4 *)((int)puVar18 + 2);
  }
  if (bVar20) {
    *(undefined *)puVar18 = 0;
  }
  local_330[0x18] = 0;
  local_330[0x19] = 0;
  local_330[0x1a] = local_33c;
  if (((acStack832[3] == '\0') && (DAT_08062452 == '\0')) &&
     (((local_33c != (char *)0x3 || (DAT_0806235c == '\0')) ||
      (((cVar3 = FUN_0804bf90(), cVar3 == '\0' && (cVar3 = FUN_0804bf90(), cVar3 == '\0')) &&
       (cVar3 = FUN_0804bf90(), cVar3 == '\0')))))) {
    if (DAT_080624ee != '\0') {
LAB_0804eec4:
      if ((((local_33c != (char *)0x0) && (local_33c != (char *)0x6)) ||
          ((DAT_08062400 != 5 && ((DAT_0806235d == '\0' && (DAT_08062364 == '\0')))))) &&
         (DAT_080624ee == '\0')) {
        if (DAT_08062454 == '\0') {
          uVar17 = 0;
          pcVar19 = (char *)0x0;
          ppcVar16 = (char **)&stack0xfffffc94;
          goto LAB_0804edf4;
        }
        if (local_33c != (char *)0x0) {
          uVar17 = 0;
          pcVar19 = (char *)0x0;
          ppcVar16 = (char **)&stack0xfffffc94;
          if ((local_33c != (char *)0x5) ||
             ((DAT_08062408 != 3 &&
              ((ppcVar16 = (char **)&stack0xfffffc94, DAT_0806235c == '\0' ||
               ((((cVar3 = FUN_0804bf90(), cVar3 == '\0' && (cVar3 = FUN_0804bf90(), cVar3 == '\0'))
                 && (cVar3 = FUN_0804bf90(), cVar3 == '\0')) &&
                (cVar3 = FUN_0804bf90(), ppcVar16 = (char **)&stack0xfffffc94, cVar3 == '\0'))))))))
          goto LAB_0804edf4;
        }
      }
      goto LAB_0804ec0b;
    }
    uVar17 = 0;
    pcVar19 = (char *)0x0;
    if (DAT_08062454 != '\0') goto LAB_0804eec4;
  }
  else {
LAB_0804ec0b:
    uVar15 = DAT_08062400;
    pcVar19 = local_334;
    ppcVar16 = (char **)&stack0xfffffc94;
    if ((*local_334 != '/') && (ppcVar16 = (char **)&stack0xfffffc94, *(char *)local_338 != '\0')) {
      sVar6 = strlen(local_334);
      sVar8 = strlen((char *)local_338);
      iVar5 = -(sVar6 + 0x20 + sVar8 & 0xfffffff0);
      ppcVar16 = (char **)(&stack0xfffffc94 + iVar5);
      pcVar19 = acStack832 + iVar5;
      cVar3 = *(char *)local_338;
      cVar1 = cVar3;
      if (cVar3 == '.') {
        cVar1 = *(char *)((int)local_338 + 1);
      }
      pcVar10 = pcVar19;
      puVar18 = local_338;
      if (cVar1 != '\0') {
        do {
          puVar14 = puVar18;
          pcVar11 = pcVar10;
          puVar18 = (undefined4 *)((int)puVar14 + 1);
          *pcVar11 = cVar3;
          cVar3 = *(char *)puVar18;
          pcVar10 = pcVar11 + 1;
        } while (cVar3 != '\0');
        if ((local_338 < puVar18) && (*(char *)puVar14 != '/')) {
          *pcVar10 = '/';
          pcVar10 = pcVar11 + 2;
        }
      }
      cVar3 = *local_334;
      pcVar11 = local_334;
      while (cVar3 != '\0') {
        pcVar11 = pcVar11 + 1;
        *pcVar10 = cVar3;
        pcVar10 = pcVar10 + 1;
        cVar3 = *pcVar11;
      }
      *pcVar10 = '\0';
    }
    puVar18 = local_330 + 2;
    local_338 = puVar18;
    if (uVar15 < 3) {
LAB_0804ec3d:
      puVar18 = local_338;
      bVar20 = false;
      ppcVar16[1] = pcVar19;
      *ppcVar16 = (char *)0x3;
      ppcVar16[2] = (char *)puVar18;
      ppcVar16[-1] = (char *)0x804ec59;
      local_344 = __lxstat64((int)*ppcVar16,ppcVar16[1],(stat64 *)ppcVar16[2]);
    }
    else {
      if (4 < uVar15) {
        if (uVar15 == 5) {
          ppcVar16[2] = (char *)puVar18;
          bVar20 = true;
          ppcVar16[1] = pcVar19;
          *ppcVar16 = (char *)0x3;
          ppcVar16[-1] = (char *)0x804ee5b;
          local_344 = __xstat64((int)*ppcVar16,ppcVar16[1],(stat64 *)ppcVar16[2]);
          goto joined_r0x0804ee5f;
        }
        goto LAB_0804ec3d;
      }
      if (acStack832[3] == '\0') goto LAB_0804ec3d;
      bVar20 = true;
      ppcVar16[1] = pcVar19;
      *ppcVar16 = (char *)0x3;
      ppcVar16[2] = (char *)puVar18;
      ppcVar16[-1] = (char *)0x804f0ec;
      local_344 = __xstat64((int)*ppcVar16,ppcVar16[1],(stat64 *)ppcVar16[2]);
      if (uVar15 != 3) {
        if ((int)local_344 < 0) {
          ppcVar16[-1] = (char *)0x804f70c;
          piVar7 = __errno_location();
          bVar21 = *piVar7 == 2;
        }
        else {
          bVar21 = (local_330[6] & 0xf000) != 0x4000;
        }
        bVar20 = true;
        if (bVar21) goto LAB_0804ec3d;
      }
    }
joined_r0x0804ee5f:
    if (local_344 == 0) {
      *(undefined *)(local_330 + 0x1d) = 1;
      if (((local_33c == (char *)0x5) || ((local_330[6] & 0xf000) == 0x8000)) &&
         (DAT_0806235c != '\0')) {
        ppcVar16[-1] = (char *)0x804efbd;
        cVar3 = FUN_0804bf90();
        if (cVar3 != '\0') {
          *(undefined *)(local_330 + 0x1f) = 0;
        }
      }
      puVar18 = local_330;
      if ((DAT_08062360 == 0) || (DAT_08062450 != '\0')) {
        *ppcVar16 = pcVar19;
        ppcVar16[1] = (char *)(puVar18 + 0x1c);
        if (bVar20) {
          ppcVar16[-1] = (char *)0x804f005;
          iVar5 = FUN_08059550();
        }
        else {
          ppcVar16[-1] = (char *)0x804f15d;
          iVar5 = FUN_080595e0();
        }
        bVar20 = iVar5 == 0;
        if (iVar5 < 0) {
          local_330[0x1c] = &DAT_080622b4;
          ppcVar16[-1] = (char *)0x804f140;
          piVar7 = __errno_location();
          if ((*piVar7 == 0x3d) || (*piVar7 == 0x5f)) {
            local_344._0_1_ = false;
            goto LAB_0804f02b;
          }
          local_330[0x1e] = 0;
        }
        else {
          iVar5 = 10;
          pcVar10 = "unlabeled";
          pcVar11 = (char *)local_330[0x1c];
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar20 = *pcVar10 == *pcVar11;
            pcVar10 = pcVar10 + (uint)bVar22 * -2 + 1;
            pcVar11 = pcVar11 + (uint)bVar22 * -2 + 1;
          } while (bVar20);
          local_344._0_1_ = !bVar20;
LAB_0804f02b:
          puVar18 = local_338;
          bVar20 = false;
          if (DAT_08062360 == 0) {
            *ppcVar16 = pcVar19;
            ppcVar16[1] = (char *)puVar18;
            ppcVar16[-1] = (char *)0x804f398;
            uVar15 = FUN_08051aa0();
            local_344 = uVar15 >> 0x1f;
            bVar20 = 0 < (int)uVar15;
          }
          if ((char)local_344 == '\0') {
            if (bVar20) goto LAB_0804f078;
            bVar22 = 0;
            uVar17 = 0;
          }
          else {
            bVar22 = 1;
            uVar17 = 1;
            if (bVar20) {
LAB_0804f078:
              bVar22 = 1;
              uVar17 = 2;
            }
          }
          DAT_08062cb8 = DAT_08062cb8 | bVar22;
          local_330[0x1e] = uVar17;
          if (local_344 == 0) goto LAB_0804eca7;
        }
        *ppcVar16 = pcVar19;
        ppcVar16[-1] = (char *)0x804f33e;
        pcVar10 = (char *)FUN_08056980();
        ppcVar16[-1] = (char *)0x804f345;
        ppcVar9 = (char **)__errno_location();
        ppcVar16[3] = pcVar10;
        ppcVar16[2] = "%s";
        pcVar10 = *ppcVar9;
        *ppcVar16 = (char *)0x0;
        ppcVar16[1] = pcVar10;
        ppcVar16[-1] = (char *)0x804f363;
        error();
      }
LAB_0804eca7:
      uVar15 = local_330[6];
      uVar13 = uVar15 & 0xf000;
      if (uVar13 == 0xa000) {
        if ((DAT_08062360 == 0) || (DAT_08062364 != '\0')) {
          pcVar10 = (char *)local_330[0xd];
          *ppcVar16 = pcVar19;
          ppcVar16[1] = pcVar10;
          ppcVar16[-1] = (char *)0x804f55d;
          pcVar10 = (char *)FUN_08051b00();
          local_330[1] = pcVar10;
          if (pcVar10 == (char *)0x0) {
            ppcVar16[2] = (char *)0x5;
            pcVar11 = (char *)0x0;
            ppcVar16[1] = "cannot read symbolic link %s";
            *ppcVar16 = (char *)0x0;
            ppcVar16[-1] = (char *)0x804f795;
            dcgettext();
            ppcVar16[-1] = (char *)0x804f7a5;
            FUN_0804d570();
            pcVar10 = (char *)local_330[1];
            if (pcVar10 != (char *)0x0) goto LAB_0804f570;
          }
          else {
LAB_0804f570:
            if (*pcVar10 == '/') {
LAB_0804f768:
              *ppcVar16 = pcVar10;
              ppcVar16[-1] = (char *)0x804f770;
              pcVar11 = (char *)FUN_08058bd0();
            }
            else {
              ppcVar16[1] = (char *)0x2f;
              *ppcVar16 = pcVar19;
              ppcVar16[-1] = (char *)0x804f589;
              pcVar11 = strrchr(*ppcVar16,(int)ppcVar16[1]);
              if (pcVar11 == (char *)0x0) goto LAB_0804f768;
              *ppcVar16 = pcVar10;
              local_33c = pcVar11 + (1 - (int)pcVar19);
              ppcVar16[-1] = (char *)0x804f5a6;
              sVar6 = strlen(*ppcVar16);
              *ppcVar16 = pcVar11 + sVar6 + (2 - (int)pcVar19);
              ppcVar16[-1] = (char *)0x804f5b2;
              pcVar11 = (char *)FUN_08058a70();
              pcVar2 = local_33c;
              ppcVar16[1] = pcVar19;
              ppcVar16[2] = pcVar2;
              *ppcVar16 = pcVar11;
              ppcVar16[-1] = (char *)0x804f5ca;
              strncpy(*ppcVar16,ppcVar16[1],(size_t)ppcVar16[2]);
              pcVar19 = local_33c;
              ppcVar16[1] = pcVar10;
              *ppcVar16 = pcVar19 + (int)pcVar11;
              ppcVar16[-1] = (char *)0x804f5de;
              strcpy(*ppcVar16,ppcVar16[1]);
            }
            if ((pcVar11 != (char *)0x0) && ((1 < DAT_08062408 || (DAT_08062364 != '\0')))) {
              ppcVar16[2] = local_324;
              ppcVar16[1] = pcVar11;
              *ppcVar16 = (char *)0x3;
              ppcVar16[-1] = (char *)0x804f609;
              iVar5 = __xstat64((int)*ppcVar16,ppcVar16[1],(stat64 *)ppcVar16[2]);
              if ((iVar5 == 0) &&
                 (((*(undefined *)((int)local_330 + 0x75) = 1, acStack832[3] == '\0' ||
                   (DAT_08062360 == 0)) || ((local_314 & 0xf000) != 0x4000)))) {
                local_330[0x1b] = local_314;
              }
            }
          }
          *ppcVar16 = pcVar11;
          ppcVar16[-1] = (char *)0x804f651;
          free(*ppcVar16);
          uVar15 = local_330[6];
          uVar13 = uVar15 & 0xf000;
          if (uVar13 == 0xa000) {
            if (DAT_08062364 == '\0') goto LAB_0804f4d3;
            goto LAB_0804f4ef;
          }
          goto LAB_0804ecc2;
        }
LAB_0804f4d3:
        *(undefined *)((int)local_330 + 0x75) = 1;
        uVar13 = uVar15 & 0xf000;
        if (uVar13 != 0xa000) goto LAB_0804ecc2;
LAB_0804f4ef:
        local_330[0x1a] = 6;
      }
      else {
LAB_0804ecc2:
        if (uVar13 == 0x4000) {
          if ((acStack832[3] == '\0') || (DAT_08062404 != '\0')) {
            local_330[0x1a] = 3;
          }
          else {
            local_330[0x1a] = 9;
          }
        }
        else {
          local_330[0x1a] = 5;
        }
      }
      uVar17 = local_330[0x10];
      pcVar19 = (char *)local_330[0x11];
      if ((DAT_08062360 == 0) || (DAT_08062451 != '\0')) {
        ppcVar16[4] = (char *)0x200;
        ppcVar16[5] = (char *)0x0;
        ppcVar16[6] = DAT_08062500;
        ppcVar16[7] = DAT_08062504;
        *ppcVar16 = (char *)uVar17;
        ppcVar16[1] = pcVar19;
        ppcVar16[3] = DAT_080624fc;
        ppcVar16[2] = local_2c1;
        ppcVar16[-1] = (char *)0x804ed3e;
        uVar4 = FUN_08053850();
        ppcVar16[1] = (char *)0x0;
        *ppcVar16 = (char *)uVar4;
        ppcVar16[-1] = (char *)0x804ed4e;
        iVar5 = FUN_08055350();
        if (DAT_08062cc0 < iVar5) {
          DAT_08062cc0 = iVar5;
        }
        if (DAT_08062360 == 0) {
          if (DAT_080622a8 != '\0') {
            ppcVar16[-1] = (char *)0x804f6ae;
            iVar5 = FUN_0804d660();
            if (DAT_08062cc8 < iVar5) {
              DAT_08062cc8 = iVar5;
            }
          }
          if (DAT_080622a9 != '\0') {
            if (DAT_080624ed == '\0') {
              *ppcVar16 = (char *)local_330[9];
              ppcVar16[-1] = (char *)0x804f740;
              iVar5 = FUN_080549f0();
              if (iVar5 == 0) goto LAB_0804ed90;
              ppcVar16[1] = (char *)0x0;
              *ppcVar16 = (char *)iVar5;
              ppcVar16[-1] = (char *)0x804f758;
              iVar12 = FUN_08055350();
              iVar5 = 0;
              if (-1 < iVar12) {
                iVar5 = iVar12;
              }
            }
            else {
LAB_0804ed90:
              ppcVar16[-1] = (char *)0x804ed97;
              iVar5 = FUN_0804d600();
            }
            if (DAT_08062ccc < iVar5) {
              DAT_08062ccc = iVar5;
            }
          }
          if (DAT_08062510 != '\0') {
            ppcVar16[-1] = (char *)0x804f6d6;
            iVar5 = FUN_0804d660();
            if (DAT_08062cd0 < iVar5) {
              DAT_08062cd0 = iVar5;
            }
          }
        }
      }
      if (DAT_08062450 == '\0') {
LAB_0804edd8:
        if (DAT_08062360 != 0) goto LAB_0804ede5;
LAB_0804f252:
        ppcVar16[2] = local_35;
        uVar4 = local_330[7];
        ppcVar16[1] = (char *)0x0;
        *ppcVar16 = (char *)uVar4;
        ppcVar16[-1] = (char *)0x804f272;
        uVar4 = FUN_08054c60();
        *ppcVar16 = (char *)uVar4;
        ppcVar16[-1] = (char *)0x804f27a;
        sVar6 = strlen(*ppcVar16);
        puVar18 = local_330;
        if ((int)DAT_08062cc4 < (int)sVar6) {
          DAT_08062cc4 = sVar6;
        }
        if (((local_330[6] & 0xf000) != 0x6000) && ((local_330[6] & 0xf000) != 0x2000)) {
          ppcVar16[4] = (char *)0x1;
          ppcVar16[6] = DAT_080622a0;
          ppcVar16[5] = (char *)0x0;
          ppcVar16[7] = DAT_080622a4;
          ppcVar16[3] = DAT_080624fc;
          ppcVar16[2] = local_2c1;
          pcVar10 = (char *)puVar18[0xe];
          *ppcVar16 = (char *)puVar18[0xd];
          ppcVar16[1] = pcVar10;
          ppcVar16[-1] = (char *)0x804f2f9;
          uVar4 = FUN_08053850();
          ppcVar16[1] = (char *)0x0;
          *ppcVar16 = (char *)uVar4;
          ppcVar16[-1] = (char *)0x804f309;
          iVar5 = FUN_08055350();
          if (DAT_08062ce0 < iVar5) {
            DAT_08062ce0 = iVar5;
          }
          goto LAB_0804ede5;
        }
        uVar15 = local_330[0xb];
        uVar13 = local_330[10];
        ppcVar16[2] = local_2c1;
        ppcVar16[1] = (char *)0x0;
        *ppcVar16 = (char *)(uVar15 & 0xfffff000 | uVar13 >> 8 & 0xfff);
        ppcVar16[-1] = (char *)0x804f431;
        uVar4 = FUN_08054c60();
        *ppcVar16 = (char *)uVar4;
        ppcVar16[-1] = (char *)0x804f439;
        sVar6 = strlen(*ppcVar16);
        if ((int)DAT_08062cd8 < (int)sVar6) {
          DAT_08062cd8 = sVar6;
        }
        uVar15 = local_330[10];
        iVar5 = local_330[0xb];
        ppcVar16[2] = local_2c1;
        ppcVar16[1] = (char *)0x0;
        *ppcVar16 = (char *)((uint)(uint3)((uint3)(uVar15 >> 0x14) |
                                          (uint3)((uint)(iVar5 << 0x14) >> 8)) << 8 | uVar15 & 0xff)
        ;
        ppcVar16[-1] = (char *)0x804f479;
        uVar4 = FUN_08054c60();
        *ppcVar16 = (char *)uVar4;
        ppcVar16[-1] = (char *)0x804f481;
        sVar6 = strlen(*ppcVar16);
        if ((int)DAT_08062cdc < (int)sVar6) {
          DAT_08062cdc = sVar6;
        }
        iVar5 = DAT_08062cdc + 2 + DAT_08062cd8;
        if (iVar5 <= DAT_08062ce0) goto LAB_0804ede5;
      }
      else {
        *ppcVar16 = (char *)local_330[0x1c];
        ppcVar16[-1] = (char *)0x804edcc;
        sVar6 = strlen(*ppcVar16);
        if ((int)sVar6 <= (int)DAT_08062cd4) goto LAB_0804edd8;
        DAT_08062cd4 = sVar6;
        if (DAT_08062360 == 0) goto LAB_0804f252;
LAB_0804ede5:
        iVar5 = DAT_08062ce0;
      }
      DAT_08062ce0 = iVar5;
      puVar18 = local_330;
      if (DAT_080624ee != '\0') {
        ppcVar16[2] = local_2c1;
        pcVar10 = (char *)puVar18[0x19];
        *ppcVar16 = (char *)puVar18[0x18];
        ppcVar16[1] = pcVar10;
        ppcVar16[-1] = (char *)0x804f18a;
        uVar4 = FUN_08054c60();
        *ppcVar16 = (char *)uVar4;
        ppcVar16[-1] = (char *)0x804f192;
        sVar6 = strlen(*ppcVar16);
        if ((int)DAT_08062cbc < (int)sVar6) {
          DAT_08062cbc = sVar6;
        }
      }
    }
    else {
      ppcVar16[2] = (char *)0x5;
      uVar17 = 0;
      pcVar19 = (char *)0x0;
      ppcVar16[1] = "cannot access %s";
      *ppcVar16 = (char *)0x0;
      ppcVar16[-1] = (char *)0x804ee85;
      dcgettext();
      ppcVar16[-1] = (char *)0x804ee95;
      FUN_0804d570();
      if (acStack832[3] != '\0') goto LAB_0804ee11;
    }
  }
LAB_0804edf4:
  *ppcVar16 = local_334;
  ppcVar16[-1] = (char *)0x804ee02;
  uVar4 = FUN_08058bd0();
  DAT_080624d4 = DAT_080624d4 + 1;
  *local_330 = uVar4;
LAB_0804ee11:
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return CONCAT44(pcVar19,uVar17);
  }
                    // WARNING: Subroutine does not return
  *(undefined4 *)((int)ppcVar16 + -4) = 0x804f7c0;
  __stack_chk_fail();
}



void __regparm3 FUN_0804f7e0(char param_1)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint local_34;
  
  uVar7 = DAT_080624d4;
  if (DAT_08062514 <= DAT_080624d4) {
    uVar7 = DAT_08062514;
  }
  uVar11 = DAT_08062da0;
  if (DAT_08062da0 < uVar7) {
    if (uVar7 < DAT_08062514 >> 1) {
      if (0xaaaaaaa < uVar7) goto LAB_0804fa6d;
      uVar11 = uVar7 * 2;
      DAT_08062d9c = (char *)FUN_08058aa0(DAT_08062d9c,uVar7 * 0x18);
    }
    else {
      if (0x15555555 < DAT_08062514) goto LAB_0804fa6d;
      DAT_08062d9c = (char *)FUN_08058aa0(DAT_08062d9c,DAT_08062514 * 0xc);
      uVar11 = DAT_08062514;
    }
    uVar14 = uVar11 + 1 + DAT_08062da0;
    if (((uVar14 < uVar11) ||
        (uVar13 = uVar14 * (uVar11 - DAT_08062da0), uVar14 != uVar13 / (uVar11 - DAT_08062da0))) ||
       (uVar13 = uVar13 >> 1, 0x3fffffff < uVar13)) {
LAB_0804fa6d:
                    // WARNING: Subroutine does not return
      FUN_08058c00();
    }
    iVar5 = FUN_08058a70(uVar13 << 2);
    if (DAT_08062da0 < uVar11) {
      uVar14 = DAT_08062da0 + 1;
      piVar8 = (int *)(DAT_08062d9c + DAT_08062da0 * 0xc + 8);
      iVar9 = uVar14 * 4;
      while( true ) {
        *piVar8 = iVar5;
        iVar5 = iVar5 + iVar9;
        piVar8 = piVar8 + 3;
        iVar9 = iVar9 + 4;
        if (uVar11 <= uVar14) break;
        uVar14 = uVar14 + 1;
      }
    }
  }
  DAT_08062da0 = uVar11;
  uVar11 = DAT_080624d4;
  if (uVar7 != 0) {
    iVar5 = 3;
    uVar14 = 0;
    pcVar12 = DAT_08062d9c;
    do {
      iVar9 = *(int *)(pcVar12 + 8);
      uVar13 = uVar14 + 1;
      uVar6 = 0;
      *pcVar12 = '\x01';
      *(int *)(pcVar12 + 4) = iVar5;
      do {
        *(undefined4 *)(iVar9 + uVar6 * 4) = 3;
        uVar6 = uVar6 + 1;
      } while (uVar6 <= uVar14);
      pcVar12 = pcVar12 + 0xc;
      iVar5 = iVar5 + 3;
      uVar14 = uVar13;
    } while (uVar13 != uVar7);
  }
  if (uVar11 != 0) {
    local_34 = 0;
    do {
      iVar5 = FUN_0804d3f0();
      uVar14 = DAT_08062508;
      uVar11 = DAT_080624d4;
      if (uVar7 != 0) {
        uVar13 = 1;
        pcVar12 = DAT_08062d9c;
        uVar6 = DAT_080624d4;
        do {
          if (*pcVar12 != '\0') {
            if (param_1 == '\0') {
              uVar10 = local_34 % uVar13;
            }
            else {
              uVar10 = (uint)((ulonglong)local_34 / ((ulonglong)uVar6 / (ulonglong)uVar13));
            }
            uVar1 = iVar5 + (uint)(uVar13 - 1 != uVar10) * 2;
            puVar2 = (uint *)(*(int *)(pcVar12 + 8) + uVar10 * 4);
            uVar10 = *puVar2;
            if (uVar10 < uVar1) {
              *(uint *)(pcVar12 + 4) = *(int *)(pcVar12 + 4) + (uVar1 - uVar10);
              *puVar2 = uVar1;
              *pcVar12 = *(uint *)(pcVar12 + 4) < uVar14;
            }
          }
          pcVar12 = pcVar12 + 0xc;
          uVar6 = uVar6 + 1;
          bVar4 = uVar13 < uVar7;
          uVar13 = uVar13 + 1;
        } while (bVar4);
      }
      local_34 = local_34 + 1;
    } while (local_34 < uVar11);
  }
  if ((1 < uVar7) && (DAT_08062d9c[(uVar7 * 3 + -3) * 4] == '\0')) {
    pcVar12 = DAT_08062d9c + uVar7 * 0xc + -0x18;
    do {
      uVar7 = uVar7 - 1;
      if (uVar7 == 1) {
        return;
      }
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + -0xc;
    } while (cVar3 == '\0');
  }
  return;
}



void FUN_0804fa80(void)

{
  char *pcVar1;
  _IO_FILE *p_Var2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  int local_34;
  uint local_20;
  
  switch(DAT_08062360) {
  case 0:
    uVar5 = 0;
    if (DAT_080624d4 != 0) {
      do {
        FUN_0804df20();
        FUN_0804e240();
        p_Var2 = stdout;
        pcVar1 = stdout->_IO_write_ptr;
        if (pcVar1 < stdout->_IO_write_end) {
          *pcVar1 = '\n';
          p_Var2->_IO_write_ptr = pcVar1 + 1;
        }
        else {
          __overflow(stdout,10);
        }
        DAT_080624d8 = DAT_080624d8 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 < DAT_080624d4);
      return;
    }
    break;
  case 1:
    uVar5 = 0;
    if (DAT_080624d4 != 0) {
      do {
        FUN_0804df70();
        p_Var2 = stdout;
        pcVar1 = stdout->_IO_write_ptr;
        if (pcVar1 < stdout->_IO_write_end) {
          *pcVar1 = '\n';
          p_Var2->_IO_write_ptr = pcVar1 + 1;
        }
        else {
          __overflow(stdout,10);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < DAT_080624d4);
      return;
    }
    break;
  case 2:
    uVar5 = FUN_0804f7e0();
    local_20 = 0;
    uVar3 = (uint)(DAT_080624d4 % uVar5 != 0) + DAT_080624d4 / uVar5;
    uVar5 = local_20;
    if (uVar3 != 0) {
      do {
        while( true ) {
          FUN_0804d3f0();
          FUN_0804df70();
          p_Var2 = stdout;
          if (DAT_080624d4 <= uVar5 + uVar3) break;
          FUN_0804c970();
          uVar5 = uVar5 + uVar3;
        }
        pcVar1 = stdout->_IO_write_ptr;
        if (pcVar1 < stdout->_IO_write_end) {
          *pcVar1 = '\n';
          p_Var2->_IO_write_ptr = pcVar1 + 1;
        }
        else {
          __overflow(stdout,10);
        }
        local_20 = local_20 + 1;
        uVar5 = local_20;
      } while (local_20 != uVar3);
      return;
    }
    break;
  case 3:
    uVar5 = FUN_0804f7e0();
    FUN_0804d3f0();
    FUN_0804df70();
    if (1 < DAT_080624d4) {
      uVar3 = 1;
      do {
        p_Var2 = stdout;
        if (uVar3 % uVar5 == 0) {
          pcVar1 = stdout->_IO_write_ptr;
          if (pcVar1 < stdout->_IO_write_end) {
            *pcVar1 = '\n';
            p_Var2->_IO_write_ptr = pcVar1 + 1;
          }
          else {
            __overflow(stdout,10);
          }
        }
        else {
          FUN_0804c970();
        }
        uVar3 = uVar3 + 1;
        FUN_0804df70();
        FUN_0804d3f0();
      } while (uVar3 < DAT_080624d4);
    }
    goto LAB_0804faa0;
  case 4:
    if (DAT_080624d4 != 0) {
      iVar4 = 0;
      local_34 = FUN_0804d3f0();
      uVar5 = 0;
      while( true ) {
        FUN_0804df70();
        uVar5 = uVar5 + 1;
        if (DAT_080624d4 <= uVar5) break;
        iVar4 = iVar4 + local_34;
        local_34 = FUN_0804d3f0();
        p_Var2 = stdout;
        if (uVar5 != 0) {
          iVar4 = iVar4 + 2;
          uVar3 = local_34 + iVar4;
          bVar6 = uVar3 < DAT_08062508;
          bVar7 = uVar3 < DAT_08062508;
          if (DAT_08062508 <= uVar3) {
            iVar4 = 0;
          }
          pcVar1 = stdout->_IO_write_ptr;
          if (pcVar1 < stdout->_IO_write_end) {
            *pcVar1 = ',';
            p_Var2->_IO_write_ptr = pcVar1 + 1;
          }
          else {
            __overflow(stdout,0x2c);
          }
          p_Var2 = stdout;
          pcVar1 = stdout->_IO_write_ptr;
          if (pcVar1 < stdout->_IO_write_end) {
            *pcVar1 = (-bVar7 & 0x16U) + 10;
            p_Var2->_IO_write_ptr = pcVar1 + 1;
          }
          else {
            __overflow(stdout,(-(uint)bVar6 & 0x16) + 10);
          }
        }
      }
    }
LAB_0804faa0:
    p_Var2 = stdout;
    pcVar1 = stdout->_IO_write_ptr;
    if (pcVar1 < stdout->_IO_write_end) {
      *pcVar1 = '\n';
      p_Var2->_IO_write_ptr = pcVar1 + 1;
    }
    else {
      __overflow(stdout,10);
    }
  }
  return;
}



void FUN_080513a0(int param_1)

{
  FILE *pFVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = DAT_08062dbc;
  if (param_1 == 0) {
    uVar2 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
    __printf_chk(1,uVar2,uVar4);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort is specified.\n\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "Mandatory arguments to long options are mandatory for short options too.\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "  -a, --all                  do not ignore entries starting with .\n  -A, --almost-all           do not list implied . and ..\n      --author               with -l, print the author of each file\n  -b, --escape               print C-style escapes for nongraphic characters\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "      --block-size=SIZE      scale sizes by SIZE before printing them.  E.g.,\n                               `--block-size=M\' prints sizes in units of\n                               1,048,576 bytes.  See SIZE format below.\n  -B, --ignore-backups       do not list implied entries ending with ~\n  -c                         with -lt: sort by, and show, ctime (time of last\n                               modification of file status information)\n                               with -l: show ctime and sort by name\n                               otherwise: sort by ctime, newest first\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "  -C                         list entries by columns\n      --color[=WHEN]         colorize the output.  WHEN defaults to `always\'\n                               or can be `never\' or `auto\'.  More info below\n  -d, --directory            list directory entries instead of contents,\n                               and do not dereference symbolic links\n  -D, --dired                generate output designed for Emacs\' dired mode\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "  -f                         do not sort, enable -aU, disable -ls --color\n  -F, --classify             append indicator (one of */=>@|) to entries\n      --file-type            likewise, except do not append `*\'\n      --format=WORD          across -x, commas -m, horizontal -x, long -l,\n                               single-column -1, verbose -l, vertical -C\n      --full-time            like -l --time-style=full-iso\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,"  -g                         like -l, but do not list owner\n",5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "      --group-directories-first\n                             group directories before files.\n                               augment with a --sort option, but any\n                               use of --sort=none (-U) disables grouping\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "  -G, --no-group             in a long listing, don\'t print group names\n  -h, --human-readable       with -l, print sizes in human readable format\n                               (e.g., 1K 234M 2G)\n      --si                   likewise, but use powers of 1000 not 1024\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "  -H, --dereference-command-line\n                             follow symbolic links listed on the command line\n      --dereference-command-line-symlink-to-dir\n                             follow each command line symbolic link\n                             that points to a directory\n      --hide=PATTERN         do not list implied entries matching shell PATTERN\n                               (overridden by -a or -A)\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "      --indicator-style=WORD  append indicator with style WORD to entry names:\n                               none (default), slash (-p),\n                               file-type (--file-type), classify (-F)\n  -i, --inode                print the index number of each file\n  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n  -k                         like --block-size=1K\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "  -l                         use a long listing format\n  -L, --dereference          when showing file information for a symbolic\n                               link, show information for the file the link\n                               references rather than for the link itself\n  -m                         fill width with a comma separated list of entries\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n  -N, --literal              print raw entry names (don\'t treat e.g. control\n                               characters specially)\n  -o                         like -l, but do not list group information\n  -p, --indicator-style=slash\n                             append / indicator to directories\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "  -q, --hide-control-chars   print ? instead of non graphic characters\n      --show-control-chars   show non graphic characters as-is (default\n                             unless program is `ls\' and output is a terminal)\n  -Q, --quote-name           enclose entry names in double quotes\n      --quoting-style=WORD   use quoting style WORD for entry names:\n                               literal, locale, shell, shell-always, c, escape\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the allocated size of each file, in blocks\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "  -S                         sort by file size\n      --sort=WORD            sort by WORD instead of name: none -U,\n                             extension -X, size -S, time -t, version -v\n      --time=WORD            with -l, show time as WORD instead of modification\n                             time: atime -u, access -u, use -u, ctime -c,\n                             or status -c; use specified time as sort key\n                             if --sort=time\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "      --time-style=STYLE     with -l, show times using style STYLE:\n                             full-iso, long-iso, iso, locale, +FORMAT.\n                             FORMAT is interpreted like `date\'; if FORMAT is\n                             FORMAT1<newline>FORMAT2, FORMAT1 applies to\n                             non-recent files and FORMAT2 to recent files;\n                             if STYLE is prefixed with `posix-\', STYLE\n                             takes effect only outside the POSIX locale\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "  -t                         sort by modification time, newest first\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "  -u                         with -lt: sort by, and show, access time\n                               with -l: show access time and sort by name\n                               otherwise: sort by access time\n  -U                         do not sort; list entries in directory order\n  -v                         natural sort of (version) numbers within text\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "  -w, --width=COLS           assume screen width instead of current value\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any SELinux security context of each file\n  -1                         list one file per line\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "\nSIZE may be (or may be an integer optionally followed by) one of following:\nKB 1000, K 1024, MB 1000*1000, M 1024*1024, and so on for G, T, P, E, Z, Y.\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "\nUsing color to distinguish file types is disabled both by default and\nwith --color=never.  With --color=auto, ls emits color codes only when\nstandard output is connected to a terminal.  The LS_COLORS environment\nvariable can change the settings.  Use the dircolors command to set it.\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,
                               "\nExit status:\n 0  if OK,\n 1  if minor problems (e.g., cannot access subdirectory),\n 2  if serious trouble (e.g., cannot access command-line argument).\n"
                               ,5);
    fputs_unlocked(pcVar3,pFVar1);
    uVar4 = FUN_080520b0(DAT_08062dbc);
    uVar2 = dcgettext(0,"\nReport %s bugs to %s\n",5);
    __printf_chk(1,uVar2,uVar4,"bug-coreutils@gnu.org");
    uVar4 = dcgettext(0,"%s home page: <%s>\n",5);
    __printf_chk(1,uVar4,"GNU coreutils","http://www.gnu.org/software/coreutils/");
    pFVar1 = stdout;
    pcVar3 = (char *)dcgettext(0,"General help using GNU software: <http://www.gnu.org/gethelp/>\n",
                               5);
    fputs_unlocked(pcVar3,pFVar1);
    pcVar3 = setlocale(5,(char *)0x0);
    if (pcVar3 != (char *)0x0) {
      iVar5 = strncmp(pcVar3,"en_",3);
      if (iVar5 != 0) {
        uVar4 = FUN_080520b0(DAT_08062dbc);
        uVar2 = dcgettext(0,"Report %s translation bugs to <http://translationproject.org/team/>\n",
                          5);
        __printf_chk(1,uVar2,uVar4);
      }
    }
    uVar4 = FUN_080520b0(DAT_08062dbc);
    uVar2 = dcgettext(0,"For complete documentation, run: info coreutils \'%s invocation\'\n",5);
    __printf_chk(1,uVar2,uVar4);
  }
  else {
    uVar2 = dcgettext(0,"Try `%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar2,uVar4);
  }
                    // WARNING: Subroutine does not return
  exit(param_1);
}



int FUN_08051aa0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if ((*(uint *)(param_2 + 0x10) & 0xf000) != 0xa000) {
    iVar2 = acl_extended_file_nofollow(param_1);
    if (iVar2 < 0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      iVar2 = 0;
      if (((iVar1 != 0x26) && (iVar1 != 0x5f)) && (iVar1 != 0x16)) {
        iVar2 = (iVar1 == 0x10) - 1;
      }
    }
  }
  return iVar2;
}



char * FUN_08051b00(char *param_1,uint param_2)

{
  int iVar1;
  char *__buf;
  uint uVar2;
  int *piVar3;
  size_t __size;
  
  __size = 0x401;
  if (param_2 < 0x401) {
    __size = param_2 + 1;
  }
  do {
    __buf = (char *)malloc(__size);
    while( true ) {
      if (__buf == (char *)0x0) {
        return (char *)0x0;
      }
      uVar2 = readlink(param_1,__buf,__size);
      if ((int)uVar2 < 0) {
        piVar3 = __errno_location();
        iVar1 = *piVar3;
        if (iVar1 != 0x22) {
          free(__buf);
          *piVar3 = iVar1;
          return (char *)0x0;
        }
      }
      if (uVar2 < __size) {
        __buf[uVar2] = '\0';
        return __buf;
      }
      free(__buf);
      if (0x3fffffff < __size) break;
      __size = __size * 2;
      __buf = (char *)malloc(__size);
    }
    if (0x7ffffffe < __size) {
      piVar3 = __errno_location();
      *piVar3 = 0xc;
      return (char *)0x0;
    }
    __size = 0x7fffffff;
  } while( true );
}



int FUN_08051c00(char *param_1,char **param_2,void *param_3,size_t param_4)

{
  bool bVar1;
  size_t __n;
  int iVar2;
  size_t sVar3;
  char *__s1;
  int iVar4;
  void *__s2;
  int local_30;
  
  __n = strlen(param_1);
  local_30 = -1;
  __s1 = *param_2;
  iVar2 = local_30;
  if (__s1 != (char *)0x0) {
    bVar1 = false;
    iVar2 = 0;
    __s2 = param_3;
    do {
      while (iVar4 = iVar2, iVar2 = strncmp(__s1,param_1,__n), iVar2 != 0) {
LAB_08051c7a:
        __s2 = (void *)((int)__s2 + param_4);
        __s1 = param_2[iVar4 + 1];
        iVar2 = iVar4 + 1;
        if (__s1 == (char *)0x0) goto LAB_08051cd0;
      }
      sVar3 = strlen(__s1);
      if (sVar3 == __n) {
        return iVar4;
      }
      if (local_30 != -1) {
        if (param_3 == (void *)0x0) {
          bVar1 = true;
        }
        else {
          iVar2 = memcmp((void *)(local_30 * param_4 + (int)param_3),__s2,param_4);
          if (iVar2 != 0) {
            bVar1 = true;
          }
        }
        goto LAB_08051c7a;
      }
      __s2 = (void *)((int)__s2 + param_4);
      __s1 = param_2[iVar4 + 1];
      iVar2 = iVar4 + 1;
      local_30 = iVar4;
    } while (__s1 != (char *)0x0);
LAB_08051cd0:
    iVar2 = -2;
    if (!bVar1) {
      iVar2 = local_30;
    }
  }
  local_30 = iVar2;
  return local_30;
}



void FUN_08051d10(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 == -1) {
    uVar1 = dcgettext(0,"invalid argument %s for %s",5);
  }
  else {
    uVar1 = dcgettext(0,"ambiguous argument %s for %s",5);
  }
  uVar2 = FUN_08055690(1,param_1);
  uVar3 = FUN_080567d0(0,6,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}



void FUN_08051db0(int *param_1,void *param_2,size_t param_3)

{
  char *pcVar1;
  _IO_FILE *p_Var2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *__s2;
  int iVar6;
  void *local_24;
  
  uVar3 = dcgettext(0,"Valid arguments are:",5);
  __fprintf_chk(stderr,1,uVar3);
  iVar6 = *param_1;
  if (iVar6 != 0) {
    local_24 = (void *)0x0;
    iVar5 = 0;
    do {
      while ((__s2 = param_2, iVar5 == 0 || (iVar4 = memcmp(local_24,__s2,param_3), iVar4 != 0))) {
        iVar5 = iVar5 + 1;
        __fprintf_chk(stderr,1,"\n  - `%s\'",iVar6);
        iVar6 = param_1[iVar5];
        param_2 = (void *)((int)__s2 + param_3);
        local_24 = __s2;
        if (iVar6 == 0) goto LAB_08051ea0;
      }
      iVar5 = iVar5 + 1;
      __fprintf_chk(stderr,1,", `%s\'",iVar6);
      iVar6 = param_1[iVar5];
      param_2 = (void *)((int)__s2 + param_3);
    } while (iVar6 != 0);
  }
LAB_08051ea0:
  p_Var2 = stderr;
  pcVar1 = stderr->_IO_write_ptr;
  if (stderr->_IO_write_end <= pcVar1) {
    __overflow(stderr,10);
    return;
  }
  *pcVar1 = '\n';
  p_Var2->_IO_write_ptr = pcVar1 + 1;
  return;
}



int FUN_08051ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,code *param_6)

{
  int iVar1;
  
  iVar1 = FUN_08051c00(param_2,param_3,param_4,param_5);
  if (iVar1 < 0) {
    FUN_08051d10(param_1,param_2,iVar1);
    FUN_08051db0(param_3,param_4,param_5);
    (*param_6)();
    iVar1 = -1;
  }
  return iVar1;
}



char * FUN_080520b0(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_1;
  while (cVar3 == '/') {
    param_1 = param_1 + 1;
    cVar3 = *param_1;
  }
  if (cVar3 != '\0') {
    bVar1 = false;
    pcVar2 = param_1;
    do {
      while (cVar3 == '/') {
        pcVar2 = pcVar2 + 1;
        bVar1 = true;
        cVar3 = *pcVar2;
        if (cVar3 == '\0') {
          return param_1;
        }
      }
      if (bVar1) {
        bVar1 = false;
        param_1 = pcVar2;
      }
      pcVar2 = pcVar2 + 1;
      cVar3 = *pcVar2;
    } while (cVar3 != '\0');
  }
  return param_1;
}



void FUN_08052100(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  if (1 < sVar1) {
    do {
      if (param_1[sVar1 - 1] != '/') {
        return;
      }
      sVar1 = sVar1 - 1;
    } while (sVar1 != 1);
  }
  return;
}



void FUN_080522d0(int param_1,undefined *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined uVar3;
  char cVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar3 = 0x2d;
  uVar5 = uVar1 & 0xf000;
  if ((((uVar5 != 0x8000) && (uVar3 = 100, uVar5 != 0x4000)) && (uVar3 = 0x62, uVar5 != 0x6000)) &&
     (((uVar3 = 99, uVar5 != 0x2000 && (uVar3 = 0x6c, uVar5 != 0xa000)) &&
      ((uVar3 = 0x70, uVar5 != 0x1000 && (uVar3 = 0x73, uVar5 != 0xc000)))))) {
    uVar3 = 0x3f;
  }
  *param_2 = uVar3;
  param_2[1] = (-((uVar1 & 0x100) == 0) & 0xbbU) + 0x72;
  param_2[2] = (-((uVar1 & 0x80) == 0) & 0xb6U) + 0x77;
  bVar2 = -((uVar1 & 0x40) == 0);
  if ((uVar1 & 0x800) == 0) {
    cVar4 = (bVar2 & 0xb5) + 0x78;
  }
  else {
    cVar4 = (bVar2 & 0xe0) + 0x73;
  }
  param_2[3] = cVar4;
  param_2[4] = (-((uVar1 & 0x20) == 0) & 0xbbU) + 0x72;
  param_2[5] = (-((uVar1 & 0x10) == 0) & 0xb6U) + 0x77;
  bVar2 = -((uVar1 & 8) == 0);
  if ((uVar1 & 0x400) == 0) {
    cVar4 = (bVar2 & 0xb5) + 0x78;
  }
  else {
    cVar4 = (bVar2 & 0xe0) + 0x73;
  }
  param_2[6] = cVar4;
  param_2[7] = (-((uVar1 & 4) == 0) & 0xbbU) + 0x72;
  param_2[8] = (-((uVar1 & 2) == 0) & 0xb6U) + 0x77;
  if ((uVar1 & 0x200) == 0) {
    param_2[9] = (-((uVar1 & 1) == 0) & 0xb5U) + 0x78;
    param_2[10] = 0x20;
    param_2[0xb] = 0;
    return;
  }
  param_2[9] = (-((uVar1 & 1) == 0) & 0xe0U) + 0x74;
  param_2[10] = 0x20;
  param_2[0xb] = 0;
  return;
}



void FUN_080522e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_08052310(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_08058c00();
}



void * FUN_08052310(void *param_1,char *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  size_t __n;
  void *__dest;
  undefined *puVar4;
  size_t __n_00;
  char *__s;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar2 = FUN_080520b0(param_1);
  iVar3 = FUN_08052100(iVar2);
  __n_00 = (iVar2 - (int)param_1) + iVar3;
  if (iVar3 != 0) {
    uVar6 = (uint)(*(char *)(iVar2 + -1 + iVar3) != '/');
  }
  cVar1 = *param_2;
  pcVar5 = param_2;
  while ((__s = pcVar5, cVar1 == '/' && (__s = pcVar5 + 1, *__s == '/'))) {
    pcVar5 = pcVar5 + 2;
    cVar1 = *pcVar5;
  }
  __n = strlen(__s);
  __dest = malloc(__n_00 + 1 + uVar6 + __n);
  if (__dest != (void *)0x0) {
    puVar4 = (undefined *)mempcpy(__dest,param_1,__n_00);
    *puVar4 = 0x2f;
    if (param_3 != (int *)0x0) {
      *param_3 = (int)(puVar4 + uVar6) - (uint)(*param_2 == '/');
    }
    puVar4 = (undefined *)mempcpy(puVar4 + uVar6,__s,__n);
    *puVar4 = 0;
  }
  return __dest;
}



char * __regparm3 FUN_08052420(char **param_1)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)0x0;
  pcVar3 = *param_1;
  cVar2 = *pcVar3;
  if (cVar2 == '\0') {
    return (char *)0x0;
  }
  bVar1 = false;
  do {
    while (bVar1) {
      bVar1 = false;
      if (0x19 < ((int)cVar2 & 0xffffffdfU) - 0x41) {
LAB_08052448:
        if (cVar2 != '~') {
          pcVar4 = (char *)0x0;
        }
      }
LAB_08052453:
      pcVar3 = pcVar3 + 1;
      *param_1 = pcVar3;
      cVar2 = *pcVar3;
      if (cVar2 == '\0') {
        return pcVar4;
      }
    }
    if (cVar2 == '.') {
      bVar1 = true;
      if (pcVar4 == (char *)0x0) {
        pcVar4 = pcVar3;
      }
      goto LAB_08052453;
    }
    if ((int)cVar2 - 0x30U < 10) goto LAB_08052453;
    if (0x19 < ((int)cVar2 & 0xffffffdfU) - 0x41) goto LAB_08052448;
    pcVar3 = pcVar3 + 1;
    *param_1 = pcVar3;
    cVar2 = *pcVar3;
    if (cVar2 == '\0') {
      return pcVar4;
    }
  } while( true );
}



void FUN_08052840(timespec *param_1)

{
  int iVar1;
  timeval local_14 [2];
  
  iVar1 = clock_gettime(0,param_1);
  if (iVar1 != 0) {
    gettimeofday(local_14,(__timezone_ptr_t)0x0);
    param_1->tv_sec = local_14[0].tv_sec;
    param_1->tv_nsec = local_14[0].tv_usec * 1000;
  }
  return;
}



bool FUN_08052890(int param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  byte bVar5;
  
  bVar5 = 0;
  pcVar1 = setlocale(param_1,(char *)0x0);
  bVar4 = true;
  if (pcVar1 != (char *)0x0) {
    bVar4 = *pcVar1 == 'C';
    if ((!bVar4) || (bVar4 = pcVar1[1] == '\0', !bVar4)) {
      iVar2 = 6;
      pcVar3 = "POSIX";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar4 = *pcVar1 == *pcVar3;
        pcVar1 = pcVar1 + (uint)bVar5 * -2 + 1;
        pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
      } while (bVar4);
      return !bVar4;
    }
    bVar4 = false;
  }
  return bVar4;
}



int __regparm3 FUN_08052920(int *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = (*(code *)param_1[6])(param_2,param_1[2]);
  if (uVar1 < (uint)param_1[2]) {
    return *param_1 + uVar1 * 8;
  }
                    // WARNING: Subroutine does not return
  abort();
}



int __regparm3 FUN_08052950(int param_1_00,int param_2,int **param_3,char param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar3 = (int *)FUN_08052920();
  *param_3 = piVar3;
  iVar4 = *piVar3;
  if (iVar4 != 0) {
    if (param_2 != iVar4) {
      cVar2 = (**(code **)(param_1_00 + 0x1c))(param_2,iVar4);
      if (cVar2 == '\0') {
        piVar5 = (int *)piVar3[1];
        if (piVar5 == (int *)0x0) {
          return 0;
        }
        do {
          iVar4 = *piVar5;
          if (iVar4 == param_2) {
joined_r0x080529bb:
            if (param_1 == '\0') {
              return iVar4;
            }
            piVar3[1] = piVar5[1];
            *piVar5 = 0;
            piVar5[1] = *(int *)(param_1_00 + 0x24);
            *(int **)(param_1_00 + 0x24) = piVar5;
            return iVar4;
          }
          cVar2 = (**(code **)(param_1_00 + 0x1c))(param_2,iVar4);
          if (cVar2 != '\0') {
            piVar5 = (int *)piVar3[1];
            iVar4 = *piVar5;
            goto joined_r0x080529bb;
          }
          piVar3 = (int *)piVar3[1];
          piVar5 = (int *)piVar3[1];
          if (piVar5 == (int *)0x0) {
            return 0;
          }
        } while( true );
      }
      iVar4 = *piVar3;
    }
    if (param_1 != '\0') {
      piVar5 = (int *)piVar3[1];
      if (piVar5 != (int *)0x0) {
        iVar1 = piVar5[1];
        *piVar3 = *piVar5;
        piVar3[1] = iVar1;
        *piVar5 = 0;
        piVar5[1] = *(int *)(param_1_00 + 0x24);
        *(int **)(param_1_00 + 0x24) = piVar5;
        return iVar4;
      }
      *piVar3 = 0;
    }
  }
  return iVar4;
}



undefined4 __regparm3 FUN_08052a50(int param_1,int **param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = *param_2;
  if (param_2[1] <= piVar5) {
    return 1;
  }
  do {
    while (iVar6 = *piVar5, iVar6 == 0) {
LAB_08052ad1:
      piVar5 = piVar5 + 2;
      if (param_2[1] < piVar5 || param_2[1] == piVar5) {
        return 1;
      }
    }
    piVar3 = (int *)piVar5[1];
    if ((int *)piVar5[1] != (int *)0x0) {
      do {
        while( true ) {
          iVar6 = *piVar3;
          piVar2 = (int *)FUN_08052920();
          piVar4 = (int *)piVar3[1];
          if (*piVar2 != 0) break;
          *piVar2 = iVar6;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          *piVar3 = 0;
          piVar3[1] = *(int *)(param_1 + 0x24);
          *(int **)(param_1 + 0x24) = piVar3;
          piVar3 = piVar4;
          if (piVar4 == (int *)0x0) goto LAB_08052ac0;
        }
        piVar3[1] = piVar2[1];
        piVar2[1] = (int)piVar3;
        piVar3 = piVar4;
      } while (piVar4 != (int *)0x0);
LAB_08052ac0:
      iVar6 = *piVar5;
    }
    piVar5[1] = 0;
    if (param_3 != '\0') goto LAB_08052ad1;
    piVar3 = (int *)FUN_08052920();
    if (*piVar3 == 0) {
      *piVar3 = iVar6;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    else {
      piVar4 = *(int **)(param_1 + 0x24);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)malloc(8);
        if (piVar4 == (int *)0x0) {
          return 0;
        }
      }
      else {
        *(int *)(param_1 + 0x24) = piVar4[1];
      }
      iVar1 = piVar3[1];
      *piVar4 = iVar6;
      piVar4[1] = iVar1;
      piVar3[1] = (int)piVar4;
    }
    *piVar5 = 0;
    piVar5 = piVar5 + 2;
    param_2[3] = (int *)((int)param_2[3] + -1);
    if (param_2[1] < piVar5 || param_2[1] == piVar5) {
      return 1;
    }
  } while( true );
}



undefined4 __regparm3 FUN_08052b60(float **param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  
  pfVar2 = *param_1;
  uVar4 = 1;
  if (pfVar2 != (float *)&DAT_0805d40c) {
    fVar1 = pfVar2[2];
    if ((((0.1 < fVar1) && (fVar1 < 0.9)) && (1.1 < pfVar2[3])) && (0.0 <= *pfVar2)) {
      fVar3 = *pfVar2 + 0.1;
      if (((fVar3 < pfVar2[1]) && (pfVar2[1] <= 1.0)) && (fVar3 < fVar1)) {
        return 1;
      }
    }
    *param_1 = (float *)&DAT_0805d40c;
    uVar4 = 0;
  }
  return uVar4;
}



// WARNING: Could not reconcile some variable overlaps

uint __regparm2 FUN_08052c10(uint param_1_00,char param_2,float param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong local_24;
  
  if (param_2 == '\0') {
    local_24 = (ulonglong)param_1_00;
    if (4.294967e+09 <= (float)local_24 / param_1) {
      return 0;
    }
    local_24._0_4_ = (uint)(longlong)ROUND((float)local_24 / param_1);
    param_1_00 = (uint)local_24;
  }
  if (param_1_00 < 10) {
    param_1_00 = 0xb;
  }
  else {
    param_1_00 = param_1_00 | 1;
    if (param_1_00 == 0xffffffff) {
      return 0;
    }
  }
  do {
    if (param_1_00 < 10) {
      uVar1 = 3;
LAB_08052cae:
      if (param_1_00 % uVar1 != 0) {
        if (0x3fffffff < param_1_00) {
          param_1_00 = 0;
        }
        return param_1_00;
      }
    }
    else if (param_1_00 != (param_1_00 / 3) * 3) {
      iVar3 = 0x10;
      uVar2 = 9;
      uVar1 = 3;
      do {
        uVar2 = uVar2 + iVar3;
        uVar1 = uVar1 + 2;
        if (param_1_00 <= uVar2) goto LAB_08052cae;
        iVar3 = iVar3 + 8;
      } while (param_1_00 % uVar1 != 0);
    }
    param_1_00 = param_1_00 + 2;
    if (param_1_00 == 0xffffffff) {
      return 0;
    }
  } while( true );
}



undefined4 FUN_08052d20(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



void ** FUN_08053140(undefined4 param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                    void *param_5)

{
  char cVar1;
  void **__ptr;
  void *__nmemb;
  void *pvVar2;
  void **ppvVar3;
  
  if (param_3 == (undefined *)0x0) {
    param_3 = &LAB_08052900;
  }
  if (param_4 == (undefined *)0x0) {
    param_4 = &LAB_08052910;
  }
  __ptr = (void **)malloc(0x28);
  ppvVar3 = __ptr;
  if (__ptr != (void **)0x0) {
    if (param_2 == (undefined *)0x0) {
      param_2 = &DAT_0805d40c;
    }
    __ptr[5] = param_2;
    cVar1 = FUN_08052b60();
    if (cVar1 != '\0') {
      __nmemb = (void *)FUN_08052c10(*(undefined4 *)(param_2 + 8));
      __ptr[2] = __nmemb;
      if (__nmemb != (void *)0x0) {
        pvVar2 = calloc((size_t)__nmemb,8);
        *__ptr = pvVar2;
        if (pvVar2 != (void *)0x0) {
          __ptr[1] = (void *)((int)pvVar2 + (int)__nmemb * 8);
          __ptr[3] = (void *)0x0;
          __ptr[4] = (void *)0x0;
          __ptr[6] = param_3;
          __ptr[7] = param_4;
          __ptr[8] = param_5;
          __ptr[9] = (void *)0x0;
          return __ptr;
        }
      }
    }
    ppvVar3 = (void **)0x0;
    free(__ptr);
  }
  return ppvVar3;
}



void FUN_080532b0(int **param_1)

{
  void *pvVar1;
  void *__ptr;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_1[8] == (int *)0x0) || (param_1[4] == (int *)0x0)) {
    piVar3 = param_1[1];
  }
  else {
    piVar4 = *param_1;
    if (param_1[1] <= piVar4) goto LAB_08053331;
    do {
      iVar2 = *piVar4;
      if ((iVar2 != 0) && (piVar3 = piVar4, piVar4 != (int *)0x0)) {
        while( true ) {
          (*(code *)param_1[8])(iVar2);
          piVar3 = (int *)piVar3[1];
          if (piVar3 == (int *)0x0) break;
          iVar2 = *piVar3;
        }
      }
      piVar3 = param_1[1];
      piVar4 = piVar4 + 2;
    } while (piVar4 < piVar3);
  }
  piVar4 = *param_1;
  if (piVar4 < piVar3) {
    do {
      __ptr = (void *)piVar4[1];
      while (__ptr != (void *)0x0) {
        pvVar1 = *(void **)((int)__ptr + 4);
        free(__ptr);
        __ptr = pvVar1;
      }
      piVar4 = piVar4 + 2;
    } while (piVar4 <= param_1[1] && param_1[1] != piVar4);
  }
LAB_08053331:
  piVar3 = param_1[9];
  while (piVar3 != (int *)0x0) {
    piVar4 = (int *)piVar3[1];
    free(piVar3);
    piVar3 = piVar4;
  }
  free(*param_1);
  free(param_1);
  return;
}



undefined4 FUN_08053370(void **param_1)

{
  void *pvVar1;
  char cVar2;
  void *__nmemb;
  void *__ptr;
  
  __nmemb = (void *)FUN_08052c10(*(undefined4 *)((int)param_1[5] + 8));
  if (__nmemb != (void *)0x0) {
    if (param_1[2] == __nmemb) {
      return 1;
    }
    __ptr = calloc((size_t)__nmemb,8);
    if (__ptr != (void *)0x0) {
      pvVar1 = param_1[9];
      cVar2 = FUN_08052a50();
      if (cVar2 != '\0') {
        free(*param_1);
        *param_1 = __ptr;
        param_1[1] = (void *)((int)__ptr + (int)__nmemb * 8);
        param_1[2] = __nmemb;
        param_1[3] = (void *)0x0;
        param_1[9] = pvVar1;
        return 1;
      }
      param_1[9] = pvVar1;
      cVar2 = FUN_08052a50();
      if (cVar2 != '\0') {
        cVar2 = FUN_08052a50();
        if (cVar2 != '\0') {
          free(__ptr);
          return 0;
        }
      }
                    // WARNING: Subroutine does not return
      abort();
    }
  }
  return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined4 FUN_080534f0(int param_1,int param_2,int *param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  ulonglong local_2c;
  int *local_10;
  
  if (param_2 == 0) {
LAB_08053680:
                    // WARNING: Subroutine does not return
    abort();
  }
  iVar3 = FUN_08052950(0);
  if (iVar3 != 0) {
    if (param_3 == (int *)0x0) {
      return 0;
    }
    *param_3 = iVar3;
    return 0;
  }
  local_2c = (ulonglong)*(uint *)(param_1 + 0xc);
  fVar1 = (float)local_2c;
  local_2c = (ulonglong)*(uint *)(param_1 + 8);
  if ((float)local_2c * *(float *)(*(int *)(param_1 + 0x14) + 8) < fVar1) {
    FUN_08052b60();
    iVar3 = *(int *)(param_1 + 0x14);
    local_2c = (ulonglong)*(uint *)(param_1 + 8);
    fVar1 = (float)local_2c;
    local_2c = (ulonglong)*(uint *)(param_1 + 0xc);
    if (*(float *)(iVar3 + 8) * fVar1 < (float)local_2c) {
      fVar1 = fVar1 * *(float *)(iVar3 + 0xc);
      if (*(char *)(iVar3 + 0x10) == '\0') {
        fVar1 = fVar1 * *(float *)(iVar3 + 8);
      }
      if (fVar1 < 4.294967e+09) {
        local_2c._0_4_ = (undefined4)(longlong)ROUND(fVar1);
        cVar2 = FUN_08053370(param_1,(undefined4)local_2c);
        if (cVar2 != '\0') {
          iVar3 = FUN_08052950(0);
          if (iVar3 != 0) goto LAB_08053680;
          goto LAB_08053588;
        }
      }
      return 0xffffffff;
    }
  }
LAB_08053588:
  if (*local_10 == 0) {
    *local_10 = param_2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return 1;
  }
  piVar4 = *(int **)(param_1 + 0x24);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)malloc(8);
    if (piVar4 == (int *)0x0) {
      return 0xffffffff;
    }
  }
  else {
    *(int *)(param_1 + 0x24) = piVar4[1];
  }
  iVar3 = local_10[1];
  *piVar4 = param_2;
  piVar4[1] = iVar3;
  local_10[1] = (int)piVar4;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return 1;
}



undefined4 FUN_080536d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10 [3];
  
  iVar1 = FUN_080534f0(param_1,param_2,local_10);
  if (iVar1 == -1) {
    param_2 = 0;
  }
  else if (iVar1 == 0) {
    param_2 = local_10[0];
  }
  return param_2;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_08053710(int param_1)

{
  float *pfVar1;
  void *pvVar2;
  float fVar3;
  void *__ptr;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong local_2c;
  int *local_10;
  
  iVar5 = FUN_08052950(1);
  if ((iVar5 != 0) && (*(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1, *local_10 == 0)) {
    uVar6 = *(int *)(param_1 + 0xc) - 1;
    *(uint *)(param_1 + 0xc) = uVar6;
    local_2c = (ulonglong)uVar6;
    fVar3 = (float)local_2c;
    local_2c = (ulonglong)*(uint *)(param_1 + 8);
    if (fVar3 < (float)local_2c * **(float **)(param_1 + 0x14)) {
      FUN_08052b60();
      pfVar1 = *(float **)(param_1 + 0x14);
      local_2c = (ulonglong)*(uint *)(param_1 + 8);
      fVar3 = (float)local_2c;
      local_2c = (ulonglong)*(uint *)(param_1 + 0xc);
      if ((float)local_2c < *pfVar1 * fVar3) {
        fVar3 = fVar3 * pfVar1[1];
        if (*(char *)(pfVar1 + 4) == '\0') {
          fVar3 = fVar3 * pfVar1[2];
        }
        local_2c._0_4_ = (undefined4)(longlong)ROUND(fVar3);
        cVar4 = FUN_08053370(param_1,(undefined4)local_2c);
        if (cVar4 == '\0') {
          __ptr = *(void **)(param_1 + 0x24);
          while (__ptr != (void *)0x0) {
            pvVar2 = *(void **)((int)__ptr + 4);
            free(__ptr);
            __ptr = pvVar2;
          }
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
      }
    }
  }
  return iVar5;
}



// WARNING: Removing unreachable block (ram,0x0805463a)
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char * FUN_08053850(undefined4 param_1,int param_2,char *param_3,uint param_4,uint param_5,
                   uint param_6,uint param_7,uint param_8)

{
  byte bVar1;
  char cVar2;
  lconv *plVar3;
  size_t sVar4;
  size_t sVar5;
  char *__s;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  uint uVar16;
  int in_GS_OFFSET;
  bool bVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  uint local_a4;
  byte *local_98;
  char *local_88;
  uint local_6c;
  int local_68;
  undefined8 local_54;
  undefined local_49 [41];
  int local_20;
  
  lVar22 = CONCAT44(param_2,param_1);
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  uVar6 = param_4 & 3;
  uVar10 = param_4 & 0x20;
  uVar7 = (-(uint)(uVar10 == 0) & 0xffffffe8) + 0x400;
  plVar3 = localeconv();
  pcVar13 = plVar3->decimal_point;
  sVar4 = strlen(pcVar13);
  local_98 = (byte *)plVar3->grouping;
  pcVar14 = plVar3->thousands_sep;
  if (0xf < sVar4 - 1) {
    sVar4 = 1;
    pcVar13 = ".";
  }
  sVar5 = strlen(pcVar14);
  __s = "";
  if (sVar5 < 0x11) {
    __s = pcVar14;
  }
  local_88 = param_3 + 0x288;
  if ((param_6 < param_8) || ((param_6 <= param_8 && (param_5 < param_7)))) {
    if (((param_6 | param_5) != 0) &&
       (lVar22 = FUN_08059dc0(param_7,param_8,param_5,param_6), lVar22 == 0)) {
      uVar23 = FUN_08059c90(param_7,param_8,param_5,param_6);
      uVar9 = (uint)(uVar23 >> 0x20);
      lVar22 = FUN_08059dc0(param_1,param_2,uVar23);
      uVar24 = FUN_08059dc0(lVar22 * 10,uVar23);
      uVar16 = (int)((ulonglong)uVar24 >> 0x20) << 1 | (uint)uVar24 >> 0x1f;
      uVar12 = (uint)uVar24 * 2;
      uVar25 = FUN_08059c90(param_1,param_2,uVar23);
      uVar8 = FUN_08059c90(lVar22 * 10,uVar23);
      if (uVar9 < uVar16) {
LAB_08053d7e:
        uVar12 = 3;
      }
      else if ((uVar16 < uVar9) || (uVar12 < (uint)uVar23)) {
        uVar12 = (uint)((uVar12 | uVar16) != 0);
      }
      else {
        if (uVar23 < CONCAT44(uVar16,uVar12)) goto LAB_08053d7e;
        uVar12 = 2;
      }
LAB_08053f5e:
      local_68 = (int)(uVar25 >> 0x20);
      local_6c = (uint)uVar25;
      local_a4 = 0xffffffff;
      pcVar14 = local_88;
      if (((param_4 & 0x10) != 0) && ((local_68 != 0 || (local_a4 = 0, uVar7 <= local_6c)))) {
        local_a4 = 0;
        do {
          iVar15 = FUN_08059dc0(uVar25,uVar7,0);
          uVar9 = uVar8 + iVar15 * 10;
          uVar8 = uVar9 / uVar7;
          uVar9 = ((int)uVar12 >> 1) + (uVar9 % uVar7) * 2;
          uVar25 = FUN_08059c90(uVar25,uVar7,0);
          iVar15 = (int)(uVar25 >> 0x20);
          uVar16 = (uint)uVar25;
          if (uVar9 < uVar7) {
            uVar12 = (uint)(uVar9 + uVar12 != 0);
          }
          else {
            uVar12 = ~-(uint)(uVar7 < uVar9 + uVar12) + 3;
          }
          local_a4 = local_a4 + 1;
        } while (((int)local_a4 < 8) && ((iVar15 != 0 || (uVar7 <= uVar16))));
        if ((iVar15 == 0) && (uVar16 < 10)) {
          if (uVar6 == 1) {
            bVar17 = 2 < (int)((uVar8 & 1) + uVar12);
          }
          else {
            bVar17 = uVar6 == 0 && 0 < (int)uVar12;
          }
          if (bVar17) {
            uVar8 = uVar8 + 1;
            if (uVar8 == 10) {
              bVar17 = 0xfffffffe < uVar16;
              uVar16 = uVar16 + 1;
              uVar25 = (ulonglong)CONCAT14(bVar17,uVar16);
              if ((uVar16 ^ 10 | (uint)bVar17) != 0) {
                uVar12 = 0;
                uVar25 = (ulonglong)CONCAT14(bVar17,uVar16);
                goto LAB_080545d3;
              }
              uVar12 = 0;
              uVar8 = 0;
              goto LAB_080540d0;
            }
          }
          else if (uVar8 == 0) {
LAB_080545d3:
            uVar8 = 0;
            if ((param_4 & 8) != 0) goto LAB_080540d0;
          }
          param_3[0x287] = (char)uVar8 + '0';
          uVar12 = 0;
          memcpy(param_3 + (0x287 - sVar4),pcVar13,sVar4);
          uVar8 = 0;
          pcVar14 = param_3 + (0x287 - sVar4);
        }
      }
LAB_080540d0:
      local_6c = (uint)uVar25;
      pcVar11 = pcVar14;
      if (uVar6 == 1) {
        bVar17 = 5 < (int)(((uVar12 + (local_6c & 1) |
                            ((int)uVar12 >> 0x1f) + (uint)CARRY4(uVar12,local_6c & 1)) != 0) + uVar8
                          );
LAB_080540ea:
        if (bVar17) {
          uVar25 = uVar25 + 1;
          if ((((param_4 & 0x10) != 0) && ((uVar7 ^ (uint)uVar25 | (uint)(uVar25 >> 0x20)) == 0)) &&
             ((int)local_a4 < 8)) {
            local_a4 = local_a4 + 1;
            uVar25 = 1;
            if ((param_4 & 8) == 0) {
              pcVar14[-1] = '0';
              pcVar14 = pcVar14 + (-1 - sVar4);
              memcpy(pcVar14,pcVar13,sVar4);
              pcVar11 = pcVar14;
              uVar25 = 1;
            }
          }
        }
      }
      else if (uVar6 == 0) {
        bVar17 = 0 < (int)(uVar8 + uVar12);
        goto LAB_080540ea;
      }
      do {
        pcVar14 = pcVar14 + -1;
        cVar2 = FUN_08059dc0(uVar25,10,0);
        *pcVar14 = cVar2 + '0';
        uVar25 = FUN_08059c90(uVar25,10,0);
      } while (uVar25 != 0);
      goto joined_r0x080541be;
    }
  }
  else {
    lVar21 = FUN_08059dc0(param_5,param_6,param_7,param_8);
    if (lVar21 == 0) {
      lVar21 = FUN_08059c90(param_5,param_6,param_7,param_8);
      uVar25 = lVar21 * lVar22;
      lVar21 = FUN_08059c90(lVar21 * lVar22,lVar21);
      if (lVar21 == lVar22) {
        uVar12 = 0;
        uVar8 = 0;
        goto LAB_08053f5e;
      }
    }
  }
  fVar18 = (float10)CONCAT44(param_2,param_1);
  if (param_2 < 0) {
    fVar18 = fVar18 + (float10)1.844674e+19;
  }
  local_54 = CONCAT44(param_6,param_5);
  fVar19 = (float10)local_54;
  if ((int)param_6 < 0) {
    fVar19 = fVar19 + (float10)1.844674e+19;
  }
  fVar20 = (float10)CONCAT44(param_8,param_7);
  if ((int)param_8 < 0) {
    fVar20 = fVar20 + (float10)1.844674e+19;
  }
  fVar18 = (fVar19 / fVar20) * fVar18;
  if ((param_4 & 0x10) == 0) {
    if ((uVar6 != 1) && (fVar18 < _DAT_0805d4a0)) {
      if ((float10)9.223372e+18 <= fVar18) {
        lVar22 = (longlong)ROUND(fVar18 - (float10)9.223372e+18);
        local_54._4_4_ = (int)((ulonglong)lVar22 >> 0x20);
        local_54._0_4_ = (uint)lVar22;
        local_54._4_4_ = local_54._4_4_ + -0x80000000;
      }
      else {
        local_54._0_4_ = (uint)(longlong)ROUND(fVar18);
        local_54._4_4_ = (int)((ulonglong)(longlong)ROUND(fVar18) >> 0x20);
      }
      uVar8 = 0;
      if (uVar6 == 0) {
        fVar19 = (float10)local_54;
        if (local_54._4_4_ < 0) {
          fVar19 = fVar19 + (float10)1.844674e+19;
        }
        uVar8 = 1;
        if (fVar18 == fVar19) {
          uVar8 = 0;
        }
      }
      local_54._4_4_ = local_54._4_4_ + (uint)CARRY4((uint)local_54,uVar8);
      local_54 = CONCAT44(local_54._4_4_,(uint)local_54 + uVar8);
      fVar18 = (float10)local_54;
      if (local_54._4_4_ < 0) {
        fVar18 = fVar18 + (float10)1.844674e+19;
      }
    }
    iVar15 = 0;
    __sprintf_chk(param_3,1,0xffffffff,"%.0Lf",fVar18);
    sVar5 = strlen(param_3);
    local_a4 = 0xffffffff;
  }
  else {
    local_54 = (ulonglong)uVar7;
    local_a4 = 0;
    fVar19 = (float10)local_54;
    do {
      fVar20 = fVar19;
      local_a4 = local_a4 + 1;
      fVar19 = fVar20 * (float10)local_54;
      if (fVar18 < fVar19) break;
    } while ((int)local_a4 < 8);
    fVar18 = fVar18 / fVar20;
    fVar19 = fVar18;
    if ((uVar6 != 1) && (fVar18 < _DAT_0805d4a0)) {
      if ((float10)9.223372e+18 <= fVar18) {
        lVar22 = (longlong)ROUND(fVar18 - (float10)9.223372e+18);
        local_54._4_4_ = (int)((ulonglong)lVar22 >> 0x20);
        local_54._0_4_ = (uint)lVar22;
        local_54._4_4_ = local_54._4_4_ + -0x80000000;
      }
      else {
        local_54._0_4_ = (uint)(longlong)ROUND(fVar18);
        local_54._4_4_ = (int)((ulonglong)(longlong)ROUND(fVar18) >> 0x20);
      }
      uVar8 = 0;
      if (uVar6 == 0) {
        fVar19 = (float10)local_54;
        if (local_54._4_4_ < 0) {
          fVar19 = fVar19 + (float10)1.844674e+19;
        }
        uVar8 = 1;
        if (fVar18 == fVar19) {
          uVar8 = 0;
        }
      }
      local_54._4_4_ = local_54._4_4_ + (uint)CARRY4((uint)local_54,uVar8);
      local_54 = CONCAT44(local_54._4_4_,(uint)local_54 + uVar8);
      fVar19 = (float10)local_54;
      if (local_54._4_4_ < 0) {
        fVar19 = (float10)local_54 + (float10)1.844674e+19;
      }
    }
    __sprintf_chk(param_3,1,0xffffffff,"%.1Lf",fVar19);
    sVar5 = strlen(param_3);
    iVar15 = sVar4 + 1;
    if ((sVar4 + 2 + (uint)(uVar10 == 0) < sVar5) ||
       (((param_4 & 8) != 0 && (param_3[sVar5 - 1] == '0')))) {
      fVar18 = fVar18 * (float10)10.0;
      if ((uVar6 != 1) && (fVar18 < _DAT_0805d4a0)) {
        if ((float10)9.223372e+18 <= fVar18) {
          lVar22 = (longlong)ROUND(fVar18 - (float10)9.223372e+18);
          local_54._4_4_ = (int)((ulonglong)lVar22 >> 0x20);
          local_54._0_4_ = (uint)lVar22;
          local_54._4_4_ = local_54._4_4_ + -0x80000000;
        }
        else {
          local_54._0_4_ = (uint)(longlong)ROUND(fVar18);
          local_54._4_4_ = (int)((ulonglong)(longlong)ROUND(fVar18) >> 0x20);
        }
        uVar8 = 0;
        if (uVar6 == 0) {
          fVar19 = (float10)local_54;
          if (local_54._4_4_ < 0) {
            fVar19 = fVar19 + (float10)1.844674e+19;
          }
          uVar8 = 1;
          if (fVar18 == fVar19) {
            uVar8 = 0;
          }
        }
        local_54._4_4_ = local_54._4_4_ + (uint)CARRY4((uint)local_54,uVar8);
        local_54 = CONCAT44(local_54._4_4_,(uint)local_54 + uVar8);
        fVar18 = (float10)local_54;
        if (local_54._4_4_ < 0) {
          fVar18 = fVar18 + (float10)1.844674e+19;
        }
      }
      iVar15 = 0;
      __sprintf_chk(param_3,1,0xffffffff,"%.0Lf",fVar18 / (float10)10.0);
      sVar5 = strlen(param_3);
    }
  }
  pcVar14 = local_88 + -sVar5;
  pcVar11 = pcVar14 + (sVar5 - iVar15);
  memmove(pcVar14,param_3,sVar5);
joined_r0x080541be:
  if ((param_4 & 4) != 0) {
    uVar8 = (int)pcVar11 - (int)pcVar14;
    uVar6 = 0xffffffff;
    sVar4 = strlen(__s);
    pcVar13 = pcVar14 + uVar8;
    __memcpy_chk(local_49,pcVar14,uVar8,0x29);
    while( true ) {
      bVar1 = *local_98;
      if (bVar1 != 0) {
        uVar6 = (uint)bVar1;
        if (0x7e < bVar1) {
          uVar6 = uVar8;
        }
        local_98 = local_98 + 1;
      }
      if (uVar8 < uVar6) {
        uVar6 = uVar8;
      }
      uVar8 = uVar8 - uVar6;
      pcVar14 = pcVar13 + -uVar6;
      memcpy(pcVar14,local_49 + uVar8,uVar6);
      if (uVar8 == 0) break;
      pcVar13 = pcVar14 + -sVar4;
      memcpy(pcVar13,__s,sVar4);
    }
  }
  if ((param_4 & 0x80) != 0) {
    if ((local_a4 == 0xffffffff) && ((param_8 != 0 || (local_a4 = 0, 1 < param_7)))) {
      uVar6 = 1;
      uVar8 = 0;
      local_a4 = 1;
      do {
        uVar25 = (ulonglong)uVar6;
        uVar6 = (uint)(uVar25 * uVar7);
        uVar8 = (int)(uVar25 * uVar7 >> 0x20) + uVar7 * uVar8;
        if ((param_8 <= uVar8) && ((param_8 < uVar8 || (param_7 <= uVar6)))) break;
        local_a4 = local_a4 + 1;
      } while (local_a4 != 8);
    }
    if ((local_a4 | param_4 & 0x100) != 0) {
      if ((param_4 & 0x40) != 0) {
        param_3[0x288] = ' ';
        local_88 = param_3 + 0x289;
      }
      if (local_a4 != 0) {
        if ((local_a4 != 1) || (cVar2 = 'k', uVar10 != 0)) {
          cVar2 = (&UNK_0805d46c)[local_a4];
        }
        *local_88 = cVar2;
        local_88 = local_88 + 1;
      }
      if ((param_4 & 0x100) != 0) {
        if ((local_a4 != 0) && (uVar10 != 0)) {
          *local_88 = 'i';
          local_88 = local_88 + 1;
        }
        *local_88 = 'B';
        local_88 = local_88 + 1;
      }
    }
  }
  iVar15 = *(int *)(in_GS_OFFSET + 0x14);
  *local_88 = '\0';
  if (local_20 != iVar15) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return pcVar14;
}



int FUN_08054660(char *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *local_20 [4];
  
  if (((param_1 == (char *)0x0) && (param_1 = getenv("BLOCK_SIZE"), param_1 == (char *)0x0)) &&
     (param_1 = getenv("BLOCKSIZE"), param_1 == (char *)0x0)) {
    pcVar2 = getenv("POSIXLY_CORRECT");
    uVar4 = 0x400;
    if (pcVar2 != (char *)0x0) {
      uVar4 = 0x200;
    }
    uVar3 = 0;
    *param_3 = uVar4;
    uVar5 = 0;
    param_3[1] = 0;
  }
  else {
    uVar5 = 0;
    if (*param_1 == '\'') {
      param_1 = param_1 + 1;
      uVar5 = 4;
    }
    iVar1 = FUN_08051c00(param_1,&PTR_s_human_readable_0805d478,&DAT_0805d484,4);
    if (iVar1 < 0) {
      iVar1 = FUN_08059230(param_1,local_20,0,param_3,"eEgGkKmMpPtTyYzZ0");
      if (iVar1 != 0) {
        *param_2 = 0;
        uVar4 = *param_3;
        uVar3 = param_3[1];
        goto LAB_080546e2;
      }
      if (9 < (byte)(*param_1 - 0x30U)) {
        for (; param_1 != local_20[0]; param_1 = param_1 + 1) {
          if ((byte)(param_1[1] - 0x30U) < 10) goto LAB_080547a6;
        }
        uVar4 = uVar5 | 0x80;
        if ((local_20[0][-1] != 'B') ||
           (uVar5 = uVar5 | 0x180, uVar4 = uVar5, local_20[0][-2] == 'i')) {
          uVar5 = uVar4 | 0x20;
          uVar4 = *param_3;
          uVar3 = param_3[1];
          goto LAB_080546dd;
        }
      }
LAB_080547a6:
      uVar4 = *param_3;
      uVar3 = param_3[1];
    }
    else {
      uVar5 = uVar5 | *(uint *)(&DAT_0805d484 + iVar1 * 4);
      uVar4 = 1;
      *param_3 = 1;
      uVar3 = 0;
      param_3[1] = 0;
    }
  }
LAB_080546dd:
  *param_2 = uVar5;
  iVar1 = 0;
LAB_080546e2:
  if ((uVar3 | uVar4) == 0) {
    uVar5 = 0x400;
    pcVar2 = getenv("POSIXLY_CORRECT");
    if (pcVar2 != (char *)0x0) {
      uVar5 = 0x200;
    }
    param_3[1] = 0;
    iVar1 = 4;
    *param_3 = uVar5;
  }
  return iVar1;
}



__uid_t * FUN_08054860(__uid_t param_1)

{
  __uid_t _Var1;
  passwd *ppVar2;
  size_t sVar3;
  int iVar4;
  __uid_t *p_Var5;
  __uid_t *p_Var6;
  char *__s;
  
  if (DAT_08062dac == (__uid_t *)0x0) {
LAB_0805488b:
    ppVar2 = getpwuid(param_1);
    if (ppVar2 == (passwd *)0x0) {
      iVar4 = 9;
      __s = "";
    }
    else {
      __s = ppVar2->pw_name;
      sVar3 = strlen(__s);
      iVar4 = sVar3 + 9;
    }
    p_Var5 = (__uid_t *)FUN_08058a70(iVar4);
    *p_Var5 = param_1;
    strcpy((char *)(p_Var5 + 2),__s);
    p_Var6 = p_Var5;
    p_Var5[1] = (__uid_t)DAT_08062dac;
    DAT_08062dac = p_Var6;
  }
  else {
    _Var1 = *DAT_08062dac;
    p_Var5 = DAT_08062dac;
    while (_Var1 != param_1) {
      p_Var5 = (__uid_t *)p_Var5[1];
      if (p_Var5 == (__uid_t *)0x0) goto LAB_0805488b;
      _Var1 = *p_Var5;
    }
  }
  p_Var6 = (__uid_t *)0x0;
  if (*(char *)(p_Var5 + 2) != '\0') {
    p_Var6 = p_Var5 + 2;
  }
  return p_Var6;
}



__gid_t * FUN_080549f0(__gid_t param_1)

{
  __gid_t _Var1;
  group *pgVar2;
  size_t sVar3;
  int iVar4;
  __gid_t *p_Var5;
  __gid_t *p_Var6;
  char *__s;
  
  if (DAT_08062db4 == (__gid_t *)0x0) {
LAB_08054a1b:
    pgVar2 = getgrgid(param_1);
    if (pgVar2 == (group *)0x0) {
      iVar4 = 9;
      __s = "";
    }
    else {
      __s = pgVar2->gr_name;
      sVar3 = strlen(__s);
      iVar4 = sVar3 + 9;
    }
    p_Var5 = (__gid_t *)FUN_08058a70(iVar4);
    *p_Var5 = param_1;
    strcpy((char *)(p_Var5 + 2),__s);
    p_Var6 = p_Var5;
    p_Var5[1] = (__gid_t)DAT_08062db4;
    DAT_08062db4 = p_Var6;
  }
  else {
    _Var1 = *DAT_08062db4;
    p_Var5 = DAT_08062db4;
    while (_Var1 != param_1) {
      p_Var5 = (__gid_t *)p_Var5[1];
      if (p_Var5 == (__gid_t *)0x0) goto LAB_08054a1b;
      _Var1 = *p_Var5;
    }
  }
  p_Var6 = (__gid_t *)0x0;
  if (*(char *)(p_Var5 + 2) != '\0') {
    p_Var6 = p_Var5 + 2;
  }
  return p_Var6;
}



char * FUN_08054b80(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  
  lVar4 = CONCAT44(param_2,param_1);
  pcVar2 = (char *)(param_3 + 0x14);
  *(undefined *)(param_3 + 0x14) = 0;
  if (-1 < param_2) {
    do {
      pcVar2 = pcVar2 + -1;
      cVar1 = FUN_08059ac0(lVar4,10,0);
      *pcVar2 = cVar1 + '0';
      lVar4 = FUN_08059950(lVar4,10,0);
    } while (lVar4 != 0);
    return pcVar2;
  }
  do {
    pcVar3 = pcVar2;
    cVar1 = FUN_08059ac0(lVar4,10,0);
    pcVar3[-1] = '0' - cVar1;
    lVar4 = FUN_08059950(lVar4,10,0);
    pcVar2 = pcVar3 + -1;
  } while (lVar4 != 0);
  pcVar3[-2] = '-';
  return pcVar3 + -2;
}



char * FUN_08054c60(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  
  lVar3 = CONCAT44(param_2,param_1);
  pcVar2 = (char *)(param_3 + 0x14);
  *(undefined *)(param_3 + 0x14) = 0;
  do {
    pcVar2 = pcVar2 + -1;
    cVar1 = FUN_08059dc0(lVar3,10,0);
    *pcVar2 = cVar1 + '0';
    lVar3 = FUN_08059c90(lVar3,10,0);
  } while (lVar3 != 0);
  return pcVar2;
}



int FUN_08054ce0(char *param_1,undefined *param_2,int param_3,uint *param_4,int param_5,byte param_6
                )

{
  size_t __n;
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  size_t sVar4;
  wchar_t *__pwcs;
  size_t sVar5;
  int iVar6;
  undefined *puVar7;
  wchar_t wVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  wchar_t *pwVar13;
  int local_30;
  uint local_2c;
  char *local_28;
  char *local_24;
  size_t local_20;
  
  uVar3 = strlen(param_1);
  sVar4 = __ctype_get_mb_cur_max();
  uVar9 = uVar3;
  if (sVar4 < 2) {
    __pwcs = (wchar_t *)0x0;
LAB_08054d78:
    local_28 = (char *)0x0;
    local_24 = param_1;
LAB_08054d88:
    uVar10 = *param_4;
    if (uVar9 <= uVar10) goto LAB_08054eb0;
    uVar11 = 0;
    uVar9 = uVar10;
    uVar3 = uVar10;
  }
  else {
    sVar4 = mbstowcs((wchar_t *)0x0,param_1,0);
    if (sVar4 == 0xffffffff) {
      if ((param_6 & 1) == 0) {
        __pwcs = (wchar_t *)0x0;
        local_28 = (char *)0x0;
        local_30 = -1;
        goto LAB_08054e54;
      }
      __pwcs = (wchar_t *)0x0;
      local_24 = param_1;
      local_28 = (char *)0x0;
      goto LAB_08054d88;
    }
    __n = sVar4 + 1;
    __pwcs = (wchar_t *)malloc(__n * 4);
    if (__pwcs == (wchar_t *)0x0) {
      if ((param_6 & 1) == 0) {
        local_28 = (char *)0x0;
        local_30 = -1;
        goto LAB_08054e54;
      }
      local_24 = param_1;
      local_28 = (char *)0x0;
      goto LAB_08054d88;
    }
    sVar5 = mbstowcs(__pwcs,param_1,__n);
    if (sVar5 == 0) goto LAB_08054d78;
    __pwcs[sVar4] = L'\0';
    wVar8 = *__pwcs;
    if (wVar8 != L'\0') {
      bVar2 = false;
      pwVar13 = __pwcs;
      do {
        iVar6 = iswprint(wVar8);
        if (iVar6 == 0) {
          *pwVar13 = L'�';
          bVar2 = true;
        }
        pwVar13 = pwVar13 + 1;
        wVar8 = *pwVar13;
      } while (wVar8 != L'\0');
      uVar9 = wcswidth(__pwcs,__n);
      if (!bVar2) goto LAB_08055030;
      local_20 = wcstombs((char *)0x0,__pwcs,0);
LAB_08054f50:
      local_20 = local_20 + 1;
      local_28 = (char *)malloc(local_20);
      if (local_28 == (char *)0x0) {
        if ((param_6 & 1) == 0) {
          local_30 = -1;
          goto LAB_08054e54;
        }
        local_24 = param_1;
      }
      else {
        uVar3 = *param_4;
        wVar8 = *__pwcs;
        uVar9 = 0;
        pwVar13 = __pwcs;
        while (wVar8 != L'\0') {
          iVar6 = wcwidth(wVar8);
          if (iVar6 == -1) {
            uVar10 = uVar9 + 1;
            *pwVar13 = L'�';
          }
          else {
            uVar10 = iVar6 + uVar9;
          }
          if (uVar3 < uVar10) break;
          pwVar13 = pwVar13 + 1;
          uVar9 = uVar10;
          wVar8 = *pwVar13;
        }
        *pwVar13 = L'\0';
        uVar3 = wcstombs(local_28,__pwcs,local_20);
        local_24 = local_28;
      }
      goto LAB_08054d88;
    }
    uVar9 = wcswidth(__pwcs,__n);
LAB_08055030:
    uVar10 = *param_4;
    local_20 = uVar3;
    if (uVar10 < uVar9) goto LAB_08054f50;
    local_28 = (char *)0x0;
    local_24 = param_1;
LAB_08054eb0:
    if (uVar9 < uVar10) {
      uVar11 = uVar10 - uVar9;
    }
    else {
      uVar11 = 0;
    }
  }
  *param_4 = uVar9;
  local_30 = uVar3 + uVar11;
  if (param_3 != 0) {
    puVar1 = param_2 + param_3 + -1;
    iVar6 = uVar11 - 1;
    iVar12 = iVar6;
    local_2c = uVar11;
    if (param_5 != 0) {
      if (param_5 == 1) {
        iVar12 = -1;
        local_2c = 0;
      }
      else {
        local_2c = uVar11 >> 1;
        uVar11 = (uVar11 & 1) + local_2c;
        iVar12 = local_2c - 1;
        iVar6 = uVar11 - 1;
      }
      if ((uVar11 != 0) && (param_2 < puVar1)) {
        do {
          *param_2 = 0x20;
          param_2 = param_2 + 1;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
        } while (param_2 != puVar1);
      }
    }
    if ((uint)((int)puVar1 - (int)param_2) <= uVar3) {
      uVar3 = (int)puVar1 - (int)param_2;
    }
    *param_2 = 0;
    puVar7 = (undefined *)mempcpy(param_2,local_24,uVar3);
    if ((local_2c != 0) && (puVar7 < puVar1)) {
      do {
        *puVar7 = 0x20;
        puVar7 = puVar7 + 1;
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
      } while (puVar7 != puVar1);
    }
    *puVar7 = 0;
  }
LAB_08054e54:
  free(__pwcs);
  free(local_28);
  return local_30;
}



int FUN_08055160(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  ushort **ppuVar4;
  byte *pbVar5;
  int iVar6;
  int in_GS_OFFSET;
  wchar_t local_2c;
  mbstate_t local_28;
  int local_20;
  
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  pbVar5 = param_1 + param_2;
  sVar2 = __ctype_get_mb_cur_max();
  if (sVar2 < 2) {
    iVar6 = 0;
    if (param_1 < pbVar5) {
      ppuVar4 = __ctype_b_loc();
      iVar6 = 0;
      do {
        if (((*ppuVar4)[*param_1] & 0x4000) == 0) {
          if ((param_3 & 2) != 0) goto LAB_0805533f;
          if (((*ppuVar4)[*param_1] & 2) == 0) goto LAB_08055324;
        }
        else {
LAB_08055324:
          if (iVar6 == 0x7fffffff) break;
          iVar6 = iVar6 + 1;
        }
        param_1 = param_1 + 1;
      } while (param_1 != pbVar5);
    }
  }
  else {
    iVar6 = 0;
    if (param_1 < pbVar5) {
      do {
        bVar1 = *param_1;
        if ((char)bVar1 < '`') {
          if (('@' < (char)bVar1) ||
             (('\x1f' < (char)bVar1 && (((char)bVar1 < '$' || ((byte)(bVar1 - 0x25) < 0x1b))))))
          goto LAB_08055298;
LAB_080551d0:
          local_28.__count = 0;
          local_28.__value = 0;
          do {
            sVar2 = mbrtowc(&local_2c,(char *)param_1,(int)pbVar5 - (int)param_1,&local_28);
            if (sVar2 == 0xffffffff) {
              if ((param_3 & 1) == 0) goto LAB_08055298;
              goto LAB_0805533f;
            }
            if (sVar2 == 0xfffffffe) {
              if ((param_3 & 1) != 0) goto LAB_0805533f;
              iVar6 = iVar6 + 1;
              goto LAB_080552a8;
            }
            if (sVar2 == 0) {
              sVar2 = 1;
            }
            iVar3 = wcwidth(local_2c);
            if (iVar3 < 0) {
              if ((param_3 & 2) != 0) goto LAB_0805533f;
              iVar3 = iswcntrl(local_2c);
              if (iVar3 == 0) {
                if (iVar6 == 0x7fffffff) goto LAB_080552a8;
                iVar6 = iVar6 + 1;
              }
            }
            else {
              if (0x7fffffff - iVar6 < iVar3) {
                iVar6 = 0x7fffffff;
                goto LAB_080552a8;
              }
              iVar6 = iVar6 + iVar3;
            }
            param_1 = param_1 + sVar2;
            iVar3 = mbsinit(&local_28);
          } while (iVar3 == 0);
        }
        else {
          if (0x1d < (byte)(bVar1 + 0x9f)) goto LAB_080551d0;
LAB_08055298:
          param_1 = param_1 + 1;
          iVar6 = iVar6 + 1;
        }
      } while (param_1 < pbVar5);
    }
  }
LAB_080552a8:
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar6;
LAB_0805533f:
  iVar6 = -1;
  goto LAB_080552a8;
}



void FUN_08055350(char *param_1,undefined4 param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_08055160(param_1,sVar1,param_2);
  return;
}



void __regparm3 FUN_08055380(undefined4 *param_1_00,uint param_2,undefined4 *param_3,code *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *__dest;
  uint uVar9;
  uint local_38;
  uint local_34;
  uint local_24;
  
  if (param_2 < 3) {
    if (param_2 == 2) {
      uVar6 = *param_1_00;
      uVar7 = param_1_00[1];
      iVar5 = (*param_1)(uVar6,uVar7);
      if (0 < iVar5) {
        *param_1_00 = uVar7;
        param_1_00[1] = uVar6;
        return;
      }
    }
    return;
  }
  uVar3 = param_2 >> 1;
  FUN_08055380(param_1);
  if (uVar3 == 1) {
    local_38 = *param_1_00;
    *param_3 = local_38;
  }
  else {
    uVar8 = param_2 >> 2;
    FUN_08055380(param_1);
    FUN_08055380(param_1);
    uVar6 = *param_1_00;
    uVar7 = *(undefined4 *)((int)param_1_00 + (param_2 & 0xfffffffc));
    local_38 = 0;
    uVar9 = uVar8;
    puVar2 = param_3;
    while( true ) {
      while( true ) {
        __dest = puVar2 + 1;
        iVar5 = (*param_1)(uVar6,uVar7);
        if (0 < iVar5) break;
        uVar1 = local_38 + 1;
        *puVar2 = uVar6;
        local_38 = uVar9;
        local_24 = uVar3;
        if (uVar8 == uVar1) goto LAB_08055564;
        uVar6 = param_1_00[uVar1];
        puVar2 = __dest;
        local_38 = uVar1;
      }
      uVar9 = uVar9 + 1;
      *puVar2 = uVar7;
      local_24 = uVar8;
      if (uVar3 == uVar9) break;
      uVar7 = param_1_00[uVar9];
      puVar2 = __dest;
    }
LAB_08055564:
    memcpy(__dest,param_1_00 + local_38,(local_24 - local_38) * 4);
    local_38 = *param_3;
  }
  local_34 = 0;
  uVar6 = param_1_00[uVar3];
  iVar5 = 1;
  uVar9 = uVar3;
  do {
    iVar4 = (*param_1)(local_38,uVar6);
    if (iVar4 < 1) {
      local_34 = local_34 + 1;
      param_1_00[iVar5 + -1] = local_38;
      if (uVar3 == local_34) {
        return;
      }
      local_38 = param_3[local_34];
    }
    else {
      uVar9 = uVar9 + 1;
      param_1_00[iVar5 + -1] = uVar6;
      if (param_2 == uVar9) {
        memcpy(param_1_00 + iVar5,param_3 + local_34,(uVar3 - local_34) * 4);
        return;
      }
      uVar6 = param_1_00[uVar9];
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



void FUN_080555b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  param_1 = param_3;
  FUN_08055380();
  return;
}



void FUN_080555d0(byte *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  
  bVar9 = 0;
  if (param_1 == (byte *)0x0) {
    fwrite("A NULL argv[0] was passed through an exec system call.\n",1,0x37,stderr);
                    // WARNING: Subroutine does not return
    abort();
  }
  pcVar2 = strrchr((char *)param_1,0x2f);
  if (pcVar2 != (char *)0x0) {
    pbVar1 = (byte *)(pcVar2 + 1);
    uVar3 = (int)pbVar1 - (int)param_1;
    bVar7 = uVar3 < 6;
    bVar8 = uVar3 == 6;
    if (6 < (int)uVar3) {
      iVar4 = 7;
      pbVar5 = (byte *)(pcVar2 + -6);
      pbVar6 = (byte *)"/.libs/";
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar7 = *pbVar5 < *pbVar6;
        bVar8 = *pbVar5 == *pbVar6;
        pbVar5 = pbVar5 + (uint)bVar9 * -2 + 1;
        pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar4 = 3;
        pbVar5 = pbVar1;
        pbVar6 = &DAT_0805d4f0;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar7 = *pbVar5 < *pbVar6;
          bVar8 = *pbVar5 == *pbVar6;
          pbVar5 = pbVar5 + (uint)bVar9 * -2 + 1;
          pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
        } while (bVar8);
        param_1 = pbVar1;
        if ((!bVar7 && !bVar8) == bVar7) {
          param_1 = (byte *)(pcVar2 + 4);
          program_invocation_short_name = param_1;
        }
      }
    }
  }
  program_invocation_name = param_1;
  DAT_08062dbc = param_1;
  return;
}



void FUN_08055690(undefined4 param_1,undefined4 param_2)

{
  FUN_080567d0(param_1,6,param_2);
  return;
}



void FUN_080556c0(undefined4 param_1)

{
  FUN_08055690(0,param_1);
  return;
}



int * __regparm3 FUN_080556e0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int aiStack60 [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  piVar2 = aiStack60;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  if (param_2 != 8) {
    *param_1 = param_2;
    param_1[1] = aiStack60[1];
    param_1[2] = aiStack60[2];
    param_1[3] = aiStack60[3];
    param_1[4] = local_2c;
    param_1[5] = local_28;
    param_1[6] = local_24;
    param_1[7] = local_20;
    param_1[8] = local_1c;
    param_1[9] = local_18;
    param_1[10] = local_14;
    param_1[0xb] = local_10;
    return param_1;
  }
                    // WARNING: Subroutine does not return
  abort();
}



uint __regparm3
FUN_08055760(undefined *param_1_00,uint param_2_00,char *param_3_00,size_t param_1,int param_2,
            uint param_3,int param_4,char *param_5,char *param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  size_t sVar4;
  ushort **ppuVar5;
  char *pcVar6;
  size_t sVar7;
  int iVar8;
  size_t sVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int in_GS_OFFSET;
  bool bVar15;
  bool bVar16;
  size_t local_54;
  char *local_50;
  uint local_4c;
  char *local_44;
  char *local_3c;
  wchar_t local_2c;
  mbstate_t local_28;
  int local_20;
  
  local_3c = param_5;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  local_44 = param_6;
  sVar4 = __ctype_get_mb_cur_max();
  bVar15 = (param_3 & 2) != 0;
  switch(param_2) {
  case 0:
    bVar15 = false;
    bVar11 = false;
    uVar10 = 0;
    local_54 = 0;
    local_50 = (char *)0x0;
    break;
  case 1:
    bVar15 = true;
    bVar11 = false;
    uVar10 = 0;
    local_54 = 1;
    local_50 = "\'";
    param_2 = 2;
    break;
  case 2:
    if (bVar15) {
      bVar11 = false;
      uVar10 = 0;
      local_54 = 1;
      local_50 = "\'";
    }
    else if (param_2_00 == 0) {
      bVar11 = false;
      uVar10 = 1;
      local_54 = 1;
      local_50 = "\'";
    }
    else {
      bVar11 = false;
      uVar10 = 1;
      local_54 = 1;
      local_50 = "\'";
      *param_1_00 = 0x27;
    }
    break;
  case 3:
    if (bVar15) {
      bVar11 = true;
      uVar10 = 0;
      local_54 = 1;
      local_50 = "\"";
    }
    else if (param_2_00 == 0) {
      bVar11 = true;
      uVar10 = 1;
      local_54 = 1;
      local_50 = "\"";
    }
    else {
      bVar11 = true;
      uVar10 = 1;
      local_54 = 1;
      local_50 = "\"";
      *param_1_00 = 0x22;
    }
    break;
  case 4:
    bVar15 = true;
    bVar11 = true;
    uVar10 = 0;
    local_54 = 1;
    local_50 = "\"";
    param_2 = 3;
    break;
  case 5:
    bVar15 = false;
    bVar11 = true;
    uVar10 = 0;
    local_54 = 0;
    local_50 = (char *)0x0;
    break;
  case 6:
  case 7:
  case 8:
    if (param_2 != 8) {
      pcVar6 = (char *)dcgettext(0,&DAT_0805d4f6,5);
      local_3c = pcVar6;
      if ((pcVar6 == "`") && (local_3c = "\"", param_2 != 7)) {
        local_3c = pcVar6;
      }
      pcVar6 = (char *)dcgettext(0,"\'",5);
      local_44 = pcVar6;
      if ((pcVar6 == "\'") && (local_44 = "\"", param_2 != 7)) {
        local_44 = pcVar6;
      }
    }
    uVar10 = 0;
    if (!bVar15) {
      cVar3 = *local_3c;
      while (cVar3 != '\0') {
        if (uVar10 < param_2_00) {
          param_1_00[uVar10] = cVar3;
        }
        uVar10 = uVar10 + 1;
        cVar3 = local_3c[uVar10];
      }
    }
    bVar11 = true;
    local_54 = strlen(local_44);
    local_50 = local_44;
    break;
  default:
                    // WARNING: Subroutine does not return
    abort();
  }
  uVar14 = 0;
LAB_08055820:
  if (param_1 == 0xffffffff) {
    if (param_3_00[uVar14] == '\0') goto LAB_08055ea3;
  }
  else if (uVar14 == param_1) {
LAB_08055ea3:
    if (((uVar10 != 0) || (param_2 != 2)) || (!bVar15)) {
      uVar14 = uVar10;
      if (((local_50 != (char *)0x0) && (!bVar15)) && (cVar3 = *local_50, cVar3 != '\0')) {
        do {
          if (uVar14 < param_2_00) {
            param_1_00[uVar14] = cVar3;
          }
          uVar14 = uVar14 + 1;
          cVar3 = local_50[uVar14 - uVar10];
        } while (cVar3 != '\0');
      }
      if (uVar14 < param_2_00) {
        param_1_00[uVar14] = 0;
      }
      goto LAB_08055d96;
    }
switchD_080560b7_caseD_5b:
    uVar14 = FUN_08055760(param_1,param_2,param_3 & 0xfffffffd,0,local_3c,local_44);
LAB_08055d96:
    if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
      return uVar14;
    }
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  if ((bVar11) && (local_54 != 0)) {
    if (param_1 < local_54 + uVar14) {
      bVar1 = false;
    }
    else {
      iVar8 = memcmp(param_3_00 + uVar14,local_50,local_54);
      bVar1 = false;
      if (iVar8 == 0) {
        if (bVar15) goto switchD_080560b7_caseD_5b;
        bVar1 = true;
      }
    }
    bVar12 = param_3_00[uVar14];
  }
  else {
    bVar1 = false;
    bVar12 = param_3_00[uVar14];
  }
  if (bVar12 < 0x7f) {
                    // WARNING: Could not recover jumptable at 0x08055c2b. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar10 = (*(code *)(&PTR_DAT_0805d544)[bVar12])();
    return uVar10;
  }
  if (sVar4 != 1) {
    local_28.__count = 0;
    local_28.__value = 0;
    if (param_1 == 0xffffffff) {
      param_1 = strlen(param_3_00);
    }
    local_4c = 0;
    bVar16 = true;
    while( true ) {
      uVar13 = uVar14 + local_4c;
      pcVar6 = param_3_00 + uVar13;
      sVar7 = mbrtowc(&local_2c,pcVar6,param_1 - uVar13,&local_28);
      if (sVar7 == 0) break;
      if (sVar7 == 0xffffffff) {
        bVar16 = false;
        break;
      }
      if (sVar7 == 0xfffffffe) {
        bVar16 = false;
        if ((uVar13 < param_1) && (*pcVar6 != '\0')) goto LAB_080561c6;
        break;
      }
      if (((bVar15) && (param_2 == 2)) && (1 < sVar7)) {
        sVar9 = 1;
        do {
          switch(pcVar6[sVar9]) {
          case '[':
          case '\\':
          case '^':
          case '`':
          case '|':
            goto switchD_080560b7_caseD_5b;
          }
          sVar9 = sVar9 + 1;
        } while (sVar9 != sVar7);
      }
      iVar8 = iswprint(local_2c);
      bVar2 = false;
      if (iVar8 != 0) {
        bVar2 = bVar16;
      }
      bVar16 = bVar2;
      local_4c = local_4c + sVar7;
      iVar8 = mbsinit(&local_28);
      if (iVar8 != 0) break;
    }
    goto LAB_0805605e;
  }
  ppuVar5 = __ctype_b_loc();
  local_4c = 1;
  bVar16 = (*(byte *)((int)*ppuVar5 + (uint)bVar12 * 2 + 1) & 0x40) != 0;
  goto LAB_080558b1;
  while (param_3_00[local_4c + uVar14] != '\0') {
LAB_080561c6:
    local_4c = local_4c + 1;
    if (param_1 <= local_4c + uVar14) break;
  }
  bVar16 = false;
LAB_0805605e:
  if (1 < local_4c) {
LAB_080558c8:
    local_4c = local_4c + uVar14;
    while( true ) {
      if ((!bVar11) || (bVar16)) {
        if (bVar1) {
          if (uVar10 < param_2_00) {
            param_1_00[uVar10] = 0x5c;
          }
          uVar10 = uVar10 + 1;
          bVar1 = false;
        }
      }
      else {
        if (bVar15) goto switchD_080560b7_caseD_5b;
        if (uVar10 < param_2_00) {
          param_1_00[uVar10] = 0x5c;
        }
        if (uVar10 + 1 < param_2_00) {
          param_1_00[uVar10 + 1] = (bVar12 >> 6) + 0x30;
        }
        if (uVar10 + 2 < param_2_00) {
          param_1_00[uVar10 + 2] = (bVar12 >> 3 & 7) + 0x30;
        }
        uVar10 = uVar10 + 3;
        bVar12 = (bVar12 & 7) + 0x30;
      }
      if (local_4c <= uVar14 + 1) break;
      uVar14 = uVar14 + 1;
      if (uVar10 < param_2_00) {
        param_1_00[uVar10] = bVar12;
      }
      uVar10 = uVar10 + 1;
      bVar12 = param_3_00[uVar14];
    }
    goto LAB_08055bf8;
  }
LAB_080558b1:
  if (bVar11) {
    if (!bVar16) goto LAB_080558c8;
LAB_08055bb0:
    if ((param_4 == 0) ||
       ((*(uint *)(param_4 + (uint)(bVar12 >> 5) * 4) & 1 << (bVar12 & 0x1f)) == 0))
    goto LAB_08055bd2;
  }
  else {
    if (bVar15) goto LAB_08055bb0;
LAB_08055bd2:
    if (!bVar1) goto LAB_08055bf8;
  }
  if (bVar15) goto switchD_080560b7_caseD_5b;
  if (uVar10 < param_2_00) {
    param_1_00[uVar10] = 0x5c;
  }
  uVar10 = uVar10 + 1;
LAB_08055bf8:
  uVar14 = uVar14 + 1;
  if (uVar10 < param_2_00) {
    param_1_00[uVar10] = bVar12;
  }
  uVar10 = uVar10 + 1;
  goto LAB_08055820;
}



undefined * __regparm3
FUN_08056220(uint param_1_00,undefined4 param_2,undefined4 param_3,undefined4 *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined *__ptr;
  
  piVar6 = __errno_location();
  iVar3 = *piVar6;
  if ((int)param_1_00 < 0) {
                    // WARNING: Subroutine does not return
    abort();
  }
  puVar7 = (undefined4 *)PTR_DAT_080622d0;
  if (DAT_080622d4 <= param_1_00) {
    uVar1 = param_1_00 + 1;
    if (0x1fffffff < uVar1) {
                    // WARNING: Subroutine does not return
      FUN_08058c00();
    }
    if ((undefined4 *)PTR_DAT_080622d0 == &DAT_080622d8) {
      puVar7 = (undefined4 *)FUN_08058aa0(0,uVar1 * 8);
      uVar5 = DAT_080622d8;
      PTR_DAT_080622d0 = (undefined *)puVar7;
      puVar7[1] = PTR_DAT_080622dc;
      *puVar7 = uVar5;
    }
    else {
      puVar7 = (undefined4 *)FUN_08058aa0(PTR_DAT_080622d0,uVar1 * 8);
      PTR_DAT_080622d0 = (undefined *)puVar7;
    }
    memset(puVar7 + DAT_080622d4 * 2,0,(uVar1 - DAT_080622d4) * 8);
    DAT_080622d4 = uVar1;
  }
  puVar2 = puVar7 + param_1_00 * 2;
  uVar1 = param_1[1];
  uVar4 = *puVar2;
  __ptr = (undefined *)puVar2[1];
  uVar8 = FUN_08055760(param_3,*param_1,uVar1 | 1,param_1 + 2,param_1[10],param_1[0xb]);
  if (uVar4 <= uVar8) {
    *puVar2 = uVar8 + 1;
    if (__ptr != &DAT_08062e00) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_08058a70(uVar8 + 1);
    puVar2[1] = (uint)__ptr;
    FUN_08055760(param_3,*param_1,uVar1 | 1,param_1 + 2,param_1[10],param_1[0xb]);
  }
  *piVar6 = iVar3;
  return __ptr;
}



void FUN_080563c0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_08062dc0;
  }
  FUN_08058ba0(param_1,0x30);
  *piVar2 = iVar1;
  return;
}



undefined4 FUN_08056410(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_08062dc0;
  }
  return *param_1;
}



void FUN_08056430(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_08062dc0;
  }
  *param_1 = param_2;
  return;
}



void FUN_08056450(undefined4 *param_1,byte param_2,uint param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_08062dc0;
  }
  param_1[(param_2 >> 5) + 2] =
       (param_3 & 1 ^ (uint)param_1[(param_2 >> 5) + 2] >> (param_2 & 0x1f) & 1) << (param_2 & 0x1f)
       ^ param_1[(param_2 >> 5) + 2];
  return;
}



void FUN_08056510(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000010;
  undefined4 *in_stack_00000014;
  
  puVar3 = &DAT_08062dc0;
  if (in_stack_00000014 != (undefined4 *)0x0) {
    puVar3 = in_stack_00000014;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_08055760(in_stack_00000010,*puVar3,puVar3[1],puVar3 + 2,puVar3[10],puVar3[0xb]);
  *piVar2 = iVar1;
  return;
}



void FUN_08056740(void)

{
  undefined4 *puStack00000004;
  
  puStack00000004 = &DAT_08062dc0;
  FUN_08056220();
  return;
}



void FUN_08056780(undefined4 param_1)

{
  FUN_08056740(0,param_1);
  return;
}



void FUN_080567d0(void)

{
  undefined local_3c [56];
  
  FUN_080556e0();
  FUN_08056220(local_3c);
  return;
}



void FUN_08056890(undefined4 param_1,undefined4 param_2,byte param_3)

{
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34 [7];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_3c = DAT_08062dc0;
  local_38 = DAT_08062dc4;
  local_34[0] = DAT_08062dc8;
  local_34[1] = DAT_08062dcc;
  local_34[2] = DAT_08062dd0;
  local_34[3] = DAT_08062dd4;
  local_34[4] = DAT_08062dd8;
  local_34[5] = DAT_08062ddc;
  local_34[6] = DAT_08062de0;
  local_18 = DAT_08062de4;
  local_14 = DAT_08062de8;
  local_10 = DAT_08062dec;
  local_34[param_3 >> 5] =
       (local_34[param_3 >> 5] >> (param_3 & 0x1f) & 1 ^ 1) << (param_3 & 0x1f) ^
       local_34[param_3 >> 5];
  FUN_08056220(&local_3c);
  return;
}



void FUN_08056950(undefined4 param_1,char param_2)

{
  FUN_08056890(param_1,0xffffffff,(int)param_2);
  return;
}



void FUN_08056980(undefined4 param_1)

{
  FUN_08056950(param_1,0x3a);
  return;
}



int __regparm3 FUN_08056b30(int param_1,int param_2,int param_3)

{
  __int32_t **pp_Var1;
  
  if (param_3 != 0) {
    pp_Var1 = __ctype_toupper_loc();
    do {
      *(char *)(param_1 + -1 + param_3) = (char)(*pp_Var1)[*(byte *)(param_2 + -1 + param_3)];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return param_1;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps

int __regparm3
FUN_08056b70(char param_1_00,byte *param_2_00,int param_3_00,byte *param_1,tm *param_2,
            undefined4 param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  char cVar5;
  byte *pbVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  time_t tVar11;
  __int32_t **pp_Var12;
  time_t tVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  char *pcVar17;
  int iVar18;
  char *pcVar19;
  size_t __n;
  size_t sVar20;
  char cVar21;
  char *pcVar22;
  char *pcVar23;
  int in_GS_OFFSET;
  bool bVar24;
  char *local_4c4;
  byte *local_4c0;
  int local_4bc;
  char *local_4b8;
  char *local_4b0;
  char local_4ac;
  uint local_494;
  bool local_48c;
  char *local_47c;
  char *local_478;
  char local_474;
  tm local_460;
  char local_433;
  byte local_432 [1036];
  char local_26 [6];
  int local_20;
  
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  uVar16 = param_2->tm_hour;
  local_478 = param_2->tm_zone;
  if ((int)uVar16 < 0xd) {
    local_494 = 0xc;
    if (uVar16 != 0) {
      local_494 = uVar16;
    }
  }
  else {
    local_494 = uVar16 - 0xc;
  }
  bVar14 = *param_1;
  local_4bc = 0;
  local_4c0 = param_2_00;
  if (bVar14 != 0) {
    do {
      if (bVar14 != 0x25) {
        if ((uint)(param_3_00 - local_4bc) < 2) goto LAB_08056d40;
        if (local_4c0 != (byte *)0x0) {
          *local_4c0 = bVar14;
          local_4c0 = local_4c0 + 1;
        }
        local_4bc = local_4bc + 1;
        pbVar6 = param_1;
        goto LAB_08056c1d;
      }
      bVar24 = false;
      local_4ac = param_1_00;
      bVar14 = 0;
      do {
        while( true ) {
          while( true ) {
            do {
              bVar2 = bVar14;
              param_1 = param_1 + 1;
              bVar14 = *param_1;
            } while (bVar14 == 0x30);
            if ((char)bVar14 < '1') break;
            if (bVar14 == 0x5e) {
              local_4ac = '\x01';
              bVar14 = bVar2;
            }
            else if (bVar14 != 0x5f) goto LAB_08056c62;
          }
          if (bVar14 != 0x23) break;
          bVar24 = true;
          bVar14 = bVar2;
        }
      } while (bVar14 == 0x2d);
LAB_08056c62:
      pcVar22 = (char *)(int)(char)bVar14;
      pcVar19 = (char *)0xffffffff;
      if (pcVar22 + -0x30 < (char *)0xa) {
        pcVar19 = (char *)0x0;
        do {
          if ((int)pcVar19 < 0xccccccd) {
            if ((pcVar19 == (char *)0xccccccc) && ('7' < (char)*param_1)) {
              pcVar19 = (char *)0x7fffffff;
            }
            else {
              pcVar19 = (char *)((char)*param_1 + -0x30 + (int)pcVar19 * 10);
            }
          }
          else {
            pcVar19 = (char *)0x7fffffff;
          }
          param_1 = param_1 + 1;
          bVar14 = *param_1;
          pcVar22 = (char *)(int)(char)bVar14;
        } while (pcVar22 + -0x30 < (char *)0xa);
      }
      if ((bVar14 == 0x45) || (bVar14 == 0x4f)) {
        bVar14 = param_1[1];
        param_1 = param_1 + 1;
        pcVar23 = (char *)(int)(char)bVar14;
        local_4b0 = pcVar22;
      }
      else {
        local_4b0 = (char *)0x0;
        pcVar23 = pcVar22;
      }
      cVar21 = (char)pcVar23;
      pbVar6 = param_1;
      switch(bVar14) {
      case 0:
        bVar14 = param_1[-1];
        param_1 = param_1 + -1;
      default:
LAB_08056cf1:
        if (bVar14 != 0x25) break;
        local_4c4 = (char *)0x1;
        pbVar6 = param_1;
        goto LAB_08056f84;
      case 0x25:
        if (local_4b0 == (char *)0x0) {
          if (-1 < (int)pcVar19) {
            local_4b0 = pcVar19;
          }
          pcVar23 = (char *)0x1;
          if (local_4b0 != (char *)0x0) {
            pcVar23 = local_4b0;
          }
          if (pcVar23 < (char *)(param_3_00 - local_4bc)) {
            if (local_4c0 != (byte *)0x0) {
              bVar14 = 0x25;
              if ((char *)0x1 < local_4b0) {
                pcVar19 = pcVar19 + -1;
                if (bVar2 == 0x30) {
                  memset(local_4c0,0x30,(size_t)pcVar19);
                  bVar14 = *param_1;
                  local_4c0 = local_4c0 + (int)pcVar19;
                }
                else {
                  memset(local_4c0,0x20,(size_t)pcVar19);
                  bVar14 = *param_1;
                  local_4c0 = local_4c0 + (int)pcVar19;
                }
              }
              *local_4c0 = bVar14;
              local_4c0 = local_4c0 + 1;
            }
            goto LAB_080578e5;
          }
          goto LAB_08056d40;
        }
        local_4c4 = (char *)0x1;
        goto LAB_08056f84;
      case 0x3a:
        bVar14 = param_1[1];
        if (bVar14 == 0x3a) {
          local_4c4 = (char *)0x1;
          pbVar4 = param_1 + 2;
          do {
            pbVar6 = pbVar4;
            bVar14 = *pbVar6;
            local_4c4 = (char *)((int)local_4c4 + 1);
            pbVar4 = pbVar6 + 1;
          } while (bVar14 == 0x3a);
        }
        else {
          pbVar6 = param_1 + 1;
          local_4c4 = (char *)0x1;
        }
        if (bVar14 == 0x7a) goto LAB_0805717b;
        break;
      case 0x41:
      case 0x42:
      case 0x61:
        if (local_4b0 != (char *)0x0) break;
        if (bVar24) {
          local_4ac = '\x01';
        }
LAB_08056dd8:
        pcVar22 = local_26 + 3;
        bVar3 = false;
        local_47c = (char *)0x0;
        goto LAB_08056e00;
      case 0x43:
        if (local_4b0 == (char *)0x4f) break;
        if (local_4b0 == (char *)0x45) {
          bVar3 = false;
          local_47c = (char *)0x0;
          goto LAB_08056f1f;
        }
        local_4c4 = (char *)0x0;
        local_474 = '\0';
        local_47c = (char *)0x2;
        iVar15 = param_2->tm_year;
        iVar18 = iVar15 / 100 + 0x13;
        local_48c = iVar15 < -0x76c;
        local_4b8 = (char *)(iVar18 - ((uint)(0 < iVar18) & (uint)(iVar15 % 100) >> 0x1f));
        goto LAB_08057228;
      case 0x44:
        pcVar22 = "%m/%d/%y";
        goto joined_r0x0805785e;
      case 0x46:
        pcVar22 = "%Y-%m-%d";
joined_r0x0805785e:
        if (local_4b0 == (char *)0x0) goto LAB_0805705a;
        break;
      case 0x47:
      case 0x56:
      case 0x67:
        if (local_4b0 != (char *)0x45) {
          iVar15 = param_2->tm_year;
          uVar16 = ((iVar15 >> 0x1f & 400U) - 100) + iVar15;
          iVar1 = param_2->tm_yday;
          iVar10 = param_2->tm_wday;
          iVar18 = (iVar1 - iVar10) + 0x17e;
          iVar18 = (iVar1 - iVar18) + 3 + (iVar18 / 7) * 7;
          if (iVar18 < 0) {
            iVar18 = 0x16d;
            uVar16 = uVar16 - 1;
            if (((uVar16 & 3) == 0) && (iVar18 = 0x16e, uVar16 == ((int)uVar16 / 100) * 100)) {
              iVar18 = ~-(uint)(uVar16 == ((int)uVar16 / 400) * 400) + 0x16e;
            }
            iVar10 = ((iVar18 + iVar1) - iVar10) + 0x17e;
            local_4c4 = (char *)0xffffffff;
            iVar18 = ((iVar18 + iVar1) - iVar10) + 3 + (iVar10 / 7) * 7;
          }
          else {
            iVar9 = -0x16d;
            if (((uVar16 & 3) == 0) && (iVar9 = -0x16e, uVar16 == ((int)uVar16 / 100) * 100)) {
              iVar9 = -0x16d - (uint)(uVar16 == ((int)uVar16 / 400) * 400);
            }
            iVar10 = ((iVar9 + iVar1) - iVar10) + 0x17e;
            iVar1 = ((iVar9 + iVar1) - iVar10) + 3 + (iVar10 / 7) * 7;
            local_4c4 = (char *)((iVar1 >> 0x1f) + 1);
            if (-1 < iVar1) {
              iVar18 = iVar1;
            }
          }
          if (bVar14 == 0x47) {
            local_474 = '\0';
            local_48c = iVar15 < -0x76c - (int)local_4c4;
            local_4b8 = (char *)((int)local_4c4 + 0x76c + iVar15);
            local_4c4 = (char *)0x0;
            local_47c = (char *)0x4;
            goto joined_r0x080574c7;
          }
          if (bVar14 == 0x67) {
            local_47c = (char *)0x2;
            uVar16 = (iVar15 % 100 + (int)local_4c4) % 100;
            local_4b8 = (char *)uVar16;
            if ((int)uVar16 < 0) {
              local_4b8 = (char *)(uVar16 + 100);
              if (iVar15 < -0x76c - (int)local_4c4) {
                local_4b8 = (char *)-uVar16;
              }
            }
          }
          else {
            local_47c = (char *)0x2;
            local_4b8 = (char *)(iVar18 / 7 + 1);
          }
          goto LAB_080574a8;
        }
        break;
      case 0x48:
        if (local_4b0 != (char *)0x45) {
          local_47c = (char *)0x2;
          local_4b8 = (char *)param_2->tm_hour;
          goto LAB_080574a8;
        }
        break;
      case 0x49:
        if (local_4b0 != (char *)0x45) {
          local_47c = (char *)0x2;
          local_4b8 = (char *)local_494;
          goto LAB_080574a8;
        }
        break;
      case 0x4d:
        if (local_4b0 != (char *)0x45) {
          local_4b8 = (char *)param_2->tm_min;
LAB_080576de:
          local_47c = (char *)0x2;
          goto LAB_080574a8;
        }
        break;
      case 0x4e:
        if (local_4b0 != (char *)0x45) {
          local_4b8 = (char *)param_4;
          if (pcVar19 == (char *)0xffffffff) {
            pcVar19 = (char *)0x9;
            local_47c = (char *)0x9;
          }
          else {
            uVar16 = param_4;
            pcVar22 = pcVar19;
            local_47c = pcVar19;
            if ((int)pcVar19 < 9) {
              do {
                pcVar22 = pcVar22 + 1;
                local_4b8 = (char *)((int)uVar16 / 10);
                uVar16 = (int)uVar16 / 10;
              } while (pcVar22 != (char *)0x9);
            }
          }
          goto LAB_080574a8;
        }
        break;
      case 0x50:
        cVar21 = 'p';
        bVar3 = true;
        goto LAB_08057140;
      case 0x52:
        pcVar22 = "%H:%M";
        goto LAB_0805705a;
      case 0x53:
        if (local_4b0 != (char *)0x45) {
          local_47c = (char *)0x2;
          local_4b8 = (char *)param_2->tm_sec;
          goto LAB_080574a8;
        }
        break;
      case 0x54:
        pcVar22 = "%H:%M:%S";
LAB_0805705a:
        pcVar7 = (char *)FUN_08056b70(pcVar22,param_2,param_3,param_4);
        pcVar23 = (char *)0x0;
        if (-1 < (int)pcVar19) {
          pcVar23 = pcVar19;
        }
        local_4c4 = pcVar23;
        if (pcVar23 <= pcVar7) {
          local_4c4 = pcVar7;
        }
        if ((char *)(param_3_00 - local_4bc) <= local_4c4) goto LAB_08056d40;
        if (local_4c0 != (byte *)0x0) {
          if (pcVar7 < pcVar23) {
            sVar20 = (int)pcVar19 - (int)pcVar7;
            if (bVar2 == 0x30) {
              memset(local_4c0,0x30,sVar20);
              local_4c0 = local_4c0 + sVar20;
            }
            else {
              memset(local_4c0,0x20,sVar20);
              local_4c0 = local_4c0 + sVar20;
            }
          }
          FUN_08056b70(pcVar22,param_2,param_3,param_4);
          local_4c0 = local_4c0 + (int)pcVar7;
        }
LAB_08057127:
        local_4bc = local_4bc + (int)local_4c4;
        goto LAB_08056c1d;
      case 0x55:
        if (local_4b0 != (char *)0x45) {
          iVar18 = (param_2->tm_yday - param_2->tm_wday) + 7;
          iVar15 = (int)((ulonglong)((longlong)iVar18 * -0x6db6db6d) >> 0x20);
LAB_080576d3:
          local_4b8 = (char *)((iVar15 + iVar18 >> 2) - (iVar18 >> 0x1f));
          goto LAB_080576de;
        }
        break;
      case 0x57:
        if (local_4b0 != (char *)0x45) {
          iVar18 = param_2->tm_wday + 6;
          iVar18 = ((iVar18 / 7) * 7 - iVar18) + 7 + param_2->tm_yday;
          iVar15 = (int)((ulonglong)((longlong)iVar18 * -0x6db6db6d) >> 0x20);
          goto LAB_080576d3;
        }
        break;
      case 0x58:
      case 99:
      case 0x78:
        if (local_4b0 != (char *)0x4f) goto switchD_08056d13_caseD_72;
        break;
      case 0x59:
        if (local_4b0 != (char *)0x45) {
          if (local_4b0 != (char *)0x4f) {
            local_4c4 = (char *)0x0;
            local_474 = '\0';
            local_47c = (char *)0x4;
            local_48c = param_2->tm_year < -0x76c;
            local_4b8 = (char *)(param_2->tm_year + 0x76c);
            goto LAB_08057228;
          }
          break;
        }
LAB_08057f20:
        local_47c = (char *)0x0;
        goto LAB_080574d8;
      case 0x5a:
        if (bVar24) {
          local_4ac = '\0';
        }
        if (local_478 == (char *)0x0) {
          pcVar22 = (char *)0x0;
          local_478 = "";
        }
        else {
          pcVar22 = (char *)strlen(local_478);
        }
        pcVar23 = (char *)0x0;
        if (-1 < (int)pcVar19) {
          pcVar23 = pcVar19;
        }
        local_4c4 = pcVar23;
        if (pcVar23 <= pcVar22) {
          local_4c4 = pcVar22;
        }
        if ((char *)(param_3_00 - local_4bc) <= local_4c4) goto LAB_08056d40;
        if (local_4c0 != (byte *)0x0) {
          if (pcVar22 < pcVar23) {
            sVar20 = (int)pcVar19 - (int)pcVar22;
            if (bVar2 == 0x30) {
              memset(local_4c0,0x30,sVar20);
              local_4c0 = local_4c0 + sVar20;
            }
            else {
              memset(local_4c0,0x20,sVar20);
              local_4c0 = local_4c0 + sVar20;
            }
          }
          if (bVar24) {
            if (pcVar22 != (char *)0x0) {
              pp_Var12 = __ctype_tolower_loc();
              pcVar19 = pcVar22;
              do {
                local_4c0[(int)(pcVar19 + -1)] =
                     (byte)(*pp_Var12)[(byte)local_478[(int)(pcVar19 + -1)]];
                pcVar19 = pcVar19 + -1;
              } while (pcVar19 != (char *)0x0);
            }
          }
          else if (local_4ac == '\0') {
            memcpy(local_4c0,local_478,(size_t)pcVar22);
          }
          else {
            FUN_08056b30();
          }
          local_4c0 = local_4c0 + (int)pcVar22;
        }
        goto LAB_08057127;
      case 0x62:
      case 0x68:
        if (bVar24) {
          local_4ac = '\x01';
        }
        if (local_4b0 == (char *)0x0) goto LAB_08056dd8;
        break;
      case 100:
        if (local_4b0 != (char *)0x45) {
          local_47c = (char *)0x2;
          local_4b8 = (char *)param_2->tm_mday;
          goto LAB_080574a8;
        }
        break;
      case 0x65:
        if (local_4b0 != (char *)0x45) {
          local_4b8 = (char *)param_2->tm_mday;
LAB_0805747d:
          if ((bVar2 == 0x2d) || (bVar2 == 0x30)) goto LAB_080576de;
          local_47c = (char *)0x2;
          bVar2 = 0x5f;
          goto LAB_080574a8;
        }
        break;
      case 0x6a:
        if (local_4b0 != (char *)0x45) {
          local_4c4 = (char *)0x0;
          local_474 = '\0';
          local_47c = (char *)0x3;
          local_48c = param_2->tm_yday < -1;
          local_4b8 = (char *)(param_2->tm_yday + 1);
          goto joined_r0x080574c7;
        }
        break;
      case 0x6b:
        if (local_4b0 != (char *)0x45) {
          local_4b8 = (char *)param_2->tm_hour;
          goto LAB_0805747d;
        }
        break;
      case 0x6c:
        local_4b8 = (char *)local_494;
        if (local_4b0 != (char *)0x45) goto LAB_0805747d;
        break;
      case 0x6d:
        if (local_4b0 != (char *)0x45) {
          local_4c4 = (char *)0x0;
          local_474 = '\0';
          local_47c = (char *)0x2;
          local_48c = param_2->tm_mon < -1;
          local_4b8 = (char *)(param_2->tm_mon + 1);
          goto joined_r0x080574c7;
        }
        break;
      case 0x6e:
        pcVar22 = (char *)0x0;
        if (-1 < (int)pcVar19) {
          pcVar22 = pcVar19;
        }
        pcVar23 = (char *)0x1;
        if (pcVar22 != (char *)0x0) {
          pcVar23 = pcVar22;
        }
        if (pcVar23 < (char *)(param_3_00 - local_4bc)) {
          if (local_4c0 != (byte *)0x0) {
            if ((char *)0x1 < pcVar22) {
              pcVar19 = pcVar19 + -1;
              if (bVar2 == 0x30) {
                memset(local_4c0,0x30,(size_t)pcVar19);
                local_4c0 = local_4c0 + (int)pcVar19;
              }
              else {
                memset(local_4c0,0x20,(size_t)pcVar19);
                local_4c0 = local_4c0 + (int)pcVar19;
              }
            }
            *local_4c0 = 10;
            local_4c0 = local_4c0 + 1;
          }
LAB_080578e5:
          local_4bc = local_4bc + (int)pcVar23;
          goto LAB_08056c1d;
        }
        goto LAB_08056d40;
      case 0x70:
        bVar3 = false;
LAB_08057140:
        if (bVar24) {
          local_4ac = '\0';
          bVar3 = true;
        }
LAB_08056ef2:
        pcVar22 = local_26 + 3;
        local_47c = (char *)0x0;
        if (local_4b0 != (char *)0x0) goto LAB_08056f1f;
        goto LAB_08056e00;
      case 0x72:
switchD_08056d13_caseD_72:
        bVar3 = false;
        goto LAB_08056ef2;
      case 0x73:
        pcVar22 = local_26 + 1;
        local_460.tm_sec = param_2->tm_sec;
        local_460.tm_min = param_2->tm_min;
        local_460.tm_hour = param_2->tm_hour;
        local_460.tm_mday = param_2->tm_mday;
        local_460.tm_mon = param_2->tm_mon;
        local_460.tm_year = param_2->tm_year;
        local_460.tm_wday = param_2->tm_wday;
        local_460.tm_yday = param_2->tm_yday;
        local_460.tm_isdst = param_2->tm_isdst;
        local_460.tm_gmtoff = param_2->tm_gmtoff;
        local_460.tm_zone = param_2->tm_zone;
        tVar11 = mktime(&local_460);
        local_48c = SUB41((uint)tVar11 >> 0x1f,0);
        tVar13 = tVar11;
        do {
          pcVar22 = pcVar22 + -1;
          iVar18 = tVar13 / 10;
          cVar5 = (char)(tVar13 % 10);
          cVar21 = -cVar5;
          if (-1 < tVar11) {
            cVar21 = cVar5;
          }
          *pcVar22 = cVar21 + '0';
          tVar13 = iVar18;
        } while (iVar18 != 0);
        local_474 = '\0';
        local_47c = (char *)0x1;
        goto LAB_08057289;
      case 0x74:
        pcVar22 = (char *)0x0;
        if (-1 < (int)pcVar19) {
          pcVar22 = pcVar19;
        }
        pcVar23 = (char *)0x1;
        if (pcVar22 != (char *)0x0) {
          pcVar23 = pcVar22;
        }
        if (pcVar23 < (char *)(param_3_00 - local_4bc)) {
          if (local_4c0 != (byte *)0x0) {
            if ((char *)0x1 < pcVar22) {
              pcVar19 = pcVar19 + -1;
              if (bVar2 == 0x30) {
                memset(local_4c0,0x30,(size_t)pcVar19);
                local_4c0 = local_4c0 + (int)pcVar19;
              }
              else {
                memset(local_4c0,0x20,(size_t)pcVar19);
                local_4c0 = local_4c0 + (int)pcVar19;
              }
            }
            *local_4c0 = 9;
            local_4c0 = local_4c0 + 1;
          }
          goto LAB_080578e5;
        }
        goto LAB_08056d40;
      case 0x75:
        local_47c = (char *)0x1;
        local_4b8 = (char *)((param_2->tm_wday + 6) % 7 + 1);
        goto LAB_080574a8;
      case 0x77:
        if (local_4b0 != (char *)0x45) {
          local_47c = (char *)0x1;
          local_4b8 = (char *)param_2->tm_wday;
          goto LAB_080574a8;
        }
        break;
      case 0x79:
        if (local_4b0 == (char *)0x45) goto LAB_08057f20;
        local_47c = (char *)0x2;
        uVar16 = param_2->tm_year % 100;
        local_4b8 = (char *)uVar16;
        if ((int)uVar16 < 0) {
          local_4b8 = (char *)(uVar16 + 100);
          if (param_2->tm_year < -0x76c) {
            local_4b8 = (char *)-uVar16;
          }
        }
LAB_080574a8:
        local_48c = SUB41((uint)local_4b8 >> 0x1f,0);
        local_4c4 = (char *)0x0;
        local_474 = '\0';
joined_r0x080574c7:
        if (local_4b0 == (char *)0x4f) {
          if (local_48c != false) goto LAB_08057d20;
LAB_080574d8:
          bVar3 = false;
LAB_08056f1f:
          local_26[3] = local_4b0._0_1_;
          pcVar22 = local_26 + 4;
LAB_08056e00:
          local_26[2] = 0x25;
          local_26[1] = 0x20;
          *pcVar22 = cVar21;
          pcVar22[1] = '\0';
          sVar20 = strftime(&local_433,0x400,local_26 + 1,param_2);
          pbVar6 = param_1;
          if (sVar20 != 0) {
            pcVar22 = (char *)(sVar20 - 1);
            pcVar23 = (char *)0x0;
            if (-1 < (int)pcVar19) {
              pcVar23 = pcVar19;
            }
            local_4b8 = pcVar22;
            if (pcVar22 <= pcVar23) {
              local_4b8 = pcVar23;
            }
            if ((char *)(param_3_00 - local_4bc) <= local_4b8) goto LAB_08056d40;
            if (local_4c0 != (byte *)0x0) {
              if ((pcVar22 < pcVar23) && (local_47c == (char *)0x0)) {
                __n = (int)pcVar19 - (int)pcVar22;
                if (bVar2 == 0x30) {
                  memset(local_4c0,0x30,__n);
                  local_4c0 = local_4c0 + __n;
                }
                else {
                  memset(local_4c0,0x20,__n);
                  local_4c0 = local_4c0 + __n;
                }
              }
              if (bVar3) {
                if (pcVar22 != (char *)0x0) {
                  pp_Var12 = __ctype_tolower_loc();
                  iVar18 = sVar20 - 2;
                  do {
                    bVar24 = iVar18 != 0;
                    local_4c0[iVar18] = (byte)(*pp_Var12)[local_432[iVar18]];
                    iVar18 = iVar18 + -1;
                  } while (bVar24);
                }
              }
              else if (local_4ac == '\0') {
                memcpy(local_4c0,local_432,(size_t)pcVar22);
              }
              else {
                FUN_08056b30();
              }
              local_4c0 = local_4c0 + (int)pcVar22;
            }
            goto LAB_08056ea7;
          }
          goto LAB_08056c1d;
        }
LAB_08057228:
        if (local_48c != false) {
LAB_08057d20:
          local_4b8 = (char *)-(int)local_4b8;
        }
        pcVar22 = local_26 + 1;
        do {
          pcVar23 = pcVar22;
          if (((uint)local_4c4 & 1) != 0) {
            pcVar23 = pcVar22 + -1;
            pcVar22[-1] = ':';
          }
          pcVar22 = pcVar23 + -1;
          uVar16 = (uint)local_4b8 / 10;
          local_4c4 = (char *)((int)local_4c4 >> 1);
          pcVar23[-1] = (char)local_4b8 + (char)uVar16 * -10 + '0';
          local_4b8 = (char *)uVar16;
        } while ((local_4c4 != (char *)0x0) || (uVar16 != 0));
LAB_08057289:
        bVar14 = 0x2d;
        if ((int)local_47c <= (int)pcVar19) {
          local_47c = pcVar19;
        }
        if (local_48c == false) {
          bVar14 = -local_474 & 0x2b;
        }
        if (bVar2 == 0x2d) {
          pcVar7 = (char *)0x0;
          if (-1 < (int)pcVar19) {
            pcVar7 = pcVar19;
          }
joined_r0x08057e8e:
          if (bVar14 != 0) {
            pcVar23 = (char *)0x1;
            if (pcVar7 != (char *)0x0) {
              pcVar23 = pcVar7;
            }
            if ((char *)(param_3_00 - local_4bc) <= pcVar23) goto LAB_08056d40;
            if (local_4c0 != (byte *)0x0) {
              if (((char *)0x1 < pcVar7) && (local_47c == (char *)0x0)) {
                local_4c4 = pcVar19 + -1;
LAB_08057d95:
                memset(local_4c0,0x20,(size_t)local_4c4);
                local_4c0 = local_4c0 + (int)local_4c4;
              }
LAB_08057dc6:
              *local_4c0 = bVar14;
              local_4c0 = local_4c0 + 1;
            }
LAB_08057dd3:
            local_4bc = local_4bc + (int)pcVar23;
          }
        }
        else {
          pcVar23 = pcVar22 + (int)(local_47c + (-(uint)(bVar14 != 0) - (int)(local_26 + 1)));
          if (0 < (int)pcVar23) {
            pcVar7 = (char *)(param_3_00 - local_4bc);
            if (bVar2 == 0x5f) {
              if (pcVar23 < pcVar7) {
                if (local_4c0 != (byte *)0x0) {
                  memset(local_4c0,0x20,(size_t)pcVar23);
                  local_4c0 = local_4c0 + (int)pcVar23;
                }
                local_4bc = local_4bc + (int)pcVar23;
                pcVar7 = (char *)0x0;
                if ((int)pcVar23 < (int)pcVar19) {
                  pcVar19 = pcVar19 + -(int)pcVar23;
                  if (-1 < (int)pcVar19) {
                    pcVar7 = pcVar19;
                  }
                }
                else {
                  pcVar19 = (char *)0x0;
                }
                goto joined_r0x08057e8e;
              }
            }
            else if (local_47c < pcVar7) {
              if (bVar14 != 0) {
                pcVar8 = (char *)0x0;
                if (-1 < (int)pcVar19) {
                  pcVar8 = pcVar19;
                }
                pcVar17 = (char *)0x1;
                if (pcVar8 != (char *)0x0) {
                  pcVar17 = pcVar8;
                }
                if (pcVar7 <= pcVar17) goto LAB_08056d40;
                if (local_4c0 != (byte *)0x0) {
                  if (((char *)0x1 < pcVar8) && (local_47c == (char *)0x0)) {
                    pcVar19 = pcVar19 + -1;
                    if (bVar2 == 0x30) {
                      memset(local_4c0,0x30,(size_t)pcVar19);
                      local_4c0 = local_4c0 + (int)pcVar19;
                    }
                    else {
                      memset(local_4c0,0x20,(size_t)pcVar19);
                      local_4c0 = local_4c0 + (int)pcVar19;
                    }
                  }
                  *local_4c0 = bVar14;
                  local_4c0 = local_4c0 + 1;
                }
                local_4bc = local_4bc + (int)pcVar17;
              }
              if (local_4c0 != (byte *)0x0) {
                memset(local_4c0,0x30,(size_t)pcVar23);
                local_4c0 = local_4c0 + (int)pcVar23;
              }
              local_4bc = local_4bc + (int)pcVar23;
              pcVar7 = (char *)0x0;
              pcVar19 = (char *)0x0;
              goto LAB_080573aa;
            }
            goto LAB_08056d40;
          }
          pcVar7 = (char *)0x0;
          if (-1 < (int)pcVar19) {
            pcVar7 = pcVar19;
          }
          if (bVar14 != 0) {
            pcVar23 = (char *)0x1;
            if (pcVar7 != (char *)0x0) {
              pcVar23 = pcVar7;
            }
            if ((char *)(param_3_00 - local_4bc) <= pcVar23) goto LAB_08056d40;
            if (local_4c0 != (byte *)0x0) {
              if (((char *)0x1 < pcVar7) && (local_47c == (char *)0x0)) {
                local_4c4 = pcVar19 + -1;
                if (bVar2 != 0x30) goto LAB_08057d95;
                memset(local_4c0,0x30,(size_t)local_4c4);
                local_4c0 = local_4c0 + (int)local_4c4;
              }
              goto LAB_08057dc6;
            }
            goto LAB_08057dd3;
          }
        }
LAB_080573aa:
        pcVar23 = local_26 + 1 + -(int)pcVar22;
        local_4b8 = pcVar23;
        if (pcVar23 < pcVar7) {
          local_4b8 = pcVar7;
        }
        if ((char *)(param_3_00 - local_4bc) <= local_4b8) goto LAB_08056d40;
        if (local_4c0 != (byte *)0x0) {
          if ((pcVar23 < pcVar7) && (local_47c == (char *)0x0)) {
            sVar20 = (int)pcVar19 - (int)pcVar23;
            if (bVar2 == 0x30) {
              memset(local_4c0,0x30,sVar20);
              local_4c0 = local_4c0 + sVar20;
            }
            else {
              memset(local_4c0,0x20,sVar20);
              local_4c0 = local_4c0 + sVar20;
            }
          }
          if (local_4ac == '\0') {
            memcpy(local_4c0,pcVar22,(size_t)pcVar23);
          }
          else {
            FUN_08056b30();
          }
          local_4c0 = local_4c0 + (int)pcVar23;
        }
LAB_08056ea7:
        bVar14 = param_1[1];
        local_4bc = local_4bc + (int)local_4b8;
        pbVar6 = param_1;
        goto joined_r0x08056eb8;
      case 0x7a:
        local_4c4 = (char *)0x0;
LAB_0805717b:
        if (param_2->tm_isdst < 0) goto LAB_08056c1d;
        iVar18 = param_2->tm_gmtoff;
        local_4b8 = (char *)(iVar18 / 0xe10);
        iVar15 = (iVar18 / 0x3c) % 0x3c;
        bVar14 = (byte)((uint)iVar18 >> 0x18);
        param_1 = pbVar6;
        if (local_4c4 == (char *)0x1) {
LAB_0805810e:
          local_48c = (bool)(bVar14 >> 7);
          local_4c4 = (char *)0x4;
          local_4b8 = (char *)((int)local_4b8 * 100 + iVar15);
          local_474 = '\x01';
          local_47c = (char *)0x6;
        }
        else if (local_4c4 == (char *)0x0) {
          local_48c = (bool)(bVar14 >> 7);
          local_4c4 = (char *)0x0;
          local_4b8 = (char *)((int)local_4b8 * 100 + iVar15);
          local_474 = '\x01';
          local_47c = (char *)0x5;
        }
        else {
          if (local_4c4 != (char *)0x2) {
            if (local_4c4 != (char *)0x3) {
              bVar14 = *pbVar6;
              goto LAB_08056cf1;
            }
            if (iVar18 % 0x3c == 0) {
              if (iVar15 != 0) goto LAB_0805810e;
              local_48c = (bool)(bVar14 >> 7);
              local_4c4 = (char *)0x0;
              local_474 = '\x01';
              local_47c = (char *)0x3;
              goto joined_r0x080574c7;
            }
          }
          local_48c = (bool)(bVar14 >> 7);
          local_4c4 = (char *)0x14;
          local_474 = '\x01';
          local_47c = (char *)0x9;
          local_4b8 = (char *)(iVar15 * 100 + (int)local_4b8 * 10000 + iVar18 % 0x3c);
        }
        goto joined_r0x080574c7;
      }
      local_4c4 = (char *)0x1;
      pbVar6 = param_1;
      do {
        pbVar6 = pbVar6 + -1;
        local_4c4 = local_4c4 + 1;
      } while (*pbVar6 != 0x25);
LAB_08056f84:
      pcVar22 = (char *)0x0;
      if (-1 < (int)pcVar19) {
        pcVar22 = pcVar19;
      }
      pcVar23 = local_4c4;
      if (local_4c4 < pcVar22) {
        pcVar23 = pcVar22;
      }
      if ((char *)(param_3_00 - local_4bc) <= pcVar23) {
LAB_08056d40:
        local_4bc = 0;
        goto LAB_08056d48;
      }
      if (local_4c0 != (byte *)0x0) {
        if (local_4c4 < pcVar22) {
          sVar20 = (int)pcVar19 - (int)local_4c4;
          if (bVar2 == 0x30) {
            memset(local_4c0,0x30,sVar20);
            local_4c0 = local_4c0 + sVar20;
          }
          else {
            memset(local_4c0,0x20,sVar20);
            local_4c0 = local_4c0 + sVar20;
          }
        }
        if (local_4ac == '\0') {
          memcpy(local_4c0,pbVar6,(size_t)local_4c4);
        }
        else {
          FUN_08056b30();
        }
        local_4c0 = local_4c0 + (int)local_4c4;
      }
      local_4bc = local_4bc + (int)pcVar23;
      pbVar6 = param_1;
LAB_08056c1d:
      bVar14 = pbVar6[1];
joined_r0x08056eb8:
      param_1 = pbVar6 + 1;
    } while (bVar14 != 0);
  }
  if ((local_4c0 != (byte *)0x0) && (param_3_00 != 0)) {
    *local_4c0 = 0;
  }
LAB_08056d48:
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return local_4bc;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_08058320(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_2 = param_4;
  param_1 = param_3;
  FUN_08056b70();
  return;
}



void FUN_08058370(FILE *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (param_2 == 0) {
    __fprintf_chk(param_1,1,"%s %s\n",param_3,param_4);
  }
  else {
    __fprintf_chk(param_1,1,"%s (%s) %s\n",param_2,param_3,param_4);
  }
  uVar1 = dcgettext(0,&DAT_0805da3f,5);
  __fprintf_chk(param_1,1,"Copyright %s %d Free Software Foundation, Inc.",uVar1,0x7db);
  pcVar2 = (char *)dcgettext(0,
                             "\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n"
                             ,5);
  fputs_unlocked(pcVar2,param_1);
  switch(param_6) {
  case 0:
                    // WARNING: Subroutine does not return
    abort();
  case 1:
    dcgettext(0,"Written by %s.\n",5);
    __fprintf_chk();
    return;
  case 2:
    dcgettext(0,"Written by %s and %s.\n",5);
    __fprintf_chk();
    return;
  case 3:
    dcgettext(0,"Written by %s, %s, and %s.\n",5);
    __fprintf_chk();
    return;
  case 4:
    uVar1 = param_5[3];
    uVar9 = param_5[2];
    uVar10 = param_5[1];
    uVar8 = *param_5;
    uVar4 = dcgettext(0,"Written by %s, %s, %s,\nand %s.\n",5);
    __fprintf_chk(param_1,1,uVar4,uVar8,uVar10,uVar9,uVar1);
    break;
  case 5:
    uVar1 = param_5[4];
    uVar9 = param_5[1];
    uVar10 = param_5[3];
    uVar8 = param_5[2];
    uVar4 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
    __fprintf_chk(param_1,1,uVar3,uVar4,uVar9,uVar8,uVar10,uVar1);
    break;
  case 6:
    uVar1 = param_5[5];
    uVar9 = param_5[2];
    uVar10 = param_5[1];
    uVar8 = param_5[4];
    uVar4 = param_5[3];
    uVar3 = *param_5;
    uVar5 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
    __fprintf_chk(param_1,1,uVar5,uVar3,uVar10,uVar9,uVar4,uVar8,uVar1);
    break;
  case 7:
    uVar1 = param_5[2];
    uVar9 = param_5[6];
    uVar10 = param_5[3];
    uVar8 = param_5[5];
    uVar4 = param_5[1];
    uVar3 = param_5[4];
    uVar5 = *param_5;
    uVar6 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
    __fprintf_chk(param_1,1,uVar6,uVar5,uVar4,uVar1,uVar10,uVar3,uVar8,uVar9);
    break;
  case 8:
    uVar1 = param_5[3];
    uVar9 = param_5[7];
    uVar10 = param_5[4];
    uVar8 = param_5[6];
    uVar4 = param_5[2];
    uVar3 = param_5[5];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
    __fprintf_chk(param_1,1,uVar7,uVar6,uVar5,uVar4,uVar1,uVar10,uVar3,uVar8,uVar9);
    break;
  case 9:
    local_2c = param_5[4];
    uVar1 = param_5[8];
    uVar9 = param_5[7];
    uVar10 = param_5[6];
    local_28 = param_5[3];
    uVar8 = param_5[5];
    local_24 = param_5[2];
    local_20 = param_5[1];
    uVar4 = *param_5;
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
    goto LAB_08058478;
  default:
    local_2c = param_5[4];
    uVar1 = param_5[8];
    uVar9 = param_5[7];
    uVar10 = param_5[6];
    local_28 = param_5[3];
    uVar8 = param_5[5];
    local_24 = param_5[2];
    local_20 = param_5[1];
    uVar4 = *param_5;
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
LAB_08058478:
    uVar3 = dcgettext(0,pcVar2,5);
    __fprintf_chk(param_1,1,uVar3,uVar4,local_20,local_24,local_28,local_2c,uVar8,uVar10,uVar9,uVar1
                 );
  }
  return;
}



void FUN_08058920(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  int local_34 [12];
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_5 + iVar2 * 4);
    local_34[iVar2] = iVar1;
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 10);
  FUN_08058370(param_1,param_2,param_3,param_4,local_34,iVar2);
  return;
}



void FUN_08058980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08058920(param_1,param_2,param_3,param_4,&stack0x00000014);
  return;
}



void FUN_08058a70(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_08058c00();
  }
  return;
}



void * FUN_08058aa0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_08058c00();
  }
  return pvVar1;
}



void FUN_08058ba0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_08058a70(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}



void FUN_08058bd0(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_08058ba0(param_1,sVar1 + 1);
  return;
}



void FUN_08058c00(void)

{
  undefined4 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_080622cc,0,"%s",uVar1);
                    // WARNING: Subroutine does not return
  abort();
}



byte FUN_08058c50(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

{
  byte bVar1;
  ushort **ppuVar2;
  byte *pbVar3;
  int *piVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  byte **__endptr;
  int iVar9;
  byte bVar10;
  uint uVar11;
  bool bVar12;
  uint local_38;
  int local_30;
  byte *local_20 [4];
  
  if (0x24 < param_3) {
                    // WARNING: Subroutine does not return
    __assert_fail("0 <= strtol_base && strtol_base <= 36","xstrtol.c",0x53,"xstrtoul");
  }
  bVar8 = *param_1;
  __endptr = local_20;
  if (param_2 != (byte **)0x0) {
    __endptr = param_2;
  }
  ppuVar2 = __ctype_b_loc();
  pbVar3 = param_1;
  while ((*(byte *)((int)*ppuVar2 + (uint)bVar8 * 2 + 1) & 0x20) != 0) {
    pbVar3 = pbVar3 + 1;
    bVar8 = *pbVar3;
  }
  if (bVar8 == 0x2d) {
    return 4;
  }
  piVar4 = __errno_location();
  *piVar4 = 0;
  uVar5 = strtoul((char *)param_1,(char **)__endptr,param_3);
  pbVar3 = *__endptr;
  if (pbVar3 == param_1) {
    if (param_5 == (char *)0x0) {
      return 4;
    }
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return 4;
    }
    bVar8 = 0;
    uVar5 = 1;
    pcVar6 = strchr(param_5,(int)(char)bVar1);
    if (pcVar6 == (char *)0x0) {
      return 4;
    }
  }
  else {
    bVar8 = 0;
    if (*piVar4 != 0) {
      if (*piVar4 != 0x22) {
        return 4;
      }
      bVar8 = 1;
    }
    bVar10 = bVar8;
    if ((param_5 == (char *)0x0) || (bVar1 = *pbVar3, bVar1 == 0)) goto LAB_08058d00;
    pcVar6 = strchr(param_5,(int)(char)bVar1);
    if (pcVar6 == (char *)0x0) goto switchD_08058d98_caseD_43;
  }
  pcVar6 = strchr(param_5,0x30);
  local_30 = 1;
  local_38 = 0x400;
  if (pcVar6 != (char *)0x0) {
    bVar10 = pbVar3[1];
    if (bVar10 == 0x44) {
LAB_08059008:
      local_30 = 2;
      local_38 = 1000;
    }
    else if (bVar10 == 0x69) {
      local_30 = (uint)(pbVar3[2] == 0x42) * 2 + 1;
    }
    else if (bVar10 == 0x42) goto LAB_08059008;
  }
  switch(bVar1) {
  case 0x42:
    if (uVar5 < 0x400000) {
      uVar5 = uVar5 << 10;
      bVar1 = 0;
    }
    else {
LAB_08058f5b:
      uVar5 = 0xffffffff;
      bVar1 = 1;
    }
    break;
  default:
switchD_08058d98_caseD_43:
    *param_4 = uVar5;
    return bVar8 | 2;
  case 0x45:
    iVar9 = 6;
    bVar1 = 0;
    do {
      bVar12 = uVar5 <= (uint)(0xffffffff / (ulonglong)local_38);
      if (bVar12) {
        uVar5 = uVar5 * local_38;
      }
      else {
        uVar5 = 0xffffffff;
      }
      bVar1 = bVar1 | !bVar12;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    break;
  case 0x47:
  case 0x67:
    uVar7 = (uint)(0xffffffff / (ulonglong)local_38);
    if ((uVar7 < uVar5) || (uVar11 = uVar5 * local_38, uVar7 <= uVar11 && uVar11 - uVar7 != 0)) {
      uVar5 = 0xffffffff;
      bVar1 = 1;
    }
    else {
      uVar11 = uVar11 * local_38;
      if (uVar11 < uVar7 || uVar11 - uVar7 == 0) {
        bVar1 = 0;
        uVar5 = uVar11 * local_38;
      }
      else {
        uVar5 = 0xffffffff;
        bVar1 = 1;
      }
    }
    break;
  case 0x4b:
  case 0x6b:
    if ((uint)(0xffffffff / (ulonglong)local_38) < uVar5) goto LAB_08058f5b;
LAB_08058f40:
    uVar5 = uVar5 * local_38;
    bVar1 = 0;
    break;
  case 0x4d:
  case 0x6d:
    uVar7 = (uint)(0xffffffff / (ulonglong)local_38);
    if ((uVar5 <= uVar7) && (uVar5 = uVar5 * local_38, uVar5 <= uVar7)) goto LAB_08058f40;
    bVar1 = 1;
    uVar5 = 0xffffffff;
    break;
  case 0x50:
    uVar11 = (uint)(0xffffffff / (ulonglong)local_38);
    iVar9 = 5;
    bVar1 = 0;
    uVar7 = uVar5;
    do {
      if (uVar11 < uVar7) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = uVar7 * local_38;
      }
      bVar1 = bVar1 | uVar11 < uVar7;
      iVar9 = iVar9 + -1;
      uVar7 = uVar5;
    } while (iVar9 != 0);
    break;
  case 0x54:
  case 0x74:
    iVar9 = 4;
    bVar1 = 0;
    do {
      bVar12 = (uint)(0xffffffff / (ulonglong)local_38) < uVar5;
      if (bVar12) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = uVar5 * local_38;
      }
      bVar1 = bVar1 | bVar12;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    break;
  case 0x59:
    uVar11 = (uint)(0xffffffff / (ulonglong)local_38);
    iVar9 = 8;
    bVar1 = 0;
    uVar7 = uVar5;
    do {
      if (uVar11 < uVar7) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = uVar7 * local_38;
      }
      bVar1 = bVar1 | uVar11 < uVar7;
      iVar9 = iVar9 + -1;
      uVar7 = uVar5;
    } while (iVar9 != 0);
    break;
  case 0x5a:
    uVar11 = (uint)(0xffffffff / (ulonglong)local_38);
    iVar9 = 7;
    bVar1 = 0;
    uVar7 = uVar5;
    do {
      if (uVar11 < uVar7) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = uVar7 * local_38;
      }
      bVar1 = bVar1 | uVar11 < uVar7;
      iVar9 = iVar9 + -1;
      uVar7 = uVar5;
    } while (iVar9 != 0);
    break;
  case 0x62:
    if (0x7fffff < uVar5) goto LAB_08058f5b;
    uVar5 = uVar5 << 9;
    bVar1 = 0;
    break;
  case 99:
    bVar1 = 0;
    break;
  case 0x77:
    if (0x7fffffff < uVar5) goto LAB_08058f5b;
    uVar5 = uVar5 * 2;
    bVar1 = 0;
  }
  *__endptr = pbVar3 + local_30;
  bVar10 = bVar8 | bVar1;
  if (pbVar3[local_30] != 0) {
    bVar10 = bVar8 | bVar1 | 2;
  }
LAB_08058d00:
  *param_4 = uVar5;
  return bVar10;
}



// WARNING: Removing unreachable block (ram,0x080591a8)

bool __regparm3 FUN_08059140(ulonglong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)param_1;
  uVar2 = *(uint *)((int)param_1 + 4);
  uVar4 = *param_1;
  uVar5 = FUN_08059c90(0xffffffff,0xffffffff,param_2,(int)param_2 >> 0x1f);
  if (uVar4 <= uVar5) {
    lVar3 = (ulonglong)uVar1 * (ulonglong)param_2;
    *(uint *)param_1 = (uint)lVar3;
    *(uint *)((int)param_1 + 4) =
         (int)((ulonglong)lVar3 >> 0x20) + uVar2 * param_2 + uVar1 * ((int)param_2 >> 0x1f);
  }
  else {
    *(uint *)param_1 = 0xffffffff;
    *(uint *)((int)param_1 + 4) = 0xffffffff;
  }
  return uVar4 > uVar5;
}



uint FUN_080591f0(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (in_ECX != 0) {
    do {
      uVar1 = FUN_08059140();
      uVar2 = uVar2 | uVar1;
      in_ECX = in_ECX + -1;
    } while (in_ECX != 0);
  }
  return uVar2;
}



uint FUN_08059230(byte *param_1,byte **param_2,uint param_3,undefined4 *param_4,char *param_5)

{
  byte bVar1;
  ushort **ppuVar2;
  byte *pbVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  byte bVar7;
  byte **ppbVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  byte *local_20 [4];
  
  if (0x24 < param_3) {
                    // WARNING: Subroutine does not return
    __assert_fail("0 <= strtol_base && strtol_base <= 36","xstrtol.c",0x53,"xstrtoumax");
  }
  bVar7 = *param_1;
  ppbVar8 = local_20;
  if (param_2 != (byte **)0x0) {
    ppbVar8 = param_2;
  }
  ppuVar2 = __ctype_b_loc();
  pbVar3 = param_1;
  while ((*(byte *)((int)*ppuVar2 + (uint)bVar7 * 2 + 1) & 0x20) != 0) {
    pbVar3 = pbVar3 + 1;
    bVar7 = *pbVar3;
  }
  if (bVar7 == 0x2d) {
    return 4;
  }
  piVar4 = __errno_location();
  *piVar4 = 0;
  uVar11 = __strtoull_internal(param_1,ppbVar8,param_3,0);
  pbVar3 = *ppbVar8;
  if (pbVar3 == param_1) {
    if (param_5 == (char *)0x0) {
      return 4;
    }
    if (*param_1 == 0) {
      return 4;
    }
    pcVar5 = strchr(param_5,(int)(char)*param_1);
    if (pcVar5 == (char *)0x0) {
      return 4;
    }
    uVar9 = 0;
    uVar11 = 1;
  }
  else {
    uVar9 = 0;
    if (*piVar4 != 0) {
      if (*piVar4 != 0x22) {
        return 4;
      }
      uVar9 = 1;
    }
    uVar10 = uVar9;
    if (param_5 == (char *)0x0) goto LAB_080593b2;
  }
  local_28 = (undefined4)((ulonglong)uVar11 >> 0x20);
  local_2c = (undefined4)uVar11;
  bVar7 = *pbVar3;
  uVar10 = uVar9;
  if (bVar7 == 0) goto LAB_080593b2;
  pcVar5 = strchr(param_5,(int)(char)bVar7);
  if (pcVar5 == (char *)0x0) goto switchD_08059365_caseD_43;
  pcVar5 = strchr(param_5,0x30);
  local_30 = 1;
  if (pcVar5 != (char *)0x0) {
    bVar1 = pbVar3[1];
    if (bVar1 == 0x44) {
LAB_08059517:
      local_30 = 2;
    }
    else if (bVar1 == 0x69) {
      local_30 = (uint)(pbVar3[2] == 0x42) * 2 + 1;
    }
    else if (bVar1 == 0x42) goto LAB_08059517;
  }
  switch(bVar7) {
  case 0x42:
    uVar6 = FUN_08059140();
    pbVar3 = *ppbVar8;
    break;
  default:
switchD_08059365_caseD_43:
    *param_4 = local_2c;
    param_4[1] = local_28;
    return uVar9 | 2;
  case 0x45:
    uVar6 = FUN_080591f0();
    pbVar3 = *ppbVar8;
    break;
  case 0x47:
  case 0x67:
    uVar6 = FUN_080591f0();
    pbVar3 = *ppbVar8;
    break;
  case 0x4b:
  case 0x6b:
    uVar6 = FUN_080591f0();
    pbVar3 = *ppbVar8;
    break;
  case 0x4d:
  case 0x6d:
    uVar6 = FUN_080591f0();
    pbVar3 = *ppbVar8;
    break;
  case 0x50:
    uVar6 = FUN_080591f0();
    pbVar3 = *ppbVar8;
    break;
  case 0x54:
  case 0x74:
    uVar6 = FUN_080591f0();
    pbVar3 = *ppbVar8;
    break;
  case 0x59:
    uVar6 = FUN_080591f0();
    pbVar3 = *ppbVar8;
    break;
  case 0x5a:
    uVar6 = FUN_080591f0();
    pbVar3 = *ppbVar8;
    break;
  case 0x62:
    uVar6 = FUN_08059140();
    pbVar3 = *ppbVar8;
    break;
  case 99:
    uVar6 = 0;
    break;
  case 0x77:
    uVar6 = FUN_08059140();
    pbVar3 = *ppbVar8;
  }
  *ppbVar8 = pbVar3 + local_30;
  uVar10 = uVar9 | uVar6;
  if (pbVar3[local_30] != 0) {
    uVar10 = uVar9 | uVar6 | 2;
  }
LAB_080593b2:
  *param_4 = (int)uVar11;
  param_4[1] = (int)((ulonglong)uVar11 >> 0x20);
  return uVar10;
}



int FUN_08059550(undefined4 param_1,char **param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  byte bVar7;
  
  bVar7 = 0;
  iVar1 = getfilecon(param_1,param_2);
  if (iVar1 == 0) {
    piVar2 = __errno_location();
    *piVar2 = 0x5f;
    iVar1 = -1;
  }
  else {
    bVar6 = iVar1 == 10;
    if (bVar6) {
      iVar3 = 10;
      pcVar4 = *param_2;
      pcVar5 = "unlabeled";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
        pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
      } while (bVar6);
      if (bVar6) {
        freecon(*param_2);
        piVar2 = __errno_location();
        *piVar2 = 0x3d;
        iVar1 = -1;
      }
    }
  }
  return iVar1;
}



int FUN_080595e0(undefined4 param_1,char **param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  byte bVar7;
  
  bVar7 = 0;
  iVar1 = lgetfilecon(param_1,param_2);
  if (iVar1 == 0) {
    piVar2 = __errno_location();
    *piVar2 = 0x5f;
    iVar1 = -1;
  }
  else {
    bVar6 = iVar1 == 10;
    if (bVar6) {
      iVar3 = 10;
      pcVar4 = *param_2;
      pcVar5 = "unlabeled";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
        pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
      } while (bVar6);
      if (bVar6) {
        freecon(*param_2);
        piVar2 = __errno_location();
        *piVar2 = 0x3d;
        iVar1 = -1;
      }
    }
  }
  return iVar1;
}



uint FUN_08059700(uint *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar1 = __fpending(param_1);
  uVar4 = *param_1 & 0x20;
  iVar2 = FUN_08059790(param_1);
  if (uVar4 == 0) {
    if ((iVar2 != 0) && (uVar4 = 0xffffffff, iVar1 == 0)) {
      piVar3 = __errno_location();
      uVar4 = (*piVar3 == 9) - 1;
    }
  }
  else {
    uVar4 = 0xffffffff;
    if (iVar2 == 0) {
      piVar3 = __errno_location();
      *piVar3 = 0;
    }
  }
  return uVar4;
}



int FUN_08059790(FILE *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  __off64_t _Var4;
  
  iVar1 = fileno(param_1);
  if (-1 < iVar1) {
    iVar1 = __freading(param_1);
    if (iVar1 != 0) {
      iVar1 = fileno(param_1);
      _Var4 = lseek64(iVar1,0,1);
      if (_Var4 == -1) goto LAB_08059828;
    }
    iVar1 = FUN_08059840(param_1);
    if (iVar1 != 0) {
      piVar2 = __errno_location();
      iVar1 = *piVar2;
      iVar3 = fclose(param_1);
      if (iVar1 != 0) {
        *piVar2 = iVar1;
        iVar3 = -1;
      }
      return iVar3;
    }
  }
LAB_08059828:
  iVar1 = fclose(param_1);
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08059840(uint *param_1)

{
  int iVar1;
  
  if (((param_1 != (uint *)0x0) && (iVar1 = __freading(param_1), iVar1 != 0)) &&
     ((*param_1 & 0x100) != 0)) {
    FUN_080598a0(param_1,0,0,1);
  }
  (*_DAT_0806201c)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_080598a0(FILE *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int __fd;
  __off64_t _Var2;
  
  if (((param_1->_IO_read_end == param_1->_IO_read_ptr) &&
      (param_1->_IO_write_ptr == param_1->_IO_write_base)) &&
     (param_1->_IO_save_base == (char *)0x0)) {
    __fd = fileno(param_1);
    _Var2 = lseek64(__fd,CONCAT44(param_3,param_2),param_4);
    if (_Var2 == -1) {
      uVar1 = 0xffffffff;
    }
    else {
      param_1->_flags = param_1->_flags & 0xffffffef;
      *(int *)&param_1->_offset = (int)_Var2;
      uVar1 = 0;
      *(int *)((int)&param_1->_offset + 4) = (int)((ulonglong)_Var2 >> 0x20);
    }
    return uVar1;
  }
  uVar1 = (*_DAT_0806204c)();
  return uVar1;
}



undefined8 FUN_08059950(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  byte bStack32;
  uint local_1c;
  
  local_1c = 0;
  if ((int)param_2 < 0) {
    bVar9 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar9);
    local_1c = 0xffffffff;
  }
  if ((int)param_4 < 0) {
    bVar9 = param_3 != 0;
    param_3 = -param_3;
    local_1c = ~local_1c;
    param_4 = -(param_4 + bVar9);
  }
  if (param_4 == 0) {
    if (param_2 < param_3) {
      uVar7 = 0;
      iVar5 = (int)(CONCAT44(param_2,param_1) / (ulonglong)param_3);
    }
    else {
      if (param_3 == 0) {
        param_3 = (uint)(1 / 0);
      }
      uVar7 = param_2 / param_3;
      iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                   (ulonglong)param_3);
    }
  }
  else {
    uVar7 = 0;
    iVar5 = 0;
    if (param_4 <= param_2) {
      uVar7 = 0x1f;
      if (param_4 != 0) {
        for (; param_4 >> uVar7 == 0; uVar7 = uVar7 - 1) {
        }
      }
      if ((uVar7 ^ 0x1f) == 0) {
        if ((param_3 <= param_1) || (uVar7 = 0, param_4 < param_2)) {
          uVar7 = 0;
          iVar5 = 1;
        }
      }
      else {
        bStack32 = (byte)(uVar7 ^ 0x1f);
        bVar6 = 0x20 - bStack32;
        uVar1 = (ulonglong)(param_3 >> (bVar6 & 0x1f) | param_4 << (bStack32 & 0x1f));
        uVar2 = CONCAT44(param_2 >> (bVar6 & 0x1f),
                         param_1 >> (bVar6 & 0x1f) | param_2 << (bStack32 & 0x1f));
        uVar3 = uVar2 / uVar1;
        iVar5 = (int)uVar3;
        uVar7 = (uint)(uVar2 % uVar1);
        lVar4 = (uVar3 & 0xffffffff) * (ulonglong)(param_3 << (bStack32 & 0x1f));
        uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
        if ((uVar7 < uVar8) || ((param_1 << (bStack32 & 0x1f) < (uint)lVar4 && (uVar7 == uVar8)))) {
          iVar5 = iVar5 + -1;
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
        }
      }
    }
  }
  if (local_1c != 0) {
    bVar9 = iVar5 != 0;
    iVar5 = -iVar5;
    uVar7 = -(uVar7 + bVar9);
  }
  return CONCAT44(uVar7,iVar5);
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_08059ac0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint local_24;
  uint local_20;
  int local_18;
  
  local_20 = param_2;
  local_24 = param_1;
  local_18 = 0;
  if ((int)param_2 < 0) {
    local_24 = -param_1;
    local_20 = -(param_2 + (param_1 != 0));
    local_18 = -1;
  }
  if ((int)param_4 < 0) {
    bVar9 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + bVar9);
  }
  if (param_4 == 0) {
    if (local_20 < param_3) {
      local_24 = (uint)(CONCAT44(local_20,local_24) % (ulonglong)param_3);
    }
    else {
      if (param_3 == 0) {
        param_3 = (uint)(1 / 0);
      }
      local_24 = (uint)(((ulonglong)local_20 % (ulonglong)param_3 << 0x20 | (ulonglong)local_24) %
                       (ulonglong)param_3);
    }
    local_20 = 0;
  }
  else if (param_4 <= local_20) {
    uVar4 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> uVar4 == 0; uVar4 = uVar4 - 1) {
      }
    }
    if ((uVar4 ^ 0x1f) == 0) {
      if ((param_3 <= local_24) || (param_4 < local_20)) {
        bVar9 = local_24 < param_3;
        local_24 = local_24 - param_3;
        local_20 = (local_20 - param_4) - (uint)bVar9;
      }
    }
    else {
      bVar3 = (byte)(uVar4 ^ 0x1f);
      local_24._0_1_ = 0x20 - bVar3;
      uVar8 = param_3 >> ((byte)local_24 & 0x1f) | param_4 << (bVar3 & 0x1f);
      param_3 = param_3 << (bVar3 & 0x1f);
      uVar5 = local_24 << (bVar3 & 0x1f);
      uVar1 = CONCAT44(local_20 >> ((byte)local_24 & 0x1f),
                       local_24 >> ((byte)local_24 & 0x1f) | local_20 << (bVar3 & 0x1f));
      uVar6 = (uint)(uVar1 % (ulonglong)uVar8);
      lVar2 = (uVar1 / uVar8 & 0xffffffff) * (ulonglong)param_3;
      uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar4 = (uint)lVar2;
      if ((uVar6 < uVar7) || ((uVar5 < uVar4 && (uVar6 == uVar7)))) {
        bVar9 = uVar4 < param_3;
        uVar4 = uVar4 - param_3;
        uVar7 = (uVar7 - uVar8) - (uint)bVar9;
      }
      local_20 = (uVar6 - uVar7) - (uint)(uVar5 < uVar4);
      local_24 = uVar5 - uVar4 >> (bVar3 & 0x1f) | local_20 << ((byte)local_24 & 0x1f);
      local_20 = local_20 >> (bVar3 & 0x1f);
    }
  }
  if (local_18 != 0) {
    bVar9 = local_24 != 0;
    local_24 = -local_24;
    local_20 = -(local_20 + bVar9);
  }
  return CONCAT44(local_20,local_24);
}



ulonglong FUN_08059c90(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  byte local_18;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      return CONCAT44(param_2,param_1) / (ulonglong)param_3 & 0xffffffff;
    }
    if (param_3 == 0) {
      param_3 = (uint)(1 / 0);
    }
    uVar5 = param_2 / param_3;
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    uVar5 = 0;
    iVar6 = 0;
    if (param_4 <= param_2) {
      uVar8 = 0x1f;
      if (param_4 != 0) {
        for (; param_4 >> uVar8 == 0; uVar8 = uVar8 - 1) {
        }
      }
      if ((uVar8 ^ 0x1f) == 0) {
        if ((param_3 <= param_1) || (param_4 < param_2)) {
          uVar5 = 0;
          iVar6 = 1;
        }
      }
      else {
        local_18 = (byte)(uVar8 ^ 0x1f);
        bVar7 = 0x20 - local_18;
        uVar1 = (ulonglong)(param_3 >> (bVar7 & 0x1f) | param_4 << (local_18 & 0x1f));
        uVar2 = CONCAT44(param_2 >> (bVar7 & 0x1f),
                         param_1 >> (bVar7 & 0x1f) | param_2 << (local_18 & 0x1f));
        uVar3 = uVar2 / uVar1;
        iVar6 = (int)uVar3;
        uVar5 = (uint)(uVar2 % uVar1);
        lVar4 = (uVar3 & 0xffffffff) * (ulonglong)(param_3 << (local_18 & 0x1f));
        uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
        if ((uVar5 < uVar8) || ((param_1 << (local_18 & 0x1f) < (uint)lVar4 && (uVar5 == uVar8)))) {
          return (ulonglong)(iVar6 - 1);
        }
        uVar5 = 0;
      }
    }
  }
  return CONCAT44(uVar5,iVar6);
}



ulonglong FUN_08059dc0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint local_1c;
  byte bStack24;
  
  local_1c = param_1;
  if (param_4 == 0) {
    if (param_2 < param_3) {
      uVar4 = (uint)(CONCAT44(param_2,param_1) % (ulonglong)param_3);
    }
    else {
      if (param_3 == 0) {
        param_3 = (uint)(1 / 0);
      }
      uVar4 = (uint)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                    (ulonglong)param_3);
    }
    return (ulonglong)uVar4;
  }
  if (param_2 < param_4) {
    return CONCAT44(param_2,param_1);
  }
  uVar4 = 0x1f;
  if (param_4 != 0) {
    for (; param_4 >> uVar4 == 0; uVar4 = uVar4 - 1) {
    }
  }
  if ((uVar4 ^ 0x1f) != 0) {
    bStack24 = (byte)(uVar4 ^ 0x1f);
    bVar3 = 0x20 - bStack24;
    uVar5 = param_3 >> (bVar3 & 0x1f) | param_4 << (bStack24 & 0x1f);
    param_3 = param_3 << (bStack24 & 0x1f);
    uVar1 = CONCAT44(param_2 >> (bVar3 & 0x1f),
                     param_1 >> (bVar3 & 0x1f) | param_2 << (bStack24 & 0x1f));
    uVar6 = (uint)(uVar1 % (ulonglong)uVar5);
    param_1 = param_1 << (bStack24 & 0x1f);
    lVar2 = (uVar1 / uVar5 & 0xffffffff) * (ulonglong)param_3;
    uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    if ((uVar6 < uVar7) || ((param_1 < uVar4 && (uVar6 == uVar7)))) {
      bVar8 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar7 = (uVar7 - uVar5) - (uint)bVar8;
    }
    uVar5 = (uVar6 - uVar7) - (uint)(param_1 < uVar4);
    return CONCAT44(uVar5 >> (bStack24 & 0x1f),
                    param_1 - uVar4 >> (bStack24 & 0x1f) | uVar5 << (bVar3 & 0x1f));
  }
  if ((param_3 <= param_1) || (param_4 < param_2)) {
    local_1c = param_1 - param_3;
    param_2 = (param_2 - param_4) - (uint)(param_1 < param_3);
  }
  return CONCAT44(param_2,local_1c);
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void FUN_08059fc0(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (PTR_DAT_08061ff0 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)PTR_DAT_08061ff0;
  }
  __cxa_atexit(param_1,0,uVar1);
  return;
}



void FUN_0805a000(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  if (DAT_08061ef8 != (code *)0xffffffff) {
    ppcVar2 = &DAT_08061ef8;
    pcVar1 = DAT_08061ef8;
    do {
      ppcVar2 = ppcVar2 + -1;
      (*pcVar1)();
      pcVar1 = *ppcVar2;
    } while (pcVar1 != (code *)0xffffffff);
  }
  return;
}



void _fini(void)

{
  FUN_0804be60();
  return;
}


