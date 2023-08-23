typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
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
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef ushort sa_family_t;

typedef struct termios termios, *Ptermios;

typedef uint tcflag_t;

typedef uchar cc_t;

typedef uint speed_t;

struct termios {
    tcflag_t c_iflag;
    tcflag_t c_oflag;
    tcflag_t c_cflag;
    tcflag_t c_lflag;
    cc_t c_line;
    cc_t c_cc[32];
    speed_t c_ispeed;
    speed_t c_ospeed;
};

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

typedef enum __rusage_who {
    RUSAGE_CHILDREN=-1,
    RUSAGE_SELF=0,
    RUSAGE_THREAD=1
} __rusage_who;

typedef enum __rusage_who __rusage_who_t;

typedef struct rusage rusage, *Prusage;

typedef struct timeval timeval, *Ptimeval;

typedef long __time_t;

typedef long __suseconds_t;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

struct rusage {
    struct timeval ru_utime;
    struct timeval ru_stime;
    long ru_maxrss;
    long ru_ixrss;
    long ru_idrss;
    long ru_isrss;
    long ru_minflt;
    long ru_majflt;
    long ru_nswap;
    long ru_inblock;
    long ru_oublock;
    long ru_msgsnd;
    long ru_msgrcv;
    long ru_nsignals;
    long ru_nvcsw;
    long ru_nivcsw;
};

typedef struct rlimit64 rlimit64, *Prlimit64;

typedef ulonglong __u_quad_t;

typedef __u_quad_t __rlim64_t;

typedef __rlim64_t rlim64_t;

struct rlimit64 {
    rlim64_t rlim_cur;
    rlim64_t rlim_max;
};

typedef enum __rlimit_resource {
    RLIMIT_CPU=0,
    RLIMIT_FSIZE=1,
    RLIMIT_DATA=2,
    RLIMIT_STACK=3,
    RLIMIT_CORE=4,
    __RLIMIT_RSS=5,
    __RLIMIT_NPROC=6,
    RLIMIT_NOFILE=7,
    __RLIMIT_MEMLOCK=8,
    __RLIMIT_OFILE=8,
    RLIMIT_AS=9,
    __RLIMIT_LOCKS=10,
    __RLIMIT_SIGPENDING=11,
    __RLIMIT_MSGQUEUE=12,
    __RLIMIT_NICE=13,
    __RLIMIT_RTPRIO=14,
    __RLIMIT_NLIMITS=15,
    __RLIM_NLIMITS=16
} __rlimit_resource;

typedef enum __rlimit_resource __rlimit_resource_t;

typedef struct stat64 stat64, *Pstat64;

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

typedef struct protoent protoent, *Pprotoent;

struct protoent {
    char * p_name;
    char * * p_aliases;
    int p_proto;
};

typedef struct addrinfo addrinfo, *Paddrinfo;

typedef uint __socklen_t;

typedef __socklen_t socklen_t;

typedef struct sockaddr sockaddr, *Psockaddr;

struct addrinfo {
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    socklen_t ai_addrlen;
    struct sockaddr * ai_addr;
    char * ai_canonname;
    struct addrinfo * ai_next;
};

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

typedef struct servent servent, *Pservent;

struct servent {
    char * s_name;
    char * * s_aliases;
    int s_port;
    char * s_proto;
};

typedef struct _IO_FILE FILE;

typedef int __ssize_t;

typedef __ssize_t ssize_t;

typedef int __pid_t;

typedef long __clock_t;

typedef struct hostent hostent, *Phostent;

struct hostent {
    char * h_name;
    char * * h_aliases;
    int h_addrtype;
    int h_length;
    char * * h_addr_list;
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

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

typedef struct utimbuf utimbuf, *Putimbuf;

struct utimbuf {
    __time_t actime;
    __time_t modtime;
};

typedef struct sigaltstack sigaltstack, *Psigaltstack;

struct sigaltstack {
    void * ss_sp;
    int ss_flags;
    size_t ss_size;
};

typedef union _union_1031 _union_1031, *P_union_1031;

typedef struct _struct_1032 _struct_1032, *P_struct_1032;

typedef struct _struct_1033 _struct_1033, *P_struct_1033;

typedef struct _struct_1034 _struct_1034, *P_struct_1034;

typedef struct _struct_1035 _struct_1035, *P_struct_1035;

typedef struct _struct_1036 _struct_1036, *P_struct_1036;

typedef struct _struct_1037 _struct_1037, *P_struct_1037;

typedef union sigval sigval, *Psigval;

typedef union sigval sigval_t;

struct _struct_1032 {
    __pid_t si_pid;
    __uid_t si_uid;
};

union sigval {
    int sival_int;
    void * sival_ptr;
};

struct _struct_1033 {
    int si_tid;
    int si_overrun;
    sigval_t si_sigval;
};

struct _struct_1035 {
    __pid_t si_pid;
    __uid_t si_uid;
    int si_status;
    __clock_t si_utime;
    __clock_t si_stime;
};

struct _struct_1037 {
    long si_band;
    int si_fd;
};

struct _struct_1036 {
    void * si_addr;
};

struct _struct_1034 {
    __pid_t si_pid;
    __uid_t si_uid;
    sigval_t si_sigval;
};

union _union_1031 {
    int _pad[29];
    struct _struct_1032 _kill;
    struct _struct_1033 _timer;
    struct _struct_1034 _rt;
    struct _struct_1035 _sigchld;
    struct _struct_1036 _sigfault;
    struct _struct_1037 _sigpoll;
};

typedef struct siginfo siginfo, *Psiginfo;

struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    union _union_1031 _sifields;
};

typedef struct siginfo siginfo_t;

typedef struct timezone timezone, *Ptimezone;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef struct itimerval itimerval, *Pitimerval;

struct itimerval {
    struct timeval it_interval;
    struct timeval it_value;
};

typedef __time_t time_t;

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

typedef enum __itimer_which {
    ITIMER_REAL=0,
    ITIMER_VIRTUAL=1,
    ITIMER_PROF=2
} __itimer_which;

typedef enum __itimer_which __itimer_which_t;

typedef struct sigaction sigaction, *Psigaction;

typedef union _union_1051 _union_1051, *P_union_1051;

typedef struct __sigset_t __sigset_t, *P__sigset_t;

typedef void (* __sighandler_t)(int);

struct __sigset_t {
    ulong __val[32];
};

union _union_1051 {
    __sighandler_t sa_handler;
    void (* sa_sigaction)(int, siginfo_t *, void *);
};

struct sigaction {
    union _union_1051 __sigaction_handler;
    struct __sigset_t sa_mask;
    int sa_flags;
    void (* sa_restorer)(void);
};

typedef long __fd_mask;

typedef struct __sigset_t sigset_t;

typedef struct fd_set fd_set, *Pfd_set;

struct fd_set {
    __fd_mask fds_bits[32];
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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
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

typedef struct group group, *Pgroup;

struct group {
    char * gr_name;
    char * gr_passwd;
    __gid_t gr_gid;
    char * * gr_mem;
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iStack_c;
  
  __gmon_start__();
  frame_dummy();
  __do_global_ctors_aux();
  return iStack_c;
}



void FUN_08049db4(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double ldexp(double __x,int __exponent)

{
  longdouble extraout_ST0;
  
  ldexp(__x,__exponent);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs(__s,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double fmod(double __x,double __y)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sigemptyset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = sigemptyset(__set);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * inet_ntop(int __af,void *__cp,char *__buf,socklen_t __len)

{
  char *pcVar1;
  
  pcVar1 = inet_ntop(__af,__cp,__buf,__len);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int tcflow(int __fd,int __action)

{
  int iVar1;
  
  iVar1 = tcflow(__fd,__action);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = connect(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setgroups(size_t __n,__gid_t *__groups)

{
  int iVar1;
  
  iVar1 = setgroups(__n,__groups);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = getpid();
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = mkdir(__path,__mode);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = strerror(__errnum);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = getsockname(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double log1p(double __x)

{
  longdouble extraout_ST0;
  
  log1p(__x);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void freeaddrinfo(addrinfo *__ai)

{
  freeaddrinfo(__ai);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double asin(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int shutdown(int __fd,int __how)

{
  int iVar1;
  
  iVar1 = shutdown(__fd,__how);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = open64(__file,__oflag);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sigismember(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = sigismember(__set,__signo);
  return iVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double sinh(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void __isoc99_sscanf(void)

{
  __isoc99_sscanf();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __xstat64(int __ver,char *__filename,stat64 *__stat_buf)

{
  int iVar1;
  
  iVar1 = __xstat64(__ver,__filename,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = localtime(__timer);
  return ptVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

speed_t cfgetispeed(termios *__termios_p)

{
  speed_t sVar1;
  
  sVar1 = cfgetispeed(__termios_p);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

group * getgrnam(char *__name)

{
  group *pgVar1;
  
  pgVar1 = getgrnam(__name);
  return pgVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double strtod(char *__nptr,char **__endptr)

{
  longdouble extraout_ST0;
  
  strtod(__nptr,__endptr);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int socketpair(int __domain,int __type,int __protocol,int *__fds)

{
  int iVar1;
  
  iVar1 = socketpair(__domain,__type,__protocol,__fds);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = recv(__fd,__buf,__n,__flags);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = getenv(__name);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int system(char *__command)

{
  int iVar1;
  
  iVar1 = system(__command);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fchown(int __fd,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = fchown(__fd,__owner,__group);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = sendto(__fd,__buf,__n,__flags,__addr,__addr_len);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double pow(double __x,double __y)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = listen(__fd,__n);
  return iVar1;
}



void dlclose(void)

{
  dlclose();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = rename(__old,__new);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * getlogin(void)

{
  char *pcVar1;
  
  pcVar1 = getlogin();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setitimer(__itimer_which_t __which,itimerval *__new,itimerval *__old)

{
  int iVar1;
  
  iVar1 = setitimer(__which,__new,__old);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__pid_t setsid(void)

{
  __pid_t _Var1;
  
  _Var1 = setsid();
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

protoent * getprotobyname(char *__name)

{
  protoent *ppVar1;
  
  ppVar1 = getprotobyname(__name);
  return ppVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__pid_t wait(void *__stat_loc)

{
  __pid_t _Var1;
  
  _Var1 = wait(__stat_loc);
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double floor(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double modf(double __x,double *__iptr)

{
  longdouble extraout_ST0;
  
  modf(__x,__iptr);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = tcgetattr(__fd,__termios_p);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int chmod(char *__file,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = chmod(__file,__mode);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int tcdrain(int __fd)

{
  int iVar1;
  
  iVar1 = tcdrain(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sigaltstack(sigaltstack *__ss,sigaltstack *__oss)

{
  int iVar1;
  
  iVar1 = sigaltstack(__ss,__oss);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double exp(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getrusage(__rusage_who_t __who,rusage *__usage)

{
  int iVar1;
  
  iVar1 = getrusage(__who,__usage);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = gettimeofday(__tv,__tz);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double expm1(double __x)

{
  longdouble extraout_ST0;
  
  expm1(__x);
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

servent * getservbyport(int __port,char *__proto)

{
  servent *psVar1;
  
  psVar1 = getservbyport(__port,__proto);
  return psVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int inet_pton(int __af,char *__cp,void *__buf)

{
  int iVar1;
  
  iVar1 = inet_pton(__af,__cp,__buf);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __lxstat64(int __ver,char *__filename,stat64 *__stat_buf)

{
  int iVar1;
  
  iVar1 = __lxstat64(__ver,__filename,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double atan(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __fpclassify(double __value)

{
  int iVar1;
  
  iVar1 = __fpclassify(__value);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

protoent * getprotobynumber(int __proto)

{
  protoent *ppVar1;
  
  ppVar1 = getprotobynumber(__proto);
  return ppVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = access(__name,__type);
  return iVar1;
}



void dlsym(void)

{
  dlsym();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int truncate64(char *__file,__off64_t __length)

{
  int iVar1;
  
  iVar1 = truncate64(__file,__length);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = sigaction(__sig,__act,__oact);
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

double sqrt(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = opendir(__name);
  return pDVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int gethostbyaddr_r(void *__addr,__socklen_t __len,int __type,hostent *__result_buf,char *__buf,
                   size_t __buflen,hostent **__result,int *__h_errnop)

{
  int iVar1;
  
  iVar1 = gethostbyaddr_r(__addr,__len,__type,__result_buf,__buf,__buflen,__result,__h_errnop);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = accept(__fd,__addr,__addr_len);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int tcflush(int __fd,int __queue_selector)

{
  int iVar1;
  
  iVar1 = tcflush(__fd,__queue_selector);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int symlink(char *__from,char *__to)

{
  int iVar1;
  
  iVar1 = symlink(__from,__to);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = socket(__domain,__type,__protocol);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int dup2(int __fd,int __fd2)

{
  int iVar1;
  
  iVar1 = dup2(__fd,__fd2);
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

int getaddrinfo(char *__name,char *__service,addrinfo *__req,addrinfo **__pai)

{
  int iVar1;
  
  iVar1 = getaddrinfo(__name,__service,__req,__pai);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__mode_t umask(__mode_t __mask)

{
  __mode_t _Var1;
  
  _Var1 = umask(__mask);
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double tanh(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setuid(__uid_t __uid)

{
  int iVar1;
  
  iVar1 = setuid(__uid);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int dup(int __fd)

{
  int iVar1;
  
  iVar1 = dup(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = mktime(__tp);
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = readdir64(__dirp);
  return pdVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double acos(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int cfsetospeed(termios *__termios_p,speed_t __speed)

{
  int iVar1;
  
  iVar1 = cfsetospeed(__termios_p,__speed);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int utime(char *__file,utimbuf *__file_times)

{
  int iVar1;
  
  iVar1 = utime(__file,__file_times);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int execv(char *__path,char **__argv)

{
  int iVar1;
  
  iVar1 = execv(__path,__argv);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int execvp(char *__file,char **__argv)

{
  int iVar1;
  
  iVar1 = execvp(__file,__argv);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double cos(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = alarm(__seconds);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = unlink(__name);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

passwd * getpwuid(__uid_t __uid)

{
  passwd *ppVar1;
  
  ppVar1 = getpwuid(__uid);
  return ppVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int nice(int __inc)

{
  int iVar1;
  
  iVar1 = nice(__inc);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__pid_t getppid(void)

{
  __pid_t _Var1;
  
  _Var1 = getppid();
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = setlocale(__category,__locale);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sigdelset(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = sigdelset(__set,__signo);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * __h_errno_location(void)

{
  int *piVar1;
  
  piVar1 = __h_errno_location();
  return piVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int chroot(char *__path)

{
  int iVar1;
  
  iVar1 = chroot(__path);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__gid_t getegid(void)

{
  __gid_t _Var1;
  
  _Var1 = getegid();
  return _Var1;
}



void dlopen(void)

{
  dlopen();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int mkfifo(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = mkfifo(__path,__mode);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int chdir(char *__path)

{
  int iVar1;
  
  iVar1 = chdir(__path);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = bind(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = getuid();
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int putenv(char *__string)

{
  int iVar1;
  
  iVar1 = putenv(__string);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sigpending(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = sigpending(__set);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = select(__nfds,__readfds,__writefds,__exceptfds,__timeout);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = closedir(__dirp);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int close(int __fd)

{
  int iVar1;
  
  iVar1 = close(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void rewinddir(DIR *__dirp)

{
  rewinddir(__dirp);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double frexp(double __x,int *__exponent)

{
  longdouble extraout_ST0;
  
  frexp(__x,__exponent);
  return (double)extraout_ST0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int initgroups(char *__user,__gid_t __group)

{
  int iVar1;
  
  iVar1 = initgroups(__user,__group);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = fprintf(__stream,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double log10(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int execve(char *__path,char **__argv,char **__envp)

{
  int iVar1;
  
  iVar1 = execve(__path,__argv,__envp);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int ftruncate64(int __fd,__off64_t __length)

{
  int iVar1;
  
  iVar1 = ftruncate64(__fd,__length);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
  int iVar1;
  
  iVar1 = sigprocmask(__how,__set,__oset);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int chown(char *__file,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = chown(__file,__owner,__group);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int gethostname(char *__name,size_t __len)

{
  int iVar1;
  
  iVar1 = gethostname(__name,__len);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double atan2(double __y,double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputc(__c,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int rmdir(char *__path)

{
  int iVar1;
  
  iVar1 = rmdir(__path);
  return iVar1;
}



void dlerror(void)

{
  dlerror();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

group * getgrgid(__gid_t __gid)

{
  group *pgVar1;
  
  pgVar1 = getgrgid(__gid);
  return pgVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = sleep(__seconds);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sigaddset(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = sigaddset(__set,__signo);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = readlink(__path,__buf,__len);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

speed_t cfgetospeed(termios *__termios_p)

{
  speed_t sVar1;
  
  sVar1 = cfgetospeed(__termios_p);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getnameinfo(sockaddr *__sa,socklen_t __salen,char *__host,socklen_t __hostlen,char *__serv,
               socklen_t __servlen,uint __flags)

{
  int iVar1;
  
  iVar1 = getnameinfo(__sa,__salen,__host,__hostlen,__serv,__servlen,__flags);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcat(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = send(__fd,__buf,__n,__flags);
  return sVar1;
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
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int gethostbyname_r(char *__name,hostent *__result_buf,char *__buf,size_t __buflen,
                   hostent **__result,int *__h_errnop)

{
  int iVar1;
  
  iVar1 = gethostbyname_r(__name,__result_buf,__buf,__buflen,__result,__h_errnop);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = fork();
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __fxstat64(int __ver,int __fildes,stat64 *__stat_buf)

{
  int iVar1;
  
  iVar1 = __fxstat64(__ver,__fildes,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = tcsetattr(__fd,__optional_actions,__termios_p);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = fcntl(__fd,__cmd);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
  int iVar1;
  
  iVar1 = getrlimit64(__resource,__rlimits);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * gmtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = gmtime(__timer);
  return ptVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getgroups(int __size,__gid_t *__list)

{
  int iVar1;
  
  iVar1 = getgroups(__size,__list);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int link(char *__from,char *__to)

{
  int iVar1;
  
  iVar1 = link(__from,__to);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pipe(int *__pipedes)

{
  int iVar1;
  
  iVar1 = pipe(__pipedes);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double tan(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  
  iVar1 = getsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setgid(__gid_t __gid)

{
  int iVar1;
  
  iVar1 = setgid(__gid);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double cosh(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int kill(__pid_t __pid,int __sig)

{
  int iVar1;
  
  iVar1 = kill(__pid,__sig);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double sin(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getpeername(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = getpeername(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int tcsendbreak(int __fd,int __duration)

{
  int iVar1;
  
  iVar1 = tcsendbreak(__fd,__duration);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = recvfrom(__fd,__buf,__n,__flags,__addr,__addr_len);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

passwd * getpwnam(char *__name)

{
  passwd *ppVar1;
  
  ppVar1 = getpwnam(__name);
  return ppVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  undefined4 extraout_EAX;
  undefined4 extraout_EDX;
  
  lseek64(__fd,__offset,__whence);
  return CONCAT44(extraout_EDX,extraout_EAX);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int getitimer(__itimer_which_t __which,itimerval *__value)

{
  int iVar1;
  
  iVar1 = getitimer(__which,__value);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



void __sigsetjmp(void)

{
  __sigsetjmp();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

servent * getservbyname(char *__name,char *__proto)

{
  servent *psVar1;
  
  psVar1 = getservbyname(__name,__proto);
  return psVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int cfsetispeed(termios *__termios_p,speed_t __speed)

{
  int iVar1;
  
  iVar1 = cfsetispeed(__termios_p,__speed);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fchmod(int __fd,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = fchmod(__fd,__mode);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sigsuspend(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = sigsuspend(__set);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__gid_t getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = getgid();
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double ceil(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = geteuid();
  return _Var1;
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



// WARNING: Removing unreachable block (ram,0x0804a96a)
// WARNING: Removing unreachable block (ram,0x0804a970)

void __do_global_dtors_aux(void)

{
  if (completed_5978 == '\0') {
    completed_5978 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0804a9b8)

void frame_dummy(void)

{
  return;
}



undefined4 caml_program(void)

{
  camlPervasives__entry();
  caml_globals_inited = caml_globals_inited + 1;
  camlArray__entry();
  caml_globals_inited = caml_globals_inited + 1;
  camlList__entry();
  caml_globals_inited = caml_globals_inited + 1;
  camlChar__entry();
  caml_globals_inited = caml_globals_inited + 1;
  camlString__entry();
  caml_globals_inited = caml_globals_inited + 1;
  camlSys__entry();
  caml_globals_inited = caml_globals_inited + 1;
  camlHashtbl__entry();
  caml_globals_inited = caml_globals_inited + 1;
  camlBuffer__entry();
  caml_globals_inited = caml_globals_inited + 1;
  camlPrintf__entry();
  caml_globals_inited = caml_globals_inited + 1;
  camlCallback__entry();
  caml_globals_inited = caml_globals_inited + 1;
  camlUnix__entry();
  caml_globals_inited = caml_globals_inited + 1;
  camlUnixLabels__entry();
  caml_globals_inited = caml_globals_inited + 1;
  camlSource__entry();
  caml_globals_inited = caml_globals_inited + 1;
  camlStd_exit__entry();
  caml_globals_inited = caml_globals_inited + 1;
  return 1;
}



void __regparm3 caml_curry9(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry9_1;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry9_1(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry9_2;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry9_2(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry9_3;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry9_3(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry9_4;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry9_4(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry9_5;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry9_5(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry9_6;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry9_6(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry9_7;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry9_7(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry9_8;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __regparm3 caml_curry9_8(undefined4 param_1)

{
  int unaff_EBX;
  
  _DAT_0807b7e8 =
       *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(unaff_EBX + 0xc) +
                                                                     0xc) + 0xc) + 0xc) + 0xc) + 0xc
                                 ) + 0xc) + 0xc);
  DAT_0807b7e0 = *(undefined4 *)(unaff_EBX + 8);
  caml_extra_params = *(undefined4 *)(*(int *)(unaff_EBX + 0xc) + 8);
  DAT_0807b7e4 = param_1;
                    // WARNING: Could not recover jumptable at 0x0804ad41. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(_DAT_0807b7e8 + 8))();
  return;
}



void __regparm3 caml_curry7(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry7_1;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry7_1(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry7_2;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry7_2(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry7_3;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry7_3(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry7_4;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry7_4(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry7_5;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry7_5(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry7_6;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry7_6(undefined4 param_1)

{
  int unaff_EBX;
  
  DAT_0807b7e0 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(unaff_EBX + 0xc) + 0xc) + 0xc
                                                    ) + 0xc) + 0xc) + 0xc);
  caml_extra_params = param_1;
                    // WARNING: Could not recover jumptable at 0x0804af35. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(DAT_0807b7e0 + 8))();
  return;
}



void __regparm3 caml_curry6(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry6_1;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry6_1(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry6_2;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry6_2(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry6_3;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry6_3(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry6_4;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry6_4(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry6_5;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void caml_curry6_5(void)

{
  int unaff_EBX;
  
  caml_extra_params =
       *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(unaff_EBX + 0xc) + 0xc) + 0xc) + 0xc) + 0xc);
                    // WARNING: Could not recover jumptable at 0x0804b0cd. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(caml_extra_params + 8))();
  return;
}



void __regparm3 caml_curry5(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry5_1;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry5_1(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry5_2;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry5_2(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry5_3;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry5_3(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry5_4;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void caml_curry5_4(void)

{
  int unaff_EBX;
  
                    // WARNING: Could not recover jumptable at 0x0804b1ed. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)(*(int *)(*(int *)(*(int *)(unaff_EBX + 0xc) + 0xc) + 0xc) + 0xc) + 8))();
  return;
}



void __regparm3 caml_curry4(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry4_1;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry4_1(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry4_2;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry4_2(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry4_3;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void caml_curry4_3(void)

{
  int unaff_EBX;
  
                    // WARNING: Could not recover jumptable at 0x0804b2c7. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)(*(int *)(*(int *)(unaff_EBX + 0xc) + 0xc) + 0xc) + 8))();
  return;
}



void __regparm3 caml_curry3(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry3_1;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 caml_curry3_1(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry3_2;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void caml_curry3_2(void)

{
  int unaff_EBX;
  
                    // WARNING: Could not recover jumptable at 0x0804b361. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)(*(int *)(unaff_EBX + 0xc) + 0xc) + 8))();
  return;
}



void __regparm3 caml_curry2(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry2_1;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void caml_curry2_1(void)

{
  int unaff_EBX;
  
                    // WARNING: Could not recover jumptable at 0x0804b3bd. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)(unaff_EBX + 0xc) + 8))();
  return;
}



void caml_tuplify2(void)

{
  int unaff_EBX;
  
                    // WARNING: Could not recover jumptable at 0x0804b3ca. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + 8))();
  return;
}



void caml_tuplify3(void)

{
  int unaff_EBX;
  
                    // WARNING: Could not recover jumptable at 0x0804b3dd. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_EBX + 8))();
  return;
}



void __regparm3 caml_apply6(undefined4 param_1)

{
  code **ppcVar1;
  
  if (caml_extra_params[1] == (code *)0xd) {
                    // WARNING: Could not recover jumptable at 0x0804b43b. Too many branches
                    // WARNING: Treating indirect jump as call
    (*caml_extra_params[2])();
    return;
  }
  ppcVar1 = (code **)(**caml_extra_params)(*caml_extra_params,param_1);
  ppcVar1 = (code **)(**ppcVar1)();
  ppcVar1 = (code **)(**ppcVar1)();
  ppcVar1 = (code **)(**ppcVar1)();
  ppcVar1 = (code **)(**ppcVar1)();
                    // WARNING: Could not recover jumptable at 0x0804b481. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcVar1)();
  return;
}



void caml_apply4(void)

{
  code **ppcVar1;
  code **unaff_ESI;
  
  if (unaff_ESI[1] == (code *)0x9) {
                    // WARNING: Could not recover jumptable at 0x0804b4a1. Too many branches
                    // WARNING: Treating indirect jump as call
    (*unaff_ESI[2])();
    return;
  }
  ppcVar1 = (code **)(**unaff_ESI)();
  ppcVar1 = (code **)(**ppcVar1)();
  ppcVar1 = (code **)(**ppcVar1)();
                    // WARNING: Could not recover jumptable at 0x0804b4df. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcVar1)();
  return;
}



void __regparm3 caml_apply3(undefined4 param_1,code **param_2)

{
  code **ppcVar1;
  
  if (param_2[1] == (code *)0x7) {
                    // WARNING: Could not recover jumptable at 0x0804b501. Too many branches
                    // WARNING: Treating indirect jump as call
    (*param_2[2])();
    return;
  }
  ppcVar1 = (code **)(**param_2)();
  ppcVar1 = (code **)(**ppcVar1)();
                    // WARNING: Could not recover jumptable at 0x0804b531. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcVar1)();
  return;
}



void caml_apply2(void)

{
  code **ppcVar1;
  code **in_ECX;
  
  if (in_ECX[1] == (code *)0x5) {
                    // WARNING: Could not recover jumptable at 0x0804b551. Too many branches
                    // WARNING: Treating indirect jump as call
    (*in_ECX[2])();
    return;
  }
  ppcVar1 = (code **)(**in_ECX)();
                    // WARNING: Could not recover jumptable at 0x0804b573. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcVar1)();
  return;
}



undefined4 camlStd_exit__entry(void)

{
  (**(code **)*DAT_08075650)();
  return 1;
}



undefined4 camlSource__entry(void)

{
  int iVar1;
  code **ppcVar2;
  bool bVar3;
  int local_8;
  
  if ((*(uint *)(camlSys + -4) >> 9 | 1) < 4) {
    camlSource = 3;
  }
  else {
    camlSource = caml_c_call(*(undefined4 *)(camlSys + 4));
  }
  DAT_08072cb8 = camlBuffer__create_1039();
  iVar1 = camlSource;
  if (2 < camlSource) {
    local_8 = 3;
    do {
      camlBuffer__add_string_1082();
      bVar3 = local_8 != iVar1;
      local_8 = local_8 + 2;
    } while (bVar3);
  }
  ppcVar2 = (code **)camlPrintf__printf_1393();
  (**ppcVar2)();
  caml_c_call(3);
  return 1;
}



void __regparm3 camlSource__code_end(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x24;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_3 = extraout_ECX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 0x20);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x24);
  caml_young_ptr = uVar4;
  *puVar2 = 0x801;
  *puVar1 = param_1;
  *(undefined4 *)(uVar3 - 0x1c) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(uVar3 - 0x18) = 0x1400;
  *(undefined4 *)(uVar3 - 0x14) = 3;
  *(undefined4 *)(uVar3 - 0x10) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(uVar3 - 0xc) = **(undefined4 **)(param_3 + 0xc);
  *(undefined4 **)(uVar3 - 8) = puVar1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 camlUnix__fun_2842(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x24;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_3 = extraout_ECX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 0x20);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x24);
  caml_young_ptr = uVar4;
  *puVar2 = 0x801;
  *puVar1 = param_1;
  *(undefined4 *)(uVar3 - 0x1c) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(uVar3 - 0x18) = 0x1400;
  *(undefined4 *)(uVar3 - 0x14) = 3;
  *(undefined4 *)(uVar3 - 0x10) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(uVar3 - 0xc) = **(undefined4 **)(param_3 + 0xc);
  *(undefined4 **)(uVar3 - 8) = puVar1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



undefined4 __regparm3 camlUnix__fun_2828(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  int unaff_EBX;
  
  if (((uint)param_1 & 1) == 0) {
    if (*(byte *)(param_1 + -1) != 0) {
      if (*(byte *)(param_1 + -1) < 2) {
        uVar4 = *param_1;
        while( true ) {
          uVar3 = caml_young_ptr - 8;
          if (caml_young_limit <= uVar3) break;
          caml_young_ptr = uVar3;
          caml_call_gc();
          uVar4 = extraout_ECX;
        }
        puVar1 = (undefined4 *)(caml_young_ptr - 4);
        puVar2 = (undefined4 *)(caml_young_ptr - 8);
        caml_young_ptr = uVar3;
        *puVar2 = 0x400;
        *puVar1 = uVar4;
        caml_modify(*(undefined4 *)(unaff_EBX + 8),puVar1);
        return 1;
      }
      **(undefined4 **)(unaff_EBX + 0xc) = *param_1;
      return 1;
    }
  }
  else if (1 < (int)param_1 >> 1) {
    **(undefined4 **)(unaff_EBX + 0x10) = 3;
    return 1;
  }
  return 1;
}



int * __regparm3 camlUnix__get_port_1739(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  iVar4 = caml_string_equal(*(undefined4 *)(param_3 + 0xc),&camlUnix__215);
  if (iVar4 != 1) {
    while( true ) {
      uVar3 = caml_young_ptr;
      uVar5 = caml_young_ptr - 0x18;
      if (caml_young_limit <= uVar5) break;
      caml_young_ptr = uVar5;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 0x14);
    puVar2 = (undefined4 *)(caml_young_ptr - 0x18);
    caml_young_ptr = uVar5;
    *puVar2 = 0x800;
    *puVar1 = param_1;
    *(undefined4 *)(uVar3 - 0x10) = 1;
    *(undefined4 *)(uVar3 - 0xc) = 0x800;
    *(int *)(uVar3 - 8) = (int)puVar1;
    *(undefined4 *)(uVar3 - 4) = 1;
    return (int *)(uVar3 - 8);
  }
  piVar6 = (int *)FUN_0804b870();
  if ((undefined **)*piVar6 == &caml_exn_Failure) {
    piVar6 = (int *)FUN_0804b7e0();
    if ((undefined **)*piVar6 == &caml_exn_Not_found) {
      return (int *)0x1;
    }
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_0804b7e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  iVar4 = caml_c_call(*(undefined4 *)(param_2 + 0xc),param_1);
  uVar6 = *(undefined4 *)(iVar4 + 8);
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x18;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
    uVar6 = extraout_ECX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 0x14);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar5;
  *puVar2 = 0x800;
  *puVar1 = param_3;
  *(undefined4 *)(uVar3 - 0x10) = uVar6;
  *(undefined4 *)(uVar3 - 0xc) = 0x800;
  *(undefined4 **)(uVar3 - 8) = puVar1;
  *(undefined4 *)(uVar3 - 4) = 1;
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



void FUN_0804b870(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  int unaff_EDI;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  uVar4 = caml_c_call(*(undefined4 *)(unaff_EDI + 0xc));
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x18;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
    uVar4 = extraout_ECX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 0x14);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar5;
  *puVar2 = 0x800;
  *puVar1 = param_3;
  *(undefined4 *)(uVar3 - 0x10) = uVar4;
  *(undefined4 *)(uVar3 - 0xc) = 0x800;
  *(undefined4 **)(uVar3 - 8) = puVar1;
  *(undefined4 *)(uVar3 - 4) = 1;
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



void __regparm3 camlUnix__fun_2833(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  int unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0xc;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 8);
  puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar4;
  *puVar2 = 0x800;
  *puVar1 = param_1;
  *(undefined4 *)(uVar3 - 4) = **(undefined4 **)(unaff_EBX + 8);
  return;
}



void __regparm3 camlUnix__fun_2836(undefined4 param_1,undefined4 param_2,int param_3)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x1c;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_3 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x18);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x1c);
  caml_young_ptr = uVar4;
  *puVar2 = 0x18f7;
  *ppcVar1 = caml_tuplify2;
  *(undefined4 *)(uVar3 - 0x14) = 0xfffffffd;
  *(code **)(uVar3 - 0x10) = camlUnix__fun_2842;
  *(undefined4 *)(uVar3 - 0xc) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  camlList__map_1062();
  return;
}



void __regparm3 camlUnix__fun_2857(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2863(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2562(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2564(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2566(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2568(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2570(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2572(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2574(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2576(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2578(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2580(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2582(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2584(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2586(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2588(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2590(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2592(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2594(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2596(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2598(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2600(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2602(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2604(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2606(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2608(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2610(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2612(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2614(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2616(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2618(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2620(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2622(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2624(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2626(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2628(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2630(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2632(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2634(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2636(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2638(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2640(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2642(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2644(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2646(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2648(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2650(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2652(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2654(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2656(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2658(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2660(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2662(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2664(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2666(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2668(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2670(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2672(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2674(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2676(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2678(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2680(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2682(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2684(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2686(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2688(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2690(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2692(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2694(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2696(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2698(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2700(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2702(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2704(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2706(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2708(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2710(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2712(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2714(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2716(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2718(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2720(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2722(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2724(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2726(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2728(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2730(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2732(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2734(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2736(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2738(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2740(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2742(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2744(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2746(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2748(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2750(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2752(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2754(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2756(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2758(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2760(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2762(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2764(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2766(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2768(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2770(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2772(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2774(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2776(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2778(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2780(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2782(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void camlUnix__handle_unix_error_1171(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_0804c270();
  if (*piVar2 != camlUnix) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  iVar5 = piVar2[3];
  iVar3 = piVar2[2];
  iVar4 = piVar2[1];
  if (1 < *(uint *)(camlSys + -4) >> 9) {
    camlPervasives__output_string_1191();
    camlPervasives__output_string_1191();
    camlPervasives__output_string_1191();
    camlPervasives__output_string_1191();
    iVar1 = (*(uint *)(iVar5 + -4) >> 10) * 4 + -1;
    if (1 < (int)((iVar1 - (uint)*(byte *)(iVar5 + iVar1)) * 2 + 1)) {
      camlPervasives__output_string_1191(iVar3,iVar4,iVar5);
      camlPervasives__output_string_1191();
      camlPervasives__output_string_1191();
    }
    camlPervasives__output_string_1191(iVar3,iVar4,iVar5);
    caml_c_call(iVar4);
    camlPervasives__prerr_endline_1285();
    camlPervasives__exit_1326();
    return;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error(iVar3,iVar4);
}



void __regparm3 FUN_0804c270(undefined4 param_1,code **param_2)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  (**param_2)();
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



void __regparm3 camlUnix__read_1237(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EBX;
  
  if (((0 < param_3) && (0 < param_2)) &&
     (iVar1 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1,
     param_3 <= (int)(((iVar1 - (uint)*(byte *)(unaff_EBX + iVar1)) * 2 - param_2) + 2))) {
    caml_c_call(param_1);
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



void __regparm3 camlUnix__write_1242(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EBX;
  
  if (((0 < param_3) && (0 < param_2)) &&
     (iVar1 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1,
     param_3 <= (int)(((iVar1 - (uint)*(byte *)(unaff_EBX + iVar1)) * 2 - param_2) + 2))) {
    caml_c_call(param_1);
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



void __regparm3 camlUnix__single_write_1247(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EBX;
  
  if (((0 < param_3) && (0 < param_2)) &&
     (iVar1 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1,
     param_3 <= (int)(((iVar1 - (uint)*(byte *)(unaff_EBX + iVar1)) * 2 - param_2) + 2))) {
    caml_c_call(param_1);
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



void __regparm3 camlUnix__fun_2804(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2802(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2800(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2798(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2796(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2794(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



undefined4 camlUnix__try_set_close_on_exec_1366(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0804c430();
  if ((undefined **)*piVar1 == &caml_exn_Invalid_argument) {
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined4 __regparm3 FUN_0804c430(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  caml_c_call(param_1);
  caml_exception_pointer = (undefined4 *)uStack_4;
  return 3;
}



void camlUnix__pause_1408(void)

{
  undefined4 uVar1;
  
  uVar1 = caml_c_call(3,1);
  caml_c_call(uVar1);
  return;
}



char __regparm3 camlUnix__is_inet6_addr_1500(int param_1)

{
  int iVar1;
  
  iVar1 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  return ((iVar1 - (uint)*(byte *)(param_1 + iVar1) & 0x7fffffff) == 0x10) * '\x02' + '\x01';
}



undefined4 __regparm3 camlUnix__domain_of_sockaddr_1529(int *param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + -1) == '\0') {
    return 1;
  }
  iVar1 = (*(uint *)(*param_1 + -4) >> 10) * 4 + -1;
  if ((iVar1 - (uint)*(byte *)(*param_1 + iVar1) & 0x7fffffff) == 0x10) {
    return 5;
  }
  return 3;
}



void __regparm3 camlUnix__recv_1558(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EBX;
  
  if (((0 < param_3) && (0 < param_2)) &&
     (iVar1 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1,
     param_3 <= (int)(((iVar1 - (uint)*(byte *)(unaff_EBX + iVar1)) * 2 - param_2) + 2))) {
    caml_c_call(param_1);
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



void __regparm3 camlUnix__recvfrom_1564(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EBX;
  
  if (((0 < param_3) && (0 < param_2)) &&
     (iVar1 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1,
     param_3 <= (int)(((iVar1 - (uint)*(byte *)(unaff_EBX + iVar1)) * 2 - param_2) + 2))) {
    caml_c_call(param_1);
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



void __regparm3 camlUnix__send_1570(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EBX;
  
  if (((0 < param_3) && (0 < param_2)) &&
     (iVar1 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1,
     param_3 <= (int)(((iVar1 - (uint)*(byte *)(unaff_EBX + iVar1)) * 2 - param_2) + 2))) {
    caml_c_call(param_1);
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



void __regparm3 camlUnix__sendto_1576(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EBX;
  
  if (((0 < param_3) && (0 < param_2)) &&
     (iVar1 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1,
     param_3 <= (int)(((iVar1 - (uint)*(byte *)(unaff_EBX + iVar1)) * 2 - param_2) + 2))) {
    caml_c_call(param_1);
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



void __regparm3 camlUnix__fun_2816(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__fun_2814(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlUnix__getsockopt_1643(undefined4 param_1)

{
  caml_c_call(1,param_1);
  return;
}



void __regparm3 camlUnix__setsockopt_1646(undefined4 param_1)

{
  caml_c_call(1,param_1);
  return;
}



void __regparm3 camlUnix__getsockopt_int_1650(undefined4 param_1)

{
  caml_c_call(3,param_1);
  return;
}



void __regparm3 camlUnix__setsockopt_int_1653(undefined4 param_1)

{
  caml_c_call(3,param_1);
  return;
}



void __regparm3 camlUnix__getsockopt_optint_1657(undefined4 param_1)

{
  caml_c_call(5,param_1);
  return;
}



void __regparm3 camlUnix__setsockopt_optint_1660(undefined4 param_1)

{
  caml_c_call(5,param_1);
  return;
}



void __regparm3 camlUnix__getsockopt_float_1664(undefined4 param_1)

{
  caml_c_call(7,param_1);
  return;
}



void __regparm3 camlUnix__setsockopt_float_1667(undefined4 param_1)

{
  caml_c_call(7,param_1);
  return;
}



void __regparm3 camlUnix__getsockopt_error_1671(undefined4 param_1)

{
  caml_c_call(9,param_1,1);
  return;
}



void camlUnix__getaddrinfo_emulation_1730(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 in_ECX;
  int *extraout_ECX;
  undefined4 unaff_EBX;
  int **ppiVar9;
  code **ppcVar10;
  undefined4 *puVar11;
  undefined4 extraout_var;
  undefined4 uVar12;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x30;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppiVar9 = (int **)(caml_young_ptr - 0x2c);
  puVar11 = (undefined4 *)(caml_young_ptr - 0x30);
  caml_young_ptr = uVar4;
  *puVar11 = 0x400;
  *ppiVar9 = (int *)0x1;
  puVar11 = (undefined4 *)(uVar3 - 0x24);
  *(undefined4 *)(uVar3 - 0x28) = 0x400;
  *puVar11 = 1;
  *(undefined4 *)(uVar3 - 0x20) = 0x400;
  *(undefined4 *)(uVar3 - 0x1c) = 1;
  *(undefined4 *)(uVar3 - 0x18) = 0x14f7;
  *(code **)(uVar3 - 0x14) = camlUnix__fun_2828;
  *(undefined4 *)(uVar3 - 0x10) = 3;
  *(int ***)(uVar3 - 0xc) = ppiVar9;
  *(undefined4 **)(uVar3 - 8) = puVar11;
  *(undefined4 **)(uVar3 - 4) = (undefined4 *)(uVar3 - 0x1c);
  camlList__iter_1074();
  uVar12 = extraout_var;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar10 = (code **)(caml_young_ptr - 0x10);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar1 = 0x10f7;
  *ppcVar10 = caml_curry2;
  *(undefined4 *)(uVar3 - 0xc) = 5;
  *(code **)(uVar3 - 8) = camlUnix__get_port_1739;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  if (*ppiVar9 == (int *)0x1) {
    uVar6 = camlUnix__get_port_1739(ppcVar10);
    camlUnix__get_port_1739(ppcVar10,uVar6,puVar11,uVar12,in_ECX);
    ppiVar9 = (int **)camlPervasives___40_1143();
  }
  else {
    iVar7 = **ppiVar9;
    if (iVar7 == 3) {
      ppiVar9 = (int **)camlUnix__get_port_1739();
    }
    else if (iVar7 == 1) {
      ppiVar9 = (int **)camlUnix__get_port_1739();
    }
    else {
      iVar5 = caml_string_equal(unaff_EBX,&camlUnix__202);
      if (iVar5 == 1) {
        ppiVar9 = (int **)0x1;
      }
      else {
        while( true ) {
          uVar3 = caml_young_ptr;
          uVar4 = caml_young_ptr - 0x18;
          if (caml_young_limit <= uVar4) break;
          caml_young_ptr = uVar4;
          caml_call_gc();
        }
        piVar8 = (int *)(caml_young_ptr - 0x14);
        puVar1 = (undefined4 *)(caml_young_ptr - 0x18);
        caml_young_ptr = uVar4;
        *puVar1 = 0x800;
        *piVar8 = iVar7;
        *(undefined4 *)(uVar3 - 0x10) = 1;
        ppiVar9 = (int **)(uVar3 - 8);
        *(undefined4 *)(uVar3 - 0xc) = 0x800;
        *ppiVar9 = piVar8;
        *(undefined4 *)(uVar3 - 4) = 1;
      }
    }
  }
  iVar7 = caml_string_equal(uVar12,&camlUnix__197,ppiVar9);
  if (iVar7 == 1) {
    piVar8 = (int *)FUN_0804cb20();
    if ((undefined **)*piVar8 != &caml_exn_Failure) {
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    piVar8 = (int *)FUN_0804ca90();
    if ((undefined **)*piVar8 != &caml_exn_Not_found) {
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    piVar8 = (int *)0x1;
  }
  else {
    iVar7 = camlList__mem_1161();
    if (iVar7 == 1) {
      while( true ) {
        uVar3 = caml_young_ptr;
        uVar4 = caml_young_ptr - 0x18;
        if (caml_young_limit <= uVar4) break;
        caml_young_ptr = uVar4;
        caml_call_gc();
      }
      puVar1 = (undefined4 *)(caml_young_ptr - 0x14);
      puVar2 = (undefined4 *)(caml_young_ptr - 0x18);
      caml_young_ptr = uVar4;
      *puVar2 = 0x800;
      *puVar1 = DAT_08072ed4;
      *(char **)(uVar3 - 0x10) = camlUnix__195;
      piVar8 = (int *)(uVar3 - 8);
      *(undefined4 *)(uVar3 - 0xc) = 0x800;
      *piVar8 = (int)puVar1;
      *(undefined4 *)(uVar3 - 4) = 1;
    }
    else {
      while( true ) {
        uVar3 = caml_young_ptr;
        uVar4 = caml_young_ptr - 0x18;
        if (caml_young_limit <= uVar4) break;
        caml_young_ptr = uVar4;
        caml_call_gc();
      }
      puVar1 = (undefined4 *)(caml_young_ptr - 0x14);
      puVar2 = (undefined4 *)(caml_young_ptr - 0x18);
      caml_young_ptr = uVar4;
      *puVar2 = 0x800;
      *puVar1 = DAT_08072ed0;
      *(char **)(uVar3 - 0x10) = camlUnix__196;
      piVar8 = (int *)(uVar3 - 8);
      *(undefined4 *)(uVar3 - 0xc) = 0x800;
      *piVar8 = (int)puVar1;
      *(undefined4 *)(uVar3 - 4) = 1;
    }
  }
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x18;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    piVar8 = extraout_ECX;
  }
  ppcVar10 = (code **)(caml_young_ptr - 0x14);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar4;
  *puVar1 = 0x14f7;
  *ppcVar10 = caml_tuplify2;
  *(undefined4 *)(uVar3 - 0x10) = 0xfffffffd;
  *(code **)(uVar3 - 0xc) = camlUnix__fun_2836;
  *(undefined4 **)(uVar3 - 8) = puVar11;
  *(int **)(uVar3 - 4) = piVar8;
  camlList__map_1062();
  camlList__flatten_1058();
  return;
}



void FUN_0804c9f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code **ppcVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *extraout_ECX;
  
  while( true ) {
    uVar4 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x18;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 0x14);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar5;
  *puVar2 = 0x800;
  *puVar1 = DAT_08072ed4;
  *(char **)(uVar4 - 0x10) = camlUnix__195;
  piVar6 = (int *)(uVar4 - 8);
  *(undefined4 *)(uVar4 - 0xc) = 0x800;
  *piVar6 = (int)puVar1;
  *(undefined4 *)(uVar4 - 4) = 1;
  while( true ) {
    uVar4 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x18;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
    piVar6 = extraout_ECX;
  }
  ppcVar3 = (code **)(caml_young_ptr - 0x14);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar5;
  *puVar1 = 0x14f7;
  *ppcVar3 = caml_tuplify2;
  *(undefined4 *)(uVar4 - 0x10) = 0xfffffffd;
  *(code **)(uVar4 - 0xc) = camlUnix__fun_2836;
  *(undefined4 *)(uVar4 - 8) = param_2;
  *(int **)(uVar4 - 4) = piVar6;
  camlList__map_1062();
  camlList__flatten_1058();
  return;
}



void FUN_0804ca90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  uVar4 = caml_c_call(param_4);
  camlArray__to_list_1121();
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
  }
  ppcVar1 = (code **)(caml_young_ptr - 0xc);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar5;
  *puVar2 = 0xcf7;
  *ppcVar1 = camlUnix__fun_2833;
  *(undefined4 *)(uVar3 - 8) = 3;
  *(undefined4 *)(uVar3 - 4) = uVar4;
  uVar4 = camlList__map_1062();
  caml_exception_pointer = (undefined4 *)uStack_4;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x18;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
    uVar4 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x14);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar5;
  *puVar2 = 0x14f7;
  *ppcVar1 = caml_tuplify2;
  *(undefined4 *)(uVar3 - 0x10) = 0xfffffffd;
  *(code **)(uVar3 - 0xc) = camlUnix__fun_2836;
  *(undefined4 *)(uVar3 - 8) = param_3;
  *(undefined4 *)(uVar3 - 4) = uVar4;
  camlList__map_1062();
  camlList__flatten_1058();
  return;
}



void FUN_0804cb20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code **ppcVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  uVar5 = caml_c_call();
  while( true ) {
    uVar4 = caml_young_ptr;
    uVar6 = caml_young_ptr - 0x18;
    if (caml_young_limit <= uVar6) break;
    caml_young_ptr = uVar6;
    caml_call_gc();
    uVar5 = extraout_ECX_00;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 0x14);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar6;
  *puVar2 = 0x800;
  *puVar1 = uVar5;
  *(undefined4 *)(uVar4 - 0x10) = param_4;
  piVar7 = (int *)(uVar4 - 8);
  *(undefined4 *)(uVar4 - 0xc) = 0x800;
  *piVar7 = (int)puVar1;
  *(undefined4 *)(uVar4 - 4) = 1;
  caml_exception_pointer = (undefined4 *)uStack_4;
  while( true ) {
    uVar4 = caml_young_ptr;
    uVar6 = caml_young_ptr - 0x18;
    if (caml_young_limit <= uVar6) break;
    caml_young_ptr = uVar6;
    caml_call_gc();
    piVar7 = extraout_ECX;
  }
  ppcVar3 = (code **)(caml_young_ptr - 0x14);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar6;
  *puVar1 = 0x14f7;
  *ppcVar3 = caml_tuplify2;
  *(undefined4 *)(uVar4 - 0x10) = 0xfffffffd;
  *(code **)(uVar4 - 0xc) = camlUnix__fun_2836;
  *(undefined4 *)(uVar4 - 8) = param_3;
  *(int **)(uVar4 - 4) = piVar7;
  camlList__map_1062();
  camlList__flatten_1058();
  return;
}



void __regparm3 camlUnix__getaddrinfo_1751(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0804cc70(param_1);
  if ((undefined **)*piVar1 == &caml_exn_Invalid_argument) {
    camlUnix__getaddrinfo_emulation_1730();
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void __regparm3 FUN_0804cc70(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  caml_c_call(param_1);
  camlList__rev_append_1051();
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



void __regparm3 camlUnix__getnameinfo_emulation_1772(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  
  if (*(char *)(param_1 + -1) == '\0') {
    uVar6 = *param_1;
    while( true ) {
      uVar5 = caml_young_ptr;
      uVar8 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar8) break;
      caml_young_ptr = uVar8;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar8;
    *puVar2 = 0x800;
    *puVar1 = &camlUnix__192;
    *(undefined4 *)(uVar5 - 4) = uVar6;
    return;
  }
  uVar6 = *param_1;
  piVar3 = (int *)FUN_0804cd60(uVar6,param_1[1]);
  if ((undefined **)*piVar3 != &caml_exn_Not_found) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  iVar4 = camlList__mem_1161();
  if (iVar4 != 1) {
    while( true ) {
      uVar5 = caml_young_ptr - 8;
      if (caml_young_limit <= uVar5) break;
      caml_young_ptr = uVar5;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 4);
    puVar2 = (undefined4 *)(caml_young_ptr - 8);
    caml_young_ptr = uVar5;
    *puVar2 = 0x400;
    *puVar1 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar6 = caml_c_call(uVar6);
  piVar3 = (int *)FUN_0804ce10();
  if ((undefined **)*piVar3 == &caml_exn_Not_found) {
    uVar7 = camlPervasives__string_of_int_1130();
    while( true ) {
      uVar5 = caml_young_ptr;
      uVar8 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar8) break;
      caml_young_ptr = uVar8;
      caml_call_gc();
      uVar7 = extraout_ECX;
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar8;
    *puVar2 = 0x800;
    *puVar1 = uVar6;
    *(undefined4 *)(uVar5 - 4) = uVar7;
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_0804cd60(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  iVar3 = camlList__mem_1161();
  if (iVar3 != 1) {
    while( true ) {
      uVar4 = caml_young_ptr - 8;
      if (caml_young_limit <= uVar4) break;
      caml_young_ptr = uVar4;
      caml_call_gc();
    }
    puVar5 = (undefined4 *)(caml_young_ptr - 4);
    puVar1 = (undefined4 *)(caml_young_ptr - 8);
    caml_young_ptr = uVar4;
    *puVar1 = 0x400;
    *puVar5 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  puVar5 = (undefined4 *)caml_c_call(param_1);
  uVar2 = *puVar5;
  caml_exception_pointer = (undefined4 *)uStack_4;
  piVar6 = (int *)FUN_0804ce10();
  if ((undefined **)*piVar6 == &caml_exn_Not_found) {
    uVar7 = camlPervasives__string_of_int_1130();
    while( true ) {
      uVar4 = caml_young_ptr;
      uVar8 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar8) break;
      caml_young_ptr = uVar8;
      caml_call_gc();
      uVar7 = extraout_ECX;
    }
    puVar5 = (undefined4 *)(caml_young_ptr - 8);
    puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar8;
    *puVar1 = 0x800;
    *puVar5 = uVar2;
    *(undefined4 *)(uVar4 - 4) = uVar7;
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_0804ce10(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  iVar2 = camlList__mem_1161();
  if (iVar2 != 1) {
    while( true ) {
      uVar3 = caml_young_ptr - 8;
      if (caml_young_limit <= uVar3) break;
      caml_young_ptr = uVar3;
      caml_call_gc();
    }
    puVar5 = (undefined4 *)(caml_young_ptr - 4);
    puVar1 = (undefined4 *)(caml_young_ptr - 8);
    caml_young_ptr = uVar3;
    *puVar1 = 0x400;
    *puVar5 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  iVar2 = camlList__mem_1161();
  if (iVar2 == 1) {
    puVar4 = &camlUnix__193;
  }
  else {
    puVar4 = &camlUnix__194;
  }
  puVar5 = (undefined4 *)caml_c_call(param_2,puVar4);
  uVar7 = *puVar5;
  caml_exception_pointer = (undefined4 *)uStack_4;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar6 = caml_young_ptr - 0xc;
    if (caml_young_limit <= uVar6) break;
    caml_young_ptr = uVar6;
    caml_call_gc();
    uVar7 = extraout_ECX;
  }
  puVar5 = (undefined4 *)(caml_young_ptr - 8);
  puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar6;
  *puVar1 = 0x800;
  *puVar5 = param_1;
  *(undefined4 *)(uVar3 - 4) = uVar7;
  return;
}



void __regparm3 camlUnix__getnameinfo_1781(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0804cf70(param_1);
  if ((undefined **)*piVar1 == &caml_exn_Invalid_argument) {
    camlUnix__getnameinfo_emulation_1772();
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void __regparm3 FUN_0804cf70(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  caml_c_call(param_1);
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



undefined4 __regparm3 camlUnix__system_1891(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = caml_c_call(1,param_1);
  if (iVar1 != 1) {
    iVar1 = caml_c_call(1,iVar1);
    return *(undefined4 *)(iVar1 + 4);
  }
  FUN_0804d000();
  uVar2 = camlPervasives__exit_1326();
  return uVar2;
}



void FUN_0804d000(undefined4 param_1)

{
  char **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar1 = (char **)(caml_young_ptr - 0xc);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar4;
  *puVar2 = 0xc00;
  *ppcVar1 = camlUnix__190;
  *(undefined **)(uVar3 - 8) = &camlUnix__191;
  *(undefined4 *)(uVar3 - 4) = param_1;
  caml_c_call(camlUnix__189,ppcVar1);
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



int __regparm3 camlUnix__safe_dup_1894(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = caml_c_call(param_1,param_1);
  if (6 < iVar1) {
    return iVar1;
  }
  iVar2 = camlUnix__safe_dup_1894(param_1,iVar1);
  caml_c_call(iVar1);
  return iVar2;
}



undefined4 camlUnix__safe_close_1898(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0804d0f0();
  if (*piVar1 == camlUnix) {
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void __regparm3 FUN_0804d0f0(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  caml_c_call(param_1);
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



void __regparm3 camlUnix__perform_redirections_1900(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = camlUnix__safe_dup_1894(param_1);
  uVar2 = camlUnix__safe_dup_1894();
  uVar3 = camlUnix__safe_dup_1894();
  camlUnix__safe_close_1898();
  camlUnix__safe_close_1898();
  camlUnix__safe_close_1898();
  caml_c_call(uVar1,1);
  caml_c_call(uVar1);
  caml_c_call(uVar2,3);
  caml_c_call(uVar2);
  caml_c_call(uVar3,5);
  caml_c_call(uVar3);
  return;
}



void __regparm3
camlUnix__create_process_1907(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = caml_c_call(1,param_3,param_2);
  if (iVar1 != 1) {
    return;
  }
  FUN_0804d240();
  camlPervasives__exit_1326();
  return;
}



void FUN_0804d240(void)

{
  undefined4 param_4;
  undefined4 param_5;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  camlUnix__perform_redirections_1900();
  caml_c_call(param_5,param_4);
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



void __regparm3 camlUnix__create_process_env_1914(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = caml_c_call(1,param_2);
  if (iVar1 != 1) {
    return;
  }
  FUN_0804d2f0();
  camlPervasives__exit_1326();
  return;
}



void FUN_0804d2f0(void)

{
  undefined4 param_4;
  undefined4 param_5;
  undefined4 param_6;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  camlUnix__perform_redirections_1900();
  caml_c_call(param_6,param_5,param_4);
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



void __regparm3 camlUnix__open_proc_1949(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  
  iVar1 = camlList__for_all_1137();
  uVar3 = extraout_var;
  iVar2 = caml_c_call(1,iVar1,extraout_var);
  if (iVar2 != 1) {
    camlHashtbl__add_1074();
    return;
  }
  if (param_3 != 1) {
    caml_c_call(param_3,1);
    caml_c_call(param_3,iVar1,uVar3);
  }
  if (param_2 != 3) {
    caml_c_call(param_2,3);
    caml_c_call(param_2,iVar1,uVar3);
  }
  if (iVar1 == 1) {
    camlList__iter_1074();
  }
  FUN_0804d420();
  camlPervasives__exit_1326();
  return;
}



void FUN_0804d420(undefined4 param_1,undefined4 param_2)

{
  char **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar1 = (char **)(caml_young_ptr - 0xc);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar4;
  *puVar2 = 0xc00;
  *ppcVar1 = camlUnix__186;
  *(undefined **)(uVar3 - 8) = &camlUnix__187;
  *(undefined4 *)(uVar3 - 4) = param_2;
  caml_c_call(camlUnix__185,ppcVar1);
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



undefined4 camlUnix__open_process_in_1957(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 uVar7;
  undefined4 extraout_var;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar3 = (undefined4 *)caml_c_call(1);
  uVar9 = puVar3[1];
  uVar7 = *puVar3;
  uVar8 = extraout_var;
  uVar4 = caml_c_call(uVar7,uVar7,extraout_var,uVar9);
  uVar6 = uVar4;
  while( true ) {
    uVar2 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
    uVar6 = extraout_ECX;
  }
  puVar3 = (undefined4 *)(caml_young_ptr - 0x10);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar5;
  *puVar1 = 0x800;
  *puVar3 = uVar7;
  *(undefined4 *)(uVar2 - 0xc) = 1;
  *(undefined4 *)(uVar2 - 8) = 0x401;
  *(undefined4 *)(uVar2 - 4) = uVar6;
  camlUnix__open_proc_1949();
  caml_c_call(uVar9,uVar7,uVar8);
  return uVar4;
}



undefined4 camlUnix__open_process_out_1962(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 uVar7;
  undefined4 extraout_var;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar3 = (undefined4 *)caml_c_call(1);
  uVar7 = puVar3[1];
  uVar9 = *puVar3;
  uVar8 = extraout_var;
  uVar4 = caml_c_call(uVar7,uVar7,extraout_var,uVar9);
  uVar6 = uVar4;
  while( true ) {
    uVar2 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
    uVar6 = extraout_ECX;
  }
  puVar3 = (undefined4 *)(caml_young_ptr - 0x10);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar5;
  *puVar1 = 0x800;
  *puVar3 = uVar7;
  *(undefined4 *)(uVar2 - 0xc) = 1;
  *(undefined4 *)(uVar2 - 8) = 0x402;
  *(undefined4 *)(uVar2 - 4) = uVar6;
  camlUnix__open_proc_1949();
  caml_c_call(uVar9,uVar7,uVar8);
  return uVar4;
}



void camlUnix__open_process_1967(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 extraout_ECX;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 extraout_var;
  undefined4 uVar11;
  
  puVar4 = (undefined4 *)caml_c_call(1);
  uVar2 = puVar4[1];
  uVar10 = *puVar4;
  uVar8 = extraout_var;
  puVar4 = (undefined4 *)caml_c_call(1);
  uVar9 = puVar4[1];
  uVar11 = *puVar4;
  uVar5 = caml_c_call(uVar10,uVar9,uVar10,uVar8,uVar11);
  uVar6 = caml_c_call(uVar9);
  uVar8 = uVar6;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar7 = caml_young_ptr - 0x24;
    if (caml_young_limit <= uVar7) break;
    caml_young_ptr = uVar7;
    caml_call_gc();
    uVar8 = extraout_ECX;
  }
  puVar4 = (undefined4 *)(caml_young_ptr - 0x20);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x24);
  caml_young_ptr = uVar7;
  *puVar1 = 0x800;
  *puVar4 = uVar9;
  *(undefined4 *)(uVar3 - 0x1c) = 1;
  *(undefined4 *)(uVar3 - 0x18) = 0x800;
  *(undefined4 *)(uVar3 - 0x14) = uVar10;
  *(undefined4 **)(uVar3 - 0x10) = puVar4;
  *(undefined4 *)(uVar3 - 0xc) = 0x800;
  *(undefined4 *)(uVar3 - 8) = uVar5;
  *(undefined4 *)(uVar3 - 4) = uVar8;
  camlUnix__open_proc_1949((undefined4 *)(uVar3 - 0x14));
  caml_c_call(uVar11);
  caml_c_call(uVar2);
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar7 = caml_young_ptr - 0xc;
    if (caml_young_limit <= uVar7) break;
    caml_young_ptr = uVar7;
    caml_call_gc();
  }
  puVar4 = (undefined4 *)(caml_young_ptr - 8);
  puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar7;
  *puVar1 = 0x800;
  *puVar4 = uVar5;
  *(undefined4 *)(uVar3 - 4) = uVar6;
  return;
}



void __regparm3 camlUnix__open_proc_full_1975(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar1 = camlList__for_all_1137(param_2);
  iVar2 = caml_c_call(1);
  if (iVar2 != 1) {
    camlHashtbl__add_1074();
    return;
  }
  caml_c_call(param_2,1);
  caml_c_call(param_2);
  caml_c_call(unaff_ESI,3);
  caml_c_call(unaff_ESI);
  caml_c_call(unaff_EDI,5);
  caml_c_call(unaff_EDI);
  if (iVar1 == 1) {
    camlList__iter_1074();
  }
  FUN_0804d810();
  camlPervasives__exit_1326();
  return;
}



void FUN_0804d810(void)

{
  char **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 param_5;
  undefined4 param_6;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar1 = (char **)(caml_young_ptr - 0xc);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar4;
  *puVar2 = 0xc00;
  *ppcVar1 = camlUnix__182;
  *(undefined **)(uVar3 - 8) = &camlUnix__183;
  *(undefined4 *)(uVar3 - 4) = param_5;
  caml_c_call(camlUnix__181,ppcVar1,param_6);
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



void camlUnix__open_process_full_1985(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  
  puVar9 = (undefined4 *)caml_c_call(1);
  uVar2 = puVar9[1];
  uVar3 = *puVar9;
  puVar9 = (undefined4 *)caml_c_call(1);
  uVar4 = puVar9[1];
  uVar5 = *puVar9;
  puVar9 = (undefined4 *)caml_c_call(1);
  uVar6 = puVar9[1];
  uVar7 = *puVar9;
  uVar10 = caml_c_call(uVar3);
  uVar11 = caml_c_call(uVar4);
  uVar12 = caml_c_call(uVar7);
  while( true ) {
    uVar8 = caml_young_ptr;
    uVar13 = caml_young_ptr - 0x34;
    if (caml_young_limit <= uVar13) break;
    caml_young_ptr = uVar13;
    caml_call_gc();
  }
  puVar9 = (undefined4 *)(caml_young_ptr - 0x30);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x34);
  caml_young_ptr = uVar13;
  *puVar1 = 0x800;
  *puVar9 = uVar7;
  *(undefined4 *)(uVar8 - 0x2c) = 1;
  *(undefined4 *)(uVar8 - 0x28) = 0x800;
  *(undefined4 *)(uVar8 - 0x24) = uVar4;
  *(undefined4 **)(uVar8 - 0x20) = puVar9;
  caml_extra_params = (undefined4 *)(uVar8 - 0x18);
  *(undefined4 *)(uVar8 - 0x1c) = 0x800;
  *caml_extra_params = uVar3;
  *(undefined4 **)(uVar8 - 0x14) = (undefined4 *)(uVar8 - 0x24);
  *(undefined4 *)(uVar8 - 0x10) = 0xc03;
  *(undefined4 *)(uVar8 - 0xc) = uVar10;
  *(undefined4 *)(uVar8 - 8) = uVar11;
  *(undefined4 *)(uVar8 - 4) = uVar12;
  camlUnix__open_proc_full_1975();
  caml_c_call(uVar5);
  caml_c_call(uVar2);
  caml_c_call(uVar6);
  while( true ) {
    uVar8 = caml_young_ptr;
    uVar13 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar13) break;
    caml_young_ptr = uVar13;
    caml_call_gc();
  }
  puVar9 = (undefined4 *)(caml_young_ptr - 0xc);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar13;
  *puVar1 = 0xc00;
  *puVar9 = uVar10;
  *(undefined4 *)(uVar8 - 8) = uVar11;
  *(undefined4 *)(uVar8 - 4) = uVar12;
  return;
}



void __regparm3 camlUnix__find_proc_id_1997(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = (int *)FUN_0804dab0();
  if ((undefined **)*piVar4 == &caml_exn_Not_found) {
    while( true ) {
      uVar3 = caml_young_ptr;
      uVar5 = caml_young_ptr - 0x14;
      if (caml_young_limit <= uVar5) break;
      caml_young_ptr = uVar5;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 0x10);
    puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
    caml_young_ptr = uVar5;
    *puVar2 = 0x1000;
    *puVar1 = camlUnix;
    *(undefined4 *)(uVar3 - 0xc) = 7;
    *(undefined4 *)(uVar3 - 8) = param_1;
    *(undefined **)(uVar3 - 4) = &camlUnix__180;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined4 FUN_0804dab0(void)

{
  undefined4 uVar1;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  uVar1 = camlHashtbl__find_1093();
  camlHashtbl__remove_1080();
  caml_exception_pointer = (undefined4 *)uStack_4;
  return uVar1;
}



void __regparm3 camlUnix__waitpid_non_intr_2001(undefined4 param_1)

{
  int *piVar1;
  
  do {
    piVar1 = (int *)FUN_0804db40(param_1);
    if ((*piVar1 != camlUnix) || ((piVar1[1] & 1U) == 0)) break;
  } while (piVar1[1] == 0x17);
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void __regparm3 FUN_0804db40(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  caml_c_call(1,param_1);
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



undefined4 __regparm3 camlUnix__close_process_in_2003(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  
  uVar6 = param_1;
  while( true ) {
    uVar3 = caml_young_ptr - 8;
    if (caml_young_limit <= uVar3) break;
    caml_young_ptr = uVar3;
    caml_call_gc(uVar6);
    param_1 = extraout_ECX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 4);
  puVar2 = (undefined4 *)(caml_young_ptr - 8);
  caml_young_ptr = uVar3;
  *puVar2 = 0x401;
  *puVar1 = param_1;
  uVar4 = camlUnix__find_proc_id_1997();
  caml_c_call(uVar6,uVar6,uVar4);
  iVar5 = camlUnix__waitpid_non_intr_2001();
  return *(undefined4 *)(iVar5 + 4);
}



undefined4 __regparm3 camlUnix__close_process_out_2006(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  
  uVar6 = param_1;
  while( true ) {
    uVar3 = caml_young_ptr - 8;
    if (caml_young_limit <= uVar3) break;
    caml_young_ptr = uVar3;
    caml_call_gc(uVar6);
    param_1 = extraout_ECX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 4);
  puVar2 = (undefined4 *)(caml_young_ptr - 8);
  caml_young_ptr = uVar3;
  *puVar2 = 0x402;
  *puVar1 = param_1;
  uVar4 = camlUnix__find_proc_id_1997();
  camlPervasives__close_out_1209(uVar6,uVar4);
  iVar5 = camlUnix__waitpid_non_intr_2001();
  return *(undefined4 *)(iVar5 + 4);
}



undefined4 __regparm3 camlUnix__close_process_2009(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 uVar8;
  
  uVar8 = param_1;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0xc;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc(uVar8);
    param_1 = extraout_ECX;
    unaff_EBX = extraout_EDX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 8);
  puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar4;
  *puVar2 = 0x800;
  *puVar1 = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  uVar5 = camlUnix__find_proc_id_1997();
  caml_c_call(uVar8,uVar8,uVar5);
  piVar6 = (int *)FUN_0804dcb0();
  if ((undefined **)*piVar6 != &caml_exn_Sys_error) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  iVar7 = camlUnix__waitpid_non_intr_2001();
  return *(undefined4 *)(iVar7 + 4);
}



undefined4 FUN_0804dcb0(void)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  camlPervasives__close_out_1209();
  caml_exception_pointer = (undefined4 *)uStack_4;
  iVar1 = camlUnix__waitpid_non_intr_2001();
  return *(undefined4 *)(iVar1 + 4);
}



undefined4 __regparm3
camlUnix__close_process_full_2013(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar8 = param_1;
  uVar9 = param_3;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc(uVar8,uVar9);
    param_3 = extraout_ECX;
    param_1 = extraout_EDX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar4;
  *puVar2 = 0xc03;
  *puVar1 = param_1;
  *(undefined4 *)(uVar3 - 8) = unaff_EBX;
  *(undefined4 *)(uVar3 - 4) = param_3;
  uVar5 = camlUnix__find_proc_id_1997();
  caml_c_call(uVar8,uVar8,uVar9,uVar5);
  piVar6 = (int *)FUN_0804dd70();
  if ((undefined **)*piVar6 != &caml_exn_Sys_error) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  caml_c_call(uVar9,uVar8,uVar9,uVar5);
  iVar7 = camlUnix__waitpid_non_intr_2001();
  return *(undefined4 *)(iVar7 + 4);
}



undefined4 FUN_0804dd70(void)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  camlPervasives__close_out_1209();
  caml_exception_pointer = (undefined4 *)uStack_4;
  uStack_4 = 0x804dd9d;
  caml_c_call();
  iVar1 = camlUnix__waitpid_non_intr_2001();
  return *(undefined4 *)(iVar1 + 4);
}



void __regparm3 camlUnix__open_connection_2018(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = camlUnix__domain_of_sockaddr_1529(param_1);
  uVar1 = caml_c_call(uVar1,1,1);
  uVar2 = FUN_0804de10(param_1,uVar1);
  caml_c_call(uVar1,uVar2);
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void __regparm1 FUN_0804de10(undefined4 param_1_00,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  caml_c_call(param_1_00,param_1);
  camlUnix__try_set_close_on_exec_1366();
  uVar4 = caml_c_call(param_2);
  uVar5 = caml_c_call(param_2);
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar6 = caml_young_ptr - 0xc;
    if (caml_young_limit <= uVar6) break;
    caml_young_ptr = uVar6;
    caml_call_gc();
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 8);
  puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar6;
  *puVar2 = 0x800;
  *puVar1 = uVar5;
  *(undefined4 *)(uVar3 - 4) = uVar4;
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



void __regparm3 camlUnix__shutdown_connection_2022(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = caml_c_call(param_1);
  caml_c_call(uVar1,3);
  return;
}



void __regparm3 camlUnix__accept_non_intr_2024(undefined4 param_1)

{
  int *piVar1;
  
  do {
    piVar1 = (int *)FUN_0804df00(param_1);
    if ((*piVar1 != camlUnix) || ((piVar1[1] & 1U) == 0)) break;
  } while (piVar1[1] == 0x17);
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void __regparm3 FUN_0804df00(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  caml_c_call(param_1);
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



void camlUnix__establish_server_2026(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_EBX;
  
  uVar2 = camlUnix__domain_of_sockaddr_1529();
  uVar2 = caml_c_call(uVar2,1,1);
  camlUnix__setsockopt_1646();
  caml_c_call(uVar2,unaff_EBX);
  caml_c_call(uVar2,0xb);
  do {
    while( true ) {
      puVar3 = (undefined4 *)camlUnix__accept_non_intr_2024();
      uVar1 = *puVar3;
      iVar4 = caml_c_call(1);
      if (iVar4 == 1) break;
      caml_c_call(uVar1,iVar4);
      camlUnix__waitpid_non_intr_2001();
    }
    iVar5 = caml_c_call(1,1);
    if (iVar5 != 1) {
      camlPervasives__exit_1326();
    }
    caml_c_call(uVar2,iVar4);
    camlUnix__try_set_close_on_exec_1366();
    uVar6 = caml_c_call(uVar1);
    caml_c_call(uVar1,uVar6);
    caml_apply2();
    camlPervasives__exit_1326();
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 camlUnix__entry(void)

{
  undefined4 *puVar1;
  int *piVar2;
  
  DAT_08072f84 = &camlUnix__175;
  DAT_08072f80 = &camlUnix__174;
  DAT_08072f7c = &camlUnix__173;
  DAT_08072f78 = &camlUnix__172;
  DAT_08072f74 = &camlUnix__171;
  DAT_08072f70 = &camlUnix__170;
  DAT_08072f6c = &camlUnix__169;
  DAT_08072f60 = &camlUnix__168;
  DAT_08072f5c = &camlUnix__167;
  DAT_08072f58 = &camlUnix__166;
  DAT_08072f54 = &camlUnix__165;
  DAT_08072f50 = &camlUnix__164;
  DAT_08072f4c = &camlUnix__163;
  DAT_08072f48 = &camlUnix__162;
  DAT_08072f04 = &camlUnix__161;
  DAT_08072f00 = &camlUnix__160;
  DAT_08072efc = &camlUnix__159;
  DAT_08072ef8 = &camlUnix__158;
  DAT_08072ef4 = &camlUnix__157;
  DAT_08072ef0 = &camlUnix__156;
  DAT_08072eec = &camlUnix__155;
  DAT_08072ee8 = &camlUnix__154;
  DAT_08072ee0 = &camlUnix__153;
  DAT_08072ecc = &camlUnix__152;
  DAT_08072ec8 = &camlUnix__151;
  DAT_08072ec4 = &camlUnix__150;
  DAT_08072ec0 = &camlUnix__149;
  DAT_08072ebc = &camlUnix__148;
  DAT_08072eb8 = &camlUnix__147;
  DAT_08072eb4 = &camlUnix__146;
  DAT_08072eb0 = &camlUnix__145;
  DAT_08072eac = &camlUnix__144;
  DAT_08072ea8 = &camlUnix__143;
  DAT_08072ea4 = &camlUnix__142;
  DAT_08072ea0 = &camlUnix__141;
  DAT_08072e9c = &camlUnix__140;
  DAT_08072e98 = &camlUnix__139;
  DAT_08072e94 = &camlUnix__138;
  DAT_08072e90 = &camlUnix__137;
  DAT_08072e8c = &camlUnix__136;
  DAT_08072e88 = &camlUnix__135;
  DAT_08072e84 = &camlUnix__134;
  DAT_08072e80 = &camlUnix__133;
  DAT_08072e7c = &camlUnix__132;
  DAT_08072e78 = &camlUnix__131;
  DAT_08072e74 = &camlUnix__130;
  DAT_08072e70 = &camlUnix__129;
  DAT_08072e6c = &camlUnix__128;
  DAT_08072e68 = &camlUnix__127;
  DAT_08072e64 = &camlUnix__126;
  DAT_08072e5c = &camlUnix__125;
  DAT_08072e58 = &camlUnix__124;
  DAT_08072e54 = &camlUnix__123;
  DAT_08072e50 = &camlUnix__122;
  DAT_08072e4c = &camlUnix__121;
  DAT_08072e48 = &camlUnix__120;
  DAT_08072e44 = &camlUnix__119;
  DAT_08072e40 = &camlUnix__118;
  DAT_08072e14 = &camlUnix__117;
  DAT_08072e10 = &camlUnix__116;
  DAT_08072e0c = &camlUnix__115;
  DAT_08072e08 = &camlUnix__114;
  DAT_08072e04 = &camlUnix__113;
  DAT_08072e00 = &camlUnix__112;
  DAT_08072dfc = &camlUnix__111;
  DAT_08072df8 = &camlUnix__110;
  DAT_08072df4 = &camlUnix__109;
  DAT_08072df0 = &camlUnix__108;
  DAT_08072dec = &camlUnix__107;
  DAT_08072de8 = &camlUnix__106;
  DAT_08072de4 = &camlUnix__105;
  DAT_08072de0 = &camlUnix__104;
  DAT_08072ddc = &camlUnix__103;
  DAT_08072dd8 = &camlUnix__102;
  DAT_08072dd4 = &camlUnix__101;
  DAT_08072dd0 = &camlUnix__100;
  DAT_08072dcc = &camlUnix__99;
  DAT_08072dc8 = &camlUnix__98;
  DAT_08072dc4 = &camlUnix__97;
  DAT_08072dc0 = &camlUnix__96;
  DAT_08072dbc = &camlUnix__95;
  DAT_08072db8 = &camlUnix__94;
  DAT_08072db4 = &camlUnix__93;
  DAT_08072db0 = &camlUnix__92;
  DAT_08072da8 = &camlUnix__91;
  DAT_08072da4 = &camlUnix__90;
  DAT_08072da0 = &camlUnix__89;
  DAT_08072d9c = &camlUnix__88;
  DAT_08072d98 = &camlUnix__87;
  DAT_08072d94 = &camlUnix__86;
  DAT_08072d90 = &camlUnix__85;
  DAT_08072d8c = &camlUnix__84;
  DAT_08072d88 = &camlUnix__83;
  DAT_08072d84 = &camlUnix__82;
  DAT_08072d80 = &camlUnix__81;
  DAT_08072d70 = &camlUnix__80;
  DAT_08072d6c = &camlUnix__79;
  DAT_08072d5c = &camlUnix__78;
  DAT_08072d58 = &camlUnix__77;
  DAT_08072d54 = &camlUnix__76;
  DAT_08072d4c = &camlUnix__75;
  DAT_08072d48 = &camlUnix__74;
  DAT_08072d44 = &camlUnix__73;
  DAT_08072d40 = &camlUnix__72;
  DAT_08072d3c = &camlUnix__71;
  DAT_08072d38 = &camlUnix__70;
  DAT_08072d34 = &camlUnix__69;
  DAT_08072d30 = &camlUnix__68;
  DAT_08072d2c = &camlUnix__67;
  DAT_08072d28 = &camlUnix__66;
  DAT_08072d20 = &camlUnix__65;
  puVar1 = (undefined4 *)caml_allocN();
  camlUnix = (char **)(puVar1 + 1);
  *puVar1 = 0x400;
  *camlUnix = camlUnix__64;
  puVar1[2] = 0x1000;
  puVar1[3] = camlUnix;
  puVar1[4] = 1;
  puVar1[5] = &camlUnix__62;
  puVar1[6] = &camlUnix__63;
  camlCallback__register_exception_1034();
  DAT_08072d24 = &camlUnix__60;
  _DAT_08072d60 = 1;
  _DAT_08072d64 = 3;
  _DAT_08072d68 = 5;
  DAT_08072d74 = &camlUnix__59;
  DAT_08072d78 = &camlUnix__58;
  DAT_08072d7c = &camlUnix__57;
  puVar1 = (undefined4 *)caml_allocN();
  DAT_08072dac = puVar1 + 1;
  *puVar1 = 0x1800;
  *DAT_08072dac = &camlUnix__50;
  puVar1[2] = &camlUnix__51;
  puVar1[3] = &camlUnix__52;
  puVar1[4] = &camlUnix__53;
  puVar1[5] = &camlUnix__54;
  puVar1[6] = &camlUnix__55;
  DAT_08072f88 = &camlUnix__49;
  DAT_08072e60 = &camlUnix__48;
  _DAT_08072f8c = &camlUnix__47;
  DAT_08072ed0 = caml_c_call(camlUnix__46);
  DAT_08072ed4 = caml_c_call(camlUnix__45);
  piVar2 = (int *)FUN_0804e60a();
  if ((undefined **)*piVar2 != &caml_exn_Failure) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  DAT_08072ed8 = DAT_08072ed0;
  piVar2 = (int *)FUN_0804e652();
  if ((undefined **)*piVar2 == &caml_exn_Failure) {
    DAT_08072edc = DAT_08072ed4;
    DAT_08072ee4 = &camlUnix__42;
    DAT_08072f08 = &camlUnix__41;
    DAT_08072f0c = &camlUnix__40;
    DAT_08072f10 = &camlUnix__39;
    DAT_08072f14 = &camlUnix__38;
    puVar1 = (undefined4 *)caml_allocN();
    _DAT_08072f90 = puVar1 + 1;
    *puVar1 = 0x1c00;
    *_DAT_08072f90 = 1;
    puVar1[2] = 3;
    puVar1[3] = 5;
    puVar1[4] = 7;
    puVar1[5] = 9;
    puVar1[6] = &camlUnix__36;
    puVar1[7] = &camlUnix__37;
    DAT_08072f18 = &camlUnix__35;
    DAT_08072f1c = &camlUnix__34;
    DAT_08072f20 = &camlUnix__33;
    DAT_08072f24 = &camlUnix__32;
    DAT_08072f28 = &camlUnix__31;
    DAT_08072f2c = &camlUnix__30;
    DAT_08072f30 = &camlUnix__29;
    DAT_08072f34 = &camlUnix__28;
    DAT_08072f38 = &camlUnix__27;
    _DAT_08072f94 = &camlUnix__26;
    DAT_08072f64 = &camlUnix__25;
    _DAT_08072f98 = &camlUnix__24;
    DAT_08072f68 = &camlUnix__23;
    DAT_08072d50 = &camlUnix__22;
    _DAT_08072f9c = &camlUnix__21;
    _DAT_08072fa0 = &camlUnix__20;
    _DAT_08072fa4 = &camlUnix__19;
    DAT_08072e18 = &camlUnix__18;
    DAT_08072e1c = &camlUnix__17;
    DAT_08072fa8 = camlHashtbl__create_1051();
    _DAT_08072fac = &camlUnix__16;
    DAT_08072e20 = &camlUnix__15;
    DAT_08072e24 = &camlUnix__14;
    DAT_08072e28 = &camlUnix__13;
    _DAT_08072fb0 = &camlUnix__12;
    DAT_08072e2c = &camlUnix__11;
    _DAT_08072fb4 = &camlUnix__10;
    _DAT_08072fb8 = &camlUnix__9;
    DAT_08072e30 = &camlUnix__8;
    DAT_08072e34 = &camlUnix__7;
    DAT_08072e38 = &camlUnix__6;
    DAT_08072e3c = &camlUnix__5;
    DAT_08072f3c = &camlUnix__4;
    DAT_08072f40 = &camlUnix__3;
    _DAT_08072fbc = &camlUnix__2;
    DAT_08072f44 = &camlUnix__1;
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0804e60a(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  DAT_08072ed8 = caml_c_call(&camlUnix__44);
  caml_exception_pointer = (undefined4 *)uStack_4;
  piVar1 = (int *)FUN_0804e652();
  if ((undefined **)*piVar1 == &caml_exn_Failure) {
    DAT_08072edc = DAT_08072ed4;
    DAT_08072ee4 = &camlUnix__42;
    DAT_08072f08 = &camlUnix__41;
    DAT_08072f0c = &camlUnix__40;
    DAT_08072f10 = &camlUnix__39;
    DAT_08072f14 = &camlUnix__38;
    puVar2 = (undefined4 *)caml_allocN();
    _DAT_08072f90 = puVar2 + 1;
    *puVar2 = 0x1c00;
    *_DAT_08072f90 = 1;
    puVar2[2] = 3;
    puVar2[3] = 5;
    puVar2[4] = 7;
    puVar2[5] = 9;
    puVar2[6] = &camlUnix__36;
    puVar2[7] = &camlUnix__37;
    DAT_08072f18 = &camlUnix__35;
    DAT_08072f1c = &camlUnix__34;
    DAT_08072f20 = &camlUnix__33;
    DAT_08072f24 = &camlUnix__32;
    DAT_08072f28 = &camlUnix__31;
    DAT_08072f2c = &camlUnix__30;
    DAT_08072f30 = &camlUnix__29;
    DAT_08072f34 = &camlUnix__28;
    DAT_08072f38 = &camlUnix__27;
    _DAT_08072f94 = &camlUnix__26;
    DAT_08072f64 = &camlUnix__25;
    _DAT_08072f98 = &camlUnix__24;
    DAT_08072f68 = &camlUnix__23;
    DAT_08072d50 = &camlUnix__22;
    _DAT_08072f9c = &camlUnix__21;
    _DAT_08072fa0 = &camlUnix__20;
    _DAT_08072fa4 = &camlUnix__19;
    DAT_08072e18 = &camlUnix__18;
    DAT_08072e1c = &camlUnix__17;
    DAT_08072fa8 = camlHashtbl__create_1051();
    _DAT_08072fac = &camlUnix__16;
    DAT_08072e20 = &camlUnix__15;
    DAT_08072e24 = &camlUnix__14;
    DAT_08072e28 = &camlUnix__13;
    _DAT_08072fb0 = &camlUnix__12;
    DAT_08072e2c = &camlUnix__11;
    _DAT_08072fb4 = &camlUnix__10;
    _DAT_08072fb8 = &camlUnix__9;
    DAT_08072e30 = &camlUnix__8;
    DAT_08072e34 = &camlUnix__7;
    DAT_08072e38 = &camlUnix__6;
    DAT_08072e3c = &camlUnix__5;
    DAT_08072f3c = &camlUnix__4;
    DAT_08072f40 = &camlUnix__3;
    _DAT_08072fbc = &camlUnix__2;
    DAT_08072f44 = &camlUnix__1;
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0804e652(void)

{
  undefined4 *puVar1;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  DAT_08072edc = caml_c_call(&camlUnix__43);
  caml_exception_pointer = (undefined4 *)uStack_4;
  DAT_08072ee4 = &camlUnix__42;
  DAT_08072f08 = &camlUnix__41;
  DAT_08072f0c = &camlUnix__40;
  DAT_08072f10 = &camlUnix__39;
  DAT_08072f14 = &camlUnix__38;
  puVar1 = (undefined4 *)caml_allocN();
  _DAT_08072f90 = puVar1 + 1;
  *puVar1 = 0x1c00;
  *_DAT_08072f90 = 1;
  puVar1[2] = 3;
  puVar1[3] = 5;
  puVar1[4] = 7;
  puVar1[5] = 9;
  puVar1[6] = &camlUnix__36;
  puVar1[7] = &camlUnix__37;
  DAT_08072f18 = &camlUnix__35;
  DAT_08072f1c = &camlUnix__34;
  DAT_08072f20 = &camlUnix__33;
  DAT_08072f24 = &camlUnix__32;
  DAT_08072f28 = &camlUnix__31;
  DAT_08072f2c = &camlUnix__30;
  DAT_08072f30 = &camlUnix__29;
  DAT_08072f34 = &camlUnix__28;
  DAT_08072f38 = &camlUnix__27;
  _DAT_08072f94 = &camlUnix__26;
  DAT_08072f64 = &camlUnix__25;
  _DAT_08072f98 = &camlUnix__24;
  DAT_08072f68 = &camlUnix__23;
  DAT_08072d50 = &camlUnix__22;
  _DAT_08072f9c = &camlUnix__21;
  _DAT_08072fa0 = &camlUnix__20;
  _DAT_08072fa4 = &camlUnix__19;
  DAT_08072e18 = &camlUnix__18;
  DAT_08072e1c = &camlUnix__17;
  DAT_08072fa8 = camlHashtbl__create_1051();
  _DAT_08072fac = &camlUnix__16;
  DAT_08072e20 = &camlUnix__15;
  DAT_08072e24 = &camlUnix__14;
  DAT_08072e28 = &camlUnix__13;
  _DAT_08072fb0 = &camlUnix__12;
  DAT_08072e2c = &camlUnix__11;
  _DAT_08072fb4 = &camlUnix__10;
  _DAT_08072fb8 = &camlUnix__9;
  DAT_08072e30 = &camlUnix__8;
  DAT_08072e34 = &camlUnix__7;
  DAT_08072e38 = &camlUnix__6;
  DAT_08072e3c = &camlUnix__5;
  DAT_08072f3c = &camlUnix__4;
  DAT_08072f40 = &camlUnix__3;
  _DAT_08072fbc = &camlUnix__2;
  DAT_08072f44 = &camlUnix__1;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 camlUnix__code_end(void)

{
  _camlUnixLabels = camlUnix;
  _DAT_08075294 = DAT_08072d20;
  _DAT_08075298 = DAT_08072d24;
  _DAT_0807529c = DAT_08072d28;
  _DAT_080752a0 = DAT_08072d2c;
  _DAT_080752a4 = DAT_08072d30;
  _DAT_080752a8 = DAT_08072d34;
  _DAT_080752ac = DAT_08072d38;
  _DAT_080752b0 = DAT_08072d3c;
  _DAT_080752b4 = DAT_08072d40;
  _DAT_080752b8 = DAT_08072d44;
  _DAT_080752bc = DAT_08072d48;
  _DAT_080752c0 = DAT_08072d4c;
  _DAT_080752c4 = DAT_08072d50;
  _DAT_080752c8 = DAT_08072d54;
  _DAT_080752cc = DAT_08072d58;
  _DAT_080752d0 = DAT_08072d5c;
  _DAT_080752d4 = 1;
  _DAT_080752d8 = 3;
  _DAT_080752dc = 5;
  _DAT_080752e0 = DAT_08072d6c;
  _DAT_080752e4 = DAT_08072d70;
  _DAT_080752e8 = DAT_08072d74;
  _DAT_080752ec = DAT_08072d78;
  _DAT_080752f0 = DAT_08072d7c;
  _DAT_080752f4 = DAT_08072d80;
  _DAT_080752f8 = DAT_08072d84;
  _DAT_080752fc = DAT_08072d88;
  _DAT_08075300 = DAT_08072d8c;
  _DAT_08075304 = DAT_08072d90;
  _DAT_08075308 = DAT_08072d94;
  _DAT_0807530c = DAT_08072d98;
  _DAT_08075310 = DAT_08072d9c;
  _DAT_08075314 = DAT_08072da0;
  _DAT_08075318 = DAT_08072da4;
  _DAT_0807531c = DAT_08072da8;
  _DAT_08075320 = DAT_08072dac;
  _DAT_08075324 = DAT_08072db0;
  _DAT_08075328 = DAT_08072db4;
  _DAT_0807532c = DAT_08072db8;
  _DAT_08075330 = DAT_08072dbc;
  _DAT_08075334 = DAT_08072dc0;
  _DAT_08075338 = DAT_08072dc4;
  _DAT_0807533c = DAT_08072dc8;
  _DAT_08075340 = DAT_08072dcc;
  _DAT_08075344 = DAT_08072dd0;
  _DAT_08075348 = DAT_08072dd4;
  _DAT_0807534c = DAT_08072dd8;
  _DAT_08075350 = DAT_08072ddc;
  _DAT_08075354 = DAT_08072de0;
  _DAT_08075358 = DAT_08072de4;
  _DAT_0807535c = DAT_08072de8;
  _DAT_08075360 = DAT_08072dec;
  _DAT_08075364 = DAT_08072df0;
  _DAT_08075368 = DAT_08072df4;
  _DAT_0807536c = DAT_08072df8;
  _DAT_08075370 = DAT_08072dfc;
  _DAT_08075374 = DAT_08072e00;
  _DAT_08075378 = DAT_08072e04;
  _DAT_0807537c = DAT_08072e08;
  _DAT_08075380 = DAT_08072e0c;
  _DAT_08075384 = DAT_08072e10;
  _DAT_08075388 = DAT_08072e14;
  _DAT_0807538c = DAT_08072e18;
  _DAT_08075390 = DAT_08072e1c;
  _DAT_08075394 = DAT_08072e20;
  _DAT_08075398 = DAT_08072e24;
  _DAT_0807539c = DAT_08072e28;
  _DAT_080753a0 = DAT_08072e2c;
  _DAT_080753a4 = DAT_08072e30;
  _DAT_080753a8 = DAT_08072e34;
  _DAT_080753ac = DAT_08072e38;
  _DAT_080753b0 = DAT_08072e3c;
  _DAT_080753b4 = DAT_08072e40;
  _DAT_080753b8 = DAT_08072e44;
  _DAT_080753bc = DAT_08072e48;
  _DAT_080753c0 = DAT_08072e4c;
  _DAT_080753c4 = DAT_08072e50;
  _DAT_080753c8 = DAT_08072e54;
  _DAT_080753cc = DAT_08072e58;
  _DAT_080753d0 = DAT_08072e5c;
  _DAT_080753d4 = DAT_08072e60;
  _DAT_080753d8 = DAT_08072e64;
  _DAT_080753dc = DAT_08072e68;
  _DAT_080753e0 = DAT_08072e6c;
  _DAT_080753e4 = DAT_08072e70;
  _DAT_080753e8 = DAT_08072e74;
  _DAT_080753ec = DAT_08072e78;
  _DAT_080753f0 = DAT_08072e7c;
  _DAT_080753f4 = DAT_08072e80;
  _DAT_080753f8 = DAT_08072e84;
  _DAT_080753fc = DAT_08072e88;
  _DAT_08075400 = DAT_08072e8c;
  _DAT_08075404 = DAT_08072e90;
  _DAT_08075408 = DAT_08072e94;
  _DAT_0807540c = DAT_08072e98;
  _DAT_08075410 = DAT_08072e9c;
  _DAT_08075414 = DAT_08072ea0;
  _DAT_08075418 = DAT_08072ea4;
  _DAT_0807541c = DAT_08072ea8;
  _DAT_08075420 = DAT_08072eac;
  _DAT_08075424 = DAT_08072eb0;
  _DAT_08075428 = DAT_08072eb4;
  _DAT_0807542c = DAT_08072eb8;
  _DAT_08075430 = DAT_08072ebc;
  _DAT_08075434 = DAT_08072ec0;
  _DAT_08075438 = DAT_08072ec4;
  _DAT_0807543c = DAT_08072ec8;
  _DAT_08075440 = DAT_08072ecc;
  _DAT_08075444 = DAT_08072ed0;
  _DAT_08075448 = DAT_08072ed4;
  _DAT_0807544c = DAT_08072ed8;
  _DAT_08075450 = DAT_08072edc;
  _DAT_08075454 = DAT_08072ee0;
  _DAT_08075458 = DAT_08072ee4;
  _DAT_0807545c = DAT_08072ee8;
  _DAT_08075460 = DAT_08072eec;
  _DAT_08075464 = DAT_08072ef0;
  _DAT_08075468 = DAT_08072ef4;
  _DAT_0807546c = DAT_08072ef8;
  _DAT_08075470 = DAT_08072efc;
  _DAT_08075474 = DAT_08072f00;
  _DAT_08075478 = DAT_08072f04;
  _DAT_0807547c = DAT_08072f08;
  _DAT_08075480 = DAT_08072f0c;
  _DAT_08075484 = DAT_08072f10;
  _DAT_08075488 = DAT_08072f14;
  _DAT_0807548c = DAT_08072f18;
  _DAT_08075490 = DAT_08072f1c;
  _DAT_08075494 = DAT_08072f20;
  _DAT_08075498 = DAT_08072f24;
  _DAT_0807549c = DAT_08072f28;
  _DAT_080754a0 = DAT_08072f2c;
  _DAT_080754a4 = DAT_08072f30;
  _DAT_080754a8 = DAT_08072f34;
  _DAT_080754ac = DAT_08072f38;
  _DAT_080754b0 = DAT_08072f3c;
  _DAT_080754b4 = DAT_08072f40;
  _DAT_080754b8 = DAT_08072f44;
  _DAT_080754bc = DAT_08072f48;
  _DAT_080754c0 = DAT_08072f4c;
  _DAT_080754c4 = DAT_08072f50;
  _DAT_080754c8 = DAT_08072f54;
  _DAT_080754cc = DAT_08072f58;
  _DAT_080754d0 = DAT_08072f5c;
  _DAT_080754d4 = DAT_08072f60;
  _DAT_080754d8 = DAT_08072f64;
  _DAT_080754dc = DAT_08072f68;
  _DAT_080754e0 = DAT_08072f6c;
  _DAT_080754e4 = DAT_08072f70;
  _DAT_080754e8 = DAT_08072f74;
  _DAT_080754ec = DAT_08072f78;
  _DAT_080754f0 = DAT_08072f7c;
  _DAT_080754f4 = DAT_08072f80;
  _DAT_080754f8 = DAT_08072f84;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 camlUnixLabels__entry(void)

{
  _camlUnixLabels = camlUnix;
  _DAT_08075294 = DAT_08072d20;
  _DAT_08075298 = DAT_08072d24;
  _DAT_0807529c = DAT_08072d28;
  _DAT_080752a0 = DAT_08072d2c;
  _DAT_080752a4 = DAT_08072d30;
  _DAT_080752a8 = DAT_08072d34;
  _DAT_080752ac = DAT_08072d38;
  _DAT_080752b0 = DAT_08072d3c;
  _DAT_080752b4 = DAT_08072d40;
  _DAT_080752b8 = DAT_08072d44;
  _DAT_080752bc = DAT_08072d48;
  _DAT_080752c0 = DAT_08072d4c;
  _DAT_080752c4 = DAT_08072d50;
  _DAT_080752c8 = DAT_08072d54;
  _DAT_080752cc = DAT_08072d58;
  _DAT_080752d0 = DAT_08072d5c;
  _DAT_080752d4 = 1;
  _DAT_080752d8 = 3;
  _DAT_080752dc = 5;
  _DAT_080752e0 = DAT_08072d6c;
  _DAT_080752e4 = DAT_08072d70;
  _DAT_080752e8 = DAT_08072d74;
  _DAT_080752ec = DAT_08072d78;
  _DAT_080752f0 = DAT_08072d7c;
  _DAT_080752f4 = DAT_08072d80;
  _DAT_080752f8 = DAT_08072d84;
  _DAT_080752fc = DAT_08072d88;
  _DAT_08075300 = DAT_08072d8c;
  _DAT_08075304 = DAT_08072d90;
  _DAT_08075308 = DAT_08072d94;
  _DAT_0807530c = DAT_08072d98;
  _DAT_08075310 = DAT_08072d9c;
  _DAT_08075314 = DAT_08072da0;
  _DAT_08075318 = DAT_08072da4;
  _DAT_0807531c = DAT_08072da8;
  _DAT_08075320 = DAT_08072dac;
  _DAT_08075324 = DAT_08072db0;
  _DAT_08075328 = DAT_08072db4;
  _DAT_0807532c = DAT_08072db8;
  _DAT_08075330 = DAT_08072dbc;
  _DAT_08075334 = DAT_08072dc0;
  _DAT_08075338 = DAT_08072dc4;
  _DAT_0807533c = DAT_08072dc8;
  _DAT_08075340 = DAT_08072dcc;
  _DAT_08075344 = DAT_08072dd0;
  _DAT_08075348 = DAT_08072dd4;
  _DAT_0807534c = DAT_08072dd8;
  _DAT_08075350 = DAT_08072ddc;
  _DAT_08075354 = DAT_08072de0;
  _DAT_08075358 = DAT_08072de4;
  _DAT_0807535c = DAT_08072de8;
  _DAT_08075360 = DAT_08072dec;
  _DAT_08075364 = DAT_08072df0;
  _DAT_08075368 = DAT_08072df4;
  _DAT_0807536c = DAT_08072df8;
  _DAT_08075370 = DAT_08072dfc;
  _DAT_08075374 = DAT_08072e00;
  _DAT_08075378 = DAT_08072e04;
  _DAT_0807537c = DAT_08072e08;
  _DAT_08075380 = DAT_08072e0c;
  _DAT_08075384 = DAT_08072e10;
  _DAT_08075388 = DAT_08072e14;
  _DAT_0807538c = DAT_08072e18;
  _DAT_08075390 = DAT_08072e1c;
  _DAT_08075394 = DAT_08072e20;
  _DAT_08075398 = DAT_08072e24;
  _DAT_0807539c = DAT_08072e28;
  _DAT_080753a0 = DAT_08072e2c;
  _DAT_080753a4 = DAT_08072e30;
  _DAT_080753a8 = DAT_08072e34;
  _DAT_080753ac = DAT_08072e38;
  _DAT_080753b0 = DAT_08072e3c;
  _DAT_080753b4 = DAT_08072e40;
  _DAT_080753b8 = DAT_08072e44;
  _DAT_080753bc = DAT_08072e48;
  _DAT_080753c0 = DAT_08072e4c;
  _DAT_080753c4 = DAT_08072e50;
  _DAT_080753c8 = DAT_08072e54;
  _DAT_080753cc = DAT_08072e58;
  _DAT_080753d0 = DAT_08072e5c;
  _DAT_080753d4 = DAT_08072e60;
  _DAT_080753d8 = DAT_08072e64;
  _DAT_080753dc = DAT_08072e68;
  _DAT_080753e0 = DAT_08072e6c;
  _DAT_080753e4 = DAT_08072e70;
  _DAT_080753e8 = DAT_08072e74;
  _DAT_080753ec = DAT_08072e78;
  _DAT_080753f0 = DAT_08072e7c;
  _DAT_080753f4 = DAT_08072e80;
  _DAT_080753f8 = DAT_08072e84;
  _DAT_080753fc = DAT_08072e88;
  _DAT_08075400 = DAT_08072e8c;
  _DAT_08075404 = DAT_08072e90;
  _DAT_08075408 = DAT_08072e94;
  _DAT_0807540c = DAT_08072e98;
  _DAT_08075410 = DAT_08072e9c;
  _DAT_08075414 = DAT_08072ea0;
  _DAT_08075418 = DAT_08072ea4;
  _DAT_0807541c = DAT_08072ea8;
  _DAT_08075420 = DAT_08072eac;
  _DAT_08075424 = DAT_08072eb0;
  _DAT_08075428 = DAT_08072eb4;
  _DAT_0807542c = DAT_08072eb8;
  _DAT_08075430 = DAT_08072ebc;
  _DAT_08075434 = DAT_08072ec0;
  _DAT_08075438 = DAT_08072ec4;
  _DAT_0807543c = DAT_08072ec8;
  _DAT_08075440 = DAT_08072ecc;
  _DAT_08075444 = DAT_08072ed0;
  _DAT_08075448 = DAT_08072ed4;
  _DAT_0807544c = DAT_08072ed8;
  _DAT_08075450 = DAT_08072edc;
  _DAT_08075454 = DAT_08072ee0;
  _DAT_08075458 = DAT_08072ee4;
  _DAT_0807545c = DAT_08072ee8;
  _DAT_08075460 = DAT_08072eec;
  _DAT_08075464 = DAT_08072ef0;
  _DAT_08075468 = DAT_08072ef4;
  _DAT_0807546c = DAT_08072ef8;
  _DAT_08075470 = DAT_08072efc;
  _DAT_08075474 = DAT_08072f00;
  _DAT_08075478 = DAT_08072f04;
  _DAT_0807547c = DAT_08072f08;
  _DAT_08075480 = DAT_08072f0c;
  _DAT_08075484 = DAT_08072f10;
  _DAT_08075488 = DAT_08072f14;
  _DAT_0807548c = DAT_08072f18;
  _DAT_08075490 = DAT_08072f1c;
  _DAT_08075494 = DAT_08072f20;
  _DAT_08075498 = DAT_08072f24;
  _DAT_0807549c = DAT_08072f28;
  _DAT_080754a0 = DAT_08072f2c;
  _DAT_080754a4 = DAT_08072f30;
  _DAT_080754a8 = DAT_08072f34;
  _DAT_080754ac = DAT_08072f38;
  _DAT_080754b0 = DAT_08072f3c;
  _DAT_080754b4 = DAT_08072f40;
  _DAT_080754b8 = DAT_08072f44;
  _DAT_080754bc = DAT_08072f48;
  _DAT_080754c0 = DAT_08072f4c;
  _DAT_080754c4 = DAT_08072f50;
  _DAT_080754c8 = DAT_08072f54;
  _DAT_080754cc = DAT_08072f58;
  _DAT_080754d0 = DAT_08072f5c;
  _DAT_080754d4 = DAT_08072f60;
  _DAT_080754d8 = DAT_08072f64;
  _DAT_080754dc = DAT_08072f68;
  _DAT_080754e0 = DAT_08072f6c;
  _DAT_080754e4 = DAT_08072f70;
  _DAT_080754e8 = DAT_08072f74;
  _DAT_080754ec = DAT_08072f78;
  _DAT_080754f0 = DAT_08072f7c;
  _DAT_080754f4 = DAT_08072f80;
  _DAT_080754f8 = DAT_08072f84;
  return 1;
}



undefined4 __regparm3 camlPervasives__loop_1138(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBX;
  
  do {
    if (*(int *)(unaff_EBX + 0xc) <= param_1) {
      uVar4 = camlPervasives___5e_1112();
      return uVar4;
    }
    iVar3 = *(int *)(unaff_EBX + 8);
    iVar1 = (*(uint *)(iVar3 + -4) >> 10) * 4 + -1;
    if (iVar1 - (uint)*(byte *)(iVar3 + iVar1) <= (uint)(param_1 >> 1)) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    uVar2 = (uint)*(byte *)(iVar3 + (param_1 >> 1)) * 2 + 1;
    if (uVar2 < 0x61) {
      if (uVar2 != 0x5b) goto LAB_0804efc5;
    }
    else if (0x74 < uVar2) {
LAB_0804efc5:
      return *(undefined4 *)(unaff_EBX + 8);
    }
    param_1 = param_1 + 2;
  } while( true );
}



undefined4 __regparm3 camlPervasives__iter_1186(int param_1)

{
  while (param_1 != 1) {
    param_1 = *(int *)(param_1 + 4);
    FUN_0804f000();
  }
  return 1;
}



undefined4 __regparm1 FUN_0804f000(undefined4 param_1,int param_2)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  caml_c_call(param_1);
  caml_exception_pointer = (undefined4 *)uStack_4;
  while (param_2 != 1) {
    param_2 = *(int *)(param_2 + 4);
    FUN_0804f000();
  }
  return 1;
}



undefined4 __regparm3
camlPervasives__build_result_1243(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBX;
  
  while (param_3 != (int *)0x1) {
    piVar2 = (int *)param_3[1];
    iVar3 = *param_3;
    iVar1 = (*(uint *)(iVar3 + -4) >> 10) * 4 + -1;
    iVar1 = (iVar1 - (uint)*(byte *)(iVar3 + iVar1)) * 2 + 1;
    caml_blit_string(iVar3,1,param_1,(unaff_EBX - iVar1) + 1,iVar1);
    unaff_EBX = (unaff_EBX - iVar1) + 1;
    param_3 = piVar2;
  }
  return param_1;
}



undefined4 __regparm3 camlPervasives__scan_1249(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *extraout_ECX;
  int extraout_EDX;
  int unaff_EBX;
  int iVar7;
  
  while( true ) {
    iVar3 = caml_c_call(*(undefined4 *)(param_3 + 0xc));
    if (iVar3 == 1) break;
    if (1 < iVar3) {
      uVar4 = caml_c_call(iVar3 + -2);
      caml_c_call(*(undefined4 *)(param_3 + 0xc),uVar4,1,iVar3 + -2);
      caml_c_call(*(undefined4 *)(param_3 + 0xc));
      if (param_1 != (undefined4 *)0x1) {
        iVar3 = unaff_EBX + -3 + iVar3;
        iVar7 = iVar3;
        while( true ) {
          uVar5 = caml_young_ptr;
          uVar6 = caml_young_ptr - 0xc;
          if (caml_young_limit <= uVar6) break;
          caml_young_ptr = uVar6;
          caml_call_gc(uVar4,iVar7);
          param_1 = extraout_ECX;
          iVar3 = extraout_EDX;
        }
        puVar1 = (undefined4 *)(caml_young_ptr - 8);
        puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar6;
        *puVar2 = 0x800;
        *puVar1 = uVar4;
        *(undefined4 **)(uVar5 - 4) = param_1;
        caml_c_call(iVar3,uVar4,iVar7,puVar1);
        uVar4 = camlPervasives__build_result_1243();
        return uVar4;
      }
      return uVar4;
    }
    uVar4 = caml_c_call(2 - iVar3);
    caml_c_call(*(undefined4 *)(param_3 + 0xc),uVar4,1,2 - iVar3);
    while( true ) {
      uVar5 = caml_young_ptr;
      uVar6 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar6) break;
      caml_young_ptr = uVar6;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar6;
    *puVar2 = 0x800;
    *puVar1 = uVar4;
    *(undefined4 **)(uVar5 - 4) = param_1;
    unaff_EBX = (unaff_EBX - iVar3) + 1;
    param_1 = puVar1;
  }
  if (param_1 != (undefined4 *)0x1) {
    caml_c_call(unaff_EBX);
    uVar4 = camlPervasives__build_result_1243();
    return uVar4;
  }
  while( true ) {
    uVar5 = caml_young_ptr - 8;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 4);
  puVar2 = (undefined4 *)(caml_young_ptr - 8);
  caml_young_ptr = uVar5;
  *puVar2 = 0x400;
  *puVar1 = &caml_exn_End_of_file;
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void camlPervasives__fun_1500(void)

{
  int unaff_EBX;
  
  (***(code ***)(unaff_EBX + 8))();
                    // WARNING: Could not recover jumptable at 0x0804f2b2. Too many branches
                    // WARNING: Treating indirect jump as call
  (***(code ***)(unaff_EBX + 0xc))();
  return;
}



void __regparm3 camlPervasives__fun_1392(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1394(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1396(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1398(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1400(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1402(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1404(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1406(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1408(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1410(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1412(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1414(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1416(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1418(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1420(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1422(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1424(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__failwith_1010(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0xc;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 8);
  puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar4;
  *puVar2 = 0x800;
  *puVar1 = &caml_exn_Failure;
  *(undefined4 *)(uVar3 - 4) = param_1;
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void __regparm3 camlPervasives__invalid_arg_1012(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0xc;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 8);
  puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar4;
  *puVar2 = 0x800;
  *puVar1 = &caml_exn_Invalid_argument;
  *(undefined4 *)(uVar3 - 4) = param_1;
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined4 __regparm3 camlPervasives__min_1022(undefined4 param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  
  iVar1 = caml_c_call(param_1);
  if (iVar1 != 1) {
    return param_1;
  }
  return unaff_EBX;
}



undefined4 __regparm3 camlPervasives__max_1025(undefined4 param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  
  iVar1 = caml_c_call(param_1);
  if (iVar1 != 1) {
    return param_1;
  }
  return unaff_EBX;
}



int __regparm3 camlPervasives__abs_1044(int param_1)

{
  if (0 < param_1) {
    return param_1;
  }
  return 2 - param_1;
}



uint __regparm3 camlPervasives__lnot_1049(uint param_1)

{
  return param_1 ^ 0xffffffff | 1;
}



undefined4 __regparm3 camlPervasives___5e_1112(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  
  iVar4 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  iVar1 = (iVar4 - (uint)*(byte *)(param_1 + iVar4)) * 2;
  iVar3 = iVar1 + 1;
  iVar4 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1;
  iVar4 = (iVar4 - (uint)*(byte *)(unaff_EBX + iVar4)) * 2 + 1;
  uVar2 = caml_c_call(iVar1 + iVar4,iVar3,param_1,iVar4);
  caml_blit_string(param_1,1,uVar2,1,iVar3);
  caml_blit_string(unaff_EBX,1,uVar2,iVar3,iVar4);
  return uVar2;
}



void __regparm3 camlPervasives__char_of_int_1120(int param_1)

{
  if ((0 < param_1) && (param_1 < 0x200)) {
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



char * __regparm3 camlPervasives__string_of_bool_1127(int param_1)

{
  if (param_1 != 1) {
    return &camlPervasives__101;
  }
  return camlPervasives__100;
}



undefined4 __regparm3 camlPervasives__bool_of_string_1129(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = caml_string_notequal(param_1,camlPervasives__99);
  if (iVar1 == 1) {
    return 1;
  }
  iVar1 = caml_string_notequal(param_1,&camlPervasives__98);
  if (iVar1 != 1) {
    uVar2 = camlPervasives__invalid_arg_1012();
    return uVar2;
  }
  return 3;
}



void __regparm3 camlPervasives__string_of_int_1130(undefined4 param_1)

{
  caml_c_call(&camlPervasives__96,param_1);
  return;
}



void __regparm3 camlPervasives__valid_float_lexem_1135(int param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int extraout_ECX;
  int iVar5;
  int extraout_EDX;
  
  iVar5 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  iVar5 = (iVar5 - (uint)*(byte *)(param_1 + iVar5)) * 2 + 1;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
    iVar5 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = camlPervasives__loop_1138;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(int *)(uVar3 - 8) = param_1;
  *(int *)(uVar3 - 4) = iVar5;
  camlPervasives__loop_1138();
  return;
}



void __regparm3 camlPervasives__string_of_float_1140(undefined4 param_1)

{
  caml_c_call(camlPervasives__95,param_1);
  camlPervasives__valid_float_lexem_1135();
  return;
}



void __regparm3 camlPervasives___40_1143(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  
  if (param_1 != (undefined4 *)0x1) {
    uVar3 = *param_1;
    uVar5 = camlPervasives___40_1143();
    while( true ) {
      uVar4 = caml_young_ptr;
      uVar6 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar6) break;
      caml_young_ptr = uVar6;
      caml_call_gc();
      uVar5 = extraout_ECX;
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar6;
    *puVar2 = 0x800;
    *puVar1 = uVar3;
    *(undefined4 *)(uVar4 - 4) = uVar5;
    return;
  }
  return;
}



void __regparm3
camlPervasives__open_out_gen_1175(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = caml_c_call(param_3,param_1);
  caml_c_call(uVar1);
  return;
}



void camlPervasives__open_out_1179(void)

{
  camlPervasives__open_out_gen_1175();
  return;
}



void camlPervasives__open_out_bin_1181(void)

{
  camlPervasives__open_out_gen_1175();
  return;
}



void camlPervasives__flush_all_1185(void)

{
  caml_c_call(1);
  camlPervasives__iter_1186();
  return;
}



void __regparm3 camlPervasives__output_string_1191(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__output_1194(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EBX;
  
  if (((0 < param_3) && (0 < param_2)) &&
     (iVar1 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1,
     param_3 <= (int)(((iVar1 - (uint)*(byte *)(unaff_EBX + iVar1)) * 2 - param_2) + 2))) {
    caml_c_call(param_1);
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



void __regparm3 camlPervasives__output_value_1202(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__close_out_1209(undefined4 param_1)

{
  caml_c_call(param_1,param_1);
  caml_c_call(param_1);
  return;
}



undefined4 __regparm3 camlPervasives__close_out_noerr_1211(undefined4 param_1)

{
  FUN_0804f890(param_1);
  FUN_0804f8d0();
  return 1;
}



undefined4 __regparm3 FUN_0804f890(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  caml_c_call(param_1);
  caml_exception_pointer = (undefined4 *)uStack_4;
  FUN_0804f8d0();
  return 1;
}



void FUN_0804f8d0(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  caml_c_call(param_1);
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



void __regparm3
camlPervasives__open_in_gen_1214(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = caml_c_call(param_3,param_1);
  caml_c_call(uVar1);
  return;
}



void camlPervasives__open_in_1218(void)

{
  camlPervasives__open_in_gen_1214();
  return;
}



void camlPervasives__open_in_bin_1220(void)

{
  camlPervasives__open_in_gen_1214();
  return;
}



void __regparm3 camlPervasives__input_1224(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EBX;
  
  if (((0 < param_3) && (0 < param_2)) &&
     (iVar1 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1,
     param_3 <= (int)(((iVar1 - (uint)*(byte *)(unaff_EBX + iVar1)) * 2 - param_2) + 2))) {
    caml_c_call(param_1);
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



undefined4 __regparm3
camlPervasives__unsafe_really_input_1229(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_EBX;
  
  while( true ) {
    if (param_2 < 2) {
      return 1;
    }
    iVar3 = caml_c_call(param_1,unaff_EBX,param_3,param_2);
    if (iVar3 == 1) break;
    param_2 = (param_2 - iVar3) + 1;
    param_3 = param_3 + -1 + iVar3;
  }
  while( true ) {
    uVar4 = caml_young_ptr - 8;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 4);
  puVar2 = (undefined4 *)(caml_young_ptr - 8);
  caml_young_ptr = uVar4;
  *puVar2 = 0x400;
  *puVar1 = &caml_exn_End_of_file;
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void __regparm3 camlPervasives__really_input_1235(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EBX;
  
  if (((0 < param_3) && (0 < param_2)) &&
     (iVar1 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1,
     param_3 <= (int)(((iVar1 - (uint)*(byte *)(unaff_EBX + iVar1)) * 2 - param_2) + 2))) {
    camlPervasives__unsafe_really_input_1229();
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



void __regparm3 camlPervasives__input_line_1241(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x18;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x14);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar4;
  *puVar2 = 0x14f7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar3 - 0x10) = 5;
  *(code **)(uVar3 - 0xc) = camlPervasives__scan_1249;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined ***)(uVar3 - 4) = &camlPervasives__86;
  camlPervasives__scan_1249();
  return;
}



undefined4 camlPervasives__close_in_noerr_1263(void)

{
  FUN_0804fb00();
  return 1;
}



void __regparm3 FUN_0804fb00(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  caml_c_call(param_1);
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



void __regparm3 camlPervasives__print_char_1266(undefined4 param_1)

{
  caml_c_call(DAT_08075564,param_1);
  return;
}



void camlPervasives__print_string_1268(void)

{
  camlPervasives__output_string_1191();
  return;
}



void camlPervasives__print_int_1270(void)

{
  camlPervasives__string_of_int_1130();
  camlPervasives__output_string_1191();
  return;
}



void camlPervasives__print_float_1272(void)

{
  camlPervasives__string_of_float_1140();
  camlPervasives__output_string_1191();
  return;
}



void camlPervasives__print_endline_1274(void)

{
  camlPervasives__output_string_1191();
  caml_c_call(DAT_08075564,0x15);
  caml_c_call(DAT_08075564);
  return;
}



void camlPervasives__print_newline_1276(void)

{
  caml_c_call(DAT_08075564,0x15);
  caml_c_call(DAT_08075564);
  return;
}



void __regparm3 camlPervasives__prerr_char_1277(undefined4 param_1)

{
  caml_c_call(DAT_08075568,param_1);
  return;
}



void camlPervasives__prerr_string_1279(void)

{
  camlPervasives__output_string_1191();
  return;
}



void camlPervasives__prerr_int_1281(void)

{
  camlPervasives__string_of_int_1130();
  camlPervasives__output_string_1191();
  return;
}



void camlPervasives__prerr_float_1283(void)

{
  camlPervasives__string_of_float_1140();
  camlPervasives__output_string_1191();
  return;
}



void camlPervasives__prerr_endline_1285(void)

{
  camlPervasives__output_string_1191();
  caml_c_call(DAT_08075568,0x15);
  caml_c_call(DAT_08075568);
  return;
}



void camlPervasives__prerr_newline_1287(void)

{
  caml_c_call(DAT_08075568,0x15);
  caml_c_call(DAT_08075568);
  return;
}



void camlPervasives__read_line_1288(void)

{
  caml_c_call(DAT_08075564);
  camlPervasives__input_line_1241();
  return;
}



void camlPervasives__read_int_1289(void)

{
  undefined4 uVar1;
  
  uVar1 = camlPervasives__read_line_1288();
  caml_c_call(uVar1);
  return;
}



void camlPervasives__read_float_1290(void)

{
  undefined4 uVar1;
  
  uVar1 = camlPervasives__read_line_1288();
  caml_c_call(uVar1);
  return;
}



void __regparm3 camlPervasives__fun_1495(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1493(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1491(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1489(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1487(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives__fun_1485(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlPervasives___5e_5e_1312(undefined4 param_1)

{
  camlPervasives___5e_1112(param_1);
  camlPervasives___5e_1112();
  return;
}



undefined4 __regparm3 camlPervasives__string_of_format_1315(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  iVar2 = (iVar2 - (uint)*(byte *)(param_1 + iVar2)) * 2 + 1;
  uVar1 = caml_c_call(iVar2,iVar2,param_1);
  caml_blit_string(param_1,1,uVar1,1,iVar2);
  return uVar1;
}



undefined4 __regparm3 camlPervasives__at_exit_1322(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  
  uVar3 = *DAT_08075650;
  while( true ) {
    uVar4 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar5;
  *puVar2 = 0x10f7;
  *ppcVar1 = camlPervasives__fun_1500;
  *(undefined4 *)(uVar4 - 0xc) = 3;
  *(undefined4 *)(uVar4 - 8) = param_1;
  *(undefined4 *)(uVar4 - 4) = uVar3;
  caml_modify(DAT_08075650,ppcVar1);
  return 1;
}



void camlPervasives__do_at_exit_1325(void)

{
                    // WARNING: Could not recover jumptable at 0x0804fe8e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)*DAT_08075650)();
  return;
}



void __regparm3 camlPervasives__exit_1326(undefined4 param_1)

{
  (**(code **)*DAT_08075650)(param_1);
  caml_c_call(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 camlPervasives__entry(void)

{
  undefined4 *puVar1;
  
  _DAT_08075628 = &camlPervasives__84;
  _DAT_08075620 = &camlPervasives__83;
  _DAT_0807561c = &camlPervasives__82;
  _DAT_08075618 = &camlPervasives__81;
  _DAT_08075614 = &camlPervasives__80;
  _DAT_08075610 = &camlPervasives__79;
  _DAT_0807560c = &camlPervasives__78;
  _DAT_08075608 = &camlPervasives__77;
  _DAT_080755f8 = &camlPervasives__76;
  _DAT_080755e8 = &camlPervasives__75;
  _DAT_080755dc = &camlPervasives__74;
  _DAT_080755d8 = &camlPervasives__73;
  _DAT_080755d4 = &camlPervasives__72;
  _DAT_080755cc = &camlPervasives__71;
  _DAT_080755c8 = &camlPervasives__70;
  DAT_080755bc = &camlPervasives__69;
  DAT_080755b4 = &camlPervasives__68;
  DAT_0807550c = &camlPervasives__67;
  camlPervasives = &camlPervasives__66;
  puVar1 = (undefined4 *)caml_alloc1();
  _DAT_08075510 = (char **)(puVar1 + 1);
  *puVar1 = 0x400;
  *_DAT_08075510 = camlPervasives__65;
  _DAT_08075514 = &camlPervasives__64;
  _DAT_08075518 = &camlPervasives__63;
  _DAT_0807551c = &camlPervasives__62;
  _DAT_08075528 = &camlPervasives__61;
  _DAT_08075524 = 0x80000001;
  _DAT_08075520 = 0x7fffffff;
  _DAT_0807552c = caml_c_call(&camlPervasives__60);
  _DAT_08075530 = caml_c_call(&camlPervasives__59);
  _DAT_08075534 = caml_c_call(&camlPervasives__58);
  _DAT_08075538 = caml_c_call(&camlPervasives__57);
  _DAT_0807553c = caml_c_call(&camlPervasives__56);
  _DAT_08075540 = caml_c_call(&camlPervasives__55);
  _DAT_08075544 = &camlPervasives__54;
  _DAT_08075548 = &camlPervasives__53;
  _DAT_0807554c = &camlPervasives__52;
  _DAT_08075550 = &camlPervasives__51;
  _DAT_08075554 = &camlPervasives__50;
  _DAT_0807564c = &camlPervasives__49;
  _DAT_08075640 = &camlPervasives__48;
  _DAT_08075558 = &camlPervasives__47;
  DAT_0807555c = &camlPervasives__46;
  DAT_08075560 = caml_c_call(1);
  DAT_08075564 = caml_c_call(3);
  DAT_08075568 = caml_c_call(5);
  _DAT_080755b0 = &camlPervasives__45;
  _DAT_080755a8 = &camlPervasives__44;
  _DAT_080755ac = &camlPervasives__43;
  DAT_080755b8 = &camlPervasives__42;
  DAT_080755c0 = &camlPervasives__41;
  _DAT_080755c4 = &camlPervasives__40;
  _DAT_080755d0 = &camlPervasives__39;
  _DAT_080755e0 = &camlPervasives__38;
  _DAT_080755e4 = &camlPervasives__37;
  _DAT_080755f4 = &camlPervasives__36;
  _DAT_080755ec = &camlPervasives__35;
  _DAT_080755f0 = &camlPervasives__34;
  _DAT_08075600 = &camlPervasives__33;
  _DAT_08075644 = &camlPervasives__32;
  _DAT_08075604 = &camlPervasives__31;
  _DAT_080755fc = &camlPervasives__30;
  _DAT_08075624 = &camlPervasives__29;
  _DAT_0807556c = &camlPervasives__28;
  _DAT_08075570 = &camlPervasives__27;
  _DAT_08075574 = &camlPervasives__26;
  _DAT_08075578 = &camlPervasives__25;
  _DAT_0807557c = &camlPervasives__24;
  _DAT_08075580 = &camlPervasives__23;
  _DAT_08075584 = &camlPervasives__22;
  _DAT_08075588 = &camlPervasives__21;
  _DAT_0807558c = &camlPervasives__20;
  _DAT_08075590 = &camlPervasives__19;
  _DAT_08075594 = &camlPervasives__18;
  _DAT_08075598 = &camlPervasives__17;
  _DAT_0807559c = &camlPervasives__16;
  _DAT_080755a0 = &camlPervasives__15;
  _DAT_080755a4 = &camlPervasives__14;
  puVar1 = (undefined4 *)caml_allocN();
  _DAT_0807562c = puVar1 + 1;
  *puVar1 = 0x1800;
  *_DAT_0807562c = &camlPervasives__7;
  puVar1[2] = &camlPervasives__8;
  puVar1[3] = &camlPervasives__9;
  puVar1[4] = &camlPervasives__10;
  puVar1[5] = &camlPervasives__11;
  puVar1[6] = &camlPervasives__12;
  _DAT_08075634 = &camlPervasives__6;
  _DAT_08075630 = &camlPervasives__5;
  DAT_08075650 = puVar1 + 8;
  puVar1[7] = 0x400;
  *DAT_08075650 = DAT_080755b8;
  _DAT_0807563c = &camlPervasives__4;
  DAT_08075648 = &camlPervasives__3;
  _DAT_08075638 = &camlPervasives__2;
  caml_c_call(camlPervasives__1,&camlPervasives__3);
  return 1;
}



void __regparm3 camlArray__loop_1201(uint param_1,undefined8 *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined8 *unaff_EBX;
  uint unaff_ESI;
  int unaff_EDI;
  
  while( true ) {
    while( true ) {
      iVar2 = caml_apply2();
      if (iVar2 < 2) break;
      iVar2 = *(int *)(unaff_EDI + 0x18);
      uVar3 = *(uint *)(iVar2 + -4);
      if ((uVar3 & 0xff) == 0xfe) {
        if (uVar3 >> 10 <= unaff_ESI) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        *(undefined8 *)(iVar2 + -4 + unaff_ESI * 4) = *param_2;
      }
      else {
        if (uVar3 >> 9 <= unaff_ESI) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        caml_modify(iVar2 + -2 + unaff_ESI * 2,param_2);
      }
      param_3 = param_3 + 2;
      if (*(int *)(unaff_EDI + 0x20) <= (int)param_3) {
        camlArray__blit_1093();
        return;
      }
      iVar2 = *(int *)(unaff_EDI + 0x14);
      uVar3 = *(uint *)(iVar2 + -4);
      if ((uVar3 & 0xff) == 0xfe) {
        if (uVar3 >> 10 <= param_3) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        while( true ) {
          uVar3 = caml_young_ptr - 0xc;
          if (caml_young_limit <= uVar3) break;
          caml_young_ptr = uVar3;
          caml_call_gc();
          param_3 = extraout_ECX;
        }
        param_2 = (undefined8 *)(caml_young_ptr - 8);
        puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar3;
        *puVar1 = 0x8fd;
        *param_2 = *(undefined8 *)(iVar2 + -4 + param_3 * 4);
      }
      else {
        if (uVar3 >> 9 <= param_3) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        param_2 = *(undefined8 **)(iVar2 + -2 + param_3 * 2);
      }
      unaff_ESI = unaff_ESI + 2;
    }
    iVar2 = *(int *)(unaff_EDI + 0x18);
    uVar3 = *(uint *)(iVar2 + -4);
    if ((uVar3 & 0xff) == 0xfe) {
      if (uVar3 >> 10 <= unaff_ESI) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      *(undefined8 *)(iVar2 + -4 + unaff_ESI * 4) = *unaff_EBX;
    }
    else {
      if (uVar3 >> 9 <= unaff_ESI) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      caml_modify(iVar2 + -2 + unaff_ESI * 2,unaff_EBX);
    }
    param_1 = param_1 + 2;
    if (*(int *)(unaff_EDI + 0x1c) <= (int)param_1) break;
    iVar2 = *(int *)(unaff_EDI + 0x10);
    uVar3 = *(uint *)(iVar2 + -4);
    if ((uVar3 & 0xff) == 0xfe) {
      if (uVar3 >> 10 <= param_1) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while( true ) {
        uVar3 = caml_young_ptr - 0xc;
        if (caml_young_limit <= uVar3) break;
        caml_young_ptr = uVar3;
        caml_call_gc();
        param_1 = extraout_ECX_00;
      }
      unaff_EBX = (undefined8 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar3;
      *puVar1 = 0x8fd;
      *unaff_EBX = *(undefined8 *)(iVar2 + -4 + param_1 * 4);
    }
    else {
      if (uVar3 >> 9 <= param_1) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      unaff_EBX = *(undefined8 **)(iVar2 + -2 + param_1 * 2);
    }
    unaff_ESI = unaff_ESI + 2;
  }
  camlArray__blit_1093();
  return;
}



int __regparm3 camlArray__size_1065(int param_1)

{
  int iVar1;
  int *unaff_EBX;
  
  while (unaff_EBX != (int *)0x1) {
    if ((*(uint *)(*unaff_EBX + -4) & 0xff) == 0xfe) {
      iVar1 = 10;
    }
    else {
      iVar1 = 9;
    }
    param_1 = param_1 + (*(uint *)(*unaff_EBX + -4) >> iVar1 | 1) + -1;
    unaff_EBX = (int *)unaff_EBX[1];
  }
  return param_1;
}



undefined4 __regparm3 camlArray__fill_1070(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  int extraout_ECX;
  int *unaff_EBX;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  while (unaff_EBX != (int *)0x1) {
    piVar2 = (int *)unaff_EBX[1];
    iVar3 = *unaff_EBX;
    if ((*(uint *)(iVar3 + -4) & 0xff) == 0xfe) {
      iVar8 = 10;
    }
    else {
      iVar8 = 9;
    }
    iVar9 = (*(uint *)(iVar3 + -4) >> iVar8 | 1) - 2;
    iVar8 = 1;
    if (0 < iVar9) {
      do {
        iVar7 = iVar3;
        if (*(char *)(iVar3 + -4) == -2) {
          while( true ) {
            uVar5 = caml_young_ptr - 0xc;
            if (caml_young_limit <= uVar5) break;
            caml_young_ptr = uVar5;
            caml_call_gc();
            iVar7 = extraout_ECX;
          }
          puVar6 = (undefined8 *)(caml_young_ptr - 8);
          puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
          caml_young_ptr = uVar5;
          *puVar1 = 0x8fd;
          *puVar6 = *(undefined8 *)(iVar7 + -4 + iVar8 * 4);
        }
        else {
          puVar6 = *(undefined8 **)(iVar3 + -2 + iVar8 * 2);
        }
        iVar7 = param_1 + -1 + iVar8;
        iVar4 = *(int *)(param_3 + 0xc);
        if (*(char *)(iVar4 + -4) == -2) {
          *(undefined8 *)(iVar4 + -4 + iVar7 * 4) = *puVar6;
        }
        else {
          caml_modify(iVar4 + -2 + iVar7 * 2,puVar6);
        }
        bVar10 = iVar8 != iVar9;
        iVar8 = iVar8 + 2;
      } while (bVar10);
    }
    if ((*(uint *)(iVar3 + -4) & 0xff) == 0xfe) {
      iVar8 = 10;
    }
    else {
      iVar8 = 9;
    }
    param_1 = param_1 + (*(uint *)(iVar3 + -4) >> iVar8 | 1) + -1;
    unaff_EBX = piVar2;
  }
  return 1;
}



undefined ** __regparm3 camlArray__find_init_1077(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 *extraout_ECX;
  
  do {
    if (param_1 == (undefined4 *)0x1) {
      return &camlArray__36;
    }
    puVar6 = (undefined8 *)*param_1;
    if ((*(uint *)((int)puVar6 + -4) & 0xff) == 0xfe) {
      iVar3 = 10;
    }
    else {
      iVar3 = 9;
    }
    param_1 = (undefined4 *)param_1[1];
  } while ((int)(*(uint *)((int)puVar6 + -4) >> iVar3 | 1) < 2);
  if (*(char *)((int)puVar6 + -4) == -2) {
    while (uVar4 = caml_young_ptr - 0xc, uVar4 < caml_young_limit) {
      caml_young_ptr = uVar4;
      caml_call_gc();
      puVar6 = extraout_ECX;
    }
    puVar1 = (undefined8 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar4;
    *puVar2 = 0x8fd;
    *puVar1 = *puVar6;
  }
  ppuVar5 = (undefined **)camlArray__concat_aux_1062();
  return ppuVar5;
}



int * __regparm3 camlArray__tolist_1123(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int *unaff_EBX;
  undefined8 *puVar6;
  
  for (; 0 < param_1; param_1 = param_1 + -2) {
    iVar3 = *(int *)(param_3 + 0xc);
    if (*(char *)(iVar3 + -4) == -2) {
      while( true ) {
        uVar4 = caml_young_ptr - 0xc;
        if (caml_young_limit <= uVar4) break;
        caml_young_ptr = uVar4;
        caml_call_gc();
        param_3 = extraout_ECX_00;
        param_1 = extraout_EDX_00;
      }
      puVar6 = (undefined8 *)(caml_young_ptr - 8);
      puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar4;
      *puVar2 = 0x8fd;
      *puVar6 = *(undefined8 *)(iVar3 + -4 + param_1 * 4);
    }
    else {
      puVar6 = *(undefined8 **)(iVar3 + -2 + param_1 * 2);
    }
    while( true ) {
      uVar4 = caml_young_ptr;
      uVar5 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar5) break;
      caml_young_ptr = uVar5;
      caml_call_gc();
      param_3 = extraout_ECX;
      param_1 = extraout_EDX;
    }
    piVar1 = (int *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar5;
    *puVar2 = 0x800;
    *piVar1 = (int)puVar6;
    *(int **)(uVar4 - 4) = unaff_EBX;
    unaff_EBX = piVar1;
  }
  return unaff_EBX;
}



undefined4 __regparm3 camlArray__fill_1135(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  
  while (unaff_EBX != (undefined4 *)0x1) {
    puVar1 = (undefined4 *)unaff_EBX[1];
    iVar2 = *(int *)(param_3 + 0xc);
    if (*(char *)(iVar2 + -4) == -2) {
      *(undefined8 *)(iVar2 + -4 + param_1 * 4) = *(undefined8 *)*unaff_EBX;
    }
    else {
      caml_modify(iVar2 + -2 + param_1 * 2,(undefined8 *)*unaff_EBX);
    }
    param_1 = param_1 + 2;
    unaff_EBX = puVar1;
  }
  return *(undefined4 *)(param_3 + 0xc);
}



uint __regparm3 camlArray__maxson_1155(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  uint extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  uint uVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  uint extraout_EDX_04;
  int extraout_EDX_05;
  int unaff_EBX;
  uint *puVar9;
  
  uVar4 = unaff_EBX * 3;
  while (uVar5 = caml_young_ptr - 8, uVar5 < caml_young_limit) {
    caml_young_ptr = uVar5;
    caml_call_gc();
    param_3 = extraout_ECX_03;
    param_1 = extraout_EDX_05;
  }
  puVar9 = (uint *)(caml_young_ptr - 4);
  puVar1 = (undefined4 *)(caml_young_ptr - 8);
  caml_young_ptr = uVar5;
  *puVar1 = 0x400;
  *puVar9 = uVar4;
  if ((int)(uVar4 + 4) < param_1) {
    uVar8 = uVar4 + 2;
    iVar6 = *(int *)(param_3 + 0x10);
    uVar5 = *(uint *)(iVar6 + -4);
    iVar7 = param_3;
    if ((uVar5 & 0xff) == 0xfe) {
      if (uVar5 >> 10 <= uVar8) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar5 = caml_young_ptr - 0xc, uVar5 < caml_young_limit) {
        caml_young_ptr = uVar5;
        caml_call_gc();
        iVar7 = extraout_ECX_02;
        uVar8 = extraout_EDX_04;
      }
      puVar2 = (undefined8 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar5;
      *puVar1 = 0x8fd;
      *puVar2 = *(undefined8 *)(iVar6 + -4 + uVar8 * 4);
    }
    else if (uVar5 >> 9 <= uVar8) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    iVar6 = *(int *)(iVar7 + 0x10);
    uVar5 = *(uint *)(iVar6 + -4);
    if ((uVar5 & 0xff) == 0xfe) {
      if (uVar5 >> 10 <= uVar4) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar5 = caml_young_ptr - 0xc, uVar5 < caml_young_limit) {
        caml_young_ptr = uVar5;
        caml_call_gc();
        iVar6 = extraout_EDX_03;
      }
      puVar2 = (undefined8 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar5;
      *puVar1 = 0x8fd;
      *puVar2 = *(undefined8 *)(iVar6 + -4 + unaff_EBX * 0xc);
    }
    else if (uVar5 >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    iVar6 = caml_apply2();
    if (iVar6 < 1) {
      *puVar9 = uVar4 + 2;
    }
    uVar8 = uVar4 + 4;
    iVar6 = *(int *)(param_3 + 0x10);
    uVar5 = *(uint *)(iVar6 + -4);
    if ((uVar5 & 0xff) == 0xfe) {
      if (uVar5 >> 10 <= uVar8) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar5 = caml_young_ptr - 0xc, uVar5 < caml_young_limit) {
        caml_young_ptr = uVar5;
        caml_call_gc();
        uVar8 = extraout_ECX_01;
        iVar6 = extraout_EDX_02;
      }
      puVar2 = (undefined8 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar5;
      *puVar1 = 0x8fd;
      *puVar2 = *(undefined8 *)(iVar6 + -4 + uVar8 * 4);
    }
    else if (uVar5 >> 9 <= uVar8) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    uVar5 = *puVar9;
    iVar6 = *(int *)(param_3 + 0x10);
    uVar8 = *(uint *)(iVar6 + -4);
    if ((uVar8 & 0xff) == 0xfe) {
      if (uVar8 >> 10 <= uVar5) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar8 = caml_young_ptr - 0xc, uVar8 < caml_young_limit) {
        caml_young_ptr = uVar8;
        caml_call_gc();
        iVar6 = extraout_ECX_00;
        uVar5 = extraout_EDX_01;
      }
      puVar2 = (undefined8 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar8;
      *puVar1 = 0x8fd;
      *puVar2 = *(undefined8 *)(iVar6 + -4 + uVar5 * 4);
    }
    else if (uVar8 >> 9 <= uVar5) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    iVar6 = caml_apply2();
    if (iVar6 < 1) {
      *puVar9 = uVar4 + 4;
    }
    return *puVar9;
  }
  iVar6 = unaff_EBX;
  if ((int)(uVar4 + 2) < param_1) {
    uVar8 = uVar4 + 2;
    iVar7 = *(int *)(param_3 + 0x10);
    uVar5 = *(uint *)(iVar7 + -4);
    if ((uVar5 & 0xff) == 0xfe) {
      if (uVar5 >> 10 <= uVar8) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar5 = caml_young_ptr - 0xc, uVar5 < caml_young_limit) {
        caml_young_ptr = uVar5;
        caml_call_gc();
        param_3 = extraout_ECX;
        iVar7 = extraout_EDX_00;
      }
      puVar2 = (undefined8 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar5;
      *puVar1 = 0x8fd;
      *puVar2 = *(undefined8 *)(iVar7 + -4 + uVar8 * 4);
    }
    else if (uVar5 >> 9 <= uVar8) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    iVar7 = *(int *)(param_3 + 0x10);
    uVar5 = *(uint *)(iVar7 + -4);
    if ((uVar5 & 0xff) == 0xfe) {
      if (uVar5 >> 10 <= uVar4) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar5 = caml_young_ptr - 0xc, uVar5 < caml_young_limit) {
        caml_young_ptr = uVar5;
        caml_call_gc();
        iVar7 = extraout_EDX;
      }
      puVar2 = (undefined8 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar5;
      *puVar1 = 0x8fd;
      *puVar2 = *(undefined8 *)(iVar7 + -4 + unaff_EBX * 0xc);
    }
    else if (uVar5 >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    iVar7 = caml_apply2();
    if (iVar7 < 1) {
      return uVar4 + 2;
    }
  }
  if (param_1 <= (int)uVar4) {
    while (uVar4 = caml_young_ptr, uVar5 = caml_young_ptr - 0xc, uVar5 < caml_young_limit) {
      caml_young_ptr = uVar5;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 8);
    puVar3 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar5;
    *puVar3 = 0x800;
    *puVar1 = DAT_080763a8;
    *(int *)(uVar4 - 4) = iVar6;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  return uVar4;
}



undefined4 __regparm3
camlArray__trickledown_1160(undefined4 param_1,int param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined8 *puVar5;
  uint unaff_EBX;
  
  while( true ) {
    uVar2 = camlArray__maxson_1155(param_2,param_1);
    iVar3 = *(int *)(param_2 + 0x10);
    uVar4 = *(uint *)(iVar3 + -4);
    if ((uVar4 & 0xff) == 0xfe) {
      if (uVar4 >> 10 <= uVar2) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar4 = caml_young_ptr - 0xc, uVar4 < caml_young_limit) {
        caml_young_ptr = uVar4;
        caml_call_gc();
        iVar3 = extraout_ECX_00;
      }
      puVar5 = (undefined8 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar4;
      *puVar1 = 0x8fd;
      *puVar5 = *(undefined8 *)(iVar3 + -4 + uVar2 * 4);
    }
    else if (uVar4 >> 9 <= uVar2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    iVar3 = caml_apply2();
    if (iVar3 < 2) break;
    iVar3 = *(int *)(param_2 + 0x10);
    uVar4 = *(uint *)(iVar3 + -4);
    if ((uVar4 & 0xff) == 0xfe) {
      if (uVar4 >> 10 <= uVar2) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar4 = caml_young_ptr - 0xc, uVar4 < caml_young_limit) {
        caml_young_ptr = uVar4;
        caml_call_gc();
        iVar3 = extraout_ECX;
      }
      puVar5 = (undefined8 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar4;
      *puVar1 = 0x8fd;
      *puVar5 = *(undefined8 *)(iVar3 + -4 + uVar2 * 4);
    }
    else {
      if (uVar4 >> 9 <= uVar2) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      puVar5 = *(undefined8 **)(iVar3 + -2 + uVar2 * 2);
    }
    iVar3 = *(int *)(param_2 + 0x10);
    uVar4 = *(uint *)(iVar3 + -4);
    if ((uVar4 & 0xff) == 0xfe) {
      if (uVar4 >> 10 <= unaff_EBX) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      *(undefined8 *)(iVar3 + -4 + unaff_EBX * 4) = *puVar5;
      unaff_EBX = uVar2;
    }
    else {
      if (uVar4 >> 9 <= unaff_EBX) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      caml_modify(iVar3 + -2 + unaff_EBX * 2,puVar5);
      unaff_EBX = uVar2;
    }
  }
  iVar3 = *(int *)(param_2 + 0x10);
  uVar4 = *(uint *)(iVar3 + -4);
  if ((uVar4 & 0xff) == 0xfe) {
    if (uVar4 >> 10 <= unaff_EBX) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *(undefined8 *)(iVar3 + -4 + unaff_EBX * 4) = *param_3;
  }
  else {
    if (uVar4 >> 9 <= unaff_EBX) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(iVar3 + -2 + unaff_EBX * 2,param_3);
  }
  return 1;
}



undefined4 __regparm3 camlArray__trickle_1165(undefined4 param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = (int *)FUN_08050ef0();
  if (*piVar4 != DAT_080763a8) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar1 = piVar4[1];
  iVar2 = *(int *)(param_2 + 0xc);
  uVar3 = *(uint *)(iVar2 + -4);
  if ((uVar3 & 0xff) == 0xfe) {
    if (uVar3 >> 10 <= uVar1) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *(undefined8 *)(iVar2 + -4 + uVar1 * 4) = *param_3;
  }
  else {
    if (uVar3 >> 9 <= uVar1) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(iVar2 + -2 + uVar1 * 2,param_3);
  }
  return 1;
}



void FUN_08050ef0(void)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  camlArray__trickledown_1160();
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



void __regparm3 camlArray__bubbledown_1170(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  undefined8 *puVar5;
  uint unaff_EBX;
  
  while( true ) {
    while( true ) {
      uVar2 = camlArray__maxson_1155(param_3,param_1);
      iVar4 = *(int *)(param_3 + 0xc);
      uVar3 = *(uint *)(iVar4 + -4);
      if ((uVar3 & 0xff) == 0xfe) {
        if (uVar3 >> 10 <= uVar2) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        while (uVar3 = caml_young_ptr - 0xc, uVar3 < caml_young_limit) {
          caml_young_ptr = uVar3;
          caml_call_gc();
          iVar4 = extraout_ECX;
        }
        puVar5 = (undefined8 *)(caml_young_ptr - 8);
        puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar3;
        *puVar1 = 0x8fd;
        *puVar5 = *(undefined8 *)(iVar4 + -4 + uVar2 * 4);
      }
      else {
        if (uVar3 >> 9 <= uVar2) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        puVar5 = *(undefined8 **)(iVar4 + -2 + uVar2 * 2);
      }
      iVar4 = *(int *)(param_3 + 0xc);
      uVar3 = *(uint *)(iVar4 + -4);
      if ((uVar3 & 0xff) != 0xfe) break;
      if (uVar3 >> 10 <= unaff_EBX) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      *(undefined8 *)(iVar4 + -4 + unaff_EBX * 4) = *puVar5;
      unaff_EBX = uVar2;
    }
    if (uVar3 >> 9 <= unaff_EBX) break;
    caml_modify(iVar4 + -2 + unaff_EBX * 2,puVar5);
    unaff_EBX = uVar2;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



int camlArray__bubble_1174(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_08051050();
  if (*piVar1 == DAT_080763a8) {
    return piVar1[1];
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_08051050(void)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  camlArray__bubbledown_1170();
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



undefined4 __regparm3 camlArray__trickleup_1178(uint param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint extraout_ECX;
  int extraout_EDX;
  undefined8 *unaff_EBX;
  
  do {
    uVar3 = (int)(CONCAT44((int)(param_1 - 2) >> 0x1f,(int)(param_1 - 2) >> 1) / 3) * 2 + 1;
    if (param_1 == uVar3) {
      while (uVar3 = caml_young_ptr, uVar5 = caml_young_ptr - 0xc, uVar5 < caml_young_limit) {
        caml_young_ptr = uVar5;
        caml_call_gc();
      }
      puVar2 = (undefined4 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar5;
      *puVar1 = 0x800;
      *puVar2 = &caml_exn_Assert_failure;
      *(undefined ***)(uVar3 - 4) = &camlArray__35;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    iVar4 = *(int *)(param_3 + 0x10);
    uVar5 = *(uint *)(iVar4 + -4);
    if ((uVar5 & 0xff) == 0xfe) {
      uVar6 = uVar3;
      if (uVar5 >> 10 <= uVar3) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar5 = caml_young_ptr - 0xc, uVar5 < caml_young_limit) {
        caml_young_ptr = uVar5;
        caml_call_gc();
        uVar6 = extraout_ECX;
        iVar4 = extraout_EDX;
      }
      puVar7 = (undefined8 *)(caml_young_ptr - 8);
      puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar5;
      *puVar2 = 0x8fd;
      *puVar7 = *(undefined8 *)(iVar4 + -4 + uVar6 * 4);
    }
    else if (uVar5 >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    iVar4 = caml_apply2();
    if (0 < iVar4) {
      iVar4 = *(int *)(param_3 + 0x10);
      uVar3 = *(uint *)(iVar4 + -4);
      if ((uVar3 & 0xff) == 0xfe) {
        if (uVar3 >> 10 <= param_1) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        *(undefined8 *)(iVar4 + -4 + param_1 * 4) = *unaff_EBX;
      }
      else {
        if (uVar3 >> 9 <= param_1) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        caml_modify(iVar4 + -2 + param_1 * 2,unaff_EBX);
      }
      return 1;
    }
    iVar4 = *(int *)(param_3 + 0x10);
    uVar5 = *(uint *)(iVar4 + -4);
    if ((uVar5 & 0xff) == 0xfe) {
      if (uVar5 >> 10 <= uVar3) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar5 = caml_young_ptr - 0xc, uVar5 < caml_young_limit) {
        caml_young_ptr = uVar5;
        caml_call_gc();
      }
      puVar7 = (undefined8 *)(caml_young_ptr - 8);
      puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar5;
      *puVar2 = 0x8fd;
      *puVar7 = *(undefined8 *)(iVar4 + -4 + uVar3 * 4);
    }
    else {
      if (uVar5 >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      puVar7 = *(undefined8 **)(iVar4 + -2 + uVar3 * 2);
    }
    iVar4 = *(int *)(param_3 + 0x10);
    uVar5 = *(uint *)(iVar4 + -4);
    if ((uVar5 & 0xff) == 0xfe) {
      if (uVar5 >> 10 <= param_1) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      *(undefined8 *)(iVar4 + -4 + param_1 * 4) = *puVar7;
    }
    else {
      if (uVar5 >> 9 <= param_1) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      caml_modify(iVar4 + -2 + param_1 * 2,puVar7);
    }
    param_1 = uVar3;
  } while (1 < (int)uVar3);
  puVar7 = *(undefined8 **)(param_3 + 0x10);
  uVar3 = *(uint *)((int)puVar7 + -4);
  if ((uVar3 & 0xff) == 0xfe) {
    if (uVar3 >> 10 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *puVar7 = *unaff_EBX;
  }
  else {
    if (uVar3 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar7,unaff_EBX);
  }
  return 1;
}



void __regparm3 camlArray__merge_1191(uint param_1,uint param_2,int param_3)

{
  code **ppcVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int iVar7;
  int extraout_EDX;
  int unaff_EBX;
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar4 = DAT_0807b7e0;
  iVar7 = (param_1 - 1) + unaff_EBX;
  while (uVar6 = caml_young_ptr, uVar5 = caml_young_ptr - 0x28, uVar5 < caml_young_limit) {
    caml_young_ptr = uVar5;
    caml_call_gc();
    param_1 = extraout_ECX_01;
    iVar7 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x24);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x28);
  caml_young_ptr = uVar5;
  *puVar2 = 0x24f7;
  *ppcVar1 = caml_curry5;
  *(undefined4 *)(uVar6 - 0x20) = 0xb;
  *(code **)(uVar6 - 0x1c) = camlArray__loop_1201;
  *(undefined4 *)(uVar6 - 0x18) = *(undefined4 *)(iVar4 + 0xc);
  *(undefined4 *)(uVar6 - 0x14) = *(undefined4 *)(iVar4 + 0x10);
  *(int *)(uVar6 - 0x10) = param_3;
  *(undefined4 *)(uVar6 - 0xc) = unaff_EDI;
  *(int *)(uVar6 - 8) = iVar7;
  *(uint *)(uVar6 - 4) = (param_2 - 1) + unaff_ESI;
  uVar6 = *(uint *)(param_3 + -4);
  if ((uVar6 & 0xff) == 0xfe) {
    if (uVar6 >> 10 <= param_2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    while (uVar6 = caml_young_ptr - 0xc, uVar6 < caml_young_limit) {
      caml_young_ptr = uVar6;
      caml_call_gc();
      param_1 = extraout_ECX_00;
    }
    puVar3 = (undefined8 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar6;
    *puVar2 = 0x8fd;
    *puVar3 = *(undefined8 *)(param_3 + -4 + param_2 * 4);
  }
  else if (uVar6 >> 9 <= param_2) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  iVar7 = *(int *)(iVar4 + 0x10);
  uVar6 = *(uint *)(iVar7 + -4);
  if ((uVar6 & 0xff) == 0xfe) {
    if (uVar6 >> 10 <= param_1) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    while (uVar6 = caml_young_ptr - 0xc, uVar6 < caml_young_limit) {
      caml_young_ptr = uVar6;
      caml_call_gc();
      param_1 = extraout_ECX;
    }
    puVar3 = (undefined8 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar6;
    *puVar2 = 0x8fd;
    *puVar3 = *(undefined8 *)(iVar7 + -4 + param_1 * 4);
  }
  else if (uVar6 >> 9 <= param_1) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  camlArray__loop_1201();
  return;
}



undefined4 __regparm3 camlArray__isortto_1209(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int extraout_ECX_01;
  undefined8 *puVar6;
  int unaff_EBX;
  int unaff_ESI;
  bool bVar7;
  undefined8 *local_24;
  int local_1c;
  
  if (0 < param_2 + -2) {
    local_1c = 1;
    do {
      uVar3 = param_1 + -1 + local_1c;
      iVar4 = *(int *)(unaff_ESI + 0x10);
      uVar5 = *(uint *)(iVar4 + -4);
      if ((uVar5 & 0xff) == 0xfe) {
        if (uVar5 >> 10 <= uVar3) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        while (uVar5 = caml_young_ptr - 0xc, uVar5 < caml_young_limit) {
          caml_young_ptr = uVar5;
          caml_call_gc();
          iVar4 = extraout_ECX_01;
        }
        local_24 = (undefined8 *)(caml_young_ptr - 8);
        puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar5;
        *puVar2 = 0x8fd;
        *local_24 = *(undefined8 *)(iVar4 + -4 + uVar3 * 4);
      }
      else {
        if (uVar5 >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        local_24 = *(undefined8 **)(iVar4 + -2 + uVar3 * 2);
      }
      while (uVar3 = caml_young_ptr - 8, uVar3 < caml_young_limit) {
        caml_young_ptr = uVar3;
        caml_call_gc();
      }
      puVar1 = (uint *)(caml_young_ptr - 4);
      puVar2 = (undefined4 *)(caml_young_ptr - 8);
      caml_young_ptr = uVar3;
      *puVar2 = 0x400;
      *puVar1 = param_3 + -3 + local_1c;
      while (param_3 <= (int)*puVar1) {
        uVar3 = *puVar1;
        uVar5 = *(uint *)(unaff_EBX + -4);
        if ((uVar5 & 0xff) == 0xfe) {
          if (uVar5 >> 10 <= uVar3) {
                    // WARNING: Subroutine does not return
            caml_ml_array_bound_error();
          }
          while (uVar5 = caml_young_ptr - 0xc, uVar5 < caml_young_limit) {
            caml_young_ptr = uVar5;
            caml_call_gc();
            uVar3 = extraout_ECX_00;
          }
          puVar6 = (undefined8 *)(caml_young_ptr - 8);
          puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
          caml_young_ptr = uVar5;
          *puVar2 = 0x8fd;
          *puVar6 = *(undefined8 *)(unaff_EBX + -4 + uVar3 * 4);
        }
        else if (uVar5 >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        iVar4 = caml_apply2();
        if (iVar4 < 2) break;
        uVar3 = *puVar1;
        uVar5 = *(uint *)(unaff_EBX + -4);
        if ((uVar5 & 0xff) == 0xfe) {
          if (uVar5 >> 10 <= uVar3) {
                    // WARNING: Subroutine does not return
            caml_ml_array_bound_error();
          }
          while (uVar5 = caml_young_ptr - 0xc, uVar5 < caml_young_limit) {
            caml_young_ptr = uVar5;
            caml_call_gc();
            uVar3 = extraout_ECX;
          }
          puVar6 = (undefined8 *)(caml_young_ptr - 8);
          puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
          caml_young_ptr = uVar5;
          *puVar2 = 0x8fd;
          *puVar6 = *(undefined8 *)(unaff_EBX + -4 + uVar3 * 4);
        }
        else {
          if (uVar5 >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
            caml_ml_array_bound_error();
          }
          puVar6 = *(undefined8 **)(unaff_EBX + -2 + uVar3 * 2);
        }
        uVar5 = *puVar1 + 2;
        uVar3 = *(uint *)(unaff_EBX + -4);
        if ((uVar3 & 0xff) == 0xfe) {
          if (uVar3 >> 10 <= uVar5) {
                    // WARNING: Subroutine does not return
            caml_ml_array_bound_error();
          }
          *(undefined8 *)(unaff_EBX + -4 + uVar5 * 4) = *puVar6;
        }
        else {
          if (uVar3 >> 9 <= uVar5) {
                    // WARNING: Subroutine does not return
            caml_ml_array_bound_error();
          }
          caml_modify(unaff_EBX + -2 + uVar5 * 2,puVar6);
        }
        *puVar1 = *puVar1 - 2;
      }
      uVar5 = *puVar1 + 2;
      uVar3 = *(uint *)(unaff_EBX + -4);
      if ((uVar3 & 0xff) == 0xfe) {
        if (uVar3 >> 10 <= uVar5) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        *(undefined8 *)(unaff_EBX + -4 + uVar5 * 4) = *local_24;
      }
      else {
        if (uVar3 >> 9 <= uVar5) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        caml_modify(unaff_EBX + -2 + uVar5 * 2,local_24);
      }
      bVar7 = local_1c != param_2 + -2;
      local_1c = local_1c + 2;
    } while (bVar7);
  }
  return 1;
}



void __regparm3 camlArray__sortto_1217(undefined4 param_1,int param_2,undefined4 param_3)

{
  int unaff_ESI;
  
  if (param_2 < 0xc) {
    camlArray__isortto_1209();
    return;
  }
  camlArray__sortto_1217();
  camlArray__sortto_1217();
  DAT_0807b7e0 = *(undefined4 *)(unaff_ESI + 0x10);
  caml_extra_params = param_3;
  camlArray__merge_1191();
  return;
}



undefined * __regparm3 camlArray__init_1037(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  code **unaff_EBX;
  bool bVar4;
  int local_c;
  
  if (param_1 == 1) {
    return &camlArray__34;
  }
  uVar1 = (**unaff_EBX)();
  puVar2 = (undefined *)caml_c_call(param_1,uVar1);
  if (2 < param_1 + -2) {
    local_c = 3;
    do {
      puVar3 = (undefined8 *)(**unaff_EBX)();
      if (puVar2[-4] == -2) {
        *(undefined8 *)(puVar2 + local_c * 4 + -4) = *puVar3;
      }
      else {
        caml_modify(puVar2 + local_c * 2 + -2,puVar3);
      }
      bVar4 = local_c != param_1 + -2;
      local_c = local_c + 2;
    } while (bVar4);
  }
  return puVar2;
}



int __regparm3 camlArray__make_matrix_1042(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  bool bVar3;
  int iVar4;
  
  iVar1 = caml_c_call(param_1,&camlArray__33,param_1,param_3);
  if (0 < param_1 + -2) {
    iVar4 = 1;
    do {
      uVar2 = caml_c_call(unaff_EBX,param_3);
      caml_modify(iVar1 + -2 + iVar4 * 2,uVar2);
      bVar3 = iVar4 != param_1 + -2;
      iVar4 = iVar4 + 2;
    } while (bVar3);
  }
  return iVar1;
}



undefined * __regparm3 camlArray__copy_1049(undefined8 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *extraout_ECX;
  uint extraout_ECX_00;
  undefined8 *puVar7;
  int iVar8;
  bool bVar9;
  
  if ((*(uint *)((int)param_1 + -4) & 0xff) == 0xfe) {
    iVar8 = 10;
  }
  else {
    iVar8 = 9;
  }
  uVar5 = *(uint *)((int)param_1 + -4) >> iVar8 | 1;
  if (uVar5 == 1) {
    return &camlArray__32;
  }
  uVar6 = uVar5;
  if (*(char *)((int)param_1 + -4) == -2) {
    while( true ) {
      uVar2 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar2) break;
      caml_young_ptr = uVar2;
      caml_call_gc();
      uVar6 = extraout_ECX_00;
    }
    puVar3 = (undefined8 *)(caml_young_ptr - 8);
    puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar2;
    *puVar1 = 0x8fd;
    *puVar3 = *param_1;
  }
  else {
    puVar3 = *(undefined8 **)param_1;
  }
  puVar4 = (undefined *)caml_c_call(uVar6,puVar3);
  iVar8 = 3;
  if (2 < (int)(uVar5 - 2)) {
    do {
      puVar3 = param_1;
      if (*(char *)((int)param_1 + -4) == -2) {
        while( true ) {
          uVar5 = caml_young_ptr - 0xc;
          if (caml_young_limit <= uVar5) break;
          caml_young_ptr = uVar5;
          caml_call_gc();
          puVar3 = extraout_ECX;
        }
        puVar7 = (undefined8 *)(caml_young_ptr - 8);
        puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar5;
        *puVar1 = 0x8fd;
        *puVar7 = *(undefined8 *)((int)puVar3 + iVar8 * 4 + -4);
      }
      else {
        puVar7 = *(undefined8 **)((int)param_1 + iVar8 * 2 + -2);
      }
      if (puVar4[-4] == -2) {
        *(undefined8 *)(puVar4 + iVar8 * 4 + -4) = *puVar7;
      }
      else {
        caml_modify(puVar4 + iVar8 * 2 + -2,puVar7);
      }
      bVar9 = iVar8 != uVar5 - 2;
      iVar8 = iVar8 + 2;
    } while (bVar9);
  }
  return puVar4;
}



undefined * __regparm3 camlArray__append_1054(undefined8 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *extraout_ECX;
  undefined8 *extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint extraout_EDX;
  undefined8 *unaff_EBX;
  int iVar11;
  bool bVar12;
  
  if ((*(uint *)((int)param_1 + -4) & 0xff) == 0xfe) {
    iVar11 = 10;
  }
  else {
    iVar11 = 9;
  }
  uVar8 = *(uint *)((int)param_1 + -4) >> iVar11 | 1;
  if ((*(uint *)((int)unaff_EBX + -4) & 0xff) == 0xfe) {
    iVar11 = 10;
  }
  else {
    iVar11 = 9;
  }
  uVar6 = *(uint *)((int)unaff_EBX + -4) >> iVar11 | 1;
  if ((uVar8 == 1) && (uVar6 == 1)) {
    return &camlArray__31;
  }
  puVar7 = unaff_EBX;
  if (1 < (int)uVar8) {
    puVar7 = param_1;
  }
  uVar5 = uVar6;
  uVar9 = uVar8;
  if (*(char *)((int)puVar7 + -4) == -2) {
    while (uVar3 = caml_young_ptr - 0xc, uVar3 < caml_young_limit) {
      caml_young_ptr = uVar3;
      caml_call_gc();
      uVar5 = extraout_ECX_01;
      uVar9 = extraout_EDX;
    }
    puVar10 = (undefined8 *)(caml_young_ptr - 8);
    puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar3;
    *puVar1 = 0x8fd;
    *puVar10 = *puVar7;
  }
  else {
    puVar10 = *(undefined8 **)puVar7;
  }
  puVar4 = (undefined *)caml_c_call((uVar9 - 1) + uVar5,puVar10);
  iVar11 = 1;
  if (0 < (int)(uVar8 - 2)) {
    do {
      puVar7 = param_1;
      if (*(char *)((int)param_1 + -4) == -2) {
        while (uVar5 = caml_young_ptr - 0xc, uVar5 < caml_young_limit) {
          caml_young_ptr = uVar5;
          caml_call_gc();
          puVar7 = extraout_ECX_00;
        }
        puVar10 = (undefined8 *)(caml_young_ptr - 8);
        puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar5;
        *puVar1 = 0x8fd;
        *puVar10 = *(undefined8 *)((int)puVar7 + iVar11 * 4 + -4);
      }
      else {
        puVar10 = *(undefined8 **)((int)param_1 + iVar11 * 2 + -2);
      }
      if (puVar4[-4] == -2) {
        *(undefined8 *)(puVar4 + iVar11 * 4 + -4) = *puVar10;
      }
      else {
        caml_modify(puVar4 + iVar11 * 2 + -2,puVar10);
      }
      bVar12 = iVar11 != uVar8 - 2;
      iVar11 = iVar11 + 2;
    } while (bVar12);
  }
  iVar11 = 1;
  if (0 < (int)(uVar6 - 2)) {
    do {
      puVar7 = unaff_EBX;
      if (*(char *)((int)unaff_EBX + -4) == -2) {
        while (uVar6 = caml_young_ptr - 0xc, uVar6 < caml_young_limit) {
          caml_young_ptr = uVar6;
          caml_call_gc();
          puVar7 = extraout_ECX;
        }
        puVar10 = (undefined8 *)(caml_young_ptr - 8);
        puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar6;
        *puVar1 = 0x8fd;
        *puVar10 = *(undefined8 *)((int)puVar7 + iVar11 * 4 + -4);
      }
      else {
        puVar10 = *(undefined8 **)((int)unaff_EBX + iVar11 * 2 + -2);
      }
      iVar2 = iVar11 + -1 + uVar8;
      if (puVar4[-4] == -2) {
        *(undefined8 *)(puVar4 + iVar2 * 4 + -4) = *puVar10;
      }
      else {
        caml_modify(puVar4 + iVar2 * 2 + -2,puVar10);
      }
      bVar12 = iVar11 != uVar6 - 2;
      iVar11 = iVar11 + 2;
    } while (bVar12);
  }
  return puVar4;
}



undefined4 __regparm3 camlArray__concat_aux_1062(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar4 = camlArray__size_1065(param_1);
  uVar5 = caml_c_call(uVar4,param_1);
  uVar4 = uVar5;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar6 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar6) break;
    caml_young_ptr = uVar6;
    caml_call_gc();
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar6;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar3 - 0xc) = 5;
  *(code **)(uVar3 - 8) = camlArray__fill_1070;
  *(undefined4 *)(uVar3 - 4) = uVar5;
  camlArray__fill_1070();
  return uVar4;
}



void camlArray__concat_1075(void)

{
  camlArray__find_init_1077();
  return;
}



undefined * __regparm3 camlArray__sub_1081(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int unaff_EBX;
  int iVar7;
  bool bVar8;
  
  if ((0 < unaff_EBX) && (0 < param_3)) {
    if ((*(uint *)(param_1 + -4) & 0xff) == 0xfe) {
      iVar7 = 10;
    }
    else {
      iVar7 = 9;
    }
    if (unaff_EBX <= (int)(((*(uint *)(param_1 + -4) >> iVar7 | 1) - param_3) + 1)) {
      if (param_3 != 1) {
        iVar7 = param_3;
        iVar6 = param_1;
        if (*(char *)(param_1 + -4) == -2) {
          while (uVar4 = caml_young_ptr - 0xc, uVar4 < caml_young_limit) {
            caml_young_ptr = uVar4;
            caml_call_gc();
            iVar7 = extraout_ECX_00;
            iVar6 = extraout_EDX_00;
          }
          puVar2 = (undefined8 *)(caml_young_ptr - 8);
          puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
          caml_young_ptr = uVar4;
          *puVar1 = 0x8fd;
          *puVar2 = *(undefined8 *)(iVar6 + -4 + unaff_EBX * 4);
        }
        else {
          puVar2 = *(undefined8 **)(param_1 + -2 + unaff_EBX * 2);
        }
        puVar3 = (undefined *)caml_c_call(iVar7,puVar2);
        iVar7 = 3;
        if (2 < param_3 + -2) {
          do {
            iVar6 = unaff_EBX + -1 + iVar7;
            iVar5 = param_1;
            if (*(char *)(param_1 + -4) == -2) {
              while (uVar4 = caml_young_ptr - 0xc, uVar4 < caml_young_limit) {
                caml_young_ptr = uVar4;
                caml_call_gc();
                iVar5 = extraout_ECX;
                iVar6 = extraout_EDX;
              }
              puVar2 = (undefined8 *)(caml_young_ptr - 8);
              puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
              caml_young_ptr = uVar4;
              *puVar1 = 0x8fd;
              *puVar2 = *(undefined8 *)(iVar5 + -4 + iVar6 * 4);
            }
            else {
              puVar2 = *(undefined8 **)(param_1 + -2 + iVar6 * 2);
            }
            if (puVar3[-4] == -2) {
              *(undefined8 *)(puVar3 + iVar7 * 4 + -4) = *puVar2;
            }
            else {
              caml_modify(puVar3 + iVar7 * 2 + -2,puVar2);
            }
            bVar8 = iVar7 != param_3 + -2;
            iVar7 = iVar7 + 2;
          } while (bVar8);
        }
        return puVar3;
      }
      return &camlArray__28;
    }
  }
  puVar3 = (undefined *)camlPervasives__invalid_arg_1012();
  return puVar3;
}



undefined4 __regparm3 camlArray__fill_1087(int param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  bool bVar3;
  
  if ((0 < unaff_EBX) && (0 < param_3)) {
    if ((*(uint *)(param_1 + -4) & 0xff) == 0xfe) {
      iVar1 = 10;
    }
    else {
      iVar1 = 9;
    }
    if (unaff_EBX <= (int)(((*(uint *)(param_1 + -4) >> iVar1 | 1) - param_3) + 1)) {
      param_3 = unaff_EBX + -3 + param_3;
      if (unaff_EBX <= param_3) {
        do {
          if (*(char *)(param_1 + -4) == -2) {
            *(undefined8 *)(param_1 + -4 + unaff_EBX * 4) = *param_2;
          }
          else {
            caml_modify(param_1 + -2 + unaff_EBX * 2,param_2);
          }
          bVar3 = unaff_EBX != param_3;
          unaff_EBX = unaff_EBX + 2;
        } while (bVar3);
      }
      return 1;
    }
  }
  uVar2 = camlPervasives__invalid_arg_1012();
  return uVar2;
}



undefined4 __regparm3 camlArray__blit_1093(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_EBX;
  undefined8 *puVar5;
  int unaff_ESI;
  int iVar6;
  bool bVar7;
  int local_c;
  
  if ((0 < unaff_ESI) && (0 < unaff_EBX)) {
    if ((*(uint *)(param_1 + -4) & 0xff) == 0xfe) {
      iVar6 = 10;
    }
    else {
      iVar6 = 9;
    }
    if ((unaff_EBX <= (int)(((*(uint *)(param_1 + -4) >> iVar6 | 1) - unaff_ESI) + 1)) &&
       (0 < param_2)) {
      if ((*(uint *)(param_3 + -4) & 0xff) == 0xfe) {
        iVar6 = 10;
      }
      else {
        iVar6 = 9;
      }
      if (param_2 <= (int)(((*(uint *)(param_3 + -4) >> iVar6 | 1) - unaff_ESI) + 1)) {
        if (param_2 <= unaff_EBX) {
          local_c = 1;
          if (0 < unaff_ESI + -2) {
            do {
              iVar6 = unaff_EBX + -1 + local_c;
              if (*(char *)(param_1 + -4) == -2) {
                while (uVar3 = caml_young_ptr - 0xc, uVar3 < caml_young_limit) {
                  caml_young_ptr = uVar3;
                  caml_call_gc();
                }
                puVar5 = (undefined8 *)(caml_young_ptr - 8);
                puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
                caml_young_ptr = uVar3;
                *puVar1 = 0x8fd;
                *puVar5 = *(undefined8 *)(param_1 + -4 + iVar6 * 4);
              }
              else {
                puVar5 = *(undefined8 **)(param_1 + -2 + iVar6 * 2);
              }
              iVar6 = param_2 + -1 + local_c;
              if (*(char *)(param_3 + -4) == -2) {
                *(undefined8 *)(param_3 + -4 + iVar6 * 4) = *puVar5;
              }
              else {
                caml_modify(param_3 + -2 + iVar6 * 2,puVar5);
              }
              bVar7 = local_c != unaff_ESI + -2;
              local_c = local_c + 2;
            } while (bVar7);
          }
          return 1;
        }
        iVar6 = unaff_ESI + -2;
        if (0 < iVar6) {
          do {
            iVar2 = unaff_EBX + -1 + iVar6;
            if (*(char *)(param_1 + -4) == -2) {
              while (uVar3 = caml_young_ptr - 0xc, uVar3 < caml_young_limit) {
                caml_young_ptr = uVar3;
                caml_call_gc();
              }
              puVar5 = (undefined8 *)(caml_young_ptr - 8);
              puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
              caml_young_ptr = uVar3;
              *puVar1 = 0x8fd;
              *puVar5 = *(undefined8 *)(param_1 + -4 + iVar2 * 4);
            }
            else {
              puVar5 = *(undefined8 **)(param_1 + -2 + iVar2 * 2);
            }
            iVar2 = param_2 + -1 + iVar6;
            if (*(char *)(param_3 + -4) == -2) {
              *(undefined8 *)(param_3 + -4 + iVar2 * 4) = *puVar5;
            }
            else {
              caml_modify(param_3 + -2 + iVar2 * 2,puVar5);
            }
            bVar7 = iVar6 != 1;
            iVar6 = iVar6 + -2;
          } while (bVar7);
        }
        return 1;
      }
    }
  }
  uVar4 = camlPervasives__invalid_arg_1012();
  return uVar4;
}



undefined4 __regparm3 camlArray__iter_1101(code **param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  int unaff_EBX;
  bool bVar6;
  int iVar7;
  int local_10;
  
  if ((*(uint *)(unaff_EBX + -4) & 0xff) == 0xfe) {
    iVar5 = 10;
  }
  else {
    iVar5 = 9;
  }
  iVar5 = (*(uint *)(unaff_EBX + -4) >> iVar5 | 1) - 2;
  if (0 < iVar5) {
    local_10 = 1;
    do {
      iVar4 = local_10;
      iVar7 = unaff_EBX;
      if (*(char *)(unaff_EBX + -4) == -2) {
        while (uVar3 = caml_young_ptr - 0xc, uVar3 < caml_young_limit) {
          caml_young_ptr = uVar3;
          caml_call_gc();
          iVar4 = extraout_ECX;
        }
        puVar1 = (undefined8 *)(caml_young_ptr - 8);
        puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar3;
        *puVar2 = 0x8fd;
        *puVar1 = *(undefined8 *)(unaff_EBX + -4 + iVar4 * 4);
        unaff_EBX = iVar7;
      }
      (**param_1)();
      bVar6 = local_10 != iVar5;
      local_10 = local_10 + 2;
    } while (bVar6);
  }
  return 1;
}



undefined * __regparm3 camlArray__map_1105(code **param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  code **ppcVar9;
  undefined8 *extraout_ECX;
  code **extraout_ECX_00;
  undefined8 *unaff_EBX;
  bool bVar10;
  int local_c;
  
  if ((*(uint *)((int)unaff_EBX + -4) & 0xff) == 0xfe) {
    iVar3 = 10;
  }
  else {
    iVar3 = 9;
  }
  uVar4 = *(uint *)((int)unaff_EBX + -4) >> iVar3 | 1;
  if (uVar4 != 1) {
    ppcVar9 = param_1;
    if (*(char *)((int)unaff_EBX + -4) == -2) {
      while (uVar7 = caml_young_ptr - 0xc, uVar7 < caml_young_limit) {
        caml_young_ptr = uVar7;
        caml_call_gc();
        ppcVar9 = extraout_ECX_00;
      }
      puVar8 = (undefined8 *)(caml_young_ptr - 8);
      puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar7;
      *puVar2 = 0x8fd;
      *puVar8 = *unaff_EBX;
    }
    uVar5 = (**ppcVar9)();
    puVar6 = (undefined *)caml_c_call(uVar4,uVar5);
    if (2 < (int)(uVar4 - 2)) {
      local_c = 3;
      do {
        puVar8 = unaff_EBX;
        if (*(char *)((int)unaff_EBX + -4) == -2) {
          while (uVar7 = caml_young_ptr - 0xc, uVar7 < caml_young_limit) {
            caml_young_ptr = uVar7;
            caml_call_gc();
            puVar8 = extraout_ECX;
          }
          puVar1 = (undefined8 *)(caml_young_ptr - 8);
          puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
          caml_young_ptr = uVar7;
          *puVar2 = 0x8fd;
          *puVar1 = *(undefined8 *)((int)puVar8 + local_c * 4 + -4);
        }
        puVar8 = (undefined8 *)(**param_1)();
        if (puVar6[-4] == -2) {
          *(undefined8 *)(puVar6 + local_c * 4 + -4) = *puVar8;
        }
        else {
          caml_modify(puVar6 + local_c * 2 + -2,puVar8);
        }
        bVar10 = local_c != uVar4 - 2;
        local_c = local_c + 2;
      } while (bVar10);
    }
    return puVar6;
  }
  return &camlArray__24;
}



undefined4 camlArray__iteri_1111(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  int extraout_EDX;
  int unaff_EBX;
  bool bVar6;
  int iVar7;
  int local_10;
  
  if ((*(uint *)(unaff_EBX + -4) & 0xff) == 0xfe) {
    iVar5 = 10;
  }
  else {
    iVar5 = 9;
  }
  iVar5 = (*(uint *)(unaff_EBX + -4) >> iVar5 | 1) - 2;
  if (0 < iVar5) {
    local_10 = 1;
    do {
      iVar4 = local_10;
      iVar7 = unaff_EBX;
      if (*(char *)(unaff_EBX + -4) == -2) {
        while (uVar3 = caml_young_ptr - 0xc, uVar3 < caml_young_limit) {
          caml_young_ptr = uVar3;
          caml_call_gc();
          iVar4 = extraout_ECX;
          unaff_EBX = extraout_EDX;
        }
        puVar1 = (undefined8 *)(caml_young_ptr - 8);
        puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar3;
        *puVar2 = 0x8fd;
        *puVar1 = *(undefined8 *)(unaff_EBX + -4 + iVar4 * 4);
        unaff_EBX = iVar7;
      }
      caml_apply2();
      bVar6 = local_10 != iVar5;
      local_10 = local_10 + 2;
    } while (bVar6);
  }
  return 1;
}



undefined * camlArray__mapi_1115(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *extraout_ECX;
  undefined8 *unaff_EBX;
  bool bVar9;
  int local_c;
  
  if ((*(uint *)((int)unaff_EBX + -4) & 0xff) == 0xfe) {
    iVar3 = 10;
  }
  else {
    iVar3 = 9;
  }
  uVar4 = *(uint *)((int)unaff_EBX + -4) >> iVar3 | 1;
  if (uVar4 != 1) {
    if (*(char *)((int)unaff_EBX + -4) == -2) {
      while (uVar7 = caml_young_ptr - 0xc, uVar7 < caml_young_limit) {
        caml_young_ptr = uVar7;
        caml_call_gc();
      }
      puVar8 = (undefined8 *)(caml_young_ptr - 8);
      puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar7;
      *puVar2 = 0x8fd;
      *puVar8 = *unaff_EBX;
    }
    uVar5 = caml_apply2();
    puVar6 = (undefined *)caml_c_call(uVar4,uVar5);
    if (2 < (int)(uVar4 - 2)) {
      local_c = 3;
      do {
        puVar8 = unaff_EBX;
        if (*(char *)((int)unaff_EBX + -4) == -2) {
          while (uVar7 = caml_young_ptr - 0xc, uVar7 < caml_young_limit) {
            caml_young_ptr = uVar7;
            caml_call_gc();
            puVar8 = extraout_ECX;
          }
          puVar1 = (undefined8 *)(caml_young_ptr - 8);
          puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
          caml_young_ptr = uVar7;
          *puVar2 = 0x8fd;
          *puVar1 = *(undefined8 *)((int)puVar8 + local_c * 4 + -4);
        }
        puVar8 = (undefined8 *)caml_apply2();
        if (puVar6[-4] == -2) {
          *(undefined8 *)(puVar6 + local_c * 4 + -4) = *puVar8;
        }
        else {
          caml_modify(puVar6 + local_c * 2 + -2,puVar8);
        }
        bVar9 = local_c != uVar4 - 2;
        local_c = local_c + 2;
      } while (bVar9);
    }
    return puVar6;
  }
  return &camlArray__23;
}



void __regparm3 camlArray__to_list_1121(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  while (uVar3 = caml_young_ptr, uVar4 = caml_young_ptr - 0x14, uVar4 < caml_young_limit) {
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar3 - 0xc) = 5;
  *(code **)(uVar3 - 8) = camlArray__tolist_1123;
  *(undefined4 *)(uVar3 - 4) = param_1;
  camlArray__tolist_1123();
  return;
}



int __regparm3 camlArray__list_length_1126(int param_1)

{
  int unaff_EBX;
  
  for (; unaff_EBX != 1; unaff_EBX = *(int *)(unaff_EBX + 4)) {
    param_1 = param_1 + 2;
  }
  return param_1;
}



undefined * __regparm3 camlArray__of_list_1130(undefined4 *param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  
  if (param_1 != (undefined4 *)0x1) {
    uVar5 = *param_1;
    uVar4 = camlArray__list_length_1126(uVar5,param_1[1]);
    uVar5 = caml_c_call(uVar4,uVar5);
    while( true ) {
      uVar3 = caml_young_ptr;
      uVar6 = caml_young_ptr - 0x14;
      if (caml_young_limit <= uVar6) break;
      caml_young_ptr = uVar6;
      caml_call_gc();
    }
    ppcVar1 = (code **)(caml_young_ptr - 0x10);
    puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
    caml_young_ptr = uVar6;
    *puVar2 = 0x10f7;
    *ppcVar1 = caml_curry2;
    *(undefined4 *)(uVar3 - 0xc) = 5;
    *(code **)(uVar3 - 8) = camlArray__fill_1135;
    *(undefined4 *)(uVar3 - 4) = uVar5;
    puVar7 = (undefined *)camlArray__fill_1135();
    return puVar7;
  }
  return &camlArray__22;
}



undefined4 __regparm3 camlArray__fold_left_1139(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar7;
  int extraout_EDX;
  undefined4 unaff_EBX;
  bool bVar8;
  int iVar9;
  int local_10;
  
  while (uVar4 = caml_young_ptr - 8, uVar4 < caml_young_limit) {
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_3 = extraout_ECX_00;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 4);
  puVar2 = (undefined4 *)(caml_young_ptr - 8);
  caml_young_ptr = uVar4;
  *puVar2 = 0x400;
  *puVar1 = unaff_EBX;
  if ((*(uint *)(param_3 + -4) & 0xff) == 0xfe) {
    iVar5 = 10;
  }
  else {
    iVar5 = 9;
  }
  iVar5 = (*(uint *)(param_3 + -4) >> iVar5 | 1) - 2;
  if (0 < iVar5) {
    local_10 = 1;
    do {
      iVar7 = local_10;
      iVar9 = param_3;
      if (*(char *)(param_3 + -4) == -2) {
        while (uVar4 = caml_young_ptr - 0xc, uVar4 < caml_young_limit) {
          caml_young_ptr = uVar4;
          caml_call_gc(iVar9,param_1);
          param_3 = extraout_ECX;
          iVar7 = extraout_EDX;
        }
        puVar3 = (undefined8 *)(caml_young_ptr - 8);
        puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar4;
        *puVar2 = 0x8fd;
        *puVar3 = *(undefined8 *)(param_3 + -4 + iVar7 * 4);
        param_3 = iVar9;
      }
      uVar6 = caml_apply2();
      caml_modify(puVar1,uVar6);
      bVar8 = local_10 != iVar5;
      local_10 = local_10 + 2;
    } while (bVar8);
  }
  return *puVar1;
}



undefined4 camlArray__fold_right_1145(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_ECX;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBX;
  bool bVar8;
  
  while (uVar4 = caml_young_ptr - 8, uVar4 < caml_young_limit) {
    caml_young_ptr = uVar4;
    caml_call_gc();
    in_ECX = extraout_ECX_00;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 4);
  puVar2 = (undefined4 *)(caml_young_ptr - 8);
  caml_young_ptr = uVar4;
  *puVar2 = 0x400;
  *puVar1 = in_ECX;
  if ((*(uint *)(unaff_EBX + -4) & 0xff) == 0xfe) {
    iVar6 = 10;
  }
  else {
    iVar6 = 9;
  }
  iVar6 = (*(uint *)(unaff_EBX + -4) >> iVar6 | 1) - 2;
  if (0 < iVar6) {
    do {
      iVar7 = iVar6;
      if (*(char *)(unaff_EBX + -4) == -2) {
        while (uVar4 = caml_young_ptr - 0xc, uVar4 < caml_young_limit) {
          caml_young_ptr = uVar4;
          caml_call_gc();
          iVar7 = extraout_ECX;
        }
        puVar3 = (undefined8 *)(caml_young_ptr - 8);
        puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar4;
        *puVar2 = 0x8fd;
        *puVar3 = *(undefined8 *)(unaff_EBX + -4 + iVar7 * 4);
      }
      uVar5 = caml_apply2();
      caml_modify(puVar1,uVar5);
      bVar8 = iVar6 != 1;
      iVar6 = iVar6 + -2;
    } while (bVar8);
  }
  return *puVar1;
}



undefined4 __regparm3 camlArray__sort_1152(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *extraout_EDX;
  undefined8 *unaff_EBX;
  uint uVar7;
  bool bVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  code **ppcVar11;
  
  while (uVar7 = caml_young_ptr, uVar3 = caml_young_ptr - 0x90, uVar3 < caml_young_limit) {
    caml_young_ptr = uVar3;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar9 = (code **)(caml_young_ptr - 0x8c);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x90);
  caml_young_ptr = uVar3;
  *puVar1 = 0x14f7;
  *ppcVar9 = caml_curry2;
  *(undefined4 *)(uVar7 - 0x88) = 5;
  *(code **)(uVar7 - 0x84) = camlArray__maxson_1155;
  *(undefined4 *)(uVar7 - 0x80) = param_1;
  *(undefined8 **)(uVar7 - 0x7c) = unaff_EBX;
  *(undefined4 *)(uVar7 - 0x78) = 0x18f7;
  *(code **)(uVar7 - 0x74) = caml_curry3;
  *(undefined4 *)(uVar7 - 0x70) = 7;
  *(code **)(uVar7 - 0x6c) = camlArray__trickledown_1160;
  *(undefined4 *)(uVar7 - 0x68) = param_1;
  *(undefined8 **)(uVar7 - 100) = unaff_EBX;
  *(code ***)(uVar7 - 0x60) = ppcVar9;
  puVar10 = (undefined8 *)(uVar7 - 0x58);
  *(undefined4 *)(uVar7 - 0x5c) = 0x14f7;
  *(code **)puVar10 = caml_curry3;
  *(undefined4 *)(uVar7 - 0x54) = 7;
  *(code **)(uVar7 - 0x50) = camlArray__trickle_1165;
  *(undefined8 **)(uVar7 - 0x4c) = unaff_EBX;
  *(code ***)(uVar7 - 0x48) = (code **)(uVar7 - 0x74);
  *(undefined4 *)(uVar7 - 0x44) = 0x14f7;
  *(code **)(uVar7 - 0x40) = caml_curry2;
  *(undefined4 *)(uVar7 - 0x3c) = 5;
  *(code **)(uVar7 - 0x38) = camlArray__bubbledown_1170;
  *(undefined8 **)(uVar7 - 0x34) = unaff_EBX;
  *(code ***)(uVar7 - 0x30) = ppcVar9;
  ppcVar9 = (code **)(uVar7 - 0x28);
  *(undefined4 *)(uVar7 - 0x2c) = 0x10f7;
  *ppcVar9 = caml_curry2;
  *(undefined4 *)(uVar7 - 0x24) = 5;
  *(code **)(uVar7 - 0x20) = camlArray__bubble_1174;
  *(code ***)(uVar7 - 0x1c) = (code **)(uVar7 - 0x40);
  ppcVar11 = (code **)(uVar7 - 0x14);
  *(undefined4 *)(uVar7 - 0x18) = 0x14f7;
  *ppcVar11 = caml_curry2;
  *(undefined4 *)(uVar7 - 0x10) = 5;
  *(code **)(uVar7 - 0xc) = camlArray__trickleup_1178;
  *(undefined4 *)(uVar7 - 8) = param_1;
  *(undefined8 **)(uVar7 - 4) = unaff_EBX;
  if ((*(uint *)((int)unaff_EBX + -4) & 0xff) == 0xfe) {
    iVar2 = 10;
  }
  else {
    iVar2 = 9;
  }
  uVar3 = *(uint *)((int)unaff_EBX + -4) >> iVar2 | 1;
  uVar7 = (int)(CONCAT44((int)(uVar3 + 2) >> 0x1f,(int)(uVar3 + 2) >> 1) / 3) * 2 - 1;
  if (0 < (int)uVar7) {
    do {
      uVar4 = *(uint *)((int)unaff_EBX + -4);
      if ((uVar4 & 0xff) == 0xfe) {
        puVar5 = unaff_EBX;
        if (uVar4 >> 10 <= uVar7) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error(ppcVar9,puVar10,ppcVar11);
        }
        while (uVar4 = caml_young_ptr - 0xc, uVar4 < caml_young_limit) {
          caml_young_ptr = uVar4;
          caml_call_gc();
          puVar5 = extraout_EDX;
        }
        puVar6 = (undefined8 *)(caml_young_ptr - 8);
        puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar4;
        *puVar1 = 0x8fd;
        *puVar6 = *(undefined8 *)((int)puVar5 + uVar7 * 4 + -4);
      }
      else if (uVar4 >> 9 <= uVar7) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error(ppcVar9,puVar10,ppcVar11);
      }
      camlArray__trickle_1165();
      bVar8 = uVar7 != 1;
      uVar7 = uVar7 - 2;
    } while (bVar8);
  }
  uVar7 = uVar3 - 2;
  if (4 < (int)uVar7) {
    do {
      uVar4 = *(uint *)((int)unaff_EBX + -4);
      if ((uVar4 & 0xff) == 0xfe) {
        if (uVar4 >> 10 <= uVar7) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error(ppcVar9,puVar10,ppcVar11);
        }
        while (uVar4 = caml_young_ptr - 0xc, uVar4 < caml_young_limit) {
          caml_young_ptr = uVar4;
          caml_call_gc();
        }
        puVar10 = (undefined8 *)(caml_young_ptr - 8);
        puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar4;
        *puVar1 = 0x8fd;
        *puVar10 = *(undefined8 *)((int)unaff_EBX + uVar7 * 4 + -4);
      }
      else {
        if (uVar4 >> 9 <= uVar7) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error(ppcVar9,puVar10,ppcVar11);
        }
        puVar10 = *(undefined8 **)((int)unaff_EBX + uVar7 * 2 + -2);
      }
      uVar4 = *(uint *)((int)unaff_EBX + -4);
      if ((uVar4 & 0xff) == 0xfe) {
        if (uVar4 >> 10 < 2) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error(ppcVar9,puVar10,ppcVar11);
        }
        while (uVar4 = caml_young_ptr - 0xc, uVar4 < caml_young_limit) {
          caml_young_ptr = uVar4;
          caml_call_gc();
        }
        puVar5 = (undefined8 *)(caml_young_ptr - 8);
        puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar4;
        *puVar1 = 0x8fd;
        *puVar5 = *unaff_EBX;
      }
      else {
        if (uVar4 >> 9 < 2) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error(ppcVar9,puVar10,ppcVar11);
        }
        puVar5 = *(undefined8 **)unaff_EBX;
      }
      uVar4 = *(uint *)((int)unaff_EBX + -4);
      if ((uVar4 & 0xff) == 0xfe) {
        if (uVar4 >> 10 <= uVar7) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error(ppcVar9,puVar10,ppcVar11);
        }
        *(undefined8 *)((int)unaff_EBX + uVar7 * 4 + -4) = *puVar5;
      }
      else {
        if (uVar4 >> 9 <= uVar7) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error(ppcVar9,puVar10,ppcVar11);
        }
        caml_modify((int)unaff_EBX + uVar7 * 2 + -2,puVar5);
      }
      camlArray__bubble_1174();
      camlArray__trickleup_1178();
      bVar8 = uVar7 != 5;
      uVar7 = uVar7 - 2;
    } while (bVar8);
  }
  if ((int)uVar3 < 4) {
    return 1;
  }
  uVar7 = *(uint *)((int)unaff_EBX + -4);
  if ((uVar7 & 0xff) == 0xfe) {
    if (uVar7 >> 10 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error(ppcVar9,puVar10,ppcVar11);
    }
    while (uVar7 = caml_young_ptr - 0xc, uVar7 < caml_young_limit) {
      caml_young_ptr = uVar7;
      caml_call_gc();
    }
    puVar5 = (undefined8 *)(caml_young_ptr - 8);
    puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar7;
    *puVar1 = 0x8fd;
    *puVar5 = unaff_EBX[1];
  }
  else {
    if (uVar7 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error(ppcVar9,puVar10,ppcVar11);
    }
    puVar5 = *(undefined8 **)((int)unaff_EBX + 4);
  }
  uVar7 = *(uint *)((int)unaff_EBX + -4);
  if ((uVar7 & 0xff) == 0xfe) {
    if (uVar7 >> 10 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error(ppcVar9,puVar10,ppcVar11);
    }
    while (uVar7 = caml_young_ptr - 0xc, uVar7 < caml_young_limit) {
      caml_young_ptr = uVar7;
      caml_call_gc();
    }
    puVar6 = (undefined8 *)(caml_young_ptr - 8);
    puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar7;
    *puVar1 = 0x8fd;
    *puVar6 = *unaff_EBX;
  }
  else {
    if (uVar7 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error(ppcVar9,puVar10,ppcVar11);
    }
    puVar6 = *(undefined8 **)unaff_EBX;
  }
  uVar7 = *(uint *)((int)unaff_EBX + -4);
  if ((uVar7 & 0xff) == 0xfe) {
    if (uVar7 >> 10 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error(ppcVar9,puVar10,ppcVar11);
    }
    unaff_EBX[1] = *puVar6;
  }
  else {
    if (uVar7 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error(ppcVar9,puVar10,ppcVar11);
    }
    caml_modify((int *)((int)unaff_EBX + 4),puVar6);
  }
  uVar7 = *(uint *)((int)unaff_EBX + -4);
  if ((uVar7 & 0xff) == 0xfe) {
    if (uVar7 >> 10 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *unaff_EBX = *puVar5;
  }
  else {
    if (uVar7 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(unaff_EBX,puVar5);
  }
  return 1;
}



void __regparm3 camlArray__stable_sort_1188(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  code **ppcVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 extraout_ECX;
  uint uVar7;
  int iVar8;
  int extraout_EDX;
  undefined8 *unaff_EBX;
  
  while( true ) {
    uVar7 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x4c;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x48);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x4c);
  caml_young_ptr = uVar4;
  *puVar2 = 0x14f7;
  *ppcVar1 = caml_curry7;
  *(undefined4 *)(uVar7 - 0x44) = 0xf;
  *(code **)(uVar7 - 0x40) = camlArray__merge_1191;
  *(undefined4 *)(uVar7 - 0x3c) = param_1;
  *(undefined8 **)(uVar7 - 0x38) = unaff_EBX;
  *(undefined4 *)(uVar7 - 0x34) = 0x14f7;
  *(code **)(uVar7 - 0x30) = caml_curry4;
  *(undefined4 *)(uVar7 - 0x2c) = 9;
  *(code **)(uVar7 - 0x28) = camlArray__isortto_1209;
  *(undefined4 *)(uVar7 - 0x24) = param_1;
  *(undefined8 **)(uVar7 - 0x20) = unaff_EBX;
  ppcVar3 = (code **)(uVar7 - 0x18);
  *(undefined4 *)(uVar7 - 0x1c) = 0x18f7;
  *ppcVar3 = caml_curry4;
  *(undefined4 *)(uVar7 - 0x14) = 9;
  *(code **)(uVar7 - 0x10) = camlArray__sortto_1217;
  *(undefined8 **)(uVar7 - 0xc) = unaff_EBX;
  *(code ***)(uVar7 - 8) = ppcVar1;
  *(code ***)(uVar7 - 4) = (code **)(uVar7 - 0x30);
  if ((*(uint *)((int)unaff_EBX + -4) & 0xff) == 0xfe) {
    iVar5 = 10;
  }
  else {
    iVar5 = 9;
  }
  uVar7 = *(uint *)((int)unaff_EBX + -4) >> iVar5 | 1;
  if ((int)uVar7 < 0xc) {
    camlArray__isortto_1209();
    return;
  }
  iVar5 = (int)uVar7 >> 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 1;
  }
  iVar5 = (iVar5 >> 1) * 2 + 1;
  iVar8 = (uVar7 - iVar5) + 1;
  uVar7 = *(uint *)((int)unaff_EBX + -4);
  if ((uVar7 & 0xff) == 0xfe) {
    if (uVar7 >> 10 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error(ppcVar3,iVar8,iVar5);
    }
    while( true ) {
      uVar7 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar7) break;
      caml_young_ptr = uVar7;
      caml_call_gc();
      iVar8 = extraout_EDX;
    }
    puVar6 = (undefined8 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar7;
    *puVar2 = 0x8fd;
    *puVar6 = *unaff_EBX;
  }
  else {
    if (uVar7 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error(ppcVar3,iVar8,iVar5);
    }
    puVar6 = *(undefined8 **)unaff_EBX;
  }
  caml_c_call(iVar8,puVar6);
  camlArray__sortto_1217();
  camlArray__sortto_1217();
  caml_extra_params = 1;
  DAT_0807b7e0 = ppcVar1;
  camlArray__merge_1191();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 camlArray__entry(void)

{
  undefined4 *puVar1;
  
  _camlArray = &camlArray__21;
  DAT_08076354 = &camlArray__20;
  _DAT_08076358 = &camlArray__20;
  _DAT_08076368 = &camlArray__19;
  _DAT_0807635c = &camlArray__18;
  _DAT_080763a0 = &camlArray__17;
  _DAT_08076360 = &camlArray__16;
  _DAT_08076364 = &camlArray__15;
  _DAT_0807636c = &camlArray__14;
  _DAT_08076370 = &camlArray__13;
  _DAT_0807637c = &camlArray__12;
  _DAT_08076380 = &camlArray__11;
  _DAT_08076384 = &camlArray__10;
  _DAT_08076388 = &camlArray__9;
  _DAT_08076374 = &camlArray__8;
  _DAT_080763a4 = &camlArray__7;
  _DAT_08076378 = &camlArray__6;
  _DAT_0807638c = &camlArray__5;
  _DAT_08076390 = &camlArray__4;
  puVar1 = (undefined4 *)caml_alloc1();
  *puVar1 = 0x400;
  puVar1[1] = camlArray__3;
  DAT_080763a8 = (char **)(puVar1 + 1);
  _DAT_08076394 = &camlArray__2;
  _DAT_080763ac = 0xb;
  DAT_08076398 = &camlArray__1;
  _DAT_0807639c = &camlArray__1;
  return 1;
}



undefined4 __regparm3 camlList__nth_aux_1045(undefined4 *param_1)

{
  undefined4 uVar1;
  int unaff_EBX;
  
  while( true ) {
    if (param_1 == (undefined4 *)0x1) {
      uVar1 = camlPervasives__failwith_1010();
      return uVar1;
    }
    if (unaff_EBX == 1) break;
    unaff_EBX = unaff_EBX + -2;
    param_1 = (undefined4 *)param_1[1];
  }
  return *param_1;
}



void __regparm3 camlList__rmap_f_1070(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EBX;
  
  while (unaff_EBX != 1) {
    unaff_EBX = *(int *)(unaff_EBX + 4);
    uVar4 = (***(code ***)(param_3 + 0xc))();
    while( true ) {
      uVar3 = caml_young_ptr;
      uVar5 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar5) break;
      caml_young_ptr = uVar5;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar5;
    *puVar2 = 0x800;
    *puVar1 = uVar4;
    *(undefined4 **)(uVar3 - 4) = param_1;
    param_1 = puVar1;
  }
  return;
}



void __regparm3 camlList__rmap2_f_1103(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EBX;
  
  while (unaff_EBX != 1) {
    if (param_3 == 1) goto LAB_08053340;
    param_3 = *(int *)(param_3 + 4);
    unaff_EBX = *(int *)(unaff_EBX + 4);
    uVar4 = caml_apply2();
    while( true ) {
      uVar3 = caml_young_ptr;
      uVar5 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar5) break;
      caml_young_ptr = uVar5;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar5;
    *puVar2 = 0x800;
    *puVar1 = uVar4;
    *(undefined4 **)(uVar3 - 4) = param_1;
    param_1 = puVar1;
  }
  if (param_3 == 1) {
    return;
  }
LAB_08053340:
  camlPervasives__invalid_arg_1012();
  return;
}



void __regparm3 camlList__find_1207(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *unaff_EBX;
  
  while (unaff_EBX != (undefined4 *)0x1) {
    puVar2 = (undefined4 *)unaff_EBX[1];
    uVar3 = *unaff_EBX;
    iVar5 = (***(code ***)(param_3 + 0xc))();
    unaff_EBX = puVar2;
    if (iVar5 != 1) {
      while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0xc, uVar6 < caml_young_limit) {
        caml_young_ptr = uVar6;
        caml_call_gc();
      }
      puVar2 = (undefined4 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar6;
      *puVar1 = 0x800;
      *puVar2 = uVar3;
      *(undefined4 **)(uVar4 - 4) = param_1;
      param_1 = puVar2;
    }
  }
  camlList__rev_append_1051();
  return;
}



void __regparm3 camlList__part_1215(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *unaff_EBX;
  
  while (param_3 != (undefined4 *)0x1) {
    puVar2 = (undefined4 *)param_3[1];
    uVar6 = *param_3;
    iVar4 = (***(code ***)(param_2 + 0xc))();
    param_3 = puVar2;
    if (iVar4 == 1) {
      while( true ) {
        uVar3 = caml_young_ptr;
        uVar5 = caml_young_ptr - 0xc;
        if (caml_young_limit <= uVar5) break;
        caml_young_ptr = uVar5;
        caml_call_gc();
      }
      puVar2 = (undefined4 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar5;
      *puVar1 = 0x800;
      *puVar2 = uVar6;
      *(undefined4 **)(uVar3 - 4) = unaff_EBX;
      unaff_EBX = puVar2;
    }
    else {
      while( true ) {
        uVar3 = caml_young_ptr;
        uVar5 = caml_young_ptr - 0xc;
        if (caml_young_limit <= uVar5) break;
        caml_young_ptr = uVar5;
        caml_call_gc();
      }
      puVar2 = (undefined4 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar5;
      *puVar1 = 0x800;
      *puVar2 = uVar6;
      *(undefined4 **)(uVar3 - 4) = param_1;
      param_1 = puVar2;
    }
  }
  uVar6 = camlList__rev_append_1051();
  uVar7 = camlList__rev_append_1051();
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0xc;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
  }
  puVar2 = (undefined4 *)(caml_young_ptr - 8);
  puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar5;
  *puVar1 = 0x800;
  *puVar2 = uVar7;
  *(undefined4 *)(uVar3 - 4) = uVar6;
  return;
}



void __regparm3 camlList__rev_merge_1251(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *unaff_EBX;
  
  while( true ) {
    if (param_1 == (undefined4 *)0x1) {
      camlList__rev_append_1051();
      return;
    }
    if (unaff_EBX == (undefined4 *)0x1) break;
    puVar2 = (undefined4 *)unaff_EBX[1];
    uVar3 = *unaff_EBX;
    puVar4 = (undefined4 *)param_1[1];
    uVar5 = *param_1;
    iVar7 = caml_apply2();
    if (iVar7 < 2) {
      while( true ) {
        uVar6 = caml_young_ptr;
        uVar8 = caml_young_ptr - 0xc;
        if (caml_young_limit <= uVar8) break;
        caml_young_ptr = uVar8;
        caml_call_gc();
      }
      puVar2 = (undefined4 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar8;
      *puVar1 = 0x800;
      *puVar2 = uVar5;
      *(undefined4 **)(uVar6 - 4) = param_3;
      param_1 = puVar4;
      param_3 = puVar2;
    }
    else {
      while( true ) {
        uVar6 = caml_young_ptr;
        uVar8 = caml_young_ptr - 0xc;
        if (caml_young_limit <= uVar8) break;
        caml_young_ptr = uVar8;
        caml_call_gc();
      }
      puVar4 = (undefined4 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar8;
      *puVar1 = 0x800;
      *puVar4 = uVar3;
      *(undefined4 **)(uVar6 - 4) = param_3;
      param_3 = puVar4;
      unaff_EBX = puVar2;
    }
  }
  camlList__rev_append_1051();
  return;
}



void __regparm3
camlList__rev_merge_rev_1261(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *unaff_EBX;
  
  while( true ) {
    if (param_1 == (undefined4 *)0x1) {
      camlList__rev_append_1051();
      return;
    }
    if (unaff_EBX == (undefined4 *)0x1) break;
    puVar2 = (undefined4 *)unaff_EBX[1];
    uVar3 = *unaff_EBX;
    puVar4 = (undefined4 *)param_1[1];
    uVar5 = *param_1;
    iVar7 = caml_apply2();
    if (iVar7 < 2) {
      while( true ) {
        uVar6 = caml_young_ptr;
        uVar8 = caml_young_ptr - 0xc;
        if (caml_young_limit <= uVar8) break;
        caml_young_ptr = uVar8;
        caml_call_gc();
      }
      puVar4 = (undefined4 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar8;
      *puVar1 = 0x800;
      *puVar4 = uVar3;
      *(undefined4 **)(uVar6 - 4) = param_3;
      param_3 = puVar4;
      unaff_EBX = puVar2;
    }
    else {
      while( true ) {
        uVar6 = caml_young_ptr;
        uVar8 = caml_young_ptr - 0xc;
        if (caml_young_limit <= uVar8) break;
        caml_young_ptr = uVar8;
        caml_call_gc();
      }
      puVar2 = (undefined4 *)(caml_young_ptr - 8);
      puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar8;
      *puVar1 = 0x800;
      *puVar2 = uVar5;
      *(undefined4 **)(uVar6 - 4) = param_3;
      param_1 = puVar4;
      param_3 = puVar2;
    }
  }
  camlList__rev_append_1051();
  return;
}



undefined4 * __regparm3 camlList__rev_sort_1272(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *unaff_EBX;
  
  if (param_1 == 5) {
    if ((unaff_EBX != (undefined4 *)0x1) && ((undefined4 *)unaff_EBX[1] != (undefined4 *)0x1)) {
      uVar7 = *(undefined4 *)unaff_EBX[1];
      uVar2 = *unaff_EBX;
      iVar5 = caml_apply2();
      if (iVar5 < 2) {
        while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x18, uVar6 < caml_young_limit) {
          caml_young_ptr = uVar6;
          caml_call_gc();
        }
        puVar8 = (undefined4 *)(caml_young_ptr - 0x14);
        puVar1 = (undefined4 *)(caml_young_ptr - 0x18);
        caml_young_ptr = uVar6;
        *puVar1 = 0x800;
        *puVar8 = uVar2;
        *(undefined4 *)(uVar4 - 0x10) = 1;
        *(undefined4 *)(uVar4 - 0xc) = 0x800;
        *(undefined4 *)(uVar4 - 8) = uVar7;
        *(undefined4 **)(uVar4 - 4) = puVar8;
        return (undefined4 *)(uVar4 - 8);
      }
      while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x18, uVar6 < caml_young_limit) {
        caml_young_ptr = uVar6;
        caml_call_gc();
      }
      puVar8 = (undefined4 *)(caml_young_ptr - 0x14);
      puVar1 = (undefined4 *)(caml_young_ptr - 0x18);
      caml_young_ptr = uVar6;
      *puVar1 = 0x800;
      *puVar8 = uVar7;
      *(undefined4 *)(uVar4 - 0x10) = 1;
      *(undefined4 *)(uVar4 - 0xc) = 0x800;
      *(undefined4 *)(uVar4 - 8) = uVar2;
      *(undefined4 **)(uVar4 - 4) = puVar8;
      return (undefined4 *)(uVar4 - 8);
    }
  }
  else if ((((param_1 == 7) && (unaff_EBX != (undefined4 *)0x1)) &&
           (puVar8 = (undefined4 *)unaff_EBX[1], puVar8 != (undefined4 *)0x1)) &&
          ((undefined4 *)puVar8[1] != (undefined4 *)0x1)) {
    uVar7 = *(undefined4 *)puVar8[1];
    uVar2 = *puVar8;
    uVar3 = *unaff_EBX;
    iVar5 = caml_apply2();
    if (iVar5 < 2) {
      iVar5 = caml_apply2();
      if (1 < iVar5) {
        while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x24, uVar6 < caml_young_limit) {
          caml_young_ptr = uVar6;
          caml_call_gc();
        }
        puVar8 = (undefined4 *)(caml_young_ptr - 0x20);
        puVar1 = (undefined4 *)(caml_young_ptr - 0x24);
        caml_young_ptr = uVar6;
        *puVar1 = 0x800;
        *puVar8 = uVar7;
        *(undefined4 *)(uVar4 - 0x1c) = 1;
        *(undefined4 *)(uVar4 - 0x18) = 0x800;
        *(undefined4 *)(uVar4 - 0x14) = uVar3;
        *(undefined4 **)(uVar4 - 0x10) = puVar8;
        *(undefined4 *)(uVar4 - 0xc) = 0x800;
        *(undefined4 *)(uVar4 - 8) = uVar2;
        *(undefined4 **)(uVar4 - 4) = (undefined4 *)(uVar4 - 0x14);
        return (undefined4 *)(uVar4 - 8);
      }
      iVar5 = caml_apply2();
      if (iVar5 < 2) {
        while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x24, uVar6 < caml_young_limit) {
          caml_young_ptr = uVar6;
          caml_call_gc();
        }
        puVar8 = (undefined4 *)(caml_young_ptr - 0x20);
        puVar1 = (undefined4 *)(caml_young_ptr - 0x24);
        caml_young_ptr = uVar6;
        *puVar1 = 0x800;
        *puVar8 = uVar3;
        *(undefined4 *)(uVar4 - 0x1c) = 1;
        *(undefined4 *)(uVar4 - 0x18) = 0x800;
        *(undefined4 *)(uVar4 - 0x14) = uVar2;
        *(undefined4 **)(uVar4 - 0x10) = puVar8;
        *(undefined4 *)(uVar4 - 0xc) = 0x800;
        *(undefined4 *)(uVar4 - 8) = uVar7;
        *(undefined4 **)(uVar4 - 4) = (undefined4 *)(uVar4 - 0x14);
        return (undefined4 *)(uVar4 - 8);
      }
      while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x24, uVar6 < caml_young_limit) {
        caml_young_ptr = uVar6;
        caml_call_gc();
      }
      puVar8 = (undefined4 *)(caml_young_ptr - 0x20);
      puVar1 = (undefined4 *)(caml_young_ptr - 0x24);
      caml_young_ptr = uVar6;
      *puVar1 = 0x800;
      *puVar8 = uVar3;
      *(undefined4 *)(uVar4 - 0x1c) = 1;
      *(undefined4 *)(uVar4 - 0x18) = 0x800;
      *(undefined4 *)(uVar4 - 0x14) = uVar7;
      *(undefined4 **)(uVar4 - 0x10) = puVar8;
      *(undefined4 *)(uVar4 - 0xc) = 0x800;
      *(undefined4 *)(uVar4 - 8) = uVar2;
      *(undefined4 **)(uVar4 - 4) = (undefined4 *)(uVar4 - 0x14);
      return (undefined4 *)(uVar4 - 8);
    }
    iVar5 = caml_apply2();
    if (1 < iVar5) {
      while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x24, uVar6 < caml_young_limit) {
        caml_young_ptr = uVar6;
        caml_call_gc();
      }
      puVar8 = (undefined4 *)(caml_young_ptr - 0x20);
      puVar1 = (undefined4 *)(caml_young_ptr - 0x24);
      caml_young_ptr = uVar6;
      *puVar1 = 0x800;
      *puVar8 = uVar7;
      *(undefined4 *)(uVar4 - 0x1c) = 1;
      *(undefined4 *)(uVar4 - 0x18) = 0x800;
      *(undefined4 *)(uVar4 - 0x14) = uVar2;
      *(undefined4 **)(uVar4 - 0x10) = puVar8;
      *(undefined4 *)(uVar4 - 0xc) = 0x800;
      *(undefined4 *)(uVar4 - 8) = uVar3;
      *(undefined4 **)(uVar4 - 4) = (undefined4 *)(uVar4 - 0x14);
      return (undefined4 *)(uVar4 - 8);
    }
    iVar5 = caml_apply2();
    if (iVar5 < 2) {
      while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x24, uVar6 < caml_young_limit) {
        caml_young_ptr = uVar6;
        caml_call_gc();
      }
      puVar8 = (undefined4 *)(caml_young_ptr - 0x20);
      puVar1 = (undefined4 *)(caml_young_ptr - 0x24);
      caml_young_ptr = uVar6;
      *puVar1 = 0x800;
      *puVar8 = uVar2;
      *(undefined4 *)(uVar4 - 0x1c) = 1;
      *(undefined4 *)(uVar4 - 0x18) = 0x800;
      *(undefined4 *)(uVar4 - 0x14) = uVar3;
      *(undefined4 **)(uVar4 - 0x10) = puVar8;
      *(undefined4 *)(uVar4 - 0xc) = 0x800;
      *(undefined4 *)(uVar4 - 8) = uVar7;
      *(undefined4 **)(uVar4 - 4) = (undefined4 *)(uVar4 - 0x14);
      return (undefined4 *)(uVar4 - 8);
    }
    while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x24, uVar6 < caml_young_limit) {
      caml_young_ptr = uVar6;
      caml_call_gc();
    }
    puVar8 = (undefined4 *)(caml_young_ptr - 0x20);
    puVar1 = (undefined4 *)(caml_young_ptr - 0x24);
    caml_young_ptr = uVar6;
    *puVar1 = 0x800;
    *puVar8 = uVar2;
    *(undefined4 *)(uVar4 - 0x1c) = 1;
    *(undefined4 *)(uVar4 - 0x18) = 0x800;
    *(undefined4 *)(uVar4 - 0x14) = uVar7;
    *(undefined4 **)(uVar4 - 0x10) = puVar8;
    *(undefined4 *)(uVar4 - 0xc) = 0x800;
    *(undefined4 *)(uVar4 - 8) = uVar3;
    *(undefined4 **)(uVar4 - 4) = (undefined4 *)(uVar4 - 0x14);
    return (undefined4 *)(uVar4 - 8);
  }
  camlList__chop_1243(param_1 >> 1 | 1);
  uVar7 = camlList__sort_1271();
  camlList__sort_1271(uVar7);
  puVar8 = (undefined4 *)camlList__rev_merge_1251();
  return puVar8;
}



undefined4 * __regparm3 camlList__sort_1271(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *unaff_EBX;
  
  if (param_1 == 5) {
    if ((unaff_EBX != (undefined4 *)0x1) && ((undefined4 *)unaff_EBX[1] != (undefined4 *)0x1)) {
      uVar7 = *(undefined4 *)unaff_EBX[1];
      uVar2 = *unaff_EBX;
      iVar5 = caml_apply2();
      if (1 < iVar5) {
        while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x18, uVar6 < caml_young_limit) {
          caml_young_ptr = uVar6;
          caml_call_gc();
        }
        puVar8 = (undefined4 *)(caml_young_ptr - 0x14);
        puVar1 = (undefined4 *)(caml_young_ptr - 0x18);
        caml_young_ptr = uVar6;
        *puVar1 = 0x800;
        *puVar8 = uVar2;
        *(undefined4 *)(uVar4 - 0x10) = 1;
        *(undefined4 *)(uVar4 - 0xc) = 0x800;
        *(undefined4 *)(uVar4 - 8) = uVar7;
        *(undefined4 **)(uVar4 - 4) = puVar8;
        return (undefined4 *)(uVar4 - 8);
      }
      while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x18, uVar6 < caml_young_limit) {
        caml_young_ptr = uVar6;
        caml_call_gc();
      }
      puVar8 = (undefined4 *)(caml_young_ptr - 0x14);
      puVar1 = (undefined4 *)(caml_young_ptr - 0x18);
      caml_young_ptr = uVar6;
      *puVar1 = 0x800;
      *puVar8 = uVar7;
      *(undefined4 *)(uVar4 - 0x10) = 1;
      *(undefined4 *)(uVar4 - 0xc) = 0x800;
      *(undefined4 *)(uVar4 - 8) = uVar2;
      *(undefined4 **)(uVar4 - 4) = puVar8;
      return (undefined4 *)(uVar4 - 8);
    }
  }
  else if ((((param_1 == 7) && (unaff_EBX != (undefined4 *)0x1)) &&
           (puVar8 = (undefined4 *)unaff_EBX[1], puVar8 != (undefined4 *)0x1)) &&
          ((undefined4 *)puVar8[1] != (undefined4 *)0x1)) {
    uVar7 = *(undefined4 *)puVar8[1];
    uVar2 = *puVar8;
    uVar3 = *unaff_EBX;
    iVar5 = caml_apply2();
    if (1 < iVar5) {
      iVar5 = caml_apply2();
      if (iVar5 < 2) {
        while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x24, uVar6 < caml_young_limit) {
          caml_young_ptr = uVar6;
          caml_call_gc();
        }
        puVar8 = (undefined4 *)(caml_young_ptr - 0x20);
        puVar1 = (undefined4 *)(caml_young_ptr - 0x24);
        caml_young_ptr = uVar6;
        *puVar1 = 0x800;
        *puVar8 = uVar7;
        *(undefined4 *)(uVar4 - 0x1c) = 1;
        *(undefined4 *)(uVar4 - 0x18) = 0x800;
        *(undefined4 *)(uVar4 - 0x14) = uVar3;
        *(undefined4 **)(uVar4 - 0x10) = puVar8;
        *(undefined4 *)(uVar4 - 0xc) = 0x800;
        *(undefined4 *)(uVar4 - 8) = uVar2;
        *(undefined4 **)(uVar4 - 4) = (undefined4 *)(uVar4 - 0x14);
        return (undefined4 *)(uVar4 - 8);
      }
      iVar5 = caml_apply2();
      if (1 < iVar5) {
        while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x24, uVar6 < caml_young_limit) {
          caml_young_ptr = uVar6;
          caml_call_gc();
        }
        puVar8 = (undefined4 *)(caml_young_ptr - 0x20);
        puVar1 = (undefined4 *)(caml_young_ptr - 0x24);
        caml_young_ptr = uVar6;
        *puVar1 = 0x800;
        *puVar8 = uVar3;
        *(undefined4 *)(uVar4 - 0x1c) = 1;
        *(undefined4 *)(uVar4 - 0x18) = 0x800;
        *(undefined4 *)(uVar4 - 0x14) = uVar2;
        *(undefined4 **)(uVar4 - 0x10) = puVar8;
        *(undefined4 *)(uVar4 - 0xc) = 0x800;
        *(undefined4 *)(uVar4 - 8) = uVar7;
        *(undefined4 **)(uVar4 - 4) = (undefined4 *)(uVar4 - 0x14);
        return (undefined4 *)(uVar4 - 8);
      }
      while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x24, uVar6 < caml_young_limit) {
        caml_young_ptr = uVar6;
        caml_call_gc();
      }
      puVar8 = (undefined4 *)(caml_young_ptr - 0x20);
      puVar1 = (undefined4 *)(caml_young_ptr - 0x24);
      caml_young_ptr = uVar6;
      *puVar1 = 0x800;
      *puVar8 = uVar3;
      *(undefined4 *)(uVar4 - 0x1c) = 1;
      *(undefined4 *)(uVar4 - 0x18) = 0x800;
      *(undefined4 *)(uVar4 - 0x14) = uVar7;
      *(undefined4 **)(uVar4 - 0x10) = puVar8;
      *(undefined4 *)(uVar4 - 0xc) = 0x800;
      *(undefined4 *)(uVar4 - 8) = uVar2;
      *(undefined4 **)(uVar4 - 4) = (undefined4 *)(uVar4 - 0x14);
      return (undefined4 *)(uVar4 - 8);
    }
    iVar5 = caml_apply2();
    if (iVar5 < 2) {
      while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x24, uVar6 < caml_young_limit) {
        caml_young_ptr = uVar6;
        caml_call_gc();
      }
      puVar8 = (undefined4 *)(caml_young_ptr - 0x20);
      puVar1 = (undefined4 *)(caml_young_ptr - 0x24);
      caml_young_ptr = uVar6;
      *puVar1 = 0x800;
      *puVar8 = uVar7;
      *(undefined4 *)(uVar4 - 0x1c) = 1;
      *(undefined4 *)(uVar4 - 0x18) = 0x800;
      *(undefined4 *)(uVar4 - 0x14) = uVar2;
      *(undefined4 **)(uVar4 - 0x10) = puVar8;
      *(undefined4 *)(uVar4 - 0xc) = 0x800;
      *(undefined4 *)(uVar4 - 8) = uVar3;
      *(undefined4 **)(uVar4 - 4) = (undefined4 *)(uVar4 - 0x14);
      return (undefined4 *)(uVar4 - 8);
    }
    iVar5 = caml_apply2();
    if (1 < iVar5) {
      while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x24, uVar6 < caml_young_limit) {
        caml_young_ptr = uVar6;
        caml_call_gc();
      }
      puVar8 = (undefined4 *)(caml_young_ptr - 0x20);
      puVar1 = (undefined4 *)(caml_young_ptr - 0x24);
      caml_young_ptr = uVar6;
      *puVar1 = 0x800;
      *puVar8 = uVar2;
      *(undefined4 *)(uVar4 - 0x1c) = 1;
      *(undefined4 *)(uVar4 - 0x18) = 0x800;
      *(undefined4 *)(uVar4 - 0x14) = uVar3;
      *(undefined4 **)(uVar4 - 0x10) = puVar8;
      *(undefined4 *)(uVar4 - 0xc) = 0x800;
      *(undefined4 *)(uVar4 - 8) = uVar7;
      *(undefined4 **)(uVar4 - 4) = (undefined4 *)(uVar4 - 0x14);
      return (undefined4 *)(uVar4 - 8);
    }
    while (uVar4 = caml_young_ptr, uVar6 = caml_young_ptr - 0x24, uVar6 < caml_young_limit) {
      caml_young_ptr = uVar6;
      caml_call_gc();
    }
    puVar8 = (undefined4 *)(caml_young_ptr - 0x20);
    puVar1 = (undefined4 *)(caml_young_ptr - 0x24);
    caml_young_ptr = uVar6;
    *puVar1 = 0x800;
    *puVar8 = uVar2;
    *(undefined4 *)(uVar4 - 0x1c) = 1;
    *(undefined4 *)(uVar4 - 0x18) = 0x800;
    *(undefined4 *)(uVar4 - 0x14) = uVar7;
    *(undefined4 **)(uVar4 - 0x10) = puVar8;
    *(undefined4 *)(uVar4 - 0xc) = 0x800;
    *(undefined4 *)(uVar4 - 8) = uVar3;
    *(undefined4 **)(uVar4 - 4) = (undefined4 *)(uVar4 - 0x14);
    return (undefined4 *)(uVar4 - 8);
  }
  camlList__chop_1243(param_1 >> 1 | 1);
  uVar7 = camlList__rev_sort_1272();
  camlList__rev_sort_1272(uVar7);
  puVar8 = (undefined4 *)camlList__rev_merge_rev_1261();
  return puVar8;
}



int __regparm3 camlList__length_aux_1030(int param_1)

{
  int unaff_EBX;
  
  for (; unaff_EBX != 1; unaff_EBX = *(int *)(unaff_EBX + 4)) {
    param_1 = param_1 + 2;
  }
  return param_1;
}



void camlList__length_1034(void)

{
  camlList__length_aux_1030();
  return;
}



undefined4 __regparm3 camlList__hd_1036(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x1) {
    return *param_1;
  }
  uVar1 = camlPervasives__failwith_1010();
  return uVar1;
}



undefined4 __regparm3 camlList__tl_1039(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 1) {
    return *(undefined4 *)(param_1 + 4);
  }
  uVar1 = camlPervasives__failwith_1010();
  return uVar1;
}



void camlList__nth_1042(void)

{
  int unaff_EBX;
  
  if (unaff_EBX < 1) {
    camlPervasives__invalid_arg_1012();
    return;
  }
  camlList__nth_aux_1045();
  return;
}



undefined4 * __regparm3 camlList__rev_append_1051(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 *unaff_EBX;
  
  while (param_1 != (undefined4 *)0x1) {
    puVar3 = (undefined4 *)param_1[1];
    uVar6 = *param_1;
    while( true ) {
      uVar4 = caml_young_ptr;
      uVar5 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar5) break;
      caml_young_ptr = uVar5;
      caml_call_gc();
      uVar6 = extraout_EDX;
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar5;
    *puVar2 = 0x800;
    *puVar1 = uVar6;
    *(undefined4 **)(uVar4 - 4) = unaff_EBX;
    param_1 = puVar3;
    unaff_EBX = puVar1;
  }
  return unaff_EBX;
}



void camlList__rev_1056(void)

{
  camlList__rev_append_1051();
  return;
}



undefined4 __regparm3 camlList__flatten_1058(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x1) {
    camlList__flatten_1058(*param_1);
    uVar1 = camlPervasives___40_1143();
    return uVar1;
  }
  return 1;
}



undefined4 * __regparm3 camlList__map_1062(code **param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  int unaff_EBX;
  
  if (unaff_EBX != 1) {
    uVar4 = (**param_1)(param_1,*(undefined4 *)(unaff_EBX + 4));
    uVar5 = camlList__map_1062();
    while( true ) {
      uVar3 = caml_young_ptr;
      uVar6 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar6) break;
      caml_young_ptr = uVar6;
      caml_call_gc();
      uVar5 = extraout_ECX;
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar6;
    *puVar2 = 0x800;
    *puVar1 = uVar4;
    *(undefined4 *)(uVar3 - 4) = uVar5;
    return puVar1;
  }
  return (undefined4 *)0x1;
}



void __regparm3 camlList__rev_map_1067(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar3 - 0xc) = 5;
  *(code **)(uVar3 - 8) = camlList__rmap_f_1070;
  *(undefined4 *)(uVar3 - 4) = param_1;
  camlList__rmap_f_1070();
  return;
}



undefined4 __regparm3 camlList__iter_1074(code **param_1)

{
  int unaff_EBX;
  
  while (unaff_EBX != 1) {
    unaff_EBX = *(int *)(unaff_EBX + 4);
    (**param_1)();
  }
  return 1;
}



undefined4 __regparm3 camlList__fold_left_1078(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_EBX;
  
  while (param_3 != 1) {
    param_3 = *(int *)(param_3 + 4);
    unaff_EBX = caml_apply2(param_1);
  }
  return unaff_EBX;
}



undefined4 __regparm3
camlList__fold_right_1084(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *unaff_EBX;
  
  if (unaff_EBX != (undefined4 *)0x1) {
    camlList__fold_right_1084(*unaff_EBX,param_1);
    uVar1 = caml_apply2();
    return uVar1;
  }
  return param_3;
}



undefined4 * __regparm3 camlList__map2_1090(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 extraout_ECX;
  int unaff_EBX;
  
  if (unaff_EBX == 1) {
    if (param_3 == 1) {
      return (undefined4 *)0x1;
    }
  }
  else if (param_3 != 1) {
    uVar3 = caml_apply2(param_1,*(undefined4 *)(unaff_EBX + 4),*(undefined4 *)(param_3 + 4));
    uVar4 = camlList__map2_1090();
    while( true ) {
      uVar2 = caml_young_ptr;
      uVar5 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar5) break;
      caml_young_ptr = uVar5;
      caml_call_gc();
      uVar4 = extraout_ECX;
    }
    puVar6 = (undefined4 *)(caml_young_ptr - 8);
    puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar5;
    *puVar1 = 0x800;
    *puVar6 = uVar3;
    *(undefined4 *)(uVar2 - 4) = uVar4;
    return puVar6;
  }
  puVar6 = (undefined4 *)camlPervasives__invalid_arg_1012();
  return puVar6;
}



void __regparm3 camlList__rev_map2_1099(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry3;
  *(undefined4 *)(uVar3 - 0xc) = 7;
  *(code **)(uVar3 - 8) = camlList__rmap2_f_1103;
  *(undefined4 *)(uVar3 - 4) = param_1;
  camlList__rmap2_f_1103();
  return;
}



undefined4 __regparm3 camlList__iter2_1111(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_EBX;
  
  while (unaff_EBX != 1) {
    if (param_3 == 1) goto LAB_08054480;
    param_3 = *(int *)(param_3 + 4);
    unaff_EBX = *(int *)(unaff_EBX + 4);
    caml_apply2(param_1);
  }
  if (param_3 == 1) {
    return 1;
  }
LAB_08054480:
  uVar1 = camlPervasives__invalid_arg_1012();
  return uVar1;
}



undefined4 __regparm3 camlList__fold_left2_1119(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 unaff_EBX;
  
  while (param_3 != 1) {
    if (param_2 == 1) goto LAB_080544e0;
    param_2 = *(int *)(param_2 + 4);
    param_3 = *(int *)(param_3 + 4);
    unaff_EBX = caml_apply3(param_1);
  }
  if (param_2 == 1) {
    return unaff_EBX;
  }
LAB_080544e0:
  uVar1 = camlPervasives__invalid_arg_1012();
  return uVar1;
}



undefined4 __regparm3
camlList__fold_right2_1128(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *unaff_EBX;
  
  if (unaff_EBX == (undefined4 *)0x1) {
    if (param_3 == (undefined4 *)0x1) {
      return param_2;
    }
  }
  else if (param_3 != (undefined4 *)0x1) {
    camlList__fold_right2_1128(*unaff_EBX,*param_3,param_1);
    uVar1 = caml_apply3();
    return uVar1;
  }
  uVar1 = camlPervasives__invalid_arg_1012();
  return uVar1;
}



undefined4 __regparm3 camlList__for_all_1137(code **param_1)

{
  int iVar1;
  int unaff_EBX;
  
  do {
    if (unaff_EBX == 1) {
      return 3;
    }
    unaff_EBX = *(int *)(unaff_EBX + 4);
    iVar1 = (**param_1)();
  } while (iVar1 != 1);
  return 1;
}



undefined4 __regparm3 camlList__exists_1141(code **param_1)

{
  int iVar1;
  int unaff_EBX;
  
  do {
    if (unaff_EBX == 1) {
      return 1;
    }
    unaff_EBX = *(int *)(unaff_EBX + 4);
    iVar1 = (**param_1)();
  } while (iVar1 == 1);
  return 3;
}



undefined4 __regparm3 camlList__for_all2_1145(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  
  while (unaff_EBX != 1) {
    if (param_3 == 1) goto LAB_08054650;
    param_3 = *(int *)(param_3 + 4);
    unaff_EBX = *(int *)(unaff_EBX + 4);
    iVar1 = caml_apply2(param_1);
    if (iVar1 == 1) {
      return 1;
    }
  }
  if (param_3 == 1) {
    return 3;
  }
LAB_08054650:
  uVar2 = camlPervasives__invalid_arg_1012();
  return uVar2;
}



undefined4 __regparm3 camlList__exists2_1153(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  
  while (unaff_EBX != 1) {
    if (param_3 == 1) goto LAB_080546c0;
    param_3 = *(int *)(param_3 + 4);
    unaff_EBX = *(int *)(unaff_EBX + 4);
    iVar1 = caml_apply2(param_1);
    if (iVar1 != 1) {
      return 3;
    }
  }
  if (param_3 == 1) {
    return 1;
  }
LAB_080546c0:
  uVar2 = camlPervasives__invalid_arg_1012();
  return uVar2;
}



undefined4 __regparm3 camlList__mem_1161(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  
  do {
    if (unaff_EBX == (undefined4 *)0x1) {
      return 1;
    }
    puVar1 = (undefined4 *)unaff_EBX[1];
    iVar2 = caml_c_call(*unaff_EBX,param_1);
    unaff_EBX = puVar1;
  } while (iVar2 != 1);
  return 3;
}



undefined4 __regparm3 camlList__memq_1165(int param_1)

{
  int iVar1;
  int *unaff_EBX;
  
  do {
    if (unaff_EBX == (int *)0x1) {
      return 1;
    }
    iVar1 = *unaff_EBX;
    unaff_EBX = (int *)unaff_EBX[1];
  } while (iVar1 != param_1);
  return 3;
}



undefined4 __regparm3 camlList__assoc_1169(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *unaff_EBX;
  
  do {
    if (unaff_EBX == (int *)0x1) {
      while (uVar6 = caml_young_ptr - 8, uVar6 < caml_young_limit) {
        caml_young_ptr = uVar6;
        caml_call_gc();
      }
      puVar1 = (undefined4 *)(caml_young_ptr - 4);
      puVar2 = (undefined4 *)(caml_young_ptr - 8);
      caml_young_ptr = uVar6;
      *puVar2 = 0x400;
      *puVar1 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    piVar3 = (int *)unaff_EBX[1];
    uVar4 = ((undefined4 *)*unaff_EBX)[1];
    iVar5 = caml_c_call(*(undefined4 *)*unaff_EBX,param_1);
    unaff_EBX = piVar3;
  } while (iVar5 != 1);
  return uVar4;
}



int __regparm3 camlList__assq_1174(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int **unaff_EBX;
  
  do {
    if (unaff_EBX == (int **)0x1) {
      while (uVar4 = caml_young_ptr - 8, uVar4 < caml_young_limit) {
        caml_young_ptr = uVar4;
        caml_call_gc();
      }
      puVar1 = (undefined4 *)(caml_young_ptr - 4);
      puVar2 = (undefined4 *)(caml_young_ptr - 8);
      caml_young_ptr = uVar4;
      *puVar2 = 0x400;
      *puVar1 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    piVar3 = *unaff_EBX;
    unaff_EBX = (int **)unaff_EBX[1];
  } while (*piVar3 != param_1);
  return piVar3[1];
}



undefined4 __regparm3 camlList__mem_assoc_1179(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  
  do {
    if (unaff_EBX == (undefined4 *)0x1) {
      return 1;
    }
    puVar1 = (undefined4 *)unaff_EBX[1];
    iVar2 = caml_c_call(*(undefined4 *)*unaff_EBX,param_1);
    unaff_EBX = puVar1;
  } while (iVar2 != 1);
  return 3;
}



undefined4 __regparm3 camlList__mem_assq_1184(int param_1)

{
  int *piVar1;
  int **unaff_EBX;
  
  do {
    if (unaff_EBX == (int **)0x1) {
      return 1;
    }
    piVar1 = *unaff_EBX;
    unaff_EBX = (int **)unaff_EBX[1];
  } while (*piVar1 != param_1);
  return 3;
}



undefined4 * __regparm3 camlList__remove_assoc_1189(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 extraout_ECX;
  undefined4 *unaff_EBX;
  
  if (unaff_EBX == (undefined4 *)0x1) {
    return (undefined4 *)0x1;
  }
  puVar2 = (undefined4 *)unaff_EBX[1];
  puVar3 = (undefined4 *)*unaff_EBX;
  iVar5 = caml_c_call(*puVar3,param_1,param_1);
  if (iVar5 == 1) {
    return puVar2;
  }
  uVar6 = camlList__remove_assoc_1189();
  while( true ) {
    uVar4 = caml_young_ptr;
    uVar7 = caml_young_ptr - 0xc;
    if (caml_young_limit <= uVar7) break;
    caml_young_ptr = uVar7;
    caml_call_gc();
    uVar6 = extraout_ECX;
  }
  puVar2 = (undefined4 *)(caml_young_ptr - 8);
  puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar7;
  *puVar1 = 0x800;
  *puVar2 = puVar3;
  *(undefined4 *)(uVar4 - 4) = uVar6;
  return puVar2;
}



int ** __regparm3 camlList__remove_assq_1195(int param_1)

{
  int **ppiVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  int **unaff_EBX;
  
  if (unaff_EBX == (int **)0x1) {
    return (int **)0x1;
  }
  piVar3 = *unaff_EBX;
  if (*piVar3 == param_1) {
    return (int **)unaff_EBX[1];
  }
  uVar5 = camlList__remove_assq_1195();
  while( true ) {
    uVar4 = caml_young_ptr;
    uVar6 = caml_young_ptr - 0xc;
    if (caml_young_limit <= uVar6) break;
    caml_young_ptr = uVar6;
    caml_call_gc();
    uVar5 = extraout_ECX;
  }
  ppiVar1 = (int **)(caml_young_ptr - 8);
  puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar6;
  *puVar2 = 0x800;
  *ppiVar1 = piVar3;
  *(undefined4 *)(uVar4 - 4) = uVar5;
  return ppiVar1;
}



undefined4 __regparm3 camlList__find_1201(code **param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_EBX;
  
  do {
    if (unaff_EBX == (undefined4 *)0x1) {
      while (uVar5 = caml_young_ptr - 8, uVar5 < caml_young_limit) {
        caml_young_ptr = uVar5;
        caml_call_gc();
      }
      puVar2 = (undefined4 *)(caml_young_ptr - 4);
      puVar1 = (undefined4 *)(caml_young_ptr - 8);
      caml_young_ptr = uVar5;
      *puVar1 = 0x400;
      *puVar2 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    puVar2 = (undefined4 *)unaff_EBX[1];
    uVar3 = *unaff_EBX;
    iVar4 = (**param_1)();
    unaff_EBX = puVar2;
  } while (iVar4 == 1);
  return uVar3;
}



void __regparm3 camlList__find_all_1205(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar3 - 0xc) = 5;
  *(code **)(uVar3 - 8) = camlList__find_1207;
  *(undefined4 *)(uVar3 - 4) = param_1;
                    // WARNING: Could not recover jumptable at 0x08054acf. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcVar1)();
  return;
}



void __regparm3 camlList__partition_1212(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry3;
  *(undefined4 *)(uVar3 - 0xc) = 7;
  *(code **)(uVar3 - 8) = camlList__part_1215;
  *(undefined4 *)(uVar3 - 4) = param_1;
  camlList__part_1215();
  return;
}



int * __regparm3 camlList__split_1220(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 extraout_EDX;
  
  if (param_1 != (int *)0x1) {
    uVar2 = ((undefined4 *)*param_1)[1];
    uVar3 = *(undefined4 *)*param_1;
    puVar6 = (undefined4 *)camlList__split_1220();
    uVar4 = puVar6[1];
    uVar8 = *puVar6;
    while( true ) {
      uVar5 = caml_young_ptr;
      uVar7 = caml_young_ptr - 0x24;
      if (caml_young_limit <= uVar7) break;
      caml_young_ptr = uVar7;
      caml_call_gc();
      uVar8 = extraout_EDX;
    }
    puVar6 = (undefined4 *)(caml_young_ptr - 0x20);
    puVar1 = (undefined4 *)(caml_young_ptr - 0x24);
    caml_young_ptr = uVar7;
    *puVar1 = 0x800;
    *puVar6 = uVar2;
    *(undefined4 *)(uVar5 - 0x1c) = uVar4;
    *(undefined4 *)(uVar5 - 0x18) = 0x800;
    *(undefined4 *)(uVar5 - 0x14) = uVar3;
    *(undefined4 *)(uVar5 - 0x10) = uVar8;
    *(undefined4 *)(uVar5 - 0xc) = 0x800;
    *(int *)(uVar5 - 8) = (int)(undefined4 *)(uVar5 - 0x14);
    *(undefined4 **)(uVar5 - 4) = puVar6;
    return (int *)(uVar5 - 8);
  }
  return (int *)&camlList__41;
}



int * __regparm3 camlList__combine_1226(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 extraout_ECX;
  undefined4 *unaff_EBX;
  
  if (param_1 == (undefined4 *)0x1) {
    if (unaff_EBX == (undefined4 *)0x1) {
      return (int *)0x1;
    }
  }
  else if (unaff_EBX != (undefined4 *)0x1) {
    uVar3 = *unaff_EBX;
    uVar4 = *param_1;
    uVar6 = camlList__combine_1226();
    while( true ) {
      uVar5 = caml_young_ptr;
      uVar7 = caml_young_ptr - 0x18;
      if (caml_young_limit <= uVar7) break;
      caml_young_ptr = uVar7;
      caml_call_gc();
      uVar6 = extraout_ECX;
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 0x14);
    puVar2 = (undefined4 *)(caml_young_ptr - 0x18);
    caml_young_ptr = uVar7;
    *puVar2 = 0x800;
    *puVar1 = uVar4;
    *(undefined4 *)(uVar5 - 0x10) = uVar3;
    *(undefined4 *)(uVar5 - 0xc) = 0x800;
    *(int *)(uVar5 - 8) = (int)puVar1;
    *(undefined4 *)(uVar5 - 4) = uVar6;
    return (int *)(uVar5 - 8);
  }
  piVar8 = (int *)camlPervasives__invalid_arg_1012();
  return piVar8;
}



undefined4 * camlList__merge_1233(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *unaff_EBX;
  
  if (unaff_EBX == (undefined4 *)0x1) {
    return in_ECX;
  }
  if (in_ECX != (undefined4 *)0x1) {
    uVar5 = *in_ECX;
    uVar7 = *unaff_EBX;
    iVar4 = caml_apply2();
    if (iVar4 < 2) {
      uVar5 = camlList__merge_1233();
      while( true ) {
        uVar3 = caml_young_ptr;
        uVar6 = caml_young_ptr - 0xc;
        if (caml_young_limit <= uVar6) break;
        caml_young_ptr = uVar6;
        caml_call_gc();
        uVar5 = extraout_ECX_00;
      }
      puVar1 = (undefined4 *)(caml_young_ptr - 8);
      puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
      caml_young_ptr = uVar6;
      *puVar2 = 0x800;
      *puVar1 = uVar7;
      *(undefined4 *)(uVar3 - 4) = uVar5;
      return puVar1;
    }
    uVar7 = camlList__merge_1233();
    while( true ) {
      uVar3 = caml_young_ptr;
      uVar6 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar6) break;
      caml_young_ptr = uVar6;
      caml_call_gc();
      uVar7 = extraout_ECX;
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar6;
    *puVar2 = 0x800;
    *puVar1 = uVar5;
    *(undefined4 *)(uVar3 - 4) = uVar7;
    return puVar1;
  }
  return unaff_EBX;
}



int __regparm3 camlList__chop_1243(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  
  while( true ) {
    if (param_1 == 1) {
      return unaff_EBX;
    }
    if (unaff_EBX == 1) break;
    unaff_EBX = *(int *)(unaff_EBX + 4);
    param_1 = param_1 + -2;
  }
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0xc;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 8);
  puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar4;
  *puVar2 = 0x800;
  *puVar1 = &caml_exn_Assert_failure;
  *(undefined ***)(uVar3 - 4) = &camlList__39;
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined4 __regparm3 camlList__stable_sort_1248(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x54;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x50);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x54);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry3;
  *(undefined4 *)(uVar3 - 0x4c) = 7;
  *(code **)(uVar3 - 0x48) = camlList__rev_merge_1251;
  *(undefined4 *)(uVar3 - 0x44) = param_1;
  *(undefined4 *)(uVar3 - 0x40) = 0x10f7;
  *(code **)(uVar3 - 0x3c) = caml_curry3;
  *(undefined4 *)(uVar3 - 0x38) = 7;
  *(code **)(uVar3 - 0x34) = camlList__rev_merge_rev_1261;
  *(undefined4 *)(uVar3 - 0x30) = param_1;
  *(undefined4 *)(uVar3 - 0x2c) = 0x28f7;
  *(code **)(uVar3 - 0x28) = caml_curry2;
  *(undefined4 *)(uVar3 - 0x24) = 5;
  *(code **)(uVar3 - 0x20) = camlList__sort_1271;
  *(undefined4 *)(uVar3 - 0x1c) = 0x10f9;
  *(code **)(uVar3 - 0x18) = caml_curry2;
  *(undefined4 *)(uVar3 - 0x14) = 5;
  *(code **)(uVar3 - 0x10) = camlList__rev_sort_1272;
  *(undefined4 *)(uVar3 - 0xc) = param_1;
  *(code ***)(uVar3 - 8) = ppcVar1;
  *(code ***)(uVar3 - 4) = (code **)(uVar3 - 0x3c);
  iVar5 = camlList__length_aux_1030((code **)(uVar3 - 0x28));
  if (iVar5 < 5) {
    return unaff_EBX;
  }
  uVar6 = camlList__sort_1271();
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 camlList__entry(void)

{
  _DAT_080772ac = &camlList__38;
  _camlList = &camlList__37;
  _DAT_0807720c = &camlList__36;
  _DAT_08077210 = &camlList__35;
  _DAT_08077214 = &camlList__34;
  _DAT_0807721c = DAT_0807555c;
  _DAT_08077220 = &camlList__33;
  _DAT_08077218 = &camlList__32;
  DAT_08077228 = &camlList__31;
  _DAT_08077224 = &camlList__31;
  _DAT_08077230 = &camlList__30;
  _DAT_08077234 = &camlList__29;
  _DAT_0807722c = &camlList__28;
  _DAT_08077238 = &camlList__27;
  _DAT_0807723c = &camlList__26;
  _DAT_08077244 = &camlList__25;
  _DAT_08077248 = &camlList__24;
  _DAT_08077240 = &camlList__23;
  _DAT_0807724c = &camlList__22;
  _DAT_08077250 = &camlList__21;
  _DAT_08077254 = &camlList__20;
  _DAT_08077258 = &camlList__19;
  _DAT_0807725c = &camlList__18;
  _DAT_08077260 = &camlList__17;
  _DAT_08077264 = &camlList__16;
  _DAT_08077268 = &camlList__15;
  _DAT_0807727c = &camlList__14;
  _DAT_08077280 = &camlList__13;
  _DAT_08077284 = &camlList__12;
  _DAT_08077288 = &camlList__11;
  _DAT_0807728c = &camlList__10;
  _DAT_08077290 = &camlList__9;
  _DAT_0807726c = &camlList__8;
  DAT_08077274 = &camlList__7;
  _DAT_08077270 = &camlList__7;
  _DAT_08077278 = &camlList__6;
  _DAT_08077294 = &camlList__5;
  _DAT_08077298 = &camlList__4;
  _DAT_080772a8 = &camlList__3;
  _DAT_080772b0 = &camlList__2;
  DAT_080772a0 = &camlList__1;
  _DAT_0807729c = &camlList__1;
  _DAT_080772a4 = &camlList__1;
  return 1;
}



void __regparm3 camlChar__chr_1032(int param_1)

{
  if ((0 < param_1) && (param_1 < 0x200)) {
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



undefined * __regparm3 camlChar__escaped_1038(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int unaff_retaddr;
  
  if (param_1 == 0x4f) {
    return &camlChar__6;
  }
  if (param_1 != 0xb9) {
    iVar5 = param_1 >> 1;
    switch(param_1) {
    case 0x10:
    case 0x11:
      return &camlChar__8;
    case 0x12:
    case 0x13:
      return &camlChar__9;
    case 0x14:
    case 0x15:
      return &camlChar__10;
    case 0x1a:
    case 0x1b:
      return &camlChar__11;
    case 0x1c:
      uVar4 = unaff_retaddr >> 1;
      if (0xfffffb < uVar4) {
        uVar4 = caml_invalid_argument("String.create");
      }
      puVar3 = (undefined *)caml_alloc_string(uVar4);
      return puVar3;
    }
    iVar2 = caml_c_call(param_1);
    if (iVar2 != 1) {
      puVar3 = (undefined *)caml_c_call(3);
      *puVar3 = (char)iVar5;
      return puVar3;
    }
    puVar3 = (undefined *)caml_c_call(9);
    *puVar3 = 0x5c;
    param_1 = param_1 >> 0x1f;
    puVar3[1] = (char)((int)(CONCAT44(param_1,iVar5) / 100) * 2 + 0x61 >> 1);
    uVar1 = CONCAT44(param_1,iVar5) / 10;
    puVar3[2] = (char)((int)((longlong)
                             ((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) %
                            10) * 2 + 0x61 >> 1);
    puVar3[3] = (char)((int)(CONCAT44(param_1,iVar5) % 10) * 2 + 0x61 >> 1);
    return puVar3;
  }
  return &camlChar__7;
}



int __regparm3 camlChar__lowercase_1043(int param_1)

{
  if ((((param_1 < 0x83) || (0xb5 < param_1)) && ((param_1 < 0x181 || (0x1ad < param_1)))) &&
     ((param_1 < 0x1b1 || (0x1bd < param_1)))) {
    return param_1;
  }
  return param_1 + 0x40;
}



int __regparm3 camlChar__uppercase_1045(int param_1)

{
  if ((((param_1 < 0xc3) || (0xf5 < param_1)) && ((param_1 < 0x1c1 || (0x1ed < param_1)))) &&
     ((param_1 < 0x1f1 || (0x1fd < param_1)))) {
    return param_1;
  }
  return param_1 + -0x40;
}



int __regparm3 camlChar__compare_1048(int param_1)

{
  int unaff_EBX;
  
  return (param_1 - unaff_EBX) + 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 camlChar__entry(void)

{
  _camlChar = &camlChar__5;
  _DAT_08077d84 = &camlChar__4;
  DAT_08077d88 = &camlChar__3;
  DAT_08077d8c = &camlChar__2;
  _DAT_08077d90 = &camlChar__1;
  return 1;
}



undefined4 __regparm3 camlString__fun_1160(int param_1)

{
  int iVar1;
  int unaff_EBX;
  
  **(int **)(unaff_EBX + 8) = **(int **)(unaff_EBX + 8) + 2;
  iVar1 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  **(int **)(unaff_EBX + 0xc) =
       **(int **)(unaff_EBX + 0xc) + (iVar1 - (uint)*(byte *)(param_1 + iVar1)) * 2;
  return 1;
}



undefined4 __regparm3 camlString__fun_1163(int param_1)

{
  int iVar1;
  int unaff_EBX;
  
  iVar1 = (*(uint *)(*(int *)(unaff_EBX + 8) + -4) >> 10) * 4 + -1;
  caml_blit_string(*(undefined4 *)(unaff_EBX + 8),1,*(undefined4 *)(unaff_EBX + 0xc),
                   **(undefined4 **)(unaff_EBX + 0x10),
                   (iVar1 - (uint)*(byte *)(*(int *)(unaff_EBX + 8) + iVar1)) * 2 + 1);
  iVar1 = (*(uint *)(*(int *)(unaff_EBX + 8) + -4) >> 10) * 4 + -1;
  **(int **)(unaff_EBX + 0x10) =
       **(int **)(unaff_EBX + 0x10) + (iVar1 - (uint)*(byte *)(*(int *)(unaff_EBX + 8) + iVar1)) * 2
  ;
  iVar1 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  caml_blit_string(param_1,1,*(undefined4 *)(unaff_EBX + 0xc),**(undefined4 **)(unaff_EBX + 0x10),
                   (iVar1 - (uint)*(byte *)(param_1 + iVar1)) * 2 + 1);
  iVar1 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  **(int **)(unaff_EBX + 0x10) =
       **(int **)(unaff_EBX + 0x10) + (iVar1 - (uint)*(byte *)(param_1 + iVar1)) * 2;
  return 1;
}



undefined4 __regparm3 camlString__make_1038(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 unaff_EBX;
  
  uVar1 = caml_c_call(param_1);
  caml_fill_string(uVar1,1,param_1,unaff_EBX);
  return uVar1;
}



undefined4 __regparm3 camlString__copy_1042(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  iVar2 = (iVar2 - (uint)*(byte *)(param_1 + iVar2)) * 2 + 1;
  uVar1 = caml_c_call(iVar2,iVar2,param_1);
  caml_blit_string(param_1,1,uVar1,1,iVar2);
  return uVar1;
}



undefined4 __regparm3 camlString__sub_1046(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  
  if (((0 < unaff_EBX) && (0 < param_3)) &&
     (iVar1 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1,
     unaff_EBX <= (int)(((iVar1 - (uint)*(byte *)(param_1 + iVar1)) * 2 - param_3) + 2))) {
    uVar2 = caml_c_call(param_3,param_3);
    caml_blit_string(param_1,unaff_EBX,uVar2,1,param_3);
    return uVar2;
  }
  uVar2 = camlPervasives__invalid_arg_1012();
  return uVar2;
}



void __regparm3 camlString__fill_1051(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int unaff_EBX;
  
  if (((0 < unaff_EBX) && (0 < param_3)) &&
     (iVar1 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1,
     unaff_EBX <= (int)(((iVar1 - (uint)*(byte *)(param_1 + iVar1)) * 2 - param_3) + 2))) {
    caml_fill_string(param_1);
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



void __regparm3 camlString__blit_1056(int param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EBX;
  int unaff_ESI;
  
  if ((((0 < unaff_ESI) && (0 < unaff_EBX)) &&
      (iVar1 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1,
      unaff_EBX <= (int)(((iVar1 - (uint)*(byte *)(param_1 + iVar1)) * 2 - unaff_ESI) + 2))) &&
     ((0 < param_2 &&
      (iVar1 = (*(uint *)(param_3 + -4) >> 10) * 4 + -1,
      param_2 <= (int)(((iVar1 - (uint)*(byte *)(param_3 + iVar1)) * 2 - unaff_ESI) + 2))))) {
    caml_blit_string(param_1);
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



undefined4 __regparm3 camlString__iter_1062(code **param_1)

{
  int iVar1;
  int unaff_EBX;
  bool bVar2;
  int local_8;
  
  iVar1 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1;
  iVar1 = (iVar1 - (uint)*(byte *)(unaff_EBX + iVar1)) * 2 + -1;
  if (0 < iVar1) {
    local_8 = 1;
    do {
      (**param_1)();
      bVar2 = local_8 != iVar1;
      local_8 = local_8 + 2;
    } while (bVar2);
  }
  return 1;
}



undefined * __regparm3 camlString__concat_1066(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  int *unaff_EBX;
  
  if (unaff_EBX != (int *)0x1) {
    iVar5 = *unaff_EBX;
    while( true ) {
      uVar6 = caml_young_ptr;
      uVar7 = caml_young_ptr - 0x24;
      if (caml_young_limit <= uVar7) break;
      caml_young_ptr = uVar7;
      caml_call_gc();
    }
    piVar1 = (int *)(caml_young_ptr - 0x20);
    puVar2 = (undefined4 *)(caml_young_ptr - 0x24);
    caml_young_ptr = uVar7;
    *puVar2 = 0x400;
    *piVar1 = 1;
    piVar3 = (int *)(uVar6 - 0x18);
    *(undefined4 *)(uVar6 - 0x1c) = 0x400;
    *piVar3 = 1;
    *(undefined4 *)(uVar6 - 0x14) = 0x10f7;
    *(code **)(uVar6 - 0x10) = camlString__fun_1160;
    *(undefined4 *)(uVar6 - 0xc) = 3;
    *(int **)(uVar6 - 8) = piVar1;
    *(int **)(uVar6 - 4) = piVar3;
    camlList__iter_1074();
    iVar4 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
    puVar8 = (undefined *)
             caml_c_call(*piVar3 + (iVar4 - (uint)*(byte *)(param_1 + iVar4)) * 2 *
                                   (*piVar1 + -2 >> 1));
    iVar4 = (*(uint *)(iVar5 + -4) >> 10) * 4 + -1;
    caml_blit_string(iVar5,1,puVar8,1,(iVar4 - (uint)*(byte *)(iVar5 + iVar4)) * 2 + 1);
    while( true ) {
      uVar6 = caml_young_ptr;
      uVar7 = caml_young_ptr - 0x20;
      if (caml_young_limit <= uVar7) break;
      caml_young_ptr = uVar7;
      caml_call_gc();
    }
    piVar1 = (int *)(caml_young_ptr - 0x1c);
    puVar2 = (undefined4 *)(caml_young_ptr - 0x20);
    caml_young_ptr = uVar7;
    *puVar2 = 0x400;
    iVar4 = (*(uint *)(iVar5 + -4) >> 10) * 4 + -1;
    *piVar1 = (iVar4 - (uint)*(byte *)(iVar5 + iVar4)) * 2 + 1;
    *(undefined4 *)(uVar6 - 0x18) = 0x14f7;
    *(code **)(uVar6 - 0x14) = camlString__fun_1163;
    *(undefined4 *)(uVar6 - 0x10) = 3;
    *(int *)(uVar6 - 0xc) = param_1;
    *(undefined **)(uVar6 - 8) = puVar8;
    *(int **)(uVar6 - 4) = piVar1;
    camlList__iter_1074();
    return puVar8;
  }
  return &camlString__29;
}



int __regparm3 camlString__escaped_1080(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_EDX;
  bool bVar7;
  int local_18;
  int local_14;
  
  iVar6 = param_1;
  while (uVar3 = caml_young_ptr - 8, uVar3 < caml_young_limit) {
    caml_young_ptr = uVar3;
    caml_call_gc();
    iVar6 = extraout_EDX;
  }
  piVar1 = (int *)(caml_young_ptr - 4);
  puVar2 = (undefined4 *)(caml_young_ptr - 8);
  caml_young_ptr = uVar3;
  *puVar2 = 0x400;
  *piVar1 = 1;
  iVar4 = (*(uint *)(iVar6 + -4) >> 10) * 4 + -1;
  iVar6 = (iVar4 - (uint)*(byte *)(iVar6 + iVar4)) * 2 + -1;
  if (0 < iVar6) {
    local_18 = 1;
    do {
      uVar3 = (uint)*(byte *)(param_1 + (local_18 >> 1)) * 2 + 1;
      if (uVar3 < 0x1d) {
        if (uVar3 < 0x17) {
          if (0x10 < uVar3) goto LAB_08055800;
          goto LAB_080557d5;
        }
        if (uVar3 < 0x1b) goto LAB_080557d5;
LAB_08055800:
        iVar4 = 5;
      }
      else {
        if ((uVar3 == 0x45) || (uVar3 == 0xb9)) goto LAB_08055800;
LAB_080557d5:
        iVar4 = caml_c_call(uVar3);
        if (iVar4 == 1) {
          iVar4 = 9;
        }
        else {
          iVar4 = 3;
        }
      }
      *piVar1 = *piVar1 + iVar4 + -1;
      bVar7 = local_18 != iVar6;
      local_18 = local_18 + 2;
    } while (bVar7);
  }
  iVar6 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  if (*piVar1 == (iVar6 - (uint)*(byte *)(param_1 + iVar6)) * 2 + 1) {
    return param_1;
  }
  iVar4 = caml_c_call(*piVar1);
  *piVar1 = 1;
  iVar6 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  iVar6 = (iVar6 - (uint)*(byte *)(param_1 + iVar6)) * 2 + -1;
  if (0 < iVar6) {
    local_14 = 1;
    do {
      iVar5 = (uint)*(byte *)(param_1 + (local_14 >> 1)) * 2;
      uVar3 = iVar5 + 1 >> 1;
      switch(iVar5) {
      case 0:
      case 2:
      case 4:
      case 6:
      case 8:
      case 10:
      case 0xc:
      case 0xe:
      case 0x16:
      case 0x18:
switchD_080558d9_caseD_0:
        iVar5 = caml_c_call(iVar5 + 1);
        if (iVar5 == 1) {
          *(undefined *)(iVar4 + (*piVar1 >> 1)) = 0x5c;
          *piVar1 = *piVar1 + 2;
          *(char *)(iVar4 + (*piVar1 >> 1)) = (char)((int)((uVar3 / 100) * 2 + 0x61) >> 1);
          *piVar1 = *piVar1 + 2;
          *(char *)(iVar4 + (*piVar1 >> 1)) =
               (char)((int)(((ulonglong)uVar3 / 10) % 10) * 2 + 0x61 >> 1);
          *piVar1 = *piVar1 + 2;
          *(char *)(iVar4 + (*piVar1 >> 1)) = (char)((int)((uVar3 % 10) * 2 + 0x61) >> 1);
        }
        else {
          *(char *)(iVar4 + (*piVar1 >> 1)) = (char)uVar3;
        }
        break;
      case 0x10:
        *(undefined *)(iVar4 + (*piVar1 >> 1)) = 0x5c;
        *piVar1 = *piVar1 + 2;
        *(undefined *)(iVar4 + (*piVar1 >> 1)) = 0x62;
        break;
      case 0x12:
        *(undefined *)(iVar4 + (*piVar1 >> 1)) = 0x5c;
        *piVar1 = *piVar1 + 2;
        *(undefined *)(iVar4 + (*piVar1 >> 1)) = 0x74;
        break;
      case 0x14:
        *(undefined *)(iVar4 + (*piVar1 >> 1)) = 0x5c;
        *piVar1 = *piVar1 + 2;
        *(undefined *)(iVar4 + (*piVar1 >> 1)) = 0x6e;
        break;
      case 0x1a:
        *(undefined *)(iVar4 + (*piVar1 >> 1)) = 0x5c;
        *piVar1 = *piVar1 + 2;
        *(undefined *)(iVar4 + (*piVar1 >> 1)) = 0x72;
        break;
      default:
        if (iVar5 - 0x45U < 0x72) goto switchD_080558d9_caseD_0;
        *(undefined *)(iVar4 + (*piVar1 >> 1)) = 0x5c;
        *piVar1 = *piVar1 + 2;
        *(char *)(iVar4 + (*piVar1 >> 1)) = (char)uVar3;
      }
      *piVar1 = *piVar1 + 2;
      bVar7 = local_14 != iVar6;
      local_14 = local_14 + 2;
    } while (bVar7);
  }
  return iVar4;
}



void __regparm3 camlString__map_1090(code **param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  bool bVar4;
  int local_14;
  
  iVar1 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1;
  iVar3 = (iVar1 - (uint)*(byte *)(unaff_EBX + iVar1)) * 2;
  iVar1 = iVar3 + 1;
  if (iVar1 == 1) {
    return;
  }
  iVar1 = caml_c_call(iVar1);
  iVar3 = iVar3 + -1;
  if (0 < iVar3) {
    local_14 = 1;
    do {
      iVar2 = (**param_1)();
      *(char *)(iVar1 + (local_14 >> 1)) = (char)(iVar2 >> 1);
      bVar4 = local_14 != iVar3;
      local_14 = local_14 + 2;
    } while (bVar4);
  }
  return;
}



void camlString__uppercase_1096(void)

{
  camlString__map_1090();
  return;
}



void camlString__lowercase_1098(void)

{
  camlString__map_1090();
  return;
}



void __regparm3 camlString__apply1_1100(code **param_1)

{
  undefined *puVar1;
  int iVar2;
  int unaff_EBX;
  
  iVar2 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1;
  if ((iVar2 - (uint)*(byte *)(unaff_EBX + iVar2) & 0x7fffffff) == 0) {
    return;
  }
  puVar1 = (undefined *)camlString__copy_1042();
  iVar2 = (**param_1)();
  *puVar1 = (char)(iVar2 >> 1);
  return;
}



void camlString__capitalize_1104(void)

{
  camlString__apply1_1100();
  return;
}



void camlString__uncapitalize_1106(void)

{
  camlString__apply1_1100();
  return;
}



int __regparm3 camlString__index_rec_1108(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBX;
  
  while( true ) {
    if (unaff_EBX <= param_3) {
      while( true ) {
        uVar3 = caml_young_ptr - 8;
        if (caml_young_limit <= uVar3) break;
        caml_young_ptr = uVar3;
        caml_call_gc();
      }
      puVar1 = (undefined4 *)(caml_young_ptr - 4);
      puVar2 = (undefined4 *)(caml_young_ptr - 8);
      caml_young_ptr = uVar3;
      *puVar2 = 0x400;
      *puVar1 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    if ((uint)*(byte *)(param_1 + (param_3 >> 1)) * 2 + 1 == param_2) break;
    param_3 = param_3 + 2;
  }
  return param_3;
}



void camlString__index_1113(void)

{
  camlString__index_rec_1108();
  return;
}



void __regparm3 camlString__index_from_1116(int param_1)

{
  int iVar1;
  int unaff_EBX;
  
  iVar1 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  if ((0 < unaff_EBX) && (unaff_EBX <= (int)((iVar1 - (uint)*(byte *)(param_1 + iVar1)) * 2 + 1))) {
    camlString__index_rec_1108();
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



int __regparm3 camlString__rindex_rec_1121(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBX;
  
  while( true ) {
    if (unaff_EBX < 1) {
      while( true ) {
        uVar3 = caml_young_ptr - 8;
        if (caml_young_limit <= uVar3) break;
        caml_young_ptr = uVar3;
        caml_call_gc();
      }
      puVar1 = (undefined4 *)(caml_young_ptr - 4);
      puVar2 = (undefined4 *)(caml_young_ptr - 8);
      caml_young_ptr = uVar3;
      *puVar2 = 0x400;
      *puVar1 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    if ((uint)*(byte *)(param_1 + (unaff_EBX >> 1)) * 2 + 1 == param_3) break;
    unaff_EBX = unaff_EBX + -2;
  }
  return unaff_EBX;
}



void camlString__rindex_1125(void)

{
  camlString__rindex_rec_1121();
  return;
}



void __regparm3 camlString__rindex_from_1128(int param_1)

{
  int iVar1;
  int unaff_EBX;
  
  if ((-2 < unaff_EBX) &&
     (iVar1 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1,
     unaff_EBX < (int)((iVar1 - (uint)*(byte *)(param_1 + iVar1)) * 2 + 1))) {
    camlString__rindex_rec_1121();
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



undefined4 __regparm3 camlString__contains_from_1132(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_EBX;
  
  iVar1 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  if ((0 < unaff_EBX) && (unaff_EBX <= (int)((iVar1 - (uint)*(byte *)(param_1 + iVar1)) * 2 + 1))) {
    piVar2 = (int *)FUN_08055de0();
    if ((undefined **)*piVar2 == &caml_exn_Not_found) {
      return 1;
    }
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar3 = camlPervasives__invalid_arg_1012();
  return uVar3;
}



undefined4 FUN_08055de0(void)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  camlString__index_rec_1108();
  caml_exception_pointer = (undefined4 *)uStack_4;
  return 3;
}



void camlString__contains_1137(void)

{
  camlString__contains_from_1132();
  return;
}



undefined4 __regparm3 camlString__rcontains_from_1140(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_EBX;
  
  if ((0 < unaff_EBX) &&
     (iVar1 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1,
     unaff_EBX < (int)((iVar1 - (uint)*(byte *)(param_1 + iVar1)) * 2 + 1))) {
    piVar2 = (int *)FUN_08055e80();
    if ((undefined **)*piVar2 == &caml_exn_Not_found) {
      return 1;
    }
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar3 = camlPervasives__invalid_arg_1012();
  return uVar3;
}



undefined4 FUN_08055e80(void)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  camlString__rindex_rec_1121();
  caml_exception_pointer = (undefined4 *)uStack_4;
  return 3;
}



void __regparm3 camlString__compare_1145(undefined4 param_1)

{
  caml_string_compare(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 camlString__entry(void)

{
  _camlString = &camlString__24;
  _DAT_08077ea8 = &camlString__23;
  _DAT_08077eac = &camlString__22;
  _DAT_08077eb0 = &camlString__21;
  _DAT_08077eb4 = &camlString__20;
  _DAT_08077ebc = &camlString__19;
  _DAT_08077eb8 = &camlString__18;
  _DAT_08077ec0 = &camlString__17;
  _DAT_08077ef4 = &camlString__16;
  _DAT_08077ee0 = &camlString__15;
  _DAT_08077ee4 = &camlString__14;
  _DAT_08077ef8 = &camlString__13;
  _DAT_08077ee8 = &camlString__12;
  _DAT_08077eec = &camlString__11;
  _DAT_08077efc = &camlString__10;
  _DAT_08077ec4 = &camlString__9;
  _DAT_08077ecc = &camlString__8;
  _DAT_08077f00 = &camlString__7;
  _DAT_08077ec8 = &camlString__6;
  _DAT_08077ed0 = &camlString__5;
  _DAT_08077ed8 = &camlString__4;
  _DAT_08077ed4 = &camlString__3;
  _DAT_08077edc = &camlString__2;
  _DAT_08077ef0 = &camlString__1;
  return 1;
}



void camlSys__fun_1093(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  while( true ) {
    uVar3 = caml_young_ptr - 8;
    if (caml_young_limit <= uVar3) break;
    caml_young_ptr = uVar3;
    caml_call_gc();
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 4);
  puVar2 = (undefined4 *)(caml_young_ptr - 8);
  caml_young_ptr = uVar3;
  *puVar2 = 0x400;
  *puVar1 = DAT_080783a0;
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined4 __regparm3 camlSys__set_signal_1057(undefined4 param_1)

{
  caml_c_call(param_1);
  return 1;
}



void __regparm3 camlSys__catch_break_1082(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (param_1 != 1) {
    while( true ) {
      uVar3 = caml_young_ptr - 8;
      if (caml_young_limit <= uVar3) break;
      caml_young_ptr = uVar3;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 4);
    puVar2 = (undefined4 *)(caml_young_ptr - 8);
    caml_young_ptr = uVar3;
    *puVar2 = 0x400;
    *puVar1 = &camlSys__5;
    camlSys__set_signal_1057();
    return;
  }
  camlSys__set_signal_1057();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 camlSys__entry(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)caml_c_call(1);
  camlSys = puVar1[1];
  _DAT_08078330 = *puVar1;
  puVar1 = (undefined4 *)caml_c_call(1);
  DAT_0807833c = puVar1[1];
  _DAT_08078338 = *puVar1;
  DAT_08078344 = (2 << ((byte)(DAT_0807833c + -0x14 >> 1) & 0x1f)) + -1;
  iVar2 = DAT_0807833c >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 7;
  }
  DAT_08078340 = (iVar2 >> 3) * 2 * (DAT_08078344 >> 1) + -1;
  puVar1 = (undefined4 *)caml_alloc3();
  _DAT_08078334 = puVar1 + 1;
  *puVar1 = 0x400;
  *_DAT_08078334 = 1;
  _DAT_08078348 = &camlSys__4;
  _DAT_0807834c = 0xffffffff;
  _DAT_08078350 = 0xfffffffd;
  _DAT_08078354 = 0xfffffffb;
  _DAT_08078358 = 0xfffffff9;
  _DAT_0807835c = 0xfffffff7;
  _DAT_08078360 = 0xfffffff5;
  _DAT_08078364 = 0xfffffff3;
  _DAT_08078368 = 0xfffffff1;
  _DAT_0807836c = 0xffffffef;
  _DAT_08078370 = 0xffffffed;
  _DAT_08078374 = 0xffffffeb;
  _DAT_08078378 = 0xffffffe9;
  _DAT_0807837c = 0xffffffe7;
  _DAT_08078380 = 0xffffffe5;
  _DAT_08078384 = 0xffffffe3;
  _DAT_08078388 = 0xffffffe1;
  _DAT_0807838c = 0xffffffdf;
  _DAT_08078390 = 0xffffffdd;
  _DAT_08078394 = 0xffffffdb;
  _DAT_08078398 = 0xffffffd9;
  _DAT_0807839c = 0xffffffd7;
  puVar1[2] = 0x400;
  puVar1[3] = camlSys__3;
  DAT_080783a0 = (char **)(puVar1 + 3);
  _DAT_080783a4 = &camlSys__2;
  _DAT_080783a8 = camlSys__1;
  return 1;
}



undefined4 * __regparm3 camlHashtbl__remove_bucket_1188(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  int unaff_EBX;
  
  if (param_1 == (undefined4 *)0x1) {
    return (undefined4 *)0x1;
  }
  puVar2 = (undefined4 *)param_1[2];
  uVar3 = param_1[1];
  uVar4 = *param_1;
  iVar6 = caml_apply2();
  if (iVar6 != 1) {
    **(int **)(unaff_EBX + 0xc) = **(int **)(unaff_EBX + 0xc) + -2;
    return puVar2;
  }
  uVar7 = camlHashtbl__remove_bucket_1188();
  while( true ) {
    uVar5 = caml_young_ptr;
    uVar8 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar8) break;
    caml_young_ptr = uVar8;
    caml_call_gc();
    uVar7 = extraout_ECX;
  }
  puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar8;
  *puVar1 = 0xc00;
  *puVar2 = uVar4;
  *(undefined4 *)(uVar5 - 8) = uVar3;
  *(undefined4 *)(uVar5 - 4) = uVar7;
  return puVar2;
}



undefined4 * __regparm3 camlHashtbl__find_in_bucket_1213(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  do {
    if (param_1 == 1) {
      return (undefined4 *)0x1;
    }
    piVar1 = (int *)(param_1 + 8);
    uVar4 = *(undefined4 *)(param_1 + 4);
    param_1 = *piVar1;
    iVar6 = caml_apply2(*piVar1,unaff_EBX);
  } while (iVar6 == 1);
  uVar7 = camlHashtbl__find_in_bucket_1213();
  while (uVar5 = caml_young_ptr, uVar8 = caml_young_ptr - 0xc, uVar8 < caml_young_limit) {
    caml_young_ptr = uVar8;
    caml_call_gc();
    uVar7 = extraout_ECX;
  }
  puVar2 = (undefined4 *)(caml_young_ptr - 8);
  puVar3 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar8;
  *puVar3 = 0x800;
  *puVar2 = uVar4;
  *(undefined4 *)(uVar5 - 4) = uVar7;
  return puVar2;
}



void __regparm3 camlHashtbl__replace_bucket_1221(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  int unaff_EBX;
  
  if (param_1 == (undefined4 *)0x1) {
    while( true ) {
      uVar8 = caml_young_ptr - 8;
      if (caml_young_limit <= uVar8) break;
      caml_young_ptr = uVar8;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 4);
    puVar2 = (undefined4 *)(caml_young_ptr - 8);
    caml_young_ptr = uVar8;
    *puVar2 = 0x400;
    *puVar1 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar7 = param_1[2];
  uVar3 = param_1[1];
  uVar4 = *param_1;
  iVar5 = caml_apply2();
  if (iVar5 != 1) {
    while( true ) {
      uVar8 = caml_young_ptr;
      uVar6 = caml_young_ptr - 0x10;
      if (caml_young_limit <= uVar6) break;
      caml_young_ptr = uVar6;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
    puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
    caml_young_ptr = uVar6;
    *puVar2 = 0xc00;
    *puVar1 = uVar4;
    *(undefined4 *)(uVar8 - 8) = *(undefined4 *)(unaff_EBX + 0x10);
    *(undefined4 *)(uVar8 - 4) = uVar7;
    return;
  }
  uVar7 = camlHashtbl__replace_bucket_1221();
  while( true ) {
    uVar8 = caml_young_ptr;
    uVar6 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar6) break;
    caml_young_ptr = uVar6;
    caml_call_gc();
    uVar7 = extraout_ECX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar6;
  *puVar2 = 0xc00;
  *puVar1 = uVar4;
  *(undefined4 *)(uVar8 - 8) = uVar3;
  *(undefined4 *)(uVar8 - 4) = uVar7;
  return;
}



undefined4 __regparm3 camlHashtbl__mem_in_bucket_1230(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  
  do {
    if (param_1 == 1) {
      return 1;
    }
    param_1 = *(int *)(param_1 + 8);
    iVar1 = caml_apply2(param_1,unaff_EBX);
  } while (iVar1 == 1);
  return 3;
}



undefined4 __regparm3 camlHashtbl__insert_bucket_1068(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int extraout_ECX;
  uint uVar8;
  uint extraout_EDX;
  int unaff_EBX;
  int iVar9;
  
  if (param_1 == (undefined4 *)0x1) {
    return 1;
  }
  uVar3 = param_1[1];
  uVar4 = *param_1;
  camlHashtbl__insert_bucket_1068();
  iVar9 = *(int *)(unaff_EBX + 0xc) >> 1;
  if (iVar9 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  iVar6 = (***(code ***)(unaff_EBX + 8))();
  uVar8 = (int)(CONCAT44(iVar6 >> 0x1f,iVar6 >> 1) % (longlong)iVar9) * 2 + 1;
  iVar9 = *(int *)(unaff_EBX + 0x10);
  if (*(uint *)(iVar9 + -4) >> 9 <= uVar8) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  while( true ) {
    uVar5 = caml_young_ptr;
    uVar7 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar7) break;
    caml_young_ptr = uVar7;
    caml_call_gc();
    iVar9 = extraout_ECX;
    uVar8 = extraout_EDX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar7;
  *puVar2 = 0xc00;
  *puVar1 = uVar4;
  *(undefined4 *)(uVar5 - 8) = uVar3;
  if (uVar8 < *(uint *)(*(int *)(unaff_EBX + 0x10) + -4) >> 9) {
    *(undefined4 *)(uVar5 - 4) = *(undefined4 *)(*(int *)(unaff_EBX + 0x10) + -2 + uVar8 * 2);
    caml_modify(iVar9 + -2 + uVar8 * 2,puVar1);
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



undefined4 * __regparm3 camlHashtbl__remove_bucket_1083(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  int unaff_EBX;
  
  if (param_1 == (undefined4 *)0x1) {
    return (undefined4 *)0x1;
  }
  puVar2 = (undefined4 *)param_1[2];
  uVar3 = param_1[1];
  uVar4 = *param_1;
  iVar6 = caml_c_call(uVar4,*(undefined4 *)(unaff_EBX + 0xc));
  if (iVar6 == 1) {
    **(int **)(unaff_EBX + 8) = **(int **)(unaff_EBX + 8) + -2;
    return puVar2;
  }
  uVar7 = camlHashtbl__remove_bucket_1083();
  while( true ) {
    uVar5 = caml_young_ptr;
    uVar8 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar8) break;
    caml_young_ptr = uVar8;
    caml_call_gc();
    uVar7 = extraout_ECX;
  }
  puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar8;
  *puVar1 = 0xc00;
  *puVar2 = uVar4;
  *(undefined4 *)(uVar5 - 8) = uVar3;
  *(undefined4 *)(uVar5 - 4) = uVar7;
  return puVar2;
}



undefined4 * __regparm3 camlHashtbl__find_in_bucket_1108(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 extraout_ECX;
  int unaff_EBX;
  
  do {
    if (param_1 == (undefined4 *)0x1) {
      return (undefined4 *)0x1;
    }
    puVar2 = (undefined4 *)param_1[2];
    uVar3 = param_1[1];
    iVar5 = caml_c_call(*param_1,*(undefined4 *)(unaff_EBX + 8));
    param_1 = puVar2;
  } while (iVar5 != 1);
  uVar6 = camlHashtbl__find_in_bucket_1108();
  while (uVar4 = caml_young_ptr, uVar7 = caml_young_ptr - 0xc, uVar7 < caml_young_limit) {
    caml_young_ptr = uVar7;
    caml_call_gc();
    uVar6 = extraout_ECX;
  }
  puVar2 = (undefined4 *)(caml_young_ptr - 8);
  puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar7;
  *puVar1 = 0x800;
  *puVar2 = uVar3;
  *(undefined4 *)(uVar4 - 4) = uVar6;
  return puVar2;
}



void __regparm3 camlHashtbl__replace_bucket_1116(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  int unaff_EBX;
  
  if (param_1 == (undefined4 *)0x1) {
    while( true ) {
      uVar8 = caml_young_ptr - 8;
      if (caml_young_limit <= uVar8) break;
      caml_young_ptr = uVar8;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 4);
    puVar2 = (undefined4 *)(caml_young_ptr - 8);
    caml_young_ptr = uVar8;
    *puVar2 = 0x400;
    *puVar1 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar7 = param_1[2];
  uVar3 = param_1[1];
  uVar4 = *param_1;
  iVar5 = caml_c_call(uVar4,*(undefined4 *)(unaff_EBX + 8));
  if (iVar5 == 1) {
    while( true ) {
      uVar8 = caml_young_ptr;
      uVar6 = caml_young_ptr - 0x10;
      if (caml_young_limit <= uVar6) break;
      caml_young_ptr = uVar6;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
    puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
    caml_young_ptr = uVar6;
    *puVar2 = 0xc00;
    *puVar1 = uVar4;
    *(undefined4 *)(uVar8 - 8) = *(undefined4 *)(unaff_EBX + 0xc);
    *(undefined4 *)(uVar8 - 4) = uVar7;
    return;
  }
  uVar7 = camlHashtbl__replace_bucket_1116();
  while( true ) {
    uVar8 = caml_young_ptr;
    uVar6 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar6) break;
    caml_young_ptr = uVar6;
    caml_call_gc();
    uVar7 = extraout_ECX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar6;
  *puVar2 = 0xc00;
  *puVar1 = uVar4;
  *(undefined4 *)(uVar8 - 8) = uVar3;
  *(undefined4 *)(uVar8 - 4) = uVar7;
  return;
}



undefined4 __regparm3 camlHashtbl__mem_in_bucket_1125(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  
  do {
    if (param_1 == (undefined4 *)0x1) {
      return 1;
    }
    puVar1 = (undefined4 *)param_1[2];
    iVar2 = caml_c_call(*param_1,*(undefined4 *)(unaff_EBX + 8));
    param_1 = puVar1;
  } while (iVar2 != 1);
  return 3;
}



undefined4 __regparm3 camlHashtbl__do_bucket_1132(int param_1)

{
  undefined4 unaff_EBX;
  
  while (param_1 != 1) {
    param_1 = *(int *)(param_1 + 8);
    caml_apply2(param_1,unaff_EBX);
  }
  return 1;
}



undefined4 __regparm3 camlHashtbl__do_bucket_1142(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_EBX;
  
  while (param_1 != 1) {
    param_1 = *(int *)(param_1 + 8);
    unaff_EBX = caml_apply3(param_1,param_3);
  }
  return unaff_EBX;
}



uint camlHashtbl__safehash_1177(void)

{
  uint uVar1;
  int unaff_EBX;
  
  uVar1 = (***(code ***)(*(int *)(unaff_EBX + 8) + 4))();
  return uVar1 & 0x7fffffff;
}



undefined4 __regparm3 camlHashtbl__add_1179(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint extraout_EDX;
  undefined4 unaff_EBX;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1[1] + -4) >> 10;
  if (uVar6 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar3 = (***(code ***)(*(int *)(*(int *)(param_2 + 0xc) + 8) + 4))();
  uVar6 = (int)((ulonglong)(uint)((int)(uVar3 & 0x7fffffff) >> 1) % (ulonglong)(longlong)(int)uVar6)
          * 2 + 1;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    uVar6 = extraout_EDX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar4;
  *puVar2 = 0xc00;
  *puVar1 = unaff_EBX;
  *(undefined4 *)(uVar3 - 8) = param_3;
  if (*(uint *)(param_1[1] + -4) >> 9 <= uVar6) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  *(undefined4 *)(uVar3 - 4) = *(undefined4 *)(param_1[1] + -2 + uVar6 * 2);
  if (*(uint *)(param_1[1] + -4) >> 9 <= uVar6) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  caml_modify(param_1[1] + -2 + uVar6 * 2,puVar1);
  *param_1 = *param_1 + 2;
  if ((int)((*(uint *)(param_1[1] + -4) >> 9 | 1) * 2 + -1) < *param_1) {
    uVar5 = camlHashtbl__resize_1061();
    return uVar5;
  }
  return 1;
}



undefined4 __regparm3 camlHashtbl__remove_1185(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 unaff_EBX;
  uint uVar4;
  int iVar5;
  code **ppcVar6;
  
  while( true ) {
    uVar4 = caml_young_ptr;
    uVar2 = caml_young_ptr - 0x18;
    if (caml_young_limit <= uVar2) break;
    caml_young_ptr = uVar2;
    caml_call_gc();
    param_3 = extraout_ECX;
    param_1 = extraout_EDX;
  }
  ppcVar6 = (code **)(caml_young_ptr - 0x14);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar2;
  *puVar1 = 0x14f7;
  *ppcVar6 = camlHashtbl__remove_bucket_1188;
  *(undefined4 *)(uVar4 - 0x10) = 3;
  *(undefined4 *)(uVar4 - 0xc) = *(undefined4 *)(param_3 + 0xc);
  *(int *)(uVar4 - 8) = param_1;
  *(undefined4 *)(uVar4 - 4) = unaff_EBX;
  uVar4 = *(uint *)(*(int *)(param_1 + 4) + -4) >> 10;
  if (uVar4 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar2 = (***(code ***)(*(int *)(*(int *)(param_3 + 0x10) + 8) + 4))(param_1,ppcVar6);
  uVar4 = (int)((longlong)(ulonglong)(uint)((int)(uVar2 & 0x7fffffff) >> 1) % (longlong)(int)uVar4)
          * 2 + 1;
  iVar5 = *(int *)(param_1 + 4);
  if (*(uint *)(iVar5 + -4) >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error(iVar5,ppcVar6,uVar4);
  }
  if (uVar4 < *(uint *)(*(int *)(param_1 + 4) + -4) >> 9) {
    uVar3 = camlHashtbl__remove_bucket_1188();
    caml_modify(iVar5 + -2 + uVar4 * 2,uVar3);
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error(iVar5,ppcVar6,uVar4);
}



undefined4 __regparm3
camlHashtbl__find_rec_1193(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBX;
  
  do {
    if (unaff_EBX == 1) {
      while (uVar6 = caml_young_ptr - 8, uVar6 < caml_young_limit) {
        caml_young_ptr = uVar6;
        caml_call_gc();
      }
      puVar2 = (undefined4 *)(caml_young_ptr - 4);
      puVar3 = (undefined4 *)(caml_young_ptr - 8);
      caml_young_ptr = uVar6;
      *puVar3 = 0x400;
      *puVar2 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    piVar1 = (int *)(unaff_EBX + 8);
    uVar4 = *(undefined4 *)(unaff_EBX + 4);
    unaff_EBX = *piVar1;
    iVar5 = caml_apply2(param_1,*piVar1,param_3);
  } while (iVar5 == 1);
  return uVar4;
}



undefined4 __regparm3 camlHashtbl__find_1198(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(*(int *)(param_1 + 4) + -4) >> 10;
  if (uVar7 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar3 = (***(code ***)(*(int *)(*(int *)(param_3 + 0x10) + 8) + 4))(param_1,param_3);
  uVar7 = (int)((ulonglong)(uint)((int)(uVar3 & 0x7fffffff) >> 1) % (ulonglong)(longlong)(int)uVar7)
          * 2 + 1;
  if (*(uint *)(*(int *)(param_1 + 4) + -4) >> 9 <= uVar7) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 4) + -2 + uVar7 * 2);
  if (iVar4 == 1) {
    while( true ) {
      uVar7 = caml_young_ptr - 8;
      if (caml_young_limit <= uVar7) break;
      caml_young_ptr = uVar7;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 4);
    puVar2 = (undefined4 *)(caml_young_ptr - 8);
    caml_young_ptr = uVar7;
    *puVar2 = 0x400;
    *puVar1 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  iVar5 = *(int *)(iVar4 + 8);
  uVar6 = *(undefined4 *)(iVar4 + 4);
  iVar4 = caml_apply2();
  if (iVar4 != 1) {
    return uVar6;
  }
  if (iVar5 == 1) {
    while( true ) {
      uVar7 = caml_young_ptr - 8;
      if (caml_young_limit <= uVar7) break;
      caml_young_ptr = uVar7;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 4);
    puVar2 = (undefined4 *)(caml_young_ptr - 8);
    caml_young_ptr = uVar7;
    *puVar2 = 0x400;
    *puVar1 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  iVar4 = *(int *)(iVar5 + 8);
  uVar6 = *(undefined4 *)(iVar5 + 4);
  iVar5 = caml_apply2();
  if (iVar5 != 1) {
    return uVar6;
  }
  if (iVar4 == 1) {
    while( true ) {
      uVar7 = caml_young_ptr - 8;
      if (caml_young_limit <= uVar7) break;
      caml_young_ptr = uVar7;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 4);
    puVar2 = (undefined4 *)(caml_young_ptr - 8);
    caml_young_ptr = uVar7;
    *puVar2 = 0x400;
    *puVar1 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar6 = *(undefined4 *)(iVar4 + 4);
  iVar4 = caml_apply2(*(undefined4 *)(iVar4 + 8));
  if (iVar4 != 1) {
    return uVar6;
  }
  uVar6 = camlHashtbl__find_rec_1193();
  return uVar6;
}



void __regparm3 camlHashtbl__find_all_1210(int param_1,undefined4 param_2,int param_3)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 unaff_EBX;
  uint uVar4;
  
  while( true ) {
    uVar4 = caml_young_ptr;
    uVar3 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar3) break;
    caml_young_ptr = uVar3;
    caml_call_gc();
    param_3 = extraout_ECX;
    param_1 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar3;
  *puVar2 = 0x10f7;
  *ppcVar1 = camlHashtbl__find_in_bucket_1213;
  *(undefined4 *)(uVar4 - 0xc) = 3;
  *(undefined4 *)(uVar4 - 8) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(uVar4 - 4) = unaff_EBX;
  uVar4 = *(uint *)(*(int *)(param_1 + 4) + -4) >> 10;
  if (uVar4 != 0) {
    uVar3 = (***(code ***)(*(int *)(*(int *)(param_3 + 0x10) + 8) + 4))(param_1,ppcVar1);
    if ((int)((ulonglong)(uint)((int)(uVar3 & 0x7fffffff) >> 1) % (ulonglong)(longlong)(int)uVar4) *
        2 + 1U < *(uint *)(*(int *)(param_1 + 4) + -4) >> 9) {
      camlHashtbl__find_in_bucket_1213();
      return;
    }
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined4 __regparm3 camlHashtbl__replace_1217(int *param_1,int param_2,undefined4 param_3)

{
  code **ppcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 unaff_EBX;
  uint uVar9;
  
  while( true ) {
    uVar9 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x18;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_3 = extraout_ECX_00;
    param_2 = extraout_EDX_00;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x14);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar4;
  *puVar2 = 0x14f7;
  *ppcVar1 = camlHashtbl__replace_bucket_1221;
  *(undefined4 *)(uVar9 - 0x10) = 3;
  *(undefined4 *)(uVar9 - 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(uVar9 - 8) = unaff_EBX;
  *(undefined4 *)(uVar9 - 4) = param_3;
  uVar9 = *(uint *)(param_1[1] + -4) >> 10;
  if (uVar9 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar4 = (***(code ***)(*(int *)(*(int *)(param_2 + 0x10) + 8) + 4))();
  uVar9 = (int)((ulonglong)(uint)((int)(uVar4 & 0x7fffffff) >> 1) % (ulonglong)(longlong)(int)uVar9)
          * 2 + 1;
  if (*(uint *)(param_1[1] + -4) >> 9 <= uVar9) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  uVar7 = *(undefined4 *)(param_1[1] + -2 + uVar9 * 2);
  piVar5 = (int *)FUN_08057030();
  if ((undefined **)*piVar5 == &caml_exn_Not_found) {
    iVar8 = param_1[1];
    if (*(uint *)(iVar8 + -4) >> 9 <= uVar9) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    while( true ) {
      uVar4 = caml_young_ptr;
      uVar6 = caml_young_ptr - 0x10;
      if (caml_young_limit <= uVar6) break;
      caml_young_ptr = uVar6;
      caml_call_gc();
      uVar9 = extraout_ECX;
      iVar8 = extraout_EDX;
    }
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    puVar3 = (undefined4 *)(caml_young_ptr - 0x10);
    caml_young_ptr = uVar6;
    *puVar3 = 0xc00;
    *puVar2 = unaff_EBX;
    *(undefined4 *)(uVar4 - 8) = param_3;
    *(undefined4 *)(uVar4 - 4) = uVar7;
    caml_modify(iVar8 + -2 + uVar9 * 2,puVar2);
    *param_1 = *param_1 + 2;
    if ((int)((*(uint *)(param_1[1] + -4) >> 9 | 1) * 2 + -1) < *param_1) {
      uVar7 = camlHashtbl__resize_1061();
      return uVar7;
    }
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined4 __regparm2 FUN_08057030(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int unaff_EBX;
  int param_6;
  int param_7;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  param_6 = *(int *)(unaff_EBX + 4);
  if (param_2 < *(uint *)(param_6 + -4) >> 9) {
    caml_exception_pointer = &uStack_4;
    uVar1 = camlHashtbl__replace_bucket_1221();
    caml_modify(param_6 + -2 + param_7 * 2,uVar1);
    caml_exception_pointer = (undefined4 *)uStack_4;
    return 1;
  }
  caml_exception_pointer = &uStack_4;
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



void __regparm3 camlHashtbl__mem_1227(int param_1,undefined4 param_2,int param_3)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 unaff_EBX;
  uint uVar4;
  
  while( true ) {
    uVar4 = caml_young_ptr;
    uVar3 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar3) break;
    caml_young_ptr = uVar3;
    caml_call_gc();
    param_3 = extraout_ECX;
    param_1 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar3;
  *puVar2 = 0x10f7;
  *ppcVar1 = camlHashtbl__mem_in_bucket_1230;
  *(undefined4 *)(uVar4 - 0xc) = 3;
  *(undefined4 *)(uVar4 - 8) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(uVar4 - 4) = unaff_EBX;
  uVar4 = *(uint *)(*(int *)(param_1 + 4) + -4) >> 10;
  if (uVar4 != 0) {
    uVar3 = (***(code ***)(*(int *)(*(int *)(param_3 + 0x10) + 8) + 4))(param_1,ppcVar1);
    if ((int)((ulonglong)(uint)((int)(uVar3 & 0x7fffffff) >> 1) % (ulonglong)(longlong)(int)uVar4) *
        2 + 1U < *(uint *)(*(int *)(param_1 + 4) + -4) >> 9) {
      camlHashtbl__mem_in_bucket_1230();
      return;
    }
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void __regparm3 camlHashtbl__hash_1031(undefined4 param_1)

{
  caml_hash_univ_param(0x15,0xc9,param_1);
  return;
}



void camlHashtbl__create_1051(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  camlPervasives__max_1025();
  uVar4 = camlPervasives__min_1022();
  uVar4 = caml_c_call(uVar4,1);
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0xc;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 8);
  puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar5;
  *puVar2 = 0x800;
  *puVar1 = 1;
  *(undefined4 *)(uVar3 - 4) = uVar4;
  return;
}



undefined4 __regparm3 camlHashtbl__clear_1054(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (*(uint *)(param_1[1] + -4) >> 9 | 1) - 2;
  uVar1 = 1;
  if (0 < (int)uVar2) {
    do {
      if (*(uint *)(param_1[1] + -4) >> 9 <= uVar1) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      caml_modify(param_1[1] + -2 + uVar1 * 2,1);
      bVar3 = uVar1 != uVar2;
      uVar1 = uVar1 + 2;
    } while (bVar3);
  }
  *param_1 = 1;
  return 1;
}



void __regparm3 camlHashtbl__copy_1057(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  
  uVar4 = camlArray__copy_1049();
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0xc;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
    uVar4 = extraout_ECX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 8);
  puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar5;
  *puVar2 = 0x800;
  *puVar1 = *param_1;
  *(undefined4 *)(uVar3 - 4) = uVar4;
  return;
}



undefined4 __regparm3 camlHashtbl__length_1059(undefined4 *param_1)

{
  return *param_1;
}



undefined4 camlHashtbl__resize_1061(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int unaff_EBX;
  bool bVar8;
  undefined4 extraout_var;
  undefined4 uVar9;
  code **ppcVar10;
  uint local_14;
  
  iVar2 = *(int *)(unaff_EBX + 4);
  uVar4 = *(uint *)(iVar2 + -4) >> 9 | 1;
  uVar5 = camlPervasives__min_1022();
  if (uVar5 == uVar4) {
    return 1;
  }
  uVar9 = extraout_var;
  uVar6 = caml_c_call(uVar5,1);
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar7 = caml_young_ptr - 0x18;
    if (caml_young_limit <= uVar7) break;
    caml_young_ptr = uVar7;
    caml_call_gc();
  }
  ppcVar10 = (code **)(caml_young_ptr - 0x14);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar7;
  *puVar1 = 0x14f7;
  *ppcVar10 = camlHashtbl__insert_bucket_1068;
  *(undefined4 *)(uVar3 - 0x10) = 3;
  *(undefined4 *)(uVar3 - 0xc) = uVar9;
  *(uint *)(uVar3 - 8) = uVar5;
  *(undefined4 *)(uVar3 - 4) = uVar6;
  uVar4 = uVar4 - 2;
  if (0 < (int)uVar4) {
    local_14 = 1;
    do {
      if (*(uint *)(iVar2 + -4) >> 9 <= local_14) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error(ppcVar10);
      }
      camlHashtbl__insert_bucket_1068();
      bVar8 = local_14 != uVar4;
      local_14 = local_14 + 2;
    } while (bVar8);
  }
  caml_modify(unaff_EBX + 4,uVar6);
  return 1;
}



undefined4 __regparm3 camlHashtbl__add_1074(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint extraout_EDX;
  undefined4 unaff_EBX;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1[1] + -4) >> 10;
  if (uVar7 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  iVar4 = caml_hash_univ_param(0x15,0xc9);
  uVar7 = (int)(CONCAT44(iVar4 >> 0x1f,iVar4 >> 1) % (longlong)(int)uVar7) * 2 + 1;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
    uVar7 = extraout_EDX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar5;
  *puVar2 = 0xc00;
  *puVar1 = unaff_EBX;
  *(undefined4 *)(uVar3 - 8) = param_3;
  if (*(uint *)(param_1[1] + -4) >> 9 <= uVar7) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  *(undefined4 *)(uVar3 - 4) = *(undefined4 *)(param_1[1] + -2 + uVar7 * 2);
  if (*(uint *)(param_1[1] + -4) >> 9 <= uVar7) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  caml_modify(param_1[1] + -2 + uVar7 * 2,puVar1);
  *param_1 = *param_1 + 2;
  if ((int)((*(uint *)(param_1[1] + -4) >> 9 | 1) * 2 + -1) < *param_1) {
    uVar6 = camlHashtbl__resize_1061();
    return uVar6;
  }
  return 1;
}



undefined4 __regparm3 camlHashtbl__remove_1080(int param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  uint uVar6;
  
  while( true ) {
    uVar6 = caml_young_ptr;
    uVar3 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar3) break;
    caml_young_ptr = uVar3;
    caml_call_gc();
    unaff_EBX = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar3;
  *puVar2 = 0x10f7;
  *ppcVar1 = camlHashtbl__remove_bucket_1083;
  *(undefined4 *)(uVar6 - 0xc) = 3;
  *(int *)(uVar6 - 8) = param_1;
  *(undefined4 *)(uVar6 - 4) = unaff_EBX;
  uVar6 = *(uint *)(*(int *)(param_1 + 4) + -4) >> 10;
  if (uVar6 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  iVar4 = caml_hash_univ_param(0x15,0xc9,unaff_EBX);
  uVar6 = (int)(CONCAT44(iVar4 >> 0x1f,iVar4 >> 1) % (longlong)(int)uVar6) * 2 + 1;
  iVar4 = *(int *)(param_1 + 4);
  if (*(uint *)(iVar4 + -4) >> 9 <= uVar6) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error(iVar4,uVar6);
  }
  if (uVar6 < *(uint *)(*(int *)(param_1 + 4) + -4) >> 9) {
    uVar5 = camlHashtbl__remove_bucket_1083();
    caml_modify(iVar4 + -2 + uVar6 * 2,uVar5);
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error(iVar4,uVar6);
}



undefined4 __regparm3 camlHashtbl__find_rec_1088(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_EBX;
  
  do {
    if (unaff_EBX == (undefined4 *)0x1) {
      while (uVar5 = caml_young_ptr - 8, uVar5 < caml_young_limit) {
        caml_young_ptr = uVar5;
        caml_call_gc();
      }
      puVar2 = (undefined4 *)(caml_young_ptr - 4);
      puVar1 = (undefined4 *)(caml_young_ptr - 8);
      caml_young_ptr = uVar5;
      *puVar1 = 0x400;
      *puVar2 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    puVar2 = (undefined4 *)unaff_EBX[2];
    uVar3 = unaff_EBX[1];
    iVar4 = caml_c_call(param_1,*unaff_EBX);
    unaff_EBX = puVar2;
  } while (iVar4 != 1);
  return uVar3;
}



undefined4 __regparm3 camlHashtbl__find_1093(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar3 = *(uint *)(*(int *)(param_1 + 4) + -4) >> 10;
  if (uVar3 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  iVar1 = caml_hash_univ_param(0x15,0xc9);
  uVar3 = (int)(CONCAT44(iVar1 >> 0x1f,iVar1 >> 1) % (longlong)(int)uVar3) * 2 + 1;
  if (*(uint *)(*(int *)(param_1 + 4) + -4) >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + -2 + uVar3 * 2);
  if (iVar1 == 1) {
    while( true ) {
      uVar3 = caml_young_ptr - 8;
      if (caml_young_limit <= uVar3) break;
      caml_young_ptr = uVar3;
      caml_call_gc();
    }
    puVar4 = (undefined4 *)(caml_young_ptr - 4);
    puVar5 = (undefined4 *)(caml_young_ptr - 8);
    caml_young_ptr = uVar3;
    *puVar5 = 0x400;
    *puVar4 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  puVar4 = *(undefined4 **)(iVar1 + 8);
  uVar2 = *(undefined4 *)(iVar1 + 4);
  iVar1 = caml_c_call();
  if (iVar1 == 1) {
    return uVar2;
  }
  if (puVar4 == (undefined4 *)0x1) {
    while( true ) {
      uVar3 = caml_young_ptr - 8;
      if (caml_young_limit <= uVar3) break;
      caml_young_ptr = uVar3;
      caml_call_gc();
    }
    puVar4 = (undefined4 *)(caml_young_ptr - 4);
    puVar5 = (undefined4 *)(caml_young_ptr - 8);
    caml_young_ptr = uVar3;
    *puVar5 = 0x400;
    *puVar4 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  puVar5 = (undefined4 *)puVar4[2];
  uVar2 = puVar4[1];
  iVar1 = caml_c_call(unaff_EBX,*puVar4);
  if (iVar1 == 1) {
    return uVar2;
  }
  if (puVar5 == (undefined4 *)0x1) {
    while( true ) {
      uVar3 = caml_young_ptr - 8;
      if (caml_young_limit <= uVar3) break;
      caml_young_ptr = uVar3;
      caml_call_gc();
    }
    puVar4 = (undefined4 *)(caml_young_ptr - 4);
    puVar5 = (undefined4 *)(caml_young_ptr - 8);
    caml_young_ptr = uVar3;
    *puVar5 = 0x400;
    *puVar4 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar2 = puVar5[1];
  iVar1 = caml_c_call(unaff_EBX,*puVar5,puVar5[2]);
  if (iVar1 == 1) {
    return uVar2;
  }
  uVar2 = camlHashtbl__find_rec_1088();
  return uVar2;
}



void __regparm3 camlHashtbl__find_all_1105(int param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  uint uVar5;
  
  while( true ) {
    uVar5 = caml_young_ptr;
    uVar3 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar3) break;
    caml_young_ptr = uVar3;
    caml_call_gc();
    unaff_EBX = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0xc);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar3;
  *puVar2 = 0xcf7;
  *ppcVar1 = camlHashtbl__find_in_bucket_1108;
  *(undefined4 *)(uVar5 - 8) = 3;
  *(undefined4 *)(uVar5 - 4) = unaff_EBX;
  uVar5 = *(uint *)(*(int *)(param_1 + 4) + -4) >> 10;
  if (uVar5 != 0) {
    iVar4 = caml_hash_univ_param(0x15,0xc9,unaff_EBX);
    if ((int)(CONCAT44(iVar4 >> 0x1f,iVar4 >> 1) % (longlong)(int)uVar5) * 2 + 1U <
        *(uint *)(*(int *)(param_1 + 4) + -4) >> 9) {
      camlHashtbl__find_in_bucket_1108();
      return;
    }
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined4 __regparm3 camlHashtbl__replace_1112(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code **ppcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  undefined4 unaff_EBX;
  uint uVar9;
  
  while( true ) {
    uVar9 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_3 = extraout_ECX_00;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = camlHashtbl__replace_bucket_1116;
  *(undefined4 *)(uVar9 - 0xc) = 3;
  *(undefined4 *)(uVar9 - 8) = unaff_EBX;
  *(undefined4 *)(uVar9 - 4) = param_3;
  uVar9 = *(uint *)(param_1[1] + -4) >> 10;
  if (uVar9 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  iVar5 = caml_hash_univ_param(0x15,0xc9);
  uVar9 = (int)(CONCAT44(iVar5 >> 0x1f,iVar5 >> 1) % (longlong)(int)uVar9) * 2 + 1;
  if (*(uint *)(param_1[1] + -4) >> 9 <= uVar9) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  uVar8 = *(undefined4 *)(param_1[1] + -2 + uVar9 * 2);
  piVar6 = (int *)FUN_08057a10();
  if ((undefined **)*piVar6 == &caml_exn_Not_found) {
    iVar5 = param_1[1];
    if (*(uint *)(iVar5 + -4) >> 9 <= uVar9) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    while( true ) {
      uVar4 = caml_young_ptr;
      uVar7 = caml_young_ptr - 0x10;
      if (caml_young_limit <= uVar7) break;
      caml_young_ptr = uVar7;
      caml_call_gc();
      uVar9 = extraout_ECX;
      iVar5 = extraout_EDX;
    }
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    puVar3 = (undefined4 *)(caml_young_ptr - 0x10);
    caml_young_ptr = uVar7;
    *puVar3 = 0xc00;
    *puVar2 = unaff_EBX;
    *(undefined4 *)(uVar4 - 8) = param_3;
    *(undefined4 *)(uVar4 - 4) = uVar8;
    caml_modify(iVar5 + -2 + uVar9 * 2,puVar2);
    *param_1 = *param_1 + 2;
    if ((int)((*(uint *)(param_1[1] + -4) >> 9 | 1) * 2 + -1) < *param_1) {
      uVar8 = camlHashtbl__resize_1061();
      return uVar8;
    }
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined4 __regparm2 FUN_08057a10(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int unaff_EDI;
  int param_6;
  int param_7;
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  param_6 = *(int *)(unaff_EDI + 4);
  if (param_2 < *(uint *)(param_6 + -4) >> 9) {
    caml_exception_pointer = &uStack_4;
    uVar1 = camlHashtbl__replace_bucket_1116();
    caml_modify(param_6 + -2 + param_7 * 2,uVar1);
    caml_exception_pointer = (undefined4 *)uStack_4;
    return 1;
  }
  caml_exception_pointer = &uStack_4;
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



void __regparm3 camlHashtbl__mem_1122(int param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  uint uVar5;
  
  while( true ) {
    uVar5 = caml_young_ptr;
    uVar3 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar3) break;
    caml_young_ptr = uVar3;
    caml_call_gc();
    unaff_EBX = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0xc);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar3;
  *puVar2 = 0xcf7;
  *ppcVar1 = camlHashtbl__mem_in_bucket_1125;
  *(undefined4 *)(uVar5 - 8) = 3;
  *(undefined4 *)(uVar5 - 4) = unaff_EBX;
  uVar5 = *(uint *)(*(int *)(param_1 + 4) + -4) >> 10;
  if (uVar5 != 0) {
    iVar4 = caml_hash_univ_param(0x15,0xc9,unaff_EBX);
    if ((int)(CONCAT44(iVar4 >> 0x1f,iVar4 >> 1) % (longlong)(int)uVar5) * 2 + 1U <
        *(uint *)(*(int *)(param_1 + 4) + -4) >> 9) {
      camlHashtbl__mem_in_bucket_1125();
      return;
    }
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined4 __regparm3 camlHashtbl__iter_1129(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 extraout_EDX;
  int unaff_EBX;
  uint uVar3;
  bool bVar4;
  int iVar5;
  code **ppcVar6;
  uint local_8;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar2 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar2) break;
    caml_young_ptr = uVar2;
    caml_call_gc();
    param_1 = extraout_EDX;
  }
  ppcVar6 = (code **)(caml_young_ptr - 0xc);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar2;
  *puVar1 = 0xcf7;
  *ppcVar6 = camlHashtbl__do_bucket_1132;
  *(undefined4 *)(uVar3 - 8) = 3;
  *(undefined4 *)(uVar3 - 4) = param_1;
  iVar5 = *(int *)(unaff_EBX + 4);
  uVar3 = (*(uint *)(iVar5 + -4) >> 9 | 1) - 2;
  if (0 < (int)uVar3) {
    local_8 = 1;
    do {
      if (*(uint *)(iVar5 + -4) >> 9 <= local_8) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error(iVar5,ppcVar6);
      }
      camlHashtbl__do_bucket_1132();
      bVar4 = local_8 != uVar3;
      local_8 = local_8 + 2;
    } while (bVar4);
  }
  return 1;
}



undefined4 __regparm3
camlHashtbl__fold_1138(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  int unaff_EBX;
  bool bVar5;
  int iVar6;
  code **ppcVar7;
  uint local_8;
  
  while( true ) {
    uVar4 = caml_young_ptr;
    uVar2 = caml_young_ptr - 0x1c;
    if (caml_young_limit <= uVar2) break;
    caml_young_ptr = uVar2;
    caml_call_gc();
    param_3 = extraout_ECX;
  }
  ppcVar7 = (code **)(caml_young_ptr - 0x18);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x1c);
  caml_young_ptr = uVar2;
  *puVar1 = 0x10f7;
  *ppcVar7 = caml_curry2;
  *(undefined4 *)(uVar4 - 0x14) = 5;
  *(code **)(uVar4 - 0x10) = camlHashtbl__do_bucket_1142;
  *(undefined4 *)(uVar4 - 0xc) = param_1;
  iVar6 = *(int *)(unaff_EBX + 4);
  puVar1 = (undefined4 *)(uVar4 - 4);
  *(undefined4 *)(uVar4 - 8) = 0x400;
  *puVar1 = param_3;
  uVar4 = (*(uint *)(iVar6 + -4) >> 9 | 1) - 2;
  if (0 < (int)uVar4) {
    local_8 = 1;
    do {
      if (*(uint *)(iVar6 + -4) >> 9 <= local_8) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error(iVar6,ppcVar7);
      }
      uVar3 = camlHashtbl__do_bucket_1142();
      caml_modify(puVar1,uVar3);
      bVar5 = local_8 != uVar4;
      local_8 = local_8 + 2;
    } while (bVar5);
  }
  return *puVar1;
}



void __regparm3 camlHashtbl__Make_1251(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = DAT_0807849c;
  uVar4 = DAT_08078494;
  uVar3 = camlHashtbl;
  while( true ) {
    uVar9 = caml_young_ptr;
    uVar10 = caml_young_ptr - 0xe8;
    if (caml_young_limit <= uVar10) break;
    caml_young_ptr = uVar10;
    caml_call_gc();
  }
  ppcVar1 = (code **)(caml_young_ptr - 0xe4);
  puVar2 = (undefined4 *)(caml_young_ptr - 0xe8);
  caml_young_ptr = uVar10;
  *puVar2 = 0xcf7;
  *ppcVar1 = camlHashtbl__safehash_1177;
  *(undefined4 *)(uVar9 - 0xe0) = 3;
  *(undefined4 *)(uVar9 - 0xdc) = param_1;
  *(undefined4 *)(uVar9 - 0xd8) = 0x10f7;
  *(code **)(uVar9 - 0xd4) = caml_curry3;
  *(undefined4 *)(uVar9 - 0xd0) = 7;
  *(code **)(uVar9 - 0xcc) = camlHashtbl__add_1179;
  *(code ***)(uVar9 - 200) = ppcVar1;
  *(undefined4 *)(uVar9 - 0xc4) = 0x14f7;
  *(code **)(uVar9 - 0xc0) = caml_curry2;
  *(undefined4 *)(uVar9 - 0xbc) = 5;
  *(code **)(uVar9 - 0xb8) = camlHashtbl__remove_1185;
  *(undefined4 *)(uVar9 - 0xb4) = param_1;
  *(code ***)(uVar9 - 0xb0) = ppcVar1;
  *(undefined4 *)(uVar9 - 0xac) = 0x10f7;
  *(code **)(uVar9 - 0xa8) = caml_curry2;
  *(undefined4 *)(uVar9 - 0xa4) = 5;
  *(code **)(uVar9 - 0xa0) = camlHashtbl__find_rec_1193;
  *(undefined4 *)(uVar9 - 0x9c) = param_1;
  *(undefined4 *)(uVar9 - 0x98) = 0x18f7;
  *(code **)(uVar9 - 0x94) = caml_curry2;
  *(undefined4 *)(uVar9 - 0x90) = 5;
  *(code **)(uVar9 - 0x8c) = camlHashtbl__find_1198;
  *(undefined4 *)(uVar9 - 0x88) = param_1;
  *(code ***)(uVar9 - 0x84) = ppcVar1;
  *(code ***)(uVar9 - 0x80) = (code **)(uVar9 - 0xa8);
  *(undefined4 *)(uVar9 - 0x7c) = 0x14f7;
  *(code **)(uVar9 - 0x78) = caml_curry2;
  *(undefined4 *)(uVar9 - 0x74) = 5;
  *(code **)(uVar9 - 0x70) = camlHashtbl__find_all_1210;
  *(undefined4 *)(uVar9 - 0x6c) = param_1;
  *(code ***)(uVar9 - 0x68) = ppcVar1;
  *(undefined4 *)(uVar9 - 100) = 0x14f7;
  *(code **)(uVar9 - 0x60) = caml_curry3;
  *(undefined4 *)(uVar9 - 0x5c) = 7;
  *(code **)(uVar9 - 0x58) = camlHashtbl__replace_1217;
  *(undefined4 *)(uVar9 - 0x54) = param_1;
  *(code ***)(uVar9 - 0x50) = ppcVar1;
  *(undefined4 *)(uVar9 - 0x4c) = 0x14f7;
  *(code **)(uVar9 - 0x48) = caml_curry2;
  *(undefined4 *)(uVar9 - 0x44) = 5;
  *(code **)(uVar9 - 0x40) = camlHashtbl__mem_1227;
  *(undefined4 *)(uVar9 - 0x3c) = param_1;
  *(code ***)(uVar9 - 0x38) = ppcVar1;
  uVar8 = DAT_080784bc;
  uVar7 = DAT_080784b8;
  uVar6 = DAT_080784b4;
  *(undefined4 *)(uVar9 - 0x34) = 0x3000;
  *(undefined4 *)(uVar9 - 0x30) = uVar3;
  *(undefined4 *)(uVar9 - 0x2c) = uVar4;
  *(undefined4 *)(uVar9 - 0x28) = uVar5;
  *(code ***)(uVar9 - 0x24) = (code **)(uVar9 - 0xd4);
  *(code ***)(uVar9 - 0x20) = (code **)(uVar9 - 0xc0);
  *(code ***)(uVar9 - 0x1c) = (code **)(uVar9 - 0x94);
  *(code ***)(uVar9 - 0x18) = (code **)(uVar9 - 0x78);
  *(code ***)(uVar9 - 0x14) = (code **)(uVar9 - 0x60);
  *(code ***)(uVar9 - 0x10) = (code **)(uVar9 - 0x48);
  *(undefined4 *)(uVar9 - 0xc) = uVar6;
  *(undefined4 *)(uVar9 - 8) = uVar7;
  *(undefined4 *)(uVar9 - 4) = uVar8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 camlHashtbl__entry(void)

{
  DAT_080784c4 = &camlHashtbl__16;
  camlHashtbl = &camlHashtbl__15;
  DAT_08078494 = &camlHashtbl__14;
  DAT_0807849c = &camlHashtbl__13;
  DAT_080784bc = &camlHashtbl__12;
  _DAT_080784c8 = &camlHashtbl__11;
  _DAT_08078498 = &camlHashtbl__10;
  _DAT_080784ac = &camlHashtbl__9;
  _DAT_080784cc = &camlHashtbl__8;
  _DAT_080784a0 = &camlHashtbl__7;
  _DAT_080784a4 = &camlHashtbl__6;
  _DAT_080784b0 = &camlHashtbl__5;
  _DAT_080784a8 = &camlHashtbl__4;
  DAT_080784b4 = &camlHashtbl__3;
  DAT_080784b8 = &camlHashtbl__2;
  _DAT_080784c0 = &camlHashtbl__1;
  return 1;
}



int __regparm3 camlBuffer__advance_1104(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBX;
  
  while( true ) {
    if (param_3 <= unaff_EBX) {
      while( true ) {
        uVar5 = caml_young_ptr - 8;
        if (caml_young_limit <= uVar5) break;
        caml_young_ptr = uVar5;
        caml_call_gc();
      }
      puVar1 = (undefined4 *)(caml_young_ptr - 4);
      puVar2 = (undefined4 *)(caml_young_ptr - 8);
      caml_young_ptr = uVar5;
      *puVar2 = 0x400;
      *puVar1 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    iVar4 = *(int *)(param_2 + 0x14);
    uVar5 = unaff_EBX >> 1;
    iVar3 = (*(uint *)(iVar4 + -4) >> 10) * 4 + -1;
    if (iVar3 - (uint)*(byte *)(iVar4 + iVar3) <= uVar5) break;
    if ((uint)*(byte *)(iVar4 + uVar5) * 2 + 1 == *(int *)(param_2 + 0xc)) {
      unaff_EBX = unaff_EBX + 2;
      param_1 = param_1 + 2;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x14);
      iVar3 = (*(uint *)(iVar4 + -4) >> 10) * 4 + -1;
      if (iVar3 - (uint)*(byte *)(iVar4 + iVar3) <= uVar5) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      if ((uint)*(byte *)(iVar4 + uVar5) * 2 + 1 == *(int *)(param_2 + 0x10)) {
        if (param_1 == 1) {
          return unaff_EBX;
        }
        unaff_EBX = unaff_EBX + 2;
        param_1 = param_1 + -2;
      }
      else {
        unaff_EBX = unaff_EBX + 2;
      }
    }
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



void __regparm3 camlBuffer__advance_1111(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  
  while( true ) {
    if (unaff_EBX <= param_1) {
      return;
    }
    iVar3 = *(int *)(param_3 + 0xc);
    iVar1 = (*(uint *)(iVar3 + -4) >> 10) * 4 + -1;
    if (iVar1 - (uint)*(byte *)(iVar3 + iVar1) <= (uint)(param_1 >> 1)) break;
    iVar1 = (uint)*(byte *)(iVar3 + (param_1 >> 1)) * 2;
    uVar2 = iVar1 + 1;
    if (uVar2 < 0xbf) {
      if (uVar2 < 0x75) {
        if (uVar2 < 0x61) {
          return;
        }
      }
      else if (0x33 < iVar1 - 0x81U) {
        return;
      }
    }
    else {
                    // WARNING (jumptable): Sanity check requires truncation of jumptable
                    // WARNING: Could not find normalized switch variable to match jumptable
      switch(iVar1) {
      case 0x180:
      case 0x182:
      case 0x184:
      case 0x18e:
      case 400:
      case 0x192:
      case 0x194:
      case 0x196:
      case 0x19c:
      case 0x19e:
      case 0x1a8:
      case 0x1b2:
      case 0x1b6:
      case 0x1b8:
      case 0x1c0:
      case 0x1c2:
      case 0x1c4:
      case 0x1ce:
      case 0x1d0:
      case 0x1d2:
      case 0x1d4:
      case 0x1d6:
      case 0x1dc:
      case 0x1de:
      case 0x1e8:
      case 0x1f2:
      case 0x1f6:
      case 0x1f8:
        break;
      case 0x186:
      case 0x188:
      case 0x18a:
      case 0x18c:
      case 0x198:
      case 0x19a:
      case 0x1a0:
      case 0x1a2:
      case 0x1a4:
      case 0x1a6:
      case 0x1aa:
      case 0x1ac:
      case 0x1ae:
      case 0x1b0:
      case 0x1b4:
      case 0x1ba:
      case 0x1bc:
      case 0x1be:
      case 0x1c6:
      case 0x1c8:
      case 0x1ca:
      case 0x1cc:
      case 0x1d8:
      case 0x1da:
      case 0x1e0:
      case 0x1e2:
      case 0x1e4:
      case 0x1e6:
      case 0x1ea:
      case 0x1ec:
      case 0x1ee:
      case 0x1f0:
      case 500:
      case 0x1fa:
      case 0x1fc:
      case 0x1fe:
        return;
      default:
        if (uVar2 == 0xc1) {
          return;
        }
      }
    }
    param_1 = param_1 + 2;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



undefined4 __regparm3 camlBuffer__subst_1127(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  
  while( true ) {
    if (*(int *)(param_3 + 0x18) <= unaff_EBX) {
      if (param_1 == 0xb9) {
        uVar3 = camlBuffer__add_char_1072();
        return uVar3;
      }
      return 1;
    }
    iVar1 = *(int *)(param_3 + 0x14);
    iVar2 = (*(uint *)(iVar1 + -4) >> 10) * 4 + -1;
    if (iVar2 - (uint)*(byte *)(iVar1 + iVar2) <= (uint)(unaff_EBX >> 1)) break;
    iVar2 = (uint)*(byte *)(iVar1 + (unaff_EBX >> 1)) * 2 + 1;
    if (iVar2 == 0x49) {
      if (param_1 == 0xb9) {
        camlBuffer__add_char_1072();
        unaff_EBX = unaff_EBX + 2;
        param_1 = 0x41;
      }
      else {
        iVar2 = camlBuffer__find_ident_1114();
        unaff_EBX = *(int *)(iVar2 + 4);
        (***(code ***)(param_3 + 0x10))();
        camlBuffer__add_string_1082();
        param_1 = 0x41;
      }
    }
    else if (param_1 == 0xb9) {
      camlBuffer__add_char_1072(iVar2);
      camlBuffer__add_char_1072();
      unaff_EBX = unaff_EBX + 2;
      param_1 = 0x41;
    }
    else if (iVar2 == 0xb9) {
      unaff_EBX = unaff_EBX + 2;
      param_1 = iVar2;
    }
    else {
      camlBuffer__add_char_1072();
      unaff_EBX = unaff_EBX + 2;
      param_1 = iVar2;
    }
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



void __regparm3 camlBuffer__create_1039(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  int local_4;
  
  if (param_1 < 3) {
    param_1 = 3;
  }
  local_4 = param_1;
  if (DAT_08078340 < param_1) {
    local_4 = DAT_08078340;
  }
  uVar4 = caml_c_call(local_4);
  while (uVar3 = caml_young_ptr, uVar5 = caml_young_ptr - 0x14, uVar5 < caml_young_limit) {
    caml_young_ptr = uVar5;
    caml_call_gc();
    uVar4 = extraout_ECX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar5;
  *puVar2 = 0x1000;
  *puVar1 = uVar4;
  *(undefined4 *)(uVar3 - 0xc) = 1;
  *(int *)(uVar3 - 8) = local_4;
  *(undefined4 *)(uVar3 - 4) = uVar4;
  return;
}



void camlBuffer__contents_1044(void)

{
  camlString__sub_1046();
  return;
}



undefined4 __regparm3 camlBuffer__sub_1046(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_EBX;
  
  if (((0 < unaff_EBX) && (0 < param_3)) && (unaff_EBX <= (*(int *)(param_1 + 4) - param_3) + 1)) {
    uVar1 = caml_c_call(param_3,param_1);
    camlString__blit_1056();
    return uVar1;
  }
  uVar1 = camlPervasives__invalid_arg_1012();
  return uVar1;
}



void __regparm3 camlBuffer__blit_1051(int param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EBX;
  int unaff_ESI;
  
  if ((((0 < unaff_ESI) && (0 < unaff_EBX)) &&
      (unaff_EBX <= (*(int *)(param_1 + 4) - unaff_ESI) + 1)) &&
     ((0 < param_2 &&
      (iVar1 = (*(uint *)(param_3 + -4) >> 10) * 4 + -1,
      param_2 <= (int)(((iVar1 - (uint)*(byte *)(param_3 + iVar1)) * 2 - unaff_ESI) + 2))))) {
    camlString__blit_1056();
    return;
  }
  camlPervasives__invalid_arg_1012();
  return;
}



int __regparm3 camlBuffer__nth_1057(int *param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  
  if ((0 < unaff_EBX) && (unaff_EBX < param_1[1])) {
    iVar1 = *param_1;
    iVar2 = (*(uint *)(iVar1 + -4) >> 10) * 4 + -1;
    if ((uint)(unaff_EBX >> 1) < iVar2 - (uint)*(byte *)(iVar1 + iVar2)) {
      return (uint)*(byte *)(iVar1 + (unaff_EBX >> 1)) * 2 + 1;
    }
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  iVar2 = camlPervasives__invalid_arg_1012();
  return iVar2;
}



undefined4 __regparm3 camlBuffer__length_1060(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



undefined4 __regparm3 camlBuffer__clear_1062(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 1;
  return 1;
}



undefined4 __regparm3 camlBuffer__reset_1064(int *param_1)

{
  int iVar1;
  
  param_1[1] = 1;
  caml_modify(param_1,param_1[3]);
  iVar1 = (*(uint *)(*param_1 + -4) >> 10) * 4 + -1;
  param_1[2] = (iVar1 - (uint)*(byte *)(*param_1 + iVar1)) * 2 + 1;
  return 1;
}



undefined4 __regparm3 camlBuffer__resize_1066(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int iVar6;
  int extraout_EDX;
  int unaff_EBX;
  
  iVar6 = *(int *)(param_1 + 8);
  iVar5 = param_1;
  while( true ) {
    uVar3 = caml_young_ptr - 8;
    if (caml_young_limit <= uVar3) break;
    caml_young_ptr = uVar3;
    caml_call_gc();
    iVar5 = extraout_ECX;
    iVar6 = extraout_EDX;
  }
  piVar1 = (int *)(caml_young_ptr - 4);
  puVar2 = (undefined4 *)(caml_young_ptr - 8);
  caml_young_ptr = uVar3;
  *puVar2 = 0x400;
  *piVar1 = iVar6;
  while (*piVar1 < *(int *)(iVar5 + 4) + -1 + unaff_EBX) {
    *piVar1 = (*piVar1 >> 1) * 4 + 1;
  }
  if (DAT_08078340 < *piVar1) {
    if (DAT_08078340 < *(int *)(iVar5 + 4) + -1 + unaff_EBX) {
      camlPervasives__failwith_1010();
    }
    else {
      *piVar1 = DAT_08078340;
    }
  }
  uVar4 = caml_c_call(*piVar1);
  camlString__blit_1056(uVar4);
  caml_modify(param_1,uVar4);
  *(int *)(param_1 + 8) = *piVar1;
  return 1;
}



undefined4 __regparm3 camlBuffer__add_char_1072(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  
  iVar2 = param_1[1];
  if (param_1[2] <= iVar2) {
    camlBuffer__resize_1066();
  }
  iVar3 = *param_1;
  iVar1 = (*(uint *)(iVar3 + -4) >> 10) * 4 + -1;
  if ((uint)(iVar2 >> 1) < iVar1 - (uint)*(byte *)(iVar3 + iVar1)) {
    *(char *)(iVar3 + (iVar2 >> 1)) = (char)(unaff_EBX >> 1);
    param_1[1] = iVar2 + 2;
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



undefined4 __regparm3 camlBuffer__add_substring_1076(int param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EBX;
  
  if (((param_3 < 1) || (param_2 < 1)) ||
     (iVar1 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1,
     (int)(((iVar1 - (uint)*(byte *)(unaff_EBX + iVar1)) * 2 - param_2) + 2) < param_3)) {
    camlPervasives__invalid_arg_1012();
  }
  param_2 = *(int *)(param_1 + 4) + -1 + param_2;
  if (*(int *)(param_1 + 8) < param_2) {
    camlBuffer__resize_1066();
  }
  camlString__blit_1056();
  *(int *)(param_1 + 4) = param_2;
  return 1;
}



undefined4 __regparm3 camlBuffer__add_string_1082(int param_1)

{
  int iVar1;
  int unaff_EBX;
  
  iVar1 = (*(uint *)(unaff_EBX + -4) >> 10) * 4 + -1;
  iVar1 = *(int *)(param_1 + 4) + (iVar1 - (uint)*(byte *)(unaff_EBX + iVar1)) * 2;
  if (*(int *)(param_1 + 8) < iVar1) {
    camlBuffer__resize_1066();
  }
  camlString__blit_1056();
  *(int *)(param_1 + 4) = iVar1;
  return 1;
}



void camlBuffer__add_buffer_1087(void)

{
  camlBuffer__add_substring_1076();
  return;
}



undefined4 __regparm3 camlBuffer__add_channel_1090(int param_1,undefined4 param_2,int param_3)

{
  if ((param_3 < 1) || (DAT_08078340 < param_3)) {
    camlPervasives__invalid_arg_1012();
  }
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 4) + -1 + param_3) {
    camlBuffer__resize_1066();
  }
  camlPervasives__really_input_1235();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1 + param_3;
  return 1;
}



void camlBuffer__output_buffer_1094(void)

{
  camlPervasives__output_1194();
  return;
}



undefined4 __regparm3 camlBuffer__closing_1097(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0x51) {
    return 0x53;
  }
  if (param_1 != 0xf7) {
    while( true ) {
      uVar3 = caml_young_ptr;
      uVar4 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar4) break;
      caml_young_ptr = uVar4;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar4;
    *puVar2 = 0x800;
    *puVar1 = &caml_exn_Assert_failure;
    *(undefined ***)(uVar3 - 4) = &camlBuffer__21;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  return 0xfb;
}



void __regparm3 camlBuffer__advance_to_closing_1098(undefined4 param_1,undefined4 param_2)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x1c;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x18);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x1c);
  caml_young_ptr = uVar4;
  *puVar2 = 0x18f7;
  *ppcVar1 = caml_curry3;
  *(undefined4 *)(uVar3 - 0x14) = 7;
  *(code **)(uVar3 - 0x10) = camlBuffer__advance_1104;
  *(undefined4 *)(uVar3 - 0xc) = param_1;
  *(undefined4 *)(uVar3 - 8) = unaff_EBX;
  *(undefined4 *)(uVar3 - 4) = param_2;
  camlBuffer__advance_1104();
  return;
}



void __regparm3 camlBuffer__advance_to_non_alpha_1108(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar3 - 0xc) = 5;
  *(code **)(uVar3 - 8) = camlBuffer__advance_1111;
  *(undefined4 *)(uVar3 - 4) = param_1;
  camlBuffer__advance_1111();
  return;
}



undefined4 * __regparm3 camlBuffer__find_ident_1114(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 extraout_ECX;
  int unaff_EBX;
  
  if (param_3 <= unaff_EBX) {
    while (uVar3 = caml_young_ptr - 8, uVar3 < caml_young_limit) {
      caml_young_ptr = uVar3;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 4);
    puVar2 = (undefined4 *)(caml_young_ptr - 8);
    caml_young_ptr = uVar3;
    *puVar2 = 0x400;
    *puVar1 = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  iVar7 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  if (iVar7 - (uint)*(byte *)(param_1 + iVar7) <= (uint)(unaff_EBX >> 1)) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  iVar7 = (uint)*(byte *)(param_1 + (unaff_EBX >> 1)) * 2 + 1;
  if ((iVar7 != 0x51) && (iVar7 != 0xf7)) {
    uVar4 = camlBuffer__advance_to_non_alpha_1108();
    uVar5 = camlString__sub_1046();
    while (uVar3 = caml_young_ptr, uVar6 = caml_young_ptr - 0xc, uVar6 < caml_young_limit) {
      caml_young_ptr = uVar6;
      caml_call_gc();
      uVar5 = extraout_ECX;
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar6;
    *puVar2 = 0x800;
    *puVar1 = uVar5;
    *(undefined4 *)(uVar3 - 4) = uVar4;
    return puVar1;
  }
  camlBuffer__closing_1097(iVar7,unaff_EBX + 2);
  iVar7 = camlBuffer__advance_to_closing_1098();
  uVar5 = camlString__sub_1046();
  while (uVar3 = caml_young_ptr, uVar6 = caml_young_ptr - 0xc, uVar6 < caml_young_limit) {
    caml_young_ptr = uVar6;
    caml_call_gc();
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 8);
  puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar6;
  *puVar2 = 0x800;
  *puVar1 = uVar5;
  *(int *)(uVar3 - 4) = iVar7 + 2;
  return puVar1;
}



void __regparm3 camlBuffer__add_substitute_1122(undefined4 param_1,undefined4 param_2,int param_3)

{
  code **ppcVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int extraout_EDX;
  undefined4 unaff_EBX;
  
  iVar3 = (*(uint *)(param_3 + -4) >> 10) * 4 + -1;
  bVar4 = *(byte *)(param_3 + iVar3);
  while( true ) {
    uVar5 = caml_young_ptr;
    uVar6 = caml_young_ptr - 0x20;
    if (caml_young_limit <= uVar6) break;
    caml_young_ptr = uVar6;
    caml_call_gc();
    param_3 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x1c);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x20);
  caml_young_ptr = uVar6;
  *puVar2 = 0x1cf7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar5 - 0x18) = 5;
  *(code **)(uVar5 - 0x14) = camlBuffer__subst_1127;
  *(undefined4 *)(uVar5 - 0x10) = param_1;
  *(undefined4 *)(uVar5 - 0xc) = unaff_EBX;
  *(int *)(uVar5 - 8) = param_3;
  *(uint *)(uVar5 - 4) = (iVar3 - (uint)bVar4) * 2 + 1;
  camlBuffer__subst_1127();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 camlBuffer__entry(void)

{
  _camlBuffer = &camlBuffer__20;
  _DAT_08078e74 = &camlBuffer__19;
  _DAT_08078e78 = &camlBuffer__18;
  _DAT_08078e7c = &camlBuffer__17;
  _DAT_08078e80 = &camlBuffer__16;
  _DAT_08078e84 = &camlBuffer__15;
  _DAT_08078e88 = &camlBuffer__14;
  _DAT_08078e8c = &camlBuffer__13;
  _DAT_08078eac = &camlBuffer__12;
  DAT_08078e90 = &camlBuffer__11;
  _DAT_08078e98 = &camlBuffer__10;
  DAT_08078e94 = &camlBuffer__9;
  _DAT_08078ea0 = &camlBuffer__8;
  _DAT_08078ea4 = &camlBuffer__7;
  _DAT_08078ea8 = &camlBuffer__6;
  _DAT_08078eb0 = &camlBuffer__5;
  _DAT_08078eb4 = &camlBuffer__4;
  _DAT_08078eb8 = &camlBuffer__3;
  _DAT_08078ebc = &camlBuffer__2;
  _DAT_08078e9c = &camlBuffer__1;
  return 1;
}



void camlBuffer__code_end(void)

{
  camlPrintf__doprn_1360();
  return;
}



void camlPrintf__fun_1673(void)

{
  camlPrintf__doprn_1360();
  return;
}



int __regparm3 camlPrintf__skip_int_literal_1092(int param_1)

{
  uint uVar1;
  int unaff_EBX;
  
  while (uVar1 = (uint)*(byte *)(*(int *)(unaff_EBX + 8) + (param_1 >> 1)) * 2 + 1, 0x60 < uVar1) {
    if (0x74 < uVar1) goto LAB_08058ba0;
    param_1 = param_1 + 2;
  }
  if (uVar1 == 0x49) {
    return param_1 + 2;
  }
LAB_08058ba0:
  return *(int *)(unaff_EBX + 0xc);
}



int __regparm3 camlPrintf__sub_sub_1129(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBX;
  
  if (*(int *)(unaff_EBX + 0x14) <= param_1) {
                    // WARNING: Could not recover jumptable at 0x08058bc7. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar2 = (***(code ***)(unaff_EBX + 8))();
    return iVar2;
  }
  iVar1 = *(int *)(unaff_EBX + 0x10);
  iVar2 = (*(uint *)(iVar1 + -4) >> 10) * 4 + -1;
  if (iVar2 - (uint)*(byte *)(iVar1 + iVar2) <= (uint)(param_1 >> 1)) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  iVar2 = (uint)*(byte *)(iVar1 + (param_1 >> 1)) * 2;
  uVar3 = iVar2 - 0x4f;
  if (3 < uVar3) {
    if (5 < iVar2 - 0xf5U) {
LAB_08058c30:
      iVar2 = camlPrintf__sub_1128();
      return iVar2;
    }
    uVar3 = (int)(iVar2 - 0xf5U) >> 1;
    if (uVar3 == 0) goto LAB_08058c40;
    if (uVar3 == 1) goto LAB_08058c30;
    if (1 < (int)uVar3) goto LAB_08058c60;
  }
  if (uVar3 != 1) {
LAB_08058c60:
    if (iVar2 + 1 != *(int *)(unaff_EBX + 0x20)) {
      iVar2 = caml_apply3();
      return iVar2;
    }
    return param_1 + 2;
  }
LAB_08058c40:
  camlPrintf__sub_fmt_1124();
  iVar2 = camlPrintf__sub_1128();
  return iVar2;
}



void __regparm3 camlPrintf__sub_1128(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  
  while( true ) {
    if (*(int *)(unaff_EBX + 0x20) <= param_1) {
                    // WARNING: Could not recover jumptable at 0x08058ca1. Too many branches
                    // WARNING: Treating indirect jump as call
      (***(code ***)(unaff_EBX + 0x14))();
      return;
    }
    iVar2 = *(int *)(unaff_EBX + 0x1c);
    iVar1 = (*(uint *)(iVar2 + -4) >> 10) * 4 + -1;
    if (iVar1 - (uint)*(byte *)(iVar2 + iVar1) <= (uint)(param_1 >> 1)) break;
    if (*(char *)(iVar2 + (param_1 >> 1)) == '%') {
      camlPrintf__sub_sub_1129();
      return;
    }
    param_1 = param_1 + 2;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



undefined4 __regparm3 camlPrintf__loop_1159(int param_1)

{
  int iVar1;
  int unaff_EBX;
  
  while( true ) {
    if (*(int *)(unaff_EBX + 0x10) + -4 <= param_1) {
      return 1;
    }
    iVar1 = (*(uint *)(*(int *)(unaff_EBX + 8) + -4) >> 10) * 4 + -1;
    if (iVar1 - (uint)*(byte *)(*(int *)(unaff_EBX + 8) + iVar1) <= (uint)(param_1 >> 1)) break;
    param_1 = caml_apply2();
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



undefined4 __regparm3 camlPrintf__fun_1565(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *unaff_EBX;
  
  uVar3 = (*(int *)(param_3 + 0xc) - param_1) - 1;
  iVar1 = *(int *)(param_3 + 0x10);
  uVar2 = *(uint *)(iVar1 + -4);
  if ((uVar2 & 0xff) == 0xfe) {
    if (uVar2 >> 10 <= uVar3) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *(undefined8 *)(iVar1 + -4 + uVar3 * 4) = *unaff_EBX;
  }
  else {
    if (uVar2 >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(iVar1 + -2 + uVar3 * 2);
  }
  return 1;
}



void __regparm3 camlPrintf__fun_1568(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  int extraout_EDX;
  int unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0xc;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
    unaff_EBX = extraout_EDX;
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 8);
  puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar4;
  *puVar2 = 0x800;
  *puVar1 = param_1;
  *(undefined4 *)(uVar3 - 4) = *(undefined4 *)(unaff_EBX + 0x10);
  camlPrintf__loop_1240();
  return;
}



void camlPrintf__got_spec_1304(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_ECX;
  int extraout_var;
  int iVar6;
  
  uVar4 = camlPrintf__get_arg_1288();
  iVar6 = extraout_var;
  while (uVar3 = caml_young_ptr, uVar5 = caml_young_ptr - 0xc, uVar5 < caml_young_limit) {
    caml_young_ptr = uVar5;
    caml_call_gc();
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 8);
  puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar5;
  *puVar2 = 0x800;
  *puVar1 = uVar4;
  *(undefined4 *)(uVar3 - 4) = *(undefined4 *)(in_ECX + 0x1c);
  if (iVar6 == 1) {
    (**ppcRam00000008)(1,in_ECX,puVar1);
  }
  camlPrintf__scan_flags_1292();
  return;
}



void camlPrintf__got_spec_1297(void)

{
  camlPrintf__scan_flags_1292();
  return;
}



void __regparm3 camlPrintf__cont_m_1365(undefined4 param_1,int param_2,undefined4 param_3)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_EDX;
  
  camlPrintf__ac_of_format_1184(param_2,param_3,param_1);
  uVar4 = camlPrintf__index_of_int_1037();
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x18;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
    uVar4 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x14);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar5;
  *puVar2 = 0x14f7;
  *ppcVar1 = camlPrintf__fun_1673;
  *(undefined4 *)(uVar3 - 0x10) = 3;
  *(int *)(uVar3 - 0xc) = param_2 + -0x50;
  *(undefined4 *)(uVar3 - 8) = param_3;
  *(undefined4 *)(uVar3 - 4) = uVar4;
  camlPrintf__pr_1354();
  return;
}



void __regparm3 camlPrintf__cont_f_1364(undefined4 param_1,undefined4 param_2,int param_3)

{
  (***(code ***)(param_3 + 0x28))(param_3,param_1);
  camlPrintf__doprn_1360();
  return;
}



void __regparm3 camlPrintf__cont_t_1363(undefined4 param_1,int param_2,undefined4 param_3)

{
  code **unaff_EBX;
  
  if (*(int *)(param_2 + 0x2c) == 1) {
    (**unaff_EBX)(param_1,param_3,param_2);
  }
  else {
    (**unaff_EBX)();
    caml_apply2();
  }
  camlPrintf__doprn_1360();
  return;
}



void __regparm3 camlPrintf__cont_a_1362(undefined4 param_1,undefined4 param_2)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x3c) == 1) {
    caml_apply2(param_1,param_2);
  }
  else {
    caml_apply2(param_1,param_2);
    caml_apply2();
  }
  camlPrintf__doprn_1360();
  return;
}



void __regparm3 camlPrintf__cont_s_1361(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  caml_apply2(param_2,param_1,param_3);
  camlPrintf__doprn_1360();
  return;
}



void __regparm3 camlPrintf__doprn_1360(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_EBX;
  
  while( true ) {
    if (*(int *)(param_3 + 0x80) <= unaff_EBX) {
                    // WARNING: Could not recover jumptable at 0x0805906c. Too many branches
                    // WARNING: Treating indirect jump as call
      (***(code ***)(param_3 + 0x74))();
      return;
    }
    if (*(char *)(*(int *)(param_3 + 0x78) + (unaff_EBX >> 1)) == '%') break;
    caml_apply2(unaff_EBX,param_1);
    unaff_EBX = unaff_EBX + 2;
  }
  DAT_0807b7e4 = param_3 + 0x50;
  DAT_0807b7e0 = param_3 + 0x40;
  caml_extra_params = param_3 + 0x30;
  camlPrintf__scan_format_1278();
  return;
}



undefined4 camlPrintf__fun_1686(void)

{
  return 1;
}



undefined4 * __regparm3 camlPrintf__parse_1069(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int unaff_EBX;
  
  do {
    while( true ) {
      iVar3 = (*(uint *)(*(int *)(param_3 + 0xc) + -4) >> 10) * 4 + -1;
      if ((int)((iVar3 - (uint)*(byte *)(*(int *)(param_3 + 0xc) + iVar3)) * 2 + 1) <= unaff_EBX) {
        while( true ) {
          uVar4 = caml_young_ptr;
          uVar5 = caml_young_ptr - 0xc;
          if (caml_young_limit <= uVar5) break;
          caml_young_ptr = uVar5;
          caml_call_gc();
          param_1 = extraout_EDX;
        }
        puVar1 = (undefined4 *)(caml_young_ptr - 8);
        puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar5;
        *puVar2 = 0x800;
        *puVar1 = 1;
        *(undefined4 *)(uVar4 - 4) = param_1;
        return puVar1;
      }
      uVar4 = (uint)*(byte *)(*(int *)(param_3 + 0xc) + (unaff_EBX >> 1)) * 2 + 1;
      if (uVar4 < 99) break;
      if (uVar4 < 0x75) {
        uVar6 = camlString__sub_1046();
        uVar6 = caml_c_call(uVar6);
        while( true ) {
          uVar4 = caml_young_ptr;
          uVar5 = caml_young_ptr - 0xc;
          if (caml_young_limit <= uVar5) break;
          caml_young_ptr = uVar5;
          caml_call_gc();
          uVar6 = extraout_ECX;
        }
        puVar1 = (undefined4 *)(caml_young_ptr - 8);
        puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
        caml_young_ptr = uVar5;
        *puVar2 = 0x800;
        *puVar1 = uVar6;
        *(undefined4 *)(uVar4 - 4) = param_1;
        return puVar1;
      }
LAB_08059230:
      unaff_EBX = unaff_EBX + 2;
    }
    if (uVar4 != 0x5b) goto LAB_08059230;
    unaff_EBX = unaff_EBX + 2;
    param_1 = 3;
  } while( true );
}



int __regparm3 camlPrintf__skip_positional_spec_1090(int param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBX;
  
  if (0x13 < (uint)*(byte *)(*(int *)(unaff_EBX + 8) + (param_1 >> 1)) * 2 - 0x5f) {
    return param_1;
  }
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = camlPrintf__skip_int_literal_1092;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(undefined4 *)(uVar3 - 8) = *(undefined4 *)(unaff_EBX + 8);
  *(int *)(uVar3 - 4) = param_1;
  iVar5 = camlPrintf__skip_int_literal_1092();
  return iVar5;
}



undefined4 __regparm3 camlPrintf__fill_format_1096(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  
  while( true ) {
    while( true ) {
      if (*(int *)(param_3 + 0x10) < param_1) {
        return 1;
      }
      if (*(char *)(*(int *)(param_3 + 0xc) + (param_1 >> 1)) == '*') break;
      camlBuffer__add_char_1072();
      param_1 = param_1 + 2;
    }
    if (unaff_EBX == 1) break;
    unaff_EBX = *(int *)(unaff_EBX + 4);
    camlPervasives__string_of_int_1130(unaff_EBX,param_1);
    camlBuffer__add_string_1082();
    param_1 = camlPrintf__skip_positional_spec_1090();
  }
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0xc;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 8);
  puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
  caml_young_ptr = uVar4;
  *puVar2 = 0x800;
  *puVar1 = &caml_exn_Assert_failure;
  *(undefined ***)(uVar3 - 4) = &camlPrintf__65;
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void __regparm3 camlPrintf__sub_fmt_1124(int param_1,undefined4 param_2,int param_3)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 uVar5;
  
  if (param_1 == 0x51) {
    uVar5 = 0x53;
  }
  else {
    uVar5 = 0xfb;
  }
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x34;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_3 = extraout_ECX;
    unaff_EBX = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x30);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x34);
  caml_young_ptr = uVar4;
  *puVar2 = 0x30f7;
  *ppcVar1 = camlPrintf__sub_1128;
  *(undefined4 *)(uVar3 - 0x2c) = 3;
  *(undefined4 *)(uVar3 - 0x28) = 0xcf9;
  *(code **)(uVar3 - 0x24) = camlPrintf__sub_sub_1129;
  *(undefined4 *)(uVar3 - 0x20) = 3;
  *(undefined4 *)(uVar3 - 0x1c) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(uVar3 - 0x18) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(uVar3 - 0x14) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(uVar3 - 0x10) = *(undefined4 *)(param_3 + 0x18);
  *(int *)(uVar3 - 0xc) = param_3;
  *(undefined4 *)(uVar3 - 8) = unaff_EBX;
  *(undefined4 *)(uVar3 - 4) = uVar5;
  camlPrintf__sub_1128();
  return;
}



void __regparm3 camlPrintf__scan_fmt_1144(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  
  while( true ) {
    if (*(int *)(unaff_EBX + 0x14) <= param_1) {
      return;
    }
    iVar2 = *(int *)(unaff_EBX + 8);
    iVar1 = (*(uint *)(iVar2 + -4) >> 10) * 4 + -1;
    if (iVar1 - (uint)*(byte *)(iVar2 + iVar1) <= (uint)(param_1 >> 1)) break;
    if (*(char *)(iVar2 + (param_1 >> 1)) == '%') {
      param_1 = camlPrintf__scan_flags_1142();
    }
    else {
      param_1 = param_1 + 2;
    }
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



int camlPrintf__scan_conv_1143(void)

{
  code **ppcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_ECX;
  uint uVar7;
  int extraout_EDX;
  int unaff_EBX;
  int iVar8;
  
  do {
    if (*(int *)(in_ECX + 0x24) < unaff_EBX) {
      iVar4 = camlPrintf__incomplete_format_1065();
      return iVar4;
    }
    iVar4 = (uint)*(byte *)(*(int *)(in_ECX + 0x18) + (unaff_EBX >> 1)) * 2 + 1;
    switch(iVar4) {
    default:
      iVar4 = camlPrintf__bad_conversion_format_1061();
      return iVar4;
    case 0x42:
    case 0x43:
    case 0x4a:
    case 0x4b:
    case 0x58:
    case 0x59:
      return unaff_EBX + 2;
    case 0x50:
    case 0x51:
      caml_apply3();
      iVar4 = camlPrintf__scan_fmt_1144();
      return iVar4;
    case 0x52:
    case 0x53:
    case 0xfa:
    case 0xfb:
      iVar4 = caml_apply3();
      return iVar4;
    case 0x84:
    case 0x85:
    case 0xc4:
    case 0xc5:
      iVar4 = caml_apply3();
      return iVar4;
    case 0x86:
    case 0x87:
    case 0xc6:
    case 199:
      iVar4 = caml_apply3();
      return iVar4;
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
    case 0xca:
    case 0xcb:
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
      iVar4 = caml_apply3();
      return iVar4;
    case 0x98:
    case 0x99:
    case 0xd8:
    case 0xd9:
    case 0xdc:
    case 0xdd:
      if (*(int *)(in_ECX + 0x24) < unaff_EBX + 2) {
        iVar4 = caml_apply3();
        return iVar4;
      }
      iVar3 = *(int *)(in_ECX + 0x18);
      uVar7 = unaff_EBX + 2 >> 1;
      iVar8 = (*(uint *)(iVar3 + -4) >> 10) * 4 + -1;
      if (uVar7 < iVar8 - (uint)*(byte *)(iVar3 + iVar8)) {
        switch((uint)*(byte *)(iVar3 + uVar7) * 2) {
        case 0xb0:
        case 200:
        case 0xd2:
        case 0xde:
        case 0xea:
        case 0xf0:
          goto switchD_08059507_caseD_fc;
        default:
          iVar4 = caml_apply3();
          return iVar4;
        }
      }
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error(iVar4);
    case 0x9c:
    case 0x9d:
    case 0xb0:
    case 0xb1:
    case 200:
    case 0xc9:
    case 0xd2:
    case 0xd3:
    case 0xde:
    case 0xdf:
    case 0xea:
    case 0xeb:
    case 0xf0:
    case 0xf1:
      iVar4 = caml_apply3();
      return iVar4;
    case 0xa6:
    case 0xa7:
    case 0xb6:
    case 0xb7:
    case 0xe6:
    case 0xe7:
      iVar4 = caml_apply3();
      return iVar4;
    case 0xc2:
    case 0xc3:
    case 0xe4:
    case 0xe5:
    case 0xe8:
    case 0xe9:
      iVar4 = caml_apply3();
      return iVar4;
    case 0xf6:
    case 0xf7:
      uVar5 = caml_apply3(iVar4);
      camlPrintf__sub_format_for_printf_1135(iVar4,uVar5);
      iVar4 = caml_apply2();
      iVar8 = iVar4;
      while (uVar7 = caml_young_ptr, uVar6 = caml_young_ptr - 0x18, uVar6 < caml_young_limit) {
        caml_young_ptr = uVar6;
        caml_call_gc();
        iVar4 = extraout_EDX;
      }
      ppcVar1 = (code **)(caml_young_ptr - 0x14);
      puVar2 = (undefined4 *)(caml_young_ptr - 0x18);
      caml_young_ptr = uVar6;
      *puVar2 = 0x14f7;
      *ppcVar1 = camlPrintf__loop_1159;
      *(undefined4 *)(uVar7 - 0x10) = 3;
      *(undefined4 *)(uVar7 - 0xc) = *(undefined4 *)(in_ECX + 0x18);
      *(undefined4 *)(uVar7 - 8) = *(undefined4 *)(in_ECX + 0x20);
      *(int *)(uVar7 - 4) = iVar4;
      camlPrintf__loop_1159();
      unaff_EBX = iVar8 + -2;
      break;
    case 0xfc:
switchD_08059507_caseD_fc:
      caml_apply3();
      iVar4 = caml_apply2();
      return iVar4;
    }
  } while( true );
}



// WARNING: Type propagation algorithm not settling

code ** __regparm3
camlPrintf__scan_flags_1142
          (int param_1,undefined4 param_2,char *param_3,int param_4,int param_5,undefined4 param_6,
          int param_7)

{
  undefined4 *puVar1;
  char cVar2;
  code **ppcVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  char *extraout_ECX;
  int iVar8;
  int unaff_EBX;
  undefined4 unaff_EBP;
  uint uVar9;
  undefined4 unaff_EDI;
  undefined8 *unaff_retaddr;
  char acStack_196 [270];
  undefined4 uStack_88;
  char acStack_64 [15];
  char cStack_55;
  char acStack_54 [16];
  char acStack_44 [16];
  char acStack_34 [28];
  int iStack_18;
  int iStack_14;
  
LAB_08059703:
  do {
    while( true ) {
      if (*(int *)(param_3 + 0x34) < unaff_EBX) {
        ppcVar3 = (code **)camlPrintf__incomplete_format_1065();
        return ppcVar3;
      }
      iStack_14 = unaff_EBX >> 1;
      iVar7 = (uint)*(byte *)(*(int *)(param_3 + 0x28) + iStack_14) * 2;
      if (iVar7 + 1U < 0x75) break;
      if (iVar7 + 1U != 0xbf) {
switchD_08059761_caseD_42:
        ppcVar3 = (code **)camlPrintf__scan_conv_1143();
        return ppcVar3;
      }
      unaff_EBX = unaff_EBX + 2;
      param_1 = 3;
    }
    iVar8 = iVar7 + -0x3f >> 1;
    iStack_18 = unaff_EBX;
                    // WARNING (jumptable): Sanity check requires truncation of jumptable
                    // WARNING: Could not find normalized switch variable to match jumptable
    switch(iVar7) {
    case 0x40:
    case 0x46:
    case 0x56:
    case 0x5a:
      unaff_EBX = unaff_EBX + 2;
      break;
    default:
      goto switchD_08059761_caseD_42;
    case 0x54:
      unaff_EBX = caml_apply3();
      break;
    case 0x5c:
    case 0x60:
    case 0x62:
    case 100:
    case 0x66:
    case 0x68:
    case 0x6a:
    case 0x6c:
    case 0x6e:
    case 0x70:
    case 0x72:
      goto switchD_08059761_caseD_5c;
    case 0x74:
    case 0x76:
    case 0x78:
    case 0x7a:
    case 0x7c:
    case 0x7e:
    case 0x80:
    case 0x82:
    case 0x84:
    case 0x86:
    case 0x88:
    case 0x8a:
    case 0x8c:
    case 0x8e:
    case 0x90:
    case 0x92:
    case 0x94:
    case 0x96:
    case 0x98:
    case 0x9a:
    case 0x9c:
    case 0x9e:
    case 0xa0:
    case 0xa2:
    case 0xa4:
    case 0xa6:
    case 0xa8:
    case 0xaa:
    case 0xac:
    case 0xae:
    case 0xb0:
    case 0xb2:
    case 0xb4:
    case 0xb8:
    case 0xba:
    case 0xbc:
    case 0xc0:
    case 0xc2:
    case 200:
    case 0xca:
    case 0xce:
    case 0xd0:
    case 0xd2:
    case 0xd4:
    case 0xd6:
    case 0xd8:
    case 0xda:
    case 0xdc:
    case 0xde:
    case 0xe0:
    case 0xe2:
    case 0xe4:
    case 0xe6:
    case 0xe8:
    case 0xea:
    case 0xec:
    case 0xee:
    case 0xf0:
    case 0xf2:
    case 0xf4:
    case 0xf6:
    case 0xfc:
    case 0x104:
    case 0x106:
    case 0x108:
    case 0x10a:
    case 0x10e:
    case 0x112:
    case 0x114:
    case 0x116:
    case 0x118:
    case 0x11c:
    case 0x11e:
    case 0x120:
    case 0x122:
    case 0x126:
    case 0x128:
    case 0x12a:
    case 300:
    case 0x12e:
    case 0x130:
    case 0x132:
    case 0x134:
    case 0x144:
    case 0x148:
    case 0x14a:
    case 0x14e:
    case 0x154:
    case 0x156:
    case 0x158:
    case 0x160:
    case 0x162:
    case 0x166:
    case 0x168:
      ppcVar3 = (code **)camlPrintf__bad_conversion_format_1061();
      return ppcVar3;
    case 0xb6:
      ppcVar3 = (code **)caml_apply2();
      return ppcVar3;
    case 0xbe:
      ppcVar3 = (code **)caml_apply3();
      return ppcVar3;
    case 0xc4:
    case 0x16a:
      camlPrintf__get_arg_1288();
      camlPrintf__sub_format_for_printf_1135();
      caml_apply2();
      if (param_3 == (char *)0xf7) {
        camlPrintf__summarize_format_type_1162();
        if (param_5 == 1) {
          (**ppcRam00000008)();
        }
        ppcVar3 = (code **)caml_apply3();
        return ppcVar3;
      }
      if (param_5 == 1) {
        (**ppcRam00000008)();
      }
      ppcVar3 = (code **)caml_apply3();
      return ppcVar3;
    case 0xc6:
      ppcVar3 = (code **)caml_apply3();
      return ppcVar3;
    case 0xcc:
      ppcVar3 = (code **)caml_apply3();
      return ppcVar3;
    case 0xf8:
    case 0x138:
      camlPrintf__get_arg_1288();
      camlPervasives__string_of_bool_1127();
      if (param_5 == 1) {
        (**ppcRam00000008)();
      }
      ppcVar3 = (code **)caml_apply3();
      return ppcVar3;
    case 0xfa:
    case 0x13a:
      camlPrintf__get_arg_1288();
      if (param_3 == (char *)0xc7) {
        camlString__make_1038();
      }
      else {
        camlChar__escaped_1038();
        camlPervasives___5e_1112();
        camlPervasives___5e_1112();
      }
      if (param_5 == 1) {
        (**ppcRam00000008)();
      }
      ppcVar3 = (code **)caml_apply3();
      return ppcVar3;
    case 0xfe:
    case 0x102:
    case 0x13e:
    case 0x140:
    case 0x142:
      camlPrintf__get_arg_1288();
      camlPrintf__extract_format_1085();
      iStack_14 = 0x805a8e1;
      caml_c_call();
      if (param_5 == 1) {
        (**ppcRam00000008)();
      }
      ppcVar3 = (code **)caml_apply3();
      return ppcVar3;
    case 0x100:
      camlPrintf__get_arg_1288();
      if (unaff_retaddr == (undefined8 *)0x1) {
        camlPervasives__string_of_float_1140();
      }
      else {
        camlPrintf__extract_format_float_1110();
        camlPrintf__fun_1600();
      }
      if (param_5 == 1) {
        (**ppcRam00000008)();
      }
      ppcVar3 = (code **)caml_apply3();
      return ppcVar3;
    case 0x10c:
    case 0x14c:
    case 0x150:
      switch((uint)*(byte *)(*(int *)(iStack_14 + 0xc) + (iVar8 + 2 >> 1)) * 2) {
      case 0xb0:
      case 200:
      case 0xd2:
      case 0xde:
      case 0xea:
      case 0xf0:
        goto switchD_0805a4bb_caseD_f8;
      default:
        goto switchD_0805a99f_caseD_b2;
      }
    case 0x110:
    case 0x124:
    case 0x13c:
    case 0x146:
    case 0x152:
    case 0x15e:
    case 0x164:
      camlPrintf__get_arg_1288();
      camlPrintf__extract_format_int_1103();
      iStack_14 = 0x805a869;
      caml_c_call();
      if (param_5 == 1) {
        (**ppcRam00000008)();
      }
      ppcVar3 = (code **)caml_apply3();
      return ppcVar3;
    case 0x11a:
    case 0x15a:
      camlPrintf__get_arg_1288();
      if (param_1 != 0xe7) {
        camlString__escaped_1080();
        camlPervasives___5e_1112();
        camlPervasives___5e_1112();
      }
      if (param_4 != *(int *)(param_7 + 0x10) + 2) {
        camlPrintf__extract_format_1085();
        camlPrintf__format_string_1080();
      }
      if (param_5 == 1) {
        (**ppcRam00000008)();
      }
      ppcVar3 = (code **)caml_apply3();
      return ppcVar3;
    case 0x136:
      camlPrintf__get_arg_1288();
      (**ppcRam00000008)();
      camlPrintf__get_arg_1288();
      if (param_5 == 1) {
        (**ppcRam00000008)();
      }
      ppcVar3 = (code **)caml_apply4();
      return ppcVar3;
    case 0x15c:
      camlPrintf__get_arg_1288();
      if (param_5 == 1) {
        (**ppcRam00000008)();
      }
      ppcVar3 = (code **)caml_apply3();
      return ppcVar3;
    case 0x16c:
    case 0x184:
    case 0x18e:
    case 0x19a:
    case 0x1a6:
    case 0x1ac:
switchD_0805a4bb_caseD_f8:
      if ((param_3 + -0xd8 < (char *)0x6) && (iVar7 = (int)(param_3 + -0xd8) >> 1, iVar7 != 1)) {
        if (iVar7 < 2) {
          camlPrintf__get_arg_1288();
          camlPrintf__extract_format_1085();
          iStack_14 = 0x805aa84;
          caml_c_call();
        }
        else {
          camlPrintf__get_arg_1288();
          camlPrintf__extract_format_1085();
          iStack_14 = 0x805aac1;
          caml_c_call();
        }
      }
      else {
        camlPrintf__get_arg_1288();
        camlPrintf__extract_format_1085();
        iStack_14 = 0x805ab01;
        caml_c_call();
      }
      if (param_5 == 1) {
        (**ppcRam00000008)();
      }
      ppcVar3 = (code **)caml_apply3();
      return ppcVar3;
    case 0x16e:
    case 0x170:
    case 0x172:
    case 0x174:
    case 0x176:
    case 0x178:
    case 0x17a:
    case 0x17c:
    case 0x17e:
    case 0x180:
    case 0x182:
    case 0x186:
    case 0x188:
    case 0x18a:
    case 0x18c:
    case 400:
    case 0x192:
    case 0x194:
    case 0x196:
    case 0x198:
    case 0x19c:
    case 0x19e:
    case 0x1a0:
    case 0x1a2:
    case 0x1a4:
    case 0x1a8:
    case 0x1aa:
switchD_0805a99f_caseD_b2:
      camlPrintf__get_arg_1288();
      camlPrintf__extract_format_int_1103();
      iStack_14 = 0x805a9e6;
      caml_c_call();
      if (param_5 == 1) {
        (**ppcRam00000008)();
      }
      ppcVar3 = (code **)caml_apply3();
      return ppcVar3;
    case 0x1ae:
    case 0x1b4:
    case 0x1c4:
    case 0x1c8:
    case 0x1ca:
    case 0x1ce:
    case 0x1d0:
    case 0x1d2:
    case 0x1d4:
    case 0x1d6:
    case 0x1d8:
    case 0x1da:
    case 0x1dc:
    case 0x1de:
    case 0x1e0:
      goto switchD_0805ac3d_caseD_40;
    case 0x1b0:
    case 0x1b2:
    case 0x1b6:
    case 0x1b8:
    case 0x1ba:
    case 0x1bc:
    case 0x1be:
    case 0x1c0:
    case 0x1c6:
    case 0x1cc:
      goto switchD_0805ac3d_caseD_42;
    case 0x1c2:
      goto switchD_0805ac3d_caseD_54;
    case 0x1e2:
      ppcVar3 = (code **)caml_apply2();
      return ppcVar3;
    case 0x1e4:
      goto switchD_0805b7c2_caseD_2;
    case 0x1e6:
      goto switchD_0805b7c2_caseD_4;
    case 0x1e8:
      goto switchD_0805b7c2_caseD_6;
    case 0x1ea:
      goto switchD_0805b7c2_caseD_8;
    case 0x1ec:
      goto switchD_0805b7c2_caseD_a;
    case 0x1ee:
      goto switchD_0805b7c2_caseD_c;
    case 0x1f0:
      uStack_88 = 0x80661cf;
      pcVar6 = (char *)parse_format();
      uStack_88 = 0x80661ee;
      sprintf(pcVar6,acStack_44);
      uStack_88 = 0x80661f6;
      ppcVar3 = (code **)caml_copy_string();
      if (pcVar6 != acStack_64) {
        uStack_88 = 0x8066204;
        caml_stat_free();
      }
      return ppcVar3;
    case 0x1f2:
      uStack_88 = 0x8066164;
      pcVar6 = (char *)parse_format();
      uStack_88 = 0x806617c;
      sprintf(pcVar6,acStack_44);
      uStack_88 = 0x8066184;
      ppcVar3 = (code **)caml_copy_string();
      if (pcVar6 != acStack_64) {
        uStack_88 = 0x8066192;
        caml_stat_free();
      }
      return ppcVar3;
    case 500:
      uStack_88 = 0x8066241;
      pcVar6 = (char *)parse_format();
      uStack_88 = 0x8066259;
      sprintf(pcVar6,acStack_44);
      uStack_88 = 0x8066261;
      ppcVar3 = (code **)caml_copy_string();
      if (pcVar6 != acStack_64) {
        uStack_88 = 0x806626f;
        caml_stat_free();
      }
      return ppcVar3;
    case 0x1f6:
      iStack_14 = unaff_EBX;
      pcVar6 = (char *)parse_format();
      if (cStack_55 != 'o') {
        if (cStack_55 < 'p') {
          if (cStack_55 != 'X') {
LAB_080662dd:
            sprintf(pcVar6,acStack_34);
            goto LAB_080662f2;
          }
        }
        else if ((cStack_55 != 'u') && (cStack_55 != 'x')) goto LAB_080662dd;
      }
      sprintf(pcVar6,acStack_34);
LAB_080662f2:
      ppcVar3 = (code **)caml_copy_string();
      if (pcVar6 != acStack_54) {
        caml_stat_free();
      }
      return ppcVar3;
    case 0x1f8:
      cVar2 = *param_3;
      pcVar6 = param_3;
      goto joined_r0x08066f00;
    }
  } while( true );
joined_r0x08066f00:
  if (cVar2 == '\0') goto LAB_08066fe3;
  if ((byte)(cVar2 - 0x30U) < 10) {
    lVar5 = strtol(pcVar6,(char **)0x0,10);
    uVar9 = lVar5 + 0x15e;
    if ((int)uVar9 < 0x15e) {
      uVar9 = 0x15e;
    }
    cVar2 = *pcVar6;
    goto joined_r0x08066f47;
  }
  pcVar6 = pcVar6 + 1;
  cVar2 = *pcVar6;
  goto joined_r0x08066f00;
joined_r0x08066f47:
  if (cVar2 == '\0') {
LAB_08066f93:
    if (uVar9 < 0x172) {
LAB_08066fe3:
      sprintf(acStack_196,param_3,*unaff_retaddr);
      ppcVar3 = (code **)caml_copy_string(acStack_196);
    }
    else {
      pcVar6 = (char *)caml_stat_alloc(uVar9);
      sprintf(pcVar6,param_3,*unaff_retaddr);
      ppcVar3 = (code **)caml_copy_string(pcVar6);
      if (pcVar6 != acStack_196) {
        caml_stat_free(pcVar6);
      }
    }
    return ppcVar3;
  }
  if (cVar2 == '.') {
    lVar5 = strtol(pcVar6 + 1,(char **)0x0,10);
    if ((int)uVar9 < (int)(lVar5 + 0x15eU)) {
      uVar9 = lVar5 + 0x15eU;
    }
    goto LAB_08066f93;
  }
  pcVar6 = pcVar6 + 1;
  cVar2 = *pcVar6;
  goto joined_r0x08066f47;
switchD_0805ac3d_caseD_40:
  iVar8 = iVar8 + 2;
  switch((uint)*(byte *)(*(int *)(iStack_14 + 0x1c) + (iVar8 >> 1)) * 2) {
  case 0x40:
  case 0x46:
  case 0x56:
  case 0x5a:
  case 0x5c:
  case 0x60:
  case 0x62:
  case 100:
  case 0x66:
  case 0x68:
  case 0x6a:
  case 0x6c:
  case 0x6e:
  case 0x70:
  case 0x72:
    goto switchD_0805ac3d_caseD_40;
  default:
switchD_0805ac3d_caseD_42:
    ppcVar3 = (code **)camlPrintf__scan_conv_1293();
    return ppcVar3;
  case 0x54:
switchD_0805ac3d_caseD_54:
    while (uVar9 = caml_young_ptr, uVar4 = caml_young_ptr - 0x24, uVar4 < caml_young_limit) {
      caml_young_ptr = uVar4;
      caml_call_gc();
      param_3 = extraout_ECX;
    }
    ppcVar3 = (code **)(caml_young_ptr - 0x20);
    puVar1 = (undefined4 *)(caml_young_ptr - 0x24);
    caml_young_ptr = uVar4;
    *puVar1 = 0x20f7;
    *ppcVar3 = caml_curry2;
    *(undefined4 *)(uVar9 - 0x1c) = 5;
    *(code **)(uVar9 - 0x18) = camlPrintf__got_spec_1304;
    *(undefined4 *)(uVar9 - 0x14) = *(undefined4 *)(iStack_14 + 0x38);
    *(int *)(uVar9 - 0x10) = iStack_14;
    *(undefined4 *)(uVar9 - 0xc) = unaff_EDI;
    *(undefined4 *)(uVar9 - 8) = unaff_EBP;
    *(char **)(uVar9 - 4) = param_3;
    ppcVar3 = (code **)camlPrintf__scan_positional_spec_1252();
    return ppcVar3;
  }
switchD_08059761_caseD_5c:
  unaff_EBX = unaff_EBX + 2;
  goto LAB_08059703;
switchD_0805b7c2_caseD_8:
  while (uVar9 = caml_young_ptr, uVar4 = caml_young_ptr - 0x18, uVar4 < caml_young_limit) {
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar3 = (code **)(caml_young_ptr - 0x14);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar4;
  *puVar1 = 0x14f7;
  *ppcVar3 = caml_curry4;
  *(undefined4 *)(uVar9 - 0x10) = 9;
  *(code **)(uVar9 - 0xc) = camlPrintf__fun_1581;
  *(int *)(uVar9 - 8) = param_1;
  *(char **)(uVar9 - 4) = param_3;
  return ppcVar3;
switchD_0805b7c2_caseD_2:
  while (uVar9 = caml_young_ptr, uVar4 = caml_young_ptr - 0x14, uVar4 < caml_young_limit) {
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar3 = (code **)(caml_young_ptr - 0x10);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar1 = 0x10f7;
  *ppcVar3 = camlPrintf__fun_1572;
  *(undefined4 *)(uVar9 - 0xc) = 3;
  *(int *)(uVar9 - 8) = param_1;
  *(char **)(uVar9 - 4) = param_3;
  return ppcVar3;
switchD_0805b7c2_caseD_a:
  while (uVar9 = caml_young_ptr, uVar4 = caml_young_ptr - 0x18, uVar4 < caml_young_limit) {
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar3 = (code **)(caml_young_ptr - 0x14);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar4;
  *puVar1 = 0x14f7;
  *ppcVar3 = caml_curry5;
  *(undefined4 *)(uVar9 - 0x10) = 0xb;
  *(code **)(uVar9 - 0xc) = camlPrintf__fun_1584;
  *(int *)(uVar9 - 8) = param_1;
  *(char **)(uVar9 - 4) = param_3;
  return ppcVar3;
switchD_0805b7c2_caseD_4:
  while (uVar9 = caml_young_ptr, uVar4 = caml_young_ptr - 0x18, uVar4 < caml_young_limit) {
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar3 = (code **)(caml_young_ptr - 0x14);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar4;
  *puVar1 = 0x14f7;
  *ppcVar3 = caml_curry2;
  *(undefined4 *)(uVar9 - 0x10) = 5;
  *(code **)(uVar9 - 0xc) = camlPrintf__fun_1575;
  *(int *)(uVar9 - 8) = param_1;
  *(char **)(uVar9 - 4) = param_3;
  return ppcVar3;
switchD_0805b7c2_caseD_c:
  while (uVar9 = caml_young_ptr, uVar4 = caml_young_ptr - 0x18, uVar4 < caml_young_limit) {
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar3 = (code **)(caml_young_ptr - 0x14);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar4;
  *puVar1 = 0x14f7;
  *ppcVar3 = caml_curry6;
  *(undefined4 *)(uVar9 - 0x10) = 0xd;
  *(code **)(uVar9 - 0xc) = camlPrintf__fun_1587;
  *(int *)(uVar9 - 8) = param_1;
  *(char **)(uVar9 - 4) = param_3;
  return ppcVar3;
switchD_0805b7c2_caseD_6:
  while (uVar9 = caml_young_ptr, uVar4 = caml_young_ptr - 0x18, uVar4 < caml_young_limit) {
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar3 = (code **)(caml_young_ptr - 0x14);
  puVar1 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar4;
  *puVar1 = 0x14f7;
  *ppcVar3 = caml_curry3;
  *(undefined4 *)(uVar9 - 0x10) = 7;
  *(code **)(uVar9 - 0xc) = camlPrintf__fun_1578;
  *(int *)(uVar9 - 8) = param_1;
  *(char **)(uVar9 - 4) = param_3;
  return ppcVar3;
}



int __regparm3 camlPrintf__add_char_1166(int param_1)

{
  camlBuffer__add_char_1072();
  return param_1 + 2;
}



int __regparm3 camlPrintf__add_conv_1169(int param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_EBX;
  
  if (param_1 == 1) {
    camlBuffer__add_char_1072(param_2,param_3);
  }
  else {
    camlBuffer__add_string_1082();
  }
  camlBuffer__add_char_1072(param_2,param_3);
  return unaff_EBX + 2;
}



undefined4 __regparm3 camlPrintf__incr_ac_1187(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  
  if (unaff_EBX == 0xc3) {
    iVar2 = 5;
  }
  else {
    iVar2 = 3;
  }
  if (unaff_EBX == 0xe5) {
    piVar1 = (int *)(*(int *)(param_3 + 0xc) + 8);
    *piVar1 = *piVar1 + 2;
  }
  if (param_1 != 1) {
    *(int *)(*(int *)(param_3 + 0xc) + 4) = *(int *)(*(int *)(param_3 + 0xc) + 4) + -1 + iVar2;
    return 1;
  }
  **(int **)(param_3 + 0xc) = **(int **)(param_3 + 0xc) + -1 + iVar2;
  return 1;
}



int camlPrintf__add_conv_1191(void)

{
  int in_ECX;
  int unaff_EBX;
  
  if ((in_ECX != 0x53) && (in_ECX != 0xfb)) {
    camlPrintf__incr_ac_1187();
  }
  return unaff_EBX + 2;
}



int __regparm3 camlPrintf__add_char_1192(int param_1)

{
  return param_1 + 2;
}



undefined4 __regparm3 camlPrintf__loop_1204(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int unaff_EBX;
  
  while( true ) {
    if (unaff_EBX == 1) {
      return 1;
    }
    unaff_EBX = *(int *)(unaff_EBX + 4);
    if (unaff_EBX == 1) break;
    caml_apply2(param_1,unaff_EBX,param_3);
    param_1 = param_1 + 2;
  }
  uVar1 = caml_apply2();
  return uVar1;
}



void __regparm3 camlPrintf__loop_1240(int param_1,undefined4 param_2,int param_3)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  undefined4 unaff_EBX;
  
  if (*(int *)(param_3 + 0x14) <= param_1) {
    uVar4 = caml_c_call(*(undefined4 *)(param_3 + 0x14),1);
    while( true ) {
      uVar3 = caml_young_ptr;
      uVar5 = caml_young_ptr - 0x18;
      if (caml_young_limit <= uVar5) break;
      caml_young_ptr = uVar5;
      caml_call_gc();
      uVar4 = extraout_ECX_00;
    }
    ppcVar1 = (code **)(caml_young_ptr - 0x14);
    puVar2 = (undefined4 *)(caml_young_ptr - 0x18);
    caml_young_ptr = uVar5;
    *puVar2 = 0x14f7;
    *ppcVar1 = caml_curry2;
    *(undefined4 *)(uVar3 - 0x10) = 5;
    *(code **)(uVar3 - 0xc) = camlPrintf__fun_1565;
    *(undefined4 *)(uVar3 - 8) = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(uVar3 - 4) = uVar4;
    camlPrintf__list_iter_i_1201();
    caml_apply2();
    return;
  }
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x18;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
    param_3 = extraout_ECX;
    param_1 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x14);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar5;
  *puVar2 = 0x14f7;
  *ppcVar1 = camlPrintf__fun_1568;
  *(undefined4 *)(uVar3 - 0x10) = 3;
  *(int *)(uVar3 - 0xc) = param_3;
  *(int *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 camlPrintf__fun_1587(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_EBX;
  undefined8 *unaff_ESI;
  undefined8 *unaff_EDI;
  
  puVar2 = (undefined8 *)caml_c_call(0xd,1,caml_extra_params);
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *puVar2 = *param_1;
  }
  else {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2,param_1);
  }
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[1] = *unaff_EBX;
  }
  else {
    if (uVar1 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify((int)puVar2 + 4,unaff_EBX);
  }
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[2] = *param_3;
  }
  else {
    if (uVar1 >> 9 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 1,param_3);
  }
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 8) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[3] = *param_2;
  }
  else {
    if (uVar1 >> 9 < 8) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify((int)puVar2 + 0xc,param_2);
  }
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 10) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[4] = *unaff_ESI;
  }
  else {
    if (uVar1 >> 9 < 10) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 2,unaff_ESI);
  }
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 0xc) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[5] = *unaff_EDI;
  }
  else {
    if (uVar1 >> 9 < 0xc) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify((int)puVar2 + 0x14,unaff_EDI);
  }
  caml_apply2();
  return;
}



void __regparm3 camlPrintf__fun_1584(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_EBX;
  undefined8 *unaff_ESI;
  
  puVar2 = (undefined8 *)caml_c_call(0xb,1);
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *puVar2 = *param_1;
  }
  else {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2,param_1);
  }
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[1] = *unaff_EBX;
  }
  else {
    if (uVar1 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify((int)puVar2 + 4,unaff_EBX);
  }
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[2] = *param_3;
  }
  else {
    if (uVar1 >> 9 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 1,param_3);
  }
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 8) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[3] = *param_2;
  }
  else {
    if (uVar1 >> 9 < 8) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify((int)puVar2 + 0xc,param_2);
  }
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 10) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[4] = *unaff_ESI;
  }
  else {
    if (uVar1 >> 9 < 10) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 2,unaff_ESI);
  }
  caml_apply2();
  return;
}



void __regparm3 camlPrintf__fun_1581(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_EBX;
  
  puVar2 = (undefined8 *)caml_c_call(9,1);
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *puVar2 = *param_1;
  }
  else {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2,param_1);
  }
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[1] = *unaff_EBX;
  }
  else {
    if (uVar1 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify((int)puVar2 + 4,unaff_EBX);
  }
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[2] = *param_3;
  }
  else {
    if (uVar1 >> 9 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 1,param_3);
  }
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 8) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[3] = *param_2;
  }
  else {
    if (uVar1 >> 9 < 8) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify((int)puVar2 + 0xc,param_2);
  }
  caml_apply2();
  return;
}



void __regparm3 camlPrintf__fun_1578(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_EBX;
  
  puVar2 = (undefined8 *)caml_c_call(7,1,param_2);
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *puVar2 = *param_1;
  }
  else {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2,param_1);
  }
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[1] = *unaff_EBX;
  }
  else {
    if (uVar1 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify((int)puVar2 + 4,unaff_EBX);
  }
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[2] = *param_3;
  }
  else {
    if (uVar1 >> 9 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 1,param_3);
  }
  caml_apply2();
  return;
}



void __regparm3 camlPrintf__fun_1575(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_EBX;
  
  puVar2 = (undefined8 *)caml_c_call(5,1,param_3);
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *puVar2 = *param_1;
  }
  else {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2,param_1);
  }
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[1] = *unaff_EBX;
  }
  else {
    if (uVar1 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify((int)puVar2 + 4,unaff_EBX);
  }
  caml_apply2();
  return;
}



void __regparm3 camlPrintf__fun_1572(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)caml_c_call(3,1);
  uVar1 = *(uint *)((int)puVar2 + -4);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 10 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *puVar2 = *param_1;
  }
  else {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2,param_1);
  }
  caml_apply2();
  return;
}



void __regparm3 camlPrintf__get_int_literal_1258(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_EBX;
  
  while (uVar4 = (uint)*(byte *)(*(int *)(param_3 + 0xc) + (unaff_EBX >> 1)) * 2 + 1, 0x60 < uVar4)
  {
    if (0x74 < uVar4) goto LAB_0805a360;
    unaff_EBX = unaff_EBX + 2;
    param_1 = (param_1 >> 1) * 0x14 + -0x60 + uVar4;
  }
  if (uVar4 == 0x49) {
    if (param_1 == 1) {
      camlPervasives__failwith_1010();
      return;
    }
    uVar3 = camlPrintf__index_of_int_1037(param_3,unaff_EBX);
    while( true ) {
      uVar4 = caml_young_ptr - 8;
      if (caml_young_limit <= uVar4) break;
      caml_young_ptr = uVar4;
      caml_call_gc();
    }
    puVar1 = (undefined4 *)(caml_young_ptr - 4);
    puVar2 = (undefined4 *)(caml_young_ptr - 8);
    caml_young_ptr = uVar4;
    *puVar2 = 0x400;
    *puVar1 = uVar3;
    caml_apply2();
    return;
  }
LAB_0805a360:
  caml_apply2();
  return;
}



undefined4 __regparm3 camlPrintf__valid_float_loop_1273(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_EBX;
  
  do {
    if (*(int *)(unaff_EBX + 0xc) <= param_1) {
      uVar3 = camlPervasives___5e_1112();
      return uVar3;
    }
    iVar2 = *(int *)(unaff_EBX + 8);
    iVar1 = (*(uint *)(iVar2 + -4) >> 10) * 4 + -1;
    if (iVar1 - (uint)*(byte *)(iVar2 + iVar1) <= (uint)(param_1 >> 1)) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    iVar1 = (uint)*(byte *)(iVar2 + (param_1 >> 1)) * 2;
    uVar4 = iVar1 - 0x5b;
    if (uVar4 < 0x30) {
      if (0x2b < iVar1 - 0x5dU) goto LAB_0805a3f0;
    }
    else if (uVar4 == 0x6f) {
LAB_0805a3f0:
      return *(undefined4 *)(unaff_EBX + 8);
    }
    param_1 = param_1 + 2;
  } while( true );
}



undefined8 * __regparm3 camlPrintf__get_arg_1288(uint *param_1,undefined4 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  uint unaff_EBX;
  
  if (param_1 != (uint *)0x1) {
    unaff_EBX = *param_1;
  }
  iVar4 = *(int *)(param_3 + 0xc);
  uVar3 = *(uint *)(iVar4 + -4);
  if ((uVar3 & 0xff) != 0xfe) {
    if (unaff_EBX < uVar3 >> 9) {
      return *(undefined8 **)(iVar4 + -2 + unaff_EBX * 2);
    }
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  if (unaff_EBX < uVar3 >> 10) {
    while( true ) {
      uVar3 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar3) break;
      caml_young_ptr = uVar3;
      caml_call_gc();
      iVar4 = extraout_ECX;
    }
    puVar1 = (undefined8 *)(caml_young_ptr - 8);
    puVar2 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar3;
    *puVar2 = 0x8fd;
    *puVar1 = *(undefined8 *)(iVar4 + -4 + unaff_EBX * 4);
    return puVar1;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



void __regparm3 camlPrintf__scan_conv_1293(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  
  iVar5 = (uint)*(byte *)(*(int *)(unaff_ESI + 0xc) + (param_2 >> 1)) * 2;
  iVar6 = iVar5 + 1;
  switch(iVar6) {
  default:
    camlPrintf__bad_conversion_format_1061();
    return;
  case 0x42:
  case 0x43:
    caml_apply2();
    return;
  case 0x4a:
  case 0x4b:
    caml_apply3();
    return;
  case 0x50:
  case 0x51:
  case 0xf6:
  case 0xf7:
    break;
  case 0x52:
  case 0x53:
    caml_apply3();
    return;
  case 0x58:
  case 0x59:
    caml_apply3();
    return;
  case 0x84:
  case 0x85:
  case 0xc4:
  case 0xc5:
    camlPrintf__get_arg_1288();
    uVar1 = camlPervasives__string_of_bool_1127();
    if (param_1 == 1) {
      (**ppcRam00000008)(uVar1);
    }
    caml_apply3();
    return;
  case 0x86:
  case 0x87:
  case 0xc6:
  case 199:
    camlPrintf__get_arg_1288();
    if (iVar6 == 199) {
      uVar1 = camlString__make_1038();
    }
    else {
      camlChar__escaped_1038();
      camlPervasives___5e_1112();
      uVar1 = camlPervasives___5e_1112();
    }
    if (param_1 == 1) {
      (**ppcRam00000008)(uVar1);
    }
    caml_apply3();
    return;
  case 0x8a:
  case 0x8b:
  case 0x8e:
  case 0x8f:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
    uVar1 = camlPrintf__get_arg_1288();
    uVar2 = camlPrintf__extract_format_1085(uVar1);
    uVar1 = caml_c_call(uVar2,uVar1);
    if (param_1 == 1) {
      (**ppcRam00000008)(uVar1);
    }
    caml_apply3();
    return;
  case 0x8c:
  case 0x8d:
    uVar1 = camlPrintf__get_arg_1288(iVar6);
    if (param_3 == 1) {
      uVar1 = camlPervasives__string_of_float_1140();
    }
    else {
      camlPrintf__extract_format_float_1110(iVar6,uVar1);
      uVar1 = camlPrintf__fun_1600();
    }
    if (param_1 == 1) {
      (**ppcRam00000008)(uVar1);
    }
    caml_apply3();
    return;
  case 0x98:
  case 0x99:
  case 0xd8:
  case 0xd9:
  case 0xdc:
  case 0xdd:
    switch((uint)*(byte *)(*(int *)(unaff_ESI + 0xc) + (param_2 + 2 >> 1)) * 2) {
    case 0xb0:
    case 200:
    case 0xd2:
    case 0xde:
    case 0xea:
    case 0xf0:
      goto switchD_0805a4bb_caseD_f8;
    default:
      uVar1 = camlPrintf__get_arg_1288();
      uVar2 = camlPrintf__extract_format_int_1103(uVar1);
      uVar1 = caml_c_call(uVar2,uVar1);
      if (param_1 == 1) {
        (**ppcRam00000008)(uVar1);
      }
      caml_apply3();
      return;
    }
  case 0x9c:
  case 0x9d:
  case 0xb0:
  case 0xb1:
  case 200:
  case 0xc9:
  case 0xd2:
  case 0xd3:
  case 0xde:
  case 0xdf:
  case 0xea:
  case 0xeb:
  case 0xf0:
  case 0xf1:
    uVar1 = camlPrintf__get_arg_1288(iVar6);
    uVar2 = camlPrintf__extract_format_int_1103(iVar6,uVar1);
    uVar1 = caml_c_call(uVar2,uVar1);
    if (param_1 == 1) {
      (**ppcRam00000008)(uVar1);
    }
    caml_apply3();
    return;
  case 0xa6:
  case 0xa7:
  case 0xe6:
  case 0xe7:
    uVar1 = camlPrintf__get_arg_1288();
    if (iVar6 != 0xe7) {
      camlString__escaped_1080();
      camlPervasives___5e_1112();
      uVar1 = camlPervasives___5e_1112();
    }
    if (param_2 != *(int *)(unaff_ESI + 0x10) + 2) {
      camlPrintf__extract_format_1085(uVar1);
      uVar1 = camlPrintf__format_string_1080();
    }
    if (param_1 == 1) {
      (**ppcRam00000008)(uVar1);
    }
    caml_apply3();
    return;
  case 0xc2:
  case 0xc3:
    uVar1 = camlPrintf__get_arg_1288();
    uVar2 = (**ppcRam00000008)(uVar1);
    uVar3 = camlPrintf__get_arg_1288();
    if (param_1 == 1) {
      (**ppcRam00000008)(uVar1,uVar3,uVar2);
    }
    caml_apply4();
    return;
  case 0xe8:
  case 0xe9:
    uVar1 = camlPrintf__get_arg_1288();
    if (param_1 == 1) {
      (**ppcRam00000008)(uVar1);
    }
    caml_apply3();
    return;
  case 0xf8:
switchD_0805a4bb_caseD_f8:
    param_2 = param_2 + 2;
    uVar4 = iVar5 - 0xd7;
    if ((uVar4 < 6) && (iVar5 = (int)uVar4 >> 1, iVar5 != 1)) {
      if (iVar5 < 2) {
        uVar1 = camlPrintf__get_arg_1288(iVar6,param_2);
        uVar2 = camlPrintf__extract_format_1085(uVar1);
        uVar1 = caml_c_call(uVar2,uVar1);
      }
      else {
        uVar1 = camlPrintf__get_arg_1288(iVar6,param_2);
        uVar2 = camlPrintf__extract_format_1085(uVar1);
        uVar1 = caml_c_call(uVar2,uVar1);
      }
    }
    else {
      uVar1 = camlPrintf__get_arg_1288(iVar6,param_2);
      uVar2 = camlPrintf__extract_format_1085(uVar1);
      uVar1 = caml_c_call(uVar2,uVar1);
    }
    if (param_1 == 1) {
      (**ppcRam00000008)(uVar1);
    }
    caml_apply3();
    return;
  }
  uVar1 = camlPrintf__get_arg_1288();
  camlPrintf__sub_format_for_printf_1135(param_2 + 2,iVar6,uVar1);
  uVar2 = caml_apply2();
  if (iVar6 == 0xf7) {
    uVar3 = camlPrintf__summarize_format_type_1162();
    if (param_1 == 1) {
      (**ppcRam00000008)(uVar3,iVar6,uVar1,uVar2);
    }
    caml_apply3();
    return;
  }
  if (param_1 == 1) {
    (**ppcRam00000008)();
  }
  caml_apply3();
  return;
}



void __regparm3 camlPrintf__scan_flags_1292(undefined4 param_1,int param_2,undefined4 param_3)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  int unaff_ESI;
  
  do {
    switch((uint)*(byte *)(*(int *)(unaff_ESI + 0x1c) + (param_2 >> 1)) * 2) {
    case 0x40:
    case 0x46:
    case 0x56:
    case 0x5a:
    case 0x5c:
    case 0x60:
    case 0x62:
    case 100:
    case 0x66:
    case 0x68:
    case 0x6a:
    case 0x6c:
    case 0x6e:
    case 0x70:
    case 0x72:
      param_2 = param_2 + 2;
      break;
    default:
      camlPrintf__scan_conv_1293();
      return;
    case 0x54:
      while (uVar3 = caml_young_ptr, uVar4 = caml_young_ptr - 0x24, uVar4 < caml_young_limit) {
        caml_young_ptr = uVar4;
        caml_call_gc();
        param_3 = extraout_ECX;
      }
      ppcVar1 = (code **)(caml_young_ptr - 0x20);
      puVar2 = (undefined4 *)(caml_young_ptr - 0x24);
      caml_young_ptr = uVar4;
      *puVar2 = 0x20f7;
      *ppcVar1 = caml_curry2;
      *(undefined4 *)(uVar3 - 0x1c) = 5;
      *(code **)(uVar3 - 0x18) = camlPrintf__got_spec_1304;
      *(undefined4 *)(uVar3 - 0x14) = *(undefined4 *)(unaff_ESI + 0x38);
      *(int *)(uVar3 - 0x10) = unaff_ESI;
      *(undefined4 *)(uVar3 - 0xc) = param_1;
      *(undefined4 *)(uVar3 - 8) = unaff_EBX;
      *(undefined4 *)(uVar3 - 4) = param_3;
      camlPrintf__scan_positional_spec_1252();
      return;
    }
  } while( true );
}



void __regparm3 camlPrintf__scan_positional_1291(undefined4 param_1,int param_2)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int extraout_EDX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x1c;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_2 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x18);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x1c);
  caml_young_ptr = uVar4;
  *puVar2 = 0x18f7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar3 - 0x14) = 5;
  *(code **)(uVar3 - 0x10) = camlPrintf__got_spec_1297;
  *(int *)(uVar3 - 0xc) = param_2 + 0x10;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  camlPrintf__scan_positional_spec_1252();
  return;
}



void __regparm3 camlPrintf__pr_1354(undefined4 param_1,undefined4 param_2,int param_3)

{
  code **ppcVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_EDX;
  int unaff_ESI;
  
  iVar3 = (*(uint *)(param_3 + -4) >> 10) * 4 + -1;
  bVar4 = *(byte *)(param_3 + iVar3);
  while( true ) {
    uVar5 = caml_young_ptr;
    uVar6 = caml_young_ptr - 0x88;
    if (caml_young_limit <= uVar6) break;
    caml_young_ptr = uVar6;
    caml_call_gc();
    param_2 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x84);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x88);
  caml_young_ptr = uVar6;
  *puVar2 = 0x84f7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar5 - 0x80) = 5;
  *(code **)(uVar5 - 0x7c) = camlPrintf__doprn_1360;
  *(undefined4 *)(uVar5 - 0x78) = 0x10f9;
  *(code **)(uVar5 - 0x74) = caml_curry3;
  *(undefined4 *)(uVar5 - 0x70) = 7;
  *(code **)(uVar5 - 0x6c) = camlPrintf__cont_s_1361;
  *(undefined4 *)(uVar5 - 0x68) = 0x20f9;
  *(code **)(uVar5 - 100) = caml_curry4;
  *(undefined4 *)(uVar5 - 0x60) = 9;
  *(code **)(uVar5 - 0x5c) = camlPrintf__cont_a_1362;
  *(undefined4 *)(uVar5 - 0x58) = 0x30f9;
  *(code **)(uVar5 - 0x54) = caml_curry3;
  *(undefined4 *)(uVar5 - 0x50) = 7;
  *(code **)(uVar5 - 0x4c) = camlPrintf__cont_t_1363;
  *(undefined4 *)(uVar5 - 0x48) = 0x40f9;
  *(code **)(uVar5 - 0x44) = caml_curry2;
  *(undefined4 *)(uVar5 - 0x40) = 5;
  *(code **)(uVar5 - 0x3c) = camlPrintf__cont_f_1364;
  *(undefined4 *)(uVar5 - 0x38) = 0x50f9;
  *(code **)(uVar5 - 0x34) = caml_curry3;
  *(undefined4 *)(uVar5 - 0x30) = 7;
  *(code **)(uVar5 - 0x2c) = camlPrintf__cont_m_1365;
  *(undefined4 *)(uVar5 - 0x28) = *(undefined4 *)(unaff_ESI + 0xc);
  *(undefined4 *)(uVar5 - 0x24) = *(undefined4 *)(unaff_ESI + 0x10);
  *(undefined4 *)(uVar5 - 0x20) = *(undefined4 *)(unaff_ESI + 0x14);
  *(undefined4 *)(uVar5 - 0x1c) = *(undefined4 *)(unaff_ESI + 0x18);
  *(undefined4 *)(uVar5 - 0x18) = *(undefined4 *)(unaff_ESI + 0x1c);
  *(int *)(uVar5 - 0x14) = unaff_ESI;
  *(undefined4 *)(uVar5 - 0x10) = param_1;
  *(int *)(uVar5 - 0xc) = param_3;
  *(undefined4 *)(uVar5 - 8) = param_2;
  *(uint *)(uVar5 - 4) = (iVar3 - (uint)bVar4) * 2 + 1;
  camlPrintf__doprn_1360();
  return;
}



undefined4 camlPrintf__fun_1680(void)

{
  int unaff_EBX;
  
  return *(undefined4 *)(unaff_EBX + 8);
}



undefined ** camlPrintf__fun_1684(void)

{
  return &camlPrintf__54;
}



undefined4 camlPrintf__fun_1689(void)

{
  return 1;
}



undefined4 camlPrintf__fun_1697(void)

{
  return 1;
}



undefined4 camlPrintf__fun_1694(void)

{
  int unaff_EBX;
  
  return *(undefined4 *)(unaff_EBX + 8);
}



undefined4 camlPrintf__fun_1700(void)

{
  return 1;
}



undefined4 camlPrintf__fun_1707(void)

{
  return 1;
}



void camlPrintf__fun_1710(void)

{
  return;
}



void __regparm3 camlPrintf__index_of_int_1037(int param_1)

{
  if (0 < param_1) {
    return;
  }
  camlPervasives__string_of_int_1130();
  camlPervasives___5e_1112();
  camlPervasives__failwith_1010();
  return;
}



void camlPrintf__add_int_index_1040(void)

{
  camlPrintf__index_of_int_1037();
  return;
}



void camlPrintf__index_of_literal_position_1044(void)

{
  camlPrintf__index_of_int_1037();
  return;
}



undefined4 __regparm3 camlPrintf__sub_1050(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  
  if (((0 < unaff_EBX) && (0 < param_3)) &&
     (iVar1 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1,
     unaff_EBX <= (int)(((iVar1 - (uint)*(byte *)(param_1 + iVar1)) * 2 - param_3) + 2))) {
    uVar2 = caml_c_call(param_3,param_3);
    caml_blit_string(param_1,unaff_EBX,uVar2,1,param_3);
    return uVar2;
  }
  uVar2 = camlPervasives__invalid_arg_1012();
  return uVar2;
}



void camlPrintf__to_string_1054(void)

{
  camlString__sub_1046();
  return;
}



void camlPrintf__bad_conversion_1057(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  camlPervasives___5e_1112();
  uVar1 = camlPervasives___5e_1112();
  camlPervasives__string_of_int_1130();
  camlPervasives___5e_1112();
  uVar2 = camlPervasives___5e_1112();
  camlString__make_1038(uVar2,uVar1);
  camlPervasives___5e_1112();
  camlPervasives___5e_1112();
  camlPervasives__invalid_arg_1012();
  return;
}



void camlPrintf__bad_conversion_format_1061(void)

{
  camlString__sub_1046();
  camlPrintf__bad_conversion_1057();
  return;
}



void camlPrintf__incomplete_format_1065(void)

{
  camlString__sub_1046();
  camlPervasives___5e_1112();
  camlPervasives___5e_1112();
  camlPervasives__invalid_arg_1012();
  return;
}



void __regparm3 camlPrintf__parse_string_conversion_1067(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  uVar6 = param_1;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc(uVar6);
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar3 - 0xc) = 5;
  *(code **)(uVar3 - 8) = camlPrintf__parse_1069;
  *(undefined4 *)(uVar3 - 4) = param_1;
  piVar5 = (int *)FUN_0805b100();
  if ((undefined **)*piVar5 == &caml_exn_Failure) {
    camlPrintf__bad_conversion_1057();
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_0805b100(void)

{
  undefined4 uStack_4;
  
  uStack_4 = caml_exception_pointer;
  caml_exception_pointer = &uStack_4;
  camlPrintf__parse_1069();
  caml_exception_pointer = (undefined4 *)uStack_4;
  return;
}



undefined4 __regparm3 camlPrintf__pad_string_1072(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  
  if ((unaff_EBX == unaff_EDI) && (unaff_ESI == 1)) {
    return param_2;
  }
  if (unaff_EBX <= unaff_EDI) {
    uVar1 = camlString__sub_1046();
    return uVar1;
  }
  uVar1 = camlString__make_1038();
  if (param_3 == 1) {
    camlString__blit_1056();
  }
  else {
    camlString__blit_1056();
  }
  return uVar1;
}



void camlPrintf__format_string_1080(void)

{
  camlPrintf__parse_string_conversion_1067();
  camlPrintf__pad_string_1072();
  return;
}



void __regparm3
camlPrintf__extract_format_1085(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code **ppcVar1;
  undefined4 *puVar2;
  code **ppcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  while( true ) {
    uVar4 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
  }
  ppcVar1 = (code **)(caml_young_ptr - 0xc);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar5;
  *puVar2 = 0xcf7;
  *ppcVar1 = camlPrintf__skip_positional_spec_1090;
  *(undefined4 *)(uVar4 - 8) = 3;
  *(undefined4 *)(uVar4 - 4) = param_1;
  camlPrintf__skip_positional_spec_1090();
  uVar6 = camlBuffer__create_1039();
  camlBuffer__add_char_1072();
  while( true ) {
    uVar4 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x20;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
  }
  ppcVar3 = (code **)(caml_young_ptr - 0x1c);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x20);
  caml_young_ptr = uVar5;
  *puVar2 = 0x1cf7;
  *ppcVar3 = caml_curry2;
  *(undefined4 *)(uVar4 - 0x18) = 5;
  *(code **)(uVar4 - 0x14) = camlPrintf__fill_format_1096;
  *(undefined4 *)(uVar4 - 0x10) = param_1;
  *(undefined4 *)(uVar4 - 0xc) = param_3;
  *(code ***)(uVar4 - 8) = ppcVar1;
  *(undefined4 *)(uVar4 - 4) = uVar6;
  camlList__rev_append_1051();
  camlPrintf__fill_format_1096();
  camlString__sub_1046();
  return;
}



void __regparm3 camlPrintf__extract_format_int_1103(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = camlPrintf__extract_format_1085();
  if ((param_1 != 0x9d) && (param_1 != 0xdd)) {
    return;
  }
  iVar1 = (*(uint *)(iVar2 + -4) >> 10) * 4 + -1;
  uVar3 = (int)((iVar1 - (uint)*(byte *)(iVar2 + iVar1)) * 2 + -1) >> 1;
  iVar1 = (*(uint *)(iVar2 + -4) >> 10) * 4 + -1;
  if (uVar3 < iVar1 - (uint)*(byte *)(iVar2 + iVar1)) {
    *(undefined *)(iVar2 + uVar3) = 0x75;
    return;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



void __regparm3 camlPrintf__extract_format_float_1110(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = camlPrintf__extract_format_1085();
  if (param_1 != 0x8d) {
    return;
  }
  iVar1 = (*(uint *)(iVar2 + -4) >> 10) * 4 + -1;
  uVar3 = (int)((iVar1 - (uint)*(byte *)(iVar2 + iVar1)) * 2 + -1) >> 1;
  iVar1 = (*(uint *)(iVar2 + -4) >> 10) * 4 + -1;
  if (uVar3 < iVar1 - (uint)*(byte *)(iVar2 + iVar1)) {
    *(undefined *)(iVar2 + uVar3) = 0x67;
    return;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



void __regparm3 camlPrintf__sub_format_1117(undefined4 param_1,int param_2)

{
  code **ppcVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int extraout_EDX;
  undefined4 unaff_EBX;
  
  iVar3 = (*(uint *)(param_2 + -4) >> 10) * 4 + -1;
  bVar4 = *(byte *)(param_2 + iVar3);
  while( true ) {
    uVar5 = caml_young_ptr;
    uVar6 = caml_young_ptr - 0x20;
    if (caml_young_limit <= uVar6) break;
    caml_young_ptr = uVar6;
    caml_call_gc();
    param_2 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x1c);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x20);
  caml_young_ptr = uVar6;
  *puVar2 = 0x1cf7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar5 - 0x18) = 5;
  *(code **)(uVar5 - 0x14) = camlPrintf__sub_fmt_1124;
  *(undefined4 *)(uVar5 - 0x10) = param_1;
  *(undefined4 *)(uVar5 - 0xc) = unaff_EBX;
  *(int *)(uVar5 - 8) = param_2;
  *(uint *)(uVar5 - 4) = (iVar3 - (uint)bVar4) * 2 + 1;
  camlPrintf__sub_fmt_1124();
  return;
}



void camlPrintf__sub_format_for_printf_1135(void)

{
  caml_apply3();
  return;
}



undefined4 __regparm3
camlPrintf__iter_on_format_args_1137(int param_1,undefined4 param_2,undefined4 param_3)

{
  code **ppcVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  int extraout_EDX;
  undefined4 unaff_EBX;
  
  iVar3 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  bVar4 = *(byte *)(param_1 + iVar3);
  while( true ) {
    uVar5 = caml_young_ptr;
    uVar6 = caml_young_ptr - 0x3c;
    if (caml_young_limit <= uVar6) break;
    caml_young_ptr = uVar6;
    caml_call_gc();
    param_3 = extraout_ECX;
    param_1 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x38);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x3c);
  caml_young_ptr = uVar6;
  *puVar2 = 0x38f7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar5 - 0x34) = 5;
  *(code **)(uVar5 - 0x30) = camlPrintf__scan_flags_1142;
  *(undefined4 *)(uVar5 - 0x2c) = 0x10f9;
  *(code **)(uVar5 - 0x28) = caml_curry2;
  *(undefined4 *)(uVar5 - 0x24) = 5;
  *(code **)(uVar5 - 0x20) = camlPrintf__scan_conv_1143;
  *(undefined4 *)(uVar5 - 0x1c) = 0x20f9;
  *(code **)(uVar5 - 0x18) = camlPrintf__scan_fmt_1144;
  *(undefined4 *)(uVar5 - 0x14) = 3;
  *(int *)(uVar5 - 0x10) = param_1;
  *(undefined4 *)(uVar5 - 0xc) = unaff_EBX;
  *(undefined4 *)(uVar5 - 8) = param_3;
  *(uint *)(uVar5 - 4) = (iVar3 - (uint)bVar4) * 2 + -1;
  camlPrintf__scan_fmt_1144();
  return 1;
}



void __regparm3 camlPrintf__summarize_format_type_1162(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_EDX;
  undefined4 uVar6;
  
  uVar4 = camlBuffer__create_1039(param_1);
  uVar6 = uVar4;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x2c;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc(param_1,uVar6);
    uVar4 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x28);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x2c);
  caml_young_ptr = uVar5;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar3 - 0x24) = 5;
  *(code **)(uVar3 - 0x20) = camlPrintf__add_char_1166;
  *(undefined4 *)(uVar3 - 0x1c) = uVar4;
  *(undefined4 *)(uVar3 - 0x18) = 0x14f7;
  *(code **)(uVar3 - 0x14) = caml_curry3;
  *(undefined4 *)(uVar3 - 0x10) = 7;
  *(code **)(uVar3 - 0xc) = camlPrintf__add_conv_1169;
  *(undefined4 *)(uVar3 - 8) = uVar4;
  *(code ***)(uVar3 - 4) = ppcVar1;
  camlPrintf__iter_on_format_args_1137();
  camlString__sub_1046();
  return;
}



undefined4 * camlPrintf__ac_of_format_1184(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x38;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  puVar1 = (undefined4 *)(caml_young_ptr - 0x34);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x38);
  caml_young_ptr = uVar4;
  *puVar2 = 0xc00;
  *puVar1 = 1;
  *(undefined4 *)(uVar3 - 0x30) = 1;
  *(undefined4 *)(uVar3 - 0x2c) = 1;
  *(undefined4 *)(uVar3 - 0x28) = 0x10f7;
  *(code **)(uVar3 - 0x24) = caml_curry2;
  *(undefined4 *)(uVar3 - 0x20) = 5;
  *(code **)(uVar3 - 0x1c) = camlPrintf__incr_ac_1187;
  *(undefined4 **)(uVar3 - 0x18) = puVar1;
  *(undefined4 *)(uVar3 - 0x14) = 0x10f7;
  *(code **)(uVar3 - 0x10) = caml_curry3;
  *(undefined4 *)(uVar3 - 0xc) = 7;
  *(code **)(uVar3 - 8) = camlPrintf__add_conv_1191;
  *(code ***)(uVar3 - 4) = (code **)(uVar3 - 0x24);
  camlPrintf__iter_on_format_args_1137();
  return puVar1;
}



undefined4 camlPrintf__count_arguments_of_format_1198(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)camlPrintf__ac_of_format_1184();
  return *puVar1;
}



void __regparm3 camlPrintf__list_iter_i_1201(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar3 - 0xc) = 5;
  *(code **)(uVar3 - 8) = camlPrintf__loop_1204;
  *(undefined4 *)(uVar3 - 4) = param_1;
  camlPrintf__loop_1204();
  return;
}



void __regparm3 camlPrintf__kapr_1209(undefined4 param_1)

{
  code **ppcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  
  puVar4 = (undefined4 *)camlPrintf__ac_of_format_1184();
  uVar2 = *puVar4;
  switch(uVar2) {
  case 0:
  case 1:
    caml_apply2();
    return;
  case 2:
  case 3:
    while (uVar3 = caml_young_ptr, uVar5 = caml_young_ptr - 0x14, uVar5 < caml_young_limit) {
      caml_young_ptr = uVar5;
      caml_call_gc();
    }
    ppcVar1 = (code **)(caml_young_ptr - 0x10);
    puVar4 = (undefined4 *)(caml_young_ptr - 0x14);
    caml_young_ptr = uVar5;
    *puVar4 = 0x10f7;
    *ppcVar1 = camlPrintf__fun_1572;
    *(undefined4 *)(uVar3 - 0xc) = 3;
    *(undefined4 *)(uVar3 - 8) = param_1;
    *(undefined4 *)(uVar3 - 4) = unaff_EBX;
    return;
  case 4:
  case 5:
    while (uVar3 = caml_young_ptr, uVar5 = caml_young_ptr - 0x18, uVar5 < caml_young_limit) {
      caml_young_ptr = uVar5;
      caml_call_gc();
    }
    ppcVar1 = (code **)(caml_young_ptr - 0x14);
    puVar4 = (undefined4 *)(caml_young_ptr - 0x18);
    caml_young_ptr = uVar5;
    *puVar4 = 0x14f7;
    *ppcVar1 = caml_curry2;
    *(undefined4 *)(uVar3 - 0x10) = 5;
    *(code **)(uVar3 - 0xc) = camlPrintf__fun_1575;
    *(undefined4 *)(uVar3 - 8) = param_1;
    *(undefined4 *)(uVar3 - 4) = unaff_EBX;
    return;
  case 6:
  case 7:
    while (uVar3 = caml_young_ptr, uVar5 = caml_young_ptr - 0x18, uVar5 < caml_young_limit) {
      caml_young_ptr = uVar5;
      caml_call_gc();
    }
    break;
  case 8:
  case 9:
    while (uVar3 = caml_young_ptr, uVar5 = caml_young_ptr - 0x18, uVar5 < caml_young_limit) {
      caml_young_ptr = uVar5;
      caml_call_gc();
    }
    ppcVar1 = (code **)(caml_young_ptr - 0x14);
    puVar4 = (undefined4 *)(caml_young_ptr - 0x18);
    caml_young_ptr = uVar5;
    *puVar4 = 0x14f7;
    *ppcVar1 = caml_curry4;
    *(undefined4 *)(uVar3 - 0x10) = 9;
    *(code **)(uVar3 - 0xc) = camlPrintf__fun_1581;
    *(undefined4 *)(uVar3 - 8) = param_1;
    *(undefined4 *)(uVar3 - 4) = unaff_EBX;
    return;
  case 10:
  case 0xb:
    while (uVar3 = caml_young_ptr, uVar5 = caml_young_ptr - 0x18, uVar5 < caml_young_limit) {
      caml_young_ptr = uVar5;
      caml_call_gc();
    }
    ppcVar1 = (code **)(caml_young_ptr - 0x14);
    puVar4 = (undefined4 *)(caml_young_ptr - 0x18);
    caml_young_ptr = uVar5;
    *puVar4 = 0x14f7;
    *ppcVar1 = caml_curry5;
    *(undefined4 *)(uVar3 - 0x10) = 0xb;
    *(code **)(uVar3 - 0xc) = camlPrintf__fun_1584;
    *(undefined4 *)(uVar3 - 8) = param_1;
    *(undefined4 *)(uVar3 - 4) = unaff_EBX;
    return;
  case 0xc:
  case 0xd:
    while (uVar3 = caml_young_ptr, uVar5 = caml_young_ptr - 0x18, uVar5 < caml_young_limit) {
      caml_young_ptr = uVar5;
      caml_call_gc();
    }
    ppcVar1 = (code **)(caml_young_ptr - 0x14);
    puVar4 = (undefined4 *)(caml_young_ptr - 0x18);
    caml_young_ptr = uVar5;
    *puVar4 = 0x14f7;
    *ppcVar1 = caml_curry6;
    *(undefined4 *)(uVar3 - 0x10) = 0xd;
    *(code **)(uVar3 - 0xc) = camlPrintf__fun_1587;
    *(undefined4 *)(uVar3 - 8) = param_1;
    *(undefined4 *)(uVar3 - 4) = unaff_EBX;
    return;
  default:
    while (uVar3 = caml_young_ptr, uVar5 = caml_young_ptr - 0x1c, uVar5 < caml_young_limit) {
      caml_young_ptr = uVar5;
      caml_call_gc();
    }
    ppcVar1 = (code **)(caml_young_ptr - 0x18);
    puVar4 = (undefined4 *)(caml_young_ptr - 0x1c);
    caml_young_ptr = uVar5;
    *puVar4 = 0x18f7;
    *ppcVar1 = caml_curry2;
    *(undefined4 *)(uVar3 - 0x14) = 5;
    *(code **)(uVar3 - 0x10) = camlPrintf__loop_1240;
    *(undefined4 *)(uVar3 - 0xc) = param_1;
    *(undefined4 *)(uVar3 - 8) = unaff_EBX;
    *(undefined4 *)(uVar3 - 4) = uVar2;
    camlPrintf__loop_1240();
    return;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x14);
  puVar4 = (undefined4 *)(caml_young_ptr - 0x18);
  caml_young_ptr = uVar5;
  *puVar4 = 0x14f7;
  *ppcVar1 = caml_curry3;
  *(undefined4 *)(uVar3 - 0x10) = 7;
  *(code **)(uVar3 - 0xc) = camlPrintf__fun_1578;
  *(undefined4 *)(uVar3 - 8) = param_1;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  return;
}



void __regparm3 camlPrintf__scan_positional_spec_1252(int param_1,int param_2)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_EBX;
  
  if (0x13 < (uint)*(byte *)(param_1 + (param_2 >> 1)) * 2 - 0x5f) {
    caml_apply2();
    return;
  }
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x1c;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x18);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x1c);
  caml_young_ptr = uVar4;
  *puVar2 = 0x18f7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar3 - 0x14) = 5;
  *(code **)(uVar3 - 0x10) = camlPrintf__get_int_literal_1258;
  *(int *)(uVar3 - 0xc) = param_1;
  *(undefined4 *)(uVar3 - 8) = unaff_EBX;
  *(int *)(uVar3 - 4) = param_2;
  camlPrintf__get_int_literal_1258();
  return;
}



void __regparm3 camlPrintf__next_index_1262(int param_1)

{
  if (param_1 != 1) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x0805baaf. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcRam00000008)();
  return;
}



undefined4 __regparm3 camlPrintf__get_index_1265(undefined4 *param_1)

{
  undefined4 unaff_EBX;
  
  if (param_1 != (undefined4 *)0x1) {
    return *param_1;
  }
  return unaff_EBX;
}



void __regparm3 camlPrintf__make_valid_float_lexeme_1270(int param_1)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int extraout_ECX;
  int iVar5;
  int extraout_EDX;
  
  iVar5 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  iVar5 = (iVar5 - (uint)*(byte *)(param_1 + iVar5)) * 2 + 1;
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x14;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    param_1 = extraout_ECX;
    iVar5 = extraout_EDX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x10);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x14);
  caml_young_ptr = uVar4;
  *puVar2 = 0x10f7;
  *ppcVar1 = camlPrintf__valid_float_loop_1273;
  *(undefined4 *)(uVar3 - 0xc) = 3;
  *(int *)(uVar3 - 8) = param_1;
  *(int *)(uVar3 - 4) = iVar5;
  camlPrintf__valid_float_loop_1273();
  return;
}



undefined4 __regparm3 camlPrintf__fun_1600(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_EBX;
  
  uVar1 = caml_c_call(param_1);
  iVar2 = caml_c_call(unaff_EBX);
  if (6 < iVar2) {
    return uVar1;
  }
  uVar1 = camlPrintf__make_valid_float_lexeme_1270();
  return uVar1;
}



void __regparm3 camlPrintf__scan_format_1278(undefined4 param_1,undefined4 param_2)

{
  code **ppcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  uVar5 = DAT_0807b7e4;
  uVar4 = DAT_0807b7e0;
  uVar3 = caml_extra_params;
  while( true ) {
    uVar6 = caml_young_ptr;
    uVar7 = caml_young_ptr - 100;
    if (caml_young_limit <= uVar7) break;
    caml_young_ptr = uVar7;
    caml_call_gc();
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x60);
  puVar2 = (undefined4 *)(caml_young_ptr - 100);
  caml_young_ptr = uVar7;
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry2;
  *(undefined4 *)(uVar6 - 0x5c) = 5;
  *(code **)(uVar6 - 0x58) = camlPrintf__get_arg_1288;
  *(undefined4 *)(uVar6 - 0x54) = unaff_EBX;
  *(undefined4 *)(uVar6 - 0x50) = 0x4cf7;
  *(code **)(uVar6 - 0x4c) = caml_curry3;
  *(undefined4 *)(uVar6 - 0x48) = 7;
  *(code **)(uVar6 - 0x44) = camlPrintf__scan_positional_1291;
  *(undefined4 *)(uVar6 - 0x40) = 0x10f9;
  *(code **)(uVar6 - 0x3c) = caml_curry4;
  *(undefined4 *)(uVar6 - 0x38) = 9;
  *(code **)(uVar6 - 0x34) = camlPrintf__scan_flags_1292;
  *(undefined4 *)(uVar6 - 0x30) = 0x20f9;
  *(code **)(uVar6 - 0x2c) = caml_curry4;
  *(undefined4 *)(uVar6 - 0x28) = 9;
  *(code **)(uVar6 - 0x24) = camlPrintf__scan_conv_1293;
  *(undefined4 *)(uVar6 - 0x20) = param_1;
  *(undefined4 *)(uVar6 - 0x1c) = param_2;
  *(undefined4 *)(uVar6 - 0x18) = unaff_ESI;
  *(undefined4 *)(uVar6 - 0x14) = unaff_EDI;
  *(undefined4 *)(uVar6 - 0x10) = uVar3;
  *(undefined4 *)(uVar6 - 0xc) = uVar4;
  *(undefined4 *)(uVar6 - 8) = uVar5;
  *(code ***)(uVar6 - 4) = ppcVar1;
  camlPrintf__scan_positional_1291();
  return;
}



void __regparm3 camlPrintf__mkprintf_1345(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  code **unaff_EBX;
  undefined4 unaff_ESI;
  
  uVar4 = (**unaff_EBX)();
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar5 = caml_young_ptr - 0x24;
    if (caml_young_limit <= uVar5) break;
    caml_young_ptr = uVar5;
    caml_call_gc();
    uVar4 = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0x20);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x24);
  caml_young_ptr = uVar5;
  *puVar2 = 0x20f7;
  *ppcVar1 = caml_curry4;
  *(undefined4 *)(uVar3 - 0x1c) = 9;
  *(code **)(uVar3 - 0x18) = camlPrintf__pr_1354;
  *(undefined4 *)(uVar3 - 0x14) = param_1;
  *(undefined4 *)(uVar3 - 0x10) = param_3;
  *(undefined4 *)(uVar3 - 0xc) = param_2;
  *(undefined4 *)(uVar3 - 8) = unaff_ESI;
  *(undefined4 *)(uVar3 - 4) = uVar4;
  camlPrintf__index_of_int_1037();
  caml_apply2();
  camlPrintf__kapr_1209();
  return;
}



void camlPrintf__kfprintf_1386(void)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    unaff_EBX = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0xc);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar4;
  *puVar2 = 0xcf7;
  *ppcVar1 = camlPrintf__fun_1680;
  *(undefined4 *)(uVar3 - 8) = 3;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  caml_extra_params = 0;
  caml_apply6();
  return;
}



void camlPrintf__ifprintf_1389(void)

{
                    // WARNING: Could not recover jumptable at 0x0805bdcd. Too many branches
                    // WARNING: Treating indirect jump as call
  (*pcRam00000000)();
  return;
}



void camlPrintf__fprintf_1391(void)

{
  camlPrintf__kfprintf_1386();
  return;
}



void __regparm3 camlPrintf__printf_1393(undefined4 param_1)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)camlPrintf__fprintf_1391(param_1);
                    // WARNING: Could not recover jumptable at 0x0805bdfa. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcVar1)();
  return;
}



void __regparm3 camlPrintf__eprintf_1395(undefined4 param_1)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)camlPrintf__fprintf_1391(param_1);
                    // WARNING: Could not recover jumptable at 0x0805be1a. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcVar1)();
  return;
}



void camlPrintf__kbprintf_1397(void)

{
  code **ppcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  
  while( true ) {
    uVar3 = caml_young_ptr;
    uVar4 = caml_young_ptr - 0x10;
    if (caml_young_limit <= uVar4) break;
    caml_young_ptr = uVar4;
    caml_call_gc();
    unaff_EBX = extraout_ECX;
  }
  ppcVar1 = (code **)(caml_young_ptr - 0xc);
  puVar2 = (undefined4 *)(caml_young_ptr - 0x10);
  caml_young_ptr = uVar4;
  *puVar2 = 0xcf7;
  *ppcVar1 = camlPrintf__fun_1694;
  *(undefined4 *)(uVar3 - 8) = 3;
  *(undefined4 *)(uVar3 - 4) = unaff_EBX;
  caml_extra_params = 0;
  caml_apply6();
  return;
}



void camlPrintf__bprintf_1400(void)

{
  camlPrintf__kbprintf_1397();
  return;
}



void camlPrintf__get_buff_1402(void)

{
  camlBuffer__create_1039();
  return;
}



void __regparm3 camlPrintf__get_contents_1405(int param_1)

{
  camlString__sub_1046();
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}



void __regparm3 camlPrintf__get_cont_1408(code **param_1)

{
  int unaff_EBX;
  
  camlString__sub_1046();
  *(undefined4 *)(unaff_EBX + 4) = 1;
                    // WARNING: Could not recover jumptable at 0x0805bf2e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**param_1)();
  return;
}



void camlPrintf__ksprintf_1411(void)

{
  (*pcRam00000000)();
  caml_extra_params = 0;
  caml_apply6();
  return;
}



void __regparm3 camlPrintf__sprintf_1413(undefined4 param_1)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)camlPrintf__ksprintf_1411(param_1);
                    // WARNING: Could not recover jumptable at 0x0805bf8a. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcVar1)();
  return;
}



undefined4 camlPrintf__entry(void)

{
  code **ppcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  
  puVar2 = (undefined4 *)caml_allocN();
  ppcVar1 = (code **)(puVar2 + 1);
  *puVar2 = 0x10f7;
  *ppcVar1 = caml_curry2;
  puVar2[2] = 5;
  puVar2[3] = camlPrintf__add_int_index_1040;
  puVar2[4] = extraout_ECX;
  uVar3 = (**ppcVar1)();
  puVar4 = (undefined4 *)caml_allocN();
  *puVar4 = 0xcf7;
  puVar4[1] = camlPrintf__index_of_literal_position_1044;
  puVar4[2] = 3;
  puVar4[3] = &camlPrintf__38;
  puVar4[4] = 0xcf7;
  puVar4[5] = camlPrintf__to_string_1054;
  puVar4[6] = 3;
  puVar4[7] = &camlPrintf__37;
  UINT_08079520 = (uint)(puVar4 + 9);
  puVar4[8] = 0x1800;
  *(undefined ***)UINT_08079520 = &camlPrintf__38;
  puVar4[10] = ppcVar1;
  puVar4[0xb] = uVar3;
  puVar4[0xc] = puVar4 + 1;
  puVar4[0xd] = &camlPrintf__37;
  puVar4[0xe] = puVar4 + 5;
                    // WARNING: Read-only address (ram,0x08079520) is written
                    // WARNING: Read-only address (ram,0x08079524) is written
  UINT_08079524 = (uint)&camlPrintf__36;
                    // WARNING: Read-only address (ram,0x08079528) is written
  UINT_08079528 = (uint)&camlPrintf__35;
                    // WARNING: Read-only address (ram,0x0807952c) is written
  UINT_0807952c = (uint)&camlPrintf__34;
                    // WARNING: Read-only address (ram,0x08079530) is written
  UINT_08079530 = (uint)&camlPrintf__33;
                    // WARNING: Read-only address (ram,0x08079534) is written
  UINT_08079534 = (uint)&camlPrintf__32;
                    // WARNING: Read-only address (ram,0x08079538) is written
  UINT_08079538 = (uint)&camlPrintf__31;
                    // WARNING: Read-only address (ram,0x0807953c) is written
  UINT_0807953c = (uint)&camlPrintf__30;
                    // WARNING: Read-only address (ram,0x08079540) is written
  UINT_08079540 = (uint)&camlPrintf__29;
                    // WARNING: Read-only address (ram,0x08079544) is written
  UINT_08079544 = (uint)&camlPrintf__28;
                    // WARNING: Read-only address (ram,0x08079548) is written
  UINT_08079548 = (uint)&camlPrintf__27;
                    // WARNING: Read-only address (ram,0x0807954c) is written
  UINT_0807954c = (uint)&camlPrintf__26;
                    // WARNING: Read-only address (ram,0x08079550) is written
  UINT_08079550 = (uint)&camlPrintf__25;
                    // WARNING: Read-only address (ram,0x08079554) is written
  UINT_08079554 = (uint)&camlPrintf__24;
                    // WARNING: Read-only address (ram,0x08079558) is written
  UINT_08079558 = (uint)&camlPrintf__23;
                    // WARNING: Read-only address (ram,0x0807955c) is written
  UINT_0807955c = (uint)&camlPrintf__22;
                    // WARNING: Read-only address (ram,0x08079560) is written
  UINT_08079560 = (uint)&camlPrintf__21;
                    // WARNING: Read-only address (ram,0x08079564) is written
  UINT_08079564 = (uint)&camlPrintf__20;
                    // WARNING: Read-only address (ram,0x08079568) is written
  UINT_08079568 = (uint)&camlPrintf__19;
                    // WARNING: Read-only address (ram,0x0807956c) is written
  UINT_0807956c = (uint)&camlPrintf__18;
                    // WARNING: Read-only address (ram,0x08079570) is written
  UINT_08079570 = (uint)&camlPrintf__17;
                    // WARNING: Read-only address (ram,0x08079574) is written
  UINT_08079574 = (uint)&camlPrintf__16;
  UINT_08079578 = (uint)(puVar4 + 0x10);
  puVar4[0xf] = 0x10f7;
  *(code **)UINT_08079578 = caml_curry2;
  puVar4[0x11] = 5;
  puVar4[0x12] = camlPrintf__fun_1600;
  puVar4[0x13] = &camlPrintf__15;
                    // WARNING: Read-only address (ram,0x08079578) is written
                    // WARNING: Read-only address (ram,0x0807957c) is written
  UINT_0807957c = (uint)&camlPrintf__14;
                    // WARNING: Read-only address (ram,0x08079580) is written
  UINT_08079580 = (uint)&camlPrintf__13;
                    // WARNING: Read-only address (ram,0x0807950c) is written
  UINT_0807950c = (uint)&camlPrintf__12;
                    // WARNING: Read-only address (ram,0x08079500) is written
  UINT_08079500 = (uint)&camlPrintf__11;
                    // WARNING: Read-only address (ram,0x080794f4) is written
  camlPrintf = (uint)&camlPrintf__10;
                    // WARNING: Read-only address (ram,0x080794f8) is written
  UINT_080794f8 = (uint)&camlPrintf__9;
                    // WARNING: Read-only address (ram,0x080794fc) is written
  UINT_080794fc = (uint)&camlPrintf__8;
                    // WARNING: Read-only address (ram,0x08079514) is written
  UINT_08079514 = (uint)&camlPrintf__7;
                    // WARNING: Read-only address (ram,0x08079508) is written
  UINT_08079508 = (uint)&camlPrintf__6;
                    // WARNING: Read-only address (ram,0x08079584) is written
  UINT_08079584 = (uint)&camlPrintf__5;
                    // WARNING: Read-only address (ram,0x08079588) is written
  UINT_08079588 = (uint)&camlPrintf__4;
                    // WARNING: Read-only address (ram,0x0807958c) is written
  UINT_0807958c = (uint)&camlPrintf__3;
                    // WARNING: Read-only address (ram,0x08079510) is written
  UINT_08079510 = (uint)&camlPrintf__2;
                    // WARNING: Read-only address (ram,0x08079504) is written
  UINT_08079504 = (uint)&camlPrintf__1;
                    // WARNING: Read-only address (ram,0x08079518) is written
  UINT_08079518 = 0;
  puVar4[0x14] = 0x1400;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  puVar4[0x18] = 0;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0x800;
  puVar4[0x1b] = 0;
  puVar4[0x1c] = puVar4 + 0x15;
  puVar2 = (undefined4 *)puVar4[0x1b];
  puVar4[0x1d] = 0x1000;
  puVar4[0x1e] = *puVar2;
  puVar4[0x1f] = puVar2[2];
  puVar4[0x20] = puVar2[4];
  puVar4[0x21] = puVar2[5];
  puVar4[0x22] = 0x800;
  puVar4[0x23] = puVar4 + 0x1e;
  puVar4[0x24] = puVar4[0x1c];
                    // WARNING: Read-only address (ram,0x0807951c) is written
  UINT_0807951c = (uint)(puVar4 + 0x23);
  return 1;
}



void __regparm3 camlCallback__register_1031(undefined4 param_1)

{
  caml_c_call(param_1);
  return;
}



void __regparm3 camlCallback__register_exception_1034(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 extraout_ECX;
  undefined8 *unaff_EBX;
  
  if (*(char *)((int)unaff_EBX + -4) == -2) {
    while( true ) {
      uVar2 = caml_young_ptr - 0xc;
      if (caml_young_limit <= uVar2) break;
      caml_young_ptr = uVar2;
      caml_call_gc();
      param_1 = extraout_ECX;
    }
    puVar3 = (undefined8 *)(caml_young_ptr - 8);
    puVar1 = (undefined4 *)(caml_young_ptr - 0xc);
    caml_young_ptr = uVar2;
    *puVar1 = 0x8fd;
    *puVar3 = *unaff_EBX;
  }
  else {
    puVar3 = *(undefined8 **)unaff_EBX;
  }
  caml_c_call(param_1,puVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 camlCallback__entry(void)

{
  _camlCallback = &camlCallback__2;
  _DAT_0807b1e8 = &camlCallback__1;
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void camlCallback__code_end(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int *piStack_a8;
  socklen_t sStack_94;
  sockaddr asStack_90 [7];
  int aiStack_20 [4];
  
  sStack_94 = 0x70;
  caml_enter_blocking_section();
  iVar1 = accept(param_1 >> 1,asStack_90,&sStack_94);
  caml_leave_blocking_section();
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("accept",0);
  }
  aiStack_20[0] = alloc_sockaddr(asStack_90,sStack_94,iVar1);
  uStack_b4 = caml_local_roots;
  caml_local_roots = &uStack_b4;
  uStack_ac = 1;
  uStack_b0 = 1;
  piStack_a8 = aiStack_20;
  piVar2 = (int *)caml_alloc_small(2,0);
  *piVar2 = iVar1 * 2 + 1;
  piVar2[1] = aiStack_20[0];
  caml_local_roots = (undefined4 *)uStack_b4;
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_accept(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int *local_a8;
  socklen_t local_94;
  sockaddr local_90 [7];
  int local_20 [4];
  
  local_94 = 0x70;
  caml_enter_blocking_section();
  iVar1 = accept(param_1 >> 1,local_90,&local_94);
  caml_leave_blocking_section();
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("accept",0);
  }
  local_20[0] = alloc_sockaddr(local_90,local_94,iVar1);
  local_b4 = caml_local_roots;
  caml_local_roots = &local_b4;
  local_ac = 1;
  local_b0 = 1;
  local_a8 = local_20;
  piVar2 = (int *)caml_alloc_small(2,0);
  *piVar2 = iVar1 * 2 + 1;
  piVar2[1] = local_20[0];
  caml_local_roots = (undefined4 *)local_b4;
  return;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_access(char *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = caml_convert_flag_list(param_2,access_permission_table);
  iVar1 = access(param_1,iVar1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("access",param_1);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_inet_addr_of_string(char *param_1)

{
  int iVar1;
  undefined local_20 [16];
  undefined local_10 [4];
  
  iVar1 = inet_pton(2,param_1,local_10);
  if (iVar1 < 1) {
    iVar1 = inet_pton(10,param_1,local_20);
    if (iVar1 < 1) {
                    // WARNING: Subroutine does not return
      caml_failwith("inet_addr_of_string");
    }
    alloc_inet6_addr(local_20);
  }
  else {
    alloc_inet_addr(local_10);
  }
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_alarm(int param_1)

{
  uint uVar1;
  
  uVar1 = alarm(param_1 >> 1);
  return uVar1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_bind(int param_1,undefined4 param_2)

{
  int iVar1;
  socklen_t local_80;
  sockaddr local_7c [7];
  
  get_sockaddr(param_2,local_7c,&local_80);
  iVar1 = bind(param_1 >> 1,local_7c,local_80);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&DAT_0807080e,0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_chdir(char *param_1)

{
  int iVar1;
  
  iVar1 = chdir(param_1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("chdir",param_1);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_chmod(char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = chmod(param_1,param_2 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("chmod",param_1);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_chown(char *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = chown(param_1,param_2 >> 1,param_3 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("chown",param_1);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_chroot(char *param_1)

{
  int iVar1;
  
  iVar1 = chroot(param_1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("chroot",param_1);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_close(int param_1)

{
  int iVar1;
  
  iVar1 = close(param_1 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("close",0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_closedir(DIR **param_1)

{
  DIR *__dirp;
  
  __dirp = *param_1;
  if (__dirp == (DIR *)0x0) {
    __dirp = (DIR *)unix_error(9,"closedir",0);
  }
  closedir(__dirp);
  *param_1 = (DIR *)0x0;
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_connect(int param_1,undefined4 param_2)

{
  int iVar1;
  socklen_t local_80;
  sockaddr local_7c [7];
  
  get_sockaddr(param_2,local_7c,&local_80);
  caml_enter_blocking_section();
  iVar1 = connect(param_1 >> 1,local_7c,local_80);
  caml_leave_blocking_section();
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("connect",0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_dup(int param_1)

{
  int iVar1;
  
  iVar1 = dup(param_1 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&DAT_08070837,0);
  }
  return iVar1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_dup2(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = dup2(param_1 >> 1,param_2 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&DAT_0807083b,0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void unix_environment(void)

{
  caml_copy_string_array(_environ);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_error_message(int *param_1)

{
  int __errnum;
  char *pcVar1;
  
  if (((uint)param_1 & 1) == 0) {
    __errnum = *param_1 >> 1;
  }
  else {
    __errnum = *(int *)(error_table + ((int)param_1 >> 1) * 4);
  }
  pcVar1 = strerror(__errnum);
  caml_copy_string(pcVar1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_execv(char *param_1,undefined4 param_2)

{
  char **__argv;
  
  __argv = (char **)cstringvect(param_2);
  execv(param_1,__argv);
  caml_stat_free(__argv);
                    // WARNING: Subroutine does not return
  uerror("execv",param_1);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_execve(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char **__argv;
  char **__envp;
  
  __argv = (char **)cstringvect(param_2);
  __envp = (char **)cstringvect(param_3);
  execve(param_1,__argv,__envp);
  caml_stat_free(__argv);
  caml_stat_free(__envp);
                    // WARNING: Subroutine does not return
  uerror("execve",param_1);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void unix_execvpe(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char **__argv;
  
  __argv = (char **)cstringvect(param_2);
  uVar1 = _environ;
  _environ = cstringvect(param_3);
  execvp(param_1,__argv);
  caml_stat_free(__argv);
  caml_stat_free(_environ);
  _environ = uVar1;
                    // WARNING: Subroutine does not return
  uerror("execvp",param_1);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_execvp(char *param_1,undefined4 param_2)

{
  char **__argv;
  
  __argv = (char **)cstringvect(param_2);
  execvp(param_1,__argv);
  caml_stat_free(__argv);
                    // WARNING: Subroutine does not return
  uerror("execvp",param_1);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_fchmod(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fchmod(param_1 >> 1,param_2 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&DAT_08070854,0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_fchown(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = fchown(param_1 >> 1,param_2 >> 1,param_3 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("fchown",0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_clear_close_on_exec(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fcntl(param_1 >> 1,1,0);
  if (uVar1 != 0xffffffff) {
    iVar2 = fcntl(param_1 >> 1,2,uVar1 & 0xfffffffe);
    if (iVar2 != -1) {
      return 1;
    }
  }
                    // WARNING: Subroutine does not return
  uerror("clear_close_on_exec",0);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_set_close_on_exec(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fcntl(param_1 >> 1,1,0);
  if (uVar1 != 0xffffffff) {
    iVar2 = fcntl(param_1 >> 1,2,uVar1 | 1);
    if (iVar2 != -1) {
      return 1;
    }
  }
                    // WARNING: Subroutine does not return
  uerror("set_close_on_exec",0);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_clear_nonblock(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fcntl(param_1 >> 1,3,0);
  if (uVar1 != 0xffffffff) {
    iVar2 = fcntl(param_1 >> 1,4,uVar1 & 0xfffff7ff);
    if (iVar2 != -1) {
      return 1;
    }
  }
                    // WARNING: Subroutine does not return
  uerror("clear_nonblock",0);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_set_nonblock(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fcntl(param_1 >> 1,3,0);
  if (uVar1 != 0xffffffff) {
    iVar2 = fcntl(param_1 >> 1,4,uVar1 | 0x800);
    if (iVar2 != -1) {
      return 1;
    }
  }
                    // WARNING: Subroutine does not return
  uerror("set_nonblock",0);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_fork(void)

{
  __pid_t _Var1;
  
  _Var1 = fork();
  if (_Var1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&DAT_080708a4,0);
  }
  if ((caml_debugger_in_use != 0) &&
     (((caml_debugger_fork_mode != 0 && (_Var1 == 0)) ||
      ((caml_debugger_fork_mode == 0 && (_Var1 != 0)))))) {
    caml_debugger_cleanup_fork();
  }
  return _Var1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_ftruncate_64(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = ftruncate64(param_1 >> 1,*(__off64_t *)(param_2 + 4));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("ftruncate",0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_ftruncate(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = ftruncate64(param_1 >> 1,CONCAT44(param_2 >> 0x1f,param_2 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("ftruncate",0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int * unix_getaddrinfo(char *param_1,char *param_2,int **param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  addrinfo *paVar9;
  char *__dest;
  size_t __n;
  undefined local_128 [112];
  undefined4 **local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 **local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 *local_90;
  addrinfo *local_8c;
  addrinfo local_88;
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  int **local_5c;
  int **local_58;
  undefined4 **local_54;
  undefined4 *local_48;
  int *local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  
  uVar2 = caml_local_roots;
  local_3c = caml_local_roots;
  local_68 = &local_3c;
  local_34 = 1;
  local_38 = 3;
  local_30 = &param_1;
  local_2c = &param_2;
  local_28 = &param_3;
  local_40 = (int *)0x0;
  local_44 = (int *)0x0;
  local_48 = (undefined4 *)0x0;
  caml_local_roots = (undefined4 ***)&local_68;
  local_60 = 1;
  local_64 = 3;
  local_5c = &local_40;
  local_58 = &local_44;
  local_54 = &local_48;
  iVar4 = caml_string_length(param_1);
  pcVar8 = (char *)0x0;
  if (iVar4 != 0) {
    pcVar8 = (char *)caml_stat_alloc(iVar4 + 1);
    strcpy(pcVar8,param_1);
  }
  iVar4 = caml_string_length(param_2);
  __dest = (char *)0x0;
  if (iVar4 != 0) {
    __dest = (char *)caml_stat_alloc(iVar4 + 1);
    strcpy(__dest,param_2);
  }
  uVar5 = 0;
  do {
    *(undefined4 *)((int)&local_88.ai_flags + uVar5) = 0;
    uVar5 = uVar5 + 4;
  } while (uVar5 < 0x20);
  local_88.ai_family = 0;
  for (; ((uint)param_3 & 1) == 0; param_3 = (int **)param_3[1]) {
    local_44 = *param_3;
    if (((uint)local_44 & 1) == 0) {
      cVar1 = *(char *)(local_44 + -1);
      if (cVar1 == '\x01') {
        local_88.ai_socktype = *(int *)(socket_type_table + (*local_44 >> 1) * 4);
      }
      else if (cVar1 == '\0') {
        local_88.ai_family = *(int *)(socket_domain_table + (*local_44 >> 1) * 4);
      }
      else if (cVar1 == '\x02') {
        local_88.ai_protocol = *local_44 >> 1;
      }
    }
    else {
      iVar4 = (int)local_44 >> 1;
      if (iVar4 == 1) {
        local_88.ai_flags = local_88.ai_flags | 2;
      }
      else if (iVar4 == 2) {
        local_88.ai_flags = local_88.ai_flags | 1;
      }
      else if (iVar4 == 0) {
        local_88.ai_flags = local_88.ai_flags | 4;
      }
    }
  }
  caml_enter_blocking_section();
  iVar4 = getaddrinfo(pcVar8,__dest,&local_88,&local_8c);
  caml_leave_blocking_section();
  if (pcVar8 != (char *)0x0) {
    caml_stat_free(pcVar8);
  }
  if (__dest != (char *)0x0) {
    caml_stat_free(__dest);
  }
  local_40 = (int *)0x1;
  if (iVar4 == 0) {
    if (local_8c != (addrinfo *)0x0) {
      paVar9 = local_8c;
      do {
        ppuVar3 = caml_local_roots;
        local_b8 = caml_local_roots;
        local_90 = (undefined4 *)0x0;
        local_94 = 0;
        local_98 = 0;
        local_b0 = 1;
        local_b4 = 3;
        local_ac = &local_90;
        local_a8 = &local_94;
        local_a4 = &local_98;
        __n = 0x70;
        if (paVar9->ai_addrlen < 0x71) {
          __n = paVar9->ai_addrlen;
        }
        caml_local_roots = &local_b8;
        memcpy(local_128,paVar9->ai_addr,__n);
        local_94 = alloc_sockaddr(local_128,__n,0xffffffff);
        pcVar8 = paVar9->ai_canonname;
        if (paVar9->ai_canonname == (char *)0x0) {
          pcVar8 = "";
        }
        local_98 = caml_copy_string(pcVar8);
        puVar6 = (undefined4 *)caml_alloc_small(5,0);
        local_90 = puVar6;
        uVar7 = cst_to_constr(paVar9->ai_family,socket_domain_table,3,0);
        *puVar6 = uVar7;
        puVar6 = local_90 + 1;
        uVar7 = cst_to_constr(paVar9->ai_socktype,socket_type_table,4,0);
        *puVar6 = uVar7;
        local_90[2] = paVar9->ai_protocol * 2 + 1;
        local_90[3] = local_94;
        local_90[4] = local_98;
        local_48 = local_90;
        caml_local_roots = (undefined4 ***)ppuVar3;
        local_44 = (int *)caml_alloc_small(2,0);
        *local_44 = (int)local_48;
        local_44[1] = (int)local_40;
        paVar9 = paVar9->ai_next;
        local_40 = local_44;
      } while (paVar9 != (addrinfo *)0x0);
    }
    freeaddrinfo(local_8c);
  }
  caml_local_roots = (undefined4 ***)uVar2;
  return local_40;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_getcwd(void)

{
  char *pcVar1;
  char local_100c [4100];
  
  pcVar1 = getcwd(local_100c,0x1000);
  if (pcVar1 == (char *)0x0) {
                    // WARNING: Subroutine does not return
    uerror("getcwd",0);
  }
  caml_copy_string(local_100c);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_getegid(void)

{
  __gid_t _Var1;
  
  _Var1 = getegid();
  return _Var1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = geteuid();
  return _Var1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = getgid();
  return _Var1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void __regparm3 alloc_group_entry(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [4];
  
  local_20[0] = 1;
  local_24 = 1;
  local_28 = 1;
  local_48 = caml_local_roots;
  caml_local_roots = &local_48;
  local_40 = 1;
  local_44 = 3;
  local_3c = local_20;
  local_38 = &local_24;
  local_34 = &local_28;
  local_20[0] = caml_copy_string(*param_1);
  local_24 = caml_copy_string(param_1[1]);
  local_28 = caml_copy_string_array(param_1[3]);
  puVar1 = (undefined4 *)caml_alloc_small(4,0);
  *puVar1 = local_20[0];
  puVar1[1] = local_24;
  puVar1[2] = param_1[2] * 2 + 1;
  puVar1[3] = local_28;
  caml_local_roots = (undefined4 *)local_48;
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_getgrgid(int param_1)

{
  group *pgVar1;
  
  pgVar1 = getgrgid(param_1 >> 1);
  if (pgVar1 == (group *)0x0) {
    caml_raise_not_found();
  }
  alloc_group_entry();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_getgrnam(char *param_1)

{
  group *pgVar1;
  
  pgVar1 = getgrnam(param_1);
  if (pgVar1 == (group *)0x0) {
    caml_raise_not_found();
  }
  alloc_group_entry();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_getgroups(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __gid_t a_Stack_4001c [65539];
  
  iVar1 = getgroups(0x10000,a_Stack_4001c);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("getgroups",0);
  }
  iVar2 = caml_alloc_tuple(iVar1);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      *(__gid_t *)(iVar2 + iVar3 * 4) = a_Stack_4001c[iVar3] * 2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar1);
  }
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void __regparm3 alloc_host_entry(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 **local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  
  local_10 = 1;
  local_14 = (undefined4 *)0x1;
  local_18 = 1;
  local_1c = 1;
  local_3c = caml_local_roots;
  caml_local_roots = &local_3c;
  local_34 = 1;
  local_38 = 4;
  local_30 = &local_10;
  local_2c = &local_14;
  local_28 = &local_18;
  local_24 = &local_1c;
  local_10 = caml_copy_string(*param_1);
  if (param_1[1] == 0) {
    local_14 = &DAT_080821c4;
  }
  else {
    local_14 = (undefined4 *)caml_copy_string_array(param_1[1]);
  }
  entry_h_length = param_1[3];
  local_18 = caml_alloc_array(alloc_one_addr,param_1[4]);
  puVar1 = (undefined4 *)caml_alloc_small(4,0);
  *puVar1 = local_10;
  puVar1[1] = local_14;
  if (param_1[2] == 1) {
    puVar1[2] = 1;
  }
  else {
    puVar1[2] = (uint)(param_1[2] != 2) * 2 + 3;
  }
  puVar1[3] = local_18;
  caml_local_roots = (undefined4 *)local_3c;
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_gethostbyname(char *param_1)

{
  int iVar1;
  char *__dest;
  int *__h_errnop;
  char local_2744 [10000];
  hostent local_34;
  hostent *local_20 [4];
  
  iVar1 = caml_string_length(param_1);
  __dest = (char *)caml_stat_alloc(iVar1 + 1);
  strcpy(__dest,param_1);
  caml_enter_blocking_section();
  __h_errnop = __h_errno_location();
  iVar1 = gethostbyname_r(__dest,&local_34,local_2744,10000,local_20,__h_errnop);
  caml_leave_blocking_section();
  if (iVar1 != 0) {
    local_20[0] = (hostent *)0x0;
  }
  caml_stat_free(__dest);
  if (local_20[0] == (hostent *)0x0) {
    caml_raise_not_found();
  }
  alloc_host_entry();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void alloc_one_addr(void *param_1)

{
  undefined local_20 [16];
  undefined local_10 [4];
  
  if (entry_h_length == 0x10) {
    memmove(local_20,param_1,0x10);
    alloc_inet6_addr(local_20);
  }
  else {
    memmove(local_10,param_1,4);
    alloc_inet_addr(local_10);
  }
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_gethostbyaddr(undefined4 *param_1)

{
  int iVar1;
  int local_273c;
  char local_2738 [10000];
  hostent local_28;
  hostent *local_14;
  undefined4 local_10;
  
  local_10 = *param_1;
  caml_enter_blocking_section();
  iVar1 = gethostbyaddr_r(&local_10,4,2,&local_28,local_2738,10000,&local_14,&local_273c);
  caml_leave_blocking_section();
  if (iVar1 == 0) {
    if (local_14 != (hostent *)0x0) goto LAB_0805d767;
  }
  else {
    local_14 = (hostent *)0x0;
  }
  caml_raise_not_found();
LAB_0805d767:
  alloc_host_entry();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_gethostname(void)

{
  char local_4c [63];
  undefined local_d;
  
  gethostname(local_4c,0x40);
  local_d = 0;
  caml_copy_string(local_4c);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_getlogin(void)

{
  char *pcVar1;
  
  pcVar1 = getlogin();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)unix_error(2,"getlogin",0);
  }
  caml_copy_string(pcVar1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 * unix_getnameinfo(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint __flags;
  int iVar2;
  undefined4 *puVar3;
  char local_14bc [1024];
  char local_10bc [4096];
  socklen_t local_bc;
  sockaddr local_b8 [7];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [4];
  
  uVar1 = caml_local_roots;
  local_48 = caml_local_roots;
  local_20[0] = 0;
  local_24 = 0;
  local_28 = 0;
  caml_local_roots = &local_48;
  local_40 = 1;
  local_44 = 3;
  local_3c = local_20;
  local_38 = &local_24;
  local_34 = &local_28;
  get_sockaddr(param_1,local_b8,&local_bc);
  __flags = caml_convert_flag_list(param_2,getnameinfo_flag_table);
  caml_enter_blocking_section();
  iVar2 = getnameinfo(local_b8,local_bc,local_10bc,0x1000,local_14bc,0x400,__flags);
  caml_leave_blocking_section();
  if (iVar2 != 0) {
    caml_raise_not_found();
  }
  local_20[0] = caml_copy_string(local_10bc);
  local_24 = caml_copy_string(local_14bc);
  puVar3 = (undefined4 *)caml_alloc_small(2,0);
  *puVar3 = local_20[0];
  puVar3[1] = local_24;
  caml_local_roots = (undefined4 *)uVar1;
  return puVar3;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_getpeername(int param_1)

{
  int iVar1;
  socklen_t local_80;
  sockaddr local_7c [7];
  
  local_80 = 0x70;
  iVar1 = getpeername(param_1 >> 1,local_7c,&local_80);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("getpeername",0);
  }
  alloc_sockaddr(local_7c,local_80,0xffffffff);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = getpid();
  return _Var1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_getppid(void)

{
  __pid_t _Var1;
  
  _Var1 = getppid();
  return _Var1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void __regparm3 alloc_proto_entry(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_24;
  undefined4 local_20 [4];
  
  local_20[0] = 1;
  local_24 = 1;
  local_44 = caml_local_roots;
  caml_local_roots = &local_44;
  local_3c = 1;
  local_40 = 2;
  local_38 = local_20;
  local_34 = &local_24;
  local_20[0] = caml_copy_string(*param_1);
  local_24 = caml_copy_string_array(param_1[1]);
  puVar1 = (undefined4 *)caml_alloc_small(3,0);
  *puVar1 = local_20[0];
  puVar1[1] = local_24;
  puVar1[2] = param_1[2] * 2 + 1;
  caml_local_roots = (undefined4 *)local_44;
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_getprotobynumber(int param_1)

{
  protoent *ppVar1;
  
  ppVar1 = getprotobynumber(param_1 >> 1);
  if (ppVar1 == (protoent *)0x0) {
    caml_raise_not_found();
  }
  alloc_proto_entry();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_getprotobyname(char *param_1)

{
  protoent *ppVar1;
  
  ppVar1 = getprotobyname(param_1);
  if (ppVar1 == (protoent *)0x0) {
    caml_raise_not_found();
  }
  alloc_proto_entry();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void __regparm3 alloc_passwd_entry(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [4];
  
  local_20[0] = 1;
  local_24 = 1;
  local_28 = 1;
  local_2c = 1;
  local_30 = 1;
  local_50 = caml_local_roots;
  caml_local_roots = &local_50;
  local_48 = 1;
  local_4c = 5;
  local_44 = local_20;
  local_40 = &local_24;
  local_3c = &local_28;
  local_38 = &local_2c;
  local_34 = &local_30;
  local_20[0] = caml_copy_string(*param_1);
  local_24 = caml_copy_string(param_1[1]);
  local_28 = caml_copy_string(param_1[4]);
  local_2c = caml_copy_string(param_1[5]);
  local_30 = caml_copy_string(param_1[6]);
  puVar1 = (undefined4 *)caml_alloc_small(7,0);
  *puVar1 = local_20[0];
  puVar1[1] = local_24;
  puVar1[2] = param_1[2] * 2 + 1;
  puVar1[3] = param_1[3] * 2 + 1;
  puVar1[4] = local_28;
  puVar1[5] = local_2c;
  puVar1[6] = local_30;
  caml_local_roots = (undefined4 *)local_50;
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_getpwuid(int param_1)

{
  passwd *ppVar1;
  
  ppVar1 = getpwuid(param_1 >> 1);
  if (ppVar1 == (passwd *)0x0) {
    caml_raise_not_found();
  }
  alloc_passwd_entry();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_getpwnam(char *param_1)

{
  passwd *ppVar1;
  
  ppVar1 = getpwnam(param_1);
  if (ppVar1 == (passwd *)0x0) {
    caml_raise_not_found();
  }
  alloc_passwd_entry();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_gettimeofday(void)

{
  int iVar1;
  timeval local_14;
  
  iVar1 = gettimeofday(&local_14,(__timezone_ptr_t)0x0);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("gettimeofday",0);
  }
  caml_copy_double((double)((float)local_14.tv_usec / 1000000.0 + (float)local_14.tv_sec));
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void __regparm3 alloc_service_entry(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [4];
  
  local_20[0] = 1;
  local_24 = 1;
  local_28 = 1;
  local_48 = caml_local_roots;
  caml_local_roots = &local_48;
  local_40 = 1;
  local_44 = 3;
  local_3c = local_20;
  local_38 = &local_24;
  local_34 = &local_28;
  local_20[0] = caml_copy_string(*param_1);
  local_24 = caml_copy_string_array(param_1[1]);
  local_28 = caml_copy_string(param_1[3]);
  puVar1 = (undefined4 *)caml_alloc_small(4,0);
  *puVar1 = local_20[0];
  puVar1[1] = local_24;
  puVar1[2] = (uint)(ushort)((ushort)param_1[2] >> 8 | (ushort)param_1[2] << 8) * 2 + 1;
  puVar1[3] = local_28;
  caml_local_roots = (undefined4 *)local_48;
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_getservbyport(int param_1,char *param_2)

{
  ushort uVar1;
  servent *psVar2;
  
  uVar1 = (ushort)(param_1 >> 1);
  psVar2 = getservbyport((uint)(ushort)(uVar1 >> 8 | uVar1 << 8),param_2);
  if (psVar2 == (servent *)0x0) {
    caml_raise_not_found();
  }
  alloc_service_entry();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_getservbyname(char *param_1,char *param_2)

{
  servent *psVar1;
  
  psVar1 = getservbyname(param_1,param_2);
  if (psVar1 == (servent *)0x0) {
    caml_raise_not_found();
  }
  alloc_service_entry();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_getsockname(int param_1)

{
  int iVar1;
  socklen_t local_80;
  sockaddr local_7c [7];
  
  local_80 = 0x70;
  iVar1 = getsockname(param_1 >> 1,local_7c,&local_80);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("getsockname",0);
  }
  alloc_sockaddr(local_7c,local_80,0xffffffff);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = getuid();
  return _Var1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void __regparm3 alloc_tm(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)caml_alloc_small(9,0);
  *piVar1 = *param_1 * 2 + 1;
  piVar1[1] = param_1[1] * 2 + 1;
  piVar1[2] = param_1[2] * 2 + 1;
  piVar1[3] = param_1[3] * 2 + 1;
  piVar1[4] = param_1[4] * 2 + 1;
  piVar1[5] = param_1[5] * 2 + 1;
  piVar1[6] = param_1[6] * 2 + 1;
  piVar1[7] = param_1[7] * 2 + 1;
  piVar1[8] = (-(uint)(param_1[8] == 0) & 0xfffffffe) + 3;
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_mktime(int *param_1)

{
  time_t tVar1;
  undefined4 *puVar2;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 local_40;
  undefined4 local_3c;
  tm local_38;
  
  local_3c = 1;
  local_40 = 1;
  local_60 = caml_local_roots;
  caml_local_roots = &local_60;
  local_58 = 1;
  local_5c = 2;
  local_54 = &local_3c;
  local_50 = &local_40;
  local_38.tm_sec = *param_1 >> 1;
  local_38.tm_min = param_1[1] >> 1;
  local_38.tm_hour = param_1[2] >> 1;
  local_38.tm_mday = param_1[3] >> 1;
  local_38.tm_mon = param_1[4] >> 1;
  local_38.tm_year = param_1[5] >> 1;
  local_38.tm_wday = param_1[6] >> 1;
  local_38.tm_yday = param_1[7] >> 1;
  local_38.tm_isdst = -1;
  tVar1 = mktime(&local_38);
  if (tVar1 == -1) {
    unix_error(0x22,"mktime",0);
  }
  local_3c = alloc_tm();
  local_40 = caml_copy_double((double)tVar1);
  puVar2 = (undefined4 *)caml_alloc_small(2,0);
  *puVar2 = local_40;
  puVar2[1] = local_3c;
  caml_local_roots = (undefined4 *)local_60;
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_localtime(double *param_1)

{
  tm *ptVar1;
  int local_10 [2];
  
  local_10[0] = (int)ROUND(*param_1);
  ptVar1 = localtime(local_10);
  if (ptVar1 == (tm *)0x0) {
    unix_error(0x16,"localtime",0);
  }
  alloc_tm();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_gmtime(double *param_1)

{
  tm *ptVar1;
  int local_10 [2];
  
  local_10[0] = (int)ROUND(*param_1);
  ptVar1 = gmtime(local_10);
  if (ptVar1 == (tm *)0x0) {
    unix_error(0x16,"gmtime",0);
  }
  alloc_tm();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_initgroups(char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = initgroups(param_1,param_2 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("initgroups",0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_isatty(int param_1)

{
  int iVar1;
  
  iVar1 = isatty(param_1 >> 1);
  return (-(uint)(iVar1 == 0) & 0xfffffffe) + 3;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void __regparm3 unix_convert_itimer(int *param_1)

{
  double *pdVar1;
  
  pdVar1 = (double *)caml_alloc_small(4,0xfe);
  *pdVar1 = (double)((float)param_1[1] / 1000000.0 + (float)*param_1);
  pdVar1[1] = (double)((float)param_1[2] + 1000000.0 / (float)param_1[3]);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_getitimer(int param_1)

{
  int iVar1;
  itimerval local_1c;
  
  iVar1 = getitimer(*(__itimer_which_t *)(itimers + (param_1 >> 1) * 4),&local_1c);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("getitimer",0);
  }
  unix_convert_itimer();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void __regparm1 unix_set_timeval(int *param_1_00,double param_1)

{
  double dVar1;
  double local_24 [2];
  
  dVar1 = modf(param_1,local_24);
  *param_1_00 = (int)ROUND(local_24[0]);
  dVar1 = ceil(dVar1 * 1000000.0);
  param_1_00[1] = (int)ROUND(dVar1);
  if (999999 < (int)ROUND(dVar1)) {
    *param_1_00 = (int)ROUND(local_24[0]) + 1;
    param_1_00[1] = 0;
  }
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_setitimer(int param_1,undefined8 *param_2)

{
  int iVar1;
  itimerval local_3c;
  itimerval local_2c;
  
  unix_set_timeval(*param_2);
  unix_set_timeval(param_2[1]);
  iVar1 = setitimer(*(__itimer_which_t *)(itimers + (param_1 >> 1) * 4),&local_2c,&local_3c);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("setitimer",0);
  }
  unix_convert_itimer();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_kill(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = caml_convert_signal_number(param_2 >> 1);
  iVar1 = kill(param_1 >> 1,iVar1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&DAT_0807093c,0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_link(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = link(param_1,param_2);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("link",param_2);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_listen(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = listen(param_1 >> 1,param_2 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("listen",0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_lockf(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  short local_24;
  undefined2 local_22;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  param_1 = param_1 >> 1;
  local_22 = 1;
  local_18 = param_3 >> 1;
  local_14 = param_3 >> 0x1f;
  if (local_18 < 0) {
    iVar1 = -local_18;
    local_20 = local_18;
    local_1c = local_14;
    local_18 = iVar1;
    local_14 = iVar1 >> 0x1f;
  }
  else {
    local_20 = 0;
    local_1c = 0;
  }
  switch(param_2 >> 1) {
  case 0:
    local_24 = 2;
    iVar1 = fcntl(param_1,0xd,&local_24);
    break;
  case 1:
    local_24 = 1;
    caml_enter_blocking_section();
    iVar1 = fcntl(param_1,0xe,&local_24);
    caml_leave_blocking_section();
    break;
  case 2:
    local_24 = 1;
    iVar1 = fcntl(param_1,0xd,&local_24);
    break;
  case 3:
    local_24 = 1;
    iVar1 = fcntl(param_1,0xc,&local_24);
    if (iVar1 != -1) {
      if (local_24 == 2) {
        return 1;
      }
      piVar2 = __errno_location();
      *piVar2 = 0xd;
    }
    goto LAB_0805e616;
  case 4:
    local_24 = 0;
    caml_enter_blocking_section();
    iVar1 = fcntl(param_1,0xe,&local_24);
    caml_leave_blocking_section();
    break;
  case 5:
    local_24 = 0;
    iVar1 = fcntl(param_1,0xd,&local_24);
    break;
  default:
    piVar2 = __errno_location();
    *piVar2 = 0x16;
    goto LAB_0805e616;
  }
  if (iVar1 != -1) {
    return 1;
  }
LAB_0805e616:
                    // WARNING: Subroutine does not return
  uerror("lockf",0);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_lseek_64(int param_1,int param_2,int param_3)

{
  __off64_t _Var1;
  
  _Var1 = *(__off64_t *)(param_2 + 4);
  caml_enter_blocking_section();
  _Var1 = lseek64(param_1 >> 1,_Var1,*(int *)(seek_command_table + (param_3 >> 1) * 4));
  caml_leave_blocking_section();
  if (_Var1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("lseek",0);
  }
  caml_copy_int64((int)_Var1,(int)((ulonglong)_Var1 >> 0x20));
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_lseek(int param_1,int param_2,int param_3)

{
  __off64_t _Var1;
  
  caml_enter_blocking_section();
  _Var1 = lseek64(param_1 >> 1,CONCAT44(param_2 >> 0x1f,param_2 >> 1),
                  *(int *)(seek_command_table + (param_3 >> 1) * 4));
  caml_leave_blocking_section();
  if (_Var1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("lseek",0);
  }
  if ((-1 < _Var1) &&
     (((int)((ulonglong)_Var1 >> 0x20) != 0 && -1 < _Var1 || (0x3fffffff < (uint)_Var1)))) {
    unix_error(0x4b,"lseek",0);
  }
  return (uint)_Var1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_mkdir(char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = mkdir(param_1,param_2 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("mkdir",param_1);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_mkfifo(char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = mkfifo(param_1,param_2 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("mkfifo",param_1);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_nice(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = __errno_location();
  *piVar1 = 0;
  iVar2 = nice(param_1 >> 1);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
                    // WARNING: Subroutine does not return
    uerror(&DAT_0807096d,0);
  }
  return iVar2 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_open(char *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *__dest;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  
  uVar1 = caml_local_roots;
  local_3c = caml_local_roots;
  caml_local_roots = &local_3c;
  local_34 = 1;
  local_38 = 3;
  local_30 = &param_1;
  local_2c = &param_2;
  local_28 = &param_3;
  iVar2 = caml_convert_flag_list(param_2,open_flag_table);
  iVar3 = caml_string_length(param_1);
  __dest = (char *)caml_stat_alloc(iVar3 + 1);
  strcpy(__dest,param_1);
  caml_enter_blocking_section();
  iVar2 = open64(__dest,iVar2,param_3 >> 1);
  caml_leave_blocking_section();
  caml_stat_free(__dest);
  if (iVar2 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&DAT_08070972,param_1);
  }
  caml_local_roots = (undefined4 *)uVar1;
  return iVar2 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_opendir(char *param_1)

{
  DIR *pDVar1;
  DIR **ppDVar2;
  
  pDVar1 = opendir(param_1);
  if (pDVar1 == (DIR *)0x0) {
                    // WARNING: Subroutine does not return
    uerror("opendir",param_1);
  }
  ppDVar2 = (DIR **)caml_alloc_small(1,0xfb);
  *ppDVar2 = pDVar1;
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_pipe(void)

{
  int iVar1;
  int *piVar2;
  int local_14;
  int local_10;
  
  iVar1 = pipe(&local_14);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&DAT_0807097f,0);
  }
  piVar2 = (int *)caml_alloc_small(2,0);
  *piVar2 = local_14 * 2 + 1;
  piVar2[1] = local_10 * 2 + 1;
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_putenv(void *param_1,void *param_2)

{
  size_t __n;
  size_t __n_00;
  char *__string;
  int iVar1;
  
  __n = caml_string_length(param_1);
  __n_00 = caml_string_length(param_2);
  __string = (char *)caml_stat_alloc(__n_00 + __n + 2);
  memmove(__string,param_1,__n);
  __string[__n] = '=';
  memmove(__string + __n + 1,param_2,__n_00);
  __string[__n_00 + __n + 1] = '\0';
  iVar1 = putenv(__string);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("putenv",param_1);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_read(int param_1,int param_2,int param_3,int param_4)

{
  size_t sVar1;
  undefined4 local_402c;
  undefined4 local_4028;
  undefined4 local_4024;
  undefined4 *local_4020;
  undefined local_400c [16384];
  
  local_402c = caml_local_roots;
  caml_local_roots = &local_402c;
  local_4024 = 1;
  local_4028 = 1;
  local_4020 = &param_2;
  sVar1 = param_4 >> 1;
  caml_enter_blocking_section();
  if (0x4000 < (int)sVar1) {
    sVar1 = 0x4000;
  }
  sVar1 = read(param_1 >> 1,local_400c,sVar1);
  caml_leave_blocking_section();
  if (sVar1 == 0xffffffff) {
                    // WARNING: Subroutine does not return
    uerror(&DAT_0807098b,0);
  }
  memmove((void *)((param_3 >> 1) + param_2),local_400c,sVar1);
  caml_local_roots = (undefined4 *)local_402c;
  return sVar1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_readdir(DIR **param_1)

{
  DIR *__dirp;
  dirent64 *pdVar1;
  
  __dirp = *param_1;
  if (__dirp == (DIR *)0x0) {
    __dirp = (DIR *)unix_error(9,"readdir",0);
  }
  pdVar1 = readdir64(__dirp);
  if (pdVar1 == (dirent64 *)0x0) {
    pdVar1 = (dirent64 *)caml_raise_end_of_file();
  }
  caml_copy_string(pdVar1->d_name);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_readlink(char *param_1)

{
  ssize_t sVar1;
  char local_100c [4096];
  
  sVar1 = readlink(param_1,local_100c,0xfff);
  if (sVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("readlink",param_1);
  }
  local_100c[sVar1] = '\0';
  caml_copy_string(local_100c);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_rename(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = rename(param_1,param_2);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("rename",param_1);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_rewinddir(DIR **param_1)

{
  DIR *__dirp;
  
  __dirp = *param_1;
  if (__dirp == (DIR *)0x0) {
    __dirp = (DIR *)unix_error(9,"rewinddir",0);
  }
  rewinddir(__dirp);
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_rmdir(char *param_1)

{
  int iVar1;
  
  iVar1 = rmdir(param_1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("rmdir",param_1);
  }
  return 1;
}



void __regparm2 fdlist_to_fdset(int *param_1_00,undefined4 *param_2,int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = param_2;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (param_1_00 != (int *)0x1) {
    do {
      iVar2 = *param_1_00 >> 1;
      iVar3 = iVar2 + 0x1f;
      if (-1 < iVar2) {
        iVar3 = iVar2;
      }
      bVar1 = (byte)(*param_1_00 >> 0x1f);
      param_2[iVar3 >> 5] =
           param_2[iVar3 >> 5] | 1 << (((char)iVar2 + (bVar1 >> 3) & 0x1f) - (bVar1 >> 3) & 0x1f);
      if (*param_1 < iVar2) {
        *param_1 = iVar2;
      }
      param_1_00 = (int *)param_1_00[1];
    } while (param_1_00 != (int *)0x1);
  }
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int * __regparm3 fdset_to_fdlist(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int **local_38;
  int **local_34;
  int *local_24;
  int *local_20 [4];
  
  local_24 = (int *)0x1;
  local_44 = caml_local_roots;
  caml_local_roots = &local_44;
  local_3c = 1;
  local_40 = 2;
  local_38 = local_20;
  local_34 = &local_24;
  local_20[0] = param_1;
  if (param_1 != (int *)0x1) {
    do {
      iVar4 = *local_20[0] >> 1;
      iVar3 = iVar4 + 0x1f;
      if (-1 < iVar4) {
        iVar3 = iVar4;
      }
      uVar1 = (uint)(*local_20[0] >> 0x1f) >> 0x1b;
      if ((*(uint *)(param_2 + (iVar3 >> 5) * 4) >> ((iVar4 + uVar1 & 0x1f) - uVar1 & 0x1f) & 1) !=
          0) {
        piVar2 = (int *)caml_alloc_small(2,0);
        *piVar2 = iVar4 * 2 + 1;
        piVar2[1] = (int)local_24;
        local_24 = piVar2;
      }
      local_20[0] = (int *)local_20[0][1];
    } while (local_20[0] != (int *)0x1);
  }
  caml_local_roots = (undefined4 *)local_44;
  return local_24;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_select(undefined4 param_1,undefined4 param_2,undefined4 param_3,double *param_4)

{
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  timeval *__timeout;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 *local_1ac;
  undefined4 *local_1a8;
  undefined4 *local_1a4;
  timeval local_198;
  int local_190;
  fd_set local_18c;
  fd_set local_10c;
  fd_set local_8c;
  
  local_1b8 = caml_local_roots;
  caml_local_roots = &local_1b8;
  local_1b0 = 1;
  local_1b4 = 3;
  local_1ac = &param_1;
  local_1a8 = &param_2;
  local_1a4 = &param_3;
  local_190 = -1;
  fdlist_to_fdset(&local_190);
  fdlist_to_fdset(&local_190);
  fdlist_to_fdset(&local_190);
  dVar1 = *param_4;
  __timeout = (timeval *)0x0;
  if (0.0 <= dVar1) {
    local_198.tv_sec = (__time_t)ROUND(dVar1);
    local_198.tv_usec = (__suseconds_t)ROUND((dVar1 - (double)local_198.tv_sec) * 1000000.0);
    __timeout = &local_198;
  }
  caml_enter_blocking_section();
  iVar2 = select(local_190 + 1,&local_8c,&local_10c,&local_18c,__timeout);
  caml_leave_blocking_section();
  if (iVar2 != -1) {
    param_1 = fdset_to_fdlist();
    param_2 = fdset_to_fdlist();
    param_3 = fdset_to_fdlist();
    puVar3 = (undefined4 *)caml_alloc_small(3,0);
    *puVar3 = param_1;
    puVar3[1] = param_2;
    puVar3[2] = param_3;
    caml_local_roots = (undefined4 *)local_1b8;
    return;
  }
                    // WARNING: Subroutine does not return
  uerror("select",0);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_sendto_native(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                      undefined4 param_6)

{
  int __flags;
  ssize_t sVar1;
  size_t __n;
  socklen_t local_4090;
  sockaddr local_408c [7];
  undefined local_401c [16396];
  
  __flags = caml_convert_flag_list(param_5,msg_flag_table);
  get_sockaddr(param_6,local_408c,&local_4090);
  __n = param_4 >> 1;
  if (0x4000 < (int)__n) {
    __n = 0x4000;
  }
  memmove(local_401c,(void *)((param_3 >> 1) + param_2),__n);
  caml_enter_blocking_section();
  sVar1 = sendto(param_1 >> 1,local_401c,__n,__flags,local_408c,local_4090);
  caml_leave_blocking_section();
  if (sVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("sendto",0);
  }
  return sVar1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_sendto(undefined4 *param_1)

{
  unix_sendto_native(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_send(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int __flags;
  ssize_t sVar1;
  size_t __n;
  undefined local_401c [16396];
  
  __flags = caml_convert_flag_list(param_5,msg_flag_table);
  __n = param_4 >> 1;
  if (0x4000 < (int)__n) {
    __n = 0x4000;
  }
  memmove(local_401c,(void *)((param_3 >> 1) + param_2),__n);
  caml_enter_blocking_section();
  sVar1 = send(param_1 >> 1,local_401c,__n,__flags);
  caml_leave_blocking_section();
  if (sVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&DAT_080709c6,0);
  }
  return sVar1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_recvfrom(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int __flags;
  int *piVar1;
  size_t sVar2;
  undefined4 local_40b4;
  undefined4 local_40b0;
  undefined4 local_40ac;
  undefined4 *local_40a8;
  int *local_40a4;
  socklen_t local_4094;
  sockaddr local_4090 [7];
  int local_4020;
  undefined local_401c [16396];
  
  local_4020 = 1;
  __flags = caml_convert_flag_list(param_5,msg_flag_table);
  local_40b4 = caml_local_roots;
  caml_local_roots = &local_40b4;
  local_40ac = 1;
  local_40b0 = 2;
  local_40a8 = &param_2;
  local_40a4 = &local_4020;
  sVar2 = param_4 >> 1;
  local_4094 = 0x70;
  caml_enter_blocking_section();
  if (0x4000 < (int)sVar2) {
    sVar2 = 0x4000;
  }
  sVar2 = recvfrom(param_1 >> 1,local_401c,sVar2,__flags,local_4090,&local_4094);
  caml_leave_blocking_section();
  if (sVar2 == 0xffffffff) {
                    // WARNING: Subroutine does not return
    uerror("recvfrom",0);
  }
  memmove((void *)((param_3 >> 1) + param_2),local_401c,sVar2);
  local_4020 = alloc_sockaddr(local_4090,local_4094,0xffffffff);
  piVar1 = (int *)caml_alloc_small(2,0);
  *piVar1 = sVar2 * 2 + 1;
  piVar1[1] = local_4020;
  caml_local_roots = (undefined4 *)local_40b4;
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_recv(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int __flags;
  size_t sVar1;
  undefined4 local_403c;
  undefined4 local_4038;
  undefined4 local_4034;
  undefined4 *local_4030;
  undefined local_401c [16396];
  
  __flags = caml_convert_flag_list(param_5,msg_flag_table);
  local_403c = caml_local_roots;
  caml_local_roots = &local_403c;
  local_4034 = 1;
  local_4038 = 1;
  local_4030 = &param_2;
  sVar1 = param_4 >> 1;
  caml_enter_blocking_section();
  if (0x4000 < (int)sVar1) {
    sVar1 = 0x4000;
  }
  sVar1 = recv(param_1 >> 1,local_401c,sVar1,__flags);
  caml_leave_blocking_section();
  if (sVar1 == 0xffffffff) {
                    // WARNING: Subroutine does not return
    uerror(&DAT_080709d4,0);
  }
  memmove((void *)((param_3 >> 1) + param_2),local_401c,sVar1);
  caml_local_roots = (undefined4 *)local_403c;
  return sVar1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_setgid(int param_1)

{
  int iVar1;
  
  iVar1 = setgid(param_1 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("setgid",0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_setgroups(int param_1)

{
  __gid_t *__groups;
  int iVar1;
  uint uVar2;
  uint __n;
  
  __n = *(uint *)(param_1 + -4) >> 10;
  __groups = (__gid_t *)caml_stat_alloc(__n * 4);
  if (__n != 0) {
    uVar2 = 0;
    do {
      __groups[uVar2] = *(int *)(param_1 + uVar2 * 4) >> 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < __n);
  }
  iVar1 = setgroups(__n,__groups);
  caml_stat_free(__groups);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("setgroups",0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_setsid(void)

{
  __pid_t _Var1;
  
  _Var1 = setsid();
  return _Var1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_setuid(int param_1)

{
  int iVar1;
  
  iVar1 = setuid(param_1 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("setuid",0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_shutdown(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = shutdown(param_1 >> 1,*(int *)(shutdown_command_table + (param_2 >> 1) * 4));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("shutdown",0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void __regparm3 decode_sigset(int *param_1,sigset_t *param_2)

{
  int __signo;
  
  sigemptyset(param_2);
  if (param_1 != (int *)0x1) {
    do {
      __signo = caml_convert_signal_number(*param_1 >> 1);
      sigaddset(param_2,__signo);
      param_1 = (int *)param_1[1];
    } while (param_1 != (int *)0x1);
  }
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_sigsuspend(void)

{
  int iVar1;
  int *piVar2;
  sigset_t local_8c;
  
  decode_sigset();
  caml_enter_blocking_section();
  iVar1 = sigsuspend(&local_8c);
  caml_leave_blocking_section();
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    if (*piVar2 != 4) {
                    // WARNING: Subroutine does not return
      uerror("sigsuspend",0);
    }
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int * __regparm3 encode_sigset(sigset_t *param_1)

{
  int iVar1;
  int *piVar2;
  int __signo;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int **local_34;
  int *local_20 [4];
  
  local_20[0] = (int *)0x1;
  local_40 = caml_local_roots;
  caml_local_roots = &local_40;
  local_38 = 1;
  local_3c = 1;
  local_34 = local_20;
  __signo = 1;
  do {
    iVar1 = sigismember(param_1,__signo);
    if (0 < iVar1) {
      piVar2 = (int *)caml_alloc_small(2,0);
      iVar1 = caml_rev_convert_signal_number(__signo);
      *piVar2 = iVar1 * 2 + 1;
      piVar2[1] = (int)local_20[0];
      local_20[0] = piVar2;
    }
    __signo = __signo + 1;
  } while (__signo != 0x41);
  caml_local_roots = (undefined4 *)local_40;
  return local_20[0];
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_sigpending(void)

{
  int iVar1;
  sigset_t local_8c;
  
  iVar1 = sigpending(&local_8c);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("sigpending",0);
  }
  encode_sigset();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_sigprocmask(int param_1)

{
  int iVar1;
  sigset_t local_11c;
  sigset_t local_9c;
  
  iVar1 = *(int *)(sigprocmask_cmd + (param_1 >> 1) * 4);
  decode_sigset();
  caml_enter_blocking_section();
  iVar1 = sigprocmask(iVar1,&local_9c,&local_11c);
  caml_leave_blocking_section();
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("sigprocmask",0);
  }
  encode_sigset();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_sleep(int param_1)

{
  caml_enter_blocking_section();
  sleep(param_1 >> 1);
  caml_leave_blocking_section();
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_socket(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = socket(*(int *)(socket_domain_table + (param_1 >> 1) * 4),
                 *(int *)(socket_type_table + (param_2 >> 1) * 4),param_3 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("socket",0);
  }
  return iVar1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void get_sockaddr(void **param_1,undefined4 *param_2,int *param_3)

{
  void *__src;
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + -1) == '\0') {
    __src = *param_1;
    uVar3 = caml_string_length(__src);
    *(undefined2 *)param_2 = 1;
    uVar5 = uVar3;
    if (0x6b < uVar3) {
      uVar5 = unix_error(0x24,"",__src);
    }
    memmove((void *)((int)param_2 + 2),__src,uVar5 + 1);
    *param_3 = uVar3 + 2;
  }
  else if (*(char *)(param_1 + -1) == '\x01') {
    iVar4 = caml_string_length(*param_1);
    if (iVar4 == 0x10) {
      uVar5 = 0;
      do {
        *(undefined4 *)((int)param_2 + uVar5) = 0;
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x1c);
      *(undefined2 *)param_2 = 10;
      puVar1 = (undefined4 *)*param_1;
      param_2[2] = *puVar1;
      param_2[3] = puVar1[1];
      param_2[4] = puVar1[2];
      param_2[5] = puVar1[3];
      uVar2 = (ushort)((int)param_1[1] >> 1);
      *(ushort *)((int)param_2 + 2) = uVar2 >> 8 | uVar2 << 8;
      *param_3 = 0x1c;
    }
    else {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      *(undefined2 *)param_2 = 2;
                    // WARNING: Load size is inaccurate
      param_2[1] = **param_1;
      uVar2 = (ushort)((int)param_1[1] >> 1);
      *(ushort *)((int)param_2 + 2) = uVar2 >> 8 | uVar2 << 8;
      *param_3 = 0x10;
    }
  }
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void alloc_inet6_addr(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)caml_alloc_string(0x10);
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[3] = param_1[3];
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void alloc_inet_addr(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)caml_alloc_string(4);
  *puVar1 = *param_1;
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void alloc_sockaddr(short *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_20 [4];
  
  sVar1 = *param_1;
  if (sVar1 == 2) {
    local_20[0] = alloc_inet_addr(param_1 + 2);
    local_40 = caml_local_roots;
    caml_local_roots = &local_40;
    local_38 = 1;
    local_3c = 1;
    local_34 = local_20;
    puVar2 = (undefined4 *)caml_alloc_small(2,1);
    *puVar2 = local_20[0];
    puVar2[1] = (uint)(ushort)((ushort)param_1[1] >> 8 | param_1[1] << 8) * 2 + 1;
    caml_local_roots = (undefined4 *)local_40;
  }
  else if (sVar1 == 10) {
    local_20[0] = alloc_inet6_addr(param_1 + 4);
    local_40 = caml_local_roots;
    caml_local_roots = &local_40;
    local_38 = 1;
    local_3c = 1;
    local_34 = local_20;
    puVar2 = (undefined4 *)caml_alloc_small(2,1);
    *puVar2 = local_20[0];
    puVar2[1] = (uint)(ushort)((ushort)param_1[1] >> 8 | param_1[1] << 8) * 2 + 1;
    caml_local_roots = (undefined4 *)local_40;
  }
  else if (sVar1 == 1) {
    local_20[0] = caml_copy_string(param_1 + 1);
    local_40 = caml_local_roots;
    caml_local_roots = &local_40;
    local_38 = 1;
    local_3c = 1;
    local_34 = local_20;
    puVar2 = (undefined4 *)caml_alloc_small(1,0);
    *puVar2 = local_20[0];
    caml_local_roots = (undefined4 *)local_40;
  }
  else {
    if (param_3 != -1) {
      close(param_3);
    }
    unix_error(0x61,"",0);
  }
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_socketpair(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int local_14;
  int local_10;
  
  iVar1 = socketpair(*(int *)(socket_domain_table + (param_1 >> 1) * 4),
                     *(int *)(socket_type_table + (param_2 >> 1) * 4),param_3 >> 1,&local_14);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("socketpair",0);
  }
  piVar2 = (int *)caml_alloc_small(2,0);
  *piVar2 = local_14 * 2 + 1;
  piVar2[1] = local_10 * 2 + 1;
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4
unix_setsockopt_aux(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,
                   double *param_6)

{
  socklen_t __optlen;
  int iVar1;
  uint local_14;
  int local_10;
  
  if (param_2 == 2) {
    local_14 = ((uint)param_6 ^ 1) & 1;
    __optlen = 8;
    if (local_14 != 0) {
      local_10 = *(int *)param_6 >> 1;
      __optlen = 8;
    }
  }
  else if (param_2 < 2) {
    local_14 = (int)param_6 >> 1;
    __optlen = 4;
  }
  else if (param_2 == 3) {
    local_14 = (uint)ROUND(*param_6);
    local_10 = (int)ROUND((*param_6 - (double)local_14) * 1000000.0);
    __optlen = 8;
  }
  else {
    __optlen = unix_error(0x16,param_1,0);
  }
  iVar1 = setsockopt(param_5 >> 1,param_3,param_4,&local_14,__optlen);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(param_1,0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_setsockopt(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  param_1 = param_1 >> 1;
  puVar1 = (undefined4 *)((param_3 >> 1) * 8 + *(int *)(sockopt_table + param_1 * 4));
  unix_setsockopt_aux(*(undefined4 *)(setsockopt_fun_name + param_1 * 4),param_1,*puVar1,puVar1[1],
                      param_2,param_4);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int * unix_getsockopt_aux(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  int local_2c;
  socklen_t local_28;
  int local_24;
  int local_20;
  
  switch(param_2) {
  case 0:
  case 1:
  case 4:
    local_28 = 4;
    break;
  case 2:
    local_28 = 8;
    break;
  case 3:
    local_28 = 8;
    break;
  default:
    unix_error(0x16,param_1,0);
  }
  iVar1 = getsockopt(param_5 >> 1,param_3,param_4,&local_24,&local_28);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(param_1,0);
  }
  switch(param_2) {
  case 0:
  case 1:
    return (int *)(local_24 * 2 + 1);
  case 2:
    if (local_24 != 0) {
      piVar2 = (int *)caml_alloc_small(1,0);
      *piVar2 = local_20 * 2 + 1;
      return piVar2;
    }
    break;
  case 3:
    piVar2 = (int *)caml_copy_double((double)((float)local_20 / 1000000.0 + (float)local_24));
    return piVar2;
  case 4:
    if (local_24 != 0) {
      local_2c = unix_error_of_code(local_24);
      local_4c = caml_local_roots;
      caml_local_roots = &local_4c;
      local_44 = 1;
      local_48 = 1;
      local_40 = &local_2c;
      piVar2 = (int *)caml_alloc_small(1,0);
      *piVar2 = local_2c;
      caml_local_roots = (undefined4 *)local_4c;
      return piVar2;
    }
    break;
  default:
    unix_error(0x16,param_1,0);
  }
  return (int *)0x1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_getsockopt(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  param_1 = param_1 >> 1;
  puVar1 = (undefined4 *)((param_3 >> 1) * 8 + *(int *)(sockopt_table + param_1 * 4));
  unix_getsockopt_aux(*(undefined4 *)(getsockopt_fun_name + param_1 * 4),param_1,*puVar1,puVar1[1],
                      param_2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int * __regparm3 stat_aux(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int **local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20 [4];
  
  uVar1 = caml_local_roots;
  local_50 = caml_local_roots;
  local_20[0] = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  caml_local_roots = &local_50;
  local_48 = 1;
  local_4c = 5;
  local_44 = local_20;
  local_40 = &local_24;
  local_3c = &local_28;
  local_38 = &local_2c;
  local_34 = &local_30;
  local_20[0] = caml_copy_double((double)param_2[0x10]);
  local_24 = caml_copy_double((double)param_2[0x12]);
  local_28 = caml_copy_double((double)param_2[0x14]);
  if (param_1 == 0) {
    local_2c = param_2[0xb] * 2 + 1;
  }
  else {
    local_2c = caml_copy_int64(param_2[0xb],param_2[0xc]);
  }
  local_30 = (int *)caml_alloc_small(0xc,0);
  *local_30 = *param_2 * 2 + 1;
  local_30[1] = param_2[0x16] * 2 + 1;
  piVar2 = local_30 + 2;
  iVar3 = cst_to_constr(param_2[4] & 0xf000,file_kind_table,7,0);
  *piVar2 = iVar3;
  local_30[3] = (param_2[4] & 0xfffU) * 2 + 1;
  local_30[4] = param_2[5] * 2 + 1;
  local_30[5] = param_2[6] * 2 + 1;
  local_30[6] = param_2[7] * 2 + 1;
  local_30[7] = param_2[8] * 2 + 1;
  local_30[8] = local_2c;
  local_30[9] = local_20[0];
  local_30[10] = local_24;
  local_30[0xb] = local_28;
  caml_local_roots = (undefined4 *)uVar1;
  return local_30;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_fstat_64(int param_1)

{
  int iVar1;
  stat64 local_6c;
  
  iVar1 = __fxstat64(3,param_1 >> 1,&local_6c);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("fstat",0);
  }
  stat_aux();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_lstat_64(char *param_1)

{
  int iVar1;
  stat64 local_6c;
  
  iVar1 = __lxstat64(3,param_1,&local_6c);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("lstat",param_1);
  }
  stat_aux();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_stat_64(char *param_1)

{
  int iVar1;
  stat64 local_6c;
  
  iVar1 = __xstat64(3,param_1,&local_6c);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("stat",param_1);
  }
  stat_aux();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_fstat(int param_1)

{
  int iVar1;
  undefined local_6c [48];
  int local_3c;
  
  iVar1 = __fxstat64(3,param_1 >> 1,(stat64 *)local_6c);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("fstat",0);
  }
  if ((-1 < local_3c) &&
     (((0 < local_3c || (0x3fffffff < (uint)local_6c._44_4_)) &&
      ((local_6c._16_4_ & 0xf000) == 0x8000)))) {
    unix_error(0x4b,"fstat",0);
  }
  stat_aux();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_lstat(char *param_1)

{
  int iVar1;
  undefined local_6c [48];
  int local_3c;
  
  iVar1 = __lxstat64(3,param_1,(stat64 *)local_6c);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("lstat",param_1);
  }
  if ((-1 < local_3c) &&
     (((0 < local_3c || (0x3fffffff < (uint)local_6c._44_4_)) &&
      ((local_6c._16_4_ & 0xf000) == 0x8000)))) {
    unix_error(0x4b,"lstat",param_1);
  }
  stat_aux();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_stat(char *param_1)

{
  int iVar1;
  undefined local_6c [48];
  int local_3c;
  
  iVar1 = __xstat64(3,param_1,(stat64 *)local_6c);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("stat",param_1);
  }
  if ((-1 < local_3c) &&
     (((0 < local_3c || (0x3fffffff < (uint)local_6c._44_4_)) &&
      ((local_6c._16_4_ & 0xf000) == 0x8000)))) {
    unix_error(0x4b,"stat",param_1);
  }
  stat_aux();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_string_of_inet_addr(void *param_1)

{
  int iVar1;
  char *pcVar2;
  char local_4c [64];
  
  iVar1 = caml_string_length(param_1);
  if (iVar1 == 0x10) {
    pcVar2 = inet_ntop(10,param_1,local_4c,0x40);
  }
  else {
    pcVar2 = inet_ntop(2,param_1,local_4c,0x40);
  }
  if (pcVar2 == (char *)0x0) {
                    // WARNING: Subroutine does not return
    uerror("string_of_inet_addr",0);
  }
  caml_copy_string(pcVar2);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_symlink(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = symlink(param_1,param_2);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("symlink",param_2);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_tcflow(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = tcflow(param_1 >> 1,*(int *)(action_flag_table + (param_2 >> 1) * 4));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("tcflow",0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_tcflush(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = tcflush(param_1 >> 1,*(int *)(queue_flag_table + (param_2 >> 1) * 4));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("tcflush",0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_tcdrain(int param_1)

{
  int iVar1;
  
  iVar1 = tcdrain(param_1 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("tcdrain",0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_tcsendbreak(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = tcsendbreak(param_1 >> 1,param_2 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("tcsendbreak",0);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_tcsetattr(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint **ppuVar4;
  uint **ppuVar5;
  
  iVar1 = tcgetattr(param_1 >> 1,(termios *)&terminal_status);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("tcsetattr",0);
  }
  if (terminal_io_descr == (uint *)0x4) {
LAB_08060924:
    iVar1 = tcsetattr(param_1 >> 1,*(int *)(when_flag_table + (param_2 >> 1) * 4),
                      (termios *)&terminal_status);
    if (iVar1 != -1) {
      return 1;
    }
                    // WARNING: Subroutine does not return
    uerror("tcsetattr",0);
  }
  puVar2 = terminal_io_descr;
  ppuVar4 = &terminal_io_descr;
  do {
    ppuVar5 = ppuVar4 + 1;
    if (puVar2 == (uint *)0x1) {
      puVar2 = ppuVar4[3];
      iVar1 = ((int)*param_3 >> 1) - (int)ppuVar4[2];
      if ((iVar1 < 0) || ((int)puVar2 <= iVar1)) {
        unix_error(0x16,"tcsetattr",0);
LAB_08060859:
        iVar1 = 1;
        if ((int)*param_3 >> 1 == 0x32) {
          iVar1 = 0;
LAB_0806087f:
          if (*ppuVar5 == (uint *)0x0) {
            iVar3 = cfsetispeed((termios *)&terminal_status,(&speedtable)[iVar1 * 2]);
          }
          else {
            iVar3 = 0;
            if (*ppuVar5 == (uint *)0x1) {
              iVar3 = cfsetospeed((termios *)&terminal_status,(&speedtable)[iVar1 * 2]);
            }
          }
          if (iVar3 == -1) {
                    // WARNING: Subroutine does not return
            uerror("tcsetattr",0);
          }
          ppuVar5 = ppuVar4 + 2;
        }
        else {
          do {
            if ((int)*param_3 >> 1 == (&DAT_08070ba4)[iVar1 * 2]) goto LAB_0806087f;
            iVar1 = iVar1 + 1;
          } while (iVar1 != 0x12);
          unix_error(0x16,"tcsetattr",0);
          ppuVar5 = (uint **)&speedtable;
LAB_08060905:
          puVar2 = *ppuVar5;
          ppuVar5 = ppuVar5 + 1;
          *(char *)((int)puVar2 + 0x807b851) = (char)((int)*param_3 >> 1);
        }
      }
      else {
        **ppuVar5 = ~(uint)ppuVar4[4] & **ppuVar5 | (uint)ppuVar4[iVar1 + 5];
        ppuVar5 = ppuVar4 + (int)puVar2 + 5;
      }
    }
    else if ((int)puVar2 < 2) {
      if (puVar2 == (uint *)0x0) {
        puVar2 = *ppuVar5;
        ppuVar5 = ppuVar4 + 3;
        if (*param_3 >> 1 == 0) {
          *puVar2 = *puVar2 & ~(uint)ppuVar4[2];
        }
        else {
          *puVar2 = *puVar2 | (uint)ppuVar4[2];
        }
      }
    }
    else {
      if (puVar2 == (uint *)0x2) goto LAB_08060859;
      if (puVar2 == (uint *)0x3) goto LAB_08060905;
    }
    puVar2 = *ppuVar5;
    if (puVar2 == (uint *)0x4) goto LAB_08060924;
    param_3 = param_3 + 1;
    ppuVar4 = ppuVar5;
  } while( true );
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int * unix_tcgetattr(int param_1)

{
  int iVar1;
  uint **ppuVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  speed_t sVar6;
  uint **ppuVar7;
  int *piVar8;
  int local_24;
  
  iVar3 = tcgetattr(param_1 >> 1,(termios *)&terminal_status);
  if (iVar3 == -1) {
                    // WARNING: Subroutine does not return
    uerror("tcgetattr",0);
  }
  piVar4 = (int *)caml_alloc_tuple(0x26);
  if (terminal_io_descr == (uint *)0x4) {
    return piVar4;
  }
  ppuVar7 = &terminal_io_descr;
  puVar5 = terminal_io_descr;
  piVar8 = piVar4;
  do {
    ppuVar2 = ppuVar7 + 1;
    if (puVar5 == (uint *)0x1) {
      puVar5 = ppuVar7[3];
      if (0 < (int)puVar5) {
        local_24 = 0;
        if ((uint *)((uint)ppuVar7[4] & **ppuVar2) != ppuVar7[5]) {
          iVar3 = 0;
          do {
            local_24 = iVar3 + 1;
            if ((int)puVar5 <= local_24) goto LAB_08060a91;
            iVar1 = iVar3 + 6;
            iVar3 = local_24;
          } while (ppuVar7[iVar1] != (uint *)((uint)ppuVar7[4] & **ppuVar2));
        }
        *piVar8 = (local_24 + (int)ppuVar7[2]) * 2 + 1;
      }
LAB_08060a91:
      ppuVar2 = ppuVar7 + 5 + (int)puVar5;
    }
    else if ((int)puVar5 < 2) {
      if (puVar5 == (uint *)0x0) {
        *piVar8 = (-(uint)((**ppuVar2 & (uint)ppuVar7[2]) == 0) & 0xfffffffe) + 3;
        ppuVar2 = ppuVar7 + 3;
      }
    }
    else if (puVar5 == (uint *)0x2) {
      puVar5 = *ppuVar2;
      *piVar8 = 0x4b01;
      if (puVar5 == (uint *)0x0) {
        sVar6 = cfgetispeed((termios *)&terminal_status);
      }
      else {
        sVar6 = 0;
        if (puVar5 == (uint *)0x1) {
          sVar6 = cfgetospeed((termios *)&terminal_status);
        }
      }
      iVar3 = 1;
      ppuVar2 = ppuVar7 + 2;
      if (sVar6 == 1) {
        iVar3 = 0;
LAB_08060ae4:
        *piVar8 = (&DAT_08070ba4)[iVar3 * 2] * 2 + 1;
      }
      else {
        do {
          if ((&speedtable)[iVar3 * 2] == sVar6) goto LAB_08060ae4;
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0x12);
      }
    }
    else if (puVar5 == (uint *)0x3) {
      *piVar8 = (uint)*(byte *)((int)*ppuVar2 + 0x807b851) * 2 + 1;
      ppuVar2 = ppuVar7 + 2;
    }
    ppuVar7 = ppuVar2;
    puVar5 = *ppuVar7;
    if (puVar5 == (uint *)0x4) {
      return piVar4;
    }
    piVar8 = piVar8 + 1;
  } while( true );
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_time(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  caml_copy_double((double)tVar1);
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

double * unix_times(void)

{
  double *pdVar1;
  rusage local_64;
  
  pdVar1 = (double *)caml_alloc_small(8,0xfe);
  getrusage(RUSAGE_SELF,&local_64);
  *pdVar1 = (double)local_64.ru_utime.tv_usec / 1000000.0 + (double)local_64.ru_utime.tv_sec;
  pdVar1[1] = (double)local_64.ru_stime.tv_usec / 1000000.0 + (double)local_64.ru_stime.tv_sec;
  getrusage(RUSAGE_CHILDREN,&local_64);
  pdVar1[2] = (double)local_64.ru_utime.tv_usec / 1000000.0 + (double)local_64.ru_utime.tv_sec;
  pdVar1[3] = (double)local_64.ru_stime.tv_usec / 1000000.0 + (double)local_64.ru_stime.tv_sec;
  return pdVar1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_truncate_64(char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = truncate64(param_1,*(__off64_t *)(param_2 + 4));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("truncate",param_1);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_truncate(char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = truncate64(param_1,CONCAT44(param_2 >> 0x1f,param_2 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("truncate",param_1);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_umask(int param_1)

{
  __mode_t _Var1;
  
  _Var1 = umask(param_1 >> 1);
  return _Var1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int * unix_error_of_code(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)cst_to_constr(param_1,error_table,0x44,0xffffffff);
  if (piVar1 == (int *)0xffffffff) {
    piVar1 = (int *)caml_alloc_small(1,0);
    *piVar1 = param_1 * 2 + 1;
  }
  return piVar1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_error(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int *local_24;
  int local_18;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  local_10[0] = 1;
  local_14 = 1;
  local_18 = 1;
  local_38 = caml_local_roots;
  caml_local_roots = &local_38;
  local_30 = 1;
  local_34 = 3;
  local_2c = local_10;
  local_28 = &local_14;
  local_24 = &local_18;
  if (param_3 == 0) {
    param_3 = caml_copy_string("");
  }
  local_18 = param_3;
  local_10[0] = caml_copy_string(param_2);
  local_14 = unix_error_of_code(param_1);
  if (unix_error_exn == (undefined4 *)0x0) {
    unix_error_exn = (undefined4 *)caml_named_value("Unix.Unix_error");
    if (unix_error_exn == (undefined4 *)0x0) {
      caml_invalid_argument("Exception Unix.Unix_error not initialized, please link unix.cma");
    }
  }
  puVar1 = (undefined4 *)caml_alloc_small(4,0);
  *puVar1 = *unix_error_exn;
  puVar1[1] = local_14;
  puVar1[2] = local_10[0];
  puVar1[3] = local_18;
  caml_local_roots = (undefined4 *)local_38;
                    // WARNING: Subroutine does not return
  caml_raise(puVar1);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 uerror(char *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = __errno_location();
  unix_error(*piVar1,param_1,param_2);
  iVar2 = unlink(param_1);
  if (iVar2 == -1) {
                    // WARNING: Subroutine does not return
    uerror("unlink",param_1);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_unlink(char *param_1)

{
  int iVar1;
  
  iVar1 = unlink(param_1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("unlink",param_1);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

undefined4 unix_utimes(char *param_1,double *param_2,double *param_3)

{
  utimbuf *__file_times;
  int iVar1;
  utimbuf local_14;
  
  local_14.actime = (__time_t)ROUND(*param_2);
  local_14.modtime = (__time_t)ROUND(*param_3);
  if ((local_14.actime != 0) || (__file_times = (utimbuf *)0x0, local_14.modtime != 0)) {
    __file_times = &local_14;
  }
  iVar1 = utime(param_1,__file_times);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("utimes",param_1);
  }
  return 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void __regparm3 alloc_process_status(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int **local_34;
  int *local_20 [4];
  
  if ((param_2 & 0x7f) == 0) {
    local_20[0] = (int *)caml_alloc_small(1,0);
    *local_20[0] = (param_2 >> 8 & 0xff) * 2 + 1;
  }
  else if ((char)param_2 == '\x7f') {
    piVar2 = (int *)caml_alloc_small(1,2);
    local_20[0] = piVar2;
    iVar1 = caml_rev_convert_signal_number(param_2 >> 8 & 0xff);
    *piVar2 = iVar1 * 2 + 1;
  }
  else {
    piVar2 = (int *)caml_alloc_small(1,1);
    local_20[0] = piVar2;
    iVar1 = caml_rev_convert_signal_number(param_2 & 0x7f);
    *piVar2 = iVar1 * 2 + 1;
  }
  local_40 = caml_local_roots;
  caml_local_roots = &local_40;
  local_38 = 1;
  local_3c = 1;
  local_34 = local_20;
  piVar2 = (int *)caml_alloc_small(2,0);
  *piVar2 = param_1 * 2 + 1;
  piVar2[1] = (int)local_20[0];
  caml_local_roots = (undefined4 *)local_40;
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_waitpid(undefined4 param_1,int param_2)

{
  int __options;
  __pid_t _Var1;
  int local_10;
  
  __options = caml_convert_flag_list(param_1,&wait_flag_table);
  caml_enter_blocking_section();
  _Var1 = waitpid(param_2 >> 1,&local_10,__options);
  caml_leave_blocking_section();
  if (_Var1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("waitpid",0);
  }
  alloc_process_status();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void unix_wait(void)

{
  __pid_t _Var1;
  undefined local_10 [4];
  
  caml_enter_blocking_section();
  _Var1 = wait(local_10);
  caml_leave_blocking_section();
  if (_Var1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&DAT_08070c9e,0);
  }
  alloc_process_status();
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_single_write(int param_1,int param_2,int param_3,int param_4)

{
  ssize_t sVar1;
  size_t __n;
  undefined4 local_403c;
  undefined4 local_4038;
  undefined4 local_4034;
  undefined4 *local_4030;
  undefined local_401c [16396];
  
  local_403c = caml_local_roots;
  caml_local_roots = &local_403c;
  local_4034 = 1;
  local_4038 = 1;
  local_4030 = &param_2;
  __n = param_4 >> 1;
  if ((int)__n < 1) {
    sVar1 = 0;
  }
  else {
    if (0x4000 < (int)__n) {
      __n = 0x4000;
    }
    memmove(local_401c,(void *)((param_3 >> 1) + param_2),__n);
    caml_enter_blocking_section();
    sVar1 = write(param_1 >> 1,local_401c,__n);
    caml_leave_blocking_section();
    if (sVar1 == -1) {
                    // WARNING: Subroutine does not return
      uerror("single_write",0);
    }
  }
  caml_local_roots = (undefined4 *)local_403c;
  return sVar1 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int unix_write(int param_1,int param_2,int param_3,int param_4)

{
  ssize_t sVar1;
  int *piVar2;
  size_t sVar3;
  size_t __n;
  int local_4044;
  int local_4040;
  undefined4 local_403c;
  undefined4 local_4038;
  undefined4 local_4034;
  undefined4 *local_4030;
  undefined local_401c [16396];
  
  local_403c = caml_local_roots;
  caml_local_roots = &local_403c;
  local_4034 = 1;
  local_4038 = 1;
  local_4030 = &param_2;
  sVar3 = param_4 >> 1;
  if ((int)sVar3 < 1) {
    local_4044 = 0;
  }
  else {
    local_4040 = param_3 >> 1;
    local_4044 = 0;
    while( true ) {
      __n = 0x4000;
      if ((int)sVar3 < 0x4001) {
        __n = sVar3;
      }
      memmove(local_401c,(void *)(local_4040 + param_2),__n);
      caml_enter_blocking_section();
      sVar1 = write(param_1 >> 1,local_401c,__n);
      caml_leave_blocking_section();
      if (sVar1 == -1) break;
      local_4044 = local_4044 + sVar1;
      sVar3 = sVar3 - sVar1;
      if ((int)sVar3 < 1) goto LAB_08061335;
      local_4040 = local_4040 + sVar1;
    }
    piVar2 = __errno_location();
    if ((*piVar2 != 0xb) || (local_4044 < 1)) {
                    // WARNING: Subroutine does not return
      uerror("write",0);
    }
  }
LAB_08061335:
  caml_local_roots = (undefined4 *)local_403c;
  return local_4044 * 2 + 1;
}



int cst_to_constr(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_4;
  if (0 < param_3) {
    iVar1 = *param_2;
    iVar2 = 0;
    while ((iVar1 != param_1 && (iVar3 = iVar2 + 1, iVar2 = param_4, iVar3 < param_3))) {
      iVar1 = param_2[iVar3];
      iVar2 = iVar3;
    }
  }
  return iVar2 * 2 + 1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int cstringvect(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + -4) >> 10;
  iVar1 = caml_stat_alloc(uVar3 * 4 + 4);
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      *(undefined4 *)(iVar1 + uVar2 * 4) = *(undefined4 *)(param_1 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  *(undefined4 *)(iVar1 + uVar3 * 4) = 0;
  return iVar1;
}



void __regparm3 scanmult(undefined4 param_1,int *param_2)

{
  int local_24;
  char local_1d [13];
  
  local_1d[0] = ' ';
  __isoc99_sscanf(param_1,"=%u%c",&local_24,local_1d);
  __isoc99_sscanf(param_1,"=0x%x%c",&local_24,local_1d);
  if (local_1d[0] == 'M') {
    *param_2 = local_24 << 0x14;
  }
  else if (local_1d[0] == 'k') {
    *param_2 = local_24 << 10;
  }
  else if (local_1d[0] == 'G') {
    *param_2 = local_24 << 0x1e;
  }
  else {
    *param_2 = local_24;
  }
  return;
}



void caml_main(char **param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined **unaff_ESI;
  undefined **unaff_EDI;
  undefined *local_24;
  undefined local_1d [13];
  
  caml_init_ieee_floats();
  caml_init_custom_operations();
  caml_top_of_stack = local_1d;
  pcVar2 = getenv("OCAMLRUNPARAM");
  if ((pcVar2 != (char *)0x0) || (pcVar2 = getenv("CAMLRUNPARAM"), pcVar2 != (char *)0x0)) {
    unaff_ESI = &switchD_080614fb::switchdataD_08070d08;
    unaff_EDI = &local_24;
    while (cVar1 = *pcVar2, cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      switch(cVar1) {
      case 'O':
        scanmult();
        break;
      case 'a':
        scanmult();
        caml_set_allocation_policy(local_24);
        break;
      case 'b':
        caml_record_backtrace(3);
        break;
      case 'h':
        scanmult();
        break;
      case 'i':
        scanmult();
        break;
      case 'l':
        scanmult();
        break;
      case 'o':
        scanmult();
        break;
      case 'p':
        caml_parser_trace = 1;
        break;
      case 's':
        scanmult();
        break;
      case 'v':
        scanmult();
      }
    }
  }
  caml_init_gc(minor_heap_init,heap_size_init,heap_chunk_init,percent_free_init,
               max_percent_free_init);
  iVar3 = 0;
  do {
    (&caml_atom_table)[iVar3] = iVar3;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x100);
  iVar3 = caml_page_table_add(4,&caml_atom_table,&caml_frame_descriptors_mask);
  if (iVar3 == 0) {
    pcVar2 = (char *)0x0;
    unaff_ESI = &PTR_caml_startup__data_end_080728e4;
    unaff_EDI = &caml_data_segments;
    puVar4 = caml_data_segments;
    if (caml_data_segments == (undefined *)0x0) goto LAB_08061665;
  }
  else {
    puVar4 = (undefined *)
             caml_fatal_error("Fatal error: not enough memory for the initial page table");
  }
  do {
    iVar3 = caml_page_table_add(4,puVar4,unaff_ESI[(int)pcVar2 * 2]);
    if (iVar3 != 0) {
      caml_fatal_error("Fatal error: not enough memory for the initial page table");
    }
    pcVar2 = pcVar2 + 1;
    puVar4 = unaff_EDI[(int)pcVar2 * 2];
  } while (puVar4 != (undefined *)0x0);
LAB_08061665:
  caml_code_area_start = caml_code_segments;
  caml_code_area_end = PTR_caml_startup__code_end_08072960;
  if (PTR_camlPervasives__loop_1138_08072964 != (undefined *)0x0) {
    iVar3 = 1;
    puVar4 = PTR_camlPervasives__loop_1138_08072964;
    do {
      if (puVar4 < caml_code_area_start) {
        caml_code_area_start = puVar4;
      }
      if (caml_code_area_end < (&PTR_caml_startup__code_end_08072960)[iVar3 * 2]) {
        caml_code_area_end = (&PTR_caml_startup__code_end_08072960)[iVar3 * 2];
      }
      iVar3 = iVar3 + 1;
      puVar4 = (&caml_code_segments)[iVar3 * 2];
    } while (puVar4 != (undefined *)0x0);
  }
  caml_init_signals();
  caml_debugger_init();
  pcVar2 = *param_1;
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  iVar3 = caml_executable_name(proc_self_exe_2949,0x100);
  puVar6 = proc_self_exe_2949;
  if (iVar3 != 0) {
    puVar6 = (undefined1 *)caml_search_exe_in_path(pcVar2);
  }
  caml_sys_init(puVar6,param_1);
  iVar3 = __sigsetjmp(caml_termination_jmpbuf,0);
  if (iVar3 == 0) {
    uVar5 = caml_start_program();
    if ((uVar5 & 3) == 2) {
      caml_fatal_uncaught_exception(uVar5 & 0xfffffffc);
    }
  }
  else if (caml_termination_hook != (code *)0x0) {
    (*caml_termination_hook)(0);
  }
  return;
}



void caml_startup(undefined4 param_1)

{
  caml_main(param_1);
  return;
}



undefined4 main(undefined4 param_1,undefined4 param_2)

{
  caml_main(param_2);
  caml_sys_exit(1);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void caml_raise(undefined4 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (caml_channel_mutex_unlock_exn != (code *)0x0) {
    (*caml_channel_mutex_unlock_exn)();
  }
  uVar2 = CONCAT44(caml_exception_pointer,caml_local_roots);
  if (caml_exception_pointer == 0) {
    uVar2 = caml_fatal_uncaught_exception(param_1);
  }
  else if ((caml_local_roots == 0) || (caml_exception_pointer <= caml_local_roots))
  goto LAB_080617e5;
  do {
    uVar1 = (uint)((ulonglong)uVar2 >> 0x20);
    caml_local_roots = *(uint *)uVar2;
    uVar2 = CONCAT44(uVar1,caml_local_roots);
    if (caml_local_roots == 0) break;
  } while (caml_local_roots < uVar1);
LAB_080617e5:
  caml_raise_exception(param_1);
  if (array_bound_error_bucket_inited == 0) {
    _array_bound_error_msg = 0x14fc;
    s_index_out_of_bounds_0807b6d4[19] = '\0';
    array_bound_error_bucket._0_4_ = 0x800;
    array_bound_error_bucket._4_4_ = &caml_exn_Invalid_argument;
    array_bound_error_bucket._8_4_ = s_index_out_of_bounds_0807b6d4;
    array_bound_error_bucket_inited = 1;
    caml_page_table_add(4,&array_bound_error_msg,&caml_last_return_address);
    array_bound_error_bucket_inited = 1;
  }
                    // WARNING: Subroutine does not return
  caml_raise(0x807b9ac);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void caml_array_bound_error(void)

{
  if (array_bound_error_bucket_inited == 0) {
    _array_bound_error_msg = 0x14fc;
    s_index_out_of_bounds_0807b6d4[19] = '\0';
    array_bound_error_bucket._0_4_ = 0x800;
    array_bound_error_bucket._4_4_ = &caml_exn_Invalid_argument;
    array_bound_error_bucket._8_4_ = s_index_out_of_bounds_0807b6d4;
    array_bound_error_bucket_inited = 1;
    caml_page_table_add(4,&array_bound_error_msg,&caml_last_return_address);
    array_bound_error_bucket_inited = 1;
  }
                    // WARNING: Subroutine does not return
  caml_raise(0x807b9ac);
}



void caml_raise_stack_overflow(void)

{
                    // WARNING: Subroutine does not return
  caml_raise(&caml_bucket_Stack_overflow);
}



void caml_raise_out_of_memory(void)

{
                    // WARNING: Subroutine does not return
  caml_raise(&caml_bucket_Out_of_memory);
}



void caml_raise_with_args(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  
  iVar2 = param_3;
  iVar1 = param_2;
  local_2c = caml_local_roots;
  local_24 = 1;
  local_28 = 1;
  local_20 = &param_1;
  local_4c = &local_2c;
  caml_local_roots = &local_4c;
  local_44 = param_2;
  local_48 = 1;
  local_40 = param_3;
  puVar3 = (undefined4 *)caml_alloc_small(param_2 + 1,0);
  *puVar3 = param_1;
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      puVar3[iVar4 + 1] = *(undefined4 *)(iVar2 + iVar4 * 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar1);
  }
                    // WARNING: Subroutine does not return
  caml_raise(puVar3);
}



void caml_raise_with_arg(undefined4 param_1,undefined4 param_2)

{
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 **local_44;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  
  local_2c = caml_local_roots;
  local_24 = 1;
  local_28 = 2;
  local_20 = &param_1;
  local_1c = &param_2;
  local_30 = (undefined4 *)0x0;
  local_50 = &local_2c;
  caml_local_roots = &local_50;
  local_48 = 1;
  local_4c = 1;
  local_44 = &local_30;
  local_30 = (undefined4 *)caml_alloc_small(2,0);
  *local_30 = param_1;
  local_30[1] = param_2;
                    // WARNING: Subroutine does not return
  caml_raise(local_30);
}



void caml_raise_sys_error(undefined4 param_1)

{
  undefined4 *puStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 **ppuStack_b4;
  undefined4 *puStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 *puStack_90;
  code *pcStack_74;
  undefined **ppuStack_70;
  undefined4 auStack_6c [5];
  code *pcStack_58;
  undefined **ppuStack_54;
  undefined4 uStack_50;
  code *pcStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  code *pcStack_20;
  undefined **local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = param_1;
  local_1c = &caml_exn_Sys_error;
  pcStack_20 = caml_raise_with_string;
  caml_raise_with_arg();
  uStack_38 = uStack_14;
  pcStack_3c = (code *)0x80619b2;
  pcStack_20 = (code *)&stack0xfffffffc;
  uStack_34 = caml_copy_string();
  uStack_38 = local_18;
  pcStack_3c = caml_invalid_argument;
  caml_raise_with_arg();
  uStack_50 = uStack_34;
  ppuStack_54 = &caml_exn_Invalid_argument;
  pcStack_58 = caml_failwith;
  pcStack_3c = (code *)&pcStack_20;
  caml_raise_with_string();
  auStack_6c[0] = uStack_50;
  ppuStack_70 = &caml_exn_Failure;
  pcStack_74 = caml_raise_constant;
  pcStack_58 = (code *)&pcStack_3c;
  caml_raise_with_string();
  uStack_9c = caml_local_roots;
  uStack_94 = 1;
  uStack_98 = 1;
  puStack_90 = auStack_6c;
  puStack_a0 = (undefined4 *)0x0;
  puStack_c0 = &uStack_9c;
  caml_local_roots = &puStack_c0;
  uStack_b8 = 1;
  uStack_bc = 1;
  ppuStack_b4 = &puStack_a0;
  pcStack_74 = (code *)&pcStack_58;
  puStack_a0 = (undefined4 *)caml_alloc_small(1,0);
  *puStack_a0 = auStack_6c[0];
                    // WARNING: Subroutine does not return
  caml_raise(puStack_a0);
}



void caml_raise_with_string(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 **ppuStack_98;
  undefined4 *puStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 *puStack_74;
  code *pcStack_58;
  undefined **ppuStack_54;
  undefined4 auStack_50 [5];
  code *pcStack_3c;
  undefined **ppuStack_38;
  undefined4 uStack_34;
  code *pcStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = param_2;
  pcStack_20 = (code *)0x80619b2;
  local_18 = caml_copy_string();
  local_1c = param_1;
  pcStack_20 = caml_invalid_argument;
  caml_raise_with_arg();
  uStack_34 = local_18;
  ppuStack_38 = &caml_exn_Invalid_argument;
  pcStack_3c = caml_failwith;
  pcStack_20 = (code *)&stack0xfffffffc;
  caml_raise_with_string();
  auStack_50[0] = uStack_34;
  ppuStack_54 = &caml_exn_Failure;
  pcStack_58 = caml_raise_constant;
  pcStack_3c = (code *)&pcStack_20;
  caml_raise_with_string();
  uStack_80 = caml_local_roots;
  uStack_78 = 1;
  uStack_7c = 1;
  puStack_74 = auStack_50;
  puStack_84 = (undefined4 *)0x0;
  puStack_a4 = &uStack_80;
  caml_local_roots = &puStack_a4;
  uStack_9c = 1;
  uStack_a0 = 1;
  ppuStack_98 = &puStack_84;
  pcStack_58 = (code *)&pcStack_3c;
  puStack_84 = (undefined4 *)caml_alloc_small(1,0);
  *puStack_84 = auStack_50[0];
                    // WARNING: Subroutine does not return
  caml_raise(puStack_84);
}



void caml_invalid_argument(undefined4 param_1)

{
  undefined4 *puStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 **ppuStack_7c;
  undefined4 *puStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  code *pcStack_3c;
  undefined **ppuStack_38;
  undefined4 auStack_34 [5];
  code *pcStack_20;
  undefined **local_1c;
  undefined4 local_18;
  
  local_18 = param_1;
  local_1c = &caml_exn_Invalid_argument;
  pcStack_20 = caml_failwith;
  caml_raise_with_string();
  auStack_34[0] = local_18;
  ppuStack_38 = &caml_exn_Failure;
  pcStack_3c = caml_raise_constant;
  pcStack_20 = (code *)&stack0xfffffffc;
  caml_raise_with_string();
  uStack_64 = caml_local_roots;
  uStack_5c = 1;
  uStack_60 = 1;
  puStack_58 = auStack_34;
  puStack_68 = (undefined4 *)0x0;
  puStack_88 = &uStack_64;
  caml_local_roots = &puStack_88;
  uStack_80 = 1;
  uStack_84 = 1;
  ppuStack_7c = &puStack_68;
  pcStack_3c = (code *)&pcStack_20;
  puStack_68 = (undefined4 *)caml_alloc_small(1,0);
  *puStack_68 = auStack_34[0];
                    // WARNING: Subroutine does not return
  caml_raise(puStack_68);
}



void caml_failwith(undefined4 param_1)

{
  undefined4 *puStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 **ppuStack_60;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  code *pcStack_20;
  undefined **local_1c;
  undefined4 local_18 [5];
  
  local_18[0] = param_1;
  local_1c = &caml_exn_Failure;
  pcStack_20 = caml_raise_constant;
  caml_raise_with_string();
  uStack_48 = caml_local_roots;
  uStack_40 = 1;
  uStack_44 = 1;
  puStack_3c = local_18;
  puStack_4c = (undefined4 *)0x0;
  puStack_6c = &uStack_48;
  caml_local_roots = &puStack_6c;
  uStack_64 = 1;
  uStack_68 = 1;
  ppuStack_60 = &puStack_4c;
  pcStack_20 = (code *)&stack0xfffffffc;
  puStack_4c = (undefined4 *)caml_alloc_small(1,0);
  *puStack_4c = local_18[0];
                    // WARNING: Subroutine does not return
  caml_raise(puStack_4c);
}



void caml_raise_constant(undefined4 param_1)

{
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 **local_44;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  
  local_2c = caml_local_roots;
  local_24 = 1;
  local_28 = 1;
  local_20 = &param_1;
  local_30 = (undefined4 *)0x0;
  local_50 = &local_2c;
  caml_local_roots = &local_50;
  local_48 = 1;
  local_4c = 1;
  local_44 = &local_30;
  local_30 = (undefined4 *)caml_alloc_small(1,0);
  *local_30 = param_1;
                    // WARNING: Subroutine does not return
  caml_raise(local_30);
}



void caml_raise_sys_blocked_io(void)

{
                    // WARNING: Subroutine does not return
  caml_raise_constant(&caml_exn_Sys_blocked_io);
}



void caml_raise_not_found(void)

{
                    // WARNING: Subroutine does not return
  caml_raise_constant(&caml_exn_Not_found);
}



void caml_raise_zero_divide(void)

{
                    // WARNING: Subroutine does not return
  caml_raise_constant(&caml_exn_Division_by_zero);
}



void caml_raise_end_of_file(void)

{
                    // WARNING: Subroutine does not return
  caml_raise_constant(&caml_exn_End_of_file);
}



void caml_do_local_roots(code *param_1,int param_2,uint param_3,int param_4,int *param_5)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int local_24;
  int local_20;
  
  if (param_2 != 0) {
    local_24 = param_4;
    local_20 = param_2;
    do {
      while( true ) {
        uVar3 = param_3 >> 3 & caml_frame_descriptors_mask;
        puVar2 = *(uint **)(caml_frame_descriptors + uVar3 * 4);
        uVar7 = *puVar2;
        while (uVar7 != param_3) {
          uVar3 = uVar3 + 1 & caml_frame_descriptors_mask;
          puVar2 = *(uint **)(caml_frame_descriptors + uVar3 * 4);
          uVar7 = *puVar2;
        }
        if (*(short *)(puVar2 + 1) == -1) break;
        uVar7 = (uint)*(ushort *)((int)puVar2 + 6);
        if (uVar7 != 0) {
          puVar8 = puVar2 + 2;
          while( true ) {
            uVar1 = *(ushort *)puVar8;
            if ((uVar1 & 1) == 0) {
              puVar4 = (undefined4 *)((uint)uVar1 + local_20);
            }
            else {
              puVar4 = (undefined4 *)(local_24 + ((int)(uint)uVar1 >> 1) * 4);
            }
            (*param_1)(*puVar4,puVar4);
            uVar7 = uVar7 - 1;
            if ((int)uVar7 < 1) break;
            puVar8 = (uint *)((int)puVar8 + 2);
          }
        }
        local_20 = local_20 + (*(ushort *)(puVar2 + 1) & 0xfffc);
        param_3 = *(uint *)(local_20 + -4);
      }
      piVar5 = (int *)(local_20 + 8);
      param_3 = *(uint *)(local_20 + 0xc);
      local_24 = *(int *)(local_20 + 0x10);
      local_20 = *piVar5;
    } while (*piVar5 != 0);
  }
  if (param_5 != (int *)0x0) {
    local_20 = 0;
    do {
      iVar9 = 0;
      if (0 < param_5[1]) {
        do {
          iVar6 = local_20;
          if (0 < param_5[2]) {
            do {
              puVar4 = (undefined4 *)(iVar6 * 4 + param_5[iVar9 + 3]);
              (*param_1)(*puVar4,puVar4);
              iVar6 = iVar6 + 1;
            } while (param_5[2] != iVar6 && iVar6 <= param_5[2]);
          }
          iVar9 = iVar9 + 1;
        } while (param_5[1] != iVar9 && iVar9 <= param_5[1]);
      }
      param_5 = (int *)*param_5;
    } while (param_5 != (int *)0x0);
  }
  return;
}



int caml_stack_usage(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = caml_top_of_stack - caml_bottom_of_stack >> 2;
  if (caml_stack_usage_hook != (code *)0x0) {
    iVar1 = (*caml_stack_usage_hook)();
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}



void __regparm3 cons(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)caml_stat_alloc(8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



void caml_register_dyn_global(void)

{
  caml_dyn_globals = cons();
  return;
}



void caml_register_frametable(void)

{
  frametables = cons();
  if (caml_frame_descriptors != 0) {
    caml_stat_free(caml_frame_descriptors);
    caml_frame_descriptors = 0;
  }
  return;
}



void caml_init_frame_descriptors(void)

{
  uint **ppuVar1;
  uint *puVar2;
  undefined *puVar3;
  int **ppiVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (inited_3139 == 0) {
    if (caml_frametable != (undefined *)0x0) {
      iVar8 = 0;
      puVar3 = caml_frametable;
      do {
        caml_register_frametable(puVar3);
        iVar8 = iVar8 + 1;
        puVar3 = (&caml_frametable)[iVar8];
      } while (puVar3 != (undefined *)0x0);
    }
    inited_3139 = 1;
  }
  if (frametables == (int **)0x0) {
LAB_08061dad:
    caml_frame_descriptors = caml_stat_alloc(0x10);
    iVar10 = 4;
  }
  else {
    iVar8 = 0;
    ppiVar4 = frametables;
    do {
      iVar8 = iVar8 + **ppiVar4;
      ppiVar4 = (int **)ppiVar4[1];
    } while (ppiVar4 != (int **)0x0);
    if (iVar8 * 2 < 5) goto LAB_08061dad;
    iVar10 = 4;
    do {
      iVar9 = iVar10;
      iVar10 = iVar9 * 2;
    } while (SBORROW4(iVar10,iVar8 * 2) != iVar10 + iVar8 * -2 < 0);
    caml_frame_descriptors = caml_stat_alloc(iVar9 * 8);
    if (iVar10 < 1) goto LAB_08061d24;
  }
  iVar8 = 0;
  do {
    *(undefined4 *)(caml_frame_descriptors + iVar8 * 4) = 0;
    iVar8 = iVar8 + 1;
  } while (iVar8 < iVar10);
LAB_08061d24:
  caml_frame_descriptors_mask = iVar10 - 1;
  for (ppiVar4 = frametables; ppiVar4 != (int **)0x0; ppiVar4 = (int **)ppiVar4[1]) {
    iVar8 = **ppiVar4;
    if (0 < iVar8) {
      puVar7 = (uint *)(*ppiVar4 + 1);
      iVar10 = 0;
      do {
        uVar5 = *puVar7 >> 3 & caml_frame_descriptors_mask;
        ppuVar1 = (uint **)(caml_frame_descriptors + uVar5 * 4);
        puVar2 = *ppuVar1;
        while (puVar2 != (uint *)0x0) {
          uVar5 = uVar5 + 1 & caml_frame_descriptors_mask;
          ppuVar1 = (uint **)(caml_frame_descriptors + uVar5 * 4);
          puVar2 = *ppuVar1;
        }
        *ppuVar1 = puVar7;
        puVar6 = (uint *)((int)puVar7 + (uint)*(ushort *)((int)puVar7 + 6) * 2 + 0xb & 0xfffffffc);
        puVar2 = puVar7 + 1;
        puVar7 = puVar6;
        if ((*(byte *)puVar2 & 1) != 0) {
          puVar7 = puVar6 + 2;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar8);
    }
  }
  return;
}



void caml_do_roots(code *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined *puVar6;
  int local_20;
  
  piVar4 = caml_dyn_globals;
  if (caml_globals != (undefined *)0x0) {
    local_20 = 0;
    puVar6 = caml_globals;
    do {
      uVar5 = 0;
      if (*(uint *)(puVar6 + -4) >> 10 != 0) {
        do {
          (*param_1)(*(undefined4 *)(puVar6 + uVar5 * 4),puVar6 + uVar5 * 4);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(puVar6 + -4) >> 10);
      }
      local_20 = local_20 + 1;
      puVar6 = (&caml_globals)[local_20];
      piVar4 = caml_dyn_globals;
    } while (puVar6 != (undefined *)0x0);
  }
  for (; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    iVar3 = *piVar4;
    puVar1 = (uint *)(iVar3 + -4);
    if (*puVar1 >> 10 != 0) {
      uVar5 = 0;
      do {
        puVar2 = (undefined4 *)(iVar3 + uVar5 * 4);
        (*param_1)(*puVar2,puVar2);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *puVar1 >> 10);
    }
  }
  if (caml_frame_descriptors == 0) {
    caml_init_frame_descriptors();
  }
  caml_do_local_roots(param_1,caml_bottom_of_stack,caml_last_return_address,caml_gc_regs,
                      caml_local_roots);
  caml_scan_global_roots(param_1);
  caml_final_do_strong_roots(param_1);
  if (caml_scan_roots_hook != (code *)0x0) {
    (*caml_scan_roots_hook)(param_1);
  }
  return;
}



void caml_darken_all_roots(void)

{
  caml_do_roots(caml_darken);
  return;
}



void caml_oldify_local_roots(void)

{
  int *piVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int local_20;
  
  iVar12 = caml_globals_inited;
  piVar1 = caml_dyn_globals;
  if (caml_globals_scanned <= caml_globals_inited) {
    puVar3 = (&caml_globals)[caml_globals_scanned];
    iVar10 = caml_globals_scanned;
    while (iVar12 = caml_globals_inited, piVar1 = caml_dyn_globals, puVar3 != (undefined *)0x0) {
      uVar9 = 0;
      if (*(uint *)(puVar3 + -4) >> 10 != 0) {
        do {
          uVar4 = *(uint *)(puVar3 + uVar9 * 4);
          if ((((uVar4 & 1) == 0) && (uVar4 < caml_young_end)) && (caml_young_start < uVar4)) {
            caml_oldify_one(uVar4,puVar3 + uVar9 * 4);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(puVar3 + -4) >> 10);
      }
      iVar10 = iVar10 + 1;
      iVar12 = caml_globals_inited;
      piVar1 = caml_dyn_globals;
      if (caml_globals_inited < iVar10) break;
      puVar3 = (&caml_globals)[iVar10];
    }
  }
  for (; caml_globals_scanned = iVar12, piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar12 = *piVar1;
    puVar8 = (uint *)(iVar12 + -4);
    if (*puVar8 >> 10 != 0) {
      uVar9 = 0;
      do {
        puVar11 = (uint *)(iVar12 + uVar9 * 4);
        uVar4 = *puVar11;
        if ((((uVar4 & 1) == 0) && (uVar4 < caml_young_end)) && (caml_young_start < uVar4)) {
          caml_oldify_one(uVar4,puVar11);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *puVar8 >> 10);
    }
    iVar12 = caml_globals_scanned;
  }
  iVar12 = caml_gc_regs;
  uVar9 = caml_last_return_address;
  local_20 = caml_bottom_of_stack;
  if (caml_frame_descriptors == 0) {
    caml_init_frame_descriptors();
    iVar12 = caml_gc_regs;
    uVar9 = caml_last_return_address;
    local_20 = caml_bottom_of_stack;
  }
  for (; local_20 != 0; local_20 = *(int *)(local_20 + 8)) {
    while( true ) {
      uVar6 = uVar9 >> 3 & caml_frame_descriptors_mask;
      puVar8 = *(uint **)(caml_frame_descriptors + uVar6 * 4);
      uVar4 = *puVar8;
      while (uVar4 != uVar9) {
        uVar6 = uVar6 + 1 & caml_frame_descriptors_mask;
        puVar8 = *(uint **)(caml_frame_descriptors + uVar6 * 4);
        uVar4 = *puVar8;
      }
      if (*(short *)(puVar8 + 1) == -1) break;
      uVar9 = (uint)*(ushort *)((int)puVar8 + 6);
      if (uVar9 != 0) {
        puVar11 = puVar8 + 2;
        while( true ) {
          uVar2 = *(ushort *)puVar11;
          if ((uVar2 & 1) == 0) {
            puVar7 = (uint *)((uint)uVar2 + local_20);
          }
          else {
            puVar7 = (uint *)(iVar12 + ((int)(uint)uVar2 >> 1) * 4);
          }
          uVar4 = *puVar7;
          if ((((uVar4 & 1) == 0) && (uVar4 < caml_young_end)) && (caml_young_start < uVar4)) {
            caml_oldify_one(uVar4,puVar7);
          }
          uVar9 = uVar9 - 1;
          if ((int)uVar9 < 1) break;
          puVar11 = (uint *)((int)puVar11 + 2);
        }
      }
      local_20 = local_20 + (*(ushort *)(puVar8 + 1) & 0xfffc);
      uVar9 = *(uint *)(local_20 + -4);
    }
    puVar8 = (uint *)(local_20 + 0xc);
    piVar1 = (int *)(local_20 + 0x10);
    iVar12 = *piVar1;
    uVar9 = *puVar8;
  }
  local_20 = 0;
  for (puVar5 = caml_local_roots; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
    iVar12 = 0;
    if (0 < (int)puVar5[1]) {
      do {
        iVar10 = local_20;
        if (0 < (int)puVar5[2]) {
          do {
            puVar8 = (uint *)(iVar10 * 4 + puVar5[iVar12 + 3]);
            uVar9 = *puVar8;
            if ((((uVar9 & 1) == 0) && (uVar9 < caml_young_end)) && (caml_young_start < uVar9)) {
              caml_oldify_one(uVar9,puVar8);
            }
            iVar10 = iVar10 + 1;
          } while (puVar5[2] != iVar10 && iVar10 <= (int)puVar5[2]);
        }
        iVar12 = iVar12 + 1;
      } while (puVar5[1] != iVar12 && iVar12 <= (int)puVar5[1]);
    }
  }
  caml_scan_global_young_roots(caml_oldify_one);
  caml_final_do_young_roots(caml_oldify_one);
  if (caml_scan_roots_hook != (code *)0x0) {
    (*caml_scan_roots_hook)(caml_oldify_one);
  }
  return;
}



void __regparm3 caml_iterate_global_roots(code *param_1,int param_2)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_2 + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[1]) {
    (*param_1)(*(undefined4 *)*puVar1,(undefined4 *)*puVar1);
  }
  return;
}



void caml_scan_global_roots(void)

{
  caml_iterate_global_roots();
  caml_iterate_global_roots();
  caml_iterate_global_roots();
  return;
}



void __regparm3 caml_insert_global_root(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *local_60 [20];
  
  uVar1 = param_1[0x12];
  uVar3 = uVar1;
  puVar2 = param_1;
  puVar4 = param_1;
  if (-1 < (int)uVar1) {
LAB_08062211:
    do {
      puVar4 = puVar2;
      puVar2 = (uint *)puVar4[uVar3 + 1];
      if (puVar2 != (uint *)0x0) {
        if (*puVar2 < param_2) goto LAB_08062211;
      }
      local_60[uVar3] = puVar4;
      uVar3 = uVar3 - 1;
      puVar2 = puVar4;
    } while (uVar3 != 0xffffffff);
  }
  if (((uint *)puVar4[1] == (uint *)0x0) || (*(uint *)puVar4[1] != param_2)) {
    uVar6 = 0;
    random_seed = random_seed * 0x10dcd + 0x6255;
    for (uVar3 = random_seed; (uVar3 & 0xc0000000) == 0xc0000000; uVar3 = uVar3 << 2) {
      uVar6 = uVar6 + 1;
    }
    if ((int)uVar1 < (int)uVar6) {
      while (uVar1 = uVar1 + 1, (int)uVar1 <= (int)uVar6) {
        local_60[uVar1] = param_1;
      }
      param_1[0x12] = uVar6;
    }
    puVar2 = (uint *)caml_stat_alloc(uVar6 * 4 + 8);
    *puVar2 = param_2;
    if (-1 < (int)uVar6) {
      iVar5 = 0;
      do {
        puVar4 = local_60[iVar5];
        puVar2[iVar5 + 1] = puVar4[iVar5 + 1];
        puVar4[iVar5 + 1] = (uint)puVar2;
        iVar5 = iVar5 + 1;
      } while (iVar5 <= (int)uVar6);
    }
  }
  return;
}



void caml_register_generational_global_root(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 < caml_young_end) && (caml_young_start < uVar1)) {
      caml_insert_global_root();
    }
    else if ((*(byte *)((&caml_page_table)[uVar1 >> 0x17] + (uVar1 >> 0xc & 0x7ff)) & 1) != 0) {
      caml_insert_global_root();
    }
  }
  return;
}



void caml_register_global_root(void)

{
  caml_insert_global_root();
  return;
}



void caml_scan_global_young_roots(void)

{
  int iVar1;
  int iVar2;
  
  caml_iterate_global_roots();
  caml_iterate_global_roots();
  iVar2 = caml_global_roots_young._4_4_;
  if (caml_global_roots_young._4_4_ != 0) {
    do {
      caml_insert_global_root();
      iVar2 = *(int *)(iVar2 + 4);
      iVar1 = caml_global_roots_young._4_4_;
    } while (iVar2 != 0);
    while (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 4);
      caml_stat_free(iVar1);
      iVar1 = iVar2;
    }
  }
  if (-1 < (int)caml_global_roots_young._72_4_) {
    iVar2 = 0;
    do {
      *(undefined4 *)(caml_global_roots_young + iVar2 * 4 + 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 <= (int)caml_global_roots_young._72_4_);
  }
  caml_global_roots_young._72_4_ = 0;
  return;
}



void __regparm3 caml_delete_global_root(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *local_60 [20];
  
  uVar3 = param_1[0x12];
  puVar1 = param_1;
  puVar4 = param_1;
  uVar5 = uVar3;
  if (-1 < (int)uVar3) {
LAB_080623e8:
    do {
      puVar4 = puVar1;
      puVar1 = (uint *)puVar4[uVar5 + 1];
      if (puVar1 != (uint *)0x0) {
        if (*puVar1 < param_2) goto LAB_080623e8;
      }
      local_60[uVar5] = puVar4;
      uVar5 = uVar5 - 1;
      puVar1 = puVar4;
    } while (uVar5 != 0xffffffff);
  }
  puVar1 = (uint *)puVar4[1];
  if ((puVar1 != (uint *)0x0) && (*puVar1 == param_2)) {
    if (-1 < (int)uVar3) {
      iVar2 = 0;
      do {
        if ((uint *)local_60[iVar2][iVar2 + 1] == puVar1) {
          local_60[iVar2][iVar2 + 1] = puVar1[iVar2 + 1];
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= (int)param_1[0x12]);
    }
    caml_stat_free(puVar1);
    uVar3 = param_1[0x12];
    if ((0 < (int)uVar3) && (param_1[uVar3 + 1] == 0)) {
      do {
        uVar5 = uVar3 - 1;
        if ((int)uVar5 < 1) {
          param_1[0x12] = uVar5;
          return;
        }
        puVar1 = param_1 + uVar3;
        uVar3 = uVar5;
      } while (*puVar1 == 0);
      param_1[0x12] = uVar5;
    }
  }
  return;
}



void caml_modify_generational_global_root(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_2 & 1;
  if (((uVar2 == 0) && (param_2 < caml_young_end)) && (caml_young_start < param_2)) {
    if ((uVar1 & 1) == 0) {
      if ((*(byte *)((&caml_page_table)[uVar1 >> 0x17] + (uVar1 >> 0xc & 0x7ff)) & 1) != 0) {
        caml_delete_global_root();
        caml_insert_global_root();
      }
      goto LAB_0806252f;
    }
  }
  else {
    if ((uVar1 & 1) == 0) {
      if (uVar2 != 0) {
        if ((uVar1 < caml_young_end) && (caml_young_start < uVar1)) {
          caml_delete_global_root();
        }
        else if ((*(byte *)((&caml_page_table)[uVar1 >> 0x17] + (uVar1 >> 0xc & 0x7ff)) & 1) != 0) {
          caml_delete_global_root();
        }
      }
      goto LAB_0806252f;
    }
    if (uVar2 != 0) goto LAB_0806252f;
  }
  if ((param_2 < caml_young_end) && (caml_young_start < param_2)) {
    caml_insert_global_root();
  }
  else if ((*(byte *)((&caml_page_table)[param_2 >> 0x17] + (param_2 >> 0xc & 0x7ff)) & 1) != 0) {
    caml_insert_global_root();
  }
LAB_0806252f:
  *param_1 = param_2;
  return;
}



void caml_remove_generational_global_root(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 < caml_young_end) && (caml_young_start < uVar1)) {
      caml_delete_global_root();
    }
    else if ((*(byte *)((&caml_page_table)[uVar1 >> 0x17] + (uVar1 >> 0xc & 0x7ff)) & 1) != 0) {
      caml_delete_global_root();
    }
  }
  return;
}



void caml_remove_global_root(void)

{
  caml_delete_global_root();
  return;
}



void caml_record_signal(int param_1)

{
  (&caml_pending_signals)[param_1] = 1;
  caml_signals_are_pending = 1;
  caml_young_limit = caml_young_end;
  return;
}



void caml_enter_blocking_section_default(void)

{
  caml_async_signal_mode = 1;
  return;
}



void caml_leave_blocking_section_default(void)

{
  caml_async_signal_mode = 0;
  return;
}



undefined4 caml_try_leave_blocking_section_default(void)

{
  undefined4 uVar1;
  
  uVar1 = caml_async_signal_mode;
  LOCK();
  caml_async_signal_mode = 0;
  UNLOCK();
  return uVar1;
}



void caml_urge_major_slice(void)

{
  caml_force_major_slice = 1;
  caml_young_limit = caml_young_end;
  return;
}



uint caml_convert_signal_number(uint param_1)

{
  if (((int)param_1 < 0) && (0xffffffea < param_1)) {
    param_1 = *(uint *)(posix_signals + ~param_1 * 4);
  }
  return param_1;
}



uint caml_rev_convert_signal_number(uint param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_1 == 6) {
    uVar1 = 0;
LAB_08062683:
    param_1 = ~uVar1;
  }
  else {
    do {
      if (*(uint *)(posix_signals + uVar1 * 4) == param_1) goto LAB_08062683;
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x15);
  }
  return param_1;
}



void caml_execute_signal(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  sigset_t local_9c;
  
  sigemptyset(&local_9c);
  sigaddset(&local_9c,param_1);
  sigprocmask(0,&local_9c,&local_9c);
  iVar1 = caml_rev_convert_signal_number(param_1);
  uVar2 = caml_callback_exn(*(undefined4 *)(caml_signal_handlers + param_1 * 4),iVar1 * 2 + 1);
  if (param_2 == 0) {
    sigprocmask(2,&local_9c,(sigset_t *)0x0);
    if ((uVar2 & 3) != 2) {
      return;
    }
  }
  else {
    if ((uVar2 & 3) != 2) {
      return;
    }
    sigdelset(&local_9c,param_1);
    sigprocmask(2,&local_9c,(sigset_t *)0x0);
  }
                    // WARNING: Subroutine does not return
  caml_raise(uVar2 & 0xfffffffc);
}



void caml_process_pending_signals(void)

{
  int iVar1;
  
  if (caml_signals_are_pending != 0) {
    caml_signals_are_pending = 0;
    iVar1 = 0;
    do {
      if ((&caml_pending_signals)[iVar1] != 0) {
        (&caml_pending_signals)[iVar1] = 0;
        caml_execute_signal(iVar1,0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x41);
  }
  return;
}



undefined4 * caml_install_signal_handler(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 **local_54;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  
  uVar1 = caml_local_roots;
  local_3c = caml_local_roots;
  local_34 = 1;
  local_38 = 2;
  local_30 = &param_1;
  local_2c = &param_2;
  local_40 = (undefined4 *)0x0;
  local_60 = &local_3c;
  caml_local_roots = &local_60;
  local_58 = 1;
  local_5c = 1;
  local_54 = &local_40;
  uVar2 = caml_convert_signal_number(param_1 >> 1);
  uVar3 = uVar2;
  if (0x40 < uVar2) {
    uVar3 = caml_invalid_argument("Sys.signal: unavailable signal");
  }
  uVar5 = 2;
  if ((int)param_2 - 1U < 3) {
    uVar5 = *(undefined4 *)(posix_signals + (int)param_2 * 4 + 0x50);
  }
  iVar4 = caml_set_signal_action(uVar3,uVar5);
  if (iVar4 == 1) {
    local_40 = (undefined4 *)0x3;
  }
  else if (iVar4 == 2) {
    local_40 = (undefined4 *)caml_alloc_small(1,0);
    *local_40 = *(undefined4 *)(caml_signal_handlers + uVar2 * 4);
  }
  else if (iVar4 == 0) {
    local_40 = (undefined4 *)0x1;
  }
  else {
    caml_sys_error(1);
  }
  if (((uint)param_2 & 1) == 0) {
    if (caml_signal_handlers == 0) {
      caml_signal_handlers = caml_alloc(0x41,0);
      caml_register_global_root(&caml_signal_handlers);
    }
    caml_modify(uVar2 * 4 + caml_signal_handlers,*param_2);
  }
  caml_process_pending_signals();
  caml_local_roots = (undefined4 **)uVar1;
  return local_40;
}



void caml_leave_blocking_section(void)

{
  (*(code *)caml_leave_blocking_section_hook)();
  caml_process_pending_signals();
  return;
}



void caml_enter_blocking_section(void)

{
  while( true ) {
    caml_process_pending_signals();
    (*(code *)caml_enter_blocking_section_hook)();
    if (caml_signals_are_pending == 0) break;
    (*(code *)caml_leave_blocking_section_hook)();
  }
  return;
}



void caml_init_signals(void)

{
  int iVar1;
  sigaction local_a4;
  sigaltstack local_18;
  
  local_18.ss_sp = sig_alt_stack;
  local_18.ss_size = 0x2000;
  local_18.ss_flags = 0;
  local_a4.__sigaction_handler.sa_handler = segv_handler;
  local_a4.sa_flags = 0x48000000;
  sigemptyset(&local_a4.sa_mask);
  system_stack_top = &local_a4;
  iVar1 = sigaltstack(&local_18,(sigaltstack *)0x0);
  if (iVar1 == 0) {
    sigaction(0xb,&local_a4,(sigaction *)0x0);
  }
  return;
}



uint caml_set_signal_action(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  sigaction local_124;
  sigaction local_98;
  
  if (param_2 == 0) {
    local_98.__sigaction_handler.sa_handler = (__sighandler_t)0x0;
  }
  else if (param_2 == 1) {
    local_98.__sigaction_handler = (_union_1051)0x1;
  }
  else {
    local_98.__sigaction_handler.sa_handler = handle_signal;
  }
  local_98.sa_flags = 0;
  sigemptyset(&local_98.sa_mask);
  iVar1 = sigaction(param_1,&local_98,&local_124);
  uVar2 = 0xffffffff;
  if (iVar1 != -1) {
    uVar2 = 2;
    if (local_124.__sigaction_handler.sa_handler != handle_signal) {
      uVar2 = (uint)(local_124.__sigaction_handler.sa_handler == (__sighandler_t)0x1);
    }
  }
  return uVar2;
}



void segv_handler(void)

{
  int iVar1;
  uint param_11;
  sigaction local_a8;
  int local_1c;
  
  if ((param_11 & 3) == 0) {
    iVar1 = getrlimit64(RLIMIT_STACK,(rlimit64 *)&local_1c);
    if (((iVar1 == 0) && (param_11 < system_stack_top)) &&
       ((system_stack_top - local_1c) - 0x2000 <= param_11)) {
      caml_raise_stack_overflow();
    }
  }
  local_a8.__sigaction_handler.sa_handler = (__sighandler_t)0x0;
  local_a8.sa_flags = 0;
  sigemptyset(&local_a8.sa_mask);
  sigaction(0xb,&local_a8,(sigaction *)0x0);
  return;
}



void handle_signal(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x41) {
    iVar1 = (*(code *)caml_try_leave_blocking_section_hook)();
    if (iVar1 == 0) {
      caml_record_signal(param_1);
    }
    else {
      caml_execute_signal(param_1,1);
      (*(code *)caml_enter_blocking_section_hook)();
    }
  }
  return;
}



void caml_garbage_collection(void)

{
  caml_young_limit = caml_young_start;
  if ((caml_young_ptr < caml_young_start) || (caml_force_major_slice != 0)) {
    caml_minor_collection();
  }
  caml_process_pending_signals();
  return;
}



void caml_ext_table_free(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (0 < *param_1)) {
    iVar1 = 0;
    do {
      caml_stat_free(*(undefined4 *)(param_1[2] + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (*param_1 != iVar1 && iVar1 <= *param_1);
  }
  caml_stat_free(param_1[2]);
  return;
}



void caml_ext_table_add(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 <= *param_1) {
    param_1[1] = iVar1 * 2;
    iVar1 = caml_stat_resize(param_1[2],iVar1 << 3);
    param_1[2] = iVar1;
  }
  *(undefined4 *)(param_1[2] + *param_1 * 4) = param_2;
  *param_1 = *param_1 + 1;
  return;
}



void caml_ext_table_init(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = param_2;
  uVar1 = caml_stat_alloc(param_2 << 2);
  param_1[2] = uVar1;
  return;
}



int caml_aligned_malloc(int param_1,int param_2,void **param_3)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = malloc(param_1 + 0x1000);
  iVar2 = 0;
  if (pvVar1 != (void *)0x0) {
    *param_3 = pvVar1;
    iVar2 = (((int)pvVar1 + param_2 & 0xfffff000U) + 0x1000) - param_2;
  }
  return iVar2;
}



void caml_fatal_error_arg2(char *param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  fprintf(stderr,param_1,param_2);
  fprintf(stderr,param_3,param_4);
                    // WARNING: Subroutine does not return
  exit(2);
}



void caml_fatal_error_arg(char *param_1,undefined4 param_2)

{
  fprintf(stderr,param_1,param_2);
                    // WARNING: Subroutine does not return
  exit(2);
}



void caml_fatal_error(char *param_1)

{
  fputs(param_1,stderr);
                    // WARNING: Subroutine does not return
  exit(2);
}



void caml_gc_message(uint param_1,char *param_2,undefined4 param_3)

{
  if (((int)param_1 < 0) || ((caml_verb_gc & param_1) != 0)) {
    fprintf(stderr,param_2,param_3);
    fflush(stderr);
  }
  return;
}



undefined4 * __regparm3
allocate_block(int param_1_00,int param_2,undefined4 *param_3,undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = param_1 + -1;
  uVar2 = *puVar1 >> 10;
  if (uVar2 < param_1_00 + 1U) {
    caml_fl_cur_size = caml_fl_cur_size + ~uVar2;
    *param_3 = *param_1;
    if (caml_fl_merge == param_1) {
      caml_fl_merge = param_3;
    }
    *puVar1 = 0;
    if (caml_allocation_policy == 1) {
      iVar3 = param_2 + 1;
      if ((iVar3 < flp_size) && ((undefined4 *)(&flp)[iVar3] == param_1)) {
        (&flp)[iVar3] = param_3;
        goto LAB_08062e00;
      }
      iVar3 = flp_size + -1;
      if (iVar3 == param_2) {
        flp_size = iVar3;
        beyond = param_3;
        if (param_3 == (undefined4 *)(sentinel + 8)) {
          beyond = (undefined4 *)0x0;
        }
        goto LAB_08062e00;
      }
    }
  }
  else {
    caml_fl_cur_size = caml_fl_cur_size - param_1_00;
    *puVar1 = (uVar2 - param_1_00) * 0x400 + 0x200;
  }
  if (caml_allocation_policy == 0) {
    fl_prev = param_3;
  }
LAB_08062e00:
  return param_1 + (uVar2 - param_1_00);
}



void caml_fl_init_merge(void)

{
  last_fragment = 0;
  caml_fl_merge = 0x807b708;
  return;
}



void __regparm3 truncate_flp(uint param_1)

{
  int iVar1;
  
  if (param_1 == 0x807b708) {
    flp_size = 0;
    beyond = 0;
  }
  else {
    if ((0 < flp_size) &&
       (iVar1 = flp_size + -1,
       param_1 < *(uint *)(&flp)[flp_size + -1] || param_1 == *(uint *)(&flp)[flp_size + -1])) {
      do {
        flp_size = iVar1;
        if (flp_size < 1) break;
        iVar1 = flp_size + -1;
      } while (param_1 < *(uint *)(&flp)[flp_size + -1] || param_1 == *(uint *)(&flp)[flp_size + -1]
              );
    }
    if (param_1 <= beyond) {
      beyond = 0;
    }
  }
  return;
}



void caml_fl_reset(void)

{
  sentinel._8_4_ = 0;
  if (caml_allocation_policy == 0) {
    fl_prev = 0x807b708;
  }
  else if (caml_allocation_policy == 1) {
    truncate_flp();
  }
  caml_fl_cur_size = 0;
  caml_fl_init_merge();
  return;
}



int ** caml_fl_merge_block(int **param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  uint uVar3;
  int **ppiVar4;
  int *piVar5;
  int **local_18;
  
  ppiVar2 = caml_fl_merge;
  piVar5 = param_1[-1];
  caml_fl_cur_size = caml_fl_cur_size + 1 + ((uint)piVar5 >> 10);
  local_18 = (int **)*caml_fl_merge;
  if (caml_allocation_policy == 1) {
    truncate_flp();
  }
  if ((param_1 + -1 == last_fragment) && (uVar3 = ((uint)param_1[-1] >> 10) + 1, uVar3 < 0x400000))
  {
    piVar5 = (int *)(uVar3 * 0x400);
    param_1[-2] = piVar5;
    caml_fl_cur_size = caml_fl_cur_size + 1;
    param_1 = param_1 + -1;
  }
  ppiVar4 = param_1 + ((uint)piVar5 >> 10);
  if (local_18 + -1 == ppiVar4) {
    ppiVar1 = (int **)*local_18;
    uVar3 = ((uint)piVar5 >> 10) + 1 + ((uint)local_18[-1] >> 10);
    ppiVar4 = local_18 + -1;
    if (uVar3 < 0x400000) {
      *ppiVar2 = (int *)ppiVar1;
      if ((caml_allocation_policy == 0) && (fl_prev == local_18)) {
        fl_prev = ppiVar2;
      }
      piVar5 = (int *)(uVar3 * 0x400 + 0x200);
      param_1[-1] = piVar5;
      ppiVar4 = param_1 + ((uint)piVar5 >> 10);
      local_18 = ppiVar1;
    }
  }
  uVar3 = (uint)ppiVar2[-1] >> 10;
  if ((ppiVar2 + uVar3 == param_1 + -1) &&
     (uVar3 = uVar3 + 1 + ((uint)piVar5 >> 10), uVar3 < 0x3fffff)) {
    ppiVar2[-1] = (int *)(uVar3 * 0x400 + 0x200);
  }
  else if ((uint)piVar5 >> 10 == 0) {
    caml_fl_cur_size = caml_fl_cur_size + -1;
    last_fragment = param_1;
  }
  else {
    param_1[-1] = (int *)((uint)piVar5 & 0xfffffcff | 0x200);
    *param_1 = (int *)local_18;
    *ppiVar2 = (int *)param_1;
    caml_fl_merge = param_1;
  }
  return ppiVar4;
}



void caml_fl_add_blocks(uint **param_1)

{
  uint **ppuVar1;
  uint **ppuVar2;
  
  ppuVar1 = fl_last;
  caml_fl_cur_size = caml_fl_cur_size + 1 + ((uint)param_1[-1] >> 10);
  if (fl_last < param_1) {
    *fl_last = (uint *)param_1;
    if ((ppuVar1 == caml_fl_merge) && (param_1 < caml_gc_sweep_hp)) {
      caml_fl_merge = (uint **)param_1[1];
    }
    if ((caml_allocation_policy == 1) && (flp_size < 1000)) {
      (&flp)[flp_size] = ppuVar1;
      flp_size = flp_size + 1;
    }
  }
  else {
    if ((sentinel._8_4_ == 0) ||
       (ppuVar1 = (uint **)sentinel._8_4_, param_1 <= (uint)sentinel._8_4_)) {
      ppuVar2 = (uint **)(sentinel + 8);
      ppuVar1 = (uint **)sentinel._8_4_;
    }
    else {
      do {
        ppuVar2 = ppuVar1;
        ppuVar1 = (uint **)*ppuVar2;
        if (ppuVar1 == (uint **)0x0) break;
      } while (ppuVar1 < param_1);
    }
    *param_1[1] = (uint)ppuVar1;
    *ppuVar2 = (uint *)param_1;
    if ((ppuVar2 == caml_fl_merge) && (param_1 < caml_gc_sweep_hp)) {
      caml_fl_merge = (uint **)param_1[1];
    }
    if (caml_allocation_policy == 1) {
      truncate_flp();
    }
  }
  return;
}



void caml_make_free_blocks(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 != 0) {
    while( true ) {
      uVar1 = 0x400000;
      if (param_2 < 0x400001) {
        uVar1 = param_2;
      }
      *param_1 = (uVar1 - 1) * 0x400;
      if (param_3 != 0) {
        caml_fl_merge_block(param_1 + 1);
      }
      param_2 = param_2 - uVar1;
      if (param_2 == 0) break;
      param_1 = param_1 + uVar1;
    }
  }
  return;
}



void caml_set_allocation_policy(int param_1)

{
  if (param_1 == 0) {
    fl_prev = 0x807b708;
  }
  else if (param_1 == 1) {
    flp_size = 0;
    beyond = 0;
  }
  caml_allocation_policy = param_1;
  return;
}



undefined4 caml_fl_allocate(uint param_1)

{
  int **ppiVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int **ppiVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *local_fbc [1003];
  
  if (caml_allocation_policy == 0) {
    ppiVar1 = (int **)*fl_prev;
    ppiVar7 = fl_prev;
    if (ppiVar1 != (int **)0x0) {
      piVar8 = ppiVar1[-1];
      ppiVar7 = ppiVar1;
      while( true ) {
        if (param_1 <= (uint)piVar8 >> 10) {
          uVar4 = allocate_block(ppiVar7);
          return uVar4;
        }
        ppiVar1 = (int **)*ppiVar7;
        if (ppiVar1 == (int **)0x0) break;
        piVar8 = ppiVar1[-1];
        ppiVar7 = ppiVar1;
      }
    }
    fl_last = ppiVar7;
    if (fl_prev != (int **)(sentinel + 8)) {
      piVar8 = *(int **)(sentinel._8_4_ + -4);
      ppiVar1 = (int **)sentinel._8_4_;
      while( true ) {
        if (param_1 <= (uint)piVar8 >> 10) {
          uVar4 = allocate_block(ppiVar1);
          return uVar4;
        }
        if (fl_prev == ppiVar1) break;
        piVar8 = (int *)(*ppiVar1)[-1];
        ppiVar1 = (int **)*ppiVar1;
      }
    }
  }
  else if (caml_allocation_policy == 1) {
    if (flp_size < 1) {
LAB_080632ab:
      if (flp_size == 0) {
        uVar11 = 0;
        piVar8 = (int *)(sentinel + 8);
      }
      else {
        uVar11 = (uint)(*(int **)(&DAT_0807db5c)[flp_size])[-1] >> 10;
        piVar8 = *(int **)(&DAT_0807db5c)[flp_size];
        if (beyond != (int *)0x0) {
          piVar8 = beyond;
        }
      }
      beyond = (undefined4 *)0x0;
      do {
        do {
          piVar9 = piVar8;
          if (999 < flp_size) {
            puVar10 = beyond;
            if (beyond == (undefined4 *)0x0) {
              puVar10 = (undefined4 *)(&DAT_0807db5c)[flp_size];
            }
            puVar3 = (undefined4 *)*puVar10;
            while( true ) {
              puVar2 = puVar3;
              if (puVar2 == (undefined4 *)0x0) {
                fl_last = (int **)puVar10;
                return 0;
              }
              puVar10 = puVar2;
              if ((*(uint *)(*DAT_0807eafc + -4) >> 10 <= (uint)puVar2[-1] >> 10) &&
                 (puVar10 = beyond, param_1 <= (uint)puVar2[-1] >> 10)) break;
              beyond = puVar10;
              puVar3 = (undefined4 *)*puVar2;
              puVar10 = puVar2;
            }
            uVar4 = allocate_block(puVar2);
            return uVar4;
          }
          beyond = (int *)*piVar9;
          if (beyond == (int *)0x0) {
            beyond = piVar9;
            if (piVar9 == (int *)(sentinel + 8)) {
              beyond = (int *)0x0;
            }
            fl_last = (int **)piVar9;
            return 0;
          }
          uVar14 = (uint)beyond[-1] >> 10;
          piVar8 = beyond;
        } while (uVar14 <= uVar11);
        (&flp)[flp_size] = piVar9;
        iVar13 = flp_size;
        flp_size = flp_size + 1;
        uVar11 = uVar14;
      } while (uVar14 < param_1);
      uVar4 = allocate_block(beyond);
    }
    else {
      iVar5 = *flp;
      iVar13 = 0;
      uVar14 = *(uint *)(iVar5 + -4);
      while (uVar14 = uVar14 >> 10, uVar14 < param_1) {
        iVar13 = iVar13 + 1;
        if (flp_size <= iVar13) goto LAB_080632ab;
        iVar5 = *(&flp)[iVar13];
        uVar14 = *(uint *)(iVar5 + -4);
      }
      uVar4 = allocate_block(iVar5);
    }
    if (flp_size <= iVar13) {
      return uVar4;
    }
    uVar11 = 0;
    if (0 < iVar13) {
      uVar11 = *(uint *)(*(int *)(&DAT_0807db5c)[iVar13] + -4) >> 10;
    }
    iVar5 = flp_size + -1;
    if (iVar5 == iVar13) {
      if (*(uint *)(*(&flp)[iVar5] + -4) >> 10 <= uVar11) {
        flp_size = flp_size + -1;
        beyond = (int *)*(&flp)[iVar5];
        return uVar4;
      }
      beyond = (int *)0x0;
      return uVar4;
    }
    piVar8 = (int *)(&DAT_0807db64)[iVar13];
    iVar5 = 0;
    piVar9 = (&flp)[iVar13];
    do {
      do {
        piVar6 = piVar9;
        if (piVar8 == piVar6) goto LAB_08063491;
        piVar9 = (int *)*piVar6;
        uVar12 = (uint)piVar9[-1] >> 10;
      } while (uVar12 <= uVar11);
      local_fbc[iVar5] = piVar6;
      iVar5 = iVar5 + 1;
      uVar11 = uVar12;
    } while (uVar12 < uVar14);
LAB_08063491:
    if (flp_size + -1 + iVar5 < 0x3e9) {
      if ((iVar5 == 1) ||
         (memmove(&flp + iVar5 + iVar13,&DAT_0807db64 + iVar13,((flp_size + -1) - iVar13) * 4),
         0 < iVar5)) {
        memmove(&flp + iVar13,local_fbc,iVar5 << 2);
      }
      flp_size = iVar5 + -1 + flp_size;
      return uVar4;
    }
    if (iVar5 + iVar13 < 1000) {
      if ((iVar5 == 1) ||
         (memmove(&flp + iVar5 + iVar13,&DAT_0807db64 + iVar13,((1000 - iVar13) - iVar5) * 4),
         0 < iVar5)) {
        memmove(&flp + iVar13,local_fbc,iVar5 << 2);
      }
    }
    else if (iVar13 != 1000) {
      memmove(&flp + iVar13,local_fbc,(1000 - iVar13) * 4);
    }
    flp_size = 999;
    beyond = (int *)*DAT_0807eafc;
    return uVar4;
  }
  return 0;
}



uint __regparm3 clip_heap_chunk_size(uint param_1)

{
  if (param_1 < 0x2000) {
    param_1 = 0x2000;
  }
  return param_1 + 0xfff & 0xfffff000;
}



void caml_init_major_heap(void)

{
  int iVar1;
  void *pvVar2;
  
  caml_stat_heap_size = clip_heap_chunk_size();
  caml_stat_top_heap_size = caml_stat_heap_size;
  iVar1 = caml_alloc_for_heap(caml_stat_heap_size);
  caml_heap_start = iVar1;
  if (iVar1 == 0) {
    iVar1 = caml_fatal_error("Fatal error: not enough memory for the initial heap.\n");
  }
  *(undefined4 *)(iVar1 + -4) = 0;
  caml_stat_heap_chunks = 1;
  iVar1 = caml_page_table_add(1,caml_heap_start,caml_heap_start + caml_stat_heap_size);
  if (iVar1 != 0) {
    caml_fatal_error("Fatal error: not enough memory for the initial page table.\n");
  }
  caml_fl_init_merge();
  caml_make_free_blocks(caml_heap_start,caml_stat_heap_size >> 2,1);
  caml_gc_phase = 2;
  gray_vals_size = 0x800;
  pvVar2 = malloc(0x2000);
  gray_vals = pvVar2;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)caml_fatal_error("Fatal error: not enough memory for the gray cache.\n");
  }
  gray_vals_cur = pvVar2;
  gray_vals_end = (void *)((int)pvVar2 + gray_vals_size * 4);
  heap_is_pure = 1;
  caml_allocated_words = 0;
  caml_extra_heap_resources = 0;
  return;
}



void caml_round_heap_chunk_size(uint param_1)

{
  uint uVar1;
  
  uVar1 = clip_heap_chunk_size();
  if (uVar1 < param_1) {
    caml_raise_out_of_memory();
  }
  return;
}



void start_cycle(void)

{
  caml_gc_message(1,"Starting new major GC cycle\n",0);
  caml_darken_all_roots();
  caml_gc_phase = 0;
  caml_gc_subphase = 10;
  markhp = 0;
  return;
}



void realloc_gray_vals(void)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = caml_stat_heap_size;
  if (caml_stat_heap_size < 0) {
    iVar1 = caml_stat_heap_size + 0x7f;
  }
  if (gray_vals_size < (uint)(iVar1 >> 7)) {
    caml_gc_message(8,"Growing gray_vals to %luk bytes\n",(gray_vals_size << 2) >> 9);
    pvVar2 = realloc(gray_vals,gray_vals_size << 3);
    if (pvVar2 == (void *)0x0) {
      caml_gc_message(8,"No room for growing gray_vals\n",0);
      gray_vals_cur = gray_vals;
      heap_is_pure = 0;
    }
    else {
      gray_vals_cur = (void *)((int)pvVar2 + gray_vals_size * 4);
      gray_vals_end = (void *)((int)pvVar2 + gray_vals_size * 8);
      gray_vals = pvVar2;
      gray_vals_size = gray_vals_size * 2;
    }
  }
  else {
    gray_vals_cur = (void *)((gray_vals_size >> 1) * 4 + (int)gray_vals);
    heap_is_pure = 0;
  }
  return;
}



void __regparm3 mark_slice(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint **ppuVar8;
  uint **ppuVar9;
  uint uVar10;
  uint **local_38;
  int local_28;
  uint local_24;
  
  caml_gc_message(0x40,"Marking %ld words\n",param_1);
  caml_gc_message(0x40,"Subphase = %ld\n",caml_gc_subphase);
  local_38 = gray_vals_cur;
  local_28 = param_1;
  if (0 < param_1) {
    do {
      if (gray_vals < local_38) {
        local_38 = local_38 + -1;
        puVar5 = *local_38;
        uVar10 = puVar5[-1];
        puVar5[-1] = uVar10 | 0x300;
        uVar6 = uVar10 >> 10;
        if (((byte)uVar10 < 0xfb) && (uVar6 != 0)) {
          uVar10 = 0;
          do {
            puVar4 = (uint *)puVar5[uVar10];
            if ((((uint)puVar4 & 1) == 0) &&
               ((*(byte *)((&caml_page_table)[(uint)puVar4 >> 0x17] + ((uint)puVar4 >> 0xc & 0x7ff))
                & 1) != 0)) {
              uVar7 = puVar4[-1];
              if ((uVar7 & 0xff) == 0xfa) {
                uVar2 = *puVar4;
                if (((uVar2 & 1) != 0) ||
                   (((((*(byte *)((&caml_page_table)[uVar2 >> 0x17] + (uVar2 >> 0xc & 0x7ff)) & 7)
                       != 0 && (cVar1 = *(char *)(uVar2 - 4), cVar1 != -6)) && (cVar1 != -10)) &&
                    (cVar1 != -3)))) {
                  puVar5[uVar10] = uVar2;
                }
              }
              else if ((uVar7 & 0xff) == 0xf9) {
                puVar4 = puVar4 + -(uVar7 >> 10);
                uVar7 = puVar4[-1];
              }
              if ((uVar7 & 0x300) == 0) {
                puVar4[-1] = uVar7 & 0xfffffcff | 0x100;
                *local_38 = puVar4;
                gray_vals_cur = local_38 + 1;
                local_38 = gray_vals_cur;
                if (gray_vals_end <= gray_vals_cur) {
                  realloc_gray_vals();
                  local_38 = gray_vals_cur;
                }
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar6);
        }
        local_28 = local_28 + ~uVar6;
      }
      else if (markhp == (uint *)0x0) {
        if (heap_is_pure == 0) {
          heap_is_pure = 1;
          chunk = caml_heap_start;
          markhp = caml_heap_start;
          limit = (uint *)((int)caml_heap_start + caml_heap_start[-2]);
        }
        else if (caml_gc_subphase == 0xb) {
          weak_prev = (undefined4 *)*weak_prev;
          if (weak_prev == (undefined4 *)0x0) {
            caml_gc_subphase = 0xc;
            weak_prev = &caml_weak_list_head;
          }
          else {
            uVar10 = (uint)weak_prev[-1] >> 10;
            if (1 < uVar10) {
              local_24 = 1;
              do {
                ppuVar8 = (uint **)weak_prev[local_24];
                if (((ppuVar8 != (uint **)caml_weak_none) && (((uint)ppuVar8 & 1) == 0)) &&
                   ((*(byte *)((&caml_page_table)[(uint)ppuVar8 >> 0x17] +
                              ((uint)ppuVar8 >> 0xc & 0x7ff)) & 1) != 0)) {
                  ppuVar9 = ppuVar8 + -1;
                  if ((*(char *)ppuVar9 == -6) && (puVar5 = *ppuVar8, ((uint)puVar5 & 1) == 0)) {
                    while( true ) {
                      uVar6 = (uint)puVar5 >> 0xc & 0x7ff;
                      if ((*(byte *)((&caml_page_table)[(uint)puVar5 >> 0x17] + uVar6) & 7) == 0)
                      break;
                      ppuVar8 = (uint **)(puVar5 + -1);
                      cVar1 = *(char *)ppuVar8;
                      if (((cVar1 == -6) || (cVar1 == -10)) || (cVar1 == -3)) break;
                      weak_prev[local_24] = puVar5;
                      if (((puVar5 == (uint *)caml_weak_none) || (((uint)puVar5 & 1) != 0)) ||
                         ((*(byte *)((&caml_page_table)[(uint)puVar5 >> 0x17] + uVar6) & 1) == 0))
                      goto LAB_08063be1;
                      ppuVar9 = ppuVar8;
                      if ((*(char *)ppuVar8 != -6) ||
                         (puVar5 = (uint *)*puVar5, ((uint)puVar5 & 1) != 0)) break;
                    }
                  }
                  if (((uint)*ppuVar9 & 0x300) == 0) {
                    weak_prev[local_24] = caml_weak_none;
                  }
                }
LAB_08063be1:
                local_24 = local_24 + 1;
              } while (local_24 != uVar10);
            }
            local_28 = local_28 + ~uVar10;
          }
        }
        else if (caml_gc_subphase < 0xc) {
          if (caml_gc_subphase == 10) {
            caml_gc_subphase = 0xb;
            weak_prev = &caml_weak_list_head;
          }
        }
        else {
          gray_vals_cur = local_38;
          if (caml_gc_subphase == 0xc) {
            puVar3 = (undefined4 *)*weak_prev;
            if (puVar3 == (undefined4 *)0x0) {
              caml_final_update();
              caml_gc_subphase = 0xd;
              local_38 = gray_vals_cur;
            }
            else {
              if ((puVar3[-1] & 0x300) == 0) {
                *weak_prev = *puVar3;
                puVar3 = weak_prev;
              }
              weak_prev = puVar3;
              local_28 = local_28 + -1;
            }
          }
          else if (caml_gc_subphase == 0xd) {
            caml_gc_sweep_hp = caml_heap_start;
            caml_fl_init_merge();
            caml_fl_size_at_phase_change = caml_fl_cur_size;
            gray_vals_cur = local_38;
            chunk = caml_heap_start;
            limit = (uint *)((int)caml_heap_start + caml_heap_start[-2]);
            caml_gc_sweep_hp = caml_heap_start;
            caml_gc_phase = 1;
            return;
          }
        }
      }
      else if (markhp == limit) {
        chunk = (uint *)chunk[-1];
        if (chunk == (uint *)0x0) {
          markhp = (uint *)0x0;
        }
        else {
          limit = (uint *)((int)chunk + chunk[-2]);
          markhp = chunk;
        }
      }
      else {
        if ((*markhp & 0x300) == 0x100) {
          *local_38 = markhp + 1;
          local_38 = local_38 + 1;
        }
        markhp = markhp + (*markhp >> 10) + 1;
      }
    } while (0 < local_28);
  }
  gray_vals_cur = local_38;
  return;
}



void caml_darken(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (((param_1 & 1) == 0) &&
     ((*(byte *)((&caml_page_table)[param_1 >> 0x17] + (param_1 >> 0xc & 0x7ff)) & 1) != 0)) {
    uVar2 = *(uint *)(param_1 - 4);
    uVar1 = uVar2 & 0xff;
    if (uVar1 == 0xf9) {
      param_1 = param_1 + (uVar2 >> 10) * -4;
      uVar2 = *(uint *)(param_1 - 4);
      uVar1 = uVar2 & 0xff;
    }
    if ((uVar2 & 0x300) == 0) {
      if (uVar1 < 0xfb) {
        *(uint *)(param_1 - 4) = uVar2 & 0xfffffcff | 0x100;
        *gray_vals_cur = param_1;
        gray_vals_cur = gray_vals_cur + 1;
        if (gray_vals_end <= gray_vals_cur) {
          realloc_gray_vals();
        }
      }
      else {
        *(uint *)(param_1 - 4) = uVar2 | 0x300;
      }
    }
  }
  return;
}



void __regparm3 sweep_slice(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  caml_gc_message(0x40,"Sweeping %ld words\n",param_1);
  if (0 < param_1) {
    do {
      puVar3 = caml_gc_sweep_hp;
      if (caml_gc_sweep_hp < limit) {
        uVar2 = *caml_gc_sweep_hp;
        param_1 = param_1 + ~(uVar2 >> 10);
        puVar4 = caml_gc_sweep_hp + (uVar2 >> 10) + 1;
        if ((uVar2 & 0x300) == 0) {
          if (((char)uVar2 == -1) &&
             (puVar1 = caml_gc_sweep_hp + 1, *(code **)(*puVar1 + 4) != (code *)0x0)) {
            puVar5 = caml_gc_sweep_hp + 1;
            caml_gc_sweep_hp = puVar4;
            (**(code **)(*puVar1 + 4))(puVar5);
            puVar4 = caml_gc_sweep_hp;
          }
          caml_gc_sweep_hp = puVar4;
          caml_gc_sweep_hp = (uint *)caml_fl_merge_block(puVar3 + 1);
        }
        else if ((uVar2 & 0x300) == 0x200) {
          caml_fl_merge = caml_gc_sweep_hp + 1;
          caml_gc_sweep_hp = puVar4;
        }
        else {
          *caml_gc_sweep_hp = uVar2 & 0xfffffcff;
          caml_gc_sweep_hp = puVar4;
        }
      }
      else {
        chunk = (uint *)chunk[-1];
        if (chunk == (uint *)0x0) {
          caml_stat_major_collections = caml_stat_major_collections + 1;
          caml_gc_phase = 2;
          return;
        }
        limit = (uint *)((int)chunk + chunk[-2]);
        caml_gc_sweep_hp = chunk;
      }
    } while (0 < param_1);
  }
  return;
}



void caml_finish_major_cycle(void)

{
  if (caml_gc_phase == 2) {
    start_cycle();
  }
  while (caml_gc_phase == 0) {
    mark_slice();
  }
  while (caml_gc_phase == 1) {
    sweep_slice();
  }
  caml_stat_major_words = (double)(ulonglong)caml_allocated_words + caml_stat_major_words;
  caml_allocated_words = 0;
  return;
}



int caml_major_collection_slice(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong local_24;
  
  if (caml_gc_phase == 2) {
    start_cycle();
  }
  local_24 = (ulonglong)(caml_percent_free + 100);
  fVar4 = (float)local_24;
  local_24 = (ulonglong)caml_percent_free;
  fVar2 = (float)local_24;
  local_24 = (ulonglong)caml_allocated_words;
  fVar1 = (float)local_24;
  local_24 = (ulonglong)(caml_stat_heap_size >> 2);
  fVar1 = (((fVar1 * 3.0 * fVar4) / (float)local_24) / fVar2) * 0.5;
  if (caml_dependent_size == 0) {
    fVar2 = 0.0;
  }
  else {
    local_24 = (ulonglong)caml_dependent_allocated;
    fVar3 = (float)local_24;
    local_24 = (ulonglong)caml_dependent_size;
    fVar2 = ((float)local_24 / (fVar3 * fVar4)) / fVar2;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = (float)caml_extra_heap_resources;
  if ((float)caml_extra_heap_resources <= fVar2) {
    fVar1 = fVar2;
  }
  caml_gc_message(0x40,"allocated_words = %lu\n",caml_allocated_words);
  local_24._0_4_ = (undefined4)(longlong)ROUND(caml_extra_heap_resources * 1000000.0);
  caml_gc_message(0x40,"extra_heap_resources = %luu\n",(undefined4)local_24);
  local_24._0_4_ = (undefined4)(longlong)ROUND(fVar1 * 1000000.0);
  caml_gc_message(0x40,"amount of work to do = %luu\n",(undefined4)local_24);
  if (caml_gc_phase == 0) {
    local_24 = (ulonglong)(caml_stat_heap_size >> 2);
    fVar2 = (float)local_24;
    local_24 = (ulonglong)(caml_percent_free + 100);
    fVar1 = (fVar2 * fVar1 * 250.0) / (float)local_24;
  }
  else {
    local_24 = (ulonglong)(caml_stat_heap_size >> 2);
    fVar1 = ((float)local_24 * fVar1 * 5.0) / 3.0;
  }
  caml_gc_message(0x40,"ordered work = %ld words\n",param_1);
  caml_gc_message(0x40,"computed work = %ld words\n",(int)ROUND(fVar1));
  if (caml_gc_phase == 0) {
    mark_slice();
    caml_gc_message(2,&DAT_08071005,0);
  }
  else {
    sweep_slice();
    caml_gc_message(2,&DAT_08071007,0);
  }
  if (caml_gc_phase == 2) {
    caml_compact_heap_maybe();
  }
  local_24 = (ulonglong)caml_allocated_words;
  caml_stat_major_words = (double)local_24 + caml_stat_major_words;
  caml_allocated_words = 0;
  caml_dependent_allocated = 0;
  caml_extra_heap_resources = 0.0;
  return (int)ROUND(fVar1);
}



void __regparm3 clear_table(undefined4 *param_1)

{
  param_1[3] = *param_1;
  param_1[4] = param_1[2];
  return;
}



void caml_oldify_one(int **param_1,int **param_2)

{
  int **ppiVar1;
  char cVar2;
  uint uVar3;
  int **ppiVar4;
  int *piVar5;
  uint uVar6;
  int **ppiVar7;
  
LAB_0806419b:
  do {
    while( true ) {
      ppiVar7 = param_1;
      if (((((uint)ppiVar7 & 1) != 0) || (caml_young_end <= ppiVar7)) ||
         (ppiVar7 <= caml_young_start)) {
        *param_2 = (int *)ppiVar7;
        return;
      }
      ppiVar1 = ppiVar7 + -1;
      piVar5 = *ppiVar1;
      if (piVar5 == (int *)0x0) {
        *param_2 = *ppiVar7;
        return;
      }
      uVar3 = (uint)piVar5 & 0xff;
      if (0xf8 < uVar3) break;
      ppiVar4 = (int **)caml_alloc_shr((uint)piVar5 >> 10,uVar3);
      *param_2 = (int *)ppiVar4;
      param_1 = (int **)*ppiVar7;
      *ppiVar1 = (int *)0x0;
      *ppiVar7 = (int *)ppiVar4;
      param_2 = ppiVar4;
      if (1 < (uint)piVar5 >> 10) {
        *ppiVar4 = (int *)param_1;
        ppiVar4[1] = (int *)oldify_todo_list;
        oldify_todo_list = ppiVar7;
        return;
      }
    }
    if (0xfa < uVar3) {
      uVar6 = (uint)piVar5 >> 10;
      piVar5 = (int *)caml_alloc_shr(uVar6,uVar3);
      if (uVar6 != 0) {
        uVar3 = 0;
        do {
          piVar5[uVar3] = (int)ppiVar7[uVar3];
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar6);
      }
      *ppiVar1 = (int *)0x0;
      *ppiVar7 = piVar5;
      *param_2 = piVar5;
      return;
    }
    if (uVar3 == 0xf9) {
      caml_oldify_one(ppiVar7 + -((uint)piVar5 >> 10),param_2);
      *param_2 = *param_2 + ((uint)piVar5 >> 10);
      return;
    }
    param_1 = (int **)*ppiVar7;
  } while (((uint)param_1 & 1) != 0);
  if ((*(byte *)((&caml_page_table)[(uint)param_1 >> 0x17] + ((uint)param_1 >> 0xc & 0x7ff)) & 7) !=
      0) goto code_r0x080642be;
  goto LAB_080642e9;
code_r0x080642be:
  ppiVar4 = param_1 + -1;
  if (*ppiVar4 == (int *)0x0) {
    ppiVar4 = (int **)(*param_1 + -1);
  }
  cVar2 = *(char *)ppiVar4;
  if (((cVar2 == -6) || (cVar2 == -10)) || (cVar2 == -3)) {
LAB_080642e9:
    ppiVar4 = (int **)caml_alloc_shr(1,0xfa);
    *param_2 = (int *)ppiVar4;
    *ppiVar1 = (int *)0x0;
    *ppiVar7 = (int *)ppiVar4;
    param_2 = ppiVar4;
  }
  goto LAB_0806419b;
}



void caml_oldify_mopup(void)

{
  int **ppiVar1;
  int *piVar2;
  int *piVar3;
  int **ppiVar4;
  uint local_20;
  
  while (piVar3 = oldify_todo_list, oldify_todo_list != (int *)0x0) {
    ppiVar1 = (int **)*oldify_todo_list;
    ppiVar4 = ppiVar1 + 1;
    oldify_todo_list = *ppiVar4;
    piVar2 = *ppiVar1;
    if (((((uint)piVar2 & 1) == 0) && (piVar2 < caml_young_end)) && (caml_young_start < piVar2)) {
      caml_oldify_one(piVar2,ppiVar1);
    }
    if (1 < (uint)ppiVar1[-1] >> 10) {
      local_20 = 1;
      do {
        piVar2 = (int *)piVar3[local_20];
        if (((((uint)piVar2 & 1) == 0) && (piVar2 < caml_young_end)) && (caml_young_start < piVar2))
        {
          caml_oldify_one(piVar2,ppiVar4);
        }
        else {
          *ppiVar4 = piVar2;
        }
        local_20 = local_20 + 1;
        ppiVar4 = ppiVar4 + 1;
      } while (local_20 < (uint)ppiVar1[-1] >> 10);
    }
  }
  return;
}



void caml_empty_minor_heap(void)

{
  uint *puVar1;
  uint *puVar2;
  uint **ppuVar3;
  undefined4 *puVar4;
  
  if (caml_young_ptr != caml_young_end) {
    caml_in_minor_collection = 1;
    caml_gc_message(2,&DAT_0807101c,0);
    caml_oldify_local_roots();
    puVar4 = caml_ref_table;
    if (caml_ref_table < DAT_0807eb48) {
      do {
        caml_oldify_one(*(undefined4 *)*puVar4,(undefined4 *)*puVar4);
        puVar4 = puVar4 + 1;
      } while (puVar4 < DAT_0807eb48);
    }
    caml_oldify_mopup();
    ppuVar3 = caml_weak_ref_table;
    if (caml_weak_ref_table < DAT_0807eb64) {
      do {
        puVar1 = *ppuVar3;
        puVar2 = (uint *)*puVar1;
        if (((((uint)puVar2 & 1) == 0) && (puVar2 < caml_young_end)) && (caml_young_start < puVar2))
        {
          if (puVar2[-1] == 0) {
            *puVar1 = *puVar2;
          }
          else {
            *puVar1 = (uint)caml_weak_none;
          }
        }
        ppuVar3 = ppuVar3 + 1;
      } while (ppuVar3 < DAT_0807eb64);
    }
    if (caml_young_ptr < caml_young_start) {
      caml_young_ptr = caml_young_start;
    }
    caml_stat_minor_words =
         (double)(ulonglong)(caml_young_end - caml_young_ptr >> 2) + caml_stat_minor_words;
    caml_young_ptr = caml_young_end;
    caml_young_limit = caml_young_start;
    clear_table();
    clear_table();
    caml_gc_message(2,">",0);
    caml_in_minor_collection = 0;
  }
  caml_final_empty_young();
  return;
}



void caml_minor_collection(void)

{
  int iVar1;
  
  iVar1 = caml_allocated_words;
  caml_empty_minor_heap();
  caml_stat_promoted_words =
       (double)(ulonglong)(uint)(caml_allocated_words - iVar1) + caml_stat_promoted_words;
  caml_stat_minor_collections = caml_stat_minor_collections + 1;
  caml_major_collection_slice(0);
  caml_force_major_slice = 0;
  caml_final_do_calls();
  caml_empty_minor_heap();
  return;
}



undefined4 caml_check_urgent_gc(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  
  uVar1 = caml_local_roots;
  if (caml_force_major_slice != 0) {
    local_2c = caml_local_roots;
    local_24 = 1;
    local_28 = 1;
    local_20 = &param_1;
    caml_local_roots = &local_2c;
    caml_minor_collection();
  }
  caml_local_roots = (undefined4 *)uVar1;
  return param_1;
}



void __regparm3 reset_table(int *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  if (*param_1 != 0) {
    caml_stat_free(*param_1);
  }
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  return;
}



void caml_set_minor_heap_size(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20 [4];
  
  if (caml_young_ptr != caml_young_end) {
    caml_minor_collection();
  }
  iVar2 = caml_aligned_malloc(param_1,0,local_20);
  iVar3 = iVar2;
  if (iVar2 == 0) {
    iVar3 = caml_raise_out_of_memory();
  }
  iVar1 = iVar3 + param_1;
  iVar3 = caml_page_table_add(2,iVar3,iVar1);
  if (iVar3 != 0) {
    caml_raise_out_of_memory();
  }
  if (caml_young_start != 0) {
    caml_page_table_remove(2,caml_young_start,caml_young_end);
    free(caml_young_base);
  }
  caml_young_base = (void *)local_20[0];
  caml_minor_heap_size = param_1;
  caml_young_start = iVar2;
  caml_young_end = iVar1;
  caml_young_ptr = iVar1;
  caml_young_limit = iVar2;
  reset_table();
  reset_table();
  return;
}



void caml_alloc_table(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  param_1[5] = param_2;
  param_1[6] = param_3;
  iVar2 = caml_stat_alloc((param_3 + param_2) * 4);
  if (*param_1 != 0) {
    caml_stat_free(*param_1);
  }
  *param_1 = iVar2;
  param_1[3] = iVar2;
  iVar1 = iVar2 + param_1[5] * 4;
  param_1[2] = iVar1;
  param_1[4] = iVar1;
  param_1[1] = iVar2 + (param_1[5] + param_1[6]) * 4;
  return;
}



void caml_realloc_ref_table(void **param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  void *pvVar5;
  size_t __size;
  
  pvVar2 = *param_1;
  if (pvVar2 == (void *)0x0) {
    caml_alloc_table(param_1,caml_minor_heap_size >> 5,0x100);
  }
  else if (param_1[4] == param_1[2]) {
    caml_gc_message(8,"ref_table threshold crossed\n",0);
    param_1[4] = param_1[1];
    caml_urge_major_slice();
  }
  else {
    pvVar3 = param_1[3];
    pvVar5 = param_1[5];
    param_1[5] = (void *)((int)pvVar5 * 2);
    __size = (int)((int)(void *)((int)pvVar5 * 2) + (int)param_1[6]) * 4;
    sVar4 = __size + 0x3ff;
    if (-1 < (int)__size) {
      sVar4 = __size;
    }
    caml_gc_message(8,"Growing ref_table to %ldk bytes\n",(int)sVar4 >> 10);
    pvVar5 = realloc(*param_1,__size);
    *param_1 = pvVar5;
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)caml_fatal_error("Fatal error: ref_table overflow\n");
    }
    pvVar1 = (void *)((int)pvVar5 + ((int)param_1[6] + (int)param_1[5]) * 4);
    param_1[1] = pvVar1;
    param_1[2] = (void *)((int)pvVar5 + (int)param_1[5] * 4);
    param_1[3] = (void *)((int)pvVar5 + ((int)pvVar3 - (int)pvVar2 & 0xfffffffcU));
    param_1[4] = pvVar1;
  }
  return;
}



undefined4 caml_page_table_initialize(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    (&caml_page_table)[iVar1] = caml_page_table_empty;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x200);
  return 0;
}



undefined4 caml_allocation_color(uint param_1)

{
  undefined4 uVar1;
  
  if ((caml_gc_phase == 0) || ((caml_gc_phase == 1 && (caml_gc_sweep_hp <= param_1)))) {
    uVar1 = 0x300;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void caml_alloc_dependent_memory(uint param_1)

{
  caml_dependent_size = caml_dependent_size + (param_1 >> 2);
  caml_dependent_allocated = caml_dependent_allocated + (param_1 >> 2);
  return;
}



void caml_free_dependent_memory(uint param_1)

{
  if (caml_dependent_size < param_1 >> 2) {
    caml_dependent_size = 0;
  }
  else {
    caml_dependent_size = caml_dependent_size - (param_1 >> 2);
  }
  return;
}



void caml_stat_resize(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = realloc(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    caml_raise_out_of_memory();
  }
  return;
}



void caml_stat_free(void *param_1)

{
  free(param_1);
  return;
}



void caml_free_for_heap(int param_1)

{
  free(*(void **)(param_1 + -0x10));
  return;
}



void caml_stat_alloc(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
    caml_raise_out_of_memory();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void caml_modify(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  if ((*(byte *)((&caml_page_table)[(uint)param_1 >> 0x17] + ((uint)param_1 >> 0xc & 0x7ff)) & 1) !=
      0) {
    if (caml_gc_phase == 0) {
      caml_darken(uVar1,0);
    }
    if (((((param_2 & 1) == 0) && (param_2 < caml_young_end)) && (caml_young_start < param_2)) &&
       ((((uVar1 & 1) != 0 || (caml_young_end <= uVar1)) || (uVar1 <= caml_young_start)))) {
      if (_DAT_0807eb4c <= DAT_0807eb48) {
        caml_realloc_ref_table(&caml_ref_table);
      }
      *DAT_0807eb48 = param_1;
      DAT_0807eb48 = DAT_0807eb48 + 1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void caml_initialize(uint *param_1,uint param_2)

{
  *param_1 = param_2;
  if (((((param_2 & 1) == 0) && (param_2 < caml_young_end)) && (caml_young_start < param_2)) &&
     ((*(byte *)((&caml_page_table)[(uint)param_1 >> 0x17] + ((uint)param_1 >> 0xc & 0x7ff)) & 1) !=
      0)) {
    if (_DAT_0807eb4c <= DAT_0807eb48) {
      caml_realloc_ref_table(&caml_ref_table);
    }
    *DAT_0807eb48 = param_1;
    DAT_0807eb48 = DAT_0807eb48 + 1;
  }
  return;
}



void caml_adjust_gc_speed(uint param_1,uint param_2)

{
  if (param_2 == 0) {
    param_2 = 1;
  }
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  caml_extra_heap_resources =
       (double)(ulonglong)param_1 / (double)(ulonglong)param_2 + caml_extra_heap_resources;
  if (1.0 < caml_extra_heap_resources) {
    caml_extra_heap_resources = 1.0;
    caml_urge_major_slice();
  }
  if (((float)(ulonglong)(caml_minor_heap_size >> 2) * 0.5) /
      (float)(ulonglong)(caml_stat_heap_size >> 2) < (float)caml_extra_heap_resources) {
    caml_urge_major_slice();
  }
  return;
}



void caml_alloc_for_heap(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_10 [2];
  
  puVar1 = (undefined4 *)caml_aligned_malloc(param_1 + 0x10,0x10,local_10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_1;
    *puVar1 = local_10[0];
  }
  return;
}



undefined4 __regparm3 caml_page_table_modify(uint param_1,byte param_2,byte param_3)

{
  void *pvVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = param_1 >> 0x17;
  if ((undefined1 *)(&caml_page_table)[uVar3] == caml_page_table_empty) {
    pvVar1 = calloc(0x800,1);
    if (pvVar1 == (void *)0x0) {
      return 0xffffffff;
    }
    (&caml_page_table)[uVar3] = pvVar1;
  }
  pbVar2 = (byte *)((param_1 >> 0xc & 0x7ff) + (&caml_page_table)[uVar3]);
  *pbVar2 = ~param_2 & *pbVar2 | param_3;
  return 0;
}



undefined4 caml_page_table_remove(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  
  param_2 = param_2 & 0xfffff000;
  while( true ) {
    if ((param_3 - 1U & 0xfffff000) < param_2) {
      return 0;
    }
    iVar1 = caml_page_table_modify();
    if (iVar1 != 0) break;
    param_2 = param_2 + 0x1000;
  }
  return 0xffffffff;
}



void caml_shrink_heap(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != caml_heap_start) {
    caml_stat_heap_size = caml_stat_heap_size - *(int *)(param_1 + -8);
    caml_gc_message(4,"Shrinking heap to %luk bytes\n",caml_stat_heap_size >> 10);
    caml_stat_heap_chunks = caml_stat_heap_chunks + -1;
    puVar2 = &caml_heap_start;
    for (iVar1 = caml_heap_start; param_1 != iVar1; iVar1 = *(int *)(iVar1 + -4)) {
      puVar2 = (undefined4 *)(iVar1 + -4);
    }
    *puVar2 = *(undefined4 *)(param_1 + -4);
    caml_page_table_remove(1,param_1,param_1 + *(int *)(param_1 + -8));
    caml_free_for_heap(param_1);
  }
  return;
}



undefined4 caml_page_table_add(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  
  param_2 = param_2 & 0xfffff000;
  while( true ) {
    if ((param_3 - 1U & 0xfffff000) < param_2) {
      return 0;
    }
    iVar1 = caml_page_table_modify();
    if (iVar1 != 0) break;
    param_2 = param_2 + 0x1000;
  }
  return 0xffffffff;
}



undefined4 caml_add_to_heap(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  
  caml_gc_message(4,"Growing heap to %luk bytes\n",
                  (uint)(caml_stat_heap_size + *(int *)(param_1 - 8)) >> 10);
  iVar1 = caml_page_table_add(1,param_1,param_1 + *(int *)(param_1 - 8));
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar3 = caml_heap_start;
    if ((caml_heap_start == 0) || (param_1 <= caml_heap_start)) {
      puVar4 = &caml_heap_start;
    }
    else {
      do {
        puVar4 = (uint *)(uVar3 - 4);
        uVar3 = *(uint *)(uVar3 - 4);
        if (uVar3 == 0) break;
      } while (uVar3 < param_1);
    }
    *(uint *)(param_1 - 4) = uVar3;
    *puVar4 = param_1;
    caml_stat_heap_chunks = caml_stat_heap_chunks + 1;
    caml_stat_heap_size = caml_stat_heap_size + *(int *)(param_1 - 8);
    uVar2 = 0;
    if (caml_stat_top_heap_size < caml_stat_heap_size) {
      caml_stat_top_heap_size = caml_stat_heap_size;
    }
  }
  return uVar2;
}



int * caml_alloc_shr(uint param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  if (0x3fffff < param_1) {
    caml_raise_out_of_memory();
  }
  piVar2 = (int *)caml_fl_allocate(param_1);
  if (piVar2 != (int *)0x0) goto LAB_08064ebe;
  uVar3 = caml_round_heap_chunk_size((param_1 + 1 + (param_1 / 100) * caml_percent_free) * 4);
  piVar4 = (int *)caml_alloc_for_heap(uVar3);
  piVar2 = piVar4;
  if (piVar4 == (int *)0x0) {
    caml_gc_message(4,"No room for growing heap\n",0);
LAB_08064e92:
    if (caml_in_minor_collection != 0) {
      caml_fatal_error("Fatal error: out of memory.\n");
    }
    caml_raise_out_of_memory();
  }
  else {
    for (; uVar1 = (uVar3 >> 2) - 1, 0x3fffff < uVar1; uVar3 = uVar3 - 0x1000000) {
      *piVar2 = -0x200;
      piVar2[1] = (int)(piVar2 + 0x400001);
      piVar4[2] = (int)(piVar2 + 0x400001);
      piVar2 = piVar2 + 0x400000;
    }
    if (uVar3 < 2) {
      piVar2[1] = 0;
      if (uVar3 == 1) {
        *piVar2 = 0;
      }
    }
    else {
      *piVar2 = uVar1 * 0x400 + 0x200;
      piVar4[2] = (int)(piVar2 + 1);
      piVar2[1] = 0;
    }
    iVar5 = caml_add_to_heap(piVar4);
    if (iVar5 != 0) {
      caml_free_for_heap(piVar4);
      goto LAB_08064e92;
    }
    piVar4 = piVar4 + 1;
    if (piVar4 == (int *)0x0) goto LAB_08064e92;
  }
  caml_fl_add_blocks(piVar4);
  piVar2 = (int *)caml_fl_allocate(param_1);
LAB_08064ebe:
  if ((caml_gc_phase == 0) || ((caml_gc_phase == 1 && (caml_gc_sweep_hp <= piVar2)))) {
    *piVar2 = param_2 + 0x300 + param_1 * 0x400;
  }
  else {
    *piVar2 = param_1 * 0x400 + param_2;
  }
  caml_allocated_words = param_1 + 1 + caml_allocated_words;
  if (caml_minor_heap_size >> 2 < caml_allocated_words) {
    caml_urge_major_slice();
  }
  return piVar2 + 1;
}



uint caml_convert_flag_list(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (int *)0x1) {
    do {
      uVar1 = uVar1 | *(uint *)(param_2 + (*param_1 >> 1) * 4);
      param_1 = (int *)param_1[1];
    } while (param_1 != (int *)0x1);
  }
  return uVar1;
}



undefined4 caml_update_dummy(int param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (uint *)(param_2 + -4);
  uVar3 = *puVar1;
  cVar2 = *(char *)puVar1;
  *(char *)(param_1 + -4) = cVar2;
  if (cVar2 == -2) {
    uVar3 = *puVar1;
    if (uVar3 >> 0xb != 0) {
      uVar4 = 0;
      do {
        *(undefined8 *)(param_1 + uVar4 * 8) = *(undefined8 *)(param_2 + uVar4 * 8);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3 >> 0xb);
    }
  }
  else {
    uVar4 = 0;
    if (uVar3 >> 10 != 0) {
      do {
        caml_modify(param_1,*(undefined4 *)(param_2 + uVar4 * 4));
        uVar4 = uVar4 + 1;
        param_1 = param_1 + 4;
      } while (uVar4 < uVar3 >> 10);
    }
  }
  return 1;
}



void caml_alloc_final(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = caml_final_custom_operations(param_2);
  caml_alloc_custom(uVar1,param_1 << 2,param_3,param_4);
  return;
}



int * caml_alloc_small(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -(param_1 * 4 + 4);
  caml_young_ptr = (int *)(iVar1 + (int)caml_young_ptr);
  if (caml_young_ptr < caml_young_limit) {
    caml_young_ptr = caml_young_ptr + param_1 + 1;
    caml_minor_collection();
    caml_young_ptr = (int *)((int)caml_young_ptr + iVar1);
  }
  *caml_young_ptr = param_2 + 0x300 + param_1 * 0x400;
  return caml_young_ptr + 1;
}



void caml_alloc_string(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = param_1 + 4;
  uVar4 = uVar1 >> 2;
  if (uVar4 < 0x101) {
    iVar5 = (uVar1 & 0xfffffffc) + 4;
    iVar6 = -iVar5;
    caml_young_ptr = (int *)(iVar6 + (int)caml_young_ptr);
    if (caml_young_ptr < caml_young_limit) {
      caml_young_ptr = (int *)((int)caml_young_ptr + iVar5);
      caml_minor_collection();
      caml_young_ptr = (int *)((int)caml_young_ptr + iVar6);
    }
    *caml_young_ptr = uVar4 * 0x400 + 0x3fc;
    piVar3 = caml_young_ptr + 1;
  }
  else {
    uVar2 = caml_alloc_shr(uVar4,0xfc);
    piVar3 = (int *)caml_check_urgent_gc(uVar2);
  }
  *(undefined4 *)((int)piVar3 + ((uVar1 & 0xfffffffc) - 4)) = 0;
  iVar5 = (uVar1 & 0xfffffffc) - 1;
  *(char *)((int)piVar3 + iVar5) = (char)iVar5 - (char)param_1;
  return;
}



void * caml_copy_string(char *param_1)

{
  char cVar1;
  void *__dest;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  __dest = (void *)caml_alloc_string(~uVar2 - 1);
  memmove(__dest,param_1,~uVar2 - 1);
  return __dest;
}



int * caml_alloc(uint param_1,uint param_2)

{
  int *piVar1;
  void *__s;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = &DAT_080821c4 + param_2;
  if (param_1 != 0) {
    if (param_1 < 0x101) {
      iVar4 = -(param_1 * 4 + 4);
      caml_young_ptr = (int *)(iVar4 + (int)caml_young_ptr);
      if (caml_young_ptr < caml_young_limit) {
        caml_young_ptr = caml_young_ptr + param_1 + 1;
        caml_minor_collection();
        caml_young_ptr = (int *)((int)caml_young_ptr + iVar4);
      }
      *caml_young_ptr = param_2 + 0x300 + param_1 * 0x400;
      piVar1 = caml_young_ptr;
      piVar2 = caml_young_ptr + 1;
      if (param_2 < 0xfb) {
        uVar3 = 0;
        do {
          piVar1[uVar3 + 1] = 0;
          uVar3 = uVar3 + 1;
        } while (uVar3 != param_1);
      }
    }
    else {
      __s = (void *)caml_alloc_shr(param_1,param_2);
      if (param_2 < 0xfb) {
        memset(__s,0,param_1 << 2);
      }
      piVar2 = (int *)caml_check_urgent_gc(__s);
    }
  }
  return piVar2;
}



undefined4 * caml_alloc_dummy_float(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_080821c4;
  if ((param_1 & 0xfffffffe) != 0) {
    puVar1 = (undefined4 *)caml_alloc(param_1 & 0xfffffffe,0);
  }
  return puVar1;
}



undefined4 * caml_alloc_dummy(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_080821c4;
  if (param_1 >> 1 != 0) {
    puVar1 = (undefined4 *)caml_alloc(param_1 >> 1,0);
  }
  return puVar1;
}



undefined4 * caml_alloc_array(code *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 **local_34;
  undefined4 *local_24;
  undefined4 local_20 [4];
  
  uVar1 = caml_local_roots;
  local_20[0] = 0;
  local_24 = (undefined4 *)0x0;
  local_44 = caml_local_roots;
  local_3c = 1;
  local_40 = 2;
  local_38 = local_20;
  local_34 = &local_24;
  if (*param_2 != 0) {
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
    } while (param_2[uVar2] != 0);
    if (uVar2 != 0) {
      caml_local_roots = &local_44;
      local_24 = (undefined4 *)caml_alloc(uVar2,0);
      uVar3 = 0;
      do {
        local_20[0] = (*param_1)(*param_2);
        caml_modify(local_24 + uVar3,local_20[0]);
        uVar3 = uVar3 + 1;
        param_2 = param_2 + 1;
      } while (uVar3 < uVar2);
      caml_local_roots = (undefined4 *)uVar1;
      return local_24;
    }
  }
  return &DAT_080821c4;
}



void caml_copy_string_array(undefined4 param_1)

{
  caml_alloc_array(caml_copy_string,param_1);
  return;
}



void caml_alloc_tuple(undefined4 param_1)

{
  caml_alloc(param_1,0);
  return;
}



void compare_free_stack(void)

{
  if ((undefined4 *)compare_stack != &compare_stack_init) {
    free(compare_stack);
    compare_stack = (undefined *)&compare_stack_init;
    compare_stack_limit = (undefined *)&locale_is_set_2848;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08065740)
// WARNING: Removing unreachable block (ram,0x08065744)
// WARNING: Removing unreachable block (ram,0x0806574a)
// WARNING: Removing unreachable block (ram,0x080656aa)
// WARNING: Removing unreachable block (ram,0x080656b6)
// WARNING: Removing unreachable block (ram,0x080656bc)
// WARNING: Type propagation algorithm not settling

int compare_stack_overflow(void)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int extraout_ECX;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  code *extraout_EDX;
  code *pcVar12;
  int *piVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  bool bVar17;
  byte bVar18;
  ulonglong uVar19;
  undefined4 *puStack_50;
  double *pdStack_40;
  double *pdStack_3c;
  
  bVar18 = 0;
  caml_gc_message(4,"Stack overflow in structural comparison\n",0);
  compare_free_stack();
  uVar19 = caml_raise_out_of_memory();
  piVar13 = (int *)compare_stack;
LAB_080653e4:
  puVar5 = compare_stack;
  pdStack_40 = (double *)(uVar19 >> 0x20);
  pdStack_3c = (double *)uVar19;
  bVar17 = pdStack_3c != pdStack_40;
  if ((bVar17) || (extraout_ECX == 0)) {
    if ((uVar19 & 1) == 0) {
      if ((uVar19 & 0x100000000) != 0) {
        if ((*(byte *)((&caml_page_table)[(uint)pdStack_3c >> 0x17] +
                      ((uint)pdStack_3c >> 0xc & 0x7ff)) & 7) == 0) {
          return 1;
        }
        if (*(char *)((int)pdStack_3c + -4) != -6) {
          if (*(char *)((int)pdStack_3c + -4) != -1) {
            return 1;
          }
          if (*(code **)(*(int *)pdStack_3c + 0x18) == (code *)0x0) {
            return 1;
          }
          caml_compare_unordered = 0;
          iVar6 = (**(code **)(*(int *)pdStack_3c + 0x18))(uVar19);
          goto joined_r0x08065525;
        }
        uVar19 = CONCAT44(pdStack_40,*(undefined4 *)pdStack_3c);
        goto LAB_080653e4;
      }
      if (((*(byte *)((&caml_page_table)[(uint)pdStack_3c >> 0x17] +
                     ((uint)pdStack_3c >> 0xc & 0x7ff)) & 7) == 0) ||
         ((*(byte *)((&caml_page_table)[(uint)pdStack_40 >> 0x17] +
                    ((uint)pdStack_40 >> 0xc & 0x7ff)) & 7) == 0)) {
        if (bVar17) {
          return ((int)pdStack_3c >> 1) - ((int)pdStack_40 >> 1);
        }
      }
      else {
        puVar15 = (uint *)((int)pdStack_3c + -4);
        uVar11 = (uint)*(byte *)puVar15;
        puVar9 = (uint *)((int)pdStack_40 + -4);
        if (uVar11 == 0xfa) {
          uVar19 = CONCAT44(pdStack_40,*(undefined4 *)pdStack_3c);
          goto LAB_080653e4;
        }
        uVar8 = (uint)*(byte *)puVar9;
        if (uVar8 == 0xfa) {
          uVar19 = CONCAT44(*(undefined4 *)pdStack_40,pdStack_3c);
          goto LAB_080653e4;
        }
        if (uVar11 != uVar8) {
          return uVar11 - uVar8;
        }
        switch(*(byte *)puVar15) {
        default:
          uVar11 = *puVar15 >> 10;
          if (uVar11 != *puVar9 >> 10) {
            return uVar11 - (*puVar9 >> 10);
          }
          if (uVar11 != 0) {
            if (1 < uVar11) {
              piVar13 = piVar13 + 3;
              if (compare_stack_limit <= piVar13) {
                iVar6 = (int)compare_stack_limit - (int)compare_stack >> 2;
                if (0xfffff < (uint)(iVar6 * 0x55555556)) {
                  compare_stack_overflow();
                }
                if ((undefined4 *)compare_stack == &compare_stack_init) {
                  puStack_50 = (undefined4 *)malloc(iVar6 * 8);
                  if (puStack_50 == (undefined4 *)0x0) {
                    compare_stack_overflow();
                  }
                  puVar14 = &compare_stack_init;
                  puVar16 = puStack_50;
                  for (iVar10 = 0x300; iVar10 != 0; iVar10 = iVar10 + -1) {
                    *puVar16 = *puVar14;
                    puVar14 = puVar14 + (uint)bVar18 * -2 + 1;
                    puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
                  }
                }
                else {
                  puStack_50 = (undefined4 *)realloc(compare_stack,iVar6 * 8);
                  if (puStack_50 == (undefined4 *)0x0) {
                    compare_stack_overflow();
                  }
                }
                compare_stack = (undefined *)puStack_50;
                compare_stack_limit = (undefined *)(puStack_50 + iVar6 * 2);
                piVar13 = (int *)(((int)piVar13 - (int)puVar5 & 0xfffffffcU) + (int)puStack_50);
              }
              *piVar13 = (int)pdStack_3c + 4;
              piVar13[1] = (int)pdStack_40 + 4;
              piVar13[2] = uVar11 - 1;
            }
            uVar19 = CONCAT44(*(undefined4 *)pdStack_40,*(undefined4 *)pdStack_3c);
            goto LAB_080653e4;
          }
          break;
        case 0xfb:
          compare_free_stack();
          caml_invalid_argument("equal: abstract value");
        case 0xf7:
        case 0xf9:
          compare_free_stack();
          caml_invalid_argument("equal: functional value");
        case 0xf8:
          iVar10 = *(int *)((int)pdStack_3c + 4) >> 1;
          iVar6 = *(int *)((int)pdStack_40 + 4) >> 1;
          if (iVar10 != iVar6) {
            return iVar10 - iVar6;
          }
          break;
        case 0xfc:
          if (bVar17) {
            uVar8 = caml_string_length(pdStack_3c);
            uVar7 = caml_string_length(pdStack_40);
            uVar11 = uVar8;
            if (uVar7 <= uVar8) {
              uVar11 = uVar7;
            }
            iVar6 = memcmp(pdStack_3c,pdStack_40,uVar11);
            if (iVar6 < 0) {
              return 0xffffffff;
            }
            if (0 < iVar6) {
              return 1;
            }
            if (uVar8 != uVar7) {
              return uVar8 - uVar7;
            }
          }
          break;
        case 0xfd:
          dVar1 = *pdStack_3c;
          dVar2 = *pdStack_40;
          if (dVar1 < dVar2) {
            return 0xffffffff;
          }
          if (dVar2 < dVar1) {
            return 1;
          }
          if (dVar1 != dVar2) {
joined_r0x08065730:
            if (extraout_ECX == 0) {
              return 0x80000000;
            }
            return 1;
          }
          break;
        case 0xfe:
          uVar11 = *puVar15 >> 0xb;
          if (uVar11 != *puVar9 >> 0xb) {
            return uVar11 - (*puVar9 >> 0xb);
          }
          if (uVar11 != 0) {
            dVar1 = *pdStack_3c;
            dVar2 = *pdStack_40;
            if (dVar1 < dVar2) {
              return 0xffffffff;
            }
            if (dVar2 < dVar1) {
              return 1;
            }
            uVar8 = 0;
            while( true ) {
              if (dVar1 != dVar2) goto joined_r0x08065730;
              uVar8 = uVar8 + 1;
              if (uVar11 <= uVar8) break;
              dVar1 = pdStack_3c[uVar8];
              dVar2 = pdStack_40[uVar8];
              if (dVar1 < dVar2) {
                return 0xffffffff;
              }
              if (dVar2 < dVar1) {
                return 1;
              }
            }
          }
          break;
        case 0xff:
          pcVar12 = (code *)(*(char ***)pdStack_40)[2];
          if (pcVar12 != (code *)(*(char ***)pdStack_3c)[2]) {
            iVar6 = strcmp(**(char ***)pdStack_3c,**(char ***)pdStack_40);
            if (iVar6 < 0) {
              return 0xffffffff;
            }
            return 1;
          }
          if (pcVar12 == (code *)0x0) {
            compare_free_stack();
            caml_invalid_argument("equal: abstract value");
            pcVar12 = extraout_EDX;
          }
          caml_compare_unordered = 0;
          iVar6 = (*pcVar12)(uVar19);
          goto joined_r0x08065525;
        }
      }
    }
    else if (bVar17) {
      if ((uVar19 & 0x100000000) != 0) {
        return ((int)pdStack_3c >> 1) - ((int)pdStack_40 >> 1);
      }
      if ((*(byte *)((&caml_page_table)[(uint)pdStack_40 >> 0x17] +
                    ((uint)pdStack_40 >> 0xc & 0x7ff)) & 7) == 0) {
        return -1;
      }
      if (*(char *)((int)pdStack_40 + -4) != -6) {
        if (*(char *)((int)pdStack_40 + -4) != -1) {
          return 0xffffffff;
        }
        if (*(code **)(*(int *)pdStack_40 + 0x18) == (code *)0x0) {
          return 0xffffffff;
        }
        caml_compare_unordered = 0;
        iVar6 = (**(code **)(*(int *)pdStack_40 + 0x18))(uVar19);
joined_r0x08065525:
        if ((caml_compare_unordered != 0) && (extraout_ECX == 0)) {
          return -0x80000000;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        goto LAB_08065936;
      }
      uVar19 = CONCAT44(*(undefined4 *)pdStack_40,pdStack_3c);
      goto LAB_080653e4;
    }
  }
LAB_08065936:
  if (piVar13 == (int *)compare_stack) {
    return 0;
  }
  uVar3 = *(undefined4 *)*piVar13;
  *piVar13 = (int)((undefined4 *)*piVar13 + 1);
  uVar4 = *(undefined4 *)piVar13[1];
  piVar13[1] = (int)((undefined4 *)piVar13[1] + 1);
  iVar6 = piVar13[2];
  piVar13[2] = iVar6 + -1;
  uVar19 = CONCAT44(uVar4,uVar3);
  if (iVar6 + -1 == 0) {
    piVar13 = piVar13 + -3;
    uVar19 = CONCAT44(uVar4,uVar3);
  }
  goto LAB_080653e4;
}



// WARNING: Removing unreachable block (ram,0x08065740)
// WARNING: Removing unreachable block (ram,0x08065744)
// WARNING: Removing unreachable block (ram,0x0806574a)
// WARNING: Removing unreachable block (ram,0x080656aa)
// WARNING: Removing unreachable block (ram,0x080656b6)
// WARNING: Removing unreachable block (ram,0x080656bc)
// WARNING: Type propagation algorithm not settling

int __regparm3 compare_val(double *param_1,double *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  code *extraout_EDX;
  code *pcVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  bool bVar15;
  byte bVar16;
  undefined4 *local_34;
  double *local_24;
  double *local_20;
  
  bVar16 = 0;
  piVar11 = (int *)compare_stack;
  local_24 = param_2;
  local_20 = param_1;
LAB_080653e4:
  puVar3 = compare_stack;
  bVar15 = local_20 != local_24;
  if ((bVar15) || (param_3 == 0)) {
    if (((uint)local_20 & 1) == 0) {
      if (((uint)local_24 & 1) != 0) {
        if ((*(byte *)((&caml_page_table)[(uint)local_20 >> 0x17] + ((uint)local_20 >> 0xc & 0x7ff))
            & 7) == 0) {
          return 1;
        }
        if (*(char *)((int)local_20 + -4) != -6) {
          if (*(char *)((int)local_20 + -4) != -1) {
            return 1;
          }
          if (*(code **)(*(int *)local_20 + 0x18) == (code *)0x0) {
            return 1;
          }
          caml_compare_unordered = 0;
          iVar4 = (**(code **)(*(int *)local_20 + 0x18))(local_20,local_24);
          goto joined_r0x08065525;
        }
        local_20 = *(double **)local_20;
        goto LAB_080653e4;
      }
      if (((*(byte *)((&caml_page_table)[(uint)local_20 >> 0x17] + ((uint)local_20 >> 0xc & 0x7ff))
           & 7) == 0) ||
         ((*(byte *)((&caml_page_table)[(uint)local_24 >> 0x17] + ((uint)local_24 >> 0xc & 0x7ff)) &
          7) == 0)) {
        if (bVar15) {
          return ((int)local_20 >> 1) - ((int)local_24 >> 1);
        }
      }
      else {
        puVar13 = (uint *)((int)local_20 + -4);
        uVar9 = (uint)*(byte *)puVar13;
        puVar7 = (uint *)((int)local_24 + -4);
        if (uVar9 == 0xfa) {
          local_20 = *(double **)local_20;
          goto LAB_080653e4;
        }
        uVar6 = (uint)*(byte *)puVar7;
        if (uVar6 == 0xfa) {
          local_24 = *(double **)local_24;
          goto LAB_080653e4;
        }
        if (uVar9 != uVar6) {
          return uVar9 - uVar6;
        }
        switch(*(byte *)puVar13) {
        default:
          uVar9 = *puVar13 >> 10;
          if (uVar9 != *puVar7 >> 10) {
            return uVar9 - (*puVar7 >> 10);
          }
          if (uVar9 != 0) {
            if (1 < uVar9) {
              piVar11 = piVar11 + 3;
              if (compare_stack_limit <= piVar11) {
                iVar4 = (int)compare_stack_limit - (int)compare_stack >> 2;
                if (0xfffff < (uint)(iVar4 * 0x55555556)) {
                  compare_stack_overflow();
                }
                if ((undefined4 *)compare_stack == &compare_stack_init) {
                  local_34 = (undefined4 *)malloc(iVar4 * 8);
                  if (local_34 == (undefined4 *)0x0) {
                    compare_stack_overflow();
                  }
                  puVar12 = &compare_stack_init;
                  puVar14 = local_34;
                  for (iVar8 = 0x300; iVar8 != 0; iVar8 = iVar8 + -1) {
                    *puVar14 = *puVar12;
                    puVar12 = puVar12 + (uint)bVar16 * -2 + 1;
                    puVar14 = puVar14 + (uint)bVar16 * -2 + 1;
                  }
                }
                else {
                  local_34 = (undefined4 *)realloc(compare_stack,iVar4 * 8);
                  if (local_34 == (undefined4 *)0x0) {
                    compare_stack_overflow();
                  }
                }
                compare_stack = (undefined *)local_34;
                compare_stack_limit = (undefined *)(local_34 + iVar4 * 2);
                piVar11 = (int *)(((int)piVar11 - (int)puVar3 & 0xfffffffcU) + (int)local_34);
              }
              *piVar11 = (int)local_20 + 4;
              piVar11[1] = (int)local_24 + 4;
              piVar11[2] = uVar9 - 1;
            }
            local_20 = *(double **)local_20;
            local_24 = *(double **)local_24;
            goto LAB_080653e4;
          }
          break;
        case 0xfb:
          compare_free_stack();
          caml_invalid_argument("equal: abstract value");
        case 0xf7:
        case 0xf9:
          compare_free_stack();
          caml_invalid_argument("equal: functional value");
        case 0xf8:
          iVar8 = *(int *)((int)local_20 + 4) >> 1;
          iVar4 = *(int *)((int)local_24 + 4) >> 1;
          if (iVar8 != iVar4) {
            return iVar8 - iVar4;
          }
          break;
        case 0xfc:
          if (bVar15) {
            uVar6 = caml_string_length(local_20);
            uVar5 = caml_string_length(local_24);
            uVar9 = uVar6;
            if (uVar5 <= uVar6) {
              uVar9 = uVar5;
            }
            iVar4 = memcmp(local_20,local_24,uVar9);
            if (iVar4 < 0) {
              return 0xffffffff;
            }
            if (0 < iVar4) {
              return 1;
            }
            if (uVar6 != uVar5) {
              return uVar6 - uVar5;
            }
          }
          break;
        case 0xfd:
          dVar1 = *local_20;
          dVar2 = *local_24;
          if (dVar1 < dVar2) {
            return 0xffffffff;
          }
          if (dVar2 < dVar1) {
            return 1;
          }
          if (dVar1 != dVar2) {
joined_r0x08065730:
            if (param_3 == 0) {
              return 0x80000000;
            }
            return 1;
          }
          break;
        case 0xfe:
          uVar9 = *puVar13 >> 0xb;
          if (uVar9 != *puVar7 >> 0xb) {
            return uVar9 - (*puVar7 >> 0xb);
          }
          if (uVar9 != 0) {
            dVar1 = *local_20;
            dVar2 = *local_24;
            if (dVar1 < dVar2) {
              return 0xffffffff;
            }
            if (dVar2 < dVar1) {
              return 1;
            }
            uVar6 = 0;
            while( true ) {
              if (dVar1 != dVar2) goto joined_r0x08065730;
              uVar6 = uVar6 + 1;
              if (uVar9 <= uVar6) break;
              dVar1 = local_20[uVar6];
              dVar2 = local_24[uVar6];
              if (dVar1 < dVar2) {
                return 0xffffffff;
              }
              if (dVar2 < dVar1) {
                return 1;
              }
            }
          }
          break;
        case 0xff:
          pcVar10 = (code *)(*(char ***)local_24)[2];
          if (pcVar10 != (code *)(*(char ***)local_20)[2]) {
            iVar4 = strcmp(**(char ***)local_20,**(char ***)local_24);
            if (iVar4 < 0) {
              return 0xffffffff;
            }
            return 1;
          }
          if (pcVar10 == (code *)0x0) {
            compare_free_stack();
            caml_invalid_argument("equal: abstract value");
            pcVar10 = extraout_EDX;
          }
          caml_compare_unordered = 0;
          iVar4 = (*pcVar10)(local_20,local_24);
          goto joined_r0x08065525;
        }
      }
    }
    else if (bVar15) {
      if (((uint)local_24 & 1) != 0) {
        return ((int)local_20 >> 1) - ((int)local_24 >> 1);
      }
      if ((*(byte *)((&caml_page_table)[(uint)local_24 >> 0x17] + ((uint)local_24 >> 0xc & 0x7ff)) &
          7) == 0) {
        return -1;
      }
      if (*(char *)((int)local_24 + -4) != -6) {
        if (*(char *)((int)local_24 + -4) != -1) {
          return 0xffffffff;
        }
        if (*(code **)(*(int *)local_24 + 0x18) == (code *)0x0) {
          return 0xffffffff;
        }
        caml_compare_unordered = 0;
        iVar4 = (**(code **)(*(int *)local_24 + 0x18))(local_20,local_24);
joined_r0x08065525:
        if ((caml_compare_unordered != 0) && (param_3 == 0)) {
          return -0x80000000;
        }
        if (iVar4 != 0) {
          return iVar4;
        }
        goto LAB_08065936;
      }
      local_24 = *(double **)local_24;
      goto LAB_080653e4;
    }
  }
LAB_08065936:
  if (piVar11 == (int *)compare_stack) {
    return 0;
  }
  local_20 = *(double **)*piVar11;
  *piVar11 = (int)((double **)*piVar11 + 1);
  local_24 = *(double **)piVar11[1];
  piVar11[1] = (int)((double **)piVar11[1] + 1);
  iVar4 = piVar11[2];
  piVar11[2] = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    piVar11 = piVar11 + -3;
  }
  goto LAB_080653e4;
}



int caml_greaterequal(void)

{
  int iVar1;
  
  iVar1 = compare_val();
  if ((undefined4 *)compare_stack != &compare_stack_init) {
    compare_free_stack();
  }
  return (iVar1 >> 0x1f & 0xfffffffeU) + 3;
}



char caml_greaterthan(void)

{
  int iVar1;
  
  iVar1 = compare_val();
  if ((undefined4 *)compare_stack != &compare_stack_init) {
    compare_free_stack();
  }
  return (0 < iVar1) * '\x02' + '\x01';
}



char caml_lessequal(void)

{
  int iVar1;
  
  iVar1 = compare_val();
  if ((undefined4 *)compare_stack != &compare_stack_init) {
    compare_free_stack();
  }
  return (iVar1 != -0x80000000 && iVar1 < 1) * '\x02' + '\x01';
}



char caml_lessthan(void)

{
  int iVar1;
  
  iVar1 = compare_val();
  if ((undefined4 *)compare_stack != &compare_stack_init) {
    compare_free_stack();
  }
  return (-(iVar1 + 0x7fffffffU < 0x7fffffff) & 2U) + 1;
}



int caml_notequal(void)

{
  int iVar1;
  
  iVar1 = compare_val();
  if ((undefined4 *)compare_stack != &compare_stack_init) {
    compare_free_stack();
  }
  return (-(uint)(iVar1 == 0) & 0xfffffffe) + 3;
}



char caml_equal(void)

{
  int iVar1;
  
  iVar1 = compare_val();
  if ((undefined4 *)compare_stack != &compare_stack_init) {
    compare_free_stack();
  }
  return (-(iVar1 == 0) & 2U) + 1;
}



int caml_compare(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = compare_val();
  if ((undefined4 *)compare_stack != &compare_stack_init) {
    compare_free_stack();
  }
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = (uint)(0 < iVar1) * 2 + 1;
  }
  return iVar2;
}



char * __regparm3 parse_sign_and_base(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_3 = 1;
  if (*param_1 == '-') {
    *param_3 = 0xffffffff;
    param_1 = param_1 + 1;
  }
  *param_2 = 10;
  if (*param_1 == '0') {
    switch(param_1[1]) {
    case 'B':
    case 'b':
      *param_2 = 2;
      param_1 = param_1 + 2;
      break;
    case 'O':
    case 'o':
      *param_2 = 8;
      param_1 = param_1 + 2;
      break;
    case 'X':
    case 'x':
      *param_2 = 0x10;
      param_1 = param_1 + 2;
    }
  }
  return param_1;
}



int __regparm3 parse_digit(char param_1)

{
  int iVar1;
  
  if ((byte)(param_1 - 0x30U) < 10) {
    iVar1 = param_1 + -0x30;
  }
  else if ((byte)(param_1 + 0xbfU) < 6) {
    iVar1 = param_1 + -0x37;
  }
  else {
    iVar1 = -1;
    if ((byte)(param_1 + 0x9fU) < 6) {
      iVar1 = param_1 + -0x57;
    }
  }
  return iVar1;
}



int caml_int_compare(int param_1,int param_2)

{
  return ((uint)(param_2 < param_1) - (uint)(param_1 < param_2)) * 2 + 1;
}



int int32_cmp(int param_1,int param_2)

{
  return (uint)(*(int *)(param_2 + 4) < *(int *)(param_1 + 4)) -
         (uint)(*(int *)(param_1 + 4) < *(int *)(param_2 + 4));
}



undefined4 int32_hash(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



int caml_int32_to_int(int param_1)

{
  return *(int *)(param_1 + 4) * 2 + 1;
}



int caml_int32_compare(int param_1,int param_2)

{
  return ((uint)(*(int *)(param_2 + 4) < *(int *)(param_1 + 4)) -
         (uint)(*(int *)(param_1 + 4) < *(int *)(param_2 + 4))) * 2 + 1;
}



int int64_cmp(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = 1;
  if ((iVar1 <= iVar2) && ((iVar1 < iVar2 || (*(uint *)(param_1 + 4) <= *(uint *)(param_2 + 4))))) {
    iVar3 = 0;
  }
  iVar4 = 1;
  if ((iVar2 <= iVar1) && ((iVar2 < iVar1 || (*(uint *)(param_2 + 4) <= *(uint *)(param_1 + 4))))) {
    iVar4 = 0;
  }
  return iVar3 - iVar4;
}



undefined4 int64_hash(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



int caml_int64_to_int(int param_1)

{
  return *(int *)(param_1 + 4) * 2 + 1;
}



int caml_int64_compare(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_2 + 8);
  iVar4 = 1;
  if ((iVar1 <= iVar2) && ((iVar1 < iVar2 || (*(uint *)(param_1 + 4) <= *(uint *)(param_2 + 4))))) {
    iVar4 = 0;
  }
  iVar3 = 1;
  if ((iVar2 <= iVar1) && ((iVar2 < iVar1 || (*(uint *)(param_2 + 4) <= *(uint *)(param_1 + 4))))) {
    iVar3 = 0;
  }
  return (iVar4 - iVar3) * 2 + 1;
}



int nativeint_cmp(int param_1,int param_2)

{
  return (uint)(*(int *)(param_2 + 4) < *(int *)(param_1 + 4)) -
         (uint)(*(int *)(param_1 + 4) < *(int *)(param_2 + 4));
}



undefined4 nativeint_hash(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



int caml_nativeint_to_int(int param_1)

{
  return *(int *)(param_1 + 4) * 2 + 1;
}



int caml_nativeint_compare(int param_1,int param_2)

{
  return ((uint)(*(int *)(param_2 + 4) < *(int *)(param_1 + 4)) -
         (uint)(*(int *)(param_1 + 4) < *(int *)(param_2 + 4))) * 2 + 1;
}



undefined4 int32_deserialize(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = caml_deserialize_sint_4();
  *param_1 = uVar1;
  return 4;
}



undefined4 nativeint_deserialize(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = caml_deserialize_uint_1();
  if (iVar1 == 1) {
    uVar2 = caml_deserialize_sint_4();
    *param_1 = uVar2;
  }
  else if (iVar1 == 2) {
    caml_deserialize_error("input_value: native integer value too large");
  }
  else {
    caml_deserialize_error("input_value: ill-formed native integer");
  }
  return 4;
}



void nativeint_serialize(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  caml_serialize_int_1(1);
  caml_serialize_int_4(uVar1);
  *param_2 = 4;
  *param_3 = 8;
  return;
}



void int32_serialize(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  caml_serialize_int_4(*(undefined4 *)(param_1 + 4));
  *param_3 = 4;
  *param_2 = 4;
  return;
}



undefined4 int64_deserialize(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = caml_deserialize_sint_8();
  *param_1 = uVar1;
  return 8;
}



void int64_serialize(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  caml_serialize_int_8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  *param_3 = 8;
  *param_2 = 8;
  return;
}



uint __regparm3 parse_intnat(int param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte local_3c;
  uint local_24;
  int local_20;
  
  pcVar1 = (char *)parse_sign_and_base();
  uVar2 = parse_digit();
  if (((int)uVar2 < 0) || ((int)local_24 <= (int)uVar2)) {
                    // WARNING: Subroutine does not return
    caml_failwith("int_of_string");
  }
  do {
    do {
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 == '_');
    uVar3 = parse_digit();
    if (((int)uVar3 < 0) || ((int)local_24 <= (int)uVar3)) {
      iVar4 = caml_string_length(param_1);
      if (pcVar1 != (char *)(iVar4 + param_1)) {
                    // WARNING: Subroutine does not return
        caml_failwith("int_of_string");
      }
      local_3c = (byte)param_2;
      if (local_24 == 10) {
        if (-1 < local_20) {
          if (uVar2 < (uint)(1 << (local_3c - 1 & 0x1f))) {
            return uVar2;
          }
                    // WARNING: Subroutine does not return
          caml_failwith("int_of_string");
        }
        if ((uint)(1 << (local_3c - 1 & 0x1f)) < uVar2) {
                    // WARNING: Subroutine does not return
          caml_failwith("int_of_string");
        }
      }
      else {
        if ((param_2 < 0x20) && ((uint)(1 << (local_3c & 0x1f)) <= uVar2)) {
                    // WARNING: Subroutine does not return
          caml_failwith("int_of_string");
        }
        if (-1 < local_20) {
          return uVar2;
        }
      }
      return -uVar2;
    }
    if (0xffffffff / local_24 < uVar2) {
                    // WARNING: Subroutine does not return
      caml_failwith("int_of_string");
    }
    uVar5 = uVar2 * local_24;
    uVar2 = uVar5 + uVar3;
  } while (!CARRY4(uVar5,uVar3));
                    // WARNING: Subroutine does not return
  caml_failwith("int_of_string");
}



int caml_int_of_string(void)

{
  int iVar1;
  
  iVar1 = parse_intnat();
  return iVar1 * 2 + 1;
}



undefined4 __regparm3
parse_format(char *param_1_00,char *param_2_00,void *param_3,undefined4 param_1,char *param_2)

{
  size_t __n;
  char cVar1;
  char cVar2;
  size_t __n_00;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  __n_00 = caml_string_length(param_1_00);
  uVar5 = 0xffffffff;
  pcVar6 = param_2_00;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  __n = ~uVar5 - 1;
  if (0x1f < ~uVar5 + __n_00) {
    caml_invalid_argument("format_int: format too long");
  }
  memmove(param_3,param_1_00,__n_00);
  pcVar6 = (char *)((int)param_3 + (__n_00 - 1));
  cVar1 = *pcVar6;
  cVar2 = pcVar6[-1];
  if (((cVar2 == 'l') || (cVar2 == 'n')) || (cVar2 == 'L')) {
    pcVar6 = pcVar6 + -1;
  }
  memmove(pcVar6,param_2_00,__n);
  pcVar6[__n] = cVar1;
  (pcVar6 + __n)[1] = '\0';
  cVar2 = *param_1_00;
  while( true ) {
    if (cVar2 == '\0') {
      *param_2 = cVar1;
      return param_1;
    }
    if ((byte)(cVar2 - 0x30U) < 10) break;
    param_1_00 = param_1_00 + 1;
    cVar2 = *param_1_00;
  }
  lVar3 = strtol(param_1_00,(char **)0x0,10);
  *param_2 = cVar1;
  if (lVar3 + 5 < 0x20) {
    return param_1;
  }
  uVar4 = caml_stat_alloc(lVar3 + 6);
  return uVar4;
}



undefined4 caml_nativeint_format(undefined4 param_1,int param_2)

{
  char *__s;
  undefined4 uVar1;
  undefined local_5d;
  char local_5c [32];
  char local_3c [44];
  
  __s = (char *)parse_format(local_5c,&local_5d);
  sprintf(__s,local_3c,*(undefined4 *)(param_2 + 4));
  uVar1 = caml_copy_string(__s);
  if (__s != local_5c) {
    caml_stat_free(__s);
  }
  return uVar1;
}



undefined4 caml_int64_format(undefined4 param_1,int param_2)

{
  char *__s;
  undefined4 uVar1;
  undefined local_5d;
  char local_5c [32];
  char local_3c [44];
  
  __s = (char *)parse_format(local_5c,&local_5d);
  sprintf(__s,local_3c,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  uVar1 = caml_copy_string(__s);
  if (__s != local_5c) {
    caml_stat_free(__s);
  }
  return uVar1;
}



undefined4 caml_int32_format(undefined4 param_1,int param_2)

{
  char *__s;
  undefined4 uVar1;
  undefined local_5d;
  char local_5c [32];
  char local_3c [44];
  
  __s = (char *)parse_format(local_5c,&local_5d);
  sprintf(__s,local_3c,*(undefined4 *)(param_2 + 4));
  uVar1 = caml_copy_string(__s);
  if (__s != local_5c) {
    caml_stat_free(__s);
  }
  return uVar1;
}



undefined4 caml_format_int(undefined4 param_1,uint param_2)

{
  char *__s;
  undefined4 uVar1;
  char local_4d;
  char local_4c [32];
  char local_2c [32];
  
  __s = (char *)parse_format(local_4c,&local_4d);
  if (local_4d != 'o') {
    if (local_4d < 'p') {
      if (local_4d != 'X') {
LAB_080662dd:
        sprintf(__s,local_2c,(int)param_2 >> 1);
        goto LAB_080662f2;
      }
    }
    else if ((local_4d != 'u') && (local_4d != 'x')) goto LAB_080662dd;
  }
  sprintf(__s,local_2c,param_2 >> 1);
LAB_080662f2:
  uVar1 = caml_copy_string(__s);
  if (__s != local_4c) {
    caml_stat_free(__s);
  }
  return uVar1;
}



void caml_nativeint_to_float(int param_1)

{
  caml_copy_double((double)*(int *)(param_1 + 4));
  return;
}



void caml_int64_float_of_bits(int param_1)

{
  caml_copy_double(*(undefined8 *)(param_1 + 4));
  return;
}



void caml_int64_to_float(int param_1)

{
  caml_copy_double((double)*(longlong *)(param_1 + 4));
  return;
}



void caml_int32_float_of_bits(int param_1)

{
  caml_copy_double((double)*(float *)(param_1 + 4));
  return;
}



void caml_int32_to_float(int param_1)

{
  caml_copy_double((double)*(int *)(param_1 + 4));
  return;
}



void caml_copy_nativeint(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = caml_alloc_custom(caml_nativeint_ops,4,0,1);
  *(undefined4 *)(iVar1 + 4) = param_1;
  return;
}



void caml_nativeint_of_string(void)

{
  undefined4 uVar1;
  
  uVar1 = parse_intnat();
  caml_copy_nativeint(uVar1);
  return;
}



void caml_nativeint_of_int32(int param_1)

{
  caml_copy_nativeint(*(undefined4 *)(param_1 + 4));
  return;
}



void caml_nativeint_of_float(double *param_1)

{
  caml_copy_nativeint((int)ROUND(*param_1));
  return;
}



void caml_nativeint_of_int(int param_1)

{
  caml_copy_nativeint(param_1 >> 1);
  return;
}



void caml_nativeint_shift_right_unsigned(int param_1,int param_2)

{
  caml_copy_nativeint(*(uint *)(param_1 + 4) >> ((byte)(param_2 >> 1) & 0x1f));
  return;
}



void caml_nativeint_shift_right(int param_1,int param_2)

{
  caml_copy_nativeint(*(int *)(param_1 + 4) >> ((byte)(param_2 >> 1) & 0x1f));
  return;
}



void caml_nativeint_shift_left(int param_1,int param_2)

{
  caml_copy_nativeint(*(int *)(param_1 + 4) << ((byte)(param_2 >> 1) & 0x1f));
  return;
}



void caml_nativeint_xor(int param_1,int param_2)

{
  caml_copy_nativeint(*(uint *)(param_2 + 4) ^ *(uint *)(param_1 + 4));
  return;
}



void caml_nativeint_or(int param_1,int param_2)

{
  caml_copy_nativeint(*(uint *)(param_2 + 4) | *(uint *)(param_1 + 4));
  return;
}



void caml_nativeint_and(int param_1,int param_2)

{
  caml_copy_nativeint(*(uint *)(param_2 + 4) & *(uint *)(param_1 + 4));
  return;
}



void caml_nativeint_mod(int param_1,int param_2)

{
  int extraout_ECX;
  int iVar1;
  int extraout_EDX;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    caml_raise_zero_divide();
    iVar1 = extraout_ECX;
    iVar2 = extraout_EDX;
  }
  if ((iVar2 == -0x80000000) && (iVar1 == -1)) {
    caml_copy_nativeint(0);
  }
  else {
    caml_copy_nativeint(iVar2 % iVar1);
  }
  return;
}



void caml_nativeint_div(int param_1,int param_2)

{
  int extraout_ECX;
  int iVar1;
  int extraout_EDX;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    caml_raise_zero_divide();
    iVar1 = extraout_ECX;
    iVar2 = extraout_EDX;
  }
  if ((iVar2 != -0x80000000) || (iVar1 != -1)) {
    caml_copy_nativeint(iVar2 / iVar1);
  }
  return;
}



void caml_nativeint_mul(int param_1,int param_2)

{
  caml_copy_nativeint(*(int *)(param_2 + 4) * *(int *)(param_1 + 4));
  return;
}



void caml_nativeint_sub(int param_1,int param_2)

{
  caml_copy_nativeint(*(int *)(param_1 + 4) - *(int *)(param_2 + 4));
  return;
}



void caml_nativeint_add(int param_1,int param_2)

{
  caml_copy_nativeint(*(int *)(param_2 + 4) + *(int *)(param_1 + 4));
  return;
}



void caml_nativeint_neg(int param_1)

{
  caml_copy_nativeint(-*(int *)(param_1 + 4));
  return;
}



void caml_int64_to_nativeint(int param_1)

{
  caml_copy_nativeint(*(undefined4 *)(param_1 + 4));
  return;
}



void caml_copy_int64(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = caml_alloc_custom(caml_int64_ops,8,0,1);
  *(undefined4 *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 8) = param_2;
  return;
}



void caml_int64_bits_of_float(undefined4 *param_1)

{
  caml_copy_int64(*param_1,param_1[1]);
  return;
}



// WARNING: Removing unreachable block (ram,0x080666c9)

void caml_int64_of_string(int param_1)

{
  ulonglong uVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  ulonglong uVar10;
  uint local_24;
  int local_20;
  
  pcVar2 = (char *)parse_sign_and_base();
  uVar10 = __udivdi3(0xffffffff,0xffffffff,local_24,(int)local_24 >> 0x1f);
  uVar3 = parse_digit();
  if (((int)uVar3 < 0) || ((int)local_24 <= (int)uVar3)) {
                    // WARNING: Subroutine does not return
    caml_failwith("int_of_string");
  }
  uVar8 = (int)uVar3 >> 0x1f;
  do {
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 == '_');
    uVar4 = parse_digit();
    if (((int)uVar4 < 0) || ((int)local_24 <= (int)uVar4)) {
      iVar6 = caml_string_length(param_1);
      if (pcVar2 != (char *)(iVar6 + param_1)) {
                    // WARNING: Subroutine does not return
        caml_failwith("int_of_string");
      }
      if (local_24 == 10) {
        uVar4 = 0xffffffff;
        uVar5 = 0x7fffffff;
        if (local_20 < 0) {
          uVar4 = 0;
          uVar5 = 0x80000000;
        }
        if ((uVar5 <= uVar8) && ((uVar5 < uVar8 || (uVar4 < uVar3)))) {
                    // WARNING: Subroutine does not return
          caml_failwith("int_of_string");
        }
      }
      if (local_20 < 0) {
        bVar9 = uVar3 != 0;
        uVar3 = -uVar3;
        uVar8 = -(uVar8 + bVar9);
      }
      caml_copy_int64(uVar3,uVar8);
      return;
    }
    if (uVar10 < CONCAT44(uVar8,uVar3)) {
                    // WARNING: Subroutine does not return
      caml_failwith("int_of_string");
    }
    iVar6 = ((int)local_24 >> 0x1f) * uVar3;
    uVar1 = (ulonglong)uVar3;
    uVar5 = (uint)(local_24 * uVar1);
    uVar7 = (int)uVar4 >> 0x1f;
    uVar3 = uVar5 + uVar4;
    uVar8 = (int)(local_24 * uVar1 >> 0x20) + local_24 * uVar8 + iVar6 + uVar7 +
            (uint)CARRY4(uVar5,uVar4);
  } while ((uVar7 < uVar8) || ((uVar7 <= uVar8 && (uVar4 <= uVar3))));
                    // WARNING: Subroutine does not return
  caml_failwith("int_of_string");
}



void caml_int64_of_nativeint(int param_1)

{
  caml_copy_int64(*(int *)(param_1 + 4),*(int *)(param_1 + 4) >> 0x1f);
  return;
}



void caml_int64_of_int32(int param_1)

{
  caml_copy_int64(*(int *)(param_1 + 4),*(int *)(param_1 + 4) >> 0x1f);
  return;
}



void caml_int64_of_float(double *param_1)

{
  caml_copy_int64((longlong)ROUND(*param_1));
  return;
}



void caml_int64_of_int(int param_1)

{
  caml_copy_int64(param_1 >> 1,param_1 >> 0x1f);
  return;
}



void caml_int64_shift_right_unsigned(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  bVar3 = (byte)(param_2 >> 1);
  bVar1 = bVar3 & 0x1f;
  uVar4 = *(uint *)(param_1 + 8) >> (bVar3 & 0x1f);
  uVar2 = *(uint *)(param_1 + 4) >> bVar1 | *(uint *)(param_1 + 8) << 0x20 - bVar1;
  uVar5 = uVar4;
  if ((param_2 >> 1 & 0x20U) != 0) {
    uVar5 = 0;
    uVar2 = uVar4;
  }
  caml_copy_int64(uVar2,uVar5);
  return;
}



void caml_int64_shift_right(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  bVar3 = (byte)(param_2 >> 1);
  bVar1 = bVar3 & 0x1f;
  uVar4 = *(int *)(param_1 + 8) >> (bVar3 & 0x1f);
  uVar2 = *(uint *)(param_1 + 4) >> bVar1 | *(int *)(param_1 + 8) << 0x20 - bVar1;
  uVar5 = uVar4;
  if ((param_2 >> 1 & 0x20U) != 0) {
    uVar5 = (int)uVar4 >> 0x1f;
    uVar2 = uVar4;
  }
  caml_copy_int64(uVar2,uVar5);
  return;
}



void caml_int64_shift_left(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  bVar4 = (byte)(param_2 >> 1);
  bVar1 = bVar4 & 0x1f;
  uVar2 = *(uint *)(param_1 + 4) << (bVar4 & 0x1f);
  uVar3 = uVar2;
  uVar5 = *(int *)(param_1 + 8) << bVar1 | *(uint *)(param_1 + 4) >> 0x20 - bVar1;
  if ((param_2 >> 1 & 0x20U) != 0) {
    uVar3 = 0;
    uVar5 = uVar2;
  }
  caml_copy_int64(uVar3,uVar5);
  return;
}



void caml_int64_xor(int param_1,int param_2)

{
  caml_copy_int64(*(uint *)(param_2 + 4) ^ *(uint *)(param_1 + 4),
                  *(uint *)(param_2 + 8) ^ *(uint *)(param_1 + 8));
  return;
}



void caml_int64_or(int param_1,int param_2)

{
  caml_copy_int64(*(uint *)(param_2 + 4) | *(uint *)(param_1 + 4),
                  *(uint *)(param_2 + 8) | *(uint *)(param_1 + 8));
  return;
}



void caml_int64_and(int param_1,int param_2)

{
  caml_copy_int64(*(uint *)(param_2 + 4) & *(uint *)(param_1 + 4),
                  *(uint *)(param_2 + 8) & *(uint *)(param_1 + 8));
  return;
}



void caml_int64_mod(int param_1,int param_2)

{
  uint uVar1;
  int extraout_ECX;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  lVar3 = CONCAT44(*(uint *)(param_2 + 4),*(uint *)(param_2 + 8));
  if ((*(uint *)(param_2 + 8) | *(uint *)(param_2 + 4)) == 0) {
    lVar3 = caml_raise_zero_divide();
    iVar2 = extraout_ECX;
  }
  if (((iVar2 + 0x80000000U | uVar1) == 0) && (lVar3 == -1)) {
    caml_copy_int64(0,0);
  }
  else {
    uVar4 = __moddi3(uVar1,iVar2,(int)((ulonglong)lVar3 >> 0x20),(int)lVar3);
    caml_copy_int64(uVar4);
  }
  return;
}



void caml_int64_div(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint extraout_ECX;
  uint uVar3;
  uint extraout_EDX;
  uint uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  uVar3 = *(uint *)(param_2 + 4);
  uVar4 = *(uint *)(param_2 + 8);
  if ((uVar4 | uVar3) == 0) {
    caml_raise_zero_divide();
    uVar3 = extraout_ECX;
    uVar4 = extraout_EDX;
  }
  if (((iVar2 + 0x80000000U | uVar1) != 0) || ((uVar3 & uVar4) != 0xffffffff)) {
    uVar5 = __divdi3(uVar1,iVar2,uVar3,uVar4);
    caml_copy_int64(uVar5);
  }
  return;
}



void caml_int64_mul(int param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)*(uint *)(param_1 + 4) * (ulonglong)*(uint *)(param_2 + 4);
  caml_copy_int64((int)lVar1,
                  *(int *)(param_2 + 8) * *(int *)(param_1 + 4) +
                  *(int *)(param_1 + 8) * *(int *)(param_2 + 4) + (int)((ulonglong)lVar1 >> 0x20));
  return;
}



void caml_int64_sub(int param_1,int param_2)

{
  caml_copy_int64(*(uint *)(param_1 + 4) - *(uint *)(param_2 + 4),
                  (*(int *)(param_1 + 8) - *(int *)(param_2 + 8)) -
                  (uint)(*(uint *)(param_1 + 4) < *(uint *)(param_2 + 4)));
  return;
}



void caml_int64_add(int param_1,int param_2)

{
  caml_copy_int64(*(uint *)(param_1 + 4) + *(uint *)(param_2 + 4),
                  *(int *)(param_1 + 8) + *(int *)(param_2 + 8) +
                  (uint)CARRY4(*(uint *)(param_1 + 4),*(uint *)(param_2 + 4)));
  return;
}



void caml_int64_neg(int param_1)

{
  caml_copy_int64(-*(int *)(param_1 + 4),
                  -(*(int *)(param_1 + 8) + (uint)(*(int *)(param_1 + 4) != 0)));
  return;
}



void caml_copy_int32(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = caml_alloc_custom(caml_int32_ops,4,0,1);
  *(undefined4 *)(iVar1 + 4) = param_1;
  return;
}



void caml_nativeint_to_int32(int param_1)

{
  caml_copy_int32(*(undefined4 *)(param_1 + 4));
  return;
}



void caml_int64_to_int32(int param_1)

{
  caml_copy_int32(*(undefined4 *)(param_1 + 4));
  return;
}



void caml_int32_bits_of_float(double *param_1)

{
  caml_copy_int32((float)*param_1);
  return;
}



void caml_int32_of_string(void)

{
  undefined4 uVar1;
  
  uVar1 = parse_intnat();
  caml_copy_int32(uVar1);
  return;
}



void caml_int32_of_float(double *param_1)

{
  caml_copy_int32((int)ROUND(*param_1));
  return;
}



void caml_int32_of_int(int param_1)

{
  caml_copy_int32(param_1 >> 1);
  return;
}



void caml_int32_shift_right_unsigned(int param_1,int param_2)

{
  caml_copy_int32(*(uint *)(param_1 + 4) >> ((byte)(param_2 >> 1) & 0x1f));
  return;
}



void caml_int32_shift_right(int param_1,int param_2)

{
  caml_copy_int32(*(int *)(param_1 + 4) >> ((byte)(param_2 >> 1) & 0x1f));
  return;
}



void caml_int32_shift_left(int param_1,int param_2)

{
  caml_copy_int32(*(int *)(param_1 + 4) << ((byte)(param_2 >> 1) & 0x1f));
  return;
}



void caml_int32_xor(int param_1,int param_2)

{
  caml_copy_int32(*(uint *)(param_2 + 4) ^ *(uint *)(param_1 + 4));
  return;
}



void caml_int32_or(int param_1,int param_2)

{
  caml_copy_int32(*(uint *)(param_2 + 4) | *(uint *)(param_1 + 4));
  return;
}



void caml_int32_and(int param_1,int param_2)

{
  caml_copy_int32(*(uint *)(param_2 + 4) & *(uint *)(param_1 + 4));
  return;
}



void caml_int32_mod(int param_1,int param_2)

{
  int extraout_ECX;
  int iVar1;
  int extraout_EDX;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    caml_raise_zero_divide();
    iVar1 = extraout_ECX;
    iVar2 = extraout_EDX;
  }
  if ((iVar2 == -0x80000000) && (iVar1 == -1)) {
    caml_copy_int32(0);
  }
  else {
    caml_copy_int32(iVar2 % iVar1);
  }
  return;
}



void caml_int32_div(int param_1,int param_2)

{
  int extraout_ECX;
  int iVar1;
  int extraout_EDX;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    caml_raise_zero_divide();
    iVar1 = extraout_ECX;
    iVar2 = extraout_EDX;
  }
  if ((iVar2 != -0x80000000) || (iVar1 != -1)) {
    caml_copy_int32(iVar2 / iVar1);
  }
  return;
}



void caml_int32_mul(int param_1,int param_2)

{
  caml_copy_int32(*(int *)(param_2 + 4) * *(int *)(param_1 + 4));
  return;
}



void caml_int32_sub(int param_1,int param_2)

{
  caml_copy_int32(*(int *)(param_1 + 4) - *(int *)(param_2 + 4));
  return;
}



void caml_int32_add(int param_1,int param_2)

{
  caml_copy_int32(*(int *)(param_2 + 4) + *(int *)(param_1 + 4));
  return;
}



void caml_int32_neg(int param_1)

{
  caml_copy_int32(-*(int *)(param_1 + 4));
  return;
}



int caml_int_of_float(double *param_1)

{
  return (int)ROUND(*param_1) * 2 + 1;
}



char caml_eq_float(double *param_1,double *param_2)

{
  return (*param_2 == *param_1) * '\x02' + '\x01';
}



char caml_neq_float(double *param_1,double *param_2)

{
  return (*param_2 != *param_1) * '\x02' + '\x01';
}



int caml_le_float(double *param_1,double *param_2)

{
  return (-(uint)(*param_2 < *param_1) & 0xfffffffe) + 3;
}



char caml_lt_float(double *param_1,double *param_2)

{
  return (*param_1 < *param_2) * '\x02' + '\x01';
}



int caml_ge_float(double *param_1,double *param_2)

{
  return (-(uint)(*param_1 < *param_2) & 0xfffffffe) + 3;
}



char caml_gt_float(double *param_1,double *param_2)

{
  return (*param_2 < *param_1) * '\x02' + '\x01';
}



// WARNING: Removing unreachable block (ram,0x08066e62)
// WARNING: Removing unreachable block (ram,0x08066e66)
// WARNING: Removing unreachable block (ram,0x08066e4b)
// WARNING: Removing unreachable block (ram,0x08066e69)

undefined4 caml_float_compare(double *param_1,double *param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == *param_2) {
    uVar1 = 1;
  }
  else if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}



void caml_init_ieee_floats(void)

{
  return;
}



undefined4 caml_classify_float(double *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = __fpclassify(*param_1);
  uVar2 = 1;
  if (uVar1 < 4) {
    uVar2 = *(undefined4 *)(CSWTCH_118 + uVar1 * 4);
  }
  return uVar2;
}



longdouble caml_log1p(double param_1)

{
  double dVar1;
  
  dVar1 = log1p(param_1);
  return (longdouble)dVar1;
}



longdouble caml_expm1(double param_1)

{
  double dVar1;
  
  dVar1 = expm1(param_1);
  return (longdouble)dVar1;
}



undefined4 caml_format_float(char *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  char local_18e [382];
  
  cVar1 = *param_1;
  pcVar3 = param_1;
  while (cVar1 != '\0') {
    if ((byte)(cVar1 - 0x30U) < 10) {
      lVar2 = strtol(pcVar3,(char **)0x0,10);
      uVar5 = lVar2 + 0x15e;
      if ((int)uVar5 < 0x15e) {
        uVar5 = 0x15e;
      }
      cVar1 = *pcVar3;
      goto joined_r0x08066f47;
    }
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  }
LAB_08066fe3:
  sprintf(local_18e,param_1,*param_2);
  uVar4 = caml_copy_string(local_18e);
  return uVar4;
joined_r0x08066f47:
  if (cVar1 == '\0') goto LAB_08066f93;
  if (cVar1 == '.') {
    lVar2 = strtol(pcVar3 + 1,(char **)0x0,10);
    if ((int)uVar5 < (int)(lVar2 + 0x15eU)) {
      uVar5 = lVar2 + 0x15eU;
    }
    goto LAB_08066f93;
  }
  pcVar3 = pcVar3 + 1;
  cVar1 = *pcVar3;
  goto joined_r0x08066f47;
LAB_08066f93:
  if (0x171 < uVar5) {
    pcVar3 = (char *)caml_stat_alloc(uVar5);
    sprintf(pcVar3,param_1,*param_2);
    uVar4 = caml_copy_string(pcVar3);
    if (pcVar3 == local_18e) {
      return uVar4;
    }
    caml_stat_free(pcVar3);
    return uVar4;
  }
  goto LAB_08066fe3;
}



void caml_copy_double(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((int)caml_young_ptr + -0xc);
  if ((undefined4 *)((int)caml_young_ptr + -0xc) < caml_young_limit) {
    caml_minor_collection();
    caml_young_ptr = (undefined4 *)((int)caml_young_ptr + -0xc);
    puVar1 = caml_young_ptr;
  }
  caml_young_ptr = puVar1;
  *caml_young_ptr = 0xbfd;
  *(undefined8 *)(caml_young_ptr + 1) = param_1;
  return;
}



void caml_log1p_float(undefined8 *param_1)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)caml_log1p(*param_1);
  caml_copy_double((double)lVar1);
  return;
}



void caml_expm1_float(undefined8 *param_1)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)caml_expm1(*param_1);
  caml_copy_double((double)lVar1);
  return;
}



void caml_ceil_float(double *param_1)

{
  double dVar1;
  
  dVar1 = ceil(*param_1);
  caml_copy_double(dVar1);
  return;
}



void caml_atan2_float(double *param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = atan2(*param_1,*param_2);
  caml_copy_double(dVar1);
  return;
}



void caml_atan_float(double *param_1)

{
  double dVar1;
  
  dVar1 = atan(*param_1);
  caml_copy_double(dVar1);
  return;
}



void caml_acos_float(double *param_1)

{
  double dVar1;
  
  dVar1 = acos(*param_1);
  caml_copy_double(dVar1);
  return;
}



void caml_asin_float(double *param_1)

{
  double dVar1;
  
  dVar1 = asin(*param_1);
  caml_copy_double(dVar1);
  return;
}



void caml_tanh_float(double *param_1)

{
  double dVar1;
  
  dVar1 = tanh(*param_1);
  caml_copy_double(dVar1);
  return;
}



void caml_tan_float(double *param_1)

{
  double dVar1;
  
  dVar1 = tan(*param_1);
  caml_copy_double(dVar1);
  return;
}



void caml_cosh_float(double *param_1)

{
  double dVar1;
  
  dVar1 = cosh(*param_1);
  caml_copy_double(dVar1);
  return;
}



void caml_cos_float(double *param_1)

{
  double dVar1;
  
  dVar1 = cos(*param_1);
  caml_copy_double(dVar1);
  return;
}



void caml_sinh_float(double *param_1)

{
  double dVar1;
  
  dVar1 = sinh(*param_1);
  caml_copy_double(dVar1);
  return;
}



void caml_sin_float(double *param_1)

{
  double dVar1;
  
  dVar1 = sin(*param_1);
  caml_copy_double(dVar1);
  return;
}



void caml_power_float(double *param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = pow(*param_1,*param_2);
  caml_copy_double(dVar1);
  return;
}



// WARNING: Removing unreachable block (ram,0x08067215)
// WARNING: Removing unreachable block (ram,0x08067219)
// WARNING: Removing unreachable block (ram,0x0806721b)

void caml_sqrt_float(double *param_1)

{
  caml_copy_double(SQRT(*param_1));
  return;
}



undefined4 * caml_modf_float(double *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  double dVar3;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  double local_14;
  
  uVar1 = caml_local_roots;
  local_34 = caml_local_roots;
  local_2c = 1;
  local_30 = 1;
  local_28 = &param_1;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_60 = &local_34;
  caml_local_roots = &local_60;
  local_58 = 1;
  local_5c = 3;
  local_54 = &local_38;
  local_50 = &local_3c;
  local_4c = &local_40;
  dVar3 = modf(*param_1,&local_14);
  local_3c = caml_copy_double(dVar3);
  local_40 = caml_copy_double(local_14);
  puVar2 = (undefined4 *)caml_alloc_tuple(2);
  *puVar2 = local_3c;
  puVar2[1] = local_40;
  caml_local_roots = (undefined4 **)uVar1;
  return puVar2;
}



void caml_log10_float(double *param_1)

{
  double dVar1;
  
  dVar1 = log10(*param_1);
  caml_copy_double(dVar1);
  return;
}



void caml_log_float(double *param_1)

{
  double dVar1;
  
  dVar1 = log(*param_1);
  caml_copy_double(dVar1);
  return;
}



void caml_ldexp_float(double *param_1,int param_2)

{
  double dVar1;
  
  dVar1 = ldexp(*param_1,param_2 >> 1);
  caml_copy_double(dVar1);
  return;
}



undefined4 * caml_frexp_float(double *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  double dVar3;
  int local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  
  uVar1 = caml_local_roots;
  local_2c = caml_local_roots;
  local_24 = 1;
  local_28 = 1;
  local_20 = &param_1;
  local_30 = 0;
  local_34 = 0;
  local_54 = &local_2c;
  caml_local_roots = &local_54;
  local_4c = 1;
  local_50 = 2;
  local_48 = &local_30;
  local_44 = &local_34;
  dVar3 = frexp(*param_1,&local_58);
  local_34 = caml_copy_double(dVar3);
  puVar2 = (undefined4 *)caml_alloc_tuple(2);
  *puVar2 = local_34;
  puVar2[1] = local_58 * 2 + 1;
  caml_local_roots = (undefined4 **)uVar1;
  return puVar2;
}



// WARNING: Removing unreachable block (ram,0x0806741d)
// WARNING: Removing unreachable block (ram,0x08067422)
// WARNING: Removing unreachable block (ram,0x08067424)

void caml_fmod_float(double *param_1,double *param_2)

{
  double dVar1;
  ushort in_FPUStatusWord;
  
  dVar1 = *param_1;
  do {
    dVar1 = dVar1 - (dVar1 / *param_2) * *param_2;
  } while ((in_FPUStatusWord & 0x400) != 0);
  caml_copy_double(dVar1);
  return;
}



void caml_floor_float(double *param_1)

{
  double dVar1;
  
  dVar1 = floor(*param_1);
  caml_copy_double(dVar1);
  return;
}



void caml_exp_float(double *param_1)

{
  double dVar1;
  
  dVar1 = exp(*param_1);
  caml_copy_double(dVar1);
  return;
}



void caml_div_float(double *param_1,double *param_2)

{
  caml_copy_double(*param_1 / *param_2);
  return;
}



void caml_mul_float(double *param_1,double *param_2)

{
  caml_copy_double(*param_1 * *param_2);
  return;
}



void caml_sub_float(double *param_1,double *param_2)

{
  caml_copy_double(*param_1 - *param_2);
  return;
}



void caml_add_float(double *param_1,double *param_2)

{
  caml_copy_double(*param_1 + *param_2);
  return;
}



void caml_abs_float(double *param_1)

{
  caml_copy_double(ABS(*param_1));
  return;
}



void caml_neg_float(double *param_1)

{
  caml_copy_double(-*param_1);
  return;
}



void caml_float_of_int(int param_1)

{
  caml_copy_double((double)(param_1 >> 1));
  return;
}



void caml_float_of_string(char *param_1)

{
  uint uVar1;
  char *pcVar2;
  char *__nptr;
  double dVar3;
  char *local_60;
  char local_5c [76];
  
  uVar1 = caml_string_length(param_1);
  pcVar2 = local_5c;
  __nptr = pcVar2;
  if (0x3f < uVar1) {
    pcVar2 = (char *)caml_stat_alloc(uVar1 + 1);
    __nptr = pcVar2;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    if (*param_1 != '_') {
      *pcVar2 = *param_1;
      pcVar2 = pcVar2 + 1;
    }
    param_1 = param_1 + 1;
  }
  *pcVar2 = '\0';
  if ((pcVar2 != __nptr) && (dVar3 = strtod(__nptr,&local_60), local_60 == pcVar2)) {
    if (__nptr != local_5c) {
      caml_stat_free(__nptr);
    }
    caml_copy_double(dVar3);
    return;
  }
  if (__nptr != local_5c) {
    caml_stat_free(__nptr);
  }
                    // WARNING: Subroutine does not return
  caml_failwith("float_of_string");
}



void caml_float_of_substring(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char *__nptr;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  double dVar6;
  char *local_60;
  char local_5c [76];
  
  uVar4 = param_2 >> 1;
  uVar1 = caml_string_length(param_1);
  if (((((int)uVar4 < 0) || (uVar1 <= uVar4)) || (uVar3 = param_3 >> 1, (int)uVar3 < 1)) ||
     (uVar1 - uVar4 < uVar3)) {
    uVar3 = 0;
    __nptr = local_5c;
  }
  else if (uVar3 < 0x40) {
    __nptr = local_5c;
  }
  else {
    __nptr = (char *)caml_stat_alloc(uVar3 + 1);
  }
  pcVar2 = (char *)(uVar4 + param_1);
  pcVar5 = __nptr;
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    if (*pcVar2 != '_') {
      *pcVar5 = *pcVar2;
      pcVar5 = pcVar5 + 1;
    }
    pcVar2 = pcVar2 + 1;
  }
  *pcVar5 = '\0';
  if (pcVar5 != __nptr) {
    dVar6 = strtod(__nptr,&local_60);
    if (local_60 == pcVar5) {
      if (__nptr != local_5c) {
        caml_stat_free(__nptr);
      }
      caml_copy_double(dVar6);
      return;
    }
  }
  if (__nptr != local_5c) {
    caml_stat_free(__nptr);
  }
                    // WARNING: Subroutine does not return
  caml_failwith("float_of_string");
}



int caml_string_length(int param_1)

{
  int iVar1;
  
  iVar1 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  return iVar1 - *(char *)(iVar1 + param_1);
}



int caml_ml_string_length(int param_1)

{
  int iVar1;
  
  iVar1 = (*(uint *)(param_1 + -4) >> 10) * 4 + -1;
  return (iVar1 - *(char *)(iVar1 + param_1)) * 2 + 1;
}



undefined4 caml_string_equal(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == param_2) {
LAB_08067715:
    uVar2 = 3;
  }
  else {
    uVar1 = (uint)param_1[-1] >> 10;
    if (uVar1 == (uint)param_2[-1] >> 10) {
      if (uVar1 == 0) goto LAB_08067715;
      if (*param_1 == *param_2) {
        do {
          uVar1 = uVar1 - 1;
          if (uVar1 == 0) goto LAB_08067715;
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
        } while (*param_1 == *param_2);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



int caml_string_notequal(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = caml_string_equal(param_1,param_2);
  return 4 - iVar1;
}



int caml_bitvect_test(int param_1,int param_2)

{
  return ((uint)*(byte *)((param_2 >> 4) + param_1) & 1 << ((byte)(param_2 >> 1) & 7)) * 2 + 1;
}



int caml_is_printable(int param_1)

{
  ushort **ppuVar1;
  
  if (locale_is_set_2848 == 0) {
    setlocale(0,"");
    locale_is_set_2848 = 1;
  }
  ppuVar1 = __ctype_b_loc();
  return (-(uint)(((*ppuVar1)[param_1 >> 1] & 0x4000) == 0) & 0xfffffffe) + 3;
}



undefined4 caml_fill_string(int param_1,int param_2,int param_3,int param_4)

{
  memset((void *)((param_2 >> 1) + param_1),param_4 >> 1,param_3 >> 1);
  return 1;
}



undefined4 caml_blit_string(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  memmove((void *)((param_4 >> 1) + param_3),(void *)((param_2 >> 1) + param_1),param_5 >> 1);
  return 1;
}



undefined4 caml_string_compare(byte *param_1,byte *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  
  bVar8 = 0;
  if (param_1 == param_2) {
    return 1;
  }
  uVar2 = caml_string_length(param_1);
  uVar3 = caml_string_length(param_2);
  uVar5 = uVar2;
  if (uVar3 <= uVar2) {
    uVar5 = uVar3;
  }
  bVar6 = false;
  bVar7 = true;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar6 = *param_1 < *param_2;
    bVar7 = *param_1 == *param_2;
    param_1 = param_1 + (uint)bVar8 * -2 + 1;
    param_2 = param_2 + (uint)bVar8 * -2 + 1;
  } while (bVar7);
  cVar1 = (!bVar6 && !bVar7) - bVar6;
  if (cVar1 < '\0') {
LAB_0806787d:
    uVar4 = 0xffffffff;
  }
  else {
    if (cVar1 < '\x01') {
      if (uVar2 < uVar3) goto LAB_0806787d;
      if (uVar2 <= uVar3) {
        return 1;
      }
    }
    uVar4 = 3;
  }
  return uVar4;
}



char caml_string_greaterequal(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = caml_string_compare(param_1,param_2);
  return (0 < iVar1) * '\x02' + '\x01';
}



char caml_string_greaterthan(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = caml_string_compare(param_1,param_2);
  return (1 < iVar1) * '\x02' + '\x01';
}



char caml_string_lessequal(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = caml_string_compare(param_1,param_2);
  return (iVar1 < 2) * '\x02' + '\x01';
}



char caml_string_lessthan(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = caml_string_compare(param_1,param_2);
  return (iVar1 < 1) * '\x02' + '\x01';
}



undefined4 caml_string_set(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 1;
  if (-1 < (int)uVar2) {
    uVar1 = caml_string_length(param_1);
    if (uVar2 < uVar1) goto LAB_08067957;
  }
  caml_array_bound_error();
LAB_08067957:
  *(char *)(uVar2 + param_1) = (char)(param_3 >> 1);
  return 1;
}



int caml_string_get(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 1;
  if (-1 < (int)uVar2) {
    uVar1 = caml_string_length(param_1);
    if (uVar2 < uVar1) goto LAB_08067995;
  }
  caml_array_bound_error();
LAB_08067995:
  return (uint)*(byte *)(uVar2 + param_1) * 2 + 1;
}



void caml_create_string(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 1;
  if (0xfffffb < uVar1) {
    uVar1 = caml_invalid_argument("String.create");
  }
  caml_alloc_string(uVar1);
  return;
}



undefined4 caml_array_unsafe_set_float(int param_1,int param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + (param_2 >> 1) * 8) = *param_3;
  return 1;
}



uint * caml_make_array(uint *param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint *local_58;
  undefined4 *local_54;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  
  uVar1 = caml_local_roots;
  local_3c = caml_local_roots;
  local_34 = 1;
  local_38 = 1;
  local_30 = &param_1;
  local_44 = 0;
  local_64 = &local_3c;
  caml_local_roots = &local_64;
  local_5c = 1;
  local_60 = 2;
  local_58 = &local_40;
  local_54 = &local_44;
  uVar4 = param_1[-1] >> 10;
  puVar2 = param_1;
  if ((((uVar4 != 0) && (local_40 = *param_1, (local_40 & 1) == 0)) &&
      ((*(byte *)((&caml_page_table)[local_40 >> 0x17] + (local_40 >> 0xc & 0x7ff)) & 7) != 0)) &&
     (*(char *)(local_40 - 4) == -3)) {
    puVar2 = (uint *)caml_alloc_small(uVar4 * 2,0xfe);
    uVar3 = 0;
    do {
      *(undefined8 *)(puVar2 + uVar3 * 2) = *(undefined8 *)param_1[uVar3];
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  caml_local_roots = (undefined4 **)uVar1;
  return puVar2;
}



void caml_array_unsafe_get_float(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + (param_2 >> 1) * 8);
  puVar2 = (undefined4 *)((int)caml_young_ptr + -0xc);
  if ((undefined4 *)((int)caml_young_ptr + -0xc) < caml_young_limit) {
    caml_minor_collection();
    caml_young_ptr = (undefined4 *)((int)caml_young_ptr + -0xc);
    puVar2 = caml_young_ptr;
  }
  caml_young_ptr = puVar2;
  *caml_young_ptr = 0xbfd;
  *(undefined8 *)(caml_young_ptr + 1) = uVar1;
  return;
}



undefined4 caml_array_unsafe_get(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + -4) == -2) {
    uVar1 = caml_array_unsafe_get_float(param_1,param_2);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + (param_2 >> 1) * 4);
  }
  return uVar1;
}



undefined4 * caml_make_vect(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 **local_54;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  
  uVar1 = caml_local_roots;
  local_60 = &local_3c;
  local_40 = (undefined4 *)0x0;
  local_58 = 1;
  local_5c = 1;
  local_54 = &local_40;
  uVar5 = param_1 >> 1;
  if (uVar5 == 0) {
    local_40 = &DAT_080821c4;
  }
  else {
    local_3c = caml_local_roots;
    local_34 = 1;
    local_38 = 2;
    local_30 = &param_1;
    local_2c = &param_2;
    uVar4 = (uint)param_2 & 1;
    caml_local_roots = &local_60;
    if (((uVar4 == 0) &&
        ((*(byte *)((&caml_page_table)[(uint)param_2 >> 0x17] + ((uint)param_2 >> 0xc & 0x7ff)) & 7)
         != 0)) && (*(char *)((int)param_2 + -4) == -3)) {
      uVar6 = *param_2;
      uVar4 = uVar5 * 2;
      if (0x3fffff < uVar4) {
        uVar4 = caml_invalid_argument("Array.make");
      }
      local_40 = (undefined4 *)caml_alloc(uVar4,0xfe);
      uVar4 = 0;
      do {
        *(undefined8 *)(local_40 + uVar4 * 2) = uVar6;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    else {
      puVar2 = param_2;
      if (0x3fffff < uVar5) {
        uVar6 = caml_invalid_argument("Array.make");
        uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
        puVar2 = (undefined8 *)uVar6;
      }
      if (uVar5 < 0x100) {
        local_40 = (undefined4 *)caml_alloc_small(uVar5,0);
        iVar3 = 0;
        do {
          *(undefined8 **)(iVar3 + (int)local_40) = param_2;
          iVar3 = iVar3 + 4;
        } while (iVar3 != uVar5 * 4);
      }
      else if (((uVar4 == 0) && (puVar2 < caml_young_end)) && (caml_young_start < puVar2)) {
        caml_minor_collection();
        local_40 = (undefined4 *)caml_alloc_shr(uVar5,0);
        iVar3 = 0;
        do {
          *(undefined8 **)((int)local_40 + iVar3) = param_2;
          iVar3 = iVar3 + 4;
        } while (iVar3 != uVar5 * 4);
        local_40 = (undefined4 *)caml_check_urgent_gc(local_40);
      }
      else {
        local_40 = (undefined4 *)caml_alloc_shr(uVar5,0);
        uVar4 = 0;
        do {
          caml_initialize(local_40 + uVar4,param_2);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
        local_40 = (undefined4 *)caml_check_urgent_gc(local_40);
      }
    }
  }
  caml_local_roots = (undefined4 **)uVar1;
  return local_40;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 caml_array_unsafe_set_addr(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)((param_2 >> 1) * 4 + param_1);
  uVar1 = *puVar2;
  *puVar2 = param_3;
  if ((*(byte *)((&caml_page_table)[(uint)puVar2 >> 0x17] + ((uint)puVar2 >> 0xc & 0x7ff)) & 1) != 0
     ) {
    if (caml_gc_phase == 0) {
      caml_darken(uVar1,0);
    }
    if (((((param_3 & 1) == 0) && (param_3 < caml_young_end)) && (caml_young_start < param_3)) &&
       ((((uVar1 & 1) != 0 || (caml_young_end <= uVar1)) || (uVar1 <= caml_young_start)))) {
      if (_DAT_0807eb4c <= DAT_0807eb48) {
        caml_realloc_ref_table(&caml_ref_table);
      }
      *DAT_0807eb48 = puVar2;
      DAT_0807eb48 = DAT_0807eb48 + 1;
    }
  }
  return 1;
}



void caml_array_unsafe_set(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + -4) == -2) {
    caml_array_unsafe_set_float(param_1,param_2,param_3);
  }
  else {
    caml_array_unsafe_set_addr(param_1,param_2,param_3);
  }
  return;
}



undefined4 caml_array_set_float(int param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2 >> 1;
  if (((int)uVar1 < 0) || (*(uint *)(param_1 + -4) >> 0xb <= uVar1)) {
    uVar2 = caml_array_bound_error();
    param_1 = (int)((ulonglong)uVar2 >> 0x20);
    uVar1 = (uint)uVar2;
  }
  *(undefined8 *)(param_1 + uVar1 * 8) = *param_3;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 caml_array_set_addr(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2 >> 1;
  if (((int)uVar2 < 0) || (*(uint *)(param_1 + -4) >> 10 <= uVar2)) {
    uVar3 = caml_array_bound_error();
    param_1 = (int)((ulonglong)uVar3 >> 0x20);
    uVar2 = (uint)uVar3;
  }
  puVar1 = (uint *)(param_1 + uVar2 * 4);
  uVar2 = *puVar1;
  *puVar1 = param_3;
  if ((*(byte *)((&caml_page_table)[(uint)puVar1 >> 0x17] + ((uint)puVar1 >> 0xc & 0x7ff)) & 1) != 0
     ) {
    if (caml_gc_phase == 0) {
      caml_darken(uVar2,0);
    }
    if (((((param_3 & 1) == 0) && (param_3 < caml_young_end)) && (caml_young_start < param_3)) &&
       ((((uVar2 & 1) != 0 || (caml_young_end <= uVar2)) || (uVar2 <= caml_young_start)))) {
      if (_DAT_0807eb4c <= DAT_0807eb48) {
        caml_realloc_ref_table(&caml_ref_table);
      }
      *DAT_0807eb48 = puVar1;
      DAT_0807eb48 = DAT_0807eb48 + 1;
    }
  }
  return 1;
}



void caml_array_set(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + -4) == -2) {
    caml_array_set_float(param_1,param_2,param_3);
  }
  else {
    caml_array_set_addr(param_1,param_2,param_3);
  }
  return;
}



void caml_array_get_float(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2 >> 1;
  if (((int)uVar2 < 0) || (*(uint *)(param_1 + -4) >> 0xb <= uVar2)) {
    uVar3 = caml_array_bound_error();
    param_1 = (int)((ulonglong)uVar3 >> 0x20);
    uVar2 = (uint)uVar3;
  }
  uVar3 = *(undefined8 *)(param_1 + uVar2 * 8);
  puVar1 = (undefined4 *)((int)caml_young_ptr + -0xc);
  if ((undefined4 *)((int)caml_young_ptr + -0xc) < caml_young_limit) {
    caml_minor_collection();
    caml_young_ptr = (undefined4 *)((int)caml_young_ptr + -0xc);
    puVar1 = caml_young_ptr;
  }
  caml_young_ptr = puVar1;
  *caml_young_ptr = 0xbfd;
  *(undefined8 *)(caml_young_ptr + 1) = uVar3;
  return;
}



undefined4 caml_array_get_addr(int param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2 >> 1;
  if (((int)uVar1 < 0) || (*(uint *)(param_1 + -4) >> 10 <= uVar1)) {
    uVar2 = caml_array_bound_error();
    param_1 = (int)((ulonglong)uVar2 >> 0x20);
    uVar1 = (uint)uVar2;
  }
  return *(undefined4 *)(param_1 + uVar1 * 4);
}



void caml_array_get(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + -4) == -2) {
    caml_array_get_float(param_1,param_2);
  }
  else {
    caml_array_get_addr(param_1,param_2);
  }
  return;
}



void __regparm3 unlink_channel(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    caml_all_opened_channels = *(int *)(caml_all_opened_channels + 0x1c);
    if (caml_all_opened_channels != 0) {
      *(undefined4 *)(caml_all_opened_channels + 0x20) = 0;
    }
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x1c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20) = *(undefined4 *)(param_1 + 0x20);
    }
  }
  return;
}



undefined4 caml_channel_binary_mode(void)

{
  return 1;
}



undefined8 caml_pos_out(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x10) - (param_1 + 0x34);
  return CONCAT44(*(int *)(param_1 + 8) + ((int)uVar1 >> 0x1f) +
                  (uint)CARRY4(*(uint *)(param_1 + 4),uVar1),*(uint *)(param_1 + 4) + uVar1);
}



undefined8 caml_pos_in(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  return CONCAT44((*(int *)(param_1 + 8) - ((int)uVar1 >> 0x1f)) -
                  (uint)(*(uint *)(param_1 + 4) < uVar1),*(uint *)(param_1 + 4) - uVar1);
}



uint compare_channel(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 4) != *(uint *)(param_2 + 4)) {
    uVar1 = -(uint)(*(uint *)(param_1 + 4) < *(uint *)(param_2 + 4)) | 1;
  }
  return uVar1;
}



undefined4 caml_ml_set_binary_mode(void)

{
  return 1;
}



void caml_ml_pos_in_64(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = caml_pos_in(*(undefined4 *)(param_1 + 4));
  caml_copy_int64(uVar1);
  return;
}



void caml_ml_pos_out_64(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = caml_pos_out(*(undefined4 *)(param_1 + 4));
  caml_copy_int64(uVar1);
  return;
}



// WARNING: Removing unreachable block (ram,0x08068134)

int caml_ml_pos_in(int param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = caml_pos_in(*(undefined4 *)(param_1 + 4));
  if (0x3fffffff < lVar2) {
    piVar1 = __errno_location();
    *piVar1 = 0x4b;
    caml_sys_error(1);
  }
  return (int)lVar2 * 2 + 1;
}



// WARNING: Removing unreachable block (ram,0x0806817b)

int caml_ml_pos_out(int param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = caml_pos_out(*(undefined4 *)(param_1 + 4));
  if (0x3fffffff < lVar2) {
    piVar1 = __errno_location();
    *piVar1 = 0x4b;
    caml_sys_error(1);
  }
  return (int)lVar2 * 2 + 1;
}



int caml_channel_descriptor(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = **(int **)(param_1 + 4);
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    *piVar2 = 9;
    caml_sys_error(1);
  }
  return iVar1 * 2 + 1;
}



undefined4 caml_ml_close_channel(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = *piVar1;
  if (iVar2 == -1) {
    piVar1[5] = piVar1[3];
    piVar1[4] = piVar1[3];
  }
  else {
    *piVar1 = -1;
    piVar1[5] = piVar1[3];
    piVar1[4] = piVar1[3];
    caml_enter_blocking_section();
    iVar2 = close(iVar2);
    caml_leave_blocking_section();
    if (iVar2 == -1) {
      caml_sys_error(1);
    }
  }
  return 1;
}



void caml_alloc_channel(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  iVar1 = caml_alloc_custom(channel_operations,4,1,1000);
  *(int *)(iVar1 + 4) = param_1;
  return;
}



undefined4 * caml_ml_out_channels_list(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 **local_2c;
  undefined4 **local_28;
  undefined4 *local_24;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  
  uVar1 = caml_local_roots;
  local_10 = (undefined4 *)0x1;
  if (caml_all_opened_channels != 0) {
    local_14 = (undefined4 *)0x0;
    local_18 = 0;
    local_38 = caml_local_roots;
    local_30 = 1;
    local_34 = 3;
    local_2c = &local_10;
    local_28 = &local_14;
    local_24 = &local_18;
    iVar2 = caml_all_opened_channels;
    caml_local_roots = &local_38;
    do {
      if (*(int *)(iVar2 + 0x14) == 0) {
        local_18 = caml_alloc_channel(iVar2);
        local_14 = local_10;
        local_10 = (undefined4 *)caml_alloc_small(2,0);
        *local_10 = local_18;
        local_10[1] = local_14;
      }
      iVar2 = *(int *)(iVar2 + 0x1c);
    } while (iVar2 != 0);
  }
  caml_local_roots = (undefined4 *)uVar1;
  return local_10;
}



void caml_finalize_channel(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 0x2c) + -1;
  *(int *)(iVar1 + 0x2c) = iVar2;
  if (iVar2 < 1) {
    if (caml_channel_mutex_free != (code *)0x0) {
      (*caml_channel_mutex_free)(iVar1);
    }
    unlink_channel();
    caml_stat_free(iVar1);
  }
  return;
}



void caml_close_channel(int *param_1)

{
  close(*param_1);
  if (param_1[0xb] < 1) {
    if (caml_channel_mutex_free != (code *)0x0) {
      (*caml_channel_mutex_free)(param_1);
    }
    unlink_channel();
    caml_stat_free(param_1);
  }
  return;
}



void caml_seek_in(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  __off64_t _Var5;
  
  uVar1 = param_1[1];
  iVar2 = param_1[2];
  uVar3 = param_1[5] - (int)(param_1 + 0xd);
  iVar4 = (iVar2 - ((int)uVar3 >> 0x1f)) - (uint)(uVar1 < uVar3);
  if (((iVar4 <= param_3) &&
      (((iVar4 < param_3 || (uVar1 - uVar3 <= param_2)) && (param_3 <= iVar2)))) &&
     ((param_3 < iVar2 || (param_2 <= uVar1)))) {
    param_1[4] = (param_2 - uVar1) + param_1[5];
    return;
  }
  caml_enter_blocking_section();
  _Var5 = lseek64(*param_1,CONCAT44(param_3,param_2),0);
  if (_Var5 != CONCAT44(param_3,param_2)) {
    caml_leave_blocking_section();
    caml_sys_error(1);
  }
  caml_leave_blocking_section();
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[5] = (int)(param_1 + 0xd);
  param_1[4] = (int)(param_1 + 0xd);
  return;
}



undefined4 caml_ml_seek_in_64(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  
  uVar2 = caml_local_roots;
  local_2c = caml_local_roots;
  caml_local_roots = &local_2c;
  local_24 = 1;
  local_28 = 2;
  local_20 = &param_1;
  local_1c = &param_2;
  uVar1 = *(undefined4 *)(param_1 + 4);
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  caml_seek_in(uVar1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined4 *)uVar2;
  return 1;
}



undefined4 caml_ml_seek_in(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  
  uVar2 = caml_local_roots;
  local_2c = caml_local_roots;
  caml_local_roots = &local_2c;
  local_24 = 1;
  local_28 = 2;
  local_20 = &param_1;
  local_1c = &param_2;
  uVar1 = *(undefined4 *)(param_1 + 4);
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  caml_seek_in(uVar1,param_2 >> 1,param_2 >> 0x1f);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined4 *)uVar2;
  return 1;
}



__off64_t caml_channel_size(int *param_1)

{
  int __fd;
  longlong lVar1;
  __off64_t _Var2;
  __off64_t _Var3;
  
  __fd = *param_1;
  lVar1 = *(longlong *)(param_1 + 1);
  _Var3 = *(__off64_t *)(param_1 + 1);
  caml_enter_blocking_section();
  _Var2 = lseek64(__fd,0,2);
  if (_Var2 != -1) {
    _Var3 = lseek64(__fd,_Var3,0);
    if (_Var3 == lVar1) goto LAB_080685eb;
  }
  caml_leave_blocking_section();
  caml_sys_error(1);
LAB_080685eb:
  caml_leave_blocking_section();
  return _Var2;
}



void caml_ml_channel_size_64(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = caml_channel_size(*(undefined4 *)(param_1 + 4));
  caml_copy_int64(uVar1);
  return;
}



// WARNING: Removing unreachable block (ram,0x08068642)

int caml_ml_channel_size(int param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = caml_channel_size(*(undefined4 *)(param_1 + 4));
  if (0x3fffffff < lVar2) {
    piVar1 = __errno_location();
    *piVar1 = 0x4b;
    caml_sys_error(1);
  }
  return (int)lVar2 * 2 + 1;
}



ssize_t caml_do_read(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  int *piVar2;
  
  do {
    caml_enter_blocking_section();
    sVar1 = read(param_1,param_2,param_3);
    caml_leave_blocking_section();
    if (sVar1 != -1) {
      return sVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  caml_sys_io_error(1);
  return -1;
}



int caml_ml_input(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *__src;
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *__src_00;
  undefined4 uVar4;
  int iVar5;
  size_t __n;
  uint __n_00;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  
  uVar4 = caml_local_roots;
  local_3c = caml_local_roots;
  caml_local_roots = &local_3c;
  local_34 = 1;
  local_38 = 4;
  local_30 = &param_1;
  local_2c = &param_2;
  local_28 = &param_3;
  local_24 = &param_4;
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(puVar3);
  }
  iVar5 = param_3 >> 1;
  __n = param_4 >> 1;
  __src_00 = (void *)puVar3[4];
  __n_00 = puVar3[5] - (int)__src_00;
  if ((int)__n_00 < (int)__n) {
    if ((int)__n_00 < 1) {
      __src = puVar3 + 0xd;
      __n_00 = caml_do_read(*puVar3,__src,puVar3[3] - (int)__src);
      puVar1 = puVar3 + 1;
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + __n_00;
      puVar3[2] = puVar3[2] + ((int)__n_00 >> 0x1f) + (uint)CARRY4(uVar2,__n_00);
      puVar3[5] = (int)puVar3 + __n_00 + 0x34;
      if ((int)__n < (int)__n_00) {
        __n_00 = __n;
      }
      memmove((void *)(iVar5 + param_2),__src,__n_00);
      puVar3[4] = (int)puVar3 + __n_00 + 0x34;
    }
    else {
      memmove((void *)(iVar5 + param_2),__src_00,__n_00);
      puVar3[4] = puVar3[4] + __n_00;
    }
  }
  else {
    memmove((void *)(iVar5 + param_2),__src_00,__n);
    puVar3[4] = puVar3[4] + __n;
    __n_00 = __n;
  }
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(puVar3);
  }
  caml_local_roots = (undefined4 *)uVar4;
  return __n_00 * 2 + 1;
}



int caml_input_scan_line(undefined4 *param_1)

{
  undefined4 *__dest;
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined4 *__src;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)param_1[4];
  __dest = param_1 + 0xd;
  do {
    if ((char *)param_1[5] <= pcVar6) {
      __src = (undefined4 *)param_1[4];
      if (__dest < __src) {
        memmove(__dest,__src,(int)(char *)param_1[5] - (int)__src);
        iVar4 = param_1[4];
        param_1[4] = __dest;
        param_1[5] = param_1[5] + ((int)__dest - iVar4);
        pcVar6 = pcVar6 + ((int)__dest - iVar4);
      }
      uVar5 = param_1[5];
      if ((uint)param_1[3] <= uVar5) {
        return param_1[4] - uVar5;
      }
      uVar5 = caml_do_read(*param_1,uVar5,param_1[3] - uVar5);
      if (uVar5 == 0) {
        return param_1[4] - param_1[5];
      }
      puVar1 = param_1 + 1;
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar5;
      param_1[2] = param_1[2] + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar2,uVar5);
      param_1[5] = param_1[5] + uVar5;
    }
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if (cVar3 == '\n') {
      return (int)pcVar6 - param_1[4];
    }
  } while( true );
}



int caml_ml_input_scan_line(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  
  uVar2 = caml_local_roots;
  local_3c = caml_local_roots;
  caml_local_roots = &local_3c;
  local_34 = 1;
  local_38 = 1;
  local_30 = &param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  iVar3 = caml_input_scan_line(uVar1);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined4 *)uVar2;
  return iVar3 * 2 + 1;
}



size_t caml_getblock(undefined4 *param_1,void *param_2,size_t param_3)

{
  undefined4 *__src;
  uint *puVar1;
  uint uVar2;
  void *__src_00;
  uint uVar3;
  size_t __n;
  
  __src_00 = (void *)param_1[4];
  __n = param_1[5] - (int)__src_00;
  if ((int)__n < (int)param_3) {
    if ((int)__n < 1) {
      __src = param_1 + 0xd;
      uVar3 = caml_do_read(*param_1,__src,param_1[3] - (int)__src);
      puVar1 = param_1 + 1;
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar3;
      param_1[2] = param_1[2] + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar2,uVar3);
      param_1[5] = (int)param_1 + uVar3 + 0x34;
      __n = param_3;
      if ((int)uVar3 <= (int)param_3) {
        __n = uVar3;
      }
      memmove(param_2,__src,__n);
      param_1[4] = (int)param_1 + __n + 0x34;
    }
    else {
      memmove(param_2,__src_00,__n);
      param_1[4] = param_1[4] + __n;
    }
  }
  else {
    memmove(param_2,__src_00,param_3);
    param_1[4] = param_1[4] + param_3;
    __n = param_3;
  }
  return __n;
}



bool caml_really_getblock(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (0 < param_3) {
    while( true ) {
      iVar1 = caml_getblock(param_1,param_2,param_3);
      if ((iVar1 == 0) || (param_3 = param_3 - iVar1, param_3 < 1)) break;
      param_2 = param_2 + iVar1;
    }
  }
  return param_3 == 0;
}



undefined caml_refill(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = caml_do_read(*param_1,param_1 + 0xd,param_1[3] - (int)(param_1 + 0xd));
  if (uVar3 == 0) {
    uVar3 = caml_raise_end_of_file();
  }
  puVar1 = param_1 + 1;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[2] = param_1[2] + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar2,uVar3);
  param_1[5] = (int)param_1 + uVar3 + 0x34;
  param_1[4] = (int)param_1 + 0x35;
  return *(undefined *)(param_1 + 0xd);
}



int caml_ml_input_char(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  
  uVar3 = caml_local_roots;
  local_3c = caml_local_roots;
  caml_local_roots = &local_3c;
  local_34 = 1;
  local_38 = 1;
  local_30 = &param_1;
  iVar1 = *(int *)(param_1 + 4);
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(iVar1);
  }
  pbVar2 = *(byte **)(iVar1 + 0x10);
  if (pbVar2 < *(byte **)(iVar1 + 0x14)) {
    uVar4 = (uint)*pbVar2;
    *(byte **)(iVar1 + 0x10) = pbVar2 + 1;
  }
  else {
    uVar4 = caml_refill(iVar1);
  }
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(iVar1);
  }
  caml_local_roots = (undefined4 *)uVar3;
  return (uVar4 & 0xff) * 2 + 1;
}



int caml_getword(int param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = caml_channel_binary_mode(param_1);
  if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
    caml_failwith("input_binary_int: not a binary channel");
  }
  iVar2 = 0;
  iVar4 = 0;
  do {
    pbVar1 = *(byte **)(param_1 + 0x10);
    if (pbVar1 < *(byte **)(param_1 + 0x14)) {
      uVar3 = (uint)*pbVar1;
      *(byte **)(param_1 + 0x10) = pbVar1 + 1;
    }
    else {
      uVar3 = caml_refill(param_1);
      uVar3 = uVar3 & 0xff;
    }
    iVar2 = uVar3 + iVar2 * 0x100;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  return iVar2;
}



int caml_ml_input_int(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  
  uVar2 = caml_local_roots;
  local_3c = caml_local_roots;
  caml_local_roots = &local_3c;
  local_34 = 1;
  local_38 = 1;
  local_30 = &param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  iVar3 = caml_getword(uVar1);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined4 *)uVar2;
  return iVar3 * 2 + 1;
}



ssize_t __regparm3 do_write(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  int *piVar2;
  
  while( true ) {
    do {
      caml_enter_blocking_section();
      sVar1 = write(param_1,param_2,param_3);
      caml_leave_blocking_section();
      if (sVar1 != -1) {
        return sVar1;
      }
      piVar2 = __errno_location();
    } while (*piVar2 == 4);
    if ((*piVar2 != 0xb) || ((int)param_3 < 2)) break;
    param_3 = 1;
  }
  caml_sys_io_error(1);
  return -1;
}



size_t caml_putblock(int param_1,void *param_2,size_t param_3)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  size_t __n;
  
  pvVar3 = *(void **)(param_1 + 0x10);
  __n = *(int *)(param_1 + 0xc) - (int)pvVar3;
  if ((int)param_3 < (int)__n) {
    memmove(pvVar3,param_2,param_3);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
    __n = param_3;
  }
  else {
    memmove(pvVar3,param_2,__n);
    pvVar3 = (void *)(param_1 + 0x34);
    iVar4 = *(int *)(param_1 + 0xc) - (int)pvVar3;
    uVar5 = do_write();
    if ((int)uVar5 < iVar4) {
      memmove(pvVar3,(void *)((int)pvVar3 + uVar5),iVar4 - uVar5);
    }
    puVar1 = (uint *)(param_1 + 4);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar5;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar2,uVar5)
    ;
    *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0xc) - uVar5;
  }
  return __n;
}



undefined4 caml_ml_output(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  
  iVar5 = param_3;
  uVar2 = caml_local_roots;
  local_3c = caml_local_roots;
  caml_local_roots = &local_3c;
  local_34 = 1;
  local_38 = 4;
  local_30 = &param_1;
  local_2c = &param_2;
  local_28 = &param_3;
  local_24 = &param_4;
  uVar1 = *(undefined4 *)(param_1 + 4);
  iVar4 = param_4 >> 1;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  if (0 < iVar4) {
    iVar5 = iVar5 >> 1;
    do {
      iVar3 = caml_putblock(uVar1,iVar5 + param_2,iVar4);
      iVar5 = iVar5 + iVar3;
      iVar4 = iVar4 - iVar3;
    } while (0 < iVar4);
  }
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined4 *)uVar2;
  return 1;
}



int caml_ml_output_partial(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  
  uVar2 = caml_local_roots;
  local_3c = caml_local_roots;
  caml_local_roots = &local_3c;
  local_34 = 1;
  local_38 = 4;
  local_30 = &param_1;
  local_2c = &param_2;
  local_28 = &param_3;
  local_24 = &param_4;
  uVar1 = *(undefined4 *)(param_1 + 4);
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  iVar3 = caml_putblock(uVar1,(param_3 >> 1) + param_2,param_4 >> 1);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined4 *)uVar2;
  return iVar3 * 2 + 1;
}



void caml_really_putblock(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (0 < param_3) {
    do {
      iVar1 = caml_putblock(param_1,param_2,param_3);
      param_2 = param_2 + iVar1;
      param_3 = param_3 - iVar1;
    } while (0 < param_3);
  }
  return;
}



bool caml_flush_partial(int param_1)

{
  void *__dest;
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  __dest = (void *)(param_1 + 0x34);
  iVar4 = *(int *)(param_1 + 0x10) - (int)__dest;
  if (0 < iVar4) {
    uVar3 = do_write();
    puVar1 = (uint *)(param_1 + 4);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar2,uVar3)
    ;
    if ((int)uVar3 < iVar4) {
      memmove(__dest,(void *)((int)__dest + uVar3),iVar4 - uVar3);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - uVar3;
  }
  return *(int *)(param_1 + 0x10) == param_1 + 0x34;
}



undefined4 caml_ml_output_char(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  
  uVar3 = caml_local_roots;
  local_2c = caml_local_roots;
  caml_local_roots = &local_2c;
  local_24 = 1;
  local_28 = 2;
  local_20 = &param_1;
  local_1c = &param_2;
  iVar1 = *(int *)(param_1 + 4);
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(iVar1);
  }
  if (*(uint *)(iVar1 + 0xc) <= *(uint *)(iVar1 + 0x10)) {
    caml_flush_partial(iVar1);
  }
  puVar2 = *(undefined **)(iVar1 + 0x10);
  *puVar2 = (char)(param_2 >> 1);
  *(undefined **)(iVar1 + 0x10) = puVar2 + 1;
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(iVar1);
  }
  caml_local_roots = (undefined4 *)uVar3;
  return 1;
}



int caml_ml_flush_partial(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  
  uVar2 = caml_local_roots;
  local_3c = caml_local_roots;
  caml_local_roots = &local_3c;
  local_34 = 1;
  local_38 = 1;
  local_30 = &param_1;
  piVar1 = *(int **)(param_1 + 4);
  if (*piVar1 == -1) {
    iVar3 = 3;
  }
  else {
    if (caml_channel_mutex_lock != (code *)0x0) {
      (*caml_channel_mutex_lock)(piVar1);
    }
    iVar3 = caml_flush_partial(piVar1);
    if (caml_channel_mutex_unlock != (code *)0x0) {
      (*caml_channel_mutex_unlock)(piVar1);
    }
    iVar3 = (-(uint)(iVar3 == 0) & 0xfffffffe) + 3;
  }
  caml_local_roots = (undefined4 *)uVar2;
  return iVar3;
}



void caml_putword(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = caml_channel_binary_mode(param_1);
  if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
    caml_failwith("output_binary_int: not a binary channel");
  }
  if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x10)) {
    caml_flush_partial(param_1);
  }
  puVar2 = *(undefined **)(param_1 + 0x10);
  *puVar2 = (char)((uint)param_2 >> 0x18);
  puVar2 = puVar2 + 1;
  *(undefined **)(param_1 + 0x10) = puVar2;
  if (*(undefined **)(param_1 + 0xc) <= puVar2) {
    caml_flush_partial(param_1);
  }
  puVar2 = *(undefined **)(param_1 + 0x10);
  *puVar2 = (char)((uint)param_2 >> 0x10);
  puVar2 = puVar2 + 1;
  *(undefined **)(param_1 + 0x10) = puVar2;
  if (*(undefined **)(param_1 + 0xc) <= puVar2) {
    caml_flush_partial(param_1);
  }
  puVar2 = *(undefined **)(param_1 + 0x10);
  *puVar2 = (char)((uint)param_2 >> 8);
  puVar2 = puVar2 + 1;
  *(undefined **)(param_1 + 0x10) = puVar2;
  if (*(undefined **)(param_1 + 0xc) <= puVar2) {
    caml_flush_partial(param_1);
  }
  puVar2 = *(undefined **)(param_1 + 0x10);
  *puVar2 = (char)param_2;
  *(undefined **)(param_1 + 0x10) = puVar2 + 1;
  return;
}



undefined4 caml_ml_output_int(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  
  uVar2 = caml_local_roots;
  local_2c = caml_local_roots;
  caml_local_roots = &local_2c;
  local_24 = 1;
  local_28 = 2;
  local_20 = &param_1;
  local_1c = &param_2;
  uVar1 = *(undefined4 *)(param_1 + 4);
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  caml_putword(uVar1,param_2 >> 1);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined4 *)uVar2;
  return 1;
}



void caml_flush(undefined4 param_1)

{
  int iVar1;
  
  do {
    iVar1 = caml_flush_partial(param_1);
  } while (iVar1 == 0);
  return;
}



undefined4 caml_ml_flush(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  
  uVar2 = caml_local_roots;
  local_2c = caml_local_roots;
  caml_local_roots = &local_2c;
  local_24 = 1;
  local_28 = 1;
  local_20 = &param_1;
  piVar1 = *(int **)(param_1 + 4);
  if (*piVar1 != -1) {
    if (caml_channel_mutex_lock != (code *)0x0) {
      (*caml_channel_mutex_lock)(piVar1);
    }
    caml_flush(piVar1);
    if (caml_channel_mutex_unlock != (code *)0x0) {
      (*caml_channel_mutex_unlock)(piVar1);
    }
  }
  caml_local_roots = (undefined4 *)uVar2;
  return 1;
}



void caml_seek_out(int *param_1,int param_2,int param_3)

{
  __off64_t _Var1;
  
  caml_flush(param_1);
  caml_enter_blocking_section();
  _Var1 = lseek64(*param_1,CONCAT44(param_3,param_2),0);
  if (_Var1 != CONCAT44(param_3,param_2)) {
    caml_leave_blocking_section();
    caml_sys_error(1);
  }
  caml_leave_blocking_section();
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}



undefined4 caml_ml_seek_out_64(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  
  uVar2 = caml_local_roots;
  local_2c = caml_local_roots;
  caml_local_roots = &local_2c;
  local_24 = 1;
  local_28 = 2;
  local_20 = &param_1;
  local_1c = &param_2;
  uVar1 = *(undefined4 *)(param_1 + 4);
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  caml_seek_out(uVar1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined4 *)uVar2;
  return 1;
}



undefined4 caml_ml_seek_out(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  
  uVar2 = caml_local_roots;
  local_2c = caml_local_roots;
  caml_local_roots = &local_2c;
  local_24 = 1;
  local_28 = 2;
  local_20 = &param_1;
  local_1c = &param_2;
  uVar1 = *(undefined4 *)(param_1 + 4);
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  caml_seek_out(uVar1,param_2 >> 1,param_2 >> 0x1f);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined4 *)uVar2;
  return 1;
}



int * caml_open_descriptor_in(int param_1)

{
  int *piVar1;
  __off64_t _Var2;
  
  piVar1 = (int *)caml_stat_alloc(0x1034);
  *piVar1 = param_1;
  caml_enter_blocking_section();
  _Var2 = lseek64(param_1,0,1);
  *(__off64_t *)(piVar1 + 1) = _Var2;
  caml_leave_blocking_section();
  piVar1[5] = (int)(piVar1 + 0xd);
  piVar1[4] = (int)(piVar1 + 0xd);
  piVar1[3] = (int)(piVar1 + 0x40d);
  piVar1[6] = 0;
  piVar1[9] = 0;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  piVar1[0xc] = 0;
  piVar1[7] = (int)caml_all_opened_channels;
  piVar1[8] = 0;
  if (caml_all_opened_channels != (int *)0x0) {
    *(int **)((int)caml_all_opened_channels + 0x20) = piVar1;
  }
  caml_all_opened_channels = piVar1;
  return piVar1;
}



void caml_ml_open_descriptor_in(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = caml_open_descriptor_in(param_1 >> 1);
  caml_alloc_channel(uVar1);
  return;
}



void caml_open_descriptor_out(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = caml_open_descriptor_in(param_1);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return;
}



void caml_ml_open_descriptor_out(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = caml_open_descriptor_out(param_1 >> 1);
  caml_alloc_channel(uVar1);
  return;
}



void extern_replay_trail(void)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *local_20;
  
  local_20 = (int *)extern_trail_block;
  puVar5 = extern_trail_cur;
  while( true ) {
    for (puVar3 = (uint *)(local_20 + 1); puVar3 < puVar5; puVar3 = puVar3 + 2) {
      puVar4 = (uint *)(*puVar3 & 0xfffffffc);
      puVar1 = puVar4 + -1;
      *puVar1 = (*puVar3 & 3) << 8 | *puVar1 & 0xfffffcff;
      *puVar4 = puVar3[1];
    }
    if (local_20 == (int *)extern_trail_first) break;
    piVar2 = (int *)*local_20;
    free(local_20);
    puVar5 = (uint *)(piVar2 + 0x803);
    local_20 = piVar2;
  }
  extern_trail_block = extern_trail_first;
  extern_trail_cur = (uint *)0x807ffc4;
  return;
}



void free_extern_output(void)

{
  int *piVar1;
  int *__ptr;
  
  if (extern_userprovided_output == 0) {
    __ptr = extern_output_first;
    if (extern_output_first != (int *)0x0) {
      do {
        piVar1 = (int *)*__ptr;
        free(__ptr);
        __ptr = piVar1;
      } while (piVar1 != (int *)0x0);
    }
    extern_output_first = (int *)0x0;
  }
  return;
}



void extern_out_of_memory(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  extern_replay_trail();
  free_extern_output();
  iVar1 = caml_raise_out_of_memory();
  if (extern_userprovided_output != 0) {
    extern_replay_trail();
                    // WARNING: Subroutine does not return
    caml_failwith("Marshal.to_buffer: buffer overflow");
  }
  extern_output_block[1] = extern_ptr;
  iVar3 = 0;
  if (0xfd2 < iVar1) {
    iVar3 = iVar1;
  }
  puVar2 = (undefined4 *)malloc(iVar3 + 0x1fac);
  if (puVar2 == (undefined4 *)0x0) {
    extern_out_of_memory();
  }
  *extern_output_block = puVar2;
  extern_output_block = puVar2;
  *puVar2 = 0;
  extern_ptr = puVar2 + 2;
  extern_limit = (int)puVar2 + iVar3 + 0x1fac;
  return;
}



void __regparm3 grow_extern_output(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (extern_userprovided_output != 0) {
    extern_replay_trail();
                    // WARNING: Subroutine does not return
    caml_failwith("Marshal.to_buffer: buffer overflow");
  }
  extern_output_block[1] = extern_ptr;
  iVar2 = 0;
  if (0xfd2 < param_1) {
    iVar2 = param_1;
  }
  puVar1 = (undefined4 *)malloc(iVar2 + 0x1fac);
  if (puVar1 == (undefined4 *)0x0) {
    extern_out_of_memory();
  }
  *extern_output_block = puVar1;
  extern_output_block = puVar1;
  *puVar1 = 0;
  extern_ptr = puVar1 + 2;
  extern_limit = (int)puVar1 + iVar2 + 0x1fac;
  return;
}



void caml_serialize_block_float_8(void *param_1,int param_2)

{
  size_t __n;
  
  __n = param_2 * 8;
  if (extern_limit < (void *)(__n + (int)extern_ptr)) {
    grow_extern_output();
  }
  memmove(extern_ptr,param_1,__n);
  extern_ptr = (void *)((int)extern_ptr + __n);
  return;
}



void caml_serialize_float_8(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = param_1;
  local_10 = param_2;
  caml_serialize_block_float_8(&local_14,1);
  return;
}



void caml_serialize_block_8(undefined *param_1,int param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined *puVar3;
  int local_30;
  
  if (extern_limit < extern_ptr + param_2 * 8) {
    grow_extern_output();
  }
  if (0 < param_2) {
    local_30 = param_2;
    puVar3 = extern_ptr;
    do {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      *puVar3 = param_1[7];
      puVar3[1] = param_1[6];
      puVar3[7] = uVar1;
      puVar3[6] = uVar2;
      uVar1 = param_1[2];
      uVar2 = param_1[3];
      puVar3[2] = param_1[5];
      puVar3[3] = param_1[4];
      puVar3[5] = uVar1;
      puVar3[4] = uVar2;
      param_1 = param_1 + 8;
      puVar3 = puVar3 + 8;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
    extern_ptr = extern_ptr + param_2 * 8;
  }
  return;
}



void caml_serialize_int_8(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = param_1;
  local_10 = param_2;
  caml_serialize_block_8(&local_14,1);
  return;
}



void caml_serialize_block_4(int param_1,int param_2)

{
  undefined uVar1;
  undefined uVar2;
  int iVar3;
  int local_20;
  
  if (extern_limit < (uint)(param_2 * 4 + extern_ptr)) {
    grow_extern_output();
  }
  if (0 < param_2) {
    iVar3 = 0;
    local_20 = param_2;
    do {
      uVar1 = *(undefined *)(param_1 + iVar3);
      uVar2 = *(undefined *)(param_1 + 1 + iVar3);
      *(undefined *)(extern_ptr + iVar3) = *(undefined *)(param_1 + 3 + iVar3);
      *(undefined *)(extern_ptr + 1 + iVar3) = *(undefined *)(param_1 + 2 + iVar3);
      *(undefined *)(extern_ptr + 3 + iVar3) = uVar1;
      *(undefined *)(extern_ptr + 2 + iVar3) = uVar2;
      iVar3 = iVar3 + 4;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    extern_ptr = extern_ptr + param_2 * 4;
  }
  return;
}



void caml_serialize_float_4(void)

{
  caml_serialize_block_4(&stack0x00000004,1);
  return;
}



void caml_serialize_block_2(int param_1,int param_2)

{
  undefined uVar1;
  int iVar2;
  int local_30;
  
  if (extern_limit < (uint)(param_2 * 2 + extern_ptr)) {
    grow_extern_output();
  }
  if (0 < param_2) {
    iVar2 = 0;
    local_30 = param_2;
    do {
      uVar1 = *(undefined *)(param_1 + iVar2);
      *(undefined *)(extern_ptr + iVar2) = *(undefined *)(param_1 + 1 + iVar2);
      *(undefined *)(extern_ptr + 1 + iVar2) = uVar1;
      iVar2 = iVar2 + 2;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
    extern_ptr = extern_ptr + param_2 * 2;
  }
  return;
}



void caml_serialize_block_1(void *param_1,size_t param_2)

{
  if (extern_limit < param_2 + (int)extern_ptr) {
    grow_extern_output();
  }
  memmove(extern_ptr,param_1,param_2);
  extern_ptr = (void *)((int)extern_ptr + param_2);
  return;
}



void caml_serialize_int_4(undefined4 param_1)

{
  if (extern_limit < extern_ptr + 4) {
    grow_extern_output();
  }
  *extern_ptr = (char)((uint)param_1 >> 0x18);
  extern_ptr[1] = (char)((uint)param_1 >> 0x10);
  extern_ptr[2] = (char)((uint)param_1 >> 8);
  extern_ptr[3] = (char)param_1;
  extern_ptr = extern_ptr + 4;
  return;
}



void caml_serialize_int_2(undefined4 param_1)

{
  if (extern_limit < extern_ptr + 2) {
    grow_extern_output();
  }
  *extern_ptr = (char)((uint)param_1 >> 8);
  extern_ptr[1] = (char)param_1;
  extern_ptr = extern_ptr + 2;
  return;
}



void caml_serialize_int_1(undefined param_1)

{
  if (extern_limit < extern_ptr + 1) {
    grow_extern_output();
  }
  *extern_ptr = param_1;
  extern_ptr = extern_ptr + 1;
  return;
}



void __regparm3 writecode16(undefined param_1,undefined4 param_2)

{
  if (extern_limit < extern_ptr + 3) {
    grow_extern_output();
  }
  *extern_ptr = param_1;
  extern_ptr[1] = (char)((uint)param_2 >> 8);
  extern_ptr[2] = (char)param_2;
  extern_ptr = extern_ptr + 3;
  return;
}



void __regparm3 writecode8(undefined param_1,undefined param_2)

{
  if (extern_limit < extern_ptr + 2) {
    grow_extern_output();
  }
  *extern_ptr = param_1;
  extern_ptr[1] = param_2;
  extern_ptr = extern_ptr + 2;
  return;
}



void __regparm3 writecode32(undefined param_1,undefined4 param_2)

{
  if (extern_limit < extern_ptr + 5) {
    grow_extern_output();
  }
  *extern_ptr = param_1;
  extern_ptr[1] = (char)((uint)param_2 >> 0x18);
  extern_ptr[2] = (char)((uint)param_2 >> 0x10);
  extern_ptr[3] = (char)((uint)param_2 >> 8);
  extern_ptr[4] = (char)param_2;
  extern_ptr = extern_ptr + 5;
  return;
}



void __regparm3 writeblock(void *param_1,size_t param_2)

{
  if (extern_limit < param_2 + (int)extern_ptr) {
    grow_extern_output();
  }
  memmove(extern_ptr,param_1,param_2);
  extern_ptr = (void *)((int)extern_ptr + param_2);
  return;
}



void __regparm3 write32(undefined4 param_1)

{
  if (extern_limit < extern_ptr + 4) {
    grow_extern_output();
  }
  *extern_ptr = (char)((uint)param_1 >> 0x18);
  extern_ptr[1] = (char)((uint)param_1 >> 0x10);
  extern_ptr[2] = (char)((uint)param_1 >> 8);
  extern_ptr[3] = (char)param_1;
  extern_ptr = extern_ptr + 4;
  return;
}



void __regparm3 extern_record_location(uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (extern_ignore_sharing == 0) {
    if (extern_trail_cur == extern_trail_limit) {
      puVar2 = (undefined4 *)malloc(0x200c);
      if (puVar2 == (undefined4 *)0x0) {
        extern_out_of_memory();
      }
      *puVar2 = extern_trail_block;
      extern_trail_cur = puVar2 + 1;
      extern_trail_limit = puVar2 + 0x803;
      extern_trail_block = puVar2;
    }
    uVar1 = param_1[-1];
    *extern_trail_cur = uVar1 >> 8 & 3 | (uint)param_1;
    extern_trail_cur[1] = *param_1;
    extern_trail_cur = extern_trail_cur + 2;
    param_1[-1] = uVar1 & 0xfffffcff | 0x200;
    *param_1 = obj_counter;
    obj_counter = obj_counter + 1;
  }
  return;
}



void init_extern_output(void)

{
  undefined4 *puVar1;
  
  extern_userprovided_output = 0;
  puVar1 = (undefined4 *)malloc(0x1fac);
  extern_output_first = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)caml_raise_out_of_memory();
  }
  extern_output_block = puVar1;
  *puVar1 = 0;
  extern_ptr = puVar1 + 2;
  extern_limit = puVar1 + 0x7eb;
  return;
}



void __regparm3 extern_invalid_argument(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int **ppiVar3;
  uint uVar4;
  int iVar5;
  int **ppiVar6;
  uint uVar7;
  char *pcVar8;
  byte bVar9;
  char cStack_4c;
  int iStack_40;
  int aiStack_3c [4];
  undefined4 uStack_2c;
  
  bVar9 = 0;
  extern_replay_trail();
  free_extern_output();
  ppiVar3 = (int **)caml_invalid_argument();
  uStack_2c = param_1;
  do {
    do {
      ppiVar6 = ppiVar3;
      if (((uint)ppiVar6 & 1) != 0) {
        uVar7 = (int)ppiVar6 >> 1;
        if (uVar7 < 0x40) {
          if (extern_limit <= extern_ptr) {
            grow_extern_output();
          }
          *extern_ptr = (char)uVar7 + '@';
          extern_ptr = extern_ptr + 1;
          return;
        }
        if (uVar7 + 0x80 < 0x100) {
          writecode8();
          return;
        }
        if (uVar7 + 0x8000 < 0x10000) {
          writecode16();
          return;
        }
        writecode32();
        return;
      }
      if ((*(byte *)((&caml_page_table)[(uint)ppiVar6 >> 0x17] + ((uint)ppiVar6 >> 0xc & 0x7ff)) & 7
          ) == 0) {
        if ((caml_code_area_start <= ppiVar6) && (ppiVar6 < caml_code_area_end)) {
          if (extern_closures == 0) {
            extern_invalid_argument();
          }
          writecode32();
          caml_code_checksum();
          writeblock();
          return;
        }
        extern_invalid_argument();
        return;
      }
      piVar2 = ppiVar6[-1];
      uVar7 = (uint)piVar2 & 0xff;
    } while ((uVar7 == 0xfa) &&
            ((ppiVar3 = (int **)*ppiVar6, ((uint)ppiVar3 & 1) != 0 ||
             (((((*(byte *)((&caml_page_table)[(uint)ppiVar3 >> 0x17] +
                           ((uint)ppiVar3 >> 0xc & 0x7ff)) & 7) != 0 &&
                (cVar1 = *(char *)(ppiVar3 + -1), cVar1 != -6)) && (cVar1 != -10)) && (cVar1 != -3))
             ))));
    uVar4 = (uint)piVar2 >> 10;
    if (uVar4 == 0) {
      if (uVar7 < 0x10) {
        if (extern_limit <= extern_ptr) {
          grow_extern_output();
        }
        *extern_ptr = (char)uVar7 + -0x80;
        extern_ptr = extern_ptr + 1;
        return;
      }
      writecode32();
      return;
    }
    if (((uint)piVar2 & 0x300) == 0x200) {
      if ((uint)(obj_counter - (int)*ppiVar6) < 0x100) {
        writecode8();
        return;
      }
      if ((uint)(obj_counter - (int)*ppiVar6) < 0x10000) {
        writecode16();
        return;
      }
      writecode32();
      return;
    }
    switch(uVar7) {
    case 0xf9:
      writecode32();
      extern_rec();
      return;
    default:
      if ((uVar7 < 0x10) && (uVar4 < 8)) {
        if (extern_limit <= extern_ptr) {
          grow_extern_output();
        }
        cStack_4c = (char)uVar4;
        *extern_ptr = cStack_4c * '\x10' + -0x80 + (char)uVar7;
        extern_ptr = extern_ptr + 1;
      }
      else {
        writecode32();
      }
      size_32 = uVar4 + 1 + size_32;
      size_64 = uVar4 + 1 + size_64;
      ppiVar3 = (int **)*ppiVar6;
      extern_record_location();
      if (uVar4 != 1) {
        extern_rec();
        uVar4 = uVar4 - 1;
        uVar7 = 1;
        if (uVar4 < 2) {
          uVar4 = 1;
        }
        else {
          do {
            extern_rec();
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar4);
        }
        ppiVar3 = (int **)ppiVar6[uVar4];
      }
      break;
    case 0xfb:
      extern_invalid_argument();
      return;
    case 0xfc:
      uVar7 = caml_string_length(ppiVar6);
      if (uVar7 < 0x20) {
        if (extern_limit <= extern_ptr) {
          grow_extern_output();
        }
        *extern_ptr = (char)uVar7 + ' ';
        extern_ptr = extern_ptr + 1;
      }
      else if (uVar7 < 0x100) {
        writecode8();
      }
      else {
        writecode32();
      }
      writeblock();
      size_32 = size_32 + 1 + (uVar7 + 4 >> 2);
      size_64 = size_64 + 1 + (uVar7 + 8 >> 3);
      extern_record_location();
      return;
    case 0xfd:
      if (extern_limit <= extern_ptr) {
        grow_extern_output();
      }
      *extern_ptr = '\f';
      extern_ptr = extern_ptr + 1;
      writeblock();
      size_32 = size_32 + 3;
      size_64 = size_64 + 2;
      extern_record_location();
      return;
    case 0xfe:
      if ((uint)piVar2 >> 0xb < 0x100) {
        writecode8();
      }
      else {
        writecode32();
      }
      writeblock();
      size_32 = size_32 + 1 + (uVar4 & 0xfffffffe);
      size_64 = ((uint)piVar2 >> 0xb) + 1 + size_64;
      extern_record_location();
      return;
    case 0xff:
      pcVar8 = (char *)**ppiVar6;
      if ((char *)(*ppiVar6)[4] == (char *)0x0) {
        extern_invalid_argument();
      }
      if (extern_limit <= extern_ptr) {
        grow_extern_output();
      }
      *extern_ptr = '\x12';
      extern_ptr = extern_ptr + 1;
      iVar5 = -1;
      goto code_r0x08069ebf;
    }
  } while( true );
  while( true ) {
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    if (cVar1 == '\0') break;
code_r0x08069ebf:
    if (iVar5 == 0) break;
  }
  writeblock();
  (*(code *)(*ppiVar6)[4])(ppiVar6,aiStack_3c,&iStack_40);
  size_32 = size_32 + 2 + (aiStack_3c[0] + 3U >> 2);
  size_64 = size_64 + 2 + (iStack_40 + 7U >> 3);
  extern_record_location();
  return;
}



void __regparm3 extern_rec(int **param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int **ppiVar5;
  uint uVar6;
  char *pcVar7;
  byte bVar8;
  char local_30;
  int local_24;
  int local_20 [4];
  
  bVar8 = 0;
  do {
    do {
      ppiVar5 = param_1;
      if (((uint)ppiVar5 & 1) != 0) {
        uVar6 = (int)ppiVar5 >> 1;
        if (uVar6 < 0x40) {
          if (extern_limit <= extern_ptr) {
            grow_extern_output();
          }
          *extern_ptr = (char)uVar6 + '@';
          extern_ptr = extern_ptr + 1;
          return;
        }
        if (uVar6 + 0x80 < 0x100) {
          writecode8();
          return;
        }
        if (uVar6 + 0x8000 < 0x10000) {
          writecode16();
          return;
        }
        writecode32();
        return;
      }
      if ((*(byte *)((&caml_page_table)[(uint)ppiVar5 >> 0x17] + ((uint)ppiVar5 >> 0xc & 0x7ff)) & 7
          ) == 0) {
        if ((caml_code_area_start <= ppiVar5) && (ppiVar5 < caml_code_area_end)) {
          if (extern_closures == 0) {
            extern_invalid_argument();
          }
          writecode32();
          caml_code_checksum();
          writeblock();
          return;
        }
        extern_invalid_argument();
        return;
      }
      piVar2 = ppiVar5[-1];
      uVar6 = (uint)piVar2 & 0xff;
    } while ((uVar6 == 0xfa) &&
            ((param_1 = (int **)*ppiVar5, ((uint)param_1 & 1) != 0 ||
             (((((*(byte *)((&caml_page_table)[(uint)param_1 >> 0x17] +
                           ((uint)param_1 >> 0xc & 0x7ff)) & 7) != 0 &&
                (cVar1 = *(char *)(param_1 + -1), cVar1 != -6)) && (cVar1 != -10)) && (cVar1 != -3))
             ))));
    uVar3 = (uint)piVar2 >> 10;
    if (uVar3 == 0) {
      if (uVar6 < 0x10) {
        if (extern_limit <= extern_ptr) {
          grow_extern_output();
        }
        *extern_ptr = (char)uVar6 + -0x80;
        extern_ptr = extern_ptr + 1;
        return;
      }
      writecode32();
      return;
    }
    if (((uint)piVar2 & 0x300) == 0x200) {
      if ((uint)(obj_counter - (int)*ppiVar5) < 0x100) {
        writecode8();
        return;
      }
      if ((uint)(obj_counter - (int)*ppiVar5) < 0x10000) {
        writecode16();
        return;
      }
      writecode32();
      return;
    }
    switch(uVar6) {
    case 0xf9:
      writecode32();
      extern_rec();
      return;
    default:
      if ((uVar6 < 0x10) && (uVar3 < 8)) {
        if (extern_limit <= extern_ptr) {
          grow_extern_output();
        }
        local_30 = (char)uVar3;
        *extern_ptr = local_30 * '\x10' + -0x80 + (char)uVar6;
        extern_ptr = extern_ptr + 1;
      }
      else {
        writecode32();
      }
      size_32 = uVar3 + 1 + size_32;
      size_64 = uVar3 + 1 + size_64;
      param_1 = (int **)*ppiVar5;
      extern_record_location();
      if (uVar3 != 1) {
        extern_rec();
        uVar3 = uVar3 - 1;
        uVar6 = 1;
        if (uVar3 < 2) {
          uVar3 = 1;
        }
        else {
          do {
            extern_rec();
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar3);
        }
        param_1 = (int **)ppiVar5[uVar3];
      }
      break;
    case 0xfb:
      extern_invalid_argument();
      return;
    case 0xfc:
      uVar6 = caml_string_length(ppiVar5);
      if (uVar6 < 0x20) {
        if (extern_limit <= extern_ptr) {
          grow_extern_output();
        }
        *extern_ptr = (char)uVar6 + ' ';
        extern_ptr = extern_ptr + 1;
      }
      else if (uVar6 < 0x100) {
        writecode8();
      }
      else {
        writecode32();
      }
      writeblock();
      size_32 = size_32 + 1 + (uVar6 + 4 >> 2);
      size_64 = size_64 + 1 + (uVar6 + 8 >> 3);
      extern_record_location();
      return;
    case 0xfd:
      if (extern_limit <= extern_ptr) {
        grow_extern_output();
      }
      *extern_ptr = '\f';
      extern_ptr = extern_ptr + 1;
      writeblock();
      size_32 = size_32 + 3;
      size_64 = size_64 + 2;
      extern_record_location();
      return;
    case 0xfe:
      if ((uint)piVar2 >> 0xb < 0x100) {
        writecode8();
      }
      else {
        writecode32();
      }
      writeblock();
      size_32 = size_32 + 1 + (uVar3 & 0xfffffffe);
      size_64 = ((uint)piVar2 >> 0xb) + 1 + size_64;
      extern_record_location();
      return;
    case 0xff:
      pcVar7 = (char *)**ppiVar5;
      if ((char *)(*ppiVar5)[4] == (char *)0x0) {
        extern_invalid_argument();
      }
      if (extern_limit <= extern_ptr) {
        grow_extern_output();
      }
      *extern_ptr = '\x12';
      extern_ptr = extern_ptr + 1;
      iVar4 = -1;
      goto code_r0x08069ebf;
    }
  } while( true );
  while( true ) {
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
    if (cVar1 == '\0') break;
code_r0x08069ebf:
    if (iVar4 == 0) break;
  }
  writeblock();
  (*(code *)(*ppiVar5)[4])(ppiVar5,local_20,&local_24);
  size_32 = size_32 + 2 + (local_20[0] + 3U >> 2);
  size_64 = size_64 + 2 + (local_24 + 7U >> 3);
  extern_record_location();
  return;
}



int __regparm3 extern_value(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = caml_convert_flag_list(param_2,&extern_flags);
  extern_ignore_sharing = uVar2 & 1;
  extern_closures = uVar2 & 2;
  extern_trail_block = extern_trail_first;
  extern_trail_cur = 0x807ffc4;
  extern_trail_limit = &extern_trail_block;
  obj_counter = 0;
  size_32 = 0;
  size_64 = 0;
  write32();
  extern_ptr = (undefined4 *)((int)extern_ptr + 0x10);
  extern_rec();
  if (extern_userprovided_output == 0) {
    *(undefined4 **)(extern_output_block + 4) = extern_ptr;
  }
  extern_replay_trail();
  if (extern_userprovided_output == 0) {
    iVar3 = 0;
    for (puVar1 = extern_output_first; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
    {
      iVar3 = (puVar1[1] - (int)puVar1) + -8 + iVar3;
    }
    extern_ptr = extern_output_first + 3;
    extern_limit = extern_output_first + 0x7eb;
  }
  else {
    iVar3 = (int)extern_ptr - extern_userprovided_output;
    extern_ptr = (undefined4 *)(extern_userprovided_output + 4);
  }
  write32();
  write32();
  write32();
  write32();
  return iVar3;
}



void caml_output_value_to_block(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  extern_userprovided_output = param_3;
  extern_ptr = param_3;
  extern_limit = param_3 + param_4;
  extern_value();
  return;
}



void caml_output_value_to_malloc
               (undefined4 param_1,undefined4 param_2,void **param_3,size_t *param_4)

{
  undefined4 *puVar1;
  size_t sVar2;
  void *__dest;
  
  init_extern_output();
  sVar2 = extern_value();
  __dest = malloc(sVar2);
  if (__dest == (void *)0x0) {
    extern_out_of_memory();
  }
  *param_3 = __dest;
  *param_4 = sVar2;
  for (puVar1 = extern_output_first; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    sVar2 = puVar1[1] - (int)(puVar1 + 2);
    memmove(__dest,puVar1 + 2,sVar2);
    __dest = (void *)((int)__dest + sVar2);
  }
  free_extern_output();
  return;
}



int caml_output_value_to_buffer(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  extern_userprovided_output = (param_2 >> 1) + param_1;
  extern_limit = extern_userprovided_output + (param_3 >> 1);
  extern_ptr = extern_userprovided_output;
  iVar1 = extern_value();
  return iVar1 * 2 + 1;
}



int caml_output_value_to_string(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *__ptr;
  size_t __n;
  int iVar4;
  
  init_extern_output();
  uVar2 = extern_value();
  __ptr = extern_output_first;
  iVar3 = caml_alloc_string(uVar2);
  if (__ptr != (int *)0x0) {
    iVar4 = 0;
    do {
      __n = __ptr[1] - (int)(__ptr + 2);
      memmove((void *)(iVar4 + iVar3),__ptr + 2,__n);
      iVar4 = iVar4 + __n;
      piVar1 = (int *)*__ptr;
      free(__ptr);
      __ptr = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return iVar3;
}



void caml_output_val(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *__ptr;
  int iVar2;
  
  iVar2 = caml_channel_binary_mode(param_1);
  if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
    caml_failwith("output_value: not a binary channel");
  }
  init_extern_output();
  extern_value();
  __ptr = extern_output_first;
  while (__ptr != (undefined4 *)0x0) {
    caml_really_putblock(param_1,__ptr + 2,__ptr[1] - (int)(__ptr + 2));
    puVar1 = (undefined4 *)*__ptr;
    free(__ptr);
    __ptr = puVar1;
  }
  return;
}



undefined4 caml_output_value(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  
  uVar2 = caml_local_roots;
  local_2c = caml_local_roots;
  caml_local_roots = &local_2c;
  local_24 = 1;
  local_28 = 3;
  local_20 = &param_1;
  local_1c = &param_2;
  local_18 = &param_3;
  uVar1 = *(undefined4 *)(param_1 + 4);
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  caml_output_val(uVar1,param_2,param_3);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined4 *)uVar2;
  return 1;
}



undefined caml_deserialize_uint_1(void)

{
  undefined uVar1;
  
  uVar1 = *intern_src;
  intern_src = intern_src + 1;
  return uVar1;
}



int caml_deserialize_sint_1(void)

{
  char cVar1;
  
  cVar1 = *intern_src;
  intern_src = intern_src + 1;
  return (int)cVar1;
}



int caml_deserialize_uint_2(void)

{
  byte *pbVar1;
  
  pbVar1 = intern_src;
  intern_src = intern_src + 2;
  return (uint)pbVar1[1] + (uint)*pbVar1 * 0x100;
}



int caml_deserialize_sint_2(void)

{
  undefined *puVar1;
  
  puVar1 = intern_src;
  intern_src = intern_src + 2;
  return (int)CONCAT11(*puVar1,puVar1[1]);
}



int caml_deserialize_uint_4(void)

{
  byte *pbVar1;
  
  pbVar1 = intern_src;
  intern_src = intern_src + 4;
  return (uint)pbVar1[3] + (uint)*pbVar1 * 0x1000000 + (uint)pbVar1[1] * 0x10000 +
         (uint)pbVar1[2] * 0x100;
}



int caml_deserialize_sint_4(void)

{
  byte *pbVar1;
  
  pbVar1 = intern_src;
  intern_src = intern_src + 4;
  return (uint)pbVar1[3] + (uint)*pbVar1 * 0x1000000 + (uint)pbVar1[1] * 0x10000 +
         (uint)pbVar1[2] * 0x100;
}



void caml_deserialize_block_2(int param_1,int param_2)

{
  undefined uVar1;
  int iVar2;
  int local_18;
  
  if (0 < param_2) {
    iVar2 = 0;
    local_18 = param_2;
    do {
      uVar1 = *(undefined *)(intern_src + iVar2);
      *(undefined *)(param_1 + iVar2) = *(undefined *)(intern_src + 1 + iVar2);
      *(undefined *)(param_1 + 1 + iVar2) = uVar1;
      iVar2 = iVar2 + 2;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    intern_src = intern_src + param_2 * 2;
  }
  return;
}



void caml_deserialize_block_4(int param_1,int param_2)

{
  undefined uVar1;
  undefined uVar2;
  int iVar3;
  int local_14;
  
  if (0 < param_2) {
    iVar3 = 0;
    local_14 = param_2;
    do {
      uVar1 = *(undefined *)(intern_src + iVar3);
      uVar2 = *(undefined *)(intern_src + 1 + iVar3);
      *(undefined *)(param_1 + iVar3) = *(undefined *)(intern_src + 3 + iVar3);
      *(undefined *)(param_1 + 1 + iVar3) = *(undefined *)(intern_src + 2 + iVar3);
      *(undefined *)(param_1 + 3 + iVar3) = uVar1;
      *(undefined *)(param_1 + 2 + iVar3) = uVar2;
      iVar3 = iVar3 + 4;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    intern_src = intern_src + param_2 * 4;
  }
  return;
}



longdouble caml_deserialize_float_4(void)

{
  float local_8;
  
  caml_deserialize_block_4(&local_8,1);
  return (longdouble)local_8;
}



void caml_deserialize_block_8(undefined *param_1,int param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined *puVar3;
  int local_18;
  
  if (0 < param_2) {
    local_18 = param_2;
    puVar3 = intern_src;
    do {
      uVar1 = *puVar3;
      uVar2 = puVar3[1];
      *param_1 = puVar3[7];
      param_1[1] = puVar3[6];
      param_1[7] = uVar1;
      param_1[6] = uVar2;
      uVar1 = puVar3[2];
      uVar2 = puVar3[3];
      param_1[2] = puVar3[5];
      param_1[3] = puVar3[4];
      param_1[5] = uVar1;
      param_1[4] = uVar2;
      puVar3 = puVar3 + 8;
      param_1 = param_1 + 8;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    intern_src = intern_src + param_2 * 8;
  }
  return;
}



undefined8 caml_deserialize_sint_8(void)

{
  undefined8 local_c;
  
  caml_deserialize_block_8(&local_c,1);
  return local_c;
}



undefined8 caml_deserialize_uint_8(void)

{
  undefined8 local_c;
  
  caml_deserialize_block_8(&local_c,1);
  return local_c;
}



int caml_marshal_data_size(int param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((param_2 >> 1) + param_1);
  intern_input_malloced = 0;
  if ((uint)pbVar1[3] + (uint)*pbVar1 * 0x1000000 + (uint)pbVar1[1] * 0x10000 +
      (uint)pbVar1[2] * 0x100 != -0x7b6a5942) {
    intern_src = pbVar1 + 4;
                    // WARNING: Subroutine does not return
    caml_failwith("Marshal.data_size: bad object");
  }
  intern_src = pbVar1 + 8;
  return ((uint)pbVar1[4] * 0x1000000 + (uint)pbVar1[7] + (uint)pbVar1[5] * 0x10000 +
         (uint)pbVar1[6] * 0x100) * 2 + 1;
}



void intern_cleanup(void)

{
  if (intern_input_malloced != 0) {
    caml_stat_free(intern_input);
  }
  if (intern_obj_table != 0) {
    caml_stat_free(intern_obj_table);
  }
  if (intern_extra_block == 0) {
    if (intern_block != 0) {
      *(undefined4 *)(intern_block + -4) = intern_header;
    }
  }
  else {
    caml_free_for_heap(intern_extra_block);
  }
  return;
}



void caml_deserialize_error(undefined4 param_1)

{
  intern_cleanup();
                    // WARNING: Subroutine does not return
  caml_failwith(param_1);
}



void caml_deserialize_block_float_8(void *param_1,int param_2)

{
  memmove(param_1,intern_src,param_2 * 8);
  intern_src = (void *)((int)intern_src + param_2 * 8);
  return;
}



longdouble caml_deserialize_float_8(void)

{
  double local_14 [2];
  
  caml_deserialize_block_float_8(local_14,1);
  return (longdouble)local_14[0];
}



void caml_deserialize_block_1(void *param_1,size_t param_2)

{
  memmove(param_1,intern_src,param_2);
  intern_src = (void *)((int)intern_src + param_2);
  return;
}



undefined1 * caml_code_checksum(void)

{
  undefined local_64 [92];
  
  if (checksum_computed_3405 == 0) {
    caml_MD5Init(local_64);
    caml_MD5Update(local_64,caml_code_area_start,caml_code_area_end - caml_code_area_start);
    caml_MD5Final(checksum_3404,local_64);
    checksum_computed_3405 = 1;
  }
  return checksum_3404;
}



void __regparm3 intern_alloc(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_1 == 0) {
    intern_obj_table = 0;
    intern_extra_block = (uint *)0x0;
    intern_block = (undefined *)0x0;
  }
  else {
    uVar1 = param_1 - 1;
    if (uVar1 < 0x400000) {
      if (uVar1 == 0) {
        intern_block = &DAT_080825b4;
      }
      else if (uVar1 < 0x101) {
        intern_block = (undefined *)caml_alloc_small(uVar1,0xfc);
      }
      else {
        intern_block = (undefined *)caml_alloc_shr(uVar1,0xfc);
      }
      intern_dest = (uint *)(intern_block + -4);
      intern_header = *intern_dest;
      intern_color = intern_header & 0x300;
      intern_extra_block = (uint *)0x0;
    }
    else {
      puVar2 = (uint *)caml_alloc_for_heap(param_1 * 4 + 0xfffU & 0xfffff000);
      intern_extra_block = puVar2;
      if (puVar2 == (uint *)0x0) {
        puVar2 = (uint *)caml_raise_out_of_memory();
      }
      intern_color = caml_allocation_color(puVar2);
      intern_dest = intern_extra_block;
    }
    obj_counter = 0;
    if (param_2 == 0) {
      intern_obj_table = 0;
    }
    else {
      intern_obj_table = caml_stat_alloc(param_2 << 2);
    }
  }
  return;
}



void __regparm3 intern_rec(int **param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  size_t __n;
  int *__dest;
  undefined uVar12;
  undefined uVar13;
  byte bVar14;
  uint local_44;
  int **local_40;
  byte local_30 [16];
  int local_20;
  
  bVar14 = 0;
  local_40 = param_1;
LAB_0806a8e1:
  piVar7 = intern_dest;
  bVar1 = *intern_src;
  uVar10 = (uint)bVar1;
  pbVar5 = intern_src + 1;
  if (0x3f < uVar10) {
    if (uVar10 < 0x80) {
      __dest = (int *)((uVar10 & 0x3f) * 2 + 1);
      intern_src = pbVar5;
    }
    else {
      uVar10 = uVar10 & 0xf;
      uVar11 = bVar1 >> 4 & 7;
      intern_src = pbVar5;
LAB_0806a911:
      if (uVar11 != 0) goto LAB_0806a921;
      __dest = &DAT_080821c4 + uVar10;
    }
    goto LAB_0806af29;
  }
  switch(bVar1) {
  case 0:
    __dest = (int *)((char)*pbVar5 * 2 + 1);
    intern_src = intern_src + 2;
    goto LAB_0806af29;
  case 1:
    __dest = (int *)(((char)intern_src[1] * 0x100 + (uint)intern_src[2]) * 2 + 1);
    intern_src = intern_src + 3;
    goto LAB_0806af29;
  case 2:
    __dest = (int *)(((uint)intern_src[1] * 0x1000000 + (uint)intern_src[2] * 0x10000 +
                      (uint)intern_src[4] + (uint)intern_src[3] * 0x100) * 2 + 1);
    intern_src = intern_src + 5;
    goto LAB_0806af29;
  case 3:
    intern_src = pbVar5;
    intern_cleanup();
                    // WARNING: Subroutine does not return
    caml_failwith("input_value: integer too large");
  case 4:
    uVar10 = (uint)*pbVar5;
    intern_src = intern_src + 2;
    break;
  case 5:
    uVar10 = (uint)CONCAT11(intern_src[1],intern_src[2]);
    intern_src = intern_src + 3;
    break;
  case 6:
    uVar10 = (uint)intern_src[1] * 0x1000000 + (uint)intern_src[4] + (uint)intern_src[2] * 0x10000 +
             (uint)intern_src[3] * 0x100;
    intern_src = intern_src + 5;
    break;
  case 7:
  case 0xf:
    local_44 = (uint)intern_src[1] * 0x1000000 + (uint)intern_src[4] + (uint)intern_src[2] * 0x10000
               + (uint)intern_src[3] * 0x100;
    intern_src = intern_src + 5;
    goto LAB_0806ac79;
  case 8:
    uVar11 = (uint)intern_src[1] * 0x1000000 + (uint)intern_src[4] + (uint)intern_src[2] * 0x10000 +
             (uint)intern_src[3] * 0x100;
    uVar10 = uVar11 & 0xff;
    uVar11 = uVar11 >> 10;
    intern_src = intern_src + 5;
    goto LAB_0806a911;
  case 9:
    __n = (size_t)*pbVar5;
    intern_src = intern_src + 2;
    goto LAB_0806a9bd;
  case 10:
    __n = (uint)intern_src[1] * 0x1000000 + (uint)intern_src[4] + (uint)intern_src[2] * 0x10000 +
          (uint)intern_src[3] * 0x100;
    intern_src = intern_src + 5;
    goto LAB_0806a9bd;
  case 0xb:
  case 0xc:
    __dest = intern_dest + 1;
    intern_src = pbVar5;
    if (intern_obj_table != 0) {
      *(int **)(intern_obj_table + obj_counter * 4) = __dest;
      obj_counter = obj_counter + 1;
    }
    *intern_dest = intern_color + 0x8fd;
    intern_dest = intern_dest + 3;
    memmove(__dest,intern_src,8);
    intern_src = intern_src + 8;
    if (uVar10 != 0xc) {
      uVar12 = *(undefined *)__dest;
      uVar13 = *(undefined *)((int)piVar7 + 5);
      *(undefined *)__dest = *(undefined *)((int)piVar7 + 0xb);
      *(undefined *)((int)piVar7 + 5) = *(undefined *)((int)piVar7 + 10);
      *(undefined *)((int)piVar7 + 0xb) = uVar12;
      *(undefined *)((int)piVar7 + 10) = uVar13;
      uVar12 = *(undefined *)((int)piVar7 + 6);
      uVar13 = *(undefined *)((int)piVar7 + 7);
      *(undefined *)((int)piVar7 + 6) = *(undefined *)((int)piVar7 + 9);
      *(undefined *)((int)piVar7 + 7) = *(undefined *)(piVar7 + 2);
      *(undefined *)((int)piVar7 + 9) = uVar12;
      *(undefined *)(piVar7 + 2) = uVar13;
    }
    goto LAB_0806af29;
  case 0xd:
  case 0xe:
    local_44 = (uint)*pbVar5;
    intern_src = intern_src + 2;
LAB_0806ac79:
    __dest = intern_dest + 1;
    if (intern_obj_table != 0) {
      *(int **)(intern_obj_table + obj_counter * 4) = __dest;
      obj_counter = obj_counter + 1;
    }
    *intern_dest = intern_color + 0xfe + local_44 * 0x800;
    intern_dest = intern_dest + local_44 * 2 + 1;
    memmove(__dest,intern_src,local_44 * 8);
    intern_src = intern_src + local_44 * 8;
    if (((uVar10 != 0xe) && (uVar10 != 7)) && (local_44 != 0)) {
      uVar10 = 0;
      do {
        uVar12 = *(undefined *)(piVar7 + 1);
        uVar13 = *(undefined *)((int)piVar7 + 5);
        *(undefined *)(piVar7 + 1) = *(undefined *)((int)piVar7 + 0xb);
        *(undefined *)((int)piVar7 + 5) = *(undefined *)((int)piVar7 + 10);
        *(undefined *)((int)piVar7 + 0xb) = uVar12;
        *(undefined *)((int)piVar7 + 10) = uVar13;
        uVar12 = *(undefined *)((int)piVar7 + 6);
        uVar13 = *(undefined *)((int)piVar7 + 7);
        *(undefined *)((int)piVar7 + 6) = *(undefined *)((int)piVar7 + 9);
        *(undefined *)((int)piVar7 + 7) = *(undefined *)(piVar7 + 2);
        *(undefined *)((int)piVar7 + 9) = uVar12;
        *(undefined *)(piVar7 + 2) = uVar13;
        uVar10 = uVar10 + 1;
        piVar7 = piVar7 + 2;
      } while (uVar10 < local_44);
    }
    goto LAB_0806af29;
  case 0x10:
    pbVar5 = intern_src + 5;
    bVar1 = intern_src[1];
    bVar3 = intern_src[2];
    bVar4 = intern_src[3];
    bVar2 = intern_src[4];
    intern_src = pbVar5;
    memmove(local_30,pbVar5,0x10);
    uVar12 = (byte *)0xffffffef < intern_src;
    intern_src = intern_src + 0x10;
    uVar13 = intern_src == (byte *)0x0;
    pbVar8 = (byte *)caml_code_checksum();
    iVar6 = 0x10;
    pbVar5 = local_30;
    goto code_r0x0806adfc;
  case 0x11:
    bVar14 = intern_src[1];
    bVar1 = intern_src[2];
    bVar3 = intern_src[3];
    bVar4 = intern_src[4];
    intern_src = intern_src + 5;
    intern_rec();
    __dest = (int *)((uint)bVar4 + local_20 + (uint)bVar14 * 0x1000000 + (uint)bVar1 * 0x10000 +
                    (uint)bVar3 * 0x100);
    goto LAB_0806af29;
  case 0x12:
    intern_src = pbVar5;
    iVar6 = caml_find_custom_operations(pbVar5);
    if (iVar6 == 0) {
      intern_cleanup();
                    // WARNING: Subroutine does not return
      caml_failwith("input_value: unknown custom block identifier");
    }
    do {
      bVar14 = *intern_src;
      intern_src = intern_src + 1;
    } while (bVar14 != 0);
    iVar9 = (**(code **)(iVar6 + 0x14))(intern_dest + 2);
    uVar10 = iVar9 + 3U >> 2;
    __dest = intern_dest + 1;
    if (intern_obj_table != 0) {
      *(int **)(intern_obj_table + obj_counter * 4) = __dest;
      obj_counter = obj_counter + 1;
    }
    *intern_dest = intern_color + 0xff + (uVar10 + 1) * 0x400;
    *__dest = iVar6;
    intern_dest = intern_dest + uVar10 + 2;
    goto LAB_0806af29;
  case 0x13:
    intern_src = pbVar5;
    intern_cleanup();
                    // WARNING: Subroutine does not return
    caml_failwith("input_value: data block too large");
  case 0xbad1abe1:
    intern_src = pbVar5;
    intern_cleanup();
                    // WARNING: Subroutine does not return
    caml_failwith("input_value: ill-formed message");
  default:
    __n = uVar10 & 0x1f;
    intern_src = pbVar5;
LAB_0806a9bd:
    uVar10 = __n + 4;
    __dest = intern_dest + 1;
    if (intern_obj_table != 0) {
      *(int **)(intern_obj_table + obj_counter * 4) = __dest;
      obj_counter = obj_counter + 1;
    }
    *intern_dest = intern_color + 0xfc + (uVar10 >> 2) * 0x400;
    intern_dest = (int *)((int)intern_dest + (uVar10 & 0xfffffffc) + 4);
    *(undefined4 *)((int)piVar7 + (uVar10 & 0xfffffffc)) = 0;
    iVar6 = (uVar10 & 0xfffffffc) - 1;
    *(char *)(iVar6 + (int)__dest) = (char)iVar6 - (char)__n;
    memmove(__dest,intern_src,__n);
    intern_src = intern_src + __n;
    goto LAB_0806af29;
  }
  __dest = *(int **)(intern_obj_table + (obj_counter - uVar10) * 4);
  goto LAB_0806af29;
LAB_0806a921:
  piVar7 = intern_dest + 1;
  *local_40 = piVar7;
  if (intern_obj_table != 0) {
    *(int **)(intern_obj_table + obj_counter * 4) = piVar7;
    obj_counter = obj_counter + 1;
  }
  piVar7 = intern_dest;
  local_40 = (int **)(intern_dest + 1);
  *intern_dest = uVar10 + intern_color + uVar11 * 0x400;
  intern_dest = intern_dest + uVar11 + 1;
  uVar10 = uVar11;
  if (1 < uVar11) {
    do {
      intern_rec();
      uVar10 = uVar10 - 1;
    } while (1 < uVar10);
    local_40 = (int **)(piVar7 + uVar11);
  }
  goto LAB_0806a8e1;
  while( true ) {
    iVar6 = iVar6 + -1;
    uVar12 = *pbVar5 < *pbVar8;
    uVar13 = *pbVar5 == *pbVar8;
    pbVar5 = pbVar5 + (uint)bVar14 * -2 + 1;
    pbVar8 = pbVar8 + (uint)bVar14 * -2 + 1;
    if (!(bool)uVar13) break;
code_r0x0806adfc:
    if (iVar6 == 0) break;
  }
  if ((!(bool)uVar12 && !(bool)uVar13) != (bool)uVar12) {
    intern_cleanup();
                    // WARNING: Subroutine does not return
    caml_failwith("input_value: code mismatch");
  }
  __dest = (int *)((uint)bVar1 * 0x1000000 + (uint)bVar2 + (uint)bVar3 * 0x10000 +
                   (uint)bVar4 * 0x100 + caml_code_area_start);
LAB_0806af29:
  *local_40 = __dest;
  return;
}



void __regparm3 intern_add_to_heap(int param_1)

{
  uint uVar1;
  
  if (intern_extra_block != 0) {
    uVar1 = intern_extra_block + (param_1 * 4 + 0xfffU & 0xfffff000);
    if (intern_dest < uVar1) {
      caml_make_free_blocks(intern_dest,(int)(uVar1 - intern_dest) >> 2,0);
    }
    caml_allocated_words = caml_allocated_words + (intern_dest - intern_extra_block >> 2);
    caml_add_to_heap(intern_extra_block);
  }
  return;
}



undefined4 input_val_from_block(void)

{
  undefined4 local_10;
  
  intern_src = intern_src + 0xc;
  intern_alloc();
  intern_rec();
  intern_add_to_heap();
  if (intern_obj_table != 0) {
    caml_stat_free(intern_obj_table);
  }
  return local_10;
}



void caml_input_value_from_block(byte *param_1,uint param_2)

{
  intern_input = param_1;
  intern_input_malloced = 0;
  if ((uint)param_1[3] + (uint)*param_1 * 0x1000000 + (uint)param_1[1] * 0x10000 +
      (uint)param_1[2] * 0x100 != -0x7b6a5942) {
    intern_src = param_1 + 4;
                    // WARNING: Subroutine does not return
    caml_failwith("input_value_from_block: bad object");
  }
  intern_src = param_1 + 8;
  if (param_2 < param_1[7] + 0x14 + (uint)param_1[4] * 0x1000000 + (uint)param_1[5] * 0x10000 +
                (uint)param_1[6] * 0x100) {
                    // WARNING: Subroutine does not return
    caml_failwith("input_value_from_block: bad block length");
  }
  input_val_from_block();
  return;
}



undefined4 caml_input_value_from_malloc(int param_1,int param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  
  intern_input = param_1;
  pbVar2 = (byte *)(param_1 + param_2);
  intern_input_malloced = 1;
  intern_src = pbVar2 + 4;
  if ((uint)pbVar2[3] + (uint)*pbVar2 * 0x1000000 + (uint)pbVar2[1] * 0x10000 +
      (uint)pbVar2[2] * 0x100 != -0x7b6a5942) {
                    // WARNING: Subroutine does not return
    caml_failwith("input_value_from_malloc: bad object");
  }
  intern_src = pbVar2 + 8;
  uVar1 = input_val_from_block();
  caml_stat_free(intern_input);
  return uVar1;
}



undefined4 caml_input_val_from_string(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  
  uVar1 = caml_local_roots;
  local_3c = caml_local_roots;
  local_34 = 1;
  local_38 = 1;
  local_30 = &param_1;
  local_40 = 0;
  local_60 = &local_3c;
  caml_local_roots = &local_60;
  local_58 = 1;
  local_5c = 1;
  local_54 = &local_40;
  intern_input_malloced = 0;
  intern_src = param_2 + param_1 + 0x14;
  intern_alloc();
  intern_src = param_2 + 0x14 + param_1;
  intern_rec();
  intern_add_to_heap();
  if (intern_obj_table != 0) {
    caml_stat_free(intern_obj_table);
  }
  caml_local_roots = (undefined4 **)uVar1;
  return local_40;
}



void caml_input_value_from_string(undefined4 param_1,int param_2)

{
  caml_input_val_from_string(param_1,param_2 >> 1);
  return;
}



undefined4 caml_input_val(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  
  iVar1 = caml_channel_binary_mode(param_1);
  if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
    caml_failwith("input_value: not a binary channel");
  }
  iVar1 = caml_getword(param_1);
  if (iVar1 != -0x7b6a5942) {
                    // WARNING: Subroutine does not return
    caml_failwith("input_value: bad object");
  }
  uVar2 = caml_getword(param_1);
  caml_getword(param_1);
  caml_getword(param_1);
  caml_getword(param_1);
  uVar3 = caml_stat_alloc(uVar2);
  iVar1 = caml_really_getblock(param_1,uVar3,uVar2);
  if (iVar1 == 0) {
    caml_stat_free(uVar3);
                    // WARNING: Subroutine does not return
    caml_failwith("input_value: truncated object");
  }
  intern_input_malloced = 1;
  intern_src = uVar3;
  intern_input = uVar3;
  intern_alloc();
  intern_rec();
  intern_add_to_heap();
  caml_stat_free(intern_input);
  if (intern_obj_table != 0) {
    caml_stat_free(intern_obj_table);
  }
  return local_20;
}



undefined4 caml_input_value(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  
  uVar2 = caml_local_roots;
  local_2c = caml_local_roots;
  local_50 = &local_2c;
  local_24 = 1;
  local_28 = 1;
  local_20 = &param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  local_30 = 0;
  caml_local_roots = &local_50;
  local_48 = 1;
  local_4c = 1;
  local_44 = &local_30;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  local_30 = caml_input_val(uVar1);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined4 **)uVar2;
  return local_30;
}



int caml_hash_variant(byte *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 1;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    iVar2 = ((iVar2 >> 1) * 0xdf + (uint)*param_1) * 2 + 1;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  return iVar2;
}



void __regparm3 hash_aux(byte **param_1)

{
  byte **ppbVar1;
  byte bVar2;
  int iVar3;
  byte **ppbVar4;
  int iVar5;
  uint uVar6;
  
  hash_univ_limit = hash_univ_limit + -1;
  if ((-1 < hash_univ_count) && (-1 < hash_univ_limit)) {
    if (((uint)param_1 & 1) == 0) {
      bVar2 = *(byte *)((&caml_page_table)[(uint)param_1 >> 0x17] + ((uint)param_1 >> 0xc & 0x7ff));
joined_r0x0806b45f:
      if ((bVar2 & 7) == 0) {
        hash_accu = (byte *)((int)param_1 + (int)hash_accu * 0x1003f);
        return;
      }
      ppbVar1 = param_1 + -1;
      switch(*(byte *)ppbVar1) {
      case 0xf8:
        hash_accu = (byte *)(((int)param_1[1] >> 1) + (int)hash_accu * 0x1003f);
        hash_univ_count = hash_univ_count + -1;
        return;
      case 0xf9:
        hash_aux();
        return;
      case 0xfa:
        goto switchD_0806b4c5_caseD_fa;
      case 0xfb:
        return;
      case 0xfc:
        hash_univ_count = hash_univ_count + -1;
        for (iVar3 = caml_string_length(param_1); iVar3 != 0; iVar3 = iVar3 + -1) {
          hash_accu = (byte *)((int)hash_accu * 0x13 + (uint)*(byte *)param_1);
          param_1 = (byte **)((int)param_1 + 1);
        }
        return;
      case 0xfd:
        ppbVar1 = param_1 + 2;
        do {
          hash_accu = (byte *)((int)hash_accu * 0x13 + (uint)*(byte *)param_1);
          param_1 = (byte **)((int)param_1 + 1);
        } while (param_1 != ppbVar1);
        hash_univ_count = hash_univ_count + -1;
        return;
      case 0xfe:
        if ((uint)*ppbVar1 >> 10 == 0) {
          hash_univ_count = hash_univ_count + -1;
          return;
        }
        uVar6 = 0;
        do {
          ppbVar4 = param_1 + 2;
          do {
            hash_accu = (byte *)((int)hash_accu * 0x13 + (uint)*(byte *)param_1);
            param_1 = (byte **)((int)param_1 + 1);
          } while (ppbVar4 != param_1);
          uVar6 = uVar6 + 8;
          param_1 = ppbVar4;
        } while (uVar6 < ((uint)*ppbVar1 >> 10) << 2);
        hash_univ_count = hash_univ_count + -1;
        return;
      case 0xff:
        if (*(code **)(*param_1 + 0xc) == (code *)0x0) {
          return;
        }
        hash_univ_count = hash_univ_count + -1;
        iVar5 = (int)hash_accu * 0x1003f;
        iVar3 = (**(code **)(*param_1 + 0xc))(param_1);
        hash_accu = (byte *)(iVar3 + iVar5);
        return;
      default:
        hash_univ_count = hash_univ_count + -1;
        hash_accu = (byte *)((int)hash_accu * 0x13 + (uint)*(byte *)ppbVar1);
        for (uVar6 = (uint)*ppbVar1 >> 10; uVar6 != 0; uVar6 = uVar6 - 1) {
          hash_aux();
        }
        return;
      }
    }
LAB_0806b466:
    hash_univ_count = hash_univ_count + -1;
    hash_accu = (byte *)(((int)param_1 >> 1) + (int)hash_accu * 0x1003f);
  }
  return;
switchD_0806b4c5_caseD_fa:
  param_1 = (byte **)*param_1;
  if (((uint)param_1 & 1) != 0) goto LAB_0806b466;
  bVar2 = *(byte *)((&caml_page_table)[(uint)param_1 >> 0x17] + ((uint)param_1 >> 0xc & 0x7ff));
  goto joined_r0x0806b45f;
}



int caml_hash_univ_param(int param_1,int param_2)

{
  hash_univ_limit = param_2 >> 1;
  hash_univ_count = param_1 >> 1;
  hash_accu = 0;
  hash_aux();
  return (hash_accu & 0x3fffffff) * 2 + 1;
}



void caml_sys_init(undefined4 param_1,undefined4 param_2)

{
  caml_exe_name = param_1;
  caml_main_argv = param_2;
  return;
}



undefined4 * caml_sys_get_config(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  uVar1 = caml_local_roots;
  local_10[0] = 0;
  local_14 = 0;
  local_34 = caml_local_roots;
  caml_local_roots = &local_34;
  local_2c = 1;
  local_30 = 2;
  local_28 = local_10;
  local_24 = &local_14;
  local_14 = caml_copy_string(&DAT_08071674);
  puVar2 = (undefined4 *)caml_alloc_small(2,0);
  *puVar2 = local_14;
  puVar2[1] = 0x41;
  caml_local_roots = (undefined4 *)uVar1;
  return puVar2;
}



undefined4 * caml_sys_get_argv(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  uVar1 = caml_local_roots;
  local_10[0] = 0;
  local_14 = 0;
  local_18 = 0;
  local_38 = caml_local_roots;
  caml_local_roots = &local_38;
  local_30 = 1;
  local_34 = 3;
  local_2c = local_10;
  local_28 = &local_14;
  local_24 = &local_18;
  local_10[0] = caml_copy_string(caml_exe_name);
  local_14 = caml_copy_string_array(caml_main_argv);
  puVar2 = (undefined4 *)caml_alloc_small(2,0);
  *puVar2 = local_10[0];
  puVar2[1] = local_14;
  caml_local_roots = (undefined4 *)uVar1;
  return puVar2;
}



int caml_sys_random_seed(void)

{
  __pid_t _Var1;
  uint uVar2;
  timeval local_24 [2];
  
  gettimeofday(local_24,(__timezone_ptr_t)0x0);
  _Var1 = getppid();
  uVar2 = getpid();
  return (local_24[0].tv_usec ^ local_24[0].tv_sec ^ uVar2 ^ _Var1 << 0x10) * 2 + 1;
}



void caml_sys_time(void)

{
  rusage local_54;
  
  getrusage(RUSAGE_SELF,&local_54);
  caml_copy_double((double)((float)local_54.ru_stime.tv_usec / 1000000.0 +
                           (float)local_54.ru_stime.tv_sec +
                           (float)local_54.ru_utime.tv_usec / 1000000.0 +
                           (float)local_54.ru_utime.tv_sec));
  return;
}



void caml_sys_getenv(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = getenv(param_1);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)caml_raise_not_found();
  }
  caml_copy_string(pcVar1);
  return;
}



char caml_sys_file_exists(char *param_1)

{
  int iVar1;
  stat64 local_6c;
  
  iVar1 = __xstat64(3,param_1,&local_6c);
  return (-(iVar1 == 0) & 2U) + 1;
}



undefined4 caml_sys_close(int param_1)

{
  close(param_1 >> 1);
  return 1;
}



void caml_sys_exit(int param_1)

{
                    // WARNING: Subroutine does not return
  exit(param_1 >> 1);
}



undefined4 caml_sys_error(void *param_1)

{
  char cVar1;
  undefined4 **ppuVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  size_t unaff_EBX;
  char *pcVar6;
  byte bVar7;
  undefined auStack_d8 [8];
  undefined4 uStack_d0;
  undefined4 ***pppuStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 *puStack_c0;
  undefined4 uStack_ac;
  undefined4 **ppuStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined *puStack_9c;
  size_t sStack_88;
  char *pcStack_84;
  code *pcStack_80;
  char *in_stack_ffffff88;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  void **local_54;
  void *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  
  bVar7 = 0;
  local_3c = caml_local_roots;
  local_34 = 1;
  local_38 = 1;
  local_30 = &param_1;
  local_40 = (void *)0x0;
  local_60 = &local_3c;
  caml_local_roots = (undefined4 ***)&local_60;
  local_58 = 1;
  local_5c = 1;
  local_54 = &local_40;
  pcStack_80 = (code *)0x806b92e;
  piVar3 = __errno_location();
  pcStack_80 = (code *)0x806b938;
  pcStack_84 = strerror(*piVar3);
  if (param_1 == (void *)0x1) {
    pcStack_80 = (code *)0x806b94a;
    local_40 = (void *)caml_copy_string();
  }
  else {
    uVar5 = 0xffffffff;
    pcVar6 = pcStack_84;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    pcStack_80 = (code *)0x806b96a;
    unaff_EBX = caml_string_length();
    pcStack_80 = (code *)0x806b978;
    local_40 = (void *)caml_alloc_string();
    pcStack_80 = (code *)0x806b98e;
    memmove(local_40,param_1,unaff_EBX);
    *(undefined2 *)(unaff_EBX + (int)local_40) = 0x203a;
    pcStack_80 = (code *)0x806b9af;
    in_stack_ffffff88 = pcStack_84;
    memmove((void *)(unaff_EBX + 2 + (int)local_40),pcStack_84,~uVar5 - 1);
  }
  pcStack_80 = caml_sys_read_directory;
  caml_raise_sys_error();
  ppuVar2 = caml_local_roots;
  ppuStack_a8 = caml_local_roots;
  uStack_a0 = 1;
  uStack_a4 = 1;
  puStack_9c = &stack0xffffff88;
  uStack_ac = 0;
  pppuStack_cc = &ppuStack_a8;
  caml_local_roots = &pppuStack_cc;
  uStack_c4 = 1;
  uStack_c8 = 1;
  puStack_c0 = &uStack_ac;
  sStack_88 = unaff_EBX;
  pcStack_80 = (code *)&stack0xfffffffc;
  caml_ext_table_init(auStack_d8,0x32);
  iVar4 = caml_read_directory(in_stack_ffffff88,auStack_d8);
  if (iVar4 == -1) {
    caml_ext_table_free(auStack_d8,1);
    caml_sys_error(in_stack_ffffff88);
  }
  caml_ext_table_add(auStack_d8,0);
  uStack_ac = caml_copy_string_array(uStack_d0);
  caml_ext_table_free(auStack_d8,1);
  caml_local_roots = (undefined4 ***)ppuVar2;
  return uStack_ac;
}



undefined4 caml_sys_read_directory(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined local_5c [8];
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  
  uVar1 = caml_local_roots;
  local_2c = caml_local_roots;
  local_24 = 1;
  local_28 = 1;
  local_20 = &param_1;
  local_30 = 0;
  local_50 = &local_2c;
  caml_local_roots = &local_50;
  local_48 = 1;
  local_4c = 1;
  local_44 = &local_30;
  caml_ext_table_init(local_5c,0x32);
  iVar2 = caml_read_directory(param_1,local_5c);
  if (iVar2 == -1) {
    caml_ext_table_free(local_5c,1);
    caml_sys_error(param_1);
  }
  caml_ext_table_add(local_5c,0);
  local_30 = caml_copy_string_array(local_54);
  caml_ext_table_free(local_5c,1);
  caml_local_roots = (undefined4 **)uVar1;
  return local_30;
}



int caml_sys_system_command(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *__command;
  uint uVar3;
  uint uVar4;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  
  uVar1 = caml_local_roots;
  local_3c = caml_local_roots;
  caml_local_roots = &local_3c;
  local_34 = 1;
  local_38 = 1;
  local_30 = &param_1;
  iVar2 = caml_string_length(param_1);
  __command = (char *)caml_stat_alloc(iVar2 + 1U);
  memmove(__command,param_1,iVar2 + 1U);
  caml_enter_blocking_section();
  uVar3 = system(__command);
  caml_leave_blocking_section();
  caml_stat_free(__command);
  if (uVar3 == 0xffffffff) {
    caml_sys_error(param_1);
    uVar4 = 0xff;
  }
  else {
    uVar4 = 0xff;
    if ((uVar3 & 0x7f) == 0) {
      uVar4 = uVar3 >> 8 & 0xff;
    }
  }
  caml_local_roots = (undefined4 *)uVar1;
  return uVar4 * 2 + 1;
}



void caml_sys_getcwd(void)

{
  char *pcVar1;
  char local_100c [4104];
  
  pcVar1 = getcwd(local_100c,0x1000);
  if (pcVar1 == (char *)0x0) {
    caml_sys_error(1);
  }
  caml_copy_string(local_100c);
  return;
}



undefined4 caml_sys_chdir(char *param_1)

{
  int iVar1;
  
  iVar1 = chdir(param_1);
  if (iVar1 != 0) {
    caml_sys_error(param_1);
  }
  return 1;
}



undefined4 caml_sys_rename(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = rename(param_1,param_2);
  if (iVar1 != 0) {
    caml_sys_error(1);
  }
  return 1;
}



undefined4 caml_sys_remove(char *param_1)

{
  int iVar1;
  
  iVar1 = unlink(param_1);
  if (iVar1 != 0) {
    caml_sys_error(param_1);
  }
  return 1;
}



char caml_sys_is_directory(char *param_1)

{
  int iVar1;
  stat64 local_6c;
  
  iVar1 = __xstat64(3,param_1,&local_6c);
  if (iVar1 == -1) {
    caml_sys_error(param_1);
  }
  return ((local_6c.st_mode & 0xf000) == 0x4000) * '\x02' + '\x01';
}



int caml_sys_open(char *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *__dest;
  int iVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  
  uVar1 = caml_local_roots;
  local_3c = caml_local_roots;
  caml_local_roots = &local_3c;
  local_34 = 1;
  local_38 = 3;
  local_30 = &param_1;
  local_2c = &param_2;
  local_28 = &param_3;
  iVar2 = caml_string_length(param_1);
  __dest = (char *)caml_stat_alloc(iVar2 + 1);
  strcpy(__dest,param_1);
  iVar2 = caml_convert_flag_list(param_2,sys_open_flags);
  iVar3 = param_3 >> 1;
  caml_enter_blocking_section();
  iVar2 = open64(__dest,iVar2,iVar3);
  if (iVar2 == -1) {
    caml_leave_blocking_section();
    caml_stat_free(__dest);
    caml_sys_error(param_1);
  }
  else {
    fcntl(iVar2,2,1);
    caml_leave_blocking_section();
    caml_stat_free(__dest);
  }
  caml_local_roots = (undefined4 *)uVar1;
  return iVar2 * 2 + 1;
}



void caml_sys_io_error(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  if (*piVar1 == 0xb) {
    caml_raise_sys_blocked_io();
  }
  caml_sys_error(param_1);
  return;
}



int caml_set_parser_trace(int param_1)

{
  bool bVar1;
  
  bVar1 = caml_parser_trace == 0;
  caml_parser_trace = param_1 >> 1;
  return (-(uint)bVar1 & 0xfffffffe) + 3;
}



char * __regparm3 token_name(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (0 < param_2) {
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      uVar2 = 0xffffffff;
      pcVar3 = param_1;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      param_1 = param_1 + ~uVar2;
      param_2 = param_2 + -1;
      if (param_2 < 1) {
        return param_1;
      }
      cVar1 = *param_1;
    }
    param_1 = "<unknown token>";
  }
  return param_1;
}



undefined4 caml_parse_engine(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  short sVar1;
  undefined8 *__s;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int local_28;
  int local_24;
  int local_20;
  
  switch(param_3 >> 1) {
  case 0:
    uVar7 = param_2[0xd] >> 1;
    local_28 = 0;
    local_24 = 0;
    break;
  case 1:
    uVar7 = param_2[0xd] >> 1;
    local_24 = param_2[0xe] >> 1;
    local_28 = param_2[0xf] >> 1;
    if (((uint)param_4 & 1) == 0) {
      param_2[6] = *(int *)(*(int *)(param_1 + 8) + (uint)*(byte *)(param_4 + -1) * 4);
      caml_modify(param_2 + 7,*param_4);
    }
    else {
      param_2[6] = *(int *)(*(int *)(param_1 + 4) + ((int)param_4 >> 1) * 4);
      caml_modify(param_2 + 7,1);
    }
    if (caml_parser_trace == 0) goto LAB_0806bfb3;
    if (((uint)param_4 & 1) == 0) {
      token_name();
      fprintf(stderr,"State %d: read token %s(",local_24);
      __s = (undefined8 *)*param_4;
      if (((uint)__s & 1) == 0) {
        if (*(char *)((int)__s + -4) == -4) {
          fputs((char *)__s,stderr);
        }
        else if (*(char *)((int)__s + -4) == -3) {
          fprintf(stderr,"%g",*__s);
        }
        else {
          fputc(0x5f,stderr);
        }
      }
      else {
        fprintf(stderr,"%ld",(int)__s >> 1);
      }
      fwrite(&DAT_080716c2,1,2,stderr);
      goto LAB_0806bfb3;
    }
    token_name();
    fprintf(stderr,"State %d: read token %s\n",local_24);
    goto LAB_0806bfb3;
  case 2:
    local_24 = param_2[0xe] >> 1;
    local_28 = param_2[0xf] >> 1;
    uVar8 = param_2[0xd] >> 1;
    goto LAB_0806c22b;
  case 3:
    uVar7 = param_2[0xd] >> 1;
    iVar3 = param_2[0xe] >> 1;
    local_28 = param_2[0xf] >> 1;
    goto LAB_0806c364;
  case 4:
    uVar7 = param_2[0xd] >> 1;
    local_24 = param_2[0xe] >> 1;
    local_28 = param_2[0xf] >> 1;
    iVar3 = uVar7 * 4;
    *(int *)(iVar3 + *param_2) = local_24 * 2 + 1;
    caml_modify(iVar3 + param_2[1],param_4);
    iVar5 = param_2[10];
    iVar2 = (iVar5 >> 1) * 4;
    caml_modify(param_2[3] + iVar3,*(undefined4 *)(iVar2 + param_2[3]));
    if ((uint)(iVar5 >> 1) < uVar7) {
      caml_modify(iVar3 + param_2[2],*(undefined4 *)(iVar2 + param_2[3]));
    }
    break;
  case 5:
    uVar7 = param_2[0xd] >> 1;
    local_24 = param_2[0xe] >> 1;
    local_28 = param_2[0xf] >> 1;
    goto LAB_0806c067;
  default:
    return 3;
  }
  while (local_20 = (int)*(short *)(*(int *)(param_1 + 0x14) + local_24 * 2), local_20 == 0) {
    if (param_2[6] < 0) {
      param_2[0xd] = uVar7 * 2 + 1;
      param_2[0xe] = local_24 * 2 + 1;
      param_2[0xf] = local_28 * 2 + 1;
      return 1;
    }
LAB_0806bfb3:
    iVar3 = (int)*(short *)(*(int *)(param_1 + 0x1c) + local_24 * 2);
    iVar5 = param_2[6] >> 1;
    local_20 = iVar3 + iVar5;
    if ((((iVar3 == 0) || (local_20 < 0)) || (*(int *)(param_1 + 0x28) >> 1 < local_20)) ||
       (iVar5 != *(short *)(*(int *)(param_1 + 0x30) + local_20 * 2))) {
      iVar2 = (int)*(short *)(*(int *)(param_1 + 0x20) + local_24 * 2);
      iVar3 = iVar2 + iVar5;
      if (((iVar2 != 0) && (-1 < iVar3)) &&
         ((iVar3 <= *(int *)(param_1 + 0x28) >> 1 &&
          (iVar5 == *(short *)(*(int *)(param_1 + 0x30) + iVar3 * 2))))) {
        local_20 = (int)*(short *)(*(int *)(param_1 + 0x2c) + iVar3 * 2);
        break;
      }
      if (local_28 < 1) {
        param_2[0xd] = uVar7 * 2 + 1;
        param_2[0xe] = local_24 * 2 + 1;
        param_2[0xf] = local_28 * 2 + 1;
        return 0xb;
      }
LAB_0806c067:
      if (local_28 < 3) {
        while( true ) {
          iVar5 = *(int *)(*param_2 + uVar7 * 4) >> 1;
          iVar3 = (int)*(short *)(*(int *)(param_1 + 0x1c) + iVar5 * 2);
          local_20 = iVar3 + 0x100;
          if (((iVar3 != 0) && (-1 < local_20)) &&
             ((local_20 <= *(int *)(param_1 + 0x28) >> 1 &&
              (*(short *)(*(int *)(param_1 + 0x30) + local_20 * 2) == 0x100)))) break;
          if (caml_parser_trace != 0) {
            fprintf(stderr,"Discarding state %d\n",iVar5);
          }
          if (uVar7 <= (uint)(param_2[5] >> 1)) {
            if (caml_parser_trace == 0) {
              return 3;
            }
            fwrite("No more states to discard\n",1,0x1a,stderr);
            return 3;
          }
          uVar7 = uVar7 - 1;
        }
        local_28 = 3;
        if (caml_parser_trace != 0) {
          fprintf(stderr,"Recovering in state %d\n",iVar5);
          local_28 = 3;
          goto LAB_0806c1a5;
        }
        goto LAB_0806c1d8;
      }
      if ((uint)param_2[6] >> 1 == 0) {
        return 3;
      }
      if (caml_parser_trace != 0) {
        fwrite("Discarding last token read\n",1,0x1b,stderr);
      }
      param_2[6] = -1;
    }
    else {
      param_2[6] = -1;
      local_28 = local_28 - (uint)(0 < local_28);
LAB_0806c1a5:
      if (caml_parser_trace != 0) {
        fprintf(stderr,"State %d: shift to state %d\n",local_24);
      }
LAB_0806c1d8:
      local_24 = (int)*(short *)(*(int *)(param_1 + 0x2c) + local_20 * 2);
      uVar8 = uVar7 + 1;
      if ((uint)(param_2[4] >> 1) <= uVar8) {
        param_2[0xd] = uVar7 + 2 + uVar8;
        param_2[0xe] = local_24 * 2 + 1;
        param_2[0xf] = local_28 * 2 + 1;
        return 5;
      }
LAB_0806c22b:
      uVar7 = uVar8;
      iVar3 = uVar7 * 4;
      *(int *)(iVar3 + *param_2) = local_24 * 2 + 1;
      caml_modify(iVar3 + param_2[1],param_2[7]);
      caml_modify(iVar3 + param_2[2],param_2[8]);
      caml_modify(iVar3 + param_2[3],param_2[9]);
    }
  }
  if (caml_parser_trace != 0) {
    fprintf(stderr,"State %d: reduce by rule %d\n",local_24,local_20);
  }
  local_20 = local_20 * 2;
  iVar3 = (int)*(short *)(*(int *)(param_1 + 0x10) + local_20);
  param_2[10] = uVar7 * 2 + 1;
  param_2[0xc] = local_20 + 1;
  param_2[0xb] = iVar3 * 2 + 1;
  uVar7 = (uVar7 + 1) - iVar3;
  iVar6 = *(int *)(*param_2 + -4 + uVar7 * 4) >> 1;
  iVar3 = *(short *)(*(int *)(param_1 + 0xc) + local_20) * 2;
  iVar5 = (int)*(short *)(*(int *)(param_1 + 0x24) + iVar3);
  iVar2 = iVar6 + iVar5;
  if ((((iVar5 == 0) || (iVar2 < 0)) || (*(int *)(param_1 + 0x28) >> 1 < iVar2)) ||
     (*(short *)(*(int *)(param_1 + 0x30) + iVar2 * 2) != iVar6)) {
    sVar1 = *(short *)(*(int *)(param_1 + 0x18) + iVar3);
  }
  else {
    sVar1 = *(short *)(*(int *)(param_1 + 0x2c) + iVar2 * 2);
  }
  iVar3 = (int)sVar1;
  if (uVar7 < (uint)(param_2[4] >> 1)) {
LAB_0806c364:
    param_2[0xd] = uVar7 * 2 + 1;
    param_2[0xe] = iVar3 * 2 + 1;
    param_2[0xf] = local_28 * 2 + 1;
    uVar4 = 9;
  }
  else {
    param_2[0xd] = uVar7 * 2 + 1;
    param_2[0xe] = iVar3 * 2 + 1;
    param_2[0xf] = local_28 * 2 + 1;
    uVar4 = 7;
  }
  return uVar4;
}



int __regparm3 norm_pfree(int param_1)

{
  if (param_1 == 0) {
    param_1 = 1;
  }
  return param_1;
}



void norm_pmax(void)

{
  return;
}



uint __regparm3 norm_heapincr(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 0x3ffU & 0xfffffc00;
  if (uVar1 < 0x800) {
    uVar1 = 0x800;
  }
  return uVar1;
}



int __regparm3 norm_minsize(int param_1)

{
  if (param_1 < 0x1000) {
    param_1 = 0x1000;
  }
  if (0x10000000 < param_1) {
    param_1 = 0x10000000;
  }
  return param_1;
}



void caml_init_gc(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = norm_heapincr();
  uVar1 = iVar2 * 4;
  iVar2 = caml_page_table_initialize(uVar1 + param_1 * 4);
  if (iVar2 != 0) {
    caml_fatal_error("OCaml runtime error: cannot initialize page table\n");
  }
  iVar2 = norm_minsize();
  caml_set_minor_heap_size(iVar2 << 2);
  iVar2 = norm_heapincr();
  caml_major_heap_increment = iVar2 << 2;
  caml_percent_free = norm_pfree();
  caml_percent_max = norm_pmax();
  caml_init_major_heap(uVar1);
  caml_gc_message(0x20,"Initial minor heap size: %luk bytes\n",caml_minor_heap_size >> 10);
  caml_gc_message(0x20,"Initial major heap size: %luk bytes\n",uVar1 >> 10);
  caml_gc_message(0x20,"Initial space overhead: %lu%%\n",caml_percent_free);
  caml_gc_message(0x20,"Initial max overhead: %lu%%\n",caml_percent_max);
  caml_gc_message(0x20,"Initial heap increment: %luk bytes\n",caml_major_heap_increment >> 10);
  caml_gc_message(0x20,"Initial allocation policy: %d\n",caml_allocation_policy);
  return;
}



undefined4 caml_gc_compaction(void)

{
  caml_gc_message(0x10,"Heap compaction requested\n",0);
  caml_empty_minor_heap();
  caml_finish_major_cycle();
  caml_final_do_calls();
  caml_empty_minor_heap();
  caml_finish_major_cycle();
  caml_compact_heap();
  caml_final_do_calls();
  return 1;
}



void test_and_compact(void)

{
  float fVar1;
  ulonglong local_1c;
  
  local_1c = (ulonglong)caml_fl_cur_size;
  fVar1 = (float)local_1c;
  local_1c = (ulonglong)((caml_stat_heap_size >> 2) - caml_fl_cur_size);
  fVar1 = (fVar1 * 100.0) / (float)local_1c;
  if (999999.0 <= fVar1 || fVar1 != 999999.0) {
    fVar1 = 999999.0;
  }
  local_1c._0_4_ = (undefined4)(longlong)ROUND(fVar1);
  caml_gc_message(0x200,"Estimated overhead (lower bound) = %lu%%\n",(undefined4)local_1c);
  local_1c = (ulonglong)caml_percent_max;
  if (((float)local_1c <= fVar1) && (1 < caml_stat_heap_chunks)) {
    caml_gc_message(0x200,"Automatic compaction triggered.\n",0);
    caml_compact_heap();
  }
  return;
}



undefined4 caml_gc_full_major(void)

{
  caml_gc_message(1,"Full major GC cycle requested\n",0);
  caml_empty_minor_heap();
  caml_finish_major_cycle();
  caml_final_do_calls();
  caml_empty_minor_heap();
  caml_finish_major_cycle();
  test_and_compact();
  caml_final_do_calls();
  return 1;
}



undefined4 caml_gc_major(void)

{
  caml_gc_message(1,"Major GC cycle requested\n",0);
  caml_empty_minor_heap();
  caml_finish_major_cycle();
  test_and_compact();
  caml_final_do_calls();
  return 1;
}



int caml_gc_major_slice(int param_1)

{
  int iVar1;
  
  caml_empty_minor_heap();
  iVar1 = caml_major_collection_slice(param_1 >> 1);
  return iVar1 * 2 + 1;
}



undefined4 caml_gc_minor(void)

{
  caml_minor_collection();
  return 1;
}



undefined4 caml_gc_set(int param_1)

{
  int iVar1;
  uint uVar2;
  
  caml_verb_gc = *(int *)(param_1 + 0xc) >> 1;
  iVar1 = norm_pfree();
  if (iVar1 != caml_percent_free) {
    caml_percent_free = iVar1;
    caml_gc_message(0x20,"New space overhead: %d%%\n",iVar1);
  }
  iVar1 = norm_pmax();
  if (iVar1 != caml_percent_max) {
    caml_percent_max = iVar1;
    caml_gc_message(0x20,"New max overhead: %d%%\n",iVar1);
  }
  iVar1 = norm_heapincr();
  uVar2 = iVar1 * 4;
  if (uVar2 - caml_major_heap_increment != 0) {
    caml_major_heap_increment = uVar2;
    caml_gc_message(0x20,"New heap increment size: %luk bytes\n",uVar2 >> 10);
  }
  uVar2 = *(int *)(param_1 + 0x18) >> 1;
  if (1 < uVar2) {
    uVar2 = 1;
  }
  if (uVar2 != caml_allocation_policy) {
    caml_gc_message(0x20,"New allocation policy: %d\n",uVar2);
    caml_set_allocation_policy(uVar2);
  }
  uVar2 = norm_minsize();
  if (uVar2 != caml_minor_heap_size) {
    caml_gc_message(0x20,"New minor heap size: %luk bytes\n",uVar2 >> 10);
    caml_set_minor_heap_size(uVar2);
  }
  return 1;
}



int caml_gc_get(void)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int local_10 [2];
  
  uVar1 = caml_local_roots;
  local_10[0] = 0;
  local_30 = caml_local_roots;
  caml_local_roots = &local_30;
  local_28 = 1;
  local_2c = 1;
  local_24 = local_10;
  local_10[0] = caml_alloc_tuple(7);
  caml_modify(local_10[0],(caml_minor_heap_size >> 2) * 2 + 1);
  caml_modify(local_10[0] + 4,(caml_major_heap_increment >> 2) * 2 + 1);
  caml_modify(local_10[0] + 8,caml_percent_free * 2 + 1);
  caml_modify(local_10[0] + 0xc,caml_verb_gc * 2 + 1);
  caml_modify(local_10[0] + 0x10,caml_percent_max * 2 + 1);
  caml_modify(local_10[0] + 0x14,1);
  caml_modify(local_10[0] + 0x18,caml_allocation_policy * 2 + 1);
  caml_local_roots = (undefined4 *)uVar1;
  return local_10[0];
}



int caml_gc_counters(void)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int local_10 [2];
  
  uVar4 = caml_stat_promoted_words;
  uVar3 = caml_local_roots;
  local_10[0] = 0;
  local_30 = caml_local_roots;
  caml_local_roots = &local_30;
  local_28 = 1;
  local_2c = 1;
  local_24 = local_10;
  dVar1 = (double)(ulonglong)((uint)(caml_young_end - caml_young_ptr) >> 2) + caml_stat_minor_words;
  dVar2 = (double)(ulonglong)caml_allocated_words + caml_stat_major_words;
  local_10[0] = caml_alloc_tuple(3);
  uVar5 = caml_copy_double(dVar1);
  caml_modify(local_10[0],uVar5);
  uVar5 = caml_copy_double(uVar4);
  caml_modify(local_10[0] + 4,uVar5);
  uVar5 = caml_copy_double(dVar2);
  caml_modify(local_10[0] + 8,uVar5);
  caml_local_roots = (undefined4 *)uVar3;
  return local_10[0];
}



int caml_gc_quick_stat(void)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_34;
  int local_20 [4];
  
  iVar7 = caml_stat_heap_chunks;
  iVar6 = caml_stat_compactions;
  iVar5 = caml_stat_major_collections;
  iVar11 = caml_stat_minor_collections;
  uVar4 = caml_stat_promoted_words;
  uVar3 = caml_local_roots;
  local_20[0] = 0;
  local_40 = caml_local_roots;
  caml_local_roots = &local_40;
  local_38 = 1;
  local_3c = 1;
  local_34 = local_20;
  dVar1 = (double)(ulonglong)((uint)(caml_young_end - caml_young_ptr) >> 2) + caml_stat_minor_words;
  dVar2 = (double)(ulonglong)caml_allocated_words + caml_stat_major_words;
  uVar8 = caml_stat_heap_size >> 2;
  uVar9 = caml_stat_top_heap_size >> 2;
  local_20[0] = caml_alloc_tuple(0x10);
  uVar10 = caml_copy_double(dVar1);
  caml_modify(local_20[0],uVar10);
  uVar10 = caml_copy_double(uVar4);
  caml_modify(local_20[0] + 4,uVar10);
  uVar10 = caml_copy_double(dVar2);
  caml_modify(local_20[0] + 8,uVar10);
  caml_modify(local_20[0] + 0xc,iVar11 * 2 + 1);
  caml_modify(local_20[0] + 0x10,iVar5 * 2 + 1);
  caml_modify(local_20[0] + 0x14,uVar8 * 2 + 1);
  caml_modify(local_20[0] + 0x18,iVar7 * 2 + 1);
  caml_modify(local_20[0] + 0x1c,1);
  caml_modify(local_20[0] + 0x20,1);
  caml_modify(local_20[0] + 0x24,1);
  caml_modify(local_20[0] + 0x28,1);
  caml_modify(local_20[0] + 0x2c,1);
  caml_modify(local_20[0] + 0x30,1);
  caml_modify(local_20[0] + 0x34,iVar6 * 2 + 1);
  caml_modify(local_20[0] + 0x38,uVar9 * 2 + 1);
  iVar11 = caml_stack_usage();
  caml_modify(local_20[0] + 0x3c,iVar11 * 2 + 1);
  caml_local_roots = (undefined4 *)uVar3;
  return local_20[0];
}



int caml_gc_stat(void)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int local_74;
  int local_70;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_34;
  int local_20 [4];
  
  iVar7 = caml_stat_compactions;
  iVar6 = caml_stat_major_collections;
  iVar12 = caml_stat_minor_collections;
  uVar5 = caml_stat_promoted_words;
  uVar4 = caml_local_roots;
  if (caml_heap_start == (uint *)0x0) {
    local_70 = 0;
    uVar14 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    iVar13 = 0;
    local_74 = 0;
  }
  else {
    local_70 = 0;
    uVar14 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    iVar13 = 0;
    local_74 = 0;
    puVar8 = caml_heap_start;
    do {
      local_74 = local_74 + 1;
      for (puVar1 = puVar8; puVar1 < (uint *)((int)puVar8 + puVar8[-2]);
          puVar1 = puVar1 + (uVar9 >> 10) + 1) {
        uVar9 = *puVar1;
        uVar10 = uVar9 & 0x300;
        if (uVar10 == 0x100) {
LAB_0806ce35:
          local_58 = local_58 + 1;
          iVar13 = iVar13 + 1 + (uVar9 >> 10);
        }
        else if (uVar10 < 0x101) {
          if (uVar10 == 0) {
            uVar10 = uVar9 >> 10;
            if (uVar10 == 0) {
              local_70 = local_70 + 1;
            }
            else if ((caml_gc_phase == 1) && (caml_gc_sweep_hp <= puVar1)) {
              local_60 = local_60 + 1;
              local_5c = uVar10 + 1 + local_5c;
              if (uVar14 < uVar10 + 1) {
                uVar14 = uVar10 + 1;
              }
            }
            else {
              local_58 = local_58 + 1;
              iVar13 = uVar10 + 1 + iVar13;
            }
          }
        }
        else if (uVar10 == 0x200) {
          local_60 = local_60 + 1;
          local_5c = (uVar9 >> 10) + 1 + local_5c;
          uVar10 = (uVar9 >> 10) + 1;
          if (uVar14 < uVar10) {
            uVar14 = uVar10;
          }
        }
        else if (uVar10 == 0x300) goto LAB_0806ce35;
      }
      puVar8 = (uint *)puVar8[-1];
    } while (puVar8 != (uint *)0x0);
  }
  local_20[0] = 0;
  local_40 = caml_local_roots;
  caml_local_roots = &local_40;
  local_38 = 1;
  local_3c = 1;
  local_34 = local_20;
  dVar2 = (double)(ulonglong)((uint)(caml_young_end - caml_young_ptr) >> 2) + caml_stat_minor_words;
  dVar3 = (double)(ulonglong)caml_allocated_words + caml_stat_major_words;
  uVar9 = caml_stat_heap_size >> 2;
  uVar10 = caml_stat_top_heap_size >> 2;
  local_20[0] = caml_alloc_tuple(0x10);
  uVar11 = caml_copy_double(dVar2);
  caml_modify(local_20[0],uVar11);
  uVar11 = caml_copy_double(uVar5);
  caml_modify(local_20[0] + 4,uVar11);
  uVar11 = caml_copy_double(dVar3);
  caml_modify(local_20[0] + 8,uVar11);
  caml_modify(local_20[0] + 0xc,iVar12 * 2 + 1);
  caml_modify(local_20[0] + 0x10,iVar6 * 2 + 1);
  caml_modify(local_20[0] + 0x14,uVar9 * 2 + 1);
  caml_modify(local_20[0] + 0x18,local_74 * 2 + 1);
  caml_modify(local_20[0] + 0x1c,iVar13 * 2 + 1);
  caml_modify(local_20[0] + 0x20,local_58 * 2 + 1);
  caml_modify(local_20[0] + 0x24,local_5c * 2 + 1);
  caml_modify(local_20[0] + 0x28,local_60 * 2 + 1);
  caml_modify(local_20[0] + 0x2c,uVar14 * 2 + 1);
  caml_modify(local_20[0] + 0x30,local_70 * 2 + 1);
  caml_modify(local_20[0] + 0x34,iVar7 * 2 + 1);
  caml_modify(local_20[0] + 0x38,uVar10 * 2 + 1);
  iVar12 = caml_stack_usage();
  caml_modify(local_20[0] + 0x3c,iVar12 * 2 + 1);
  caml_local_roots = (undefined4 *)uVar4;
  return local_20[0];
}



void caml_MD5Init(undefined4 *param_1)

{
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



void caml_MD5Transform(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  
  puVar17 = (uint *)(param_1 + 1);
  uVar22 = *puVar17;
  puVar20 = (uint *)(param_1 + 2);
  uVar18 = *puVar20;
  puVar24 = (uint *)(param_1 + 3);
  uVar19 = *puVar24;
  iVar1 = *param_2;
  uVar21 = ((uVar19 ^ uVar18) & uVar22 ^ uVar19) + *param_1 + -0x28955b88 + iVar1;
  uVar21 = (uVar21 >> 0x19 | uVar21 * 0x80) + uVar22;
  iVar2 = param_2[1];
  uVar19 = ((uVar18 ^ uVar22) & uVar21 ^ uVar18) + uVar19 + 0xe8c7b756 + iVar2;
  uVar19 = (uVar19 >> 0x14 | uVar19 * 0x1000) + uVar21;
  iVar3 = param_2[2];
  uVar18 = ((uVar21 ^ uVar22) & uVar19 ^ uVar22) + uVar18 + 0x242070db + iVar3;
  uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) + uVar19;
  iVar4 = param_2[3];
  uVar22 = ((uVar19 ^ uVar21) & uVar18 ^ uVar21) + uVar22 + 0xc1bdceee + iVar4;
  uVar23 = (uVar22 >> 10 | uVar22 * 0x400000) + uVar18;
  iVar5 = param_2[4];
  uVar22 = ((uVar18 ^ uVar19) & uVar23 ^ uVar19) + uVar21 + 0xf57c0faf + iVar5;
  uVar21 = (uVar22 >> 0x19 | uVar22 * 0x80) + uVar23;
  iVar6 = param_2[5];
  uVar22 = ((uVar23 ^ uVar18) & uVar21 ^ uVar18) + uVar19 + 0x4787c62a + iVar6;
  uVar19 = (uVar22 >> 0x14 | uVar22 * 0x1000) + uVar21;
  iVar7 = param_2[6];
  uVar22 = ((uVar21 ^ uVar23) & uVar19 ^ uVar23) + uVar18 + 0xa8304613 + iVar7;
  uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) + uVar19;
  iVar8 = param_2[7];
  uVar18 = ((uVar19 ^ uVar21) & uVar22 ^ uVar21) + uVar23 + 0xfd469501 + iVar8;
  uVar23 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar22;
  iVar9 = param_2[8];
  uVar18 = ((uVar22 ^ uVar19) & uVar23 ^ uVar19) + uVar21 + 0x698098d8 + iVar9;
  uVar21 = (uVar18 >> 0x19 | uVar18 * 0x80) + uVar23;
  iVar10 = param_2[9];
  uVar18 = ((uVar23 ^ uVar22) & uVar21 ^ uVar22) + uVar19 + 0x8b44f7af + iVar10;
  uVar19 = (uVar18 >> 0x14 | uVar18 * 0x1000) + uVar21;
  iVar11 = param_2[10];
  uVar22 = ((uVar21 ^ uVar23) & uVar19 ^ uVar23) + (uVar22 - 0xa44f) + iVar11;
  uVar18 = (uVar22 >> 0xf | uVar22 * 0x20000) + uVar19;
  iVar12 = param_2[0xb];
  uVar22 = ((uVar19 ^ uVar21) & uVar18 ^ uVar21) + uVar23 + 0x895cd7be + iVar12;
  uVar23 = (uVar22 >> 10 | uVar22 * 0x400000) + uVar18;
  iVar13 = param_2[0xc];
  uVar22 = uVar21 + 0x6b901122 + iVar13 + ((uVar18 ^ uVar19) & uVar23 ^ uVar19);
  uVar25 = (uVar22 >> 0x19 | uVar22 * 0x80) + uVar23;
  iVar14 = param_2[0xd];
  uVar22 = ((uVar23 ^ uVar18) & uVar25 ^ uVar18) + uVar19 + 0xfd987193 + iVar14;
  uVar19 = (uVar22 >> 0x14 | uVar22 * 0x1000) + uVar25;
  iVar15 = param_2[0xe];
  uVar22 = uVar18 + 0xa679438e + iVar15 + ((uVar25 ^ uVar23) & uVar19 ^ uVar23);
  uVar21 = (uVar22 >> 0xf | uVar22 * 0x20000) + uVar19;
  iVar16 = param_2[0xf];
  uVar22 = uVar23 + 0x49b40821 + iVar16 + ((uVar19 ^ uVar25) & uVar21 ^ uVar25);
  uVar23 = (uVar22 >> 10 | uVar22 * 0x400000) + uVar21;
  uVar22 = uVar25 + 0xf61e2562 + iVar2 + ((uVar23 ^ uVar21) & uVar19 ^ uVar21);
  uVar22 = (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar18 = ((uVar22 ^ uVar23) & uVar21 ^ uVar23) + uVar19 + 0xc040b340 + iVar7;
  uVar19 = (uVar18 >> 0x17 | uVar18 * 0x200) + uVar22;
  uVar18 = ((uVar19 ^ uVar22) & uVar23 ^ uVar22) + uVar21 + 0x265e5a51 + iVar12;
  uVar21 = (uVar18 >> 0x12 | uVar18 * 0x4000) + uVar19;
  uVar18 = ((uVar21 ^ uVar19) & uVar22 ^ uVar19) + uVar23 + 0xe9b6c7aa + iVar1;
  uVar23 = (uVar18 >> 0xc | uVar18 * 0x100000) + uVar21;
  uVar22 = ((uVar23 ^ uVar21) & uVar19 ^ uVar21) + uVar22 + 0xd62f105d + iVar6;
  uVar18 = (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar22 = ((uVar18 ^ uVar23) & uVar21 ^ uVar23) + uVar19 + 0x2441453 + iVar11;
  uVar19 = (uVar22 >> 0x17 | uVar22 * 0x200) + uVar18;
  uVar22 = uVar21 + 0xd8a1e681 + iVar16 + ((uVar19 ^ uVar18) & uVar23 ^ uVar18);
  uVar21 = (uVar22 >> 0x12 | uVar22 * 0x4000) + uVar19;
  uVar22 = ((uVar21 ^ uVar19) & uVar18 ^ uVar19) + uVar23 + 0xe7d3fbc8 + iVar5;
  uVar23 = (uVar22 >> 0xc | uVar22 * 0x100000) + uVar21;
  uVar22 = ((uVar23 ^ uVar21) & uVar19 ^ uVar21) + uVar18 + 0x21e1cde6 + iVar10;
  uVar18 = (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar22 = ((uVar18 ^ uVar23) & uVar21 ^ uVar23) + uVar19 + 0xc33707d6 + iVar15;
  uVar19 = (uVar22 >> 0x17 | uVar22 * 0x200) + uVar18;
  uVar22 = ((uVar19 ^ uVar18) & uVar23 ^ uVar18) + uVar21 + 0xf4d50d87 + iVar4;
  uVar21 = (uVar22 >> 0x12 | uVar22 * 0x4000) + uVar19;
  uVar22 = uVar23 + 0x455a14ed + iVar9 + ((uVar21 ^ uVar19) & uVar18 ^ uVar19);
  uVar23 = (uVar22 >> 0xc | uVar22 * 0x100000) + uVar21;
  uVar22 = uVar18 + 0xa9e3e905 + iVar14 + ((uVar23 ^ uVar21) & uVar19 ^ uVar21);
  uVar18 = (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar22 = uVar19 + 0xfcefa3f8 + iVar3 + ((uVar18 ^ uVar23) & uVar21 ^ uVar23);
  uVar19 = (uVar22 >> 0x17 | uVar22 * 0x200) + uVar18;
  uVar22 = uVar21 + 0x676f02d9 + iVar8 + ((uVar18 ^ uVar19) & uVar23 ^ uVar18);
  uVar21 = (uVar22 >> 0x12 | uVar22 * 0x4000) + uVar19;
  uVar22 = uVar23 + 0x8d2a4c8a + iVar13 + (uVar18 & (uVar21 ^ uVar19) ^ uVar19);
  uVar23 = (uVar22 >> 0xc | uVar22 * 0x100000) + uVar21;
  uVar22 = (uVar21 ^ uVar19 ^ uVar23) + (uVar18 - 0x5c6be) + iVar6;
  uVar18 = (uVar22 >> 0x1c | uVar22 * 0x10) + uVar23;
  uVar22 = (uVar23 ^ uVar21 ^ uVar18) + uVar19 + 0x8771f681 + iVar9;
  uVar19 = (uVar22 >> 0x15 | uVar22 * 0x800) + uVar18;
  uVar22 = (uVar18 ^ uVar23 ^ uVar19) + uVar21 + 0x6d9d6122 + iVar12;
  uVar21 = (uVar22 >> 0x10 | uVar22 * 0x10000) + uVar19;
  uVar22 = (uVar19 ^ uVar18 ^ uVar21) + uVar23 + 0xfde5380c + iVar15;
  uVar25 = (uVar22 >> 9 | uVar22 * 0x800000) + uVar21;
  uVar22 = uVar18 + 0xa4beea44 + iVar2 + (uVar21 ^ uVar19 ^ uVar25);
  uVar18 = (uVar22 >> 0x1c | uVar22 * 0x10) + uVar25;
  uVar22 = uVar19 + 0x4bdecfa9 + iVar5 + (uVar25 ^ uVar21 ^ uVar18);
  uVar23 = (uVar22 >> 0x15 | uVar22 * 0x800) + uVar18;
  uVar22 = (uVar18 ^ uVar25 ^ uVar23) + uVar21 + 0xf6bb4b60 + iVar8;
  uVar21 = (uVar22 >> 0x10 | uVar22 * 0x10000) + uVar23;
  uVar22 = uVar25 + 0xbebfbc70 + iVar11 + (uVar23 ^ uVar18 ^ uVar21);
  uVar19 = (uVar22 >> 9 | uVar22 * 0x800000) + uVar21;
  uVar22 = uVar18 + 0x289b7ec6 + iVar14 + (uVar21 ^ uVar23 ^ uVar19);
  uVar25 = (uVar22 >> 0x1c | uVar22 * 0x10) + uVar19;
  uVar22 = (uVar19 ^ uVar21 ^ uVar25) + uVar23 + 0xeaa127fa + iVar1;
  uVar23 = (uVar22 >> 0x15 | uVar22 * 0x800) + uVar25;
  uVar22 = uVar21 + 0xd4ef3085 + iVar4 + (uVar25 ^ uVar19 ^ uVar23);
  uVar18 = (uVar22 >> 0x10 | uVar22 * 0x10000) + uVar23;
  uVar22 = uVar19 + 0x4881d05 + iVar7 + (uVar23 ^ uVar25 ^ uVar18);
  uVar21 = (uVar22 >> 9 | uVar22 * 0x800000) + uVar18;
  uVar22 = (uVar18 ^ uVar23 ^ uVar21) + uVar25 + 0xd9d4d039 + iVar10;
  uVar25 = (uVar22 >> 0x1c | uVar22 * 0x10) + uVar21;
  uVar22 = uVar23 + 0xe6db99e5 + iVar13 + (uVar21 ^ uVar18 ^ uVar25);
  uVar19 = (uVar22 >> 0x15 | uVar22 * 0x800) + uVar25;
  uVar22 = uVar18 + 0x1fa27cf8 + iVar16 + (uVar25 ^ uVar21 ^ uVar19);
  uVar23 = (uVar22 >> 0x10 | uVar22 * 0x10000) + uVar19;
  uVar22 = (uVar19 ^ uVar25 ^ uVar23) + uVar21 + 0xc4ac5665 + iVar3;
  uVar21 = (uVar22 >> 9 | uVar22 * 0x800000) + uVar23;
  uVar22 = uVar25 + 0xf4292244 + iVar1 + ((~uVar19 | uVar21) ^ uVar23);
  uVar22 = (uVar22 >> 0x1a | uVar22 * 0x40) + uVar21;
  uVar18 = ((~uVar23 | uVar22) ^ uVar21) + uVar19 + 0x432aff97 + iVar8;
  uVar18 = (uVar18 >> 0x16 | uVar18 * 0x400) + uVar22;
  uVar19 = ((~uVar21 | uVar18) ^ uVar22) + uVar23 + 0xab9423a7 + iVar15;
  uVar23 = (uVar19 >> 0x11 | uVar19 * 0x8000) + uVar18;
  uVar19 = ((~uVar22 | uVar23) ^ uVar18) + uVar21 + 0xfc93a039 + iVar6;
  uVar21 = (uVar19 >> 0xb | uVar19 * 0x200000) + uVar23;
  uVar22 = uVar22 + 0x655b59c3 + iVar13 + ((~uVar18 | uVar21) ^ uVar23);
  uVar26 = (uVar22 >> 0x1a | uVar22 * 0x40) + uVar21;
  uVar22 = ((~uVar23 | uVar26) ^ uVar21) + uVar18 + 0x8f0ccc92 + iVar4;
  uVar19 = (uVar22 >> 0x16 | uVar22 * 0x400) + uVar26;
  uVar22 = ((~uVar21 | uVar19) ^ uVar26) + (uVar23 - 0x100b83) + iVar11;
  uVar25 = (uVar22 >> 0x11 | uVar22 * 0x8000) + uVar19;
  uVar22 = uVar21 + 0x85845dd1 + iVar2 + ((~uVar26 | uVar25) ^ uVar19);
  uVar18 = (uVar22 >> 0xb | uVar22 * 0x200000) + uVar25;
  uVar22 = uVar26 + 0x6fa87e4f + iVar9 + ((~uVar19 | uVar18) ^ uVar25);
  uVar23 = (uVar22 >> 0x1a | uVar22 * 0x40) + uVar18;
  uVar22 = uVar19 + 0xfe2ce6e0 + iVar16 + ((~uVar25 | uVar23) ^ uVar18);
  uVar21 = (uVar22 >> 0x16 | uVar22 * 0x400) + uVar23;
  uVar22 = uVar25 + 0xa3014314 + iVar7 + ((~uVar18 | uVar21) ^ uVar23);
  uVar19 = (uVar22 >> 0x11 | uVar22 * 0x8000) + uVar21;
  uVar22 = uVar18 + 0x4e0811a1 + iVar14 + ((~uVar23 | uVar19) ^ uVar21);
  uVar18 = (uVar22 >> 0xb | uVar22 * 0x200000) + uVar19;
  uVar22 = uVar23 + 0xf7537e82 + iVar5 + ((~uVar21 | uVar18) ^ uVar19);
  uVar23 = (uVar22 >> 0x1a | uVar22 * 0x40) + uVar18;
  uVar22 = uVar21 + 0xbd3af235 + iVar12 + ((~uVar19 | uVar23) ^ uVar18);
  uVar21 = (uVar22 >> 0x16 | uVar22 * 0x400) + uVar23;
  uVar22 = uVar19 + 0x2ad7d2bb + iVar3 + ((~uVar18 | uVar21) ^ uVar23);
  uVar19 = (uVar22 >> 0x11 | uVar22 * 0x8000) + uVar21;
  uVar22 = uVar18 + 0xeb86d391 + iVar10 + ((~uVar23 | uVar19) ^ uVar21);
  *param_1 = uVar23 + *param_1;
  *puVar17 = uVar19 + *puVar17 + (uVar22 >> 0xb | uVar22 * 0x200000);
  *puVar20 = *puVar20 + uVar19;
  *puVar24 = *puVar24 + uVar21;
  return;
}



void caml_MD5Final(undefined4 *param_1,undefined4 *param_2)

{
  void *__s;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  byte bVar5;
  
  bVar5 = 0;
  uVar1 = (uint)param_2[4] >> 3 & 0x3f;
  *(undefined *)((int)param_2 + uVar1 + 0x18) = 0x80;
  __s = (void *)((int)param_2 + uVar1 + 0x19);
  uVar2 = -uVar1 + 0x3f;
  if (uVar2 < 8) {
    memset(__s,0,uVar2);
    puVar3 = param_2 + 6;
    caml_MD5Transform(param_2,puVar3);
    uVar1 = 0x38;
    bVar4 = ((uint)puVar3 & 1) != 0;
    if (bVar4) {
      *(undefined *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)param_2 + 0x19);
      uVar1 = 0x37;
    }
    if (((uint)puVar3 & 2) != 0) {
      *(undefined2 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
      uVar1 = uVar1 - 2;
    }
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    }
    if ((uVar1 & 2) != 0) {
      *(undefined2 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
    }
    if (bVar4) {
      *(undefined *)puVar3 = 0;
    }
  }
  else {
    memset(__s,0,-uVar1 + 0x37);
  }
  param_2[0x14] = param_2[4];
  param_2[0x15] = param_2[5];
  caml_MD5Transform(param_2,param_2 + 6);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *param_2 = 0;
  return;
}



void caml_MD5Update(int param_1,void *param_2,size_t param_3)

{
  void *__dest;
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar3 = uVar1 + param_3 * 8;
  *(uint *)(param_1 + 0x10) = uVar3;
  if (uVar3 < uVar1) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
  uVar3 = uVar1 >> 3 & 0x3f;
  if (uVar3 != 0) {
    __dest = (void *)(param_1 + 0x18 + uVar3);
    uVar3 = 0x40 - uVar3;
    if (param_3 < uVar3) {
      memcpy(__dest,param_2,param_3);
      return;
    }
    memcpy(__dest,param_2,uVar3);
    caml_MD5Transform(param_1,param_1 + 0x18);
    param_2 = (void *)((int)param_2 + uVar3);
    param_3 = param_3 - uVar3;
  }
  if (0x3f < param_3) {
    iVar4 = 0;
    do {
      puVar2 = (undefined4 *)((int)param_2 + iVar4);
      *(undefined4 *)(param_1 + 0x18) = *puVar2;
      *(undefined4 *)(param_1 + 0x1c) = puVar2[1];
      *(undefined4 *)(param_1 + 0x20) = puVar2[2];
      *(undefined4 *)(param_1 + 0x24) = puVar2[3];
      *(undefined4 *)(param_1 + 0x28) = puVar2[4];
      *(undefined4 *)(param_1 + 0x2c) = puVar2[5];
      *(undefined4 *)(param_1 + 0x30) = puVar2[6];
      *(undefined4 *)(param_1 + 0x34) = puVar2[7];
      *(undefined4 *)(param_1 + 0x38) = puVar2[8];
      *(undefined4 *)(param_1 + 0x3c) = puVar2[9];
      *(undefined4 *)(param_1 + 0x40) = puVar2[10];
      *(undefined4 *)(param_1 + 0x44) = puVar2[0xb];
      *(undefined4 *)(param_1 + 0x48) = puVar2[0xc];
      *(undefined4 *)(param_1 + 0x4c) = puVar2[0xd];
      *(undefined4 *)(param_1 + 0x50) = puVar2[0xe];
      *(undefined4 *)(param_1 + 0x54) = puVar2[0xf];
      caml_MD5Transform(param_1,(undefined4 *)(param_1 + 0x18));
      iVar4 = iVar4 + 0x40;
    } while (0x3f < param_3 - iVar4);
    param_2 = (void *)((int)param_2 + (param_3 - 0x40 & 0xffffffc0) + 0x40);
    param_3 = param_3 - 0x40 & 0x3f;
  }
  memcpy((void *)(param_1 + 0x18),param_2,param_3);
  return;
}



undefined4 caml_md5_chan(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined local_1094 [4096];
  undefined local_94 [88];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  
  uVar2 = caml_local_roots;
  local_3c = caml_local_roots;
  caml_local_roots = &local_3c;
  local_34 = 1;
  local_38 = 2;
  local_30 = &param_1;
  local_2c = &param_2;
  uVar1 = *(undefined4 *)(param_1 + 4);
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  caml_MD5Init(local_94);
  uVar7 = param_2 >> 1;
  if ((int)uVar7 < 0) {
    while (iVar5 = caml_getblock(uVar1,local_1094,0x1000), iVar5 != 0) {
      caml_MD5Update(local_94,local_1094,iVar5);
    }
  }
  else {
    for (; 0 < (int)uVar7; uVar7 = uVar7 - iVar4) {
      uVar3 = 0x1000;
      if (uVar7 < 0x1001) {
        uVar3 = uVar7;
      }
      iVar4 = caml_getblock(uVar1,local_1094,uVar3);
      iVar5 = iVar4;
      if (iVar4 == 0) {
        iVar5 = caml_raise_end_of_file();
      }
      caml_MD5Update(local_94,local_1094,iVar5);
    }
  }
  uVar6 = caml_alloc_string(0x10);
  caml_MD5Final(uVar6,local_94);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined4 *)uVar2;
  return uVar6;
}



undefined4 caml_md5_string(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined local_64 [88];
  
  caml_MD5Init(local_64);
  caml_MD5Update(local_64,(param_2 >> 1) + param_1,param_3 >> 1);
  uVar1 = caml_alloc_string(0x10);
  caml_MD5Final(uVar1,local_64);
  return uVar1;
}



void __regparm3 add_char(uint *param_1,undefined param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_1;
  if (puVar1 < (undefined *)param_1[1]) {
    *puVar1 = param_2;
    *param_1 = (uint)(puVar1 + 1);
  }
  return;
}



void __regparm3 add_string(void **param_1,char *param_2)

{
  char cVar1;
  void *__dest;
  uint uVar2;
  size_t __n;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  __dest = *param_1;
  __n = ~uVar2 - 1;
  if (param_1[1] < (void *)((int)__dest + (~uVar2 - 1))) {
    __n = (int)param_1[1] - (int)__dest;
  }
  if (0 < (int)__n) {
    memmove(__dest,param_2,__n);
  }
  *param_1 = (void *)((int)*param_1 + __n);
  return;
}



void * caml_format_exception(uint param_1)

{
  undefined *__size;
  uint uVar1;
  uint uVar2;
  void *__dest;
  uint uVar3;
  uint local_170;
  char local_164 [64];
  undefined *local_124;
  undefined *local_120;
  undefined local_11c [255];
  undefined local_1d;
  undefined local_1c [12];
  
  local_124 = local_11c;
  local_120 = &local_1d;
  add_string();
  uVar2 = *(uint *)(param_1 - 4) >> 10;
  if (1 < uVar2) {
    if (((uVar2 != 2) || (uVar2 = *(uint *)(param_1 + 4), (uVar2 & 1) != 0)) ||
       (local_170 = 0, *(char *)(uVar2 - 4) != '\0')) {
      local_170 = 1;
      uVar2 = param_1;
    }
    add_char();
    uVar3 = local_170;
    if (local_170 < *(uint *)(uVar2 - 4) >> 10) {
      while( true ) {
        uVar1 = *(uint *)(uVar2 + uVar3 * 4);
        if ((uVar1 & 1) == 0) {
          if (*(char *)(uVar1 - 4) == -4) {
            add_char();
            add_string();
            add_char();
          }
          else {
            add_char();
          }
        }
        else {
          sprintf(local_164,"%ld",(int)uVar1 >> 1);
          add_string();
        }
        uVar3 = uVar3 + 1;
        if (*(uint *)(uVar2 - 4) >> 10 <= uVar3) break;
        if (local_170 < uVar3) {
          add_string();
        }
      }
    }
    add_char();
  }
  *local_124 = 0;
  __size = local_124 + (0x101 - (int)local_1c);
  __dest = malloc((size_t)__size);
  if (__dest != (void *)0x0) {
    memmove(__dest,local_11c,(size_t)__size);
  }
  return __dest;
}



void caml_fatal_uncaught_exception(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *__ptr;
  undefined4 *puVar3;
  
  __ptr = (void *)caml_format_exception(param_1);
  uVar2 = caml_backtrace_pos;
  iVar1 = caml_backtrace_active;
  caml_backtrace_active = 0;
  puVar3 = (undefined4 *)caml_named_value("Pervasives.do_at_exit");
  if (puVar3 != (undefined4 *)0x0) {
    caml_callback_exn(*puVar3,1);
  }
  caml_backtrace_active = iVar1;
  caml_backtrace_pos = uVar2;
  fprintf(stderr,"Fatal error: exception %s\n",__ptr);
  free(__ptr);
  if (caml_backtrace_active != 0) {
    caml_print_exception_backtrace();
  }
                    // WARNING: Subroutine does not return
  exit(2);
}



uint __regparm3 hash_value_name(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    uVar2 = (int)cVar1 + uVar2 * 0x13;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return uVar2 % 0xd;
}



int caml_named_value(char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = hash_value_name();
  iVar1 = *(int *)(named_value_table + iVar1 * 4);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = strcmp(param_1,(char *)(iVar1 + 8));
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1;
}



undefined4 caml_register_named_value(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  iVar2 = hash_value_name();
  for (puVar4 = *(undefined4 **)(named_value_table + iVar2 * 4); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)puVar4[1]) {
    iVar3 = strcmp(param_1,(char *)(puVar4 + 2));
    if (iVar3 == 0) {
      *puVar4 = param_2;
      return 1;
    }
  }
  uVar5 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  puVar4 = (undefined4 *)caml_stat_alloc(~uVar5 + 0xb);
  strcpy((char *)(puVar4 + 2),param_1);
  *puVar4 = param_2;
  puVar4[1] = *(undefined4 *)(named_value_table + iVar2 * 4);
  *(undefined4 **)(named_value_table + iVar2 * 4) = puVar4;
  caml_register_global_root(puVar4);
  return 1;
}



void caml_callback3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = caml_callback3_exn(param_1,param_2,param_3,param_4);
  if ((uVar1 & 3) == 2) {
                    // WARNING: Subroutine does not return
    caml_raise(uVar1 & 0xfffffffc);
  }
  return;
}



void caml_callback2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = caml_callback2_exn(param_1,param_2,param_3);
  if ((uVar1 & 3) == 2) {
                    // WARNING: Subroutine does not return
    caml_raise(uVar1 & 0xfffffffc);
  }
  return;
}



void caml_callback(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = caml_callback_exn(param_1,param_2);
  if ((uVar1 & 3) == 2) {
                    // WARNING: Subroutine does not return
    caml_raise(uVar1 & 0xfffffffc);
  }
  return;
}



uint caml_callbackN_exn(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 **local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint *local_74;
  uint local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  
  iVar3 = param_3;
  iVar2 = param_2;
  uVar1 = caml_local_roots;
  local_60 = param_1;
  if (0 < param_2) {
    local_3c = caml_local_roots;
    local_34 = 1;
    local_38 = 1;
    local_30 = &param_1;
    local_5c = &local_3c;
    local_54 = param_2;
    local_58 = 1;
    local_50 = param_3;
    local_80 = &local_5c;
    local_78 = 1;
    local_7c = 1;
    local_74 = &local_60;
    iVar5 = 0;
    caml_local_roots = &local_80;
    do {
      iVar4 = iVar2 - iVar5;
      if (iVar4 == 1) {
        local_60 = caml_callback_exn(local_60,*(undefined4 *)(iVar3 + iVar5 * 4));
        if ((local_60 & 3) == 2) {
          caml_local_roots = (undefined4 ***)uVar1;
          return local_60;
        }
        iVar5 = iVar5 + 1;
      }
      else if (iVar4 == 2) {
        local_60 = caml_callback2_exn(local_60,*(undefined4 *)(iVar3 + iVar5 * 4),
                                      *(undefined4 *)(iVar3 + 4 + iVar5 * 4));
        if ((local_60 & 3) == 2) {
          caml_local_roots = (undefined4 ***)uVar1;
          return local_60;
        }
        iVar5 = iVar5 + 2;
      }
      else {
        local_60 = caml_callback3_exn(local_60,*(undefined4 *)(iVar3 + iVar5 * 4),
                                      *(undefined4 *)(iVar3 + 4 + iVar5 * 4),
                                      *(undefined4 *)(iVar3 + 8 + iVar5 * 4));
        if ((local_60 & 3) == 2) {
          caml_local_roots = (undefined4 ***)uVar1;
          return local_60;
        }
        iVar5 = iVar5 + 3;
      }
    } while (iVar5 < iVar2);
  }
  caml_local_roots = (undefined4 ***)uVar1;
  return local_60;
}



void caml_callbackN(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = caml_callbackN_exn(param_1,param_2,param_3);
  if ((uVar1 & 3) == 2) {
                    // WARNING: Subroutine does not return
    caml_raise(uVar1 & 0xfffffffc);
  }
  return;
}



char caml_weak_check(int param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (param_2 >> 1) + 1;
  if ((uVar1 == 0) || (*(uint *)(param_1 + -4) >> 10 <= uVar1)) {
    uVar2 = caml_invalid_argument("Weak.get");
    param_1 = (int)((ulonglong)uVar2 >> 0x20);
    uVar1 = (uint)uVar2;
  }
  return (*(undefined **)(param_1 + uVar1 * 4) != caml_weak_none) * '\x02' + '\x01';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __regparm3 do_set(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  
  if ((((param_3 & 1) == 0) && (param_3 < caml_young_end)) && (caml_young_start < param_3)) {
    puVar1 = (uint *)(param_1 + param_2 * 4);
    uVar2 = *puVar1;
    *puVar1 = param_3;
    if ((((uVar2 & 1) != 0) || (caml_young_end <= uVar2)) || (uVar2 <= caml_young_start)) {
      if (_DAT_0807eb68 <= DAT_0807eb64) {
        caml_realloc_ref_table(&caml_weak_ref_table);
      }
      *DAT_0807eb64 = puVar1;
      DAT_0807eb64 = DAT_0807eb64 + 1;
    }
  }
  else {
    *(uint *)(param_1 + param_2 * 4) = param_3;
  }
  return;
}



undefined4 caml_weak_blit(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EDI;
  uint local_20;
  
  uVar5 = (param_2 >> 1) + 1;
  if ((uVar5 == 0) ||
     (local_20 = param_5 >> 1, unaff_EDI = param_1, *(uint *)(param_1 + -4) >> 10 < local_20 + uVar5
     )) {
    caml_invalid_argument("Weak.blit");
    param_1 = unaff_EDI;
  }
  uVar3 = (param_4 >> 1) + 1;
  if ((uVar3 == 0) || (*(uint *)(param_3 + -4) >> 10 < local_20 + uVar3)) {
    caml_invalid_argument("Weak.blit");
  }
  if (((caml_gc_phase == 0) && (caml_gc_subphase == 0xb)) && (local_20 != 0)) {
    uVar4 = 0;
    do {
      puVar1 = (uint *)(param_1 + (uVar4 + uVar5) * 4);
      puVar2 = (undefined *)*puVar1;
      if (((puVar2 != caml_weak_none) && (((uint)puVar2 & 1) == 0)) &&
         (((*(byte *)((&caml_page_table)[(uint)puVar2 >> 0x17] + ((uint)puVar2 >> 0xc & 0x7ff)) & 1)
           != 0 && ((*(uint *)(puVar2 + -4) & 0x300) == 0)))) {
        *puVar1 = (uint)caml_weak_none;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_20);
  }
  if (uVar3 < uVar5) {
    if (local_20 != 0) {
      uVar5 = 0;
      do {
        do_set();
        uVar5 = uVar5 + 1;
      } while (uVar5 < local_20);
    }
  }
  else {
    while (local_20 = local_20 - 1, -1 < (int)local_20) {
      do_set();
    }
  }
  return 1;
}



undefined4 caml_weak_set(int param_1,int param_2,uint param_3)

{
  uint extraout_ECX;
  uint uVar1;
  uint extraout_EDX;
  int unaff_ESI;
  
  uVar1 = (param_2 >> 1) + 1;
  if ((uVar1 == 0) || (unaff_ESI = param_1, *(uint *)(param_1 + -4) >> 10 <= uVar1)) {
    caml_invalid_argument("Weak.set");
    param_3 = extraout_ECX;
    uVar1 = extraout_EDX;
    param_1 = unaff_ESI;
  }
  if ((param_3 == 1) || ((param_3 & 1) != 0)) {
    *(undefined **)(param_1 + uVar1 * 4) = caml_weak_none;
  }
  else {
    do_set();
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * caml_weak_get_copy(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *__src;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined **local_54;
  undefined *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  
  uVar4 = caml_local_roots;
  local_3c = caml_local_roots;
  local_64 = &local_3c;
  local_34 = 1;
  local_38 = 2;
  local_30 = &param_1;
  local_2c = &param_2;
  local_40 = 0;
  local_44 = (undefined *)0x0;
  caml_local_roots = &local_64;
  local_5c = 1;
  local_60 = 2;
  local_58 = &local_40;
  local_54 = &local_44;
  uVar7 = (param_2 >> 1) + 1;
  if ((uVar7 == 0) || (iVar5 = param_1, *(uint *)(param_1 + -4) >> 10 <= uVar7)) {
    iVar5 = caml_invalid_argument("Weak.get");
  }
  puVar1 = *(undefined **)(uVar7 * 4 + iVar5);
  if (puVar1 == caml_weak_none) {
    puVar6 = (uint *)0x1;
  }
  else {
    if ((((uint)puVar1 & 1) == 0) &&
       ((*(byte *)((&caml_page_table)[(uint)puVar1 >> 0x17] + ((uint)puVar1 >> 0xc & 0x7ff)) & 3) !=
        0)) {
      local_44 = (undefined *)caml_alloc(*(uint *)(puVar1 + -4) >> 10,puVar1[-4]);
      __src = *(undefined **)(uVar7 * 4 + param_1);
      if (__src == caml_weak_none) {
        caml_local_roots = (undefined4 **)uVar4;
        return (uint *)0x1;
      }
      puVar6 = (uint *)(__src + -4);
      if (*(byte *)puVar6 < 0xfb) {
        puVar1 = local_44;
        if (*puVar6 >> 10 != 0) {
          uVar7 = 0;
          do {
            iVar5 = uVar7 * 4;
            uVar2 = *(uint *)(__src + uVar7 * 4);
            if (((caml_gc_phase == 0) && ((uVar2 & 1) == 0)) &&
               ((*(byte *)((&caml_page_table)[uVar2 >> 0x17] + (uVar2 >> 0xc & 0x7ff)) & 1) != 0)) {
              caml_darken(uVar2,0);
            }
            uVar3 = *(uint *)(local_44 + iVar5);
            *(uint *)(local_44 + iVar5) = uVar2;
            if ((*(byte *)((&caml_page_table)[(uint)(local_44 + iVar5) >> 0x17] +
                          ((uint)(local_44 + iVar5) >> 0xc & 0x7ff)) & 1) != 0) {
              if (caml_gc_phase == 0) {
                caml_darken(uVar3,0);
              }
              if (((((uVar2 & 1) == 0) && (uVar2 < caml_young_end)) && (caml_young_start < uVar2))
                 && ((((uVar3 & 1) != 0 || (caml_young_end <= uVar3)) || (uVar3 <= caml_young_start)
                     ))) {
                if (_DAT_0807eb4c <= DAT_0807eb48) {
                  caml_realloc_ref_table(&caml_ref_table);
                }
                *DAT_0807eb48 = local_44 + iVar5;
                DAT_0807eb48 = DAT_0807eb48 + 1;
              }
            }
            uVar7 = uVar7 + 1;
            puVar1 = local_44;
          } while (uVar7 < *puVar6 >> 10);
        }
      }
      else {
        memmove(local_44,__src,(*puVar6 >> 10) << 2);
        puVar1 = local_44;
      }
    }
    local_44 = puVar1;
    puVar6 = (uint *)caml_alloc_small(1,0);
    *puVar6 = (uint)local_44;
  }
  caml_local_roots = (undefined4 **)uVar4;
  return puVar6;
}



uint * caml_weak_get(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint **local_48;
  undefined **local_44;
  undefined *local_34;
  uint *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  
  uVar1 = caml_local_roots;
  local_2c = caml_local_roots;
  local_24 = 1;
  local_28 = 2;
  local_20 = &param_1;
  local_1c = &param_2;
  local_30 = (uint *)0x0;
  local_34 = (undefined *)0x0;
  local_54 = &local_2c;
  caml_local_roots = &local_54;
  local_4c = 1;
  local_50 = 2;
  local_48 = &local_30;
  local_44 = &local_34;
  uVar2 = (param_2 >> 1) + 1;
  if ((uVar2 == 0) || (iVar3 = param_1, *(uint *)(param_1 + -4) >> 10 <= uVar2)) {
    uVar4 = caml_invalid_argument("Weak.get");
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    uVar2 = (uint)uVar4;
  }
  local_34 = *(undefined **)(iVar3 + uVar2 * 4);
  if (local_34 == caml_weak_none) {
    local_30 = (uint *)0x1;
  }
  else {
    if (((caml_gc_phase == 0) && (((uint)local_34 & 1) == 0)) &&
       ((*(byte *)((&caml_page_table)[(uint)local_34 >> 0x17] + ((uint)local_34 >> 0xc & 0x7ff)) & 1
        ) != 0)) {
      caml_darken(local_34,0);
    }
    local_30 = (uint *)caml_alloc_small(1,0);
    *local_30 = (uint)local_34;
  }
  caml_local_roots = (undefined4 **)uVar1;
  return local_30;
}



void caml_weak_create(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar1 = (param_1 >> 1) + 1;
  if (0x3ffffe < (uint)(param_1 >> 1)) {
    caml_invalid_argument("Weak.create");
  }
  puVar2 = (undefined4 *)caml_alloc_shr(uVar1,0xfb);
  if (1 < uVar1) {
    uVar3 = 1;
    do {
      puVar2[uVar3] = caml_weak_none;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  *puVar2 = caml_weak_list_head;
  caml_weak_list_head = puVar2;
  return;
}



void __regparm3 invert_pointer_at(uint **param_1)

{
  uint **ppuVar1;
  uint *puVar2;
  uint **ppuVar3;
  uint **ppuVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar2 = *param_1;
  if ((((uint)puVar2 & 3) == 0) &&
     ((*(byte *)((&caml_page_table)[(uint)puVar2 >> 0x17] + ((uint)puVar2 >> 0xc & 0x7ff)) & 1) != 0
     )) {
    ppuVar1 = (uint **)(puVar2 + -1);
    puVar6 = *ppuVar1;
    uVar5 = (uint)puVar6 & 3;
    if (uVar5 == 1) {
      puVar6 = puVar2 + -((uint)puVar6 >> 10);
      ppuVar3 = (uint **)(puVar6 + -1);
      for (ppuVar4 = (uint **)puVar6[-1]; ((uint)ppuVar4 & 3) == 0; ppuVar4 = (uint **)*ppuVar4) {
        ppuVar3 = ppuVar4;
      }
      if ((char)((uint)ppuVar4 >> 2) == -9) {
        *param_1 = (uint *)ppuVar4;
        *ppuVar1 = (uint *)((uint)param_1 | 2);
        *ppuVar3 = (uint *)((((uint)((int)puVar2 - (int)puVar6) >> 2) - 1) * 0x400 | 999);
      }
      else {
        *param_1 = (uint *)((uint)(puVar6 + ((uint)ppuVar4 >> 10)) | 1);
        *ppuVar1 = (uint *)((uint)param_1 | 2);
        *ppuVar3 = (uint *)((((uint)((int)puVar2 - (int)puVar6) >> 2) - 1) * 0x400 | 999);
      }
    }
    else {
      if (uVar5 != 0) {
        if (uVar5 == 2) {
          *param_1 = puVar6;
          *ppuVar1 = (uint *)((uint)param_1 | 2);
          return;
        }
        if (uVar5 != 3) {
          return;
        }
      }
      *param_1 = puVar6;
      *ppuVar1 = (uint *)param_1;
    }
  }
  return;
}



void invert_root(void)

{
  invert_pointer_at();
  return;
}



void init_compact_allocate(void)

{
  int iVar1;
  
  iVar1 = caml_heap_start;
  if (caml_heap_start != 0) {
    do {
      *(undefined4 *)(iVar1 + -0xc) = 0;
      iVar1 = *(int *)(iVar1 + -4);
    } while (iVar1 != 0);
  }
  compact_fl = caml_heap_start;
  return;
}



int __regparm3 compact_allocate(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)(*(int *)(compact_fl + -8) - *(int *)(compact_fl + -0xc)) < 0x11) {
    iVar1 = *(int *)(compact_fl + -4);
    uVar3 = *(int *)(iVar1 + -8) - *(int *)(iVar1 + -0xc);
    while (iVar2 = iVar1, uVar3 < 0x11) {
      iVar1 = *(int *)(iVar2 + -4);
      uVar3 = *(int *)(iVar1 + -8) - *(int *)(iVar1 + -0xc);
      compact_fl = iVar2;
    }
  }
  iVar1 = *(int *)(compact_fl + -0xc);
  uVar3 = *(int *)(compact_fl + -8) - iVar1;
  iVar2 = compact_fl;
  while (uVar3 < param_1) {
    iVar2 = *(int *)(iVar2 + -4);
    iVar1 = *(int *)(iVar2 + -0xc);
    uVar3 = *(int *)(iVar2 + -8) - iVar1;
  }
  *(uint *)(iVar2 + -0xc) = iVar1 + param_1;
  return iVar2 + iVar1;
}



void caml_compact_heap(void)

{
  int *piVar1;
  int **ppiVar2;
  uint uVar3;
  int **ppiVar4;
  int iVar5;
  void *__dest;
  int **ppiVar6;
  int *piVar7;
  int **ppiVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint local_28;
  int **local_24;
  
  caml_gc_message(0x10,"Compacting heap...\n",0);
  for (ppiVar6 = caml_heap_start; ppiVar6 != (int **)0x0; ppiVar6 = (int **)ppiVar6[-1]) {
    piVar1 = ppiVar6[-2];
    for (ppiVar8 = ppiVar6; ppiVar8 < (int **)((int)ppiVar6 + (int)piVar1);
        ppiVar8 = ppiVar8 + ((uint)piVar11 >> 10) + 1) {
      piVar11 = *ppiVar8;
      if (((uint)piVar11 & 0x300) == 0x200) {
        *ppiVar8 = (int *)((uint)piVar11 & 0xfffffc00 | 0x3f3);
      }
      else {
        *ppiVar8 = (int *)(((uint)piVar11 & 0xff) << 2 | (uint)piVar11 & 0xfffffc00 | 3);
      }
    }
  }
  caml_do_roots(invert_root);
  caml_final_do_weak_roots(invert_root);
  for (ppiVar6 = caml_heap_start; ppiVar8 = caml_weak_list_head, ppiVar6 != (int **)0x0;
      ppiVar6 = (int **)ppiVar6[-1]) {
    piVar1 = ppiVar6[-2];
    for (ppiVar8 = ppiVar6; ppiVar8 < (int **)((int)ppiVar6 + (int)piVar1);
        ppiVar8 = ppiVar8 + uVar10) {
      for (ppiVar4 = (int **)*ppiVar8; ((uint)ppiVar4 & 3) == 0; ppiVar4 = (int **)*ppiVar4) {
      }
      uVar10 = ((uint)ppiVar4 >> 10) + 1;
      uVar3 = (uint)ppiVar4 >> 2 & 0xff;
      if (uVar3 == 0xf9) {
        for (piVar11 = ppiVar8[uVar10]; ((uint)piVar11 & 3) != 3;
            piVar11 = *(int **)((uint)piVar11 & 0xfffffffc)) {
        }
        uVar10 = ((uint)piVar11 >> 10) + 1;
        uVar3 = (uint)piVar11 >> 2 & 0xff;
      }
      if ((uVar3 < 0xfb) && (1 < uVar10)) {
        uVar3 = 1;
        do {
          invert_pointer_at();
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar10);
      }
    }
  }
  for (; ppiVar8 != (int **)0x0; ppiVar8 = (int **)*ppiVar8) {
    for (ppiVar6 = (int **)ppiVar8[-1]; ((uint)ppiVar6 & 3) == 0; ppiVar6 = (int **)*ppiVar6) {
    }
    if (1 < (uint)ppiVar6 >> 10) {
      uVar3 = 1;
      ppiVar4 = ppiVar8;
      do {
        ppiVar4 = ppiVar4 + 1;
        if (*ppiVar4 != (int *)caml_weak_none) {
          invert_pointer_at();
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)ppiVar6 >> 10);
    }
    invert_pointer_at();
  }
  init_compact_allocate();
  for (ppiVar6 = caml_heap_start; ppiVar6 != (int **)0x0; ppiVar6 = (int **)ppiVar6[-1]) {
    piVar1 = ppiVar6[-2];
    ppiVar8 = ppiVar6;
    while (ppiVar8 < (int **)((int)piVar1 + (int)ppiVar6)) {
      ppiVar4 = (int **)*ppiVar8;
      if (((uint)ppiVar4 & 3) == 0) {
        do {
          ppiVar4 = (int **)*ppiVar4;
        } while (((uint)ppiVar4 & 3) == 0);
        iVar9 = ((uint)ppiVar4 >> 10) + 1;
        local_28 = (uint)ppiVar4 >> 2 & 0xff;
        local_24 = (int **)0x0;
        if (local_28 == 0xf9) goto LAB_0806ecb0;
LAB_0806ece4:
        iVar5 = compact_allocate();
        if (((uint)*ppiVar8 & 3) == 0) {
          ppiVar4 = (int **)*ppiVar8;
          do {
            ppiVar2 = (int **)*ppiVar4;
            *ppiVar4 = (int *)(iVar5 + 4);
            ppiVar4 = ppiVar2;
          } while (((uint)ppiVar2 & 3) == 0);
        }
        *ppiVar8 = (int *)(iVar9 * 0x400 + -0x400 + local_28);
        if (local_24 != (int **)0x0) {
          while (((uint)local_24 & 3) != 3) {
            piVar11 = (int *)((uint)local_24 & 0xfffffffc);
            local_24 = (int **)*piVar11;
            if (((uint)local_24 & 3) == 2) {
              do {
                piVar7 = (int *)((uint)local_24 & 0xfffffffc);
                local_24 = (int **)*piVar7;
                *piVar7 = iVar5 + 4 + ((int)piVar11 - (int)ppiVar8 >> 2) * 4;
              } while (((uint)local_24 & 3) == 2);
            }
            *piVar11 = ((int)piVar11 - (int)ppiVar8 >> 2) * 0x400 + 0xf9;
          }
        }
        ppiVar8 = ppiVar8 + iVar9;
      }
      else {
        uVar3 = (uint)ppiVar4 >> 2 & 0xff;
        if (uVar3 == 0xf9) {
          iVar9 = ((uint)ppiVar4 >> 10) + 1;
LAB_0806ecb0:
          local_24 = ppiVar8 + iVar9;
          for (piVar11 = *local_24; ((uint)piVar11 & 3) != 3;
              piVar11 = *(int **)((uint)piVar11 & 0xfffffffc)) {
          }
          iVar9 = ((uint)piVar11 >> 10) + 1;
          local_28 = (uint)piVar11 >> 2 & 0xff;
          goto LAB_0806ece4;
        }
        *ppiVar8 = (int *)(uVar3 + 0x200 + ((uint)ppiVar4 & 0xfffffc00));
        ppiVar8 = ppiVar8 + ((uint)ppiVar4 >> 10) + 1;
      }
    }
  }
  init_compact_allocate();
  ppiVar6 = caml_heap_start;
  if (caml_heap_start != (int **)0x0) {
    do {
      piVar1 = ppiVar6[-2];
      ppiVar8 = ppiVar6;
      while (ppiVar8 < (int **)((int)ppiVar6 + (int)piVar1)) {
        piVar11 = *ppiVar8;
        if (((uint)piVar11 & 0x300) == 0) {
          __dest = (void *)compact_allocate();
          memmove(__dest,ppiVar8,((uint)piVar11 >> 10) * 4 + 4);
          ppiVar8 = ppiVar8 + ((uint)piVar11 >> 10) + 1;
        }
        else {
          ppiVar8 = ppiVar8 + ((uint)piVar11 >> 10) + 1;
        }
      }
      ppiVar6 = (int **)ppiVar6[-1];
    } while (ppiVar6 != (int **)0x0);
    if (caml_heap_start != (int **)0x0) {
      uVar10 = 0;
      uVar3 = 0;
      ppiVar6 = caml_heap_start;
      do {
        piVar1 = ppiVar6[-3];
        if (piVar1 != (int *)0x0) {
          uVar10 = uVar10 + ((uint)piVar1 >> 2);
          uVar3 = uVar3 + ((uint)((int)ppiVar6[-2] - (int)piVar1) >> 2);
        }
        ppiVar6 = (int **)ppiVar6[-1];
      } while (ppiVar6 != (int **)0x0);
      uVar10 = (uVar10 / 100 + 1) * caml_percent_free;
      ppiVar6 = caml_heap_start;
      do {
        ppiVar8 = (int **)ppiVar6[-1];
        if (ppiVar6[-3] == (int *)0x0) {
          if (uVar10 < uVar3 || uVar10 - uVar3 == 0) {
            caml_shrink_heap(ppiVar6);
          }
          else {
            uVar3 = uVar3 + ((uint)ppiVar6[-2] >> 2);
          }
        }
        ppiVar4 = caml_heap_start;
        ppiVar6 = ppiVar8;
      } while (ppiVar8 != (int **)0x0);
      caml_fl_reset();
      for (; ppiVar4 != (int **)0x0; ppiVar4 = (int **)ppiVar4[-1]) {
        piVar1 = ppiVar4[-3];
        if (piVar1 < ppiVar4[-2]) {
          caml_make_free_blocks
                    ((int)ppiVar4 + (int)piVar1,(uint)((int)ppiVar4[-2] - (int)piVar1) >> 2,1);
        }
      }
      goto LAB_0806eec8;
    }
  }
  caml_fl_reset();
LAB_0806eec8:
  caml_stat_compactions = caml_stat_compactions + 1;
  caml_gc_message(0x10,"done.\n",0);
  return;
}



void caml_compact_heap_maybe(void)

{
  float fVar1;
  float local_24;
  ulonglong local_1c;
  
  if (((caml_percent_max < 1000000) && (2 < caml_stat_major_collections)) &&
     (2 < caml_stat_heap_chunks)) {
    local_1c = (ulonglong)caml_fl_cur_size;
    fVar1 = (float)local_1c;
    local_1c = (ulonglong)caml_fl_size_at_phase_change;
    fVar1 = (float)local_1c * -2.0 + fVar1 * 3.0;
    if (fVar1 < 0.0) {
      local_1c = (ulonglong)caml_fl_cur_size;
      fVar1 = (float)local_1c;
    }
    local_1c = (ulonglong)(caml_stat_heap_size >> 2);
    if (fVar1 < (float)local_1c) {
      local_24 = (fVar1 * 100.0) / ((float)local_1c - fVar1);
      if (1000000.0 <= local_24 || local_24 != 1000000.0) {
        local_24 = 1000000.0;
      }
    }
    else {
      local_24 = 1000000.0;
    }
    caml_gc_message(0x200,"FL size at phase change = %lu\n",caml_fl_size_at_phase_change);
    local_1c._0_4_ = (undefined4)(longlong)ROUND(local_24);
    caml_gc_message(0x200,"Estimated overhead = %lu%%\n",(undefined4)local_1c);
    local_1c = (ulonglong)caml_percent_max;
    if ((float)local_1c <= local_24) {
      caml_gc_message(0x200,"Automatic compaction triggered.\n",0);
      caml_finish_major_cycle();
      local_1c = (ulonglong)caml_fl_cur_size;
      fVar1 = (float)local_1c;
      local_1c = (ulonglong)(caml_stat_heap_size >> 2);
      local_1c._0_4_ = (undefined4)(longlong)ROUND((fVar1 * 100.0) / ((float)local_1c - fVar1));
      caml_gc_message(0x200,"Measured overhead: %lu%%\n",(undefined4)local_1c);
      caml_compact_heap();
    }
  }
  return;
}



void caml_final_do_strong_roots(code *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar1 = to_do_hd;
  if (old != 0) {
    iVar2 = 0;
    uVar4 = 0;
    do {
      (*param_1)(*(undefined4 *)(iVar2 + final_table),(undefined4 *)(iVar2 + final_table));
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 0xc;
      puVar1 = to_do_hd;
    } while (uVar4 < old);
  }
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    uVar4 = 0;
    puVar3 = puVar1;
    if (puVar1[1] != 0) {
      do {
        (*param_1)(puVar3[2],puVar1 + uVar4 * 3 + 2);
        (*param_1)(puVar3[3],puVar1 + uVar4 * 3 + 3);
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 3;
      } while (uVar4 <= (uint)puVar1[1] && puVar1[1] != uVar4);
    }
  }
  return;
}



void caml_final_do_weak_roots(code *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (old != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      (*param_1)(*(undefined4 *)(iVar1 + final_table + 4),iVar1 + final_table + 4);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (uVar2 < old);
  }
  return;
}



void caml_final_do_young_roots(code *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (old < young) {
    iVar1 = old * 0xc;
    uVar2 = old;
    do {
      (*param_1)(*(undefined4 *)(iVar1 + final_table),(undefined4 *)(iVar1 + final_table));
      (*param_1)(*(undefined4 *)(iVar1 + final_table + 4),iVar1 + final_table + 4);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (uVar2 < young);
  }
  return;
}



void caml_final_empty_young(void)

{
  old = young;
  return;
}



undefined4 caml_final_release(void)

{
  running_finalisation_function = 0;
  return 1;
}



undefined4 caml_final_register(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint unaff_ESI;
  
  if (((param_2 & 1) != 0) ||
     (unaff_ESI = param_2,
     (*(byte *)((&caml_page_table)[param_2 >> 0x17] + (param_2 >> 0xc & 0x7ff)) & 3) == 0)) {
    caml_invalid_argument("Gc.finalise");
  }
  if (size <= young) {
    if (final_table == 0) {
      final_table = caml_stat_alloc(0x168);
      size = 0x1e;
    }
    else {
      uVar2 = size * 2;
      final_table = caml_stat_resize(final_table,size * 0x18);
      size = uVar2;
    }
  }
  puVar3 = (undefined4 *)(young * 0xc + final_table);
  *puVar3 = param_1;
  puVar1 = (uint *)(unaff_ESI - 4);
  if (*(char *)puVar1 == -7) {
    puVar3[2] = (*puVar1 >> 10) << 2;
    puVar3[1] = unaff_ESI + (*puVar1 >> 10) * -4;
  }
  else {
    puVar3[2] = 0;
    puVar3[1] = param_2;
  }
  young = young + 1;
  return 1;
}



void caml_final_do_calls(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if ((running_finalisation_function == 0) && (to_do_hd != (int *)0x0)) {
    caml_gc_message(0x80,"Calling finalisation functions.\n",0);
    while (piVar1 = to_do_hd, to_do_hd != (int *)0x0) {
      if (to_do_hd[1] == 0) {
        piVar1 = (int *)*to_do_hd;
        free(to_do_hd);
        to_do_hd = piVar1;
        if (piVar1 == (int *)0x0) {
          to_do_tl = 0;
        }
      }
      else {
        iVar3 = to_do_hd[1] + -1;
        to_do_hd[1] = iVar3;
        running_finalisation_function = 1;
        uVar2 = caml_callback_exn(piVar1[iVar3 * 3 + 2],
                                  piVar1[iVar3 * 3 + 3] + piVar1[iVar3 * 3 + 4]);
        running_finalisation_function = 0;
        if ((uVar2 & 3) == 2) {
                    // WARNING: Subroutine does not return
          caml_raise(uVar2 & 0xfffffffc);
        }
      }
    }
    caml_gc_message(0x80,"Done calling finalisation functions.\n",0);
  }
  return;
}



void caml_final_update(void)

{
  uint *puVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint local_38;
  uint local_2c;
  uint local_28;
  
  if (old != 0) {
    iVar8 = 0;
    uVar4 = 0;
    puVar5 = final_table;
    do {
      iVar8 = iVar8 + (uint)((*(uint *)(puVar5[1] + -4) & 0x300) == 0);
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 3;
    } while (uVar4 < old);
    if (iVar8 != 0) {
      puVar5 = (undefined4 *)malloc(iVar8 * 0xc + 0x14);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)caml_fatal_error("out of memory");
      }
      *puVar5 = 0;
      puVar5[1] = iVar8;
      puVar3 = puVar5;
      if (to_do_tl != (undefined4 *)0x0) {
        *to_do_tl = puVar5;
        puVar3 = to_do_hd;
      }
      to_do_hd = puVar3;
      puVar3 = final_table;
      to_do_tl = puVar5;
      if (old == 0) {
        old = 0;
        young = 0;
        puVar5[1] = 0;
      }
      else {
        local_28 = 0;
        local_38 = 0;
        local_2c = 0;
        puVar7 = final_table;
LAB_0806f4f6:
        do {
          puVar1 = (uint *)puVar7[1] + -1;
          if ((*puVar1 & 0x300) == 0) {
            if (*(char *)puVar1 == -6) {
              uVar4 = *(uint *)puVar7[1];
              if ((uVar4 & 1) == 0) {
                uVar6 = uVar4 >> 0xc & 0x7ff;
                if (((((*(byte *)((&caml_page_table)[uVar4 >> 0x17] + uVar6) & 7) != 0) &&
                     (cVar2 = *(char *)(uVar4 - 4), cVar2 != -6)) && (cVar2 != -10)) &&
                   ((cVar2 != -3 &&
                    (puVar7[1] = uVar4,
                    (*(byte *)((&caml_page_table)[uVar4 >> 0x17] + uVar6) & 1) != 0))))
                goto LAB_0806f4f6;
              }
              else {
                puVar7[1] = uVar4;
              }
            }
            puVar5[local_28 * 3 + 2] = *puVar7;
            puVar5[local_28 * 3 + 3] = puVar7[1];
            puVar5[local_28 * 3 + 4] = puVar7[2];
            local_28 = local_28 + 1;
          }
          else {
            puVar3[local_38 * 3] = *puVar7;
            puVar3[local_38 * 3 + 1] = puVar7[1];
            puVar3[local_38 * 3 + 2] = puVar7[2];
            local_38 = local_38 + 1;
          }
          local_2c = local_2c + 1;
          puVar7 = puVar7 + 3;
        } while (local_2c < old);
        old = local_38;
        young = local_38;
        puVar5[1] = local_28;
        if (local_28 != 0) {
          uVar4 = 0;
          do {
            caml_darken(to_do_tl[uVar4 * 3 + 3],0);
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_28);
        }
      }
    }
  }
  return;
}



char ** caml_final_custom_operations(char *param_1)

{
  char *pcVar1;
  char **ppcVar2;
  int *piVar3;
  
  if (custom_ops_final_table == (int *)0x0) {
LAB_0806f67f:
    ppcVar2 = (char **)caml_stat_alloc(0x1c);
    *ppcVar2 = "_final";
    ppcVar2[1] = param_1;
    ppcVar2[2] = (char *)0x0;
    ppcVar2[3] = (char *)0x0;
    ppcVar2[4] = (char *)0x0;
    ppcVar2[5] = (char *)0x0;
    piVar3 = (int *)caml_stat_alloc(8);
    *piVar3 = (int)ppcVar2;
    piVar3[1] = (int)custom_ops_final_table;
    custom_ops_final_table = piVar3;
  }
  else {
    ppcVar2 = (char **)*custom_ops_final_table;
    pcVar1 = ppcVar2[1];
    piVar3 = custom_ops_final_table;
    while (pcVar1 != param_1) {
      piVar3 = (int *)piVar3[1];
      if (piVar3 == (int *)0x0) goto LAB_0806f67f;
      ppcVar2 = (char **)*piVar3;
      pcVar1 = ppcVar2[1];
    }
  }
  return ppcVar2;
}



void caml_register_custom_operations(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)caml_stat_alloc(8);
  *puVar1 = param_1;
  puVar1[1] = custom_ops_table;
  custom_ops_table = puVar1;
  return;
}



void caml_init_custom_operations(void)

{
  caml_register_custom_operations(caml_int32_ops);
  caml_register_custom_operations(caml_nativeint_ops);
  caml_register_custom_operations(caml_int64_ops);
  return;
}



char ** caml_find_custom_operations(char *param_1)

{
  char **ppcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = custom_ops_table;
  if (custom_ops_table != (undefined4 *)0x0) {
    do {
      ppcVar1 = (char **)*puVar3;
      iVar2 = strcmp(*ppcVar1,param_1);
      if (iVar2 == 0) {
        return ppcVar1;
      }
      puVar3 = (undefined4 *)puVar3[1];
    } while (puVar3 != (undefined4 *)0x0);
  }
  return (char **)0x0;
}



void caml_alloc_custom(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = (param_2 + 3U >> 2) + 1;
  if ((*(int *)(param_1 + 4) == 0) && (uVar1 < 0x101)) {
    piVar2 = (int *)caml_alloc_small(uVar1,0xff);
    *piVar2 = param_1;
  }
  else {
    piVar2 = (int *)caml_alloc_shr(uVar1,0xff);
    *piVar2 = param_1;
    caml_adjust_gc_speed(param_3,param_4);
    caml_check_urgent_gc(piVar2);
  }
  return;
}



undefined4 caml_executable_name(char *param_1,size_t param_2)

{
  ssize_t sVar1;
  int iVar2;
  stat64 local_6c;
  
  sVar1 = readlink("/proc/self/exe",param_1,param_2);
  if ((sVar1 != -1) && (sVar1 < (int)param_2)) {
    param_1[sVar1] = '\0';
    iVar2 = __xstat64(3,param_1,&local_6c);
    if ((iVar2 == 0) && ((local_6c.st_mode & 0xf000) == 0x8000)) {
      return 0;
    }
  }
  return 0xffffffff;
}



char * caml_decompose_path(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar5 = (char *)0x0;
  if (param_2 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = (char *)caml_stat_alloc(~uVar3);
    strcpy(pcVar5,param_2);
    pcVar4 = pcVar5;
    while( true ) {
      cVar1 = *pcVar4;
      pcVar2 = pcVar4;
      while ((cVar1 != '\0' && (cVar1 != ':'))) {
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar2;
      }
      caml_ext_table_add(param_1,pcVar4);
      if (*pcVar2 == '\0') break;
      *pcVar2 = '\0';
      pcVar4 = pcVar2 + 1;
    }
  }
  return pcVar5;
}



undefined4 caml_read_directory(char *param_1,undefined4 param_2)

{
  char cVar1;
  DIR *__dirp;
  undefined4 uVar2;
  dirent64 *pdVar3;
  char *pcVar4;
  uint uVar5;
  byte bVar6;
  
  bVar6 = 0;
  __dirp = opendir(param_1);
  uVar2 = 0xffffffff;
  if (__dirp != (DIR *)0x0) {
    while (pdVar3 = readdir64(__dirp), pdVar3 != (dirent64 *)0x0) {
      cVar1 = pdVar3->d_name[0];
      if (((cVar1 != '.') || (pdVar3->d_name[1] != '\0')) &&
         ((cVar1 != '.' || ((pdVar3->d_name[1] != '.' || (pdVar3->d_name[2] != '\0')))))) {
        uVar5 = 0xffffffff;
        pcVar4 = pdVar3->d_name;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
        } while (cVar1 != '\0');
        pcVar4 = (char *)caml_stat_alloc(~uVar5);
        strcpy(pcVar4,pdVar3->d_name);
        caml_ext_table_add(param_2,pcVar4);
      }
    }
    closedir(__dirp);
    uVar2 = 0;
  }
  return uVar2;
}



void caml_dlerror(void)

{
  dlerror();
  return;
}



void caml_dlsym(undefined4 param_1,undefined4 param_2)

{
  dlsym(param_1,param_2);
  return;
}



void caml_globalsym(undefined4 param_1)

{
  caml_dlsym(0,param_1);
  return;
}



void caml_dlclose(undefined4 param_1)

{
  dlclose(param_1);
  return;
}



void caml_dlopen(undefined4 param_1,undefined4 param_2,int param_3)

{
  dlopen(param_1,(-(uint)(param_3 == 0) & 0xffffff00) + 0x1102);
  return;
}



char * caml_search_in_path(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  int local_80;
  stat64 local_7c;
  
  bVar7 = 0;
  cVar1 = *param_2;
  pcVar3 = param_2;
  while (cVar1 != '\0') {
    if (cVar1 == '/') goto LAB_0806fb18;
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  }
  if (0 < *param_1) {
    local_80 = 0;
    do {
      uVar5 = 0xffffffff;
      pcVar3 = *(char **)(param_1[2] + local_80 * 4);
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      uVar4 = 0xffffffff;
      pcVar3 = param_2;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      pcVar3 = (char *)caml_stat_alloc(~uVar5 + ~uVar4);
      strcpy(pcVar3,*(char **)(param_1[2] + local_80 * 4));
      if (*pcVar3 != '\0') {
        uVar5 = 0xffffffff;
        pcVar6 = pcVar3;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
        } while (cVar1 != '\0');
        *(undefined2 *)(pcVar3 + (~uVar5 - 1)) = 0x2f;
      }
      strcat(pcVar3,param_2);
      iVar2 = __xstat64(3,pcVar3,&local_7c);
      if ((iVar2 == 0) && ((local_7c.st_mode & 0xf000) == 0x8000)) {
        return pcVar3;
      }
      caml_stat_free(pcVar3);
      local_80 = local_80 + 1;
    } while (*param_1 != local_80 && local_80 <= *param_1);
  }
LAB_0806fb18:
  uVar5 = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar3 = (char *)caml_stat_alloc(~uVar5);
  strcpy(pcVar3,param_2);
  return pcVar3;
}



undefined4 caml_search_dll_in_path(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *__dest;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  uVar3 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  __dest = (char *)caml_stat_alloc(~uVar3 + 3);
  strcpy(__dest,param_2);
  uVar3 = 0xffffffff;
  pcVar4 = __dest;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(__dest + (~uVar3 - 1)) = 0x6f732e;
  uVar2 = caml_search_in_path(param_1,__dest);
  caml_stat_free(__dest);
  return uVar2;
}



undefined4 caml_search_exe_in_path(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined local_28 [24];
  
  caml_ext_table_init(local_28,8);
  pcVar1 = getenv("PATH");
  uVar2 = caml_decompose_path(local_28,pcVar1);
  uVar3 = caml_search_in_path(local_28,param_1);
  caml_stat_free(uVar2);
  caml_ext_table_free(local_28,0);
  return uVar3;
}



int caml_backtrace_status(void)

{
  return (-(uint)(caml_backtrace_active == 0) & 0xfffffffe) + 3;
}



void __regparm3 extract_location_info(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    *param_2 = 0;
    param_2[1] = 1;
  }
  else {
    puVar3 = (uint *)(param_1 + 0xb + (uint)*(ushort *)(param_1 + 6) * 2 & 0xfffffffc);
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    *param_2 = 1;
    param_2[1] = (uint)((uVar1 & 3) != 0);
    param_2[2] = (uVar1 & 0x3fffffc) + (int)puVar3;
    param_2[3] = uVar2 >> 0xc;
    param_2[4] = uVar2 >> 4 & 0xff;
    param_2[5] = uVar1 >> 0x1a | (uVar2 & 0xf) << 6;
  }
  return;
}



int * caml_get_exception_backtrace(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  int *local_3c;
  int **local_38;
  int *local_34;
  int local_2c;
  int *local_28;
  int local_24;
  undefined4 local_20 [4];
  
  uVar1 = caml_local_roots;
  local_20[0] = 0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_4c = caml_local_roots;
  caml_local_roots = &local_4c;
  local_44 = 1;
  local_48 = 4;
  local_40 = local_20;
  local_3c = &local_24;
  local_38 = &local_28;
  local_34 = &local_2c;
  local_24 = caml_alloc(caml_backtrace_pos,0);
  if (0 < caml_backtrace_pos) {
    iVar3 = 0;
    do {
      extract_location_info();
      if (local_64 == 0) {
        local_28 = (int *)caml_alloc_small(1,1);
        *local_28 = (-(uint)(local_60 == 0) & 0xfffffffe) + 3;
      }
      else {
        local_2c = caml_copy_string(local_5c);
        local_28 = (int *)caml_alloc_small(5,0);
        *local_28 = (-(uint)(local_60 == 0) & 0xfffffffe) + 3;
        local_28[1] = local_2c;
        local_28[2] = local_58 * 2 + 1;
        local_28[3] = local_54 * 2 + 1;
        local_28[4] = local_50 * 2 + 1;
      }
      caml_modify(iVar3 * 4 + local_24,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < caml_backtrace_pos);
  }
  piVar2 = (int *)caml_alloc_small(1,0);
  *piVar2 = local_24;
  caml_local_roots = (undefined4 *)uVar1;
  return piVar2;
}



void caml_print_exception_backtrace(void)

{
  char *pcVar1;
  int iVar2;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (0 < caml_backtrace_pos) {
    iVar2 = 0;
    do {
      extract_location_info();
      if (local_34 != 0) {
        pcVar1 = "Raised at";
        if ((iVar2 != 0) && (pcVar1 = "Called from", local_30 != 0)) {
          pcVar1 = "Re-raised at";
        }
        fprintf(stderr,"%s file \"%s\", line %d, characters %d-%d\n",pcVar1,local_2c,local_28,
                local_24,local_20);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < caml_backtrace_pos);
  }
  return;
}



void caml_stash_backtrace(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != caml_backtrace_last_exn) {
    caml_backtrace_pos = 0;
    caml_backtrace_last_exn = param_1;
  }
  if ((caml_backtrace_buffer != (void *)0x0) ||
     (caml_backtrace_buffer = malloc(0x1000), caml_backtrace_buffer != (void *)0x0)) {
    if (caml_frame_descriptors == 0) {
      caml_init_frame_descriptors();
    }
    do {
      uVar3 = param_2 >> 3 & caml_frame_descriptors_mask;
      puVar1 = *(uint **)(caml_frame_descriptors + uVar3 * 4);
      if (puVar1 == (uint *)0x0) {
        return;
      }
      uVar2 = *puVar1;
      while (uVar2 != param_2) {
        uVar3 = uVar3 + 1 & caml_frame_descriptors_mask;
        puVar1 = *(uint **)(caml_frame_descriptors + uVar3 * 4);
        if (puVar1 == (uint *)0x0) {
          return;
        }
        uVar2 = *puVar1;
      }
      if (*(short *)(puVar1 + 1) == -1) {
        uVar3 = *(uint *)(param_3 + 8);
        param_2 = *(uint *)(param_3 + 0xc);
        if (uVar3 == 0) {
          return;
        }
      }
      else {
        if (0x3ff < caml_backtrace_pos) {
          return;
        }
        *(uint **)((int)caml_backtrace_buffer + caml_backtrace_pos * 4) = puVar1;
        caml_backtrace_pos = caml_backtrace_pos + 1;
        uVar3 = param_3 + (*(ushort *)(puVar1 + 1) & 0xfffc);
        param_2 = *(uint *)(uVar3 - 4);
      }
      param_3 = uVar3;
    } while (uVar3 <= param_4);
  }
  return;
}



undefined4 caml_record_backtrace(int param_1)

{
  param_1 = param_1 >> 1;
  if (param_1 != caml_backtrace_active) {
    caml_backtrace_pos = 0;
    caml_backtrace_active = param_1;
    if (param_1 == 0) {
      caml_remove_global_root(&caml_backtrace_last_exn);
    }
    else {
      caml_register_global_root(&caml_backtrace_last_exn);
    }
  }
  return 1;
}



void caml_debugger_init(void)

{
  return;
}



void caml_debugger(void)

{
  return;
}



void caml_debugger_cleanup_fork(void)

{
  return;
}



undefined8 __regparm3 caml_call_gc(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  undefined *puStack_1c;
  
  caml_bottom_of_stack = &stack0x00000004;
  caml_gc_regs = &puStack_1c;
  caml_last_return_address = unaff_retaddr;
  puStack_1c = caml_bottom_of_stack;
  caml_garbage_collection();
  return CONCAT44(param_2,puStack_1c);
}



undefined8 __regparm3 FUN_0807003d(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_1c;
  
  caml_gc_regs = &uStack_1c;
  caml_garbage_collection();
  return CONCAT44(param_2,uStack_1c);
}



void caml_alloc1(void)

{
  undefined4 unaff_retaddr;
  
  while (caml_young_ptr = caml_young_ptr - 8, caml_young_ptr < caml_young_limit) {
    caml_bottom_of_stack = &stack0x00000004;
    caml_last_return_address = unaff_retaddr;
    FUN_0807003d();
  }
  return;
}



void caml_alloc2(void)

{
  undefined4 unaff_retaddr;
  
  while (caml_young_ptr = caml_young_ptr - 0xc, caml_young_ptr < caml_young_limit) {
    caml_bottom_of_stack = &stack0x00000004;
    caml_last_return_address = unaff_retaddr;
    FUN_0807003d();
  }
  return;
}



void caml_alloc3(void)

{
  undefined4 unaff_retaddr;
  
  while (caml_young_ptr = caml_young_ptr - 0x10, caml_young_ptr < caml_young_limit) {
    caml_bottom_of_stack = &stack0x00000004;
    caml_last_return_address = unaff_retaddr;
    FUN_0807003d();
  }
  return;
}



void __regparm3 caml_allocN(int param_1)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  for (; uVar1 = -(param_1 - caml_young_ptr), uVar1 < caml_young_limit; param_1 = -param_1) {
    param_1 = uVar1 - caml_young_ptr;
    caml_young_ptr = caml_young_ptr + param_1;
    caml_bottom_of_stack = &stack0x00000004;
    caml_last_return_address = unaff_retaddr;
    FUN_0807003d();
  }
  caml_young_ptr = uVar1;
  return;
}



void __regparm3 caml_c_call(code *UNRECOVERED_JUMPTABLE)

{
  undefined4 unaff_retaddr;
  
  caml_bottom_of_stack = &stack0x00000004;
  caml_last_return_address = unaff_retaddr;
                    // WARNING: Could not recover jumptable at 0x0807014b. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void caml_start_program(void)

{
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = caml_gc_regs;
  uStack_18 = caml_last_return_address;
  uStack_1c = caml_bottom_of_stack;
  puStack_20 = &DAT_0807019e;
  uStack_24 = caml_exception_pointer;
  caml_exception_pointer = &uStack_24;
  caml_program();
  caml_exception_pointer = (undefined4 *)uStack_24;
  caml_bottom_of_stack = uStack_1c;
  caml_last_return_address = uStack_18;
  caml_gc_regs = uStack_14;
  return;
}



undefined4 __regparm3 caml_raise_exn(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = caml_exception_pointer;
  if ((caml_backtrace_active & 1) == 0) {
    caml_exception_pointer = (undefined4 *)*caml_exception_pointer;
    return param_1;
  }
  caml_stash_backtrace(param_1);
  caml_exception_pointer = (undefined4 *)*puVar1;
  return param_1;
}



undefined4 caml_raise_exception(undefined4 param_1)

{
  if ((caml_backtrace_active & 1) == 0) {
    caml_exception_pointer = (undefined4 *)*caml_exception_pointer;
    return param_1;
  }
  caml_stash_backtrace(param_1,caml_last_return_address,caml_bottom_of_stack,caml_exception_pointer)
  ;
  caml_exception_pointer = (undefined4 *)*caml_exception_pointer;
  return param_1;
}



void caml_callback_exn(code **param_1)

{
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = caml_gc_regs;
  uStack_18 = caml_last_return_address;
  uStack_1c = caml_bottom_of_stack;
  puStack_20 = &DAT_0807019e;
  uStack_24 = caml_exception_pointer;
  caml_exception_pointer = &uStack_24;
  (**param_1)();
  caml_exception_pointer = (undefined4 *)uStack_24;
  caml_bottom_of_stack = uStack_1c;
  caml_last_return_address = uStack_18;
  caml_gc_regs = uStack_14;
  return;
}



void caml_callback2_exn(void)

{
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = caml_gc_regs;
  uStack_18 = caml_last_return_address;
  uStack_1c = caml_bottom_of_stack;
  puStack_20 = &DAT_0807019e;
  uStack_24 = caml_exception_pointer;
  caml_exception_pointer = &uStack_24;
  caml_apply2();
  caml_exception_pointer = (undefined4 *)uStack_24;
  caml_bottom_of_stack = uStack_1c;
  caml_last_return_address = uStack_18;
  caml_gc_regs = uStack_14;
  return;
}



void caml_callback3_exn(void)

{
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = caml_gc_regs;
  uStack_18 = caml_last_return_address;
  uStack_1c = caml_bottom_of_stack;
  puStack_20 = &DAT_0807019e;
  uStack_24 = caml_exception_pointer;
  caml_exception_pointer = &uStack_24;
  caml_apply3();
  caml_exception_pointer = (undefined4 *)uStack_24;
  caml_bottom_of_stack = uStack_1c;
  caml_last_return_address = uStack_18;
  caml_gc_regs = uStack_14;
  return;
}



undefined8 caml_ml_array_bound_error(uint param_1,uint param_2,uint param_3,uint param_4)

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
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined4 unaff_retaddr;
  byte bStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  ffree(in_ST0);
  ffree(in_ST1);
  ffree(in_ST2);
  ffree(in_ST3);
  ffree(in_ST4);
  ffree(in_ST5);
  ffree(in_ST6);
  ffree(in_ST7);
  caml_bottom_of_stack = &param_1;
  caml_last_return_address = unaff_retaddr;
  caml_array_bound_error();
  uStack_14 = param_3;
  uStack_10 = param_4;
  uStack_18 = 0;
  if ((int)param_2 < 0) {
    bVar9 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar9);
    uStack_18 = 0xffffffff;
  }
  if ((int)param_4 < 0) {
    uStack_14 = -param_3;
    uStack_18 = ~uStack_18;
    uStack_10 = -(param_4 + (param_3 != 0));
  }
  if (uStack_10 == 0) {
    if (param_2 < uStack_14) {
      uVar8 = 0;
      iVar5 = (int)(CONCAT44(param_2,param_1) / (ulonglong)uStack_14);
    }
    else {
      if (uStack_14 == 0) {
        uStack_14 = (uint)(1 / 0);
      }
      uVar8 = param_2 / uStack_14;
      iVar5 = (int)(((ulonglong)param_2 % (ulonglong)uStack_14 << 0x20 | (ulonglong)param_1) /
                   (ulonglong)uStack_14);
    }
    goto LAB_08070300;
  }
  if (uStack_10 <= param_2) {
    uVar8 = 0x1f;
    if (uStack_10 != 0) {
      for (; uStack_10 >> uVar8 == 0; uVar8 = uVar8 - 1) {
      }
    }
    if ((uVar8 ^ 0x1f) != 0) {
      bStack_1c = (byte)(uVar8 ^ 0x1f);
      bVar6 = 0x20 - bStack_1c;
      uVar1 = (ulonglong)(uStack_14 >> (bVar6 & 0x1f) | uStack_10 << (bStack_1c & 0x1f));
      uVar2 = CONCAT44(param_2 >> (bVar6 & 0x1f),
                       param_2 << (bStack_1c & 0x1f) | param_1 >> (bVar6 & 0x1f));
      uVar3 = uVar2 / uVar1;
      iVar5 = (int)uVar3;
      uVar8 = (uint)(uVar2 % uVar1);
      lVar4 = (uVar3 & 0xffffffff) * (ulonglong)(uStack_14 << (bStack_1c & 0x1f));
      uVar7 = (uint)((ulonglong)lVar4 >> 0x20);
      if ((uVar8 < uVar7) || ((param_1 << (bStack_1c & 0x1f) < (uint)lVar4 && (uVar8 == uVar7)))) {
        iVar5 = iVar5 + -1;
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
      }
      goto LAB_08070300;
    }
    if ((uStack_14 <= param_1) || (uStack_10 < param_2)) {
      uVar8 = 0;
      iVar5 = 1;
      goto LAB_08070300;
    }
  }
  uVar8 = 0;
  iVar5 = 0;
LAB_08070300:
  if (uStack_18 != 0) {
    bVar9 = iVar5 != 0;
    iVar5 = -iVar5;
    uVar8 = -(uVar8 + bVar9);
  }
  return CONCAT44(uVar8,iVar5);
}



undefined8 __divdi3(uint param_1,uint param_2,uint param_3,uint param_4)

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
  byte bStack_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_14 = param_3;
  local_10 = param_4;
  local_18 = 0;
  if ((int)param_2 < 0) {
    bVar9 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar9);
    local_18 = 0xffffffff;
  }
  if ((int)param_4 < 0) {
    local_14 = -param_3;
    local_18 = ~local_18;
    local_10 = -(param_4 + (param_3 != 0));
  }
  if (local_10 == 0) {
    if (param_2 < local_14) {
      uVar8 = 0;
      iVar5 = (int)(CONCAT44(param_2,param_1) / (ulonglong)local_14);
    }
    else {
      if (local_14 == 0) {
        local_14 = (uint)(1 / 0);
      }
      uVar8 = param_2 / local_14;
      iVar5 = (int)(((ulonglong)param_2 % (ulonglong)local_14 << 0x20 | (ulonglong)param_1) /
                   (ulonglong)local_14);
    }
    goto LAB_08070300;
  }
  if (local_10 <= param_2) {
    uVar8 = 0x1f;
    if (local_10 != 0) {
      for (; local_10 >> uVar8 == 0; uVar8 = uVar8 - 1) {
      }
    }
    if ((uVar8 ^ 0x1f) != 0) {
      bStack_1c = (byte)(uVar8 ^ 0x1f);
      bVar6 = 0x20 - bStack_1c;
      uVar1 = (ulonglong)(local_14 >> (bVar6 & 0x1f) | local_10 << (bStack_1c & 0x1f));
      uVar2 = CONCAT44(param_2 >> (bVar6 & 0x1f),
                       param_2 << (bStack_1c & 0x1f) | param_1 >> (bVar6 & 0x1f));
      uVar3 = uVar2 / uVar1;
      iVar5 = (int)uVar3;
      uVar8 = (uint)(uVar2 % uVar1);
      lVar4 = (uVar3 & 0xffffffff) * (ulonglong)(local_14 << (bStack_1c & 0x1f));
      uVar7 = (uint)((ulonglong)lVar4 >> 0x20);
      if ((uVar8 < uVar7) || ((param_1 << (bStack_1c & 0x1f) < (uint)lVar4 && (uVar8 == uVar7)))) {
        iVar5 = iVar5 + -1;
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
      }
      goto LAB_08070300;
    }
    if ((local_14 <= param_1) || (local_10 < param_2)) {
      uVar8 = 0;
      iVar5 = 1;
      goto LAB_08070300;
    }
  }
  uVar8 = 0;
  iVar5 = 0;
LAB_08070300:
  if (local_18 != 0) {
    bVar9 = iVar5 != 0;
    iVar5 = -iVar5;
    uVar8 = -(uVar8 + bVar9);
  }
  return CONCAT44(uVar8,iVar5);
}



undefined8 __moddi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int local_30;
  byte local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_10;
  
  local_24 = param_3;
  local_20 = param_4;
  local_30 = 0;
  if ((int)param_2 < 0) {
    bVar7 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar7);
    local_30 = -1;
  }
  if ((int)param_4 < 0) {
    local_24 = -param_3;
    local_20 = -(param_4 + (param_3 != 0));
  }
  uVar4 = local_24;
  local_28 = local_24;
  if (local_20 == 0) {
    if (param_2 < local_24) {
      param_1 = (uint)(CONCAT44(param_2,param_1) % (ulonglong)local_24);
    }
    else {
      if (local_24 == 0) {
        local_28 = (uint)(1 / 0);
      }
      param_1 = (uint)(((ulonglong)param_2 % (ulonglong)local_28 << 0x20 | (ulonglong)param_1) %
                      (ulonglong)local_28);
    }
    local_10 = 0;
  }
  else {
    local_10 = param_2;
    if (local_20 <= param_2) {
      uVar3 = 0x1f;
      if (local_20 != 0) {
        for (; local_20 >> uVar3 == 0; uVar3 = uVar3 - 1) {
        }
      }
      if ((uVar3 ^ 0x1f) == 0) {
        if ((local_24 <= param_1) || (local_20 < param_2)) {
          bVar7 = param_1 < local_24;
          param_1 = param_1 - local_24;
          local_10 = (param_2 - local_20) - (uint)bVar7;
        }
      }
      else {
        local_24._0_1_ = (byte)(uVar3 ^ 0x1f);
        local_2c = 0x20 - (byte)local_24;
        uVar3 = uVar4 >> (local_2c & 0x1f) | local_20 << ((byte)local_24 & 0x1f);
        uVar4 = uVar4 << ((byte)local_24 & 0x1f);
        uVar1 = CONCAT44(param_2 >> (local_2c & 0x1f),
                         param_1 >> (local_2c & 0x1f) | param_2 << ((byte)local_24 & 0x1f));
        uVar5 = (uint)(uVar1 % (ulonglong)uVar3);
        param_1 = param_1 << ((byte)local_24 & 0x1f);
        lVar2 = (uVar1 / uVar3 & 0xffffffff) * (ulonglong)uVar4;
        uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
        if ((uVar5 < uVar6) || ((param_1 < (uint)lVar2 && (uVar5 == uVar6)))) {
          lVar2 = lVar2 - CONCAT44(uVar3,uVar4);
        }
        local_10 = (uVar5 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(param_1 < (uint)lVar2);
        param_1 = local_10 << (local_2c & 0x1f) | param_1 - (uint)lVar2 >> ((byte)local_24 & 0x1f);
        local_10 = local_10 >> ((byte)local_24 & 0x1f);
      }
    }
  }
  if (local_30 == 0) {
    return CONCAT44(local_10,param_1);
  }
  return CONCAT44(-(local_10 + (param_1 != 0)),-param_1);
}



ulonglong __udivdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bStack_10;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      return CONCAT44(param_2,param_1) / (ulonglong)param_3 & 0xffffffff;
    }
    if (param_3 == 0) {
      param_3 = (uint)(1 / 0);
    }
    return CONCAT44(param_2 / param_3,
                    (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                         (ulonglong)param_3));
  }
  if (param_4 <= param_2) {
    uVar6 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    if ((uVar6 ^ 0x1f) != 0) {
      bStack_10 = (byte)(uVar6 ^ 0x1f);
      bVar5 = 0x20 - bStack_10;
      uVar1 = (ulonglong)(param_3 >> (bVar5 & 0x1f) | param_4 << (bStack_10 & 0x1f));
      uVar2 = CONCAT44(param_2 >> (bVar5 & 0x1f),
                       param_2 << (bStack_10 & 0x1f) | param_1 >> (bVar5 & 0x1f));
      uVar3 = uVar2 / uVar1;
      uVar6 = (uint)uVar3;
      uVar7 = (uint)(uVar2 % uVar1);
      lVar4 = (uVar3 & 0xffffffff) * (ulonglong)(param_3 << (bStack_10 & 0x1f));
      uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
      if ((uVar7 < uVar8) || ((param_1 << (bStack_10 & 0x1f) < (uint)lVar4 && (uVar7 == uVar8)))) {
        return (ulonglong)(uVar6 - 1);
      }
      goto LAB_08070664;
    }
    if ((param_3 <= param_1) || (param_4 < param_2)) {
      uVar6 = 1;
      goto LAB_08070664;
    }
  }
  uVar6 = 0;
LAB_08070664:
  return (ulonglong)uVar6;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x0807075e)
// WARNING: Removing unreachable block (ram,0x08070760)

void __libc_csu_init(void)

{
  EVP_PKEY_CTX *in_stack_ffffffd4;
  
  _init(in_stack_ffffffd4);
  return;
}



void __do_global_ctors_aux(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  if (__CTOR_LIST__ != (code *)0xffffffff) {
    ppcVar2 = &__CTOR_LIST__;
    pcVar1 = __CTOR_LIST__;
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
  __do_global_dtors_aux();
  return;
}


