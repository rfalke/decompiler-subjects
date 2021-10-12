typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
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

typedef long __off64_t;

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
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef enum __rusage_who {
    RUSAGE_CHILDREN=1,
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

typedef ulong __rlim64_t;

typedef __rlim64_t rlim64_t;

struct rlimit64 {
    rlim64_t rlim_cur;
    rlim64_t rlim_max;
};

typedef enum __rlimit_resource {
    RLIMIT_AS=9,
    RLIMIT_CORE=4,
    RLIMIT_CPU=0,
    RLIMIT_DATA=2,
    RLIMIT_FSIZE=1,
    RLIMIT_NOFILE=7,
    RLIMIT_STACK=3,
    __RLIMIT_LOCKS=10,
    __RLIMIT_MEMLOCK=8,
    __RLIMIT_MSGQUEUE=12,
    __RLIMIT_NICE=13,
    __RLIMIT_NLIMITS=15,
    __RLIMIT_NPROC=6,
    __RLIMIT_OFILE=8,
    __RLIMIT_RSS=5,
    __RLIMIT_RTPRIO=14,
    __RLIMIT_SIGPENDING=11,
    __RLIM_NLIMITS=16
} __rlimit_resource;

typedef enum __rlimit_resource __rlimit_resource_t;

typedef struct stat64 stat64, *Pstat64;

typedef ulong __dev_t;

typedef ulong __ino64_t;

typedef ulong __nlink_t;

typedef uint __mode_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef long __blkcnt64_t;

typedef struct timespec timespec, *Ptimespec;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat64 {
    __dev_t st_dev;
    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long __unused[3];
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

typedef long __ssize_t;

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

typedef union sigval sigval, *Psigval;

typedef union sigval sigval_t;

union sigval {
    int sival_int;
    void * sival_ptr;
};

typedef struct siginfo siginfo, *Psiginfo;

typedef union _union_1438 _union_1438, *P_union_1438;

typedef struct _struct_1439 _struct_1439, *P_struct_1439;

typedef struct _struct_1440 _struct_1440, *P_struct_1440;

typedef struct _struct_1441 _struct_1441, *P_struct_1441;

typedef struct _struct_1442 _struct_1442, *P_struct_1442;

typedef struct _struct_1443 _struct_1443, *P_struct_1443;

typedef struct _struct_1444 _struct_1444, *P_struct_1444;

struct _struct_1444 {
    long si_band;
    int si_fd;
};

struct _struct_1443 {
    void * si_addr;
};

struct _struct_1442 {
    __pid_t si_pid;
    __uid_t si_uid;
    int si_status;
    __clock_t si_utime;
    __clock_t si_stime;
};

struct _struct_1441 {
    __pid_t si_pid;
    __uid_t si_uid;
    sigval_t si_sigval;
};

struct _struct_1440 {
    int si_tid;
    int si_overrun;
    sigval_t si_sigval;
};

struct _struct_1439 {
    __pid_t si_pid;
    __uid_t si_uid;
};

union _union_1438 {
    int _pad[124];
    struct _struct_1439 _kill;
    struct _struct_1440 _timer;
    struct _struct_1441 _rt;
    struct _struct_1442 _sigchld;
    struct _struct_1443 _sigfault;
    struct _struct_1444 _sigpoll;
};

struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    union _union_1438 _sifields;
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
    ITIMER_PROF=2,
    ITIMER_REAL=0,
    ITIMER_VIRTUAL=1
} __itimer_which;

typedef enum __itimer_which __itimer_which_t;

typedef struct sigaction sigaction, *Psigaction;

typedef union _union_1454 _union_1454, *P_union_1454;

typedef struct __sigset_t __sigset_t, *P__sigset_t;

typedef void (* __sighandler_t)(int);

struct __sigset_t {
    ulong __val[128];
};

union _union_1454 {
    __sighandler_t sa_handler;
    void (* sa_sigaction)(int, siginfo_t *, void *);
};

struct sigaction {
    union _union_1454 __sigaction_handler;
    struct __sigset_t sa_mask;
    int sa_flags;
    void (* sa_restorer)(void);
};

typedef long __fd_mask;

typedef struct __sigset_t sigset_t;

typedef struct fd_set fd_set, *Pfd_set;

struct fd_set {
    __fd_mask fds_bits[128];
};

typedef enum Elf64_DynTag {
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRENT=1879040003,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELSZ=1610612752,
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_FINI=13,
    DT_FINI_ARRAY=26,
    DT_FINI_ARRAYSZ=28,
    DT_FLAGS=30,
    DT_FLAGS_1=1879048187,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_HASH=1879047925,
    DT_GNU_LIBLIST=1879047929,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_GNU_PRELINKED=1879047669,
    DT_HASH=4,
    DT_INIT=12,
    DT_INIT_ARRAY=25,
    DT_INIT_ARRAYSZ=27,
    DT_JMPREL=23,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_MOVETAB=1879047934,
    DT_NEEDED=1,
    DT_NULL=0,
    DT_PLTGOT=3,
    DT_PLTPAD=1879047933,
    DT_PLTPADSZ=1879047673,
    DT_PLTREL=20,
    DT_PLTRELSZ=2,
    DT_POSFLAG_1=1879047677,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_RELRSZ=35,
    DT_RELSZ=18,
    DT_RPATH=15,
    DT_RUNPATH=29,
    DT_SONAME=14,
    DT_STRSZ=10,
    DT_STRTAB=5,
    DT_SYMBOLIC=16,
    DT_SYMENT=11,
    DT_SYMINENT=1879047679,
    DT_SYMINFO=1879047935,
    DT_SYMINSZ=1879047678,
    DT_SYMTAB=6,
    DT_TEXTREL=22,
    DT_TLSDESC_GOT=1879047927,
    DT_TLSDESC_PLT=1879047926,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_VERSYM=1879048176
} Elf64_DynTag;

typedef enum Elf_ProgramHeaderType {
    PT_DYNAMIC=2,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_GNU_STACK=1685382481,
    PT_INTERP=3,
    PT_LOAD=1,
    PT_NOTE=4,
    PT_NULL=0,
    PT_PHDR=6,
    PT_SHLIB=5,
    PT_TLS=7
} Elf_ProgramHeaderType;

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
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
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
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
  int iVar1;
  
  call_gmon_start();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double log10(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int chmod(char *__file,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = chmod(__file,__mode);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int symlink(char *__from,char *__to)

{
  int iVar1;
  
  iVar1 = symlink(__from,__to);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = tcsetattr(__fd,__optional_actions,__termios_p);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double exp(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int chdir(char *__path)

{
  int iVar1;
  
  iVar1 = chdir(__path);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int dup2(int __fd,int __fd2)

{
  int iVar1;
  
  iVar1 = dup2(__fd,__fd2);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double atan2(double __y,double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

double frexp(double __x,int *__exponent)

{
  double dVar1;
  
  dVar1 = frexp(__x,__exponent);
  return dVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int execv(char *__path,char **__argv)

{
  int iVar1;
  
  iVar1 = execv(__path,__argv);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double tanh(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = mktime(__tp);
  return tVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__gid_t getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = getgid();
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

group * getgrnam(char *__name)

{
  group *pgVar1;
  
  pgVar1 = getgrnam(__name);
  return pgVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__pid_t setsid(void)

{
  __pid_t _Var1;
  
  _Var1 = setsid();
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int shutdown(int __fd,int __how)

{
  int iVar1;
  
  iVar1 = shutdown(__fd,__how);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int truncate64(char *__file,__off64_t __length)

{
  int iVar1;
  
  iVar1 = truncate64(__file,__length);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int inet_pton(int __af,char *__cp,void *__buf)

{
  int iVar1;
  
  iVar1 = inet_pton(__af,__cp,__buf);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int close(int __fd)

{
  int iVar1;
  
  iVar1 = close(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__pid_t wait(void *__stat_loc)

{
  __pid_t _Var1;
  
  _Var1 = wait(__stat_loc);
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double ceil(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int utime(char *__file,utimbuf *__file_times)

{
  int iVar1;
  
  iVar1 = utime(__file,__file_times);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int * __h_errno_location(void)

{
  int *piVar1;
  
  piVar1 = __h_errno_location();
  return piVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * getlogin(void)

{
  char *pcVar1;
  
  pcVar1 = getlogin();
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double tan(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

double ldexp(double __x,int __exponent)

{
  double dVar1;
  
  dVar1 = ldexp(__x,__exponent);
  return dVar1;
}



void __fprintf_chk(void)

{
  __fprintf_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int getrusage(__rusage_who_t __who,rusage *__usage)

{
  int iVar1;
  
  iVar1 = getrusage(__who,__usage);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = isatty(__fd);
  return iVar1;
}



void __isoc99_sscanf(void)

{
  __isoc99_sscanf();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = select(__nfds,__readfds,__writefds,__exceptfds,__timeout);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int execvp(char *__file,char **__argv)

{
  int iVar1;
  
  iVar1 = execvp(__file,__argv);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int getpeername(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = getpeername(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention yet parameter storage is locked

int getaddrinfo(char *__name,char *__service,addrinfo *__req,addrinfo **__pai)

{
  int iVar1;
  
  iVar1 = getaddrinfo(__name,__service,__req,__pai);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = gettimeofday(__tv,__tz);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int tcsendbreak(int __fd,int __duration)

{
  int iVar1;
  
  iVar1 = tcsendbreak(__fd,__duration);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int setitimer(__itimer_which_t __which,itimerval *__new,itimerval *__old)

{
  int iVar1;
  
  iVar1 = setitimer(__which,__new,__old);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int dup(int __fd)

{
  int iVar1;
  
  iVar1 = dup(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int system(char *__command)

{
  int iVar1;
  
  iVar1 = system(__command);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = unlink(__name);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int rmdir(char *__path)

{
  int iVar1;
  
  iVar1 = rmdir(__path);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int getgroups(int __size,__gid_t *__list)

{
  int iVar1;
  
  iVar1 = getgroups(__size,__list);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigismember(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = sigismember(__set,__signo);
  return iVar1;
}



void __memcpy_chk(void)

{
  __memcpy_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double cos(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

tm * gmtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = gmtime(__timer);
  return ptVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = getpid();
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __fxstat64(int __ver,int __fildes,stat64 *__stat_buf)

{
  int iVar1;
  
  iVar1 = __fxstat64(__ver,__fildes,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int gethostbyaddr_r(void *__addr,__socklen_t __len,int __type,hostent *__result_buf,char *__buf,
                   size_t __buflen,hostent **__result,int *__h_errnop)

{
  int iVar1;
  
  iVar1 = gethostbyaddr_r(__addr,__len,__type,__result_buf,__buf,__buflen,__result,__h_errnop);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

passwd * getpwuid(__uid_t __uid)

{
  passwd *ppVar1;
  
  ppVar1 = getpwuid(__uid);
  return ppVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = geteuid();
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int setuid(__uid_t __uid)

{
  int iVar1;
  
  iVar1 = setuid(__uid);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double fmod(double __x,double __y)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigsuspend(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = sigsuspend(__set);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void freeaddrinfo(addrinfo *__ai)

{
  freeaddrinfo(__ai);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __fpclassify(double __value)

{
  int iVar1;
  
  iVar1 = __fpclassify(__value);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int tcflush(int __fd,int __queue_selector)

{
  int iVar1;
  
  iVar1 = tcflush(__fd,__queue_selector);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double atan(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int nice(int __inc)

{
  int iVar1;
  
  iVar1 = nice(__inc);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = opendir(__name);
  return pDVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int tcdrain(int __fd)

{
  int iVar1;
  
  iVar1 = tcdrain(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double cosh(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void __recv_chk(void)

{
  __recv_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

protoent * getprotobyname(char *__name)

{
  protoent *ppVar1;
  
  ppVar1 = getprotobyname(__name);
  return ppVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = listen(__fd,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = __ctype_b_loc();
  return ppuVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int cfsetospeed(termios *__termios_p,speed_t __speed)

{
  int iVar1;
  
  iVar1 = cfsetospeed(__termios_p,__speed);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigpending(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = sigpending(__set);
  return iVar1;
}



void __read_chk(void)

{
  __read_chk();
  return;
}



void dlerror(void)

{
  dlerror();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int link(char *__from,char *__to)

{
  int iVar1;
  
  iVar1 = link(__from,__to);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double asin(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pipe(int *__pipedes)

{
  int iVar1;
  
  iVar1 = pipe(__pipedes);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = sleep(__seconds);
  return uVar1;
}



void dlclose(void)

{
  dlclose();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double pow(double __x,double __y)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

__gid_t getegid(void)

{
  __gid_t _Var1;
  
  _Var1 = getegid();
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int kill(__pid_t __pid,int __sig)

{
  int iVar1;
  
  iVar1 = kill(__pid,__sig);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = strerror(__errnum);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = open64(__file,__oflag);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
  int iVar1;
  
  iVar1 = sigprocmask(__how,__set,__oset);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

speed_t cfgetispeed(termios *__termios_p)

{
  speed_t sVar1;
  
  sVar1 = cfgetispeed(__termios_p);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = sigaction(__sig,__act,__oact);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int socketpair(int __domain,int __type,int __protocol,int *__fds)

{
  int iVar1;
  
  iVar1 = socketpair(__domain,__type,__protocol,__fds);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcat(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  
  iVar1 = getsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = strtol(__nptr,__endptr,__base);
  return lVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int ftruncate64(int __fd,__off64_t __length)

{
  int iVar1;
  
  iVar1 = ftruncate64(__fd,__length);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = readlink(__path,__buf,__len);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = getsockname(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = connect(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int gethostname(char *__name,size_t __len)

{
  int iVar1;
  
  iVar1 = gethostname(__name,__len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int gethostbyname_r(char *__name,hostent *__result_buf,char *__buf,size_t __buflen,
                   hostent **__result,int *__h_errnop)

{
  int iVar1;
  
  iVar1 = gethostbyname_r(__name,__result_buf,__buf,__buflen,__result,__h_errnop);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int execve(char *__path,char **__argv,char **__envp)

{
  int iVar1;
  
  iVar1 = execve(__path,__argv,__envp);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fchmod(int __fd,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = fchmod(__fd,__mode);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = tcgetattr(__fd,__termios_p);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int putenv(char *__string)

{
  int iVar1;
  
  iVar1 = putenv(__string);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __lxstat64(int __ver,char *__filename,stat64 *__stat_buf)

{
  int iVar1;
  
  iVar1 = __lxstat64(__ver,__filename,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = socket(__domain,__type,__protocol);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void rewinddir(DIR *__dirp)

{
  rewinddir(__dirp);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int getrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
  int iVar1;
  
  iVar1 = getrlimit64(__resource,__rlimits);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = getenv(__name);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = alarm(__seconds);
  return uVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

speed_t cfgetospeed(termios *__termios_p)

{
  speed_t sVar1;
  
  sVar1 = cfgetospeed(__termios_p);
  return sVar1;
}



void __recvfrom_chk(void)

{
  __recvfrom_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int tcflow(int __fd,int __action)

{
  int iVar1;
  
  iVar1 = tcflow(__fd,__action);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigaddset(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = sigaddset(__set,__signo);
  return iVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

int getnameinfo(sockaddr *__sa,socklen_t __salen,char *__host,socklen_t __hostlen,char *__serv,
               socklen_t __servlen,uint __flags)

{
  int iVar1;
  
  iVar1 = getnameinfo(__sa,__salen,__host,__hostlen,__serv,__servlen,__flags);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int cfsetispeed(termios *__termios_p,speed_t __speed)

{
  int iVar1;
  
  iVar1 = cfsetispeed(__termios_p,__speed);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = getcwd(__buf,__size);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = send(__fd,__buf,__n,__flags);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

group * getgrgid(__gid_t __gid)

{
  group *pgVar1;
  
  pgVar1 = getgrgid(__gid);
  return pgVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double acos(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int chroot(char *__path)

{
  int iVar1;
  
  iVar1 = chroot(__path);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int chown(char *__file,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = chown(__file,__owner,__group);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

protoent * getprotobynumber(int __proto)

{
  protoent *ppVar1;
  
  ppVar1 = getprotobynumber(__proto);
  return ppVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = getuid();
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

servent * getservbyport(int __port,char *__proto)

{
  servent *psVar1;
  
  psVar1 = getservbyport(__port,__proto);
  return psVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __xstat64(int __ver,char *__filename,stat64 *__stat_buf)

{
  int iVar1;
  
  iVar1 = __xstat64(__ver,__filename,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  __off64_t _Var1;
  
  _Var1 = lseek64(__fd,__offset,__whence);
  return _Var1;
}



void dlsym(void)

{
  dlsym();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = closedir(__dirp);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int mkfifo(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = mkfifo(__path,__mode);
  return iVar1;
}



void __sprintf_chk(void)

{
  __sprintf_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = access(__name,__type);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = fork();
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigemptyset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = sigemptyset(__set);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double modf(double __x,double *__iptr)

{
  double dVar1;
  
  dVar1 = modf(__x,__iptr);
  return dVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__pid_t getppid(void)

{
  __pid_t _Var1;
  
  _Var1 = getppid();
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = sendto(__fd,__buf,__n,__flags,__addr,__addr_len);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = bind(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigdelset(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = sigdelset(__set,__signo);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = setlocale(__category,__locale);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double floor(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void __sigsetjmp(void)

{
  __sigsetjmp();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int getitimer(__itimer_which_t __which,itimerval *__value)

{
  int iVar1;
  
  iVar1 = getitimer(__which,__value);
  return iVar1;
}



void __memmove_chk(void)

{
  __memmove_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = localtime(__timer);
  return ptVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int setgid(__gid_t __gid)

{
  int iVar1;
  
  iVar1 = setgid(__gid);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = accept(__fd,__addr,__addr_len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double sqrt(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigaltstack(sigaltstack *__ss,sigaltstack *__oss)

{
  int iVar1;
  
  iVar1 = sigaltstack(__ss,__oss);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * inet_ntop(int __af,void *__cp,char *__buf,socklen_t __len)

{
  char *pcVar1;
  
  pcVar1 = inet_ntop(__af,__cp,__buf,__len);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__mode_t umask(__mode_t __mask)

{
  __mode_t _Var1;
  
  _Var1 = umask(__mask);
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = fcntl(__fd,__cmd);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fchown(int __fd,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = fchown(__fd,__owner,__group);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

passwd * getpwnam(char *__name)

{
  passwd *ppVar1;
  
  ppVar1 = getpwnam(__name);
  return ppVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double sin(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

double log(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = rename(__old,__new);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double strtod(char *__nptr,char **__endptr)

{
  double dVar1;
  
  dVar1 = strtod(__nptr,__endptr);
  return dVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = readdir64(__dirp);
  return pdVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = mkdir(__path,__mode);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double sinh(double __x)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

servent * getservbyname(char *__name,char *__proto)

{
  servent *psVar1;
  
  psVar1 = getservbyname(__name,__proto);
  return psVar1;
}



void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
                    auStack8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void call_gmon_start(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00409832)
// WARNING: Removing unreachable block (ram,0x00409838)

void __do_global_dtors_aux(void)

{
  if (completed_6338 == '\0') {
    completed_6338 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00409888)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void frame_dummy(void)

{
  return;
}



undefined8 caml_program(void)

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



void caml_curry9(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry9_1;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry9_1(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry9_2;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry9_2(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry9_3;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry9_3(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry9_4;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry9_4(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry9_5;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry9_5(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry9_6;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry9_6(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry9_7;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry9_7(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry9_8;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry9_8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_RBX;
  
  lVar1 = *(long *)(*(long *)(unaff_RBX + 0x18) + 0x18);
  lVar2 = *(long *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x18);
  lVar4 = *(long *)(lVar3 + 0x18);
                    // WARNING: Could not recover jumptable at 0x00409c59. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(long *)(*(long *)(*(long *)(lVar4 + 0x18) + 0x18) + 0x18) + 0x10))
            (*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar3 + 0x10),
             *(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar1 + 0x10),
             *(undefined8 *)(*(long *)(unaff_RBX + 0x18) + 0x10),*(undefined8 *)(unaff_RBX + 0x10));
  return;
}



void caml_curry7(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry7_1;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry7_1(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry7_2;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry7_2(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry7_3;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry7_3(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry7_4;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry7_4(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry7_5;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry7_5(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry7_6;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry7_6(void)

{
  long lVar1;
  long lVar2;
  long unaff_RBX;
  
  lVar1 = *(long *)(*(long *)(unaff_RBX + 0x18) + 0x18);
  lVar2 = *(long *)(lVar1 + 0x18);
                    // WARNING: Could not recover jumptable at 0x00409e77. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0x18) + 0x18) + 0x10))
            (*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar1 + 0x10),
             *(undefined8 *)(*(long *)(unaff_RBX + 0x18) + 0x10),*(undefined8 *)(unaff_RBX + 0x10));
  return;
}



void caml_curry6(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry6_1;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry6_1(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry6_2;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry6_2(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry6_3;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry6_3(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry6_4;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry6_4(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry6_5;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry6_5(void)

{
  long lVar1;
  long unaff_RBX;
  
  lVar1 = *(long *)(*(long *)(unaff_RBX + 0x18) + 0x18);
                    // WARNING: Could not recover jumptable at 0x0040a03f. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(long *)(*(long *)(*(long *)(lVar1 + 0x18) + 0x18) + 0x18) + 0x10))
            (*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(*(long *)(unaff_RBX + 0x18) + 0x10),
             *(undefined8 *)(unaff_RBX + 0x10));
  return;
}



void caml_curry5(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry5_1;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry5_1(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry5_2;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry5_2(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry5_3;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry5_3(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry5_4;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry5_4(void)

{
  long unaff_RBX;
  
                    // WARNING: Could not recover jumptable at 0x0040a1b7. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_RBX + 0x18) + 0x18) + 0x18) + 0x18) +
              0x10))(*(undefined8 *)(*(long *)(unaff_RBX + 0x18) + 0x10),
                     *(undefined8 *)(unaff_RBX + 0x10));
  return;
}



void caml_curry4(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry4_1;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry4_1(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry4_2;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry4_2(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry4_3;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry4_3(void)

{
  long unaff_RBX;
  
                    // WARNING: Could not recover jumptable at 0x0040a2cf. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(long *)(*(long *)(*(long *)(unaff_RBX + 0x18) + 0x18) + 0x18) + 0x10))
            (*(undefined8 *)(unaff_RBX + 0x10));
  return;
}



void caml_curry3(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry3_1;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry3_1(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry3_2;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry3_2(void)

{
  long unaff_RBX;
  
                    // WARNING: Could not recover jumptable at 0x0040a397. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(long *)(*(long *)(unaff_RBX + 0x18) + 0x18) + 0x10))();
  return;
}



void caml_curry2(void)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry2_1;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void caml_curry2_1(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_RBX;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(unaff_RBX + 0x18) + 0x10);
                    // WARNING: Could not recover jumptable at 0x0040a402. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(*(long *)(unaff_RBX + 0x18),UNRECOVERED_JUMPTABLE);
  return;
}



void caml_tuplify2(void)

{
  long unaff_RBX;
  
                    // WARNING: Could not recover jumptable at 0x0040a41e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_RBX + 0x10))();
  return;
}



void caml_tuplify3(void)

{
  long in_RAX;
  long unaff_RBX;
  
                    // WARNING: Could not recover jumptable at 0x0040a432. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(unaff_RBX + 0x10))(*(undefined8 *)(in_RAX + 0x10));
  return;
}



void caml_apply6(void)

{
  code **ppcVar1;
  code **in_R8;
  
  if (in_R8[1] == (code *)0xd) {
                    // WARNING: Could not recover jumptable at 0x0040a456. Too many branches
                    // WARNING: Treating indirect jump as call
    (*in_R8[2])();
    return;
  }
  ppcVar1 = (code **)(**in_R8)(*in_R8);
  ppcVar1 = (code **)(**ppcVar1)(*ppcVar1);
  ppcVar1 = (code **)(**ppcVar1)(*ppcVar1);
  ppcVar1 = (code **)(**ppcVar1)(*ppcVar1);
  ppcVar1 = (code **)(**ppcVar1)(*ppcVar1);
                    // WARNING: Could not recover jumptable at 0x0040a4be. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcVar1)(*ppcVar1);
  return;
}



void caml_apply4(undefined8 param_1,undefined8 param_2,code **param_3)

{
  code **ppcVar1;
  
  if (param_3[1] == (code *)0x9) {
                    // WARNING: Could not recover jumptable at 0x0040a4d6. Too many branches
                    // WARNING: Treating indirect jump as call
    (*param_3[2])();
    return;
  }
  ppcVar1 = (code **)(**param_3)(*param_3);
  ppcVar1 = (code **)(**ppcVar1)(*ppcVar1);
  ppcVar1 = (code **)(**ppcVar1)(*ppcVar1);
                    // WARNING: Could not recover jumptable at 0x0040a516. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcVar1)(*ppcVar1);
  return;
}



void caml_apply3(undefined8 param_1,code **param_2)

{
  code **ppcVar1;
  
  if (param_2[1] == (code *)0x7) {
                    // WARNING: Could not recover jumptable at 0x0040a536. Too many branches
                    // WARNING: Treating indirect jump as call
    (*param_2[2])(param_1,param_2,param_2[2]);
    return;
  }
  ppcVar1 = (code **)(**param_2)(*param_2);
  ppcVar1 = (code **)(**ppcVar1)(*ppcVar1);
                    // WARNING: Could not recover jumptable at 0x0040a564. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcVar1)(*ppcVar1);
  return;
}



void caml_apply2(code **param_1)

{
  code **ppcVar1;
  
  if (param_1[1] == (code *)0x5) {
                    // WARNING: Could not recover jumptable at 0x0040a586. Too many branches
                    // WARNING: Treating indirect jump as call
    (*param_1[2])(param_1,param_1[2]);
    return;
  }
  ppcVar1 = (code **)(**param_1)(param_1,*param_1);
                    // WARNING: Could not recover jumptable at 0x0040a5a2. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcVar1)(*ppcVar1);
  return;
}



undefined8 camlStd_exit__entry(void)

{
  (**(code **)*DAT_00645600)(*(code **)*DAT_00645600);
  return 1;
}



// WARNING: Removing unreachable block (ram,0x0040a642)

undefined ** camlStd_exit__code_end(void)

{
  undefined **ppuVar1;
  code **ppcVar2;
  bool bVar3;
  long lStack16;
  
  ppuVar1 = (undefined **)FUN_0040a607();
  if ((undefined **)*ppuVar1 != &caml_exn_Invalid_argument) {
    return ppuVar1;
  }
  lStack16 = 3;
  do {
    camlPervasives___5e_136();
    bVar3 = lStack16 != 3;
    lStack16 = lStack16 + 2;
  } while (bVar3);
  ppcVar2 = (code **)camlPrintf__printf_425();
  (**ppcVar2)(*ppcVar2);
  return (undefined **)0x1;
}



// WARNING: Removing unreachable block (ram,0x0040a642)

undefined ** camlSource__entry(void)

{
  undefined **ppuVar1;
  code **ppcVar2;
  bool bVar3;
  long local_10;
  
  ppuVar1 = (undefined **)FUN_0040a607();
  if ((undefined **)*ppuVar1 != &caml_exn_Invalid_argument) {
    return ppuVar1;
  }
  local_10 = 3;
  do {
    camlPervasives___5e_136();
    bVar3 = local_10 != 3;
    local_10 = local_10 + 2;
  } while (bVar3);
  ppcVar2 = (code **)camlPrintf__printf_425();
  (**ppcVar2)(*ppcVar2);
  return (undefined **)0x1;
}



undefined8 FUN_0040a607(void)

{
  long lVar1;
  code **ppcVar2;
  bool bVar3;
  long lStack0000000000000010;
  
  lVar1 = caml_c_call(*(undefined8 *)(camlSys + 8));
  if (2 < lVar1) {
    lStack0000000000000010 = 3;
    do {
      camlPervasives___5e_136();
      bVar3 = lStack0000000000000010 != lVar1;
      lStack0000000000000010 = lStack0000000000000010 + 2;
    } while (bVar3);
  }
  ppcVar2 = (code **)camlPrintf__printf_425();
  (**ppcVar2)(*ppcVar2);
  return 1;
}



void camlSource__code_end(long param_1)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x48) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x48;
  }
  *(undefined8 *)(unaff_R15 - 0x48) = 0x801;
  *(undefined8 *)(unaff_R15 - 0x40) = in_RAX;
  *(undefined8 *)(unaff_R15 - 0x38) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(unaff_R15 - 0x30) = 0x1400;
  *(undefined8 *)(unaff_R15 - 0x28) = 3;
  *(undefined8 *)(unaff_R15 - 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(unaff_R15 - 0x18) = **(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(unaff_R15 - 0x10) = (undefined8 *)(unaff_R15 - 0x40);
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void camlUnix__fun_1861(long param_1)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x48) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x48;
  }
  *(undefined8 *)(unaff_R15 - 0x48) = 0x801;
  *(undefined8 *)(unaff_R15 - 0x40) = in_RAX;
  *(undefined8 *)(unaff_R15 - 0x38) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(unaff_R15 - 0x30) = 0x1400;
  *(undefined8 *)(unaff_R15 - 0x28) = 3;
  *(undefined8 *)(unaff_R15 - 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(unaff_R15 - 0x18) = **(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(unaff_R15 - 0x10) = (undefined8 *)(unaff_R15 - 0x40);
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



undefined8 camlUnix__fun_1847(void)

{
  undefined8 *in_RAX;
  long unaff_RBX;
  undefined8 uVar1;
  ulong unaff_R15;
  
  if (((ulong)in_RAX & 1) == 0) {
    if (*(byte *)(in_RAX + -1) != 0) {
      if (*(byte *)(in_RAX + -1) < 2) {
        uVar1 = *in_RAX;
        while( true ) {
          if (caml_young_limit <= unaff_R15 - 0x10) break;
          caml_call_gc();
          unaff_R15 = unaff_R15 - 0x10;
        }
        *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
        *(undefined8 *)(unaff_R15 - 8) = uVar1;
        caml_modify(*(undefined8 *)(unaff_RBX + 0x10));
        return 1;
      }
      **(undefined8 **)(unaff_RBX + 0x18) = *in_RAX;
      return 1;
    }
  }
  else {
    if (1 < (long)in_RAX >> 1) {
      **(undefined8 **)(unaff_RBX + 0x20) = 3;
      return 1;
    }
  }
  return 1;
}



long * camlUnix__get_port_765(long param_1)

{
  undefined8 in_RAX;
  long lVar1;
  undefined **ppuVar2;
  ulong unaff_R15;
  
  lVar1 = caml_string_equal(*(undefined8 *)(param_1 + 0x18),&camlUnix__213);
  if (lVar1 != 1) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x30) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x30;
    }
    *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
    *(undefined8 *)(unaff_R15 - 0x28) = in_RAX;
    *(undefined8 *)(unaff_R15 - 0x20) = 1;
    *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
    *(long *)(unaff_R15 - 0x10) = (long)(undefined8 *)(unaff_R15 - 0x28);
    *(undefined8 *)(unaff_R15 - 8) = 1;
    return (long *)(unaff_R15 - 0x10);
  }
  ppuVar2 = (undefined **)FUN_0040a904();
  if ((undefined **)*ppuVar2 == &caml_exn_Failure) {
    ppuVar2 = (undefined **)FUN_0040a888();
    if ((undefined **)*ppuVar2 == &caml_exn_Not_found) {
      return (long *)0x1;
    }
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_0040a888(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong unaff_R15;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar1 = caml_c_call(*(undefined8 *)(in_stack_00000008 + 0x18),in_stack_00000010);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x30) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x30;
  }
  *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x28) = in_stack_00000018;
  *(undefined8 *)(unaff_R15 - 0x20) = uVar2;
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 **)(unaff_R15 - 0x10) = (undefined8 *)(unaff_R15 - 0x28);
  *(undefined8 *)(unaff_R15 - 8) = 1;
  return;
}



void FUN_0040a904(void)

{
  undefined8 uVar1;
  long unaff_RBP;
  ulong unaff_R15;
  undefined8 in_stack_00000018;
  
  uVar1 = caml_c_call(*(undefined8 *)(unaff_RBP + 0x18));
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x30) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x30;
  }
  *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x28) = in_stack_00000018;
  *(undefined8 *)(unaff_R15 - 0x20) = uVar1;
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 **)(unaff_R15 - 0x10) = (undefined8 *)(unaff_R15 - 0x28);
  *(undefined8 *)(unaff_R15 - 8) = 1;
  return;
}



void camlUnix__fun_1852(void)

{
  undefined8 in_RAX;
  long unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x18) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = **(undefined8 **)(unaff_RBX + 0x10);
  return;
}



void camlUnix__fun_1855(long param_1)

{
  undefined8 in_RAX;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x38) break;
    caml_call_gc();
    in_RAX = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x38;
  }
  *(undefined8 *)(unaff_R15 - 0x38) = 0x18f7;
  *(code **)(unaff_R15 - 0x30) = caml_tuplify2;
  *(undefined8 *)(unaff_R15 - 0x28) = 0xfffffffffffffffd;
  *(code **)(unaff_R15 - 0x20) = camlUnix__fun_1861;
  *(undefined8 *)(unaff_R15 - 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  camlList__map_90();
  return;
}



void camlUnix__fun_1876(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1882(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1585(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1587(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1589(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1591(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1593(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1595(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1597(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1599(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1601(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1603(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1605(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1607(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1609(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1611(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1613(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1615(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1617(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1619(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1621(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1623(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1625(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1627(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1629(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1631(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1633(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1635(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1637(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1639(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1641(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1643(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1645(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1647(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1649(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1651(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1653(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1655(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1657(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1659(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1661(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1663(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1665(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1667(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1669(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1671(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1673(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1675(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1677(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1679(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1681(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1683(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1685(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1687(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1689(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1691(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1693(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1695(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1697(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1699(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1701(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1703(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1705(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1707(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1709(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1711(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1713(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1715(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1717(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1719(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1721(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1723(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1725(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1727(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1729(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1731(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1733(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1735(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1737(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1739(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1741(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1743(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1745(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1747(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1749(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1751(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1753(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1755(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1757(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1759(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1761(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1763(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1765(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1767(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1769(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1771(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1773(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1775(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1777(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1779(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1781(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1783(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1785(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1787(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1789(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1791(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1793(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1795(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1797(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1799(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1801(void)

{
  caml_c_call();
  return;
}



void camlUnix__handle_unix_error_199(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)FUN_0040b9b0();
  if (*plVar4 != camlUnix) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  lVar2 = plVar4[3];
  lVar3 = plVar4[1];
  if (1 < *(ulong *)(camlSys + -8) >> 9) {
    camlPervasives__output_string_215();
    camlPervasives__output_string_215();
    camlPervasives__output_string_215();
    camlPervasives__output_string_215();
    lVar1 = (*(ulong *)(lVar2 + -8) >> 10) * 8 + -1;
    if (1 < (long)((lVar1 - (ulong)*(byte *)(lVar2 + lVar1)) * 2 + 1)) {
      camlPervasives__output_string_215();
      camlPervasives__output_string_215();
      camlPervasives__output_string_215();
    }
    camlPervasives__output_string_215();
    caml_c_call(lVar3);
    camlPervasives__prerr_endline_309();
    camlPervasives__exit_350();
    return;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



void FUN_0040b9b0(undefined8 param_1,code **param_2)

{
  (**param_2)(*param_2);
  return;
}



void camlUnix__read_265(long param_1,long param_2)

{
  long lVar1;
  long unaff_RBX;
  
  if ((0 < param_1) && (0 < param_2)) {
    lVar1 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
    if (param_1 <= (long)(((lVar1 - (ulong)*(byte *)(unaff_RBX + lVar1)) * 2 - param_2) + 2)) {
      caml_c_call();
      return;
    }
  }
  camlPervasives__invalid_arg_40();
  return;
}



void camlUnix__write_270(long param_1,long param_2)

{
  long lVar1;
  long unaff_RBX;
  
  if ((0 < param_1) && (0 < param_2)) {
    lVar1 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
    if (param_1 <= (long)(((lVar1 - (ulong)*(byte *)(unaff_RBX + lVar1)) * 2 - param_2) + 2)) {
      caml_c_call();
      return;
    }
  }
  camlPervasives__invalid_arg_40();
  return;
}



void camlUnix__single_write_275(long param_1,long param_2)

{
  long lVar1;
  long unaff_RBX;
  
  if ((0 < param_1) && (0 < param_2)) {
    lVar1 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
    if (param_1 <= (long)(((lVar1 - (ulong)*(byte *)(unaff_RBX + lVar1)) * 2 - param_2) + 2)) {
      caml_c_call();
      return;
    }
  }
  camlPervasives__invalid_arg_40();
  return;
}



void camlUnix__fun_1823(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1821(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1819(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1817(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1815(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1813(void)

{
  caml_c_call();
  return;
}



undefined8 camlUnix__try_set_close_on_exec_394(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)FUN_0040bc0c();
  if ((undefined **)*ppuVar1 == &caml_exn_Invalid_argument) {
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined8 FUN_0040bc0c(void)

{
  caml_c_call();
  return 3;
}



void camlUnix__pause_436(void)

{
  undefined8 uVar1;
  
  uVar1 = caml_c_call(3,1);
  caml_c_call(uVar1);
  return;
}



char camlUnix__is_inet6_addr_526(void)

{
  long lVar1;
  long in_RAX;
  
  lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  return ((lVar1 - (ulong)*(byte *)(in_RAX + lVar1) & 0x7fffffffffffffff) == 0x10) * '\x02' + '\x01'
  ;
}



undefined8 camlUnix__domain_of_sockaddr_555(void)

{
  long lVar1;
  long *in_RAX;
  
  if (*(char *)(in_RAX + -1) == '\0') {
    return 1;
  }
  lVar1 = (*(ulong *)(*in_RAX + -8) >> 10) * 8 + -1;
  if ((lVar1 - (ulong)*(byte *)(*in_RAX + lVar1) & 0x7fffffffffffffff) == 0x10) {
    return 5;
  }
  return 3;
}



void camlUnix__recv_584(long param_1,long param_2)

{
  long lVar1;
  long unaff_RBX;
  
  if ((0 < param_1) && (0 < param_2)) {
    lVar1 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
    if (param_1 <= (long)(((lVar1 - (ulong)*(byte *)(unaff_RBX + lVar1)) * 2 - param_2) + 2)) {
      caml_c_call();
      return;
    }
  }
  camlPervasives__invalid_arg_40();
  return;
}



void camlUnix__recvfrom_590(long param_1,long param_2)

{
  long lVar1;
  long unaff_RBX;
  
  if ((0 < param_1) && (0 < param_2)) {
    lVar1 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
    if (param_1 <= (long)(((lVar1 - (ulong)*(byte *)(unaff_RBX + lVar1)) * 2 - param_2) + 2)) {
      caml_c_call();
      return;
    }
  }
  camlPervasives__invalid_arg_40();
  return;
}



void camlUnix__send_596(long param_1,long param_2)

{
  long lVar1;
  long unaff_RBX;
  
  if ((0 < param_1) && (0 < param_2)) {
    lVar1 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
    if (param_1 <= (long)(((lVar1 - (ulong)*(byte *)(unaff_RBX + lVar1)) * 2 - param_2) + 2)) {
      caml_c_call();
      return;
    }
  }
  camlPervasives__invalid_arg_40();
  return;
}



void camlUnix__sendto_602(long param_1,long param_2)

{
  long lVar1;
  long unaff_RBX;
  
  if ((0 < param_1) && (0 < param_2)) {
    lVar1 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
    if (param_1 <= (long)(((lVar1 - (ulong)*(byte *)(unaff_RBX + lVar1)) * 2 - param_2) + 2)) {
      caml_c_call();
      return;
    }
  }
  camlPervasives__invalid_arg_40();
  return;
}



void camlUnix__fun_1835(void)

{
  caml_c_call();
  return;
}



void camlUnix__fun_1833(void)

{
  caml_c_call();
  return;
}



void camlUnix__getsockopt_669(void)

{
  caml_c_call(1);
  return;
}



void camlUnix__setsockopt_672(void)

{
  caml_c_call(1);
  return;
}



void camlUnix__getsockopt_int_676(void)

{
  caml_c_call(3);
  return;
}



void camlUnix__setsockopt_int_679(void)

{
  caml_c_call(3);
  return;
}



void camlUnix__getsockopt_optint_683(void)

{
  caml_c_call(5);
  return;
}



void camlUnix__setsockopt_optint_686(void)

{
  caml_c_call(5);
  return;
}



void camlUnix__getsockopt_float_690(void)

{
  caml_c_call(7);
  return;
}



void camlUnix__setsockopt_float_693(void)

{
  caml_c_call(7);
  return;
}



void camlUnix__getsockopt_error_697(void)

{
  caml_c_call(9);
  return;
}



void camlUnix__getaddrinfo_emulation_756(void)

{
  long **pplVar1;
  undefined8 *puVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 unaff_RBX;
  long *plVar6;
  ulong unaff_R15;
  ulong uVar7;
  ulong uVar8;
  code **ppcVar9;
  
  while (uVar7 = unaff_R15 - 0x60, uVar7 < caml_young_limit) {
    caml_call_gc();
    unaff_R15 = uVar7;
  }
  pplVar1 = (long **)(unaff_R15 - 0x58);
  *(undefined8 *)(unaff_R15 - 0x60) = 0x400;
  *pplVar1 = (long *)0x1;
  puVar2 = (undefined8 *)(unaff_R15 - 0x48);
  *(undefined8 *)(unaff_R15 - 0x50) = 0x400;
  *puVar2 = 1;
  *(undefined8 *)(unaff_R15 - 0x40) = 0x400;
  *(undefined8 *)(unaff_R15 - 0x38) = 1;
  *(undefined8 *)(unaff_R15 - 0x30) = 0x14f7;
  *(code **)(unaff_R15 - 0x28) = camlUnix__fun_1847;
  *(undefined8 *)(unaff_R15 - 0x20) = 3;
  *(long ***)(unaff_R15 - 0x18) = pplVar1;
  *(undefined8 **)(unaff_R15 - 0x10) = puVar2;
  *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x38);
  camlList__iter_102();
  while (uVar8 = uVar7 - 0x28, uVar8 < caml_young_limit) {
    caml_call_gc();
    uVar7 = uVar8;
  }
  ppcVar9 = (code **)(uVar7 - 0x20);
  *(undefined8 *)(uVar7 - 0x28) = 0x10f7;
  *ppcVar9 = caml_curry2;
  *(undefined8 *)(uVar7 - 0x18) = 5;
  *(code **)(uVar7 - 0x10) = camlUnix__get_port_765;
  *(undefined8 *)(uVar7 - 8) = unaff_RBX;
  if (*pplVar1 == (long *)0x1) {
    camlUnix__get_port_765();
    camlUnix__get_port_765(ppcVar9);
    camlPervasives___40_167();
  }
  else {
    lVar4 = **pplVar1;
    if (lVar4 == 3) {
      camlUnix__get_port_765();
    }
    else {
      if (lVar4 == 1) {
        camlUnix__get_port_765();
      }
      else {
        lVar3 = caml_string_equal(unaff_RBX,&camlUnix__200);
        uVar7 = uVar8;
        if (lVar3 != 1) {
          while (uVar8 = uVar7 - 0x30, uVar8 < caml_young_limit) {
            caml_call_gc();
            uVar7 = uVar8;
          }
          *(undefined8 *)(uVar7 - 0x30) = 0x800;
          *(long *)(uVar7 - 0x28) = lVar4;
          *(undefined8 *)(uVar7 - 0x20) = 1;
          *(undefined8 *)(uVar7 - 0x18) = 0x800;
          *(long **)(uVar7 - 0x10) = (long *)(uVar7 - 0x28);
          *(undefined8 *)(uVar7 - 8) = 1;
        }
      }
    }
  }
  lVar4 = caml_string_equal(in_RAX,&camlUnix__195);
  if (lVar4 == 1) {
    ppuVar5 = (undefined **)FUN_0040c47c();
    if ((undefined **)*ppuVar5 != &caml_exn_Failure) {
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    ppuVar5 = (undefined **)FUN_0040c400();
    if ((undefined **)*ppuVar5 != &caml_exn_Not_found) {
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    plVar6 = (long *)0x1;
  }
  else {
    lVar4 = camlList__mem_189();
    uVar7 = uVar8;
    if (lVar4 == 1) {
      while (uVar8 = uVar7 - 0x30, uVar8 < caml_young_limit) {
        caml_call_gc();
        uVar7 = uVar8;
      }
      *(undefined8 *)(uVar7 - 0x30) = 0x800;
      *(undefined8 *)(uVar7 - 0x28) = DAT_00641478;
      *(char **)(uVar7 - 0x20) = camlUnix__193;
      plVar6 = (long *)(uVar7 - 0x10);
      *(undefined8 *)(uVar7 - 0x18) = 0x800;
      *plVar6 = (long)(undefined8 *)(uVar7 - 0x28);
      *(undefined8 *)(uVar7 - 8) = 1;
    }
    else {
      while (uVar7 = uVar8 - 0x30, uVar7 < caml_young_limit) {
        caml_call_gc();
        uVar8 = uVar7;
      }
      *(undefined8 *)(uVar8 - 0x30) = 0x800;
      *(undefined8 *)(uVar8 - 0x28) = DAT_00641470;
      *(char **)(uVar8 - 0x20) = camlUnix__194;
      plVar6 = (long *)(uVar8 - 0x10);
      *(undefined8 *)(uVar8 - 0x18) = 0x800;
      *plVar6 = (long)(undefined8 *)(uVar8 - 0x28);
      *(undefined8 *)(uVar8 - 8) = 1;
      uVar8 = uVar7;
    }
  }
  while (uVar8 - 0x30 < caml_young_limit) {
    caml_call_gc();
    uVar8 = uVar8 - 0x30;
  }
  *(undefined8 *)(uVar8 - 0x30) = 0x14f7;
  *(code **)(uVar8 - 0x28) = caml_tuplify2;
  *(undefined8 *)(uVar8 - 0x20) = 0xfffffffffffffffd;
  *(code **)(uVar8 - 0x18) = camlUnix__fun_1855;
  *(undefined8 **)(uVar8 - 0x10) = puVar2;
  *(long **)(uVar8 - 8) = plVar6;
  camlList__map_90();
  camlList__flatten_86();
  return;
}



void FUN_0040c400(void)

{
  undefined8 uVar1;
  ulong unaff_R15;
  ulong uVar2;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  uVar1 = caml_c_call(in_stack_00000020);
  camlArray__to_list_148();
  while( true ) {
    uVar2 = unaff_R15 - 0x20;
    if (caml_young_limit <= uVar2) break;
    caml_call_gc();
    unaff_R15 = uVar2;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xcf7;
  *(code **)(unaff_R15 - 0x18) = camlUnix__fun_1852;
  *(undefined8 *)(unaff_R15 - 0x10) = 3;
  *(undefined8 *)(unaff_R15 - 8) = uVar1;
  uVar1 = camlList__map_90();
  while( true ) {
    if (caml_young_limit <= uVar2 - 0x30) break;
    caml_call_gc();
    uVar2 = uVar2 - 0x30;
  }
  *(undefined8 *)(uVar2 - 0x30) = 0x14f7;
  *(code **)(uVar2 - 0x28) = caml_tuplify2;
  *(undefined8 *)(uVar2 - 0x20) = 0xfffffffffffffffd;
  *(code **)(uVar2 - 0x18) = camlUnix__fun_1855;
  *(undefined8 *)(uVar2 - 0x10) = in_stack_00000018;
  *(undefined8 *)(uVar2 - 8) = uVar1;
  camlList__map_90();
  camlList__flatten_86();
  return;
}



void FUN_0040c47c(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong unaff_R15;
  ulong uVar3;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  uVar1 = caml_c_call();
  while( true ) {
    uVar3 = unaff_R15 - 0x30;
    if (caml_young_limit <= uVar3) break;
    caml_call_gc();
    unaff_R15 = uVar3;
  }
  *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x28) = uVar1;
  *(undefined8 *)(unaff_R15 - 0x20) = in_stack_00000020;
  plVar2 = (long *)(unaff_R15 - 0x10);
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *plVar2 = (long)(undefined8 *)(unaff_R15 - 0x28);
  *(undefined8 *)(unaff_R15 - 8) = 1;
  while( true ) {
    if (caml_young_limit <= uVar3 - 0x30) break;
    caml_call_gc();
    uVar3 = uVar3 - 0x30;
  }
  *(undefined8 *)(uVar3 - 0x30) = 0x14f7;
  *(code **)(uVar3 - 0x28) = caml_tuplify2;
  *(undefined8 *)(uVar3 - 0x20) = 0xfffffffffffffffd;
  *(code **)(uVar3 - 0x18) = camlUnix__fun_1855;
  *(undefined8 *)(uVar3 - 0x10) = in_stack_00000018;
  *(long **)(uVar3 - 8) = plVar2;
  camlList__map_90();
  camlList__flatten_86();
  return;
}



void camlUnix__getaddrinfo_777(undefined8 param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)FUN_0040c5d8();
  if ((undefined **)*ppuVar1 == &caml_exn_Invalid_argument) {
    camlUnix__getaddrinfo_emulation_756(param_1);
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_0040c5d8(void)

{
  caml_c_call();
  camlList__rev_append_79();
  return;
}



void camlUnix__getnameinfo_emulation_798(void)

{
  undefined8 *in_RAX;
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong unaff_R15;
  
  if (*(char *)(in_RAX + -1) == '\0') {
    uVar3 = *in_RAX;
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x18) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x18;
    }
    *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
    *(undefined **)(unaff_R15 - 0x10) = &camlUnix__190;
    *(undefined8 *)(unaff_R15 - 8) = uVar3;
    return;
  }
  uVar3 = *in_RAX;
  ppuVar1 = (undefined **)FUN_0040c6b8();
  if ((undefined **)*ppuVar1 != &caml_exn_Not_found) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  lVar2 = camlList__mem_189();
  if (lVar2 != 1) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x10) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
    *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar3 = caml_c_call(uVar3);
  ppuVar1 = (undefined **)FUN_0040c750();
  if ((undefined **)*ppuVar1 == &caml_exn_Not_found) {
    uVar4 = camlPervasives__string_of_int_154();
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x18) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x18;
    }
    *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
    *(undefined8 *)(unaff_R15 - 0x10) = uVar3;
    *(undefined8 *)(unaff_R15 - 8) = uVar4;
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_0040c6b8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  ulong unaff_R15;
  undefined8 in_stack_00000008;
  
  lVar2 = camlList__mem_189();
  if (lVar2 != 1) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x10) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
    *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  puVar3 = (undefined8 *)caml_c_call(in_stack_00000008);
  uVar1 = *puVar3;
  ppuVar4 = (undefined **)FUN_0040c750();
  if ((undefined **)*ppuVar4 == &caml_exn_Not_found) {
    uVar5 = camlPervasives__string_of_int_154();
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x18) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x18;
    }
    *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
    *(undefined8 *)(unaff_R15 - 0x10) = uVar1;
    *(undefined8 *)(unaff_R15 - 8) = uVar5;
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_0040c750(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  lVar1 = camlList__mem_189();
  if (lVar1 != 1) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x10) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
    *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  lVar1 = camlList__mem_189();
  if (lVar1 == 1) {
    puVar3 = &camlUnix__191;
  }
  else {
    puVar3 = &camlUnix__192;
  }
  puVar2 = (undefined8 *)caml_c_call(in_stack_00000010,puVar3);
  uVar4 = *puVar2;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x18) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x10) = in_stack_00000008;
  *(undefined8 *)(unaff_R15 - 8) = uVar4;
  return;
}



void camlUnix__getnameinfo_807(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)FUN_0040c8ac();
  if ((undefined **)*ppuVar1 == &caml_exn_Invalid_argument) {
    camlUnix__getnameinfo_emulation_798();
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_0040c8ac(void)

{
  caml_c_call();
  return;
}



undefined8 camlUnix__system_917(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = caml_c_call(1);
  if (lVar1 != 1) {
    lVar1 = caml_c_call(1,lVar1);
    return *(undefined8 *)(lVar1 + 8);
  }
  FUN_0040c92c();
  uVar2 = camlPervasives__exit_350();
  return uVar2;
}



void FUN_0040c92c(void)

{
  ulong unaff_R15;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xc00;
  *(char **)(unaff_R15 - 0x18) = camlUnix__188;
  *(undefined **)(unaff_R15 - 0x10) = &camlUnix__189;
  *(undefined8 *)(unaff_R15 - 8) = in_stack_00000008;
  caml_c_call(camlUnix__187);
  return;
}



long camlUnix__safe_dup_920(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = caml_c_call();
  if (6 < lVar1) {
    return lVar1;
  }
  lVar2 = camlUnix__safe_dup_920();
  caml_c_call(lVar1);
  return lVar2;
}



undefined8 camlUnix__safe_close_924(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_0040ca10();
  if (*plVar1 == camlUnix) {
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_0040ca10(void)

{
  caml_c_call();
  return;
}



void camlUnix__perform_redirections_926(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = camlUnix__safe_dup_920();
  uVar2 = camlUnix__safe_dup_920();
  uVar3 = camlUnix__safe_dup_920();
  camlUnix__safe_close_924();
  camlUnix__safe_close_924();
  camlUnix__safe_close_924();
  caml_c_call(uVar1,1);
  caml_c_call(uVar1);
  caml_c_call(uVar2,3);
  caml_c_call(uVar2);
  caml_c_call(uVar3,5);
  caml_c_call(uVar3);
  return;
}



void camlUnix__create_process_933(void)

{
  long lVar1;
  
  lVar1 = caml_c_call(1);
  if (lVar1 != 1) {
    return;
  }
  FUN_0040cb64();
  camlPervasives__exit_350();
  return;
}



void FUN_0040cb64(void)

{
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  camlUnix__perform_redirections_926(in_stack_00000018);
  caml_c_call(in_stack_00000020,in_stack_00000028);
  return;
}



void camlUnix__create_process_env_940(void)

{
  long lVar1;
  
  lVar1 = caml_c_call(1);
  if (lVar1 != 1) {
    return;
  }
  FUN_0040cbf8();
  camlPervasives__exit_350();
  return;
}



void FUN_0040cbf8(void)

{
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  camlUnix__perform_redirections_926(in_stack_00000018);
  caml_c_call(in_stack_00000020,in_stack_00000028,in_stack_00000030);
  return;
}



void camlUnix__open_proc_975(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = camlList__for_all_165();
  lVar2 = caml_c_call(1);
  if (lVar2 != 1) {
    camlHashtbl__add_102();
    return;
  }
  if (param_1 != 1) {
    caml_c_call(param_1,1);
    caml_c_call(param_1);
  }
  if (param_2 != 3) {
    caml_c_call(param_2,3);
    caml_c_call(param_2);
  }
  if (lVar1 == 1) {
    camlList__iter_102();
  }
  FUN_0040cd48();
  camlPervasives__exit_350();
  return;
}



void FUN_0040cd48(void)

{
  ulong unaff_R15;
  undefined8 in_stack_00000010;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xc00;
  *(char **)(unaff_R15 - 0x18) = camlUnix__184;
  *(undefined **)(unaff_R15 - 0x10) = &camlUnix__185;
  *(undefined8 *)(unaff_R15 - 8) = in_stack_00000010;
  caml_c_call(camlUnix__183);
  return;
}



undefined8 camlUnix__open_process_in_983(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong unaff_R15;
  
  puVar3 = (undefined8 *)caml_c_call(1);
  uVar1 = puVar3[1];
  uVar2 = *puVar3;
  uVar4 = caml_c_call();
  uVar5 = uVar4;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x20) = uVar2;
  *(undefined8 *)(unaff_R15 - 0x18) = 1;
  *(undefined8 *)(unaff_R15 - 0x10) = 0x401;
  *(undefined8 *)(unaff_R15 - 8) = uVar5;
  camlUnix__open_proc_975(1,uVar1);
  caml_c_call(uVar1);
  return uVar4;
}



undefined8 camlUnix__open_process_out_988(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong unaff_R15;
  
  puVar3 = (undefined8 *)caml_c_call(1);
  uVar1 = puVar3[1];
  uVar2 = *puVar3;
  uVar4 = caml_c_call();
  uVar5 = uVar4;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x20) = uVar1;
  *(undefined8 *)(unaff_R15 - 0x18) = 1;
  *(undefined8 *)(unaff_R15 - 0x10) = 0x402;
  *(undefined8 *)(unaff_R15 - 8) = uVar5;
  camlUnix__open_proc_975(uVar2,3);
  caml_c_call(uVar2);
  return uVar4;
}



void camlUnix__open_process_993(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong unaff_R15;
  ulong uVar9;
  
  puVar5 = (undefined8 *)caml_c_call(1);
  uVar1 = puVar5[1];
  uVar2 = *puVar5;
  puVar5 = (undefined8 *)caml_c_call(1);
  uVar3 = puVar5[1];
  uVar4 = *puVar5;
  uVar6 = caml_c_call(uVar2);
  uVar7 = caml_c_call(uVar3);
  uVar8 = uVar7;
  while( true ) {
    uVar9 = unaff_R15 - 0x48;
    if (caml_young_limit <= uVar9) break;
    caml_call_gc();
    unaff_R15 = uVar9;
  }
  *(undefined8 *)(unaff_R15 - 0x48) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x40) = uVar3;
  *(undefined8 *)(unaff_R15 - 0x38) = 1;
  *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x28) = uVar2;
  *(undefined8 **)(unaff_R15 - 0x20) = (undefined8 *)(unaff_R15 - 0x40);
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x10) = uVar6;
  *(undefined8 *)(unaff_R15 - 8) = uVar8;
  camlUnix__open_proc_975(uVar4,uVar1);
  caml_c_call(uVar4);
  caml_c_call(uVar1);
  while( true ) {
    if (caml_young_limit <= uVar9 - 0x18) break;
    caml_call_gc();
    uVar9 = uVar9 - 0x18;
  }
  *(undefined8 *)(uVar9 - 0x18) = 0x800;
  *(undefined8 *)(uVar9 - 0x10) = uVar6;
  *(undefined8 *)(uVar9 - 8) = uVar7;
  return;
}



void camlUnix__open_proc_full_1001
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = camlList__for_all_165();
  lVar2 = caml_c_call(1);
  if (lVar2 != 1) {
    camlHashtbl__add_102();
    return;
  }
  caml_c_call(param_2,1);
  caml_c_call(param_2);
  caml_c_call(param_3,3);
  caml_c_call(param_3);
  caml_c_call(param_4,5);
  caml_c_call(param_4);
  if (lVar1 == 1) {
    camlList__iter_102();
  }
  FUN_0040d1b8();
  camlPervasives__exit_350();
  return;
}



void FUN_0040d1b8(void)

{
  ulong unaff_R15;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xc00;
  *(char **)(unaff_R15 - 0x18) = camlUnix__180;
  *(undefined **)(unaff_R15 - 0x10) = &camlUnix__181;
  *(undefined8 *)(unaff_R15 - 8) = in_stack_00000028;
  caml_c_call(camlUnix__179,(char **)(unaff_R15 - 0x18),in_stack_00000030);
  return;
}



void camlUnix__open_process_full_1011(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong unaff_R15;
  ulong uVar12;
  
  puVar7 = (undefined8 *)caml_c_call(1);
  uVar1 = puVar7[1];
  uVar2 = *puVar7;
  puVar7 = (undefined8 *)caml_c_call(1);
  uVar3 = puVar7[1];
  uVar4 = *puVar7;
  puVar7 = (undefined8 *)caml_c_call(1);
  uVar5 = puVar7[1];
  uVar6 = *puVar7;
  uVar8 = caml_c_call(uVar2);
  uVar9 = caml_c_call(uVar3);
  uVar10 = caml_c_call(uVar6);
  uVar11 = uVar10;
  while( true ) {
    uVar12 = unaff_R15 - 0x68;
    if (caml_young_limit <= uVar12) break;
    caml_call_gc();
    unaff_R15 = uVar12;
  }
  *(undefined8 *)(unaff_R15 - 0x68) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x60) = uVar6;
  *(undefined8 *)(unaff_R15 - 0x58) = 1;
  *(undefined8 *)(unaff_R15 - 0x50) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x48) = uVar3;
  *(undefined8 **)(unaff_R15 - 0x40) = (undefined8 *)(unaff_R15 - 0x60);
  *(undefined8 *)(unaff_R15 - 0x38) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x30) = uVar2;
  *(undefined8 **)(unaff_R15 - 0x28) = (undefined8 *)(unaff_R15 - 0x48);
  *(undefined8 *)(unaff_R15 - 0x20) = 0xc03;
  *(undefined8 *)(unaff_R15 - 0x18) = uVar8;
  *(undefined8 *)(unaff_R15 - 0x10) = uVar9;
  *(undefined8 *)(unaff_R15 - 8) = uVar11;
  camlUnix__open_proc_full_1001((undefined8 *)(unaff_R15 - 0x18),uVar4,uVar1,uVar5);
  caml_c_call(uVar4);
  caml_c_call(uVar1);
  caml_c_call(uVar5);
  while( true ) {
    if (caml_young_limit <= uVar12 - 0x20) break;
    caml_call_gc();
    uVar12 = uVar12 - 0x20;
  }
  *(undefined8 *)(uVar12 - 0x20) = 0xc00;
  *(undefined8 *)(uVar12 - 0x18) = uVar8;
  *(undefined8 *)(uVar12 - 0x10) = uVar9;
  *(undefined8 *)(uVar12 - 8) = uVar10;
  return;
}



void camlUnix__find_proc_id_1023(void)

{
  undefined8 in_RAX;
  undefined **ppuVar1;
  ulong unaff_R15;
  
  ppuVar1 = (undefined **)FUN_0040d488();
  if ((undefined **)*ppuVar1 == &caml_exn_Not_found) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x28) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x28;
    }
    *(undefined8 *)(unaff_R15 - 0x28) = 0x1000;
    *(undefined8 *)(unaff_R15 - 0x20) = camlUnix;
    *(undefined8 *)(unaff_R15 - 0x18) = 7;
    *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
    *(undefined **)(unaff_R15 - 8) = &camlUnix__178;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined8 FUN_0040d488(void)

{
  undefined8 uVar1;
  
  uVar1 = camlHashtbl__find_121();
  camlHashtbl__remove_108();
  return uVar1;
}



void camlUnix__waitpid_non_intr_1027(void)

{
  long *plVar1;
  
  do {
    plVar1 = (long *)FUN_0040d51c();
    if ((*plVar1 != camlUnix) || ((plVar1[1] & 1U) == 0)) break;
  } while (plVar1[1] == 0x17);
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_0040d51c(void)

{
  caml_c_call(1);
  return;
}



undefined8 camlUnix__close_process_in_1029(void)

{
  undefined8 in_RAX;
  long lVar1;
  undefined8 uVar2;
  ulong unaff_R15;
  
  uVar2 = in_RAX;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x10) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x10;
  }
  *(undefined8 *)(unaff_R15 - 0x10) = 0x401;
  *(undefined8 *)(unaff_R15 - 8) = uVar2;
  camlUnix__find_proc_id_1023();
  caml_c_call(in_RAX);
  lVar1 = camlUnix__waitpid_non_intr_1027();
  return *(undefined8 *)(lVar1 + 8);
}



undefined8 camlUnix__close_process_out_1032(void)

{
  undefined8 in_RAX;
  long lVar1;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x10) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x10;
  }
  *(undefined8 *)(unaff_R15 - 0x10) = 0x402;
  *(undefined8 *)(unaff_R15 - 8) = in_RAX;
  camlUnix__find_proc_id_1023();
  camlPervasives__close_out_233();
  lVar1 = camlUnix__waitpid_non_intr_1027();
  return *(undefined8 *)(lVar1 + 8);
}



undefined8 camlUnix__close_process_1035(void)

{
  undefined8 in_RAX;
  undefined **ppuVar1;
  long lVar2;
  undefined8 unaff_RBX;
  undefined8 uVar3;
  ulong unaff_R15;
  
  uVar3 = in_RAX;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x18) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x10) = uVar3;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  camlUnix__find_proc_id_1023();
  caml_c_call(in_RAX);
  ppuVar1 = (undefined **)FUN_0040d6a0();
  if ((undefined **)*ppuVar1 != &caml_exn_Sys_error) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  lVar2 = camlUnix__waitpid_non_intr_1027();
  return *(undefined8 *)(lVar2 + 8);
}



undefined8 FUN_0040d6a0(void)

{
  long lVar1;
  
  camlPervasives__close_out_233();
  lVar1 = camlUnix__waitpid_non_intr_1027();
  return *(undefined8 *)(lVar1 + 8);
}



undefined8 camlUnix__close_process_full_1039(undefined8 param_1)

{
  undefined8 in_RAX;
  undefined **ppuVar1;
  long lVar2;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong unaff_R15;
  
  uVar3 = in_RAX;
  uVar4 = param_1;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    unaff_RBX = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xc03;
  *(undefined8 *)(unaff_R15 - 0x18) = uVar3;
  *(undefined8 *)(unaff_R15 - 0x10) = unaff_RBX;
  *(undefined8 *)(unaff_R15 - 8) = uVar4;
  camlUnix__find_proc_id_1023();
  caml_c_call(in_RAX);
  ppuVar1 = (undefined **)FUN_0040d760();
  if ((undefined **)*ppuVar1 != &caml_exn_Sys_error) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  caml_c_call(param_1);
  lVar2 = camlUnix__waitpid_non_intr_1027();
  return *(undefined8 *)(lVar2 + 8);
}



undefined8 FUN_0040d760(void)

{
  long lVar1;
  undefined8 in_stack_00000010;
  
  camlPervasives__close_out_233();
  caml_c_call(in_stack_00000010);
  lVar1 = camlUnix__waitpid_non_intr_1027();
  return *(undefined8 *)(lVar1 + 8);
}



void camlUnix__open_connection_1044(void)

{
  undefined8 uVar1;
  
  uVar1 = camlUnix__domain_of_sockaddr_555();
  uVar1 = caml_c_call(uVar1,1,1);
  FUN_0040d804();
  caml_c_call(uVar1);
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_0040d804(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong unaff_R15;
  undefined8 in_stack_00000010;
  
  caml_c_call();
  camlUnix__try_set_close_on_exec_394();
  uVar1 = caml_c_call(in_stack_00000010);
  uVar2 = caml_c_call(in_stack_00000010);
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x18) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x10) = uVar2;
  *(undefined8 *)(unaff_R15 - 8) = uVar1;
  return;
}



void camlUnix__shutdown_connection_1048(void)

{
  undefined8 uVar1;
  
  uVar1 = caml_c_call();
  caml_c_call(uVar1,3);
  return;
}



void camlUnix__accept_non_intr_1050(void)

{
  long *plVar1;
  
  do {
    plVar1 = (long *)FUN_0040d8fc();
    if ((*plVar1 != camlUnix) || ((plVar1[1] & 1U) == 0)) break;
  } while (plVar1[1] == 0x17);
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_0040d8fc(void)

{
  caml_c_call();
  return;
}



void camlUnix__establish_server_1052(void)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 unaff_RBX;
  
  uVar2 = camlUnix__domain_of_sockaddr_555();
  uVar2 = caml_c_call(uVar2,1,1);
  camlUnix__setsockopt_672(3);
  caml_c_call(uVar2,unaff_RBX);
  caml_c_call(uVar2,0xb);
  do {
    while( true ) {
      puVar3 = (undefined8 *)camlUnix__accept_non_intr_1050();
      uVar1 = *puVar3;
      lVar4 = caml_c_call(1);
      if (lVar4 == 1) break;
      caml_c_call(uVar1);
      camlUnix__waitpid_non_intr_1027();
    }
    lVar4 = caml_c_call(1);
    if (lVar4 != 1) {
      camlPervasives__exit_350();
    }
    caml_c_call(uVar2);
    camlUnix__try_set_close_on_exec_394();
    caml_c_call(uVar1);
    caml_c_call(uVar1);
    caml_apply2(in_RAX);
    camlPervasives__exit_350();
  } while( true );
}



undefined8 camlUnix__entry(void)

{
  undefined **ppuVar1;
  undefined8 *unaff_R15;
  
  DAT_006415d8 = &camlUnix__173;
  DAT_006415d0 = &camlUnix__172;
  DAT_006415c8 = &camlUnix__171;
  DAT_006415c0 = &camlUnix__170;
  DAT_006415b8 = &camlUnix__169;
  DAT_006415b0 = &camlUnix__168;
  DAT_006415a8 = &camlUnix__167;
  DAT_00641590 = &camlUnix__166;
  DAT_00641588 = &camlUnix__165;
  DAT_00641580 = &camlUnix__164;
  DAT_00641578 = &camlUnix__163;
  DAT_00641570 = &camlUnix__162;
  DAT_00641568 = &camlUnix__161;
  DAT_00641560 = &camlUnix__160;
  DAT_006414d8 = &camlUnix__159;
  DAT_006414d0 = &camlUnix__158;
  DAT_006414c8 = &camlUnix__157;
  DAT_006414c0 = &camlUnix__156;
  DAT_006414b8 = &camlUnix__155;
  DAT_006414b0 = &camlUnix__154;
  DAT_006414a8 = &camlUnix__153;
  DAT_006414a0 = &camlUnix__152;
  DAT_00641490 = &camlUnix__151;
  DAT_00641468 = &camlUnix__150;
  DAT_00641460 = &camlUnix__149;
  DAT_00641458 = &camlUnix__148;
  DAT_00641450 = &camlUnix__147;
  DAT_00641448 = &camlUnix__146;
  DAT_00641440 = &camlUnix__145;
  DAT_00641438 = &camlUnix__144;
  DAT_00641430 = &camlUnix__143;
  DAT_00641428 = &camlUnix__142;
  DAT_00641420 = &camlUnix__141;
  DAT_00641418 = &camlUnix__140;
  DAT_00641410 = &camlUnix__139;
  DAT_00641408 = &camlUnix__138;
  DAT_00641400 = &camlUnix__137;
  DAT_006413f8 = &camlUnix__136;
  DAT_006413f0 = &camlUnix__135;
  DAT_006413e8 = &camlUnix__134;
  DAT_006413e0 = &camlUnix__133;
  DAT_006413d8 = &camlUnix__132;
  DAT_006413d0 = &camlUnix__131;
  DAT_006413c8 = &camlUnix__130;
  DAT_006413c0 = &camlUnix__129;
  DAT_006413b8 = &camlUnix__128;
  DAT_006413b0 = &camlUnix__127;
  DAT_006413a8 = &camlUnix__126;
  DAT_00641398 = &camlUnix__125;
  DAT_00641390 = &camlUnix__124;
  DAT_00641388 = &camlUnix__123;
  DAT_00641380 = &camlUnix__122;
  DAT_00641378 = &camlUnix__121;
  DAT_00641370 = &camlUnix__120;
  DAT_00641368 = &camlUnix__119;
  DAT_00641360 = &camlUnix__118;
  DAT_00641308 = &camlUnix__117;
  DAT_00641300 = &camlUnix__116;
  DAT_006412f8 = &camlUnix__115;
  DAT_006412f0 = &camlUnix__114;
  DAT_006412e8 = &camlUnix__113;
  DAT_006412e0 = &camlUnix__112;
  DAT_006412d8 = &camlUnix__111;
  DAT_006412d0 = &camlUnix__110;
  DAT_006412c8 = &camlUnix__109;
  DAT_006412c0 = &camlUnix__108;
  DAT_006412b8 = &camlUnix__107;
  DAT_006412b0 = &camlUnix__106;
  DAT_006412a8 = &camlUnix__105;
  DAT_006412a0 = &camlUnix__104;
  DAT_00641298 = &camlUnix__103;
  DAT_00641290 = &camlUnix__102;
  DAT_00641288 = &camlUnix__101;
  DAT_00641280 = &camlUnix__100;
  DAT_00641278 = &camlUnix__99;
  DAT_00641270 = &camlUnix__98;
  DAT_00641268 = &camlUnix__97;
  DAT_00641260 = &camlUnix__96;
  DAT_00641258 = &camlUnix__95;
  DAT_00641250 = &camlUnix__94;
  DAT_00641248 = &camlUnix__93;
  DAT_00641240 = &camlUnix__92;
  DAT_00641230 = &camlUnix__91;
  DAT_00641228 = &camlUnix__90;
  DAT_00641220 = &camlUnix__89;
  DAT_00641218 = &camlUnix__88;
  DAT_00641210 = &camlUnix__87;
  DAT_00641208 = &camlUnix__86;
  DAT_00641200 = &camlUnix__85;
  DAT_006411f8 = &camlUnix__84;
  DAT_006411f0 = &camlUnix__83;
  DAT_006411e8 = &camlUnix__82;
  DAT_006411e0 = &camlUnix__81;
  DAT_006411c0 = &camlUnix__80;
  DAT_006411b8 = &camlUnix__79;
  DAT_00641198 = &camlUnix__78;
  DAT_00641190 = &camlUnix__77;
  DAT_00641188 = &camlUnix__76;
  DAT_00641178 = &camlUnix__75;
  DAT_00641170 = &camlUnix__74;
  DAT_00641168 = &camlUnix__73;
  DAT_00641160 = &camlUnix__72;
  DAT_00641158 = &camlUnix__71;
  DAT_00641150 = &camlUnix__70;
  DAT_00641148 = &camlUnix__69;
  DAT_00641140 = &camlUnix__68;
  DAT_00641138 = &camlUnix__67;
  DAT_00641130 = &camlUnix__66;
  DAT_00641120 = &camlUnix__65;
  caml_allocN();
  camlUnix = (char **)(unaff_R15 + 1);
  *unaff_R15 = 0x400;
  *camlUnix = camlUnix__64;
  unaff_R15[2] = 0x1000;
  unaff_R15[3] = camlUnix;
  unaff_R15[4] = 1;
  unaff_R15[5] = &camlUnix__62;
  unaff_R15[6] = &camlUnix__63;
  camlCallback__register_exception_62();
  DAT_00641128 = &camlUnix__60;
  DAT_006411a0 = 1;
  DAT_006411a8 = 3;
  DAT_006411b0 = 5;
  DAT_006411c8 = &camlUnix__59;
  DAT_006411d0 = &camlUnix__58;
  DAT_006411d8 = &camlUnix__57;
  caml_allocN();
  DAT_00641238 = (undefined **)(unaff_R15 + 1);
  *unaff_R15 = 0x1800;
  *DAT_00641238 = (undefined *)&camlUnix__50;
  unaff_R15[2] = &camlUnix__51;
  unaff_R15[3] = &camlUnix__52;
  unaff_R15[4] = &camlUnix__53;
  unaff_R15[5] = &camlUnix__54;
  unaff_R15[6] = &camlUnix__55;
  DAT_006415e0 = &camlUnix__49;
  DAT_006413a0 = &camlUnix__48;
  DAT_006415e8 = &camlUnix__47;
  DAT_00641470 = caml_c_call(camlUnix__46);
  DAT_00641478 = caml_c_call(camlUnix__45);
  ppuVar1 = (undefined **)FUN_0040e55c();
  if ((undefined **)*ppuVar1 != &caml_exn_Failure) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  DAT_00641480 = DAT_00641470;
  ppuVar1 = (undefined **)FUN_0040e5b1();
  if ((undefined **)*ppuVar1 == &caml_exn_Failure) {
    DAT_00641488 = DAT_00641478;
    DAT_00641498 = &camlUnix__42;
    DAT_006414e0 = &camlUnix__41;
    DAT_006414e8 = &camlUnix__40;
    DAT_006414f0 = &camlUnix__39;
    DAT_006414f8 = &camlUnix__38;
    caml_allocN();
    DAT_006415f0 = unaff_R15 + 1;
    *unaff_R15 = 0x1c00;
    *DAT_006415f0 = 1;
    unaff_R15[2] = 3;
    unaff_R15[3] = 5;
    unaff_R15[4] = 7;
    unaff_R15[5] = 9;
    unaff_R15[6] = &camlUnix__36;
    unaff_R15[7] = &camlUnix__37;
    DAT_00641500 = &camlUnix__35;
    DAT_00641508 = &camlUnix__34;
    DAT_00641510 = &camlUnix__33;
    DAT_00641518 = &camlUnix__32;
    DAT_00641520 = &camlUnix__31;
    DAT_00641528 = &camlUnix__30;
    DAT_00641530 = &camlUnix__29;
    DAT_00641538 = &camlUnix__28;
    DAT_00641540 = &camlUnix__27;
    DAT_006415f8 = &camlUnix__26;
    DAT_00641598 = &camlUnix__25;
    DAT_00641600 = &camlUnix__24;
    DAT_006415a0 = &camlUnix__23;
    DAT_00641180 = &camlUnix__22;
    DAT_00641608 = &camlUnix__21;
    DAT_00641610 = &camlUnix__20;
    DAT_00641618 = &camlUnix__19;
    DAT_00641310 = &camlUnix__18;
    DAT_00641318 = &camlUnix__17;
    DAT_00641620 = camlHashtbl__create_79();
    DAT_00641320 = &camlUnix__15;
    DAT_00641328 = &camlUnix__14;
    DAT_00641330 = &camlUnix__13;
    DAT_00641338 = &camlUnix__11;
    DAT_00641340 = &camlUnix__8;
    DAT_00641348 = &camlUnix__7;
    DAT_00641350 = &camlUnix__6;
    DAT_00641358 = &camlUnix__5;
    DAT_00641548 = &camlUnix__4;
    DAT_00641550 = &camlUnix__3;
    DAT_00641558 = &camlUnix__1;
    DAT_00641628 = &camlUnix__16;
    DAT_00641630 = &camlUnix__12;
    DAT_00641638 = &camlUnix__10;
    DAT_00641640 = &camlUnix__9;
    DAT_00641648 = &camlUnix__2;
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined8 FUN_0040e55c(void)

{
  undefined **ppuVar1;
  undefined8 *unaff_R15;
  
  DAT_00641480 = caml_c_call(&camlUnix__44);
  ppuVar1 = (undefined **)FUN_0040e5b1();
  if ((undefined **)*ppuVar1 == &caml_exn_Failure) {
    DAT_00641488 = DAT_00641478;
    DAT_00641498 = &camlUnix__42;
    DAT_006414e0 = &camlUnix__41;
    DAT_006414e8 = &camlUnix__40;
    DAT_006414f0 = &camlUnix__39;
    DAT_006414f8 = &camlUnix__38;
    caml_allocN();
    DAT_006415f0 = unaff_R15 + 1;
    *unaff_R15 = 0x1c00;
    *DAT_006415f0 = 1;
    unaff_R15[2] = 3;
    unaff_R15[3] = 5;
    unaff_R15[4] = 7;
    unaff_R15[5] = 9;
    unaff_R15[6] = &camlUnix__36;
    unaff_R15[7] = &camlUnix__37;
    DAT_00641500 = &camlUnix__35;
    DAT_00641508 = &camlUnix__34;
    DAT_00641510 = &camlUnix__33;
    DAT_00641518 = &camlUnix__32;
    DAT_00641520 = &camlUnix__31;
    DAT_00641528 = &camlUnix__30;
    DAT_00641530 = &camlUnix__29;
    DAT_00641538 = &camlUnix__28;
    DAT_00641540 = &camlUnix__27;
    DAT_006415f8 = &camlUnix__26;
    DAT_00641598 = &camlUnix__25;
    DAT_00641600 = &camlUnix__24;
    DAT_006415a0 = &camlUnix__23;
    DAT_00641180 = &camlUnix__22;
    DAT_00641608 = &camlUnix__21;
    DAT_00641610 = &camlUnix__20;
    DAT_00641618 = &camlUnix__19;
    DAT_00641310 = &camlUnix__18;
    DAT_00641318 = &camlUnix__17;
    DAT_00641620 = camlHashtbl__create_79();
    DAT_00641320 = &camlUnix__15;
    DAT_00641328 = &camlUnix__14;
    DAT_00641330 = &camlUnix__13;
    DAT_00641338 = &camlUnix__11;
    DAT_00641340 = &camlUnix__8;
    DAT_00641348 = &camlUnix__7;
    DAT_00641350 = &camlUnix__6;
    DAT_00641358 = &camlUnix__5;
    DAT_00641548 = &camlUnix__4;
    DAT_00641550 = &camlUnix__3;
    DAT_00641558 = &camlUnix__1;
    DAT_00641628 = &camlUnix__16;
    DAT_00641630 = &camlUnix__12;
    DAT_00641638 = &camlUnix__10;
    DAT_00641640 = &camlUnix__9;
    DAT_00641648 = &camlUnix__2;
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined8 FUN_0040e5b1(void)

{
  undefined8 *unaff_R15;
  
  DAT_00641488 = caml_c_call(&camlUnix__43);
  DAT_00641498 = &camlUnix__42;
  DAT_006414e0 = &camlUnix__41;
  DAT_006414e8 = &camlUnix__40;
  DAT_006414f0 = &camlUnix__39;
  DAT_006414f8 = &camlUnix__38;
  caml_allocN();
  DAT_006415f0 = unaff_R15 + 1;
  *unaff_R15 = 0x1c00;
  *DAT_006415f0 = 1;
  unaff_R15[2] = 3;
  unaff_R15[3] = 5;
  unaff_R15[4] = 7;
  unaff_R15[5] = 9;
  unaff_R15[6] = &camlUnix__36;
  unaff_R15[7] = &camlUnix__37;
  DAT_00641500 = &camlUnix__35;
  DAT_00641508 = &camlUnix__34;
  DAT_00641510 = &camlUnix__33;
  DAT_00641518 = &camlUnix__32;
  DAT_00641520 = &camlUnix__31;
  DAT_00641528 = &camlUnix__30;
  DAT_00641530 = &camlUnix__29;
  DAT_00641538 = &camlUnix__28;
  DAT_00641540 = &camlUnix__27;
  DAT_006415f8 = &camlUnix__26;
  DAT_00641598 = &camlUnix__25;
  DAT_00641600 = &camlUnix__24;
  DAT_006415a0 = &camlUnix__23;
  DAT_00641180 = &camlUnix__22;
  DAT_00641608 = &camlUnix__21;
  DAT_00641610 = &camlUnix__20;
  DAT_00641618 = &camlUnix__19;
  DAT_00641310 = &camlUnix__18;
  DAT_00641318 = &camlUnix__17;
  DAT_00641620 = camlHashtbl__create_79();
  DAT_00641320 = &camlUnix__15;
  DAT_00641328 = &camlUnix__14;
  DAT_00641330 = &camlUnix__13;
  DAT_00641338 = &camlUnix__11;
  DAT_00641340 = &camlUnix__8;
  DAT_00641348 = &camlUnix__7;
  DAT_00641350 = &camlUnix__6;
  DAT_00641358 = &camlUnix__5;
  DAT_00641548 = &camlUnix__4;
  DAT_00641550 = &camlUnix__3;
  DAT_00641558 = &camlUnix__1;
  DAT_00641628 = &camlUnix__16;
  DAT_00641630 = &camlUnix__12;
  DAT_00641638 = &camlUnix__10;
  DAT_00641640 = &camlUnix__9;
  DAT_00641648 = &camlUnix__2;
  return 1;
}



undefined8 camlUnixLabels__entry(void)

{
  camlUnixLabels = camlUnix;
  DAT_00644e98 = DAT_00641120;
  DAT_00644ea0 = DAT_00641128;
  DAT_00644ea8 = DAT_00641130;
  DAT_00644eb0 = DAT_00641138;
  DAT_00644eb8 = DAT_00641140;
  DAT_00644ec0 = DAT_00641148;
  DAT_00644ec8 = DAT_00641150;
  DAT_00644ed0 = DAT_00641158;
  DAT_00644ed8 = DAT_00641160;
  DAT_00644ee0 = DAT_00641168;
  DAT_00644ee8 = DAT_00641170;
  DAT_00644ef0 = DAT_00641178;
  DAT_00644ef8 = DAT_00641180;
  DAT_00644f00 = DAT_00641188;
  DAT_00644f08 = DAT_00641190;
  DAT_00644f10 = DAT_00641198;
  DAT_00644f18 = 1;
  DAT_00644f20 = 3;
  DAT_00644f28 = 5;
  DAT_00644f30 = DAT_006411b8;
  DAT_00644f38 = DAT_006411c0;
  DAT_00644f40 = DAT_006411c8;
  DAT_00644f48 = DAT_006411d0;
  DAT_00644f50 = DAT_006411d8;
  DAT_00644f58 = DAT_006411e0;
  DAT_00644f60 = DAT_006411e8;
  DAT_00644f68 = DAT_006411f0;
  DAT_00644f70 = DAT_006411f8;
  DAT_00644f78 = DAT_00641200;
  DAT_00644f80 = DAT_00641208;
  DAT_00644f88 = DAT_00641210;
  DAT_00644f90 = DAT_00641218;
  DAT_00644f98 = DAT_00641220;
  DAT_00644fa0 = DAT_00641228;
  DAT_00644fa8 = DAT_00641230;
  DAT_00644fb0 = DAT_00641238;
  DAT_00644fb8 = DAT_00641240;
  DAT_00644fc0 = DAT_00641248;
  DAT_00644fc8 = DAT_00641250;
  DAT_00644fd0 = DAT_00641258;
  DAT_00644fd8 = DAT_00641260;
  DAT_00644fe0 = DAT_00641268;
  DAT_00644fe8 = DAT_00641270;
  DAT_00644ff0 = DAT_00641278;
  DAT_00644ff8 = DAT_00641280;
  DAT_00645000 = DAT_00641288;
  DAT_00645008 = DAT_00641290;
  DAT_00645010 = DAT_00641298;
  DAT_00645018 = DAT_006412a0;
  DAT_00645020 = DAT_006412a8;
  DAT_00645028 = DAT_006412b0;
  DAT_00645030 = DAT_006412b8;
  DAT_00645038 = DAT_006412c0;
  DAT_00645040 = DAT_006412c8;
  DAT_00645048 = DAT_006412d0;
  DAT_00645050 = DAT_006412d8;
  DAT_00645058 = DAT_006412e0;
  DAT_00645060 = DAT_006412e8;
  DAT_00645068 = DAT_006412f0;
  DAT_00645070 = DAT_006412f8;
  DAT_00645078 = DAT_00641300;
  DAT_00645080 = DAT_00641308;
  DAT_00645088 = DAT_00641310;
  DAT_00645090 = DAT_00641318;
  DAT_00645098 = DAT_00641320;
  DAT_006450a0 = DAT_00641328;
  DAT_006450a8 = DAT_00641330;
  DAT_006450b0 = DAT_00641338;
  DAT_006450b8 = DAT_00641340;
  DAT_006450c0 = DAT_00641348;
  DAT_006450c8 = DAT_00641350;
  DAT_006450d0 = DAT_00641358;
  DAT_006450d8 = DAT_00641360;
  DAT_006450e0 = DAT_00641368;
  DAT_006450e8 = DAT_00641370;
  DAT_006450f0 = DAT_00641378;
  DAT_006450f8 = DAT_00641380;
  DAT_00645100 = DAT_00641388;
  DAT_00645108 = DAT_00641390;
  DAT_00645110 = DAT_00641398;
  DAT_00645118 = DAT_006413a0;
  DAT_00645120 = DAT_006413a8;
  DAT_00645128 = DAT_006413b0;
  DAT_00645130 = DAT_006413b8;
  DAT_00645138 = DAT_006413c0;
  DAT_00645140 = DAT_006413c8;
  DAT_00645148 = DAT_006413d0;
  DAT_00645150 = DAT_006413d8;
  DAT_00645158 = DAT_006413e0;
  DAT_00645160 = DAT_006413e8;
  DAT_00645168 = DAT_006413f0;
  DAT_00645170 = DAT_006413f8;
  DAT_00645178 = DAT_00641400;
  DAT_00645180 = DAT_00641408;
  DAT_00645188 = DAT_00641410;
  DAT_00645190 = DAT_00641418;
  DAT_00645198 = DAT_00641420;
  DAT_006451a0 = DAT_00641428;
  DAT_006451a8 = DAT_00641430;
  DAT_006451b0 = DAT_00641438;
  DAT_006451b8 = DAT_00641440;
  DAT_006451c0 = DAT_00641448;
  DAT_006451c8 = DAT_00641450;
  DAT_006451d0 = DAT_00641458;
  DAT_006451d8 = DAT_00641460;
  DAT_006451e0 = DAT_00641468;
  DAT_006451e8 = DAT_00641470;
  DAT_006451f0 = DAT_00641478;
  DAT_006451f8 = DAT_00641480;
  DAT_00645200 = DAT_00641488;
  DAT_00645208 = DAT_00641490;
  DAT_00645210 = DAT_00641498;
  DAT_00645218 = DAT_006414a0;
  DAT_00645220 = DAT_006414a8;
  DAT_00645228 = DAT_006414b0;
  DAT_00645230 = DAT_006414b8;
  DAT_00645238 = DAT_006414c0;
  DAT_00645240 = DAT_006414c8;
  DAT_00645248 = DAT_006414d0;
  DAT_00645250 = DAT_006414d8;
  DAT_00645258 = DAT_006414e0;
  DAT_00645260 = DAT_006414e8;
  DAT_00645268 = DAT_006414f0;
  DAT_00645270 = DAT_006414f8;
  DAT_00645278 = DAT_00641500;
  DAT_00645280 = DAT_00641508;
  DAT_00645288 = DAT_00641510;
  DAT_00645290 = DAT_00641518;
  DAT_00645298 = DAT_00641520;
  DAT_006452a0 = DAT_00641528;
  DAT_006452a8 = DAT_00641530;
  DAT_006452b0 = DAT_00641538;
  DAT_006452b8 = DAT_00641540;
  DAT_006452c0 = DAT_00641548;
  DAT_006452c8 = DAT_00641550;
  DAT_006452d0 = DAT_00641558;
  DAT_006452d8 = DAT_00641560;
  DAT_006452e0 = DAT_00641568;
  DAT_006452e8 = DAT_00641570;
  DAT_006452f0 = DAT_00641578;
  DAT_006452f8 = DAT_00641580;
  DAT_00645300 = DAT_00641588;
  DAT_00645308 = DAT_00641590;
  DAT_00645310 = DAT_00641598;
  DAT_00645318 = DAT_006415a0;
  DAT_00645320 = DAT_006415a8;
  DAT_00645328 = DAT_006415b0;
  DAT_00645330 = DAT_006415b8;
  DAT_00645338 = DAT_006415c0;
  DAT_00645340 = DAT_006415c8;
  DAT_00645348 = DAT_006415d0;
  DAT_00645350 = DAT_006415d8;
  return 1;
}



undefined8 camlPervasives__loop_162(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long in_RAX;
  undefined8 uVar4;
  long unaff_RBX;
  
  if (*(long *)(unaff_RBX + 0x18) <= in_RAX) {
    uVar4 = camlPervasives___5e_136(&camlPervasives__103);
    return uVar4;
  }
  lVar3 = *(long *)(unaff_RBX + 0x10);
  lVar1 = (*(ulong *)(lVar3 + -8) >> 10) * 8 + -1;
  if (lVar1 - (ulong)*(byte *)(lVar3 + lVar1) <= (ulong)(in_RAX >> 1)) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  uVar2 = (ulong)*(byte *)(lVar3 + (in_RAX >> 1)) * 2 + 1;
  if (uVar2 < 0x61) {
    if (uVar2 == 0x5b) goto LAB_0040f658;
  }
  else {
    if (uVar2 < 0x75) {
LAB_0040f658:
      uVar4 = camlPervasives__loop_162();
      return uVar4;
    }
  }
  return *(undefined8 *)(unaff_RBX + 0x10);
}



undefined8 camlPervasives__iter_210(void)

{
  undefined8 *puVar1;
  undefined8 *in_RAX;
  
  while (in_RAX != (undefined8 *)0x1) {
    puVar1 = (undefined8 *)in_RAX[1];
    FUN_0040f68c(*in_RAX);
    in_RAX = puVar1;
  }
  return 1;
}



undefined8 FUN_0040f68c(void)

{
  undefined8 *puVar1;
  undefined8 *in_stack_00000008;
  
  caml_c_call();
  while (in_stack_00000008 != (undefined8 *)0x1) {
    puVar1 = (undefined8 *)in_stack_00000008[1];
    FUN_0040f68c(*in_stack_00000008);
    in_stack_00000008 = puVar1;
  }
  return 1;
}



undefined8 camlPervasives__build_result_267(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 in_RAX;
  long unaff_RBX;
  
  while (param_1 != (long *)0x1) {
    plVar2 = (long *)param_1[1];
    lVar3 = *param_1;
    lVar1 = (*(ulong *)(lVar3 + -8) >> 10) * 8 + -1;
    lVar1 = (lVar1 - (ulong)*(byte *)(lVar3 + lVar1)) * 2 + 1;
    caml_blit_string(lVar3,1,in_RAX,(unaff_RBX - lVar1) + 1,lVar1);
    unaff_RBX = (unaff_RBX - lVar1) + 1;
    param_1 = plVar2;
  }
  return in_RAX;
}



undefined8 camlPervasives__scan_273(long param_1)

{
  undefined8 *in_RAX;
  long lVar1;
  undefined8 uVar2;
  long unaff_RBX;
  ulong unaff_R15;
  ulong uVar3;
  
  while( true ) {
    lVar1 = caml_c_call(*(undefined8 *)(param_1 + 0x18));
    if (lVar1 == 1) break;
    if (1 < lVar1) {
      uVar2 = caml_c_call(lVar1 + -2);
      caml_c_call(*(undefined8 *)(param_1 + 0x18),uVar2,1,lVar1 + -2);
      caml_c_call(*(undefined8 *)(param_1 + 0x18));
      if (in_RAX != (undefined8 *)0x1) {
        lVar1 = unaff_RBX + -3 + lVar1;
        while( true ) {
          if (caml_young_limit <= unaff_R15 - 0x18) break;
          caml_call_gc();
          unaff_R15 = unaff_R15 - 0x18;
        }
        *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x10) = uVar2;
        *(undefined8 **)(unaff_R15 - 8) = in_RAX;
        caml_c_call(lVar1);
        uVar2 = camlPervasives__build_result_267((undefined8 *)(unaff_R15 - 0x10));
        return uVar2;
      }
      return uVar2;
    }
    uVar2 = caml_c_call(2 - lVar1);
    caml_c_call(*(undefined8 *)(param_1 + 0x18),uVar2,1,2 - lVar1);
    uVar3 = unaff_R15;
    while( true ) {
      unaff_R15 = uVar3 - 0x18;
      if (caml_young_limit <= unaff_R15) break;
      caml_call_gc();
      uVar3 = unaff_R15;
    }
    *(undefined8 *)(uVar3 - 0x18) = 0x800;
    *(undefined8 *)(uVar3 - 0x10) = uVar2;
    *(undefined8 **)(uVar3 - 8) = in_RAX;
    unaff_RBX = (unaff_RBX - lVar1) + 1;
    in_RAX = (undefined8 *)(uVar3 - 0x10);
  }
  if (in_RAX != (undefined8 *)0x1) {
    caml_c_call(unaff_RBX);
    uVar2 = camlPervasives__build_result_267(in_RAX);
    return uVar2;
  }
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x10) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x10;
  }
  *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
  *(undefined ***)(unaff_R15 - 8) = &caml_exn_End_of_file;
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void camlPervasives__fun_524(void)

{
  long unaff_RBX;
  
  (***(code ***)(unaff_RBX + 0x10))(**(code ***)(unaff_RBX + 0x10));
                    // WARNING: Could not recover jumptable at 0x0040f97e. Too many branches
                    // WARNING: Treating indirect jump as call
  (***(code ***)(unaff_RBX + 0x18))(**(code ***)(unaff_RBX + 0x18));
  return;
}



void camlPervasives__fun_416(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_418(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_420(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_422(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_424(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_426(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_428(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_430(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_432(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_434(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_436(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_438(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_440(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_442(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_444(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_446(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_448(void)

{
  caml_c_call();
  return;
}



void camlPervasives__failwith_38(void)

{
  undefined8 in_RAX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x18) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined ***)(unaff_R15 - 0x10) = &caml_exn_Failure;
  *(undefined8 *)(unaff_R15 - 8) = in_RAX;
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void camlPervasives__invalid_arg_40(void)

{
  undefined8 in_RAX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x18) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined ***)(unaff_R15 - 0x10) = &caml_exn_Invalid_argument;
  *(undefined8 *)(unaff_R15 - 8) = in_RAX;
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined8 camlPervasives__min_50(void)

{
  undefined8 in_RAX;
  long lVar1;
  undefined8 unaff_RBX;
  
  lVar1 = caml_c_call();
  if (lVar1 != 1) {
    return in_RAX;
  }
  return unaff_RBX;
}



undefined8 camlPervasives__max_53(void)

{
  undefined8 in_RAX;
  long lVar1;
  undefined8 unaff_RBX;
  
  lVar1 = caml_c_call();
  if (lVar1 != 1) {
    return in_RAX;
  }
  return unaff_RBX;
}



long camlPervasives__abs_71(void)

{
  long in_RAX;
  
  if (0 < in_RAX) {
    return in_RAX;
  }
  return 2 - in_RAX;
}



ulong camlPervasives__lnot_76(void)

{
  ulong in_RAX;
  
  return in_RAX ^ 0xffffffffffffffff | 1;
}



undefined8 camlPervasives___5e_136(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long in_RAX;
  undefined8 uVar4;
  long unaff_RBX;
  
  lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  lVar3 = (lVar1 - (ulong)*(byte *)(in_RAX + lVar1)) * 2;
  lVar2 = lVar3 + 1;
  lVar1 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
  lVar1 = (lVar1 - (ulong)*(byte *)(unaff_RBX + lVar1)) * 2 + 1;
  uVar4 = caml_c_call(lVar3 + lVar1);
  caml_blit_string(in_RAX,1,uVar4,1,lVar2);
  caml_blit_string(unaff_RBX,1,uVar4,lVar2,lVar1);
  return uVar4;
}



void camlPervasives__char_of_int_144(void)

{
  long in_RAX;
  
  if ((0 < in_RAX) && (in_RAX < 0x200)) {
    return;
  }
  camlPervasives__invalid_arg_40();
  return;
}



char * camlPervasives__string_of_bool_151(void)

{
  long in_RAX;
  
  if (in_RAX != 1) {
    return &camlPervasives__101;
  }
  return camlPervasives__100;
}



undefined8 camlPervasives__bool_of_string_153(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = caml_string_notequal();
  if (lVar1 == 1) {
    return 1;
  }
  lVar1 = caml_string_notequal();
  if (lVar1 != 1) {
    uVar2 = camlPervasives__invalid_arg_40();
    return uVar2;
  }
  return 3;
}



void camlPervasives__string_of_int_154(void)

{
  caml_c_call(&camlPervasives__96);
  return;
}



void camlPervasives__valid_float_lexem_159(void)

{
  long in_RAX;
  long lVar1;
  ulong unaff_R15;
  
  lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  lVar1 = (lVar1 - (ulong)*(byte *)(in_RAX + lVar1)) * 2 + 1;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = camlPervasives__loop_162;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(long *)(unaff_R15 - 0x10) = in_RAX;
  *(long *)(unaff_R15 - 8) = lVar1;
  camlPervasives__loop_162();
  return;
}



void camlPervasives__string_of_float_164(void)

{
  caml_c_call(camlPervasives__95);
  camlPervasives__valid_float_lexem_159();
  return;
}



void camlPervasives___40_167(void)

{
  undefined8 uVar1;
  undefined8 *in_RAX;
  undefined8 uVar2;
  ulong unaff_R15;
  
  if (in_RAX != (undefined8 *)0x1) {
    uVar1 = *in_RAX;
    uVar2 = camlPervasives___40_167(uVar1,in_RAX[1]);
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x18) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x18;
    }
    *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
    *(undefined8 *)(unaff_R15 - 0x10) = uVar1;
    *(undefined8 *)(unaff_R15 - 8) = uVar2;
    return;
  }
  return;
}



void camlPervasives__open_out_gen_199(void)

{
  undefined8 uVar1;
  
  uVar1 = caml_c_call();
  caml_c_call(uVar1);
  return;
}



void camlPervasives__open_out_203(void)

{
  camlPervasives__open_out_gen_199();
  return;
}



void camlPervasives__open_out_bin_205(void)

{
  camlPervasives__open_out_gen_199();
  return;
}



void camlPervasives__flush_all_209(void)

{
  caml_c_call(1);
  camlPervasives__iter_210();
  return;
}



void camlPervasives__output_string_215(void)

{
  caml_c_call();
  return;
}



void camlPervasives__output_218(long param_1,long param_2)

{
  long lVar1;
  long unaff_RBX;
  
  if ((0 < param_1) && (0 < param_2)) {
    lVar1 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
    if (param_1 <= (long)(((lVar1 - (ulong)*(byte *)(unaff_RBX + lVar1)) * 2 - param_2) + 2)) {
      caml_c_call();
      return;
    }
  }
  camlPervasives__invalid_arg_40();
  return;
}



void camlPervasives__output_value_226(void)

{
  caml_c_call();
  return;
}



void camlPervasives__close_out_233(void)

{
  undefined8 in_RAX;
  
  caml_c_call();
  caml_c_call(in_RAX);
  return;
}



undefined8 camlPervasives__close_out_noerr_235(void)

{
  FUN_00410110();
  FUN_0041013c();
  return 1;
}



undefined8 FUN_00410110(void)

{
  caml_c_call();
  FUN_0041013c();
  return 1;
}



void FUN_0041013c(void)

{
  undefined8 in_stack_00000008;
  
  caml_c_call(in_stack_00000008);
  return;
}



void camlPervasives__open_in_gen_238(void)

{
  undefined8 uVar1;
  
  uVar1 = caml_c_call();
  caml_c_call(uVar1);
  return;
}



void camlPervasives__open_in_242(void)

{
  camlPervasives__open_in_gen_238();
  return;
}



void camlPervasives__open_in_bin_244(void)

{
  camlPervasives__open_in_gen_238();
  return;
}



void camlPervasives__input_248(long param_1,long param_2)

{
  long lVar1;
  long unaff_RBX;
  
  if ((0 < param_1) && (0 < param_2)) {
    lVar1 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
    if (param_1 <= (long)(((lVar1 - (ulong)*(byte *)(unaff_RBX + lVar1)) * 2 - param_2) + 2)) {
      caml_c_call();
      return;
    }
  }
  camlPervasives__invalid_arg_40();
  return;
}



undefined8 camlPervasives__unsafe_really_input_253(undefined8 param_1,long param_2)

{
  undefined8 in_RAX;
  long lVar1;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (param_2 < 2) {
      return 1;
    }
    lVar1 = caml_c_call(in_RAX,unaff_RBX);
    if (lVar1 == 1) break;
    param_2 = (param_2 - lVar1) + 1;
  }
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x10) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x10;
  }
  *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
  *(undefined ***)(unaff_R15 - 8) = &caml_exn_End_of_file;
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void camlPervasives__really_input_259(long param_1,long param_2)

{
  long lVar1;
  long unaff_RBX;
  
  if ((0 < param_1) && (0 < param_2)) {
    lVar1 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
    if (param_1 <= (long)(((lVar1 - (ulong)*(byte *)(unaff_RBX + lVar1)) * 2 - param_2) + 2)) {
      camlPervasives__unsafe_really_input_253();
      return;
    }
  }
  camlPervasives__invalid_arg_40();
  return;
}



void camlPervasives__input_line_265(void)

{
  undefined8 in_RAX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x30) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x30;
  }
  *(undefined8 *)(unaff_R15 - 0x30) = 0x14f7;
  *(code **)(unaff_R15 - 0x28) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x20) = 5;
  *(code **)(unaff_R15 - 0x18) = camlPervasives__scan_273;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined ***)(unaff_R15 - 8) = &camlPervasives__86;
  camlPervasives__scan_273();
  return;
}



undefined8 camlPervasives__close_in_noerr_287(void)

{
  FUN_004103b8();
  return 1;
}



void FUN_004103b8(void)

{
  caml_c_call();
  return;
}



void camlPervasives__print_char_290(void)

{
  caml_c_call(DAT_00645428);
  return;
}



void camlPervasives__print_string_292(void)

{
  camlPervasives__output_string_215();
  return;
}



void camlPervasives__print_int_294(void)

{
  camlPervasives__string_of_int_154();
  camlPervasives__output_string_215();
  return;
}



void camlPervasives__print_float_296(void)

{
  camlPervasives__string_of_float_164();
  camlPervasives__output_string_215();
  return;
}



void camlPervasives__print_endline_298(void)

{
  camlPervasives__output_string_215();
  caml_c_call(DAT_00645428,0x15);
  caml_c_call(DAT_00645428);
  return;
}



void camlPervasives__print_newline_300(void)

{
  caml_c_call(DAT_00645428,0x15);
  caml_c_call(DAT_00645428);
  return;
}



void camlPervasives__prerr_char_301(void)

{
  caml_c_call(DAT_00645430);
  return;
}



void camlPervasives__prerr_string_303(void)

{
  camlPervasives__output_string_215();
  return;
}



void camlPervasives__prerr_int_305(void)

{
  camlPervasives__string_of_int_154();
  camlPervasives__output_string_215();
  return;
}



void camlPervasives__prerr_float_307(void)

{
  camlPervasives__string_of_float_164();
  camlPervasives__output_string_215();
  return;
}



void camlPervasives__prerr_endline_309(void)

{
  camlPervasives__output_string_215();
  caml_c_call(DAT_00645430,0x15);
  caml_c_call(DAT_00645430);
  return;
}



void camlPervasives__prerr_newline_311(void)

{
  caml_c_call(DAT_00645430,0x15);
  caml_c_call(DAT_00645430);
  return;
}



void camlPervasives__read_line_312(void)

{
  caml_c_call(DAT_00645428);
  camlPervasives__input_line_265();
  return;
}



void camlPervasives__read_int_313(void)

{
  undefined8 uVar1;
  
  uVar1 = camlPervasives__read_line_312();
  caml_c_call(uVar1);
  return;
}



void camlPervasives__read_float_314(void)

{
  undefined8 uVar1;
  
  uVar1 = camlPervasives__read_line_312();
  caml_c_call(uVar1);
  return;
}



void camlPervasives__fun_519(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_517(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_515(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_513(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_511(void)

{
  caml_c_call();
  return;
}



void camlPervasives__fun_509(void)

{
  caml_c_call();
  return;
}



void camlPervasives___5e_5e_336(void)

{
  camlPervasives___5e_136();
  camlPervasives___5e_136();
  return;
}



undefined8 camlPervasives__string_of_format_339(void)

{
  long lVar1;
  byte bVar2;
  long in_RAX;
  undefined8 uVar3;
  
  lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  bVar2 = *(byte *)(in_RAX + lVar1);
  uVar3 = caml_c_call();
  caml_blit_string(in_RAX,1,uVar3,1,(lVar1 - (ulong)bVar2) * 2 + 1);
  return uVar3;
}



undefined8 camlPervasives__at_exit_346(void)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  ulong unaff_R15;
  
  uVar1 = *DAT_00645600;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = camlPervasives__fun_524;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = uVar1;
  caml_modify(DAT_00645600);
  return 1;
}



void camlPervasives__do_at_exit_349(void)

{
                    // WARNING: Could not recover jumptable at 0x0041093b. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)*DAT_00645600)(*(code **)*DAT_00645600);
  return;
}



void camlPervasives__exit_350(void)

{
  undefined8 in_RAX;
  
  (**(code **)*DAT_00645600)(*(code **)*DAT_00645600);
  caml_c_call(in_RAX);
  return;
}



undefined8 camlPervasives__entry(void)

{
  undefined8 *unaff_R15;
  
  DAT_006455b0 = &camlPervasives__84;
  DAT_006455a0 = &camlPervasives__83;
  DAT_00645598 = &camlPervasives__82;
  DAT_00645590 = &camlPervasives__81;
  DAT_00645588 = &camlPervasives__80;
  DAT_00645580 = &camlPervasives__79;
  DAT_00645578 = &camlPervasives__78;
  DAT_00645570 = &camlPervasives__77;
  DAT_00645550 = &camlPervasives__76;
  DAT_00645530 = &camlPervasives__75;
  DAT_00645518 = &camlPervasives__74;
  DAT_00645510 = &camlPervasives__73;
  DAT_00645508 = &camlPervasives__72;
  DAT_006454f8 = &camlPervasives__71;
  DAT_006454f0 = &camlPervasives__70;
  DAT_006454d8 = &camlPervasives__69;
  DAT_006454c8 = &camlPervasives__68;
  DAT_00645378 = &camlPervasives__67;
  camlPervasives = &camlPervasives__66;
  caml_alloc1();
  DAT_00645380 = (char **)(unaff_R15 + 1);
  *unaff_R15 = 0x400;
  *DAT_00645380 = camlPervasives__65;
  DAT_00645388 = &camlPervasives__64;
  DAT_00645390 = &camlPervasives__63;
  DAT_00645398 = &camlPervasives__62;
  DAT_006453b0 = &camlPervasives__61;
  DAT_006453a8 = 0x8000000000000001;
  DAT_006453a0 = 0x7fffffffffffffff;
  DAT_006453b8 = caml_c_call(&camlPervasives__60);
  DAT_006453c0 = caml_c_call(&camlPervasives__59);
  DAT_006453c8 = caml_c_call(&camlPervasives__58);
  DAT_006453d0 = caml_c_call(&camlPervasives__57);
  DAT_006453d8 = caml_c_call(&camlPervasives__56);
  DAT_006453e0 = caml_c_call(&camlPervasives__55);
  DAT_006453e8 = &camlPervasives__54;
  DAT_006453f0 = &camlPervasives__53;
  DAT_006453f8 = &camlPervasives__52;
  DAT_00645400 = &camlPervasives__51;
  DAT_00645408 = &camlPervasives__50;
  DAT_006455f8 = &camlPervasives__49;
  DAT_006455e0 = &camlPervasives__48;
  DAT_00645410 = &camlPervasives__47;
  DAT_00645418 = &camlPervasives__46;
  DAT_00645420 = caml_c_call(1);
  DAT_00645428 = caml_c_call(3);
  DAT_00645430 = caml_c_call(5);
  DAT_006454c0 = &camlPervasives__45;
  DAT_006454b0 = &camlPervasives__44;
  DAT_006454b8 = &camlPervasives__43;
  DAT_006454d0 = &camlPervasives__42;
  DAT_006454e0 = &camlPervasives__41;
  DAT_006454e8 = &camlPervasives__40;
  DAT_00645500 = &camlPervasives__39;
  DAT_00645520 = &camlPervasives__38;
  DAT_00645528 = &camlPervasives__37;
  DAT_00645548 = &camlPervasives__36;
  DAT_00645538 = &camlPervasives__35;
  DAT_00645540 = &camlPervasives__34;
  DAT_00645560 = &camlPervasives__33;
  DAT_006455e8 = &camlPervasives__32;
  DAT_00645568 = &camlPervasives__31;
  DAT_00645558 = &camlPervasives__30;
  DAT_006455a8 = &camlPervasives__29;
  DAT_00645438 = &camlPervasives__28;
  DAT_00645440 = &camlPervasives__27;
  DAT_00645448 = &camlPervasives__26;
  DAT_00645450 = &camlPervasives__25;
  DAT_00645458 = &camlPervasives__24;
  DAT_00645460 = &camlPervasives__23;
  DAT_00645468 = &camlPervasives__22;
  DAT_00645470 = &camlPervasives__21;
  DAT_00645478 = &camlPervasives__20;
  DAT_00645480 = &camlPervasives__19;
  DAT_00645488 = &camlPervasives__18;
  DAT_00645490 = &camlPervasives__17;
  DAT_00645498 = &camlPervasives__16;
  DAT_006454a0 = &camlPervasives__15;
  DAT_006454a8 = &camlPervasives__14;
  caml_allocN();
  DAT_006455b8 = (undefined **)(unaff_R15 + 1);
  *unaff_R15 = 0x1800;
  *DAT_006455b8 = (undefined *)&camlPervasives__7;
  unaff_R15[2] = &camlPervasives__8;
  unaff_R15[3] = &camlPervasives__9;
  unaff_R15[4] = &camlPervasives__10;
  unaff_R15[5] = &camlPervasives__11;
  unaff_R15[6] = &camlPervasives__12;
  DAT_006455c8 = &camlPervasives__6;
  DAT_006455c0 = &camlPervasives__5;
  DAT_00645600 = (undefined **)(unaff_R15 + 8);
  unaff_R15[7] = 0x400;
  *DAT_00645600 = (undefined *)DAT_006454d0;
  DAT_006455d8 = &camlPervasives__4;
  DAT_006455f0 = &camlPervasives__3;
  DAT_006455d0 = &camlPervasives__2;
  caml_c_call(camlPervasives__1,&camlPervasives__3);
  return 1;
}



void camlArray__loop_228(ulong param_1,undefined8 *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong in_RAX;
  long lVar2;
  long extraout_RDX;
  undefined8 *unaff_RBX;
  ulong unaff_R15;
  ulong uVar3;
  
  while( true ) {
    while( true ) {
      lVar2 = caml_apply2(*(undefined8 *)(param_4 + 0x18));
      if (lVar2 < 2) break;
      lVar2 = *(long *)(param_4 + 0x30);
      uVar1 = *(ulong *)(lVar2 + -8);
      if ((uVar1 & 0xff) == 0xfe) {
        if (uVar1 >> 9 <= param_3) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        *(undefined8 *)(lVar2 + -4 + param_3 * 4) = *param_2;
      }
      else {
        if (uVar1 >> 9 <= param_3) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        caml_modify(lVar2 + -4 + param_3 * 4,param_2);
      }
      param_1 = param_1 + 2;
      if (*(long *)(param_4 + 0x40) <= (long)param_1) {
        camlArray__blit_120(*(undefined8 *)(param_4 + 0x30),param_3 + 2,
                            (*(long *)(param_4 + 0x38) - in_RAX) + 1);
        return;
      }
      lVar2 = *(long *)(param_4 + 0x28);
      uVar1 = *(ulong *)(lVar2 + -8);
      if ((uVar1 & 0xff) == 0xfe) {
        uVar3 = unaff_R15;
        if (uVar1 >> 9 <= param_1) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        while( true ) {
          unaff_R15 = uVar3 - 0x10;
          if (caml_young_limit <= unaff_R15) break;
          caml_call_gc();
          lVar2 = extraout_RDX;
          uVar3 = unaff_R15;
        }
        param_2 = (undefined8 *)(uVar3 - 8);
        *(undefined8 *)(uVar3 - 0x10) = 0x4fd;
        *param_2 = *(undefined8 *)(lVar2 + -4 + param_1 * 4);
      }
      else {
        if (uVar1 >> 9 <= param_1) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        param_2 = *(undefined8 **)(lVar2 + -4 + param_1 * 4);
      }
      param_3 = param_3 + 2;
    }
    lVar2 = *(long *)(param_4 + 0x30);
    uVar1 = *(ulong *)(lVar2 + -8);
    if ((uVar1 & 0xff) == 0xfe) {
      if (uVar1 >> 9 <= param_3) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      *(undefined8 *)(lVar2 + -4 + param_3 * 4) = *unaff_RBX;
    }
    else {
      if (uVar1 >> 9 <= param_3) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      caml_modify(lVar2 + -4 + param_3 * 4,unaff_RBX);
    }
    in_RAX = in_RAX + 2;
    if (*(long *)(param_4 + 0x38) <= (long)in_RAX) break;
    lVar2 = *(long *)(param_4 + 0x20);
    uVar1 = *(ulong *)(lVar2 + -8);
    if ((uVar1 & 0xff) == 0xfe) {
      uVar3 = unaff_R15;
      if (uVar1 >> 9 <= in_RAX) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while( true ) {
        unaff_R15 = uVar3 - 0x10;
        if (caml_young_limit <= unaff_R15) break;
        caml_call_gc();
        uVar3 = unaff_R15;
      }
      unaff_RBX = (undefined8 *)(uVar3 - 8);
      *(undefined8 *)(uVar3 - 0x10) = 0x4fd;
      *unaff_RBX = *(undefined8 *)(lVar2 + -4 + in_RAX * 4);
    }
    else {
      if (uVar1 >> 9 <= in_RAX) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      unaff_RBX = *(undefined8 **)(lVar2 + -4 + in_RAX * 4);
    }
    param_3 = param_3 + 2;
  }
  camlArray__blit_120(*(undefined8 *)(param_4 + 0x30),param_3 + 2,
                      (*(long *)(param_4 + 0x40) - param_1) + 1);
  return;
}



void camlArray__size_93(void)

{
  long *unaff_RBX;
  
  if (unaff_RBX != (long *)0x1) {
    camlArray__size_93(*(ulong *)(*unaff_RBX + -8) >> 9 | 1,unaff_RBX[1]);
    return;
  }
  return;
}



undefined8 camlArray__fill_98(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_RAX;
  long *unaff_RBX;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong unaff_R15;
  ulong uVar8;
  bool bVar9;
  
  while (unaff_RBX != (long *)0x1) {
    plVar1 = (long *)unaff_RBX[1];
    lVar2 = *unaff_RBX;
    lVar5 = (*(ulong *)(lVar2 + -8) >> 9 | 1) - 2;
    lVar4 = 1;
    if (0 < lVar5) {
      do {
        lVar7 = lVar2;
        uVar8 = unaff_R15;
        if (*(char *)(lVar2 + -8) == -2) {
          while( true ) {
            unaff_R15 = uVar8 - 0x10;
            if (caml_young_limit <= unaff_R15) break;
            caml_call_gc();
            uVar8 = unaff_R15;
          }
          puVar6 = (undefined8 *)(uVar8 - 8);
          *(undefined8 *)(uVar8 - 0x10) = 0x4fd;
          *puVar6 = *(undefined8 *)(lVar7 + -4 + lVar4 * 4);
        }
        else {
          puVar6 = *(undefined8 **)(lVar2 + -4 + lVar4 * 4);
        }
        lVar7 = in_RAX + -1 + lVar4;
        lVar3 = *(long *)(param_1 + 0x18);
        if (*(char *)(lVar3 + -8) == -2) {
          *(undefined8 *)(lVar3 + -4 + lVar7 * 4) = *puVar6;
        }
        else {
          caml_modify(lVar3 + -4 + lVar7 * 4);
        }
        bVar9 = lVar4 != lVar5;
        lVar4 = lVar4 + 2;
      } while (bVar9);
    }
    in_RAX = in_RAX + -1 + (*(ulong *)(lVar2 + -8) >> 9 | 1);
    unaff_RBX = plVar1;
  }
  return 1;
}



undefined ** camlArray__find_init_105(void)

{
  undefined8 *in_RAX;
  undefined **ppuVar1;
  undefined8 *puVar2;
  ulong unaff_R15;
  
  do {
    if (in_RAX == (undefined8 *)0x1) {
      return &camlArray__35;
    }
    puVar2 = (undefined8 *)*in_RAX;
    in_RAX = (undefined8 *)in_RAX[1];
  } while (((ulong)puVar2[-1] >> 9 | 1) < 2);
  if (*(char *)(puVar2 + -1) == -2) {
    while (unaff_R15 - 0x10 < caml_young_limit) {
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x4fd;
    *(undefined8 *)(unaff_R15 - 8) = *puVar2;
  }
  ppuVar1 = (undefined **)camlArray__concat_aux_90();
  return ppuVar1;
}



long * camlArray__tolist_150(long param_1)

{
  long in_RAX;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *extraout_RDX;
  long *unaff_RBX;
  ulong unaff_R15;
  ulong uVar3;
  
  for (; 0 < in_RAX; in_RAX = in_RAX + -2) {
    lVar1 = *(long *)(param_1 + 0x18);
    if (*(char *)(lVar1 + -8) == -2) {
      while( true ) {
        uVar3 = unaff_R15 - 0x10;
        if (caml_young_limit <= uVar3) break;
        caml_call_gc();
        unaff_R15 = uVar3;
      }
      puVar2 = (undefined8 *)(unaff_R15 - 8);
      *(undefined8 *)(unaff_R15 - 0x10) = 0x4fd;
      *puVar2 = *(undefined8 *)(lVar1 + -4 + in_RAX * 4);
    }
    else {
      puVar2 = *(undefined8 **)(lVar1 + -4 + in_RAX * 4);
      uVar3 = unaff_R15;
    }
    while( true ) {
      unaff_R15 = uVar3 - 0x18;
      if (caml_young_limit <= unaff_R15) break;
      caml_call_gc();
      puVar2 = extraout_RDX;
      uVar3 = unaff_R15;
    }
    *(undefined8 *)(uVar3 - 0x18) = 0x800;
    *(long *)(uVar3 - 0x10) = (long)puVar2;
    *(long **)(uVar3 - 8) = unaff_RBX;
    unaff_RBX = (long *)(uVar3 - 0x10);
  }
  return unaff_RBX;
}



undefined8 camlArray__fill_162(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long in_RAX;
  undefined8 *unaff_RBX;
  
  while (unaff_RBX != (undefined8 *)0x1) {
    puVar1 = (undefined8 *)unaff_RBX[1];
    lVar2 = *(long *)(param_1 + 0x18);
    if (*(char *)(lVar2 + -8) == -2) {
      *(undefined8 *)(lVar2 + -4 + in_RAX * 4) = *(undefined8 *)*unaff_RBX;
    }
    else {
      caml_modify(lVar2 + -4 + in_RAX * 4);
    }
    in_RAX = in_RAX + 2;
    unaff_RBX = puVar1;
  }
  return *(undefined8 *)(param_1 + 0x18);
}



ulong camlArray__maxson_182(long param_1)

{
  ulong uVar1;
  long in_RAX;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long unaff_RBX;
  ulong uVar5;
  long lVar6;
  ulong unaff_R15;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  
  uVar1 = unaff_RBX * 3;
  uVar4 = uVar1;
  while (uVar7 = unaff_R15 - 0x10, uVar7 < caml_young_limit) {
    caml_call_gc();
    unaff_R15 = uVar7;
  }
  puVar9 = (ulong *)(unaff_R15 - 8);
  *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
  *puVar9 = uVar4;
  if ((long)(uVar4 + 4) < in_RAX) {
    uVar3 = uVar4 + 2;
    lVar2 = *(long *)(param_1 + 0x20);
    uVar5 = *(ulong *)(lVar2 + -8);
    lVar6 = param_1;
    if ((uVar5 & 0xff) == 0xfe) {
      uVar8 = uVar7;
      if (uVar5 >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar7 = uVar8 - 0x10, uVar7 < caml_young_limit) {
        caml_call_gc();
        lVar2 = extraout_RDX_02;
        uVar8 = uVar7;
      }
      *(undefined8 *)(uVar8 - 0x10) = 0x4fd;
      *(undefined8 *)(uVar8 - 8) = *(undefined8 *)(lVar2 + -4 + uVar3 * 4);
    }
    else {
      if (uVar5 >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
    }
    lVar2 = *(long *)(lVar6 + 0x20);
    uVar5 = *(ulong *)(lVar2 + -8);
    if ((uVar5 & 0xff) == 0xfe) {
      uVar3 = uVar7;
      if (uVar5 >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar7 = uVar3 - 0x10, uVar7 < caml_young_limit) {
        caml_call_gc();
        uVar3 = uVar7;
      }
      *(undefined8 *)(uVar3 - 0x10) = 0x4fd;
      *(undefined8 *)(uVar3 - 8) = *(undefined8 *)(lVar2 + -4 + uVar4 * 4);
    }
    else {
      if (uVar5 >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
    }
    lVar2 = caml_apply2(*(undefined8 *)(lVar6 + 0x18));
    if (lVar2 < 1) {
      *puVar9 = uVar1 + 2;
    }
    uVar5 = uVar1 + 4;
    lVar2 = *(long *)(param_1 + 0x20);
    uVar4 = *(ulong *)(lVar2 + -8);
    if ((uVar4 & 0xff) == 0xfe) {
      uVar3 = uVar7;
      if (uVar4 >> 9 <= uVar5) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar7 = uVar3 - 0x10, uVar7 < caml_young_limit) {
        caml_call_gc();
        lVar2 = extraout_RDX_01;
        uVar3 = uVar7;
      }
      *(undefined8 *)(uVar3 - 0x10) = 0x4fd;
      *(undefined8 *)(uVar3 - 8) = *(undefined8 *)(lVar2 + -4 + uVar5 * 4);
    }
    else {
      if (uVar4 >> 9 <= uVar5) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
    }
    uVar4 = *puVar9;
    lVar2 = *(long *)(param_1 + 0x20);
    uVar5 = *(ulong *)(lVar2 + -8);
    if ((uVar5 & 0xff) == 0xfe) {
      if (uVar5 >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar7 - 0x10 < caml_young_limit) {
        caml_call_gc();
        lVar2 = extraout_RDX_00;
        uVar7 = uVar7 - 0x10;
      }
      *(undefined8 *)(uVar7 - 0x10) = 0x4fd;
      *(undefined8 *)(uVar7 - 8) = *(undefined8 *)(lVar2 + -4 + uVar4 * 4);
    }
    else {
      if (uVar5 >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
    }
    lVar2 = caml_apply2(*(undefined8 *)(param_1 + 0x18));
    if (lVar2 < 1) {
      *puVar9 = uVar1 + 4;
    }
    return *puVar9;
  }
  if ((long)(uVar4 + 2) < in_RAX) {
    uVar3 = uVar4 + 2;
    lVar2 = *(long *)(param_1 + 0x20);
    uVar5 = *(ulong *)(lVar2 + -8);
    if ((uVar5 & 0xff) == 0xfe) {
      uVar8 = uVar7;
      if (uVar5 >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar7 = uVar8 - 0x10, uVar7 < caml_young_limit) {
        caml_call_gc();
        lVar2 = extraout_RDX;
        uVar8 = uVar7;
      }
      *(undefined8 *)(uVar8 - 0x10) = 0x4fd;
      *(undefined8 *)(uVar8 - 8) = *(undefined8 *)(lVar2 + -4 + uVar3 * 4);
    }
    else {
      if (uVar5 >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
    }
    lVar2 = *(long *)(param_1 + 0x20);
    uVar5 = *(ulong *)(lVar2 + -8);
    if ((uVar5 & 0xff) == 0xfe) {
      uVar3 = uVar7;
      if (uVar5 >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (uVar7 = uVar3 - 0x10, uVar7 < caml_young_limit) {
        caml_call_gc();
        uVar3 = uVar7;
      }
      *(undefined8 *)(uVar3 - 0x10) = 0x4fd;
      *(undefined8 *)(uVar3 - 8) = *(undefined8 *)(lVar2 + -4 + uVar4 * 4);
    }
    else {
      if (uVar5 >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
    }
    lVar2 = caml_apply2(*(undefined8 *)(param_1 + 0x18));
    if (lVar2 < 1) {
      return uVar1 + 2;
    }
  }
  if (in_RAX <= (long)uVar1) {
    while (uVar7 - 0x18 < caml_young_limit) {
      caml_call_gc();
      uVar7 = uVar7 - 0x18;
    }
    *(undefined8 *)(uVar7 - 0x18) = 0x800;
    *(undefined8 *)(uVar7 - 0x10) = DAT_00646ca0;
    *(long *)(uVar7 - 8) = unaff_RBX;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  return uVar1;
}



undefined8 camlArray__trickledown_187(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong extraout_RDX;
  ulong unaff_RBX;
  undefined8 *puVar5;
  ulong unaff_R15;
  ulong uVar6;
  
  while( true ) {
    uVar2 = camlArray__maxson_182(*(undefined8 *)(param_2 + 0x28));
    lVar3 = *(long *)(param_2 + 0x20);
    uVar1 = *(ulong *)(lVar3 + -8);
    if ((uVar1 & 0xff) == 0xfe) {
      uVar4 = uVar2;
      uVar6 = unaff_R15;
      if (uVar1 >> 9 <= uVar2) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (unaff_R15 = uVar6 - 0x10, unaff_R15 < caml_young_limit) {
        caml_call_gc();
        uVar4 = extraout_RDX;
        uVar6 = unaff_R15;
      }
      *(undefined8 *)(uVar6 - 0x10) = 0x4fd;
      *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(lVar3 + -4 + uVar4 * 4);
    }
    else {
      if (uVar1 >> 9 <= uVar2) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
    }
    lVar3 = caml_apply2(*(undefined8 *)(param_2 + 0x18));
    if (lVar3 < 2) break;
    lVar3 = *(long *)(param_2 + 0x20);
    uVar1 = *(ulong *)(lVar3 + -8);
    if ((uVar1 & 0xff) == 0xfe) {
      uVar4 = unaff_R15;
      if (uVar1 >> 9 <= uVar2) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (unaff_R15 = uVar4 - 0x10, unaff_R15 < caml_young_limit) {
        caml_call_gc();
        uVar4 = unaff_R15;
      }
      puVar5 = (undefined8 *)(uVar4 - 8);
      *(undefined8 *)(uVar4 - 0x10) = 0x4fd;
      *puVar5 = *(undefined8 *)(lVar3 + -4 + uVar2 * 4);
    }
    else {
      if (uVar1 >> 9 <= uVar2) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      puVar5 = *(undefined8 **)(lVar3 + -4 + uVar2 * 4);
    }
    lVar3 = *(long *)(param_2 + 0x20);
    uVar1 = *(ulong *)(lVar3 + -8);
    if ((uVar1 & 0xff) == 0xfe) {
      if (uVar1 >> 9 <= unaff_RBX) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      *(undefined8 *)(lVar3 + -4 + unaff_RBX * 4) = *puVar5;
      unaff_RBX = uVar2;
    }
    else {
      if (uVar1 >> 9 <= unaff_RBX) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      caml_modify(lVar3 + -4 + unaff_RBX * 4);
      unaff_RBX = uVar2;
    }
  }
  lVar3 = *(long *)(param_2 + 0x20);
  uVar1 = *(ulong *)(lVar3 + -8);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 <= unaff_RBX) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *(undefined8 *)(lVar3 + -4 + unaff_RBX * 4) = *param_1;
  }
  else {
    if (uVar1 >> 9 <= unaff_RBX) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(lVar3 + -4 + unaff_RBX * 4,param_1);
  }
  return 1;
}



undefined8 camlArray__trickle_192(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)FUN_00411de4();
  if (*plVar4 != DAT_00646ca0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar1 = plVar4[1];
  lVar2 = *(long *)(param_2 + 0x18);
  uVar3 = *(ulong *)(lVar2 + -8);
  if ((uVar3 & 0xff) == 0xfe) {
    if (uVar3 >> 9 <= uVar1) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *(undefined8 *)(lVar2 + -4 + uVar1 * 4) = *param_1;
  }
  else {
    if (uVar3 >> 9 <= uVar1) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(lVar2 + -4 + uVar1 * 4,param_1);
  }
  return 1;
}



void FUN_00411de4(undefined8 param_1,long param_2)

{
  camlArray__trickledown_187(param_1,*(undefined8 *)(param_2 + 0x20));
  return;
}



void camlArray__bubbledown_197(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_RDX;
  ulong unaff_RBX;
  undefined8 *puVar4;
  ulong unaff_R15;
  ulong uVar5;
  
  while( true ) {
    while( true ) {
      uVar2 = camlArray__maxson_182(*(undefined8 *)(param_1 + 0x20));
      lVar3 = *(long *)(param_1 + 0x18);
      uVar1 = *(ulong *)(lVar3 + -8);
      if ((uVar1 & 0xff) == 0xfe) {
        uVar5 = unaff_R15;
        if (uVar1 >> 9 <= uVar2) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        while (unaff_R15 = uVar5 - 0x10, unaff_R15 < caml_young_limit) {
          caml_call_gc();
          lVar3 = extraout_RDX;
          uVar5 = unaff_R15;
        }
        puVar4 = (undefined8 *)(uVar5 - 8);
        *(undefined8 *)(uVar5 - 0x10) = 0x4fd;
        *puVar4 = *(undefined8 *)(lVar3 + -4 + uVar2 * 4);
      }
      else {
        if (uVar1 >> 9 <= uVar2) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        puVar4 = *(undefined8 **)(lVar3 + -4 + uVar2 * 4);
      }
      lVar3 = *(long *)(param_1 + 0x18);
      uVar1 = *(ulong *)(lVar3 + -8);
      if ((uVar1 & 0xff) != 0xfe) break;
      if (uVar1 >> 9 <= unaff_RBX) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      *(undefined8 *)(lVar3 + -4 + unaff_RBX * 4) = *puVar4;
      unaff_RBX = uVar2;
    }
    if (uVar1 >> 9 <= unaff_RBX) break;
    caml_modify(lVar3 + -4 + unaff_RBX * 4);
    unaff_RBX = uVar2;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



long camlArray__bubble_201(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00411f40();
  if (*plVar1 == DAT_00646ca0) {
    return plVar1[1];
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_00411f40(long param_1)

{
  camlArray__bubbledown_197(*(undefined8 *)(param_1 + 0x18));
  return;
}



undefined8 camlArray__trickleup_205(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong in_RAX;
  long lVar3;
  ulong uVar4;
  long extraout_RDX;
  undefined8 *unaff_RBX;
  undefined8 *puVar5;
  long lVar6;
  ulong unaff_R15;
  ulong uVar7;
  
  do {
    uVar1 = SUB168(CONCAT88((long)(in_RAX - 2) >> 0x3f,(long)(in_RAX - 2) >> 1) / SEXT816(3),0) * 2
            + 1;
    if (in_RAX == uVar1) {
      while (unaff_R15 - 0x18 < caml_young_limit) {
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x18;
      }
      *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
      *(undefined ***)(unaff_R15 - 0x10) = &caml_exn_Assert_failure;
      *(undefined ***)(unaff_R15 - 8) = &camlArray__34;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = *(ulong *)(lVar3 + -8);
    lVar6 = param_1;
    if ((uVar2 & 0xff) == 0xfe) {
      uVar4 = uVar1;
      uVar7 = unaff_R15;
      if (uVar2 >> 9 <= uVar1) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (unaff_R15 = uVar7 - 0x10, unaff_R15 < caml_young_limit) {
        caml_call_gc();
        lVar3 = extraout_RDX;
        uVar7 = unaff_R15;
      }
      *(undefined8 *)(uVar7 - 0x10) = 0x4fd;
      *(undefined8 *)(uVar7 - 8) = *(undefined8 *)(lVar3 + -4 + uVar4 * 4);
    }
    else {
      if (uVar2 >> 9 <= uVar1) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
    }
    lVar3 = caml_apply2(*(undefined8 *)(lVar6 + 0x18));
    if (0 < lVar3) {
      lVar3 = *(long *)(param_1 + 0x20);
      uVar1 = *(ulong *)(lVar3 + -8);
      if ((uVar1 & 0xff) == 0xfe) {
        if (uVar1 >> 9 <= in_RAX) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        *(undefined8 *)(lVar3 + -4 + in_RAX * 4) = *unaff_RBX;
      }
      else {
        if (uVar1 >> 9 <= in_RAX) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        caml_modify(lVar3 + -4 + in_RAX * 4,unaff_RBX);
      }
      return 1;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = *(ulong *)(lVar3 + -8);
    if ((uVar2 & 0xff) == 0xfe) {
      uVar4 = unaff_R15;
      if (uVar2 >> 9 <= uVar1) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      while (unaff_R15 = uVar4 - 0x10, unaff_R15 < caml_young_limit) {
        caml_call_gc();
        uVar4 = unaff_R15;
      }
      puVar5 = (undefined8 *)(uVar4 - 8);
      *(undefined8 *)(uVar4 - 0x10) = 0x4fd;
      *puVar5 = *(undefined8 *)(lVar3 + -4 + uVar1 * 4);
    }
    else {
      if (uVar2 >> 9 <= uVar1) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      puVar5 = *(undefined8 **)(lVar3 + -4 + uVar1 * 4);
    }
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = *(ulong *)(lVar3 + -8);
    if ((uVar2 & 0xff) == 0xfe) {
      if (uVar2 >> 9 <= in_RAX) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      *(undefined8 *)(lVar3 + -4 + in_RAX * 4) = *puVar5;
    }
    else {
      if (uVar2 >> 9 <= in_RAX) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      caml_modify(lVar3 + -4 + in_RAX * 4);
    }
    in_RAX = uVar1;
  } while (1 < (long)uVar1);
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  uVar1 = puVar5[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *puVar5 = *unaff_RBX;
  }
  else {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar5,unaff_RBX);
  }
  return 1;
}



void camlArray__merge_218
               (long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5,
               long param_6)

{
  ulong uVar1;
  ulong in_RAX;
  long unaff_RBX;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong unaff_R15;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = (in_RAX - 1) + unaff_RBX;
  lVar4 = param_2 - 1;
  while (uVar5 = unaff_R15 - 0x50, uVar5 < caml_young_limit) {
    caml_call_gc();
    unaff_R15 = uVar5;
  }
  *(undefined8 *)(unaff_R15 - 0x50) = 0x24f7;
  *(code **)(unaff_R15 - 0x48) = caml_curry5;
  *(undefined8 *)(unaff_R15 - 0x40) = 0xb;
  *(code **)(unaff_R15 - 0x38) = camlArray__loop_228;
  *(undefined8 *)(unaff_R15 - 0x30) = *(undefined8 *)(param_6 + 0x18);
  *(undefined8 *)(unaff_R15 - 0x28) = *(undefined8 *)(param_6 + 0x20);
  *(long *)(unaff_R15 - 0x20) = param_1;
  *(undefined8 *)(unaff_R15 - 0x18) = param_4;
  *(long *)(unaff_R15 - 0x10) = lVar3;
  *(long *)(unaff_R15 - 8) = lVar4 + param_3;
  uVar1 = *(ulong *)(param_1 + -8);
  if ((uVar1 & 0xff) == 0xfe) {
    uVar6 = uVar5;
    if (uVar1 >> 9 <= param_2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    while (uVar5 = uVar6 - 0x10, uVar5 < caml_young_limit) {
      caml_call_gc();
      uVar6 = uVar5;
    }
    puVar2 = (undefined8 *)(uVar6 - 8);
    *(undefined8 *)(uVar6 - 0x10) = 0x4fd;
    *puVar2 = *(undefined8 *)(param_1 + -4 + param_2 * 4);
  }
  else {
    if (uVar1 >> 9 <= param_2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2 = *(undefined8 **)(param_1 + -4 + param_2 * 4);
  }
  lVar4 = *(long *)(param_6 + 0x20);
  uVar1 = *(ulong *)(lVar4 + -8);
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 <= in_RAX) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error(lVar4,puVar2);
    }
    while (uVar5 - 0x10 < caml_young_limit) {
      caml_call_gc();
      uVar5 = uVar5 - 0x10;
    }
    *(undefined8 *)(uVar5 - 0x10) = 0x4fd;
    *(undefined8 *)(uVar5 - 8) = *(undefined8 *)(lVar4 + -4 + in_RAX * 4);
  }
  else {
    if (uVar1 >> 9 <= in_RAX) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error(lVar4,puVar2);
    }
  }
  camlArray__loop_228(param_2);
  return;
}



undefined8 camlArray__isortto_236(long param_1,long param_2,long param_3)

{
  ulong *puVar1;
  long in_RAX;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  long unaff_RBX;
  undefined8 *puVar6;
  ulong unaff_R15;
  ulong uVar7;
  bool bVar8;
  long local_40;
  undefined8 *local_20;
  long lVar9;
  
  if (0 < param_2 + -2) {
    local_40 = 1;
    lVar9 = unaff_RBX;
    do {
      uVar4 = in_RAX + -1 + local_40;
      lVar2 = *(long *)(param_3 + 0x20);
      uVar5 = *(ulong *)(lVar2 + -8);
      lVar3 = local_40;
      if ((uVar5 & 0xff) == 0xfe) {
        if (uVar5 >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        while (uVar5 = unaff_R15 - 0x10, uVar5 < caml_young_limit) {
          caml_call_gc();
          uVar4 = extraout_RDX_00;
          unaff_R15 = uVar5;
        }
        local_20 = (undefined8 *)(unaff_R15 - 8);
        *(undefined8 *)(unaff_R15 - 0x10) = 0x4fd;
        *local_20 = *(undefined8 *)(lVar2 + -4 + uVar4 * 4);
      }
      else {
        if (uVar5 >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        local_20 = *(undefined8 **)(lVar2 + -4 + uVar4 * 4);
        uVar5 = unaff_R15;
      }
      while (unaff_R15 = uVar5 - 0x10, unaff_R15 < caml_young_limit) {
        caml_call_gc();
        uVar5 = unaff_R15;
      }
      puVar1 = (ulong *)(uVar5 - 8);
      *(undefined8 *)(uVar5 - 0x10) = 0x400;
      *puVar1 = param_1 + -3 + lVar3;
      while (param_1 <= (long)*puVar1) {
        uVar4 = *puVar1;
        uVar5 = *(ulong *)(unaff_RBX + -8);
        if ((uVar5 & 0xff) == 0xfe) {
          uVar7 = unaff_R15;
          if (uVar5 >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
            caml_ml_array_bound_error();
          }
          while (unaff_R15 = uVar7 - 0x10, unaff_R15 < caml_young_limit) {
            caml_call_gc();
            uVar7 = unaff_R15;
          }
          *(undefined8 *)(uVar7 - 0x10) = 0x4fd;
          *(undefined8 *)(uVar7 - 8) = *(undefined8 *)(unaff_RBX + -4 + uVar4 * 4);
          unaff_RBX = lVar9;
        }
        else {
          unaff_RBX = lVar9;
          if (uVar5 >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
            caml_ml_array_bound_error();
          }
        }
        lVar2 = caml_apply2(*(undefined8 *)(param_3 + 0x18));
        lVar9 = unaff_RBX;
        if (lVar2 < 2) break;
        uVar4 = *puVar1;
        uVar5 = *(ulong *)(unaff_RBX + -8);
        if ((uVar5 & 0xff) == 0xfe) {
          uVar7 = unaff_R15;
          if (uVar5 >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
            caml_ml_array_bound_error();
          }
          while (unaff_R15 = uVar7 - 0x10, unaff_R15 < caml_young_limit) {
            caml_call_gc();
            uVar4 = extraout_RDX;
            uVar7 = unaff_R15;
          }
          puVar6 = (undefined8 *)(uVar7 - 8);
          *(undefined8 *)(uVar7 - 0x10) = 0x4fd;
          *puVar6 = *(undefined8 *)(unaff_RBX + -4 + uVar4 * 4);
        }
        else {
          if (uVar5 >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
            caml_ml_array_bound_error();
          }
          puVar6 = *(undefined8 **)(unaff_RBX + -4 + uVar4 * 4);
        }
        uVar5 = *puVar1 + 2;
        uVar4 = *(ulong *)(unaff_RBX + -8);
        if ((uVar4 & 0xff) == 0xfe) {
          if (uVar4 >> 9 <= uVar5) {
                    // WARNING: Subroutine does not return
            caml_ml_array_bound_error();
          }
          *(undefined8 *)(unaff_RBX + -4 + uVar5 * 4) = *puVar6;
        }
        else {
          if (uVar4 >> 9 <= uVar5) {
                    // WARNING: Subroutine does not return
            caml_ml_array_bound_error();
          }
          caml_modify(unaff_RBX + -4 + uVar5 * 4);
        }
        *puVar1 = *puVar1 - 2;
      }
      unaff_RBX = lVar9;
      uVar5 = *puVar1 + 2;
      uVar4 = *(ulong *)(unaff_RBX + -8);
      lVar9 = unaff_RBX;
      if ((uVar4 & 0xff) == 0xfe) {
        if (uVar4 >> 9 <= uVar5) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        *(undefined8 *)(unaff_RBX + -4 + uVar5 * 4) = *local_20;
      }
      else {
        if (uVar4 >> 9 <= uVar5) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        caml_modify(unaff_RBX + -4 + uVar5 * 4,local_20);
      }
      bVar8 = local_40 != param_2 + -2;
      local_40 = local_40 + 2;
    } while (bVar8);
  }
  return 1;
}



void camlArray__sortto_244(long param_1,long param_2,long param_3)

{
  long in_RAX;
  long lVar1;
  long lVar2;
  undefined8 unaff_RBX;
  
  if (param_2 < 0xc) {
    camlArray__isortto_236(param_1,param_2,*(undefined8 *)(param_3 + 0x28));
    return;
  }
  lVar1 = param_2 >> 1;
  lVar2 = lVar1 + 1;
  if (-1 < lVar1) {
    lVar2 = lVar1;
  }
  lVar2 = (lVar2 >> 1) * 2 + 1;
  lVar1 = (param_2 - lVar2) + 1;
  camlArray__sortto_244(param_1 + -1 + lVar2,lVar1,param_3);
  camlArray__sortto_244(in_RAX + -1 + lVar1,lVar2);
  camlArray__merge_218
            (unaff_RBX,param_1 + -1 + lVar2,lVar1,unaff_RBX,param_1,*(undefined8 *)(param_3 + 0x20))
  ;
  return;
}



undefined * camlArray__init_65(void)

{
  long in_RAX;
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  code **unaff_RBX;
  bool bVar4;
  long local_10;
  
  if (in_RAX == 1) {
    return &camlArray__33;
  }
  uVar1 = (**unaff_RBX)(*unaff_RBX);
  puVar2 = (undefined *)caml_c_call(in_RAX,uVar1);
  if (2 < in_RAX + -2) {
    local_10 = 3;
    do {
      puVar3 = (undefined8 *)(**unaff_RBX)(*unaff_RBX);
      if (puVar2[-8] == -2) {
        *(undefined8 *)(puVar2 + local_10 * 4 + -4) = *puVar3;
      }
      else {
        caml_modify(puVar2 + local_10 * 4 + -4,puVar3);
      }
      bVar4 = local_10 != in_RAX + -2;
      local_10 = local_10 + 2;
    } while (bVar4);
  }
  return puVar2;
}



long camlArray__make_matrix_70(undefined8 param_1)

{
  long in_RAX;
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  bool bVar3;
  long local_28;
  
  lVar1 = caml_c_call();
  if (0 < in_RAX + -2) {
    local_28 = 1;
    do {
      uVar2 = caml_c_call(unaff_RBX,param_1);
      caml_modify(lVar1 + -4 + local_28 * 4,uVar2);
      bVar3 = local_28 != in_RAX + -2;
      local_28 = local_28 + 2;
    } while (bVar3);
  }
  return lVar1;
}



undefined * camlArray__copy_77(void)

{
  undefined8 *in_RAX;
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong unaff_R15;
  ulong uVar7;
  bool bVar8;
  
  uVar4 = (ulong)in_RAX[-1] >> 9 | 1;
  if (uVar4 != 1) {
    uVar7 = unaff_R15;
    if (*(char *)(in_RAX + -1) == -2) {
      while (unaff_R15 = uVar7 - 0x10, unaff_R15 < caml_young_limit) {
        caml_call_gc();
        uVar7 = unaff_R15;
      }
      *(undefined8 *)(uVar7 - 0x10) = 0x4fd;
      *(undefined8 *)(uVar7 - 8) = *in_RAX;
    }
    puVar1 = (undefined *)caml_c_call();
    lVar6 = uVar4 - 2;
    lVar2 = 3;
    if (2 < lVar6) {
      do {
        puVar5 = in_RAX;
        uVar4 = unaff_R15;
        if (*(char *)(in_RAX + -1) == -2) {
          while (unaff_R15 = uVar4 - 0x10, unaff_R15 < caml_young_limit) {
            caml_call_gc();
            uVar4 = unaff_R15;
          }
          puVar3 = (undefined8 *)(uVar4 - 8);
          *(undefined8 *)(uVar4 - 0x10) = 0x4fd;
          *puVar3 = *(undefined8 *)((long)puVar5 + lVar2 * 4 + -4);
        }
        else {
          puVar3 = *(undefined8 **)((long)in_RAX + lVar2 * 4 + -4);
        }
        if (puVar1[-8] == -2) {
          *(undefined8 *)(puVar1 + lVar2 * 4 + -4) = *puVar3;
        }
        else {
          caml_modify(puVar1 + lVar2 * 4 + -4);
        }
        bVar8 = lVar2 != lVar6;
        lVar2 = lVar2 + 2;
      } while (bVar8);
    }
    return puVar1;
  }
  return &camlArray__31;
}



undefined * camlArray__append_82(void)

{
  long lVar1;
  long *in_RAX;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong extraout_RDX;
  long *unaff_RBX;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong unaff_R15;
  ulong uVar11;
  bool bVar12;
  
  uVar3 = (ulong)in_RAX[-1] >> 9 | 1;
  uVar5 = (ulong)unaff_RBX[-1] >> 9 | 1;
  if ((uVar3 == 1) && (uVar5 == 1)) {
    return &camlArray__30;
  }
  plVar7 = unaff_RBX;
  if (1 < uVar3) {
    plVar7 = in_RAX;
  }
  uVar4 = uVar3;
  uVar6 = uVar5;
  uVar11 = unaff_R15;
  if (*(char *)(plVar7 + -1) == -2) {
    while (unaff_R15 = uVar11 - 0x10, unaff_R15 < caml_young_limit) {
      caml_call_gc();
      uVar6 = extraout_RDX;
      uVar11 = unaff_R15;
    }
    plVar9 = (long *)(uVar11 - 8);
    *(undefined8 *)(uVar11 - 0x10) = 0x4fd;
    *plVar9 = *plVar7;
  }
  else {
    plVar9 = (long *)*plVar7;
  }
  puVar2 = (undefined *)caml_c_call((uVar4 - 1) + uVar6,plVar9);
  lVar8 = 1;
  if (0 < (long)(uVar3 - 2)) {
    do {
      plVar7 = in_RAX;
      uVar4 = unaff_R15;
      if (*(char *)(in_RAX + -1) == -2) {
        while (unaff_R15 = uVar4 - 0x10, unaff_R15 < caml_young_limit) {
          caml_call_gc();
          uVar4 = unaff_R15;
        }
        puVar10 = (undefined8 *)(uVar4 - 8);
        *(undefined8 *)(uVar4 - 0x10) = 0x4fd;
        *puVar10 = *(undefined8 *)((long)plVar7 + lVar8 * 4 + -4);
      }
      else {
        puVar10 = *(undefined8 **)((long)in_RAX + lVar8 * 4 + -4);
      }
      if (puVar2[-8] == -2) {
        *(undefined8 *)(puVar2 + lVar8 * 4 + -4) = *puVar10;
      }
      else {
        caml_modify(puVar2 + lVar8 * 4 + -4);
      }
      bVar12 = lVar8 != uVar3 - 2;
      lVar8 = lVar8 + 2;
    } while (bVar12);
  }
  lVar8 = 1;
  if (0 < (long)(uVar5 - 2)) {
    do {
      uVar5 = unaff_R15;
      plVar7 = unaff_RBX;
      if (*(char *)(unaff_RBX + -1) == -2) {
        while (unaff_R15 = uVar5 - 0x10, unaff_R15 < caml_young_limit) {
          caml_call_gc();
          uVar5 = unaff_R15;
        }
        puVar10 = (undefined8 *)(uVar5 - 8);
        *(undefined8 *)(uVar5 - 0x10) = 0x4fd;
        *puVar10 = *(undefined8 *)((long)unaff_RBX + lVar8 * 4 + -4);
        unaff_RBX = plVar7;
      }
      else {
        puVar10 = *(undefined8 **)((long)unaff_RBX + lVar8 * 4 + -4);
      }
      lVar1 = lVar8 + -1 + uVar3;
      if (puVar2[-8] == -2) {
        *(undefined8 *)(puVar2 + lVar1 * 4 + -4) = *puVar10;
      }
      else {
        caml_modify(puVar2 + lVar1 * 4 + -4);
      }
      bVar12 = lVar8 != uVar5 - 2;
      lVar8 = lVar8 + 2;
    } while (bVar12);
  }
  return puVar2;
}



undefined8 camlArray__concat_aux_90(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  ulong unaff_R15;
  
  uVar1 = camlArray__size_93();
  uVar1 = caml_c_call(uVar1,in_RAX);
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x18) = 5;
  *(code **)(unaff_R15 - 0x10) = camlArray__fill_98;
  *(undefined8 *)(unaff_R15 - 8) = uVar1;
  camlArray__fill_98();
  return uVar1;
}



void camlArray__concat_103(void)

{
  undefined8 in_RAX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xcf7;
  *(code **)(unaff_R15 - 0x18) = camlArray__find_init_105;
  *(undefined8 *)(unaff_R15 - 0x10) = 3;
  *(undefined8 *)(unaff_R15 - 8) = in_RAX;
  camlArray__find_init_105();
  return;
}



undefined * camlArray__sub_108(long param_1)

{
  long in_RAX;
  undefined *puVar1;
  long unaff_RBX;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong unaff_R15;
  ulong uVar6;
  bool bVar7;
  
  if (((0 < unaff_RBX) && (0 < param_1)) &&
     (unaff_RBX <= (long)(((*(ulong *)(in_RAX + -8) >> 9 | 1) - param_1) + 1))) {
    if (param_1 != 1) {
      lVar2 = in_RAX;
      uVar6 = unaff_R15;
      lVar4 = unaff_RBX;
      if (*(char *)(in_RAX + -8) == -2) {
        while (unaff_R15 = uVar6 - 0x10, unaff_R15 < caml_young_limit) {
          caml_call_gc();
          uVar6 = unaff_R15;
        }
        *(undefined8 *)(uVar6 - 0x10) = 0x4fd;
        *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(lVar2 + -4 + unaff_RBX * 4);
        unaff_RBX = lVar4;
      }
      puVar1 = (undefined *)caml_c_call();
      lVar2 = 3;
      if (2 < param_1 + -2) {
        do {
          lVar4 = unaff_RBX + -1 + lVar2;
          lVar5 = in_RAX;
          uVar6 = unaff_R15;
          if (*(char *)(in_RAX + -8) == -2) {
            while (unaff_R15 = uVar6 - 0x10, unaff_R15 < caml_young_limit) {
              caml_call_gc();
              uVar6 = unaff_R15;
            }
            puVar3 = (undefined8 *)(uVar6 - 8);
            *(undefined8 *)(uVar6 - 0x10) = 0x4fd;
            *puVar3 = *(undefined8 *)(lVar5 + -4 + lVar4 * 4);
          }
          else {
            puVar3 = *(undefined8 **)(in_RAX + -4 + lVar4 * 4);
          }
          if (puVar1[-8] == -2) {
            *(undefined8 *)(puVar1 + lVar2 * 4 + -4) = *puVar3;
          }
          else {
            caml_modify(puVar1 + lVar2 * 4 + -4);
          }
          bVar7 = lVar2 != param_1 + -2;
          lVar2 = lVar2 + 2;
        } while (bVar7);
      }
      return puVar1;
    }
    return &camlArray__28;
  }
  puVar1 = (undefined *)camlPervasives__invalid_arg_40();
  return puVar1;
}



undefined8 camlArray__fill_114(long param_1,undefined8 *param_2)

{
  long in_RAX;
  undefined8 uVar1;
  long unaff_RBX;
  bool bVar2;
  
  if (((0 < unaff_RBX) && (0 < param_1)) &&
     (unaff_RBX <= (long)(((*(ulong *)(in_RAX + -8) >> 9 | 1) - param_1) + 1))) {
    param_1 = unaff_RBX + -3 + param_1;
    if (unaff_RBX <= param_1) {
      do {
        if (*(char *)(in_RAX + -8) == -2) {
          *(undefined8 *)(in_RAX + -4 + unaff_RBX * 4) = *param_2;
        }
        else {
          caml_modify(in_RAX + -4 + unaff_RBX * 4,param_2);
        }
        bVar2 = unaff_RBX != param_1;
        unaff_RBX = unaff_RBX + 2;
      } while (bVar2);
    }
    return 1;
  }
  uVar1 = camlPervasives__invalid_arg_40();
  return uVar1;
}



undefined8 camlArray__blit_120(long param_1,long param_2,long param_3)

{
  long in_RAX;
  undefined8 uVar1;
  long unaff_RBX;
  undefined8 *puVar2;
  long lVar3;
  ulong unaff_R15;
  ulong uVar4;
  bool bVar5;
  long local_28;
  long local_10;
  
  if ((((0 < param_3) && (0 < unaff_RBX)) &&
      (unaff_RBX <= (long)(((*(ulong *)(in_RAX + -8) >> 9 | 1) - param_3) + 1))) &&
     ((0 < param_2 && (param_2 <= (long)(((*(ulong *)(param_1 + -8) >> 9 | 1) - param_3) + 1))))) {
    if (param_2 <= unaff_RBX) {
      local_10 = 1;
      if (0 < param_3 + -2) {
        do {
          lVar3 = unaff_RBX + -1 + local_10;
          uVar4 = unaff_R15;
          if (*(char *)(in_RAX + -8) == -2) {
            while (unaff_R15 = uVar4 - 0x10, unaff_R15 < caml_young_limit) {
              caml_call_gc();
              uVar4 = unaff_R15;
            }
            puVar2 = (undefined8 *)(uVar4 - 8);
            *(undefined8 *)(uVar4 - 0x10) = 0x4fd;
            *puVar2 = *(undefined8 *)(in_RAX + -4 + lVar3 * 4);
          }
          else {
            puVar2 = *(undefined8 **)(in_RAX + -4 + lVar3 * 4);
          }
          lVar3 = param_2 + -1 + local_10;
          if (*(char *)(param_1 + -8) == -2) {
            *(undefined8 *)(param_1 + -4 + lVar3 * 4) = *puVar2;
          }
          else {
            caml_modify(param_1 + -4 + lVar3 * 4);
          }
          bVar5 = local_10 != param_3 + -2;
          local_10 = local_10 + 2;
        } while (bVar5);
      }
      return 1;
    }
    local_28 = param_3 + -2;
    if (0 < local_28) {
      do {
        lVar3 = unaff_RBX + -1 + local_28;
        uVar4 = unaff_R15;
        if (*(char *)(in_RAX + -8) == -2) {
          while (unaff_R15 = uVar4 - 0x10, unaff_R15 < caml_young_limit) {
            caml_call_gc();
            uVar4 = unaff_R15;
          }
          puVar2 = (undefined8 *)(uVar4 - 8);
          *(undefined8 *)(uVar4 - 0x10) = 0x4fd;
          *puVar2 = *(undefined8 *)(in_RAX + -4 + lVar3 * 4);
        }
        else {
          puVar2 = *(undefined8 **)(in_RAX + -4 + lVar3 * 4);
        }
        lVar3 = param_2 + -1 + local_28;
        if (*(char *)(param_1 + -8) == -2) {
          *(undefined8 *)(param_1 + -4 + lVar3 * 4) = *puVar2;
        }
        else {
          caml_modify(param_1 + -4 + lVar3 * 4);
        }
        bVar5 = local_28 != 1;
        local_28 = local_28 + -2;
      } while (bVar5);
    }
    return 1;
  }
  uVar1 = camlPervasives__invalid_arg_40();
  return uVar1;
}



undefined8 camlArray__iter_128(void)

{
  code **in_RAX;
  long unaff_RBX;
  long lVar1;
  long lVar2;
  ulong unaff_R15;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  long local_18;
  
  lVar1 = (*(ulong *)(unaff_RBX + -8) >> 9 | 1) - 2;
  if (0 < lVar1) {
    local_18 = 1;
    do {
      lVar2 = local_18;
      uVar3 = unaff_R15;
      lVar5 = unaff_RBX;
      if (*(char *)(unaff_RBX + -8) == -2) {
        while (unaff_R15 = uVar3 - 0x10, unaff_R15 < caml_young_limit) {
          caml_call_gc();
          uVar3 = unaff_R15;
        }
        *(undefined8 *)(uVar3 - 0x10) = 0x4fd;
        *(undefined8 *)(uVar3 - 8) = *(undefined8 *)(unaff_RBX + -4 + lVar2 * 4);
        unaff_RBX = lVar5;
      }
      (**in_RAX)(*in_RAX);
      bVar4 = local_18 != lVar1;
      local_18 = local_18 + 2;
    } while (bVar4);
  }
  return 1;
}



undefined * camlArray__map_132(void)

{
  code **in_RAX;
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RBX;
  code **ppcVar5;
  ulong unaff_R15;
  ulong uVar6;
  bool bVar7;
  long local_8;
  
  uVar1 = (ulong)unaff_RBX[-1] >> 9 | 1;
  if (uVar1 != 1) {
    ppcVar5 = in_RAX;
    uVar6 = unaff_R15;
    puVar4 = unaff_RBX;
    if (*(char *)(unaff_RBX + -1) == -2) {
      while (unaff_R15 = uVar6 - 0x10, unaff_R15 < caml_young_limit) {
        caml_call_gc();
        uVar6 = unaff_R15;
      }
      *(undefined8 *)(uVar6 - 0x10) = 0x4fd;
      *(undefined8 *)(uVar6 - 8) = *unaff_RBX;
      unaff_RBX = puVar4;
    }
    uVar2 = (**ppcVar5)(*ppcVar5);
    puVar3 = (undefined *)caml_c_call(uVar1,uVar2);
    if (2 < (long)(uVar1 - 2)) {
      local_8 = 3;
      do {
        uVar6 = unaff_R15;
        puVar4 = unaff_RBX;
        if (*(char *)(unaff_RBX + -1) == -2) {
          while (unaff_R15 = uVar6 - 0x10, unaff_R15 < caml_young_limit) {
            caml_call_gc();
            uVar6 = unaff_R15;
          }
          *(undefined8 *)(uVar6 - 0x10) = 0x4fd;
          *(undefined8 *)(uVar6 - 8) = *(undefined8 *)((long)unaff_RBX + local_8 * 4 + -4);
          unaff_RBX = puVar4;
        }
        puVar4 = (undefined8 *)(**in_RAX)(*in_RAX);
        if (puVar3[-8] == -2) {
          *(undefined8 *)(puVar3 + local_8 * 4 + -4) = *puVar4;
        }
        else {
          caml_modify(puVar3 + local_8 * 4 + -4,puVar4);
        }
        bVar7 = local_8 != uVar1 - 2;
        local_8 = local_8 + 2;
      } while (bVar7);
    }
    return puVar3;
  }
  return &camlArray__24;
}



undefined8 camlArray__iteri_138(void)

{
  undefined8 in_RAX;
  long unaff_RBX;
  long lVar1;
  long lVar2;
  ulong unaff_R15;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  long local_18;
  
  lVar1 = (*(ulong *)(unaff_RBX + -8) >> 9 | 1) - 2;
  if (0 < lVar1) {
    local_18 = 1;
    do {
      lVar2 = local_18;
      uVar3 = unaff_R15;
      lVar5 = unaff_RBX;
      if (*(char *)(unaff_RBX + -8) == -2) {
        while (unaff_R15 = uVar3 - 0x10, unaff_R15 < caml_young_limit) {
          caml_call_gc();
          uVar3 = unaff_R15;
        }
        *(undefined8 *)(uVar3 - 0x10) = 0x4fd;
        *(undefined8 *)(uVar3 - 8) = *(undefined8 *)(unaff_RBX + -4 + lVar2 * 4);
        unaff_RBX = lVar5;
      }
      caml_apply2(in_RAX);
      bVar4 = local_18 != lVar1;
      local_18 = local_18 + 2;
    } while (bVar4);
  }
  return 1;
}



undefined * camlArray__mapi_142(void)

{
  undefined8 in_RAX;
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RBX;
  ulong unaff_R15;
  ulong uVar5;
  bool bVar6;
  long local_8;
  
  uVar1 = (ulong)unaff_RBX[-1] >> 9 | 1;
  if (uVar1 != 1) {
    uVar5 = unaff_R15;
    puVar4 = unaff_RBX;
    if (*(char *)(unaff_RBX + -1) == -2) {
      while (unaff_R15 = uVar5 - 0x10, unaff_R15 < caml_young_limit) {
        caml_call_gc();
        uVar5 = unaff_R15;
      }
      *(undefined8 *)(uVar5 - 0x10) = 0x4fd;
      *(undefined8 *)(uVar5 - 8) = *unaff_RBX;
      unaff_RBX = puVar4;
    }
    uVar2 = caml_apply2();
    puVar3 = (undefined *)caml_c_call(uVar1,uVar2);
    if (2 < (long)(uVar1 - 2)) {
      local_8 = 3;
      do {
        uVar5 = unaff_R15;
        puVar4 = unaff_RBX;
        if (*(char *)(unaff_RBX + -1) == -2) {
          while (unaff_R15 = uVar5 - 0x10, unaff_R15 < caml_young_limit) {
            caml_call_gc();
            uVar5 = unaff_R15;
          }
          *(undefined8 *)(uVar5 - 0x10) = 0x4fd;
          *(undefined8 *)(uVar5 - 8) = *(undefined8 *)((long)unaff_RBX + local_8 * 4 + -4);
          unaff_RBX = puVar4;
        }
        puVar4 = (undefined8 *)caml_apply2(in_RAX);
        if (puVar3[-8] == -2) {
          *(undefined8 *)(puVar3 + local_8 * 4 + -4) = *puVar4;
        }
        else {
          caml_modify(puVar3 + local_8 * 4 + -4,puVar4);
        }
        bVar6 = local_8 != uVar1 - 2;
        local_8 = local_8 + 2;
      } while (bVar6);
    }
    return puVar3;
  }
  return &camlArray__23;
}



void camlArray__to_list_148(void)

{
  undefined8 in_RAX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x18) = 5;
  *(code **)(unaff_R15 - 0x10) = camlArray__tolist_150;
  *(undefined8 *)(unaff_R15 - 8) = in_RAX;
  camlArray__tolist_150();
  return;
}



void camlArray__list_length_153(void)

{
  long unaff_RBX;
  
  if (unaff_RBX != 1) {
    camlArray__list_length_153();
    return;
  }
  return;
}



undefined * camlArray__of_list_157(void)

{
  undefined8 *in_RAX;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong unaff_R15;
  
  if (in_RAX != (undefined8 *)0x1) {
    uVar2 = *in_RAX;
    uVar1 = camlArray__list_length_153();
    uVar2 = caml_c_call(uVar1,uVar2);
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x28) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x28;
    }
    *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
    *(code **)(unaff_R15 - 0x20) = caml_curry2;
    *(undefined8 *)(unaff_R15 - 0x18) = 5;
    *(code **)(unaff_R15 - 0x10) = camlArray__fill_162;
    *(undefined8 *)(unaff_R15 - 8) = uVar2;
    puVar3 = (undefined *)camlArray__fill_162();
    return puVar3;
  }
  return &camlArray__22;
}



undefined8 camlArray__fold_left_166(long param_1)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  long lVar4;
  long lVar5;
  ulong unaff_R15;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  long local_10;
  
  while (uVar6 = unaff_R15 - 0x10, uVar6 < caml_young_limit) {
    caml_call_gc();
    in_RAX = extraout_RDX;
    unaff_R15 = uVar6;
  }
  puVar1 = (undefined8 *)(unaff_R15 - 8);
  *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
  *puVar1 = unaff_RBX;
  lVar2 = (*(ulong *)(param_1 + -8) >> 9 | 1) - 2;
  if (0 < lVar2) {
    local_10 = 1;
    do {
      lVar4 = local_10;
      lVar5 = param_1;
      uVar7 = uVar6;
      if (*(char *)(param_1 + -8) == -2) {
        while (uVar6 = uVar7 - 0x10, uVar6 < caml_young_limit) {
          caml_call_gc();
          uVar7 = uVar6;
        }
        *(undefined8 *)(uVar7 - 0x10) = 0x4fd;
        *(undefined8 *)(uVar7 - 8) = *(undefined8 *)(lVar5 + -4 + lVar4 * 4);
      }
      uVar3 = caml_apply2(in_RAX);
      caml_modify(puVar1,uVar3);
      bVar8 = local_10 != lVar2;
      local_10 = local_10 + 2;
    } while (bVar8);
  }
  return *puVar1;
}



undefined8 camlArray__fold_right_172(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  long unaff_RBX;
  long lVar3;
  long lVar4;
  ulong unaff_R15;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  
  while (uVar5 = unaff_R15 - 0x10, uVar5 < caml_young_limit) {
    caml_call_gc();
    unaff_R15 = uVar5;
  }
  puVar1 = (undefined8 *)(unaff_R15 - 8);
  *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
  *puVar1 = param_1;
  lVar3 = (*(ulong *)(unaff_RBX + -8) >> 9 | 1) - 2;
  if (0 < lVar3) {
    do {
      lVar4 = lVar3;
      uVar6 = uVar5;
      lVar8 = unaff_RBX;
      if (*(char *)(unaff_RBX + -8) == -2) {
        while (uVar5 = uVar6 - 0x10, uVar5 < caml_young_limit) {
          caml_call_gc();
          uVar6 = uVar5;
        }
        *(undefined8 *)(uVar6 - 0x10) = 0x4fd;
        *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(unaff_RBX + -4 + lVar4 * 4);
        unaff_RBX = lVar8;
      }
      uVar2 = caml_apply2(in_RAX);
      caml_modify(puVar1,uVar2);
      bVar7 = lVar3 != 1;
      lVar3 = lVar3 + -2;
    } while (bVar7);
  }
  return *puVar1;
}



undefined8 camlArray__sort_179(void)

{
  code **ppcVar1;
  long *plVar2;
  undefined auVar3 [16];
  undefined8 in_RAX;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  long **unaff_RBX;
  ulong uVar6;
  long **pplVar7;
  long **pplVar8;
  undefined8 *puVar9;
  code **ppcVar10;
  ulong unaff_R15;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  long **pplVar15;
  
  pplVar15 = unaff_RBX;
  while (uVar11 = unaff_R15 - 0xf0, uVar11 < caml_young_limit) {
    caml_call_gc();
    unaff_R15 = uVar11;
  }
  ppcVar1 = (code **)(unaff_R15 - 0xe8);
  *(undefined8 *)(unaff_R15 - 0xf0) = 0x14f7;
  *ppcVar1 = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0xe0) = 5;
  *(code **)(unaff_R15 - 0xd8) = camlArray__maxson_182;
  *(undefined8 *)(unaff_R15 - 0xd0) = in_RAX;
  *(long ***)(unaff_R15 - 200) = unaff_RBX;
  *(undefined8 *)(unaff_R15 - 0xc0) = 0x18f7;
  *(code **)(unaff_R15 - 0xb8) = caml_curry3;
  *(undefined8 *)(unaff_R15 - 0xb0) = 7;
  *(code **)(unaff_R15 - 0xa8) = camlArray__trickledown_187;
  *(undefined8 *)(unaff_R15 - 0xa0) = in_RAX;
  *(long ***)(unaff_R15 - 0x98) = unaff_RBX;
  *(code ***)(unaff_R15 - 0x90) = ppcVar1;
  ppcVar10 = (code **)(unaff_R15 - 0x80);
  *(undefined8 *)(unaff_R15 - 0x88) = 0x14f7;
  *ppcVar10 = caml_curry3;
  *(undefined8 *)(unaff_R15 - 0x78) = 7;
  *(code **)(unaff_R15 - 0x70) = camlArray__trickle_192;
  *(long ***)(unaff_R15 - 0x68) = unaff_RBX;
  *(code ***)(unaff_R15 - 0x60) = (code **)(unaff_R15 - 0xb8);
  *(undefined8 *)(unaff_R15 - 0x58) = 0x14f7;
  *(code **)(unaff_R15 - 0x50) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x48) = 5;
  *(code **)(unaff_R15 - 0x40) = camlArray__bubbledown_197;
  *(long ***)(unaff_R15 - 0x38) = unaff_RBX;
  *(code ***)(unaff_R15 - 0x30) = ppcVar1;
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x18) = 5;
  *(code **)(unaff_R15 - 0x10) = camlArray__bubble_201;
  *(code ***)(unaff_R15 - 8) = (code **)(unaff_R15 - 0x50);
  while (uVar12 = uVar11 - 0x30, uVar12 < caml_young_limit) {
    caml_call_gc();
    uVar11 = uVar12;
  }
  *(undefined8 *)(uVar11 - 0x30) = 0x14f7;
  *(code **)(uVar11 - 0x28) = caml_curry2;
  *(undefined8 *)(uVar11 - 0x20) = 5;
  *(code **)(uVar11 - 0x18) = camlArray__trickleup_205;
  *(undefined8 *)(uVar11 - 0x10) = in_RAX;
  *(long ***)(uVar11 - 8) = unaff_RBX;
  uVar4 = (ulong)unaff_RBX[-1] >> 9 | 1;
  auVar3 = ZEXT816((ulong)((long)(uVar4 + 2) >> 1));
  uVar5 = SUB168(auVar3 % SEXT816(3),0);
  uVar6 = SUB168(auVar3 / SEXT816(3),0) * 2 - 1;
  pplVar7 = pplVar15;
  if (0 < (long)uVar6) {
    do {
      plVar2 = pplVar7[-1];
      pplVar15 = pplVar7;
      if (((ulong)plVar2 & 0xff) == 0xfe) {
        uVar13 = uVar12;
        if ((ulong)plVar2 >> 9 <= uVar6) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error(0xfe,pplVar7,uVar5);
        }
        while (uVar12 = uVar13 - 0x10, uVar12 < caml_young_limit) {
          caml_call_gc();
          uVar13 = uVar12;
        }
        puVar9 = (undefined8 *)(uVar13 - 8);
        *(undefined8 *)(uVar13 - 0x10) = 0x4fd;
        *puVar9 = *(undefined8 *)((long)pplVar7 + uVar6 * 4 + -4);
      }
      else {
        if ((ulong)plVar2 >> 9 <= uVar6) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error((ulong)plVar2 & 0xff,pplVar7,uVar5);
        }
        puVar9 = *(undefined8 **)((long)pplVar7 + uVar6 * 4 + -4);
      }
      camlArray__trickle_192(puVar9,ppcVar10);
      bVar14 = uVar6 != 1;
      uVar5 = extraout_RDX;
      uVar6 = uVar6 - 2;
      pplVar7 = pplVar15;
    } while (bVar14);
  }
  uVar6 = uVar4 - 2;
  pplVar7 = pplVar15;
  if (4 < (long)uVar6) {
    do {
      plVar2 = pplVar7[-1];
      pplVar15 = pplVar7;
      if (((ulong)plVar2 & 0xff) == 0xfe) {
        uVar13 = uVar12;
        if ((ulong)plVar2 >> 9 <= uVar6) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        while (uVar12 = uVar13 - 0x10, uVar12 < caml_young_limit) {
          caml_call_gc();
          uVar5 = extraout_RDX_04;
          uVar13 = uVar12;
        }
        *(undefined8 *)(uVar13 - 0x10) = 0x4fd;
        *(undefined8 *)(uVar13 - 8) = *(undefined8 *)((long)pplVar7 + uVar6 * 4 + -4);
      }
      else {
        if ((ulong)plVar2 >> 9 <= uVar6) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
      }
      plVar2 = pplVar7[-1];
      if (((ulong)plVar2 & 0xff) == 0xfe) {
        uVar13 = uVar12;
        if ((ulong)plVar2 >> 9 < 2) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        while (uVar12 = uVar13 - 0x10, uVar12 < caml_young_limit) {
          caml_call_gc();
          uVar5 = extraout_RDX_03;
          uVar13 = uVar12;
        }
        pplVar8 = (long **)(uVar13 - 8);
        *(undefined8 *)(uVar13 - 0x10) = 0x4fd;
        *pplVar8 = *pplVar7;
      }
      else {
        if ((ulong)plVar2 >> 9 < 2) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error();
        }
        pplVar8 = (long **)*pplVar7;
      }
      plVar2 = pplVar7[-1];
      if (((ulong)plVar2 & 0xff) == 0xfe) {
        if ((ulong)plVar2 >> 9 <= uVar6) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error(0xfe,pplVar8,uVar5);
        }
        *(long **)((long)pplVar7 + uVar6 * 4 + -4) = *pplVar8;
      }
      else {
        if ((ulong)plVar2 >> 9 <= uVar6) {
                    // WARNING: Subroutine does not return
          caml_ml_array_bound_error((ulong)plVar2 & 0xff,pplVar8,uVar5);
        }
        caml_modify((long)pplVar7 + uVar6 * 4 + -4);
      }
      camlArray__bubble_201((code **)(unaff_R15 - 0x20));
      camlArray__trickleup_205((code **)(uVar11 - 0x28));
      bVar14 = uVar6 != 5;
      uVar5 = extraout_RDX_00;
      uVar6 = uVar6 - 2;
      pplVar7 = pplVar15;
    } while (bVar14);
  }
  if (uVar4 < 4) {
    return 1;
  }
  plVar2 = pplVar15[-1];
  if (((ulong)plVar2 & 0xff) == 0xfe) {
    uVar11 = uVar12;
    if ((ulong)plVar2 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    while (uVar12 = uVar11 - 0x10, uVar12 < caml_young_limit) {
      caml_call_gc();
      uVar5 = extraout_RDX_02;
      uVar11 = uVar12;
    }
    pplVar7 = (long **)(uVar11 - 8);
    *(undefined8 *)(uVar11 - 0x10) = 0x4fd;
    *pplVar7 = pplVar15[1];
  }
  else {
    if ((ulong)plVar2 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    pplVar7 = (long **)pplVar15[1];
  }
  plVar2 = pplVar15[-1];
  if (((ulong)plVar2 & 0xff) == 0xfe) {
    if ((ulong)plVar2 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    while (uVar12 - 0x10 < caml_young_limit) {
      caml_call_gc();
      uVar5 = extraout_RDX_01;
      uVar12 = uVar12 - 0x10;
    }
    pplVar8 = (long **)(uVar12 - 8);
    *(undefined8 *)(uVar12 - 0x10) = 0x4fd;
    *pplVar8 = *pplVar15;
  }
  else {
    if ((ulong)plVar2 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    pplVar8 = (long **)*pplVar15;
  }
  plVar2 = pplVar15[-1];
  if (((ulong)plVar2 & 0xff) == 0xfe) {
    if ((ulong)plVar2 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error(0xfe,pplVar8,uVar5);
    }
    pplVar15[1] = *pplVar8;
  }
  else {
    if ((ulong)plVar2 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error((ulong)plVar2 & 0xff,pplVar8,uVar5);
    }
    caml_modify(pplVar15 + 1);
  }
  plVar2 = pplVar15[-1];
  if (((ulong)plVar2 & 0xff) == 0xfe) {
    if ((ulong)plVar2 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *pplVar15 = *pplVar7;
  }
  else {
    if ((ulong)plVar2 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(pplVar15,pplVar7);
  }
  return 1;
}



void camlArray__stable_sort_215(void)

{
  code **ppcVar1;
  code **ppcVar2;
  long lVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  undefined8 *unaff_RBX;
  ulong uVar5;
  long lVar6;
  ulong unaff_R15;
  ulong uVar7;
  undefined8 *puVar8;
  
  while (uVar7 = unaff_R15 - 0x98, uVar7 < caml_young_limit) {
    caml_call_gc();
    unaff_R15 = uVar7;
  }
  ppcVar1 = (code **)(unaff_R15 - 0x90);
  *(undefined8 *)(unaff_R15 - 0x98) = 0x14f7;
  *ppcVar1 = caml_curry7;
  *(undefined8 *)(unaff_R15 - 0x88) = 0xf;
  *(code **)(unaff_R15 - 0x80) = camlArray__merge_218;
  *(undefined8 *)(unaff_R15 - 0x78) = in_RAX;
  *(undefined8 **)(unaff_R15 - 0x70) = unaff_RBX;
  *(undefined8 *)(unaff_R15 - 0x68) = 0x14f7;
  *(code **)(unaff_R15 - 0x60) = caml_curry4;
  *(undefined8 *)(unaff_R15 - 0x58) = 9;
  *(code **)(unaff_R15 - 0x50) = camlArray__isortto_236;
  *(undefined8 *)(unaff_R15 - 0x48) = in_RAX;
  *(undefined8 **)(unaff_R15 - 0x40) = unaff_RBX;
  ppcVar2 = (code **)(unaff_R15 - 0x30);
  *(undefined8 *)(unaff_R15 - 0x38) = 0x18f7;
  *ppcVar2 = caml_curry4;
  *(undefined8 *)(unaff_R15 - 0x28) = 9;
  *(code **)(unaff_R15 - 0x20) = camlArray__sortto_244;
  *(undefined8 **)(unaff_R15 - 0x18) = unaff_RBX;
  *(code ***)(unaff_R15 - 0x10) = ppcVar1;
  *(code ***)(unaff_R15 - 8) = (code **)(unaff_R15 - 0x60);
  uVar5 = (ulong)unaff_RBX[-1] >> 9 | 1;
  if (uVar5 < 0xc) {
    camlArray__isortto_236(1);
    return;
  }
  lVar3 = ((long)uVar5 >> 2) * 2 + 1;
  lVar6 = (uVar5 - lVar3) + 1;
  uVar5 = unaff_RBX[-1];
  if ((uVar5 & 0xff) == 0xfe) {
    puVar8 = unaff_RBX;
    if (uVar5 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    while (uVar7 - 0x10 < caml_young_limit) {
      caml_call_gc();
      uVar7 = uVar7 - 0x10;
    }
    *(undefined8 *)(uVar7 - 0x10) = 0x4fd;
    *(undefined8 *)(uVar7 - 8) = *unaff_RBX;
    unaff_RBX = puVar8;
  }
  else {
    if (uVar5 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
  }
  uVar4 = caml_c_call();
  camlArray__sortto_244(1,lVar6,ppcVar2);
  camlArray__sortto_244(lVar6,lVar3,ppcVar2);
  camlArray__merge_218(uVar4,1,lVar6,unaff_RBX,1,ppcVar1);
  return;
}



undefined8 camlArray__entry(void)

{
  undefined8 *unaff_R15;
  
  camlArray = &camlArray__21;
  DAT_00646bf8 = &camlArray__20;
  DAT_00646c00 = &camlArray__20;
  DAT_00646c20 = &camlArray__19;
  DAT_00646c08 = &camlArray__18;
  DAT_00646c90 = &camlArray__17;
  DAT_00646c10 = &camlArray__16;
  DAT_00646c18 = &camlArray__15;
  DAT_00646c28 = &camlArray__14;
  DAT_00646c30 = &camlArray__13;
  DAT_00646c48 = &camlArray__12;
  DAT_00646c50 = &camlArray__11;
  DAT_00646c58 = &camlArray__10;
  DAT_00646c60 = &camlArray__9;
  DAT_00646c38 = &camlArray__8;
  DAT_00646c98 = &camlArray__7;
  DAT_00646c40 = &camlArray__6;
  DAT_00646c68 = &camlArray__5;
  DAT_00646c70 = &camlArray__4;
  caml_alloc1();
  *unaff_R15 = 0x400;
  unaff_R15[1] = camlArray__3;
  DAT_00646c78 = &camlArray__2;
  DAT_00646c80 = &camlArray__1;
  DAT_00646c88 = &camlArray__1;
  DAT_00646ca0 = (char **)(unaff_R15 + 1);
  DAT_00646ca8 = 0xb;
  return 1;
}



undefined8 camlList__nth_aux_73(void)

{
  undefined8 *in_RAX;
  undefined8 uVar1;
  long unaff_RBX;
  
  if (in_RAX == (undefined8 *)0x1) {
    uVar1 = camlPervasives__failwith_38();
    return uVar1;
  }
  if (unaff_RBX == 1) {
    return *in_RAX;
  }
  uVar1 = camlList__nth_aux_73(in_RAX[1]);
  return uVar1;
}



void camlList__rmap_f_98(long param_1)

{
  undefined8 *in_RAX;
  undefined8 uVar1;
  long unaff_RBX;
  ulong unaff_R15;
  ulong uVar2;
  
  while (unaff_RBX != 1) {
    unaff_RBX = *(long *)(unaff_RBX + 8);
    uVar1 = (***(code ***)(param_1 + 0x18))(**(code ***)(param_1 + 0x18));
    uVar2 = unaff_R15;
    while( true ) {
      unaff_R15 = uVar2 - 0x18;
      if (caml_young_limit <= unaff_R15) break;
      caml_call_gc();
      uVar2 = unaff_R15;
    }
    *(undefined8 *)(uVar2 - 0x18) = 0x800;
    *(undefined8 *)(uVar2 - 0x10) = uVar1;
    *(undefined8 **)(uVar2 - 8) = in_RAX;
    in_RAX = (undefined8 *)(uVar2 - 0x10);
  }
  return;
}



void camlList__rmap2_f_131(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *in_RAX;
  undefined8 uVar2;
  long unaff_RBX;
  ulong unaff_R15;
  ulong uVar3;
  
  while (unaff_RBX != 1) {
    if (param_1 == (undefined8 *)0x1) goto LAB_00414464;
    puVar1 = (undefined8 *)param_1[1];
    unaff_RBX = *(long *)(unaff_RBX + 8);
    uVar2 = caml_apply2(*(undefined8 *)(param_2 + 0x18),param_2,*param_1);
    uVar3 = unaff_R15;
    while( true ) {
      unaff_R15 = uVar3 - 0x18;
      if (caml_young_limit <= unaff_R15) break;
      caml_call_gc();
      uVar3 = unaff_R15;
    }
    *(undefined8 *)(uVar3 - 0x18) = 0x800;
    *(undefined8 *)(uVar3 - 0x10) = uVar2;
    *(undefined8 **)(uVar3 - 8) = in_RAX;
    in_RAX = (undefined8 *)(uVar3 - 0x10);
    param_1 = puVar1;
  }
  if (param_1 == (undefined8 *)0x1) {
    return;
  }
LAB_00414464:
  camlPervasives__invalid_arg_40();
  return;
}



void camlList__find_235(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *in_RAX;
  long lVar3;
  undefined8 *unaff_RBX;
  ulong unaff_R15;
  ulong uVar4;
  
  while (unaff_RBX != (undefined8 *)0x1) {
    puVar1 = (undefined8 *)unaff_RBX[1];
    uVar2 = *unaff_RBX;
    lVar3 = (***(code ***)(param_1 + 0x18))(**(code ***)(param_1 + 0x18));
    unaff_RBX = puVar1;
    uVar4 = unaff_R15;
    if (lVar3 != 1) {
      while (unaff_R15 = uVar4 - 0x18, unaff_R15 < caml_young_limit) {
        caml_call_gc();
        uVar4 = unaff_R15;
      }
      *(undefined8 *)(uVar4 - 0x18) = 0x800;
      *(undefined8 *)(uVar4 - 0x10) = uVar2;
      *(undefined8 **)(uVar4 - 8) = in_RAX;
      in_RAX = (undefined8 *)(uVar4 - 0x10);
    }
  }
  camlList__rev_append_79();
  return;
}



void camlList__part_243(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *in_RAX;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_RBX;
  ulong unaff_R15;
  ulong uVar5;
  
  while (param_1 != (undefined8 *)0x1) {
    puVar1 = (undefined8 *)param_1[1];
    uVar3 = *param_1;
    lVar2 = (***(code ***)(param_2 + 0x18))(**(code ***)(param_2 + 0x18));
    uVar5 = unaff_R15;
    param_1 = puVar1;
    if (lVar2 == 1) {
      while( true ) {
        unaff_R15 = uVar5 - 0x18;
        if (caml_young_limit <= unaff_R15) break;
        caml_call_gc();
        uVar5 = unaff_R15;
      }
      *(undefined8 *)(uVar5 - 0x18) = 0x800;
      *(undefined8 *)(uVar5 - 0x10) = uVar3;
      *(undefined8 **)(uVar5 - 8) = unaff_RBX;
      unaff_RBX = (undefined8 *)(uVar5 - 0x10);
    }
    else {
      while( true ) {
        unaff_R15 = uVar5 - 0x18;
        if (caml_young_limit <= unaff_R15) break;
        caml_call_gc();
        uVar5 = unaff_R15;
      }
      *(undefined8 *)(uVar5 - 0x18) = 0x800;
      *(undefined8 *)(uVar5 - 0x10) = uVar3;
      *(undefined8 **)(uVar5 - 8) = in_RAX;
      in_RAX = (undefined8 *)(uVar5 - 0x10);
    }
  }
  uVar3 = camlList__rev_append_79(1);
  uVar4 = camlList__rev_append_79();
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x18) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x10) = uVar4;
  *(undefined8 *)(unaff_R15 - 8) = uVar3;
  return;
}



void camlList__rev_merge_279(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *in_RAX;
  long lVar5;
  undefined8 *unaff_RBX;
  ulong unaff_R15;
  ulong uVar6;
  
  while( true ) {
    if (in_RAX == (undefined8 *)0x1) {
      camlList__rev_append_79();
      return;
    }
    if (unaff_RBX == (undefined8 *)0x1) break;
    puVar1 = (undefined8 *)unaff_RBX[1];
    uVar2 = *unaff_RBX;
    puVar3 = (undefined8 *)in_RAX[1];
    uVar4 = *in_RAX;
    lVar5 = caml_apply2(*(undefined8 *)(param_2 + 0x18));
    uVar6 = unaff_R15;
    if (lVar5 < 2) {
      while( true ) {
        unaff_R15 = uVar6 - 0x18;
        if (caml_young_limit <= unaff_R15) break;
        caml_call_gc();
        uVar6 = unaff_R15;
      }
      *(undefined8 *)(uVar6 - 0x18) = 0x800;
      *(undefined8 *)(uVar6 - 0x10) = uVar4;
      *(undefined8 **)(uVar6 - 8) = param_1;
      in_RAX = puVar3;
      param_1 = (undefined8 *)(uVar6 - 0x10);
    }
    else {
      while( true ) {
        unaff_R15 = uVar6 - 0x18;
        if (caml_young_limit <= unaff_R15) break;
        caml_call_gc();
        uVar6 = unaff_R15;
      }
      *(undefined8 *)(uVar6 - 0x18) = 0x800;
      *(undefined8 *)(uVar6 - 0x10) = uVar2;
      *(undefined8 **)(uVar6 - 8) = param_1;
      unaff_RBX = puVar1;
      param_1 = (undefined8 *)(uVar6 - 0x10);
    }
  }
  camlList__rev_append_79();
  return;
}



void camlList__rev_merge_rev_289(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *in_RAX;
  long lVar5;
  undefined8 *unaff_RBX;
  ulong unaff_R15;
  ulong uVar6;
  
  while( true ) {
    if (in_RAX == (undefined8 *)0x1) {
      camlList__rev_append_79();
      return;
    }
    if (unaff_RBX == (undefined8 *)0x1) break;
    puVar1 = (undefined8 *)unaff_RBX[1];
    uVar2 = *unaff_RBX;
    puVar3 = (undefined8 *)in_RAX[1];
    uVar4 = *in_RAX;
    lVar5 = caml_apply2(*(undefined8 *)(param_2 + 0x18));
    uVar6 = unaff_R15;
    if (lVar5 < 2) {
      while( true ) {
        unaff_R15 = uVar6 - 0x18;
        if (caml_young_limit <= unaff_R15) break;
        caml_call_gc();
        uVar6 = unaff_R15;
      }
      *(undefined8 *)(uVar6 - 0x18) = 0x800;
      *(undefined8 *)(uVar6 - 0x10) = uVar2;
      *(undefined8 **)(uVar6 - 8) = param_1;
      unaff_RBX = puVar1;
      param_1 = (undefined8 *)(uVar6 - 0x10);
    }
    else {
      while( true ) {
        unaff_R15 = uVar6 - 0x18;
        if (caml_young_limit <= unaff_R15) break;
        caml_call_gc();
        uVar6 = unaff_R15;
      }
      *(undefined8 *)(uVar6 - 0x18) = 0x800;
      *(undefined8 *)(uVar6 - 0x10) = uVar4;
      *(undefined8 **)(uVar6 - 8) = param_1;
      in_RAX = puVar3;
      param_1 = (undefined8 *)(uVar6 - 0x10);
    }
  }
  camlList__rev_append_79();
  return;
}



undefined8 * camlList__rev_sort_300(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_RAX;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RBX;
  ulong unaff_R15;
  undefined8 uVar5;
  
  if (in_RAX == 5) {
    if ((unaff_RBX != (undefined8 *)0x1) && ((undefined8 *)unaff_RBX[1] != (undefined8 *)0x1)) {
      uVar1 = *(undefined8 *)unaff_RBX[1];
      uVar5 = *unaff_RBX;
      lVar3 = caml_apply2(*(undefined8 *)(param_1 + 0x18));
      if (lVar3 < 2) {
        while (unaff_R15 - 0x30 < caml_young_limit) {
          caml_call_gc();
          unaff_R15 = unaff_R15 - 0x30;
        }
        *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x28) = uVar5;
        *(undefined8 *)(unaff_R15 - 0x20) = 1;
        *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x10) = uVar1;
        *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
        return (undefined8 *)(unaff_R15 - 0x10);
      }
      while (unaff_R15 - 0x30 < caml_young_limit) {
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x30;
      }
      *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
      *(undefined8 *)(unaff_R15 - 0x28) = uVar1;
      *(undefined8 *)(unaff_R15 - 0x20) = 1;
      *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
      *(undefined8 *)(unaff_R15 - 0x10) = uVar5;
      *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
      return (undefined8 *)(unaff_R15 - 0x10);
    }
  }
  else {
    if ((((in_RAX == 7) && (unaff_RBX != (undefined8 *)0x1)) &&
        (puVar4 = (undefined8 *)unaff_RBX[1], puVar4 != (undefined8 *)0x1)) &&
       ((undefined8 *)puVar4[1] != (undefined8 *)0x1)) {
      uVar1 = *(undefined8 *)puVar4[1];
      uVar5 = *puVar4;
      uVar2 = *unaff_RBX;
      lVar3 = caml_apply2(*(undefined8 *)(param_1 + 0x18));
      if (lVar3 < 2) {
        lVar3 = caml_apply2(*(undefined8 *)(param_1 + 0x18));
        if (1 < lVar3) {
          while (unaff_R15 - 0x48 < caml_young_limit) {
            caml_call_gc();
            unaff_R15 = unaff_R15 - 0x48;
          }
          *(undefined8 *)(unaff_R15 - 0x48) = 0x800;
          *(undefined8 *)(unaff_R15 - 0x40) = uVar1;
          *(undefined8 *)(unaff_R15 - 0x38) = 1;
          *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
          *(undefined8 *)(unaff_R15 - 0x28) = uVar2;
          *(undefined8 **)(unaff_R15 - 0x20) = (undefined8 *)(unaff_R15 - 0x40);
          *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
          *(undefined8 *)(unaff_R15 - 0x10) = uVar5;
          *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
          return (undefined8 *)(unaff_R15 - 0x10);
        }
        lVar3 = caml_apply2(*(undefined8 *)(param_1 + 0x18));
        if (lVar3 < 2) {
          while (unaff_R15 - 0x48 < caml_young_limit) {
            caml_call_gc();
            unaff_R15 = unaff_R15 - 0x48;
          }
          *(undefined8 *)(unaff_R15 - 0x48) = 0x800;
          *(undefined8 *)(unaff_R15 - 0x40) = uVar2;
          *(undefined8 *)(unaff_R15 - 0x38) = 1;
          *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
          *(undefined8 *)(unaff_R15 - 0x28) = uVar5;
          *(undefined8 **)(unaff_R15 - 0x20) = (undefined8 *)(unaff_R15 - 0x40);
          *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
          *(undefined8 *)(unaff_R15 - 0x10) = uVar1;
          *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
          return (undefined8 *)(unaff_R15 - 0x10);
        }
        while (unaff_R15 - 0x48 < caml_young_limit) {
          caml_call_gc();
          unaff_R15 = unaff_R15 - 0x48;
        }
        *(undefined8 *)(unaff_R15 - 0x48) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x40) = uVar2;
        *(undefined8 *)(unaff_R15 - 0x38) = 1;
        *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x28) = uVar1;
        *(undefined8 **)(unaff_R15 - 0x20) = (undefined8 *)(unaff_R15 - 0x40);
        *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x10) = uVar5;
        *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
        return (undefined8 *)(unaff_R15 - 0x10);
      }
      lVar3 = caml_apply2(*(undefined8 *)(param_1 + 0x18));
      if (1 < lVar3) {
        while (unaff_R15 - 0x48 < caml_young_limit) {
          caml_call_gc();
          unaff_R15 = unaff_R15 - 0x48;
        }
        *(undefined8 *)(unaff_R15 - 0x48) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x40) = uVar1;
        *(undefined8 *)(unaff_R15 - 0x38) = 1;
        *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x28) = uVar5;
        *(undefined8 **)(unaff_R15 - 0x20) = (undefined8 *)(unaff_R15 - 0x40);
        *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x10) = uVar2;
        *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
        return (undefined8 *)(unaff_R15 - 0x10);
      }
      lVar3 = caml_apply2(*(undefined8 *)(param_1 + 0x18));
      if (lVar3 < 2) {
        while (unaff_R15 - 0x48 < caml_young_limit) {
          caml_call_gc();
          unaff_R15 = unaff_R15 - 0x48;
        }
        *(undefined8 *)(unaff_R15 - 0x48) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x40) = uVar5;
        *(undefined8 *)(unaff_R15 - 0x38) = 1;
        *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x28) = uVar2;
        *(undefined8 **)(unaff_R15 - 0x20) = (undefined8 *)(unaff_R15 - 0x40);
        *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x10) = uVar1;
        *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
        return (undefined8 *)(unaff_R15 - 0x10);
      }
      while (unaff_R15 - 0x48 < caml_young_limit) {
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x48;
      }
      *(undefined8 *)(unaff_R15 - 0x48) = 0x800;
      *(undefined8 *)(unaff_R15 - 0x40) = uVar5;
      *(undefined8 *)(unaff_R15 - 0x38) = 1;
      *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
      *(undefined8 *)(unaff_R15 - 0x28) = uVar1;
      *(undefined8 **)(unaff_R15 - 0x20) = (undefined8 *)(unaff_R15 - 0x40);
      *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
      *(undefined8 *)(unaff_R15 - 0x10) = uVar2;
      *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
      return (undefined8 *)(unaff_R15 - 0x10);
    }
  }
  camlList__chop_271();
  camlList__sort_299(param_1 + -0x20);
  camlList__sort_299(param_1 + -0x20);
  puVar4 = (undefined8 *)camlList__rev_merge_279(1,*(undefined8 *)(param_1 + 0x20));
  return puVar4;
}



undefined8 * camlList__sort_299(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_RAX;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RBX;
  ulong unaff_R15;
  undefined8 uVar5;
  
  if (in_RAX == 5) {
    if ((unaff_RBX != (undefined8 *)0x1) && ((undefined8 *)unaff_RBX[1] != (undefined8 *)0x1)) {
      uVar1 = *(undefined8 *)unaff_RBX[1];
      uVar5 = *unaff_RBX;
      lVar3 = caml_apply2(*(undefined8 *)(param_1 + 0x38));
      if (1 < lVar3) {
        while (unaff_R15 - 0x30 < caml_young_limit) {
          caml_call_gc();
          unaff_R15 = unaff_R15 - 0x30;
        }
        *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x28) = uVar5;
        *(undefined8 *)(unaff_R15 - 0x20) = 1;
        *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x10) = uVar1;
        *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
        return (undefined8 *)(unaff_R15 - 0x10);
      }
      while (unaff_R15 - 0x30 < caml_young_limit) {
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x30;
      }
      *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
      *(undefined8 *)(unaff_R15 - 0x28) = uVar1;
      *(undefined8 *)(unaff_R15 - 0x20) = 1;
      *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
      *(undefined8 *)(unaff_R15 - 0x10) = uVar5;
      *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
      return (undefined8 *)(unaff_R15 - 0x10);
    }
  }
  else {
    if ((((in_RAX == 7) && (unaff_RBX != (undefined8 *)0x1)) &&
        (puVar4 = (undefined8 *)unaff_RBX[1], puVar4 != (undefined8 *)0x1)) &&
       ((undefined8 *)puVar4[1] != (undefined8 *)0x1)) {
      uVar1 = *(undefined8 *)puVar4[1];
      uVar5 = *puVar4;
      uVar2 = *unaff_RBX;
      lVar3 = caml_apply2(*(undefined8 *)(param_1 + 0x38));
      if (1 < lVar3) {
        lVar3 = caml_apply2(*(undefined8 *)(param_1 + 0x38));
        if (lVar3 < 2) {
          while (unaff_R15 - 0x48 < caml_young_limit) {
            caml_call_gc();
            unaff_R15 = unaff_R15 - 0x48;
          }
          *(undefined8 *)(unaff_R15 - 0x48) = 0x800;
          *(undefined8 *)(unaff_R15 - 0x40) = uVar1;
          *(undefined8 *)(unaff_R15 - 0x38) = 1;
          *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
          *(undefined8 *)(unaff_R15 - 0x28) = uVar2;
          *(undefined8 **)(unaff_R15 - 0x20) = (undefined8 *)(unaff_R15 - 0x40);
          *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
          *(undefined8 *)(unaff_R15 - 0x10) = uVar5;
          *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
          return (undefined8 *)(unaff_R15 - 0x10);
        }
        lVar3 = caml_apply2(*(undefined8 *)(param_1 + 0x38));
        if (1 < lVar3) {
          while (unaff_R15 - 0x48 < caml_young_limit) {
            caml_call_gc();
            unaff_R15 = unaff_R15 - 0x48;
          }
          *(undefined8 *)(unaff_R15 - 0x48) = 0x800;
          *(undefined8 *)(unaff_R15 - 0x40) = uVar2;
          *(undefined8 *)(unaff_R15 - 0x38) = 1;
          *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
          *(undefined8 *)(unaff_R15 - 0x28) = uVar5;
          *(undefined8 **)(unaff_R15 - 0x20) = (undefined8 *)(unaff_R15 - 0x40);
          *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
          *(undefined8 *)(unaff_R15 - 0x10) = uVar1;
          *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
          return (undefined8 *)(unaff_R15 - 0x10);
        }
        while (unaff_R15 - 0x48 < caml_young_limit) {
          caml_call_gc();
          unaff_R15 = unaff_R15 - 0x48;
        }
        *(undefined8 *)(unaff_R15 - 0x48) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x40) = uVar2;
        *(undefined8 *)(unaff_R15 - 0x38) = 1;
        *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x28) = uVar1;
        *(undefined8 **)(unaff_R15 - 0x20) = (undefined8 *)(unaff_R15 - 0x40);
        *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x10) = uVar5;
        *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
        return (undefined8 *)(unaff_R15 - 0x10);
      }
      lVar3 = caml_apply2(*(undefined8 *)(param_1 + 0x38));
      if (lVar3 < 2) {
        while (unaff_R15 - 0x48 < caml_young_limit) {
          caml_call_gc();
          unaff_R15 = unaff_R15 - 0x48;
        }
        *(undefined8 *)(unaff_R15 - 0x48) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x40) = uVar1;
        *(undefined8 *)(unaff_R15 - 0x38) = 1;
        *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x28) = uVar5;
        *(undefined8 **)(unaff_R15 - 0x20) = (undefined8 *)(unaff_R15 - 0x40);
        *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x10) = uVar2;
        *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
        return (undefined8 *)(unaff_R15 - 0x10);
      }
      lVar3 = caml_apply2(*(undefined8 *)(param_1 + 0x38));
      if (1 < lVar3) {
        while (unaff_R15 - 0x48 < caml_young_limit) {
          caml_call_gc();
          unaff_R15 = unaff_R15 - 0x48;
        }
        *(undefined8 *)(unaff_R15 - 0x48) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x40) = uVar5;
        *(undefined8 *)(unaff_R15 - 0x38) = 1;
        *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x28) = uVar2;
        *(undefined8 **)(unaff_R15 - 0x20) = (undefined8 *)(unaff_R15 - 0x40);
        *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x10) = uVar1;
        *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
        return (undefined8 *)(unaff_R15 - 0x10);
      }
      while (unaff_R15 - 0x48 < caml_young_limit) {
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x48;
      }
      *(undefined8 *)(unaff_R15 - 0x48) = 0x800;
      *(undefined8 *)(unaff_R15 - 0x40) = uVar5;
      *(undefined8 *)(unaff_R15 - 0x38) = 1;
      *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
      *(undefined8 *)(unaff_R15 - 0x28) = uVar1;
      *(undefined8 **)(unaff_R15 - 0x20) = (undefined8 *)(unaff_R15 - 0x40);
      *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
      *(undefined8 *)(unaff_R15 - 0x10) = uVar2;
      *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x28);
      return (undefined8 *)(unaff_R15 - 0x10);
    }
  }
  camlList__chop_271();
  camlList__rev_sort_300(param_1 + 0x20);
  camlList__rev_sort_300(param_1 + 0x20);
  puVar4 = (undefined8 *)camlList__rev_merge_rev_289(1,*(undefined8 *)(param_1 + 0x48));
  return puVar4;
}



void camlList__length_aux_58(void)

{
  long unaff_RBX;
  
  if (unaff_RBX != 1) {
    camlList__length_aux_58();
    return;
  }
  return;
}



void camlList__length_62(void)

{
  camlList__length_aux_58();
  return;
}



undefined8 camlList__hd_64(void)

{
  undefined8 *in_RAX;
  undefined8 uVar1;
  
  if (in_RAX != (undefined8 *)0x1) {
    return *in_RAX;
  }
  uVar1 = camlPervasives__failwith_38();
  return uVar1;
}



undefined8 camlList__tl_67(void)

{
  long in_RAX;
  undefined8 uVar1;
  
  if (in_RAX != 1) {
    return *(undefined8 *)(in_RAX + 8);
  }
  uVar1 = camlPervasives__failwith_38();
  return uVar1;
}



void camlList__nth_70(void)

{
  long unaff_RBX;
  
  if (unaff_RBX < 1) {
    camlPervasives__invalid_arg_40();
    return;
  }
  camlList__nth_aux_73(&camlList__48);
  return;
}



undefined8 * camlList__rev_append_79(void)

{
  undefined8 *in_RAX;
  undefined8 *extraout_RDX;
  undefined8 *unaff_RBX;
  undefined8 uVar1;
  ulong unaff_R15;
  ulong uVar2;
  
  while (in_RAX != (undefined8 *)0x1) {
    uVar1 = *in_RAX;
    in_RAX = (undefined8 *)in_RAX[1];
    uVar2 = unaff_R15;
    while( true ) {
      unaff_R15 = uVar2 - 0x18;
      if (caml_young_limit <= unaff_R15) break;
      caml_call_gc();
      in_RAX = extraout_RDX;
      uVar2 = unaff_R15;
    }
    *(undefined8 *)(uVar2 - 0x18) = 0x800;
    *(undefined8 *)(uVar2 - 0x10) = uVar1;
    *(undefined8 **)(uVar2 - 8) = unaff_RBX;
    unaff_RBX = (undefined8 *)(uVar2 - 0x10);
  }
  return unaff_RBX;
}



void camlList__rev_84(void)

{
  camlList__rev_append_79();
  return;
}



undefined8 camlList__flatten_86(void)

{
  long in_RAX;
  undefined8 uVar1;
  
  if (in_RAX != 1) {
    camlList__flatten_86(*(undefined8 *)(in_RAX + 8));
    uVar1 = camlPervasives___40_167();
    return uVar1;
  }
  return 1;
}



undefined8 * camlList__map_90(void)

{
  code **in_RAX;
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_RBX;
  ulong unaff_R15;
  
  if (unaff_RBX != 1) {
    uVar1 = (**in_RAX)(*in_RAX);
    uVar2 = camlList__map_90();
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x18) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x18;
    }
    *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
    *(undefined8 *)(unaff_R15 - 0x10) = uVar1;
    *(undefined8 *)(unaff_R15 - 8) = uVar2;
    return (undefined8 *)(unaff_R15 - 0x10);
  }
  return (undefined8 *)0x1;
}



void camlList__rev_map_95(void)

{
  undefined8 in_RAX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x18) = 5;
  *(code **)(unaff_R15 - 0x10) = camlList__rmap_f_98;
  *(undefined8 *)(unaff_R15 - 8) = in_RAX;
  camlList__rmap_f_98();
  return;
}



undefined8 camlList__iter_102(void)

{
  code **in_RAX;
  long unaff_RBX;
  
  while (unaff_RBX != 1) {
    unaff_RBX = *(long *)(unaff_RBX + 8);
    (**in_RAX)(*in_RAX);
  }
  return 1;
}



undefined8 camlList__fold_left_106(long param_1)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  
  while (param_1 != 1) {
    param_1 = *(long *)(param_1 + 8);
    unaff_RBX = caml_apply2(in_RAX);
  }
  return unaff_RBX;
}



undefined8 camlList__fold_right_112(undefined8 param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 *unaff_RBX;
  
  if (unaff_RBX != (undefined8 *)0x1) {
    camlList__fold_right_112(param_1,*unaff_RBX,unaff_RBX[1]);
    uVar1 = caml_apply2(in_RAX);
    return uVar1;
  }
  return param_1;
}



undefined8 * camlList__map2_118(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_RBX;
  ulong unaff_R15;
  
  if (unaff_RBX == 1) {
    if (param_1 == 1) {
      return (undefined8 *)0x1;
    }
  }
  else {
    if (param_1 != 1) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      uVar1 = caml_apply2();
      uVar2 = camlList__map2_118(uVar2);
      while( true ) {
        if (caml_young_limit <= unaff_R15 - 0x18) break;
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x18;
      }
      *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
      *(undefined8 *)(unaff_R15 - 0x10) = uVar1;
      *(undefined8 *)(unaff_R15 - 8) = uVar2;
      return (undefined8 *)(unaff_R15 - 0x10);
    }
  }
  puVar3 = (undefined8 *)camlPervasives__invalid_arg_40();
  return puVar3;
}



void camlList__rev_map2_127(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RDX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    in_RAX = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry3;
  *(undefined8 *)(unaff_R15 - 0x18) = 7;
  *(code **)(unaff_R15 - 0x10) = camlList__rmap2_f_131;
  *(undefined8 *)(unaff_R15 - 8) = in_RAX;
  camlList__rmap2_f_131();
  return;
}



undefined8 camlList__iter2_139(long param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  long unaff_RBX;
  
  while (unaff_RBX != 1) {
    if (param_1 == 1) goto LAB_00415700;
    param_1 = *(long *)(param_1 + 8);
    unaff_RBX = *(long *)(unaff_RBX + 8);
    caml_apply2(in_RAX);
  }
  if (param_1 == 1) {
    return 1;
  }
LAB_00415700:
  uVar1 = camlPervasives__invalid_arg_40();
  return uVar1;
}



undefined8 camlList__fold_left2_147(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  
  while (param_1 != 1) {
    if (param_2 == (undefined8 *)0x1) goto LAB_00415774;
    puVar1 = (undefined8 *)param_2[1];
    param_1 = *(long *)(param_1 + 8);
    unaff_RBX = caml_apply3(*param_2,in_RAX);
    param_2 = puVar1;
  }
  if (param_2 == (undefined8 *)0x1) {
    return unaff_RBX;
  }
LAB_00415774:
  uVar2 = camlPervasives__invalid_arg_40();
  return uVar2;
}



undefined8 camlList__fold_right2_156(undefined8 *param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 *unaff_RBX;
  undefined8 in_R9;
  
  if (unaff_RBX == (undefined8 *)0x1) {
    if (param_1 == (undefined8 *)0x1) {
      return param_2;
    }
  }
  else {
    if (param_1 != (undefined8 *)0x1) {
      uVar1 = camlList__fold_right2_156
                        (param_1[1],param_2,*unaff_RBX,unaff_RBX[1],param_1[1],in_R9,*unaff_RBX,
                         *param_1);
      uVar1 = caml_apply3(uVar1,in_RAX);
      return uVar1;
    }
  }
  uVar1 = camlPervasives__invalid_arg_40();
  return uVar1;
}



undefined8 camlList__for_all_165(void)

{
  code **in_RAX;
  long lVar1;
  long unaff_RBX;
  
  do {
    if (unaff_RBX == 1) {
      return 3;
    }
    unaff_RBX = *(long *)(unaff_RBX + 8);
    lVar1 = (**in_RAX)(*in_RAX);
  } while (lVar1 != 1);
  return 1;
}



undefined8 camlList__exists_169(void)

{
  code **in_RAX;
  long lVar1;
  long unaff_RBX;
  
  do {
    if (unaff_RBX == 1) {
      return 1;
    }
    unaff_RBX = *(long *)(unaff_RBX + 8);
    lVar1 = (**in_RAX)(*in_RAX);
  } while (lVar1 == 1);
  return 3;
}



undefined8 camlList__for_all2_173(long param_1)

{
  undefined8 in_RAX;
  long lVar1;
  undefined8 uVar2;
  long unaff_RBX;
  
  while (unaff_RBX != 1) {
    if (param_1 == 1) goto LAB_00415920;
    param_1 = *(long *)(param_1 + 8);
    unaff_RBX = *(long *)(unaff_RBX + 8);
    lVar1 = caml_apply2(in_RAX);
    if (lVar1 == 1) {
      return 1;
    }
  }
  if (param_1 == 1) {
    return 3;
  }
LAB_00415920:
  uVar2 = camlPervasives__invalid_arg_40();
  return uVar2;
}



undefined8 camlList__exists2_181(long param_1)

{
  undefined8 in_RAX;
  long lVar1;
  undefined8 uVar2;
  long unaff_RBX;
  
  while (unaff_RBX != 1) {
    if (param_1 == 1) goto LAB_004159a0;
    param_1 = *(long *)(param_1 + 8);
    unaff_RBX = *(long *)(unaff_RBX + 8);
    lVar1 = caml_apply2(in_RAX);
    if (lVar1 != 1) {
      return 3;
    }
  }
  if (param_1 == 1) {
    return 1;
  }
LAB_004159a0:
  uVar2 = camlPervasives__invalid_arg_40();
  return uVar2;
}



undefined8 camlList__mem_189(void)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined8 *unaff_RBX;
  
  do {
    if (unaff_RBX == (undefined8 *)0x1) {
      return 1;
    }
    puVar1 = (undefined8 *)unaff_RBX[1];
    lVar2 = caml_c_call(*unaff_RBX,in_RAX);
    unaff_RBX = puVar1;
  } while (lVar2 != 1);
  return 3;
}



undefined8 camlList__memq_193(void)

{
  long in_RAX;
  undefined8 uVar1;
  long *unaff_RBX;
  
  if (unaff_RBX == (long *)0x1) {
    return 1;
  }
  if (*unaff_RBX == in_RAX) {
    return 3;
  }
  uVar1 = camlList__memq_193(*unaff_RBX,unaff_RBX[1]);
  return uVar1;
}



undefined8 camlList__assoc_197(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  long lVar3;
  long *unaff_RBX;
  ulong unaff_R15;
  
  do {
    if (unaff_RBX == (long *)0x1) {
      while (unaff_R15 - 0x10 < caml_young_limit) {
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x10;
      }
      *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
      *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    plVar1 = (long *)unaff_RBX[1];
    uVar2 = ((undefined8 *)*unaff_RBX)[1];
    lVar3 = caml_c_call(*(undefined8 *)*unaff_RBX,in_RAX);
    unaff_RBX = plVar1;
  } while (lVar3 != 1);
  return uVar2;
}



long camlList__assq_202(void)

{
  long *plVar1;
  long in_RAX;
  long **unaff_RBX;
  ulong unaff_R15;
  
  do {
    if (unaff_RBX == (long **)0x1) {
      while (unaff_R15 - 0x10 < caml_young_limit) {
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x10;
      }
      *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
      *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    plVar1 = *unaff_RBX;
    unaff_RBX = (long **)unaff_RBX[1];
  } while (*plVar1 != in_RAX);
  return plVar1[1];
}



undefined8 camlList__mem_assoc_207(void)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined8 *unaff_RBX;
  
  do {
    if (unaff_RBX == (undefined8 *)0x1) {
      return 1;
    }
    puVar1 = (undefined8 *)unaff_RBX[1];
    lVar2 = caml_c_call(*(undefined8 *)*unaff_RBX,in_RAX);
    unaff_RBX = puVar1;
  } while (lVar2 != 1);
  return 3;
}



undefined8 camlList__mem_assq_212(void)

{
  long in_RAX;
  undefined8 uVar1;
  long **unaff_RBX;
  
  if (unaff_RBX == (long **)0x1) {
    return 1;
  }
  if (**unaff_RBX == in_RAX) {
    return 3;
  }
  uVar1 = camlList__mem_assq_212(**unaff_RBX,unaff_RBX[1]);
  return uVar1;
}



undefined8 * camlList__remove_assoc_217(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_RBX;
  ulong unaff_R15;
  
  if (unaff_RBX == (undefined8 *)0x1) {
    return (undefined8 *)0x1;
  }
  puVar1 = (undefined8 *)unaff_RBX[1];
  puVar2 = (undefined8 *)*unaff_RBX;
  lVar3 = caml_c_call(*puVar2);
  if (lVar3 == 1) {
    return puVar1;
  }
  uVar4 = camlList__remove_assoc_217();
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x18) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x10) = puVar2;
  *(undefined8 *)(unaff_R15 - 8) = uVar4;
  return (undefined8 *)(unaff_R15 - 0x10);
}



long ** camlList__remove_assq_223(void)

{
  long *plVar1;
  long in_RAX;
  undefined8 uVar2;
  long **unaff_RBX;
  ulong unaff_R15;
  
  if (unaff_RBX == (long **)0x1) {
    return (long **)0x1;
  }
  plVar1 = *unaff_RBX;
  if (*plVar1 == in_RAX) {
    return (long **)unaff_RBX[1];
  }
  uVar2 = camlList__remove_assq_223();
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x18) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(long **)(unaff_R15 - 0x10) = plVar1;
  *(undefined8 *)(unaff_R15 - 8) = uVar2;
  return (long **)(unaff_R15 - 0x10);
}



undefined8 camlList__find_229(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code **in_RAX;
  long lVar3;
  undefined8 *unaff_RBX;
  ulong unaff_R15;
  
  do {
    if (unaff_RBX == (undefined8 *)0x1) {
      while (unaff_R15 - 0x10 < caml_young_limit) {
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x10;
      }
      *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
      *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    puVar1 = (undefined8 *)unaff_RBX[1];
    uVar2 = *unaff_RBX;
    lVar3 = (**in_RAX)(*in_RAX);
    unaff_RBX = puVar1;
  } while (lVar3 == 1);
  return uVar2;
}



void camlList__find_all_233(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_RAX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x18) = 5;
  *(code **)(unaff_R15 - 0x10) = camlList__find_235;
  *(undefined8 *)(unaff_R15 - 8) = in_RAX;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_R15 - 0x20);
                    // WARNING: Could not recover jumptable at 0x00415dc2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void camlList__partition_240(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RDX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    in_RAX = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry3;
  *(undefined8 *)(unaff_R15 - 0x18) = 7;
  *(code **)(unaff_R15 - 0x10) = camlList__part_243;
  *(undefined8 *)(unaff_R15 - 8) = in_RAX;
  camlList__part_243();
  return;
}



long * camlList__split_248(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *in_RAX;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong unaff_R15;
  
  if (in_RAX != (long *)0x1) {
    puVar4 = (undefined8 *)*in_RAX;
    uVar1 = puVar4[1];
    uVar2 = *puVar4;
    puVar4 = (undefined8 *)camlList__split_248(puVar4,in_RAX[1]);
    uVar3 = puVar4[1];
    uVar5 = *puVar4;
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x48) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x48;
    }
    *(undefined8 *)(unaff_R15 - 0x48) = 0x800;
    *(undefined8 *)(unaff_R15 - 0x40) = uVar1;
    *(undefined8 *)(unaff_R15 - 0x38) = uVar3;
    *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
    *(undefined8 *)(unaff_R15 - 0x28) = uVar2;
    *(undefined8 *)(unaff_R15 - 0x20) = uVar5;
    *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
    *(long *)(unaff_R15 - 0x10) = (long)(undefined8 *)(unaff_R15 - 0x28);
    *(undefined8 **)(unaff_R15 - 8) = (undefined8 *)(unaff_R15 - 0x40);
    return (long *)(unaff_R15 - 0x10);
  }
  return (long *)&camlList__41;
}



long * camlList__combine_254(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_RAX;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *unaff_RBX;
  ulong unaff_R15;
  
  if (in_RAX == (undefined8 *)0x1) {
    if (unaff_RBX == (undefined8 *)0x1) {
      return (long *)0x1;
    }
  }
  else {
    if (unaff_RBX != (undefined8 *)0x1) {
      uVar1 = *unaff_RBX;
      uVar2 = *in_RAX;
      uVar3 = camlList__combine_254(uVar2,in_RAX[1],unaff_RBX[1]);
      while( true ) {
        if (caml_young_limit <= unaff_R15 - 0x30) break;
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x30;
      }
      *(undefined8 *)(unaff_R15 - 0x30) = 0x800;
      *(undefined8 *)(unaff_R15 - 0x28) = uVar2;
      *(undefined8 *)(unaff_R15 - 0x20) = uVar1;
      *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
      *(long *)(unaff_R15 - 0x10) = (long)(undefined8 *)(unaff_R15 - 0x28);
      *(undefined8 *)(unaff_R15 - 8) = uVar3;
      return (long *)(unaff_R15 - 0x10);
    }
  }
  plVar4 = (long *)camlPervasives__invalid_arg_40();
  return plVar4;
}



undefined8 * camlList__merge_261(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_RBX;
  ulong unaff_R15;
  
  if (unaff_RBX == (undefined8 *)0x1) {
    return param_1;
  }
  if (param_1 != (undefined8 *)0x1) {
    uVar4 = param_1[1];
    uVar1 = *param_1;
    uVar2 = *unaff_RBX;
    lVar3 = caml_apply2();
    if (lVar3 < 2) {
      uVar4 = camlList__merge_261(param_1);
      while( true ) {
        if (caml_young_limit <= unaff_R15 - 0x18) break;
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x18;
      }
      *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
      *(undefined8 *)(unaff_R15 - 0x10) = uVar2;
      *(undefined8 *)(unaff_R15 - 8) = uVar4;
      return (undefined8 *)(unaff_R15 - 0x10);
    }
    uVar4 = camlList__merge_261(uVar4);
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x18) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x18;
    }
    *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
    *(undefined8 *)(unaff_R15 - 0x10) = uVar1;
    *(undefined8 *)(unaff_R15 - 8) = uVar4;
    return (undefined8 *)(unaff_R15 - 0x10);
  }
  return unaff_RBX;
}



long camlList__chop_271(void)

{
  long in_RAX;
  long unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (in_RAX == 1) {
      return unaff_RBX;
    }
    if (unaff_RBX == 1) break;
    unaff_RBX = *(long *)(unaff_RBX + 8);
    in_RAX = in_RAX + -2;
  }
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x18) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined ***)(unaff_R15 - 0x10) = &caml_exn_Assert_failure;
  *(undefined ***)(unaff_R15 - 8) = &camlList__39;
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined8 camlList__stable_sort_276(void)

{
  undefined8 in_RAX;
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0xa8) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0xa8;
  }
  *(undefined8 *)(unaff_R15 - 0xa8) = 0x10f7;
  *(code **)(unaff_R15 - 0xa0) = caml_curry3;
  *(undefined8 *)(unaff_R15 - 0x98) = 7;
  *(code **)(unaff_R15 - 0x90) = camlList__rev_merge_279;
  *(undefined8 *)(unaff_R15 - 0x88) = in_RAX;
  *(undefined8 *)(unaff_R15 - 0x80) = 0x10f7;
  *(code **)(unaff_R15 - 0x78) = caml_curry3;
  *(undefined8 *)(unaff_R15 - 0x70) = 7;
  *(code **)(unaff_R15 - 0x68) = camlList__rev_merge_rev_289;
  *(undefined8 *)(unaff_R15 - 0x60) = in_RAX;
  *(undefined8 *)(unaff_R15 - 0x58) = 0x28f7;
  *(code **)(unaff_R15 - 0x50) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x48) = 5;
  *(code **)(unaff_R15 - 0x40) = camlList__sort_299;
  *(undefined8 *)(unaff_R15 - 0x38) = 0x10f9;
  *(code **)(unaff_R15 - 0x30) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x28) = 5;
  *(code **)(unaff_R15 - 0x20) = camlList__rev_sort_300;
  *(undefined8 *)(unaff_R15 - 0x18) = in_RAX;
  *(code ***)(unaff_R15 - 0x10) = (code **)(unaff_R15 - 0xa0);
  *(code ***)(unaff_R15 - 8) = (code **)(unaff_R15 - 0x78);
  lVar1 = camlList__length_aux_58();
  if (lVar1 < 5) {
    return unaff_RBX;
  }
  uVar2 = camlList__sort_299((code **)(unaff_R15 - 0x50));
  return uVar2;
}



undefined8 camlList__entry(void)

{
  camlList = &camlList__37;
  DAT_006481a8 = &camlList__36;
  DAT_006481b0 = &camlList__35;
  DAT_006481b8 = &camlList__34;
  DAT_006481c0 = &camlList__32;
  DAT_006481c8 = DAT_00645418;
  DAT_006481d0 = &camlList__33;
  DAT_006481d8 = &camlList__31;
  DAT_006481e0 = &camlList__31;
  DAT_006481e8 = &camlList__28;
  DAT_006481f0 = &camlList__30;
  DAT_006481f8 = &camlList__29;
  DAT_00648200 = &camlList__27;
  DAT_00648208 = &camlList__26;
  DAT_00648210 = &camlList__23;
  DAT_00648218 = &camlList__25;
  DAT_00648220 = &camlList__24;
  DAT_00648228 = &camlList__22;
  DAT_00648230 = &camlList__21;
  DAT_00648238 = &camlList__20;
  DAT_00648240 = &camlList__19;
  DAT_00648248 = &camlList__18;
  DAT_00648250 = &camlList__17;
  DAT_00648258 = &camlList__16;
  DAT_00648260 = &camlList__15;
  DAT_00648268 = &camlList__8;
  DAT_00648270 = &camlList__7;
  DAT_00648278 = &camlList__7;
  DAT_00648280 = &camlList__6;
  DAT_00648288 = &camlList__14;
  DAT_00648290 = &camlList__13;
  DAT_00648298 = &camlList__12;
  DAT_006482a0 = &camlList__11;
  DAT_006482a8 = &camlList__10;
  DAT_006482b0 = &camlList__9;
  DAT_006482b8 = &camlList__5;
  DAT_006482c0 = &camlList__4;
  DAT_006482c8 = &camlList__1;
  DAT_006482d0 = &camlList__1;
  DAT_006482d8 = &camlList__1;
  DAT_006482e0 = &camlList__3;
  DAT_006482e8 = &camlList__38;
  DAT_006482f0 = &camlList__2;
  return 1;
}



void camlList__code_end(void)

{
  long in_RAX;
  
  if ((0 < in_RAX) && (in_RAX < 0x200)) {
    return;
  }
  camlPervasives__invalid_arg_40();
  return;
}



void camlChar__chr_60(void)

{
  long in_RAX;
  
  if ((0 < in_RAX) && (in_RAX < 0x200)) {
    return;
  }
  camlPervasives__invalid_arg_40();
  return;
}



undefined * camlChar__escaped_66(void)

{
  uint uVar1;
  byte bVar2;
  undefined auVar3 [16];
  long in_RAX;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long extraout_RDX;
  byte bVar7;
  byte bVar8;
  char cVar9;
  undefined auStack16 [8];
  long local_8;
  
  if (in_RAX == 0x4f) {
    return &camlChar__6;
  }
  if (in_RAX != 0xb9) {
    uVar1 = *(uint *)((in_RAX >> 1) * 4 + 0x4351d0);
    switch(in_RAX) {
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
      bVar2 = (byte)uVar1 - 2;
      bVar7 = 1 < (byte)uVar1 || CARRY1(bVar2,0xffbcae2f < uVar1);
      auStack16 = 0x4351d9;
      uVar6 = (**(code **)(CONCAT71((int7)(int3)(uVar1 >> 8),bVar2 + (0xffbcae2f < uVar1)) +
                          -0x6f0001ec))();
      bVar2 = (byte)uVar6 - 2;
      bVar8 = 1 < (byte)uVar6 || CARRY1(bVar2,bVar7);
      auStack16 = 0x4351e1;
      uVar6 = (**(code **)((uVar6 & 0xffffffffffffff00 | (ulong)(byte)(bVar2 + bVar7)) - 0x6f0001ec)
              )();
      bVar2 = (byte)uVar6 - 2;
      cVar9 = 1 < (byte)uVar6 || CARRY1(bVar2,bVar8);
      auStack16 = 0x4351e9;
      uVar6 = (**(code **)((uVar6 & 0xffffffffffffff00 | (ulong)(byte)(bVar2 + bVar8)) - 0x6f0001ec)
              )();
      auStack16 = 0x4351f1;
      (**(code **)((uVar6 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar6 + -2 + cVar9)) +
                  0x48fffe14))();
      auStack16 = 0x4351f7;
      lVar4 = (**(code **)(auStack16 + extraout_RDX + 6))();
                    // WARNING: Could not recover jumptable at 0x004351f7. Too many branches
                    // WARNING: Treating indirect jump as call
      puVar5 = (undefined *)(**(code **)(lVar4 + 0x14))();
      return puVar5;
    }
    auStack16 = 0x41666c;
    local_8 = in_RAX;
    lVar4 = caml_c_call();
    if (lVar4 != 1) {
      auStack16 = 0x416685;
      puVar5 = (undefined *)caml_c_call(3);
      *puVar5 = (char)(local_8 >> 1);
      return puVar5;
    }
    auStack16 = 0x4166af;
    puVar5 = (undefined *)caml_c_call(9);
    *puVar5 = 0x5c;
    lVar4 = local_8 >> 1;
    local_8 = local_8 >> 0x3f;
    puVar5[1] = (char)(SUB168(CONCAT88(local_8,lVar4) / SEXT816(100),0) * 2 + 0x61 >> 1);
    auVar3 = CONCAT88(local_8,lVar4) / SEXT816(10);
    puVar5[2] = (char)(SUB168((ZEXT816((ulong)(SUB168(auVar3,0) >> 0x3f)) << 0x40 |
                              auVar3 & (undefined  [16])0xffffffffffffffff) % SEXT816(10),0) * 2 +
                       0x61 >> 1);
    puVar5[3] = (char)(SUB168(CONCAT88(local_8,lVar4) % SEXT816(10),0) * 2 + 0x61 >> 1);
    return puVar5;
  }
  return &camlChar__7;
}



long camlChar__lowercase_71(void)

{
  long in_RAX;
  
  if ((((in_RAX < 0x83) || (0xb5 < in_RAX)) && ((in_RAX < 0x181 || (0x1ad < in_RAX)))) &&
     ((in_RAX < 0x1b1 || (0x1bd < in_RAX)))) {
    return in_RAX;
  }
  return in_RAX + 0x40;
}



long camlChar__uppercase_73(void)

{
  long in_RAX;
  
  if ((((in_RAX < 0xc3) || (0xf5 < in_RAX)) && ((in_RAX < 0x1c1 || (0x1ed < in_RAX)))) &&
     ((in_RAX < 0x1f1 || (0x1fd < in_RAX)))) {
    return in_RAX;
  }
  return in_RAX + -0x40;
}



long camlChar__compare_76(void)

{
  long in_RAX;
  long unaff_RBX;
  
  return (in_RAX - unaff_RBX) + 1;
}



undefined8 camlChar__entry(void)

{
  camlChar = &camlChar__5;
  DAT_00649300 = &camlChar__4;
  DAT_00649308 = &camlChar__3;
  DAT_00649310 = &camlChar__2;
  DAT_00649318 = &camlChar__1;
  return 1;
}



undefined8 camlString__fun_188(void)

{
  long lVar1;
  long in_RAX;
  long unaff_RBX;
  
  **(long **)(unaff_RBX + 0x10) = **(long **)(unaff_RBX + 0x10) + 2;
  lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  **(long **)(unaff_RBX + 0x18) =
       **(long **)(unaff_RBX + 0x18) + (lVar1 - (ulong)*(byte *)(in_RAX + lVar1)) * 2;
  return 1;
}



undefined8 camlString__fun_191(void)

{
  long lVar1;
  long in_RAX;
  long unaff_RBX;
  
  lVar1 = (*(ulong *)(*(long *)(unaff_RBX + 0x10) + -8) >> 10) * 8 + -1;
  caml_blit_string(*(undefined8 *)(unaff_RBX + 0x10),1,*(undefined8 *)(unaff_RBX + 0x18),
                   **(undefined8 **)(unaff_RBX + 0x20),
                   (lVar1 - (ulong)*(byte *)(*(long *)(unaff_RBX + 0x10) + lVar1)) * 2 + 1);
  lVar1 = (*(ulong *)(*(long *)(unaff_RBX + 0x10) + -8) >> 10) * 8 + -1;
  **(long **)(unaff_RBX + 0x20) =
       **(long **)(unaff_RBX + 0x20) +
       (lVar1 - (ulong)*(byte *)(*(long *)(unaff_RBX + 0x10) + lVar1)) * 2;
  caml_blit_string();
  lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  **(long **)(unaff_RBX + 0x20) =
       **(long **)(unaff_RBX + 0x20) + (lVar1 - (ulong)*(byte *)(in_RAX + lVar1)) * 2;
  return 1;
}



undefined8 camlString__make_66(void)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 unaff_RBX;
  
  uVar1 = caml_c_call();
  caml_fill_string(uVar1,1,in_RAX,unaff_RBX);
  return uVar1;
}



undefined8 camlString__copy_70(void)

{
  long lVar1;
  byte bVar2;
  long in_RAX;
  undefined8 uVar3;
  
  lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  bVar2 = *(byte *)(in_RAX + lVar1);
  uVar3 = caml_c_call();
  caml_blit_string(in_RAX,1,uVar3,1,(lVar1 - (ulong)bVar2) * 2 + 1);
  return uVar3;
}



undefined8 camlString__sub_74(long param_1)

{
  long lVar1;
  long in_RAX;
  undefined8 uVar2;
  long unaff_RBX;
  
  if ((0 < unaff_RBX) && (0 < param_1)) {
    lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
    if (unaff_RBX <= (long)(((lVar1 - (ulong)*(byte *)(in_RAX + lVar1)) * 2 - param_1) + 2)) {
      uVar2 = caml_c_call();
      caml_blit_string(in_RAX,unaff_RBX,uVar2,1,param_1);
      return uVar2;
    }
  }
  uVar2 = camlPervasives__invalid_arg_40();
  return uVar2;
}



void camlString__fill_79(long param_1)

{
  long lVar1;
  long in_RAX;
  long unaff_RBX;
  
  if ((0 < unaff_RBX) && (0 < param_1)) {
    lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
    if (unaff_RBX <= (long)(((lVar1 - (ulong)*(byte *)(in_RAX + lVar1)) * 2 - param_1) + 2)) {
      caml_fill_string();
      return;
    }
  }
  camlPervasives__invalid_arg_40();
  return;
}



void camlString__blit_84(long param_1,long param_2,long param_3)

{
  long lVar1;
  long in_RAX;
  long unaff_RBX;
  
  if ((0 < param_3) && (0 < unaff_RBX)) {
    lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
    if ((unaff_RBX <= (long)(((lVar1 - (ulong)*(byte *)(in_RAX + lVar1)) * 2 - param_3) + 2)) &&
       (0 < param_2)) {
      lVar1 = (*(ulong *)(param_1 + -8) >> 10) * 8 + -1;
      if (param_2 <= (long)(((lVar1 - (ulong)*(byte *)(param_1 + lVar1)) * 2 - param_3) + 2)) {
        caml_blit_string();
        return;
      }
    }
  }
  camlPervasives__invalid_arg_40();
  return;
}



undefined8 camlString__iter_90(void)

{
  long lVar1;
  code **in_RAX;
  long unaff_RBX;
  bool bVar2;
  long local_18;
  
  lVar1 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
  lVar1 = (lVar1 - (ulong)*(byte *)(unaff_RBX + lVar1)) * 2 + -1;
  if (0 < lVar1) {
    local_18 = 1;
    do {
      (**in_RAX)(*in_RAX);
      bVar2 = local_18 != lVar1;
      local_18 = local_18 + 2;
    } while (bVar2);
  }
  return 1;
}



undefined * camlString__concat_94(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long in_RAX;
  undefined *puVar5;
  long *unaff_RBX;
  ulong unaff_R15;
  ulong uVar6;
  
  if (unaff_RBX != (long *)0x1) {
    lVar4 = *unaff_RBX;
    while( true ) {
      uVar6 = unaff_R15 - 0x48;
      if (caml_young_limit <= uVar6) break;
      caml_call_gc();
      unaff_R15 = uVar6;
    }
    plVar1 = (long *)(unaff_R15 - 0x40);
    *(undefined8 *)(unaff_R15 - 0x48) = 0x400;
    *plVar1 = 1;
    plVar2 = (long *)(unaff_R15 - 0x30);
    *(undefined8 *)(unaff_R15 - 0x38) = 0x400;
    *plVar2 = 1;
    *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
    *(code **)(unaff_R15 - 0x20) = camlString__fun_188;
    *(undefined8 *)(unaff_R15 - 0x18) = 3;
    *(long **)(unaff_R15 - 0x10) = plVar1;
    *(long **)(unaff_R15 - 8) = plVar2;
    camlList__iter_102();
    lVar3 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
    puVar5 = (undefined *)
             caml_c_call(*plVar2 + (lVar3 - (ulong)*(byte *)(in_RAX + lVar3)) * 2 *
                                   (*plVar1 + -2 >> 1));
    lVar3 = (*(ulong *)(lVar4 + -8) >> 10) * 8 + -1;
    caml_blit_string(lVar4,1,puVar5,1,(lVar3 - (ulong)*(byte *)(lVar4 + lVar3)) * 2 + 1);
    while( true ) {
      if (caml_young_limit <= uVar6 - 0x40) break;
      caml_call_gc();
      uVar6 = uVar6 - 0x40;
    }
    *(undefined8 *)(uVar6 - 0x40) = 0x400;
    lVar3 = (*(ulong *)(lVar4 + -8) >> 10) * 8 + -1;
    *(long *)(uVar6 - 0x38) = (lVar3 - (ulong)*(byte *)(lVar4 + lVar3)) * 2 + 1;
    *(undefined8 *)(uVar6 - 0x30) = 0x14f7;
    *(code **)(uVar6 - 0x28) = camlString__fun_191;
    *(undefined8 *)(uVar6 - 0x20) = 3;
    *(long *)(uVar6 - 0x18) = in_RAX;
    *(undefined **)(uVar6 - 0x10) = puVar5;
    *(long **)(uVar6 - 8) = (long *)(uVar6 - 0x38);
    camlList__iter_102();
    return puVar5;
  }
  return &camlString__29;
}



long camlString__escaped_108(void)

{
  long *plVar1;
  long in_RAX;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong unaff_R15;
  bool bVar6;
  long local_38;
  
  lVar5 = in_RAX;
  while (unaff_R15 - 0x10 < caml_young_limit) {
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x10;
  }
  plVar1 = (long *)(unaff_R15 - 8);
  *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
  *plVar1 = 1;
  lVar2 = (*(ulong *)(lVar5 + -8) >> 10) * 8 + -1;
  lVar5 = (lVar2 - (ulong)*(byte *)(lVar5 + lVar2)) * 2 + -1;
  if (0 < lVar5) {
    local_38 = 1;
    do {
      uVar3 = (ulong)*(byte *)(in_RAX + (local_38 >> 1)) * 2 + 1;
      if (uVar3 < 0x1d) {
        if (uVar3 < 0x17) {
          if (0x10 < uVar3) goto LAB_00416ea8;
          goto LAB_00416e7e;
        }
        if (uVar3 < 0x1b) goto LAB_00416e7e;
LAB_00416ea8:
        lVar2 = 5;
      }
      else {
        if ((uVar3 == 0x45) || (uVar3 == 0xb9)) goto LAB_00416ea8;
LAB_00416e7e:
        lVar2 = caml_c_call();
        if (lVar2 == 1) {
          lVar2 = 9;
        }
        else {
          lVar2 = 3;
        }
      }
      *plVar1 = *plVar1 + lVar2 + -1;
      bVar6 = local_38 != lVar5;
      local_38 = local_38 + 2;
    } while (bVar6);
  }
  lVar5 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  if (*plVar1 == (lVar5 - (ulong)*(byte *)(in_RAX + lVar5)) * 2 + 1) {
    return in_RAX;
  }
  lVar2 = caml_c_call(*plVar1);
  *plVar1 = 1;
  lVar5 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  lVar5 = (lVar5 - (ulong)*(byte *)(in_RAX + lVar5)) * 2 + -1;
  if (0 < lVar5) {
    local_38 = 1;
    do {
      lVar4 = (ulong)*(byte *)(in_RAX + (local_38 >> 1)) * 2;
      uVar3 = lVar4 + 1 >> 1;
      switch(lVar4) {
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
switchD_00416fc0_caseD_0:
        lVar4 = caml_c_call();
        if (lVar4 == 1) {
          *(undefined *)(lVar2 + (*plVar1 >> 1)) = 0x5c;
          *plVar1 = *plVar1 + 2;
          *(char *)(lVar2 + (*plVar1 >> 1)) =
               (char)(SUB168(ZEXT816(uVar3) / SEXT816(100),0) * 2 + 0x61 >> 1);
          *plVar1 = *plVar1 + 2;
          *(char *)(lVar2 + (*plVar1 >> 1)) =
               (char)(SUB168((ZEXT816((ulong)(SUB168(ZEXT816(uVar3) / SEXT816(10),0) >> 0x3f)) <<
                              0x40 | ZEXT816(uVar3) / SEXT816(10) &
                                     (undefined  [16])0xffffffffffffffff) % SEXT816(10),0) * 2 +
                      0x61 >> 1);
          *plVar1 = *plVar1 + 2;
          *(char *)(lVar2 + (*plVar1 >> 1)) =
               (char)(SUB168(ZEXT816(uVar3) % SEXT816(10),0) * 2 + 0x61 >> 1);
        }
        else {
          *(char *)(lVar2 + (*plVar1 >> 1)) = (char)uVar3;
        }
        break;
      case 0x10:
        *(undefined *)(lVar2 + (*plVar1 >> 1)) = 0x5c;
        *plVar1 = *plVar1 + 2;
        *(undefined *)(lVar2 + (*plVar1 >> 1)) = 0x62;
        break;
      case 0x12:
        *(undefined *)(lVar2 + (*plVar1 >> 1)) = 0x5c;
        *plVar1 = *plVar1 + 2;
        *(undefined *)(lVar2 + (*plVar1 >> 1)) = 0x74;
        break;
      case 0x14:
        *(undefined *)(lVar2 + (*plVar1 >> 1)) = 0x5c;
        *plVar1 = *plVar1 + 2;
        *(undefined *)(lVar2 + (*plVar1 >> 1)) = 0x6e;
        break;
      case 0x1a:
        *(undefined *)(lVar2 + (*plVar1 >> 1)) = 0x5c;
        *plVar1 = *plVar1 + 2;
        *(undefined *)(lVar2 + (*plVar1 >> 1)) = 0x72;
        break;
      default:
        if (lVar4 - 0x45U < 0x72) goto switchD_00416fc0_caseD_0;
        *(undefined *)(lVar2 + (*plVar1 >> 1)) = 0x5c;
        *plVar1 = *plVar1 + 2;
        *(char *)(lVar2 + (*plVar1 >> 1)) = (char)uVar3;
      }
      *plVar1 = *plVar1 + 2;
      bVar6 = local_38 != lVar5;
      local_38 = local_38 + 2;
    } while (bVar6);
  }
  return lVar2;
}



long camlString__map_118(void)

{
  code **in_RAX;
  long lVar1;
  long lVar2;
  long unaff_RBX;
  long lVar3;
  bool bVar4;
  long local_28;
  
  lVar3 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
  lVar3 = (lVar3 - (ulong)*(byte *)(unaff_RBX + lVar3)) * 2;
  if (lVar3 == 0) {
    return unaff_RBX;
  }
  lVar1 = caml_c_call();
  lVar3 = lVar3 + -1;
  if (0 < lVar3) {
    local_28 = 1;
    do {
      lVar2 = (**in_RAX)(*in_RAX);
      *(char *)(lVar1 + (local_28 >> 1)) = (char)(lVar2 >> 1);
      bVar4 = local_28 != lVar3;
      local_28 = local_28 + 2;
    } while (bVar4);
  }
  return lVar1;
}



void camlString__uppercase_124(void)

{
  camlString__map_118();
  return;
}



void camlString__lowercase_126(void)

{
  camlString__map_118();
  return;
}



void camlString__apply1_128(void)

{
  code **in_RAX;
  undefined *puVar1;
  long lVar2;
  long unaff_RBX;
  
  lVar2 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
  if ((lVar2 - (ulong)*(byte *)(unaff_RBX + lVar2) & 0x7fffffffffffffff) == 0) {
    return;
  }
  puVar1 = (undefined *)camlString__copy_70();
  lVar2 = (**in_RAX)(*in_RAX);
  *puVar1 = (char)(lVar2 >> 1);
  return;
}



void camlString__capitalize_132(void)

{
  camlString__apply1_128();
  return;
}



void camlString__uncapitalize_134(void)

{
  camlString__apply1_128();
  return;
}



long camlString__index_rec_136(long param_1,long param_2)

{
  long in_RAX;
  long unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (unaff_RBX <= param_1) {
      while( true ) {
        if (caml_young_limit <= unaff_R15 - 0x10) break;
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x10;
      }
      *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
      *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    if ((ulong)*(byte *)(in_RAX + (param_1 >> 1)) * 2 + 1 == param_2) break;
    param_1 = param_1 + 2;
  }
  return param_1;
}



void camlString__index_141(void)

{
  camlString__index_rec_136(1);
  return;
}



void camlString__index_from_144(undefined8 param_1)

{
  long lVar1;
  long in_RAX;
  long unaff_RBX;
  ulong uVar2;
  
  lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  uVar2 = (ulong)*(byte *)(in_RAX + lVar1);
  if ((0 < unaff_RBX) && (unaff_RBX <= (long)((lVar1 - uVar2) * 2 + 1))) {
    camlString__index_rec_136();
    return;
  }
  camlPervasives__invalid_arg_40(uVar2,param_1);
  return;
}



long camlString__rindex_rec_149(long param_1)

{
  long in_RAX;
  long unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (unaff_RBX < 1) {
      while( true ) {
        if (caml_young_limit <= unaff_R15 - 0x10) break;
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x10;
      }
      *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
      *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    if ((ulong)*(byte *)(in_RAX + (unaff_RBX >> 1)) * 2 + 1 == param_1) break;
    unaff_RBX = unaff_RBX + -2;
  }
  return unaff_RBX;
}



void camlString__rindex_153(void)

{
  camlString__rindex_rec_149();
  return;
}



void camlString__rindex_from_156(void)

{
  long lVar1;
  long in_RAX;
  long unaff_RBX;
  
  if (-2 < unaff_RBX) {
    lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
    if (unaff_RBX < (long)((lVar1 - (ulong)*(byte *)(in_RAX + lVar1)) * 2 + 1)) {
      camlString__rindex_rec_149();
      return;
    }
  }
  camlPervasives__invalid_arg_40();
  return;
}



undefined8 camlString__contains_from_160(undefined8 param_1)

{
  long lVar1;
  long in_RAX;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_RBX;
  ulong uVar4;
  
  lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  uVar4 = (ulong)*(byte *)(in_RAX + lVar1);
  if ((0 < unaff_RBX) && (unaff_RBX <= (long)((lVar1 - uVar4) * 2 + 1))) {
    ppuVar2 = (undefined **)FUN_0041759c();
    if ((undefined **)*ppuVar2 == &caml_exn_Not_found) {
      return 1;
    }
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar3 = camlPervasives__invalid_arg_40(uVar4,param_1);
  return uVar3;
}



undefined8 FUN_0041759c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  camlString__index_rec_136(param_3);
  return 3;
}



void camlString__contains_165(void)

{
  camlString__contains_from_160();
  return;
}



undefined8 camlString__rcontains_from_168(void)

{
  long lVar1;
  long in_RAX;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_RBX;
  
  if (0 < unaff_RBX) {
    lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
    if (unaff_RBX < (long)((lVar1 - (ulong)*(byte *)(in_RAX + lVar1)) * 2 + 1)) {
      ppuVar2 = (undefined **)FUN_00417634();
      if ((undefined **)*ppuVar2 == &caml_exn_Not_found) {
        return 1;
      }
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
  }
  uVar3 = camlPervasives__invalid_arg_40();
  return uVar3;
}



undefined8 FUN_00417634(void)

{
  camlString__rindex_rec_149();
  return 3;
}



void camlString__compare_173(void)

{
  caml_c_call();
  return;
}



undefined8 camlString__entry(void)

{
  camlString = &camlString__24;
  DAT_00649498 = &camlString__23;
  DAT_006494a0 = &camlString__22;
  DAT_006494a8 = &camlString__21;
  DAT_006494b0 = &camlString__20;
  DAT_006494b8 = &camlString__18;
  DAT_006494c0 = &camlString__19;
  DAT_006494c8 = &camlString__17;
  DAT_006494d0 = &camlString__9;
  DAT_006494d8 = &camlString__6;
  DAT_006494e0 = &camlString__8;
  DAT_006494e8 = &camlString__5;
  DAT_006494f0 = &camlString__3;
  DAT_006494f8 = &camlString__4;
  DAT_00649500 = &camlString__2;
  DAT_00649508 = &camlString__15;
  DAT_00649510 = &camlString__14;
  DAT_00649518 = &camlString__12;
  DAT_00649520 = &camlString__11;
  DAT_00649528 = &camlString__1;
  DAT_00649530 = &camlString__16;
  DAT_00649538 = &camlString__13;
  DAT_00649540 = &camlString__10;
  DAT_00649548 = &camlString__7;
  return 1;
}



void camlString__code_end(void)

{
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x10) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x10;
  }
  *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
  *(undefined8 *)(unaff_R15 - 8) = DAT_00649c88;
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void camlSys__fun_121(void)

{
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x10) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x10;
  }
  *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
  *(undefined8 *)(unaff_R15 - 8) = DAT_00649c88;
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined8 camlSys__set_signal_85(void)

{
  caml_c_call();
  return 1;
}



void camlSys__catch_break_110(void)

{
  long in_RAX;
  ulong unaff_R15;
  
  if (in_RAX != 1) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x10) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
    *(undefined ***)(unaff_R15 - 8) = &camlSys__5;
    camlSys__set_signal_85();
    return;
  }
  camlSys__set_signal_85();
  return;
}



undefined8 camlSys__entry(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_R15;
  
  puVar1 = (undefined8 *)caml_c_call(1);
  camlSys = puVar1[1];
  DAT_00649ba8 = *puVar1;
  puVar1 = (undefined8 *)caml_c_call(1);
  DAT_00649bc0 = puVar1[1];
  DAT_00649bb8 = *puVar1;
  DAT_00649bd0 = (2 << ((byte)(DAT_00649bc0 + -0x14 >> 1) & 0x3f)) + -1;
  lVar2 = DAT_00649bc0 >> 1;
  lVar3 = lVar2 + 7;
  if (-1 < lVar2) {
    lVar3 = lVar2;
  }
  DAT_00649bc8 = (lVar3 >> 3) * 2 * (DAT_00649bd0 >> 1) + -1;
  caml_alloc3();
  DAT_00649bb0 = unaff_R15 + 1;
  *unaff_R15 = 0x400;
  *DAT_00649bb0 = 1;
  DAT_00649bd8 = &camlSys__4;
  DAT_00649be0 = 0xffffffffffffffff;
  DAT_00649be8 = 0xfffffffffffffffd;
  DAT_00649bf0 = 0xfffffffffffffffb;
  DAT_00649bf8 = 0xfffffffffffffff9;
  DAT_00649c00 = 0xfffffffffffffff7;
  DAT_00649c08 = 0xfffffffffffffff5;
  DAT_00649c10 = 0xfffffffffffffff3;
  DAT_00649c18 = 0xfffffffffffffff1;
  DAT_00649c20 = 0xffffffffffffffef;
  DAT_00649c28 = 0xffffffffffffffed;
  DAT_00649c30 = 0xffffffffffffffeb;
  DAT_00649c38 = 0xffffffffffffffe9;
  DAT_00649c40 = 0xffffffffffffffe7;
  DAT_00649c48 = 0xffffffffffffffe5;
  DAT_00649c50 = 0xffffffffffffffe3;
  DAT_00649c58 = 0xffffffffffffffe1;
  DAT_00649c60 = 0xffffffffffffffdf;
  DAT_00649c68 = 0xffffffffffffffdd;
  DAT_00649c70 = 0xffffffffffffffdb;
  DAT_00649c78 = 0xffffffffffffffd9;
  DAT_00649c80 = 0xffffffffffffffd7;
  unaff_R15[2] = 0x400;
  unaff_R15[3] = camlSys__3;
  DAT_00649c88 = (char **)(unaff_R15 + 3);
  DAT_00649c90 = &camlSys__2;
  DAT_00649c98 = camlSys__1;
  return 1;
}



undefined8 * camlHashtbl__remove_bucket_216(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *in_RAX;
  long lVar4;
  undefined8 uVar5;
  long unaff_RBX;
  ulong unaff_R15;
  
  if (in_RAX == (undefined8 *)0x1) {
    return (undefined8 *)0x1;
  }
  puVar1 = (undefined8 *)in_RAX[2];
  uVar2 = in_RAX[1];
  uVar3 = *in_RAX;
  lVar4 = caml_apply2(**(undefined8 **)(unaff_RBX + 0x10));
  if (lVar4 != 1) {
    **(long **)(unaff_RBX + 0x18) = **(long **)(unaff_RBX + 0x18) + -2;
    return puVar1;
  }
  uVar5 = camlHashtbl__remove_bucket_216();
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xc00;
  *(undefined8 *)(unaff_R15 - 0x18) = uVar3;
  *(undefined8 *)(unaff_R15 - 0x10) = uVar2;
  *(undefined8 *)(unaff_R15 - 8) = uVar5;
  return (undefined8 *)(unaff_R15 - 0x18);
}



undefined8 * camlHashtbl__find_in_bucket_241(void)

{
  long lVar1;
  undefined8 uVar2;
  long in_RAX;
  long lVar3;
  undefined8 uVar4;
  long unaff_RBX;
  ulong unaff_R15;
  
  do {
    if (in_RAX == 1) {
      return (undefined8 *)0x1;
    }
    lVar1 = *(long *)(in_RAX + 0x10);
    uVar2 = *(undefined8 *)(in_RAX + 8);
    lVar3 = caml_apply2(**(undefined8 **)(unaff_RBX + 0x10));
    in_RAX = lVar1;
  } while (lVar3 == 1);
  uVar4 = camlHashtbl__find_in_bucket_241();
  while (unaff_R15 - 0x18 < caml_young_limit) {
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x10) = uVar2;
  *(undefined8 *)(unaff_R15 - 8) = uVar4;
  return (undefined8 *)(unaff_R15 - 0x10);
}



void camlHashtbl__replace_bucket_249(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_RAX;
  long lVar3;
  undefined8 uVar4;
  long unaff_RBX;
  ulong unaff_R15;
  
  if (in_RAX == (undefined8 *)0x1) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x10) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
    *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar4 = in_RAX[2];
  uVar1 = in_RAX[1];
  uVar2 = *in_RAX;
  lVar3 = caml_apply2(**(undefined8 **)(unaff_RBX + 0x10));
  if (lVar3 != 1) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x20) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x20;
    }
    *(undefined8 *)(unaff_R15 - 0x20) = 0xc00;
    *(undefined8 *)(unaff_R15 - 0x18) = uVar2;
    *(undefined8 *)(unaff_R15 - 0x10) = *(undefined8 *)(unaff_RBX + 0x20);
    *(undefined8 *)(unaff_R15 - 8) = uVar4;
    return;
  }
  uVar4 = camlHashtbl__replace_bucket_249();
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xc00;
  *(undefined8 *)(unaff_R15 - 0x18) = uVar2;
  *(undefined8 *)(unaff_R15 - 0x10) = uVar1;
  *(undefined8 *)(unaff_R15 - 8) = uVar4;
  return;
}



undefined8 camlHashtbl__mem_in_bucket_258(void)

{
  long in_RAX;
  long lVar1;
  long unaff_RBX;
  
  do {
    if (in_RAX == 1) {
      return 1;
    }
    in_RAX = *(long *)(in_RAX + 0x10);
    lVar1 = caml_apply2(**(undefined8 **)(unaff_RBX + 0x10));
  } while (lVar1 == 1);
  return 3;
}



undefined8 camlHashtbl__insert_bucket_96(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_RAX;
  long lVar3;
  ulong uVar4;
  ulong extraout_RDX;
  long unaff_RBX;
  long lVar5;
  ulong unaff_R15;
  
  if (in_RAX == (undefined8 *)0x1) {
    return 1;
  }
  uVar1 = in_RAX[1];
  uVar2 = *in_RAX;
  camlHashtbl__insert_bucket_96(uVar2,in_RAX[2]);
  lVar5 = *(long *)(unaff_RBX + 0x18) >> 1;
  if (lVar5 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  lVar3 = (***(code ***)(unaff_RBX + 0x10))(**(code ***)(unaff_RBX + 0x10));
  uVar4 = SUB168(CONCAT88(lVar3 >> 0x3f,lVar3 >> 1) % SEXT816(lVar5),0) * 2 + 1;
  lVar5 = *(long *)(unaff_RBX + 0x20);
  if (*(ulong *)(lVar5 + -8) >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    uVar4 = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xc00;
  *(undefined8 *)(unaff_R15 - 0x18) = uVar2;
  *(undefined8 *)(unaff_R15 - 0x10) = uVar1;
  if (uVar4 < *(ulong *)(*(long *)(unaff_RBX + 0x20) + -8) >> 9) {
    *(undefined8 *)(unaff_R15 - 8) = *(undefined8 *)(*(long *)(unaff_RBX + 0x20) + -4 + uVar4 * 4);
    caml_modify(lVar5 + -4 + uVar4 * 4);
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



undefined8 * camlHashtbl__remove_bucket_111(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *in_RAX;
  long lVar4;
  undefined8 uVar5;
  long unaff_RBX;
  ulong unaff_R15;
  
  if (in_RAX == (undefined8 *)0x1) {
    return (undefined8 *)0x1;
  }
  puVar1 = (undefined8 *)in_RAX[2];
  uVar2 = in_RAX[1];
  uVar3 = *in_RAX;
  lVar4 = caml_c_call(uVar3,*(undefined8 *)(unaff_RBX + 0x18));
  if (lVar4 == 1) {
    **(long **)(unaff_RBX + 0x10) = **(long **)(unaff_RBX + 0x10) + -2;
    return puVar1;
  }
  uVar5 = camlHashtbl__remove_bucket_111();
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xc00;
  *(undefined8 *)(unaff_R15 - 0x18) = uVar3;
  *(undefined8 *)(unaff_R15 - 0x10) = uVar2;
  *(undefined8 *)(unaff_R15 - 8) = uVar5;
  return (undefined8 *)(unaff_R15 - 0x18);
}



undefined8 * camlHashtbl__find_in_bucket_136(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *in_RAX;
  long lVar3;
  undefined8 uVar4;
  long unaff_RBX;
  ulong unaff_R15;
  
  do {
    if (in_RAX == (undefined8 *)0x1) {
      return (undefined8 *)0x1;
    }
    puVar1 = (undefined8 *)in_RAX[2];
    uVar2 = in_RAX[1];
    lVar3 = caml_c_call(*in_RAX,*(undefined8 *)(unaff_RBX + 0x10));
    in_RAX = puVar1;
  } while (lVar3 != 1);
  uVar4 = camlHashtbl__find_in_bucket_136();
  while (unaff_R15 - 0x18 < caml_young_limit) {
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x10) = uVar2;
  *(undefined8 *)(unaff_R15 - 8) = uVar4;
  return (undefined8 *)(unaff_R15 - 0x10);
}



void camlHashtbl__replace_bucket_144(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_RAX;
  long lVar3;
  undefined8 uVar4;
  long unaff_RBX;
  ulong unaff_R15;
  
  if (in_RAX == (undefined8 *)0x1) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x10) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
    *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar4 = in_RAX[2];
  uVar1 = in_RAX[1];
  uVar2 = *in_RAX;
  lVar3 = caml_c_call(uVar2,*(undefined8 *)(unaff_RBX + 0x10));
  if (lVar3 == 1) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x20) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x20;
    }
    *(undefined8 *)(unaff_R15 - 0x20) = 0xc00;
    *(undefined8 *)(unaff_R15 - 0x18) = uVar2;
    *(undefined8 *)(unaff_R15 - 0x10) = *(undefined8 *)(unaff_RBX + 0x18);
    *(undefined8 *)(unaff_R15 - 8) = uVar4;
    return;
  }
  uVar4 = camlHashtbl__replace_bucket_144();
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xc00;
  *(undefined8 *)(unaff_R15 - 0x18) = uVar2;
  *(undefined8 *)(unaff_R15 - 0x10) = uVar1;
  *(undefined8 *)(unaff_R15 - 8) = uVar4;
  return;
}



undefined8 camlHashtbl__mem_in_bucket_153(void)

{
  undefined8 *puVar1;
  undefined8 *in_RAX;
  long lVar2;
  long unaff_RBX;
  
  do {
    if (in_RAX == (undefined8 *)0x1) {
      return 1;
    }
    puVar1 = (undefined8 *)in_RAX[2];
    lVar2 = caml_c_call(*in_RAX,*(undefined8 *)(unaff_RBX + 0x10));
    in_RAX = puVar1;
  } while (lVar2 != 1);
  return 3;
}



undefined8 camlHashtbl__do_bucket_160(void)

{
  long lVar1;
  long in_RAX;
  long unaff_RBX;
  
  while (in_RAX != 1) {
    lVar1 = *(long *)(in_RAX + 0x10);
    caml_apply2(*(undefined8 *)(unaff_RBX + 0x10),*(undefined8 *)(in_RAX + 8));
    in_RAX = lVar1;
  }
  return 1;
}



undefined8 camlHashtbl__do_bucket_170(long param_1)

{
  long in_RAX;
  undefined8 unaff_RBX;
  
  while (in_RAX != 1) {
    in_RAX = *(long *)(in_RAX + 0x10);
    unaff_RBX = caml_apply3(unaff_RBX,*(undefined8 *)(param_1 + 0x18));
  }
  return unaff_RBX;
}



ulong camlHashtbl__safehash_205(void)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_RBX;
  
  pcVar1 = **(code ***)(*(long *)(unaff_RBX + 0x10) + 8);
  uVar2 = (*pcVar1)(pcVar1);
  return uVar2 & 0x7fffffffffffffff;
}



undefined8 camlHashtbl__add_207(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long *in_RAX;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong extraout_RDX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  uVar4 = *(ulong *)(in_RAX[1] + -8) >> 10;
  if (uVar4 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  pcVar1 = **(code ***)(*(long *)(*(long *)(param_2 + 0x18) + 0x10) + 8);
  uVar2 = (*pcVar1)(pcVar1);
  uVar4 = SUB168(ZEXT816((ulong)((long)(uVar2 & 0x7fffffffffffffff) >> 1)) % SEXT816((long)uVar4),0)
          * 2 + 1;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    uVar4 = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xc00;
  *(undefined8 *)(unaff_R15 - 0x18) = unaff_RBX;
  *(undefined8 *)(unaff_R15 - 0x10) = param_1;
  if (*(ulong *)(in_RAX[1] + -8) >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  *(undefined8 *)(unaff_R15 - 8) = *(undefined8 *)(in_RAX[1] + -4 + uVar4 * 4);
  if (*(ulong *)(in_RAX[1] + -8) >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  caml_modify(in_RAX[1] + -4 + uVar4 * 4);
  *in_RAX = *in_RAX + 2;
  if ((long)((*(ulong *)(in_RAX[1] + -8) >> 9 | 1) * 2 + -1) < *in_RAX) {
    uVar3 = camlHashtbl__resize_89();
    return uVar3;
  }
  return 1;
}



undefined8 camlHashtbl__remove_213(long param_1)

{
  code *pcVar1;
  long lVar2;
  long in_RAX;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long extraout_RDX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x30) break;
    caml_call_gc();
    in_RAX = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x30;
  }
  *(undefined8 *)(unaff_R15 - 0x30) = 0x14f7;
  *(code **)(unaff_R15 - 0x28) = camlHashtbl__remove_bucket_216;
  *(undefined8 *)(unaff_R15 - 0x20) = 3;
  *(undefined8 *)(unaff_R15 - 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(long *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  uVar3 = *(ulong *)(*(long *)(in_RAX + 8) + -8) >> 10;
  if (uVar3 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  pcVar1 = **(code ***)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8);
  uVar4 = (*pcVar1)(pcVar1);
  uVar3 = SUB168(ZEXT816((ulong)((long)(uVar4 & 0x7fffffffffffffff) >> 1)) % SEXT816((long)uVar3),0)
          * 2 + 1;
  lVar2 = *(long *)(in_RAX + 8);
  if (*(ulong *)(lVar2 + -8) >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  if (uVar3 < *(ulong *)(*(long *)(in_RAX + 8) + -8) >> 9) {
    uVar5 = camlHashtbl__remove_bucket_216();
    caml_modify(lVar2 + -4 + uVar3 * 4,uVar5);
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



undefined8 camlHashtbl__find_rec_221(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_RBX;
  ulong unaff_R15;
  
  do {
    if (unaff_RBX == 1) {
      while (unaff_R15 - 0x10 < caml_young_limit) {
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x10;
      }
      *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
      *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    lVar1 = *(long *)(unaff_RBX + 0x10);
    uVar2 = *(undefined8 *)(unaff_RBX + 8);
    lVar3 = caml_apply2(**(undefined8 **)(param_1 + 0x18));
    unaff_RBX = lVar1;
  } while (lVar3 == 1);
  return uVar2;
}



undefined8 camlHashtbl__find_226(long param_1)

{
  code *pcVar1;
  long in_RAX;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong unaff_R15;
  
  uVar6 = *(ulong *)(*(long *)(in_RAX + 8) + -8) >> 10;
  if (uVar6 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  pcVar1 = **(code ***)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8);
  uVar2 = (*pcVar1)(pcVar1);
  uVar6 = SUB168(ZEXT816((ulong)((long)(uVar2 & 0x7fffffffffffffff) >> 1)) % SEXT816((long)uVar6),0)
          * 2 + 1;
  if (*(ulong *)(*(long *)(in_RAX + 8) + -8) >> 9 <= uVar6) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  lVar3 = *(long *)(*(long *)(in_RAX + 8) + -4 + uVar6 * 4);
  if (lVar3 == 1) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x10) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
    *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  lVar4 = *(long *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 8);
  lVar3 = caml_apply2(**(undefined8 **)(param_1 + 0x18));
  if (lVar3 != 1) {
    return uVar5;
  }
  if (lVar4 == 1) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x10) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
    *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  lVar3 = *(long *)(lVar4 + 0x10);
  uVar5 = *(undefined8 *)(lVar4 + 8);
  lVar4 = caml_apply2(**(undefined8 **)(param_1 + 0x18));
  if (lVar4 != 1) {
    return uVar5;
  }
  if (lVar3 == 1) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x10) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
    *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar5 = *(undefined8 *)(lVar3 + 8);
  lVar3 = caml_apply2(**(undefined8 **)(param_1 + 0x18));
  if (lVar3 != 1) {
    return uVar5;
  }
  uVar5 = camlHashtbl__find_rec_221(*(undefined8 *)(param_1 + 0x28));
  return uVar5;
}



void camlHashtbl__find_all_238(long param_1)

{
  code *pcVar1;
  long in_RAX;
  ulong uVar2;
  ulong uVar3;
  long extraout_RDX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    in_RAX = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = camlHashtbl__find_in_bucket_241;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  uVar2 = *(ulong *)(*(long *)(in_RAX + 8) + -8) >> 10;
  if (uVar2 != 0) {
    pcVar1 = **(code ***)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8);
    uVar3 = (*pcVar1)(pcVar1);
    if (SUB168(ZEXT816((ulong)((long)(uVar3 & 0x7fffffffffffffff) >> 1)) % SEXT816((long)uVar2),0) *
        2 + 1U < *(ulong *)(*(long *)(in_RAX + 8) + -8) >> 9) {
      camlHashtbl__find_in_bucket_241();
      return;
    }
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined8 camlHashtbl__replace_245(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long *in_RAX;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long extraout_RDX;
  long *extraout_RDX_00;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  ulong uVar7;
  
  while( true ) {
    uVar7 = unaff_R15 - 0x30;
    if (caml_young_limit <= uVar7) break;
    caml_call_gc();
    in_RAX = extraout_RDX_00;
    unaff_R15 = uVar7;
  }
  *(undefined8 *)(unaff_R15 - 0x30) = 0x14f7;
  *(code **)(unaff_R15 - 0x28) = camlHashtbl__replace_bucket_249;
  *(undefined8 *)(unaff_R15 - 0x20) = 3;
  *(undefined8 *)(unaff_R15 - 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_R15 - 0x10) = unaff_RBX;
  *(undefined8 *)(unaff_R15 - 8) = param_1;
  uVar2 = *(ulong *)(in_RAX[1] + -8) >> 10;
  if (uVar2 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  pcVar1 = **(code ***)(*(long *)(*(long *)(param_2 + 0x20) + 0x10) + 8);
  uVar3 = (*pcVar1)(pcVar1);
  uVar2 = SUB168(ZEXT816((ulong)((long)(uVar3 & 0x7fffffffffffffff) >> 1)) % SEXT816((long)uVar2),0)
          * 2 + 1;
  if (*(ulong *)(in_RAX[1] + -8) >> 9 <= uVar2) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  uVar5 = *(undefined8 *)(in_RAX[1] + -4 + uVar2 * 4);
  ppuVar4 = (undefined **)FUN_00418b48();
  if ((undefined **)*ppuVar4 == &caml_exn_Not_found) {
    lVar6 = in_RAX[1];
    if (*(ulong *)(lVar6 + -8) >> 9 <= uVar2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    while( true ) {
      if (caml_young_limit <= uVar7 - 0x20) break;
      caml_call_gc();
      lVar6 = extraout_RDX;
      uVar7 = uVar7 - 0x20;
    }
    *(undefined8 *)(uVar7 - 0x20) = 0xc00;
    *(undefined8 *)(uVar7 - 0x18) = unaff_RBX;
    *(undefined8 *)(uVar7 - 0x10) = param_1;
    *(undefined8 *)(uVar7 - 8) = uVar5;
    caml_modify(lVar6 + -4 + uVar2 * 4);
    *in_RAX = *in_RAX + 2;
    if ((long)((*(ulong *)(in_RAX[1] + -8) >> 9 | 1) * 2 + -1) < *in_RAX) {
      uVar5 = camlHashtbl__resize_89();
      return uVar5;
    }
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined8 FUN_00418b48(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long unaff_RBX;
  long lStack0000000000000038;
  long in_stack_00000040;
  
  lStack0000000000000038 = *(long *)(unaff_RBX + 8);
  if (param_3 < *(ulong *)(lStack0000000000000038 + -8) >> 9) {
    uVar1 = camlHashtbl__replace_bucket_249();
    caml_modify(lStack0000000000000038 + -4 + in_stack_00000040 * 4,uVar1);
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



void camlHashtbl__mem_255(long param_1)

{
  code *pcVar1;
  long in_RAX;
  ulong uVar2;
  ulong uVar3;
  long extraout_RDX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    in_RAX = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = camlHashtbl__mem_in_bucket_258;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  uVar2 = *(ulong *)(*(long *)(in_RAX + 8) + -8) >> 10;
  if (uVar2 != 0) {
    pcVar1 = **(code ***)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8);
    uVar3 = (*pcVar1)(pcVar1);
    if (SUB168(ZEXT816((ulong)((long)(uVar3 & 0x7fffffffffffffff) >> 1)) % SEXT816((long)uVar2),0) *
        2 + 1U < *(ulong *)(*(long *)(in_RAX + 8) + -8) >> 9) {
      camlHashtbl__mem_in_bucket_258();
      return;
    }
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void camlHashtbl__hash_59(void)

{
  caml_hash_univ_param(0x15,0xc9);
  return;
}



void camlHashtbl__create_79(void)

{
  undefined8 uVar1;
  ulong unaff_R15;
  
  camlPervasives__max_53();
  uVar1 = camlPervasives__min_50();
  uVar1 = caml_c_call(uVar1,1);
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x18) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x10) = 1;
  *(undefined8 *)(unaff_R15 - 8) = uVar1;
  return;
}



undefined8 camlHashtbl__clear_82(void)

{
  undefined8 *in_RAX;
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  uVar2 = (*(ulong *)(in_RAX[1] + -8) >> 9 | 1) - 2;
  uVar1 = 1;
  if (0 < (long)uVar2) {
    do {
      if (*(ulong *)(in_RAX[1] + -8) >> 9 <= uVar1) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      caml_modify(in_RAX[1] + -4 + uVar1 * 4,1);
      bVar3 = uVar1 != uVar2;
      uVar1 = uVar1 + 2;
    } while (bVar3);
  }
  *in_RAX = 1;
  return 1;
}



void camlHashtbl__copy_85(void)

{
  undefined8 *in_RAX;
  undefined8 uVar1;
  ulong unaff_R15;
  
  uVar1 = camlArray__copy_77();
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x18) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x10) = *in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = uVar1;
  return;
}



undefined8 camlHashtbl__length_87(void)

{
  undefined8 *in_RAX;
  
  return *in_RAX;
}



undefined8 camlHashtbl__resize_89(void)

{
  long lVar1;
  undefined8 in_RAX;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_RBX;
  ulong unaff_R15;
  bool bVar5;
  ulong local_30;
  
  lVar1 = *(long *)(unaff_RBX + 8);
  uVar2 = *(ulong *)(lVar1 + -8) >> 9 | 1;
  uVar3 = camlPervasives__min_50();
  if (uVar3 == uVar2) {
    return 1;
  }
  uVar4 = caml_c_call(uVar3,1);
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x30) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x30;
  }
  *(undefined8 *)(unaff_R15 - 0x30) = 0x14f7;
  *(code **)(unaff_R15 - 0x28) = camlHashtbl__insert_bucket_96;
  *(undefined8 *)(unaff_R15 - 0x20) = 3;
  *(undefined8 *)(unaff_R15 - 0x18) = in_RAX;
  *(ulong *)(unaff_R15 - 0x10) = uVar3;
  *(undefined8 *)(unaff_R15 - 8) = uVar4;
  uVar2 = uVar2 - 2;
  if (0 < (long)uVar2) {
    local_30 = 1;
    do {
      if (*(ulong *)(lVar1 + -8) >> 9 <= local_30) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      camlHashtbl__insert_bucket_96();
      bVar5 = local_30 != uVar2;
      local_30 = local_30 + 2;
    } while (bVar5);
  }
  caml_modify(unaff_RBX + 8,uVar4);
  return 1;
}



undefined8 camlHashtbl__add_102(undefined8 param_1)

{
  long *in_RAX;
  long lVar1;
  undefined8 uVar2;
  ulong extraout_RDX;
  undefined8 unaff_RBX;
  ulong uVar3;
  ulong unaff_R15;
  
  uVar3 = *(ulong *)(in_RAX[1] + -8) >> 10;
  if (uVar3 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  lVar1 = caml_hash_univ_param(0x15,0xc9);
  uVar3 = SUB168(CONCAT88(lVar1 >> 0x3f,lVar1 >> 1) % SEXT816((long)uVar3),0) * 2 + 1;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    uVar3 = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xc00;
  *(undefined8 *)(unaff_R15 - 0x18) = unaff_RBX;
  *(undefined8 *)(unaff_R15 - 0x10) = param_1;
  if (*(ulong *)(in_RAX[1] + -8) >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  *(undefined8 *)(unaff_R15 - 8) = *(undefined8 *)(in_RAX[1] + -4 + uVar3 * 4);
  if (*(ulong *)(in_RAX[1] + -8) >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  caml_modify(in_RAX[1] + -4 + uVar3 * 4);
  *in_RAX = *in_RAX + 2;
  if ((long)((*(ulong *)(in_RAX[1] + -8) >> 9 | 1) * 2 + -1) < *in_RAX) {
    uVar2 = camlHashtbl__resize_89();
    return uVar2;
  }
  return 1;
}



undefined8 camlHashtbl__remove_108(void)

{
  long in_RAX;
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  ulong uVar3;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_RBX = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = camlHashtbl__remove_bucket_111;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(long *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  uVar3 = *(ulong *)(*(long *)(in_RAX + 8) + -8) >> 10;
  if (uVar3 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  lVar1 = caml_hash_univ_param(0x15,0xc9);
  uVar3 = SUB168(CONCAT88(lVar1 >> 0x3f,lVar1 >> 1) % SEXT816((long)uVar3),0) * 2 + 1;
  lVar1 = *(long *)(in_RAX + 8);
  if (*(ulong *)(lVar1 + -8) >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  if (uVar3 < *(ulong *)(*(long *)(in_RAX + 8) + -8) >> 9) {
    uVar2 = camlHashtbl__remove_bucket_111();
    caml_modify(lVar1 + -4 + uVar3 * 4,uVar2);
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



undefined8 camlHashtbl__find_rec_116(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_RAX;
  long lVar3;
  undefined8 *unaff_RBX;
  ulong unaff_R15;
  
  do {
    if (unaff_RBX == (undefined8 *)0x1) {
      while (unaff_R15 - 0x10 < caml_young_limit) {
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x10;
      }
      *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
      *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    puVar1 = (undefined8 *)unaff_RBX[2];
    uVar2 = unaff_RBX[1];
    lVar3 = caml_c_call(in_RAX,*unaff_RBX);
    unaff_RBX = puVar1;
  } while (lVar3 != 1);
  return uVar2;
}



undefined8 camlHashtbl__find_121(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long in_RAX;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  ulong uVar5;
  ulong unaff_R15;
  
  uVar5 = *(ulong *)(*(long *)(in_RAX + 8) + -8) >> 10;
  if (uVar5 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  lVar3 = caml_hash_univ_param(0x15,0xc9);
  uVar5 = SUB168(CONCAT88(lVar3 >> 0x3f,lVar3 >> 1) % SEXT816((long)uVar5),0) * 2 + 1;
  if (*(ulong *)(*(long *)(in_RAX + 8) + -8) >> 9 <= uVar5) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  lVar3 = *(long *)(*(long *)(in_RAX + 8) + -4 + uVar5 * 4);
  if (lVar3 == 1) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x10) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
    *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  puVar1 = *(undefined8 **)(lVar3 + 0x10);
  uVar4 = *(undefined8 *)(lVar3 + 8);
  lVar3 = caml_c_call();
  if (lVar3 == 1) {
    return uVar4;
  }
  if (puVar1 == (undefined8 *)0x1) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x10) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
    *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  puVar2 = (undefined8 *)puVar1[2];
  uVar4 = puVar1[1];
  lVar3 = caml_c_call(unaff_RBX,*puVar1);
  if (lVar3 == 1) {
    return uVar4;
  }
  if (puVar2 == (undefined8 *)0x1) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x10) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
    *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  uVar4 = puVar2[1];
  lVar3 = caml_c_call(unaff_RBX,*puVar2);
  if (lVar3 == 1) {
    return uVar4;
  }
  uVar4 = camlHashtbl__find_rec_116();
  return uVar4;
}



void camlHashtbl__find_all_133(void)

{
  long in_RAX;
  long lVar1;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  ulong uVar2;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    unaff_RBX = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xcf7;
  *(code **)(unaff_R15 - 0x18) = camlHashtbl__find_in_bucket_136;
  *(undefined8 *)(unaff_R15 - 0x10) = 3;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  uVar2 = *(ulong *)(*(long *)(in_RAX + 8) + -8) >> 10;
  if (uVar2 != 0) {
    lVar1 = caml_hash_univ_param(0x15,0xc9);
    if (SUB168(CONCAT88(lVar1 >> 0x3f,lVar1 >> 1) % SEXT816((long)uVar2),0) * 2 + 1U <
        *(ulong *)(*(long *)(in_RAX + 8) + -8) >> 9) {
      camlHashtbl__find_in_bucket_136();
      return;
    }
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined8 camlHashtbl__replace_140(undefined8 param_1)

{
  long *in_RAX;
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long extraout_RDX;
  undefined8 unaff_RBX;
  ulong uVar4;
  ulong unaff_R15;
  ulong uVar5;
  
  while( true ) {
    uVar5 = unaff_R15 - 0x28;
    if (caml_young_limit <= uVar5) break;
    caml_call_gc();
    unaff_R15 = uVar5;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = camlHashtbl__replace_bucket_144;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = unaff_RBX;
  *(undefined8 *)(unaff_R15 - 8) = param_1;
  uVar4 = *(ulong *)(in_RAX[1] + -8) >> 10;
  if (uVar4 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  lVar1 = caml_hash_univ_param(0x15,0xc9);
  uVar4 = SUB168(CONCAT88(lVar1 >> 0x3f,lVar1 >> 1) % SEXT816((long)uVar4),0) * 2 + 1;
  if (*(ulong *)(in_RAX[1] + -8) >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  uVar3 = *(undefined8 *)(in_RAX[1] + -4 + uVar4 * 4);
  ppuVar2 = (undefined **)FUN_00419658();
  if ((undefined **)*ppuVar2 == &caml_exn_Not_found) {
    lVar1 = in_RAX[1];
    if (*(ulong *)(lVar1 + -8) >> 9 <= uVar4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    while( true ) {
      if (caml_young_limit <= uVar5 - 0x20) break;
      caml_call_gc();
      lVar1 = extraout_RDX;
      uVar5 = uVar5 - 0x20;
    }
    *(undefined8 *)(uVar5 - 0x20) = 0xc00;
    *(undefined8 *)(uVar5 - 0x18) = unaff_RBX;
    *(undefined8 *)(uVar5 - 0x10) = param_1;
    *(undefined8 *)(uVar5 - 8) = uVar3;
    caml_modify(lVar1 + -4 + uVar4 * 4);
    *in_RAX = *in_RAX + 2;
    if ((long)((*(ulong *)(in_RAX[1] + -8) >> 9 | 1) * 2 + -1) < *in_RAX) {
      uVar3 = camlHashtbl__resize_89();
      return uVar3;
    }
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined8 FUN_00419658(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long unaff_R12;
  long lStack0000000000000030;
  long in_stack_00000038;
  
  lStack0000000000000030 = *(long *)(unaff_R12 + 8);
  if (param_3 < *(ulong *)(lStack0000000000000030 + -8) >> 9) {
    uVar1 = camlHashtbl__replace_bucket_144();
    caml_modify(lStack0000000000000030 + -4 + in_stack_00000038 * 4,uVar1);
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



void camlHashtbl__mem_150(void)

{
  long in_RAX;
  long lVar1;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  ulong uVar2;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    unaff_RBX = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xcf7;
  *(code **)(unaff_R15 - 0x18) = camlHashtbl__mem_in_bucket_153;
  *(undefined8 *)(unaff_R15 - 0x10) = 3;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  uVar2 = *(ulong *)(*(long *)(in_RAX + 8) + -8) >> 10;
  if (uVar2 != 0) {
    lVar1 = caml_hash_univ_param(0x15,0xc9);
    if (SUB168(CONCAT88(lVar1 >> 0x3f,lVar1 >> 1) % SEXT816((long)uVar2),0) * 2 + 1U <
        *(ulong *)(*(long *)(in_RAX + 8) + -8) >> 9) {
      camlHashtbl__mem_in_bucket_153();
      return;
    }
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



undefined8 camlHashtbl__iter_157(void)

{
  long lVar1;
  undefined8 in_RAX;
  ulong uVar2;
  long unaff_RBX;
  ulong unaff_R15;
  bool bVar3;
  ulong local_18;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xcf7;
  *(code **)(unaff_R15 - 0x18) = camlHashtbl__do_bucket_160;
  *(undefined8 *)(unaff_R15 - 0x10) = 3;
  *(undefined8 *)(unaff_R15 - 8) = in_RAX;
  lVar1 = *(long *)(unaff_RBX + 8);
  uVar2 = (*(ulong *)(lVar1 + -8) >> 9 | 1) - 2;
  if (0 < (long)uVar2) {
    local_18 = 1;
    do {
      if (*(ulong *)(lVar1 + -8) >> 9 <= local_18) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      camlHashtbl__do_bucket_160();
      bVar3 = local_18 != uVar2;
      local_18 = local_18 + 2;
    } while (bVar3);
  }
  return 1;
}



undefined8 camlHashtbl__fold_166(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  long unaff_RBX;
  ulong uVar4;
  ulong unaff_R15;
  bool bVar5;
  ulong local_10;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x38) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x38;
  }
  *(undefined8 *)(unaff_R15 - 0x38) = 0x10f7;
  *(code **)(unaff_R15 - 0x30) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x28) = 5;
  *(code **)(unaff_R15 - 0x20) = camlHashtbl__do_bucket_170;
  *(undefined8 *)(unaff_R15 - 0x18) = in_RAX;
  lVar2 = *(long *)(unaff_RBX + 8);
  puVar1 = (undefined8 *)(unaff_R15 - 8);
  *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
  *puVar1 = param_1;
  uVar4 = (*(ulong *)(lVar2 + -8) >> 9 | 1) - 2;
  if (0 < (long)uVar4) {
    local_10 = 1;
    do {
      if (*(ulong *)(lVar2 + -8) >> 9 <= local_10) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      uVar3 = camlHashtbl__do_bucket_170((code **)(unaff_R15 - 0x30));
      caml_modify(puVar1,uVar3);
      bVar5 = local_10 != uVar4;
      local_10 = local_10 + 2;
    } while (bVar5);
  }
  return *puVar1;
}



void camlHashtbl__Make_279(void)

{
  code **ppcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_RAX;
  code **ppcVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 uVar10;
  ulong unaff_R15;
  ulong uVar11;
  
  uVar3 = DAT_00649e30;
  uVar2 = camlHashtbl;
  uVar10 = DAT_00649e40;
  while( true ) {
    uVar11 = unaff_R15 - 0xd8;
    if (caml_young_limit <= uVar11) break;
    caml_call_gc();
    unaff_R15 = uVar11;
  }
  ppcVar1 = (code **)(unaff_R15 - 0xd0);
  *(undefined8 *)(unaff_R15 - 0xd8) = 0xcf7;
  *ppcVar1 = camlHashtbl__safehash_205;
  *(undefined8 *)(unaff_R15 - 200) = 3;
  *(undefined8 *)(unaff_R15 - 0xc0) = in_RAX;
  ppcVar9 = (code **)(unaff_R15 - 0xb0);
  *(undefined8 *)(unaff_R15 - 0xb8) = 0x10f7;
  *ppcVar9 = caml_curry3;
  *(undefined8 *)(unaff_R15 - 0xa8) = 7;
  *(code **)(unaff_R15 - 0xa0) = camlHashtbl__add_207;
  *(code ***)(unaff_R15 - 0x98) = ppcVar1;
  ppcVar8 = (code **)(unaff_R15 - 0x88);
  *(undefined8 *)(unaff_R15 - 0x90) = 0x14f7;
  *ppcVar8 = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x80) = 5;
  *(code **)(unaff_R15 - 0x78) = camlHashtbl__remove_213;
  *(undefined8 *)(unaff_R15 - 0x70) = in_RAX;
  *(code ***)(unaff_R15 - 0x68) = ppcVar1;
  *(undefined8 *)(unaff_R15 - 0x60) = 0x10f7;
  *(code **)(unaff_R15 - 0x58) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x50) = 5;
  *(code **)(unaff_R15 - 0x48) = camlHashtbl__find_rec_221;
  *(undefined8 *)(unaff_R15 - 0x40) = in_RAX;
  ppcVar7 = (code **)(unaff_R15 - 0x30);
  *(undefined8 *)(unaff_R15 - 0x38) = 0x18f7;
  *ppcVar7 = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x28) = 5;
  *(code **)(unaff_R15 - 0x20) = camlHashtbl__find_226;
  *(undefined8 *)(unaff_R15 - 0x18) = in_RAX;
  *(code ***)(unaff_R15 - 0x10) = ppcVar1;
  *(code ***)(unaff_R15 - 8) = (code **)(unaff_R15 - 0x58);
  while( true ) {
    if (caml_young_limit <= uVar11 - 0xf8) break;
    caml_call_gc();
    uVar11 = uVar11 - 0xf8;
  }
  *(undefined8 *)(uVar11 - 0xf8) = 0x14f7;
  *(code **)(uVar11 - 0xf0) = caml_curry2;
  *(undefined8 *)(uVar11 - 0xe8) = 5;
  *(code **)(uVar11 - 0xe0) = camlHashtbl__find_all_238;
  *(undefined8 *)(uVar11 - 0xd8) = in_RAX;
  *(code ***)(uVar11 - 0xd0) = ppcVar1;
  *(undefined8 *)(uVar11 - 200) = 0x14f7;
  *(code **)(uVar11 - 0xc0) = caml_curry3;
  *(undefined8 *)(uVar11 - 0xb8) = 7;
  *(code **)(uVar11 - 0xb0) = camlHashtbl__replace_245;
  *(undefined8 *)(uVar11 - 0xa8) = in_RAX;
  *(code ***)(uVar11 - 0xa0) = ppcVar1;
  *(undefined8 *)(uVar11 - 0x98) = 0x14f7;
  *(code **)(uVar11 - 0x90) = caml_curry2;
  *(undefined8 *)(uVar11 - 0x88) = 5;
  *(code **)(uVar11 - 0x80) = camlHashtbl__mem_255;
  *(undefined8 *)(uVar11 - 0x78) = in_RAX;
  *(code ***)(uVar11 - 0x70) = ppcVar1;
  uVar6 = DAT_00649e80;
  uVar5 = DAT_00649e78;
  uVar4 = DAT_00649e70;
  *(undefined8 *)(uVar11 - 0x68) = 0x3000;
  *(undefined8 *)(uVar11 - 0x60) = uVar2;
  *(undefined8 *)(uVar11 - 0x58) = uVar3;
  *(undefined8 *)(uVar11 - 0x50) = uVar10;
  *(code ***)(uVar11 - 0x48) = ppcVar9;
  *(code ***)(uVar11 - 0x40) = ppcVar8;
  *(code ***)(uVar11 - 0x38) = ppcVar7;
  *(code ***)(uVar11 - 0x30) = (code **)(uVar11 - 0xf0);
  *(code ***)(uVar11 - 0x28) = (code **)(uVar11 - 0xc0);
  *(code ***)(uVar11 - 0x20) = (code **)(uVar11 - 0x90);
  *(undefined8 *)(uVar11 - 0x18) = uVar4;
  *(undefined8 *)(uVar11 - 0x10) = uVar5;
  *(undefined8 *)(uVar11 - 8) = uVar6;
  return;
}



undefined8 camlHashtbl__entry(void)

{
  camlHashtbl = &camlHashtbl__15;
  DAT_00649e30 = &camlHashtbl__14;
  DAT_00649e38 = &camlHashtbl__10;
  DAT_00649e40 = &camlHashtbl__13;
  DAT_00649e48 = &camlHashtbl__7;
  DAT_00649e50 = &camlHashtbl__6;
  DAT_00649e58 = &camlHashtbl__4;
  DAT_00649e60 = &camlHashtbl__9;
  DAT_00649e68 = &camlHashtbl__5;
  DAT_00649e70 = &camlHashtbl__3;
  DAT_00649e78 = &camlHashtbl__2;
  DAT_00649e80 = &camlHashtbl__12;
  DAT_00649e88 = &camlHashtbl__1;
  DAT_00649e90 = &camlHashtbl__16;
  DAT_00649e98 = &camlHashtbl__11;
  DAT_00649ea0 = &camlHashtbl__8;
  return 1;
}



long camlBuffer__advance_132(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long in_RAX;
  long unaff_RBX;
  ulong uVar3;
  ulong unaff_R15;
  
  while( true ) {
    if (param_1 <= unaff_RBX) {
      while( true ) {
        if (caml_young_limit <= unaff_R15 - 0x10) break;
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x10;
      }
      *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
      *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
      caml_raise_exn();
    }
    lVar2 = *(long *)(param_2 + 0x28);
    uVar3 = unaff_RBX >> 1;
    lVar1 = (*(ulong *)(lVar2 + -8) >> 10) * 8 + -1;
    if (lVar1 - (ulong)*(byte *)(lVar2 + lVar1) <= uVar3) break;
    if ((ulong)*(byte *)(lVar2 + uVar3) * 2 + 1 == *(long *)(param_2 + 0x18)) {
      unaff_RBX = unaff_RBX + 2;
      in_RAX = in_RAX + 2;
    }
    else {
      lVar2 = *(long *)(param_2 + 0x28);
      lVar1 = (*(ulong *)(lVar2 + -8) >> 10) * 8 + -1;
      if (lVar1 - (ulong)*(byte *)(lVar2 + lVar1) <= uVar3) {
                    // WARNING: Subroutine does not return
        caml_ml_array_bound_error();
      }
      if ((ulong)*(byte *)(lVar2 + uVar3) * 2 + 1 == *(long *)(param_2 + 0x20)) {
        if (in_RAX == 1) {
          return unaff_RBX;
        }
        unaff_RBX = unaff_RBX + 2;
        in_RAX = in_RAX + -2;
      }
      else {
        unaff_RBX = unaff_RBX + 2;
      }
    }
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



// WARNING: Control flow encountered bad instruction data

void camlBuffer__advance_139(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long in_RAX;
  long unaff_RBX;
  
  if (unaff_RBX <= in_RAX) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  lVar1 = (*(ulong *)(lVar3 + -8) >> 10) * 8 + -1;
  if (lVar1 - (ulong)*(byte *)(lVar3 + lVar1) <= (ulong)(in_RAX >> 1)) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  lVar1 = (ulong)*(byte *)(lVar3 + (in_RAX >> 1)) * 2;
  uVar2 = lVar1 + 1;
  if (uVar2 < 0xbf) {
    if (uVar2 < 0x75) {
      if (0x60 < uVar2) goto switchD_00419e6b_caseD_180;
    }
    else {
      if (lVar1 - 0x81U < 0x34) goto switchD_00419e6b_caseD_180;
    }
  }
  else {
                    // WARNING (jumptable): Sanity check requires truncation of jumptable
                    // WARNING: Could not find normalized switch variable to match jumptable
    switch(lVar1) {
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
switchD_00419e6b_caseD_180:
      camlBuffer__advance_139();
      return;
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
      break;
    case 0x200:
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    default:
      if (uVar2 != 0xc1) goto switchD_00419e6b_caseD_180;
    }
  }
  return;
}



undefined8 camlBuffer__subst_155(long param_1)

{
  long lVar1;
  long lVar2;
  long in_RAX;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_RBX;
  
  while( true ) {
    if (*(long *)(param_1 + 0x30) <= unaff_RBX) {
      if (in_RAX == 0xb9) {
        uVar4 = camlBuffer__add_char_100();
        return uVar4;
      }
      return 1;
    }
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = (*(ulong *)(lVar2 + -8) >> 10) * 8 + -1;
    if (lVar1 - (ulong)*(byte *)(lVar2 + lVar1) <= (ulong)(unaff_RBX >> 1)) break;
    lVar1 = (ulong)*(byte *)(lVar2 + (unaff_RBX >> 1)) * 2 + 1;
    if (lVar1 == 0x49) {
      if (in_RAX == 0xb9) {
        camlBuffer__add_char_100();
        unaff_RBX = unaff_RBX + 2;
        in_RAX = 0x41;
      }
      else {
        puVar3 = (undefined8 *)camlBuffer__find_ident_142(*(undefined8 *)(param_1 + 0x30));
        unaff_RBX = puVar3[1];
        (***(code ***)(param_1 + 0x20))(**(code ***)(param_1 + 0x20),*puVar3);
        camlBuffer__add_string_110();
        in_RAX = 0x41;
      }
    }
    else {
      if (in_RAX == 0xb9) {
        camlBuffer__add_char_100();
        camlBuffer__add_char_100();
        unaff_RBX = unaff_RBX + 2;
        in_RAX = 0x41;
      }
      else {
        in_RAX = lVar1;
        if (lVar1 == 0xb9) {
          unaff_RBX = unaff_RBX + 2;
        }
        else {
          camlBuffer__add_char_100();
          unaff_RBX = unaff_RBX + 2;
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



void camlBuffer__create_67(void)

{
  long in_RAX;
  undefined8 uVar1;
  ulong unaff_R15;
  long local_8;
  
  if (in_RAX < 3) {
    in_RAX = 3;
  }
  local_8 = in_RAX;
  if (DAT_00649bc8 < in_RAX) {
    local_8 = DAT_00649bc8;
  }
  uVar1 = caml_c_call();
  while (unaff_R15 - 0x28 < caml_young_limit) {
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x1000;
  *(undefined8 *)(unaff_R15 - 0x20) = uVar1;
  *(undefined8 *)(unaff_R15 - 0x18) = 1;
  *(long *)(unaff_R15 - 0x10) = local_8;
  *(undefined8 *)(unaff_R15 - 8) = uVar1;
  return;
}



void camlBuffer__contents_72(void)

{
  long in_RAX;
  
  camlString__sub_74(*(undefined8 *)(in_RAX + 8));
  return;
}



undefined8 camlBuffer__sub_74(long param_1)

{
  long in_RAX;
  undefined8 uVar1;
  long unaff_RBX;
  
  if (((0 < unaff_RBX) && (0 < param_1)) && (unaff_RBX <= (*(long *)(in_RAX + 8) - param_1) + 1)) {
    uVar1 = caml_c_call();
    camlString__blit_84(uVar1,1,param_1);
    return uVar1;
  }
  uVar1 = camlPervasives__invalid_arg_40();
  return uVar1;
}



void camlBuffer__blit_79(long param_1,long param_2,long param_3)

{
  long lVar1;
  long in_RAX;
  long unaff_RBX;
  
  if ((((0 < param_3) && (0 < unaff_RBX)) && (unaff_RBX <= (*(long *)(in_RAX + 8) - param_3) + 1))
     && (0 < param_2)) {
    lVar1 = (*(ulong *)(param_1 + -8) >> 10) * 8 + -1;
    if (param_2 <= (long)(((lVar1 - (ulong)*(byte *)(param_1 + lVar1)) * 2 - param_3) + 2)) {
      camlString__blit_84();
      return;
    }
  }
  camlPervasives__invalid_arg_40();
  return;
}



long camlBuffer__nth_85(void)

{
  long lVar1;
  long *in_RAX;
  long lVar2;
  long unaff_RBX;
  
  if ((0 < unaff_RBX) && (unaff_RBX < in_RAX[1])) {
    lVar1 = *in_RAX;
    lVar2 = (*(ulong *)(lVar1 + -8) >> 10) * 8 + -1;
    if ((ulong)(unaff_RBX >> 1) < lVar2 - (ulong)*(byte *)(lVar1 + lVar2)) {
      return (ulong)*(byte *)(lVar1 + (unaff_RBX >> 1)) * 2 + 1;
    }
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  lVar2 = camlPervasives__invalid_arg_40();
  return lVar2;
}



undefined8 camlBuffer__length_88(void)

{
  long in_RAX;
  
  return *(undefined8 *)(in_RAX + 8);
}



undefined8 camlBuffer__clear_90(void)

{
  long in_RAX;
  
  *(undefined8 *)(in_RAX + 8) = 1;
  return 1;
}



undefined8 camlBuffer__reset_92(void)

{
  long lVar1;
  long *in_RAX;
  
  in_RAX[1] = 1;
  caml_modify();
  lVar1 = (*(ulong *)(*in_RAX + -8) >> 10) * 8 + -1;
  in_RAX[2] = (lVar1 - (ulong)*(byte *)(*in_RAX + lVar1)) * 2 + 1;
  return 1;
}



undefined8 camlBuffer__resize_94(void)

{
  long *plVar1;
  long in_RAX;
  undefined8 uVar2;
  long unaff_RBX;
  long lVar3;
  long lVar4;
  ulong unaff_R15;
  
  lVar3 = *(long *)(in_RAX + 0x10);
  lVar4 = in_RAX;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x10) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x10;
  }
  plVar1 = (long *)(unaff_R15 - 8);
  *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
  *plVar1 = lVar3;
  while (*plVar1 < *(long *)(lVar4 + 8) + -1 + unaff_RBX) {
    *plVar1 = (*plVar1 >> 1) * 4 + 1;
  }
  if (DAT_00649bc8 < *plVar1) {
    if (DAT_00649bc8 < *(long *)(lVar4 + 8) + -1 + unaff_RBX) {
      camlPervasives__failwith_38();
    }
    else {
      *plVar1 = DAT_00649bc8;
    }
  }
  uVar2 = caml_c_call(*plVar1);
  camlString__blit_84(uVar2,1,*(undefined8 *)(in_RAX + 8));
  caml_modify(in_RAX,uVar2);
  *(long *)(in_RAX + 0x10) = *plVar1;
  return 1;
}



undefined8 camlBuffer__add_char_100(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *in_RAX;
  long unaff_RBX;
  
  lVar2 = in_RAX[1];
  if (in_RAX[2] <= lVar2) {
    camlBuffer__resize_94();
  }
  lVar3 = *in_RAX;
  lVar1 = (*(ulong *)(lVar3 + -8) >> 10) * 8 + -1;
  if ((ulong)(lVar2 >> 1) < lVar1 - (ulong)*(byte *)(lVar3 + lVar1)) {
    *(char *)(lVar3 + (lVar2 >> 1)) = (char)(unaff_RBX >> 1);
    in_RAX[1] = lVar2 + 2;
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



undefined8 camlBuffer__add_substring_104(long param_1,long param_2)

{
  long lVar1;
  undefined8 *in_RAX;
  long unaff_RBX;
  
  if (((param_1 < 1) || (param_2 < 1)) ||
     (lVar1 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1,
     (long)(((lVar1 - (ulong)*(byte *)(unaff_RBX + lVar1)) * 2 - param_2) + 2) < param_1)) {
    camlPervasives__invalid_arg_40();
  }
  lVar1 = in_RAX[1] + -1 + param_2;
  if ((long)in_RAX[2] < lVar1) {
    camlBuffer__resize_94();
  }
  camlString__blit_84(*in_RAX,in_RAX[1],param_2);
  in_RAX[1] = lVar1;
  return 1;
}



undefined8 camlBuffer__add_string_110(void)

{
  long lVar1;
  long lVar2;
  undefined8 *in_RAX;
  long unaff_RBX;
  
  lVar1 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
  lVar1 = (lVar1 - (ulong)*(byte *)(unaff_RBX + lVar1)) * 2 + 1;
  lVar2 = in_RAX[1] + -1 + lVar1;
  if ((long)in_RAX[2] < lVar2) {
    camlBuffer__resize_94();
  }
  camlString__blit_84(*in_RAX,in_RAX[1],lVar1);
  in_RAX[1] = lVar2;
  return 1;
}



void camlBuffer__add_buffer_115(void)

{
  long unaff_RBX;
  
  camlBuffer__add_substring_104(1,*(undefined8 *)(unaff_RBX + 8));
  return;
}



undefined8 camlBuffer__add_channel_118(long param_1)

{
  long in_RAX;
  
  if (*(long *)(in_RAX + 0x10) < *(long *)(in_RAX + 8) + -1 + param_1) {
    camlBuffer__resize_94();
  }
  camlPervasives__really_input_259(*(undefined8 *)(in_RAX + 8),param_1);
  *(long *)(in_RAX + 8) = *(long *)(in_RAX + 8) + -1 + param_1;
  return 1;
}



void camlBuffer__output_buffer_122(void)

{
  long unaff_RBX;
  
  camlPervasives__output_218(1,*(undefined8 *)(unaff_RBX + 8));
  return;
}



undefined8 camlBuffer__closing_125(void)

{
  long in_RAX;
  ulong unaff_R15;
  
  if (in_RAX == 0x51) {
    return 0x53;
  }
  if (in_RAX != 0xf7) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x18) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x18;
    }
    *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
    *(undefined ***)(unaff_R15 - 0x10) = &caml_exn_Assert_failure;
    *(undefined ***)(unaff_R15 - 8) = &camlBuffer__21;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  return 0xfb;
}



void camlBuffer__advance_to_closing_126(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x38) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x38;
  }
  *(undefined8 *)(unaff_R15 - 0x38) = 0x18f7;
  *(code **)(unaff_R15 - 0x30) = caml_curry3;
  *(undefined8 *)(unaff_R15 - 0x28) = 7;
  *(code **)(unaff_R15 - 0x20) = camlBuffer__advance_132;
  *(undefined8 *)(unaff_R15 - 0x18) = in_RAX;
  *(undefined8 *)(unaff_R15 - 0x10) = unaff_RBX;
  *(long *)(unaff_R15 - 8) = param_2;
  lVar1 = (*(ulong *)(param_2 + -8) >> 10) * 8 + -1;
  camlBuffer__advance_132((lVar1 - (ulong)*(byte *)(param_2 + lVar1)) * 2 + 1);
  return;
}



void camlBuffer__advance_to_non_alpha_136(void)

{
  long in_RAX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x18) = 5;
  *(code **)(unaff_R15 - 0x10) = camlBuffer__advance_139;
  *(long *)(unaff_R15 - 8) = in_RAX;
  camlBuffer__advance_139
            ((code **)(unaff_R15 - 0x20),
             *(undefined *)(in_RAX + (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1));
  return;
}



undefined8 * camlBuffer__find_ident_142(long param_1)

{
  char cVar1;
  long in_RAX;
  long lVar2;
  undefined8 uVar3;
  long unaff_RBX;
  ulong unaff_R15;
  
  if (param_1 <= unaff_RBX) {
    while (unaff_R15 - 0x10 < caml_young_limit) {
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
    *(undefined ***)(unaff_R15 - 8) = &caml_exn_Not_found;
                    // WARNING: Subroutine does not return
    caml_raise_exn();
  }
  lVar2 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  if (lVar2 - (ulong)*(byte *)(in_RAX + lVar2) <= (ulong)(unaff_RBX >> 1)) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  cVar1 = *(char *)(in_RAX + (unaff_RBX >> 1));
  if ((cVar1 != '(') && (cVar1 != '{')) {
    lVar2 = camlBuffer__advance_to_non_alpha_136();
    uVar3 = camlString__sub_74((lVar2 - unaff_RBX) + 1);
    while (unaff_R15 - 0x18 < caml_young_limit) {
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x18;
    }
    *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
    *(undefined8 *)(unaff_R15 - 0x10) = uVar3;
    *(long *)(unaff_R15 - 8) = lVar2;
    return (undefined8 *)(unaff_R15 - 0x10);
  }
  lVar2 = unaff_RBX + 2;
  camlBuffer__closing_125();
  lVar2 = camlBuffer__advance_to_closing_126(1,in_RAX,lVar2);
  uVar3 = camlString__sub_74((lVar2 - unaff_RBX) + -1);
  while (unaff_R15 - 0x18 < caml_young_limit) {
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x10) = uVar3;
  *(long *)(unaff_R15 - 8) = lVar2 + 2;
  return (undefined8 *)(unaff_R15 - 0x10);
}



void camlBuffer__add_substitute_150(long param_1)

{
  undefined8 in_RAX;
  long lVar1;
  long extraout_RDX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  lVar1 = (*(ulong *)(param_1 + -8) >> 10) * 8 + -1;
  lVar1 = (lVar1 - (ulong)*(byte *)(param_1 + lVar1)) * 2 + 1;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x40) break;
    caml_call_gc();
    lVar1 = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x40;
  }
  *(undefined8 *)(unaff_R15 - 0x40) = 0x1cf7;
  *(code **)(unaff_R15 - 0x38) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x30) = 5;
  *(code **)(unaff_R15 - 0x28) = camlBuffer__subst_155;
  *(undefined8 *)(unaff_R15 - 0x20) = in_RAX;
  *(undefined8 *)(unaff_R15 - 0x18) = unaff_RBX;
  *(long *)(unaff_R15 - 0x10) = param_1;
  *(long *)(unaff_R15 - 8) = lVar1;
  camlBuffer__subst_155();
  return;
}



undefined8 camlBuffer__entry(void)

{
  camlBuffer = &camlBuffer__20;
  DAT_0064ad18 = &camlBuffer__19;
  DAT_0064ad20 = &camlBuffer__18;
  DAT_0064ad28 = &camlBuffer__17;
  DAT_0064ad30 = &camlBuffer__16;
  DAT_0064ad38 = &camlBuffer__15;
  DAT_0064ad40 = &camlBuffer__14;
  DAT_0064ad48 = &camlBuffer__13;
  DAT_0064ad50 = &camlBuffer__11;
  DAT_0064ad58 = &camlBuffer__9;
  DAT_0064ad60 = &camlBuffer__10;
  DAT_0064ad68 = &camlBuffer__1;
  DAT_0064ad70 = &camlBuffer__8;
  DAT_0064ad78 = &camlBuffer__7;
  DAT_0064ad80 = &camlBuffer__6;
  DAT_0064ad88 = &camlBuffer__12;
  DAT_0064ad90 = &camlBuffer__5;
  DAT_0064ad98 = &camlBuffer__4;
  DAT_0064ada0 = &camlBuffer__3;
  DAT_0064ada8 = &camlBuffer__2;
  return 1;
}



void camlPrintf__fun_703(void)

{
  long unaff_RBX;
  
  camlPrintf__doprn_392(*(undefined8 *)(unaff_RBX + 0x10));
  return;
}



long camlPrintf__skip_int_literal_120(void)

{
  ulong uVar1;
  long in_RAX;
  long lVar2;
  long unaff_RBX;
  
  uVar1 = (ulong)*(byte *)(*(long *)(unaff_RBX + 0x10) + (in_RAX >> 1)) * 2 + 1;
  if (uVar1 < 0x61) {
    if (uVar1 == 0x49) {
      return in_RAX + 2;
    }
  }
  else {
    if (uVar1 < 0x75) {
      lVar2 = camlPrintf__skip_int_literal_120();
      return lVar2;
    }
  }
  return *(long *)(unaff_RBX + 0x18);
}



long camlPrintf__sub_sub_157(void)

{
  long lVar1;
  long in_RAX;
  long lVar2;
  ulong uVar3;
  long unaff_RBX;
  
  if (*(long *)(unaff_RBX + 0x28) <= in_RAX) {
                    // WARNING: Could not recover jumptable at 0x0041ac02. Too many branches
                    // WARNING: Treating indirect jump as call
    lVar2 = (***(code ***)(unaff_RBX + 0x10))(**(code ***)(unaff_RBX + 0x10));
    return lVar2;
  }
  lVar1 = *(long *)(unaff_RBX + 0x20);
  lVar2 = (*(ulong *)(lVar1 + -8) >> 10) * 8 + -1;
  if (lVar2 - (ulong)*(byte *)(lVar1 + lVar2) <= (ulong)(in_RAX >> 1)) {
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  lVar2 = (ulong)*(byte *)(lVar1 + (in_RAX >> 1)) * 2;
  uVar3 = lVar2 - 0x4f;
  if (3 < uVar3) {
    if (5 < lVar2 - 0xf5U) {
LAB_0041ac70:
      lVar2 = camlPrintf__sub_156();
      return lVar2;
    }
    uVar3 = (long)(lVar2 - 0xf5U) >> 1;
    if (uVar3 == 0) goto LAB_0041ac84;
    if (uVar3 == 1) goto LAB_0041ac70;
    if (1 < (long)uVar3) goto LAB_0041acac;
  }
  if (uVar3 != 1) {
LAB_0041acac:
    if (lVar2 + 1 != *(long *)(unaff_RBX + 0x40)) {
      lVar2 = caml_apply3(lVar2 + 1,*(undefined8 *)(unaff_RBX + 0x18),
                          *(undefined8 *)(unaff_RBX + 0x38));
      return lVar2;
    }
    return in_RAX + 2;
  }
LAB_0041ac84:
  camlPrintf__sub_fmt_152(*(undefined8 *)(unaff_RBX + 0x30));
  lVar2 = camlPrintf__sub_156();
  return lVar2;
}



void camlPrintf__sub_156(void)

{
  long lVar1;
  long lVar2;
  long in_RAX;
  long unaff_RBX;
  
  if (*(long *)(unaff_RBX + 0x40) <= in_RAX) {
                    // WARNING: Could not recover jumptable at 0x0041ad07. Too many branches
                    // WARNING: Treating indirect jump as call
    (***(code ***)(unaff_RBX + 0x28))(**(code ***)(unaff_RBX + 0x28));
    return;
  }
  lVar2 = *(long *)(unaff_RBX + 0x38);
  lVar1 = (*(ulong *)(lVar2 + -8) >> 10) * 8 + -1;
  if ((ulong)(in_RAX >> 1) < lVar1 - (ulong)*(byte *)(lVar2 + lVar1)) {
    if (*(char *)(lVar2 + (in_RAX >> 1)) != '%') {
      camlPrintf__sub_156();
      return;
    }
    camlPrintf__sub_sub_157();
    return;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



undefined8 camlPrintf__loop_187(void)

{
  long lVar1;
  long in_RAX;
  long unaff_RBX;
  
  while( true ) {
    if (*(long *)(unaff_RBX + 0x20) + -4 <= in_RAX) {
      return 1;
    }
    lVar1 = (*(ulong *)(*(long *)(unaff_RBX + 0x10) + -8) >> 10) * 8 + -1;
    if (lVar1 - (ulong)*(byte *)(*(long *)(unaff_RBX + 0x10) + lVar1) <= (ulong)(in_RAX >> 1))
    break;
    in_RAX = caml_apply2();
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error(*(undefined8 *)(unaff_RBX + 0x18));
}



undefined8 camlPrintf__fun_594(long param_1)

{
  long lVar1;
  ulong uVar2;
  long in_RAX;
  ulong uVar3;
  undefined8 *unaff_RBX;
  
  uVar3 = (*(long *)(param_1 + 0x18) - in_RAX) - 1;
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(ulong *)(lVar1 + -8);
  if ((uVar2 & 0xff) == 0xfe) {
    if (uVar2 >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *(undefined8 *)(lVar1 + -4 + uVar3 * 4) = *unaff_RBX;
  }
  else {
    if (uVar2 >> 9 <= uVar3) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(lVar1 + -4 + uVar3 * 4);
  }
  return 1;
}



void camlPrintf__fun_597(void)

{
  undefined8 in_RAX;
  long unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x18) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = *(undefined8 *)(unaff_RBX + 0x20);
  camlPrintf__loop_268(*(undefined8 *)(unaff_RBX + 0x10));
  return;
}



void camlPrintf__got_spec_336(long param_1)

{
  long in_RAX;
  undefined8 uVar1;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  uVar1 = camlPrintf__get_arg_320(*(undefined8 *)(param_1 + 0x18));
  while (unaff_R15 - 0x18 < caml_young_limit) {
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined8 *)(unaff_R15 - 0x10) = uVar1;
  *(undefined8 *)(unaff_R15 - 8) = *(undefined8 *)(param_1 + 0x38);
  if (in_RAX == 1) {
    (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
  }
  camlPrintf__scan_flags_324
            ((undefined8 *)(unaff_R15 - 0x10),unaff_RBX,*(undefined8 *)(param_1 + 0x20));
  return;
}



void camlPrintf__got_spec_329(long param_1)

{
  camlPrintf__scan_flags_324(*(undefined8 *)(param_1 + 0x28));
  return;
}



void camlPrintf__cont_m_397(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  camlPrintf__ac_of_format_212();
  uVar1 = camlPrintf__index_of_int_65();
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x30) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x30;
  }
  *(undefined8 *)(unaff_R15 - 0x30) = 0x14f7;
  *(code **)(unaff_R15 - 0x28) = camlPrintf__fun_703;
  *(undefined8 *)(unaff_R15 - 0x20) = 3;
  *(long *)(unaff_R15 - 0x18) = param_2 + -0xa0;
  *(undefined8 *)(unaff_R15 - 0x10) = param_1;
  *(undefined8 *)(unaff_R15 - 8) = uVar1;
  camlPrintf__pr_386(unaff_RBX,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x40));
  return;
}



void camlPrintf__cont_f_396(long param_1)

{
  (***(code ***)(param_1 + 0x50))(**(code ***)(param_1 + 0x50));
  camlPrintf__doprn_392(param_1 + -0x80);
  return;
}



void camlPrintf__cont_t_395(undefined8 param_1,long param_2)

{
  code **unaff_RBX;
  
  if (*(long *)(param_2 + 0x58) == 1) {
    (**unaff_RBX)(*unaff_RBX);
  }
  else {
    (**unaff_RBX)(*unaff_RBX);
    caml_apply2(*(undefined8 *)(param_2 + 0x68));
  }
  camlPrintf__doprn_392(param_2 + -0x60);
  return;
}



void camlPrintf__cont_a_394(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_3 + 0x78) == 1) {
    caml_apply2();
  }
  else {
    caml_apply2();
    caml_apply2(*(undefined8 *)(param_3 + 0x88));
  }
  camlPrintf__doprn_392(param_3 + -0x40);
  return;
}



void camlPrintf__cont_s_393(undefined8 param_1,long param_2)

{
  caml_apply2(*(undefined8 *)(param_2 + 0xa8));
  camlPrintf__doprn_392(param_2 + -0x20);
  return;
}



void camlPrintf__doprn_392(long param_1)

{
  undefined8 in_RAX;
  long unaff_RBX;
  
  while( true ) {
    if (*(long *)(param_1 + 0x100) <= unaff_RBX) {
                    // WARNING: Could not recover jumptable at 0x0041b1bb. Too many branches
                    // WARNING: Treating indirect jump as call
      (***(code ***)(param_1 + 0xe8))(**(code ***)(param_1 + 0xe8));
      return;
    }
    if (*(char *)(*(long *)(param_1 + 0xf0) + (unaff_RBX >> 1)) == '%') break;
    caml_apply2(*(undefined8 *)(param_1 + 0xc0));
    unaff_RBX = unaff_RBX + 2;
  }
  camlPrintf__scan_format_310
            (in_RAX,unaff_RBX,param_1 + 0x20,param_1 + 0x40,param_1 + 0x60,param_1 + 0x80);
  return;
}



undefined8 camlPrintf__fun_716(void)

{
  return 1;
}



undefined8 * camlPrintf__parse_97(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  long unaff_RBX;
  ulong unaff_R15;
  
  do {
    while( true ) {
      lVar1 = (*(ulong *)(*(long *)(param_1 + 0x18) + -8) >> 10) * 8 + -1;
      if ((long)((lVar1 - (ulong)*(byte *)(*(long *)(param_1 + 0x18) + lVar1)) * 2 + 1) <= unaff_RBX
         ) {
        while( true ) {
          if (caml_young_limit <= unaff_R15 - 0x18) break;
          caml_call_gc();
          unaff_R15 = unaff_R15 - 0x18;
        }
        *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x10) = 1;
        *(undefined8 *)(unaff_R15 - 8) = in_RAX;
        return (undefined8 *)(unaff_R15 - 0x10);
      }
      uVar2 = (ulong)*(byte *)(*(long *)(param_1 + 0x18) + (unaff_RBX >> 1)) * 2 + 1;
      if (uVar2 < 99) break;
      if (uVar2 < 0x75) {
        lVar1 = (*(ulong *)(*(long *)(param_1 + 0x18) + -8) >> 10) * 8 + -1;
        uVar3 = camlString__sub_74((lVar1 - (ulong)*(byte *)(*(long *)(param_1 + 0x18) + lVar1)) * 2
                                   - unaff_RBX);
        uVar3 = caml_c_call(uVar3);
        while( true ) {
          if (caml_young_limit <= unaff_R15 - 0x18) break;
          caml_call_gc();
          unaff_R15 = unaff_R15 - 0x18;
        }
        *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
        *(undefined8 *)(unaff_R15 - 0x10) = uVar3;
        *(undefined8 *)(unaff_R15 - 8) = in_RAX;
        return (undefined8 *)(unaff_R15 - 0x10);
      }
LAB_0041b38c:
      unaff_RBX = unaff_RBX + 2;
    }
    if (uVar2 != 0x5b) goto LAB_0041b38c;
    unaff_RBX = unaff_RBX + 2;
    in_RAX = 3;
  } while( true );
}



void camlPrintf__skip_positional_spec_118(void)

{
  long in_RAX;
  long extraout_RDX;
  long unaff_RBX;
  ulong unaff_R15;
  
  if (0x13 < (ulong)*(byte *)(*(long *)(unaff_RBX + 0x10) + (in_RAX >> 1)) * 2 - 0x5f) {
    return;
  }
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    in_RAX = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = camlPrintf__skip_int_literal_120;
  *(undefined8 *)(unaff_R15 - 0x18) = 3;
  *(undefined8 *)(unaff_R15 - 0x10) = *(undefined8 *)(unaff_RBX + 0x10);
  *(long *)(unaff_R15 - 8) = in_RAX;
  camlPrintf__skip_int_literal_120();
  return;
}



undefined8 camlPrintf__fill_format_124(long param_1)

{
  long in_RAX;
  long unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    while( true ) {
      if (*(long *)(param_1 + 0x20) < in_RAX) {
        return 1;
      }
      if (*(char *)(*(long *)(param_1 + 0x18) + (in_RAX >> 1)) == '*') break;
      camlBuffer__add_char_100();
      in_RAX = in_RAX + 2;
    }
    if (unaff_RBX == 1) break;
    unaff_RBX = *(long *)(unaff_RBX + 8);
    camlPervasives__string_of_int_154();
    camlBuffer__add_string_110();
    in_RAX = camlPrintf__skip_positional_spec_118();
  }
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x18) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x18;
  }
  *(undefined8 *)(unaff_R15 - 0x18) = 0x800;
  *(undefined ***)(unaff_R15 - 0x10) = &caml_exn_Assert_failure;
  *(undefined ***)(unaff_R15 - 8) = &camlPrintf__67;
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void camlPrintf__sub_fmt_152(long param_1)

{
  long in_RAX;
  undefined8 uVar1;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  if (in_RAX == 0x51) {
    uVar1 = 0x53;
  }
  else {
    uVar1 = 0xfb;
  }
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x68) break;
    caml_call_gc();
    uVar1 = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x68;
  }
  *(undefined8 *)(unaff_R15 - 0x68) = 0x30f7;
  *(code **)(unaff_R15 - 0x60) = camlPrintf__sub_156;
  *(undefined8 *)(unaff_R15 - 0x58) = 3;
  *(undefined8 *)(unaff_R15 - 0x50) = 0xcf9;
  *(code **)(unaff_R15 - 0x48) = camlPrintf__sub_sub_157;
  *(undefined8 *)(unaff_R15 - 0x40) = 3;
  *(undefined8 *)(unaff_R15 - 0x38) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(unaff_R15 - 0x30) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(unaff_R15 - 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(unaff_R15 - 0x20) = *(undefined8 *)(param_1 + 0x30);
  *(long *)(unaff_R15 - 0x18) = param_1;
  *(undefined8 *)(unaff_R15 - 0x10) = unaff_RBX;
  *(undefined8 *)(unaff_R15 - 8) = uVar1;
  camlPrintf__sub_156();
  return;
}



void camlPrintf__scan_fmt_172(void)

{
  long lVar1;
  long lVar2;
  long in_RAX;
  long unaff_RBX;
  
  while( true ) {
    if (*(long *)(unaff_RBX + 0x28) <= in_RAX) {
      return;
    }
    lVar2 = *(long *)(unaff_RBX + 0x10);
    lVar1 = (*(ulong *)(lVar2 + -8) >> 10) * 8 + -1;
    if (lVar1 - (ulong)*(byte *)(lVar2 + lVar1) <= (ulong)(in_RAX >> 1)) break;
    if (*(char *)(lVar2 + (in_RAX >> 1)) == '%') {
      in_RAX = camlPrintf__scan_flags_170(unaff_RBX + -0x40);
    }
    else {
      in_RAX = in_RAX + 2;
    }
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



// WARNING: Instruction at (ram,0x0041b6f5) overlaps instruction at (ram,0x0041b6f4)
// 

ulong camlPrintf__scan_conv_171(long param_1)

{
  long lVar1;
  char in_AL;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_RBX;
  long lVar5;
  ulong unaff_R15;
  
  do {
    if (*(long *)(param_1 + 0x48) < unaff_RBX) {
      uVar2 = camlPrintf__incomplete_format_93();
      return uVar2;
    }
    lVar5 = (ulong)*(byte *)(*(long *)(param_1 + 0x30) + (unaff_RBX >> 1)) * 2 + 1;
    uVar2 = SEXT48((int)(&switchD_0041b6df::switchdataD_004353f0)[lVar5 >> 1]);
    switch(lVar5) {
    default:
      uVar2 = camlPrintf__bad_conversion_format_89();
      return uVar2;
    case 0x42:
    case 0x43:
    case 0x4a:
    case 0x4b:
    case 0x58:
    case 0x59:
      return unaff_RBX + 2;
    case 0x50:
    case 0x51:
      caml_apply3(lVar5,*(undefined8 *)(param_1 + 0x38));
      uVar2 = camlPrintf__scan_fmt_172();
      return uVar2;
    case 0x52:
    case 0x53:
    case 0xfa:
    case 0xfb:
      uVar2 = caml_apply3(lVar5,*(undefined8 *)(param_1 + 0x38));
      return uVar2;
    case 0x84:
    case 0x85:
    case 0xc4:
    case 0xc5:
      uVar2 = caml_apply3(0x85,*(undefined8 *)(param_1 + 0x38));
      return uVar2;
    case 0x86:
    case 0x87:
    case 0xc6:
    case 199:
      uVar2 = caml_apply3(199,*(undefined8 *)(param_1 + 0x38));
      return uVar2;
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
      uVar2 = caml_apply3(0xcd,*(undefined8 *)(param_1 + 0x38));
      return uVar2;
    case 0x98:
    case 0x99:
    case 0xd8:
    case 0xd9:
    case 0xdc:
    case 0xdd:
      if (*(long *)(param_1 + 0x48) < unaff_RBX + 2) {
        uVar2 = caml_apply3(0xd3,*(undefined8 *)(param_1 + 0x38));
        return uVar2;
      }
      lVar1 = *(long *)(param_1 + 0x30);
      uVar2 = unaff_RBX + 2 >> 1;
      lVar4 = (*(ulong *)(lVar1 + -8) >> 10) * 8 + -1;
      if (uVar2 < lVar4 - (ulong)*(byte *)(lVar1 + lVar4)) {
        switch((ulong)*(byte *)(lVar1 + uVar2) * 2) {
        case 0xb0:
        case 200:
        case 0xd2:
        case 0xde:
        case 0xea:
        case 0xf0:
          caml_apply3(lVar5,*(undefined8 *)(param_1 + 0x38));
          uVar2 = caml_apply2(*(undefined8 *)(param_1 + 0x40));
          return uVar2;
        default:
          uVar2 = caml_apply3(0xd3,*(undefined8 *)(param_1 + 0x38));
          return uVar2;
        }
      }
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
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
      uVar2 = caml_apply3(0xd3,*(undefined8 *)(param_1 + 0x38));
      return uVar2;
    case 0xa6:
    case 0xa7:
    case 0xb6:
    case 0xb7:
    case 0xe6:
    case 0xe7:
      uVar2 = caml_apply3(0xe7,*(undefined8 *)(param_1 + 0x38));
      return uVar2;
    case 0xc2:
    case 0xc3:
    case 0xe4:
    case 0xe5:
    case 0xe8:
    case 0xe9:
      uVar2 = caml_apply3(lVar5,*(undefined8 *)(param_1 + 0x38));
      return uVar2;
    case 0xf6:
    case 0xf7:
      caml_apply3(lVar5,*(undefined8 *)(param_1 + 0x38));
      uVar3 = camlPrintf__sub_format_for_printf_163();
      lVar4 = caml_apply2(uVar3);
      lVar5 = lVar4;
      uVar2 = unaff_R15;
      while (unaff_R15 = uVar2 - 0x30, unaff_R15 < caml_young_limit) {
        caml_call_gc();
        uVar2 = unaff_R15;
      }
      *(undefined8 *)(uVar2 - 0x30) = 0x14f7;
      *(code **)(uVar2 - 0x28) = camlPrintf__loop_187;
      *(undefined8 *)(uVar2 - 0x20) = 3;
      *(undefined8 *)(uVar2 - 0x18) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(param_1 + 0x40);
      *(long *)(uVar2 - 8) = lVar5;
      camlPrintf__loop_187();
      unaff_RBX = lVar4 + -2;
      break;
    case 0xfc:
      *(char *)(uVar2 - 0x7d) = (*(char *)(uVar2 - 0x7d) - in_AL) - (0xffffffffffbcac0f < uVar2);
      return uVar2;
    }
  } while( true );
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0041cf40) overlaps instruction at (ram,0x0041cf3f)
// 

undefined8
camlPrintf__scan_flags_170
          (code **param_1,undefined8 param_2,undefined8 param_3,uint *param_4,int *param_5,
          code **param_6,long param_7,undefined8 param_8,long param_9)

{
  int iVar1;
  long lVar2;
  char cVar3;
  ushort uVar4;
  code **in_RAX;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  char *pcVar8;
  byte *pbVar9;
  code *pcVar10;
  char cVar11;
  uint *puVar12;
  uint *puVar13;
  code **unaff_RBX;
  code ***pppcVar14;
  code ***pppcVar15;
  ulong unaff_R15;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined auStack80 [40];
  undefined8 uStack40;
  code **ppcStack32;
  code **local_18;
  code **local_10;
  undefined8 local_8;
  
  pppcVar15 = &local_18;
  pppcVar14 = &local_18;
LAB_0041b944:
  while( true ) {
    if ((long)param_1[0xd] < (long)unaff_RBX) {
      uVar5 = camlPrintf__incomplete_format_93();
      return uVar5;
    }
    lVar2 = (ulong)(byte)param_1[10][(long)unaff_RBX >> 1] * 2;
    if (lVar2 + 1U < 0x75) break;
    if (lVar2 + 1U != 0xbf) {
switchD_0041b9b4_caseD_42:
      uVar5 = camlPrintf__scan_conv_171(param_1 + 4);
      return uVar5;
    }
    unaff_RBX = (code **)((long)unaff_RBX + 2);
    in_RAX = (code **)0x3;
  }
  local_10 = param_1;
  local_18 = in_RAX;
  iVar1 = *(int *)((lVar2 + -0x3f >> 1) * 4 + 0x43566c);
  piVar6 = (int *)(long)iVar1;
  puVar13 = (uint *)(piVar6 + 0x10d59b);
  cVar3 = (char)iVar1;
  cVar11 = (char)param_4;
                    // WARNING (jumptable): Sanity check requires truncation of jumptable
                    // WARNING: Could not find normalized switch variable to match jumptable
  switch(lVar2) {
  case 0x40:
  case 0x46:
  case 0x56:
  case 0x5a:
    unaff_RBX = (code **)((long)unaff_RBX + 2);
    goto LAB_0041b944;
  default:
    goto switchD_0041b9b4_caseD_42;
  case 0x54:
    ppcStack32 = (code **)0x41b9ce;
    unaff_RBX = (code **)caml_apply3(0xd3,param_1[0xb]);
    in_RAX = local_18;
    param_1 = local_10;
    goto LAB_0041b944;
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
    goto switchD_0041b9b4_caseD_5c;
  case 0xb6:
    *(char *)piVar6 = *(char *)piVar6 + cVar3;
    *(char *)piVar6 = *(char *)piVar6 + cVar3;
    pppcVar14 = (code ***)auStack80;
    puVar12 = (uint *)((long)in_RAX >> 1);
    uVar7 = *(ulong *)(piVar6 + 0x10d5a1);
    param_4 = puVar13;
    param_6 = param_1;
    break;
  case 0xbe:
    uVar7 = (ulong)param_4[6];
    puVar12 = puVar13;
    piVar6 = param_5;
    break;
  case 0xc4:
  case 0x16a:
    pbVar9 = (byte *)((ulong)piVar6 & 0xffffffffffffff00 | (ulong)(byte)*(code *)in_RAX);
    *pbVar9 = *pbVar9 | (byte)*(code *)in_RAX;
    pbVar9[-0x77] = pbVar9[-0x77] + cVar11;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0xc6:
    pppcVar14 = &local_18;
    piVar6 = param_5;
    goto code_r0x0041c82c;
  case 0xcc:
    goto switchD_0041b9b4_caseD_cc;
  case 0xf8:
  case 0x138:
    pcVar8 = (char *)((ulong)piVar6 & 0xffffffffffffff0b);
    *pcVar8 = *pcVar8 + (char)pcVar8;
    ppcStack32 = (code **)0x41ccdf;
    local_18 = (code **)caml_c_call(pcVar8,in_RAX);
    if (param_7 == 1) {
      ppcStack32 = (code **)0x41cd11;
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    in_RAX = *(code ***)(param_9 + 0x28);
    param_1 = (code **)(CONCAT44(in_stack_00000004,in_stack_00000000) + 2);
    goto code_r0x0041cd2b;
  case 0xfa:
  case 0x13a:
    ppcStack32 = (code **)0x41cb06;
    camlPrintf__extract_format_113(param_1,local_8);
    ppcStack32 = (code **)0x41cb0f;
    local_18 = (code **)camlPrintf__format_string_108();
    if (param_7 == 1) {
      ppcStack32 = (code **)0x41cb41;
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    uVar5 = caml_apply3(CONCAT44(in_stack_00000004,in_stack_00000000) + 2,
                        *(undefined8 *)(param_9 + 0x28));
    return uVar5;
  case 0xfe:
  case 0x102:
  case 0x13e:
  case 0x140:
  case 0x142:
    ppcStack32 = (code **)0x41cc3d;
    uVar5 = camlPrintf__extract_format_int_131();
    ppcStack32 = (code **)0x41cc51;
    local_18 = (code **)caml_c_call(uVar5,local_10);
    if (param_7 == 1) {
      ppcStack32 = (code **)0x41cc81;
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    uVar5 = caml_apply3(CONCAT44(in_stack_00000004,in_stack_00000000) + 2,
                        *(undefined8 *)(param_9 + 0x28));
    return uVar5;
  case 0x100:
    uVar5 = caml_apply3((code *)((long)in_RAX + 2),param_4,&camlPrintf__61);
    return uVar5;
  case 0x10c:
  case 0x14c:
  case 0x150:
code_r0x0041cd2b:
    uVar5 = caml_apply3(param_1,in_RAX);
    return uVar5;
  case 0x110:
  case 0x124:
  case 0x13c:
  case 0x146:
  case 0x152:
  case 0x15e:
  case 0x164:
    *(byte *)puVar13 = *(byte *)puVar13 - (char)((ulong)piVar6 >> 8);
    *(byte *)param_4 = *(byte *)param_4 - (char)((ulong)puVar13 >> 8);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x11a:
  case 0x15a:
    ppcStack32 = (code **)0x41ca34;
    local_18 = (code **)camlPrintf__get_arg_320();
    if (param_7 == 1) {
      ppcStack32 = (code **)0x41ca65;
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    uVar5 = caml_apply3(CONCAT44(in_stack_00000004,in_stack_00000000) + 2,
                        *(undefined8 *)(param_9 + 0x38));
    return uVar5;
  case 0x136:
    *(char *)((long)piVar6 + -0x75) =
         (*(char *)((long)piVar6 + -0x75) - cVar11) - ((int *)0xffffffffffbca993 < piVar6);
    ppcStack32 = (code **)0x41c91f;
    camlPrintf__extract_format_float_138(param_1,CONCAT44(in_stack_00000004,in_stack_00000000));
    ppcStack32 = (code **)0x41c929;
    local_18 = (code **)camlPrintf__fun_630();
    if (param_7 == 1) {
      ppcStack32 = (code **)0x41c959;
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    uVar5 = caml_apply3(CONCAT44(in_stack_00000004,in_stack_00000000) + 2,
                        *(undefined8 *)(param_9 + 0x28));
    return uVar5;
  case 0x15c:
    ppcStack32 = (code **)0x41c9cf;
    local_10 = (code **)camlPrintf__get_arg_320(piVar6[0x14]);
    if (param_7 == 1) {
      ppcStack32 = (code **)0x41ca01;
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    puVar13 = *(uint **)(param_9 + 0x30);
    in_RAX = (code **)(CONCAT44(in_stack_00000004,in_stack_00000000) + 2);
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
    uVar5 = caml_apply4(local_10,in_RAX,puVar13);
    return uVar5;
  case 0x16c:
  case 0x184:
  case 0x18e:
  case 0x19a:
  case 0x1a6:
  case 0x1ac:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
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
    if (in_RAX == (code **)0xc7) {
      ppcStack32 = (code **)0x41cb8b;
      local_18 = (code **)camlString__make_66();
    }
    else {
      ppcStack32 = (code **)0x41cb9c;
      camlChar__escaped_66();
      ppcStack32 = (code **)0x41cba8;
      camlPervasives___5e_136();
      ppcStack32 = (code **)0x41cbb7;
      local_18 = (code **)camlPervasives___5e_136();
    }
    if (param_7 == 1) {
      ppcStack32 = (code **)0x41cbe9;
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    uVar5 = caml_apply3(CONCAT44(in_stack_00000004,in_stack_00000000) + 2,
                        *(undefined8 *)(param_9 + 0x28));
    return uVar5;
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
    goto switchD_0041b9b4_caseD_1ae;
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
    *(char *)piVar6 = *(char *)piVar6 + cVar3;
    if ((long)param_1 >> 1 == 1) {
      ppcStack32 = (code **)0x41cf24;
      local_18 = (code **)camlPrintf__get_arg_320(*(undefined8 *)(param_4 + 0x14));
      ppcStack32 = (code **)0x41cf44;
      uVar5 = camlPrintf__extract_format_113(local_10,local_8);
      ppcStack32 = (code **)0x41cf57;
      local_18 = (code **)caml_c_call(uVar5,local_18);
      goto LAB_0041cf5b;
    }
    if (1 < (long)param_1 >> 1) {
      ppcStack32 = (code **)0x41cedc;
      local_18 = (code **)camlPrintf__get_arg_320(*(undefined8 *)(param_4 + 0x14));
      ppcStack32 = (code **)0x41cefc;
      uVar5 = camlPrintf__extract_format_113(local_10,local_8);
      ppcStack32 = (code **)0x41cf0f;
      local_18 = (code **)caml_c_call(uVar5,local_18);
      goto LAB_0041cf5b;
    }
    param_1 = *(code ***)(param_4 + 0x14);
    goto switchD_0041b9b4_caseD_1ae;
  case 0x1c2:
    uVar4 = (ushort)iVar1 & 0xff00 | (ushort)(byte)(cVar3 + (char)((ulong)param_4 >> 8));
    pcVar8 = (char *)(((ulong)piVar6 & 0xffffffffffff0000 |
                      (ulong)(ushort)((short)uVar4 / (short)(char)*(byte *)((long)param_1 + 1) &
                                      0xffU | (short)uVar4 %
                                              (short)(char)*(byte *)((long)param_1 + 1) << 8)) -
                     0x77);
    *pcVar8 = *pcVar8 + cVar11;
    if (param_7 == 1) {
      ppcStack32 = (code **)0x41ce3d;
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    uVar5 = caml_apply3(CONCAT44(in_stack_00000004,in_stack_00000000) + 2,
                        *(undefined8 *)(param_9 + 0x28));
    return uVar5;
  case 0x1e2:
    *(ulong *)(piVar6 + 0x10d59f) = (ulong)(iVar1 + 0x221eeb);
    *(undefined8 *)(piVar6 + 0x10d5a1) = 0x10f9;
    *(code **)(piVar6 + 0x10d5a3) = caml_curry2;
  case 0x1e4:
    *(undefined8 *)(piVar6 + 0x10d5a5) = 5;
    *(code **)(piVar6 + 0x10d5a7) = camlPrintf__scan_conv_171;
    *(undefined8 *)(piVar6 + 0x10d5a9) = 0x20f9;
    *(code **)(piVar6 + 0x10d5ab) = camlPrintf__scan_fmt_172;
    *(undefined8 *)(piVar6 + 0x10d5ad) = 3;
    *(code ***)(piVar6 + 0x10d5af) = in_RAX;
    *(code ***)(piVar6 + 0x10d5b1) = unaff_RBX;
    *(code ***)(piVar6 + 0x10d5b3) = param_1;
    *(uint **)(piVar6 + 0x10d5b5) = param_4;
    goto code_r0x0041dbd0;
  case 0x1e6:
    *piVar6 = *piVar6 + iVar1;
    *(char *)piVar6 = *(char *)piVar6 + cVar3;
code_r0x0041dbd0:
    ppcStack32 = (code **)0x41dbd5;
    camlPrintf__scan_fmt_172();
    return 1;
  case 0x1e8:
    local_10 = in_RAX;
    while (unaff_R15 - 0x58 < caml_young_limit) {
      ppcStack32 = (code **)0x41dcc1;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x58;
    }
    param_1 = (code **)(unaff_R15 - 0x50);
    *(undefined8 *)(unaff_R15 - 0x58) = 0x10f7;
    *param_1 = caml_curry2;
    *(undefined8 *)(unaff_R15 - 0x48) = 5;
    *(code **)(unaff_R15 - 0x40) = camlPrintf__add_char_194;
    *(code ***)(unaff_R15 - 0x38) = in_RAX;
    unaff_RBX = (code **)(unaff_R15 - 0x28);
    *(undefined8 *)(unaff_R15 - 0x30) = 0x14f7;
    pcVar10 = caml_curry3;
code_r0x0041dc79:
    *unaff_RBX = pcVar10;
    unaff_RBX[1] = (code *)0x7;
    unaff_RBX[2] = camlPrintf__add_conv_197;
    unaff_RBX[3] = (code *)in_RAX;
    unaff_RBX[4] = (code *)param_1;
    ppcStack32 = (code **)0x41dca0;
    camlPrintf__iter_on_format_args_165();
    uVar5 = camlString__sub_74(local_10[1]);
    return uVar5;
  case 0x1ea:
    pcVar10 = (code *)(ulong)(iVar1 + 0x221de7);
    goto code_r0x0041dc79;
  case 0x1ec:
    pppcVar15 = &ppcStack32;
    while (unaff_R15 - 0x70 < caml_young_limit) {
      uStack40 = 0x41dd89;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x70;
    }
    unaff_RBX = (code **)(unaff_R15 - 0x68);
    ppcStack32 = unaff_RBX;
    *(undefined8 *)(unaff_R15 - 0x70) = 0xc00;
    *unaff_RBX = (code *)0x1;
    *(undefined8 *)(unaff_R15 - 0x60) = 1;
    *(undefined8 *)(unaff_R15 - 0x58) = 1;
    param_1 = (code **)(unaff_R15 - 0x48);
    *(undefined8 *)(unaff_R15 - 0x50) = 0x10f7;
code_r0x0041dd1e:
    *param_1 = caml_curry2;
    param_1[1] = (code *)0x5;
    param_1[2] = camlPrintf__incr_ac_215;
    param_1[3] = (code *)unaff_RBX;
    unaff_RBX[8] = (code *)0x10f7;
    unaff_RBX[9] = caml_curry3;
    unaff_RBX[10] = (code *)0x7;
    unaff_RBX[0xb] = camlPrintf__add_conv_219;
    unaff_RBX[0xc] = (code *)param_1;
    pppcVar15[-1] = (code **)0x41dd7b;
    camlPrintf__iter_on_format_args_165(&camlPrintf__48);
    return *pppcVar15;
  case 0x1ee:
    *(char *)piVar6 = *(char *)piVar6 + cVar3;
    goto code_r0x0041dd1e;
  case 0x1f0:
  case 0x1f2:
    *(int *)((long)unaff_RBX + 0x6374fffe) = *(int *)((long)unaff_RBX + 0x6374fffe) + 1;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  param_1 = (code **)((ulong)*(byte *)(uVar7 + (long)puVar12) * 2 + 1);
  if ((code **)0xf8 < param_1) {
    uVar5 = camlPrintf__bad_conversion_format_89();
    return uVar5;
  }
  *pppcVar14 = param_1;
  ((code **)pppcVar14)[6] = (code *)param_4;
  ((code **)pppcVar14)[3] = (code *)in_RAX;
code_r0x0041c82c:
  *(code ***)((long)pppcVar14 + 0x10) = param_6;
  *(code ***)((long)pppcVar14 + 0x28) = unaff_RBX;
  *(int **)((long)pppcVar14 + 0x20) = piVar6;
  puVar13 = &switchD_0041c84f::switchdataD_004356d4;
  piVar6 = (int *)(long)(int)(&switchD_0041c84f::switchdataD_004356d4)[(long)param_1 >> 1];
switchD_0041b9b4_caseD_cc:
                    // WARNING: Could not recover jumptable at 0x0041c84f. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar5 = (*(code *)((long)puVar13 + (long)piVar6))
                    (param_1,in_RAX,(code *)((long)puVar13 + (long)piVar6));
  return uVar5;
switchD_0041b9b4_caseD_5c:
  unaff_RBX = (code **)((long)unaff_RBX + 2);
  goto LAB_0041b944;
switchD_0041b9b4_caseD_1ae:
  ppcStack32 = (code **)0x41ce91;
  local_18 = (code **)camlPrintf__get_arg_320(param_1);
  ppcStack32 = (code **)0x41ceb1;
  uVar5 = camlPrintf__extract_format_113(local_10,local_8);
  ppcStack32 = (code **)0x41cec4;
  local_18 = (code **)caml_c_call(uVar5,local_18);
LAB_0041cf5b:
  if (param_7 == 1) {
    ppcStack32 = (code **)0x41cf89;
    (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
  }
  uVar5 = caml_apply3((code *)((long)local_10 + 2),*(undefined8 *)(param_9 + 0x28));
  return uVar5;
}



long camlPrintf__add_char_194(void)

{
  long in_RAX;
  
  camlBuffer__add_char_100();
  return in_RAX + 2;
}



long camlPrintf__add_conv_197(void)

{
  long in_RAX;
  long unaff_RBX;
  
  if (in_RAX == 1) {
    camlBuffer__add_char_100();
  }
  else {
    camlBuffer__add_string_110();
  }
  camlBuffer__add_char_100();
  return unaff_RBX + 2;
}



undefined8 camlPrintf__incr_ac_215(long param_1)

{
  long *plVar1;
  long in_RAX;
  long unaff_RBX;
  long lVar2;
  
  if (unaff_RBX == 0xc3) {
    lVar2 = 5;
  }
  else {
    lVar2 = 3;
  }
  if (unaff_RBX == 0xe5) {
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0x10);
    *plVar1 = *plVar1 + 2;
  }
  if (in_RAX != 1) {
    *(long *)(*(long *)(param_1 + 0x18) + 8) = *(long *)(*(long *)(param_1 + 0x18) + 8) + -1 + lVar2
    ;
    return 1;
  }
  **(long **)(param_1 + 0x18) = **(long **)(param_1 + 0x18) + -1 + lVar2;
  return 1;
}



long camlPrintf__add_conv_219(long param_1,long param_2)

{
  long unaff_RBX;
  
  if ((param_1 != 0x53) && (param_1 != 0xfb)) {
    camlPrintf__incr_ac_215(*(undefined8 *)(param_2 + 0x18));
  }
  return unaff_RBX + 2;
}



long camlPrintf__add_char_220(void)

{
  long in_RAX;
  
  return in_RAX + 2;
}



undefined8 camlPrintf__loop_232(long param_1)

{
  undefined8 uVar1;
  long unaff_RBX;
  
  while( true ) {
    if (unaff_RBX == 1) {
      return 1;
    }
    unaff_RBX = *(long *)(unaff_RBX + 8);
    if (unaff_RBX == 1) break;
    caml_apply2(*(undefined8 *)(param_1 + 0x18));
  }
  uVar1 = caml_apply2(*(undefined8 *)(param_1 + 0x18));
  return uVar1;
}



void camlPrintf__loop_268(long param_1)

{
  long in_RAX;
  undefined8 uVar1;
  long extraout_RDX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  if (*(long *)(param_1 + 0x28) <= in_RAX) {
    uVar1 = caml_c_call(*(undefined8 *)(param_1 + 0x28),1);
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x30) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x30;
    }
    *(undefined8 *)(unaff_R15 - 0x30) = 0x14f7;
    *(code **)(unaff_R15 - 0x28) = caml_curry2;
    *(undefined8 *)(unaff_R15 - 0x20) = 5;
    *(code **)(unaff_R15 - 0x18) = camlPrintf__fun_594;
    *(undefined8 *)(unaff_R15 - 0x10) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(unaff_R15 - 8) = uVar1;
    camlPrintf__list_iter_i_229();
    caml_apply2(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x30) break;
    caml_call_gc();
    in_RAX = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x30;
  }
  *(undefined8 *)(unaff_R15 - 0x30) = 0x14f7;
  *(code **)(unaff_R15 - 0x28) = camlPrintf__fun_597;
  *(undefined8 *)(unaff_R15 - 0x20) = 3;
  *(long *)(unaff_R15 - 0x18) = param_1;
  *(long *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void camlPrintf__fun_616(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                        undefined8 *param_4,long param_5)

{
  ulong uVar1;
  undefined8 *in_RAX;
  undefined8 *puVar2;
  undefined8 *unaff_RBX;
  
  puVar2 = (undefined8 *)caml_c_call(0xd,1);
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *puVar2 = *in_RAX;
  }
  else {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2,in_RAX);
  }
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[1] = *unaff_RBX;
  }
  else {
    if (uVar1 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 1,unaff_RBX);
  }
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[2] = *param_1;
  }
  else {
    if (uVar1 >> 9 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 2,param_1);
  }
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 8) {
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
    caml_modify(puVar2 + 3,param_2);
  }
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 10) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[4] = *param_3;
  }
  else {
    if (uVar1 >> 9 < 10) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 4,param_3);
  }
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 0xc) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[5] = *param_4;
  }
  else {
    if (uVar1 >> 9 < 0xc) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 5,param_4);
  }
  caml_apply2(*(undefined8 *)(param_5 + 0x18));
  return;
}



void camlPrintf__fun_613(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  ulong uVar1;
  undefined8 *in_RAX;
  undefined8 *puVar2;
  undefined8 *unaff_RBX;
  
  puVar2 = (undefined8 *)caml_c_call(0xb,1);
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *puVar2 = *in_RAX;
  }
  else {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2,in_RAX);
  }
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[1] = *unaff_RBX;
  }
  else {
    if (uVar1 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 1,unaff_RBX);
  }
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[2] = *param_1;
  }
  else {
    if (uVar1 >> 9 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 2,param_1);
  }
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 8) {
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
    caml_modify(puVar2 + 3,param_2);
  }
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 10) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[4] = *param_3;
  }
  else {
    if (uVar1 >> 9 < 10) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 4,param_3);
  }
  caml_apply2(*(undefined8 *)(param_4 + 0x18));
  return;
}



void camlPrintf__fun_610(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *in_RAX;
  undefined8 *puVar2;
  undefined8 *unaff_RBX;
  
  puVar2 = (undefined8 *)caml_c_call(9,1);
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *puVar2 = *in_RAX;
  }
  else {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2,in_RAX);
  }
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[1] = *unaff_RBX;
  }
  else {
    if (uVar1 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 1,unaff_RBX);
  }
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[2] = *param_1;
  }
  else {
    if (uVar1 >> 9 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 2,param_1);
  }
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 8) {
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
    caml_modify(puVar2 + 3,param_2);
  }
  caml_apply2(*(undefined8 *)(param_3 + 0x18));
  return;
}



void camlPrintf__fun_607(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *in_RAX;
  undefined8 *puVar2;
  undefined8 *unaff_RBX;
  
  puVar2 = (undefined8 *)caml_c_call(7,1);
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *puVar2 = *in_RAX;
  }
  else {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2,in_RAX);
  }
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[1] = *unaff_RBX;
  }
  else {
    if (uVar1 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 1,unaff_RBX);
  }
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[2] = *param_1;
  }
  else {
    if (uVar1 >> 9 < 6) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 2,param_1);
  }
  caml_apply2(*(undefined8 *)(param_2 + 0x18));
  return;
}



void camlPrintf__fun_604(long param_1)

{
  ulong uVar1;
  undefined8 *in_RAX;
  undefined8 *puVar2;
  undefined8 *unaff_RBX;
  
  puVar2 = (undefined8 *)caml_c_call(5,1);
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *puVar2 = *in_RAX;
  }
  else {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2,in_RAX);
  }
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    puVar2[1] = *unaff_RBX;
  }
  else {
    if (uVar1 >> 9 < 4) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2 + 1,unaff_RBX);
  }
  caml_apply2(*(undefined8 *)(param_1 + 0x18));
  return;
}



void camlPrintf__fun_601(void)

{
  ulong uVar1;
  undefined8 *in_RAX;
  undefined8 *puVar2;
  long unaff_RBX;
  
  puVar2 = (undefined8 *)caml_c_call(3,1);
  uVar1 = puVar2[-1];
  if ((uVar1 & 0xff) == 0xfe) {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    *puVar2 = *in_RAX;
  }
  else {
    if (uVar1 >> 9 < 2) {
                    // WARNING: Subroutine does not return
      caml_ml_array_bound_error();
    }
    caml_modify(puVar2,in_RAX);
  }
  caml_apply2(*(undefined8 *)(unaff_RBX + 0x10));
  return;
}



void camlPrintf__get_int_literal_286(long param_1)

{
  ulong uVar1;
  long in_RAX;
  undefined8 uVar2;
  long unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    uVar1 = (ulong)*(byte *)(*(long *)(param_1 + 0x18) + (unaff_RBX >> 1)) * 2 + 1;
    if (uVar1 < 0x61) break;
    if (0x74 < uVar1) goto LAB_0041c6bc;
    unaff_RBX = unaff_RBX + 2;
    in_RAX = (in_RAX >> 1) * 0x14 + -0x60 + uVar1;
  }
  if (uVar1 == 0x49) {
    if (in_RAX == 1) {
      camlPervasives__failwith_38();
      return;
    }
    uVar2 = camlPrintf__index_of_int_65();
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x10) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x400;
    *(undefined8 *)(unaff_R15 - 8) = uVar2;
    caml_apply2(*(undefined8 *)(param_1 + 0x20));
    return;
  }
LAB_0041c6bc:
  caml_apply2(*(undefined8 *)(param_1 + 0x20));
  return;
}



void camlPrintf__add_dot_302(void)

{
  camlPervasives___5e_136();
  return;
}



undefined8 camlPrintf__loop_305(void)

{
  long lVar1;
  long lVar2;
  long in_RAX;
  undefined8 uVar3;
  long unaff_RBX;
  
  if (*(long *)(unaff_RBX + 0x20) <= in_RAX) {
    uVar3 = camlPrintf__add_dot_302(*(undefined8 *)(unaff_RBX + 0x18));
    return uVar3;
  }
  lVar2 = *(long *)(unaff_RBX + 0x18);
  lVar1 = (*(ulong *)(lVar2 + -8) >> 10) * 8 + -1;
  if ((ulong)(in_RAX >> 1) < lVar1 - (ulong)*(byte *)(lVar2 + lVar1)) {
    if (*(char *)(lVar2 + (in_RAX >> 1)) != '.') {
      uVar3 = camlPrintf__loop_305();
      return uVar3;
    }
    return *(undefined8 *)(unaff_RBX + 0x18);
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



undefined8 * camlPrintf__get_arg_320(long param_1)

{
  ulong uVar1;
  ulong *in_RAX;
  ulong unaff_RBX;
  long lVar2;
  ulong unaff_R15;
  
  if (in_RAX != (ulong *)0x1) {
    unaff_RBX = *in_RAX;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  uVar1 = *(ulong *)(lVar2 + -8);
  if ((uVar1 & 0xff) != 0xfe) {
    if (unaff_RBX < uVar1 >> 9) {
      return *(undefined8 **)(lVar2 + -4 + unaff_RBX * 4);
    }
                    // WARNING: Subroutine does not return
    caml_ml_array_bound_error();
  }
  if (unaff_RBX < uVar1 >> 9) {
    while( true ) {
      if (caml_young_limit <= unaff_R15 - 0x10) break;
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x4fd;
    *(undefined8 *)(unaff_R15 - 8) = *(undefined8 *)(lVar2 + -4 + unaff_RBX * 4);
    return (undefined8 *)(unaff_R15 - 8);
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



// WARNING: Instruction at (ram,0x0041cc6f) overlaps instruction at (ram,0x0041cc6e)
// 

void camlPrintf__scan_conv_325(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_RAX;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  plVar6 = &local_38;
  lVar4 = (ulong)*(byte *)(*(long *)(param_3 + 0x18) + (param_2 >> 1)) * 2;
  local_38 = lVar4 + 1;
  local_20 = param_2;
  lVar3 = (long)(int)(&switchD_0041c84f::switchdataD_004356d4)[local_38 >> 1];
  local_28 = param_1;
  local_18 = in_RAX;
  switch(local_38) {
  default:
    camlPrintf__bad_conversion_format_89();
    return;
  case 0x42:
  case 0x43:
    caml_apply2(*(undefined8 *)(param_3 + 0x40),param_2 + 2);
    return;
  case 0x4a:
  case 0x4b:
    caml_apply3(param_2 + 2,*(undefined8 *)(param_3 + 0x28),&camlPrintf__61);
    return;
  case 0x50:
  case 0x51:
  case 0xf6:
  case 0xf7:
    local_30 = local_38;
    local_28 = camlPrintf__get_arg_320(*(undefined8 *)(param_3 + 0x50));
    local_38 = local_20 + 2;
    uVar5 = camlPrintf__sub_format_for_printf_163();
    local_20 = caml_apply2(uVar5);
    if (local_30 == 0xf7) {
      local_38 = camlPrintf__summarize_format_type_190();
      if (local_18 == 1) {
        (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
      }
      caml_apply3(local_20,*(undefined8 *)(param_3 + 0x28));
      return;
    }
    if (local_18 == 1) {
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    caml_apply3(local_20,*(undefined8 *)(param_3 + 0x48));
    return;
  case 0x52:
  case 0x53:
    caml_apply3(param_2 + 2,*(undefined8 *)(param_3 + 0x28),&camlPrintf__62);
    return;
  case 0x58:
  case 0x59:
    caml_apply3(param_2 + 2,*(undefined8 *)(param_3 + 0x28),&camlPrintf__63);
    return;
  case 0x84:
  case 0x85:
  case 0xc4:
  case 0xc5:
    camlPrintf__get_arg_320(*(undefined8 *)(param_3 + 0x50));
    local_38 = camlPervasives__string_of_bool_151();
    if (local_18 == 1) {
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    caml_apply3(local_20 + 2,*(undefined8 *)(param_3 + 0x28));
    return;
  case 0x86:
  case 0x87:
  case 0xc6:
  case 199:
    camlPrintf__get_arg_320(*(undefined8 *)(param_3 + 0x50));
    if (local_38 == 199) {
      local_38 = camlString__make_66();
    }
    else {
      camlChar__escaped_66();
      camlPervasives___5e_136();
      local_38 = camlPervasives___5e_136();
    }
    if (local_18 == 1) {
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    caml_apply3(local_20 + 2,*(undefined8 *)(param_3 + 0x28));
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
    local_38 = camlPrintf__get_arg_320(*(undefined8 *)(param_3 + 0x50));
    uVar5 = camlPrintf__extract_format_113(local_20,local_28);
    local_38 = caml_c_call(uVar5,local_38);
    if (local_18 == 1) {
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    caml_apply3(local_20 + 2,*(undefined8 *)(param_3 + 0x28));
    return;
  case 0x8c:
  case 0x8d:
    local_30 = camlPrintf__get_arg_320(*(undefined8 *)(param_3 + 0x50));
    if (local_28 == 1) {
      local_38 = camlPervasives__string_of_float_164();
    }
    else {
      camlPrintf__extract_format_float_138(*(undefined8 *)(param_3 + 0x20),local_20);
      local_38 = camlPrintf__fun_630();
    }
    if (local_18 == 1) {
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    caml_apply3(local_20 + 2,*(undefined8 *)(param_3 + 0x28));
    return;
  case 0x98:
  case 0x99:
  case 0xd8:
  case 0xd9:
  case 0xdc:
  case 0xdd:
    switch((ulong)*(byte *)(*(long *)(param_3 + 0x18) + (param_2 + 2 >> 1)) * 2) {
    case 0xb0:
    case 200:
    case 0xd2:
    case 0xde:
    case 0xea:
    case 0xf0:
      local_30 = param_2 + 2;
      uVar7 = lVar4 - 0xd7;
      if ((uVar7 < 6) && (lVar4 = (long)uVar7 >> 1, lVar4 != 1)) {
        if (lVar4 < 2) {
          local_38 = camlPrintf__get_arg_320(*(undefined8 *)(param_3 + 0x50));
          uVar5 = camlPrintf__extract_format_113(local_30,local_28);
          local_38 = caml_c_call(uVar5,local_38);
        }
        else {
          local_38 = camlPrintf__get_arg_320(*(undefined8 *)(param_3 + 0x50));
          uVar5 = camlPrintf__extract_format_113(local_30,local_28);
          local_38 = caml_c_call(uVar5,local_38);
        }
      }
      else {
        local_38 = camlPrintf__get_arg_320(*(undefined8 *)(param_3 + 0x50));
        uVar5 = camlPrintf__extract_format_113(local_30,local_28);
        local_38 = caml_c_call(uVar5,local_38);
      }
      if (local_18 == 1) {
        (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
      }
      break;
    default:
      local_38 = camlPrintf__get_arg_320(*(undefined8 *)(param_3 + 0x50));
      uVar5 = camlPrintf__extract_format_int_131(*(undefined8 *)(param_3 + 0x20),local_20,local_28);
      local_38 = caml_c_call(uVar5,local_38);
      if (local_18 == 1) {
        (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
      }
      caml_apply3(local_20 + 2,*(undefined8 *)(param_3 + 0x28));
      return;
    }
    caml_apply3(local_30 + 2,*(undefined8 *)(param_3 + 0x28));
    return;
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
    local_30 = camlPrintf__get_arg_320(*(undefined8 *)(param_3 + 0x50));
    uVar5 = camlPrintf__extract_format_int_131(*(undefined8 *)(param_3 + 0x20),local_20,local_28);
    local_38 = caml_c_call(uVar5,local_30);
    lVar4 = DAT_0064b580;
    plVar2 = &local_38;
    if (local_18 != 1) goto LAB_0041cc81;
    break;
  case 0xa6:
  case 0xa7:
  case 0xe6:
  case 0xe7:
    lVar4 = camlPrintf__get_arg_320(*(undefined8 *)(param_3 + 0x50));
    if (local_38 != 0xe7) {
      camlString__escaped_108();
      camlPervasives___5e_136();
      lVar4 = camlPervasives___5e_136();
    }
    local_38 = lVar4;
    if (local_20 != *(long *)(param_3 + 0x20) + 2) {
      camlPrintf__extract_format_113(local_20,local_28);
      local_38 = camlPrintf__format_string_108();
    }
    if (local_18 == 1) {
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    caml_apply3(local_20 + 2,*(undefined8 *)(param_3 + 0x28));
    return;
  case 0xc2:
  case 0xc3:
    local_38 = camlPrintf__get_arg_320(*(undefined8 *)(param_3 + 0x50));
    local_28 = (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    local_30 = camlPrintf__get_arg_320(*(undefined8 *)(param_3 + 0x50));
    if (local_18 == 1) {
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    caml_apply4(local_30,local_20 + 2,*(undefined8 *)(param_3 + 0x30));
    return;
  case 0xe8:
  case 0xe9:
    local_38 = camlPrintf__get_arg_320(*(undefined8 *)(param_3 + 0x50));
    if (local_18 == 1) {
      (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
    }
    caml_apply3(local_20 + 2,*(undefined8 *)(param_3 + 0x38));
    return;
  case 0xf8:
    *(char *)((long)&switchD_0041c84f::switchdataD_004356d4 + lVar3) =
         *(char *)((long)&switchD_0041c84f::switchdataD_004356d4 + lVar3) -
         (char)((ulong)lVar3 >> 8);
    *(char *)(lVar3 + -0x75) = *(char *)(lVar3 + -0x75) + (char)param_3;
    lVar4 = local_38;
    plVar2 = &local_30;
  }
  plVar6 = plVar2;
  pcVar1 = **(code ***)(lVar4 + 0x10);
  *(undefined8 *)((long)plVar6 + -8) = 0x41cc81;
  (*pcVar1)(pcVar1);
LAB_0041cc81:
  caml_apply3(*(long *)((long)plVar6 + 0x18) + 2,
              *(undefined8 *)(*(long *)((long)plVar6 + 0x30) + 0x28));
  return;
}



void camlPrintf__scan_flags_324(undefined8 param_1,long param_2,long param_3)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  do {
    switch((ulong)*(byte *)(*(long *)(param_3 + 0x38) + (param_2 >> 1)) * 2) {
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
      camlPrintf__scan_conv_325(param_1,param_2,param_3 + 0x20);
      return;
    case 0x54:
      while (unaff_R15 - 0x48 < caml_young_limit) {
        caml_call_gc();
        unaff_R15 = unaff_R15 - 0x48;
      }
      *(undefined8 *)(unaff_R15 - 0x48) = 0x20f7;
      *(code **)(unaff_R15 - 0x40) = caml_curry2;
      *(undefined8 *)(unaff_R15 - 0x38) = 5;
      *(code **)(unaff_R15 - 0x30) = camlPrintf__got_spec_336;
      *(undefined8 *)(unaff_R15 - 0x28) = *(undefined8 *)(param_3 + 0x70);
      *(long *)(unaff_R15 - 0x20) = param_3;
      *(undefined8 *)(unaff_R15 - 0x18) = in_RAX;
      *(undefined8 *)(unaff_R15 - 0x10) = unaff_RBX;
      *(undefined8 *)(unaff_R15 - 8) = param_1;
      camlPrintf__scan_positional_spec_280(unaff_RBX,param_2 + 2);
      return;
    }
  } while( true );
}



void camlPrintf__scan_positional_323(undefined8 param_1,long param_2)

{
  undefined8 in_RAX;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x38) break;
    caml_call_gc();
    param_1 = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x38;
  }
  *(undefined8 *)(unaff_R15 - 0x38) = 0x18f7;
  *(code **)(unaff_R15 - 0x30) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x28) = 5;
  *(code **)(unaff_R15 - 0x20) = camlPrintf__got_spec_329;
  *(long *)(unaff_R15 - 0x18) = param_2 + 0x20;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  camlPrintf__scan_positional_spec_280(in_RAX,param_1);
  return;
}



void camlPrintf__pr_386(long param_1,undefined8 param_2,long param_3)

{
  undefined8 in_RAX;
  long extraout_RDX;
  long lVar1;
  ulong unaff_R15;
  
  lVar1 = (*(ulong *)(param_1 + -8) >> 10) * 8 + -1;
  lVar1 = (lVar1 - (ulong)*(byte *)(param_1 + lVar1)) * 2 + 1;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x110) break;
    caml_call_gc();
    param_3 = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x110;
  }
  *(undefined8 *)(unaff_R15 - 0x110) = 0x84f7;
  *(code **)(unaff_R15 - 0x108) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x100) = 5;
  *(code **)(unaff_R15 - 0xf8) = camlPrintf__doprn_392;
  *(undefined8 *)(unaff_R15 - 0xf0) = 0x10f9;
  *(code **)(unaff_R15 - 0xe8) = caml_curry3;
  *(undefined8 *)(unaff_R15 - 0xe0) = 7;
  *(code **)(unaff_R15 - 0xd8) = camlPrintf__cont_s_393;
  *(undefined8 *)(unaff_R15 - 0xd0) = 0x20f9;
  *(code **)(unaff_R15 - 200) = caml_curry4;
  *(undefined8 *)(unaff_R15 - 0xc0) = 9;
  *(code **)(unaff_R15 - 0xb8) = camlPrintf__cont_a_394;
  *(undefined8 *)(unaff_R15 - 0xb0) = 0x30f9;
  *(code **)(unaff_R15 - 0xa8) = caml_curry3;
  *(undefined8 *)(unaff_R15 - 0xa0) = 7;
  *(code **)(unaff_R15 - 0x98) = camlPrintf__cont_t_395;
  *(undefined8 *)(unaff_R15 - 0x90) = 0x40f9;
  *(code **)(unaff_R15 - 0x88) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x80) = 5;
  *(code **)(unaff_R15 - 0x78) = camlPrintf__cont_f_396;
  *(undefined8 *)(unaff_R15 - 0x70) = 0x50f9;
  *(code **)(unaff_R15 - 0x68) = caml_curry3;
  *(undefined8 *)(unaff_R15 - 0x60) = 7;
  *(code **)(unaff_R15 - 0x58) = camlPrintf__cont_m_397;
  *(undefined8 *)(unaff_R15 - 0x50) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(unaff_R15 - 0x48) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(unaff_R15 - 0x40) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(unaff_R15 - 0x38) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(unaff_R15 - 0x30) = *(undefined8 *)(param_3 + 0x38);
  *(long *)(unaff_R15 - 0x28) = param_3;
  *(undefined8 *)(unaff_R15 - 0x20) = in_RAX;
  *(long *)(unaff_R15 - 0x18) = param_1;
  *(undefined8 *)(unaff_R15 - 0x10) = param_2;
  *(long *)(unaff_R15 - 8) = lVar1;
  camlPrintf__doprn_392((code **)(unaff_R15 - 0x108),1);
  return;
}



undefined8 camlPrintf__fun_710(void)

{
  long unaff_RBX;
  
  return *(undefined8 *)(unaff_RBX + 0x10);
}



undefined ** camlPrintf__fun_714(void)

{
  return &camlPrintf__56;
}



undefined8 camlPrintf__fun_719(void)

{
  return 1;
}



undefined8 camlPrintf__fun_727(void)

{
  return 1;
}



undefined8 camlPrintf__fun_724(void)

{
  long unaff_RBX;
  
  return *(undefined8 *)(unaff_RBX + 0x10);
}



undefined8 camlPrintf__fun_730(void)

{
  return 1;
}



undefined8 camlPrintf__fun_737(void)

{
  return 1;
}



void camlPrintf__fun_740(void)

{
  return;
}



void camlPrintf__index_of_int_65(void)

{
  long in_RAX;
  
  if (0 < in_RAX) {
    return;
  }
  camlPervasives__string_of_int_154();
  camlPervasives___5e_136();
  camlPervasives__failwith_38();
  return;
}



void camlPrintf__add_int_index_68(void)

{
  camlPrintf__index_of_int_65();
  return;
}



void camlPrintf__index_of_literal_position_72(void)

{
  camlPrintf__index_of_int_65();
  return;
}



undefined8 camlPrintf__sub_78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long in_RAX;
  long unaff_RBX;
  
  if ((0 < unaff_RBX) && (0 < param_1)) {
    lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
    if (unaff_RBX <= (long)(((lVar1 - (ulong)*(byte *)(in_RAX + lVar1)) * 2 - param_1) + 2)) {
      uVar2 = caml_c_call();
      caml_blit_string(in_RAX,unaff_RBX,uVar2,1,param_1);
      return uVar2;
    }
  }
  uVar2 = camlPervasives__invalid_arg_40();
  return uVar2;
}



void camlPrintf__to_string_82(void)

{
  long lVar1;
  long in_RAX;
  
  lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  camlString__sub_74((lVar1 - (ulong)*(byte *)(in_RAX + lVar1)) * 2 + 1);
  return;
}



void camlPrintf__bad_conversion_85(void)

{
  camlPervasives___5e_136();
  camlPervasives___5e_136();
  camlPervasives__string_of_int_154();
  camlPervasives___5e_136();
  camlPervasives___5e_136();
  camlString__make_66();
  camlPervasives___5e_136();
  camlPervasives___5e_136();
  camlPervasives__invalid_arg_40();
  return;
}



void camlPrintf__bad_conversion_format_89(undefined8 param_1)

{
  long lVar1;
  long in_RAX;
  
  lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  camlString__sub_74((lVar1 - (ulong)*(byte *)(in_RAX + lVar1)) * 2 + 1);
  camlPrintf__bad_conversion_85(param_1);
  return;
}



void camlPrintf__incomplete_format_93(void)

{
  long lVar1;
  long in_RAX;
  
  lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  camlString__sub_74((lVar1 - (ulong)*(byte *)(in_RAX + lVar1)) * 2 + 1);
  camlPervasives___5e_136();
  camlPervasives___5e_136();
  camlPervasives__invalid_arg_40();
  return;
}



void camlPrintf__parse_string_conversion_95(void)

{
  undefined8 in_RAX;
  undefined **ppuVar1;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x18) = 5;
  *(code **)(unaff_R15 - 0x10) = camlPrintf__parse_97;
  *(undefined8 *)(unaff_R15 - 8) = in_RAX;
  ppuVar1 = (undefined **)FUN_0041d6a4();
  if ((undefined **)*ppuVar1 == &caml_exn_Failure) {
    camlPrintf__bad_conversion_85(0xe7);
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise_exn();
}



void FUN_0041d6a4(void)

{
  camlPrintf__parse_97();
  return;
}



undefined8 camlPrintf__pad_string_100(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long unaff_RBX;
  
  if ((unaff_RBX == param_4) && (param_3 == 1)) {
    return param_2;
  }
  if (unaff_RBX <= param_4) {
    uVar1 = camlString__sub_74(param_4);
    return uVar1;
  }
  uVar1 = camlString__make_66();
  if (param_1 == 1) {
    camlString__blit_84(uVar1,(unaff_RBX - param_4) + 1);
  }
  else {
    camlString__blit_84(uVar1,1,param_4);
  }
  return uVar1;
}



void camlPrintf__format_string_108(void)

{
  long lVar1;
  long lVar2;
  long unaff_RBX;
  
  lVar2 = camlPrintf__parse_string_conversion_95();
  lVar1 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
  camlPrintf__pad_string_100
            (*(undefined8 *)(lVar2 + 8),unaff_RBX,1,
             (lVar1 - (ulong)*(byte *)(unaff_RBX + lVar1)) * 2 + 1);
  return;
}



void camlPrintf__extract_format_113(undefined8 param_1)

{
  undefined8 in_RAX;
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  ulong unaff_R15;
  ulong uVar3;
  
  uVar2 = in_RAX;
  while( true ) {
    uVar3 = unaff_R15 - 0x20;
    if (caml_young_limit <= uVar3) break;
    caml_call_gc();
    uVar2 = extraout_RDX;
    unaff_R15 = uVar3;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xcf7;
  *(code **)(unaff_R15 - 0x18) = camlPrintf__skip_positional_spec_118;
  *(undefined8 *)(unaff_R15 - 0x10) = 3;
  *(undefined8 *)(unaff_R15 - 8) = uVar2;
  camlPrintf__skip_positional_spec_118();
  lVar1 = camlBuffer__create_67();
  camlBuffer__add_char_100();
  while( true ) {
    if (caml_young_limit <= uVar3 - 0x40) break;
    caml_call_gc();
    uVar3 = uVar3 - 0x40;
  }
  *(undefined8 *)(uVar3 - 0x40) = 0x1cf7;
  *(code **)(uVar3 - 0x38) = caml_curry2;
  *(undefined8 *)(uVar3 - 0x30) = 5;
  *(code **)(uVar3 - 0x28) = camlPrintf__fill_format_124;
  *(undefined8 *)(uVar3 - 0x20) = in_RAX;
  *(undefined8 *)(uVar3 - 0x18) = param_1;
  *(code ***)(uVar3 - 0x10) = (code **)(unaff_R15 - 0x18);
  *(long *)(uVar3 - 8) = lVar1;
  camlList__rev_append_79();
  camlPrintf__fill_format_124((code **)(uVar3 - 0x38));
  camlString__sub_74(*(undefined8 *)(lVar1 + 8));
  return;
}



void camlPrintf__extract_format_int_131(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long in_RAX;
  long lVar2;
  ulong uVar3;
  
  lVar2 = camlPrintf__extract_format_113(param_2,param_3);
  if ((in_RAX != 0x9d) && (in_RAX != 0xdd)) {
    return;
  }
  lVar1 = (*(ulong *)(lVar2 + -8) >> 10) * 8 + -1;
  uVar3 = (long)((lVar1 - (ulong)*(byte *)(lVar2 + lVar1)) * 2 + -1) >> 1;
  lVar1 = (*(ulong *)(lVar2 + -8) >> 10) * 8 + -1;
  if (uVar3 < lVar1 - (ulong)*(byte *)(lVar2 + lVar1)) {
    *(undefined *)(lVar2 + uVar3) = 0x75;
    return;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



void camlPrintf__extract_format_float_138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long in_RAX;
  long lVar2;
  ulong uVar3;
  
  lVar2 = camlPrintf__extract_format_113(param_2,param_3);
  if (in_RAX != 0x8d) {
    return;
  }
  lVar1 = (*(ulong *)(lVar2 + -8) >> 10) * 8 + -1;
  uVar3 = (long)((lVar1 - (ulong)*(byte *)(lVar2 + lVar1)) * 2 + -1) >> 1;
  lVar1 = (*(ulong *)(lVar2 + -8) >> 10) * 8 + -1;
  if (uVar3 < lVar1 - (ulong)*(byte *)(lVar2 + lVar1)) {
    *(undefined *)(lVar2 + uVar3) = 0x67;
    return;
  }
                    // WARNING: Subroutine does not return
  caml_ml_array_bound_error();
}



void camlPrintf__sub_format_145(undefined8 param_1,long param_2)

{
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  long lVar1;
  ulong unaff_R15;
  
  lVar1 = (*(ulong *)(param_2 + -8) >> 10) * 8 + -1;
  lVar1 = (lVar1 - (ulong)*(byte *)(param_2 + lVar1)) * 2 + 1;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x40) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x40;
  }
  *(undefined8 *)(unaff_R15 - 0x40) = 0x1cf7;
  *(code **)(unaff_R15 - 0x38) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x30) = 5;
  *(code **)(unaff_R15 - 0x28) = camlPrintf__sub_fmt_152;
  *(undefined8 *)(unaff_R15 - 0x20) = in_RAX;
  *(undefined8 *)(unaff_R15 - 0x18) = unaff_RBX;
  *(long *)(unaff_R15 - 0x10) = param_2;
  *(long *)(unaff_R15 - 8) = lVar1;
  camlPrintf__sub_fmt_152((code **)(unaff_R15 - 0x38));
  return;
}



void camlPrintf__sub_format_for_printf_163(void)

{
  caml_apply3();
  return;
}



undefined8 camlPrintf__iter_on_format_args_165(undefined8 param_1)

{
  long in_RAX;
  long lVar1;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  lVar1 = (*(ulong *)(in_RAX + -8) >> 10) * 8 + -1;
  lVar1 = (lVar1 - (ulong)*(byte *)(in_RAX + lVar1)) * 2 + -1;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x78) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x78;
  }
  *(undefined8 *)(unaff_R15 - 0x78) = 0x38f7;
  *(code **)(unaff_R15 - 0x70) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x68) = 5;
  *(code **)(unaff_R15 - 0x60) = camlPrintf__scan_flags_170;
  *(undefined8 *)(unaff_R15 - 0x58) = 0x10f9;
  *(code **)(unaff_R15 - 0x50) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x48) = 5;
  *(code **)(unaff_R15 - 0x40) = camlPrintf__scan_conv_171;
  *(undefined8 *)(unaff_R15 - 0x38) = 0x20f9;
  *(code **)(unaff_R15 - 0x30) = camlPrintf__scan_fmt_172;
  *(undefined8 *)(unaff_R15 - 0x28) = 3;
  *(long *)(unaff_R15 - 0x20) = in_RAX;
  *(undefined8 *)(unaff_R15 - 0x18) = unaff_RBX;
  *(undefined8 *)(unaff_R15 - 0x10) = param_1;
  *(long *)(unaff_R15 - 8) = lVar1;
  camlPrintf__scan_fmt_172();
  return 1;
}



void camlPrintf__summarize_format_type_190(void)

{
  long lVar1;
  long lVar2;
  ulong unaff_R15;
  
  lVar1 = camlBuffer__create_67();
  lVar2 = lVar1;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x58) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x58;
  }
  *(undefined8 *)(unaff_R15 - 0x58) = 0x10f7;
  *(code **)(unaff_R15 - 0x50) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x48) = 5;
  *(code **)(unaff_R15 - 0x40) = camlPrintf__add_char_194;
  *(long *)(unaff_R15 - 0x38) = lVar2;
  *(undefined8 *)(unaff_R15 - 0x30) = 0x14f7;
  *(code **)(unaff_R15 - 0x28) = caml_curry3;
  *(undefined8 *)(unaff_R15 - 0x20) = 7;
  *(code **)(unaff_R15 - 0x18) = camlPrintf__add_conv_197;
  *(long *)(unaff_R15 - 0x10) = lVar2;
  *(code ***)(unaff_R15 - 8) = (code **)(unaff_R15 - 0x50);
  camlPrintf__iter_on_format_args_165();
  camlString__sub_74(*(undefined8 *)(lVar1 + 8));
  return;
}



undefined8 * camlPrintf__ac_of_format_212(void)

{
  undefined8 *puVar1;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x70) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x70;
  }
  puVar1 = (undefined8 *)(unaff_R15 - 0x68);
  *(undefined8 *)(unaff_R15 - 0x70) = 0xc00;
  *puVar1 = 1;
  *(undefined8 *)(unaff_R15 - 0x60) = 1;
  *(undefined8 *)(unaff_R15 - 0x58) = 1;
  *(undefined8 *)(unaff_R15 - 0x50) = 0x10f7;
  *(code **)(unaff_R15 - 0x48) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x40) = 5;
  *(code **)(unaff_R15 - 0x38) = camlPrintf__incr_ac_215;
  *(undefined8 **)(unaff_R15 - 0x30) = puVar1;
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry3;
  *(undefined8 *)(unaff_R15 - 0x18) = 7;
  *(code **)(unaff_R15 - 0x10) = camlPrintf__add_conv_219;
  *(code ***)(unaff_R15 - 8) = (code **)(unaff_R15 - 0x48);
  camlPrintf__iter_on_format_args_165(&camlPrintf__48);
  return puVar1;
}



undefined8 camlPrintf__count_arguments_of_format_226(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)camlPrintf__ac_of_format_212();
  return *puVar1;
}



void camlPrintf__list_iter_i_229(void)

{
  undefined8 in_RAX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x28) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x28;
  }
  *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
  *(code **)(unaff_R15 - 0x20) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x18) = 5;
  *(code **)(unaff_R15 - 0x10) = camlPrintf__loop_232;
  *(undefined8 *)(unaff_R15 - 8) = in_RAX;
  camlPrintf__loop_232();
  return;
}



void camlPrintf__kapr_237(void)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 *puVar2;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  puVar2 = (undefined8 *)camlPrintf__ac_of_format_212();
  uVar1 = *puVar2;
  switch(uVar1) {
  case 0:
  case 1:
    caml_apply2(in_RAX);
    return;
  case 2:
  case 3:
    while (unaff_R15 - 0x28 < caml_young_limit) {
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x28;
    }
    *(undefined8 *)(unaff_R15 - 0x28) = 0x10f7;
    *(code **)(unaff_R15 - 0x20) = camlPrintf__fun_601;
    *(undefined8 *)(unaff_R15 - 0x18) = 3;
    *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
    *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
    return;
  case 4:
  case 5:
    while (unaff_R15 - 0x30 < caml_young_limit) {
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x30;
    }
    *(undefined8 *)(unaff_R15 - 0x30) = 0x14f7;
    *(code **)(unaff_R15 - 0x28) = caml_curry2;
    *(undefined8 *)(unaff_R15 - 0x20) = 5;
    *(code **)(unaff_R15 - 0x18) = camlPrintf__fun_604;
    *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
    *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
    return;
  case 6:
  case 7:
    while (unaff_R15 - 0x30 < caml_young_limit) {
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x30;
    }
    break;
  case 8:
  case 9:
    while (unaff_R15 - 0x30 < caml_young_limit) {
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x30;
    }
    *(undefined8 *)(unaff_R15 - 0x30) = 0x14f7;
    *(code **)(unaff_R15 - 0x28) = caml_curry4;
    *(undefined8 *)(unaff_R15 - 0x20) = 9;
    *(code **)(unaff_R15 - 0x18) = camlPrintf__fun_610;
    *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
    *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
    return;
  case 10:
  case 0xb:
    while (unaff_R15 - 0x30 < caml_young_limit) {
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x30;
    }
    *(undefined8 *)(unaff_R15 - 0x30) = 0x14f7;
    *(code **)(unaff_R15 - 0x28) = caml_curry5;
    *(undefined8 *)(unaff_R15 - 0x20) = 0xb;
    *(code **)(unaff_R15 - 0x18) = camlPrintf__fun_613;
    *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
    *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
    return;
  case 0xc:
  case 0xd:
    while (unaff_R15 - 0x30 < caml_young_limit) {
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x30;
    }
    *(undefined8 *)(unaff_R15 - 0x30) = 0x14f7;
    *(code **)(unaff_R15 - 0x28) = caml_curry6;
    *(undefined8 *)(unaff_R15 - 0x20) = 0xd;
    *(code **)(unaff_R15 - 0x18) = camlPrintf__fun_616;
    *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
    *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
    return;
  default:
    while (unaff_R15 - 0x38 < caml_young_limit) {
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x38;
    }
    *(undefined8 *)(unaff_R15 - 0x38) = 0x18f7;
    *(code **)(unaff_R15 - 0x30) = caml_curry2;
    *(undefined8 *)(unaff_R15 - 0x28) = 5;
    *(code **)(unaff_R15 - 0x20) = camlPrintf__loop_268;
    *(undefined8 *)(unaff_R15 - 0x18) = in_RAX;
    *(undefined8 *)(unaff_R15 - 0x10) = unaff_RBX;
    *(undefined8 *)(unaff_R15 - 8) = uVar1;
    camlPrintf__loop_268();
    return;
  }
  *(undefined8 *)(unaff_R15 - 0x30) = 0x14f7;
  *(code **)(unaff_R15 - 0x28) = caml_curry3;
  *(undefined8 *)(unaff_R15 - 0x20) = 7;
  *(code **)(unaff_R15 - 0x18) = camlPrintf__fun_607;
  *(undefined8 *)(unaff_R15 - 0x10) = in_RAX;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  return;
}



void camlPrintf__scan_positional_spec_280(undefined8 param_1,long param_2)

{
  long in_RAX;
  long extraout_RDX;
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  if (0x13 < (ulong)*(byte *)(in_RAX + (param_2 >> 1)) * 2 - 0x5f) {
    caml_apply2();
    return;
  }
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x38) break;
    caml_call_gc();
    in_RAX = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x38;
  }
  *(undefined8 *)(unaff_R15 - 0x38) = 0x18f7;
  *(code **)(unaff_R15 - 0x30) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0x28) = 5;
  *(code **)(unaff_R15 - 0x20) = camlPrintf__get_int_literal_286;
  *(long *)(unaff_R15 - 0x18) = in_RAX;
  *(undefined8 *)(unaff_R15 - 0x10) = unaff_RBX;
  *(long *)(unaff_R15 - 8) = param_2;
  camlPrintf__get_int_literal_286();
  return;
}



void camlPrintf__next_index_290(void)

{
  long in_RAX;
  
  if (in_RAX != 1) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x0041e1c4. Too many branches
                    // WARNING: Treating indirect jump as call
  (***(code ***)(DAT_0064b580 + 0x10))(**(code ***)(DAT_0064b580 + 0x10));
  return;
}



undefined8 camlPrintf__get_index_293(void)

{
  undefined8 *in_RAX;
  undefined8 unaff_RBX;
  
  if (in_RAX != (undefined8 *)0x1) {
    return *in_RAX;
  }
  return unaff_RBX;
}



undefined * camlPrintf__valid_float_lexeme_298(void)

{
  undefined8 in_RAX;
  undefined *puVar1;
  long lVar2;
  long extraout_RDX;
  long unaff_RBX;
  undefined **ppuVar3;
  ulong unaff_R15;
  
  lVar2 = (*(ulong *)(unaff_RBX + -8) >> 10) * 8 + -1;
  lVar2 = (lVar2 - (ulong)*(byte *)(unaff_RBX + lVar2)) * 2 + 1;
  if (lVar2 == 1) {
    return &camlPrintf__46;
  }
  ppuVar3 = &camlPrintf__45;
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x38) break;
    caml_call_gc();
    lVar2 = extraout_RDX;
    unaff_R15 = unaff_R15 - 0x38;
  }
  *(undefined8 *)(unaff_R15 - 0x38) = 0x18f7;
  *(code **)(unaff_R15 - 0x30) = camlPrintf__loop_305;
  *(undefined8 *)(unaff_R15 - 0x28) = 3;
  *(undefined8 *)(unaff_R15 - 0x20) = in_RAX;
  *(long *)(unaff_R15 - 0x18) = unaff_RBX;
  *(long *)(unaff_R15 - 0x10) = lVar2;
  *(undefined ***)(unaff_R15 - 8) = ppuVar3;
  puVar1 = (undefined *)camlPrintf__loop_305();
  return puVar1;
}



undefined8 camlPrintf__fun_630(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 unaff_RBX;
  
  uVar1 = caml_c_call();
  lVar2 = caml_c_call(unaff_RBX);
  if (6 < lVar2) {
    return uVar1;
  }
  uVar1 = camlPrintf__valid_float_lexeme_298();
  return uVar1;
}



void camlPrintf__scan_format_310
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 in_RAX;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  undefined8 in_R10;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 200) break;
    caml_call_gc();
    param_3 = extraout_RDX;
    unaff_R15 = unaff_R15 - 200;
  }
  *(undefined8 *)(unaff_R15 - 200) = 0x10f7;
  *(code **)(unaff_R15 - 0xc0) = caml_curry2;
  *(undefined8 *)(unaff_R15 - 0xb8) = 5;
  *(code **)(unaff_R15 - 0xb0) = camlPrintf__get_arg_320;
  *(undefined8 *)(unaff_R15 - 0xa8) = unaff_RBX;
  *(undefined8 *)(unaff_R15 - 0xa0) = 0x4cf7;
  *(code **)(unaff_R15 - 0x98) = caml_curry3;
  *(undefined8 *)(unaff_R15 - 0x90) = 7;
  *(code **)(unaff_R15 - 0x88) = camlPrintf__scan_positional_323;
  *(undefined8 *)(unaff_R15 - 0x80) = 0x10f9;
  *(code **)(unaff_R15 - 0x78) = caml_curry4;
  *(undefined8 *)(unaff_R15 - 0x70) = 9;
  *(code **)(unaff_R15 - 0x68) = camlPrintf__scan_flags_324;
  *(undefined8 *)(unaff_R15 - 0x60) = 0x20f9;
  *(code **)(unaff_R15 - 0x58) = caml_curry4;
  *(undefined8 *)(unaff_R15 - 0x50) = 9;
  *(code **)(unaff_R15 - 0x48) = camlPrintf__scan_conv_325;
  *(undefined8 *)(unaff_R15 - 0x40) = in_RAX;
  *(long *)(unaff_R15 - 0x38) = param_2;
  *(undefined8 *)(unaff_R15 - 0x30) = param_3;
  *(undefined8 *)(unaff_R15 - 0x28) = param_4;
  *(undefined8 *)(unaff_R15 - 0x20) = param_5;
  *(undefined8 *)(unaff_R15 - 0x18) = param_6;
  *(undefined8 *)(unaff_R15 - 0x10) = in_R10;
  *(code ***)(unaff_R15 - 8) = (code **)(unaff_R15 - 0xc0);
  camlPrintf__scan_positional_323(param_2 + 2,(code **)(unaff_R15 - 0x98));
  return;
}



void camlPrintf__mkprintf_377(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  code **unaff_RBX;
  ulong unaff_R15;
  
  uVar1 = (**unaff_RBX)(*unaff_RBX);
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x48) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x48;
  }
  *(undefined8 *)(unaff_R15 - 0x48) = 0x20f7;
  *(code **)(unaff_R15 - 0x40) = caml_curry4;
  *(undefined8 *)(unaff_R15 - 0x38) = 9;
  *(code **)(unaff_R15 - 0x30) = camlPrintf__pr_386;
  *(undefined8 *)(unaff_R15 - 0x28) = in_RAX;
  *(undefined8 *)(unaff_R15 - 0x20) = param_1;
  *(undefined8 *)(unaff_R15 - 0x18) = param_2;
  *(undefined8 *)(unaff_R15 - 0x10) = param_3;
  *(undefined8 *)(unaff_R15 - 8) = uVar1;
  camlPrintf__index_of_int_65();
  caml_apply2((code **)(unaff_R15 - 0x40));
  camlPrintf__kapr_237();
  return;
}



void camlPrintf__kfprintf_418(void)

{
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xcf7;
  *(code **)(unaff_R15 - 0x18) = camlPrintf__fun_710;
  *(undefined8 *)(unaff_R15 - 0x10) = 3;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  caml_apply6(DAT_006454d8,DAT_006454e0,DAT_006454c8);
  return;
}



void camlPrintf__ifprintf_421(void)

{
                    // WARNING: Could not recover jumptable at 0x0041e568. Too many branches
                    // WARNING: Treating indirect jump as call
  (**DAT_0064b610)(*DAT_0064b610);
  return;
}



void camlPrintf__fprintf_423(void)

{
  camlPrintf__kfprintf_418();
  return;
}



void camlPrintf__printf_425(void)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)camlPrintf__fprintf_423();
                    // WARNING: Could not recover jumptable at 0x0041e5a9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcVar1)(*ppcVar1);
  return;
}



void camlPrintf__eprintf_427(void)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)camlPrintf__fprintf_423();
                    // WARNING: Could not recover jumptable at 0x0041e5d9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcVar1)(*ppcVar1);
  return;
}



void camlPrintf__kbprintf_429(void)

{
  undefined8 unaff_RBX;
  ulong unaff_R15;
  
  while( true ) {
    if (caml_young_limit <= unaff_R15 - 0x20) break;
    caml_call_gc();
    unaff_R15 = unaff_R15 - 0x20;
  }
  *(undefined8 *)(unaff_R15 - 0x20) = 0xcf7;
  *(code **)(unaff_R15 - 0x18) = camlPrintf__fun_724;
  *(undefined8 *)(unaff_R15 - 0x10) = 3;
  *(undefined8 *)(unaff_R15 - 8) = unaff_RBX;
  caml_apply6(DAT_0064ad50,DAT_0064ad58,&camlPrintf__42);
  return;
}



void camlPrintf__bprintf_432(void)

{
  camlPrintf__kbprintf_429();
  return;
}



void camlPrintf__get_buff_434(void)

{
  camlBuffer__create_67();
  return;
}



void camlPrintf__get_contents_437(void)

{
  long in_RAX;
  
  camlString__sub_74(*(undefined8 *)(in_RAX + 8));
  *(undefined8 *)(in_RAX + 8) = 1;
  return;
}



void camlPrintf__get_cont_440(void)

{
  code **in_RAX;
  long unaff_RBX;
  
  camlString__sub_74(*(undefined8 *)(unaff_RBX + 8));
  *(undefined8 *)(unaff_RBX + 8) = 1;
                    // WARNING: Could not recover jumptable at 0x0041e70b. Too many branches
                    // WARNING: Treating indirect jump as call
  (**in_RAX)(*in_RAX);
  return;
}



void camlPrintf__ksprintf_443(void)

{
  undefined8 uVar1;
  
  uVar1 = (**DAT_0064b658)(*DAT_0064b658);
  caml_apply6(DAT_0064ad50,DAT_0064ad58,&camlPrintf__40,uVar1,DAT_0064b640);
  return;
}



void camlPrintf__sprintf_446(void)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)camlPrintf__ksprintf_443();
                    // WARNING: Could not recover jumptable at 0x0041e7a2. Too many branches
                    // WARNING: Treating indirect jump as call
  (**ppcVar1)(*ppcVar1);
  return;
}



undefined8 camlPrintf__entry(void)

{
  code **ppcVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 *unaff_R15;
  
  ppuVar8 = &camlPrintf__38;
  caml_allocN();
  ppcVar1 = (code **)(unaff_R15 + 1);
  *unaff_R15 = 0x10f7;
  *ppcVar1 = caml_curry2;
  unaff_R15[2] = 5;
  unaff_R15[3] = camlPrintf__add_int_index_68;
  unaff_R15[4] = ppuVar8;
  uVar7 = (**ppcVar1)(*ppcVar1);
  caml_allocN();
  *unaff_R15 = 0xcf7;
  unaff_R15[1] = camlPrintf__index_of_literal_position_72;
  unaff_R15[2] = 3;
  unaff_R15[3] = &camlPrintf__38;
  unaff_R15[4] = 0xcf7;
  unaff_R15[5] = camlPrintf__to_string_82;
  unaff_R15[6] = 3;
  unaff_R15[7] = &camlPrintf__37;
  DAT_0064b580 = (undefined **)(unaff_R15 + 9);
  unaff_R15[8] = 0x1800;
  *DAT_0064b580 = (undefined *)&camlPrintf__38;
  unaff_R15[10] = ppcVar1;
  unaff_R15[0xb] = uVar7;
  unaff_R15[0xc] = unaff_R15 + 1;
  unaff_R15[0xd] = &camlPrintf__37;
  unaff_R15[0xe] = unaff_R15 + 5;
  DAT_0064b588 = &camlPrintf__36;
  DAT_0064b590 = &camlPrintf__35;
  DAT_0064b598 = &camlPrintf__34;
  DAT_0064b5a0 = &camlPrintf__33;
  DAT_0064b5a8 = &camlPrintf__32;
  DAT_0064b5b0 = &camlPrintf__31;
  DAT_0064b5b8 = &camlPrintf__30;
  DAT_0064b5c0 = &camlPrintf__29;
  DAT_0064b5c8 = &camlPrintf__28;
  DAT_0064b5d0 = &camlPrintf__27;
  DAT_0064b5d8 = &camlPrintf__26;
  DAT_0064b5e0 = &camlPrintf__25;
  DAT_0064b5e8 = &camlPrintf__24;
  DAT_0064b5f0 = &camlPrintf__23;
  DAT_0064b5f8 = &camlPrintf__22;
  DAT_0064b600 = &camlPrintf__21;
  DAT_0064b608 = &camlPrintf__20;
  DAT_0064b610 = &camlPrintf__19;
  DAT_0064b618 = &camlPrintf__18;
  DAT_0064b620 = &camlPrintf__17;
  DAT_0064b628 = &camlPrintf__16;
  DAT_0064b630 = (code **)(unaff_R15 + 0x10);
  unaff_R15[0xf] = 0x10f7;
  *DAT_0064b630 = caml_curry2;
  unaff_R15[0x11] = 5;
  unaff_R15[0x12] = camlPrintf__fun_630;
  unaff_R15[0x13] = &camlPrintf__15;
  ppuVar6 = DAT_0064b610;
  ppuVar5 = DAT_0064b5f8;
  ppuVar4 = DAT_0064b5e8;
  ppuVar8 = DAT_0064b5d0;
  ppuVar3 = DAT_0064b580;
  DAT_0064b638 = &camlPrintf__14;
  DAT_0064b640 = &camlPrintf__13;
  DAT_0064b558 = &camlPrintf__12;
  DAT_0064b540 = &camlPrintf__11;
  camlPrintf = &camlPrintf__10;
  DAT_0064b530 = &camlPrintf__9;
  DAT_0064b538 = &camlPrintf__8;
  DAT_0064b568 = &camlPrintf__7;
  DAT_0064b550 = &camlPrintf__6;
  DAT_0064b648 = &camlPrintf__5;
  DAT_0064b650 = &camlPrintf__4;
  DAT_0064b658 = &camlPrintf__3;
  DAT_0064b560 = &camlPrintf__2;
  DAT_0064b570 = &camlPrintf__2;
  DAT_0064b548 = &camlPrintf__1;
  unaff_R15[0x14] = 0x1400;
  unaff_R15[0x15] = ppuVar5;
  unaff_R15[0x16] = ppuVar8;
  unaff_R15[0x17] = ppuVar4;
  unaff_R15[0x18] = &camlPrintf__14;
  unaff_R15[0x19] = ppuVar6;
  ppuVar8 = (undefined **)(unaff_R15 + 0x1b);
  unaff_R15[0x1a] = 0x800;
  *ppuVar8 = (undefined *)ppuVar3;
  unaff_R15[0x1c] = unaff_R15 + 0x15;
  puVar2 = (undefined8 *)*ppuVar8;
  caml_allocN();
  *unaff_R15 = 0x1000;
  unaff_R15[1] = *puVar2;
  unaff_R15[2] = puVar2[2];
  unaff_R15[3] = puVar2[4];
  unaff_R15[4] = puVar2[5];
  unaff_R15[5] = 0x800;
  unaff_R15[6] = unaff_R15 + 1;
  unaff_R15[7] = ppuVar8[1];
  DAT_0064b578 = unaff_R15 + 6;
  return 1;
}



void camlCallback__register_59(void)

{
  caml_c_call();
  return;
}



void camlCallback__register_exception_62(void)

{
  undefined8 *unaff_RBX;
  ulong unaff_R15;
  
  if (*(char *)(unaff_RBX + -1) == -2) {
    while (unaff_R15 - 0x10 < caml_young_limit) {
      caml_call_gc();
      unaff_R15 = unaff_R15 - 0x10;
    }
    *(undefined8 *)(unaff_R15 - 0x10) = 0x4fd;
    *(undefined8 *)(unaff_R15 - 8) = *unaff_RBX;
  }
  caml_c_call();
  return;
}



undefined8 camlCallback__entry(void)

{
  camlCallback = &camlCallback__2;
  DAT_0064d668 = &camlCallback__1;
  return 1;
}



void camlCallback__code_end(long param_1)

{
  int iVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uStack232;
  undefined8 uStack224;
  undefined8 uStack216;
  long *plStack208;
  long lStack168;
  socklen_t sStack156;
  sockaddr asStack152 [7];
  long lStack32;
  
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  sStack156 = 0x70;
  caml_enter_blocking_section();
  iVar1 = accept((int)(param_1 >> 1),asStack152,&sStack156);
  caml_leave_blocking_section();
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_004359f0,0);
  }
  lStack168 = alloc_sockaddr(asStack152,sStack156,iVar1);
  uStack232 = caml_local_roots;
  uStack216 = 1;
  uStack224 = 1;
  plStack208 = &lStack168;
  caml_local_roots = (undefined *)&uStack232;
  plVar2 = (long *)caml_alloc_small(2,0);
  *plVar2 = (long)iVar1 * 2 + 1;
  plVar2[1] = lStack168;
  caml_local_roots = (undefined *)uStack232;
  if (lStack32 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void unix_accept(long param_1)

{
  int iVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long *local_d0;
  long local_a8;
  socklen_t local_9c;
  sockaddr local_98 [7];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0x70;
  caml_enter_blocking_section();
  iVar1 = accept((int)(param_1 >> 1),local_98,&local_9c);
  caml_leave_blocking_section();
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_004359f0,0);
  }
  local_a8 = alloc_sockaddr(local_98,local_9c,iVar1);
  local_e8 = caml_local_roots;
  local_d8 = 1;
  local_e0 = 1;
  local_d0 = &local_a8;
  caml_local_roots = (undefined *)&local_e8;
  plVar2 = (long *)caml_alloc_small(2,0);
  *plVar2 = (long)iVar1 * 2 + 1;
  plVar2[1] = local_a8;
  caml_local_roots = (undefined *)local_e8;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



undefined8 unix_access(char *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = caml_convert_flag_list(param_2);
  iVar1 = access(param_1,iVar1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x4359f7,param_1);
  }
  return 1;
}



void unix_inet_addr_of_string(char *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined auStack56 [16];
  undefined local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = inet_pton(2,param_1,auStack56);
  if (iVar1 < 1) {
    iVar1 = inet_pton(10,param_1,local_28);
    if (iVar1 < 1) {
                    // WARNING: Subroutine does not return
      caml_failwith(0x4359fe);
    }
    alloc_inet6_addr(local_28);
  }
  else {
    alloc_inet_addr(auStack56);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



long unix_alarm(long param_1)

{
  uint uVar1;
  
  uVar1 = alarm((uint)(param_1 >> 1));
  return (ulong)uVar1 * 2 + 1;
}



undefined8 unix_bind(long param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  socklen_t local_9c;
  sockaddr local_98 [7];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  get_sockaddr(param_2,local_98,&local_9c);
  iVar1 = bind((int)(param_1 >> 1),local_98,local_9c);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435a12,0);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 1;
}



undefined8 unix_chdir(char *param_1)

{
  int iVar1;
  
  iVar1 = chdir(param_1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435a17,param_1);
  }
  return 1;
}



undefined8 unix_chmod(char *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = chmod(param_1,(__mode_t)(param_2 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435a59,param_1);
  }
  return 1;
}



undefined8 unix_chown(char *param_1,long param_2,long param_3)

{
  int iVar1;
  
  iVar1 = chown(param_1,(__uid_t)(param_2 >> 1),(__gid_t)(param_3 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435a60,param_1);
  }
  return 1;
}



undefined8 unix_chroot(char *param_1)

{
  int iVar1;
  
  iVar1 = chroot(param_1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435a1d,param_1);
  }
  return 1;
}



undefined8 unix_close(long param_1)

{
  int iVar1;
  
  iVar1 = close((int)(param_1 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435a24,0);
  }
  return 1;
}



undefined8 unix_closedir(DIR **param_1)

{
  DIR *__dirp;
  
  __dirp = *param_1;
  if (__dirp == (DIR *)0x0) {
    __dirp = (DIR *)0x9;
    unix_error(9,0x435a2a,0);
  }
  closedir(__dirp);
  *param_1 = (DIR *)0x0;
  return 1;
}



undefined8 unix_connect(long param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  socklen_t local_9c;
  sockaddr local_98 [7];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  get_sockaddr(param_2,local_98,&local_9c);
  caml_enter_blocking_section();
  iVar1 = connect((int)(param_1 >> 1),local_98,local_9c);
  caml_leave_blocking_section();
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435a33,0);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 1;
}



long unix_dup(long param_1)

{
  int iVar1;
  
  iVar1 = dup((int)(param_1 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435a3b,0);
  }
  return (long)iVar1 * 2 + 1;
}



undefined8 unix_dup2(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = dup2((int)(param_1 >> 1),(int)(param_2 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435a3f,0);
  }
  return 1;
}



void unix_environment(void)

{
  caml_copy_string_array(environ);
  return;
}



void unix_error_message(ulong *param_1)

{
  char *pcVar1;
  int __errnum;
  
  if (((ulong)param_1 & 1) == 0) {
    __errnum = (int)(*param_1 >> 1);
  }
  else {
    __errnum = *(int *)(error_table + (long)(int)((long)param_1 >> 1) * 4);
  }
  pcVar1 = strerror(__errnum);
  caml_copy_string(pcVar1);
  return;
}



void unix_execv(char *param_1,undefined8 param_2)

{
  char **__argv;
  
  __argv = (char **)cstringvect(param_2);
  execv(param_1,__argv);
  caml_stat_free(__argv);
                    // WARNING: Subroutine does not return
  uerror(&UINT_00435a44,param_1);
}



void unix_execve(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char **__argv;
  char **__envp;
  
  __argv = (char **)cstringvect(param_2);
  __envp = (char **)cstringvect(param_3);
  execve(param_1,__argv,__envp);
  caml_stat_free(__argv);
  caml_stat_free(__envp);
                    // WARNING: Subroutine does not return
  uerror(0x435a4a,param_1);
}



void unix_execvpe(char *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char **__argv;
  
  __argv = (char **)cstringvect(param_2);
  uVar1 = environ;
  environ = (void *)cstringvect(param_3);
  execvp(param_1,__argv);
  caml_stat_free(__argv);
  caml_stat_free(environ);
  environ = (void *)uVar1;
                    // WARNING: Subroutine does not return
  uerror(0x435a51,param_1);
}



void unix_execvp(char *param_1,undefined8 param_2)

{
  char **__argv;
  
  __argv = (char **)cstringvect(param_2);
  execvp(param_1,__argv);
  caml_stat_free(__argv);
                    // WARNING: Subroutine does not return
  uerror(0x435a51,param_1);
}



undefined8 unix_fchmod(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = fchmod((int)(param_1 >> 1),(__mode_t)(param_2 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435a58,0);
  }
  return 1;
}



undefined8 unix_fchown(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  iVar1 = fchown((int)(param_1 >> 1),(__uid_t)(param_2 >> 1),(__gid_t)(param_3 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435a5f,0);
  }
  return 1;
}



undefined8 unix_clear_close_on_exec(long param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(param_1 >> 1);
  uVar1 = fcntl(iVar2,1,0);
  if (uVar1 != 0xffffffff) {
    iVar2 = fcntl(iVar2,2,(ulong)(uVar1 & 0xfffffffe));
    if (iVar2 != -1) {
      return 1;
    }
  }
                    // WARNING: Subroutine does not return
  uerror(0x435a66,0);
}



undefined8 unix_set_close_on_exec(long param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(param_1 >> 1);
  uVar1 = fcntl(iVar2,1,0);
  if (uVar1 != 0xffffffff) {
    iVar2 = fcntl(iVar2,2,(ulong)(uVar1 | 1));
    if (iVar2 != -1) {
      return 1;
    }
  }
                    // WARNING: Subroutine does not return
  uerror(0x435a7a,0);
}



undefined8 unix_clear_nonblock(long param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(param_1 >> 1);
  uVar1 = fcntl(iVar2,3,0);
  if (uVar1 != 0xffffffff) {
    iVar2 = fcntl(iVar2,4,(ulong)uVar1 & 0xfffffffffffff7ff);
    if (iVar2 != -1) {
      return 1;
    }
  }
                    // WARNING: Subroutine does not return
  uerror(&UINT_00435a8c,0);
}



undefined8 unix_set_nonblock(long param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(param_1 >> 1);
  uVar1 = fcntl(iVar2,3,0);
  if (uVar1 != 0xffffffff) {
    iVar2 = fcntl(iVar2,4,(ulong)uVar1 | 0x800);
    if (iVar2 != -1) {
      return 1;
    }
  }
                    // WARNING: Subroutine does not return
  uerror(0x435a9b,0);
}



long unix_fork(void)

{
  __pid_t _Var1;
  
  _Var1 = fork();
  if (_Var1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435aa8,0);
  }
  return (long)_Var1 * 2 + 1;
}



undefined8 unix_ftruncate_64(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = ftruncate64((int)(param_1 >> 1),*(__off64_t *)(param_2 + 8));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435aad,0);
  }
  return 1;
}



undefined8 unix_ftruncate(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = ftruncate64((int)(param_1 >> 1),param_2 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435aad,0);
  }
  return 1;
}



long * unix_getaddrinfo(char *param_1,char *param_2,long **param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  addrinfo *paVar10;
  char *__dest;
  long in_FS_OFFSET;
  byte bVar11;
  long **local_200;
  char *local_1f8;
  char *local_1f0;
  undefined8 **local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 **local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  long **local_190;
  long **local_188;
  undefined8 **local_180;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  char **local_150;
  char **local_148;
  long ***local_140;
  addrinfo local_128;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  addrinfo *local_d8;
  undefined8 *local_d0;
  long *local_c8;
  long *local_c0;
  undefined local_b8 [120];
  long local_40;
  
  uVar2 = caml_local_roots;
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_168 = caml_local_roots;
  local_1a8 = &local_168;
  local_158 = 1;
  local_160 = 3;
  local_150 = &local_1f0;
  local_148 = &local_1f8;
  local_140 = &local_200;
  local_c0 = (long *)0x0;
  local_c8 = (long *)0x0;
  local_d0 = (undefined8 *)0x0;
  caml_local_roots = (undefined8 ***)&local_1a8;
  local_198 = 1;
  local_1a0 = 3;
  local_190 = &local_c0;
  local_188 = &local_c8;
  local_180 = &local_d0;
  local_200 = param_3;
  local_1f8 = param_2;
  local_1f0 = param_1;
  lVar6 = caml_string_length();
  pcVar9 = (char *)0x0;
  if (lVar6 != 0) {
    pcVar9 = (char *)caml_stat_alloc(lVar6 + 1);
    strcpy(pcVar9,local_1f0);
  }
  lVar6 = caml_string_length(local_1f8);
  __dest = (char *)0x0;
  if (lVar6 != 0) {
    __dest = (char *)caml_stat_alloc(lVar6 + 1);
    strcpy(__dest,local_1f8);
  }
  paVar10 = &local_128;
  for (lVar6 = 6; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined8 *)paVar10 = 0;
    paVar10 = (addrinfo *)((long)paVar10 + ((ulong)bVar11 * -2 + 1) * 8);
  }
  for (; ((ulong)local_200 & 1) == 0; local_200 = (long **)local_200[1]) {
    local_c8 = *local_200;
    if (((ulong)local_c8 & 1) == 0) {
      cVar1 = *(char *)(local_c8 + -1);
      if (cVar1 == '\x01') {
        local_128.ai_socktype = *(int *)(socket_type_table + (long)(int)(*local_c8 >> 1) * 4);
      }
      else {
        if (cVar1 == '\0') {
          local_128.ai_family = *(int *)(socket_domain_table + (long)(int)(*local_c8 >> 1) * 4);
        }
        else {
          if (cVar1 == '\x02') {
            local_128.ai_protocol = (int)(*local_c8 >> 1);
          }
        }
      }
    }
    else {
      iVar4 = (int)((long)local_c8 >> 1);
      if (iVar4 == 1) {
        local_128.ai_flags = local_128.ai_flags | 2;
      }
      else {
        if (iVar4 == 2) {
          local_128.ai_flags = local_128.ai_flags | 1;
        }
        else {
          if (iVar4 == 0) {
            local_128.ai_flags = local_128.ai_flags | 4;
          }
        }
      }
    }
  }
  caml_enter_blocking_section();
  iVar4 = getaddrinfo(pcVar9,__dest,&local_128,&local_d8);
  caml_leave_blocking_section();
  if (pcVar9 != (char *)0x0) {
    caml_stat_free(pcVar9);
  }
  if (__dest != (char *)0x0) {
    caml_stat_free(__dest);
  }
  local_c0 = (long *)0x1;
  if (iVar4 == 0) {
    if (local_d8 != (addrinfo *)0x0) {
      paVar10 = local_d8;
      do {
        ppuVar3 = caml_local_roots;
        local_e0 = (undefined8 *)0x0;
        local_e8 = 0;
        local_f0 = 0;
        local_1e8 = caml_local_roots;
        local_1d8 = 1;
        local_1e0 = 3;
        uVar5 = paVar10->ai_addrlen;
        if (0x70 < uVar5) {
          uVar5 = 0x70;
        }
        caml_local_roots = &local_1e8;
        local_1d0 = &local_e0;
        local_1c8 = &local_e8;
        local_1c0 = &local_f0;
        __memcpy_chk(local_b8,paVar10->ai_addr,uVar5,0x70);
        local_e8 = alloc_sockaddr(local_b8,uVar5,0xffffffff);
        pcVar9 = paVar10->ai_canonname;
        if (pcVar9 == (char *)0x0) {
          pcVar9 = "";
        }
        local_f0 = caml_copy_string(pcVar9);
        puVar7 = (undefined8 *)caml_alloc_small(5,0);
        local_e0 = puVar7;
        uVar8 = cst_to_constr(paVar10->ai_family,socket_domain_table,3,0);
        *puVar7 = uVar8;
        puVar7 = local_e0 + 1;
        uVar8 = cst_to_constr(paVar10->ai_socktype,socket_type_table,4,0);
        *puVar7 = uVar8;
        local_e0[2] = (long)paVar10->ai_protocol * 2 + 1;
        local_e0[3] = local_e8;
        local_e0[4] = local_f0;
        local_d0 = local_e0;
        caml_local_roots = (undefined8 ***)ppuVar3;
        local_c8 = (long *)caml_alloc_small(2,0);
        *local_c8 = (long)local_d0;
        local_c8[1] = (long)local_c0;
        paVar10 = paVar10->ai_next;
        local_c0 = local_c8;
      } while (paVar10 != (addrinfo *)0x0);
    }
    freeaddrinfo(local_d8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
    caml_local_roots = (undefined8 ***)uVar2;
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  caml_local_roots = (undefined8 ***)uVar2;
  return local_c0;
}



void unix_getcwd(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char acStack4120 [4104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = getcwd(acStack4120,0x1000);
  if (pcVar1 == (char *)0x0) {
                    // WARNING: Subroutine does not return
    uerror(0x435ab7,0);
  }
  caml_copy_string(acStack4120);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



long unix_getegid(void)

{
  __gid_t _Var1;
  
  _Var1 = getegid();
  return (ulong)_Var1 * 2 + 1;
}



long unix_geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = geteuid();
  return (ulong)_Var1 * 2 + 1;
}



long unix_getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = getgid();
  return (ulong)_Var1 * 2 + 1;
}



void alloc_group_entry(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 1;
  local_28 = 1;
  local_30 = 1;
  local_78 = caml_local_roots;
  local_68 = 1;
  local_70 = 3;
  local_60 = local_20;
  local_58 = &local_28;
  local_50 = &local_30;
  caml_local_roots = (undefined *)&local_78;
  local_20[0] = caml_copy_string(*param_1);
  local_28 = caml_copy_string(param_1[1]);
  local_30 = caml_copy_string_array(param_1[3]);
  puVar1 = (undefined8 *)caml_alloc_small(4,0);
  *puVar1 = local_20[0];
  puVar1[1] = local_28;
  puVar1[2] = (ulong)*(uint *)(param_1 + 2) * 2 + 1;
  puVar1[3] = local_30;
  caml_local_roots = (undefined *)local_78;
  return;
}



void unix_getgrgid(long param_1)

{
  group *pgVar1;
  
  pgVar1 = getgrgid((__gid_t)(param_1 >> 1));
  if (pgVar1 == (group *)0x0) {
    pgVar1 = (group *)caml_raise_not_found();
  }
  alloc_group_entry(pgVar1);
  return;
}



void unix_getgrnam(char *param_1)

{
  group *pgVar1;
  
  pgVar1 = getgrnam(param_1);
  if (pgVar1 == (group *)0x0) {
    pgVar1 = (group *)caml_raise_not_found();
  }
  alloc_group_entry(pgVar1);
  return;
}



void unix_getgroups(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  __gid_t a_Stack262152 [65536];
  
  iVar2 = getgroups(0x10000,a_Stack262152);
  if (iVar2 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435abe,0);
  }
  lVar1 = caml_alloc_tuple((long)iVar2);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      *(ulong *)(lVar1 + lVar3 * 2) = (ulong)*(uint *)((long)a_Stack262152 + lVar3) * 2 + 1;
      lVar3 = lVar3 + 4;
    } while (lVar3 != (ulong)(iVar2 - 1) * 4 + 4);
  }
  return;
}



void alloc_host_entry(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = 1;
  local_20 = 1;
  local_28 = 1;
  local_68 = caml_local_roots;
  local_58 = 1;
  local_60 = 4;
  local_50 = &local_10;
  local_48 = &local_18;
  local_40 = &local_20;
  local_38 = &local_28;
  caml_local_roots = (undefined *)&local_68;
  local_10 = caml_copy_string(*param_1);
  if (param_1[1] == 0) {
    local_18 = 0x658068;
  }
  else {
    local_18 = caml_copy_string_array();
  }
  entry_h_length = *(undefined4 *)((long)param_1 + 0x14);
  local_20 = caml_alloc_array(alloc_one_addr,param_1[3]);
  puVar1 = (undefined8 *)caml_alloc_small(4,0);
  *puVar1 = local_10;
  puVar1[1] = local_18;
  if (*(int *)(param_1 + 2) == 1) {
    puVar1[2] = 1;
  }
  else {
    puVar1[2] = (ulong)(*(int *)(param_1 + 2) != 2) * 2 + 3;
  }
  puVar1[3] = local_20;
  caml_local_roots = (undefined *)local_68;
  return;
}



void unix_gethostbyname(char *param_1)

{
  int iVar1;
  long lVar2;
  char *__dest;
  int *__h_errnop;
  long in_FS_OFFSET;
  hostent hStack10088;
  hostent *local_2740;
  char local_2738 [10008];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = caml_string_length();
  __dest = (char *)caml_stat_alloc(lVar2 + 1);
  strcpy(__dest,param_1);
  caml_enter_blocking_section();
  __h_errnop = __h_errno_location();
  iVar1 = gethostbyname_r(__dest,&hStack10088,local_2738,10000,&local_2740,__h_errnop);
  caml_leave_blocking_section();
  if (iVar1 != 0) {
    local_2740 = (hostent *)0x0;
  }
  caml_stat_free(__dest);
  if (local_2740 == (hostent *)0x0) {
    caml_raise_not_found();
  }
  alloc_host_entry();
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void unix_gethostbyaddr(undefined4 *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  hostent local_2768;
  hostent *local_2748;
  int local_273c;
  undefined4 local_2738 [4];
  char local_2728 [10008];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_2738[0] = *param_1;
  caml_enter_blocking_section();
  iVar1 = gethostbyaddr_r(local_2738,4,2,&local_2768,local_2728,10000,&local_2748,&local_273c);
  caml_leave_blocking_section();
  if (iVar1 == 0) {
    if (local_2748 != (hostent *)0x0) goto LAB_0041ff03;
  }
  else {
    local_2748 = (hostent *)0x0;
  }
  caml_raise_not_found();
LAB_0041ff03:
  alloc_host_entry();
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void alloc_one_addr(void *param_1)

{
  long in_FS_OFFSET;
  undefined auStack56 [16];
  undefined local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (entry_h_length == 0x10) {
    memmove(local_28,param_1,0x10);
    alloc_inet6_addr(local_28);
  }
  else {
    memmove(auStack56,param_1,4);
    alloc_inet_addr(auStack56);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void unix_gethostname(void)

{
  long in_FS_OFFSET;
  char acStack88 [63];
  undefined local_19;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  gethostname(acStack88,0x40);
  local_19 = 0;
  caml_copy_string(acStack88);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void unix_getlogin(void)

{
  char *pcVar1;
  
  pcVar1 = getlogin();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)unix_error(2,&UINT_00435ac8,0);
  }
  caml_copy_string(pcVar1);
  return;
}



undefined8 * unix_getnameinfo(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint __flags;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_14f8;
  undefined8 local_14f0;
  undefined8 local_14e8;
  undefined8 *local_14e0;
  undefined8 *local_14d8;
  undefined8 **local_14d0;
  undefined8 *local_14b8;
  undefined8 local_14b0;
  undefined8 local_14a8;
  socklen_t local_149c;
  char local_1498 [4096];
  char local_498 [1024];
  sockaddr local_98 [7];
  long local_20;
  
  uVar1 = caml_local_roots;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_14a8 = 0;
  local_14b0 = 0;
  local_14b8 = (undefined8 *)0x0;
  local_14f8 = caml_local_roots;
  caml_local_roots = &local_14f8;
  local_14e8 = 1;
  local_14f0 = 3;
  local_14e0 = &local_14a8;
  local_14d8 = &local_14b0;
  local_14d0 = &local_14b8;
  get_sockaddr(param_1,local_98,&local_149c);
  __flags = caml_convert_flag_list(param_2);
  caml_enter_blocking_section();
  iVar2 = getnameinfo(local_98,local_149c,local_1498,0x1000,local_498,0x400,__flags);
  caml_leave_blocking_section();
  if (iVar2 != 0) {
    caml_raise_not_found();
  }
  local_14a8 = caml_copy_string(local_1498);
  local_14b0 = caml_copy_string(local_498);
  local_14b8 = (undefined8 *)caml_alloc_small(2,0);
  *local_14b8 = local_14a8;
  local_14b8[1] = local_14b0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
    caml_local_roots = (undefined8 *)uVar1;
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  caml_local_roots = (undefined8 *)uVar1;
  return local_14b8;
}



void unix_getpeername(long param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  socklen_t local_8c;
  sockaddr local_88 [7];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0x70;
  iVar1 = getpeername((int)(param_1 >> 1),local_88,&local_8c);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435ad1,0);
  }
  alloc_sockaddr(local_88,local_8c,0xffffffff);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



long unix_getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = getpid();
  return (long)_Var1 * 2 + 1;
}



long unix_getppid(void)

{
  __pid_t _Var1;
  
  _Var1 = getppid();
  return (long)_Var1 * 2 + 1;
}



void alloc_proto_entry(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 1;
  local_28 = 1;
  local_68 = caml_local_roots;
  local_58 = 1;
  local_60 = 2;
  local_50 = local_20;
  local_48 = &local_28;
  caml_local_roots = (undefined *)&local_68;
  local_20[0] = caml_copy_string(*param_1);
  local_28 = caml_copy_string_array(param_1[1]);
  puVar1 = (undefined8 *)caml_alloc_small(3,0);
  *puVar1 = local_20[0];
  puVar1[1] = local_28;
  puVar1[2] = (long)*(int *)(param_1 + 2) * 2 + 1;
  caml_local_roots = (undefined *)local_68;
  return;
}



void unix_getprotobynumber(long param_1)

{
  protoent *ppVar1;
  
  ppVar1 = getprotobynumber((int)(param_1 >> 1));
  if (ppVar1 == (protoent *)0x0) {
    ppVar1 = (protoent *)caml_raise_not_found();
  }
  alloc_proto_entry(ppVar1);
  return;
}



void unix_getprotobyname(char *param_1)

{
  protoent *ppVar1;
  
  ppVar1 = getprotobyname(param_1);
  if (ppVar1 == (protoent *)0x0) {
    ppVar1 = (protoent *)caml_raise_not_found();
  }
  alloc_proto_entry(ppVar1);
  return;
}



void alloc_passwd_entry(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 1;
  local_28 = 1;
  local_30 = 1;
  local_38 = 1;
  local_40 = 1;
  local_88 = caml_local_roots;
  local_78 = 1;
  local_80 = 5;
  local_70 = local_20;
  local_68 = &local_28;
  local_60 = &local_30;
  local_58 = &local_38;
  local_50 = &local_40;
  caml_local_roots = (undefined *)&local_88;
  local_20[0] = caml_copy_string(*param_1);
  local_28 = caml_copy_string(param_1[1]);
  local_30 = caml_copy_string(param_1[3]);
  local_38 = caml_copy_string(param_1[4]);
  local_40 = caml_copy_string(param_1[5]);
  puVar1 = (undefined8 *)caml_alloc_small(7,0);
  *puVar1 = local_20[0];
  puVar1[1] = local_28;
  puVar1[2] = (ulong)*(uint *)(param_1 + 2) * 2 + 1;
  puVar1[3] = (ulong)*(uint *)((long)param_1 + 0x14) * 2 + 1;
  puVar1[4] = local_30;
  puVar1[5] = local_38;
  puVar1[6] = local_40;
  caml_local_roots = (undefined *)local_88;
  return;
}



void unix_getpwuid(long param_1)

{
  passwd *ppVar1;
  
  ppVar1 = getpwuid((__uid_t)(param_1 >> 1));
  if (ppVar1 == (passwd *)0x0) {
    ppVar1 = (passwd *)caml_raise_not_found();
  }
  alloc_passwd_entry(ppVar1);
  return;
}



void unix_getpwnam(char *param_1)

{
  passwd *ppVar1;
  
  ppVar1 = getpwnam(param_1);
  if (ppVar1 == (passwd *)0x0) {
    ppVar1 = (passwd *)caml_raise_not_found();
  }
  alloc_passwd_entry(ppVar1);
  return;
}



void unix_gettimeofday(void)

{
  int iVar1;
  timeval local_18;
  
  iVar1 = gettimeofday(&local_18,(__timezone_ptr_t)0x0);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435add,0);
  }
  caml_copy_double((double)local_18.tv_usec / 1000000.0 + (double)local_18.tv_sec);
  return;
}



void alloc_service_entry(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 1;
  local_28 = 1;
  local_30 = 1;
  local_78 = caml_local_roots;
  local_68 = 1;
  local_70 = 3;
  local_60 = local_20;
  local_58 = &local_28;
  local_50 = &local_30;
  caml_local_roots = (undefined *)&local_78;
  local_20[0] = caml_copy_string(*param_1);
  local_28 = caml_copy_string_array(param_1[1]);
  local_30 = caml_copy_string(param_1[3]);
  puVar1 = (undefined8 *)caml_alloc_small(4,0);
  *puVar1 = local_20[0];
  puVar1[1] = local_28;
  puVar1[2] = (ulong)(ushort)((ushort)*(undefined4 *)(param_1 + 2) >> 8 |
                             (ushort)*(undefined4 *)(param_1 + 2) << 8) * 2 + 1;
  puVar1[3] = local_30;
  caml_local_roots = (undefined *)local_78;
  return;
}



void unix_getservbyport(long param_1,char *param_2)

{
  servent *psVar1;
  ushort uVar2;
  
  uVar2 = (ushort)(param_1 >> 1);
  psVar1 = getservbyport((uint)(ushort)(uVar2 >> 8 | uVar2 << 8),param_2);
  if (psVar1 == (servent *)0x0) {
    psVar1 = (servent *)caml_raise_not_found();
  }
  alloc_service_entry(psVar1);
  return;
}



void unix_getservbyname(char *param_1,char *param_2)

{
  servent *psVar1;
  
  psVar1 = getservbyname(param_1,param_2);
  if (psVar1 == (servent *)0x0) {
    psVar1 = (servent *)caml_raise_not_found();
  }
  alloc_service_entry(psVar1);
  return;
}



void unix_getsockname(long param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  socklen_t local_8c;
  sockaddr local_88 [7];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0x70;
  iVar1 = getsockname((int)(param_1 >> 1),local_88,&local_8c);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435af8,0);
  }
  alloc_sockaddr(local_88,local_8c,0xffffffff);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



long unix_getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = getuid();
  return (ulong)_Var1 * 2 + 1;
}



void alloc_tm(int *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)caml_alloc_small(9,0);
  *plVar1 = (long)*param_1 * 2 + 1;
  plVar1[1] = (long)param_1[1] * 2 + 1;
  plVar1[2] = (long)param_1[2] * 2 + 1;
  plVar1[3] = (long)param_1[3] * 2 + 1;
  plVar1[4] = (long)param_1[4] * 2 + 1;
  plVar1[5] = (long)param_1[5] * 2 + 1;
  plVar1[6] = (long)param_1[6] * 2 + 1;
  plVar1[7] = (long)param_1[7] * 2 + 1;
  plVar1[8] = (-(ulong)(param_1[8] == 0) & 0xfffffffffffffffe) + 3;
  return;
}



void unix_mktime(long *param_1)

{
  time_t tVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  tm local_58;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = 1;
  local_98 = caml_local_roots;
  local_88 = 1;
  local_90 = 2;
  local_80 = &local_10;
  local_78 = &local_18;
  local_58.tm_sec = (int)(*param_1 >> 1);
  local_58.tm_min = (int)(param_1[1] >> 1);
  local_58.tm_hour = (int)(param_1[2] >> 1);
  local_58.tm_mday = (int)(param_1[3] >> 1);
  local_58.tm_mon = (int)(param_1[4] >> 1);
  local_58.tm_year = (int)(param_1[5] >> 1);
  local_58.tm_wday = (int)(param_1[6] >> 1);
  local_58.tm_yday = (int)(param_1[7] >> 1);
  local_58.tm_isdst = -1;
  caml_local_roots = (undefined *)&local_98;
  tVar1 = mktime(&local_58);
  if (tVar1 == -1) {
    unix_error(0x22,&UINT_00435b04,0);
  }
  local_10 = alloc_tm(&local_58);
  local_18 = caml_copy_double((double)tVar1);
  puVar2 = (undefined8 *)caml_alloc_small(2,0);
  *puVar2 = local_18;
  puVar2[1] = local_10;
  caml_local_roots = (undefined *)local_98;
  return;
}



void unix_localtime(double *param_1)

{
  tm *ptVar1;
  long local_10 [2];
  
  local_10[0] = (long)*param_1;
  ptVar1 = localtime(local_10);
  if (ptVar1 == (tm *)0x0) {
    ptVar1 = (tm *)unix_error(0x16,0x435b0b,0);
  }
  alloc_tm(ptVar1);
  return;
}



void unix_gmtime(double *param_1)

{
  tm *ptVar1;
  long local_10 [2];
  
  local_10[0] = (long)*param_1;
  ptVar1 = gmtime(local_10);
  if (ptVar1 == (tm *)0x0) {
    ptVar1 = (tm *)unix_error(0x16,0x435b15,0);
  }
  alloc_tm(ptVar1);
  return;
}



long unix_isatty(long param_1)

{
  int iVar1;
  
  iVar1 = isatty((int)(param_1 >> 1));
  return (-(ulong)(iVar1 == 0) & 0xfffffffffffffffe) + 3;
}



void unix_convert_itimer(long *param_1)

{
  double *pdVar1;
  
  pdVar1 = (double *)caml_alloc_small(2,0xfe);
  *pdVar1 = (double)param_1[1] / 1000000.0 + (double)*param_1;
  pdVar1[1] = (double)param_1[3] / 1000000.0 + (double)param_1[2];
  return;
}



void unix_getitimer(long param_1)

{
  int iVar1;
  itimerval iStack40;
  
  iVar1 = getitimer((&itimers)[(int)(param_1 >> 1)],&iStack40);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435b1c,0);
  }
  unix_convert_itimer(&iStack40);
  return;
}



void unix_set_timeval(double param_1,long *param_2)

{
  double dVar1;
  double local_20 [2];
  
  dVar1 = modf(param_1,local_20);
  *param_2 = (long)local_20[0];
  dVar1 = ceil(dVar1 * 1000000.0);
  param_2[1] = (long)dVar1;
  if (999999 < (long)dVar1) {
    *param_2 = (long)local_20[0] + 1;
    param_2[1] = 0;
  }
  return;
}



void unix_setitimer(long param_1,undefined8 *param_2)

{
  int iVar1;
  itimerval iStack88;
  itimerval local_38;
  
  unix_set_timeval(*param_2,&local_38);
  unix_set_timeval(param_2[1]);
  iVar1 = setitimer((&itimers)[(int)(param_1 >> 1)],&local_38,&iStack88);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435b26,0);
  }
  unix_convert_itimer(&iStack88);
  return;
}



undefined8 unix_kill(long param_1)

{
  int iVar1;
  
  iVar1 = caml_convert_signal_number();
  iVar1 = kill((__pid_t)(param_1 >> 1),iVar1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435b3c,0);
  }
  return 1;
}



undefined8 unix_link(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = link(param_1,param_2);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435bb8,param_2);
  }
  return 1;
}



undefined8 unix_listen(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = listen((int)(param_1 >> 1),(int)(param_2 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435b41,0);
  }
  return 1;
}



undefined8 unix_lockf(ulong param_1,long param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  short local_28;
  undefined2 local_26;
  long local_20;
  long local_18;
  
  local_26 = 1;
  local_18 = param_3 >> 1;
  if (local_18 < 0) {
    local_20 = local_18;
    local_18 = -local_18;
  }
  else {
    local_20 = 0;
  }
  if ((uint)(param_2 >> 1) < 6) {
    iVar1 = (int)(param_1 >> 1);
    switch(param_2 >> 1 & 0xffffffff) {
    case 0:
      local_28 = 2;
      iVar1 = fcntl(iVar1,6,&local_28);
      break;
    case 1:
      local_28 = 1;
      caml_enter_blocking_section();
      iVar1 = fcntl(iVar1,7,&local_28);
      caml_leave_blocking_section();
      break;
    case 2:
      local_28 = 1;
      iVar1 = fcntl(iVar1,6,&local_28);
      break;
    case 3:
      local_28 = 1;
      iVar1 = fcntl(iVar1,5,&local_28);
      if (iVar1 != -1) {
        if (local_28 == 2) {
          return 1;
        }
        piVar2 = __errno_location();
        *piVar2 = 0xd;
      }
      goto LAB_00420c6f;
    case 4:
      local_28 = 0;
      caml_enter_blocking_section();
      iVar1 = fcntl(iVar1,7,&local_28);
      caml_leave_blocking_section();
      break;
    case 5:
      local_28 = 0;
      iVar1 = fcntl(iVar1,6,&local_28);
    }
    if (iVar1 != -1) {
      return 1;
    }
  }
  else {
    piVar2 = __errno_location();
    *piVar2 = 0x16;
  }
LAB_00420c6f:
                    // WARNING: Subroutine does not return
  uerror(&UINT_00435b48,0);
}



void unix_lseek_64(long param_1,long param_2,long param_3)

{
  __off64_t _Var1;
  
  _Var1 = lseek64((int)(param_1 >> 1),*(__off64_t *)(param_2 + 8),
                  (&seek_command_table)[(int)(param_3 >> 1)]);
  if (_Var1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435b68,0);
  }
  caml_copy_int64(_Var1);
  return;
}



long unix_lseek(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = lseek64((int)(param_1 >> 1),param_2 >> 1,(&seek_command_table)[(int)(param_3 >> 1)]);
  if (lVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435b68,0);
  }
  if (0x3fffffffffffffff < lVar1) {
    lVar1 = unix_error(0x4b,&UINT_00435b68,0);
  }
  return lVar1 * 2 + 1;
}



undefined8 unix_mkdir(char *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = mkdir(param_1,(__mode_t)(param_2 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435b7c,param_1);
  }
  return 1;
}



undefined8 unix_mkfifo(char *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = mkfifo(param_1,(__mode_t)(param_2 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435b82,param_1);
  }
  return 1;
}



long unix_nice(long param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  *piVar2 = 0;
  iVar1 = nice((int)(param_1 >> 1));
  if ((iVar1 == -1) && (*piVar2 != 0)) {
                    // WARNING: Subroutine does not return
    uerror(0x435b89,0);
  }
  return (long)iVar1 * 2 + 1;
}



long unix_open(char *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  char *__dest;
  long local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  char **local_40;
  undefined8 *local_38;
  long *local_30;
  
  uVar1 = caml_local_roots;
  local_58 = caml_local_roots;
  caml_local_roots = &local_58;
  local_48 = 1;
  local_50 = 3;
  local_40 = &local_60;
  local_38 = &local_68;
  local_30 = &local_70;
  local_70 = param_3;
  local_68 = param_2;
  local_60 = param_1;
  iVar2 = caml_convert_flag_list(param_2,open_flag_table);
  lVar3 = caml_string_length(local_60);
  __dest = (char *)caml_stat_alloc(lVar3 + 1);
  strcpy(__dest,local_60);
  caml_enter_blocking_section();
  iVar2 = open64(__dest,iVar2,local_70 >> 1);
  caml_leave_blocking_section();
  caml_stat_free(__dest);
  if (iVar2 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435b8e,local_60);
  }
  caml_local_roots = (undefined8 *)uVar1;
  return (long)iVar2 * 2 + 1;
}



void unix_opendir(char *param_1)

{
  DIR *pDVar1;
  DIR **ppDVar2;
  
  pDVar1 = opendir(param_1);
  if (pDVar1 == (DIR *)0x0) {
                    // WARNING: Subroutine does not return
    uerror(0x435b93,param_1);
  }
  ppDVar2 = (DIR **)caml_alloc_small(1,0xfb);
  *ppDVar2 = pDVar1;
  return;
}



void unix_pipe(void)

{
  int iVar1;
  long *plVar2;
  int local_18;
  int local_14;
  
  iVar1 = pipe(&local_18);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435b9b,0);
  }
  plVar2 = (long *)caml_alloc_small(2,0);
  *plVar2 = (long)local_18 * 2 + 1;
  plVar2[1] = (long)local_14 * 2 + 1;
  return;
}



undefined8 unix_putenv(void *param_1,void *param_2)

{
  int iVar1;
  size_t __n;
  size_t __n_00;
  char *__string;
  
  __n = caml_string_length();
  __n_00 = caml_string_length(param_2);
  __string = (char *)caml_stat_alloc(__n_00 + __n + 2);
  memmove(__string,param_1,__n);
  __string[__n] = '=';
  memmove(__string + __n + 1,param_2,__n_00);
  __string[__n_00 + __n + 1] = '\0';
  iVar1 = putenv(__string);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435ba0,param_1);
  }
  return 1;
}



long unix_read(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_4070;
  undefined8 local_4068;
  undefined8 local_4060;
  undefined8 local_4058;
  long *local_4050;
  undefined local_4028 [16392];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_4068 = caml_local_roots;
  caml_local_roots = &local_4068;
  local_4058 = 1;
  local_4060 = 1;
  local_4050 = &local_4070;
  param_4 = param_4 >> 1;
  local_4070 = param_2;
  caml_enter_blocking_section();
  if (0x4000 < param_4) {
    param_4 = 0x4000;
  }
  iVar1 = __read_chk(param_1 >> 1,local_4028,(long)(int)param_4,0x4000);
  caml_leave_blocking_section();
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435ba7,0);
  }
  memmove((void *)((param_3 >> 1) + local_4070),local_4028,(long)iVar1);
  caml_local_roots = (undefined8 *)local_4068;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (long)iVar1 * 2 + 1;
}



void unix_readdir(DIR **param_1)

{
  dirent64 *pdVar1;
  DIR *__dirp;
  
  __dirp = *param_1;
  if (__dirp == (DIR *)0x0) {
    __dirp = (DIR *)0x9;
    unix_error(9,&UINT_00435bac,0);
  }
  pdVar1 = readdir64(__dirp);
  if (pdVar1 == (dirent64 *)0x0) {
    pdVar1 = (dirent64 *)caml_raise_end_of_file();
  }
  caml_copy_string(pdVar1->d_name);
  return;
}



void unix_readlink(char *param_1)

{
  ssize_t sVar1;
  long in_FS_OFFSET;
  char acStack4120 [4104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  sVar1 = readlink(param_1,acStack4120,0xfff);
  if ((int)sVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435bb4,param_1);
  }
  acStack4120[(int)sVar1] = '\0';
  caml_copy_string(acStack4120);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



undefined8 unix_rename(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = rename(param_1,param_2);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435bbd,param_1);
  }
  return 1;
}



undefined8 unix_rewinddir(DIR **param_1)

{
  DIR *__dirp;
  
  __dirp = *param_1;
  if (__dirp == (DIR *)0x0) {
    __dirp = (DIR *)0x9;
    unix_error(9,&UINT_00435bc4,0);
  }
  rewinddir(__dirp);
  return 1;
}



undefined8 unix_rmdir(char *param_1)

{
  int iVar1;
  
  iVar1 = rmdir(param_1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435bce,param_1);
  }
  return 1;
}



void fdlist_to_fdset(ulong *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  
  puVar6 = param_2;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (param_1 != (ulong *)0x1) {
    do {
      uVar3 = *param_1 >> 1;
      iVar1 = (int)uVar3;
      iVar5 = iVar1 + 0x3f;
      if (-1 < iVar1) {
        iVar5 = iVar1;
      }
      bVar2 = (char)(uVar3 >> 0x18) >> 0x1f;
      param_2[iVar5 >> 6] =
           param_2[iVar5 >> 6] | 1 << (((char)uVar3 + (bVar2 >> 2) & 0x3f) - (bVar2 >> 2) & 0x3f);
      if (*param_3 < iVar1) {
        *param_3 = iVar1;
      }
      param_1 = (ulong *)param_1[1];
    } while (param_1 != (ulong *)0x1);
  }
  return;
}



long * fdset_to_fdlist(ulong *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulong **local_50;
  long **local_48;
  long *local_28;
  ulong *local_20 [2];
  
  local_28 = (long *)0x1;
  local_68 = caml_local_roots;
  local_58 = 1;
  local_60 = 2;
  local_50 = local_20;
  local_48 = &local_28;
  caml_local_roots = &local_68;
  local_20[0] = param_1;
  if (param_1 != (ulong *)0x1) {
    do {
      iVar1 = (int)(*local_20[0] >> 1);
      iVar4 = iVar1 + 0x3f;
      if (-1 < iVar1) {
        iVar4 = iVar1;
      }
      uVar2 = (uint)(iVar1 >> 0x1f) >> 0x1a;
      if ((*(ulong *)(param_2 + (long)(iVar4 >> 6) * 8) >>
           ((ulong)((iVar1 + uVar2 & 0x3f) - uVar2) & 0x3f) & 1) != 0) {
        plVar3 = (long *)caml_alloc_small(2,0);
        *plVar3 = (long)iVar1 * 2 + 1;
        plVar3[1] = (long)local_28;
        local_28 = plVar3;
      }
      local_20[0] = (ulong *)local_20[0][1];
    } while (local_20[0] != (ulong *)0x1);
  }
  caml_local_roots = (undefined8 *)local_68;
  return local_28;
}



void unix_select(undefined8 param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  int iVar2;
  undefined8 *puVar3;
  timeval *__timeout;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined local_1f8 [128];
  undefined local_178 [128];
  undefined local_f8 [128];
  __fd_mask local_78;
  __fd_mask local_70;
  __fd_mask local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  timeval local_38;
  int local_1c [3];
  
  local_78 = (__fd_mask)caml_local_roots;
  caml_local_roots = local_f8 + 0x80;
  local_68 = 1;
  local_70 = 3;
  local_60 = &local_200;
  local_58 = &local_208;
  local_50 = &local_210;
  local_1c[0] = -1;
  local_210 = param_3;
  local_208 = param_2;
  local_200 = param_1;
  fdlist_to_fdset(param_1,local_f8,local_1c);
  fdlist_to_fdset(local_208,local_178,local_1c);
  fdlist_to_fdset(local_210,local_1f8,local_1c);
  dVar1 = *param_4;
  __timeout = (timeval *)0x0;
  if (0.0 <= dVar1) {
    local_38.tv_sec = (__time_t)(int)dVar1;
    local_38.tv_usec = (__suseconds_t)(int)((dVar1 - (double)local_38.tv_sec) * 1000000.0);
    __timeout = (timeval *)(local_f8 + 0xc0);
  }
  caml_enter_blocking_section();
  iVar2 = select(local_1c[0] + 1,(fd_set *)local_f8,(fd_set *)local_178,(fd_set *)local_1f8,
                 __timeout);
  caml_leave_blocking_section();
  if (iVar2 != -1) {
    local_200 = fdset_to_fdlist(local_200,local_f8);
    local_208 = fdset_to_fdlist(local_208,local_178);
    local_210 = fdset_to_fdlist(local_210,local_1f8);
    puVar3 = (undefined8 *)caml_alloc_small(3,0);
    *puVar3 = local_200;
    puVar3[1] = local_208;
    puVar3[2] = local_210;
    caml_local_roots = (undefined *)local_78;
    return;
  }
                    // WARNING: Subroutine does not return
  uerror(&UINT_00435bd4,0);
}



long unix_sendto_native(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                       undefined8 param_6)

{
  int __flags;
  ssize_t sVar1;
  long lVar2;
  long in_FS_OFFSET;
  socklen_t local_40bc;
  undefined local_40b8 [16384];
  sockaddr local_b8 [7];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __flags = caml_convert_flag_list(param_5,msg_flag_table);
  get_sockaddr(param_6,local_b8,&local_40bc);
  lVar2 = 0x4000;
  if (param_4 >> 1 < 0x4001) {
    lVar2 = param_4 >> 1;
  }
  __memmove_chk(local_40b8,(param_3 >> 1) + param_2,lVar2);
  caml_enter_blocking_section();
  sVar1 = sendto((int)(param_1 >> 1),local_40b8,(long)(int)lVar2,__flags,local_b8,local_40bc);
  caml_leave_blocking_section();
  if ((int)sVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435be8,0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (long)(int)sVar1 * 2 + 1;
}



void unix_sendto(undefined8 *param_1)

{
  unix_sendto_native(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  return;
}



long unix_send(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  int __flags;
  ssize_t sVar1;
  long in_FS_OFFSET;
  undefined auStack16440 [16392];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __flags = caml_convert_flag_list(param_5,msg_flag_table);
  param_4 = param_4 >> 1;
  if (0x4000 < param_4) {
    param_4 = 0x4000;
  }
  __memmove_chk(auStack16440,(param_3 >> 1) + param_2,param_4);
  caml_enter_blocking_section();
  sVar1 = send((int)(param_1 >> 1),auStack16440,(long)(int)param_4,__flags);
  caml_leave_blocking_section();
  if ((int)sVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435bef,0);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (long)(int)sVar1 * 2 + 1;
}



void unix_recvfrom(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_4100;
  undefined8 local_40f8;
  undefined8 local_40f0;
  undefined8 local_40e8;
  long *local_40e0;
  long *local_40d8;
  long local_40b8;
  undefined4 local_40ac;
  undefined local_40a8 [16384];
  undefined local_a8 [120];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40b8 = 1;
  local_4100 = param_2;
  uVar1 = caml_convert_flag_list(param_5,msg_flag_table);
  local_40f8 = caml_local_roots;
  caml_local_roots = &local_40f8;
  local_40e8 = 1;
  local_40f0 = 2;
  local_40e0 = &local_4100;
  local_40d8 = &local_40b8;
  param_4 = param_4 >> 1;
  local_40ac = 0x70;
  caml_enter_blocking_section();
  if (0x4000 < param_4) {
    param_4 = 0x4000;
  }
  iVar2 = __recvfrom_chk(param_1 >> 1,local_40a8,(long)(int)param_4,0x4000,uVar1,local_a8,
                         &local_40ac);
  caml_leave_blocking_section();
  if (iVar2 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435bf4,0);
  }
  memmove((void *)((param_3 >> 1) + local_4100),local_40a8,(long)iVar2);
  local_40b8 = alloc_sockaddr(local_a8,local_40ac,0xffffffff);
  plVar3 = (long *)caml_alloc_small(2,0);
  *plVar3 = (long)iVar2 * 2 + 1;
  plVar3[1] = local_40b8;
  caml_local_roots = (undefined8 *)local_40f8;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



long unix_recv(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_4080;
  undefined8 local_4078;
  undefined8 local_4070;
  undefined8 local_4068;
  long *local_4060;
  undefined local_4038 [16392];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_4080 = param_2;
  uVar1 = caml_convert_flag_list(param_5,msg_flag_table);
  local_4078 = caml_local_roots;
  caml_local_roots = &local_4078;
  local_4068 = 1;
  local_4070 = 1;
  local_4060 = &local_4080;
  param_4 = param_4 >> 1;
  caml_enter_blocking_section();
  if (0x4000 < param_4) {
    param_4 = 0x4000;
  }
  iVar2 = __recv_chk(param_1 >> 1,local_4038,(long)(int)param_4,0x4000,uVar1);
  caml_leave_blocking_section();
  if (iVar2 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435bfd,0);
  }
  memmove((void *)((param_3 >> 1) + local_4080),local_4038,(long)iVar2);
  caml_local_roots = (undefined8 *)local_4078;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (long)iVar2 * 2 + 1;
}



undefined8 unix_setgid(long param_1)

{
  int iVar1;
  
  iVar1 = setgid((__gid_t)(param_1 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435c02,0);
  }
  return 1;
}



long unix_setsid(void)

{
  __pid_t _Var1;
  
  _Var1 = setsid();
  return (long)_Var1 * 2 + 1;
}



undefined8 unix_setuid(long param_1)

{
  int iVar1;
  
  iVar1 = setuid((__uid_t)(param_1 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435c09,0);
  }
  return 1;
}



undefined8 unix_shutdown(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = shutdown((int)(param_1 >> 1),(&shutdown_command_table)[(int)(param_2 >> 1)]);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435c10,0);
  }
  return 1;
}



void decode_sigset(long *param_1,sigset_t *param_2)

{
  int __signo;
  
  sigemptyset(param_2);
  if (param_1 != (long *)0x1) {
    do {
      __signo = caml_convert_signal_number(*param_1 >> 1);
      sigaddset(param_2,__signo);
      param_1 = (long *)param_1[1];
    } while (param_1 != (long *)0x1);
  }
  return;
}



undefined8 unix_sigsuspend(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  decode_sigset(param_1,&stack0xffffffffffffff78);
  caml_enter_blocking_section();
  iVar1 = sigsuspend((sigset_t *)&stack0xffffffffffffff78);
  caml_leave_blocking_section();
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    if (*piVar2 != 4) {
                    // WARNING: Subroutine does not return
      uerror(&UINT_00435c28,0);
    }
  }
  return 1;
}



long * encode_sigset(sigset_t *param_1)

{
  int iVar1;
  long *plVar2;
  int __signo;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long **local_50;
  long *local_20;
  
  local_20 = (long *)0x1;
  local_68 = caml_local_roots;
  local_58 = 1;
  local_60 = 1;
  local_50 = &local_20;
  __signo = 1;
  caml_local_roots = &local_68;
  do {
    iVar1 = sigismember(param_1,__signo);
    if (0 < iVar1) {
      plVar2 = (long *)caml_alloc_small(2);
      iVar1 = caml_rev_convert_signal_number(__signo);
      *plVar2 = (long)iVar1 * 2 + 1;
      plVar2[1] = (long)local_20;
      local_20 = plVar2;
    }
    __signo = __signo + 1;
  } while (__signo != 0x41);
  caml_local_roots = (undefined8 *)local_68;
  return local_20;
}



void unix_sigpending(void)

{
  int iVar1;
  
  iVar1 = sigpending((sigset_t *)&stack0xffffffffffffff78);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435c33,0);
  }
  encode_sigset(&stack0xffffffffffffff78);
  return;
}



void unix_sigprocmask(long param_1,undefined8 param_2)

{
  uint __how;
  int iVar1;
  undefined auStack280 [264];
  
  __how = (&sigprocmask_cmd)[(int)(param_1 >> 1)];
  decode_sigset(param_2,(sigset_t *)(auStack280 + 0x80));
  caml_enter_blocking_section();
  iVar1 = sigprocmask(__how,(sigset_t *)(auStack280 + 0x80),(sigset_t *)auStack280);
  caml_leave_blocking_section();
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435c3e,0);
  }
  encode_sigset(auStack280);
  return;
}



undefined8 unix_sleep(long param_1)

{
  caml_enter_blocking_section();
  sleep((uint)(param_1 >> 1));
  caml_leave_blocking_section();
  return 1;
}



long unix_socket(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  iVar1 = socket(*(int *)(socket_domain_table + (long)(int)(param_1 >> 1) * 4),
                 *(int *)(socket_type_table + (long)(int)(param_2 >> 1) * 4),(int)(param_3 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435c58,0);
  }
  return (long)iVar1 * 2 + 1;
}



void get_sockaddr(void **param_1,undefined8 *param_2,int *param_3)

{
  void *__src;
  undefined8 *puVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + -1) == '\0') {
    __src = *param_1;
    uVar3 = caml_string_length(__src);
    *(undefined2 *)param_2 = 1;
    uVar4 = uVar3;
    if (0x6b < uVar3) {
      uVar4 = unix_error(0x24,"",__src);
    }
    memmove((void *)((long)param_2 + 2),__src,uVar4 + 1);
    *param_3 = (int)uVar3 + 2;
  }
  else {
    if (*(char *)(param_1 + -1) == '\x01') {
      lVar5 = caml_string_length(*param_1);
      if (lVar5 == 0x10) {
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        *(undefined4 *)(param_2 + 3) = 0;
        *(undefined2 *)param_2 = 10;
        puVar1 = (undefined8 *)*param_1;
        param_2[1] = *puVar1;
        param_2[2] = puVar1[1];
        uVar2 = (ushort)((long)param_1[1] >> 1);
        *(ushort *)((long)param_2 + 2) = uVar2 >> 8 | uVar2 << 8;
        *param_3 = 0x1c;
      }
      else {
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined2 *)param_2 = 2;
                    // WARNING: Load size is inaccurate
        *(undefined4 *)((long)param_2 + 4) = **param_1;
        uVar2 = (ushort)((long)param_1[1] >> 1);
        *(ushort *)((long)param_2 + 2) = uVar2 >> 8 | uVar2 << 8;
        *param_3 = 0x10;
      }
    }
  }
  return;
}



void alloc_inet6_addr(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)caml_alloc_string(0x10);
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  return;
}



void alloc_inet_addr(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)caml_alloc_string(4);
  *puVar1 = *param_1;
  return;
}



void alloc_sockaddr(short *param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  undefined8 *puVar2;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_20 [2];
  
  sVar1 = *param_1;
  if (sVar1 == 2) {
    local_20[0] = alloc_inet_addr(param_1 + 2);
    local_68 = caml_local_roots;
    local_58 = 1;
    local_60 = 1;
    local_50 = local_20;
    caml_local_roots = (undefined *)&local_68;
    puVar2 = (undefined8 *)caml_alloc_small(2,1);
    *puVar2 = local_20[0];
    puVar2[1] = (ulong)(ushort)((ushort)param_1[1] >> 8 | param_1[1] << 8) * 2 + 1;
    caml_local_roots = (undefined *)local_68;
  }
  else {
    if (sVar1 == 10) {
      local_20[0] = alloc_inet6_addr(param_1 + 4);
      local_68 = caml_local_roots;
      local_58 = 1;
      local_60 = 1;
      local_50 = local_20;
      caml_local_roots = (undefined *)&local_68;
      puVar2 = (undefined8 *)caml_alloc_small(2,1);
      *puVar2 = local_20[0];
      puVar2[1] = (ulong)(ushort)((ushort)param_1[1] >> 8 | param_1[1] << 8) * 2 + 1;
      caml_local_roots = (undefined *)local_68;
    }
    else {
      if (sVar1 == 1) {
        local_20[0] = caml_copy_string(param_1 + 1);
        local_68 = caml_local_roots;
        local_58 = 1;
        local_60 = 1;
        local_50 = local_20;
        caml_local_roots = (undefined *)&local_68;
        puVar2 = (undefined8 *)caml_alloc_small(1,0);
        *puVar2 = local_20[0];
        caml_local_roots = (undefined *)local_68;
      }
      else {
        if (param_3 != -1) {
          close(param_3);
        }
        unix_error(0x61,"",0);
      }
    }
  }
  return;
}



void unix_socketpair(long param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  int local_18;
  int local_14;
  
  iVar1 = socketpair(*(int *)(socket_domain_table + (long)(int)(param_1 >> 1) * 4),
                     *(int *)(socket_type_table + (long)(int)(param_2 >> 1) * 4),(int)(param_3 >> 1)
                     ,&local_18);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435c5f,0);
  }
  plVar2 = (long *)caml_alloc_small(2,0);
  *plVar2 = (long)local_18 * 2 + 1;
  plVar2[1] = (long)local_14 * 2 + 1;
  return;
}



undefined8
unix_setsockopt_aux(undefined8 param_1,uint param_2,int param_3,int param_4,long param_5,
                   double *param_6)

{
  ulong uVar1;
  int iVar2;
  int extraout_EDX;
  long lVar3;
  socklen_t __optlen;
  ulong local_18;
  long local_10;
  
  if (param_2 == 2) {
    uVar1 = (local_18 & 0xffffffff00000000 | (ulong)param_6 & 0xffffffff) ^ 1;
    local_18 = uVar1 & 0xffffffff00000001;
    __optlen = 8;
    if ((((uint)param_6 ^ 1) & 1) != 0) {
      local_18 = uVar1 & 1 | ((long)*param_6 >> 1) << 0x20;
    }
  }
  else {
    if (param_2 < 2) {
      local_18 = local_18 & 0xffffffff00000000 | (long)param_6 >> 1 & 0xffffffffU;
      __optlen = 4;
    }
    else {
      if (param_2 == 3) {
        local_18 = SEXT48((int)*param_6);
        local_10 = (long)(int)((*param_6 - (double)local_18) * 1000000.0);
        __optlen = 0x10;
      }
      else {
        lVar3 = 0x16;
        param_3 = unix_error(0x16,param_1,0);
        __optlen = (socklen_t)param_5;
        param_5 = lVar3;
        param_4 = extraout_EDX;
      }
    }
  }
  iVar2 = setsockopt((int)(param_5 >> 1),param_3,param_4,&local_18,__optlen);
  if (iVar2 == -1) {
                    // WARNING: Subroutine does not return
    uerror(param_1,0);
  }
  return 1;
}



void unix_setsockopt(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  uVar1 = param_1 >> 1 & 0xffffffff;
  puVar2 = (undefined4 *)((long)(int)(param_3 >> 1) * 8 + *(long *)(sockopt_table + uVar1 * 8));
  unix_setsockopt_aux(*(undefined8 *)(setsockopt_fun_name + uVar1 * 8),param_1 >> 1,*puVar2,
                      puVar2[1],param_2,param_4);
  return;
}



long * unix_getsockopt_aux(undefined8 param_1,undefined4 param_2,int param_3,int param_4,
                          long param_5)

{
  int iVar1;
  long *plVar2;
  int extraout_EDX;
  undefined8 uVar3;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long *local_60;
  int local_38;
  int iStack52;
  long local_30;
  long local_28;
  socklen_t local_1c [3];
  
  switch(param_2) {
  case 0:
  case 1:
  case 4:
    local_1c[0] = 4;
    break;
  case 2:
    local_1c[0] = 8;
    break;
  case 3:
    local_1c[0] = 0x10;
    break;
  default:
    uVar3 = param_1;
    unix_error(0x16,param_1,0);
    param_3 = (int)uVar3;
    param_4 = extraout_EDX;
  }
  iVar1 = getsockopt((int)(param_5 >> 1),param_3,param_4,&local_38,local_1c);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(param_1,0);
  }
  switch(param_2) {
  case 0:
  case 1:
    return (long *)((long)local_38 * 2 + 1);
  case 2:
    if (local_38 != 0) {
      plVar2 = (long *)caml_alloc_small(1,0);
      *plVar2 = (long)iStack52 * 2 + 1;
      return plVar2;
    }
    break;
  case 3:
    plVar2 = (long *)caml_copy_double((double)local_30 / 1000000.0 +
                                      (double)CONCAT44(iStack52,local_38));
    return plVar2;
  case 4:
    if (local_38 != 0) {
      local_28 = unix_error_of_code();
      local_78 = caml_local_roots;
      local_68 = 1;
      local_70 = 1;
      local_60 = &local_28;
      caml_local_roots = (undefined *)&local_78;
      plVar2 = (long *)caml_alloc_small(1,0);
      *plVar2 = local_28;
      caml_local_roots = (undefined *)local_78;
      return plVar2;
    }
    break;
  default:
    unix_error(0x16,param_1,0);
  }
  return (long *)0x1;
}



void unix_getsockopt(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  uVar1 = param_1 >> 1 & 0xffffffff;
  puVar2 = (undefined4 *)((long)(int)(param_3 >> 1) * 8 + *(long *)(sockopt_table + uVar1 * 8));
  unix_getsockopt_aux(*(undefined8 *)(getsockopt_fun_name + uVar1 * 8),param_1 >> 1,*puVar2,
                      puVar2[1],param_2);
  return;
}



long * stat_aux(int param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long **local_50;
  long *local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  uVar1 = caml_local_roots;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = (long *)0x0;
  local_88 = caml_local_roots;
  local_78 = 1;
  local_80 = 5;
  local_70 = &local_20;
  local_68 = &local_28;
  local_60 = &local_30;
  local_58 = &local_38;
  local_50 = &local_40;
  caml_local_roots = (undefined *)&local_88;
  local_20 = caml_copy_double((double)param_2[9]);
  local_28 = caml_copy_double((double)param_2[0xb]);
  local_30 = caml_copy_double((double)param_2[0xd]);
  if (param_1 == 0) {
    local_38 = param_2[6] * 2 + 1;
  }
  else {
    local_38 = caml_copy_int64(param_2[6]);
  }
  local_40 = (long *)caml_alloc_small(0xc,0);
  *local_40 = *param_2 * 2 + 1;
  local_40[1] = param_2[1] * 2 + 1;
  plVar3 = local_40 + 2;
  lVar2 = cst_to_constr(*(uint *)(param_2 + 3) & 0xf000,file_kind_table,7,0);
  *plVar3 = lVar2;
  local_40[3] = (ulong)(*(uint *)(param_2 + 3) & 0xfff) * 2 + 1;
  local_40[4] = param_2[2] * 2 + 1;
  local_40[5] = (ulong)*(uint *)((long)param_2 + 0x1c) * 2 + 1;
  local_40[6] = (ulong)*(uint *)(param_2 + 4) * 2 + 1;
  local_40[7] = param_2[5] * 2 + 1;
  local_40[8] = local_38;
  local_40[9] = local_20;
  local_40[10] = local_28;
  local_40[0xb] = local_30;
  caml_local_roots = (undefined *)uVar1;
  return local_40;
}



void unix_fstat_64(long param_1)

{
  int iVar1;
  stat64 sStack152;
  
  iVar1 = __fxstat64(1,(int)(param_1 >> 1),&sStack152);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435d30,0);
  }
  stat_aux(1,&sStack152);
  return;
}



void unix_lstat_64(char *param_1)

{
  int iVar1;
  stat64 sStack152;
  
  iVar1 = __lxstat64(1,param_1,&sStack152);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435d36,param_1);
  }
  stat_aux(1,&sStack152);
  return;
}



void unix_stat_64(char *param_1)

{
  int iVar1;
  stat64 sStack152;
  
  iVar1 = __xstat64(1,param_1,&sStack152);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435d31,param_1);
  }
  stat_aux(1,&sStack152);
  return;
}



void unix_fstat(long param_1)

{
  int iVar1;
  stat64 sStack152;
  
  iVar1 = __fxstat64(1,(int)(param_1 >> 1),&sStack152);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435d30,0);
  }
  if ((0x3fffffffffffffff < sStack152.st_size) && ((sStack152.st_mode & 0xf000) == 0x8000)) {
    unix_error(0x4b,&UINT_00435d30,0);
  }
  stat_aux(0,&sStack152);
  return;
}



void unix_lstat(char *param_1)

{
  int iVar1;
  stat64 sStack152;
  
  iVar1 = __lxstat64(1,param_1,&sStack152);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435d36,param_1);
  }
  if ((0x3fffffffffffffff < sStack152.st_size) && ((sStack152.st_mode & 0xf000) == 0x8000)) {
    unix_error(0x4b,0x435d36,param_1);
  }
  stat_aux(0,&sStack152);
  return;
}



void unix_stat(char *param_1)

{
  int iVar1;
  stat64 sStack152;
  
  iVar1 = __xstat64(1,param_1,&sStack152);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435d31,param_1);
  }
  if ((0x3fffffffffffffff < sStack152.st_size) && ((sStack152.st_mode & 0xf000) == 0x8000)) {
    unix_error(0x4b,0x435d31,param_1);
  }
  stat_aux(0,&sStack152);
  return;
}



void unix_string_of_inet_addr(void *param_1)

{
  long lVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char acStack88 [72];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = caml_string_length();
  if (lVar1 == 0x10) {
    pcVar2 = inet_ntop(10,param_1,acStack88,0x40);
  }
  else {
    pcVar2 = inet_ntop(2,param_1,acStack88,0x40);
  }
  if (pcVar2 == (char *)0x0) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435d3c,0);
  }
  caml_copy_string(pcVar2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



undefined8 unix_symlink(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = symlink(param_1,param_2);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435d50,param_2);
  }
  return 1;
}



undefined8 unix_tcflow(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = tcflow((int)(param_1 >> 1),(&action_flag_table)[(int)(param_2 >> 1)]);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&UINT_00435d58,0);
  }
  return 1;
}



undefined8 unix_tcflush(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = tcflush((int)(param_1 >> 1),(&queue_flag_table)[(int)(param_2 >> 1)]);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435d5f,0);
  }
  return 1;
}



undefined8 unix_tcdrain(long param_1)

{
  int iVar1;
  
  iVar1 = tcdrain((int)(param_1 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435d67,0);
  }
  return 1;
}



undefined8 unix_tcsendbreak(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = tcsendbreak((int)(param_1 >> 1),(int)(param_2 >> 1));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435d6f,0);
  }
  return 1;
}



undefined8 unix_tcsetattr(long param_1,long param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint **ppuVar5;
  uint **ppuVar6;
  int __fd;
  
  __fd = (int)(param_1 >> 1);
  iVar1 = tcgetattr(__fd,(termios *)terminal_status);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435d7b,0);
  }
  if (terminal_io_descr._0_8_ == (uint *)0x4) {
LAB_00422b2e:
    iVar1 = tcsetattr(__fd,(&when_flag_table)[(int)(param_2 >> 1)],(termios *)terminal_status);
    if (iVar1 != -1) {
      return 1;
    }
                    // WARNING: Subroutine does not return
    uerror(0x435d7b,0);
  }
  puVar3 = terminal_io_descr._0_8_;
  ppuVar5 = (uint **)terminal_io_descr;
  do {
    ppuVar6 = ppuVar5 + 1;
    if (puVar3 == (uint *)0x1) {
      iVar1 = *(int *)(ppuVar5 + 3);
      iVar2 = (int)((long)*param_3 >> 1) - *(int *)(ppuVar5 + 2);
      if ((iVar2 < 0) || (iVar1 <= iVar2)) {
        unix_error(0x16,0x435d7b,0);
LAB_00422a71:
        puVar3 = &DAT_00435dec;
        iVar1 = 1;
        uVar4 = (uint)(*param_3 >> 1);
        if (uVar4 == 0x32) {
          iVar1 = 0;
LAB_00422a94:
          if ((int)*ppuVar6 == 0) {
            iVar2 = cfsetispeed((termios *)terminal_status,(&speedtable)[(long)iVar1 * 2]);
          }
          else {
            iVar2 = 0;
            if ((int)*ppuVar6 == 1) {
              iVar2 = cfsetospeed((termios *)terminal_status,(&speedtable)[(long)iVar1 * 2]);
            }
          }
          if (iVar2 == -1) {
                    // WARNING: Subroutine does not return
            uerror(0x435d7b,0);
          }
          ppuVar6 = ppuVar5 + 2;
        }
        else {
          do {
            if (uVar4 == *puVar3) goto LAB_00422a94;
            iVar1 = iVar1 + 1;
            puVar3 = puVar3 + 2;
          } while (iVar1 != 0x12);
          unix_error(0x16,0x435d7b,0);
LAB_00422b08:
          iVar1 = *(int *)ppuVar6;
          ppuVar6 = ppuVar5 + 2;
          terminal_status[(long)iVar1 + 0x11] = (char)((long)*param_3 >> 1);
        }
      }
      else {
        **ppuVar6 = ~(uint)ppuVar5[4] & **ppuVar6 | *(uint *)(ppuVar5 + 5 + iVar2);
        ppuVar6 = ppuVar5 + 5 + iVar1;
      }
    }
    else {
      if ((long)puVar3 < 2) {
        if (puVar3 == (uint *)0x0) {
          puVar3 = *ppuVar6;
          ppuVar6 = ppuVar5 + 3;
          if ((int)(*param_3 >> 1) == 0) {
            *puVar3 = *puVar3 & ~*(uint *)(ppuVar5 + 2);
          }
          else {
            *puVar3 = *puVar3 | *(uint *)(ppuVar5 + 2);
          }
        }
      }
      else {
        if (puVar3 == (uint *)0x2) goto LAB_00422a71;
        if (puVar3 == (uint *)0x3) goto LAB_00422b08;
      }
    }
    puVar3 = *ppuVar6;
    if (puVar3 == (uint *)0x4) goto LAB_00422b2e;
    param_3 = param_3 + 1;
    ppuVar5 = ppuVar6;
  } while( true );
}



long * unix_tcgetattr(long param_1)

{
  uint **ppuVar1;
  uint **ppuVar2;
  uint **ppuVar3;
  uint **ppuVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  uint *puVar9;
  undefined1 *puVar10;
  uint **ppuVar11;
  long *plVar12;
  
  iVar5 = tcgetattr((int)(param_1 >> 1),(termios *)terminal_status);
  if (iVar5 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435d85,0);
  }
  plVar8 = (long *)caml_alloc_tuple(0x26);
  if (terminal_io_descr._0_8_ == (uint *)0x4) {
    return plVar8;
  }
  puVar10 = terminal_io_descr;
  puVar9 = terminal_io_descr._0_8_;
  plVar12 = plVar8;
  do {
    ppuVar4 = (uint **)((long)puVar10 + 8);
    if (puVar9 == (uint *)0x1) {
      ppuVar1 = (uint **)((long)puVar10 + 0x10);
      iVar5 = *(int *)((long)puVar10 + 0x18);
      ppuVar2 = (uint **)((long)puVar10 + 0x20);
      ppuVar11 = (uint **)((long)puVar10 + 0x28);
      if (0 < iVar5) {
        iVar6 = 0;
        puVar9 = *ppuVar11;
        while ((uint *)(long)(int)((uint)*ppuVar2 & **ppuVar4) != puVar9) {
          iVar6 = iVar6 + 1;
          if (iVar5 <= iVar6) goto LAB_00422c8f;
          ppuVar3 = (uint **)((long)puVar10 + 0x30);
          puVar10 = (undefined1 *)((long)puVar10 + 8);
          puVar9 = *ppuVar3;
        }
        *plVar12 = (long)(iVar6 + (int)*ppuVar1) * 2 + 1;
      }
LAB_00422c8f:
      ppuVar4 = ppuVar11 + iVar5;
    }
    else {
      if ((long)puVar9 < 2) {
        if (puVar9 == (uint *)0x0) {
          *plVar12 = (-(ulong)(((uint)*(uint **)((long)puVar10 + 0x10) & **ppuVar4) == 0) &
                     0xfffffffffffffffe) + 3;
          ppuVar4 = (uint **)((long)puVar10 + 0x18);
        }
      }
      else {
        if (puVar9 == (uint *)0x2) {
          iVar5 = *(int *)ppuVar4;
          *plVar12 = 0x4b01;
          if (iVar5 == 0) {
            uVar7 = cfgetispeed((termios *)terminal_status);
          }
          else {
            uVar7 = 0;
            if (iVar5 == 1) {
              uVar7 = cfgetospeed((termios *)terminal_status);
            }
          }
          puVar9 = &UINT_00435de8;
          iVar5 = 1;
          ppuVar4 = (uint **)((long)puVar10 + 0x10);
          if (uVar7 == 1) {
            iVar5 = 0;
LAB_00422cea:
            *plVar12 = (long)(int)(&UINT_00435de4)[(long)iVar5 * 2] * 2 + 1;
          }
          else {
            do {
              if (*puVar9 == uVar7) goto LAB_00422cea;
              iVar5 = iVar5 + 1;
              puVar9 = puVar9 + 2;
            } while (iVar5 != 0x12);
          }
        }
        else {
          if (puVar9 == (uint *)0x3) {
            *plVar12 = (ulong)(byte)terminal_status[(long)*(int *)ppuVar4 + 0x11] * 2 + 1;
            ppuVar4 = (uint **)((long)puVar10 + 0x10);
          }
        }
      }
    }
    puVar10 = (undefined1 *)ppuVar4;
    puVar9 = *(uint **)puVar10;
    if (puVar9 == (uint *)0x4) {
      return plVar8;
    }
    plVar12 = plVar12 + 1;
  } while( true );
}



void unix_time(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  caml_copy_double((double)tVar1);
  return;
}



double * unix_times(void)

{
  double *pdVar1;
  rusage local_a8;
  
  pdVar1 = (double *)caml_alloc_small(4,0xfe);
  getrusage(RUSAGE_SELF,&local_a8);
  *pdVar1 = (double)local_a8.ru_utime.tv_usec / 1000000.0 + (double)local_a8.ru_utime.tv_sec;
  pdVar1[1] = (double)local_a8.ru_stime.tv_usec / 1000000.0 + (double)local_a8.ru_stime.tv_sec;
  getrusage(~RUSAGE_SELF,&local_a8);
  pdVar1[2] = (double)local_a8.ru_utime.tv_usec / 1000000.0 + (double)local_a8.ru_utime.tv_sec;
  pdVar1[3] = (double)local_a8.ru_stime.tv_usec / 1000000.0 + (double)local_a8.ru_stime.tv_sec;
  return pdVar1;
}



undefined8 unix_truncate_64(char *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = truncate64(param_1,*(__off64_t *)(param_2 + 8));
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435aae,param_1);
  }
  return 1;
}



undefined8 unix_truncate(char *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = truncate64(param_1,param_2 >> 1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(0x435aae,param_1);
  }
  return 1;
}



long unix_umask(long param_1)

{
  __mode_t _Var1;
  
  _Var1 = umask((__mode_t)(param_1 >> 1));
  return (ulong)_Var1 * 2 + 1;
}



long * unix_error_of_code(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = cst_to_constr(param_1,error_table,0x44,0xffffffff);
  plVar2 = (long *)(long)iVar1;
  if (iVar1 == -1) {
    plVar2 = (long *)caml_alloc_small(1,0);
    *plVar2 = (long)(int)param_1 * 2 + 1;
  }
  return plVar2;
}



void unix_error(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long *local_50;
  long local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 1;
  local_28 = 1;
  local_30 = 1;
  local_78 = caml_local_roots;
  local_68 = 1;
  local_70 = 3;
  local_60 = local_20;
  local_58 = &local_28;
  local_50 = &local_30;
  caml_local_roots = &local_78;
  if (param_3 == 0) {
    caml_local_roots = &local_78;
    param_3 = caml_copy_string("");
  }
  local_30 = param_3;
  local_20[0] = caml_copy_string(param_2);
  local_28 = unix_error_of_code(param_1);
  if (unix_error_exn == (undefined8 *)0x0) {
    unix_error_exn = (undefined8 *)caml_named_value("Unix.Unix_error");
    if (unix_error_exn == (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      caml_invalid_argument("Exception Unix.Unix_error not initialized, please link unix.cma");
    }
  }
  puVar1 = (undefined8 *)caml_alloc_small(4,0);
  *puVar1 = *unix_error_exn;
  puVar1[1] = local_28;
  puVar1[2] = local_20[0];
  puVar1[3] = local_30;
  caml_local_roots = (undefined8 *)local_78;
                    // WARNING: Subroutine does not return
  caml_raise(puVar1);
}



undefined8 uerror(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint *puVar2;
  char *__name;
  
  puVar2 = (uint *)__errno_location();
  __name = (char *)(ulong)*puVar2;
  unix_error(__name,param_1,param_2);
  iVar1 = unlink(__name);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("unlink",__name);
  }
  return 1;
}



undefined8 unix_unlink(char *param_1)

{
  int iVar1;
  
  iVar1 = unlink(param_1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("unlink",param_1);
  }
  return 1;
}



undefined8 unix_utimes(char *param_1,double *param_2,double *param_3)

{
  int iVar1;
  utimbuf *__file_times;
  utimbuf local_18;
  
  local_18.actime = (__time_t)*param_2;
  local_18.modtime = (__time_t)*param_3;
  if ((local_18.actime != 0) || (__file_times = (utimbuf *)0x0, local_18.modtime != 0)) {
    __file_times = &local_18;
  }
  iVar1 = utime(param_1,__file_times);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("utimes",param_1);
  }
  return 1;
}



void alloc_process_status(int param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long **local_50;
  long *local_20;
  
  if ((param_2 & 0x7f) == 0) {
    local_20 = (long *)caml_alloc_small(1,0);
    *local_20 = (ulong)(param_2 >> 8 & 0xff) * 2 + 1;
  }
  else {
    if ((char)param_2 == '\x7f') {
      plVar2 = (long *)caml_alloc_small(1,2);
      local_20 = plVar2;
      iVar1 = caml_rev_convert_signal_number(param_2 >> 8 & 0xff);
      *plVar2 = (long)iVar1 * 2 + 1;
    }
    else {
      plVar2 = (long *)caml_alloc_small(1,1);
      local_20 = plVar2;
      iVar1 = caml_rev_convert_signal_number(param_2 & 0x7f);
      *plVar2 = (long)iVar1 * 2 + 1;
    }
  }
  local_68 = caml_local_roots;
  local_58 = 1;
  local_60 = 1;
  local_50 = &local_20;
  caml_local_roots = (undefined *)&local_68;
  plVar2 = (long *)caml_alloc_small(2,0);
  *plVar2 = (long)param_1 * 2 + 1;
  plVar2[1] = (long)local_20;
  caml_local_roots = (undefined *)local_68;
  return;
}



void unix_waitpid(undefined8 param_1,long param_2)

{
  int __options;
  __pid_t _Var1;
  int local_1c [3];
  
  __options = caml_convert_flag_list(param_1,&wait_flag_table);
  caml_enter_blocking_section();
  _Var1 = waitpid((__pid_t)(param_2 >> 1),local_1c,__options);
  caml_leave_blocking_section();
  if (_Var1 == -1) {
                    // WARNING: Subroutine does not return
    uerror("waitpid",0);
  }
  alloc_process_status(_Var1,local_1c[0]);
  return;
}



void unix_wait(void)

{
  __pid_t _Var1;
  undefined4 local_c;
  
  caml_enter_blocking_section();
  _Var1 = wait(&local_c);
  caml_leave_blocking_section();
  if (_Var1 == -1) {
                    // WARNING: Subroutine does not return
    uerror(&DAT_00435ed6,0);
  }
  alloc_process_status(_Var1,local_c);
  return;
}



long unix_single_write(long param_1,long param_2,long param_3,long param_4)

{
  ssize_t sVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_4070;
  undefined8 local_4068;
  undefined8 local_4060;
  undefined8 local_4058;
  long *local_4050;
  undefined local_4028 [16392];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_4068 = caml_local_roots;
  caml_local_roots = &local_4068;
  local_4058 = 1;
  local_4060 = 1;
  local_4050 = &local_4070;
  param_4 = param_4 >> 1;
  local_4070 = param_2;
  if (param_4 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0x4000;
    if (param_4 < 0x4001) {
      iVar2 = (int)param_4;
    }
    __memmove_chk(local_4028,(param_3 >> 1) + param_2,(long)iVar2,0x4000);
    caml_enter_blocking_section();
    sVar1 = write((int)(param_1 >> 1),local_4028,(long)iVar2);
    iVar2 = (int)sVar1;
    caml_leave_blocking_section();
    if (iVar2 == -1) {
                    // WARNING: Subroutine does not return
      uerror("single_write",0);
    }
  }
  caml_local_roots = (undefined8 *)local_4068;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (long)iVar2 * 2 + 1;
}



long unix_write(ulong param_1,long param_2,long param_3,long param_4)

{
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_4090;
  undefined8 local_4088;
  undefined8 local_4080;
  undefined8 local_4078;
  long *local_4070;
  undefined local_4048 [16392];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4088 = caml_local_roots;
  caml_local_roots = &local_4088;
  local_4078 = 1;
  local_4080 = 1;
  local_4070 = &local_4090;
  param_4 = param_4 >> 1;
  local_4090 = param_2;
  if (param_4 < 1) {
    lVar5 = 0;
  }
  else {
    param_3 = param_3 >> 1;
    lVar5 = 0;
    while( true ) {
      iVar3 = 0x4000;
      if (param_4 < 0x4001) {
        iVar3 = (int)param_4;
      }
      __memmove_chk(local_4048,param_3 + local_4090,(long)iVar3,0x4000);
      caml_enter_blocking_section();
      sVar1 = write((int)(param_1 >> 1),local_4048,(long)iVar3);
      caml_leave_blocking_section();
      if ((int)sVar1 == -1) break;
      lVar4 = (long)(int)sVar1;
      lVar5 = lVar5 + lVar4;
      param_4 = param_4 - lVar4;
      if (param_4 < 1) goto LAB_0042343e;
      param_3 = param_3 + lVar4;
    }
    piVar2 = __errno_location();
    if ((*piVar2 != 0xb) || (lVar5 < 1)) {
                    // WARNING: Subroutine does not return
      uerror("write",0);
    }
  }
LAB_0042343e:
  caml_local_roots = (undefined8 *)local_4088;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return lVar5 * 2 + 1;
}



long cst_to_constr(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_3) {
    iVar2 = 0;
    iVar1 = *param_2;
    while( true ) {
      if (iVar1 == param_1) {
        return (long)iVar2 * 2 + 1;
      }
      iVar2 = iVar2 + 1;
      if (param_3 <= iVar2) break;
      iVar1 = param_2[1];
      param_2 = param_2 + 1;
    }
  }
  return (long)param_4 * 2 + 1;
}



long cstringvect(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + -8) >> 10;
  lVar1 = caml_stat_alloc(uVar3 * 8 + 8);
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      *(undefined8 *)(lVar1 + uVar2 * 8) = *(undefined8 *)(param_1 + uVar2 * 8);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  *(undefined8 *)(lVar1 + uVar3 * 8) = 0;
  return lVar1;
}



void scanmult(undefined8 param_1,long *param_2)

{
  int local_30;
  char local_29 [9];
  
  local_29[0] = ' ';
  __isoc99_sscanf(param_1,"=%u%c",&local_30,local_29);
  __isoc99_sscanf(param_1,"=0x%x%c",&local_30,local_29);
  if (local_29[0] == 'M') {
    *param_2 = (long)local_30 << 0x14;
  }
  else {
    if (local_29[0] == 'k') {
      *param_2 = (long)local_30 << 10;
    }
    else {
      if (local_29[0] == 'G') {
        *param_2 = (long)local_30 << 0x1e;
      }
      else {
        *param_2 = (long)local_30;
      }
    }
  }
  return;
}



void caml_main(char **param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 local_30 [2];
  
  caml_init_ieee_floats();
  caml_init_custom_operations();
  pcVar4 = getenv("OCAMLRUNPARAM");
  if ((pcVar4 == (char *)0x0) && (pcVar4 = getenv("CAMLRUNPARAM"), pcVar4 == (char *)0x0)) {
LAB_0042363f:
    caml_init_gc(minor_heap_init,heap_size_init,heap_chunk_init,percent_free_init,
                 max_percent_free_init);
    iVar8 = 0x100;
    uVar2 = 0;
    do {
      lVar7 = (long)(int)uVar2;
      uVar6 = (ulong)uVar2;
      uVar2 = uVar2 + 1;
      iVar8 = iVar8 + -1;
      *(ulong *)(caml_atom_table + lVar7 * 8) = uVar6;
    } while (iVar8 != 0);
    iVar8 = caml_page_table_add(4,caml_atom_table,&caml_frame_descriptors_mask);
    if (iVar8 == 0) {
      iVar8 = 0;
      puVar5 = caml_data_segments;
      while( true ) {
        if (puVar5 == (undefined *)0x0) {
          caml_code_area_start = caml_code_segments;
          caml_code_area_end = PTR_caml_startup__code_end_00640b50;
          if (PTR_camlPervasives__loop_162_00640b58 != (undefined *)0x0) {
            iVar8 = 1;
            puVar5 = PTR_camlPervasives__loop_162_00640b58;
            puVar9 = caml_code_segments;
            puVar10 = PTR_caml_startup__code_end_00640b50;
            do {
              caml_code_area_start = puVar5;
              if (puVar9 <= puVar5) {
                caml_code_area_start = puVar9;
              }
              caml_code_area_end = (&PTR_caml_startup__code_end_00640b50)[(long)iVar8 * 2];
              if ((&PTR_caml_startup__code_end_00640b50)[(long)iVar8 * 2] <= puVar10) {
                caml_code_area_end = puVar10;
              }
              iVar8 = iVar8 + 1;
              puVar5 = (&caml_code_segments)[(long)iVar8 * 2];
              puVar9 = caml_code_area_start;
              puVar10 = caml_code_area_end;
            } while (puVar5 != (undefined *)0x0);
          }
          caml_init_signals();
          pcVar4 = *param_1;
          if (pcVar4 == (char *)0x0) {
            pcVar4 = "";
          }
          iVar8 = caml_executable_name(proc_self_exe_3682,0x100);
          puVar11 = proc_self_exe_3682;
          if (iVar8 != 0) {
            puVar11 = (undefined1 *)caml_search_exe_in_path(pcVar4);
          }
          caml_sys_init(puVar11,param_1);
          iVar8 = __sigsetjmp(caml_termination_jmpbuf,0);
          if (iVar8 == 0) {
            uVar6 = caml_start_program();
            if (((uint)uVar6 & 3) == 2) {
                    // WARNING: Subroutine does not return
              caml_fatal_uncaught_exception(uVar6 & 0xfffffffffffffffc);
            }
          }
          else {
            if (caml_termination_hook != (code *)0x0) {
              (*caml_termination_hook)(0);
            }
          }
          return;
        }
        iVar3 = caml_page_table_add(4,puVar5,(&PTR_caml_startup__data_end_00640a58)[(long)iVar8 * 2]
                                   );
        if (iVar3 != 0) break;
        iVar8 = iVar8 + 1;
        puVar5 = (&caml_data_segments)[(long)iVar8 * 2];
      }
    }
                    // WARNING: Subroutine does not return
    caml_fatal_error("Fatal error: not enough memory for the initial page table");
  }
switchD_00423626_caseD_50:
  cVar1 = *pcVar4;
  if (cVar1 != '\0') {
    do {
      pcVar4 = pcVar4 + 1;
      switch(cVar1) {
      case 'O':
        goto switchD_00423626_caseD_4f;
      default:
        goto switchD_00423626_caseD_50;
      case 'a':
        scanmult(pcVar4,local_30);
        caml_set_allocation_policy(local_30[0]);
        goto switchD_00423626_caseD_50;
      case 'b':
        caml_record_backtrace(3);
        goto switchD_00423626_caseD_50;
      case 'h':
        scanmult(pcVar4,&heap_size_init);
        goto switchD_00423626_caseD_50;
      case 'i':
        scanmult(pcVar4,&heap_chunk_init);
        goto switchD_00423626_caseD_50;
      case 'l':
        scanmult(pcVar4,&max_stack_init);
        goto switchD_00423626_caseD_50;
      case 'o':
        scanmult(pcVar4,&percent_free_init);
        goto switchD_00423626_caseD_50;
      case 'p':
        caml_parser_trace = 1;
        goto switchD_00423626_caseD_50;
      case 's':
        scanmult(pcVar4,&minor_heap_init);
        goto switchD_00423626_caseD_50;
      case 'v':
        scanmult(pcVar4,&caml_verb_gc);
        cVar1 = *pcVar4;
        if (cVar1 == '\0') goto LAB_0042363f;
      }
    } while( true );
  }
  goto LAB_0042363f;
switchD_00423626_caseD_4f:
  scanmult(pcVar4,&max_percent_free_init);
  goto switchD_00423626_caseD_50;
}



void caml_startup(char **param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 auStack48 [2];
  
  caml_init_ieee_floats();
  caml_init_custom_operations();
  pcVar4 = getenv("OCAMLRUNPARAM");
  if ((pcVar4 == (char *)0x0) && (pcVar4 = getenv("CAMLRUNPARAM"), pcVar4 == (char *)0x0)) {
LAB_0042363f:
    caml_init_gc(minor_heap_init,heap_size_init,heap_chunk_init,percent_free_init,
                 max_percent_free_init);
    iVar8 = 0x100;
    uVar2 = 0;
    do {
      lVar7 = (long)(int)uVar2;
      uVar6 = (ulong)uVar2;
      uVar2 = uVar2 + 1;
      iVar8 = iVar8 + -1;
      *(ulong *)(caml_atom_table + lVar7 * 8) = uVar6;
    } while (iVar8 != 0);
    iVar8 = caml_page_table_add(4,caml_atom_table,&caml_frame_descriptors_mask);
    if (iVar8 == 0) {
      iVar8 = 0;
      puVar5 = caml_data_segments;
      while( true ) {
        if (puVar5 == (undefined *)0x0) {
          caml_code_area_start = caml_code_segments;
          caml_code_area_end = PTR_caml_startup__code_end_00640b50;
          if (PTR_camlPervasives__loop_162_00640b58 != (undefined *)0x0) {
            iVar8 = 1;
            puVar5 = PTR_camlPervasives__loop_162_00640b58;
            puVar9 = caml_code_segments;
            puVar10 = PTR_caml_startup__code_end_00640b50;
            do {
              caml_code_area_start = puVar5;
              if (puVar9 <= puVar5) {
                caml_code_area_start = puVar9;
              }
              caml_code_area_end = (&PTR_caml_startup__code_end_00640b50)[(long)iVar8 * 2];
              if ((&PTR_caml_startup__code_end_00640b50)[(long)iVar8 * 2] <= puVar10) {
                caml_code_area_end = puVar10;
              }
              iVar8 = iVar8 + 1;
              puVar5 = (&caml_code_segments)[(long)iVar8 * 2];
              puVar9 = caml_code_area_start;
              puVar10 = caml_code_area_end;
            } while (puVar5 != (undefined *)0x0);
          }
          caml_init_signals();
          pcVar4 = *param_1;
          if (pcVar4 == (char *)0x0) {
            pcVar4 = "";
          }
          iVar8 = caml_executable_name(proc_self_exe_3682,0x100);
          puVar11 = proc_self_exe_3682;
          if (iVar8 != 0) {
            puVar11 = (undefined1 *)caml_search_exe_in_path(pcVar4);
          }
          caml_sys_init(puVar11,param_1);
          iVar8 = __sigsetjmp(caml_termination_jmpbuf,0);
          if (iVar8 == 0) {
            uVar6 = caml_start_program();
            if (((uint)uVar6 & 3) == 2) {
                    // WARNING: Subroutine does not return
              caml_fatal_uncaught_exception(uVar6 & 0xfffffffffffffffc);
            }
          }
          else {
            if (caml_termination_hook != (code *)0x0) {
              (*caml_termination_hook)(0);
            }
          }
          return;
        }
        iVar3 = caml_page_table_add(4,puVar5,(&PTR_caml_startup__data_end_00640a58)[(long)iVar8 * 2]
                                   );
        if (iVar3 != 0) break;
        iVar8 = iVar8 + 1;
        puVar5 = (&caml_data_segments)[(long)iVar8 * 2];
      }
    }
                    // WARNING: Subroutine does not return
    caml_fatal_error("Fatal error: not enough memory for the initial page table");
  }
switchD_00423626_caseD_50:
  cVar1 = *pcVar4;
  if (cVar1 != '\0') {
    do {
      pcVar4 = pcVar4 + 1;
      switch(cVar1) {
      case 'O':
        goto switchD_00423626_caseD_4f;
      default:
        goto switchD_00423626_caseD_50;
      case 'a':
        scanmult(pcVar4,auStack48);
        caml_set_allocation_policy(auStack48[0]);
        goto switchD_00423626_caseD_50;
      case 'b':
        caml_record_backtrace(3);
        goto switchD_00423626_caseD_50;
      case 'h':
        scanmult(pcVar4,&heap_size_init);
        goto switchD_00423626_caseD_50;
      case 'i':
        scanmult(pcVar4,&heap_chunk_init);
        goto switchD_00423626_caseD_50;
      case 'l':
        scanmult(pcVar4,&max_stack_init);
        goto switchD_00423626_caseD_50;
      case 'o':
        scanmult(pcVar4,&percent_free_init);
        goto switchD_00423626_caseD_50;
      case 'p':
        caml_parser_trace = 1;
        goto switchD_00423626_caseD_50;
      case 's':
        scanmult(pcVar4,&minor_heap_init);
        goto switchD_00423626_caseD_50;
      case 'v':
        scanmult(pcVar4,&caml_verb_gc);
        cVar1 = *pcVar4;
        if (cVar1 == '\0') goto LAB_0042363f;
      }
    } while( true );
  }
  goto LAB_0042363f;
switchD_00423626_caseD_4f:
  scanmult(pcVar4,&max_percent_free_init);
  goto switchD_00423626_caseD_50;
}



undefined8 main(undefined8 param_1,undefined8 param_2)

{
  caml_main(param_2);
  caml_sys_exit(1);
  return 0;
}



void caml_raise(undefined8 param_1)

{
  if (caml_channel_mutex_unlock_exn != (code *)0x0) {
    (*caml_channel_mutex_unlock_exn)();
  }
  if (caml_exception_pointer != (ulong *)0x0) {
    if ((caml_local_roots == (ulong *)0x0) || (caml_exception_pointer <= caml_local_roots)) {
LAB_00423978:
      caml_local_roots = (ulong *)caml_raise_exception(param_1);
    }
    else {
      do {
        caml_local_roots = (ulong *)*caml_local_roots;
        if (caml_local_roots == (ulong *)0x0) {
          caml_local_roots = (ulong *)0x0;
          goto LAB_00423978;
        }
      } while (caml_local_roots < caml_exception_pointer);
    }
    caml_raise_exception();
  }
                    // WARNING: Subroutine does not return
  caml_fatal_uncaught_exception();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void caml_array_bound_error(void)

{
  if (array_bound_error_bucket_inited == 0) {
    _array_bound_error_msg = 0xcfc;
    DAT_0064dd9f = 4;
    array_bound_error_bucket._0_8_ = 0x800;
    array_bound_error_bucket._8_8_ = &caml_exn_Invalid_argument;
    array_bound_error_bucket._16_8_ = s_index_out_of_bounds_0064dd88;
    array_bound_error_bucket_inited = 1;
    caml_page_table_add(4,&array_bound_error_msg,&caml_last_return_address);
    array_bound_error_bucket_inited = 1;
  }
                    // WARNING: Subroutine does not return
  caml_raise(0x64e158);
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



void caml_raise_with_args(undefined8 param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  
  local_48 = 1;
  local_50 = 1;
  local_58 = caml_local_roots;
  local_40 = &local_a0;
  local_90 = 1;
  local_98 = &local_58;
  caml_local_roots = &local_98;
  local_88 = (long)param_2;
  local_a0 = param_1;
  local_80 = param_3;
  puVar1 = (undefined8 *)caml_alloc_small((long)(param_2 + 1),0);
  *puVar1 = local_a0;
  if (0 < param_2) {
    lVar2 = 0;
    do {
      *(undefined8 *)(lVar2 + 8 + (long)puVar1) = *(undefined8 *)(param_3 + lVar2);
      lVar2 = lVar2 + 8;
    } while (lVar2 != (ulong)(param_2 - 1) * 8 + 8);
  }
                    // WARNING: Subroutine does not return
  caml_raise(puVar1);
}



void caml_raise_with_arg(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 **local_80;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_10 [2];
  
  local_38 = &local_a8;
  local_48 = 1;
  local_50 = 2;
  local_58 = caml_local_roots;
  local_40 = &local_a0;
  local_10[0] = (undefined8 *)0x0;
  local_88 = 1;
  local_98 = &local_58;
  local_90 = 1;
  caml_local_roots = &local_98;
  local_80 = local_10;
  local_a8 = param_2;
  local_a0 = param_1;
  local_10[0] = (undefined8 *)caml_alloc_small(2,0);
  *local_10[0] = local_a0;
  local_10[0][1] = local_a8;
                    // WARNING: Subroutine does not return
  caml_raise(local_10[0]);
}



void caml_raise_sys_error(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuStack192;
  undefined8 *puStack184;
  undefined8 uStack176;
  undefined8 uStack168;
  undefined ***pppuStack160;
  undefined8 uStack120;
  undefined8 uStack112;
  undefined8 uStack104;
  undefined ***pppuStack96;
  undefined **ppuStack48;
  undefined8 uStack40;
  undefined8 uStack32;
  undefined8 uStack24;
  
  ppuVar2 = &caml_exn_Sys_error;
  caml_raise_with_arg(&caml_exn_Sys_error,param_1);
  uStack24 = 0x423bdc;
  uVar1 = caml_copy_string(param_1);
  uStack24 = 0x423be7;
  caml_raise_with_arg(ppuVar2,uVar1);
  ppuVar3 = &caml_exn_Invalid_argument;
  uStack32 = 0x423c01;
  caml_raise_with_string(&caml_exn_Invalid_argument,ppuVar2);
  ppuStack192 = &caml_exn_Failure;
  uStack40 = 0x423c21;
  caml_raise_with_string(&caml_exn_Failure,ppuVar3);
  uStack104 = 1;
  uStack112 = 1;
  ppuStack48 = (undefined **)0x0;
  uStack120 = caml_local_roots;
  pppuStack96 = &ppuStack192;
  uStack168 = 1;
  uStack176 = 1;
  puStack184 = &uStack120;
  caml_local_roots = &puStack184;
  pppuStack160 = &ppuStack48;
  ppuStack48 = (undefined **)caml_alloc_small(1,0);
  *ppuStack48 = (undefined *)ppuStack192;
                    // WARNING: Subroutine does not return
  caml_raise(ppuStack48);
}



void caml_raise_with_string(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuStack184;
  undefined8 *puStack176;
  undefined8 uStack168;
  undefined8 uStack160;
  undefined ***pppuStack152;
  undefined8 uStack112;
  undefined8 uStack104;
  undefined8 uStack96;
  undefined ***pppuStack88;
  undefined **ppuStack40;
  undefined8 uStack32;
  undefined8 uStack24;
  undefined8 uStack16;
  
  uStack16 = 0x423bdc;
  uVar1 = caml_copy_string(param_2);
  uStack16 = 0x423be7;
  caml_raise_with_arg(param_1,uVar1);
  ppuVar2 = &caml_exn_Invalid_argument;
  uStack24 = 0x423c01;
  caml_raise_with_string(&caml_exn_Invalid_argument,param_1);
  ppuStack184 = &caml_exn_Failure;
  uStack32 = 0x423c21;
  caml_raise_with_string(&caml_exn_Failure,ppuVar2);
  uStack96 = 1;
  uStack104 = 1;
  ppuStack40 = (undefined **)0x0;
  uStack112 = caml_local_roots;
  pppuStack88 = &ppuStack184;
  uStack160 = 1;
  uStack168 = 1;
  puStack176 = &uStack112;
  caml_local_roots = &puStack176;
  pppuStack152 = &ppuStack40;
  ppuStack40 = (undefined **)caml_alloc_small(1,0);
  *ppuStack40 = (undefined *)ppuStack184;
                    // WARNING: Subroutine does not return
  caml_raise(ppuStack40);
}



void caml_invalid_argument(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuStack176;
  undefined8 *puStack168;
  undefined8 uStack160;
  undefined8 uStack152;
  undefined ***pppuStack144;
  undefined8 uStack104;
  undefined8 uStack96;
  undefined8 uStack88;
  undefined ***pppuStack80;
  undefined **ppuStack32;
  undefined8 uStack24;
  undefined8 uStack16;
  
  ppuVar1 = &caml_exn_Invalid_argument;
  uStack16 = 0x423c01;
  caml_raise_with_string(&caml_exn_Invalid_argument,param_1);
  ppuStack176 = &caml_exn_Failure;
  uStack24 = 0x423c21;
  caml_raise_with_string(&caml_exn_Failure,ppuVar1);
  uStack88 = 1;
  uStack96 = 1;
  ppuStack32 = (undefined **)0x0;
  uStack104 = caml_local_roots;
  pppuStack80 = &ppuStack176;
  uStack152 = 1;
  uStack160 = 1;
  puStack168 = &uStack104;
  caml_local_roots = &puStack168;
  pppuStack144 = &ppuStack32;
  ppuStack32 = (undefined **)caml_alloc_small(1,0);
  *ppuStack32 = (undefined *)ppuStack176;
                    // WARNING: Subroutine does not return
  caml_raise(ppuStack32);
}



void caml_failwith(undefined8 param_1)

{
  undefined **ppuStack168;
  undefined8 *puStack160;
  undefined8 uStack152;
  undefined8 uStack144;
  undefined ***pppuStack136;
  undefined8 uStack96;
  undefined8 uStack88;
  undefined8 uStack80;
  undefined ***pppuStack72;
  undefined **ppuStack24;
  undefined8 uStack16;
  
  ppuStack168 = &caml_exn_Failure;
  uStack16 = 0x423c21;
  caml_raise_with_string(&caml_exn_Failure,param_1);
  uStack80 = 1;
  uStack88 = 1;
  ppuStack24 = (undefined **)0x0;
  uStack96 = caml_local_roots;
  pppuStack72 = &ppuStack168;
  uStack144 = 1;
  uStack152 = 1;
  puStack160 = &uStack96;
  caml_local_roots = &puStack160;
  pppuStack136 = &ppuStack24;
  ppuStack24 = (undefined **)caml_alloc_small(1,0);
  *ppuStack24 = (undefined *)ppuStack168;
                    // WARNING: Subroutine does not return
  caml_raise(ppuStack24);
}



void caml_raise_constant(undefined8 param_1)

{
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 **local_80;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_10 [2];
  
  local_48 = 1;
  local_50 = 1;
  local_10[0] = (undefined8 *)0x0;
  local_58 = caml_local_roots;
  local_40 = &local_a0;
  local_88 = 1;
  local_90 = 1;
  local_98 = &local_58;
  caml_local_roots = &local_98;
  local_80 = local_10;
  local_a0 = param_1;
  local_10[0] = (undefined8 *)caml_alloc_small(1,0);
  *local_10[0] = local_a0;
                    // WARNING: Subroutine does not return
  caml_raise(local_10[0]);
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



void caml_do_local_roots(code *param_1,long param_2,ulong param_3,long param_4,long *param_5)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  long local_48;
  
  if (param_2 != 0) {
    uVar9 = SEXT48(caml_frame_descriptors_mask);
    lVar8 = caml_frame_descriptors;
    local_48 = param_4;
    do {
      while( true ) {
        uVar6 = param_3 >> 3 & uVar9;
        puVar4 = *(ulong **)(lVar8 + uVar6 * 8);
        uVar5 = *puVar4;
        while (uVar5 != param_3) {
          uVar6 = uVar6 + 1 & uVar9;
          puVar4 = *(ulong **)(lVar8 + uVar6 * 8);
          uVar5 = *puVar4;
        }
        uVar2 = *(ushort *)(puVar4 + 1);
        if (uVar2 == 0xffff) break;
        uVar3 = *(ushort *)((long)puVar4 + 10);
        if (uVar3 != 0) {
          puVar12 = (ushort *)((long)puVar4 + 0xc);
          uVar11 = 0;
          while( true ) {
            uVar2 = *puVar12;
            if ((uVar2 & 1) == 0) {
              puVar7 = (undefined8 *)(param_2 + (int)(uint)uVar2);
            }
            else {
              puVar7 = (undefined8 *)(local_48 + (long)((int)(uint)uVar2 >> 1) * 8);
            }
            uVar11 = uVar11 + 1;
            (*param_1)(*puVar7,puVar7);
            if (uVar3 == uVar11) break;
            puVar12 = puVar12 + 1;
          }
          uVar2 = *(ushort *)(puVar4 + 1);
          uVar9 = SEXT48(caml_frame_descriptors_mask);
          lVar8 = caml_frame_descriptors;
        }
        param_2 = param_2 + (ulong)(uVar2 & 0xfffc);
        param_3 = *(ulong *)(param_2 + -8);
      }
      plVar1 = (long *)(param_2 + 0x10);
      param_3 = *(ulong *)(param_2 + 0x18);
      local_48 = *(long *)(param_2 + 0x20);
      param_2 = *plVar1;
    } while (*plVar1 != 0);
  }
  if (param_5 != (long *)0x0) {
    do {
      iVar13 = 0;
      if (0 < param_5[1]) {
        do {
          if (0 < param_5[2]) {
            iVar10 = 0;
            lVar8 = 0;
            do {
              puVar7 = (undefined8 *)(lVar8 * 8 + param_5[(long)iVar13 + 3]);
              iVar10 = iVar10 + 1;
              (*param_1)(*puVar7,puVar7);
              lVar8 = (long)iVar10;
            } while (lVar8 < param_5[2]);
          }
          iVar13 = iVar13 + 1;
        } while ((long)iVar13 < param_5[1]);
      }
      param_5 = (long *)*param_5;
    } while (param_5 != (long *)0x0);
  }
  return;
}



void caml_register_dyn_global(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = caml_dyn_globals;
  caml_dyn_globals = (undefined8 *)caml_stat_alloc(0x10);
  *caml_dyn_globals = param_1;
  caml_dyn_globals[1] = uVar1;
  return;
}



void caml_register_frametable(undefined8 param_1)

{
  void *__ptr;
  undefined8 uVar1;
  
  uVar1 = frametables;
  frametables = (undefined8 *)caml_stat_alloc(0x10);
  __ptr = caml_frame_descriptors;
  *frametables = param_1;
  frametables[1] = uVar1;
  if (__ptr != (void *)0x0) {
    caml_stat_free(__ptr);
    caml_frame_descriptors = (void *)0x0;
  }
  return;
}



void caml_init_frame_descriptors(void)

{
  ulong **ppuVar1;
  ushort uVar2;
  long *plVar3;
  ulong *puVar4;
  long **pplVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  if (inited_3995 == 0) {
    if (caml_frametable != (undefined *)0x0) {
      lVar10 = 0;
      do {
        lVar10 = lVar10 + 1;
        caml_register_frametable();
      } while ((&caml_frametable)[lVar10] != (undefined *)0x0);
    }
    inited_3995 = 1;
  }
  if (frametables != (long **)0x0) {
    lVar10 = 0;
    pplVar5 = frametables;
    do {
      plVar3 = *pplVar5;
      pplVar5 = (long **)pplVar5[1];
      lVar10 = lVar10 + *plVar3;
    } while (pplVar5 != (long **)0x0);
    if (4 < lVar10 * 2) {
      lVar11 = 4;
      do {
        lVar11 = lVar11 * 2;
      } while (SBORROW8(lVar11,lVar10 * 2) != lVar11 + lVar10 * -2 < 0);
      lVar10 = caml_stat_alloc();
      caml_frame_descriptors_mask = (int)lVar11 + -1;
      goto LAB_00423fba;
    }
  }
  lVar11 = 4;
  lVar10 = caml_stat_alloc();
  caml_frame_descriptors_mask = 3;
LAB_00423fba:
  lVar6 = 0;
  caml_frame_descriptors = lVar10;
  do {
    *(undefined8 *)(lVar10 + lVar6 * 8) = 0;
    lVar6 = lVar6 + 1;
  } while (lVar6 < lVar11);
  if (frametables != (long **)0x0) {
    uVar12 = SEXT48(caml_frame_descriptors_mask);
    pplVar5 = frametables;
    do {
      lVar11 = **pplVar5;
      if (0 < lVar11) {
        puVar9 = (ulong *)(*pplVar5 + 1);
        lVar6 = 0;
        do {
          uVar7 = *puVar9 >> 3 & uVar12;
          ppuVar1 = (ulong **)(lVar10 + uVar7 * 8);
          puVar4 = *ppuVar1;
          while (puVar4 != (ulong *)0x0) {
            uVar7 = uVar7 + 1 & uVar12;
            ppuVar1 = (ulong **)(lVar10 + uVar7 * 8);
            puVar4 = *ppuVar1;
          }
          uVar2 = *(ushort *)((long)puVar9 + 10);
          *ppuVar1 = puVar9;
          puVar8 = (ulong *)((long)puVar9 + (ulong)uVar2 * 2 + 0x13 & 0xfffffffffffffff8);
          puVar4 = puVar9 + 1;
          puVar9 = puVar8;
          if ((*(byte *)puVar4 & 1) != 0) {
            puVar9 = puVar8 + 1;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != lVar11);
      }
      pplVar5 = (long **)pplVar5[1];
    } while (pplVar5 != (long **)0x0);
  }
  return;
}



void caml_do_roots(code *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  
  iVar7 = 0;
  puVar6 = caml_globals;
  plVar3 = caml_dyn_globals;
  if (caml_globals != (undefined *)0x0) {
    do {
      uVar4 = 0;
      iVar5 = 0;
      if (*(ulong *)(puVar6 + -8) >> 10 != 0) {
        do {
          iVar5 = iVar5 + 1;
          (*param_1)(*(undefined8 *)(puVar6 + uVar4 * 8),puVar6 + uVar4 * 8);
          uVar4 = SEXT48(iVar5);
        } while (uVar4 < *(ulong *)(puVar6 + -8) >> 10);
      }
      iVar7 = iVar7 + 1;
      puVar6 = (&caml_globals)[iVar7];
      plVar3 = caml_dyn_globals;
    } while ((&caml_globals)[iVar7] != (undefined *)0x0);
  }
  for (; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
    lVar2 = *plVar3;
    if (*(ulong *)(lVar2 + -8) >> 10 != 0) {
      uVar4 = 0;
      iVar7 = 0;
      do {
        puVar1 = (undefined8 *)(lVar2 + uVar4 * 8);
        iVar7 = iVar7 + 1;
        (*param_1)(*puVar1,puVar1);
        uVar4 = SEXT48(iVar7);
      } while (uVar4 < *(ulong *)(lVar2 + -8) >> 10);
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
                    // WARNING: Could not recover jumptable at 0x0042419d. Too many branches
                    // WARNING: Treating indirect jump as call
    (*caml_scan_roots_hook)(param_1);
    return;
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
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulong *puVar15;
  ushort *puVar16;
  long lVar17;
  long lVar18;
  
  lVar17 = (long)(int)caml_globals_scanned;
  lVar11 = caml_globals_inited;
  plVar1 = caml_dyn_globals;
  if (lVar17 <= caml_globals_inited) {
    puVar4 = (&caml_globals)[lVar17];
    lVar11 = caml_globals_inited;
    while (plVar1 = caml_dyn_globals, puVar4 != (undefined *)0x0) {
      lVar17 = lVar17 + 1;
      uVar10 = *(ulong *)(puVar4 + -8);
      uVar8 = 0;
      iVar12 = 0;
      if (uVar10 >> 10 != 0) {
        do {
          uVar8 = *(ulong *)(puVar4 + uVar8 * 8);
          if ((((uVar8 & 1) == 0) && (uVar8 < caml_young_end)) && (caml_young_start < uVar8)) {
            caml_oldify_one();
            uVar10 = *(ulong *)(puVar4 + -8);
          }
          iVar12 = iVar12 + 1;
          uVar8 = SEXT48(iVar12);
          lVar11 = caml_globals_inited;
        } while (uVar8 < uVar10 >> 10);
      }
      caml_globals_scanned._0_4_ = (int)caml_globals_scanned + 1;
      plVar1 = caml_dyn_globals;
      if (lVar11 < lVar17) break;
      puVar4 = (&caml_globals)[(int)caml_globals_scanned];
    }
  }
  for (; caml_globals_scanned = lVar11, plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    lVar17 = *plVar1;
    uVar10 = *(ulong *)(lVar17 + -8);
    if (uVar10 >> 10 != 0) {
      uVar8 = 0;
      iVar12 = 0;
      do {
        uVar8 = *(ulong *)(lVar17 + uVar8 * 8);
        if ((((uVar8 & 1) == 0) && (uVar8 < caml_young_end)) && (caml_young_start < uVar8)) {
          caml_oldify_one();
          uVar10 = *(ulong *)(lVar17 + -8);
        }
        iVar12 = iVar12 + 1;
        uVar8 = SEXT48(iVar12);
      } while (uVar8 < uVar10 >> 10);
    }
    lVar11 = caml_globals_scanned;
  }
  if (caml_frame_descriptors == 0) {
    caml_init_frame_descriptors();
  }
  puVar7 = caml_local_roots;
  if (caml_bottom_of_stack != 0) {
    uVar8 = SEXT48(caml_frame_descriptors_mask);
    uVar10 = caml_last_return_address;
    lVar11 = caml_frame_descriptors;
    lVar18 = caml_bottom_of_stack;
    lVar17 = caml_gc_regs;
    do {
      while( true ) {
        uVar9 = uVar10 >> 3 & uVar8;
        puVar5 = *(ulong **)(lVar11 + uVar9 * 8);
        uVar6 = *puVar5;
        while (uVar6 != uVar10) {
          uVar9 = uVar9 + 1 & uVar8;
          puVar5 = *(ulong **)(lVar11 + uVar9 * 8);
          uVar6 = *puVar5;
        }
        uVar2 = *(ushort *)(puVar5 + 1);
        if (uVar2 == 0xffff) break;
        uVar3 = *(ushort *)((long)puVar5 + 10);
        if (uVar3 != 0) {
          puVar16 = (ushort *)((long)puVar5 + 0xc);
          uVar14 = 0;
          while( true ) {
            uVar2 = *puVar16;
            if ((uVar2 & 1) == 0) {
              puVar15 = (ulong *)(lVar18 + (int)(uint)uVar2);
            }
            else {
              puVar15 = (ulong *)(lVar17 + (long)((int)(uint)uVar2 >> 1) * 8);
            }
            uVar10 = *puVar15;
            if ((((uVar10 & 1) == 0) && (uVar10 < caml_young_end)) && (caml_young_start < uVar10)) {
              caml_oldify_one();
            }
            uVar14 = uVar14 + 1;
            if (uVar3 == uVar14) break;
            puVar16 = puVar16 + 1;
          }
          uVar2 = *(ushort *)(puVar5 + 1);
          uVar8 = SEXT48(caml_frame_descriptors_mask);
          lVar11 = caml_frame_descriptors;
        }
        lVar18 = lVar18 + (ulong)(uVar2 & 0xfffc);
        uVar10 = *(ulong *)(lVar18 + -8);
      }
      plVar1 = (long *)(lVar18 + 0x10);
      uVar10 = *(ulong *)(lVar18 + 0x18);
      lVar17 = *(long *)(lVar18 + 0x20);
      lVar18 = *plVar1;
      puVar7 = caml_local_roots;
    } while (*plVar1 != 0);
  }
  for (; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
    iVar12 = 0;
    if (0 < (long)puVar7[1]) {
      do {
        if (0 < (long)puVar7[2]) {
          iVar13 = 0;
          lVar17 = 0;
          do {
            uVar10 = *(ulong *)(lVar17 * 8 + puVar7[(long)iVar12 + 3]);
            if ((((uVar10 & 1) == 0) && (uVar10 < caml_young_end)) && (caml_young_start < uVar10)) {
              caml_oldify_one();
            }
            iVar13 = iVar13 + 1;
            lVar17 = (long)iVar13;
          } while (lVar17 < (long)puVar7[2]);
        }
        iVar12 = iVar12 + 1;
      } while ((long)iVar12 < (long)puVar7[1]);
    }
  }
  caml_scan_global_young_roots(caml_oldify_one);
  caml_final_do_young_roots(caml_oldify_one);
  if (caml_scan_roots_hook == (code *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x004244f5. Too many branches
                    // WARNING: Treating indirect jump as call
  (*caml_scan_roots_hook)(caml_oldify_one);
  return;
}



void caml_iterate_global_roots(code *param_1,long param_2)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_2 + 8); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[1]) {
    (*param_1)(*(undefined8 *)*puVar1,(undefined8 *)*puVar1);
  }
  return;
}



void caml_scan_global_roots(undefined8 param_1)

{
  caml_iterate_global_roots(param_1,caml_global_roots);
  caml_iterate_global_roots(param_1,caml_global_roots_young);
  caml_iterate_global_roots(param_1,caml_global_roots_old);
  return;
}



void caml_insert_global_root(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong *local_a8 [19];
  
  iVar6 = *(int *)(param_1 + 0x12);
  puVar3 = param_1;
  if (iVar6 < 0) {
LAB_004245d0:
    if (((ulong *)puVar3[1] == (ulong *)0x0) || (*(ulong *)puVar3[1] != param_2)) {
      iVar7 = 0;
      lVar4 = 0x10;
      random_seed = random_seed * 0x10dcd + 0x6255;
      uVar5 = random_seed;
      if ((random_seed & 0xc0000000) == 0xc0000000) {
        do {
          uVar5 = uVar5 << 2;
          iVar7 = iVar7 + 1;
        } while ((uVar5 & 0xc0000000) == 0xc0000000);
        lVar4 = (long)iVar7 * 8 + 0x10;
      }
      if (iVar6 < iVar7) {
        while (iVar6 = iVar6 + 1, iVar6 <= iVar7) {
          local_a8[iVar6] = param_1;
        }
        *(int *)(param_1 + 0x12) = iVar7;
      }
      puVar3 = (ulong *)caml_stat_alloc(lVar4);
      lVar4 = 0;
      *puVar3 = param_2;
      iVar6 = 0;
      do {
        lVar2 = *(long *)((long)local_a8 + lVar4);
        lVar8 = (long)iVar6;
        iVar6 = iVar6 + 1;
        *(undefined8 *)((long)puVar3 + lVar4 + 8) = *(undefined8 *)(lVar2 + 8 + lVar8 * 8);
        lVar4 = lVar4 + 8;
        *(ulong **)(lVar2 + 8 + lVar8 * 8) = puVar3;
      } while (iVar6 <= iVar7);
    }
    return;
  }
  lVar4 = (long)iVar6;
  puVar1 = param_1;
  iVar7 = iVar6;
LAB_004245ab:
  puVar3 = puVar1;
  puVar1 = (ulong *)puVar3[lVar4 + 1];
  if (puVar1 != (ulong *)0x0) goto code_r0x004245b5;
  goto LAB_004245ba;
code_r0x004245b5:
  if (param_2 <= *puVar1) {
LAB_004245ba:
    iVar7 = iVar7 + -1;
    local_a8[lVar4] = puVar3;
    if (iVar7 != -1) {
      lVar4 = (long)iVar7;
      puVar1 = puVar3;
      goto LAB_004245ab;
    }
    goto LAB_004245d0;
  }
  goto LAB_004245ab;
}



void caml_register_global_root(undefined8 param_1)

{
  caml_insert_global_root(caml_global_roots,param_1);
  return;
}



void caml_scan_global_young_roots(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  int iVar2;
  undefined8 *puVar3;
  
  caml_iterate_global_roots(param_1,caml_global_roots);
  caml_iterate_global_roots(param_1,caml_global_roots_young);
  puVar3 = caml_global_roots_young._8_8_;
  if (caml_global_roots_young._8_8_ != (undefined8 *)0x0) {
    do {
      caml_insert_global_root(caml_global_roots_old,*puVar3);
      puVar1 = puVar3 + 1;
      puVar3 = (undefined8 *)*puVar1;
      __ptr = caml_global_roots_young._8_8_;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
    while (__ptr != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)__ptr[1];
      caml_stat_free(__ptr);
      __ptr = puVar3;
    }
  }
  if (-1 < caml_global_roots_young._144_4_) {
    puVar3 = (undefined8 *)(caml_global_roots_young + 8);
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (iVar2 <= caml_global_roots_young._144_4_);
  }
  caml_global_roots_young._144_4_ = 0;
  return;
}



void caml_delete_global_root(ulong *param_1,ulong param_2)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  int iVar8;
  ulong *local_98 [18];
  
  iVar4 = *(int *)(param_1 + 0x12);
  puVar6 = param_1;
  if (-1 < iVar4) {
    lVar5 = (long)iVar4;
    puVar2 = param_1;
    iVar8 = iVar4;
LAB_0042477b:
    puVar6 = puVar2;
    puVar2 = (ulong *)puVar6[lVar5 + 1];
    if (puVar2 != (ulong *)0x0) goto code_r0x00424785;
    goto LAB_0042478a;
  }
LAB_004247a0:
  puVar6 = (ulong *)puVar6[1];
  if ((puVar6 != (ulong *)0x0) && (*puVar6 == param_2)) {
    if (-1 < iVar4) {
      lVar5 = 0;
      iVar8 = 0;
      do {
        while( true ) {
          plVar1 = (long *)((long)local_98 + lVar5);
          lVar7 = (long)iVar8;
          if (*(ulong **)(*plVar1 + 8 + lVar7 * 8) != puVar6) break;
          lVar3 = lVar5 + 8;
          iVar8 = iVar8 + 1;
          lVar5 = lVar5 + 8;
          *(undefined8 *)(*plVar1 + 8 + lVar7 * 8) = *(undefined8 *)((long)puVar6 + lVar3);
          if (iVar4 < iVar8) goto LAB_004247f8;
        }
        iVar8 = iVar8 + 1;
        lVar5 = lVar5 + 8;
      } while (iVar8 <= iVar4);
    }
LAB_004247f8:
    caml_stat_free(puVar6);
    iVar4 = *(int *)(param_1 + 0x12);
    if ((0 < iVar4) && (param_1[(long)iVar4 + 1] == 0)) {
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0x12) = 0;
          return;
        }
      } while (param_1[(long)iVar4 + 1] == 0);
      *(int *)(param_1 + 0x12) = iVar4;
    }
  }
  return;
code_r0x00424785:
  if (param_2 <= *puVar2) {
LAB_0042478a:
    iVar8 = iVar8 + -1;
    local_98[lVar5] = puVar6;
    if (iVar8 != -1) {
      lVar5 = (long)iVar8;
      puVar2 = puVar6;
      goto LAB_0042477b;
    }
    goto LAB_004247a0;
  }
  goto LAB_0042477b;
}



void caml_remove_global_root(undefined8 param_1)

{
  caml_delete_global_root(caml_global_roots,param_1);
  return;
}



void caml_modify_generational_global_root(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if ((((param_2 & 1) == 0) && (param_2 < caml_young_end)) && (caml_young_start < param_2)) {
    if ((uVar1 & 1) == 0) {
      uVar1 = caml_page_table_lookup();
      if ((uVar1 & 1) != 0) {
        caml_delete_global_root(caml_global_roots_old,param_1);
        caml_insert_global_root(caml_global_roots_young,param_1);
      }
      goto LAB_004248f5;
    }
LAB_0042489b:
    if (caml_young_start < param_2) {
      caml_insert_global_root(caml_global_roots_young,param_1);
      goto LAB_004248f5;
    }
  }
  else {
    if ((uVar1 & 1) == 0) {
      if ((param_2 & 1) != 0) {
        if ((uVar1 < caml_young_end) && (caml_young_start < uVar1)) {
          caml_delete_global_root(caml_global_roots_young,param_1);
        }
        else {
          uVar1 = caml_page_table_lookup();
          if ((uVar1 & 1) != 0) {
            caml_delete_global_root(caml_global_roots_old,param_1);
          }
        }
      }
      goto LAB_004248f5;
    }
    if ((param_2 & 1) != 0) goto LAB_004248f5;
    if (param_2 < caml_young_end) goto LAB_0042489b;
  }
  uVar1 = caml_page_table_lookup(param_2);
  if ((uVar1 & 1) != 0) {
    caml_insert_global_root(caml_global_roots_old,param_1);
  }
LAB_004248f5:
  *param_1 = param_2;
  return;
}



void caml_remove_generational_global_root(ulong *param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 < caml_young_end) && (caml_young_start < uVar1)) {
      caml_delete_global_root(caml_global_roots_young,param_1);
      return;
    }
    bVar2 = caml_page_table_lookup();
    if ((bVar2 & 1) != 0) {
      caml_delete_global_root(caml_global_roots_old,param_1);
      return;
    }
  }
  return;
}



void caml_register_generational_global_root(ulong *param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 < caml_young_end) && (caml_young_start < uVar1)) {
      caml_insert_global_root(caml_global_roots_young,param_1);
      return;
    }
    bVar2 = caml_page_table_lookup();
    if ((bVar2 & 1) != 0) {
      caml_insert_global_root(caml_global_roots_old,param_1);
      return;
    }
  }
  return;
}



void caml_record_signal(int param_1)

{
  caml_young_limit = caml_young_end;
  *(undefined8 *)(caml_pending_signals + (long)param_1 * 8) = 1;
  caml_signals_are_pending = 1;
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



undefined8 caml_try_leave_blocking_section_default(void)

{
  undefined8 uVar1;
  
  uVar1 = caml_async_signal_mode;
  caml_async_signal_mode = 0;
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
  if ((0xffffffea < param_1) && ((int)param_1 < 0)) {
    return *(uint *)(posix_signals + (long)(int)~param_1 * 4);
  }
  return param_1;
}



uint caml_rev_convert_signal_number(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(posix_signals + 4);
  uVar1 = 1;
  if (param_1 == 6) {
    return 0xffffffff;
  }
  do {
    if (*puVar2 == param_1) {
      return ~uVar1;
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar1 != 0x15);
  return param_1;
}



void caml_execute_signal(int param_1,int param_2)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  sigemptyset((sigset_t *)&stack0xffffffffffffff58);
  sigaddset((sigset_t *)&stack0xffffffffffffff58,param_1);
  sigprocmask(0,(sigset_t *)&stack0xffffffffffffff58,(sigset_t *)&stack0xffffffffffffff58);
  piVar1 = (int *)(posix_signals + 4);
  iVar4 = 1;
  lVar3 = 6;
  if (param_1 != 6) {
    do {
      if (param_1 == *piVar1) {
        lVar3 = (long)param_1;
        goto LAB_00424b78;
      }
      iVar4 = iVar4 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar4 != 0x15);
    lVar3 = (long)param_1;
  }
LAB_00424b78:
  uVar2 = caml_callback_exn(*(undefined8 *)(caml_signal_handlers + lVar3 * 8));
  if (param_2 == 0) {
    sigprocmask(2,(sigset_t *)&stack0xffffffffffffff58,(sigset_t *)0x0);
    if (((uint)uVar2 & 3) != 2) {
      return;
    }
  }
  else {
    if (((uint)uVar2 & 3) != 2) {
      return;
    }
    sigdelset((sigset_t *)&stack0xffffffffffffff58,param_1);
    sigprocmask(2,(sigset_t *)&stack0xffffffffffffff58,(sigset_t *)0x0);
  }
                    // WARNING: Subroutine does not return
  caml_raise(uVar2 & 0xfffffffffffffffc);
}



void caml_process_pending_signals(void)

{
  int iVar1;
  int iVar2;
  
  if (caml_signals_are_pending != 0) {
    caml_signals_are_pending = 0;
    iVar1 = 0;
    do {
      while (*(long *)(caml_pending_signals + (long)iVar1 * 8) != 0) {
        iVar2 = iVar1 + 1;
        *(undefined8 *)(caml_pending_signals + (long)iVar1 * 8) = 0;
        caml_execute_signal(iVar1,0);
        iVar1 = iVar2;
        if (iVar2 == 0x41) {
          return;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x41);
  }
  return;
}



undefined8 * caml_install_signal_handler(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *local_b8;
  long local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 **local_90;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  undefined8 **local_48;
  undefined8 *local_20 [2];
  
  uVar1 = caml_local_roots;
  uVar2 = (uint)(param_1 >> 1);
  uVar4 = param_1 >> 1 & 0xffffffff;
  local_48 = &local_b8;
  local_50 = &local_b0;
  local_58 = 1;
  local_60 = 2;
  local_a8 = &local_68;
  local_68 = caml_local_roots;
  local_20[0] = (undefined8 *)0x0;
  caml_local_roots = &local_a8;
  local_98 = 1;
  local_a0 = 1;
  local_90 = local_20;
  if ((0xffffffea < uVar2) && ((int)uVar2 < 0)) {
    uVar2 = *(uint *)(posix_signals + (long)(int)~(uint)uVar4 * 4);
    uVar4 = (ulong)uVar2;
  }
  local_b8 = param_2;
  local_b0 = param_1;
  if (uVar2 < 0x41) {
    if ((long)param_2 - 1U < 3) {
      local_48 = &local_b8;
      iVar3 = caml_set_signal_action(uVar4,*(undefined4 *)(CSWTCH_33 + ((long)param_2 - 1U) * 4));
    }
    else {
      local_48 = &local_b8;
      iVar3 = caml_set_signal_action(uVar4,2);
    }
    if (iVar3 == 1) {
      local_20[0] = (undefined8 *)0x3;
    }
    else {
      if (iVar3 == 2) {
        local_20[0] = (undefined8 *)caml_alloc_small(1,0);
        *local_20[0] = *(undefined8 *)(caml_signal_handlers + (long)(int)uVar4 * 8);
      }
      else {
        if (iVar3 == 0) {
          local_20[0] = (undefined8 *)0x1;
        }
        else {
          caml_sys_error(1);
        }
      }
    }
    if (((ulong)local_b8 & 1) == 0) {
      if (caml_signal_handlers == 0) {
        caml_signal_handlers = caml_alloc(0x41,0);
        caml_register_global_root(&caml_signal_handlers);
      }
      caml_modify(caml_signal_handlers + (long)(int)uVar4 * 8,*local_b8);
    }
    caml_process_pending_signals();
    caml_local_roots = (undefined8 **)uVar1;
    return local_20[0];
  }
                    // WARNING: Subroutine does not return
  caml_invalid_argument("Sys.signal: unavailable signal");
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
  undefined local_c8 [160];
  sigaltstack local_28;
  
  local_28.ss_sp = sig_alt_stack;
  local_28.ss_size = 0x2000;
  local_28.ss_flags = 0;
  local_c8._0_8_ = segv_handler;
  local_c8._136_4_ = 0x48000004;
  sigemptyset((sigset_t *)(local_c8 + 8));
  system_stack_top = local_c8;
  iVar1 = sigaltstack(&local_28,(sigaltstack *)0x0);
  if (iVar1 == 0) {
    sigaction(0xb,(sigaction *)local_c8,(sigaction *)0x0);
  }
  return;
}



uint caml_set_signal_action(int param_1,int param_2)

{
  uint uVar1;
  undefined local_158 [168];
  undefined local_b0 [160];
  
  if (param_2 == 0) {
    local_158._160_8_ = (code *)0x0;
    local_b0._128_4_ = 0;
  }
  else {
    if (param_2 == 1) {
      local_158._160_8_ = (code *)0x1;
      local_b0._128_4_ = 0;
    }
    else {
      local_158._160_8_ = handle_signal;
      local_b0._128_4_ = 4;
    }
  }
  sigemptyset((sigset_t *)local_b0);
  uVar1 = sigaction(param_1,(sigaction *)(local_158 + 0xa0),(sigaction *)local_158);
  if (uVar1 != 0xffffffff) {
    uVar1 = 2;
    if (local_158._0_8_ != handle_signal) {
      uVar1 = (uint)(local_158._0_8_ == (code *)0x1);
    }
  }
  return uVar1;
}



void segv_handler(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined local_c8 [160];
  rlimit64 local_28;
  
  uVar4 = *(ulong *)(param_3 + 0xd8);
  if ((uVar4 & 7) == 0) {
    iVar1 = getrlimit64(RLIMIT_STACK,&local_28);
    if (((iVar1 == 0) && (uVar4 < system_stack_top)) &&
       ((system_stack_top - local_28.rlim_cur) - 0x2000 <= uVar4)) {
      uVar4 = *(ulong *)(param_3 + 0xa8);
      if ((uVar4 < caml_code_area_start) || (caml_code_area_end < uVar4)) {
        uVar2 = caml_page_table_lookup();
        if ((uVar2 & 8) == 0) goto LAB_00425060;
      }
      uVar3 = (uint)uVar4;
      caml_exception_pointer = *(undefined8 *)(param_3 + 0x58);
      caml_young_ptr = *(undefined8 *)(param_3 + 0x60);
      caml_raise_stack_overflow();
      if (0x40 < uVar3) {
        return;
      }
      iVar1 = (*(code *)caml_try_leave_blocking_section_hook)();
      if (iVar1 == 0) {
        caml_record_signal();
        return;
      }
      caml_execute_signal(uVar3,1);
                    // WARNING: Could not recover jumptable at 0x00425105. Too many branches
                    // WARNING: Treating indirect jump as call
      (*(code *)caml_enter_blocking_section_hook)();
      return;
    }
  }
LAB_00425060:
  local_c8._0_8_ = 0;
  local_c8._136_4_ = 0;
  sigemptyset((sigset_t *)(local_c8 + 8));
  sigaction(0xb,(sigaction *)local_c8,(sigaction *)0x0);
  return;
}



void handle_signal(uint param_1)

{
  int iVar1;
  
  if (0x40 < param_1) {
    return;
  }
  iVar1 = (*(code *)caml_try_leave_blocking_section_hook)();
  if (iVar1 == 0) {
    caml_record_signal();
    return;
  }
  caml_execute_signal(param_1,1);
                    // WARNING: Could not recover jumptable at 0x00425105. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)caml_enter_blocking_section_hook)();
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
  void **ppvVar1;
  int iVar2;
  long lVar3;
  
  if ((param_2 != 0) && (0 < *param_1)) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      ppvVar1 = (void **)(*(long *)(param_1 + 2) + lVar3);
      lVar3 = lVar3 + 8;
      caml_stat_free(*ppvVar1);
    } while (*param_1 != iVar2 && iVar2 <= *param_1);
  }
  caml_stat_free(*(void **)(param_1 + 2));
  return;
}



void caml_ext_table_add(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *param_1;
  if (iVar1 < param_1[1]) {
    lVar2 = *(long *)(param_1 + 2);
  }
  else {
    iVar1 = param_1[1] * 2;
    param_1[1] = iVar1;
    lVar2 = caml_stat_resize(*(undefined8 *)(param_1 + 2),(long)iVar1 * 8);
    *(long *)(param_1 + 2) = lVar2;
    iVar1 = *param_1;
  }
  *param_1 = *param_1 + 1;
  *(undefined8 *)(lVar2 + (long)iVar1 * 8) = param_2;
  return;
}



void caml_ext_table_init(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  
  param_1[1] = param_2;
  *param_1 = 0;
  uVar1 = caml_stat_alloc((long)param_2 * 8);
  *(undefined8 *)(param_1 + 2) = uVar1;
  return;
}



long caml_aligned_malloc(long param_1,int param_2,void **param_3)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = malloc(param_1 + 0x1000);
  lVar2 = 0;
  if (pvVar1 != (void *)0x0) {
    *param_3 = pvVar1;
    lVar2 = (((long)pvVar1 + (long)param_2 & 0xfffffffffffff000U) + 0x1000) - (long)param_2;
  }
  return lVar2;
}



void caml_fatal_error_arg2
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __fprintf_chk(stderr,1,param_1,param_2);
  __fprintf_chk(stderr,1,param_3,param_4);
                    // WARNING: Subroutine does not return
  exit(2);
}



void caml_fatal_error_arg(undefined8 param_1,undefined8 param_2)

{
  __fprintf_chk(stderr,1,param_1,param_2);
                    // WARNING: Subroutine does not return
  exit(2);
}



void caml_fatal_error(undefined8 param_1)

{
  __fprintf_chk(stderr,1,&DAT_00436120,param_1);
                    // WARNING: Subroutine does not return
  exit(2);
}



void caml_gc_message(int param_1,undefined8 param_2,undefined8 param_3)

{
  if ((-1 < param_1) && ((caml_verb_gc & (long)param_1) == 0)) {
    return;
  }
  __fprintf_chk(stderr,1,param_2,param_3);
  fflush(stderr);
  return;
}



undefined8 * allocate_block(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = (ulong)param_4[-1] >> 10;
  if (uVar1 < param_1 + 1U) {
    caml_fl_cur_size = caml_fl_cur_size + ~uVar1;
    bVar4 = caml_fl_merge == param_4;
    *param_3 = *param_4;
    if (bVar4) {
      caml_fl_merge = param_3;
    }
    param_4[-1] = 0;
    if (caml_allocation_policy == 1) {
      iVar3 = param_2 + 1;
      if ((flp_size <= iVar3) || (*(undefined8 **)(flp + (long)iVar3 * 8) != param_4)) {
        if ((flp_size + -1 == param_2) &&
           (flp_size = param_2, beyond = param_3, param_3 == (undefined8 *)(sentinel + 0x10))) {
          beyond = (undefined8 *)0x0;
        }
        return param_4 + (uVar1 - param_1);
      }
      *(undefined8 **)(flp + (long)iVar3 * 8) = param_3;
      lVar2 = uVar1 - param_1;
      goto LAB_0042541f;
    }
    lVar2 = uVar1 - param_1;
  }
  else {
    lVar2 = uVar1 - param_1;
    caml_fl_cur_size = caml_fl_cur_size - param_1;
    param_4[-1] = lVar2 * 0x400 + 0x200;
  }
  if (caml_allocation_policy == 0) {
    fl_prev = param_3;
  }
LAB_0042541f:
  return param_4 + lVar2;
}



void caml_fl_init_merge(void)

{
  caml_fl_merge = 0x64de10;
  last_fragment = 0;
  return;
}



void caml_fl_reset(void)

{
  if (caml_allocation_policy == 0) {
    fl_prev = 0x64de10;
  }
  else {
    if (caml_allocation_policy == 1) {
      flp_size = 0;
      beyond = 0;
    }
  }
  caml_fl_merge = 0x64de10;
  sentinel._16_8_ = 0;
  caml_fl_cur_size = 0;
  last_fragment = 0;
  return;
}



long ** caml_fl_merge_block(long **param_1)

{
  long **pplVar1;
  long **pplVar2;
  int iVar3;
  long **pplVar4;
  ulong uVar5;
  long **pplVar6;
  ulong uVar7;
  long *plVar8;
  long **pplVar9;
  long **pplVar10;
  bool bVar11;
  
  pplVar2 = caml_fl_merge;
  plVar8 = param_1[-1];
  uVar7 = (ulong)plVar8 >> 10;
  pplVar9 = (long **)*caml_fl_merge;
  caml_fl_cur_size = uVar7 + 1 + caml_fl_cur_size;
  if (caml_allocation_policy == 1) {
    if (caml_fl_merge == (long **)(sentinel + 0x10)) {
      flp_size = 0;
      beyond = (long **)0x0;
    }
    else {
      if ((0 < flp_size) &&
         (iVar3 = flp_size + -1,
         caml_fl_merge < **(long ***)(flp + (long)(flp_size + -1) * 8) ||
         caml_fl_merge == (long **)**(long ***)(flp + (long)(flp_size + -1) * 8))) {
        do {
          flp_size = iVar3;
          if (flp_size == 0) {
            flp_size = 0;
            break;
          }
          iVar3 = flp_size + -1;
        } while (caml_fl_merge < **(long ***)(flp + (long)(flp_size + -1) * 8) ||
                 caml_fl_merge == (long **)**(long ***)(flp + (long)(flp_size + -1) * 8));
      }
      if (caml_fl_merge <= beyond) {
        beyond = (long **)0x0;
      }
    }
  }
  if (param_1 + -1 == last_fragment) {
    pplVar6 = param_1 + -1;
    uVar5 = ((ulong)*pplVar6 >> 10) + 1;
    if (uVar5 < 0x40000000000000) {
      pplVar10 = param_1 + -2;
      plVar8 = (long *)(uVar5 * 0x400);
      param_1[-2] = plVar8;
      caml_fl_cur_size = caml_fl_cur_size + 1;
      uVar7 = uVar5 & 0x3fffffffffffff;
      goto LAB_0042557e;
    }
  }
  pplVar10 = param_1 + -1;
  pplVar6 = param_1;
LAB_0042557e:
  pplVar4 = pplVar6 + uVar7;
  if (pplVar9 + -1 == pplVar4) {
    pplVar1 = (long **)*pplVar9;
    uVar5 = uVar7 + 1 + ((ulong)pplVar9[-1] >> 10);
    pplVar4 = pplVar9 + -1;
    if (uVar5 < 0x40000000000000) {
      bVar11 = caml_allocation_policy == 0;
      *pplVar2 = (long *)pplVar1;
      if ((bVar11) && (fl_prev == pplVar9)) {
        fl_prev = pplVar2;
      }
      plVar8 = (long *)(uVar5 * 0x400 + 0x200);
      pplVar6[-1] = plVar8;
      uVar7 = (ulong)plVar8 >> 10;
      pplVar4 = pplVar6 + uVar7;
      pplVar9 = pplVar1;
    }
  }
  if ((pplVar10 == pplVar2 + ((ulong)pplVar2[-1] >> 10)) &&
     (uVar5 = uVar7 + 1 + ((ulong)pplVar2[-1] >> 10), uVar5 < 0x3fffffffffffff)) {
    pplVar2[-1] = (long *)(uVar5 * 0x400 + 0x200);
    return pplVar4;
  }
  if (uVar7 != 0) {
    *pplVar6 = (long *)pplVar9;
    *pplVar2 = (long *)pplVar6;
    caml_fl_merge = pplVar6;
    pplVar6[-1] = (long *)((ulong)plVar8 & 0xfffffffffffffcff | 0x200);
    return pplVar4;
  }
  caml_fl_cur_size = caml_fl_cur_size + -1;
  last_fragment = pplVar6;
  return pplVar4;
}



void caml_fl_add_blocks(ulong **param_1)

{
  ulong **ppuVar1;
  int iVar2;
  ulong **ppuVar3;
  ulong **ppuVar4;
  bool bVar5;
  
  ppuVar4 = fl_last;
  caml_fl_cur_size = caml_fl_cur_size + 1 + ((ulong)param_1[-1] >> 10);
  if (fl_last < param_1) {
    bVar5 = fl_last == caml_fl_merge;
    *fl_last = (ulong *)param_1;
    if ((bVar5) && (param_1 < caml_gc_sweep_hp)) {
      caml_fl_merge = (ulong **)param_1[1];
    }
    if ((caml_allocation_policy == 1) && (flp_size < 1000)) {
      *(ulong ***)(flp + (long)flp_size * 8) = ppuVar4;
      flp_size = flp_size + 1;
      return;
    }
  }
  else {
    if ((sentinel._16_8_ < param_1) && (ppuVar4 = sentinel._16_8_, sentinel._16_8_ != (ulong **)0x0)
       ) {
      do {
        ppuVar3 = ppuVar4;
        ppuVar4 = (ulong **)*ppuVar3;
        if (param_1 <= ppuVar4) break;
      } while (ppuVar4 != (ulong **)0x0);
    }
    else {
      ppuVar3 = (ulong **)(sentinel + 0x10);
      ppuVar4 = sentinel._16_8_;
    }
    bVar5 = ppuVar3 == caml_fl_merge;
    ppuVar1 = (ulong **)param_1[1];
    *ppuVar1 = (ulong *)ppuVar4;
    *ppuVar3 = (ulong *)param_1;
    if ((bVar5) && (param_1 < caml_gc_sweep_hp)) {
      caml_fl_merge = ppuVar1;
    }
    if (caml_allocation_policy == 1) {
      if (param_1 == (ulong **)(sentinel + 0x10)) {
        flp_size = 0;
        beyond = (ulong **)0x0;
        return;
      }
      if ((0 < flp_size) &&
         (iVar2 = flp_size + -1,
         param_1 < **(ulong ***)(flp + (long)(flp_size + -1) * 8) ||
         param_1 == (ulong **)**(ulong ***)(flp + (long)(flp_size + -1) * 8))) {
        do {
          flp_size = iVar2;
          if (flp_size == 0) {
            flp_size = 0;
            break;
          }
          iVar2 = flp_size + -1;
        } while (param_1 < **(ulong ***)(flp + (long)(flp_size + -1) * 8) ||
                 param_1 == (ulong **)**(ulong ***)(flp + (long)(flp_size + -1) * 8));
      }
      if (param_1 <= beyond) {
        beyond = (ulong **)0x0;
        return;
      }
    }
  }
  return;
}



void caml_make_free_blocks(long *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    while( true ) {
      uVar1 = 0x40000000000000;
      if (param_2 < 0x40000000000001) {
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



void caml_set_allocation_policy(long param_1)

{
  if (param_1 == 0) {
    fl_prev = 0x64de10;
  }
  else {
    if (param_1 == 1) {
      caml_allocation_policy = param_1;
      flp_size = 0;
      beyond = 0;
      return;
    }
  }
  caml_allocation_policy = param_1;
  return;
}



undefined8 caml_fl_allocate(ulong param_1)

{
  long **pplVar1;
  long **pplVar2;
  undefined8 *puVar3;
  long **pplVar4;
  undefined8 *puVar5;
  long **pplVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  long *local_1f68 [1000];
  
  if (caml_allocation_policy == 0) {
    pplVar6 = (long **)*fl_prev;
    pplVar14 = fl_prev;
    if (pplVar6 != (long **)0x0) {
      plVar13 = pplVar6[-1];
      pplVar1 = fl_prev;
      while( true ) {
        pplVar14 = pplVar6;
        if (param_1 <= (ulong)plVar13 >> 10) {
          uVar8 = allocate_block(param_1 + 1,0,pplVar1);
          return uVar8;
        }
        pplVar6 = (long **)*pplVar14;
        if (pplVar6 == (long **)0x0) break;
        plVar13 = pplVar6[-1];
        pplVar1 = pplVar14;
      }
    }
    pplVar6 = (long **)(sentinel + 0x10);
    pplVar4 = sentinel._16_8_;
    pplVar1 = (long **)(sentinel + 0x10);
    while (pplVar2 = pplVar4, fl_last = pplVar14, fl_prev != pplVar1) {
      if (param_1 <= (ulong)pplVar2[-1] >> 10) {
        uVar8 = allocate_block(param_1 + 1,0,pplVar6);
        return uVar8;
      }
      pplVar6 = pplVar2;
      pplVar4 = (long **)*pplVar2;
      pplVar1 = pplVar2;
    }
  }
  else {
    if (caml_allocation_policy == 1) {
      if (flp_size < 1) {
        if (flp_size == 0) {
          plVar13 = (long *)(sentinel + 0x10);
          uVar17 = 0;
        }
        else {
LAB_00425b5a:
          uVar17 = (ulong)(**(long ***)(flp + (long)(flp_size + -1) * 8))[-1] >> 10;
          plVar13 = **(long ***)(flp + (long)(flp_size + -1) * 8);
          if (beyond != (long *)0x0) {
            plVar13 = beyond;
          }
        }
        beyond = (undefined8 *)0x0;
        do {
          do {
            iVar16 = flp_size;
            plVar10 = plVar13;
            flp_size = iVar16;
            if (999 < iVar16) {
              puVar11 = beyond;
              if (beyond == (undefined8 *)0x0) {
                puVar11 = *(undefined8 **)(flp + (long)(iVar16 + -1) * 8);
              }
              puVar5 = (undefined8 *)*puVar11;
              while( true ) {
                puVar3 = puVar5;
                if (puVar3 == (undefined8 *)0x0) {
                  fl_last = (long **)puVar11;
                  return 0;
                }
                puVar9 = puVar3;
                if ((*(ulong *)(*flp._7992_8_ + -8) >> 10 <= (ulong)puVar3[-1] >> 10) &&
                   (puVar9 = beyond, param_1 <= (ulong)puVar3[-1] >> 10)) break;
                puVar5 = (undefined8 *)*puVar3;
                beyond = puVar9;
                puVar11 = puVar3;
              }
              uVar8 = allocate_block(param_1 + 1,iVar16,puVar11,puVar3);
              return uVar8;
            }
            beyond = (long *)*plVar10;
            if (beyond == (long *)0x0) {
              plVar13 = plVar10;
              if (plVar10 == (long *)(sentinel + 0x10)) {
                plVar13 = beyond;
              }
              beyond = plVar13;
              fl_last = (long **)plVar10;
              return 0;
            }
            uVar15 = (ulong)beyond[-1] >> 10;
            plVar13 = beyond;
          } while (uVar15 <= uVar17);
          flp_size = iVar16 + 1;
          *(long **)(flp + (long)iVar16 * 8) = plVar10;
          uVar17 = uVar15;
        } while (uVar15 < param_1);
      }
      else {
        iVar16 = 0;
        pplVar6 = (long **)(flp + 8);
        uVar15 = *(ulong *)(*flp._0_8_ + -8);
        while (uVar15 = uVar15 >> 10, uVar15 < param_1) {
          iVar16 = iVar16 + 1;
          if (flp_size <= iVar16) goto LAB_00425b5a;
          plVar13 = *pplVar6;
          pplVar6 = pplVar6 + 1;
          uVar15 = *(ulong *)(*plVar13 + -8);
        }
      }
      uVar8 = allocate_block(param_1 + 1);
      if (flp_size <= iVar16) {
        return uVar8;
      }
      uVar17 = 0;
      if (0 < iVar16) {
        uVar17 = *(ulong *)(**(long **)(flp + (long)(iVar16 + -1) * 8) + -8) >> 10;
      }
      if (flp_size + -1 == iVar16) {
        if (*(ulong *)(**(long **)(flp + (long)iVar16 * 8) + -8) >> 10 <= uVar17) {
          flp_size = iVar16;
          beyond = (long *)**(long **)(flp + (long)iVar16 * 8);
          return uVar8;
        }
        beyond = (long *)0x0;
        return uVar8;
      }
      lVar20 = (long)iVar16;
      iVar19 = 0;
      plVar13 = *(long **)(flp + (long)(iVar16 + 1) * 8);
      plVar10 = *(long **)(flp + lVar20 * 8);
      do {
        do {
          plVar12 = plVar10;
          if (plVar12 == plVar13) goto LAB_00425cdb;
          plVar10 = (long *)*plVar12;
          uVar7 = (ulong)plVar10[-1] >> 10;
        } while (uVar7 <= uVar17);
        lVar18 = (long)iVar19;
        iVar19 = iVar19 + 1;
        local_1f68[lVar18] = plVar12;
        uVar17 = uVar7;
      } while (uVar7 < uVar15);
LAB_00425cdb:
      if (iVar19 + flp_size < 0x3ea) {
        if ((iVar19 == 1) ||
           (memmove(flp + (long)(iVar19 + iVar16) * 8,flp + lVar20 * 8 + 8,
                    (long)((flp_size + -1) - iVar16) << 3), iVar19 != 0)) {
          memmove(flp + lVar20 * 8,local_1f68,(long)iVar19 << 3);
        }
        flp_size = iVar19 + -1 + flp_size;
        return uVar8;
      }
      if (iVar19 + iVar16 < 1000) {
        if ((iVar19 == 1) ||
           (memmove(flp + (long)(iVar19 + iVar16) * 8,flp + lVar20 * 8 + 8,
                    (long)((1000 - iVar16) - iVar19) << 3), iVar19 != 0)) {
          memmove(flp + lVar20 * 8,local_1f68,(long)iVar19 << 3);
        }
      }
      else {
        if (iVar16 != 1000) {
          memmove(flp + lVar20 * 8,local_1f68,(long)(1000 - iVar16) * 8);
        }
      }
      flp_size = 999;
      beyond = (long *)*flp._7992_8_;
      return uVar8;
    }
  }
  return 0;
}



void caml_init_major_heap(ulong param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  caml_stat_heap_size = 0x2000;
  if (0x1fff < param_1) {
    caml_stat_heap_size = param_1 + 0xfff & 0xfffffffffffff000;
  }
  caml_stat_top_heap_size = caml_stat_heap_size;
  lVar2 = caml_alloc_for_heap(caml_stat_heap_size);
  caml_heap_start = lVar2;
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    caml_fatal_error("Fatal error: not enough memory for the initial heap.\n");
  }
  lVar3 = lVar2 + caml_stat_heap_size;
  *(undefined8 *)(lVar2 + -8) = 0;
  caml_stat_heap_chunks = 1;
  iVar1 = caml_page_table_add(1,lVar2,lVar3);
  if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    caml_fatal_error("Fatal error: not enough memory for the initial page table.\n");
  }
  caml_fl_init_merge();
  caml_make_free_blocks(caml_heap_start,caml_stat_heap_size >> 3,1);
  caml_gc_phase = 2;
  gray_vals_size = 0x800;
  gray_vals = malloc(0x4000);
  if (gray_vals != (void *)0x0) {
    gray_vals_cur = gray_vals;
    gray_vals_end = (void *)((long)gray_vals + gray_vals_size * 8);
    heap_is_pure = 1;
    caml_extra_heap_resources = 0;
    caml_allocated_words = 0;
    return;
  }
                    // WARNING: Subroutine does not return
  caml_fatal_error("Fatal error: not enough memory for the gray cache.\n");
}



void caml_round_heap_chunk_size(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x2000;
  uVar2 = caml_major_heap_increment;
  if (caml_major_heap_increment <= param_1) {
    uVar2 = param_1;
  }
  if (0x1fff < uVar2) {
    uVar1 = uVar2 + 0xfff & 0xfffffffffffff000;
  }
  if (param_1 <= uVar1) {
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise_out_of_memory();
}



void start_cycle(void)

{
  caml_gc_message(1,"Starting new major GC cycle\n",0);
  caml_darken_all_roots();
  markhp = 0;
  caml_gc_subphase = 10;
  caml_gc_phase = 0;
  return;
}



void realloc_gray_vals(void)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = caml_stat_heap_size;
  if (caml_stat_heap_size < 0) {
    lVar1 = caml_stat_heap_size + 0x7f;
  }
  if (gray_vals_size < (ulong)(lVar1 >> 7)) {
    caml_gc_message(8,"Growing gray_vals to %luk bytes\n",(gray_vals_size << 3) >> 9);
    pvVar2 = realloc(gray_vals,gray_vals_size << 4);
    if (pvVar2 != (void *)0x0) {
      gray_vals = pvVar2;
      gray_vals_cur = (void *)((long)pvVar2 + gray_vals_size * 8);
      gray_vals_end = (void *)((long)pvVar2 + gray_vals_size * 0x10);
      gray_vals_size = gray_vals_size * 2;
      return;
    }
    caml_gc_message(8,"No room for growing gray_vals\n",0);
    gray_vals_cur = gray_vals;
  }
  else {
    gray_vals_cur = (void *)((gray_vals_size >> 1) * 8 + (long)gray_vals);
  }
  heap_is_pure = 0;
  return;
}



void mark_slice(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong **ppuVar10;
  ulong uVar11;
  
  caml_gc_message(0x40,"Marking %ld words\n",param_1);
  caml_gc_message(0x40,"Subphase = %ld\n",(long)caml_gc_subphase);
  ppuVar10 = gray_vals_cur;
joined_r0x004261e3:
  do {
    while( true ) {
      if (param_1 < 1) {
        gray_vals_cur = ppuVar10;
        return;
      }
      if (ppuVar10 <= gray_vals) break;
      ppuVar10 = ppuVar10 + -1;
      puVar8 = *ppuVar10;
      uVar7 = puVar8[-1];
      uVar11 = uVar7 >> 10;
      puVar8[-1] = uVar7 | 0x300;
      if (((byte)uVar7 < 0xfb) && (uVar11 != 0)) {
        uVar7 = 0;
        do {
          while ((puVar9 = (ulong *)puVar8[uVar7], ((ulong)puVar9 & 1) != 0 ||
                 (uVar5 = caml_page_table_lookup(puVar9), (uVar5 & 1) == 0))) {
LAB_00426230:
            uVar7 = uVar7 + 1;
            if (uVar11 <= uVar7) goto LAB_004262b0;
          }
          uVar5 = puVar9[-1];
          uVar4 = (uint)uVar5 & 0xff;
          if (uVar4 == 0xfa) {
            uVar2 = *puVar9;
            if (((uVar2 & 1) != 0) ||
               ((((uVar6 = caml_page_table_lookup(uVar2), (uVar6 & 7) != 0 &&
                  (cVar1 = *(char *)(uVar2 - 8), cVar1 != -6)) && (cVar1 != -10)) && (cVar1 != -3)))
               ) {
              puVar8[uVar7] = uVar2;
            }
          }
          else {
            if (uVar4 == 0xf9) {
              puVar9 = puVar9 + -(uVar5 >> 10);
              uVar5 = puVar9[-1];
            }
          }
          if ((uVar5 & 0x300) != 0) goto LAB_00426230;
          puVar9[-1] = uVar5 & 0xfffffffffffffcff | 0x100;
          *ppuVar10 = puVar9;
          ppuVar10 = ppuVar10 + 1;
          if (ppuVar10 < gray_vals_end) goto LAB_00426230;
          uVar7 = uVar7 + 1;
          gray_vals_cur = ppuVar10;
          realloc_gray_vals();
          ppuVar10 = gray_vals_cur;
        } while (uVar7 < uVar11);
      }
LAB_004262b0:
      param_1 = ~uVar11 + param_1;
    }
    if (markhp != (ulong *)0x0) {
      if (markhp == limit) {
        chunk = (ulong *)chunk[-1];
        if (chunk == (ulong *)0x0) {
          markhp = (ulong *)0x0;
        }
        else {
LAB_00426413:
          limit = (ulong *)((long)chunk + chunk[-2]);
          markhp = chunk;
        }
      }
      else {
        uVar7 = *markhp;
        if (((uint)uVar7 & 0x300) == 0x100) {
          *ppuVar10 = markhp + 1;
          ppuVar10 = ppuVar10 + 1;
          uVar7 = *markhp;
        }
        markhp = markhp + (uVar7 >> 10) + 1;
      }
      goto joined_r0x004261e3;
    }
    if (heap_is_pure == 0) {
      heap_is_pure = 1;
      chunk = caml_heap_start;
      goto LAB_00426413;
    }
    if (caml_gc_subphase == 0xb) {
      puVar3 = (undefined8 *)*weak_prev;
      if (puVar3 == (undefined8 *)0x0) {
        caml_gc_subphase = 0xc;
        weak_prev = &caml_weak_list_head;
      }
      else {
        uVar7 = (ulong)puVar3[-1] >> 10;
        if (1 < uVar7) {
          uVar11 = 1;
          do {
            puVar8 = (ulong *)puVar3[uVar11];
            if ((puVar8 != (ulong *)caml_weak_none) && (((ulong)puVar8 & 1) == 0)) {
              while (uVar5 = caml_page_table_lookup(puVar8), (uVar5 & 1) != 0) {
                puVar9 = puVar8 + -1;
                if ((((*(char *)(puVar8 + -1) != -6) ||
                     (puVar8 = (ulong *)*puVar8, ((ulong)puVar8 & 1) != 0)) ||
                    (uVar5 = caml_page_table_lookup(puVar8), (uVar5 & 7) == 0)) ||
                   (((cVar1 = *(char *)(puVar8 + -1), cVar1 == -6 || (cVar1 == -10)) ||
                    (cVar1 == -3)))) {
                  if ((*puVar9 & 0x300) == 0) {
                    puVar3[uVar11] = caml_weak_none;
                  }
                  break;
                }
                puVar3[uVar11] = puVar8;
                if ((ulong *)caml_weak_none == puVar8) break;
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar7);
        }
        param_1 = param_1 + ~uVar7;
        weak_prev = puVar3;
      }
    }
    else {
      if (caml_gc_subphase < 0xc) {
        if (caml_gc_subphase == 10) {
          caml_gc_subphase = 0xb;
          weak_prev = &caml_weak_list_head;
        }
      }
      else {
        if (caml_gc_subphase == 0xc) {
          puVar3 = (undefined8 *)*weak_prev;
          if (puVar3 == (undefined8 *)0x0) {
            gray_vals_cur = ppuVar10;
            caml_final_update();
            caml_gc_subphase = 0xd;
            ppuVar10 = gray_vals_cur;
          }
          else {
            if ((puVar3[-1] & 0x300) == 0) {
              *weak_prev = *puVar3;
              puVar3 = weak_prev;
            }
            weak_prev = puVar3;
            param_1 = param_1 + -1;
          }
        }
        else {
          if (caml_gc_subphase == 0xd) {
            gray_vals_cur = ppuVar10;
            caml_gc_sweep_hp = caml_heap_start;
            caml_fl_init_merge();
            caml_fl_size_at_phase_change = caml_fl_cur_size;
            gray_vals_cur = ppuVar10;
            chunk = caml_heap_start;
            limit = (ulong *)((long)caml_heap_start + caml_heap_start[-2]);
            caml_gc_sweep_hp = caml_heap_start;
            caml_gc_phase = 1;
            return;
          }
        }
      }
    }
  } while( true );
}



void caml_darken(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if ((param_1 & 1) == 0) {
    uVar1 = caml_page_table_lookup();
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 - 8);
      uVar2 = (uint)uVar1 & 0xff;
      if (uVar2 == 0xf9) {
        param_1 = param_1 + (uVar1 >> 10) * -8;
        uVar1 = *(ulong *)(param_1 - 8);
        uVar2 = (uint)uVar1 & 0xff;
      }
      if ((uVar1 & 0x300) == 0) {
        if (0xfa < uVar2) {
          *(ulong *)(param_1 - 8) = uVar1 | 0x300;
          return;
        }
        *(ulong *)(param_1 - 8) = uVar1 & 0xfffffffffffffcff | 0x100;
        *gray_vals_cur = param_1;
        gray_vals_cur = gray_vals_cur + 1;
        if (gray_vals_end <= gray_vals_cur) {
          realloc_gray_vals();
          return;
        }
      }
    }
  }
  return;
}



void sweep_slice(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  
  caml_gc_message(0x40,"Sweeping %ld words\n",param_1);
  puVar2 = caml_gc_sweep_hp;
  while( true ) {
    while( true ) {
      if (param_1 < 1) {
        caml_gc_sweep_hp = puVar2;
        return;
      }
      if (limit <= puVar2) break;
      uVar1 = *puVar2;
      caml_gc_sweep_hp = puVar2 + (uVar1 >> 10) + 1;
      param_1 = param_1 + ~(uVar1 >> 10);
      if ((uVar1 & 0x300) == 0) {
        if (((char)uVar1 == -1) && (*(code **)(puVar2[1] + 8) != (code *)0x0)) {
          (**(code **)(puVar2[1] + 8))(puVar2 + 1);
        }
        puVar2 = (ulong *)caml_fl_merge_block(puVar2 + 1);
      }
      else {
        if (((uint)uVar1 & 0x300) == 0x200) {
          caml_fl_merge = puVar2 + 1;
          puVar2 = caml_gc_sweep_hp;
        }
        else {
          *puVar2 = uVar1 & 0xfffffffffffffcff;
          puVar2 = caml_gc_sweep_hp;
        }
      }
    }
    chunk = (ulong *)chunk[-1];
    if (chunk == (ulong *)0x0) break;
    limit = (ulong *)((long)chunk + chunk[-2]);
    puVar2 = chunk;
  }
  caml_stat_major_collections = caml_stat_major_collections + 1;
  caml_gc_sweep_hp = puVar2;
  caml_gc_phase = 2;
  return;
}



void caml_finish_major_cycle(void)

{
  double dVar1;
  
  if (caml_gc_phase == 2) {
    start_cycle();
  }
  while (caml_gc_phase == 0) {
    mark_slice(0x7fffffffffffffff);
  }
  while (caml_gc_phase == 1) {
    sweep_slice(0x7fffffffffffffff);
  }
  if ((long)caml_allocated_words < 0) {
    dVar1 = (double)(caml_allocated_words >> 1 | (ulong)((uint)caml_allocated_words & 1));
    dVar1 = dVar1 + dVar1;
  }
  else {
    dVar1 = (double)caml_allocated_words;
  }
  caml_stat_major_words = dVar1 + caml_stat_major_words;
  caml_allocated_words = 0;
  return;
}



long caml_major_collection_slice(long param_1)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (caml_gc_phase == 2) {
    start_cycle();
  }
  uVar1 = caml_percent_free + 100;
  if ((long)uVar1 < 0) {
    dVar5 = (double)(uVar1 >> 1 | (ulong)((uint)uVar1 & 1));
    dVar5 = dVar5 + dVar5;
  }
  else {
    dVar5 = (double)uVar1;
  }
  if ((long)caml_percent_free < 0) {
    dVar4 = (double)(caml_percent_free >> 1 | (ulong)((uint)caml_percent_free & 1));
    dVar4 = dVar4 + dVar4;
  }
  else {
    dVar4 = (double)caml_percent_free;
  }
  if ((long)caml_allocated_words < 0) {
    dVar3 = (double)(caml_allocated_words >> 1 | (ulong)((uint)caml_allocated_words & 1));
    dVar3 = dVar3 + dVar3;
  }
  else {
    dVar3 = (double)caml_allocated_words;
  }
  dVar3 = (((dVar3 * 3.0 * dVar5) / (double)(caml_stat_heap_size >> 3)) / dVar4) * 0.5;
  if (caml_dependent_size == 0) {
    dVar4 = 0.0;
    goto LAB_00426942;
  }
  if ((long)caml_dependent_allocated < 0) {
    dVar6 = (double)(caml_dependent_allocated >> 1 | (ulong)((uint)caml_dependent_allocated & 1));
    dVar5 = dVar5 * (dVar6 + dVar6);
    if ((long)caml_dependent_size < 0) goto LAB_00426c72;
LAB_00426a62:
    dVar6 = (double)caml_dependent_size;
  }
  else {
    dVar5 = dVar5 * (double)caml_dependent_allocated;
    if (-1 < (long)caml_dependent_size) goto LAB_00426a62;
LAB_00426c72:
    dVar6 = (double)(caml_dependent_size >> 1 | (ulong)((uint)caml_dependent_size & 1));
    dVar6 = dVar6 + dVar6;
  }
  dVar4 = (dVar5 / dVar6) / dVar4;
LAB_00426942:
  if (dVar4 <= dVar3) {
    dVar4 = dVar3;
  }
  dVar5 = caml_extra_heap_resources;
  if (caml_extra_heap_resources <= dVar4) {
    dVar5 = dVar4;
  }
  caml_gc_message(0x40,"allocated_words = %lu\n");
  dVar4 = caml_extra_heap_resources * 1000000.0;
  if (9.223372036854776e+18 <= dVar4) {
    uVar1 = (long)(dVar4 - 9.223372036854776e+18) ^ 0x8000000000000000;
  }
  else {
    uVar1 = (ulong)dVar4;
  }
  caml_gc_message(0x40,"extra_heap_resources = %luu\n",uVar1);
  dVar4 = dVar5 * 1000000.0;
  if (9.223372036854776e+18 <= dVar4) {
    uVar1 = (long)(dVar4 - 9.223372036854776e+18) ^ 0x8000000000000000;
  }
  else {
    uVar1 = (ulong)dVar4;
  }
  caml_gc_message(0x40,"amount of work to do = %luu\n",uVar1);
  if (caml_gc_phase == 0) {
    uVar1 = caml_percent_free + 100;
    if ((long)uVar1 < 0) {
      dVar4 = (double)(uVar1 >> 1 | (ulong)((uint)uVar1 & 1));
      dVar4 = dVar4 + dVar4;
    }
    else {
      dVar4 = (double)uVar1;
    }
    dVar4 = ((double)(caml_stat_heap_size >> 3) * dVar5 * 250.0) / dVar4;
  }
  else {
    dVar4 = ((double)(caml_stat_heap_size >> 3) * dVar5 * 5.0) / 3.0;
  }
  lVar2 = (long)dVar4;
  caml_gc_message(0x40,"ordered work = %ld words\n",param_1);
  caml_gc_message(0x40,"computed work = %ld words\n",lVar2);
  if (param_1 == 0) {
    param_1 = lVar2;
  }
  if (caml_gc_phase == 0) {
    mark_slice(param_1);
    caml_gc_message(2,&DAT_004362f9,0);
  }
  else {
    sweep_slice(param_1);
    caml_gc_message(2,&DAT_004362fb,0);
  }
  if (caml_gc_phase == 2) {
    caml_compact_heap_maybe();
  }
  if ((long)caml_allocated_words < 0) {
    dVar5 = (double)(caml_allocated_words >> 1 | (ulong)((uint)caml_allocated_words & 1));
    dVar5 = dVar5 + dVar5;
  }
  else {
    dVar5 = (double)caml_allocated_words;
  }
  caml_stat_major_words = dVar5 + caml_stat_major_words;
  caml_extra_heap_resources = 0.0;
  caml_allocated_words = 0;
  caml_dependent_allocated = 0;
  return lVar2;
}



void caml_oldify_one(ulong **param_1,ulong **param_2)

{
  ulong **ppuVar1;
  char cVar2;
  ulong uVar3;
  ulong **ppuVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong **ppuVar7;
  uint uVar8;
  
LAB_00426cd0:
  do {
    while( true ) {
      ppuVar7 = param_1;
      if (((((ulong)ppuVar7 & 1) != 0) || (caml_young_end <= ppuVar7)) ||
         (ppuVar7 <= caml_young_start)) {
        *param_2 = (ulong *)ppuVar7;
        return;
      }
      puVar5 = ppuVar7[-1];
      ppuVar1 = ppuVar7 + -1;
      if (puVar5 == (ulong *)0x0) {
        *param_2 = *ppuVar7;
        return;
      }
      uVar8 = (uint)puVar5 & 0xff;
      if (0xf8 < uVar8) break;
      ppuVar4 = (ulong **)caml_alloc_shr((ulong)puVar5 >> 10);
      *param_2 = (ulong *)ppuVar4;
      param_1 = (ulong **)*ppuVar7;
      *ppuVar1 = (ulong *)0x0;
      *ppuVar7 = (ulong *)ppuVar4;
      param_2 = ppuVar4;
      if (1 < (ulong)puVar5 >> 10) {
        *ppuVar4 = (ulong *)param_1;
        ppuVar4[1] = (ulong *)oldify_todo_list;
        oldify_todo_list = ppuVar7;
        return;
      }
    }
    if (0xfa < uVar8) {
      uVar3 = (ulong)puVar5 >> 10;
      puVar5 = (ulong *)caml_alloc_shr(uVar3);
      if (uVar3 != 0) {
        uVar6 = 0;
        do {
          puVar5[uVar6] = (ulong)ppuVar7[uVar6];
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
      *ppuVar1 = (ulong *)0x0;
      *ppuVar7 = puVar5;
      *param_2 = puVar5;
      return;
    }
    if (uVar8 == 0xf9) {
      caml_oldify_one(ppuVar7 + -((ulong)puVar5 >> 10),param_2);
      *param_2 = *param_2 + ((ulong)puVar5 >> 10);
      return;
    }
    param_1 = (ulong **)*ppuVar7;
  } while (((ulong)param_1 & 1) != 0);
  uVar3 = caml_page_table_lookup(param_1);
  if ((uVar3 & 7) != 0) goto code_r0x00426d84;
  goto LAB_00426da5;
code_r0x00426d84:
  ppuVar4 = param_1;
  if (param_1[-1] == (ulong *)0x0) {
    ppuVar4 = (ulong **)*param_1;
  }
  cVar2 = *(char *)((long)ppuVar4 - 8);
  if (((cVar2 == -6) || (cVar2 == -3)) || (cVar2 == -10)) {
LAB_00426da5:
    ppuVar4 = (ulong **)caml_alloc_shr(1);
    *param_2 = (ulong *)ppuVar4;
    *ppuVar1 = (ulong *)0x0;
    *ppuVar7 = (ulong *)ppuVar4;
    param_2 = ppuVar4;
  }
  goto LAB_00426cd0;
}



void caml_oldify_mopup(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong **ppuVar4;
  ulong **ppuVar5;
  
  do {
    ppuVar4 = oldify_todo_list;
    if (oldify_todo_list == (ulong **)0x0) {
      return;
    }
    while( true ) {
      ppuVar5 = (ulong **)*ppuVar4;
      oldify_todo_list = (ulong **)ppuVar5[1];
      puVar1 = *ppuVar5;
      if (((((ulong)puVar1 & 1) == 0) && (puVar1 < caml_young_end)) && (caml_young_start < puVar1))
      {
        caml_oldify_one(puVar1,ppuVar5);
      }
      puVar1 = (ulong *)(ppuVar5 + -1);
      if ((ulong)ppuVar5[-1] >> 10 < 2) break;
      uVar3 = 1;
      do {
        ppuVar5 = ppuVar5 + 1;
        puVar2 = ppuVar4[uVar3];
        if (((((ulong)puVar2 & 1) == 0) && (puVar2 < caml_young_end)) && (caml_young_start < puVar2)
           ) {
          caml_oldify_one(puVar2,ppuVar5);
        }
        else {
          *ppuVar5 = puVar2;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *puVar1 >> 10);
      ppuVar4 = oldify_todo_list;
      if (oldify_todo_list == (ulong **)0x0) {
        return;
      }
    }
  } while( true );
}



void caml_empty_minor_heap(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong **ppuVar5;
  ulong **ppuVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (caml_young_ptr != caml_young_end) {
    caml_in_minor_collection = 1;
    caml_gc_message(2,&DAT_00436328,0);
    caml_oldify_local_roots();
    puVar8 = caml_ref_table._0_8_;
    if (caml_ref_table._0_8_ < caml_ref_table._24_8_) {
      do {
        puVar1 = (undefined8 *)*puVar8;
        puVar8 = puVar8 + 1;
        caml_oldify_one(*puVar1,puVar1);
      } while (puVar8 < caml_ref_table._24_8_);
    }
    caml_oldify_mopup();
    ppuVar5 = caml_weak_ref_table._0_8_;
    uVar4 = caml_young_end;
    caml_young_limit = caml_young_start;
    uVar7 = caml_young_ptr;
    for (ppuVar6 = caml_weak_ref_table._0_8_; ppuVar6 < caml_weak_ref_table._24_8_;
        ppuVar6 = ppuVar6 + 1) {
      puVar2 = *ppuVar6;
      puVar3 = (ulong *)*puVar2;
      caml_young_ptr = uVar7;
      if (((((ulong)puVar3 & 1) == 0) && (puVar3 < uVar4)) && (caml_young_limit < puVar3)) {
        if (puVar3[-1] == 0) {
          *puVar2 = *puVar3;
        }
        else {
          *puVar2 = (ulong)caml_weak_none;
        }
      }
      uVar7 = caml_young_ptr;
    }
    caml_young_ptr = uVar4;
    caml_weak_ref_table._24_8_ = ppuVar5;
    if (uVar7 < caml_young_limit) {
      uVar7 = caml_young_limit;
    }
    caml_stat_minor_words = (double)(uVar4 - uVar7 >> 3) + caml_stat_minor_words;
    caml_ref_table._24_8_ = caml_ref_table._0_8_;
    caml_ref_table._32_8_ = caml_ref_table._16_8_;
    caml_weak_ref_table._32_8_ = caml_weak_ref_table._16_8_;
    caml_gc_message(2,">",0);
    caml_in_minor_collection = 0;
  }
  caml_final_empty_young();
  return;
}



void caml_minor_collection(void)

{
  long lVar1;
  ulong uVar2;
  double dVar3;
  
  lVar1 = caml_allocated_words;
  caml_empty_minor_heap();
  uVar2 = caml_allocated_words - lVar1;
  if ((long)uVar2 < 0) {
    dVar3 = (double)(uVar2 >> 1 | (ulong)((uint)uVar2 & 1));
    dVar3 = dVar3 + dVar3;
  }
  else {
    dVar3 = (double)uVar2;
  }
  caml_stat_promoted_words = dVar3 + caml_stat_promoted_words;
  caml_stat_minor_collections = caml_stat_minor_collections + 1;
  caml_major_collection_slice(0);
  caml_force_major_slice = 0;
  caml_final_do_calls();
  caml_empty_minor_heap();
  return;
}



undefined8 caml_check_urgent_gc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  
  uVar1 = caml_local_roots;
  local_50 = param_1;
  if (caml_force_major_slice != 0) {
    local_30 = &local_50;
    local_48 = caml_local_roots;
    local_38 = 1;
    local_40 = 1;
    caml_local_roots = &local_48;
    caml_minor_collection();
  }
  caml_local_roots = (undefined8 *)uVar1;
  return local_50;
}



void caml_set_minor_heap_size(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_20;
  
  if (caml_young_ptr != caml_young_end) {
    caml_minor_collection();
  }
  lVar3 = caml_aligned_malloc(param_1,0,&local_20);
  if (lVar3 != 0) {
    lVar1 = lVar3 + param_1;
    iVar2 = caml_page_table_add(2,lVar3,lVar1);
    if (iVar2 == 0) {
      if (caml_young_start != 0) {
        caml_page_table_remove(2,caml_young_start,caml_young_end);
        free(caml_young_base);
      }
      caml_young_base = (void *)local_20;
      caml_ref_table._40_8_ = 0;
      caml_ref_table._48_8_ = 0;
      caml_young_start = lVar3;
      caml_young_end = lVar1;
      caml_young_ptr = lVar1;
      caml_young_limit = lVar3;
      caml_minor_heap_size = param_1;
      if (caml_ref_table._0_8_ != (void *)0x0) {
        caml_stat_free(caml_ref_table._0_8_);
      }
      caml_ref_table._8_8_ = 0;
      caml_ref_table._32_8_ = 0;
      caml_ref_table._16_8_ = 0;
      caml_ref_table._24_8_ = 0;
      caml_ref_table._0_8_ = (void *)0x0;
      caml_weak_ref_table._40_8_ = 0;
      caml_weak_ref_table._48_8_ = 0;
      if (caml_weak_ref_table._0_8_ != (void *)0x0) {
        caml_stat_free(caml_weak_ref_table._0_8_);
      }
      caml_weak_ref_table._0_8_ = (void *)0x0;
      caml_weak_ref_table._8_8_ = 0;
      caml_weak_ref_table._16_8_ = 0;
      caml_weak_ref_table._24_8_ = 0;
      caml_weak_ref_table._32_8_ = 0;
      return;
    }
  }
                    // WARNING: Subroutine does not return
  caml_raise_out_of_memory();
}



void caml_alloc_table(void **param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  param_1[5] = param_2;
  param_1[6] = param_3;
  pvVar2 = (void *)caml_stat_alloc(((long)param_3 + (long)param_2) * 8);
  if (*param_1 != (void *)0x0) {
    caml_stat_free(*param_1);
  }
  *param_1 = pvVar2;
  param_1[3] = pvVar2;
  pvVar1 = (void *)((long)pvVar2 + (long)param_1[5] * 8);
  param_1[2] = pvVar1;
  param_1[4] = pvVar1;
  param_1[1] = (void *)((long)pvVar2 + ((long)param_1[5] + (long)param_1[6]) * 8);
  return;
}



void caml_realloc_ref_table(void **param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  size_t __size;
  
  pvVar2 = *param_1;
  if (pvVar2 == (void *)0x0) {
    caml_alloc_table(param_1,caml_minor_heap_size >> 6,0x100);
    return;
  }
  if (param_1[4] != param_1[2]) {
    pvVar4 = param_1[5];
    pvVar3 = param_1[3];
    param_1[5] = (void *)((long)pvVar4 * 2);
    __size = (long)((long)(void *)((long)pvVar4 * 2) + (long)param_1[6]) * 8;
    sVar5 = __size + 0x3ff;
    if (-1 < (long)__size) {
      sVar5 = __size;
    }
    caml_gc_message(8,"Growing ref_table to %ldk bytes\n",(long)sVar5 >> 10);
    pvVar4 = realloc(*param_1,__size);
    *param_1 = pvVar4;
    if (pvVar4 != (void *)0x0) {
      pvVar1 = (void *)((long)pvVar4 + ((long)param_1[6] + (long)param_1[5]) * 8);
      param_1[3] = (void *)((long)pvVar4 + ((long)pvVar3 - (long)pvVar2 & 0xfffffffffffffff8U));
      param_1[2] = (void *)((long)pvVar4 + (long)param_1[5] * 8);
      param_1[1] = pvVar1;
      param_1[4] = pvVar1;
      return;
    }
                    // WARNING: Subroutine does not return
    caml_fatal_error("Fatal error: ref_table overflow\n");
  }
  caml_gc_message(8,"ref_table threshold crossed\n",0);
  param_1[4] = param_1[1];
  caml_urge_major_slice();
  return;
}



uint caml_page_table_lookup(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (param_1 >> 0xc) * -0x61c8864680b583ea >> ((byte)caml_page_table._8_4_ & 0x3f);
  uVar1 = *(ulong *)(caml_page_table._32_8_ + uVar2 * 8);
  while( true ) {
    if (((uVar1 ^ param_1) & 0xfffffffffffff000) == 0) {
      return (uint)uVar1 & 0xff;
    }
    if (uVar1 == 0) break;
    uVar2 = uVar2 + 1 & caml_page_table._16_8_;
    uVar1 = *(ulong *)(caml_page_table._32_8_ + uVar2 * 8);
  }
  return 0;
}



undefined8 caml_allocation_color(ulong param_1)

{
  if ((caml_gc_phase != 0) && ((caml_gc_phase != 1 || (param_1 < caml_gc_sweep_hp)))) {
    return 0;
  }
  return 0x300;
}



void caml_alloc_dependent_memory(ulong param_1)

{
  caml_dependent_size = caml_dependent_size + (param_1 >> 3);
  caml_dependent_allocated = caml_dependent_allocated + (param_1 >> 3);
  return;
}



void caml_free_dependent_memory(ulong param_1)

{
  if (param_1 >> 3 <= caml_dependent_size) {
    caml_dependent_size = caml_dependent_size - (param_1 >> 3);
    return;
  }
  caml_dependent_size = 0;
  return;
}



void caml_stat_resize(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = realloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise_out_of_memory();
}



// WARNING: Unknown calling convention yet parameter storage is locked

void caml_stat_free(void *__ptr)

{
  free(__ptr);
  return;
}



void caml_free_for_heap(long param_1)

{
  free(*(void **)(param_1 + -0x20));
  return;
}



void caml_stat_alloc(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    // WARNING: Subroutine does not return
    caml_raise_out_of_memory();
  }
  return;
}



void caml_modify(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  uVar2 = caml_page_table_lookup();
  if ((uVar2 & 1) != 0) {
    if (caml_gc_phase == 0) {
      caml_darken(uVar1,0);
    }
    if (((((param_2 & 1) == 0) && (param_2 < caml_young_end)) && (caml_young_start < param_2)) &&
       ((((uVar1 & 1) != 0 || (caml_young_end <= uVar1)) || (uVar1 <= caml_young_start)))) {
      if (caml_ref_table._32_8_ <= caml_ref_table._24_8_) {
        caml_realloc_ref_table(caml_ref_table);
      }
      *caml_ref_table._24_8_ = param_1;
      caml_ref_table._24_8_ = caml_ref_table._24_8_ + 1;
    }
  }
  return;
}



void caml_initialize(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  if ((((param_2 & 1) == 0) && (param_2 < caml_young_end)) && (caml_young_start < param_2)) {
    uVar1 = caml_page_table_lookup();
    if ((uVar1 & 1) != 0) {
      if (caml_ref_table._32_8_ <= caml_ref_table._24_8_) {
        caml_realloc_ref_table(caml_ref_table);
      }
      *caml_ref_table._24_8_ = param_1;
      caml_ref_table._24_8_ = caml_ref_table._24_8_ + 1;
    }
  }
  return;
}



void caml_adjust_gc_speed(ulong param_1,ulong param_2)

{
  double dVar1;
  double dVar2;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  if ((long)param_1 < 0) {
    dVar1 = (double)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
    dVar1 = dVar1 + dVar1;
  }
  else {
    dVar1 = (double)param_1;
  }
  if ((long)param_2 < 0) {
    dVar2 = (double)(param_2 >> 1 | (ulong)((uint)param_2 & 1));
    dVar2 = dVar2 + dVar2;
  }
  else {
    dVar2 = (double)param_2;
  }
  caml_extra_heap_resources = dVar1 / dVar2 + caml_extra_heap_resources;
  if (1.0 < caml_extra_heap_resources) {
    caml_extra_heap_resources = 1.0;
    caml_urge_major_slice();
  }
  if (((double)(caml_minor_heap_size >> 3) * 0.5) / (double)(caml_stat_heap_size >> 3) <
      caml_extra_heap_resources) {
    caml_urge_major_slice();
    return;
  }
  return;
}



void caml_alloc_for_heap(long param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)caml_aligned_malloc(param_1 + 0x20,0x20,&local_10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_1;
    *puVar1 = local_10;
  }
  return;
}



undefined8 caml_page_table_modify(ulong param_1,uint param_2,int param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  size_t __nmemb;
  long lVar5;
  void *__ptr;
  ulong uVar6;
  void *pvVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  
  __ptr = caml_page_table._32_8_;
  lVar5 = caml_page_table._24_8_;
  iVar8 = caml_page_table._8_4_;
  uVar2 = caml_page_table._0_8_;
  if (caml_page_table._0_8_ <= (ulong)(caml_page_table._24_8_ * 2)) {
    caml_gc_message(8,"Growing page table to %lu entries\n",caml_page_table._0_8_);
    __nmemb = uVar2 * 2;
    pvVar7 = calloc(__nmemb,8);
    if (pvVar7 == (void *)0x0) {
      caml_gc_message(8,"No room for growing page table\n",0);
      return 0xffffffff;
    }
    uVar6 = __nmemb - 1;
    iVar8 = iVar8 + -1;
    caml_page_table._0_8_ = __nmemb;
    caml_page_table._8_4_ = iVar8;
    caml_page_table._16_8_ = uVar6;
    caml_page_table._24_8_ = lVar5;
    caml_page_table._32_8_ = pvVar7;
    if (uVar2 != 0) {
      uVar10 = 0;
      do {
        uVar3 = *(ulong *)((long)__ptr + uVar10 * 8);
        if (uVar3 != 0) {
          uVar9 = (uVar3 >> 0xc) * -0x61c8864680b583ea >> ((byte)iVar8 & 0x3f);
          puVar1 = (ulong *)((long)pvVar7 + uVar9 * 8);
          uVar4 = *puVar1;
          while (uVar4 != 0) {
            uVar9 = uVar9 + 1 & uVar6;
            puVar1 = (ulong *)((long)pvVar7 + uVar9 * 8);
            uVar4 = *puVar1;
          }
          *puVar1 = uVar3;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar2);
    }
    free(__ptr);
  }
  uVar6 = (param_1 >> 0xc) * -0x61c8864680b583ea >> ((byte)caml_page_table._8_4_ & 0x3f);
  puVar1 = (ulong *)((long)caml_page_table._32_8_ + uVar6 * 8);
  uVar2 = *puVar1;
  while( true ) {
    if (uVar2 == 0) {
      *puVar1 = (long)param_3 | param_1;
      caml_page_table._24_8_ = caml_page_table._24_8_ + 1;
      return 0;
    }
    if (((uVar2 ^ param_1) & 0xfffffffffffff000) == 0) break;
    uVar6 = uVar6 + 1 & caml_page_table._16_8_;
    puVar1 = (ulong *)((long)caml_page_table._32_8_ + uVar6 * 8);
    uVar2 = *puVar1;
  }
  *puVar1 = uVar2 & (long)(int)~param_2 | (long)param_3;
  return 0;
}



undefined8 caml_page_table_remove(undefined4 param_1,ulong param_2,long param_3)

{
  int iVar1;
  
  param_2 = param_2 & 0xfffffffffffff000;
  while( true ) {
    if ((param_3 - 1U & 0xfffffffffffff000) < param_2) {
      return 0;
    }
    iVar1 = caml_page_table_modify(param_2,param_1,0);
    if (iVar1 != 0) break;
    param_2 = param_2 + 0x1000;
  }
  return 0xffffffff;
}



void caml_shrink_heap(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1 != caml_heap_start) {
    caml_stat_heap_size = caml_stat_heap_size - *(long *)(param_1 + -0x10);
    caml_gc_message(4,"Shrinking heap to %luk bytes\n",caml_stat_heap_size >> 10);
    caml_stat_heap_chunks = caml_stat_heap_chunks + -1;
    puVar2 = &caml_heap_start;
    for (lVar1 = caml_heap_start; param_1 != lVar1; lVar1 = *(long *)(lVar1 + -8)) {
      puVar2 = (undefined8 *)(lVar1 + -8);
    }
    *puVar2 = *(undefined8 *)(param_1 + -8);
    caml_page_table_remove(1,param_1,param_1 + *(long *)(param_1 + -0x10));
    caml_free_for_heap(param_1);
    return;
  }
  return;
}



undefined8 caml_page_table_add(undefined4 param_1,ulong param_2,long param_3)

{
  int iVar1;
  
  param_2 = param_2 & 0xfffffffffffff000;
  while( true ) {
    if ((param_3 - 1U & 0xfffffffffffff000) < param_2) {
      return 0;
    }
    iVar1 = caml_page_table_modify(param_2,0,param_1);
    if (iVar1 != 0) break;
    param_2 = param_2 + 0x1000;
  }
  return 0xffffffff;
}



undefined8 caml_add_to_heap(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  caml_gc_message(4,"Growing heap to %luk bytes\n",
                  (ulong)(caml_stat_heap_size + *(long *)(param_1 - 0x10)) >> 10);
  iVar1 = caml_page_table_add(1,param_1,param_1 + *(long *)(param_1 - 0x10));
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar3 = caml_heap_start;
    if ((caml_heap_start < param_1) && (caml_heap_start != 0)) {
      do {
        puVar4 = (ulong *)(uVar3 - 8);
        uVar3 = *(ulong *)(uVar3 - 8);
        if (param_1 <= uVar3) break;
      } while (uVar3 != 0);
    }
    else {
      puVar4 = &caml_heap_start;
    }
    *(ulong *)(param_1 - 8) = uVar3;
    *puVar4 = param_1;
    uVar2 = 0;
    caml_stat_heap_size = caml_stat_heap_size + *(long *)(param_1 - 0x10);
    caml_stat_heap_chunks = caml_stat_heap_chunks + 1;
    if (caml_stat_top_heap_size < caml_stat_heap_size) {
      caml_stat_top_heap_size = caml_stat_heap_size;
    }
  }
  return uVar2;
}



long * caml_alloc_shr(ulong param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  if (param_1 < 0x40000000000000) {
    plVar2 = (long *)caml_fl_allocate();
    if (plVar2 != (long *)0x0) {
LAB_00427cf4:
      if ((caml_gc_phase == 0) || ((caml_gc_phase == 1 && (caml_gc_sweep_hp <= plVar2)))) {
        *plVar2 = param_1 * 0x400 + 0x300 + (param_2 & 0xffffffff);
      }
      else {
        *plVar2 = (param_2 & 0xffffffff) + param_1 * 0x400;
      }
      caml_allocated_words = param_1 + 1 + caml_allocated_words;
      if (caml_minor_heap_size >> 3 < caml_allocated_words) {
        caml_urge_major_slice();
      }
      return plVar2 + 1;
    }
    uVar3 = caml_round_heap_chunk_size
                      ((param_1 + 1 + ((param_1 >> 2) / 0x19) * caml_percent_free) * 8);
    plVar2 = (long *)caml_alloc_for_heap(uVar3);
    if (plVar2 == (long *)0x0) {
      caml_gc_message(4,"No room for growing heap\n",0);
    }
    else {
      uVar6 = (uVar3 >> 3) - 1;
      plVar5 = plVar2;
      if (0x3fffffffffffff < uVar6) {
        plVar4 = plVar2;
        do {
          *plVar4 = -0x200;
          plVar5 = plVar4 + 0x40000000000000;
          uVar3 = uVar3 + 0xfe00000000000000;
          plVar4[1] = (long)(plVar4 + 0x40000000000001);
          plVar2[2] = (long)(plVar4 + 0x40000000000001);
          uVar6 = (uVar3 >> 3) - 1;
          plVar4 = plVar5;
        } while (0x3fffffffffffff < uVar6);
      }
      if (uVar3 < 2) {
        plVar5[1] = 0;
        if (uVar3 == 1) {
          *plVar5 = 0;
        }
      }
      else {
        *plVar5 = uVar6 * 0x400 + 0x200;
        plVar2[2] = (long)(plVar5 + 1);
        plVar5[1] = 0;
      }
      iVar1 = caml_add_to_heap(plVar2);
      if (iVar1 == 0) {
        if (plVar2 != (long *)&DAT_fffffffffffffff8) {
          caml_fl_add_blocks();
          plVar2 = (long *)caml_fl_allocate(param_1);
          goto LAB_00427cf4;
        }
      }
      else {
        caml_free_for_heap(plVar2);
      }
    }
    if (caml_in_minor_collection != 0) {
                    // WARNING: Subroutine does not return
      caml_fatal_error("Fatal error: out of memory.\n");
    }
  }
                    // WARNING: Subroutine does not return
  caml_raise_out_of_memory();
}



int caml_page_table_initialize(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  caml_page_table._16_8_ = 0;
  uVar1 = (param_1 >> 0xc) * 2;
  caml_page_table._0_8_ = 1;
  caml_page_table._8_4_ = 0x40;
  iVar3 = 0x40;
  uVar2 = 1;
  if (1 < uVar1) {
    do {
      uVar2 = uVar2 * 2;
      iVar3 = iVar3 + -1;
    } while (uVar2 < uVar1);
    caml_page_table._16_8_ = uVar2 - 1;
    caml_page_table._0_8_ = uVar2;
    caml_page_table._8_4_ = iVar3;
  }
  caml_page_table._24_8_ = 0;
  caml_page_table._32_8_ = calloc(caml_page_table._0_8_,8);
  return -(uint)(caml_page_table._32_8_ == (void *)0x0);
}



uint caml_convert_flag_list(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != (long *)0x1) {
    do {
      lVar1 = *param_1;
      param_1 = (long *)param_1[1];
      uVar2 = uVar2 | *(uint *)(param_2 + (long)(int)(lVar1 >> 1) * 4);
    } while (param_1 != (long *)0x1);
  }
  return uVar2;
}



undefined8 caml_update_dummy(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  
  cVar2 = *(char *)(param_2 + -8);
  uVar4 = *(ulong *)(param_2 + -8);
  *(char *)(param_1 + -8) = cVar2;
  if (cVar2 == -2) {
    uVar4 = *(ulong *)(param_2 + -8) >> 10;
    if (uVar4 != 0) {
      uVar3 = 0;
      do {
        *(undefined8 *)(param_1 + uVar3 * 8) = *(undefined8 *)(param_2 + uVar3 * 8);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
      return 1;
    }
  }
  else {
    uVar4 = uVar4 >> 10;
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        lVar1 = uVar3 * 8;
        uVar3 = uVar3 + 1;
        caml_modify(param_1,*(undefined8 *)(param_2 + lVar1));
        param_1 = param_1 + 8;
      } while (uVar3 < uVar4);
    }
  }
  return 1;
}



void caml_alloc_final(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = caml_final_custom_operations(param_2);
  caml_alloc_custom(uVar1,param_1 * 8,param_3,param_4);
  return;
}



long * caml_alloc_small(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = -(param_1 * 8 + 8);
  plVar1 = (long *)(lVar2 + (long)caml_young_ptr);
  if (plVar1 < caml_young_limit) {
    caml_young_ptr = plVar1 + param_1 + 1;
    caml_minor_collection();
    plVar1 = (long *)(lVar2 + (long)caml_young_ptr);
  }
  caml_young_ptr = plVar1;
  *plVar1 = param_1 * 0x400 + 0x300 + (ulong)param_2;
  return plVar1 + 1;
}



void caml_alloc_string(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = param_1 + 8;
  uVar4 = uVar5 >> 3;
  if (uVar4 < 0x101) {
    lVar1 = (uVar5 & 0xfffffffffffffff8) + 8;
    lVar6 = -lVar1;
    plVar2 = (long *)(lVar6 + (long)caml_young_ptr);
    if (plVar2 < caml_young_limit) {
      caml_young_ptr = (long *)((long)plVar2 + lVar1);
      caml_minor_collection();
      plVar2 = (long *)(lVar6 + (long)caml_young_ptr);
    }
    caml_young_ptr = plVar2;
    *plVar2 = uVar4 * 0x400 + 0x3fc;
    plVar2 = plVar2 + 1;
  }
  else {
    uVar3 = caml_alloc_shr(uVar4,0xfc);
    plVar2 = (long *)caml_check_urgent_gc(uVar3);
  }
  uVar5 = uVar5 & 0xfffffffffffffff8;
  *(undefined8 *)((long)plVar2 + (uVar5 - 8)) = 0;
  *(char *)((long)plVar2 + (uVar5 - 1)) = ((char)uVar5 + -1) - (char)param_1;
  return;
}



void * caml_copy_string(char *param_1)

{
  size_t sVar1;
  void *__dest;
  
  sVar1 = strlen(param_1);
  __dest = (void *)caml_alloc_string((long)(int)sVar1);
  memmove(__dest,param_1,(long)(int)sVar1);
  return __dest;
}



long * caml_alloc(ulong param_1,ulong param_2)

{
  void *__s;
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  plVar1 = (long *)(caml_atom_table + (param_2 & 0xffffffff) * 8 + 8);
  if (param_1 != 0) {
    uVar5 = (uint)(param_2 & 0xffffffff);
    if (0x100 < param_1) {
      __s = (void *)caml_alloc_shr();
      if (uVar5 < 0xfb) {
        memset(__s,0,param_1 * 8);
      }
      plVar1 = (long *)caml_check_urgent_gc(__s);
      return plVar1;
    }
    lVar4 = -(param_1 * 8 + 8);
    plVar2 = (long *)(lVar4 + (long)caml_young_ptr);
    if (plVar2 < caml_young_limit) {
      caml_young_ptr = plVar2 + param_1 + 1;
      caml_minor_collection();
      plVar2 = (long *)(lVar4 + (long)caml_young_ptr);
    }
    caml_young_ptr = plVar2;
    *plVar2 = param_1 * 0x400 + 0x300 + (param_2 & 0xffffffff);
    plVar1 = plVar2 + 1;
    if (uVar5 < 0xfb) {
      uVar3 = 0;
      do {
        plVar2[uVar3 + 1] = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 != param_1);
    }
  }
  return plVar1;
}



undefined8 caml_alloc_dummy_float(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)(int)(param_1 >> 1);
  if (lVar2 == 0) {
    return 0x658068;
  }
  uVar1 = caml_alloc(lVar2,0);
  return uVar1;
}



undefined8 caml_alloc_dummy(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)(int)(param_1 >> 1);
  if (lVar2 == 0) {
    return 0x658068;
  }
  uVar1 = caml_alloc(lVar2,0);
  return uVar1;
}



long caml_alloc_array(code *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  long *local_58;
  long local_38;
  undefined8 local_30;
  
  uVar2 = caml_local_roots;
  if (*param_2 != 0) {
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
    } while (param_2[uVar3] != 0);
    if (uVar3 != 0) {
      local_60 = &local_30;
      local_78 = caml_local_roots;
      local_68 = 1;
      uVar4 = 0;
      local_58 = &local_38;
      local_70 = 2;
      local_38 = 0;
      local_30 = 0;
      caml_local_roots = (undefined *)&local_78;
      local_38 = caml_alloc(uVar3,0);
      do {
        local_30 = (*param_1)(param_2[uVar4]);
        lVar1 = uVar4 * 8;
        uVar4 = uVar4 + 1;
        caml_modify(lVar1 + local_38,local_30);
      } while (uVar4 < uVar3);
      caml_local_roots = (undefined *)uVar2;
      return local_38;
    }
  }
  return 0x658068;
}



void caml_copy_string_array(undefined8 param_1)

{
  caml_alloc_array(caml_copy_string,param_1);
  return;
}



void caml_alloc_tuple(undefined8 param_1)

{
  caml_alloc(param_1,0);
  return;
}



void compare_free_stack(void)

{
  if (compare_stack != compare_stack_init) {
    free(compare_stack);
    compare_stack = compare_stack_init;
    compare_stack_limit = (undefined *)&locale_is_set_3458;
  }
  return;
}



void compare_stack_overflow(void)

{
  caml_gc_message(4,"Stack overflow in structural comparison\n",0);
  compare_free_stack();
                    // WARNING: Subroutine does not return
  caml_raise_out_of_memory();
}



// WARNING: Removing unreachable block (ram,0x00428836)
// WARNING: Removing unreachable block (ram,0x00428840)
// WARNING: Removing unreachable block (ram,0x00428842)
// WARNING: Removing unreachable block (ram,0x00428896)
// WARNING: Removing unreachable block (ram,0x004288a0)
// WARNING: Removing unreachable block (ram,0x004288a6)

long compare_val(double **param_1,double **param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  double **ppdVar13;
  bool bVar14;
  byte bVar15;
  double *pdVar16;
  double *pdVar17;
  
  bVar15 = 0;
  ppdVar13 = (double **)compare_stack;
LAB_0042855a:
  bVar14 = param_1 != param_2;
  if ((bVar14) || (param_3 == 0)) {
    if (((ulong)param_1 & 1) != 0) {
      if (bVar14) {
        if (((ulong)param_2 & 1) != 0) {
LAB_00428737:
          return ((long)param_1 >> 1) - ((long)param_2 >> 1);
        }
        uVar5 = caml_page_table_lookup(param_2);
        if ((uVar5 & 7) == 0) {
          return -1;
        }
        if (*(char *)(param_2 + -1) != -6) {
          return -1;
        }
        goto LAB_00428720;
      }
      goto LAB_004285d1;
    }
    if (((ulong)param_2 & 1) != 0) {
      uVar5 = caml_page_table_lookup(param_1);
      if ((uVar5 & 7) == 0) {
        return 1;
      }
      if (*(char *)(param_1 + -1) != -6) {
        return 1;
      }
LAB_00428650:
      param_1 = (double **)*param_1;
      goto LAB_0042855a;
    }
    uVar5 = caml_page_table_lookup(param_1);
    if (((uVar5 & 7) != 0) &&
       (uVar5 = caml_page_table_lookup(param_2), puVar3 = compare_stack, (uVar5 & 7) != 0)) {
      bVar1 = *(byte *)(param_1 + -1);
      bVar2 = *(byte *)(param_2 + -1);
      if (bVar1 == 0xfa) goto LAB_00428650;
      if (bVar2 != 0xfa) {
        if (bVar1 != bVar2) {
          return (ulong)bVar1 - (ulong)bVar2;
        }
        switch(bVar1) {
        case 0xf7:
        case 0xf9:
          compare_free_stack();
                    // WARNING: Subroutine does not return
          caml_invalid_argument("equal: functional value");
        case 0xf8:
          uVar5 = (long)param_1[1] >> 1;
          uVar10 = (long)param_2[1] >> 1;
          if (uVar5 != uVar10) {
LAB_00428940:
            return uVar5 - uVar10;
          }
          break;
        default:
          uVar5 = (ulong)param_1[-1] >> 10;
          uVar10 = (ulong)param_2[-1] >> 10;
          if (uVar5 != uVar10) goto LAB_00428940;
          if (uVar5 != 0) {
            if (uVar5 != 1) {
              ppdVar13 = ppdVar13 + 3;
              if (compare_stack_limit <= ppdVar13) {
                lVar7 = (long)compare_stack_limit - (long)compare_stack >> 2;
                if (0xfffff < (ulong)(lVar7 * -0x5555555555555555)) {
                  compare_stack_overflow();
                }
                if (compare_stack == compare_stack_init) {
                  puVar8 = (undefined8 *)malloc(lVar7 * 8);
                  if (puVar8 == (undefined8 *)0x0) {
                    compare_stack_overflow();
                  }
                  puVar11 = (undefined8 *)compare_stack_init;
                  puVar12 = puVar8;
                  for (lVar9 = 0x300; lVar9 != 0; lVar9 = lVar9 + -1) {
                    *puVar12 = *puVar11;
                    puVar11 = puVar11 + (ulong)bVar15 * -2 + 1;
                    puVar12 = puVar12 + (ulong)bVar15 * -2 + 1;
                  }
                }
                else {
                  puVar8 = (undefined8 *)realloc(compare_stack,lVar7 * 8);
                  if (puVar8 == (undefined8 *)0x0) {
                    compare_stack_overflow();
                  }
                }
                compare_stack_limit = (undefined *)(puVar8 + lVar7);
                ppdVar13 = (double **)
                           ((long)puVar8 + ((long)ppdVar13 - (long)puVar3 & 0xfffffffffffffff8U));
                compare_stack = (undefined *)puVar8;
              }
              *ppdVar13 = (double *)(param_1 + 1);
              ppdVar13[1] = (double *)(param_2 + 1);
              ppdVar13[2] = (double *)(uVar5 - 1);
            }
            param_1 = (double **)*param_1;
            goto LAB_00428720;
          }
          break;
        case 0xfb:
switchD_0042874b_caseD_fb:
          compare_free_stack();
                    // WARNING: Subroutine does not return
          caml_invalid_argument("equal: abstract value");
        case 0xfc:
          if (bVar14) {
            uVar10 = caml_string_length(param_1);
            uVar6 = caml_string_length();
            uVar5 = uVar10;
            if (uVar6 <= uVar10) {
              uVar5 = uVar6;
            }
            if (uVar5 != 0) {
              while( true ) {
                if (*(byte *)param_1 != *(byte *)param_2) {
                  return (ulong)*(byte *)param_1 - (ulong)*(byte *)param_2;
                }
                uVar5 = uVar5 - 1;
                if (uVar5 == 0) break;
                param_1 = (double **)((long)param_1 + 1);
                param_2 = (double **)((long)param_2 + 1);
              }
            }
            if (uVar10 != uVar6) {
              return uVar10 - uVar6;
            }
          }
          break;
        case 0xfd:
          pdVar17 = *param_1;
          pdVar16 = *param_2;
          if ((double)pdVar17 < (double)pdVar16) {
            return -1;
          }
          if ((double)pdVar16 < (double)pdVar17) {
            return 1;
          }
          if ((double)pdVar17 != (double)pdVar16) {
joined_r0x00428820:
            if (param_3 == 0) {
              return -0x8000000000000000;
            }
            return 1;
          }
          break;
        case 0xfe:
          uVar5 = (ulong)param_1[-1] >> 10;
          uVar10 = (ulong)param_2[-1] >> 10;
          if (uVar5 != uVar10) goto LAB_00428940;
          if (uVar5 != 0) {
            pdVar17 = *param_1;
            pdVar16 = *param_2;
            if ((double)pdVar17 < (double)pdVar16) {
              return -1;
            }
            if ((double)pdVar16 < (double)pdVar17) {
              return 1;
            }
            uVar10 = 0;
            while( true ) {
              if ((double)pdVar17 != (double)pdVar16) goto joined_r0x00428820;
              uVar10 = uVar10 + 1;
              if (uVar5 <= uVar10) break;
              pdVar17 = param_1[uVar10];
              pdVar16 = param_2[uVar10];
              if ((double)pdVar17 < (double)pdVar16) {
                return -1;
              }
              if ((double)pdVar16 < (double)pdVar17) {
                return 1;
              }
            }
          }
          break;
        case 0xff:
          if ((code *)(*param_1)[2] == (code *)0x0) goto switchD_0042874b_caseD_fb;
          caml_compare_unordered = 0;
          iVar4 = (*(code *)(*param_1)[2])(param_1);
          if ((param_3 == 0) && (caml_compare_unordered != 0)) {
            return -0x8000000000000000;
          }
          if (iVar4 != 0) {
            return (long)iVar4;
          }
        }
        goto LAB_004285d1;
      }
LAB_00428720:
      param_2 = (double **)*param_2;
      goto LAB_0042855a;
    }
    if (bVar14) goto LAB_00428737;
  }
LAB_004285d1:
  if (ppdVar13 == (double **)compare_stack) {
    return 0;
  }
  param_1 = (double **)**ppdVar13;
  *ppdVar13 = *ppdVar13 + 1;
  param_2 = (double **)*ppdVar13[1];
  ppdVar13[1] = ppdVar13[1] + 1;
  pdVar17 = ppdVar13[2];
  ppdVar13[2] = (double *)((long)pdVar17 + -1);
  if ((double *)((long)pdVar17 + -1) == (double *)0x0) {
    ppdVar13 = ppdVar13 + -3;
  }
  goto LAB_0042855a;
}



long caml_greaterequal(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = compare_val(param_1,param_2,0);
  if (compare_stack != compare_stack_init) {
    compare_free_stack();
  }
  return (lVar1 >> 0x3f & 0xfffffffffffffffeU) + 3;
}



char caml_greaterthan(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = compare_val(param_1,param_2,0);
  if (compare_stack != compare_stack_init) {
    compare_free_stack();
  }
  return (0 < lVar1) * '\x02' + '\x01';
}



char caml_lessequal(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = compare_val(param_1,param_2,0);
  if (compare_stack != compare_stack_init) {
    compare_free_stack();
  }
  return (lVar1 != -0x8000000000000000 && lVar1 < 1) * '\x02' + '\x01';
}



long caml_lessthan(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = compare_val(param_1,param_2,0);
  if (compare_stack != compare_stack_init) {
    compare_free_stack();
  }
  return (-(ulong)(0x7ffffffffffffffe < lVar1 + 0x7fffffffffffffffU) & 0xfffffffffffffffe) + 3;
}



long caml_notequal(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = compare_val(param_1,param_2,0);
  if (compare_stack != compare_stack_init) {
    compare_free_stack();
  }
  return (-(ulong)(lVar1 == 0) & 0xfffffffffffffffe) + 3;
}



char caml_equal(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = compare_val(param_1,param_2,0);
  if (compare_stack != compare_stack_init) {
    compare_free_stack();
  }
  return (-(lVar1 == 0) & 2U) + 1;
}



long caml_compare(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = compare_val(param_1,param_2,1);
  if (compare_stack != compare_stack_init) {
    compare_free_stack();
  }
  lVar2 = -1;
  if (-1 < lVar1) {
    lVar2 = (-(ulong)(lVar1 == 0) & 0xfffffffffffffffe) + 3;
  }
  return lVar2;
}



long caml_int_compare(long param_1,long param_2)

{
  return (long)(int)((uint)(param_2 < param_1) - (uint)(param_1 < param_2)) * 2 + 1;
}



int int32_cmp(long param_1,long param_2)

{
  return (uint)(*(int *)(param_2 + 8) < *(int *)(param_1 + 8)) -
         (uint)(*(int *)(param_1 + 8) < *(int *)(param_2 + 8));
}



long int32_hash(long param_1)

{
  return (long)*(int *)(param_1 + 8);
}



long caml_int32_to_int(long param_1)

{
  return (long)*(int *)(param_1 + 8) * 2 + 1;
}



long caml_int32_compare(long param_1,long param_2)

{
  return (long)(int)((uint)(*(int *)(param_2 + 8) < *(int *)(param_1 + 8)) -
                    (uint)(*(int *)(param_1 + 8) < *(int *)(param_2 + 8))) * 2 + 1;
}



int int64_cmp(long param_1,long param_2)

{
  return (uint)(*(long *)(param_2 + 8) < *(long *)(param_1 + 8)) -
         (uint)(*(long *)(param_1 + 8) < *(long *)(param_2 + 8));
}



undefined8 int64_hash(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



long caml_int64_to_int(long param_1)

{
  return *(long *)(param_1 + 8) * 2 + 1;
}



long caml_int64_compare(long param_1,long param_2)

{
  return (long)(int)((uint)(*(long *)(param_2 + 8) < *(long *)(param_1 + 8)) -
                    (uint)(*(long *)(param_1 + 8) < *(long *)(param_2 + 8))) * 2 + 1;
}



int nativeint_cmp(long param_1,long param_2)

{
  return (uint)(*(long *)(param_2 + 8) < *(long *)(param_1 + 8)) -
         (uint)(*(long *)(param_1 + 8) < *(long *)(param_2 + 8));
}



undefined8 nativeint_hash(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



long caml_nativeint_to_int(long param_1)

{
  return *(long *)(param_1 + 8) * 2 + 1;
}



long caml_nativeint_compare(long param_1,long param_2)

{
  return (long)(int)((uint)(*(long *)(param_2 + 8) < *(long *)(param_1 + 8)) -
                    (uint)(*(long *)(param_1 + 8) < *(long *)(param_2 + 8))) * 2 + 1;
}



undefined8 int32_deserialize(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = caml_deserialize_sint_4();
  *param_1 = uVar1;
  return 4;
}



undefined8 int64_deserialize(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = caml_deserialize_sint_8();
  *param_1 = uVar1;
  return 8;
}



undefined8 nativeint_deserialize(long *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = caml_deserialize_uint_1();
  if (iVar1 == 1) {
    iVar1 = caml_deserialize_sint_4();
    *param_1 = (long)iVar1;
    return 8;
  }
  if (iVar1 != 2) {
    caml_deserialize_error("input_value: ill-formed native integer");
    return 8;
  }
  lVar2 = caml_deserialize_sint_8();
  *param_1 = lVar2;
  return 8;
}



void int32_serialize(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  caml_serialize_int_4(*(undefined4 *)(param_1 + 8));
  *param_3 = 4;
  *param_2 = 4;
  return;
}



void nativeint_serialize(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 + 0x80000000 < 0x100000000) {
    caml_serialize_int_1(1);
    caml_serialize_int_4(uVar1 & 0xffffffff);
  }
  else {
    caml_serialize_int_1(2);
    caml_serialize_int_8(uVar1);
  }
  *param_2 = 4;
  *param_3 = 8;
  return;
}



void int64_serialize(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  caml_serialize_int_8(*(undefined8 *)(param_1 + 8));
  *param_3 = 8;
  *param_2 = 8;
  return;
}



ulong parse_intnat(char *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  
  iVar7 = 1;
  cVar1 = *param_1;
  pcVar8 = param_1;
  if (cVar1 == '-') {
    pcVar8 = param_1 + 1;
    cVar1 = param_1[1];
    iVar7 = -1;
  }
  uVar5 = 0x1999999999999999;
  lVar6 = 10;
  iVar9 = 10;
  if (cVar1 == '0') {
    if ((byte)(pcVar8[1] + 0xbeU) < 0x37) {
      uVar5 = 1 << (pcVar8[1] + 0xbeU & 0x3f);
      if ((uVar5 & 0x40000000400000) == 0) {
        if ((uVar5 & 0x200000002000) == 0) {
          if ((uVar5 & 0x100000001) == 0) goto LAB_00428f6e;
          pcVar8 = pcVar8 + 2;
          uVar5 = 0x7fffffffffffffff;
          lVar6 = 2;
          cVar1 = *pcVar8;
          iVar9 = 2;
        }
        else {
          pcVar8 = pcVar8 + 2;
          uVar5 = 0x1fffffffffffffff;
          lVar6 = 8;
          cVar1 = *pcVar8;
          iVar9 = 8;
        }
      }
      else {
        pcVar8 = pcVar8 + 2;
        uVar5 = 0xfffffffffffffff;
        lVar6 = 0x10;
        cVar1 = *pcVar8;
        iVar9 = 0x10;
      }
      goto LAB_00428f41;
    }
LAB_00428f6e:
    lVar6 = 10;
    iVar9 = 10;
    uVar5 = 0x1999999999999999;
    iVar2 = 0x30;
LAB_00428f90:
    iVar2 = iVar2 + -0x30;
  }
  else {
LAB_00428f41:
    iVar2 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) goto LAB_00428f90;
    if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar2 = iVar2 + -0x37;
    }
    else {
      if (5 < (byte)(cVar1 + 0x9fU)) goto LAB_00429094;
      iVar2 = iVar2 + -0x57;
    }
  }
  if ((-1 < iVar2) && (iVar2 < iVar9)) {
    uVar3 = SEXT48(iVar2);
    while( true ) {
      do {
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar8;
      } while (cVar1 == '_');
      iVar2 = (int)cVar1;
      if (9 < (byte)(cVar1 - 0x30U)) break;
      iVar2 = iVar2 + -0x30;
LAB_00428fb3:
      if ((iVar2 < 0) || (iVar9 <= iVar2)) goto LAB_00429007;
      if ((uVar5 < uVar3) ||
         (uVar4 = uVar3 * lVar6, uVar3 = uVar4 + (long)iVar2, CARRY8(uVar4,(long)iVar2)))
      goto LAB_00429094;
    }
    if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar2 = iVar2 + -0x37;
      goto LAB_00428fb3;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      iVar2 = iVar2 + -0x57;
      goto LAB_00428fb3;
    }
LAB_00429007:
    lVar6 = caml_string_length(param_1);
    if (pcVar8 == param_1 + lVar6) {
      if (iVar9 == 10) {
        if (uVar3 <= (ulong)(1 << ((byte)param_2 - 1 & 0x3f))) goto LAB_00429034;
      }
      else {
        if ((0x3f < param_2) || (uVar3 < (ulong)(1 << ((byte)param_2 & 0x3f)))) {
LAB_00429034:
          uVar5 = -uVar3;
          if (iVar7 != -1) {
            uVar5 = uVar3;
          }
          return uVar5;
        }
      }
    }
  }
LAB_00429094:
                    // WARNING: Subroutine does not return
  caml_failwith("int_of_string");
}



long caml_int_of_string(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = parse_intnat(param_1,0x3f);
  return lVar1 * 2 + 1;
}



undefined8
parse_format(char *param_1,char *param_2,void *param_3,undefined8 param_4,undefined *param_5)

{
  char cVar1;
  undefined uVar2;
  size_t __n;
  size_t __n_00;
  long lVar3;
  undefined8 uVar4;
  undefined *__dest;
  
  __n = caml_string_length();
  __n_00 = strlen(param_2);
  if (0x1f < __n + 1 + __n_00) {
                    // WARNING: Subroutine does not return
    caml_invalid_argument("format_int: format too long");
  }
  memmove(param_3,param_1,__n);
  __dest = (undefined *)((long)param_3 + (__n - 1));
  cVar1 = __dest[-1];
  uVar2 = *__dest;
  if (((cVar1 == 'n') || (cVar1 == 'l')) || (cVar1 == 'L')) {
    __dest = __dest + -1;
  }
  memmove(__dest,param_2,__n_00);
  (__dest + __n_00)[1] = 0;
  __dest[__n_00] = uVar2;
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      *param_5 = uVar2;
      return param_4;
    }
    if ((byte)(cVar1 - 0x30U) < 10) break;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  lVar3 = strtol(param_1,(char **)0x0,10);
  *param_5 = uVar2;
  if ((int)lVar3 + 5 < 0x20) {
    return param_4;
  }
  uVar4 = caml_stat_alloc((long)((int)lVar3 + 6));
  return uVar4;
}



undefined8 caml_nativeint_format(undefined8 param_1,long param_2)

{
  undefined *__ptr;
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_79;
  undefined local_78 [32];
  undefined local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = (undefined *)parse_format(param_1,"l",local_58,local_78,&local_79);
  __sprintf_chk(__ptr,1,0xffffffffffffffff,local_58,*(undefined8 *)(param_2 + 8));
  uVar1 = caml_copy_string(__ptr);
  if (__ptr != local_78) {
    caml_stat_free(__ptr);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 caml_int64_format(undefined8 param_1,long param_2)

{
  undefined *__ptr;
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_79;
  undefined local_78 [32];
  undefined local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = (undefined *)parse_format(param_1,"l",local_58,local_78,&local_79);
  __sprintf_chk(__ptr,1,0xffffffffffffffff,local_58,*(undefined8 *)(param_2 + 8));
  uVar1 = caml_copy_string(__ptr);
  if (__ptr != local_78) {
    caml_stat_free(__ptr);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 caml_int32_format(undefined8 param_1,long param_2)

{
  undefined *__ptr;
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_79;
  undefined local_78 [32];
  undefined local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = (undefined *)parse_format(param_1,"",local_58,local_78,&local_79);
  __sprintf_chk(__ptr,1,0xffffffffffffffff,local_58,*(undefined4 *)(param_2 + 8));
  uVar1 = caml_copy_string(__ptr);
  if (__ptr != local_78) {
    caml_stat_free(__ptr);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 caml_format_int(undefined8 param_1,ulong param_2)

{
  undefined *__ptr;
  undefined8 uVar1;
  long in_FS_OFFSET;
  char local_79;
  undefined local_78 [32];
  undefined local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = (undefined *)parse_format(param_1,"l",local_58,local_78,&local_79);
  if (((byte)(local_79 + 0xa8U) < 0x21) && ((1 << (local_79 + 0xa8U & 0x3f) & 0x120800001U) != 0)) {
    param_2 = param_2 >> 1;
  }
  else {
    param_2 = (long)param_2 >> 1;
  }
  __sprintf_chk(__ptr,1,0xffffffffffffffff,local_58,param_2);
  uVar1 = caml_copy_string(__ptr);
  if (__ptr != local_78) {
    caml_stat_free(__ptr);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void caml_nativeint_to_float(long param_1)

{
  caml_copy_double((double)*(long *)(param_1 + 8));
  return;
}



void caml_int64_float_of_bits(long param_1)

{
  caml_copy_double(*(undefined8 *)(param_1 + 8));
  return;
}



void caml_int64_to_float(long param_1)

{
  caml_copy_double((double)*(long *)(param_1 + 8));
  return;
}



void caml_int32_float_of_bits(long param_1)

{
  caml_copy_double((double)*(float *)(param_1 + 8));
  return;
}



void caml_int32_to_float(long param_1)

{
  caml_copy_double((double)*(int *)(param_1 + 8));
  return;
}



void caml_copy_nativeint(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = caml_alloc_custom(caml_nativeint_ops,8,0,1);
  *(undefined8 *)(lVar1 + 8) = param_1;
  return;
}



void caml_nativeint_of_string(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = parse_intnat(param_1,0x40);
  caml_copy_nativeint(uVar1);
  return;
}



void caml_nativeint_of_int32(long param_1)

{
  caml_copy_nativeint((long)*(int *)(param_1 + 8));
  return;
}



void caml_nativeint_of_float(double *param_1)

{
  caml_copy_nativeint((long)*param_1);
  return;
}



void caml_nativeint_of_int(long param_1)

{
  caml_copy_nativeint(param_1 >> 1);
  return;
}



void caml_nativeint_shift_right_unsigned(long param_1,ulong param_2)

{
  caml_copy_nativeint(*(ulong *)(param_1 + 8) >> ((byte)(param_2 >> 1) & 0x3f));
  return;
}



void caml_nativeint_shift_right(long param_1,ulong param_2)

{
  caml_copy_nativeint(*(long *)(param_1 + 8) >> ((byte)(param_2 >> 1) & 0x3f));
  return;
}



void caml_nativeint_shift_left(long param_1,ulong param_2)

{
  caml_copy_nativeint(*(long *)(param_1 + 8) << ((byte)(param_2 >> 1) & 0x3f));
  return;
}



void caml_nativeint_xor(long param_1,long param_2)

{
  caml_copy_nativeint(*(ulong *)(param_2 + 8) ^ *(ulong *)(param_1 + 8));
  return;
}



void caml_nativeint_or(long param_1,long param_2)

{
  caml_copy_nativeint(*(ulong *)(param_2 + 8) | *(ulong *)(param_1 + 8));
  return;
}



void caml_nativeint_and(long param_1,long param_2)

{
  caml_copy_nativeint(*(ulong *)(param_2 + 8) & *(ulong *)(param_1 + 8));
  return;
}



void caml_nativeint_mod(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_zero_divide();
  }
  if ((lVar1 == -1) && (*(long *)(param_1 + 8) == -0x8000000000000000)) {
    caml_copy_nativeint(0);
    return;
  }
  caml_copy_nativeint(*(long *)(param_1 + 8) % lVar1);
  return;
}



long caml_nativeint_div(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_zero_divide();
  }
  if ((lVar2 == -1) && (lVar1 == -0x8000000000000000)) {
    return param_1;
  }
  lVar2 = caml_copy_nativeint(lVar1 / lVar2,lVar2,lVar1 % lVar2);
  return lVar2;
}



void caml_nativeint_mul(long param_1,long param_2)

{
  caml_copy_nativeint(*(long *)(param_2 + 8) * *(long *)(param_1 + 8));
  return;
}



void caml_nativeint_sub(long param_1,long param_2)

{
  caml_copy_nativeint(*(long *)(param_1 + 8) - *(long *)(param_2 + 8));
  return;
}



void caml_nativeint_add(long param_1,long param_2)

{
  caml_copy_nativeint(*(long *)(param_2 + 8) + *(long *)(param_1 + 8));
  return;
}



void caml_nativeint_neg(long param_1)

{
  caml_copy_nativeint(-*(long *)(param_1 + 8));
  return;
}



void caml_int64_to_nativeint(long param_1)

{
  caml_copy_nativeint(*(undefined8 *)(param_1 + 8));
  return;
}



void caml_copy_int64(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = caml_alloc_custom(caml_int64_ops,8,0,1);
  *(undefined8 *)(lVar1 + 8) = param_1;
  return;
}



void caml_int64_bits_of_float(undefined8 *param_1)

{
  caml_copy_int64(*param_1);
  return;
}



void caml_int64_of_string(char *param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  
  iVar2 = 1;
  cVar1 = *param_1;
  pcVar5 = param_1;
  if (cVar1 == '-') {
    pcVar5 = param_1 + 1;
    cVar1 = param_1[1];
    iVar2 = -1;
  }
  uVar3 = 0x1999999999999999;
  lVar4 = 10;
  iVar9 = 10;
  if (cVar1 == '0') {
    if ((byte)(pcVar5[1] + 0xbeU) < 0x37) {
      uVar3 = 1 << (pcVar5[1] + 0xbeU & 0x3f);
      if ((uVar3 & 0x40000000400000) == 0) {
        if ((uVar3 & 0x200000002000) == 0) {
          if ((uVar3 & 0x100000001) == 0) goto LAB_004298b7;
          pcVar5 = pcVar5 + 2;
          uVar3 = 0x7fffffffffffffff;
          lVar4 = 2;
          cVar1 = *pcVar5;
          iVar9 = 2;
        }
        else {
          pcVar5 = pcVar5 + 2;
          uVar3 = 0x1fffffffffffffff;
          lVar4 = 8;
          cVar1 = *pcVar5;
          iVar9 = 8;
        }
      }
      else {
        pcVar5 = pcVar5 + 2;
        uVar3 = 0xfffffffffffffff;
        lVar4 = 0x10;
        cVar1 = *pcVar5;
        iVar9 = 0x10;
      }
      goto LAB_00429887;
    }
LAB_004298b7:
    uVar3 = 0x1999999999999999;
    iVar9 = 10;
    lVar4 = 10;
    iVar6 = 0x30;
LAB_004298d8:
    iVar6 = iVar6 + -0x30;
  }
  else {
LAB_00429887:
    iVar6 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) goto LAB_004298d8;
    if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar6 = iVar6 + -0x37;
    }
    else {
      if (5 < (byte)(cVar1 + 0x9fU)) goto LAB_00429924;
      iVar6 = iVar6 + -0x57;
    }
  }
  if ((-1 < iVar6) && (iVar6 < iVar9)) {
    uVar7 = SEXT48(iVar6);
    while( true ) {
      do {
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
      } while (cVar1 == '_');
      iVar6 = (int)cVar1;
      if (9 < (byte)(cVar1 - 0x30U)) break;
      iVar6 = iVar6 + -0x30;
LAB_0042990b:
      if ((iVar6 < 0) || (iVar9 <= iVar6)) goto LAB_00429947;
      if ((uVar3 < uVar7) ||
         (uVar8 = uVar7 * lVar4, uVar7 = uVar8 + (long)iVar6, CARRY8(uVar8,(long)iVar6)))
      goto LAB_00429924;
    }
    if ((byte)(cVar1 + 0xbfU) < 6) {
      iVar6 = iVar6 + -0x37;
      goto LAB_0042990b;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      iVar6 = iVar6 + -0x57;
      goto LAB_0042990b;
    }
LAB_00429947:
    lVar4 = caml_string_length(param_1);
    if ((pcVar5 == param_1 + lVar4) && ((iVar9 != 10 || (uVar7 < 0x8000000000000001)))) {
      if (iVar2 == -1) {
        uVar7 = -uVar7;
      }
      caml_copy_int64(uVar7);
      return;
    }
  }
LAB_00429924:
                    // WARNING: Subroutine does not return
  caml_failwith("int_of_string");
}



void caml_int64_of_nativeint(long param_1)

{
  caml_copy_int64(*(undefined8 *)(param_1 + 8));
  return;
}



void caml_int64_of_int32(long param_1)

{
  caml_copy_int64((long)*(int *)(param_1 + 8));
  return;
}



void caml_int64_of_float(double *param_1)

{
  caml_copy_int64((long)*param_1);
  return;
}



void caml_int64_of_int(long param_1)

{
  caml_copy_int64(param_1 >> 1);
  return;
}



void caml_int64_shift_right_unsigned(long param_1,ulong param_2)

{
  caml_copy_int64(*(ulong *)(param_1 + 8) >> ((byte)(param_2 >> 1) & 0x3f));
  return;
}



void caml_int64_shift_right(long param_1,ulong param_2)

{
  caml_copy_int64(*(long *)(param_1 + 8) >> ((byte)(param_2 >> 1) & 0x3f));
  return;
}



void caml_int64_shift_left(long param_1,ulong param_2)

{
  caml_copy_int64(*(long *)(param_1 + 8) << ((byte)(param_2 >> 1) & 0x3f));
  return;
}



void caml_int64_xor(long param_1,long param_2)

{
  caml_copy_int64(*(ulong *)(param_2 + 8) ^ *(ulong *)(param_1 + 8));
  return;
}



void caml_int64_or(long param_1,long param_2)

{
  caml_copy_int64(*(ulong *)(param_2 + 8) | *(ulong *)(param_1 + 8));
  return;
}



void caml_int64_and(long param_1,long param_2)

{
  caml_copy_int64(*(ulong *)(param_2 + 8) & *(ulong *)(param_1 + 8));
  return;
}



void caml_int64_mod(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_zero_divide();
  }
  if ((lVar1 == -1) && (*(long *)(param_1 + 8) == -0x8000000000000000)) {
    caml_copy_int64(0);
    return;
  }
  caml_copy_int64(*(long *)(param_1 + 8) % lVar1);
  return;
}



long caml_int64_div(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_zero_divide();
  }
  if ((lVar2 == -1) && (lVar1 == -0x8000000000000000)) {
    return param_1;
  }
  lVar2 = caml_copy_int64(lVar1 / lVar2,lVar2,lVar1 % lVar2);
  return lVar2;
}



void caml_int64_mul(long param_1,long param_2)

{
  caml_copy_int64(*(long *)(param_2 + 8) * *(long *)(param_1 + 8));
  return;
}



void caml_int64_sub(long param_1,long param_2)

{
  caml_copy_int64(*(long *)(param_1 + 8) - *(long *)(param_2 + 8));
  return;
}



void caml_int64_add(long param_1,long param_2)

{
  caml_copy_int64(*(long *)(param_2 + 8) + *(long *)(param_1 + 8));
  return;
}



void caml_int64_neg(long param_1)

{
  caml_copy_int64(-*(long *)(param_1 + 8));
  return;
}



void caml_copy_int32(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = caml_alloc_custom(caml_int32_ops,4,0,1);
  *(undefined4 *)(lVar1 + 8) = param_1;
  return;
}



void caml_nativeint_to_int32(long param_1)

{
  caml_copy_int32(*(undefined8 *)(param_1 + 8));
  return;
}



void caml_int64_to_int32(long param_1)

{
  caml_copy_int32(*(undefined8 *)(param_1 + 8));
  return;
}



void caml_int32_bits_of_float(double *param_1)

{
  caml_copy_int32((float)*param_1);
  return;
}



void caml_int32_of_string(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = parse_intnat(param_1,0x20);
  caml_copy_int32(uVar1);
  return;
}



void caml_int32_of_float(double *param_1)

{
  caml_copy_int32((int)*param_1);
  return;
}



void caml_int32_of_int(long param_1)

{
  caml_copy_int32(param_1 >> 1);
  return;
}



void caml_int32_shift_right_unsigned(long param_1,ulong param_2)

{
  caml_copy_int32(*(uint *)(param_1 + 8) >> ((byte)(param_2 >> 1) & 0x1f));
  return;
}



void caml_int32_shift_right(long param_1,ulong param_2)

{
  caml_copy_int32(*(int *)(param_1 + 8) >> ((byte)(param_2 >> 1) & 0x1f));
  return;
}



void caml_int32_shift_left(long param_1,ulong param_2)

{
  caml_copy_int32(*(int *)(param_1 + 8) << ((byte)(param_2 >> 1) & 0x1f));
  return;
}



void caml_int32_xor(long param_1,long param_2)

{
  caml_copy_int32(*(uint *)(param_2 + 8) ^ *(uint *)(param_1 + 8));
  return;
}



void caml_int32_or(long param_1,long param_2)

{
  caml_copy_int32(*(uint *)(param_2 + 8) | *(uint *)(param_1 + 8));
  return;
}



void caml_int32_and(long param_1,long param_2)

{
  caml_copy_int32(*(uint *)(param_2 + 8) & *(uint *)(param_1 + 8));
  return;
}



void caml_int32_mod(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_zero_divide();
  }
  if ((iVar1 == -1) && (*(int *)(param_1 + 8) == -0x80000000)) {
    caml_copy_int32(0);
    return;
  }
  caml_copy_int32((long)*(int *)(param_1 + 8) % (long)iVar1 & 0xffffffff);
  return;
}



long caml_int32_div(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
    caml_raise_zero_divide();
  }
  if ((iVar1 == -1) && (iVar2 == -0x80000000)) {
    return param_1;
  }
  lVar3 = caml_copy_int32((long)iVar2 / (long)iVar1 & 0xffffffff,param_2,
                          (long)iVar2 % (long)iVar1 & 0xffffffff);
  return lVar3;
}



void caml_int32_mul(long param_1,long param_2)

{
  caml_copy_int32(*(int *)(param_2 + 8) * *(int *)(param_1 + 8));
  return;
}



void caml_int32_sub(long param_1,long param_2)

{
  caml_copy_int32(*(int *)(param_1 + 8) - *(int *)(param_2 + 8));
  return;
}



void caml_int32_add(long param_1,long param_2)

{
  caml_copy_int32(*(int *)(param_2 + 8) + *(int *)(param_1 + 8));
  return;
}



void caml_int32_neg(long param_1)

{
  caml_copy_int32(-*(int *)(param_1 + 8));
  return;
}



long caml_int_of_float(double *param_1)

{
  return (long)*param_1 * 2 + 1;
}



char caml_eq_float(double *param_1,double *param_2)

{
  return (*param_1 == *param_2) * '\x02' + '\x01';
}



char caml_neq_float(double *param_1,double *param_2)

{
  return (*param_1 != *param_2) * '\x02' + '\x01';
}



long caml_le_float(double *param_1,double *param_2)

{
  return (-(ulong)(*param_2 < *param_1) & 0xfffffffffffffffe) + 3;
}



char caml_lt_float(double *param_1,double *param_2)

{
  return (*param_1 <= *param_2 && *param_2 != *param_1) * '\x02' + '\x01';
}



long caml_ge_float(double *param_1,double *param_2)

{
  return (-(ulong)(*param_1 < *param_2) & 0xfffffffffffffffe) + 3;
}



char caml_gt_float(double *param_1,double *param_2)

{
  return (*param_2 <= *param_1 && *param_1 != *param_2) * '\x02' + '\x01';
}



// WARNING: Removing unreachable block (ram,0x00429f0a)
// WARNING: Removing unreachable block (ram,0x00429f12)

undefined8 caml_float_compare(double *param_1,double *param_2)

{
  if (*param_1 == *param_2) {
    return 1;
  }
  if (*param_1 < *param_2) {
    return 0xffffffffffffffff;
  }
  return 3;
}



void caml_init_ieee_floats(void)

{
  return;
}



undefined8 caml_classify_float(double *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = __fpclassify(*param_1);
  uVar2 = 1;
  if (uVar1 < 4) {
    uVar2 = *(undefined8 *)(CSWTCH_118 + (long)(int)uVar1 * 8);
  }
  return uVar2;
}



undefined8 caml_format_float(char *param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined *__ptr;
  undefined8 uVar4;
  char *__nptr;
  uint uVar5;
  long in_FS_OFFSET;
  undefined auStack424 [376];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *param_1;
  __nptr = param_1;
  while (cVar1 != '\0') {
    if ((byte)(cVar1 - 0x30U) < 10) {
      lVar3 = strtol(__nptr,(char **)0x0,10);
      uVar5 = (int)lVar3 + 0x15e;
      if ((int)uVar5 < 0x15e) {
        uVar5 = 0x15e;
      }
      cVar1 = *__nptr;
      if (cVar1 != '\0') goto LAB_00429fef;
      goto LAB_0042a012;
    }
    __nptr = __nptr + 1;
    cVar1 = *__nptr;
  }
  goto LAB_0042a068;
  while( true ) {
    __nptr = __nptr + 1;
    cVar1 = *__nptr;
    if (cVar1 == '\0') break;
LAB_00429fef:
    if (cVar1 == '.') {
      lVar3 = strtol(__nptr + 1,(char **)0x0,10);
      uVar2 = (int)lVar3 + 0x15e;
      if ((int)uVar5 < (int)uVar2) {
        uVar5 = uVar2;
      }
      break;
    }
  }
LAB_0042a012:
  if (0x171 < uVar5) {
    __ptr = (undefined *)caml_stat_alloc((long)(int)uVar5);
    __sprintf_chk(*param_2,__ptr,1,0xffffffffffffffff,param_1);
    uVar4 = caml_copy_string(__ptr);
    if (__ptr != auStack424) {
      caml_stat_free(__ptr);
    }
    goto LAB_0042a093;
  }
LAB_0042a068:
  __sprintf_chk(*param_2,auStack424,1,0x172,param_1);
  uVar4 = caml_copy_string(auStack424);
LAB_0042a093:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 * caml_copy_double(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)caml_young_ptr + -0x10);
  if (puVar1 < caml_young_limit) {
    caml_minor_collection();
    puVar1 = (undefined8 *)((long)caml_young_ptr + -0x10);
  }
  caml_young_ptr = puVar1;
  *puVar1 = 0x7fd;
  puVar1[1] = param_1;
  return puVar1 + 1;
}



void caml_ceil_float(double *param_1)

{
  ceil(*param_1);
  caml_copy_double();
  return;
}



void caml_atan2_float(double *param_1,double *param_2)

{
  atan2(*param_1,*param_2);
  caml_copy_double();
  return;
}



void caml_atan_float(double *param_1)

{
  atan(*param_1);
  caml_copy_double();
  return;
}



void caml_acos_float(double *param_1)

{
  acos(*param_1);
  caml_copy_double();
  return;
}



void caml_asin_float(double *param_1)

{
  asin(*param_1);
  caml_copy_double();
  return;
}



void caml_tanh_float(double *param_1)

{
  tanh(*param_1);
  caml_copy_double();
  return;
}



void caml_tan_float(double *param_1)

{
  tan(*param_1);
  caml_copy_double();
  return;
}



void caml_cosh_float(double *param_1)

{
  cosh(*param_1);
  caml_copy_double();
  return;
}



void caml_cos_float(double *param_1)

{
  cos(*param_1);
  caml_copy_double();
  return;
}



void caml_sinh_float(double *param_1)

{
  sinh(*param_1);
  caml_copy_double();
  return;
}



void caml_sin_float(double *param_1)

{
  sin(*param_1);
  caml_copy_double();
  return;
}



void caml_power_float(double *param_1,double *param_2)

{
  pow(*param_1,*param_2);
  caml_copy_double();
  return;
}



// WARNING: Removing unreachable block (ram,0x0042a2c4)

void caml_sqrt_float(void)

{
  caml_copy_double();
  return;
}



undefined8 * caml_modf_float(double *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  double *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  double **local_50;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  double local_10;
  
  uVar1 = caml_local_roots;
  local_50 = &local_b0;
  local_58 = 1;
  local_a8 = &local_68;
  local_68 = caml_local_roots;
  local_60 = 1;
  local_18 = 0;
  caml_local_roots = &local_a8;
  local_20 = 0;
  local_28 = 0;
  local_98 = 1;
  local_90 = &local_18;
  local_a0 = 3;
  local_88 = &local_20;
  local_80 = &local_28;
  local_b0 = param_1;
  modf(*param_1,&local_10);
  local_20 = caml_copy_double();
  local_28 = caml_copy_double(local_10);
  puVar2 = (undefined8 *)caml_alloc_tuple(2);
  caml_local_roots = (undefined8 **)uVar1;
  *puVar2 = local_20;
  puVar2[1] = local_28;
  return puVar2;
}



void caml_log10_float(double *param_1)

{
  log10(*param_1);
  caml_copy_double();
  return;
}



void caml_log_float(double *param_1)

{
  log(*param_1);
  caml_copy_double();
  return;
}



void caml_ldexp_float(double *param_1,long param_2)

{
  ldexp(*param_1,(int)(param_2 >> 1));
  caml_copy_double();
  return;
}



undefined8 * caml_frexp_float(double *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  double *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  double **local_50;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  uVar1 = caml_local_roots;
  local_50 = &local_b0;
  local_58 = 1;
  local_a8 = &local_68;
  local_68 = caml_local_roots;
  local_60 = 1;
  local_18 = 0;
  caml_local_roots = &local_a8;
  local_20 = 0;
  local_98 = 1;
  local_a0 = 2;
  local_90 = &local_18;
  local_88 = &local_20;
  local_b0 = param_1;
  frexp(*param_1,&local_c);
  local_20 = caml_copy_double();
  puVar2 = (undefined8 *)caml_alloc_tuple(2);
  caml_local_roots = (undefined8 **)uVar1;
  *puVar2 = local_20;
  puVar2[1] = (long)local_c * 2 + 1;
  return puVar2;
}



// WARNING: Removing unreachable block (ram,0x0042a5b0)

void caml_fmod_float(void)

{
  ushort in_FPUStatusWord;
  
  do {
  } while ((in_FPUStatusWord & 0x400) != 0);
  caml_copy_double();
  return;
}



void caml_floor_float(double *param_1)

{
  floor(*param_1);
  caml_copy_double();
  return;
}



void caml_exp_float(double *param_1)

{
  exp(*param_1);
  caml_copy_double();
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



void caml_abs_float(ulong *param_1)

{
  caml_copy_double(*param_1 & 0x7fffffffffffffff);
  return;
}



void caml_neg_float(ulong *param_1)

{
  caml_copy_double(*param_1 ^ 0x8000000000000000);
  return;
}



void caml_float_of_int(long param_1)

{
  caml_copy_double((double)(param_1 >> 1));
  return;
}



void caml_float_of_string(char *param_1)

{
  ulong uVar1;
  char *__nptr;
  char *pcVar2;
  long in_FS_OFFSET;
  double dVar3;
  char *local_80;
  char local_78 [72];
  long local_30;
  
  __nptr = local_78;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = caml_string_length();
  if (0x3f < uVar1) {
    __nptr = (char *)caml_stat_alloc(uVar1 + 1);
  }
  pcVar2 = __nptr;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    if (*param_1 != '_') {
      *pcVar2 = *param_1;
      pcVar2 = pcVar2 + 1;
    }
    param_1 = param_1 + 1;
  }
  *pcVar2 = '\0';
  if (pcVar2 != __nptr) {
    dVar3 = strtod(__nptr,&local_80);
    if (local_80 == pcVar2) {
      if (__nptr != local_78) {
        caml_stat_free(__nptr);
      }
      caml_copy_double(dVar3);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
  }
  if (__nptr != local_78) {
    caml_stat_free(__nptr);
  }
                    // WARNING: Subroutine does not return
  caml_failwith("float_of_string");
}



void caml_float_of_substring(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  char *__nptr;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  double dVar6;
  char *local_90;
  char local_88 [72];
  long local_40;
  
  uVar3 = param_2 >> 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = caml_string_length();
  if ((((uVar3 < uVar1) && (-1 < (long)uVar3)) && (uVar4 = param_3 >> 1, 0 < (long)uVar4)) &&
     (uVar4 <= uVar1 - uVar3)) {
    if (0x3f < uVar4) {
      __nptr = (char *)caml_stat_alloc(uVar4 + 1);
      goto LAB_0042a7fb;
    }
  }
  else {
    uVar4 = 0;
  }
  __nptr = local_88;
LAB_0042a7fb:
  pcVar2 = (char *)(uVar3 + param_1);
  pcVar5 = __nptr;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (*pcVar2 != '_') {
      *pcVar5 = *pcVar2;
      pcVar5 = pcVar5 + 1;
    }
    pcVar2 = pcVar2 + 1;
  }
  *pcVar5 = '\0';
  if (pcVar5 != __nptr) {
    dVar6 = strtod(__nptr,&local_90);
    if (local_90 == pcVar5) {
      if (__nptr != local_88) {
        caml_stat_free(__nptr);
      }
      caml_copy_double(dVar6);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
  }
  if (__nptr != local_88) {
    caml_stat_free(__nptr);
  }
                    // WARNING: Subroutine does not return
  caml_failwith("float_of_string");
}



long caml_string_length(long param_1)

{
  long lVar1;
  
  lVar1 = (*(ulong *)(param_1 + -8) >> 10) * 8;
  return (lVar1 + -1) - (long)*(char *)(param_1 + -1 + lVar1);
}



long caml_ml_string_length(long param_1)

{
  long lVar1;
  
  lVar1 = (*(ulong *)(param_1 + -8) >> 10) * 8;
  return ((lVar1 + -1) - (long)*(char *)(param_1 + -1 + lVar1)) * 2 + 1;
}



undefined8 caml_string_equal(long *param_1,long *param_2)

{
  ulong uVar1;
  
  if (param_1 == param_2) {
    return 3;
  }
  uVar1 = (ulong)param_1[-1] >> 10;
  if (uVar1 == (ulong)param_2[-1] >> 10) {
    if (uVar1 == 0) {
      return 3;
    }
    for (; *param_1 == *param_2; param_1 = param_1 + 1) {
      uVar1 = uVar1 - 1;
      if (uVar1 == 0) {
        return 3;
      }
      param_2 = param_2 + 1;
    }
  }
  return 1;
}



long caml_string_notequal(void)

{
  long lVar1;
  
  lVar1 = caml_string_equal();
  return 4 - lVar1;
}



long caml_bitvect_test(long param_1,ulong param_2)

{
  return (ulong)((byte)(1 << ((byte)(param_2 >> 1) & 7)) &
                *(byte *)(((int)(param_2 >> 1) >> 3) + param_1)) * 2 + 1;
}



long caml_is_printable(long param_1)

{
  ushort **ppuVar1;
  
  if (locale_is_set_3458 == 0) {
    setlocale(0,"");
    locale_is_set_3458 = 1;
  }
  ppuVar1 = __ctype_b_loc();
  return (-(ulong)(((*ppuVar1)[(int)(param_1 >> 1)] & 0x4000) == 0) & 0xfffffffffffffffe) + 3;
}



undefined8 caml_fill_string(long param_1,long param_2,long param_3,long param_4)

{
  memset((void *)((param_2 >> 1) + param_1),(int)(param_4 >> 1),param_3 >> 1);
  return 1;
}



undefined8 caml_blit_string(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  memmove((void *)((param_4 >> 1) + param_3),(void *)((param_2 >> 1) + param_1),
          (long)(int)(param_5 >> 1));
  return 1;
}



undefined8 caml_string_compare(byte *param_1,byte *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  
  if (param_1 == param_2) {
    return 1;
  }
  lVar2 = (*(ulong *)(param_1 + -8) >> 10) * 8;
  uVar4 = (lVar2 + -1) - (long)(char)param_1[lVar2 + -1];
  lVar2 = (*(ulong *)(param_2 + -8) >> 10) * 8;
  uVar3 = (lVar2 + -1) - (long)(char)param_2[lVar2 + -1];
  uVar1 = uVar4;
  if (uVar3 <= uVar4) {
    uVar1 = uVar3;
  }
  bVar5 = false;
  bVar6 = true;
  do {
    if (uVar1 == 0) break;
    uVar1 = uVar1 - 1;
    bVar5 = *param_1 < *param_2;
    bVar6 = *param_1 == *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (bVar6);
  if ((char)((!bVar5 && !bVar6) - bVar5) < '\0') {
    return 0xffffffffffffffff;
  }
  if ((!bVar5 && !bVar6) == bVar5) {
    if (uVar4 < uVar3) {
      return 0xffffffffffffffff;
    }
    if (uVar4 <= uVar3) {
      return 1;
    }
  }
  return 3;
}



char caml_string_greaterequal(void)

{
  long lVar1;
  
  lVar1 = caml_string_compare();
  return (0 < lVar1) * '\x02' + '\x01';
}



char caml_string_greaterthan(void)

{
  long lVar1;
  
  lVar1 = caml_string_compare();
  return (1 < lVar1) * '\x02' + '\x01';
}



char caml_string_lessequal(void)

{
  long lVar1;
  
  lVar1 = caml_string_compare();
  return (lVar1 < 2) * '\x02' + '\x01';
}



char caml_string_lessthan(void)

{
  long lVar1;
  
  lVar1 = caml_string_compare();
  return (lVar1 < 1) * '\x02' + '\x01';
}



undefined8 caml_string_set(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = param_2 >> 1;
  if ((-1 < (long)uVar2) &&
     (lVar1 = (*(ulong *)(param_1 + -8) >> 10) * 8,
     uVar2 < (ulong)((lVar1 + -1) - (long)*(char *)(param_1 + -1 + lVar1)))) {
    *(char *)(uVar2 + param_1) = (char)(param_3 >> 1);
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_array_bound_error();
}



long caml_string_get(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = param_2 >> 1;
  if ((-1 < (long)uVar2) &&
     (lVar1 = (*(ulong *)(param_1 + -8) >> 10) * 8,
     uVar2 < (ulong)((lVar1 + -1) - (long)*(char *)(param_1 + -1 + lVar1)))) {
    return (ulong)*(byte *)(uVar2 + param_1) * 2 + 1;
  }
                    // WARNING: Subroutine does not return
  caml_array_bound_error();
}



void caml_create_string(long param_1)

{
  if ((ulong)(param_1 >> 1) < 0x1fffffffffffff8) {
    caml_alloc_string();
    return;
  }
                    // WARNING: Subroutine does not return
  caml_invalid_argument("String.create");
}



undefined8 caml_array_unsafe_set_float(long param_1,long param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + (param_2 >> 1) * 8) = *param_3;
  return 1;
}



ulong * caml_make_array(ulong *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong *local_90;
  undefined8 *local_88;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulong **local_50;
  undefined8 local_28;
  ulong local_20 [2];
  
  uVar1 = caml_local_roots;
  local_50 = &local_b0;
  local_58 = 1;
  local_60 = 1;
  local_a8 = &local_68;
  local_28 = 0;
  local_98 = 1;
  local_a0 = 2;
  local_68 = caml_local_roots;
  local_90 = local_20;
  uVar3 = param_1[-1] >> 10;
  local_88 = &local_28;
  if ((((uVar3 != 0) && (local_20[0] = *param_1, (local_20[0] & 1) == 0)) &&
      (caml_local_roots = &local_a8, local_b0 = param_1, uVar2 = caml_page_table_lookup(),
      param_1 = local_b0, (uVar2 & 7) != 0)) && (*(char *)(local_20[0] - 8) == -3)) {
    param_1 = (ulong *)caml_alloc_small(uVar3,0xfe);
    uVar2 = 0;
    do {
      param_1[uVar2] = *(ulong *)local_b0[uVar2];
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  caml_local_roots = (undefined8 **)uVar1;
  return param_1;
}



undefined8 * caml_array_unsafe_get_float(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + (param_2 >> 1) * 8);
  puVar2 = (undefined8 *)((long)caml_young_ptr + -0x10);
  if (puVar2 < caml_young_limit) {
    caml_minor_collection();
    puVar2 = (undefined8 *)((long)caml_young_ptr + -0x10);
  }
  caml_young_ptr = puVar2;
  *puVar2 = 0x7fd;
  puVar2[1] = uVar1;
  return puVar2 + 1;
}



undefined8 caml_array_unsafe_get(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + -8) != -2) {
    return *(undefined8 *)(param_1 + (param_2 >> 1) * 8);
  }
  uVar1 = caml_array_unsafe_get_float();
  return uVar1;
}



long caml_make_vect(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *local_b8;
  long local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  undefined8 **local_48;
  long local_20;
  
  uVar2 = caml_local_roots;
  local_48 = &local_b8;
  uVar6 = param_1 >> 1;
  local_20 = 0;
  lVar4 = 0x658068;
  if (uVar6 != 0) {
    local_50 = &local_b0;
    local_68 = caml_local_roots;
    local_58 = 1;
    local_60 = 2;
    local_a8 = &local_68;
    local_98 = 1;
    local_a0 = 1;
    local_90 = &local_20;
    caml_local_roots = &local_a8;
    local_b8 = param_2;
    local_b0 = param_1;
    ppuVar3 = &local_b8;
    if (((((ulong)param_2 & 1) == 0) &&
        (uVar7 = caml_page_table_lookup(param_2), ppuVar3 = local_48, (uVar7 & 7) != 0)) &&
       (*(char *)(local_b8 + -1) == -3)) {
      uVar1 = *local_b8;
      if (0x3fffffffffffff < uVar6) goto LAB_0042b02e;
      lVar4 = caml_alloc(uVar6,0xfe);
      uVar7 = 0;
      do {
        *(undefined8 *)(lVar4 + uVar7 * 8) = uVar1;
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
    }
    else {
      local_48 = ppuVar3;
      if (0x3fffffffffffff < uVar6) {
LAB_0042b02e:
                    // WARNING: Subroutine does not return
        caml_invalid_argument("Array.make");
      }
      if (uVar6 < 0x100) {
        lVar4 = caml_alloc_small(uVar6,0);
        lVar5 = 0;
        do {
          *(undefined8 **)(lVar5 + lVar4) = local_b8;
          lVar5 = lVar5 + 8;
        } while (lVar5 != uVar6 * 8);
      }
      else {
        if (((((ulong)local_b8 & 1) == 0) && (local_b8 < caml_young_end)) &&
           (caml_young_start < local_b8)) {
          caml_minor_collection();
          local_20 = caml_alloc_shr(uVar6,0);
          lVar4 = 0;
          do {
            *(undefined8 **)(local_20 + lVar4) = local_b8;
            lVar4 = lVar4 + 8;
          } while (lVar4 != uVar6 * 8);
          lVar4 = caml_check_urgent_gc(local_20);
        }
        else {
          uVar7 = 0;
          local_20 = caml_alloc_shr(uVar6,0);
          do {
            lVar4 = uVar7 * 8;
            uVar7 = uVar7 + 1;
            caml_initialize(local_20 + lVar4,local_b8);
          } while (uVar7 < uVar6);
          lVar4 = caml_check_urgent_gc(local_20);
        }
      }
    }
  }
  caml_local_roots = (undefined8 **)uVar2;
  return lVar4;
}



undefined8 caml_array_unsafe_set_addr(long param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = (ulong *)(param_1 + (param_2 >> 1) * 8);
  uVar2 = *puVar1;
  *puVar1 = param_3;
  uVar3 = caml_page_table_lookup(puVar1);
  if ((uVar3 & 1) != 0) {
    if (caml_gc_phase == 0) {
      caml_darken(uVar2,0);
    }
    if (((((param_3 & 1) == 0) && (param_3 < caml_young_end)) && (caml_young_start < param_3)) &&
       ((((uVar2 & 1) != 0 || (caml_young_end <= uVar2)) || (uVar2 <= caml_young_start)))) {
      if (caml_ref_table._32_8_ <= caml_ref_table._24_8_) {
        caml_realloc_ref_table(caml_ref_table);
      }
      *caml_ref_table._24_8_ = puVar1;
      caml_ref_table._24_8_ = caml_ref_table._24_8_ + 1;
    }
  }
  return 1;
}



undefined8 caml_array_unsafe_set(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + -8) != -2) {
    uVar1 = caml_array_unsafe_set_addr();
    return uVar1;
  }
  *(undefined8 *)(param_1 + (param_2 >> 1) * 8) = *param_3;
  return 1;
}



undefined8 caml_array_set_float(long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 >> 1;
  if ((-1 < (long)uVar1) && (uVar1 < *(ulong *)(param_1 + -8) >> 10)) {
    *(undefined8 *)(param_1 + uVar1 * 8) = *param_3;
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_array_bound_error();
}



undefined8 caml_array_set_addr(long param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_2 >> 1;
  if ((-1 < (long)uVar3) && (uVar3 < *(ulong *)(param_1 + -8) >> 10)) {
    puVar1 = (ulong *)(param_1 + uVar3 * 8);
    uVar3 = *puVar1;
    *puVar1 = param_3;
    uVar2 = caml_page_table_lookup(puVar1);
    if ((uVar2 & 1) != 0) {
      if (caml_gc_phase == 0) {
        caml_darken(uVar3,0);
      }
      if (((((param_3 & 1) == 0) && (param_3 < caml_young_end)) && (caml_young_start < param_3)) &&
         ((((uVar3 & 1) != 0 || (caml_young_end <= uVar3)) || (uVar3 <= caml_young_start)))) {
        if (caml_ref_table._32_8_ <= caml_ref_table._24_8_) {
          caml_realloc_ref_table(caml_ref_table);
        }
        *caml_ref_table._24_8_ = puVar1;
        caml_ref_table._24_8_ = caml_ref_table._24_8_ + 1;
      }
    }
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_array_bound_error();
}



void caml_array_set(long param_1)

{
  if (*(char *)(param_1 + -8) != -2) {
    caml_array_set_addr();
    return;
  }
  caml_array_set_float();
  return;
}



undefined8 * caml_array_get_float(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar3 = param_2 >> 1;
  if ((-1 < (long)uVar3) && (uVar3 < *(ulong *)(param_1 + -8) >> 10)) {
    uVar1 = *(undefined8 *)(param_1 + uVar3 * 8);
    puVar2 = (undefined8 *)((long)caml_young_ptr + -0x10);
    if (puVar2 < caml_young_limit) {
      caml_minor_collection();
      puVar2 = (undefined8 *)((long)caml_young_ptr + -0x10);
    }
    caml_young_ptr = puVar2;
    *puVar2 = 0x7fd;
    puVar2[1] = uVar1;
    return puVar2 + 1;
  }
                    // WARNING: Subroutine does not return
  caml_array_bound_error();
}



undefined8 caml_array_get_addr(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = param_2 >> 1;
  if ((-1 < (long)uVar1) && (uVar1 < *(ulong *)(param_1 + -8) >> 10)) {
    return *(undefined8 *)(param_1 + uVar1 * 8);
  }
                    // WARNING: Subroutine does not return
  caml_array_bound_error();
}



void caml_array_get(long param_1)

{
  if (*(char *)(param_1 + -8) != -2) {
    caml_array_get_addr();
    return;
  }
  caml_array_get_float();
  return;
}



undefined8 caml_channel_binary_mode(void)

{
  return 1;
}



long caml_pos_out(long param_1)

{
  return (*(long *)(param_1 + 0x18) + *(long *)(param_1 + 8)) - (param_1 + 0x50);
}



long caml_pos_in(long param_1)

{
  return (*(long *)(param_1 + 0x18) + *(long *)(param_1 + 8)) - *(long *)(param_1 + 0x20);
}



uint compare_channel(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(ulong *)(param_1 + 8) != *(ulong *)(param_2 + 8)) {
    uVar1 = -(uint)(*(ulong *)(param_1 + 8) < *(ulong *)(param_2 + 8)) | 1;
  }
  return uVar1;
}



undefined8 caml_ml_set_binary_mode(void)

{
  return 1;
}



void caml_ml_pos_in_64(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  caml_copy_int64((*(long *)(lVar1 + 0x18) + *(long *)(lVar1 + 8)) - *(long *)(lVar1 + 0x20));
  return;
}



void caml_ml_pos_out_64(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  caml_copy_int64((*(long *)(lVar1 + 0x18) + *(long *)(lVar1 + 8)) - (lVar1 + 0x50));
  return;
}



long caml_ml_pos_in(long param_1)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar2 = (*(long *)(lVar2 + 0x18) + *(long *)(lVar2 + 8)) - *(long *)(lVar2 + 0x20);
  if (0x3fffffffffffffff < lVar2) {
    piVar1 = __errno_location();
    *piVar1 = 0x4b;
    caml_sys_error(1);
  }
  return lVar2 * 2 + 1;
}



long caml_ml_pos_out(long param_1)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar2 = (*(long *)(lVar2 + 0x18) + *(long *)(lVar2 + 8)) - (lVar2 + 0x50);
  if (0x3fffffffffffffff < lVar2) {
    piVar1 = __errno_location();
    *piVar1 = 0x4b;
    caml_sys_error(1);
  }
  return lVar2 * 2 + 1;
}



long caml_channel_descriptor(long param_1)

{
  int *piVar1;
  
  if (**(int **)(param_1 + 8) != -1) {
    return (long)**(int **)(param_1 + 8) * 2 + 1;
  }
  piVar1 = __errno_location();
  *piVar1 = 9;
  caml_sys_error(1);
  return -1;
}



undefined8 caml_ml_close_channel(long param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (*piVar1 == -1) {
    *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(piVar1 + 4);
    *(undefined8 *)(piVar1 + 6) = *(undefined8 *)(piVar1 + 4);
    return 1;
  }
  iVar2 = close(*piVar1);
  *piVar1 = -1;
  *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(piVar1 + 4);
  *(undefined8 *)(piVar1 + 6) = *(undefined8 *)(piVar1 + 4);
  if (iVar2 != -1) {
    return 1;
  }
  caml_sys_error(1);
  return 1;
}



void caml_alloc_channel(long param_1)

{
  long lVar1;
  
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  lVar1 = caml_alloc_custom(channel_operations,8,1,1000);
  *(long *)(lVar1 + 8) = param_1;
  return;
}



undefined8 * caml_ml_out_channels_list(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 **local_58;
  undefined8 *local_50;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20 [2];
  
  uVar1 = caml_local_roots;
  local_20[0] = (undefined8 *)0x1;
  puVar2 = (undefined8 *)0x1;
  if (caml_all_opened_channels != 0) {
    local_60 = local_20;
    local_28 = (undefined8 *)0x0;
    local_30 = 0;
    local_78 = caml_local_roots;
    local_68 = 1;
    local_58 = &local_28;
    local_70 = 3;
    local_50 = &local_30;
    lVar3 = caml_all_opened_channels;
    caml_local_roots = &local_78;
    do {
      if (*(long *)(lVar3 + 0x20) == 0) {
        local_30 = caml_alloc_channel(lVar3);
        local_28 = local_20[0];
        local_20[0] = (undefined8 *)caml_alloc_small(2,0);
        *local_20[0] = local_30;
        local_20[0][1] = local_28;
      }
      lVar3 = *(long *)(lVar3 + 0x30);
      puVar2 = local_20[0];
    } while (lVar3 != 0);
  }
  caml_local_roots = (undefined8 *)uVar1;
  return puVar2;
}



void caml_finalize_channel(long param_1)

{
  void *__ptr;
  long lVar1;
  int iVar2;
  
  __ptr = *(void **)(param_1 + 8);
  iVar2 = *(int *)((long)__ptr + 0x48) + -1;
  *(int *)((long)__ptr + 0x48) = iVar2;
  if (0 < iVar2) {
    return;
  }
  if (caml_channel_mutex_free != (code *)0x0) {
    (*caml_channel_mutex_free)(__ptr);
  }
  lVar1 = *(long *)((long)__ptr + 0x38);
  if (lVar1 == 0) {
    caml_all_opened_channels = *(long *)(caml_all_opened_channels + 0x30);
    if (caml_all_opened_channels != 0) {
      *(undefined8 *)(caml_all_opened_channels + 0x38) = 0;
    }
  }
  else {
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)((long)__ptr + 0x30);
    if (*(long *)((long)__ptr + 0x30) != 0) {
      *(long *)(*(long *)((long)__ptr + 0x30) + 0x38) = lVar1;
    }
  }
  caml_stat_free(__ptr);
  return;
}



void caml_close_channel(int *param_1)

{
  long lVar1;
  
  close(*param_1);
  if (0 < param_1[0x12]) {
    return;
  }
  if (caml_channel_mutex_free != (code *)0x0) {
    (*caml_channel_mutex_free)(param_1);
  }
  lVar1 = *(long *)(param_1 + 0xe);
  if (lVar1 == 0) {
    caml_all_opened_channels = *(long *)(caml_all_opened_channels + 0x30);
    if (caml_all_opened_channels != 0) {
      *(undefined8 *)(caml_all_opened_channels + 0x38) = 0;
    }
  }
  else {
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_1 + 0xc);
    if (*(long *)(param_1 + 0xc) != 0) {
      *(long *)(*(long *)(param_1 + 0xc) + 0x38) = lVar1;
    }
  }
  caml_stat_free(param_1);
  return;
}



void caml_seek_in(int *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  __off64_t _Var3;
  
  lVar2 = *(long *)(param_1 + 2);
  piVar1 = param_1 + 0x14;
  if ((param_2 < (long)piVar1 + (lVar2 - *(long *)(param_1 + 8))) || (lVar2 < param_2)) {
    _Var3 = lseek64(*param_1,param_2,0);
    if (_Var3 != param_2) {
      caml_sys_error(1);
    }
    *(long *)(param_1 + 2) = param_2;
    *(int **)(param_1 + 8) = piVar1;
    *(int **)(param_1 + 6) = piVar1;
  }
  else {
    *(long *)(param_1 + 6) = *(long *)(param_1 + 8) + (param_2 - lVar2);
  }
  return;
}



undefined8 caml_ml_seek_in_64(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  uVar2 = caml_local_roots;
  local_38 = &local_68;
  local_48 = 1;
  local_50 = 2;
  local_40 = &local_60;
  local_58 = caml_local_roots;
  uVar1 = *(undefined8 *)(param_1 + 8);
  caml_local_roots = &local_58;
  local_68 = param_2;
  local_60 = param_1;
  plVar3 = &local_68;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
    plVar3 = local_38;
  }
  local_38 = plVar3;
  caml_seek_in(uVar1,*(undefined8 *)(local_68 + 8));
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined8 *)uVar2;
  return 1;
}



undefined8 caml_ml_seek_in(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  uVar2 = caml_local_roots;
  local_38 = &local_68;
  local_48 = 1;
  local_50 = 2;
  local_40 = &local_60;
  local_58 = caml_local_roots;
  uVar1 = *(undefined8 *)(param_1 + 8);
  caml_local_roots = &local_58;
  local_68 = param_2;
  local_60 = param_1;
  plVar3 = &local_68;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
    plVar3 = local_38;
  }
  local_38 = plVar3;
  caml_seek_in(uVar1,local_68 >> 1);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined8 *)uVar2;
  return 1;
}



__off64_t caml_channel_size(int *param_1)

{
  __off64_t _Var1;
  __off64_t _Var2;
  
  _Var1 = lseek64(*param_1,0,2);
  if ((_Var1 != -1) &&
     (_Var2 = lseek64(*param_1,*(__off64_t *)(param_1 + 2),0), _Var2 == *(long *)(param_1 + 2))) {
    return _Var1;
  }
  caml_sys_error(1);
  return _Var1;
}



void caml_ml_channel_size_64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = caml_channel_size(*(undefined8 *)(param_1 + 8));
  caml_copy_int64(uVar1);
  return;
}



long caml_ml_channel_size(long param_1)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = caml_channel_size(*(undefined8 *)(param_1 + 8));
  if (0x3fffffffffffffff < lVar1) {
    piVar2 = __errno_location();
    *piVar2 = 0x4b;
    caml_sys_error(1);
  }
  return lVar1 * 2 + 1;
}



ulong caml_do_read(int param_1,void *param_2,uint param_3)

{
  ulong uVar1;
  int *piVar2;
  
  do {
    caml_enter_blocking_section();
    uVar1 = read(param_1,param_2,(ulong)param_3);
    uVar1 = uVar1 & 0xffffffff;
    caml_leave_blocking_section();
    if ((int)uVar1 != -1) {
      return uVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  caml_sys_io_error(1);
  return uVar1;
}



long caml_ml_input(long param_1,long param_2,long param_3,long param_4)

{
  undefined4 *__src;
  undefined4 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t __n;
  long lVar7;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  uVar2 = caml_local_roots;
  local_38 = &local_88;
  local_50 = &local_70;
  local_68 = caml_local_roots;
  local_58 = 1;
  local_48 = &local_78;
  local_60 = 4;
  puVar1 = *(undefined4 **)(param_1 + 8);
  local_40 = &local_80;
  caml_local_roots = &local_68;
  local_88 = param_4;
  local_80 = param_3;
  local_78 = param_2;
  local_70 = param_1;
  plVar3 = &local_88;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(puVar1);
    plVar3 = local_38;
  }
  local_38 = plVar3;
  lVar7 = local_80 >> 1;
  iVar6 = 0x7fffffff;
  if (local_88 >> 1 < 0x7fffffff) {
    iVar6 = (int)(local_88 >> 1);
  }
  iVar4 = (int)*(undefined8 *)(puVar1 + 8) - (int)*(void **)(puVar1 + 6);
  iVar5 = iVar6;
  if ((iVar4 < iVar6) && (iVar5 = iVar4, iVar4 < 1)) {
    __src = puVar1 + 0x14;
    iVar5 = caml_do_read(*puVar1,__src,(int)*(undefined8 *)(puVar1 + 4) - (int)__src);
    *(long *)(puVar1 + 2) = *(long *)(puVar1 + 2) + (long)iVar5;
    if (iVar5 < iVar6) {
      iVar6 = iVar5;
    }
    __n = SEXT48(iVar6);
    *(long *)(puVar1 + 8) = (long)puVar1 + (long)iVar5 + 0x50;
    memmove((void *)(lVar7 + local_78),__src,__n);
    *(size_t *)(puVar1 + 6) = (long)puVar1 + __n + 0x50;
  }
  else {
    __n = SEXT48(iVar5);
    memmove((void *)(lVar7 + local_78),*(void **)(puVar1 + 6),__n);
    *(size_t *)(puVar1 + 6) = *(long *)(puVar1 + 6) + __n;
  }
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(puVar1);
  }
  caml_local_roots = (undefined8 *)uVar2;
  return __n * 2 + 1;
}



long caml_input_scan_line(undefined4 *param_1)

{
  undefined4 *__dest;
  char cVar1;
  int iVar2;
  undefined4 *__src;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  __dest = param_1 + 0x14;
  __src = *(undefined4 **)(param_1 + 6);
  puVar4 = __src;
  do {
    puVar5 = *(undefined4 **)(param_1 + 8);
    if (puVar5 <= puVar4) {
      if (__dest < __src) {
        memmove(__dest,__src,(long)puVar5 - (long)__src);
        lVar3 = -(long)((int)*(long *)(param_1 + 6) - (int)__dest);
        puVar5 = (undefined4 *)(lVar3 + *(long *)(param_1 + 8));
        __src = (undefined4 *)(*(long *)(param_1 + 6) + lVar3);
        *(undefined4 **)(param_1 + 6) = __src;
        puVar4 = (undefined4 *)((long)puVar4 + lVar3);
        *(undefined4 **)(param_1 + 8) = puVar5;
      }
      if (*(undefined4 **)(param_1 + 4) <= puVar5) {
        return (long)__src - (long)puVar5;
      }
      iVar2 = caml_do_read(*param_1,puVar5,(int)*(undefined4 **)(param_1 + 4) - (int)puVar5);
      if (iVar2 == 0) {
        return *(long *)(param_1 + 6) - *(long *)(param_1 + 8);
      }
      *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + (long)iVar2;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + (long)iVar2;
      __src = *(undefined4 **)(param_1 + 6);
    }
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined4 *)((long)puVar4 + 1);
    if (cVar1 == '\n') {
      return (long)puVar4 - (long)__src;
    }
  } while( true );
}



long caml_ml_input_scan_line(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  
  uVar2 = caml_local_roots;
  local_48 = 1;
  local_50 = 1;
  local_40 = &local_60;
  local_58 = caml_local_roots;
  uVar1 = *(undefined8 *)(param_1 + 8);
  caml_local_roots = &local_58;
  local_60 = param_1;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  lVar3 = caml_input_scan_line(uVar1);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined8 *)uVar2;
  return lVar3 * 2 + 1;
}



ulong caml_getblock(undefined4 *param_1,void *param_2,ulong param_3)

{
  undefined4 *__src;
  void *__src_00;
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  __src_00 = *(void **)(param_1 + 6);
  uVar2 = 0x7fffffff;
  if ((long)param_3 < 0x7fffffff) {
    uVar2 = param_3 & 0xffffffff;
  }
  uVar3 = (int)*(undefined8 *)(param_1 + 8) - (int)__src_00;
  iVar1 = (int)uVar2;
  if ((int)uVar3 < iVar1) {
    if ((int)uVar3 < 1) {
      __src = param_1 + 0x14;
      uVar3 = caml_do_read(*param_1,__src,(int)*(undefined8 *)(param_1 + 4) - (int)__src);
      *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + (long)(int)uVar3;
      if ((int)uVar3 < iVar1) {
        uVar2 = (ulong)uVar3;
      }
      *(long *)(param_1 + 8) = (long)param_1 + (long)(int)uVar3 + 0x50;
      memmove(param_2,__src,(long)(int)uVar2);
      *(size_t *)(param_1 + 6) = (long)param_1 + (long)(int)uVar2 + 0x50U;
    }
    else {
      memmove(param_2,__src_00,(long)(int)uVar3);
      *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + (long)(int)uVar3;
      uVar2 = (ulong)uVar3;
    }
  }
  else {
    memmove(param_2,__src_00,(long)iVar1);
    *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + (long)iVar1;
  }
  return uVar2;
}



bool caml_really_getblock(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  
  if (0 < param_3) {
    while (iVar1 = caml_getblock(param_1,param_2,param_3), iVar1 != 0) {
      param_3 = param_3 - iVar1;
      if (param_3 < 1) break;
      param_2 = param_2 + iVar1;
    }
  }
  return param_3 == 0;
}



ulong caml_refill(uint *param_1)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  ulong uStack104;
  undefined8 uStack96;
  undefined8 uStack88;
  undefined8 uStack80;
  ulong *puStack72;
  uint *puStack32;
  
  uStack104 = (ulong)*param_1;
  iVar5 = caml_do_read(uStack104,param_1 + 0x14,
                       (int)*(undefined8 *)(param_1 + 4) - (int)(param_1 + 0x14));
  if (iVar5 != 0) {
    *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + (long)iVar5;
    *(long *)(param_1 + 8) = (long)param_1 + (long)iVar5 + 0x50;
    *(long *)(param_1 + 6) = (long)param_1 + 0x51;
    return (ulong)*(byte *)(param_1 + 0x14);
  }
  caml_raise_end_of_file();
  uVar3 = caml_local_roots;
  uStack80 = 1;
  uStack88 = 1;
  puStack72 = &uStack104;
  uStack96 = caml_local_roots;
  lVar1 = *(long *)(uStack104 + 8);
  caml_local_roots = &uStack96;
  puStack32 = param_1;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(lVar1);
  }
  pbVar2 = *(byte **)(lVar1 + 0x18);
  if (pbVar2 < *(byte **)(lVar1 + 0x20)) {
    bVar4 = *pbVar2;
    *(byte **)(lVar1 + 0x18) = pbVar2 + 1;
  }
  else {
    bVar4 = caml_refill(lVar1);
  }
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(lVar1);
  }
  caml_local_roots = (undefined8 *)uVar3;
  return (ulong)bVar4 * 2 + 1;
}



long caml_ml_input_char(long param_1)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte bVar4;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  
  uVar3 = caml_local_roots;
  local_48 = 1;
  local_50 = 1;
  local_40 = &local_60;
  local_58 = caml_local_roots;
  lVar1 = *(long *)(param_1 + 8);
  caml_local_roots = &local_58;
  local_60 = param_1;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(lVar1);
  }
  pbVar2 = *(byte **)(lVar1 + 0x18);
  if (pbVar2 < *(byte **)(lVar1 + 0x20)) {
    bVar4 = *pbVar2;
    *(byte **)(lVar1 + 0x18) = pbVar2 + 1;
  }
  else {
    bVar4 = caml_refill(lVar1);
  }
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(lVar1);
  }
  caml_local_roots = (undefined8 *)uVar3;
  return (ulong)bVar4 * 2 + 1;
}



int caml_getword(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  do {
    pbVar1 = *(byte **)(param_1 + 0x18);
    if (pbVar1 < *(byte **)(param_1 + 0x20)) {
      bVar2 = *pbVar1;
      *(byte **)(param_1 + 0x18) = pbVar1 + 1;
    }
    else {
      bVar2 = caml_refill(param_1);
    }
    iVar3 = iVar3 + 1;
    iVar4 = (uint)bVar2 + iVar4 * 0x100;
  } while (iVar3 != 4);
  return iVar4;
}



long caml_ml_input_int(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  
  uVar2 = caml_local_roots;
  local_48 = 1;
  local_50 = 1;
  local_40 = &local_60;
  local_58 = caml_local_roots;
  uVar1 = *(undefined8 *)(param_1 + 8);
  caml_local_roots = &local_58;
  local_60 = param_1;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  iVar3 = caml_getword(uVar1);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined8 *)uVar2;
  return (long)iVar3 * 2 + 1;
}



ulong do_write(int param_1,void *param_2,int param_3)

{
  bool bVar1;
  ulong uVar2;
  int *piVar3;
  
  do {
    do {
      caml_enter_blocking_section();
      uVar2 = write(param_1,param_2,(long)param_3);
      uVar2 = uVar2 & 0xffffffff;
      caml_leave_blocking_section();
      if ((int)uVar2 != -1) {
        return uVar2;
      }
      piVar3 = __errno_location();
    } while (*piVar3 == 4);
    bVar1 = 1 < param_3;
    param_3 = 1;
  } while (*piVar3 == 0xb && bVar1);
  caml_sys_io_error(1);
  return uVar2;
}



ulong caml_putblock(undefined4 *param_1,void *param_2,ulong param_3)

{
  undefined4 *__dest;
  int iVar1;
  long lVar2;
  void *__dest_00;
  uint uVar3;
  int iVar4;
  
  if ((long)param_3 < 0x7fffffff) {
    __dest_00 = *(void **)(param_1 + 6);
    iVar1 = (int)param_3;
    uVar3 = (int)*(undefined8 *)(param_1 + 4) - (int)__dest_00;
    if (iVar1 < (int)uVar3) {
      memmove(__dest_00,param_2,(long)iVar1);
      *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + (long)iVar1;
      return param_3 & 0xffffffff;
    }
  }
  else {
    __dest_00 = *(void **)(param_1 + 6);
    uVar3 = (int)*(undefined8 *)(param_1 + 4) - (int)__dest_00;
  }
  __dest = param_1 + 0x14;
  memmove(__dest_00,param_2,(long)(int)uVar3);
  iVar4 = (int)*(undefined8 *)(param_1 + 4) - (int)__dest;
  iVar1 = do_write(*param_1,__dest,iVar4);
  lVar2 = (long)iVar1;
  if (iVar1 < iVar4) {
    memmove(__dest,(void *)((long)__dest + lVar2),(long)(iVar4 - iVar1));
  }
  *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + lVar2;
  *(long *)(param_1 + 6) = *(long *)(param_1 + 4) - lVar2;
  return (ulong)uVar3;
}



undefined8 caml_ml_output(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  uVar2 = caml_local_roots;
  lVar5 = param_4 >> 1;
  local_38 = &local_88;
  local_50 = &local_70;
  local_68 = caml_local_roots;
  local_58 = 1;
  local_48 = &local_78;
  local_60 = 4;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_40 = &local_80;
  caml_local_roots = &local_68;
  local_88 = param_4;
  local_80 = param_3;
  local_78 = param_2;
  local_70 = param_1;
  plVar3 = &local_88;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
    plVar3 = local_38;
  }
  local_38 = plVar3;
  if (0 < lVar5) {
    param_3 = param_3 >> 1;
    do {
      iVar4 = caml_putblock(uVar1,param_3 + local_78,lVar5);
      lVar5 = lVar5 - iVar4;
      param_3 = param_3 + iVar4;
    } while (0 < lVar5);
  }
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined8 *)uVar2;
  return 1;
}



long caml_ml_output_partial(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  long *local_30;
  long *local_28;
  
  uVar2 = caml_local_roots;
  local_28 = &local_78;
  local_40 = &local_60;
  local_58 = caml_local_roots;
  local_48 = 1;
  local_38 = &local_68;
  local_50 = 4;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_30 = &local_70;
  caml_local_roots = &local_58;
  local_78 = param_4;
  local_70 = param_3;
  local_68 = param_2;
  local_60 = param_1;
  plVar3 = &local_78;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
    plVar3 = local_28;
  }
  local_28 = plVar3;
  iVar4 = caml_putblock(uVar1,(local_70 >> 1) + local_68,local_78 >> 1);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined8 *)uVar2;
  return (long)iVar4 * 2 + 1;
}



void caml_really_putblock(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  
  if (0 < param_3) {
    do {
      iVar1 = caml_putblock(param_1,param_2,param_3);
      param_3 = param_3 - iVar1;
      param_2 = param_2 + iVar1;
    } while (0 < param_3);
  }
  return;
}



bool caml_flush_partial(undefined4 *param_1)

{
  undefined4 *__dest;
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  
  __dest = param_1 + 0x14;
  puVar4 = *(undefined4 **)(param_1 + 6);
  iVar2 = (int)puVar4 - (int)__dest;
  if (0 < iVar2) {
    iVar1 = do_write(*param_1,__dest,iVar2);
    lVar3 = (long)iVar1;
    *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + lVar3;
    if (iVar1 < iVar2) {
      memmove(__dest,(void *)((long)__dest + lVar3),(long)(iVar2 - iVar1));
    }
    puVar4 = (undefined4 *)(*(long *)(param_1 + 6) - lVar3);
    *(undefined4 **)(param_1 + 6) = puVar4;
  }
  return puVar4 == __dest;
}



undefined8 caml_ml_output_char(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  uVar2 = caml_local_roots;
  local_38 = &local_68;
  local_48 = 1;
  local_50 = 2;
  local_40 = &local_60;
  local_58 = caml_local_roots;
  lVar1 = *(long *)(param_1 + 8);
  caml_local_roots = &local_58;
  local_68 = param_2;
  local_60 = param_1;
  plVar3 = &local_68;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(lVar1);
    plVar3 = local_38;
  }
  local_38 = plVar3;
  puVar4 = *(undefined **)(lVar1 + 0x18);
  if (*(undefined **)(lVar1 + 0x10) <= puVar4) {
    caml_flush_partial(lVar1);
    puVar4 = *(undefined **)(lVar1 + 0x18);
  }
  *puVar4 = (char)(local_68 >> 1);
  *(undefined **)(lVar1 + 0x18) = puVar4 + 1;
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(lVar1);
  }
  caml_local_roots = (undefined8 *)uVar2;
  return 1;
}



long caml_ml_flush_partial(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  
  uVar2 = caml_local_roots;
  piVar1 = *(int **)(param_1 + 8);
  if (*piVar1 == -1) {
    lVar4 = 3;
  }
  else {
    local_40 = &local_60;
    local_58 = caml_local_roots;
    local_48 = 1;
    local_50 = 1;
    caml_local_roots = &local_58;
    local_60 = param_1;
    if (caml_channel_mutex_lock != (code *)0x0) {
      (*caml_channel_mutex_lock)(piVar1);
    }
    iVar3 = caml_flush_partial(piVar1);
    if (caml_channel_mutex_unlock != (code *)0x0) {
      (*caml_channel_mutex_unlock)(piVar1);
    }
    lVar4 = (-(ulong)(iVar3 == 0) & 0xfffffffffffffffe) + 3;
  }
  caml_local_roots = (undefined8 *)uVar2;
  return lVar4;
}



void caml_putword(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 0x18);
  if (*(undefined **)(param_1 + 0x10) <= puVar1) {
    caml_flush_partial();
    puVar1 = *(undefined **)(param_1 + 0x18);
  }
  *puVar1 = (char)((uint)param_2 >> 0x18);
  puVar1 = puVar1 + 1;
  *(undefined **)(param_1 + 0x18) = puVar1;
  if (*(undefined **)(param_1 + 0x10) <= puVar1) {
    caml_flush_partial(param_1);
    puVar1 = *(undefined **)(param_1 + 0x18);
  }
  *puVar1 = (char)((uint)param_2 >> 0x10);
  puVar1 = puVar1 + 1;
  *(undefined **)(param_1 + 0x18) = puVar1;
  if (*(undefined **)(param_1 + 0x10) <= puVar1) {
    caml_flush_partial(param_1);
    puVar1 = *(undefined **)(param_1 + 0x18);
  }
  *puVar1 = (char)((uint)param_2 >> 8);
  puVar1 = puVar1 + 1;
  *(undefined **)(param_1 + 0x18) = puVar1;
  if (*(undefined **)(param_1 + 0x10) <= puVar1) {
    caml_flush_partial(param_1);
    puVar1 = *(undefined **)(param_1 + 0x18);
  }
  *puVar1 = (char)param_2;
  *(undefined **)(param_1 + 0x18) = puVar1 + 1;
  return;
}



undefined8 caml_ml_output_int(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  uVar2 = caml_local_roots;
  local_38 = &local_68;
  local_48 = 1;
  local_50 = 2;
  local_40 = &local_60;
  local_58 = caml_local_roots;
  uVar1 = *(undefined8 *)(param_1 + 8);
  caml_local_roots = &local_58;
  local_68 = param_2;
  local_60 = param_1;
  plVar3 = &local_68;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
    plVar3 = local_38;
  }
  local_38 = plVar3;
  caml_putword(uVar1,local_68 >> 1);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined8 *)uVar2;
  return 1;
}



void caml_flush(undefined8 param_1)

{
  int iVar1;
  
  do {
    iVar1 = caml_flush_partial(param_1);
  } while (iVar1 == 0);
  return;
}



undefined8 caml_ml_flush(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  
  uVar2 = caml_local_roots;
  piVar1 = *(int **)(param_1 + 8);
  if (*piVar1 != -1) {
    local_40 = &local_60;
    local_58 = caml_local_roots;
    local_48 = 1;
    local_50 = 1;
    caml_local_roots = &local_58;
    local_60 = param_1;
    if (caml_channel_mutex_lock != (code *)0x0) {
      (*caml_channel_mutex_lock)(piVar1);
    }
    caml_flush(piVar1);
    if (caml_channel_mutex_unlock != (code *)0x0) {
      (*caml_channel_mutex_unlock)(piVar1);
    }
  }
  caml_local_roots = (undefined8 *)uVar2;
  return 1;
}



void caml_seek_out(int *param_1,long param_2)

{
  __off64_t _Var1;
  
  caml_flush();
  _Var1 = lseek64(*param_1,param_2,0);
  if (_Var1 != param_2) {
    caml_sys_error(1);
  }
  *(long *)(param_1 + 2) = param_2;
  return;
}



undefined8 caml_ml_seek_out_64(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  uVar2 = caml_local_roots;
  local_38 = &local_68;
  local_48 = 1;
  local_50 = 2;
  local_40 = &local_60;
  local_58 = caml_local_roots;
  uVar1 = *(undefined8 *)(param_1 + 8);
  caml_local_roots = &local_58;
  local_68 = param_2;
  local_60 = param_1;
  plVar3 = &local_68;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
    plVar3 = local_38;
  }
  local_38 = plVar3;
  caml_seek_out(uVar1,*(undefined8 *)(local_68 + 8));
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined8 *)uVar2;
  return 1;
}



undefined8 caml_ml_seek_out(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  uVar2 = caml_local_roots;
  local_38 = &local_68;
  local_48 = 1;
  local_50 = 2;
  local_40 = &local_60;
  local_58 = caml_local_roots;
  uVar1 = *(undefined8 *)(param_1 + 8);
  caml_local_roots = &local_58;
  local_68 = param_2;
  local_60 = param_1;
  plVar3 = &local_68;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
    plVar3 = local_38;
  }
  local_38 = plVar3;
  caml_seek_out(uVar1,local_68 >> 1);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined8 *)uVar2;
  return 1;
}



int * caml_open_descriptor_in(int param_1)

{
  int *piVar1;
  __off64_t _Var2;
  
  piVar1 = (int *)caml_stat_alloc();
  *piVar1 = param_1;
  _Var2 = lseek64(param_1,0,1);
  *(__off64_t *)(piVar1 + 2) = _Var2;
  *(undefined8 *)(piVar1 + 10) = 0;
  piVar1[0x10] = 0;
  piVar1[0x11] = 0;
  *(int **)(piVar1 + 8) = piVar1 + 0x14;
  *(int **)(piVar1 + 6) = piVar1 + 0x14;
  piVar1[0x12] = 0;
  piVar1[0x13] = 0;
  *(int **)(piVar1 + 4) = piVar1 + 0x414;
  *(undefined8 *)(piVar1 + 0xe) = 0;
  *(int **)(piVar1 + 0xc) = caml_all_opened_channels;
  if (caml_all_opened_channels != (int *)0x0) {
    *(int **)((long)caml_all_opened_channels + 0x38) = piVar1;
  }
  caml_all_opened_channels = piVar1;
  return piVar1;
}



void caml_ml_open_descriptor_in(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = caml_open_descriptor_in(param_1 >> 1);
  caml_alloc_channel(uVar1);
  return;
}



void caml_open_descriptor_out(void)

{
  long lVar1;
  
  lVar1 = caml_open_descriptor_in();
  *(undefined8 *)(lVar1 + 0x20) = 0;
  return;
}



void caml_ml_open_descriptor_out(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = caml_open_descriptor_out(param_1 >> 1);
  caml_alloc_channel(uVar1);
  return;
}



void extern_replay_trail(void)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *__ptr;
  
  puVar4 = extern_trail_cur;
  __ptr = (long *)extern_trail_block;
  while( true ) {
    for (puVar3 = (ulong *)(__ptr + 1); puVar3 < puVar4; puVar3 = puVar3 + 2) {
      puVar2 = (ulong *)(*puVar3 & 0xfffffffffffffffc);
      puVar2[-1] = puVar2[-1] & 0xfffffffffffffcff | (ulong)((uint)*puVar3 & 3) << 8;
      *puVar2 = puVar3[1];
    }
    if (__ptr == (long *)extern_trail_first) break;
    plVar1 = (long *)*__ptr;
    free(__ptr);
    puVar4 = (ulong *)(plVar1 + 0x803);
    __ptr = plVar1;
  }
  extern_trail_block = extern_trail_first;
  extern_trail_cur = (ulong *)0x653d48;
  return;
}



void free_extern_output(void)

{
  long *plVar1;
  long *__ptr;
  
  if (extern_userprovided_output != 0) {
    return;
  }
  __ptr = extern_output_first;
  if (extern_output_first != (long *)0x0) {
    do {
      plVar1 = (long *)*__ptr;
      free(__ptr);
      __ptr = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  extern_output_first = (long *)0x0;
  return;
}



void extern_out_of_memory(void)

{
  extern_replay_trail();
  free_extern_output();
                    // WARNING: Subroutine does not return
  caml_raise_out_of_memory();
}



void grow_extern_output(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (extern_userprovided_output == 0) {
    lVar2 = 0x1fa4;
    extern_output_block[1] = extern_ptr;
    if (param_1 < 0xfd3) {
      puVar1 = (undefined8 *)malloc(0x1fb8);
    }
    else {
      lVar2 = param_1 + 0x1fa4;
      puVar1 = (undefined8 *)malloc(param_1 + 0x1fb8);
    }
    if (puVar1 == (undefined8 *)0x0) {
      extern_out_of_memory();
    }
    *extern_output_block = puVar1;
    extern_output_block = puVar1;
    *puVar1 = 0;
    extern_ptr = puVar1 + 2;
    extern_limit = (long)puVar1 + lVar2 + 0x10;
    return;
  }
  extern_replay_trail();
                    // WARNING: Subroutine does not return
  caml_failwith("Marshal.to_buffer: buffer overflow");
}



void caml_serialize_block_8(undefined *param_1,long param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined *puVar4;
  long lVar5;
  
  if (extern_limit < extern_ptr + param_2 * 8) {
    grow_extern_output();
  }
  puVar4 = extern_ptr;
  lVar5 = param_2;
  if (0 < param_2) {
    do {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      *puVar4 = param_1[7];
      uVar3 = param_1[6];
      puVar4[7] = uVar1;
      puVar4[6] = uVar2;
      puVar4[1] = uVar3;
      uVar1 = param_1[2];
      uVar2 = param_1[3];
      puVar4[2] = param_1[5];
      uVar3 = param_1[4];
      param_1 = param_1 + 8;
      puVar4[5] = uVar1;
      puVar4[4] = uVar2;
      puVar4[3] = uVar3;
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 8;
    } while (lVar5 != 0);
    extern_ptr = extern_ptr + param_2 * 8;
  }
  return;
}



void caml_serialize_int_8(undefined8 param_1)

{
  undefined8 local_10 [2];
  
  local_10[0] = param_1;
  caml_serialize_block_8(local_10,1);
  return;
}



void caml_serialize_block_4(long param_1,long param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  long lVar4;
  long lVar5;
  
  if (extern_limit < (ulong)(extern_ptr + param_2 * 4)) {
    grow_extern_output();
  }
  if (0 < param_2) {
    lVar4 = 0;
    lVar5 = param_2;
    do {
      uVar1 = *(undefined *)(param_1 + lVar4);
      uVar2 = *(undefined *)(param_1 + 1 + lVar4);
      *(undefined *)(extern_ptr + lVar4) = *(undefined *)(param_1 + 3 + lVar4);
      uVar3 = *(undefined *)(param_1 + 2 + lVar4);
      *(undefined *)(extern_ptr + 3 + lVar4) = uVar1;
      *(undefined *)(extern_ptr + 2 + lVar4) = uVar2;
      *(undefined *)(extern_ptr + 1 + lVar4) = uVar3;
      lVar4 = lVar4 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    extern_ptr = extern_ptr + param_2 * 4;
  }
  return;
}



void caml_serialize_float_4(undefined4 param_1)

{
  undefined4 local_c [3];
  
  local_c[0] = param_1;
  caml_serialize_block_4(local_c,1);
  return;
}



void caml_serialize_block_2(long param_1,long param_2)

{
  undefined uVar1;
  long lVar2;
  long lVar3;
  
  if (extern_limit < (ulong)(extern_ptr + param_2 * 2)) {
    grow_extern_output();
  }
  if (0 < param_2) {
    lVar2 = 0;
    lVar3 = param_2;
    do {
      uVar1 = *(undefined *)(param_1 + 1 + lVar2);
      *(undefined *)(extern_ptr + 1 + lVar2) = *(undefined *)(param_1 + lVar2);
      *(undefined *)(extern_ptr + lVar2) = uVar1;
      lVar2 = lVar2 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    extern_ptr = extern_ptr + param_2 * 2;
  }
  return;
}



void caml_serialize_int_4(undefined4 param_1)

{
  undefined *puVar1;
  
  puVar1 = extern_ptr + 4;
  if (extern_limit < puVar1) {
    grow_extern_output(4);
    puVar1 = extern_ptr + 4;
  }
  extern_ptr[3] = (char)param_1;
  *extern_ptr = (char)((uint)param_1 >> 0x18);
  extern_ptr[1] = (char)((uint)param_1 >> 0x10);
  extern_ptr[2] = (char)((uint)param_1 >> 8);
  extern_ptr = puVar1;
  return;
}



void caml_serialize_int_2(undefined4 param_1)

{
  undefined *puVar1;
  
  puVar1 = extern_ptr + 2;
  if (extern_limit < puVar1) {
    grow_extern_output(2);
    puVar1 = extern_ptr + 2;
  }
  extern_ptr[1] = (char)param_1;
  *extern_ptr = (char)((uint)param_1 >> 8);
  extern_ptr = puVar1;
  return;
}



void caml_serialize_int_1(undefined param_1)

{
  undefined *puVar1;
  
  puVar1 = extern_ptr + 1;
  if (extern_limit < puVar1) {
    grow_extern_output(1);
    puVar1 = extern_ptr + 1;
  }
  *extern_ptr = param_1;
  extern_ptr = puVar1;
  return;
}



void writecode8(undefined param_1,undefined param_2)

{
  undefined *puVar1;
  
  puVar1 = extern_ptr + 2;
  if (extern_limit < puVar1) {
    grow_extern_output(2);
    puVar1 = extern_ptr + 2;
  }
  *extern_ptr = param_1;
  extern_ptr[1] = param_2;
  extern_ptr = puVar1;
  return;
}



void writecode32(undefined param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = extern_ptr + 5;
  if (extern_limit < puVar1) {
    grow_extern_output(5);
    puVar1 = extern_ptr + 5;
  }
  *extern_ptr = param_1;
  extern_ptr[4] = (char)param_2;
  extern_ptr[1] = (char)((ulong)param_2 >> 0x18);
  extern_ptr[2] = (char)((ulong)param_2 >> 0x10);
  extern_ptr[3] = (char)((ulong)param_2 >> 8);
  extern_ptr = puVar1;
  return;
}



void write32(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = extern_ptr + 4;
  if (extern_limit < puVar1) {
    grow_extern_output(4);
    puVar1 = extern_ptr + 4;
  }
  extern_ptr[3] = (char)param_1;
  *extern_ptr = (char)((ulong)param_1 >> 0x18);
  extern_ptr[1] = (char)((ulong)param_1 >> 0x10);
  extern_ptr[2] = (char)((ulong)param_1 >> 8);
  extern_ptr = puVar1;
  return;
}



void extern_record_location(ulong *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (extern_ignore_sharing == 0) {
    if (extern_trail_cur == extern_trail_limit) {
      puVar2 = (undefined8 *)malloc(0x4018);
      if (puVar2 == (undefined8 *)0x0) {
        extern_out_of_memory();
      }
      *puVar2 = extern_trail_block;
      extern_trail_cur = puVar2 + 1;
      extern_trail_limit = puVar2 + 0x803;
      extern_trail_block = puVar2;
    }
    uVar1 = param_1[-1];
    *extern_trail_cur = (ulong)((uint)(uVar1 >> 8) & 3) | (ulong)param_1;
    extern_trail_cur[1] = *param_1;
    extern_trail_cur = extern_trail_cur + 2;
    param_1[-1] = uVar1 & 0xfffffffffffffcff | 0x200;
    *param_1 = obj_counter;
    obj_counter = obj_counter + 1;
  }
  return;
}



void init_extern_output(void)

{
  undefined8 *puVar1;
  
  extern_userprovided_output = 0;
  puVar1 = (undefined8 *)malloc(0x1fb8);
  extern_output_first = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    extern_output_block = puVar1;
    *puVar1 = 0;
    extern_ptr = puVar1 + 2;
    extern_limit = (long)puVar1 + 0x1fb4;
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise_out_of_memory();
}



void caml_serialize_block_float_8(void *param_1,long param_2)

{
  size_t __n;
  
  __n = param_2 * 8;
  if (extern_limit < (void *)((long)extern_ptr + __n)) {
    grow_extern_output(__n);
  }
  memmove(extern_ptr,param_1,__n);
  extern_ptr = (void *)((long)extern_ptr + __n);
  return;
}



void caml_serialize_float_8(undefined8 param_1)

{
  undefined8 local_10 [2];
  
  local_10[0] = param_1;
  caml_serialize_block_float_8(local_10,1);
  return;
}



void caml_serialize_block_1(void *param_1,size_t param_2)

{
  if (extern_limit < (long)extern_ptr + param_2) {
    grow_extern_output(param_2);
  }
  memmove(extern_ptr,param_1,param_2);
  extern_ptr = (void *)((long)extern_ptr + param_2);
  return;
}



void writeblock(void *param_1,size_t param_2)

{
  if (extern_limit < (long)extern_ptr + param_2) {
    grow_extern_output(param_2);
  }
  memmove(extern_ptr,param_1,param_2);
  extern_ptr = (void *)((long)extern_ptr + param_2);
  return;
}



void extern_invalid_argument(undefined8 param_1)

{
  extern_replay_trail();
  free_extern_output();
                    // WARNING: Subroutine does not return
  caml_invalid_argument(param_1);
}



void extern_rec(long **param_1)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  char *pcVar4;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  byte bVar8;
  int iVar9;
  long **pplVar10;
  ulong uVar11;
  uint uVar12;
  long local_48;
  long local_40 [2];
  
LAB_0042d21a:
  do {
    pplVar10 = param_1;
    if (((ulong)pplVar10 & 1) != 0) {
      uVar3 = (long)pplVar10 >> 1;
      if (uVar3 < 0x40) {
        if (extern_limit <= extern_ptr) {
          grow_extern_output(1);
        }
        *extern_ptr = (char)uVar3 + '@';
        extern_ptr = extern_ptr + 1;
      }
      else {
        if (uVar3 + 0x80 < 0x100) {
          writecode8(0,uVar3);
        }
        else {
          if (uVar3 + 0x8000 < 0x10000) {
            pcVar4 = extern_ptr + 3;
            if (extern_limit < pcVar4) {
              grow_extern_output(3);
              pcVar4 = extern_ptr + 3;
            }
            *extern_ptr = '\x01';
            extern_ptr[2] = (char)uVar3;
            extern_ptr[1] = (char)(uVar3 >> 8);
            extern_ptr = pcVar4;
          }
          else {
            if (uVar3 + 0x80000000 < 0x100000000) {
              writecode32(2,uVar3);
            }
            else {
              if (extern_limit < extern_ptr + 9) {
                grow_extern_output(9);
              }
              *extern_ptr = '\x03';
              iVar9 = 0x38;
              pcVar4 = extern_ptr;
              do {
                bVar8 = (byte)iVar9;
                iVar9 = iVar9 + -8;
                pcVar4[1] = (char)((long)uVar3 >> (bVar8 & 0x3f));
                pcVar4 = pcVar4 + 1;
              } while (iVar9 != -8);
              extern_ptr = extern_ptr + 9;
            }
          }
        }
      }
      return;
    }
    uVar3 = caml_page_table_lookup();
    if ((uVar3 & 7) == 0) {
      if ((caml_code_area_start <= pplVar10) && (pplVar10 < caml_code_area_end)) {
        if (extern_closures == 0) {
          extern_invalid_argument("output_value: functional value");
        }
        writecode32(0x10,(long)pplVar10 - (long)caml_code_area_start);
        uVar7 = caml_code_checksum();
        writeblock(uVar7,0x10);
        return;
      }
      extern_invalid_argument("output_value: abstract value (outside heap)");
      return;
    }
    plVar2 = pplVar10[-1];
    uVar12 = (uint)((ulong)plVar2 & 0xff);
  } while ((uVar12 == 0xfa) &&
          ((param_1 = (long **)*pplVar10, ((ulong)param_1 & 1) != 0 ||
           ((((uVar3 = caml_page_table_lookup(), (uVar3 & 7) != 0 &&
              (cVar1 = *(char *)(param_1 + -1), cVar1 != -6)) && (cVar1 != -10)) && (cVar1 != -3))))
          ));
  uVar3 = (ulong)plVar2 >> 10;
  cVar1 = (char)((ulong)plVar2 & 0xff);
  if (uVar3 == 0) {
    if (uVar12 < 0x10) {
      if (extern_limit <= extern_ptr) {
        grow_extern_output(1);
      }
      *extern_ptr = cVar1 + -0x80;
      extern_ptr = extern_ptr + 1;
      return;
    }
    writecode32(8,plVar2);
    return;
  }
  if (((uint)plVar2 & 0x300) == 0x200) {
    uVar3 = obj_counter - (long)*pplVar10;
    if (uVar3 < 0x100) {
      writecode8(4,uVar3);
      return;
    }
    if (uVar3 < 0x10000) {
      pcVar4 = extern_ptr + 3;
      if (extern_limit < pcVar4) {
        grow_extern_output(3);
        pcVar4 = extern_ptr + 3;
      }
      *extern_ptr = '\x05';
      extern_ptr[2] = (char)uVar3;
      extern_ptr[1] = (char)(uVar3 >> 8);
      extern_ptr = pcVar4;
      return;
    }
    writecode32(6,uVar3);
    return;
  }
  switch(uVar12) {
  case 0xf9:
    writecode32(0x11,uVar3 * 8);
    extern_rec(pplVar10 + -uVar3);
    return;
  default:
    goto switchD_0042d32a_caseD_fa;
  case 0xfb:
    extern_invalid_argument("output_value: abstract value (Abstract)");
    return;
  case 0xfc:
    uVar11 = caml_string_length(pplVar10);
    if (uVar11 < 0x20) {
      if (extern_limit <= extern_ptr) {
        grow_extern_output(1);
      }
      *extern_ptr = (char)uVar11 + ' ';
      extern_ptr = extern_ptr + 1;
    }
    else {
      if (uVar11 < 0x100) {
        writecode8(9,uVar11);
      }
      else {
        writecode32(10,uVar11);
      }
    }
    writeblock(pplVar10,uVar11);
    uVar3 = uVar11 + 8 >> 3;
    size_32 = size_32 + 1 + (uVar11 + 4 >> 2);
    break;
  case 0xfd:
    if (extern_limit <= extern_ptr) {
      grow_extern_output(1);
    }
    *extern_ptr = '\f';
    extern_ptr = extern_ptr + 1;
    writeblock(pplVar10,8);
    size_32 = size_32 + 3;
    size_64 = size_64 + 2;
    extern_record_location(pplVar10);
    return;
  case 0xfe:
    uVar3 = (ulong)pplVar10[-1] >> 10;
    if (uVar3 < 0x100) {
      writecode8(0xe,uVar3);
    }
    else {
      writecode32(7,uVar3);
    }
    writeblock(pplVar10,uVar3 * 8);
    size_32 = size_32 + 1 + uVar3 * 2;
    break;
  case 0xff:
    pcVar4 = (char *)**pplVar10;
    if ((char *)(*pplVar10)[4] == (char *)0x0) {
      extern_invalid_argument("output_value: abstract value (Custom)");
    }
    if (extern_limit <= extern_ptr) {
      grow_extern_output(1);
    }
    *extern_ptr = '\x12';
    extern_ptr = extern_ptr + 1;
    sVar5 = strlen(pcVar4);
    writeblock(pcVar4,sVar5 + 1);
    (*(code *)(*pplVar10)[4])(pplVar10,local_40,&local_48);
    size_32 = size_32 + 2 + (local_40[0] + 3U >> 2);
    size_64 = size_64 + 2 + (local_48 + 7U >> 3);
    extern_record_location(pplVar10);
    return;
  }
  size_64 = uVar3 + 1 + size_64;
  extern_record_location(pplVar10);
  return;
switchD_0042d32a_caseD_fa:
  if ((uVar12 < 0x10) && (uVar3 < 8)) {
    if (extern_limit <= extern_ptr) {
      grow_extern_output(1);
    }
    *extern_ptr = (char)((int)uVar3 << 4) + -0x80 + cVar1;
    extern_ptr = extern_ptr + 1;
  }
  else {
    if (plVar2 < (long *)0x100000000) {
      writecode32(8,(ulong)plVar2 & 0xfffffffffffffcff);
    }
    else {
      if (extern_limit < extern_ptr + 9) {
        grow_extern_output(9);
      }
      *extern_ptr = '\x13';
      iVar9 = 0x38;
      pcVar4 = extern_ptr;
      do {
        bVar8 = (byte)iVar9;
        iVar9 = iVar9 + -8;
        pcVar4[1] = (char)((long)((ulong)plVar2 & 0xfffffffffffffcff) >> (bVar8 & 0x3f));
        pcVar4 = pcVar4 + 1;
      } while (iVar9 != -8);
      extern_ptr = extern_ptr + 9;
    }
  }
  size_32 = uVar3 + 1 + size_32;
  size_64 = uVar3 + 1 + size_64;
  param_1 = (long **)*pplVar10;
  extern_record_location();
  if (uVar3 != 1) {
    uVar3 = uVar3 - 1;
    uVar11 = 1;
    extern_rec();
    lVar6 = 8;
    if (1 < uVar3) {
      do {
        uVar11 = uVar11 + 1;
        extern_rec();
      } while (uVar11 < uVar3);
      lVar6 = uVar3 * 8;
    }
    param_1 = *(long ***)(lVar6 + (long)pplVar10);
  }
  goto LAB_0042d21a;
}



long extern_value(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
  uVar2 = caml_convert_flag_list(param_2,&extern_flags);
  extern_closures = uVar2 & 2;
  extern_ignore_sharing = uVar2 & 1;
  extern_trail_block = extern_trail_first;
  extern_trail_cur = 0x653d48;
  extern_trail_limit = &extern_trail_block;
  obj_counter = 0;
  size_32 = 0;
  size_64 = 0;
  write32(0x8495a6be);
  extern_ptr = extern_ptr + 0x10;
  extern_rec(param_1);
  if (extern_userprovided_output == 0) {
    *(long *)(extern_output_block + 8) = extern_ptr;
  }
  extern_replay_trail();
  if (extern_userprovided_output == 0) {
    lVar4 = 0;
    plVar3 = extern_output_first;
    if (extern_output_first != (long *)0x0) {
      do {
        plVar1 = (long *)*plVar3;
        lVar4 = (plVar3[1] - (long)plVar3) + -0x10 + lVar4;
        plVar3 = plVar1;
      } while (plVar1 != (long *)0x0);
      goto LAB_0042da9e;
    }
  }
  else {
    lVar4 = extern_ptr - extern_userprovided_output;
LAB_0042da9e:
    if (0xffffffff < lVar4) goto LAB_0042db87;
  }
  if ((size_32 < 0x100000000) && (size_64 < 0x100000000)) {
    if (extern_userprovided_output == 0) {
      extern_ptr = (long)extern_output_first + 0x14;
      extern_limit = (long)extern_output_first + 0x1fb4;
    }
    else {
      extern_ptr = extern_userprovided_output + 4;
    }
    write32(lVar4 + -0x14);
    write32(obj_counter);
    write32(size_32);
    write32(size_64);
    return lVar4;
  }
LAB_0042db87:
  free_extern_output();
                    // WARNING: Subroutine does not return
  caml_failwith("output_value: object too big");
}



void caml_output_value_to_block(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  extern_limit = param_3 + param_4;
  extern_userprovided_output = param_3;
  extern_ptr = param_3;
  extern_value();
  return;
}



void caml_output_value_to_malloc
               (undefined8 param_1,undefined8 param_2,void **param_3,size_t *param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  void *__dest;
  
  init_extern_output();
  sVar2 = extern_value(param_1,param_2);
  __dest = malloc(sVar2);
  if (__dest == (void *)0x0) {
    extern_out_of_memory();
  }
  *param_3 = __dest;
  puVar1 = extern_output_first;
  *param_4 = sVar2;
  for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    sVar2 = SEXT48((int)puVar1[1] - (int)(puVar1 + 2));
    memmove(__dest,puVar1 + 2,sVar2);
    __dest = (void *)((long)__dest + sVar2);
  }
  free_extern_output();
  return;
}



long caml_output_value_to_buffer
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  
  extern_userprovided_output = (param_2 >> 1) + param_1;
  extern_limit = extern_userprovided_output + (param_3 >> 1);
  extern_ptr = extern_userprovided_output;
  lVar1 = extern_value(param_4,param_5);
  return lVar1 * 2 + 1;
}



long caml_output_value_to_string(undefined8 param_1,undefined8 param_2)

{
  void *__dest;
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *__ptr;
  long lVar4;
  size_t __n;
  
  init_extern_output();
  uVar2 = extern_value(param_1,param_2);
  __ptr = extern_output_first;
  lVar3 = caml_alloc_string(uVar2);
  if (__ptr != (long *)0x0) {
    lVar4 = 0;
    do {
      __dest = (void *)(lVar4 + lVar3);
      __n = SEXT48((int)__ptr[1] - (int)(__ptr + 2));
      lVar4 = lVar4 + __n;
      memmove(__dest,__ptr + 2,__n);
      plVar1 = (long *)*__ptr;
      free(__ptr);
      __ptr = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return lVar3;
}



void caml_output_val(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  int iVar2;
  
  iVar2 = caml_channel_binary_mode();
  if (iVar2 != 0) {
    init_extern_output();
    extern_value(param_2,param_3);
    __ptr = extern_output_first;
    while (__ptr != (undefined8 *)0x0) {
      caml_really_putblock(param_1,__ptr + 2,__ptr[1] - (long)(__ptr + 2));
      puVar1 = (undefined8 *)*__ptr;
      free(__ptr);
      __ptr = puVar1;
    }
    return;
  }
                    // WARNING: Subroutine does not return
  caml_failwith("output_value: not a binary channel");
}



undefined8 caml_output_value(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  uVar2 = caml_local_roots;
  local_48 = 1;
  local_40 = &local_60;
  local_58 = caml_local_roots;
  local_50 = 3;
  local_38 = &local_68;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_30 = &local_70;
  caml_local_roots = &local_58;
  local_70 = param_3;
  local_68 = param_2;
  local_60 = param_1;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  caml_output_val(uVar1,local_68,local_70);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined8 *)uVar2;
  return 1;
}



undefined caml_deserialize_uint_1(void)

{
  undefined uVar1;
  
  uVar1 = *intern_src;
  intern_src = intern_src + 1;
  return uVar1;
}



long caml_deserialize_sint_1(void)

{
  char cVar1;
  
  cVar1 = *intern_src;
  intern_src = intern_src + 1;
  return (long)cVar1;
}



int caml_deserialize_uint_2(void)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = intern_src + 1;
  bVar2 = *intern_src;
  intern_src = intern_src + 2;
  return (uint)*pbVar1 + (uint)bVar2 * 0x100;
}



long caml_deserialize_sint_2(void)

{
  byte *pbVar1;
  char cVar2;
  
  cVar2 = *intern_src;
  pbVar1 = (byte *)(intern_src + 1);
  intern_src = intern_src + 2;
  return (long)cVar2 * 0x100 + (ulong)*pbVar1;
}



long caml_deserialize_uint_4(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  
  bVar4 = *intern_src;
  pbVar1 = intern_src + 3;
  pbVar2 = intern_src + 1;
  pbVar3 = intern_src + 2;
  intern_src = intern_src + 4;
  return (ulong)*pbVar1 + (ulong)bVar4 * 0x1000000 + (long)(int)((uint)*pbVar2 << 0x10) +
         (long)(int)((uint)*pbVar3 << 8);
}



long caml_deserialize_sint_4(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  char cVar4;
  
  cVar4 = *intern_src;
  pbVar1 = (byte *)(intern_src + 3);
  pbVar2 = (byte *)(intern_src + 1);
  pbVar3 = (byte *)(intern_src + 2);
  intern_src = intern_src + 4;
  return (long)cVar4 * 0x1000000 + (ulong)*pbVar1 + (long)(int)((uint)*pbVar2 << 0x10) +
         (long)(int)((uint)*pbVar3 << 8);
}



void caml_deserialize_block_2(long param_1,long param_2)

{
  undefined uVar1;
  long lVar2;
  long lVar3;
  
  if (0 < param_2) {
    lVar2 = 0;
    lVar3 = param_2;
    do {
      uVar1 = *(undefined *)(intern_src + 1 + lVar2);
      *(undefined *)(param_1 + 1 + lVar2) = *(undefined *)(intern_src + lVar2);
      *(undefined *)(param_1 + lVar2) = uVar1;
      lVar2 = lVar2 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    intern_src = intern_src + param_2 * 2;
  }
  return;
}



void caml_deserialize_block_4(long param_1,long param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  long lVar4;
  long lVar5;
  
  if (0 < param_2) {
    lVar4 = 0;
    lVar5 = param_2;
    do {
      uVar1 = *(undefined *)(intern_src + lVar4);
      uVar2 = *(undefined *)(intern_src + 1 + lVar4);
      *(undefined *)(param_1 + lVar4) = *(undefined *)(intern_src + 3 + lVar4);
      uVar3 = *(undefined *)(intern_src + 2 + lVar4);
      *(undefined *)(param_1 + 3 + lVar4) = uVar1;
      *(undefined *)(param_1 + 2 + lVar4) = uVar2;
      *(undefined *)(param_1 + 1 + lVar4) = uVar3;
      lVar4 = lVar4 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    intern_src = intern_src + param_2 * 4;
  }
  return;
}



undefined4 caml_deserialize_float_4(void)

{
  undefined4 local_4;
  
  caml_deserialize_block_4(&local_4,1);
  return local_4;
}



void caml_deserialize_block_8(undefined *param_1,long param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = intern_src;
  lVar5 = param_2;
  if (0 < param_2) {
    do {
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      *param_1 = puVar4[7];
      uVar3 = puVar4[6];
      param_1[7] = uVar1;
      param_1[6] = uVar2;
      param_1[1] = uVar3;
      uVar1 = puVar4[2];
      uVar2 = puVar4[3];
      param_1[2] = puVar4[5];
      uVar3 = puVar4[4];
      param_1[5] = uVar1;
      param_1[4] = uVar2;
      param_1[3] = uVar3;
      param_1 = param_1 + 8;
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 8;
    } while (lVar5 != 0);
    intern_src = intern_src + param_2 * 8;
  }
  return;
}



undefined8 caml_deserialize_sint_8(void)

{
  undefined8 local_8;
  
  caml_deserialize_block_8(&local_8,1);
  return local_8;
}



undefined8 caml_deserialize_uint_8(void)

{
  undefined8 local_8;
  
  caml_deserialize_block_8(&local_8,1);
  return local_8;
}



long caml_marshal_data_size(long param_1,long param_2)

{
  byte *pbVar1;
  
  intern_input_malloced = 0;
  pbVar1 = (byte *)((param_2 >> 1) + param_1);
  intern_src = pbVar1 + 4;
  if ((uint)pbVar1[3] + (uint)*pbVar1 * 0x1000000 + (uint)pbVar1[1] * 0x10000 +
      (uint)pbVar1[2] * 0x100 == -0x7b6a5942) {
    intern_src = pbVar1 + 8;
    intern_input_malloced = 0;
    return ((ulong)pbVar1[4] * 0x1000000 + (ulong)pbVar1[7] + (long)(int)((uint)pbVar1[5] << 0x10) +
           (long)(int)((uint)pbVar1[6] << 8)) * 2 + 1;
  }
                    // WARNING: Subroutine does not return
  caml_failwith("Marshal.data_size: bad object");
}



void intern_cleanup(void)

{
  if (intern_input_malloced != 0) {
    caml_stat_free(intern_input);
  }
  if (intern_obj_table != (void *)0x0) {
    caml_stat_free(intern_obj_table);
  }
  if (intern_extra_block != 0) {
    caml_free_for_heap();
    return;
  }
  if (intern_block != 0) {
    *(undefined8 *)(intern_block + -8) = intern_header;
  }
  return;
}



void caml_deserialize_error(undefined8 param_1)

{
  intern_cleanup();
                    // WARNING: Subroutine does not return
  caml_failwith(param_1);
}



void caml_deserialize_block_float_8(void *param_1,long param_2)

{
  memmove(param_1,intern_src,param_2 * 8);
  intern_src = (void *)((long)intern_src + param_2 * 8);
  return;
}



undefined8 caml_deserialize_float_8(void)

{
  undefined8 local_10 [2];
  
  caml_deserialize_block_float_8(local_10,1);
  return local_10[0];
}



void caml_deserialize_block_1(void *param_1,size_t param_2)

{
  memmove(param_1,intern_src,param_2);
  intern_src = (void *)((long)intern_src + param_2);
  return;
}



undefined1 * caml_code_checksum(void)

{
  long in_FS_OFFSET;
  undefined auStack104 [88];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (checksum_computed_4045 == 0) {
    caml_MD5Init(auStack104);
    caml_MD5Update(auStack104,caml_code_area_start,caml_code_area_end - caml_code_area_start);
    caml_MD5Final(checksum_4044,auStack104);
    checksum_computed_4045 = 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return checksum_4044;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void intern_alloc(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 == 0) {
    intern_extra_block = 0;
    intern_obj_table = 0;
    intern_block = 0;
    return;
  }
  uVar1 = param_1 - 1;
  if (uVar1 < 0x40000000000000) {
    if (uVar1 == 0) {
      intern_block = 0x658848;
    }
    else {
      if (uVar1 < 0x101) {
        intern_block = caml_alloc_small(uVar1,0xfc);
      }
      else {
        intern_block = caml_alloc_shr(uVar1,0xfc);
      }
    }
    intern_dest = intern_block + -8;
    intern_header = *(undefined8 *)(intern_block + -8);
    intern_extra_block = 0;
    intern_color = (uint)intern_header & 0x300;
  }
  else {
    intern_extra_block = caml_alloc_for_heap(param_1 * 8 + 0xfffU & 0xfffffffffffff000);
    if (intern_extra_block == 0) {
                    // WARNING: Subroutine does not return
      caml_raise_out_of_memory();
    }
    intern_color = caml_allocation_color(intern_extra_block);
    intern_dest = intern_extra_block;
  }
  if (param_2 == 0) {
    obj_counter = 0;
    intern_obj_table = 0;
    return;
  }
  obj_counter = 0;
  intern_obj_table = caml_stat_alloc(param_2 * 8);
  return;
}



void intern_add_to_heap(long param_1)

{
  ulong uVar1;
  
  if (intern_extra_block != 0) {
    uVar1 = intern_extra_block + (param_1 * 8 + 0xfffU & 0xfffffffffffff000);
    if (intern_dest < uVar1) {
      caml_make_free_blocks(intern_dest,(long)(uVar1 - intern_dest) >> 3,0);
    }
    caml_allocated_words = caml_allocated_words + (intern_dest - intern_extra_block >> 3);
    caml_add_to_heap();
    return;
  }
  return;
}



void intern_rec(long **param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined uVar3;
  undefined uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  size_t __n;
  uint uVar13;
  char *pcVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined uVar19;
  byte bVar20;
  long local_60;
  char local_58 [24];
  long local_40;
  
  bVar20 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
LAB_0042e501:
  lVar9 = intern_obj_table;
  plVar16 = intern_dest;
  bVar2 = *intern_src;
  pbVar8 = intern_src + 1;
  if (0x3f < bVar2) {
    if (0x7f < bVar2) {
      uVar13 = bVar2 & 0xf;
      uVar12 = (ulong)(bVar2 >> 4 & 7);
      intern_src = pbVar8;
      goto LAB_0042e536;
    }
    plVar17 = (long *)((ulong)(bVar2 & 0x3f) * 2 + 1);
    intern_src = pbVar8;
    goto LAB_0042e658;
  }
  uVar13 = (uint)bVar2;
  switch(bVar2) {
  case 0:
    intern_src = intern_src + 2;
    plVar17 = (long *)((long)(char)*pbVar8 * 2 + 1);
    goto LAB_0042e658;
  case 1:
    plVar17 = (long *)(((long)(char)*pbVar8 * 0x100 + (ulong)intern_src[2]) * 2 + 1);
    intern_src = intern_src + 3;
    goto LAB_0042e658;
  case 2:
    plVar17 = (long *)(((long)(int)((uint)intern_src[2] << 0x10) +
                        (long)(int)((uint)intern_src[3] << 8) + (ulong)intern_src[4] +
                       (long)(char)*pbVar8 * 0x1000000) * 2 + 1);
    intern_src = intern_src + 5;
    goto LAB_0042e658;
  case 3:
    lVar9 = 0;
    do {
      bVar20 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      lVar9 = lVar9 * 0x100 + (ulong)bVar20;
    } while (pbVar8 != intern_src + 9);
    plVar17 = (long *)(lVar9 * 2 + 1);
    intern_src = pbVar8;
    goto LAB_0042e658;
  case 4:
    uVar12 = (ulong)*pbVar8;
    intern_src = intern_src + 2;
    break;
  case 5:
    uVar12 = SEXT48((int)((uint)*pbVar8 * 0x100 + (uint)intern_src[2]));
    intern_src = intern_src + 3;
    break;
  case 6:
    uVar12 = (ulong)*pbVar8 * 0x1000000 + (ulong)intern_src[4] +
             (long)(int)((uint)intern_src[2] << 0x10) + (long)(int)((uint)intern_src[3] << 8);
    intern_src = intern_src + 5;
    break;
  case 7:
  case 0xf:
    uVar12 = (ulong)*pbVar8 * 0x1000000 + (ulong)intern_src[4] +
             (long)(int)((uint)intern_src[2] << 0x10) + (long)(int)((uint)intern_src[3] << 8);
    intern_src = intern_src + 5;
    goto LAB_0042e7dc;
  case 8:
    uVar15 = (ulong)*pbVar8 * 0x1000000 + (ulong)intern_src[4] +
             (long)(int)((uint)intern_src[2] << 0x10) + (long)(int)((uint)intern_src[3] << 8);
    uVar12 = uVar15 >> 10;
    uVar13 = (uint)uVar15 & 0xff;
    intern_src = intern_src + 5;
    goto LAB_0042e536;
  case 9:
    __n = (size_t)*pbVar8;
    intern_src = intern_src + 2;
    goto LAB_0042e926;
  case 10:
    __n = (ulong)*pbVar8 * 0x1000000 + (ulong)intern_src[4] +
          (long)(int)((uint)intern_src[2] << 0x10) + (long)(int)((uint)intern_src[3] << 8);
    intern_src = intern_src + 5;
    goto LAB_0042e926;
  case 0xb:
  case 0xc:
    plVar17 = intern_dest + 1;
    intern_src = pbVar8;
    if (intern_obj_table != 0) {
      *(long **)(intern_obj_table + obj_counter * 8) = plVar17;
      obj_counter = obj_counter + 1;
    }
    pbVar8 = intern_src;
    intern_dest = intern_dest + 2;
    *plVar16 = (ulong)intern_color + 0x4fd;
    memmove(plVar17,pbVar8,8);
    intern_src = intern_src + 8;
    if (uVar13 != 0xc) {
      uVar19 = *(undefined *)plVar17;
      uVar3 = *(undefined *)((long)plVar16 + 9);
      *(undefined *)plVar17 = *(undefined *)((long)plVar16 + 0xf);
      uVar4 = *(undefined *)((long)plVar16 + 0xe);
      *(undefined *)((long)plVar16 + 0xf) = uVar19;
      *(undefined *)((long)plVar16 + 0xe) = uVar3;
      *(undefined *)((long)plVar16 + 9) = uVar4;
      uVar19 = *(undefined *)((long)plVar16 + 0xd);
      *(undefined *)((long)plVar16 + 0xd) = *(undefined *)((long)plVar16 + 10);
      *(undefined *)((long)plVar16 + 10) = uVar19;
      uVar19 = *(undefined *)((long)plVar16 + 0xc);
      *(undefined *)((long)plVar16 + 0xc) = *(undefined *)((long)plVar16 + 0xb);
      *(undefined *)((long)plVar16 + 0xb) = uVar19;
    }
    goto LAB_0042e658;
  case 0xd:
  case 0xe:
    uVar12 = (ulong)*pbVar8;
    intern_src = intern_src + 2;
LAB_0042e7dc:
    plVar17 = intern_dest + 1;
    if (intern_obj_table != 0) {
      *(long **)(intern_obj_table + obj_counter * 8) = plVar17;
      obj_counter = obj_counter + 1;
    }
    pbVar8 = intern_src;
    *plVar16 = (ulong)intern_color + 0xfe + uVar12 * 0x400;
    intern_dest = intern_dest + uVar12 + 1;
    memmove(plVar17,pbVar8,uVar12 * 8);
    intern_src = intern_src + uVar12 * 8;
    if (((uVar13 != 7) && (uVar13 != 0xe)) && (uVar12 != 0)) {
      uVar15 = 0;
      do {
        uVar19 = *(undefined *)(plVar16 + 1);
        uVar15 = uVar15 + 1;
        *(undefined *)(plVar16 + 1) = *(undefined *)((long)plVar16 + 0xf);
        uVar3 = *(undefined *)((long)plVar16 + 0xe);
        *(undefined *)((long)plVar16 + 0xf) = uVar19;
        *(undefined *)((long)plVar16 + 0xe) = *(undefined *)((long)plVar16 + 9);
        *(undefined *)((long)plVar16 + 9) = uVar3;
        uVar19 = *(undefined *)((long)plVar16 + 0xd);
        *(undefined *)((long)plVar16 + 0xd) = *(undefined *)((long)plVar16 + 10);
        *(undefined *)((long)plVar16 + 10) = uVar19;
        uVar19 = *(undefined *)((long)plVar16 + 0xc);
        *(undefined *)((long)plVar16 + 0xc) = *(undefined *)((long)plVar16 + 0xb);
        *(undefined *)((long)plVar16 + 0xb) = uVar19;
        plVar16 = plVar16 + 1;
      } while (uVar15 < uVar12);
    }
    goto LAB_0042e658;
  case 0x10:
    pbVar8 = intern_src + 5;
    bVar2 = intern_src[1];
    bVar5 = intern_src[2];
    bVar6 = intern_src[3];
    bVar7 = intern_src[4];
    intern_src = pbVar8;
    memmove(local_58,pbVar8,0x10);
    intern_src = intern_src + 0x10;
    uVar19 = intern_src == (byte *)0x0;
    pcVar11 = (char *)caml_code_checksum();
    lVar9 = 0x10;
    pcVar14 = local_58;
    goto code_r0x0042ec39;
  case 0x11:
    bVar20 = *pbVar8;
    bVar2 = intern_src[2];
    bVar5 = intern_src[3];
    bVar6 = intern_src[4];
    intern_src = intern_src + 5;
    intern_rec(&local_60);
    plVar17 = (long *)((ulong)bVar6 + local_60 + (ulong)bVar20 * 0x1000000 +
                       (long)(int)((uint)bVar2 << 0x10) + (long)(int)((uint)bVar5 << 8));
    goto LAB_0042e658;
  case 0x12:
    intern_src = pbVar8;
    lVar9 = caml_find_custom_operations();
    if (lVar9 == 0) {
      intern_cleanup();
                    // WARNING: Subroutine does not return
      caml_failwith("input_value: unknown custom block identifier");
    }
    do {
      bVar20 = *intern_src;
      intern_src = intern_src + 1;
    } while (bVar20 != 0);
    lVar10 = (**(code **)(lVar9 + 0x28))(intern_dest + 2);
    plVar16 = intern_dest;
    uVar12 = lVar10 + 7U >> 3;
    plVar17 = intern_dest + 1;
    if (intern_obj_table != 0) {
      *(long **)(intern_obj_table + obj_counter * 8) = plVar17;
      obj_counter = obj_counter + 1;
    }
    uVar15 = (ulong)intern_color;
    *plVar17 = lVar9;
    intern_dest = intern_dest + uVar12 + 2;
    *plVar16 = uVar15 + 0xff + (uVar12 + 1) * 0x400;
    goto LAB_0042e658;
  case 0x13:
    uVar15 = 0;
    pbVar8 = intern_src;
    do {
      pbVar1 = pbVar8 + 1;
      pbVar8 = pbVar8 + 1;
      uVar15 = uVar15 * 0x100 + (ulong)*pbVar1;
    } while (pbVar8 != intern_src + 8);
    uVar12 = uVar15 >> 10;
    uVar13 = (uint)uVar15 & 0xff;
    intern_src = intern_src + 9;
LAB_0042e536:
    if (uVar12 != 0) goto code_r0x0042e53f;
    plVar17 = (long *)(caml_atom_table + (ulong)uVar13 * 8 + 8);
    goto LAB_0042e658;
  case 0xbad1abe1:
    intern_src = pbVar8;
    intern_cleanup();
                    // WARNING: Subroutine does not return
    caml_failwith("input_value: ill-formed message");
  default:
    __n = (size_t)(uVar13 & 0x1f);
    intern_src = pbVar8;
LAB_0042e926:
    uVar12 = __n + 8;
    plVar17 = intern_dest + 1;
    if (intern_obj_table != 0) {
      *(long **)(intern_obj_table + obj_counter * 8) = plVar17;
      obj_counter = obj_counter + 1;
    }
    *plVar16 = (ulong)intern_color + 0xfc + (uVar12 >> 3) * 0x400;
    uVar15 = uVar12 & 0xfffffffffffffff8;
    intern_dest = (long *)((long)intern_dest + (uVar12 & 0xfffffffffffffff8) + 8);
    *(undefined8 *)((long)plVar16 + uVar15) = 0;
    *(char *)((long)plVar16 + uVar15 + 7) = ((char)uVar15 + -1) - (char)__n;
    memmove(plVar17,intern_src,__n);
    intern_src = intern_src + __n;
    goto LAB_0042e658;
  }
  plVar17 = *(long **)(intern_obj_table + (obj_counter - uVar12) * 8);
  goto LAB_0042e658;
code_r0x0042e53f:
  plVar17 = intern_dest + 1;
  bVar18 = intern_obj_table != 0;
  *param_1 = plVar17;
  if (bVar18) {
    *(long **)(lVar9 + obj_counter * 8) = plVar17;
    obj_counter = obj_counter + 1;
  }
  param_1 = (long **)(plVar16 + 1);
  *plVar16 = uVar12 * 0x400 + (ulong)uVar13 + (ulong)intern_color;
  intern_dest = intern_dest + uVar12 + 1;
  uVar15 = uVar12;
  if (uVar12 != 1) {
    do {
      uVar15 = uVar15 - 1;
      intern_rec(param_1);
      param_1 = param_1 + 1;
    } while (1 < uVar15);
    param_1 = (long **)(plVar16 + uVar12);
  }
  goto LAB_0042e501;
  while( true ) {
    lVar9 = lVar9 + -1;
    uVar19 = *pcVar14 == *pcVar11;
    pcVar14 = pcVar14 + (ulong)bVar20 * -2 + 1;
    pcVar11 = pcVar11 + (ulong)bVar20 * -2 + 1;
    if (!(bool)uVar19) break;
code_r0x0042ec39:
    if (lVar9 == 0) break;
  }
  if (!(bool)uVar19) {
    intern_cleanup();
                    // WARNING: Subroutine does not return
    caml_failwith("input_value: code mismatch");
  }
  plVar17 = (long *)((ulong)bVar2 * 0x1000000 + (ulong)bVar7 + (ulong)bVar5 * 0x10000 +
                     (ulong)bVar6 * 0x100 + caml_code_area_start);
LAB_0042e658:
  lVar9 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = plVar17;
  if (local_40 != lVar9) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



undefined8 input_val_from_block(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  undefined8 local_10;
  
  bVar4 = *intern_src;
  pbVar1 = intern_src + 3;
  pbVar2 = intern_src + 1;
  pbVar3 = intern_src + 2;
  lVar5 = (ulong)intern_src[8] * 0x1000000 + (ulong)intern_src[0xb] +
          (long)(int)((uint)intern_src[9] << 0x10) + (long)(int)((uint)intern_src[10] << 8);
  intern_src = intern_src + 0xc;
  intern_alloc(lVar5,(ulong)*pbVar1 + (ulong)bVar4 * 0x1000000 + (long)(int)((uint)*pbVar2 << 0x10)
                     + (long)(int)((uint)*pbVar3 << 8));
  intern_rec(&local_10);
  intern_add_to_heap(lVar5);
  if (intern_obj_table != (void *)0x0) {
    caml_stat_free(intern_obj_table);
  }
  return local_10;
}



void caml_input_value_from_block(byte *param_1,ulong param_2)

{
  intern_src = param_1 + 4;
  intern_input_malloced = 0;
  intern_input = param_1;
  if ((uint)param_1[3] + (uint)*param_1 * 0x1000000 + (uint)param_1[1] * 0x10000 +
      (uint)param_1[2] * 0x100 != -0x7b6a5942) {
                    // WARNING: Subroutine does not return
    caml_failwith("input_value_from_block: bad object");
  }
  intern_src = param_1 + 8;
  if ((ulong)param_1[7] + 0x14 + (ulong)param_1[4] * 0x1000000 +
      (long)(int)((uint)param_1[5] << 0x10) + (long)(int)((uint)param_1[6] << 8) <= param_2) {
    input_val_from_block();
    return;
  }
                    // WARNING: Subroutine does not return
  caml_failwith("input_value_from_block: bad block length");
}



undefined8 caml_input_value_from_malloc(void *param_1,long param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)((long)param_1 + param_2);
  intern_src = pbVar2 + 4;
  intern_input_malloced = 1;
  intern_input = param_1;
  if ((uint)pbVar2[3] + (uint)*pbVar2 * 0x1000000 + (uint)pbVar2[1] * 0x10000 +
      (uint)pbVar2[2] * 0x100 == -0x7b6a5942) {
    intern_src = pbVar2 + 8;
    uVar1 = input_val_from_block();
    caml_stat_free(intern_input);
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  caml_failwith("input_value_from_malloc: bad object");
}



undefined8 caml_input_val_from_string(long param_1,long param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  long local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long *local_60;
  undefined8 local_30 [2];
  
  uVar2 = caml_local_roots;
  pbVar1 = (byte *)(param_2 + 8 + param_1);
  intern_input_malloced = 0;
  local_60 = &local_c0;
  local_68 = 1;
  local_70 = 1;
  local_b8 = &local_78;
  local_78 = caml_local_roots;
  local_30[0] = 0;
  local_a8 = 1;
  caml_local_roots = &local_b8;
  local_b0 = 1;
  intern_src = pbVar1 + 0xc;
  lVar3 = (ulong)pbVar1[8] * 0x1000000 + (ulong)pbVar1[0xb] + (long)(int)((uint)pbVar1[9] << 0x10) +
          (long)(int)((uint)pbVar1[10] << 8);
  local_c0 = param_1;
  local_a0 = local_30;
  intern_alloc(lVar3,(ulong)pbVar1[3] + (ulong)*pbVar1 * 0x1000000 +
                     (long)(int)((uint)pbVar1[1] << 0x10) + (long)(int)((uint)pbVar1[2] << 8));
  intern_src = (byte *)(param_2 + 0x14 + local_c0);
  intern_rec(local_30);
  intern_add_to_heap(lVar3);
  if (intern_obj_table != (void *)0x0) {
    caml_stat_free(intern_obj_table);
  }
  caml_local_roots = (undefined8 **)uVar2;
  return local_30[0];
}



void caml_input_value_from_string(undefined8 param_1,long param_2)

{
  caml_input_val_from_string(param_1,param_2 >> 1);
  return;
}



undefined8 caml_input_val(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *__ptr;
  undefined8 local_30;
  
  iVar1 = caml_channel_binary_mode();
  if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
    caml_failwith("input_value: not a binary channel");
  }
  iVar1 = caml_getword(param_1);
  if (iVar1 == -0x7b6a5942) {
    uVar2 = caml_getword(param_1);
    uVar3 = caml_getword(param_1);
    caml_getword(param_1);
    uVar4 = caml_getword(param_1);
    __ptr = (void *)caml_stat_alloc(uVar2);
    iVar1 = caml_really_getblock(param_1,__ptr,uVar2);
    if (iVar1 != 0) {
      intern_input_malloced = 1;
      intern_src = __ptr;
      intern_input = __ptr;
      intern_alloc(uVar4,uVar3);
      intern_rec(&local_30);
      intern_add_to_heap(uVar4);
      caml_stat_free(intern_input);
      if (intern_obj_table != (void *)0x0) {
        caml_stat_free(intern_obj_table);
      }
      return local_30;
    }
    caml_stat_free(__ptr);
                    // WARNING: Subroutine does not return
    caml_failwith("input_value: truncated object");
  }
                    // WARNING: Subroutine does not return
  caml_failwith("input_value: bad object");
}



undefined8 caml_input_value(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_20 [2];
  
  uVar2 = caml_local_roots;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_a8 = &local_68;
  local_50 = &local_b0;
  local_58 = 1;
  local_60 = 1;
  local_68 = caml_local_roots;
  local_20[0] = 0;
  local_90 = local_20;
  local_98 = 1;
  local_a0 = 1;
  caml_local_roots = &local_a8;
  local_b0 = param_1;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  local_20[0] = caml_input_val(uVar1);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = (undefined8 **)uVar2;
  return local_20[0];
}



long caml_hash_variant(byte *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 1;
  lVar2 = 1;
  if (*param_1 != 0) {
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      lVar3 = (long)(int)((int)(lVar3 >> 1) * 0xdf + (uint)bVar1) * 2 + 1;
    } while (*param_1 != 0);
    lVar2 = (long)(int)lVar3;
  }
  return lVar2;
}



void hash_aux(byte **param_1)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte **ppbVar6;
  byte **ppbVar7;
  
  hash_univ_limit = hash_univ_limit + -1;
  if ((-1 < hash_univ_count) && (-1 < hash_univ_limit)) {
    do {
      if (((ulong)param_1 & 1) != 0) {
        hash_univ_count = hash_univ_count + -1;
        param_1 = (byte **)((long)param_1 >> 1);
LAB_0042f3df:
        hash_accu = (byte *)((long)param_1 + (long)hash_accu * 0x1003f);
        return;
      }
      uVar3 = caml_page_table_lookup(param_1);
      if ((uVar3 & 7) == 0) goto LAB_0042f3df;
      ppbVar6 = param_1 + -1;
      switch(*(byte *)(param_1 + -1)) {
      case 0xf8:
        hash_univ_count = hash_univ_count + -1;
        hash_accu = (byte *)(((long)param_1[1] >> 1) + (long)hash_accu * 0x1003f);
        return;
      case 0xf9:
        hash_univ_limit = hash_univ_limit + -1;
        if (hash_univ_count < 0) {
          return;
        }
        if (hash_univ_limit < 0) {
          return;
        }
        param_1 = param_1 + -((ulong)*ppbVar6 >> 10);
        break;
      case 0xfa:
        param_1 = (byte **)*param_1;
        break;
      case 0xfb:
        goto switchD_0042f303_caseD_fb;
      case 0xfc:
        hash_univ_count = hash_univ_count + -1;
        lVar5 = caml_string_length(param_1);
        if (lVar5 == 0) {
          return;
        }
        do {
          bVar1 = *(byte *)param_1;
          param_1 = (byte **)((long)param_1 + 1);
          lVar5 = lVar5 + -1;
          hash_accu = (byte *)((long)hash_accu * 0x13 + (ulong)bVar1);
        } while (lVar5 != 0);
        return;
      case 0xfd:
        hash_univ_count = hash_univ_count + -1;
        ppbVar6 = param_1 + 1;
        do {
          bVar1 = *(byte *)param_1;
          param_1 = (byte **)((long)param_1 + 1);
          hash_accu = (byte *)((long)hash_accu * 0x13 + (ulong)bVar1);
        } while (param_1 != ppbVar6);
        return;
      case 0xfe:
        hash_univ_count = hash_univ_count + -1;
        if ((ulong)*ppbVar6 >> 10 == 0) {
          return;
        }
        uVar3 = 0;
        do {
          ppbVar7 = param_1 + 1;
          do {
            bVar1 = *(byte *)param_1;
            param_1 = (byte **)((long)param_1 + 1);
            hash_accu = (byte *)((long)hash_accu * 0x13 + (ulong)bVar1);
          } while (ppbVar7 != param_1);
          uVar3 = uVar3 + 8;
          param_1 = ppbVar7;
        } while (uVar3 < ((ulong)*ppbVar6 >> 10) << 3);
        return;
      case 0xff:
        if (*(code **)(*param_1 + 0x18) == (code *)0x0) {
          return;
        }
        hash_univ_count = hash_univ_count + -1;
        lVar5 = (long)hash_accu * 0x1003f;
        lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
        hash_accu = (byte *)(lVar4 + lVar5);
        return;
      default:
        hash_univ_count = hash_univ_count + -1;
        hash_accu = (byte *)((ulong)*(byte *)(param_1 + -1) + (long)hash_accu * 0x13);
        uVar3 = (ulong)*ppbVar6 >> 10;
        if (uVar3 != 0) {
          ppbVar6 = ppbVar6 + uVar3;
          do {
            pbVar2 = *ppbVar6;
            uVar3 = uVar3 - 1;
            ppbVar6 = ppbVar6 + -1;
            hash_aux(pbVar2);
          } while (uVar3 != 0);
        }
        goto switchD_0042f303_caseD_fb;
      }
    } while( true );
  }
switchD_0042f303_caseD_fb:
  return;
}



int caml_hash_univ_param(long param_1,long param_2,undefined8 param_3)

{
  hash_univ_count = param_1 >> 1;
  hash_univ_limit = param_2 >> 1;
  hash_accu = 0;
  hash_aux(param_3);
  return ((uint)hash_accu & 0x3fffffff) * 2 + 1;
}



void caml_sys_init(undefined8 param_1,undefined8 param_2)

{
  caml_main_argv = param_2;
  caml_exe_name = param_1;
  return;
}



undefined8 * caml_sys_get_config(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar1 = caml_local_roots;
  local_40 = &local_10;
  local_10 = 0;
  local_18 = 0;
  local_48 = 1;
  local_38 = &local_18;
  local_58 = caml_local_roots;
  local_50 = 2;
  caml_local_roots = (undefined *)&local_58;
  local_18 = caml_copy_string(&DAT_00436970);
  puVar2 = (undefined8 *)caml_alloc_small(2,0);
  caml_local_roots = (undefined *)uVar1;
  *puVar2 = local_18;
  puVar2[1] = 0x81;
  return puVar2;
}



undefined8 * caml_sys_get_argv(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar1 = caml_local_roots;
  local_50 = &local_10;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_48 = &local_18;
  local_68 = caml_local_roots;
  local_58 = 1;
  local_60 = 3;
  local_40 = &local_20;
  caml_local_roots = (undefined *)&local_68;
  local_10 = caml_copy_string(caml_exe_name);
  local_18 = caml_copy_string_array(caml_main_argv);
  puVar2 = (undefined8 *)caml_alloc_small(2,0);
  caml_local_roots = (undefined *)uVar1;
  *puVar2 = local_10;
  puVar2[1] = local_18;
  return puVar2;
}



long caml_sys_random_seed(void)

{
  __pid_t _Var1;
  uint uVar2;
  timeval local_28;
  
  gettimeofday(&local_28,(__timezone_ptr_t)0x0);
  _Var1 = getppid();
  uVar2 = getpid();
  return ((long)(int)(_Var1 << 0x10 ^ uVar2) ^ local_28.tv_usec ^ local_28.tv_sec) * 2 + 1;
}



void caml_sys_time(void)

{
  rusage local_98;
  
  getrusage(RUSAGE_SELF,&local_98);
  caml_copy_double((double)local_98.ru_utime.tv_sec + (double)local_98.ru_utime.tv_usec / 1000000.0
                   + (double)local_98.ru_stime.tv_sec +
                   (double)local_98.ru_stime.tv_usec / 1000000.0);
  return;
}



long caml_sys_getenv(char *param_1)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  stat64 sStack160;
  undefined8 uStack16;
  
  uStack16 = 0x42f779;
  pcVar2 = getenv(param_1);
  if (pcVar2 != (char *)0x0) {
    lVar3 = caml_copy_string(pcVar2);
    return lVar3;
  }
  uStack16 = 0x42f78f;
  caml_raise_not_found();
  iVar1 = __xstat64(1,param_1,&sStack160);
  return (ulong)(-(uint)(iVar1 == 0) & 2) + 1;
}



char caml_sys_file_exists(char *param_1)

{
  int iVar1;
  stat64 sStack152;
  
  iVar1 = __xstat64(1,param_1,&sStack152);
  return (-(iVar1 == 0) & 2U) + 1;
}



undefined8 caml_sys_close(long param_1)

{
  close((int)(param_1 >> 1));
  return 1;
}



void caml_sys_exit(long param_1)

{
                    // WARNING: Subroutine does not return
  exit((int)(param_1 >> 1));
}



void caml_sys_error(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  char *__s;
  size_t sVar4;
  size_t __n;
  void *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  void **local_90;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  void **local_50;
  void *local_20;
  
  local_58 = 1;
  local_60 = 1;
  local_20 = (void *)0x0;
  local_68 = caml_local_roots;
  local_50 = &local_b0;
  local_98 = 1;
  local_a0 = 1;
  local_a8 = &local_68;
  caml_local_roots = &local_a8;
  local_90 = &local_20;
  local_b0 = param_1;
  piVar3 = __errno_location();
  __s = strerror(*piVar3);
  pvVar1 = local_b0;
  if (local_b0 == (void *)0x1) goto LAB_0042f8f8;
  sVar4 = strlen(__s);
  iVar2 = caml_string_length(pvVar1);
  __n = SEXT48(iVar2);
  local_20 = (void *)caml_alloc_string((long)(iVar2 + 2 + (int)sVar4));
  memmove(local_20,local_b0,__n);
  *(undefined2 *)(__n + (long)local_20) = 0x203a;
  memmove((void *)(__n + 2 + (long)local_20),__s,(long)(int)sVar4);
  do {
    __s = (char *)caml_raise_sys_error(local_20);
LAB_0042f8f8:
    local_20 = (void *)caml_copy_string(__s);
  } while( true );
}



undefined8 caml_sys_read_directory(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined local_38 [8];
  undefined8 local_30;
  undefined8 local_20 [2];
  
  uVar1 = caml_local_roots;
  local_60 = &local_c0;
  local_68 = 1;
  local_70 = 1;
  local_b8 = &local_78;
  local_78 = caml_local_roots;
  local_20[0] = 0;
  caml_local_roots = &local_b8;
  local_a8 = 1;
  local_b0 = 1;
  local_a0 = local_20;
  local_c0 = param_1;
  caml_ext_table_init(local_38,0x32);
  iVar2 = caml_read_directory(local_c0,local_38);
  if (iVar2 == -1) {
    caml_ext_table_free(local_38,1);
    caml_sys_error(local_c0);
  }
  caml_ext_table_add(local_38,0);
  local_20[0] = caml_copy_string_array(local_30);
  caml_ext_table_free(local_38,1);
  caml_local_roots = (undefined8 **)uVar1;
  return local_20[0];
}



int caml_sys_system_command(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  char *__command;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  void **local_40;
  
  uVar1 = caml_local_roots;
  local_48 = 1;
  local_50 = 1;
  local_40 = &local_60;
  local_58 = caml_local_roots;
  caml_local_roots = &local_58;
  local_60 = param_1;
  lVar4 = caml_string_length();
  __command = (char *)caml_stat_alloc(lVar4 + 1U);
  memmove(__command,local_60,lVar4 + 1U);
  caml_enter_blocking_section();
  uVar2 = system(__command);
  caml_leave_blocking_section();
  caml_stat_free(__command);
  if (uVar2 == 0xffffffff) {
    caml_sys_error(local_60);
    iVar3 = 0x1ff;
  }
  else {
    iVar3 = 0x1ff;
    if ((uVar2 & 0x7f) == 0) {
      iVar3 = (uVar2 >> 8 & 0xff) * 2 + 1;
    }
  }
  caml_local_roots = (undefined8 *)uVar1;
  return iVar3;
}



void caml_sys_getcwd(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char acStack4120 [4104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = getcwd(acStack4120,0x1000);
  if (pcVar1 == (char *)0x0) {
    caml_sys_error(1);
  }
  caml_copy_string(acStack4120);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 caml_sys_chdir(char *param_1)

{
  int iVar1;
  
  iVar1 = chdir(param_1);
  if (iVar1 != 0) {
    caml_sys_error(param_1);
  }
  return 1;
}



undefined8 caml_sys_rename(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = rename(param_1,param_2);
  if (iVar1 != 0) {
    caml_sys_error(1);
  }
  return 1;
}



undefined8 caml_sys_remove(char *param_1)

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
  stat64 sStack152;
  
  iVar1 = __xstat64(1,param_1,&sStack152);
  if (iVar1 == -1) {
    caml_sys_error(param_1);
  }
  return ((sStack152.st_mode & 0xf000) == 0x4000) * '\x02' + '\x01';
}



long caml_sys_open(char *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  char *__dest;
  long local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  char **local_50;
  undefined8 *local_48;
  long *local_40;
  
  uVar1 = caml_local_roots;
  local_50 = &local_70;
  local_58 = 1;
  local_68 = caml_local_roots;
  local_60 = 3;
  local_48 = &local_78;
  local_40 = &local_80;
  caml_local_roots = &local_68;
  local_80 = param_3;
  local_78 = param_2;
  local_70 = param_1;
  lVar3 = caml_string_length();
  __dest = (char *)caml_stat_alloc(lVar3 + 1);
  strcpy(__dest,local_70);
  iVar2 = caml_convert_flag_list(local_78);
  lVar3 = local_80;
  caml_enter_blocking_section();
  iVar2 = open64(__dest,iVar2,lVar3 >> 1 & 0xffffffff);
  caml_leave_blocking_section();
  caml_stat_free(__dest);
  if (iVar2 == -1) {
    caml_sys_error();
  }
  fcntl(iVar2,2,1);
  caml_local_roots = (undefined8 *)uVar1;
  return (long)iVar2 * 2 + 1;
}



long caml_sys_io_error(long param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = param_1;
  piVar1 = __errno_location();
  if (*piVar1 != 0xb) {
    lVar2 = caml_sys_error(param_1);
    return lVar2;
  }
  caml_raise_sys_blocked_io();
  bVar3 = caml_parser_trace == 0;
  caml_parser_trace = (int)(lVar2 >> 1);
  return (-(ulong)bVar3 & 0xfffffffffffffffe) + 3;
}



long caml_set_parser_trace(long param_1)

{
  bool bVar1;
  
  bVar1 = caml_parser_trace == 0;
  caml_parser_trace = (int)(param_1 >> 1);
  return (-(ulong)bVar1 & 0xfffffffffffffffe) + 3;
}



undefined8 caml_parse_engine(long param_1,long *param_2,long param_3,undefined8 *param_4)

{
  byte bVar1;
  short sVar2;
  long lVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  
  if (5 < (uint)(param_3 >> 1)) {
    return 3;
  }
  switch(param_3 >> 1 & 0xffffffff) {
  case 0:
    lVar13 = 0;
    uVar12 = 0;
    uVar15 = 0;
    uVar11 = SEXT48((int)(param_2[0xd] >> 1));
    break;
  case 1:
    uVar15 = (ulong)param_2[0xe] >> 1;
    uVar12 = (ulong)param_2[0xf] >> 1;
    uVar10 = SEXT48((int)(param_2[0xd] >> 1));
    iVar6 = (int)((long)param_4 >> 1);
    if (((ulong)param_4 & 1) == 0) {
      param_2[6] = *(long *)(*(long *)(param_1 + 0x10) + (ulong)*(byte *)(param_4 + -1) * 8);
      caml_modify(param_2 + 7);
    }
    else {
      param_2[6] = *(long *)(*(long *)(param_1 + 8) + (long)iVar6 * 8);
      caml_modify(param_2 + 7);
    }
    if (caml_parser_trace != 0) {
      if (((ulong)param_4 & 1) != 0) {
        pcVar9 = *(char **)(param_1 + 0x70);
        if (0 < iVar6) {
          if (*pcVar9 != '\0') {
            iVar7 = 0;
            do {
              sVar4 = strlen(pcVar9);
              pcVar9 = pcVar9 + sVar4 + 1;
              if ((iVar6 + -1) - iVar7 < 1) goto LAB_004303ed;
              iVar7 = iVar7 + 1;
            } while (*pcVar9 != '\0');
          }
          pcVar9 = "<unknown token>";
        }
LAB_004303ed:
        __fprintf_chk(stderr,1,"State %d: read token %s\n",uVar15 & 0xffffffff,pcVar9);
        lVar13 = (long)(int)uVar15 * 2;
        iVar6 = (int)((ulong)param_2[6] >> 1);
        goto LAB_0042feba;
      }
      bVar1 = *(byte *)(param_4 + -1);
      pcVar9 = *(char **)(param_1 + 0x78);
      if (bVar1 != 0) {
        if (*pcVar9 != '\0') {
          iVar6 = 0;
          do {
            sVar4 = strlen(pcVar9);
            pcVar9 = pcVar9 + sVar4 + 1;
            if (bVar1 - 1 == iVar6) goto LAB_004304f2;
            iVar6 = iVar6 + 1;
          } while (*pcVar9 != '\0');
        }
        pcVar9 = "<unknown token>";
      }
LAB_004304f2:
      __fprintf_chk(stderr,1,"State %d: read token %s(",uVar15 & 0xffffffff,pcVar9);
      param_4 = (undefined8 *)*param_4;
      if (((ulong)param_4 & 1) == 0) {
        if (*(char *)(param_4 + -1) == -4) {
          __fprintf_chk(stderr,1,&DAT_00436120);
        }
        else {
          if (*(char *)(param_4 + -1) == -3) {
            __fprintf_chk(*param_4,stderr,1,&DAT_004369bb);
          }
          else {
            __fprintf_chk(stderr,1,&DAT_004369be);
          }
        }
      }
      else {
        __fprintf_chk(stderr,1,&DAT_004369b7,(long)param_4 >> 1);
      }
      __fprintf_chk(stderr,1,&DAT_004369c0);
    }
    lVar13 = (long)(int)uVar15 * 2;
    iVar6 = (int)((ulong)param_2[6] >> 1);
    goto LAB_0042feba;
  case 2:
    uVar15 = (ulong)param_2[0xe] >> 1;
    uVar11 = SEXT48((int)(param_2[0xd] >> 1));
    uVar12 = (ulong)param_2[0xf] >> 1;
    goto LAB_004300b8;
  case 3:
    iVar6 = (int)((ulong)param_2[0xe] >> 1);
    uVar10 = SEXT48((int)(param_2[0xd] >> 1));
    iVar7 = (int)((ulong)param_2[0xf] >> 1);
LAB_00430130:
    param_2[0xd] = uVar10 * 2 + 1;
    param_2[0xe] = (long)iVar6 * 2 + 1;
    param_2[0xf] = (long)iVar7 * 2 + 1;
    return 9;
  case 4:
    uVar15 = (ulong)param_2[0xe] >> 1;
    uVar11 = SEXT48((int)(param_2[0xd] >> 1));
    uVar12 = (ulong)param_2[0xf] >> 1;
    lVar3 = uVar11 * 8;
    lVar13 = (long)(int)uVar15 * 2;
    *(long *)(*param_2 + uVar11 * 8) = lVar13 + 1;
    caml_modify(lVar3 + param_2[1],param_4);
    lVar8 = param_2[10];
    caml_modify(param_2[3] + lVar3);
    if ((ulong)(long)(int)(lVar8 >> 1) < uVar11) {
      caml_modify(lVar3 + param_2[2]);
    }
    break;
  case 5:
    uVar15 = (ulong)param_2[0xe] >> 1;
    uVar10 = SEXT48((int)(param_2[0xd] >> 1));
    uVar12 = (ulong)param_2[0xf] >> 1;
    goto LAB_0042ff78;
  }
LAB_0042fe99:
  iVar7 = (int)uVar12;
  sVar2 = *(short *)(*(long *)(param_1 + 0x28) + lVar13);
  iVar6 = (int)sVar2;
  if (sVar2 == 0) {
    while( true ) {
      iVar6 = (int)((ulong)param_2[6] >> 1);
      uVar10 = uVar11;
      if (iVar6 < 0) {
        param_2[0xd] = uVar11 * 2 + 1;
        param_2[0xe] = (long)(int)uVar15 * 2 + 1;
        param_2[0xf] = (long)(int)uVar12 * 2 + 1;
        return 1;
      }
LAB_0042feba:
      sVar2 = *(short *)(*(long *)(param_1 + 0x38) + lVar13);
      iVar5 = sVar2 + iVar6;
      iVar7 = (int)uVar12;
      if (((-1 < iVar5) && (sVar2 != 0)) && (iVar5 <= (int)(*(long *)(param_1 + 0x50) >> 1))) {
        lVar8 = (long)iVar5;
        lVar3 = lVar8 * 2;
        if (*(short *)(*(long *)(param_1 + 0x60) + lVar8 * 2) == iVar6) {
          param_2[6] = -1;
          uVar12 = (ulong)(iVar7 - (uint)(0 < iVar7));
          goto LAB_004302f3;
        }
      }
      sVar2 = *(short *)(*(long *)(param_1 + 0x40) + lVar13);
      iVar5 = sVar2 + iVar6;
      if (((-1 < iVar5) && (sVar2 != 0)) &&
         ((iVar5 <= (int)(*(long *)(param_1 + 0x50) >> 1) &&
          (*(short *)(*(long *)(param_1 + 0x60) + (long)iVar5 * 2) == iVar6)))) {
        iVar6 = (int)*(short *)(*(long *)(param_1 + 0x58) + (long)iVar5 * 2);
        uVar11 = uVar10;
        goto LAB_0042ffbf;
      }
      if (iVar7 < 1) {
        param_2[0xd] = uVar10 * 2 + 1;
        param_2[0xe] = (long)(int)uVar15 * 2 + 1;
        param_2[0xf] = (long)iVar7 * 2 + 1;
        return 0xb;
      }
LAB_0042ff78:
      iVar7 = (int)uVar12;
      if (iVar7 < 3) break;
      if ((int)((ulong)param_2[6] >> 1) == 0) {
        return 3;
      }
      if (caml_parser_trace != 0) {
        __fprintf_chk(stderr,1,"Discarding last token read\n");
      }
      lVar3 = *(long *)(param_1 + 0x28);
      param_2[6] = -1;
      lVar13 = (long)(int)uVar15 * 2;
      sVar2 = *(short *)(lVar3 + lVar13);
      iVar6 = (int)sVar2;
      uVar11 = uVar10;
      if (sVar2 != 0) goto LAB_0042ffbf;
    }
    lVar13 = uVar10 * 8;
    iVar6 = caml_parser_trace;
    do {
      uVar12 = *(long *)(*param_2 + lVar13) >> 1;
      uVar11 = uVar12 & 0xffffffff;
      sVar2 = *(short *)(*(long *)(param_1 + 0x38) + (long)(int)uVar12 * 2);
      iVar7 = sVar2 + 0x100;
      if (((-1 < iVar7) && (sVar2 != 0)) && (iVar7 <= (int)(*(long *)(param_1 + 0x50) >> 1))) {
        lVar8 = (long)iVar7;
        lVar3 = lVar8 * 2;
        if (*(short *)(*(long *)(param_1 + 0x60) + lVar8 * 2) == 0x100) goto LAB_00430568;
      }
      if (iVar6 != 0) {
        __fprintf_chk(stderr,1,"Discarding state %d\n",uVar11);
        iVar6 = caml_parser_trace;
      }
      lVar13 = lVar13 + -8;
      if (uVar10 <= (ulong)(long)(int)(param_2[5] >> 1)) {
        if (iVar6 == 0) {
          return 3;
        }
        __fprintf_chk(stderr,1,"No more states to discard\n");
        return 3;
      }
      uVar10 = uVar10 - 1;
    } while( true );
  }
LAB_0042ffbf:
  if (caml_parser_trace != 0) {
    __fprintf_chk(stderr,1,"State %d: reduce by rule %d\n",uVar15 & 0xffffffff,iVar6);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  lVar8 = (long)iVar6;
  param_2[10] = uVar11 * 2 + 1;
  sVar2 = *(short *)(lVar3 + lVar8 * 2);
  param_2[0xc] = lVar8 * 2 + 1;
  lVar3 = (long)(int)sVar2;
  uVar10 = (uVar11 + 1) - lVar3;
  param_2[0xb] = lVar3 * 2 + 1;
  iVar6 = (int)(*(ulong *)(*param_2 + -8 + uVar10 * 8) >> 1);
  lVar3 = (long)(int)*(short *)(*(long *)(param_1 + 0x18) + lVar8 * 2);
  sVar2 = *(short *)(*(long *)(param_1 + 0x48) + lVar3 * 2);
  iVar5 = iVar6 + sVar2;
  if ((((iVar5 < 0) || (sVar2 == 0)) || ((int)(*(long *)(param_1 + 0x50) >> 1) < iVar5)) ||
     (*(short *)(*(long *)(param_1 + 0x60) + (long)iVar5 * 2) != iVar6)) {
    sVar2 = *(short *)(*(long *)(param_1 + 0x30) + lVar3 * 2);
  }
  else {
    sVar2 = *(short *)(*(long *)(param_1 + 0x58) + (long)iVar5 * 2);
  }
  iVar6 = (int)sVar2;
  if ((ulong)(param_2[4] >> 1) <= uVar10) {
    param_2[0xd] = uVar10 * 2 + 1;
    param_2[0xe] = (long)iVar6 * 2 + 1;
    param_2[0xf] = (long)iVar7 * 2 + 1;
    return 7;
  }
  goto LAB_00430130;
LAB_00430568:
  uVar12 = 3;
  if (iVar6 != 0) {
    __fprintf_chk(stderr,1,"Recovering in state %d\n",uVar11);
LAB_004302f3:
    if (caml_parser_trace == 0) {
      lVar3 = lVar8 * 2;
    }
    else {
      __fprintf_chk(stderr,1,"State %d: shift to state %d\n",uVar15 & 0xffffffff,
                    (int)*(short *)(*(long *)(param_1 + 0x58) + lVar3));
    }
  }
  uVar11 = uVar10 + 1;
  uVar14 = SEXT24(*(short *)(*(long *)(param_1 + 0x58) + lVar3));
  uVar15 = (ulong)uVar14;
  if ((ulong)(param_2[4] >> 1) <= uVar11) {
    param_2[0xd] = uVar10 + 2 + uVar11;
    param_2[0xe] = (long)(int)uVar14 * 2 + 1;
    param_2[0xf] = (long)(int)uVar12 * 2 + 1;
    return 5;
  }
LAB_004300b8:
  lVar3 = uVar11 * 8;
  lVar13 = (long)(int)uVar15 * 2;
  *(long *)(*param_2 + uVar11 * 8) = lVar13 + 1;
  caml_modify(lVar3 + param_2[1],param_2[7]);
  caml_modify(lVar3 + param_2[2],param_2[8]);
  caml_modify(lVar3 + param_2[3]);
  goto LAB_0042fe99;
}



void caml_init_gc(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 8;
  uVar2 = 0x2000;
  if (0x3ff < (param_2 + 0x1ffU & 0xfffffffffffffe00)) {
    uVar2 = (param_2 + 0x1ffU >> 9) << 0xc;
    uVar1 = uVar2 >> 10;
  }
  caml_page_table_initialize(uVar2 + param_1 * 8);
  if (param_1 < 0x1000) {
    param_1 = 0x1000;
  }
  else {
    if (0x10000000 < param_1) {
      param_1 = 0x80000000;
      goto LAB_004306d3;
    }
  }
  param_1 = param_1 << 3;
LAB_004306d3:
  caml_set_minor_heap_size(param_1);
  caml_major_heap_increment = 0x2000;
  if (0x3ff < (param_3 + 0x1ffU & 0xfffffffffffffe00)) {
    caml_major_heap_increment = (param_3 + 0x1ffU >> 9) << 0xc;
  }
  if (param_4 == 0) {
    param_4 = 1;
  }
  caml_percent_free = param_4;
  caml_percent_max = param_5;
  caml_init_major_heap(uVar2);
  caml_gc_message(0x20,"Initial minor heap size: %luk bytes\n",caml_minor_heap_size >> 10);
  caml_gc_message(0x20,"Initial major heap size: %luk bytes\n",uVar1);
  caml_gc_message(0x20,"Initial space overhead: %lu%%\n",caml_percent_free);
  caml_gc_message(0x20,"Initial max overhead: %lu%%\n",caml_percent_max);
  caml_gc_message(0x20,"Initial heap increment: %luk bytes\n",caml_major_heap_increment >> 10);
  caml_gc_message(0x20,"Initial allocation policy: %d\n",caml_allocation_policy);
  return;
}



void test_and_compact(void)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  if ((long)caml_fl_cur_size < 0) {
    fVar3 = (float)(caml_fl_cur_size >> 1 | (ulong)((uint)caml_fl_cur_size & 1));
    fVar3 = fVar3 + fVar3;
  }
  else {
    fVar3 = (float)caml_fl_cur_size;
  }
  uVar1 = (caml_stat_heap_size >> 3) - caml_fl_cur_size;
  if ((long)uVar1 < 0) {
    fVar2 = (float)(uVar1 >> 1 | (ulong)((uint)uVar1 & 1));
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)uVar1;
  }
  fVar2 = (fVar3 * 100.0) / fVar2;
  if (fVar2 <= 999999.0) {
    if (fVar2 < 9.223372e+18) {
      uVar1 = (ulong)fVar2;
    }
    else {
      uVar1 = (long)(fVar2 - 9.223372e+18) ^ 0x8000000000000000;
    }
  }
  else {
    uVar1 = 999999;
    fVar2 = 999999.0;
  }
  caml_gc_message(0x200,"Estimated overhead (lower bound) = %lu%%\n",uVar1);
  if ((long)caml_percent_max < 0) {
    fVar3 = (float)(caml_percent_max >> 1 | (ulong)((uint)caml_percent_max & 1));
    fVar3 = fVar3 + fVar3;
  }
  else {
    fVar3 = (float)caml_percent_max;
  }
  if ((fVar3 <= fVar2) && (1 < caml_stat_heap_chunks)) {
    caml_gc_message(0x200,"Automatic compaction triggered.\n",0);
    caml_compact_heap();
    return;
  }
  return;
}



undefined8 caml_gc_compaction(void)

{
  caml_empty_minor_heap();
  caml_finish_major_cycle();
  caml_finish_major_cycle();
  caml_compact_heap();
  caml_final_do_calls();
  return 1;
}



undefined8 caml_gc_full_major(void)

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



undefined8 caml_gc_major(void)

{
  caml_gc_message(1,"Major GC cycle requested\n",0);
  caml_empty_minor_heap();
  caml_finish_major_cycle();
  test_and_compact();
  caml_final_do_calls();
  return 1;
}



long caml_gc_major_slice(long param_1)

{
  long lVar1;
  
  caml_empty_minor_heap();
  lVar1 = caml_major_collection_slice(param_1 >> 1);
  return lVar1 * 2 + 1;
}



undefined8 caml_gc_minor(void)

{
  caml_minor_collection();
  return 1;
}



undefined8 caml_gc_set(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  caml_verb_gc = param_1[3] >> 1;
  lVar2 = param_1[2] >> 1;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  if (caml_percent_free != lVar2) {
    caml_percent_free = lVar2;
    caml_gc_message(0x20,"New space overhead: %d%%\n");
  }
  if (param_1[4] >> 1 != caml_percent_max) {
    caml_percent_max = param_1[4] >> 1;
    caml_gc_message(0x20,"New max overhead: %d%%\n");
  }
  uVar1 = (param_1[1] >> 1) + 0x1ff;
  uVar3 = 0x2000;
  if (0x3ff < (uVar1 & 0xfffffffffffffe00)) {
    uVar3 = (uVar1 >> 9) << 0xc;
  }
  if (caml_major_heap_increment != uVar3) {
    caml_major_heap_increment = uVar3;
    caml_gc_message(0x20,"New heap increment size: %luk bytes\n",uVar3 >> 10);
  }
  lVar2 = 1;
  if (param_1[6] >> 1 == 0) {
    lVar2 = param_1[6] >> 1;
  }
  if (caml_allocation_policy != lVar2) {
    caml_gc_message(0x20,"New allocation policy: %d\n",lVar2);
    caml_set_allocation_policy(lVar2);
  }
  uVar3 = (*param_1 >> 1) * 8;
  if ((long)uVar3 < 0x1000) {
    uVar3 = 0x1000;
  }
  else {
    if (0x10000000 < (long)uVar3) {
      uVar3 = 0x10000000;
    }
  }
  if (caml_minor_heap_size != uVar3) {
    caml_gc_message(0x20,"New minor heap size: %luk bytes\n",uVar3 >> 10);
    caml_set_minor_heap_size(uVar3);
  }
  return 1;
}



long caml_gc_get(void)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  long local_10;
  
  uVar1 = caml_local_roots;
  local_40 = &local_10;
  local_10 = 0;
  local_48 = 1;
  local_50 = 1;
  local_58 = caml_local_roots;
  caml_local_roots = (undefined *)&local_58;
  local_10 = caml_alloc_tuple(7);
  caml_modify(local_10,(caml_minor_heap_size >> 3) * 2 + 1);
  caml_modify(local_10 + 8,(caml_major_heap_increment >> 3) * 2 + 1);
  caml_modify(local_10 + 0x10,caml_percent_free * 2 + 1);
  caml_modify(local_10 + 0x18,caml_verb_gc * 2 + 1);
  caml_modify(local_10 + 0x20,caml_percent_max * 2 + 1);
  caml_modify(local_10 + 0x28,1);
  caml_modify(local_10 + 0x30,caml_allocation_policy * 2 + 1);
  caml_local_roots = (undefined *)uVar1;
  return local_10;
}



long caml_gc_counters(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  long local_10;
  
  uVar3 = caml_stat_promoted_words;
  uVar1 = caml_local_roots;
  local_10 = 0;
  local_48 = 1;
  local_50 = 1;
  local_40 = &local_10;
  local_58 = caml_local_roots;
  dVar4 = (double)((ulong)(caml_young_end - caml_young_ptr) >> 3) + caml_stat_minor_words;
  if ((long)caml_allocated_words < 0) {
    dVar5 = (double)(caml_allocated_words >> 1 | (ulong)((uint)caml_allocated_words & 1));
    dVar5 = dVar5 + dVar5;
  }
  else {
    dVar5 = (double)caml_allocated_words;
  }
  dVar5 = dVar5 + caml_stat_major_words;
  caml_local_roots = &local_58;
  local_10 = caml_alloc_tuple(3);
  uVar2 = caml_copy_double(dVar4);
  caml_modify(local_10,uVar2);
  uVar3 = caml_copy_double(uVar3);
  caml_modify(local_10 + 8,uVar3);
  uVar3 = caml_copy_double(dVar5);
  caml_modify(local_10 + 0x10,uVar3);
  caml_local_roots = (undefined8 *)uVar1;
  return local_10;
}



long caml_gc_quick_stat(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long local_40 [2];
  
  lVar6 = caml_stat_heap_chunks;
  lVar5 = caml_stat_compactions;
  uVar4 = caml_stat_top_heap_size;
  lVar3 = caml_stat_major_collections;
  lVar2 = caml_stat_minor_collections;
  uVar8 = caml_stat_promoted_words;
  uVar1 = caml_local_roots;
  local_40[0] = 0;
  local_78 = 1;
  local_80 = 1;
  local_70 = local_40;
  local_88 = caml_local_roots;
  dVar10 = (double)((ulong)(caml_young_end - caml_young_ptr) >> 3) + caml_stat_minor_words;
  if ((long)caml_allocated_words < 0) {
    dVar11 = (double)(caml_allocated_words >> 1 | (ulong)((uint)caml_allocated_words & 1));
    dVar11 = dVar11 + dVar11;
  }
  else {
    dVar11 = (double)caml_allocated_words;
  }
  dVar11 = dVar11 + caml_stat_major_words;
  uVar9 = caml_stat_heap_size >> 3;
  caml_local_roots = &local_88;
  local_40[0] = caml_alloc_tuple(0xf);
  uVar7 = caml_copy_double(dVar10);
  caml_modify(local_40[0],uVar7);
  uVar8 = caml_copy_double(uVar8);
  caml_modify(local_40[0] + 8,uVar8);
  uVar8 = caml_copy_double(dVar11);
  caml_modify(local_40[0] + 0x10,uVar8);
  caml_modify(local_40[0] + 0x18,lVar2 * 2 + 1);
  caml_modify(local_40[0] + 0x20,lVar3 * 2 + 1);
  caml_modify(local_40[0] + 0x28,uVar9 * 2 + 1);
  caml_modify(local_40[0] + 0x30,lVar6 * 2 + 1);
  caml_modify(local_40[0] + 0x38,1);
  caml_modify(local_40[0] + 0x40,1);
  caml_modify(local_40[0] + 0x48,1);
  caml_modify(local_40[0] + 0x50,1);
  caml_modify(local_40[0] + 0x58,1);
  caml_modify(local_40[0] + 0x60,1);
  caml_modify(local_40[0] + 0x68,lVar5 * 2 + 1);
  caml_modify(local_40[0] + 0x70,(uVar4 >> 3) * 2 + 1);
  caml_local_roots = (undefined8 *)uVar1;
  return local_40[0];
}



long caml_gc_stat(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long local_40 [2];
  
  lVar4 = caml_stat_compactions;
  lVar3 = caml_stat_major_collections;
  lVar2 = caml_stat_minor_collections;
  uVar8 = caml_stat_promoted_words;
  uVar1 = caml_local_roots;
  if (caml_heap_start == (ulong *)0x0) {
    local_a8 = 1;
    local_a0 = 1;
    lVar18 = 1;
    local_98 = 1;
    local_90 = 1;
    lVar19 = 1;
    lVar17 = 1;
  }
  else {
    lVar14 = 0;
    uVar11 = 0;
    lVar15 = 0;
    lVar18 = 0;
    lVar13 = 0;
    lVar19 = 0;
    puVar5 = caml_heap_start;
    lVar17 = 0;
    do {
      lVar16 = lVar17;
      lVar17 = lVar16 + 1;
      for (puVar6 = puVar5; puVar6 < (ulong *)((long)puVar5 + puVar5[-2]); puVar6 = puVar6 + uVar10)
      {
        while( true ) {
          uVar12 = *puVar6;
          uVar9 = (uint)uVar12 & 0x300;
          if (uVar9 == 0x100) break;
          if (uVar9 < 0x101) {
            if ((uVar12 & 0x300) == 0) {
              uVar10 = uVar12 >> 10;
              if (uVar10 == 0) {
                lVar14 = lVar14 + 1;
                uVar10 = CONCAT71((uint7)(uVar12 >> 0x12),1);
              }
              else {
                if ((caml_gc_phase == 1) && (caml_gc_sweep_hp <= puVar6)) {
                  lVar18 = lVar18 + 1 + uVar10;
                  uVar10 = uVar10 + 1;
                  lVar15 = lVar15 + 1;
                  if (uVar11 < uVar10) {
                    uVar11 = uVar10;
                  }
                }
                else {
                  lVar19 = lVar19 + 1 + uVar10;
                  lVar13 = lVar13 + 1;
                  uVar10 = uVar10 + 1;
                }
              }
              goto LAB_00431120;
            }
          }
          else {
            if (uVar9 == 0x200) {
              lVar15 = lVar15 + 1;
              lVar18 = (uVar12 >> 10) + 1 + lVar18;
              uVar10 = (uVar12 >> 10) + 1;
              if (uVar11 < uVar10) {
                uVar11 = uVar10;
              }
              goto LAB_00431120;
            }
            if (uVar9 == 0x300) break;
          }
          puVar6 = puVar6 + (uVar12 >> 10) + 1;
          if ((ulong *)((long)puVar5 + puVar5[-2]) <= puVar6) goto LAB_0043116f;
        }
        lVar13 = lVar13 + 1;
        lVar19 = (uVar12 >> 10) + 1 + lVar19;
        uVar10 = (uVar12 >> 10) + 1;
LAB_00431120:
      }
LAB_0043116f:
      puVar5 = (ulong *)puVar5[-1];
    } while (puVar5 != (ulong *)0x0);
    local_90 = lVar18 * 2 + 1;
    local_98 = lVar15 * 2 + 1;
    local_a0 = uVar11 * 2 + 1;
    local_a8 = lVar14 * 2 + 1;
    lVar17 = lVar16 + 2 + lVar17;
    lVar19 = lVar19 * 2 + 1;
    lVar18 = lVar13 * 2 + 1;
  }
  local_40[0] = 0;
  local_88 = caml_local_roots;
  local_78 = 1;
  local_80 = 1;
  local_70 = local_40;
  dVar20 = (double)((ulong)(caml_young_end - caml_young_ptr) >> 3) + caml_stat_minor_words;
  if ((long)caml_allocated_words < 0) {
    dVar21 = (double)(caml_allocated_words >> 1 | (ulong)((uint)caml_allocated_words & 1));
    dVar21 = dVar21 + dVar21;
  }
  else {
    dVar21 = (double)caml_allocated_words;
  }
  dVar21 = dVar21 + caml_stat_major_words;
  uVar12 = caml_stat_heap_size >> 3;
  uVar11 = caml_stat_top_heap_size >> 3;
  caml_local_roots = &local_88;
  local_40[0] = caml_alloc_tuple(0xf);
  uVar7 = caml_copy_double(dVar20);
  caml_modify(local_40[0],uVar7);
  uVar8 = caml_copy_double(uVar8);
  caml_modify(local_40[0] + 8,uVar8);
  uVar8 = caml_copy_double(dVar21);
  caml_modify(local_40[0] + 0x10,uVar8);
  caml_modify(local_40[0] + 0x18,lVar2 * 2 + 1);
  caml_modify(local_40[0] + 0x20,lVar3 * 2 + 1);
  caml_modify(local_40[0] + 0x28,uVar12 * 2 + 1);
  caml_modify(local_40[0] + 0x30,lVar17);
  caml_modify(local_40[0] + 0x38,lVar19);
  caml_modify(local_40[0] + 0x40,lVar18);
  caml_modify(local_40[0] + 0x48,local_90);
  caml_modify(local_40[0] + 0x50,local_98);
  caml_modify(local_40[0] + 0x58,local_a0);
  caml_modify(local_40[0] + 0x60,local_a8);
  caml_modify(local_40[0] + 0x68,lVar4 * 2 + 1);
  caml_modify(local_40[0] + 0x70,uVar11 * 2 + 1);
  caml_local_roots = (undefined8 *)uVar1;
  return local_40[0];
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
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  uVar18 = param_1[3];
  uVar21 = param_1[2];
  uVar20 = param_1[1];
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = param_2[3];
  iVar4 = param_2[4];
  iVar5 = param_2[7];
  iVar6 = param_2[10];
  iVar7 = param_2[0xc];
  uVar17 = *param_1 + -0x28955b88 + iVar1 + ((uVar18 ^ uVar21) & uVar20 ^ uVar18);
  uVar17 = (uVar17 >> 0x19 | uVar17 * 0x80) + uVar20;
  uVar18 = uVar18 + 0xe8c7b756 + iVar2 + ((uVar21 ^ uVar20) & uVar17 ^ uVar21);
  iVar8 = param_2[2];
  uVar19 = (uVar18 >> 0x14 | uVar18 * 0x1000) + uVar17;
  iVar9 = param_2[5];
  uVar18 = uVar21 + 0x242070db + iVar8 + ((uVar17 ^ uVar20) & uVar19 ^ uVar20);
  uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) + uVar19;
  iVar10 = param_2[8];
  uVar21 = uVar20 + 0xc1bdceee + iVar3 + ((uVar19 ^ uVar17) & uVar18 ^ uVar17);
  uVar22 = (uVar21 >> 10 | uVar21 * 0x400000) + uVar18;
  uVar21 = uVar17 + 0xf57c0faf + iVar4 + ((uVar18 ^ uVar19) & uVar22 ^ uVar19);
  uVar21 = (uVar21 >> 0x19 | uVar21 * 0x80) + uVar22;
  uVar20 = uVar19 + 0x4787c62a + iVar9 + ((uVar22 ^ uVar18) & uVar21 ^ uVar18);
  iVar11 = param_2[6];
  uVar20 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar21;
  uVar18 = uVar18 + 0xa8304613 + iVar11 + ((uVar21 ^ uVar22) & uVar20 ^ uVar22);
  uVar19 = (uVar18 >> 0xf | uVar18 * 0x20000) + uVar20;
  iVar12 = param_2[0xb];
  uVar18 = uVar22 + 0xfd469501 + iVar5 + ((uVar20 ^ uVar21) & uVar19 ^ uVar21);
  uVar17 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar19;
  uVar18 = uVar21 + 0x698098d8 + iVar10 + ((uVar19 ^ uVar20) & uVar17 ^ uVar20);
  iVar13 = param_2[9];
  uVar18 = (uVar18 >> 0x19 | uVar18 * 0x80) + uVar17;
  uVar21 = uVar20 + 0x8b44f7af + iVar13 + ((uVar17 ^ uVar19) & uVar18 ^ uVar19);
  uVar21 = (uVar21 >> 0x14 | uVar21 * 0x1000) + uVar18;
  iVar14 = param_2[0xe];
  uVar20 = (uVar19 - 0xa44f) + iVar6 + ((uVar18 ^ uVar17) & uVar21 ^ uVar17);
  uVar19 = (uVar20 >> 0xf | uVar20 * 0x20000) + uVar21;
  uVar20 = uVar17 + 0x895cd7be + iVar12 + ((uVar21 ^ uVar18) & uVar19 ^ uVar18);
  uVar20 = (uVar20 >> 10 | uVar20 * 0x400000) + uVar19;
  uVar18 = uVar18 + 0x6b901122 + iVar7 + ((uVar19 ^ uVar21) & uVar20 ^ uVar21);
  iVar15 = param_2[0xd];
  uVar18 = (uVar18 >> 0x19 | uVar18 * 0x80) + uVar20;
  uVar21 = uVar21 + 0xfd987193 + iVar15 + ((uVar20 ^ uVar19) & uVar18 ^ uVar19);
  uVar21 = (uVar21 >> 0x14 | uVar21 * 0x1000) + uVar18;
  uVar17 = uVar19 + 0xa679438e + iVar14 + ((uVar18 ^ uVar20) & uVar21 ^ uVar20);
  iVar16 = param_2[0xf];
  uVar19 = (uVar17 >> 0xf | uVar17 * 0x20000) + uVar21;
  uVar20 = uVar20 + 0x49b40821 + iVar16 + ((uVar21 ^ uVar18) & uVar19 ^ uVar18);
  uVar17 = (uVar20 >> 10 | uVar20 * 0x400000) + uVar19;
  uVar18 = uVar18 + 0xf61e2562 + iVar2 + ((uVar17 ^ uVar19) & uVar21 ^ uVar19);
  uVar18 = (uVar18 >> 0x1b | uVar18 * 0x20) + uVar17;
  uVar21 = uVar21 + 0xc040b340 + iVar11 + ((uVar18 ^ uVar17) & uVar19 ^ uVar17);
  uVar21 = (uVar21 >> 0x17 | uVar21 * 0x200) + uVar18;
  uVar20 = uVar19 + 0x265e5a51 + iVar12 + ((uVar21 ^ uVar18) & uVar17 ^ uVar18);
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar21;
  uVar17 = uVar17 + 0xe9b6c7aa + iVar1 + ((uVar20 ^ uVar21) & uVar18 ^ uVar21);
  uVar17 = (uVar17 >> 0xc | uVar17 * 0x100000) + uVar20;
  uVar18 = uVar18 + 0xd62f105d + iVar9 + ((uVar17 ^ uVar20) & uVar21 ^ uVar20);
  uVar18 = (uVar18 >> 0x1b | uVar18 * 0x20) + uVar17;
  uVar21 = uVar21 + 0x2441453 + iVar6 + ((uVar18 ^ uVar17) & uVar20 ^ uVar17);
  uVar21 = (uVar21 >> 0x17 | uVar21 * 0x200) + uVar18;
  uVar20 = uVar20 + 0xd8a1e681 + iVar16 + ((uVar21 ^ uVar18) & uVar17 ^ uVar18);
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar21;
  uVar17 = uVar17 + 0xe7d3fbc8 + iVar4 + ((uVar20 ^ uVar21) & uVar18 ^ uVar21);
  uVar17 = (uVar17 >> 0xc | uVar17 * 0x100000) + uVar20;
  uVar18 = uVar18 + 0x21e1cde6 + iVar13 + ((uVar17 ^ uVar20) & uVar21 ^ uVar20);
  uVar18 = (uVar18 >> 0x1b | uVar18 * 0x20) + uVar17;
  uVar21 = uVar21 + 0xc33707d6 + iVar14 + ((uVar18 ^ uVar17) & uVar20 ^ uVar17);
  uVar21 = (uVar21 >> 0x17 | uVar21 * 0x200) + uVar18;
  uVar20 = uVar20 + 0xf4d50d87 + iVar3 + ((uVar21 ^ uVar18) & uVar17 ^ uVar18);
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar21;
  uVar17 = uVar17 + 0x455a14ed + iVar10 + ((uVar20 ^ uVar21) & uVar18 ^ uVar21);
  uVar17 = (uVar17 >> 0xc | uVar17 * 0x100000) + uVar20;
  uVar18 = uVar18 + 0xa9e3e905 + iVar15 + ((uVar17 ^ uVar20) & uVar21 ^ uVar20);
  uVar18 = (uVar18 >> 0x1b | uVar18 * 0x20) + uVar17;
  uVar21 = uVar21 + 0xfcefa3f8 + iVar8 + ((uVar18 ^ uVar17) & uVar20 ^ uVar17);
  uVar21 = (uVar21 >> 0x17 | uVar21 * 0x200) + uVar18;
  uVar20 = uVar20 + 0x676f02d9 + iVar5 + ((uVar21 ^ uVar18) & uVar17 ^ uVar18);
  uVar20 = (uVar20 >> 0x12 | uVar20 * 0x4000) + uVar21;
  uVar17 = ((uVar20 ^ uVar21) & uVar18 ^ uVar21) + uVar17 + 0x8d2a4c8a + iVar7;
  uVar17 = (uVar17 >> 0xc | uVar17 * 0x100000) + uVar20;
  uVar18 = (uVar18 - 0x5c6be) + iVar9 + (uVar20 ^ uVar21 ^ uVar17);
  uVar19 = (uVar18 >> 0x1c | uVar18 * 0x10) + uVar17;
  uVar18 = uVar21 + 0x8771f681 + iVar10 + (uVar17 ^ uVar20 ^ uVar19);
  uVar18 = (uVar18 >> 0x15 | uVar18 * 0x800) + uVar19;
  uVar21 = uVar20 + 0x6d9d6122 + iVar12 + (uVar19 ^ uVar17 ^ uVar18);
  uVar21 = (uVar21 >> 0x10 | uVar21 * 0x10000) + uVar18;
  uVar20 = uVar17 + 0xfde5380c + iVar14 + (uVar18 ^ uVar19 ^ uVar21);
  uVar20 = (uVar20 >> 9 | uVar20 * 0x800000) + uVar21;
  uVar17 = uVar19 + 0xa4beea44 + iVar2 + (uVar21 ^ uVar18 ^ uVar20);
  uVar19 = (uVar17 >> 0x1c | uVar17 * 0x10) + uVar20;
  uVar18 = uVar18 + 0x4bdecfa9 + iVar4 + (uVar20 ^ uVar21 ^ uVar19);
  uVar18 = (uVar18 >> 0x15 | uVar18 * 0x800) + uVar19;
  uVar21 = uVar21 + 0xf6bb4b60 + iVar5 + (uVar19 ^ uVar20 ^ uVar18);
  uVar21 = (uVar21 >> 0x10 | uVar21 * 0x10000) + uVar18;
  uVar20 = uVar20 + 0xbebfbc70 + iVar6 + (uVar18 ^ uVar19 ^ uVar21);
  uVar17 = (uVar20 >> 9 | uVar20 * 0x800000) + uVar21;
  uVar20 = uVar19 + 0x289b7ec6 + iVar15 + (uVar21 ^ uVar18 ^ uVar17);
  uVar20 = (uVar20 >> 0x1c | uVar20 * 0x10) + uVar17;
  uVar18 = uVar18 + 0xeaa127fa + iVar1 + (uVar17 ^ uVar21 ^ uVar20);
  uVar19 = (uVar18 >> 0x15 | uVar18 * 0x800) + uVar20;
  uVar18 = uVar21 + 0xd4ef3085 + iVar3 + (uVar20 ^ uVar17 ^ uVar19);
  uVar18 = (uVar18 >> 0x10 | uVar18 * 0x10000) + uVar19;
  uVar21 = uVar17 + 0x4881d05 + iVar11 + (uVar19 ^ uVar20 ^ uVar18);
  uVar21 = (uVar21 >> 9 | uVar21 * 0x800000) + uVar18;
  uVar20 = uVar20 + 0xd9d4d039 + iVar13 + (uVar18 ^ uVar19 ^ uVar21);
  uVar20 = (uVar20 >> 0x1c | uVar20 * 0x10) + uVar21;
  uVar17 = uVar19 + 0xe6db99e5 + iVar7 + (uVar21 ^ uVar18 ^ uVar20);
  uVar17 = (uVar17 >> 0x15 | uVar17 * 0x800) + uVar20;
  uVar18 = uVar18 + 0x1fa27cf8 + iVar16 + (uVar20 ^ uVar21 ^ uVar17);
  uVar18 = (uVar18 >> 0x10 | uVar18 * 0x10000) + uVar17;
  uVar21 = uVar21 + 0xc4ac5665 + iVar8 + (uVar17 ^ uVar20 ^ uVar18);
  uVar21 = (uVar21 >> 9 | uVar21 * 0x800000) + uVar18;
  uVar20 = uVar20 + 0xf4292244 + iVar1 + ((~uVar17 | uVar21) ^ uVar18);
  uVar19 = (uVar20 >> 0x1a | uVar20 * 0x40) + uVar21;
  uVar20 = uVar17 + 0x432aff97 + iVar5 + ((~uVar18 | uVar19) ^ uVar21);
  uVar17 = (uVar20 >> 0x16 | uVar20 * 0x400) + uVar19;
  uVar18 = uVar18 + 0xab9423a7 + iVar14 + ((~uVar21 | uVar17) ^ uVar19);
  uVar20 = (uVar18 >> 0x11 | uVar18 * 0x8000) + uVar17;
  uVar18 = uVar21 + 0xfc93a039 + iVar9 + ((~uVar19 | uVar20) ^ uVar17);
  uVar18 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar20;
  uVar21 = uVar19 + 0x655b59c3 + iVar7 + ((~uVar17 | uVar18) ^ uVar20);
  uVar19 = (uVar21 >> 0x1a | uVar21 * 0x40) + uVar18;
  uVar21 = uVar17 + 0x8f0ccc92 + iVar3 + ((~uVar20 | uVar19) ^ uVar18);
  uVar17 = (uVar21 >> 0x16 | uVar21 * 0x400) + uVar19;
  uVar21 = (uVar20 - 0x100b83) + iVar6 + ((~uVar18 | uVar17) ^ uVar19);
  uVar21 = (uVar21 >> 0x11 | uVar21 * 0x8000) + uVar17;
  uVar18 = uVar18 + 0x85845dd1 + iVar2 + ((~uVar19 | uVar21) ^ uVar17);
  uVar18 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar21;
  uVar20 = uVar19 + 0x6fa87e4f + iVar10 + ((~uVar17 | uVar18) ^ uVar21);
  uVar19 = (uVar20 >> 0x1a | uVar20 * 0x40) + uVar18;
  uVar20 = uVar17 + 0xfe2ce6e0 + iVar16 + ((~uVar21 | uVar19) ^ uVar18);
  uVar17 = (uVar20 >> 0x16 | uVar20 * 0x400) + uVar19;
  uVar21 = uVar21 + 0xa3014314 + iVar11 + ((~uVar18 | uVar17) ^ uVar19);
  uVar21 = (uVar21 >> 0x11 | uVar21 * 0x8000) + uVar17;
  uVar18 = uVar18 + 0x4e0811a1 + iVar15 + ((~uVar19 | uVar21) ^ uVar17);
  uVar20 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar21;
  uVar18 = uVar19 + 0xf7537e82 + iVar4 + ((~uVar17 | uVar20) ^ uVar21);
  uVar18 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar20;
  uVar17 = uVar17 + 0xbd3af235 + iVar12 + ((~uVar21 | uVar18) ^ uVar20);
  uVar17 = (uVar17 >> 0x16 | uVar17 * 0x400) + uVar18;
  param_1[3] = param_1[3] + uVar17;
  uVar21 = uVar21 + 0x2ad7d2bb + iVar8 + ((~uVar20 | uVar17) ^ uVar18);
  uVar21 = (uVar21 >> 0x11 | uVar21 * 0x8000) + uVar17;
  param_1[2] = param_1[2] + uVar21;
  *param_1 = uVar18 + *param_1;
  uVar18 = uVar20 + 0xeb86d391 + iVar13 + ((~uVar18 | uVar21) ^ uVar17);
  param_1[1] = param_1[1] + uVar21 + (uVar18 >> 0xb | uVar18 * 0x200000);
  return;
}



void caml_MD5Update(long param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *__dest;
  uint uVar6;
  long lVar7;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  uVar3 = uVar6 + (int)param_3 * 8;
  *(uint *)(param_1 + 0x10) = uVar3;
  if (uVar3 < uVar6) {
    iVar4 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar4;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14);
  }
  puVar1 = (undefined8 *)(param_1 + 0x18);
  uVar6 = uVar6 >> 3 & 0x3f;
  *(int *)(param_1 + 0x14) = iVar4 + (int)(param_3 >> 0x1d);
  if (uVar6 != 0) {
    __dest = (undefined8 *)(param_1 + 0x18 + (ulong)uVar6);
    uVar5 = (ulong)(0x40 - uVar6);
    if (param_3 < uVar5) goto LAB_00431dca;
    memcpy(__dest,param_2,uVar5);
    param_3 = param_3 - uVar5;
    caml_MD5Transform(param_1,puVar1);
    param_2 = (void *)((long)param_2 + uVar5);
  }
  __dest = puVar1;
  if (0x3f < param_3) {
    lVar7 = 0;
    do {
      puVar2 = (undefined8 *)((long)param_2 + lVar7);
      lVar7 = lVar7 + 0x40;
      *puVar1 = *puVar2;
      *(undefined8 *)(param_1 + 0x20) = puVar2[1];
      *(undefined8 *)(param_1 + 0x28) = puVar2[2];
      *(undefined8 *)(param_1 + 0x30) = puVar2[3];
      *(undefined8 *)(param_1 + 0x38) = puVar2[4];
      *(undefined8 *)(param_1 + 0x40) = puVar2[5];
      *(undefined8 *)(param_1 + 0x48) = puVar2[6];
      *(undefined8 *)(param_1 + 0x50) = puVar2[7];
      caml_MD5Transform(param_1,puVar1);
    } while (0x3f < param_3 - lVar7);
    uVar5 = param_3 - 0x40;
    param_3 = (size_t)((uint)uVar5 & 0x3f);
    param_2 = (void *)((long)param_2 + (uVar5 & 0xffffffffffffffc0) + 0x40);
  }
LAB_00431dca:
  memcpy(__dest,param_2,param_3);
  return;
}



void caml_MD5Final(undefined8 *param_1,undefined8 *param_2)

{
  void *__s;
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  bool bVar6;
  byte bVar7;
  
  bVar7 = 0;
  uVar1 = *(uint *)(param_2 + 2) >> 3 & 0x3f;
  *(undefined *)((long)param_2 + (ulong)uVar1 + 0x18) = 0x80;
  __s = (void *)((long)param_2 + (ulong)uVar1 + 0x19);
  uVar3 = -uVar1 + 0x3f;
  if (uVar3 < 8) {
    puVar5 = param_2 + 3;
    memset(__s,0,(ulong)uVar3);
    caml_MD5Transform(param_2,puVar5);
    bVar6 = ((ulong)puVar5 & 1) != 0;
    uVar4 = 0x38;
    if (bVar6) {
      *(undefined *)(param_2 + 3) = 0;
      puVar5 = (undefined8 *)((long)param_2 + 0x19);
      uVar4 = 0x37;
    }
    if (((ulong)puVar5 & 2) != 0) {
      *(undefined2 *)puVar5 = 0;
      uVar4 = (ulong)((int)uVar4 - 2);
      puVar5 = (undefined8 *)((long)puVar5 + 2);
    }
    if (((ulong)puVar5 & 4) != 0) {
      *(undefined4 *)puVar5 = 0;
      uVar4 = (ulong)((int)uVar4 - 4);
      puVar5 = (undefined8 *)((long)puVar5 + 4);
    }
    for (uVar2 = uVar4 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
    }
    if ((uVar4 & 4) != 0) {
      *(undefined4 *)puVar5 = 0;
      puVar5 = (undefined8 *)((long)puVar5 + 4);
    }
    if ((uVar4 & 2) != 0) {
      *(undefined2 *)puVar5 = 0;
      puVar5 = (undefined8 *)((long)puVar5 + 2);
    }
    if (bVar6) {
      *(undefined *)puVar5 = 0;
    }
  }
  else {
    memset(__s,0,(ulong)(-uVar1 + 0x37));
  }
  *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_2 + 0x54) = *(undefined4 *)((long)param_2 + 0x14);
  caml_MD5Transform(param_2,param_2 + 3);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  return;
}



undefined8 caml_md5_chan(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 ****ppppuVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  long local_10e8;
  long local_10e0;
  undefined8 ****local_10d8;
  undefined8 local_10d0;
  undefined8 local_10c8;
  long *local_10c0;
  long *local_10b8;
  undefined local_1098 [4096];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  long local_40;
  
  ppppuVar2 = caml_local_roots;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_10c8 = 1;
  local_10d0 = 2;
  local_10d8 = caml_local_roots;
  caml_local_roots = &local_10d8;
  local_10c0 = &local_10e0;
  local_10b8 = &local_10e8;
  local_10e8 = param_2;
  local_10e0 = param_1;
  if (caml_channel_mutex_lock != (code *)0x0) {
    (*caml_channel_mutex_lock)(uVar1);
  }
  local_98 = 0x67452301;
  local_94 = 0xefcdab89;
  local_90 = 0x98badcfe;
  local_8c = 0x10325476;
  local_88 = 0;
  uVar7 = local_10e8 >> 1;
  local_84 = 0;
  if ((long)uVar7 < 0) {
    while (iVar3 = caml_getblock(uVar1,local_1098,0x1000), iVar3 != 0) {
      caml_MD5Update(&local_98,local_1098);
    }
  }
  else {
    if (uVar7 != 0) {
      do {
        uVar6 = 0x1000;
        if (uVar7 < 0x1001) {
          uVar6 = uVar7;
        }
        iVar3 = caml_getblock(uVar1,local_1098,uVar6);
        lVar4 = (long)iVar3;
        if (lVar4 == 0) {
          caml_raise_end_of_file();
          goto LAB_00432132;
        }
        caml_MD5Update(&local_98,local_1098,lVar4);
        uVar7 = uVar7 - lVar4;
      } while (0 < (long)uVar7);
    }
  }
  uVar5 = caml_alloc_string(0x10);
  caml_MD5Final(uVar5,&local_98);
  if (caml_channel_mutex_unlock != (code *)0x0) {
    (*caml_channel_mutex_unlock)(uVar1);
  }
  caml_local_roots = ppppuVar2;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_00432132:
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 caml_md5_string(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  long local_20;
  
  local_78 = 0x67452301;
  local_74 = 0xefcdab89;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0x98badcfe;
  local_6c = 0x10325476;
  local_68 = 0;
  local_64 = 0;
  caml_MD5Update(&local_78,(param_2 >> 1) + param_1,param_3 >> 1);
  uVar1 = caml_alloc_string(0x10);
  caml_MD5Final(uVar1,&local_78);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void add_string(void **param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  void *__dest;
  
  sVar2 = strlen(param_2);
  __dest = *param_1;
  iVar1 = (int)sVar2;
  sVar2 = SEXT48(iVar1);
  if (param_1[1] < (void *)((long)__dest + sVar2)) {
    iVar1 = (int)param_1[1] - (int)__dest;
    sVar2 = SEXT48(iVar1);
  }
  if (0 < iVar1) {
    memmove(__dest,param_2,sVar2);
    __dest = *param_1;
  }
  *param_1 = (void *)((long)__dest + sVar2);
  return;
}



void * caml_format_exception(undefined8 *param_1)

{
  ulong uVar1;
  void *__dest;
  undefined8 *puVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined *__size;
  ulong *puVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined *local_198;
  undefined *local_190;
  undefined local_188 [255];
  undefined local_89;
  undefined local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_198 = local_188;
  local_190 = &local_89;
  add_string(&local_198,*(undefined8 *)*param_1);
  if (1 < (ulong)param_1[-1] >> 10) {
    if ((((ulong)param_1[-1] >> 10 == 2) &&
        (puVar2 = (undefined8 *)param_1[1], ((ulong)puVar2 & 1) == 0)) &&
       (puVar5 = puVar2 + -1, *(char *)(puVar2 + -1) == '\0')) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
      puVar2 = param_1;
      puVar5 = param_1 + -1;
    }
    if (local_198 < local_190) {
      *local_198 = 0x28;
      local_198 = local_198 + 1;
    }
    if (uVar6 < *puVar5 >> 10) {
      puVar4 = puVar2 + uVar6;
      uVar3 = uVar6;
      while( true ) {
        uVar1 = *puVar4;
        if ((uVar1 & 1) == 0) {
          if (*(char *)(uVar1 - 8) == -4) {
            if (local_198 < local_190) {
              *local_198 = 0x22;
              local_198 = local_198 + 1;
            }
            add_string(&local_198);
            if (local_198 < local_190) {
              *local_198 = 0x22;
              local_198 = local_198 + 1;
            }
          }
          else {
            if (local_198 < local_190) {
              *local_198 = 0x5f;
              local_198 = local_198 + 1;
            }
          }
        }
        else {
          __sprintf_chk(local_88,1,0x40,&DAT_004369b7,(long)uVar1 >> 1);
          add_string(&local_198,local_88);
        }
        uVar3 = uVar3 + 1;
        if (*puVar5 >> 10 <= uVar3) break;
        if (uVar6 < uVar3) {
          add_string(&local_198,&DAT_00436ca8);
        }
        puVar4 = puVar4 + 1;
      }
    }
    if (local_198 < local_190) {
      *local_198 = 0x29;
      local_198 = local_198 + 1;
    }
  }
  *local_198 = 0;
  __size = local_198 + (1 - (long)local_188);
  __dest = malloc((size_t)__size);
  if (__dest != (void *)0x0) {
    memmove(__dest,local_188,(size_t)__size);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return __dest;
}



void caml_fatal_uncaught_exception(void)

{
  int iVar1;
  undefined4 uVar2;
  void *__ptr;
  undefined8 *puVar3;
  
  __ptr = (void *)caml_format_exception();
  uVar2 = caml_backtrace_pos;
  iVar1 = caml_backtrace_active;
  caml_backtrace_active = 0;
  puVar3 = (undefined8 *)caml_named_value("Pervasives.do_at_exit");
  if (puVar3 != (undefined8 *)0x0) {
    caml_callback_exn(*puVar3,1);
  }
  caml_backtrace_active = iVar1;
  caml_backtrace_pos = uVar2;
  __fprintf_chk(stderr,1,"Fatal error: exception %s\n",__ptr);
  free(__ptr);
  if (caml_backtrace_active != 0) {
    caml_print_exception_backtrace();
  }
                    // WARNING: Subroutine does not return
  exit(2);
}



long caml_named_value(char *param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  uVar4 = 0;
  uVar5 = 0;
  cVar1 = *param_1;
  pcVar6 = param_1;
  if (cVar1 != '\0') {
    do {
      uVar4 = (int)cVar1 + uVar4 * 0x13;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar5 = uVar4 % 0xd;
  }
  lVar2 = *(long *)(named_value_table + (ulong)uVar5 * 8);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    iVar3 = strcmp(param_1,(char *)(lVar2 + 0x10));
    if (iVar3 == 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2;
}



undefined8 caml_register_named_value(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  ulong uVar9;
  
  uVar6 = 0;
  uVar7 = 0;
  cVar2 = *param_1;
  pcVar8 = param_1;
  if (cVar2 != '\0') {
    do {
      pcVar8 = pcVar8 + 1;
      uVar6 = (int)cVar2 + uVar6 * 0x13;
      cVar2 = *pcVar8;
    } while (cVar2 != '\0');
    uVar7 = uVar6 % 0xd;
  }
  uVar9 = (ulong)uVar7;
  puVar5 = *(undefined8 **)(named_value_table + uVar9 * 8);
  while( true ) {
    if (puVar5 == (undefined8 *)0x0) {
      sVar4 = strlen(param_1);
      puVar5 = (undefined8 *)caml_stat_alloc(sVar4 + 0x18);
      strcpy((char *)(puVar5 + 2),param_1);
      uVar1 = *(undefined8 *)(named_value_table + uVar9 * 8);
      *puVar5 = param_2;
      puVar5[1] = uVar1;
      *(undefined8 **)(named_value_table + uVar9 * 8) = puVar5;
      caml_register_global_root(puVar5);
      return 1;
    }
    iVar3 = strcmp(param_1,(char *)(puVar5 + 2));
    if (iVar3 == 0) break;
    puVar5 = (undefined8 *)puVar5[1];
  }
  *puVar5 = param_2;
  return 1;
}



void caml_callback3(void)

{
  ulong uVar1;
  
  uVar1 = caml_callback3_exn();
  if (((uint)uVar1 & 3) != 2) {
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise(uVar1 & 0xfffffffffffffffc);
}



void caml_callback2(void)

{
  ulong uVar1;
  
  uVar1 = caml_callback2_exn();
  if (((uint)uVar1 & 3) != 2) {
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise(uVar1 & 0xfffffffffffffffc);
}



void caml_callback(void)

{
  ulong uVar1;
  
  uVar1 = caml_callback_exn();
  if (((uint)uVar1 & 3) != 2) {
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise(uVar1 & 0xfffffffffffffffc);
}



undefined8 caml_callbackN_exn(undefined8 param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 local_100;
  undefined8 **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_30 [2];
  
  uVar1 = caml_local_roots;
  if (0 < param_2) {
    local_60 = &local_100;
    local_78 = caml_local_roots;
    local_68 = 1;
    local_70 = 1;
    local_b0 = 1;
    iVar2 = 0;
    local_b8 = &local_78;
    local_e8 = 1;
    local_f0 = 1;
    local_a8 = (long)param_2;
    local_f8 = &local_b8;
    local_e0 = local_30;
    caml_local_roots = &local_f8;
    local_100 = param_1;
    local_a0 = param_3;
    local_30[0] = param_1;
    do {
      if (param_2 - iVar2 == 1) {
        param_1 = caml_callback_exn(local_30[0],*(undefined8 *)(param_3 + (long)iVar2 * 8));
        if (((uint)param_1 & 3) == 2) {
          caml_local_roots = (undefined8 ***)uVar1;
          return param_1;
        }
        iVar2 = iVar2 + 1;
      }
      else {
        if (param_2 - iVar2 == 2) {
          param_1 = caml_callback2_exn(local_30[0],*(undefined8 *)(param_3 + (long)iVar2 * 8),
                                       *(undefined8 *)(param_3 + 8 + (long)iVar2 * 8));
          if (((uint)param_1 & 3) == 2) {
            caml_local_roots = (undefined8 ***)uVar1;
            return param_1;
          }
          iVar2 = iVar2 + 2;
        }
        else {
          lVar3 = (long)iVar2;
          param_1 = caml_callback3_exn(local_30[0],*(undefined8 *)(param_3 + lVar3 * 8),
                                       *(undefined8 *)(param_3 + 8 + lVar3 * 8),
                                       *(undefined8 *)(param_3 + 0x10 + lVar3 * 8));
          if (((uint)param_1 & 3) == 2) {
            caml_local_roots = (undefined8 ***)uVar1;
            return param_1;
          }
          iVar2 = iVar2 + 3;
        }
      }
      local_30[0] = param_1;
    } while (iVar2 < param_2);
  }
  caml_local_roots = (undefined8 ***)uVar1;
  return param_1;
}



void caml_callbackN(void)

{
  ulong uVar1;
  
  uVar1 = caml_callbackN_exn();
  if (((uint)uVar1 & 3) != 2) {
    return;
  }
                    // WARNING: Subroutine does not return
  caml_raise(uVar1 & 0xfffffffffffffffc);
}



char caml_weak_check(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = (param_2 >> 1) + 1;
  if ((uVar1 != 0) && (uVar1 < *(ulong *)(param_1 + -8) >> 10)) {
    return (*(undefined **)(param_1 + uVar1 * 8) != caml_weak_none) * '\x02' + '\x01';
  }
                    // WARNING: Subroutine does not return
  caml_invalid_argument("Weak.get");
}



void do_set(long param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = caml_young_end;
  uVar3 = caml_young_start;
  if ((((param_3 & 1) == 0) && (param_3 < caml_young_end)) && (caml_young_start < param_3)) {
    puVar1 = (ulong *)(param_1 + param_2 * 8);
    uVar2 = *puVar1;
    *puVar1 = param_3;
    if ((((uVar2 & 1) != 0) || (uVar4 <= uVar2)) || (uVar2 <= uVar3)) {
      if (caml_weak_ref_table._32_8_ <= caml_weak_ref_table._24_8_) {
        caml_realloc_ref_table(caml_weak_ref_table);
      }
      *caml_weak_ref_table._24_8_ = puVar1;
      caml_weak_ref_table._24_8_ = caml_weak_ref_table._24_8_ + 1;
    }
    return;
  }
  *(ulong *)(param_1 + param_2 * 8) = param_3;
  return;
}



undefined8 caml_weak_blit(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar7 = (param_2 >> 1) + 1;
  if ((uVar7 != 0) && (uVar5 = param_5 >> 1, uVar5 + uVar7 <= *(ulong *)(param_1 + -8) >> 10)) {
    uVar9 = (param_4 >> 1) + 1;
    if ((uVar9 != 0) && (uVar5 + uVar9 <= *(ulong *)(param_3 + -8) >> 10)) {
      if (((caml_gc_phase == 0) && (caml_gc_subphase == 0xb)) && (uVar5 != 0)) {
        uVar11 = 0;
        do {
          puVar1 = (ulong *)(param_1 + (uVar11 + uVar7) * 8);
          puVar3 = (undefined *)*puVar1;
          if (((puVar3 != caml_weak_none) && (((ulong)puVar3 & 1) == 0)) &&
             ((uVar10 = caml_page_table_lookup(puVar3), (uVar10 & 1) != 0 &&
              ((*(ulong *)(puVar3 + -8) & 0x300) == 0)))) {
            *puVar1 = (ulong)caml_weak_none;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar5);
      }
      if (uVar9 < uVar7) {
        if (uVar5 != 0) {
          uVar11 = 0;
          do {
            uVar10 = uVar11 + 1;
            do_set(param_3,uVar11 + uVar9,*(undefined8 *)(param_1 + (uVar11 + uVar7) * 8));
            uVar11 = uVar10;
          } while (uVar10 < uVar5);
        }
      }
      else {
        lVar8 = uVar5 - 1;
        if (-1 < lVar8) {
          puVar4 = (undefined8 *)(param_1 + ((param_2 >> 1) + uVar5) * 8);
          lVar6 = uVar5 + (param_4 >> 1);
          do {
            uVar2 = *puVar4;
            puVar4 = puVar4 + -1;
            do_set(param_3,lVar6,uVar2);
            lVar8 = lVar8 + -1;
            lVar6 = lVar6 + -1;
          } while (-1 < lVar8);
        }
      }
      return 1;
    }
  }
                    // WARNING: Subroutine does not return
  caml_invalid_argument("Weak.blit");
}



undefined8 caml_weak_set(long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  uVar1 = (param_2 >> 1) + 1;
  if ((uVar1 == 0) || (*(ulong *)(param_1 + -8) >> 10 <= uVar1)) {
                    // WARNING: Subroutine does not return
    caml_invalid_argument("Weak.set");
  }
  if ((param_3 != (undefined8 *)0x1) && (((ulong)param_3 & 1) == 0)) {
    do_set(param_1,uVar1,*param_3);
    return 1;
  }
  *(undefined **)(param_1 + uVar1 * 8) = caml_weak_none;
  return 1;
}



ulong * caml_weak_get(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  long local_a8;
  long local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined **local_78;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  undefined *local_18;
  undefined8 local_10;
  
  uVar1 = caml_local_roots;
  local_38 = &local_a8;
  uVar2 = (param_2 >> 1) + 1;
  local_40 = &local_a0;
  local_48 = 1;
  local_50 = 2;
  local_98 = &local_58;
  local_58 = caml_local_roots;
  local_10 = 0;
  caml_local_roots = &local_98;
  local_18 = (undefined *)0x0;
  local_88 = 1;
  local_90 = 2;
  local_80 = &local_10;
  local_78 = &local_18;
  local_a8 = param_2;
  local_a0 = param_1;
  if ((uVar2 != 0) && (uVar2 < *(ulong *)(param_1 + -8) >> 10)) {
    local_18 = *(undefined **)(param_1 + uVar2 * 8);
    puVar3 = (ulong *)0x1;
    if (local_18 != caml_weak_none) {
      local_38 = &local_a8;
      if ((caml_gc_phase == 0) && (local_38 = &local_a8, ((ulong)local_18 & 1) == 0)) {
        local_38 = &local_a8;
        uVar2 = caml_page_table_lookup();
        if ((uVar2 & 1) != 0) {
          caml_darken(local_18,0);
        }
      }
      puVar3 = (ulong *)caml_alloc_small(1,0);
      *puVar3 = (ulong)local_18;
    }
    caml_local_roots = (undefined8 **)uVar1;
    return puVar3;
  }
                    // WARNING: Subroutine does not return
  caml_invalid_argument("Weak.get");
}



ulong * caml_weak_get_copy(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *__src;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long local_d8;
  long local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined **local_a8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  undefined *local_48;
  undefined8 local_40 [2];
  
  uVar3 = caml_local_roots;
  local_70 = &local_d0;
  uVar8 = (param_2 >> 1) + 1;
  local_68 = &local_d8;
  local_78 = 1;
  local_88 = caml_local_roots;
  local_80 = 2;
  local_c8 = &local_88;
  local_40[0] = 0;
  local_48 = (undefined *)0x0;
  local_b8 = 1;
  caml_local_roots = &local_c8;
  local_c0 = 2;
  local_b0 = local_40;
  local_a8 = &local_48;
  local_d8 = param_2;
  local_d0 = param_1;
  if ((uVar8 == 0) || (*(ulong *)(param_1 + -8) >> 10 <= uVar8)) {
                    // WARNING: Subroutine does not return
    caml_invalid_argument("Weak.get");
  }
  puVar2 = *(undefined **)(param_1 + uVar8 * 8);
  if (puVar2 == caml_weak_none) {
LAB_00432fd8:
    puVar4 = (ulong *)0x1;
    caml_local_roots = (undefined8 **)uVar3;
  }
  else {
    if ((((ulong)puVar2 & 1) == 0) && (uVar5 = caml_page_table_lookup(puVar2), (uVar5 & 3) != 0)) {
      local_48 = (undefined *)caml_alloc(*(ulong *)(puVar2 + -8) >> 10);
      __src = *(undefined **)(local_d0 + uVar8 * 8);
      if (__src == caml_weak_none) goto LAB_00432fd8;
      if ((byte)__src[-8] < 0xfb) {
        puVar2 = local_48;
        if (*(ulong *)(__src + -8) >> 10 != 0) {
          uVar8 = 0;
          do {
            lVar1 = uVar8 * 8;
            uVar5 = *(ulong *)(__src + uVar8 * 8);
            if (((caml_gc_phase == 0) && ((uVar5 & 1) == 0)) &&
               (uVar7 = caml_page_table_lookup(uVar5), (uVar7 & 1) != 0)) {
              caml_darken(uVar5);
            }
            uVar7 = *(ulong *)(local_48 + lVar1);
            *(ulong *)(local_48 + lVar1) = uVar5;
            uVar6 = caml_page_table_lookup(local_48 + lVar1);
            if ((uVar6 & 1) != 0) {
              if (caml_gc_phase == 0) {
                caml_darken(uVar7);
              }
              if (((((uVar5 & 1) == 0) && (uVar5 < caml_young_end)) && (caml_young_start < uVar5))
                 && ((((uVar7 & 1) != 0 || (caml_young_end <= uVar7)) || (uVar7 <= caml_young_start)
                     ))) {
                if (caml_ref_table._32_8_ <= caml_ref_table._24_8_) {
                  caml_realloc_ref_table(caml_ref_table);
                }
                *caml_ref_table._24_8_ = local_48 + lVar1;
                caml_ref_table._24_8_ = caml_ref_table._24_8_ + 1;
              }
            }
            uVar8 = uVar8 + 1;
            puVar2 = local_48;
          } while (uVar8 < *(ulong *)(__src + -8) >> 10);
        }
      }
      else {
        memmove(local_48,__src,(*(ulong *)(__src + -8) >> 10) << 3);
        puVar2 = local_48;
      }
    }
    local_48 = puVar2;
    puVar4 = (ulong *)caml_alloc_small(1,0);
    caml_local_roots = (undefined8 **)uVar3;
    *puVar4 = (ulong)local_48;
  }
  return puVar4;
}



void caml_weak_create(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar1 = (param_1 >> 1) + 1;
  if ((ulong)(param_1 >> 1) < 0x3fffffffffffff) {
    puVar2 = (undefined8 *)caml_alloc_shr(uVar1,0xfb);
    if (uVar1 != 1) {
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
                    // WARNING: Subroutine does not return
  caml_invalid_argument("Weak.create");
}



void invert_pointer_at(ulong **param_1)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong **ppuVar5;
  uint uVar6;
  
  puVar1 = *param_1;
  if ((((ulong)puVar1 & 3) == 0) && (uVar3 = caml_page_table_lookup(puVar1), (uVar3 & 1) != 0)) {
    puVar4 = (ulong *)puVar1[-1];
    uVar6 = (uint)puVar4 & 3;
    if (uVar6 == 1) {
      puVar4 = puVar1 + -((ulong)puVar4 >> 10);
      ppuVar2 = (ulong **)(puVar4 + -1);
      for (ppuVar5 = (ulong **)puVar4[-1]; ((ulong)ppuVar5 & 3) == 0; ppuVar5 = (ulong **)*ppuVar5)
      {
        ppuVar2 = ppuVar5;
      }
      if ((char)((ulong)ppuVar5 >> 2) != -9) {
        ppuVar5 = (ulong **)((ulong)(puVar4 + ((ulong)ppuVar5 >> 10)) | 1);
      }
      *param_1 = (ulong *)ppuVar5;
      puVar1[-1] = (ulong)param_1 | 2;
      *ppuVar2 = (ulong *)((((ulong)((long)puVar1 - (long)puVar4) >> 3) - 1) * 0x400 | 999);
    }
    else {
      if (uVar6 == 2) {
        *param_1 = puVar4;
        puVar1[-1] = (ulong)param_1 | 2;
      }
      else {
        *param_1 = puVar4;
        puVar1[-1] = (ulong)param_1;
      }
    }
  }
  return;
}



void invert_root(undefined8 param_1,undefined8 param_2)

{
  invert_pointer_at(param_2);
  return;
}



void caml_compact_heap(void)

{
  long *plVar1;
  uint uVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  ulong uVar7;
  long **pplVar8;
  ulong uVar9;
  long lVar10;
  long **pplVar11;
  long **pplVar12;
  long *plVar13;
  long **pplVar14;
  ulong uVar15;
  long lVar16;
  
  caml_gc_message(0x10,"Compacting heap...\n",0);
  for (pplVar8 = caml_heap_start; pplVar8 != (long **)0x0; pplVar8 = (long **)pplVar8[-1]) {
    plVar1 = pplVar8[-2];
    for (pplVar3 = pplVar8; pplVar3 < (long **)((long)pplVar8 + (long)plVar1);
        pplVar3 = pplVar3 + ((ulong)plVar13 >> 10) + 1) {
      while( true ) {
        plVar13 = *pplVar3;
        if (((uint)plVar13 & 0x300) != 0x200) break;
        *pplVar3 = (long *)((ulong)plVar13 & 0xfffffffffffffc00 | 0x3f3);
        pplVar3 = pplVar3 + ((ulong)plVar13 >> 10) + 1;
        if ((long **)((long)pplVar8 + (long)plVar1) <= pplVar3) goto LAB_0043324c;
      }
      *pplVar3 = (long *)((ulong)plVar13 & 0xfffffffffffffc00 | 3 |
                         (ulong)((uint)((long)plVar13 << 2) & 0x3fc));
    }
LAB_0043324c:
  }
  caml_do_roots(invert_root);
  caml_final_do_weak_roots(invert_root);
  for (pplVar8 = caml_heap_start; pplVar8 != (long **)0x0; pplVar8 = (long **)pplVar8[-1]) {
    plVar1 = pplVar8[-2];
    for (pplVar3 = pplVar8; pplVar3 < (long **)((long)pplVar8 + (long)plVar1);
        pplVar3 = pplVar3 + uVar15) {
      for (pplVar4 = (long **)*pplVar3; ((ulong)pplVar4 & 3) == 0; pplVar4 = (long **)*pplVar4) {
      }
      uVar2 = (uint)((ulong)pplVar4 >> 2) & 0xff;
      uVar15 = ((ulong)pplVar4 >> 10) + 1;
      if (uVar2 == 0xf9) {
        plVar13 = pplVar3[uVar15];
        uVar2 = (uint)plVar13;
        while ((uVar2 & 3) != 3) {
          plVar13 = *(long **)((ulong)plVar13 & 0xfffffffffffffffc);
          uVar2 = (uint)plVar13;
        }
        uVar2 = (uint)((ulong)plVar13 >> 2) & 0xff;
        uVar15 = ((ulong)plVar13 >> 10) + 1;
      }
      if ((uVar2 < 0xfb) && (1 < uVar15)) {
        uVar9 = 1;
        pplVar4 = pplVar3;
        do {
          pplVar4 = pplVar4 + 1;
          uVar9 = uVar9 + 1;
          invert_pointer_at(pplVar4);
        } while (uVar9 < uVar15);
      }
    }
  }
  if (caml_weak_list_head != (long **)0x0) {
    pplVar8 = caml_weak_list_head;
    pplVar3 = (long **)&caml_weak_list_head;
    do {
      pplVar4 = pplVar8;
      for (pplVar8 = (long **)pplVar4[-1]; ((ulong)pplVar8 & 3) == 0; pplVar8 = (long **)*pplVar8) {
      }
      if (1 < (ulong)pplVar8 >> 10) {
        uVar15 = 1;
        pplVar5 = pplVar4;
        do {
          pplVar5 = pplVar5 + 1;
          if (*pplVar5 != (long *)caml_weak_none) {
            invert_pointer_at(pplVar5);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < (ulong)pplVar8 >> 10);
      }
      invert_pointer_at(pplVar3);
      pplVar8 = (long **)*pplVar4;
      pplVar3 = pplVar4;
    } while ((long **)*pplVar4 != (long **)0x0);
  }
  pplVar8 = caml_heap_start;
  pplVar3 = caml_heap_start;
  if (caml_heap_start == (long **)0x0) {
    compact_fl = (long **)0x0;
  }
  else {
    do {
      pplVar3[-3] = (long *)0x0;
      pplVar4 = pplVar3 + -1;
      pplVar3 = (long **)*pplVar4;
      pplVar5 = pplVar8;
      pplVar12 = pplVar8;
    } while ((long **)*pplVar4 != (long **)0x0);
    do {
      plVar1 = pplVar12[-2];
      pplVar3 = pplVar12;
      while (pplVar3 < (long **)((long)pplVar12 + (long)plVar1)) {
        pplVar4 = (long **)*pplVar3;
        if (((ulong)pplVar4 & 3) == 0) {
          do {
            pplVar4 = (long **)*pplVar4;
          } while (((ulong)pplVar4 & 3) == 0);
          uVar2 = (uint)((ulong)pplVar4 >> 2);
LAB_0043340e:
          uVar2 = uVar2 & 0xff;
          lVar16 = ((ulong)pplVar4 >> 10) + 1;
          pplVar4 = (long **)0x0;
          if (uVar2 == 0xf9) {
            pplVar4 = pplVar3 + lVar16;
            plVar13 = *pplVar4;
            uVar2 = (uint)plVar13;
            while ((uVar2 & 3) != 3) {
              plVar13 = *(long **)((ulong)plVar13 & 0xfffffffffffffffc);
              uVar2 = (uint)plVar13;
            }
            uVar2 = (uint)((ulong)plVar13 >> 2) & 0xff;
            lVar16 = ((ulong)plVar13 >> 10) + 1;
          }
          plVar13 = pplVar5[-3];
          uVar15 = (long)pplVar5[-2] - (long)plVar13;
          pplVar11 = pplVar5;
          if (0x20 < uVar15) goto LAB_004334a3;
          pplVar14 = (long **)pplVar5[-1];
          if (0x20 < (ulong)((long)pplVar14[-2] - (long)pplVar14[-3])) goto LAB_004334a3;
          do {
            pplVar5 = pplVar14;
            pplVar14 = (long **)pplVar5[-1];
            pplVar11 = pplVar5;
          } while ((ulong)((long)pplVar14[-2] - (long)pplVar14[-3]) < 0x21);
          while( true ) {
            plVar13 = pplVar5[-3];
            uVar15 = (long)pplVar5[-2] - (long)plVar13;
LAB_004334a3:
            if ((ulong)(lVar16 * 8) < uVar15 || lVar16 * 8 - uVar15 == 0) break;
            pplVar5 = (long **)pplVar5[-1];
          }
          pplVar5[-3] = plVar13 + lVar16;
          if (((ulong)*pplVar3 & 3) == 0) {
            pplVar14 = (long **)*pplVar3;
            do {
              pplVar6 = (long **)*pplVar14;
              *pplVar14 = (long *)((long)pplVar5 + (long)plVar13 + 8);
              pplVar14 = pplVar6;
            } while (((ulong)pplVar6 & 3) == 0);
          }
          *pplVar3 = (long *)(lVar16 * 0x400 + -0x400 + (ulong)uVar2);
          if (pplVar4 != (long **)0x0) {
            uVar2 = (uint)pplVar4 & 3;
            while (uVar2 != 3) {
              pplVar14 = (long **)((ulong)pplVar4 & 0xfffffffffffffffc);
              pplVar4 = (long **)*pplVar14;
              uVar2 = (uint)pplVar4 & 3;
              if (uVar2 == 2) {
                lVar10 = (long)pplVar14 - (long)pplVar3 >> 3;
                do {
                  pplVar6 = (long **)((ulong)pplVar4 & 0xfffffffffffffffc);
                  pplVar4 = (long **)*pplVar6;
                  *pplVar6 = (long *)((long)pplVar5 + (long)plVar13 + 8 + lVar10 * 8);
                  uVar2 = (uint)pplVar4 & 3;
                } while (uVar2 == 2);
              }
              else {
                lVar10 = (long)pplVar14 - (long)pplVar3 >> 3;
              }
              *pplVar14 = (long *)(lVar10 * 0x400 + 0xf9);
            }
          }
          pplVar3 = pplVar3 + lVar16;
          pplVar5 = pplVar11;
        }
        else {
          uVar15 = (ulong)pplVar4 >> 2;
          uVar2 = (uint)uVar15;
          if ((char)uVar15 == -7) goto LAB_0043340e;
          *pplVar3 = (long *)(((ulong)pplVar4 & 0xfffffffffffffc00) + 0x200 + (uVar15 & 0xff));
          pplVar3 = pplVar3 + ((ulong)pplVar4 >> 10) + 1;
        }
      }
      pplVar3 = pplVar12 + -1;
      pplVar4 = pplVar8;
      pplVar12 = (long **)*pplVar3;
    } while ((long **)*pplVar3 != (long **)0x0);
    do {
      pplVar4[-3] = (long *)0x0;
      pplVar3 = pplVar4 + -1;
      pplVar4 = (long **)*pplVar3;
    } while ((long **)*pplVar3 != (long **)0x0);
    compact_fl = pplVar8;
    do {
      plVar1 = pplVar8[-2];
      for (pplVar3 = pplVar8; pplVar3 < (long **)((long)pplVar8 + (long)plVar1);
          pplVar3 = pplVar3 + ((ulong)plVar13 >> 10) + 1) {
        while (plVar13 = *pplVar3, ((ulong)plVar13 & 0x300) == 0) {
          uVar9 = (ulong)plVar13 >> 10;
          uVar15 = uVar9 * 8 + 8;
          plVar13 = compact_fl[-3];
          pplVar4 = compact_fl + -4;
          uVar7 = (long)compact_fl[-2] - (long)plVar13;
          pplVar5 = compact_fl;
          if ((uVar7 < 0x21) &&
             (pplVar12 = (long **)compact_fl[-1],
             (ulong)((long)pplVar12[-2] - (long)pplVar12[-3]) < 0x21)) {
            do {
              compact_fl = pplVar12;
              pplVar12 = (long **)compact_fl[-1];
            } while ((ulong)((long)pplVar12[-2] - (long)pplVar12[-3]) < 0x21);
            plVar13 = compact_fl[-3];
            pplVar4 = compact_fl + -4;
            uVar7 = (long)compact_fl[-2] - (long)plVar13;
            pplVar5 = compact_fl;
          }
          while (uVar7 < uVar15) {
            pplVar5 = (long **)pplVar4[3];
            plVar13 = pplVar5[-3];
            pplVar4 = pplVar5 + -4;
            uVar7 = (long)pplVar5[-2] - (long)plVar13;
          }
          pplVar12 = pplVar3 + uVar9 + 1;
          pplVar4[1] = plVar13 + uVar9 + 1;
          memmove((void *)((long)pplVar5 + (long)plVar13),pplVar3,uVar15);
          pplVar3 = pplVar12;
          if ((long **)((long)pplVar8 + (long)plVar1) <= pplVar12) goto LAB_004336fb;
        }
      }
LAB_004336fb:
      pplVar8 = (long **)pplVar8[-1];
    } while (pplVar8 != (long **)0x0);
    if (caml_heap_start != (long **)0x0) {
      uVar9 = 0;
      uVar15 = 0;
      pplVar8 = caml_heap_start;
      do {
        plVar1 = pplVar8[-3];
        if (plVar1 != (long *)0x0) {
          uVar15 = uVar15 + ((ulong)plVar1 >> 3);
          uVar9 = uVar9 + ((ulong)((long)pplVar8[-2] - (long)plVar1) >> 3);
        }
        pplVar8 = (long **)pplVar8[-1];
      } while (pplVar8 != (long **)0x0);
      uVar15 = (uVar15 / 100 + 1) * caml_percent_free;
      pplVar8 = caml_heap_start;
      do {
        pplVar3 = (long **)pplVar8[-1];
        if (pplVar8[-3] == (long *)0x0) {
          if (uVar9 < uVar15) {
            uVar9 = uVar9 + ((ulong)pplVar8[-2] >> 3);
          }
          else {
            caml_shrink_heap();
          }
        }
        pplVar4 = caml_heap_start;
        pplVar8 = pplVar3;
      } while (pplVar3 != (long **)0x0);
      caml_fl_reset();
      for (; pplVar4 != (long **)0x0; pplVar4 = (long **)pplVar4[-1]) {
        plVar1 = pplVar4[-3];
        if (plVar1 < pplVar4[-2]) {
          caml_make_free_blocks
                    ((long)pplVar4 + (long)plVar1,(ulong)((long)pplVar4[-2] - (long)plVar1) >> 3,1);
        }
      }
      goto LAB_004337fa;
    }
  }
  caml_fl_reset();
LAB_004337fa:
  caml_stat_compactions = caml_stat_compactions + 1;
  caml_gc_message(0x10,"done.\n",0);
  return;
}



void caml_compact_heap_maybe(void)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  if (((caml_percent_max < 1000000) && (2 < caml_stat_major_collections)) &&
     (2 < caml_stat_heap_chunks)) {
    if ((long)caml_fl_cur_size < 0) {
      fVar2 = (float)(caml_fl_cur_size >> 1 | (ulong)((uint)caml_fl_cur_size & 1));
      fVar2 = fVar2 + fVar2;
    }
    else {
      fVar2 = (float)caml_fl_cur_size;
    }
    if ((long)caml_fl_size_at_phase_change < 0) {
      fVar3 = (float)(caml_fl_size_at_phase_change >> 1 |
                     (ulong)((uint)caml_fl_size_at_phase_change & 1));
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)caml_fl_size_at_phase_change;
    }
    fVar2 = fVar3 * -2.0 + fVar2 * 3.0;
    if (fVar2 < 0.0) {
      if ((long)caml_fl_cur_size < 0) {
        fVar2 = (float)(caml_fl_cur_size >> 1 | (ulong)((uint)caml_fl_cur_size & 1));
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)caml_fl_cur_size;
      }
    }
    if (((float)(caml_stat_heap_size >> 3) <= fVar2) ||
       (fVar2 = (fVar2 * 100.0) / ((float)(caml_stat_heap_size >> 3) - fVar2), 1000000.0 < fVar2)) {
      uVar1 = 1000000;
      fVar2 = 1000000.0;
    }
    else {
      if (fVar2 < 9.223372e+18) {
        uVar1 = (ulong)fVar2;
      }
      else {
        uVar1 = (long)(fVar2 - 9.223372e+18) ^ 0x8000000000000000;
      }
    }
    caml_gc_message(0x200,"FL size at phase change = %lu\n");
    caml_gc_message(0x200,"Estimated overhead = %lu%%\n",uVar1);
    if ((long)caml_percent_max < 0) {
      fVar3 = (float)(caml_percent_max >> 1 | (ulong)((uint)caml_percent_max & 1));
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)caml_percent_max;
    }
    if (fVar3 <= fVar2) {
      caml_gc_message(0x200,"Automatic compaction triggered.\n",0);
      caml_finish_major_cycle();
      if ((long)caml_fl_cur_size < 0) {
        fVar2 = (float)(caml_fl_cur_size >> 1 | (ulong)((uint)caml_fl_cur_size & 1));
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)caml_fl_cur_size;
      }
      fVar2 = (fVar2 * 100.0) / ((float)(caml_stat_heap_size >> 3) - fVar2);
      if (9.223372e+18 <= fVar2) {
        uVar1 = (long)(fVar2 - 9.223372e+18) ^ 0x8000000000000000;
      }
      else {
        uVar1 = (ulong)fVar2;
      }
      caml_gc_message(0x200,"Measured overhead: %lu%%\n",uVar1);
      caml_compact_heap();
      return;
    }
  }
  return;
}



void caml_final_do_strong_roots(code *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = to_do_hd;
  if (old != 0) {
    lVar5 = 0;
    uVar3 = 0;
    do {
      puVar2 = (undefined8 *)(lVar5 + final_table);
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0x18;
      (*param_1)(*puVar2,puVar2);
      puVar2 = to_do_hd;
    } while (uVar3 < old);
  }
  for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    uVar3 = 0;
    puVar6 = puVar2;
    if (*(int *)(puVar2 + 1) != 0) {
      do {
        uVar4 = uVar3 + 1;
        (*param_1)(puVar6[2],puVar2 + uVar3 * 3 + 2);
        puVar1 = puVar6 + 3;
        puVar6 = puVar6 + 3;
        (*param_1)(*puVar1,puVar2 + uVar3 * 3 + 2 + 1);
        uVar3 = uVar4;
      } while (uVar4 < (ulong)(long)*(int *)(puVar2 + 1));
    }
  }
  return;
}



void caml_final_do_weak_roots(code *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (old != 0) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      lVar1 = lVar3 + final_table;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x18;
      (*param_1)(*(undefined8 *)(lVar1 + 8),lVar1 + 8);
    } while (uVar2 < old);
  }
  return;
}



void caml_final_do_young_roots(code *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (old < young) {
    lVar2 = old * 0x18;
    uVar3 = old;
    do {
      uVar3 = uVar3 + 1;
      (*param_1)(*(undefined8 *)(lVar2 + final_table),(undefined8 *)(lVar2 + final_table));
      lVar1 = lVar2 + final_table;
      lVar2 = lVar2 + 0x18;
      (*param_1)(*(undefined8 *)(lVar1 + 8),lVar1 + 8);
    } while (uVar3 < young);
  }
  return;
}



void caml_final_empty_young(void)

{
  old = young;
  return;
}



undefined8 caml_final_release(void)

{
  running_finalisation_function = 0;
  return 1;
}



undefined8 caml_final_register(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if (((param_2 & 1) == 0) && (uVar2 = caml_page_table_lookup(param_2), (uVar2 & 3) != 0)) {
    if (size <= young) {
      if (final_table == 0) {
        final_table = caml_stat_alloc(0x2d0);
        size = 0x1e;
      }
      else {
        uVar2 = size * 2;
        final_table = caml_stat_resize();
        size = uVar2;
      }
    }
    puVar1 = (undefined8 *)(final_table + young * 0x18);
    *puVar1 = param_1;
    if (*(char *)(param_2 - 8) == -7) {
      uVar2 = *(ulong *)(param_2 - 8) >> 10;
      *(int *)(puVar1 + 2) = (int)uVar2 * 8;
      puVar1[1] = param_2 + uVar2 * -8;
    }
    else {
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar1[1] = param_2;
    }
    young = young + 1;
    return 1;
  }
                    // WARNING: Subroutine does not return
  caml_invalid_argument("Gc.finalise");
}



void caml_final_do_calls(void)

{
  long *plVar1;
  int iVar2;
  
  if ((running_finalisation_function == 0) && (to_do_hd != (long *)0x0)) {
    caml_gc_message(0x80,"Calling finalisation functions.\n",0);
    while (plVar1 = to_do_hd, to_do_hd != (long *)0x0) {
      if (*(int *)(to_do_hd + 1) == 0) {
        plVar1 = (long *)*to_do_hd;
        free(to_do_hd);
        to_do_hd = plVar1;
        if (plVar1 == (long *)0x0) {
          to_do_tl = 0;
        }
      }
      else {
        iVar2 = *(int *)(to_do_hd + 1) + -1;
        *(int *)(to_do_hd + 1) = iVar2;
        plVar1 = plVar1 + (long)iVar2 * 3;
        running_finalisation_function = 1;
        caml_callback(plVar1[2],(long)*(int *)(plVar1 + 4) + plVar1[3]);
        running_finalisation_function = 0;
      }
    }
    caml_gc_message(0x80,"Done calling finalisation functions.\n",0);
    return;
  }
  return;
}



void caml_final_update(void)

{
  char cVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (old != 0) {
    lVar9 = 0;
    uVar8 = 0;
    lVar7 = final_table;
    do {
      lVar9 = lVar9 + (ulong)((*(ulong *)(*(long *)(lVar7 + 8) + -8) & 0x300) == 0);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x18;
    } while (uVar8 < old);
    if (lVar9 != 0) {
      puVar3 = (undefined8 *)malloc((long)(int)lVar9 * 0x18 + 0x28);
      if (puVar3 == (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
        caml_fatal_error("out of memory");
      }
      *puVar3 = 0;
      *(int *)(puVar3 + 1) = (int)lVar9;
      puVar4 = puVar3;
      if (to_do_tl != (undefined8 *)0x0) {
        *to_do_tl = puVar3;
        puVar4 = to_do_hd;
      }
      to_do_hd = puVar4;
      to_do_tl = puVar3;
      if (old == 0) {
        old = 0;
        young = 0;
        *(undefined4 *)(puVar3 + 1) = 0;
      }
      else {
        lVar7 = 0;
        uVar8 = 0;
        uVar11 = 0;
        uVar10 = 0;
LAB_00433f20:
        do {
          lVar9 = final_table;
          puVar3 = (undefined8 *)(final_table + lVar7);
          puVar2 = (ulong *)puVar3[1];
          if ((puVar2[-1] & 0x300) == 0) {
            if (*(char *)(puVar2 + -1) == -6) {
              uVar6 = *puVar2;
              if ((uVar6 & 1) == 0) {
                uVar5 = caml_page_table_lookup(uVar6);
                if (((((uVar5 & 7) != 0) && (cVar1 = *(char *)(uVar6 - 8), cVar1 != -6)) &&
                    (cVar1 != -10)) && (cVar1 != -3)) {
                  *(ulong *)(final_table + 8 + lVar7) = uVar6;
                  uVar6 = caml_page_table_lookup(uVar6);
                  if ((uVar6 & 1) != 0) goto LAB_00433f20;
                }
                puVar3 = (undefined8 *)(lVar7 + final_table);
              }
              else {
                puVar3[1] = uVar6;
              }
            }
            puVar4 = to_do_tl + uVar8 * 3;
            puVar4[2] = *puVar3;
            puVar4[3] = puVar3[1];
            puVar4[4] = puVar3[2];
            uVar8 = uVar8 + 1;
            uVar6 = uVar10;
          }
          else {
            uVar6 = uVar10 + 1;
            *(undefined8 *)(final_table + uVar10 * 0x18) = *puVar3;
            *(undefined8 *)(uVar10 * 0x18 + 8 + lVar9) = puVar3[1];
            *(undefined8 *)(uVar10 * 0x18 + 0x10 + lVar9) = puVar3[2];
          }
          puVar3 = to_do_tl;
          uVar11 = uVar11 + 1;
          lVar7 = lVar7 + 0x18;
          uVar10 = uVar6;
        } while (uVar11 < old);
        young = uVar6;
        old = uVar6;
        *(int *)(to_do_tl + 1) = (int)uVar8;
        if (uVar8 != 0) {
          uVar10 = 0;
          do {
            uVar11 = uVar10 + 1;
            caml_darken(puVar3[uVar10 * 3 + 3],0);
            puVar3 = to_do_tl;
            uVar10 = uVar11;
          } while (uVar11 < uVar8);
          return;
        }
      }
    }
  }
  return;
}



char ** caml_final_custom_operations(char *param_1)

{
  char **ppcVar1;
  char **ppcVar2;
  
  ppcVar1 = custom_ops_final_table;
  if (custom_ops_final_table != (char **)0x0) {
    do {
      if (*(char **)((long)*ppcVar1 + 8) == param_1) {
        return (char **)*ppcVar1;
      }
      ppcVar1 = (char **)ppcVar1[1];
    } while (ppcVar1 != (char **)0x0);
  }
  ppcVar1 = (char **)caml_stat_alloc(0x30);
  ppcVar1[1] = param_1;
  *ppcVar1 = "_final";
  ppcVar1[2] = (char *)0x0;
  ppcVar1[3] = (char *)0x0;
  ppcVar1[4] = (char *)0x0;
  ppcVar1[5] = (char *)0x0;
  ppcVar2 = (char **)caml_stat_alloc(0x10);
  *ppcVar2 = (char *)ppcVar1;
  ppcVar2[1] = (char *)custom_ops_final_table;
  custom_ops_final_table = ppcVar2;
  return ppcVar1;
}



void caml_register_custom_operations(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)caml_stat_alloc(0x10);
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
  char **ppcVar3;
  
  ppcVar3 = custom_ops_table;
  if (custom_ops_table != (char **)0x0) {
    do {
      ppcVar1 = (char **)*ppcVar3;
      iVar2 = strcmp(*ppcVar1,param_1);
      if (iVar2 == 0) {
        return ppcVar1;
      }
      ppcVar3 = (char **)ppcVar3[1];
    } while (ppcVar3 != (char **)0x0);
  }
  return (char **)0x0;
}



void caml_alloc_custom(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (param_2 + 7U >> 3) + 1;
  if ((uVar1 < 0x101) && (*(long *)(param_1 + 8) == 0)) {
    plVar2 = (long *)caml_alloc_small(uVar1,0xff);
    *plVar2 = param_1;
    return;
  }
  plVar2 = (long *)caml_alloc_shr(uVar1,0xff);
  *plVar2 = param_1;
  caml_adjust_gc_speed(param_3,param_4);
  caml_check_urgent_gc(plVar2);
  return;
}



undefined4 caml_executable_name(char *param_1,int param_2)

{
  int iVar1;
  ssize_t sVar2;
  stat64 sStack168;
  
  sVar2 = readlink("/proc/self/exe",param_1,(long)param_2);
  iVar1 = (int)sVar2;
  if ((iVar1 < param_2) && (iVar1 != -1)) {
    param_1[iVar1] = '\0';
    iVar1 = __xstat64(1,param_1,&sStack168);
    if ((iVar1 == 0) && ((sStack168.st_mode & 0xf000) == 0x8000)) {
      return 0;
    }
  }
  return 0xffffffff;
}



undefined8 caml_read_directory(char *param_1,undefined8 param_2)

{
  DIR *__dirp;
  undefined8 uVar1;
  dirent64 *pdVar2;
  size_t sVar3;
  char *__dest;
  
  __dirp = opendir(param_1);
  uVar1 = 0xffffffff;
  if (__dirp != (DIR *)0x0) {
    while (pdVar2 = readdir64(__dirp), pdVar2 != (dirent64 *)0x0) {
      while( true ) {
        if (((pdVar2->d_name[0] == '.') && (pdVar2->d_name[1] == '\0')) ||
           ((pdVar2->d_name[0] == '.' && ((pdVar2->d_name[1] == '.' && (pdVar2->d_name[2] == '\0')))
            ))) break;
        sVar3 = strlen(pdVar2->d_name);
        __dest = (char *)caml_stat_alloc(sVar3 + 1);
        strcpy(__dest,pdVar2->d_name);
        caml_ext_table_add(param_2,__dest);
        pdVar2 = readdir64(__dirp);
        if (pdVar2 == (dirent64 *)0x0) goto LAB_004343f0;
      }
    }
LAB_004343f0:
    closedir(__dirp);
    uVar1 = 0;
  }
  return uVar1;
}



char * caml_decompose_path(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  char *__dest;
  char *pcVar4;
  
  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  sVar3 = strlen(param_2);
  __dest = (char *)caml_stat_alloc(sVar3 + 1);
  strcpy(__dest,param_2);
  pcVar4 = __dest;
  do {
    if ((*pcVar4 == ':') || (*pcVar4 == '\0')) {
LAB_00434473:
      caml_ext_table_add(param_1);
      cVar1 = *pcVar4;
      pcVar2 = pcVar4;
    }
    else {
      do {
        pcVar4 = pcVar4 + 1;
        if (*pcVar4 == ':') goto LAB_00434473;
      } while (*pcVar4 != '\0');
      caml_ext_table_add(param_1);
      cVar1 = *pcVar4;
      pcVar2 = pcVar4;
    }
    if (cVar1 == '\0') {
      return __dest;
    }
    pcVar4 = pcVar2 + 1;
    *pcVar2 = '\0';
  } while( true );
}



void caml_dlerror(void)

{
  dlerror();
  return;
}



void caml_dlsym(void)

{
  dlsym();
  return;
}



void caml_globalsym(undefined8 param_1)

{
  caml_dlsym(0,param_1);
  return;
}



void caml_dlclose(void)

{
  dlclose();
  return;
}



void caml_dlopen(undefined8 param_1,undefined8 param_2,int param_3)

{
  dlopen(param_1,(-(uint)(param_3 == 0) & 0xffffff00) + 0x1102);
  return;
}



char * caml_search_in_path(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  long lVar6;
  int iVar7;
  stat64 sStack200;
  
  cVar1 = *param_2;
  pcVar5 = param_2;
  while (cVar1 != '\0') {
    if (cVar1 == '/') goto LAB_00434620;
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  if (0 < *param_1) {
    lVar6 = 0;
    iVar7 = 0;
    do {
      sVar4 = strlen(*(char **)(*(long *)(param_1 + 2) + lVar6));
      sVar3 = strlen(param_2);
      pcVar5 = (char *)caml_stat_alloc(sVar4 + 2 + sVar3);
      strcpy(pcVar5,*(char **)(*(long *)(param_1 + 2) + lVar6));
      if (*pcVar5 != '\0') {
        sVar4 = strlen(pcVar5);
        *(undefined2 *)(pcVar5 + sVar4) = 0x2f;
      }
      strcat(pcVar5,param_2);
      iVar2 = __xstat64(1,pcVar5,&sStack200);
      if ((iVar2 == 0) && ((sStack200.st_mode & 0xf000) == 0x8000)) {
        return pcVar5;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
      caml_stat_free(pcVar5);
    } while (*param_1 != iVar7 && iVar7 <= *param_1);
  }
LAB_00434620:
  sVar4 = strlen(param_2);
  pcVar5 = (char *)caml_stat_alloc(sVar4 + 1);
  strcpy(pcVar5,param_2);
  return pcVar5;
}



undefined8 caml_search_dll_in_path(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  char *__dest;
  undefined8 uVar2;
  
  sVar1 = strlen(param_2);
  __dest = (char *)caml_stat_alloc(sVar1 + 4);
  strcpy(__dest,param_2);
  sVar1 = strlen(__dest);
  *(undefined4 *)(__dest + sVar1) = 0x6f732e;
  uVar2 = caml_search_in_path(param_1,__dest);
  caml_stat_free(__dest);
  return uVar2;
}



undefined8 caml_search_exe_in_path(undefined8 param_1)

{
  char *pcVar1;
  void *__ptr;
  undefined8 uVar2;
  undefined auStack40 [16];
  
  caml_ext_table_init(auStack40,8);
  pcVar1 = getenv("PATH");
  __ptr = (void *)caml_decompose_path(auStack40,pcVar1);
  uVar2 = caml_search_in_path(auStack40,param_1);
  caml_stat_free(__ptr);
  caml_ext_table_free(auStack40,0);
  return uVar2;
}



long caml_backtrace_status(void)

{
  return (-(ulong)(caml_backtrace_active == 0) & 0xfffffffffffffffe) + 3;
}



long * caml_get_exception_backtrace(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  long *local_68;
  long **local_60;
  long *local_58;
  long local_48;
  long *local_40;
  long local_38;
  undefined8 local_30;
  
  uVar3 = caml_local_roots;
  local_70 = &local_30;
  local_30 = 0;
  local_38 = 0;
  local_40 = (long *)0x0;
  local_48 = 0;
  local_68 = &local_38;
  local_88 = caml_local_roots;
  local_78 = 1;
  local_60 = &local_40;
  local_80 = 4;
  local_58 = &local_48;
  caml_local_roots = (undefined *)&local_88;
  local_38 = caml_alloc((long)caml_backtrace_pos,0);
  if (0 < caml_backtrace_pos) {
    lVar6 = 0;
    iVar7 = 0;
    do {
      lVar8 = *(long *)(caml_backtrace_buffer + lVar6);
      if ((*(byte *)(lVar8 + 8) & 1) == 0) {
        local_40 = (long *)caml_alloc_small(1,1);
        *local_40 = 3;
      }
      else {
        puVar4 = (uint *)(lVar8 + 0x13 + (ulong)*(ushort *)(lVar8 + 10) * 2 & 0xfffffffffffffff8);
        uVar1 = *puVar4;
        uVar2 = puVar4[1];
        local_48 = caml_copy_string((ulong)(uVar1 & 0x3fffffc) + (long)puVar4);
        local_40 = (long *)caml_alloc_small(5,0);
        *local_40 = (-(ulong)((uVar1 & 3) == 0) & 0xfffffffffffffffe) + 3;
        local_40[1] = local_48;
        local_40[2] = (long)(int)(uVar2 >> 0xc) * 2 + 1;
        local_40[3] = (ulong)(uVar2 >> 4 & 0xff) * 2 + 1;
        local_40[4] = (long)(int)((uVar2 & 0xf) << 6 | uVar1 >> 0x1a) * 2 + 1;
      }
      lVar8 = lVar6 + local_38;
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
      caml_modify(lVar8);
    } while (iVar7 < caml_backtrace_pos);
  }
  plVar5 = (long *)caml_alloc_small(1,0);
  caml_local_roots = (undefined *)uVar3;
  *plVar5 = local_38;
  return plVar5;
}



void caml_print_exception_backtrace(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  
  if (0 < caml_backtrace_pos) {
    lVar7 = 0;
    iVar6 = 0;
    do {
      lVar3 = *(long *)(caml_backtrace_buffer + lVar7);
      if ((*(byte *)(lVar3 + 8) & 1) != 0) {
        pcVar5 = "Raised at";
        puVar4 = (uint *)(lVar3 + 0x13 + (ulong)*(ushort *)(lVar3 + 10) * 2 & 0xfffffffffffffff8);
        uVar1 = *puVar4;
        uVar2 = puVar4[1];
        if ((iVar6 != 0) && (pcVar5 = "Called from", (uVar1 & 3) != 0)) {
          pcVar5 = "Re-raised at";
        }
        __fprintf_chk(stderr,1,"%s file \"%s\", line %d, characters %d-%d\n",pcVar5,
                      (ulong)(uVar1 & 0x3fffffc) + (long)puVar4,uVar2 >> 0xc,uVar2 >> 4 & 0xff,
                      (uVar2 & 0xf) << 6 | uVar1 >> 0x1a);
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar6 < caml_backtrace_pos);
  }
  return;
}



void caml_stash_backtrace(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1 != caml_backtrace_last_exn) {
    caml_backtrace_pos = 0;
    caml_backtrace_last_exn = param_1;
  }
  if ((caml_backtrace_buffer != (void *)0x0) ||
     (caml_backtrace_buffer = malloc(0x2000), caml_backtrace_buffer != (void *)0x0)) {
    if (caml_frame_descriptors == 0) {
      caml_init_frame_descriptors();
    }
    pvVar3 = caml_backtrace_buffer;
    lVar2 = caml_frame_descriptors;
    uVar6 = SEXT48(caml_frame_descriptors_mask);
    do {
      uVar4 = param_2 >> 3 & uVar6;
      puVar1 = *(ulong **)(lVar2 + uVar4 * 8);
      while( true ) {
        if (puVar1 == (ulong *)0x0) {
          return;
        }
        if (*puVar1 == param_2) break;
        uVar4 = uVar4 + 1 & uVar6;
        puVar1 = *(ulong **)(lVar2 + uVar4 * 8);
      }
      if (*(short *)(puVar1 + 1) == -1) {
        uVar4 = *(ulong *)(param_3 + 0x10);
        param_2 = *(ulong *)(param_3 + 0x18);
        if (uVar4 == 0) {
          return;
        }
      }
      else {
        if (0x3ff < caml_backtrace_pos) {
          return;
        }
        lVar5 = (long)caml_backtrace_pos;
        caml_backtrace_pos = caml_backtrace_pos + 1;
        *(ulong **)((long)pvVar3 + lVar5 * 8) = puVar1;
        uVar4 = param_3 + (*(ushort *)(puVar1 + 1) & 0xfffc);
        param_2 = *(ulong *)(uVar4 - 8);
      }
      param_3 = uVar4;
    } while (uVar4 <= param_4);
  }
  return;
}



undefined8 caml_record_backtrace(long param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 >> 1);
  if (iVar1 != caml_backtrace_active) {
    caml_backtrace_pos = 0;
    caml_backtrace_active = iVar1;
    if (iVar1 != 0) {
      caml_register_global_root(&caml_backtrace_last_exn);
      return 1;
    }
    caml_remove_global_root(&caml_backtrace_last_exn);
  }
  return 1;
}



undefined  [16] caml_call_gc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 in_stack_00000000;
  undefined *puStack104;
  
  caml_bottom_of_stack = &stack0x00000008;
  caml_gc_regs = &puStack104;
  caml_last_return_address = in_stack_00000000;
  caml_exception_pointer = unaff_R14;
  caml_young_ptr = unaff_R15;
  puStack104 = caml_bottom_of_stack;
  caml_garbage_collection();
  return CONCAT88(param_3,puStack104);
}



undefined  [16] FUN_00434bfb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 uStack104;
  
  caml_gc_regs = &uStack104;
  caml_exception_pointer = unaff_R14;
  caml_young_ptr = unaff_R15;
  uStack104 = in_RAX;
  caml_garbage_collection();
  return CONCAT88(param_3,uStack104);
}



void caml_alloc1(void)

{
  long unaff_R15;
  undefined in_stack_00000000;
  undefined7 in_stack_00000001;
  
  if (caml_young_limit <= unaff_R15 - 0x10U) {
    return;
  }
  caml_last_return_address = CONCAT71(in_stack_00000001,in_stack_00000000);
  caml_bottom_of_stack = &stack0x00000008;
  FUN_00434bfb();
  caml_alloc1();
  return;
}



void caml_alloc2(void)

{
  long unaff_R15;
  undefined in_stack_00000000;
  undefined7 in_stack_00000001;
  
  if (caml_young_limit <= unaff_R15 - 0x18U) {
    return;
  }
  caml_last_return_address = CONCAT71(in_stack_00000001,in_stack_00000000);
  caml_bottom_of_stack = &stack0x00000008;
  FUN_00434bfb();
  caml_alloc2();
  return;
}



void caml_alloc3(void)

{
  long unaff_R15;
  undefined in_stack_00000000;
  undefined7 in_stack_00000001;
  
  if (caml_young_limit <= unaff_R15 - 0x20U) {
    return;
  }
  caml_last_return_address = CONCAT71(in_stack_00000001,in_stack_00000000);
  caml_bottom_of_stack = &stack0x00000008;
  FUN_00434bfb();
  caml_alloc3();
  return;
}



void caml_allocN(void)

{
  long in_RAX;
  long unaff_R15;
  undefined in_stack_00000000;
  undefined7 in_stack_00000001;
  
  if (caml_young_limit <= (ulong)(unaff_R15 - in_RAX)) {
    return;
  }
  caml_last_return_address = CONCAT71(in_stack_00000001,in_stack_00000000);
  caml_bottom_of_stack = &stack0x00000008;
  FUN_00434bfb();
  caml_allocN();
  return;
}



void caml_c_call(void)

{
  code *in_RAX;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 in_stack_00000000;
  
  caml_bottom_of_stack = &stack0x00000008;
  caml_last_return_address = in_stack_00000000;
  caml_exception_pointer = unaff_R14;
  caml_young_ptr = unaff_R15;
  (*in_RAX)();
  return;
}



void caml_start_program(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = caml_gc_regs;
  uVar4 = caml_young_ptr;
  uVar3 = caml_bottom_of_stack;
  uVar2 = caml_exception_pointer;
  uVar1 = caml_last_return_address;
  caml_program();
  caml_last_return_address = uVar1;
  caml_exception_pointer = uVar2;
  caml_bottom_of_stack = uVar3;
  caml_young_ptr = uVar4;
  caml_gc_regs = uVar5;
  return;
}



void caml_raise_exn(void)

{
  if ((caml_backtrace_active & 1) == 0) {
    return;
  }
  caml_stash_backtrace();
  return;
}



undefined8 caml_raise_exception(undefined8 param_1)

{
  if ((caml_backtrace_active & 1) == 0) {
    return param_1;
  }
  caml_stash_backtrace(param_1,caml_last_return_address,caml_bottom_of_stack,caml_exception_pointer)
  ;
  return param_1;
}



void caml_callback_exn(code **param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = caml_gc_regs;
  uVar4 = caml_young_ptr;
  uVar3 = caml_bottom_of_stack;
  uVar2 = caml_exception_pointer;
  uVar1 = caml_last_return_address;
  (**param_1)();
  caml_last_return_address = uVar1;
  caml_exception_pointer = uVar2;
  caml_bottom_of_stack = uVar3;
  caml_young_ptr = uVar4;
  caml_gc_regs = uVar5;
  return;
}



void caml_callback2_exn(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = caml_gc_regs;
  uVar4 = caml_young_ptr;
  uVar3 = caml_bottom_of_stack;
  uVar2 = caml_exception_pointer;
  uVar1 = caml_last_return_address;
  caml_apply2();
  caml_last_return_address = uVar1;
  caml_exception_pointer = uVar2;
  caml_bottom_of_stack = uVar3;
  caml_young_ptr = uVar4;
  caml_gc_regs = uVar5;
  return;
}



void caml_callback3_exn(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = caml_gc_regs;
  uVar4 = caml_young_ptr;
  uVar3 = caml_bottom_of_stack;
  uVar2 = caml_exception_pointer;
  uVar1 = caml_last_return_address;
  caml_apply3(param_4,param_1);
  caml_last_return_address = uVar1;
  caml_exception_pointer = uVar2;
  caml_bottom_of_stack = uVar3;
  caml_young_ptr = uVar4;
  caml_gc_regs = uVar5;
  return;
}



void caml_ml_array_bound_error(void)

{
  caml_c_call();
  return;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0043500a)
// WARNING: Removing unreachable block (ram,0x00435010)

void __libc_csu_init(EVP_PKEY_CTX *param_1)

{
  _init(param_1);
  return;
}



void __do_global_ctors_aux(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  if (__CTOR_LIST__ != (code *)0xffffffffffffffff) {
    ppcVar2 = &__CTOR_LIST__;
    pcVar1 = __CTOR_LIST__;
    do {
      ppcVar2 = ppcVar2 + -1;
      (*pcVar1)();
      pcVar1 = *ppcVar2;
    } while (pcVar1 != (code *)0xffffffffffffffff);
  }
  return;
}



void _fini(void)

{
  __do_global_dtors_aux();
  return;
}


