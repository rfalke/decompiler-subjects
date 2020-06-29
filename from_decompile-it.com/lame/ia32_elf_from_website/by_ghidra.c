typedef unsigned char   undefined;

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
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

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


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker

typedef struct IFF_AIFF_struct IFF_AIFF_struct, *PIFF_AIFF_struct;

typedef struct blockAlign_struct blockAlign_struct, *PblockAlign_struct;

typedef struct blockAlign_struct blockAlign;

struct blockAlign_struct {
    ulong offset;
    ulong blockSize;
};

struct IFF_AIFF_struct {
    short numChannels;
    undefined field_0x2;
    undefined field_0x3;
    ulong numSampleFrames;
    short sampleSize;
    undefined field_0xa;
    undefined field_0xb;
    double sampleRate;
    ulong sampleType;
    blockAlign blkAlgn;
};

typedef struct IFF_AIFF_struct IFF_AIFF;

typedef enum sound_file_format_e {
    sf_aiff=3,
    sf_mp1=4,
    sf_mp123=7,
    sf_mp2=5,
    sf_mp3=6,
    sf_ogg=8,
    sf_raw=1,
    sf_unknown=0,
    sf_wave=2
} sound_file_format_e;

typedef enum sound_file_format_e sound_file_format;

typedef struct stat stat, *Pstat;


// WARNING! conflicting data type names: /DWARF/time.h/timespec - /time.h/timespec

struct stat {
    __dev_t st_dev;
    ushort __pad1;
    undefined field_0xa;
    undefined field_0xb;
    __ino_t __st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    ushort __pad2;
    undefined field_0x2a;
    undefined field_0x2b;
    __off64_t st_size;
    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    __ino64_t st_ino;
};

typedef struct Console_IO_t Console_IO_t, *PConsole_IO_t;


// WARNING! conflicting data type names: /DWARF/stdio.h/FILE - /stdio.h/FILE

struct Console_IO_t {
    ulong ClassID;
    ulong ClassProt;
    FILE * Console_fp;
    FILE * Error_fp;
    FILE * Report_fp;
    int disp_width;
    int disp_height;
    char str_up[10];
    char str_clreoln[10];
    char str_emph[10];
    char str_norm[10];
    char Console_buff[2048];
    int Console_file_type;
};

typedef struct get_audio_global_data get_audio_global_data, *Pget_audio_global_data;

typedef struct hip_global_struct hip_global_struct, *Phip_global_struct;

typedef struct hip_global_struct hip_global_flags;

typedef hip_global_flags * hip_t;

struct hip_global_struct {
};

struct get_audio_global_data {
    int count_samples_carefully;
    int pcmbitwidth;
    int pcmswapbytes;
    int pcm_is_unsigned_8bit;
    uint num_samples_read;
    FILE * musicin;
    hip_t hip;
};

typedef char * __gnuc_va_list;

typedef struct anon_struct anon_struct, *Panon_struct;

struct anon_struct {
    int vbr_bitrate_min_index;
    int vbr_bitrate_max_index;
    int kbps[14];
    int hist_printed_lines;
    char bar_asterisk[513];
    char bar_percent[513];
    char bar_coded[513];
    char bar_space[513];
};

typedef struct timeval timeval, *Ptimeval;

typedef long __suseconds_t;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

typedef long __clock_t;

typedef __clock_t clock_t;

typedef enum preset_mode_e {
    ABR_320=320,
    ABR_8=8,
    EXTREME=1002,
    EXTREME_FAST=1005,
    INSANE=1003,
    MEDIUM=1006,
    MEDIUM_FAST=1007,
    R3MIX=1000,
    STANDARD=1001,
    STANDARD_FAST=1004,
    V0=500,
    V1=490,
    V2=480,
    V3=470,
    V4=460,
    V5=450,
    V6=440,
    V7=430,
    V8=420,
    V9=410,
    VBR_10=410,
    VBR_100=500,
    VBR_20=420,
    VBR_30=430,
    VBR_40=440,
    VBR_50=450,
    VBR_60=460,
    VBR_70=470,
    VBR_80=480,
    VBR_90=490
} preset_mode_e;

typedef struct lame_global_struct lame_global_struct, *Plame_global_struct;

typedef struct lame_global_struct lame_global_flags;

struct lame_global_struct {
};

typedef struct mp3data_struct mp3data_struct, *Pmp3data_struct;

struct mp3data_struct {
    int header_parsed;
    int stereo;
    int samplerate;
    int bitrate;
    int mode;
    int mode_ext;
    int framesize;
    ulong nsamp;
    int totalframes;
    int framenum;
};

typedef enum vbr_mode_e {
    vbr_abr=3,
    vbr_default=4,
    vbr_max_indicator=5,
    vbr_mt=1,
    vbr_mtrh=4,
    vbr_off=0,
    vbr_rh=2
} vbr_mode_e;

typedef lame_global_flags * lame_t;

typedef enum asm_optimizations_e {
    AMD_3DNOW=2,
    MMX=1,
    SSE=3
} asm_optimizations_e;

typedef enum MPEG_mode_e {
    DUAL_CHANNEL=2,
    JOINT_STEREO=1,
    MAX_INDICATOR=5,
    MONO=3,
    NOT_SET=4,
    STEREO=0
} MPEG_mode_e;

typedef __gnuc_va_list va_list;


// WARNING! conflicting data type names: /DWARF/stdio.h/_IO_FILE - /stdio.h/_IO_FILE

typedef __off64_t off_t;


// WARNING! conflicting data type names: /DWARF/stddef.h/size_t - /stddef.h/size_t

typedef enum TextEncoding {
    TENC_LATIN1=1,
    TENC_RAW=0,
    TENC_UCS2=2
} TextEncoding;

typedef enum ID3TAG_MODE {
    ID3TAG_MODE_DEFAULT=0,
    ID3TAG_MODE_V1_ONLY=1,
    ID3TAG_MODE_V2_ONLY=2
} ID3TAG_MODE;

typedef enum ByteOrder {
    ByteOrderBigEndian=1,
    ByteOrderLittleEndian=0
} ByteOrder;

typedef struct timestatus_t timestatus_t, *Ptimestatus_t;

struct timestatus_t {
    double last_time;
    double elapsed_time;
    double estimated_time;
    double speed_index;
};


// WARNING! conflicting data type names: /stdarg.h/__gnuc_va_list - /DWARF/stdarg.h/__gnuc_va_list


// WARNING! conflicting data type names: /time.h/timeval - /DWARF/time.h/timeval

typedef struct timezone timezone, *Ptimezone;

typedef struct timezone * __timezone_ptr_t;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
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
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_ENCODING=32,
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
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
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
    byte e_ident_pad[9];
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




undefined4 _init(void)

{
  undefined4 uStack12;
  
  __gmon_start__();
  frame_dummy();
  __do_global_ctors_aux();
  return uStack12;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fileno(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double ldexp(double __x,int __exponent)

{
  float10 extraout_ST0;
  
  ldexp(__x,__exponent);
  return (double)extraout_ST0;
}



void lame_get_in_samplerate(void)

{
  lame_get_in_samplerate();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs(__s,__stream);
  return iVar1;
}



void get_lame_version(void)

{
  get_lame_version();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * popen(char *__command,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = popen(__command,__modes);
  return pFVar1;
}



void lame_set_num_channels(void)

{
  lame_set_num_channels();
  return;
}



void id3tag_v1_only(void)

{
  id3tag_v1_only();
  return;
}



void id3tag_v2_only(void)

{
  id3tag_v2_only();
  return;
}



void id3tag_set_albumart(void)

{
  id3tag_set_albumart();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



void lame_stereo_mode_hist(void)

{
  lame_stereo_mode_hist();
  return;
}



void lame_get_RadioGain(void)

{
  lame_get_RadioGain();
  return;
}



void lame_set_scale_right(void)

{
  lame_set_scale_right();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int getchar(void)

{
  int iVar1;
  
  iVar1 = getchar();
  return iVar1;
}



void lame_set_decode_only(void)

{
  lame_set_decode_only();
  return;
}



void lame_bitrate_hist(void)

{
  lame_bitrate_hist();
  return;
}



void lame_get_noclipGainChange(void)

{
  lame_get_noclipGainChange();
  return;
}



void id3tag_init(void)

{
  id3tag_init();
  return;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



void __isoc99_sscanf(void)

{
  __isoc99_sscanf();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __xstat64(int __ver,char *__filename,stat64 *__stat_buf)

{
  int iVar1;
  
  iVar1 = __xstat64(__ver,__filename,__stat_buf);
  return iVar1;
}



void lame_get_id3v2_tag(void)

{
  lame_get_id3v2_tag();
  return;
}



void get_lame_os_bitness(void)

{
  get_lame_os_bitness();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = getenv(__name);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}



void lame_set_error_protection(void)

{
  lame_set_error_protection();
  return;
}



void lame_get_num_samples(void)

{
  lame_get_num_samples();
  return;
}



void lame_set_debugf(void)

{
  lame_set_debugf();
  return;
}



void lame_get_noclipScale(void)

{
  lame_get_noclipScale();
  return;
}



void lame_get_compression_ratio(void)

{
  lame_get_compression_ratio();
  return;
}



void lame_get_VBR_max_bitrate_kbps(void)

{
  lame_get_VBR_max_bitrate_kbps();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen64(__filename,__modes);
  return pFVar1;
}



void lame_encode_buffer_int(void)

{
  lame_encode_buffer_int();
  return;
}



void lame_get_VBR_min_bitrate_kbps(void)

{
  lame_get_VBR_min_bitrate_kbps();
  return;
}



void get_lame_url(void)

{
  get_lame_url();
  return;
}



void lame_set_write_id3tag_automatic(void)

{
  lame_set_write_id3tag_automatic();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void id3tag_set_comment(void)

{
  id3tag_set_comment();
  return;
}



void lame_set_decode_on_the_fly(void)

{
  lame_set_decode_on_the_fly();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int _IO_getc(_IO_FILE *__fp)

{
  int iVar1;
  
  iVar1 = _IO_getc(__fp);
  return iVar1;
}



void lame_set_VBR_hard_min(void)

{
  lame_set_VBR_hard_min();
  return;
}



void lame_get_decode_only(void)

{
  lame_get_decode_only();
  return;
}



void lame_get_lametag_frame(void)

{
  lame_get_lametag_frame();
  return;
}



void lame_set_strict_ISO(void)

{
  lame_set_strict_ISO();
  return;
}



void lame_set_useTemporal(void)

{
  lame_set_useTemporal();
  return;
}



void lame_set_force_ms(void)

{
  lame_set_force_ms();
  return;
}



void lame_set_compression_ratio(void)

{
  lame_set_compression_ratio();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = gettimeofday(__tv,__tz);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



void lame_set_VBR_quality(void)

{
  lame_set_VBR_quality();
  return;
}



void lame_set_disable_reservoir(void)

{
  lame_set_disable_reservoir();
  return;
}



void hip_decode1_headers(void)

{
  hip_decode1_headers();
  return;
}



void lame_close(void)

{
  lame_close();
  return;
}



void lame_set_nogap_total(void)

{
  lame_set_nogap_total();
  return;
}



void tgetent(void)

{
  tgetent();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



void lame_get_encoder_delay(void)

{
  lame_get_encoder_delay();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = fseek(__stream,__off,__whence);
  return iVar1;
}



void lame_set_VBR_min_bitrate_kbps(void)

{
  lame_set_VBR_min_bitrate_kbps();
  return;
}



void lame_set_free_format(void)

{
  lame_set_free_format();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



void lame_set_errorf(void)

{
  lame_set_errorf();
  return;
}



void lame_init_bitstream(void)

{
  lame_init_bitstream();
  return;
}



void lame_set_exp_nspsytune(void)

{
  lame_set_exp_nspsytune();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

clock_t clock(void)

{
  clock_t cVar1;
  
  cVar1 = clock();
  return cVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



void lame_get_decode_on_the_fly(void)

{
  lame_get_decode_on_the_fly();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



void lame_set_VBR(void)

{
  lame_set_VBR();
  return;
}



void lame_print_config(void)

{
  lame_print_config();
  return;
}



void lame_get_bWriteVbrTag(void)

{
  lame_get_bWriteVbrTag();
  return;
}



void lame_bitrate_stereo_mode_hist(void)

{
  lame_bitrate_stereo_mode_hist();
  return;
}



void lame_set_nogap_currentindex(void)

{
  lame_set_nogap_currentindex();
  return;
}



void lame_set_msfix(void)

{
  lame_set_msfix();
  return;
}



void lame_get_VBR(void)

{
  lame_get_VBR();
  return;
}



void lame_set_athaa_sensitivity(void)

{
  lame_set_athaa_sensitivity();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = feof(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = ftell(__stream);
  return lVar1;
}



void lame_set_out_samplerate(void)

{
  lame_set_out_samplerate();
  return;
}



void lame_set_asm_optimizations(void)

{
  lame_set_asm_optimizations();
  return;
}



void lame_get_quality(void)

{
  lame_get_quality();
  return;
}



void id3tag_set_title(void)

{
  id3tag_set_title();
  return;
}



void lame_block_type_hist(void)

{
  lame_block_type_hist();
  return;
}



void lame_set_brate(void)

{
  lame_set_brate();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
  return iVar1;
}



void lame_bitrate_kbps(void)

{
  lame_bitrate_kbps();
  return;
}



void lame_set_findReplayGain(void)

{
  lame_set_findReplayGain();
  return;
}



void lame_get_framesize(void)

{
  lame_get_framesize();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double atof(char *__nptr)

{
  float10 extraout_ST0;
  
  atof(__nptr);
  return (double)extraout_ST0;
}



void id3tag_set_artist(void)

{
  id3tag_set_artist();
  return;
}



void lame_encode_flush(void)

{
  lame_encode_flush();
  return;
}



void lame_set_highpassfreq(void)

{
  lame_set_highpassfreq();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = fprintf(__stream,__format);
  return iVar1;
}



void lame_set_VBR_mean_bitrate_kbps(void)

{
  lame_set_VBR_mean_bitrate_kbps();
  return;
}



void lame_set_quality(void)

{
  lame_set_quality();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = setvbuf(__stream,__buf,__modes,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strncat(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = strncat(__dest,__src,__n);
  return pcVar1;
}



void lame_get_mode(void)

{
  lame_get_mode();
  return;
}



void lame_set_msgf(void)

{
  lame_set_msgf();
  return;
}



void id3tag_set_year(void)

{
  id3tag_set_year();
  return;
}



void id3tag_set_album(void)

{
  id3tag_set_album();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void lame_get_totalframes(void)

{
  lame_get_totalframes();
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void id3tag_set_pad(void)

{
  id3tag_set_pad();
  return;
}



void lame_encode_flush_nogap(void)

{
  lame_encode_flush_nogap();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputc(__c,__stream);
  return iVar1;
}



void lame_set_VBR_max_bitrate_kbps(void)

{
  lame_set_VBR_max_bitrate_kbps();
  return;
}



void lame_get_num_channels(void)

{
  lame_get_num_channels();
  return;
}



void hip_decode_init(void)

{
  hip_decode_init();
  return;
}



void lame_set_original(void)

{
  lame_set_original();
  return;
}



void id3tag_pad_v2(void)

{
  id3tag_pad_v2();
  return;
}



void tgetnum(void)

{
  tgetnum();
  return;
}



void lame_get_version(void)

{
  lame_get_version();
  return;
}



void id3tag_add_v2(void)

{
  id3tag_add_v2();
  return;
}



void lame_init_params(void)

{
  lame_init_params();
  return;
}



void lame_set_bWriteVbrTag(void)

{
  lame_set_bWriteVbrTag();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcat(__dest,__src);
  return pcVar1;
}



void lame_get_id3v1_tag(void)

{
  lame_get_id3v1_tag();
  return;
}



void id3tag_genre_list(void)

{
  id3tag_genre_list();
  return;
}



void lame_get_exp_nspsytune(void)

{
  lame_get_exp_nspsytune();
  return;
}



void id3tag_set_track(void)

{
  id3tag_set_track();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __fxstat64(int __ver,int __fildes,stat64 *__stat_buf)

{
  int iVar1;
  
  iVar1 = __fxstat64(__ver,__fildes,__stat_buf);
  return iVar1;
}



void lame_get_frameNum(void)

{
  lame_get_frameNum();
  return;
}



void lame_set_interChRatio(void)

{
  lame_set_interChRatio();
  return;
}



void id3tag_set_genre(void)

{
  id3tag_set_genre();
  return;
}



void lame_set_num_samples(void)

{
  lame_set_num_samples();
  return;
}



void lame_set_preset(void)

{
  lame_set_preset();
  return;
}



void lame_get_free_format(void)

{
  lame_get_free_format();
  return;
}



void lame_set_emphasis(void)

{
  lame_set_emphasis();
  return;
}



void lame_set_mode(void)

{
  lame_set_mode();
  return;
}



void hip_decode_exit(void)

{
  hip_decode_exit();
  return;
}



void lame_print_internals(void)

{
  lame_print_internals();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = vfprintf(__s,__format,__arg);
  return iVar1;
}



void lame_set_experimentalY(void)

{
  lame_set_experimentalY();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int _IO_putc(int __c,_IO_FILE *__fp)

{
  int iVar1;
  
  iVar1 = _IO_putc(__c,__fp);
  return iVar1;
}



void lame_get_VBR_quality(void)

{
  lame_get_VBR_quality();
  return;
}



void lame_get_findReplayGain(void)

{
  lame_get_findReplayGain();
  return;
}



void lame_set_in_samplerate(void)

{
  lame_set_in_samplerate();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}



void lame_get_out_samplerate(void)

{
  lame_get_out_samplerate();
  return;
}



void lame_set_VBR_q(void)

{
  lame_set_VBR_q();
  return;
}



void tgetstr(void)

{
  tgetstr();
  return;
}



void lame_get_force_ms(void)

{
  lame_get_force_ms();
  return;
}



void lame_set_lowpassfreq(void)

{
  lame_set_lowpassfreq();
  return;
}



void lame_set_scale_left(void)

{
  lame_set_scale_left();
  return;
}



void lame_get_brate(void)

{
  lame_get_brate();
  return;
}



void lame_init(void)

{
  lame_init();
  return;
}



void lame_set_highpasswidth(void)

{
  lame_set_highpasswidth();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = strdup(__s);
  return pcVar1;
}



void id3tag_set_fieldvalue(void)

{
  id3tag_set_fieldvalue();
  return;
}



void lame_set_scale(void)

{
  lame_set_scale();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = ferror(__stream);
  return iVar1;
}



void hip_decode1_headersB(void)

{
  hip_decode1_headersB();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int tolower(int __c)

{
  int iVar1;
  
  iVar1 = tolower(__c);
  return iVar1;
}



void lame_set_copyright(void)

{
  lame_set_copyright();
  return;
}



void lame_set_lowpasswidth(void)

{
  lame_set_lowpasswidth();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



void id3tag_space_v1(void)

{
  id3tag_space_v1();
  return;
}



void lame_get_VBR_q(void)

{
  lame_get_VBR_q();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = pclose(__stream);
  return iVar1;
}



void lame_get_VBR_mean_bitrate_kbps(void)

{
  lame_get_VBR_mean_bitrate_kbps();
  return;
}



void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0804ab2a)
// WARNING: Removing unreachable block (ram,0x0804ab30)

void __do_global_dtors_aux(void)

{
  if (completed_7065 == '\0') {
    completed_7065 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0804ab78)

void frame_dummy(void)

{
  return;
}



int parse_args_from_string(lame_global_flags *gfp,char *p,char *inPath,char *outPath)

{
  int iVar1;
  size_t sVar2;
  char *r [128];
  int ret;
  int c;
  char *f;
  char *q;
  
  if ((p == (char *)0x0) || (*p == '\0')) {
    iVar1 = 0;
  }
  else {
    sVar2 = strlen(p);
    f = (char *)malloc(sVar2 + 1);
    strcpy(f,p);
    r[0] = "lhama";
    c = 1;
    q = f;
    while( true ) {
      r[c] = q;
      c = c + 1;
      while ((*q != ' ' && (*q != '\0'))) {
        q = q + 1;
      }
      if (*q == '\0') break;
      *q = '\0';
      q = q + 1;
    }
    r[c] = (char *)0x0;
    iVar1 = parse_args(gfp,c,r,inPath,outPath,(char **)0x0,(int *)0x0);
    free(f);
  }
  return iVar1;
}



FILE * init_files(lame_global_flags *gf,char *inPath,char *outPath,int *enc_delay,int *enc_padding)

{
  int decode;
  FILE *pFVar1;
  FILE *outf;
  
  decode = strcmp("-",outPath);
  if ((decode == 0) || (decode = strcmp(inPath,outPath), decode != 0)) {
    init_infile(gf,inPath,enc_delay,enc_padding);
    decode = lame_get_decode_only(gf);
    pFVar1 = init_outfile(outPath,decode);
    if (pFVar1 == (FILE *)0x0) {
      error_printf("Can\'t init outfile \'%s\'\n",outPath);
      pFVar1 = (FILE *)0x0;
    }
  }
  else {
    error_printf("Input file and Output file are the same. Abort.\n");
    pFVar1 = (FILE *)0x0;
  }
  return pFVar1;
}



int lame_decoder(lame_global_flags *gfp,FILE *outf,int skip_start,char *inPath,char *outPath,
                int *enc_delay,int *enc_padding)

{
  int channels;
  int freq;
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *local_1274;
  short Buffer [2] [1152];
  double wavsize;
  int tmp_num_channels;
  anon_subr_void_FILE_ptr_char_ptr_int *WriteFunction;
  int i;
  int skip_end;
  int iread;
  
  skip_end = 0;
  channels = lame_get_num_channels(gfp);
  if (silent < 10) {
    if (channels == 1) {
      local_1274 = &DAT_080548b4;
    }
    else {
      local_1274 = &DAT_080548b2;
    }
    freq = lame_get_in_samplerate(gfp);
    sVar1 = strlen(inPath);
    if (sVar1 < 0x1b) {
      puVar5 = &DAT_080548b8;
    }
    else {
      puVar5 = &DAT_080548b5;
    }
    iVar2 = strcmp(inPath,"-");
    if (iVar2 == 0) {
      inPath = "<stdin>";
    }
    console_printf("\rinput:  %s%s(%g kHz, %i channel%s, ",inPath,puVar5,
                   (double)freq / 1000.00000000,channels,local_1274);
  }
  switch(input_format) {
  default:
    if (silent < 10) {
      console_printf("unknown");
    }
    mp3input_data.nsamp = lame_get_num_samples(gfp);
    mp3input_data.framesize = 0x480;
    skip_start = 0;
    break;
  case sf_raw:
    if (silent < 10) {
      console_printf("raw PCM data");
    }
    mp3input_data.nsamp = lame_get_num_samples(gfp);
    mp3input_data.framesize = 0x480;
    skip_start = 0;
    break;
  case sf_wave:
    if (silent < 10) {
      console_printf("Microsoft WAVE");
    }
    mp3input_data.nsamp = lame_get_num_samples(gfp);
    mp3input_data.framesize = 0x480;
    skip_start = 0;
    break;
  case sf_aiff:
    if (silent < 10) {
      console_printf("SGI/Apple AIFF");
    }
    mp3input_data.nsamp = lame_get_num_samples(gfp);
    mp3input_data.framesize = 0x480;
    skip_start = 0;
    break;
  case sf_mp1:
    skip_start = skip_start + 0xf1;
    if (silent < 10) {
      freq = lame_get_out_samplerate(gfp);
      if (freq < 16000) {
        local_1274 = &DAT_08054904;
      }
      else {
        local_1274 = &DAT_080548b4;
      }
      freq = lame_get_version(gfp);
      console_printf("MPEG-%u%s Layer %s",2 - freq,local_1274);
    }
    break;
  case sf_mp2:
    skip_start = skip_start + 0xf1;
    if (silent < 10) {
      freq = lame_get_out_samplerate(gfp);
      if (freq < 16000) {
        local_1274 = &DAT_08054904;
      }
      else {
        local_1274 = &DAT_080548b4;
      }
      freq = lame_get_version(gfp);
      console_printf("MPEG-%u%s Layer %s",2 - freq,local_1274);
    }
    break;
  case sf_mp3:
    if (skip_start == 0) {
      if ((*enc_delay < 0) && (*enc_padding < 0)) {
        skip_start = lame_get_encoder_delay(gfp);
        skip_start = skip_start + 0x211;
      }
      else {
        if (-1 < *enc_delay) {
          skip_start = *enc_delay + 0x211;
        }
        if (-1 < *enc_padding) {
          skip_end = *enc_padding + -0x211;
        }
      }
    }
    else {
      skip_start = skip_start + 0x211;
    }
    if (silent < 10) {
      freq = lame_get_out_samplerate(gfp);
      if (freq < 16000) {
        local_1274 = &DAT_08054904;
      }
      else {
        local_1274 = &DAT_080548b4;
      }
      freq = lame_get_version(gfp);
      console_printf("MPEG-%u%s Layer %s",2 - freq,local_1274);
    }
    break;
  case sf_mp123:
    error_printf("Internal error.  Aborting.");
                    // WARNING: Subroutine does not return
    exit(-1);
  }
  if (silent < 10) {
    sVar1 = strlen(outPath);
    if (sVar1 < 0x2e) {
      local_1274 = &DAT_080548b8;
    }
    else {
      local_1274 = &DAT_080548b5;
    }
    freq = strcmp(outPath,"-");
    pcVar3 = outPath;
    if (freq == 0) {
      pcVar3 = "<stdout>";
    }
    console_printf(")\noutput: %s%s(16 bit, Microsoft WAVE)\n",pcVar3,local_1274);
    if (0 < skip_start) {
      console_printf("skipping initial %i samples (encoder+decoder delay)\n",skip_start,local_1274);
    }
    if (0 < skip_end) {
      console_printf("skipping final %i samples (encoder padding-decoder delay)\n",skip_end,
                     local_1274);
    }
  }
  if (disable_wav_header == 0) {
    freq = lame_get_in_samplerate(gfp);
    WriteWaveHeader(outf,0x7fffffff,freq,channels,0x10);
  }
  wavsize = (double)-(skip_start + skip_end);
  if (swapbytes == 0) {
    pcVar4 = WriteBytes;
  }
  else {
    pcVar4 = WriteBytesSwapped;
  }
  mp3input_data.totalframes = mp3input_data.nsamp / (uint)mp3input_data.framesize;
  do {
    iread = get_audio16(gfp,(short (*) [1152])Buffer);
    if (-1 < iread) {
      mp3input_data.framenum = mp3input_data.framenum + iread / mp3input_data.framesize;
      wavsize = wavsize + (double)iread;
      if (silent < 1) {
        decoder_progress(&mp3input_data);
        console_flush();
      }
      i = skip_start;
      if (iread <= skip_start) {
        i = iread;
      }
      skip_start = skip_start - i;
      if ((skip_end < 0x481) || (mp3input_data.framenum + 2 <= mp3input_data.totalframes)) {
        if ((mp3input_data.framenum == mp3input_data.totalframes) && (iread != 0)) {
          iread = iread - skip_end;
        }
      }
      else {
        iread = iread + (0x480 - skip_end);
        skip_end = 0x480;
      }
      while (i < iread) {
        if (disable_wav_header == 0) {
          Write16BitsLowHigh(outf,(int)Buffer[i]);
          if (channels == 2) {
            Write16BitsLowHigh(outf,(int)Buffer[i + 0x480]);
          }
        }
        else {
          (*pcVar4)(outf,Buffer + i,2);
          if (channels == 2) {
            (*pcVar4)(outf,Buffer + i + 0x480,2);
          }
        }
        i = i + 1;
      }
      if (flush_write == 1) {
        fflush((FILE *)outf);
      }
    }
  } while (0 < iread);
  if (0.00000000 < wavsize) {
    if (wavsize <= (double)(0xffffffd0 / (ulonglong)(uint)(channels * 2))) {
      wavsize = wavsize * (double)(channels * 2);
    }
    else {
      if (silent < 10) {
        error_printf("Very huge WAVE file, can\'t set filesize accordingly\n");
      }
      wavsize = 4294967248.00000000;
    }
  }
  else {
    if (silent < 10) {
      error_printf("WAVE file contains 0 PCM samples\n");
    }
    wavsize = 0.00000000;
  }
  if (((disable_wav_header == 0) && (freq = strcmp("-",outPath), freq != 0)) &&
     (freq = fseek((FILE *)outf,0,0), freq == 0)) {
    freq = lame_get_in_samplerate(gfp);
    WriteWaveHeader(outf,(int)ROUND(wavsize),freq,channels,0x10);
  }
  fclose((FILE *)outf);
  if (silent < 1) {
    decoder_progress_finish();
  }
  return 0;
}



void print_lame_tag_leading_info(lame_global_flags *gf)

{
  int iVar1;
  
  iVar1 = lame_get_bWriteVbrTag(gf);
  if (iVar1 != 0) {
    console_printf("Writing LAME Tag...");
  }
  return;
}



void print_trailing_info(lame_global_flags *gf)

{
  double dVar1;
  float fVar2;
  int iVar3;
  undefined *puVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float noclipScale;
  float noclipGainChange;
  int RadioGain;
  
  iVar3 = lame_get_bWriteVbrTag(gf);
  if (iVar3 != 0) {
    console_printf("done\n");
  }
  iVar3 = lame_get_findReplayGain(gf);
  if (iVar3 != 0) {
    iVar3 = lame_get_RadioGain(gf);
    if (iVar3 < 1) {
      puVar4 = &DAT_080548b4;
    }
    else {
      puVar4 = &DAT_08054a92;
    }
    console_printf("ReplayGain: %s%.1fdB\n",puVar4,SUB84((double)iVar3 / 10.00000000,0),
                   (int)((ulonglong)((double)iVar3 / 10.00000000) >> 0x20));
    if ((0x1fe < iVar3) || (iVar3 < -0x1fe)) {
      error_printf(
                  "WARNING: ReplayGain exceeds the -51dB to +51dB range. Such a result is too\n         high to be stored in the header.\n"
                  );
    }
  }
  if (print_clipping_info != 0) {
    iVar3 = lame_get_decode_on_the_fly(gf);
    if (iVar3 != 0) {
      iVar3 = lame_get_noclipGainChange(gf);
      fVar2 = (float)iVar3 / 10.00000000;
      fVar5 = (float10)lame_get_noclipScale(gf);
      if (fVar2 <= 0.00000000) {
        if (fVar2 <= -0.09999999) {
          console_printf(
                         "\nThe waveform does not clip and is at least %.1fdB away from full scale.\n"
                         ,SUB84((double)-fVar2,0),(int)((ulonglong)(double)-fVar2 >> 0x20));
        }
        else {
          console_printf(
                        "\nThe waveform does not clip and is less than 0.1dB away from full scale.\n"
                        );
        }
      }
      else {
        uVar6 = SUB84((double)fVar2,0);
        uVar7 = (undefined4)((ulonglong)(double)fVar2 >> 0x20);
        console_printf(
                       "WARNING: clipping occurs at the current gain. Set your decoder to decrease\n         the  gain  by  at least %.1fdB or encode again "
                       ,uVar6,uVar7);
        if ((float)fVar5 <= 0.00000000) {
          console_printf(
                         "using --scale <arg>\n         (For   a   suggestion  on  the  optimal  value  of  <arg>  encode\n         with  --scale 1  first)\n"
                         ,uVar6,uVar7);
        }
        else {
          dVar1 = (double)(float)fVar5;
          console_printf("using  --scale %.2f\n",SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
          console_printf("         or less (the value under --scale is approximate).\n");
        }
      }
    }
  }
  return;
}



int write_xing_frame(lame_global_flags *gf,FILE *outf)

{
  int iVar1;
  uint __n;
  size_t sVar2;
  int in_GS_OFFSET;
  size_t owrite;
  size_t imp3;
  uchar mp3buffer [147456];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  __n = lame_get_lametag_frame(gf,mp3buffer,0x24000);
  if (__n < 0x24001) {
    if (__n == 0) {
      __n = 0;
    }
    else {
      sVar2 = fwrite(mp3buffer,1,__n,(FILE *)outf);
      if (sVar2 == __n) {
        if (flush_write == 1) {
          fflush((FILE *)outf);
        }
      }
      else {
        error_printf("Error writing LAME-tag \n");
        __n = 0xffffffff;
      }
    }
  }
  else {
    error_printf("Error writing LAME-tag frame: buffer too small: buffer size=%d  frame size=%d\n",
                 0x24000,__n);
    __n = 0xffffffff;
  }
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return __n;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int lame_encoder(lame_global_flags *gf,FILE *outf,int nogap,char *inPath,char *outPath)

{
  int iVar1;
  uint __n;
  int iVar2;
  size_t __n_00;
  size_t sVar3;
  uint __n_01;
  int in_GS_OFFSET;
  int Buffer [2] [1152];
  int id3v2_size;
  int owrite;
  int imp3;
  int iread;
  uchar mp3buffer [147456];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  encoder_progress_begin(gf,inPath,outPath);
  __n = lame_get_id3v2_tag(gf,mp3buffer,0x24000);
  if (__n < 0x24001) {
    __n_00 = fwrite(mp3buffer,1,__n,(FILE *)outf);
    if (__n_00 == __n) {
      if (flush_write == 1) {
        fflush((FILE *)outf);
      }
      do {
        iVar2 = get_audio(gf,(int (*) [1152])Buffer);
        if (-1 < iVar2) {
          encoder_progress(gf);
          __n_00 = lame_encode_buffer_int(gf,Buffer,Buffer + 0x480,iVar2,mp3buffer,0x24000);
          if ((int)__n_00 < 0) {
            if (__n_00 == 0xffffffff) {
              error_printf("mp3 buffer is not big enough... \n");
            }
            else {
              error_printf("mp3 internal error:  error code=%i\n",__n_00);
            }
            iVar2 = 1;
            goto LAB_0804bc72;
          }
          sVar3 = fwrite(mp3buffer,1,__n_00,(FILE *)outf);
          if (sVar3 != __n_00) {
            error_printf("Error writing mp3 output \n");
            iVar2 = 1;
            goto LAB_0804bc72;
          }
        }
        if (flush_write == 1) {
          fflush((FILE *)outf);
        }
      } while (0 < iVar2);
      if (nogap == 0) {
        imp3 = lame_encode_flush(gf,mp3buffer,0x24000);
      }
      else {
        imp3 = lame_encode_flush_nogap(gf,mp3buffer,0x24000);
      }
      if (imp3 < 0) {
        if (imp3 == -1) {
          error_printf("mp3 buffer is not big enough... \n");
        }
        else {
          error_printf("mp3 internal error:  error code=%i\n",imp3);
        }
        iVar2 = 1;
      }
      else {
        encoder_progress_end(gf);
        __n_00 = fwrite(mp3buffer,1,imp3,(FILE *)outf);
        if (__n_00 == imp3) {
          if (flush_write == 1) {
            fflush((FILE *)outf);
          }
          __n_01 = lame_get_id3v1_tag(gf,mp3buffer,0x24000);
          if (__n_01 < 0x24001) {
            if (0 < (int)__n_01) {
              __n_00 = fwrite(mp3buffer,1,__n_01,(FILE *)outf);
              if (__n_00 != __n_01) {
                error_printf("Error writing ID3v1 tag \n");
                iVar2 = 1;
                goto LAB_0804bc72;
              }
              if (flush_write == 1) {
                fflush((FILE *)outf);
              }
            }
          }
          else {
            error_printf(
                         "Error writing ID3v1 tag: buffer too small: buffer size=%d  ID3v1 size=%d\n"
                         ,0x24000,__n_01);
          }
          if (silent < 1) {
            print_lame_tag_leading_info(gf);
          }
          iVar2 = fseek((FILE *)outf,__n,0);
          if (iVar2 == 0) {
            write_xing_frame(gf,outf);
          }
          else {
            error_printf("fatal error: can\'t update LAME-tag frame!\n");
          }
          if (silent < 1) {
            print_trailing_info(gf);
          }
          iVar2 = 0;
        }
        else {
          error_printf("Error writing mp3 output \n");
          iVar2 = 1;
        }
      }
    }
    else {
      encoder_progress_end(gf);
      error_printf("Error writing ID3v2 tag \n");
      iVar2 = 1;
    }
  }
  else {
    encoder_progress_end(gf);
    error_printf("Error writing ID3v2 tag: buffer too small: buffer size=%d  ID3v2 size=%d\n",
                 0x24000,__n);
    iVar2 = 1;
  }
LAB_0804bc72:
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void brhist_init_package(lame_global_flags *gf)

{
  int bitrate_kbps_max;
  int bitrate_kbps_min;
  
  if (brhist == 0) {
    brhist_init(gf,0x80,0x80);
  }
  else {
    bitrate_kbps_max = lame_get_VBR_max_bitrate_kbps(gf);
    bitrate_kbps_min = lame_get_VBR_min_bitrate_kbps(gf);
    bitrate_kbps_max = brhist_init(gf,bitrate_kbps_min,bitrate_kbps_max);
    if (bitrate_kbps_max != 0) {
      brhist = 0;
    }
  }
  return;
}



void parse_nogap_filenames(int nogapout,char *inPath,char *outPath,char *outdir)

{
  size_t sVar1;
  size_t n;
  char *slasher;
  
  strcpy(outPath,outdir);
  if (nogapout != 0) {
    slasher = inPath + 0xffd;
    while (((*slasher != '/' && (*slasher != '\\')) && ((slasher != inPath && (*slasher != ':')))))
    {
      slasher = slasher + -1;
    }
    if ((slasher == inPath) ||
       (((sVar1 = strlen(outPath), outPath[sVar1 - 1] != '/' &&
         (sVar1 = strlen(outPath), outPath[sVar1 - 1] != '\\')) &&
        (sVar1 = strlen(outPath), outPath[sVar1 - 1] != ':')))) {
      if ((((slasher == inPath) && (sVar1 = strlen(outPath), outPath[sVar1 - 1] != '/')) &&
          (sVar1 = strlen(outPath), outPath[sVar1 - 1] != '\\')) &&
         (sVar1 = strlen(outPath), outPath[sVar1 - 1] != ':')) {
        strcat(outPath,"/");
      }
    }
    else {
      slasher = slasher + 1;
    }
    strncat(outPath,slasher,0xffd);
    sVar1 = strlen(outPath);
    if (((outPath[sVar1 - 3] == 'w') && (outPath[sVar1 - 2] == 'a')) &&
       ((outPath[sVar1 - 1] == 'v' && (outPath[sVar1 - 4] == '.')))) {
      outPath[sVar1 - 3] = 'm';
      outPath[sVar1 - 2] = 'p';
      outPath[sVar1 - 1] = '3';
    }
    else {
      outPath[sVar1] = '.';
      outPath[sVar1 + 1] = 'm';
      outPath[sVar1 + 2] = 'p';
      outPath[sVar1 + 3] = '3';
      outPath[sVar1 + 4] = '\0';
    }
    return;
  }
  strncpy(outPath,inPath,0xffd);
  sVar1 = strlen(outPath);
  if ((((outPath[sVar1 - 3] == 'w') && (outPath[sVar1 - 2] == 'a')) && (outPath[sVar1 - 1] == 'v'))
     && (outPath[sVar1 - 4] == '.')) {
    outPath[sVar1 - 3] = 'm';
    outPath[sVar1 - 2] = 'p';
    outPath[sVar1 - 1] = '3';
    return;
  }
  outPath[sVar1] = '.';
  outPath[sVar1 + 1] = 'm';
  outPath[sVar1 + 2] = 'p';
  outPath[sVar1 + 3] = '3';
  outPath[sVar1 + 4] = '\0';
  return;
}



int main(int argc,char **argv)

{
  char *p;
  int iVar1;
  uint uVar2;
  int in_GS_OFFSET;
  char nogap_inPath_ [200] [4097];
  char *nogap_inPath [200];
  int use_flush_nogap;
  FILE *outf;
  int i;
  int max_nogap;
  int nogapout;
  int enc_padding;
  int enc_delay;
  lame_global_flags *gf;
  int ret;
  char inPath [4097];
  char nogapdir [4097];
  char outPath [4097];
  char acStack832564 [819400];
  char *local_336c [200];
  uint local_304c;
  FILE *local_3048;
  uint local_3044;
  int local_3040;
  int local_303c;
  int local_3038;
  int local_3034;
  lame_global_flags *local_3030;
  uint local_302c;
  char local_3027 [4097];
  char local_2026 [4097];
  char local_1025 [4097];
  int local_24;
  
  local_24 = *(int *)(in_GS_OFFSET + 0x14);
  local_3034 = -1;
  local_3038 = -1;
  local_303c = 0;
  local_3040 = 200;
  memset(acStack832564,0,0xc80c8);
  local_3044 = 0;
  while ((int)local_3044 < 200) {
    local_336c[local_3044] = acStack832564 + local_3044 * 0x1001;
    local_3044 = local_3044 + 1;
  }
  memset(local_3027,0,0x1001);
  frontend_open_console();
  input_format = sf_unknown;
  local_3030 = (lame_global_flags *)lame_init();
  if (local_3030 == (lame_global_flags *)0x0) {
    error_printf("fatal error during initialization\n");
    frontend_close_console();
    uVar2 = 1;
  }
  else {
    lame_set_errorf(local_3030,frontend_errorf);
    lame_set_debugf(local_3030,frontend_debugf);
    lame_set_msgf(local_3030,frontend_msgf);
    if (argc < 2) {
      usage(stderr,*argv);
      lame_close(local_3030);
      frontend_close_console();
      uVar2 = 1;
    }
    else {
      p = getenv("LAMEOPT");
      parse_args_from_string(local_3030,p,local_3027,local_1025);
      local_302c = parse_args(local_3030,argc,argv,local_3027,local_1025,local_336c,&local_3040);
      if ((int)local_302c < 0) {
        lame_close(local_3030);
        frontend_close_console();
        uVar2 = (uint)(local_302c != 0xfffffffe);
      }
      else {
        if (update_interval < 0.00000000) {
          update_interval = 2.00000000;
        }
        if ((local_1025[0] != '\0') && (0 < local_3040)) {
          strncpy(local_2026,local_1025,0x1001);
          local_303c = 1;
        }
        if (local_3040 < 1) {
          local_3048 = init_files(local_3030,local_3027,local_1025,&local_3034,&local_3038);
        }
        else {
          parse_nogap_filenames(local_303c,local_336c[0],local_1025,local_2026);
          local_3048 = init_files(local_3030,local_336c[0],local_1025,&local_3034,&local_3038);
        }
        if (local_3048 == (FILE *)0x0) {
          lame_close(local_3030);
          frontend_close_console();
          uVar2 = 0xffffffff;
        }
        else {
          lame_set_write_id3tag_automatic(local_3030,0);
          local_3044 = lame_init_params(local_3030);
          if ((int)local_3044 < 0) {
            if (local_3044 == 0xffffffff) {
              display_bitrates(stderr);
            }
            error_printf("fatal error during initialization\n");
            lame_close(local_3030);
            frontend_close_console();
            uVar2 = local_3044;
          }
          else {
            if (0 < silent) {
              brhist = 0;
            }
            iVar1 = lame_get_decode_only(local_3030);
            if (iVar1 == 0) {
              if (local_3040 < 1) {
                brhist_init_package(local_3030);
                local_302c = lame_encoder(local_3030,local_3048,0,local_3027,local_1025);
                fclose((FILE *)local_3048);
                close_infile();
              }
              else {
                local_3044 = 0;
                while ((int)local_3044 < local_3040) {
                  local_304c = (uint)(local_3040 - 1U != local_3044);
                  if (0 < (int)local_3044) {
                    parse_nogap_filenames(local_303c,local_336c[local_3044],local_1025,local_2026);
                    local_3048 = init_files(local_3030,local_336c[local_3044],local_1025,&local_3034
                                            ,&local_3038);
                    lame_init_bitstream(local_3030);
                  }
                  brhist_init_package(local_3030);
                  lame_set_nogap_total(local_3030,local_3040);
                  lame_set_nogap_currentindex(local_3030,local_3044);
                  local_302c = lame_encoder(local_3030,local_3048,local_304c,local_336c[local_3044],
                                            local_1025);
                  fclose((FILE *)local_3048);
                  close_infile();
                  local_3044 = local_3044 + 1;
                }
              }
            }
            else {
              if (mp3_delay_set == 0) {
                lame_decoder(local_3030,local_3048,0,local_3027,local_1025,&local_3034,&local_3038);
              }
              else {
                lame_decoder(local_3030,local_3048,mp3_delay,local_3027,local_1025,&local_3034,
                             &local_3038);
              }
            }
            lame_close(local_3030);
            frontend_close_console();
            uVar2 = local_302c;
          }
        }
      }
    }
  }
  if (local_24 == *(int *)(in_GS_OFFSET + 0x14)) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int my_console_printing(FILE *fp,char *format,va_list ap)

{
  int iVar1;
  
  if (fp == (FILE *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = vfprintf((FILE *)fp,format,ap);
  }
  return iVar1;
}



int my_error_printing(FILE *fp,char *format,va_list ap)

{
  int iVar1;
  
  if (fp == (FILE *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = vfprintf((FILE *)fp,format,ap);
  }
  return iVar1;
}



int my_report_printing(FILE *fp,char *format,va_list ap)

{
  int iVar1;
  
  if (fp == (FILE *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = vfprintf((FILE *)fp,format,ap);
  }
  return iVar1;
}



void apply_termcap_settings(Console_IO_t *mfp)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int in_GS_OFFSET;
  int val;
  char *tp;
  char *term_name;
  char term_buff [2048];
  char tc [10];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  pcVar2 = getenv("TERM");
  if ((pcVar2 != (char *)0x0) && (iVar3 = tgetent(term_buff,pcVar2), iVar3 == 1)) {
    iVar3 = tgetnum(&DAT_08054f35);
    if ((0x27 < iVar3) && (iVar3 < 0x201)) {
      mfp->disp_width = iVar3;
    }
    iVar3 = tgetnum(&DAT_08054f38);
    if ((0xf < iVar3) && (iVar3 < 0x101)) {
      mfp->disp_height = iVar3;
    }
    tp = tc;
    tc[0] = '\0';
    tp = (char *)tgetstr(&DAT_08054f3b,&tp);
    if (tp != (char *)0x0) {
      strcpy(mfp->str_up,tp);
    }
    tp = tc;
    tc[0] = '\0';
    tp = (char *)tgetstr(&DAT_08054f3e,&tp);
    if (tp != (char *)0x0) {
      strcpy(mfp->str_clreoln,tp);
    }
    tp = tc;
    tc[0] = '\0';
    tp = (char *)tgetstr(&DAT_08054f41,&tp);
    if (tp != (char *)0x0) {
      strcpy(mfp->str_emph,tp);
    }
    tp = tc;
    tc[0] = '\0';
    tp = (char *)tgetstr(&DAT_08054f44,&tp);
    if (tp != (char *)0x0) {
      strcpy(mfp->str_norm,tp);
    }
  }
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int init_console(Console_IO_t *mfp)

{
  mfp->disp_width = 0x50;
  mfp->disp_height = 0x19;
  mfp->Console_fp = stderr;
  mfp->Error_fp = stderr;
  mfp->Report_fp = (FILE *)0x0;
  setvbuf((FILE *)mfp->Console_fp,mfp->Console_buff,0,0x800);
  memcpy(mfp->str_up,&DAT_08054f47,4);
  apply_termcap_settings(mfp);
  mfp->ClassID = 0x434f4e53;
  mfp->Console_file_type = 0;
  return 0;
}



void deinit_console(Console_IO_t *mfp)

{
  if (mfp->Report_fp != (FILE *)0x0) {
    fclose((FILE *)mfp->Report_fp);
    mfp->Report_fp = (FILE *)0x0;
  }
  fflush((FILE *)mfp->Console_fp);
  setvbuf((FILE *)mfp->Console_fp,(char *)0x0,2,0);
  memset(mfp->Console_buff,0x55,0x400);
  return;
}



int frontend_open_console(void)

{
  int iVar1;
  
  iVar1 = init_console(&Console_IO);
  return iVar1;
}



void frontend_close_console(void)

{
  deinit_console(&Console_IO);
  return;
}



void frontend_debugf(char *format,va_list ap)

{
  my_report_printing(Console_IO.Report_fp,format,ap);
  return;
}



void frontend_msgf(char *format,va_list ap)

{
  my_console_printing(Console_IO.Console_fp,format,ap);
  return;
}



void frontend_errorf(char *format,va_list ap)

{
  my_error_printing(Console_IO.Error_fp,format,ap);
  return;
}



int console_printf(char *format,...)

{
  int iVar1;
  int ret;
  va_list args;
  
  iVar1 = my_console_printing(Console_IO.Console_fp,format,&stack0x00000008);
  return iVar1;
}



int error_printf(char *format,...)

{
  int iVar1;
  int ret;
  va_list args;
  
  iVar1 = my_console_printing(Console_IO.Error_fp,format,&stack0x00000008);
  return iVar1;
}



int report_printf(char *format,...)

{
  int iVar1;
  int ret;
  va_list args;
  
  iVar1 = my_console_printing(Console_IO.Report_fp,format,&stack0x00000008);
  return iVar1;
}



void console_flush(void)

{
  fflush((FILE *)Console_IO.Console_fp);
  return;
}



void error_flush(void)

{
  fflush((FILE *)Console_IO.Error_fp);
  return;
}



void report_flush(void)

{
  fflush((FILE *)Console_IO.Report_fp);
  return;
}



void console_up(int n_lines)

{
  bool bVar1;
  
  while (bVar1 = 0 < n_lines, n_lines = n_lines + -1, bVar1) {
    fputs(Console_IO.str_up,(FILE *)Console_IO.Console_fp);
  }
  console_flush();
  return;
}



void set_debug_file(char *fn)

{
  if (Console_IO.Report_fp == (FILE *)0x0) {
    Console_IO.Report_fp = (FILE *)fopen64(fn,"a");
    if (Console_IO.Report_fp == (FILE *)0x0) {
      error_printf("Error: can\'t open for debug info: %s\n",fn);
    }
    else {
      error_printf("writing debug info into: %s\n",fn);
    }
  }
  return;
}



size_t min_size_t(size_t a,size_t b)

{
  if (a < b) {
    b = a;
  }
  return b;
}



ByteOrder machine_byte_order(void)

{
  long one;
  
  return ByteOrderLittleEndian;
}



int fskip(FILE *fp,long offset,int whence)

{
  int iVar1;
  int __fd;
  size_t __n;
  size_t sVar2;
  int in_GS_OFFSET;
  stat file_stat;
  size_t read_1;
  size_t bytes_to_skip_1;
  size_t read;
  size_t bytes_to_skip;
  int fd;
  char buffer [4096];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  __fd = fileno((FILE *)fp);
  __fd = fstat64(__fd,(stat64 *)&file_stat);
  if ((__fd == 0) && ((file_stat.st_mode & 0xf000) == 0x1000)) {
    if ((whence == 1) && (-1 < offset)) {
      while (0 < offset) {
        __n = min_size_t(0x1000,offset);
        sVar2 = fread(buffer,1,__n,(FILE *)fp);
        if (sVar2 == 0) {
          __fd = -1;
          goto LAB_0804ce7a;
        }
        offset = offset - sVar2;
      }
      __fd = 0;
    }
    else {
      __fd = -1;
    }
  }
  else {
    __fd = fseek((FILE *)fp,offset,whence);
    if (__fd == 0) {
      __fd = 0;
    }
    else {
      if ((whence == 1) && (-1 < offset)) {
        while (0 < offset) {
          __n = min_size_t(0x1000,offset);
          sVar2 = fread(buffer,1,__n,(FILE *)fp);
          if (sVar2 == 0) {
            __fd = -1;
            goto LAB_0804ce7a;
          }
          offset = offset - sVar2;
        }
        __fd = 0;
      }
      else {
        if (silent < 10) {
          error_printf(
                      "fskip problem: Mostly the return status of functions is not evaluate so it is more secure to polute <stderr>.\n"
                      );
        }
        __fd = -1;
      }
    }
  }
LAB_0804ce7a:
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return __fd;
}



FILE * init_outfile(char *outPath,int decode)

{
  int iVar1;
  FILE *pFVar2;
  FILE *outf;
  
  iVar1 = strcmp(outPath,"-");
  pFVar2 = stdout;
  if (iVar1 == 0) {
    lame_set_stream_binary_mode(stdout);
  }
  else {
    pFVar2 = (FILE *)fopen64(outPath,"w+b");
    if (pFVar2 == (FILE *)0x0) {
      pFVar2 = (FILE *)0x0;
    }
  }
  return pFVar2;
}



void init_infile(lame_global_flags *gfp,char *inPath,int *enc_delay,int *enc_padding)

{
  global.count_samples_carefully = 0;
  global.num_samples_read = 0;
  global.pcmbitwidth = in_bitwidth;
  global.pcmswapbytes = swapbytes;
  global.pcm_is_unsigned_8bit = ZEXT14(in_signed != 1);
  global.musicin = OpenSndFile(gfp,inPath,enc_delay,enc_padding);
  return;
}



void close_infile(void)

{
  CloseSndFile(input_format,global.musicin);
  return;
}



void SwapBytesInWords(short *ptr,int short_words)

{
  ulong *p;
  ulong val;
  
  p = (ulong *)ptr;
  while (1 < short_words) {
    *p = (*p & 0xff00ff) << 8 | *p >> 8 & 0xff00ff;
    short_words = short_words + -2;
    p = p + 1;
  }
  ptr = (short *)p;
  while (0 < short_words) {
    *ptr = (ushort)((uint)(int)*ptr >> 8) & 0xff | (ushort)((int)*ptr << 8);
    short_words = short_words + -1;
    ptr = ptr + 1;
  }
  return;
}



int get_audio(lame_global_flags *gfp,int (*buffer) [1152])

{
  int iVar1;
  
  iVar1 = get_audio_common(gfp,buffer,(short (*) [1152])0x0);
  return iVar1;
}



int get_audio16(lame_global_flags *gfp,short (*buffer) [1152])

{
  int iVar1;
  
  iVar1 = get_audio_common(gfp,(int (*) [1152])0x0,buffer);
  return iVar1;
}



int get_audio_common(lame_global_flags *gfp,int (*buffer) [1152],short (*buffer16) [1152])

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int insamp [2304];
  short buf_tmp16 [2] [1152];
  int *p;
  int i;
  uint tmp_num_samples;
  uint remaining;
  int samples_to_read;
  int framesize;
  int samples_read;
  int num_channels;
  
  iVar1 = lame_get_num_channels(gfp);
  samples_to_read = lame_get_framesize(gfp);
  uVar2 = lame_get_num_samples(gfp);
  if (global.count_samples_carefully != 0) {
    uVar3 = uVar2;
    if (global.num_samples_read <= uVar2) {
      uVar3 = global.num_samples_read;
    }
    if ((uVar2 - uVar3 < (uint)samples_to_read) && (uVar2 != 0)) {
      samples_to_read = uVar2 - uVar3;
    }
  }
  iVar4 = is_mpeg_file_format(input_format);
  if (iVar4 == 0) {
    samples_read = read_samples_pcm(global.musicin,insamp,iVar1 * samples_to_read);
    if (samples_read < 0) {
      return samples_read;
    }
    p = insamp + samples_read;
    samples_read = samples_read / iVar1;
    i = samples_read;
    if (buffer == (int (*) [1152])0x0) {
      if (iVar1 == 2) {
        while (i = i + -1, -1 < i) {
          (buffer16 + 1)[i] = (short)((uint)p[-1] >> 0x10);
          p = p + -2;
          (*buffer16)[i] = (short)((uint)*p >> 0x10);
        }
      }
      else {
        if (iVar1 == 1) {
          memset(buffer16 + 1,0,samples_read * 2);
          while (i = i + -1, -1 < i) {
            p = p + -1;
            (*buffer16)[i] = (short)((uint)*p >> 0x10);
          }
        }
      }
    }
    else {
      if (iVar1 == 2) {
        while (i = i + -1, -1 < i) {
          (buffer + 1)[i] = p[-1];
          p = p + -2;
          (*buffer)[i] = *p;
        }
      }
      else {
        if (iVar1 == 1) {
          memset(buffer + 1,0,samples_read * 4);
          while (i = i + -1, -1 < i) {
            p = p + -1;
            (*buffer)[i] = *p;
          }
        }
      }
    }
  }
  else {
    if (buffer == (int (*) [1152])0x0) {
      samples_read = read_samples_mp3(gfp,global.musicin,buffer16);
    }
    else {
      samples_read = read_samples_mp3(gfp,global.musicin,(short (*) [1152])buf_tmp16);
    }
    if (samples_read < 0) {
      return samples_read;
    }
  }
  iVar4 = is_mpeg_file_format(input_format);
  if ((iVar4 != 0) && (buffer != (int (*) [1152])0x0)) {
    i = samples_read;
    while (i = i + -1, -1 < i) {
      (*buffer)[i] = (int)buf_tmp16[i] << 0x10;
    }
    if (iVar1 == 2) {
      i = samples_read;
      while (iVar1 = i + -1, -1 < iVar1) {
        (buffer + 1)[iVar1] = (int)buf_tmp16[i + 0x47f] << 0x10;
        i = iVar1;
      }
    }
    else {
      if (iVar1 == 1) {
        memset(buffer + 1,0,samples_read * 4);
      }
    }
  }
  if (uVar2 != 0xffffffff) {
    global.num_samples_read = global.num_samples_read + samples_read;
  }
  return samples_read;
}



int read_samples_mp3(lame_global_flags *gfp,FILE *musicin,short (*mpg123pcm) [1152])

{
  char "MP3 file" [9];
  int iVar1;
  int out;
  
  out = lame_decode_fromfile(musicin,(short *)mpg123pcm,(short *)(mpg123pcm + 1),&mp3input_data);
  if (out < 0) {
    memset(mpg123pcm,0,0x1200);
    out = 0;
  }
  else {
    iVar1 = lame_get_num_channels(gfp);
    if (iVar1 != mp3input_data.stereo) {
      if (silent < 10) {
        error_printf("Error: number of channels has changed in %s - not supported\n","MP3 file");
      }
      out = -1;
    }
    iVar1 = lame_get_in_samplerate(gfp);
    if (iVar1 != mp3input_data.samplerate) {
      if (silent < 10) {
        error_printf("Error: sample frequency has changed in %s - not supported\n",0x80554b5);
      }
      out = -1;
    }
  }
  return out;
}



int WriteWaveHeader(FILE *fp,int pcmbytes,int freq,int channels,int bits)

{
  int iVar1;
  int bytes;
  
  iVar1 = bits + 7;
  if (bits + 7 < 0) {
    iVar1 = bits + 0xe;
  }
  fwrite(&DAT_0805508b,1,4,(FILE *)fp);
  Write32BitsLowHigh(fp,pcmbytes + 0x24);
  fwrite("WAVEfmt ",2,4,(FILE *)fp);
  Write32BitsLowHigh(fp,0x10);
  Write16BitsLowHigh(fp,1);
  Write16BitsLowHigh(fp,channels);
  Write32BitsLowHigh(fp,freq);
  Write32BitsLowHigh(fp,freq * channels * (iVar1 >> 3));
  Write16BitsLowHigh(fp,channels * (iVar1 >> 3));
  Write16BitsLowHigh(fp,bits);
  fwrite(&DAT_08055099,1,4,(FILE *)fp);
  Write32BitsLowHigh(fp,pcmbytes);
  iVar1 = ferror((FILE *)fp);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



int unpack_read_samples(int samples_to_read,int bytes_per_sample,int swap_order,int *sample_buffer,
                       FILE *pcm_in)

{
  int iVar1;
  size_t sVar2;
  int b;
  uchar *ip;
  int *op;
  int i;
  size_t samples_read;
  
  sVar2 = fread(sample_buffer,bytes_per_sample,samples_to_read,(FILE *)pcm_in);
  op = sample_buffer + sVar2;
  i = sVar2;
  if (swap_order == 0) {
    if (bytes_per_sample == 1) {
      while (i = i + -1, -1 < i) {
        op = op + -1;
        *op = (uint)*(byte *)(i + (int)sample_buffer) << 0x18;
      }
    }
    if (bytes_per_sample == 2) {
      i = sVar2 * 2;
      while (iVar1 = i + -2, -1 < iVar1) {
        op = op + -1;
        *op = (uint)*(byte *)(iVar1 + (int)sample_buffer) << 0x10 |
              (uint)*(byte *)(i + -1 + (int)sample_buffer) << 0x18;
        i = iVar1;
      }
    }
    if (bytes_per_sample == 3) {
      i = sVar2 * 3;
      while (iVar1 = i + -3, -1 < iVar1) {
        op = op + -1;
        *op = (uint)*(byte *)(iVar1 + (int)sample_buffer) << 8 |
              (uint)*(byte *)(i + -2 + (int)sample_buffer) << 0x10 |
              (uint)*(byte *)(i + -1 + (int)sample_buffer) << 0x18;
        i = iVar1;
      }
    }
    if (bytes_per_sample == 4) {
      i = sVar2 * 4;
      while (iVar1 = i + -4, -1 < iVar1) {
        op = op + -1;
        *op = CONCAT13(*(undefined *)(i + -1 + (int)sample_buffer),
                       CONCAT12(*(undefined *)(i + -2 + (int)sample_buffer),
                                CONCAT11(*(undefined *)(i + -3 + (int)sample_buffer),
                                         *(undefined *)(iVar1 + (int)sample_buffer))));
        i = iVar1;
      }
    }
  }
  else {
    if (bytes_per_sample == 1) {
      while (i = i + -1, -1 < i) {
        op = op + -1;
        *op = (uint)(*(byte *)(i + (int)sample_buffer) ^ 0x80) << 0x18 | 0x7f0000;
      }
    }
    if (bytes_per_sample == 2) {
      i = sVar2 * 2;
      while (iVar1 = i + -2, -1 < iVar1) {
        op = op + -1;
        *op = (uint)*(byte *)(iVar1 + (int)sample_buffer) << 0x18 |
              (uint)*(byte *)(i + -1 + (int)sample_buffer) << 0x10;
        i = iVar1;
      }
    }
    if (bytes_per_sample == 3) {
      i = sVar2 * 3;
      while (iVar1 = i + -3, -1 < iVar1) {
        op = op + -1;
        *op = (uint)*(byte *)(iVar1 + (int)sample_buffer) << 0x18 |
              (uint)*(byte *)(i + -2 + (int)sample_buffer) << 0x10 |
              (uint)*(byte *)(i + -1 + (int)sample_buffer) << 8;
        i = iVar1;
      }
    }
    if (bytes_per_sample == 4) {
      i = sVar2 * 4;
      while (iVar1 = i + -4, -1 < iVar1) {
        op = op + -1;
        *op = (uint)*(byte *)(iVar1 + (int)sample_buffer) << 0x18 |
              (uint)*(byte *)(i + -3 + (int)sample_buffer) << 0x10 |
              (uint)*(byte *)(i + -2 + (int)sample_buffer) << 8 |
              (uint)*(byte *)(i + -1 + (int)sample_buffer);
        i = iVar1;
      }
    }
  }
  return sVar2;
}



int read_samples_pcm(FILE *musicin,int *sample_buffer,int samples_to_read)

{
  int iVar1;
  bool bVar2;
  int swap_byte_order;
  int samples_read;
  
  if (global.pcmbitwidth != 0x10) {
    if (global.pcmbitwidth < 0x11) {
      if (global.pcmbitwidth != 8) goto LAB_0804da8b;
      samples_read = unpack_read_samples(samples_to_read,1,global.pcm_is_unsigned_8bit,sample_buffer
                                         ,musicin);
      goto LAB_0804daad;
    }
    if ((global.pcmbitwidth != 0x18) && (global.pcmbitwidth != 0x20)) {
LAB_0804da8b:
      if (silent < 10) {
        error_printf("Only 8, 16, 24 and 32 bit input files supported \n");
      }
                    // WARNING: Subroutine does not return
      exit(1);
    }
  }
  if (in_signed == 0) {
    error_printf("Unsigned input only supported with bitwidth 8\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  bVar2 = in_endian != ByteOrderLittleEndian;
  if (global.pcmswapbytes != 0) {
    bVar2 = !bVar2;
  }
  swap_byte_order = ZEXT14(bVar2);
  iVar1 = global.pcmbitwidth;
  if (global.pcmbitwidth < 0) {
    iVar1 = global.pcmbitwidth + 7;
  }
  samples_read = unpack_read_samples(samples_to_read,iVar1 >> 3,swap_byte_order,sample_buffer,
                                     musicin);
LAB_0804daad:
  iVar1 = ferror((FILE *)musicin);
  if (iVar1 == 0) {
    return samples_read;
  }
  if (silent < 10) {
    error_printf("Error reading input file\n");
  }
                    // WARNING: Subroutine does not return
  exit(1);
}



int parse_wave_header(lame_global_flags *gfp,FILE *sf)

{
  bool bVar1;
  int offset;
  int type;
  int loop_sanity;
  long subSize;
  long file_length;
  long data_length;
  int is_wav;
  int avg_bytes_per_sec;
  int samples_per_sec;
  int bits_per_sample;
  int block_align;
  int channels;
  int format_tag;
  
  format_tag = 0;
  channels = 0;
  bits_per_sample = 0;
  samples_per_sec = 0;
  bVar1 = false;
  data_length = 0;
  Read32BitsHighLow(sf);
  offset = Read32BitsHighLow(sf);
  if (offset == 0x57415645) {
    loop_sanity = 0;
    while (loop_sanity < 0x14) {
      offset = Read32BitsHighLow(sf);
      if (offset == 0x666d7420) {
        offset = Read32Bits(sf);
        if (offset < 0x10) {
          return -1;
        }
        format_tag = Read16BitsLowHigh(sf);
        channels = Read16BitsLowHigh(sf);
        samples_per_sec = Read32Bits(sf);
        Read32Bits(sf);
        Read16BitsLowHigh(sf);
        bits_per_sample = Read16BitsLowHigh(sf);
        subSize = offset + -0x10;
        if ((9 < subSize) && (format_tag == -2)) {
          Read16BitsLowHigh(sf);
          Read16BitsLowHigh(sf);
          Read32Bits(sf);
          format_tag = Read16BitsLowHigh(sf);
          subSize = offset + -0x1a;
        }
        if ((0 < subSize) && (offset = fskip(sf,subSize,1), offset != 0)) {
          return -1;
        }
      }
      else {
        if (offset == 0x64617461) {
          data_length = Read32Bits(sf);
          bVar1 = true;
          break;
        }
        offset = Read32Bits(sf);
        offset = fskip(sf,offset,1);
        if (offset != 0) {
          return -1;
        }
      }
      loop_sanity = loop_sanity + 1;
    }
    if (bVar1) {
      if (format_tag == 1) {
        offset = lame_set_num_channels(gfp,channels);
        if (offset == -1) {
          if (silent < 10) {
            error_printf("Unsupported number of channels: %u\n",channels);
          }
          offset = 0;
        }
        else {
          lame_set_in_samplerate(gfp,samples_per_sec);
          global.pcmbitwidth = bits_per_sample;
          global.pcm_is_unsigned_8bit = 1;
          offset = bits_per_sample + 7;
          if (bits_per_sample + 7 < 0) {
            offset = bits_per_sample + 0xe;
          }
          lame_set_num_samples(gfp,data_length / ((offset >> 3) * channels));
          offset = 1;
        }
      }
      else {
        if (silent < 10) {
          error_printf("Unsupported data format: 0x%04X\n",format_tag);
        }
        offset = 0;
      }
    }
    else {
      offset = -1;
    }
  }
  else {
    offset = -1;
  }
  return offset;
}



int aiff_check2(IFF_AIFF *pcm_aiff_data)

{
  int iVar1;
  uint uVar2;
  
  if (pcm_aiff_data->sampleType == 0x53534e44) {
    uVar2 = (int)pcm_aiff_data->sampleSize - 8;
    if ((uVar2 < 0x19) && ((1 << ((byte)uVar2 & 0x1f) & 0x1010101U) != 0)) {
      if ((pcm_aiff_data->numChannels == 1) || (pcm_aiff_data->numChannels == 2)) {
        if ((pcm_aiff_data->blkAlgn).blockSize == 0) {
          iVar1 = 0;
        }
        else {
          if (silent < 10) {
            error_printf("ERROR: block size of input sound data is not 0 bytes\n");
          }
          iVar1 = 1;
        }
      }
      else {
        if (silent < 10) {
          error_printf("ERROR: input sound data is not mono or stereo\n");
        }
        iVar1 = 1;
      }
    }
    else {
      if (silent < 10) {
        error_printf("ERROR: input sound data is not 8, 16, 24 or 32 bits\n");
      }
      iVar1 = 1;
    }
  }
  else {
    if (silent < 10) {
      error_printf("ERROR: input sound data is not PCM\n");
    }
    iVar1 = 1;
  }
  return iVar1;
}



long make_even_number_of_bytes_in_length(long x)

{
  if ((x & 1U) != 0) {
    x = x + 1;
  }
  return x;
}



int parse_aiff_header(lame_global_flags *gfp,FILE *sf)

{
  int iVar1;
  int x;
  long offset;
  int iVar2;
  IFF_AIFF aiff_info;
  int type;
  long ckSize;
  long pcm_data_pos;
  int seen_ssnd_chunk;
  int seen_comm_chunk;
  long dataType;
  long typeID;
  long subSize;
  long chunkSize;
  
  dataType = 0x4e4f4e45;
  seen_comm_chunk = 0;
  seen_ssnd_chunk = 0;
  pcm_data_pos = -1;
  memset(&aiff_info,0,0x20);
  chunkSize = Read32BitsHighLow(sf);
  iVar1 = Read32BitsHighLow(sf);
  if ((iVar1 == 0x41494646) || (iVar1 == 0x41494643)) {
LAB_0804e165:
    do {
      if (chunkSize < 1) {
LAB_0804e172:
        if (dataType == 0x736f7774) {
          global.pcmswapbytes = swapbytes;
        }
        else {
          if (dataType == 0x74776f73) {
            global.pcmswapbytes = ZEXT14(swapbytes == 0);
          }
          else {
            if (dataType != 0x4e4f4e45) {
              return -1;
            }
            global.pcmswapbytes = ZEXT14(swapbytes == 0);
          }
        }
        if ((seen_comm_chunk == 0) || ((seen_ssnd_chunk == 0 && (aiff_info.numSampleFrames != 0))))
        {
          return -1;
        }
        iVar1 = aiff_check2(&aiff_info);
        if (iVar1 != 0) {
          return 0;
        }
        iVar1 = lame_set_num_channels(gfp,(int)aiff_info.numChannels);
        if (iVar1 == -1) {
          if (silent < 10) {
            error_printf("Unsupported number of channels: %u\n",(int)aiff_info.numChannels);
          }
          return 0;
        }
        lame_set_in_samplerate(gfp,(int)ROUND(aiff_info.sampleRate));
        lame_set_num_samples(gfp,aiff_info.numSampleFrames);
        global.pcmbitwidth = (int)aiff_info.sampleSize;
        global.pcm_is_unsigned_8bit = 0;
        if ((-1 < pcm_data_pos) && (iVar1 = fseek((FILE *)sf,pcm_data_pos,0), iVar1 != 0)) {
          if (silent < 10) {
            error_printf("Can\'t rewind stream to audio data position\n");
          }
          return 0;
        }
        return 1;
      }
      x = Read32BitsHighLow(sf);
      iVar2 = chunkSize + -4;
      if (x != 0x434f4d4d) {
        if (x == 0x53534e44) {
          seen_ssnd_chunk = 1;
          x = Read32BitsHighLow(sf);
          offset = make_even_number_of_bytes_in_length(x);
          chunkSize = iVar2 - offset;
          aiff_info.blkAlgn.offset = Read32BitsHighLow(sf);
          aiff_info.blkAlgn.blockSize = Read32BitsHighLow(sf);
          aiff_info.sampleType = 0x53534e44;
          if (seen_comm_chunk != 0) {
            iVar1 = fskip(sf,aiff_info.blkAlgn.offset,1);
            if (iVar1 != 0) {
              return -1;
            }
            goto LAB_0804e172;
          }
          pcm_data_pos = ftell((FILE *)sf);
          if (-1 < pcm_data_pos) {
            pcm_data_pos = aiff_info.blkAlgn.offset + pcm_data_pos;
          }
          iVar2 = fskip(sf,offset + -8,1);
          if (iVar2 != 0) {
            return -1;
          }
        }
        else {
          x = Read32BitsHighLow(sf);
          offset = make_even_number_of_bytes_in_length(x);
          chunkSize = iVar2 - offset;
          iVar2 = fskip(sf,offset,1);
          if (iVar2 != 0) {
            return -1;
          }
        }
        goto LAB_0804e165;
      }
      seen_comm_chunk = seen_ssnd_chunk + 1;
      x = Read32BitsHighLow(sf);
      offset = make_even_number_of_bytes_in_length(x);
      chunkSize = iVar2 - offset;
      iVar2 = Read16BitsHighLow(sf);
      aiff_info.numChannels = (short)iVar2;
      aiff_info.numSampleFrames = Read32BitsHighLow(sf);
      iVar2 = Read16BitsHighLow(sf);
      aiff_info.sampleSize = (short)iVar2;
      aiff_info.sampleRate = ReadIeeeExtendedHighLow(sf);
      ckSize = offset + -0x12;
      if (iVar1 == 0x41494643) {
        dataType = Read32BitsHighLow(sf);
        ckSize = offset + -0x16;
      }
      iVar2 = fskip(sf,ckSize,1);
    } while (iVar2 == 0);
  }
  return -1;
}



int parse_file_header(lame_global_flags *gfp,FILE *sf)

{
  int iVar1;
  int ret_1;
  int ret;
  int type;
  
  iVar1 = Read32BitsHighLow(sf);
  global.count_samples_carefully = 0;
  global.pcm_is_unsigned_8bit = ZEXT14(in_signed != 1);
  if (iVar1 == 0x52494646) {
    iVar1 = parse_wave_header(gfp,sf);
    if (0 < iVar1) {
      global.count_samples_carefully = 1;
      return 2;
    }
    if ((iVar1 < 0) && (silent < 10)) {
      error_printf("Warning: corrupt or unsupported WAVE format\n");
    }
  }
  else {
    if (iVar1 == 0x464f524d) {
      iVar1 = parse_aiff_header(gfp,sf);
      if (0 < iVar1) {
        global.count_samples_carefully = 1;
        return 3;
      }
      if ((iVar1 < 0) && (silent < 10)) {
        error_printf("Warning: corrupt or unsupported AIFF format\n");
      }
    }
    else {
      if (silent < 10) {
        error_printf("Warning: unsupported audio format\n");
      }
    }
  }
  return 0;
}



void CloseSndFile(sound_file_format input,FILE *musicin)

{
  int iVar1;
  
  iVar1 = fclose((FILE *)musicin);
  if (iVar1 != 0) {
    if (silent < 10) {
      error_printf("Could not close audio input file\n");
    }
                    // WARNING: Subroutine does not return
    exit(2);
  }
  return;
}



FILE * OpenSndFile(lame_global_flags *gfp,char *inPath,int *enc_delay,int *enc_padding)

{
  double dVar1;
  double dVar2;
  int iVar3;
  off_t oVar4;
  ulong local_3c;
  double totalseconds;
  double flen;
  ulong tmp_num_samples;
  FILE *musicin;
  
  lame_set_num_samples(gfp,0xffffffff);
  iVar3 = strcmp(inPath,"-");
  if (iVar3 == 0) {
    musicin = stdin;
    lame_set_stream_binary_mode(stdin);
  }
  else {
    musicin = (FILE *)fopen64(inPath,"rb");
    if (musicin == (FILE *)0x0) {
      if (silent < 10) {
        error_printf("Could not find \"%s\".\n",inPath);
      }
                    // WARNING: Subroutine does not return
      exit(1);
    }
  }
  iVar3 = is_mpeg_file_format(input_format);
  if (iVar3 == 0) {
    if (input_format == sf_ogg) {
      if (silent < 10) {
        error_printf("sorry, vorbis support in LAME is deprecated.\n");
      }
                    // WARNING: Subroutine does not return
      exit(1);
    }
    if (input_format == sf_raw) {
      if (silent < 10) {
        console_printf("Assuming raw pcm input file");
        if (swapbytes == 0) {
          console_printf("\n");
        }
        else {
          console_printf(" : Forcing byte-swapping\n");
        }
      }
      global.pcmswapbytes = swapbytes;
    }
    else {
      input_format = parse_file_header(gfp,musicin);
    }
  }
  else {
    iVar3 = lame_decode_initfile(musicin,&mp3input_data,enc_delay,enc_padding);
    if (iVar3 == -1) {
      if (silent < 10) {
        error_printf("Error reading headers in mp3 input file %s.\n",inPath);
      }
                    // WARNING: Subroutine does not return
      exit(1);
    }
    iVar3 = lame_set_num_channels(gfp,mp3input_data.stereo);
    if (iVar3 == -1) {
      if (silent < 10) {
        error_printf("Unsupported number of channels: %ud\n",mp3input_data.stereo);
      }
                    // WARNING: Subroutine does not return
      exit(1);
    }
    lame_set_in_samplerate(gfp,mp3input_data.samplerate);
    lame_set_num_samples(gfp,mp3input_data.nsamp);
  }
  if (input_format == sf_unknown) {
                    // WARNING: Subroutine does not return
    exit(1);
  }
  iVar3 = lame_get_num_samples(gfp);
  if ((iVar3 == -1) && (musicin != stdin)) {
    oVar4 = lame_get_file_size(inPath);
    dVar1 = (double)oVar4;
    if (0.00000000 <= dVar1) {
      iVar3 = is_mpeg_file_format(input_format);
      if (iVar3 == 0) {
        iVar3 = lame_get_num_channels(gfp);
        local_3c = (ulong)(longlong)ROUND(dVar1 / (double)(iVar3 * 2));
        lame_set_num_samples(gfp,local_3c);
      }
      else {
        if (0 < mp3input_data.bitrate) {
          dVar2 = (double)mp3input_data.bitrate;
          iVar3 = lame_get_in_samplerate(gfp);
          local_3c = (ulong)(longlong)
                            ROUND((double)iVar3 * ((dVar1 * 8.00000000) / (dVar2 * 1000.00000000)));
          lame_set_num_samples(gfp,local_3c);
          mp3input_data.nsamp = local_3c;
        }
      }
    }
  }
  return musicin;
}



int check_aid(uchar *header)

{
  int iVar1;
  
  iVar1 = memcmp(header,&DAT_0805540a,4);
  return (uint)(iVar1 == 0);
}



int is_syncword_mp123(void *headerptr)

{
  char "" [16];
  byte bVar1;
  int iVar2;
  uchar *p;
  
  if (*(char *)headerptr == -1) {
    if ((*(byte *)((int)headerptr + 1) & 0xe0) == 0xe0) {
      if ((*(byte *)((int)headerptr + 1) & 0x18) == 8) {
        iVar2 = 0;
      }
      else {
        bVar1 = *(byte *)((int)headerptr + 1) & 6;
        if (bVar1 == 4) {
          if ((input_format != sf_mp2) && (input_format != sf_mp123)) {
            return 0;
          }
          input_format = sf_mp2;
        }
        else {
          if (bVar1 == 6) {
            if ((input_format != sf_mp1) && (input_format != sf_mp123)) {
              return 0;
            }
            input_format = sf_mp1;
          }
          else {
            if (bVar1 != 2) {
              return 0;
            }
            if ((input_format != sf_mp3) && (input_format != sf_mp123)) {
              return 0;
            }
            input_format = sf_mp3;
          }
        }
        if ((*(byte *)((int)headerptr + 1) & 6) == 0) {
          iVar2 = 0;
        }
        else {
          if ((*(byte *)((int)headerptr + 2) & 0xf0) == 0xf0) {
            iVar2 = 0;
          }
          else {
            if ((*(byte *)((int)headerptr + 2) & 0xc) == 0xc) {
              iVar2 = 0;
            }
            else {
              if ((((*(byte *)((int)headerptr + 1) & 0x18) == 0x18) &&
                  ((*(byte *)((int)headerptr + 1) & 6) == 4)) &&
                 (((int)""[*(byte *)((int)headerptr + 2) >> 4] >>
                   (*(byte *)((int)headerptr + 3) >> 6) & 1U) != 0)) {
                iVar2 = 0;
              }
              else {
                if ((*(byte *)((int)headerptr + 3) & 3) == 2) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = 1;
                }
              }
            }
          }
        }
      }
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



// WARNING: Could not reconcile some variable overlaps

int lame_decode_initfile(FILE *fd,mp3data_struct *mp3data,int *enc_delay,int *enc_padding)

{
  bool bVar1;
  size_t sVar2;
  int iVar3;
  int in_GS_OFFSET;
  short pcm_r [1152];
  short pcm_l [1152];
  uint i;
  int freeformat;
  int aid_header;
  size_t len;
  int ret;
  uchar buf [100];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  bVar1 = false;
  memset(mp3data,0,0x28);
  if (global.hip != (hip_t)0x0) {
    hip_decode_exit(global.hip);
  }
  global.hip = (hip_t)hip_decode_init();
  sVar2 = fread(buf,1,4,(FILE *)fd);
  if (sVar2 == 4) {
    if (((buf[0] == 'I') && (buf[1] == 'D')) && (buf[2] == '3')) {
      if (silent < 10) {
        console_printf(
                      "ID3v2 found. Be aware that the ID3 tag is currently lost when transcoding.\n"
                      );
      }
      sVar2 = fread(buf,1,6,(FILE *)fd);
      if (sVar2 != 6) {
        iVar3 = -1;
        goto LAB_0804ee55;
      }
      buf[2] = buf[2] & 0x7f;
      buf[3] = buf[3] & 0x7f;
      buf[4] = buf[4] & 0x7f;
      buf[5] = buf[5] & 0x7f;
      fskip(fd,(((uint)buf[2] * 0x80 + (uint)buf[3]) * 0x80 + (uint)buf[4]) * 0x80 + (uint)buf[5],1)
      ;
      sVar2 = fread(buf,1,4,(FILE *)fd);
      if (sVar2 != 4) {
        iVar3 = -1;
        goto LAB_0804ee55;
      }
    }
    iVar3 = check_aid(buf);
    if (iVar3 != 0) {
      sVar2 = fread(buf,1,2,(FILE *)fd);
      if (sVar2 != 2) {
        iVar3 = -1;
        goto LAB_0804ee55;
      }
      if (silent < 10) {
        console_printf("Album ID found.  length=%i \n",(uint)buf._0_2_);
      }
      fskip(fd,(uint)buf._0_2_ - 6,1);
      sVar2 = fread(buf,1,4,(FILE *)fd);
      if (sVar2 != 4) {
        iVar3 = -1;
        goto LAB_0804ee55;
      }
    }
    do {
      iVar3 = is_syncword_mp123(buf);
      if (iVar3 != 0) {
        if ((buf[2] & 0xf0) == 0) {
          if (silent < 10) {
            console_printf("Input file is freeformat.\n");
          }
          bVar1 = true;
        }
        iVar3 = hip_decode1_headersB(global.hip,buf,4,pcm_l,pcm_r,mp3data,enc_delay,enc_padding);
        if (iVar3 != -1) goto LAB_0804edcf;
        iVar3 = -1;
        goto LAB_0804ee55;
      }
      i = 0;
      while (i < 3) {
        buf[i] = buf[i + 1];
        i = i + 1;
      }
      sVar2 = fread(buf + 3,1,1,(FILE *)fd);
    } while (sVar2 == 1);
    iVar3 = -1;
  }
  else {
    iVar3 = -1;
  }
  goto LAB_0804ee55;
  while( true ) {
    sVar2 = fread(buf,1,100,(FILE *)fd);
    if (sVar2 != 100) {
      iVar3 = -1;
      goto LAB_0804ee55;
    }
    iVar3 = hip_decode1_headersB(global.hip,buf,100,pcm_l,pcm_r,mp3data,enc_delay,enc_padding);
    if (iVar3 == -1) break;
LAB_0804edcf:
    if (mp3data->header_parsed != 0) {
      if ((mp3data->bitrate != 0) || (bVar1)) {
        if (mp3data->totalframes < 1) {
          mp3data->nsamp = 0xffffffff;
        }
        iVar3 = 0;
      }
      else {
        if (silent < 10) {
          error_printf("fail to sync...\n");
        }
        iVar3 = lame_decode_initfile(fd,mp3data,enc_delay,enc_padding);
      }
      goto LAB_0804ee55;
    }
  }
  iVar3 = -1;
LAB_0804ee55:
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int lame_decode_fromfile(FILE *fd,short *pcm_l,short *pcm_r,mp3data_struct *mp3data)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  int in_GS_OFFSET;
  size_t len;
  int ret;
  uchar buf [1024];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar2 = hip_decode1_headers(global.hip,buf,0,pcm_l,pcm_r,mp3data);
  if (iVar2 == 0) {
    do {
      sVar3 = fread(buf,1,0x400,(FILE *)fd);
      if (sVar3 == 0) {
        iVar2 = hip_decode1_headers(global.hip,buf,0,pcm_l,pcm_r,mp3data);
        if (iVar2 < 1) {
          hip_decode_exit(global.hip);
          global.hip = (hip_t)0x0;
          iVar2 = -1;
        }
        break;
      }
      iVar2 = hip_decode1_headers(global.hip,buf,sVar3,pcm_l,pcm_r,mp3data);
      if (iVar2 == -1) {
        hip_decode_exit(global.hip);
        global.hip = (hip_t)0x0;
        iVar2 = -1;
        break;
      }
    } while (iVar2 < 1);
  }
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



int is_mpeg_file_format(int input_file_format)

{
  if (input_file_format == 5) {
    return 2;
  }
  if (input_file_format < 6) {
    if (input_file_format == 4) {
      return 1;
    }
  }
  else {
    if (input_file_format == 6) {
      return 3;
    }
    if (input_file_format == 7) {
      return -1;
    }
  }
  return 0;
}



double GetCPUTime(void)

{
  clock_t cVar1;
  clock_t t;
  
  cVar1 = clock();
  return (double)cVar1 / 1000000.00000000;
}



double GetRealTime(void)

{
  timeval t;
  
  gettimeofday((timeval *)&t,(__timezone_ptr_t)0x0);
  return (double)t.tv_usec * 0.00000100 + (double)t.tv_sec;
}



int lame_set_stream_binary_mode(FILE *fp)

{
  return 0;
}



off_t lame_get_file_size(char *filename)

{
  int iVar1;
  stat sb;
  
  iVar1 = stat64(filename,(stat64 *)&sb);
  if (iVar1 != 0) {
    sb.st_size._0_4_ = 0xffffffff;
    sb.st_size._4_4_ = 0xffffffff;
  }
  return CONCAT44(sb.st_size._4_4_,(undefined4)sb.st_size);
}



int set_id3tag(lame_global_flags *gfp,int type,char *str)

{
  int iVar1;
  
  switch(type) {
  case 0x61:
    id3tag_set_artist(gfp,str);
    iVar1 = 0;
    break;
  default:
    iVar1 = 0;
    break;
  case 99:
    id3tag_set_comment(gfp,str);
    iVar1 = 0;
    break;
  case 0x67:
    iVar1 = id3tag_set_genre(gfp,str);
    break;
  case 0x6c:
    id3tag_set_album(gfp,str);
    iVar1 = 0;
    break;
  case 0x6e:
    iVar1 = id3tag_set_track(gfp,str);
    break;
  case 0x74:
    id3tag_set_title(gfp,str);
    iVar1 = 0;
    break;
  case 0x76:
    iVar1 = id3tag_set_fieldvalue(gfp,str);
    break;
  case 0x79:
    id3tag_set_year(gfp,str);
    iVar1 = 0;
  }
  return iVar1;
}



int id3_tag(lame_global_flags *gfp,int type,TextEncoding enc,char *str)

{
  char *str_00;
  int iVar1;
  int result;
  void *x;
  
  str_00 = strdup(str);
  iVar1 = set_id3tag(gfp,type,str_00);
  free(str_00);
  return iVar1;
}



int lame_version_print(FILE *fp)

{
  char *__s;
  char *__s_00;
  char *__s_01;
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sw;
  size_t lw;
  size_t lenu;
  size_t lenv;
  size_t lenb;
  char *u;
  char *v;
  char *b;
  
  __s = (char *)get_lame_os_bitness();
  __s_00 = (char *)get_lame_version();
  __s_01 = (char *)get_lame_url();
  sVar1 = strlen(__s);
  sVar2 = strlen(__s_00);
  sVar3 = strlen(__s_01);
  if ((sVar1 + sVar2 + sVar3 + 0x10 < 0x51) || (0x50 < sVar3 + 2)) {
    if (sVar1 == 0) {
      fprintf((FILE *)fp,"LAME version %s (%s)\n\n",__s_00,__s_01);
    }
    else {
      fprintf((FILE *)fp,"LAME %s version %s (%s)\n\n",__s,__s_00,__s_01);
    }
  }
  else {
    if (sVar1 == 0) {
      fprintf((FILE *)fp,"LAME version %s\n%*s(%s)\n\n",__s_00,0x4e - sVar3,&DAT_08055592,__s_01);
    }
    else {
      fprintf((FILE *)fp,"LAME %s version %s\n%*s(%s)\n\n",__s,__s_00,0x4e - sVar3,&DAT_08055592,
              __s_01);
    }
  }
  return 0;
}



int print_license(FILE *fp)

{
  lame_version_print(fp);
  fwrite(
         "Can I use LAME in my commercial program?\n\nYes, you can, under the restrictions of the LGPL.  In particular, you\ncan include a compiled version of the LAME library (for example,\nlame.dll) with a commercial program.  Some notable requirements of\nthe LGPL:\n\n"
         ,1,0xff,(FILE *)fp);
  fwrite(
         "1. In your program, you cannot include any source code from LAME, with\n   the exception of files whose only purpose is to describe the library\n   interface (such as lame.h).\n\n"
         ,1,0xaf,(FILE *)fp);
  fwrite(
         "2. Any modifications of LAME must be released under the LGPL.\n   The LAME project (www.mp3dev.org) would appreciate being\n   notified of any modifications.\n\n"
         ,1,0x9d,(FILE *)fp);
  fwrite(
         "3. You must give prominent notice that your program is:\n      A. using LAME (including version number)\n      B. LAME is under the LGPL\n      C. Provide a copy of the LGPL.  (the file COPYING contains the LGPL)\n      D. Provide a copy of LAME source, or a pointer where the LAME\n         source can be obtained (such as www.mp3dev.org)\n   An example of prominent notice would be an \"About the LAME encoding engine\"\n   button in some pull down menu within the executable of your program.\n\n"
         ,1,0x1e7,(FILE *)fp);
  fwrite(
         "4. If you determine that distribution of LAME requires a patent license,\n   you must obtain such license.\n\n\n"
         ,1,0x6c,(FILE *)fp);
  fwrite(
         "*** IMPORTANT NOTE ***\n\nThe decoding functions provided in LAME use the mpglib decoding engine which\nis under the GPL.  They may not be used by any program not released under the\nGPL unless you obtain such permission from the MPG123 project (www.mpg123.de).\n\n"
         ,1,0x103,(FILE *)fp);
  return 0;
}



int usage(FILE *fp,char *ProgramName)

{
  lame_version_print(fp);
  fprintf((FILE *)fp,
                    
          "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be \"-\", which means stdin/stdout.\n\nTry:\n     \"%s --help\"           for general usage information\n or:\n     \"%s --preset help\"    for information on suggested predefined settings\n or:\n     \"%s --longhelp\"\n  or \"%s -?\"              for a complete options list\n\n"
          ,ProgramName,ProgramName,ProgramName,ProgramName,ProgramName);
  return 0;
}



int short_help(lame_global_flags *gfp,FILE *fp,char *ProgramName)

{
  undefined4 uVar1;
  
  lame_version_print(fp);
  fprintf((FILE *)fp,
                    
          "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be \"-\", which means stdin/stdout.\n\nRECOMMENDED:\n    lame -V2 input.wav output.mp3\n\n"
          ,ProgramName);
  uVar1 = lame_get_VBR_q(gfp);
  fprintf((FILE *)fp,
                    
          "OPTIONS:\n    -b bitrate      set the bitrate, default 128 kbps\n    -h              higher quality, but a little slower.  Recommended.\n    -f              fast mode (lower quality)\n    -V n            quality setting for VBR.  default n=%i\n                    0=high quality,bigger files. 9=smaller files\n"
          ,uVar1);
  fwrite(
         "    --preset type   type must be \"medium\", \"standard\", \"extreme\", \"insane\",\n                    or a value for an average desired bitrate and depending\n                    on the value specified, appropriate quality settings will\n                    be used.\n                    \"--preset help\" gives more info on these\n\n"
         ,1,0x141,(FILE *)fp);
  fwrite(
         "    --longhelp      full list of options\n\n    --license       print License information\n\n"
         ,1,0x59,(FILE *)fp);
  return 0;
}



void wait_for(FILE *fp,int lessmode)

{
  if (lessmode == 0) {
    fputc(10,(FILE *)fp);
  }
  else {
    fflush((FILE *)fp);
    getchar();
  }
  fputc(10,(FILE *)fp);
  return;
}



int long_help(lame_global_flags *gfp,FILE *fp,char *ProgramName,int lessmode)

{
  undefined4 uVar1;
  
  lame_version_print(fp);
  fprintf((FILE *)fp,
                    
          "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be \"-\", which means stdin/stdout.\n\nRECOMMENDED:\n    lame -V2 input.wav output.mp3\n\n"
          ,ProgramName);
  fwrite(
         "OPTIONS:\n  Input options:\n    --scale <arg>   scale input (multiply PCM data) by <arg>\n    --scale-l <arg> scale channel 0 (left) input (multiply PCM data) by <arg>\n    --scale-r <arg> scale channel 1 (right) input (multiply PCM data) by <arg>\n    --mp1input      input file is a MPEG Layer I   file\n    --mp2input      input file is a MPEG Layer II  file\n    --mp3input      input file is a MPEG Layer III file\n    --nogap <file1> <file2> <...>\n                    gapless encoding for a set of contiguous files\n    --nogapout <dir>\n                    output dir for gapless encoding (must precede --nogap)\n    --nogaptags     allow the use of VBR tags in gapless encoding\n"
         ,1,0x2a3,(FILE *)fp);
  fwrite(
         "\n  Input options for RAW PCM:\n    -r              input is raw pcm\n    -x              force byte-swapping of input\n    -s sfreq        sampling frequency of input file (kHz) - default 44.1 kHz\n    --bitwidth w    input bit width is w (default 16)\n    --signed        input is signed (default)\n    --unsigned      input is unsigned\n    --little-endian input is little-endian (default)\n    --big-endian    input is big-endian\n"
         ,1,0x1a9,(FILE *)fp);
  wait_for(fp,lessmode);
  fwrite(
         "  Operational options:\n    -a              downmix from stereo to mono file for mono encoding\n    -m <mode>       (j)oint, (s)imple, (f)orce, (d)dual-mono, (m)ono\n                    default is (j) or (s) depending on bitrate\n                    joint  = joins the best possible of MS and LR stereo\n                    simple = force LR stereo on all frames\n                    force  = force MS stereo on all frames.\n    --preset type   type must be \"medium\", \"standard\", \"extreme\", \"insane\",\n                    or a value for an average desired bitrate and depending\n                    on the value specified, appropriate quality settings will\n                    be used.\n                    \"--preset help\" gives more info on these\n    --comp  <arg>   choose bitrate to achive a compression ratio of <arg>\n"
         ,1,0x32c,(FILE *)fp);
  fwrite(
         "    --replaygain-fast   compute RG fast but slightly inaccurately (default)\n    --replaygain-accurate   compute RG more accurately and find the peak sample\n    --noreplaygain  disable ReplayGain analysis\n    --clipdetect    enable --replaygain-accurate and print a message whether\n                    clipping occurs and how far the waveform is from full scale\n"
         ,1,0x169,(FILE *)fp);
  fwrite(
         "    --flush         flush output stream as soon as possible\n    --freeformat    produce a free format bitstream\n    --decode        input=mp3 file, output=wav\n    -t              disable writing wav header when using --decode\n"
         ,1,0xe2,(FILE *)fp);
  wait_for(fp,lessmode);
  fwrite(
         "  Verbosity:\n    --disptime <arg>print progress report every arg seconds\n    -S              don\'t print progress report, VBR histograms\n    --nohist        disable VBR histogram display\n    --silent        don\'t print anything on screen\n    --quiet         don\'t print anything on screen\n    --brief         print more useful information\n    --verbose       print a lot of useful information\n\n"
         ,1,0x18a,(FILE *)fp);
  fwrite(
         "  Noise shaping & psycho acoustic algorithms:\n    -q <arg>        <arg> = 0...9.  Default  -q 5 \n                    -q 0:  Highest quality, very slow \n                    -q 9:  Poor quality, but fast \n    -h              Same as -q 2.   Recommended.\n    -f              Same as -q 7.   Fast, ok quality\n"
         ,1,0x131,(FILE *)fp);
  wait_for(fp,lessmode);
  fwrite(
         "  CBR (constant bitrate, the default) options:\n    -b <bitrate>    set the bitrate in kbps, default 128 kbps\n    --cbr           enforce use of constant bitrate\n\n  ABR options:\n    --abr <bitrate> specify average bitrate desired (instead of quality)\n\n"
         ,1,0xfb,(FILE *)fp);
  uVar1 = lame_get_VBR_q(gfp);
  fprintf((FILE *)fp,
                    
          "  VBR options:\n    -V n            quality setting for VBR.  default n=%i\n                    0=high quality,bigger files. 9=smaller files\n    -v              the same as -V 4\n    --vbr-old       use old variable bitrate (VBR) routine\n    --vbr-new       use new variable bitrate (VBR) routine (default)\n"
          ,uVar1);
  fwrite(
         "    -b <bitrate>    specify minimum allowed bitrate, default  32 kbps\n    -B <bitrate>    specify maximum allowed bitrate, default 320 kbps\n    -F              strictly enforce the -b option, for use with players that\n                    do not support low bitrate mp3\n    -t              disable writing LAME Tag\n    -T              enable and force writing LAME Tag\n"
         ,1,0x170,(FILE *)fp);
  wait_for(fp,lessmode);
  fwrite("  PSY related:\n",1,0xf,(FILE *)fp);
  fwrite(
         "    --temporal-masking x   x=0 disables, x=1 enables temporal masking effect\n    --nssafejoint   M/S switching criterion\n    --nsmsfix <arg> M/S switching tuning [effective 0-3.5]\n    --interch x     adjust inter-channel masking ratio\n    --ns-bass x     adjust masking for sfbs  0 -  6 (long)  0 -  5 (short)\n    --ns-alto x     adjust masking for sfbs  7 - 13 (long)  6 - 10 (short)\n    --ns-treble x   adjust masking for sfbs 14 - 21 (long) 11 - 12 (short)\n"
         ,1,0x1cc,(FILE *)fp);
  fwrite("    --ns-sfb21 x    change ns-treble by x dB for sfb21\n",1,0x37,(FILE *)fp);
  wait_for(fp,lessmode);
  fwrite(
         "  experimental switches:\n    -Y              lets LAME ignore noise in sfb21, like in CBR\n"
         ,1,0x5a,(FILE *)fp);
  wait_for(fp,lessmode);
  fwrite(
         "  MP3 header/stream options:\n    -e <emp>        de-emphasis n/5/c  (obsolete)\n    -c              mark as copyright\n    -o              mark as non-original\n    -p              error protection.  adds 16 bit checksum to every frame\n                    (the checksum is computed correctly)\n    --nores         disable the bit reservoir\n    --strictly-enforce-ISO   comply as much as possible to ISO MPEG spec\n\n"
         ,1,0x19a,(FILE *)fp);
  fprintf((FILE *)fp,
                    
          "  Filter options:\n  --lowpass <freq>        frequency(kHz), lowpass filter cutoff above freq\n  --lowpass-width <freq>  frequency(kHz) - default 15%% of lowpass freq\n  --highpass <freq>       frequency(kHz), highpass filter cutoff below freq\n  --highpass-width <freq> frequency(kHz) - default 15%% of highpass freq\n"
         );
  fwrite("  --resample <sfreq>  sampling frequency of output file(kHz)- default=automatic\n",1,0x50,
         (FILE *)fp);
  wait_for(fp,lessmode);
  fwrite(
         "  ID3 tag options:\n    --tt <title>    audio/song title (max 30 chars for version 1 tag)\n    --ta <artist>   audio/song artist (max 30 chars for version 1 tag)\n    --tl <album>    audio/song album (max 30 chars for version 1 tag)\n    --ty <year>     audio/song year of issue (1 to 9999)\n    --tc <comment>  user-defined text (max 30 chars for v1 tag, 28 for v1.1)\n    --tn <track[/total]>   audio/song track number and (optionally) the total\n                           number of tracks on the original recording. (track\n                           and total each 1 to 255. just the track number\n                           creates v1.1 tag, providing a total forces v2.0).\n    --tg <genre>    audio/song genre (name or number in list)\n    --ti <file>     audio/song albumArt (jpeg/png/gif file, 128KB max, v2.3)\n    --tv <id=value> user-defined frame specified by id and value (v2.3 tag)\n"
         ,1,0x376,(FILE *)fp);
  fwrite(
         "    --add-id3v2     force addition of version 2 tag\n    --id3v1-only    add only a version 1 tag\n    --id3v2-only    add only a version 2 tag\n    --space-id3v1   pad version 1 tag with spaces instead of nulls\n    --pad-id3v2     same as \'--pad-id3v2-size 128\'\n    --pad-id3v2-size <value> adds version 2 tag, pad with extra <value> bytes\n    --genre-list    print alphabetically sorted ID3 genre list and exit\n    --ignore-tag-errors  ignore errors in values passed for tags\n\n"
         ,1,0x1dc,(FILE *)fp);
  fwrite(
         "    Note: A version 2 tag will NOT be added unless one of the input fields\n    won\'t fit in a version 1 tag (e.g. the title string is longer than 30\n    characters), or the \'--add-id3v2\' or \'--id3v2-only\' options are used,\n    or output is redirected to stdout.\n\nMisc:\n    --license       print License information\n\n"
         ,1,0x13c,(FILE *)fp);
  wait_for(fp,lessmode);
  fwrite(
         "  Platform specific:\n    --noasm <instructions> disable assembly optimizations for mmx/3dnow/sse\n"
         ,1,0x61,(FILE *)fp);
  wait_for(fp,lessmode);
  display_bitrates(fp);
  return 0;
}



void display_bitrate(FILE *fp,char *version,int d,int indx)

{
  undefined4 local_2c;
  undefined4 local_30;
  double local_28;
  int nBitrates;
  int i;
  
  nBitrates = 0xe;
  if (d == 4) {
    nBitrates = 8;
  }
  local_28 = 44.10000000 / (double)d;
  local_2c = (undefined4)(0x30 / (longlong)d);
  local_30 = (undefined4)(0x20 / (longlong)d);
  fprintf((FILE *)fp,
          "\nMPEG-%-3s layer III sample frequencies (kHz):  %2d  %2d  %g\nbitrates (kbps):",version,
          local_30,local_2c,local_28);
  i = 1;
  while (i <= nBitrates) {
    fprintf((FILE *)fp," %2i",*(undefined4 *)(bitrate_table + (indx * 0x10 + i) * 4),local_30,
            local_2c,local_28);
    i = i + 1;
  }
  fputc(10,(FILE *)fp);
  return;
}



int display_bitrates(FILE *fp)

{
  display_bitrate(fp,"1",1,1);
  display_bitrate(fp,"2",2,0);
  display_bitrate(fp,"2.5",4,0);
  fputc(10,(FILE *)fp);
  fflush((FILE *)fp);
  return 0;
}



void presets_longinfo_dm(FILE *msgfp)

{
  fwrite("\nThe --preset switches are aliases over LAME settings.\n\n\n",1,0x39,(FILE *)msgfp);
  fwrite("To activate these presets:\n\n   For VBR modes (generally highest quality):\n\n",1,0x4b,
         (FILE *)msgfp);
  fwrite(
         "     \"--preset medium\" This preset should provide near transparency\n                             to most people on most music.\n\n     \"--preset standard\" This preset should generally be transparent\n                             to most people on most music and is already\n                             quite high in quality.\n\n"
         ,1,0x143,(FILE *)msgfp);
  fwrite(
         "     \"--preset extreme\" If you have extremely good hearing and similar\n                             equipment, this preset will generally provide\n                             slightly higher quality than the \"standard\"\n                             mode.\n\n"
         ,1,0xff,(FILE *)msgfp);
  fwrite(
         "   For CBR 320kbps (highest quality possible from the --preset switches):\n\n     \"--preset insane\"  This preset will usually be overkill for most\n                             people and most situations, but if you must\n                             have the absolute highest quality with no\n                             regard to filesize, this is the way to go.\n\n"
         ,1,0x16a,(FILE *)msgfp);
  fwrite(
         "   For ABR modes (high quality per given bitrate but not as high as VBR):\n\n     \"--preset <kbps>\"  Using this preset will usually give you good\n                             quality at a specified bitrate. Depending on the\n                             bitrate entered, this preset will determine the\n"
         ,1,299,(FILE *)msgfp);
  fwrite(
         "                             optimal settings for that particular situation.\n                             While this approach works, it is not nearly as\n                             flexible as VBR, and usually will not attain the\n                             same level of quality as VBR at higher bitrates.\n\n"
         ,1,0x136,(FILE *)msgfp);
  fwrite(
         "The following options are also available for the corresponding profiles:\n\n   <fast>        standard\n   <fast>        extreme\n                 insane\n   <cbr> (ABR Mode) - The ABR Mode is implied. To use it,\n                      simply specify a bitrate. For example:\n                      \"--preset 185\" activates this\n                      preset and uses 185 as an average kbps.\n\n"
         ,1,0x17f,(FILE *)msgfp);
  fwrite("   \"fast\" - Enables the fast VBR mode for a particular profile.\n\n",1,0x41,
         (FILE *)msgfp);
  fwrite(
         "   \"cbr\"  - If you use the ABR mode (read above) with a significant\n            bitrate such as 80, 96, 112, 128, 160, 192, 224, 256, 320,\n            you can use the \"cbr\" option to force CBR mode encoding\n            instead of the standard abr mode. ABR does provide higher\n            quality but CBR may be useful in situations such as when\n            streaming an mp3 over the internet may be important.\n\n"
         ,1,0x19c,(FILE *)msgfp);
  fwrite(
         "    For example:\n\n    \"--preset fast standard <input file> <output file>\"\n or \"--preset cbr 192 <input file> <output file>\"\n or \"--preset 172 <input file> <output file>\"\n or \"--preset extreme <input file> <output file>\"\n\n\n"
         ,1,0xde,(FILE *)msgfp);
  fwrite(
         "A few aliases are also available for ABR mode:\nphone => 16kbps/mono        phon+/lw/mw-eu/sw => 24kbps/mono\nmw-us => 40kbps/mono        voice => 56kbps/mono\nfm/radio/tape => 112kbps    hifi => 160kbps\ncd => 192kbps               studio => 256kbps\n"
         ,1,0xf7,(FILE *)msgfp);
  return;
}



int presets_set(lame_t gfp,int fast,int cbr,char *preset_name,char *ProgramName)

{
  int iVar1;
  bool bVar2;
  int mono;
  
  iVar1 = strcmp(preset_name,"help");
  if (((iVar1 == 0) && (fast < 1)) && (cbr < 1)) {
    lame_version_print(stdout);
    presets_longinfo_dm(stdout);
    return -1;
  }
  iVar1 = strcmp(preset_name,"phone");
  bVar2 = iVar1 == 0;
  if (bVar2) {
    preset_name = "16";
  }
  iVar1 = strcmp(preset_name,"phon+");
  if (((iVar1 == 0) || (iVar1 = strcmp(preset_name,"lw"), iVar1 == 0)) ||
     ((iVar1 = strcmp(preset_name,"mw-eu"), iVar1 == 0 ||
      (iVar1 = strcmp(preset_name,"sw"), iVar1 == 0)))) {
    preset_name = "24";
    bVar2 = true;
  }
  iVar1 = strcmp(preset_name,"mw-us");
  if (iVar1 == 0) {
    preset_name = "40";
    bVar2 = true;
  }
  iVar1 = strcmp(preset_name,"voice");
  if (iVar1 == 0) {
    preset_name = "56";
    bVar2 = true;
  }
  iVar1 = strcmp(preset_name,"fm");
  if (iVar1 == 0) {
    preset_name = "112";
  }
  iVar1 = strcmp(preset_name,"radio");
  if ((iVar1 == 0) || (iVar1 = strcmp(preset_name,"tape"), iVar1 == 0)) {
    preset_name = "112";
  }
  iVar1 = strcmp(preset_name,"hifi");
  if (iVar1 == 0) {
    preset_name = "160";
  }
  iVar1 = strcmp(preset_name,"cd");
  if (iVar1 == 0) {
    preset_name = "192";
  }
  iVar1 = strcmp(preset_name,"studio");
  if (iVar1 == 0) {
    preset_name = "256";
  }
  iVar1 = strcmp(preset_name,"medium");
  if (iVar1 == 0) {
    lame_set_VBR_q(gfp,4);
    if (fast < 1) {
      lame_set_VBR(gfp,2);
    }
    else {
      lame_set_VBR(gfp,4);
    }
    iVar1 = 0;
  }
  else {
    iVar1 = strcmp(preset_name,"standard");
    if (iVar1 == 0) {
      lame_set_VBR_q(gfp,2);
      if (fast < 1) {
        lame_set_VBR(gfp,2);
      }
      else {
        lame_set_VBR(gfp,4);
      }
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(preset_name,"extreme");
      if (iVar1 == 0) {
        lame_set_VBR_q(gfp,0);
        if (fast < 1) {
          lame_set_VBR(gfp,2);
        }
        else {
          lame_set_VBR(gfp,4);
        }
        iVar1 = 0;
      }
      else {
        iVar1 = strcmp(preset_name,"insane");
        if ((iVar1 == 0) && (fast < 1)) {
          lame_set_preset(gfp,0x3eb);
          iVar1 = 0;
        }
        else {
          iVar1 = atoi(preset_name);
          if ((iVar1 < 1) || (0 < fast)) {
            lame_version_print(Console_IO.Error_fp);
            error_printf(
                        "Error: You did not enter a valid profile and/or options with --preset\n\nAvailable profiles are:\n\n   <fast>        medium\n   <fast>        standard\n   <fast>        extreme\n                 insane\n          <cbr> (ABR Mode) - The ABR Mode is implied. To use it,\n                             simply specify a bitrate. For example:\n                             \"--preset 185\" activates this\n                             preset and uses 185 as an average kbps.\n\n"
                        );
            error_printf(
                         "    Some examples:\n\n or \"%s --preset fast standard <input file> <output file>\"\n or \"%s --preset cbr 192 <input file> <output file>\"\n or \"%s --preset 172 <input file> <output file>\"\n or \"%s --preset extreme <input file> <output file>\"\n\nFor further information try: \"%s --preset help\"\n"
                         ,ProgramName,ProgramName,ProgramName,ProgramName,ProgramName);
            iVar1 = -1;
          }
          else {
            iVar1 = atoi(preset_name);
            if ((7 < iVar1) && (iVar1 = atoi(preset_name), iVar1 < 0x141)) {
              iVar1 = atoi(preset_name);
              lame_set_preset(gfp,iVar1);
              if (cbr == 1) {
                lame_set_VBR(gfp,0);
              }
              if (bVar2) {
                lame_set_mode(gfp,3);
              }
              return 0;
            }
            lame_version_print(Console_IO.Error_fp);
            error_printf(
                         "Error: The bitrate specified is out of the valid range for this preset\n\nWhen using this mode you must enter a value between \"32\" and \"320\"\n\nFor further information try: \"%s --preset help\"\n"
                         ,ProgramName);
            iVar1 = -1;
          }
        }
      }
    }
  }
  return iVar1;
}



void genre_list_handler(int num,char *name,void *cookie)

{
  console_printf("%3d %s\n",num,name);
  return;
}



int local_strcasecmp(char *s1,char *s2)

{
  uint uVar1;
  uint uVar2;
  uchar c2;
  uchar c1;
  
  do {
    uVar1 = tolower((int)*s1);
    uVar2 = tolower((int)*s2);
    if ((char)uVar1 == '\0') break;
    s1 = s1 + 1;
    s2 = s2 + 1;
  } while ((char)uVar1 == (char)uVar2);
  return (uVar1 & 0xff) - (uVar2 & 0xff);
}



int filename_to_type(char *FileName)

{
  size_t sVar1;
  int iVar2;
  size_t len;
  
  sVar1 = strlen(FileName);
  if (sVar1 < 4) {
    iVar2 = 0;
  }
  else {
    FileName = FileName + (sVar1 - 4);
    iVar2 = local_strcasecmp(FileName,".mpg");
    if (iVar2 == 0) {
      iVar2 = 7;
    }
    else {
      iVar2 = local_strcasecmp(FileName,".mp1");
      if (iVar2 == 0) {
        iVar2 = 7;
      }
      else {
        iVar2 = local_strcasecmp(FileName,".mp2");
        if (iVar2 == 0) {
          iVar2 = 7;
        }
        else {
          iVar2 = local_strcasecmp(FileName,".mp3");
          if (iVar2 == 0) {
            iVar2 = 7;
          }
          else {
            iVar2 = local_strcasecmp(FileName,".wav");
            if (iVar2 == 0) {
              iVar2 = 2;
            }
            else {
              iVar2 = local_strcasecmp(FileName,".aif");
              if (iVar2 == 0) {
                iVar2 = 3;
              }
              else {
                iVar2 = local_strcasecmp(FileName,".raw");
                if (iVar2 == 0) {
                  iVar2 = 1;
                }
                else {
                  iVar2 = local_strcasecmp(FileName,".ogg");
                  if (iVar2 == 0) {
                    iVar2 = 8;
                  }
                  else {
                    iVar2 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}



int resample_rate(double freq)

{
  int iVar1;
  double local_14;
  
  local_14 = freq;
  if (1000.00000000 <= freq) {
    local_14 = freq * 0.00100000;
  }
  switch((int)ROUND(local_14)) {
  case 8:
    iVar1 = 8000;
    break;
  default:
    error_printf("Illegal resample frequency: %.3f kHz\n",local_14);
    iVar1 = 0;
    break;
  case 0xb:
    iVar1 = 0x2b11;
    break;
  case 0xc:
    iVar1 = 12000;
    break;
  case 0x10:
    iVar1 = 16000;
    break;
  case 0x16:
    iVar1 = 0x5622;
    break;
  case 0x18:
    iVar1 = 24000;
    break;
  case 0x20:
    iVar1 = 32000;
    break;
  case 0x2c:
    iVar1 = 0xac44;
    break;
  case 0x30:
    iVar1 = 48000;
  }
  return iVar1;
}



int set_id3_albumart(lame_t gfp,char *file_name)

{
  FILE *__stream;
  size_t __size;
  void *__ptr;
  size_t sVar1;
  int iVar2;
  size_t size;
  char *albumart;
  FILE *fpi;
  int ret;
  
  if (file_name == (char *)0x0) {
    ret = 0;
  }
  else {
    __stream = fopen64(file_name,"rb");
    if (__stream == (FILE *)0x0) {
      ret = 1;
    }
    else {
      fseek(__stream,0,2);
      __size = ftell(__stream);
      fseek(__stream,0,0);
      __ptr = malloc(__size);
      if (__ptr == (void *)0x0) {
        ret = 2;
      }
      else {
        sVar1 = fread(__ptr,1,__size,__stream);
        if (sVar1 == __size) {
          iVar2 = id3tag_set_albumart(gfp,__ptr,__size);
          if (iVar2 == 0) {
            ret = 0;
          }
          else {
            ret = 4;
          }
        }
        else {
          ret = 3;
        }
        free(__ptr);
      }
      fclose(__stream);
    }
    if (ret == 2) {
      error_printf("Insufficient memory for reading the albumart.\n");
    }
    else {
      if ((uint)ret < 3) {
        if (ret == 1) {
          error_printf("Could not find: \'%s\'.\n",file_name);
        }
      }
      else {
        if (ret == 3) {
          error_printf("Read error: \'%s\'.\n",file_name);
        }
        else {
          if (ret == 4) {
            error_printf("Unsupported image: \'%s\'.\nSpecify JPEG/PNG/GIF image (128KB maximum)\n",
                         file_name);
          }
        }
      }
    }
  }
  return ret;
}



int parse_args(lame_global_flags *gfp,int argc,char **argv,char *inPath,char *outPath,
              char **nogap_inPath,int *num_nogap)

{
  char cVar1;
  char *ProgramName_00;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  FILE *fp_00;
  char *__nptr;
  char **ppcVar12;
  int iVar13;
  double freq;
  double d_3;
  double d_2;
  double d_1;
  double d;
  double val;
  int y;
  int n_1;
  int x;
  int tmp_quality;
  int cbr;
  int fast;
  FILE *fp;
  int k_3;
  int k_2;
  int k_1;
  int k;
  int n;
  int ret_1;
  int ret;
  int argUsed;
  char *nextArg;
  char *arg;
  char *token;
  int id3tag_mode;
  int noreplaygain;
  int count_nogap;
  char *ProgramName;
  int nogap_tags;
  int nogap;
  int autoconvert;
  int i;
  int input_file;
  char c;
  
  bVar4 = false;
  bVar7 = false;
  bVar3 = false;
  bVar6 = false;
  ProgramName_00 = *argv;
  count_nogap = 0;
  bVar5 = false;
  id3tag_mode = 0;
  *inPath = '\0';
  *outPath = '\0';
  silent = 0;
  ignore_tag_errors = 0;
  brhist = 1;
  mp3_delay = 0;
  mp3_delay_set = 0;
  print_clipping_info = 0;
  disable_wav_header = 0;
  id3tag_init(gfp);
  i = 0;
  do {
    while( true ) {
      while( true ) {
        iVar13 = i + 1;
        if (argc <= iVar13) {
          if (bVar4) {
            if ((*inPath == '-') && (silent < 1)) {
              silent = 1;
            }
            if ((*outPath == '\0') && (count_nogap == 0)) {
              if (*inPath == '-') {
                memcpy(outPath,&DAT_08059645,2);
              }
              else {
                strncpy(outPath,inPath,0xffd);
                iVar13 = lame_get_decode_only(gfp);
                if (iVar13 == 0) {
                  strcat(outPath,".mp3");
                }
                else {
                  strcat(outPath,".wav");
                }
              }
            }
            if (!bVar5) {
              lame_set_findReplayGain(gfp,1);
            }
            if (((bVar3) && (iVar13 = lame_get_bWriteVbrTag(gfp), iVar13 != 0)) && (!bVar6)) {
              console_printf("Note: Disabling VBR Xing/Info tag since it interferes with --nogap\n")
              ;
              lame_set_bWriteVbrTag(gfp,0);
            }
            if (*outPath == '-') {
              lame_set_bWriteVbrTag(gfp,0);
            }
            if (input_format == sf_unknown) {
              input_format = filename_to_type(inPath);
            }
            if (input_format == sf_ogg) {
              error_printf("sorry, vorbis support in LAME is deprecated.\n");
              iVar13 = -1;
            }
            else {
              if (bVar7) {
                lame_set_num_channels(gfp,2);
              }
              else {
                iVar13 = lame_get_mode(gfp);
                if (iVar13 == 3) {
                  lame_set_num_channels(gfp,1);
                }
                else {
                  lame_set_num_channels(gfp,2);
                }
              }
              iVar13 = lame_get_free_format(gfp);
              if ((iVar13 == 0) ||
                 ((iVar13 = lame_get_brate(gfp), 7 < iVar13 &&
                  (iVar13 = lame_get_brate(gfp), iVar13 < 0x281)))) {
                if (num_nogap != (int *)0x0) {
                  *num_nogap = count_nogap;
                }
                iVar13 = 0;
              }
              else {
                error_printf("For free format, specify a bitrate between 8 and 640 kbps\n");
                error_printf("with the -b <bitrate> option\n");
                iVar13 = -1;
              }
            }
          }
          else {
            usage(Console_IO.Console_fp,ProgramName_00);
            iVar13 = -1;
          }
          return iVar13;
        }
        __nptr = argv[iVar13];
        token = __nptr + 1;
        if (*__nptr == '-') break;
        if (bVar3) {
          if ((num_nogap == (int *)0x0) || (*num_nogap <= count_nogap)) {
            error_printf(
                        "Error: \'nogap option\'.  Calling program does not allow nogap option, or\nyou have exceeded maximum number of input files for the nogap option\n"
                        );
            *num_nogap = -1;
            return -1;
          }
          ppcVar12 = nogap_inPath + count_nogap;
          count_nogap = count_nogap + 1;
          strncpy(*ppcVar12,argv[iVar13],0x1001);
          bVar4 = true;
          i = iVar13;
        }
        else {
          if (*inPath == '\0') {
            strncpy(inPath,argv[iVar13],0x1001);
            bVar4 = true;
            i = iVar13;
          }
          else {
            if (*outPath != '\0') {
              error_printf("%s: excess arg %s\n",ProgramName_00,argv[iVar13]);
              return -1;
            }
            strncpy(outPath,argv[iVar13],0x1001);
            i = iVar13;
          }
        }
      }
      argUsed = 0;
      if (i + 2 < argc) {
        nextArg = argv[i + 2];
      }
      else {
        nextArg = "";
      }
      if (*token == '\0') {
        bVar4 = true;
        if (*inPath == '\0') {
          strncpy(inPath,argv[iVar13],0x1001);
        }
        else {
          if (*outPath == '\0') {
            strncpy(outPath,argv[iVar13],0x1001);
          }
        }
      }
      i = iVar13;
      if (*token == '-') break;
      while( true ) {
        cVar1 = *token;
        token = token + 1;
        if (cVar1 == '\0') break;
        __nptr = nextArg;
        if (*token != '\0') {
          __nptr = token;
        }
        switch(cVar1) {
        case '?':
          long_help(gfp,stdout,ProgramName_00,0);
          return -1;
        default:
          error_printf("%s: unrecognized option -%c\n",ProgramName_00,(int)cVar1);
          return -1;
        case 'B':
          argUsed = 1;
          iVar13 = atoi(__nptr);
          lame_set_VBR_max_bitrate_kbps(gfp,iVar13);
          break;
        case 'F':
          lame_set_VBR_hard_min(gfp,1);
          break;
        case 'S':
          silent = 10;
          break;
        case 'T':
          lame_set_bWriteVbrTag(gfp,1);
          bVar6 = true;
          disable_wav_header = 0;
          break;
        case 'V':
          argUsed = 1;
          iVar13 = lame_get_VBR(gfp);
          if (iVar13 == 0) {
            lame_set_VBR(gfp,4);
          }
          freq = atof(__nptr);
          lame_set_VBR_quality(gfp,(float)freq);
          break;
        case 'X':
          iVar13 = __isoc99_sscanf(__nptr,"%d,%d",&x,&y);
          if (iVar13 == 1) {
            y = x;
          }
          argUsed = 1;
          break;
        case 'Y':
          lame_set_experimentalY(gfp,1);
          break;
        case 'Z':
          y = 1;
          argUsed = __isoc99_sscanf(__nptr,&DAT_0805955f,&y);
          break;
        case 'a':
          bVar7 = true;
          lame_set_mode(gfp,3);
          break;
        case 'b':
          argUsed = 1;
          iVar13 = atoi(__nptr);
          lame_set_brate(gfp,iVar13);
          uVar9 = lame_get_brate(gfp);
          lame_set_VBR_min_bitrate_kbps(gfp,uVar9);
          break;
        case 'c':
          lame_set_copyright(gfp,1);
          break;
        case 'd':
        case 'k':
          error_printf("WARNING: -%c is obsolete.\n",(int)cVar1);
          break;
        case 'e':
          argUsed = 1;
          cVar1 = *__nptr;
          if (cVar1 == 'c') {
            lame_set_emphasis(gfp,3);
          }
          else {
            if (cVar1 == 'n') {
              lame_set_emphasis(gfp,0);
            }
            else {
              if (cVar1 != '5') {
                error_printf("%s: -e emp must be n/5/c not %s\n",ProgramName_00,__nptr);
                return -1;
              }
              lame_set_emphasis(gfp,1);
            }
          }
          break;
        case 'f':
          lame_set_quality(gfp,7);
          break;
        case 'h':
          lame_set_quality(gfp,2);
          break;
        case 'm':
          argUsed = 1;
          switch(*__nptr) {
          case 'a':
            lame_set_mode(gfp,1);
            break;
          default:
            error_printf("%s: -m mode must be s/d/j/f/m not %s\n",ProgramName_00,__nptr);
            return -1;
          case 'd':
            lame_set_mode(gfp,2);
            break;
          case 'f':
            lame_set_force_ms(gfp,1);
          case 'j':
            lame_set_mode(gfp,1);
            break;
          case 'm':
            lame_set_mode(gfp,3);
            break;
          case 's':
            lame_set_mode(gfp,0);
          }
          break;
        case 'o':
          lame_set_original(gfp,0);
          break;
        case 'p':
          lame_set_error_protection(gfp,1);
          break;
        case 'q':
          argUsed = 1;
          tmp_quality = atoi(__nptr);
          if (tmp_quality < 0) {
            tmp_quality = 0;
          }
          if (9 < tmp_quality) {
            tmp_quality = 9;
          }
          lame_set_quality(gfp,tmp_quality);
          break;
        case 'r':
          input_format = sf_raw;
          break;
        case 's':
          argUsed = 1;
          freq = atof(__nptr);
          if (192.00000000 < freq) {
            dVar2 = 1.00000000;
          }
          else {
            dVar2 = 1000.00000000;
          }
          lame_set_in_samplerate(gfp,(int)ROUND(dVar2 * freq + 0.50000000));
          break;
        case 't':
          lame_set_bWriteVbrTag(gfp,0);
          disable_wav_header = 1;
          break;
        case 'v':
          iVar13 = lame_get_VBR(gfp);
          if (iVar13 == 0) {
            lame_set_VBR(gfp,4);
          }
          break;
        case 'x':
          swapbytes = 1;
        }
        if (argUsed != 0) {
          if (__nptr == token) {
            token = "";
          }
          else {
            i = i + 1;
          }
          argUsed = 0;
        }
      }
    }
    __nptr = __nptr + 2;
    iVar8 = local_strcasecmp(__nptr,"resample");
    if (iVar8 == 0) {
      argUsed = 1;
      freq = atof(nextArg);
      iVar8 = resample_rate(freq);
      lame_set_out_samplerate(gfp,iVar8);
    }
    else {
      iVar8 = local_strcasecmp(__nptr,"vbr-old");
      if (iVar8 == 0) {
        lame_set_VBR(gfp,2);
      }
      else {
        iVar8 = local_strcasecmp(__nptr,"vbr-new");
        if (iVar8 == 0) {
          lame_set_VBR(gfp,4);
        }
        else {
          iVar8 = local_strcasecmp(__nptr,"vbr-mtrh");
          if (iVar8 == 0) {
            lame_set_VBR(gfp,4);
          }
          else {
            iVar8 = local_strcasecmp(__nptr,"cbr");
            if (iVar8 == 0) {
              lame_set_VBR(gfp,0);
            }
            else {
              iVar8 = local_strcasecmp(__nptr,"abr");
              if (iVar8 == 0) {
                argUsed = 1;
                lame_set_VBR(gfp,3);
                iVar8 = atoi(nextArg);
                lame_set_VBR_mean_bitrate_kbps(gfp,iVar8);
                iVar8 = lame_get_VBR_mean_bitrate_kbps(gfp);
                if (7999 < iVar8) {
                  iVar8 = lame_get_VBR_mean_bitrate_kbps(gfp);
                  lame_set_VBR_mean_bitrate_kbps(gfp,(iVar8 + 500) / 1000);
                }
                iVar8 = lame_get_VBR_mean_bitrate_kbps(gfp);
                if (iVar8 < 0x140) {
                  uVar9 = lame_get_VBR_mean_bitrate_kbps(gfp);
                }
                else {
                  uVar9 = 0x140;
                }
                lame_set_VBR_mean_bitrate_kbps(gfp,uVar9);
                iVar8 = lame_get_VBR_mean_bitrate_kbps(gfp);
                if (iVar8 < 9) {
                  uVar9 = 8;
                }
                else {
                  uVar9 = lame_get_VBR_mean_bitrate_kbps(gfp);
                }
                lame_set_VBR_mean_bitrate_kbps(gfp,uVar9);
              }
              else {
                iVar8 = local_strcasecmp(__nptr,"r3mix");
                if (iVar8 == 0) {
                  lame_set_preset(gfp,1000);
                }
                else {
                  iVar8 = local_strcasecmp(__nptr,"bitwidth");
                  if (iVar8 == 0) {
                    argUsed = 1;
                    in_bitwidth = atoi(nextArg);
                  }
                  else {
                    iVar8 = local_strcasecmp(__nptr,"signed");
                    if (iVar8 == 0) {
                      in_signed = 1;
                    }
                    else {
                      iVar8 = local_strcasecmp(__nptr,"unsigned");
                      if (iVar8 == 0) {
                        in_signed = 0;
                      }
                      else {
                        iVar8 = local_strcasecmp(__nptr,"little-endian");
                        if (iVar8 == 0) {
                          in_endian = ByteOrderLittleEndian;
                        }
                        else {
                          iVar8 = local_strcasecmp(__nptr,"big-endian");
                          if (iVar8 == 0) {
                            in_endian = ByteOrderBigEndian;
                          }
                          else {
                            iVar8 = local_strcasecmp(__nptr,"mp1input");
                            if (iVar8 == 0) {
                              input_format = sf_mp1;
                            }
                            else {
                              iVar8 = local_strcasecmp(__nptr,"mp2input");
                              if (iVar8 == 0) {
                                input_format = sf_mp2;
                              }
                              else {
                                iVar8 = local_strcasecmp(__nptr,"mp3input");
                                if (iVar8 == 0) {
                                  input_format = sf_mp3;
                                }
                                else {
                                  iVar8 = local_strcasecmp(__nptr,"ogginput");
                                  if (iVar8 == 0) {
                                    error_printf("sorry, vorbis support in LAME is deprecated.\n");
                                    return -1;
                                  }
                                  iVar8 = local_strcasecmp(__nptr,"phone");
                                  if (iVar8 == 0) {
                                    iVar8 = presets_set((lame_t)gfp,0,0,__nptr,ProgramName_00);
                                    if (iVar8 < 0) {
                                      return -1;
                                    }
                                    error_printf(
                                                "Warning: --phone is deprecated, use --preset phone instead!"
                                                );
                                  }
                                  else {
                                    iVar8 = local_strcasecmp(__nptr,"voice");
                                    if (iVar8 == 0) {
                                      iVar8 = presets_set((lame_t)gfp,0,0,__nptr,ProgramName_00);
                                      if (iVar8 < 0) {
                                        return -1;
                                      }
                                      error_printf(
                                                  "Warning: --voice is deprecated, use --preset voice instead!"
                                                  );
                                    }
                                    else {
                                      iVar8 = local_strcasecmp(__nptr,"decode");
                                      if (iVar8 == 0) {
                                        lame_set_decode_only(gfp,1);
                                      }
                                      else {
                                        iVar8 = local_strcasecmp(__nptr,"flush");
                                        if (iVar8 == 0) {
                                          flush_write = 1;
                                        }
                                        else {
                                          iVar8 = local_strcasecmp(__nptr,"decode-mp3delay");
                                          if (iVar8 == 0) {
                                            mp3_delay = atoi(nextArg);
                                            mp3_delay_set = 1;
                                            argUsed = 1;
                                          }
                                          else {
                                            iVar8 = local_strcasecmp(__nptr,"nores");
                                            if (iVar8 == 0) {
                                              lame_set_disable_reservoir(gfp,1);
                                            }
                                            else {
                                              iVar8 = local_strcasecmp(__nptr,"strictly-enforce-ISO"
                                                                      );
                                              if (iVar8 == 0) {
                                                lame_set_strict_ISO(gfp,1);
                                              }
                                              else {
                                                iVar8 = local_strcasecmp(__nptr,"scale");
                                                if (iVar8 == 0) {
                                                  argUsed = 1;
                                                  freq = atof(nextArg);
                                                  lame_set_scale(gfp,(float)freq);
                                                }
                                                else {
                                                  iVar8 = local_strcasecmp(__nptr,"scale-l");
                                                  if (iVar8 == 0) {
                                                    argUsed = 1;
                                                    freq = atof(nextArg);
                                                    lame_set_scale_left(gfp,(float)freq);
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"scale-r");
                                                    if (iVar8 == 0) {
                                                      argUsed = 1;
                                                      freq = atof(nextArg);
                                                      lame_set_scale_right(gfp,(float)freq);
                                                    }
                                                    else {
                                                      iVar8 = local_strcasecmp(__nptr,"noasm");
                                                      if (iVar8 == 0) {
                                                        argUsed = 1;
                                                        iVar8 = strcmp(nextArg,"mmx");
                                                        if (iVar8 == 0) {
                                                          lame_set_asm_optimizations(gfp,1,0);
                                                        }
                                                        iVar8 = strcmp(nextArg,"3dnow");
                                                        if (iVar8 == 0) {
                                                          lame_set_asm_optimizations(gfp,2,0);
                                                        }
                                                        iVar8 = strcmp(nextArg,"sse");
                                                        if (iVar8 == 0) {
                                                          lame_set_asm_optimizations(gfp,3,0);
                                                        }
                                                      }
                                                      else {
                                                        iVar8 = local_strcasecmp(__nptr,"freeformat"
                                                                                );
                                                        if (iVar8 == 0) {
                                                          lame_set_free_format(gfp,1);
                                                        }
                                                        else {
                                                          iVar8 = local_strcasecmp(__nptr,
                                                  "replaygain-fast");
                                                  if (iVar8 == 0) {
                                                    lame_set_findReplayGain(gfp,1);
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,
                                                  "replaygain-accurate");
                                                  if (iVar8 == 0) {
                                                    lame_set_decode_on_the_fly(gfp,1);
                                                    lame_set_findReplayGain(gfp,1);
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"noreplaygain");
                                                    if (iVar8 == 0) {
                                                      bVar5 = true;
                                                      lame_set_findReplayGain(gfp,0);
                                                    }
                                                    else {
                                                      iVar8 = local_strcasecmp(__nptr,"clipdetect");
                                                      if (iVar8 == 0) {
                                                        print_clipping_info = 1;
                                                        lame_set_decode_on_the_fly(gfp,1);
                                                      }
                                                      else {
                                                        iVar8 = local_strcasecmp(__nptr,"nohist");
                                                        if (iVar8 == 0) {
                                                          brhist = 0;
                                                        }
                                                        else {
                                                          iVar8 = local_strcasecmp(__nptr,"tt");
                                                          if (iVar8 == 0) {
                                                            argUsed = 1;
                                                            id3_tag(gfp,0x74,TENC_RAW,nextArg);
                                                          }
                                                          else {
                                                            iVar8 = local_strcasecmp(__nptr,"ta");
                                                            if (iVar8 == 0) {
                                                              argUsed = 1;
                                                              id3_tag(gfp,0x61,TENC_RAW,nextArg);
                                                            }
                                                            else {
                                                              iVar8 = local_strcasecmp(__nptr,"tl");
                                                              if (iVar8 == 0) {
                                                                argUsed = 1;
                                                                id3_tag(gfp,0x6c,TENC_RAW,nextArg);
                                                              }
                                                              else {
                                                                iVar8 = local_strcasecmp(__nptr,"ty"
                                                                                        );
                                                                if (iVar8 == 0) {
                                                                  argUsed = 1;
                                                                  id3_tag(gfp,0x79,TENC_RAW,nextArg)
                                                                  ;
                                                                }
                                                                else {
                                                                  iVar8 = local_strcasecmp(__nptr,
                                                  "tc");
                                                  if (iVar8 == 0) {
                                                    argUsed = 1;
                                                    id3_tag(gfp,99,TENC_RAW,nextArg);
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"tn");
                                                    if (iVar8 == 0) {
                                                      iVar8 = id3_tag(gfp,0x6e,TENC_RAW,nextArg);
                                                      argUsed = 1;
                                                      if ((iVar8 != 0) && (ignore_tag_errors == 0))
                                                      {
                                                        if (id3tag_mode == 1) {
                                                          error_printf(
                                                  "The track number has to be between 1 and 255 for ID3v1.\n"
                                                  );
                                                  return -1;
                                                  }
                                                  if ((id3tag_mode != 2) && (silent < 10)) {
                                                    error_printf(
                                                  "The track number has to be between 1 and 255 for ID3v1, ignored for ID3v1.\n"
                                                  );
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"tg");
                                                    if (iVar8 == 0) {
                                                      iVar8 = id3_tag(gfp,0x67,TENC_RAW,nextArg);
                                                      argUsed = 1;
                                                      if ((iVar8 != 0) && (ignore_tag_errors == 0))
                                                      {
                                                        if (iVar8 == -1) {
                                                          error_printf(
                                                  "Unknown ID3v1 genre number: \'%s\'.\n",nextArg);
                                                  return -1;
                                                  }
                                                  if (iVar8 != -2) {
                                                    error_printf("Internal error.\n");
                                                    return -1;
                                                  }
                                                  if (id3tag_mode == 1) {
                                                    error_printf("Unknown ID3v1 genre: \'%s\'.\n",
                                                                 nextArg);
                                                    return -1;
                                                  }
                                                  if ((id3tag_mode != 2) && (silent < 10)) {
                                                    error_printf(
                                                  "Unknown ID3v1 genre: \'%s\'.  Setting ID3v1 genre to \'Other\'\n"
                                                  ,nextArg);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"tv");
                                                    if (iVar8 == 0) {
                                                      argUsed = 1;
                                                      iVar8 = id3_tag(gfp,0x76,TENC_RAW,nextArg);
                                                      if ((iVar8 != 0) && (silent < 10)) {
                                                        error_printf(
                                                  "Invalid field value: \'%s\'. Ignored\n",nextArg);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"ti");
                                                    if (iVar8 == 0) {
                                                      argUsed = 1;
                                                      iVar8 = set_id3_albumart((lame_t)gfp,nextArg);
                                                      if ((iVar8 != 0) && (ignore_tag_errors == 0))
                                                      {
                                                        return -1;
                                                      }
                                                    }
                                                    else {
                                                      iVar8 = local_strcasecmp(__nptr,
                                                  "ignore-tag-errors");
                                                  if (iVar8 == 0) {
                                                    ignore_tag_errors = 1;
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"add-id3v2");
                                                    if (iVar8 == 0) {
                                                      id3tag_add_v2(gfp);
                                                    }
                                                    else {
                                                      iVar8 = local_strcasecmp(__nptr,"id3v1-only");
                                                      if (iVar8 == 0) {
                                                        id3tag_v1_only(gfp);
                                                        id3tag_mode = 1;
                                                      }
                                                      else {
                                                        iVar8 = local_strcasecmp(__nptr,"id3v2-only"
                                                                                );
                                                        if (iVar8 == 0) {
                                                          id3tag_v2_only(gfp);
                                                          id3tag_mode = 2;
                                                        }
                                                        else {
                                                          iVar8 = local_strcasecmp(__nptr,
                                                  "space-id3v1");
                                                  if (iVar8 == 0) {
                                                    id3tag_space_v1(gfp);
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"pad-id3v2");
                                                    if (iVar8 == 0) {
                                                      id3tag_pad_v2(gfp);
                                                    }
                                                    else {
                                                      iVar8 = local_strcasecmp(__nptr,
                                                  "pad-id3v2-size");
                                                  if (iVar8 == 0) {
                                                    iVar10 = atoi(nextArg);
                                                    iVar8 = 0x1f400;
                                                    if (iVar10 < 0x1f401) {
                                                      iVar8 = iVar10;
                                                    }
                                                    iVar10 = 0;
                                                    if (-1 < iVar8) {
                                                      iVar10 = iVar8;
                                                    }
                                                    id3tag_set_pad(gfp,iVar10);
                                                    argUsed = 1;
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"genre-list");
                                                    if (iVar8 == 0) {
                                                      id3tag_genre_list(genre_list_handler,0);
                                                      return -2;
                                                    }
                                                    iVar8 = local_strcasecmp(__nptr,"lowpass");
                                                    if (iVar8 == 0) {
                                                      freq = atof(nextArg);
                                                      argUsed = 1;
                                                      if (0.00000000 <= freq) {
                                                        if ((freq < 0.00100000) ||
                                                           (50000.00000000 < freq)) {
                                                          error_printf(
                                                  "Must specify lowpass with --lowpass freq, freq >= 0.001 kHz\n"
                                                  );
                                                  return -1;
                                                  }
                                                  if (50.00000000 <= freq) {
                                                    dVar2 = 1.00000000;
                                                  }
                                                  else {
                                                    dVar2 = 1000.00000000;
                                                  }
                                                  lame_set_lowpassfreq
                                                            (gfp,(int)ROUND(dVar2 * freq +
                                                                            0.50000000));
                                                  }
                                                  else {
                                                    lame_set_lowpassfreq(gfp,0xffffffff);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"lowpass-width")
                                                    ;
                                                    if (iVar8 == 0) {
                                                      freq = atof(nextArg);
                                                      argUsed = 1;
                                                      if ((freq < 0.00100000) ||
                                                         (50000.00000000 < freq)) {
                                                        error_printf(
                                                  "Must specify lowpass width with --lowpass-width freq, freq >= 0.001 kHz\n"
                                                  );
                                                  return -1;
                                                  }
                                                  if (16.00000000 <= freq) {
                                                    dVar2 = 1.00000000;
                                                  }
                                                  else {
                                                    dVar2 = 1000.00000000;
                                                  }
                                                  lame_set_lowpasswidth
                                                            (gfp,(int)ROUND(dVar2 * freq +
                                                                            0.50000000));
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"highpass");
                                                    if (iVar8 == 0) {
                                                      freq = atof(nextArg);
                                                      argUsed = 1;
                                                      if (0.00000000 <= freq) {
                                                        if ((freq < 0.00100000) ||
                                                           (50000.00000000 < freq)) {
                                                          error_printf(
                                                  "Must specify highpass with --highpass freq, freq >= 0.001 kHz\n"
                                                  );
                                                  return -1;
                                                  }
                                                  if (16.00000000 <= freq) {
                                                    dVar2 = 1.00000000;
                                                  }
                                                  else {
                                                    dVar2 = 1000.00000000;
                                                  }
                                                  lame_set_highpassfreq
                                                            (gfp,(int)ROUND(dVar2 * freq +
                                                                            0.50000000));
                                                  }
                                                  else {
                                                    lame_set_highpassfreq(gfp,0xffffffff);
                                                  }
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"highpass-width"
                                                                            );
                                                    if (iVar8 == 0) {
                                                      freq = atof(nextArg);
                                                      argUsed = 1;
                                                      if ((freq < 0.00100000) ||
                                                         (50000.00000000 < freq)) {
                                                        error_printf(
                                                  "Must specify highpass width with --highpass-width freq, freq >= 0.001 kHz\n"
                                                  );
                                                  return -1;
                                                  }
                                                  lame_set_highpasswidth(gfp,(int)ROUND(freq));
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"comp");
                                                    if (iVar8 == 0) {
                                                      argUsed = 1;
                                                      freq = atof(nextArg);
                                                      if (freq < 1.00000000) {
                                                        error_printf(
                                                  "Must specify compression ratio >= 1.0\n");
                                                  return -1;
                                                  }
                                                  lame_set_compression_ratio(gfp,(float)freq);
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"notemp");
                                                    if (iVar8 == 0) {
                                                      lame_set_useTemporal(gfp,0);
                                                    }
                                                    else {
                                                      iVar8 = local_strcasecmp(__nptr,"interch");
                                                      if (iVar8 == 0) {
                                                        argUsed = 1;
                                                        freq = atof(nextArg);
                                                        lame_set_interChRatio(gfp,(float)freq);
                                                      }
                                                      else {
                                                        iVar8 = local_strcasecmp(__nptr,
                                                  "temporal-masking");
                                                  if (iVar8 == 0) {
                                                    argUsed = 1;
                                                    iVar8 = atoi(nextArg);
                                                    lame_set_useTemporal(gfp,(uint)(iVar8 != 0));
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"nspsytune");
                                                    if (iVar8 != 0) {
                                                      iVar8 = local_strcasecmp(__nptr,"nssafejoint")
                                                      ;
                                                      if (iVar8 == 0) {
                                                        uVar11 = lame_get_exp_nspsytune(gfp);
                                                        lame_set_exp_nspsytune(gfp,uVar11 | 2);
                                                      }
                                                      else {
                                                        iVar8 = local_strcasecmp(__nptr,"nsmsfix");
                                                        if (iVar8 == 0) {
                                                          argUsed = 1;
                                                          freq = atof(nextArg);
                                                          lame_set_msfix(gfp,SUB84(freq,0),
                                                                         (int)((ulonglong)freq >>
                                                                              0x20));
                                                        }
                                                        else {
                                                          iVar8 = local_strcasecmp(__nptr,"ns-bass")
                                                          ;
                                                          if (iVar8 == 0) {
                                                            argUsed = 1;
                                                            freq = atof(nextArg);
                                                            k = (int)ROUND(freq * 4.00000000);
                                                            if (k < -0x20) {
                                                              k = -0x20;
                                                            }
                                                            if (0x1f < k) {
                                                              k = 0x1f;
                                                            }
                                                            if (k < 0) {
                                                              k = k + 0x40;
                                                            }
                                                            uVar11 = lame_get_exp_nspsytune(gfp);
                                                            lame_set_exp_nspsytune
                                                                      (gfp,uVar11 | k << 2);
                                                          }
                                                          else {
                                                            iVar8 = local_strcasecmp(__nptr,
                                                  "ns-alto");
                                                  if (iVar8 == 0) {
                                                    argUsed = 1;
                                                    freq = atof(nextArg);
                                                    k_1 = (int)ROUND(freq * 4.00000000);
                                                    if (k_1 < -0x20) {
                                                      k_1 = -0x20;
                                                    }
                                                    if (0x1f < k_1) {
                                                      k_1 = 0x1f;
                                                    }
                                                    if (k_1 < 0) {
                                                      k_1 = k_1 + 0x40;
                                                    }
                                                    uVar11 = lame_get_exp_nspsytune(gfp);
                                                    lame_set_exp_nspsytune(gfp,uVar11 | k_1 << 8);
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"ns-treble");
                                                    if (iVar8 == 0) {
                                                      argUsed = 1;
                                                      freq = atof(nextArg);
                                                      k_2 = (int)ROUND(freq * 4.00000000);
                                                      if (k_2 < -0x20) {
                                                        k_2 = -0x20;
                                                      }
                                                      if (0x1f < k_2) {
                                                        k_2 = 0x1f;
                                                      }
                                                      if (k_2 < 0) {
                                                        k_2 = k_2 + 0x40;
                                                      }
                                                      uVar11 = lame_get_exp_nspsytune(gfp);
                                                      lame_set_exp_nspsytune
                                                                (gfp,uVar11 | k_2 << 0xe);
                                                    }
                                                    else {
                                                      iVar8 = local_strcasecmp(__nptr,"ns-sfb21");
                                                      if (iVar8 == 0) {
                                                        argUsed = 1;
                                                        freq = atof(nextArg);
                                                        k_3 = (int)ROUND(freq * 4.00000000);
                                                        if (k_3 < -0x20) {
                                                          k_3 = -0x20;
                                                        }
                                                        if (0x1f < k_3) {
                                                          k_3 = 0x1f;
                                                        }
                                                        if (k_3 < 0) {
                                                          k_3 = k_3 + 0x40;
                                                        }
                                                        uVar11 = lame_get_exp_nspsytune(gfp);
                                                        lame_set_exp_nspsytune
                                                                  (gfp,uVar11 | k_3 << 0x14);
                                                      }
                                                      else {
                                                        iVar8 = local_strcasecmp(__nptr,"nspsytune2"
                                                                                );
                                                        if (iVar8 != 0) {
                                                          iVar8 = local_strcasecmp(__nptr,"quiet");
                                                          if ((iVar8 == 0) ||
                                                             (iVar8 = local_strcasecmp(__nptr,
                                                  "silent"), iVar8 == 0)) {
                                                    silent = 10;
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"brief");
                                                    if (iVar8 == 0) {
                                                      silent = -5;
                                                    }
                                                    else {
                                                      iVar8 = local_strcasecmp(__nptr,"verbose");
                                                      if (iVar8 == 0) {
                                                        silent = -10;
                                                      }
                                                      else {
                                                        iVar8 = local_strcasecmp(__nptr,"version");
                                                        if ((iVar8 == 0) ||
                                                           (iVar8 = local_strcasecmp(__nptr,
                                                  "license"), iVar8 == 0)) {
                                                    print_license(stdout);
                                                    return -2;
                                                  }
                                                  iVar8 = local_strcasecmp(__nptr,"help");
                                                  if ((iVar8 == 0) ||
                                                     (iVar8 = local_strcasecmp(__nptr,"usage"),
                                                     iVar8 == 0)) {
                                                    short_help(gfp,stdout,ProgramName_00);
                                                    return -2;
                                                  }
                                                  iVar8 = local_strcasecmp(__nptr,"longhelp");
                                                  if (iVar8 == 0) {
                                                    long_help(gfp,stdout,ProgramName_00,0);
                                                    return -2;
                                                  }
                                                  iVar8 = local_strcasecmp(__nptr,"?");
                                                  if (iVar8 == 0) {
                                                    fp_00 = (FILE *)popen("less -Mqc","w");
                                                    long_help(gfp,fp_00,ProgramName_00,0);
                                                    pclose((FILE *)fp_00);
                                                    return -2;
                                                  }
                                                  iVar8 = local_strcasecmp(__nptr,"preset");
                                                  if ((iVar8 == 0) ||
                                                     (iVar8 = local_strcasecmp(__nptr,"alt-preset"),
                                                     iVar8 == 0)) {
                                                    argUsed = 1;
                                                    fast = 0;
                                                    cbr = 0;
                                                    while ((iVar8 = strcmp(nextArg,"fast"),
                                                           iVar8 == 0 ||
                                                           (iVar8 = strcmp(nextArg,"cbr"),
                                                           iVar8 == 0))) {
                                                      iVar8 = strcmp(nextArg,"fast");
                                                      if ((iVar8 == 0) && (fast == 0)) {
                                                        fast = 1;
                                                      }
                                                      iVar8 = strcmp(nextArg,"cbr");
                                                      if ((iVar8 == 0) && (cbr == 0)) {
                                                        cbr = 1;
                                                      }
                                                      argUsed = argUsed + 1;
                                                      if (iVar13 + argUsed < argc) {
                                                        nextArg = argv[iVar13 + argUsed];
                                                      }
                                                      else {
                                                        nextArg = "";
                                                      }
                                                    }
                                                    iVar8 = presets_set((lame_t)gfp,fast,cbr,nextArg
                                                                        ,ProgramName_00);
                                                    if (iVar8 < 0) {
                                                      return -1;
                                                    }
                                                  }
                                                  else {
                                                    iVar8 = local_strcasecmp(__nptr,"disptime");
                                                    if (iVar8 == 0) {
                                                      argUsed = 1;
                                                      freq = atof(nextArg);
                                                      update_interval = (float)freq;
                                                    }
                                                    else {
                                                      iVar8 = local_strcasecmp(__nptr,"nogaptags");
                                                      if (iVar8 == 0) {
                                                        bVar6 = true;
                                                      }
                                                      else {
                                                        iVar8 = local_strcasecmp(__nptr,"nogapout");
                                                        if (iVar8 == 0) {
                                                          strcpy(outPath,nextArg);
                                                          argUsed = 1;
                                                        }
                                                        else {
                                                          iVar8 = local_strcasecmp(__nptr,"nogap");
                                                          if (iVar8 == 0) {
                                                            bVar3 = true;
                                                          }
                                                          else {
                                                            iVar8 = local_strcasecmp(__nptr,
                                                  "athaa-sensitivity");
                                                  if (iVar8 != 0) {
                                                    error_printf("%s: unrecognized option --%s\n",
                                                                 ProgramName_00,__nptr);
                                                    return -1;
                                                  }
                                                  argUsed = 1;
                                                  freq = atof(nextArg);
                                                  lame_set_athaa_sensitivity(gfp,(float)freq);
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
              }
            }
          }
        }
      }
    }
    i = iVar13 + argUsed;
  } while( true );
}



int ReadByte(FILE *fp)

{
  uint uVar1;
  int result;
  
  uVar1 = _IO_getc((_IO_FILE *)fp);
  result = uVar1 & 0xff;
  if ((uVar1 & 0x80) != 0) {
    result = result - 0x100;
  }
  return result;
}



int Read16BitsLowHigh(FILE *fp)

{
  uint uVar1;
  uint uVar2;
  int result;
  int second;
  int first;
  
  uVar1 = _IO_getc((_IO_FILE *)fp);
  uVar2 = _IO_getc((_IO_FILE *)fp);
  result = (uVar2 & 0xff) * 0x100 + (uVar1 & 0xff);
  if ((result & 0x8000U) != 0) {
    result = result - 0x10000;
  }
  return result;
}



int Read16BitsHighLow(FILE *fp)

{
  uint uVar1;
  uint uVar2;
  int result;
  int second;
  int first;
  
  uVar1 = _IO_getc((_IO_FILE *)fp);
  uVar2 = _IO_getc((_IO_FILE *)fp);
  result = (uVar1 & 0xff) * 0x100 + (uVar2 & 0xff);
  if ((result & 0x8000U) != 0) {
    result = result - 0x10000;
  }
  return result;
}



void Write8Bits(FILE *fp,int i)

{
  _IO_putc(i & 0xff,(_IO_FILE *)fp);
  return;
}



void Write16BitsLowHigh(FILE *fp,int i)

{
  _IO_putc(i & 0xff,(_IO_FILE *)fp);
  _IO_putc(i >> 8 & 0xff,(_IO_FILE *)fp);
  return;
}



void Write16BitsHighLow(FILE *fp,int i)

{
  _IO_putc(i >> 8 & 0xff,(_IO_FILE *)fp);
  _IO_putc(i & 0xff,(_IO_FILE *)fp);
  return;
}



int Read24BitsHighLow(FILE *fp)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int result;
  int third;
  int second;
  int first;
  
  uVar1 = _IO_getc((_IO_FILE *)fp);
  uVar2 = _IO_getc((_IO_FILE *)fp);
  uVar3 = _IO_getc((_IO_FILE *)fp);
  result = (uVar1 & 0xff) * 0x10000 + (uVar2 & 0xff) * 0x100 + (uVar3 & 0xff);
  if ((result & 0x800000U) != 0) {
    result = result - 0x1000000;
  }
  return result;
}



int Read32Bits(FILE *fp)

{
  uint uVar1;
  int iVar2;
  int result;
  int second;
  int first;
  
  uVar1 = Read16BitsLowHigh(fp);
  iVar2 = Read16BitsLowHigh(fp);
  return iVar2 * 0x10000 + (uVar1 & 0xffff);
}



int Read32BitsHighLow(FILE *fp)

{
  int iVar1;
  uint uVar2;
  int result;
  int second;
  int first;
  
  iVar1 = Read16BitsHighLow(fp);
  uVar2 = Read16BitsHighLow(fp);
  return iVar1 * 0x10000 + (uVar2 & 0xffff);
}



void Write32Bits(FILE *fp,int i)

{
  Write16BitsLowHigh(fp,i & 0xffff);
  Write16BitsLowHigh(fp,(uint)i >> 0x10);
  return;
}



void Write32BitsLowHigh(FILE *fp,int i)

{
  Write16BitsLowHigh(fp,i & 0xffff);
  Write16BitsLowHigh(fp,(uint)i >> 0x10);
  return;
}



void Write32BitsHighLow(FILE *fp,int i)

{
  Write16BitsHighLow(fp,(uint)i >> 0x10);
  Write16BitsHighLow(fp,i & 0xffff);
  return;
}



void ReadBytes(FILE *fp,char *p,int n)

{
  bool bVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = feof((FILE *)fp);
    bVar1 = n < 1;
    n = n + -1;
    if (bVar1 || iVar2 != 0) break;
    iVar2 = _IO_getc((_IO_FILE *)fp);
    *p = (char)iVar2;
    p = p + 1;
  }
  return;
}



void ReadBytesSwapped(FILE *fp,char *p,int n)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = p;
  while( true ) {
    iVar3 = feof((FILE *)fp);
    bVar2 = n < 1;
    n = n + -1;
    if (bVar2 || iVar3 != 0) break;
    iVar3 = _IO_getc((_IO_FILE *)fp);
    *pcVar4 = (char)iVar3;
    pcVar4 = pcVar4 + 1;
  }
  while (pcVar4 = pcVar4 + -1, p < pcVar4) {
    cVar1 = *p;
    *p = *pcVar4;
    *pcVar4 = cVar1;
    p = p + 1;
  }
  return;
}



void WriteBytes(FILE *fp,char *p,int n)

{
  char cVar1;
  bool bVar2;
  
  while (bVar2 = 0 < n, n = n + -1, bVar2) {
    cVar1 = *p;
    p = p + 1;
    _IO_putc((int)cVar1,(_IO_FILE *)fp);
  }
  return;
}



void WriteBytesSwapped(FILE *fp,char *p,int n)

{
  char cVar1;
  bool bVar2;
  
  p = p + n + -1;
  while (bVar2 = 0 < n, n = n + -1, bVar2) {
    cVar1 = *p;
    p = p + -1;
    _IO_putc((int)cVar1,(_IO_FILE *)fp);
  }
  return;
}



double ConvertFromIeeeExtended(char *bytes)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double f;
  ulong loMant;
  ulong hiMant;
  long expon;
  
  uVar1 = (int)bytes[1] & 0xffU | ((int)*bytes & 0x7fU) << 8;
  uVar2 = (int)bytes[5] & 0xffU |
          (int)bytes[2] << 0x18 | ((int)bytes[3] & 0xffU) << 0x10 | ((int)bytes[4] & 0xffU) << 8;
  uVar3 = (int)bytes[9] & 0xffU |
          (int)bytes[6] << 0x18 | ((int)bytes[7] & 0xffU) << 0x10 | ((int)bytes[8] & 0xffU) << 8;
  if (((uVar1 == 0) && (uVar2 == 0)) && (uVar3 == 0)) {
    f = 0.00000000;
  }
  else {
    if (uVar1 == 0x7fff) {
      f = INFINITY;
    }
    else {
      f = ldexp((double)(uVar2 + 0x80000000) + 2147483648.00000000,uVar1 - 0x401e);
      dVar4 = ldexp((double)(uVar3 + 0x80000000) + 2147483648.00000000,uVar1 - 0x403e);
      f = f + dVar4;
    }
  }
  if (*bytes < '\0') {
    f = -f;
  }
  return f;
}



double ReadIeeeExtendedHighLow(FILE *fp)

{
  int iVar1;
  int in_GS_OFFSET;
  double dVar2;
  char bytes [10];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  ReadBytes(fp,bytes,10);
  dVar2 = ConvertFromIeeeExtended(bytes);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return dVar2;
}



void ts_calc_times(timestatus_t *tstime,int sample_freq,int frameNum,int totalframes,int framesize)

{
  if ((frameNum < 1) || (tstime->elapsed_time <= 0.00000000)) {
    tstime->estimated_time = 0.00000000;
    tstime->speed_index = 0.00000000;
  }
  else {
    tstime->estimated_time = ((double)totalframes * tstime->elapsed_time) / (double)frameNum;
    tstime->speed_index =
         (double)(framesize * frameNum) / (tstime->elapsed_time * (double)sample_freq);
  }
  return;
}



void ts_time_decompose(ulong time_in_sec,char padded_char)

{
  uint uVar1;
  uint uVar2;
  uint sec;
  uint min;
  ulong hour;
  
  uVar1 = time_in_sec / 0xe10;
  uVar2 = (time_in_sec / 0x3c) % 0x3c;
  if (uVar1 == 0) {
    console_printf("   %2u:%02u%c",uVar2,time_in_sec % 0x3c,(int)padded_char);
  }
  else {
    if (uVar1 < 100) {
      console_printf("%2lu:%02u:%02u%c",uVar1,uVar2,time_in_sec % 0x3c,(int)padded_char);
    }
    else {
      console_printf("%6lu h%c",uVar1,(int)padded_char);
    }
  }
  return;
}



void timestatus(lame_global_flags *gfp)

{
  timestatus_t real_time;
  timestatus_t proc_time;
  int init;
  int sample_freq;
  int frameNum_00;
  int framesize_00;
  char *format;
  double dVar1;
  ulong local_4c;
  double delta;
  double tmx;
  int framesize;
  int totalframes;
  int frameNum;
  int samp_rate;
  int percent;
  
  sample_freq = lame_get_out_samplerate(gfp);
  frameNum_00 = lame_get_frameNum(gfp);
  totalframes = lame_get_totalframes(gfp);
  framesize_00 = lame_get_framesize(gfp);
  if (totalframes < frameNum_00) {
    totalframes = frameNum_00;
  }
  if (frameNum_00 == 0) {
    real_time.last_time = GetRealTime();
    proc_time.last_time = GetCPUTime();
    real_time.elapsed_time = 0.00000000;
    proc_time.elapsed_time = 0.00000000;
  }
  dVar1 = GetRealTime();
  delta = dVar1 - real_time.last_time;
  if (delta < 0.00000000) {
    delta = 0.00000000;
  }
  real_time.elapsed_time = real_time.elapsed_time + delta;
  real_time.last_time = dVar1;
  dVar1 = GetCPUTime();
  delta = dVar1 - proc_time.last_time;
  if (delta < 0.00000000) {
    delta = 0.00000000;
  }
  proc_time.elapsed_time = proc_time.elapsed_time + delta;
  proc_time.last_time = dVar1;
  if ((frameNum_00 == 0) && (init == 0)) {
    console_printf(
                  "\r    Frame          |  CPU time/estim | REAL time/estim | play/CPU |    ETA \n     0/       ( 0%%)|    0:00/     :  |    0:00/     :  |         x|     :  \r"
                  );
  }
  else {
    if (0 < frameNum_00) {
      init = 0;
    }
    ts_calc_times((timestatus_t *)0x805b420,sample_freq,frameNum_00,totalframes,framesize_00);
    ts_calc_times((timestatus_t *)0x805b440,sample_freq,frameNum_00,totalframes,framesize_00);
    if (frameNum_00 < totalframes) {
      percent = (int)ROUND(((double)frameNum_00 * 100.00000000) / (double)totalframes + 0.50000000);
    }
    else {
      percent = 100;
    }
    console_printf("\r%6i/%-6i");
    if (percent < 100) {
      format = " (%2d%%)|";
    }
    else {
      format = "(%3.3d%%)|";
    }
    console_printf(format);
    local_4c = (ulong)(longlong)ROUND(proc_time.elapsed_time);
    ts_time_decompose(local_4c,'/');
    local_4c = (ulong)(longlong)ROUND(proc_time.estimated_time);
    ts_time_decompose(local_4c,'|');
    local_4c = (ulong)(longlong)ROUND(real_time.elapsed_time);
    ts_time_decompose(local_4c,'/');
    local_4c = (ulong)(longlong)ROUND(real_time.estimated_time);
    ts_time_decompose(local_4c,'|');
    if (1.00000000 < proc_time.speed_index) {
      format = "%#9.5gx|";
    }
    else {
      format = "%9.4fx|";
    }
    console_printf(format);
    local_4c = (ulong)(longlong)ROUND(real_time.estimated_time - real_time.elapsed_time);
    ts_time_decompose(local_4c,' ');
  }
  return;
}



void timestatus_finish(void)

{
  console_printf("\n");
  return;
}



void encoder_progress_begin(lame_global_flags *gf,char *inPath,char *outPath)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  undefined *puVar11;
  float10 fVar12;
  char *mode_names [2] [4];
  
  if (9 < silent) {
    return;
  }
  lame_print_config(gf);
  iVar1 = strcmp(outPath,"-");
  pcVar10 = outPath;
  if (iVar1 == 0) {
    pcVar10 = "<stdout>";
  }
  sVar2 = strlen(inPath);
  sVar3 = strlen(outPath);
  if (sVar2 + sVar3 < 0x42) {
    pcVar9 = "";
  }
  else {
    pcVar9 = "\n     ";
  }
  iVar1 = strcmp(inPath,"-");
  if (iVar1 == 0) {
    inPath = "<stdin>";
  }
  console_printf("Encoding %s%s to %s\n",inPath,pcVar9,pcVar10);
  iVar1 = lame_get_out_samplerate(gf);
  console_printf("Encoding as %g kHz ",(double)iVar1 * 0.00100000);
  uVar4 = lame_get_VBR(gf);
  if (uVar4 == 2) {
    uVar5 = lame_get_quality(gf);
    fVar12 = (float10)lame_get_VBR_quality(gf);
    iVar1 = lame_get_out_samplerate(gf);
    if (iVar1 < 16000) {
      puVar11 = &DAT_080599b1;
    }
    else {
      puVar11 = &DAT_08059978;
    }
    iVar1 = lame_get_version(gf);
    iVar7 = lame_get_force_ms(gf);
    iVar8 = lame_get_mode(gf);
    console_printf("%s MPEG-%u%s Layer III VBR(q=%g) qval=%i\n",mode_names[iVar7 * 4 + iVar8],
                   2 - iVar1,puVar11,(double)fVar12,uVar5);
    goto LAB_080537a1;
  }
  if (uVar4 < 3) {
    if (uVar4 == 1) {
LAB_08053539:
      fVar12 = (float10)lame_get_VBR_quality(gf);
      iVar1 = lame_get_out_samplerate(gf);
      if (iVar1 < 16000) {
        puVar11 = &DAT_080599b1;
      }
      else {
        puVar11 = &DAT_08059978;
      }
      iVar1 = lame_get_version(gf);
      iVar7 = lame_get_force_ms(gf);
      iVar8 = lame_get_mode(gf);
      console_printf("%s MPEG-%u%s Layer III VBR(q=%g)\n",mode_names[iVar7 * 4 + iVar8],2 - iVar1,
                     puVar11,(double)fVar12);
      goto LAB_080537a1;
    }
  }
  else {
    if (uVar4 == 3) {
      uVar5 = lame_get_quality(gf);
      uVar6 = lame_get_VBR_mean_bitrate_kbps(gf);
      fVar12 = (float10)lame_get_compression_ratio(gf);
      iVar1 = lame_get_out_samplerate(gf);
      if (iVar1 < 16000) {
        puVar11 = &DAT_080599b1;
      }
      else {
        puVar11 = &DAT_08059978;
      }
      iVar1 = lame_get_version(gf);
      iVar7 = lame_get_force_ms(gf);
      iVar8 = lame_get_mode(gf);
      console_printf("%s MPEG-%u%s Layer III (%gx) average %d kbps qval=%i\n",
                     mode_names[iVar7 * 4 + iVar8],2 - iVar1,puVar11,
                     (double)(int)ROUND((float10)0.50000000 + (float10)10.00000000 * fVar12) *
                     0.10000000,uVar6,uVar5);
      goto LAB_080537a1;
    }
    if (uVar4 == 4) goto LAB_08053539;
  }
  uVar5 = lame_get_quality(gf);
  uVar6 = lame_get_brate(gf);
  fVar12 = (float10)lame_get_compression_ratio(gf);
  iVar1 = lame_get_out_samplerate(gf);
  if (iVar1 < 16000) {
    puVar11 = &DAT_080599b1;
  }
  else {
    puVar11 = &DAT_08059978;
  }
  iVar1 = lame_get_version(gf);
  iVar7 = lame_get_force_ms(gf);
  iVar8 = lame_get_mode(gf);
  console_printf("%s MPEG-%u%s Layer III (%gx) %3d kbps qval=%i\n",mode_names[iVar7 * 4 + iVar8],
                 2 - iVar1,puVar11,
                 (double)(int)ROUND((float10)0.50000000 + (float10)10.00000000 * fVar12) *
                 0.10000000,uVar6,uVar5);
LAB_080537a1:
  if (silent < -9) {
    lame_print_internals(gf);
  }
  return;
}



void encoder_progress(lame_global_flags *gf)

{
  int iVar1;
  double dVar2;
  double dif;
  double act;
  int frames;
  
  if (silent < 1) {
    iVar1 = lame_get_frameNum(gf);
    if (0.00000000 < update_interval) {
      if ((iVar1 != 0) && (iVar1 != 9)) {
        dVar2 = GetRealTime();
        if ((0.00000000 <= dVar2 - last_time) && ((float)(dVar2 - last_time) < update_interval)) {
          return;
        }
      }
      last_time = GetRealTime();
    }
    else {
      if (iVar1 != (iVar1 / 100) * 100) {
        return;
      }
    }
    if (brhist != 0) {
      brhist_jump_back();
    }
    timestatus(gf);
    if (brhist != 0) {
      brhist_disp(gf);
    }
    console_flush();
  }
  return;
}



void encoder_progress_end(lame_global_flags *gf)

{
  if (silent < 1) {
    if (brhist != 0) {
      brhist_jump_back();
    }
    timestatus(gf);
    if (brhist != 0) {
      brhist_disp(gf);
    }
    timestatus_finish();
  }
  return;
}



void decoder_progress(mp3data_struct *mp3data)

{
  uint uVar1;
  int last;
  int local_24;
  undefined *local_28;
  int local_20;
  int curr;
  
  local_20 = mp3data->bitrate;
  local_24 = mp3data->totalframes;
  local_28 = (undefined *)mp3data->framenum;
  console_printf("\rFrame#%6i/%-6i %3i kbps",local_28,local_24,local_20);
  if (mp3data->mode == 1) {
    uVar1 = mp3data->mode_ext;
    if ((uVar1 & 1) == 0) {
      if ((last & 1U) == 0) {
        local_24 = 0x20;
      }
      else {
        local_24 = 0x69;
      }
    }
    else {
      if ((last & 1U) == 0) {
        local_24 = 0x69;
      }
      else {
        local_24 = 0x49;
      }
    }
    if ((uVar1 & 2) == 0) {
      if ((last & 2U) == 0) {
        local_28 = &DAT_08059a8e;
      }
      else {
        local_28 = &DAT_08059a89;
      }
    }
    else {
      if ((last & 2U) == 0) {
        local_28 = &DAT_08059a89;
      }
      else {
        local_28 = &DAT_08059a84;
      }
    }
    console_printf("  %s  %c",local_28,local_24,local_20);
    last = uVar1;
  }
  else {
    console_printf("         ",local_28,local_24,local_20);
    last = 0;
  }
  console_printf("        \b\b\b\b\b\b\b\b",local_28,local_24,local_20);
  return;
}



void decoder_progress_finish(void)

{
  console_printf("\n");
  return;
}



int calculate_index(int *array,int len,int value)

{
  int i;
  
  i = 0;
  while( true ) {
    if (len <= i) {
      return -1;
    }
    if (array[i] == value) break;
    i = i + 1;
  }
  return i;
}



int brhist_init(lame_global_flags *gf,int bitrate_kbps_min,int bitrate_kbps_max)

{
  int iVar1;
  
  brhist.hist_printed_lines = 0;
  lame_bitrate_kbps(gf,0x805b488);
  brhist.vbr_bitrate_min_index = calculate_index(brhist.kbps,0xe,bitrate_kbps_min);
  brhist.vbr_bitrate_max_index = calculate_index(brhist.kbps,0xe,bitrate_kbps_max);
  if ((brhist.vbr_bitrate_min_index < 0xe) && (brhist.vbr_bitrate_max_index < 0xe)) {
    memset(brhist.bar_asterisk,0x2a,0x200);
    memset(brhist.bar_percent,0x25,0x200);
    memset(brhist.bar_space,0x2d,0x200);
    memset(brhist.bar_coded,0x2d,0x200);
    iVar1 = 0;
  }
  else {
    error_printf("lame internal error: VBR min %d kbps or VBR max %d kbps not allowed.\n",
                 bitrate_kbps_min,bitrate_kbps_max);
    iVar1 = -1;
  }
  return iVar1;
}



int digits(uint number)

{
  int ret;
  
  ret = 1;
  if (99999999 < number) {
    ret = 9;
    number = number / 100000000;
  }
  if (9999 < number) {
    ret = ret + 4;
    number = number / 10000;
  }
  if (99 < number) {
    ret = ret + 2;
    number = number / 100;
  }
  if (9 < number) {
    ret = ret + 1;
  }
  return ret;
}



void brhist_disp_line(int i,int br_hist_TOT,int br_hist_LR,int full,int frames)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_GS_OFFSET;
  int res;
  int ppt;
  int barlen_LR;
  int barlen_TOT;
  char brppt [14];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar2 = digits(frames);
  iVar2 = iVar2 + 8;
  if (full == 0) {
    barlen_LR = 0;
    barlen_TOT = 0;
  }
  else {
    barlen_TOT = ((Console_IO.disp_width - iVar2) * br_hist_TOT + full + -1) / full;
    barlen_LR = ((Console_IO.disp_width - iVar2) * br_hist_LR + full + -1) / full;
  }
  iVar3 = digits(frames);
  sprintf(brppt," [%*i]",iVar3,br_hist_TOT);
  if (Console_IO.str_clreoln[0] == '\0') {
    console_printf("\n%3d%s %.*s%.*s%*s",brhist.kbps[i],brppt,barlen_LR,0x805b6c5,
                   barlen_TOT - barlen_LR,0x805b4c4,(Console_IO.disp_width - iVar2) - barlen_TOT,
                   &DAT_08059b6f);
  }
  else {
    console_printf("\n%3d%s %.*s%.*s%s",brhist.kbps[i],brppt,barlen_LR,0x805b6c5,
                   barlen_TOT - barlen_LR,0x805b4c4,0x805bd06);
  }
  brhist.hist_printed_lines = brhist.hist_printed_lines + 1;
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void progress_line(lame_global_flags *gf,int full,int frames)

{
  int iVar1;
  float fVar2;
  uint number;
  int iVar3;
  int iVar4;
  int in_GS_OFFSET;
  ulonglong local_5c;
  int srate;
  int fsize;
  uint sec;
  uint min;
  uint hour;
  float time_in_sec;
  int res;
  int barlen_RST;
  int barlen_COD;
  int barlen_TOT;
  char rst [20];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  rst._0_2_ = 0;
  rst._2_4_ = 0;
  rst._6_4_ = 0;
  rst._10_4_ = 0;
  rst._14_4_ = 0;
  rst._18_2_ = 0;
  res = 1;
  time_in_sec = 0.00000000;
  iVar3 = lame_get_framesize(gf);
  iVar4 = lame_get_out_samplerate(gf);
  if (full < frames) {
    full = frames;
  }
  if (0 < iVar4) {
    time_in_sec = ((float)(full - frames) * (float)iVar3) / (float)iVar4;
  }
  local_5c._0_4_ = (uint)(longlong)ROUND(time_in_sec / 3600.00000000);
  number = (uint)local_5c;
  local_5c = (ulonglong)((uint)local_5c * 0xe10);
  fVar2 = (float)local_5c;
  local_5c._0_4_ = (uint)(longlong)ROUND((time_in_sec - fVar2) / 60.00000000);
  iVar3 = (uint)local_5c;
  local_5c = (ulonglong)((uint)local_5c * 0x3c);
  local_5c._0_4_ = (uint)(longlong)ROUND((time_in_sec - fVar2) - (float)local_5c);
  if (full == 0) {
    barlen_RST = 0;
    barlen_COD = 0;
    barlen_TOT = 0;
  }
  else {
    if (number == 0) {
      sprintf(rst,"%02u:%02u",iVar3,(uint)local_5c);
      res = 6;
    }
    else {
      iVar4 = digits(number);
      sprintf(rst,"%*d:%02u:%02u",iVar4,number,iVar3,(uint)local_5c);
      res = digits(number);
      res = res + 7;
    }
    barlen_TOT = (((Console_IO.disp_width - res) + 1) * full + -1) / full;
    barlen_COD = ((Console_IO.disp_width - res) * frames + full + -1) / full;
    barlen_RST = barlen_TOT - barlen_COD;
    if (barlen_RST == 0) {
      sprintf(rst,"%.*s",res + -1,0x805b8c6);
    }
  }
  if (Console_IO.str_clreoln[0] == '\0') {
    console_printf("\n%.*s%s%.*s%*s",barlen_COD,0x805b8c6,rst,barlen_RST,0x805bac7,
                   (Console_IO.disp_width - res) - barlen_TOT,&DAT_08059b6f);
  }
  else {
    console_printf("\n%.*s%s%.*s%s",barlen_COD,0x805b8c6,rst,barlen_RST,0x805bac7,0x805bd06);
  }
  brhist.hist_printed_lines = brhist.hist_printed_lines + 1;
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



int stats_value(double x)

{
  int iVar1;
  
  if (x <= 0.00000000) {
    iVar1 = 0;
  }
  else {
    console_printf(" %5.1f",x);
    iVar1 = 6;
  }
  return iVar1;
}



int stats_head(double x,char *txt)

{
  int iVar1;
  
  if (x <= 0.00000000) {
    iVar1 = 0;
  }
  else {
    console_printf(txt);
    iVar1 = 6;
  }
  return iVar1;
}



void stats_line(double *stat)

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
  int n;
  
  console_printf("\n   kbps     ");
  iVar1 = stats_head(stat[1],"  mono");
  iVar2 = stats_head(stat[2],"   IS ");
  iVar3 = stats_head(stat[3],"   LR ");
  iVar4 = stats_head(stat[4],"   MS ");
  console_printf(" %%    ");
  iVar5 = stats_head(stat[5]," long ");
  iVar6 = stats_head(stat[6],"switch");
  iVar7 = stats_head(stat[7]," short");
  iVar8 = stats_head(stat[8]," mixed");
  iVar9 = console_printf(" %%");
  if (Console_IO.str_clreoln[0] == '\0') {
    console_printf("%*s",Console_IO.disp_width -
                         (iVar1 + iVar2 + iVar3 + iVar4 + 0x13 + iVar5 + iVar6 + iVar7 + iVar8 +
                         iVar9),&DAT_08059b6f);
  }
  else {
    console_printf("%s",0x805bd06);
  }
  brhist.hist_printed_lines = brhist.hist_printed_lines + 1;
  console_printf("\n  %5.1f     ",SUB84(*stat,0),(int)((ulonglong)*stat >> 0x20));
  iVar1 = stats_value(stat[1]);
  iVar2 = stats_value(stat[2]);
  iVar3 = stats_value(stat[3]);
  iVar4 = stats_value(stat[4]);
  console_printf("      ");
  iVar5 = stats_value(stat[5]);
  iVar6 = stats_value(stat[6]);
  iVar7 = stats_value(stat[7]);
  iVar8 = stats_value(stat[8]);
  if (Console_IO.str_clreoln[0] == '\0') {
    console_printf("%*s",Console_IO.disp_width -
                         (iVar1 + iVar2 + iVar3 + iVar4 + 0x13 + iVar5 + iVar6 + iVar7 + iVar8),
                   &DAT_08059b6f);
  }
  else {
    console_printf("%s",0x805bd06);
  }
  brhist.hist_printed_lines = brhist.hist_printed_lines + 1;
  return;
}



void brhist_disp(lame_global_flags *gf)

{
  bool bVar1;
  int full;
  double *pdVar2;
  int br_sm_hist [14] [4];
  double stat [9];
  int br_hist [14];
  int bl_type [6];
  int st_mode [4];
  double sum;
  int show;
  int st_frames;
  int most_often;
  int frames;
  int lines_used;
  int i;
  
  lines_used = 0;
  sum = 0.00000000;
  full = 0x12;
  pdVar2 = stat;
  while (full != 0) {
    full = full + -1;
    *(undefined4 *)pdVar2 = 0;
    pdVar2 = (double *)((int)pdVar2 + 4);
  }
  st_frames = 0;
  brhist.hist_printed_lines = 0;
  lame_bitrate_stereo_mode_hist(gf,br_sm_hist);
  lame_bitrate_hist(gf,br_hist);
  lame_stereo_mode_hist(gf,st_mode);
  lame_block_type_hist(gf,bl_type);
  most_often = 0;
  frames = 0;
  i = 0;
  while (i < 0xe) {
    frames = frames + br_hist[i];
    sum = sum + (double)(brhist.kbps[i] * br_hist[i]);
    if (most_often < br_hist[i]) {
      most_often = br_hist[i];
    }
    if (br_hist[i] != 0) {
      lines_used = lines_used + 1;
    }
    i = i + 1;
  }
  i = 0;
  while (i < 0xe) {
    if ((br_hist[i] == 0) || (lines_used < 2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) || ((brhist.vbr_bitrate_min_index <= i && (i <= brhist.vbr_bitrate_max_index)))) {
      brhist_disp_line(i,br_hist[i],br_sm_hist[i * 4],most_often,frames);
    }
    i = i + 1;
  }
  i = 0;
  while (i < 4) {
    st_frames = st_frames + st_mode[i];
    i = i + 1;
  }
  if (0 < frames) {
    stat[0] = sum / (double)frames;
    stat[1] = ((double)(frames - st_frames) * 100.00000000) / (double)frames;
  }
  if (0 < st_frames) {
    stat[2] = 0.00000000;
    stat[3] = ((double)st_mode[0] * 100.00000000) / (double)st_frames;
    stat[4] = ((double)st_mode[2] * 100.00000000) / (double)st_frames;
  }
  if (0 < bl_type[5]) {
    stat[5] = ((double)bl_type[0] * 100.00000000) / (double)bl_type[5];
    stat[6] = ((double)(bl_type[1] + bl_type[3]) * 100.00000000) / (double)bl_type[5];
    stat[7] = ((double)bl_type[2] * 100.00000000) / (double)bl_type[5];
    stat[8] = ((double)bl_type[4] * 100.00000000) / (double)bl_type[5];
  }
  full = lame_get_totalframes(gf);
  progress_line(gf,full,frames);
  stats_line(stat);
  return;
}



void brhist_jump_back(void)

{
  console_up(brhist.hist_printed_lines);
  brhist.hist_printed_lines = 0;
  return;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x0805475e)
// WARNING: Removing unreachable block (ram,0x08054760)

void __libc_csu_init(void)

{
  _init();
  return;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = __xstat64(3,__file,__buf);
  return iVar1;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = __fxstat64(3,__fd,__buf);
  return iVar1;
}



void __do_global_ctors_aux(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  if (__CTOR_LIST__ != (code *)0xffffffff) {
    ppcVar2 = (code **)&__CTOR_LIST__;
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


