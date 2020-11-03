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



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

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



// WARNING: Unknown calling convention yet parameter storage is locked

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
                    // WARNING: Subroutine does not return
  __assert_fail(__assertion,__file,__line,__function);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _start(void)

{
  __libc_start_main(main);
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
  
  F2XM1();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x30,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FABS();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x34,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FADD();
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
  FCHS();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x44,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FCMOV();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x48,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  FCMOV();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x4a,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FCOM();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x4e,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FCOMI();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x52,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FCOS();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x56,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FDIV();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x5a,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FDIVR();
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
  FIST();
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
  FMUL();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x72,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FPATAN();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x76,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FPREM();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x7a,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FPTAN();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x7e,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FRNDINT();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x82,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FSCALE();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x86,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FSIN();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x8a,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FSINCOS();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x8e,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FSQRT();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x92,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FST();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x96,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FSUB();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x9a,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FTST();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0x9e,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FXAM();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0xa2,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FXCH();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0xa6,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FXTRACT();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0xaa,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FYL2X();
  iVar1 = TOP();
  if (iVar1 != 0) {
    printf("top=%d\n");
    if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
      __assert_fail("top==0","source.c",0xae,(char *)&__PRETTY_FUNCTION___3086);
    }
  }
  putchar(10);
  FYL2XP1();
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
  float10 fVar1;
  
  fVar1 = (float10)f2xm1(-(float10)1);
  printf("F2XM1(-1):   should=   -0.500000/  -5.000000e-01 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)f2xm1((float10)0);
  printf("F2XM1(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)f2xm1((float10)1);
  printf("F2XM1(+1):   should=    1.000000/   1.000000e+00 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)f2xm1((float10)1 / (float10)3.14159265);
  printf("F2XM1(1/pi): should=    0.246869/   2.468690e-01 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
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
  printf("FADD(para+1):     should=                             is=%12f/%15e\n",param_1 + 1.00000000
         ,param_1 + 1.00000000);
  printf("FADD(para+12.34): should=                             is=%12f/%15e\n",
         param_1 + 12.34000000,param_1 + 12.34000000);
  printf("FADD(pi+1/pi):    should=    3.459903/   3.459903e+00 is=%12f/%15e\n",0x400bade161fd6628,
         0x400bade161fd6628);
  printf("FADD(1+1+-0):     should=    2.000000/   2.000000e+00 is=%12f/%15e\n",0x4000000000000000,
         0x4000000000000000);
  printf("FADD(pi+1000):    should= 1003.141593/   1.003142e+03 is=%12f/%15e\n",0x408f5921fb54442d,
         0x408f5921fb54442d);
  return 0;
}



undefined4 FBSTP(void)

{
  buffer._0_10_ = -(float10)123456789011223344.00000000;
  buffer[9] = (byte)((unkuint10)buffer._0_10_ >> 0x48);
  buffer[8] = (byte)((unkuint10)buffer._0_10_ >> 0x40);
  buffer[7] = (byte)((unkuint10)buffer._0_10_ >> 0x38);
  buffer[6] = (byte)((unkuint10)buffer._0_10_ >> 0x30);
  buffer[5] = (byte)((unkuint10)buffer._0_10_ >> 0x28);
  buffer[4] = (byte)((unkuint10)buffer._0_10_ >> 0x20);
  buffer[3] = (byte)((unkuint10)buffer._0_10_ >> 0x18);
  buffer[2] = (byte)((unkuint10)buffer._0_10_ >> 0x10);
  buffer[1] = (byte)((unkuint10)buffer._0_10_ >> 8);
  printf(
         "FBSTP(%f) should=0x44 0x33 0x22 0x11 0x90 0x78 0x56 0x34 0x12 0x80 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n"
         ,0xc37b69b4ba61fd33,(uint)buffer[0],(uint)buffer[1],(uint)buffer[2],(uint)buffer[3],
         (uint)buffer[4],(uint)buffer[5],(uint)buffer[6],(uint)buffer[7],(uint)buffer[8],
         (uint)buffer[9]);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FBLD(void)

{
  unkbyte10 in_ST0;
  float10 in_ST1;
  
  readbuffer = (byte)in_ST0;
  _readbuffer = in_ST0;
  printf(
         "FBLD(0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x): should=-123456789088776656.000000/  -1.234568e+17 is=%12f/%15e\n"
         ,(uint)readbuffer,0x66,0x77,0x88,0x90,0x78,0x56,0x34,0x12,0x80,(double)in_ST1,
         (double)in_ST1);
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
         (uint)(ushort)((ushort)(1.00000000 < param_1) << 8 | (ushort)(param_1 == 1.00000000) << 0xe
                       ));
  printf("FCOM(para,1): should=0x0100 is=0x%04x\n",
         (uint)(ushort)((ushort)((double)CONCAT44(param_2,param_1) < 1.00000000) << 8 |
                       (ushort)((double)CONCAT44(param_2,param_1) == 1.00000000) << 0xe));
  printf("FCOM(pi,1):   should=0x0000 is=0x%04x\n",0);
  printf("FCOM(1,pi):   should=0x0100 is=0x%04x\n",0x100);
  printf("FCOM(1,1):    should=0x4000 is=0x%04x\n",0x4000);
  printf("FCOM(1,nan):  should=0x4500 is=0x%04x\n",
         (uint)(ushort)((ushort)((float10)1 < (float10)0 / (float10)0) << 8 |
                       (ushort)((float10)1 == (float10)0 / (float10)0) << 0xe));
  printf("FICOM(pi,3):  should=0x0000 is=0x%04x\n",0);
  printf("FICOM(pi,4):  should=0x0100 is=0x%04x\n",0x100);
  return 0;
}



undefined4 FCOMI(double param_1)

{
  printf("FCOMI(1,para): should=0x00 is=0x%02x\n",
         (uint)(byte)((param_1 == 1.00000000) << 6 | 1.00000000 < param_1));
  printf("FCOMI(para,1): should=0x01 is=0x%02x\n",
         (uint)(byte)((param_1 == 1.00000000) << 6 | param_1 < 1.00000000));
  printf("FCOMI(pi,1):   should=0x00 is=0x%02x\n",0);
  printf("FCOMI(1,pi):   should=0x01 is=0x%02x\n",1);
  printf("FCOMI(1,1):    should=0x40 is=0x%02x\n",0x40);
  printf("FCOMI(1,nan):  should=0x45 is=0x%02x\n",
         (uint)(byte)(((float10)1 == (float10)0 / (float10)0) << 6 |
                     (float10)1 < (float10)0 / (float10)0));
  return 0;
}



undefined4 FCOS(double param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)fcos((float10)param_1);
  printf("FCOS(para):  should=                              is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)fcos((float10)0);
  printf("FCOS(0):     should=     1.000000/   1.000000e+00 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)fcos((float10)3.14159265 / ((float10)1 + (float10)1 + (float10)1));
  printf("FCOS(pi/3):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)fcos((float10)3.14159265);
  printf("FCOS(pi):    should=    -1.000000/  -1.000000e+00 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  return 0;
}



undefined4 FDIV(double param_1)

{
  printf("FDIV(1/para):     should=                             is=%12f/%15e\n",1.00000000 / param_1
         ,1.00000000 / param_1);
  printf("FDIV(para/12.34): should=                             is=%12f/%15e\n",
         param_1 / 12.34000000,param_1 / 12.34000000);
  printf("FDIV(1/pi):       should=    0.318310/   3.183099e-01 is=%12f/%15e\n",0x3fd45f306dc9c883,
         0x3fd45f306dc9c883);
  printf("FIDIV(pi/1000):   should=    0.003142/   3.141593e-03 is=%12f/%15e\n",0x3f69bc65b68b71c3,
         0x3f69bc65b68b71c3);
  return 0;
}



undefined4 FDIVR(double param_1)

{
  printf("FDIVR(1/para):     should=                             is=%12f/%15e\n",
         1.00000000 / param_1,1.00000000 / param_1);
  printf("FDIVR(para/12.34): should=                             is=%12f/%15e\n",
         param_1 / 12.34000000,param_1 / 12.34000000);
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



undefined4 FLD(void)

{
  printf("FLD(float=12.34...):       should=   12.345679/   1.234568e+01 is=%12f/%15e\n",
         0x4028b0fce0000000,0x4028b0fce0000000);
  printf("FLD(double=12.34...):      should=   12.345679/   1.234568e+01 is=%12f/%15e\n",
         0x4028b0fcd32f707a,0x4028b0fcd32f707a);
  printf("FLD(long double=12.34...): should=   12.345679/   1.234568e+01 is=%12f/%15e\n",
         (double)FLOAT_UNKNOWN,(double)FLOAT_UNKNOWN);
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
  printf("FMUL(para*pi):  should=                             is=%12f/%15e\n",param_1 * 3.14159265,
         param_1 * 3.14159265);
  printf("FMUL(12.34*pi): should=   38.767253/   3.876725e+01 is=%12f/%15e\n",0x404362355b8ce69e,
         0x404362355b8ce69e);
  printf("FIMUL(1000*pi): should= 3141.592654/   3.141593e+03 is=%12f/%15e\n",0x40a88b2f704a9409,
         0x40a88b2f704a9409);
  return 0;
}



undefined4 FPATAN(double param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)fpatan((float10)1,(float10)param_1);
  printf("FPATAN(y=1 x=para): should=                             is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)fpatan((float10)1,(float10)0);
  printf("FPATAN(y=1 x=0):    should=    1.570796/   1.570796e+00 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)fpatan((float10)1,(float10)1);
  printf("FPATAN(y=1 x=1):    should=    0.785398/   7.853982e-01 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  return 0;
}



undefined4 FPREM(double param_1)

{
  ushort in_FPUStatusWord;
  
  printf("FPREM(11 mod 7):          should=    4.000000/   4.000000e+00 is=%12f/%15e\n",0,0);
  printf("FPREM1(11 mod 7):         should=   -3.000000/  -3.000000e+00 is=%12f/%15e\n",0,0);
  do {
    param_1 = param_1 - (param_1 / 6.28318531) * 6.28318531;
  } while ((in_FPUStatusWord & 0x400) != 0);
  printf("reduced para using FPREM: should=                             is=%12f/%15e\n",param_1,
         param_1);
  return 0;
}



undefined4 FPTAN(double param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)fptan((float10)param_1);
  printf("FPTAN(para): should=                             is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)fptan((float10)0);
  printf("FPTAN(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fptan((float10)0);
  printf("FPTAN(0)[1]: should=    1.000000/   1.000000e+00 is=%12f/%15e\n",0x3ff0000000000000,
         0x3ff0000000000000);
  fVar1 = (float10)fptan((float10)3.14159265 / ((float10)1 + (float10)1 + (float10)1 + (float10)1));
  printf("FPTAN(pi/4): should=    1.000000/   1.000000e+00 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
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
  float10 fVar1;
  
  fVar1 = (float10)fscale((float10)param_1,(float10)4);
  printf("FSCALE(para*2^4):   should=                             is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)fscale((float10)3.14159265,(float10)param_1);
  printf("FSCALE(pi*2^para):  should=                             is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)fscale((float10)3.14159265,(float10)4);
  printf("FSCALE(pi*2^4):     should=   50.265482/   5.026548e+01 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)fscale((float10)3.14159265,-(float10)4);
  printf("FSCALE(pi*2^-4):    should=    0.196350/   1.963495e-01 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)fscale((float10)3.14159265,(float10)12.34000000);
  printf("FSCALE(pi*2^12.34): should=12867.963509/   1.286796e+04 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  return 0;
}



undefined4 FSIN(double param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)param_1);
  printf("FSIN(para):  should=                              is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)fsin((float10)0);
  printf("FSIN(0):     should=     0.000000/   0.000000e+00 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)fsin((float10)3.14159265 / (float10)6);
  printf("FSIN(pi/6):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)fsin((float10)3.14159265 / ((float10)1 + (float10)1));
  printf("FSIN(pi/2):  should=     1.000000/   1.000000e+00 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  return 0;
}



undefined4 FSINCOS(double param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)fcos((float10)param_1);
  fsin((float10)param_1);
  printf("FSINCOS(para)[0=cos]:  should=                              is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fcos((float10)param_1);
  fVar1 = (float10)fsin((float10)param_1);
  printf("FSINCOS(para)[1=sin]:  should=                              is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fVar1 = (float10)fcos((float10)0);
  fsin((float10)0);
  printf("FSINCOS(0)[0=cos]:     should=     1.000000/   1.000000e+00 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
  fcos((float10)0);
  fVar1 = (float10)fsin((float10)0);
  printf("FSINCOS(0)[1=sin]:     should=     0.000000/   0.000000e+00 is=%12f/%15e\n",(double)fVar1,
         (double)fVar1);
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



undefined4 FST(void)

{
  buffer._0_10_ = (float10)CONCAT64(buffer._4_6_,0x40490fda);
  printf(
         "FST(pi as float)       should=0xdb 0x0f 0x49 0x40                               is=0x%02x 0x%02x 0x%02x 0x%02x\n"
         ,0xda,0xf,0x49,0x40);
  buffer._0_10_ = (float10)CONCAT28(buffer._8_2_,0x400921fb54442d18);
  printf(
         "FST(pi as double)      should=0x18 0x2d 0x44 0x54 0xfb 0x21 0x09 0x40           is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n"
         ,0x18,0x2d,0x44,0x54,0xfb,0x21,9,0x40);
  buffer._0_10_ = (float10)3.14159265;
  buffer[9] = (byte)((unkuint10)buffer._0_10_ >> 0x48);
  buffer[8] = (byte)((unkuint10)buffer._0_10_ >> 0x40);
  buffer[7] = (byte)((unkuint10)buffer._0_10_ >> 0x38);
  buffer[6] = (byte)((unkuint10)buffer._0_10_ >> 0x30);
  buffer[5] = (byte)((unkuint10)buffer._0_10_ >> 0x28);
  buffer[4] = (byte)((unkuint10)buffer._0_10_ >> 0x20);
  buffer[3] = (byte)((unkuint10)buffer._0_10_ >> 0x18);
  buffer[2] = (byte)((unkuint10)buffer._0_10_ >> 0x10);
  buffer[1] = (byte)((unkuint10)buffer._0_10_ >> 8);
  printf(
         "FST(pi as long double) should=0x35 0xc2 0x68 0x21 0xa2 0xda 0x0f 0xc9 0x00 0x40 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n"
         ,(uint)buffer[0],(uint)buffer[1],(uint)buffer[2],(uint)buffer[3],(uint)buffer[4],
         (uint)buffer[5],(uint)buffer[6],(uint)buffer[7],(uint)buffer[8],(uint)buffer[9]);
  return 0;
}



undefined4 FSUB(double param_1)

{
  printf("FSUB(1-para):     should=                             is=%12f/%15e\n",1.00000000 - param_1
         ,1.00000000 - param_1);
  printf("FSUB(para-12.34): should=                             is=%12f/%15e\n",
         param_1 - 12.34000000,param_1 - 12.34000000);
  printf("FSUB(1-pi):       should=   -2.141593/  -2.141593e+00 is=%12f/%15e\n",0xc00121fb54442d18,
         0xc00121fb54442d18);
  printf("FISUB(pi-1000):   should= -996.858407/  -9.968584e+02 is=%12f/%15e\n",0xc08f26de04abbbd3,
         0xc08f26de04abbbd3);
  return 0;
}



undefined4 FTST(double param_1)

{
  printf("FTST(para): should=0x0100 is=0x%04x\n",
         (uint)(ushort)((ushort)(param_1 < 0.00000000) << 8 | (ushort)(param_1 == 0.00000000) << 0xe
                       ));
  printf("FTST(pi):   should=0x0000 is=0x%04x\n",0);
  printf("FTST(-pi):  should=0x0100 is=0x%04x\n",0x100);
  printf("FTST(0.0):  should=0x4000 is=0x%04x\n",0x4000);
  printf("FTST(nan):  should=0x4500 is=0x%04x\n",
         (uint)(ushort)((ushort)((float10)0 / (float10)0 < (float10)0) << 8 |
                       (ushort)((float10)0 / (float10)0 == (float10)0) << 0xe));
  return 0;
}



undefined4 FXAM(double param_1)

{
  float10 extraout_ST0;
  
  printf("FXAM(para):  should=0x0400 is=0x%04x\n",
         (uint)(ushort)((ushort)(param_1 != 0.00000000) << 10 |
                       (ushort)(param_1 == 0.00000000) << 0xe));
  printf("FXAM(pi):    should=0x0400 is=0x%04x\n",0x400);
  printf("FXAM(0.0):   should=0x4000 is=0x%04x\n",0x4000);
  printf("FXAM(nan):   should=0x0100 is=0x%04x\n",
         (uint)(ushort)((ushort)((float10)0 / (float10)0 != (float10)0) << 10 |
                       (ushort)((float10)0 / (float10)0 == (float10)0) << 0xe));
  printf("FXAM(inf):   should=0x0500 is=0x%04x\n",
         (uint)(ushort)((ushort)((float10)1 / (float10)0 != (float10)0) << 10 |
                       (ushort)((float10)1 / (float10)0 == (float10)0) << 0xe));
  printf("FXAM(empty): should=0x4100 is=0x%04x\n",
         (uint)(ushort)((ushort)(extraout_ST0 != (float10)0) << 10 |
                       (ushort)(extraout_ST0 == (float10)0) << 0xe));
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
  printf("FYL2X(para, base=2):  should=                             is=%12f/%15e\n",
         param_1 * 1.00000000,param_1 * 1.00000000);
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
  
  dVar1 = (param_1 + 1.00000000) * 1.00000000;
  printf("FYL2XP1(para, base=2): should=                             is=%12f/%15e\n",dVar1,dVar1);
  printf("FYL2XP1(999, base=2):  should=    9.965784/   9.965784e+00 is=%12f/%15e\n",
         0x408f400000000000,0x408f400000000000);
  printf("FYL2XP1(999, base=e):  should=    6.907755/   6.907755e+00 is=%12f/%15e\n",
         0x4085a92d6d005c93,0x4085a92d6d005c93);
  printf("FYL2XP1(999, base=10): should=    3.000000/   3.000000e+00 is=%12f/%15e\n",
         0x4072d07adcbbbd23,0x4072d07adcbbbd23);
  return 0;
}



undefined4 NOT_EXECUTED(void)

{
  unkbyte10 extraout_ST0;
  unkbyte10 extraout_ST0_00;
  unkbyte10 extraout_ST0_01;
  unkbyte10 extraout_ST1;
  unkbyte10 extraout_ST1_00;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 Var1;
  undefined2 in_FPUStatusWord;
  byte bVar4;
  ushort uVar2;
  undefined2 uVar3;
  
  bVar4 = (byte)((ushort)in_FPUStatusWord >> 8);
  puts("before FNOP");
  puts("before FNCLEX");
  uVar2 = ((ushort)bVar4 & 0x7f) << 8;
  puts("before FDECSTP");
  uVar2 = uVar2 & 0xfeff;
  puts("before FFREE(st(4))");
  puts("before FINCSTP");
  Var1 = extraout_ST0;
  puts("before FNINIT");
  puts("before FNSAVE");
  buffer._28_4_ = (undefined4)extraout_ST0_00;
  buffer._32_6_ = (undefined6)((unkuint10)extraout_ST0_00 >> 0x20);
  buffer._38_4_ = (undefined4)extraout_ST1;
  buffer._42_6_ = (undefined6)((unkuint10)extraout_ST1 >> 0x20);
  buffer._58_6_ = (undefined6)in_ST3;
  buffer._64_4_ = (undefined4)((unkuint10)in_ST3 >> 0x30);
  buffer._68_6_ = (undefined6)in_ST4;
  buffer._74_4_ = (undefined4)((unkuint10)in_ST4 >> 0x30);
  buffer._78_2_ = (undefined2)in_ST5;
  buffer._80_8_ = (undefined8)((unkuint10)in_ST5 >> 0x10);
  buffer._88_2_ = (undefined2)in_ST6;
  buffer._90_6_ = (undefined6)((unkuint10)in_ST6 >> 0x10);
  buffer._96_2_ = (undefined2)((unkuint10)in_ST6 >> 0x40);
  buffer._98_8_ = (undefined8)Var1;
  buffer._106_2_ = (undefined2)((unkuint10)Var1 >> 0x40);
  buffer._0_2_ = 0x37f;
  uVar3 = 0;
  buffer._8_2_ = 0xffff;
  buffer._20_4_ = 0;
  buffer._12_4_ = 0;
  buffer._18_2_ = 0;
  buffer._4_2_ = uVar2;
  puts("before FNSTCW");
  puts("before FNSTENV");
  buffer._4_2_ = uVar3;
  puts("before FNSTSW");
  buffer._0_2_ = uVar3;
  puts("before FRSTOR");
  puts("before FWAIT");
  puts("before FXRSTOR");
  puts("before FXSAVE");
  buffer._32_6_ = (undefined6)extraout_ST0_01;
  buffer._38_4_ = (undefined4)((unkuint10)extraout_ST0_01 >> 0x30);
  buffer._48_10_ = extraout_ST1_00;
  return 0;
}



uint TOP(void)

{
  ushort in_FPUStatusWord;
  
  return (uint)(in_FPUStatusWord >> 0xb) & 7;
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


