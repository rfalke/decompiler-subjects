typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
typedef unsigned long long    undefined8;
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

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

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

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;




// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_08049030(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
                    // WARNING: Subroutine does not return
  __assert_fail(__assertion,__file,__line,__function);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,__libc_csu_init,__libc_csu_fini,param_1,auStack_4)
  ;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



int _annobin_init_c(void *param_1,void *param_2)

{
  int in_EAX;
  
  return in_EAX;
}



int _dl_relocate_static_pie(void *param_1,void *param_2)

{
  int in_EAX;
  
  return in_EAX;
}



// WARNING: This is an inlined function

void __x86_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x080490fc)
// WARNING: Removing unreachable block (ram,0x08049105)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08049148)
// WARNING: Removing unreachable block (ram,0x08049151)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_6844 == '\0') {
    deregister_tm_clones();
    completed_6844 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined4 main(int param_1)

{
  int iVar1;
  
  F2XM1(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x30,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FABS(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x34,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FADD(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x38,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FBSTP();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x3c,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FBLD();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x40,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FCHS(0xbfe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x44,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FCMOV(0);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x48,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  FCMOV(0xffffffff);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x4a,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FCOM(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x4e,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FCOMI(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x52,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FCOS(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x56,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FDIV(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x5a,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FDIVR(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x5e,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FILD();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x62,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FIST(0x4028b0a3d70a3d71);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x66,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FLD();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x6a,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FLDC();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x6e,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FMUL(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x72,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FPATAN(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x76,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FPREM(0x415d97356f0c5995);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x7a,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FPTAN(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x7e,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FRNDINT(0x3fe999999999999a);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x82,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FSCALE(0x4006666666666666);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x86,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FSIN(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x8a,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FSINCOS(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x8e,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FSQRT(0x4000000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x92,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FST(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x96,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FSUB(0x3fe999999999999a);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x9a,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FTST(0xc045000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x9e,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FXAM(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0xa2,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FXCH(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0xa6,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FXTRACT(0x3fe0000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0xaa,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FYL2X(0x4070000000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0xae,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FYL2XP1(0x406fe00000000000);
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0xb2,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  if (param_1 == 0x2a) {
    NOT_EXECUTED();
  }
  return 0;
}



undefined4 F2XM1(void)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)f2xm1(-(longdouble)1);
  printf("F2XM1(-1):   should=   -0.500000/  -5.000000e-01 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)f2xm1((longdouble)0);
  printf("F2XM1(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)f2xm1((longdouble)1);
  printf("F2XM1(+1):   should=    1.000000/   1.000000e+00 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)f2xm1((longdouble)1 / (longdouble)3.141592653589793);
  printf("F2XM1(1/pi): should=    0.246869/   2.468690e-01 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  return 0;
}



undefined4 FABS(double param_1)

{
  printf("FABS(para):   should=                            is=%12f/%15e\n",ABS(param_1),ABS(param_1)
        );
  printf("FABS(-1):   should=     1.000000/   1.000000e+00 is=%12f/%15e\n",0x3ff0000000000000,
         0x3ff0000000000000);
  printf("FABS(-0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n",0,0);
  printf("FABS(+1):   should=     1.000000/   1.000000e+00 is=%12f/%15e\n",0x3ff0000000000000,
         0x3ff0000000000000);
  return 0;
}



undefined4 FADD(double param_1)

{
  printf("FADD(para+1):     should=                             is=%12f/%15e\n",param_1 + 1.0,
         param_1 + 1.0);
  printf("FADD(para+12.34): should=                             is=%12f/%15e\n",param_1 + 12.34,
         param_1 + 12.34);
  printf("FADD(pi+1/pi):    should=    3.459903/   3.459903e+00 is=%12f/%15e\n",0x400bade161fd6628,
         0x400bade161fd6628);
  printf("FADD(1+1+-0):     should=    2.000000/   2.000000e+00 is=%12f/%15e\n",0x4000000000000000,
         0x4000000000000000);
  printf("FADD(pi+1000):    should= 1003.141593/   1.003142e+03 is=%12f/%15e\n",0x408f5921fb54442d,
         0x408f5921fb54442d);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FBSTP(void)

{
  _buffer = convert_bcd(-(longdouble)1.234567890112233e+17);
  printf("FBSTP(%f) should=0x44 0x33 0x22 0x11 0x90 0x78 0x56 0x34 0x12 0x80 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n"
         ,0xc37b69b4ba61fd33,(uint)buffer,(uint)DAT_08050029,(uint)DAT_0805002a,(uint)DAT_0805002b,
         (uint)DAT_0805002c,(uint)DAT_0805002d,(uint)DAT_0805002e,(uint)DAT_0805002f,
         (uint)DAT_08050030,(uint)DAT_08050031);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FBLD(void)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)convert_bcd(_readbuffer);
  printf("FBLD(0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x): should=-123456789088776656.000000/  -1.234568e+17 is=%12f/%15e\n"
         ,0x55,0x66,0x77,0x88,0x90,0x78,0x56,0x34,0x12,0x80,(double)lVar1,(double)lVar1);
  return 0;
}



undefined4 FCHS(double param_1)

{
  printf("FCHS(para):  should=                             is=%12f/%15e\n",-param_1,-param_1);
  printf("FCHS(pi):    should=   -3.141593/  -3.141593e+00 is=%12f/%15e\n",0xc00921fb54442d18,
         0xc00921fb54442d18);
  printf("FCHS(0-pi):  should=    3.141593/   3.141593e+00 is=%12f/%15e\n",0x400921fb54442d18,
         0x400921fb54442d18);
  return 0;
}



undefined4 FCMOV(uint param_1)

{
  undefined8 uVar1;
  
  printf("using EFLAGS=0x%0x\n",param_1 >> 8 & 0xff);
  uVar1 = 0x400921fb54442d18;
  if ((param_1 & 0x100) != 0) {
    uVar1 = 0x3ff0000000000000;
  }
  printf("  FCMOV(below ? 1 : pi):           should=                             is=%12f/%15e\n",
         uVar1,uVar1);
  uVar1 = 0x400921fb54442d18;
  if ((param_1 & 0x4000) != 0) {
    uVar1 = 0x3ff0000000000000;
  }
  printf("  FCMOV(equal ? 1 : pi):           should=                             is=%12f/%15e\n",
         uVar1,uVar1);
  uVar1 = 0x400921fb54442d18;
  if ((param_1 & 0x100) != 0 || (param_1 & 0x4000) != 0) {
    uVar1 = 0x3ff0000000000000;
  }
  printf("  FCMOV(below_or_equal ? 1 : pi):  should=                             is=%12f/%15e\n",
         uVar1,uVar1);
  uVar1 = 0x400921fb54442d18;
  if ((param_1 & 0x400) != 0) {
    uVar1 = 0x3ff0000000000000;
  }
  printf("  FCMOV(unordered ? 1 : pi):       should=                             is=%12f/%15e\n",
         uVar1,uVar1);
  uVar1 = 0x400921fb54442d18;
  if ((param_1 & 0x100) == 0) {
    uVar1 = 0x3ff0000000000000;
  }
  printf("  FCMOV(!below ? 1 : pi):          should=                             is=%12f/%15e\n",
         uVar1,uVar1);
  uVar1 = 0x400921fb54442d18;
  if ((param_1 & 0x4000) == 0) {
    uVar1 = 0x3ff0000000000000;
  }
  printf("  FCMOV(!equal ? 1 : pi):          should=                             is=%12f/%15e\n",
         uVar1,uVar1);
  uVar1 = 0x400921fb54442d18;
  if ((param_1 & 0x100) == 0 || (param_1 & 0x4000) == 0) {
    uVar1 = 0x3ff0000000000000;
  }
  printf("  FCMOV(!below_or_equal ? 1 : pi): should=                             is=%12f/%15e\n",
         uVar1,uVar1);
  uVar1 = 0x400921fb54442d18;
  if ((param_1 & 0x400) == 0) {
    uVar1 = 0x3ff0000000000000;
  }
  printf("  FCMOV(!unordered ? 1 : pi):      should=                             is=%12f/%15e\n",
         uVar1,uVar1);
  return 0;
}



undefined4 FCOM(float param_1,undefined4 param_2)

{
  printf("FCOM(1,para): should=0x0000 is=0x%04x\n",
         (uint)(ushort)((ushort)(1.0 < param_1) << 8 | (ushort)(param_1 == 1.0) << 0xe));
  printf("FCOM(para,1): should=0x0100 is=0x%04x\n",
         (uint)(ushort)((ushort)((double)CONCAT44(param_2,param_1) < 1.0) << 8 |
                       (ushort)((double)CONCAT44(param_2,param_1) == 1.0) << 0xe));
  printf("FCOM(pi,1):   should=0x0000 is=0x%04x\n",0);
  printf("FCOM(1,pi):   should=0x0100 is=0x%04x\n",0x100);
  printf("FCOM(1,1):    should=0x4000 is=0x%04x\n",0x4000);
  printf("FCOM(1,nan):  should=0x4500 is=0x%04x\n",
         (uint)(ushort)((ushort)((longdouble)1 < (longdouble)0 / (longdouble)0) << 8 |
                       (ushort)((longdouble)1 == (longdouble)0 / (longdouble)0) << 0xe));
  printf("FICOM(pi,3):  should=0x0000 is=0x%04x\n",0);
  printf("FICOM(pi,4):  should=0x0100 is=0x%04x\n",0x100);
  return 0;
}



undefined4 FCOMI(double param_1)

{
  printf("FCOMI(1,para): should=0x00 is=0x%02x\n",(param_1 == 1.0) << 6 | 1.0 < param_1);
  printf("FCOMI(para,1): should=0x01 is=0x%02x\n",(param_1 == 1.0) << 6 | param_1 < 1.0);
  printf("FCOMI(pi,1):   should=0x00 is=0x%02x\n",0);
  printf("FCOMI(1,pi):   should=0x01 is=0x%02x\n",1);
  printf("FCOMI(1,1):    should=0x40 is=0x%02x\n",0x40);
  printf("FCOMI(1,nan):  should=0x45 is=0x%02x\n",
         ((longdouble)1 == (longdouble)0 / (longdouble)0) << 6 |
         (longdouble)1 < (longdouble)0 / (longdouble)0);
  return 0;
}



undefined4 FCOS(double param_1)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)fcos((longdouble)param_1);
  printf("FCOS(para):  should=                              is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)fcos((longdouble)0);
  printf("FCOS(0):     should=     1.000000/   1.000000e+00 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)
          fcos((longdouble)3.141592653589793 / ((longdouble)1 + (longdouble)1 + (longdouble)1));
  printf("FCOS(pi/3):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)fcos((longdouble)3.141592653589793);
  printf("FCOS(pi):    should=    -1.000000/  -1.000000e+00 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  return 0;
}



undefined4 FDIV(double param_1)

{
  printf("FDIV(1/para):     should=                             is=%12f/%15e\n",1.0 / param_1,
         1.0 / param_1);
  printf("FDIV(para/12.34): should=                             is=%12f/%15e\n",param_1 / 12.34,
         param_1 / 12.34);
  printf("FDIV(1/pi):       should=    0.318310/   3.183099e-01 is=%12f/%15e\n",0x3fd45f306dc9c883,
         0x3fd45f306dc9c883);
  printf("FIDIV(pi/1000):   should=    0.003142/   3.141593e-03 is=%12f/%15e\n",0x3f69bc65b68b71c3,
         0x3f69bc65b68b71c3);
  return 0;
}



undefined4 FDIVR(double param_1)

{
  printf("FDIVR(1/para):     should=                             is=%12f/%15e\n",1.0 / param_1,
         1.0 / param_1);
  printf("FDIVR(para/12.34): should=                             is=%12f/%15e\n",param_1 / 12.34,
         param_1 / 12.34);
  printf("FDIVR(1/pi):       should=    0.318310/   3.183099e-01 is=%12f/%15e\n",0x3fd45f306dc9c883,
         0x3fd45f306dc9c883);
  printf("FIDIVR(1000/pi):   should=  318.309886/   3.183099e+02 is=%12f/%15e\n",0x4073e4f54b370dd0,
         0x4073e4f54b370dd0);
  return 0;
}



undefined4 FILD(void)

{
  printf("FILD(10k):  should=             10000.000000/   1.000000e+04 is=%25f/%15e\n",
         0x40c3880000000000,0x40c3880000000000);
  printf("FILD(1G):   should=        1000000000.000000/   1.000000e+09 is=%25f/%15e\n",
         0x41cdcd6500000000,0x41cdcd6500000000);
  printf("FILD(1P):   should=  1000000000000000.000000/   1.000000e+15 is=%25f/%15e\n",
         0x430c6bf526340000,0x430c6bf526340000);
  return 0;
}



undefined4 FIST(void)

{
  puts("FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n")
  ;
  printf("  FISTT(%f):        should=12 is=%d\n",0x4029666666666666,0xc);
  printf("  FIST(%f,RC=00):   should=13 is=%d\n",0x4029666666666666,0xd);
  printf("  FIST(%f,RC=01):   should=12 is=%d\n",0x4029666666666666,0xd);
  printf("  FIST(%f,RC=10):   should=13 is=%d\n",0x4029666666666666,0xd);
  printf("  FIST(%f,RC=11):   should=12 is=%d\n",0x4029666666666666,0xd);
  printf("  FISTT(%f):        should=-7 is=%d\n",0xc01c666666666666,0xfffffff9);
  printf("  FIST(%f,RC=00):   should=-7 is=%d\n",0xc01c666666666666,0xfffffff9);
  printf("  FIST(%f,RC=01):   should=-8 is=%d\n",0xc01c666666666666,0xfffffff9);
  printf("  FIST(%f,RC=10):   should=-7 is=%d\n",0xc01c666666666666,0xfffffff9);
  printf("  FIST(%f,RC=11):   should=-7 is=%d\n",0xc01c666666666666,0xfffffff9);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FLD(void)

{
  printf("FLD(float=12.34...):       should=   12.345679/   1.234568e+01 is=%12f/%15e\n",
         0x4028b0fce0000000,0x4028b0fce0000000);
  printf("FLD(double=12.34...):      should=   12.345679/   1.234568e+01 is=%12f/%15e\n",
         0x4028b0fcd32f707a,0x4028b0fcd32f707a);
  printf("FLD(long double=12.34...): should=   12.345679/   1.234568e+01 is=%12f/%15e\n",
         (double)_DAT_0804d1c3,(double)_DAT_0804d1c3);
  return 0;
}



undefined4 FLDC(void)

{
  printf("FLD1:   should=    1.000000/   1.000000e+00 is=%12f/%15e\n",0x3ff0000000000000,
         0x3ff0000000000000);
  printf("FLDL2E: should=    1.442695/   1.442695e+00 is=%12f/%15e\n",0x3ff71547652b82fe,
         0x3ff71547652b82fe);
  printf("FLDL2T: should=    3.321928/   3.321928e+00 is=%12f/%15e\n",0x400a934f0979a371,
         0x400a934f0979a371);
  printf("FLDLG2: should=    0.301030/   3.010300e-01 is=%12f/%15e\n",0x3fd34413509f79ff,
         0x3fd34413509f79ff);
  printf("FLDLN2: should=    0.693147/   6.931472e-01 is=%12f/%15e\n",0x3fe62e42fefa39ef,
         0x3fe62e42fefa39ef);
  printf("FLDPI:  should=    3.141593/   3.141593e+00 is=%12f/%15e\n",0x400921fb54442d18,
         0x400921fb54442d18);
  printf("FLDZ:   should=    0.000000/   0.000000e+00 is=%12f/%15e\n",0,0);
  return 0;
}



undefined4 FMUL(double param_1)

{
  printf("FMUL(para*pi):  should=                             is=%12f/%15e\n",
         param_1 * 3.141592653589793,param_1 * 3.141592653589793);
  printf("FMUL(12.34*pi): should=   38.767253/   3.876725e+01 is=%12f/%15e\n",0x404362355b8ce69e,
         0x404362355b8ce69e);
  printf("FIMUL(1000*pi): should= 3141.592654/   3.141593e+03 is=%12f/%15e\n",0x40a88b2f704a9409,
         0x40a88b2f704a9409);
  return 0;
}



undefined4 FPATAN(double param_1)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)fpatan((longdouble)1,(longdouble)param_1);
  printf("FPATAN(y=1 x=para): should=                             is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)fpatan((longdouble)1,(longdouble)0);
  printf("FPATAN(y=1 x=0):    should=    1.570796/   1.570796e+00 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)fpatan((longdouble)1,(longdouble)1);
  printf("FPATAN(y=1 x=1):    should=    0.785398/   7.853982e-01 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  return 0;
}



undefined4 FPREM(double param_1)

{
  ushort in_FPUStatusWord;
  
  printf("FPREM(11 mod 7):          should=    4.000000/   4.000000e+00 is=%12f/%15e\n",0,0);
  printf("FPREM1(11 mod 7):         should=   -3.000000/  -3.000000e+00 is=%12f/%15e\n",0,0);
  do {
    param_1 = param_1 - (param_1 / 6.283185307179586) * 6.283185307179586;
  } while ((in_FPUStatusWord & 0x400) != 0);
  printf("reduced para using FPREM: should=                             is=%12f/%15e\n",param_1,
         param_1);
  return 0;
}



undefined4 FPTAN(double param_1)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)fptan((longdouble)param_1);
  printf("FPTAN(para): should=                             is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)fptan((longdouble)0);
  printf("FPTAN(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  fptan((longdouble)0);
  printf("FPTAN(0)[1]: should=    1.000000/   1.000000e+00 is=%12f/%15e\n",0x3ff0000000000000,
         0x3ff0000000000000);
  lVar1 = (longdouble)
          fptan((longdouble)3.141592653589793 /
                ((longdouble)1 + (longdouble)1 + (longdouble)1 + (longdouble)1));
  printf("FPTAN(pi/4): should=    1.000000/   1.000000e+00 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  return 0;
}



undefined4 FRNDINT(double param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  puts(
      "FRNDINT:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n"
      );
  uVar1 = SUB84(ROUND(param_1),0);
  uVar2 = (undefined4)((ulonglong)ROUND(param_1) >> 0x20);
  printf("  FRNDINT(para):              should=                             is=%12f/%15e\n",uVar1,
         uVar2,uVar1,uVar2);
  printf("  FRNDINT(%f,RC=00):   should=   13.000000/   1.300000e+01 is=%12f/%15e\n",0x66666666,
         0x40296666,0,0x402a0000,0x402a000000000000);
  printf("  FRNDINT(%f,RC=01):   should=   12.000000/   1.200000e+01 is=%12f/%15e\n",0x66666666,
         0x40296666,0,0x402a0000,0x402a000000000000);
  printf("  FRNDINT(%f,RC=10):   should=   13.000000/   1.300000e+01 is=%12f/%15e\n",0x66666666,
         0x40296666,0,0x402a0000,0x402a000000000000);
  printf("  FRNDINT(%f,RC=11):   should=   12.000000/   1.200000e+01 is=%12f/%15e\n",0x66666666,
         0x40296666,0,0x402a0000,0x402a000000000000);
  printf("  FRNDINT(%f,RC=00):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n",0x66666666,
         0xc01c6666,0,0xc01c0000,0xc01c000000000000);
  printf("  FRNDINT(%f,RC=01):   should=   -8.000000/  -8.000000e+00 is=%12f/%15e\n",0x66666666,
         0xc01c6666,0,0xc01c0000,0xc01c000000000000);
  printf("  FRNDINT(%f,RC=10):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n",0x66666666,
         0xc01c6666,0,0xc01c0000,0xc01c000000000000);
  printf("  FRNDINT(%f,RC=11):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n",0x66666666,
         0xc01c6666,0,0xc01c0000,0xc01c000000000000);
  return 0;
}



undefined4 FSCALE(double param_1)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)fscale((longdouble)param_1,(longdouble)4);
  printf("FSCALE(para*2^4):   should=                             is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)fscale((longdouble)3.141592653589793,(longdouble)param_1);
  printf("FSCALE(pi*2^para):  should=                             is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)fscale((longdouble)3.141592653589793,(longdouble)4);
  printf("FSCALE(pi*2^4):     should=   50.265482/   5.026548e+01 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)fscale((longdouble)3.141592653589793,-(longdouble)4);
  printf("FSCALE(pi*2^-4):    should=    0.196350/   1.963495e-01 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)fscale((longdouble)3.141592653589793,(longdouble)12.34);
  printf("FSCALE(pi*2^12.34): should=12867.963509/   1.286796e+04 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  return 0;
}



undefined4 FSIN(double param_1)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)fsin((longdouble)param_1);
  printf("FSIN(para):  should=                              is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)fsin((longdouble)0);
  printf("FSIN(0):     should=     0.000000/   0.000000e+00 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)fsin((longdouble)3.141592653589793 / (longdouble)6);
  printf("FSIN(pi/6):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)fsin((longdouble)3.141592653589793 / ((longdouble)1 + (longdouble)1));
  printf("FSIN(pi/2):  should=     1.000000/   1.000000e+00 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  return 0;
}



undefined4 FSINCOS(double param_1)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)fcos((longdouble)param_1);
  fsin((longdouble)param_1);
  printf("FSINCOS(para)[0=cos]:  should=                              is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  fcos((longdouble)param_1);
  lVar1 = (longdouble)fsin((longdouble)param_1);
  printf("FSINCOS(para)[1=sin]:  should=                              is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  lVar1 = (longdouble)fcos((longdouble)0);
  fsin((longdouble)0);
  printf("FSINCOS(0)[0=cos]:     should=     1.000000/   1.000000e+00 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  fcos((longdouble)0);
  lVar1 = (longdouble)fsin((longdouble)0);
  printf("FSINCOS(0)[1=sin]:     should=     0.000000/   0.000000e+00 is=%12f/%15e\n",(double)lVar1,
         (double)lVar1);
  return 0;
}



undefined4 FSQRT(double param_1)

{
  printf("FSQRT(para):     should=                             is=%12f/%15e\n",SQRT(param_1),
         SQRT(param_1));
  printf("FSQRT(pi):       should=    1.772454/   1.772454e+00 is=%12f/%15e\n",0x3ffc5bf891b4ef6a,
         0x3ffc5bf891b4ef6a);
  printf("FSQRT(152.2756): should=   12.340000/   1.234000e+01 is=%12f/%15e\n",0x4028ae147ae147ae,
         0x4028ae147ae147ae);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FST(void)

{
  longdouble lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  _buffer = (longdouble)CONCAT64(_DAT_0805002c,0x40490fdb);
  printf("FST(pi as float)       should=0xdb 0x0f 0x49 0x40                               is=0x%02x 0x%02x 0x%02x 0x%02x\n"
         ,0xdb,0xf,0x49,0x40);
  _buffer = (longdouble)CONCAT28(_DAT_08050030,0x400921fb54442d18);
  printf("FST(pi as double)      should=0x18 0x2d 0x44 0x54 0xfb 0x21 0x09 0x40           is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n"
         ,0x18,0x2d,0x44,0x54,0xfb,0x21,9,0x40);
  lVar1 = (longdouble)3.141592653589793;
  DAT_08050031 = (byte)((unkuint10)lVar1 >> 0x48);
  uVar2 = (uint)DAT_08050031;
  DAT_08050030 = (byte)((unkuint10)lVar1 >> 0x40);
  uVar3 = (uint)DAT_08050030;
  DAT_0805002f = (byte)((unkuint10)lVar1 >> 0x38);
  uVar4 = (uint)DAT_0805002f;
  DAT_0805002e = (byte)((unkuint10)lVar1 >> 0x30);
  uVar5 = (uint)DAT_0805002e;
  DAT_0805002d = (byte)((unkuint10)lVar1 >> 0x28);
  uVar6 = (uint)DAT_0805002d;
  DAT_0805002c = (byte)((unkuint10)lVar1 >> 0x20);
  uVar7 = (uint)DAT_0805002c;
  DAT_0805002b = (byte)((unkuint10)lVar1 >> 0x18);
  uVar8 = (uint)DAT_0805002b;
  DAT_0805002a = (byte)((unkuint10)lVar1 >> 0x10);
  uVar9 = (uint)DAT_0805002a;
  DAT_08050029 = (byte)((unkuint10)lVar1 >> 8);
  uVar10 = (uint)DAT_08050029;
  buffer = SUB101(lVar1,0);
  uVar11 = (uint)buffer;
  _buffer = lVar1;
  printf("FST(pi as long double) should=0x35 0xc2 0x68 0x21 0xa2 0xda 0x0f 0xc9 0x00 0x40 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n"
         ,uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  return 0;
}



undefined4 FSUB(double param_1)

{
  printf("FSUB(1-para):     should=                             is=%12f/%15e\n",1.0 - param_1,
         1.0 - param_1);
  printf("FSUB(para-12.34): should=                             is=%12f/%15e\n",param_1 - 12.34,
         param_1 - 12.34);
  printf("FSUB(1-pi):       should=   -2.141593/  -2.141593e+00 is=%12f/%15e\n",0xc00121fb54442d18,
         0xc00121fb54442d18);
  printf("FISUB(pi-1000):   should= -996.858407/  -9.968584e+02 is=%12f/%15e\n",0xc08f26de04abbbd3,
         0xc08f26de04abbbd3);
  return 0;
}



undefined4 FTST(double param_1)

{
  printf("FTST(para): should=0x0100 is=0x%04x\n",
         (uint)(ushort)((ushort)(param_1 < 0.0) << 8 | (ushort)(param_1 == 0.0) << 0xe));
  printf("FTST(pi):   should=0x0000 is=0x%04x\n",0);
  printf("FTST(-pi):  should=0x0100 is=0x%04x\n",0x100);
  printf("FTST(0.0):  should=0x4000 is=0x%04x\n",0x4000);
  printf("FTST(nan):  should=0x4500 is=0x%04x\n",
         (uint)(ushort)((ushort)((longdouble)0 / (longdouble)0 < (longdouble)0) << 8 |
                       (ushort)((longdouble)0 / (longdouble)0 == (longdouble)0) << 0xe));
  return 0;
}



undefined4 FXAM(double param_1)

{
  longdouble extraout_ST0;
  
  printf("FXAM(para):  should=0x0400 is=0x%04x\n",
         (uint)(ushort)((ushort)(param_1 != 0.0) << 10 | (ushort)(param_1 == 0.0) << 0xe));
  printf("FXAM(pi):    should=0x0400 is=0x%04x\n",0x400);
  printf("FXAM(0.0):   should=0x4000 is=0x%04x\n",0x4000);
  printf("FXAM(nan):   should=0x0100 is=0x%04x\n",
         (uint)(ushort)((ushort)((longdouble)0 / (longdouble)0 != (longdouble)0) << 10 |
                       (ushort)((longdouble)0 / (longdouble)0 == (longdouble)0) << 0xe));
  printf("FXAM(inf):   should=0x0500 is=0x%04x\n",
         (uint)(ushort)((ushort)((longdouble)1 / (longdouble)0 != (longdouble)0) << 10 |
                       (ushort)((longdouble)1 / (longdouble)0 == (longdouble)0) << 0xe));
  printf("FXAM(empty): should=0x4100 is=0x%04x\n",
         (uint)(ushort)((ushort)(extraout_ST0 != (longdouble)0) << 10 |
                       (ushort)(extraout_ST0 == (longdouble)0) << 0xe));
  return 0;
}



undefined4 FXCH(undefined8 param_1)

{
  printf("FXCH(para):  should=                             is=%12f/%15e\n",param_1,param_1);
  printf("FXCH(pi):    should=    3.141593/   3.141593e+00 is=%12f/%15e\n",0x400921fb54442d18,
         0x400921fb54442d18);
  return 0;
}



undefined4 FXTRACT(undefined8 param_1)

{
  printf("FXTRACT(para)[0=signi]:  should=                             is=%12f/%15e\n",param_1,
         param_1);
  printf("FXTRACT(para)[1=exp]:    should=                             is=%12f/%15e\n",param_1,
         param_1);
  printf("FXTRACT(12.34)[0=signi]: should=    1.542500/   1.542500e+00 is=%12f/%15e\n",
         0x4028ae147ae147ae,0x4028ae147ae147ae);
  printf("FXTRACT(12.34)[1=exp]:   should=    3.000000/   3.000000e+00 is=%12f/%15e\n",
         0x4028ae147ae147ae,0x4028ae147ae147ae);
  return 0;
}



undefined4 FYL2X(double param_1)

{
  printf("FYL2X(para, base=2):  should=                             is=%12f/%15e\n",param_1 * 1.0,
         param_1 * 1.0);
  printf("FYL2X(1000, base=2):  should=    9.965784/   9.965784e+00 is=%12f/%15e\n",
         0x408f400000000000,0x408f400000000000);
  printf("FYL2X(1000, base=e):  should=    6.907755/   6.907755e+00 is=%12f/%15e\n",
         0x4085a92d6d005c93,0x4085a92d6d005c93);
  printf("FYL2X(1000, base=10): should=    3.000000/   3.000000e+00 is=%12f/%15e\n",
         0x4072d07adcbbbd23,0x4072d07adcbbbd23);
  return 0;
}



undefined4 FYL2XP1(double param_1)

{
  double dVar1;
  
  dVar1 = (param_1 + 1.0) * 1.0;
  printf("FYL2XP1(para, base=2): should=                             is=%12f/%15e\n",dVar1,dVar1);
  printf("FYL2XP1(999, base=2):  should=    9.965784/   9.965784e+00 is=%12f/%15e\n",
         0x408f400000000000,0x408f400000000000);
  printf("FYL2XP1(999, base=e):  should=    6.907755/   6.907755e+00 is=%12f/%15e\n",
         0x4085a92d6d005c93,0x4085a92d6d005c93);
  printf("FYL2XP1(999, base=10): should=    3.000000/   3.000000e+00 is=%12f/%15e\n",
         0x4072d07adcbbbd23,0x4072d07adcbbbd23);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 NOT_EXECUTED(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  unkbyte10 extraout_ST0;
  unkbyte10 extraout_ST0_00;
  unkbyte10 extraout_ST0_01;
  unkbyte10 extraout_ST1;
  unkbyte10 extraout_ST1_00;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 Var12;
  
  puts("before FNOP");
  puts("before FNCLEX");
  puts("before FDECSTP");
  puts("before FFREE(st(4))");
  ffree(in_ST3);
  puts("before FINCSTP");
  Var12 = extraout_ST0;
  puts("before FNINIT");
  uVar1 = 0x37f;
  uVar2 = 0;
  uVar4 = 0xffff;
  uVar8 = 0;
  uVar10 = 0;
  uVar6 = 0;
  puts("before FNSAVE");
  DAT_08050038 = CONCAT22(uVar6,(undefined2)DAT_08050038);
  _DAT_08050044 = (undefined4)extraout_ST0_00;
  _DAT_08050048 = (undefined6)((unkuint10)extraout_ST0_00 >> 0x20);
  _DAT_0805004e = (undefined4)extraout_ST1;
  uRam08050052 = (undefined6)((unkuint10)extraout_ST1 >> 0x20);
  _DAT_08050062 = (undefined6)in_ST3;
  _DAT_08050068 = (undefined4)((unkuint10)in_ST3 >> 0x30);
  _DAT_0805006c = (undefined6)in_ST4;
  uRam08050072 = (undefined4)((unkuint10)in_ST4 >> 0x30);
  _DAT_08050076 = (undefined2)in_ST5;
  _DAT_08050078 = (undefined8)((unkuint10)in_ST5 >> 0x10);
  _DAT_08050080 = (undefined2)in_ST6;
  uRam08050082 = (undefined6)((unkuint10)in_ST6 >> 0x10);
  _DAT_08050088 = (undefined2)((unkuint10)in_ST6 >> 0x40);
  _DAT_0805008a = (undefined8)Var12;
  uRam08050092 = (undefined2)((unkuint10)Var12 >> 0x40);
  uVar6 = 0x37f;
  uVar3 = 0;
  uVar5 = 0xffff;
  uVar9 = 0;
  uVar11 = 0;
  uVar7 = 0;
  _buffer = uVar1;
  _DAT_0805002c = uVar2;
  _DAT_08050034 = uVar10;
  _DAT_0805003c = uVar8;
  _DAT_08050030 = uVar4;
  puts("before FNSTCW");
  _buffer = uVar6;
  puts("before FNSTENV");
  _DAT_08050030 = CONCAT22(DAT_08050030_2,uVar5);
  DAT_08050038 = CONCAT22(uVar7,(undefined2)DAT_08050038);
  _buffer = uVar6;
  _DAT_0805002c = uVar3;
  _DAT_08050034 = uVar11;
  _DAT_0805003c = uVar9;
  puts("before FNSTSW");
  _buffer = uVar3;
  puts("before FRSTOR");
  puts("before FWAIT");
  puts("before FXRSTOR");
  uVar1 = DAT_08050034;
  uVar6 = DAT_0805003c;
  puts("before FXSAVE");
  _DAT_08050034 = CONCAT22(DAT_08050034_2,uVar1);
  _DAT_0805003c = CONCAT22(DAT_0805003c_2,uVar6);
  _DAT_08050048 = (undefined6)extraout_ST0_01;
  _DAT_0805004e = (undefined4)((unkuint10)extraout_ST0_01 >> 0x30);
  _DAT_08050058 = extraout_ST1_00;
  return 0;
}



ushort TOP(void)

{
  ushort in_FPUStatusWord;
  
  return in_FPUStatusWord >> 0xb & 7;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int __libc_csu_init(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  EVP_PKEY_CTX *in_stack_ffffffe4;
  
  _init(in_stack_ffffffe4);
  iVar2 = 0;
  do {
    iVar1 = (*(code *)(&__frame_dummy_init_array_entry)[iVar2])(param_1,param_2);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 1);
  return iVar1;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _fini(void)

{
  return;
}


