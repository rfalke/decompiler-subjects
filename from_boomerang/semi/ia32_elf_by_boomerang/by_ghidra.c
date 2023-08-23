typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef int    sdword;
typedef long long    sqword;
typedef short    sword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef int    wchar_t;
typedef unsigned short    word;
typedef uint wint_t;

typedef uint __fsfilcnt_t;

typedef int __pid_t;

typedef int __blkcnt_t;

typedef uint size_t;

typedef int __time_t;

typedef int __clockid_t;

typedef int __ssize_t;

typedef ulonglong __u_quad_t;

typedef uint __rlim_t;

typedef int __off_t;

typedef ushort __u_short;

typedef qword __fsfilcnt64_t;

typedef longlong __quad_t;

typedef uint __useconds_t;

typedef qword __rlim64_t;

typedef int __key_t;

typedef dword _G_uint32_t;

typedef uchar __uint8_t;

typedef int __suseconds_t;

typedef int __clock_t;

typedef int __daddr_t;

typedef sdword __int32_t;

typedef word __uint16_t;

typedef uint __id_t;

typedef sword _G_int16_t;

typedef uint __gid_t;

typedef int __timer_t;

typedef int __blksize_t;

typedef qword __uint64_t;

typedef uint __uid_t;

typedef qword __fsblkcnt64_t;

typedef char __int8_t;

typedef sqword __off64_t;

typedef uchar __u_char;

typedef uint __nlink_t;

typedef sqword __int64_t;

typedef ulonglong __dev_t;

typedef uint __fsblkcnt_t;

typedef int __swblk_t;

typedef dword __uint32_t;

typedef word _G_uint16_t;

typedef sqword __blkcnt64_t;

typedef sdword _G_int32_t;

typedef uint __socklen_t;

typedef uint __u_int;

typedef qword __ino64_t;

typedef uint __u_long;

typedef uint __mode_t;

typedef int __intptr_t;

typedef uint __ino_t;

typedef sword __int16_t;

typedef struct __mbstate_t __mbstate_t, *P__mbstate_t;

typedef union anon_union_4_2_91654ee9_for___value anon_union_4_2_91654ee9_for___value, *Panon_union_4_2_91654ee9_for___value;

union anon_union_4_2_91654ee9_for___value {
    wint_t __wch;
    char __wchb[4];
};

struct __mbstate_t {
    int __count;
    union anon_union_4_2_91654ee9_for___value __value;
};

typedef __quad_t * __qaddr_t;

typedef char * __caddr_t;

typedef struct __fsid_t __fsid_t, *P__fsid_t;

struct __fsid_t {
    int __val[2];
};

typedef __off64_t __loff_t;

typedef struct __gconv_info __gconv_info, *P__gconv_info;

typedef struct __gconv_step __gconv_step, *P__gconv_step;

typedef struct __gconv_step_data __gconv_step_data, *P__gconv_step_data;

typedef struct __gconv_loaded_object __gconv_loaded_object, *P__gconv_loaded_object;

typedef int (* __gconv_fct)(struct __gconv_step *, struct __gconv_step_data *, uchar * *, uchar *, uchar * *, size_t *, int, int);

typedef wint_t (* __gconv_btowc_fct)(struct __gconv_step *, uchar);

typedef int (* __gconv_init_fct)(struct __gconv_step *);

typedef void (* __gconv_end_fct)(struct __gconv_step *);

typedef struct __gconv_trans_data __gconv_trans_data, *P__gconv_trans_data;

typedef int (* __gconv_trans_fct)(struct __gconv_step *, struct __gconv_step_data *, void *, uchar *, uchar * *, uchar *, uchar * *, size_t *);

typedef int (* __gconv_trans_context_fct)(void *, uchar *, uchar *, uchar *, uchar *);

typedef void (* __gconv_trans_end_fct)(void *);

struct __gconv_trans_data {
    __gconv_trans_fct __trans_fct;
    __gconv_trans_context_fct __trans_context_fct;
    __gconv_trans_end_fct __trans_end_fct;
    void * __data;
    struct __gconv_trans_data * __next;
};

struct __gconv_step_data {
    uchar * __outbuf;
    uchar * __outbufend;
    int __flags;
    int __invocation_counter;
    int __internal_use;
    struct __mbstate_t * __statep;
    struct __mbstate_t __state;
    struct __gconv_trans_data * __trans;
};

struct __gconv_info {
    size_t __nsteps;
    struct __gconv_step * __steps;
    struct __gconv_step_data __data[0];
};

struct __gconv_step {
    struct __gconv_loaded_object * __shlib_handle;
    char * __modname;
    int __counter;
    char * __from_name;
    char * __to_name;
    __gconv_fct __fct;
    __gconv_btowc_fct __btowc_fct;
    __gconv_init_fct __init_fct;
    __gconv_end_fct __end_fct;
    int __min_needed_from;
    int __max_needed_from;
    int __min_needed_to;
    int __max_needed_to;
    int __stateful;
    void * __data;
};

struct __gconv_loaded_object {
};

typedef int (* __gconv_trans_init_fct)(void * *, char *);

typedef struct __gconv_info * __gconv_t;

typedef enum anon_enum_32 {
    __GCONV_OK=0,
    __GCONV_IS_LAST=1,
    __GCONV_NOCONV=1,
    __GCONV_IGNORE_ERRORS=2,
    __GCONV_NODB=2,
    __GCONV_NOMEM=3,
    __GCONV_EMPTY_INPUT=4,
    __GCONV_FULL_OUTPUT=5,
    __GCONV_ILLEGAL_INPUT=6,
    __GCONV_INCOMPLETE_INPUT=7,
    __GCONV_ILLEGAL_DESCRIPTOR=8,
    __GCONV_INTERNAL_ERROR=9
} anon_enum_32;

typedef int (* __gconv_trans_query_fct)(char *, char * * *, size_t *);

typedef union _G_iconv_t _G_iconv_t, *P_G_iconv_t;

typedef struct anon_struct_44_2_2f34be42_for___combined anon_struct_44_2_2f34be42_for___combined, *Panon_struct_44_2_2f34be42_for___combined;

struct anon_struct_44_2_2f34be42_for___combined {
    struct __gconv_info __cd;
    struct __gconv_step_data __data;
};

union _G_iconv_t {
    struct __gconv_info __cd;
    struct anon_struct_44_2_2f34be42_for___combined __combined;
};

typedef struct _G_fpos64_t _G_fpos64_t, *P_G_fpos64_t;

struct _G_fpos64_t {
    __off64_t __pos;
    struct __mbstate_t __state;
};

typedef struct _G_fpos_t _G_fpos_t, *P_G_fpos_t;

struct _G_fpos_t {
    __off_t __pos;
    struct __mbstate_t __state;
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

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  call_gmon_start();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



void FUN_08048248(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __libc_start_main(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
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



void __regparm3 call_gmon_start(undefined4 param_1)

{
  __gmon_start__(param_1);
  return;
}



void __do_global_dtors_aux(void)

{
  code *pcVar1;
  
  if (completed_1 == '\0') {
    completed_1 = 0;
    pcVar1 = *(code **)p_0;
    while (pcVar1 != (code *)0x0) {
      p_0 = p_0 + 4;
      (*pcVar1)();
      pcVar1 = *(code **)p_0;
    }
    completed_1 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08048314)

void frame_dummy(void)

{
  return;
}



undefined4 main(int param_1)

{
  if (param_1 < 3) {
    do {
      if (param_1 == 0xb) {
        return 7;
      }
    } while (param_1 < 0xc);
  }
  else {
    do {
      if ((param_1 < 3) && (3 < param_1)) {
        if (4 < param_1) goto LAB_0804836e;
      }
      else {
        printf("9");
LAB_0804836e:
        printf("5");
      }
    } while (param_1 < 6);
  }
  return 7;
}



// WARNING: Removing unreachable block (ram,0x0804840d)
// WARNING: Removing unreachable block (ram,0x08048410)

void __libc_csu_init(void)

{
  EVP_PKEY_CTX *unaff_EBX;
  
  _init(unaff_EBX);
  return;
}



// WARNING: Removing unreachable block (ram,0x08048444)
// WARNING: Removing unreachable block (ram,0x08048452)

void __libc_csu_fini(void)

{
  _fini();
  return;
}



undefined4 __regparm3 __do_global_ctors_aux(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  code **ppcVar2;
  
  ppcVar2 = &__CTOR_LIST__;
  pcVar1 = __CTOR_LIST__;
  if (__CTOR_LIST__ != (code *)0xffffffff) {
    do {
      ppcVar2 = ppcVar2 + -1;
      (*pcVar1)();
      pcVar1 = *ppcVar2;
    } while (pcVar1 != (code *)0xffffffff);
  }
  return param_2;
}



void __regparm3 _fini(undefined4 param_1,undefined4 param_2)

{
  __do_global_dtors_aux(param_2);
  return;
}


