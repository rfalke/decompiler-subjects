typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
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



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
                    // WARNING: Subroutine does not return
  __assert_fail(__assertion,__file,__line,__function);
}


/*
Unable to decompile 'main'
Cause: Exception while decompiling 08049060: process: timeout

*/


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



// WARNING: Removing unreachable block (ram,0x0805325c)
// WARNING: Removing unreachable block (ram,0x08053265)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x080532a8)
// WARNING: Removing unreachable block (ram,0x080532b1)

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



int inst_0_values_var_0(void)

{
  uint uVar1;
  char in_AF;
  
  uVar1 = CONCAT31(0x12ba64,in_AF * '\x06' + 'D') & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11(in_AF + 'd',(char)uVar1)) + -0x12ba650a;
}



int inst_0_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return (uint)in_AF + iVar1 + -0x11;
}



int inst_0_values_var_1(void)

{
  uint uVar1;
  byte in_AF;
  
  uVar1 = CONCAT31(0xae9df2,(in_AF | 1) * '\x06' + '\x1d') & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11((in_AF | 1) - 0xe,(char)uVar1)) + 0x51620cfd;
}



int inst_0_flags_var_1(void)

{
  int iVar1;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return (uint)(in_AF | 1) + iVar1 + -0x11;
}



int inst_0_values_var_2(void)

{
  uint uVar1;
  char in_AF;
  
  uVar1 = CONCAT31(0x7b8a03,in_AF * '\x06' + -0x5b) & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11(in_AF + '\x03',(char)uVar1)) + -0x7b8a040b;
}



int inst_0_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return (uint)in_AF + iVar1 + -0x11;
}



int inst_0_values_var_3(void)

{
  uint uVar1;
  char in_AF;
  
  uVar1 = CONCAT31(0x3e40a7,in_AF * '\x06' + '5') & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11(in_AF + -0x59,(char)uVar1)) + -0x3e40a80b;
}



int inst_0_flags_var_3(void)

{
  int iVar1;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return (uint)(in_AF | 1) + iVar1 + -0x11;
}



int inst_0_values_var_4(void)

{
  uint uVar1;
  byte in_AF;
  
  uVar1 = CONCAT31(0xcc4f87,(in_AF | 1) * '\x06' + -0x56) & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11((in_AF | 1) + 0x87,(char)uVar1)) + 0x33b07800;
}



char inst_0_flags_var_4(void)

{
  char cVar1;
  bool in_AF;
  
  cVar1 = '\0';
  if (in_AF) {
    cVar1 = '\x10';
  }
  return in_AF + cVar1;
}



int inst_0_values_var_5(void)

{
  uint uVar1;
  char in_AF;
  
  uVar1 = CONCAT31(0xb6fbad,in_AF * '\x06' + '1') & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11(in_AF + -0x53,(char)uVar1)) + 0x490451f9;
}



char inst_0_flags_var_5(void)

{
  char cVar1;
  bool in_AF;
  
  cVar1 = '\0';
  if (in_AF) {
    cVar1 = '\x10';
  }
  return in_AF + cVar1;
}



int inst_0_values_var_6(void)

{
  uint uVar1;
  char in_AF;
  
  uVar1 = CONCAT31(0x3fd51f,in_AF * '\x06' + -0x3a) & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11(in_AF + '\x1f',(char)uVar1)) + -0x3fd5200c;
}



int inst_0_flags_var_6(void)

{
  int iVar1;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return (uint)(in_AF | 1) + iVar1 + -0x11;
}



int inst_0_values_var_7(void)

{
  uint uVar1;
  char in_AF;
  
  uVar1 = CONCAT31(0x444022,in_AF * '\x06' + -0x6d) & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11(in_AF + '\"',(char)uVar1)) + -0x44402309;
}



int inst_0_flags_var_7(void)

{
  int iVar1;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return (uint)(in_AF | 1) + iVar1 + -0x11;
}



int inst_0_values_var_8(void)

{
  uint uVar1;
  byte in_AF;
  
  uVar1 = CONCAT31(0x88a863,(in_AF | 1) * '\x06' + -0x31) & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11((in_AF | 1) + 99,(char)uVar1)) + 0x77579bfb;
}



int inst_0_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return (uint)in_AF + iVar1 + -0x11;
}



int inst_0_values_var_9(void)

{
  uint uVar1;
  byte in_AF;
  
  uVar1 = CONCAT31(0x272a4,(in_AF | 1) * '\x06' + -0x56) & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11((in_AF | 1) + 0xa4,(char)uVar1)) + -0x272a500;
}



int inst_0_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return (uint)in_AF + iVar1 + -0x11;
}



undefined4 inst_1_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053a8d)

undefined4 inst_1_flags_var_0(void)

{
  return 0;
}



undefined4 inst_1_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053b3e)

undefined4 inst_1_flags_var_1(void)

{
  return 0xfffffff8;
}



undefined4 inst_1_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053be2)
// WARNING: Removing unreachable block (ram,0x08053bef)

undefined4 inst_1_flags_var_2(void)

{
  return 0xfffffff8;
}



undefined4 inst_1_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053c93)
// WARNING: Removing unreachable block (ram,0x08053ca0)

undefined4 inst_1_flags_var_3(void)

{
  return 0;
}



undefined4 inst_1_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053d51)

undefined4 inst_1_flags_var_4(void)

{
  return 0xfffffff8;
}



undefined4 inst_1_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053e02)

undefined4 inst_1_flags_var_5(void)

{
  return 0;
}



undefined4 inst_1_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053ea6)
// WARNING: Removing unreachable block (ram,0x08053eb3)

undefined4 inst_1_flags_var_6(void)

{
  return 0;
}



undefined4 inst_1_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053f57)
// WARNING: Removing unreachable block (ram,0x08053f64)

undefined4 inst_1_flags_var_7(void)

{
  return 0xfffffff8;
}



undefined4 inst_1_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08054015)

undefined4 inst_1_flags_var_8(void)

{
  return 0xfffffff8;
}



undefined4 inst_1_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080540c6)

undefined4 inst_1_flags_var_9(void)

{
  return 0xfffffff8;
}



undefined4 inst_2_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08054177)

undefined4 inst_2_flags_var_0(void)

{
  return 0;
}



undefined4 inst_2_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805421b)
// WARNING: Removing unreachable block (ram,0x08054228)

undefined4 inst_2_flags_var_1(void)

{
  return 0;
}



undefined4 inst_2_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080542d9)

undefined4 inst_2_flags_var_2(void)

{
  return 0;
}



undefined4 inst_2_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805438a)

undefined4 inst_2_flags_var_3(void)

{
  return 0;
}



undefined4 inst_2_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805443b)

undefined4 inst_2_flags_var_4(void)

{
  return 0;
}



undefined4 inst_2_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080544df)
// WARNING: Removing unreachable block (ram,0x080544ec)

undefined4 inst_2_flags_var_5(void)

{
  return 0xfffffff8;
}



undefined4 inst_2_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805459d)

undefined4 inst_2_flags_var_6(void)

{
  return 0;
}



undefined4 inst_2_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805464e)

undefined4 inst_2_flags_var_7(void)

{
  return 0;
}



undefined4 inst_2_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080546ff)

undefined4 inst_2_flags_var_8(void)

{
  return 0xfffffff8;
}



undefined4 inst_2_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080547b0)

undefined4 inst_2_flags_var_9(void)

{
  return 0;
}



int inst_3_values_var_0(void)

{
  uint uVar1;
  byte in_AF;
  
  uVar1 = CONCAT31(0x4f9dee,(in_AF | 1) * -6 + -0x13) & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11(-0x12 - (in_AF | 1),(char)uVar1)) + -0x4f9ded07;
}



int inst_3_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return (uint)in_AF + iVar1 + -0x11;
}



int inst_3_values_var_1(void)

{
  uint uVar1;
  char in_AF;
  
  uVar1 = CONCAT31(0x9b9cc6,in_AF * -6 + 'V') & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11(-0x3a - in_AF,(char)uVar1)) + 0x64633b00;
}



int inst_3_flags_var_1(void)

{
  int iVar1;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return (uint)(in_AF | 1) + iVar1 + -0x11;
}



int inst_3_values_var_2(void)

{
  uint uVar1;
  char in_AF;
  
  uVar1 = CONCAT31(0x8b5fbd,in_AF * -6 + -0x7c) & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11(-0x43 - in_AF,(char)uVar1)) + 0x74a043f2;
}



int inst_3_flags_var_2(void)

{
  int iVar1;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return (uint)(in_AF | 1) + iVar1 + -0x11;
}



int inst_3_values_var_3(void)

{
  uint uVar1;
  char in_AF;
  
  uVar1 = CONCAT31(0xc5b506,in_AF * -6 + 'w') & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11('\x06' - in_AF,(char)uVar1)) + 0x3a4afaff;
}



int inst_3_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return (uint)in_AF + iVar1 + -0x11;
}



int inst_3_values_var_4(void)

{
  uint uVar1;
  char in_AF;
  
  uVar1 = CONCAT31(0xec9901,in_AF * -6 + -0x6b) & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11('\x01' - in_AF,(char)uVar1)) + 0x1366fff1;
}



int inst_3_flags_var_4(void)

{
  int iVar1;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return (uint)(in_AF | 1) + iVar1 + -0x11;
}



int inst_3_values_var_5(void)

{
  uint uVar1;
  char in_AF;
  
  uVar1 = CONCAT31(0x4149e0,in_AF * -6 + -0x6d) & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11(-0x20 - in_AF,(char)uVar1)) + -0x4149df0d;
}



int inst_3_flags_var_5(void)

{
  int iVar1;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return (uint)(in_AF | 1) + iVar1 + -0x11;
}



int inst_3_values_var_6(void)

{
  uint uVar1;
  char in_AF;
  
  uVar1 = CONCAT31(0xe33e09,in_AF * -6 + 'f') & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11('\t' - in_AF,(char)uVar1)) + 0x1cc1f800;
}



int inst_3_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return (uint)in_AF + iVar1 + -0x11;
}



int inst_3_values_var_7(void)

{
  uint uVar1;
  byte in_AF;
  
  uVar1 = CONCAT31(0xa358b0,(in_AF | 1) * -6 + ':') & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11(-0x50 - (in_AF | 1),(char)uVar1)) + 0x5ca750fc;
}



int inst_3_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return (uint)in_AF + iVar1 + -0x11;
}



int inst_3_values_var_8(void)

{
  uint uVar1;
  char in_AF;
  
  uVar1 = CONCAT31(0x7cab1c,in_AF * -6 + ')') & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11('\x1c' - in_AF,(char)uVar1)) + -0x7cab1b03;
}



int inst_3_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return (uint)in_AF + iVar1 + -0x11;
}



int inst_3_values_var_9(void)

{
  uint uVar1;
  byte in_AF;
  
  uVar1 = CONCAT31(0x429e2c,(in_AF | 1) * -6 + '~') & 0xffffff0f;
  return CONCAT22((short)(uVar1 >> 0x10),CONCAT11(',' - (in_AF | 1),(char)uVar1)) + -0x429e2b08;
}



int inst_3_flags_var_9(void)

{
  int iVar1;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return (uint)(in_AF | 1) + iVar1 + -0x11;
}



undefined4 inst_4_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08054f5a)
// WARNING: Removing unreachable block (ram,0x08054f4d)
// WARNING: Removing unreachable block (ram,0x08054f67)

int inst_4_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_4_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805500e)
// WARNING: Removing unreachable block (ram,0x08055028)

undefined4 inst_4_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_4_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080550dc)

undefined4 inst_4_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_4_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080551b7)
// WARNING: Removing unreachable block (ram,0x080551d1)

int inst_4_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_4_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055285)
// WARNING: Removing unreachable block (ram,0x0805529f)

int inst_4_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_4_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055346)
// WARNING: Removing unreachable block (ram,0x08055353)
// WARNING: Removing unreachable block (ram,0x08055360)

undefined4 inst_4_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_4_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055414)
// WARNING: Removing unreachable block (ram,0x08055421)

undefined4 inst_4_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_4_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080554fc)
// WARNING: Removing unreachable block (ram,0x080554ef)
// WARNING: Removing unreachable block (ram,0x08055509)

undefined4 inst_4_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_4_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080555ca)
// WARNING: Removing unreachable block (ram,0x080555b0)
// WARNING: Removing unreachable block (ram,0x080555bd)
// WARNING: Removing unreachable block (ram,0x080555d7)

int inst_4_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_4_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805567e)
// WARNING: Removing unreachable block (ram,0x0805568b)

int inst_4_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_5_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805574a)
// WARNING: Removing unreachable block (ram,0x08055757)

undefined4 inst_5_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_5_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805583d)

int inst_5_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_5_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080558e2)
// WARNING: Removing unreachable block (ram,0x080558ef)
// WARNING: Removing unreachable block (ram,0x080558fc)

undefined4 inst_5_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_5_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080559ae)
// WARNING: Removing unreachable block (ram,0x080559bb)
// WARNING: Removing unreachable block (ram,0x080559c8)

undefined4 inst_5_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_5_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055a87)
// WARNING: Removing unreachable block (ram,0x08055aa1)

undefined4 inst_5_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_5_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055b6d)

undefined4 inst_5_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_5_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055c1f)
// WARNING: Removing unreachable block (ram,0x08055c2c)

int inst_5_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_5_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055ceb)
// WARNING: Removing unreachable block (ram,0x08055d05)

int inst_5_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_5_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055daa)
// WARNING: Removing unreachable block (ram,0x08055db7)
// WARNING: Removing unreachable block (ram,0x08055dc4)

int inst_5_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_5_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055e9d)

int inst_5_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_6_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055f60)
// WARNING: Removing unreachable block (ram,0x08055f53)
// WARNING: Removing unreachable block (ram,0x08055f6d)

int inst_6_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_6_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056024)
// WARNING: Removing unreachable block (ram,0x08056031)

int inst_6_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_6_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080560f6)
// WARNING: Removing unreachable block (ram,0x080560e9)
// WARNING: Removing unreachable block (ram,0x08056110)

int inst_6_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_6_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080561d4)
// WARNING: Removing unreachable block (ram,0x080561ba)
// WARNING: Removing unreachable block (ram,0x080561c7)
// WARNING: Removing unreachable block (ram,0x080561e1)

undefined4 inst_6_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_6_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805628b)

int inst_6_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_6_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805636a)
// WARNING: Removing unreachable block (ram,0x08056384)

undefined4 inst_6_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_6_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056449)
// WARNING: Removing unreachable block (ram,0x0805642f)
// WARNING: Removing unreachable block (ram,0x0805643c)
// WARNING: Removing unreachable block (ram,0x08056456)

int inst_6_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_6_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056501)
// WARNING: Removing unreachable block (ram,0x0805650e)

int inst_6_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_6_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080565d3)
// WARNING: Removing unreachable block (ram,0x080565e0)
// WARNING: Removing unreachable block (ram,0x080565ed)

int inst_6_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_6_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080566be)
// WARNING: Removing unreachable block (ram,0x080566cb)

int inst_6_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_7_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805677f)
// WARNING: Removing unreachable block (ram,0x08056799)

undefined4 inst_7_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_7_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056840)
// WARNING: Removing unreachable block (ram,0x0805684d)

int inst_7_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_7_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805690e)
// WARNING: Removing unreachable block (ram,0x0805691b)
// WARNING: Removing unreachable block (ram,0x08056928)

int inst_7_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_7_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080569dc)
// WARNING: Removing unreachable block (ram,0x080569e9)

undefined4 inst_7_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_7_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056ab7)
// WARNING: Removing unreachable block (ram,0x08056ad1)

int inst_7_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_7_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056b78)
// WARNING: Removing unreachable block (ram,0x08056b85)

undefined4 inst_7_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_7_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056c60)
// WARNING: Removing unreachable block (ram,0x08056c53)
// WARNING: Removing unreachable block (ram,0x08056c6d)

undefined4 inst_7_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_7_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056d2e)
// WARNING: Removing unreachable block (ram,0x08056d21)
// WARNING: Removing unreachable block (ram,0x08056d3b)

int inst_7_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_7_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056de2)
// WARNING: Removing unreachable block (ram,0x08056dfc)

int inst_7_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_7_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056ed7)

undefined4 inst_7_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_8_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056f83)
// WARNING: Removing unreachable block (ram,0x08056f90)

undefined4 inst_8_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_8_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057064)

undefined4 inst_8_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_8_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057145)
// WARNING: Removing unreachable block (ram,0x08057138)
// WARNING: Removing unreachable block (ram,0x08057152)

undefined4 inst_8_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_8_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080571ff)

undefined4 inst_8_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_8_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080572e0)
// WARNING: Removing unreachable block (ram,0x080572fa)

undefined4 inst_8_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_8_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080573a7)
// WARNING: Removing unreachable block (ram,0x080573b4)

undefined4 inst_8_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_8_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805747b)
// WARNING: Removing unreachable block (ram,0x08057488)
// WARNING: Removing unreachable block (ram,0x08057495)

undefined4 inst_8_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_8_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805754e)
// WARNING: Removing unreachable block (ram,0x08057568)

undefined4 inst_8_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_8_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805762e)
// WARNING: Removing unreachable block (ram,0x08057648)

int inst_8_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_8_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080576f5)
// WARNING: Removing unreachable block (ram,0x08057702)

undefined4 inst_8_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_9_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080577ce)

int inst_9_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_9_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080578a7)
// WARNING: Removing unreachable block (ram,0x0805789a)
// WARNING: Removing unreachable block (ram,0x080578b4)

int inst_9_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_9_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057973)
// WARNING: Removing unreachable block (ram,0x08057959)
// WARNING: Removing unreachable block (ram,0x08057966)
// WARNING: Removing unreachable block (ram,0x08057980)

int inst_9_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_9_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057a25)
// WARNING: Removing unreachable block (ram,0x08057a32)
// WARNING: Removing unreachable block (ram,0x08057a3f)

int inst_9_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_9_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057b0b)
// WARNING: Removing unreachable block (ram,0x08057afe)
// WARNING: Removing unreachable block (ram,0x08057b18)

undefined4 inst_9_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_9_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057bd7)
// WARNING: Removing unreachable block (ram,0x08057bca)
// WARNING: Removing unreachable block (ram,0x08057be4)

int inst_9_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_9_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057c89)
// WARNING: Removing unreachable block (ram,0x08057c96)

int inst_9_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_9_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057d55)
// WARNING: Removing unreachable block (ram,0x08057d62)

undefined4 inst_9_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_9_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057e3b)
// WARNING: Removing unreachable block (ram,0x08057e2e)
// WARNING: Removing unreachable block (ram,0x08057e48)

undefined4 inst_9_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_9_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057f14)

int inst_9_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_10_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057fca)
// WARNING: Removing unreachable block (ram,0x08057fd7)

undefined4 inst_10_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_10_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805809a)
// WARNING: Removing unreachable block (ram,0x080580b4)

int inst_10_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_10_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805816a)

int inst_10_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_10_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805823a)
// WARNING: Removing unreachable block (ram,0x08058254)

int inst_10_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_10_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080582fd)
// WARNING: Removing unreachable block (ram,0x0805830a)
// WARNING: Removing unreachable block (ram,0x08058317)

undefined4 inst_10_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_10_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080583cd)
// WARNING: Removing unreachable block (ram,0x080583da)
// WARNING: Removing unreachable block (ram,0x080583e7)

undefined4 inst_10_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_10_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080584b7)
// WARNING: Removing unreachable block (ram,0x080584c4)

undefined4 inst_10_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_10_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058579)

int inst_10_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_10_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058656)
// WARNING: Removing unreachable block (ram,0x0805863c)
// WARNING: Removing unreachable block (ram,0x08058649)
// WARNING: Removing unreachable block (ram,0x08058663)

undefined4 inst_10_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_10_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805870c)
// WARNING: Removing unreachable block (ram,0x08058719)

int inst_10_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_11_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080587da)
// WARNING: Removing unreachable block (ram,0x080587e7)
// WARNING: Removing unreachable block (ram,0x080587f4)

undefined4 inst_11_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_11_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080588c2)
// WARNING: Removing unreachable block (ram,0x080588a8)
// WARNING: Removing unreachable block (ram,0x080588b5)
// WARNING: Removing unreachable block (ram,0x080588cf)

int inst_11_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_11_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058990)
// WARNING: Removing unreachable block (ram,0x08058983)
// WARNING: Removing unreachable block (ram,0x0805899d)

int inst_11_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_11_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058a51)
// WARNING: Removing unreachable block (ram,0x08058a5e)

int inst_11_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_11_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058b12)
// WARNING: Removing unreachable block (ram,0x08058b1f)
// WARNING: Removing unreachable block (ram,0x08058b2c)

undefined4 inst_11_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_11_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058be0)
// WARNING: Removing unreachable block (ram,0x08058bfa)

undefined4 inst_11_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_11_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058cc8)
// WARNING: Removing unreachable block (ram,0x08058cbb)
// WARNING: Removing unreachable block (ram,0x08058cd5)

int inst_11_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_11_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058d96)
// WARNING: Removing unreachable block (ram,0x08058d89)
// WARNING: Removing unreachable block (ram,0x08058da3)

int inst_11_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_11_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058e4a)
// WARNING: Removing unreachable block (ram,0x08058e57)
// WARNING: Removing unreachable block (ram,0x08058e64)

undefined4 inst_11_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_11_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058f3f)

undefined4 inst_11_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_12_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058fec)
// WARNING: Removing unreachable block (ram,0x08058ff9)
// WARNING: Removing unreachable block (ram,0x08059006)

undefined4 inst_12_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_12_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080590cd)
// WARNING: Removing unreachable block (ram,0x080590c0)
// WARNING: Removing unreachable block (ram,0x080590e7)

undefined4 inst_12_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_12_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080591a1)

undefined4 inst_12_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_12_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059282)
// WARNING: Removing unreachable block (ram,0x0805928f)

undefined4 inst_12_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_12_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059356)
// WARNING: Removing unreachable block (ram,0x08059349)
// WARNING: Removing unreachable block (ram,0x08059363)

int inst_12_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_12_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059429)
// WARNING: Removing unreachable block (ram,0x0805940f)
// WARNING: Removing unreachable block (ram,0x0805941c)
// WARNING: Removing unreachable block (ram,0x08059436)

int inst_12_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_12_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805950a)

int inst_12_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_12_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080595c4)
// WARNING: Removing unreachable block (ram,0x080595b7)
// WARNING: Removing unreachable block (ram,0x080595de)

int inst_12_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_12_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805968b)

undefined4 inst_12_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_12_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805975f)
// WARNING: Removing unreachable block (ram,0x0805976c)

int inst_12_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_13_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805983c)
// WARNING: Removing unreachable block (ram,0x08059849)

undefined4 inst_13_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_13_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080598ff)

int inst_13_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_13_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080599e9)
// WARNING: Removing unreachable block (ram,0x080599cf)
// WARNING: Removing unreachable block (ram,0x080599dc)
// WARNING: Removing unreachable block (ram,0x080599f6)

undefined4 inst_13_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_13_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059aac)

undefined4 inst_13_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_13_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059b6f)

int inst_13_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_13_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059c4c)

undefined4 inst_13_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_13_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059d1c)
// WARNING: Removing unreachable block (ram,0x08059d29)

undefined4 inst_13_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_13_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059ddf)
// WARNING: Removing unreachable block (ram,0x08059dec)

undefined4 inst_13_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_13_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059ec9)
// WARNING: Removing unreachable block (ram,0x08059ed6)

undefined4 inst_13_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_13_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059f8c)
// WARNING: Removing unreachable block (ram,0x08059f99)

int inst_13_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_14_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a061)
// WARNING: Removing unreachable block (ram,0x0805a07b)

undefined4 inst_14_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_14_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a129)
// WARNING: Removing unreachable block (ram,0x0805a136)
// WARNING: Removing unreachable block (ram,0x0805a143)

int inst_14_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_14_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a1fd)

undefined4 inst_14_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_14_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a2ed)
// WARNING: Removing unreachable block (ram,0x0805a2fa)

int inst_14_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_14_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a3c3)
// WARNING: Removing unreachable block (ram,0x0805a3a9)
// WARNING: Removing unreachable block (ram,0x0805a3b6)
// WARNING: Removing unreachable block (ram,0x0805a3d0)

undefined4 inst_14_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_14_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a47f)
// WARNING: Removing unreachable block (ram,0x0805a48c)

undefined4 inst_14_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_14_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a562)

int inst_14_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_14_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a62b)
// WARNING: Removing unreachable block (ram,0x0805a638)

int inst_14_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_14_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a71b)
// WARNING: Removing unreachable block (ram,0x0805a701)
// WARNING: Removing unreachable block (ram,0x0805a70e)
// WARNING: Removing unreachable block (ram,0x0805a728)

int inst_14_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_14_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a7f1)
// WARNING: Removing unreachable block (ram,0x0805a7e4)
// WARNING: Removing unreachable block (ram,0x0805a7fe)

undefined4 inst_14_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_15_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a8a5)
// WARNING: Removing unreachable block (ram,0x0805a8bf)

int inst_15_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_15_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a980)

int inst_15_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_15_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805aa41)
// WARNING: Removing unreachable block (ram,0x0805aa4e)

int inst_15_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_15_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ab0f)

int inst_15_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_15_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805abf7)
// WARNING: Removing unreachable block (ram,0x0805abea)
// WARNING: Removing unreachable block (ram,0x0805ac04)

int inst_15_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_15_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805acc5)
// WARNING: Removing unreachable block (ram,0x0805acb8)
// WARNING: Removing unreachable block (ram,0x0805acd2)

int inst_15_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_15_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ad79)
// WARNING: Removing unreachable block (ram,0x0805ad93)

undefined4 inst_15_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_15_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ae47)
// WARNING: Removing unreachable block (ram,0x0805ae54)

int inst_15_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_15_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805af22)
// WARNING: Removing unreachable block (ram,0x0805af15)
// WARNING: Removing unreachable block (ram,0x0805af3c)

undefined4 inst_15_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_15_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805afe3)
// WARNING: Removing unreachable block (ram,0x0805aff0)

int inst_15_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_16_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b0b2)
// WARNING: Removing unreachable block (ram,0x0805b0bf)
// WARNING: Removing unreachable block (ram,0x0805b0cc)

undefined4 inst_16_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_16_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b182)
// WARNING: Removing unreachable block (ram,0x0805b19c)

undefined4 inst_16_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_16_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b25f)

int inst_16_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_16_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b321)
// WARNING: Removing unreachable block (ram,0x0805b33b)

int inst_16_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_16_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b3fe)
// WARNING: Removing unreachable block (ram,0x0805b40b)

int inst_16_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_16_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b4bf)
// WARNING: Removing unreachable block (ram,0x0805b4cc)
// WARNING: Removing unreachable block (ram,0x0805b4d9)

int inst_16_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_16_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b5a9)
// WARNING: Removing unreachable block (ram,0x0805b58f)
// WARNING: Removing unreachable block (ram,0x0805b59c)
// WARNING: Removing unreachable block (ram,0x0805b5b6)

int inst_16_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_16_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b65e)
// WARNING: Removing unreachable block (ram,0x0805b66b)
// WARNING: Removing unreachable block (ram,0x0805b678)

undefined4 inst_16_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_16_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b72e)
// WARNING: Removing unreachable block (ram,0x0805b73b)
// WARNING: Removing unreachable block (ram,0x0805b748)

undefined4 inst_16_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_16_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b7fe)
// WARNING: Removing unreachable block (ram,0x0805b818)

int inst_16_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_17_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b8d9)
// WARNING: Removing unreachable block (ram,0x0805b8e6)

undefined4 inst_17_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_17_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b9a7)
// WARNING: Removing unreachable block (ram,0x0805b99a)
// WARNING: Removing unreachable block (ram,0x0805b9c1)

undefined4 inst_17_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_17_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ba75)
// WARNING: Removing unreachable block (ram,0x0805ba8f)

int inst_17_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_17_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805bb36)
// WARNING: Removing unreachable block (ram,0x0805bb43)
// WARNING: Removing unreachable block (ram,0x0805bb50)

undefined4 inst_17_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_17_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805bc11)
// WARNING: Removing unreachable block (ram,0x0805bc2b)

int inst_17_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_17_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805bcdf)
// WARNING: Removing unreachable block (ram,0x0805bcd2)
// WARNING: Removing unreachable block (ram,0x0805bcf9)

int inst_17_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_17_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805bdad)
// WARNING: Removing unreachable block (ram,0x0805bdc7)

undefined4 inst_17_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_17_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805be7b)

undefined4 inst_17_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_17_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805bf3c)
// WARNING: Removing unreachable block (ram,0x0805bf49)

int inst_17_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_17_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c00a)

int inst_17_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_18_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c0de)

int inst_18_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_18_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c1cb)
// WARNING: Removing unreachable block (ram,0x0805c1b1)
// WARNING: Removing unreachable block (ram,0x0805c1be)
// WARNING: Removing unreachable block (ram,0x0805c1d8)

undefined4 inst_18_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_18_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c29f)
// WARNING: Removing unreachable block (ram,0x0805c285)
// WARNING: Removing unreachable block (ram,0x0805c292)
// WARNING: Removing unreachable block (ram,0x0805c2ac)

int inst_18_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_18_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c359)
// WARNING: Removing unreachable block (ram,0x0805c366)

int inst_18_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_18_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c42d)
// WARNING: Removing unreachable block (ram,0x0805c43a)

int inst_18_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_18_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c51a)
// WARNING: Removing unreachable block (ram,0x0805c527)

undefined4 inst_18_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_18_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c5ee)
// WARNING: Removing unreachable block (ram,0x0805c5fb)

undefined4 inst_18_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_18_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c6b5)

int inst_18_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_18_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c796)
// WARNING: Removing unreachable block (ram,0x0805c7a3)

int inst_18_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_18_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c850)

int inst_18_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_19_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c93a)
// WARNING: Removing unreachable block (ram,0x0805c92d)
// WARNING: Removing unreachable block (ram,0x0805c947)

undefined4 inst_19_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_19_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c9f0)

undefined4 inst_19_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_19_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805cac0)
// WARNING: Removing unreachable block (ram,0x0805cacd)
// WARNING: Removing unreachable block (ram,0x0805cada)

undefined4 inst_19_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_19_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805cb9d)
// WARNING: Removing unreachable block (ram,0x0805cb90)
// WARNING: Removing unreachable block (ram,0x0805cbb7)

undefined4 inst_19_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_19_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805cc7a)
// WARNING: Removing unreachable block (ram,0x0805cc87)

undefined4 inst_19_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_19_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805cd30)

undefined4 inst_19_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_19_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ce1a)
// WARNING: Removing unreachable block (ram,0x0805ce27)

int inst_19_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_19_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ceea)
// WARNING: Removing unreachable block (ram,0x0805cedd)
// WARNING: Removing unreachable block (ram,0x0805cef7)

undefined4 inst_19_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_19_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805cfad)
// WARNING: Removing unreachable block (ram,0x0805cfa0)
// WARNING: Removing unreachable block (ram,0x0805cfc7)

int inst_19_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_19_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d08a)
// WARNING: Removing unreachable block (ram,0x0805d097)

undefined4 inst_19_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_20_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d145)

int inst_20_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_20_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d235)
// WARNING: Removing unreachable block (ram,0x0805d242)

int inst_20_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_20_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d317)

int inst_20_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_20_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d3d3)
// WARNING: Removing unreachable block (ram,0x0805d3ed)

undefined4 inst_20_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_20_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d49c)
// WARNING: Removing unreachable block (ram,0x0805d4a9)

undefined4 inst_20_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_20_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d57f)
// WARNING: Removing unreachable block (ram,0x0805d599)

undefined4 inst_20_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_20_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d648)
// WARNING: Removing unreachable block (ram,0x0805d655)

undefined4 inst_20_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_20_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d71e)
// WARNING: Removing unreachable block (ram,0x0805d72b)

undefined4 inst_20_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_20_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d81b)

undefined4 inst_20_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_20_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d8d7)
// WARNING: Removing unreachable block (ram,0x0805d8ca)
// WARNING: Removing unreachable block (ram,0x0805d8f1)

int inst_20_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_21_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d9a5)
// WARNING: Removing unreachable block (ram,0x0805d9bf)

undefined4 inst_21_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_21_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805da80)
// WARNING: Removing unreachable block (ram,0x0805da73)
// WARNING: Removing unreachable block (ram,0x0805da8d)

int inst_21_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_21_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805db4e)
// WARNING: Removing unreachable block (ram,0x0805db41)
// WARNING: Removing unreachable block (ram,0x0805db5b)

int inst_21_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_21_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805dc0f)
// WARNING: Removing unreachable block (ram,0x0805dc1c)

undefined4 inst_21_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_21_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805dcd0)
// WARNING: Removing unreachable block (ram,0x0805dcdd)

undefined4 inst_21_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_21_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ddc5)

undefined4 inst_21_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_21_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805de6c)
// WARNING: Removing unreachable block (ram,0x0805de86)

int inst_21_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_21_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805df61)

int inst_21_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_21_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e008)
// WARNING: Removing unreachable block (ram,0x0805e015)

int inst_21_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_21_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e0f0)
// WARNING: Removing unreachable block (ram,0x0805e0e3)
// WARNING: Removing unreachable block (ram,0x0805e0fd)

undefined4 inst_21_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_22_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e1a4)
// WARNING: Removing unreachable block (ram,0x0805e1b1)

int inst_22_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_22_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e28b)
// WARNING: Removing unreachable block (ram,0x0805e27e)
// WARNING: Removing unreachable block (ram,0x0805e298)

int inst_22_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_22_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e33f)
// WARNING: Removing unreachable block (ram,0x0805e34c)

undefined4 inst_22_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_22_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e434)

int inst_22_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_22_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e4db)
// WARNING: Removing unreachable block (ram,0x0805e4e8)
// WARNING: Removing unreachable block (ram,0x0805e4f5)

undefined4 inst_22_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_22_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e5c3)
// WARNING: Removing unreachable block (ram,0x0805e5b6)
// WARNING: Removing unreachable block (ram,0x0805e5d0)

undefined4 inst_22_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_22_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e677)
// WARNING: Removing unreachable block (ram,0x0805e691)

int inst_22_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_22_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e745)
// WARNING: Removing unreachable block (ram,0x0805e752)

int inst_22_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_22_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e820)

int inst_22_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_22_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e8e1)
// WARNING: Removing unreachable block (ram,0x0805e8ee)

undefined4 inst_22_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_23_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e9ba)
// WARNING: Removing unreachable block (ram,0x0805e9d4)

int inst_23_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_23_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805eaa0)

undefined4 inst_23_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_23_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805eb5f)
// WARNING: Removing unreachable block (ram,0x0805eb45)
// WARNING: Removing unreachable block (ram,0x0805eb52)
// WARNING: Removing unreachable block (ram,0x0805eb6c)

undefined4 inst_23_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_23_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ec38)

int inst_23_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_23_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ecdd)
// WARNING: Removing unreachable block (ram,0x0805ecea)
// WARNING: Removing unreachable block (ram,0x0805ecf7)

undefined4 inst_23_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_23_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805eda9)
// WARNING: Removing unreachable block (ram,0x0805edb6)
// WARNING: Removing unreachable block (ram,0x0805edc3)

undefined4 inst_23_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_23_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ee82)
// WARNING: Removing unreachable block (ram,0x0805ee75)
// WARNING: Removing unreachable block (ram,0x0805ee9c)

undefined4 inst_23_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_23_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ef5b)
// WARNING: Removing unreachable block (ram,0x0805ef68)

undefined4 inst_23_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_23_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f027)
// WARNING: Removing unreachable block (ram,0x0805f01a)
// WARNING: Removing unreachable block (ram,0x0805f034)

int inst_23_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_23_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f0e6)

int inst_23_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_24_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f1b7)
// WARNING: Removing unreachable block (ram,0x0805f1d1)

undefined4 inst_24_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_24_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f296)
// WARNING: Removing unreachable block (ram,0x0805f289)
// WARNING: Removing unreachable block (ram,0x0805f2a3)

undefined4 inst_24_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_24_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f34e)
// WARNING: Removing unreachable block (ram,0x0805f35b)

int inst_24_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_24_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f420)

undefined4 inst_24_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_24_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f50c)
// WARNING: Removing unreachable block (ram,0x0805f4ff)
// WARNING: Removing unreachable block (ram,0x0805f519)

int inst_24_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_24_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f5d0)
// WARNING: Removing unreachable block (ram,0x0805f5c3)
// WARNING: Removing unreachable block (ram,0x0805f5ea)

int inst_24_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_24_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f695)
// WARNING: Removing unreachable block (ram,0x0805f6a2)
// WARNING: Removing unreachable block (ram,0x0805f6af)

int inst_24_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_24_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f767)
// WARNING: Removing unreachable block (ram,0x0805f774)
// WARNING: Removing unreachable block (ram,0x0805f781)

undefined4 inst_24_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_24_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f839)
// WARNING: Removing unreachable block (ram,0x0805f846)
// WARNING: Removing unreachable block (ram,0x0805f853)

int inst_24_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_24_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f917)

undefined4 inst_24_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_25_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f9d8)

int inst_25_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_25_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805faa6)
// WARNING: Removing unreachable block (ram,0x0805fab3)
// WARNING: Removing unreachable block (ram,0x0805fac0)

undefined4 inst_25_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_25_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805fb81)

undefined4 inst_25_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_25_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805fc42)
// WARNING: Removing unreachable block (ram,0x0805fc4f)
// WARNING: Removing unreachable block (ram,0x0805fc5c)

int inst_25_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_25_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805fd10)

undefined4 inst_25_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_25_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805fdf8)
// WARNING: Removing unreachable block (ram,0x0805fe05)

int inst_25_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_25_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805fec6)
// WARNING: Removing unreachable block (ram,0x0805feac)
// WARNING: Removing unreachable block (ram,0x0805feb9)
// WARNING: Removing unreachable block (ram,0x0805fed3)

int inst_25_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_25_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ff7a)
// WARNING: Removing unreachable block (ram,0x0805ff87)
// WARNING: Removing unreachable block (ram,0x0805ff94)

undefined4 inst_25_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_25_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060055)

undefined4 inst_25_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_25_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060116)

int inst_25_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_26_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080601f7)

int inst_26_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_26_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080602be)
// WARNING: Removing unreachable block (ram,0x080602cb)

undefined4 inst_26_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_26_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806039d)
// WARNING: Removing unreachable block (ram,0x08060390)
// WARNING: Removing unreachable block (ram,0x080603b7)

undefined4 inst_26_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_26_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060463)
// WARNING: Removing unreachable block (ram,0x08060470)
// WARNING: Removing unreachable block (ram,0x0806047d)

int inst_26_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_26_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060537)
// WARNING: Removing unreachable block (ram,0x08060544)
// WARNING: Removing unreachable block (ram,0x08060551)

undefined4 inst_26_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_26_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806060b)

int inst_26_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_26_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080606ec)
// WARNING: Removing unreachable block (ram,0x08060706)

int inst_26_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_26_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080607c0)
// WARNING: Removing unreachable block (ram,0x080607da)

undefined4 inst_26_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_26_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060894)
// WARNING: Removing unreachable block (ram,0x080608ae)

undefined4 inst_26_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_26_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806095a)
// WARNING: Removing unreachable block (ram,0x08060967)

undefined4 inst_26_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_27_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060a26)
// WARNING: Removing unreachable block (ram,0x08060a33)

undefined4 inst_27_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_27_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060aff)

int inst_27_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_27_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060bbe)
// WARNING: Removing unreachable block (ram,0x08060bcb)
// WARNING: Removing unreachable block (ram,0x08060bd8)

undefined4 inst_27_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_27_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060c97)
// WARNING: Removing unreachable block (ram,0x08060c8a)
// WARNING: Removing unreachable block (ram,0x08060cb1)

undefined4 inst_27_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_27_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060d70)
// WARNING: Removing unreachable block (ram,0x08060d56)
// WARNING: Removing unreachable block (ram,0x08060d63)
// WARNING: Removing unreachable block (ram,0x08060d7d)

int inst_27_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_27_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060e22)

undefined4 inst_27_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_27_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060eee)
// WARNING: Removing unreachable block (ram,0x08060efb)

int inst_27_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_27_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060fc7)
// WARNING: Removing unreachable block (ram,0x08060fe1)

undefined4 inst_27_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_27_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061093)

undefined4 inst_27_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_27_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806115f)
// WARNING: Removing unreachable block (ram,0x0806116c)

int inst_27_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_28_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806123a)
// WARNING: Removing unreachable block (ram,0x08061220)
// WARNING: Removing unreachable block (ram,0x0806122d)
// WARNING: Removing unreachable block (ram,0x08061247)

undefined4 inst_28_flags_var_0(void)

{
  return 0;
}



undefined4 inst_28_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080612e3)
// WARNING: Removing unreachable block (ram,0x080612f0)

undefined4 inst_28_flags_var_1(void)

{
  return 0;
}



undefined4 inst_28_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080613b2)
// WARNING: Removing unreachable block (ram,0x080613a5)
// WARNING: Removing unreachable block (ram,0x080613cc)

undefined4 inst_28_flags_var_2(void)

{
  return 0;
}



undefined4 inst_28_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061474)
// WARNING: Removing unreachable block (ram,0x08061467)
// WARNING: Removing unreachable block (ram,0x0806148e)

undefined4 inst_28_flags_var_3(void)

{
  return 0;
}



undefined4 inst_28_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061544)
// WARNING: Removing unreachable block (ram,0x0806152a)
// WARNING: Removing unreachable block (ram,0x08061537)
// WARNING: Removing unreachable block (ram,0x08061551)

undefined4 inst_28_flags_var_4(void)

{
  return 0;
}



undefined4 inst_28_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080615ec)
// WARNING: Removing unreachable block (ram,0x080615f9)

undefined4 inst_28_flags_var_5(void)

{
  return 0;
}



undefined4 inst_28_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080616c8)
// WARNING: Removing unreachable block (ram,0x080616ae)
// WARNING: Removing unreachable block (ram,0x080616bb)
// WARNING: Removing unreachable block (ram,0x080616d5)

undefined4 inst_28_flags_var_6(void)

{
  return 0;
}



undefined4 inst_28_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061771)
// WARNING: Removing unreachable block (ram,0x0806177e)
// WARNING: Removing unreachable block (ram,0x0806178b)

undefined4 inst_28_flags_var_7(void)

{
  return 0;
}



undefined4 inst_28_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061841)
// WARNING: Removing unreachable block (ram,0x08061834)
// WARNING: Removing unreachable block (ram,0x0806185b)

undefined4 inst_28_flags_var_8(void)

{
  return 0;
}



undefined4 inst_28_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061904)
// WARNING: Removing unreachable block (ram,0x080618f7)
// WARNING: Removing unreachable block (ram,0x0806191e)

undefined4 inst_28_flags_var_9(void)

{
  return 0;
}



undefined4 inst_29_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080619d2)
// WARNING: Removing unreachable block (ram,0x080619b8)
// WARNING: Removing unreachable block (ram,0x080619c5)
// WARNING: Removing unreachable block (ram,0x080619df)

undefined4 inst_29_flags_var_0(void)

{
  return 0;
}



undefined4 inst_29_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061a79)
// WARNING: Removing unreachable block (ram,0x08061a86)

undefined4 inst_29_flags_var_1(void)

{
  return 0;
}



undefined4 inst_29_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061b3a)
// WARNING: Removing unreachable block (ram,0x08061b47)
// WARNING: Removing unreachable block (ram,0x08061b54)

undefined4 inst_29_flags_var_2(void)

{
  return 0;
}



undefined4 inst_29_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061bfb)
// WARNING: Removing unreachable block (ram,0x08061c08)

undefined4 inst_29_flags_var_3(void)

{
  return 0;
}



undefined4 inst_29_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061cd6)
// WARNING: Removing unreachable block (ram,0x08061cbc)
// WARNING: Removing unreachable block (ram,0x08061cc9)
// WARNING: Removing unreachable block (ram,0x08061ce3)

undefined4 inst_29_flags_var_4(void)

{
  return 0;
}



undefined4 inst_29_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061d97)
// WARNING: Removing unreachable block (ram,0x08061d7d)
// WARNING: Removing unreachable block (ram,0x08061d8a)
// WARNING: Removing unreachable block (ram,0x08061da4)

undefined4 inst_29_flags_var_5(void)

{
  return 0;
}



undefined4 inst_29_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061e3e)
// WARNING: Removing unreachable block (ram,0x08061e4b)
// WARNING: Removing unreachable block (ram,0x08061e58)

undefined4 inst_29_flags_var_6(void)

{
  return 0;
}



undefined4 inst_29_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061f19)
// WARNING: Removing unreachable block (ram,0x08061eff)
// WARNING: Removing unreachable block (ram,0x08061f0c)
// WARNING: Removing unreachable block (ram,0x08061f26)

undefined4 inst_29_flags_var_7(void)

{
  return 0;
}



undefined4 inst_29_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061fc0)
// WARNING: Removing unreachable block (ram,0x08061fcd)
// WARNING: Removing unreachable block (ram,0x08061fda)

undefined4 inst_29_flags_var_8(void)

{
  return 0;
}



undefined4 inst_29_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806209b)
// WARNING: Removing unreachable block (ram,0x08062081)
// WARNING: Removing unreachable block (ram,0x0806208e)
// WARNING: Removing unreachable block (ram,0x080620a8)

undefined4 inst_29_flags_var_9(void)

{
  return 0;
}



undefined4 inst_30_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062148)
// WARNING: Removing unreachable block (ram,0x08062155)
// WARNING: Removing unreachable block (ram,0x08062162)

undefined4 inst_30_flags_var_0(void)

{
  return 0;
}



undefined4 inst_30_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806221c)
// WARNING: Removing unreachable block (ram,0x0806220f)
// WARNING: Removing unreachable block (ram,0x08062236)

undefined4 inst_30_flags_var_1(void)

{
  return 0;
}



undefined4 inst_30_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080622d5)
// WARNING: Removing unreachable block (ram,0x080622e2)
// WARNING: Removing unreachable block (ram,0x080622ef)

undefined4 inst_30_flags_var_2(void)

{
  return 0;
}



undefined4 inst_30_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080623b6)
// WARNING: Removing unreachable block (ram,0x0806239c)
// WARNING: Removing unreachable block (ram,0x080623a9)
// WARNING: Removing unreachable block (ram,0x080623c3)

undefined4 inst_30_flags_var_3(void)

{
  return 0;
}



undefined4 inst_30_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062462)
// WARNING: Removing unreachable block (ram,0x0806246f)
// WARNING: Removing unreachable block (ram,0x0806247c)

undefined4 inst_30_flags_var_4(void)

{
  return 0;
}



undefined4 inst_30_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062536)
// WARNING: Removing unreachable block (ram,0x08062529)
// WARNING: Removing unreachable block (ram,0x08062550)

undefined4 inst_30_flags_var_5(void)

{
  return 0;
}



undefined4 inst_30_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080625fc)
// WARNING: Removing unreachable block (ram,0x080625ef)
// WARNING: Removing unreachable block (ram,0x08062616)

undefined4 inst_30_flags_var_6(void)

{
  return 0;
}



undefined4 inst_30_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080626c3)
// WARNING: Removing unreachable block (ram,0x080626b6)
// WARNING: Removing unreachable block (ram,0x080626dd)

undefined4 inst_30_flags_var_7(void)

{
  return 0;
}



undefined4 inst_30_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806277d)
// WARNING: Removing unreachable block (ram,0x0806278a)

undefined4 inst_30_flags_var_8(void)

{
  return 0;
}



undefined4 inst_30_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062851)
// WARNING: Removing unreachable block (ram,0x08062844)
// WARNING: Removing unreachable block (ram,0x0806286b)

undefined4 inst_30_flags_var_9(void)

{
  return 0;
}



undefined4 inst_31_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062907)
// WARNING: Removing unreachable block (ram,0x08062914)
// WARNING: Removing unreachable block (ram,0x08062921)

undefined4 inst_31_flags_var_0(void)

{
  return 0;
}



undefined4 inst_31_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080629e4)
// WARNING: Removing unreachable block (ram,0x080629ca)
// WARNING: Removing unreachable block (ram,0x080629d7)
// WARNING: Removing unreachable block (ram,0x080629f1)

undefined4 inst_31_flags_var_1(void)

{
  return 0;
}



undefined4 inst_31_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062a9a)
// WARNING: Removing unreachable block (ram,0x08062a8d)
// WARNING: Removing unreachable block (ram,0x08062ab4)

undefined4 inst_31_flags_var_2(void)

{
  return 0;
}



undefined4 inst_31_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062b5d)
// WARNING: Removing unreachable block (ram,0x08062b50)
// WARNING: Removing unreachable block (ram,0x08062b77)

undefined4 inst_31_flags_var_3(void)

{
  return 0;
}



undefined4 inst_31_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062c2d)
// WARNING: Removing unreachable block (ram,0x08062c13)
// WARNING: Removing unreachable block (ram,0x08062c20)
// WARNING: Removing unreachable block (ram,0x08062c3a)

undefined4 inst_31_flags_var_4(void)

{
  return 0;
}



undefined4 inst_31_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062ce3)
// WARNING: Removing unreachable block (ram,0x08062cd6)
// WARNING: Removing unreachable block (ram,0x08062cfd)

undefined4 inst_31_flags_var_5(void)

{
  return 0;
}



undefined4 inst_31_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062db3)
// WARNING: Removing unreachable block (ram,0x08062d99)
// WARNING: Removing unreachable block (ram,0x08062da6)
// WARNING: Removing unreachable block (ram,0x08062dc0)

undefined4 inst_31_flags_var_6(void)

{
  return 0;
}



undefined4 inst_31_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062e69)
// WARNING: Removing unreachable block (ram,0x08062e5c)
// WARNING: Removing unreachable block (ram,0x08062e83)

undefined4 inst_31_flags_var_7(void)

{
  return 0;
}



undefined4 inst_31_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062f1f)
// WARNING: Removing unreachable block (ram,0x08062f2c)
// WARNING: Removing unreachable block (ram,0x08062f39)

undefined4 inst_31_flags_var_8(void)

{
  return 0;
}



undefined4 inst_31_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062fe2)
// WARNING: Removing unreachable block (ram,0x08062fef)
// WARNING: Removing unreachable block (ram,0x08062ffc)

undefined4 inst_31_flags_var_9(void)

{
  return 0;
}



undefined4 inst_32_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080630aa)
// WARNING: Removing unreachable block (ram,0x080630b7)
// WARNING: Removing unreachable block (ram,0x080630c4)

undefined4 inst_32_flags_var_0(void)

{
  return 0;
}



undefined4 inst_32_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063173)
// WARNING: Removing unreachable block (ram,0x08063180)
// WARNING: Removing unreachable block (ram,0x0806318d)

undefined4 inst_32_flags_var_1(void)

{
  return 0;
}



undefined4 inst_32_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063254)
// WARNING: Removing unreachable block (ram,0x0806323a)
// WARNING: Removing unreachable block (ram,0x08063247)
// WARNING: Removing unreachable block (ram,0x08063261)

undefined4 inst_32_flags_var_2(void)

{
  return 0;
}



undefined4 inst_32_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063303)
// WARNING: Removing unreachable block (ram,0x08063310)

undefined4 inst_32_flags_var_3(void)

{
  return 0;
}



undefined4 inst_32_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080633d8)
// WARNING: Removing unreachable block (ram,0x080633cb)
// WARNING: Removing unreachable block (ram,0x080633f2)

undefined4 inst_32_flags_var_4(void)

{
  return 0;
}



undefined4 inst_32_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080634a1)
// WARNING: Removing unreachable block (ram,0x08063494)
// WARNING: Removing unreachable block (ram,0x080634bb)

undefined4 inst_32_flags_var_5(void)

{
  return 0;
}



undefined4 inst_32_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806356a)
// WARNING: Removing unreachable block (ram,0x0806355d)
// WARNING: Removing unreachable block (ram,0x08063584)

undefined4 inst_32_flags_var_6(void)

{
  return 0;
}



undefined4 inst_32_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806363f)
// WARNING: Removing unreachable block (ram,0x08063625)
// WARNING: Removing unreachable block (ram,0x08063632)
// WARNING: Removing unreachable block (ram,0x0806364c)

undefined4 inst_32_flags_var_7(void)

{
  return 0;
}



undefined4 inst_32_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063707)
// WARNING: Removing unreachable block (ram,0x080636ed)
// WARNING: Removing unreachable block (ram,0x080636fa)
// WARNING: Removing unreachable block (ram,0x08063714)

undefined4 inst_32_flags_var_8(void)

{
  return 0;
}



undefined4 inst_32_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080637c2)
// WARNING: Removing unreachable block (ram,0x080637b5)
// WARNING: Removing unreachable block (ram,0x080637dc)

undefined4 inst_32_flags_var_9(void)

{
  return 0;
}



undefined4 inst_33_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063883)
// WARNING: Removing unreachable block (ram,0x08063876)
// WARNING: Removing unreachable block (ram,0x0806389d)

undefined4 inst_33_flags_var_0(void)

{
  return 0;
}



undefined4 inst_33_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063944)
// WARNING: Removing unreachable block (ram,0x08063937)
// WARNING: Removing unreachable block (ram,0x0806395e)

undefined4 inst_33_flags_var_1(void)

{
  return 0;
}



undefined4 inst_33_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063a12)
// WARNING: Removing unreachable block (ram,0x080639f8)
// WARNING: Removing unreachable block (ram,0x08063a05)
// WARNING: Removing unreachable block (ram,0x08063a1f)

undefined4 inst_33_flags_var_2(void)

{
  return 0;
}



undefined4 inst_33_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063ac6)
// WARNING: Removing unreachable block (ram,0x08063ab9)
// WARNING: Removing unreachable block (ram,0x08063ae0)

undefined4 inst_33_flags_var_3(void)

{
  return 0;
}



undefined4 inst_33_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063b87)
// WARNING: Removing unreachable block (ram,0x08063b7a)
// WARNING: Removing unreachable block (ram,0x08063ba1)

undefined4 inst_33_flags_var_4(void)

{
  return 0;
}



undefined4 inst_33_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063c55)
// WARNING: Removing unreachable block (ram,0x08063c3b)
// WARNING: Removing unreachable block (ram,0x08063c48)
// WARNING: Removing unreachable block (ram,0x08063c62)

undefined4 inst_33_flags_var_5(void)

{
  return 0;
}



undefined4 inst_33_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063d09)
// WARNING: Removing unreachable block (ram,0x08063cfc)
// WARNING: Removing unreachable block (ram,0x08063d23)

undefined4 inst_33_flags_var_6(void)

{
  return 0;
}



undefined4 inst_33_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063dca)
// WARNING: Removing unreachable block (ram,0x08063dbd)
// WARNING: Removing unreachable block (ram,0x08063de4)

undefined4 inst_33_flags_var_7(void)

{
  return 0;
}



undefined4 inst_33_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063e8b)
// WARNING: Removing unreachable block (ram,0x08063e7e)
// WARNING: Removing unreachable block (ram,0x08063ea5)

undefined4 inst_33_flags_var_8(void)

{
  return 0;
}



undefined4 inst_33_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063f4c)
// WARNING: Removing unreachable block (ram,0x08063f3f)
// WARNING: Removing unreachable block (ram,0x08063f66)

undefined4 inst_33_flags_var_9(void)

{
  return 0;
}



int inst_34_values_var_0(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0x8766918aU >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return iVar1 + -1;
}



undefined4 inst_34_flags_var_0(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0x71e8bf0bU >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return 0;
}



int inst_34_values_var_1(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0xbc07e239U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return iVar1;
}



undefined4 inst_34_flags_var_1(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0xf85d5270U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return 0;
}



int inst_34_values_var_2(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0xd31bd504U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return iVar1 + -2;
}



undefined4 inst_34_flags_var_2(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0x916a3873U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return 0;
}



int inst_34_values_var_3(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0xf57f2996U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return iVar1 + -1;
}



undefined4 inst_34_flags_var_3(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0xce1413ccU >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return 0;
}



int inst_34_values_var_4(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0x3eb45341U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return iVar1;
}



undefined4 inst_34_flags_var_4(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0xd15e5417U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return 0;
}



int inst_34_values_var_5(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0x927b775dU >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return iVar1;
}



undefined4 inst_34_flags_var_5(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0x28e38075U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return 0;
}



int inst_34_values_var_6(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0xe61c2c2fU >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return iVar1;
}



undefined4 inst_34_flags_var_6(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0x39b60967U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return 0;
}



int inst_34_values_var_7(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0xd45fa1b6U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return iVar1 + -1;
}



undefined4 inst_34_flags_var_7(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0x9849b4f6U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return 0;
}



int inst_34_values_var_8(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0x8b335f09U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return iVar1;
}



undefined4 inst_34_flags_var_8(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0x2bba89c5U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return 0;
}



int inst_34_values_var_9(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0x7e172c51U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return iVar1;
}



undefined4 inst_34_flags_var_9(void)

{
  int iVar1;
  
  for (iVar1 = 0; (0x40a04fc9U >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
  }
  return 0;
}



int inst_35_values_var_0(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0xeadaf271U >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_0(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0xa188b353U >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return 0;
}



int inst_35_values_var_1(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0xc157f3efU >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_1(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0xbb961fd3U >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return 0;
}



int inst_35_values_var_2(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0x86e00699U >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_2(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0x23503619U >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return 0;
}



int inst_35_values_var_3(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0x8218af63U >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_3(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0xe69fee0bU >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return 0;
}



int inst_35_values_var_4(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0xf29a35b0U >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_4(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0xa0560132U >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return 0;
}



int inst_35_values_var_5(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0x5d4bf350U >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return iVar1 + -0x1e;
}



undefined4 inst_35_flags_var_5(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0x9787f2e5U >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return 0;
}



int inst_35_values_var_6(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0x371f961dU >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return iVar1 + -0x1d;
}



undefined4 inst_35_flags_var_6(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0xc02bfd83U >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return 0;
}



int inst_35_values_var_7(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0xcdb8dd20U >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_7(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0xbb300de4U >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return 0;
}



int inst_35_values_var_8(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0x8a6bf559U >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_8(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0xed3ebeeeU >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return 0;
}



int inst_35_values_var_9(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0x8f27bb4dU >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_9(void)

{
  int iVar1;
  
  for (iVar1 = 0x1f; 0x7f04027aU >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  return 0;
}



undefined4 inst_36_values_var_0(void)

{
  return 0;
}



undefined4 inst_36_flags_var_0(void)

{
  return 0;
}



undefined4 inst_36_values_var_1(void)

{
  return 0;
}



undefined4 inst_36_flags_var_1(void)

{
  return 0;
}



undefined4 inst_36_values_var_2(void)

{
  return 0;
}



undefined4 inst_36_flags_var_2(void)

{
  return 0;
}



undefined4 inst_36_values_var_3(void)

{
  return 0;
}



undefined4 inst_36_flags_var_3(void)

{
  return 0;
}



undefined4 inst_36_values_var_4(void)

{
  return 0;
}



undefined4 inst_36_flags_var_4(void)

{
  return 0;
}



undefined4 inst_36_values_var_5(void)

{
  return 0;
}



undefined4 inst_36_flags_var_5(void)

{
  return 0;
}



undefined4 inst_36_values_var_6(void)

{
  return 0;
}



undefined4 inst_36_flags_var_6(void)

{
  return 0;
}



undefined4 inst_36_values_var_7(void)

{
  return 0;
}



undefined4 inst_36_flags_var_7(void)

{
  return 0;
}



undefined4 inst_36_values_var_8(void)

{
  return 0;
}



undefined4 inst_36_flags_var_8(void)

{
  return 0;
}



undefined4 inst_36_values_var_9(void)

{
  return 0;
}



undefined4 inst_36_flags_var_9(void)

{
  return 0;
}



undefined4 inst_37_values_var_0(void)

{
  return 0;
}



undefined4 inst_37_flags_var_0(void)

{
  return 0;
}



undefined4 inst_37_values_var_1(void)

{
  return 0;
}



undefined4 inst_37_flags_var_1(void)

{
  return 0;
}



undefined4 inst_37_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08065464)

undefined4 inst_37_flags_var_2(void)

{
  return 0;
}



undefined4 inst_37_values_var_3(void)

{
  return 0;
}



undefined4 inst_37_flags_var_3(void)

{
  return 0;
}



undefined4 inst_37_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080655be)

undefined4 inst_37_flags_var_4(void)

{
  return 0;
}



undefined4 inst_37_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806566b)

undefined4 inst_37_flags_var_5(void)

{
  return 0;
}



undefined4 inst_37_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08065718)

undefined4 inst_37_flags_var_6(void)

{
  return 0;
}



undefined4 inst_37_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080657c5)

undefined4 inst_37_flags_var_7(void)

{
  return 0;
}



undefined4 inst_37_values_var_8(void)

{
  return 0;
}



undefined4 inst_37_flags_var_8(void)

{
  return 0;
}



undefined4 inst_37_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806591f)

undefined4 inst_37_flags_var_9(void)

{
  return 0;
}



undefined4 inst_38_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080659ca)

undefined4 inst_38_flags_var_0(void)

{
  return 0;
}



undefined4 inst_38_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08065a75)

undefined4 inst_38_flags_var_1(void)

{
  return 0;
}



undefined4 inst_38_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08065b20)

undefined4 inst_38_flags_var_2(void)

{
  return 0;
}



undefined4 inst_38_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08065bcb)

undefined4 inst_38_flags_var_3(void)

{
  return 0;
}



undefined4 inst_38_values_var_4(void)

{
  return 0;
}



undefined4 inst_38_flags_var_4(void)

{
  return 0;
}



undefined4 inst_38_values_var_5(void)

{
  return 0;
}



undefined4 inst_38_flags_var_5(void)

{
  return 0;
}



undefined4 inst_38_values_var_6(void)

{
  return 0;
}



undefined4 inst_38_flags_var_6(void)

{
  return 0;
}



undefined4 inst_38_values_var_7(void)

{
  return 0;
}



undefined4 inst_38_flags_var_7(void)

{
  return 0;
}



undefined4 inst_38_values_var_8(void)

{
  return 0;
}



undefined4 inst_38_flags_var_8(void)

{
  return 0;
}



undefined4 inst_38_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08065fcd)

undefined4 inst_38_flags_var_9(void)

{
  return 0;
}



undefined4 inst_39_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806607c)

undefined4 inst_39_flags_var_0(void)

{
  return 0;
}



undefined4 inst_39_values_var_1(void)

{
  return 0;
}



undefined4 inst_39_flags_var_1(void)

{
  return 0;
}



undefined4 inst_39_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080661da)

undefined4 inst_39_flags_var_2(void)

{
  return 0;
}



undefined4 inst_39_values_var_3(void)

{
  return 0;
}



undefined4 inst_39_flags_var_3(void)

{
  return 0;
}



undefined4 inst_39_values_var_4(void)

{
  return 0;
}



undefined4 inst_39_flags_var_4(void)

{
  return 0;
}



undefined4 inst_39_values_var_5(void)

{
  return 0;
}



undefined4 inst_39_flags_var_5(void)

{
  return 0;
}



undefined4 inst_39_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08066496)

undefined4 inst_39_flags_var_6(void)

{
  return 0;
}



undefined4 inst_39_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08066545)

undefined4 inst_39_flags_var_7(void)

{
  return 0;
}



undefined4 inst_39_values_var_8(void)

{
  return 0;
}



undefined4 inst_39_flags_var_8(void)

{
  return 0;
}



undefined4 inst_39_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080666a3)

undefined4 inst_39_flags_var_9(void)

{
  return 0;
}



undefined4 inst_40_values_var_0(void)

{
  return 0;
}



undefined4 inst_40_flags_var_0(void)

{
  return 0;
}



undefined4 inst_40_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080667fd)

undefined4 inst_40_flags_var_1(void)

{
  return 0;
}



undefined4 inst_40_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080668aa)

undefined4 inst_40_flags_var_2(void)

{
  return 0;
}



undefined4 inst_40_values_var_3(void)

{
  return 0;
}



undefined4 inst_40_flags_var_3(void)

{
  return 0;
}



undefined4 inst_40_values_var_4(void)

{
  return 0;
}



undefined4 inst_40_flags_var_4(void)

{
  return 0;
}



undefined4 inst_40_values_var_5(void)

{
  return 0;
}



undefined4 inst_40_flags_var_5(void)

{
  return 0;
}



undefined4 inst_40_values_var_6(void)

{
  return 0;
}



undefined4 inst_40_flags_var_6(void)

{
  return 0;
}



undefined4 inst_40_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08066c0b)

undefined4 inst_40_flags_var_7(void)

{
  return 0;
}



undefined4 inst_40_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08066cb8)

undefined4 inst_40_flags_var_8(void)

{
  return 0;
}



undefined4 inst_40_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08066d65)

undefined4 inst_40_flags_var_9(void)

{
  return 0;
}



undefined4 inst_41_values_var_0(void)

{
  return 0;
}



undefined4 inst_41_flags_var_0(void)

{
  return 0;
}



undefined4 inst_41_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08066ebf)

undefined4 inst_41_flags_var_1(void)

{
  return 0;
}



undefined4 inst_41_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08066f6c)

undefined4 inst_41_flags_var_2(void)

{
  return 0;
}



undefined4 inst_41_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08067019)

undefined4 inst_41_flags_var_3(void)

{
  return 0;
}



undefined4 inst_41_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080670c6)

undefined4 inst_41_flags_var_4(void)

{
  return 0;
}



undefined4 inst_41_values_var_5(void)

{
  return 0;
}



undefined4 inst_41_flags_var_5(void)

{
  return 0;
}



undefined4 inst_41_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08067220)

undefined4 inst_41_flags_var_6(void)

{
  return 0;
}



undefined4 inst_41_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080672cd)

undefined4 inst_41_flags_var_7(void)

{
  return 0;
}



undefined4 inst_41_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806737a)

undefined4 inst_41_flags_var_8(void)

{
  return 0;
}



undefined4 inst_41_values_var_9(void)

{
  return 0;
}



undefined4 inst_41_flags_var_9(void)

{
  return 0;
}



undefined4 inst_42_values_var_0(void)

{
  return 0;
}



undefined4 inst_42_flags_var_0(void)

{
  return 0;
}



undefined4 inst_42_values_var_1(void)

{
  return 0;
}



undefined4 inst_42_flags_var_1(void)

{
  return 0;
}



undefined4 inst_42_values_var_2(void)

{
  return 0;
}



undefined4 inst_42_flags_var_2(void)

{
  return 0;
}



undefined4 inst_42_values_var_3(void)

{
  return 0;
}



undefined4 inst_42_flags_var_3(void)

{
  return 0;
}



undefined4 inst_42_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806777e)

undefined4 inst_42_flags_var_4(void)

{
  return 0;
}



undefined4 inst_42_values_var_5(void)

{
  return 0;
}



undefined4 inst_42_flags_var_5(void)

{
  return 0;
}



undefined4 inst_42_values_var_6(void)

{
  return 0;
}



undefined4 inst_42_flags_var_6(void)

{
  return 0;
}



undefined4 inst_42_values_var_7(void)

{
  return 0;
}



undefined4 inst_42_flags_var_7(void)

{
  return 0;
}



undefined4 inst_42_values_var_8(void)

{
  return 0;
}



undefined4 inst_42_flags_var_8(void)

{
  return 0;
}



undefined4 inst_42_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08067ad5)

undefined4 inst_42_flags_var_9(void)

{
  return 0;
}



undefined4 inst_43_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08067b84)

undefined4 inst_43_flags_var_0(void)

{
  return 0;
}



undefined4 inst_43_values_var_1(void)

{
  return 0;
}



undefined4 inst_43_flags_var_1(void)

{
  return 0;
}



undefined4 inst_43_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08067ce2)

undefined4 inst_43_flags_var_2(void)

{
  return 0;
}



undefined4 inst_43_values_var_3(void)

{
  return 0;
}



undefined4 inst_43_flags_var_3(void)

{
  return 0;
}



undefined4 inst_43_values_var_4(void)

{
  return 0;
}



undefined4 inst_43_flags_var_4(void)

{
  return 0;
}



undefined4 inst_43_values_var_5(void)

{
  return 0;
}



undefined4 inst_43_flags_var_5(void)

{
  return 0;
}



undefined4 inst_43_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08067f9e)

undefined4 inst_43_flags_var_6(void)

{
  return 0;
}



undefined4 inst_43_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806804d)

undefined4 inst_43_flags_var_7(void)

{
  return 0;
}



undefined4 inst_43_values_var_8(void)

{
  return 0;
}



undefined4 inst_43_flags_var_8(void)

{
  return 0;
}



undefined4 inst_43_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080681ab)

undefined4 inst_43_flags_var_9(void)

{
  return 0;
}



undefined4 inst_44_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08068258)

undefined4 inst_44_flags_var_0(void)

{
  return 0;
}



undefined4 inst_44_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08068305)

undefined4 inst_44_flags_var_1(void)

{
  return 0;
}



undefined4 inst_44_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080683b2)

undefined4 inst_44_flags_var_2(void)

{
  return 0;
}



undefined4 inst_44_values_var_3(void)

{
  return 0;
}



undefined4 inst_44_flags_var_3(void)

{
  return 0;
}



undefined4 inst_44_values_var_4(void)

{
  return 0;
}



undefined4 inst_44_flags_var_4(void)

{
  return 0;
}



undefined4 inst_44_values_var_5(void)

{
  return 0;
}



undefined4 inst_44_flags_var_5(void)

{
  return 0;
}



undefined4 inst_44_values_var_6(void)

{
  return 0;
}



undefined4 inst_44_flags_var_6(void)

{
  return 0;
}



undefined4 inst_44_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08068713)

undefined4 inst_44_flags_var_7(void)

{
  return 0;
}



undefined4 inst_44_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080687c0)

undefined4 inst_44_flags_var_8(void)

{
  return 0;
}



undefined4 inst_44_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806886d)

undefined4 inst_44_flags_var_9(void)

{
  return 0;
}



undefined4 inst_45_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806891a)

undefined4 inst_45_flags_var_0(void)

{
  return 0;
}



undefined4 inst_45_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080689c7)

undefined4 inst_45_flags_var_1(void)

{
  return 0;
}



undefined4 inst_45_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08068a74)

undefined4 inst_45_flags_var_2(void)

{
  return 0;
}



undefined4 inst_45_values_var_3(void)

{
  return 0;
}



undefined4 inst_45_flags_var_3(void)

{
  return 0;
}



undefined4 inst_45_values_var_4(void)

{
  return 0;
}



undefined4 inst_45_flags_var_4(void)

{
  return 0;
}



undefined4 inst_45_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08068c7b)

undefined4 inst_45_flags_var_5(void)

{
  return 0;
}



undefined4 inst_45_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08068d28)

undefined4 inst_45_flags_var_6(void)

{
  return 0;
}



undefined4 inst_45_values_var_7(void)

{
  return 0;
}



undefined4 inst_45_flags_var_7(void)

{
  return 0;
}



undefined4 inst_45_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08068e82)

undefined4 inst_45_flags_var_8(void)

{
  return 0;
}



undefined4 inst_45_values_var_9(void)

{
  return 0;
}



undefined4 inst_45_flags_var_9(void)

{
  return 0;
}



undefined4 inst_46_values_var_0(void)

{
  return 0;
}



undefined4 inst_46_flags_var_0(void)

{
  return 0;
}



undefined4 inst_46_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08069085)

undefined4 inst_46_flags_var_1(void)

{
  return 0;
}



undefined4 inst_46_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08069130)

undefined4 inst_46_flags_var_2(void)

{
  return 0;
}



undefined4 inst_46_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080691db)

undefined4 inst_46_flags_var_3(void)

{
  return 0;
}



undefined4 inst_46_values_var_4(void)

{
  return 0;
}



undefined4 inst_46_flags_var_4(void)

{
  return 0;
}



undefined4 inst_46_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08069331)

undefined4 inst_46_flags_var_5(void)

{
  return 0;
}



undefined4 inst_46_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080693dc)

undefined4 inst_46_flags_var_6(void)

{
  return 0;
}



undefined4 inst_46_values_var_7(void)

{
  return 0;
}



undefined4 inst_46_flags_var_7(void)

{
  return 0;
}



undefined4 inst_46_values_var_8(void)

{
  return 0;
}



undefined4 inst_46_flags_var_8(void)

{
  return 0;
}



undefined4 inst_46_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080695dd)

undefined4 inst_46_flags_var_9(void)

{
  return 0;
}



undefined4 inst_47_values_var_0(void)

{
  return 0;
}



undefined4 inst_47_flags_var_0(void)

{
  return 0;
}



undefined4 inst_47_values_var_1(void)

{
  return 0;
}



undefined4 inst_47_flags_var_1(void)

{
  return 0;
}



undefined4 inst_47_values_var_2(void)

{
  return 0;
}



undefined4 inst_47_flags_var_2(void)

{
  return 0;
}



undefined4 inst_47_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08069899)

undefined4 inst_47_flags_var_3(void)

{
  return 0;
}



undefined4 inst_47_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08069948)

undefined4 inst_47_flags_var_4(void)

{
  return 0;
}



undefined4 inst_47_values_var_5(void)

{
  return 0;
}



undefined4 inst_47_flags_var_5(void)

{
  return 0;
}



undefined4 inst_47_values_var_6(void)

{
  return 0;
}



undefined4 inst_47_flags_var_6(void)

{
  return 0;
}



undefined4 inst_47_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08069b55)

undefined4 inst_47_flags_var_7(void)

{
  return 0;
}



undefined4 inst_47_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08069c04)

undefined4 inst_47_flags_var_8(void)

{
  return 0;
}



undefined4 inst_47_values_var_9(void)

{
  return 0;
}



undefined4 inst_47_flags_var_9(void)

{
  return 0;
}



undefined4 inst_48_values_var_0(void)

{
  return 0;
}



undefined4 inst_48_flags_var_0(void)

{
  return 0;
}



undefined4 inst_48_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08069e0d)

undefined4 inst_48_flags_var_1(void)

{
  return 0;
}



undefined4 inst_48_values_var_2(void)

{
  return 0;
}



undefined4 inst_48_flags_var_2(void)

{
  return 0;
}



undefined4 inst_48_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08069f67)

undefined4 inst_48_flags_var_3(void)

{
  return 0;
}



undefined4 inst_48_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806a014)

undefined4 inst_48_flags_var_4(void)

{
  return 0;
}



undefined4 inst_48_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806a0c1)

undefined4 inst_48_flags_var_5(void)

{
  return 0;
}



undefined4 inst_48_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806a16e)

undefined4 inst_48_flags_var_6(void)

{
  return 0;
}



undefined4 inst_48_values_var_7(void)

{
  return 0;
}



undefined4 inst_48_flags_var_7(void)

{
  return 0;
}



undefined4 inst_48_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806a2c8)

undefined4 inst_48_flags_var_8(void)

{
  return 0;
}



undefined4 inst_48_values_var_9(void)

{
  return 0;
}



undefined4 inst_48_flags_var_9(void)

{
  return 0;
}



undefined4 inst_49_values_var_0(void)

{
  return 0;
}



undefined4 inst_49_flags_var_0(void)

{
  return 0;
}



undefined4 inst_49_values_var_1(void)

{
  return 0;
}



undefined4 inst_49_flags_var_1(void)

{
  return 0;
}



undefined4 inst_49_values_var_2(void)

{
  return 0;
}



undefined4 inst_49_flags_var_2(void)

{
  return 0;
}



undefined4 inst_49_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806a629)

undefined4 inst_49_flags_var_3(void)

{
  return 0;
}



undefined4 inst_49_values_var_4(void)

{
  return 0;
}



undefined4 inst_49_flags_var_4(void)

{
  return 0;
}



undefined4 inst_49_values_var_5(void)

{
  return 0;
}



undefined4 inst_49_flags_var_5(void)

{
  return 0;
}



undefined4 inst_49_values_var_6(void)

{
  return 0;
}



undefined4 inst_49_flags_var_6(void)

{
  return 0;
}



undefined4 inst_49_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806a8dd)

undefined4 inst_49_flags_var_7(void)

{
  return 0;
}



undefined4 inst_49_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806a98a)

undefined4 inst_49_flags_var_8(void)

{
  return 0;
}



undefined4 inst_49_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806aa37)

undefined4 inst_49_flags_var_9(void)

{
  return 0;
}



undefined4 inst_50_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806aae2)

undefined4 inst_50_flags_var_0(void)

{
  return 0;
}



undefined4 inst_50_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806ab8d)

undefined4 inst_50_flags_var_1(void)

{
  return 0;
}



undefined4 inst_50_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806ac38)

undefined4 inst_50_flags_var_2(void)

{
  return 0;
}



undefined4 inst_50_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806ace3)

undefined4 inst_50_flags_var_3(void)

{
  return 0;
}



undefined4 inst_50_values_var_4(void)

{
  return 0;
}



undefined4 inst_50_flags_var_4(void)

{
  return 0;
}



undefined4 inst_50_values_var_5(void)

{
  return 0;
}



undefined4 inst_50_flags_var_5(void)

{
  return 0;
}



undefined4 inst_50_values_var_6(void)

{
  return 0;
}



undefined4 inst_50_flags_var_6(void)

{
  return 0;
}



undefined4 inst_50_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806af8f)

undefined4 inst_50_flags_var_7(void)

{
  return 0;
}



undefined4 inst_50_values_var_8(void)

{
  return 0;
}



undefined4 inst_50_flags_var_8(void)

{
  return 0;
}



undefined4 inst_50_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806b0e5)

undefined4 inst_50_flags_var_9(void)

{
  return 0;
}



undefined4 inst_51_values_var_0(void)

{
  return 0;
}



undefined4 inst_51_flags_var_0(void)

{
  return 0;
}



undefined4 inst_51_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806b243)

undefined4 inst_51_flags_var_1(void)

{
  return 0;
}



undefined4 inst_51_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806b2f2)

undefined4 inst_51_flags_var_2(void)

{
  return 0;
}



undefined4 inst_51_values_var_3(void)

{
  return 0;
}



undefined4 inst_51_flags_var_3(void)

{
  return 0;
}



undefined4 inst_51_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806b450)

undefined4 inst_51_flags_var_4(void)

{
  return 0;
}



undefined4 inst_51_values_var_5(void)

{
  return 0;
}



undefined4 inst_51_flags_var_5(void)

{
  return 0;
}



undefined4 inst_51_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806b5ae)

undefined4 inst_51_flags_var_6(void)

{
  return 0;
}



undefined4 inst_51_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806b65d)

undefined4 inst_51_flags_var_7(void)

{
  return 0;
}



undefined4 inst_51_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806b70c)

undefined4 inst_51_flags_var_8(void)

{
  return 0;
}



undefined4 inst_51_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806b7bb)

undefined4 inst_51_flags_var_9(void)

{
  return 0;
}



undefined4 inst_52_values_var_0(void)

{
  return 0;
}



undefined4 inst_52_flags_var_0(void)

{
  return 0;
}



undefined4 inst_52_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806b915)

undefined4 inst_52_flags_var_1(void)

{
  return 0;
}



undefined4 inst_52_values_var_2(void)

{
  return 0;
}



undefined4 inst_52_flags_var_2(void)

{
  return 0;
}



undefined4 inst_52_values_var_3(void)

{
  return 0;
}



undefined4 inst_52_flags_var_3(void)

{
  return 0;
}



undefined4 inst_52_values_var_4(void)

{
  return 0;
}



undefined4 inst_52_flags_var_4(void)

{
  return 0;
}



undefined4 inst_52_values_var_5(void)

{
  return 0;
}



undefined4 inst_52_flags_var_5(void)

{
  return 0;
}



undefined4 inst_52_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806bc76)

undefined4 inst_52_flags_var_6(void)

{
  return 0;
}



undefined4 inst_52_values_var_7(void)

{
  return 0;
}



undefined4 inst_52_flags_var_7(void)

{
  return 0;
}



undefined4 inst_52_values_var_8(void)

{
  return 0;
}



undefined4 inst_52_flags_var_8(void)

{
  return 0;
}



undefined4 inst_52_values_var_9(void)

{
  return 0;
}



undefined4 inst_52_flags_var_9(void)

{
  return 0;
}



undefined4 inst_53_values_var_0(void)

{
  return 0;
}



undefined4 inst_53_flags_var_0(void)

{
  return 0;
}



undefined4 inst_53_values_var_1(void)

{
  return 0;
}



undefined4 inst_53_flags_var_1(void)

{
  return 0;
}



undefined4 inst_53_values_var_2(void)

{
  return 0;
}



undefined4 inst_53_flags_var_2(void)

{
  return 0;
}



undefined4 inst_53_values_var_3(void)

{
  return 0;
}



undefined4 inst_53_flags_var_3(void)

{
  return 0;
}



undefined4 inst_53_values_var_4(void)

{
  return 0;
}



undefined4 inst_53_flags_var_4(void)

{
  return 0;
}



undefined4 inst_53_values_var_5(void)

{
  return 0;
}



undefined4 inst_53_flags_var_5(void)

{
  return 0;
}



undefined4 inst_53_values_var_6(void)

{
  return 0;
}



undefined4 inst_53_flags_var_6(void)

{
  return 0;
}



undefined4 inst_53_values_var_7(void)

{
  return 0;
}



undefined4 inst_53_flags_var_7(void)

{
  return 0;
}



undefined4 inst_53_values_var_8(void)

{
  return 0;
}



undefined4 inst_53_flags_var_8(void)

{
  return 0;
}



undefined4 inst_53_values_var_9(void)

{
  return 0;
}



undefined4 inst_53_flags_var_9(void)

{
  return 0;
}



undefined4 inst_54_values_var_0(void)

{
  return 0;
}



undefined4 inst_54_flags_var_0(void)

{
  return 0;
}



undefined4 inst_54_values_var_1(void)

{
  return 0;
}



undefined4 inst_54_flags_var_1(void)

{
  return 0;
}



undefined4 inst_54_values_var_2(void)

{
  return 0;
}



undefined4 inst_54_flags_var_2(void)

{
  return 0;
}



undefined4 inst_54_values_var_3(void)

{
  return 0;
}



undefined4 inst_54_flags_var_3(void)

{
  return 0;
}



undefined4 inst_54_values_var_4(void)

{
  return 0;
}



undefined4 inst_54_flags_var_4(void)

{
  return 0;
}



undefined4 inst_54_values_var_5(void)

{
  return 0;
}



undefined4 inst_54_flags_var_5(void)

{
  return 0;
}



undefined4 inst_54_values_var_6(void)

{
  return 0;
}



undefined4 inst_54_flags_var_6(void)

{
  return 0;
}



undefined4 inst_54_values_var_7(void)

{
  return 0;
}



undefined4 inst_54_flags_var_7(void)

{
  return 0;
}



undefined4 inst_54_values_var_8(void)

{
  return 0;
}



undefined4 inst_54_flags_var_8(void)

{
  return 0;
}



undefined4 inst_54_values_var_9(void)

{
  return 0;
}



undefined4 inst_54_flags_var_9(void)

{
  return 0;
}



undefined4 inst_55_values_var_0(void)

{
  return 0;
}



undefined4 inst_55_flags_var_0(void)

{
  return 0;
}



undefined4 inst_55_values_var_1(void)

{
  return 0;
}



undefined4 inst_55_flags_var_1(void)

{
  return 0;
}



undefined4 inst_55_values_var_2(void)

{
  return 0;
}



undefined4 inst_55_flags_var_2(void)

{
  return 0;
}



undefined4 inst_55_values_var_3(void)

{
  return 0;
}



undefined4 inst_55_flags_var_3(void)

{
  return 0;
}



undefined4 inst_55_values_var_4(void)

{
  return 0;
}



undefined4 inst_55_flags_var_4(void)

{
  return 0;
}



undefined4 inst_55_values_var_5(void)

{
  return 0;
}



undefined4 inst_55_flags_var_5(void)

{
  return 0;
}



undefined4 inst_55_values_var_6(void)

{
  return 0;
}



undefined4 inst_55_flags_var_6(void)

{
  return 0;
}



undefined4 inst_55_values_var_7(void)

{
  return 0;
}



undefined4 inst_55_flags_var_7(void)

{
  return 0;
}



undefined4 inst_55_values_var_8(void)

{
  return 0;
}



undefined4 inst_55_flags_var_8(void)

{
  return 0;
}



undefined4 inst_55_values_var_9(void)

{
  return 0;
}



undefined4 inst_55_flags_var_9(void)

{
  return 0;
}



undefined4 inst_56_values_var_0(void)

{
  return 0;
}



undefined4 inst_56_flags_var_0(void)

{
  return 0;
}



undefined4 inst_56_values_var_1(void)

{
  return 0;
}



undefined4 inst_56_flags_var_1(void)

{
  return 0;
}



undefined4 inst_56_values_var_2(void)

{
  return 0;
}



undefined4 inst_56_flags_var_2(void)

{
  return 0;
}



undefined4 inst_56_values_var_3(void)

{
  return 0;
}



undefined4 inst_56_flags_var_3(void)

{
  return 0;
}



undefined4 inst_56_values_var_4(void)

{
  return 0;
}



undefined4 inst_56_flags_var_4(void)

{
  return 0;
}



undefined4 inst_56_values_var_5(void)

{
  return 0;
}



undefined4 inst_56_flags_var_5(void)

{
  return 0;
}



undefined4 inst_56_values_var_6(void)

{
  return 0;
}



undefined4 inst_56_flags_var_6(void)

{
  return 0;
}



undefined4 inst_56_values_var_7(void)

{
  return 0;
}



undefined4 inst_56_flags_var_7(void)

{
  return 0;
}



undefined4 inst_56_values_var_8(void)

{
  return 0;
}



undefined4 inst_56_flags_var_8(void)

{
  return 0;
}



undefined4 inst_56_values_var_9(void)

{
  return 0;
}



undefined4 inst_56_flags_var_9(void)

{
  return 0;
}



undefined4 inst_57_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806d824)

undefined4 inst_57_flags_var_0(void)

{
  return 0;
}



undefined4 inst_57_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806d8cb)

undefined4 inst_57_flags_var_1(void)

{
  return 0;
}



undefined4 inst_57_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806d972)

undefined4 inst_57_flags_var_2(void)

{
  return 0;
}



undefined4 inst_57_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806da19)

undefined4 inst_57_flags_var_3(void)

{
  return 0;
}



undefined4 inst_57_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806dac0)

undefined4 inst_57_flags_var_4(void)

{
  return 0;
}



undefined4 inst_57_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806db67)

undefined4 inst_57_flags_var_5(void)

{
  return 0;
}



undefined4 inst_57_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806dc0e)

undefined4 inst_57_flags_var_6(void)

{
  return 0;
}



undefined4 inst_57_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806dcb5)

undefined4 inst_57_flags_var_7(void)

{
  return 0;
}



undefined4 inst_57_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806dd5c)

undefined4 inst_57_flags_var_8(void)

{
  return 0;
}



undefined4 inst_57_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806de03)

undefined4 inst_57_flags_var_9(void)

{
  return 0;
}



undefined4 inst_58_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806deaa)

undefined4 inst_58_flags_var_0(void)

{
  return 0;
}



undefined4 inst_58_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806df51)

undefined4 inst_58_flags_var_1(void)

{
  return 0;
}



undefined4 inst_58_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806dff8)

undefined4 inst_58_flags_var_2(void)

{
  return 0;
}



undefined4 inst_58_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e09f)

undefined4 inst_58_flags_var_3(void)

{
  return 0;
}



undefined4 inst_58_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e146)

undefined4 inst_58_flags_var_4(void)

{
  return 0;
}



undefined4 inst_58_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e1ed)

undefined4 inst_58_flags_var_5(void)

{
  return 0;
}



undefined4 inst_58_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e294)

undefined4 inst_58_flags_var_6(void)

{
  return 0;
}



undefined4 inst_58_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e33b)

undefined4 inst_58_flags_var_7(void)

{
  return 0;
}



undefined4 inst_58_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e3e2)

undefined4 inst_58_flags_var_8(void)

{
  return 0;
}



undefined4 inst_58_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e489)

undefined4 inst_58_flags_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e4e1)

undefined4 inst_59_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e528)

undefined4 inst_59_flags_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e586)

undefined4 inst_59_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e5cd)

undefined4 inst_59_flags_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e62b)

undefined4 inst_59_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e672)

undefined4 inst_59_flags_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e6d0)

undefined4 inst_59_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e717)

undefined4 inst_59_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e775)

undefined4 inst_59_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e7bc)

undefined4 inst_59_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e81a)

undefined4 inst_59_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e861)

undefined4 inst_59_flags_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e8bf)

undefined4 inst_59_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e906)

undefined4 inst_59_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e964)

undefined4 inst_59_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806e9ab)

undefined4 inst_59_flags_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806ea09)

undefined4 inst_59_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806ea50)

undefined4 inst_59_flags_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806eaae)

undefined4 inst_59_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806eaf5)

undefined4 inst_59_flags_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806eb53)

undefined4 inst_60_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806eb99)

undefined4 inst_60_flags_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806ebf6)

undefined4 inst_60_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806ec3c)

undefined4 inst_60_flags_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806ec99)

undefined4 inst_60_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806ecdf)

undefined4 inst_60_flags_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806ed3c)

undefined4 inst_60_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806ed82)

undefined4 inst_60_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806eddf)

undefined4 inst_60_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806ee25)

undefined4 inst_60_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806ee82)

undefined4 inst_60_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806eec8)

undefined4 inst_60_flags_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806ef25)

undefined4 inst_60_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806ef6b)

undefined4 inst_60_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806efc8)

undefined4 inst_60_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806f00e)

undefined4 inst_60_flags_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806f06b)

undefined4 inst_60_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806f0b1)

undefined4 inst_60_flags_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806f10e)

undefined4 inst_60_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806f154)

undefined4 inst_60_flags_var_9(void)

{
  return 0;
}



undefined4 inst_61_values_var_0(void)

{
  return 0;
}



undefined4 inst_61_flags_var_0(void)

{
  return 0;
}



undefined4 inst_61_values_var_1(void)

{
  return 0;
}



undefined4 inst_61_flags_var_1(void)

{
  return 0;
}



undefined4 inst_61_values_var_2(void)

{
  return 0;
}



undefined4 inst_61_flags_var_2(void)

{
  return 0;
}



undefined4 inst_61_values_var_3(void)

{
  return 0;
}



undefined4 inst_61_flags_var_3(void)

{
  return 0;
}



undefined4 inst_61_values_var_4(void)

{
  return 0;
}



undefined4 inst_61_flags_var_4(void)

{
  return 0;
}



undefined4 inst_61_values_var_5(void)

{
  return 0;
}



undefined4 inst_61_flags_var_5(void)

{
  return 0;
}



undefined4 inst_61_values_var_6(void)

{
  return 0;
}



undefined4 inst_61_flags_var_6(void)

{
  return 0;
}



undefined4 inst_61_values_var_7(void)

{
  return 0;
}



undefined4 inst_61_flags_var_7(void)

{
  return 0;
}



undefined4 inst_61_values_var_8(void)

{
  return 0;
}



undefined4 inst_61_flags_var_8(void)

{
  return 0;
}



undefined4 inst_61_values_var_9(void)

{
  return 0;
}



undefined4 inst_61_flags_var_9(void)

{
  return 0;
}



undefined4 inst_62_values_var_0(void)

{
  return 0;
}



undefined4 inst_62_flags_var_0(void)

{
  return 0;
}



undefined4 inst_62_values_var_1(void)

{
  return 0;
}



undefined4 inst_62_flags_var_1(void)

{
  return 0;
}



undefined4 inst_62_values_var_2(void)

{
  return 0;
}



undefined4 inst_62_flags_var_2(void)

{
  return 0;
}



undefined4 inst_62_values_var_3(void)

{
  return 0;
}



undefined4 inst_62_flags_var_3(void)

{
  return 0;
}



undefined4 inst_62_values_var_4(void)

{
  return 0;
}



undefined4 inst_62_flags_var_4(void)

{
  return 0;
}



undefined4 inst_62_values_var_5(void)

{
  return 0;
}



undefined4 inst_62_flags_var_5(void)

{
  return 0;
}



undefined4 inst_62_values_var_6(void)

{
  return 0;
}



undefined4 inst_62_flags_var_6(void)

{
  return 0;
}



undefined4 inst_62_values_var_7(void)

{
  return 0;
}



undefined4 inst_62_flags_var_7(void)

{
  return 0;
}



undefined4 inst_62_values_var_8(void)

{
  return 0;
}



undefined4 inst_62_flags_var_8(void)

{
  return 0;
}



undefined4 inst_62_values_var_9(void)

{
  return 0;
}



undefined4 inst_62_flags_var_9(void)

{
  return 0;
}



undefined4 inst_63_values_var_0(void)

{
  return 0;
}



undefined4 inst_63_flags_var_0(void)

{
  return 0;
}



undefined4 inst_63_values_var_1(void)

{
  return 0;
}



undefined4 inst_63_flags_var_1(void)

{
  return 0;
}



undefined4 inst_63_values_var_2(void)

{
  return 0;
}



undefined4 inst_63_flags_var_2(void)

{
  return 0;
}



undefined4 inst_63_values_var_3(void)

{
  return 0;
}



undefined4 inst_63_flags_var_3(void)

{
  return 0;
}



undefined4 inst_63_values_var_4(void)

{
  return 0;
}



undefined4 inst_63_flags_var_4(void)

{
  return 0;
}



undefined4 inst_63_values_var_5(void)

{
  return 0;
}



undefined4 inst_63_flags_var_5(void)

{
  return 0;
}



undefined4 inst_63_values_var_6(void)

{
  return 0;
}



undefined4 inst_63_flags_var_6(void)

{
  return 0;
}



undefined4 inst_63_values_var_7(void)

{
  return 0;
}



undefined4 inst_63_flags_var_7(void)

{
  return 0;
}



undefined4 inst_63_values_var_8(void)

{
  return 0;
}



undefined4 inst_63_flags_var_8(void)

{
  return 0;
}



undefined4 inst_63_values_var_9(void)

{
  return 0;
}



undefined4 inst_63_flags_var_9(void)

{
  return 0;
}



undefined4 inst_64_values_var_0(void)

{
  return 0;
}



undefined4 inst_64_flags_var_0(void)

{
  return 0;
}



undefined4 inst_64_values_var_1(void)

{
  return 0;
}



undefined4 inst_64_flags_var_1(void)

{
  return 0;
}



undefined4 inst_64_values_var_2(void)

{
  return 0;
}



undefined4 inst_64_flags_var_2(void)

{
  return 0;
}



undefined4 inst_64_values_var_3(void)

{
  return 0;
}



undefined4 inst_64_flags_var_3(void)

{
  return 0;
}



undefined4 inst_64_values_var_4(void)

{
  return 0;
}



undefined4 inst_64_flags_var_4(void)

{
  return 0;
}



undefined4 inst_64_values_var_5(void)

{
  return 0;
}



undefined4 inst_64_flags_var_5(void)

{
  return 0;
}



undefined4 inst_64_values_var_6(void)

{
  return 0;
}



undefined4 inst_64_flags_var_6(void)

{
  return 0;
}



undefined4 inst_64_values_var_7(void)

{
  return 0;
}



undefined4 inst_64_flags_var_7(void)

{
  return 0;
}



undefined4 inst_64_values_var_8(void)

{
  return 0;
}



undefined4 inst_64_flags_var_8(void)

{
  return 0;
}



undefined4 inst_64_values_var_9(void)

{
  return 0;
}



undefined4 inst_64_flags_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08070b51)

undefined4 inst_65_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08070b98)

undefined4 inst_65_flags_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08070bf6)

undefined4 inst_65_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08070c3d)

undefined4 inst_65_flags_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08070c9b)

undefined4 inst_65_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08070ce2)

undefined4 inst_65_flags_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08070d40)

undefined4 inst_65_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08070d87)

undefined4 inst_65_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08070de5)

undefined4 inst_65_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08070e2c)

undefined4 inst_65_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08070e8a)

undefined4 inst_65_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08070ed1)

undefined4 inst_65_flags_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08070f2f)

undefined4 inst_65_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08070f76)

undefined4 inst_65_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08070fd4)

undefined4 inst_65_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807101b)

undefined4 inst_65_flags_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071079)

undefined4 inst_65_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080710c0)

undefined4 inst_65_flags_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807111e)

undefined4 inst_65_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071165)

undefined4 inst_65_flags_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080711c3)

undefined4 inst_66_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071209)

undefined4 inst_66_flags_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071266)

undefined4 inst_66_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080712ac)

undefined4 inst_66_flags_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071309)

undefined4 inst_66_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807134f)

undefined4 inst_66_flags_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080713ac)

undefined4 inst_66_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080713f2)

undefined4 inst_66_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807144f)

undefined4 inst_66_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071495)

undefined4 inst_66_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080714f2)

undefined4 inst_66_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071538)

undefined4 inst_66_flags_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071595)

undefined4 inst_66_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080715db)

undefined4 inst_66_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071638)

undefined4 inst_66_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807167e)

undefined4 inst_66_flags_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080716db)

undefined4 inst_66_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071721)

undefined4 inst_66_flags_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807177e)

undefined4 inst_66_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080717c4)

undefined4 inst_66_flags_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071821)

undefined4 inst_67_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071868)

undefined4 inst_67_flags_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080718c6)

undefined4 inst_67_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807190d)

undefined4 inst_67_flags_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807196b)

undefined4 inst_67_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080719b2)

undefined4 inst_67_flags_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071a10)

undefined4 inst_67_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071a57)

undefined4 inst_67_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071ab5)

undefined4 inst_67_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071afc)

undefined4 inst_67_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071b5a)

undefined4 inst_67_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071ba1)

undefined4 inst_67_flags_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071bff)

undefined4 inst_67_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071c46)

undefined4 inst_67_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071ca4)

undefined4 inst_67_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071ceb)

undefined4 inst_67_flags_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071d49)

undefined4 inst_67_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071d90)

undefined4 inst_67_flags_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071dee)

undefined4 inst_67_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071e35)

undefined4 inst_67_flags_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071e93)

undefined4 inst_68_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071ed9)

undefined4 inst_68_flags_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071f36)

undefined4 inst_68_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071f7c)

undefined4 inst_68_flags_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08071fd9)

undefined4 inst_68_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807201f)

undefined4 inst_68_flags_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807207c)

undefined4 inst_68_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080720c2)

undefined4 inst_68_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807211f)

undefined4 inst_68_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08072165)

undefined4 inst_68_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080721c2)

undefined4 inst_68_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08072208)

undefined4 inst_68_flags_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08072265)

undefined4 inst_68_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080722ab)

undefined4 inst_68_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08072308)

undefined4 inst_68_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807234e)

undefined4 inst_68_flags_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080723ab)

undefined4 inst_68_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080723f1)

undefined4 inst_68_flags_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807244e)

undefined4 inst_68_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08072494)

undefined4 inst_68_flags_var_9(void)

{
  return 0;
}



undefined4 inst_69_values_var_0(void)

{
  return 0;
}



undefined4 inst_69_flags_var_0(void)

{
  return 0;
}



undefined4 inst_69_values_var_1(void)

{
  return 0;
}



undefined4 inst_69_flags_var_1(void)

{
  return 0;
}



undefined4 inst_69_values_var_2(void)

{
  return 0;
}



undefined4 inst_69_flags_var_2(void)

{
  return 0;
}



undefined4 inst_69_values_var_3(void)

{
  return 0;
}



undefined4 inst_69_flags_var_3(void)

{
  return 0;
}



undefined4 inst_69_values_var_4(void)

{
  return 0;
}



undefined4 inst_69_flags_var_4(void)

{
  return 0;
}



undefined4 inst_69_values_var_5(void)

{
  return 0;
}



undefined4 inst_69_flags_var_5(void)

{
  return 0;
}



undefined4 inst_69_values_var_6(void)

{
  return 0;
}



undefined4 inst_69_flags_var_6(void)

{
  return 0;
}



undefined4 inst_69_values_var_7(void)

{
  return 0;
}



undefined4 inst_69_flags_var_7(void)

{
  return 0;
}



undefined4 inst_69_values_var_8(void)

{
  return 0;
}



undefined4 inst_69_flags_var_8(void)

{
  return 0;
}



undefined4 inst_69_values_var_9(void)

{
  return 0;
}



undefined4 inst_69_flags_var_9(void)

{
  return 0;
}



undefined4 inst_70_values_var_0(void)

{
  return 0;
}



undefined4 inst_70_flags_var_0(void)

{
  return 0;
}



undefined4 inst_70_values_var_1(void)

{
  return 0;
}



undefined4 inst_70_flags_var_1(void)

{
  return 0;
}



undefined4 inst_70_values_var_2(void)

{
  return 0;
}



undefined4 inst_70_flags_var_2(void)

{
  return 0;
}



undefined4 inst_70_values_var_3(void)

{
  return 0;
}



undefined4 inst_70_flags_var_3(void)

{
  return 0;
}



undefined4 inst_70_values_var_4(void)

{
  return 0;
}



undefined4 inst_70_flags_var_4(void)

{
  return 0;
}



undefined4 inst_70_values_var_5(void)

{
  return 0;
}



undefined4 inst_70_flags_var_5(void)

{
  return 0;
}



undefined4 inst_70_values_var_6(void)

{
  return 0;
}



undefined4 inst_70_flags_var_6(void)

{
  return 0;
}



undefined4 inst_70_values_var_7(void)

{
  return 0;
}



undefined4 inst_70_flags_var_7(void)

{
  return 0;
}



undefined4 inst_70_values_var_8(void)

{
  return 0;
}



undefined4 inst_70_flags_var_8(void)

{
  return 0;
}



undefined4 inst_70_values_var_9(void)

{
  return 0;
}



undefined4 inst_70_flags_var_9(void)

{
  return 0;
}



undefined4 inst_71_values_var_0(void)

{
  return 0;
}



undefined4 inst_71_flags_var_0(void)

{
  return 0;
}



undefined4 inst_71_values_var_1(void)

{
  return 0;
}



undefined4 inst_71_flags_var_1(void)

{
  return 0;
}



undefined4 inst_71_values_var_2(void)

{
  return 0;
}



undefined4 inst_71_flags_var_2(void)

{
  return 0;
}



undefined4 inst_71_values_var_3(void)

{
  return 0;
}



undefined4 inst_71_flags_var_3(void)

{
  return 0;
}



undefined4 inst_71_values_var_4(void)

{
  return 0;
}



undefined4 inst_71_flags_var_4(void)

{
  return 0;
}



undefined4 inst_71_values_var_5(void)

{
  return 0;
}



undefined4 inst_71_flags_var_5(void)

{
  return 0;
}



undefined4 inst_71_values_var_6(void)

{
  return 0;
}



undefined4 inst_71_flags_var_6(void)

{
  return 0;
}



undefined4 inst_71_values_var_7(void)

{
  return 0;
}



undefined4 inst_71_flags_var_7(void)

{
  return 0;
}



undefined4 inst_71_values_var_8(void)

{
  return 0;
}



undefined4 inst_71_flags_var_8(void)

{
  return 0;
}



undefined4 inst_71_values_var_9(void)

{
  return 0;
}



undefined4 inst_71_flags_var_9(void)

{
  return 0;
}



undefined4 inst_72_values_var_0(void)

{
  return 0;
}



undefined4 inst_72_flags_var_0(void)

{
  return 0;
}



undefined4 inst_72_values_var_1(void)

{
  return 0;
}



undefined4 inst_72_flags_var_1(void)

{
  return 0;
}



undefined4 inst_72_values_var_2(void)

{
  return 0;
}



undefined4 inst_72_flags_var_2(void)

{
  return 0;
}



undefined4 inst_72_values_var_3(void)

{
  return 0;
}



undefined4 inst_72_flags_var_3(void)

{
  return 0;
}



undefined4 inst_72_values_var_4(void)

{
  return 0;
}



undefined4 inst_72_flags_var_4(void)

{
  return 0;
}



undefined4 inst_72_values_var_5(void)

{
  return 0;
}



undefined4 inst_72_flags_var_5(void)

{
  return 0;
}



undefined4 inst_72_values_var_6(void)

{
  return 0;
}



undefined4 inst_72_flags_var_6(void)

{
  return 0;
}



undefined4 inst_72_values_var_7(void)

{
  return 0;
}



undefined4 inst_72_flags_var_7(void)

{
  return 0;
}



undefined4 inst_72_values_var_8(void)

{
  return 0;
}



undefined4 inst_72_flags_var_8(void)

{
  return 0;
}



undefined4 inst_72_values_var_9(void)

{
  return 0;
}



undefined4 inst_72_flags_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08073e91)

undefined4 inst_73_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08073ed8)

undefined4 inst_73_flags_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08073f36)

undefined4 inst_73_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08073f7d)

undefined4 inst_73_flags_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08073fdb)

undefined4 inst_73_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074022)

undefined4 inst_73_flags_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074080)

undefined4 inst_73_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080740c7)

undefined4 inst_73_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074125)

undefined4 inst_73_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807416c)

undefined4 inst_73_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080741ca)

undefined4 inst_73_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074211)

undefined4 inst_73_flags_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807426f)

undefined4 inst_73_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080742b6)

undefined4 inst_73_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074314)

undefined4 inst_73_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807435b)

undefined4 inst_73_flags_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080743b9)

undefined4 inst_73_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074400)

undefined4 inst_73_flags_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807445e)

undefined4 inst_73_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080744a5)

undefined4 inst_73_flags_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074503)

undefined4 inst_74_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074549)

undefined4 inst_74_flags_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080745a6)

undefined4 inst_74_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080745ec)

undefined4 inst_74_flags_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074649)

undefined4 inst_74_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807468f)

undefined4 inst_74_flags_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080746ec)

undefined4 inst_74_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074732)

undefined4 inst_74_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807478f)

undefined4 inst_74_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080747d5)

undefined4 inst_74_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074832)

undefined4 inst_74_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074878)

undefined4 inst_74_flags_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080748d5)

undefined4 inst_74_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807491b)

undefined4 inst_74_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074978)

undefined4 inst_74_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080749be)

undefined4 inst_74_flags_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074a1b)

undefined4 inst_74_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074a61)

undefined4 inst_74_flags_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074abe)

undefined4 inst_74_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074b04)

undefined4 inst_74_flags_var_9(void)

{
  return 0;
}



undefined4 inst_75_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074ba8)

undefined4 inst_75_flags_var_0(void)

{
  return 0;
}



undefined4 inst_75_values_var_1(void)

{
  return 0;
}



undefined4 inst_75_flags_var_1(void)

{
  return 0;
}



undefined4 inst_75_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074cf2)

undefined4 inst_75_flags_var_2(void)

{
  return 0;
}



undefined4 inst_75_values_var_3(void)

{
  return 0;
}



undefined4 inst_75_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074df5)

undefined4 inst_75_values_var_4(void)

{
  return 0;
}



undefined4 inst_75_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074e9a)

undefined4 inst_75_values_var_5(void)

{
  return 0;
}



undefined4 inst_75_flags_var_5(void)

{
  return 0;
}



undefined4 inst_75_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074f86)

undefined4 inst_75_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08074fe4)

undefined4 inst_75_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807502b)

undefined4 inst_75_flags_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075089)

undefined4 inst_75_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080750d0)

undefined4 inst_75_flags_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807512e)

undefined4 inst_75_values_var_9(void)

{
  return 0;
}



undefined4 inst_75_flags_var_9(void)

{
  return 0;
}



undefined4 inst_76_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075219)

undefined4 inst_76_flags_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075276)

undefined4 inst_76_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080752bc)

undefined4 inst_76_flags_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075319)

undefined4 inst_76_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807535f)

undefined4 inst_76_flags_var_2(void)

{
  return 0;
}



undefined4 inst_76_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075402)

undefined4 inst_76_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807545f)

undefined4 inst_76_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080754a5)

undefined4 inst_76_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075502)

undefined4 inst_76_values_var_5(void)

{
  return 0;
}



undefined4 inst_76_flags_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080755a5)

undefined4 inst_76_values_var_6(void)

{
  return 0;
}



undefined4 inst_76_flags_var_6(void)

{
  return 0;
}



undefined4 inst_76_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807568e)

undefined4 inst_76_flags_var_7(void)

{
  return 0;
}



undefined4 inst_76_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075731)

undefined4 inst_76_flags_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807578e)

undefined4 inst_76_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080757d4)

undefined4 inst_76_flags_var_9(void)

{
  return 0;
}



undefined4 inst_77_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075878)

undefined4 inst_77_flags_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080758d6)

undefined4 inst_77_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807591d)

undefined4 inst_77_flags_var_1(void)

{
  return 0;
}



undefined4 inst_77_values_var_2(void)

{
  return 0;
}



undefined4 inst_77_flags_var_2(void)

{
  return 0;
}



undefined4 inst_77_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075a67)

undefined4 inst_77_flags_var_3(void)

{
  return 0;
}



undefined4 inst_77_values_var_4(void)

{
  return 0;
}



undefined4 inst_77_flags_var_4(void)

{
  return 0;
}



undefined4 inst_77_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075bb1)

undefined4 inst_77_flags_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075c0f)

undefined4 inst_77_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075c56)

undefined4 inst_77_flags_var_6(void)

{
  return 0;
}



undefined4 inst_77_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075cfb)

undefined4 inst_77_flags_var_7(void)

{
  return 0;
}



undefined4 inst_77_values_var_8(void)

{
  return 0;
}



undefined4 inst_77_flags_var_8(void)

{
  return 0;
}



undefined4 inst_77_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075e45)

undefined4 inst_77_flags_var_9(void)

{
  return 0;
}



undefined4 inst_78_values_var_0(void)

{
  return 0;
}



undefined4 inst_78_flags_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075f46)

undefined4 inst_78_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075f8c)

undefined4 inst_78_flags_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08075fe9)

undefined4 inst_78_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807602f)

undefined4 inst_78_flags_var_2(void)

{
  return 0;
}



undefined4 inst_78_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080760d2)

undefined4 inst_78_flags_var_3(void)

{
  return 0;
}



undefined4 inst_78_values_var_4(void)

{
  return 0;
}



undefined4 inst_78_flags_var_4(void)

{
  return 0;
}



undefined4 inst_78_values_var_5(void)

{
  return 0;
}



undefined4 inst_78_flags_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08076275)

undefined4 inst_78_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080762bb)

undefined4 inst_78_flags_var_6(void)

{
  return 0;
}



undefined4 inst_78_values_var_7(void)

{
  return 0;
}



undefined4 inst_78_flags_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080763bb)

undefined4 inst_78_values_var_8(void)

{
  return 0;
}



undefined4 inst_78_flags_var_8(void)

{
  return 0;
}



undefined4 inst_78_values_var_9(void)

{
  return 0;
}



undefined4 inst_78_flags_var_9(void)

{
  return 0;
}



undefined4 inst_79_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08076548)

undefined4 inst_79_flags_var_0(void)

{
  return 0;
}



undefined4 inst_79_values_var_1(void)

{
  return 0;
}



undefined4 inst_79_flags_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807664b)

undefined4 inst_79_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08076692)

undefined4 inst_79_flags_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080766f0)

undefined4 inst_79_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08076737)

undefined4 inst_79_flags_var_3(void)

{
  return 0;
}



undefined4 inst_79_values_var_4(void)

{
  return 0;
}



undefined4 inst_79_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807683a)

undefined4 inst_79_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08076881)

undefined4 inst_79_flags_var_5(void)

{
  return 0;
}



undefined4 inst_79_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08076926)

undefined4 inst_79_flags_var_6(void)

{
  return 0;
}



undefined4 inst_79_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080769cb)

undefined4 inst_79_flags_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08076a29)

undefined4 inst_79_values_var_8(void)

{
  return 0;
}



undefined4 inst_79_flags_var_8(void)

{
  return 0;
}



undefined4 inst_79_values_var_9(void)

{
  return 0;
}



undefined4 inst_79_flags_var_9(void)

{
  return 0;
}



undefined4 inst_80_values_var_0(void)

{
  return 0;
}



undefined4 inst_80_flags_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08076c16)

undefined4 inst_80_values_var_1(void)

{
  return 0;
}



undefined4 inst_80_flags_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08076cb9)

undefined4 inst_80_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08076cff)

undefined4 inst_80_flags_var_2(void)

{
  return 0;
}



undefined4 inst_80_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08076da2)

undefined4 inst_80_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08076dff)

undefined4 inst_80_values_var_4(void)

{
  return 0;
}



undefined4 inst_80_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08076ea2)

undefined4 inst_80_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08076ee8)

undefined4 inst_80_flags_var_5(void)

{
  return 0;
}



undefined4 inst_80_values_var_6(void)

{
  return 0;
}



undefined4 inst_80_flags_var_6(void)

{
  return 0;
}



undefined4 inst_80_values_var_7(void)

{
  return 0;
}



undefined4 inst_80_flags_var_7(void)

{
  return 0;
}



undefined4 inst_80_values_var_8(void)

{
  return 0;
}



undefined4 inst_80_flags_var_8(void)

{
  return 0;
}



undefined4 inst_80_values_var_9(void)

{
  return 0;
}



undefined4 inst_80_flags_var_9(void)

{
  return 0;
}



undefined4 inst_81_values_var_0(void)

{
  return 0;
}



undefined4 inst_81_flags_var_0(void)

{
  return 0;
}



undefined4 inst_81_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080772bd)

undefined4 inst_81_flags_var_1(void)

{
  return 0;
}



undefined4 inst_81_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08077362)

undefined4 inst_81_flags_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080773c0)

undefined4 inst_81_values_var_3(void)

{
  return 0;
}



undefined4 inst_81_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08077465)

undefined4 inst_81_values_var_4(void)

{
  return 0;
}



undefined4 inst_81_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807750a)

undefined4 inst_81_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08077551)

undefined4 inst_81_flags_var_5(void)

{
  return 0;
}



undefined4 inst_81_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080775f6)

undefined4 inst_81_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08077654)

undefined4 inst_81_values_var_7(void)

{
  return 0;
}



undefined4 inst_81_flags_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080776f9)

undefined4 inst_81_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08077740)

undefined4 inst_81_flags_var_8(void)

{
  return 0;
}



undefined4 inst_81_values_var_9(void)

{
  return 0;
}



undefined4 inst_81_flags_var_9(void)

{
  return 0;
}



undefined4 inst_82_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08077889)

undefined4 inst_82_flags_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080778e6)

undefined4 inst_82_values_var_1(void)

{
  return 0;
}



undefined4 inst_82_flags_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08077989)

undefined4 inst_82_values_var_2(void)

{
  return 0;
}



undefined4 inst_82_flags_var_2(void)

{
  return 0;
}



undefined4 inst_82_values_var_3(void)

{
  return 0;
}



undefined4 inst_82_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08077acf)

undefined4 inst_82_values_var_4(void)

{
  return 0;
}



undefined4 inst_82_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08077b72)

undefined4 inst_82_values_var_5(void)

{
  return 0;
}



undefined4 inst_82_flags_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08077c15)

undefined4 inst_82_values_var_6(void)

{
  return 0;
}



undefined4 inst_82_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08077cb8)

undefined4 inst_82_values_var_7(void)

{
  return 0;
}



undefined4 inst_82_flags_var_7(void)

{
  return 0;
}



undefined4 inst_82_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08077da1)

undefined4 inst_82_flags_var_8(void)

{
  return 0;
}



undefined4 inst_82_values_var_9(void)

{
  return 0;
}



undefined4 inst_82_flags_var_9(void)

{
  return 0;
}



undefined4 inst_83_values_var_0(void)

{
  return 0;
}



undefined4 inst_83_flags_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08077f46)

undefined4 inst_83_values_var_1(void)

{
  return 0;
}



undefined4 inst_83_flags_var_1(void)

{
  return 0;
}



undefined4 inst_83_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078032)

undefined4 inst_83_flags_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078090)

undefined4 inst_83_values_var_3(void)

{
  return 0;
}



undefined4 inst_83_flags_var_3(void)

{
  return 0;
}



undefined4 inst_83_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807817c)

undefined4 inst_83_flags_var_4(void)

{
  return 0;
}



undefined4 inst_83_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078221)

undefined4 inst_83_flags_var_5(void)

{
  return 0;
}



undefined4 inst_83_values_var_6(void)

{
  return 0;
}



undefined4 inst_83_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078324)

undefined4 inst_83_values_var_7(void)

{
  return 0;
}



undefined4 inst_83_flags_var_7(void)

{
  return 0;
}



undefined4 inst_83_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078410)

undefined4 inst_83_flags_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807846e)

undefined4 inst_83_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080784b5)

undefined4 inst_83_flags_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078513)

undefined4 inst_84_values_var_0(void)

{
  return 0;
}



undefined4 inst_84_flags_var_0(void)

{
  return 0;
}



undefined4 inst_84_values_var_1(void)

{
  return 0;
}



undefined4 inst_84_flags_var_1(void)

{
  return 0;
}



undefined4 inst_84_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807869f)

undefined4 inst_84_flags_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080786fc)

undefined4 inst_84_values_var_3(void)

{
  return 0;
}



undefined4 inst_84_flags_var_3(void)

{
  return 0;
}



undefined4 inst_84_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080787e5)

undefined4 inst_84_flags_var_4(void)

{
  return 0;
}



undefined4 inst_84_values_var_5(void)

{
  return 0;
}



undefined4 inst_84_flags_var_5(void)

{
  return 0;
}



undefined4 inst_84_values_var_6(void)

{
  return 0;
}



undefined4 inst_84_flags_var_6(void)

{
  return 0;
}



undefined4 inst_84_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080789ce)

undefined4 inst_84_flags_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078a2b)

undefined4 inst_84_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078a71)

undefined4 inst_84_flags_var_8(void)

{
  return 0;
}



undefined4 inst_84_values_var_9(void)

{
  return 0;
}



undefined4 inst_84_flags_var_9(void)

{
  return 0;
}



undefined4 inst_85_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078bb8)

undefined4 inst_85_flags_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078c16)

undefined4 inst_85_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078c5d)

undefined4 inst_85_flags_var_1(void)

{
  return 0;
}



undefined4 inst_85_values_var_2(void)

{
  return 0;
}



undefined4 inst_85_flags_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078d60)

undefined4 inst_85_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078da7)

undefined4 inst_85_flags_var_3(void)

{
  return 0;
}



undefined4 inst_85_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078e4c)

undefined4 inst_85_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078eaa)

undefined4 inst_85_values_var_5(void)

{
  return 0;
}



undefined4 inst_85_flags_var_5(void)

{
  return 0;
}



undefined4 inst_85_values_var_6(void)

{
  return 0;
}



undefined4 inst_85_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08078ff4)

undefined4 inst_85_values_var_7(void)

{
  return 0;
}



undefined4 inst_85_flags_var_7(void)

{
  return 0;
}



undefined4 inst_85_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080790e0)

undefined4 inst_85_flags_var_8(void)

{
  return 0;
}



undefined4 inst_85_values_var_9(void)

{
  return 0;
}



undefined4 inst_85_flags_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080791e3)

undefined4 inst_86_values_var_0(void)

{
  return 0;
}



undefined4 inst_86_flags_var_0(void)

{
  return 0;
}



undefined4 inst_86_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080792cc)

undefined4 inst_86_flags_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08079329)

undefined4 inst_86_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807936f)

undefined4 inst_86_flags_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080793cc)

undefined4 inst_86_values_var_3(void)

{
  return 0;
}



undefined4 inst_86_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807946f)

undefined4 inst_86_values_var_4(void)

{
  return 0;
}



undefined4 inst_86_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08079512)

undefined4 inst_86_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08079558)

undefined4 inst_86_flags_var_5(void)

{
  return 0;
}



undefined4 inst_86_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080795fb)

undefined4 inst_86_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08079658)

undefined4 inst_86_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807969e)

undefined4 inst_86_flags_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080796fb)

undefined4 inst_86_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08079741)

undefined4 inst_86_flags_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807979e)

undefined4 inst_86_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080797e4)

undefined4 inst_86_flags_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08079841)

undefined4 inst_87_values_var_0(void)

{
  return 0;
}



undefined4 inst_87_flags_var_0(void)

{
  return 0;
}



undefined4 inst_87_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807992d)

undefined4 inst_87_flags_var_1(void)

{
  return 0;
}



undefined4 inst_87_values_var_2(void)

{
  return 0;
}



undefined4 inst_87_flags_var_2(void)

{
  return 0;
}



undefined4 inst_87_values_var_3(void)

{
  return 0;
}



undefined4 inst_87_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08079ad5)

undefined4 inst_87_values_var_4(void)

{
  return 0;
}



undefined4 inst_87_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08079b7a)

undefined4 inst_87_values_var_5(void)

{
  return 0;
}



undefined4 inst_87_flags_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08079c1f)

undefined4 inst_87_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08079c66)

undefined4 inst_87_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08079cc4)

undefined4 inst_87_values_var_7(void)

{
  return 0;
}



undefined4 inst_87_flags_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08079d69)

undefined4 inst_87_values_var_8(void)

{
  return 0;
}



undefined4 inst_87_flags_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08079e0e)

undefined4 inst_87_values_var_9(void)

{
  return 0;
}



undefined4 inst_87_flags_var_9(void)

{
  return 0;
}



undefined4 inst_88_values_var_0(void)

{
  return 0;
}



undefined4 inst_88_flags_var_0(void)

{
  return 0;
}



undefined4 inst_88_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08079f9c)

undefined4 inst_88_flags_var_1(void)

{
  return 0;
}



undefined4 inst_88_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807a03f)

undefined4 inst_88_flags_var_2(void)

{
  return 0;
}



undefined4 inst_88_values_var_3(void)

{
  return 0;
}



undefined4 inst_88_flags_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807a13f)

undefined4 inst_88_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807a185)

undefined4 inst_88_flags_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807a1e2)

undefined4 inst_88_values_var_5(void)

{
  return 0;
}



undefined4 inst_88_flags_var_5(void)

{
  return 0;
}



undefined4 inst_88_values_var_6(void)

{
  return 0;
}



undefined4 inst_88_flags_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807a328)

undefined4 inst_88_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807a36e)

undefined4 inst_88_flags_var_7(void)

{
  return 0;
}



undefined4 inst_88_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807a411)

undefined4 inst_88_flags_var_8(void)

{
  return 0;
}



undefined4 inst_88_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807a4b4)

undefined4 inst_88_flags_var_9(void)

{
  return 0;
}



undefined4 inst_89_values_var_0(void)

{
  return 0;
}



undefined4 inst_89_flags_var_0(void)

{
  return 0;
}



undefined4 inst_89_values_var_1(void)

{
  return 0;
}



undefined4 inst_89_flags_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807a65b)

undefined4 inst_89_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807a6a2)

undefined4 inst_89_flags_var_2(void)

{
  return 0;
}



undefined4 inst_89_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807a747)

undefined4 inst_89_flags_var_3(void)

{
  return 0;
}



undefined4 inst_89_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807a7ec)

undefined4 inst_89_flags_var_4(void)

{
  return 0;
}



undefined4 inst_89_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807a891)

undefined4 inst_89_flags_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807a8ef)

undefined4 inst_89_values_var_6(void)

{
  return 0;
}



undefined4 inst_89_flags_var_6(void)

{
  return 0;
}



undefined4 inst_89_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807a9db)

undefined4 inst_89_flags_var_7(void)

{
  return 0;
}



undefined4 inst_89_values_var_8(void)

{
  return 0;
}



undefined4 inst_89_flags_var_8(void)

{
  return 0;
}



undefined4 inst_89_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807ab25)

undefined4 inst_89_flags_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807ab83)

undefined4 inst_90_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807abc9)

undefined4 inst_90_flags_var_0(void)

{
  return 0;
}



undefined4 inst_90_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807ac6c)

undefined4 inst_90_flags_var_1(void)

{
  return 0;
}



undefined4 inst_90_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807ad0f)

undefined4 inst_90_flags_var_2(void)

{
  return 0;
}



undefined4 inst_90_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807adb2)

undefined4 inst_90_flags_var_3(void)

{
  return 0;
}



undefined4 inst_90_values_var_4(void)

{
  return 0;
}



undefined4 inst_90_flags_var_4(void)

{
  return 0;
}



undefined4 inst_90_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807aef8)

undefined4 inst_90_flags_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807af55)

undefined4 inst_90_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807af9b)

undefined4 inst_90_flags_var_6(void)

{
  return 0;
}



undefined4 inst_90_values_var_7(void)

{
  return 0;
}



undefined4 inst_90_flags_var_7(void)

{
  return 0;
}



undefined4 inst_90_values_var_8(void)

{
  return 0;
}



undefined4 inst_90_flags_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b13e)

undefined4 inst_90_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b184)

undefined4 inst_90_flags_var_9(void)

{
  return 0;
}



undefined4 inst_91_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b233)
// WARNING: Removing unreachable block (ram,0x0807b240)
// WARNING: Removing unreachable block (ram,0x0807b24d)

undefined4 inst_91_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_91_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b30e)

undefined4 inst_91_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_91_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b3dc)
// WARNING: Removing unreachable block (ram,0x0807b3e9)

undefined4 inst_91_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_91_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b4b7)
// WARNING: Removing unreachable block (ram,0x0807b4aa)
// WARNING: Removing unreachable block (ram,0x0807b4c4)

undefined4 inst_91_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_91_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b585)
// WARNING: Removing unreachable block (ram,0x0807b56b)
// WARNING: Removing unreachable block (ram,0x0807b578)
// WARNING: Removing unreachable block (ram,0x0807b592)

int inst_91_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_91_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b638)
// WARNING: Removing unreachable block (ram,0x0807b645)

undefined4 inst_91_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_91_values_var_6(void)

{
  return 0;
}



undefined4 inst_91_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_91_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b7d4)
// WARNING: Removing unreachable block (ram,0x0807b7e1)
// WARNING: Removing unreachable block (ram,0x0807b7ee)

int inst_91_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_91_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b8a2)
// WARNING: Removing unreachable block (ram,0x0807b8c9)

undefined4 inst_91_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_91_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b98a)
// WARNING: Removing unreachable block (ram,0x0807b970)
// WARNING: Removing unreachable block (ram,0x0807b997)

undefined4 inst_91_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_92_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807ba3c)
// WARNING: Removing unreachable block (ram,0x0807ba49)
// WARNING: Removing unreachable block (ram,0x0807ba56)

int inst_92_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_92_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807bb15)
// WARNING: Removing unreachable block (ram,0x0807bb22)

undefined4 inst_92_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_92_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807bbd4)
// WARNING: Removing unreachable block (ram,0x0807bbe1)
// WARNING: Removing unreachable block (ram,0x0807bbee)

undefined4 inst_92_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_92_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807bca0)
// WARNING: Removing unreachable block (ram,0x0807bcc7)

int inst_92_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_92_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807bd79)
// WARNING: Removing unreachable block (ram,0x0807bd93)

int inst_92_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_92_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807be45)
// WARNING: Removing unreachable block (ram,0x0807be38)
// WARNING: Removing unreachable block (ram,0x0807be5f)

undefined4 inst_92_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_92_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807bf11)
// WARNING: Removing unreachable block (ram,0x0807bf2b)

int inst_92_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_92_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807bfdd)
// WARNING: Removing unreachable block (ram,0x0807bfd0)
// WARNING: Removing unreachable block (ram,0x0807bff7)

int inst_92_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_92_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c0a9)
// WARNING: Removing unreachable block (ram,0x0807c09c)
// WARNING: Removing unreachable block (ram,0x0807c0c3)

undefined4 inst_92_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_92_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c182)
// WARNING: Removing unreachable block (ram,0x0807c168)
// WARNING: Removing unreachable block (ram,0x0807c175)
// WARNING: Removing unreachable block (ram,0x0807c18f)

undefined4 inst_92_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_93_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c247)
// WARNING: Removing unreachable block (ram,0x0807c23a)
// WARNING: Removing unreachable block (ram,0x0807c261)

int inst_93_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_93_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c319)
// WARNING: Removing unreachable block (ram,0x0807c326)

int inst_93_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_93_values_var_2(void)

{
  return 0;
}



int inst_93_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_93_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c4bd)
// WARNING: Removing unreachable block (ram,0x0807c4b0)
// WARNING: Removing unreachable block (ram,0x0807c4d7)

undefined4 inst_93_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_93_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c58f)
// WARNING: Removing unreachable block (ram,0x0807c5a9)

int inst_93_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_93_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c660)

int inst_93_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_93_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c731)

undefined4 inst_93_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_93_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c803)

undefined4 inst_93_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_93_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c8c8)
// WARNING: Removing unreachable block (ram,0x0807c8d5)
// WARNING: Removing unreachable block (ram,0x0807c8e2)

int inst_93_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_93_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c9a7)
// WARNING: Removing unreachable block (ram,0x0807c99a)
// WARNING: Removing unreachable block (ram,0x0807c9c1)

undefined4 inst_93_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_94_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807ca82)
// WARNING: Removing unreachable block (ram,0x0807ca75)
// WARNING: Removing unreachable block (ram,0x0807ca8f)

int inst_94_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_94_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807cb43)
// WARNING: Removing unreachable block (ram,0x0807cb50)

undefined4 inst_94_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_94_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807cc1e)
// WARNING: Removing unreachable block (ram,0x0807cc04)
// WARNING: Removing unreachable block (ram,0x0807cc11)
// WARNING: Removing unreachable block (ram,0x0807cc2b)

int inst_94_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_94_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807ccdf)
// WARNING: Removing unreachable block (ram,0x0807ccd2)
// WARNING: Removing unreachable block (ram,0x0807ccf9)

undefined4 inst_94_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_94_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807cdad)

int inst_94_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_94_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807ce7b)

undefined4 inst_94_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_94_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807cf49)
// WARNING: Removing unreachable block (ram,0x0807cf3c)
// WARNING: Removing unreachable block (ram,0x0807cf63)

undefined4 inst_94_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_94_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d017)
// WARNING: Removing unreachable block (ram,0x0807d024)

undefined4 inst_94_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_94_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d0e5)
// WARNING: Removing unreachable block (ram,0x0807d0d8)
// WARNING: Removing unreachable block (ram,0x0807d0ff)

undefined4 inst_94_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_94_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d1b3)

undefined4 inst_94_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_95_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d293)
// WARNING: Removing unreachable block (ram,0x0807d286)
// WARNING: Removing unreachable block (ram,0x0807d2a0)

int inst_95_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_95_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d34c)
// WARNING: Removing unreachable block (ram,0x0807d359)
// WARNING: Removing unreachable block (ram,0x0807d366)

int inst_95_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_95_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d420)
// WARNING: Removing unreachable block (ram,0x0807d42d)
// WARNING: Removing unreachable block (ram,0x0807d43a)

undefined4 inst_95_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_95_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d4f2)
// WARNING: Removing unreachable block (ram,0x0807d4ff)

undefined4 inst_95_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_95_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d5d2)

undefined4 inst_95_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_95_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d6a5)

undefined4 inst_95_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_95_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d76b)
// WARNING: Removing unreachable block (ram,0x0807d778)

int inst_95_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_95_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d84b)
// WARNING: Removing unreachable block (ram,0x0807d858)

undefined4 inst_95_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_95_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d92c)
// WARNING: Removing unreachable block (ram,0x0807d912)
// WARNING: Removing unreachable block (ram,0x0807d91f)
// WARNING: Removing unreachable block (ram,0x0807d939)

undefined4 inst_95_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_95_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d9f2)
// WARNING: Removing unreachable block (ram,0x0807d9ff)

undefined4 inst_95_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_96_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807dabe)
// WARNING: Removing unreachable block (ram,0x0807dab1)
// WARNING: Removing unreachable block (ram,0x0807dad8)

int inst_96_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_96_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807db7d)
// WARNING: Removing unreachable block (ram,0x0807db8a)
// WARNING: Removing unreachable block (ram,0x0807db97)

undefined4 inst_96_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_96_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807dc49)
// WARNING: Removing unreachable block (ram,0x0807dc70)

undefined4 inst_96_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_96_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807dd2f)
// WARNING: Removing unreachable block (ram,0x0807dd15)
// WARNING: Removing unreachable block (ram,0x0807dd22)
// WARNING: Removing unreachable block (ram,0x0807dd3c)

int inst_96_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_96_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807dde1)
// WARNING: Removing unreachable block (ram,0x0807de08)

int inst_96_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_96_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807deba)

undefined4 inst_96_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_96_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807df79)
// WARNING: Removing unreachable block (ram,0x0807df86)

undefined4 inst_96_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_96_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e052)

undefined4 inst_96_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_96_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e11e)

int inst_96_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_96_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e1ea)
// WARNING: Removing unreachable block (ram,0x0807e1dd)
// WARNING: Removing unreachable block (ram,0x0807e204)

undefined4 inst_96_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_97_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e2b8)
// WARNING: Removing unreachable block (ram,0x0807e2ab)
// WARNING: Removing unreachable block (ram,0x0807e2d2)

undefined4 inst_97_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_97_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e393)
// WARNING: Removing unreachable block (ram,0x0807e379)
// WARNING: Removing unreachable block (ram,0x0807e386)
// WARNING: Removing unreachable block (ram,0x0807e3a0)

undefined4 inst_97_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_97_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e454)

undefined4 inst_97_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_97_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e522)
// WARNING: Removing unreachable block (ram,0x0807e515)
// WARNING: Removing unreachable block (ram,0x0807e53c)

undefined4 inst_97_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_97_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e5f0)
// WARNING: Removing unreachable block (ram,0x0807e5e3)
// WARNING: Removing unreachable block (ram,0x0807e60a)

undefined4 inst_97_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_97_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e6b1)
// WARNING: Removing unreachable block (ram,0x0807e6d8)

int inst_97_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_97_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e799)
// WARNING: Removing unreachable block (ram,0x0807e77f)
// WARNING: Removing unreachable block (ram,0x0807e7a6)

undefined4 inst_97_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_97_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e867)

undefined4 inst_97_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_97_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e935)
// WARNING: Removing unreachable block (ram,0x0807e91b)
// WARNING: Removing unreachable block (ram,0x0807e942)

undefined4 inst_97_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_97_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e9f6)
// WARNING: Removing unreachable block (ram,0x0807e9e9)
// WARNING: Removing unreachable block (ram,0x0807ea10)

undefined4 inst_97_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_98_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807eac6)
// WARNING: Removing unreachable block (ram,0x0807eae0)

int inst_98_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_98_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807eb96)
// WARNING: Removing unreachable block (ram,0x0807eba3)

int inst_98_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_98_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807ec73)
// WARNING: Removing unreachable block (ram,0x0807ec59)
// WARNING: Removing unreachable block (ram,0x0807ec66)
// WARNING: Removing unreachable block (ram,0x0807ec80)

int inst_98_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_98_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807ed29)
// WARNING: Removing unreachable block (ram,0x0807ed50)

int inst_98_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_98_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807ee06)
// WARNING: Removing unreachable block (ram,0x0807edf9)
// WARNING: Removing unreachable block (ram,0x0807ee20)

undefined4 inst_98_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_98_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807eee3)
// WARNING: Removing unreachable block (ram,0x0807eec9)
// WARNING: Removing unreachable block (ram,0x0807eed6)
// WARNING: Removing unreachable block (ram,0x0807eef0)

undefined4 inst_98_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_98_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807efb3)

undefined4 inst_98_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_98_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807f083)
// WARNING: Removing unreachable block (ram,0x0807f069)
// WARNING: Removing unreachable block (ram,0x0807f090)

int inst_98_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_98_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807f139)
// WARNING: Removing unreachable block (ram,0x0807f146)

int inst_98_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_98_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807f216)

int inst_98_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



// WARNING: Removing unreachable block (ram,0x0807f284)

undefined4 inst_99_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807f2ca)
// WARNING: Removing unreachable block (ram,0x0807f2e4)

undefined4 inst_99_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x0807f352)

undefined4 inst_99_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807f398)
// WARNING: Removing unreachable block (ram,0x0807f3b2)
// WARNING: Removing unreachable block (ram,0x0807f3bf)

int inst_99_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



// WARNING: Removing unreachable block (ram,0x0807f420)

undefined4 inst_99_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807f466)

undefined4 inst_99_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x0807f4ee)

undefined4 inst_99_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807f54e)
// WARNING: Removing unreachable block (ram,0x0807f541)
// WARNING: Removing unreachable block (ram,0x0807f534)
// WARNING: Removing unreachable block (ram,0x0807f568)

undefined4 inst_99_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x0807f5bc)

undefined4 inst_99_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807f61c)
// WARNING: Removing unreachable block (ram,0x0807f60f)
// WARNING: Removing unreachable block (ram,0x0807f602)
// WARNING: Removing unreachable block (ram,0x0807f636)

undefined4 inst_99_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x0807f68a)

undefined4 inst_99_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807f6d0)
// WARNING: Removing unreachable block (ram,0x0807f6ea)

undefined4 inst_99_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x0807f758)

undefined4 inst_99_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807f7b8)
// WARNING: Removing unreachable block (ram,0x0807f7ab)
// WARNING: Removing unreachable block (ram,0x0807f79e)
// WARNING: Removing unreachable block (ram,0x0807f7d2)

undefined4 inst_99_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x0807f826)

undefined4 inst_99_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807f886)
// WARNING: Removing unreachable block (ram,0x0807f879)
// WARNING: Removing unreachable block (ram,0x0807f86c)
// WARNING: Removing unreachable block (ram,0x0807f8a0)

undefined4 inst_99_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x0807f8f4)

undefined4 inst_99_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807f961)
// WARNING: Removing unreachable block (ram,0x0807f93a)
// WARNING: Removing unreachable block (ram,0x0807f954)
// WARNING: Removing unreachable block (ram,0x0807f96e)

int inst_99_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



// WARNING: Removing unreachable block (ram,0x0807f9c2)

undefined4 inst_99_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807fa2f)
// WARNING: Removing unreachable block (ram,0x0807fa08)
// WARNING: Removing unreachable block (ram,0x0807fa15)
// WARNING: Removing unreachable block (ram,0x0807fa3c)

undefined4 inst_99_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



int inst_100_values_var_0(void)

{
  byte bVar1;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * '\x06' + 0xbd;
  return CONCAT31(0x75d59f,bVar1 + (0x90 < (bVar1 & 0xf0) | (in_AF | 1) * (0xf9 < bVar1) | 1) * '`')
         + -0x75d59f23;
}



// WARNING: Removing unreachable block (ram,0x0807fafe)

int inst_100_flags_var_0(void)

{
  byte bVar1;
  int iVar2;
  bool in_AF;
  
  bVar1 = in_AF * '\x06' + 0xb8;
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) + iVar2 + -0x11;
}



int inst_100_values_var_1(void)

{
  byte bVar1;
  char in_AF;
  
  bVar1 = in_AF * '\x06' + 0xb2;
  return CONCAT31(0x7ba08e,bVar1 + (0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) * '`') +
         -0x7ba08e18;
}



// WARNING: Removing unreachable block (ram,0x0807fbb3)

int inst_100_flags_var_1(void)

{
  byte bVar1;
  int iVar2;
  bool in_AF;
  
  bVar1 = in_AF * '\x06' - 0x3c;
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) + iVar2 + -9;
}



int inst_100_values_var_2(void)

{
  byte bVar1;
  char in_AF;
  
  bVar1 = in_AF * '\x06' - 0x1e;
  return CONCAT31(0xdc0d64,bVar1 + (0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) * '`') +
         0x23f29bb8;
}



// WARNING: Removing unreachable block (ram,0x0807fc75)
// WARNING: Removing unreachable block (ram,0x0807fc82)

int inst_100_flags_var_2(void)

{
  byte bVar1;
  int iVar2;
  bool in_AF;
  
  bVar1 = in_AF * '\x06' + 0x40;
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) + iVar2 + -0xd;
}



int inst_100_values_var_3(void)

{
  byte bVar1;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * '\x06' + 0x8e;
  return CONCAT31(0x95f7d8,bVar1 + (0x90 < (bVar1 & 0xf0) | (in_AF | 1) * (0xf9 < bVar1) | 1) * '`')
         + 0x6a08270c;
}



int inst_100_flags_var_3(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' + 0x8b;
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar3 + -0xd;
}



int inst_100_values_var_4(void)

{
  byte bVar1;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * '\x06' + 0x6b;
  return CONCAT31(0x3ea17f,bVar1 + (0x90 < (bVar1 & 0xf0) | (in_AF | 1) * (0xf9 < bVar1) | 1) * '`')
         + -0x3ea17fd1;
}



int inst_100_flags_var_4(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' - 0x36;
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar3 + -9;
}



int inst_100_values_var_5(void)

{
  byte bVar1;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * '\x06' + 0x8b;
  return CONCAT31(0x9c1dea,bVar1 + (0x90 < (bVar1 & 0xf0) | (in_AF | 1) * (0xf9 < bVar1) | 1) * '`')
         + 0x63e2150f;
}



int inst_100_flags_var_5(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' + 0x3a;
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar3 + -0x11;
}



int inst_100_values_var_6(void)

{
  byte bVar1;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * '\x06' + 0x1e;
  return CONCAT31(0xe9b62f,bVar1 + (0x90 < (bVar1 & 0xf0) | (in_AF | 1) * (0xf9 < bVar1) | 1) * '`')
         + 0x1649d07c;
}



// WARNING: Removing unreachable block (ram,0x0807ff7d)
// WARNING: Removing unreachable block (ram,0x0807ff8a)

int inst_100_flags_var_6(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' + 0x8f;
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar3 + -0x1d;
}



int inst_100_values_var_7(void)

{
  byte bVar1;
  char in_AF;
  
  bVar1 = in_AF * '\x06' + 0x34;
  return CONCAT31(0x142ac8,bVar1 + (0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) * '`') +
         -0x142ac89a;
}



// WARNING: Removing unreachable block (ram,0x0808003f)
// WARNING: Removing unreachable block (ram,0x0808004c)

int inst_100_flags_var_7(void)

{
  byte bVar1;
  int iVar2;
  bool in_AF;
  
  bVar1 = in_AF * '\x06' - 0x2a;
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) + iVar2 + -0x15;
}



int inst_100_values_var_8(void)

{
  byte bVar1;
  char in_AF;
  
  bVar1 = in_AF * '\x06' + 0x18;
  return CONCAT31(0x5ef405,bVar1 + (0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) * '`') +
         -0x5ef4057e;
}



int inst_100_flags_var_8(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' - 1;
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar3 + -9;
}



int inst_100_values_var_9(void)

{
  byte bVar1;
  char in_AF;
  
  bVar1 = in_AF * '\x06' - 0x10;
  return CONCAT31(0x1eaac2,bVar1 + (0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) * '`') +
         -0x1eaac250;
}



// WARNING: Removing unreachable block (ram,0x080801d0)

int inst_100_flags_var_9(void)

{
  byte bVar1;
  int iVar2;
  bool in_AF;
  
  bVar1 = in_AF * '\x06' + 0x90;
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) + iVar2 + -9;
}



int inst_101_values_var_0(void)

{
  byte bVar1;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * -6 + 0x4a;
  return CONCAT31(0x7e7823,bVar1 + (0x9f < bVar1 | (in_AF | 1) * (bVar1 < 6) | 1) * -0x60) +
         -0x7e7823e4;
}



int inst_101_flags_var_0(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * -6 - 0x36;
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar2 | bVar1 * (bVar2 < 6) | 1U) + iVar3 + -5;
}



int inst_101_values_var_1(void)

{
  byte bVar1;
  char in_AF;
  
  bVar1 = in_AF * -6 - 0x3c;
  return CONCAT31(0x1673f9,bVar1 + (0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) * -0x60) + -0x1673f95e;
}



// WARNING: Removing unreachable block (ram,0x08080347)
// WARNING: Removing unreachable block (ram,0x08080354)

int inst_101_flags_var_1(void)

{
  byte bVar1;
  int iVar2;
  bool in_AF;
  
  bVar1 = in_AF * -6 + 0x32;
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar2 + -0x1d;
}



int inst_101_values_var_2(void)

{
  byte bVar1;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * -6 + 0x8c;
  return CONCAT31(0x9d7a9a,bVar1 + (0x9f < bVar1 | (in_AF | 1) * (bVar1 < 6) | 1) * -0x60) +
         0x628565da;
}



// WARNING: Removing unreachable block (ram,0x08080416)

int inst_101_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return (uint)(byte)(0x9f < (byte)(in_AF * -6) | in_AF * ((byte)(in_AF * -6) < 6) | 1U) + iVar1 +
         -9;
}



int inst_101_values_var_3(void)

{
  byte bVar1;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * -6 + 0x2a;
  return CONCAT31(0x80317e,bVar1 + (0x9f < bVar1 | (in_AF | 1) * (bVar1 < 6) | 1) * -0x60) +
         0x7fce813c;
}



// WARNING: Removing unreachable block (ram,0x080804cb)

int inst_101_flags_var_3(void)

{
  byte bVar1;
  int iVar2;
  bool in_AF;
  
  bVar1 = in_AF * -6 + 0x29;
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar2 + -0x15;
}



int inst_101_values_var_4(void)

{
  byte bVar1;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * -6 - 0x15;
  return CONCAT31(0x150215,bVar1 + (0x9f < bVar1 | (in_AF | 1) * (bVar1 < 6) | 1) * -0x60) +
         -0x15021585;
}



// WARNING: Removing unreachable block (ram,0x0808058d)

int inst_101_flags_var_4(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * -6 + 0x6b;
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar2 | bVar1 * (bVar2 < 6) | 1U) + iVar3 + -0xd;
}



int inst_101_values_var_5(void)

{
  byte bVar1;
  char in_AF;
  
  bVar1 = in_AF * -6 - 0x2b;
  return CONCAT31(0x3d0c6c,bVar1 + (0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) * -0x60) + -0x3d0c6c6f;
}



int inst_101_flags_var_5(void)

{
  byte bVar1;
  int iVar2;
  bool in_AF;
  
  bVar1 = in_AF * -6 + 0xb7;
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar2 + -5;
}



int inst_101_values_var_6(void)

{
  byte bVar1;
  char in_AF;
  
  bVar1 = in_AF * -6 + 9;
  return CONCAT31(0x55133d,bVar1 + (0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) * -0x60) + -0x55133da3;
}



// WARNING: Removing unreachable block (ram,0x0808071e)

int inst_101_flags_var_6(void)

{
  byte bVar1;
  int iVar2;
  bool in_AF;
  
  bVar1 = in_AF * -6 + 0x87;
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar2 + -0x11;
}



int inst_101_values_var_7(void)

{
  byte bVar1;
  char in_AF;
  
  bVar1 = in_AF * -6 + 0x54;
  return CONCAT31(0x218d73,bVar1 + (0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) * -0x60) + -0x218d73ee;
}



int inst_101_flags_var_7(void)

{
  byte bVar1;
  int iVar2;
  bool in_AF;
  
  bVar1 = in_AF * -6 - 0x1c;
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar2 + -9;
}



int inst_101_values_var_8(void)

{
  byte bVar1;
  char in_AF;
  
  bVar1 = in_AF * -6 - 0x37;
  return CONCAT31(0xfbe35f,bVar1 + (0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) * -0x60) + 0x41ca09d;
}



int inst_101_flags_var_8(void)

{
  byte bVar1;
  int iVar2;
  bool in_AF;
  
  bVar1 = in_AF * -6 - 0x10;
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar2 + -1;
}



int inst_101_values_var_9(void)

{
  byte bVar1;
  char in_AF;
  
  bVar1 = in_AF * -6 - 10;
  return CONCAT31(0x4f7b18,bVar1 + (0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) * -0x60) + -0x4f7b1890;
}



int inst_101_flags_var_9(void)

{
  byte bVar1;
  int iVar2;
  bool in_AF;
  
  bVar1 = in_AF * -6 + 0xb7;
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar2 + -5;
}



undefined4 inst_102_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080a0e)
// WARNING: Removing unreachable block (ram,0x08080a1b)

undefined4 inst_102_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_102_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080ad2)

undefined4 inst_102_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_102_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080ba3)
// WARNING: Removing unreachable block (ram,0x08080b96)
// WARNING: Removing unreachable block (ram,0x08080bb0)

undefined4 inst_102_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_102_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080c67)
// WARNING: Removing unreachable block (ram,0x08080c5a)
// WARNING: Removing unreachable block (ram,0x08080c74)

undefined4 inst_102_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_102_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080d1e)
// WARNING: Removing unreachable block (ram,0x08080d38)

undefined4 inst_102_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_102_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080def)
// WARNING: Removing unreachable block (ram,0x08080de2)
// WARNING: Removing unreachable block (ram,0x08080dfc)

undefined4 inst_102_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_102_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080ea6)
// WARNING: Removing unreachable block (ram,0x08080ec0)

undefined4 inst_102_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_102_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080f6a)

undefined4 inst_102_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_102_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808102e)

undefined4 inst_102_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_102_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080810f2)
// WARNING: Removing unreachable block (ram,0x0808110c)

int inst_102_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_103_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080811b6)
// WARNING: Removing unreachable block (ram,0x080811c3)

undefined4 inst_103_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_103_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081287)
// WARNING: Removing unreachable block (ram,0x0808127a)
// WARNING: Removing unreachable block (ram,0x08081294)

undefined4 inst_103_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_103_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808133e)
// WARNING: Removing unreachable block (ram,0x08081358)

int inst_103_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_103_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081402)
// WARNING: Removing unreachable block (ram,0x0808140f)

undefined4 inst_103_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_103_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080814c6)
// WARNING: Removing unreachable block (ram,0x080814d3)

undefined4 inst_103_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_103_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808158a)
// WARNING: Removing unreachable block (ram,0x080815a4)

undefined4 inst_103_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_103_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808164e)
// WARNING: Removing unreachable block (ram,0x0808165b)

undefined4 inst_103_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_103_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081712)
// WARNING: Removing unreachable block (ram,0x0808172c)

undefined4 inst_103_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_103_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080817d6)
// WARNING: Removing unreachable block (ram,0x080817e3)

undefined4 inst_103_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_103_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808189a)
// WARNING: Removing unreachable block (ram,0x080818b4)

undefined4 inst_103_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_104_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808195c)

undefined4 inst_104_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_104_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081a1e)

int inst_104_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_104_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081aed)
// WARNING: Removing unreachable block (ram,0x08081ae0)
// WARNING: Removing unreachable block (ram,0x08081afa)

undefined4 inst_104_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_104_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081baf)
// WARNING: Removing unreachable block (ram,0x08081ba2)
// WARNING: Removing unreachable block (ram,0x08081bbc)

undefined4 inst_104_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_104_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081c64)

undefined4 inst_104_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_104_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081d26)
// WARNING: Removing unreachable block (ram,0x08081d40)

undefined4 inst_104_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_104_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081de8)
// WARNING: Removing unreachable block (ram,0x08081e02)

undefined4 inst_104_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_104_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081eaa)
// WARNING: Removing unreachable block (ram,0x08081ec4)

undefined4 inst_104_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_104_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081f6c)
// WARNING: Removing unreachable block (ram,0x08081f86)

int inst_104_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_104_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808202e)
// WARNING: Removing unreachable block (ram,0x08082048)

undefined4 inst_104_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_105_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080820f2)
// WARNING: Removing unreachable block (ram,0x080820ff)

undefined4 inst_105_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_105_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080821b6)
// WARNING: Removing unreachable block (ram,0x080821c3)

undefined4 inst_105_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_105_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808227a)

undefined4 inst_105_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_105_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808233e)
// WARNING: Removing unreachable block (ram,0x08082358)

undefined4 inst_105_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_105_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808240f)
// WARNING: Removing unreachable block (ram,0x08082402)
// WARNING: Removing unreachable block (ram,0x0808241c)

undefined4 inst_105_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_105_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080824c6)

undefined4 inst_105_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_105_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808258a)
// WARNING: Removing unreachable block (ram,0x080825a4)

undefined4 inst_105_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_105_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808264e)
// WARNING: Removing unreachable block (ram,0x08082668)

undefined4 inst_105_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_105_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082712)

undefined4 inst_105_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_105_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080827d6)
// WARNING: Removing unreachable block (ram,0x080827f0)

undefined4 inst_105_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_106_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808289a)
// WARNING: Removing unreachable block (ram,0x080828b4)

undefined4 inst_106_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_106_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808295e)
// WARNING: Removing unreachable block (ram,0x08082978)

undefined4 inst_106_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_106_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082a22)

undefined4 inst_106_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_106_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082af3)
// WARNING: Removing unreachable block (ram,0x08082ae6)
// WARNING: Removing unreachable block (ram,0x08082b00)

int inst_106_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_106_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082baa)

undefined4 inst_106_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_106_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082c6e)
// WARNING: Removing unreachable block (ram,0x08082c88)

undefined4 inst_106_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_106_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082d32)
// WARNING: Removing unreachable block (ram,0x08082d4c)

undefined4 inst_106_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_106_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082df6)

undefined4 inst_106_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_106_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082eba)
// WARNING: Removing unreachable block (ram,0x08082ec7)

undefined4 inst_106_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_106_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082f7e)
// WARNING: Removing unreachable block (ram,0x08082f8b)

undefined4 inst_106_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_107_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08083040)
// WARNING: Removing unreachable block (ram,0x0808304d)

undefined4 inst_107_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_107_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08083102)

undefined4 inst_107_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_107_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080831c4)
// WARNING: Removing unreachable block (ram,0x080831d1)

undefined4 inst_107_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_107_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08083293)
// WARNING: Removing unreachable block (ram,0x08083286)
// WARNING: Removing unreachable block (ram,0x080832a0)

undefined4 inst_107_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_107_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08083355)
// WARNING: Removing unreachable block (ram,0x08083348)
// WARNING: Removing unreachable block (ram,0x08083362)

undefined4 inst_107_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_107_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808340a)
// WARNING: Removing unreachable block (ram,0x08083424)

undefined4 inst_107_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_107_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080834d9)
// WARNING: Removing unreachable block (ram,0x080834cc)
// WARNING: Removing unreachable block (ram,0x080834e6)

undefined4 inst_107_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_107_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808359b)
// WARNING: Removing unreachable block (ram,0x0808358e)
// WARNING: Removing unreachable block (ram,0x080835a8)

undefined4 inst_107_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_107_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08083650)
// WARNING: Removing unreachable block (ram,0x0808365d)

undefined4 inst_107_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_107_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08083712)

undefined4 inst_107_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_108_values_var_0(void)

{
  return 0;
}



undefined4 inst_108_flags_var_0(void)

{
  return 0;
}



undefined4 inst_108_values_var_1(void)

{
  return 0;
}



undefined4 inst_108_flags_var_1(void)

{
  return 0;
}



undefined4 inst_108_values_var_2(void)

{
  return 0;
}



undefined4 inst_108_flags_var_2(void)

{
  return 0;
}



undefined4 inst_108_values_var_3(void)

{
  return 0;
}



undefined4 inst_108_flags_var_3(void)

{
  return 0;
}



undefined4 inst_108_values_var_4(void)

{
  return 0;
}



undefined4 inst_108_flags_var_4(void)

{
  return 0;
}



undefined4 inst_108_values_var_5(void)

{
  return 0;
}



undefined4 inst_108_flags_var_5(void)

{
  return 0;
}



undefined4 inst_108_values_var_6(void)

{
  return 0;
}



undefined4 inst_108_flags_var_6(void)

{
  return 0;
}



undefined4 inst_108_values_var_7(void)

{
  return 0;
}



undefined4 inst_108_flags_var_7(void)

{
  return 0;
}



undefined4 inst_108_values_var_8(void)

{
  return 0;
}



undefined4 inst_108_flags_var_8(void)

{
  return 0;
}



undefined4 inst_108_values_var_9(void)

{
  return 0;
}



undefined4 inst_108_flags_var_9(void)

{
  return 0;
}



undefined4 inst_109_values_var_0(void)

{
  return 0;
}



undefined4 inst_109_flags_var_0(void)

{
  return 0;
}



undefined4 inst_109_values_var_1(void)

{
  return 0;
}



undefined4 inst_109_flags_var_1(void)

{
  return 0;
}



undefined4 inst_109_values_var_2(void)

{
  return 0;
}



undefined4 inst_109_flags_var_2(void)

{
  return 0;
}



undefined4 inst_109_values_var_3(void)

{
  return 0;
}



undefined4 inst_109_flags_var_3(void)

{
  return 0;
}



undefined4 inst_109_values_var_4(void)

{
  return 0;
}



undefined4 inst_109_flags_var_4(void)

{
  return 0;
}



undefined4 inst_109_values_var_5(void)

{
  return 0;
}



undefined4 inst_109_flags_var_5(void)

{
  return 0;
}



undefined4 inst_109_values_var_6(void)

{
  return 0;
}



undefined4 inst_109_flags_var_6(void)

{
  return 0;
}



undefined4 inst_109_values_var_7(void)

{
  return 0;
}



undefined4 inst_109_flags_var_7(void)

{
  return 0;
}



undefined4 inst_109_values_var_8(void)

{
  return 0;
}



undefined4 inst_109_flags_var_8(void)

{
  return 0;
}



undefined4 inst_109_values_var_9(void)

{
  return 0;
}



undefined4 inst_109_flags_var_9(void)

{
  return 0;
}



undefined4 inst_110_values_var_0(void)

{
  return 0;
}



undefined4 inst_110_flags_var_0(void)

{
  return 0;
}



undefined4 inst_110_values_var_1(void)

{
  return 0;
}



undefined4 inst_110_flags_var_1(void)

{
  return 0;
}



undefined4 inst_110_values_var_2(void)

{
  return 0;
}



undefined4 inst_110_flags_var_2(void)

{
  return 0;
}



undefined4 inst_110_values_var_3(void)

{
  return 0;
}



undefined4 inst_110_flags_var_3(void)

{
  return 0;
}



undefined4 inst_110_values_var_4(void)

{
  return 0;
}



undefined4 inst_110_flags_var_4(void)

{
  return 0;
}



undefined4 inst_110_values_var_5(void)

{
  return 0;
}



undefined4 inst_110_flags_var_5(void)

{
  return 0;
}



undefined4 inst_110_values_var_6(void)

{
  return 0;
}



undefined4 inst_110_flags_var_6(void)

{
  return 0;
}



undefined4 inst_110_values_var_7(void)

{
  return 0;
}



undefined4 inst_110_flags_var_7(void)

{
  return 0;
}



undefined4 inst_110_values_var_8(void)

{
  return 0;
}



undefined4 inst_110_flags_var_8(void)

{
  return 0;
}



undefined4 inst_110_values_var_9(void)

{
  return 0;
}



undefined4 inst_110_flags_var_9(void)

{
  return 0;
}



undefined4 inst_111_values_var_0(void)

{
  return 0;
}



undefined4 inst_111_flags_var_0(void)

{
  return 0;
}



undefined4 inst_111_values_var_1(void)

{
  return 0;
}



undefined4 inst_111_flags_var_1(void)

{
  return 0;
}



undefined4 inst_111_values_var_2(void)

{
  return 0;
}



undefined4 inst_111_flags_var_2(void)

{
  return 0;
}



undefined4 inst_111_values_var_3(void)

{
  return 0;
}



undefined4 inst_111_flags_var_3(void)

{
  return 0;
}



undefined4 inst_111_values_var_4(void)

{
  return 0;
}



undefined4 inst_111_flags_var_4(void)

{
  return 0;
}



undefined4 inst_111_values_var_5(void)

{
  return 0;
}



undefined4 inst_111_flags_var_5(void)

{
  return 0;
}



undefined4 inst_111_values_var_6(void)

{
  return 0;
}



undefined4 inst_111_flags_var_6(void)

{
  return 0;
}



undefined4 inst_111_values_var_7(void)

{
  return 0;
}



undefined4 inst_111_flags_var_7(void)

{
  return 0;
}



undefined4 inst_111_values_var_8(void)

{
  return 0;
}



undefined4 inst_111_flags_var_8(void)

{
  return 0;
}



undefined4 inst_111_values_var_9(void)

{
  return 0;
}



undefined4 inst_111_flags_var_9(void)

{
  return 0;
}



undefined4 inst_112_values_var_0(void)

{
  return 0;
}



undefined4 inst_112_flags_var_0(void)

{
  return 0;
}



undefined4 inst_112_values_var_1(void)

{
  return 0;
}



undefined4 inst_112_flags_var_1(void)

{
  return 0;
}



undefined4 inst_112_values_var_2(void)

{
  return 0;
}



undefined4 inst_112_flags_var_2(void)

{
  return 0;
}



undefined4 inst_112_values_var_3(void)

{
  return 0;
}



undefined4 inst_112_flags_var_3(void)

{
  return 0;
}



undefined4 inst_112_values_var_4(void)

{
  return 0;
}



undefined4 inst_112_flags_var_4(void)

{
  return 0;
}



undefined4 inst_112_values_var_5(void)

{
  return 0;
}



undefined4 inst_112_flags_var_5(void)

{
  return 0;
}



undefined4 inst_112_values_var_6(void)

{
  return 0;
}



undefined4 inst_112_flags_var_6(void)

{
  return 0;
}



undefined4 inst_112_values_var_7(void)

{
  return 0;
}



undefined4 inst_112_flags_var_7(void)

{
  return 0;
}



undefined4 inst_112_values_var_8(void)

{
  return 0;
}



undefined4 inst_112_flags_var_8(void)

{
  return 0;
}



undefined4 inst_112_values_var_9(void)

{
  return 0;
}



undefined4 inst_112_flags_var_9(void)

{
  return 0;
}



undefined4 inst_113_values_var_0(void)

{
  return 0;
}



undefined4 inst_113_flags_var_0(void)

{
  return 0;
}



undefined4 inst_113_values_var_1(void)

{
  return 0;
}



undefined4 inst_113_flags_var_1(void)

{
  return 0;
}



undefined4 inst_113_values_var_2(void)

{
  return 0;
}



undefined4 inst_113_flags_var_2(void)

{
  return 0;
}



undefined4 inst_113_values_var_3(void)

{
  return 0;
}



undefined4 inst_113_flags_var_3(void)

{
  return 0;
}



undefined4 inst_113_values_var_4(void)

{
  return 0;
}



undefined4 inst_113_flags_var_4(void)

{
  return 0;
}



undefined4 inst_113_values_var_5(void)

{
  return 0;
}



undefined4 inst_113_flags_var_5(void)

{
  return 0;
}



undefined4 inst_113_values_var_6(void)

{
  return 0;
}



undefined4 inst_113_flags_var_6(void)

{
  return 0;
}



undefined4 inst_113_values_var_7(void)

{
  return 0;
}



undefined4 inst_113_flags_var_7(void)

{
  return 0;
}



undefined4 inst_113_values_var_8(void)

{
  return 0;
}



undefined4 inst_113_flags_var_8(void)

{
  return 0;
}



undefined4 inst_113_values_var_9(void)

{
  return 0;
}



undefined4 inst_113_flags_var_9(void)

{
  return 0;
}



undefined4 inst_114_values_var_0(void)

{
  return 0;
}



undefined4 inst_114_flags_var_0(void)

{
  return 0;
}



undefined4 inst_114_values_var_1(void)

{
  return 0;
}



undefined4 inst_114_flags_var_1(void)

{
  return 0;
}



undefined4 inst_114_values_var_2(void)

{
  return 0;
}



undefined4 inst_114_flags_var_2(void)

{
  return 0;
}



undefined4 inst_114_values_var_3(void)

{
  return 0;
}



undefined4 inst_114_flags_var_3(void)

{
  return 0;
}



undefined4 inst_114_values_var_4(void)

{
  return 0;
}



undefined4 inst_114_flags_var_4(void)

{
  return 0;
}



undefined4 inst_114_values_var_5(void)

{
  return 0;
}



undefined4 inst_114_flags_var_5(void)

{
  return 0;
}



undefined4 inst_114_values_var_6(void)

{
  return 0;
}



undefined4 inst_114_flags_var_6(void)

{
  return 0;
}



undefined4 inst_114_values_var_7(void)

{
  return 0;
}



undefined4 inst_114_flags_var_7(void)

{
  return 0;
}



undefined4 inst_114_values_var_8(void)

{
  return 0;
}



undefined4 inst_114_flags_var_8(void)

{
  return 0;
}



undefined4 inst_114_values_var_9(void)

{
  return 0;
}



undefined4 inst_114_flags_var_9(void)

{
  return 0;
}



undefined4 inst_115_values_var_0(void)

{
  return 0;
}



undefined4 inst_115_flags_var_0(void)

{
  return 0;
}



undefined4 inst_115_values_var_1(void)

{
  return 0;
}



undefined4 inst_115_flags_var_1(void)

{
  return 0;
}



undefined4 inst_115_values_var_2(void)

{
  return 0;
}



undefined4 inst_115_flags_var_2(void)

{
  return 0;
}



undefined4 inst_115_values_var_3(void)

{
  return 0;
}



undefined4 inst_115_flags_var_3(void)

{
  return 0;
}



undefined4 inst_115_values_var_4(void)

{
  return 0;
}



undefined4 inst_115_flags_var_4(void)

{
  return 0;
}



undefined4 inst_115_values_var_5(void)

{
  return 0;
}



undefined4 inst_115_flags_var_5(void)

{
  return 0;
}



undefined4 inst_115_values_var_6(void)

{
  return 0;
}



undefined4 inst_115_flags_var_6(void)

{
  return 0;
}



undefined4 inst_115_values_var_7(void)

{
  return 0;
}



undefined4 inst_115_flags_var_7(void)

{
  return 0;
}



undefined4 inst_115_values_var_8(void)

{
  return 0;
}



undefined4 inst_115_flags_var_8(void)

{
  return 0;
}



undefined4 inst_115_values_var_9(void)

{
  return 0;
}



undefined4 inst_115_flags_var_9(void)

{
  return 0;
}



undefined4 inst_116_values_var_0(void)

{
  return 0;
}



undefined4 inst_116_flags_var_0(void)

{
  return 0;
}



undefined4 inst_116_values_var_1(void)

{
  return 0;
}



undefined4 inst_116_flags_var_1(void)

{
  return 0;
}



undefined4 inst_116_values_var_2(void)

{
  return 0;
}



undefined4 inst_116_flags_var_2(void)

{
  return 0;
}



undefined4 inst_116_values_var_3(void)

{
  return 0;
}



undefined4 inst_116_flags_var_3(void)

{
  return 0;
}



undefined4 inst_116_values_var_4(void)

{
  return 0;
}



undefined4 inst_116_flags_var_4(void)

{
  return 0;
}



undefined4 inst_116_values_var_5(void)

{
  return 0;
}



undefined4 inst_116_flags_var_5(void)

{
  return 0;
}



undefined4 inst_116_values_var_6(void)

{
  return 0;
}



undefined4 inst_116_flags_var_6(void)

{
  return 0;
}



undefined4 inst_116_values_var_7(void)

{
  return 0;
}



undefined4 inst_116_flags_var_7(void)

{
  return 0;
}



undefined4 inst_116_values_var_8(void)

{
  return 0;
}



undefined4 inst_116_flags_var_8(void)

{
  return 0;
}



undefined4 inst_116_values_var_9(void)

{
  return 0;
}



undefined4 inst_116_flags_var_9(void)

{
  return 0;
}



undefined4 inst_117_values_var_0(void)

{
  return 0;
}



undefined4 inst_117_flags_var_0(void)

{
  return 0;
}



undefined4 inst_117_values_var_1(void)

{
  return 0;
}



undefined4 inst_117_flags_var_1(void)

{
  return 0;
}



undefined4 inst_117_values_var_2(void)

{
  return 0;
}



undefined4 inst_117_flags_var_2(void)

{
  return 0;
}



undefined4 inst_117_values_var_3(void)

{
  return 0;
}



undefined4 inst_117_flags_var_3(void)

{
  return 0;
}



undefined4 inst_117_values_var_4(void)

{
  return 0;
}



undefined4 inst_117_flags_var_4(void)

{
  return 0;
}



undefined4 inst_117_values_var_5(void)

{
  return 0;
}



undefined4 inst_117_flags_var_5(void)

{
  return 0;
}



undefined4 inst_117_values_var_6(void)

{
  return 0;
}



undefined4 inst_117_flags_var_6(void)

{
  return 0;
}



undefined4 inst_117_values_var_7(void)

{
  return 0;
}



undefined4 inst_117_flags_var_7(void)

{
  return 0;
}



undefined4 inst_117_values_var_8(void)

{
  return 0;
}



undefined4 inst_117_flags_var_8(void)

{
  return 0;
}



undefined4 inst_117_values_var_9(void)

{
  return 0;
}



undefined4 inst_117_flags_var_9(void)

{
  return 0;
}



undefined4 inst_118_values_var_0(void)

{
  return 0;
}



undefined4 inst_118_flags_var_0(void)

{
  return 0;
}



undefined4 inst_118_values_var_1(void)

{
  return 0;
}



undefined4 inst_118_flags_var_1(void)

{
  return 0;
}



undefined4 inst_118_values_var_2(void)

{
  return 0;
}



undefined4 inst_118_flags_var_2(void)

{
  return 0;
}



undefined4 inst_118_values_var_3(void)

{
  return 0;
}



undefined4 inst_118_flags_var_3(void)

{
  return 0;
}



undefined4 inst_118_values_var_4(void)

{
  return 0;
}



undefined4 inst_118_flags_var_4(void)

{
  return 0;
}



undefined4 inst_118_values_var_5(void)

{
  return 0;
}



undefined4 inst_118_flags_var_5(void)

{
  return 0;
}



undefined4 inst_118_values_var_6(void)

{
  return 0;
}



undefined4 inst_118_flags_var_6(void)

{
  return 0;
}



undefined4 inst_118_values_var_7(void)

{
  return 0;
}



undefined4 inst_118_flags_var_7(void)

{
  return 0;
}



undefined4 inst_118_values_var_8(void)

{
  return 0;
}



undefined4 inst_118_flags_var_8(void)

{
  return 0;
}



undefined4 inst_118_values_var_9(void)

{
  return 0;
}



undefined4 inst_118_flags_var_9(void)

{
  return 0;
}



undefined4 inst_119_values_var_0(void)

{
  return 0;
}



undefined4 inst_119_flags_var_0(void)

{
  return 0;
}



undefined4 inst_119_values_var_1(void)

{
  return 0;
}



undefined4 inst_119_flags_var_1(void)

{
  return 0;
}



undefined4 inst_119_values_var_2(void)

{
  return 0;
}



undefined4 inst_119_flags_var_2(void)

{
  return 0;
}



undefined4 inst_119_values_var_3(void)

{
  return 0;
}



undefined4 inst_119_flags_var_3(void)

{
  return 0;
}



undefined4 inst_119_values_var_4(void)

{
  return 0;
}



undefined4 inst_119_flags_var_4(void)

{
  return 0;
}



undefined4 inst_119_values_var_5(void)

{
  return 0;
}



undefined4 inst_119_flags_var_5(void)

{
  return 0;
}



undefined4 inst_119_values_var_6(void)

{
  return 0;
}



undefined4 inst_119_flags_var_6(void)

{
  return 0;
}



undefined4 inst_119_values_var_7(void)

{
  return 0;
}



undefined4 inst_119_flags_var_7(void)

{
  return 0;
}



undefined4 inst_119_values_var_8(void)

{
  return 0;
}



undefined4 inst_119_flags_var_8(void)

{
  return 0;
}



undefined4 inst_119_values_var_9(void)

{
  return 0;
}



undefined4 inst_119_flags_var_9(void)

{
  return 0;
}



undefined4 inst_120_values_var_0(void)

{
  return 0;
}



undefined4 inst_120_flags_var_0(void)

{
  return 0;
}



undefined4 inst_120_values_var_1(void)

{
  return 0;
}



undefined4 inst_120_flags_var_1(void)

{
  return 0;
}



undefined4 inst_120_values_var_2(void)

{
  return 0;
}



undefined4 inst_120_flags_var_2(void)

{
  return 0;
}



undefined4 inst_120_values_var_3(void)

{
  return 0;
}



undefined4 inst_120_flags_var_3(void)

{
  return 0;
}



undefined4 inst_120_values_var_4(void)

{
  return 0;
}



undefined4 inst_120_flags_var_4(void)

{
  return 0;
}



undefined4 inst_120_values_var_5(void)

{
  return 0;
}



undefined4 inst_120_flags_var_5(void)

{
  return 0;
}



undefined4 inst_120_values_var_6(void)

{
  return 0;
}



undefined4 inst_120_flags_var_6(void)

{
  return 0;
}



undefined4 inst_120_values_var_7(void)

{
  return 0;
}



undefined4 inst_120_flags_var_7(void)

{
  return 0;
}



undefined4 inst_120_values_var_8(void)

{
  return 0;
}



undefined4 inst_120_flags_var_8(void)

{
  return 0;
}



undefined4 inst_120_values_var_9(void)

{
  return 0;
}



undefined4 inst_120_flags_var_9(void)

{
  return 0;
}



int inst_121_values_var_0(void)

{
  char in_AF;
  
  return (CONCAT22(0xec29,CONCAT11(in_AF << 4 | 0x80,0xf1)) | 0x300) + 0x13d66c0f;
}



undefined4 inst_121_flags_var_0(void)

{
  return 0;
}



int inst_121_values_var_1(void)

{
  char in_AF;
  
  return (CONCAT22(0x8e4,CONCAT11(in_AF << 4 | 4,0x4b)) | 0x300) + 0xf71be8b5;
}



undefined4 inst_121_flags_var_1(void)

{
  return 0;
}



int inst_121_values_var_2(void)

{
  char in_AF;
  
  return (CONCAT22(0xa543,CONCAT11(in_AF << 4 | 0x80,4)) | 0x300) + 0x5abc6cfc;
}



undefined4 inst_121_flags_var_2(void)

{
  return 0;
}



int inst_121_values_var_3(void)

{
  char in_AF;
  
  return (CONCAT22(0x2286,CONCAT11(in_AF << 4 | 4,0xca)) | 0x300) + 0xdd79e836;
}



undefined4 inst_121_flags_var_3(void)

{
  return 0;
}



int inst_121_values_var_4(void)

{
  char in_AF;
  
  return (CONCAT22(0x655d,CONCAT11(in_AF << 4 | 4,0xc5)) | 0x300) + 0x9aa2e83b;
}



undefined4 inst_121_flags_var_4(void)

{
  return 0;
}



int inst_121_values_var_5(void)

{
  char in_AF;
  
  return (CONCAT22(0x7062,CONCAT11(in_AF << 4,0xd5)) | 0x300) + 0x8f9dec2b;
}



undefined4 inst_121_flags_var_5(void)

{
  return 0;
}



int inst_121_values_var_6(void)

{
  char in_AF;
  
  return (CONCAT22(0x54c2,CONCAT11(in_AF << 4 | 4,0xd1)) | 0x300) + 0xab3de82f;
}



undefined4 inst_121_flags_var_6(void)

{
  return 0;
}



int inst_121_values_var_7(void)

{
  char in_AF;
  
  return (CONCAT22(0x8999,CONCAT11(in_AF << 4 | 0x84,0x3f)) | 0x300) + 0x766668c1;
}



undefined4 inst_121_flags_var_7(void)

{
  return 0;
}



int inst_121_values_var_8(void)

{
  char in_AF;
  
  return (CONCAT22(0xcc22,CONCAT11(in_AF << 4 | 0x80,0xf1)) | 0x300) + 0x33dd6c0f;
}



undefined4 inst_121_flags_var_8(void)

{
  return 0;
}



int inst_121_values_var_9(void)

{
  char in_AF;
  
  return (CONCAT22(0x8d12,CONCAT11(in_AF << 4 | 0x80,0x3d)) | 0x300) + 0x72ed6cc3;
}



undefined4 inst_121_flags_var_9(void)

{
  return 0;
}



undefined4 inst_122_values_var_0(void)

{
  return 0;
}



undefined4 inst_122_flags_var_0(void)

{
  return 0;
}



undefined4 inst_122_values_var_1(void)

{
  return 0;
}



undefined4 inst_122_flags_var_1(void)

{
  return 0;
}



undefined4 inst_122_values_var_2(void)

{
  return 0;
}



undefined4 inst_122_flags_var_2(void)

{
  return 0;
}



undefined4 inst_122_values_var_3(void)

{
  return 0;
}



undefined4 inst_122_flags_var_3(void)

{
  return 0;
}



undefined4 inst_122_values_var_4(void)

{
  return 0;
}



undefined4 inst_122_flags_var_4(void)

{
  return 0;
}



undefined4 inst_122_values_var_5(void)

{
  return 0;
}



undefined4 inst_122_flags_var_5(void)

{
  return 0;
}



undefined4 inst_122_values_var_6(void)

{
  return 0;
}



undefined4 inst_122_flags_var_6(void)

{
  return 0;
}



undefined4 inst_122_values_var_7(void)

{
  return 0;
}



undefined4 inst_122_flags_var_7(void)

{
  return 0;
}



undefined4 inst_122_values_var_8(void)

{
  return 0;
}



undefined4 inst_122_flags_var_8(void)

{
  return 0;
}



undefined4 inst_122_values_var_9(void)

{
  return 0;
}



undefined4 inst_122_flags_var_9(void)

{
  return 0;
}



undefined4 inst_123_values_var_0(void)

{
  return 0;
}



undefined4 inst_123_flags_var_0(void)

{
  return 0;
}



undefined4 inst_123_values_var_1(void)

{
  return 0;
}



undefined4 inst_123_flags_var_1(void)

{
  return 0;
}



undefined4 inst_123_values_var_2(void)

{
  return 0;
}



undefined4 inst_123_flags_var_2(void)

{
  return 0;
}



undefined4 inst_123_values_var_3(void)

{
  return 0;
}



undefined4 inst_123_flags_var_3(void)

{
  return 0;
}



undefined4 inst_123_values_var_4(void)

{
  return 0;
}



undefined4 inst_123_flags_var_4(void)

{
  return 0;
}



undefined4 inst_123_values_var_5(void)

{
  return 0;
}



undefined4 inst_123_flags_var_5(void)

{
  return 0;
}



undefined4 inst_123_values_var_6(void)

{
  return 0;
}



undefined4 inst_123_flags_var_6(void)

{
  return 0;
}



undefined4 inst_123_values_var_7(void)

{
  return 0;
}



undefined4 inst_123_flags_var_7(void)

{
  return 0;
}



undefined4 inst_123_values_var_8(void)

{
  return 0;
}



undefined4 inst_123_flags_var_8(void)

{
  return 0;
}



undefined4 inst_123_values_var_9(void)

{
  return 0;
}



undefined4 inst_123_flags_var_9(void)

{
  return 0;
}



undefined4 inst_124_values_var_0(void)

{
  return 0;
}



undefined4 inst_124_flags_var_0(void)

{
  return 0;
}



undefined4 inst_124_values_var_1(void)

{
  return 0;
}



undefined4 inst_124_flags_var_1(void)

{
  return 0;
}



undefined4 inst_124_values_var_2(void)

{
  return 0;
}



undefined4 inst_124_flags_var_2(void)

{
  return 0;
}



undefined4 inst_124_values_var_3(void)

{
  return 0;
}



undefined4 inst_124_flags_var_3(void)

{
  return 0;
}



undefined4 inst_124_values_var_4(void)

{
  return 0;
}



undefined4 inst_124_flags_var_4(void)

{
  return 0;
}



undefined4 inst_124_values_var_5(void)

{
  return 0;
}



undefined4 inst_124_flags_var_5(void)

{
  return 0;
}



undefined4 inst_124_values_var_6(void)

{
  return 0;
}



undefined4 inst_124_flags_var_6(void)

{
  return 0;
}



undefined4 inst_124_values_var_7(void)

{
  return 0;
}



undefined4 inst_124_flags_var_7(void)

{
  return 0;
}



undefined4 inst_124_values_var_8(void)

{
  return 0;
}



undefined4 inst_124_flags_var_8(void)

{
  return 0;
}



undefined4 inst_124_values_var_9(void)

{
  return 0;
}



undefined4 inst_124_flags_var_9(void)

{
  return 0;
}



undefined4 inst_125_values_var_0(void)

{
  return 0;
}



undefined4 inst_125_flags_var_0(void)

{
  return 0;
}



undefined4 inst_125_values_var_1(void)

{
  return 0;
}



undefined4 inst_125_flags_var_1(void)

{
  return 0;
}



undefined4 inst_125_values_var_2(void)

{
  return 0;
}



undefined4 inst_125_flags_var_2(void)

{
  return 0;
}



undefined4 inst_125_values_var_3(void)

{
  return 0;
}



undefined4 inst_125_flags_var_3(void)

{
  return 0;
}



undefined4 inst_125_values_var_4(void)

{
  return 0;
}



undefined4 inst_125_flags_var_4(void)

{
  return 0;
}



undefined4 inst_125_values_var_5(void)

{
  return 0;
}



undefined4 inst_125_flags_var_5(void)

{
  return 0;
}



undefined4 inst_125_values_var_6(void)

{
  return 0;
}



undefined4 inst_125_flags_var_6(void)

{
  return 0;
}



undefined4 inst_125_values_var_7(void)

{
  return 0;
}



undefined4 inst_125_flags_var_7(void)

{
  return 0;
}



undefined4 inst_125_values_var_8(void)

{
  return 0;
}



undefined4 inst_125_flags_var_8(void)

{
  return 0;
}



undefined4 inst_125_values_var_9(void)

{
  return 0;
}



undefined4 inst_125_flags_var_9(void)

{
  return 0;
}



undefined4 inst_126_values_var_0(void)

{
  return 0;
}



undefined4 inst_126_flags_var_0(void)

{
  return 0;
}



undefined4 inst_126_values_var_1(void)

{
  return 0;
}



undefined4 inst_126_flags_var_1(void)

{
  return 0;
}



undefined4 inst_126_values_var_2(void)

{
  return 0;
}



undefined4 inst_126_flags_var_2(void)

{
  return 0;
}



undefined4 inst_126_values_var_3(void)

{
  return 0;
}



undefined4 inst_126_flags_var_3(void)

{
  return 0;
}



undefined4 inst_126_values_var_4(void)

{
  return 0;
}



undefined4 inst_126_flags_var_4(void)

{
  return 0;
}



undefined4 inst_126_values_var_5(void)

{
  return 0;
}



undefined4 inst_126_flags_var_5(void)

{
  return 0;
}



undefined4 inst_126_values_var_6(void)

{
  return 0;
}



undefined4 inst_126_flags_var_6(void)

{
  return 0;
}



undefined4 inst_126_values_var_7(void)

{
  return 0;
}



undefined4 inst_126_flags_var_7(void)

{
  return 0;
}



undefined4 inst_126_values_var_8(void)

{
  return 0;
}



undefined4 inst_126_flags_var_8(void)

{
  return 0;
}



undefined4 inst_126_values_var_9(void)

{
  return 0;
}



undefined4 inst_126_flags_var_9(void)

{
  return 0;
}



undefined4 inst_127_values_var_0(void)

{
  return 0;
}



undefined4 inst_127_flags_var_0(void)

{
  return 0;
}



undefined4 inst_127_values_var_1(void)

{
  return 0;
}



undefined4 inst_127_flags_var_1(void)

{
  return 0;
}



undefined4 inst_127_values_var_2(void)

{
  return 0;
}



undefined4 inst_127_flags_var_2(void)

{
  return 0;
}



undefined4 inst_127_values_var_3(void)

{
  return 0;
}



undefined4 inst_127_flags_var_3(void)

{
  return 0;
}



undefined4 inst_127_values_var_4(void)

{
  return 0;
}



undefined4 inst_127_flags_var_4(void)

{
  return 0;
}



undefined4 inst_127_values_var_5(void)

{
  return 0;
}



undefined4 inst_127_flags_var_5(void)

{
  return 0;
}



undefined4 inst_127_values_var_6(void)

{
  return 0;
}



undefined4 inst_127_flags_var_6(void)

{
  return 0;
}



undefined4 inst_127_values_var_7(void)

{
  return 0;
}



undefined4 inst_127_flags_var_7(void)

{
  return 0;
}



undefined4 inst_127_values_var_8(void)

{
  return 0;
}



undefined4 inst_127_flags_var_8(void)

{
  return 0;
}



undefined4 inst_127_values_var_9(void)

{
  return 0;
}



undefined4 inst_127_flags_var_9(void)

{
  return 0;
}



undefined4 inst_128_values_var_0(void)

{
  return 0;
}



undefined4 inst_128_flags_var_0(void)

{
  return 0;
}



undefined4 inst_128_values_var_1(void)

{
  return 0;
}



undefined4 inst_128_flags_var_1(void)

{
  return 0;
}



undefined4 inst_128_values_var_2(void)

{
  return 0;
}



undefined4 inst_128_flags_var_2(void)

{
  return 0;
}



undefined4 inst_128_values_var_3(void)

{
  return 0;
}



undefined4 inst_128_flags_var_3(void)

{
  return 0;
}



undefined4 inst_128_values_var_4(void)

{
  return 0;
}



undefined4 inst_128_flags_var_4(void)

{
  return 0;
}



undefined4 inst_128_values_var_5(void)

{
  return 0;
}



undefined4 inst_128_flags_var_5(void)

{
  return 0;
}



undefined4 inst_128_values_var_6(void)

{
  return 0;
}



undefined4 inst_128_flags_var_6(void)

{
  return 0;
}



undefined4 inst_128_values_var_7(void)

{
  return 0;
}



undefined4 inst_128_flags_var_7(void)

{
  return 0;
}



undefined4 inst_128_values_var_8(void)

{
  return 0;
}



undefined4 inst_128_flags_var_8(void)

{
  return 0;
}



undefined4 inst_128_values_var_9(void)

{
  return 0;
}



undefined4 inst_128_flags_var_9(void)

{
  return 0;
}



undefined4 inst_129_values_var_0(void)

{
  return 0;
}



undefined4 inst_129_flags_var_0(void)

{
  return 0;
}



undefined4 inst_129_values_var_1(void)

{
  return 0;
}



undefined4 inst_129_flags_var_1(void)

{
  return 0;
}



undefined4 inst_129_values_var_2(void)

{
  return 0;
}



undefined4 inst_129_flags_var_2(void)

{
  return 0;
}



undefined4 inst_129_values_var_3(void)

{
  return 0;
}



undefined4 inst_129_flags_var_3(void)

{
  return 0;
}



undefined4 inst_129_values_var_4(void)

{
  return 0;
}



undefined4 inst_129_flags_var_4(void)

{
  return 0;
}



undefined4 inst_129_values_var_5(void)

{
  return 0;
}



undefined4 inst_129_flags_var_5(void)

{
  return 0;
}



undefined4 inst_129_values_var_6(void)

{
  return 0;
}



undefined4 inst_129_flags_var_6(void)

{
  return 0;
}



undefined4 inst_129_values_var_7(void)

{
  return 0;
}



undefined4 inst_129_flags_var_7(void)

{
  return 0;
}



undefined4 inst_129_values_var_8(void)

{
  return 0;
}



undefined4 inst_129_flags_var_8(void)

{
  return 0;
}



undefined4 inst_129_values_var_9(void)

{
  return 0;
}



undefined4 inst_129_flags_var_9(void)

{
  return 0;
}



undefined4 inst_130_values_var_0(void)

{
  return 0;
}



undefined4 inst_130_flags_var_0(void)

{
  return 0;
}



undefined4 inst_130_values_var_1(void)

{
  return 0;
}



undefined4 inst_130_flags_var_1(void)

{
  return 0;
}



undefined4 inst_130_values_var_2(void)

{
  return 0;
}



undefined4 inst_130_flags_var_2(void)

{
  return 0;
}



undefined4 inst_130_values_var_3(void)

{
  return 0;
}



undefined4 inst_130_flags_var_3(void)

{
  return 0;
}



undefined4 inst_130_values_var_4(void)

{
  return 0;
}



undefined4 inst_130_flags_var_4(void)

{
  return 0;
}



undefined4 inst_130_values_var_5(void)

{
  return 0;
}



undefined4 inst_130_flags_var_5(void)

{
  return 0;
}



undefined4 inst_130_values_var_6(void)

{
  return 0;
}



undefined4 inst_130_flags_var_6(void)

{
  return 0;
}



undefined4 inst_130_values_var_7(void)

{
  return 0;
}



undefined4 inst_130_flags_var_7(void)

{
  return 0;
}



undefined4 inst_130_values_var_8(void)

{
  return 0;
}



undefined4 inst_130_flags_var_8(void)

{
  return 0;
}



undefined4 inst_130_values_var_9(void)

{
  return 0;
}



undefined4 inst_130_flags_var_9(void)

{
  return 0;
}



undefined4 inst_131_values_var_0(void)

{
  return 0;
}



undefined4 inst_131_flags_var_0(void)

{
  return 0;
}



undefined4 inst_131_values_var_1(void)

{
  return 0;
}



undefined4 inst_131_flags_var_1(void)

{
  return 0;
}



undefined4 inst_131_values_var_2(void)

{
  return 0;
}



undefined4 inst_131_flags_var_2(void)

{
  return 0;
}



undefined4 inst_131_values_var_3(void)

{
  return 0;
}



undefined4 inst_131_flags_var_3(void)

{
  return 0;
}



undefined4 inst_131_values_var_4(void)

{
  return 0;
}



undefined4 inst_131_flags_var_4(void)

{
  return 0;
}



undefined4 inst_131_values_var_5(void)

{
  return 0;
}



undefined4 inst_131_flags_var_5(void)

{
  return 0;
}



undefined4 inst_131_values_var_6(void)

{
  return 0;
}



undefined4 inst_131_flags_var_6(void)

{
  return 0;
}



undefined4 inst_131_values_var_7(void)

{
  return 0;
}



undefined4 inst_131_flags_var_7(void)

{
  return 0;
}



undefined4 inst_131_values_var_8(void)

{
  return 0;
}



undefined4 inst_131_flags_var_8(void)

{
  return 0;
}



undefined4 inst_131_values_var_9(void)

{
  return 0;
}



undefined4 inst_131_flags_var_9(void)

{
  return 0;
}



undefined4 inst_132_values_var_0(void)

{
  return 0;
}



undefined4 inst_132_flags_var_0(void)

{
  return 0;
}



undefined4 inst_132_values_var_1(void)

{
  return 0;
}



undefined4 inst_132_flags_var_1(void)

{
  return 0;
}



undefined4 inst_132_values_var_2(void)

{
  return 0;
}



undefined4 inst_132_flags_var_2(void)

{
  return 0;
}



undefined4 inst_132_values_var_3(void)

{
  return 0;
}



undefined4 inst_132_flags_var_3(void)

{
  return 0;
}



undefined4 inst_132_values_var_4(void)

{
  return 0;
}



undefined4 inst_132_flags_var_4(void)

{
  return 0;
}



undefined4 inst_132_values_var_5(void)

{
  return 0;
}



undefined4 inst_132_flags_var_5(void)

{
  return 0;
}



undefined4 inst_132_values_var_6(void)

{
  return 0;
}



undefined4 inst_132_flags_var_6(void)

{
  return 0;
}



undefined4 inst_132_values_var_7(void)

{
  return 0;
}



undefined4 inst_132_flags_var_7(void)

{
  return 0;
}



undefined4 inst_132_values_var_8(void)

{
  return 0;
}



undefined4 inst_132_flags_var_8(void)

{
  return 0;
}



undefined4 inst_132_values_var_9(void)

{
  return 0;
}



undefined4 inst_132_flags_var_9(void)

{
  return 0;
}



undefined4 inst_133_values_var_0(void)

{
  return 0;
}



undefined4 inst_133_flags_var_0(void)

{
  return 0;
}



undefined4 inst_133_values_var_1(void)

{
  return 0;
}



undefined4 inst_133_flags_var_1(void)

{
  return 0;
}



undefined4 inst_133_values_var_2(void)

{
  return 0;
}



undefined4 inst_133_flags_var_2(void)

{
  return 0;
}



undefined4 inst_133_values_var_3(void)

{
  return 0;
}



undefined4 inst_133_flags_var_3(void)

{
  return 0;
}



undefined4 inst_133_values_var_4(void)

{
  return 0;
}



undefined4 inst_133_flags_var_4(void)

{
  return 0;
}



undefined4 inst_133_values_var_5(void)

{
  return 0;
}



undefined4 inst_133_flags_var_5(void)

{
  return 0;
}



undefined4 inst_133_values_var_6(void)

{
  return 0;
}



undefined4 inst_133_flags_var_6(void)

{
  return 0;
}



undefined4 inst_133_values_var_7(void)

{
  return 0;
}



undefined4 inst_133_flags_var_7(void)

{
  return 0;
}



undefined4 inst_133_values_var_8(void)

{
  return 0;
}



undefined4 inst_133_flags_var_8(void)

{
  return 0;
}



undefined4 inst_133_values_var_9(void)

{
  return 0;
}



undefined4 inst_133_flags_var_9(void)

{
  return 0;
}



undefined4 inst_134_values_var_0(void)

{
  return 0;
}



undefined4 inst_134_flags_var_0(void)

{
  return 0;
}



undefined4 inst_134_values_var_1(void)

{
  return 0;
}



undefined4 inst_134_flags_var_1(void)

{
  return 0;
}



undefined4 inst_134_values_var_2(void)

{
  return 0;
}



undefined4 inst_134_flags_var_2(void)

{
  return 0;
}



undefined4 inst_134_values_var_3(void)

{
  return 0;
}



undefined4 inst_134_flags_var_3(void)

{
  return 0;
}



undefined4 inst_134_values_var_4(void)

{
  return 0;
}



undefined4 inst_134_flags_var_4(void)

{
  return 0;
}



undefined4 inst_134_values_var_5(void)

{
  return 0;
}



undefined4 inst_134_flags_var_5(void)

{
  return 0;
}



undefined4 inst_134_values_var_6(void)

{
  return 0;
}



undefined4 inst_134_flags_var_6(void)

{
  return 0;
}



undefined4 inst_134_values_var_7(void)

{
  return 0;
}



undefined4 inst_134_flags_var_7(void)

{
  return 0;
}



undefined4 inst_134_values_var_8(void)

{
  return 0;
}



undefined4 inst_134_flags_var_8(void)

{
  return 0;
}



undefined4 inst_134_values_var_9(void)

{
  return 0;
}



undefined4 inst_134_flags_var_9(void)

{
  return 0;
}



undefined4 inst_135_values_var_0(void)

{
  return 0;
}



undefined4 inst_135_flags_var_0(void)

{
  return 0;
}



undefined4 inst_135_values_var_1(void)

{
  return 0;
}



undefined4 inst_135_flags_var_1(void)

{
  return 0;
}



undefined4 inst_135_values_var_2(void)

{
  return 0;
}



undefined4 inst_135_flags_var_2(void)

{
  return 0;
}



undefined4 inst_135_values_var_3(void)

{
  return 0;
}



undefined4 inst_135_flags_var_3(void)

{
  return 0;
}



undefined4 inst_135_values_var_4(void)

{
  return 0;
}



undefined4 inst_135_flags_var_4(void)

{
  return 0;
}



undefined4 inst_135_values_var_5(void)

{
  return 0;
}



undefined4 inst_135_flags_var_5(void)

{
  return 0;
}



undefined4 inst_135_values_var_6(void)

{
  return 0;
}



undefined4 inst_135_flags_var_6(void)

{
  return 0;
}



undefined4 inst_135_values_var_7(void)

{
  return 0;
}



undefined4 inst_135_flags_var_7(void)

{
  return 0;
}



undefined4 inst_135_values_var_8(void)

{
  return 0;
}



undefined4 inst_135_flags_var_8(void)

{
  return 0;
}



undefined4 inst_135_values_var_9(void)

{
  return 0;
}



undefined4 inst_135_flags_var_9(void)

{
  return 0;
}



undefined4 inst_136_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f356)
// WARNING: Removing unreachable block (ram,0x0808f349)
// WARNING: Removing unreachable block (ram,0x0808f363)

int inst_136_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_136_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f415)
// WARNING: Removing unreachable block (ram,0x0808f422)

int inst_136_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_136_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f4ee)
// WARNING: Removing unreachable block (ram,0x0808f4e1)
// WARNING: Removing unreachable block (ram,0x0808f4fb)

int inst_136_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_136_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f5ad)
// WARNING: Removing unreachable block (ram,0x0808f5ba)

int inst_136_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_136_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f679)

int inst_136_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_136_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f745)
// WARNING: Removing unreachable block (ram,0x0808f752)

int inst_136_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_136_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f811)

int inst_136_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_136_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f8dd)
// WARNING: Removing unreachable block (ram,0x0808f8ea)

int inst_136_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_136_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f9a9)
// WARNING: Removing unreachable block (ram,0x0808f9b6)

int inst_136_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_136_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808fa82)
// WARNING: Removing unreachable block (ram,0x0808fa75)
// WARNING: Removing unreachable block (ram,0x0808fa8f)

int inst_136_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_137_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808fb43)
// WARNING: Removing unreachable block (ram,0x0808fb50)

int inst_137_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_137_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808fc1e)
// WARNING: Removing unreachable block (ram,0x0808fc11)
// WARNING: Removing unreachable block (ram,0x0808fc2b)

int inst_137_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_137_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808fcdf)

int inst_137_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_137_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808fdad)

int inst_137_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_137_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808fe7b)

int inst_137_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_137_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808ff49)
// WARNING: Removing unreachable block (ram,0x0808ff63)

int inst_137_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_137_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08090024)
// WARNING: Removing unreachable block (ram,0x08090017)
// WARNING: Removing unreachable block (ram,0x08090031)

int inst_137_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_137_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080900f2)
// WARNING: Removing unreachable block (ram,0x080900e5)
// WARNING: Removing unreachable block (ram,0x080900ff)

int inst_137_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_137_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080901c0)
// WARNING: Removing unreachable block (ram,0x080901b3)
// WARNING: Removing unreachable block (ram,0x080901cd)

int inst_137_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_137_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08090281)

undefined4 inst_137_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_138_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809034d)
// WARNING: Removing unreachable block (ram,0x0809035a)

int inst_138_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_138_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08090419)

int inst_138_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_138_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080904e5)
// WARNING: Removing unreachable block (ram,0x080904f2)

int inst_138_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_138_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080905b1)
// WARNING: Removing unreachable block (ram,0x080905cb)

int inst_138_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_138_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809067d)
// WARNING: Removing unreachable block (ram,0x08090697)

int inst_138_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_138_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08090749)

int inst_138_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_138_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08090815)

int inst_138_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_138_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080908e1)

int inst_138_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_138_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080909ad)

int inst_138_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_138_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08090a79)

undefined4 inst_138_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_139_values_var_0(void)

{
  return 0;
}



undefined4 inst_139_flags_var_0(void)

{
  return 0;
}



undefined4 inst_139_values_var_1(void)

{
  return 0;
}



undefined4 inst_139_flags_var_1(void)

{
  return 0;
}



undefined4 inst_139_values_var_2(void)

{
  return 0;
}



undefined4 inst_139_flags_var_2(void)

{
  return 0;
}



undefined4 inst_139_values_var_3(void)

{
  return 0;
}



undefined4 inst_139_flags_var_3(void)

{
  return 0;
}



undefined4 inst_139_values_var_4(void)

{
  return 0;
}



undefined4 inst_139_flags_var_4(void)

{
  return 0;
}



undefined4 inst_139_values_var_5(void)

{
  return 0;
}



undefined4 inst_139_flags_var_5(void)

{
  return 0;
}



undefined4 inst_139_values_var_6(void)

{
  return 0;
}



undefined4 inst_139_flags_var_6(void)

{
  return 0;
}



undefined4 inst_139_values_var_7(void)

{
  return 0;
}



undefined4 inst_139_flags_var_7(void)

{
  return 0;
}



undefined4 inst_139_values_var_8(void)

{
  return 0;
}



undefined4 inst_139_flags_var_8(void)

{
  return 0;
}



undefined4 inst_139_values_var_9(void)

{
  return 0;
}



undefined4 inst_139_flags_var_9(void)

{
  return 0;
}



undefined4 inst_140_values_var_0(void)

{
  return 0;
}



undefined4 inst_140_flags_var_0(void)

{
  return 0;
}



undefined4 inst_140_values_var_1(void)

{
  return 0;
}



undefined4 inst_140_flags_var_1(void)

{
  return 0;
}



undefined4 inst_140_values_var_2(void)

{
  return 0;
}



undefined4 inst_140_flags_var_2(void)

{
  return 0;
}



undefined4 inst_140_values_var_3(void)

{
  return 0;
}



undefined4 inst_140_flags_var_3(void)

{
  return 0;
}



undefined4 inst_140_values_var_4(void)

{
  return 0;
}



undefined4 inst_140_flags_var_4(void)

{
  return 0;
}



undefined4 inst_140_values_var_5(void)

{
  return 0;
}



undefined4 inst_140_flags_var_5(void)

{
  return 0;
}



undefined4 inst_140_values_var_6(void)

{
  return 0;
}



undefined4 inst_140_flags_var_6(void)

{
  return 0;
}



undefined4 inst_140_values_var_7(void)

{
  return 0;
}



undefined4 inst_140_flags_var_7(void)

{
  return 0;
}



undefined4 inst_140_values_var_8(void)

{
  return 0;
}



undefined4 inst_140_flags_var_8(void)

{
  return 0;
}



undefined4 inst_140_values_var_9(void)

{
  return 0;
}



undefined4 inst_140_flags_var_9(void)

{
  return 0;
}



undefined4 inst_141_values_var_0(void)

{
  return 0;
}



undefined4 inst_141_flags_var_0(void)

{
  return 0;
}



undefined4 inst_141_values_var_1(void)

{
  return 0;
}



undefined4 inst_141_flags_var_1(void)

{
  return 0;
}



undefined4 inst_141_values_var_2(void)

{
  return 0;
}



undefined4 inst_141_flags_var_2(void)

{
  return 0;
}



undefined4 inst_141_values_var_3(void)

{
  return 0;
}



undefined4 inst_141_flags_var_3(void)

{
  return 0;
}



undefined4 inst_141_values_var_4(void)

{
  return 0;
}



undefined4 inst_141_flags_var_4(void)

{
  return 0;
}



undefined4 inst_141_values_var_5(void)

{
  return 0;
}



undefined4 inst_141_flags_var_5(void)

{
  return 0;
}



undefined4 inst_141_values_var_6(void)

{
  return 0;
}



undefined4 inst_141_flags_var_6(void)

{
  return 0;
}



undefined4 inst_141_values_var_7(void)

{
  return 0;
}



undefined4 inst_141_flags_var_7(void)

{
  return 0;
}



undefined4 inst_141_values_var_8(void)

{
  return 0;
}



undefined4 inst_141_flags_var_8(void)

{
  return 0;
}



undefined4 inst_141_values_var_9(void)

{
  return 0;
}



undefined4 inst_141_flags_var_9(void)

{
  return 0;
}



undefined4 inst_142_values_var_0(void)

{
  return 0;
}



undefined4 inst_142_flags_var_0(void)

{
  return 0;
}



undefined4 inst_142_values_var_1(void)

{
  return 0;
}



undefined4 inst_142_flags_var_1(void)

{
  return 0;
}



undefined4 inst_142_values_var_2(void)

{
  return 0;
}



undefined4 inst_142_flags_var_2(void)

{
  return 0;
}



undefined4 inst_142_values_var_3(void)

{
  return 0;
}



undefined4 inst_142_flags_var_3(void)

{
  return 0;
}



undefined4 inst_142_values_var_4(void)

{
  return 0;
}



undefined4 inst_142_flags_var_4(void)

{
  return 0;
}



undefined4 inst_142_values_var_5(void)

{
  return 0;
}



undefined4 inst_142_flags_var_5(void)

{
  return 0;
}



undefined4 inst_142_values_var_6(void)

{
  return 0;
}



undefined4 inst_142_flags_var_6(void)

{
  return 0;
}



undefined4 inst_142_values_var_7(void)

{
  return 0;
}



undefined4 inst_142_flags_var_7(void)

{
  return 0;
}



undefined4 inst_142_values_var_8(void)

{
  return 0;
}



undefined4 inst_142_flags_var_8(void)

{
  return 0;
}



undefined4 inst_142_values_var_9(void)

{
  return 0;
}



undefined4 inst_142_flags_var_9(void)

{
  return 0;
}



undefined4 inst_143_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809247c)
// WARNING: Removing unreachable block (ram,0x08092462)
// WARNING: Removing unreachable block (ram,0x0809246f)
// WARNING: Removing unreachable block (ram,0x08092489)

undefined4 inst_143_flags_var_0(void)

{
  return 0;
}



undefined4 inst_143_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092525)
// WARNING: Removing unreachable block (ram,0x08092532)
// WARNING: Removing unreachable block (ram,0x0809253f)

undefined4 inst_143_flags_var_1(void)

{
  return 0;
}



undefined4 inst_143_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080925e7)
// WARNING: Removing unreachable block (ram,0x080925f4)
// WARNING: Removing unreachable block (ram,0x08092601)

undefined4 inst_143_flags_var_2(void)

{
  return 0;
}



undefined4 inst_143_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080926c4)
// WARNING: Removing unreachable block (ram,0x080926aa)
// WARNING: Removing unreachable block (ram,0x080926b7)
// WARNING: Removing unreachable block (ram,0x080926d1)

undefined4 inst_143_flags_var_3(void)

{
  return 0;
}



undefined4 inst_143_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809276d)
// WARNING: Removing unreachable block (ram,0x0809277a)
// WARNING: Removing unreachable block (ram,0x08092787)

undefined4 inst_143_flags_var_4(void)

{
  return 0;
}



undefined4 inst_143_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809282f)
// WARNING: Removing unreachable block (ram,0x0809283c)
// WARNING: Removing unreachable block (ram,0x08092849)

undefined4 inst_143_flags_var_5(void)

{
  return 0;
}



undefined4 inst_143_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080928f1)
// WARNING: Removing unreachable block (ram,0x080928fe)
// WARNING: Removing unreachable block (ram,0x0809290b)

undefined4 inst_143_flags_var_6(void)

{
  return 0;
}



undefined4 inst_143_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080929b3)
// WARNING: Removing unreachable block (ram,0x080929c0)

undefined4 inst_143_flags_var_7(void)

{
  return 0;
}



undefined4 inst_143_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092a76)
// WARNING: Removing unreachable block (ram,0x08092a83)
// WARNING: Removing unreachable block (ram,0x08092a90)

undefined4 inst_143_flags_var_8(void)

{
  return 0;
}



undefined4 inst_143_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092b38)
// WARNING: Removing unreachable block (ram,0x08092b45)
// WARNING: Removing unreachable block (ram,0x08092b52)

undefined4 inst_143_flags_var_9(void)

{
  return 0;
}



undefined4 inst_144_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092bf9)
// WARNING: Removing unreachable block (ram,0x08092c06)
// WARNING: Removing unreachable block (ram,0x08092c13)

undefined4 inst_144_flags_var_0(void)

{
  return 0;
}



undefined4 inst_144_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092cd4)
// WARNING: Removing unreachable block (ram,0x08092cba)
// WARNING: Removing unreachable block (ram,0x08092cc7)
// WARNING: Removing unreachable block (ram,0x08092ce1)

undefined4 inst_144_flags_var_1(void)

{
  return 0;
}



undefined4 inst_144_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092d95)
// WARNING: Removing unreachable block (ram,0x08092d7b)
// WARNING: Removing unreachable block (ram,0x08092d88)
// WARNING: Removing unreachable block (ram,0x08092da2)

undefined4 inst_144_flags_var_2(void)

{
  return 0;
}



undefined4 inst_144_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092e3c)
// WARNING: Removing unreachable block (ram,0x08092e49)
// WARNING: Removing unreachable block (ram,0x08092e56)

undefined4 inst_144_flags_var_3(void)

{
  return 0;
}



undefined4 inst_144_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092efd)
// WARNING: Removing unreachable block (ram,0x08092f0a)
// WARNING: Removing unreachable block (ram,0x08092f17)

undefined4 inst_144_flags_var_4(void)

{
  return 0;
}



undefined4 inst_144_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092fbe)
// WARNING: Removing unreachable block (ram,0x08092fcb)
// WARNING: Removing unreachable block (ram,0x08092fd8)

undefined4 inst_144_flags_var_5(void)

{
  return 0;
}



undefined4 inst_144_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809307f)
// WARNING: Removing unreachable block (ram,0x0809308c)

undefined4 inst_144_flags_var_6(void)

{
  return 0;
}



undefined4 inst_144_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093140)
// WARNING: Removing unreachable block (ram,0x0809314d)

undefined4 inst_144_flags_var_7(void)

{
  return 0;
}



undefined4 inst_144_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093201)
// WARNING: Removing unreachable block (ram,0x0809320e)

undefined4 inst_144_flags_var_8(void)

{
  return 0;
}



undefined4 inst_144_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080932c2)
// WARNING: Removing unreachable block (ram,0x080932cf)
// WARNING: Removing unreachable block (ram,0x080932dc)

undefined4 inst_144_flags_var_9(void)

{
  return 0;
}



undefined4 inst_145_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093389)
// WARNING: Removing unreachable block (ram,0x08093396)
// WARNING: Removing unreachable block (ram,0x080933a3)

undefined4 inst_145_flags_var_0(void)

{
  return 0;
}



undefined4 inst_145_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809345d)
// WARNING: Removing unreachable block (ram,0x08093450)
// WARNING: Removing unreachable block (ram,0x08093477)

undefined4 inst_145_flags_var_1(void)

{
  return 0;
}



undefined4 inst_145_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093531)
// WARNING: Removing unreachable block (ram,0x08093517)
// WARNING: Removing unreachable block (ram,0x08093524)
// WARNING: Removing unreachable block (ram,0x0809353e)

undefined4 inst_145_flags_var_2(void)

{
  return 0;
}



undefined4 inst_145_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080935de)
// WARNING: Removing unreachable block (ram,0x080935eb)

undefined4 inst_145_flags_var_3(void)

{
  return 0;
}



undefined4 inst_145_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080936a5)
// WARNING: Removing unreachable block (ram,0x080936b2)

undefined4 inst_145_flags_var_4(void)

{
  return 0;
}



undefined4 inst_145_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809376c)
// WARNING: Removing unreachable block (ram,0x08093779)
// WARNING: Removing unreachable block (ram,0x08093786)

undefined4 inst_145_flags_var_5(void)

{
  return 0;
}



undefined4 inst_145_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093832)
// WARNING: Removing unreachable block (ram,0x0809383f)

undefined4 inst_145_flags_var_6(void)

{
  return 0;
}



undefined4 inst_145_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093906)
// WARNING: Removing unreachable block (ram,0x080938f9)
// WARNING: Removing unreachable block (ram,0x08093920)

undefined4 inst_145_flags_var_7(void)

{
  return 0;
}



undefined4 inst_145_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080939da)
// WARNING: Removing unreachable block (ram,0x080939c0)
// WARNING: Removing unreachable block (ram,0x080939cd)
// WARNING: Removing unreachable block (ram,0x080939e7)

undefined4 inst_145_flags_var_8(void)

{
  return 0;
}



undefined4 inst_145_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093a87)
// WARNING: Removing unreachable block (ram,0x08093a94)
// WARNING: Removing unreachable block (ram,0x08093aa1)

undefined4 inst_145_flags_var_9(void)

{
  return 0;
}



undefined4 inst_146_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093b64)
// WARNING: Removing unreachable block (ram,0x08093b4a)
// WARNING: Removing unreachable block (ram,0x08093b57)
// WARNING: Removing unreachable block (ram,0x08093b71)

undefined4 inst_146_flags_var_0(void)

{
  return 0;
}



undefined4 inst_146_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093c0d)
// WARNING: Removing unreachable block (ram,0x08093c1a)
// WARNING: Removing unreachable block (ram,0x08093c27)

undefined4 inst_146_flags_var_1(void)

{
  return 0;
}



undefined4 inst_146_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093cd0)
// WARNING: Removing unreachable block (ram,0x08093cdd)

undefined4 inst_146_flags_var_2(void)

{
  return 0;
}



undefined4 inst_146_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093d93)
// WARNING: Removing unreachable block (ram,0x08093da0)

undefined4 inst_146_flags_var_3(void)

{
  return 0;
}



undefined4 inst_146_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093e63)
// WARNING: Removing unreachable block (ram,0x08093e56)
// WARNING: Removing unreachable block (ram,0x08093e7d)

undefined4 inst_146_flags_var_4(void)

{
  return 0;
}



undefined4 inst_146_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093f19)
// WARNING: Removing unreachable block (ram,0x08093f26)
// WARNING: Removing unreachable block (ram,0x08093f33)

undefined4 inst_146_flags_var_5(void)

{
  return 0;
}



undefined4 inst_146_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093ff6)
// WARNING: Removing unreachable block (ram,0x08093fdc)
// WARNING: Removing unreachable block (ram,0x08093fe9)
// WARNING: Removing unreachable block (ram,0x08094003)

undefined4 inst_146_flags_var_6(void)

{
  return 0;
}



undefined4 inst_146_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080940ac)
// WARNING: Removing unreachable block (ram,0x0809409f)
// WARNING: Removing unreachable block (ram,0x080940c6)

undefined4 inst_146_flags_var_7(void)

{
  return 0;
}



undefined4 inst_146_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809417c)
// WARNING: Removing unreachable block (ram,0x08094162)
// WARNING: Removing unreachable block (ram,0x0809416f)
// WARNING: Removing unreachable block (ram,0x08094189)

undefined4 inst_146_flags_var_8(void)

{
  return 0;
}



undefined4 inst_146_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094225)
// WARNING: Removing unreachable block (ram,0x08094232)
// WARNING: Removing unreachable block (ram,0x0809423f)

undefined4 inst_146_flags_var_9(void)

{
  return 0;
}



undefined4 inst_147_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080942ed)
// WARNING: Removing unreachable block (ram,0x080942fa)

undefined4 inst_147_flags_var_0(void)

{
  return 0;
}



undefined4 inst_147_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080943b6)
// WARNING: Removing unreachable block (ram,0x080943c3)
// WARNING: Removing unreachable block (ram,0x080943d0)

undefined4 inst_147_flags_var_1(void)

{
  return 0;
}



undefined4 inst_147_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809447f)
// WARNING: Removing unreachable block (ram,0x0809448c)

undefined4 inst_147_flags_var_2(void)

{
  return 0;
}



undefined4 inst_147_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094548)
// WARNING: Removing unreachable block (ram,0x08094555)

undefined4 inst_147_flags_var_3(void)

{
  return 0;
}



undefined4 inst_147_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094611)
// WARNING: Removing unreachable block (ram,0x0809461e)
// WARNING: Removing unreachable block (ram,0x0809462b)

undefined4 inst_147_flags_var_4(void)

{
  return 0;
}



undefined4 inst_147_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080946d9)
// WARNING: Removing unreachable block (ram,0x080946e6)
// WARNING: Removing unreachable block (ram,0x080946f3)

undefined4 inst_147_flags_var_5(void)

{
  return 0;
}



undefined4 inst_147_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080947a1)
// WARNING: Removing unreachable block (ram,0x080947ae)

undefined4 inst_147_flags_var_6(void)

{
  return 0;
}



undefined4 inst_147_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094869)
// WARNING: Removing unreachable block (ram,0x08094876)
// WARNING: Removing unreachable block (ram,0x08094883)

undefined4 inst_147_flags_var_7(void)

{
  return 0;
}



undefined4 inst_147_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094932)
// WARNING: Removing unreachable block (ram,0x0809493f)
// WARNING: Removing unreachable block (ram,0x0809494c)

undefined4 inst_147_flags_var_8(void)

{
  return 0;
}



undefined4 inst_147_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094a15)
// WARNING: Removing unreachable block (ram,0x080949fb)
// WARNING: Removing unreachable block (ram,0x08094a08)
// WARNING: Removing unreachable block (ram,0x08094a22)

undefined4 inst_147_flags_var_9(void)

{
  return 0;
}



undefined4 inst_148_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094abc)
// WARNING: Removing unreachable block (ram,0x08094ac9)
// WARNING: Removing unreachable block (ram,0x08094ad6)

undefined4 inst_148_flags_var_0(void)

{
  return 0;
}



undefined4 inst_148_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094b7d)
// WARNING: Removing unreachable block (ram,0x08094b8a)
// WARNING: Removing unreachable block (ram,0x08094b97)

undefined4 inst_148_flags_var_1(void)

{
  return 0;
}



undefined4 inst_148_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094c3e)
// WARNING: Removing unreachable block (ram,0x08094c4b)
// WARNING: Removing unreachable block (ram,0x08094c58)

undefined4 inst_148_flags_var_2(void)

{
  return 0;
}



undefined4 inst_148_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094d19)
// WARNING: Removing unreachable block (ram,0x08094cff)
// WARNING: Removing unreachable block (ram,0x08094d0c)
// WARNING: Removing unreachable block (ram,0x08094d26)

undefined4 inst_148_flags_var_3(void)

{
  return 0;
}



undefined4 inst_148_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094dc0)
// WARNING: Removing unreachable block (ram,0x08094dcd)
// WARNING: Removing unreachable block (ram,0x08094dda)

undefined4 inst_148_flags_var_4(void)

{
  return 0;
}



undefined4 inst_148_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094e81)
// WARNING: Removing unreachable block (ram,0x08094e8e)

undefined4 inst_148_flags_var_5(void)

{
  return 0;
}



undefined4 inst_148_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094f42)
// WARNING: Removing unreachable block (ram,0x08094f4f)
// WARNING: Removing unreachable block (ram,0x08094f5c)

undefined4 inst_148_flags_var_6(void)

{
  return 0;
}



undefined4 inst_148_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809501d)
// WARNING: Removing unreachable block (ram,0x08095003)
// WARNING: Removing unreachable block (ram,0x08095010)
// WARNING: Removing unreachable block (ram,0x0809502a)

undefined4 inst_148_flags_var_7(void)

{
  return 0;
}



undefined4 inst_148_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080950d1)
// WARNING: Removing unreachable block (ram,0x080950c4)
// WARNING: Removing unreachable block (ram,0x080950eb)

undefined4 inst_148_flags_var_8(void)

{
  return 0;
}



undefined4 inst_148_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08095185)
// WARNING: Removing unreachable block (ram,0x08095192)
// WARNING: Removing unreachable block (ram,0x0809519f)

undefined4 inst_148_flags_var_9(void)

{
  return 0;
}



undefined4 inst_149_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08095246)

undefined4 inst_149_flags_var_0(void)

{
  return 0;
}



undefined4 inst_149_values_var_1(void)

{
  return 0;
}



undefined4 inst_149_flags_var_1(void)

{
  return 0;
}



undefined4 inst_149_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080953b5)

undefined4 inst_149_flags_var_2(void)

{
  return 0;
}



undefined4 inst_149_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08095466)

undefined4 inst_149_flags_var_3(void)

{
  return 0;
}



undefined4 inst_149_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809550a)
// WARNING: Removing unreachable block (ram,0x08095517)

undefined4 inst_149_flags_var_4(void)

{
  return 0;
}



undefined4 inst_149_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080955c8)

undefined4 inst_149_flags_var_5(void)

{
  return 0;
}



undefined4 inst_149_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809566c)
// WARNING: Removing unreachable block (ram,0x08095679)

undefined4 inst_149_flags_var_6(void)

{
  return 0;
}



undefined4 inst_149_values_var_7(void)

{
  return 0;
}



undefined4 inst_149_flags_var_7(void)

{
  return 0;
}



undefined4 inst_149_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080957ce)
// WARNING: Removing unreachable block (ram,0x080957db)

undefined4 inst_149_flags_var_8(void)

{
  return 0;
}



undefined4 inst_149_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809587f)
// WARNING: Removing unreachable block (ram,0x0809588c)

undefined4 inst_149_flags_var_9(void)

{
  return 0;
}



undefined4 inst_150_values_var_0(void)

{
  return 0xffffffd0;
}



// WARNING: Removing unreachable block (ram,0x08095930)

undefined4 inst_150_flags_var_0(void)

{
  return 0;
}



undefined4 inst_150_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080959e1)
// WARNING: Removing unreachable block (ram,0x080959ee)

undefined4 inst_150_flags_var_1(void)

{
  return 0;
}



undefined4 inst_150_values_var_2(void)

{
  return 0xffffffab;
}



// WARNING: Removing unreachable block (ram,0x08095a92)

undefined4 inst_150_flags_var_2(void)

{
  return 0;
}



undefined4 inst_150_values_var_3(void)

{
  return 0xfffffff3;
}



// WARNING: Removing unreachable block (ram,0x08095b43)

undefined4 inst_150_flags_var_3(void)

{
  return 0;
}



undefined4 inst_150_values_var_4(void)

{
  return 0;
}



undefined4 inst_150_flags_var_4(void)

{
  return 0;
}



undefined4 inst_150_values_var_5(void)

{
  return 0xffff8500;
}



// WARNING: Removing unreachable block (ram,0x08095ca5)

undefined4 inst_150_flags_var_5(void)

{
  return 0;
}



undefined4 inst_150_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08095d56)
// WARNING: Removing unreachable block (ram,0x08095d63)

undefined4 inst_150_flags_var_6(void)

{
  return 0;
}



undefined4 inst_150_values_var_7(void)

{
  return 0xffffff9e;
}



// WARNING: Removing unreachable block (ram,0x08095e07)

undefined4 inst_150_flags_var_7(void)

{
  return 0;
}



undefined4 inst_150_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08095eb8)

undefined4 inst_150_flags_var_8(void)

{
  return 0;
}



undefined4 inst_150_values_var_9(void)

{
  return 0xfffffffb;
}



// WARNING: Removing unreachable block (ram,0x08095f76)

undefined4 inst_150_flags_var_9(void)

{
  return 0;
}



undefined4 inst_151_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809601a)
// WARNING: Removing unreachable block (ram,0x08096027)

undefined4 inst_151_flags_var_0(void)

{
  return 0;
}



undefined4 inst_151_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080960cb)
// WARNING: Removing unreachable block (ram,0x080960d8)

undefined4 inst_151_flags_var_1(void)

{
  return 0;
}



undefined4 inst_151_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08096189)

undefined4 inst_151_flags_var_2(void)

{
  return 0;
}



undefined4 inst_151_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809622d)
// WARNING: Removing unreachable block (ram,0x0809623a)

undefined4 inst_151_flags_var_3(void)

{
  return 0;
}



undefined4 inst_151_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080962de)
// WARNING: Removing unreachable block (ram,0x080962eb)

undefined4 inst_151_flags_var_4(void)

{
  return 0;
}



undefined4 inst_151_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809639c)

undefined4 inst_151_flags_var_5(void)

{
  return 0;
}



undefined4 inst_151_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809644d)

undefined4 inst_151_flags_var_6(void)

{
  return 0;
}



undefined4 inst_151_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080964fe)

undefined4 inst_151_flags_var_7(void)

{
  return 0;
}



undefined4 inst_151_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080965a2)
// WARNING: Removing unreachable block (ram,0x080965af)

undefined4 inst_151_flags_var_8(void)

{
  return 0;
}



undefined4 inst_151_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08096653)
// WARNING: Removing unreachable block (ram,0x08096660)

undefined4 inst_151_flags_var_9(void)

{
  return 0;
}



undefined4 inst_152_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08096704)
// WARNING: Removing unreachable block (ram,0x08096711)

undefined4 inst_152_flags_var_0(void)

{
  return 0;
}



undefined4 inst_152_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080967b5)

undefined4 inst_152_flags_var_1(void)

{
  return 0;
}



undefined4 inst_152_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08096866)

undefined4 inst_152_flags_var_2(void)

{
  return 0;
}



undefined4 inst_152_values_var_3(void)

{
  return 0;
}



undefined4 inst_152_flags_var_3(void)

{
  return 0;
}



undefined4 inst_152_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080969d5)

undefined4 inst_152_flags_var_4(void)

{
  return 0;
}



undefined4 inst_152_values_var_5(void)

{
  return 0;
}



undefined4 inst_152_flags_var_5(void)

{
  return 0;
}



undefined4 inst_152_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08096b2a)
// WARNING: Removing unreachable block (ram,0x08096b37)

undefined4 inst_152_flags_var_6(void)

{
  return 0;
}



undefined4 inst_152_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08096bdb)

undefined4 inst_152_flags_var_7(void)

{
  return 0;
}



undefined4 inst_152_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08096c99)

undefined4 inst_152_flags_var_8(void)

{
  return 0;
}



undefined4 inst_152_values_var_9(void)

{
  return 0;
}



undefined4 inst_152_flags_var_9(void)

{
  return 0;
}



undefined4 inst_153_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08096dee)
// WARNING: Removing unreachable block (ram,0x08096dfb)

undefined4 inst_153_flags_var_0(void)

{
  return 0;
}



undefined4 inst_153_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08096eac)

undefined4 inst_153_flags_var_1(void)

{
  return 0xfffffffe;
}



undefined4 inst_153_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08096f50)
// WARNING: Removing unreachable block (ram,0x08096f5d)

undefined4 inst_153_flags_var_2(void)

{
  return 0xfffffffe;
}



undefined4 inst_153_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08097001)
// WARNING: Removing unreachable block (ram,0x0809700e)

undefined4 inst_153_flags_var_3(void)

{
  return 0xfffffffe;
}



undefined4 inst_153_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080970bf)

undefined4 inst_153_flags_var_4(void)

{
  return 0;
}



undefined4 inst_153_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08097170)

undefined4 inst_153_flags_var_5(void)

{
  return 0xfffffffe;
}



undefined4 inst_153_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08097221)

undefined4 inst_153_flags_var_6(void)

{
  return 0xfffffffe;
}



undefined4 inst_153_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080972d2)

undefined4 inst_153_flags_var_7(void)

{
  return 0;
}



undefined4 inst_153_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08097376)
// WARNING: Removing unreachable block (ram,0x08097383)

undefined4 inst_153_flags_var_8(void)

{
  return 0xfffffffe;
}



undefined4 inst_153_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08097434)

undefined4 inst_153_flags_var_9(void)

{
  return 0xfffffffe;
}



undefined4 inst_154_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080974da)
// WARNING: Removing unreachable block (ram,0x080974e7)

undefined4 inst_154_flags_var_0(void)

{
  return 0;
}



undefined4 inst_154_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809759a)

undefined4 inst_154_flags_var_1(void)

{
  return 0;
}



undefined4 inst_154_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08097640)
// WARNING: Removing unreachable block (ram,0x0809764d)

undefined4 inst_154_flags_var_2(void)

{
  return 0;
}



undefined4 inst_154_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08097700)

undefined4 inst_154_flags_var_3(void)

{
  return 0;
}



undefined4 inst_154_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080977a6)

undefined4 inst_154_flags_var_4(void)

{
  return 0;
}



undefined4 inst_154_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08097859)

undefined4 inst_154_flags_var_5(void)

{
  return 0;
}



undefined4 inst_154_values_var_6(void)

{
  return 0;
}



undefined4 inst_154_flags_var_6(void)

{
  return 0;
}



undefined4 inst_154_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080979bf)

undefined4 inst_154_flags_var_7(void)

{
  return 0;
}



undefined4 inst_154_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08097a72)

undefined4 inst_154_flags_var_8(void)

{
  return 0;
}



undefined4 inst_154_values_var_9(void)

{
  return 0;
}



undefined4 inst_154_flags_var_9(void)

{
  return 0;
}



undefined4 inst_155_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08097bd8)

undefined4 inst_155_flags_var_0(void)

{
  return 0;
}



undefined4 inst_155_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08097c8b)

undefined4 inst_155_flags_var_1(void)

{
  return 0;
}



undefined4 inst_155_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08097d4b)

undefined4 inst_155_flags_var_2(void)

{
  return 0;
}



undefined4 inst_155_values_var_3(void)

{
  return 0;
}



undefined4 inst_155_flags_var_3(void)

{
  return 0;
}



undefined4 inst_155_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08097ea4)
// WARNING: Removing unreachable block (ram,0x08097eb1)

undefined4 inst_155_flags_var_4(void)

{
  return 0;
}



undefined4 inst_155_values_var_5(void)

{
  return 0;
}



undefined4 inst_155_flags_var_5(void)

{
  return 0;
}



undefined4 inst_155_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08098017)

undefined4 inst_155_flags_var_6(void)

{
  return 0;
}



undefined4 inst_155_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080980ca)

undefined4 inst_155_flags_var_7(void)

{
  return 0;
}



undefined4 inst_155_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08098170)

undefined4 inst_155_flags_var_8(void)

{
  return 0;
}



undefined4 inst_155_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08098223)

undefined4 inst_155_flags_var_9(void)

{
  return 0;
}



undefined4 inst_156_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080982d6)
// WARNING: Removing unreachable block (ram,0x080982e3)

undefined4 inst_156_flags_var_0(void)

{
  return 0;
}



undefined4 inst_156_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08098389)
// WARNING: Removing unreachable block (ram,0x08098396)

undefined4 inst_156_flags_var_1(void)

{
  return 0;
}



undefined4 inst_156_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08098449)

undefined4 inst_156_flags_var_2(void)

{
  return 0;
}



undefined4 inst_156_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080984fc)

undefined4 inst_156_flags_var_3(void)

{
  return 0;
}



undefined4 inst_156_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080985af)

undefined4 inst_156_flags_var_4(void)

{
  return 0;
}



undefined4 inst_156_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08098655)
// WARNING: Removing unreachable block (ram,0x08098662)

undefined4 inst_156_flags_var_5(void)

{
  return 0;
}



undefined4 inst_156_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08098715)

undefined4 inst_156_flags_var_6(void)

{
  return 0;
}



undefined4 inst_156_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080987c8)

undefined4 inst_156_flags_var_7(void)

{
  return 0;
}



undefined4 inst_156_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809886e)
// WARNING: Removing unreachable block (ram,0x0809887b)

undefined4 inst_156_flags_var_8(void)

{
  return 0;
}



undefined4 inst_156_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08098921)
// WARNING: Removing unreachable block (ram,0x0809892e)

undefined4 inst_156_flags_var_9(void)

{
  return 0;
}



undefined4 inst_157_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080989d4)

undefined4 inst_157_flags_var_0(void)

{
  return 0;
}



undefined4 inst_157_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08098a87)

undefined4 inst_157_flags_var_1(void)

{
  return 0;
}



undefined4 inst_157_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08098b47)

undefined4 inst_157_flags_var_2(void)

{
  return 0;
}



undefined4 inst_157_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08098bed)
// WARNING: Removing unreachable block (ram,0x08098bfa)

undefined4 inst_157_flags_var_3(void)

{
  return 0;
}



undefined4 inst_157_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08098ca0)
// WARNING: Removing unreachable block (ram,0x08098cad)

undefined4 inst_157_flags_var_4(void)

{
  return 0;
}



undefined4 inst_157_values_var_5(void)

{
  return 0;
}



undefined4 inst_157_flags_var_5(void)

{
  return 0;
}



undefined4 inst_157_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08098e06)
// WARNING: Removing unreachable block (ram,0x08098e13)

undefined4 inst_157_flags_var_6(void)

{
  return 0;
}



undefined4 inst_157_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08098ec6)

undefined4 inst_157_flags_var_7(void)

{
  return 0;
}



undefined4 inst_157_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08098f6c)
// WARNING: Removing unreachable block (ram,0x08098f79)

undefined4 inst_157_flags_var_8(void)

{
  return 0;
}



undefined4 inst_157_values_var_9(void)

{
  return 0;
}



undefined4 inst_157_flags_var_9(void)

{
  return 0;
}



undefined4 inst_158_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080990df)

undefined4 inst_158_flags_var_0(void)

{
  return 0xfffffffe;
}



undefined4 inst_158_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08099192)

undefined4 inst_158_flags_var_1(void)

{
  return 0xfffffffe;
}



undefined4 inst_158_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08099238)
// WARNING: Removing unreachable block (ram,0x08099245)

undefined4 inst_158_flags_var_2(void)

{
  return 0;
}



undefined4 inst_158_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080992f8)

undefined4 inst_158_flags_var_3(void)

{
  return 0xfffffffe;
}



undefined4 inst_158_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080993ab)

undefined4 inst_158_flags_var_4(void)

{
  return 0xfffffffe;
}



undefined4 inst_158_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08099451)
// WARNING: Removing unreachable block (ram,0x0809945e)

undefined4 inst_158_flags_var_5(void)

{
  return 0;
}



undefined4 inst_158_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08099504)
// WARNING: Removing unreachable block (ram,0x08099511)

undefined4 inst_158_flags_var_6(void)

{
  return 0;
}



undefined4 inst_158_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080995c4)

undefined4 inst_158_flags_var_7(void)

{
  return 0xfffffffe;
}



undefined4 inst_158_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08099677)

undefined4 inst_158_flags_var_8(void)

{
  return 0xfffffffe;
}



undefined4 inst_158_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809971d)
// WARNING: Removing unreachable block (ram,0x0809972a)

undefined4 inst_158_flags_var_9(void)

{
  return 0xfffffffe;
}



undefined4 inst_159_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080997db)

undefined4 inst_159_flags_var_0(void)

{
  return 0;
}



undefined4 inst_159_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809988c)

undefined4 inst_159_flags_var_1(void)

{
  return 0;
}



undefined4 inst_159_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08099930)
// WARNING: Removing unreachable block (ram,0x0809993d)

undefined4 inst_159_flags_var_2(void)

{
  return 0;
}



undefined4 inst_159_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080999e1)
// WARNING: Removing unreachable block (ram,0x080999ee)

undefined4 inst_159_flags_var_3(void)

{
  return 0;
}



undefined4 inst_159_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08099a92)
// WARNING: Removing unreachable block (ram,0x08099a9f)

undefined4 inst_159_flags_var_4(void)

{
  return 0;
}



undefined4 inst_159_values_var_5(void)

{
  return 0;
}



undefined4 inst_159_flags_var_5(void)

{
  return 0;
}



undefined4 inst_159_values_var_6(void)

{
  return 0;
}



undefined4 inst_159_flags_var_6(void)

{
  return 0;
}



undefined4 inst_159_values_var_7(void)

{
  return 0;
}



undefined4 inst_159_flags_var_7(void)

{
  return 0;
}



undefined4 inst_159_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08099d63)

undefined4 inst_159_flags_var_8(void)

{
  return 0;
}



undefined4 inst_159_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08099e07)
// WARNING: Removing unreachable block (ram,0x08099e14)

undefined4 inst_159_flags_var_9(void)

{
  return 0;
}



undefined4 inst_160_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08099ec5)

undefined4 inst_160_flags_var_0(void)

{
  return 0;
}



undefined4 inst_160_values_var_1(void)

{
  return 0;
}



undefined4 inst_160_flags_var_1(void)

{
  return 0;
}



undefined4 inst_160_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809a01a)
// WARNING: Removing unreachable block (ram,0x0809a027)

undefined4 inst_160_flags_var_2(void)

{
  return 0;
}



undefined4 inst_160_values_var_3(void)

{
  return 0;
}



undefined4 inst_160_flags_var_3(void)

{
  return 0;
}



undefined4 inst_160_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809a17c)

undefined4 inst_160_flags_var_4(void)

{
  return 0;
}



undefined4 inst_160_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809a22d)

undefined4 inst_160_flags_var_5(void)

{
  return 0;
}



undefined4 inst_160_values_var_6(void)

{
  return 0;
}



undefined4 inst_160_flags_var_6(void)

{
  return 0;
}



undefined4 inst_160_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809a38f)

undefined4 inst_160_flags_var_7(void)

{
  return 0;
}



undefined4 inst_160_values_var_8(void)

{
  return 0;
}



undefined4 inst_160_flags_var_8(void)

{
  return 0;
}



undefined4 inst_160_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809a4f1)
// WARNING: Removing unreachable block (ram,0x0809a4fe)

undefined4 inst_160_flags_var_9(void)

{
  return 0;
}



undefined4 inst_161_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809a5af)

undefined4 inst_161_flags_var_0(void)

{
  return 0;
}



undefined4 inst_161_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809a660)

undefined4 inst_161_flags_var_1(void)

{
  return 0;
}



undefined4 inst_161_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809a711)

undefined4 inst_161_flags_var_2(void)

{
  return 0;
}



undefined4 inst_161_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809a7b5)
// WARNING: Removing unreachable block (ram,0x0809a7c2)

undefined4 inst_161_flags_var_3(void)

{
  return 0;
}



undefined4 inst_161_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809a873)

undefined4 inst_161_flags_var_4(void)

{
  return 0;
}



undefined4 inst_161_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809a917)
// WARNING: Removing unreachable block (ram,0x0809a924)

undefined4 inst_161_flags_var_5(void)

{
  return 0;
}



undefined4 inst_161_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809a9c8)
// WARNING: Removing unreachable block (ram,0x0809a9d5)

undefined4 inst_161_flags_var_6(void)

{
  return 0;
}



undefined4 inst_161_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809aa79)
// WARNING: Removing unreachable block (ram,0x0809aa86)

undefined4 inst_161_flags_var_7(void)

{
  return 0;
}



undefined4 inst_161_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809ab37)

undefined4 inst_161_flags_var_8(void)

{
  return 0;
}



undefined4 inst_161_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809abdb)
// WARNING: Removing unreachable block (ram,0x0809abe8)

undefined4 inst_161_flags_var_9(void)

{
  return 0;
}



undefined4 inst_162_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809ac8c)

undefined4 inst_162_flags_var_0(void)

{
  return 0;
}



undefined4 inst_162_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809ad3d)

undefined4 inst_162_flags_var_1(void)

{
  return 0;
}



undefined4 inst_162_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809adee)
// WARNING: Removing unreachable block (ram,0x0809adfb)

undefined4 inst_162_flags_var_2(void)

{
  return 0;
}



undefined4 inst_162_values_var_3(void)

{
  return 0;
}



undefined4 inst_162_flags_var_3(void)

{
  return 0;
}



undefined4 inst_162_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809af50)
// WARNING: Removing unreachable block (ram,0x0809af5d)

undefined4 inst_162_flags_var_4(void)

{
  return 0;
}



undefined4 inst_162_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809b001)

undefined4 inst_162_flags_var_5(void)

{
  return 0;
}



undefined4 inst_162_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809b0b2)
// WARNING: Removing unreachable block (ram,0x0809b0bf)

undefined4 inst_162_flags_var_6(void)

{
  return 0;
}



undefined4 inst_162_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809b163)
// WARNING: Removing unreachable block (ram,0x0809b170)

undefined4 inst_162_flags_var_7(void)

{
  return 0;
}



undefined4 inst_162_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809b214)
// WARNING: Removing unreachable block (ram,0x0809b221)

undefined4 inst_162_flags_var_8(void)

{
  return 0;
}



undefined4 inst_162_values_var_9(void)

{
  return 0;
}



undefined4 inst_162_flags_var_9(void)

{
  return 0;
}



undefined4 inst_163_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809b383)

undefined4 inst_163_flags_var_0(void)

{
  return 0xfffffffe;
}



undefined4 inst_163_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809b434)

undefined4 inst_163_flags_var_1(void)

{
  return 0xfffffffe;
}



undefined4 inst_163_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809b4e5)

undefined4 inst_163_flags_var_2(void)

{
  return 0;
}



undefined4 inst_163_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809b596)

undefined4 inst_163_flags_var_3(void)

{
  return 0xfffffffe;
}



undefined4 inst_163_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809b63a)
// WARNING: Removing unreachable block (ram,0x0809b647)

undefined4 inst_163_flags_var_4(void)

{
  return 0xfffffffe;
}



undefined4 inst_163_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809b6eb)
// WARNING: Removing unreachable block (ram,0x0809b6f8)

undefined4 inst_163_flags_var_5(void)

{
  return 0xfffffffe;
}



undefined4 inst_163_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809b7a9)

undefined4 inst_163_flags_var_6(void)

{
  return 0;
}



undefined4 inst_163_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809b84d)
// WARNING: Removing unreachable block (ram,0x0809b85a)

undefined4 inst_163_flags_var_7(void)

{
  return 0;
}



undefined4 inst_163_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809b90b)

undefined4 inst_163_flags_var_8(void)

{
  return 0;
}



undefined4 inst_163_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809b9bc)

undefined4 inst_163_flags_var_9(void)

{
  return 0xfffffffe;
}



undefined4 inst_164_values_var_0(void)

{
  return 0;
}



undefined4 inst_164_flags_var_0(void)

{
  return 0;
}



undefined4 inst_164_values_var_1(void)

{
  return 0;
}



undefined4 inst_164_flags_var_1(void)

{
  return 0;
}



undefined4 inst_164_values_var_2(void)

{
  return 0;
}



undefined4 inst_164_flags_var_2(void)

{
  return 0;
}



undefined4 inst_164_values_var_3(void)

{
  return 0;
}



undefined4 inst_164_flags_var_3(void)

{
  return 0;
}



undefined4 inst_164_values_var_4(void)

{
  return 0;
}



undefined4 inst_164_flags_var_4(void)

{
  return 0;
}



undefined4 inst_164_values_var_5(void)

{
  return 0;
}



undefined4 inst_164_flags_var_5(void)

{
  return 0;
}



undefined4 inst_164_values_var_6(void)

{
  return 0;
}



undefined4 inst_164_flags_var_6(void)

{
  return 0;
}



undefined4 inst_164_values_var_7(void)

{
  return 0;
}



undefined4 inst_164_flags_var_7(void)

{
  return 0;
}



undefined4 inst_164_values_var_8(void)

{
  return 0;
}



undefined4 inst_164_flags_var_8(void)

{
  return 0;
}



undefined4 inst_164_values_var_9(void)

{
  return 0;
}



undefined4 inst_164_flags_var_9(void)

{
  return 0;
}



undefined4 inst_165_values_var_0(void)

{
  return 0;
}



undefined4 inst_165_flags_var_0(void)

{
  return 0;
}



undefined4 inst_165_values_var_1(void)

{
  return 0;
}



undefined4 inst_165_flags_var_1(void)

{
  return 0;
}



undefined4 inst_165_values_var_2(void)

{
  return 0;
}



undefined4 inst_165_flags_var_2(void)

{
  return 0;
}



undefined4 inst_165_values_var_3(void)

{
  return 0;
}



undefined4 inst_165_flags_var_3(void)

{
  return 0;
}



undefined4 inst_165_values_var_4(void)

{
  return 0;
}



undefined4 inst_165_flags_var_4(void)

{
  return 0;
}



undefined4 inst_165_values_var_5(void)

{
  return 0;
}



undefined4 inst_165_flags_var_5(void)

{
  return 0;
}



undefined4 inst_165_values_var_6(void)

{
  return 0;
}



undefined4 inst_165_flags_var_6(void)

{
  return 0;
}



undefined4 inst_165_values_var_7(void)

{
  return 0;
}



undefined4 inst_165_flags_var_7(void)

{
  return 0;
}



undefined4 inst_165_values_var_8(void)

{
  return 0;
}



undefined4 inst_165_flags_var_8(void)

{
  return 0;
}



undefined4 inst_165_values_var_9(void)

{
  return 0;
}



undefined4 inst_165_flags_var_9(void)

{
  return 0;
}



undefined4 inst_166_values_var_0(void)

{
  return 0;
}



undefined4 inst_166_flags_var_0(void)

{
  return 0;
}



undefined4 inst_166_values_var_1(void)

{
  return 0;
}



undefined4 inst_166_flags_var_1(void)

{
  return 0;
}



undefined4 inst_166_values_var_2(void)

{
  return 0;
}



undefined4 inst_166_flags_var_2(void)

{
  return 0;
}



undefined4 inst_166_values_var_3(void)

{
  return 0;
}



undefined4 inst_166_flags_var_3(void)

{
  return 0;
}



undefined4 inst_166_values_var_4(void)

{
  return 0;
}



undefined4 inst_166_flags_var_4(void)

{
  return 0;
}



undefined4 inst_166_values_var_5(void)

{
  return 0;
}



undefined4 inst_166_flags_var_5(void)

{
  return 0;
}



undefined4 inst_166_values_var_6(void)

{
  return 0;
}



undefined4 inst_166_flags_var_6(void)

{
  return 0;
}



undefined4 inst_166_values_var_7(void)

{
  return 0;
}



undefined4 inst_166_flags_var_7(void)

{
  return 0;
}



undefined4 inst_166_values_var_8(void)

{
  return 0;
}



undefined4 inst_166_flags_var_8(void)

{
  return 0;
}



undefined4 inst_166_values_var_9(void)

{
  return 0;
}



undefined4 inst_166_flags_var_9(void)

{
  return 0;
}



undefined4 inst_167_values_var_0(void)

{
  return 0;
}



undefined4 inst_167_flags_var_0(void)

{
  return 0;
}



undefined4 inst_167_values_var_1(void)

{
  return 0;
}



undefined4 inst_167_flags_var_1(void)

{
  return 0;
}



undefined4 inst_167_values_var_2(void)

{
  return 0;
}



undefined4 inst_167_flags_var_2(void)

{
  return 0;
}



undefined4 inst_167_values_var_3(void)

{
  return 0;
}



undefined4 inst_167_flags_var_3(void)

{
  return 0;
}



undefined4 inst_167_values_var_4(void)

{
  return 0;
}



undefined4 inst_167_flags_var_4(void)

{
  return 0;
}



undefined4 inst_167_values_var_5(void)

{
  return 0;
}



undefined4 inst_167_flags_var_5(void)

{
  return 0;
}



undefined4 inst_167_values_var_6(void)

{
  return 0;
}



undefined4 inst_167_flags_var_6(void)

{
  return 0;
}



undefined4 inst_167_values_var_7(void)

{
  return 0;
}



undefined4 inst_167_flags_var_7(void)

{
  return 0;
}



undefined4 inst_167_values_var_8(void)

{
  return 0;
}



undefined4 inst_167_flags_var_8(void)

{
  return 0;
}



undefined4 inst_167_values_var_9(void)

{
  return 0;
}



undefined4 inst_167_flags_var_9(void)

{
  return 0;
}



undefined4 inst_168_values_var_0(void)

{
  return 0;
}



undefined4 inst_168_flags_var_0(void)

{
  return 0;
}



undefined4 inst_168_values_var_1(void)

{
  return 0;
}



undefined4 inst_168_flags_var_1(void)

{
  return 0;
}



undefined4 inst_168_values_var_2(void)

{
  return 0;
}



undefined4 inst_168_flags_var_2(void)

{
  return 0;
}



undefined4 inst_168_values_var_3(void)

{
  return 0;
}



undefined4 inst_168_flags_var_3(void)

{
  return 0;
}



undefined4 inst_168_values_var_4(void)

{
  return 0;
}



undefined4 inst_168_flags_var_4(void)

{
  return 0;
}



undefined4 inst_168_values_var_5(void)

{
  return 0;
}



undefined4 inst_168_flags_var_5(void)

{
  return 0;
}



undefined4 inst_168_values_var_6(void)

{
  return 0;
}



undefined4 inst_168_flags_var_6(void)

{
  return 0;
}



undefined4 inst_168_values_var_7(void)

{
  return 0;
}



undefined4 inst_168_flags_var_7(void)

{
  return 0;
}



undefined4 inst_168_values_var_8(void)

{
  return 0;
}



undefined4 inst_168_flags_var_8(void)

{
  return 0;
}



undefined4 inst_168_values_var_9(void)

{
  return 0;
}



undefined4 inst_168_flags_var_9(void)

{
  return 0;
}



undefined4 inst_169_values_var_0(void)

{
  return 0;
}



undefined4 inst_169_flags_var_0(void)

{
  return 0;
}



undefined4 inst_169_values_var_1(void)

{
  return 0;
}



undefined4 inst_169_flags_var_1(void)

{
  return 0;
}



undefined4 inst_169_values_var_2(void)

{
  return 0;
}



undefined4 inst_169_flags_var_2(void)

{
  return 0;
}



undefined4 inst_169_values_var_3(void)

{
  return 0;
}



undefined4 inst_169_flags_var_3(void)

{
  return 0;
}



undefined4 inst_169_values_var_4(void)

{
  return 0;
}



undefined4 inst_169_flags_var_4(void)

{
  return 0;
}



undefined4 inst_169_values_var_5(void)

{
  return 0;
}



undefined4 inst_169_flags_var_5(void)

{
  return 0;
}



undefined4 inst_169_values_var_6(void)

{
  return 0;
}



undefined4 inst_169_flags_var_6(void)

{
  return 0;
}



undefined4 inst_169_values_var_7(void)

{
  return 0;
}



undefined4 inst_169_flags_var_7(void)

{
  return 0;
}



undefined4 inst_169_values_var_8(void)

{
  return 0;
}



undefined4 inst_169_flags_var_8(void)

{
  return 0;
}



undefined4 inst_169_values_var_9(void)

{
  return 0;
}



undefined4 inst_169_flags_var_9(void)

{
  return 0;
}



undefined4 inst_170_values_var_0(void)

{
  return 0;
}



undefined4 inst_170_flags_var_0(void)

{
  return 0;
}



undefined4 inst_170_values_var_1(void)

{
  return 0;
}



undefined4 inst_170_flags_var_1(void)

{
  return 0;
}



undefined4 inst_170_values_var_2(void)

{
  return 0;
}



undefined4 inst_170_flags_var_2(void)

{
  return 0;
}



undefined4 inst_170_values_var_3(void)

{
  return 0;
}



undefined4 inst_170_flags_var_3(void)

{
  return 0;
}



undefined4 inst_170_values_var_4(void)

{
  return 0;
}



undefined4 inst_170_flags_var_4(void)

{
  return 0;
}



undefined4 inst_170_values_var_5(void)

{
  return 0;
}



undefined4 inst_170_flags_var_5(void)

{
  return 0;
}



undefined4 inst_170_values_var_6(void)

{
  return 0;
}



undefined4 inst_170_flags_var_6(void)

{
  return 0;
}



undefined4 inst_170_values_var_7(void)

{
  return 0;
}



undefined4 inst_170_flags_var_7(void)

{
  return 0;
}



undefined4 inst_170_values_var_8(void)

{
  return 0;
}



undefined4 inst_170_flags_var_8(void)

{
  return 0;
}



undefined4 inst_170_values_var_9(void)

{
  return 0;
}



undefined4 inst_170_flags_var_9(void)

{
  return 0;
}



undefined4 inst_171_values_var_0(void)

{
  return 0;
}



undefined4 inst_171_flags_var_0(void)

{
  return 0;
}



undefined4 inst_171_values_var_1(void)

{
  return 0;
}



undefined4 inst_171_flags_var_1(void)

{
  return 0;
}



undefined4 inst_171_values_var_2(void)

{
  return 0;
}



undefined4 inst_171_flags_var_2(void)

{
  return 0;
}



undefined4 inst_171_values_var_3(void)

{
  return 0;
}



undefined4 inst_171_flags_var_3(void)

{
  return 0;
}



undefined4 inst_171_values_var_4(void)

{
  return 0;
}



undefined4 inst_171_flags_var_4(void)

{
  return 0;
}



undefined4 inst_171_values_var_5(void)

{
  return 0;
}



undefined4 inst_171_flags_var_5(void)

{
  return 0;
}



undefined4 inst_171_values_var_6(void)

{
  return 0;
}



undefined4 inst_171_flags_var_6(void)

{
  return 0;
}



undefined4 inst_171_values_var_7(void)

{
  return 0;
}



undefined4 inst_171_flags_var_7(void)

{
  return 0;
}



undefined4 inst_171_values_var_8(void)

{
  return 0;
}



undefined4 inst_171_flags_var_8(void)

{
  return 0;
}



undefined4 inst_171_values_var_9(void)

{
  return 0;
}



undefined4 inst_171_flags_var_9(void)

{
  return 0;
}



undefined4 inst_172_values_var_0(void)

{
  return 0;
}



undefined4 inst_172_flags_var_0(void)

{
  return 0;
}



undefined4 inst_172_values_var_1(void)

{
  return 0;
}



undefined4 inst_172_flags_var_1(void)

{
  return 0;
}



undefined4 inst_172_values_var_2(void)

{
  return 0;
}



undefined4 inst_172_flags_var_2(void)

{
  return 0;
}



undefined4 inst_172_values_var_3(void)

{
  return 0;
}



undefined4 inst_172_flags_var_3(void)

{
  return 0;
}



undefined4 inst_172_values_var_4(void)

{
  return 0;
}



undefined4 inst_172_flags_var_4(void)

{
  return 0;
}



undefined4 inst_172_values_var_5(void)

{
  return 0;
}



undefined4 inst_172_flags_var_5(void)

{
  return 0;
}



undefined4 inst_172_values_var_6(void)

{
  return 0;
}



undefined4 inst_172_flags_var_6(void)

{
  return 0;
}



undefined4 inst_172_values_var_7(void)

{
  return 0;
}



undefined4 inst_172_flags_var_7(void)

{
  return 0;
}



undefined4 inst_172_values_var_8(void)

{
  return 0;
}



undefined4 inst_172_flags_var_8(void)

{
  return 0;
}



undefined4 inst_172_values_var_9(void)

{
  return 0;
}



undefined4 inst_172_flags_var_9(void)

{
  return 0;
}



undefined4 inst_173_values_var_0(void)

{
  return 0;
}



undefined4 inst_173_flags_var_0(void)

{
  return 0;
}



undefined4 inst_173_values_var_1(void)

{
  return 0;
}



undefined4 inst_173_flags_var_1(void)

{
  return 0;
}



undefined4 inst_173_values_var_2(void)

{
  return 0;
}



undefined4 inst_173_flags_var_2(void)

{
  return 0;
}



undefined4 inst_173_values_var_3(void)

{
  return 0;
}



undefined4 inst_173_flags_var_3(void)

{
  return 0;
}



undefined4 inst_173_values_var_4(void)

{
  return 0;
}



undefined4 inst_173_flags_var_4(void)

{
  return 0;
}



undefined4 inst_173_values_var_5(void)

{
  return 0;
}



undefined4 inst_173_flags_var_5(void)

{
  return 0;
}



undefined4 inst_173_values_var_6(void)

{
  return 0;
}



undefined4 inst_173_flags_var_6(void)

{
  return 0;
}



undefined4 inst_173_values_var_7(void)

{
  return 0;
}



undefined4 inst_173_flags_var_7(void)

{
  return 0;
}



undefined4 inst_173_values_var_8(void)

{
  return 0;
}



undefined4 inst_173_flags_var_8(void)

{
  return 0;
}



undefined4 inst_173_values_var_9(void)

{
  return 0;
}



undefined4 inst_173_flags_var_9(void)

{
  return 0;
}



undefined4 inst_174_values_var_0(void)

{
  return 0;
}



undefined4 inst_174_flags_var_0(void)

{
  return 0;
}



undefined4 inst_174_values_var_1(void)

{
  return 0;
}



undefined4 inst_174_flags_var_1(void)

{
  return 0;
}



undefined4 inst_174_values_var_2(void)

{
  return 0;
}



undefined4 inst_174_flags_var_2(void)

{
  return 0;
}



undefined4 inst_174_values_var_3(void)

{
  return 0;
}



undefined4 inst_174_flags_var_3(void)

{
  return 0;
}



undefined4 inst_174_values_var_4(void)

{
  return 0;
}



undefined4 inst_174_flags_var_4(void)

{
  return 0;
}



undefined4 inst_174_values_var_5(void)

{
  return 0;
}



undefined4 inst_174_flags_var_5(void)

{
  return 0;
}



undefined4 inst_174_values_var_6(void)

{
  return 0;
}



undefined4 inst_174_flags_var_6(void)

{
  return 0;
}



undefined4 inst_174_values_var_7(void)

{
  return 0;
}



undefined4 inst_174_flags_var_7(void)

{
  return 0;
}



undefined4 inst_174_values_var_8(void)

{
  return 0;
}



undefined4 inst_174_flags_var_8(void)

{
  return 0;
}



undefined4 inst_174_values_var_9(void)

{
  return 0;
}



undefined4 inst_174_flags_var_9(void)

{
  return 0;
}



undefined4 inst_175_values_var_0(void)

{
  return 0;
}



undefined4 inst_175_flags_var_0(void)

{
  return 0;
}



undefined4 inst_175_values_var_1(void)

{
  return 0;
}



undefined4 inst_175_flags_var_1(void)

{
  return 0;
}



undefined4 inst_175_values_var_2(void)

{
  return 0;
}



undefined4 inst_175_flags_var_2(void)

{
  return 0;
}



undefined4 inst_175_values_var_3(void)

{
  return 0;
}



undefined4 inst_175_flags_var_3(void)

{
  return 0;
}



undefined4 inst_175_values_var_4(void)

{
  return 0;
}



undefined4 inst_175_flags_var_4(void)

{
  return 0;
}



undefined4 inst_175_values_var_5(void)

{
  return 0;
}



undefined4 inst_175_flags_var_5(void)

{
  return 0;
}



undefined4 inst_175_values_var_6(void)

{
  return 0;
}



undefined4 inst_175_flags_var_6(void)

{
  return 0;
}



undefined4 inst_175_values_var_7(void)

{
  return 0;
}



undefined4 inst_175_flags_var_7(void)

{
  return 0;
}



undefined4 inst_175_values_var_8(void)

{
  return 0;
}



undefined4 inst_175_flags_var_8(void)

{
  return 0;
}



undefined4 inst_175_values_var_9(void)

{
  return 0;
}



undefined4 inst_175_flags_var_9(void)

{
  return 0;
}



undefined4 inst_176_values_var_0(void)

{
  return 0;
}



undefined4 inst_176_flags_var_0(void)

{
  return 0;
}



undefined4 inst_176_values_var_1(void)

{
  return 0;
}



undefined4 inst_176_flags_var_1(void)

{
  return 0;
}



undefined4 inst_176_values_var_2(void)

{
  return 0;
}



undefined4 inst_176_flags_var_2(void)

{
  return 0;
}



undefined4 inst_176_values_var_3(void)

{
  return 0;
}



undefined4 inst_176_flags_var_3(void)

{
  return 0;
}



undefined4 inst_176_values_var_4(void)

{
  return 0;
}



undefined4 inst_176_flags_var_4(void)

{
  return 0;
}



undefined4 inst_176_values_var_5(void)

{
  return 0;
}



undefined4 inst_176_flags_var_5(void)

{
  return 0;
}



undefined4 inst_176_values_var_6(void)

{
  return 0;
}



undefined4 inst_176_flags_var_6(void)

{
  return 0;
}



undefined4 inst_176_values_var_7(void)

{
  return 0;
}



undefined4 inst_176_flags_var_7(void)

{
  return 0;
}



undefined4 inst_176_values_var_8(void)

{
  return 0;
}



undefined4 inst_176_flags_var_8(void)

{
  return 0;
}



undefined4 inst_176_values_var_9(void)

{
  return 0;
}



undefined4 inst_176_flags_var_9(void)

{
  return 0;
}



undefined4 inst_177_values_var_0(void)

{
  return 0;
}



undefined4 inst_177_flags_var_0(void)

{
  return 0;
}



undefined4 inst_177_values_var_1(void)

{
  return 0;
}



undefined4 inst_177_flags_var_1(void)

{
  return 0;
}



undefined4 inst_177_values_var_2(void)

{
  return 0;
}



undefined4 inst_177_flags_var_2(void)

{
  return 0;
}



undefined4 inst_177_values_var_3(void)

{
  return 0;
}



undefined4 inst_177_flags_var_3(void)

{
  return 0;
}



undefined4 inst_177_values_var_4(void)

{
  return 0;
}



undefined4 inst_177_flags_var_4(void)

{
  return 0;
}



undefined4 inst_177_values_var_5(void)

{
  return 0;
}



undefined4 inst_177_flags_var_5(void)

{
  return 0;
}



undefined4 inst_177_values_var_6(void)

{
  return 0;
}



undefined4 inst_177_flags_var_6(void)

{
  return 0;
}



undefined4 inst_177_values_var_7(void)

{
  return 0;
}



undefined4 inst_177_flags_var_7(void)

{
  return 0;
}



undefined4 inst_177_values_var_8(void)

{
  return 0;
}



undefined4 inst_177_flags_var_8(void)

{
  return 0;
}



undefined4 inst_177_values_var_9(void)

{
  return 0;
}



undefined4 inst_177_flags_var_9(void)

{
  return 0;
}



undefined4 inst_178_values_var_0(void)

{
  return 0;
}



undefined4 inst_178_flags_var_0(void)

{
  return 0;
}



undefined4 inst_178_values_var_1(void)

{
  return 0;
}



undefined4 inst_178_flags_var_1(void)

{
  return 0;
}



undefined4 inst_178_values_var_2(void)

{
  return 0;
}



undefined4 inst_178_flags_var_2(void)

{
  return 0;
}



undefined4 inst_178_values_var_3(void)

{
  return 0;
}



undefined4 inst_178_flags_var_3(void)

{
  return 0;
}



undefined4 inst_178_values_var_4(void)

{
  return 0;
}



undefined4 inst_178_flags_var_4(void)

{
  return 0;
}



undefined4 inst_178_values_var_5(void)

{
  return 0;
}



undefined4 inst_178_flags_var_5(void)

{
  return 0;
}



undefined4 inst_178_values_var_6(void)

{
  return 0;
}



undefined4 inst_178_flags_var_6(void)

{
  return 0;
}



undefined4 inst_178_values_var_7(void)

{
  return 0;
}



undefined4 inst_178_flags_var_7(void)

{
  return 0;
}



undefined4 inst_178_values_var_8(void)

{
  return 0;
}



undefined4 inst_178_flags_var_8(void)

{
  return 0;
}



undefined4 inst_178_values_var_9(void)

{
  return 0;
}



undefined4 inst_178_flags_var_9(void)

{
  return 0;
}



undefined4 inst_179_values_var_0(void)

{
  return 0;
}



undefined4 inst_179_flags_var_0(void)

{
  return 0;
}



undefined4 inst_179_values_var_1(void)

{
  return 0;
}



undefined4 inst_179_flags_var_1(void)

{
  return 0;
}



undefined4 inst_179_values_var_2(void)

{
  return 0;
}



undefined4 inst_179_flags_var_2(void)

{
  return 0;
}



undefined4 inst_179_values_var_3(void)

{
  return 0;
}



undefined4 inst_179_flags_var_3(void)

{
  return 0;
}



undefined4 inst_179_values_var_4(void)

{
  return 0;
}



undefined4 inst_179_flags_var_4(void)

{
  return 0;
}



undefined4 inst_179_values_var_5(void)

{
  return 0;
}



undefined4 inst_179_flags_var_5(void)

{
  return 0;
}



undefined4 inst_179_values_var_6(void)

{
  return 0;
}



undefined4 inst_179_flags_var_6(void)

{
  return 0;
}



undefined4 inst_179_values_var_7(void)

{
  return 0;
}



undefined4 inst_179_flags_var_7(void)

{
  return 0;
}



undefined4 inst_179_values_var_8(void)

{
  return 0;
}



undefined4 inst_179_flags_var_8(void)

{
  return 0;
}



undefined4 inst_179_values_var_9(void)

{
  return 0;
}



undefined4 inst_179_flags_var_9(void)

{
  return 0;
}



undefined4 inst_180_values_var_0(void)

{
  return 0;
}



undefined4 inst_180_flags_var_0(void)

{
  return 0;
}



undefined4 inst_180_values_var_1(void)

{
  return 0;
}



undefined4 inst_180_flags_var_1(void)

{
  return 0;
}



undefined4 inst_180_values_var_2(void)

{
  return 0;
}



undefined4 inst_180_flags_var_2(void)

{
  return 0;
}



undefined4 inst_180_values_var_3(void)

{
  return 0;
}



undefined4 inst_180_flags_var_3(void)

{
  return 0;
}



undefined4 inst_180_values_var_4(void)

{
  return 0;
}



undefined4 inst_180_flags_var_4(void)

{
  return 0;
}



undefined4 inst_180_values_var_5(void)

{
  return 0;
}



undefined4 inst_180_flags_var_5(void)

{
  return 0;
}



undefined4 inst_180_values_var_6(void)

{
  return 0;
}



undefined4 inst_180_flags_var_6(void)

{
  return 0;
}



undefined4 inst_180_values_var_7(void)

{
  return 0;
}



undefined4 inst_180_flags_var_7(void)

{
  return 0;
}



undefined4 inst_180_values_var_8(void)

{
  return 0;
}



undefined4 inst_180_flags_var_8(void)

{
  return 0;
}



undefined4 inst_180_values_var_9(void)

{
  return 0;
}



undefined4 inst_180_flags_var_9(void)

{
  return 0;
}



undefined4 inst_181_values_var_0(void)

{
  return 0;
}



undefined4 inst_181_flags_var_0(void)

{
  return 0;
}



undefined4 inst_181_values_var_1(void)

{
  return 0;
}



undefined4 inst_181_flags_var_1(void)

{
  return 0;
}



undefined4 inst_181_values_var_2(void)

{
  return 0;
}



undefined4 inst_181_flags_var_2(void)

{
  return 0;
}



undefined4 inst_181_values_var_3(void)

{
  return 0;
}



undefined4 inst_181_flags_var_3(void)

{
  return 0;
}



undefined4 inst_181_values_var_4(void)

{
  return 0;
}



undefined4 inst_181_flags_var_4(void)

{
  return 0;
}



undefined4 inst_181_values_var_5(void)

{
  return 0;
}



undefined4 inst_181_flags_var_5(void)

{
  return 0;
}



undefined4 inst_181_values_var_6(void)

{
  return 0;
}



undefined4 inst_181_flags_var_6(void)

{
  return 0;
}



undefined4 inst_181_values_var_7(void)

{
  return 0;
}



undefined4 inst_181_flags_var_7(void)

{
  return 0;
}



undefined4 inst_181_values_var_8(void)

{
  return 0;
}



undefined4 inst_181_flags_var_8(void)

{
  return 0;
}



undefined4 inst_181_values_var_9(void)

{
  return 0;
}



undefined4 inst_181_flags_var_9(void)

{
  return 0;
}



undefined4 inst_182_values_var_0(void)

{
  return 0;
}



undefined4 inst_182_flags_var_0(void)

{
  return 0;
}



undefined4 inst_182_values_var_1(void)

{
  return 0;
}



undefined4 inst_182_flags_var_1(void)

{
  return 0;
}



undefined4 inst_182_values_var_2(void)

{
  return 0;
}



undefined4 inst_182_flags_var_2(void)

{
  return 0;
}



undefined4 inst_182_values_var_3(void)

{
  return 0;
}



undefined4 inst_182_flags_var_3(void)

{
  return 0;
}



undefined4 inst_182_values_var_4(void)

{
  return 0;
}



undefined4 inst_182_flags_var_4(void)

{
  return 0;
}



undefined4 inst_182_values_var_5(void)

{
  return 0;
}



undefined4 inst_182_flags_var_5(void)

{
  return 0;
}



undefined4 inst_182_values_var_6(void)

{
  return 0;
}



undefined4 inst_182_flags_var_6(void)

{
  return 0;
}



undefined4 inst_182_values_var_7(void)

{
  return 0;
}



undefined4 inst_182_flags_var_7(void)

{
  return 0;
}



undefined4 inst_182_values_var_8(void)

{
  return 0;
}



undefined4 inst_182_flags_var_8(void)

{
  return 0;
}



undefined4 inst_182_values_var_9(void)

{
  return 0;
}



undefined4 inst_182_flags_var_9(void)

{
  return 0;
}



undefined4 inst_183_values_var_0(void)

{
  return 0;
}



undefined4 inst_183_flags_var_0(void)

{
  return 0;
}



undefined4 inst_183_values_var_1(void)

{
  return 0;
}



undefined4 inst_183_flags_var_1(void)

{
  return 0;
}



undefined4 inst_183_values_var_2(void)

{
  return 0;
}



undefined4 inst_183_flags_var_2(void)

{
  return 0;
}



undefined4 inst_183_values_var_3(void)

{
  return 0;
}



undefined4 inst_183_flags_var_3(void)

{
  return 0;
}



undefined4 inst_183_values_var_4(void)

{
  return 0;
}



undefined4 inst_183_flags_var_4(void)

{
  return 0;
}



undefined4 inst_183_values_var_5(void)

{
  return 0;
}



undefined4 inst_183_flags_var_5(void)

{
  return 0;
}



undefined4 inst_183_values_var_6(void)

{
  return 0;
}



undefined4 inst_183_flags_var_6(void)

{
  return 0;
}



undefined4 inst_183_values_var_7(void)

{
  return 0;
}



undefined4 inst_183_flags_var_7(void)

{
  return 0;
}



undefined4 inst_183_values_var_8(void)

{
  return 0;
}



undefined4 inst_183_flags_var_8(void)

{
  return 0;
}



undefined4 inst_183_values_var_9(void)

{
  return 0;
}



undefined4 inst_183_flags_var_9(void)

{
  return 0;
}



undefined4 inst_184_values_var_0(void)

{
  return 0;
}



undefined4 inst_184_flags_var_0(void)

{
  return 0;
}



undefined4 inst_184_values_var_1(void)

{
  return 0;
}



undefined4 inst_184_flags_var_1(void)

{
  return 0;
}



undefined4 inst_184_values_var_2(void)

{
  return 0;
}



undefined4 inst_184_flags_var_2(void)

{
  return 0;
}



undefined4 inst_184_values_var_3(void)

{
  return 0;
}



undefined4 inst_184_flags_var_3(void)

{
  return 0;
}



undefined4 inst_184_values_var_4(void)

{
  return 0;
}



undefined4 inst_184_flags_var_4(void)

{
  return 0;
}



undefined4 inst_184_values_var_5(void)

{
  return 0;
}



undefined4 inst_184_flags_var_5(void)

{
  return 0;
}



undefined4 inst_184_values_var_6(void)

{
  return 0;
}



undefined4 inst_184_flags_var_6(void)

{
  return 0;
}



undefined4 inst_184_values_var_7(void)

{
  return 0;
}



undefined4 inst_184_flags_var_7(void)

{
  return 0;
}



undefined4 inst_184_values_var_8(void)

{
  return 0;
}



undefined4 inst_184_flags_var_8(void)

{
  return 0;
}



undefined4 inst_184_values_var_9(void)

{
  return 0;
}



undefined4 inst_184_flags_var_9(void)

{
  return 0;
}



undefined4 inst_185_values_var_0(void)

{
  return 0;
}



undefined4 inst_185_flags_var_0(void)

{
  return 0;
}



undefined4 inst_185_values_var_1(void)

{
  return 0;
}



undefined4 inst_185_flags_var_1(void)

{
  return 0;
}



undefined4 inst_185_values_var_2(void)

{
  return 0;
}



undefined4 inst_185_flags_var_2(void)

{
  return 0;
}



undefined4 inst_185_values_var_3(void)

{
  return 0;
}



undefined4 inst_185_flags_var_3(void)

{
  return 0;
}



undefined4 inst_185_values_var_4(void)

{
  return 0;
}



undefined4 inst_185_flags_var_4(void)

{
  return 0;
}



undefined4 inst_185_values_var_5(void)

{
  return 0;
}



undefined4 inst_185_flags_var_5(void)

{
  return 0;
}



undefined4 inst_185_values_var_6(void)

{
  return 0;
}



undefined4 inst_185_flags_var_6(void)

{
  return 0;
}



undefined4 inst_185_values_var_7(void)

{
  return 0;
}



undefined4 inst_185_flags_var_7(void)

{
  return 0;
}



undefined4 inst_185_values_var_8(void)

{
  return 0;
}



undefined4 inst_185_flags_var_8(void)

{
  return 0;
}



undefined4 inst_185_values_var_9(void)

{
  return 0;
}



undefined4 inst_185_flags_var_9(void)

{
  return 0;
}



undefined4 inst_186_values_var_0(void)

{
  return 0;
}



undefined4 inst_186_flags_var_0(void)

{
  return 0;
}



undefined4 inst_186_values_var_1(void)

{
  return 0;
}



undefined4 inst_186_flags_var_1(void)

{
  return 0;
}



undefined4 inst_186_values_var_2(void)

{
  return 0;
}



undefined4 inst_186_flags_var_2(void)

{
  return 0;
}



undefined4 inst_186_values_var_3(void)

{
  return 0;
}



undefined4 inst_186_flags_var_3(void)

{
  return 0;
}



undefined4 inst_186_values_var_4(void)

{
  return 0;
}



undefined4 inst_186_flags_var_4(void)

{
  return 0;
}



undefined4 inst_186_values_var_5(void)

{
  return 0;
}



undefined4 inst_186_flags_var_5(void)

{
  return 0;
}



undefined4 inst_186_values_var_6(void)

{
  return 0;
}



undefined4 inst_186_flags_var_6(void)

{
  return 0;
}



undefined4 inst_186_values_var_7(void)

{
  return 0;
}



undefined4 inst_186_flags_var_7(void)

{
  return 0;
}



undefined4 inst_186_values_var_8(void)

{
  return 0;
}



undefined4 inst_186_flags_var_8(void)

{
  return 0;
}



undefined4 inst_186_values_var_9(void)

{
  return 0;
}



undefined4 inst_186_flags_var_9(void)

{
  return 0;
}



undefined4 inst_187_values_var_0(void)

{
  return 0;
}



undefined4 inst_187_flags_var_0(void)

{
  return 0;
}



undefined4 inst_187_values_var_1(void)

{
  return 0;
}



undefined4 inst_187_flags_var_1(void)

{
  return 0;
}



undefined4 inst_187_values_var_2(void)

{
  return 0;
}



undefined4 inst_187_flags_var_2(void)

{
  return 0;
}



undefined4 inst_187_values_var_3(void)

{
  return 0;
}



undefined4 inst_187_flags_var_3(void)

{
  return 0;
}



undefined4 inst_187_values_var_4(void)

{
  return 0;
}



undefined4 inst_187_flags_var_4(void)

{
  return 0;
}



undefined4 inst_187_values_var_5(void)

{
  return 0;
}



undefined4 inst_187_flags_var_5(void)

{
  return 0;
}



undefined4 inst_187_values_var_6(void)

{
  return 0;
}



undefined4 inst_187_flags_var_6(void)

{
  return 0;
}



undefined4 inst_187_values_var_7(void)

{
  return 0;
}



undefined4 inst_187_flags_var_7(void)

{
  return 0;
}



undefined4 inst_187_values_var_8(void)

{
  return 0;
}



undefined4 inst_187_flags_var_8(void)

{
  return 0;
}



undefined4 inst_187_values_var_9(void)

{
  return 0;
}



undefined4 inst_187_flags_var_9(void)

{
  return 0;
}



undefined4 inst_188_values_var_0(void)

{
  return 0;
}



undefined4 inst_188_flags_var_0(void)

{
  return 0;
}



undefined4 inst_188_values_var_1(void)

{
  return 0;
}



undefined4 inst_188_flags_var_1(void)

{
  return 0;
}



undefined4 inst_188_values_var_2(void)

{
  return 0;
}



undefined4 inst_188_flags_var_2(void)

{
  return 0;
}



undefined4 inst_188_values_var_3(void)

{
  return 0;
}



undefined4 inst_188_flags_var_3(void)

{
  return 0;
}



undefined4 inst_188_values_var_4(void)

{
  return 0;
}



undefined4 inst_188_flags_var_4(void)

{
  return 0;
}



undefined4 inst_188_values_var_5(void)

{
  return 0;
}



undefined4 inst_188_flags_var_5(void)

{
  return 0;
}



undefined4 inst_188_values_var_6(void)

{
  return 0;
}



undefined4 inst_188_flags_var_6(void)

{
  return 0;
}



undefined4 inst_188_values_var_7(void)

{
  return 0;
}



undefined4 inst_188_flags_var_7(void)

{
  return 0;
}



undefined4 inst_188_values_var_8(void)

{
  return 0;
}



undefined4 inst_188_flags_var_8(void)

{
  return 0;
}



undefined4 inst_188_values_var_9(void)

{
  return 0;
}



undefined4 inst_188_flags_var_9(void)

{
  return 0;
}



undefined4 inst_189_values_var_0(void)

{
  return 0;
}



undefined4 inst_189_flags_var_0(void)

{
  return 0;
}



undefined4 inst_189_values_var_1(void)

{
  return 0;
}



undefined4 inst_189_flags_var_1(void)

{
  return 0;
}



undefined4 inst_189_values_var_2(void)

{
  return 0;
}



undefined4 inst_189_flags_var_2(void)

{
  return 0;
}



undefined4 inst_189_values_var_3(void)

{
  return 0;
}



undefined4 inst_189_flags_var_3(void)

{
  return 0;
}



undefined4 inst_189_values_var_4(void)

{
  return 0;
}



undefined4 inst_189_flags_var_4(void)

{
  return 0;
}



undefined4 inst_189_values_var_5(void)

{
  return 0;
}



undefined4 inst_189_flags_var_5(void)

{
  return 0;
}



undefined4 inst_189_values_var_6(void)

{
  return 0;
}



undefined4 inst_189_flags_var_6(void)

{
  return 0;
}



undefined4 inst_189_values_var_7(void)

{
  return 0;
}



undefined4 inst_189_flags_var_7(void)

{
  return 0;
}



undefined4 inst_189_values_var_8(void)

{
  return 0;
}



undefined4 inst_189_flags_var_8(void)

{
  return 0;
}



undefined4 inst_189_values_var_9(void)

{
  return 0;
}



undefined4 inst_189_flags_var_9(void)

{
  return 0;
}



undefined4 inst_190_values_var_0(void)

{
  return 0;
}



undefined4 inst_190_flags_var_0(void)

{
  return 0;
}



undefined4 inst_190_values_var_1(void)

{
  return 0;
}



undefined4 inst_190_flags_var_1(void)

{
  return 0;
}



undefined4 inst_190_values_var_2(void)

{
  return 0;
}



undefined4 inst_190_flags_var_2(void)

{
  return 0;
}



undefined4 inst_190_values_var_3(void)

{
  return 0;
}



undefined4 inst_190_flags_var_3(void)

{
  return 0;
}



undefined4 inst_190_values_var_4(void)

{
  return 0;
}



undefined4 inst_190_flags_var_4(void)

{
  return 0;
}



undefined4 inst_190_values_var_5(void)

{
  return 0;
}



undefined4 inst_190_flags_var_5(void)

{
  return 0;
}



undefined4 inst_190_values_var_6(void)

{
  return 0;
}



undefined4 inst_190_flags_var_6(void)

{
  return 0;
}



undefined4 inst_190_values_var_7(void)

{
  return 0;
}



undefined4 inst_190_flags_var_7(void)

{
  return 0;
}



undefined4 inst_190_values_var_8(void)

{
  return 0;
}



undefined4 inst_190_flags_var_8(void)

{
  return 0;
}



undefined4 inst_190_values_var_9(void)

{
  return 0;
}



undefined4 inst_190_flags_var_9(void)

{
  return 0;
}



undefined4 inst_191_values_var_0(void)

{
  return 0;
}



undefined4 inst_191_flags_var_0(void)

{
  return 0;
}



undefined4 inst_191_values_var_1(void)

{
  return 0;
}



undefined4 inst_191_flags_var_1(void)

{
  return 0;
}



undefined4 inst_191_values_var_2(void)

{
  return 0;
}



undefined4 inst_191_flags_var_2(void)

{
  return 0;
}



undefined4 inst_191_values_var_3(void)

{
  return 0;
}



undefined4 inst_191_flags_var_3(void)

{
  return 0;
}



undefined4 inst_191_values_var_4(void)

{
  return 0;
}



undefined4 inst_191_flags_var_4(void)

{
  return 0;
}



undefined4 inst_191_values_var_5(void)

{
  return 0;
}



undefined4 inst_191_flags_var_5(void)

{
  return 0;
}



undefined4 inst_191_values_var_6(void)

{
  return 0;
}



undefined4 inst_191_flags_var_6(void)

{
  return 0;
}



undefined4 inst_191_values_var_7(void)

{
  return 0;
}



undefined4 inst_191_flags_var_7(void)

{
  return 0;
}



undefined4 inst_191_values_var_8(void)

{
  return 0;
}



undefined4 inst_191_flags_var_8(void)

{
  return 0;
}



undefined4 inst_191_values_var_9(void)

{
  return 0;
}



undefined4 inst_191_flags_var_9(void)

{
  return 0;
}



undefined4 inst_192_values_var_0(void)

{
  return 0;
}



undefined4 inst_192_flags_var_0(void)

{
  return 0;
}



undefined4 inst_192_values_var_1(void)

{
  return 0;
}



undefined4 inst_192_flags_var_1(void)

{
  return 0;
}



undefined4 inst_192_values_var_2(void)

{
  return 0;
}



undefined4 inst_192_flags_var_2(void)

{
  return 0;
}



undefined4 inst_192_values_var_3(void)

{
  return 0;
}



undefined4 inst_192_flags_var_3(void)

{
  return 0;
}



undefined4 inst_192_values_var_4(void)

{
  return 0;
}



undefined4 inst_192_flags_var_4(void)

{
  return 0;
}



undefined4 inst_192_values_var_5(void)

{
  return 0;
}



undefined4 inst_192_flags_var_5(void)

{
  return 0;
}



undefined4 inst_192_values_var_6(void)

{
  return 0;
}



undefined4 inst_192_flags_var_6(void)

{
  return 0;
}



undefined4 inst_192_values_var_7(void)

{
  return 0;
}



undefined4 inst_192_flags_var_7(void)

{
  return 0;
}



undefined4 inst_192_values_var_8(void)

{
  return 0;
}



undefined4 inst_192_flags_var_8(void)

{
  return 0;
}



undefined4 inst_192_values_var_9(void)

{
  return 0;
}



undefined4 inst_192_flags_var_9(void)

{
  return 0;
}



undefined4 inst_193_values_var_0(void)

{
  return 0;
}



undefined4 inst_193_flags_var_0(void)

{
  return 0;
}



undefined4 inst_193_values_var_1(void)

{
  return 0;
}



undefined4 inst_193_flags_var_1(void)

{
  return 0;
}



undefined4 inst_193_values_var_2(void)

{
  return 0;
}



undefined4 inst_193_flags_var_2(void)

{
  return 0;
}



undefined4 inst_193_values_var_3(void)

{
  return 0;
}



undefined4 inst_193_flags_var_3(void)

{
  return 0;
}



undefined4 inst_193_values_var_4(void)

{
  return 0;
}



undefined4 inst_193_flags_var_4(void)

{
  return 0;
}



undefined4 inst_193_values_var_5(void)

{
  return 0;
}



undefined4 inst_193_flags_var_5(void)

{
  return 0;
}



undefined4 inst_193_values_var_6(void)

{
  return 0;
}



undefined4 inst_193_flags_var_6(void)

{
  return 0;
}



undefined4 inst_193_values_var_7(void)

{
  return 0;
}



undefined4 inst_193_flags_var_7(void)

{
  return 0;
}



undefined4 inst_193_values_var_8(void)

{
  return 0;
}



undefined4 inst_193_flags_var_8(void)

{
  return 0;
}



undefined4 inst_193_values_var_9(void)

{
  return 0;
}



undefined4 inst_193_flags_var_9(void)

{
  return 0;
}



undefined4 inst_194_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a790b)

undefined4 inst_194_flags_var_0(void)

{
  return 0;
}



undefined4 inst_194_values_var_1(void)

{
  return 0;
}



undefined4 inst_194_flags_var_1(void)

{
  return 0;
}



undefined4 inst_194_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a7a60)
// WARNING: Removing unreachable block (ram,0x080a7a6d)

undefined4 inst_194_flags_var_2(void)

{
  return 0;
}



undefined4 inst_194_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a7b11)

undefined4 inst_194_flags_var_3(void)

{
  return 0;
}



undefined4 inst_194_values_var_4(void)

{
  return 0;
}



undefined4 inst_194_flags_var_4(void)

{
  return 0;
}



undefined4 inst_194_values_var_5(void)

{
  return 0;
}



undefined4 inst_194_flags_var_5(void)

{
  return 0;
}



undefined4 inst_194_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a7d24)
// WARNING: Removing unreachable block (ram,0x080a7d31)

undefined4 inst_194_flags_var_6(void)

{
  return 0;
}



undefined4 inst_194_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a7de2)

undefined4 inst_194_flags_var_7(void)

{
  return 0;
}



undefined4 inst_194_values_var_8(void)

{
  return 0;
}



undefined4 inst_194_flags_var_8(void)

{
  return 0;
}



undefined4 inst_194_values_var_9(void)

{
  return 0;
}



undefined4 inst_194_flags_var_9(void)

{
  return 0;
}



undefined4 inst_195_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a7fe8)
// WARNING: Removing unreachable block (ram,0x080a7ff5)

undefined4 inst_195_flags_var_0(void)

{
  return 0;
}



undefined4 inst_195_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a8099)
// WARNING: Removing unreachable block (ram,0x080a80a6)

undefined4 inst_195_flags_var_1(void)

{
  return 0;
}



undefined4 inst_195_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a8157)

undefined4 inst_195_flags_var_2(void)

{
  return 0;
}



undefined4 inst_195_values_var_3(void)

{
  return 0;
}



undefined4 inst_195_flags_var_3(void)

{
  return 0;
}



undefined4 inst_195_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a82ac)

undefined4 inst_195_flags_var_4(void)

{
  return 0;
}



undefined4 inst_195_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a835d)
// WARNING: Removing unreachable block (ram,0x080a836a)

undefined4 inst_195_flags_var_5(void)

{
  return 0;
}



undefined4 inst_195_values_var_6(void)

{
  return 0;
}



undefined4 inst_195_flags_var_6(void)

{
  return 0;
}



undefined4 inst_195_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a84bf)
// WARNING: Removing unreachable block (ram,0x080a84cc)

undefined4 inst_195_flags_var_7(void)

{
  return 0;
}



undefined4 inst_195_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a8570)

undefined4 inst_195_flags_var_8(void)

{
  return 0;
}



undefined4 inst_195_values_var_9(void)

{
  return 0;
}



undefined4 inst_195_flags_var_9(void)

{
  return 0;
}



undefined4 inst_196_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a86d4)

undefined4 inst_196_flags_var_0(void)

{
  return 0;
}



undefined4 inst_196_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a8794)

undefined4 inst_196_flags_var_1(void)

{
  return 0;
}



undefined4 inst_196_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a8847)

undefined4 inst_196_flags_var_2(void)

{
  return 0;
}



undefined4 inst_196_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a88ed)

undefined4 inst_196_flags_var_3(void)

{
  return 0;
}



undefined4 inst_196_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a89ad)

undefined4 inst_196_flags_var_4(void)

{
  return 0;
}



undefined4 inst_196_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a8a53)

undefined4 inst_196_flags_var_5(void)

{
  return 0;
}



undefined4 inst_196_values_var_6(void)

{
  return 0;
}



undefined4 inst_196_flags_var_6(void)

{
  return 0;
}



undefined4 inst_196_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a8bc6)

undefined4 inst_196_flags_var_7(void)

{
  return 0;
}



undefined4 inst_196_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a8c79)

undefined4 inst_196_flags_var_8(void)

{
  return 0;
}



undefined4 inst_196_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a8d1f)

undefined4 inst_196_flags_var_9(void)

{
  return 0;
}



undefined4 inst_197_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a8dd2)

undefined4 inst_197_flags_var_0(void)

{
  return 0;
}



undefined4 inst_197_values_var_1(void)

{
  return 0;
}



undefined4 inst_197_flags_var_1(void)

{
  return 0;
}



undefined4 inst_197_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a8f38)
// WARNING: Removing unreachable block (ram,0x080a8f45)

undefined4 inst_197_flags_var_2(void)

{
  return 0;
}



undefined4 inst_197_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a8ff8)

undefined4 inst_197_flags_var_3(void)

{
  return 0;
}



undefined4 inst_197_values_var_4(void)

{
  return 0;
}



undefined4 inst_197_flags_var_4(void)

{
  return 0;
}



undefined4 inst_197_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a9151)

undefined4 inst_197_flags_var_5(void)

{
  return 0;
}



undefined4 inst_197_values_var_6(void)

{
  return 0;
}



undefined4 inst_197_flags_var_6(void)

{
  return 0;
}



undefined4 inst_197_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a92b7)
// WARNING: Removing unreachable block (ram,0x080a92c4)

undefined4 inst_197_flags_var_7(void)

{
  return 0;
}



undefined4 inst_197_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a936a)
// WARNING: Removing unreachable block (ram,0x080a9377)

undefined4 inst_197_flags_var_8(void)

{
  return 0;
}



undefined4 inst_197_values_var_9(void)

{
  return 0;
}



undefined4 inst_197_flags_var_9(void)

{
  return 0;
}



undefined4 inst_198_values_var_0(void)

{
  return 0;
}



undefined4 inst_198_flags_var_0(void)

{
  return 0;
}



undefined4 inst_198_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a957f)
// WARNING: Removing unreachable block (ram,0x080a958c)

undefined4 inst_198_flags_var_1(void)

{
  return 0;
}



undefined4 inst_198_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a963d)

undefined4 inst_198_flags_var_2(void)

{
  return 0;
}



undefined4 inst_198_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a96ee)

undefined4 inst_198_flags_var_3(void)

{
  return 0;
}



undefined4 inst_198_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a9792)
// WARNING: Removing unreachable block (ram,0x080a979f)

undefined4 inst_198_flags_var_4(void)

{
  return 0;
}



undefined4 inst_198_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a9843)
// WARNING: Removing unreachable block (ram,0x080a9850)

undefined4 inst_198_flags_var_5(void)

{
  return 0;
}



undefined4 inst_198_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a9901)

undefined4 inst_198_flags_var_6(void)

{
  return 0;
}



undefined4 inst_198_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a99a5)
// WARNING: Removing unreachable block (ram,0x080a99b2)

undefined4 inst_198_flags_var_7(void)

{
  return 0;
}



undefined4 inst_198_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a9a56)

undefined4 inst_198_flags_var_8(void)

{
  return 0;
}



undefined4 inst_198_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a9b14)

undefined4 inst_198_flags_var_9(void)

{
  return 0;
}



undefined4 inst_199_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a9bb8)

undefined4 inst_199_flags_var_0(void)

{
  return 0;
}



undefined4 inst_199_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a9c69)
// WARNING: Removing unreachable block (ram,0x080a9c76)

undefined4 inst_199_flags_var_1(void)

{
  return 0;
}



undefined4 inst_199_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a9d1a)

undefined4 inst_199_flags_var_2(void)

{
  return 0;
}



undefined4 inst_199_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a9dcb)
// WARNING: Removing unreachable block (ram,0x080a9dd8)

undefined4 inst_199_flags_var_3(void)

{
  return 0;
}



undefined4 inst_199_values_var_4(void)

{
  return 0;
}



undefined4 inst_199_flags_var_4(void)

{
  return 0;
}



undefined4 inst_199_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a9f3a)

undefined4 inst_199_flags_var_5(void)

{
  return 0;
}



undefined4 inst_199_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080a9fde)

undefined4 inst_199_flags_var_6(void)

{
  return 0;
}



undefined4 inst_199_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aa08f)

undefined4 inst_199_flags_var_7(void)

{
  return 0;
}



undefined4 inst_199_values_var_8(void)

{
  return 0;
}



undefined4 inst_199_flags_var_8(void)

{
  return 0;
}



undefined4 inst_199_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aa1fe)

undefined4 inst_199_flags_var_9(void)

{
  return 0;
}



undefined4 inst_200_values_var_0(void)

{
  return 0;
}



undefined4 inst_200_flags_var_0(void)

{
  return 0;
}



undefined4 inst_200_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aa364)

undefined4 inst_200_flags_var_1(void)

{
  return 0;
}



undefined4 inst_200_values_var_2(void)

{
  return 0;
}



undefined4 inst_200_flags_var_2(void)

{
  return 0;
}



undefined4 inst_200_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aa4bd)

undefined4 inst_200_flags_var_3(void)

{
  return 0;
}



undefined4 inst_200_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aa570)
// WARNING: Removing unreachable block (ram,0x080aa57d)

undefined4 inst_200_flags_var_4(void)

{
  return 0;
}



undefined4 inst_200_values_var_5(void)

{
  return 0;
}



undefined4 inst_200_flags_var_5(void)

{
  return 0;
}



undefined4 inst_200_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aa6e3)

undefined4 inst_200_flags_var_6(void)

{
  return 0;
}



undefined4 inst_200_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aa789)

undefined4 inst_200_flags_var_7(void)

{
  return 0;
}



undefined4 inst_200_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aa849)

undefined4 inst_200_flags_var_8(void)

{
  return 0;
}



undefined4 inst_200_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aa8ef)
// WARNING: Removing unreachable block (ram,0x080aa8fc)

undefined4 inst_200_flags_var_9(void)

{
  return 0;
}



undefined4 inst_201_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aa9a2)

undefined4 inst_201_flags_var_0(void)

{
  return 0;
}



undefined4 inst_201_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aaa55)
// WARNING: Removing unreachable block (ram,0x080aaa62)

undefined4 inst_201_flags_var_1(void)

{
  return 0;
}



undefined4 inst_201_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aab08)
// WARNING: Removing unreachable block (ram,0x080aab15)

undefined4 inst_201_flags_var_2(void)

{
  return 0;
}



undefined4 inst_201_values_var_3(void)

{
  return 0;
}



undefined4 inst_201_flags_var_3(void)

{
  return 0;
}



undefined4 inst_201_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aac6e)
// WARNING: Removing unreachable block (ram,0x080aac7b)

undefined4 inst_201_flags_var_4(void)

{
  return 0;
}



undefined4 inst_201_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aad21)
// WARNING: Removing unreachable block (ram,0x080aad2e)

undefined4 inst_201_flags_var_5(void)

{
  return 0;
}



undefined4 inst_201_values_var_6(void)

{
  return 0;
}



undefined4 inst_201_flags_var_6(void)

{
  return 0;
}



undefined4 inst_201_values_var_7(void)

{
  return 0;
}



undefined4 inst_201_flags_var_7(void)

{
  return 0;
}



undefined4 inst_201_values_var_8(void)

{
  return 0;
}



undefined4 inst_201_flags_var_8(void)

{
  return 0;
}



undefined4 inst_201_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aaffa)

undefined4 inst_201_flags_var_9(void)

{
  return 0;
}



undefined4 inst_202_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ab0af)

undefined4 inst_202_flags_var_0(void)

{
  return 0;
}



undefined4 inst_202_values_var_1(void)

{
  return 0;
}



undefined4 inst_202_flags_var_1(void)

{
  return 0;
}



undefined4 inst_202_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ab20c)
// WARNING: Removing unreachable block (ram,0x080ab219)

undefined4 inst_202_flags_var_2(void)

{
  return 0;
}



undefined4 inst_202_values_var_3(void)

{
  return 0;
}



undefined4 inst_202_flags_var_3(void)

{
  return 0;
}



undefined4 inst_202_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ab383)

undefined4 inst_202_flags_var_4(void)

{
  return 0;
}



undefined4 inst_202_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ab438)

undefined4 inst_202_flags_var_5(void)

{
  return 0;
}



undefined4 inst_202_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ab4ed)

undefined4 inst_202_flags_var_6(void)

{
  return 0;
}



undefined4 inst_202_values_var_7(void)

{
  return 0;
}



undefined4 inst_202_flags_var_7(void)

{
  return 0;
}



undefined4 inst_202_values_var_8(void)

{
  return 0;
}



undefined4 inst_202_flags_var_8(void)

{
  return 0;
}



undefined4 inst_202_values_var_9(void)

{
  return 0;
}



undefined4 inst_202_flags_var_9(void)

{
  return 0;
}



undefined4 inst_203_values_var_0(void)

{
  return 0;
}



undefined4 inst_203_flags_var_0(void)

{
  return 0;
}



undefined4 inst_203_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ab876)

undefined4 inst_203_flags_var_1(void)

{
  return 0;
}



undefined4 inst_203_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ab91e)
// WARNING: Removing unreachable block (ram,0x080ab92b)

undefined4 inst_203_flags_var_2(void)

{
  return 0;
}



undefined4 inst_203_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ab9e0)

undefined4 inst_203_flags_var_3(void)

{
  return 0;
}



undefined4 inst_203_values_var_4(void)

{
  return 0;
}



undefined4 inst_203_flags_var_4(void)

{
  return 0;
}



undefined4 inst_203_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080abb3d)
// WARNING: Removing unreachable block (ram,0x080abb4a)

undefined4 inst_203_flags_var_5(void)

{
  return 0;
}



undefined4 inst_203_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080abbff)

undefined4 inst_203_flags_var_6(void)

{
  return 0;
}



undefined4 inst_203_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080abcb4)

undefined4 inst_203_flags_var_7(void)

{
  return 0;
}



undefined4 inst_203_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080abd69)

undefined4 inst_203_flags_var_8(void)

{
  return 0;
}



undefined4 inst_203_values_var_9(void)

{
  return 0;
}



undefined4 inst_203_flags_var_9(void)

{
  return 0;
}



undefined4 inst_204_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080abec4)

undefined4 inst_204_flags_var_0(void)

{
  return 0;
}



undefined4 inst_204_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080abf84)

undefined4 inst_204_flags_var_1(void)

{
  return 0;
}



undefined4 inst_204_values_var_2(void)

{
  return 0;
}



undefined4 inst_204_flags_var_2(void)

{
  return 0;
}



undefined4 inst_204_values_var_3(void)

{
  return 0;
}



undefined4 inst_204_flags_var_3(void)

{
  return 0;
}



undefined4 inst_204_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ac19d)

undefined4 inst_204_flags_var_4(void)

{
  return 0;
}



undefined4 inst_204_values_var_5(void)

{
  return 0;
}



undefined4 inst_204_flags_var_5(void)

{
  return 0;
}



undefined4 inst_204_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ac2f6)
// WARNING: Removing unreachable block (ram,0x080ac303)

undefined4 inst_204_flags_var_6(void)

{
  return 0;
}



undefined4 inst_204_values_var_7(void)

{
  return 0;
}



undefined4 inst_204_flags_var_7(void)

{
  return 0;
}



undefined4 inst_204_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ac469)

undefined4 inst_204_flags_var_8(void)

{
  return 0;
}



undefined4 inst_204_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ac50f)
// WARNING: Removing unreachable block (ram,0x080ac51c)

undefined4 inst_204_flags_var_9(void)

{
  return 0;
}



undefined4 inst_205_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ac5cf)

undefined4 inst_205_flags_var_0(void)

{
  return 0;
}



undefined4 inst_205_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ac682)

undefined4 inst_205_flags_var_1(void)

{
  return 0;
}



undefined4 inst_205_values_var_2(void)

{
  return 0;
}



undefined4 inst_205_flags_var_2(void)

{
  return 0;
}



undefined4 inst_205_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ac7e8)

undefined4 inst_205_flags_var_3(void)

{
  return 0;
}



undefined4 inst_205_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ac88e)

undefined4 inst_205_flags_var_4(void)

{
  return 0;
}



undefined4 inst_205_values_var_5(void)

{
  return 0;
}



undefined4 inst_205_flags_var_5(void)

{
  return 0;
}



undefined4 inst_205_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ac9f4)

undefined4 inst_205_flags_var_6(void)

{
  return 0;
}



undefined4 inst_205_values_var_7(void)

{
  return 0;
}



undefined4 inst_205_flags_var_7(void)

{
  return 0;
}



undefined4 inst_205_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080acb5a)
// WARNING: Removing unreachable block (ram,0x080acb67)

undefined4 inst_205_flags_var_8(void)

{
  return 0;
}



undefined4 inst_205_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080acc1a)

undefined4 inst_205_flags_var_9(void)

{
  return 0;
}



undefined4 inst_206_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080accc0)
// WARNING: Removing unreachable block (ram,0x080acccd)

undefined4 inst_206_flags_var_0(void)

{
  return 0;
}



undefined4 inst_206_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080acd73)

undefined4 inst_206_flags_var_1(void)

{
  return 0;
}



undefined4 inst_206_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ace26)

undefined4 inst_206_flags_var_2(void)

{
  return 0;
}



undefined4 inst_206_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aced9)
// WARNING: Removing unreachable block (ram,0x080acee6)

undefined4 inst_206_flags_var_3(void)

{
  return 0;
}



undefined4 inst_206_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080acf99)

undefined4 inst_206_flags_var_4(void)

{
  return 0;
}



undefined4 inst_206_values_var_5(void)

{
  return 0;
}



undefined4 inst_206_flags_var_5(void)

{
  return 0;
}



undefined4 inst_206_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ad0f2)
// WARNING: Removing unreachable block (ram,0x080ad0ff)

undefined4 inst_206_flags_var_6(void)

{
  return 0;
}



undefined4 inst_206_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ad1b2)

undefined4 inst_206_flags_var_7(void)

{
  return 0;
}



undefined4 inst_206_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ad265)

undefined4 inst_206_flags_var_8(void)

{
  return 0;
}



undefined4 inst_206_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ad30b)
// WARNING: Removing unreachable block (ram,0x080ad318)

undefined4 inst_206_flags_var_9(void)

{
  return 0;
}



undefined4 inst_207_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ad3be)
// WARNING: Removing unreachable block (ram,0x080ad3cb)

undefined4 inst_207_flags_var_0(void)

{
  return 0;
}



undefined4 inst_207_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ad471)
// WARNING: Removing unreachable block (ram,0x080ad47e)

undefined4 inst_207_flags_var_1(void)

{
  return 0;
}



undefined4 inst_207_values_var_2(void)

{
  return 0;
}



undefined4 inst_207_flags_var_2(void)

{
  return 0;
}



undefined4 inst_207_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ad5d7)
// WARNING: Removing unreachable block (ram,0x080ad5e4)

undefined4 inst_207_flags_var_3(void)

{
  return 0;
}



undefined4 inst_207_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ad68a)
// WARNING: Removing unreachable block (ram,0x080ad697)

undefined4 inst_207_flags_var_4(void)

{
  return 0;
}



undefined4 inst_207_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ad73d)

undefined4 inst_207_flags_var_5(void)

{
  return 0;
}



undefined4 inst_207_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ad7fd)

undefined4 inst_207_flags_var_6(void)

{
  return 0;
}



undefined4 inst_207_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ad8a3)
// WARNING: Removing unreachable block (ram,0x080ad8b0)

undefined4 inst_207_flags_var_7(void)

{
  return 0;
}



undefined4 inst_207_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ad963)

undefined4 inst_207_flags_var_8(void)

{
  return 0;
}



undefined4 inst_207_values_var_9(void)

{
  return 0;
}



undefined4 inst_207_flags_var_9(void)

{
  return 0;
}



undefined4 inst_208_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080adacb)

undefined4 inst_208_flags_var_0(void)

{
  return 0;
}



undefined4 inst_208_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080adb73)
// WARNING: Removing unreachable block (ram,0x080adb80)

undefined4 inst_208_flags_var_1(void)

{
  return 0;
}



undefined4 inst_208_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080adc28)

undefined4 inst_208_flags_var_2(void)

{
  return 0;
}



undefined4 inst_208_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080adcea)

undefined4 inst_208_flags_var_3(void)

{
  return 0;
}



undefined4 inst_208_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080add92)
// WARNING: Removing unreachable block (ram,0x080add9f)

undefined4 inst_208_flags_var_4(void)

{
  return 0;
}



undefined4 inst_208_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ade47)
// WARNING: Removing unreachable block (ram,0x080ade54)

undefined4 inst_208_flags_var_5(void)

{
  return 0;
}



undefined4 inst_208_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080adf09)

undefined4 inst_208_flags_var_6(void)

{
  return 0;
}



undefined4 inst_208_values_var_7(void)

{
  return 0;
}



undefined4 inst_208_flags_var_7(void)

{
  return 0;
}



undefined4 inst_208_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ae066)

undefined4 inst_208_flags_var_8(void)

{
  return 0;
}



undefined4 inst_208_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ae128)

undefined4 inst_208_flags_var_9(void)

{
  return 0;
}



undefined4 inst_209_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ae1dd)

undefined4 inst_209_flags_var_0(void)

{
  return 0;
}



undefined4 inst_209_values_var_1(void)

{
  return 0;
}



undefined4 inst_209_flags_var_1(void)

{
  return 0;
}



undefined4 inst_209_values_var_2(void)

{
  return 0;
}



undefined4 inst_209_flags_var_2(void)

{
  return 0;
}



undefined4 inst_209_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ae3ef)

undefined4 inst_209_flags_var_3(void)

{
  return 0;
}



undefined4 inst_209_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ae4a4)

undefined4 inst_209_flags_var_4(void)

{
  return 0;
}



undefined4 inst_209_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ae566)

undefined4 inst_209_flags_var_5(void)

{
  return 0;
}



undefined4 inst_209_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ae60e)
// WARNING: Removing unreachable block (ram,0x080ae61b)

undefined4 inst_209_flags_var_6(void)

{
  return 0;
}



undefined4 inst_209_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ae6c3)
// WARNING: Removing unreachable block (ram,0x080ae6d0)

undefined4 inst_209_flags_var_7(void)

{
  return 0;
}



undefined4 inst_209_values_var_8(void)

{
  return 0;
}



undefined4 inst_209_flags_var_8(void)

{
  return 0;
}



undefined4 inst_209_values_var_9(void)

{
  return 0;
}



undefined4 inst_209_flags_var_9(void)

{
  return 0;
}



undefined4 inst_210_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ae8ed)

undefined4 inst_210_flags_var_0(void)

{
  return 0;
}



undefined4 inst_210_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ae993)

undefined4 inst_210_flags_var_1(void)

{
  return 0;
}



undefined4 inst_210_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aea46)

undefined4 inst_210_flags_var_2(void)

{
  return 0;
}



undefined4 inst_210_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aeb06)

undefined4 inst_210_flags_var_3(void)

{
  return 0;
}



undefined4 inst_210_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aebac)
// WARNING: Removing unreachable block (ram,0x080aebb9)

undefined4 inst_210_flags_var_4(void)

{
  return 0;
}



undefined4 inst_210_values_var_5(void)

{
  return 0;
}



undefined4 inst_210_flags_var_5(void)

{
  return 0;
}



undefined4 inst_210_values_var_6(void)

{
  return 0;
}



undefined4 inst_210_flags_var_6(void)

{
  return 0;
}



undefined4 inst_210_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aedd2)

undefined4 inst_210_flags_var_7(void)

{
  return 0;
}



undefined4 inst_210_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aee78)

undefined4 inst_210_flags_var_8(void)

{
  return 0;
}



undefined4 inst_210_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aef38)

undefined4 inst_210_flags_var_9(void)

{
  return 0;
}



undefined4 inst_211_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080aefde)

undefined4 inst_211_flags_var_0(void)

{
  return 0;
}



undefined4 inst_211_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080af091)

undefined4 inst_211_flags_var_1(void)

{
  return 0;
}



undefined4 inst_211_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080af144)

undefined4 inst_211_flags_var_2(void)

{
  return 0;
}



undefined4 inst_211_values_var_3(void)

{
  return 0;
}



undefined4 inst_211_flags_var_3(void)

{
  return 0;
}



undefined4 inst_211_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080af2aa)

undefined4 inst_211_flags_var_4(void)

{
  return 0;
}



undefined4 inst_211_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080af36a)

undefined4 inst_211_flags_var_5(void)

{
  return 0;
}



undefined4 inst_211_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080af410)
// WARNING: Removing unreachable block (ram,0x080af41d)

undefined4 inst_211_flags_var_6(void)

{
  return 0;
}



undefined4 inst_211_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080af4d0)

undefined4 inst_211_flags_var_7(void)

{
  return 0;
}



undefined4 inst_211_values_var_8(void)

{
  return 0;
}



undefined4 inst_211_flags_var_8(void)

{
  return 0;
}



undefined4 inst_211_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080af636)

undefined4 inst_211_flags_var_9(void)

{
  return 0;
}



undefined4 inst_212_values_var_0(void)

{
  return 0;
}



undefined4 inst_212_flags_var_0(void)

{
  return 0;
}



undefined4 inst_212_values_var_1(void)

{
  return 0;
}



undefined4 inst_212_flags_var_1(void)

{
  return 0;
}



undefined4 inst_212_values_var_2(void)

{
  return 0;
}



undefined4 inst_212_flags_var_2(void)

{
  return 0;
}



undefined4 inst_212_values_var_3(void)

{
  return 0;
}



undefined4 inst_212_flags_var_3(void)

{
  return 0;
}



undefined4 inst_212_values_var_4(void)

{
  return 0;
}



undefined4 inst_212_flags_var_4(void)

{
  return 0;
}



undefined4 inst_212_values_var_5(void)

{
  return 0;
}



undefined4 inst_212_flags_var_5(void)

{
  return 0;
}



undefined4 inst_212_values_var_6(void)

{
  return 0;
}



undefined4 inst_212_flags_var_6(void)

{
  return 0;
}



undefined4 inst_212_values_var_7(void)

{
  return 0;
}



undefined4 inst_212_flags_var_7(void)

{
  return 0;
}



undefined4 inst_212_values_var_8(void)

{
  return 0;
}



undefined4 inst_212_flags_var_8(void)

{
  return 0;
}



undefined4 inst_212_values_var_9(void)

{
  return 0;
}



undefined4 inst_212_flags_var_9(void)

{
  return 0;
}



undefined4 inst_213_values_var_0(void)

{
  return 0;
}



undefined4 inst_213_flags_var_0(void)

{
  return 0;
}



undefined4 inst_213_values_var_1(void)

{
  return 0;
}



undefined4 inst_213_flags_var_1(void)

{
  return 0;
}



undefined4 inst_213_values_var_2(void)

{
  return 0;
}



undefined4 inst_213_flags_var_2(void)

{
  return 0;
}



undefined4 inst_213_values_var_3(void)

{
  return 0;
}



undefined4 inst_213_flags_var_3(void)

{
  return 0;
}



undefined4 inst_213_values_var_4(void)

{
  return 0;
}



undefined4 inst_213_flags_var_4(void)

{
  return 0;
}



undefined4 inst_213_values_var_5(void)

{
  return 0;
}



undefined4 inst_213_flags_var_5(void)

{
  return 0;
}



undefined4 inst_213_values_var_6(void)

{
  return 0;
}



undefined4 inst_213_flags_var_6(void)

{
  return 0;
}



undefined4 inst_213_values_var_7(void)

{
  return 0;
}



undefined4 inst_213_flags_var_7(void)

{
  return 0;
}



undefined4 inst_213_values_var_8(void)

{
  return 0;
}



undefined4 inst_213_flags_var_8(void)

{
  return 0;
}



undefined4 inst_213_values_var_9(void)

{
  return 0;
}



undefined4 inst_213_flags_var_9(void)

{
  return 0;
}



undefined4 inst_214_values_var_0(void)

{
  return 0;
}



undefined4 inst_214_flags_var_0(void)

{
  return 0;
}



undefined4 inst_214_values_var_1(void)

{
  return 0;
}



undefined4 inst_214_flags_var_1(void)

{
  return 0;
}



undefined4 inst_214_values_var_2(void)

{
  return 0;
}



undefined4 inst_214_flags_var_2(void)

{
  return 0;
}



undefined4 inst_214_values_var_3(void)

{
  return 0;
}



undefined4 inst_214_flags_var_3(void)

{
  return 0;
}



undefined4 inst_214_values_var_4(void)

{
  return 0;
}



undefined4 inst_214_flags_var_4(void)

{
  return 0;
}



undefined4 inst_214_values_var_5(void)

{
  return 0;
}



undefined4 inst_214_flags_var_5(void)

{
  return 0;
}



undefined4 inst_214_values_var_6(void)

{
  return 0;
}



undefined4 inst_214_flags_var_6(void)

{
  return 0;
}



undefined4 inst_214_values_var_7(void)

{
  return 0;
}



undefined4 inst_214_flags_var_7(void)

{
  return 0;
}



undefined4 inst_214_values_var_8(void)

{
  return 0;
}



undefined4 inst_214_flags_var_8(void)

{
  return 0;
}



undefined4 inst_214_values_var_9(void)

{
  return 0;
}



undefined4 inst_214_flags_var_9(void)

{
  return 0;
}



undefined4 inst_215_values_var_0(void)

{
  return 0;
}



undefined4 inst_215_flags_var_0(void)

{
  return 0;
}



undefined4 inst_215_values_var_1(void)

{
  return 0;
}



undefined4 inst_215_flags_var_1(void)

{
  return 0;
}



undefined4 inst_215_values_var_2(void)

{
  return 0;
}



undefined4 inst_215_flags_var_2(void)

{
  return 0;
}



undefined4 inst_215_values_var_3(void)

{
  return 0;
}



undefined4 inst_215_flags_var_3(void)

{
  return 0;
}



undefined4 inst_215_values_var_4(void)

{
  return 0;
}



undefined4 inst_215_flags_var_4(void)

{
  return 0;
}



undefined4 inst_215_values_var_5(void)

{
  return 0;
}



undefined4 inst_215_flags_var_5(void)

{
  return 0;
}



undefined4 inst_215_values_var_6(void)

{
  return 0;
}



undefined4 inst_215_flags_var_6(void)

{
  return 0;
}



undefined4 inst_215_values_var_7(void)

{
  return 0;
}



undefined4 inst_215_flags_var_7(void)

{
  return 0;
}



undefined4 inst_215_values_var_8(void)

{
  return 0;
}



undefined4 inst_215_flags_var_8(void)

{
  return 0;
}



undefined4 inst_215_values_var_9(void)

{
  return 0;
}



undefined4 inst_215_flags_var_9(void)

{
  return 0;
}



undefined4 inst_216_values_var_0(void)

{
  return 0;
}



undefined4 inst_216_flags_var_0(void)

{
  return 0;
}



undefined4 inst_216_values_var_1(void)

{
  return 0;
}



undefined4 inst_216_flags_var_1(void)

{
  return 0;
}



undefined4 inst_216_values_var_2(void)

{
  return 0;
}



undefined4 inst_216_flags_var_2(void)

{
  return 0;
}



undefined4 inst_216_values_var_3(void)

{
  return 0;
}



undefined4 inst_216_flags_var_3(void)

{
  return 0;
}



undefined4 inst_216_values_var_4(void)

{
  return 0;
}



undefined4 inst_216_flags_var_4(void)

{
  return 0;
}



undefined4 inst_216_values_var_5(void)

{
  return 0;
}



undefined4 inst_216_flags_var_5(void)

{
  return 0;
}



undefined4 inst_216_values_var_6(void)

{
  return 0;
}



undefined4 inst_216_flags_var_6(void)

{
  return 0;
}



undefined4 inst_216_values_var_7(void)

{
  return 0;
}



undefined4 inst_216_flags_var_7(void)

{
  return 0;
}



undefined4 inst_216_values_var_8(void)

{
  return 0;
}



undefined4 inst_216_flags_var_8(void)

{
  return 0;
}



undefined4 inst_216_values_var_9(void)

{
  return 0;
}



undefined4 inst_216_flags_var_9(void)

{
  return 0;
}



undefined4 inst_217_values_var_0(void)

{
  return 0;
}



undefined4 inst_217_flags_var_0(void)

{
  return 0;
}



undefined4 inst_217_values_var_1(void)

{
  return 0;
}



undefined4 inst_217_flags_var_1(void)

{
  return 0;
}



undefined4 inst_217_values_var_2(void)

{
  return 0;
}



undefined4 inst_217_flags_var_2(void)

{
  return 0;
}



undefined4 inst_217_values_var_3(void)

{
  return 0;
}



undefined4 inst_217_flags_var_3(void)

{
  return 0;
}



undefined4 inst_217_values_var_4(void)

{
  return 0;
}



undefined4 inst_217_flags_var_4(void)

{
  return 0;
}



undefined4 inst_217_values_var_5(void)

{
  return 0;
}



undefined4 inst_217_flags_var_5(void)

{
  return 0;
}



undefined4 inst_217_values_var_6(void)

{
  return 0;
}



undefined4 inst_217_flags_var_6(void)

{
  return 0;
}



undefined4 inst_217_values_var_7(void)

{
  return 0;
}



undefined4 inst_217_flags_var_7(void)

{
  return 0;
}



undefined4 inst_217_values_var_8(void)

{
  return 0;
}



undefined4 inst_217_flags_var_8(void)

{
  return 0;
}



undefined4 inst_217_values_var_9(void)

{
  return 0;
}



undefined4 inst_217_flags_var_9(void)

{
  return 0;
}



undefined4 inst_218_values_var_0(void)

{
  return 0;
}



undefined4 inst_218_flags_var_0(void)

{
  return 0;
}



undefined4 inst_218_values_var_1(void)

{
  return 0;
}



undefined4 inst_218_flags_var_1(void)

{
  return 0;
}



undefined4 inst_218_values_var_2(void)

{
  return 0;
}



undefined4 inst_218_flags_var_2(void)

{
  return 0;
}



undefined4 inst_218_values_var_3(void)

{
  return 0;
}



undefined4 inst_218_flags_var_3(void)

{
  return 0;
}



undefined4 inst_218_values_var_4(void)

{
  return 0;
}



undefined4 inst_218_flags_var_4(void)

{
  return 0;
}



undefined4 inst_218_values_var_5(void)

{
  return 0;
}



undefined4 inst_218_flags_var_5(void)

{
  return 0;
}



undefined4 inst_218_values_var_6(void)

{
  return 0;
}



undefined4 inst_218_flags_var_6(void)

{
  return 0;
}



undefined4 inst_218_values_var_7(void)

{
  return 0;
}



undefined4 inst_218_flags_var_7(void)

{
  return 0;
}



undefined4 inst_218_values_var_8(void)

{
  return 0;
}



undefined4 inst_218_flags_var_8(void)

{
  return 0;
}



undefined4 inst_218_values_var_9(void)

{
  return 0;
}



undefined4 inst_218_flags_var_9(void)

{
  return 0;
}



undefined4 inst_219_values_var_0(void)

{
  return 0;
}



undefined4 inst_219_flags_var_0(void)

{
  return 0;
}



undefined4 inst_219_values_var_1(void)

{
  return 0;
}



undefined4 inst_219_flags_var_1(void)

{
  return 0;
}



undefined4 inst_219_values_var_2(void)

{
  return 0;
}



undefined4 inst_219_flags_var_2(void)

{
  return 0;
}



undefined4 inst_219_values_var_3(void)

{
  return 0;
}



undefined4 inst_219_flags_var_3(void)

{
  return 0;
}



undefined4 inst_219_values_var_4(void)

{
  return 0;
}



undefined4 inst_219_flags_var_4(void)

{
  return 0;
}



undefined4 inst_219_values_var_5(void)

{
  return 0;
}



undefined4 inst_219_flags_var_5(void)

{
  return 0;
}



undefined4 inst_219_values_var_6(void)

{
  return 0;
}



undefined4 inst_219_flags_var_6(void)

{
  return 0;
}



undefined4 inst_219_values_var_7(void)

{
  return 0;
}



undefined4 inst_219_flags_var_7(void)

{
  return 0;
}



undefined4 inst_219_values_var_8(void)

{
  return 0;
}



undefined4 inst_219_flags_var_8(void)

{
  return 0;
}



undefined4 inst_219_values_var_9(void)

{
  return 0;
}



undefined4 inst_219_flags_var_9(void)

{
  return 0;
}



undefined4 inst_220_values_var_0(void)

{
  return 0;
}



undefined4 inst_220_flags_var_0(void)

{
  return 0;
}



undefined4 inst_220_values_var_1(void)

{
  return 0;
}



undefined4 inst_220_flags_var_1(void)

{
  return 0;
}



undefined4 inst_220_values_var_2(void)

{
  return 0;
}



undefined4 inst_220_flags_var_2(void)

{
  return 0;
}



undefined4 inst_220_values_var_3(void)

{
  return 0;
}



undefined4 inst_220_flags_var_3(void)

{
  return 0;
}



undefined4 inst_220_values_var_4(void)

{
  return 0;
}



undefined4 inst_220_flags_var_4(void)

{
  return 0;
}



undefined4 inst_220_values_var_5(void)

{
  return 0;
}



undefined4 inst_220_flags_var_5(void)

{
  return 0;
}



undefined4 inst_220_values_var_6(void)

{
  return 0;
}



undefined4 inst_220_flags_var_6(void)

{
  return 0;
}



undefined4 inst_220_values_var_7(void)

{
  return 0;
}



undefined4 inst_220_flags_var_7(void)

{
  return 0;
}



undefined4 inst_220_values_var_8(void)

{
  return 0;
}



undefined4 inst_220_flags_var_8(void)

{
  return 0;
}



undefined4 inst_220_values_var_9(void)

{
  return 0;
}



undefined4 inst_220_flags_var_9(void)

{
  return 0;
}



undefined4 inst_221_values_var_0(void)

{
  return 0;
}



undefined4 inst_221_flags_var_0(void)

{
  return 0;
}



undefined4 inst_221_values_var_1(void)

{
  return 0;
}



undefined4 inst_221_flags_var_1(void)

{
  return 0;
}



undefined4 inst_221_values_var_2(void)

{
  return 0;
}



undefined4 inst_221_flags_var_2(void)

{
  return 0;
}



undefined4 inst_221_values_var_3(void)

{
  return 0;
}



undefined4 inst_221_flags_var_3(void)

{
  return 0;
}



undefined4 inst_221_values_var_4(void)

{
  return 0;
}



undefined4 inst_221_flags_var_4(void)

{
  return 0;
}



undefined4 inst_221_values_var_5(void)

{
  return 0;
}



undefined4 inst_221_flags_var_5(void)

{
  return 0;
}



undefined4 inst_221_values_var_6(void)

{
  return 0;
}



undefined4 inst_221_flags_var_6(void)

{
  return 0;
}



undefined4 inst_221_values_var_7(void)

{
  return 0;
}



undefined4 inst_221_flags_var_7(void)

{
  return 0;
}



undefined4 inst_221_values_var_8(void)

{
  return 0;
}



undefined4 inst_221_flags_var_8(void)

{
  return 0;
}



undefined4 inst_221_values_var_9(void)

{
  return 0;
}



undefined4 inst_221_flags_var_9(void)

{
  return 0;
}



undefined4 inst_222_values_var_0(void)

{
  return 0;
}



undefined4 inst_222_flags_var_0(void)

{
  return 0;
}



undefined4 inst_222_values_var_1(void)

{
  return 0;
}



undefined4 inst_222_flags_var_1(void)

{
  return 0;
}



undefined4 inst_222_values_var_2(void)

{
  return 0;
}



undefined4 inst_222_flags_var_2(void)

{
  return 0;
}



undefined4 inst_222_values_var_3(void)

{
  return 0;
}



undefined4 inst_222_flags_var_3(void)

{
  return 0;
}



undefined4 inst_222_values_var_4(void)

{
  return 0;
}



undefined4 inst_222_flags_var_4(void)

{
  return 0;
}



undefined4 inst_222_values_var_5(void)

{
  return 0;
}



undefined4 inst_222_flags_var_5(void)

{
  return 0;
}



undefined4 inst_222_values_var_6(void)

{
  return 0;
}



undefined4 inst_222_flags_var_6(void)

{
  return 0;
}



undefined4 inst_222_values_var_7(void)

{
  return 0;
}



undefined4 inst_222_flags_var_7(void)

{
  return 0;
}



undefined4 inst_222_values_var_8(void)

{
  return 0;
}



undefined4 inst_222_flags_var_8(void)

{
  return 0;
}



undefined4 inst_222_values_var_9(void)

{
  return 0;
}



undefined4 inst_222_flags_var_9(void)

{
  return 0;
}



undefined4 inst_223_values_var_0(void)

{
  return 0;
}



undefined4 inst_223_flags_var_0(void)

{
  return 0;
}



undefined4 inst_223_values_var_1(void)

{
  return 0;
}



undefined4 inst_223_flags_var_1(void)

{
  return 0;
}



undefined4 inst_223_values_var_2(void)

{
  return 0;
}



undefined4 inst_223_flags_var_2(void)

{
  return 0;
}



undefined4 inst_223_values_var_3(void)

{
  return 0;
}



undefined4 inst_223_flags_var_3(void)

{
  return 0;
}



undefined4 inst_223_values_var_4(void)

{
  return 0;
}



undefined4 inst_223_flags_var_4(void)

{
  return 0;
}



undefined4 inst_223_values_var_5(void)

{
  return 0;
}



undefined4 inst_223_flags_var_5(void)

{
  return 0;
}



undefined4 inst_223_values_var_6(void)

{
  return 0;
}



undefined4 inst_223_flags_var_6(void)

{
  return 0;
}



undefined4 inst_223_values_var_7(void)

{
  return 0;
}



undefined4 inst_223_flags_var_7(void)

{
  return 0;
}



undefined4 inst_223_values_var_8(void)

{
  return 0;
}



undefined4 inst_223_flags_var_8(void)

{
  return 0;
}



undefined4 inst_223_values_var_9(void)

{
  return 0;
}



undefined4 inst_223_flags_var_9(void)

{
  return 0;
}



undefined4 inst_224_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b432a)
// WARNING: Removing unreachable block (ram,0x080b4347)

undefined4 inst_224_flags_var_0(void)

{
  return 0;
}



undefined4 inst_224_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b43ec)
// WARNING: Removing unreachable block (ram,0x080b43da)
// WARNING: Removing unreachable block (ram,0x080b4409)

undefined4 inst_224_flags_var_1(void)

{
  return 0;
}



undefined4 inst_224_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b44bb)

undefined4 inst_224_flags_var_2(void)

{
  return 0;
}



undefined4 inst_224_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b455e)

undefined4 inst_224_flags_var_3(void)

{
  return 0;
}



undefined4 inst_224_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b4632)

undefined4 inst_224_flags_var_4(void)

{
  return 0;
}



undefined4 inst_224_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b4701)
// WARNING: Removing unreachable block (ram,0x080b46e2)
// WARNING: Removing unreachable block (ram,0x080b4711)

undefined4 inst_224_flags_var_5(void)

{
  return 0;
}



undefined4 inst_224_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b47c3)
// WARNING: Removing unreachable block (ram,0x080b47a4)
// WARNING: Removing unreachable block (ram,0x080b47b6)
// WARNING: Removing unreachable block (ram,0x080b47d3)

undefined4 inst_224_flags_var_6(void)

{
  return 0;
}



undefined4 inst_224_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b4878)
// WARNING: Removing unreachable block (ram,0x080b4895)

undefined4 inst_224_flags_var_7(void)

{
  return 0;
}



undefined4 inst_224_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b493a)
// WARNING: Removing unreachable block (ram,0x080b4947)

undefined4 inst_224_flags_var_8(void)

{
  return 0;
}



undefined4 inst_224_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b4a19)

undefined4 inst_224_flags_var_9(void)

{
  return 0;
}



undefined4 inst_225_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b4aca)
// WARNING: Removing unreachable block (ram,0x080b4abd)
// WARNING: Removing unreachable block (ram,0x080b4ad7)

int inst_225_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_225_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b4b8b)

undefined4 inst_225_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_225_values_var_2(void)

{
  return 0;
}



int inst_225_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_225_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b4d27)
// WARNING: Removing unreachable block (ram,0x080b4d41)

undefined4 inst_225_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_225_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b4de8)
// WARNING: Removing unreachable block (ram,0x080b4df5)

undefined4 inst_225_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_225_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b4ec3)
// WARNING: Removing unreachable block (ram,0x080b4eb6)
// WARNING: Removing unreachable block (ram,0x080b4edd)

int inst_225_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_225_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b4f9e)

int inst_225_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_225_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b506c)
// WARNING: Removing unreachable block (ram,0x080b505f)
// WARNING: Removing unreachable block (ram,0x080b5079)

int inst_225_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_225_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5139)
// WARNING: Removing unreachable block (ram,0x080b511f)
// WARNING: Removing unreachable block (ram,0x080b512c)
// WARNING: Removing unreachable block (ram,0x080b5146)

undefined4 inst_225_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_225_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5207)
// WARNING: Removing unreachable block (ram,0x080b51ed)
// WARNING: Removing unreachable block (ram,0x080b51fa)
// WARNING: Removing unreachable block (ram,0x080b5214)

undefined4 inst_225_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_226_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b52c6)

undefined4 inst_226_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_226_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5385)
// WARNING: Removing unreachable block (ram,0x080b5392)

int inst_226_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_226_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b545e)
// WARNING: Removing unreachable block (ram,0x080b546b)

undefined4 inst_226_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_226_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5537)

undefined4 inst_226_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_226_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5603)
// WARNING: Removing unreachable block (ram,0x080b55f6)
// WARNING: Removing unreachable block (ram,0x080b5610)

int inst_226_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_226_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b56cf)

int inst_226_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_226_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5781)
// WARNING: Removing unreachable block (ram,0x080b578e)

int inst_226_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_226_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b584d)
// WARNING: Removing unreachable block (ram,0x080b5874)

undefined4 inst_226_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_226_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5933)
// WARNING: Removing unreachable block (ram,0x080b5919)
// WARNING: Removing unreachable block (ram,0x080b5940)

int inst_226_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_226_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b59e5)
// WARNING: Removing unreachable block (ram,0x080b5a0c)

int inst_226_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_227_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5ac4)
// WARNING: Removing unreachable block (ram,0x080b5ad1)

undefined4 inst_227_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_227_values_var_1(void)

{
  return 0;
}



int inst_227_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_227_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5c74)
// WARNING: Removing unreachable block (ram,0x080b5c5a)
// WARNING: Removing unreachable block (ram,0x080b5c81)

undefined4 inst_227_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_227_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5d39)
// WARNING: Removing unreachable block (ram,0x080b5d2c)
// WARNING: Removing unreachable block (ram,0x080b5d53)

int inst_227_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_227_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5e0b)

undefined4 inst_227_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_227_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5edc)

undefined4 inst_227_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_227_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5fac)
// WARNING: Removing unreachable block (ram,0x080b5f9f)
// WARNING: Removing unreachable block (ram,0x080b5fc6)

undefined4 inst_227_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_227_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b607e)
// WARNING: Removing unreachable block (ram,0x080b608b)

int inst_227_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_227_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b615d)
// WARNING: Removing unreachable block (ram,0x080b6143)
// WARNING: Removing unreachable block (ram,0x080b616a)

int inst_227_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_227_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6222)
// WARNING: Removing unreachable block (ram,0x080b6215)
// WARNING: Removing unreachable block (ram,0x080b623c)

int inst_227_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_228_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b62f0)

undefined4 inst_228_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_228_values_var_1(void)

{
  return 0;
}



undefined4 inst_228_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_228_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b648c)
// WARNING: Removing unreachable block (ram,0x080b6499)

int inst_228_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_228_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6567)
// WARNING: Removing unreachable block (ram,0x080b654d)
// WARNING: Removing unreachable block (ram,0x080b655a)
// WARNING: Removing unreachable block (ram,0x080b6574)

int inst_228_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_228_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6628)
// WARNING: Removing unreachable block (ram,0x080b6635)

int inst_228_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_228_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6703)
// WARNING: Removing unreachable block (ram,0x080b66f6)
// WARNING: Removing unreachable block (ram,0x080b6710)

undefined4 inst_228_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_228_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b67c4)

undefined4 inst_228_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_228_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6885)
// WARNING: Removing unreachable block (ram,0x080b68ac)

int inst_228_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_228_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6960)
// WARNING: Removing unreachable block (ram,0x080b696d)

int inst_228_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_228_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6a2e)
// WARNING: Removing unreachable block (ram,0x080b6a3b)

undefined4 inst_228_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_229_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6af5)
// WARNING: Removing unreachable block (ram,0x080b6b02)
// WARNING: Removing unreachable block (ram,0x080b6b0f)

int inst_229_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_229_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6be3)
// WARNING: Removing unreachable block (ram,0x080b6bc9)
// WARNING: Removing unreachable block (ram,0x080b6bd6)
// WARNING: Removing unreachable block (ram,0x080b6bf0)

undefined4 inst_229_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_229_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6caa)

int inst_229_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_229_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6d7d)
// WARNING: Removing unreachable block (ram,0x080b6d70)
// WARNING: Removing unreachable block (ram,0x080b6d97)

undefined4 inst_229_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_229_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6e43)
// WARNING: Removing unreachable block (ram,0x080b6e50)
// WARNING: Removing unreachable block (ram,0x080b6e5d)

int inst_229_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_229_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6f24)
// WARNING: Removing unreachable block (ram,0x080b6f31)

int inst_229_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_229_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6ff8)
// WARNING: Removing unreachable block (ram,0x080b6feb)
// WARNING: Removing unreachable block (ram,0x080b7012)

int inst_229_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_229_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b70cc)
// WARNING: Removing unreachable block (ram,0x080b70d9)

undefined4 inst_229_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_229_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b71a0)

undefined4 inst_229_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_229_values_var_9(void)

{
  return 0;
}



int inst_229_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_230_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b734d)
// WARNING: Removing unreachable block (ram,0x080b7333)
// WARNING: Removing unreachable block (ram,0x080b735a)

int inst_230_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_230_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b73ff)
// WARNING: Removing unreachable block (ram,0x080b7426)

undefined4 inst_230_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_230_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b74d8)
// WARNING: Removing unreachable block (ram,0x080b74cb)
// WARNING: Removing unreachable block (ram,0x080b74f2)

undefined4 inst_230_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_230_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b75b1)
// WARNING: Removing unreachable block (ram,0x080b7597)
// WARNING: Removing unreachable block (ram,0x080b75be)

undefined4 inst_230_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_230_values_var_4(void)

{
  return 0;
}



int inst_230_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_230_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7749)

undefined4 inst_230_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_230_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7808)
// WARNING: Removing unreachable block (ram,0x080b77fb)
// WARNING: Removing unreachable block (ram,0x080b7822)

int inst_230_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_230_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b78d4)
// WARNING: Removing unreachable block (ram,0x080b78c7)
// WARNING: Removing unreachable block (ram,0x080b78ee)

undefined4 inst_230_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_230_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b79a0)
// WARNING: Removing unreachable block (ram,0x080b79ad)

undefined4 inst_230_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_230_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7a6c)

int inst_230_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_231_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7b48)

undefined4 inst_231_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_231_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7c0a)
// WARNING: Removing unreachable block (ram,0x080b7bfd)
// WARNING: Removing unreachable block (ram,0x080b7c24)

undefined4 inst_231_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_231_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7cd8)
// WARNING: Removing unreachable block (ram,0x080b7ce5)

int inst_231_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_231_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7db5)
// WARNING: Removing unreachable block (ram,0x080b7d9b)
// WARNING: Removing unreachable block (ram,0x080b7da8)
// WARNING: Removing unreachable block (ram,0x080b7dc2)

int inst_231_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_231_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7e78)
// WARNING: Removing unreachable block (ram,0x080b7e92)

int inst_231_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_231_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7f48)
// WARNING: Removing unreachable block (ram,0x080b7f55)

int inst_231_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_231_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8018)
// WARNING: Removing unreachable block (ram,0x080b800b)
// WARNING: Removing unreachable block (ram,0x080b8032)

int inst_231_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_231_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b80f4)

int inst_231_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_231_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b81a9)
// WARNING: Removing unreachable block (ram,0x080b81b6)
// WARNING: Removing unreachable block (ram,0x080b81c3)

undefined4 inst_231_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_231_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8279)
// WARNING: Removing unreachable block (ram,0x080b8286)

undefined4 inst_231_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_232_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8347)
// WARNING: Removing unreachable block (ram,0x080b8354)

int inst_232_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_232_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8422)

int inst_232_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_232_values_var_2(void)

{
  return 0;
}



undefined4 inst_232_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_232_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b85be)
// WARNING: Removing unreachable block (ram,0x080b85cb)

int inst_232_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_232_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8699)
// WARNING: Removing unreachable block (ram,0x080b867f)
// WARNING: Removing unreachable block (ram,0x080b868c)
// WARNING: Removing unreachable block (ram,0x080b86a6)

undefined4 inst_232_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_232_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b875a)

undefined4 inst_232_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_232_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8835)
// WARNING: Removing unreachable block (ram,0x080b881b)
// WARNING: Removing unreachable block (ram,0x080b8828)
// WARNING: Removing unreachable block (ram,0x080b8842)

int inst_232_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_232_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8903)
// WARNING: Removing unreachable block (ram,0x080b88e9)
// WARNING: Removing unreachable block (ram,0x080b88f6)
// WARNING: Removing unreachable block (ram,0x080b8910)

int inst_232_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_232_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b89c4)

int inst_232_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_232_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8a92)
// WARNING: Removing unreachable block (ram,0x080b8a9f)

undefined4 inst_232_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_233_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8b73)

undefined4 inst_233_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_233_values_var_1(void)

{
  return 0;
}



undefined4 inst_233_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_233_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8d01)
// WARNING: Removing unreachable block (ram,0x080b8d0e)
// WARNING: Removing unreachable block (ram,0x080b8d1b)

int inst_233_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_233_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8dd5)
// WARNING: Removing unreachable block (ram,0x080b8dfc)

int inst_233_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_233_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8ec3)
// WARNING: Removing unreachable block (ram,0x080b8eb6)
// WARNING: Removing unreachable block (ram,0x080b8ed0)

undefined4 inst_233_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_233_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8f97)
// WARNING: Removing unreachable block (ram,0x080b8f7d)
// WARNING: Removing unreachable block (ram,0x080b8fa4)

int inst_233_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_233_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b906b)
// WARNING: Removing unreachable block (ram,0x080b9051)
// WARNING: Removing unreachable block (ram,0x080b905e)
// WARNING: Removing unreachable block (ram,0x080b9078)

undefined4 inst_233_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_233_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9132)
// WARNING: Removing unreachable block (ram,0x080b914c)

int inst_233_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_233_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b91f9)
// WARNING: Removing unreachable block (ram,0x080b9206)
// WARNING: Removing unreachable block (ram,0x080b9213)

undefined4 inst_233_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_233_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b92da)
// WARNING: Removing unreachable block (ram,0x080b92cd)
// WARNING: Removing unreachable block (ram,0x080b92f4)

int inst_233_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_234_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b93aa)
// WARNING: Removing unreachable block (ram,0x080b93b7)

int inst_234_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_234_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b946d)
// WARNING: Removing unreachable block (ram,0x080b947a)

int inst_234_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_234_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b954a)

int inst_234_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_234_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b961a)
// WARNING: Removing unreachable block (ram,0x080b9627)

int inst_234_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_234_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b96f7)
// WARNING: Removing unreachable block (ram,0x080b96ea)
// WARNING: Removing unreachable block (ram,0x080b9704)

int inst_234_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_234_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b97ba)
// WARNING: Removing unreachable block (ram,0x080b97ad)
// WARNING: Removing unreachable block (ram,0x080b97d4)

undefined4 inst_234_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_234_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b987d)
// WARNING: Removing unreachable block (ram,0x080b98a4)

undefined4 inst_234_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_234_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b995a)
// WARNING: Removing unreachable block (ram,0x080b9974)

undefined4 inst_234_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_234_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9a2a)
// WARNING: Removing unreachable block (ram,0x080b9a37)

undefined4 inst_234_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_234_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9afa)

int inst_234_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_235_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9bd0)
// WARNING: Removing unreachable block (ram,0x080b9bc3)
// WARNING: Removing unreachable block (ram,0x080b9bea)

int inst_235_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_235_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9ca4)
// WARNING: Removing unreachable block (ram,0x080b9cb1)

int inst_235_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_235_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9d79)

int inst_235_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_235_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9e42)
// WARNING: Removing unreachable block (ram,0x080b9e69)

int inst_235_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_235_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9f25)
// WARNING: Removing unreachable block (ram,0x080b9f3f)

int inst_235_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_235_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9ffa)
// WARNING: Removing unreachable block (ram,0x080b9fed)
// WARNING: Removing unreachable block (ram,0x080ba014)

int inst_235_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_235_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba0cf)
// WARNING: Removing unreachable block (ram,0x080ba0e9)

int inst_235_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_235_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba1b2)
// WARNING: Removing unreachable block (ram,0x080ba198)
// WARNING: Removing unreachable block (ram,0x080ba1a5)
// WARNING: Removing unreachable block (ram,0x080ba1bf)

undefined4 inst_235_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_235_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba288)
// WARNING: Removing unreachable block (ram,0x080ba27b)
// WARNING: Removing unreachable block (ram,0x080ba295)

int inst_235_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_235_values_var_9(void)

{
  return 0;
}



undefined4 inst_235_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_236_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba41f)
// WARNING: Removing unreachable block (ram,0x080ba439)

int inst_236_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_236_values_var_1(void)

{
  return 0;
}



undefined4 inst_236_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_236_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba5ae)
// WARNING: Removing unreachable block (ram,0x080ba5bb)
// WARNING: Removing unreachable block (ram,0x080ba5c8)

int inst_236_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_236_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba696)
// WARNING: Removing unreachable block (ram,0x080ba689)
// WARNING: Removing unreachable block (ram,0x080ba6a3)

int inst_236_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_236_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba757)

int inst_236_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_236_values_var_5(void)

{
  return 0;
}



undefined4 inst_236_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_236_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba8f3)
// WARNING: Removing unreachable block (ram,0x080ba90d)

int inst_236_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_236_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba9c1)

int inst_236_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_236_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080baa8f)
// WARNING: Removing unreachable block (ram,0x080baa82)
// WARNING: Removing unreachable block (ram,0x080baaa9)

int inst_236_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_236_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bab6a)
// WARNING: Removing unreachable block (ram,0x080bab50)
// WARNING: Removing unreachable block (ram,0x080bab5d)
// WARNING: Removing unreachable block (ram,0x080bab77)

int inst_236_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_237_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bac3a)
// WARNING: Removing unreachable block (ram,0x080bac20)
// WARNING: Removing unreachable block (ram,0x080bac2d)
// WARNING: Removing unreachable block (ram,0x080bac47)

int inst_237_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_237_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bacfc)
// WARNING: Removing unreachable block (ram,0x080bad09)

undefined4 inst_237_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_237_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080badcb)
// WARNING: Removing unreachable block (ram,0x080badbe)
// WARNING: Removing unreachable block (ram,0x080bade5)

int inst_237_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_237_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bae8e)
// WARNING: Removing unreachable block (ram,0x080bae9b)

int inst_237_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_237_values_var_4(void)

{
  return 0;
}



undefined4 inst_237_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_237_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb03a)
// WARNING: Removing unreachable block (ram,0x080bb02d)
// WARNING: Removing unreachable block (ram,0x080bb054)

int inst_237_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_237_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb0fd)
// WARNING: Removing unreachable block (ram,0x080bb124)

undefined4 inst_237_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_237_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb1da)

int inst_237_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_237_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb29d)
// WARNING: Removing unreachable block (ram,0x080bb2aa)
// WARNING: Removing unreachable block (ram,0x080bb2b7)

int inst_237_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_237_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb36d)
// WARNING: Removing unreachable block (ram,0x080bb37a)
// WARNING: Removing unreachable block (ram,0x080bb387)

int inst_237_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_238_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb448)
// WARNING: Removing unreachable block (ram,0x080bb43b)
// WARNING: Removing unreachable block (ram,0x080bb462)

undefined4 inst_238_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_238_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb516)
// WARNING: Removing unreachable block (ram,0x080bb523)

undefined4 inst_238_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_238_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb5f1)
// WARNING: Removing unreachable block (ram,0x080bb5d7)
// WARNING: Removing unreachable block (ram,0x080bb5e4)
// WARNING: Removing unreachable block (ram,0x080bb5fe)

undefined4 inst_238_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_238_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb6b2)

undefined4 inst_238_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_238_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb78d)
// WARNING: Removing unreachable block (ram,0x080bb773)
// WARNING: Removing unreachable block (ram,0x080bb780)
// WARNING: Removing unreachable block (ram,0x080bb79a)

int inst_238_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_238_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb84e)
// WARNING: Removing unreachable block (ram,0x080bb841)
// WARNING: Removing unreachable block (ram,0x080bb868)

int inst_238_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_238_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb91c)
// WARNING: Removing unreachable block (ram,0x080bb90f)
// WARNING: Removing unreachable block (ram,0x080bb936)

undefined4 inst_238_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_238_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb9f7)
// WARNING: Removing unreachable block (ram,0x080bb9dd)
// WARNING: Removing unreachable block (ram,0x080bba04)

undefined4 inst_238_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_238_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bbab8)
// WARNING: Removing unreachable block (ram,0x080bbaab)
// WARNING: Removing unreachable block (ram,0x080bbad2)

undefined4 inst_238_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_238_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bbb93)
// WARNING: Removing unreachable block (ram,0x080bbb79)
// WARNING: Removing unreachable block (ram,0x080bbb86)
// WARNING: Removing unreachable block (ram,0x080bbba0)

int inst_238_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_239_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bbc67)
// WARNING: Removing unreachable block (ram,0x080bbc4d)
// WARNING: Removing unreachable block (ram,0x080bbc5a)
// WARNING: Removing unreachable block (ram,0x080bbc74)

int inst_239_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_239_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bbd3b)
// WARNING: Removing unreachable block (ram,0x080bbd2e)
// WARNING: Removing unreachable block (ram,0x080bbd48)

int inst_239_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_239_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bbdf5)
// WARNING: Removing unreachable block (ram,0x080bbe02)

undefined4 inst_239_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_239_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bbed6)
// WARNING: Removing unreachable block (ram,0x080bbec9)
// WARNING: Removing unreachable block (ram,0x080bbef0)

undefined4 inst_239_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_239_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bbfaa)
// WARNING: Removing unreachable block (ram,0x080bbfb7)

undefined4 inst_239_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_239_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc070)
// WARNING: Removing unreachable block (ram,0x080bc097)

undefined4 inst_239_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_239_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc143)
// WARNING: Removing unreachable block (ram,0x080bc150)

int inst_239_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_239_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc224)
// WARNING: Removing unreachable block (ram,0x080bc231)

undefined4 inst_239_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_239_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc2f8)

int inst_239_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_239_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc3bf)
// WARNING: Removing unreachable block (ram,0x080bc3cc)

undefined4 inst_239_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_240_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc48f)
// WARNING: Removing unreachable block (ram,0x080bc49c)
// WARNING: Removing unreachable block (ram,0x080bc4a9)

int inst_240_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_240_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc56c)
// WARNING: Removing unreachable block (ram,0x080bc55f)
// WARNING: Removing unreachable block (ram,0x080bc586)

undefined4 inst_240_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_240_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc63c)
// WARNING: Removing unreachable block (ram,0x080bc62f)
// WARNING: Removing unreachable block (ram,0x080bc656)

undefined4 inst_240_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_240_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc70c)

undefined4 inst_240_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_240_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc7dc)
// WARNING: Removing unreachable block (ram,0x080bc7cf)
// WARNING: Removing unreachable block (ram,0x080bc7f6)

undefined4 inst_240_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_240_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc8b9)
// WARNING: Removing unreachable block (ram,0x080bc8ac)
// WARNING: Removing unreachable block (ram,0x080bc8c6)

undefined4 inst_240_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_240_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc96f)
// WARNING: Removing unreachable block (ram,0x080bc97c)
// WARNING: Removing unreachable block (ram,0x080bc989)

int inst_240_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_240_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bca4c)
// WARNING: Removing unreachable block (ram,0x080bca66)

undefined4 inst_240_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_240_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bcb1c)
// WARNING: Removing unreachable block (ram,0x080bcb0f)
// WARNING: Removing unreachable block (ram,0x080bcb36)

undefined4 inst_240_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_240_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bcbf9)
// WARNING: Removing unreachable block (ram,0x080bcbec)
// WARNING: Removing unreachable block (ram,0x080bcc06)

int inst_240_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_241_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bccc2)
// WARNING: Removing unreachable block (ram,0x080bcccf)

undefined4 inst_241_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_241_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bcd8a)
// WARNING: Removing unreachable block (ram,0x080bcd97)
// WARNING: Removing unreachable block (ram,0x080bcda4)

undefined4 inst_241_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_241_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bce78)
// WARNING: Removing unreachable block (ram,0x080bce5e)
// WARNING: Removing unreachable block (ram,0x080bce6b)
// WARNING: Removing unreachable block (ram,0x080bce85)

int inst_241_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_241_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bcf40)
// WARNING: Removing unreachable block (ram,0x080bcf4d)

int inst_241_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_241_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd023)
// WARNING: Removing unreachable block (ram,0x080bd009)
// WARNING: Removing unreachable block (ram,0x080bd016)
// WARNING: Removing unreachable block (ram,0x080bd030)

int inst_241_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_241_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd0ec)
// WARNING: Removing unreachable block (ram,0x080bd0f9)

undefined4 inst_241_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_241_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd1cf)
// WARNING: Removing unreachable block (ram,0x080bd1c2)
// WARNING: Removing unreachable block (ram,0x080bd1dc)

int inst_241_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_241_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd298)
// WARNING: Removing unreachable block (ram,0x080bd2a5)

int inst_241_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_241_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd36c)
// WARNING: Removing unreachable block (ram,0x080bd386)

int inst_241_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_241_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd435)
// WARNING: Removing unreachable block (ram,0x080bd45c)

int inst_241_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_242_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd510)

undefined4 inst_242_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_242_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd5d1)
// WARNING: Removing unreachable block (ram,0x080bd5de)
// WARNING: Removing unreachable block (ram,0x080bd5eb)

int inst_242_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_242_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd69f)
// WARNING: Removing unreachable block (ram,0x080bd6c6)

undefined4 inst_242_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_242_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd77a)
// WARNING: Removing unreachable block (ram,0x080bd76d)
// WARNING: Removing unreachable block (ram,0x080bd794)

undefined4 inst_242_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_242_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd848)

int inst_242_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_242_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd916)

undefined4 inst_242_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_242_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd9e4)
// WARNING: Removing unreachable block (ram,0x080bd9d7)
// WARNING: Removing unreachable block (ram,0x080bd9fe)

undefined4 inst_242_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_242_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bdabf)
// WARNING: Removing unreachable block (ram,0x080bdaa5)
// WARNING: Removing unreachable block (ram,0x080bdacc)

undefined4 inst_242_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_242_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bdb80)
// WARNING: Removing unreachable block (ram,0x080bdb8d)

undefined4 inst_242_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_242_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bdc5b)
// WARNING: Removing unreachable block (ram,0x080bdc41)
// WARNING: Removing unreachable block (ram,0x080bdc4e)
// WARNING: Removing unreachable block (ram,0x080bdc68)

undefined4 inst_242_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_243_values_var_0(void)

{
  return 0;
}



undefined4 inst_243_flags_var_0(void)

{
  return 0;
}



undefined4 inst_243_values_var_1(void)

{
  return 0;
}



undefined4 inst_243_flags_var_1(void)

{
  return 0;
}



undefined4 inst_243_values_var_2(void)

{
  return 0;
}



undefined4 inst_243_flags_var_2(void)

{
  return 0;
}



undefined4 inst_243_values_var_3(void)

{
  return 0;
}



undefined4 inst_243_flags_var_3(void)

{
  return 0;
}



undefined4 inst_243_values_var_4(void)

{
  return 0;
}



undefined4 inst_243_flags_var_4(void)

{
  return 0;
}



undefined4 inst_243_values_var_5(void)

{
  return 0;
}



undefined4 inst_243_flags_var_5(void)

{
  return 0;
}



undefined4 inst_243_values_var_6(void)

{
  return 0;
}



undefined4 inst_243_flags_var_6(void)

{
  return 0;
}



undefined4 inst_243_values_var_7(void)

{
  return 0;
}



undefined4 inst_243_flags_var_7(void)

{
  return 0;
}



undefined4 inst_243_values_var_8(void)

{
  return 0;
}



undefined4 inst_243_flags_var_8(void)

{
  return 0;
}



undefined4 inst_243_values_var_9(void)

{
  return 0;
}



undefined4 inst_243_flags_var_9(void)

{
  return 0;
}



undefined4 inst_244_values_var_0(void)

{
  return 0;
}



undefined4 inst_244_flags_var_0(void)

{
  return 0;
}



undefined4 inst_244_values_var_1(void)

{
  return 0;
}



undefined4 inst_244_flags_var_1(void)

{
  return 0;
}



undefined4 inst_244_values_var_2(void)

{
  return 0;
}



undefined4 inst_244_flags_var_2(void)

{
  return 0;
}



undefined4 inst_244_values_var_3(void)

{
  return 0;
}



undefined4 inst_244_flags_var_3(void)

{
  return 0;
}



undefined4 inst_244_values_var_4(void)

{
  return 0;
}



undefined4 inst_244_flags_var_4(void)

{
  return 0;
}



undefined4 inst_244_values_var_5(void)

{
  return 0;
}



undefined4 inst_244_flags_var_5(void)

{
  return 0;
}



undefined4 inst_244_values_var_6(void)

{
  return 0;
}



undefined4 inst_244_flags_var_6(void)

{
  return 0;
}



undefined4 inst_244_values_var_7(void)

{
  return 0;
}



undefined4 inst_244_flags_var_7(void)

{
  return 0;
}



undefined4 inst_244_values_var_8(void)

{
  return 0;
}



undefined4 inst_244_flags_var_8(void)

{
  return 0;
}



undefined4 inst_244_values_var_9(void)

{
  return 0;
}



undefined4 inst_244_flags_var_9(void)

{
  return 0;
}



undefined4 inst_245_values_var_0(void)

{
  return 0;
}



undefined4 inst_245_flags_var_0(void)

{
  return 0;
}



undefined4 inst_245_values_var_1(void)

{
  return 0;
}



undefined4 inst_245_flags_var_1(void)

{
  return 0;
}



undefined4 inst_245_values_var_2(void)

{
  return 0;
}



undefined4 inst_245_flags_var_2(void)

{
  return 0;
}



undefined4 inst_245_values_var_3(void)

{
  return 0;
}



undefined4 inst_245_flags_var_3(void)

{
  return 0;
}



undefined4 inst_245_values_var_4(void)

{
  return 0;
}



undefined4 inst_245_flags_var_4(void)

{
  return 0;
}



undefined4 inst_245_values_var_5(void)

{
  return 0;
}



undefined4 inst_245_flags_var_5(void)

{
  return 0;
}



undefined4 inst_245_values_var_6(void)

{
  return 0;
}



undefined4 inst_245_flags_var_6(void)

{
  return 0;
}



undefined4 inst_245_values_var_7(void)

{
  return 0;
}



undefined4 inst_245_flags_var_7(void)

{
  return 0;
}



undefined4 inst_245_values_var_8(void)

{
  return 0;
}



undefined4 inst_245_flags_var_8(void)

{
  return 0;
}



undefined4 inst_245_values_var_9(void)

{
  return 0;
}



undefined4 inst_245_flags_var_9(void)

{
  return 0;
}



undefined4 inst_246_values_var_0(void)

{
  return 0;
}



undefined4 inst_246_flags_var_0(void)

{
  return 0;
}



undefined4 inst_246_values_var_1(void)

{
  return 0;
}



undefined4 inst_246_flags_var_1(void)

{
  return 0;
}



undefined4 inst_246_values_var_2(void)

{
  return 0;
}



undefined4 inst_246_flags_var_2(void)

{
  return 0;
}



undefined4 inst_246_values_var_3(void)

{
  return 0;
}



undefined4 inst_246_flags_var_3(void)

{
  return 0;
}



undefined4 inst_246_values_var_4(void)

{
  return 0;
}



undefined4 inst_246_flags_var_4(void)

{
  return 0;
}



undefined4 inst_246_values_var_5(void)

{
  return 0;
}



undefined4 inst_246_flags_var_5(void)

{
  return 0;
}



undefined4 inst_246_values_var_6(void)

{
  return 0;
}



undefined4 inst_246_flags_var_6(void)

{
  return 0;
}



undefined4 inst_246_values_var_7(void)

{
  return 0;
}



undefined4 inst_246_flags_var_7(void)

{
  return 0;
}



undefined4 inst_246_values_var_8(void)

{
  return 0;
}



undefined4 inst_246_flags_var_8(void)

{
  return 0;
}



undefined4 inst_246_values_var_9(void)

{
  return 0;
}



undefined4 inst_246_flags_var_9(void)

{
  return 0;
}



undefined4 inst_247_values_var_0(void)

{
  return 0;
}



undefined4 inst_247_flags_var_0(void)

{
  return 0;
}



undefined4 inst_247_values_var_1(void)

{
  return 0;
}



undefined4 inst_247_flags_var_1(void)

{
  return 0;
}



undefined4 inst_247_values_var_2(void)

{
  return 0;
}



undefined4 inst_247_flags_var_2(void)

{
  return 0;
}



undefined4 inst_247_values_var_3(void)

{
  return 0;
}



undefined4 inst_247_flags_var_3(void)

{
  return 0;
}



undefined4 inst_247_values_var_4(void)

{
  return 0;
}



undefined4 inst_247_flags_var_4(void)

{
  return 0;
}



undefined4 inst_247_values_var_5(void)

{
  return 0;
}



undefined4 inst_247_flags_var_5(void)

{
  return 0;
}



undefined4 inst_247_values_var_6(void)

{
  return 0;
}



undefined4 inst_247_flags_var_6(void)

{
  return 0;
}



undefined4 inst_247_values_var_7(void)

{
  return 0;
}



undefined4 inst_247_flags_var_7(void)

{
  return 0;
}



undefined4 inst_247_values_var_8(void)

{
  return 0;
}



undefined4 inst_247_flags_var_8(void)

{
  return 0;
}



undefined4 inst_247_values_var_9(void)

{
  return 0;
}



undefined4 inst_247_flags_var_9(void)

{
  return 0;
}



undefined4 inst_248_values_var_0(void)

{
  return 0;
}



undefined4 inst_248_flags_var_0(void)

{
  return 0;
}



undefined4 inst_248_values_var_1(void)

{
  return 0;
}



undefined4 inst_248_flags_var_1(void)

{
  return 0;
}



undefined4 inst_248_values_var_2(void)

{
  return 0;
}



undefined4 inst_248_flags_var_2(void)

{
  return 0;
}



undefined4 inst_248_values_var_3(void)

{
  return 0;
}



undefined4 inst_248_flags_var_3(void)

{
  return 0;
}



undefined4 inst_248_values_var_4(void)

{
  return 0;
}



undefined4 inst_248_flags_var_4(void)

{
  return 0;
}



undefined4 inst_248_values_var_5(void)

{
  return 0;
}



undefined4 inst_248_flags_var_5(void)

{
  return 0;
}



undefined4 inst_248_values_var_6(void)

{
  return 0;
}



undefined4 inst_248_flags_var_6(void)

{
  return 0;
}



undefined4 inst_248_values_var_7(void)

{
  return 0;
}



undefined4 inst_248_flags_var_7(void)

{
  return 0;
}



undefined4 inst_248_values_var_8(void)

{
  return 0;
}



undefined4 inst_248_flags_var_8(void)

{
  return 0;
}



undefined4 inst_248_values_var_9(void)

{
  return 0;
}



undefined4 inst_248_flags_var_9(void)

{
  return 0;
}



undefined4 inst_249_values_var_0(void)

{
  return 0;
}



undefined4 inst_249_flags_var_0(void)

{
  return 0;
}



undefined4 inst_249_values_var_1(void)

{
  return 0;
}



undefined4 inst_249_flags_var_1(void)

{
  return 0;
}



undefined4 inst_249_values_var_2(void)

{
  return 0;
}



undefined4 inst_249_flags_var_2(void)

{
  return 0;
}



undefined4 inst_249_values_var_3(void)

{
  return 0;
}



undefined4 inst_249_flags_var_3(void)

{
  return 0;
}



undefined4 inst_249_values_var_4(void)

{
  return 0;
}



undefined4 inst_249_flags_var_4(void)

{
  return 0;
}



undefined4 inst_249_values_var_5(void)

{
  return 0;
}



undefined4 inst_249_flags_var_5(void)

{
  return 0;
}



undefined4 inst_249_values_var_6(void)

{
  return 0;
}



undefined4 inst_249_flags_var_6(void)

{
  return 0;
}



undefined4 inst_249_values_var_7(void)

{
  return 0;
}



undefined4 inst_249_flags_var_7(void)

{
  return 0;
}



undefined4 inst_249_values_var_8(void)

{
  return 0;
}



undefined4 inst_249_flags_var_8(void)

{
  return 0;
}



undefined4 inst_249_values_var_9(void)

{
  return 0;
}



undefined4 inst_249_flags_var_9(void)

{
  return 0;
}



undefined4 inst_250_values_var_0(void)

{
  return 0;
}



undefined4 inst_250_flags_var_0(void)

{
  return 0;
}



undefined4 inst_250_values_var_1(void)

{
  return 0;
}



undefined4 inst_250_flags_var_1(void)

{
  return 0;
}



undefined4 inst_250_values_var_2(void)

{
  return 0;
}



undefined4 inst_250_flags_var_2(void)

{
  return 0;
}



undefined4 inst_250_values_var_3(void)

{
  return 0;
}



undefined4 inst_250_flags_var_3(void)

{
  return 0;
}



undefined4 inst_250_values_var_4(void)

{
  return 0;
}



undefined4 inst_250_flags_var_4(void)

{
  return 0;
}



undefined4 inst_250_values_var_5(void)

{
  return 0;
}



undefined4 inst_250_flags_var_5(void)

{
  return 0;
}



undefined4 inst_250_values_var_6(void)

{
  return 0;
}



undefined4 inst_250_flags_var_6(void)

{
  return 0;
}



undefined4 inst_250_values_var_7(void)

{
  return 0;
}



undefined4 inst_250_flags_var_7(void)

{
  return 0;
}



undefined4 inst_250_values_var_8(void)

{
  return 0;
}



undefined4 inst_250_flags_var_8(void)

{
  return 0;
}



undefined4 inst_250_values_var_9(void)

{
  return 0;
}



undefined4 inst_250_flags_var_9(void)

{
  return 0;
}



undefined4 inst_251_values_var_0(void)

{
  return 0;
}



undefined4 inst_251_flags_var_0(void)

{
  return 0;
}



undefined4 inst_251_values_var_1(void)

{
  return 0;
}



undefined4 inst_251_flags_var_1(void)

{
  return 0;
}



undefined4 inst_251_values_var_2(void)

{
  return 0;
}



undefined4 inst_251_flags_var_2(void)

{
  return 0;
}



undefined4 inst_251_values_var_3(void)

{
  return 0;
}



undefined4 inst_251_flags_var_3(void)

{
  return 0;
}



undefined4 inst_251_values_var_4(void)

{
  return 0;
}



undefined4 inst_251_flags_var_4(void)

{
  return 0;
}



undefined4 inst_251_values_var_5(void)

{
  return 0;
}



undefined4 inst_251_flags_var_5(void)

{
  return 0;
}



undefined4 inst_251_values_var_6(void)

{
  return 0;
}



undefined4 inst_251_flags_var_6(void)

{
  return 0;
}



undefined4 inst_251_values_var_7(void)

{
  return 0;
}



undefined4 inst_251_flags_var_7(void)

{
  return 0;
}



undefined4 inst_251_values_var_8(void)

{
  return 0;
}



undefined4 inst_251_flags_var_8(void)

{
  return 0;
}



undefined4 inst_251_values_var_9(void)

{
  return 0;
}



undefined4 inst_251_flags_var_9(void)

{
  return 0;
}



undefined4 inst_252_values_var_0(void)

{
  return 0;
}



undefined4 inst_252_flags_var_0(void)

{
  return 0;
}



undefined4 inst_252_values_var_1(void)

{
  return 0;
}



undefined4 inst_252_flags_var_1(void)

{
  return 0;
}



undefined4 inst_252_values_var_2(void)

{
  return 0;
}



undefined4 inst_252_flags_var_2(void)

{
  return 0;
}



undefined4 inst_252_values_var_3(void)

{
  return 0;
}



undefined4 inst_252_flags_var_3(void)

{
  return 0;
}



undefined4 inst_252_values_var_4(void)

{
  return 0;
}



undefined4 inst_252_flags_var_4(void)

{
  return 0;
}



undefined4 inst_252_values_var_5(void)

{
  return 0;
}



undefined4 inst_252_flags_var_5(void)

{
  return 0;
}



undefined4 inst_252_values_var_6(void)

{
  return 0;
}



undefined4 inst_252_flags_var_6(void)

{
  return 0;
}



undefined4 inst_252_values_var_7(void)

{
  return 0;
}



undefined4 inst_252_flags_var_7(void)

{
  return 0;
}



undefined4 inst_252_values_var_8(void)

{
  return 0;
}



undefined4 inst_252_flags_var_8(void)

{
  return 0;
}



undefined4 inst_252_values_var_9(void)

{
  return 0;
}



undefined4 inst_252_flags_var_9(void)

{
  return 0;
}



undefined4 inst_253_values_var_0(void)

{
  return 0;
}



undefined4 inst_253_flags_var_0(void)

{
  return 0;
}



undefined4 inst_253_values_var_1(void)

{
  return 0;
}



undefined4 inst_253_flags_var_1(void)

{
  return 0;
}



undefined4 inst_253_values_var_2(void)

{
  return 0;
}



undefined4 inst_253_flags_var_2(void)

{
  return 0;
}



undefined4 inst_253_values_var_3(void)

{
  return 0;
}



undefined4 inst_253_flags_var_3(void)

{
  return 0;
}



undefined4 inst_253_values_var_4(void)

{
  return 0;
}



undefined4 inst_253_flags_var_4(void)

{
  return 0;
}



undefined4 inst_253_values_var_5(void)

{
  return 0;
}



undefined4 inst_253_flags_var_5(void)

{
  return 0;
}



undefined4 inst_253_values_var_6(void)

{
  return 0;
}



undefined4 inst_253_flags_var_6(void)

{
  return 0;
}



undefined4 inst_253_values_var_7(void)

{
  return 0;
}



undefined4 inst_253_flags_var_7(void)

{
  return 0;
}



undefined4 inst_253_values_var_8(void)

{
  return 0;
}



undefined4 inst_253_flags_var_8(void)

{
  return 0;
}



undefined4 inst_253_values_var_9(void)

{
  return 0;
}



undefined4 inst_253_flags_var_9(void)

{
  return 0;
}



undefined4 inst_254_values_var_0(void)

{
  return 0;
}



undefined4 inst_254_flags_var_0(void)

{
  return 0;
}



undefined4 inst_254_values_var_1(void)

{
  return 0;
}



undefined4 inst_254_flags_var_1(void)

{
  return 0;
}



undefined4 inst_254_values_var_2(void)

{
  return 0;
}



undefined4 inst_254_flags_var_2(void)

{
  return 0;
}



undefined4 inst_254_values_var_3(void)

{
  return 0;
}



undefined4 inst_254_flags_var_3(void)

{
  return 0;
}



undefined4 inst_254_values_var_4(void)

{
  return 0;
}



undefined4 inst_254_flags_var_4(void)

{
  return 0;
}



undefined4 inst_254_values_var_5(void)

{
  return 0;
}



undefined4 inst_254_flags_var_5(void)

{
  return 0;
}



undefined4 inst_254_values_var_6(void)

{
  return 0;
}



undefined4 inst_254_flags_var_6(void)

{
  return 0;
}



undefined4 inst_254_values_var_7(void)

{
  return 0;
}



undefined4 inst_254_flags_var_7(void)

{
  return 0;
}



undefined4 inst_254_values_var_8(void)

{
  return 0;
}



undefined4 inst_254_flags_var_8(void)

{
  return 0;
}



undefined4 inst_254_values_var_9(void)

{
  return 0;
}



undefined4 inst_254_flags_var_9(void)

{
  return 0;
}



undefined4 inst_255_values_var_0(void)

{
  return 0;
}



undefined4 inst_255_flags_var_0(void)

{
  return 0;
}



undefined4 inst_255_values_var_1(void)

{
  return 0;
}



undefined4 inst_255_flags_var_1(void)

{
  return 0;
}



undefined4 inst_255_values_var_2(void)

{
  return 0;
}



undefined4 inst_255_flags_var_2(void)

{
  return 0;
}



undefined4 inst_255_values_var_3(void)

{
  return 0;
}



undefined4 inst_255_flags_var_3(void)

{
  return 0;
}



undefined4 inst_255_values_var_4(void)

{
  return 0;
}



undefined4 inst_255_flags_var_4(void)

{
  return 0;
}



undefined4 inst_255_values_var_5(void)

{
  return 0;
}



undefined4 inst_255_flags_var_5(void)

{
  return 0;
}



undefined4 inst_255_values_var_6(void)

{
  return 0;
}



undefined4 inst_255_flags_var_6(void)

{
  return 0;
}



undefined4 inst_255_values_var_7(void)

{
  return 0;
}



undefined4 inst_255_flags_var_7(void)

{
  return 0;
}



undefined4 inst_255_values_var_8(void)

{
  return 0;
}



undefined4 inst_255_flags_var_8(void)

{
  return 0;
}



undefined4 inst_255_values_var_9(void)

{
  return 0;
}



undefined4 inst_255_flags_var_9(void)

{
  return 0;
}



undefined4 inst_256_values_var_0(void)

{
  return 0;
}



undefined4 inst_256_flags_var_0(void)

{
  return 0;
}



undefined4 inst_256_values_var_1(void)

{
  return 0;
}



undefined4 inst_256_flags_var_1(void)

{
  return 0;
}



undefined4 inst_256_values_var_2(void)

{
  return 0;
}



undefined4 inst_256_flags_var_2(void)

{
  return 0;
}



undefined4 inst_256_values_var_3(void)

{
  return 0;
}



undefined4 inst_256_flags_var_3(void)

{
  return 0;
}



undefined4 inst_256_values_var_4(void)

{
  return 0;
}



undefined4 inst_256_flags_var_4(void)

{
  return 0;
}



undefined4 inst_256_values_var_5(void)

{
  return 0;
}



undefined4 inst_256_flags_var_5(void)

{
  return 0;
}



undefined4 inst_256_values_var_6(void)

{
  return 0;
}



undefined4 inst_256_flags_var_6(void)

{
  return 0;
}



undefined4 inst_256_values_var_7(void)

{
  return 0;
}



undefined4 inst_256_flags_var_7(void)

{
  return 0;
}



undefined4 inst_256_values_var_8(void)

{
  return 0;
}



undefined4 inst_256_flags_var_8(void)

{
  return 0;
}



undefined4 inst_256_values_var_9(void)

{
  return 0;
}



undefined4 inst_256_flags_var_9(void)

{
  return 0;
}



undefined4 inst_257_values_var_0(void)

{
  return 0;
}



undefined4 inst_257_flags_var_0(void)

{
  return 0;
}



undefined4 inst_257_values_var_1(void)

{
  return 0;
}



undefined4 inst_257_flags_var_1(void)

{
  return 0;
}



undefined4 inst_257_values_var_2(void)

{
  return 0;
}



undefined4 inst_257_flags_var_2(void)

{
  return 0;
}



undefined4 inst_257_values_var_3(void)

{
  return 0;
}



undefined4 inst_257_flags_var_3(void)

{
  return 0;
}



undefined4 inst_257_values_var_4(void)

{
  return 0;
}



undefined4 inst_257_flags_var_4(void)

{
  return 0;
}



undefined4 inst_257_values_var_5(void)

{
  return 0;
}



undefined4 inst_257_flags_var_5(void)

{
  return 0;
}



undefined4 inst_257_values_var_6(void)

{
  return 0;
}



undefined4 inst_257_flags_var_6(void)

{
  return 0;
}



undefined4 inst_257_values_var_7(void)

{
  return 0;
}



undefined4 inst_257_flags_var_7(void)

{
  return 0;
}



undefined4 inst_257_values_var_8(void)

{
  return 0;
}



undefined4 inst_257_flags_var_8(void)

{
  return 0;
}



undefined4 inst_257_values_var_9(void)

{
  return 0;
}



undefined4 inst_257_flags_var_9(void)

{
  return 0;
}



undefined4 inst_258_values_var_0(void)

{
  return 0;
}



undefined4 inst_258_flags_var_0(void)

{
  return 0;
}



undefined4 inst_258_values_var_1(void)

{
  return 0;
}



undefined4 inst_258_flags_var_1(void)

{
  return 0;
}



undefined4 inst_258_values_var_2(void)

{
  return 0;
}



undefined4 inst_258_flags_var_2(void)

{
  return 0;
}



undefined4 inst_258_values_var_3(void)

{
  return 0;
}



undefined4 inst_258_flags_var_3(void)

{
  return 0;
}



undefined4 inst_258_values_var_4(void)

{
  return 0;
}



undefined4 inst_258_flags_var_4(void)

{
  return 0;
}



undefined4 inst_258_values_var_5(void)

{
  return 0;
}



undefined4 inst_258_flags_var_5(void)

{
  return 0;
}



undefined4 inst_258_values_var_6(void)

{
  return 0;
}



undefined4 inst_258_flags_var_6(void)

{
  return 0;
}



undefined4 inst_258_values_var_7(void)

{
  return 0;
}



undefined4 inst_258_flags_var_7(void)

{
  return 0;
}



undefined4 inst_258_values_var_8(void)

{
  return 0;
}



undefined4 inst_258_flags_var_8(void)

{
  return 0;
}



undefined4 inst_258_values_var_9(void)

{
  return 0;
}



undefined4 inst_258_flags_var_9(void)

{
  return 0;
}



undefined4 inst_259_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4300)
// WARNING: Removing unreachable block (ram,0x080c430d)

undefined4 inst_259_flags_var_0(void)

{
  return 0;
}



undefined4 inst_259_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c43ba)

undefined4 inst_259_flags_var_1(void)

{
  return 0;
}



undefined4 inst_259_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c449b)
// WARNING: Removing unreachable block (ram,0x080c4481)
// WARNING: Removing unreachable block (ram,0x080c448e)
// WARNING: Removing unreachable block (ram,0x080c44a8)

undefined4 inst_259_flags_var_2(void)

{
  return 0;
}



undefined4 inst_259_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4562)
// WARNING: Removing unreachable block (ram,0x080c456f)

undefined4 inst_259_flags_var_3(void)

{
  return 0;
}



undefined4 inst_259_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c461c)

undefined4 inst_259_flags_var_4(void)

{
  return 0;
}



undefined4 inst_259_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c46e3)
// WARNING: Removing unreachable block (ram,0x080c46d6)
// WARNING: Removing unreachable block (ram,0x080c46fd)

undefined4 inst_259_flags_var_5(void)

{
  return 0;
}



undefined4 inst_259_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c47c4)

undefined4 inst_259_flags_var_6(void)

{
  return 0;
}



undefined4 inst_259_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4871)
// WARNING: Removing unreachable block (ram,0x080c487e)

undefined4 inst_259_flags_var_7(void)

{
  return 0;
}



undefined4 inst_259_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4938)
// WARNING: Removing unreachable block (ram,0x080c4945)

undefined4 inst_259_flags_var_8(void)

{
  return 0;
}



undefined4 inst_259_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c49ff)

undefined4 inst_259_flags_var_9(void)

{
  return 0;
}



undefined4 inst_260_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4ac4)
// WARNING: Removing unreachable block (ram,0x080c4ad1)

undefined4 inst_260_flags_var_0(void)

{
  return 0;
}



undefined4 inst_260_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4b96)
// WARNING: Removing unreachable block (ram,0x080c4ba3)

undefined4 inst_260_flags_var_1(void)

{
  return 0;
}



undefined4 inst_260_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4c4e)

undefined4 inst_260_flags_var_2(void)

{
  return 0;
}



undefined4 inst_260_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4d06)
// WARNING: Removing unreachable block (ram,0x080c4d20)

undefined4 inst_260_flags_var_3(void)

{
  return 0;
}



undefined4 inst_260_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4dd8)
// WARNING: Removing unreachable block (ram,0x080c4dcb)
// WARNING: Removing unreachable block (ram,0x080c4df2)

undefined4 inst_260_flags_var_4(void)

{
  return 0;
}



undefined4 inst_260_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4e90)
// WARNING: Removing unreachable block (ram,0x080c4eaa)

undefined4 inst_260_flags_var_5(void)

{
  return 0;
}



undefined4 inst_260_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4f6f)
// WARNING: Removing unreachable block (ram,0x080c4f7c)

undefined4 inst_260_flags_var_6(void)

{
  return 0;
}



undefined4 inst_260_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5027)

undefined4 inst_260_flags_var_7(void)

{
  return 0;
}



undefined4 inst_260_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c50ec)
// WARNING: Removing unreachable block (ram,0x080c50f9)

undefined4 inst_260_flags_var_8(void)

{
  return 0;
}



undefined4 inst_260_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c51b1)
// WARNING: Removing unreachable block (ram,0x080c51a4)
// WARNING: Removing unreachable block (ram,0x080c51cb)

undefined4 inst_260_flags_var_9(void)

{
  return 0;
}



undefined4 inst_261_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c526b)

undefined4 inst_261_flags_var_0(void)

{
  return 0;
}



undefined4 inst_261_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5332)

undefined4 inst_261_flags_var_1(void)

{
  return 0;
}



undefined4 inst_261_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5413)

undefined4 inst_261_flags_var_2(void)

{
  return 0;
}



undefined4 inst_261_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c54c0)
// WARNING: Removing unreachable block (ram,0x080c54cd)

undefined4 inst_261_flags_var_3(void)

{
  return 0;
}



undefined4 inst_261_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c55a1)
// WARNING: Removing unreachable block (ram,0x080c5587)
// WARNING: Removing unreachable block (ram,0x080c5594)
// WARNING: Removing unreachable block (ram,0x080c55ae)

undefined4 inst_261_flags_var_4(void)

{
  return 0;
}



undefined4 inst_261_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5668)
// WARNING: Removing unreachable block (ram,0x080c564e)
// WARNING: Removing unreachable block (ram,0x080c5675)

undefined4 inst_261_flags_var_5(void)

{
  return 0;
}



undefined4 inst_261_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c572f)
// WARNING: Removing unreachable block (ram,0x080c5715)
// WARNING: Removing unreachable block (ram,0x080c573c)

undefined4 inst_261_flags_var_6(void)

{
  return 0;
}



undefined4 inst_261_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c57e9)
// WARNING: Removing unreachable block (ram,0x080c5803)

undefined4 inst_261_flags_var_7(void)

{
  return 0;
}



undefined4 inst_261_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c58bd)
// WARNING: Removing unreachable block (ram,0x080c58a3)
// WARNING: Removing unreachable block (ram,0x080c58b0)
// WARNING: Removing unreachable block (ram,0x080c58ca)

undefined4 inst_261_flags_var_8(void)

{
  return 0;
}



undefined4 inst_261_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5984)
// WARNING: Removing unreachable block (ram,0x080c596a)
// WARNING: Removing unreachable block (ram,0x080c5977)
// WARNING: Removing unreachable block (ram,0x080c5991)

undefined4 inst_261_flags_var_9(void)

{
  return 0;
}



undefined4 inst_262_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5a2f)
// WARNING: Removing unreachable block (ram,0x080c5a3c)
// WARNING: Removing unreachable block (ram,0x080c5a49)

undefined4 inst_262_flags_var_0(void)

{
  return 0;
}



undefined4 inst_262_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5b0e)
// WARNING: Removing unreachable block (ram,0x080c5af4)
// WARNING: Removing unreachable block (ram,0x080c5b1b)

undefined4 inst_262_flags_var_1(void)

{
  return 0;
}



undefined4 inst_262_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5bb9)

undefined4 inst_262_flags_var_2(void)

{
  return 0;
}



undefined4 inst_262_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5c7e)
// WARNING: Removing unreachable block (ram,0x080c5c98)

undefined4 inst_262_flags_var_3(void)

{
  return 0;
}



undefined4 inst_262_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5d5d)

undefined4 inst_262_flags_var_4(void)

{
  return 0;
}



undefined4 inst_262_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5e22)
// WARNING: Removing unreachable block (ram,0x080c5e08)
// WARNING: Removing unreachable block (ram,0x080c5e2f)

undefined4 inst_262_flags_var_5(void)

{
  return 0;
}



undefined4 inst_262_values_var_6(void)

{
  return 0;
}



undefined4 inst_262_flags_var_6(void)

{
  return 0;
}



undefined4 inst_262_values_var_7(void)

{
  return 0;
}



undefined4 inst_262_flags_var_7(void)

{
  return 0;
}



undefined4 inst_262_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c6071)
// WARNING: Removing unreachable block (ram,0x080c6057)
// WARNING: Removing unreachable block (ram,0x080c6064)
// WARNING: Removing unreachable block (ram,0x080c607e)

undefined4 inst_262_flags_var_8(void)

{
  return 0;
}



undefined4 inst_262_values_var_9(void)

{
  return 0;
}



undefined4 inst_262_flags_var_9(void)

{
  return 0;
}



undefined4 inst_263_values_var_0(void)

{
  return 0;
}



undefined4 inst_263_flags_var_0(void)

{
  return 0;
}



undefined4 inst_263_values_var_1(void)

{
  return 0;
}



undefined4 inst_263_flags_var_1(void)

{
  return 0;
}



undefined4 inst_263_values_var_2(void)

{
  return 0;
}



undefined4 inst_263_flags_var_2(void)

{
  return 0;
}



undefined4 inst_263_values_var_3(void)

{
  return 0;
}



undefined4 inst_263_flags_var_3(void)

{
  return 0;
}



undefined4 inst_263_values_var_4(void)

{
  return 0;
}



undefined4 inst_263_flags_var_4(void)

{
  return 0;
}



undefined4 inst_263_values_var_5(void)

{
  return 0;
}



undefined4 inst_263_flags_var_5(void)

{
  return 0;
}



undefined4 inst_263_values_var_6(void)

{
  return 0;
}



undefined4 inst_263_flags_var_6(void)

{
  return 0;
}



undefined4 inst_263_values_var_7(void)

{
  return 0;
}



undefined4 inst_263_flags_var_7(void)

{
  return 0;
}



undefined4 inst_263_values_var_8(void)

{
  return 0;
}



undefined4 inst_263_flags_var_8(void)

{
  return 0;
}



undefined4 inst_263_values_var_9(void)

{
  return 0;
}



undefined4 inst_263_flags_var_9(void)

{
  return 0;
}



undefined4 inst_264_values_var_0(void)

{
  return 0;
}



undefined4 inst_264_flags_var_0(void)

{
  return 0;
}



undefined4 inst_264_values_var_1(void)

{
  return 0;
}



undefined4 inst_264_flags_var_1(void)

{
  return 0;
}



undefined4 inst_264_values_var_2(void)

{
  return 0;
}



undefined4 inst_264_flags_var_2(void)

{
  return 0;
}



undefined4 inst_264_values_var_3(void)

{
  return 0;
}



undefined4 inst_264_flags_var_3(void)

{
  return 0;
}



undefined4 inst_264_values_var_4(void)

{
  return 0;
}



undefined4 inst_264_flags_var_4(void)

{
  return 0;
}



undefined4 inst_264_values_var_5(void)

{
  return 0;
}



undefined4 inst_264_flags_var_5(void)

{
  return 0;
}



undefined4 inst_264_values_var_6(void)

{
  return 0;
}



undefined4 inst_264_flags_var_6(void)

{
  return 0;
}



undefined4 inst_264_values_var_7(void)

{
  return 0;
}



undefined4 inst_264_flags_var_7(void)

{
  return 0;
}



undefined4 inst_264_values_var_8(void)

{
  return 0;
}



undefined4 inst_264_flags_var_8(void)

{
  return 0;
}



undefined4 inst_264_values_var_9(void)

{
  return 0;
}



undefined4 inst_264_flags_var_9(void)

{
  return 0;
}



undefined4 inst_265_values_var_0(void)

{
  return 0;
}



undefined4 inst_265_flags_var_0(void)

{
  return 0;
}



undefined4 inst_265_values_var_1(void)

{
  return 0;
}



undefined4 inst_265_flags_var_1(void)

{
  return 0;
}



undefined4 inst_265_values_var_2(void)

{
  return 0;
}



undefined4 inst_265_flags_var_2(void)

{
  return 0;
}



undefined4 inst_265_values_var_3(void)

{
  return 0;
}



undefined4 inst_265_flags_var_3(void)

{
  return 0;
}



undefined4 inst_265_values_var_4(void)

{
  return 0;
}



undefined4 inst_265_flags_var_4(void)

{
  return 0;
}



undefined4 inst_265_values_var_5(void)

{
  return 0;
}



undefined4 inst_265_flags_var_5(void)

{
  return 0;
}



undefined4 inst_265_values_var_6(void)

{
  return 0;
}



undefined4 inst_265_flags_var_6(void)

{
  return 0;
}



undefined4 inst_265_values_var_7(void)

{
  return 0;
}



undefined4 inst_265_flags_var_7(void)

{
  return 0;
}



undefined4 inst_265_values_var_8(void)

{
  return 0;
}



undefined4 inst_265_flags_var_8(void)

{
  return 0;
}



undefined4 inst_265_values_var_9(void)

{
  return 0;
}



undefined4 inst_265_flags_var_9(void)

{
  return 0;
}



undefined4 inst_266_values_var_0(void)

{
  return 0;
}



undefined4 inst_266_flags_var_0(void)

{
  return 0;
}



undefined4 inst_266_values_var_1(void)

{
  return 0;
}



undefined4 inst_266_flags_var_1(void)

{
  return 0;
}



undefined4 inst_266_values_var_2(void)

{
  return 0;
}



undefined4 inst_266_flags_var_2(void)

{
  return 0;
}



undefined4 inst_266_values_var_3(void)

{
  return 0;
}



undefined4 inst_266_flags_var_3(void)

{
  return 0;
}



undefined4 inst_266_values_var_4(void)

{
  return 0;
}



undefined4 inst_266_flags_var_4(void)

{
  return 0;
}



undefined4 inst_266_values_var_5(void)

{
  return 0;
}



undefined4 inst_266_flags_var_5(void)

{
  return 0;
}



undefined4 inst_266_values_var_6(void)

{
  return 0;
}



undefined4 inst_266_flags_var_6(void)

{
  return 0;
}



undefined4 inst_266_values_var_7(void)

{
  return 0;
}



undefined4 inst_266_flags_var_7(void)

{
  return 0;
}



undefined4 inst_266_values_var_8(void)

{
  return 0;
}



undefined4 inst_266_flags_var_8(void)

{
  return 0;
}



undefined4 inst_266_values_var_9(void)

{
  return 0;
}



undefined4 inst_266_flags_var_9(void)

{
  return 0;
}



undefined4 inst_267_values_var_0(void)

{
  return 0;
}



undefined4 inst_267_flags_var_0(void)

{
  return 0;
}



undefined4 inst_267_values_var_1(void)

{
  return 0;
}



undefined4 inst_267_flags_var_1(void)

{
  return 0;
}



undefined4 inst_267_values_var_2(void)

{
  return 0;
}



undefined4 inst_267_flags_var_2(void)

{
  return 0;
}



undefined4 inst_267_values_var_3(void)

{
  return 0;
}



undefined4 inst_267_flags_var_3(void)

{
  return 0;
}



undefined4 inst_267_values_var_4(void)

{
  return 0;
}



undefined4 inst_267_flags_var_4(void)

{
  return 0;
}



undefined4 inst_267_values_var_5(void)

{
  return 0;
}



undefined4 inst_267_flags_var_5(void)

{
  return 0;
}



undefined4 inst_267_values_var_6(void)

{
  return 0;
}



undefined4 inst_267_flags_var_6(void)

{
  return 0;
}



undefined4 inst_267_values_var_7(void)

{
  return 0;
}



undefined4 inst_267_flags_var_7(void)

{
  return 0;
}



undefined4 inst_267_values_var_8(void)

{
  return 0;
}



undefined4 inst_267_flags_var_8(void)

{
  return 0;
}



undefined4 inst_267_values_var_9(void)

{
  return 0;
}



undefined4 inst_267_flags_var_9(void)

{
  return 0;
}



undefined4 inst_268_values_var_0(void)

{
  return 0;
}



undefined4 inst_268_flags_var_0(void)

{
  return 0;
}



undefined4 inst_268_values_var_1(void)

{
  return 0;
}



undefined4 inst_268_flags_var_1(void)

{
  return 0;
}



undefined4 inst_268_values_var_2(void)

{
  return 0;
}



undefined4 inst_268_flags_var_2(void)

{
  return 0;
}



undefined4 inst_268_values_var_3(void)

{
  return 0;
}



undefined4 inst_268_flags_var_3(void)

{
  return 0;
}



undefined4 inst_268_values_var_4(void)

{
  return 0;
}



undefined4 inst_268_flags_var_4(void)

{
  return 0;
}



undefined4 inst_268_values_var_5(void)

{
  return 0;
}



undefined4 inst_268_flags_var_5(void)

{
  return 0;
}



undefined4 inst_268_values_var_6(void)

{
  return 0;
}



undefined4 inst_268_flags_var_6(void)

{
  return 0;
}



undefined4 inst_268_values_var_7(void)

{
  return 0;
}



undefined4 inst_268_flags_var_7(void)

{
  return 0;
}



undefined4 inst_268_values_var_8(void)

{
  return 0;
}



undefined4 inst_268_flags_var_8(void)

{
  return 0;
}



undefined4 inst_268_values_var_9(void)

{
  return 0;
}



undefined4 inst_268_flags_var_9(void)

{
  return 0;
}



undefined4 inst_269_values_var_0(void)

{
  return 0;
}



undefined4 inst_269_flags_var_0(void)

{
  return 0;
}



undefined4 inst_269_values_var_1(void)

{
  return 0;
}



undefined4 inst_269_flags_var_1(void)

{
  return 0;
}



undefined4 inst_269_values_var_2(void)

{
  return 0;
}



undefined4 inst_269_flags_var_2(void)

{
  return 0;
}



undefined4 inst_269_values_var_3(void)

{
  return 0;
}



undefined4 inst_269_flags_var_3(void)

{
  return 0;
}



undefined4 inst_269_values_var_4(void)

{
  return 0;
}



undefined4 inst_269_flags_var_4(void)

{
  return 0;
}



undefined4 inst_269_values_var_5(void)

{
  return 0;
}



undefined4 inst_269_flags_var_5(void)

{
  return 0;
}



undefined4 inst_269_values_var_6(void)

{
  return 0;
}



undefined4 inst_269_flags_var_6(void)

{
  return 0;
}



undefined4 inst_269_values_var_7(void)

{
  return 0;
}



undefined4 inst_269_flags_var_7(void)

{
  return 0;
}



undefined4 inst_269_values_var_8(void)

{
  return 0;
}



undefined4 inst_269_flags_var_8(void)

{
  return 0;
}



undefined4 inst_269_values_var_9(void)

{
  return 0;
}



undefined4 inst_269_flags_var_9(void)

{
  return 0;
}



undefined4 inst_270_values_var_0(void)

{
  return 0;
}



undefined4 inst_270_flags_var_0(void)

{
  return 0;
}



undefined4 inst_270_values_var_1(void)

{
  return 0;
}



undefined4 inst_270_flags_var_1(void)

{
  return 0;
}



undefined4 inst_270_values_var_2(void)

{
  return 0;
}



undefined4 inst_270_flags_var_2(void)

{
  return 0;
}



undefined4 inst_270_values_var_3(void)

{
  return 0;
}



undefined4 inst_270_flags_var_3(void)

{
  return 0;
}



undefined4 inst_270_values_var_4(void)

{
  return 0;
}



undefined4 inst_270_flags_var_4(void)

{
  return 0;
}



undefined4 inst_270_values_var_5(void)

{
  return 0;
}



undefined4 inst_270_flags_var_5(void)

{
  return 0;
}



undefined4 inst_270_values_var_6(void)

{
  return 0;
}



undefined4 inst_270_flags_var_6(void)

{
  return 0;
}



undefined4 inst_270_values_var_7(void)

{
  return 0;
}



undefined4 inst_270_flags_var_7(void)

{
  return 0;
}



undefined4 inst_270_values_var_8(void)

{
  return 0;
}



undefined4 inst_270_flags_var_8(void)

{
  return 0;
}



undefined4 inst_270_values_var_9(void)

{
  return 0;
}



undefined4 inst_270_flags_var_9(void)

{
  return 0;
}



undefined4 inst_271_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9601)

undefined4 inst_271_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_271_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c96c2)
// WARNING: Removing unreachable block (ram,0x080c96cf)

int inst_271_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_271_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c978f)

int inst_271_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_271_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9850)
// WARNING: Removing unreachable block (ram,0x080c985d)
// WARNING: Removing unreachable block (ram,0x080c986a)

int inst_271_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_271_values_var_4(void)

{
  return 0;
}



undefined4 inst_271_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_271_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c99eb)
// WARNING: Removing unreachable block (ram,0x080c9a12)

undefined4 inst_271_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_271_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9ac6)
// WARNING: Removing unreachable block (ram,0x080c9ad3)

int inst_271_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_271_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9b87)
// WARNING: Removing unreachable block (ram,0x080c9b94)

undefined4 inst_271_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_271_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9c6e)
// WARNING: Removing unreachable block (ram,0x080c9c61)
// WARNING: Removing unreachable block (ram,0x080c9c7b)

int inst_271_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_271_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9d2f)
// WARNING: Removing unreachable block (ram,0x080c9d3c)

int inst_271_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_272_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9e08)

int inst_272_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_272_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9eba)
// WARNING: Removing unreachable block (ram,0x080c9ec7)
// WARNING: Removing unreachable block (ram,0x080c9ed4)

undefined4 inst_272_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_272_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9f93)

undefined4 inst_272_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_272_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca06c)
// WARNING: Removing unreachable block (ram,0x080ca05f)
// WARNING: Removing unreachable block (ram,0x080ca079)

undefined4 inst_272_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_272_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca12b)

int inst_272_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_272_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca204)
// WARNING: Removing unreachable block (ram,0x080ca1ea)
// WARNING: Removing unreachable block (ram,0x080ca1f7)
// WARNING: Removing unreachable block (ram,0x080ca211)

undefined4 inst_272_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_272_values_var_6(void)

{
  return 0;
}



undefined4 inst_272_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_272_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca38f)
// WARNING: Removing unreachable block (ram,0x080ca39c)

int inst_272_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_272_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca468)
// WARNING: Removing unreachable block (ram,0x080ca44e)
// WARNING: Removing unreachable block (ram,0x080ca475)

int inst_272_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_272_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca51a)
// WARNING: Removing unreachable block (ram,0x080ca527)

int inst_272_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_273_values_var_0(void)

{
  return 0;
}



int inst_273_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_273_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca6d7)

int inst_273_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_273_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca79c)

int inst_273_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_273_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca87b)

int inst_273_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_273_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca940)

undefined4 inst_273_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_273_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080caa12)

undefined4 inst_273_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_273_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080caad7)
// WARNING: Removing unreachable block (ram,0x080caafe)

int inst_273_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_273_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080caba8)
// WARNING: Removing unreachable block (ram,0x080cabb5)
// WARNING: Removing unreachable block (ram,0x080cabc2)

undefined4 inst_273_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_273_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cac87)
// WARNING: Removing unreachable block (ram,0x080caca1)

int inst_273_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_273_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cad59)
// WARNING: Removing unreachable block (ram,0x080cad73)

undefined4 inst_273_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_274_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cae27)
// WARNING: Removing unreachable block (ram,0x080cae34)

int inst_274_flags_var_0(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_274_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080caef5)

int inst_274_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_274_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cafc3)
// WARNING: Removing unreachable block (ram,0x080cafb6)
// WARNING: Removing unreachable block (ram,0x080cafdd)

undefined4 inst_274_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_274_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb09e)

int inst_274_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_274_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb15f)
// WARNING: Removing unreachable block (ram,0x080cb152)
// WARNING: Removing unreachable block (ram,0x080cb179)

undefined4 inst_274_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_274_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb23a)
// WARNING: Removing unreachable block (ram,0x080cb22d)
// WARNING: Removing unreachable block (ram,0x080cb247)

int inst_274_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_274_values_var_6(void)

{
  return 0;
}



undefined4 inst_274_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_274_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb3bc)
// WARNING: Removing unreachable block (ram,0x080cb3e3)

int inst_274_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_274_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb497)
// WARNING: Removing unreachable block (ram,0x080cb48a)
// WARNING: Removing unreachable block (ram,0x080cb4b1)

undefined4 inst_274_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_274_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb558)
// WARNING: Removing unreachable block (ram,0x080cb57f)

int inst_274_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_275_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb639)
// WARNING: Removing unreachable block (ram,0x080cb62c)
// WARNING: Removing unreachable block (ram,0x080cb653)

undefined4 inst_275_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_275_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb700)
// WARNING: Removing unreachable block (ram,0x080cb70d)
// WARNING: Removing unreachable block (ram,0x080cb71a)

int inst_275_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_275_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb7e0)
// WARNING: Removing unreachable block (ram,0x080cb7d3)
// WARNING: Removing unreachable block (ram,0x080cb7fa)

undefined4 inst_275_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_275_values_var_3(void)

{
  return 0;
}



int inst_275_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_275_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb995)
// WARNING: Removing unreachable block (ram,0x080cb97b)
// WARNING: Removing unreachable block (ram,0x080cb988)
// WARNING: Removing unreachable block (ram,0x080cb9a2)

int inst_275_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_275_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cba5b)
// WARNING: Removing unreachable block (ram,0x080cba4e)
// WARNING: Removing unreachable block (ram,0x080cba75)

undefined4 inst_275_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_275_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cbb3b)

undefined4 inst_275_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_275_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cbbf5)
// WARNING: Removing unreachable block (ram,0x080cbc02)
// WARNING: Removing unreachable block (ram,0x080cbc0f)

int inst_275_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_275_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cbcd6)
// WARNING: Removing unreachable block (ram,0x080cbcc9)
// WARNING: Removing unreachable block (ram,0x080cbcf0)

undefined4 inst_275_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_275_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cbdb6)
// WARNING: Removing unreachable block (ram,0x080cbda9)
// WARNING: Removing unreachable block (ram,0x080cbdc3)

int inst_275_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_276_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cbe75)
// WARNING: Removing unreachable block (ram,0x080cbe68)
// WARNING: Removing unreachable block (ram,0x080cbe8f)

undefined4 inst_276_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_276_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cbf41)
// WARNING: Removing unreachable block (ram,0x080cbf34)
// WARNING: Removing unreachable block (ram,0x080cbf5b)

int inst_276_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_276_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc000)
// WARNING: Removing unreachable block (ram,0x080cc00d)

int inst_276_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_276_values_var_3(void)

{
  return 0;
}



undefined4 inst_276_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_276_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc1b2)
// WARNING: Removing unreachable block (ram,0x080cc198)
// WARNING: Removing unreachable block (ram,0x080cc1a5)
// WARNING: Removing unreachable block (ram,0x080cc1bf)

undefined4 inst_276_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_276_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc271)
// WARNING: Removing unreachable block (ram,0x080cc264)
// WARNING: Removing unreachable block (ram,0x080cc28b)

undefined4 inst_276_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_276_values_var_6(void)

{
  return 0;
}



undefined4 inst_276_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_276_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc409)

int inst_276_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_276_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc4e2)
// WARNING: Removing unreachable block (ram,0x080cc4c8)
// WARNING: Removing unreachable block (ram,0x080cc4d5)
// WARNING: Removing unreachable block (ram,0x080cc4ef)

int inst_276_flags_var_8(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_276_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc594)
// WARNING: Removing unreachable block (ram,0x080cc5a1)
// WARNING: Removing unreachable block (ram,0x080cc5ae)

int inst_276_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_277_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc67b)
// WARNING: Removing unreachable block (ram,0x080cc661)
// WARNING: Removing unreachable block (ram,0x080cc66e)
// WARNING: Removing unreachable block (ram,0x080cc688)

undefined4 inst_277_flags_var_0(void)

{
  return 0;
}



undefined4 inst_277_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc724)
// WARNING: Removing unreachable block (ram,0x080cc731)
// WARNING: Removing unreachable block (ram,0x080cc73e)

undefined4 inst_277_flags_var_1(void)

{
  return 0;
}



undefined4 inst_277_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc7f4)
// WARNING: Removing unreachable block (ram,0x080cc7e7)
// WARNING: Removing unreachable block (ram,0x080cc80e)

undefined4 inst_277_flags_var_2(void)

{
  return 0;
}



undefined4 inst_277_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc8c4)
// WARNING: Removing unreachable block (ram,0x080cc8aa)
// WARNING: Removing unreachable block (ram,0x080cc8b7)
// WARNING: Removing unreachable block (ram,0x080cc8d1)

undefined4 inst_277_flags_var_3(void)

{
  return 0;
}



undefined4 inst_277_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc97a)
// WARNING: Removing unreachable block (ram,0x080cc96d)
// WARNING: Removing unreachable block (ram,0x080cc994)

undefined4 inst_277_flags_var_4(void)

{
  return 0;
}



undefined4 inst_277_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cca2f)
// WARNING: Removing unreachable block (ram,0x080cca3c)
// WARNING: Removing unreachable block (ram,0x080cca49)

undefined4 inst_277_flags_var_5(void)

{
  return 0;
}



undefined4 inst_277_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ccb0b)
// WARNING: Removing unreachable block (ram,0x080ccaf1)
// WARNING: Removing unreachable block (ram,0x080ccafe)
// WARNING: Removing unreachable block (ram,0x080ccb18)

undefined4 inst_277_flags_var_6(void)

{
  return 0;
}



undefined4 inst_277_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ccbc1)
// WARNING: Removing unreachable block (ram,0x080ccbb4)
// WARNING: Removing unreachable block (ram,0x080ccbdb)

undefined4 inst_277_flags_var_7(void)

{
  return 0;
}



undefined4 inst_277_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ccc76)
// WARNING: Removing unreachable block (ram,0x080ccc83)

undefined4 inst_277_flags_var_8(void)

{
  return 0;
}



undefined4 inst_277_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ccd53)
// WARNING: Removing unreachable block (ram,0x080ccd39)
// WARNING: Removing unreachable block (ram,0x080ccd46)
// WARNING: Removing unreachable block (ram,0x080ccd60)

undefined4 inst_277_flags_var_9(void)

{
  return 0;
}



undefined4 inst_278_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cce07)
// WARNING: Removing unreachable block (ram,0x080ccdfa)
// WARNING: Removing unreachable block (ram,0x080cce21)

undefined4 inst_278_flags_var_0(void)

{
  return 0;
}



undefined4 inst_278_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ccebb)
// WARNING: Removing unreachable block (ram,0x080ccec8)
// WARNING: Removing unreachable block (ram,0x080cced5)

undefined4 inst_278_flags_var_1(void)

{
  return 0;
}



undefined4 inst_278_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ccf89)
// WARNING: Removing unreachable block (ram,0x080ccf7c)
// WARNING: Removing unreachable block (ram,0x080ccfa3)

undefined4 inst_278_flags_var_2(void)

{
  return 0;
}



undefined4 inst_278_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd03d)
// WARNING: Removing unreachable block (ram,0x080cd04a)
// WARNING: Removing unreachable block (ram,0x080cd057)

undefined4 inst_278_flags_var_3(void)

{
  return 0;
}



undefined4 inst_278_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd0fe)
// WARNING: Removing unreachable block (ram,0x080cd10b)
// WARNING: Removing unreachable block (ram,0x080cd118)

undefined4 inst_278_flags_var_4(void)

{
  return 0;
}



undefined4 inst_278_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd1d9)
// WARNING: Removing unreachable block (ram,0x080cd1bf)
// WARNING: Removing unreachable block (ram,0x080cd1cc)
// WARNING: Removing unreachable block (ram,0x080cd1e6)

undefined4 inst_278_flags_var_5(void)

{
  return 0;
}



undefined4 inst_278_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd29a)
// WARNING: Removing unreachable block (ram,0x080cd280)
// WARNING: Removing unreachable block (ram,0x080cd28d)
// WARNING: Removing unreachable block (ram,0x080cd2a7)

undefined4 inst_278_flags_var_6(void)

{
  return 0;
}



undefined4 inst_278_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd34e)
// WARNING: Removing unreachable block (ram,0x080cd341)
// WARNING: Removing unreachable block (ram,0x080cd368)

undefined4 inst_278_flags_var_7(void)

{
  return 0;
}



undefined4 inst_278_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd41c)
// WARNING: Removing unreachable block (ram,0x080cd402)
// WARNING: Removing unreachable block (ram,0x080cd40f)
// WARNING: Removing unreachable block (ram,0x080cd429)

undefined4 inst_278_flags_var_8(void)

{
  return 0;
}



undefined4 inst_278_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd4c3)
// WARNING: Removing unreachable block (ram,0x080cd4d0)

undefined4 inst_278_flags_var_9(void)

{
  return 0;
}



undefined4 inst_279_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd5a4)
// WARNING: Removing unreachable block (ram,0x080cd58a)
// WARNING: Removing unreachable block (ram,0x080cd597)
// WARNING: Removing unreachable block (ram,0x080cd5b1)

undefined4 inst_279_flags_var_0(void)

{
  return 0;
}



undefined4 inst_279_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd65e)
// WARNING: Removing unreachable block (ram,0x080cd651)
// WARNING: Removing unreachable block (ram,0x080cd678)

undefined4 inst_279_flags_var_1(void)

{
  return 0;
}



undefined4 inst_279_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd725)
// WARNING: Removing unreachable block (ram,0x080cd718)
// WARNING: Removing unreachable block (ram,0x080cd73f)

undefined4 inst_279_flags_var_2(void)

{
  return 0;
}



undefined4 inst_279_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd7df)
// WARNING: Removing unreachable block (ram,0x080cd7ec)
// WARNING: Removing unreachable block (ram,0x080cd7f9)

undefined4 inst_279_flags_var_3(void)

{
  return 0;
}



undefined4 inst_279_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd8c0)
// WARNING: Removing unreachable block (ram,0x080cd8a6)
// WARNING: Removing unreachable block (ram,0x080cd8b3)
// WARNING: Removing unreachable block (ram,0x080cd8cd)

undefined4 inst_279_flags_var_4(void)

{
  return 0;
}



undefined4 inst_279_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd97a)
// WARNING: Removing unreachable block (ram,0x080cd96d)
// WARNING: Removing unreachable block (ram,0x080cd994)

undefined4 inst_279_flags_var_5(void)

{
  return 0;
}



undefined4 inst_279_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cda4e)
// WARNING: Removing unreachable block (ram,0x080cda34)
// WARNING: Removing unreachable block (ram,0x080cda41)
// WARNING: Removing unreachable block (ram,0x080cda5b)

undefined4 inst_279_flags_var_6(void)

{
  return 0;
}



undefined4 inst_279_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cdb15)
// WARNING: Removing unreachable block (ram,0x080cdafb)
// WARNING: Removing unreachable block (ram,0x080cdb08)
// WARNING: Removing unreachable block (ram,0x080cdb22)

undefined4 inst_279_flags_var_7(void)

{
  return 0;
}



undefined4 inst_279_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cdbc2)
// WARNING: Removing unreachable block (ram,0x080cdbcf)
// WARNING: Removing unreachable block (ram,0x080cdbdc)

undefined4 inst_279_flags_var_8(void)

{
  return 0;
}



undefined4 inst_279_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cdc95)
// WARNING: Removing unreachable block (ram,0x080cdc88)
// WARNING: Removing unreachable block (ram,0x080cdcaf)

undefined4 inst_279_flags_var_9(void)

{
  return 0;
}



undefined4 inst_280_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cdd58)
// WARNING: Removing unreachable block (ram,0x080cdd4b)
// WARNING: Removing unreachable block (ram,0x080cdd72)

undefined4 inst_280_flags_var_0(void)

{
  return 0;
}



undefined4 inst_280_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cde28)
// WARNING: Removing unreachable block (ram,0x080cde0e)
// WARNING: Removing unreachable block (ram,0x080cde1b)
// WARNING: Removing unreachable block (ram,0x080cde35)

undefined4 inst_280_flags_var_1(void)

{
  return 0;
}



undefined4 inst_280_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cdeeb)
// WARNING: Removing unreachable block (ram,0x080cded1)
// WARNING: Removing unreachable block (ram,0x080cdede)
// WARNING: Removing unreachable block (ram,0x080cdef8)

undefined4 inst_280_flags_var_2(void)

{
  return 0;
}



undefined4 inst_280_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cdfa1)
// WARNING: Removing unreachable block (ram,0x080cdf94)
// WARNING: Removing unreachable block (ram,0x080cdfbb)

undefined4 inst_280_flags_var_3(void)

{
  return 0;
}



undefined4 inst_280_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce064)
// WARNING: Removing unreachable block (ram,0x080ce057)
// WARNING: Removing unreachable block (ram,0x080ce07e)

undefined4 inst_280_flags_var_4(void)

{
  return 0;
}



undefined4 inst_280_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce11a)
// WARNING: Removing unreachable block (ram,0x080ce127)

undefined4 inst_280_flags_var_5(void)

{
  return 0;
}



undefined4 inst_280_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce1dd)
// WARNING: Removing unreachable block (ram,0x080ce1ea)

undefined4 inst_280_flags_var_6(void)

{
  return 0;
}



undefined4 inst_280_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce2ad)
// WARNING: Removing unreachable block (ram,0x080ce2a0)
// WARNING: Removing unreachable block (ram,0x080ce2c7)

undefined4 inst_280_flags_var_7(void)

{
  return 0;
}



undefined4 inst_280_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce370)
// WARNING: Removing unreachable block (ram,0x080ce363)
// WARNING: Removing unreachable block (ram,0x080ce38a)

undefined4 inst_280_flags_var_8(void)

{
  return 0;
}



undefined4 inst_280_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce440)
// WARNING: Removing unreachable block (ram,0x080ce426)
// WARNING: Removing unreachable block (ram,0x080ce433)
// WARNING: Removing unreachable block (ram,0x080ce44d)

undefined4 inst_280_flags_var_9(void)

{
  return 0;
}



undefined4 inst_281_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce4ef)
// WARNING: Removing unreachable block (ram,0x080ce4fc)
// WARNING: Removing unreachable block (ram,0x080ce509)

undefined4 inst_281_flags_var_0(void)

{
  return 0;
}



undefined4 inst_281_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce5c4)
// WARNING: Removing unreachable block (ram,0x080ce5b7)
// WARNING: Removing unreachable block (ram,0x080ce5de)

undefined4 inst_281_flags_var_1(void)

{
  return 0;
}



undefined4 inst_281_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce699)
// WARNING: Removing unreachable block (ram,0x080ce67f)
// WARNING: Removing unreachable block (ram,0x080ce68c)
// WARNING: Removing unreachable block (ram,0x080ce6a6)

undefined4 inst_281_flags_var_2(void)

{
  return 0;
}



undefined4 inst_281_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce755)
// WARNING: Removing unreachable block (ram,0x080ce748)
// WARNING: Removing unreachable block (ram,0x080ce76f)

undefined4 inst_281_flags_var_3(void)

{
  return 0;
}



undefined4 inst_281_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce82a)
// WARNING: Removing unreachable block (ram,0x080ce810)
// WARNING: Removing unreachable block (ram,0x080ce81d)
// WARNING: Removing unreachable block (ram,0x080ce837)

undefined4 inst_281_flags_var_4(void)

{
  return 0;
}



undefined4 inst_281_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce8e6)
// WARNING: Removing unreachable block (ram,0x080ce8d9)
// WARNING: Removing unreachable block (ram,0x080ce900)

undefined4 inst_281_flags_var_5(void)

{
  return 0;
}



undefined4 inst_281_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce9a2)
// WARNING: Removing unreachable block (ram,0x080ce9af)
// WARNING: Removing unreachable block (ram,0x080ce9bc)

undefined4 inst_281_flags_var_6(void)

{
  return 0;
}



undefined4 inst_281_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cea78)
// WARNING: Removing unreachable block (ram,0x080cea6b)
// WARNING: Removing unreachable block (ram,0x080cea92)

undefined4 inst_281_flags_var_7(void)

{
  return 0;
}



undefined4 inst_281_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ceb41)
// WARNING: Removing unreachable block (ram,0x080ceb34)
// WARNING: Removing unreachable block (ram,0x080ceb5b)

undefined4 inst_281_flags_var_8(void)

{
  return 0;
}



undefined4 inst_281_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cec17)
// WARNING: Removing unreachable block (ram,0x080cebfd)
// WARNING: Removing unreachable block (ram,0x080cec0a)
// WARNING: Removing unreachable block (ram,0x080cec24)

undefined4 inst_281_flags_var_9(void)

{
  return 0;
}



undefined4 inst_282_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cecd8)
// WARNING: Removing unreachable block (ram,0x080cecbe)
// WARNING: Removing unreachable block (ram,0x080ceccb)
// WARNING: Removing unreachable block (ram,0x080cece5)

undefined4 inst_282_flags_var_0(void)

{
  return 0;
}



undefined4 inst_282_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ced8c)
// WARNING: Removing unreachable block (ram,0x080ced7f)
// WARNING: Removing unreachable block (ram,0x080ceda6)

undefined4 inst_282_flags_var_1(void)

{
  return 0;
}



undefined4 inst_282_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cee4d)
// WARNING: Removing unreachable block (ram,0x080cee40)
// WARNING: Removing unreachable block (ram,0x080cee67)

undefined4 inst_282_flags_var_2(void)

{
  return 0;
}



undefined4 inst_282_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cef0e)
// WARNING: Removing unreachable block (ram,0x080cef01)
// WARNING: Removing unreachable block (ram,0x080cef28)

undefined4 inst_282_flags_var_3(void)

{
  return 0;
}



undefined4 inst_282_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cefdc)
// WARNING: Removing unreachable block (ram,0x080cefc2)
// WARNING: Removing unreachable block (ram,0x080cefcf)
// WARNING: Removing unreachable block (ram,0x080cefe9)

undefined4 inst_282_flags_var_4(void)

{
  return 0;
}



undefined4 inst_282_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf09d)
// WARNING: Removing unreachable block (ram,0x080cf083)
// WARNING: Removing unreachable block (ram,0x080cf090)
// WARNING: Removing unreachable block (ram,0x080cf0aa)

undefined4 inst_282_flags_var_5(void)

{
  return 0;
}



undefined4 inst_282_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf151)
// WARNING: Removing unreachable block (ram,0x080cf144)
// WARNING: Removing unreachable block (ram,0x080cf16b)

undefined4 inst_282_flags_var_6(void)

{
  return 0;
}



undefined4 inst_282_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf21f)
// WARNING: Removing unreachable block (ram,0x080cf205)
// WARNING: Removing unreachable block (ram,0x080cf212)
// WARNING: Removing unreachable block (ram,0x080cf22c)

undefined4 inst_282_flags_var_7(void)

{
  return 0;
}



undefined4 inst_282_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf2c6)
// WARNING: Removing unreachable block (ram,0x080cf2d3)

undefined4 inst_282_flags_var_8(void)

{
  return 0;
}



undefined4 inst_282_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf394)
// WARNING: Removing unreachable block (ram,0x080cf387)
// WARNING: Removing unreachable block (ram,0x080cf3ae)

undefined4 inst_282_flags_var_9(void)

{
  return 0;
}



undefined4 inst_283_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf44a)
// WARNING: Removing unreachable block (ram,0x080cf457)

undefined4 inst_283_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_283_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf518)
// WARNING: Removing unreachable block (ram,0x080cf532)

undefined4 inst_283_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_283_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf5e6)
// WARNING: Removing unreachable block (ram,0x080cf600)

int inst_283_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_283_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf6b4)
// WARNING: Removing unreachable block (ram,0x080cf6c1)
// WARNING: Removing unreachable block (ram,0x080cf6ce)

int inst_283_flags_var_3(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_283_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf782)
// WARNING: Removing unreachable block (ram,0x080cf78f)
// WARNING: Removing unreachable block (ram,0x080cf79c)

undefined4 inst_283_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_283_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf86a)
// WARNING: Removing unreachable block (ram,0x080cf85d)
// WARNING: Removing unreachable block (ram,0x080cf877)

int inst_283_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_283_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf91e)
// WARNING: Removing unreachable block (ram,0x080cf92b)

int inst_283_flags_var_6(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_283_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cfa06)
// WARNING: Removing unreachable block (ram,0x080cf9f9)
// WARNING: Removing unreachable block (ram,0x080cfa13)

undefined4 inst_283_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_283_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cfac7)
// WARNING: Removing unreachable block (ram,0x080cfae1)

undefined4 inst_283_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_283_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cfb95)
// WARNING: Removing unreachable block (ram,0x080cfb88)
// WARNING: Removing unreachable block (ram,0x080cfbaf)

int inst_283_flags_var_9(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_284_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cfc58)
// WARNING: Removing unreachable block (ram,0x080cfc65)

undefined4 inst_284_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_284_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cfd35)
// WARNING: Removing unreachable block (ram,0x080cfd42)

undefined4 inst_284_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_284_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cfe12)
// WARNING: Removing unreachable block (ram,0x080cfe05)
// WARNING: Removing unreachable block (ram,0x080cfe1f)

undefined4 inst_284_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_284_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cfed5)
// WARNING: Removing unreachable block (ram,0x080cfeef)

undefined4 inst_284_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_284_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cff98)
// WARNING: Removing unreachable block (ram,0x080cffa5)
// WARNING: Removing unreachable block (ram,0x080cffb2)

int inst_284_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_284_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d0068)
// WARNING: Removing unreachable block (ram,0x080d0075)

undefined4 inst_284_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_284_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d0152)
// WARNING: Removing unreachable block (ram,0x080d0145)
// WARNING: Removing unreachable block (ram,0x080d015f)

undefined4 inst_284_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_284_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d0215)
// WARNING: Removing unreachable block (ram,0x080d0208)
// WARNING: Removing unreachable block (ram,0x080d022f)

int inst_284_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_284_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d02e5)
// WARNING: Removing unreachable block (ram,0x080d02d8)
// WARNING: Removing unreachable block (ram,0x080d02ff)

undefined4 inst_284_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_284_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d03b5)
// WARNING: Removing unreachable block (ram,0x080d03c2)

undefined4 inst_284_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_285_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d0490)
// WARNING: Removing unreachable block (ram,0x080d0476)
// WARNING: Removing unreachable block (ram,0x080d0483)
// WARNING: Removing unreachable block (ram,0x080d049d)

undefined4 inst_285_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_285_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d0544)
// WARNING: Removing unreachable block (ram,0x080d055e)

int inst_285_flags_var_1(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_285_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d062c)
// WARNING: Removing unreachable block (ram,0x080d0612)
// WARNING: Removing unreachable block (ram,0x080d061f)
// WARNING: Removing unreachable block (ram,0x080d0639)

int inst_285_flags_var_2(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_285_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d06fa)
// WARNING: Removing unreachable block (ram,0x080d06ed)
// WARNING: Removing unreachable block (ram,0x080d0707)

undefined4 inst_285_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_285_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d07c8)
// WARNING: Removing unreachable block (ram,0x080d07ae)
// WARNING: Removing unreachable block (ram,0x080d07bb)
// WARNING: Removing unreachable block (ram,0x080d07d5)

int inst_285_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_285_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d087c)
// WARNING: Removing unreachable block (ram,0x080d0889)
// WARNING: Removing unreachable block (ram,0x080d0896)

int inst_285_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_285_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d094a)
// WARNING: Removing unreachable block (ram,0x080d0957)

undefined4 inst_285_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_285_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d0a18)
// WARNING: Removing unreachable block (ram,0x080d0a25)
// WARNING: Removing unreachable block (ram,0x080d0a32)

int inst_285_flags_var_7(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar1 + -0x10;
}



undefined4 inst_285_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d0af3)

undefined4 inst_285_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_285_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d0bce)
// WARNING: Removing unreachable block (ram,0x080d0bb4)
// WARNING: Removing unreachable block (ram,0x080d0bc1)
// WARNING: Removing unreachable block (ram,0x080d0bdb)

undefined4 inst_285_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_AF;
  
  uVar1 = 0;
  if (in_AF) {
    uVar1 = 0x10;
  }
  return uVar1;
}



undefined4 inst_286_values_var_0(void)

{
  return 0;
}



undefined4 inst_286_flags_var_0(void)

{
  return 0;
}



undefined4 inst_286_values_var_1(void)

{
  return 0;
}



undefined4 inst_286_flags_var_1(void)

{
  return 0;
}



undefined4 inst_286_values_var_2(void)

{
  return 0;
}



undefined4 inst_286_flags_var_2(void)

{
  return 0;
}



undefined4 inst_286_values_var_3(void)

{
  return 0;
}



undefined4 inst_286_flags_var_3(void)

{
  return 0;
}



undefined4 inst_286_values_var_4(void)

{
  return 0;
}



undefined4 inst_286_flags_var_4(void)

{
  return 0;
}



undefined4 inst_286_values_var_5(void)

{
  return 0;
}



undefined4 inst_286_flags_var_5(void)

{
  return 0;
}



undefined4 inst_286_values_var_6(void)

{
  return 0;
}



undefined4 inst_286_flags_var_6(void)

{
  return 0;
}



undefined4 inst_286_values_var_7(void)

{
  return 0;
}



undefined4 inst_286_flags_var_7(void)

{
  return 0;
}



undefined4 inst_286_values_var_8(void)

{
  return 0;
}



undefined4 inst_286_flags_var_8(void)

{
  return 0;
}



undefined4 inst_286_values_var_9(void)

{
  return 0;
}



undefined4 inst_286_flags_var_9(void)

{
  return 0;
}



undefined4 inst_287_values_var_0(void)

{
  return 0;
}



undefined4 inst_287_flags_var_0(void)

{
  return 0;
}



undefined4 inst_287_values_var_1(void)

{
  return 0;
}



undefined4 inst_287_flags_var_1(void)

{
  return 0;
}



undefined4 inst_287_values_var_2(void)

{
  return 0;
}



undefined4 inst_287_flags_var_2(void)

{
  return 0;
}



undefined4 inst_287_values_var_3(void)

{
  return 0;
}



undefined4 inst_287_flags_var_3(void)

{
  return 0;
}



undefined4 inst_287_values_var_4(void)

{
  return 0;
}



undefined4 inst_287_flags_var_4(void)

{
  return 0;
}



undefined4 inst_287_values_var_5(void)

{
  return 0;
}



undefined4 inst_287_flags_var_5(void)

{
  return 0;
}



undefined4 inst_287_values_var_6(void)

{
  return 0;
}



undefined4 inst_287_flags_var_6(void)

{
  return 0;
}



undefined4 inst_287_values_var_7(void)

{
  return 0;
}



undefined4 inst_287_flags_var_7(void)

{
  return 0;
}



undefined4 inst_287_values_var_8(void)

{
  return 0;
}



undefined4 inst_287_flags_var_8(void)

{
  return 0;
}



undefined4 inst_287_values_var_9(void)

{
  return 0;
}



undefined4 inst_287_flags_var_9(void)

{
  return 0;
}



undefined4 inst_288_values_var_0(void)

{
  return 0;
}



undefined4 inst_288_flags_var_0(void)

{
  return 0;
}



undefined4 inst_288_values_var_1(void)

{
  return 0;
}



undefined4 inst_288_flags_var_1(void)

{
  return 0;
}



undefined4 inst_288_values_var_2(void)

{
  return 0;
}



undefined4 inst_288_flags_var_2(void)

{
  return 0;
}



undefined4 inst_288_values_var_3(void)

{
  return 0;
}



undefined4 inst_288_flags_var_3(void)

{
  return 0;
}



undefined4 inst_288_values_var_4(void)

{
  return 0;
}



undefined4 inst_288_flags_var_4(void)

{
  return 0;
}



undefined4 inst_288_values_var_5(void)

{
  return 0;
}



undefined4 inst_288_flags_var_5(void)

{
  return 0;
}



undefined4 inst_288_values_var_6(void)

{
  return 0;
}



undefined4 inst_288_flags_var_6(void)

{
  return 0;
}



undefined4 inst_288_values_var_7(void)

{
  return 0;
}



undefined4 inst_288_flags_var_7(void)

{
  return 0;
}



undefined4 inst_288_values_var_8(void)

{
  return 0;
}



undefined4 inst_288_flags_var_8(void)

{
  return 0;
}



undefined4 inst_288_values_var_9(void)

{
  return 0;
}



undefined4 inst_288_flags_var_9(void)

{
  return 0;
}



undefined4 inst_289_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d1f67)
// WARNING: Removing unreachable block (ram,0x080d1f74)

undefined4 inst_289_flags_var_0(void)

{
  return 0;
}



undefined4 inst_289_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d202a)
// WARNING: Removing unreachable block (ram,0x080d2037)

undefined4 inst_289_flags_var_1(void)

{
  return 0;
}



undefined4 inst_289_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d20ed)
// WARNING: Removing unreachable block (ram,0x080d20fa)

undefined4 inst_289_flags_var_2(void)

{
  return 0;
}



undefined4 inst_289_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d21ae)
// WARNING: Removing unreachable block (ram,0x080d21bb)

undefined4 inst_289_flags_var_3(void)

{
  return 0;
}



undefined4 inst_289_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2271)
// WARNING: Removing unreachable block (ram,0x080d227e)
// WARNING: Removing unreachable block (ram,0x080d228b)

undefined4 inst_289_flags_var_4(void)

{
  return 0;
}



undefined4 inst_289_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d234d)
// WARNING: Removing unreachable block (ram,0x080d2333)
// WARNING: Removing unreachable block (ram,0x080d2340)
// WARNING: Removing unreachable block (ram,0x080d235a)

undefined4 inst_289_flags_var_5(void)

{
  return 0;
}



undefined4 inst_289_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d23f6)
// WARNING: Removing unreachable block (ram,0x080d2403)

undefined4 inst_289_flags_var_6(void)

{
  return 0;
}



undefined4 inst_289_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d24c6)
// WARNING: Removing unreachable block (ram,0x080d24b9)
// WARNING: Removing unreachable block (ram,0x080d24e0)

undefined4 inst_289_flags_var_7(void)

{
  return 0;
}



undefined4 inst_289_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d257c)
// WARNING: Removing unreachable block (ram,0x080d2589)

undefined4 inst_289_flags_var_8(void)

{
  return 0;
}



undefined4 inst_289_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d263f)
// WARNING: Removing unreachable block (ram,0x080d264c)

undefined4 inst_289_flags_var_9(void)

{
  return 0;
}



undefined4 inst_290_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2700)
// WARNING: Removing unreachable block (ram,0x080d270d)
// WARNING: Removing unreachable block (ram,0x080d271a)

undefined4 inst_290_flags_var_0(void)

{
  return 0;
}



undefined4 inst_290_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d27db)
// WARNING: Removing unreachable block (ram,0x080d27c1)
// WARNING: Removing unreachable block (ram,0x080d27ce)
// WARNING: Removing unreachable block (ram,0x080d27e8)

undefined4 inst_290_flags_var_1(void)

{
  return 0;
}



undefined4 inst_290_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2882)
// WARNING: Removing unreachable block (ram,0x080d288f)

undefined4 inst_290_flags_var_2(void)

{
  return 0;
}



undefined4 inst_290_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2943)
// WARNING: Removing unreachable block (ram,0x080d2950)
// WARNING: Removing unreachable block (ram,0x080d295d)

undefined4 inst_290_flags_var_3(void)

{
  return 0;
}



undefined4 inst_290_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2a1e)
// WARNING: Removing unreachable block (ram,0x080d2a04)
// WARNING: Removing unreachable block (ram,0x080d2a11)
// WARNING: Removing unreachable block (ram,0x080d2a2b)

undefined4 inst_290_flags_var_4(void)

{
  return 0;
}



undefined4 inst_290_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2ad2)
// WARNING: Removing unreachable block (ram,0x080d2ac5)
// WARNING: Removing unreachable block (ram,0x080d2aec)

undefined4 inst_290_flags_var_5(void)

{
  return 0;
}



undefined4 inst_290_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2b93)
// WARNING: Removing unreachable block (ram,0x080d2b86)
// WARNING: Removing unreachable block (ram,0x080d2bad)

undefined4 inst_290_flags_var_6(void)

{
  return 0;
}



undefined4 inst_290_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2c47)
// WARNING: Removing unreachable block (ram,0x080d2c54)
// WARNING: Removing unreachable block (ram,0x080d2c61)

undefined4 inst_290_flags_var_7(void)

{
  return 0;
}



undefined4 inst_290_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2d08)
// WARNING: Removing unreachable block (ram,0x080d2d15)
// WARNING: Removing unreachable block (ram,0x080d2d22)

undefined4 inst_290_flags_var_8(void)

{
  return 0;
}



undefined4 inst_290_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2dc9)
// WARNING: Removing unreachable block (ram,0x080d2dd6)
// WARNING: Removing unreachable block (ram,0x080d2de3)

undefined4 inst_290_flags_var_9(void)

{
  return 0;
}



undefined4 inst_291_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2e8f)
// WARNING: Removing unreachable block (ram,0x080d2e9c)

undefined4 inst_291_flags_var_0(void)

{
  return 0;
}



undefined4 inst_291_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2f56)
// WARNING: Removing unreachable block (ram,0x080d2f63)

undefined4 inst_291_flags_var_1(void)

{
  return 0;
}



undefined4 inst_291_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d301c)
// WARNING: Removing unreachable block (ram,0x080d3029)
// WARNING: Removing unreachable block (ram,0x080d3036)

undefined4 inst_291_flags_var_2(void)

{
  return 0;
}



undefined4 inst_291_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d30fd)
// WARNING: Removing unreachable block (ram,0x080d30e3)
// WARNING: Removing unreachable block (ram,0x080d30f0)
// WARNING: Removing unreachable block (ram,0x080d310a)

undefined4 inst_291_flags_var_3(void)

{
  return 0;
}



undefined4 inst_291_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d31c4)
// WARNING: Removing unreachable block (ram,0x080d31aa)
// WARNING: Removing unreachable block (ram,0x080d31b7)
// WARNING: Removing unreachable block (ram,0x080d31d1)

undefined4 inst_291_flags_var_4(void)

{
  return 0;
}



undefined4 inst_291_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d328b)
// WARNING: Removing unreachable block (ram,0x080d3271)
// WARNING: Removing unreachable block (ram,0x080d327e)
// WARNING: Removing unreachable block (ram,0x080d3298)

undefined4 inst_291_flags_var_5(void)

{
  return 0;
}



undefined4 inst_291_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3351)
// WARNING: Removing unreachable block (ram,0x080d3337)
// WARNING: Removing unreachable block (ram,0x080d3344)
// WARNING: Removing unreachable block (ram,0x080d335e)

undefined4 inst_291_flags_var_6(void)

{
  return 0;
}



undefined4 inst_291_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3417)
// WARNING: Removing unreachable block (ram,0x080d33fd)
// WARNING: Removing unreachable block (ram,0x080d340a)
// WARNING: Removing unreachable block (ram,0x080d3424)

undefined4 inst_291_flags_var_7(void)

{
  return 0;
}



undefined4 inst_291_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d34de)
// WARNING: Removing unreachable block (ram,0x080d34c4)
// WARNING: Removing unreachable block (ram,0x080d34d1)
// WARNING: Removing unreachable block (ram,0x080d34eb)

undefined4 inst_291_flags_var_8(void)

{
  return 0;
}



undefined4 inst_291_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d35a5)
// WARNING: Removing unreachable block (ram,0x080d358b)
// WARNING: Removing unreachable block (ram,0x080d3598)
// WARNING: Removing unreachable block (ram,0x080d35b2)

undefined4 inst_291_flags_var_9(void)

{
  return 0;
}



undefined4 inst_292_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d364e)
// WARNING: Removing unreachable block (ram,0x080d365b)
// WARNING: Removing unreachable block (ram,0x080d3668)

undefined4 inst_292_flags_var_0(void)

{
  return 0;
}



undefined4 inst_292_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d371e)
// WARNING: Removing unreachable block (ram,0x080d3711)
// WARNING: Removing unreachable block (ram,0x080d3738)

undefined4 inst_292_flags_var_1(void)

{
  return 0;
}



undefined4 inst_292_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d37e1)
// WARNING: Removing unreachable block (ram,0x080d37d4)
// WARNING: Removing unreachable block (ram,0x080d37fb)

undefined4 inst_292_flags_var_2(void)

{
  return 0;
}



undefined4 inst_292_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d38a4)
// WARNING: Removing unreachable block (ram,0x080d3897)
// WARNING: Removing unreachable block (ram,0x080d38be)

undefined4 inst_292_flags_var_3(void)

{
  return 0;
}



undefined4 inst_292_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d395a)
// WARNING: Removing unreachable block (ram,0x080d3967)
// WARNING: Removing unreachable block (ram,0x080d3974)

undefined4 inst_292_flags_var_4(void)

{
  return 0;
}



undefined4 inst_292_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3a1d)
// WARNING: Removing unreachable block (ram,0x080d3a2a)

undefined4 inst_292_flags_var_5(void)

{
  return 0;
}



undefined4 inst_292_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3aed)
// WARNING: Removing unreachable block (ram,0x080d3ae0)
// WARNING: Removing unreachable block (ram,0x080d3b07)

undefined4 inst_292_flags_var_6(void)

{
  return 0;
}



undefined4 inst_292_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3ba3)
// WARNING: Removing unreachable block (ram,0x080d3bb0)

undefined4 inst_292_flags_var_7(void)

{
  return 0;
}



undefined4 inst_292_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3c80)
// WARNING: Removing unreachable block (ram,0x080d3c66)
// WARNING: Removing unreachable block (ram,0x080d3c73)
// WARNING: Removing unreachable block (ram,0x080d3c8d)

undefined4 inst_292_flags_var_8(void)

{
  return 0;
}



undefined4 inst_292_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3d29)
// WARNING: Removing unreachable block (ram,0x080d3d36)
// WARNING: Removing unreachable block (ram,0x080d3d43)

undefined4 inst_292_flags_var_9(void)

{
  return 0;
}



undefined4 inst_293_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3df1)
// WARNING: Removing unreachable block (ram,0x080d3dfe)

undefined4 inst_293_flags_var_0(void)

{
  return 0;
}



undefined4 inst_293_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3eb8)
// WARNING: Removing unreachable block (ram,0x080d3ec5)
// WARNING: Removing unreachable block (ram,0x080d3ed2)

undefined4 inst_293_flags_var_1(void)

{
  return 0;
}



undefined4 inst_293_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3f8e)
// WARNING: Removing unreachable block (ram,0x080d3f81)
// WARNING: Removing unreachable block (ram,0x080d3fa8)

undefined4 inst_293_flags_var_2(void)

{
  return 0;
}



undefined4 inst_293_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4049)
// WARNING: Removing unreachable block (ram,0x080d4056)

undefined4 inst_293_flags_var_3(void)

{
  return 0;
}



undefined4 inst_293_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d412c)
// WARNING: Removing unreachable block (ram,0x080d4112)
// WARNING: Removing unreachable block (ram,0x080d411f)
// WARNING: Removing unreachable block (ram,0x080d4139)

undefined4 inst_293_flags_var_4(void)

{
  return 0;
}



undefined4 inst_293_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d41db)
// WARNING: Removing unreachable block (ram,0x080d41e8)
// WARNING: Removing unreachable block (ram,0x080d41f5)

undefined4 inst_293_flags_var_5(void)

{
  return 0;
}



undefined4 inst_293_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d42a4)
// WARNING: Removing unreachable block (ram,0x080d42b1)

undefined4 inst_293_flags_var_6(void)

{
  return 0;
}



undefined4 inst_293_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4387)
// WARNING: Removing unreachable block (ram,0x080d436d)
// WARNING: Removing unreachable block (ram,0x080d437a)
// WARNING: Removing unreachable block (ram,0x080d4394)

undefined4 inst_293_flags_var_7(void)

{
  return 0;
}



undefined4 inst_293_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4450)
// WARNING: Removing unreachable block (ram,0x080d4436)
// WARNING: Removing unreachable block (ram,0x080d4443)
// WARNING: Removing unreachable block (ram,0x080d445d)

undefined4 inst_293_flags_var_8(void)

{
  return 0;
}



undefined4 inst_293_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d44ff)
// WARNING: Removing unreachable block (ram,0x080d450c)

undefined4 inst_293_flags_var_9(void)

{
  return 0;
}



undefined4 inst_294_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d45c0)
// WARNING: Removing unreachable block (ram,0x080d45cd)

undefined4 inst_294_flags_var_0(void)

{
  return 0;
}



undefined4 inst_294_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d468e)
// WARNING: Removing unreachable block (ram,0x080d4681)
// WARNING: Removing unreachable block (ram,0x080d46a8)

undefined4 inst_294_flags_var_1(void)

{
  return 0;
}



undefined4 inst_294_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4742)
// WARNING: Removing unreachable block (ram,0x080d474f)

undefined4 inst_294_flags_var_2(void)

{
  return 0;
}



undefined4 inst_294_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4810)
// WARNING: Removing unreachable block (ram,0x080d4803)
// WARNING: Removing unreachable block (ram,0x080d482a)

undefined4 inst_294_flags_var_3(void)

{
  return 0;
}



undefined4 inst_294_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d48d1)
// WARNING: Removing unreachable block (ram,0x080d48c4)
// WARNING: Removing unreachable block (ram,0x080d48eb)

undefined4 inst_294_flags_var_4(void)

{
  return 0;
}



undefined4 inst_294_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4992)
// WARNING: Removing unreachable block (ram,0x080d4985)
// WARNING: Removing unreachable block (ram,0x080d49ac)

undefined4 inst_294_flags_var_5(void)

{
  return 0;
}



undefined4 inst_294_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4a60)
// WARNING: Removing unreachable block (ram,0x080d4a46)
// WARNING: Removing unreachable block (ram,0x080d4a53)
// WARNING: Removing unreachable block (ram,0x080d4a6d)

undefined4 inst_294_flags_var_6(void)

{
  return 0;
}



undefined4 inst_294_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4b21)
// WARNING: Removing unreachable block (ram,0x080d4b07)
// WARNING: Removing unreachable block (ram,0x080d4b14)
// WARNING: Removing unreachable block (ram,0x080d4b2e)

undefined4 inst_294_flags_var_7(void)

{
  return 0;
}



undefined4 inst_294_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4bc8)
// WARNING: Removing unreachable block (ram,0x080d4bd5)
// WARNING: Removing unreachable block (ram,0x080d4be2)

undefined4 inst_294_flags_var_8(void)

{
  return 0;
}



undefined4 inst_294_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4c89)
// WARNING: Removing unreachable block (ram,0x080d4c96)

undefined4 inst_294_flags_var_9(void)

{
  return 0;
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


